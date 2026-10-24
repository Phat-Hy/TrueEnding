import subprocess

p = subprocess.run(['build/recomp/tls_runner.exe', '--headless', '--game', '--frames', '1500'], capture_output=True)
lines = p.stdout.decode('latin1', errors='replace').splitlines()

dvd_lines = [l for l in lines if any(k in l for k in ['DVD', 'read #', 'convert:'])]
print(f"Total DVD lines: {len(dvd_lines)}")
for l in dvd_lines[-25:]:
    print(l)
