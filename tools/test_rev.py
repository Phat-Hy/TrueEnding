import subprocess

body = '''#include "revolution/types.h"
extern u32 __GXData;
asm void __GXInitRevisionBits(void) {
    nofralloc
    li r0, 0x2
    lwz r6, __GXData
    li r7, 0x0
    li r5, 0x8
    lis r4, 0xcc01
    mtctr r0
lbl_loop:
    lwz r0, 0x1c(r6)
    ori r3, r7, 0x80
    addi r7, r7, 0x1
    oris r0, r0, 0x4000
    stw r0, 0x1c(r6)
    lwz r0, 0x3c(r6)
    oris r0, r0, 0x8000
    stw r0, 0x3c(r6)
    stb r5, -0x8000(r4)
    stb r3, -0x8000(r4)
    ori r3, r7, 0x80
    addi r7, r7, 0x1
    lwz r0, 0x3c(r6)
    stw r0, -0x8000(r4)
    lwz r0, 0x20(r6)
    oris r0, r0, 0x4000
    stw r0, 0x20(r6)
    lwz r0, 0x40(r6)
    oris r0, r0, 0x8000
    stw r0, 0x40(r6)
    stb r5, -0x8000(r4)
    stb r3, -0x8000(r4)
    ori r3, r7, 0x80
    addi r7, r7, 0x1
    lwz r0, 0x40(r6)
    stw r0, -0x8000(r4)
    lwz r0, 0x24(r6)
    oris r0, r0, 0x4000
    stw r0, 0x24(r6)
    lwz r0, 0x44(r6)
    oris r0, r0, 0x8000
    stw r0, 0x44(r6)
    stb r5, -0x8000(r4)
    stb r3, -0x8000(r4)
    ori r3, r7, 0x80
    addi r7, r7, 0x1
    lwz r0, 0x44(r6)
    stw r0, -0x8000(r4)
    lwz r0, 0x28(r6)
    oris r0, r0, 0x4000
    stw r0, 0x28(r6)
    lwz r0, 0x48(r6)
    oris r0, r0, 0x8000
    stw r0, 0x48(r6)
    stb r5, -0x8000(r4)
    stb r3, -0x8000(r4)
    lwz r0, 0x48(r6)
    addi r6, r6, 0x10
    stw r0, -0x8000(r4)
    bdnz lbl_loop
    lis r7, 0xcc01
    li r8, 0x10
    stb r8, -0x8000(r7)
    li r4, 0x0
    li r0, 0x1000
    li r5, 0x1012
    stw r0, -0x8000(r7)
    ori r0, r4, 0x3f
    ori r6, r4, 0x1
    li r3, 0x58
    stw r0, -0x8000(r7)
    ori r4, r4, 0xf
    li r0, 0x61
    stb r8, -0x8000(r7)
    rlwimi r4, r3, 24, 0, 7
    stw r5, -0x8000(r7)
    stw r6, -0x8000(r7)
    stb r0, -0x8000(r7)
    stw r4, -0x8000(r7)
    blr
}
'''
with open('test_rev.c', 'w') as f:
    f.write(body)

cmd = 'build\\\\compilers\\\\Wii\\\\1.0\\\\mwcceppc.exe -c -nodefaults -proc gekko -fp hard "-O4,p" -inline auto -sdata 0 -sdata2 0 -i include test_rev.c -o test_rev.o'
res = subprocess.run(cmd, shell=True, capture_output=True, text=True)
print("Compiler STDOUT:", res.stdout)
print("Compiler STDERR:", res.stderr)
print("Compiler EXIT:", res.returncode)
