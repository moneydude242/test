using G3MToolCLI.Services;

Console.WriteLine("G3MWebCore native test");

var original = "/workspaces/test/data.win";
var modified = "/workspaces/test/modified.data.win";
var patch = "/workspaces/test/test.g3mpatch";
var output = "/workspaces/test/patched.data.win";


Console.WriteLine("Creating patch...");

var createResult = await PatchService.CreatePatchAsync(
    original,
    modified,
    patch
);

Console.WriteLine($"Patch created: {createResult.Success}");

if (!createResult.Success)
{
    Console.WriteLine(createResult.Error);
    return;
}


Console.WriteLine("Applying patch...");

var applyResult = await PatchService.ApplyPatchAsync(
    original,
    patch,
    output
);

Console.WriteLine($"Patch applied: {applyResult.Success}");

if (!applyResult.Success)
{
    Console.WriteLine(applyResult.Error);
}