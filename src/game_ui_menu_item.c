#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8000D114(void);
extern void fn_8001047C(void);
extern void fn_80011410(void);
extern void fn_8004D388(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_8008BBD8(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800F52F0(void);
extern void fn_8012476C(void);
extern void fn_8012A1B8(void);
extern void fn_80139F4C(void);
extern void fn_8013A13C(void);
extern void fn_801539E0(void);
extern void fn_80155DAC(void);
extern void fn_8015E4B0(void);
extern void fn_8016DA4C(void);
extern void fn_80176548(void);
extern void fn_80178208(void);
extern void fn_801B4BC8(void);
extern void fn_801B4C00(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_8073AEE0[];
extern u8 lbl_8073B188[];
extern u8 lbl_80780B80[];
extern u8 lbl_80780BA0[];
extern u8 lbl_80780BAC[];
extern u8 lbl_80780BE0[];
extern u8 lbl_80780BE8[];
extern u8 lbl_80780C00[];
extern u8 lbl_80780C78[];
extern u8 lbl_80780CF0[];
extern u8 lbl_80780E60[];
extern u8 lbl_80780E7C[];
extern u8 lbl_807C7C48[];
extern u8 lbl_807C7C58[];
extern u8 lbl_807C7C60[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F0F0;
extern u32 lbl_8087F0F9;
extern u32 lbl_8087F0FA;
extern u32 lbl_8087F490;
extern u32 lbl_808824C0;
extern u32 lbl_808824C4;
extern u32 lbl_808824C8;
extern u32 lbl_808824CC;
extern u32 lbl_808824D0;
extern u32 lbl_808824D4;
extern u32 lbl_808824D8;
extern u32 lbl_808824DC;
extern u32 lbl_808824E0;
extern u32 lbl_808824E4;
extern u32 lbl_808824E8;

/* Function declarations */
void fn_801B5894(void);
void fn_801B5A2C(void);
void fn_801B5DF0(void);
void fn_801B5EC0(void);
void fn_801B618C(void);
void fn_801B6278(void);
void fn_801B6494(void);
void fn_801B66A4(void);
void fn_801B66F0(void);
void fn_801B6880(void);
void fn_801B68B0(void);
void fn_801B69CC(void);
void fn_801B6A80(void);
void fn_801B6D10(void);
void fn_801B6D44(void);
void fn_801B6E70(void);
void fn_801B7184(void);

asm void fn_801B5894(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    lfs f3, lbl_808824CC
    li r4, 0x79
    stw r0, 0xa4(r1)
    lfs f0, lbl_808824D0
    stw r31, 0x9c(r1)
    addi r31, r1, 0x2c
    stw r30, 0x98(r1)
    mr r30, r3
    lwz r5, 0x8(r3)
    addi r3, r1, 0x68
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    psq_st f1, 0x0(r31), 0, 0
    stfs f3, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    lfs f0, 0x538(r5)
    stfs f2, 0x34(r1)
    fmr f1, f0
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x68
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x2c(r1)
    addi r3, r1, 0x14
    lfs f3, 0x20(r1)
    lfs f4, 0x30(r1)
    fadds f6, f5, f3
    lfs f0, 0x24(r1)
    lfs f3, 0x34(r1)
    fadds f5, f4, f0
    lfs f0, 0x28(r1)
    stfs f6, 0x2c(r1)
    fadds f4, f3, f0
    lwz r4, 0x4(r30)
    stfs f5, 0x30(r1)
    lfs f0, lbl_808824C8
    psq_l f1, 0x0(r31), 0, 0
    fmr f2, f4
    psq_st f1, 0x528(r4), 0, 0
    stfs f2, 0x530(r4)
    lwz r4, 0x8(r30)
    lwz r5, 0x4(r30)
    psq_l f1, 0x534(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x53c(r4)
    lfs f3, 0x18(r1)
    stfs f4, 0x34(r1)
    fadds f0, f3, f0
    stfs f2, 0x1c(r1)
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r5), 0, 0
    stfs f2, 0x53c(r5)
    lwz r3, 0x4(r30)
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_801B5894_00000158
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lfs f3, lbl_808824CC
    addi r3, r1, 0x38
    lfs f0, lbl_808824D4
    li r4, 0x79
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    lwz r5, 0x8(r30)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x38
    mr r5, r4
    bl fn_805F93C0
    lwz r3, 0x8(r30)
    addi r4, r1, 0x8
    li r5, -0x1
    bl fn_8015E4B0
    li r3, 0x1
    b lbl_fn_801B5894_00000180
lbl_fn_801B5894_00000158:
    lwz r3, 0x8(r30)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_801B5894_00000174
    lwz r0, 0x560(r3)
    cmpwi r0, 0x7d
    beq lbl_fn_801B5894_0000017C
lbl_fn_801B5894_00000174:
    li r3, 0x1
    b lbl_fn_801B5894_00000180
lbl_fn_801B5894_0000017C:
    li r3, 0x0
lbl_fn_801B5894_00000180:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_801B5A2C(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    addi r11, r1, 0x240
    bl _savegpr_26
    lfs f3, lbl_808824CC
    mr r31, r3
    lfs f0, lbl_808824D8
    mr r26, r4
    lwz r5, 0x8(r4)
    addi r3, r1, 0x1f0
    stfs f3, 0x80(r1)
    li r4, 0x79
    stfs f3, 0x84(r1)
    stfs f0, 0x88(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x80
    addi r3, r1, 0x1f0
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0x88(r1)
    li r5, 0x0
    lwz r10, 0x4(r26)
    li r11, -0x1
    stfs f2, 0x70(r1)
    lis r3, lbl_80780BAC@ha
    lwzu r8, lbl_80780BAC@l(r3)
    addi r9, r1, 0x80
    stfs f2, 0x40(r1)
    frsp f2, f2
    lwz r7, 0x4(r3)
    addi r4, r1, 0x68
    lwz r6, 0x8(r3)
    addi r28, r1, 0x38
    psq_l f1, 0x0(r9), 0, 0
    stfs f2, 0x64(r1)
    addi r9, r1, 0x5c
    addi r29, r1, 0x44
    addi r12, r1, 0x50
    stfs f2, 0x4c(r1)
    frsp f2, f2
    addi r30, r1, 0x94
    addi r3, r1, 0x1d4
    stw r5, 0x0(r31)
    addi r26, r1, 0xb8
    addi r27, r1, 0x1b4
    stfs f2, 0x58(r1)
    frsp f2, f2
    lbz r0, lbl_8087F0F0
    stfs f2, 0x9c(r1)
    extsb. r0, r0
    stfs f2, 0x1e0(r1)
    frsp f2, f2
    psq_st f1, 0x0(r4), 0, 0
    stw r8, 0x74(r1)
    stw r7, 0x78(r1)
    stw r6, 0x7c(r1)
    psq_st f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r9), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r12), 0, 0
    stw r10, 0x90(r1)
    psq_st f1, 0x0(r30), 0, 0
    stw r11, 0xa0(r1)
    stb r5, 0xa4(r1)
    stw r8, 0x8(r1)
    stw r7, 0xc(r1)
    stw r6, 0x10(r1)
    stw r8, 0x2c(r1)
    stw r7, 0x30(r1)
    stw r6, 0x34(r1)
    stw r8, 0x20(r1)
    stw r7, 0x24(r1)
    stw r6, 0x28(r1)
    stw r8, 0x14(r1)
    stw r7, 0x18(r1)
    stw r6, 0x1c(r1)
    stw r8, 0x1c8(r1)
    stw r7, 0x1cc(r1)
    stw r6, 0x1d0(r1)
    stw r10, 0x1d4(r1)
    psq_st f1, 0x4(r3), 0, 0
    stw r11, 0x1e4(r1)
    stb r5, 0x1e8(r1)
    stw r8, 0xa8(r1)
    stw r7, 0xac(r1)
    stw r6, 0xb0(r1)
    stw r10, 0xb4(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0xc0(r1)
    stw r11, 0xc4(r1)
    stb r5, 0xc8(r1)
    stw r8, 0x1a4(r1)
    stw r7, 0x1a8(r1)
    stw r6, 0x1ac(r1)
    stw r10, 0x1b0(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x1bc(r1)
    stw r11, 0x1c0(r1)
    stb r5, 0x1c4(r1)
    bne lbl_fn_801B5A2C_000003CC
    frsp f2, f2
    lis r27, lbl_807C7C48@ha
    addi r28, r1, 0xdc
    addi r9, r1, 0x148
    addi r12, r1, 0x124
    lis r4, fn_801B4BC8@ha
    lis r3, fn_801B4C00@ha
    stfs f2, 0xe4(r1)
    li r0, 0x1
    addi r27, r27, lbl_807C7C48@l
    stfs f2, 0x150(r1)
    frsp f2, f2
    addi r4, r4, fn_801B4BC8@l
    addi r3, r3, fn_801B4C00@l
    stw r8, 0xcc(r1)
    stw r7, 0xd0(r1)
    stw r6, 0xd4(r1)
    stw r10, 0xd8(r1)
    psq_st f1, 0x0(r28), 0, 0
    stw r11, 0xe8(r1)
    stb r5, 0xec(r1)
    stw r8, 0x138(r1)
    stw r7, 0x13c(r1)
    stw r6, 0x140(r1)
    stw r10, 0x144(r1)
    psq_st f1, 0x0(r9), 0, 0
    stw r11, 0x154(r1)
    stb r5, 0x158(r1)
    stw r8, 0x114(r1)
    stw r7, 0x118(r1)
    stw r6, 0x11c(r1)
    stw r10, 0x120(r1)
    psq_st f1, 0x0(r12), 0, 0
    stfs f2, 0x12c(r1)
    stw r11, 0x130(r1)
    stb r5, 0x134(r1)
    stw r4, 0x4(r27)
    stw r3, 0x0(r27)
    stb r0, lbl_8087F0F0
lbl_fn_801B5A2C_000003CC:
    addi r3, r1, 0x1b4
    lwz r8, 0x1a4(r1)
    lwz r7, 0x1a8(r1)
    addi r10, r1, 0x100
    lwz r6, 0x1ac(r1)
    addi r9, r1, 0x190
    lwz r5, 0x1b0(r1)
    addi r27, r1, 0x180
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r27
    lfs f2, 0x1bc(r1)
    lwz r4, 0x1c0(r1)
    lbz r0, 0x1c4(r1)
    stw r8, 0xf0(r1)
    stw r7, 0xf4(r1)
    stw r6, 0xf8(r1)
    stw r5, 0xfc(r1)
    psq_st f1, 0x0(r10), 0, 0
    stfs f2, 0x108(r1)
    stw r4, 0x10c(r1)
    stb r0, 0x110(r1)
    stw r8, 0x180(r1)
    stw r7, 0x184(r1)
    stw r6, 0x188(r1)
    stw r5, 0x18c(r1)
    psq_st f1, 0x0(r9), 0, 0
    stfs f2, 0x198(r1)
    stw r4, 0x19c(r1)
    stb r0, 0x1a0(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801B5A2C_00000520
    lwz r8, 0x180(r1)
    addi r9, r1, 0x16c
    lwz r7, 0x184(r1)
    li r3, 0x24
    lwz r6, 0x188(r1)
    lwz r5, 0x18c(r1)
    psq_l f1, 0x10(r27), 0, 0
    lfs f2, 0x198(r1)
    lwz r4, 0x19c(r1)
    lbz r0, 0x1a0(r1)
    stw r8, 0x15c(r1)
    stw r7, 0x160(r1)
    stw r6, 0x164(r1)
    stw r5, 0x168(r1)
    psq_st f1, 0x0(r9), 0, 0
    stfs f2, 0x174(r1)
    stw r4, 0x178(r1)
    stb r0, 0x17c(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_801B5A2C_000004C8
    lis r3, __files@ha
    lis r4, lbl_80780B80@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80780B80@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801B5A2C_000004C8:
    cmpwi r27, 0x0
    beq lbl_fn_801B5A2C_00000514
    lwz r0, 0x15c(r1)
    addi r3, r1, 0x16c
    stw r0, 0x0(r27)
    lwz r0, 0x160(r1)
    stw r0, 0x4(r27)
    lwz r0, 0x164(r1)
    stw r0, 0x8(r27)
    lwz r0, 0x168(r1)
    stw r0, 0xc(r27)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x10(r27), 0, 0
    lfs f2, 0x174(r1)
    stfs f2, 0x18(r27)
    lwz r0, 0x178(r1)
    stw r0, 0x1c(r27)
    lbz r0, 0x17c(r1)
    stb r0, 0x20(r27)
lbl_fn_801B5A2C_00000514:
    stw r27, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801B5A2C_00000524
lbl_fn_801B5A2C_00000520:
    li r0, 0x0
lbl_fn_801B5A2C_00000524:
    cmpwi r0, 0x0
    beq lbl_fn_801B5A2C_0000053C
    lis r3, lbl_807C7C48@ha
    addi r3, r3, lbl_807C7C48@l
    stw r3, 0x0(r31)
    b lbl_fn_801B5A2C_00000544
lbl_fn_801B5A2C_0000053C:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_801B5A2C_00000544:
    addi r11, r1, 0x240
    bl _restgpr_26
    lwz r0, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_801B5DF0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    stw r31, 0x8c(r1)
    addi r11, r1, 0x38
    addi r12, r1, 0x2c
    addi r31, r1, 0x20
    stw r30, 0x88(r1)
    addi r30, r1, 0x14
    lfs f2, 0x8(r6)
    lwz r10, 0x0(r4)
    stfs f2, 0x40(r1)
    lwz r9, 0x4(r4)
    stfs f2, 0x1c(r1)
    frsp f2, f2
    lwz r0, 0x8(r4)
    addi r4, r1, 0x6c
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x34(r1)
    stfs f2, 0x28(r1)
    frsp f2, f2
    stw r10, 0x0(r3)
    stw r9, 0x4(r3)
    stw r0, 0x8(r3)
    stw r5, 0xc(r3)
    psq_st f1, 0x10(r3), 0, 0
    stfs f2, 0x18(r3)
    stw r7, 0x1c(r3)
    stb r8, 0x20(r3)
    psq_st f1, 0x0(r31), 0, 0
    lwz r31, 0x8c(r1)
    psq_st f1, 0x0(r30), 0, 0
    lwz r30, 0x88(r1)
    psq_st f1, 0x0(r11), 0, 0
    psq_st f1, 0x0(r12), 0, 0
    stw r5, 0x68(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x74(r1)
    stw r7, 0x78(r1)
    stb r8, 0x7c(r1)
    stw r10, 0x8(r1)
    stw r9, 0xc(r1)
    stw r0, 0x10(r1)
    stw r10, 0x44(r1)
    stw r9, 0x48(r1)
    stw r0, 0x4c(r1)
    stw r10, 0x50(r1)
    stw r9, 0x54(r1)
    stw r0, 0x58(r1)
    stw r10, 0x5c(r1)
    stw r9, 0x60(r1)
    stw r0, 0x64(r1)
    addi r1, r1, 0x90
    blr
}

asm void fn_801B5EC0(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    li r0, 0x0
    addi r11, r1, 0x114
    addi r12, r1, 0x18
    stw r31, 0x13c(r1)
    mr r31, r3
    stw r30, 0x138(r1)
    stw r29, 0x134(r1)
    lwz r10, 0x0(r4)
    lwz r9, 0x4(r4)
    lwz r8, 0x8(r4)
    lwz r7, 0xc(r4)
    psq_l f1, 0x10(r4), 0, 0
    lfs f2, 0x18(r4)
    lwz r6, 0x1c(r4)
    lbz r5, 0x20(r4)
    stw r10, 0x104(r1)
    stw r0, 0x0(r3)
    lbz r0, lbl_8087F0F0
    stw r9, 0x108(r1)
    extsb. r0, r0
    stw r8, 0x10c(r1)
    stw r7, 0x110(r1)
    psq_st f1, 0x0(r11), 0, 0
    stfs f2, 0x11c(r1)
    stw r6, 0x120(r1)
    stb r5, 0x124(r1)
    stw r10, 0x8(r1)
    stw r9, 0xc(r1)
    stw r8, 0x10(r1)
    stw r7, 0x14(r1)
    psq_st f1, 0x0(r12), 0, 0
    stfs f2, 0x20(r1)
    stw r6, 0x24(r1)
    stb r5, 0x28(r1)
    bne lbl_fn_801B5EC0_00000760
    frsp f2, f2
    lis r12, lbl_807C7C48@ha
    addi r11, r1, 0xf0
    addi r29, r1, 0x84
    addi r30, r1, 0xa8
    lis r4, fn_801B4BC8@ha
    lis r3, fn_801B4C00@ha
    stfs f2, 0xf8(r1)
    li r0, 0x1
    addi r12, r12, lbl_807C7C48@l
    stfs f2, 0x8c(r1)
    frsp f2, f2
    addi r4, r4, fn_801B4BC8@l
    addi r3, r3, fn_801B4C00@l
    stw r10, 0xe0(r1)
    stw r9, 0xe4(r1)
    stw r8, 0xe8(r1)
    stw r7, 0xec(r1)
    psq_st f1, 0x0(r11), 0, 0
    stw r6, 0xfc(r1)
    stb r5, 0x100(r1)
    stw r10, 0x74(r1)
    stw r9, 0x78(r1)
    stw r8, 0x7c(r1)
    stw r7, 0x80(r1)
    psq_st f1, 0x0(r29), 0, 0
    stw r6, 0x90(r1)
    stb r5, 0x94(r1)
    stw r10, 0x98(r1)
    stw r9, 0x9c(r1)
    stw r8, 0xa0(r1)
    stw r7, 0xa4(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xb0(r1)
    stw r6, 0xb4(r1)
    stb r5, 0xb8(r1)
    stw r4, 0x4(r12)
    stw r3, 0x0(r12)
    stb r0, lbl_8087F0F0
lbl_fn_801B5EC0_00000760:
    addi r3, r1, 0x18
    lwz r8, 0x8(r1)
    lwz r7, 0xc(r1)
    addi r9, r1, 0xcc
    lwz r6, 0x10(r1)
    addi r10, r1, 0x3c
    lwz r5, 0x14(r1)
    addi r29, r1, 0x2c
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r29
    lfs f2, 0x20(r1)
    lwz r4, 0x24(r1)
    lbz r0, 0x28(r1)
    stw r8, 0xbc(r1)
    stw r7, 0xc0(r1)
    stw r6, 0xc4(r1)
    stw r5, 0xc8(r1)
    psq_st f1, 0x0(r9), 0, 0
    stfs f2, 0xd4(r1)
    stw r4, 0xd8(r1)
    stb r0, 0xdc(r1)
    stw r8, 0x2c(r1)
    stw r7, 0x30(r1)
    stw r6, 0x34(r1)
    stw r5, 0x38(r1)
    psq_st f1, 0x0(r10), 0, 0
    stfs f2, 0x44(r1)
    stw r4, 0x48(r1)
    stb r0, 0x4c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801B5EC0_000008B4
    lwz r8, 0x2c(r1)
    addi r9, r1, 0x60
    lwz r7, 0x30(r1)
    li r3, 0x24
    lwz r6, 0x34(r1)
    lwz r5, 0x38(r1)
    psq_l f1, 0x10(r29), 0, 0
    lfs f2, 0x44(r1)
    lwz r4, 0x48(r1)
    lbz r0, 0x4c(r1)
    stw r8, 0x50(r1)
    stw r7, 0x54(r1)
    stw r6, 0x58(r1)
    stw r5, 0x5c(r1)
    psq_st f1, 0x0(r9), 0, 0
    stfs f2, 0x68(r1)
    stw r4, 0x6c(r1)
    stb r0, 0x70(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_801B5EC0_0000085C
    lis r3, __files@ha
    lis r4, lbl_80780B80@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80780B80@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801B5EC0_0000085C:
    cmpwi r29, 0x0
    beq lbl_fn_801B5EC0_000008A8
    lwz r0, 0x50(r1)
    addi r3, r1, 0x60
    stw r0, 0x0(r29)
    lwz r0, 0x54(r1)
    stw r0, 0x4(r29)
    lwz r0, 0x58(r1)
    stw r0, 0x8(r29)
    lwz r0, 0x5c(r1)
    stw r0, 0xc(r29)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x10(r29), 0, 0
    lfs f2, 0x68(r1)
    stfs f2, 0x18(r29)
    lwz r0, 0x6c(r1)
    stw r0, 0x1c(r29)
    lbz r0, 0x70(r1)
    stb r0, 0x20(r29)
lbl_fn_801B5EC0_000008A8:
    stw r29, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801B5EC0_000008B8
lbl_fn_801B5EC0_000008B4:
    li r0, 0x0
lbl_fn_801B5EC0_000008B8:
    cmpwi r0, 0x0
    beq lbl_fn_801B5EC0_000008D0
    lis r3, lbl_807C7C48@ha
    addi r3, r3, lbl_807C7C48@l
    stw r3, 0x0(r31)
    b lbl_fn_801B5EC0_000008D8
lbl_fn_801B5EC0_000008D0:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_801B5EC0_000008D8:
    mr r3, r31
    lwz r31, 0x13c(r1)
    lwz r30, 0x138(r1)
    lwz r29, 0x134(r1)
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_801B618C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, lbl_80780CF0@ha
    li r6, 0x3c
    stw r0, 0x14(r1)
    addi r7, r7, lbl_80780CF0@l
    li r0, 0x7d
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    stw r4, 0x4(r3)
    stw r7, 0x0(r3)
    stw r5, 0x8(r3)
    stw r6, 0xc(r3)
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    bl fn_8016DA4C
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_801B618C_00000954
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_801B618C_00000954:
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801B618C_00000968
    bl fn_801539E0
lbl_fn_801B618C_00000968:
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_801B618C_00000984
    lwz r0, 0x12a4(r3)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r3)
lbl_fn_801B618C_00000984:
    lwz r3, 0x4(r30)
    li r0, 0x1
    lfs f0, lbl_808824C0
    li r4, 0x0
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    lfs f1, lbl_808824CC
    mr r3, r31
    lfs f2, lbl_808824C4
    li r5, 0x1da
    stfs f0, 0x24c(r31)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_808824C0
    mr r3, r30
    stfs f0, 0x238(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B6278(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    lwz r4, 0x4(r3)
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    bne lbl_fn_801B6278_00000A50
    lwz r4, lbl_8087F490
    li r0, 0x1
    stw r0, 0x728(r4)
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    ble lbl_fn_801B6278_00000A80
    lwz r3, lbl_8087F0A8
    li r4, 0x22
    addi r3, r3, 0x48c
    bl fn_8012476C
    cmpwi r3, 0x0
    beq lbl_fn_801B6278_00000A80
    lwz r3, 0xc(r31)
    subi r0, r3, 0x1
    stw r0, 0xc(r31)
    b lbl_fn_801B6278_00000A80
lbl_fn_801B6278_00000A50:
    bl fn_80680CF8
    lis r4, 0x5555
    addi r0, r4, 0x5556
    mulhw r4, r0, r3
    srwi r0, r4, 31
    add r0, r4, r0
    mulli r0, r0, 0x3
    subf. r0, r0, r3
    bne lbl_fn_801B6278_00000A80
    lwz r3, 0xc(r31)
    subi r0, r3, 0x1
    stw r0, 0xc(r31)
lbl_fn_801B6278_00000A80:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_801B6278_00000B30
    lis r5, lbl_8073B188@ha
    li r3, 0xc
    addi r5, r5, lbl_8073B188@l
    li r4, 0x0
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801B6278_00000B1C
    lwz r6, 0x4(r31)
    lis r4, lbl_80780C78@ha
    lwz r9, 0x8(r31)
    addi r4, r4, lbl_80780C78@l
    stw r9, 0x4(r3)
    li r8, 0x7e
    li r0, 0x1
    lfs f0, lbl_808824C0
    stw r4, 0x0(r3)
    li r4, 0x0
    lfs f1, lbl_808824CC
    li r5, 0x148
    stw r6, 0x8(r3)
    li r6, 0x0
    lfs f2, lbl_808824C4
    li r7, 0x0
    stw r8, 0x560(r9)
    li r8, 0x1
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r29, r3, 0xb0
    mr r3, r29
    stfs f0, 0x24c(r29)
    bl fn_80097C08
    lfs f0, lbl_808824C0
    stfs f0, 0x238(r29)
lbl_fn_801B6278_00000B1C:
    lwz r3, 0x8(r31)
    mr r4, r30
    bl fn_80178208
    li r3, 0x1
    b lbl_fn_801B6278_00000BE4
lbl_fn_801B6278_00000B30:
    lwz r3, 0x4(r31)
    lfs f1, lbl_808824C4
    lfs f2, 0x948(r3)
    lfs f0, lbl_808824C0
    fsubs f1, f2, f1
    stfs f1, 0x948(r3)
    lwz r3, 0x4(r31)
    lfs f1, 0x7d8(r3)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_801B6278_00000BBC
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lfs f1, lbl_808824CC
    addi r3, r1, 0x18
    lfs f0, lbl_808824D8
    li r4, 0x79
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    lwz r5, 0x4(r31)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x18
    mr r5, r4
    bl fn_805F93C0
    lwz r3, 0x8(r31)
    addi r4, r1, 0x8
    li r5, -0x1
    bl fn_8015E4B0
    li r3, 0x1
    b lbl_fn_801B6278_00000BE4
lbl_fn_801B6278_00000BBC:
    lwz r3, 0x8(r31)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_801B6278_00000BD8
    lwz r0, 0x560(r3)
    cmpwi r0, 0x7c
    beq lbl_fn_801B6278_00000BE0
lbl_fn_801B6278_00000BD8:
    li r3, 0x1
    b lbl_fn_801B6278_00000BE4
lbl_fn_801B6278_00000BE0:
    li r3, 0x0
lbl_fn_801B6278_00000BE4:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_801B6494(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stw r31, 0x13c(r1)
    lis r31, lbl_80780BA0@ha
    addi r31, r31, lbl_80780BA0@l
    stw r30, 0x138(r1)
    mr r30, r4
    stw r29, 0x134(r1)
    mr r29, r3
    lwz r3, 0x4(r4)
    bl fn_800F52F0
    bl fn_80139F4C
    cmpwi r3, 0x0
    beq lbl_fn_801B6494_00000CC8
    lfs f1, lbl_808824CC
    addi r3, r1, 0x50
    lfs f3, lbl_808824D4
    fmr f2, f1
    bl fn_8000D114
    lwz r3, 0x4(r30)
    bl fn_8012A1B8
    lfs f1, 0x4(r3)
    addi r3, r1, 0x100
    bl fn_8013A13C
    addi r3, r1, 0x50
    addi r4, r1, 0x100
    bl fn_80011410
    addi r4, r31, 0x18
    lwz r6, 0x18(r31)
    lwz r5, 0x4(r4)
    addi r3, r1, 0x2c
    lwz r0, 0x8(r4)
    addi r4, r1, 0x50
    stw r6, 0x38(r1)
    stw r5, 0x3c(r1)
    stw r0, 0x40(r1)
    bl fn_8001047C
    lwz r5, 0x4(r30)
    mr r6, r3
    addi r3, r1, 0xd8
    addi r4, r1, 0x38
    li r7, -0x1
    li r8, 0x0
    bl fn_801B5DF0
    mr r3, r29
    addi r4, r1, 0xd8
    li r5, 0x0
    bl fn_801B5EC0
    b lbl_fn_801B6494_00000DF4
lbl_fn_801B6494_00000CC8:
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    ble lbl_fn_801B6494_00000D5C
    lfs f1, lbl_808824CC
    addi r3, r1, 0x44
    lfs f3, lbl_808824D4
    fmr f2, f1
    bl fn_8000D114
    lwz r3, 0x4(r30)
    bl fn_8012A1B8
    lfs f1, 0x4(r3)
    addi r3, r1, 0xa8
    bl fn_8013A13C
    addi r3, r1, 0x44
    addi r4, r1, 0xa8
    bl fn_80011410
    addi r4, r31, 0x24
    lwz r6, 0x24(r31)
    lwz r5, 0x4(r4)
    addi r3, r1, 0x14
    lwz r0, 0x8(r4)
    addi r4, r1, 0x44
    stw r6, 0x20(r1)
    stw r5, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_8001047C
    lwz r5, 0x4(r30)
    mr r6, r3
    addi r3, r1, 0x88
    addi r4, r1, 0x20
    li r7, -0x1
    bl fn_801B69CC
    mr r3, r29
    addi r4, r1, 0x88
    li r5, 0x0
    bl fn_801B6A80
    b lbl_fn_801B6494_00000DF4
lbl_fn_801B6494_00000D5C:
    lis r5, lbl_8073B188@ha
    li r3, 0xc
    addi r5, r5, lbl_8073B188@l
    li r4, 0x0
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801B6494_00000D8C
    lwz r4, 0x4(r30)
    lwz r5, 0x8(r30)
    bl fn_801B7184
lbl_fn_801B6494_00000D8C:
    addi r4, r31, 0x30
    lwz r5, 0x30(r31)
    lwz r7, 0x4(r4)
    mr r6, r3
    lwz r0, 0x8(r4)
    addi r3, r1, 0x5c
    stw r5, 0x8(r1)
    addi r4, r1, 0x8
    lwz r5, 0x4(r30)
    stw r7, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_801B66A4
    lwz r9, 0x5c(r1)
    mr r3, r29
    lwz r8, 0x60(r1)
    addi r4, r1, 0x70
    lwz r7, 0x64(r1)
    li r5, 0x0
    lwz r6, 0x68(r1)
    lwz r0, 0x6c(r1)
    stw r9, 0x70(r1)
    stw r8, 0x74(r1)
    stw r7, 0x78(r1)
    stw r6, 0x7c(r1)
    stw r0, 0x80(r1)
    bl fn_801B66F0
lbl_fn_801B6494_00000DF4:
    lwz r0, 0x144(r1)
    lwz r31, 0x13c(r1)
    lwz r30, 0x138(r1)
    lwz r29, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_801B66A4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    lwz r8, 0x0(r4)
    lwz r7, 0x4(r4)
    lwz r0, 0x8(r4)
    stw r5, 0x8(r1)
    stw r6, 0xc(r1)
    stw r8, 0x10(r1)
    stw r7, 0x14(r1)
    stw r0, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r7, 0x20(r1)
    stw r0, 0x24(r1)
    stw r8, 0x0(r3)
    stw r7, 0x4(r3)
    stw r0, 0x8(r3)
    stw r5, 0xc(r3)
    stw r6, 0x10(r3)
    addi r1, r1, 0x30
    blr
}

asm void fn_801B66F0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    li r0, 0x0
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    lwz r8, 0x0(r4)
    lwz r7, 0x4(r4)
    lwz r6, 0x8(r4)
    lwz r5, 0xc(r4)
    lwz r4, 0x10(r4)
    stw r8, 0x30(r1)
    stw r0, 0x0(r3)
    lbz r0, lbl_8087F0F9
    stw r7, 0x34(r1)
    extsb. r0, r0
    stw r6, 0x38(r1)
    stw r5, 0x3c(r1)
    stw r4, 0x40(r1)
    bne lbl_fn_801B66F0_00000ED8
    lis r6, lbl_807C7C58@ha
    lis r4, fn_801B6880@ha
    lis r3, fn_801B68B0@ha
    li r0, 0x1
    addi r3, r3, fn_801B68B0@l
    addi r5, r6, lbl_807C7C58@l
    addi r4, r4, fn_801B6880@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7C58@l(r6)
    stb r0, lbl_8087F0F9
lbl_fn_801B66F0_00000ED8:
    lwz r7, 0x30(r1)
    addi r3, r1, 0x8
    lwz r6, 0x34(r1)
    lwz r5, 0x38(r1)
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r7, 0x8(r1)
    stw r6, 0xc(r1)
    stw r5, 0x10(r1)
    stw r4, 0x14(r1)
    stw r0, 0x18(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801B66F0_00000FAC
    lwz r7, 0x8(r1)
    li r3, 0x14
    lwz r6, 0xc(r1)
    lwz r5, 0x10(r1)
    lwz r4, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r7, 0x1c(r1)
    stw r6, 0x20(r1)
    stw r5, 0x24(r1)
    stw r4, 0x28(r1)
    stw r0, 0x2c(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801B66F0_00000F70
    lis r3, __files@ha
    lis r4, lbl_80780E7C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80780E7C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801B66F0_00000F70:
    cmpwi r30, 0x0
    beq lbl_fn_801B66F0_00000FA0
    lwz r0, 0x1c(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x20(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x24(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x28(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0x10(r30)
lbl_fn_801B66F0_00000FA0:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801B66F0_00000FB0
lbl_fn_801B66F0_00000FAC:
    li r0, 0x0
lbl_fn_801B66F0_00000FB0:
    cmpwi r0, 0x0
    beq lbl_fn_801B66F0_00000FC8
    lis r3, lbl_807C7C58@ha
    addi r3, r3, lbl_807C7C58@l
    stw r3, 0x0(r31)
    b lbl_fn_801B66F0_00000FD0
lbl_fn_801B66F0_00000FC8:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_801B66F0_00000FD0:
    mr r3, r31
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_801B6880(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    lwz r4, 0x10(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B68B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_801B68B0_00001054
    lis r3, lbl_80780BE0@ha
    addi r3, r3, lbl_80780BE0@l
    stw r3, 0x0(r4)
    b lbl_fn_801B68B0_0000111C
lbl_fn_801B68B0_00001054:
    cmpwi r5, 0x0
    bne lbl_fn_801B68B0_000010CC
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801B68B0_00001094
    lis r3, __files@ha
    lis r4, lbl_80780E7C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80780E7C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801B68B0_00001094:
    cmpwi r30, 0x0
    beq lbl_fn_801B68B0_000010C4
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lwz r0, 0x10(r31)
    stw r0, 0x10(r30)
lbl_fn_801B68B0_000010C4:
    stw r30, 0x0(r29)
    b lbl_fn_801B68B0_0000111C
lbl_fn_801B68B0_000010CC:
    cmpwi r5, 0x1
    bne lbl_fn_801B68B0_000010E8
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_801B68B0_0000111C
lbl_fn_801B68B0_000010E8:
    lwz r5, 0x0(r4)
    lis r3, lbl_80780BE0@ha
    lwz r4, lbl_80780BE0@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_801B68B0_00001114
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_801B68B0_0000111C
lbl_fn_801B68B0_00001114:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801B68B0_0000111C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801B69CC(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    stw r31, 0x7c(r1)
    addi r10, r1, 0x2c
    addi r31, r1, 0x14
    addi r11, r1, 0x20
    lfs f2, 0x8(r6)
    addi r12, r1, 0x60
    lwz r9, 0x0(r4)
    stfs f2, 0x34(r1)
    lwz r8, 0x4(r4)
    stfs f2, 0x1c(r1)
    frsp f2, f2
    psq_l f1, 0x0(r6), 0, 0
    lwz r0, 0x8(r4)
    stfs f2, 0x28(r1)
    stfs f2, 0x68(r1)
    frsp f2, f2
    stw r9, 0x0(r3)
    stw r8, 0x4(r3)
    stw r0, 0x8(r3)
    stw r5, 0xc(r3)
    psq_st f1, 0x10(r3), 0, 0
    stfs f2, 0x18(r3)
    stw r7, 0x1c(r3)
    psq_st f1, 0x0(r31), 0, 0
    lwz r31, 0x7c(r1)
    psq_st f1, 0x0(r10), 0, 0
    psq_st f1, 0x0(r11), 0, 0
    stw r5, 0x5c(r1)
    psq_st f1, 0x0(r12), 0, 0
    stw r7, 0x6c(r1)
    stw r9, 0x8(r1)
    stw r8, 0xc(r1)
    stw r0, 0x10(r1)
    stw r9, 0x38(r1)
    stw r8, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r9, 0x44(r1)
    stw r8, 0x48(r1)
    stw r0, 0x4c(r1)
    stw r9, 0x50(r1)
    stw r8, 0x54(r1)
    stw r0, 0x58(r1)
    addi r1, r1, 0x80
    blr
}

asm void fn_801B6A80(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    li r0, 0x0
    addi r10, r1, 0xf8
    addi r11, r1, 0x18
    stw r31, 0x10c(r1)
    mr r31, r3
    stw r30, 0x108(r1)
    lwz r9, 0x0(r4)
    lwz r8, 0x4(r4)
    lwz r7, 0x8(r4)
    lwz r6, 0xc(r4)
    psq_l f1, 0x10(r4), 0, 0
    lfs f2, 0x18(r4)
    lwz r5, 0x1c(r4)
    stw r9, 0xe8(r1)
    stw r0, 0x0(r3)
    lbz r0, lbl_8087F0FA
    stw r8, 0xec(r1)
    extsb. r0, r0
    stw r7, 0xf0(r1)
    stw r6, 0xf4(r1)
    psq_st f1, 0x0(r10), 0, 0
    stfs f2, 0x100(r1)
    stw r5, 0x104(r1)
    stw r9, 0x8(r1)
    stw r8, 0xc(r1)
    stw r7, 0x10(r1)
    stw r6, 0x14(r1)
    psq_st f1, 0x0(r11), 0, 0
    stfs f2, 0x20(r1)
    stw r5, 0x24(r1)
    bne lbl_fn_801B6A80_00001304
    frsp f2, f2
    lis r11, lbl_807C7C60@ha
    addi r10, r1, 0xd8
    addi r30, r1, 0x78
    addi r12, r1, 0x98
    lis r4, fn_801B6D10@ha
    lis r3, fn_801B6D44@ha
    stfs f2, 0xe0(r1)
    li r0, 0x1
    addi r11, r11, lbl_807C7C60@l
    stfs f2, 0x80(r1)
    frsp f2, f2
    addi r4, r4, fn_801B6D10@l
    addi r3, r3, fn_801B6D44@l
    stw r9, 0xc8(r1)
    stw r8, 0xcc(r1)
    stw r7, 0xd0(r1)
    stw r6, 0xd4(r1)
    psq_st f1, 0x0(r10), 0, 0
    stw r5, 0xe4(r1)
    stw r9, 0x68(r1)
    stw r8, 0x6c(r1)
    stw r7, 0x70(r1)
    stw r6, 0x74(r1)
    psq_st f1, 0x0(r30), 0, 0
    stw r5, 0x84(r1)
    stw r9, 0x88(r1)
    stw r8, 0x8c(r1)
    stw r7, 0x90(r1)
    stw r6, 0x94(r1)
    psq_st f1, 0x0(r12), 0, 0
    stfs f2, 0xa0(r1)
    stw r5, 0xa4(r1)
    stw r4, 0x4(r11)
    stw r3, 0x0(r11)
    stb r0, lbl_8087F0FA
lbl_fn_801B6A80_00001304:
    addi r3, r1, 0x18
    lwz r7, 0x8(r1)
    lwz r6, 0xc(r1)
    addi r8, r1, 0xb8
    lwz r5, 0x10(r1)
    addi r9, r1, 0x38
    lwz r4, 0x14(r1)
    addi r30, r1, 0x28
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r7, 0xa8(r1)
    stw r6, 0xac(r1)
    stw r5, 0xb0(r1)
    stw r4, 0xb4(r1)
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0xc0(r1)
    stw r0, 0xc4(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    psq_st f1, 0x0(r9), 0, 0
    stfs f2, 0x40(r1)
    stw r0, 0x44(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801B6A80_0000143C
    lwz r7, 0x28(r1)
    addi r8, r1, 0x58
    lwz r6, 0x2c(r1)
    li r3, 0x20
    lwz r5, 0x30(r1)
    lwz r4, 0x34(r1)
    psq_l f1, 0x10(r30), 0, 0
    lfs f2, 0x40(r1)
    lwz r0, 0x44(r1)
    stw r7, 0x48(r1)
    stw r6, 0x4c(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0x60(r1)
    stw r0, 0x64(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801B6A80_000013EC
    lis r3, __files@ha
    lis r4, lbl_80780E60@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80780E60@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801B6A80_000013EC:
    cmpwi r30, 0x0
    beq lbl_fn_801B6A80_00001430
    lwz r0, 0x48(r1)
    addi r3, r1, 0x58
    stw r0, 0x0(r30)
    lwz r0, 0x4c(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x50(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x54(r1)
    stw r0, 0xc(r30)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x10(r30), 0, 0
    lfs f2, 0x60(r1)
    stfs f2, 0x18(r30)
    lwz r0, 0x64(r1)
    stw r0, 0x1c(r30)
lbl_fn_801B6A80_00001430:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801B6A80_00001440
lbl_fn_801B6A80_0000143C:
    li r0, 0x0
lbl_fn_801B6A80_00001440:
    cmpwi r0, 0x0
    beq lbl_fn_801B6A80_00001458
    lis r3, lbl_807C7C60@ha
    addi r3, r3, lbl_807C7C60@l
    stw r3, 0x0(r31)
    b lbl_fn_801B6A80_00001460
lbl_fn_801B6A80_00001458:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_801B6A80_00001460:
    mr r3, r31
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_801B6D10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    addi r4, r12, 0x10
    lwz r5, 0x1c(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B6D44(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_801B6D44_000014E8
    lis r3, lbl_80780BE8@ha
    addi r3, r3, lbl_80780BE8@l
    stw r3, 0x0(r4)
    b lbl_fn_801B6D44_000015C0
lbl_fn_801B6D44_000014E8:
    cmpwi r5, 0x0
    bne lbl_fn_801B6D44_00001570
    lwz r31, 0x0(r3)
    li r3, 0x20
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801B6D44_00001528
    lis r3, __files@ha
    lis r4, lbl_80780E60@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80780E60@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801B6D44_00001528:
    cmpwi r30, 0x0
    beq lbl_fn_801B6D44_00001568
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lfs f2, 0x18(r31)
    psq_l f1, 0x10(r31), 0, 0
    psq_st f1, 0x10(r30), 0, 0
    stfs f2, 0x18(r30)
    lwz r0, 0x1c(r31)
    stw r0, 0x1c(r30)
lbl_fn_801B6D44_00001568:
    stw r30, 0x0(r29)
    b lbl_fn_801B6D44_000015C0
lbl_fn_801B6D44_00001570:
    cmpwi r5, 0x1
    bne lbl_fn_801B6D44_0000158C
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_801B6D44_000015C0
lbl_fn_801B6D44_0000158C:
    lwz r5, 0x0(r4)
    lis r3, lbl_80780BE8@ha
    lwz r4, lbl_80780BE8@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_801B6D44_000015B8
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_801B6D44_000015C0
lbl_fn_801B6D44_000015B8:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801B6D44_000015C0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801B6E70(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    lfs f0, lbl_808824DC
    stw r0, 0x214(r1)
    stfd f31, 0x200(r1)
    psq_st f31, 0x208(r1), 0, 0
    stw r31, 0x1fc(r1)
    stw r30, 0x1f8(r1)
    mr r30, r3
    stw r29, 0x1f4(r1)
    stw r28, 0x1f0(r1)
    lwz r6, 0x4(r3)
    lfs f7, 0x2e4(r6)
    addi r31, r6, 0xb0
    fcmpo cr0, f7, f0
    bge lbl_fn_801B6E70_000018A0
    addi r5, r1, 0x34
    psq_l f1, 0x534(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lis r4, lbl_8073AEE0@ha
    lfs f2, 0x53c(r6)
    lis r0, 0x4330
    lfs f7, 0x38(r1)
    addi r29, r1, 0x160
    lfs f0, lbl_808824E0
    lfd f10, lbl_8073AEE0@l(r4)
    fadds f0, f7, f0
    stw r0, 0x1e0(r1)
    lfs f7, lbl_808824E8
    stfs f0, 0x38(r1)
    lfs f9, lbl_808824E4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x534(r6), 0, 0
    lfs f8, lbl_808824CC
    stfs f2, 0x53c(r6)
    lfs f0, lbl_808824C0
    lwz r4, lbl_8087F0A8
    stfs f2, 0x3c(r1)
    lwz r0, 0x30(r4)
    mullw r0, r0, r0
    stfs f7, 0x30(r1)
    stfs f8, 0x28(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x1e4(r1)
    lfd f7, 0x1e0(r1)
    fsubs f7, f7, f10
    fdivs f7, f9, f7
    stfs f7, 0x2c(r1)
    lwz r28, 0x4(r3)
    stfs f8, 0x18c(r1)
    stfs f8, 0x184(r1)
    stfs f8, 0x180(r1)
    stfs f8, 0x17c(r1)
    stfs f8, 0x178(r1)
    stfs f8, 0x170(r1)
    stfs f8, 0x16c(r1)
    stfs f8, 0x168(r1)
    stfs f8, 0x164(r1)
    stfs f0, 0x188(r1)
    stfs f0, 0x174(r1)
    stfs f0, 0x160(r1)
    lfs f1, 0x53c(r28)
    fcmpu cr0, f8, f1
    beq lbl_fn_801B6E70_0000172C
    addi r3, r1, 0x70
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x70
    addi r5, r1, 0x40
    bl fn_805F89F0
    addi r3, r1, 0x40
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_801B6E70_0000172C:
    lfs f0, lbl_808824CC
    lfs f1, 0x538(r28)
    fcmpu cr0, f0, f1
    beq lbl_fn_801B6E70_0000178C
    addi r3, r1, 0xd0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0xd0
    addi r5, r1, 0xa0
    bl fn_805F89F0
    addi r3, r1, 0xa0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_801B6E70_0000178C:
    lfs f0, lbl_808824CC
    lfs f1, 0x534(r28)
    fcmpu cr0, f0, f1
    beq lbl_fn_801B6E70_000017EC
    addi r3, r1, 0x130
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x130
    addi r5, r1, 0x100
    bl fn_805F89F0
    addi r3, r1, 0x100
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_801B6E70_000017EC:
    addi r4, r1, 0x28
    addi r3, r1, 0x160
    mr r5, r4
    bl fn_805F93C0
    li r0, 0x0
    stw r0, 0x1c4(r1)
    addi r3, r1, 0x18
    stw r0, 0x1c8(r1)
    stw r0, 0x1cc(r1)
    stw r0, 0x1d0(r1)
    lwz r4, 0x4(r30)
    addi r5, r4, 0x528
    bl fn_80176548
    lwz r6, 0x4(r30)
    addi r4, r1, 0x190
    lwz r3, lbl_8087EE98
    addi r5, r1, 0x18
    addi r8, r6, 0x5b8
    lfs f1, 0x24(r1)
    addi r6, r1, 0x28
    lis r7, 0x8000
    li r9, 0x0
    bl fn_8004D388
    addi r4, r1, 0x1a0
    lwz r5, 0x4(r30)
    addi r3, r1, 0x8
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x5a8(r5)
    lfs f7, 0xc(r1)
    lfs f9, 0x8(r1)
    fsubs f7, f7, f0
    lfs f8, 0x5a4(r5)
    lfs f0, 0x24(r1)
    fsubs f8, f9, f8
    lfs f2, 0x1a8(r1)
    fsubs f0, f7, f0
    lfs f7, 0x5ac(r5)
    stfs f8, 0x8(r1)
    fsubs f2, f2, f7
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0x530(r5)
lbl_fn_801B6E70_000018A0:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801B6E70_000018C4
    li r3, 0x1
    b lbl_fn_801B6E70_000018C8
lbl_fn_801B6E70_000018C4:
    li r3, 0x0
lbl_fn_801B6E70_000018C8:
    lwz r0, 0x214(r1)
    psq_l f31, 0x208(r1), 0, 0
    lfd f31, 0x200(r1)
    lwz r31, 0x1fc(r1)
    lwz r30, 0x1f8(r1)
    lwz r29, 0x1f4(r1)
    lwz r28, 0x1f0(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_801B7184(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_80780C00@ha
    li r7, 0x7f
    stw r0, 0x14(r1)
    addi r6, r6, lbl_80780C00@l
    li r0, 0x1
    lfs f0, lbl_808824C0
    stw r31, 0xc(r1)
    li r8, 0x1
    lfs f1, lbl_808824CC
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f2, lbl_808824C4
    stw r5, 0x8(r3)
    li r5, 0x1db
    stw r6, 0x0(r3)
    li r6, 0x0
    stw r4, 0x4(r3)
    stw r7, 0x560(r4)
    li r4, 0x0
    li r7, 0x0
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f0, lbl_808824C0
    mr r3, r30
    stfs f0, 0x238(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
