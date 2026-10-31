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

REM --- AP-AQ renderer fixes, on for INTERACTIVE play only (2026-10-30) ----------
REM Without these two the Chapter-1 field renders as a white wash: the EFB copy
REM tail's scissor never applied (D3D11 ScissorEnable was FALSE) and guest-disabled
REM blends were executed as adds. With them, guest 3300 is the cave with the
REM tutorial popup on it (luma 142.29 -> 36.58, >250 0.06% -> 0.00%) and the field
REM responds to movement. They are deliberately NOT the build defaults yet: the
REM invariant's two recorded hashes were taken without them, so tools/invariant.ps1
REM removes/sets its own environment and is unaffected by this file. Handover
REM 5c.46 AP-AQ items 6/7/14/20/21 have the measurements and the promotion cost.
set TLS_SCISSOR=1
set TLS_NO_FORCE_BLEND=1

start "" "%~dp0build\recomp\tls_runner.exe" --window --minimized --fps 60 %*
