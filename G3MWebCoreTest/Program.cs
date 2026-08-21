using G3MToolCLI.Services;

const string Root = "/workspaces/test";

Console.WriteLine("G3MWebCore Regression Tests");
Console.WriteLine("===========================");
Console.WriteLine();

var tests = new[]
{
    ("XDelta Conversion Test", (Func<Task<bool>>)(() => RegressionTests.RunXDeltaConversionTestAsync(Root))),
    ("Single Patch Test", (Func<Task<bool>>)(() => RegressionTests.RunSinglePatchTestAsync(Root))),
    ("Merge Test", (Func<Task<bool>>)(() => RegressionTests.RunMergeTestAsync(Root)))
};

int passed = 0;

foreach (var (name, test) in tests)
{
    Console.WriteLine($"=== {name} ===");

    try
    {
        if (await test())
        {
            Console.WriteLine($"PASS: {name}");
            passed++;
        }
        else
        {
            Console.WriteLine($"FAIL: {name}");
        }
    }
    catch (Exception ex)
    {
        Console.WriteLine($"FAIL: {name}");
        Console.WriteLine($"Error: {ex.Message}");
    }

    Console.WriteLine();
}

Console.WriteLine("===========================");
Console.WriteLine($"Passed: {passed}/{tests.Length}");

return passed == tests.Length ? 0 : 1;
