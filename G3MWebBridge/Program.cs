using System;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Threading.Tasks;
using System.Collections.Generic;
using System.Runtime.InteropServices.JavaScript;
using System.Collections;

using UndertaleModLib;
using UndertaleModLib.Models;

using G3MToolCLI.Models;
using G3MToolCLI.Services;


public partial class Program
{
    public static void Main()
    {
        Console.WriteLine("G3MWebBridge WASM initialized.");
    }

    [JSExport]
    public static string GetLibraryInfo()
    {
        try
        {
            var bridgeAssembly = Assembly.GetExecutingAssembly();
            var libraryAssembly = typeof(UndertaleData).Assembly;

            return
                "BRIDGE ASSEMBLY: " + bridgeAssembly.FullName +
                "\nLIBRARY ASSEMBLY: " + libraryAssembly.FullName +
                "\nLIBRARY LOCATION: " + (libraryAssembly.Location ?? "(empty)") +
                "\nBRIDGE LOCATION: " + (bridgeAssembly.Location ?? "(empty)");
        }
        catch (Exception ex)
        {
            return "GetLibraryInfo FAILED:\n\n" + FormatException(ex);
        }
    }

    [JSExport]
    public static string TestUndertaleData()
    {
        try
        {
            var data = new UndertaleData();

            return
                "SUCCESS — UndertaleData created.\n" +
                "Type: " + data.GetType().FullName + "\n" +
                "Assembly: " + data.GetType().Assembly.FullName;
        }
        catch (Exception ex)
        {
            return
                "FAILED — UndertaleData construction:\n\n" +
                FormatException(ex);
        }
    }

    [JSExport]
    public static string TestWarningCallback()
    {
        try
        {
            using var stream = new MemoryStream(
                new byte[16],
                writable: false);

            var result = new StringBuilder();

            var reader = new UndertaleReader(
                stream,
                (warning, important) =>
                {
                    result.AppendLine(
                        $"CALLBACK RECEIVED: " +
                        $"[{(important ? "IMPORTANT" : "WARNING")}] {warning}");
                },
                message =>
                {
                    result.AppendLine(
                        $"MESSAGE RECEIVED: {message}");
                });

            result.AppendLine("Reader constructed.");

            reader.SubmitWarning(
                "TEST WARNING — if you see this, SubmitWarning works.",
                false);

            result.AppendLine(
                "SubmitWarning returned normally.");

            return result.ToString();
        }
        catch (Exception ex)
        {
            return
                "TEST FAILED:\n\n" +
                FormatException(ex);
        }
    }

    [JSExport]
    public static string TestGeneralInfoReflection()
    {
        try
        {
            using var stream = new MemoryStream();
            var reader = new UndertaleReader(stream);

            var type = typeof(UndertaleGeneralInfo);

            return DescribeCountMethod(
                "GENERAL INFO REFLECTION",
                type);
        }
        catch (Exception ex)
        {
            return
                "GENERAL INFO REFLECTION FAILED:\n\n" +
                FormatException(ex);
        }
    }

