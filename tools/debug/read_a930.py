with open('build/recomp/generated/chunks/chunk_0137_text1_802281C0.c', 'r') as f:
    lines = f.readlines()

for i, l in enumerate(lines):
    if 'label_8022A930:' in l:
        print(f"Found label at {i}")
        for j in range(i, min(i + 120, len(lines))):
            print(lines[j].rstrip())
        break
