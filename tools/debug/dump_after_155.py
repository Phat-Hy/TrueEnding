import subprocess

p = subprocess.run(['build/recomp/tls_runner.exe', '--headless', '--game', '--frames', '1500'], capture_output=True)
lines = p.stdout.decode('latin1', errors='replace').splitlines()

for i, l in enumerate(lines):
    if 'read #155' in l:
        for j in range(i, min(len(lines), i + 100)):
            print(lines[j])
        break
