#include "revolution/types.h"

/* External functions referenced */
extern void __GXFlushTextureState(void);
extern void fn_80614510(void);
extern void fn_806148E0(void);
extern void fn_80695D84(void);

/* Jump tables */
extern u32 jumptable_807B0E58[];
extern u32 jumptable_807B0EB0[];

/* External data */
extern u8 lbl_807B0E10[];
extern u8 lbl_807B0E38[];

/* External SDA symbols */
extern u32 __GXData;
extern u32 __cpReg;
extern f32 lbl_808887B8;
extern f32 lbl_808887BC;
extern f32 lbl_808887C0;
extern f64 lbl_808887C8;
extern f32 lbl_808887D0;
extern f64 lbl_808887D8;
extern f32 lbl_808887E0;
extern f64 lbl_808887E8;
extern f32 lbl_808887F0;
extern f32 lbl_808887F4;
extern f32 lbl_808887F8;
extern f32 lbl_808887FC;

/* Function declarations */
void fn_80617650(void);
void fn_806176A0(void);
void fn_806176F0(void);
void fn_80617730(void);
void fn_806177B0(void);
void fn_806177F0(void);
void fn_80617880(void);
void fn_806179E0(void);
void fn_80617A10(void);
void fn_80617C40(void);
void fn_80617D50(void);
void fn_80617DA0(void);
void fn_80617DD0(void);
void fn_80617E00(void);
void fn_80617E40(void);
void fn_80617E70(void);
void fn_80617F20(void);
void fn_80617F50(void);
void fn_80617F80(void);
void fn_80617FC0(void);
void fn_80618030(void);
void fn_806180B0(void);
void fn_80618240(void);
void fn_80618290(void);
void fn_80618300(void);
void fn_80618350(void);
void fn_806183A0(void);
void fn_80618400(void);
void fn_80618420(void);
void fn_806184E0(void);
void fn_80618570(void);
void fn_806185A0(void);
void fn_806185C0(void);
void fn_80618630(void);
void fn_80618670(void);
void fn_806186A0(void);
void fn_80618730(void);
void fn_80618F50(void);

asm void fn_80617650(void)
{
    nofralloc
    clrlwi. r0, r3, 31
    lwz r5, __GXData
    extlwi r0, r3, 30, 1
    add r3, r5, r0
    beq lbl_fn_80617650_00000024
    lwz r0, 0x200(r3)
    rlwimi r0, r4, 14, 13, 17
    stw r0, 0x200(r3)
    b lbl_fn_80617650_00000030
lbl_fn_80617650_00000024:
    lwz r0, 0x200(r3)
    rlwimi r0, r4, 4, 23, 27
    stw r0, 0x200(r3)
lbl_fn_80617650_00000030:
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    li r0, 0x0
    lwz r3, 0x200(r3)
    stw r3, -0x8000(r4)
    sth r0, 0x2(r5)
    blr
}

asm void fn_806176A0(void)
{
    nofralloc
    clrlwi. r0, r3, 31
    lwz r5, __GXData
    extlwi r0, r3, 30, 1
    add r3, r5, r0
    beq lbl_fn_806176A0_00000074
    lwz r0, 0x200(r3)
    rlwimi r0, r4, 19, 8, 12
    stw r0, 0x200(r3)
    b lbl_fn_806176A0_00000080
lbl_fn_806176A0_00000074:
    lwz r0, 0x200(r3)
    rlwimi r0, r4, 9, 18, 22
    stw r0, 0x200(r3)
lbl_fn_806176A0_00000080:
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    li r0, 0x0
    lwz r3, 0x200(r3)
    stw r3, -0x8000(r4)
    sth r0, 0x2(r5)
    blr
}

asm void fn_806176F0(void)
{
    nofralloc
    lwz r9, __GXData
    slwi r0, r3, 2
    lis r6, 0xcc01
    li r3, 0x61
    add r8, r9, r0
    li r0, 0x0
    lwz r7, 0x1c0(r8)
    rlwimi r7, r4, 0, 30, 31
    rlwimi r7, r5, 2, 28, 29
    stw r7, 0x1c0(r8)
    stb r3, -0x8000(r6)
    lwz r3, 0x1c0(r8)
    stw r3, -0x8000(r6)
    sth r0, 0x2(r9)
    blr
}

asm void fn_80617730(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    slwi r11, r3, 3
    slwi r12, r3, 1
    lis r8, 0xcc01
    stw r31, 0xc(r1)
    li r9, 0x61
    addi r3, r12, 0x1
    li r0, 0x0
    stw r30, 0x8(r1)
    lwz r30, __GXData
    addi r31, r30, 0x200
    lwzx r10, r31, r11
    rlwimi r10, r4, 0, 30, 31
    rlwimi r10, r5, 2, 28, 29
    stwx r10, r31, r11
    slwi r4, r3, 2
    stb r9, -0x8000(r8)
    lwzx r3, r31, r11
    stw r3, -0x8000(r8)
    lwzx r3, r31, r4
    rlwimi r3, r6, 0, 30, 31
    rlwimi r3, r7, 2, 28, 29
    stwx r3, r31, r4
    stb r9, -0x8000(r8)
    lwzx r3, r31, r4
    stw r3, -0x8000(r8)
    sth r0, 0x2(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    addi r1, r1, 0x10
    blr
}

asm void fn_806177B0(void)
{
    nofralloc
    lis r8, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r8)
    lis r9, 0xf300
    rlwimi r9, r4, 0, 24, 31
    lwz r4, __GXData
    rlwimi r9, r7, 8, 16, 23
    li r0, 0x0
    rlwimi r9, r3, 16, 13, 15
    rlwimi r9, r6, 19, 10, 12
    rlwimi r9, r5, 22, 8, 9
    stw r9, -0x8000(r8)
    sth r0, 0x2(r4)
    blr
}

asm void fn_806177F0(void)
{
    nofralloc
    cmpwi r4, 0x11
    li r7, 0x0
    li r0, 0xf4
    rlwimi r7, r5, 0, 8, 31
    rlwimi r7, r0, 24, 0, 7
    beq lbl_fn_806177F0_000001CC
    cmpwi r4, 0x13
    beq lbl_fn_806177F0_000001D4
    cmpwi r4, 0x16
    beq lbl_fn_806177F0_000001DC
    b lbl_fn_806177F0_000001E4
lbl_fn_806177F0_000001CC:
    li r5, 0x0
    b lbl_fn_806177F0_000001E8
lbl_fn_806177F0_000001D4:
    li r5, 0x1
    b lbl_fn_806177F0_000001E8
lbl_fn_806177F0_000001DC:
    li r5, 0x2
    b lbl_fn_806177F0_000001E8
lbl_fn_806177F0_000001E4:
    li r5, 0x2
lbl_fn_806177F0_000001E8:
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    li r6, 0x0
    rlwimi r6, r5, 0, 30, 31
    li r5, 0xf5
    stw r7, -0x8000(r4)
    rlwimi r6, r3, 2, 28, 29
    lwz r3, __GXData
    rlwimi r6, r5, 24, 0, 7
    stb r0, -0x8000(r4)
    li r0, 0x0
    stw r6, -0x8000(r4)
    sth r0, 0x2(r3)
    blr
}

