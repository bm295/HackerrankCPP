using HackerrankCSharp.Exercises;
using HackerrankCSharp.Resources;

namespace HackerrankCSharp;

public static class Program
{
    public static async Task Main(string[] args)
    {
        Console.WriteLine("Hackerrank C# 14 (preview) rewrite");
        Console.WriteLine("- BasicDataTypes: " + BasicDataTypes.FormatOutput("3 123456789123 123456789123456789 A 334.23 14049.30493").Trim());
        Console.WriteLine("- Functions: " + Functions.MaxOfFour(3, 4, 6, 5));

        // using statement demo (IDisposable)
        using (var fileLogger = new FileLogger("demo.log"))
        {
            fileLogger.Log("using statement disposed at scope end");
        }

        // using var demo (IDisposable)
        using var counter = new ResourceCounter();
        counter.Increment();

        // await using demo (IAsyncDisposable)
        await using var asyncTimer = new AsyncTimer();
        await asyncTimer.DelayAndPrintAsync(25);

        await DisposableExamples.RunAsync();
    }
}
