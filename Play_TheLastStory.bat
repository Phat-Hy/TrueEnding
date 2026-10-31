@echo off
title The Last Story - PC Port (Direct3D 11)
cd /d "%~dp0"

echo ========================================================
echo   Launching The Last Story (TrueEnding PC Port)
echo   Renderer: Direct3D 11 Hardware Accelerated
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

start "" "%~dp0build\recomp\tls_runner.exe" --window --minimized --fps 60 %*