asm void fn_80617880(void)
{
    nofralloc
    rlwinm r11, r5, 0, 24, 22
    li r7, 0x8
    srwi r9, r3, 31
    lwz r10, __GXData
    subfc r0, r7, r11
    slwi r8, r3, 2
    addze r0, r7
    add r9, r9, r3
    add r7, r10, r8
    cmpwi r4, 0x8
    extlwi r8, r9, 30, 1
    subfic r0, r0, 0x8
    stw r5, 0x5a4(r7)
    add r7, r10, r8
    andc r9, r11, r0
    blt lbl_fn_80617880_0000028C
    li r0, 0x1
    lwz r8, 0x5e8(r10)
    slw r0, r0, r3
    li r4, 0x0
    andc r0, r8, r0
    stw r0, 0x5e8(r10)
    b lbl_fn_80617880_000002A0
lbl_fn_80617880_0000028C:
    li r0, 0x1
    lwz r8, 0x5e8(r10)
    slw r0, r0, r3
    or r0, r8, r0
    stw r0, 0x5e8(r10)
lbl_fn_80617880_000002A0:
    clrlwi. r0, r3, 31
    beq lbl_fn_80617880_00000304
    lwz r8, 0x150(r7)
    cmpwi r6, 0xff
    rlwimi r8, r9, 12, 17, 19
    rlwimi r8, r4, 15, 14, 16
    stw r8, 0x150(r7)
    bne lbl_fn_80617880_000002C8
    li r0, 0x7
    b lbl_fn_80617880_000002D8
lbl_fn_80617880_000002C8:
    lis r3, lbl_807B0E10@ha
    slwi r0, r6, 2
    addi r3, r3, lbl_807B0E10@l
    lwzx r0, r3, r0
lbl_fn_80617880_000002D8:
    cmpwi r5, 0xff
    rlwimi r8, r0, 19, 10, 12
    stw r8, 0x150(r7)
    li r3, 0x0
    beq lbl_fn_80617880_000002F8
    rlwinm. r0, r5, 0, 23, 23
    bne lbl_fn_80617880_000002F8
    li r3, 0x1
lbl_fn_80617880_000002F8:
    rlwimi r8, r3, 18, 13, 13
    stw r8, 0x150(r7)
    b lbl_fn_80617880_0000035C
lbl_fn_80617880_00000304:
    lwz r8, 0x150(r7)
    cmpwi r6, 0xff
    rlwimi r8, r9, 0, 29, 31
    rlwimi r8, r4, 3, 26, 28
    stw r8, 0x150(r7)
    bne lbl_fn_80617880_00000324
    li r0, 0x7
    b lbl_fn_80617880_00000334
lbl_fn_80617880_00000324:
    lis r3, lbl_807B0E10@ha
    slwi r0, r6, 2
    addi r3, r3, lbl_807B0E10@l
    lwzx r0, r3, r0
lbl_fn_80617880_00000334:
    cmpwi r5, 0xff
    rlwimi r8, r0, 7, 22, 24
    stw r8, 0x150(r7)
    li r3, 0x0
    beq lbl_fn_80617880_00000354
    rlwinm. r0, r5, 0, 23, 23
    bne lbl_fn_80617880_00000354
    li r3, 0x1
lbl_fn_80617880_00000354:
    rlwimi r8, r3, 6, 25, 25
    stw r8, 0x150(r7)
lbl_fn_80617880_0000035C:
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    li r0, 0x0
    lwz r5, __GXData
    lwz r3, 0x150(r7)
    stw r3, -0x8000(r4)
    sth r0, 0x2(r5)
    lwz r0, 0x5fc(r5)
    ori r0, r0, 0x1
    stw r0, 0x5fc(r5)
    blr
}

asm void fn_806179E0(void)
{
    nofralloc
    lwz r4, __GXData
    subi r0, r3, 0x1
    lwz r3, 0x254(r4)
    rlwimi r3, r0, 10, 18, 21
    stw r3, 0x254(r4)
    lwz r0, 0x5fc(r4)
    ori r0, r0, 0x4
    stw r0, 0x5fc(r4)
    blr
}

