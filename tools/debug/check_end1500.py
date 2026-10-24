import subprocess

p = subprocess.run(['build/recomp/tls_runner.exe', '--headless', '--game', '--frames', '1500'], capture_output=True)
lines = p.stdout.decode('latin1', errors='replace').splitlines()

print(f"Total lines: {len(lines)}")
for l in lines[-60:]:
    print(l)
