with open('interactive_debug.log', 'r', encoding='latin1', errors='replace') as f:
    lines = f.readlines()

for i, l in enumerate(lines):
    if 'Frame 14' in l or 'Frame 139' in l or 'Frame 140' in l or 'Frame 141' in l or 'Frame 142' in l:
        print(f"L{i}: {l.strip()[:120]}")
        for j in range(max(0, i - 15), min(len(lines), i + 25)):
            if any(k in lines[j] for k in ['Safeguard', 'Error', 'WARNING', 'fault', 'assert', 'Assert', 'abort', 'die', 'Seq', 'Task', 'Queue']):
                print(f"   L{j}: {lines[j].strip()[:140]}")
