@echo off
title Local Qwen2.5-Coder-7B Server (32k Context - Port 8080)
echo =================================================================
echo   Starting Local Qwen2.5-Coder-7B Server on Port 8080
echo   Context Window: 32,768 tokens (Flash Attention + GPU)
echo =================================================================
cd /d "G:\Program\Odysseus\odysseus"
"C:\Program Files\Git\bin\bash.exe" C:/Users/hypha/AppData/Local/Temp/odysseus-tmux/serve-5463b8e9_run.sh
pause