asm void fn_80617A10(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    clrlwi r31, r3, 29
    stw r30, 0x28(r1)
    extrwi. r30, r3, 1, 28
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    beq lbl_fn_80617A10_0000043C
    fcmpu cr0, f4, f3
    beq lbl_fn_80617A10_00000404
    fcmpu cr0, f2, f1
    bne lbl_fn_80617A10_00000414
lbl_fn_80617A10_00000404:
    lfs f0, lbl_808887B8
    stfs f0, 0xc(r1)
    stfs f0, 0x8(r1)
    b lbl_fn_80617A10_00000544
lbl_fn_80617A10_00000414:
    fsubs f6, f2, f1
    lfs f5, lbl_808887BC
    fsubs f2, f4, f3
    fsubs f0, f1, f3
    fdivs f3, f5, f6
    fmuls f1, f3, f2
    fmuls f0, f3, f0
    stfs f1, 0xc(r1)
    stfs f0, 0x8(r1)
    b lbl_fn_80617A10_00000544
lbl_fn_80617A10_0000043C:
    fcmpu cr0, f4, f3
    beq lbl_fn_80617A10_0000044C
    fcmpu cr0, f2, f1
    bne lbl_fn_80617A10_0000045C
lbl_fn_80617A10_0000044C:
    lfs f3, lbl_808887B8
    lfs f4, lbl_808887C0
    fmr f31, f3
    b lbl_fn_80617A10_00000478
lbl_fn_80617A10_0000045C:
    fsubs f0, f4, f3
    fsubs f2, f2, f1
    fmuls f3, f4, f3
    fdivs f4, f4, f0
    fmuls f0, f0, f2
    fdivs f31, f1, f2
    fdivs f3, f3, f0
lbl_fn_80617A10_00000478:
    lfs f1, lbl_808887C0
    li r28, 0x0
    lfd f0, lbl_808887C8
    b lbl_fn_80617A10_00000490
lbl_fn_80617A10_00000488:
    fmuls f4, f4, f1
    addi r28, r28, 0x1
lbl_fn_80617A10_00000490:
    fcmpo cr0, f4, f0
    bgt lbl_fn_80617A10_00000488
    lfd f0, lbl_808887D8
    lfs f2, lbl_808887D0
    lfs f1, lbl_808887B8
    b lbl_fn_80617A10_000004B0
lbl_fn_80617A10_000004A8:
    fmuls f4, f4, f2
    subi r28, r28, 0x1
lbl_fn_80617A10_000004B0:
    fcmpo cr0, f4, f1
    mfcr r0
    extrwi. r0, r0, 1, 1
    beq lbl_fn_80617A10_000004C8
    fcmpo cr0, f4, f0
    blt lbl_fn_80617A10_000004A8
lbl_fn_80617A10_000004C8:
    addi r0, r28, 0x1
    li r3, 0x1
    slw r3, r3, r0
    lfs f0, lbl_808887E0
    lis r0, 0x4330
    stw r0, 0x10(r1)
    xoris r3, r3, 0x8000
    lfd f2, lbl_808887E8
    stw r3, 0x14(r1)
    fmuls f1, f0, f4
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f0, f3, f0
    stfs f0, 0xc(r1)
    bl fn_80695D84
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    li r6, 0x0
    rlwimi r6, r3, 0, 8, 31
    li r3, 0xef
    rlwimi r6, r3, 24, 0, 7
    stw r6, -0x8000(r4)
    addi r5, r28, 0x1
    li r3, 0xf0
    stb r0, -0x8000(r4)
    li r6, 0x0
    rlwimi r6, r5, 0, 27, 31
    rlwimi r6, r3, 24, 0, 7
    stfs f31, 0x8(r1)
    stw r6, -0x8000(r4)
lbl_fn_80617A10_00000544:
    lwz r0, 0x0(r29)
    lis r4, 0xcc01
    li r5, 0x61
    lwz r6, 0xc(r1)
    stb r5, -0x8000(r4)
    li r7, 0x0
    li r3, 0xee
    lwz r9, 0x8(r1)
    rlwimi r7, r6, 20, 21, 31
    li r8, 0x0
    rlwimi r7, r6, 20, 13, 20
    rlwimi r7, r6, 20, 12, 12
    rlwimi r8, r9, 20, 21, 31
    rlwimi r7, r3, 24, 0, 7
    stw r7, -0x8000(r4)
    rlwimi r8, r9, 20, 13, 20
    li r6, 0x0
    rlwimi r8, r9, 20, 12, 12
    stb r5, -0x8000(r4)
    rlwimi r8, r30, 20, 11, 11
    li r7, 0xf1
    rlwimi r8, r31, 21, 8, 10
    rlwimi r6, r0, 24, 8, 31
    rlwimi r8, r7, 24, 0, 7
    stw r8, -0x8000(r4)
    li r0, 0xf2
    lwz r3, __GXData
    rlwimi r6, r0, 24, 0, 7
    stb r5, -0x8000(r4)
    li r0, 0x0
    stw r6, -0x8000(r4)
    sth r0, 0x2(r3)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80617C40(void)
{
    nofralloc
    cmpwi r3, 0x0
    beq lbl_fn_80617C40_000006C8
    lhz r11, 0x0(r5)
    lis r6, 0xcc01
    li r0, 0x61
    lhz r9, 0x2(r5)
    li r10, 0x0
    stb r0, -0x8000(r6)
    rlwimi r10, r11, 0, 20, 31
    li r7, 0xe9
    rlwimi r10, r9, 12, 8, 19
    lhz r11, 0x4(r5)
    mr r8, r10
    lhz r9, 0x6(r5)
    rlwimi r8, r7, 24, 0, 7
    stw r8, -0x8000(r6)
    li r10, 0x0
    li r7, 0xea
    rlwimi r10, r11, 0, 20, 31
    stb r0, -0x8000(r6)
    rlwimi r10, r9, 12, 8, 19
    lhz r11, 0x8(r5)
    mr r8, r10
    lhz r9, 0xa(r5)
    rlwimi r8, r7, 24, 0, 7
    stw r8, -0x8000(r6)
    li r10, 0x0
    li r7, 0xeb
    rlwimi r10, r11, 0, 20, 31
    stb r0, -0x8000(r6)
    rlwimi r10, r9, 12, 8, 19
    lhz r11, 0xc(r5)
    mr r8, r10
    lhz r9, 0xe(r5)
    rlwimi r8, r7, 24, 0, 7
    stw r8, -0x8000(r6)
    li r10, 0x0
    li r7, 0xec
    rlwimi r10, r11, 0, 20, 31
    stb r0, -0x8000(r6)
    rlwimi r10, r9, 12, 8, 19
    lhz r11, 0x10(r5)
    mr r8, r10
    lhz r9, 0x12(r5)
    rlwimi r8, r7, 24, 0, 7
    stw r8, -0x8000(r6)
    li r10, 0x0
    li r7, 0xed
    rlwimi r10, r11, 0, 20, 31
    stb r0, -0x8000(r6)
    rlwimi r10, r9, 12, 8, 19
    mr r8, r10
    rlwimi r8, r7, 24, 0, 7
    stw r8, -0x8000(r6)
lbl_fn_80617C40_000006C8:
    lis r5, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r5)
    addi r4, r4, 0x156
    li r6, 0x0
    li r0, 0x0
    rlwimi r6, r4, 0, 22, 31
    li r4, 0xe8
    rlwimi r6, r3, 10, 21, 21
    lwz r3, __GXData
    rlwimi r6, r4, 24, 0, 7
    stw r6, -0x8000(r5)
    sth r0, 0x2(r3)
    blr
}

asm void fn_80617D50(void)
{
    nofralloc
    lwz r10, __GXData
    subi r0, r3, 0x3
    subi r8, r3, 0x2
    lis r7, 0xcc01
    lwz r9, 0x220(r10)
    cntlzw r0, r0
    rlwimi r9, r0, 6, 20, 20
    cntlzw r8, r8
    li r0, 0x61
    stb r0, -0x8000(r7)
    rlwimi r9, r3, 0, 31, 31
    rlwimi r9, r8, 28, 30, 30
    li r0, 0x0
    rlwimi r9, r6, 12, 16, 19
    rlwimi r9, r4, 8, 21, 23
    rlwimi r9, r5, 5, 24, 26
    stw r9, -0x8000(r7)
    stw r9, 0x220(r10)
    sth r0, 0x2(r10)
    blr
}

