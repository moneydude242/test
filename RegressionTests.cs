using System.Security.Cryptography;
using G3MToolCLI.Services;

public static class RegressionTests
{
    public static async Task<bool> RunXDeltaConversionTestAsync(string root)
    {
        var original = Path.Combine(root, "data.win");
        var xdelta = Path.Combine(root, "everyitem.xdelta");
        var patch = Path.Combine(root, "regression_everyitem.g3mpatch");
        var output = Path.Combine(root, "regression_everyitem.data.win");
        var expected = Path.Combine(root, "everyitem.from.xdelta.data.win");

        RequireFile(original);
        RequireFile(xdelta);
        RequireFile(expected);

        DeleteIfExists(patch);
        DeleteIfExists(output);

        Console.WriteLine("Creating .g3mpatch from everyitem.xdelta...");

        var create = await PatchService.CreatePatchAsync(original, xdelta, patch);

        if (!create.Success)
        {
            Console.WriteLine($"Create failed: {create.Error}");
            return false;
        }

        Console.WriteLine("Applying converted .g3mpatch...");

        var apply = await PatchService.ApplyPatchAsync(original, patch, output);

        if (!apply.Success)
        {
            Console.WriteLine($"Apply failed: {apply.Error}");
            return false;
        }

        return await CompareSha256Async(
            expected,
            output,
            "xdelta target",
            "converted patch output"
        );
    }

    public static async Task<bool> RunSinglePatchTestAsync(string root)
    {
        var original = Path.Combine(root, "data.win");
        var patch = Path.Combine(root, "everyitem.g3mpatch");
        var output = Path.Combine(root, "regression_single.data.win");
        var expected = Path.Combine(root, "everyitem.from.xdelta.data.win");

        RequireFile(original);
        RequireFile(patch);
        RequireFile(expected);

        DeleteIfExists(output);

        Console.WriteLine("Applying everyitem.g3mpatch...");

        var apply = await PatchService.ApplyPatchAsync(original, patch, output);

        if (!apply.Success)
        {
            Console.WriteLine($"Apply failed: {apply.Error}");
            return false;
        }

        return await CompareSha256Async(
            expected,
            output,
            "xdelta target",
            "single patch output"
        );
    }

    public static async Task<bool> RunMergeTestAsync(string root)
    {
        var original = Path.Combine(root, "data.win");
        var everyItem = Path.Combine(root, "everyitem.xdelta");
        var inView = Path.Combine(root, "inview.xdelta");
        var patch = Path.Combine(root, "regression_everyitem_inview.g3mpatch");
        var output = Path.Combine(root, "regression_merged.data.win");
        var expected = Path.Combine(root, "native_merged.data.win");

        RequireFile(original);
        RequireFile(everyItem);
        RequireFile(inView);
        RequireFile(expected);

        DeleteIfExists(patch);
        DeleteIfExists(output);

        Console.WriteLine("Merging everyitem.xdelta + inview.xdelta...");

        var result = await MergeService.MergePatchesAsync(
            original,
            new List<string> { everyItem, inView },
            new MergeOptions { OutputPath = patch }
        );

        if (!result.Success)
        {
            Console.WriteLine($"Merge failed: {result.Error}");
            return false;
        }

        Console.WriteLine(
            $"Merge result: {result.TotalConflicts} conflicts, " +
            $"{result.AutoMerged} auto-merged"
        );

        Console.WriteLine("Applying merged .g3mpatch...");

        var apply = await PatchService.ApplyPatchAsync(original, patch, output);

        if (!apply.Success)
        {
            Console.WriteLine($"Apply failed: {apply.Error}");
            return false;
        }

        return await CompareSha256Async(
            expected,
            output,
            "original G3MTool merged result",
            "G3MWebCore merged result"
        );
    }

    private static async Task<bool> CompareSha256Async(
        string expectedPath,
        string actualPath,
        string expectedLabel,
        string actualLabel)
    {
        var expectedHash = await ComputeSha256Async(expectedPath);
        var actualHash = await ComputeSha256Async(actualPath);

        Console.WriteLine($"{expectedLabel}: {expectedHash}");
        Console.WriteLine($"{actualLabel}: {actualHash}");

        if (string.Equals(expectedHash, actualHash, StringComparison.OrdinalIgnoreCase))
        {
            Console.WriteLine("SHA256 match.");
            return true;
        }

        Console.WriteLine("SHA256 mismatch.");
        return false;
    }

    private static async Task<string> ComputeSha256Async(string path)
    {
        await using var stream = new FileStream(
            path,
            FileMode.Open,
            FileAccess.Read,
            FileShare.Read,
            bufferSize: 1024 * 1024,
            options: FileOptions.SequentialScan);

        var hash = await SHA256.HashDataAsync(stream);
        return Convert.ToHexString(hash);
    }

    private static void RequireFile(string path)
    {
        if (!File.Exists(path))
            throw new FileNotFoundException($"Required test file not found: {path}", path);
    }

    private static void DeleteIfExists(string path)
    {
        if (File.Exists(path))
            File.Delete(path);
    }
}
