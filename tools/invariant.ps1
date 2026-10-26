# Chapter-1 progression invariant (handover 5c.35).
#
# Replaces the old "3-A present-1448" guard (mean=(102,188,205) p50=203), which is
# SUPERSEDED: that baseline was the game sitting frozen on the title screen at frame
# 1448, i.e. it encoded the script-filter bug. Once the guest's script evaluator was
# allowed to run (5c.34) the game progresses Boot -> Strp -> Titl -> Game, and frame
# 1448 is the save-data dialog instead of the title.
#
# This guard is stronger than a percentile snapshot because the new flow is
# DETERMINISTIC: two identical runs produced a pixel-identical screenshot hash.
#
# It checks two things:
#   1. the sequence progression reaches 'Game' (the structural claim), and
#   2. frame 3500 is pixel-identical to the recorded reference (the visual claim).
#
# Usage:  pwsh tools/invariant.ps1
# Exit code 0 = pass, 1 = fail.

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent (Split-Path -Parent $MyInvocation.MyCommand.Path)
Set-Location $root

$EXPECTED_SHA = 'A00272DF30BEDB5FB9D06E60DBDC365A9B47328ACCED1A496D999FD34949432E'
$SHOT_FRAME   = '3500'
$INPUT        = '600-612:A,900-912:A,1200-1212:A,1440-1452:UP,1500-1512:A,1600-1612:A,1700-1712:A,1800-1812:A'

# Probe flags must be genuinely REMOVED, not set to '' - getenv() treats an empty
# string as set, which silently keeps a flag enabled (handover 5c.33a).
foreach ($v in 'TLS_SCRIPT_FILTER','TLS_NO_SCRIPT_FILTER','TLS_FAKE_FADE','TLS_NO_FAKE_FADE',
               'TLS_EFB_ALPHA','TLS_SCENE_SM_PROBE','TLS_FADE_RET','TLS_PRESENT_PROBE',
               'TLS_TEX_HASH_FULL','TLS_R8_TILE_8X4','TLS_ACTION_PROBE','TLS_SHOT_FRAMES') {
    Remove-Item "Env:\$v" -ErrorAction SilentlyContinue
}

$env:TLS_INPUT_SCRIPT = $INPUT
$env:TLS_SHOT_FRAMES  = $SHOT_FRAME

$exe = Join-Path $root 'build\recomp\tls_runner.exe'
if (-not (Test-Path $exe)) { Write-Host "FAIL: $exe not built" -ForegroundColor Red; exit 1 }

$ppm = Join-Path $root "build\recomp\d3d11_screenshot_$SHOT_FRAME.ppm"
Remove-Item $ppm -ErrorAction SilentlyContinue
$log = Join-Path $root 'logs\invariant.log'
New-Item -ItemType Directory -Force -Path (Split-Path $log) | Out-Null

& $exe --window --frames 3520 *> $log
if (-not (Test-Path $ppm)) { Write-Host 'FAIL: no screenshot produced' -ForegroundColor Red; exit 1 }

# 1. structural: the sequence must reach Game
$seqs = Select-String -Path $log -Pattern 'Seq: (\S+)' |
        ForEach-Object { $_.Matches[0].Groups[1].Value } | Select-Object -Unique
$reachedGame = $seqs -contains 'Game'

# 2. visual: frame 3500 must match the recorded reference
$sha = (Get-FileHash $ppm -Algorithm SHA256).Hash

$ok = $reachedGame -and ($sha -eq $EXPECTED_SHA)

Write-Host ""
Write-Host "sequences : $($seqs -join ' -> ')"
Write-Host "reached Game : $reachedGame"
Write-Host "sha256    : $sha"
Write-Host "expected  : $EXPECTED_SHA"
Write-Host ""

if ($ok) {
    Write-Host 'PASS - Chapter-1 progression invariant holds' -ForegroundColor Green
    exit 0
} else {
    if (-not $reachedGame) { Write-Host 'FAIL: the sequence never reached Game' -ForegroundColor Red }
    if ($sha -ne $EXPECTED_SHA) {
        Write-Host 'FAIL: frame 3500 differs from the recorded reference.' -ForegroundColor Red
        Write-Host '      If this change is intended, re-record EXPECTED_SHA and update handover 5c.35.'
    }
    exit 1
}