asm void fn_80617DA0(void)
{
    nofralloc
    lwz r7, __GXData
    lis r4, 0xcc01
    li r5, 0x61
    li r0, 0x0
    lwz r6, 0x220(r7)
    rlwimi r6, r3, 3, 28, 28
    stb r5, -0x8000(r4)
    stw r6, -0x8000(r4)
    stw r6, 0x220(r7)
    sth r0, 0x2(r7)
    blr
}

asm void fn_80617DD0(void)
{
    nofralloc
    lwz r7, __GXData
    lis r4, 0xcc01
    li r5, 0x61
    li r0, 0x0
    lwz r6, 0x220(r7)
    rlwimi r6, r3, 4, 27, 27
    stb r5, -0x8000(r4)
    stw r6, -0x8000(r4)
    stw r6, 0x220(r7)
    sth r0, 0x2(r7)
    blr
}

asm void fn_80617E00(void)
{
    nofralloc
    lwz r9, __GXData
    lis r6, 0xcc01
    li r7, 0x61
    li r0, 0x0
    lwz r8, 0x228(r9)
    rlwimi r8, r3, 0, 31, 31
    rlwimi r8, r4, 1, 28, 30
    stb r7, -0x8000(r6)
    rlwimi r8, r5, 4, 27, 27
    stw r8, -0x8000(r6)
    stw r8, 0x228(r9)
    sth r0, 0x2(r9)
    blr
}

asm void fn_80617E40(void)
{
    nofralloc
    lwz r7, __GXData
    lis r4, 0xcc01
    li r5, 0x61
    li r0, 0x0
    lwz r6, 0x22c(r7)
    rlwimi r6, r3, 6, 25, 25
    stw r6, 0x22c(r7)
    stb r5, -0x8000(r4)
    lwz r3, 0x22c(r7)
    stw r3, -0x8000(r4)
    sth r0, 0x2(r7)
    blr
}

asm void fn_80617E70(void)
{
    nofralloc
    lwz r9, __GXData
    lis r6, lbl_807B0E38@ha
    slwi r7, r3, 2
    addi r6, r6, lbl_807B0E38@l
    lwz r8, 0x22c(r9)
    lwzx r0, r6, r7
    mr r5, r8
    rlwimi r5, r0, 0, 29, 31
    rlwimi r5, r4, 3, 26, 28
    stw r5, 0x22c(r9)
    cmplw r8, r5
    beq lbl_fn_80617E70_00000884
    lis r5, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r5)
    subi r0, r3, 0x2
    cntlzw r4, r0
    lwz r0, 0x22c(r9)
    stw r0, -0x8000(r5)
    lwz r0, 0x254(r9)
    rlwimi r0, r4, 4, 22, 22
    stw r0, 0x254(r9)
    lwz r0, 0x5fc(r9)
    ori r0, r0, 0x4
    stw r0, 0x5fc(r9)
lbl_fn_80617E70_00000884:
    lwzx r0, r6, r7
    cmplwi r0, 0x4
    bne lbl_fn_80617E70_000008BC
    subi r0, r3, 0x4
    lwz r4, 0x224(r9)
    rlwimi r4, r0, 9, 21, 22
    lis r3, 0xcc01
    li r0, 0x42
    rlwimi r4, r0, 24, 0, 7
    stw r4, 0x224(r9)
    li r0, 0x61
    stb r0, -0x8000(r3)
    lwz r0, 0x224(r9)
    stw r0, -0x8000(r3)
lbl_fn_80617E70_000008BC:
    li r0, 0x0
    sth r0, 0x2(r9)
    blr
}

asm void fn_80617F20(void)
{
    nofralloc
    lwz r7, __GXData
    lis r4, 0xcc01
    li r5, 0x61
    li r0, 0x0
    lwz r6, 0x220(r7)
    rlwimi r6, r3, 2, 29, 29
    stb r5, -0x8000(r4)
    stw r6, -0x8000(r4)
    stw r6, 0x220(r7)
    sth r0, 0x2(r7)
    blr
}

asm void fn_80617F50(void)
{
    nofralloc
    lwz r8, __GXData
    lis r5, 0xcc01
    li r6, 0x61
    li r0, 0x0
    lwz r7, 0x224(r8)
    rlwimi r7, r4, 0, 24, 31
    rlwimi r7, r3, 8, 23, 23
    stb r6, -0x8000(r5)
    stw r7, -0x8000(r5)
    stw r7, 0x224(r8)
    sth r0, 0x2(r8)
    blr
}

asm void fn_80617F80(void)
{
    nofralloc
    lis r5, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r5)
    li r6, 0x0
    li r0, 0x44
    rlwimi r6, r4, 0, 31, 31
    rlwimi r6, r3, 1, 30, 30
    lwz r3, __GXData
    rlwimi r6, r0, 24, 0, 7
    stw r6, -0x8000(r5)
    li r0, 0x0
    sth r0, 0x2(r3)
    blr
}

