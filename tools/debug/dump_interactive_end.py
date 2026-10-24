with open('interactive_debug.log', 'r', encoding='latin1', errors='replace') as f:
    lines = f.readlines()

for i in range(max(0, len(lines) - 150), len(lines)):
    print(f"L{i}: {lines[i].rstrip()}")
