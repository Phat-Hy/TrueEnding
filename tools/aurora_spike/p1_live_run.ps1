# P1 equality, one launch (handover 5c.47 P1, recorded in 5c.46 AP-BO): the live aurora path and the
# FIFO recorder armed TOGETHER on the gate's cave window, so the bytes aurora's command processor
# consumes live and the bytes the harness replays are the same bytes of the same run.
#
# Produces: eight fed frames (guest 2794..2801) with one readback each
# (build/recomp/aurora_live_<guest>.ppm) and one capture (build/recomp/gxcap_bn/gxfifo.tlscap, a fresh
# directory so AP-BK/AP-BM's reference capture is never overwritten).
#
# Then, in this order:
#   G:\Program\aurora-spike\build2\tls_gx_replay.exe build/recomp/gxcap_bn/gxfifo.tlscap <color.ppm> `
#       --start-at 0 --stop-after 6 --probe-copy --probe-ppm logs_ap/bo_probe_2800.ppm --fb 640x448
#   ... --stop-after 7 ... bo_probe_2801.ppm
#   python tools/aurora_spike/p1_equality.py build/recomp/aurora_live logs_ap/bo_probe_2800.ppm logs_ap/bo_probe_2801.ppm
#
# The positional output PPM is the COLOUR readback, which is black by design (the documented
# next-frame fallback); `--probe-ppm` is the EFB copy payload that P1 is measured on.
#
# Start-Process, not a direct call: the live path is documented to hang at exit (AP-AY item 10). The
# wait has a ceiling and the fallback is Kill; the measurement is complete once the readbacks are on
# disk, which happens during the run.
$ErrorActionPreference = 'Stop'
Set-Location 'G:\Program\Project The Maybe(Not) Last Story'
Remove-Item 'SaveData\title\00010000\534c5345\data\savedata.dat',
            'SaveData\title\00010000\534c5345\data\banner.bin',
            'SaveData\tmp\savedata.dat' -Force -ErrorAction SilentlyContinue
Remove-Item build\recomp\aurora_live_*.ppm -Force -ErrorAction SilentlyContinue
Remove-Item build\recomp\gxcap_bn -Recurse -Force -ErrorAction SilentlyContinue
New-Item -ItemType Directory -Force -Path build\recomp\gxcap_bn | Out-Null

$frames = '2794,2795,2796,2797,2798,2799,2800,2801'
$env:TLS_INPUT_SCRIPT     = '600-612:A,900-912:A,1200-1212:A,1440-1452:UP,1500-1512:A,1600-1612:A,1700-1712:A,1800-1812:A'
$env:TLS_AURORA           = '1'
$env:TLS_AURORA_FROM      = '2794'
$env:TLS_AURORA_TO        = '2801'
$env:TLS_AURORA_SHOTS     = $frames
$env:TLS_AURORA_STATS     = '1'
$env:TLS_GX_CAPTURE       = 'build/recomp/gxcap_bn'
$env:TLS_GX_CAPTURE_FROM  = '2794'
$env:TLS_GX_CAPTURE_TO    = '2801'

$p = Start-Process -FilePath 'build\recomp\tls_runner.exe' `
        -ArgumentList '--window','--minimized','--frames','2812' `
        -RedirectStandardOutput 'logs_ap\bo_live.log' `
        -RedirectStandardError  'logs_ap\bo_live.err' `
        -WindowStyle Minimized -PassThru
if ($p.WaitForExit(1500000)) {
    Write-Output "exit=$($p.ExitCode) (clean exit)"
} else {
    $p.Kill(); $p.WaitForExit(20000)
    Write-Output "killed after 25 min (AP-AY item 10: the documented exit-time join)"
}

Write-Output "--- fed frames / readbacks ---"
Get-ChildItem build\recomp\aurora_live_*.ppm -ErrorAction SilentlyContinue |
    Select-Object Name,Length | Format-Table -AutoSize
Select-String -Path logs_ap\bo_live.log -Pattern 'AuroraLive\] (guest frame|wrote|live path armed|guest memory mapped)' |
    ForEach-Object { $_.Line.Trim() } | Select-Object -First 24
Write-Output "--- capture ---"
Get-ChildItem build\recomp\gxcap_bn\gxfifo.tlscap -ErrorAction SilentlyContinue |
    Select-Object Name,Length | Format-Table -AutoSize
Select-String -Path logs_ap\bo_live.log -Pattern 'GxCap' | ForEach-Object { $_.Line.Trim() }
