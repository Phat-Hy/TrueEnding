# Tutorial-page measurement run (handover 5c.46).
#
# One command, so the input script and the probe flags are always set together - the
# project rule is that env vars do not survive between shell invocations, and a run whose
# inputs never reached the page measures the title screen instead.
#
#   .\tools\page_run.ps1 -Frames 4020 -Log logs\page_base.log            # baseline page
#   $env:TLS_ASYNC_IO_COMPLETE='1'; .\tools\page_run.ps1 -Frames 4020    # flag on
#
# PREFER THE CONTENT-KEYED CAPTURE. A frame number is not a stable page selector: the
# page and the cave/gameplay half alternate between PRESENTS, the page's own window moves
# with the hand-over frame, and on the current build present 3780 is the CAVE while 3781
# is the page (handover 5c.46 AP-N). -CaptureTex therefore captures the first present that
# BINDS that texture at or after -CaptureAfter and reports the present it used:
#
#   .\tools\page_run.ps1 -Frames 3800 -PressShift 27 -RequireGame 1647 `
#                        -CaptureTex 921DEA60 -CaptureAfter 3730 -Log logs\page_crest.log
#
# (921DEA60 is the tutorial parchment. The first matching present after 3700 is mid-fade,
# so 3730 is the settled page. -Shot <n> remains for A/B runs and for other screens.)
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
    [int]$RequireGame = 1620,
    # Shift the four tutorial presses by this many frames. They are tuned to a 1620 hand-over;
    # when the title hands over at 1647 they land early and the page never appears (5c.46 AA),
    # so -PressShift 27 is the run for a 1647 hand-over.
    [int]$PressShift = 0,
    # Content-keyed capture (recommended): hex texture address, e.g. 921DEA60 for the page's
    # parchment. Sets TLS_PAGE_CAPTURE=tex:<addr>,<CaptureAfter> and reports the present the
    # capture actually landed on; -Shot is then ignored.
    [string]$CaptureTex = '',
    [int]$CaptureAfter = 0
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

# The 9-press title walk plus the four tutorial presses (5c.37 session script).
$titleWalk = '600-612:A,900-912:A,1200-1212:A,1440-1452:UP,1500-1512:A,1600-1612:A,1700-1712:A,1800-1812:A'
$presses = foreach ($start in 3620, 3700, 3800, 3900) {
    '{0}-{1}:A' -f ($start + $PressShift), ($start + $PressShift + 12)
}
$env:TLS_INPUT_SCRIPT = $titleWalk + ',' + ($presses -join ',')
if ($CaptureTex) {
    # Content-keyed capture: the screenshot lands on the first present that binds the texture,
    # so the shot frame is whatever the page's own timeline says it is.
    $env:TLS_PAGE_CAPTURE = "tex:$CaptureTex,$CaptureAfter"
    Remove-Item Env:\TLS_SHOT_FRAMES -ErrorAction SilentlyContinue
} else {
    $env:TLS_SHOT_FRAMES = $Shot
}
Write-Host ("input: presses shifted {0:+#;-#;0}" -f $PressShift)
if ($CaptureTex) { Write-Host ("capture: first present binding tex 0x{0} at or after frame {1}" -f $CaptureTex, $CaptureAfter) }

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
    $runStart = Get-Date
    & $exe --window --minimized --frames $Frames *> $logPath
    $sw.Stop()

    $game = (Select-String -Path $logPath -Pattern "SetNextSequence\('Game'\)" |
             Select-Object -First 1)
    $gameFrame = if ($game -and $game.Line -match 'frame=(\d+)') { [int]$Matches[1] } else { -1 }

    $seqs = (Select-String -Path $logPath -Pattern 'Seq: (\S+)' |
             ForEach-Object { $_.Matches[0].Groups[1].Value } | Select-Object -Unique) -join ' -> '
    Write-Host ("attempt {0}: frames={1} shot={2} elapsed={3:N0}s Game@{4} sequences: {5}" -f
                $attempt, $Frames, $Shot, $sw.Elapsed.TotalSeconds, $gameFrame, $seqs)

    # Content-keyed runs: find the present the capture landed on and report that file. A file
    # from an earlier run cannot be mistaken for this one (timestamp vs run start).
    if ($CaptureTex) {
        $cap = Select-String -Path $logPath -Pattern '\[PageCapture\] firing' | Select-Object -First 1
        if (-not $cap) {
            Write-Host ("capture: TLS_PAGE_CAPTURE did not fire (no present bound tex 0x{0} after frame {1})" -f $CaptureTex, $CaptureAfter) -ForegroundColor Red
        } else {
            Write-Host ("capture: " + $cap.Line)
            if ($cap.Line -match 'present (\d+)') {
                $Shot = $Matches[1]
                $ppm  = "build\recomp\d3d11_screenshot_$Shot.ppm"
            }
        }
    }

    if ($RequireGame -le 0 -or $gameFrame -eq $RequireGame) {
        $frameLines = Select-String -Path $logPath -Pattern '\[TLS Frame (\d+)\]'
        if ($frameLines) { Write-Host ("last frame line: " + $frameLines[-1].Line) }
        if ((Test-Path $ppm) -and ((Get-Item $ppm).LastWriteTime -ge $runStart)) {
            $h = (Get-FileHash $ppm -Algorithm SHA256).Hash
            Write-Host ("shot {0}: {1} bytes sha256={2}" -f $Shot, (Get-Item $ppm).Length, $h)
        } else {
            Write-Host "shot ${Shot}: MISSING or stale (not written by this run)" -ForegroundColor Red
        }
        return
    }
    Write-Host ("  -> hand-over at frame {0}, expected {1}: the page presses miss the page, re-running" -f $gameFrame, $RequireGame) -ForegroundColor Yellow
}

Write-Host ("no run in {0} attempts handed over at frame {1}; the last log is {2}" -f $Attempts, $RequireGame, $Log) -ForegroundColor Red
