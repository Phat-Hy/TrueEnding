#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_27(void);
extern void _savegpr_22(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D430(void);
extern void fn_8004B290(void);
extern void fn_8004B338(void);
extern void fn_8004B378(void);
extern void fn_80071D68(void);
extern void fn_800760BC(void);
extern void fn_800760D0(void);
extern void fn_8007642C(void);
extern void fn_80076FF8(void);
extern void fn_8007A7BC(void);
extern void fn_80084320(void);
extern void fn_80084C24(void);
extern void fn_8008B130(void);
extern void fn_80092814(void);
extern void fn_80094BD8(void);
extern void fn_80095F10(void);
extern void fn_80097C08(void);
extern void fn_80097E80(void);
extern void fn_800BDB58(void);
extern void fn_8011D320(void);
extern void fn_8011EE58(void);
extern void fn_8011EF14(void);
extern void fn_801354B4(void);
extern void fn_80136544(void);
extern void fn_8013655C(void);
extern void fn_80148B38(void);
extern void fn_80219558(void);
extern void fn_80473E8C(void);
extern void fn_80473F18(void);
extern void fn_805F90D0(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_806827C4(void);
extern void fn_806958E0(void);
extern void fn_80695A50(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80742D7C[];
extern u8 lbl_80766768[];
extern u8 lbl_80783888[];
extern u8 lbl_807838A0[];

/* Small data declarations */
extern u32 lbl_8087D9F0;
extern u32 lbl_8087D9F4;
extern u32 lbl_8087DBB0;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_80883020;
extern u32 lbl_80883024;
extern u32 lbl_80883028;
extern u32 lbl_8088302C;
extern u32 lbl_80883030;
extern u32 lbl_80883034;
extern u32 lbl_80883038;
extern u32 lbl_8088303C;
extern u32 lbl_80883040;
extern u32 lbl_80883044;
extern u32 lbl_80883048;
extern u32 lbl_8088304C;
extern u32 lbl_80883050;
extern u32 lbl_80883054;
extern u32 lbl_80883058;
extern u32 lbl_8088305C;
extern u32 lbl_80883060;
extern u32 lbl_80883064;
extern u32 lbl_80883068;
extern u32 lbl_8088306C;
extern u32 lbl_80883070;
extern u32 lbl_80883074;

/* Function declarations */
void fn_8022526C(void);
void fn_802253D8(void);
void fn_802253E4(void);
void fn_802254B0(void);
void fn_8022589C(void);
void fn_80225C80(void);
void fn_80225DDC(void);
void fn_802262B8(void);
void fn_80226320(void);
void fn_80226B28(void);
void fn_80226B48(void);

asm void fn_8022526C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x48(r5)
    lwz r6, 0x50(r5)
    li r5, 0x1
    cmpwi r0, 0x5
    bne lbl_fn_8022526C_00000038
    li r5, 0x5
lbl_fn_8022526C_00000038:
    bl fn_801354B4
    lis r4, lbl_807838A0@ha
    stw r30, 0x1428(r29)
    addi r4, r4, lbl_807838A0@l
    addi r3, r29, 0x142c
    addi r0, r4, 0xe4
    stw r4, 0x0(r29)
    li r4, 0x0
    li r5, 0x0
    stw r0, 0x1424(r29)
    bl fn_8004B290
    li r31, 0x0
    stw r31, 0x1620(r29)
    addi r3, r29, 0x162c
    li r4, 0x0
    stw r31, 0x1624(r29)
    li r5, 0x0
    bl fn_8004B290
    lfs f0, lbl_80883020
    li r0, -0x1
    lis r4, fn_802253D8@ha
    lis r5, fn_802253E4@ha
    stfs f0, 0x1820(r29)
    addi r3, r29, 0x1840
    addi r4, r4, fn_802253D8@l
    addi r5, r5, fn_802253E4@l
    stw r0, 0x1824(r29)
    li r6, 0x4
    li r7, 0x70
    stfs f0, 0x1834(r29)
    stfs f0, 0x1838(r29)
    stfs f0, 0x183c(r29)
    bl fn_806958E0
    lwz r0, 0x12a8(r29)
    li r3, 0x1e
    stw r31, 0x1a00(r29)
    oris r0, r0, 0x80
    stw r31, 0x1a04(r29)
    stw r3, 0x1a08(r29)
    stw r31, 0x1a10(r29)
    stw r31, 0x1a14(r29)
    stw r0, 0x12a8(r29)
    lwz r0, 0x48(r30)
    cmpwi r0, 0x5
    bne lbl_fn_8022526C_00000100
    addi r3, r30, 0x84
    bl fn_80473F18
    mr r4, r3
    mr r3, r29
    bl fn_80136544
lbl_fn_8022526C_00000100:
    lfs f1, lbl_80883020
    addi r3, r29, 0x142c
    lfs f0, lbl_80883024
    stfs f1, 0x1434(r29)
    stfs f1, 0x1438(r29)
    stfs f0, 0x143c(r29)
    bl fn_8004B378
    li r0, 0x1
    stw r0, 0x1624(r29)
    addi r3, r29, 0x1840
    li r4, 0x0
    lwz r6, lbl_8087EEB0
    li r5, 0x1c0
    addi r0, r6, 0x70
    stw r0, 0x1628(r29)
    bl memset
    lwz r4, lbl_8087F0A8
    mr r3, r29
    addi r0, r4, 0x664
    stw r0, 0x28c(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802253D8(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_802253E4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_802253E4_00000224
    lwz r31, 0x0(r3)
    cmpwi r31, 0x0
    beq lbl_fn_802253E4_00000214
    addic. r0, r31, 0x10
    beq lbl_fn_802253E4_000001CC
    lwz r3, 0x18(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802253E4_000001CC
    beq lbl_fn_802253E4_000001CC
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802253E4_000001CC:
    addic. r0, r31, 0x8
    beq lbl_fn_802253E4_000001F8
    lwz r3, 0xc(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802253E4_000001EC
    lis r4, fn_8011D320@ha
    addi r4, r4, fn_8011D320@l
    bl fn_80695A50
lbl_fn_802253E4_000001EC:
    li r0, 0x0
    stw r0, 0xc(r31)
    stw r0, 0x8(r31)
lbl_fn_802253E4_000001F8:
    cmpwi r31, 0x0
    beq lbl_fn_802253E4_0000020C
    mr r3, r31
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802253E4_0000020C:
    mr r3, r31
    bl dtor_80084684
lbl_fn_802253E4_00000214:
    cmpwi r30, 0x0
    ble lbl_fn_802253E4_00000224
    mr r3, r29
    bl dtor_80084684
lbl_fn_802253E4_00000224:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802254B0(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x1
    stw r0, 0x244(r1)
    stfd f31, 0x230(r1)
    psq_st f31, 0x238(r1), 0, 0
    stfd f30, 0x220(r1)
    psq_st f30, 0x228(r1), 0, 0
    fmr f30, f2
    stfd f29, 0x210(r1)
    psq_st f29, 0x218(r1), 0, 0
    fmr f29, f1
    stw r31, 0x20c(r1)
    mr r31, r3
    addi r3, r1, 0x8
    stw r30, 0x208(r1)
    stw r29, 0x204(r1)
    bl fn_8004B290
    fadds f9, f30, f29
    lfs f31, lbl_80883020
    lfs f0, lbl_8088302C
    fsubs f10, f29, f30
    lfs f13, lbl_80883028
    addi r3, r1, 0x8
    fmuls f12, f0, f9
    lfs f11, lbl_80883030
    lfs f9, lbl_80883034
    lfs f0, lbl_80883038
    stfs f31, 0x28(r1)
    stfs f13, 0x2c(r1)
    stfs f31, 0x30(r1)
    stfs f31, 0x10(r1)
    stfs f12, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f31, 0x1c(r1)
    stfs f12, 0x20(r1)
    stfs f31, 0x24(r1)
    stfs f10, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f9, 0x4c(r1)
    stfs f0, 0x50(r1)
    bl fn_8004B378
    lwz r0, 0x8(r1)
    addi r3, r1, 0x10
    stw r0, 0x162c(r31)
    addi r30, r31, 0x1634
    addi r11, r1, 0x1c
    addi r12, r31, 0x1640
    lwz r0, 0xc(r1)
    addi r9, r1, 0x28
    stw r0, 0x1630(r31)
    addi r10, r31, 0x164c
    addi r7, r1, 0x34
    addi r8, r31, 0x1658
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x60
    lfs f2, 0x18(r1)
    addi r6, r31, 0x1684
    stfs f2, 0x163c(r31)
    addi r3, r1, 0x90
    addi r4, r31, 0x16b4
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x0(r11), 0, 0
    lfs f2, 0x24(r1)
    stfs f2, 0x1648(r31)
    psq_st f1, 0x0(r12), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    lfs f2, 0x30(r1)
    stfs f2, 0x1654(r31)
    psq_st f1, 0x0(r10), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    lfs f2, 0x3c(r1)
    stfs f2, 0x1660(r31)
    psq_st f1, 0x0(r8), 0, 0
    lfs f0, 0x40(r1)
    stfs f0, 0x1664(r31)
    lfs f0, 0x44(r1)
    stfs f0, 0x1668(r31)
    lfs f0, 0x48(r1)
    stfs f0, 0x166c(r31)
    lfs f0, 0x4c(r1)
    stfs f0, 0x1670(r31)
    lfs f0, 0x50(r1)
    stfs f0, 0x1674(r31)
    lfs f0, 0x54(r1)
    stfs f0, 0x1678(r31)
    lfs f0, 0x58(r1)
    stfs f0, 0x167c(r31)
    lfs f0, 0x5c(r1)
    stfs f0, 0x1680(r31)
    psq_l f1, 0x0(r5), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_st f6, 0x28(r6), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    psq_st f3, 0x10(r6), 0, 0
    psq_st f4, 0x18(r6), 0, 0
    psq_st f5, 0x20(r6), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f7, 0x30(r3), 0, 0
    psq_l f8, 0x38(r3), 0, 0
    psq_st f8, 0x38(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f7, 0x30(r4), 0, 0
    lfs f0, 0xd0(r1)
    stfs f0, 0x16f4(r31)
    lfs f0, 0xd4(r1)
    stfs f0, 0x16f8(r31)
    addi r3, r1, 0xd8
    addi r7, r31, 0x172c
    psq_l f1, 0x0(r3), 0, 0
    addi r6, r1, 0x108
    psq_l f2, 0x8(r3), 0, 0
    addi r8, r31, 0x16fc
    psq_l f3, 0x10(r3), 0, 0
    addi r4, r7, 0x94
    psq_l f4, 0x18(r3), 0, 0
    addi r5, r6, 0x94
    psq_l f5, 0x20(r3), 0, 0
    addi r0, r7, 0xf4
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r8), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    psq_st f2, 0x8(r8), 0, 0
    psq_st f3, 0x10(r8), 0, 0
    psq_st f4, 0x18(r8), 0, 0
    psq_st f5, 0x20(r8), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_l f3, 0x10(r6), 0, 0
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f6, 0x28(r7), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    psq_st f2, 0x8(r7), 0, 0
    psq_st f3, 0x10(r7), 0, 0
    psq_st f4, 0x18(r7), 0, 0
    psq_st f5, 0x20(r7), 0, 0
    lwz r3, 0x138(r1)
    stw r3, 0x175c(r31)
    lfs f0, 0x13c(r1)
    stfs f0, 0x1760(r31)
    lfs f0, 0x140(r1)
    stfs f0, 0x1764(r31)
    psq_l f1, 0x3c(r6), 0, 0
    lfs f2, 0x14c(r1)
    stfs f2, 0x1770(r31)
    psq_st f1, 0x3c(r7), 0, 0
    lfs f0, 0x150(r1)
    stfs f0, 0x1774(r31)
    psq_l f1, 0x4c(r6), 0, 0
    lfs f2, 0x15c(r1)
    stfs f2, 0x1780(r31)
    psq_st f1, 0x4c(r7), 0, 0
    lfs f0, 0x160(r1)
    stfs f0, 0x1784(r31)
    psq_l f1, 0x5c(r6), 0, 0
    lfs f2, 0x16c(r1)
    stfs f2, 0x1790(r31)
    psq_st f1, 0x5c(r7), 0, 0
    lfs f0, 0x170(r1)
    stfs f0, 0x1794(r31)
    psq_l f1, 0x6c(r6), 0, 0
    lfs f2, 0x17c(r1)
    stfs f2, 0x17a0(r31)
    psq_st f1, 0x6c(r7), 0, 0
    lfs f0, 0x180(r1)
    stfs f0, 0x17a4(r31)
    psq_l f1, 0x7c(r6), 0, 0
    lfs f2, 0x18c(r1)
    stfs f2, 0x17b0(r31)
    psq_st f1, 0x7c(r7), 0, 0
    psq_l f1, 0x88(r6), 0, 0
    lfs f2, 0x198(r1)
    stfs f2, 0x17bc(r31)
    psq_st f1, 0x88(r7), 0, 0
lbl_fn_802254B0_00000544:
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    lfs f0, 0xc(r5)
    addi r5, r5, 0x10
    stfs f0, 0xc(r4)
    addi r4, r4, 0x10
    cmplw r4, r0
    blt lbl_fn_802254B0_00000544
    addi r3, r31, 0xb0
    addi r4, r31, 0x1624
    bl fn_80095F10
    addi r30, r31, 0x680
    li r29, 0x0
lbl_fn_802254B0_00000580:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_802254B0_000005A4
    lwz r0, 0x0(r3)
    cmpwi r0, 0x4
    bge lbl_fn_802254B0_000005A4
    addi r3, r3, 0x24
    addi r4, r31, 0x1624
    bl fn_80095F10
lbl_fn_802254B0_000005A4:
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmplwi r29, 0x8
    blt lbl_fn_802254B0_00000580
    mr r30, r31
    li r29, 0x0
    b lbl_fn_802254B0_000005E4
lbl_fn_802254B0_000005C0:
    lwz r3, 0x6a8(r30)
    lwz r0, 0x3dc(r3)
    srawi. r0, r0, 31
    beq lbl_fn_802254B0_000005DC
    addi r3, r3, 0x4
    addi r4, r31, 0x1624
    bl fn_80095F10
lbl_fn_802254B0_000005DC:
    addi r30, r30, 0x4
    addi r29, r29, 0x1
lbl_fn_802254B0_000005E4:
    lwz r0, 0x6a4(r31)
    cmplw r29, r0
    blt lbl_fn_802254B0_000005C0
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_8004B338
    lwz r0, 0x244(r1)
    psq_l f31, 0x238(r1), 0, 0
    lfd f31, 0x230(r1)
    psq_l f30, 0x228(r1), 0, 0
    lfd f30, 0x220(r1)
    psq_l f29, 0x218(r1), 0, 0
    lfd f29, 0x210(r1)
    lwz r31, 0x20c(r1)
    lwz r30, 0x208(r1)
    lwz r29, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_8022589C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_22
    mr r23, r3
    lis r22, lbl_80783888@ha
    lis r31, lbl_80766768@ha
    li r27, 0x0
    mr r30, r23
    addi r22, r22, lbl_80783888@l
    addi r31, r31, lbl_80766768@l
    li r26, 0x0
lbl_fn_8022589C_00000664:
    mr r29, r30
    li r25, 0x0
lbl_fn_8022589C_0000066C:
    mr r28, r29
    li r24, 0x0
lbl_fn_8022589C_00000674:
    lwz r0, 0x1840(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8022589C_0000069C
    lwz r4, 0x0(r31)
    lwz r3, 0x4(r31)
    lwz r0, 0x8(r31)
    stw r4, 0x34(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    b lbl_fn_8022589C_000006B4
lbl_fn_8022589C_0000069C:
    lwz r4, 0x0(r22)
    lwz r3, 0x4(r22)
    lwz r0, 0x8(r22)
    stw r4, 0x34(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
lbl_fn_8022589C_000006B4:
    lwz r5, 0x34(r1)
    addi r3, r1, 0x14
    lwz r4, 0x38(r1)
    lwz r0, 0x3c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8022589C_000006F0
    lwz r3, 0x1840(r28)
    bl fn_8011EF14
    cmpwi r3, 0x0
    beq lbl_fn_8022589C_000006F0
    li r27, 0x1
lbl_fn_8022589C_000006F0:
    addi r24, r24, 0x1
    addi r28, r28, 0x4
    cmpwi r24, 0x2
    blt lbl_fn_8022589C_00000674
    addi r25, r25, 0x1
    addi r29, r29, 0x8
    cmpwi r25, 0x8
    blt lbl_fn_8022589C_0000066C
    addi r26, r26, 0x1
    addi r30, r30, 0x40
    cmpwi r26, 0x7
    blt lbl_fn_8022589C_00000664
    mr r3, r23
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_8022589C_000009F8
    cmpwi r27, 0x0
    bne lbl_fn_8022589C_000009F8
    li r3, 0x1fc
    li r4, 0x6
    la r5, lbl_8087D9F4
    la r6, lbl_8087D9F0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r22, r3
    beq lbl_fn_8022589C_00000774
    li r0, 0x0
    stw r0, 0x0(r3)
    li r4, 0x0
    li r5, 0x0
    addi r3, r3, 0x8
    bl fn_8004B290
lbl_fn_8022589C_00000774:
    lwz r24, 0x2b8(r23)
    cmpwi r24, 0x0
    stw r22, 0x2b8(r23)
    beq lbl_fn_8022589C_00000798
    addi r3, r24, 0x8
    li r4, -0x1
    bl fn_8004B338
    mr r3, r24
    bl dtor_80084684
lbl_fn_8022589C_00000798:
    lfs f1, lbl_80883028
    addi r3, r23, 0xb0
    lfs f2, lbl_8088303C
    li r4, 0x0
    li r5, 0xee
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F0A8
    lwz r0, 0x1134(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8022589C_000007D4
    lfs f0, lbl_80883028
    b lbl_fn_8022589C_000007D8
lbl_fn_8022589C_000007D4:
    lfs f0, lbl_80883020
lbl_fn_8022589C_000007D8:
    stfs f0, 0x2e8(r23)
    addi r3, r23, 0xb0
    li r4, 0x1
    bl fn_80097E80
    li r0, 0x0
    stw r0, 0x20(r1)
    addi r3, r23, 0xb0
    addi r4, r1, 0x20
    bl fn_8000D430
    addic. r3, r1, 0x20
    beq lbl_fn_8022589C_00000838
    lwz r4, 0x20(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8022589C_00000838
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8022589C_00000830
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8022589C_00000830:
    li r0, 0x0
    stw r0, 0x20(r1)
lbl_fn_8022589C_00000838:
    mr r6, r23
    li r7, 0x0
    li r3, 0x0
    b lbl_fn_8022589C_0000088C
lbl_fn_8022589C_00000848:
    lwz r4, 0x1428(r23)
    lwz r0, 0x6a4(r4)
    cmpw r7, r0
    bge lbl_fn_8022589C_00000864
    add r4, r4, r3
    lwz r5, 0x6a8(r4)
    b lbl_fn_8022589C_00000868
lbl_fn_8022589C_00000864:
    li r5, 0x0
lbl_fn_8022589C_00000868:
    lwz r4, 0x6a8(r6)
    addi r6, r6, 0x4
    lwz r5, 0x3dc(r5)
    addi r7, r7, 0x1
    lwz r0, 0x3dc(r4)
    addi r3, r3, 0x4
    srawi r5, r5, 31
    rlwimi r0, r5, 31, 0, 0
    stw r0, 0x3dc(r4)
lbl_fn_8022589C_0000088C:
    lwz r0, 0x6a4(r23)
    cmplw r7, r0
    blt lbl_fn_8022589C_00000848
    addi r3, r23, 0xb0
    li r4, 0x4
    bl fn_80094BD8
    addi r22, r23, 0x680
    li r24, 0x0
lbl_fn_8022589C_000008AC:
    lwz r3, 0x0(r22)
    cmpwi r3, 0x0
    beq lbl_fn_8022589C_000008D0
    lwz r0, 0x0(r3)
    cmpwi r0, 0x4
    bge lbl_fn_8022589C_000008D0
    addi r3, r3, 0x24
    li r4, 0x4
    bl fn_80094BD8
lbl_fn_8022589C_000008D0:
    addi r24, r24, 0x1
    addi r22, r22, 0x4
    cmplwi r24, 0x8
    blt lbl_fn_8022589C_000008AC
    mr r22, r23
    li r24, 0x0
    b lbl_fn_8022589C_00000910
lbl_fn_8022589C_000008EC:
    lwz r3, 0x6a8(r22)
    lwz r0, 0x3dc(r3)
    srawi. r0, r0, 31
    beq lbl_fn_8022589C_00000908
    addi r3, r3, 0x4
    li r4, 0x4
    bl fn_80094BD8
lbl_fn_8022589C_00000908:
    addi r22, r22, 0x4
    addi r24, r24, 0x1
lbl_fn_8022589C_00000910:
    lwz r0, 0x6a4(r23)
    cmplw r24, r0
    blt lbl_fn_8022589C_000008EC
    lis r4, lbl_80742D7C@ha
    addi r3, r23, 0xb0
    addi r4, r4, lbl_80742D7C@l
    li r5, 0x0
    addi r4, r4, 0x1
    bl fn_80092814
    cmpwi r3, 0x0
    stw r3, 0x1824(r23)
    bge lbl_fn_8022589C_00000948
    li r5, 0x0
    b lbl_fn_8022589C_00000954
lbl_fn_8022589C_00000948:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r23)
    add r5, r3, r0
lbl_fn_8022589C_00000954:
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x8
    lfs f3, 0xc(r5)
    addi r3, r23, 0x1828
    lfs f2, 0x2c(r5)
    stfs f3, 0x8(r1)
    lfs f3, lbl_80883048
    stfs f0, 0xc(r1)
    lfs f0, lbl_80883044
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f5, lbl_80883040
    lfs f4, 0x182c(r23)
    stfs f2, 0x10(r1)
    fsubs f3, f4, f3
    stfs f2, 0x1830(r23)
    fneg f3, f3
    fmuls f0, f0, f3
    fcmpo cr0, f5, f0
    bge lbl_fn_8022589C_000009A8
    b lbl_fn_8022589C_000009AC
lbl_fn_8022589C_000009A8:
    fmr f5, f0
lbl_fn_8022589C_000009AC:
    stfs f5, 0x1838(r23)
    mr r3, r23
    li r4, 0x0
    bl fn_80225C80
    bl fn_80680CF8
    lis r4, 0xb60b
    lfs f0, lbl_8088302C
    addi r0, r4, 0x60b7
    stfs f0, 0x1204(r23)
    mulhw r0, r0, r3
    add r0, r0, r3
    srawi r0, r0, 6
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5a
    subf r0, r0, r3
    stw r0, 0x1a10(r23)
    li r3, 0x1
    b lbl_fn_8022589C_000009FC
lbl_fn_8022589C_000009F8:
    li r3, 0x0
lbl_fn_8022589C_000009FC:
    addi r11, r1, 0x70
    bl _restgpr_22
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80225C80(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r5, 0x1428(r3)
    mr r27, r3
    lwz r6, lbl_8087F0A8
    mr r28, r4
    lwz r3, 0x50(r5)
    addi r29, r6, 0x5bc
    bl fn_80219558
    cmpwi r28, 0x0
    mr r30, r3
    beq lbl_fn_80225C80_00000A58
    addi r0, r29, 0x38
    b lbl_fn_80225C80_00000A5C
lbl_fn_80225C80_00000A58:
    mr r0, r29
lbl_fn_80225C80_00000A5C:
    stw r0, 0x1620(r27)
    addi r3, r27, 0xb0
    bl fn_8008B130
    lis r31, lbl_80742D7C@ha
    addi r31, r31, lbl_80742D7C@l
    addi r4, r31, 0x6
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_80225C80_00000A94
    cmpwi r28, 0x0
    beq lbl_fn_80225C80_00000A8C
    addi r29, r29, 0x70
lbl_fn_80225C80_00000A8C:
    stw r29, 0x1620(r27)
    b lbl_fn_80225C80_00000B58
lbl_fn_80225C80_00000A94:
    addi r3, r27, 0xb0
    bl fn_8008B130
    addi r4, r31, 0xd
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_80225C80_00000AC0
    lfs f1, lbl_80883044
    lfs f0, lbl_80883020
    stfs f1, 0x1834(r27)
    stfs f0, 0x183c(r27)
    b lbl_fn_80225C80_00000B58
lbl_fn_80225C80_00000AC0:
    cmpwi r30, 0x5
    beq lbl_fn_80225C80_00000B38
    bge lbl_fn_80225C80_00000AE4
    cmpwi r30, 0x3
    beq lbl_fn_80225C80_00000B14
    bge lbl_fn_80225C80_00000B58
    cmpwi r30, 0x0
    bge lbl_fn_80225C80_00000B58
    b lbl_fn_80225C80_00000AF0
lbl_fn_80225C80_00000AE4:
    cmpwi r30, 0xb
    beq lbl_fn_80225C80_00000AF0
    b lbl_fn_80225C80_00000B58
lbl_fn_80225C80_00000AF0:
    cmpwi r28, 0x0
    beq lbl_fn_80225C80_00000B00
    lfs f1, lbl_8088304C
    b lbl_fn_80225C80_00000B04
lbl_fn_80225C80_00000B00:
    lfs f1, lbl_80883050
lbl_fn_80225C80_00000B04:
    lfs f0, lbl_80883054
    stfs f1, 0x1834(r27)
    stfs f0, 0x183c(r27)
    b lbl_fn_80225C80_00000B58
lbl_fn_80225C80_00000B14:
    cmpwi r28, 0x0
    beq lbl_fn_80225C80_00000B24
    lfs f1, lbl_80883058
    b lbl_fn_80225C80_00000B28
lbl_fn_80225C80_00000B24:
    lfs f1, lbl_8088305C
lbl_fn_80225C80_00000B28:
    lfs f0, lbl_80883058
    stfs f1, 0x1834(r27)
    stfs f0, 0x183c(r27)
    b lbl_fn_80225C80_00000B58
lbl_fn_80225C80_00000B38:
    cmpwi r28, 0x0
    beq lbl_fn_80225C80_00000B48
    lfs f1, lbl_80883044
    b lbl_fn_80225C80_00000B4C
lbl_fn_80225C80_00000B48:
    lfs f1, lbl_80883060
lbl_fn_80225C80_00000B4C:
    lfs f0, lbl_80883064
    stfs f1, 0x1834(r27)
    stfs f0, 0x183c(r27)
lbl_fn_80225C80_00000B58:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80225DDC(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    stfd f30, 0xc0(r1)
    psq_st f30, 0xc8(r1), 0, 0
    stw r31, 0xbc(r1)
    mr r31, r3
    stw r30, 0xb8(r1)
    stw r29, 0xb4(r1)
    stw r28, 0xb0(r1)
    lwz r4, lbl_8087F0A8
    lwz r0, 0x1134(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80225DDC_00000BB8
    lfs f0, lbl_80883028
    b lbl_fn_80225DDC_00000BBC
lbl_fn_80225DDC_00000BB8:
    lfs f0, lbl_80883020
lbl_fn_80225DDC_00000BBC:
    lwz r4, 0x1620(r3)
    stfs f0, 0x2e8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80225DDC_00000BD0
    b lbl_fn_80225DDC_00000BD8
lbl_fn_80225DDC_00000BD0:
    lwz r3, lbl_8087F0A8
    addi r4, r3, 0x5bc
lbl_fn_80225DDC_00000BD8:
    lfs f1, 0x10(r4)
    addi r3, r1, 0x80
    lfs f2, 0x14(r4)
    lfs f3, 0x18(r4)
    bl fn_805F90D0
    addi r4, r1, 0x80
    addi r3, r1, 0x14
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0xe0(r31), 0, 0
    psq_st f1, 0xb8(r31), 0, 0
    psq_st f2, 0xc0(r31), 0, 0
    psq_st f3, 0xc8(r31), 0, 0
    psq_st f4, 0xd0(r31), 0, 0
    psq_st f5, 0xd8(r31), 0, 0
    lfs f8, 0xa8(r1)
    lfs f7, 0x98(r1)
    lfs f0, 0x88(r1)
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f8, 0x1c(r1)
    bl fn_805F9940
    lfs f8, 0xa4(r1)
    fmr f30, f1
    lfs f7, 0x94(r1)
    addi r3, r1, 0x20
    lfs f0, 0x84(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0xa0(r1)
    fmr f31, f1
    lfs f7, 0x90(r1)
    addi r3, r1, 0x2c
    lfs f0, 0x80(r1)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x8(r1)
    frsp f0, f30
    stfs f31, 0xc(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x10(r1)
    ble lbl_fn_80225DDC_00000CA8
    b lbl_fn_80225DDC_00000CAC
lbl_fn_80225DDC_00000CA8:
    fmr f7, f0
lbl_fn_80225DDC_00000CAC:
    lfs f8, 0x8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_80225DDC_00000CBC
    b lbl_fn_80225DDC_00000CD4
lbl_fn_80225DDC_00000CBC:
    lfs f8, 0xc(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_80225DDC_00000CD0
    b lbl_fn_80225DDC_00000CD4
lbl_fn_80225DDC_00000CD0:
    fmr f8, f0
lbl_fn_80225DDC_00000CD4:
    stfs f8, 0x104(r31)
    li r6, 0x0
    li r5, 0x0
    li r4, 0x0
    b lbl_fn_80225DDC_00000CF8
lbl_fn_80225DDC_00000CE8:
    lwz r3, 0x2d0(r31)
    addi r6, r6, 0x1
    stwx r4, r3, r5
    addi r5, r5, 0x2c
lbl_fn_80225DDC_00000CF8:
    lwz r3, 0x21c(r31)
    lwz r0, 0x44(r3)
    cmpw r6, r0
    blt lbl_fn_80225DDC_00000CE8
    addi r3, r31, 0x1154
    addi r4, r31, 0xb0
    bl fn_8007A7BC
    lwz r3, 0x1a10(r31)
    subic. r0, r3, 0x1
    stw r0, 0x1a10(r31)
    bgt lbl_fn_80225DDC_00000D70
    lfs f1, lbl_80883028
    addi r3, r31, 0x1188
    lfs f3, lbl_80883020
    fmr f2, f1
    lfs f4, lbl_80883068
    lfs f5, lbl_8088306C
    bl fn_8011EE58
    bl fn_80680CF8
    lis r4, 0xb60b
    addi r0, r4, 0x60b7
    mulhw r0, r0, r3
    add r0, r0, r3
    srawi r0, r0, 6
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5a
    subf r3, r0, r3
    addi r0, r3, 0x1e
    stw r0, 0x1a10(r31)
lbl_fn_80225DDC_00000D70:
    addi r3, r31, 0xb0
    li r4, 0x1
    bl fn_80097E80
    li r0, 0x0
    stw r0, 0x68(r1)
    addi r3, r31, 0xb0
    addi r4, r1, 0x68
    bl fn_8000D430
    addic. r3, r1, 0x68
    beq lbl_fn_80225DDC_00000DCC
    lwz r4, 0x68(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80225DDC_00000DCC
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80225DDC_00000DC4
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80225DDC_00000DC4:
    li r0, 0x0
    stw r0, 0x68(r1)
lbl_fn_80225DDC_00000DCC:
    lfs f1, lbl_80883028
    mr r3, r31
    bl fn_80148B38
    lwz r0, 0x524(r31)
    cmpwi r0, 0x0
    lwz r3, lbl_8087EEE0
    bl fn_80076FF8
    lwz r3, 0x1620(r31)
    stfs f1, 0x1480(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80225DDC_00000DFC
    b lbl_fn_80225DDC_00000E04
lbl_fn_80225DDC_00000DFC:
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x5bc
lbl_fn_80225DDC_00000E04:
    lwz r5, 0x1620(r31)
    lfs f0, 0x34(r3)
    cmpwi r5, 0x0
    stfs f0, 0x147c(r31)
    beq lbl_fn_80225DDC_00000E1C
    b lbl_fn_80225DDC_00000E24
lbl_fn_80225DDC_00000E1C:
    lwz r3, lbl_8087F0A8
    addi r5, r3, 0x5bc
lbl_fn_80225DDC_00000E24:
    lfs f9, 0x1830(r31)
    addi r3, r1, 0x5c
    lfs f7, 0x183c(r31)
    addi r4, r31, 0x1440
    lwz r6, 0x1620(r31)
    fadds f9, f9, f7
    lfs f7, 0x30(r5)
    lfs f8, 0x182c(r31)
    cmpwi r6, 0x0
    lfs f0, 0x1838(r31)
    fadds f2, f9, f7
    fadds f10, f8, f0
    lfs f0, 0x2c(r5)
    lfs f8, 0x1828(r31)
    lfs f7, 0x1834(r31)
    fadds f11, f10, f0
    lfs f0, 0x28(r5)
    fadds f7, f8, f7
    stfs f10, 0x54(r1)
    stfs f11, 0x60(r1)
    fadds f0, f7, f0
    stfs f7, 0x50(r1)
    stfs f0, 0x5c(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f9, 0x58(r1)
    stfs f2, 0x64(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1448(r31)
    beq lbl_fn_80225DDC_00000E9C
    b lbl_fn_80225DDC_00000EA4
lbl_fn_80225DDC_00000E9C:
    lwz r3, lbl_8087F0A8
    addi r6, r3, 0x5bc
lbl_fn_80225DDC_00000EA4:
    lfs f9, 0x1830(r31)
    addi r4, r1, 0x44
    lfs f7, 0x183c(r31)
    addi r5, r31, 0x1434
    lfs f8, 0x182c(r31)
    addi r3, r31, 0x142c
    fadds f9, f9, f7
    lfs f0, 0x1838(r31)
    lfs f7, 0x24(r6)
    fadds f10, f8, f0
    lfs f8, 0x1828(r31)
    fadds f2, f9, f7
    lfs f7, 0x1834(r31)
    lfs f0, 0x20(r6)
    fadds f7, f8, f7
    stfs f10, 0x3c(r1)
    fadds f11, f10, f0
    lfs f0, 0x1c(r6)
    stfs f7, 0x38(r1)
    fadds f0, f7, f0
    stfs f11, 0x48(r1)
    stfs f0, 0x44(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f9, 0x40(r1)
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x143c(r31)
    bl fn_8004B378
    lfs f8, 0x1820(r31)
    lfs f0, lbl_80883070
    fcmpo cr0, f8, f0
    ble lbl_fn_80225DDC_00000F28
    b lbl_fn_80225DDC_00000F2C
lbl_fn_80225DDC_00000F28:
    fmr f8, f0
lbl_fn_80225DDC_00000F2C:
    frsp f0, f8
    lfs f7, lbl_80883074
    lwz r3, 0x1620(r31)
    stfs f8, 0x1820(r31)
    cmpwi r3, 0x0
    fmuls f0, f7, f0
    beq lbl_fn_80225DDC_00000F4C
    b lbl_fn_80225DDC_00000F54
lbl_fn_80225DDC_00000F4C:
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x5bc
lbl_fn_80225DDC_00000F54:
    lfs f2, 0x14(r3)
    mr r3, r31
    fadds f1, f2, f0
    bl fn_802254B0
    lfs f8, lbl_80883028
    lfs f0, lbl_8087DBB0
    lfs f7, 0x1820(r31)
    fdivs f8, f8, f0
    lfs f0, lbl_8088304C
    fadds f7, f7, f8
    stfs f7, 0x1820(r31)
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_80225DDC_00000F94
    li r29, 0x1
    b lbl_fn_80225DDC_00000F98
lbl_fn_80225DDC_00000F94:
    li r29, 0x4
lbl_fn_80225DDC_00000F98:
    mr r4, r29
    addi r3, r31, 0xb0
    bl fn_80094BD8
    addi r30, r31, 0x680
    li r28, 0x0
lbl_fn_80225DDC_00000FAC:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80225DDC_00000FD0
    lwz r0, 0x0(r3)
    cmpwi r0, 0x4
    bge lbl_fn_80225DDC_00000FD0
    mr r4, r29
    addi r3, r3, 0x24
    bl fn_80094BD8
lbl_fn_80225DDC_00000FD0:
    addi r28, r28, 0x1
    addi r30, r30, 0x4
    cmplwi r28, 0x8
    blt lbl_fn_80225DDC_00000FAC
    mr r30, r31
    li r28, 0x0
    b lbl_fn_80225DDC_00001010
lbl_fn_80225DDC_00000FEC:
    lwz r3, 0x6a8(r30)
    lwz r0, 0x3dc(r3)
    srawi. r0, r0, 31
    beq lbl_fn_80225DDC_00001008
    mr r4, r29
    addi r3, r3, 0x4
    bl fn_80094BD8
lbl_fn_80225DDC_00001008:
    addi r30, r30, 0x4
    addi r28, r28, 0x1
lbl_fn_80225DDC_00001010:
    lwz r0, 0x6a4(r31)
    cmplw r28, r0
    blt lbl_fn_80225DDC_00000FEC
    lwz r0, 0xe4(r1)
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    psq_l f30, 0xc8(r1), 0, 0
    lfd f30, 0xc0(r1)
    lwz r31, 0xbc(r1)
    lwz r30, 0xb8(r1)
    lwz r29, 0xb4(r1)
    lwz r28, 0xb0(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_802262B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r4, r31
    beq lbl_fn_802262B8_00001070
    addi r4, r3, 0x1424
lbl_fn_802262B8_00001070:
    lwz r3, lbl_8087EFB4
    li r5, 0x2
    lfs f1, lbl_80883038
    bl fn_800BDB58
    cmpwi r31, 0x0
    beq lbl_fn_802262B8_0000108C
    addi r31, r31, 0x1424
lbl_fn_802262B8_0000108C:
    lwz r3, lbl_8087EFB4
    mr r4, r31
    lfs f1, lbl_80883038
    li r5, 0x10
    bl fn_800BDB58
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80226320(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    addi r11, r1, 0x220
    bl _savegpr_27
    lwz r0, 0x104(r4)
    addi r10, r1, 0x10
    stw r0, 0x8(r1)
    addi r9, r1, 0x1c
    addi r8, r1, 0x28
    addi r7, r1, 0x34
    lwz r0, 0x108(r4)
    addi r6, r1, 0x60
    stw r0, 0xc(r1)
    addi r5, r1, 0x90
    mr r30, r3
    mr r31, r4
    psq_l f1, 0x10c(r4), 0, 0
    lfs f2, 0x114(r4)
    stfs f2, 0x18(r1)
    psq_st f1, 0x0(r10), 0, 0
    psq_l f1, 0x118(r4), 0, 0
    lfs f2, 0x120(r4)
    stfs f2, 0x24(r1)
    psq_st f1, 0x0(r9), 0, 0
    psq_l f1, 0x124(r4), 0, 0
    lfs f2, 0x12c(r4)
    stfs f2, 0x30(r1)
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x130(r4), 0, 0
    lfs f2, 0x138(r4)
    stfs f2, 0x3c(r1)
    psq_st f1, 0x0(r7), 0, 0
    lfs f0, 0x13c(r4)
    stfs f0, 0x40(r1)
    lfs f0, 0x140(r4)
    stfs f0, 0x44(r1)
    lfs f0, 0x144(r4)
    stfs f0, 0x48(r1)
    lfs f0, 0x148(r4)
    stfs f0, 0x4c(r1)
    lfs f0, 0x14c(r4)
    stfs f0, 0x50(r1)
    lfs f0, 0x150(r4)
    stfs f0, 0x54(r1)
    lfs f0, 0x154(r4)
    stfs f0, 0x58(r1)
    lfs f0, 0x158(r4)
    stfs f0, 0x5c(r1)
    psq_l f1, 0x15c(r4), 0, 0
    psq_l f2, 0x164(r4), 0, 0
    psq_l f3, 0x16c(r4), 0, 0
    psq_l f4, 0x174(r4), 0, 0
    psq_l f5, 0x17c(r4), 0, 0
    psq_l f6, 0x184(r4), 0, 0
    psq_st f6, 0x28(r6), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    psq_st f3, 0x10(r6), 0, 0
    psq_st f4, 0x18(r6), 0, 0
    psq_st f5, 0x20(r6), 0, 0
    psq_l f1, 0x18c(r4), 0, 0
    psq_l f2, 0x194(r4), 0, 0
    psq_l f3, 0x19c(r4), 0, 0
    psq_l f4, 0x1a4(r4), 0, 0
    psq_l f5, 0x1ac(r4), 0, 0
    psq_l f6, 0x1b4(r4), 0, 0
    psq_l f7, 0x1bc(r4), 0, 0
    psq_l f8, 0x1c4(r4), 0, 0
    psq_st f8, 0x38(r5), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_st f7, 0x30(r5), 0, 0
    lfs f0, 0x1cc(r4)
    stfs f0, 0xd0(r1)
    lfs f0, 0x1d0(r4)
    addi r8, r1, 0x108
    stfs f0, 0xd4(r1)
    addi r5, r1, 0xd8
    addi r6, r8, 0x94
    addi r7, r4, 0x298
    psq_l f1, 0x1d4(r4), 0, 0
    addi r0, r8, 0xf4
    psq_l f2, 0x1dc(r4), 0, 0
    psq_l f3, 0x1e4(r4), 0, 0
    psq_l f4, 0x1ec(r4), 0, 0
    psq_l f5, 0x1f4(r4), 0, 0
    psq_l f6, 0x1fc(r4), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_l f1, 0x204(r4), 0, 0
    psq_l f2, 0x20c(r4), 0, 0
    psq_l f3, 0x214(r4), 0, 0
    psq_l f4, 0x21c(r4), 0, 0
    psq_l f5, 0x224(r4), 0, 0
    psq_l f6, 0x22c(r4), 0, 0
    psq_st f6, 0x28(r8), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    psq_st f2, 0x8(r8), 0, 0
    psq_st f3, 0x10(r8), 0, 0
    psq_st f4, 0x18(r8), 0, 0
    psq_st f5, 0x20(r8), 0, 0
    lwz r5, 0x234(r4)
    stw r5, 0x138(r1)
    lfs f0, 0x238(r4)
    stfs f0, 0x13c(r1)
    lfs f0, 0x23c(r4)
    stfs f0, 0x140(r1)
    psq_l f1, 0x240(r4), 0, 0
    lfs f2, 0x248(r4)
    stfs f2, 0x14c(r1)
    psq_st f1, 0x3c(r8), 0, 0
    lfs f0, 0x24c(r4)
    stfs f0, 0x150(r1)
    psq_l f1, 0x250(r4), 0, 0
    lfs f2, 0x258(r4)
    stfs f2, 0x15c(r1)
    psq_st f1, 0x4c(r8), 0, 0
    lfs f0, 0x25c(r4)
    stfs f0, 0x160(r1)
    psq_l f1, 0x260(r4), 0, 0
    lfs f2, 0x268(r4)
    stfs f2, 0x16c(r1)
    psq_st f1, 0x5c(r8), 0, 0
    lfs f0, 0x26c(r4)
    stfs f0, 0x170(r1)
    psq_l f1, 0x270(r4), 0, 0
    lfs f2, 0x278(r4)
    stfs f2, 0x17c(r1)
    psq_st f1, 0x6c(r8), 0, 0
    lfs f0, 0x27c(r4)
    stfs f0, 0x180(r1)
    psq_l f1, 0x280(r4), 0, 0
    lfs f2, 0x288(r4)
    stfs f2, 0x18c(r1)
    psq_st f1, 0x7c(r8), 0, 0
    psq_l f1, 0x28c(r4), 0, 0
    lfs f2, 0x294(r4)
    stfs f2, 0x198(r1)
    psq_st f1, 0x88(r8), 0, 0
lbl_fn_80226320_00001304:
    lfs f2, 0x8(r7)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r7)
    addi r7, r7, 0x10
    stfs f0, 0xc(r6)
    addi r6, r6, 0x10
    cmplw r6, r0
    blt lbl_fn_80226320_00001304
    lwz r0, 0x142c(r3)
    addi r5, r3, 0x1434
    stw r0, 0x104(r4)
    addi r6, r3, 0x1440
    addi r7, r3, 0x144c
    addi r8, r3, 0x1458
    lwz r0, 0x1430(r3)
    addi r9, r3, 0x1484
    stw r0, 0x108(r4)
    addi r10, r3, 0x14b4
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x143c(r3)
    stfs f2, 0x114(r4)
    psq_st f1, 0x10c(r4), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    lfs f2, 0x1448(r3)
    stfs f2, 0x120(r4)
    psq_st f1, 0x118(r4), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    lfs f2, 0x1454(r3)
    stfs f2, 0x12c(r4)
    psq_st f1, 0x124(r4), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    lfs f2, 0x1460(r3)
    stfs f2, 0x138(r4)
    psq_st f1, 0x130(r4), 0, 0
    lfs f0, 0x1464(r3)
    stfs f0, 0x13c(r4)
    lfs f0, 0x1468(r3)
    stfs f0, 0x140(r4)
    lfs f0, 0x146c(r3)
    stfs f0, 0x144(r4)
    lfs f0, 0x1470(r3)
    stfs f0, 0x148(r4)
    lfs f0, 0x1474(r3)
    stfs f0, 0x14c(r4)
    lfs f0, 0x1478(r3)
    stfs f0, 0x150(r4)
    lfs f0, 0x147c(r3)
    stfs f0, 0x154(r4)
    lfs f0, 0x1480(r3)
    stfs f0, 0x158(r4)
    psq_l f1, 0x0(r9), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    psq_l f3, 0x10(r9), 0, 0
    psq_l f4, 0x18(r9), 0, 0
    psq_l f5, 0x20(r9), 0, 0
    psq_l f6, 0x28(r9), 0, 0
    psq_st f6, 0x184(r4), 0, 0
    psq_st f1, 0x15c(r4), 0, 0
    psq_st f2, 0x164(r4), 0, 0
    psq_st f3, 0x16c(r4), 0, 0
    psq_st f4, 0x174(r4), 0, 0
    psq_st f5, 0x17c(r4), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    psq_l f2, 0x8(r10), 0, 0
    psq_l f3, 0x10(r10), 0, 0
    psq_l f4, 0x18(r10), 0, 0
    psq_l f5, 0x20(r10), 0, 0
    psq_l f6, 0x28(r10), 0, 0
    psq_l f7, 0x30(r10), 0, 0
    psq_l f8, 0x38(r10), 0, 0
    psq_st f8, 0x1c4(r4), 0, 0
    psq_st f1, 0x18c(r4), 0, 0
    psq_st f2, 0x194(r4), 0, 0
    psq_st f3, 0x19c(r4), 0, 0
    psq_st f4, 0x1a4(r4), 0, 0
    psq_st f5, 0x1ac(r4), 0, 0
    psq_st f6, 0x1b4(r4), 0, 0
    psq_st f7, 0x1bc(r4), 0, 0
    lfs f0, 0x14f4(r3)
    stfs f0, 0x1cc(r4)
    lfs f0, 0x14f8(r3)
    addi r6, r3, 0x152c
    stfs f0, 0x1d0(r4)
    addi r5, r3, 0x14fc
    addi r8, r4, 0x298
    addi r7, r6, 0x94
    psq_l f1, 0x0(r5), 0, 0
    addi r0, r4, 0x2f8
    psq_l f2, 0x8(r5), 0, 0
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_st f6, 0x1fc(r4), 0, 0
    psq_st f1, 0x1d4(r4), 0, 0
    psq_st f2, 0x1dc(r4), 0, 0
    psq_st f3, 0x1e4(r4), 0, 0
    psq_st f4, 0x1ec(r4), 0, 0
    psq_st f5, 0x1f4(r4), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_l f3, 0x10(r6), 0, 0
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f6, 0x22c(r4), 0, 0
    psq_st f1, 0x204(r4), 0, 0
    psq_st f2, 0x20c(r4), 0, 0
    psq_st f3, 0x214(r4), 0, 0
    psq_st f4, 0x21c(r4), 0, 0
    psq_st f5, 0x224(r4), 0, 0
    lwz r5, 0x155c(r3)
    stw r5, 0x234(r4)
    lfs f0, 0x1560(r3)
    stfs f0, 0x238(r4)
    lfs f0, 0x1564(r3)
    stfs f0, 0x23c(r4)
    psq_l f1, 0x3c(r6), 0, 0
    lfs f2, 0x1570(r3)
    stfs f2, 0x248(r4)
    psq_st f1, 0x240(r4), 0, 0
    lfs f0, 0x1574(r3)
    stfs f0, 0x24c(r4)
    psq_l f1, 0x4c(r6), 0, 0
    lfs f2, 0x1580(r3)
    stfs f2, 0x258(r4)
    psq_st f1, 0x250(r4), 0, 0
    lfs f0, 0x1584(r3)
    stfs f0, 0x25c(r4)
    psq_l f1, 0x5c(r6), 0, 0
    lfs f2, 0x1590(r3)
    stfs f2, 0x268(r4)
    psq_st f1, 0x260(r4), 0, 0
    lfs f0, 0x1594(r3)
    stfs f0, 0x26c(r4)
    psq_l f1, 0x6c(r6), 0, 0
    lfs f2, 0x15a0(r3)
    stfs f2, 0x278(r4)
    psq_st f1, 0x270(r4), 0, 0
    lfs f0, 0x15a4(r3)
    stfs f0, 0x27c(r4)
    psq_l f1, 0x7c(r6), 0, 0
    lfs f2, 0x15b0(r3)
    stfs f2, 0x288(r4)
    psq_st f1, 0x280(r4), 0, 0
    psq_l f1, 0x88(r6), 0, 0
    lfs f2, 0x15bc(r3)
    stfs f2, 0x294(r4)
    psq_st f1, 0x28c(r4), 0, 0
lbl_fn_80226320_00001560:
    lfs f2, 0x8(r7)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0x8(r8)
    lfs f0, 0xc(r7)
    addi r7, r7, 0x10
    stfs f0, 0xc(r8)
    addi r8, r8, 0x10
    cmplw r8, r0
    blt lbl_fn_80226320_00001560
    lwzu r12, 0xb0(r3)
    mr r4, r31
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    addi r28, r30, 0x680
    li r27, 0x0
    li r29, 0x1
lbl_fn_80226320_000015A8:
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80226320_000015E8
    lwz r0, 0x6a0(r30)
    slw r4, r29, r27
    and r0, r4, r0
    cmplw r4, r0
    bne lbl_fn_80226320_000015E8
    lwz r0, 0x0(r3)
    cmpwi r0, 0x4
    bge lbl_fn_80226320_000015E8
    lwzu r12, 0x24(r3)
    mr r4, r31
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
lbl_fn_80226320_000015E8:
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmplwi r27, 0x8
    blt lbl_fn_80226320_000015A8
    mr r29, r30
    li r27, 0x0
    b lbl_fn_80226320_00001630
lbl_fn_80226320_00001604:
    lwz r3, 0x6a8(r29)
    lwz r0, 0x3dc(r3)
    srawi. r0, r0, 31
    beq lbl_fn_80226320_00001628
    lwzu r12, 0x4(r3)
    mr r4, r31
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
lbl_fn_80226320_00001628:
    addi r29, r29, 0x4
    addi r27, r27, 0x1
lbl_fn_80226320_00001630:
    lwz r0, 0x6a4(r30)
    cmplw r27, r0
    blt lbl_fn_80226320_00001604
    lwz r0, 0x8(r1)
    addi r3, r1, 0x10
    stw r0, 0x104(r31)
    addi r4, r1, 0x1c
    addi r5, r1, 0x28
    addi r6, r1, 0x34
    lwz r0, 0xc(r1)
    addi r7, r1, 0x60
    stw r0, 0x108(r31)
    addi r8, r1, 0x90
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x18(r1)
    stfs f2, 0x114(r31)
    psq_st f1, 0x10c(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x24(r1)
    stfs f2, 0x120(r31)
    psq_st f1, 0x118(r31), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x30(r1)
    stfs f2, 0x12c(r31)
    psq_st f1, 0x124(r31), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    lfs f2, 0x3c(r1)
    stfs f2, 0x138(r31)
    psq_st f1, 0x130(r31), 0, 0
    lfs f0, 0x40(r1)
    stfs f0, 0x13c(r31)
    lfs f0, 0x44(r1)
    stfs f0, 0x140(r31)
    lfs f0, 0x48(r1)
    stfs f0, 0x144(r31)
    lfs f0, 0x4c(r1)
    stfs f0, 0x148(r31)
    lfs f0, 0x50(r1)
    stfs f0, 0x14c(r31)
    lfs f0, 0x54(r1)
    stfs f0, 0x150(r31)
    lfs f0, 0x58(r1)
    stfs f0, 0x154(r31)
    lfs f0, 0x5c(r1)
    stfs f0, 0x158(r31)
    psq_l f1, 0x0(r7), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    psq_l f3, 0x10(r7), 0, 0
    psq_l f4, 0x18(r7), 0, 0
    psq_l f5, 0x20(r7), 0, 0
    psq_l f6, 0x28(r7), 0, 0
    psq_st f6, 0x184(r31), 0, 0
    psq_st f1, 0x15c(r31), 0, 0
    psq_st f2, 0x164(r31), 0, 0
    psq_st f3, 0x16c(r31), 0, 0
    psq_st f4, 0x174(r31), 0, 0
    psq_st f5, 0x17c(r31), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    psq_l f3, 0x10(r8), 0, 0
    psq_l f4, 0x18(r8), 0, 0
    psq_l f5, 0x20(r8), 0, 0
    psq_l f6, 0x28(r8), 0, 0
    psq_l f7, 0x30(r8), 0, 0
    psq_l f8, 0x38(r8), 0, 0
    psq_st f8, 0x1c4(r31), 0, 0
    psq_st f1, 0x18c(r31), 0, 0
    psq_st f2, 0x194(r31), 0, 0
    psq_st f3, 0x19c(r31), 0, 0
    psq_st f4, 0x1a4(r31), 0, 0
    psq_st f5, 0x1ac(r31), 0, 0
    psq_st f6, 0x1b4(r31), 0, 0
    psq_st f7, 0x1bc(r31), 0, 0
    lfs f0, 0xd0(r1)
    stfs f0, 0x1cc(r31)
    lfs f0, 0xd4(r1)
    stfs f0, 0x1d0(r31)
    addi r3, r1, 0xd8
    addi r4, r1, 0x108
    psq_l f1, 0x0(r3), 0, 0
    addi r6, r31, 0x298
    psq_l f2, 0x8(r3), 0, 0
    addi r5, r4, 0x94
    psq_l f3, 0x10(r3), 0, 0
    addi r0, r31, 0x2f8
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x1fc(r31), 0, 0
    psq_st f1, 0x1d4(r31), 0, 0
    psq_st f2, 0x1dc(r31), 0, 0
    psq_st f3, 0x1e4(r31), 0, 0
    psq_st f4, 0x1ec(r31), 0, 0
    psq_st f5, 0x1f4(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x22c(r31), 0, 0
    psq_st f1, 0x204(r31), 0, 0
    psq_st f2, 0x20c(r31), 0, 0
    psq_st f3, 0x214(r31), 0, 0
    psq_st f4, 0x21c(r31), 0, 0
    psq_st f5, 0x224(r31), 0, 0
    lwz r3, 0x138(r1)
    stw r3, 0x234(r31)
    lfs f0, 0x13c(r1)
    stfs f0, 0x238(r31)
    lfs f0, 0x140(r1)
    stfs f0, 0x23c(r31)
    psq_l f1, 0x3c(r4), 0, 0
    lfs f2, 0x14c(r1)
    stfs f2, 0x248(r31)
    psq_st f1, 0x240(r31), 0, 0
    lfs f0, 0x150(r1)
    stfs f0, 0x24c(r31)
    psq_l f1, 0x4c(r4), 0, 0
    lfs f2, 0x15c(r1)
    stfs f2, 0x258(r31)
    psq_st f1, 0x250(r31), 0, 0
    lfs f0, 0x160(r1)
    stfs f0, 0x25c(r31)
    psq_l f1, 0x5c(r4), 0, 0
    lfs f2, 0x16c(r1)
    stfs f2, 0x268(r31)
    psq_st f1, 0x260(r31), 0, 0
    lfs f0, 0x170(r1)
    stfs f0, 0x26c(r31)
    psq_l f1, 0x6c(r4), 0, 0
    lfs f2, 0x17c(r1)
    stfs f2, 0x278(r31)
    psq_st f1, 0x270(r31), 0, 0
    lfs f0, 0x180(r1)
    stfs f0, 0x27c(r31)
    psq_l f1, 0x7c(r4), 0, 0
    lfs f2, 0x18c(r1)
    stfs f2, 0x288(r31)
    psq_st f1, 0x280(r31), 0, 0
    psq_l f1, 0x88(r4), 0, 0
    lfs f2, 0x198(r1)
    stfs f2, 0x294(r31)
    psq_st f1, 0x28c(r31), 0, 0
lbl_fn_80226320_00001870:
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    addi r5, r5, 0x10
    stfs f0, 0xc(r6)
    addi r6, r6, 0x10
    cmplw r6, r0
    blt lbl_fn_80226320_00001870
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_8004B338
    addi r11, r1, 0x220
    bl _restgpr_27
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_80226B28(void)
{
    nofralloc
    mulli r4, r4, 0x568
    lwz r6, lbl_8087F0A8
    mulli r0, r5, 0x2b4
    add r4, r6, r4
    add r4, r4, r0
    addi r0, r4, 0x664
    stw r0, 0x28c(r3)
    blr
}

asm void fn_80226B48(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    addi r11, r1, 0x240
    bl _savegpr_27
    mr r30, r3
    mr r31, r4
    addi r3, r3, 0x142c
    bl fn_8004B378
    lwz r3, lbl_8087EEE0
    li r4, 0x0
    li r5, 0x0
    bl fn_8007642C
    lwz r0, 0x104(r31)
    addi r8, r1, 0x10
    stw r0, 0x8(r1)
    addi r7, r1, 0x1c
    addi r6, r1, 0x28
    addi r5, r1, 0x34
    lwz r0, 0x108(r31)
    addi r4, r1, 0x60
    stw r0, 0xc(r1)
    addi r3, r1, 0x90
    psq_l f1, 0x10c(r31), 0, 0
    lfs f2, 0x114(r31)
    stfs f2, 0x18(r1)
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x118(r31), 0, 0
    lfs f2, 0x120(r31)
    stfs f2, 0x24(r1)
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x124(r31), 0, 0
    lfs f2, 0x12c(r31)
    stfs f2, 0x30(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x130(r31), 0, 0
    lfs f2, 0x138(r31)
    stfs f2, 0x3c(r1)
    psq_st f1, 0x0(r5), 0, 0
    lfs f0, 0x13c(r31)
    stfs f0, 0x40(r1)
    lfs f0, 0x140(r31)
    stfs f0, 0x44(r1)
    lfs f0, 0x144(r31)
    stfs f0, 0x48(r1)
    lfs f0, 0x148(r31)
    stfs f0, 0x4c(r1)
    lfs f0, 0x14c(r31)
    stfs f0, 0x50(r1)
    lfs f0, 0x150(r31)
    stfs f0, 0x54(r1)
    lfs f0, 0x154(r31)
    stfs f0, 0x58(r1)
    lfs f0, 0x158(r31)
    stfs f0, 0x5c(r1)
    psq_l f1, 0x15c(r31), 0, 0
    psq_l f2, 0x164(r31), 0, 0
    psq_l f3, 0x16c(r31), 0, 0
    psq_l f4, 0x174(r31), 0, 0
    psq_l f5, 0x17c(r31), 0, 0
    psq_l f6, 0x184(r31), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_l f1, 0x18c(r31), 0, 0
    psq_l f2, 0x194(r31), 0, 0
    psq_l f3, 0x19c(r31), 0, 0
    psq_l f4, 0x1a4(r31), 0, 0
    psq_l f5, 0x1ac(r31), 0, 0
    psq_l f6, 0x1b4(r31), 0, 0
    psq_l f7, 0x1bc(r31), 0, 0
    psq_l f8, 0x1c4(r31), 0, 0
    psq_st f8, 0x38(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f7, 0x30(r3), 0, 0
    lfs f0, 0x1cc(r31)
    stfs f0, 0xd0(r1)
    lfs f0, 0x1d0(r31)
    stfs f0, 0xd4(r1)
    psq_l f1, 0x1d4(r31), 0, 0
    addi r6, r1, 0x108
    psq_l f2, 0x1dc(r31), 0, 0
    addi r3, r1, 0xd8
    psq_l f3, 0x1e4(r31), 0, 0
    addi r4, r6, 0x94
    psq_l f4, 0x1ec(r31), 0, 0
    addi r5, r31, 0x298
    psq_l f5, 0x1f4(r31), 0, 0
    addi r0, r6, 0xf4
    psq_l f6, 0x1fc(r31), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_l f1, 0x204(r31), 0, 0
    psq_l f2, 0x20c(r31), 0, 0
    psq_l f3, 0x214(r31), 0, 0
    psq_l f4, 0x21c(r31), 0, 0
    psq_l f5, 0x224(r31), 0, 0
    psq_l f6, 0x22c(r31), 0, 0
    psq_st f6, 0x28(r6), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    psq_st f3, 0x10(r6), 0, 0
    psq_st f4, 0x18(r6), 0, 0
    psq_st f5, 0x20(r6), 0, 0
    lwz r3, 0x234(r31)
    stw r3, 0x138(r1)
    lfs f0, 0x238(r31)
    stfs f0, 0x13c(r1)
    lfs f0, 0x23c(r31)
    stfs f0, 0x140(r1)
    psq_l f1, 0x240(r31), 0, 0
    lfs f2, 0x248(r31)
    stfs f2, 0x14c(r1)
    psq_st f1, 0x3c(r6), 0, 0
    lfs f0, 0x24c(r31)
    stfs f0, 0x150(r1)
    psq_l f1, 0x250(r31), 0, 0
    lfs f2, 0x258(r31)
    stfs f2, 0x15c(r1)
    psq_st f1, 0x4c(r6), 0, 0
    lfs f0, 0x25c(r31)
    stfs f0, 0x160(r1)
    psq_l f1, 0x260(r31), 0, 0
    lfs f2, 0x268(r31)
    stfs f2, 0x16c(r1)
    psq_st f1, 0x5c(r6), 0, 0
    lfs f0, 0x26c(r31)
    stfs f0, 0x170(r1)
    psq_l f1, 0x270(r31), 0, 0
    lfs f2, 0x278(r31)
    stfs f2, 0x17c(r1)
    psq_st f1, 0x6c(r6), 0, 0
    lfs f0, 0x27c(r31)
    stfs f0, 0x180(r1)
    psq_l f1, 0x280(r31), 0, 0
    lfs f2, 0x288(r31)
    stfs f2, 0x18c(r1)
    psq_st f1, 0x7c(r6), 0, 0
    psq_l f1, 0x28c(r31), 0, 0
    lfs f2, 0x294(r31)
    stfs f2, 0x198(r1)
    psq_st f1, 0x88(r6), 0, 0
lbl_fn_80226B48_00001B44:
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    lfs f0, 0xc(r5)
    addi r5, r5, 0x10
    stfs f0, 0xc(r4)
    addi r4, r4, 0x10
    cmplw r4, r0
    blt lbl_fn_80226B48_00001B44
    lwz r0, 0x142c(r30)
    addi r3, r30, 0x1434
    stw r0, 0x104(r31)
    addi r4, r30, 0x1440
    addi r5, r30, 0x144c
    addi r6, r30, 0x1458
    lwz r0, 0x1430(r30)
    addi r7, r30, 0x1484
    stw r0, 0x108(r31)
    addi r8, r30, 0x14b4
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x143c(r30)
    stfs f2, 0x114(r31)
    psq_st f1, 0x10c(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x1448(r30)
    stfs f2, 0x120(r31)
    psq_st f1, 0x118(r31), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x1454(r30)
    stfs f2, 0x12c(r31)
    psq_st f1, 0x124(r31), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    lfs f2, 0x1460(r30)
    stfs f2, 0x138(r31)
    psq_st f1, 0x130(r31), 0, 0
    lfs f0, 0x1464(r30)
    stfs f0, 0x13c(r31)
    lfs f0, 0x1468(r30)
    stfs f0, 0x140(r31)
    lfs f0, 0x146c(r30)
    stfs f0, 0x144(r31)
    lfs f0, 0x1470(r30)
    stfs f0, 0x148(r31)
    lfs f0, 0x1474(r30)
    stfs f0, 0x14c(r31)
    lfs f0, 0x1478(r30)
    stfs f0, 0x150(r31)
    lfs f0, 0x147c(r30)
    stfs f0, 0x154(r31)
    lfs f0, 0x1480(r30)
    stfs f0, 0x158(r31)
    psq_l f1, 0x0(r7), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    psq_l f3, 0x10(r7), 0, 0
    psq_l f4, 0x18(r7), 0, 0
    psq_l f5, 0x20(r7), 0, 0
    psq_l f6, 0x28(r7), 0, 0
    psq_st f6, 0x184(r31), 0, 0
    psq_st f1, 0x15c(r31), 0, 0
    psq_st f2, 0x164(r31), 0, 0
    psq_st f3, 0x16c(r31), 0, 0
    psq_st f4, 0x174(r31), 0, 0
    psq_st f5, 0x17c(r31), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    psq_l f3, 0x10(r8), 0, 0
    psq_l f4, 0x18(r8), 0, 0
    psq_l f5, 0x20(r8), 0, 0
    psq_l f6, 0x28(r8), 0, 0
    psq_l f7, 0x30(r8), 0, 0
    psq_l f8, 0x38(r8), 0, 0
    psq_st f8, 0x1c4(r31), 0, 0
    psq_st f1, 0x18c(r31), 0, 0
    psq_st f2, 0x194(r31), 0, 0
    psq_st f3, 0x19c(r31), 0, 0
    psq_st f4, 0x1a4(r31), 0, 0
    psq_st f5, 0x1ac(r31), 0, 0
    psq_st f6, 0x1b4(r31), 0, 0
    psq_st f7, 0x1bc(r31), 0, 0
    lfs f0, 0x14f4(r30)
    stfs f0, 0x1cc(r31)
    lfs f0, 0x14f8(r30)
    addi r4, r30, 0x152c
    stfs f0, 0x1d0(r31)
    addi r3, r30, 0x14fc
    addi r6, r31, 0x298
    addi r5, r4, 0x94
    psq_l f1, 0x0(r3), 0, 0
    addi r0, r31, 0x2f8
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x1fc(r31), 0, 0
    psq_st f1, 0x1d4(r31), 0, 0
    psq_st f2, 0x1dc(r31), 0, 0
    psq_st f3, 0x1e4(r31), 0, 0
    psq_st f4, 0x1ec(r31), 0, 0
    psq_st f5, 0x1f4(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x22c(r31), 0, 0
    psq_st f1, 0x204(r31), 0, 0
    psq_st f2, 0x20c(r31), 0, 0
    psq_st f3, 0x214(r31), 0, 0
    psq_st f4, 0x21c(r31), 0, 0
    psq_st f5, 0x224(r31), 0, 0
    lwz r3, 0x155c(r30)
    stw r3, 0x234(r31)
    lfs f0, 0x1560(r30)
    stfs f0, 0x238(r31)
    lfs f0, 0x1564(r30)
    stfs f0, 0x23c(r31)
    psq_l f1, 0x3c(r4), 0, 0
    lfs f2, 0x1570(r30)
    stfs f2, 0x248(r31)
    psq_st f1, 0x240(r31), 0, 0
    lfs f0, 0x1574(r30)
    stfs f0, 0x24c(r31)
    psq_l f1, 0x4c(r4), 0, 0
    lfs f2, 0x1580(r30)
    stfs f2, 0x258(r31)
    psq_st f1, 0x250(r31), 0, 0
    lfs f0, 0x1584(r30)
    stfs f0, 0x25c(r31)
    psq_l f1, 0x5c(r4), 0, 0
    lfs f2, 0x1590(r30)
    stfs f2, 0x268(r31)
    psq_st f1, 0x260(r31), 0, 0
    lfs f0, 0x1594(r30)
    stfs f0, 0x26c(r31)
    psq_l f1, 0x6c(r4), 0, 0
    lfs f2, 0x15a0(r30)
    stfs f2, 0x278(r31)
    psq_st f1, 0x270(r31), 0, 0
    lfs f0, 0x15a4(r30)
    stfs f0, 0x27c(r31)
    psq_l f1, 0x7c(r4), 0, 0
    lfs f2, 0x15b0(r30)
    stfs f2, 0x288(r31)
    psq_st f1, 0x280(r31), 0, 0
    psq_l f1, 0x88(r4), 0, 0
    lfs f2, 0x15bc(r30)
    stfs f2, 0x294(r31)
    psq_st f1, 0x28c(r31), 0, 0
lbl_fn_80226B48_00001DA0:
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    addi r5, r5, 0x10
    stfs f0, 0xc(r6)
    addi r6, r6, 0x10
    cmplw r6, r0
    blt lbl_fn_80226B48_00001DA0
    lwz r3, lbl_8087EEE0
    addi r4, r30, 0x14b4
    bl fn_80071D68
    lwz r6, 0x1620(r30)
    cmpwi r6, 0x0
    beq lbl_fn_80226B48_00001DE8
    mr r3, r6
    b lbl_fn_80226B48_00001DF0
lbl_fn_80226B48_00001DE8:
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x5bc
lbl_fn_80226B48_00001DF0:
    cmpwi r6, 0x0
    beq lbl_fn_80226B48_00001E00
    mr r4, r6
    b lbl_fn_80226B48_00001E08
lbl_fn_80226B48_00001E00:
    lwz r4, lbl_8087F0A8
    addi r4, r4, 0x5bc
lbl_fn_80226B48_00001E08:
    cmpwi r6, 0x0
    beq lbl_fn_80226B48_00001E18
    mr r5, r6
    b lbl_fn_80226B48_00001E20
lbl_fn_80226B48_00001E18:
    lwz r5, lbl_8087F0A8
    addi r5, r5, 0x5bc
lbl_fn_80226B48_00001E20:
    cmpwi r6, 0x0
    beq lbl_fn_80226B48_00001E2C
    b lbl_fn_80226B48_00001E34
lbl_fn_80226B48_00001E2C:
    lwz r6, lbl_8087F0A8
    addi r6, r6, 0x5bc
lbl_fn_80226B48_00001E34:
    lfs f0, 0x0(r6)
    lfs f10, 0x4(r5)
    fctiwz f11, f0
    lfs f0, 0xc(r3)
    lfs f9, 0x8(r4)
    fctiwz f10, f10
    fctiwz f0, f0
    stfd f11, 0x200(r1)
    fctiwz f9, f9
    stfd f10, 0x208(r1)
    lwz r3, lbl_8087EEE0
    stfd f9, 0x210(r1)
    lwz r4, 0x204(r1)
    stfd f0, 0x218(r1)
    lwz r5, 0x20c(r1)
    lwz r6, 0x214(r1)
    lwz r7, 0x21c(r1)
    bl fn_800760BC
    lwz r12, 0xb0(r30)
    addi r3, r30, 0xb0
    mr r4, r31
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    addi r28, r30, 0x680
    li r27, 0x0
    li r29, 0x1
lbl_fn_80226B48_00001EA0:
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80226B48_00001EE0
    lwz r0, 0x6a0(r30)
    slw r4, r29, r27
    and r0, r4, r0
    cmplw r4, r0
    bne lbl_fn_80226B48_00001EE0
    lwz r0, 0x0(r3)
    cmpwi r0, 0x4
    bge lbl_fn_80226B48_00001EE0
    lwzu r12, 0x24(r3)
    mr r4, r31
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_80226B48_00001EE0:
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmplwi r27, 0x8
    blt lbl_fn_80226B48_00001EA0
    mr r29, r30
    li r27, 0x0
    b lbl_fn_80226B48_00001F28
lbl_fn_80226B48_00001EFC:
    lwz r3, 0x6a8(r29)
    lwz r0, 0x3dc(r3)
    srawi. r0, r0, 31
    beq lbl_fn_80226B48_00001F20
    lwzu r12, 0x4(r3)
    mr r4, r31
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_80226B48_00001F20:
    addi r29, r29, 0x4
    addi r27, r27, 0x1
lbl_fn_80226B48_00001F28:
    lwz r0, 0x6a4(r30)
    cmplw r27, r0
    blt lbl_fn_80226B48_00001EFC
    lwz r3, lbl_8087EEE0
    bl fn_800760D0
    lwz r0, 0x8(r1)
    addi r3, r1, 0x10
    stw r0, 0x104(r31)
    addi r4, r1, 0x1c
    addi r5, r1, 0x28
    addi r6, r1, 0x34
    lwz r0, 0xc(r1)
    addi r7, r1, 0x60
    stw r0, 0x108(r31)
    addi r8, r1, 0x90
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x18(r1)
    stfs f2, 0x114(r31)
    psq_st f1, 0x10c(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x24(r1)
    stfs f2, 0x120(r31)
    psq_st f1, 0x118(r31), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x30(r1)
    stfs f2, 0x12c(r31)
    psq_st f1, 0x124(r31), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    lfs f2, 0x3c(r1)
    stfs f2, 0x138(r31)
    psq_st f1, 0x130(r31), 0, 0
    lfs f0, 0x40(r1)
    stfs f0, 0x13c(r31)
    lfs f0, 0x44(r1)
    stfs f0, 0x140(r31)
    lfs f0, 0x48(r1)
    stfs f0, 0x144(r31)
    lfs f0, 0x4c(r1)
    stfs f0, 0x148(r31)
    lfs f0, 0x50(r1)
    stfs f0, 0x14c(r31)
    lfs f0, 0x54(r1)
    stfs f0, 0x150(r31)
    lfs f0, 0x58(r1)
    stfs f0, 0x154(r31)
    lfs f0, 0x5c(r1)
    stfs f0, 0x158(r31)
    psq_l f1, 0x0(r7), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    psq_l f3, 0x10(r7), 0, 0
    psq_l f4, 0x18(r7), 0, 0
    psq_l f5, 0x20(r7), 0, 0
    psq_l f6, 0x28(r7), 0, 0
    psq_st f6, 0x184(r31), 0, 0
    psq_st f1, 0x15c(r31), 0, 0
    psq_st f2, 0x164(r31), 0, 0
    psq_st f3, 0x16c(r31), 0, 0
    psq_st f4, 0x174(r31), 0, 0
    psq_st f5, 0x17c(r31), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    psq_l f3, 0x10(r8), 0, 0
    psq_l f4, 0x18(r8), 0, 0
    psq_l f5, 0x20(r8), 0, 0
    psq_l f6, 0x28(r8), 0, 0
    psq_l f7, 0x30(r8), 0, 0
    psq_l f8, 0x38(r8), 0, 0
    psq_st f8, 0x1c4(r31), 0, 0
    psq_st f1, 0x18c(r31), 0, 0
    psq_st f2, 0x194(r31), 0, 0
    psq_st f3, 0x19c(r31), 0, 0
    psq_st f4, 0x1a4(r31), 0, 0
    psq_st f5, 0x1ac(r31), 0, 0
    psq_st f6, 0x1b4(r31), 0, 0
    psq_st f7, 0x1bc(r31), 0, 0
    lfs f0, 0xd0(r1)
    stfs f0, 0x1cc(r31)
    lfs f0, 0xd4(r1)
    stfs f0, 0x1d0(r31)
    addi r3, r1, 0xd8
    addi r4, r1, 0x108
    psq_l f1, 0x0(r3), 0, 0
    addi r6, r31, 0x298
    psq_l f2, 0x8(r3), 0, 0
    addi r5, r4, 0x94
    psq_l f3, 0x10(r3), 0, 0
    addi r0, r31, 0x2f8
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x1fc(r31), 0, 0
    psq_st f1, 0x1d4(r31), 0, 0
    psq_st f2, 0x1dc(r31), 0, 0
    psq_st f3, 0x1e4(r31), 0, 0
    psq_st f4, 0x1ec(r31), 0, 0
    psq_st f5, 0x1f4(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x22c(r31), 0, 0
    psq_st f1, 0x204(r31), 0, 0
    psq_st f2, 0x20c(r31), 0, 0
    psq_st f3, 0x214(r31), 0, 0
    psq_st f4, 0x21c(r31), 0, 0
    psq_st f5, 0x224(r31), 0, 0
    lwz r3, 0x138(r1)
    stw r3, 0x234(r31)
    lfs f0, 0x13c(r1)
    stfs f0, 0x238(r31)
    lfs f0, 0x140(r1)
    stfs f0, 0x23c(r31)
    psq_l f1, 0x3c(r4), 0, 0
    lfs f2, 0x14c(r1)
    stfs f2, 0x248(r31)
    psq_st f1, 0x240(r31), 0, 0
    lfs f0, 0x150(r1)
    stfs f0, 0x24c(r31)
    psq_l f1, 0x4c(r4), 0, 0
    lfs f2, 0x15c(r1)
    stfs f2, 0x258(r31)
    psq_st f1, 0x250(r31), 0, 0
    lfs f0, 0x160(r1)
    stfs f0, 0x25c(r31)
    psq_l f1, 0x5c(r4), 0, 0
    lfs f2, 0x16c(r1)
    stfs f2, 0x268(r31)
    psq_st f1, 0x260(r31), 0, 0
    lfs f0, 0x170(r1)
    stfs f0, 0x26c(r31)
    psq_l f1, 0x6c(r4), 0, 0
    lfs f2, 0x17c(r1)
    stfs f2, 0x278(r31)
    psq_st f1, 0x270(r31), 0, 0
    lfs f0, 0x180(r1)
    stfs f0, 0x27c(r31)
    psq_l f1, 0x7c(r4), 0, 0
    lfs f2, 0x18c(r1)
    stfs f2, 0x288(r31)
    psq_st f1, 0x280(r31), 0, 0
    psq_l f1, 0x88(r4), 0, 0
    lfs f2, 0x198(r1)
    stfs f2, 0x294(r31)
    psq_st f1, 0x28c(r31), 0, 0
lbl_fn_80226B48_00002170:
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    addi r5, r5, 0x10
    stfs f0, 0xc(r6)
    addi r6, r6, 0x10
    cmplw r6, r0
    blt lbl_fn_80226B48_00002170
    lwz r3, lbl_8087EEE0
    addi r4, r1, 0x90
    bl fn_80071D68
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_8004B338
    addi r11, r1, 0x240
    bl _restgpr_27
    lwz r0, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}