    [JSExport]
    public static string TestOptionsReflection()
    {
        try
        {
            using var stream = new MemoryStream();
            var reader = new UndertaleReader(stream);

            var type = typeof(UndertaleOptions);
            var result = new StringBuilder();

            result.AppendLine("=== OPTIONS REFLECTION ===");
            result.AppendLine($"TYPE: {type.FullName}");
            result.AppendLine(
                $"TYPE ASSEMBLY: {type.Assembly.FullName}");
            result.AppendLine(
                $"READER TYPE: {typeof(UndertaleReader).FullName}");
            result.AppendLine(
                $"READER ASSEMBLY: {typeof(UndertaleReader).Assembly.FullName}");

            var method = FindCountMethod(type);

            result.AppendLine(
                $"METHOD FOUND: {method != null}");

            if (method != null)
            {
                result.AppendLine($"METHOD NAME: {method.Name}");
                result.AppendLine($"METHOD STATIC: {method.IsStatic}");
                result.AppendLine($"METHOD PUBLIC: {method.IsPublic}");
                result.AppendLine(
                    $"METHOD RETURN: {method.ReturnType.FullName}");

                var parameters = method.GetParameters();

                result.AppendLine(
                    $"PARAM COUNT: {parameters.Length}");

                foreach (var parameter in parameters)
                {
                    result.AppendLine(
                        $"PARAM: {parameter.Name} | " +
                        $"TYPE={parameter.ParameterType.FullName}");
                }

                try
                {
                    var func = Delegate.CreateDelegate(
                        typeof(Func<UndertaleReader, uint>),
                        method) as Func<UndertaleReader, uint>;

                    result.AppendLine(
                        $"DELEGATE CREATED: {func != null}");
                }
                catch (Exception ex)
                {
                    result.AppendLine(
                        $"DELEGATE CREATION FAILED: {ex}");
                }
            }

            result.AppendLine();
            result.AppendLine("=== ALL MATCHING METHODS ===");

            foreach (var methodInfo in type.GetMethods(
                BindingFlags.Public |
                BindingFlags.NonPublic |
                BindingFlags.Static |
                BindingFlags.Instance))
            {
                if (!methodInfo.Name.Contains("Unserialize"))
                    continue;

                result.AppendLine(
                    $"METHOD: {methodInfo.Name} | " +
                    $"STATIC={methodInfo.IsStatic} | " +
                    $"PUBLIC={methodInfo.IsPublic} | " +
                    $"RETURN={methodInfo.ReturnType.FullName}");
            }

            result.AppendLine();
            result.AppendLine("=== END OPTIONS REFLECTION ===");

            return result.ToString();
        }
        catch (Exception ex)
        {
            return
                "OPTIONS REFLECTION FAILED:\n\n" +
                FormatException(ex);
        }
    }

    [JSExport]
    public static string TestFeatureFlagsReflection()
    {
        try
        {
            var result = new StringBuilder();
            var type = typeof(UndertaleFeatureFlags);

            result.AppendLine("=== FEATURE FLAGS REFLECTION TEST ===");
            result.AppendLine($"TYPE: {type.FullName}");
            result.AppendLine(
                $"ASSEMBLY: {type.Assembly.FullName}");
            result.AppendLine(
                $"BASE TYPE: {type.BaseType}");
            result.AppendLine(
                $"UNDERTALE OBJECT: " +
                $"{type.IsAssignableTo(typeof(UndertaleObject))}");

            var method = FindCountMethod(type);

            result.AppendLine(
                $"UnserializeChildObjectCount: " +
                $"{(method == null ? "MISSING" : method.ToString())}");

            result.AppendLine();
            result.AppendLine("ALL FEATURE FLAGS METHODS:");

            foreach (var methodInfo in type.GetMethods(
                BindingFlags.Public |
                BindingFlags.NonPublic |
                BindingFlags.Static |
                BindingFlags.Instance |
                BindingFlags.FlattenHierarchy))
            {
                result.AppendLine("  " + methodInfo);
            }

            result.AppendLine();
            result.AppendLine("=== END FEATURE FLAGS REFLECTION TEST ===");

            return result.ToString();
        }
        catch (Exception ex)
        {
            return
                "FEATURE FLAGS REFLECTION FAILED:\n\n" +
                FormatException(ex);
        }
    }

