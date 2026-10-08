#include "revolution/types.h"

/* External symbols referenced */
extern u32 __GXData;
extern u8 lbl_807B0DC0[];

/* Function declarations */
void fn_80617340(void);
void fn_806173E0(void);
void fn_80617420(void);
void fn_80617460(void);
void fn_806174C0(void);
void fn_80617520(void);
void fn_80617580(void);
void fn_806175F0(void);

asm void fn_80617340(void)
{
    nofralloc
    cmpwi r3, 0x0
    lis r5, lbl_807B0DC0@ha
    addi r5, r5, lbl_807B0DC0@l
    bne lbl_fn_80617340_00000028
    slwi r6, r4, 2
    addi r4, r5, 0x0
    addi r0, r5, 0x28
    add r8, r4, r6
    add r9, r0, r6
    b lbl_fn_80617340_0000003C
lbl_fn_80617340_00000028:
    slwi r6, r4, 2
    addi r4, r5, 0x14
    addi r0, r5, 0x3c
    add r8, r4, r6
    add r9, r0, r6
lbl_fn_80617340_0000003C:
    lwz r7, __GXData
    slwi r0, r3, 2
    lwz r3, 0x0(r8)
    lis r4, 0xcc01
    add r6, r7, r0
    li r5, 0x61
    lwz r8, 0x180(r6)
    li r0, 0x0
    stb r5, -0x8000(r4)
    clrrwi r8, r8, 24
    rlwimi r8, r3, 0, 8, 31
    stw r8, -0x8000(r4)
    stw r8, 0x180(r6)
    lwz r8, 0x1c0(r6)
    lwz r3, 0x0(r9)
    rlwinm r8, r8, 0, 28, 7
    stb r5, -0x8000(r4)
    rlwimi r8, r3, 0, 8, 27
    stw r8, -0x8000(r4)
    stw r8, 0x1c0(r6)
    sth r0, 0x2(r7)
    blr
}

asm void fn_806173E0(void)
{
    nofralloc
    lwz r11, __GXData
    slwi r0, r3, 2
    lis r3, 0xcc01
    li r8, 0x61
    add r10, r11, r0
    li r0, 0x0
    lwz r9, 0x180(r10)
    rlwimi r9, r4, 12, 16, 19
    rlwimi r9, r5, 8, 20, 23
    stb r8, -0x8000(r3)
    rlwimi r9, r6, 4, 24, 27
    rlwimi r9, r7, 0, 28, 31
    stw r9, -0x8000(r3)
    stw r9, 0x180(r10)
    sth r0, 0x2(r11)
    blr
}

asm void fn_80617420(void)
{
    nofralloc
    lwz r11, __GXData
    slwi r0, r3, 2
    lis r3, 0xcc01
    li r8, 0x61
    add r10, r11, r0
    li r0, 0x0
    lwz r9, 0x1c0(r10)
    rlwimi r9, r4, 13, 16, 18
    rlwimi r9, r5, 10, 19, 21
    stb r8, -0x8000(r3)
    rlwimi r9, r6, 7, 22, 24
    rlwimi r9, r7, 4, 25, 27
    stw r9, -0x8000(r3)
    stw r9, 0x1c0(r10)
    sth r0, 0x2(r11)
    blr
}

asm void fn_80617460(void)
{
    nofralloc
    lwz r10, __GXData
    slwi r0, r3, 2
    cmpwi r4, 0x1
    add r9, r10, r0
    lwz r11, 0x180(r9)
    rlwimi r11, r4, 18, 13, 13
    bgt lbl_fn_80617460_00000148
    rlwimi r11, r6, 20, 10, 11
    rlwimi r11, r5, 16, 14, 15
    b lbl_fn_80617460_00000150
lbl_fn_80617460_00000148:
    rlwimi r11, r4, 19, 10, 11
    oris r11, r11, 0x3
lbl_fn_80617460_00000150:
    lis r3, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r3)
    rlwimi r11, r7, 19, 12, 12
    rlwimi r11, r8, 22, 8, 9
    li r0, 0x0
    stw r11, -0x8000(r3)
    stw r11, 0x180(r9)
    sth r0, 0x2(r10)
    blr
}

