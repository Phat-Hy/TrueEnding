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

$EXPECTED_SHA = 'EAB33141824F9CF919F0A083E538C7F8BE121783A24C6E97C654253B71E1412F'
$SHOT_FRAME   = '3500'
$INPUT        = '600-612:A,900-912:A,1200-1212:A,1440-1452:UP,1500-1512:A,1600-1612:A,1700-1712:A,1800-1812:A'

# 5c.42 K: the game now CREATES its save during this run (the fn_800A4228 fabrication
# is retired and /dev/fs is a truthful device model), so the save must be removed
# before every run or the next one would start from "save present" and take the
# CONTINUE path instead. Deleting it makes each run a fresh-console boot, which is
# also what lets the guard below assert the save was created.
$SAVE_DIR  = Join-Path $root 'SaveData\title\00010000\534c5345\data'
$SAVE_FILE = Join-Path $SAVE_DIR 'savedata.dat'
$BANNER    = Join-Path $SAVE_DIR 'banner.bin'
Remove-Item $SAVE_FILE, $BANNER -Force -ErrorAction SilentlyContinue

# Probe flags must be genuinely REMOVED, not set to '' - getenv() treats an empty
# string as set, which silently keeps a flag enabled (handover 5c.33a).
foreach ($v in 'TLS_SCRIPT_FILTER','TLS_NO_SCRIPT_FILTER','TLS_FAKE_FADE','TLS_NO_FAKE_FADE',
               'TLS_EFB_ALPHA','TLS_SCENE_SM_PROBE','TLS_FADE_RET','TLS_PRESENT_PROBE',
               'TLS_TEX_HASH_FULL','TLS_R8_TILE_8X4','TLS_ACTION_PROBE','TLS_SHOT_FRAMES',
               'TLS_SAVE_PROBE','TLS_NAND_PROBE','TLS_ISFS_SERVICE','TLS_SAVE_PRECREATE') {
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

# --minimized: every runner launch in this project starts the window minimised and
# without activation (host_runner.c), so a verification run can never steal focus.
# The screenshot is captured from the back buffer BEFORE Present, so a minimised
# window does not change it - this script is itself the check that it does not.
& $exe --window --minimized --frames 3520 *> $log
if (-not (Test-Path $ppm)) { Write-Host 'FAIL: no screenshot produced' -ForegroundColor Red; exit 1 }

# 1. structural: the sequence must reach Game
$seqs = Select-String -Path $log -Pattern 'Seq: (\S+)' |
        ForEach-Object { $_.Matches[0].Groups[1].Value } | Select-Object -Unique
$reachedGame = $seqs -contains 'Game'

# 2. visual: frame 3500 must match the recorded reference
$sha = (Get-FileHash $ppm -Algorithm SHA256).Hash

# 3. structural (5c.42 K): the run must have CREATED its own save, byte-exact in size,
# because that is the defect this invariant now also guards.
$saveLen   = if (Test-Path $SAVE_FILE) { (Get-Item $SAVE_FILE).Length } else { 0 }
$bannerLen = if (Test-Path $BANNER)    { (Get-Item $BANNER).Length }    else { 0 }
$saveOk    = ($saveLen -eq 1348992) -and ($bannerLen -eq 29344)

$ok = $reachedGame -and ($sha -eq $EXPECTED_SHA) -and $saveOk

Write-Host ""
Write-Host "sequences : $($seqs -join ' -> ')"
Write-Host "reached Game : $reachedGame"
Write-Host "sha256    : $sha"
Write-Host "expected  : $EXPECTED_SHA"
Write-Host "save created : savedata.dat=$saveLen banner.bin=$bannerLen (expect 1348992 / 29344)"
Write-Host ""

if ($ok) {
    Write-Host 'PASS - Chapter-1 progression invariant holds (and the save was created)' -ForegroundColor Green
    exit 0
} else {
    if (-not $reachedGame) { Write-Host 'FAIL: the sequence never reached Game' -ForegroundColor Red }
    if ($sha -ne $EXPECTED_SHA) {
        Write-Host 'FAIL: frame 3500 differs from the recorded reference.' -ForegroundColor Red
        Write-Host '      If this change is intended, re-record EXPECTED_SHA and update handover 5c.35.'
    }
    if (-not $saveOk) { Write-Host "FAIL: the game did not create its save (savedata.dat=$saveLen banner.bin=$bannerLen)" -ForegroundColor Red }
    exit 1
}
