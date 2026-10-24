with open('interactive_debug.log', 'r', encoding='latin1', errors='replace') as f:
    lines = f.readlines()

for i in range(19185, min(len(lines), 19350)):
    print(f"L{i}: {lines[i].rstrip()}")
