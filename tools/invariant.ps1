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
#
# RE-RECORDED IN 5c.46 AP-AR (intended change, user-approved): the AP-AQ renderer fixes are now
# the BUILD DEFAULTS. Two host defects were fixed in AP-AQ and left default-off so the references
# recorded then stayed valid; AP-AR promotes both, because they are plain GX semantics - the
# guest's BP 0x20/0x21 scissor must clip, and CMODE0 bit 0 must decide whether the blend factors
# are applied at all:
#   * recomp/gfx_d3d11.c now applies the guest's scissor (a second rasterizer state, rs_scissor,
#     with ScissorEnable = TRUE; D3D11 ignores RSSetScissorRects without it, which is why the
#     AP-AP addendum's "the scissor changes nothing" measured an inert switch);
#   * it no longer promotes guest-disabled blends (dst_factor == 1/5/7) to adds.
# Both references moved, exactly as AP-AQ item 14 predicted, and each was re-measured on TWO
# independent runs of this exact instrument before being recorded (2026-10-30):
#   guest 2800 (content): 6465ACEF... luma 33.50 ->
#                         8938E36934002EC6B4840B3B9823538521C78D055F23E7C3C8CBAABCA7305DD7
#                         (mean RGB (60.07, 45.10, 49.14), luma 50.04, >250 0.00 %, <20 16.94 %);
#   guest 3500 (popup)  : C5535C7D... luma 253.63 ->
#                         F97A586365100E36814A51C63CA0F701FECBCD1D7650CF4A5CB7E3B6CA806293
#                         (mean RGB (45.57, 49.29, 49.20), luma 48.17, >250 2.02 %, <20 31.58 %).
# Both frames are now the cave; the 3500 frame carries the "NEW TUTORIAL" band and its (B) prompt
# on top of it (docs/evidence/ar_gate_promoted_pair.png), i.e. what the popup assertion was
# written to see. That makes "the popup frame must be BRIGHT (luma > 200)" false by construction,
# so it is REPLACED by a non-saturation bound and a bright-pixel window: the popup frame must not
# be a white-out (luma < 150, < 10 % of pixels above luma 250) yet must still carry the band's
# white text (at least 0.5 % above 250; measured 2.02 %). The content frame's measured 0.00 %
# bright fraction is the other half of the same swap guard.
# The superseded behaviour is one environment away and was measured after the promotion:
# TLS_NO_SCISSOR=1 TLS_FORCE_BLEND=1 returns 6465ACEF... and C5535C7D... exactly, so the old
# references are reproducible rather than lost.
$EXPECTED_SHA = 'F97A586365100E36814A51C63CA0F701FECBCD1D7650CF4A5CB7E3B6CA806293'
$SHOT_FRAME   = '3500'
$INPUT        = '600-612:A,900-912:A,1200-1212:A,1440-1452:UP,1500-1512:A,1600-1612:A,1700-1712:A,1800-1812:A'

