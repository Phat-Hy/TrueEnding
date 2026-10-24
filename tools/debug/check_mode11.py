with open('interactive_debug.log', 'r', encoding='latin1', errors='replace') as f:
    lines = f.readlines()

in_mode11 = False
count = 0
for i, l in enumerate(lines):
    if 'SetMode: new_mode=11' in l:
        in_mode11 = True
        print(f"L{i}: {l.strip()}")
        continue
    if in_mode11:
        if 'SetMode:' in l:
            print(f"L{i}: {l.strip()}")
            break
        if any(k in l for k in ['LayoutTask', 'Batch', 'DrawPass', 'D3D11', '801F', 'Texture', 'Model']):
            count += 1
            if count <= 50 or count % 50 == 0:
                print(f"L{i}: {l.strip()[:140]}")