asm void fn_806174C0(void)
{
    nofralloc
    lwz r10, __GXData
    slwi r0, r3, 2
    cmpwi r4, 0x1
    add r9, r10, r0
    lwz r11, 0x1c0(r9)
    rlwimi r11, r4, 18, 13, 13
    bgt lbl_fn_806174C0_000001A8
    rlwimi r11, r6, 20, 10, 11
    rlwimi r11, r5, 16, 14, 15
    b lbl_fn_806174C0_000001B0
lbl_fn_806174C0_000001A8:
    rlwimi r11, r4, 19, 10, 11
    oris r11, r11, 0x3
lbl_fn_806174C0_000001B0:
    lis r3, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r3)
    rlwimi r11, r7, 19, 12, 12
    rlwimi r11, r8, 22, 8, 9
    li r0, 0x0
    stw r11, -0x8000(r3)
    stw r11, 0x1c0(r9)
    sth r0, 0x2(r10)
    blr
}

asm void fn_80617520(void)
{
    nofralloc
    lwz r8, 0x0(r4)
    slwi r3, r3, 1
    lis r4, 0xcc01
    li r5, 0x61
    stb r5, -0x8000(r4)
    addi r0, r3, 0xe0
    slwi r7, r0, 24
    rlwimi r7, r8, 8, 24, 31
    addi r0, r3, 0xe1
    rlwimi r7, r8, 12, 12, 19
    stw r7, -0x8000(r4)
    slwi r6, r0, 24
    lwz r3, __GXData
    stb r5, -0x8000(r4)
    rlwimi r6, r8, 24, 24, 31
    rlwimi r6, r8, 28, 12, 19
    li r0, 0x0
    stw r6, -0x8000(r4)
    stb r5, -0x8000(r4)
    stw r6, -0x8000(r4)
    stb r5, -0x8000(r4)
    stw r6, -0x8000(r4)
    sth r0, 0x2(r3)
    blr
}

asm void fn_80617580(void)
{
    nofralloc
    lwz r8, 0x0(r4)
    slwi r6, r3, 1
    lwz r9, 0x4(r4)
    lis r5, 0xcc01
    li r4, 0x61
    addi r0, r6, 0xe0
    stb r4, -0x8000(r5)
    slwi r7, r0, 24
    rlwimi r7, r8, 16, 21, 31
    addi r6, r6, 0xe1
    rlwimi r7, r9, 12, 9, 19
    stw r7, -0x8000(r5)
    slwi r6, r6, 24
    lwz r3, __GXData
    stb r4, -0x8000(r5)
    rlwimi r6, r9, 16, 21, 31
    rlwimi r6, r8, 12, 9, 19
    li r0, 0x0
    stw r6, -0x8000(r5)
    stb r4, -0x8000(r5)
    stw r6, -0x8000(r5)
    stb r4, -0x8000(r5)
    stw r6, -0x8000(r5)
    sth r0, 0x2(r3)
    blr
}

asm void fn_806175F0(void)
{
    nofralloc
    lwz r9, 0x0(r4)
    slwi r3, r3, 1
    lis r4, 0xcc01
    li r5, 0x61
    stb r5, -0x8000(r4)
    addi r0, r3, 0xe0
    li r7, 0x8
    slwi r8, r0, 24
    addi r0, r3, 0xe1
    rlwimi r8, r9, 8, 24, 31
    lwz r3, __GXData
    rlwimi r8, r9, 12, 12, 19
    slwi r6, r0, 24
    rlwimi r8, r7, 20, 8, 11
    stw r8, -0x8000(r4)
    rlwimi r6, r9, 24, 24, 31
    li r0, 0x0
    rlwimi r6, r9, 28, 12, 19
    stb r5, -0x8000(r4)
    rlwimi r6, r7, 20, 8, 11
    stw r6, -0x8000(r4)
    sth r0, 0x2(r3)
    blr
}