# ---------------------------------------------------------------------------------------------
# 5c.46 AP-AO: A SECOND, CONTENT-BEARING FRAME - because frame 3500 is a white screen.
#
# Measured in AP-AO: frame 3500 is a flat white field with the "NEW TUTORIAL" popup on it
# (mean RGB 253.59/253.56/253.48, 99.3 % of pixels above luma 250, and byte-identical to
# docs/evidence/host_3500_tutorial_menu_apZ.png), so the frame-3500 hash asserts the popup and
# the save - NOT the picture. A completely broken 3D layer, or the AP-AI white-out itself, would
# still PASS. The frame is deterministic (4/4 identical hashes) precisely because the popup sits
# on a stable UI plateau, which is also why it cannot see geometry.
#
# So the gate now also shoots guest frame 2800, which is a fully-drawn Gurgan Cave frame in the
# same run (luma 33.1, 46.3 % of pixels below luma 20, texture detail - see
# docs/evidence/ao_gate_f2800_content.png), and asserts THREE things about it:
#   1. its hash equals $EXPECTED_SHA_CONTENT (a pixel regression on real geometry);
#   2. its mean luma is inside [$CONTENT_LUMA_MIN, $CONTENT_LUMA_MAX], so a white-out, a black
#      screen or a lost render fails instead of passing;
#   3. fewer than $CONTENT_BRIGHT_MAX of its pixels are above luma 250 (the AP-AI saturation
#      signature).
# A fourth check keeps the two files from being swapped. It used to be "the popup frame is BRIGHT
# (luma > 200) and the content frame DARK (luma < 120)", which was true while frame 3500 sat on the
# white plateau. Since 5c.46 AP-AR both frames are cave frames (luma 48.17 / 50.04), so the guard
# is now built from the one thing that still distinguishes them: the popup band's white text.
# The popup frame must be non-saturated (luma < $POPUP_LUMA_MAX) but must carry bright pixels
# (>= $POPUP_BRIGHT_MIN, measured 2.02 %), and the content frame must have almost none
# (< $CONTENT_BRIGHT_MAX, measured 0.00 %). Swapping the two files fails both halves loudly.
#
# The two shot files are named by the PRESENT counter (gfx_d3d11.c writes
# d3d11_screenshot_<present>.ppm), and the present counter runs 64 ahead of the guest frame at
# this point of the timeline, so the names are not known a priori. They are taken from the run's
# own log: the last two `[D3D11] Dumped screenshot to ...` lines, in request order.
#
# BOTH REFERENCES MOVED WHEN THE SECOND SHOT WAS ADDED, and that is itself a measurement. With
# `TLS_SHOT_FRAMES=3500` alone the popup frame hashes C5447108...; with `TLS_SHOT_FRAMES=2800,3500`
# it hashes C5535C7D... in 2/2 runs (measured twice, AP-AO). So one extra screenshot at 2800
# changes what has been rendered by frame 3500: the field's scene clock is not a pure function of
# the guest frame number - the same effect that made AP-AN's three attempts disagree under host
# load. A gate reference is therefore only valid for a fixed INSTRUMENT as well as a fixed build.
# The values below are recorded for THIS shot list and were each measured twice on an idle host;
# a 3500-only run still produces C5447108... (kept here so the older reference is not lost).
$CONTENT_FRAME          = '2800'
$EXPECTED_SHA_CONTENT   = '8938E36934002EC6B4840B3B9823538521C78D055F23E7C3C8CBAABCA7305DD7'
$CONTENT_LUMA_MIN       = 15.0
$CONTENT_LUMA_MAX       = 120.0
$CONTENT_BRIGHT_MAX     = 0.10
# 5c.46 AP-AR: was $POPUP_LUMA_MIN = 200.0, i.e. "the popup frame is the white plateau". That frame
# is gone (the plateau was the renderer defect), so the assertion is inverted into what it was
# really guarding: the popup frame must NOT be a white-out, and must still show the band's text.
$POPUP_LUMA_MAX         = 150.0   # measured 48.17 (full image) / 48.53 (this script's sampling)
$POPUP_BRIGHT_MIN       = 0.005   # measured 2.02 % above luma 250 (the band and its prompt)
$POPUP_BRIGHT_MAX       = 0.10    # a wash would be ~100 %; the plateau was 99.30 %

