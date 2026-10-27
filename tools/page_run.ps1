# Tutorial-page measurement run (handover 5c.46).
#
# One command, so the input script and the probe flags are always set together - the
# project rule is that env vars do not survive between shell invocations, and a run whose
# inputs never reached the page measures the title screen instead.
#
#   .\tools\page_run.ps1 -Frames 4020 -Log logs\page_base.log            # baseline page
#   $env:TLS_ASYNC_IO_COMPLETE='1'; .\tools\page_run.ps1 -Frames 4020    # flag on
#
# Always launches the window minimised (AGENTS.md: never foreground the game window) and
# always deletes the target screenshot first, because a run that dies early would
# otherwise leave the previous run's file in place and read as "no change".
param(
    [int]$Frames = 4020,
    [string]$Log = 'logs\page.log',
    [string]$Shot = '4000'
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

# The 9-press title walk plus the four tutorial presses (5c.37 session script).
$env:TLS_INPUT_SCRIPT = '600-612:A,900-912:A,1200-1212:A,1440-1452:UP,1500-1512:A,1600-1612:A,1700-1712:A,1800-1812:A,3620-3632:A,3700-3712:A,3800-3812:A,3900-3912:A'
$env:TLS_SHOT_FRAMES = $Shot

$ppm = "build\recomp\d3d11_screenshot_$Shot.ppm"
Remove-Item $ppm -ErrorAction SilentlyContinue

# Same fresh-console precondition as tools/invariant.ps1: a leftover save makes the title
# take the CONTINUE path instead of the NEW GAME walk, which changes everything after it.
# (The frame-4000 page turned out to be sensitive to exactly this - 5c.46 Z.)
$saveDir = Join-Path $root 'SaveData\title\00010000\534c5345\data'
Remove-Item (Join-Path $saveDir 'savedata.dat'), (Join-Path $saveDir 'banner.bin') -Force -ErrorAction SilentlyContinue

$logPath = Join-Path $root $Log
$dir = Split-Path -Parent $logPath
if ($dir -and -not (Test-Path $dir)) { New-Item -ItemType Directory -Path $dir | Out-Null }
$sw = [System.Diagnostics.Stopwatch]::StartNew()
& (Join-Path $root 'build\recomp\tls_runner.exe') --window --minimized --frames $Frames *> $logPath
$sw.Stop()

Write-Host ("run: frames={0} shot={1} elapsed={2:N0}s log={3}" -f $Frames, $Shot, $sw.Elapsed.TotalSeconds, $Log)
Write-Host ("sequences: " + ((Select-String -Path $logPath -Pattern 'Seq: (\S+)' |
    ForEach-Object { $_.Matches[0].Groups[1].Value } | Select-Object -Unique) -join ' -> '))
$frameLines = Select-String -Path $logPath -Pattern '\[TLS Frame (\d+)\]'
if ($frameLines) { Write-Host ("last frame line: " + $frameLines[-1].Line) }

if (Test-Path $ppm) {
    $h = (Get-FileHash $ppm -Algorithm SHA256).Hash
    Write-Host ("shot {0}: {1} bytes sha256={2}" -f $Shot, (Get-Item $ppm).Length, $h)
} else {
    Write-Host "shot ${Shot}: MISSING (the run did not reach the frame)" -ForegroundColor Red
}
