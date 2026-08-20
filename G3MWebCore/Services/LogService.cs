namespace G3MToolCLI.Services;

public static class LogService
{
    public static void Log(string message)
        => Console.WriteLine(message);

    public static void Warning(string message)
        => Console.WriteLine("[WARN] " + message);

    public static void Error(string message)
        => Console.Error.WriteLine("[ERROR] " + message);

    // G3MTool progress/UI compatibility shims.
    // The web version can replace these with actual browser progress reporting later.

    public static void SetOperation(params object?[] args)
    {
        // Intentionally no-op for now.
    }

    public static void Progress(params object?[] args)
    {
        // Intentionally no-op for now.
    }

    public static void ProgressComplete(params object?[] args)
    {
        // Intentionally no-op for now.
    }

    public static void ProgressRange(params object?[] args)
    {
        // Intentionally no-op for now.
    }
}