# Mean luma of a binary P6 PPM, sampled every $Step-th pixel. PowerShell-native on purpose: the
# gate must not depend on python being on PATH, and a 1/64 sample of a 1280x720 frame is within
# a few 0.1 of the full-image mean (which is all a luma window needs).
function Get-PpmStats {
    param([string]$Path, [int]$Step = 64)
    if (-not (Test-Path $Path)) { return $null }
    $bytes = [System.IO.File]::ReadAllBytes($Path)
    if ($bytes.Length -lt 32) { return $null }
    if ($bytes[0] -ne 0x50 -or $bytes[1] -ne 0x36) { return $null }   # 'P6'
    $nl = 0; $dataStart = -1
    for ($k = 0; $k -lt $bytes.Length; $k++) {
        if ($bytes[$k] -eq 10) { $nl++; if ($nl -eq 3) { $dataStart = $k + 1; break } }
    }
    if ($dataStart -lt 0) { return $null }
    $head = [System.Text.Encoding]::ASCII.GetString($bytes, 0, [Math]::Min($dataStart, 64))
    $mm = [regex]::Match($head, 'P6\s+(\d+)\s+(\d+)')
    if (-not $mm.Success) { return $null }
    $w = [int]$mm.Groups[1].Value; $h = [int]$mm.Groups[2].Value
    $pixels = $w * $h
    if ($dataStart + $pixels * 3 -gt $bytes.Length) { return $null }
    $sum = 0.0; $n = 0; $bright = 0
    for ($p = 0; $p -lt $pixels; $p += $Step) {
        $o = $dataStart + $p * 3
        $l = 0.299 * $bytes[$o] + 0.587 * $bytes[$o + 1] + 0.114 * $bytes[$o + 2]
        $sum += $l
        if ($l -gt 250) { $bright++ }
        $n++
    }
    return [pscustomobject]@{ Width = $w; Height = $h; Luma = ($sum / $n); Bright = ($bright / $n) }
}


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
# 5c.46 AP-AR: TLS_SCISSOR / TLS_NO_SCISSOR / TLS_NO_FORCE_BLEND / TLS_FORCE_BLEND now enable or
# re-enable the promoted renderer defaults, so a gate run must not inherit them from whatever
# shell launched it. The gate measures the DEFAULT renderer, which is what its references were
# recorded on. (TLS_BATCH_CUTOFF is here for the empty-string trap AP-AQ documents: unset is not
# the same as "".)
foreach ($v in 'TLS_SCRIPT_FILTER','TLS_NO_SCRIPT_FILTER','TLS_FAKE_FADE','TLS_NO_FAKE_FADE',
               'TLS_EFB_ALPHA','TLS_SCENE_SM_PROBE','TLS_FADE_RET','TLS_PRESENT_PROBE',
               'TLS_TEX_HASH_FULL','TLS_R8_TILE_8X4','TLS_ACTION_PROBE','TLS_SHOT_FRAMES',
               'TLS_SAVE_PROBE','TLS_NAND_PROBE','TLS_ISFS_SERVICE','TLS_SAVE_PRECREATE',
               'TLS_SHOT_GUEST','TLS_BATCH_CUTOFF',
               'TLS_SCISSOR','TLS_NO_SCISSOR','TLS_NO_FORCE_BLEND','TLS_FORCE_BLEND') {
    Remove-Item "Env:\$v" -ErrorAction SilentlyContinue
}

