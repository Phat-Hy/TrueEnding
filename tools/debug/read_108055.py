with open('interactive_debug.log', 'r', encoding='latin1', errors='replace') as f:
    lines = f.readlines()

for i in range(108040, min(len(lines), 108070)):
    print(f"L{i}: {lines[i].rstrip()}")