asm void fn_80617FC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r5, __GXData
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, 0xcc01
    stw r30, 0x18(r1)
    li r30, 0x61
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x7c(r5)
    rlwimi r0, r4, 22, 9, 9
    stw r0, 0x7c(r5)
    stb r30, -0x8000(r31)
    lwz r0, 0x7c(r5)
    stw r0, -0x8000(r31)
    bl __GXFlushTextureState
    stb r30, -0x8000(r31)
    oris r0, r29, 0x6800
    stw r0, -0x8000(r31)
    bl __GXFlushTextureState
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80618030(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lwz r31, __GXData
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x5fc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80618030_00000A14
    bl fn_80614510
lbl_fn_80618030_00000A14:
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80618030_00000A24
    bl fn_806148E0
lbl_fn_80618030_00000A24:
    lis r3, 0xcc01
    li r0, 0x40
    stb r0, -0x8000(r3)
    stw r29, -0x8000(r3)
    stw r30, -0x8000(r3)
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806180B0(void)
{
    nofralloc
    lfs f5, 0x0(r3)
    lfs f4, 0x4(r3)
    lfs f0, 0x10(r3)
    fmuls f12, f5, f1
    lfs f5, 0x14(r3)
    fmuls f7, f4, f2
    fmuls f9, f0, f1
    lfs f4, 0x20(r3)
    fmuls f8, f5, f2
    fmuls f5, f4, f1
    lfs f0, 0x24(r3)
    lfs f11, 0x8(r3)
    fmuls f4, f0, f2
    lfs f10, 0x18(r3)
    lfs f6, 0x28(r3)
    fmuls f13, f11, f3
    lfs f11, 0xc(r3)
    fadds f0, f12, f7
    fadds f8, f9, f8
    lfs f7, 0x1c(r3)
    fmuls f10, f10, f3
    fadds f9, f13, f0
    lfs f2, 0x2c(r3)
    fmuls f6, f6, f3
    fadds f3, f5, f4
    lfs f1, lbl_808887F0
    fadds f4, f10, f8
    lfs f0, 0x0(r4)
    fadds f9, f11, f9
    stwu r1, -0x20(r1)
    fadds f8, f7, f4
    fadds f3, f6, f3
    stfs f9, 0x8(r1)
    fcmpu cr0, f1, f0
    stfs f8, 0xc(r1)
    fadds f7, f2, f3
    stfs f7, 0x10(r1)
    bne lbl_fn_806180B0_00000B40
    fneg f1, f7
    lfs f0, lbl_808887F4
    lfs f6, 0x4(r4)
    lfs f5, 0x8(r4)
    fdivs f0, f0, f1
    lfs f4, 0xc(r4)
    lfs f3, 0x10(r4)
    lfs f2, 0x14(r4)
    lfs f1, 0x18(r4)
    fmuls f2, f7, f2
    fmuls f6, f9, f6
    fmuls f5, f7, f5
    fmuls f3, f7, f3
    fmuls f4, f8, f4
    fadds f7, f6, f5
    fadds f10, f1, f2
    fadds f3, f4, f3
    b lbl_fn_806180B0_00000B74
lbl_fn_806180B0_00000B40:
    lfs f2, 0x4(r4)
    lfs f1, 0xc(r4)
    lfs f0, 0x14(r4)
    fmuls f6, f9, f2
    fmuls f4, f8, f1
    lfs f3, 0x10(r4)
    fmuls f2, f7, f0
    lfs f5, 0x8(r4)
    lfs f1, 0x18(r4)
    fadds f7, f5, f6
    fadds f3, f3, f4
    lfs f0, lbl_808887F4
    fadds f10, f1, f2
lbl_fn_806180B0_00000B74:
    lfs f6, 0x8(r5)
    fneg f1, f3
    lfs f5, 0xc(r5)
    fmuls f4, f7, f6
    lfs f9, lbl_808887F8
    fmuls f3, f1, f5
    lfs f2, 0x14(r5)
    lfs f1, 0x10(r5)
    fmuls f8, f6, f9
    fmuls f7, f4, f9
    lfs f6, 0x0(r5)
    fmuls f4, f3, f9
    lfs f3, 0x4(r5)
    fsubs f1, f2, f1
    fmuls f7, f0, f7
    fmuls f4, f0, f4
    fmuls f1, f10, f1
    fadds f6, f6, f7
    fadds f3, f3, f4
    fmuls f5, f5, f9
    fmuls f0, f0, f1
    fadds f4, f8, f6
    fadds f1, f5, f3
    stfs f4, 0x0(r6)
    fadds f0, f2, f0
    stfs f1, 0x0(r7)
    stfs f0, 0x0(r8)
    addi r1, r1, 0x20
    blr
}

asm void fn_80618240(void)
{
    nofralloc
    lis r4, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r4)
    lis r3, 0x6
    addi r0, r3, 0x1020
    lwz r3, __GXData
    stw r0, -0x8000(r4)
    addi r5, r4, -0x8000
    psq_l f2, 0x52c(r3), 0, 0
    psq_l f1, 0x534(r3), 0, 0
    psq_l f0, 0x53c(r3), 0, 0
    psq_st f2, 0x0(r5), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f0, 0x0(r5), 0, 0
    lwz r0, 0x528(r3)
    stw r0, -0x8000(r4)
    blr
}

asm void fn_80618290(void)
{
    nofralloc
    lwz r5, __GXData
    cmpwi r4, 0x1
    lfs f1, 0x0(r3)
    stw r4, 0x528(r5)
    lfs f0, 0x14(r3)
    stfs f1, 0x52c(r5)
    lfs f1, 0x28(r3)
    stfs f0, 0x534(r5)
    lfs f0, 0x2c(r3)
    stfs f1, 0x53c(r5)
    stfs f0, 0x540(r5)
    bne lbl_fn_80618290_00000C84
    lfs f0, 0xc(r3)
    stfs f0, 0x530(r5)
    lfs f0, 0x1c(r3)
    stfs f0, 0x538(r5)
    b lbl_fn_80618290_00000C94
lbl_fn_80618290_00000C84:
    lfs f0, 0x8(r3)
    stfs f0, 0x530(r5)
    lfs f0, 0x18(r3)
    stfs f0, 0x538(r5)
lbl_fn_80618290_00000C94:
    lwz r0, 0x5fc(r5)
    oris r0, r0, 0x800
    stw r0, 0x5fc(r5)
    blr
}

asm void fn_80618300(void)
{
    nofralloc
    lfs f1, lbl_808887F0
    lfs f0, 0x0(r3)
    fcmpu cr0, f1, f0
    bne lbl_fn_80618300_00000CC8
    li r0, 0x0
    b lbl_fn_80618300_00000CCC
lbl_fn_80618300_00000CC8:
    li r0, 0x1
lbl_fn_80618300_00000CCC:
    lwz r4, __GXData
    stw r0, 0x528(r4)
    psq_l f2, 0x4(r3), 0, 0
    psq_l f1, 0xc(r3), 0, 0
    psq_l f0, 0x14(r3), 0, 0
    psq_st f2, 0x52c(r4), 0, 0
    psq_st f1, 0x534(r4), 0, 0
    psq_st f0, 0x53c(r4), 0, 0
    lwz r0, 0x5fc(r4)
    oris r0, r0, 0x800
    stw r0, 0x5fc(r4)
    blr
}

asm void fn_80618350(void)
{
    nofralloc
    lis r5, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r5)
    slwi r0, r4, 2
    oris r0, r0, 0xb
    addi r4, r5, -0x8000
    stw r0, -0x8000(r5)
    psq_l f5, 0x0(r3), 0, 0
    psq_l f4, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f2, 0x18(r3), 0, 0
    psq_l f1, 0x20(r3), 0, 0
    psq_l f0, 0x28(r3), 0, 0
    psq_st f5, 0x0(r4), 0, 0
    psq_st f4, 0x0(r4), 0, 0
    psq_st f3, 0x0(r4), 0, 0
    psq_st f2, 0x0(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f0, 0x0(r4), 0, 0
    blr
}

