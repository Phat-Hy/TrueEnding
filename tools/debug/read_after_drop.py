with open('interactive_debug.log', 'r', encoding='latin1', errors='replace') as f:
    lines = f.readlines()

for i in range(141540, min(len(lines), 141620)):
    print(f"L{i}: {lines[i].rstrip()}")
