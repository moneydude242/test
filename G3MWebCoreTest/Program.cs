using System.IO.Compression;
using System.Security.Cryptography;
using G3MToolCLI.Services;

const string root = "/workspaces/test";

string modName = args.Length > 0
    ? args[0]
    : "everyitem";

string original = Path.Combine(root, "data.win");
string xdelta = Path.Combine(root, $"{modName}.xdelta");

string exactTarget = Path.Combine(
    root,
    $"{modName}.from.xdelta.data.win");

string convertedPatch = Path.Combine(
    root,
    $"{modName}.from.xdelta.g3mpatch");

string semanticPatch = Path.Combine(
    root,
    $"{modName}.semantic.g3mpatch");

string semanticOutput = Path.Combine(
    root,
    $"{modName}.semantic.data.win");


Console.WriteLine("G3MWebCore Patch Generation Test");
Console.WriteLine("================================");
Console.WriteLine($"Mod: {modName}");
Console.WriteLine();

RequireFile(original);
RequireFile(xdelta);

DeleteIfExists(exactTarget);
DeleteIfExists(convertedPatch);
DeleteIfExists(semanticPatch);
DeleteIfExists(semanticOutput);


// ------------------------------------------------------------
// 1. Apply xdelta directly
// ------------------------------------------------------------

Console.WriteLine("1. Applying xdelta...");

var xdeltaService = new XDeltaService();

var xdeltaResult = await xdeltaService.ApplyPatchAsync(
    original,
    xdelta,
    exactTarget);

if (!xdeltaResult.Success)
{
    Console.WriteLine(xdeltaResult.Error);
    return 1;
}

Console.WriteLine($"Created {exactTarget}");
Console.WriteLine();


// ------------------------------------------------------------
// 2. Convert xdelta -> g3mpatch
// ------------------------------------------------------------

Console.WriteLine("2. Creating G3M patch...");

var patchResult = await PatchService.CreatePatchAsync(
    original,
    xdelta,
    convertedPatch);

if (!patchResult.Success)
{
    Console.WriteLine(patchResult.Error);
    return 1;
}

Console.WriteLine($"Created {convertedPatch}");
Console.WriteLine();


// ------------------------------------------------------------
// 3. Remove Exact fallback
// ------------------------------------------------------------

Console.WriteLine("3. Creating semantic-only patch...");

CreateSemanticPatch(
    convertedPatch,
    semanticPatch);

Console.WriteLine($"Created {semanticPatch}");
Console.WriteLine();


// ------------------------------------------------------------
// 4. Apply semantic patch
// ------------------------------------------------------------

Console.WriteLine("4. Applying semantic patch...");

var applyResult = await PatchService.ApplyPatchAsync(
    original,
    semanticPatch,
    semanticOutput);

if (!applyResult.Success)
{
    Console.WriteLine(applyResult.Error);
    return 1;
}

Console.WriteLine($"Created {semanticOutput}");
Console.WriteLine();


// ------------------------------------------------------------
// 5. Compare binaries
// ------------------------------------------------------------

Console.WriteLine("5. Comparing binaries...");

var exactHash = await ComputeSha256Async(exactTarget);
var semanticHash = await ComputeSha256Async(semanticOutput);

Console.WriteLine($"Xdelta result:    {exactHash}");
Console.WriteLine($"Semantic result:  {semanticHash}");

if (exactHash == semanticHash)
{
    Console.WriteLine();
    Console.WriteLine("Binary files MATCH.");
}
else
{
    Console.WriteLine();
    Console.WriteLine("Binary files differ.");
    Console.WriteLine(
        "This is normal for semantic reconstruction.");
}


Console.WriteLine();
Console.WriteLine("Done.");

return 0;



// ------------------------------------------------------------
// Helpers
// ------------------------------------------------------------

static void RequireFile(string path)
{
    if (!File.Exists(path))
        throw new FileNotFoundException(path);
}


static void DeleteIfExists(string path)
{
    if (File.Exists(path))
        File.Delete(path);
}


static void CreateSemanticPatch(
    string sourcePatch,
    string outputPatch)
{
    using var source = ZipFile.OpenRead(sourcePatch);

    using var output = new ZipArchive(
        File.Create(outputPatch),
        ZipArchiveMode.Create);

    foreach (var entry in source.Entries)
    {
        if (entry.FullName.StartsWith(
            "Exact/",
            StringComparison.OrdinalIgnoreCase))
        {
            continue;
        }

        var newEntry = output.CreateEntry(
            entry.FullName,
            CompressionLevel.NoCompression);

        using var input = entry.Open();
        using var destination = newEntry.Open();

        input.CopyTo(destination);
    }
}


static async Task<string> ComputeSha256Async(string path)
{
    await using var stream = new FileStream(
        path,
        FileMode.Open,
        FileAccess.Read,
        FileShare.Read,
        bufferSize: 1024 * 1024,
        FileOptions.SequentialScan);

    var hash = await SHA256.HashDataAsync(stream);

    return Convert.ToHexString(hash);
}