asm void fn_806183A0(void)
{
    nofralloc
    slwi r0, r4, 2
    lis r5, 0xcc01
    subf r4, r4, r0
    li r0, 0x10
    stb r0, -0x8000(r5)
    addi r4, r4, 0x400
    oris r0, r4, 0x8
    stw r0, -0x8000(r5)
    addi r4, r5, -0x8000
    psq_l f5, 0x0(r3), 0, 0
    lfs f4, 0x8(r3)
    psq_l f3, 0x10(r3), 0, 0
    lfs f2, 0x18(r3)
    psq_l f1, 0x20(r3), 0, 0
    lfs f0, 0x28(r3)
    psq_st f5, 0x0(r4), 0, 0
    stfs f4, -0x8000(r5)
    psq_st f3, 0x0(r4), 0, 0
    stfs f2, -0x8000(r5)
    psq_st f1, 0x0(r4), 0, 0
    stfs f0, -0x8000(r5)
    blr
}

asm void fn_80618400(void)
{
    nofralloc
    lwz r4, __GXData
    lwz r0, 0x80(r4)
    rlwimi r0, r3, 0, 26, 31
    stw r0, 0x80(r4)
    lwz r0, 0x5fc(r4)
    oris r0, r0, 0x400
    stw r0, 0x5fc(r4)
    blr
}

asm void fn_80618420(void)
{
    nofralloc
    cmplwi r4, 0x40
    blt lbl_fn_80618420_00000DE8
    subi r0, r4, 0x40
    slwi r4, r0, 2
    addi r7, r4, 0x500
    b lbl_fn_80618420_00000DEC
lbl_fn_80618420_00000DE8:
    slwi r7, r4, 2
lbl_fn_80618420_00000DEC:
    cmpwi r5, 0x1
    bne lbl_fn_80618420_00000DFC
    li r6, 0x8
    b lbl_fn_80618420_00000E00
lbl_fn_80618420_00000DFC:
    li r6, 0xc
lbl_fn_80618420_00000E00:
    lis r4, 0xcc01
    subi r6, r6, 0x1
    li r0, 0x10
    stb r0, -0x8000(r4)
    slwi r0, r6, 16
    cmpwi r5, 0x0
    or r0, r7, r0
    stw r0, -0x8000(r4)
    bne lbl_fn_80618420_00000E5C
    addi r4, r4, -0x8000
    psq_l f5, 0x0(r3), 0, 0
    psq_l f4, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f2, 0x18(r3), 0, 0
    psq_l f1, 0x20(r3), 0, 0
    psq_l f0, 0x28(r3), 0, 0
    psq_st f5, 0x0(r4), 0, 0
    psq_st f4, 0x0(r4), 0, 0
    psq_st f3, 0x0(r4), 0, 0
    psq_st f2, 0x0(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f0, 0x0(r4), 0, 0
    blr
lbl_fn_80618420_00000E5C:
    addi r4, r4, -0x8000
    psq_l f3, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f1, 0x10(r3), 0, 0
    psq_l f0, 0x18(r3), 0, 0
    psq_st f3, 0x0(r4), 0, 0
    psq_st f2, 0x0(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f0, 0x0(r4), 0, 0
    blr
}

asm void fn_806184E0(void)
{
    nofralloc
    lwz r6, __GXData
    lis r3, 0x5
    lfs f7, lbl_808887F8
    lis r4, 0xcc01
    lfs f1, 0x550(r6)
    li r5, 0x10
    lfs f2, 0x54c(r6)
    addi r0, r3, 0x101a
    fneg f0, f1
    lfs f6, 0x544(r6)
    fmuls f8, f2, f7
    lfs f4, 0x548(r6)
    fmuls f5, f1, f7
    lfs f3, 0x554(r6)
    lfs f2, 0x560(r6)
    fmuls f7, f0, f7
    lfs f1, 0x558(r6)
    lfs f0, 0x55c(r6)
    fmuls f9, f3, f2
    fmuls f10, f1, f2
    lfs f2, lbl_808887FC
    stb r5, -0x8000(r4)
    fadds f1, f4, f5
    fadds f3, f6, f8
    stw r0, -0x8000(r4)
    fsubs f4, f10, f9
    stfs f8, -0x8000(r4)
    fadds f3, f2, f3
    fadds f1, f2, f1
    stfs f7, -0x8000(r4)
    fadds f0, f10, f0
    stfs f4, -0x8000(r4)
    stfs f3, -0x8000(r4)
    stfs f1, -0x8000(r4)
    stfs f0, -0x8000(r4)
    blr
}

asm void fn_80618570(void)
{
    nofralloc
    lwz r3, __GXData
    stfs f1, 0x544(r3)
    stfs f2, 0x548(r3)
    stfs f3, 0x54c(r3)
    stfs f4, 0x550(r3)
    stfs f5, 0x554(r3)
    stfs f6, 0x558(r3)
    lwz r0, 0x5fc(r3)
    oris r0, r0, 0x1000
    stw r0, 0x5fc(r3)
    blr
}

asm void fn_806185A0(void)
{
    nofralloc
    lwz r4, __GXData
    psq_l f2, 0x544(r4), 0, 0
    psq_l f1, 0x54c(r4), 0, 0
    psq_l f0, 0x554(r4), 0, 0
    psq_st f2, 0x0(r3), 0, 0
    psq_st f1, 0x8(r3), 0, 0
    psq_st f0, 0x10(r3), 0, 0
    blr
}

asm void fn_806185C0(void)
{
    nofralloc
    lwz r8, __GXData
    addi r4, r4, 0x156
    addi r9, r3, 0x156
    lis r7, 0xcc01
    lwz r0, 0x148(r8)
    rlwimi r0, r4, 0, 21, 31
    rlwimi r0, r9, 12, 9, 19
    stw r0, 0x148(r8)
    add r6, r4, r6
    add r3, r9, r5
    subi r0, r6, 0x1
    lwz r5, 0x14c(r8)
    rlwimi r5, r0, 0, 21, 31
    subi r3, r3, 0x1
    rlwimi r5, r3, 12, 9, 19
    stw r5, 0x14c(r8)
    li r4, 0x61
    li r0, 0x0
    stb r4, -0x8000(r7)
    lwz r3, 0x148(r8)
    stw r3, -0x8000(r7)
    stb r4, -0x8000(r7)
    lwz r3, 0x14c(r8)
    stw r3, -0x8000(r7)
    sth r0, 0x2(r8)
    blr
}

asm void fn_80618630(void)
{
    nofralloc
    lis r5, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r5)
    addi r0, r4, 0x156
    addi r3, r3, 0x156
    li r4, 0x59
    li r6, 0x0
    rlwimi r6, r3, 31, 22, 31
    lwz r3, __GXData
    rlwimi r6, r0, 9, 12, 21
    li r0, 0x0
    rlwimi r6, r4, 24, 0, 7
    stw r6, -0x8000(r5)
    sth r0, 0x2(r3)
    blr
}

asm void fn_80618670(void)
{
    nofralloc
    lis r6, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r6)
    li r5, 0x1005
    lwz r4, __GXData
    li r0, 0x1
    stw r5, -0x8000(r6)
    stw r3, -0x8000(r6)
    sth r0, 0x2(r4)
    blr
}

