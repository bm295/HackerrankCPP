using System.Globalization;

namespace HackerrankCSharp.Exercises;

public static class PrintPretty
{
    public static (string a, string b, string c) Format(double A, double B, double C)
    {
        var first = "0x" + ((long)A).ToString("x", CultureInfo.InvariantCulture);
        var second = B.ToString("+0000000000.00;-0000000000.00", CultureInfo.InvariantCulture).PadRight(15, '_');
        var third = C.ToString("0.000000000E+00", CultureInfo.InvariantCulture).ToUpperInvariant();
        return (first, second, third);
    }
}
