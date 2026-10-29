# Build (and optionally run) the Aurora spike.
#
#   pwsh tools/aurora_spike/build.ps1
#   pwsh tools/aurora_spike/build.ps1 -Replay build\recomp\gxcap\gxfifo.tlscap -Out aurora.ppm
#
# Everything it needs is in this repo or downloaded by aurora's own FetchContent:
#   * MinGW GCC + cmake + ninja from tools/w64devkit (this machine has no MSVC C++ compiler)
#   * the prebuilt Dawn package that aurora's CMake downloads (MSVC-built DLL, C ABI)
#
# -Replay needs a capture produced by the runner with TLS_GX_CAPTURE=<dir>.
param(
    [string]$Root = 'G:\Program\aurora-spike',
    [string]$AuroraRef = '505b5eb',
    [switch]$Tests,
    [switch]$ReplayStaging,
    [string]$Replay = '',
    [string]$Out = 'aurora_frame.ppm',
    [string]$ExtraArgs = ''
)

$ErrorActionPreference = 'Stop'
$repo = Split-Path -Parent (Split-Path -Parent $PSScriptRoot)
$devkit = Join-Path $repo 'tools\w64devkit\bin'
$env:PATH = "$devkit;$env:PATH"
$cc = Join-Path $devkit 'gcc.exe'
$cxx = Join-Path $devkit 'g++.exe'
$spikeDir = $PSScriptRoot

# 1. Clone aurora at the ref this spike was measured against.
$aurora = Join-Path $Root 'aurora'
if (-not (Test-Path (Join-Path $aurora '.git'))) {
    New-Item -ItemType Directory -Force -Path $Root | Out-Null
    & git clone --depth 1 https://github.com/encounter/aurora $aurora
    if ($LASTEXITCODE -ne 0) { throw 'git clone failed' }
}
Push-Location $aurora
try {
    & git fetch --depth 1 origin $AuroraRef 2>$null
    & git checkout --quiet $AuroraRef
    if ($LASTEXITCODE -ne 0) { Write-Host "warning: could not check out $AuroraRef; using $(git rev-parse --short HEAD)" }
    # 2. Apply the MinGW patches (idempotent: --check first). 0005 raises the staging planes to
    #    sizes a heavy replay needs and breaks aurora's own null-backend tests, so it is applied
    #    only with -ReplayStaging (handover 5c.46 AP-AM 6b).
    Get-ChildItem (Join-Path $spikeDir 'patches') -Filter *.patch | Sort-Object Name | ForEach-Object {
        if ($_.Name -like '0005*' -and -not $ReplayStaging) {
            Write-Host "skipped $($_.Name) (replay-only; pass -ReplayStaging to apply)"
            return
        }
        & git apply --check $_.FullName 2>$null
        if ($LASTEXITCODE -eq 0) {
            & git apply $_.FullName
            Write-Host "applied $($_.Name)"
        } else {
            Write-Host "already applied (or conflicting): $($_.Name)"
        }
    }
} finally { Pop-Location }

# 3. Configure + build.
#    * -DNTDDI_VERSION: the abseil/cctz WinRT path is enabled by w64devkit's newer sdkddkver.h
#      and does not compile with MinGW; pinning the SDK level below NTDDI_WIN10_NI turns it off.
#    * AURORA_NO_DAWN_NATIVE_API is what patch 0001 keys off.
#    * -lcomsuppw: SDL3's imported target asks for the MSVC COM support library; an empty stub
#      archive satisfies the linker (nothing references any symbol in it).
$flags = '-DNTDDI_VERSION=0x0A000000 -DAURORA_NO_DAWN_NATIVE_API'
$stubs = Join-Path $Root 'stublibs'
New-Item -ItemType Directory -Force -Path $stubs | Out-Null
if (-not (Test-Path (Join-Path $stubs 'libcomsuppw.a'))) {
    & (Join-Path $devkit 'ar.exe') rcs (Join-Path $stubs 'libcomsuppw.a')
}
$build = Join-Path $Root 'build'
& cmake -S $aurora -B $build -G Ninja `
    -DCMAKE_BUILD_TYPE=RelWithDebInfo `
    -DCMAKE_C_COMPILER="$cc" -DCMAKE_CXX_COMPILER="$cxx" `
    -DCMAKE_C_FLAGS="$flags" -DCMAKE_CXX_FLAGS="$flags" `
    -DCMAKE_EXE_LINKER_FLAGS="-L$($stubs -replace '\\','/')" `
    -DCMAKE_PROJECT_TOP_LEVEL_INCLUDES="$($spikeDir -replace '\\','/')/spike_target.cmake" `
    -DTLS_SPIKE_DIR="$($spikeDir -replace '\\','/')" `
    -DAURORA_ENABLE_DVD=OFF -DAURORA_ENABLE_CARD=OFF -DAURORA_ENABLE_THP=OFF `
    -DAURORA_ENABLE_RMLUI=OFF -DAURORA_CACHE_USE_ZSTD=OFF `
    -DAURORA_ENABLE_TESTS=ON -DAURORA_ENABLE_EXAMPLES=OFF
if ($LASTEXITCODE -ne 0) { throw 'cmake configure failed' }

& cmake --build $build --target tls_gx_replay -j 14
if ($LASTEXITCODE -ne 0) { throw 'build failed' }
Write-Host "built $(Join-Path $build 'tls_gx_replay.exe')"

if ($Tests) {
    Push-Location $build
    try { & ctest --output-on-failure -j 8 } finally { Pop-Location }
}

# 4. Optional replay.
if ($Replay) {
    $exe = Join-Path $build 'tls_gx_replay.exe'
    & $exe $Replay $Out @($ExtraArgs -split ' ' | Where-Object { $_ })
}
