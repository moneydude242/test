namespace G3MToolCLI.Services;

public sealed class XDeltaService
{
    public Task<XDeltaResult> CreatePatchAsync(
        string originalPath,
        string modifiedPath,
        string outputPath)
    {
        return Task.FromResult(new XDeltaResult
        {
            Success = false,
            Error = "Native xdelta execution is not available in G3MWebCore."
        });
    }

    public Task<XDeltaResult> ApplyPatchAsync(
        string originalPath,
        string patchPath,
        string outputPath)
    {
        return Task.FromResult(new XDeltaResult
        {
            Success = false,
            Error = "Native xdelta execution is not available in G3MWebCore."
        });
    }

    public Task<XDeltaResult> ExecuteRawAsync(string[] args)
    {
        return Task.FromResult(new XDeltaResult
        {
            Success = false,
            Error = "Native xdelta execution is not available in G3MWebCore."
        });
    }
}

public sealed class XDeltaResult
{
    public bool Success { get; set; }
    public string? Error { get; set; }
    public string? Output { get; set; }
}