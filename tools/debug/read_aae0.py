with open('build/recomp/generated/chunks/chunk_0137_text1_802281C0.c', 'r') as f:
    lines = f.readlines()

for i, l in enumerate(lines):
    if '8022AAE0' in l:
        print(f"Found 8022AAE0 at {i}")
        for j in range(max(0, i - 20), min(i + 40, len(lines))):
            print(lines[j].rstrip())
        break
