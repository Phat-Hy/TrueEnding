with open('build/recomp/generated/chunks/chunk_0033_text1_800881C0.c', 'r') as f:
    lines = f.readlines()

for i, l in enumerate(lines):
    if '8008B5F0' in l:
        for j in range(max(0, i - 15), min(len(lines), i + 25)):
            print(lines[j].rstrip())
        break
