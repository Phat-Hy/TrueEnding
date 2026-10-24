import subprocess

p = subprocess.run(['build/recomp/tls_runner.exe', '--headless', '--game', '--frames', '1500'], capture_output=True)
lines = p.stdout.decode('latin1', errors='replace').splitlines()

dd60_lines = [l for l in lines if '8046DD60' in l]
print(f"Total 8046DD60 lines: {len(dd60_lines)}")
for l in dd60_lines[-20:]:
    print(l)
