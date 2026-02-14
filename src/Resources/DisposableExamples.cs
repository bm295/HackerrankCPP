namespace HackerrankCSharp.Resources;

public sealed class FileLogger : IDisposable
{
    private readonly StreamWriter _writer;
    private bool _disposed;

    public FileLogger(string path)
    {
        _writer = new StreamWriter(path, append: true);
    }

    public void Log(string message)
    {
        if (_disposed) throw new ObjectDisposedException(nameof(FileLogger));
        _writer.WriteLine($"[{DateTime.UtcNow:O}] {message}");
        _writer.Flush();
    }

    public void Dispose()
    {
        if (_disposed) return;
        _writer.Dispose();
        _disposed = true;
        GC.SuppressFinalize(this);
    }
}

public sealed class ResourceCounter : IDisposable
{
    private bool _disposed;
    public int Count { get; private set; }

    public void Increment()
    {
        if (_disposed) throw new ObjectDisposedException(nameof(ResourceCounter));
        Count++;
    }

    public void Dispose() => _disposed = true;
}

public sealed class AsyncTimer : IAsyncDisposable
{
    private bool _disposed;

    public async Task DelayAndPrintAsync(int milliseconds)
    {
        if (_disposed) throw new ObjectDisposedException(nameof(AsyncTimer));
        await Task.Delay(milliseconds);
        Console.WriteLine($"Async timer waited {milliseconds}ms");
    }

    public ValueTask DisposeAsync()
    {
        _disposed = true;
        return ValueTask.CompletedTask;
    }
}

public static class DisposableExamples
{
    public static async Task RunAsync()
    {
        using var logger = new FileLogger("demo.log");
        logger.Log("using var demo");

        await using var timer = new AsyncTimer();
        await timer.DelayAndPrintAsync(10);
    }
}
