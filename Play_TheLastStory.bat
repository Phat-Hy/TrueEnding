@echo off
title The Last Story - PC Port (Direct3D 11)
cd /d "%~dp0"

echo ========================================================
echo   Launching The Last Story (TrueEnding PC Port)
echo   Renderer: AURORA (WebGPU/D3D12) - layer fallback per frame
echo ========================================================
echo Controls:
echo   [Controller] Standard Xbox / XInput controllers supported
echo   [Keyboard]
echo     Confirm / A:     Enter / Space / E / Z / Left Click
echo     Cancel / B:      Esc / Backspace / Q / X / Right Click
echo     Movement:        WASD (Stick) / Arrow Keys (DPad)
echo     Menu / +:        Tab / 1
echo     Button 2 / -:    2
echo     Fullscreen:      Alt + Enter
echo     Screenshot:      F12
echo ========================================================
echo.
echo NOTE: the game window opens MINIMIZED on purpose (project rule).
echo       Restore it from the taskbar to play. Launching it in the
echo       foreground steals focus, which has cost this project real
echo       debugging time - do not remove --minimized.
echo.
echo GAMEPLAY: the Chapter-1 tutorial popup asks for (B) - press Esc (or
echo           Backspace / Q / X / right click) to dismiss it, then move
echo           with WASD / arrows. Pressing only Confirm never dismisses
echo           it, which is why earlier builds looked "frozen" here.
echo.

REM --- AP-AR: the AP-AQ renderer fixes are now the BUILD DEFAULTS -----------------
REM The guest's GX scissor (BP 0x20/0x21) is applied and guest-disabled blends are
REM no longer promoted to adds, so nothing has to be set here any more - the two
REM former switches (TLS_SCISSOR=1, TLS_NO_FORCE_BLEND=1) are no-ops that ask for the
REM default. The gate references were re-recorded for exactly this default (guest
REM 2800 luma 50.04, guest 3500 luma 48.17 with >250 2.02 %, two independent runs
REM each). To see the superseded picture, set TLS_NO_SCISSOR=1 and TLS_FORCE_BLEND=1.
REM Handover 5c.46 AP-AR has the measurements; items 6/7/14/20/21 of AP-AQ the cause.

REM --- AP-AU: the per-stage TEV texcoord is now a BUILD DEFAULT too -----------------
REM A TEV stage samples the texcoord TEVORDER names (and, for a coordinate GEN_MODE does
REM not define, coordinate 0 - Dolphin PixelShaderGen's documented quirk). Measured at the
REM gate's content frame: the layer-vs-aurora difference halves (mean |d| 11.20 -> 4.83).
REM The former TLS_TEV_TEXCOORD=1 is a no-op now; TLS_NO_TEV_TEXCOORD=1 restores the old
REM "every stage samples coordinate 0" picture if a scene ever needs it. AP-AU in the
REM handover has the numbers.

REM --- AP-BR: THE DEFAULT RENDERER IS NOW AURORA (handover 5c.46 AP-BR) ------------------
REM The promotion P4 built and AP-BQ demonstrated is now what this launcher runs: the frame's GX
REM byte stream is handed to aurora at the top of d3d11_present(), aurora's own 640x448 EFB readback
REM is blitted into the 1280x720 back buffer before the screenshot, and the gate's two references
REM were re-recorded on that picture (content 54CB46BD..., popup A81F3E35..., both inside the
REM unchanged luma/bright windows). The hand-rolled GX layer is still built and still drawn - it is
REM the fallback for any frame whose readback or blit fails - and TLS_LAYER=1 forces it:
REM     set TLS_LAYER=1  then run this file, to get the old renderer (and the old gate references
REM     B4646917... / 22B1CE31...) back, pixel for pixel.
REM TLS_AURORA_PUBLISH=1 is what makes aurora present (TLS_AURORA alone only renders a window of
REM frames for measurement), so both are set here and neither is optional for playing.
set TLS_AURORA=1
set TLS_AURORA_PUBLISH=1

REM --- AP-BR: fps reality, measured on this laptop (i7-13620H), because the gate only proves the
REM PICTURE and says nothing about speed. The runner prints its own breakdown every 30 frames:
REM   "[Runner] Frame N | VBlank .. CPU .. Gfx/Present .. Total .. (FPS)".
REM   boot/title   frames 30..300     CPU 10-40 ms    24-60 fps
REM   field        frames 1500..2100  CPU 77-194 ms   3.3 fps aurora / 5.5 fps layer (host busy)
REM                                                  6.5 fps aurora / 9.9 fps layer (host quiet)
REM So the Chapter-1 field is single-digit fps here, and the cost is the recompiled guest CPU
REM (~300 000 blocks/frame), not the renderer: the aurora promotion adds ~25-35 % (a per-frame
REM 640x448 EFB readback + blit) on top. --novsync is passed because Present on a minimized window
REM was measured at 80-140 ms with vsync and 24 ms without - nearly doubling the field rate.
REM If the machine is 2-5x slower than the numbers above, look for a Defender scan: this session
REM measured the same binary on the same frames running 2-5x faster before a QuickScan started.
REM Use TLS_LAYER=1 if fps matters more than the reference picture.
start "" "%~dp0build\recomp\tls_runner.exe" --window --minimized --novsync --fps 60 %*
