using System.Diagnostics;

namespace G3MToolCLI.Services;

public class XDeltaService
{
    private readonly string? _xdeltaPath;

    public XDeltaService()
    {
        _xdeltaPath = FindXDeltaPath();
    }

    public async Task<XDeltaResult> CreatePatchAsync(
        string originalPath,
        string modifiedPath,
        string outputPath)
    {
        if (_xdeltaPath == null)
            return new XDeltaResult
            {
                Success = false,
                Error = "xdelta executable not found"
            };

        if (!File.Exists(originalPath))
            return new XDeltaResult
            {
                Success = false,
                Error = $"Original file not found: {originalPath}"
            };

        if (!File.Exists(modifiedPath))
            return new XDeltaResult
            {
                Success = false,
                Error = $"Modified file not found: {modifiedPath}"
            };

        var outputDir = Path.GetDirectoryName(outputPath);

        if (!string.IsNullOrEmpty(outputDir) &&
            !Directory.Exists(outputDir))
        {
            Directory.CreateDirectory(outputDir);
        }

        var args = new[]
        {
            "-e",
            "-s",
            originalPath,
            modifiedPath,
            outputPath
        };

        return await ExecuteXDeltaAsync(args);
    }

    public async Task<XDeltaResult> ApplyPatchAsync(
        string originalPath,
        string patchPath,
        string outputPath)
    {
        if (_xdeltaPath == null)
            return new XDeltaResult
            {
                Success = false,
                Error = "xdelta executable not found"
            };

        if (!File.Exists(originalPath))
            return new XDeltaResult
            {
                Success = false,
                Error = $"Original file not found: {originalPath}"
            };

        if (!File.Exists(patchPath))
            return new XDeltaResult
            {
                Success = false,
                Error = $"Patch file not found: {patchPath}"
            };

        var outputDir = Path.GetDirectoryName(outputPath);

        if (!string.IsNullOrEmpty(outputDir) &&
            !Directory.Exists(outputDir))
        {
            Directory.CreateDirectory(outputDir);
        }

        var args = new[]
        {
            "-d",
            "-s",
            originalPath,
            patchPath,
            outputPath
        };

        return await ExecuteXDeltaAsync(args);
    }

    public async Task<XDeltaResult> ExecuteRawAsync(string[] args)
    {
        if (_xdeltaPath == null)
            return new XDeltaResult
            {
                Success = false,
                Error = "xdelta executable not found"
            };

        return await ExecuteXDeltaAsync(args);
    }

    private async Task<XDeltaResult> ExecuteXDeltaAsync(string[] args)
    {
        try
        {
            var startInfo = new ProcessStartInfo
            {
                FileName = _xdeltaPath,
                UseShellExecute = false,
                RedirectStandardOutput = true,
                RedirectStandardError = true,
                CreateNoWindow = true
            };

            foreach (var arg in args)
                startInfo.ArgumentList.Add(arg);

            using var process = Process.Start(startInfo);

            if (process == null)
            {
                return new XDeltaResult
                {
                    Success = false,
                    Error = "Failed to start xdelta process"
                };
            }

            var outputTask =
                process.StandardOutput.ReadToEndAsync();

            var errorTask =
                process.StandardError.ReadToEndAsync();

            await process.WaitForExitAsync();

            var output = await outputTask;
            var error = await errorTask;

            if (process.ExitCode == 0)
            {
                return new XDeltaResult
                {
                    Success = true,
                    Output = output
                };
            }

            return new XDeltaResult
            {
                Success = false,
                Error = string.IsNullOrEmpty(error)
                    ? $"xdelta exited with code {process.ExitCode}"
                    : error,
                Output = output
            };
        }
        catch (Exception ex)
        {
            return new XDeltaResult
            {
                Success = false,
                Error = ex.Message
            };
        }
    }

    private static string? FindXDeltaPath()
    {
        var candidates = new[]
        {
            // Running from /workspaces/test
            Path.GetFullPath(
                Path.Combine(
                    Directory.GetCurrentDirectory(),
                    "G3MTool-Deltamod",
                    "G3MToolCLI",
                    "Assets",
                    "bin",
                    "linux",
                    "xdelta"
                )
            ),

            // Running from the compiled project's directory
            Path.GetFullPath(
                Path.Combine(
                    AppContext.BaseDirectory,
                    "..",
                    "..",
                    "..",
                    "..",
                    "G3MTool-Deltamod",
                    "G3MToolCLI",
                    "Assets",
                    "bin",
                    "linux",
                    "xdelta"
                )
            )
        };

        foreach (var path in candidates)
        {
            if (File.Exists(path))
                return path;
        }

        return null;
    }
}

public class XDeltaResult
{
    public bool Success { get; set; }
    public string? Error { get; set; }
    public string? Output { get; set; }
}