asm void fn_806186A0(void)
{
    nofralloc
    cmpwi r3, 0x5
    bge lbl_fn_806186A0_00001094
    lis r5, 0xcc01
    li r0, 0x8
    stb r0, -0x8000(r5)
    li r0, 0x30
    lwz r6, __GXData
    li r3, 0x10
    stb r0, -0x8000(r5)
    li r0, 0x1018
    lwz r4, 0x80(r6)
    stw r4, -0x8000(r5)
    stb r3, -0x8000(r5)
    stw r0, -0x8000(r5)
    lwz r0, 0x80(r6)
    stw r0, -0x8000(r5)
    b lbl_fn_806186A0_000010CC
lbl_fn_806186A0_00001094:
    lis r5, 0xcc01
    li r0, 0x8
    stb r0, -0x8000(r5)
    li r0, 0x40
    lwz r6, __GXData
    li r3, 0x10
    stb r0, -0x8000(r5)
    li r0, 0x1019
    lwz r4, 0x84(r6)
    stw r4, -0x8000(r5)
    stb r3, -0x8000(r5)
    stw r0, -0x8000(r5)
    lwz r0, 0x84(r6)
    stw r0, -0x8000(r5)
lbl_fn_806186A0_000010CC:
    li r0, 0x1
    sth r0, 0x2(r6)
    blr
}

asm void fn_80618730(void)
{
    nofralloc
    lwz r5, __GXData
    lwz r6, 0x5ec(r5)
    subi r0, r6, 0xb
    cmplwi r0, 0xf
    ble lbl_fn_80618730_00001130
    cmplwi r6, 0xa
    ble lbl_fn_80618730_00001110
    subi r0, r6, 0x1b
    cmplwi r0, 0x6
    ble lbl_fn_80618730_00001148
    cmpwi r6, 0x22
    bne lbl_fn_80618730_0000115C
lbl_fn_80618730_00001110:
    lis r7, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r7)
    li r6, 0x1006
    li r0, 0x0
    stw r6, -0x8000(r7)
    stw r0, -0x8000(r7)
    b lbl_fn_80618730_0000115C
lbl_fn_80618730_00001130:
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r0, 0x2300
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_0000115C
lbl_fn_80618730_00001148:
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r0, 0x2400
    stw r0, -0x8000(r6)
lbl_fn_80618730_0000115C:
    lwz r6, 0x5f0(r5)
    cmplwi r6, 0x8
    ble lbl_fn_80618730_00001188
    subi r0, r6, 0x9
    cmplwi r0, 0x7
    ble lbl_fn_80618730_000011A0
    subi r0, r6, 0x11
    cmplwi r0, 0x3
    ble lbl_fn_80618730_000011CC
    cmpwi r6, 0x15
    bne lbl_fn_80618730_000011D8
lbl_fn_80618730_00001188:
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r0, 0x6700
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000011D8
lbl_fn_80618730_000011A0:
    lwz r8, 0x5f4(r5)
    lis r6, 0xcc01
    li r7, 0x8
    li r0, 0x20
    rlwinm r8, r8, 0, 28, 23
    stw r8, 0x5f4(r5)
    stb r7, -0x8000(r6)
    stb r0, -0x8000(r6)
    lwz r0, 0x5f4(r5)
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000011D8
lbl_fn_80618730_000011CC:
    lwz r6, __cpReg
    li r0, 0x0
    sth r0, 0x6(r6)
lbl_fn_80618730_000011D8:
    cmplwi r3, 0x22
    stw r3, 0x5ec(r5)
    bgt lbl_fn_80618730_000015FC
    lis r6, jumptable_807B0EB0@ha
    slwi r0, r3, 2
    addi r6, r6, jumptable_807B0EB0@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    lis r6, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r6)
    li r3, 0x1006
    li r0, 0x273
    stw r3, -0x8000(r6)
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r6)
    li r3, 0x1006
    li r0, 0x14a
    stw r3, -0x8000(r6)
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r6)
    li r3, 0x1006
    li r0, 0x16b
    stw r3, -0x8000(r6)
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r6)
    li r3, 0x1006
    li r0, 0x84
    stw r3, -0x8000(r6)
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r6)
    li r3, 0x1006
    li r0, 0xc6
    stw r3, -0x8000(r6)
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r6)
    li r3, 0x1006
    li r0, 0x210
    stw r3, -0x8000(r6)
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r6)
    li r3, 0x1006
    li r0, 0x252
    stw r3, -0x8000(r6)
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r6)
    li r3, 0x1006
    li r0, 0x231
    stw r3, -0x8000(r6)
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r6)
    li r3, 0x1006
    li r0, 0x1ad
    stw r3, -0x8000(r6)
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r6)
    li r3, 0x1006
    li r0, 0x1ce
    stw r3, -0x8000(r6)
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r6)
    li r3, 0x1006
    li r0, 0x21
    stw r3, -0x8000(r6)
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r6)
    li r3, 0x1006
    li r0, 0x153
    stw r3, -0x8000(r6)
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r3, 0x2301
    subi r0, r3, 0x5181
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r3, 0x2301
    subi r0, r3, 0x7181
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r3, 0x2301
    subi r0, r3, 0x6181
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r3, 0x2300
    addi r0, r3, 0x1e7f
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r3, 0x2301
    subi r0, r3, 0x53c1
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r3, 0x2301
    subi r0, r3, 0x5381
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r3, 0x2301
    subi r0, r3, 0x5341
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r3, 0x2301
    subi r0, r3, 0x5301
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r3, 0x2301
    subi r0, r3, 0x52c1
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r3, 0x2301
    subi r0, r3, 0x5281
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r3, 0x2301
    subi r0, r3, 0x5241
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r3, 0x2301
    subi r0, r3, 0x5201
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r3, 0x2301
    subi r0, r3, 0x51c1
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r3, 0x2301
    subi r0, r3, 0x5d81
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r3, 0x2301
    subi r0, r3, 0x5981
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r3, 0x2301
    subi r0, r3, 0x5581
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r3, 0x2403
    subi r0, r3, 0x3f3a
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r3, 0x2403
    subi r0, r3, 0x3e95
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r3, 0x2403
    subi r0, r3, 0x3f19
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r3, 0x2403
    subi r0, r3, 0x3ef8
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r3, 0x2403
    subi r0, r3, 0x3ed7
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r3, 0x2403
    subi r0, r3, 0x3eb6
    stw r0, -0x8000(r6)
    b lbl_fn_80618730_000015FC
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r3, 0x2403
    subi r0, r3, 0x3e53
    stw r0, -0x8000(r6)
