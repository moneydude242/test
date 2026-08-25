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

            var result = new System.Text.StringBuilder();

            result.AppendLine("=== UNDERTALE READER STATE DIAGNOSTIC ===");
            result.AppendLine();

            var reader = new UndertaleReader(
                stream,
                (warning, important) =>
                {
                    result.AppendLine(
                        $"[{(important ? "IMPORTANT" : "WARNING")}] {warning}");
                });

            var flags =
                System.Reflection.BindingFlags.Instance |
                System.Reflection.BindingFlags.Public |
                System.Reflection.BindingFlags.NonPublic;

            var bytecodeField = typeof(UndertaleReader).GetField(
                "BytecodeAddresses",
                flags);

            var countExceptionField = typeof(UndertaleReader).GetField(
                "countUnserializeExc",
                flags);

            result.AppendLine(
                "Initial BytecodeAddresses: " +
                (bytecodeField?.GetValue(reader) == null
                    ? "NULL"
                    : "INITIALIZED"));

            result.AppendLine(
                "Initial countUnserializeExc: " +
                (countExceptionField?.GetValue(reader) == null
                    ? "NULL"
                    : "EXCEPTION"));

            result.AppendLine();

            // Look for the CODE-specific counting method.
            var codeType = typeof(UndertaleModLib.Models.UndertaleCode);

            result.AppendLine("UndertaleCode methods:");

            foreach (var method in codeType.GetMethods(flags))
            {
                if (method.Name.Contains("Unserialize"))
                {
                    result.AppendLine(
                        $"  {method.Name} : {method}");
                }
            }

            result.AppendLine();

            // Look for the CODE chunk type.
            var codeChunkType =
                typeof(UndertaleModLib.UndertaleChunkCODE);

            result.AppendLine("UndertaleChunkCODE methods:");

            foreach (var method in codeChunkType.GetMethods(flags))
            {
                if (method.Name.Contains("Unserialize"))
                {
                    result.AppendLine(
                        $"  {method.Name} : {method}");
                }
            }

            result.AppendLine();

            // Inspect the reader's methods that perform object counting.
            result.AppendLine("UndertaleReader counting methods:");

            foreach (var method in typeof(UndertaleReader).GetMethods(flags))
            {
                if (method.Name.Contains("Count") ||
                    method.Name.Contains("count"))
                {
                    result.AppendLine(
                        $"  {method.Name} : {method}");
                }
            }

            result.AppendLine();
            result.AppendLine("=== STARTING NORMAL READ ===");
            result.AppendLine();

            try
            {
                reader.ReadUndertaleData();

                result.AppendLine("ReadUndertaleData: SUCCESS");
            }
            catch (Exception ex)
            {
                result.AppendLine("ReadUndertaleData: FAILED");
                result.AppendLine();
                result.AppendLine(ex.ToString());
            }

            result.AppendLine();

            result.AppendLine(
                "Final BytecodeAddresses: " +
                (bytecodeField?.GetValue(reader) == null
                    ? "NULL"
                    : "INITIALIZED"));

            var finalCountException =
                countExceptionField?.GetValue(reader) as Exception;

            result.AppendLine(
                "Final countUnserializeExc: " +
                (finalCountException == null
                    ? "NULL"
                    : "EXCEPTION"));

            if (finalCountException != null)
            {
                result.AppendLine();
                result.AppendLine("=== ORIGINAL OBJECT-COUNTING EXCEPTION ===");
                result.AppendLine();
                result.AppendLine(finalCountException.ToString());
                result.AppendLine();
                result.AppendLine("=== END ORIGINAL EXCEPTION ===");
            }

            result.AppendLine();
            result.AppendLine("=== END DIAGNOSTIC ===");

            result.AppendLine();
            result.AppendLine("=== END DIAGNOSTIC ===");

            return result.ToString();
        }
        catch (Exception ex)
        {
            return
                "DIAGNOSTIC ITSELF FAILED:\n\n" +
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