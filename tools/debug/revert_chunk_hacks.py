import re

# 1. Clean chunk_0282
with open('build/recomp/generated/chunks/chunk_0282_text1_8046C1C0.c', 'rb') as f:
    c = f.read()

# remove arc_search log
c = re.sub(
    rb'label_8046C474:\r?\n    \{\r?\n        char name\[64\].*?ctx->downcount -= 3;',
    b'label_8046C474:\n    ctx->downcount -= 3;',
    c, flags=re.DOTALL
)

# remove goto label_8046C640 and dg004 log
c = re.sub(
    rb'label_8046C4AC:\r?\n    if \(ctx->gpr\[20\]\).*?ctx->downcount -= 2;',
    b'label_8046C4AC:\n    ctx->downcount -= 2;',
    c, flags=re.DOTALL
)

with open('build/recomp/generated/chunks/chunk_0282_text1_8046C1C0.c', 'wb') as f:
    f.write(c)
print('chunk_0282 cleaned!')

# 2. Clean chunk_0034
with open('build/recomp/generated/chunks/chunk_0034_text1_8008C1C0.c', 'rb') as f:
    c = f.read()

c = re.sub(
    rb'label_8008C3FC:\r?\n    ctx->pc = 0x8008C3FCu;\r?\n    \{\r?\n        static int s_c3fc_count = 0;.*?ctx->downcount -= 7;',
    b'label_8008C3FC:\n    ctx->pc = 0x8008C3FCu;\n    ctx->downcount -= 7;',
    c, flags=re.DOTALL
)

with open('build/recomp/generated/chunks/chunk_0034_text1_8008C1C0.c', 'wb') as f:
    f.write(c)
print('chunk_0034 cleaned!')

# 3. Clean chunk_0039
with open('build/recomp/generated/chunks/chunk_0039_text1_800A01C0.c', 'rb') as f:
    c = f.read()

c = re.sub(
    rb'        if \(ctx->gpr\[27\] > 512\) \{.*?ctx->gpr\[27\] = 0;\r?\n        \}',
    b'',
    c, flags=re.DOTALL
)

c = re.sub(
    rb'    if \(ctx->gpr\[5\] > 2048.*?ctx->gpr\[5\] = 0;\r?\n    \}',
    b'',
    c, flags=re.DOTALL
)

with open('build/recomp/generated/chunks/chunk_0039_text1_800A01C0.c', 'wb') as f:
    f.write(c)
print('chunk_0039 cleaned!')
