using System;
using System.IO;
using System.Reflection;
using System.Runtime.InteropServices.JavaScript;
using System.Collections.Generic;
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
    
    private static string RegisterAllUnserializeCountFunctions(
        UndertaleReader reader)
    {
        var result = new System.Text.StringBuilder();

        var assembly = typeof(UndertaleReader).Assembly;

        var dictField = typeof(UndertaleReader).GetField(
            "unserializeFuncDict",
            BindingFlags.Instance | BindingFlags.NonPublic);

        if (dictField == null)
            return "ERROR: unserializeFuncDict field not found.";

        if (dictField.GetValue(reader)
            is not Dictionary<Type, Func<UndertaleReader, uint>> dict)
        {
            return "ERROR: unserializeFuncDict has an unexpected type.";
        }

        int registered = 0;
        int alreadyRegistered = 0;
        int skipped = 0;
        int failed = 0;

        var countMethodFlags =
            BindingFlags.Public |
            BindingFlags.NonPublic |
            BindingFlags.Static;

        foreach (var type in assembly.GetTypes())
        {
            if (!typeof(UndertaleObject).IsAssignableFrom(type))
                continue;

            if (type.ContainsGenericParameters)
                continue;

            var method = type.GetMethod(
                "UnserializeChildObjectCount",
                countMethodFlags,
                binder: null,
                types: new[] { typeof(UndertaleReader) },
                modifiers: null);

            if (method == null)
            {
                skipped++;
                continue;
            }

            if (dict.ContainsKey(type))
            {
                alreadyRegistered++;
                continue;
            }

            try
            {
                var func =
                    (Func<UndertaleReader, uint>)
                    method.CreateDelegate(
                        typeof(Func<UndertaleReader, uint>));

                dict.Add(type, func);
                registered++;
            }
            catch (Exception ex)
            {
                failed++;

                result.AppendLine(
                    $"FAILED: {type.FullName}");
                result.AppendLine(ex.ToString());
            }
        }

        result.AppendLine(
            $"Registered {registered} missing count functions.");

        result.AppendLine(
            $"Already registered: {alreadyRegistered}");

        result.AppendLine(
            $"Skipped {skipped} types without count functions.");

        result.AppendLine(
            $"Failed: {failed}");

        result.AppendLine(
            $"Final unserializeFuncDict count: {dict.Count}");

        return result.ToString();
    }

    [JSExport]
    public static string TestReadDataWin(byte[] bytes)
    {
        try
        {
            using var stream = new MemoryStream(bytes, writable: false);

            var result = new System.Text.StringBuilder();

            result.AppendLine("=== G3MWebBridge data.win test ===");
            result.AppendLine($"Bytes: {bytes.Length}");
            result.AppendLine();

            var reader = new UndertaleReader(
                stream,
                (warning, important) =>
                {
                    result.AppendLine(
                        $"[{(important ? "IMPORTANT" : "WARNING")}] {warning}");
                });

            result.AppendLine("Repairing UndertaleModLib count-function registry...");

            var repairResult =
                RegisterAllUnserializeCountFunctions(reader);

            result.AppendLine(repairResult);
            result.AppendLine();

            result.AppendLine("Reading data.win...");

            reader.ReadUndertaleData();

            result.AppendLine();
            result.AppendLine("ReadUndertaleData: SUCCESS");

            return result.ToString();
        }
        catch (Exception ex)
        {
            Console.WriteLine(
                "[G3MWebBridge] data.win parsing FAILED.");

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