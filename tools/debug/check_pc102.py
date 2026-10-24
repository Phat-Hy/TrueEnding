import subprocess

p = subprocess.run(['build/recomp/tls_runner.exe', '--headless', '--game', '--frames', '1500'], capture_output=True)
lines = p.stdout.decode('latin1', errors='replace').splitlines()

for l in lines:
    if 'pc102_a00' in l or '816B79A0' in l:
        print(l)
