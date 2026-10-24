with open('recomp/replacements.c', 'r') as f:
    lines = f.readlines()

for i, l in enumerate(lines):
    if 'mem_write' in l:
        print(f"L{i+1}: {l.strip()}")
