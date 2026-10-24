with open('interactive_debug.log', 'r', encoding='latin1', errors='replace') as f:
    lines = f.readlines()

for i in range(148360, min(len(lines), 148420)):
    print(f"L{i}: {lines[i].rstrip()}")
