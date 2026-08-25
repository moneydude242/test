using System;
using System.IO;
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

    [JSExport]
    public static string TestUndertaleData()
    {
        try
        {
            var data = new UndertaleData();

            return "UndertaleData created successfully. Type: "
                + data.GetType().FullName;
        }
        catch (Exception ex)
        {
            return FormatException(ex);
        }
    }

    [JSExport]
    public static string TestReadDataWin(byte[] bytes)
    {
        try
        {
            using var stream = new MemoryStream(bytes, writable: false);

            Console.WriteLine(
                $"[G3MWebBridge] Starting UndertaleData.Read: {bytes.Length} bytes");

            var data = UndertaleIO.Read(stream);

            Console.WriteLine("[G3MWebBridge] UndertaleIO.Read succeeded.");

            return
                "SUCCESS — data.win parsed successfully.\n\n" +
                $"Bytes: {bytes.Length}\n" +
                $"Data type: {data.GetType().FullName}";
        }
        catch (Exception ex)
        {
            Console.WriteLine("[G3MWebBridge] data.win parsing FAILED.");
            Console.WriteLine(ex.ToString());

            return
                "FAILED — data.win parsing error:\n\n" +
                FormatException(ex);
        }
    }

    private static string FormatException(Exception ex)
    {
        var result = new System.Text.StringBuilder();

        int depth = 0;
        Exception? current = ex;

        while (current != null)
        {
            result.AppendLine($"--- Exception level {depth} ---");
            result.AppendLine($"Type: {current.GetType().FullName}");
            result.AppendLine($"Message: {current.Message}");
            result.AppendLine();
            result.AppendLine("Stack trace:");
            result.AppendLine(current.StackTrace ?? "(no stack trace)");
            result.AppendLine();

            current = current.InnerException;
            depth++;
        }

        return result.ToString();
    }
}