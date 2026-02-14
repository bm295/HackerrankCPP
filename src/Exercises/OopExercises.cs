namespace HackerrankCSharp.Exercises;

public sealed class StudentClass
{
    public int Age { get; set; }
    public int Standard { get; set; }
    public string FirstName { get; set; } = string.Empty;
    public string LastName { get; set; } = string.Empty;
    public override string ToString() => $"{Age},{FirstName},{LastName},{Standard}";
}

public sealed class StudentStructLike
{
    public int Age { get; init; }
    public string FirstName { get; init; } = string.Empty;
    public string LastName { get; init; } = string.Empty;
    public int Standard { get; init; }
}

public class Rectangle
{
    public int Width { get; set; }
    public int Height { get; set; }
    public virtual string Display() => $"{Width} {Height}";
}

public sealed class RectangleArea : Rectangle
{
    public override string Display() => (Width * Height).ToString();
}

public class Triangle
{
    public virtual string Say() => "I am a triangle";
}

public class Isosceles : Triangle
{
    public string SayIsosceles() => "I am an isosceles triangle";
    public string Description() => "In an isosceles triangle two sides are equal";
}

public sealed class Equilateral : Isosceles
{
    public string SayEquilateral() => "I am an equilateral triangle";
}

public sealed record Box(int Length = 0, int Breadth = 0, int Height = 0)
{
    public long CalculateVolume() => (long)Length * Breadth * Height;

    public static bool operator <(Box a, Box b) =>
        a.Length < b.Length ||
        (a.Length == b.Length && a.Breadth < b.Breadth) ||
        (a.Length == b.Length && a.Breadth == b.Breadth && a.Height < b.Height);

    public static bool operator >(Box a, Box b) => b < a;

    public override string ToString() => $"{Length} {Breadth} {Height}";
}

public interface IPerson
{
    void GetData(string input);
    string PutData();
}

public sealed class Professor : IPerson
{
    private static int _count;
    private string _name = string.Empty;
    private int _age;
    private int _publications;
    public void GetData(string input)
    {
        var p = input.Split(' ');
        _name = p[0];
        _age = int.Parse(p[1]);
        _publications = int.Parse(p[2]);
    }

    public string PutData() => $"{_name} {_age} {_publications} {++_count}";
}

public sealed class StudentVirtual : IPerson
{
    private static int _count;
    private string _name = string.Empty;
    private int _age;
    private int[] _marks = [];
    public void GetData(string input)
    {
        var p = input.Split(' ');
        _name = p[0];
        _age = int.Parse(p[1]);
        _marks = p.Skip(2).Select(int.Parse).ToArray();
    }

    public string PutData() => $"{_name} {_age} {_marks.Sum()} {++_count}";
}

public sealed class AddElements<T>
{
    private readonly T _element;
    public AddElements(T element) => _element = element;
    public T Add(T value) => (T)((dynamic)_element + (dynamic)value)!;
}
