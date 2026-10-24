import os

for root, dirs, files in os.walk('orig/DATA/files'):
    for f in files:
        if 'pc102' in f.lower():
            print("Found file:", os.path.join(root, f))

# Also search inside .pk files
for root, dirs, files in os.walk('orig/DATA/files'):
    for f in files:
        if f.endswith('.pk'):
            path = os.path.join(root, f)
            with open(path, 'rb') as pk:
                data = pk.read()
                if b'pc102_a00' in data:
                    print(f"Found 'pc102_a00' in {path}")