lbl_fn_80618730_000015FC:
    cmplwi r4, 0x15
    stw r4, 0x5f0(r5)
    bgt lbl_fn_80618730_000018F0
    lis r3, jumptable_807B0E58@ha
    slwi r0, r4, 2
    addi r3, r3, jumptable_807B0E58@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    lis r3, 0x6700
    addi r0, r3, 0x42
    stw r0, -0x8000(r4)
    b lbl_fn_80618730_000018F0
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    lis r3, 0x6700
    addi r0, r3, 0x84
    stw r0, -0x8000(r4)
    b lbl_fn_80618730_000018F0
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    lis r3, 0x6700
    addi r0, r3, 0x63
    stw r0, -0x8000(r4)
    b lbl_fn_80618730_000018F0
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    lis r3, 0x6700
    addi r0, r3, 0x129
    stw r0, -0x8000(r4)
    b lbl_fn_80618730_000018F0
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    lis r3, 0x6700
    addi r0, r3, 0x252
    stw r0, -0x8000(r4)
    b lbl_fn_80618730_000018F0
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    lis r3, 0x6700
    addi r0, r3, 0x21
    stw r0, -0x8000(r4)
    b lbl_fn_80618730_000018F0
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    lis r3, 0x6700
    addi r0, r3, 0x14b
    stw r0, -0x8000(r4)
    b lbl_fn_80618730_000018F0
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    lis r3, 0x6700
    addi r0, r3, 0x18d
    stw r0, -0x8000(r4)
    b lbl_fn_80618730_000018F0
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    lis r3, 0x6700
    addi r0, r3, 0x1cf
    stw r0, -0x8000(r4)
    b lbl_fn_80618730_000018F0
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    lis r3, 0x6700
    addi r0, r3, 0x211
    stw r0, -0x8000(r4)
    b lbl_fn_80618730_000018F0
    lwz r3, 0x5f4(r5)
    li r0, 0x2
    rlwimi r3, r0, 4, 24, 27
    stw r3, 0x5f4(r5)
    lis r3, 0xcc01
    li r0, 0x8
    stb r0, -0x8000(r3)
    li r0, 0x20
    stb r0, -0x8000(r3)
    lwz r0, 0x5f4(r5)
    stw r0, -0x8000(r3)
    b lbl_fn_80618730_000018F0
    lwz r3, 0x5f4(r5)
    li r0, 0x3
    rlwimi r3, r0, 4, 24, 27
    stw r3, 0x5f4(r5)
    lis r3, 0xcc01
    li r0, 0x8
    stb r0, -0x8000(r3)
    li r0, 0x20
    stb r0, -0x8000(r3)
    lwz r0, 0x5f4(r5)
    stw r0, -0x8000(r3)
    b lbl_fn_80618730_000018F0
    lwz r3, 0x5f4(r5)
    li r0, 0x4
    rlwimi r3, r0, 4, 24, 27
    stw r3, 0x5f4(r5)
    lis r3, 0xcc01
    li r0, 0x8
    stb r0, -0x8000(r3)
    li r0, 0x20
    stb r0, -0x8000(r3)
    lwz r0, 0x5f4(r5)
    stw r0, -0x8000(r3)
    b lbl_fn_80618730_000018F0
    lwz r3, 0x5f4(r5)
    li r0, 0x5
    rlwimi r3, r0, 4, 24, 27
    stw r3, 0x5f4(r5)
    lis r3, 0xcc01
    li r0, 0x8
    stb r0, -0x8000(r3)
    li r0, 0x20
    stb r0, -0x8000(r3)
    lwz r0, 0x5f4(r5)
    stw r0, -0x8000(r3)
    b lbl_fn_80618730_000018F0
    lwz r3, 0x5f4(r5)
    li r0, 0x6
    rlwimi r3, r0, 4, 24, 27
    stw r3, 0x5f4(r5)
    lis r3, 0xcc01
    li r0, 0x8
    stb r0, -0x8000(r3)
    li r0, 0x20
    stb r0, -0x8000(r3)
    lwz r0, 0x5f4(r5)
    stw r0, -0x8000(r3)
    b lbl_fn_80618730_000018F0
    lwz r3, 0x5f4(r5)
    li r0, 0x7
    rlwimi r3, r0, 4, 24, 27
    stw r3, 0x5f4(r5)
    lis r3, 0xcc01
    li r0, 0x8
    stb r0, -0x8000(r3)
    li r0, 0x20
    stb r0, -0x8000(r3)
    lwz r0, 0x5f4(r5)
    stw r0, -0x8000(r3)
    b lbl_fn_80618730_000018F0
    lwz r3, 0x5f4(r5)
    li r0, 0x9
    rlwimi r3, r0, 4, 24, 27
    stw r3, 0x5f4(r5)
    lis r3, 0xcc01
    li r0, 0x8
    stb r0, -0x8000(r3)
    li r0, 0x20
    stb r0, -0x8000(r3)
    lwz r0, 0x5f4(r5)
    stw r0, -0x8000(r3)
    b lbl_fn_80618730_000018F0
    li r4, 0x8
    lwz r0, 0x5f4(r5)
    rlwimi r0, r4, 4, 24, 27
    stw r0, 0x5f4(r5)
    lis r3, 0xcc01
    stb r4, -0x8000(r3)
    li r0, 0x20
    stb r0, -0x8000(r3)
    lwz r0, 0x5f4(r5)
    stw r0, -0x8000(r3)
    b lbl_fn_80618730_000018F0
    lwz r3, __cpReg
    li r0, 0x2
    sth r0, 0x6(r3)
    b lbl_fn_80618730_000018F0
    lwz r3, __cpReg
    li r0, 0x3
    sth r0, 0x6(r3)
    b lbl_fn_80618730_000018F0
    lwz r3, __cpReg
    li r0, 0x4
    sth r0, 0x6(r3)
    b lbl_fn_80618730_000018F0
    lwz r3, __cpReg
    li r0, 0x5
    sth r0, 0x6(r3)
lbl_fn_80618730_000018F0:
    li r0, 0x0
    sth r0, 0x2(r5)
    blr
}

asm void fn_80618F50(void)
{
    nofralloc
    lwz r3, __cpReg
    li r0, 0x4
    sth r0, 0x4(r3)
    blr
}
