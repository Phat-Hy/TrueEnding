@echo off
title The Last Story - Reference Run (Dolphin Emulator)
cd /d "%~dp0"

echo ========================================================
echo   Launching The Last Story in Dolphin Emulator
echo   Game: roms\TheLastStory.iso
echo   Textures dumped to:
echo     %APPDATA%\Dolphin Emulator\Dump\Textures\SLSEXJ\
echo
echo   Controls:
echo     - Confirm (A / 2) : Space, Enter, or Left Mouse Click
echo     - Cancel  (B)     : Esc or Right Mouse Click
echo     - Move            : W, A, S, D
echo ========================================================
echo.

cd /d "G:\Program\Dolphin-x64"
start Dolphin.exe -e "%~dp0roms\TheLastStory.iso"
