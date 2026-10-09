#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_80044C50(void);
extern void fn_80044CCC(void);
extern void fn_80044E0C(void);
extern void fn_80084320(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_801059F8(void);
extern void fn_80105B3C(void);
extern void fn_80107CA8(void);
extern void fn_8010CA34(void);
extern void fn_8011BEB8(void);
extern void fn_8012DB04(void);
extern void fn_8013A21C(void);
extern void fn_8014C228(void);
extern void fn_8014DEE4(void);
extern void fn_801A2CEC(void);
extern void fn_801C8F10(void);
extern void fn_80219558(void);
extern void fn_80370174(void);
extern void fn_803E6BB4(void);
extern void fn_8056639C(void);
extern void fn_805ADCC4(void);
extern void fn_805ADD40(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80737490[];
extern u8 lbl_80737808[];
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077A720[];
extern u8 lbl_8077C0B8[];
extern u8 lbl_8077C0C4[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F9F8;
extern u32 lbl_80881964;
extern u32 lbl_8088196C;
extern u32 lbl_808819A8;
extern u32 lbl_80881A00;

/* Function declarations */
void fn_8016D3F8(void);
void fn_8016D454(void);
void fn_8016D74C(void);
void fn_8016DA4C(void);
void fn_8016DAB0(void);
void fn_8016DC14(void);
void fn_8016DCD4(void);
void fn_8016DDB0(void);
void fn_8016DF3C(void);
void fn_8016E484(void);
void fn_8016E4C4(void);
void fn_8016E5F0(void);
void fn_8016E71C(void);
void fn_8016E800(void);
void fn_8016E864(void);
void fn_8016E970(void);
void fn_8016EB48(void);

asm void fn_8016D3F8(void)
{
    nofralloc
    lwz r0, 0x55c(r3)
    li r5, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8016D3F8_00000054
    lwz r0, 0x560(r3)
    li r6, 0x1
    cmpwi r0, 0x63
    beq lbl_fn_8016D3F8_00000048
    cmpwi r0, 0x27
    li r4, 0x0
    bne lbl_fn_8016D3F8_0000003C
    lwz r0, 0x2dc(r3)
    cmpwi r0, 0x8e
    bne lbl_fn_8016D3F8_0000003C
    li r4, 0x1
lbl_fn_8016D3F8_0000003C:
    cmpwi r4, 0x0
    bne lbl_fn_8016D3F8_00000048
    li r6, 0x0
lbl_fn_8016D3F8_00000048:
    cmpwi r6, 0x0
    beq lbl_fn_8016D3F8_00000054
    li r5, 0x1
lbl_fn_8016D3F8_00000054:
    mr r3, r5
    blr
}

asm void fn_8016D454(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r4, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x74(r1)
    addi r4, r4, lbl_80737A9C@l
    addi r5, r4, 0x24
    stfd f31, 0x68(r1)
    fmr f31, f1
    mr r6, r5
    li r4, 0x0
    stw r31, 0x64(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    stw r30, 0x60(r1)
    stw r29, 0x5c(r1)
    mr r29, r3
    li r3, 0x1c
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8016D454_000000C4
    fmr f1, f31
    mr r4, r29
    bl fn_801C8F10
    mr r30, r3
lbl_fn_8016D454_000000C4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016D454_00000154
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016D454_000000FC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8016D454_00000118
lbl_fn_8016D454_000000FC:
    addi r3, r31, 0x1950
    lwz r5, 0x1950(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8016D454_00000118:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016D454_00000154
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016D454_00000154:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016D454_00000308
    cmpwi r0, 0x8
    beq lbl_fn_8016D454_0000016C
    stw r0, 0x564(r29)
lbl_fn_8016D454_0000016C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016D454_00000308
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016D454_000001A4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8016D454_000001C0
lbl_fn_8016D454_000001A4:
    addi r3, r31, 0x195c
    lwz r5, 0x195c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8016D454_000001C0:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016D454_000001FC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016D454_000001FC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016D454_000002D8
    cmpwi r0, 0x8
    beq lbl_fn_8016D454_00000214
    stw r0, 0x564(r29)
lbl_fn_8016D454_00000214:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016D454_000002D8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016D454_0000024C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8016D454_00000268
lbl_fn_8016D454_0000024C:
    addi r3, r31, 0x1968
    lwz r5, 0x1968(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8016D454_00000268:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016D454_000002A4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016D454_000002A4:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016D454_000002D8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016D454_000002D8:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016D454_00000308
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016D454_00000308:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8016D454_00000334
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016D454_00000334:
    lwz r0, 0x74(r1)
    lfd f31, 0x68(r1)
    lwz r31, 0x64(r1)
    lwz r30, 0x60(r1)
    lwz r29, 0x5c(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8016D74C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x74(r1)
    stmw r27, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    mr r29, r3
    mr r27, r5
    mr r28, r6
    addi r31, r31, lbl_8077A720@l
    beq lbl_fn_8016D74C_00000640
    lwz r0, 0x638(r3)
    lis r5, lbl_80737A9C@ha
    addi r5, r5, lbl_80737A9C@l
    stw r0, 0x63c(r3)
    addi r5, r5, 0x24
    li r7, 0x0
    stw r4, 0x638(r3)
    mr r6, r5
    li r3, 0x44
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8016D74C_000003D0
    mr r4, r29
    mr r5, r27
    mr r6, r28
    li r7, 0x0
    bl fn_801A2CEC
    mr r30, r3
lbl_fn_8016D74C_000003D0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016D74C_00000460
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016D74C_00000408
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8016D74C_00000424
lbl_fn_8016D74C_00000408:
    addi r3, r31, 0x1974
    lwz r5, 0x1974(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8016D74C_00000424:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016D74C_00000460
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016D74C_00000460:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016D74C_00000614
    cmpwi r0, 0x8
    beq lbl_fn_8016D74C_00000478
    stw r0, 0x564(r29)
lbl_fn_8016D74C_00000478:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016D74C_00000614
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016D74C_000004B0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8016D74C_000004CC
lbl_fn_8016D74C_000004B0:
    addi r3, r31, 0x1980
    lwz r5, 0x1980(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8016D74C_000004CC:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016D74C_00000508
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016D74C_00000508:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016D74C_000005E4
    cmpwi r0, 0x8
    beq lbl_fn_8016D74C_00000520
    stw r0, 0x564(r29)
lbl_fn_8016D74C_00000520:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016D74C_000005E4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016D74C_00000558
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8016D74C_00000574
lbl_fn_8016D74C_00000558:
    addi r3, r31, 0x198c
    lwz r5, 0x198c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8016D74C_00000574:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016D74C_000005B0
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016D74C_000005B0:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016D74C_000005E4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016D74C_000005E4:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016D74C_00000614
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016D74C_00000614:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8016D74C_00000640
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016D74C_00000640:
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8016DA4C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_8016DA4C_0000068C
    mr r3, r0
    mr r4, r31
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r31
    bl fn_80105B3C
lbl_fn_8016DA4C_0000068C:
    lwz r0, 0x12a8(r31)
    lfs f0, lbl_8088196C
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x12a8(r31)
    stfs f0, 0xfb8(r31)
    stfs f0, 0xfbc(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8016DAB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8016DAB0_000006F4
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1d
    bne lbl_fn_8016DAB0_000006F4
    li r4, 0x1
lbl_fn_8016DAB0_000006F4:
    cmpwi r4, 0x0
    beq lbl_fn_8016DAB0_000007B8
    lwz r5, 0x638(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8016DAB0_000007B8
    lfs f0, 0xfb8(r3)
    lfs f1, 0xfbc(r3)
    fsubs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    ble lbl_fn_8016DAB0_00000734
    stfd f0, 0x8(r1)
    lwz r31, 0xc(r1)
    b lbl_fn_8016DAB0_00000738
lbl_fn_8016DAB0_00000734:
    li r31, 0x0
lbl_fn_8016DAB0_00000738:
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_8016DAB0_00000800
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8016DAB0_00000800
    mr r4, r30
    li r6, 0x1
    bl fn_805ADCC4
    cmpwi r3, 0x0
    beq lbl_fn_8016DAB0_00000790
    lwz r3, 0x638(r30)
    lwz r0, 0xac(r3)
    rlwinm r3, r0, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    beq lbl_fn_8016DAB0_00000790
    cmpwi r31, 0x59
    li r0, 0x59
    bgt lbl_fn_8016DAB0_0000078C
    mr r0, r31
lbl_fn_8016DAB0_0000078C:
    mr r31, r0
lbl_fn_8016DAB0_00000790:
    lis r3, 0x8889
    subi r0, r3, 0x7777
    mulhw r0, r0, r31
    add r0, r0, r31
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r3, r0, 0x1e
    addi r31, r3, 0xf
    b lbl_fn_8016DAB0_00000800
lbl_fn_8016DAB0_000007B8:
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_8016DAB0_00000800
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8016DAB0_00000800
    mr r4, r30
    bl fn_805ADD40
    cmpwi r3, 0x0
    beq lbl_fn_8016DAB0_00000800
    lwz r0, 0xac(r3)
    li r31, 0x4b
    rlwinm r4, r0, 0, 13, 13
    subis r0, r4, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_8016DAB0_00000800
    lwz r3, 0xc0(r3)
    subi r31, r3, 0xf
lbl_fn_8016DAB0_00000800:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8016DC14(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    lwz r0, 0xfc4(r3)
    cmplw r0, r4
    beq lbl_fn_8016DC14_000008C4
    stw r4, 0xfc4(r3)
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_8016DC14_000008C4
    bl fn_803E6BB4
    cmpwi r31, 0x0
    bne lbl_fn_8016DC14_000008C4
    cmpwi r30, 0x0
    beq lbl_fn_8016DC14_00000898
    lis r4, lbl_80737490@ha
    lfs f1, lbl_80881964
    addi r4, r4, lbl_80737490@l
    addi r3, r1, 0xc
    lwz r4, 0x20(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8016DC14_000008C4
lbl_fn_8016DC14_00000898:
    lis r4, lbl_80737490@ha
    lfs f1, lbl_80881964
    addi r4, r4, lbl_80737490@l
    addi r3, r1, 0x8
    lwz r4, 0x24(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8016DC14_000008C4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8016DCD4(void)
{
    nofralloc
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8016DCD4_00000908
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_8016DCD4_00000908
    li r6, 0x1
lbl_fn_8016DCD4_00000908:
    cmpwi r6, 0x0
    beq lbl_fn_8016DCD4_00000924
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8016DCD4_00000924
    li r4, 0x1
lbl_fn_8016DCD4_00000924:
    cmpwi r4, 0x0
    beq lbl_fn_8016DCD4_00000958
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8016DCD4_0000094C
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_8016DCD4_0000094C
    li r4, 0x1
lbl_fn_8016DCD4_0000094C:
    cmpwi r4, 0x0
    bne lbl_fn_8016DCD4_00000958
    li r5, 0x1
lbl_fn_8016DCD4_00000958:
    cmpwi r5, 0x0
    bne lbl_fn_8016DCD4_00000968
    li r3, 0x0
    blr
lbl_fn_8016DCD4_00000968:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_8016DCD4_0000098C
    lwz r0, 0xf94(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8016DCD4_0000098C
    li r3, 0x0
    blr
lbl_fn_8016DCD4_0000098C:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8016DCD4_000009B0
    lwz r3, 0x560(r3)
    subi r0, r3, 0x11
    cmplwi r0, 0x2
    bgt lbl_fn_8016DCD4_000009B0
    li r3, 0x0
    blr
lbl_fn_8016DCD4_000009B0:
    li r3, 0x1
    blr
}

asm void fn_8016DDB0(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_8016DDB0_00000AA8
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8016DDB0_000009EC
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_8016DDB0_000009EC
    li r6, 0x1
lbl_fn_8016DDB0_000009EC:
    cmpwi r6, 0x0
    beq lbl_fn_8016DDB0_00000A08
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8016DDB0_00000A08
    li r4, 0x1
lbl_fn_8016DDB0_00000A08:
    cmpwi r4, 0x0
    beq lbl_fn_8016DDB0_00000A3C
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8016DDB0_00000A30
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_8016DDB0_00000A30
    li r4, 0x1
lbl_fn_8016DDB0_00000A30:
    cmpwi r4, 0x0
    bne lbl_fn_8016DDB0_00000A3C
    li r5, 0x1
lbl_fn_8016DDB0_00000A3C:
    cmpwi r5, 0x0
    bne lbl_fn_8016DDB0_00000A4C
    li r0, 0x0
    b lbl_fn_8016DDB0_00000A98
lbl_fn_8016DDB0_00000A4C:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_8016DDB0_00000A70
    lwz r0, 0xf94(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8016DDB0_00000A70
    li r0, 0x0
    b lbl_fn_8016DDB0_00000A98
lbl_fn_8016DDB0_00000A70:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8016DDB0_00000A94
    lwz r4, 0x560(r3)
    subi r0, r4, 0x11
    cmplwi r0, 0x2
    bgt lbl_fn_8016DDB0_00000A94
    li r0, 0x0
    b lbl_fn_8016DDB0_00000A98
lbl_fn_8016DDB0_00000A94:
    li r0, 0x1
lbl_fn_8016DDB0_00000A98:
    cmpwi r0, 0x0
    bne lbl_fn_8016DDB0_00000AA8
    li r3, 0x0
    blr
lbl_fn_8016DDB0_00000AA8:
    lwz r4, 0x12a4(r3)
    extrwi. r0, r4, 1, 25
    bne lbl_fn_8016DDB0_00000AE0
    lwz r0, 0x1208(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8016DDB0_00000AE0
    extrwi. r0, r4, 1, 28
    bne lbl_fn_8016DDB0_00000AE0
    lwz r0, 0xf54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8016DDB0_00000AE0
    lwz r0, 0x139c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8016DDB0_00000AE8
lbl_fn_8016DDB0_00000AE0:
    li r3, 0x0
    blr
lbl_fn_8016DDB0_00000AE8:
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8016DDB0_00000B08
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x1
    beq lbl_fn_8016DDB0_00000B28
    li r3, 0x0
    blr
lbl_fn_8016DDB0_00000B08:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8016DDB0_00000B20
    lwz r0, 0xf0c(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8016DDB0_00000B28
lbl_fn_8016DDB0_00000B20:
    li r3, 0x0
    blr
lbl_fn_8016DDB0_00000B28:
    lwz r0, 0x12a8(r3)
    extrwi. r0, r0, 1, 22
    beq lbl_fn_8016DDB0_00000B3C
    li r3, 0x0
    blr
lbl_fn_8016DDB0_00000B3C:
    li r3, 0x1
    blr
}

asm void fn_8016DF3C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x48(r3)
    cmpw r0, r4
    beq lbl_fn_8016DF3C_00001074
    cmpwi r0, 0x0
    bne lbl_fn_8016DF3C_00000DEC
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8016DF3C_00000B88
    li r0, 0x2
    stw r0, 0x55c(r3)
lbl_fn_8016DF3C_00000B88:
    lwz r0, 0x564(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8016DF3C_00000B9C
    li r0, 0x2
    stw r0, 0x564(r3)
lbl_fn_8016DF3C_00000B9C:
    li r4, 0x0
    addi r3, r3, 0xc58
    bl fn_8011BEB8
    lwz r0, 0x12a4(r30)
    srwi. r0, r0, 31
    beq lbl_fn_8016DF3C_00000CF0
    lwz r0, 0x12a4(r30)
    clrlwi r0, r0, 2
    stw r0, 0x12a4(r30)
    lwz r3, lbl_8087F430
    lwz r4, 0x10d8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8016DF3C_00000C18
    lwz r3, 0xc38(r30)
    cmpwi r3, 0x0
    ble lbl_fn_8016DF3C_00000C18
    lwz r0, 0xc3c(r30)
    cmpwi r0, 0x0
    ble lbl_fn_8016DF3C_00000C18
    subi r0, r3, 0x1
    lwz r3, 0xb0(r4)
    slwi r0, r0, 6
    li r5, 0x0
    add r3, r3, r0
    stw r5, 0x3c(r3)
    lwz r3, 0xc3c(r30)
    lwz r4, 0xb0(r4)
    subi r0, r3, 0x1
    slwi r0, r0, 6
    add r3, r4, r0
    stw r5, 0x3c(r3)
lbl_fn_8016DF3C_00000C18:
    lwz r4, 0x48(r30)
    cmpwi r4, 0x0
    bne lbl_fn_8016DF3C_00000C4C
    lwz r3, lbl_8087F0A8
    lwz r0, 0x278(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8016DF3C_00000C4C
    lwz r3, 0x5c(r30)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8016DF3C_00000C4C
    li r0, 0x1
    b lbl_fn_8016DF3C_00000C6C
lbl_fn_8016DF3C_00000C4C:
    cmpwi r4, 0x0
    bne lbl_fn_8016DF3C_00000C68
    lwz r0, 0x12a8(r30)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_8016DF3C_00000C68
    li r0, 0x1
    b lbl_fn_8016DF3C_00000C6C
lbl_fn_8016DF3C_00000C68:
    li r0, 0x0
lbl_fn_8016DF3C_00000C6C:
    cmpwi r0, 0x0
    beq lbl_fn_8016DF3C_00000CF0
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_8016DF3C_00000CD0
    lwz r3, 0x648(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8016DF3C_00000C9C
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8016DF3C_00000C9C:
    lwz r3, 0x64c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8016DF3C_00000CB0
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8016DF3C_00000CB0:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r30)
    mr r3, r30
    stw r0, 0x648(r30)
    stw r0, 0x64c(r30)
    bl fn_8014C228
    b lbl_fn_8016DF3C_00000CF0
lbl_fn_8016DF3C_00000CD0:
    lwz r0, 0x674(r30)
    cmpwi r0, 0x0
    blt lbl_fn_8016DF3C_00000CF0
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_8016DF3C_00000CF0:
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_8016DF3C_00000D08
    lwz r0, 0x12a4(r30)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r30)
lbl_fn_8016DF3C_00000D08:
    lwz r7, 0xd1c(r30)
    cmpwi r7, 0x0
    beq lbl_fn_8016DF3C_00000DB0
    lwz r0, 0x12a8(r7)
    mr r5, r7
    lwz r6, 0x1028(r7)
    li r4, 0x0
    extrwi r0, r0, 1, 15
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_8016DF3C_00000D50
lbl_fn_8016DF3C_00000D34:
    lwz r0, 0xfe8(r5)
    cmplw r0, r30
    bne lbl_fn_8016DF3C_00000D48
    li r0, 0x1
    b lbl_fn_8016DF3C_00000D6C
lbl_fn_8016DF3C_00000D48:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
lbl_fn_8016DF3C_00000D50:
    cmpwi r3, 0x0
    mr r0, r6
    bne lbl_fn_8016DF3C_00000D60
    slwi r0, r6, 1
lbl_fn_8016DF3C_00000D60:
    cmpw r4, r0
    blt lbl_fn_8016DF3C_00000D34
    li r0, 0x0
lbl_fn_8016DF3C_00000D6C:
    cmpwi r0, 0x0
    beq lbl_fn_8016DF3C_00000DB0
    li r0, 0x10
    mr r4, r7
    li r3, 0x0
    mtctr r0
lbl_fn_8016DF3C_00000D84:
    lwz r0, 0xfe8(r4)
    cmplw r0, r30
    bne lbl_fn_8016DF3C_00000DA4
    slwi r0, r3, 2
    li r4, 0x0
    add r3, r7, r0
    stw r4, 0xfe8(r3)
    b lbl_fn_8016DF3C_00000DB0
lbl_fn_8016DF3C_00000DA4:
    addi r4, r4, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_8016DF3C_00000D84
lbl_fn_8016DF3C_00000DB0:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_8016DF3C_00000DD0
    mr r4, r30
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r30
    bl fn_80105B3C
lbl_fn_8016DF3C_00000DD0:
    lwz r0, 0x12a8(r30)
    lfs f0, lbl_8088196C
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x12a8(r30)
    stfs f0, 0xfb8(r30)
    stfs f0, 0xfbc(r30)
    b lbl_fn_8016DF3C_00001068
lbl_fn_8016DF3C_00000DEC:
    cmpwi r4, 0x0
    bne lbl_fn_8016DF3C_00001068
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8016DF3C_00000E08
    li r0, 0x1
    stw r0, 0x55c(r3)
lbl_fn_8016DF3C_00000E08:
    lwz r0, 0x564(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8016DF3C_00000E1C
    li r0, 0x1
    stw r0, 0x564(r3)
lbl_fn_8016DF3C_00000E1C:
    li r4, 0x0
    addi r3, r3, 0xc58
    bl fn_8011BEB8
    lwz r0, 0x12a4(r30)
    srwi. r0, r0, 31
    beq lbl_fn_8016DF3C_00000F70
    lwz r0, 0x12a4(r30)
    clrlwi r0, r0, 2
    stw r0, 0x12a4(r30)
    lwz r3, lbl_8087F430
    lwz r4, 0x10d8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8016DF3C_00000E98
    lwz r3, 0xc38(r30)
    cmpwi r3, 0x0
    ble lbl_fn_8016DF3C_00000E98
    lwz r0, 0xc3c(r30)
    cmpwi r0, 0x0
    ble lbl_fn_8016DF3C_00000E98
    subi r0, r3, 0x1
    lwz r3, 0xb0(r4)
    slwi r0, r0, 6
    li r5, 0x0
    add r3, r3, r0
    stw r5, 0x3c(r3)
    lwz r3, 0xc3c(r30)
    lwz r4, 0xb0(r4)
    subi r0, r3, 0x1
    slwi r0, r0, 6
    add r3, r4, r0
    stw r5, 0x3c(r3)
lbl_fn_8016DF3C_00000E98:
    lwz r4, 0x48(r30)
    cmpwi r4, 0x0
    bne lbl_fn_8016DF3C_00000ECC
    lwz r3, lbl_8087F0A8
    lwz r0, 0x278(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8016DF3C_00000ECC
    lwz r3, 0x5c(r30)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8016DF3C_00000ECC
    li r0, 0x1
    b lbl_fn_8016DF3C_00000EEC
lbl_fn_8016DF3C_00000ECC:
    cmpwi r4, 0x0
    bne lbl_fn_8016DF3C_00000EE8
    lwz r0, 0x12a8(r30)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_8016DF3C_00000EE8
    li r0, 0x1
    b lbl_fn_8016DF3C_00000EEC
lbl_fn_8016DF3C_00000EE8:
    li r0, 0x0
lbl_fn_8016DF3C_00000EEC:
    cmpwi r0, 0x0
    beq lbl_fn_8016DF3C_00000F70
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_8016DF3C_00000F50
    lwz r3, 0x648(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8016DF3C_00000F1C
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8016DF3C_00000F1C:
    lwz r3, 0x64c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8016DF3C_00000F30
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8016DF3C_00000F30:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r30)
    mr r3, r30
    stw r0, 0x648(r30)
    stw r0, 0x64c(r30)
    bl fn_8014C228
    b lbl_fn_8016DF3C_00000F70
lbl_fn_8016DF3C_00000F50:
    lwz r0, 0x674(r30)
    cmpwi r0, 0x0
    blt lbl_fn_8016DF3C_00000F70
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_8016DF3C_00000F70:
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_8016DF3C_00000F88
    lwz r0, 0x12a4(r30)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r30)
lbl_fn_8016DF3C_00000F88:
    lwz r7, 0xd1c(r30)
    cmpwi r7, 0x0
    beq lbl_fn_8016DF3C_00001030
    lwz r0, 0x12a8(r7)
    mr r5, r7
    lwz r6, 0x1028(r7)
    li r4, 0x0
    extrwi r0, r0, 1, 15
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_8016DF3C_00000FD0
lbl_fn_8016DF3C_00000FB4:
    lwz r0, 0xfe8(r5)
    cmplw r0, r30
    bne lbl_fn_8016DF3C_00000FC8
    li r0, 0x1
    b lbl_fn_8016DF3C_00000FEC
lbl_fn_8016DF3C_00000FC8:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
lbl_fn_8016DF3C_00000FD0:
    cmpwi r3, 0x0
    mr r0, r6
    bne lbl_fn_8016DF3C_00000FE0
    slwi r0, r6, 1
lbl_fn_8016DF3C_00000FE0:
    cmpw r4, r0
    blt lbl_fn_8016DF3C_00000FB4
    li r0, 0x0
lbl_fn_8016DF3C_00000FEC:
    cmpwi r0, 0x0
    beq lbl_fn_8016DF3C_00001030
    li r0, 0x10
    mr r4, r7
    li r3, 0x0
    mtctr r0
lbl_fn_8016DF3C_00001004:
    lwz r0, 0xfe8(r4)
    cmplw r0, r30
    bne lbl_fn_8016DF3C_00001024
    slwi r0, r3, 2
    li r4, 0x0
    add r3, r7, r0
    stw r4, 0xfe8(r3)
    b lbl_fn_8016DF3C_00001030
lbl_fn_8016DF3C_00001024:
    addi r4, r4, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_8016DF3C_00001004
lbl_fn_8016DF3C_00001030:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_8016DF3C_00001050
    mr r4, r30
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r30
    bl fn_80105B3C
lbl_fn_8016DF3C_00001050:
    lwz r0, 0x12a8(r30)
    lfs f0, lbl_8088196C
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x12a8(r30)
    stfs f0, 0xfb8(r30)
    stfs f0, 0xfbc(r30)
lbl_fn_8016DF3C_00001068:
    lwz r0, 0x48(r30)
    stw r0, 0x4c(r30)
    stw r31, 0x48(r30)
lbl_fn_8016DF3C_00001074:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8016E484(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, 0x50(r3)
    bl fn_80219558
    cmpwi r3, 0x0
    li r0, 0x0
    blt lbl_fn_8016E484_000010B8
    cmpwi r3, 0x7
    bge lbl_fn_8016E484_000010B8
    li r0, 0x1
lbl_fn_8016E484_000010B8:
    mr r3, r0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8016E4C4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_8016E4C4_00001114
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x54c(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x98(r12)
    mtctr r12
    bctrl
    b lbl_fn_8016E4C4_00001134
lbl_fn_8016E4C4_00001114:
    lwz r0, 0x54c(r3)
    li r4, 0x0
    ori r0, r0, 0x8
    stw r0, 0x54c(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
lbl_fn_8016E4C4_00001134:
    cmpwi r30, 0x0
    beq lbl_fn_8016E4C4_00001164
    lwz r3, 0x648(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8016E4C4_000011DC
    mr r4, r29
    bl fn_80044C50
    cmpwi r3, 0x0
    beq lbl_fn_8016E4C4_000011DC
    lwz r3, 0x648(r29)
    bl fn_80044CCC
    b lbl_fn_8016E4C4_000011DC
lbl_fn_8016E4C4_00001164:
    lwz r3, 0x648(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8016E4C4_00001178
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8016E4C4_00001178:
    lwz r3, 0x64c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8016E4C4_0000118C
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8016E4C4_0000118C:
    addi r30, r29, 0x680
    li r31, 0x0
lbl_fn_8016E4C4_00001194:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8016E4C4_000011A8
    li r4, 0x0
    bl fn_8056639C
lbl_fn_8016E4C4_000011A8:
    addi r31, r31, 0x1
    addi r30, r30, 0x4
    cmplwi r31, 0x8
    blt lbl_fn_8016E4C4_00001194
    lwz r3, 0x12a8(r29)
    extrwi. r0, r3, 1, 13
    beq lbl_fn_8016E4C4_000011DC
    rlwinm r0, r3, 0, 14, 12
    stw r0, 0x12a8(r29)
    mr r4, r29
    li r5, 0x0
    lwz r3, lbl_8087F048
    bl fn_80107CA8
lbl_fn_8016E4C4_000011DC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8016E5F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_8016E5F0_00001240
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x54c(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x98(r12)
    mtctr r12
    bctrl
    b lbl_fn_8016E5F0_00001308
lbl_fn_8016E5F0_00001240:
    lwz r0, 0x54c(r3)
    li r4, 0x0
    ori r0, r0, 0x8
    stw r0, 0x54c(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    cmpwi r30, 0x0
    beq lbl_fn_8016E5F0_00001290
    lwz r3, 0x648(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8016E5F0_00001308
    mr r4, r29
    bl fn_80044C50
    cmpwi r3, 0x0
    beq lbl_fn_8016E5F0_00001308
    lwz r3, 0x648(r29)
    bl fn_80044CCC
    b lbl_fn_8016E5F0_00001308
lbl_fn_8016E5F0_00001290:
    lwz r3, 0x648(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8016E5F0_000012A4
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8016E5F0_000012A4:
    lwz r3, 0x64c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8016E5F0_000012B8
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8016E5F0_000012B8:
    addi r30, r29, 0x680
    li r31, 0x0
lbl_fn_8016E5F0_000012C0:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8016E5F0_000012D4
    li r4, 0x0
    bl fn_8056639C
lbl_fn_8016E5F0_000012D4:
    addi r31, r31, 0x1
    addi r30, r30, 0x4
    cmplwi r31, 0x8
    blt lbl_fn_8016E5F0_000012C0
    lwz r3, 0x12a8(r29)
    extrwi. r0, r3, 1, 13
    beq lbl_fn_8016E5F0_00001308
    rlwinm r0, r3, 0, 14, 12
    stw r0, 0x12a8(r29)
    mr r4, r29
    li r5, 0x0
    lwz r3, lbl_8087F048
    bl fn_80107CA8
lbl_fn_8016E5F0_00001308:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8016E71C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_8016E71C_00001374
    lwz r3, 0x648(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8016E71C_000013EC
    mr r4, r29
    bl fn_80044C50
    cmpwi r3, 0x0
    beq lbl_fn_8016E71C_000013EC
    lwz r3, 0x648(r29)
    bl fn_80044CCC
    b lbl_fn_8016E71C_000013EC
lbl_fn_8016E71C_00001374:
    lwz r3, 0x648(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8016E71C_00001388
    mr r4, r30
    bl fn_80044E0C
lbl_fn_8016E71C_00001388:
    lwz r3, 0x64c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8016E71C_0000139C
    mr r4, r30
    bl fn_80044E0C
lbl_fn_8016E71C_0000139C:
    addi r30, r29, 0x680
    li r31, 0x0
lbl_fn_8016E71C_000013A4:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8016E71C_000013B8
    li r4, 0x0
    bl fn_8056639C
lbl_fn_8016E71C_000013B8:
    addi r31, r31, 0x1
    addi r30, r30, 0x4
    cmplwi r31, 0x8
    blt lbl_fn_8016E71C_000013A4
    lwz r3, 0x12a8(r29)
    extrwi. r0, r3, 1, 13
    beq lbl_fn_8016E71C_000013EC
    rlwinm r0, r3, 0, 14, 12
    stw r0, 0x12a8(r29)
    mr r4, r29
    li r5, 0x0
    lwz r3, lbl_8087F048
    bl fn_80107CA8
lbl_fn_8016E71C_000013EC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8016E800(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r3, 0x680
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r4
lbl_fn_8016E800_0000142C:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8016E800_00001440
    mr r4, r29
    bl fn_8056639C
lbl_fn_8016E800_00001440:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmplwi r30, 0x8
    blt lbl_fn_8016E800_0000142C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8016E864(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r4, 0x4330
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    lfs f31, lbl_80881964
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r6, 0x7e0(r3)
    stw r4, 0x8(r1)
    rlwinm r0, r6, 0, 25, 25
    cmplwi r0, 0x40
    stw r4, 0x10(r1)
    bne lbl_fn_8016E864_0000151C
    lwz r0, 0xf98(r3)
    lis r5, lbl_80737808@ha
    lwz r4, 0xf94(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    xoris r4, r4, 0x8000
    lfd f2, lbl_80737808@l(r5)
    stw r4, 0xc(r1)
    lfd f0, 0x10(r1)
    lfd f1, 0x8(r1)
    fsubs f0, f0, f2
    lfs f3, lbl_80881A00
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fsubs f0, f31, f0
    fsubs f0, f31, f0
    fcmpo cr0, f3, f0
    ble lbl_fn_8016E864_000014F4
    b lbl_fn_8016E864_00001518
lbl_fn_8016E864_000014F4:
    stw r4, 0xc(r1)
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    fsubs f0, f31, f0
    fsubs f3, f31, f0
lbl_fn_8016E864_00001518:
    fmuls f31, f31, f3
lbl_fn_8016E864_0000151C:
    rlwinm r0, r6, 0, 16, 16
    cmplwi r0, 0x8000
    bne lbl_fn_8016E864_00001530
    lfs f0, lbl_808819A8
    fmuls f31, f31, f0
lbl_fn_8016E864_00001530:
    addi r3, r3, 0x7d4
    bl fn_8012DB04
    lwz r0, 0x7e8(r31)
    fmuls f31, f31, f1
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_8016E864_00001558
    lwz r3, lbl_8087F048
    bl fn_8010CA34
    fmuls f31, f31, f1
lbl_fn_8016E864_00001558:
    fmr f1, f31
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8016E970(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r3
    lwz r0, 0x55c(r3)
    cmpw r0, r4
    beq lbl_fn_8016E970_00001734
    cmpwi r0, 0x6
    beq lbl_fn_8016E970_000015B4
    cmpwi r0, 0x8
    beq lbl_fn_8016E970_000015B4
    stw r0, 0x564(r3)
lbl_fn_8016E970_000015B4:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8016E970_00001734
    lwz r0, 0xf80(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8016E970_000015EC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x20(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
    b lbl_fn_8016E970_00001608
lbl_fn_8016E970_000015EC:
    lis r5, lbl_8077C0B8@ha
    lwzu r4, lbl_8077C0B8@l(r5)
    stw r4, 0x20(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
lbl_fn_8016E970_00001608:
    lwz r5, 0x20(r1)
    addi r3, r1, 0x14
    lwz r4, 0x24(r1)
    lwz r0, 0x28(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016E970_00001644
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016E970_00001644:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    beq lbl_fn_8016E970_00001704
    cmpwi r0, 0x8
    beq lbl_fn_8016E970_0000165C
    stw r0, 0x564(r30)
lbl_fn_8016E970_0000165C:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8016E970_00001704
    lwz r0, 0xf80(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8016E970_00001694
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8016E970_000016B0
lbl_fn_8016E970_00001694:
    lis r5, lbl_8077C0C4@ha
    lwzu r4, lbl_8077C0C4@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8016E970_000016B0:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016E970_000016EC
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016E970_000016EC:
    mr r3, r30
    li r4, 0x6
    bl fn_8016E970
    addi r3, r30, 0xf80
    li r4, 0x0
    bl fn_8013A21C
lbl_fn_8016E970_00001704:
    lwz r3, 0xf80(r30)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r30)
    cmpwi r3, 0x0
    stw r0, 0xf80(r30)
    beq lbl_fn_8016E970_00001734
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016E970_00001734:
    stw r31, 0x55c(r30)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8016EB48(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xd0
    bl _savegpr_27
    lwz r0, 0x55c(r3)
    lis r31, lbl_8077A720@ha
    mr r27, r3
    mr r28, r4
    cmpwi r0, 0x6
    mr r29, r5
    mr r30, r6
    addi r31, r31, lbl_8077A720@l
    bne lbl_fn_8016EB48_0000180C
    lwz r0, 0xf80(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8016EB48_000017B4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x5c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    b lbl_fn_8016EB48_000017D0
lbl_fn_8016EB48_000017B4:
    addi r3, r31, 0x19b0
    lwz r5, 0x19b0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r0, 0x64(r1)
lbl_fn_8016EB48_000017D0:
    lwz r5, 0x5c(r1)
    addi r3, r1, 0x38
    lwz r4, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016EB48_0000180C
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016EB48_0000180C:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_8016EB48_000019C0
    cmpwi r0, 0x8
    beq lbl_fn_8016EB48_00001824
    stw r0, 0x564(r27)
lbl_fn_8016EB48_00001824:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8016EB48_000019C0
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8016EB48_0000185C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x68(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x6c(r1)
    stw r0, 0x70(r1)
    b lbl_fn_8016EB48_00001878
lbl_fn_8016EB48_0000185C:
    addi r3, r31, 0x19bc
    lwz r5, 0x19bc(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    stw r0, 0x70(r1)
lbl_fn_8016EB48_00001878:
    lwz r5, 0x68(r1)
    addi r3, r1, 0x50
    lwz r4, 0x6c(r1)
    lwz r0, 0x70(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r0, 0x58(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016EB48_000018B4
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016EB48_000018B4:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_8016EB48_00001990
    cmpwi r0, 0x8
    beq lbl_fn_8016EB48_000018CC
    stw r0, 0x564(r27)
lbl_fn_8016EB48_000018CC:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8016EB48_00001990
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8016EB48_00001904
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x74(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    b lbl_fn_8016EB48_00001920
lbl_fn_8016EB48_00001904:
    addi r3, r31, 0x19c8
    lwz r5, 0x19c8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x74(r1)
    stw r4, 0x78(r1)
    stw r0, 0x7c(r1)
lbl_fn_8016EB48_00001920:
    lwz r5, 0x74(r1)
    addi r3, r1, 0x44
    lwz r4, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016EB48_0000195C
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016EB48_0000195C:
    mr r3, r27
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r27)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_8016EB48_00001990
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016EB48_00001990:
    lwz r3, 0xf80(r27)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r27)
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_8016EB48_000019C0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016EB48_000019C0:
    lwz r3, 0xf80(r27)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r27)
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_8016EB48_000019F0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016EB48_000019F0:
    lwz r0, 0x48(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8016EB48_00001BE4
    lwz r3, 0x7e0(r27)
    rlwinm r0, r3, 0, 23, 23
    cmplwi r0, 0x100
    beq lbl_fn_8016EB48_00001BE4
    rlwinm r3, r3, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    beq lbl_fn_8016EB48_00001BE4
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x1
    beq lbl_fn_8016EB48_00001BD8
    cmpwi r0, 0x6
    beq lbl_fn_8016EB48_00001A3C
    cmpwi r0, 0x8
    beq lbl_fn_8016EB48_00001A3C
    stw r0, 0x564(r27)
lbl_fn_8016EB48_00001A3C:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8016EB48_00001BD8
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8016EB48_00001A74
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x80(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x84(r1)
    stw r0, 0x88(r1)
    b lbl_fn_8016EB48_00001A90
lbl_fn_8016EB48_00001A74:
    addi r3, r31, 0x19d4
    lwz r5, 0x19d4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x80(r1)
    stw r4, 0x84(r1)
    stw r0, 0x88(r1)
lbl_fn_8016EB48_00001A90:
    lwz r5, 0x80(r1)
    addi r3, r1, 0x20
    lwz r4, 0x84(r1)
    lwz r0, 0x88(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016EB48_00001ACC
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016EB48_00001ACC:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_8016EB48_00001BA8
    cmpwi r0, 0x8
    beq lbl_fn_8016EB48_00001AE4
    stw r0, 0x564(r27)
lbl_fn_8016EB48_00001AE4:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8016EB48_00001BA8
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8016EB48_00001B1C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x8c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x90(r1)
    stw r0, 0x94(r1)
    b lbl_fn_8016EB48_00001B38
lbl_fn_8016EB48_00001B1C:
    addi r3, r31, 0x19e0
    lwz r5, 0x19e0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x8c(r1)
    stw r4, 0x90(r1)
    stw r0, 0x94(r1)
lbl_fn_8016EB48_00001B38:
    lwz r5, 0x8c(r1)
    addi r3, r1, 0x2c
    lwz r4, 0x90(r1)
    lwz r0, 0x94(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016EB48_00001B74
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016EB48_00001B74:
    mr r3, r27
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r27)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_8016EB48_00001BA8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016EB48_00001BA8:
    lwz r3, 0xf80(r27)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r27)
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_8016EB48_00001BD8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016EB48_00001BD8:
    li r0, 0x1
    stw r0, 0x55c(r27)
    b lbl_fn_8016EB48_00001DA8
lbl_fn_8016EB48_00001BE4:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x2
    beq lbl_fn_8016EB48_00001DA0
    cmpwi r0, 0x6
    beq lbl_fn_8016EB48_00001C04
    cmpwi r0, 0x8
    beq lbl_fn_8016EB48_00001C04
    stw r0, 0x564(r27)
lbl_fn_8016EB48_00001C04:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8016EB48_00001DA0
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8016EB48_00001C3C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x98(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x9c(r1)
    stw r0, 0xa0(r1)
    b lbl_fn_8016EB48_00001C58
lbl_fn_8016EB48_00001C3C:
    addi r3, r31, 0x19ec
    lwz r5, 0x19ec(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x98(r1)
    stw r4, 0x9c(r1)
    stw r0, 0xa0(r1)
lbl_fn_8016EB48_00001C58:
    lwz r5, 0x98(r1)
    addi r3, r1, 0x8
    lwz r4, 0x9c(r1)
    lwz r0, 0xa0(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016EB48_00001C94
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016EB48_00001C94:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_8016EB48_00001D70
    cmpwi r0, 0x8
    beq lbl_fn_8016EB48_00001CAC
    stw r0, 0x564(r27)
lbl_fn_8016EB48_00001CAC:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8016EB48_00001D70
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8016EB48_00001CE4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0xa4(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0xa8(r1)
    stw r0, 0xac(r1)
    b lbl_fn_8016EB48_00001D00
lbl_fn_8016EB48_00001CE4:
    addi r3, r31, 0x19f8
    lwz r5, 0x19f8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0xa4(r1)
    stw r4, 0xa8(r1)
    stw r0, 0xac(r1)
lbl_fn_8016EB48_00001D00:
    lwz r5, 0xa4(r1)
    addi r3, r1, 0x14
    lwz r4, 0xa8(r1)
    lwz r0, 0xac(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016EB48_00001D3C
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016EB48_00001D3C:
    mr r3, r27
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r27)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_8016EB48_00001D70
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016EB48_00001D70:
    lwz r3, 0xf80(r27)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r27)
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_8016EB48_00001DA0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016EB48_00001DA0:
    li r0, 0x2
    stw r0, 0x55c(r27)
lbl_fn_8016EB48_00001DA8:
    cmpwi r28, 0x0
    bne lbl_fn_8016EB48_00001EF8
    lwz r0, 0x12a4(r27)
    srwi. r0, r0, 31
    beq lbl_fn_8016EB48_00001EF8
    lwz r0, 0x12a4(r27)
    clrlwi r0, r0, 2
    stw r0, 0x12a4(r27)
    lwz r3, lbl_8087F430
    lwz r4, 0x10d8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8016EB48_00001E20
    lwz r3, 0xc38(r27)
    cmpwi r3, 0x0
    ble lbl_fn_8016EB48_00001E20
    lwz r0, 0xc3c(r27)
    cmpwi r0, 0x0
    ble lbl_fn_8016EB48_00001E20
    subi r0, r3, 0x1
    lwz r3, 0xb0(r4)
    slwi r0, r0, 6
    li r5, 0x0
    add r3, r3, r0
    stw r5, 0x3c(r3)
    lwz r3, 0xc3c(r27)
    lwz r4, 0xb0(r4)
    subi r0, r3, 0x1
    slwi r0, r0, 6
    add r3, r4, r0
    stw r5, 0x3c(r3)
lbl_fn_8016EB48_00001E20:
    lwz r4, 0x48(r27)
    cmpwi r4, 0x0
    bne lbl_fn_8016EB48_00001E54
    lwz r3, lbl_8087F0A8
    lwz r0, 0x278(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8016EB48_00001E54
    lwz r3, 0x5c(r27)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8016EB48_00001E54
    li r0, 0x1
    b lbl_fn_8016EB48_00001E74
lbl_fn_8016EB48_00001E54:
    cmpwi r4, 0x0
    bne lbl_fn_8016EB48_00001E70
    lwz r0, 0x12a8(r27)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_8016EB48_00001E70
    li r0, 0x1
    b lbl_fn_8016EB48_00001E74
lbl_fn_8016EB48_00001E70:
    li r0, 0x0
lbl_fn_8016EB48_00001E74:
    cmpwi r0, 0x0
    beq lbl_fn_8016EB48_00001EF8
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_8016EB48_00001ED8
    lwz r3, 0x648(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8016EB48_00001EA4
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8016EB48_00001EA4:
    lwz r3, 0x64c(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8016EB48_00001EB8
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8016EB48_00001EB8:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r27)
    mr r3, r27
    stw r0, 0x648(r27)
    stw r0, 0x64c(r27)
    bl fn_8014C228
    b lbl_fn_8016EB48_00001EF8
lbl_fn_8016EB48_00001ED8:
    lwz r0, 0x674(r27)
    cmpwi r0, 0x0
    blt lbl_fn_8016EB48_00001EF8
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_8016EB48_00001EF8:
    cmpwi r29, 0x0
    bne lbl_fn_8016EB48_00001F18
    lwz r0, 0x12a4(r27)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_8016EB48_00001F18
    lwz r0, 0x12a4(r27)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r27)
lbl_fn_8016EB48_00001F18:
    cmpwi r30, 0x0
    bne lbl_fn_8016EB48_00001F58
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_8016EB48_00001F40
    mr r4, r27
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r27
    bl fn_80105B3C
lbl_fn_8016EB48_00001F40:
    lwz r0, 0x12a8(r27)
    lfs f0, lbl_8088196C
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x12a8(r27)
    stfs f0, 0xfb8(r27)
    stfs f0, 0xfbc(r27)
lbl_fn_8016EB48_00001F58:
    addi r11, r1, 0xd0
    bl _restgpr_27
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}
