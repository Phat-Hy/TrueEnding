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
# Usage:  pwsh tools/invariant.ps1 [-Log logs_ap\invariant.log]
# Exit code 0 = pass, 1 = fail.
#
# -Log exists because this sandbox sometimes denies writes INSIDE logs/ while allowing
# them everywhere else in the workspace (the directory's inherited grant is
# inherit-only, so the confined token cannot add files to it - measured, handover
# 5c.46 AP-N). logs_ap/ is the scratch directory the project already uses for exactly
# this; the default stays logs/invariant.log.
param(
    [string]$Log = ''
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent (Split-Path -Parent $MyInvocation.MyCommand.Path)
Set-Location $root

# HISTORICAL NOTE (5c.46 D -> E). Frame 3500 is back to its original value, and the tutorial
# page at frame 4000 is still fixed - so the visible improvement costs the reference frame
# nothing. What happened: 5c.46 D's first rule (a plate check inside the ink classification,
# plus a size gate on the glow path) fixed frame 4000 but moved this hash to 98F0FD10...;
# 5c.46 E restructured it so the CLASSIFICATION is unchanged and only the MATTE is gated by
# plate fraction - which restores this frame exactly, because the parchment then takes the
# same path it always did (is_ink_art, so neither matte nor glow) and renders untouched.
#
# RE-RECORDED IN 5c.46 AP-O (intended change). The TEV pixel shader was widened from 2D-only
# to every two-map batch, so the Chapter-1 water/glow geometry now goes through the guest's
# real TEV combiners instead of the legacy `tex * vertex-colour` expression. The old value was
# EAB33141824F9CF919F0A083E538C7F8BE121783A24C6E97C654253B71E1412F.
#
# Why this frame and not the old one: at frame 3500 the wall batches have two-stage chains
# (ras, then tex*ras) and render IDENTICALLY under both paths, while the water/glow batches
# have eight stages, of which the legacy path could evaluate only the first two. The dropped
# stages blend in a second texture weighted by prev.a, multiply by a dark 512x512 map at scale
# 2, and ADD a 256x1 gradient ramp times an EFB copy - which is why the legacy water was a
# blown-out pale sheet (region mean (62.9,62.4,53.9)) and the widened one is a dark reflective
# surface (24.4,25.0,24.5). Dolphin's own render of this scene
# (docs/evidence/dolphin_ref_run3_f5000_gameplay.png) is dark water, not a white sheet.
# Evidence: docs/evidence/cmp_f3500_widen_5c46apo.png (legacy | widened | 4x difference),
# cmp_f3500_smear_5c46apo.png (the clamp-vs-wrap sampler defect that had been keeping 3D
# batches off the TEV path) and host_f3500_tev3d_5c46apo.png.
#
# It reproduces exactly: two independent runs of the widened build both give D3329E35..., and
# the tutorial-page gate is untouched by it (page mean luma 150.33, crest 11.2 % dark).
#
# RE-RECORDED IN 5c.46 AP-Z (intended change, user-approved). The hero is visible now:
# stream-order staging EFB copies (the default, see recomp/gx_pipeline.c) plus the GXDrawDone
# flush make the character's 256x256 base texture bake real CMPR art instead of the
# all-transparent pattern - docs/evidence/host_5500_hero_visible_apZ.png shows the character
# rendered in the cave where it used to be absent entirely.
#
# The cost, stated plainly: that change MOVES THE SEQUENCE, so frame 3500 is no longer the
# cave but the "NEW TUTORIAL" menu (docs/evidence/host_3500_tutorial_menu_apZ.png), and the
# recorded hash moved from D3329E35... to C5447108.... This is a change in WHAT THE GATE
# MEASURES, so it was re-recorded deliberately rather than silently: the old reference and
# its reasoning are kept above, and the new frame is a stable, fully-drawn scene.
# TLS_EFB_ORDER=none restores the old inline copy behaviour if the old reference is needed.
$EXPECTED_SHA = 'C544710896788BD3475E30509640E8F608438A056F3828B3AD750D309D24CCB4'
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
# ALSO the save manager's staging copy. A run that is overrun (frames end while the
# save is still being staged) leaves a ZERO-BYTE SaveData\tmp\savedata.dat behind, and
# the next run then boots as "save present, load failed" and NEVER LEAVES THE TITLE -
# measured twice in one session: with that file present the run reports
# `Seq: Titl` at frame 3480 and creates no save, and deleting it restores
# D3329E35... exactly. This file is not covered by the title/ cleanup above, and its
# symptom (a "regression" that is really a leftover) is the worst kind to debug.
$TMP_SAVE  = Join-Path $root 'SaveData\tmp\savedata.dat'
Remove-Item $SAVE_FILE, $BANNER, $TMP_SAVE -Force -ErrorAction SilentlyContinue

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
$log = if ($Log) { Join-Path $root $Log } else { Join-Path $root 'logs\invariant.log' }
New-Item -ItemType Directory -Force -Path (Split-Path $log) | Out-Null

# --minimized: every runner launch in this project starts the window minimised and
# without activation (host_runner.c), so a verification run can never steal focus.
# The screenshot is captured from the back buffer BEFORE Present, so a minimised
# window does not change it - this script is itself the check that it does not.
#
# RETRY POLICY. A run can boot to the title and never advance: a stale
# SaveData\tmp\savedata.dat (see above), or a host loaded enough that the scripted
# presses race the attract screen. A FAIL is only meaningful when every attempt
# agrees, so retry before reporting - the same rule tools/page_run.ps1 already applies
# to the page. Measured this session: the identical binary reported FAIL (Seq: Titl at
# frame 3480, no save) and then PASS at the recorded hash once the stale staging file
# was gone.
$Attempts = 3
$ok = $false
$seqs = @()
$sha = ''
$saveLen = 0
$bannerLen = 0
$reachedGame = $false
# 5c.46 AP-AO: PER-ATTEMPT LOGS AND THE HANDOVER FRAME. This loop used to overwrite ONE log,
# so "three attempts, three different hashes" could not be explained after the fact - the only
# surviving evidence was the last attempt. Each attempt now keeps its own log and the summary
# records the guest frame at which the sequence actually reached 'Game' (the telemetry prints
# `[TLS Frame <n>] Seq: Game` every 60 frames). That number is the whole question: if it moves
# between attempts, `TLS_SHOT_FRAMES=3500` is anchored to a drifting event and the hash moves
# with it - which is what AP-AN measured (3C601DDE / 1F9BE875 / 4201F485).
$summary = "$log.summary.tsv"
Remove-Item $summary -ErrorAction SilentlyContinue
Set-Content $summary "attempt`thandover`tsha`tsave`tbanner`treachedGame"
for ($attempt = 1; $attempt -le $Attempts; $attempt++) {
    $attemptLog = "$log.a$attempt"
    Remove-Item $ppm -ErrorAction SilentlyContinue
    Remove-Item $SAVE_FILE, $BANNER, $TMP_SAVE -Force -ErrorAction SilentlyContinue

    & $exe --window --minimized --frames 3520 *> $attemptLog
    Copy-Item $attemptLog $log -Force
    $handover = -1
    $hm = Select-String -Path $attemptLog -Pattern '\[TLS Frame\s+(\d+)\] Seq: Game' | Select-Object -First 1
    if ($hm) { $handover = [int]$hm.Matches[0].Groups[1].Value }
    if (-not (Test-Path $ppm)) {
        Write-Host ("attempt {0}: no screenshot produced (handover {1})" -f $attempt, $handover) -ForegroundColor Yellow
        Add-Content $summary ("{0}`t{1}`t`t0`t0`tFalse" -f $attempt, $handover)
        continue
    }

    # 1. structural: the sequence must reach Game
    $seqs = Select-String -Path $attemptLog -Pattern 'Seq: (\S+)' |
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
    Add-Content $summary ("{0}`t{1}`t{2}`t{3}`t{4}`t{5}" -f $attempt, $handover, $sha, $saveLen, $bannerLen, $reachedGame)
    Write-Host ("attempt {0}/{1}: reachedGame={2} handover={3} sha={4} save={5}/{6}" -f `
                $attempt, $Attempts, $reachedGame, $handover, $sha.Substring(0, 8), $saveLen, $bannerLen)
    if ($ok) { break }
}

Write-Host ""
Write-Host "sequences : $($seqs -join ' -> ')"
Write-Host "reached Game : $reachedGame"
Write-Host "handover  : guest frame $handover (--frames 3520, screenshot at $SHOT_FRAME)"
Write-Host "sha256    : $sha"
Write-Host "expected  : $EXPECTED_SHA"
Write-Host "save created : savedata.dat=$saveLen banner.bin=$bannerLen (expect 1348992 / 29344)"
Write-Host "per-attempt evidence: $summary and $log.a<attempt>"
Write-Host ""

if ($ok) {
    Write-Host 'PASS - Chapter-1 progression invariant holds (and the save was created)' -ForegroundColor Green
    exit 0
} else {
    if (-not $reachedGame) { Write-Host 'FAIL: the sequence never reached Game (all attempts)' -ForegroundColor Red }
    if ($sha -ne $EXPECTED_SHA) {
        Write-Host 'FAIL: frame 3500 differs from the recorded reference.' -ForegroundColor Red
        Write-Host '      If this change is intended, re-record EXPECTED_SHA and update handover 5c.35.'
    }
    if (-not $saveOk) { Write-Host "FAIL: the game did not create its save (savedata.dat=$saveLen banner.bin=$bannerLen)" -ForegroundColor Red }
    exit 1
}