$env:TLS_INPUT_SCRIPT = $INPUT
# TLS_SHOT_GUEST=1 IS REQUIRED (5c.46 AP-AO). Without it, `TLS_SHOT_FRAMES` matches the PRESENT
# counter as well as the guest frame (gfx_d3d11.c:3245-3250) and the present counter wins first:
# `TLS_SHOT_FRAMES=3500` then writes build/recomp/d3d11_screenshot_3500.ppm from GUEST frame
# ~3436, not 3500. Every previous gate reference was therefore keyed to the present counter while
# its comment said "frame 3500" - and it went unnoticed because in this timeline both frames are
# the same white "NEW TUTORIAL" plateau, byte-identical (measured: present 2800 and present 3500
# both hash C5447108...). The gate is now guest-keyed, so 2800 means guest 2800 (the cave frame,
# present 2864) and 3500 means guest 3500 (present 3564).
$env:TLS_SHOT_GUEST   = '1'
# BOTH frames, one run: the content frame first, the popup plateau second (the logs list the
# shots in request order, which is what the attempt loop relies on to name the two files).
$env:TLS_SHOT_FRAMES  = "$CONTENT_FRAME,$SHOT_FRAME"

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
Set-Content $summary "attempt`thandover`tsha`tshaContent`tlumaContent`tbrightContent`tsave`tbanner`treachedGame`tlumaPopup`tbrightPopup"
for ($attempt = 1; $attempt -le $Attempts; $attempt++) {
    $attemptLog = "$log.a$attempt"
    Remove-Item $ppm -ErrorAction SilentlyContinue
    Remove-Item $SAVE_FILE, $BANNER, $TMP_SAVE -Force -ErrorAction SilentlyContinue

    & $exe --window --minimized --frames 3520 *> $attemptLog
    Copy-Item $attemptLog $log -Force
    $handover = -1
    $hm = Select-String -Path $attemptLog -Pattern '\[TLS Frame\s+(\d+)\] Seq: Game' | Select-Object -First 1
    if ($hm) { $handover = [int]$hm.Matches[0].Groups[1].Value }

    # Name the two shots from the log (present-keyed file names, request order).
    $shotPaths = @(Select-String -Path $attemptLog -Pattern 'Dumped screenshot to (\S+\.ppm)' |
                  ForEach-Object { $_.Matches[0].Groups[1].Value })
    $contentPpm = if ($shotPaths.Count -ge 2) { Join-Path $root $shotPaths[$shotPaths.Count - 2] } else { '' }
    $popupPpm   = if ($shotPaths.Count -ge 1) { Join-Path $root $shotPaths[$shotPaths.Count - 1] } else { '' }
    # With TLS_SHOT_GUEST=1 the file names are the PRESENT counter (guest 3500 -> present 3564),
    # so the old fixed `d3d11_screenshot_3500.ppm` path no longer identifies the shot: existence
    # is checked on the two files the log named. (Measured, 5c.46 AP-AO: the first guest-keyed run
    # of this gate failed every attempt at the old path with `no screenshot produced`.)
    if ($shotPaths.Count -lt 2 -or -not (Test-Path $contentPpm) -or -not (Test-Path $popupPpm)) {
        Write-Host ("attempt {0}: expected two shots, the log named {1} (handover {2})" -f `
                    $attempt, $shotPaths.Count, $handover) -ForegroundColor Yellow
        Add-Content $summary ("{0}`t{1}`t`t`t`t`t0`t0`tFalse`t`t" -f $attempt, $handover)
        continue
    }

    # 1. structural: the sequence must reach Game
    $seqs = Select-String -Path $attemptLog -Pattern 'Seq: (\S+)' |
            ForEach-Object { $_.Matches[0].Groups[1].Value } | Select-Object -Unique
    $reachedGame = $seqs -contains 'Game'

    # 2. visual: guest 3500 (the popup plateau) and guest 2800 (real content) must match their
    #    recorded references, and the content frame must still BE content.
    $sha = (Get-FileHash $popupPpm -Algorithm SHA256).Hash
    $shaContent = if ($contentPpm -and (Test-Path $contentPpm)) {
        (Get-FileHash $contentPpm -Algorithm SHA256).Hash } else { '' }
    $cs = if ($contentPpm) { Get-PpmStats -Path $contentPpm } else { $null }
    $ps_ = if ($popupPpm)   { Get-PpmStats -Path $popupPpm }   else { $null }
    $lumaContent   = if ($cs)  { [math]::Round($cs.Luma, 2) }   else { -1 }
    $brightContent = if ($cs)  { [math]::Round($cs.Bright, 4) } else { -1 }
    $lumaPopup     = if ($ps_) { [math]::Round($ps_.Luma, 2) }  else { -1 }
    $brightPopup   = if ($ps_) { [math]::Round($ps_.Bright, 4) } else { -1 }
    $contentOk = ($shaContent -eq $EXPECTED_SHA_CONTENT) -and
                 ($lumaContent -ge $CONTENT_LUMA_MIN) -and ($lumaContent -le $CONTENT_LUMA_MAX) -and
                 ($brightContent -lt $CONTENT_BRIGHT_MAX)
    # 5c.46 AP-AR: the popup frame must be a real scene, not the white plateau (luma bound), and
    # must still show the band's white text (bright-pixel window). $swapOk then additionally
    # requires the content frame to have no such band, so the two files cannot be swapped.
    $popupOk = ($lumaPopup -lt $POPUP_LUMA_MAX) -and
               ($brightPopup -ge $POPUP_BRIGHT_MIN) -and ($brightPopup -lt $POPUP_BRIGHT_MAX)
    $swapOk = $popupOk -and ($brightContent -lt $CONTENT_BRIGHT_MAX)

    # 3. structural (5c.42 K): the run must have CREATED its own save, byte-exact in size,
    # because that is the defect this invariant now also guards.
    $saveLen   = if (Test-Path $SAVE_FILE) { (Get-Item $SAVE_FILE).Length } else { 0 }
    $bannerLen = if (Test-Path $BANNER)    { (Get-Item $BANNER).Length }    else { 0 }
    $saveOk    = ($saveLen -eq 1348992) -and ($bannerLen -eq 29344)

    $ok = $reachedGame -and ($sha -eq $EXPECTED_SHA) -and $contentOk -and $swapOk -and $saveOk
    Add-Content $summary ("{0}`t{1}`t{2}`t{3}`t{4}`t{5}`t{6}`t{7}`t{8}`t{9}`t{10}" -f `
        $attempt, $handover, $sha, $shaContent, $lumaContent, $brightContent, $saveLen, $bannerLen, $reachedGame,
        $lumaPopup, $brightPopup)
    Write-Host ("attempt {0}/{1}: reachedGame={2} handover={3} popup={4} content={5} luma={6}/{7} save={8}/{9}" -f `
                $attempt, $Attempts, $reachedGame, $handover, $sha.Substring(0, 8),
                $(if ($shaContent) { $shaContent.Substring(0, 8) } else { 'none' }),
                $lumaPopup, $lumaContent, $saveLen, $bannerLen)
    if ($ok) { break }
}

Write-Host ""
Write-Host "sequences : $($seqs -join ' -> ')"
Write-Host "reached Game : $reachedGame"
Write-Host "handover  : guest frame $handover (--frames 3520)"
Write-Host "popup  f$SHOT_FRAME : sha $sha"
Write-Host "                  expected $EXPECTED_SHA"
Write-Host "                  luma $lumaPopup (must be < $POPUP_LUMA_MAX, i.e. not a white-out), bright>250 $brightPopup (must be $POPUP_BRIGHT_MIN..$POPUP_BRIGHT_MAX - the tutorial band's text)"
Write-Host "content f$CONTENT_FRAME : sha $shaContent"
Write-Host "                  expected $EXPECTED_SHA_CONTENT"
Write-Host "                  luma $lumaContent (must be $CONTENT_LUMA_MIN..$CONTENT_LUMA_MAX), bright>250 $brightContent (must be < $CONTENT_BRIGHT_MAX)"
Write-Host "save created : savedata.dat=$saveLen banner.bin=$bannerLen (expect 1348992 / 29344)"
Write-Host "per-attempt evidence: $summary and $log.a<attempt>"
Write-Host ""

if ($ok) {
    Write-Host 'PASS - Chapter-1 progression invariant holds: the sequence reached Game, the save was created, the popup frame is its recorded cave scene (not a white-out) and frame 2800 still renders the cave' -ForegroundColor Green
    exit 0
} else {
    if (-not $reachedGame) { Write-Host 'FAIL: the sequence never reached Game (all attempts)' -ForegroundColor Red }
    if ($sha -ne $EXPECTED_SHA) {
        Write-Host "FAIL: frame $SHOT_FRAME differs from the recorded reference." -ForegroundColor Red
        Write-Host '      If this change is intended, re-record EXPECTED_SHA and update handover 5c.35.'
    }
    if (-not $contentOk) {
        Write-Host "FAIL: the content frame $CONTENT_FRAME does not pass its checks (AP-AO)." -ForegroundColor Red
        if ($shaContent -ne $EXPECTED_SHA_CONTENT) { Write-Host "      sha $shaContent != $EXPECTED_SHA_CONTENT" }
        if ($lumaContent -lt $CONTENT_LUMA_MIN -or $lumaContent -gt $CONTENT_LUMA_MAX) {
            Write-Host "      mean luma $lumaContent is outside $CONTENT_LUMA_MIN..$CONTENT_LUMA_MAX - a white-out or a black screen fails here by design"
        }
        if ($brightContent -ge $CONTENT_BRIGHT_MAX) { Write-Host "      $brightContent of its pixels are above luma 250 (AP-AI saturation)" }
    }
    if (-not $swapOk) {
        Write-Host "FAIL: the two shots look swapped or the popup frame is not the recorded scene (popup luma $lumaPopup bright>250 $brightPopup, content luma $lumaContent bright>250 $brightContent)" -ForegroundColor Red
        if (-not $popupOk) {
            Write-Host "      popup frame: luma must be < $POPUP_LUMA_MAX and bright>250 in $POPUP_BRIGHT_MIN..$POPUP_BRIGHT_MAX"
        }
        if ($brightContent -ge $CONTENT_BRIGHT_MAX) {
            Write-Host "      content frame: $brightContent of its pixels are above luma 250 (it is not the content frame)"
        }
    }
    if (-not $saveOk) { Write-Host "FAIL: the game did not create its save (savedata.dat=$saveLen banner.bin=$bannerLen)" -ForegroundColor Red }
    exit 1
}
