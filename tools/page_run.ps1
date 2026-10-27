# Tutorial-page measurement run (handover 5c.46).
#
# One command, so the input script and the probe flags are always set together - the
# project rule is that env vars do not survive between shell invocations, and a run whose
# inputs never reached the page measures the title screen instead.
#
#   .\tools\page_run.ps1 -Frames 4020 -Log logs\page_base.log            # baseline page
#   $env:TLS_ASYNC_IO_COMPLETE='1'; .\tools\page_run.ps1 -Frames 4020    # flag on
#
# The page's four presses are tuned to the title walk handing over at a specific frame, and
# that frame MOVES between runs (5c.46 Z: 1620 on a clean idle host, 1620..1848 and worse
# when the host is loaded or the input walk races). A run that hands over elsewhere does not
# show the page at all, so this script validates the hand-over and re-runs (like
# tools/chain_run.ps1 does for the Chapter-1 race) instead of reporting a page verdict from
# a run that was never on the page.
#
# Always launches the window minimised (AGENTS.md: never foreground the game window) and
# always deletes the target screenshot first, because a run that dies early would
# otherwise leave the previous run's file in place and read as "no change".
param(
    [int]$Frames = 4020,
    [string]$Log = 'logs\page.log',
    [string]$Shot = '4000',
    [int]$Attempts = 4,
    # Expected SetNextSequence('Game') frame; 0 = accept any (and report it).
    [int]$RequireGame = 1620
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

# The 9-press title walk plus the four tutorial presses (5c.37 session script).
$env:TLS_INPUT_SCRIPT = '600-612:A,900-912:A,1200-1212:A,1440-1452:UP,1500-1512:A,1600-1612:A,1700-1712:A,1800-1812:A,3620-3632:A,3700-3712:A,3800-3812:A,3900-3912:A'
$env:TLS_SHOT_FRAMES = $Shot

$ppm = "build\recomp\d3d11_screenshot_$Shot.ppm"
$exe = Join-Path $root 'build\recomp\tls_runner.exe'
$saveDir = Join-Path $root 'SaveData\title\00010000\534c5345\data'
$logPath = Join-Path $root $Log
$dir = Split-Path -Parent $logPath
if ($dir -and -not (Test-Path $dir)) { New-Item -ItemType Directory -Path $dir | Out-Null }

for ($attempt = 1; $attempt -le $Attempts; $attempt++) {
    Remove-Item $ppm -ErrorAction SilentlyContinue
    # Same fresh-console precondition as tools/invariant.ps1: a leftover save makes the title
    # take the CONTINUE path instead of the NEW GAME walk, which changes everything after it
    # (5c.46 Z).
    Remove-Item (Join-Path $saveDir 'savedata.dat'), (Join-Path $saveDir 'banner.bin') -Force -ErrorAction SilentlyContinue

    $sw = [System.Diagnostics.Stopwatch]::StartNew()
    & $exe --window --minimized --frames $Frames *> $logPath
    $sw.Stop()

    $game = (Select-String -Path $logPath -Pattern "SetNextSequence\('Game'\)" |
             Select-Object -First 1)
    $gameFrame = if ($game -and $game.Line -match 'frame=(\d+)') { [int]$Matches[1] } else { -1 }

    $seqs = (Select-String -Path $logPath -Pattern 'Seq: (\S+)' |
             ForEach-Object { $_.Matches[0].Groups[1].Value } | Select-Object -Unique) -join ' -> '
    Write-Host ("attempt {0}: frames={1} shot={2} elapsed={3:N0}s Game@{4} sequences: {5}" -f
                $attempt, $Frames, $Shot, $sw.Elapsed.TotalSeconds, $gameFrame, $seqs)

    if ($RequireGame -le 0 -or $gameFrame -eq $RequireGame) {
        $frameLines = Select-String -Path $logPath -Pattern '\[TLS Frame (\d+)\]'
        if ($frameLines) { Write-Host ("last frame line: " + $frameLines[-1].Line) }
        if (Test-Path $ppm) {
            $h = (Get-FileHash $ppm -Algorithm SHA256).Hash
            Write-Host ("shot {0}: {1} bytes sha256={2}" -f $Shot, (Get-Item $ppm).Length, $h)
        } else {
            Write-Host "shot ${Shot}: MISSING (the run did not reach the frame)" -ForegroundColor Red
        }
        return
    }
    Write-Host ("  -> hand-over at frame {0}, expected {1}: the page presses miss the page, re-running" -f $gameFrame, $RequireGame) -ForegroundColor Yellow
}

Write-Host ("no run in {0} attempts handed over at frame {1}; the last log is {2}" -f $Attempts, $RequireGame, $Log) -ForegroundColor Red
