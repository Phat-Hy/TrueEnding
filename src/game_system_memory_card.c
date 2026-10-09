#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_80097D7C(void);
extern void fn_800D246C(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800E854C(void);
extern void fn_800EE4D8(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_800FBA9C(void);
extern void fn_8013322C(void);
extern void fn_8013655C(void);
extern void fn_80145334(void);
extern void fn_8014C540(void);
extern void fn_80151448(void);
extern void fn_80158CA4(void);
extern void fn_8015E4B0(void);
extern void fn_8015E7A0(void);
extern void fn_8015ECC4(void);
extern void fn_8016E970(void);
extern void fn_8017BC58(void);
extern void fn_80219E6C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8035AB78(void);
extern void fn_8035B78C(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_8059C2AC(void);
extern void fn_805A3C58(void);
extern void fn_805A3D6C(void);
extern void fn_805A4984(void);
extern void fn_805A49E8(void);
extern void fn_805A4A20(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_8074B088[];
extern u8 lbl_8074B090[];
extern u8 lbl_8074B0A4[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_807898B0[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9E8;
extern u32 lbl_808854D8;
extern u32 lbl_808854E0;
extern u32 lbl_8088550C;
extern u32 lbl_80885528;
extern u32 lbl_8088552C;
extern u32 lbl_80885530;
extern u32 lbl_80885534;
extern u32 lbl_80885538;
extern u32 lbl_8088553C;
extern u32 lbl_80885540;
extern u32 lbl_80885544;
extern u32 lbl_80885548;
extern u32 lbl_8088554C;
extern u32 lbl_80885550;
extern u32 lbl_80885554;
extern u32 lbl_80885558;
extern u32 lbl_8088555C;
extern u32 lbl_80885560;
extern u32 lbl_80885564;
extern u32 lbl_80885568;
extern u32 lbl_8088556C;
extern u32 lbl_80885574;
extern u32 lbl_80885578;

/* Function declarations */
void fn_80355760(void);
void fn_8035586C(void);
void fn_803558C8(void);
void fn_80355938(void);
void fn_80355954(void);
void fn_8035598C(void);
void fn_803559F8(void);
void fn_80355C98(void);
void fn_80355DD8(void);
void fn_803563E4(void);
void fn_80356A98(void);
void fn_80356FFC(void);
void fn_80357004(void);

asm void fn_80355760(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80355760_000000F0
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fdivs f8, f31, f1
    lwz r0, 0x524(r31)
    lfs f0, 0x14e0(r31)
    addi r3, r1, 0x2c
    lfs f4, 0x14ec(r31)
    mulli r0, r0, 0x2c
    fsubs f13, f0, f4
    lwz r4, 0x2d0(r31)
    lfs f0, 0x14dc(r31)
    lfs f6, 0x14e8(r31)
    add r4, r4, r0
    fmuls f10, f13, f8
    fsubs f12, f0, f6
    lfs f3, 0x14d8(r31)
    lfs f5, 0x14e4(r31)
    fadds f7, f10, f4
    lfs f0, 0xc(r4)
    fsubs f11, f3, f5
    fmuls f9, f12, f8
    lfs f4, 0x8(r4)
    fadds f2, f0, f7
    fmuls f8, f11, f8
    lfs f3, 0x4(r4)
    fadds f6, f9, f6
    stfs f2, 0x530(r31)
    fadds f5, f8, f5
    lfs f0, lbl_808854D8
    fadds f4, f4, f6
    stfs f11, 0x14(r1)
    fadds f3, f3, f5
    stfs f4, 0x30(r1)
    stfs f3, 0x2c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r31), 0, 0
    stfs f0, 0x4(r4)
    stfs f0, 0x8(r4)
    stfs f12, 0x18(r1)
    stfs f13, 0x1c(r1)
    stfs f8, 0x8(r1)
    stfs f9, 0xc(r1)
    stfs f10, 0x10(r1)
    stfs f5, 0x20(r1)
    stfs f6, 0x24(r1)
    stfs f7, 0x28(r1)
    stfs f2, 0x34(r1)
    stfs f0, 0xc(r4)
lbl_fn_80355760_000000F0:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8035586C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_8035586C_00000150
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_8035586C_00000150:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803558C8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800E854C
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_803558C8_000001C4
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 28
    beq lbl_fn_803558C8_000001A4
    lwz r3, 0x14c4(r31)
    addi r0, r3, 0x1
    stw r0, 0x14c4(r31)
lbl_fn_803558C8_000001A4:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    blt lbl_fn_803558C8_000001C4
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x2
    beq lbl_fn_803558C8_000001C4
    li r0, 0x0
    stw r0, 0x58c(r31)
lbl_fn_803558C8_000001C4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80355938(void)
{
    nofralloc
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    blt lbl_fn_80355938_000001EC
    li r3, 0x0
    blr
lbl_fn_80355938_000001EC:
    b fn_8017BC58
    blr
}

asm void fn_80355954(void)
{
    nofralloc
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_80355954_00000224
    lfs f1, 0x2e4(r3)
    lfs f0, lbl_808854E0
    fcmpo cr0, f1, f0
    ble lbl_fn_80355954_00000224
    lfs f0, lbl_8088550C
    fcmpo cr0, f1, f0
    bge lbl_fn_80355954_00000224
    li r3, 0x1
    blr
lbl_fn_80355954_00000224:
    b fn_800EE4D8
    blr
}

asm void fn_8035598C(void)
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
    beq lbl_fn_8035598C_0000027C
    addic. r3, r3, 0x14b0
    beq lbl_fn_8035598C_00000260
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8035598C_00000260:
    mr r3, r30
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r31, 0x0
    ble lbl_fn_8035598C_0000027C
    mr r3, r30
    bl dtor_80084684
lbl_fn_8035598C_0000027C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803559F8(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    stw r31, 0x21c(r1)
    mr r31, r5
    stw r30, 0x218(r1)
    mr r30, r3
    stw r29, 0x214(r1)
    bl fn_805A3C58
    addi r11, r30, 0x15a0
    addi r12, r30, 0x162c
    lfs f5, lbl_8088552C
    lis r10, lbl_807898B0@ha
    li r9, 0x0
    lfs f4, lbl_80885530
    li r4, -0x1
    lfs f6, lbl_80885528
    lfs f3, lbl_80885534
    addi r10, r10, lbl_807898B0@l
    lfs f2, lbl_80885538
    li r8, 0x3
    lfs f1, lbl_8088553C
    li r7, 0x1
    lfs f0, lbl_80885540
    li r6, 0x28
    li r5, 0x14
    li r3, 0xc8
    li r0, 0x50
    cmplw r11, r12
    stw r10, 0x0(r30)
    stw r9, 0x14d4(r30)
    stw r9, 0x14dc(r30)
    stw r8, 0x14e0(r30)
    stw r7, 0x14e4(r30)
    stfs f6, 0x14e8(r30)
    stfs f5, 0x14f0(r30)
    stfs f5, 0x14f4(r30)
    stfs f5, 0x14f8(r30)
    stfs f4, 0x14fc(r30)
    stw r6, 0x1518(r30)
    stw r5, 0x151c(r30)
    stw r3, 0x1520(r30)
    stfs f3, 0x1524(r30)
    stfs f2, 0x1528(r30)
    stfs f4, 0x152c(r30)
    stfs f1, 0x1530(r30)
    stw r0, 0x1540(r30)
    stb r9, 0x1544(r30)
    stb r9, 0x1545(r30)
    stfs f4, 0x1548(r30)
    stw r9, 0x154c(r30)
    stw r9, 0x1550(r30)
    stw r9, 0x1554(r30)
    stfs f0, 0x1558(r30)
    stw r9, 0x155c(r30)
    stw r9, 0x1560(r30)
    stw r9, 0x1564(r30)
    stw r9, 0x1568(r30)
    stw r9, 0x156c(r30)
    stw r9, 0x1570(r30)
    stw r9, 0x1574(r30)
    stw r9, 0x1584(r30)
    stw r9, 0x1588(r30)
    stw r4, 0x158c(r30)
    stw r9, 0x1590(r30)
    stw r4, 0x1594(r30)
    stw r9, 0x1598(r30)
    bge lbl_fn_803559F8_000003D8
    addi r3, r12, 0x13
    li r0, 0x14
    subf r3, r11, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_803559F8_000003D8
lbl_fn_803559F8_000003C0:
    stw r4, 0x0(r11)
    stw r9, 0x4(r11)
    stw r4, 0x8(r11)
    stw r9, 0xc(r11)
    addi r11, r11, 0x14
    bdnz lbl_fn_803559F8_000003C0
lbl_fn_803559F8_000003D8:
    li r29, -0x1
    stw r29, 0x162c(r30)
    addi r3, r30, 0x1634
    stw r29, 0x1630(r30)
    bl fn_802377B8
    addi r3, r30, 0x1640
    bl fn_802377B8
    addi r3, r30, 0x164c
    bl fn_802377B8
    addi r3, r30, 0x1658
    bl fn_802377B8
    lwz r0, 0x12a4(r30)
    li r6, 0x0
    lfs f0, lbl_80885544
    mr r3, r30
    oris r0, r0, 0x40
    stw r29, 0x1664(r30)
    addi r4, r1, 0x108
    addi r5, r31, 0x2c
    stw r6, 0x1668(r30)
    stw r29, 0x166c(r30)
    stw r6, 0x1670(r30)
    stw r29, 0x1674(r30)
    stw r6, 0x1678(r30)
    stw r29, 0x167c(r30)
    stw r6, 0x1680(r30)
    stw r29, 0x1684(r30)
    stw r6, 0x1688(r30)
    stw r29, 0x168c(r30)
    stw r6, 0x1690(r30)
    stw r29, 0x1694(r30)
    stw r6, 0x1698(r30)
    stw r29, 0x169c(r30)
    stw r6, 0x16a0(r30)
    stw r29, 0x16a4(r30)
    stw r6, 0x16a8(r30)
    stw r29, 0x16ac(r30)
    stw r6, 0x16b0(r30)
    stw r6, 0x16b4(r30)
    stw r6, 0x16b8(r30)
    stw r6, 0x16bc(r30)
    stfs f0, 0x16c0(r30)
    stw r29, 0x16c4(r30)
    stw r0, 0x12a4(r30)
    bl fn_805A3D6C
    cmpwi r3, 0x0
    beq lbl_fn_803559F8_000004B0
    lis r4, lbl_8074B0A4@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_8074B0A4@l
    addi r5, r1, 0x108
    crclr 6
    bl sprintf
    b lbl_fn_803559F8_000004C8
lbl_fn_803559F8_000004B0:
    lis r4, lbl_8074B0A4@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_8074B0A4@l
    addi r4, r4, 0x1c
    crclr 6
    bl sprintf
lbl_fn_803559F8_000004C8:
    lwz r12, 0x14b4(r30)
    addi r3, r30, 0x14b4
    addi r4, r1, 0x8
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r31, lbl_8074B0A4@ha
    addi r3, r30, 0x1634
    addi r31, r31, lbl_8074B0A4@l
    addi r4, r31, 0x48
    bl fn_8023780C
    addi r3, r30, 0x1640
    addi r4, r31, 0x5e
    bl fn_8023780C
    addi r3, r30, 0x164c
    addi r4, r31, 0x74
    bl fn_8023780C
    addi r3, r30, 0x1658
    addi r4, r31, 0x89
    bl fn_8023780C
    mr r3, r30
    lwz r31, 0x21c(r1)
    lwz r30, 0x218(r1)
    lwz r29, 0x214(r1)
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_80355C98(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    beq lbl_fn_80355C98_00000564
    li r3, 0x0
    b lbl_fn_80355C98_00000660
lbl_fn_80355C98_00000564:
    lwz r3, 0x1438(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80355C98_00000588
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80355C98_00000588
    li r3, 0x0
    b lbl_fn_80355C98_00000660
lbl_fn_80355C98_00000588:
    addi r3, r30, 0x14b4
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_80355C98_000005A0
    li r3, 0x0
    b lbl_fn_80355C98_00000660
lbl_fn_80355C98_000005A0:
    addi r3, r30, 0x1640
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80355C98_000005E0
    addi r3, r30, 0x1634
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80355C98_000005E0
    addi r3, r30, 0x164c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80355C98_000005E0
    addi r3, r30, 0x1658
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_80355C98_000005E8
lbl_fn_80355C98_000005E0:
    li r3, 0x0
    b lbl_fn_80355C98_00000660
lbl_fn_80355C98_000005E8:
    lwz r0, 0x7ec(r30)
    addi r3, r30, 0x14b4
    ori r0, r0, 0x100
    oris r0, r0, 0x1
    ori r0, r0, 0x1
    oris r0, r0, 0x100
    stw r0, 0x7ec(r30)
    bl fn_8047059C
    mr r31, r3
    addi r3, r30, 0x14b4
    bl fn_80470580
    mr r4, r3
    mr r3, r30
    mr r5, r31
    bl fn_80355DD8
    lwz r3, 0x1438(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80355C98_00000648
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_80355C98_00000648:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0xfc(r12)
    mtctr r12
    bctrl
    li r3, 0x1
lbl_fn_80355C98_00000660:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80355DD8(void)
{
    nofralloc
    stwu r1, -0x670(r1)
    mflr r0
    stw r0, 0x674(r1)
    addi r11, r1, 0x670
    bl _savegpr_27
    lis r6, lbl_807772D0@ha
    li r28, 0x0
    addi r6, r6, lbl_807772D0@l
    stw r6, 0x1c(r1)
    mr r31, r3
    mr r29, r4
    mr r27, r5
    stw r28, 0x20(r1)
    addi r3, r1, 0x2c
    li r4, 0x0
    stw r28, 0x24(r1)
    li r5, 0x400
    stw r28, 0x28(r1)
    stw r28, 0x64c(r1)
    bl memset
    addi r3, r1, 0x62c
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x1c(r1)
    mr r4, r29
    mr r5, r27
    addi r3, r1, 0x1c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x1c
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x1c(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r29, lbl_8074B0A4@ha
    addi r29, r29, lbl_8074B0A4@l
lbl_fn_80355DD8_00000714:
    addi r3, r1, 0x1c
    bl fn_8005B3CC
    mr r27, r3
    addi r4, r29, 0x9e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_00000748
    addi r3, r1, 0x1c
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x155c(r31)
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_00000748:
    mr r3, r27
    addi r4, r29, 0xab
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_00000774
    addi r3, r1, 0x1c
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1560(r31)
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_00000774:
    mr r3, r27
    addi r4, r29, 0xb7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_000007A0
    addi r3, r1, 0x1c
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1564(r31)
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_000007A0:
    mr r3, r27
    addi r4, r29, 0xc2
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_000007CC
    addi r3, r1, 0x1c
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1568(r31)
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_000007CC:
    mr r3, r27
    addi r4, r29, 0xd0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_000007F8
    addi r3, r1, 0x1c
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x156c(r31)
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_000007F8:
    mr r3, r27
    addi r4, r29, 0xe6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_00000824
    addi r3, r1, 0x1c
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1570(r31)
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_00000824:
    mr r3, r27
    addi r4, r29, 0xfd
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_00000850
    addi r3, r1, 0x1c
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1574(r31)
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_00000850:
    mr r3, r27
    addi r4, r29, 0x114
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_0000087C
    addi r3, r1, 0x1c
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1584(r31)
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_0000087C:
    mr r3, r27
    addi r4, r29, 0x127
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_000008D0
    addi r3, r1, 0x1c
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1578(r31)
    addi r3, r1, 0x1c
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x157c(r31)
    addi r3, r1, 0x1c
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1580(r31)
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_000008D0:
    mr r3, r27
    addi r4, r29, 0x133
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_000008F8
    addi r3, r1, 0x1c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1518(r31)
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_000008F8:
    mr r3, r27
    addi r4, r29, 0x13d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_00000920
    addi r3, r1, 0x1c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1540(r31)
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_00000920:
    mr r3, r27
    addi r4, r29, 0x14e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_00000948
    addi r3, r1, 0x1c
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x14fc(r31)
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_00000948:
    mr r3, r27
    addi r4, r29, 0x15d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_00000970
    addi r3, r1, 0x1c
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1524(r31)
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_00000970:
    mr r3, r27
    addi r4, r29, 0x170
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_00000998
    addi r3, r1, 0x1c
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1528(r31)
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_00000998:
    mr r3, r27
    addi r4, r29, 0x17b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_000009C0
    addi r3, r1, 0x1c
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x152c(r31)
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_000009C0:
    mr r3, r27
    addi r4, r29, 0x188
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_000009E8
    addi r3, r1, 0x1c
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1530(r31)
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_000009E8:
    mr r3, r27
    addi r4, r29, 0x195
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_00000A10
    addi r3, r1, 0x1c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x151c(r31)
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_00000A10:
    mr r3, r27
    addi r4, r29, 0x1a7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_00000A38
    addi r3, r1, 0x1c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1520(r31)
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_00000A38:
    mr r3, r27
    addi r4, r29, 0x1b8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_00000AD0
    addi r3, r1, 0x1c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xc(r1)
    addi r3, r1, 0x1c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14(r1)
    addi r3, r1, 0x1c
    stw r28, 0x8(r1)
    stw r28, 0x10(r1)
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, 0x1588(r31)
    stfs f1, 0x18(r1)
    mulli r0, r0, 0x14
    add r0, r31, r0
    addic. r3, r0, 0x158c
    beq lbl_fn_80355DD8_00000AC0
    mr r0, r28
    stw r0, 0x0(r3)
    lwz r0, 0xc(r1)
    frsp f0, f1
    stw r0, 0x4(r3)
    mr r0, r28
    stw r0, 0x8(r3)
    lwz r0, 0x14(r1)
    stw r0, 0xc(r3)
    stfs f0, 0x10(r3)
lbl_fn_80355DD8_00000AC0:
    lwz r3, 0x1588(r31)
    addi r0, r3, 0x1
    stw r0, 0x1588(r31)
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_00000AD0:
    mr r3, r27
    addi r4, r29, 0x1be
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_00000AF8
    mr r3, r31
    addi r4, r31, 0x1664
    addi r5, r1, 0x1c
    bl fn_805A4984
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_00000AF8:
    mr r3, r27
    addi r4, r29, 0x1d0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_00000B20
    mr r3, r31
    addi r4, r31, 0x166c
    addi r5, r1, 0x1c
    bl fn_805A4984
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_00000B20:
    mr r3, r27
    addi r4, r29, 0x1e7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_00000B48
    mr r3, r31
    addi r4, r31, 0x1674
    addi r5, r1, 0x1c
    bl fn_805A4984
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_00000B48:
    mr r3, r27
    addi r4, r29, 0x1fe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_00000B70
    mr r3, r31
    addi r4, r31, 0x167c
    addi r5, r1, 0x1c
    bl fn_805A4984
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_00000B70:
    mr r3, r27
    addi r4, r29, 0x217
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_00000B98
    mr r3, r31
    addi r4, r31, 0x1684
    addi r5, r1, 0x1c
    bl fn_805A4984
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_00000B98:
    mr r3, r27
    addi r4, r29, 0x22a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_00000BC0
    mr r3, r31
    addi r4, r31, 0x168c
    addi r5, r1, 0x1c
    bl fn_805A4984
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_00000BC0:
    mr r3, r27
    addi r4, r29, 0x23d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_00000BE8
    mr r3, r31
    addi r4, r31, 0x1694
    addi r5, r1, 0x1c
    bl fn_805A4984
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_00000BE8:
    mr r3, r27
    addi r4, r29, 0x252
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_00000C10
    mr r3, r31
    addi r4, r31, 0x169c
    addi r5, r1, 0x1c
    bl fn_805A4984
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_00000C10:
    mr r3, r27
    addi r4, r29, 0x267
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_00000C38
    mr r3, r31
    addi r4, r31, 0x16a4
    addi r5, r1, 0x1c
    bl fn_805A4984
    b lbl_fn_80355DD8_00000C5C
lbl_fn_80355DD8_00000C38:
    mr r3, r27
    addi r4, r29, 0x27d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_00000C5C
    mr r3, r31
    addi r4, r31, 0x16ac
    addi r5, r1, 0x1c
    bl fn_805A4984
lbl_fn_80355DD8_00000C5C:
    addi r3, r1, 0x1c
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80355DD8_00000714
    addi r11, r1, 0x670
    bl _restgpr_27
    lwz r0, 0x674(r1)
    mtlr r0
    addi r1, r1, 0x670
    blr
}

asm void fn_803563E4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    stw r29, 0x64(r1)
    lwz r0, 0xd18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803563E4_00000CBC
    lwz r0, 0x54c(r3)
    ori r0, r0, 0x2000
    stw r0, 0x54c(r3)
    b lbl_fn_803563E4_00000CC8
lbl_fn_803563E4_00000CBC:
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 19, 17
    stw r0, 0x54c(r3)
lbl_fn_803563E4_00000CC8:
    lwz r0, 0xd18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803563E4_00000DB8
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_803563E4_00000CE8
    lwz r3, 0x48(r3)
    b lbl_fn_803563E4_00000CEC
lbl_fn_803563E4_00000CE8:
    li r3, 0x0
lbl_fn_803563E4_00000CEC:
    cmpwi r3, 0x0
    beq lbl_fn_803563E4_00000DB8
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x5
    bne lbl_fn_803563E4_00000DB8
    mr r3, r31
    addi r4, r31, 0x1664
    li r5, 0x0
    bl fn_805A4A20
    mr r3, r31
    addi r4, r31, 0x166c
    li r5, 0x0
    bl fn_805A4A20
    mr r3, r31
    addi r4, r31, 0x1674
    li r5, 0x0
    bl fn_805A4A20
    mr r3, r31
    addi r4, r31, 0x167c
    li r5, 0x0
    bl fn_805A4A20
    mr r3, r31
    addi r4, r31, 0x1684
    li r5, 0x0
    bl fn_805A4A20
    mr r3, r31
    addi r4, r31, 0x168c
    li r5, 0x0
    bl fn_805A4A20
    mr r3, r31
    addi r4, r31, 0x1694
    li r5, 0x0
    bl fn_805A4A20
    mr r3, r31
    addi r4, r31, 0x169c
    li r5, 0x0
    bl fn_805A4A20
    mr r3, r31
    addi r4, r31, 0x16a4
    li r5, 0x0
    bl fn_805A4A20
    mr r3, r31
    addi r4, r31, 0x16ac
    li r5, 0x0
    bl fn_805A4A20
    li r4, 0x0
    li r3, 0x3
    li r0, -0x1
    stw r4, 0x14d4(r31)
    stw r3, 0x14e0(r31)
    stw r0, 0x1630(r31)
lbl_fn_803563E4_00000DB8:
    lwz r6, 0x38(r31)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803563E4_00000DE4
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_803563E4_00000DE4
    li r5, 0x1
lbl_fn_803563E4_00000DE4:
    cmpwi r5, 0x0
    beq lbl_fn_803563E4_00000E00
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_803563E4_00000E00
    li r3, 0x1
lbl_fn_803563E4_00000E00:
    cmpwi r3, 0x0
    beq lbl_fn_803563E4_00000E34
    lwz r0, 0x55c(r31)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_803563E4_00000E28
    lwz r0, 0x560(r31)
    cmpwi r0, 0x1c
    bne lbl_fn_803563E4_00000E28
    li r3, 0x1
lbl_fn_803563E4_00000E28:
    cmpwi r3, 0x0
    bne lbl_fn_803563E4_00000E34
    li r4, 0x1
lbl_fn_803563E4_00000E34:
    cmpwi r4, 0x0
    beq lbl_fn_803563E4_00000E6C
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_803563E4_00000E6C
    lwz r0, 0xd18(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803563E4_00000E6C
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_803563E4_00000E6C:
    lwz r0, 0x162c(r31)
    cmpwi r0, 0x0
    blt lbl_fn_803563E4_00001018
    mulli r0, r0, 0x14
    mr r3, r31
    add r4, r31, r0
    addi r30, r4, 0x158c
    mr r4, r30
    bl fn_805A49E8
    cmpwi r3, 0x1
    beq lbl_fn_803563E4_00001018
    mr r3, r31
    addi r4, r30, 0x8
    bl fn_805A49E8
    cmpwi r3, 0x1
    bne lbl_fn_803563E4_00000EF8
    lwz r3, 0x940(r31)
    lis r0, 0x4330
    lis r4, lbl_8074B090@ha
    lwz r6, 0x162c(r31)
    xoris r3, r3, 0x8000
    stw r3, 0x5c(r1)
    lwz r5, 0x14d4(r31)
    stw r0, 0x58(r1)
    lfd f2, lbl_8074B090@l(r4)
    addi r3, r5, 0x1
    lfd f0, 0x58(r1)
    lfs f1, lbl_80885548
    fsubs f2, f0, f2
    lfs f0, 0x7d8(r31)
    stw r6, 0x1630(r31)
    fnmsubs f0, f1, f2, f0
    stw r3, 0x14d4(r31)
    stfs f0, 0x7d8(r31)
    b lbl_fn_803563E4_00000FE8
lbl_fn_803563E4_00000EF8:
    lwz r4, 0x940(r31)
    lis r3, 0x4330
    lis r5, lbl_8074B090@ha
    lwz r0, 0x1584(r31)
    xoris r4, r4, 0x8000
    stw r4, 0x5c(r1)
    lfd f3, lbl_8074B090@l(r5)
    cmpwi r0, 0x0
    stw r3, 0x58(r1)
    lfs f1, lbl_8088554C
    lfd f2, 0x58(r1)
    lfs f0, 0x7d8(r31)
    fsubs f2, f2, f3
    fmadds f0, f1, f2, f0
    stfs f0, 0x7d8(r31)
    beq lbl_fn_803563E4_00000FE8
    lwz r5, 0xd1c(r31)
    addi r3, r1, 0x28
    lfs f1, lbl_8088552C
    li r4, 0x79
    lfs f0, lbl_80885550
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f0, 0x18(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x10
    addi r3, r1, 0x28
    mr r5, r4
    bl fn_805F93C0
    lwz r4, 0xd1c(r31)
    lwz r29, lbl_8087F048
    lfs f1, 0x530(r4)
    lfs f0, 0x18(r1)
    mr r3, r29
    lfs f3, 0x52c(r4)
    fadds f4, f1, f0
    lfs f2, 0x14(r1)
    lfs f1, 0x528(r4)
    lfs f0, 0x10(r1)
    fadds f2, f3, f2
    stfs f4, 0x24(r1)
    fadds f0, f1, f0
    stfs f2, 0x20(r1)
    stfs f0, 0x1c(r1)
    bl fn_800F8548
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r6, r3
    lfs f1, lbl_8088552C
    stw r0, 0xc(r1)
    mr r3, r29
    lfs f2, lbl_80885550
    mr r4, r31
    lwz r5, 0x1584(r31)
    addi r7, r1, 0x1c
    addi r8, r31, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_803563E4_00000FE8:
    li r0, -0x1
    stw r0, 0x162c(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x0(r31)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_8088552C
    li r0, 0x3
    stw r0, 0x14e0(r31)
    stfs f0, 0x14e8(r31)
lbl_fn_803563E4_00001018:
    lwz r3, 0x55c(r31)
    lwz r0, 0x14dc(r31)
    cmpw r0, r3
    beq lbl_fn_803563E4_00001074
    cmpwi r3, 0x6
    stw r3, 0x14dc(r31)
    bne lbl_fn_803563E4_00001074
    lwz r0, 0x564(r31)
    cmpwi r0, 0x2
    bne lbl_fn_803563E4_00001074
    lwz r0, 0x14d8(r31)
    cmpwi r0, 0xe
    bne lbl_fn_803563E4_00001060
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x5
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_803563E4_00001060:
    lwz r0, 0x2dc(r31)
    cmpwi r0, 0x46
    bne lbl_fn_803563E4_00001074
    li r0, 0x1
    stb r0, 0x1545(r31)
lbl_fn_803563E4_00001074:
    lbz r0, 0x1545(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803563E4_000010E4
    lwz r0, 0xf80(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803563E4_000010E4
    mr r3, r31
    bl fn_8015ECC4
    lfs f1, 0x538(r31)
    lis r3, lbl_8074B088@ha
    lfs f0, lbl_80885554
    lfd f2, lbl_8074B088@l(r3)
    fadds f1, f1, f0
    bl fn_8068AEA8
    frsp f1, f1
    lfs f0, lbl_80885558
    fcmpo cr0, f1, f0
    ble lbl_fn_803563E4_000010C4
    lfs f0, lbl_8088555C
    fsubs f1, f1, f0
lbl_fn_803563E4_000010C4:
    lfs f0, lbl_80885560
    fcmpo cr0, f1, f0
    bge lbl_fn_803563E4_000010D8
    lfs f0, lbl_8088555C
    fadds f1, f1, f0
lbl_fn_803563E4_000010D8:
    li r0, 0x0
    stfs f1, 0x538(r31)
    stb r0, 0x1545(r31)
lbl_fn_803563E4_000010E4:
    lwz r3, lbl_8087F8A0
    lwz r0, 0x14e0(r31)
    lwz r3, 0x48(r3)
    cmpwi r0, 0x2
    stw r3, 0xd1c(r31)
    stw r3, 0x14ec(r31)
    bne lbl_fn_803563E4_00001114
    lwz r0, 0x58c(r31)
    cmpwi r0, 0xe
    beq lbl_fn_803563E4_00001114
    li r0, 0x1
    b lbl_fn_803563E4_00001118
lbl_fn_803563E4_00001114:
    li r0, 0x0
lbl_fn_803563E4_00001118:
    cmpwi r0, 0x0
    beq lbl_fn_803563E4_0000123C
    lwz r30, 0xd1c(r31)
    li r3, 0x0
    lwz r4, 0x38(r30)
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803563E4_00001148
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    beq lbl_fn_803563E4_00001148
    li r3, 0x1
lbl_fn_803563E4_00001148:
    cmpwi r3, 0x0
    beq lbl_fn_803563E4_000011B4
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_803563E4_000011B4
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x78(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_803563E4_00001188
    mr r3, r30
    bl fn_80158CA4
    cmpwi r3, 0x0
    beq lbl_fn_803563E4_000011B4
lbl_fn_803563E4_00001188:
    lwz r3, lbl_8087F048
    mr r4, r30
    lwz r6, 0x638(r30)
    mr r5, r31
    lfs f1, lbl_8088552C
    li r7, -0x1
    bl fn_800FBA9C
    cmpwi r3, 0x0
    blt lbl_fn_803563E4_000011B4
    li r0, 0x1
    b lbl_fn_803563E4_000011B8
lbl_fn_803563E4_000011B4:
    li r0, 0x0
lbl_fn_803563E4_000011B8:
    cmpwi r0, 0x0
    beq lbl_fn_803563E4_0000123C
    lwz r0, 0x58c(r31)
    cmpwi r0, 0xb
    beq lbl_fn_803563E4_000011E0
    cmpwi r0, 0xe
    beq lbl_fn_803563E4_000011F8
    cmpwi r0, 0x11
    beq lbl_fn_803563E4_00001210
    b lbl_fn_803563E4_00001224
lbl_fn_803563E4_000011E0:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_803563E4_00001224
lbl_fn_803563E4_000011F8:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x5
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_803563E4_00001224
lbl_fn_803563E4_00001210:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_803563E4_00001224:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x11
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_803563E4_0000123C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x104(r12)
    mtctr r12
    bctrl
    mr r3, r31
    bl fn_8014C540
    lwz r0, 0x38(r31)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_803563E4_0000127C
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 6
    bne lbl_fn_803563E4_0000127C
    mr r3, r31
    bl fn_80145334
lbl_fn_803563E4_0000127C:
    mr r3, r31
    bl fn_8035AB78
    cmpwi r3, 0x0
    beq lbl_fn_803563E4_000012D8
    addi r29, r31, 0x158c
    li r30, 0x0
    b lbl_fn_803563E4_000012CC
lbl_fn_803563E4_00001298:
    mr r3, r31
    mr r4, r29
    bl fn_805A49E8
    cmpwi r3, 0x0
    bne lbl_fn_803563E4_000012C4
    mr r3, r31
    mr r4, r29
    li r5, 0x1
    bl fn_805A4A20
    stw r30, 0x162c(r31)
    b lbl_fn_803563E4_000012D8
lbl_fn_803563E4_000012C4:
    addi r29, r29, 0x14
    addi r30, r30, 0x1
lbl_fn_803563E4_000012CC:
    lwz r0, 0x1588(r31)
    cmplw r30, r0
    blt lbl_fn_803563E4_00001298
lbl_fn_803563E4_000012D8:
    lwz r0, 0x14e0(r31)
    cmpwi r0, 0x2
    bne lbl_fn_803563E4_000012F8
    mr r3, r31
    addi r4, r31, 0x169c
    li r5, 0x1
    bl fn_805A4A20
    b lbl_fn_803563E4_00001308
lbl_fn_803563E4_000012F8:
    mr r3, r31
    addi r4, r31, 0x169c
    li r5, 0x0
    bl fn_805A4A20
lbl_fn_803563E4_00001308:
    lwz r3, 0x1550(r31)
    cmpwi r3, 0x0
    ble lbl_fn_803563E4_0000131C
    subi r0, r3, 0x1
    stw r0, 0x1550(r31)
lbl_fn_803563E4_0000131C:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80356A98(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    mr r31, r4
    stw r30, 0xf8(r1)
    mr r30, r3
    stw r29, 0xf4(r1)
    stw r28, 0xf0(r1)
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xe
    bne lbl_fn_80356A98_00001380
    li r3, 0x0
    b lbl_fn_80356A98_0000186C
lbl_fn_80356A98_00001380:
    lwz r6, 0x0(r4)
    addi r29, r1, 0x50
    lfs f0, 0x530(r3)
    addi r5, r1, 0x68
    lfs f3, 0x530(r6)
    mr r4, r29
    lfs f5, 0x52c(r6)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    mr r3, r29
    lfs f3, 0x528(r6)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r28, r1, 0x5c
    psq_l f1, 0x0(r29), 0, 0
    fabs f3, f2
    lfs f0, lbl_80885564
    psq_st f1, 0x0(r28), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80356A98_00001420
    lfs f3, 0x5c(r1)
    lfs f0, lbl_8088552C
    fcmpo cr0, f3, f0
    ble lbl_fn_80356A98_00001414
    lfs f0, lbl_80885568
    b lbl_fn_80356A98_00001418
lbl_fn_80356A98_00001414:
    lfs f0, lbl_8088556C
lbl_fn_80356A98_00001418:
    stfs f0, 0x48(r1)
    b lbl_fn_80356A98_00001434
lbl_fn_80356A98_00001420:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80356A98_00001434:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_8088552C
    addi r4, r1, 0x38
    lfs f30, 0x80(r1)
    mr r5, r4
    lfs f31, 0x7c(r1)
    addi r3, r1, 0xa8
    lfs f13, 0x78(r1)
    lfs f12, 0x90(r1)
    lfs f11, 0x8c(r1)
    lfs f10, 0x88(r1)
    lfs f9, 0xa0(r1)
    lfs f8, 0x9c(r1)
    lfs f7, 0x98(r1)
    lfs f6, 0xa4(r1)
    lfs f5, 0x94(r1)
    lfs f4, 0x84(r1)
    lfs f0, lbl_80885550
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xd8(r1)
    stfs f3, 0xdc(r1)
    stfs f3, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xa8(r1)
    stfs f31, 0xac(r1)
    stfs f30, 0xb0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xb8(r1)
    stfs f11, 0xbc(r1)
    stfs f12, 0xc0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xc8(r1)
    stfs f8, 0xcc(r1)
    stfs f9, 0xd0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xb4(r1)
    stfs f5, 0xc4(r1)
    stfs f6, 0xd4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80885564
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80356A98_00001550
    lfs f3, 0x3c(r1)
    lfs f0, lbl_8088552C
    fcmpo cr0, f3, f0
    ble lbl_fn_80356A98_00001540
    lfs f0, lbl_80885568
    b lbl_fn_80356A98_00001544
lbl_fn_80356A98_00001540:
    lfs f0, lbl_8088556C
lbl_fn_80356A98_00001544:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80356A98_00001564
lbl_fn_80356A98_00001550:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80356A98_00001564:
    addi r3, r1, 0x44
    lfs f4, lbl_8088552C
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x68
    psq_st f1, 0x0(r3), 0, 0
    fmr f2, f4
    lfs f3, 0x538(r30)
    lis r3, lbl_8074B088@ha
    lfs f0, 0x6c(r1)
    stfs f2, 0x64(r1)
    frsp f2, f2
    fsubs f0, f3, f0
    psq_st f1, 0x0(r28), 0, 0
    fmr f1, f0
    stfs f2, 0x70(r1)
    lfd f2, lbl_8074B088@l(r3)
    stfs f4, 0x4c(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80885558
    fcmpo cr0, f3, f0
    ble lbl_fn_80356A98_000015C4
    lfs f0, lbl_8088555C
    fsubs f3, f3, f0
lbl_fn_80356A98_000015C4:
    lfs f0, lbl_80885560
    fcmpo cr0, f3, f0
    lwz r0, 0xd1c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80356A98_000015E0
    lwz r0, 0x0(r31)
    stw r0, 0xd1c(r30)
lbl_fn_80356A98_000015E0:
    lwz r0, 0x14e0(r30)
    cmpwi r0, 0x1
    beq lbl_fn_80356A98_000015F8
    cmpwi r0, 0x2
    beq lbl_fn_80356A98_00001688
    b lbl_fn_80356A98_000017A4
lbl_fn_80356A98_000015F8:
    lwz r3, 0x8(r31)
    lwz r0, 0x90(r3)
    rlwinm r3, r0, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    bne lbl_fn_80356A98_00001658
    lfs f0, lbl_80885528
    li r0, 0x3
    stw r0, 0x14e0(r30)
    mr r4, r30
    lwz r5, 0x157c(r30)
    stfs f0, 0x14e8(r30)
    lwz r3, lbl_8087F9E8
    bl fn_8059C2AC
    mr r3, r30
    addi r4, r30, 0x167c
    bl fn_805A49E8
    cmpwi r3, 0x0
    bne lbl_fn_80356A98_000017A4
    mr r3, r30
    addi r4, r30, 0x167c
    li r5, 0x1
    bl fn_805A4A20
    b lbl_fn_80356A98_000017A4
lbl_fn_80356A98_00001658:
    li r0, 0x1
    stw r0, 0x48(r31)
    mr r3, r30
    addi r4, r30, 0x1674
    bl fn_805A49E8
    cmpwi r3, 0x0
    bne lbl_fn_80356A98_000017A4
    mr r3, r30
    addi r4, r30, 0x1674
    li r5, 0x1
    bl fn_805A4A20
    b lbl_fn_80356A98_000017A4
lbl_fn_80356A98_00001688:
    lwz r4, 0x8(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80356A98_000016AC
    lwz r3, 0x4(r4)
    subi r0, r3, 0x1f7
    cmplwi r0, 0x2
    bgt lbl_fn_80356A98_000016AC
    li r3, 0x0
    b lbl_fn_80356A98_0000186C
lbl_fn_80356A98_000016AC:
    lwz r3, 0x90(r4)
    rlwinm r0, r3, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_80356A98_000016D8
    rlwinm r0, r3, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_80356A98_000016D8
    rlwinm r3, r3, 0, 8, 8
    subis r0, r3, 0x80
    cmplwi r0, 0x0
    bne lbl_fn_80356A98_00001720
lbl_fn_80356A98_000016D8:
    lfs f0, lbl_80885528
    li r0, 0x3
    stw r0, 0x14e0(r30)
    mr r4, r30
    lwz r5, 0x1580(r30)
    stfs f0, 0x14e8(r30)
    lwz r3, lbl_8087F9E8
    bl fn_8059C2AC
    mr r3, r30
    addi r4, r30, 0x1694
    bl fn_805A49E8
    cmpwi r3, 0x0
    bne lbl_fn_80356A98_000017A4
    mr r3, r30
    addi r4, r30, 0x1694
    li r5, 0x1
    bl fn_805A4A20
    b lbl_fn_80356A98_000017A4
lbl_fn_80356A98_00001720:
    lwz r0, 0x58c(r30)
    cmpwi r0, 0xb
    beq lbl_fn_80356A98_00001740
    cmpwi r0, 0xe
    beq lbl_fn_80356A98_00001758
    cmpwi r0, 0x11
    beq lbl_fn_80356A98_00001770
    b lbl_fn_80356A98_00001784
lbl_fn_80356A98_00001740:
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_80356A98_00001784
lbl_fn_80356A98_00001758:
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x5
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_80356A98_00001784
lbl_fn_80356A98_00001770:
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_80356A98_00001784:
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x11
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    li r3, 0x0
    b lbl_fn_80356A98_0000186C
lbl_fn_80356A98_000017A4:
    lwz r3, 0x58c(r30)
    subi r0, r3, 0xb
    cmplwi r0, 0x2
    ble lbl_fn_80356A98_000017BC
    cmpwi r3, 0xf
    bne lbl_fn_80356A98_000017C4
lbl_fn_80356A98_000017BC:
    li r0, 0x1
    b lbl_fn_80356A98_000017C8
lbl_fn_80356A98_000017C4:
    li r0, 0x0
lbl_fn_80356A98_000017C8:
    cmpwi r0, 0x0
    beq lbl_fn_80356A98_00001800
    lwz r4, 0x58c(r30)
    cmpwi r4, 0xd
    bne lbl_fn_80356A98_000017E8
    lwz r0, 0x14bc(r30)
    cmpwi r0, 0x1
    beq lbl_fn_80356A98_00001800
lbl_fn_80356A98_000017E8:
    lwz r3, 0x0(r31)
    lwz r0, 0x560(r3)
    cmpwi r0, 0xa
    beq lbl_fn_80356A98_00001800
    cmpwi r4, 0xe
    bne lbl_fn_80356A98_0000180C
lbl_fn_80356A98_00001800:
    lbz r0, 0x1545(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80356A98_00001834
lbl_fn_80356A98_0000180C:
    lfs f4, 0x10(r31)
    lfs f5, lbl_8088552C
    lfs f3, 0x14(r31)
    lfs f0, 0x18(r31)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x10(r31)
    stfs f3, 0x14(r31)
    stfs f0, 0x18(r31)
lbl_fn_80356A98_00001834:
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x10
    bne lbl_fn_80356A98_00001868
    lfs f4, 0x10(r31)
    lfs f5, lbl_8088552C
    lfs f3, 0x14(r31)
    lfs f0, 0x18(r31)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x10(r31)
    stfs f3, 0x14(r31)
    stfs f0, 0x18(r31)
lbl_fn_80356A98_00001868:
    li r3, 0x1
lbl_fn_80356A98_0000186C:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    lwz r28, 0xf0(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80356FFC(void)
{
    nofralloc
    lwz r3, lbl_8087F9E8
    blr
}

asm void fn_80357004(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    mr r30, r4
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80357004_000019A0
    lwz r0, 0x14d4(r3)
    cmpwi r0, 0x2
    bge lbl_fn_80357004_0000194C
    lwz r4, 0x1630(r3)
    lwz r0, 0x1588(r3)
    addi r4, r4, 0x1
    cmpw r4, r0
    bge lbl_fn_80357004_0000193C
    mulli r0, r4, 0x14
    lwz r5, 0x940(r3)
    lis r4, 0x4330
    stw r4, 0x20(r1)
    lfs f0, lbl_80885548
    xoris r4, r5, 0x8000
    stw r4, 0x24(r1)
    add r4, r3, r0
    lis r5, lbl_8074B090@ha
    lfs f1, 0x159c(r4)
    lfd f3, lbl_8074B090@l(r5)
    lfd f2, 0x20(r1)
    fsubs f1, f1, f0
    lfs f0, 0x7d8(r3)
    fsubs f2, f2, f3
    fmuls f1, f2, f1
    fcmpo cr0, f0, f1
    bge lbl_fn_80357004_0000193C
    stfs f1, 0x7d8(r3)
lbl_fn_80357004_0000193C:
    li r4, 0x20
    addi r3, r3, 0x7d4
    bl fn_8013322C
    b lbl_fn_80357004_00001B58
lbl_fn_80357004_0000194C:
    lwz r12, 0x0(r3)
    li r4, 0x2
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    lfs f3, 0x30(r30)
    mr r3, r31
    lfs f2, lbl_80885574
    addi r4, r1, 0x14
    lfs f1, 0x2c(r30)
    li r5, -0x1
    lfs f0, 0x28(r30)
    fmuls f3, f3, f2
    fmuls f1, f1, f2
    li r6, 0x0
    fmuls f0, f0, f2
    stfs f3, 0x1c(r1)
    stfs f0, 0x14(r1)
    stfs f1, 0x18(r1)
    bl fn_8015E7A0
    b lbl_fn_80357004_00001B58
lbl_fn_80357004_000019A0:
    lfs f1, lbl_8088552C
    li r0, 0x0
    lfs f0, 0x10(r4)
    fcmpu cr0, f1, f0
    bne lbl_fn_80357004_000019D0
    lfs f0, 0x14(r4)
    fcmpu cr0, f1, f0
    bne lbl_fn_80357004_000019D0
    lfs f0, 0x18(r4)
    fcmpu cr0, f1, f0
    bne lbl_fn_80357004_000019D0
    li r0, 0x1
lbl_fn_80357004_000019D0:
    cmpwi r0, 0x0
    beq lbl_fn_80357004_000019E4
    lbz r0, 0x1544(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80357004_00001B58
lbl_fn_80357004_000019E4:
    lwz r5, 0x14e0(r3)
    li r0, 0x3c
    stw r0, 0x1550(r3)
    cmpwi r5, 0x3
    beq lbl_fn_80357004_00001A0C
    cmpwi r5, 0x0
    beq lbl_fn_80357004_00001A0C
    cmpwi r5, 0x1
    beq lbl_fn_80357004_00001A6C
    b lbl_fn_80357004_00001AE8
lbl_fn_80357004_00001A0C:
    lwz r4, 0x1554(r3)
    addi r0, r4, 0x1
    stw r0, 0x1554(r3)
    cmpwi r0, 0x3
    blt lbl_fn_80357004_00001A50
    li r0, 0x0
    stw r0, 0x1554(r3)
    mr r3, r31
    li r4, 0x10
    lwz r12, 0x0(r31)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    mr r3, r31
    li r4, 0x2
    bl fn_8016E970
    b lbl_fn_80357004_00001B08
lbl_fn_80357004_00001A50:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80357004_00001B08
lbl_fn_80357004_00001A6C:
    lwz r5, 0x1554(r3)
    addi r0, r5, 0x1
    stw r0, 0x1554(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80357004_00001AB4
    lwz r0, 0x44(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80357004_00001AB4
    lwz r3, 0x0(r4)
    li r4, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x7c(r12)
    mtctr r12
    bctrl
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x1554(r31)
    stb r0, 0x1544(r31)
lbl_fn_80357004_00001AB4:
    lbz r0, 0x1544(r31)
    mr r3, r31
    li r4, 0x6
    cmpwi r0, 0x0
    beq lbl_fn_80357004_00001ACC
    li r4, 0xf
lbl_fn_80357004_00001ACC:
    lwz r12, 0x0(r3)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stb r0, 0x1544(r31)
    b lbl_fn_80357004_00001B08
lbl_fn_80357004_00001AE8:
    li r0, 0x0
    stw r0, 0x1554(r3)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x0(r31)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80357004_00001B08:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_80357004_00001B58
    lwz r0, 0x560(r31)
    cmpwi r0, 0x17
    bne lbl_fn_80357004_00001B58
    lfs f3, 0x6c0(r31)
    mr r3, r31
    lfs f2, lbl_80885578
    addi r4, r1, 0x8
    lfs f1, 0x6bc(r31)
    li r5, -0x1
    lfs f0, 0x6b8(r31)
    fmuls f3, f3, f2
    fmuls f1, f1, f2
    fmuls f0, f0, f2
    stfs f3, 0x10(r1)
    stfs f0, 0x8(r1)
    stfs f1, 0xc(r1)
    bl fn_8015E4B0
lbl_fn_80357004_00001B58:
    lwz r3, 0x1630(r31)
    lwz r0, 0x1588(r31)
    addi r3, r3, 0x1
    cmpw r3, r0
    bge lbl_fn_80357004_00001BB8
    mulli r0, r3, 0x14
    lwz r4, 0x940(r31)
    lis r3, 0x4330
    stw r3, 0x20(r1)
    lfs f0, lbl_80885548
    xoris r3, r4, 0x8000
    stw r3, 0x24(r1)
    add r3, r31, r0
    lis r4, lbl_8074B090@ha
    lfs f1, 0x159c(r3)
    lfd f3, lbl_8074B090@l(r4)
    lfd f2, 0x20(r1)
    fsubs f1, f1, f0
    lfs f0, 0x7d8(r31)
    fsubs f2, f2, f3
    fmuls f1, f2, f1
    fcmpo cr0, f0, f1
    bge lbl_fn_80357004_00001BB8
    stfs f1, 0x7d8(r31)
lbl_fn_80357004_00001BB8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
