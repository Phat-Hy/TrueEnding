with open('interactive_debug.log', 'r', encoding='latin1', errors='replace') as f:
    lines = f.readlines()

for i in range(140000, len(lines)):
    l = lines[i]
    if 'GX: 0 vtx' in l:
        print(f"L{i}: {l.strip()}")
        # print previous 20 lines
        for j in range(max(140000, i - 20), i + 1):
            print(f"  L{j}: {lines[j].strip()[:120]}")
        break
