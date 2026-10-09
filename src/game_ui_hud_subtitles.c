#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_27(void);
extern void _savegpr_22(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013F78(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80087E9C(void);
extern void fn_8008937C(void);
extern void fn_800A03A0(void);
extern void fn_800A0448(void);
extern void fn_800A08E0(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_801CCE50(void);
extern void fn_801CD184(void);
extern void fn_801CE4CC(void);
extern void fn_801F3FF8(void);
extern void fn_801F64D0(void);
extern void fn_80201E78(void);
extern void fn_80202A6C(void);
extern void fn_80206B14(void);
extern void fn_8020BD78(void);
extern void fn_8020BDE0(void);
extern void fn_8020BE10(void);
extern void fn_8020ED84(void);
extern void fn_80370174(void);
extern void fn_80473E8C(void);
extern void fn_8050FB3C(void);
extern void fn_8050FC08(void);
extern void fn_8050FD3C(void);
extern void fn_805113EC(void);
extern void fn_805114D8(void);
extern void fn_805115D4(void);
extern void fn_80695720(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern void fn_80695A50(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8073BCF0[];
extern u8 lbl_8073C01C[];
extern u8 lbl_8073C1F8[];
extern u8 lbl_8073C454[];
extern u8 lbl_8073C56C[];
extern u8 lbl_807827A8[];
extern u8 lbl_807C7CB8[];

/* Small data declarations */
extern u32 lbl_8087F430;
extern u32 lbl_8087F4F0;
extern u32 lbl_808829C8;
extern u32 lbl_808829E4;
extern u32 lbl_808829F8;
extern u32 lbl_80882A18;
extern u32 lbl_80882A1C;
extern u32 lbl_80882A20;
extern u32 lbl_80882A24;
extern u32 lbl_80882A28;
extern u32 lbl_80882A2C;
extern u32 lbl_80882A30;
extern u32 lbl_80882A34;
extern u32 lbl_80882A38;
extern u32 lbl_80882A3C;
extern u32 lbl_80882A40;
extern u32 lbl_80882A44;
extern u32 lbl_80882A48;
extern u32 lbl_80882A54;
extern u32 lbl_80882A5C;
extern u32 lbl_80882A60;
extern u32 lbl_80882A64;
extern u32 lbl_80882A68;
extern u32 lbl_80882A6C;
extern u32 lbl_80882A70;
extern u32 lbl_80882A74;
extern u32 lbl_80882A78;
extern u32 lbl_80882A7C;
extern u32 lbl_80882A80;
extern u32 lbl_80882A84;

/* Function declarations */
void fn_801CFA5C(void);
void fn_801CFAA8(void);
void fn_801CFACC(void);
void fn_801CFC28(void);
void fn_801CFC30(void);
void fn_801CFC38(void);
void fn_801CFC3C(void);
void fn_801CFC40(void);
void fn_801CFC44(void);
void fn_801CFC48(void);
void fn_801CFC4C(void);
void fn_801CFC54(void);
void fn_801CFC58(void);
void fn_801CFD68(void);
void fn_801CFDCC(void);
void fn_801D082C(void);
void fn_801D087C(void);
void fn_801D08D4(void);
void fn_801D08E8(void);
void fn_801D0960(void);
void fn_801D09C0(void);
void fn_801D0B3C(void);
void fn_801D0BAC(void);
void fn_801D0C10(void);
void fn_801D1324(void);

asm void fn_801CFA5C(void)
{
    nofralloc
    lwz r3, lbl_8087F4F0
    cmpwi r4, 0x0
    slwi r0, r4, 6
    addis r3, r3, 0x1
    add r3, r3, r0
    subi r4, r3, 0x7d70
    bne lbl_fn_801CFA5C_00000038
    cmpwi r5, 0x1
    bne lbl_fn_801CFA5C_00000038
    slwi r0, r5, 3
    li r3, 0x1
    add r4, r4, r0
    lwz r4, 0x20(r4)
    b fn_80206B14
lbl_fn_801CFA5C_00000038:
    slwi r0, r5, 3
    li r3, 0x0
    add r4, r4, r0
    lwz r4, 0x20(r4)
    b fn_80206B14
}

asm void fn_801CFAA8(void)
{
    nofralloc
    lwz r6, lbl_8087F4F0
    slwi r4, r4, 6
    slwi r0, r5, 3
    mr r3, r5
    addis r5, r6, 0x1
    add r4, r5, r4
    add r4, r4, r0
    lwz r4, -0x7d70(r4)
    b fn_8020ED84
}

asm void fn_801CFACC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r4
    lwz r0, 0x98(r29)
    srwi. r0, r0, 31
    bne lbl_fn_801CFACC_000000A4
    addi r4, r29, 0x99
    b lbl_fn_801CFACC_000000A8
lbl_fn_801CFACC_000000A4:
    lwz r4, 0xa0(r29)
lbl_fn_801CFACC_000000A8:
    bl fn_8008937C
    lis r31, lbl_8073BCF0@ha
    lfs f1, lbl_80882A18
    addi r31, r31, lbl_8073BCF0@l
    lfs f2, lbl_80882A1C
    lfs f3, lbl_808829F8
    mr r30, r3
    addi r4, r31, 0x14d
    addi r5, r29, 0xa4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80882A18
    mr r3, r30
    lfs f2, lbl_80882A1C
    addi r4, r31, 0x157
    lfs f3, lbl_808829F8
    addi r5, r29, 0xb0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80882A18
    mr r3, r30
    lfs f2, lbl_80882A1C
    addi r4, r31, 0x161
    lfs f3, lbl_808829F8
    addi r5, r29, 0xbc
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80882A18
    mr r3, r30
    lfs f2, lbl_80882A1C
    addi r4, r31, 0x16c
    lfs f3, lbl_808829F8
    addi r5, r29, 0xc8
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80882A18
    mr r3, r30
    lfs f2, lbl_80882A1C
    addi r4, r31, 0x174
    lfs f3, lbl_808829F8
    addi r5, r29, 0xaa8
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80882A18
    mr r3, r30
    lfs f2, lbl_80882A1C
    addi r4, r31, 0x182
    lfs f3, lbl_808829F8
    addi r5, r29, 0xab4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80882A18
    mr r3, r30
    lfs f2, lbl_80882A1C
    addi r4, r31, 0x190
    lfs f3, lbl_808829F8
    addi r5, r29, 0xac0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801CFC28(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_801CFC30(void)
{
    nofralloc
    lbz r3, 0x94(r3)
    blr
}

asm void fn_801CFC38(void)
{
    nofralloc
    blr
}

asm void fn_801CFC3C(void)
{
    nofralloc
    blr
}

asm void fn_801CFC40(void)
{
    nofralloc
    blr
}

asm void fn_801CFC44(void)
{
    nofralloc
    blr
}

asm void fn_801CFC48(void)
{
    nofralloc
    blr
}

asm void fn_801CFC4C(void)
{
    nofralloc
    stw r4, 0x7c(r3)
    blr
}

asm void fn_801CFC54(void)
{
    nofralloc
    blr
}

asm void fn_801CFC58(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stfd f30, 0x20(r1)
    psq_st f30, 0x28(r1), 0, 0
    lis r10, lbl_807C7CB8@ha
    lfs f5, lbl_808829C8
    addi r10, r10, lbl_807C7CB8@l
    lfs f3, lbl_80882A44
    lfs f2, lbl_80882A2C
    addi r8, r10, 0xc
    lfs f7, lbl_80882A28
    addi r5, r10, 0x30
    lfs f8, lbl_80882A24
    fadds f12, f2, f3
    lfs f4, lbl_80882A40
    addi r4, r10, 0x3c
    lfs f0, lbl_80882A48
    fadds f13, f7, f5
    addi r3, r10, 0x54
    lfs f10, lbl_808829E4
    fadds f31, f8, f4
    stfs f7, 0x4(r8)
    fadds f30, f8, f0
    lfs f11, lbl_80882A20
    addi r9, r10, 0x0
    stfs f8, 0xc(r10)
    lfs f6, lbl_80882A3C
    addi r11, r10, 0x48
    psq_l f1, 0x0(r8), 0, 0
    addi r7, r10, 0x18
    lfs f9, lbl_80882A30
    addi r6, r10, 0x24
    lfs f8, lbl_80882A34
    lfs f7, lbl_80882A38
    stfs f11, 0x0(r10)
    stfs f11, 0x4(r9)
    stfs f11, 0x8(r9)
    stfs f2, 0x8(r8)
    stfs f10, 0x18(r10)
    stfs f9, 0x4(r7)
    stfs f8, 0x8(r7)
    stfs f10, 0x24(r10)
    stfs f7, 0x4(r6)
    stfs f8, 0x8(r6)
    stfs f6, 0x30(r10)
    stfs f5, 0x4(r5)
    stfs f5, 0x8(r5)
    stfs f31, 0x3c(r10)
    stfs f13, 0x4(r4)
    stfs f12, 0x8(r4)
    psq_st f1, 0x0(r11), 0, 0
    stfs f2, 0x8(r11)
    stfs f30, 0x54(r10)
    stfs f13, 0x4(r3)
    stfs f12, 0x8(r3)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    psq_l f30, 0x28(r1), 0, 0
    stfs f4, 0x14(r1)
    lfd f30, 0x20(r1)
    stfs f5, 0x18(r1)
    stfs f3, 0x1c(r1)
    stfs f0, 0x8(r1)
    stfs f5, 0xc(r1)
    stfs f3, 0x10(r1)
    addi r1, r1, 0x40
    blr
}

asm void fn_801CFD68(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801CFD68_00000358
    lis r5, lbl_8073C56C@ha
    li r3, 0x1ca8
    addi r5, r5, lbl_8073C56C@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801CFD68_0000035C
    mr r4, r31
    bl fn_801CFDCC
    b lbl_fn_801CFD68_0000035C
lbl_fn_801CFD68_00000358:
    li r3, 0x0
lbl_fn_801CFD68_0000035C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801CFDCC(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r11, r1, 0x150
    bl _savegpr_22
    mr r29, r3
    bl fn_801CCE50
    lis r3, lbl_807827A8@ha
    lis r4, fn_801D08D4@ha
    addi r3, r3, lbl_807827A8@l
    lis r5, fn_801D08E8@ha
    stw r3, 0x0(r29)
    addi r3, r29, 0xb34
    addi r4, r4, fn_801D08D4@l
    addi r5, r5, fn_801D08E8@l
    li r6, 0xc
    li r7, 0x2
    bl fn_806958E0
    addi r5, r29, 0xd08
    addi r3, r29, 0x10f8
    cmplw r5, r3
    li r0, 0x0
    stw r0, 0xb4c(r29)
    stw r0, 0xb50(r29)
    stw r0, 0xb54(r29)
    stw r0, 0xb58(r29)
    stw r0, 0xb5c(r29)
    stw r0, 0xb60(r29)
    stw r0, 0xb7c(r29)
    stw r0, 0xb80(r29)
    stw r0, 0xb88(r29)
    stw r0, 0xcf8(r29)
    stw r0, 0xcfc(r29)
    stw r0, 0xd00(r29)
    stw r0, 0xd04(r29)
    bge lbl_fn_801CFDCC_0000050C
    addi r0, r29, 0xd08
    addi r4, r29, 0x1078
    cmplw r0, r3
    li r3, 0x0
    li r0, 0x0
    bgt lbl_fn_801CFDCC_0000041C
    li r3, 0x1
lbl_fn_801CFDCC_0000041C:
    cmpwi r3, 0x0
    beq lbl_fn_801CFDCC_00000428
    li r0, 0x1
lbl_fn_801CFDCC_00000428:
    cmpwi r0, 0x0
    beq lbl_fn_801CFDCC_000004D4
    addi r0, r4, 0x7f
    li r3, 0x0
    subf r0, r5, r0
    srwi r0, r0, 7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801CFDCC_000004D4
lbl_fn_801CFDCC_0000044C:
    stw r3, 0x0(r5)
    stw r3, 0x4(r5)
    stw r3, 0x8(r5)
    stw r3, 0xc(r5)
    stw r3, 0x10(r5)
    stw r3, 0x14(r5)
    stw r3, 0x18(r5)
    stw r3, 0x1c(r5)
    stw r3, 0x20(r5)
    stw r3, 0x24(r5)
    stw r3, 0x28(r5)
    stw r3, 0x2c(r5)
    stw r3, 0x30(r5)
    stw r3, 0x34(r5)
    stw r3, 0x38(r5)
    stw r3, 0x3c(r5)
    stw r3, 0x40(r5)
    stw r3, 0x44(r5)
    stw r3, 0x48(r5)
    stw r3, 0x4c(r5)
    stw r3, 0x50(r5)
    stw r3, 0x54(r5)
    stw r3, 0x58(r5)
    stw r3, 0x5c(r5)
    stw r3, 0x60(r5)
    stw r3, 0x64(r5)
    stw r3, 0x68(r5)
    stw r3, 0x6c(r5)
    stw r3, 0x70(r5)
    stw r3, 0x74(r5)
    stw r3, 0x78(r5)
    stw r3, 0x7c(r5)
    addi r5, r5, 0x80
    bdnz lbl_fn_801CFDCC_0000044C
lbl_fn_801CFDCC_000004D4:
    addi r3, r29, 0x10f8
    li r4, 0x0
    addi r0, r3, 0xf
    subf r0, r5, r0
    srwi r0, r0, 4
    mtctr r0
    cmplw r5, r3
    bge lbl_fn_801CFDCC_0000050C
lbl_fn_801CFDCC_000004F4:
    stw r4, 0x0(r5)
    stw r4, 0x4(r5)
    stw r4, 0x8(r5)
    stw r4, 0xc(r5)
    addi r5, r5, 0x10
    bdnz lbl_fn_801CFDCC_000004F4
lbl_fn_801CFDCC_0000050C:
    addi r5, r29, 0x1108
    addi r3, r29, 0x12f8
    cmplw r5, r3
    li r0, 0x0
    stw r0, 0x10f8(r29)
    stw r0, 0x10fc(r29)
    stw r0, 0x1100(r29)
    stw r0, 0x1104(r29)
    bge lbl_fn_801CFDCC_0000063C
    addi r0, r29, 0x1108
    addi r4, r29, 0x1278
    cmplw r0, r3
    li r3, 0x0
    li r0, 0x0
    bgt lbl_fn_801CFDCC_0000054C
    li r3, 0x1
lbl_fn_801CFDCC_0000054C:
    cmpwi r3, 0x0
    beq lbl_fn_801CFDCC_00000558
    li r0, 0x1
lbl_fn_801CFDCC_00000558:
    cmpwi r0, 0x0
    beq lbl_fn_801CFDCC_00000604
    addi r0, r4, 0x7f
    li r3, 0x0
    subf r0, r5, r0
    srwi r0, r0, 7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801CFDCC_00000604
lbl_fn_801CFDCC_0000057C:
    stw r3, 0x0(r5)
    stw r3, 0x4(r5)
    stw r3, 0x8(r5)
    stw r3, 0xc(r5)
    stw r3, 0x10(r5)
    stw r3, 0x14(r5)
    stw r3, 0x18(r5)
    stw r3, 0x1c(r5)
    stw r3, 0x20(r5)
    stw r3, 0x24(r5)
    stw r3, 0x28(r5)
    stw r3, 0x2c(r5)
    stw r3, 0x30(r5)
    stw r3, 0x34(r5)
    stw r3, 0x38(r5)
    stw r3, 0x3c(r5)
    stw r3, 0x40(r5)
    stw r3, 0x44(r5)
    stw r3, 0x48(r5)
    stw r3, 0x4c(r5)
    stw r3, 0x50(r5)
    stw r3, 0x54(r5)
    stw r3, 0x58(r5)
    stw r3, 0x5c(r5)
    stw r3, 0x60(r5)
    stw r3, 0x64(r5)
    stw r3, 0x68(r5)
    stw r3, 0x6c(r5)
    stw r3, 0x70(r5)
    stw r3, 0x74(r5)
    stw r3, 0x78(r5)
    stw r3, 0x7c(r5)
    addi r5, r5, 0x80
    bdnz lbl_fn_801CFDCC_0000057C
lbl_fn_801CFDCC_00000604:
    addi r3, r29, 0x12f8
    li r4, 0x0
    addi r0, r3, 0xf
    subf r0, r5, r0
    srwi r0, r0, 4
    mtctr r0
    cmplw r5, r3
    bge lbl_fn_801CFDCC_0000063C
lbl_fn_801CFDCC_00000624:
    stw r4, 0x0(r5)
    stw r4, 0x4(r5)
    stw r4, 0x8(r5)
    stw r4, 0xc(r5)
    addi r5, r5, 0x10
    bdnz lbl_fn_801CFDCC_00000624
lbl_fn_801CFDCC_0000063C:
    addi r5, r29, 0x1780
    addi r3, r29, 0x1b84
    cmplw r5, r3
    li r4, 0x0
    stw r4, 0x137c(r29)
    bge lbl_fn_801CFDCC_00000678
    addi r3, r3, 0x403
    li r0, 0x404
    subf r3, r5, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_801CFDCC_00000678
lbl_fn_801CFDCC_0000066C:
    stw r4, 0x0(r5)
    addi r5, r5, 0x404
    bdnz lbl_fn_801CFDCC_0000066C
lbl_fn_801CFDCC_00000678:
    lwz r0, 0x98(r29)
    li r4, 0x0
    lfs f3, lbl_80882A5C
    lis r3, lbl_8073C56C@ha
    srwi r0, r0, 31
    lfs f2, lbl_80882A64
    cntlzw r0, r0
    lfs f0, lbl_80882A60
    srwi r0, r0, 5
    addi r3, r3, lbl_8073C56C@l
    cntlzw r0, r0
    stfs f0, 0x1c(r1)
    srwi. r0, r0, 5
    addi r5, r1, 0x1c
    stfs f3, 0x20(r1)
    li r0, -0x1
    addi r26, r3, 0x1
    psq_l f1, 0x0(r5), 0, 0
    stfs f3, 0x1b84(r29)
    stfs f3, 0x1b88(r29)
    stfs f3, 0x1b8c(r29)
    stw r4, 0x1b90(r29)
    stw r4, 0x1b94(r29)
    stw r4, 0x1b98(r29)
    stw r4, 0x1b9c(r29)
    stw r4, 0x1ba0(r29)
    stw r4, 0x1ba4(r29)
    stw r4, 0x1ba8(r29)
    stw r4, 0x1bac(r29)
    stw r4, 0x1bb0(r29)
    stw r4, 0x1bb4(r29)
    stw r4, 0x1bb8(r29)
    stw r4, 0x1bbc(r29)
    stw r4, 0x1bc0(r29)
    stw r0, 0x1bc8(r29)
    stw r4, 0x1bcc(r29)
    stw r4, 0x1bd0(r29)
    stw r4, 0x1c0c(r29)
    stw r4, 0x1c30(r29)
    stw r4, 0x1c54(r29)
    stw r4, 0x1c78(r29)
    stw r4, 0x1c7c(r29)
    stw r4, 0x1c80(r29)
    stw r4, 0x1c84(r29)
    stw r4, 0x1c88(r29)
    stw r4, 0x1c8c(r29)
    stw r4, 0x1c90(r29)
    stw r4, 0x1c94(r29)
    stw r4, 0x1c98(r29)
    stw r4, 0x1c9c(r29)
    stw r4, 0x1ca0(r29)
    stw r4, 0x1ca4(r29)
    stfs f2, 0x24(r1)
    psq_st f1, 0x64(r29), 0, 0
    stfs f2, 0x6c(r29)
    bne lbl_fn_801CFDCC_00000764
    lbz r0, 0x98(r29)
    clrlwi r27, r0, 25
    b lbl_fn_801CFDCC_00000768
lbl_fn_801CFDCC_00000764:
    lwz r27, 0x9c(r29)
lbl_fn_801CFDCC_00000768:
    lbz r0, 0xc(r1)
    mr r3, r26
    stb r0, 0x8(r1)
    bl strlen
    mr r0, r3
    mr r5, r27
    mr r6, r26
    addi r3, r29, 0x98
    add r7, r26, r0
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
    li r0, 0xb
    stw r0, 0x4c(r29)
    cmpwi r0, 0x0
    ble lbl_fn_801CFDCC_00000878
    lis r5, lbl_8073C56C@ha
    li r3, 0x2d0
    addi r5, r5, lbl_8073C56C@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_801D082C@ha
    li r5, 0x0
    addi r4, r4, fn_801D082C@l
    li r6, 0x40
    li r7, 0xb
    bl fn_80695720
    lwz r4, 0x50(r29)
    cmpwi r4, 0x0
    stw r3, 0x50(r29)
    beq lbl_fn_801CFDCC_000007F4
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_801CFDCC_000007F4:
    lis r5, lbl_8073C56C@ha
    li r3, 0x454
    addi r5, r5, lbl_8073C56C@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_801D087C@ha
    lis r26, fn_801D0960@ha
    addi r4, r4, fn_801D087C@l
    li r6, 0x54
    addi r5, r26, fn_801D0960@l
    li r7, 0xd
    bl fn_80695720
    lwz r0, 0x54(r29)
    addi r4, r26, fn_801D0960@l
    stw r3, 0x54(r29)
    mr r3, r0
    bl fn_80695A50
    lis r6, lbl_8073C01C@ha
    lwz r5, 0x50(r29)
    mr r3, r29
    li r4, 0xb
    addi r6, r6, lbl_8073C01C@l
    li r7, 0x1
    li r8, 0x0
    bl fn_8050FB3C
    lis r6, lbl_8073C1F8@ha
    lwz r5, 0x54(r29)
    mr r3, r29
    li r4, 0xd
    addi r6, r6, lbl_8073C1F8@l
    bl fn_8050FC08
lbl_fn_801CFDCC_00000878:
    lis r4, lbl_8073C56C@ha
    mr r3, r29
    addi r26, r4, lbl_8073C56C@l
    li r5, 0x1
    addi r4, r26, 0xd
    bl fn_80201E78
    stw r3, 0xacc(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    addi r4, r26, 0x2b
    li r5, 0x1
    bl fn_80201E78
    stw r3, 0xad0(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    addi r4, r26, 0x51
    li r5, 0x1
    bl fn_80201E78
    stw r3, 0xad4(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    addi r4, r26, 0x76
    li r5, 0x1
    bl fn_80201E78
    stw r3, 0xad8(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    addi r4, r26, 0x9a
    li r5, 0x1
    bl fn_80201E78
    stw r3, 0xadc(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    addi r4, r26, 0xbf
    li r5, 0x1
    bl fn_80201E78
    stw r3, 0xae0(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    addi r4, r26, 0xe5
    li r5, 0x1
    bl fn_80201E78
    stw r3, 0xb0c(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    addi r4, r26, 0x103
    li r5, 0x1
    bl fn_80201E78
    stw r3, 0xb10(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    addi r4, r26, 0x120
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xb84(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    addi r4, r26, 0x120
    li r5, 0x1
    bl fn_80201E78
    stw r3, 0xb18(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    addi r4, r26, 0x13c
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xb1c(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    addi r4, r26, 0x160
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xb20(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    addi r4, r26, 0x185
    li r5, 0x1
    bl fn_80201E78
    stw r3, 0xb90(r29)
    li r4, 0x1
    bl fn_800D246C
    li r22, 0x0
    li r23, 0x0
lbl_fn_801CFDCC_000009F4:
    mr r3, r29
    add r24, r29, r23
    addi r4, r26, 0x1ae
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0xb94(r24)
    li r4, 0x1
    bl fn_800D246C
    addi r22, r22, 0x1
    addi r23, r23, 0x4
    cmpwi r22, 0x9
    blt lbl_fn_801CFDCC_000009F4
    lis r26, lbl_8073C56C@ha
    li r22, 0x0
    addi r26, r26, lbl_8073C56C@l
    li r23, 0x0
lbl_fn_801CFDCC_00000A34:
    add r25, r23, r29
    li r28, 0x0
    li r24, 0x0
lbl_fn_801CFDCC_00000A40:
    mr r3, r29
    add r27, r25, r24
    addi r4, r26, 0x1ae
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0xbb8(r27)
    li r4, 0x1
    bl fn_800D246C
    addi r28, r28, 0x1
    addi r24, r24, 0x4
    cmpwi r28, 0x8
    blt lbl_fn_801CFDCC_00000A40
    addi r22, r22, 0x1
    addi r23, r23, 0x20
    cmpwi r22, 0xa
    blt lbl_fn_801CFDCC_00000A34
    lis r26, lbl_8073C56C@ha
    li r22, 0x0
    addi r26, r26, lbl_8073C56C@l
    li r23, 0x0
lbl_fn_801CFDCC_00000A90:
    mr r24, r22
    li r28, 0x0
    li r25, 0x0
lbl_fn_801CFDCC_00000A9C:
    cmpwi r24, 0x40
    bge lbl_fn_801CFDCC_00000B00
    add r0, r23, r29
    mr r3, r29
    add r27, r0, r25
    addi r4, r26, 0x1ae
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0xcf8(r27)
    li r4, 0x1
    bl fn_800D246C
    add r0, r23, r29
    mr r3, r29
    add r27, r0, r25
    addi r4, r26, 0x1d0
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0xcfc(r27)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r24
    bl fn_8020BDE0
    add r0, r23, r29
    add r4, r25, r0
    stw r3, 0xd00(r4)
lbl_fn_801CFDCC_00000B00:
    addi r28, r28, 0x1
    addi r25, r25, 0x10
    cmpwi r28, 0x8
    addi r24, r24, 0x8
    blt lbl_fn_801CFDCC_00000A9C
    addi r22, r22, 0x1
    addi r23, r23, 0x80
    cmpwi r22, 0x8
    blt lbl_fn_801CFDCC_00000A90
    lis r3, lbl_8073C56C@ha
    li r31, 0x0
    li r25, 0x0
    li r27, 0x1f
    addi r26, r3, lbl_8073C56C@l
lbl_fn_801CFDCC_00000B38:
    mr r24, r31
    slwi r28, r31, 2
    li r30, 0x0
    li r23, 0x0
lbl_fn_801CFDCC_00000B48:
    cmpwi r24, 0x1f
    bne lbl_fn_801CFDCC_00000BC8
    add r0, r25, r29
    mr r3, r29
    add r22, r0, r23
    addi r4, r26, 0x1f7
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0x10f8(r22)
    li r4, 0x1
    bl fn_800D246C
    add r0, r25, r29
    mr r3, r29
    add r22, r0, r23
    addi r4, r26, 0x1d0
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0x10fc(r22)
    li r4, 0x1
    bl fn_800D246C
    add r0, r25, r29
    mr r3, r29
    add r4, r23, r0
    add r22, r29, r28
    stw r27, 0x1100(r4)
    addi r4, r26, 0x1f7
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0x12f8(r22)
    li r4, 0x1
    bl fn_800D246C
    b lbl_fn_801CFDCC_00000C68
lbl_fn_801CFDCC_00000BC8:
    cmpwi r24, 0x20
    bge lbl_fn_801CFDCC_00000C68
    mr r3, r24
    bl fn_8020BD78
    mr r5, r3
    addi r3, r1, 0x28
    addi r4, r26, 0x21d
    crclr 6
    bl sprintf
    add r0, r25, r29
    mr r3, r29
    add r22, r0, r23
    addi r4, r1, 0x28
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0x10f8(r22)
    li r4, 0x1
    bl fn_800D246C
    add r0, r25, r29
    mr r3, r29
    add r22, r0, r23
    addi r4, r26, 0x1d0
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0x10fc(r22)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r24
    bl fn_8020BE10
    add r0, r25, r29
    add r22, r29, r28
    add r5, r23, r0
    addi r4, r1, 0x28
    stw r3, 0x1100(r5)
    mr r3, r29
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0x12f8(r22)
    li r4, 0x1
    bl fn_800D246C
lbl_fn_801CFDCC_00000C68:
    mr r3, r29
    addi r4, r26, 0x1d0
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0x1378(r29)
    li r4, 0x1
    bl fn_800D246C
    addi r30, r30, 0x1
    addi r28, r28, 0x20
    cmpwi r30, 0x4
    addi r23, r23, 0x10
    addi r24, r24, 0x8
    blt lbl_fn_801CFDCC_00000B48
    addi r31, r31, 0x1
    addi r25, r25, 0x40
    cmpwi r31, 0x8
    blt lbl_fn_801CFDCC_00000B38
    lis r28, lbl_8073C56C@ha
    li r23, 0x0
    addi r28, r28, lbl_8073C56C@l
    li r26, 0x0
lbl_fn_801CFDCC_00000CBC:
    mr r3, r29
    add r22, r29, r26
    addi r4, r28, 0x23d
    li r5, 0x1
    bl fn_80201E78
    stw r3, 0xae4(r22)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    addi r4, r28, 0x264
    li r5, 0x1
    bl fn_80201E78
    stw r3, 0xaf8(r22)
    li r4, 0x1
    bl fn_800D246C
    addi r23, r23, 0x1
    addi r26, r26, 0x4
    cmpwi r23, 0x5
    blt lbl_fn_801CFDCC_00000CBC
    lis r28, lbl_8073C56C@ha
    mr r3, r29
    addi r28, r28, lbl_8073C56C@l
    li r5, 0x1
    addi r4, r28, 0x28d
    bl fn_80201E78
    stw r3, 0xb24(r29)
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80882A5C
    mr r3, r29
    stfs f0, 0xb28(r29)
    addi r4, r28, 0x28d
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xb2c(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    addi r4, r28, 0x2aa
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xb30(r29)
    li r4, 0x1
    bl fn_800D246C
    lfs f3, lbl_80882A68
    li r0, 0x0
    lfs f0, lbl_80882A6C
    addi r5, r1, 0x10
    stfs f3, 0x10(r1)
    addi r3, r29, 0x5c
    lfs f2, lbl_80882A70
    addi r4, r28, 0x2c8
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x7c(r29)
    psq_st f1, 0x46c(r29), 0, 0
    stfs f2, 0x474(r29)
    lwz r12, 0x5c(r29)
    stfs f2, 0x18(r1)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r11, r1, 0x150
    mr r3, r29
    bl _restgpr_22
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_801D082C(void)
{
    nofralloc
    lfs f1, lbl_80882A5C
    li r0, 0x0
    lfs f0, lbl_80882A74
    stw r0, 0x0(r3)
    stw r0, 0x8(r3)
    stb r0, 0x3c(r3)
    stfs f1, 0x38(r3)
    stfs f1, 0x30(r3)
    stfs f1, 0x2c(r3)
    stfs f1, 0x28(r3)
    stfs f1, 0x24(r3)
    stfs f1, 0x1c(r3)
    stfs f1, 0x18(r3)
    stfs f1, 0x14(r3)
    stfs f1, 0x10(r3)
    stfs f0, 0x34(r3)
    stfs f0, 0x20(r3)
    stfs f0, 0xc(r3)
    sth r0, 0x4(r3)
    blr
}

asm void fn_801D087C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800A03A0
    addi r3, r31, 0x10
    bl fn_800A08E0
    lfs f0, lbl_80882A78
    addi r3, r31, 0x3c
    stfs f0, 0x50(r31)
    li r4, 0x0
    li r5, 0x12
    bl memset
    li r0, 0x0
    stw r0, 0xc(r31)
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801D08D4(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_801D08E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_801D08E8_00000EE8
    beq lbl_fn_801D08E8_00000ED8
    beq lbl_fn_801D08E8_00000ED8
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_801D08E8_00000ED8
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    mr r3, r4
    bl dtor_80084684
lbl_fn_801D08E8_00000ED8:
    cmpwi r31, 0x0
    ble lbl_fn_801D08E8_00000EE8
    mr r3, r30
    bl dtor_80084684
lbl_fn_801D08E8_00000EE8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801D0960(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_801D0960_00000F48
    beq lbl_fn_801D0960_00000F38
    beq lbl_fn_801D0960_00000F38
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_801D0960_00000F38:
    cmpwi r31, 0x0
    ble lbl_fn_801D0960_00000F48
    mr r3, r30
    bl dtor_80084684
lbl_fn_801D0960_00000F48:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801D09C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_801D09C0_000010C4
    addic. r4, r3, 0x1c9c
    beq lbl_fn_801D09C0_00000FB4
    beq lbl_fn_801D09C0_00000FB4
    beq lbl_fn_801D09C0_00000FB4
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_801D09C0_00000FB4
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_801D09C0_00000FB4:
    addic. r4, r30, 0x1c90
    beq lbl_fn_801D09C0_00000FE0
    beq lbl_fn_801D09C0_00000FE0
    beq lbl_fn_801D09C0_00000FE0
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_801D09C0_00000FE0
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_801D09C0_00000FE0:
    addic. r4, r30, 0x1c84
    beq lbl_fn_801D09C0_0000100C
    beq lbl_fn_801D09C0_0000100C
    beq lbl_fn_801D09C0_0000100C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_801D09C0_0000100C
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_801D09C0_0000100C:
    addic. r4, r30, 0x1c78
    beq lbl_fn_801D09C0_00001038
    beq lbl_fn_801D09C0_00001038
    beq lbl_fn_801D09C0_00001038
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_801D09C0_00001038
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_801D09C0_00001038:
    addic. r4, r30, 0xb58
    beq lbl_fn_801D09C0_00001064
    beq lbl_fn_801D09C0_00001064
    beq lbl_fn_801D09C0_00001064
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_801D09C0_00001064
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_801D09C0_00001064:
    addic. r4, r30, 0xb4c
    beq lbl_fn_801D09C0_00001090
    beq lbl_fn_801D09C0_00001090
    beq lbl_fn_801D09C0_00001090
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_801D09C0_00001090
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_801D09C0_00001090:
    lis r4, fn_801D08E8@ha
    addi r3, r30, 0xb34
    addi r4, r4, fn_801D08E8@l
    li r5, 0xc
    li r6, 0x2
    bl fn_806959D8
    mr r3, r30
    li r4, 0x0
    bl fn_801CD184
    cmpwi r31, 0x0
    ble lbl_fn_801D09C0_000010C4
    mr r3, r30
    bl dtor_80084684
lbl_fn_801D09C0_000010C4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801D0B3C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
lbl_fn_801D0B3C_00001104:
    lwz r0, 0x54(r29)
    add r3, r0, r31
    bl fn_800A0448
    cmpwi r3, 0x0
    beq lbl_fn_801D0B3C_00001120
    li r3, 0x1
    b lbl_fn_801D0B3C_00001134
lbl_fn_801D0B3C_00001120:
    addi r30, r30, 0x1
    addi r31, r31, 0x54
    cmpwi r30, 0xd
    blt lbl_fn_801D0B3C_00001104
    li r3, 0x0
lbl_fn_801D0B3C_00001134:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801D0BAC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x484(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801D0BAC_00001188
    lwz r0, 0xa88(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_801D0BAC_00001188
    bl fn_801CE4CC
    cmpwi r3, 0x0
    beq lbl_fn_801D0BAC_00001190
lbl_fn_801D0BAC_00001188:
    li r3, 0x1
    b lbl_fn_801D0BAC_000011A0
lbl_fn_801D0BAC_00001190:
    lwz r3, 0x7c(r31)
    subi r0, r3, 0xd
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_fn_801D0BAC_000011A0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801D0C10(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r6, lbl_8073C01C@ha
    lwz r5, 0x50(r3)
    lwz r7, 0x4c(r3)
    mr r31, r3
    lwz r8, lbl_80882A54
    addi r6, r6, lbl_8073C01C@l
    bl fn_8050FD3C
    lis r28, lbl_8073C454@ha
    li r27, 0x0
    addi r28, r28, lbl_8073C454@l
    li r29, 0x0
    b lbl_fn_801D0C10_00001234
lbl_fn_801D0C10_000011F8:
    lwz r30, 0x50(r31)
    lwzx r3, r30, r29
    cmpwi r3, 0x0
    beq lbl_fn_801D0C10_00001228
    li r4, 0x0
    bl fn_800D246C
    lwzx r3, r30, r29
    li r4, 0x1
    lfs f1, 0x0(r28)
    li r5, 0x0
    lfs f2, lbl_80882A5C
    bl fn_805113EC
lbl_fn_801D0C10_00001228:
    addi r29, r29, 0x40
    addi r28, r28, 0x14
    addi r27, r27, 0x1
lbl_fn_801D0C10_00001234:
    lwz r0, 0x4c(r31)
    cmpw r27, r0
    blt lbl_fn_801D0C10_000011F8
    lwz r3, 0xacc(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xad0(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xad4(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xad8(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xadc(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xae0(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xb0c(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xb10(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xb84(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xb18(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xb1c(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xb20(r31)
    li r4, 0x0
    bl fn_800D246C
    mr r29, r31
    li r27, 0x0
lbl_fn_801D0C10_000012D8:
    lwz r3, 0x13c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801D0C10_000012EC
    li r4, 0x0
    bl fn_800D246C
lbl_fn_801D0C10_000012EC:
    lwz r3, 0x140(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801D0C10_00001300
    li r4, 0x0
    bl fn_800D246C
lbl_fn_801D0C10_00001300:
    mr r30, r29
    li r28, 0x0
lbl_fn_801D0C10_00001308:
    lwz r3, 0x108(r30)
    li r4, 0x0
    bl fn_800D246C
    addi r28, r28, 0x1
    addi r30, r30, 0x4
    cmpwi r28, 0xd
    blt lbl_fn_801D0C10_00001308
    addi r27, r27, 0x1
    addi r29, r29, 0x48
    cmpwi r27, 0x3
    blt lbl_fn_801D0C10_000012D8
    lwz r3, 0xb90(r31)
    li r4, 0x0
    bl fn_800D246C
    mr r29, r31
    li r27, 0x0
lbl_fn_801D0C10_00001348:
    lwz r3, 0xb94(r29)
    li r4, 0x0
    bl fn_800D246C
    addi r27, r27, 0x1
    addi r29, r29, 0x4
    cmpwi r27, 0x9
    blt lbl_fn_801D0C10_00001348
    mr r29, r31
    li r27, 0x0
lbl_fn_801D0C10_0000136C:
    mr r30, r29
    li r28, 0x0
lbl_fn_801D0C10_00001374:
    lwz r3, 0xbb8(r30)
    li r4, 0x0
    bl fn_800D246C
    addi r28, r28, 0x1
    addi r30, r30, 0x4
    cmpwi r28, 0x8
    blt lbl_fn_801D0C10_00001374
    addi r27, r27, 0x1
    addi r29, r29, 0x20
    cmpwi r27, 0xa
    blt lbl_fn_801D0C10_0000136C
    mr r29, r31
    li r27, 0x0
lbl_fn_801D0C10_000013A8:
    mr r30, r29
    li r28, 0x0
lbl_fn_801D0C10_000013B0:
    lwz r3, 0xcf8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801D0C10_000013C4
    li r4, 0x0
    bl fn_800D246C
lbl_fn_801D0C10_000013C4:
    lwz r3, 0xcfc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801D0C10_000013D8
    li r4, 0x0
    bl fn_800D246C
lbl_fn_801D0C10_000013D8:
    addi r28, r28, 0x1
    addi r30, r30, 0x10
    cmpwi r28, 0x8
    blt lbl_fn_801D0C10_000013B0
    addi r27, r27, 0x1
    addi r29, r29, 0x80
    cmpwi r27, 0x8
    blt lbl_fn_801D0C10_000013A8
    mr r29, r31
    li r27, 0x0
lbl_fn_801D0C10_00001400:
    mr r30, r29
    li r28, 0x0
lbl_fn_801D0C10_00001408:
    lwz r3, 0x10f8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801D0C10_0000141C
    li r4, 0x0
    bl fn_800D246C
lbl_fn_801D0C10_0000141C:
    lwz r3, 0x10fc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801D0C10_00001430
    li r4, 0x0
    bl fn_800D246C
lbl_fn_801D0C10_00001430:
    addi r28, r28, 0x1
    addi r30, r30, 0x10
    cmpwi r28, 0x4
    blt lbl_fn_801D0C10_00001408
    addi r27, r27, 0x1
    addi r29, r29, 0x40
    cmpwi r27, 0x8
    blt lbl_fn_801D0C10_00001400
    mr r29, r31
    li r27, 0x0
lbl_fn_801D0C10_00001458:
    lwz r3, 0x12f8(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801D0C10_0000146C
    li r4, 0x0
    bl fn_800D246C
lbl_fn_801D0C10_0000146C:
    addi r27, r27, 0x1
    addi r29, r29, 0x4
    cmpwi r27, 0x20
    blt lbl_fn_801D0C10_00001458
    lwz r3, 0x1378(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801D0C10_00001490
    li r4, 0x0
    bl fn_800D246C
lbl_fn_801D0C10_00001490:
    mr r29, r31
    li r27, 0x0
lbl_fn_801D0C10_00001498:
    lwz r3, 0xae4(r29)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xae4(r29)
    li r4, 0x0
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
    lwz r3, 0xaf8(r29)
    bl fn_800D246C
    lwz r3, 0xaf8(r29)
    addi r27, r27, 0x1
    cmpwi r27, 0x5
    addi r29, r29, 0x4
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
    blt lbl_fn_801D0C10_00001498
    lwz r3, 0xacc(r31)
    li r4, 0x1
    lfs f1, lbl_80882A7C
    li r5, 0x0
    lfs f2, lbl_80882A5C
    bl fn_805113EC
    lwz r3, 0xad0(r31)
    li r4, 0x1
    lfs f1, lbl_80882A7C
    li r5, 0x0
    lfs f2, lbl_80882A5C
    bl fn_805113EC
    lfs f1, lbl_80882A5C
    li r4, 0x1
    lwz r3, 0xad4(r31)
    li r5, 0x0
    fmr f2, f1
    bl fn_805113EC
    lfs f1, lbl_80882A5C
    li r4, 0x1
    lwz r3, 0xad8(r31)
    li r5, 0x0
    fmr f2, f1
    bl fn_805113EC
    lfs f1, lbl_80882A5C
    li r4, 0x1
    lwz r3, 0xadc(r31)
    li r5, 0x0
    fmr f2, f1
    bl fn_805113EC
    lfs f1, lbl_80882A5C
    li r4, 0x1
    lwz r3, 0xae0(r31)
    li r5, 0x0
    fmr f2, f1
    bl fn_805113EC
    lfs f1, lbl_80882A5C
    li r4, 0x1
    lwz r3, 0xb0c(r31)
    li r5, 0x0
    fmr f2, f1
    bl fn_805113EC
    lfs f1, lbl_80882A5C
    li r4, 0x1
    lwz r3, 0xb10(r31)
    li r5, 0x0
    fmr f2, f1
    bl fn_805113EC
    lwz r3, 0xb84(r31)
    li r4, 0x1
    lfs f1, lbl_80882A5C
    li r5, 0x0
    lfs f2, lbl_80882A74
    bl fn_805115D4
    lwz r3, 0xb18(r31)
    li r4, 0x1
    lfs f1, lbl_80882A5C
    li r5, 0x0
    lfs f2, lbl_80882A74
    bl fn_805113EC
    lwz r3, 0xb1c(r31)
    li r4, 0x1
    lfs f1, lbl_80882A5C
    li r5, 0x0
    lfs f2, lbl_80882A74
    bl fn_805115D4
    lwz r3, 0xb20(r31)
    li r4, 0x1
    lfs f1, lbl_80882A5C
    li r5, 0x0
    lfs f2, lbl_80882A74
    bl fn_805115D4
    mr r29, r31
    li r27, 0x0
lbl_fn_801D0C10_00001608:
    lwz r3, 0x13c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801D0C10_00001628
    lfs f1, lbl_80882A5C
    li r4, 0x1
    li r5, 0x0
    fmr f2, f1
    bl fn_805113EC
lbl_fn_801D0C10_00001628:
    lwz r3, 0x140(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801D0C10_00001648
    lfs f1, lbl_80882A80
    li r4, 0x1
    lfs f2, lbl_80882A5C
    li r5, 0x0
    bl fn_805114D8
lbl_fn_801D0C10_00001648:
    mr r30, r29
    li r28, 0x0
lbl_fn_801D0C10_00001650:
    lfs f1, lbl_80882A5C
    li r4, 0x1
    lwz r3, 0x108(r30)
    li r5, 0x0
    fmr f2, f1
    bl fn_805114D8
    addi r28, r28, 0x1
    addi r30, r30, 0x4
    cmpwi r28, 0xd
    blt lbl_fn_801D0C10_00001650
    addi r27, r27, 0x1
    addi r29, r29, 0x48
    cmpwi r27, 0x3
    blt lbl_fn_801D0C10_00001608
    lwz r3, 0xb90(r31)
    li r4, 0x1
    lfs f1, lbl_80882A5C
    li r5, 0x1
    lfs f2, lbl_80882A74
    bl fn_805113EC
    mr r29, r31
    li r27, 0x0
lbl_fn_801D0C10_000016A8:
    lfs f1, lbl_80882A5C
    li r4, 0x1
    lwz r3, 0xb94(r29)
    li r5, 0x0
    fmr f2, f1
    bl fn_805114D8
    addi r27, r27, 0x1
    addi r29, r29, 0x4
    cmpwi r27, 0x9
    blt lbl_fn_801D0C10_000016A8
    mr r29, r31
    li r27, 0x0
lbl_fn_801D0C10_000016D8:
    mr r30, r29
    li r28, 0x0
lbl_fn_801D0C10_000016E0:
    lfs f1, lbl_80882A5C
    li r4, 0x1
    lwz r3, 0xbb8(r30)
    li r5, 0x0
    fmr f2, f1
    bl fn_805114D8
    addi r28, r28, 0x1
    addi r30, r30, 0x4
    cmpwi r28, 0x8
    blt lbl_fn_801D0C10_000016E0
    addi r27, r27, 0x1
    addi r29, r29, 0x20
    cmpwi r27, 0xa
    blt lbl_fn_801D0C10_000016D8
    mr r29, r31
    li r27, 0x0
lbl_fn_801D0C10_00001720:
    mr r30, r29
    li r28, 0x0
lbl_fn_801D0C10_00001728:
    lfs f1, lbl_80882A5C
    li r4, 0x1
    lwz r3, 0xcf8(r30)
    li r5, 0x0
    fmr f2, f1
    bl fn_805114D8
    lfs f1, lbl_80882A5C
    li r4, 0x1
    lwz r3, 0xcfc(r30)
    li r5, 0x0
    fmr f2, f1
    bl fn_805114D8
    addi r28, r28, 0x1
    addi r30, r30, 0x10
    cmpwi r28, 0x8
    blt lbl_fn_801D0C10_00001728
    addi r27, r27, 0x1
    addi r29, r29, 0x80
    cmpwi r27, 0x8
    blt lbl_fn_801D0C10_00001720
    mr r30, r31
    li r27, 0x0
lbl_fn_801D0C10_00001780:
    mr r29, r30
    li r28, 0x0
lbl_fn_801D0C10_00001788:
    lfs f1, lbl_80882A5C
    li r4, 0x1
    lwz r3, 0x10f8(r29)
    li r5, 0x0
    fmr f2, f1
    bl fn_805114D8
    lfs f1, lbl_80882A5C
    li r4, 0x1
    lwz r3, 0x10fc(r29)
    li r5, 0x0
    fmr f2, f1
    bl fn_805114D8
    addi r28, r28, 0x1
    addi r29, r29, 0x10
    cmpwi r28, 0x4
    blt lbl_fn_801D0C10_00001788
    addi r27, r27, 0x1
    addi r30, r30, 0x40
    cmpwi r27, 0x8
    blt lbl_fn_801D0C10_00001780
    mr r30, r31
    li r27, 0x0
lbl_fn_801D0C10_000017E0:
    lfs f1, lbl_80882A5C
    li r4, 0x1
    lwz r3, 0x12f8(r30)
    li r5, 0x0
    fmr f2, f1
    bl fn_805114D8
    addi r27, r27, 0x1
    addi r30, r30, 0x4
    cmpwi r27, 0x20
    blt lbl_fn_801D0C10_000017E0
    lfs f1, lbl_80882A5C
    li r4, 0x1
    lwz r3, 0x1378(r31)
    li r5, 0x0
    fmr f2, f1
    bl fn_805114D8
    lwz r3, 0xb24(r31)
    li r4, 0x1
    lfs f1, lbl_80882A5C
    li r5, 0x0
    lfs f2, lbl_80882A78
    bl fn_805113EC
    lwz r3, 0xb2c(r31)
    li r4, 0x1
    lfs f1, lbl_80882A5C
    li r5, 0x0
    lfs f2, lbl_80882A78
    bl fn_805115D4
    lwz r3, 0xb30(r31)
    li r4, 0x1
    lfs f1, lbl_80882A5C
    li r5, 0x0
    lfs f2, lbl_80882A78
    bl fn_805115D4
    lwz r6, 0x54(r31)
    mr r3, r31
    li r4, 0x0
    addi r5, r6, 0x39c
    addi r0, r6, 0x3f0
    stw r5, 0xe8(r31)
    stw r0, 0xec(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    lwz r12, 0x74(r12)
    mtctr r12
    bctrl
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801D1324(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    stw r29, 0x7c(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x74(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_80882A5C
    li r28, 0x0
    stw r29, 0x1b90(r31)
    lis r30, 0x2
    stw r29, 0x1b94(r31)
    stw r29, 0x1b98(r31)
    stw r29, 0x1b9c(r31)
    stw r29, 0x1ba0(r31)
    stw r29, 0x1ba4(r31)
    stw r29, 0x1ba8(r31)
    stw r29, 0x1bac(r31)
    stw r29, 0x1bb4(r31)
    stw r29, 0x1bb8(r31)
    stw r29, 0x1bbc(r31)
    stw r29, 0x1bc0(r31)
    stfs f0, 0xb28(r31)
    stw r29, 0x1f8(r31)
    stw r29, 0x1fc(r31)
    stw r29, 0x200(r31)
    stw r29, 0x204(r31)
    stw r29, 0xb7c(r31)
    stw r29, 0xb80(r31)
    stw r29, 0x1bd0(r31)
lbl_fn_801D1324_00001964:
    subi r0, r28, 0x5
    cmplwi r0, 0x1
    ble lbl_fn_801D1324_000019A0
    cmpwi r28, 0x1
    bne lbl_fn_801D1324_000019B4
    lwz r3, lbl_8087F430
    subi r0, r30, 0x5638
    lwz r4, 0x10d0(r3)
    cmpw r4, r0
    bgt lbl_fn_801D1324_000019B4
    li r4, 0x764
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_801D1324_000019E4
    b lbl_fn_801D1324_000019B4
lbl_fn_801D1324_000019A0:
    lwz r3, lbl_8087F430
    subi r0, r30, 0x6da8
    lwz r3, 0x10d0(r3)
    cmpw r3, r0
    blt lbl_fn_801D1324_000019E4
lbl_fn_801D1324_000019B4:
    lwz r0, 0x1bd0(r31)
    stw r28, 0x8(r1)
    slwi r0, r0, 3
    add r0, r31, r0
    stw r28, 0xc(r1)
    addic. r3, r0, 0x1bd4
    beq lbl_fn_801D1324_000019D8
    stw r28, 0x0(r3)
    stw r28, 0x4(r3)
lbl_fn_801D1324_000019D8:
    lwz r3, 0x1bd0(r31)
    addi r0, r3, 0x1
    stw r0, 0x1bd0(r31)
lbl_fn_801D1324_000019E4:
    addi r28, r28, 0x1
    cmpwi r28, 0x7
    blt lbl_fn_801D1324_00001964
    lwz r3, 0xb2c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801D1324_00001A10
    lfs f0, lbl_80882A5C
    stfs f0, 0x100(r3)
    lfs f0, lbl_80882A84
    lwz r3, 0xb2c(r31)
    stfs f0, 0x104(r3)
lbl_fn_801D1324_00001A10:
    lwz r3, 0xb88(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801D1324_00001A28
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0xb88(r31)
lbl_fn_801D1324_00001A28:
    lis r4, lbl_8073C56C@ha
    mr r3, r31
    addi r4, r4, lbl_8073C56C@l
    addi r4, r4, 0x2eb
    bl fn_801F64D0
    stw r3, 0xb88(r31)
    li r4, 0x1
    bl fn_800D246C
    lwz r3, 0xb88(r31)
    li r0, 0x0
    stb r0, 0x4e(r3)
    stw r0, 0x1c54(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
