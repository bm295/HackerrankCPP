param(
    [Parameter(Mandatory = $true)]
    [string]$Exercise,

    [string]$InputFile = ""
)

$ErrorActionPreference = "Stop"

$BuildDir = "build"

cmake -S . -B $BuildDir
cmake --build $BuildDir --config Release --target $Exercise

$candidatePaths = @(
    (Join-Path $BuildDir "bin/$Exercise.exe"),
    (Join-Path $BuildDir "bin/Release/$Exercise.exe"),
    (Join-Path $BuildDir "Release/$Exercise.exe")
)

$exePath = $candidatePaths | Where-Object { Test-Path $_ } | Select-Object -First 1
if (-not $exePath) {
    $tried = $candidatePaths -join ", "
    throw "Executable not found. Paths checked: $tried"
}

if ([string]::IsNullOrWhiteSpace($InputFile)) {
    & $exePath
} else {
    if (-not (Test-Path $InputFile)) {
        throw "Input file not found: $InputFile"
    }
    Get-Content $InputFile | & $exePath
}