    [JSExport]
    public static string TestTagsRegistrationPath()
    {
        try
        {
            var result = new StringBuilder();
            var assembly = typeof(UndertaleReader).Assembly;

            result.AppendLine(
                "=== UNDERTALEMODLIB REGISTRATION PATH ===");

            result.AppendLine(
                $"Assembly: {assembly.FullName}");

            var allTypes = assembly.GetTypes();

            result.AppendLine(
                $"Assembly type count: {allTypes.Length}");

            result.AppendLine();

            var targetTypes = new[]
            {
                typeof(UndertaleGeneralInfo),
                typeof(UndertaleOptions),
                typeof(UndertaleTags),
                typeof(UndertaleCode),
                typeof(UndertaleFeatureFlags)
            };

            foreach (var requestedType in targetTypes)
            {
                result.AppendLine(
                    $"=== {requestedType.FullName} ===");

                var targetType = allTypes.FirstOrDefault(
                    type => type.FullName == requestedType.FullName);

                result.AppendLine(
                    $"Found in GetTypes(): {targetType != null}");

                result.AppendLine(
                    $"Same as typeof lookup: " +
                    $"{targetType == assembly.GetType(requestedType.FullName!)}");

                if (targetType != null)
                {
                    result.AppendLine(
                        $"Assignable to UndertaleObject: " +
                        $"{targetType.IsAssignableTo(
                            typeof(UndertaleObject))}");

                    result.AppendLine(
                        $"ContainsGenericParameters: " +
                        $"{targetType.ContainsGenericParameters}");

                    var method = FindCountMethod(targetType);

                    result.AppendLine(
                        $"Count method found: {method != null}");

                    if (method != null)
                    {
                        result.AppendLine(
                            $"Count method: {method}");
                    }
                }

                result.AppendLine();
            }

            result.AppendLine(
                "=== END UNDERTALEMODLIB REGISTRATION PATH ===");

            return result.ToString();
        }
        catch (Exception ex)
        {
            return
                "REGISTRATION PATH TEST FAILED:\n\n" +
                FormatException(ex);
        }
    }

    [JSExport]
    public static string TestTagsAndCodeMethods()
    {
        try
        {
            var result = new StringBuilder();

            var targets = new[]
            {
                typeof(UndertaleTags),
                typeof(UndertaleCode),
                typeof(UndertaleChunkCODE),
                typeof(UndertaleReader)
            };

            var flags =
                BindingFlags.Public |
                BindingFlags.NonPublic |
                BindingFlags.Static |
                BindingFlags.Instance |
                BindingFlags.FlattenHierarchy;

            foreach (var type in targets)
            {
                result.AppendLine(
                    $"=== {type.FullName} ===");

                result.AppendLine(
                    $"Assembly: {type.Assembly.FullName}");

                result.AppendLine();

                foreach (var method in type.GetMethods(flags)
                             .OrderBy(m => m.Name))
                {
                    if (!method.Name.Contains("Unserialize") &&
                        !method.Name.Contains("Count") &&
                        !method.Name.Contains("count"))
                    {
                        continue;
                    }

                    result.AppendLine(
                        $"{method.Name} | " +
                        $"STATIC={method.IsStatic} | " +
                        $"PUBLIC={method.IsPublic} | " +
                        $"RETURN={method.ReturnType}");
                }

                result.AppendLine();
            }

            result.AppendLine(
                "=== END METHOD DIAGNOSTIC ===");

            return result.ToString();
        }
        catch (Exception ex)
        {
            return
                "METHOD DIAGNOSTIC FAILED:\n\n" +
                FormatException(ex);
        }
    }

    [JSExport]
    public static string TestReadDataWin(byte[] bytes)
    {
        var result = new StringBuilder();
        UndertaleReader? reader = null;

        try
        {
            result.AppendLine(
                "=== G3MWebBridge data.win diagnostic ===");

            result.AppendLine(
                $"Bytes supplied: {bytes.Length}");

            result.AppendLine();

            result.AppendLine("=== ASSEMBLY IDENTITY ===");
            result.AppendLine(GetLibraryInfo());
            result.AppendLine();

            result.AppendLine("Creating MemoryStream...");

            using var stream = new MemoryStream(
                bytes,
                writable: false);

            result.AppendLine("Creating UndertaleReader...");

            reader = new UndertaleReader(
                stream,
                (warning, important) =>
                {
                    result.AppendLine(
                        $"[{(important ? "IMPORTANT" : "WARNING")}] {warning}");
                },
                message =>
                {
                    result.AppendLine(
                        $"[MESSAGE] {message}");
                });

            result.AppendLine("UndertaleReader created.");

            AppendReaderFieldState(
                result,
                reader,
                "INITIAL READER STATE");

            AppendCountDictionaryDiagnostic(
                result,
                reader);

            AppendCodeRegistrationDiagnostic(
                result,
                reader);

            AppendCountMethodDiagnostic(
                result,
                typeof(UndertaleGeneralInfo));

            AppendCountMethodDiagnostic(
                result,
                typeof(UndertaleOptions));

            AppendCountMethodDiagnostic(
                result,
                typeof(UndertaleTags));

            AppendCountMethodDiagnostic(
                result,
                typeof(UndertaleCode));

            AppendCountMethodDiagnostic(
                result,
                typeof(UndertaleFeatureFlags));

            AppendMethodListDiagnostic(
                result,
                typeof(UndertaleCode),
                "UNDERTALECODE METHODS");

            AppendMethodListDiagnostic(
                result,
                typeof(UndertaleChunkCODE),
                "UNDERTALECHUNKCODE METHODS");

            AppendReaderCountingMethods(
                result);

            result.AppendLine();
            result.AppendLine(
                "=== PRE-READ STATE ===");

            AppendReaderFieldState(
                result,
                reader,
                "PRE-READ");

            result.AppendLine(
                "About to call reader.ReadUndertaleData().");

            result.AppendLine();

            try
            {
                var data = reader.ReadUndertaleData();

                result.AppendLine(
                    "=== ReadUndertaleData SUCCEEDED ===");

                result.AppendLine(
                    $"FORM exists: {data.FORM != null}");

                result.AppendLine(
                    $"Strings: {data.Strings?.Count}");

                result.AppendLine(
                    $"Code entries: {data.Code?.Count}");

                result.AppendLine(
                    $"Sprites: {data.Sprites?.Count}");

                result.AppendLine(
                    $"Backgrounds: {data.Backgrounds?.Count}");

                result.AppendLine(
                    $"Rooms: {data.Rooms?.Count}");

                AppendReaderFieldState(
                    result,
                    reader,
                    "POST-SUCCESS");

                return result.ToString();
            }
            catch (Exception ex)
            {
                result.AppendLine();
                result.AppendLine(
                    "=== EXCEPTION CAUGHT DURING READ ===");

                result.AppendLine(
                    FormatException(ex));

                result.AppendLine();
                result.AppendLine(
                    "=== READER STATE AFTER FAILURE ===");

                AppendReaderFieldState(
                    result,
                    reader,
                    "AFTER FAILURE");

                AppendCountDictionaryDiagnostic(
                    result,
                    reader);

                var countException =
                    GetPrivateFieldValue(
                        reader,
                        "countUnserializeExc") as Exception;

                result.AppendLine();
                result.AppendLine(
                    "=== OBJECT COUNTING EXCEPTION ===");

                if (countException == null)
                {
                    result.AppendLine("countUnserializeExc: NULL");
                }
                else
                {
                    result.AppendLine(
                        "countUnserializeExc: EXCEPTION");

                    result.AppendLine();

                    result.AppendLine(
                        FormatException(countException));
                }

                result.AppendLine(
                    "=== END OBJECT COUNTING EXCEPTION ===");

                return result.ToString();
            }
        }
        catch (Exception ex)
        {
            result.AppendLine();
            result.AppendLine(
                "=== DIAGNOSTIC ITSELF FAILED ===");

            result.AppendLine(
                FormatException(ex));

            return result.ToString();
        }
    }
