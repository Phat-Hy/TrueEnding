#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _savegpr_14(void);
extern void dtor_80084684(void);
extern void fn_8000D430(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087E9C(void);
extern void fn_8008937C(void);
extern void fn_80129A6C(void);
extern void fn_8012C6D4(void);
extern void fn_8012D180(void);
extern void fn_8012D628(void);
extern void fn_8012D714(void);
extern void fn_8020FCE8(void);
extern void fn_80219558(void);
extern void fn_80370174(void);
extern void fn_80375B78(void);
extern void fn_8068AEB0(void);

/* External data declarations */
extern u8 lbl_80737200[];
extern u8 lbl_80737340[];
extern u8 lbl_80737348[];
extern u8 lbl_8077A6E8[];
extern u8 lbl_8077A708[];

/* Small data declarations */
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_808818A8;
extern u32 lbl_808818B8;
extern u32 lbl_808818D0;
extern u32 lbl_808818F8;
extern u32 lbl_808818FC;
extern u32 lbl_80881900;
extern u32 lbl_80881904;
extern u32 lbl_80881908;
extern u32 lbl_8088190C;
extern u32 lbl_80881910;
extern u32 lbl_80881914;
extern u32 lbl_80881918;
extern u32 lbl_8088191C;

/* Function declarations */
void fn_8012ABD0(void);
void fn_8012ABF4(void);
void fn_8012AC18(void);
void fn_8012AC40(void);
void fn_8012AC64(void);
void fn_8012AD20(void);
void fn_8012AE50(void);
void fn_8012AFE8(void);
void fn_8012B028(void);
void fn_8012B0B0(void);
void fn_8012B3A8(void);
void fn_8012B3E8(void);
void fn_8012B988(void);

asm void fn_8012ABD0(void)
{
    nofralloc
    fmr f0, f1
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    li r0, 0x3
    psq_st f1, 0x54(r3), 0, 0
    stfs f2, 0x5c(r3)
    stw r0, 0x4c(r3)
    stfs f0, 0x38(r3)
    blr
}

asm void fn_8012ABF4(void)
{
    nofralloc
    fmr f0, f1
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    li r0, 0x2
    psq_st f1, 0x54(r3), 0, 0
    stfs f2, 0x5c(r3)
    stw r0, 0x4c(r3)
    stfs f0, 0x78(r3)
    blr
}

asm void fn_8012AC18(void)
{
    nofralloc
    fmr f0, f1
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    li r0, 0x1
    stw r4, 0x50(r3)
    psq_st f1, 0x54(r3), 0, 0
    stfs f2, 0x5c(r3)
    stw r0, 0x4c(r3)
    stfs f0, 0x78(r3)
    blr
}

asm void fn_8012AC40(void)
{
    nofralloc
    lfs f0, lbl_808818A8
    li r0, 0x0
    stw r0, 0x50(r3)
    stfs f0, 0x54(r3)
    stfs f0, 0x58(r3)
    stfs f0, 0x5c(r3)
    stw r0, 0x4c(r3)
    stfs f1, 0x78(r3)
    blr
}

asm void fn_8012AC64(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lfs f0, lbl_808818B8
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r3
    lfs f31, 0x38(r3)
    lfs f30, 0x78(r3)
    stfs f0, 0x38(r3)
    stfs f0, 0x78(r3)
    bl fn_80129A6C
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    lwz r3, 0x0(r31)
    addi r3, r3, 0xb0
    bl fn_8000D430
    addic. r3, r1, 0x8
    beq lbl_fn_8012AC64_00000124
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8012AC64_00000124
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8012AC64_0000011C
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8012AC64_0000011C:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_8012AC64_00000124:
    stfs f31, 0x38(r31)
    stfs f30, 0x78(r31)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8012AD20(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_80737200@ha
    addi r30, r30, lbl_80737200@l
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    mr r3, r4
    addi r4, r30, 0x23
    bl fn_8008937C
    lis r31, fn_8012AC64@ha
    mr r29, r3
    mr r10, r28
    addi r4, r30, 0x29
    addi r5, r28, 0x4
    addi r9, r31, fn_8012AC64@l
    li r6, 0x0
    li r7, 0x3
    li r8, 0x1
    bl fn_800874C8
    lfs f1, lbl_808818F8
    mr r3, r29
    lfs f2, lbl_808818FC
    mr r7, r28
    lfs f3, lbl_808818B8
    addi r4, r30, 0x2e
    addi r5, r28, 0xc
    addi r6, r31, fn_8012AC64@l
    bl fn_80087E9C
    lfs f1, lbl_808818A8
    mr r3, r29
    lfs f2, lbl_808818B8
    addi r4, r30, 0x35
    lfs f3, lbl_808818D0
    addi r5, r28, 0x38
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r29
    mr r10, r28
    addi r4, r30, 0x3b
    addi r5, r28, 0x4c
    addi r9, r31, fn_8012AC64@l
    li r6, 0x0
    li r7, 0x3
    li r8, 0x1
    bl fn_800874C8
    lfs f1, lbl_808818F8
    mr r3, r29
    lfs f2, lbl_808818FC
    mr r7, r28
    lfs f3, lbl_808818B8
    addi r4, r30, 0x43
    addi r5, r28, 0x54
    addi r6, r31, fn_8012AC64@l
    bl fn_80087E9C
    lfs f1, lbl_808818A8
    mr r3, r29
    lfs f2, lbl_808818B8
    addi r4, r30, 0x4d
    lfs f3, lbl_808818D0
    addi r5, r28, 0x78
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8012AE50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8077A708@ha
    lfs f1, lbl_80881900
    stw r0, 0x14(r1)
    li r6, 0x0
    lfs f0, lbl_80881904
    li r0, 0x1
    stw r31, 0xc(r1)
    addi r4, r4, lbl_8077A708@l
    mr r31, r3
    li r5, 0x7c
    stw r4, 0x0(r3)
    li r4, 0x0
    stfs f1, 0x28(r3)
    stfs f1, 0x2c(r3)
    stfs f1, 0x30(r3)
    stfs f1, 0x34(r3)
    stfs f0, 0x38(r3)
    stfs f0, 0x3c(r3)
    stfs f1, 0x40(r3)
    stfs f1, 0x44(r3)
    stw r6, 0x48(r3)
    stw r6, 0x4c(r3)
    stfs f1, 0x50(r3)
    stfs f1, 0x54(r3)
    stw r6, 0x58(r3)
    stw r6, 0x5c(r3)
    stfs f1, 0x60(r3)
    stfs f1, 0x7c(r3)
    stfs f1, 0x64(r3)
    stfs f1, 0x80(r3)
    stfs f1, 0x68(r3)
    stfs f1, 0x84(r3)
    stfs f1, 0x6c(r3)
    stfs f1, 0x88(r3)
    stfs f1, 0x70(r3)
    stfs f1, 0x8c(r3)
    stfs f1, 0x74(r3)
    stfs f1, 0x90(r3)
    stfs f1, 0x78(r3)
    stfs f1, 0x94(r3)
    stw r0, 0xa0(r3)
    stw r6, 0xa4(r3)
    stw r6, 0xa8(r3)
    stw r6, 0xac(r3)
    stw r6, 0xb0(r3)
    stfs f1, 0xb4(r3)
    stfs f1, 0xb8(r3)
    stw r6, 0xbc(r3)
    stw r6, 0xc0(r3)
    stw r6, 0xc4(r3)
    stfs f1, 0xe8(r3)
    stfs f1, 0xec(r3)
    stfs f1, 0xf0(r3)
    stfs f1, 0xf4(r3)
    stfs f0, 0xf8(r3)
    stfs f0, 0xfc(r3)
    stfs f1, 0x100(r3)
    stfs f1, 0x104(r3)
    stw r6, 0x108(r3)
    stw r6, 0x10c(r3)
    stfs f1, 0x110(r3)
    stfs f1, 0x114(r3)
    stw r6, 0x118(r3)
    stw r6, 0x11c(r3)
    stfs f1, 0x120(r3)
    stfs f1, 0x13c(r3)
    stfs f1, 0x124(r3)
    stfs f1, 0x140(r3)
    stfs f1, 0x128(r3)
    stfs f1, 0x144(r3)
    stfs f1, 0x12c(r3)
    stfs f1, 0x148(r3)
    stfs f1, 0x130(r3)
    stfs f1, 0x14c(r3)
    stfs f1, 0x134(r3)
    stfs f1, 0x150(r3)
    stfs f1, 0x138(r3)
    stfs f1, 0x154(r3)
    stw r0, 0x160(r3)
    stw r6, 0x164(r3)
    stw r6, 0x168(r3)
    stw r6, 0x16c(r3)
    stw r6, 0x170(r3)
    stfs f1, 0x174(r3)
    stfs f1, 0x178(r3)
    stw r6, 0x17c(r3)
    stw r6, 0x180(r3)
    stw r6, 0x184(r3)
    addi r3, r3, 0x1a8
    bl memset
    mr r3, r31
    li r4, 0x0
    li r5, 0x240
    bl memset
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8012AFE8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8012AFE8_00000440
    cmpwi r4, 0x0
    ble lbl_fn_8012AFE8_00000440
    bl dtor_80084684
lbl_fn_8012AFE8_00000440:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8012B028(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x45
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r4, 0xa0(r3)
    cmpwi r4, 0x45
    bgt lbl_fn_8012B028_00000480
    mr r0, r4
lbl_fn_8012B028_00000480:
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lis r4, lbl_80737348@ha
    lfd f1, lbl_80737348@l(r4)
    lis r3, lbl_80737340@ha
    stw r0, 0x8(r1)
    lfd f2, lbl_80737340@l(r3)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    bl fn_8068AEB0
    frsp f1, f1
    lfs f0, lbl_80881908
    lwz r0, 0x1ac(r31)
    lwz r31, 0x1c(r1)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    subf r3, r0, r3
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8012B0B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_8077A708@ha
    lfs f1, lbl_80881900
    stw r0, 0x24(r1)
    li r0, 0x1
    lfs f0, lbl_80881904
    addi r4, r4, lbl_8077A708@l
    stw r31, 0x1c(r1)
    mr r31, r3
    li r5, 0x7c
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    stw r4, 0x0(r3)
    li r4, 0x0
    stfs f1, 0x28(r3)
    stfs f1, 0x2c(r3)
    stfs f1, 0x30(r3)
    stfs f1, 0x34(r3)
    stfs f0, 0x38(r3)
    stfs f0, 0x3c(r3)
    stfs f1, 0x40(r3)
    stfs f1, 0x44(r3)
    stw r30, 0x48(r3)
    stw r30, 0x4c(r3)
    stfs f1, 0x50(r3)
    stfs f1, 0x54(r3)
    stw r30, 0x58(r3)
    stw r30, 0x5c(r3)
    stfs f1, 0x60(r3)
    stfs f1, 0x7c(r3)
    stfs f1, 0x64(r3)
    stfs f1, 0x80(r3)
    stfs f1, 0x68(r3)
    stfs f1, 0x84(r3)
    stfs f1, 0x6c(r3)
    stfs f1, 0x88(r3)
    stfs f1, 0x70(r3)
    stfs f1, 0x8c(r3)
    stfs f1, 0x74(r3)
    stfs f1, 0x90(r3)
    stfs f1, 0x78(r3)
    stfs f1, 0x94(r3)
    stw r0, 0xa0(r3)
    stw r30, 0xa4(r3)
    stw r30, 0xa8(r3)
    stw r30, 0xac(r3)
    stw r30, 0xb0(r3)
    stfs f1, 0xb4(r3)
    stfs f1, 0xb8(r3)
    stw r30, 0xbc(r3)
    stw r30, 0xc0(r3)
    stw r30, 0xc4(r3)
    stfs f1, 0xe8(r3)
    stfs f1, 0xec(r3)
    stfs f1, 0xf0(r3)
    stfs f1, 0xf4(r3)
    stfs f0, 0xf8(r3)
    stfs f0, 0xfc(r3)
    stfs f1, 0x100(r3)
    stfs f1, 0x104(r3)
    stw r30, 0x108(r3)
    stw r30, 0x10c(r3)
    stfs f1, 0x110(r3)
    stfs f1, 0x114(r3)
    stw r30, 0x118(r3)
    stw r30, 0x11c(r3)
    stfs f1, 0x120(r3)
    stfs f1, 0x13c(r3)
    stfs f1, 0x124(r3)
    stfs f1, 0x140(r3)
    stfs f1, 0x128(r3)
    stfs f1, 0x144(r3)
    stfs f1, 0x12c(r3)
    stfs f1, 0x148(r3)
    stfs f1, 0x130(r3)
    stfs f1, 0x14c(r3)
    stfs f1, 0x134(r3)
    stfs f1, 0x150(r3)
    stfs f1, 0x138(r3)
    stfs f1, 0x154(r3)
    stw r0, 0x160(r3)
    stw r30, 0x164(r3)
    stw r30, 0x168(r3)
    stw r30, 0x16c(r3)
    stw r30, 0x170(r3)
    stfs f1, 0x174(r3)
    stfs f1, 0x178(r3)
    stw r30, 0x17c(r3)
    stw r30, 0x180(r3)
    stw r30, 0x184(r3)
    addi r3, r3, 0x1a8
    bl memset
    mr r3, r31
    li r4, 0x0
    li r5, 0x240
    bl memset
    lis r3, lbl_8077A6E8@ha
    stw r30, 0x240(r31)
    addi r3, r3, lbl_8077A6E8@l
    addi r29, r31, 0x2d0
    stw r3, 0x0(r31)
    addi r28, r31, 0x2f0
    stw r30, 0x248(r31)
    stw r30, 0x2cc(r31)
lbl_fn_8012B0B0_0000068C:
    mr r3, r29
    li r4, 0x0
    li r5, 0x8
    bl memset
    addi r29, r29, 0x8
    cmplw r29, r28
    blt lbl_fn_8012B0B0_0000068C
    addi r5, r31, 0x31c
    addi r3, r31, 0x380
    lfs f1, lbl_80881900
    cmplw r5, r3
    li r4, 0x0
    lfs f0, lbl_80881904
    stw r4, 0x2f0(r31)
    stfs f1, 0x2f4(r31)
    stfs f1, 0x2f8(r31)
    stfs f0, 0x2fc(r31)
    stw r4, 0x300(r31)
    stw r4, 0x304(r31)
    stw r4, 0x308(r31)
    stw r4, 0x30c(r31)
    stw r4, 0x310(r31)
    stw r4, 0x314(r31)
    stw r4, 0x318(r31)
    bge lbl_fn_8012B0B0_00000724
    addi r3, r3, 0x13
    li r0, 0x14
    subf r3, r5, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_8012B0B0_00000724
lbl_fn_8012B0B0_00000708:
    stw r4, 0x0(r5)
    stw r4, 0x4(r5)
    stw r4, 0x8(r5)
    stw r4, 0xc(r5)
    stw r4, 0x10(r5)
    addi r5, r5, 0x14
    bdnz lbl_fn_8012B0B0_00000708
lbl_fn_8012B0B0_00000724:
    addi r6, r31, 0x398
    addi r3, r31, 0x424
    cmplw r6, r3
    li r5, 0x0
    li r4, -0x1
    stw r5, 0x380(r31)
    stw r5, 0x384(r31)
    stw r5, 0x388(r31)
    stw r5, 0x38c(r31)
    stw r4, 0x390(r31)
    stw r5, 0x394(r31)
    bge lbl_fn_8012B0B0_00000788
    addi r3, r3, 0x13
    li r0, 0x14
    subf r3, r6, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_8012B0B0_00000788
lbl_fn_8012B0B0_0000076C:
    stw r5, 0x0(r6)
    stw r5, 0x4(r6)
    stw r5, 0x8(r6)
    stw r4, 0xc(r6)
    stw r5, 0x10(r6)
    addi r6, r6, 0x14
    bdnz lbl_fn_8012B0B0_0000076C
lbl_fn_8012B0B0_00000788:
    lfs f0, lbl_80881900
    li r0, 0x0
    stfs f0, 0x428(r31)
    addi r3, r31, 0x24c
    li r4, 0x0
    li r5, 0x80
    stfs f0, 0x42c(r31)
    stw r0, 0x430(r31)
    stfs f0, 0x434(r31)
    stfs f0, 0x438(r31)
    bl memset
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8012B3A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8012B3A8_00000800
    cmpwi r4, 0x0
    ble lbl_fn_8012B3A8_00000800
    bl dtor_80084684
lbl_fn_8012B3A8_00000800:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8012B3E8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    lis r0, 0x4330
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    mr r28, r3
    lwz r4, 0x2f0(r3)
    stw r0, 0x8(r1)
    cmpwi r4, 0x0
    stw r0, 0x10(r1)
    beq lbl_fn_8012B3E8_00000D98
    lwz r5, 0x5c(r4)
    cmpwi r5, 0x0
    bne lbl_fn_8012B3E8_00000860
    b lbl_fn_8012B3E8_00000D98
lbl_fn_8012B3E8_00000860:
    lfs f0, 0x0(r5)
    stfs f0, 0x28(r3)
    lfs f0, 0x4(r5)
    stfs f0, 0x2c(r3)
    lfs f0, 0x8(r5)
    stfs f0, 0x30(r3)
    lfs f0, 0xc(r5)
    stfs f0, 0x34(r3)
    lfs f0, 0x10(r5)
    stfs f0, 0x38(r3)
    lfs f0, 0x14(r5)
    stfs f0, 0x3c(r3)
    lfs f0, 0x18(r5)
    stfs f0, 0x40(r3)
    lfs f0, 0x1c(r5)
    stfs f0, 0x44(r3)
    lwz r0, 0x20(r5)
    stw r0, 0x48(r3)
    lwz r0, 0x24(r5)
    stw r0, 0x4c(r3)
    lfs f0, 0x28(r5)
    stfs f0, 0x50(r3)
    lfs f0, 0x2c(r5)
    stfs f0, 0x54(r3)
    lwz r0, 0x30(r5)
    stw r0, 0x58(r3)
    lwz r0, 0x34(r5)
    stw r0, 0x5c(r3)
    lwz r6, 0x38(r5)
    lwz r0, 0x3c(r5)
    stw r0, 0x64(r3)
    stw r6, 0x60(r3)
    lwz r6, 0x40(r5)
    lwz r0, 0x44(r5)
    stw r0, 0x6c(r3)
    stw r6, 0x68(r3)
    lwz r6, 0x48(r5)
    lwz r0, 0x4c(r5)
    stw r0, 0x74(r3)
    stw r6, 0x70(r3)
    lwz r0, 0x50(r5)
    stw r0, 0x78(r3)
    lwz r6, 0x54(r5)
    lwz r0, 0x58(r5)
    stw r0, 0x80(r3)
    stw r6, 0x7c(r3)
    lwz r6, 0x5c(r5)
    lwz r0, 0x60(r5)
    stw r0, 0x88(r3)
    stw r6, 0x84(r3)
    lwz r6, 0x64(r5)
    lwz r0, 0x68(r5)
    stw r0, 0x90(r3)
    stw r6, 0x8c(r3)
    lwz r0, 0x6c(r5)
    stw r0, 0x94(r3)
    lwz r6, 0x70(r5)
    lwz r0, 0x74(r5)
    stw r0, 0x9c(r3)
    stw r6, 0x98(r3)
    lwz r0, 0x78(r5)
    stw r0, 0xa0(r3)
    lwz r0, 0x7c(r5)
    stw r0, 0xa4(r3)
    lwz r0, 0x80(r5)
    stw r0, 0xa8(r3)
    lwz r0, 0x84(r5)
    stw r0, 0xac(r3)
    lwz r0, 0x88(r5)
    stw r0, 0xb0(r3)
    lfs f0, 0x8c(r5)
    stfs f0, 0xb4(r3)
    lfs f0, 0x90(r5)
    stfs f0, 0xb8(r3)
    lwz r0, 0x94(r5)
    stw r0, 0xbc(r3)
    lwz r0, 0x98(r5)
    stw r0, 0xc0(r3)
    lwz r7, 0x9c(r5)
    stw r7, 0xc4(r3)
    lwz r6, 0xa0(r5)
    lwz r0, 0xa4(r5)
    stw r0, 0xcc(r3)
    stw r6, 0xc8(r3)
    lwz r6, 0xa8(r5)
    lwz r0, 0xac(r5)
    stw r0, 0xd4(r3)
    stw r6, 0xd0(r3)
    lwz r6, 0xb0(r5)
    lwz r0, 0xb4(r5)
    stw r0, 0xdc(r3)
    stw r6, 0xd8(r3)
    lwz r6, 0xb8(r5)
    lwz r0, 0xbc(r5)
    stw r0, 0xe4(r3)
    stw r6, 0xe0(r3)
    lwz r0, 0xc10(r4)
    or r0, r7, r0
    stw r0, 0xc4(r3)
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_8012B3E8_00000A00
    lwz r31, 0x10d4(r4)
    b lbl_fn_8012B3E8_00000A04
lbl_fn_8012B3E8_00000A00:
    li r31, 0x0
lbl_fn_8012B3E8_00000A04:
    lwz r4, lbl_8087F0A8
    li r30, 0x0
    li r29, 0x0
    lwz r0, 0x284(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8012B3E8_00000B50
    lwz r3, 0x2f0(r3)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8012B3E8_00000B50
    cmpwi r31, 0x0
    beq lbl_fn_8012B3E8_00000B50
    lwz r3, 0x5c(r3)
    lwz r3, 0xc8(r3)
    bl fn_8020FCE8
    cmpwi r3, 0x0
    beq lbl_fn_8012B3E8_00000B50
    lwz r3, 0x2f0(r28)
    lwz r0, 0x12a4(r3)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    beq lbl_fn_8012B3E8_00000A74
    lwz r3, 0x5c(r3)
    lwz r0, 0x9c(r3)
    rlwinm r3, r0, 0, 14, 14
    subis r0, r3, 0x2
    cmplwi r0, 0x0
    bne lbl_fn_8012B3E8_00000AD8
lbl_fn_8012B3E8_00000A74:
    lwz r0, 0x58(r31)
    lis r3, lbl_80737348@ha
    lwz r4, lbl_8087F0A8
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lwz r0, 0xd4(r4)
    lfd f2, lbl_80737348@l(r3)
    lfd f1, 0x8(r1)
    slwi r0, r0, 5
    add r3, r4, r0
    lfs f0, lbl_8088190C
    fsubs f2, f1, f2
    lfs f1, 0xe0(r3)
    lwz r0, 0xe4(r3)
    fmadds f0, f2, f1, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r30, 0x1c(r1)
    add r30, r30, r0
    subi r0, r30, 0x46
    mulli r3, r0, 0x14
    addi r3, r3, 0x3e8
    srawi r0, r3, 31
    andc r29, r3, r0
    b lbl_fn_8012B3E8_00000B50
lbl_fn_8012B3E8_00000AD8:
    lwz r5, 0x58(r31)
    lis r4, lbl_80737348@ha
    lwz r6, lbl_8087F0A8
    li r0, 0x3c
    xoris r3, r5, 0x8000
    stw r3, 0x14(r1)
    lwz r3, 0xd4(r6)
    cmpwi r5, 0x3c
    lfd f2, lbl_80737348@l(r4)
    lfd f1, 0x10(r1)
    slwi r3, r3, 5
    add r3, r6, r3
    lfs f0, lbl_8088190C
    fsubs f2, f1, f2
    lfs f1, 0xd8(r3)
    lwz r3, 0xdc(r3)
    fmadds f0, f2, f1, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r30, 0x1c(r1)
    add r30, r30, r3
    ble lbl_fn_8012B3E8_00000B34
    mr r0, r5
lbl_fn_8012B3E8_00000B34:
    cmpw r30, r0
    bge lbl_fn_8012B3E8_00000B40
    b lbl_fn_8012B3E8_00000B50
lbl_fn_8012B3E8_00000B40:
    cmpwi r5, 0x3c
    li r30, 0x3c
    ble lbl_fn_8012B3E8_00000B50
    mr r30, r5
lbl_fn_8012B3E8_00000B50:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8012B3E8_00000B78
    lwz r4, 0x2f0(r28)
    lwz r0, 0x48(r4)
    cmpwi r0, 0x2
    bne lbl_fn_8012B3E8_00000B78
    li r4, 0x1
    bl fn_80375B78
    add r30, r30, r3
lbl_fn_8012B3E8_00000B78:
    lfs f0, 0x1b0(r28)
    mr r3, r28
    lwz r5, 0x2f0(r28)
    addi r4, r28, 0x28
    fctiwz f0, f0
    lwz r0, 0xc(r28)
    lwz r7, 0x5c(r5)
    stfd f0, 0x18(r1)
    extrwi r0, r0, 1, 21
    lwz r6, 0xa0(r28)
    neg r5, r0
    lwz r9, 0x1c(r1)
    add r8, r30, r6
    lwz r0, 0x1c(r28)
    clrlwi r6, r5, 30
    lwz r7, 0xc8(r7)
    add r5, r9, r8
    subf r6, r6, r0
    bl fn_8012C6D4
    xoris r0, r29, 0x8000
    stw r0, 0xc(r1)
    lfs f0, 0x1b4(r28)
    lis r29, lbl_80737348@ha
    stw r0, 0x14(r1)
    fctiwz f5, f0
    lfd f4, lbl_80737348@l(r29)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f3, f1, f4
    lfs f2, 0x1b8(r28)
    fsubs f1, f0, f4
    lfs f0, 0x1bc(r28)
    stfd f5, 0x20(r1)
    fadds f3, f2, f3
    fadds f1, f0, f1
    lfs f2, 0x28(r28)
    lfs f0, 0x2c(r28)
    fadds f5, f2, f3
    lfs f3, 0x30(r28)
    fadds f4, f0, f1
    lfs f2, 0x1c0(r28)
    lfs f1, 0x34(r28)
    lfs f0, 0x1c4(r28)
    fadds f2, f3, f2
    lwz r5, 0xac(r28)
    fadds f0, f1, f0
    lwz r4, 0x24(r1)
    lwz r3, 0xbc(r28)
    lwz r0, 0x1c8(r28)
    add r4, r5, r4
    stw r4, 0xac(r28)
    add r0, r3, r0
    stfs f5, 0x28(r28)
    stfs f4, 0x2c(r28)
    stfs f2, 0x30(r28)
    stfs f0, 0x34(r28)
    stw r0, 0xbc(r28)
    lwz r3, lbl_8087F0A8
    lwz r0, 0x284(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8012B3E8_00000D90
    lwz r3, 0x2f0(r28)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8012B3E8_00000D90
    cmpwi r31, 0x0
    beq lbl_fn_8012B3E8_00000D90
    lwz r3, 0x5c(r3)
    lwz r3, 0xc8(r3)
    bl fn_8020FCE8
    cmpwi r3, 0x0
    bne lbl_fn_8012B3E8_00000D90
    lwz r0, 0xac(r28)
    lwz r3, lbl_8087F0A8
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lwz r0, 0xd4(r3)
    lfd f5, lbl_80737348@l(r29)
    lfd f1, 0x8(r1)
    slwi r0, r0, 5
    add r3, r3, r0
    lfs f0, lbl_8088190C
    fsubs f4, f1, f5
    lfs f3, 0xe8(r3)
    lfs f2, 0x28(r28)
    lfs f1, 0x2c(r28)
    fmadds f0, f4, f3, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r4, 0x24(r1)
    stw r4, 0xac(r28)
    lwz r3, lbl_8087F0A8
    lwz r0, 0xd4(r3)
    slwi r0, r0, 5
    add r3, r3, r0
    lwz r0, 0xec(r3)
    add r0, r4, r0
    stw r0, 0xac(r28)
    lwz r3, lbl_8087F0A8
    lwz r0, 0xd4(r3)
    slwi r0, r0, 5
    add r3, r3, r0
    lfs f0, 0xf0(r3)
    fmuls f2, f2, f0
    stfs f2, 0x28(r28)
    lwz r3, lbl_8087F0A8
    lwz r0, 0xd4(r3)
    slwi r0, r0, 5
    add r3, r3, r0
    lwz r0, 0xf4(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f5
    fadds f0, f2, f0
    stfs f0, 0x28(r28)
    lwz r3, lbl_8087F0A8
    lwz r0, 0xd4(r3)
    slwi r0, r0, 5
    add r3, r3, r0
    lfs f0, 0xf0(r3)
    fmuls f1, f1, f0
    stfs f1, 0x2c(r28)
    lwz r3, lbl_8087F0A8
    lwz r0, 0xd4(r3)
    slwi r0, r0, 5
    add r3, r3, r0
    lwz r0, 0xf4(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f5
    fadds f0, f1, f0
    stfs f0, 0x2c(r28)
lbl_fn_8012B3E8_00000D90:
    mr r3, r28
    bl fn_8012D180
lbl_fn_8012B3E8_00000D98:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8012B988(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_14
    lwz r4, 0x2f0(r3)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    mr r31, r3
    cmpwi r4, 0x0
    stw r0, 0x10(r1)
    beq lbl_fn_8012B988_00001AEC
    lwz r0, 0x5c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8012B988_00000DF8
    b lbl_fn_8012B988_00001AEC
lbl_fn_8012B988_00000DF8:
    lwz r4, 0xc(r3)
    lwz r15, 0xb0(r3)
    extrwi r0, r4, 1, 21
    stw r15, 0x4c(r1)
    neg r0, r0
    lwz r15, 0xbc(r3)
    clrlwi r17, r0, 30
    lwz r0, 0xa8(r3)
    stw r15, 0x20(r1)
    rlwinm r16, r4, 0, 21, 21
    lwz r15, 0xc0(r3)
    stw r15, 0x24(r1)
    lwz r15, 0xc4(r3)
    stw r0, 0x168(r3)
    lwz r0, 0x4c(r1)
    stw r15, 0x28(r1)
    lwz r15, 0xc8(r3)
    stw r0, 0x170(r3)
    lwz r0, 0x20(r1)
    stw r15, 0x2c(r1)
    lwz r15, 0xcc(r3)
    stw r0, 0x17c(r3)
    lwz r0, 0x24(r1)
    stw r15, 0x30(r1)
    lwz r15, 0xd0(r3)
    stw r0, 0x180(r3)
    lwz r0, 0x28(r1)
    stw r15, 0x34(r1)
    lwz r15, 0xd4(r3)
    stw r0, 0x184(r3)
    lwz r0, 0x2c(r1)
    stw r15, 0x38(r1)
    lwz r15, 0xd8(r3)
    stw r0, 0x188(r3)
    lwz r0, 0x30(r1)
    stw r15, 0x3c(r1)
    lwz r15, 0xdc(r3)
    stw r0, 0x18c(r3)
    lwz r0, 0x34(r1)
    stw r15, 0x40(r1)
    lwz r15, 0xe0(r3)
    stw r0, 0x190(r3)
    lwz r0, 0x38(r1)
    stw r15, 0x44(r1)
    lwz r15, 0xe4(r3)
    stw r0, 0x194(r3)
    lwz r0, 0x3c(r1)
    stw r0, 0x198(r3)
    lwz r0, 0x40(r1)
    lfs f11, 0x28(r3)
    lfs f10, 0x2c(r3)
    lfs f9, 0x30(r3)
    lfs f8, 0x34(r3)
    lfs f7, 0x38(r3)
    lfs f6, 0x3c(r3)
    lfs f5, 0x40(r3)
    lfs f4, 0x44(r3)
    lwz r18, 0x48(r3)
    lwz r19, 0x4c(r3)
    lfs f3, 0x50(r3)
    lfs f2, 0x54(r3)
    lwz r20, 0x58(r3)
    lwz r21, 0x5c(r3)
    lwz r22, 0x60(r3)
    lwz r23, 0x64(r3)
    lwz r24, 0x68(r3)
    lwz r25, 0x6c(r3)
    lwz r26, 0x70(r3)
    lwz r27, 0x74(r3)
    lwz r28, 0x78(r3)
    lwz r29, 0x7c(r3)
    lwz r30, 0x80(r3)
    lwz r12, 0x84(r3)
    lwz r11, 0x88(r3)
    lwz r10, 0x8c(r3)
    lwz r9, 0x90(r3)
    lwz r8, 0x94(r3)
    lwz r7, 0x98(r3)
    lwz r6, 0x9c(r3)
    lwz r5, 0xa0(r3)
    lwz r4, 0xa4(r3)
    lwz r14, 0xac(r3)
    lfs f1, 0xb4(r3)
    lfs f0, 0xb8(r3)
    stw r0, 0x19c(r3)
    lwz r0, 0x44(r1)
    stw r0, 0x1a0(r3)
    mr r0, r15
    stw r15, 0x48(r1)
    stfs f11, 0xe8(r3)
    stfs f10, 0xec(r3)
    stfs f9, 0xf0(r3)
    stfs f8, 0xf4(r3)
    stfs f7, 0xf8(r3)
    stfs f6, 0xfc(r3)
    stfs f5, 0x100(r3)
    stfs f4, 0x104(r3)
    stw r18, 0x108(r3)
    stw r19, 0x10c(r3)
    stfs f3, 0x110(r3)
    stfs f2, 0x114(r3)
    stw r20, 0x118(r3)
    stw r21, 0x11c(r3)
    stw r22, 0x120(r3)
    stw r23, 0x124(r3)
    stw r24, 0x128(r3)
    stw r25, 0x12c(r3)
    stw r26, 0x130(r3)
    stw r27, 0x134(r3)
    stw r28, 0x138(r3)
    stw r29, 0x13c(r3)
    stw r30, 0x140(r3)
    stw r12, 0x144(r3)
    stw r11, 0x148(r3)
    stw r10, 0x14c(r3)
    stw r9, 0x150(r3)
    stw r8, 0x154(r3)
    stw r7, 0x158(r3)
    stw r6, 0x15c(r3)
    stw r5, 0x160(r3)
    stw r4, 0x164(r3)
    stw r14, 0x16c(r3)
    stfs f1, 0x174(r3)
    stfs f0, 0x178(r3)
    stw r0, 0x1a4(r3)
    lwz r0, 0x1c(r3)
    add r5, r5, r0
    subf r0, r17, r5
    cmpwi r0, 0x1
    bge lbl_fn_8012B988_00001008
    li r0, 0x1
    b lbl_fn_8012B988_00001020
lbl_fn_8012B988_00001008:
    subi r4, r16, 0x400
    subfic r0, r16, 0x400
    nor r0, r4, r0
    srawi r0, r0, 31
    clrlwi r0, r0, 30
    subf r0, r0, r5
lbl_fn_8012B988_00001020:
    stw r0, 0x160(r3)
    lwz r4, 0x2f0(r3)
    lwz r0, 0x48(r4)
    cmpwi r0, 0x2
    bne lbl_fn_8012B988_00001100
    lwz r3, lbl_8087F0A8
    lwz r0, 0x5a0(r3)
    cmpwi r0, 0x2
    beq lbl_fn_8012B988_00001058
    lwz r3, 0x5c(r4)
    lwz r3, 0xc8(r3)
    bl fn_8020FCE8
    cmpwi r3, 0x0
    bne lbl_fn_8012B988_00001100
lbl_fn_8012B988_00001058:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8012B988_00001100
    li r4, 0x11a
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_8012B988_00001100
    xoris r0, r3, 0x8000
    stw r0, 0xc(r1)
    lis r3, lbl_80737348@ha
    lfs f2, lbl_8088190C
    lfd f3, lbl_80737348@l(r3)
    lfd f0, 0x8(r1)
    lfs f1, lbl_80881904
    fsubs f0, f0, f3
    lfs f4, lbl_80881910
    fnmsubs f0, f2, f0, f1
    fcmpo cr0, f4, f0
    ble lbl_fn_8012B988_000010A8
    b lbl_fn_8012B988_000010B8
lbl_fn_8012B988_000010A8:
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    fnmsubs f4, f2, f0, f1
lbl_fn_8012B988_000010B8:
    lwz r0, 0x16c(r31)
    lis r3, lbl_80737348@ha
    lfs f1, 0xe8(r31)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    fmuls f1, f1, f4
    lfs f0, 0xec(r31)
    lfd f3, lbl_80737348@l(r3)
    lfd f2, 0x8(r1)
    fmuls f0, f0, f4
    stfs f1, 0xe8(r31)
    fsubs f1, f2, f3
    stfs f0, 0xec(r31)
    fmuls f0, f1, f4
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x16c(r31)
lbl_fn_8012B988_00001100:
    lwz r3, 0x2f0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8012B988_00001138
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8012B988_00001138
    lwz r3, 0x5c(r3)
    lwz r0, 0xc8(r3)
    cmpwi r0, 0x0
    blt lbl_fn_8012B988_00001138
    lwz r3, 0x164(r31)
    lwz r0, 0x424(r31)
    add r0, r3, r0
    stw r0, 0x164(r31)
lbl_fn_8012B988_00001138:
    lwz r3, 0x2f0(r31)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x2f0(r31)
    cmpwi r3, 0x3
    lwz r3, 0x648(r4)
    bne lbl_fn_8012B988_00001180
    cmpwi r3, 0x0
    lwz r4, 0x64c(r4)
    beq lbl_fn_8012B988_00001198
    cmpwi r4, 0x0
    beq lbl_fn_8012B988_00001198
    lwz r5, 0x274(r3)
    mr r3, r31
    lwz r6, 0x274(r4)
    addi r4, r31, 0xe8
    bl fn_8012D714
    b lbl_fn_8012B988_00001198
lbl_fn_8012B988_00001180:
    cmpwi r3, 0x0
    beq lbl_fn_8012B988_00001198
    lwz r5, 0x274(r3)
    mr r3, r31
    addi r4, r31, 0xe8
    bl fn_8012D628
lbl_fn_8012B988_00001198:
    lwz r3, lbl_8087F610
    li r0, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_8012B988_000011D0
    lwz r4, 0x540(r3)
    li r3, 0x1
    cmpwi r4, 0x0
    beq lbl_fn_8012B988_000011C4
    cmpwi r4, 0x1
    beq lbl_fn_8012B988_000011C4
    li r3, 0x0
lbl_fn_8012B988_000011C4:
    cmpwi r3, 0x0
    beq lbl_fn_8012B988_000011D0
    li r0, 0x1
lbl_fn_8012B988_000011D0:
    cmpwi r0, 0x0
    bne lbl_fn_8012B988_00001214
    li r15, 0x0
    li r14, 0x0
lbl_fn_8012B988_000011E0:
    lwz r0, 0x2f0(r31)
    add r3, r0, r14
    lwz r3, 0x680(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8012B988_00001204
    lwz r5, 0x414(r3)
    mr r3, r31
    addi r4, r31, 0xe8
    bl fn_8012D628
lbl_fn_8012B988_00001204:
    addi r15, r15, 0x1
    addi r14, r14, 0x4
    cmpwi r15, 0x5
    blt lbl_fn_8012B988_000011E0
lbl_fn_8012B988_00001214:
    lfs f0, lbl_80881900
    addi r5, r31, 0x384
    lwz r0, 0x380(r31)
    li r4, 0x0
    fmr f1, f0
    fmr f2, f0
    fmr f3, f0
    fmr f4, f0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8012B988_0000125C
lbl_fn_8012B988_00001240:
    lwz r3, 0x0(r5)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x2
    bne lbl_fn_8012B988_00001254
    addi r4, r4, 0x1
lbl_fn_8012B988_00001254:
    addi r5, r5, 0x14
    bdnz lbl_fn_8012B988_00001240
lbl_fn_8012B988_0000125C:
    xoris r3, r4, 0x8000
    stw r3, 0x14(r1)
    lis r3, lbl_80737348@ha
    lfs f5, lbl_80881914
    lfd f7, lbl_80737348@l(r3)
    addi r5, r31, 0x384
    lfd f6, 0x10(r1)
    li r4, 0x0
    fsubs f6, f6, f7
    fmadds f0, f5, f6, f0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8012B988_000012B0
lbl_fn_8012B988_00001290:
    lwz r6, 0x0(r5)
    lwz r3, 0x0(r6)
    cmpwi r3, 0x1c
    bne lbl_fn_8012B988_000012A8
    lwz r3, 0x4(r6)
    add r4, r4, r3
lbl_fn_8012B988_000012A8:
    addi r5, r5, 0x14
    bdnz lbl_fn_8012B988_00001290
lbl_fn_8012B988_000012B0:
    xoris r3, r4, 0x8000
    stw r3, 0xc(r1)
    lis r3, lbl_80737348@ha
    lfs f6, 0xf0(r31)
    lfd f8, lbl_80737348@l(r3)
    addi r5, r31, 0x384
    lfd f7, 0x8(r1)
    li r4, 0x0
    lfs f5, lbl_80881918
    fsubs f7, f7, f8
    fmuls f6, f6, f7
    fdivs f5, f6, f5
    fadds f1, f1, f5
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8012B988_00001310
lbl_fn_8012B988_000012F0:
    lwz r6, 0x0(r5)
    lwz r3, 0x0(r6)
    cmpwi r3, 0x1d
    bne lbl_fn_8012B988_00001308
    lwz r3, 0x4(r6)
    add r4, r4, r3
lbl_fn_8012B988_00001308:
    addi r5, r5, 0x14
    bdnz lbl_fn_8012B988_000012F0
lbl_fn_8012B988_00001310:
    xoris r3, r4, 0x8000
    stw r3, 0x14(r1)
    lis r3, lbl_80737348@ha
    lfs f6, 0xf0(r31)
    lfd f8, lbl_80737348@l(r3)
    addi r5, r31, 0x384
    lfd f7, 0x10(r1)
    li r4, 0x0
    lfs f5, lbl_80881918
    fsubs f7, f7, f8
    fmuls f6, f6, f7
    fdivs f5, f6, f5
    fadds f1, f1, f5
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8012B988_00001370
lbl_fn_8012B988_00001350:
    lwz r6, 0x0(r5)
    lwz r3, 0x0(r6)
    cmpwi r3, 0x24
    bne lbl_fn_8012B988_00001368
    lwz r3, 0x4(r6)
    add r4, r4, r3
lbl_fn_8012B988_00001368:
    addi r5, r5, 0x14
    bdnz lbl_fn_8012B988_00001350
lbl_fn_8012B988_00001370:
    xoris r3, r4, 0x8000
    stw r3, 0xc(r1)
    lis r3, lbl_80737348@ha
    lfs f6, 0xf0(r31)
    lfd f8, lbl_80737348@l(r3)
    addi r5, r31, 0x384
    lfd f7, 0x8(r1)
    li r4, 0x0
    lfs f5, lbl_80881918
    fsubs f7, f7, f8
    fmuls f6, f6, f7
    fdivs f5, f6, f5
    fadds f1, f1, f5
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8012B988_000013D0
lbl_fn_8012B988_000013B0:
    lwz r6, 0x0(r5)
    lwz r3, 0x0(r6)
    cmpwi r3, 0x1e
    bne lbl_fn_8012B988_000013C8
    lwz r3, 0x4(r6)
    add r4, r4, r3
lbl_fn_8012B988_000013C8:
    addi r5, r5, 0x14
    bdnz lbl_fn_8012B988_000013B0
lbl_fn_8012B988_000013D0:
    xoris r3, r4, 0x8000
    stw r3, 0x14(r1)
    lis r3, lbl_80737348@ha
    lfs f6, 0xf4(r31)
    lfd f8, lbl_80737348@l(r3)
    addi r5, r31, 0x384
    lfd f7, 0x10(r1)
    li r4, 0x0
    lfs f5, lbl_80881918
    fsubs f7, f7, f8
    fmuls f6, f6, f7
    fdivs f5, f6, f5
    fadds f4, f4, f5
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8012B988_00001430
lbl_fn_8012B988_00001410:
    lwz r6, 0x0(r5)
    lwz r3, 0x0(r6)
    cmpwi r3, 0x1f
    bne lbl_fn_8012B988_00001428
    lwz r3, 0x4(r6)
    add r4, r4, r3
lbl_fn_8012B988_00001428:
    addi r5, r5, 0x14
    bdnz lbl_fn_8012B988_00001410
lbl_fn_8012B988_00001430:
    xoris r3, r4, 0x8000
    stw r3, 0xc(r1)
    lis r3, lbl_80737348@ha
    lfs f6, 0xf4(r31)
    lfd f8, lbl_80737348@l(r3)
    addi r5, r31, 0x384
    lfd f7, 0x8(r1)
    li r4, 0x0
    lfs f5, lbl_80881918
    fsubs f7, f7, f8
    fmuls f6, f6, f7
    fdivs f5, f6, f5
    fadds f4, f4, f5
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8012B988_00001490
lbl_fn_8012B988_00001470:
    lwz r6, 0x0(r5)
    lwz r3, 0x0(r6)
    cmpwi r3, 0x24
    bne lbl_fn_8012B988_00001488
    lwz r3, 0x4(r6)
    add r4, r4, r3
lbl_fn_8012B988_00001488:
    addi r5, r5, 0x14
    bdnz lbl_fn_8012B988_00001470
lbl_fn_8012B988_00001490:
    xoris r3, r4, 0x8000
    stw r3, 0x14(r1)
    lis r3, lbl_80737348@ha
    lfs f6, 0xf4(r31)
    lfd f8, lbl_80737348@l(r3)
    addi r5, r31, 0x384
    lfd f7, 0x10(r1)
    li r4, 0x0
    lfs f5, lbl_80881918
    fsubs f7, f7, f8
    fmuls f6, f6, f7
    fdivs f5, f6, f5
    fadds f4, f4, f5
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8012B988_000014F0
lbl_fn_8012B988_000014D0:
    lwz r6, 0x0(r5)
    lwz r3, 0x0(r6)
    cmpwi r3, 0x20
    bne lbl_fn_8012B988_000014E8
    lwz r3, 0x4(r6)
    add r4, r4, r3
lbl_fn_8012B988_000014E8:
    addi r5, r5, 0x14
    bdnz lbl_fn_8012B988_000014D0
lbl_fn_8012B988_000014F0:
    xoris r3, r4, 0x8000
    stw r3, 0xc(r1)
    lis r3, lbl_80737348@ha
    lfs f6, 0xe8(r31)
    lfd f8, lbl_80737348@l(r3)
    addi r5, r31, 0x384
    lfd f7, 0x8(r1)
    li r4, 0x0
    lfs f5, lbl_80881918
    fsubs f7, f7, f8
    fmuls f6, f6, f7
    fdivs f5, f6, f5
    fadds f2, f2, f5
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8012B988_00001550
lbl_fn_8012B988_00001530:
    lwz r6, 0x0(r5)
    lwz r3, 0x0(r6)
    cmpwi r3, 0x21
    bne lbl_fn_8012B988_00001548
    lwz r3, 0x4(r6)
    add r4, r4, r3
lbl_fn_8012B988_00001548:
    addi r5, r5, 0x14
    bdnz lbl_fn_8012B988_00001530
lbl_fn_8012B988_00001550:
    xoris r3, r4, 0x8000
    stw r3, 0x14(r1)
    lis r3, lbl_80737348@ha
    lfs f6, 0xe8(r31)
    lfd f8, lbl_80737348@l(r3)
    addi r5, r31, 0x384
    lfd f7, 0x10(r1)
    li r4, 0x0
    lfs f5, lbl_80881918
    fsubs f7, f7, f8
    fmuls f6, f6, f7
    fdivs f5, f6, f5
    fadds f2, f2, f5
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8012B988_000015B0
lbl_fn_8012B988_00001590:
    lwz r6, 0x0(r5)
    lwz r3, 0x0(r6)
    cmpwi r3, 0x20
    bne lbl_fn_8012B988_000015A8
    lwz r3, 0x4(r6)
    add r4, r4, r3
lbl_fn_8012B988_000015A8:
    addi r5, r5, 0x14
    bdnz lbl_fn_8012B988_00001590
lbl_fn_8012B988_000015B0:
    xoris r3, r4, 0x8000
    stw r3, 0xc(r1)
    lis r3, lbl_80737348@ha
    lfs f6, 0xec(r31)
    lfd f8, lbl_80737348@l(r3)
    addi r5, r31, 0x384
    lfd f7, 0x8(r1)
    li r4, 0x0
    lfs f5, lbl_80881918
    fsubs f7, f7, f8
    fmuls f6, f6, f7
    fdivs f5, f6, f5
    fadds f3, f3, f5
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8012B988_00001610
lbl_fn_8012B988_000015F0:
    lwz r6, 0x0(r5)
    lwz r3, 0x0(r6)
    cmpwi r3, 0x21
    bne lbl_fn_8012B988_00001608
    lwz r3, 0x4(r6)
    add r4, r4, r3
lbl_fn_8012B988_00001608:
    addi r5, r5, 0x14
    bdnz lbl_fn_8012B988_000015F0
lbl_fn_8012B988_00001610:
    xoris r3, r4, 0x8000
    stw r3, 0x14(r1)
    lis r3, lbl_80737348@ha
    lwz r4, 0x16c(r31)
    lfd f8, lbl_80737348@l(r3)
    lfd f5, 0x10(r1)
    cmpwi r4, 0x0
    lfs f6, 0xec(r31)
    fsubs f7, f5, f8
    lfs f5, lbl_80881918
    fmuls f6, f6, f7
    fdivs f5, f6, f5
    fadds f3, f3, f5
    ble lbl_fn_8012B988_00001664
    xoris r3, r4, 0x8000
    stw r3, 0xc(r1)
    lfs f5, 0x4(r31)
    lfd f6, 0x8(r1)
    fsubs f6, f6, f8
    fdivs f6, f5, f6
    b lbl_fn_8012B988_00001668
lbl_fn_8012B988_00001664:
    lfs f6, lbl_80881900
lbl_fn_8012B988_00001668:
    lfs f5, lbl_80881904
    addi r5, r31, 0x384
    li r4, 0x0
    fsubs f8, f5, f6
    fmuls f8, f8, f8
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8012B988_000016A4
lbl_fn_8012B988_00001688:
    lwz r3, 0x0(r5)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x27
    bne lbl_fn_8012B988_0000169C
    addi r4, r4, 0x1
lbl_fn_8012B988_0000169C:
    addi r5, r5, 0x14
    bdnz lbl_fn_8012B988_00001688
lbl_fn_8012B988_000016A4:
    xoris r3, r4, 0x8000
    stw r3, 0x14(r1)
    lis r3, lbl_80737348@ha
    lfs f7, 0xe8(r31)
    lfd f6, lbl_80737348@l(r3)
    addi r3, r31, 0x384
    lfd f5, 0x10(r1)
    fmuls f7, f7, f8
    li r5, 0x0
    fsubs f5, f5, f6
    fmadds f2, f7, f5, f2
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8012B988_000016FC
lbl_fn_8012B988_000016DC:
    lwz r4, 0x0(r3)
    lwz r0, 0x0(r4)
    cmpwi r0, 0x3a
    bne lbl_fn_8012B988_000016F4
    lwz r0, 0x4(r4)
    add r5, r5, r0
lbl_fn_8012B988_000016F4:
    addi r3, r3, 0x14
    bdnz lbl_fn_8012B988_000016DC
lbl_fn_8012B988_000016FC:
    lwz r4, 0x16c(r31)
    lis r3, lbl_80737348@ha
    lfs f6, 0x174(r31)
    mullw r0, r4, r5
    lfs f5, 0xf0(r31)
    fadds f0, f6, f0
    lfd f7, lbl_80737348@l(r3)
    fadds f8, f5, f1
    lfs f1, lbl_80881904
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfs f5, lbl_80881918
    fcmpo cr0, f8, f1
    lfd f6, 0x8(r1)
    stfs f0, 0x174(r31)
    fsubs f0, f6, f7
    fdivs f0, f0, f5
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    add r0, r4, r0
    stw r0, 0x16c(r31)
    ble lbl_fn_8012B988_0000175C
    b lbl_fn_8012B988_00001760
lbl_fn_8012B988_0000175C:
    fmr f8, f1
lbl_fn_8012B988_00001760:
    lfs f1, 0xe8(r31)
    lfs f0, lbl_80881904
    fadds f2, f1, f2
    stfs f8, 0xf0(r31)
    fcmpo cr0, f2, f0
    ble lbl_fn_8012B988_0000177C
    b lbl_fn_8012B988_00001780
lbl_fn_8012B988_0000177C:
    fmr f2, f0
lbl_fn_8012B988_00001780:
    lfs f1, 0xf4(r31)
    lfs f0, lbl_80881904
    fadds f4, f1, f4
    stfs f2, 0xe8(r31)
    fcmpo cr0, f4, f0
    ble lbl_fn_8012B988_0000179C
    b lbl_fn_8012B988_000017A0
lbl_fn_8012B988_0000179C:
    fmr f4, f0
lbl_fn_8012B988_000017A0:
    lfs f1, 0xec(r31)
    lfs f0, lbl_80881904
    fadds f1, f1, f3
    stfs f4, 0xf4(r31)
    fcmpo cr0, f1, f0
    ble lbl_fn_8012B988_000017BC
    b lbl_fn_8012B988_000017C0
lbl_fn_8012B988_000017BC:
    fmr f1, f0
lbl_fn_8012B988_000017C0:
    stfs f1, 0xec(r31)
    lwz r3, 0x2f0(r31)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    beq lbl_fn_8012B988_00001878
    lis r3, 0x2
    lwz r4, 0x16c(r31)
    subi r0, r3, 0x7961
    cmpw r4, r0
    bge lbl_fn_8012B988_000017EC
    mr r0, r4
lbl_fn_8012B988_000017EC:
    lfs f1, 0xf0(r31)
    lfs f0, lbl_8088191C
    stw r0, 0x16c(r31)
    fcmpo cr0, f1, f0
    bge lbl_fn_8012B988_00001804
    b lbl_fn_8012B988_00001808
lbl_fn_8012B988_00001804:
    fmr f1, f0
lbl_fn_8012B988_00001808:
    lfs f2, 0xe8(r31)
    lfs f0, lbl_8088191C
    stfs f1, 0xf0(r31)
    fcmpo cr0, f2, f0
    bge lbl_fn_8012B988_00001820
    b lbl_fn_8012B988_00001824
lbl_fn_8012B988_00001820:
    fmr f2, f0
lbl_fn_8012B988_00001824:
    lfs f1, 0xf4(r31)
    lfs f0, lbl_8088191C
    stfs f2, 0xe8(r31)
    fcmpo cr0, f1, f0
    bge lbl_fn_8012B988_0000183C
    b lbl_fn_8012B988_00001840
lbl_fn_8012B988_0000183C:
    fmr f1, f0
lbl_fn_8012B988_00001840:
    lfs f2, 0xec(r31)
    lfs f0, lbl_8088191C
    stfs f1, 0xf4(r31)
    fcmpo cr0, f2, f0
    bge lbl_fn_8012B988_00001858
    b lbl_fn_8012B988_0000185C
lbl_fn_8012B988_00001858:
    fmr f2, f0
lbl_fn_8012B988_0000185C:
    lwz r3, 0x17c(r31)
    li r0, 0x270f
    stfs f2, 0xec(r31)
    cmpwi r3, 0x270f
    bge lbl_fn_8012B988_00001874
    mr r0, r3
lbl_fn_8012B988_00001874:
    stw r0, 0x17c(r31)
lbl_fn_8012B988_00001878:
    lwz r5, 0x380(r31)
    addi r4, r31, 0x384
    mtctr r5
    cmplwi r5, 0x0
    ble lbl_fn_8012B988_000018A8
lbl_fn_8012B988_0000188C:
    lwz r3, 0x0(r4)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x46
    bne lbl_fn_8012B988_000018A0
    b lbl_fn_8012B988_000018AC
lbl_fn_8012B988_000018A0:
    addi r4, r4, 0x14
    bdnz lbl_fn_8012B988_0000188C
lbl_fn_8012B988_000018A8:
    li r4, 0x0
lbl_fn_8012B988_000018AC:
    cmpwi r4, 0x0
    beq lbl_fn_8012B988_000019E0
    addi r4, r31, 0x384
    li r3, 0x0
    mtctr r5
    cmplwi r5, 0x0
    ble lbl_fn_8012B988_000018E8
lbl_fn_8012B988_000018C8:
    lwz r6, 0x0(r4)
    lwz r0, 0x0(r6)
    cmpwi r0, 0x46
    bne lbl_fn_8012B988_000018E0
    lwz r0, 0x4(r6)
    add r3, r3, r0
lbl_fn_8012B988_000018E0:
    addi r4, r4, 0x14
    bdnz lbl_fn_8012B988_000018C8
lbl_fn_8012B988_000018E8:
    lwz r7, 0x180(r31)
    add r0, r7, r3
    cmpwi r0, 0x1
    ble lbl_fn_8012B988_00001934
    addi r4, r31, 0x384
    li r3, 0x0
    mtctr r5
    cmplwi r5, 0x0
    ble lbl_fn_8012B988_0000192C
lbl_fn_8012B988_0000190C:
    lwz r6, 0x0(r4)
    lwz r0, 0x0(r6)
    cmpwi r0, 0x46
    bne lbl_fn_8012B988_00001924
    lwz r0, 0x4(r6)
    add r3, r3, r0
lbl_fn_8012B988_00001924:
    addi r4, r4, 0x14
    bdnz lbl_fn_8012B988_0000190C
lbl_fn_8012B988_0000192C:
    add r0, r7, r3
    b lbl_fn_8012B988_00001938
lbl_fn_8012B988_00001934:
    li r0, 0x1
lbl_fn_8012B988_00001938:
    cmpwi r0, 0x5
    bge lbl_fn_8012B988_000019C4
    addi r4, r31, 0x384
    li r3, 0x0
    mtctr r5
    cmplwi r5, 0x0
    ble lbl_fn_8012B988_00001974
lbl_fn_8012B988_00001954:
    lwz r6, 0x0(r4)
    lwz r0, 0x0(r6)
    cmpwi r0, 0x46
    bne lbl_fn_8012B988_0000196C
    lwz r0, 0x4(r6)
    add r3, r3, r0
lbl_fn_8012B988_0000196C:
    addi r4, r4, 0x14
    bdnz lbl_fn_8012B988_00001954
lbl_fn_8012B988_00001974:
    add r0, r7, r3
    cmpwi r0, 0x1
    ble lbl_fn_8012B988_000019BC
    addi r4, r31, 0x384
    li r3, 0x0
    mtctr r5
    cmplwi r5, 0x0
    ble lbl_fn_8012B988_000019B4
lbl_fn_8012B988_00001994:
    lwz r5, 0x0(r4)
    lwz r0, 0x0(r5)
    cmpwi r0, 0x46
    bne lbl_fn_8012B988_000019AC
    lwz r0, 0x4(r5)
    add r3, r3, r0
lbl_fn_8012B988_000019AC:
    addi r4, r4, 0x14
    bdnz lbl_fn_8012B988_00001994
lbl_fn_8012B988_000019B4:
    add r0, r7, r3
    b lbl_fn_8012B988_000019C8
lbl_fn_8012B988_000019BC:
    li r0, 0x1
    b lbl_fn_8012B988_000019C8
lbl_fn_8012B988_000019C4:
    li r0, 0x5
lbl_fn_8012B988_000019C8:
    lwz r3, 0x224(r31)
    stw r0, 0x180(r31)
    cmpw r3, r0
    bge lbl_fn_8012B988_000019DC
    mr r0, r3
lbl_fn_8012B988_000019DC:
    stw r0, 0x224(r31)
lbl_fn_8012B988_000019E0:
    lwz r5, 0xc(r31)
    li r4, 0x1
    rlwinm r3, r5, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_8012B988_00001A0C
    rlwinm r3, r5, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_8012B988_00001A0C
    li r4, 0x0
lbl_fn_8012B988_00001A0C:
    cmpwi r4, 0x0
    beq lbl_fn_8012B988_00001A30
    lfs f1, 0xf0(r31)
    lfs f2, 0x428(r31)
    lfs f0, 0xf4(r31)
    fnmsubs f1, f1, f2, f1
    fnmsubs f0, f0, f2, f0
    stfs f1, 0xf0(r31)
    stfs f0, 0xf4(r31)
lbl_fn_8012B988_00001A30:
    lwz r0, 0x16c(r31)
    lis r3, lbl_80737348@ha
    lfd f1, lbl_80737348@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfs f2, 0x4(r31)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8012B988_00001A5C
    b lbl_fn_8012B988_00001A68
lbl_fn_8012B988_00001A5C:
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
lbl_fn_8012B988_00001A68:
    lwz r4, 0x2f0(r31)
    li r0, 0x0
    stfs f2, 0x4(r31)
    cmpwi r4, 0x0
    stw r0, 0x14(r31)
    beq lbl_fn_8012B988_00001AEC
    lwz r3, 0xc(r31)
    li r5, 0x0
    lwz r0, 0x10(r31)
    li r6, 0x0
    rlwinm r3, r3, 0, 12, 10
    stw r3, 0xc(r31)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r31)
    b lbl_fn_8012B988_00001AE0
lbl_fn_8012B988_00001AA4:
    add r3, r4, r6
    lwz r3, 0x654(r3)
    lwz r3, 0x274(r3)
    lwz r0, 0xf0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8012B988_00001AD8
    lwz r3, 0xc(r31)
    lwz r0, 0x10(r31)
    oris r3, r3, 0x10
    stw r3, 0xc(r31)
    oris r0, r0, 0x10
    stw r0, 0x10(r31)
    b lbl_fn_8012B988_00001AEC
lbl_fn_8012B988_00001AD8:
    addi r6, r6, 0x4
    addi r5, r5, 0x1
lbl_fn_8012B988_00001AE0:
    lwz r0, 0x650(r4)
    cmplw r5, r0
    blt lbl_fn_8012B988_00001AA4
lbl_fn_8012B988_00001AEC:
    addi r11, r1, 0xa0
    bl _restgpr_14
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}
