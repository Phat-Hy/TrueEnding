with open('interactive_debug.log', 'r', encoding='latin1', errors='replace') as f:
    lines = f.readlines()

for i in range(19350, min(len(lines), 30000)):
    l = lines[i]
    if any(k in l for k in ['Safeguard', 'Error', 'WARNING', 'water03', 'Stream', 'Queue', 'assert', 'Assert', 'Crash', 'Fault']):
        print(f"L{i}: {l.rstrip()}")