[JSExport]
public static byte[] ApplyG3MPatch(
    byte[] dataBytes,
    byte[] patchBytes)
{
    var diagnostics = new StringBuilder();

    try
    {
        diagnostics.AppendLine(
            $"[BrowserPatch] data.win bytes: {dataBytes.Length}");

        diagnostics.AppendLine(
            $"[BrowserPatch] patch bytes: {patchBytes.Length}");

        // ------------------------------------------------------------
        // Read data.win with the same UndertaleReader path that the
        // working browser diagnostic uses.
        // ------------------------------------------------------------

        using var dataStream =
            new MemoryStream(
                dataBytes,
                writable: false);

        UndertaleData data;

        using (var reader = new UndertaleReader(
            dataStream,
            (warning, important) =>
            {
                diagnostics.AppendLine(
                    $"[{(important ? "IMPORTANT" : "WARNING")}] {warning}");
            },
            message =>
            {
                diagnostics.AppendLine(
                    $"[MESSAGE] {message}");
            }))
        {
            diagnostics.AppendLine(
                "[BrowserPatch] UndertaleReader created.");

            data = reader.ReadUndertaleData();
        }

        diagnostics.AppendLine(
            "[BrowserPatch] data.win parsed successfully.");

        // ------------------------------------------------------------
        // Load .g3mpatch directly from bytes.
        // ------------------------------------------------------------

        var pfs =
            PatchFileSystem.LoadFromBytes(
                patchBytes);

        diagnostics.AppendLine(
            $"[BrowserPatch] Patch loaded: " +
            $"{pfs.FileCount} files, " +
            $"{pfs.GmlEntries.Count} GML, " +
            $"{pfs.AsmEntries.Count} ASM");

        if (pfs.Manifest != null)
        {
            diagnostics.AppendLine(
                $"[BrowserPatch] Manifest version: " +
                $"{pfs.Manifest.Version}");
        }

        // ------------------------------------------------------------
        // Apply semantic patch.
        // ------------------------------------------------------------

var result =
    PatchService.ApplyPatchToDataAsync(
        data,
        pfs).GetAwaiter().GetResult();

        if (!result.Success)
        {
            throw new Exception(
                result.Error ??
                "Semantic patch application failed.");
        }

        diagnostics.AppendLine(
            "[BrowserPatch] Semantic patch applied.");

        // ------------------------------------------------------------
        // Serialize final UndertaleData to bytes.
        // ------------------------------------------------------------

        using var outputStream =
            new MemoryStream();

        UndertaleIO.Write(
            outputStream,
            data);

        var outputBytes =
            outputStream.ToArray();

        diagnostics.AppendLine(
            $"[BrowserPatch] Output bytes: " +
            $"{outputBytes.Length}");

        Console.WriteLine(
            diagnostics.ToString());

        return outputBytes;
    }
    catch (Exception ex)
    {
        Console.WriteLine(
            diagnostics.ToString());

        Console.WriteLine(
            FormatException(ex));

        throw;
    }
}

    private static MethodInfo? FindCountMethod(Type type)
    {
        return type.GetMethod(
            "UnserializeChildObjectCount",
            BindingFlags.Public |
            BindingFlags.NonPublic |
            BindingFlags.Static |
            BindingFlags.FlattenHierarchy,
            binder: null,
            types: new[] { typeof(UndertaleReader) },
            modifiers: null);
    }

    private static string DescribeCountMethod(
        string title,
        Type type)
    {
        var result = new StringBuilder();

        result.AppendLine($"=== {title} ===");
        result.AppendLine($"TYPE: {type.FullName}");
        result.AppendLine(
            $"TYPE ASSEMBLY: {type.Assembly.FullName}");
        result.AppendLine(
            $"READER TYPE: {typeof(UndertaleReader).FullName}");
        result.AppendLine(
            $"READER ASSEMBLY: {typeof(UndertaleReader).Assembly.FullName}");

        var method = FindCountMethod(type);

        result.AppendLine(
            $"METHOD FOUND: {method != null}");

        if (method != null)
        {
            result.AppendLine(
                $"METHOD NAME: {method.Name}");

            result.AppendLine(
                $"METHOD STATIC: {method.IsStatic}");

            result.AppendLine(
                $"METHOD PUBLIC: {method.IsPublic}");

            result.AppendLine(
                $"METHOD RETURN: {method.ReturnType.FullName}");

            var parameters = method.GetParameters();

            result.AppendLine(
                $"PARAM COUNT: {parameters.Length}");

            foreach (var parameter in parameters)
            {
                result.AppendLine(
                    $"PARAM: {parameter.Name} | " +
                    $"TYPE={parameter.ParameterType.FullName}");

                result.AppendLine(
                    $"PARAM ASSEMBLY: " +
                    $"{parameter.ParameterType.AssemblyQualifiedName}");
            }
        }

        result.AppendLine();
        result.AppendLine(
            "=== END REFLECTION TEST ===");

        return result.ToString();
    }

    private static void AppendCountMethodDiagnostic(
        StringBuilder result,
        Type type)
    {
        result.AppendLine();
        result.AppendLine(
            $"=== COUNT METHOD: {type.FullName} ===");

        var method = FindCountMethod(type);

        result.AppendLine(
            $"Found: {method != null}");

        if (method == null)
        {
            return;
        }

        result.AppendLine(
            $"Method: {method}");

        result.AppendLine(
            $"Static: {method.IsStatic}");

        result.AppendLine(
            $"Public: {method.IsPublic}");

        result.AppendLine(
            $"Return: {method.ReturnType}");

        try
        {
            var func = Delegate.CreateDelegate(
                typeof(Func<UndertaleReader, uint>),
                method) as Func<UndertaleReader, uint>;

            result.AppendLine(
                $"Delegate creation: " +
                $"{(func != null ? "SUCCESS" : "FAILED")}");
        }
        catch (Exception ex)
        {
            result.AppendLine(
                "Delegate creation: FAILED");

            result.AppendLine(
                $"{ex.GetType().FullName}: {ex.Message}");
        }
    }

    private static void AppendCodeRegistrationDiagnostic(
        StringBuilder result,
        UndertaleReader reader)
    {
        result.AppendLine();
        result.AppendLine(
            "=== CODE REGISTRATION DIAGNOSTIC ===");

        var codeType = typeof(UndertaleCode);

        var dictionary =
            GetPrivateFieldValue(
                reader,
                "unserializeFuncDict")
            as IDictionary;

        if (dictionary == null)
        {
            result.AppendLine(
                "unserializeFuncDict: NULL");

            return;
        }

        result.AppendLine(
            $"unserializeFuncDict count: {dictionary.Count}");

        result.AppendLine(
            $"UndertaleCode registered: " +
            $"{dictionary.Contains(codeType)}");

        if (dictionary.Contains(codeType))
        {
            var delegateObject =
                dictionary[codeType];

            result.AppendLine(
                "UndertaleCode delegate: " +
                (delegateObject == null
                    ? "NULL"
                    : delegateObject.GetType().FullName));
        }

        result.AppendLine(
            "=== END CODE REGISTRATION DIAGNOSTIC ===");
    }

    private static void AppendCountDictionaryDiagnostic(
        StringBuilder result,
        UndertaleReader reader)
    {
        result.AppendLine();
        result.AppendLine(
            "=== UNSERIALIZE FUNCTION DICTIONARY ===");

        var dictionary =
            GetPrivateFieldValue(
                reader,
                "unserializeFuncDict")
            as IDictionary;

        result.AppendLine(
            "unserializeFuncDict: " +
            (dictionary == null
                ? "NULL"
                : $"INITIALIZED ({dictionary.Count} entries)"));

        if (dictionary != null)
        {
            var codeType = typeof(UndertaleCode);
            var generalInfoType = typeof(UndertaleGeneralInfo);
            var optionsType = typeof(UndertaleOptions);
            var tagsType = typeof(UndertaleTags);
            var featureFlagsType = typeof(UndertaleFeatureFlags);

            result.AppendLine(
                $"UndertaleCode: {dictionary.Contains(codeType)}");

            result.AppendLine(
                $"UndertaleGeneralInfo: " +
                $"{dictionary.Contains(generalInfoType)}");

            result.AppendLine(
                $"UndertaleOptions: " +
                $"{dictionary.Contains(optionsType)}");

            result.AppendLine(
                $"UndertaleTags: " +
                $"{dictionary.Contains(tagsType)}");

            result.AppendLine(
                $"UndertaleFeatureFlags: " +
                $"{dictionary.Contains(featureFlagsType)}");
        }

        result.AppendLine(
            "=== END UNSERIALIZE FUNCTION DICTIONARY ===");
    }

    private static void AppendReaderFieldState(
        StringBuilder result,
        UndertaleReader reader,
        string label)
    {
        result.AppendLine();
        result.AppendLine(
            $"=== {label} ===");

        var bytecodeValue =
            GetPrivateOrPublicFieldValue(
                reader,
                "BytecodeAddresses");

        var countException =
            GetPrivateOrPublicFieldValue(
                reader,
                "countUnserializeExc") as Exception;

        result.AppendLine(
            "BytecodeAddresses: " +
            (bytecodeValue == null
                ? "NULL"
                : DescribeObject(bytecodeValue)));

        result.AppendLine(
            "countUnserializeExc: " +
            (countException == null
                ? "NULL"
                : "EXCEPTION"));

        if (bytecodeValue is IDictionary dictionary)
        {
            result.AppendLine(
                $"BytecodeAddresses count: " +
                $"{dictionary.Count}");
        }

        result.AppendLine(
            $"Reader Position: {reader.Position}");

        result.AppendLine(
            $"Reader Absolute Position: {reader.AbsPosition}");
    }

    private static void AppendMethodListDiagnostic(
        StringBuilder result,
        Type type,
        string title)
    {
        result.AppendLine();
        result.AppendLine($"=== {title} ===");

        var flags =
            BindingFlags.Public |
            BindingFlags.NonPublic |
            BindingFlags.Static |
            BindingFlags.Instance |
            BindingFlags.FlattenHierarchy;

        foreach (var method in type.GetMethods(flags)
                     .Where(
                         method =>
                             method.Name.Contains("Unserialize")))
        {
            result.AppendLine(
                $"{method.Name} | " +
                $"STATIC={method.IsStatic} | " +
                $"PUBLIC={method.IsPublic} | " +
                $"RETURN={method.ReturnType}");

            foreach (var parameter in method.GetParameters())
            {
                result.AppendLine(
                    $"  PARAM: {parameter.ParameterType}");
            }
        }
    }

    private static void AppendReaderCountingMethods(
        StringBuilder result)
    {
        result.AppendLine();
        result.AppendLine(
            "=== UNDERTALEREADER COUNTING METHODS ===");

        var flags =
            BindingFlags.Public |
            BindingFlags.NonPublic |
            BindingFlags.Static |
            BindingFlags.Instance |
            BindingFlags.FlattenHierarchy;

        foreach (var method in typeof(UndertaleReader).GetMethods(flags)
                     .Where(
                         method =>
                             method.Name.Contains("Count",
                                 StringComparison.OrdinalIgnoreCase)))
        {
            result.AppendLine(
                method.ToString());
        }
    }

    private static object? GetPrivateFieldValue(
        object instance,
        string name)
    {
        var type = instance.GetType();

        return type
            .GetField(
                name,
                BindingFlags.Instance |
                BindingFlags.Public |
                BindingFlags.NonPublic)
            ?.GetValue(instance);
    }

    private static object? GetPrivateOrPublicFieldValue(
        object instance,
        string name)
    {
        var type = instance.GetType();

        var field =
            type.GetField(
                name,
                BindingFlags.Instance |
                BindingFlags.Public |
                BindingFlags.NonPublic);

        if (field != null)
        {
            return field.GetValue(instance);
        }

        var property =
            type.GetProperty(
                name,
                BindingFlags.Instance |
                BindingFlags.Public |
                BindingFlags.NonPublic);

        return property?.GetValue(instance);
    }

    private static string DescribeObject(
        object value)
    {
        return
            $"{value.GetType().FullName}";
    }

    private static string FormatException(
        Exception ex)
    {
        var result = new StringBuilder();

        int depth = 0;
        Exception? current = ex;

        while (current != null)
        {
            result.AppendLine(
                $"--- Exception level {depth} ---");

            result.AppendLine(
                $"Type: {current.GetType().FullName}");

            result.AppendLine(
                $"Message: {current.Message}");

            result.AppendLine();

            result.AppendLine("Stack trace:");

            result.AppendLine(
                current.StackTrace ?? "(no stack trace)");

            result.AppendLine();

            current = current.InnerException;
            depth++;
        }

        return result.ToString();
    }
}