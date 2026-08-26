using System.Reflection;

if (args.Length == 0)
{
    Console.WriteLine("Usage: dotnet run -- <dll>");
    return;
}

var path = Path.GetFullPath(args[0]);

Console.WriteLine($"Loading: {path}");

var asm = Assembly.LoadFrom(path);

Console.WriteLine($"Assembly: {asm.FullName}");

var type = asm.GetType("UndertaleModLib.Models.UndertaleOptions");

Console.WriteLine($"Options type: {type}");

if (type == null)
    return;

var method = type.GetMethod(
    "UnserializeChildObjectCount",
    BindingFlags.Public |
    BindingFlags.Static,
    binder: null,
    types: new[]
    {
        asm.GetType("UndertaleModLib.UndertaleReader")!
    },
    modifiers: null);

Console.WriteLine($"Options count method: {method}");
Console.WriteLine();

Console.WriteLine("All Options methods:");

foreach (var m in type.GetMethods(
    BindingFlags.Public |
    BindingFlags.NonPublic |
    BindingFlags.Static |
    BindingFlags.Instance))
{
    Console.WriteLine(m);
}