# Run the title -> save dialog -> Chapter 1 chain until it actually hands over.
#
# Why: the title input flow has a timing race (handover 5c.25 §4d) - roughly one
# run in eight takes the "No" branch on the save dialog and never reaches
# Chapter 1. Any probe output from such a run is meaningless, and it looks
# exactly like "the probe stopped firing". Every measurement run must first be
# validated by `SetNextSequence('Game')` appearing in the log.
#
#   .\tools\chain_run.ps1 -Frames 4200 -Log logs\p1.log
#
# Extra environment (TLS_SCENE_SM_PROBE etc.) is inherited from the caller.
param(
    [int]$Frames = 4200,
    [string]$Log = "logs\chain.log",
    [int]$Attempts = 6
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$exe = Join-Path $root 'build\recomp\tls_runner.exe'
if (-not (Test-Path $exe)) { throw "runner not built: $exe" }

$env:TLS_INPUT_SCRIPT = '600-612:A,900-912:A,1200-1212:A,1440-1452:UP,1500-1512:A,1600-1612:A,1700-1712:A,1800-1812:A'

$logPath = Join-Path $root $Log
$dir = Split-Path -Parent $logPath
if ($dir -and -not (Test-Path $dir)) { New-Item -ItemType Directory -Path $dir | Out-Null }

for ($i = 1; $i -le $Attempts; $i++) {
    & $exe --frames $Frames > $logPath 2>&1
    $hand = (Select-String -Path $logPath -Pattern "SetNextSequence\('Game'\)").Count
    # Count MODE TRANSITION lines only - a loose '6 -> 4' pattern also matches
    # DVD reads such as "off=4576 -> 4564".
    $yes = (Select-String -Path $logPath -Pattern 'MODE TRANSITION 6 -> 7').Count
    $no  = (Select-String -Path $logPath -Pattern 'MODE TRANSITION 6 -> 4').Count
    Write-Host "attempt $i : handover=$hand  dialog 6->7=$yes  6->4=$no  -> $Log"
    if ($hand -gt 0) { return $logPath }
}
throw "chain never handed over in $Attempts attempts; the input race won - rerun"
