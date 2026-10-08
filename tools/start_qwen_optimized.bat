@echo off
title Qwen2.5-Coder-7B Hardware-Optimized Server (RTX 4060 8GB)
echo =====================================================================
echo  Starting Qwen2.5-Coder-7B Optimized Local Server
echo  Hardware Target: NVIDIA GeForce RTX 4060 Laptop (8GB VRAM)
echo  Optimizations:
echo    - GPU Layer Offload: ALL layers (-ngl 99)
echo    - Quantized KV Cache: Q8_0 (-ctk q8_0 -ctv q8_0)
echo    - Flash Attention: Enabled (-fa on)
echo    - Context Window: 4096 tokens (-c 4096)
echo    - CPU Threads: 8 (-t 8)
echo    - Port: 8080 (OpenAI-compatible /v1 endpoint)
echo =====================================================================
echo.

set LLAMA_BIN=C:\Users\hypha\.docker\bin\inference\llama-server.exe
set MODEL_PATH=G:\Program\Odysseus\model\hub\models--unsloth--Qwen2.5-Coder-7B-Instruct-GGUF\snapshots\0ecf11859560b2bf42e703207f9371186d02245f\Qwen2.5-Coder-7B-Instruct-Q4_K_M.gguf

if not exist "%LLAMA_BIN%" (
    echo [ERROR] llama-server.exe not found at %LLAMA_BIN%
    pause
    exit /b 1
)

if not exist "%MODEL_PATH%" (
    echo [ERROR] Model GGUF not found at %MODEL_PATH%
    pause
    exit /b 1
)

echo Launching llama-server with Vulkan/CUDA acceleration...
echo Server will be ready when you see "HTTP server listening"...
echo.

"%LLAMA_BIN%" ^
  -m "%MODEL_PATH%" ^
  -ngl 99 ^
  -c 4096 ^
  -ctk q8_0 ^
  -ctv q8_0 ^
  -fa on ^
  -t 8 ^
  --port 8080 ^
  --host 127.0.0.1 ^
  --parallel 1

pause
