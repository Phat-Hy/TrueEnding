param([string]$bmp, [string]$png)
Add-Type -AssemblyName System.Drawing
$img = [System.Drawing.Image]::FromFile((Resolve-Path $bmp).Path)
$img.Save((Join-Path (Get-Location) $png), [System.Drawing.Imaging.ImageFormat]::Png)
$img.Dispose()
Write-Host "Saved $png"
