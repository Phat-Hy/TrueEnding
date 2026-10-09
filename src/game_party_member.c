#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_800185B4(void);
extern void fn_80084320(void);
extern void fn_80097D40(void);
extern void fn_801059F8(void);
extern void fn_80105B3C(void);
extern void fn_8016E970(void);
extern void fn_801880D0(void);
extern void fn_80188BD8(void);
extern void fn_8018906C(void);
extern void fn_80189444(void);
extern void fn_801BE10C(void);
extern void fn_801C3DCC(void);
extern void fn_801C3FB0(void);
extern void fn_801C93C4(void);
extern void fn_80219558(void);
extern void fn_80219E6C(void);
extern void fn_8021A888(void);
extern void fn_803761BC(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80737808[];
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077A720[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE68;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8088196C;

/* Function declarations */
void fn_80160170(void);
void fn_80160324(void);
void fn_8016034C(void);
void fn_801603CC(void);
void fn_801606DC(void);
void fn_80160F54(void);
void fn_8016125C(void);
void fn_80161570(void);
void fn_80161880(void);

asm void fn_80160170(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80160170_00000048
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1d
    bne lbl_fn_80160170_00000048
    li r4, 0x1
lbl_fn_80160170_00000048:
    cmpwi r4, 0x0
    beq lbl_fn_80160170_00000194
    lwz r3, 0x48(r3)
    li r28, 0x0
    li r0, 0x0
    li r4, 0x0
    cmpwi r3, 0x3
    bne lbl_fn_80160170_0000007C
    lwz r3, lbl_8087F0A8
    lwz r3, 0x98(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80160170_0000007C
    li r4, 0x1
lbl_fn_80160170_0000007C:
    cmpwi r4, 0x0
    beq lbl_fn_80160170_00000094
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80160170_00000094
    li r0, 0x1
lbl_fn_80160170_00000094:
    cmpwi r0, 0x0
    beq lbl_fn_80160170_000000B0
    lwz r3, lbl_8087F430
    bl fn_803761BC
    cmpwi r3, 0x0
    beq lbl_fn_80160170_000000B0
    li r28, 0x1
lbl_fn_80160170_000000B0:
    cmpwi r28, 0x0
    beq lbl_fn_80160170_000000F0
    lwz r3, lbl_8087EE68
    cmpwi r3, 0x0
    beq lbl_fn_80160170_000000D8
    mr r4, r29
    mr r5, r30
    bl fn_800185B4
    mr r28, r3
    b lbl_fn_80160170_000000DC
lbl_fn_80160170_000000D8:
    li r28, 0x0
lbl_fn_80160170_000000DC:
    lwz r3, 0x50(r29)
    bl fn_80219558
    cmpwi r3, 0x4
    bne lbl_fn_80160170_000000F0
    cmpwi r28, 0x0
lbl_fn_80160170_000000F0:
    lwz r4, 0x638(r29)
    lis r0, 0x4330
    lis r3, lbl_80737808@ha
    stw r4, 0x63c(r29)
    lfd f3, lbl_80737808@l(r3)
    mr r3, r30
    stw r30, 0x638(r29)
    lwz r4, 0xc0(r30)
    stw r0, 0x8(r1)
    xoris r0, r4, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f3
    stfs f0, 0xfbc(r29)
    lfs f0, 0x58(r30)
    stfs f0, 0xf78(r29)
    bl fn_8021A888
    cmpwi r3, 0x0
    beq lbl_fn_80160170_00000148
    li r0, 0x0
    stw r0, 0xf7c(r29)
    b lbl_fn_80160170_0000014C
lbl_fn_80160170_00000148:
    stw r31, 0xf7c(r29)
lbl_fn_80160170_0000014C:
    lwz r3, 0x638(r29)
    lbz r0, 0x2(r3)
    cmpwi r0, 0x4
    bne lbl_fn_80160170_00000174
    lfs f2, 0x530(r29)
    addi r3, r29, 0xf6c
    psq_l f1, 0x528(r29), 0, 0
    stw r29, 0xf7c(r29)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xf74(r29)
lbl_fn_80160170_00000174:
    lfs f0, 0xfbc(r29)
    lwz r3, 0xf80(r29)
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x38(r3)
    lwz r0, 0xf7c(r29)
    stw r0, 0x34(r3)
lbl_fn_80160170_00000194:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80160324(void)
{
    nofralloc
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80160324_000001D4
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1d
    bne lbl_fn_80160324_000001D4
    li r4, 0x1
lbl_fn_80160324_000001D4:
    mr r3, r4
    blr
}

asm void fn_8016034C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_8016034C_00000214
    mr r3, r0
    mr r4, r31
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r31
    bl fn_80105B3C
lbl_fn_8016034C_00000214:
    lwz r0, 0x12a8(r31)
    lis r4, lbl_807C7030@ha
    lfs f0, lbl_8088196C
    mr r3, r31
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x12a8(r31)
    addi r4, r4, lbl_807C7030@l
    stfs f0, 0xfb8(r31)
    stfs f0, 0xfbc(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x8c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801603CC(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r5, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x74(r1)
    addi r5, r5, lbl_80737A9C@l
    addi r5, r5, 0x24
    stfd f31, 0x68(r1)
    fmr f31, f1
    mr r6, r5
    stw r31, 0x64(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    stw r30, 0x60(r1)
    stw r29, 0x5c(r1)
    mr r29, r3
    li r3, 0x24
    stw r28, 0x58(r1)
    mr r28, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801603CC_000002D8
    fmr f1, f31
    lwz r5, 0xf7c(r29)
    mr r4, r29
    mr r7, r28
    addi r6, r29, 0xf6c
    bl fn_801BE10C
    mr r30, r3
lbl_fn_801603CC_000002D8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801603CC_00000368
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801603CC_00000310
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_801603CC_0000032C
lbl_fn_801603CC_00000310:
    addi r3, r31, 0xffc
    lwz r5, 0xffc(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_801603CC_0000032C:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801603CC_00000368
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801603CC_00000368:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801603CC_0000051C
    cmpwi r0, 0x8
    beq lbl_fn_801603CC_00000380
    stw r0, 0x564(r29)
lbl_fn_801603CC_00000380:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801603CC_0000051C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801603CC_000003B8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_801603CC_000003D4
lbl_fn_801603CC_000003B8:
    addi r3, r31, 0x1008
    lwz r5, 0x1008(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_801603CC_000003D4:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801603CC_00000410
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801603CC_00000410:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801603CC_000004EC
    cmpwi r0, 0x8
    beq lbl_fn_801603CC_00000428
    stw r0, 0x564(r29)
lbl_fn_801603CC_00000428:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801603CC_000004EC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801603CC_00000460
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_801603CC_0000047C
lbl_fn_801603CC_00000460:
    addi r3, r31, 0x1014
    lwz r5, 0x1014(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_801603CC_0000047C:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801603CC_000004B8
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801603CC_000004B8:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801603CC_000004EC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801603CC_000004EC:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801603CC_0000051C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801603CC_0000051C:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_801603CC_00000548
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801603CC_00000548:
    lwz r0, 0x74(r1)
    lfd f31, 0x68(r1)
    lwz r31, 0x64(r1)
    lwz r30, 0x60(r1)
    lwz r29, 0x5c(r1)
    lwz r28, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_801606DC(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stmw r27, 0xec(r1)
    lis r31, lbl_8077A720@ha
    mr r27, r4
    mr r29, r3
    mr r28, r5
    addi r31, r31, lbl_8077A720@l
    lwz r6, 0x60(r3)
    lwz r4, 0x24(r6)
    subi r0, r4, 0x2
    cmplwi r0, 0x1
    bgt lbl_fn_801606DC_00000854
    lis r5, lbl_80737A9C@ha
    li r3, 0x10
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801606DC_000005E0
    mr r4, r29
    mr r5, r27
    bl fn_8018906C
    mr r30, r3
lbl_fn_801606DC_000005E0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801606DC_00000670
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801606DC_00000618
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x74(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    b lbl_fn_801606DC_00000634
lbl_fn_801606DC_00000618:
    addi r3, r31, 0x1020
    lwz r5, 0x1020(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x74(r1)
    stw r4, 0x78(r1)
    stw r0, 0x7c(r1)
lbl_fn_801606DC_00000634:
    lwz r5, 0x74(r1)
    addi r3, r1, 0x50
    lwz r4, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r0, 0x58(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801606DC_00000670
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801606DC_00000670:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801606DC_00000824
    cmpwi r0, 0x8
    beq lbl_fn_801606DC_00000688
    stw r0, 0x564(r29)
lbl_fn_801606DC_00000688:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801606DC_00000824
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801606DC_000006C0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x80(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x84(r1)
    stw r0, 0x88(r1)
    b lbl_fn_801606DC_000006DC
lbl_fn_801606DC_000006C0:
    addi r3, r31, 0x102c
    lwz r5, 0x102c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x80(r1)
    stw r4, 0x84(r1)
    stw r0, 0x88(r1)
lbl_fn_801606DC_000006DC:
    lwz r5, 0x80(r1)
    addi r3, r1, 0x68
    lwz r4, 0x84(r1)
    lwz r0, 0x88(r1)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    stw r0, 0x70(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801606DC_00000718
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801606DC_00000718:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801606DC_000007F4
    cmpwi r0, 0x8
    beq lbl_fn_801606DC_00000730
    stw r0, 0x564(r29)
lbl_fn_801606DC_00000730:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801606DC_000007F4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801606DC_00000768
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x8c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x90(r1)
    stw r0, 0x94(r1)
    b lbl_fn_801606DC_00000784
lbl_fn_801606DC_00000768:
    addi r3, r31, 0x1038
    lwz r5, 0x1038(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x8c(r1)
    stw r4, 0x90(r1)
    stw r0, 0x94(r1)
lbl_fn_801606DC_00000784:
    lwz r5, 0x8c(r1)
    addi r3, r1, 0x5c
    lwz r4, 0x90(r1)
    lwz r0, 0x94(r1)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r0, 0x64(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801606DC_000007C0
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801606DC_000007C0:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801606DC_000007F4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801606DC_000007F4:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801606DC_00000824
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801606DC_00000824:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_801606DC_00000DD0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_801606DC_00000DD0
lbl_fn_801606DC_00000854:
    cmpwi r4, 0x2c
    bne lbl_fn_801606DC_00000B0C
    lis r5, lbl_80737A9C@ha
    li r3, 0xc
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801606DC_00000898
    mr r4, r29
    mr r5, r27
    bl fn_80189444
    mr r30, r3
lbl_fn_801606DC_00000898:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801606DC_00000928
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801606DC_000008D0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x98(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x9c(r1)
    stw r0, 0xa0(r1)
    b lbl_fn_801606DC_000008EC
lbl_fn_801606DC_000008D0:
    addi r3, r31, 0x1044
    lwz r5, 0x1044(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x98(r1)
    stw r4, 0x9c(r1)
    stw r0, 0xa0(r1)
lbl_fn_801606DC_000008EC:
    lwz r5, 0x98(r1)
    addi r3, r1, 0x2c
    lwz r4, 0x9c(r1)
    lwz r0, 0xa0(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801606DC_00000928
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801606DC_00000928:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801606DC_00000ADC
    cmpwi r0, 0x8
    beq lbl_fn_801606DC_00000940
    stw r0, 0x564(r29)
lbl_fn_801606DC_00000940:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801606DC_00000ADC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801606DC_00000978
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0xa4(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0xa8(r1)
    stw r0, 0xac(r1)
    b lbl_fn_801606DC_00000994
lbl_fn_801606DC_00000978:
    addi r3, r31, 0x1050
    lwz r5, 0x1050(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0xa4(r1)
    stw r4, 0xa8(r1)
    stw r0, 0xac(r1)
lbl_fn_801606DC_00000994:
    lwz r5, 0xa4(r1)
    addi r3, r1, 0x44
    lwz r4, 0xa8(r1)
    lwz r0, 0xac(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801606DC_000009D0
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801606DC_000009D0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801606DC_00000AAC
    cmpwi r0, 0x8
    beq lbl_fn_801606DC_000009E8
    stw r0, 0x564(r29)
lbl_fn_801606DC_000009E8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801606DC_00000AAC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801606DC_00000A20
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0xb0(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0xb4(r1)
    stw r0, 0xb8(r1)
    b lbl_fn_801606DC_00000A3C
lbl_fn_801606DC_00000A20:
    addi r3, r31, 0x105c
    lwz r5, 0x105c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0xb0(r1)
    stw r4, 0xb4(r1)
    stw r0, 0xb8(r1)
lbl_fn_801606DC_00000A3C:
    lwz r5, 0xb0(r1)
    addi r3, r1, 0x38
    lwz r4, 0xb4(r1)
    lwz r0, 0xb8(r1)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801606DC_00000A78
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801606DC_00000A78:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801606DC_00000AAC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801606DC_00000AAC:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801606DC_00000ADC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801606DC_00000ADC:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_801606DC_00000DD0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_801606DC_00000DD0
lbl_fn_801606DC_00000B0C:
    li r4, 0x2b
    addi r3, r3, 0xb0
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_801606DC_00000DD0
    lis r5, lbl_80737A9C@ha
    li r3, 0x2c
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801606DC_00000B60
    mr r4, r29
    mr r5, r27
    mr r6, r28
    bl fn_801880D0
    mr r30, r3
lbl_fn_801606DC_00000B60:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801606DC_00000BF0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801606DC_00000B98
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0xbc(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0xc0(r1)
    stw r0, 0xc4(r1)
    b lbl_fn_801606DC_00000BB4
lbl_fn_801606DC_00000B98:
    addi r3, r31, 0x1068
    lwz r5, 0x1068(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0xbc(r1)
    stw r4, 0xc0(r1)
    stw r0, 0xc4(r1)
lbl_fn_801606DC_00000BB4:
    lwz r5, 0xbc(r1)
    addi r3, r1, 0x8
    lwz r4, 0xc0(r1)
    lwz r0, 0xc4(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801606DC_00000BF0
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801606DC_00000BF0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801606DC_00000DA4
    cmpwi r0, 0x8
    beq lbl_fn_801606DC_00000C08
    stw r0, 0x564(r29)
lbl_fn_801606DC_00000C08:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801606DC_00000DA4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801606DC_00000C40
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0xc8(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0xcc(r1)
    stw r0, 0xd0(r1)
    b lbl_fn_801606DC_00000C5C
lbl_fn_801606DC_00000C40:
    addi r3, r31, 0x1074
    lwz r5, 0x1074(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0xc8(r1)
    stw r4, 0xcc(r1)
    stw r0, 0xd0(r1)
lbl_fn_801606DC_00000C5C:
    lwz r5, 0xc8(r1)
    addi r3, r1, 0x20
    lwz r4, 0xcc(r1)
    lwz r0, 0xd0(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801606DC_00000C98
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801606DC_00000C98:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801606DC_00000D74
    cmpwi r0, 0x8
    beq lbl_fn_801606DC_00000CB0
    stw r0, 0x564(r29)
lbl_fn_801606DC_00000CB0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801606DC_00000D74
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801606DC_00000CE8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0xd4(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0xd8(r1)
    stw r0, 0xdc(r1)
    b lbl_fn_801606DC_00000D04
lbl_fn_801606DC_00000CE8:
    addi r3, r31, 0x1080
    lwz r5, 0x1080(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0xd4(r1)
    stw r4, 0xd8(r1)
    stw r0, 0xdc(r1)
lbl_fn_801606DC_00000D04:
    lwz r5, 0xd4(r1)
    addi r3, r1, 0x14
    lwz r4, 0xd8(r1)
    lwz r0, 0xdc(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801606DC_00000D40
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801606DC_00000D40:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801606DC_00000D74
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801606DC_00000D74:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801606DC_00000DA4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801606DC_00000DA4:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_801606DC_00000DD0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801606DC_00000DD0:
    lmw r27, 0xec(r1)
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_80160F54(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r5, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x74(r1)
    addi r5, r5, lbl_80737A9C@l
    addi r5, r5, 0x24
    stfd f31, 0x68(r1)
    fmr f31, f1
    mr r6, r5
    stw r31, 0x64(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    stw r30, 0x60(r1)
    stw r29, 0x5c(r1)
    mr r29, r3
    li r3, 0x8
    stw r28, 0x58(r1)
    mr r28, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80160F54_00000E58
    fmr f1, f31
    mr r4, r29
    mr r5, r28
    bl fn_80188BD8
    mr r30, r3
lbl_fn_80160F54_00000E58:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80160F54_00000EE8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80160F54_00000E90
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80160F54_00000EAC
lbl_fn_80160F54_00000E90:
    addi r3, r31, 0x108c
    lwz r5, 0x108c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80160F54_00000EAC:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80160F54_00000EE8
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80160F54_00000EE8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80160F54_0000109C
    cmpwi r0, 0x8
    beq lbl_fn_80160F54_00000F00
    stw r0, 0x564(r29)
lbl_fn_80160F54_00000F00:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80160F54_0000109C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80160F54_00000F38
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80160F54_00000F54
lbl_fn_80160F54_00000F38:
    addi r3, r31, 0x1098
    lwz r5, 0x1098(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80160F54_00000F54:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80160F54_00000F90
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80160F54_00000F90:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80160F54_0000106C
    cmpwi r0, 0x8
    beq lbl_fn_80160F54_00000FA8
    stw r0, 0x564(r29)
lbl_fn_80160F54_00000FA8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80160F54_0000106C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80160F54_00000FE0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80160F54_00000FFC
lbl_fn_80160F54_00000FE0:
    addi r3, r31, 0x10a4
    lwz r5, 0x10a4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80160F54_00000FFC:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80160F54_00001038
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80160F54_00001038:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80160F54_0000106C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80160F54_0000106C:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80160F54_0000109C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80160F54_0000109C:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80160F54_000010C8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80160F54_000010C8:
    lwz r0, 0x74(r1)
    lfd f31, 0x68(r1)
    lwz r31, 0x64(r1)
    lwz r30, 0x60(r1)
    lwz r29, 0x5c(r1)
    lwz r28, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8016125C(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lis r8, lbl_80737A9C@ha
    stw r0, 0x84(r1)
    addi r8, r8, lbl_80737A9C@l
    stfd f31, 0x78(r1)
    fmr f31, f1
    stmw r25, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    mr r26, r5
    mr r29, r3
    mr r25, r4
    mr r28, r7
    addi r5, r8, 0x24
    mr r27, r6
    mr r6, r5
    addi r31, r31, lbl_8077A720@l
    li r3, 0x1c
    li r4, 0x0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8016125C_00001178
    lwz r3, 0x0(r25)
    bl fn_80219E6C
    fmr f1, f31
    mr r5, r3
    mr r3, r30
    mr r4, r29
    mr r6, r26
    mr r7, r27
    mr r8, r28
    bl fn_801C93C4
    mr r30, r3
lbl_fn_8016125C_00001178:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016125C_00001208
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016125C_000011B0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8016125C_000011CC
lbl_fn_8016125C_000011B0:
    addi r3, r31, 0x10b0
    lwz r5, 0x10b0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8016125C_000011CC:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016125C_00001208
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016125C_00001208:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016125C_000013BC
    cmpwi r0, 0x8
    beq lbl_fn_8016125C_00001220
    stw r0, 0x564(r29)
lbl_fn_8016125C_00001220:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016125C_000013BC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016125C_00001258
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8016125C_00001274
lbl_fn_8016125C_00001258:
    addi r3, r31, 0x10bc
    lwz r5, 0x10bc(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8016125C_00001274:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016125C_000012B0
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016125C_000012B0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016125C_0000138C
    cmpwi r0, 0x8
    beq lbl_fn_8016125C_000012C8
    stw r0, 0x564(r29)
lbl_fn_8016125C_000012C8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016125C_0000138C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016125C_00001300
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8016125C_0000131C
lbl_fn_8016125C_00001300:
    addi r3, r31, 0x10c8
    lwz r5, 0x10c8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8016125C_0000131C:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016125C_00001358
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016125C_00001358:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016125C_0000138C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016125C_0000138C:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016125C_000013BC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016125C_000013BC:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8016125C_000013E8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016125C_000013E8:
    lfd f31, 0x78(r1)
    lmw r25, 0x5c(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80161570(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lis r7, lbl_80737A9C@ha
    stw r0, 0x84(r1)
    addi r7, r7, lbl_80737A9C@l
    stfd f31, 0x78(r1)
    fmr f31, f2
    stfd f30, 0x70(r1)
    fmr f30, f1
    stmw r26, 0x58(r1)
    lis r31, lbl_8077A720@ha
    mr r27, r5
    addi r5, r7, 0x24
    mr r29, r3
    mr r26, r4
    mr r28, r6
    mr r6, r5
    addi r31, r31, lbl_8077A720@l
    li r3, 0x18
    li r4, 0x0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80161570_00001484
    fmr f1, f30
    mr r4, r29
    fmr f2, f31
    mr r5, r26
    mr r6, r27
    mr r7, r28
    bl fn_801C3DCC
    mr r30, r3
lbl_fn_80161570_00001484:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80161570_00001514
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80161570_000014BC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80161570_000014D8
lbl_fn_80161570_000014BC:
    addi r3, r31, 0x10d4
    lwz r5, 0x10d4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80161570_000014D8:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80161570_00001514
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80161570_00001514:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80161570_000016C8
    cmpwi r0, 0x8
    beq lbl_fn_80161570_0000152C
    stw r0, 0x564(r29)
lbl_fn_80161570_0000152C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80161570_000016C8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80161570_00001564
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80161570_00001580
lbl_fn_80161570_00001564:
    addi r3, r31, 0x10e0
    lwz r5, 0x10e0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80161570_00001580:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80161570_000015BC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80161570_000015BC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80161570_00001698
    cmpwi r0, 0x8
    beq lbl_fn_80161570_000015D4
    stw r0, 0x564(r29)
lbl_fn_80161570_000015D4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80161570_00001698
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80161570_0000160C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80161570_00001628
lbl_fn_80161570_0000160C:
    addi r3, r31, 0x10ec
    lwz r5, 0x10ec(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80161570_00001628:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80161570_00001664
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80161570_00001664:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80161570_00001698
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80161570_00001698:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80161570_000016C8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80161570_000016C8:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80161570_000016F4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80161570_000016F4:
    lfd f31, 0x78(r1)
    lfd f30, 0x70(r1)
    lmw r26, 0x58(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80161880(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r7, lbl_80737A9C@ha
    stw r0, 0x74(r1)
    addi r7, r7, lbl_80737A9C@l
    stmw r26, 0x58(r1)
    lis r31, lbl_8077A720@ha
    mr r27, r5
    addi r5, r7, 0x24
    mr r29, r3
    mr r26, r4
    mr r28, r6
    mr r6, r5
    addi r31, r31, lbl_8077A720@l
    li r3, 0xc
    li r4, 0x0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80161880_0000177C
    mr r4, r29
    mr r5, r26
    mr r6, r27
    mr r7, r28
    bl fn_801C3FB0
    mr r30, r3
lbl_fn_80161880_0000177C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80161880_0000180C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80161880_000017B4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80161880_000017D0
lbl_fn_80161880_000017B4:
    addi r3, r31, 0x10f8
    lwz r5, 0x10f8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80161880_000017D0:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80161880_0000180C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80161880_0000180C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80161880_000019C0
    cmpwi r0, 0x8
    beq lbl_fn_80161880_00001824
    stw r0, 0x564(r29)
lbl_fn_80161880_00001824:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80161880_000019C0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80161880_0000185C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80161880_00001878
lbl_fn_80161880_0000185C:
    addi r3, r31, 0x1104
    lwz r5, 0x1104(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80161880_00001878:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80161880_000018B4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80161880_000018B4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80161880_00001990
    cmpwi r0, 0x8
    beq lbl_fn_80161880_000018CC
    stw r0, 0x564(r29)
lbl_fn_80161880_000018CC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80161880_00001990
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80161880_00001904
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80161880_00001920
lbl_fn_80161880_00001904:
    addi r3, r31, 0x1110
    lwz r5, 0x1110(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80161880_00001920:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80161880_0000195C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80161880_0000195C:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80161880_00001990
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80161880_00001990:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80161880_000019C0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80161880_000019C0:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80161880_000019EC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80161880_000019EC:
    lmw r26, 0x58(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
