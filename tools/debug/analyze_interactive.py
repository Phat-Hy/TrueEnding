with open('interactive_debug.log', 'r', encoding='latin1', errors='replace') as f:
    lines = f.readlines()

print(f"Total lines: {len(lines)}")
print("First 20 lines:")
for l in lines[:20]:
    print(l.rstrip())

print("\nLast 30 lines:")
for l in lines[-30:]:
    print(l.rstrip())
