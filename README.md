# HackerrankCPP

This repository includes:
- C++ HackerRank exercise files in the repo root.
- A C# console rewrite under `src/` using `HackerrankCSharp.csproj`.

## C++ Prerequisites

- `cmake` (3.16+)
- A C++ compiler:
  - Windows: MSVC (Visual Studio Build Tools), MinGW `g++`, or LLVM `clang++`
  - Linux: `g++` or `clang++`
  - macOS: Apple Clang (`xcode-select --install`)

## C++ Build all runnable exercises

```bash
cmake -S . -B build
cmake --build build --config Release
```

## C++ Run an exercise

Example:

```bash
./build/bin/HelloWorld
```

On Windows PowerShell:

```powershell
.\build\bin\HelloWorld.exe
```

## C++ Windows helper script

Use `run.ps1` to configure, build one target, and run it:

```powershell
.\run.ps1 -Exercise HelloWorld
```

With input from file:

```powershell
.\run.ps1 -Exercise InputOutput -InputFile .\sample-input.txt
```

## C# Prerequisites

- .NET SDK 9.0+

Check installed SDKs:

```bash
dotnet --list-sdks
```

## C# Build

```bash
dotnet restore HackerrankCSharp.csproj
dotnet build HackerrankCSharp.csproj -c Release
```

## C# Run

```bash
dotnet run --project HackerrankCSharp.csproj -c Release
```

This runs the entry point in `src/Program.cs` and exercises code under `src/Exercises` and `src/Resources`.

## Notes

Executables are generated in:

- `build/bin` (single-config generators like Ninja/Makefiles)
- or generator-specific output folders when applicable

- Files that do not contain `main()` are treated as snippet-only (typical HackerRank partial solutions) and are skipped by CMake.
