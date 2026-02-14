namespace HackerrankCSharp.Exercises;

public static class VectorSort
{
    public static int[] Sort(int[] input) => input.OrderBy(x => x).ToArray();
}

public static class VectorErase
{
    public static List<int> Erase(List<int> values, int oneBasedIndex, int oneBasedStart, int oneBasedEnd)
    {
        values.RemoveAt(oneBasedIndex - 1);
        values.RemoveRange(oneBasedStart - 1, oneBasedEnd - oneBasedStart);
        return values;
    }
}

public static class VariableSizedArrays
{
    public static int Query(List<List<int>> arrays, int i, int j) => arrays[i][j];
}

public static class SetsStl
{
    public static List<string> Process(IEnumerable<(int type, int value)> queries)
    {
        var set = new HashSet<int>();
        var output = new List<string>();
        foreach (var (type, value) in queries)
        {
            switch (type)
            {
                case 1: set.Add(value); break;
                case 2: set.Remove(value); break;
                case 3: output.Add(set.Contains(value) ? "Yes" : "No"); break;
            }
        }
        return output;
    }
}

public static class MapsStl
{
    public static List<int> Process(IEnumerable<(int type, string name, int mark)> queries)
    {
        var map = new Dictionary<string, int>();
        var output = new List<int>();
        foreach (var (type, name, mark) in queries)
        {
            switch (type)
            {
                case 1: map[name] = map.GetValueOrDefault(name) + mark; break;
                case 2: map.Remove(name); break;
                case 3: output.Add(map.GetValueOrDefault(name)); break;
            }
        }
        return output;
    }
}

public static class LowerBoundStl
{
    public static (bool found, int oneBasedIndex) LowerBound(List<int> sorted, int query)
    {
        var idx = sorted.BinarySearch(query);
        if (idx >= 0) return (true, idx + 1);
        var insertion = ~idx;
        return (false, insertion + 1);
    }
}
