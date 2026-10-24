with open('build/recomp/generated/chunks/chunk_0033_text1_800881C0.c', 'rb') as f:
    content = f.read()

target1_crlf = b'printf(">>> [CHUNK33 label_8008BD10] r3=0x%08X lr=0x%08X\\n", ctx->gpr[3], ctx->lr);\r\n    fflush(stdout);\r\n    '
target1_lf = b'printf(">>> [CHUNK33 label_8008BD10] r3=0x%08X lr=0x%08X\\n", ctx->gpr[3], ctx->lr);\n    fflush(stdout);\n    '
content = content.replace(target1_crlf, b'').replace(target1_lf, b'')

target2_crlf = b'if (ctx->gpr[29] > 64) {\r\n                ctx->gpr[29] = 12;\r\n            }\r\n'
target2_lf = b'if (ctx->gpr[29] > 64) {\n                ctx->gpr[29] = 12;\n            }\n'
content = content.replace(target2_crlf, b'').replace(target2_lf, b'')

with open('build/recomp/generated/chunks/chunk_0033_text1_800881C0.c', 'wb') as f:
    f.write(content)
print('chunk_0033 cleaned successfully!')
