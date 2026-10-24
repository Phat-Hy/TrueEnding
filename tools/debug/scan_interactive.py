import re

with open('interactive_debug.log', 'r', encoding='latin1', errors='replace') as f:
    lines = f.readlines()

print(f"Total lines: {len(lines)}")

# Search for mode changes, sequence changes, warnings, Safeguard errors
for i, l in enumerate(lines):
    if any(k in l for k in ['Mode', 'Sequence', 'Safeguard', 'Error', 'WARNING', 'TitleTask', 'New Game', 'button', 'Press', 'Enter']):
        if not any(ign in l for ign in ['D3D11 Info', 'OSSleepThread', 'OSUnlockMutex', 'OSLockMutex', 'Relocating script stream']):
            if i % 10 == 0 or 'Mode' in l or 'Sequence' in l or 'Safeguard' in l or 'New Game' in l:
                print(f"L{i}: {l.strip()[:140]}")
