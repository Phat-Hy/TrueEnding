with open('build/recomp/generated/chunks/chunk_0137_text1_802281C0.c', 'r') as f:
    lines = f.readlines()

for i, l in enumerate(lines):
    if 'label_8022B130:' in l:
        for j in range(i, min(i + 150, len(lines))):
            print(lines[j].rstrip())
        break
