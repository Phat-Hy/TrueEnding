with open('interactive_debug.log', 'r', encoding='latin1', errors='replace') as f:
    lines = f.readlines()

print(f"Total lines: {len(lines)}")
for i, l in enumerate(lines):
    if 'SetMode:' in l or 'Frame ' in l and 'Reason' not in l:
        print(f"L{i}: {l.strip()[:100]}")
