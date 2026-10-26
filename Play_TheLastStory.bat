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

start "" "%~dp0build\recomp\tls_runner.exe" --window --minimized --fps 60 %*
