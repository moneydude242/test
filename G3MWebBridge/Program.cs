using System;
using System.Runtime.InteropServices.JavaScript;
using UndertaleModLib;

public partial class Program
{
    public static void Main()
    {
        Console.WriteLine("G3MWebBridge WASM initialized.");
    }

    [JSExport]
    public static string GetLibraryInfo()
    {
        return typeof(UndertaleData).Assembly.FullName
            ?? "UndertaleModLib loaded";
    }
}