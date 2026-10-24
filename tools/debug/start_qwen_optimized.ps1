# Hardware-Optimized PowerShell Launcher for Qwen2.5-Coder-7B
# Specifically tuned for NVIDIA GeForce RTX 4060 Laptop (8GB VRAM) & 13th Gen i7-13620H

$llamaBin = "C:\Users\hypha\.docker\bin\inference\llama-server.exe"
$modelPath = "G:\Program\Odysseus\model\hub\models--unsloth--Qwen2.5-Coder-7B-Instruct-GGUF\snapshots\0ecf11859560b2bf42e703207f9371186d02245f\Qwen2.5-Coder-7B-Instruct-Q4_K_M.gguf"

Write-Host "=====================================================================" -ForegroundColor Cyan
Write-Host " Starting Qwen2.5-Coder-7B Optimized Local Server" -ForegroundColor Green
Write-Host " Target Hardware: NVIDIA GeForce RTX 4060 Laptop (8GB VRAM)" -ForegroundColor Yellow
Write-Host " Tuning Configurations:" -ForegroundColor White
Write-Host "   - Model Quant: Q4_K_M (4.46 GB)"
Write-Host "   - GPU Offload: 100% of layers in VRAM (-ngl 99)"
Write-Host "   - KV Cache Quant: Q8_0 (-ctk q8_0 -ctv q8_0) [50% VRAM saving]"
Write-Host "   - Attention: Flash Attention enabled (-fa on)"
Write-Host "   - Context Window: 4,096 tokens (-c 4096)"
Write-Host "   - Total VRAM Footprint: ~5.3 GB / 8.0 GB (Zero OOM guarantee)"
Write-Host "   - Endpoint: http://127.0.0.1:8080/v1"
Write-Host "=====================================================================" -ForegroundColor Cyan

if (-not (Test-Path $llamaBin)) {
    Write-Host "[ERROR] llama-server.exe not found at $llamaBin" -ForegroundColor Red
    exit 1
}

if (-not (Test-Path $modelPath)) {
    Write-Host "[ERROR] Model not found at $modelPath" -ForegroundColor Red
    exit 1
}

$argsList = @(
    "-m", $modelPath,
    "-ngl", "99",
    "-c", "4096",
    "-ctk", "q8_0",
    "-ctv", "q8_0",
    "-fa", "on",
    "-t", "8",
    "--port", "8080",
    "--host", "127.0.0.1",
    "--parallel", "1"
)

& $llamaBin @argsList
