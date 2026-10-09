#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_800132EC(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8004203C(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AFF8(void);
extern void fn_80092954(void);
extern void fn_80097D7C(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800EC204(void);
extern void fn_800EF73C(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_80103F60(void);
extern void fn_80108378(void);
extern void fn_8011FC10(void);
extern void fn_80121F00(void);
extern void fn_8013655C(void);
extern void fn_8013A258(void);
extern void fn_8013C504(void);
extern void fn_8013CB68(void);
extern void fn_80144710(void);
extern void fn_80145334(void);
extern void fn_8014C540(void);
extern void fn_8016E484(void);
extern void fn_8016E970(void);
extern void fn_801A03E0(void);
extern void fn_80219E6C(void);
extern void fn_80237518(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_80244CCC(void);
extern void fn_80244FC0(void);
extern void fn_802D3370(void);
extern void fn_802D4238(void);
extern void fn_802D4378(void);
extern void fn_802D4628(void);
extern void fn_802D4E9C(void);
extern void fn_802D5020(void);
extern void fn_80373148(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473F50(void);
extern void fn_804A04AC(void);
extern void fn_805A3C58(void);
extern void fn_805A4984(void);
extern void fn_805A4A20(void);
extern void fn_805A4A58(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_806958E0(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_80786C10[];
extern u8 lbl_80746EE0[];
extern u8 lbl_80747080[];
extern u8 lbl_80747088[];
extern u8 lbl_807470A4[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80786C44[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C83C8[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_808844E8;
extern u32 lbl_808844EC;
extern u32 lbl_80884524;
extern u32 lbl_80884530;
extern u32 lbl_80884534;
extern u32 lbl_80884538;
extern u32 lbl_8088453C;
extern u32 lbl_80884540;
extern u32 lbl_80884544;
extern u32 lbl_80884548;
extern u32 lbl_8088454C;
extern u32 lbl_80884550;
extern u32 lbl_80884554;
extern u32 lbl_80884558;
extern u32 lbl_8088455C;
extern u32 lbl_80884560;
extern u32 lbl_80884564;
extern u32 lbl_80884568;
extern u32 lbl_8088456C;
extern u32 lbl_80884570;
extern u32 lbl_80884574;
extern u32 lbl_80884578;
extern u32 lbl_8088457C;
extern u32 lbl_80884580;
extern u32 lbl_80884584;
extern u32 lbl_80884588;
extern u32 lbl_8088458C;
extern u32 lbl_80884590;
extern u32 lbl_80884594;
extern u32 lbl_80884598;
extern u32 lbl_8088459C;
extern u32 lbl_808845A0;
extern u32 lbl_808845A4;
extern u32 lbl_808845A8;
extern u32 lbl_808845AC;
extern u32 lbl_808845B0;
extern u32 lbl_808845B4;
extern u32 lbl_808845B8;
extern u32 lbl_808845BC;
extern u32 lbl_808845C0;

/* Function declarations */
void fn_802CFE78(void);
void fn_802CFFC8(void);
void fn_802D0038(void);
void fn_802D0594(void);
void fn_802D0B6C(void);
void fn_802D0B84(void);

asm void fn_802CFE78(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stw r31, 0xdc(r1)
    stw r30, 0xd8(r1)
    mr r30, r4
    lwz r0, 0x14c8(r3)
    cmpwi r0, 0x1
    bne lbl_fn_802CFE78_00000134
    lis r4, lbl_80746EE0@ha
    lwz r3, 0x10(r5)
    addi r4, r4, lbl_80746EE0@l
    addi r4, r4, 0x141
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802CFE78_00000134
    lfs f1, lbl_80884530
    addi r3, r1, 0x78
    li r4, 0x79
    bl fn_805F8E70
    addi r5, r1, 0x78
    addi r31, r1, 0xa8
    psq_l f1, 0x0(r5), 0, 0
    addi r3, r1, 0x48
    psq_l f2, 0x8(r5), 0, 0
    li r4, 0x7a
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f1, lbl_80884534
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    bl fn_805F8E70
    mr r4, r31
    mr r5, r31
    addi r3, r1, 0x48
    bl fn_805F89F0
    lfs f7, 0x2c(r30)
    mr r3, r30
    lfs f8, 0x1c(r30)
    mr r4, r31
    lfs f0, lbl_808844E8
    addi r5, r1, 0x18
    lfs f9, 0xc(r30)
    stfs f9, 0x8(r1)
    stfs f8, 0xc(r1)
    stfs f7, 0x10(r1)
    stfs f0, 0xc(r30)
    stfs f0, 0x1c(r30)
    stfs f0, 0x2c(r30)
    bl fn_805F89F0
    addi r4, r1, 0x18
    lfs f8, 0x8(r1)
    psq_l f1, 0x0(r4), 0, 0
    li r3, 0x1
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    lfs f0, 0x10(r1)
    psq_st f2, 0x8(r30), 0, 0
    lfs f7, 0xc(r1)
    psq_st f4, 0x18(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    stfs f8, 0xc(r30)
    stfs f7, 0x1c(r30)
    stfs f0, 0x2c(r30)
    b lbl_fn_802CFE78_00000138
lbl_fn_802CFE78_00000134:
    li r3, 0x0
lbl_fn_802CFE78_00000138:
    lwz r0, 0xe4(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_802CFFC8(void)
{
    nofralloc
    lis r6, lbl_807C83C8@ha
    lfs f9, lbl_8088453C
    addi r6, r6, lbl_807C83C8@l
    lfs f5, lbl_80884548
    lfs f2, lbl_80884524
    addi r5, r6, 0x0
    lfs f8, lbl_80884540
    addi r4, r6, 0x10
    lfs f6, lbl_808844EC
    addi r3, r6, 0x20
    lfs f7, lbl_80884544
    lfs f4, lbl_8088454C
    lfs f3, lbl_80884538
    lfs f1, lbl_80884550
    lfs f0, lbl_80884554
    stfs f9, 0x0(r6)
    stfs f8, 0x4(r5)
    stfs f7, 0x8(r5)
    stfs f6, 0xc(r5)
    stfs f5, 0x10(r6)
    stfs f4, 0x4(r4)
    stfs f3, 0x8(r4)
    stfs f6, 0xc(r4)
    stfs f2, 0x20(r6)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f6, 0xc(r3)
    blr
}

asm void fn_802D0038(void)
{
    nofralloc
    stwu r1, -0x6a0(r1)
    mflr r0
    stw r0, 0x6a4(r1)
    addi r11, r1, 0x6a0
    bl _savegpr_25
    mr r30, r3
    mr r31, r5
    bl fn_805A3C58
    lis r3, lbl_80786C44@ha
    li r28, 0x0
    addi r3, r3, lbl_80786C44@l
    li r29, 0x1
    li r4, 0xa
    li r0, 0x384
    stw r3, 0x0(r30)
    addi r3, r30, 0x1514
    stw r28, 0x14d4(r30)
    stw r28, 0x14d8(r30)
    stw r28, 0x14dc(r30)
    stw r29, 0x14e0(r30)
    stw r28, 0x14e4(r30)
    stw r28, 0x14e8(r30)
    stw r28, 0x14ec(r30)
    stw r4, 0x14f0(r30)
    stw r28, 0x14f4(r30)
    stw r0, 0x14f8(r30)
    stw r28, 0x14fc(r30)
    stw r28, 0x1500(r30)
    stw r28, 0x1504(r30)
    stw r28, 0x1508(r30)
    stw r28, 0x150c(r30)
    bl fn_802377B8
    addi r3, r30, 0x1520
    bl fn_802377B8
    li r4, 0x451
    li r0, 0x450
    stw r29, 0x152c(r30)
    addi r3, r30, 0x1548
    stw r4, 0x1530(r30)
    stw r0, 0x1534(r30)
    stw r28, 0x1538(r30)
    bl fn_802377B8
    addi r3, r30, 0x1554
    bl fn_802377B8
    lfs f0, lbl_80884564
    addi r3, r30, 0x157c
    lfs f3, lbl_80884558
    lfs f2, lbl_8088455C
    lfs f1, lbl_80884560
    stw r28, 0x1560(r30)
    stfs f3, 0x1564(r30)
    stfs f2, 0x1568(r30)
    stfs f1, 0x156c(r30)
    stfs f0, 0x1570(r30)
    stfs f0, 0x1574(r30)
    stfs f0, 0x1578(r30)
    bl fn_80237518
    addi r3, r30, 0x1588
    bl fn_802377B8
    addi r3, r30, 0x1594
    bl fn_802377B8
    addi r3, r30, 0x15a0
    bl fn_802377B8
    lfs f2, lbl_80884568
    addi r3, r30, 0x15cc
    lfs f1, lbl_8088456C
    lfs f0, lbl_80884570
    stw r28, 0x15ac(r30)
    stw r28, 0x15b0(r30)
    stw r28, 0x15b4(r30)
    stw r28, 0x15b8(r30)
    stfs f2, 0x15bc(r30)
    stfs f1, 0x15c0(r30)
    stfs f0, 0x15c4(r30)
    stw r28, 0x15c8(r30)
    bl fn_802377B8
    addi r3, r30, 0x15d8
    bl fn_802377B8
    lis r4, fn_802377B8@ha
    lis r5, fn_800EF73C@ha
    stw r28, 0x15e8(r30)
    addi r3, r30, 0x15f0
    addi r4, r4, fn_802377B8@l
    addi r5, r5, fn_800EF73C@l
    stw r28, 0x15ec(r30)
    li r6, 0xc
    li r7, 0x2
    bl fn_806958E0
    addi r3, r30, 0x1608
    bl fn_802377B8
    addi r3, r30, 0x1614
    bl fn_802377B8
    addi r27, r30, 0x1650
    stw r28, 0x1620(r30)
    mr r3, r27
    stw r29, 0x1624(r30)
    stw r28, 0x1628(r30)
    stw r28, 0x162c(r30)
    stw r28, 0x1630(r30)
    stw r28, 0x1634(r30)
    stw r28, 0x1638(r30)
    stw r28, 0x163c(r30)
    stw r28, 0x1640(r30)
    stw r28, 0x1644(r30)
    stw r28, 0x1648(r30)
    stw r28, 0x164c(r30)
    bl fn_80473E74
    lwz r4, 0x12a4(r30)
    li r5, -0x1
    lfs f0, lbl_80884564
    lis r6, lbl_8078FBB0@ha
    lwz r0, 0x958(r30)
    addi r6, r6, lbl_8078FBB0@l
    oris r4, r4, 0x40
    stw r6, 0x0(r27)
    ori r0, r0, 0x10
    lis r3, lbl_807470A4@ha
    addi r27, r3, lbl_807470A4@l
    stfs f0, 0x165c(r30)
    mr r3, r27
    addi r29, r1, 0x38
    stfs f0, 0x1660(r30)
    stfs f0, 0x1664(r30)
    stfs f0, 0x1668(r30)
    stw r5, 0x166c(r30)
    stw r5, 0x1678(r30)
    stw r5, 0x1680(r30)
    stw r5, 0x1688(r30)
    stw r5, 0x1690(r30)
    stw r5, 0x1698(r30)
    stw r5, 0x16a0(r30)
    stw r4, 0x12a4(r30)
    stw r0, 0x958(r30)
    stw r28, 0x1658(r30)
    stw r28, 0x1670(r30)
    stb r28, 0x1674(r30)
    stw r28, 0x167c(r30)
    stw r28, 0x1684(r30)
    stw r28, 0x168c(r30)
    stw r28, 0x1694(r30)
    stw r28, 0x169c(r30)
    stw r28, 0x16a4(r30)
    stw r28, 0x16a8(r30)
    stw r28, 0x16ac(r30)
    stw r28, 0x38(r1)
    stw r28, 0x3c(r1)
    stw r28, 0x40(r1)
    bl strlen
    mr r26, r3
    mr r3, r29
    mr r4, r26
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r29
    stb r0, 0x18(r1)
    mr r6, r27
    add r7, r27, r26
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r29, r27, 0x18
    stw r28, 0x2c(r1)
    addi r26, r1, 0x2c
    stw r28, 0x30(r1)
    mr r3, r29
    stw r28, 0x34(r1)
    bl strlen
    mr r25, r3
    mr r3, r26
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r26
    stb r0, 0x10(r1)
    mr r6, r29
    add r7, r29, r25
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r3, r31, 0x2c
    bl strlen
    lis r4, lbl_807772D0@ha
    mr r26, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x44(r1)
    addi r3, r1, 0x54
    li r5, 0x400
    stw r28, 0x48(r1)
    li r4, 0x0
    stw r28, 0x4c(r1)
    stw r28, 0x50(r1)
    stw r28, 0x674(r1)
    bl memset
    addi r3, r1, 0x654
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x44(r1)
    mr r5, r26
    addi r3, r1, 0x44
    addi r4, r31, 0x2c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x44
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x44(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
lbl_fn_802D0038_00000510:
    addi r3, r1, 0x44
    bl fn_8005B3CC
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_802D0038_000005A8
    addi r4, r27, 0x2b
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_802D0038_000005A8
    mr r3, r26
    addi r4, r27, 0x2c
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_802D0038_00000598
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_802D0038_00000564
    lbz r0, 0x2c(r1)
    clrlwi r25, r0, 25
    b lbl_fn_802D0038_00000568
lbl_fn_802D0038_00000564:
    lwz r25, 0x30(r1)
lbl_fn_802D0038_00000568:
    lbz r0, 0xc(r1)
    addi r3, r26, 0x8
    stb r0, 0x8(r1)
    bl strlen
    add r4, r26, r3
    mr r5, r25
    addi r7, r4, 0x8
    addi r3, r1, 0x2c
    addi r6, r26, 0x8
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_802D0038_00000598:
    addi r3, r1, 0x44
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802D0038_00000510
lbl_fn_802D0038_000005A8:
    addi r3, r1, 0x20
    addi r4, r1, 0x38
    addi r5, r1, 0x2c
    bl fn_8006AFF8
    lwz r0, 0x20(r1)
    addi r3, r30, 0x1650
    srwi. r0, r0, 31
    bne lbl_fn_802D0038_000005D0
    addi r4, r1, 0x21
    b lbl_fn_802D0038_000005D4
lbl_fn_802D0038_000005D0:
    lwz r4, 0x28(r1)
lbl_fn_802D0038_000005D4:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r31, lbl_807470A4@ha
    addi r3, r30, 0x1514
    addi r31, r31, lbl_807470A4@l
    addi r4, r31, 0x35
    bl fn_8023780C
    addi r3, r30, 0x1520
    addi r4, r31, 0x4b
    bl fn_8023780C
    addi r3, r30, 0x1548
    addi r4, r31, 0x61
    bl fn_8023780C
    addi r3, r30, 0x1554
    addi r4, r31, 0x77
    bl fn_8023780C
    addi r3, r30, 0x157c
    addi r4, r31, 0x8d
    bl fn_80237654
    addi r3, r30, 0x1588
    addi r4, r31, 0xa3
    bl fn_8023780C
    addi r3, r30, 0x1594
    addi r4, r31, 0xb9
    bl fn_8023780C
    addi r3, r30, 0x15a0
    addi r4, r31, 0xcf
    bl fn_8023780C
    addi r3, r30, 0x15cc
    addi r4, r31, 0xe5
    bl fn_8023780C
    addi r3, r30, 0x15d8
    addi r4, r31, 0xfb
    bl fn_8023780C
    addi r3, r30, 0x1608
    addi r4, r31, 0x111
    bl fn_8023780C
    addi r3, r30, 0x1614
    addi r4, r31, 0x126
    bl fn_8023780C
    addi r3, r30, 0x15f0
    addi r4, r31, 0x133
    bl fn_8023780C
    addi r3, r30, 0x15fc
    addi r4, r31, 0x140
    bl fn_8023780C
    lwz r0, 0x15b0(r30)
    lwz r3, 0x1630(r30)
    subf r0, r0, r0
    lwz r5, 0x163c(r30)
    subf r4, r3, r3
    lwz r6, 0x1648(r30)
    subf r3, r5, r5
    stw r0, 0x15b0(r30)
    subf r0, r6, r6
    stw r4, 0x1630(r30)
    stw r3, 0x163c(r30)
    stw r0, 0x1648(r30)
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802D0038_000006D8
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_802D0038_000006D8:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802D0038_000006EC
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_802D0038_000006EC:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802D0038_00000700
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_802D0038_00000700:
    addi r11, r1, 0x6a0
    mr r3, r30
    bl _restgpr_25
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}

asm void fn_802D0594(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    stw r0, 0x664(r1)
    stw r31, 0x65c(r1)
    stw r30, 0x658(r1)
    stw r29, 0x654(r1)
    mr r29, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000CD4
    addi r3, r29, 0x1514
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000CD4
    addi r3, r29, 0x1520
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000CD4
    addi r3, r29, 0x1548
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000CD4
    addi r3, r29, 0x1554
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000CD4
    addi r3, r29, 0x157c
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000CD4
    addi r3, r29, 0x1588
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000CD4
    addi r3, r29, 0x1594
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000CD4
    addi r3, r29, 0x15a0
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000CD4
    addi r3, r29, 0x15cc
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000CD4
    addi r3, r29, 0x15d8
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000CD4
    addi r3, r29, 0x1608
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000CD4
    addi r3, r29, 0x1614
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000CD4
    addi r3, r29, 0x15f0
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000CD4
    addi r3, r29, 0x15fc
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000CD4
    addi r3, r29, 0x1650
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000CD4
    addi r3, r29, 0x1650
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_802D0594_00000C6C
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_802D0594_00000C6C
    bl fn_80121F00
    bl fn_8013C504
    cmpwi r3, 0x0
    beq lbl_fn_802D0594_00000C6C
    addi r3, r29, 0x1650
    bl fn_8047059C
    mr r31, r3
    addi r3, r29, 0x1650
    bl fn_80470580
    mr r4, r3
    mr r5, r31
    addi r3, r1, 0x14
    bl fn_8004203C
    lis r31, lbl_807470A4@ha
    addi r31, r31, lbl_807470A4@l
lbl_fn_802D0594_0000088C:
    addi r3, r1, 0x14
    bl fn_8005B3CC
    mr r30, r3
    addi r4, r31, 0x14d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_000008EC
lbl_fn_802D0594_000008A8:
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r30, r3
    bl fn_80121F00
    bl fn_8013C504
    mr r4, r30
    bl fn_800EC204
    cmpwi r3, 0x0
    stw r3, 0x10(r1)
    beq lbl_fn_802D0594_000008E0
    addi r3, r29, 0x162c
    addi r4, r1, 0x10
    bl fn_80244CCC
lbl_fn_802D0594_000008E0:
    cmpwi r30, 0x0
    bne lbl_fn_802D0594_000008A8
    b lbl_fn_802D0594_00000C5C
lbl_fn_802D0594_000008EC:
    mr r3, r30
    addi r4, r31, 0x15a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000914
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1628(r29)
    b lbl_fn_802D0594_00000C5C
lbl_fn_802D0594_00000914:
    mr r3, r30
    addi r4, r31, 0x16e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_0000096C
lbl_fn_802D0594_00000928:
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r30, r3
    bl fn_80121F00
    bl fn_8013C504
    mr r4, r30
    bl fn_800EC204
    cmpwi r3, 0x0
    stw r3, 0xc(r1)
    beq lbl_fn_802D0594_00000960
    addi r3, r29, 0x1638
    addi r4, r1, 0xc
    bl fn_80244CCC
lbl_fn_802D0594_00000960:
    cmpwi r30, 0x0
    bne lbl_fn_802D0594_00000928
    b lbl_fn_802D0594_00000C5C
lbl_fn_802D0594_0000096C:
    mr r3, r30
    addi r4, r31, 0x17e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_000009C0
lbl_fn_802D0594_00000980:
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r30, r3
    bl fn_801A03E0
    mr r4, r30
    bl fn_8011FC10
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    beq lbl_fn_802D0594_000009B4
    addi r3, r29, 0x1644
    addi r4, r1, 0x8
    bl fn_80244FC0
lbl_fn_802D0594_000009B4:
    cmpwi r30, 0x0
    bne lbl_fn_802D0594_00000980
    b lbl_fn_802D0594_00000C5C
lbl_fn_802D0594_000009C0:
    mr r3, r30
    addi r4, r31, 0x18e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_000009E8
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1564(r29)
    b lbl_fn_802D0594_00000C5C
lbl_fn_802D0594_000009E8:
    mr r3, r30
    addi r4, r31, 0x19a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000A10
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1568(r29)
    b lbl_fn_802D0594_00000C5C
lbl_fn_802D0594_00000A10:
    mr r3, r30
    addi r4, r31, 0x1af
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000A38
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x156c(r29)
    b lbl_fn_802D0594_00000C5C
lbl_fn_802D0594_00000A38:
    mr r3, r30
    addi r4, r31, 0x1bf
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000A60
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1530(r29)
    b lbl_fn_802D0594_00000C5C
lbl_fn_802D0594_00000A60:
    mr r3, r30
    addi r4, r31, 0x1ce
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000A88
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1534(r29)
    b lbl_fn_802D0594_00000C5C
lbl_fn_802D0594_00000A88:
    mr r3, r30
    addi r4, r31, 0x1de
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000AB0
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x14f0(r29)
    b lbl_fn_802D0594_00000C5C
lbl_fn_802D0594_00000AB0:
    mr r3, r30
    addi r4, r31, 0x1f0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000AD8
    mr r3, r29
    addi r4, r29, 0x166c
    addi r5, r1, 0x14
    bl fn_805A4984
    b lbl_fn_802D0594_00000C5C
lbl_fn_802D0594_00000AD8:
    mr r3, r30
    addi r4, r31, 0x20c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000B00
    mr r3, r29
    addi r4, r29, 0x1678
    addi r5, r1, 0x14
    bl fn_805A4984
    b lbl_fn_802D0594_00000C5C
lbl_fn_802D0594_00000B00:
    mr r3, r30
    addi r4, r31, 0x222
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000B28
    mr r3, r29
    addi r4, r29, 0x1680
    addi r5, r1, 0x14
    bl fn_805A4984
    b lbl_fn_802D0594_00000C5C
lbl_fn_802D0594_00000B28:
    mr r3, r30
    addi r4, r31, 0x238
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000B50
    mr r3, r29
    addi r4, r29, 0x1688
    addi r5, r1, 0x14
    bl fn_805A4984
    b lbl_fn_802D0594_00000C5C
lbl_fn_802D0594_00000B50:
    mr r3, r30
    addi r4, r31, 0x250
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000B78
    mr r3, r29
    addi r4, r29, 0x1690
    addi r5, r1, 0x14
    bl fn_805A4984
    b lbl_fn_802D0594_00000C5C
lbl_fn_802D0594_00000B78:
    mr r3, r30
    addi r4, r31, 0x269
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000BA0
    mr r3, r29
    addi r4, r29, 0x1698
    addi r5, r1, 0x14
    bl fn_805A4984
    b lbl_fn_802D0594_00000C5C
lbl_fn_802D0594_00000BA0:
    mr r3, r30
    addi r4, r31, 0x27c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000BC8
    mr r3, r29
    addi r4, r29, 0x16a0
    addi r5, r1, 0x14
    bl fn_805A4984
    b lbl_fn_802D0594_00000C5C
lbl_fn_802D0594_00000BC8:
    mr r3, r30
    addi r4, r31, 0x292
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000BF0
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x14d4(r29)
    b lbl_fn_802D0594_00000C5C
lbl_fn_802D0594_00000BF0:
    mr r3, r30
    addi r4, r31, 0x29c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000C18
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x15b8(r29)
    b lbl_fn_802D0594_00000C5C
lbl_fn_802D0594_00000C18:
    mr r3, r30
    addi r4, r31, 0x2a6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_00000C5C
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x15bc(r29)
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x15c0(r29)
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x15c4(r29)
lbl_fn_802D0594_00000C5C:
    addi r3, r1, 0x14
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802D0594_0000088C
lbl_fn_802D0594_00000C6C:
    lwz r0, 0x7ec(r29)
    addi r3, r29, 0x166c
    ori r0, r0, 0x1c0
    oris r0, r0, 0x1
    ori r0, r0, 0xc219
    oris r0, r0, 0x380
    ori r0, r0, 0x4
    oris r0, r0, 0x8
    stw r0, 0x7ec(r29)
    bl fn_802D0B6C
    cmpwi r3, 0x0
    beq lbl_fn_802D0594_00000CC4
    lis r4, lbl_807470A4@ha
    addi r3, r29, 0xb0
    addi r4, r4, lbl_807470A4@l
    addi r4, r4, 0x2b2
    bl fn_800132EC
    lfs f0, lbl_80884574
    li r0, 0x1
    stw r3, 0x1658(r29)
    stfs f0, 0x1668(r29)
    stb r0, 0x1674(r29)
lbl_fn_802D0594_00000CC4:
    lwz r0, 0x1628(r29)
    li r3, 0x1
    stw r0, 0x14d8(r29)
    b lbl_fn_802D0594_00000CD8
lbl_fn_802D0594_00000CD4:
    li r3, 0x0
lbl_fn_802D0594_00000CD8:
    lwz r0, 0x664(r1)
    lwz r31, 0x65c(r1)
    lwz r30, 0x658(r1)
    lwz r29, 0x654(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}

asm void fn_802D0B6C(void)
{
    nofralloc
    lwz r4, 0x0(r3)
    subfic r3, r4, -0x1
    addi r0, r4, 0x1
    or r0, r3, r0
    srwi r3, r0, 31
    blr
}

asm void fn_802D0B84(void)
{
    nofralloc
    stwu r1, -0x2b0(r1)
    mflr r0
    lis r4, 0x4330
    stw r0, 0x2b4(r1)
    stfd f31, 0x2a0(r1)
    psq_st f31, 0x2a8(r1), 0, 0
    stfd f30, 0x290(r1)
    psq_st f30, 0x298(r1), 0, 0
    stw r31, 0x28c(r1)
    mr r31, r3
    stw r30, 0x288(r1)
    stw r29, 0x284(r1)
    stw r28, 0x280(r1)
    lwz r0, 0x58c(r3)
    stw r4, 0x228(r1)
    cmpwi r0, 0x8
    stw r4, 0x230(r1)
    beq lbl_fn_802D0B84_00000D5C
    lwz r0, 0xd1c(r3)
    stw r0, 0x1620(r3)
lbl_fn_802D0B84_00000D5C:
    lwz r0, 0xd18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802D0B84_00000D74
    lwz r0, 0xd1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802D0B84_00000DC4
lbl_fn_802D0B84_00000D74:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x58c(r31)
    lwz r3, 0x14e8(r31)
    cmpwi r0, 0x7
    addi r0, r3, 0x1
    stw r0, 0x14e8(r31)
    bne lbl_fn_802D0B84_00000DA0
    mr r3, r31
    bl fn_802D4238
lbl_fn_802D0B84_00000DA0:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802D0B84_00001004
    lwz r0, 0x14e0(r31)
    cmpwi r0, 0x3
    bne lbl_fn_802D0B84_00001004
    mr r3, r31
    bl fn_802D3370
    b lbl_fn_802D0B84_00001004
lbl_fn_802D0B84_00000DC4:
    lwz r0, 0x58c(r3)
    lwz r4, 0x14e8(r3)
    cmplwi r0, 0xc
    addi r5, r4, 0x1
    stw r5, 0x14e8(r3)
    bgt lbl_fn_802D0B84_00000FA4
    lis r4, jumptable_80786C10@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80786C10@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    cmpwi r5, 0x3c
    bne lbl_fn_802D0B84_00000E20
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x98(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x15e8(r31)
    stw r0, 0x15ec(r31)
    stw r0, 0x15c8(r31)
lbl_fn_802D0B84_00000E20:
    lwz r0, 0x14e8(r31)
    cmpwi r0, 0x5a
    ble lbl_fn_802D0B84_00001004
    li r30, 0x0
    stw r30, 0x14e8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_802D0B84_00001004
    mr r3, r31
    bl fn_802D4238
    b lbl_fn_802D0B84_00001004
    mr r3, r31
    bl fn_802D4378
    b lbl_fn_802D0B84_00001004
    mr r3, r31
    bl fn_802D4628
    b lbl_fn_802D0B84_00001004
    lwz r3, 0x1530(r3)
    bl fn_80219E6C
    lfs f30, 0x2e4(r31)
    mr r29, r3
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_802D0B84_00000EC4
    li r30, 0x0
    stw r30, 0x14e8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
lbl_fn_802D0B84_00000EC4:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80884578
    fcmpo cr0, f0, f3
    cror eq, lt, eq
    bne lbl_fn_802D0B84_00000EE8
    lfs f0, lbl_8088457C
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    beq lbl_fn_802D0B84_00000F0C
lbl_fn_802D0B84_00000EE8:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80884580
    fcmpo cr0, f0, f3
    cror eq, lt, eq
    bne lbl_fn_802D0B84_00001004
    lfs f0, lbl_80884584
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802D0B84_00001004
lbl_fn_802D0B84_00000F0C:
    mr r3, r31
    bl fn_80144710
    psq_l f1, 0x528(r31), 0, 0
    addi r7, r1, 0xdc
    lfs f2, 0x530(r31)
    li r0, -0x1
    stfs f2, 0xe4(r1)
    mr r4, r31
    lfs f4, lbl_80884588
    mr r5, r29
    psq_st f1, 0x0(r7), 0, 0
    addi r8, r31, 0x534
    lwz r3, lbl_8087F048
    li r9, 0x0
    lfs f3, 0x540(r31)
    li r10, 0x1e
    lfs f0, 0xe0(r1)
    lfs f1, lbl_80884564
    fmadds f0, f4, f3, f0
    lfs f2, lbl_8088458C
    stfs f0, 0xe0(r1)
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r6, 0x590(r31)
    bl fn_800FAB80
    b lbl_fn_802D0B84_00001004
    mr r3, r31
    bl fn_802D4E9C
    b lbl_fn_802D0B84_00001004
    mr r3, r31
    bl fn_802D5020
    b lbl_fn_802D0B84_00001004
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_802D0B84_00001004
lbl_fn_802D0B84_00000FA4:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    psq_l f1, 0x534(r31), 0, 0
    addi r4, r1, 0xd0
    lfs f2, 0x53c(r31)
    stfs f2, 0xd8(r1)
    lfs f3, lbl_80884564
    psq_st f1, 0x0(r4), 0, 0
    lfs f4, lbl_8088458C
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_802D0B84_00000FE4
    mr r3, r31
    bl fn_8013A258
    b lbl_fn_802D0B84_00000FFC
lbl_fn_802D0B84_00000FE4:
    lfs f0, 0x568(r31)
    fmr f1, f3
    mr r3, r31
    li r5, 0x0
    fmuls f2, f0, f4
    bl fn_8013CB68
lbl_fn_802D0B84_00000FFC:
    mr r3, r31
    bl fn_802D3370
lbl_fn_802D0B84_00001004:
    lwz r0, 0x14d4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802D0B84_00001068
    lwz r0, 0x1620(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802D0B84_00001068
    lwz r3, lbl_8087F430
    bl fn_80373148
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_802D0B84_00001068
    lwz r5, 0x14e0(r31)
    lwz r6, 0xe0(r3)
    subfic r4, r5, 0x3
    subi r0, r5, 0x3
    or r0, r4, r0
    srwi r29, r0, 31
    cmpw r29, r6
    beq lbl_fn_802D0B84_00001068
    mr r4, r29
    li r5, 0x14
    li r6, -0x1
    li r7, 0x0
    bl fn_804A04AC
    stw r29, 0xe8(r30)
lbl_fn_802D0B84_00001068:
    lwz r0, 0x15e8(r31)
    lwz r3, 0x1500(r31)
    cmpwi r0, 0x0
    addi r0, r3, 0x1
    stw r0, 0x1500(r31)
    ble lbl_fn_802D0B84_00001608
    lwz r4, 0x15e8(r31)
    lwz r3, 0x15ec(r31)
    subi r4, r4, 0x1
    stw r4, 0x15e8(r31)
    subi r0, r3, 0x1
    cmpw r0, r4
    stw r0, 0x15ec(r31)
    bge lbl_fn_802D0B84_000010A4
    mr r4, r0
lbl_fn_802D0B84_000010A4:
    lwz r0, 0x15e8(r31)
    stw r4, 0x15ec(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_802D0B84_000010E8
    lwz r0, 0x15e4(r31)
    li r5, 0x0
    lwz r3, lbl_8087F3C0
    li r6, 0x1
    mulli r0, r0, 0xc
    add r4, r31, r0
    addi r4, r4, 0x15f0
    bl fn_80239DAC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x98(r12)
    mtctr r12
    bctrl
lbl_fn_802D0B84_000010E8:
    lwz r0, 0x15ec(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_802D0B84_000010FC
    li r0, 0x1
    stw r0, 0x1508(r31)
lbl_fn_802D0B84_000010FC:
    lis r4, lbl_807470A4@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_807470A4@l
    addi r4, r4, 0x2cb
    bl fn_80092954
    lwz r0, 0x18(r3)
    lis r4, lbl_80747088@ha
    stw r0, 0x84(r1)
    lwz r5, 0x15e4(r31)
    lbz r3, 0x84(r1)
    stw r3, 0x22c(r1)
    cmpwi r5, 0x0
    lbz r0, 0x85(r1)
    stw r0, 0x234(r1)
    lfd f3, 0x228(r1)
    lbz r3, 0x86(r1)
    lfd f7, lbl_80747088@l(r4)
    lfd f0, 0x230(r1)
    lbz r0, 0x87(r1)
    fsubs f5, f3, f7
    stw r3, 0x22c(r1)
    fsubs f4, f0, f7
    lfs f6, lbl_80884590
    stw r0, 0x234(r1)
    lfd f3, 0x228(r1)
    fdivs f5, f5, f6
    lfd f0, 0x230(r1)
    stfs f5, 0x1a8(r1)
    fsubs f3, f3, f7
    fsubs f0, f0, f7
    fdivs f4, f4, f6
    stfs f4, 0x1ac(r1)
    fdivs f3, f3, f6
    stfs f3, 0x1b0(r1)
    fdivs f0, f0, f6
    stfs f0, 0x1b4(r1)
    bne lbl_fn_802D0B84_000011B0
    lfs f0, lbl_80884594
    lfs f3, lbl_8088458C
    fadds f0, f0, f5
    fcmpo cr0, f3, f0
    bge lbl_fn_802D0B84_000011A8
    b lbl_fn_802D0B84_000011CC
lbl_fn_802D0B84_000011A8:
    fmr f3, f0
    b lbl_fn_802D0B84_000011CC
lbl_fn_802D0B84_000011B0:
    lfs f0, lbl_80884598
    lfs f3, lbl_80884560
    fadds f0, f0, f5
    fcmpo cr0, f3, f0
    bge lbl_fn_802D0B84_000011C8
    b lbl_fn_802D0B84_000011CC
lbl_fn_802D0B84_000011C8:
    fmr f3, f0
lbl_fn_802D0B84_000011CC:
    cmpwi r5, 0x0
    stfs f3, 0x1a8(r1)
    bne lbl_fn_802D0B84_000011FC
    lfs f3, lbl_8088459C
    lfs f0, 0x1ac(r1)
    lfs f7, lbl_80884558
    fadds f0, f3, f0
    fcmpo cr0, f7, f0
    bge lbl_fn_802D0B84_000011F4
    b lbl_fn_802D0B84_0000121C
lbl_fn_802D0B84_000011F4:
    fmr f7, f0
    b lbl_fn_802D0B84_0000121C
lbl_fn_802D0B84_000011FC:
    lfs f3, lbl_8088459C
    lfs f0, 0x1ac(r1)
    lfs f7, lbl_808845A0
    fadds f0, f3, f0
    fcmpo cr0, f7, f0
    bge lbl_fn_802D0B84_00001218
    b lbl_fn_802D0B84_0000121C
lbl_fn_802D0B84_00001218:
    fmr f7, f0
lbl_fn_802D0B84_0000121C:
    frsp f4, f7
    lfs f6, lbl_80884590
    lfs f5, 0x1a8(r1)
    lis r30, lbl_807470A4@ha
    lfs f3, 0x1b0(r1)
    addi r30, r30, lbl_807470A4@l
    lfs f0, 0x1b4(r1)
    fmuls f5, f6, f5
    fmuls f4, f6, f4
    stfs f7, 0x1ac(r1)
    fmuls f3, f6, f3
    addi r3, r31, 0xb0
    fmuls f0, f6, f0
    fctiwz f5, f5
    fctiwz f4, f4
    addi r4, r30, 0x2cb
    fctiwz f3, f3
    stfd f5, 0x238(r1)
    fctiwz f0, f0
    stfd f4, 0x240(r1)
    lwz r7, 0x23c(r1)
    stfd f3, 0x248(r1)
    lwz r6, 0x244(r1)
    stfd f0, 0x250(r1)
    lwz r5, 0x24c(r1)
    lwz r0, 0x254(r1)
    stb r7, 0x3c(r1)
    stb r6, 0x3d(r1)
    stb r5, 0x3e(r1)
    stb r0, 0x3f(r1)
    lwz r0, 0x3c(r1)
    stw r0, 0x80(r1)
    bl fn_80092954
    lfs f3, 0x1b4(r1)
    addi r4, r30, 0x2cb
    lfs f5, lbl_80884558
    lfs f0, 0x1b0(r1)
    fmuls f6, f3, f5
    lfs f4, 0x1ac(r1)
    fmuls f7, f0, f5
    lfs f3, 0x1a8(r1)
    fmuls f8, f4, f5
    lfs f0, lbl_80884590
    fmuls f9, f3, f5
    lbz r0, 0x80(r1)
    fmuls f3, f0, f7
    stb r0, 0x18(r3)
    fmuls f4, f0, f8
    lbz r0, 0x81(r1)
    fmuls f5, f0, f9
    stb r0, 0x19(r3)
    fmuls f0, f0, f6
    lbz r8, 0x82(r1)
    fctiwz f4, f4
    stb r8, 0x1a(r3)
    fctiwz f5, f5
    stfd f4, 0x260(r1)
    fctiwz f3, f3
    fctiwz f0, f0
    stfd f5, 0x258(r1)
    lwz r6, 0x264(r1)
    stfd f3, 0x268(r1)
    lwz r7, 0x25c(r1)
    stfd f0, 0x270(r1)
    lwz r5, 0x26c(r1)
    lwz r0, 0x274(r1)
    stb r7, 0x38(r1)
    lbz r7, 0x83(r1)
    stb r7, 0x1b(r3)
    addi r3, r31, 0xb0
    stb r6, 0x39(r1)
    stb r5, 0x3a(r1)
    stb r0, 0x3b(r1)
    lwz r0, 0x38(r1)
    stfs f9, 0x168(r1)
    stfs f8, 0x16c(r1)
    stfs f7, 0x170(r1)
    stfs f6, 0x174(r1)
    stw r0, 0x7c(r1)
    bl fn_80092954
    lbz r0, 0x7c(r1)
    addi r4, r30, 0x2d7
    stb r0, 0x1c(r3)
    lbz r0, 0x7d(r1)
    stb r0, 0x1d(r3)
    lbz r0, 0x7e(r1)
    stb r0, 0x1e(r3)
    lbz r0, 0x7f(r1)
    stb r0, 0x1f(r3)
    addi r3, r31, 0xb0
    bl fn_80092954
    lwz r0, 0x18(r3)
    lis r4, lbl_80747088@ha
    stw r0, 0x78(r1)
    lwz r5, 0x15e4(r31)
    lbz r3, 0x78(r1)
    stw r3, 0x22c(r1)
    cmpwi r5, 0x0
    lbz r0, 0x79(r1)
    stw r0, 0x234(r1)
    lfd f3, 0x228(r1)
    lfd f7, lbl_80747088@l(r4)
    lfd f0, 0x230(r1)
    lbz r3, 0x7a(r1)
    fsubs f3, f3, f7
    lbz r0, 0x7b(r1)
    fsubs f4, f0, f7
    lfs f6, lbl_80884590
    stw r0, 0x234(r1)
    fdivs f5, f3, f6
    stw r3, 0x22c(r1)
    lfd f0, 0x230(r1)
    lfd f3, 0x228(r1)
    stfs f5, 0x158(r1)
    fdivs f4, f4, f6
    stfs f5, 0x1a8(r1)
    stfs f4, 0x15c(r1)
    fsubs f3, f3, f7
    fsubs f0, f0, f7
    stfs f4, 0x1ac(r1)
    fdivs f3, f3, f6
    stfs f3, 0x160(r1)
    fdivs f0, f0, f6
    stfs f3, 0x1b0(r1)
    stfs f0, 0x164(r1)
    stfs f0, 0x1b4(r1)
    bne lbl_fn_802D0B84_00001438
    lfs f0, lbl_80884594
    lfs f3, lbl_8088458C
    fadds f0, f0, f5
    fcmpo cr0, f3, f0
    bge lbl_fn_802D0B84_00001430
    b lbl_fn_802D0B84_00001454
lbl_fn_802D0B84_00001430:
    fmr f3, f0
    b lbl_fn_802D0B84_00001454
lbl_fn_802D0B84_00001438:
    lfs f0, lbl_80884598
    lfs f3, lbl_80884560
    fadds f0, f0, f5
    fcmpo cr0, f3, f0
    bge lbl_fn_802D0B84_00001450
    b lbl_fn_802D0B84_00001454
lbl_fn_802D0B84_00001450:
    fmr f3, f0
lbl_fn_802D0B84_00001454:
    cmpwi r5, 0x0
    stfs f3, 0x1a8(r1)
    bne lbl_fn_802D0B84_00001484
    lfs f3, lbl_8088459C
    lfs f0, 0x1ac(r1)
    lfs f7, lbl_80884558
    fadds f0, f3, f0
    fcmpo cr0, f7, f0
    bge lbl_fn_802D0B84_0000147C
    b lbl_fn_802D0B84_000014A4
lbl_fn_802D0B84_0000147C:
    fmr f7, f0
    b lbl_fn_802D0B84_000014A4
lbl_fn_802D0B84_00001484:
    lfs f3, lbl_8088459C
    lfs f0, 0x1ac(r1)
    lfs f7, lbl_808845A0
    fadds f0, f3, f0
    fcmpo cr0, f7, f0
    bge lbl_fn_802D0B84_000014A0
    b lbl_fn_802D0B84_000014A4
lbl_fn_802D0B84_000014A0:
    fmr f7, f0
lbl_fn_802D0B84_000014A4:
    frsp f4, f7
    lfs f6, lbl_80884590
    lfs f5, 0x1a8(r1)
    lis r30, lbl_807470A4@ha
    lfs f3, 0x1b0(r1)
    addi r30, r30, lbl_807470A4@l
    lfs f0, 0x1b4(r1)
    fmuls f5, f6, f5
    fmuls f4, f6, f4
    stfs f7, 0x1ac(r1)
    fmuls f3, f6, f3
    addi r3, r31, 0xb0
    fmuls f0, f6, f0
    fctiwz f5, f5
    fctiwz f4, f4
    addi r4, r30, 0x2d7
    fctiwz f3, f3
    stfd f5, 0x270(r1)
    fctiwz f0, f0
    stfd f4, 0x268(r1)
    lwz r7, 0x274(r1)
    stfd f3, 0x260(r1)
    lwz r6, 0x26c(r1)
    stfd f0, 0x258(r1)
    lwz r5, 0x264(r1)
    lwz r0, 0x25c(r1)
    stb r7, 0x34(r1)
    stb r6, 0x35(r1)
    stb r5, 0x36(r1)
    stb r0, 0x37(r1)
    lwz r0, 0x34(r1)
    stw r0, 0x74(r1)
    bl fn_80092954
    lfs f3, 0x1b4(r1)
    addi r4, r30, 0x2d7
    lfs f5, lbl_80884558
    lfs f0, 0x1b0(r1)
    fmuls f6, f3, f5
    lfs f4, 0x1ac(r1)
    fmuls f7, f0, f5
    lfs f3, 0x1a8(r1)
    fmuls f8, f4, f5
    lfs f0, lbl_80884590
    fmuls f9, f3, f5
    lbz r0, 0x74(r1)
    fmuls f3, f0, f7
    stb r0, 0x18(r3)
    fmuls f4, f0, f8
    lbz r0, 0x75(r1)
    fmuls f5, f0, f9
    stb r0, 0x19(r3)
    fmuls f0, f0, f6
    lbz r8, 0x76(r1)
    fctiwz f4, f4
    stb r8, 0x1a(r3)
    fctiwz f5, f5
    stfd f4, 0x248(r1)
    fctiwz f3, f3
    fctiwz f0, f0
    stfd f5, 0x250(r1)
    lwz r6, 0x24c(r1)
    stfd f3, 0x240(r1)
    lwz r7, 0x254(r1)
    stfd f0, 0x238(r1)
    lwz r5, 0x244(r1)
    lwz r0, 0x23c(r1)
    stb r7, 0x30(r1)
    lbz r7, 0x77(r1)
    stb r7, 0x1b(r3)
    addi r3, r31, 0xb0
    stb r6, 0x31(r1)
    stb r5, 0x32(r1)
    stb r0, 0x33(r1)
    lwz r0, 0x30(r1)
    stfs f9, 0x148(r1)
    stfs f8, 0x14c(r1)
    stfs f7, 0x150(r1)
    stfs f6, 0x154(r1)
    stw r0, 0x70(r1)
    bl fn_80092954
    lbz r0, 0x70(r1)
    stb r0, 0x1c(r3)
    lbz r0, 0x71(r1)
    stb r0, 0x1d(r3)
    lbz r0, 0x72(r1)
    stb r0, 0x1e(r3)
    lbz r0, 0x73(r1)
    stb r0, 0x1f(r3)
    b lbl_fn_802D0B84_00002064
lbl_fn_802D0B84_00001608:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_802D0B84_00001B20
    lis r4, lbl_807470A4@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_807470A4@l
    addi r4, r4, 0x2cb
    bl fn_80092954
    lwz r0, 0x18(r3)
    lis r4, lbl_80747088@ha
    stw r0, 0x6c(r1)
    lwz r5, 0x15b8(r31)
    lbz r3, 0x6c(r1)
    stw r3, 0x22c(r1)
    cmpwi r5, 0x0
    lbz r0, 0x6d(r1)
    stw r0, 0x234(r1)
    lfd f3, 0x228(r1)
    lbz r3, 0x6e(r1)
    lfd f7, lbl_80747088@l(r4)
    lfd f0, 0x230(r1)
    lbz r0, 0x6f(r1)
    fsubs f5, f3, f7
    stw r3, 0x22c(r1)
    fsubs f4, f0, f7
    lfs f6, lbl_80884590
    stw r0, 0x234(r1)
    lfd f3, 0x228(r1)
    fdivs f5, f5, f6
    lfd f0, 0x230(r1)
    stfs f5, 0x198(r1)
    fsubs f3, f3, f7
    fsubs f0, f0, f7
    fdivs f4, f4, f6
    stfs f4, 0x19c(r1)
    fdivs f3, f3, f6
    stfs f3, 0x1a0(r1)
    fdivs f0, f0, f6
    stfs f0, 0x1a4(r1)
    bne lbl_fn_802D0B84_000016C8
    lfs f0, lbl_80884594
    lfs f3, lbl_8088458C
    fadds f0, f0, f5
    fcmpo cr0, f3, f0
    bge lbl_fn_802D0B84_000016C0
    b lbl_fn_802D0B84_000016E4
lbl_fn_802D0B84_000016C0:
    fmr f3, f0
    b lbl_fn_802D0B84_000016E4
lbl_fn_802D0B84_000016C8:
    lfs f0, lbl_80884598
    lfs f3, lbl_80884560
    fadds f0, f0, f5
    fcmpo cr0, f3, f0
    bge lbl_fn_802D0B84_000016E0
    b lbl_fn_802D0B84_000016E4
lbl_fn_802D0B84_000016E0:
    fmr f3, f0
lbl_fn_802D0B84_000016E4:
    cmpwi r5, 0x0
    stfs f3, 0x198(r1)
    bne lbl_fn_802D0B84_00001714
    lfs f3, lbl_8088459C
    lfs f0, 0x19c(r1)
    lfs f7, lbl_80884558
    fadds f0, f3, f0
    fcmpo cr0, f7, f0
    bge lbl_fn_802D0B84_0000170C
    b lbl_fn_802D0B84_00001734
lbl_fn_802D0B84_0000170C:
    fmr f7, f0
    b lbl_fn_802D0B84_00001734
lbl_fn_802D0B84_00001714:
    lfs f3, lbl_8088459C
    lfs f0, 0x19c(r1)
    lfs f7, lbl_808845A0
    fadds f0, f3, f0
    fcmpo cr0, f7, f0
    bge lbl_fn_802D0B84_00001730
    b lbl_fn_802D0B84_00001734
lbl_fn_802D0B84_00001730:
    fmr f7, f0
lbl_fn_802D0B84_00001734:
    frsp f4, f7
    lfs f6, lbl_80884590
    lfs f5, 0x198(r1)
    lis r30, lbl_807470A4@ha
    lfs f3, 0x1a0(r1)
    addi r30, r30, lbl_807470A4@l
    lfs f0, 0x1a4(r1)
    fmuls f5, f6, f5
    fmuls f4, f6, f4
    stfs f7, 0x19c(r1)
    fmuls f3, f6, f3
    addi r3, r31, 0xb0
    fmuls f0, f6, f0
    fctiwz f5, f5
    fctiwz f4, f4
    addi r4, r30, 0x2cb
    fctiwz f3, f3
    stfd f5, 0x270(r1)
    fctiwz f0, f0
    stfd f4, 0x268(r1)
    lwz r7, 0x274(r1)
    stfd f3, 0x260(r1)
    lwz r6, 0x26c(r1)
    stfd f0, 0x258(r1)
    lwz r5, 0x264(r1)
    lwz r0, 0x25c(r1)
    stb r7, 0x2c(r1)
    stb r6, 0x2d(r1)
    stb r5, 0x2e(r1)
    stb r0, 0x2f(r1)
    lwz r0, 0x2c(r1)
    stw r0, 0x68(r1)
    bl fn_80092954
    lfs f3, 0x1a4(r1)
    addi r4, r30, 0x2cb
    lfs f5, lbl_80884558
    lfs f0, 0x1a0(r1)
    fmuls f6, f3, f5
    lfs f4, 0x19c(r1)
    fmuls f7, f0, f5
    lfs f3, 0x198(r1)
    fmuls f8, f4, f5
    lfs f0, lbl_80884590
    fmuls f9, f3, f5
    lbz r0, 0x68(r1)
    fmuls f3, f0, f7
    stb r0, 0x18(r3)
    fmuls f4, f0, f8
    lbz r0, 0x69(r1)
    fmuls f5, f0, f9
    stb r0, 0x19(r3)
    fmuls f0, f0, f6
    lbz r8, 0x6a(r1)
    fctiwz f4, f4
    stb r8, 0x1a(r3)
    fctiwz f5, f5
    stfd f4, 0x248(r1)
    fctiwz f3, f3
    fctiwz f0, f0
    stfd f5, 0x250(r1)
    lwz r6, 0x24c(r1)
    stfd f3, 0x240(r1)
    lwz r7, 0x254(r1)
    stfd f0, 0x238(r1)
    lwz r5, 0x244(r1)
    lwz r0, 0x23c(r1)
    stb r7, 0x28(r1)
    lbz r7, 0x6b(r1)
    stb r7, 0x1b(r3)
    addi r3, r31, 0xb0
    stb r6, 0x29(r1)
    stb r5, 0x2a(r1)
    stb r0, 0x2b(r1)
    lwz r0, 0x28(r1)
    stfs f9, 0x138(r1)
    stfs f8, 0x13c(r1)
    stfs f7, 0x140(r1)
    stfs f6, 0x144(r1)
    stw r0, 0x64(r1)
    bl fn_80092954
    lbz r0, 0x64(r1)
    addi r4, r30, 0x2d7
    stb r0, 0x1c(r3)
    lbz r0, 0x65(r1)
    stb r0, 0x1d(r3)
    lbz r0, 0x66(r1)
    stb r0, 0x1e(r3)
    lbz r0, 0x67(r1)
    stb r0, 0x1f(r3)
    addi r3, r31, 0xb0
    bl fn_80092954
    lwz r0, 0x18(r3)
    lis r4, lbl_80747088@ha
    stw r0, 0x60(r1)
    lwz r5, 0x15b8(r31)
    lbz r3, 0x60(r1)
    stw r3, 0x22c(r1)
    cmpwi r5, 0x0
    lbz r0, 0x61(r1)
    stw r0, 0x234(r1)
    lfd f3, 0x228(r1)
    lfd f7, lbl_80747088@l(r4)
    lfd f0, 0x230(r1)
    lbz r3, 0x62(r1)
    fsubs f3, f3, f7
    lbz r0, 0x63(r1)
    fsubs f4, f0, f7
    lfs f6, lbl_80884590
    stw r0, 0x234(r1)
    fdivs f5, f3, f6
    stw r3, 0x22c(r1)
    lfd f0, 0x230(r1)
    lfd f3, 0x228(r1)
    stfs f5, 0x128(r1)
    fdivs f4, f4, f6
    stfs f5, 0x198(r1)
    stfs f4, 0x12c(r1)
    fsubs f3, f3, f7
    fsubs f0, f0, f7
    stfs f4, 0x19c(r1)
    fdivs f3, f3, f6
    stfs f3, 0x130(r1)
    fdivs f0, f0, f6
    stfs f3, 0x1a0(r1)
    stfs f0, 0x134(r1)
    stfs f0, 0x1a4(r1)
    bne lbl_fn_802D0B84_00001950
    lfs f0, lbl_80884594
    lfs f3, lbl_8088458C
    fadds f0, f0, f5
    fcmpo cr0, f3, f0
    bge lbl_fn_802D0B84_00001948
    b lbl_fn_802D0B84_0000196C
lbl_fn_802D0B84_00001948:
    fmr f3, f0
    b lbl_fn_802D0B84_0000196C
lbl_fn_802D0B84_00001950:
    lfs f0, lbl_80884598
    lfs f3, lbl_80884560
    fadds f0, f0, f5
    fcmpo cr0, f3, f0
    bge lbl_fn_802D0B84_00001968
    b lbl_fn_802D0B84_0000196C
lbl_fn_802D0B84_00001968:
    fmr f3, f0
lbl_fn_802D0B84_0000196C:
    cmpwi r5, 0x0
    stfs f3, 0x198(r1)
    bne lbl_fn_802D0B84_0000199C
    lfs f3, lbl_8088459C
    lfs f0, 0x19c(r1)
    lfs f7, lbl_80884558
    fadds f0, f3, f0
    fcmpo cr0, f7, f0
    bge lbl_fn_802D0B84_00001994
    b lbl_fn_802D0B84_000019BC
lbl_fn_802D0B84_00001994:
    fmr f7, f0
    b lbl_fn_802D0B84_000019BC
lbl_fn_802D0B84_0000199C:
    lfs f3, lbl_8088459C
    lfs f0, 0x19c(r1)
    lfs f7, lbl_808845A0
    fadds f0, f3, f0
    fcmpo cr0, f7, f0
    bge lbl_fn_802D0B84_000019B8
    b lbl_fn_802D0B84_000019BC
lbl_fn_802D0B84_000019B8:
    fmr f7, f0
lbl_fn_802D0B84_000019BC:
    frsp f4, f7
    lfs f6, lbl_80884590
    lfs f5, 0x198(r1)
    lis r30, lbl_807470A4@ha
    lfs f3, 0x1a0(r1)
    addi r30, r30, lbl_807470A4@l
    lfs f0, 0x1a4(r1)
    fmuls f5, f6, f5
    fmuls f4, f6, f4
    stfs f7, 0x19c(r1)
    fmuls f3, f6, f3
    addi r3, r31, 0xb0
    fmuls f0, f6, f0
    fctiwz f5, f5
    fctiwz f4, f4
    addi r4, r30, 0x2d7
    fctiwz f3, f3
    stfd f5, 0x270(r1)
    fctiwz f0, f0
    stfd f4, 0x268(r1)
    lwz r7, 0x274(r1)
    stfd f3, 0x260(r1)
    lwz r6, 0x26c(r1)
    stfd f0, 0x258(r1)
    lwz r5, 0x264(r1)
    lwz r0, 0x25c(r1)
    stb r7, 0x24(r1)
    stb r6, 0x25(r1)
    stb r5, 0x26(r1)
    stb r0, 0x27(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x5c(r1)
    bl fn_80092954
    lfs f3, 0x1a4(r1)
    addi r4, r30, 0x2d7
    lfs f5, lbl_80884558
    lfs f0, 0x1a0(r1)
    fmuls f6, f3, f5
    lfs f4, 0x19c(r1)
    fmuls f7, f0, f5
    lfs f3, 0x198(r1)
    fmuls f8, f4, f5
    lfs f0, lbl_80884590
    fmuls f9, f3, f5
    lbz r0, 0x5c(r1)
    fmuls f3, f0, f7
    stb r0, 0x18(r3)
    fmuls f4, f0, f8
    lbz r0, 0x5d(r1)
    fmuls f5, f0, f9
    stb r0, 0x19(r3)
    fmuls f0, f0, f6
    lbz r8, 0x5e(r1)
    fctiwz f4, f4
    stb r8, 0x1a(r3)
    fctiwz f5, f5
    stfd f4, 0x248(r1)
    fctiwz f3, f3
    fctiwz f0, f0
    stfd f5, 0x250(r1)
    lwz r6, 0x24c(r1)
    stfd f3, 0x240(r1)
    lwz r7, 0x254(r1)
    stfd f0, 0x238(r1)
    lwz r5, 0x244(r1)
    lwz r0, 0x23c(r1)
    stb r7, 0x20(r1)
    lbz r7, 0x5f(r1)
    stb r7, 0x1b(r3)
    addi r3, r31, 0xb0
    stb r6, 0x21(r1)
    stb r5, 0x22(r1)
    stb r0, 0x23(r1)
    lwz r0, 0x20(r1)
    stfs f9, 0x118(r1)
    stfs f8, 0x11c(r1)
    stfs f7, 0x120(r1)
    stfs f6, 0x124(r1)
    stw r0, 0x58(r1)
    bl fn_80092954
    lbz r0, 0x58(r1)
    stb r0, 0x1c(r3)
    lbz r0, 0x59(r1)
    stb r0, 0x1d(r3)
    lbz r0, 0x5a(r1)
    stb r0, 0x1e(r3)
    lbz r0, 0x5b(r1)
    stb r0, 0x1f(r3)
    b lbl_fn_802D0B84_00002064
lbl_fn_802D0B84_00001B20:
    lis r4, lbl_807470A4@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_807470A4@l
    addi r4, r4, 0x2cb
    bl fn_80092954
    lwz r0, 0x18(r3)
    lis r4, lbl_80747088@ha
    stw r0, 0x54(r1)
    lwz r5, 0x15e4(r31)
    lbz r3, 0x54(r1)
    stw r3, 0x22c(r1)
    cmpwi r5, 0x0
    lbz r0, 0x55(r1)
    stw r0, 0x234(r1)
    lfd f3, 0x228(r1)
    lbz r3, 0x56(r1)
    lfd f7, lbl_80747088@l(r4)
    lfd f0, 0x230(r1)
    lbz r0, 0x57(r1)
    fsubs f5, f3, f7
    stw r3, 0x22c(r1)
    fsubs f4, f0, f7
    lfs f6, lbl_80884590
    stw r0, 0x234(r1)
    lfd f3, 0x228(r1)
    fdivs f5, f5, f6
    lfd f0, 0x230(r1)
    stfs f5, 0x188(r1)
    fsubs f3, f3, f7
    fsubs f0, f0, f7
    fdivs f4, f4, f6
    stfs f4, 0x18c(r1)
    fdivs f3, f3, f6
    stfs f3, 0x190(r1)
    fdivs f0, f0, f6
    stfs f0, 0x194(r1)
    bne lbl_fn_802D0B84_00001BD4
    lfs f0, lbl_80884594
    lfs f3, lbl_80884564
    fsubs f0, f5, f0
    fcmpo cr0, f3, f0
    ble lbl_fn_802D0B84_00001BCC
    b lbl_fn_802D0B84_00001BF0
lbl_fn_802D0B84_00001BCC:
    fmr f3, f0
    b lbl_fn_802D0B84_00001BF0
lbl_fn_802D0B84_00001BD4:
    lfs f0, lbl_80884598
    lfs f3, lbl_80884564
    fsubs f0, f5, f0
    fcmpo cr0, f3, f0
    ble lbl_fn_802D0B84_00001BEC
    b lbl_fn_802D0B84_00001BF0
lbl_fn_802D0B84_00001BEC:
    fmr f3, f0
lbl_fn_802D0B84_00001BF0:
    cmpwi r5, 0x0
    stfs f3, 0x188(r1)
    bne lbl_fn_802D0B84_00001C20
    lfs f3, 0x18c(r1)
    lfs f0, lbl_8088459C
    lfs f7, lbl_80884564
    fsubs f0, f3, f0
    fcmpo cr0, f7, f0
    ble lbl_fn_802D0B84_00001C18
    b lbl_fn_802D0B84_00001C40
lbl_fn_802D0B84_00001C18:
    fmr f7, f0
    b lbl_fn_802D0B84_00001C40
lbl_fn_802D0B84_00001C20:
    lfs f3, 0x18c(r1)
    lfs f0, lbl_8088459C
    lfs f7, lbl_80884564
    fsubs f0, f3, f0
    fcmpo cr0, f7, f0
    ble lbl_fn_802D0B84_00001C3C
    b lbl_fn_802D0B84_00001C40
lbl_fn_802D0B84_00001C3C:
    fmr f7, f0
lbl_fn_802D0B84_00001C40:
    frsp f4, f7
    lfs f6, lbl_80884590
    lfs f5, 0x188(r1)
    lis r30, lbl_807470A4@ha
    lfs f3, 0x190(r1)
    addi r30, r30, lbl_807470A4@l
    lfs f0, 0x194(r1)
    fmuls f5, f6, f5
    fmuls f4, f6, f4
    stfs f7, 0x18c(r1)
    fmuls f3, f6, f3
    addi r3, r31, 0xb0
    fmuls f0, f6, f0
    fctiwz f5, f5
    fctiwz f4, f4
    addi r4, r30, 0x2cb
    fctiwz f3, f3
    stfd f5, 0x270(r1)
    fctiwz f0, f0
    stfd f4, 0x268(r1)
    lwz r7, 0x274(r1)
    stfd f3, 0x260(r1)
    lwz r6, 0x26c(r1)
    stfd f0, 0x258(r1)
    lwz r5, 0x264(r1)
    lwz r0, 0x25c(r1)
    stb r7, 0x1c(r1)
    stb r6, 0x1d(r1)
    stb r5, 0x1e(r1)
    stb r0, 0x1f(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x50(r1)
    bl fn_80092954
    lfs f3, 0x194(r1)
    addi r4, r30, 0x2cb
    lfs f5, lbl_80884558
    lfs f0, 0x190(r1)
    fmuls f6, f3, f5
    lfs f4, 0x18c(r1)
    fmuls f7, f0, f5
    lfs f3, 0x188(r1)
    fmuls f8, f4, f5
    lfs f0, lbl_80884590
    fmuls f9, f3, f5
    lbz r0, 0x50(r1)
    fmuls f3, f0, f7
    stb r0, 0x18(r3)
    fmuls f4, f0, f8
    lbz r0, 0x51(r1)
    fmuls f5, f0, f9
    stb r0, 0x19(r3)
    fmuls f0, f0, f6
    lbz r8, 0x52(r1)
    fctiwz f4, f4
    stb r8, 0x1a(r3)
    fctiwz f5, f5
    stfd f4, 0x248(r1)
    fctiwz f3, f3
    fctiwz f0, f0
    stfd f5, 0x250(r1)
    lwz r6, 0x24c(r1)
    stfd f3, 0x240(r1)
    lwz r7, 0x254(r1)
    stfd f0, 0x238(r1)
    lwz r5, 0x244(r1)
    lwz r0, 0x23c(r1)
    stb r7, 0x18(r1)
    lbz r7, 0x53(r1)
    stb r7, 0x1b(r3)
    addi r3, r31, 0xb0
    stb r6, 0x19(r1)
    stb r5, 0x1a(r1)
    stb r0, 0x1b(r1)
    lwz r0, 0x18(r1)
    stfs f9, 0x108(r1)
    stfs f8, 0x10c(r1)
    stfs f7, 0x110(r1)
    stfs f6, 0x114(r1)
    stw r0, 0x4c(r1)
    bl fn_80092954
    lbz r0, 0x4c(r1)
    addi r4, r30, 0x2d7
    stb r0, 0x1c(r3)
    lbz r0, 0x4d(r1)
    stb r0, 0x1d(r3)
    lbz r0, 0x4e(r1)
    stb r0, 0x1e(r3)
    lbz r0, 0x4f(r1)
    stb r0, 0x1f(r3)
    addi r3, r31, 0xb0
    bl fn_80092954
    lwz r0, 0x18(r3)
    lis r4, lbl_80747088@ha
    stw r0, 0x48(r1)
    lwz r5, 0x15e4(r31)
    lbz r3, 0x48(r1)
    stw r3, 0x22c(r1)
    cmpwi r5, 0x0
    lbz r0, 0x49(r1)
    stw r0, 0x234(r1)
    lfd f3, 0x228(r1)
    lfd f7, lbl_80747088@l(r4)
    lfd f0, 0x230(r1)
    lbz r3, 0x4a(r1)
    fsubs f3, f3, f7
    lbz r0, 0x4b(r1)
    fsubs f4, f0, f7
    lfs f6, lbl_80884590
    stw r0, 0x234(r1)
    fdivs f5, f3, f6
    stw r3, 0x22c(r1)
    lfd f0, 0x230(r1)
    lfd f3, 0x228(r1)
    stfs f5, 0xf8(r1)
    fdivs f4, f4, f6
    stfs f5, 0x188(r1)
    stfs f4, 0xfc(r1)
    fsubs f3, f3, f7
    fsubs f0, f0, f7
    stfs f4, 0x18c(r1)
    fdivs f3, f3, f6
    stfs f3, 0x100(r1)
    fdivs f0, f0, f6
    stfs f3, 0x190(r1)
    stfs f0, 0x104(r1)
    stfs f0, 0x194(r1)
    bne lbl_fn_802D0B84_00001E5C
    lfs f0, lbl_80884594
    lfs f3, lbl_80884564
    fsubs f0, f5, f0
    fcmpo cr0, f3, f0
    ble lbl_fn_802D0B84_00001E54
    b lbl_fn_802D0B84_00001E78
lbl_fn_802D0B84_00001E54:
    fmr f3, f0
    b lbl_fn_802D0B84_00001E78
lbl_fn_802D0B84_00001E5C:
    lfs f0, lbl_80884598
    lfs f3, lbl_80884564
    fsubs f0, f5, f0
    fcmpo cr0, f3, f0
    ble lbl_fn_802D0B84_00001E74
    b lbl_fn_802D0B84_00001E78
lbl_fn_802D0B84_00001E74:
    fmr f3, f0
lbl_fn_802D0B84_00001E78:
    cmpwi r5, 0x0
    stfs f3, 0x188(r1)
    bne lbl_fn_802D0B84_00001EA8
    lfs f3, 0x18c(r1)
    lfs f0, lbl_8088459C
    lfs f7, lbl_80884564
    fsubs f0, f3, f0
    fcmpo cr0, f7, f0
    ble lbl_fn_802D0B84_00001EA0
    b lbl_fn_802D0B84_00001EC8
lbl_fn_802D0B84_00001EA0:
    fmr f7, f0
    b lbl_fn_802D0B84_00001EC8
lbl_fn_802D0B84_00001EA8:
    lfs f3, 0x18c(r1)
    lfs f0, lbl_8088459C
    lfs f7, lbl_80884564
    fsubs f0, f3, f0
    fcmpo cr0, f7, f0
    ble lbl_fn_802D0B84_00001EC4
    b lbl_fn_802D0B84_00001EC8
lbl_fn_802D0B84_00001EC4:
    fmr f7, f0
lbl_fn_802D0B84_00001EC8:
    frsp f4, f7
    lfs f6, lbl_80884590
    lfs f5, 0x188(r1)
    lis r30, lbl_807470A4@ha
    lfs f3, 0x190(r1)
    addi r30, r30, lbl_807470A4@l
    lfs f0, 0x194(r1)
    fmuls f5, f6, f5
    fmuls f4, f6, f4
    stfs f7, 0x18c(r1)
    fmuls f3, f6, f3
    addi r3, r31, 0xb0
    fmuls f0, f6, f0
    fctiwz f5, f5
    fctiwz f4, f4
    addi r4, r30, 0x2d7
    fctiwz f3, f3
    stfd f5, 0x270(r1)
    fctiwz f0, f0
    stfd f4, 0x268(r1)
    lwz r7, 0x274(r1)
    stfd f3, 0x260(r1)
    lwz r6, 0x26c(r1)
    stfd f0, 0x258(r1)
    lwz r5, 0x264(r1)
    lwz r0, 0x25c(r1)
    stb r7, 0x14(r1)
    stb r6, 0x15(r1)
    stb r5, 0x16(r1)
    stb r0, 0x17(r1)
    lwz r0, 0x14(r1)
    stw r0, 0x44(r1)
    bl fn_80092954
    lfs f3, 0x194(r1)
    addi r4, r30, 0x2d7
    lfs f5, lbl_80884558
    lfs f0, 0x190(r1)
    fmuls f6, f3, f5
    lfs f4, 0x18c(r1)
    fmuls f7, f0, f5
    lfs f3, 0x188(r1)
    fmuls f8, f4, f5
    lfs f0, lbl_80884590
    fmuls f9, f3, f5
    lbz r0, 0x44(r1)
    fmuls f3, f0, f7
    stb r0, 0x18(r3)
    fmuls f4, f0, f8
    lbz r0, 0x45(r1)
    fmuls f5, f0, f9
    stb r0, 0x19(r3)
    fmuls f0, f0, f6
    lbz r8, 0x46(r1)
    fctiwz f4, f4
    stb r8, 0x1a(r3)
    fctiwz f5, f5
    stfd f4, 0x248(r1)
    fctiwz f3, f3
    fctiwz f0, f0
    stfd f5, 0x250(r1)
    lwz r6, 0x24c(r1)
    stfd f3, 0x240(r1)
    lwz r7, 0x254(r1)
    stfd f0, 0x238(r1)
    lwz r5, 0x244(r1)
    lwz r0, 0x23c(r1)
    stb r7, 0x10(r1)
    lbz r7, 0x47(r1)
    stb r7, 0x1b(r3)
    addi r3, r31, 0xb0
    stb r6, 0x11(r1)
    stb r5, 0x12(r1)
    stb r0, 0x13(r1)
    lwz r0, 0x10(r1)
    stfs f9, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f7, 0xf0(r1)
    stfs f6, 0xf4(r1)
    stw r0, 0x40(r1)
    bl fn_80092954
    lbz r0, 0x40(r1)
    stb r0, 0x1c(r3)
    lbz r0, 0x41(r1)
    stb r0, 0x1d(r3)
    lbz r0, 0x42(r1)
    stb r0, 0x1e(r3)
    lbz r0, 0x43(r1)
    stb r0, 0x1f(r3)
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_802D0B84_00002064
    cmpwi r0, 0x7
    beq lbl_fn_802D0B84_00002064
    cmpwi r0, 0x9
    beq lbl_fn_802D0B84_00002064
    lwz r3, 0x14f4(r31)
    lwz r0, 0x14f8(r31)
    addi r3, r3, 0x1
    stw r3, 0x14f4(r31)
    cmpw r3, r0
    blt lbl_fn_802D0B84_00002064
    li r0, 0x1
    stw r0, 0x1508(r31)
lbl_fn_802D0B84_00002064:
    lwz r0, 0x14d8(r31)
    cmpwi r0, -0x1
    bne lbl_fn_802D0B84_0000209C
    lis r3, lbl_807C7030@ha
    lfs f0, lbl_808845A4
    addi r3, r3, lbl_807C7030@l
    lfs f2, 0x8(r3)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r31), 0, 0
    lfs f3, 0x52c(r31)
    stfs f2, 0x530(r31)
    fsubs f0, f3, f0
    stfs f0, 0x52c(r31)
    b lbl_fn_802D0B84_000020B8
lbl_fn_802D0B84_0000209C:
    lwz r3, 0x162c(r31)
    slwi r0, r0, 2
    lwzx r3, r3, r0
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x530(r31)
    psq_st f1, 0x528(r31), 0, 0
lbl_fn_802D0B84_000020B8:
    lfs f4, lbl_80884588
    lwz r5, 0x1620(r31)
    lfs f3, 0x540(r31)
    lfs f0, 0x52c(r31)
    cmpwi r5, 0x0
    fnmsubs f0, f4, f3, f0
    stfs f0, 0x52c(r31)
    beq lbl_fn_802D0B84_00002330
    lfs f5, 0x530(r5)
    addi r3, r1, 0x178
    lfs f0, 0x530(r31)
    mr r4, r3
    lfs f4, 0x528(r5)
    lfs f3, 0x528(r31)
    fsubs f5, f5, f0
    lfs f0, lbl_80884564
    fsubs f3, f4, f3
    stfs f5, 0x180(r1)
    stfs f3, 0x178(r1)
    stfs f0, 0x17c(r1)
    bl fn_805F98D0
    lfs f2, 0x180(r1)
    addi r29, r1, 0x178
    lfs f0, lbl_808845A8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802D0B84_0000214C
    lfs f3, 0x178(r1)
    lfs f0, lbl_80884564
    fcmpo cr0, f3, f0
    ble lbl_fn_802D0B84_00002140
    lfs f0, lbl_808845AC
    b lbl_fn_802D0B84_00002144
lbl_fn_802D0B84_00002140:
    lfs f0, lbl_808845B0
lbl_fn_802D0B84_00002144:
    stfs f0, 0x8c(r1)
    b lbl_fn_802D0B84_0000215C
lbl_fn_802D0B84_0000214C:
    lfs f1, 0x178(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x8c(r1)
lbl_fn_802D0B84_0000215C:
    lfs f0, 0x8c(r1)
    addi r3, r1, 0x1f8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884564
    addi r4, r1, 0x94
    lfs f4, 0x200(r1)
    mr r5, r4
    lfs f5, 0x1fc(r1)
    addi r3, r1, 0x1b8
    lfs f6, 0x1f8(r1)
    lfs f7, 0x210(r1)
    lfs f8, 0x20c(r1)
    lfs f9, 0x208(r1)
    lfs f10, 0x220(r1)
    lfs f11, 0x21c(r1)
    lfs f12, 0x218(r1)
    lfs f13, 0x224(r1)
    lfs f30, 0x214(r1)
    lfs f31, 0x204(r1)
    lfs f0, lbl_8088458C
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x180(r1)
    stfs f3, 0x1e8(r1)
    stfs f3, 0x1ec(r1)
    stfs f3, 0x1f0(r1)
    stfs f0, 0x1f4(r1)
    stfs f6, 0xc4(r1)
    stfs f5, 0xc8(r1)
    stfs f4, 0xcc(r1)
    stfs f6, 0x1b8(r1)
    stfs f5, 0x1bc(r1)
    stfs f4, 0x1c0(r1)
    stfs f9, 0xb8(r1)
    stfs f8, 0xbc(r1)
    stfs f7, 0xc0(r1)
    stfs f9, 0x1c8(r1)
    stfs f8, 0x1cc(r1)
    stfs f7, 0x1d0(r1)
    stfs f12, 0xac(r1)
    stfs f11, 0xb0(r1)
    stfs f10, 0xb4(r1)
    stfs f12, 0x1d8(r1)
    stfs f11, 0x1dc(r1)
    stfs f10, 0x1e0(r1)
    stfs f31, 0xa0(r1)
    stfs f30, 0xa4(r1)
    stfs f13, 0xa8(r1)
    stfs f31, 0x1c4(r1)
    stfs f30, 0x1d4(r1)
    stfs f13, 0x1e4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x9c(r1)
    bl fn_805F9750
    lfs f2, 0x9c(r1)
    lfs f0, lbl_808845A8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802D0B84_00002278
    lfs f3, 0x98(r1)
    lfs f0, lbl_80884564
    fcmpo cr0, f3, f0
    ble lbl_fn_802D0B84_00002268
    lfs f0, lbl_808845AC
    b lbl_fn_802D0B84_0000226C
lbl_fn_802D0B84_00002268:
    lfs f0, lbl_808845B0
lbl_fn_802D0B84_0000226C:
    fneg f0, f0
    stfs f0, 0x88(r1)
    b lbl_fn_802D0B84_0000228C
lbl_fn_802D0B84_00002278:
    lfs f1, 0x98(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x88(r1)
lbl_fn_802D0B84_0000228C:
    addi r3, r1, 0x88
    lfs f2, lbl_80884564
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80747080@ha
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x180(r1)
    lfs f3, 0x17c(r1)
    lfs f0, 0x538(r31)
    stfs f2, 0x90(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80747080@l(r3)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_808845B4
    fcmpo cr0, f4, f0
    ble lbl_fn_802D0B84_000022D4
    lfs f0, lbl_808845B8
    fsubs f4, f4, f0
lbl_fn_802D0B84_000022D4:
    lfs f0, lbl_808845BC
    fcmpo cr0, f4, f0
    bge lbl_fn_802D0B84_000022E8
    lfs f0, lbl_808845B8
    fadds f4, f4, f0
lbl_fn_802D0B84_000022E8:
    fabs f0, f4
    lfs f3, lbl_808845C0
    frsp f0, f0
    fcmpo cr0, f0, f3
    ble lbl_fn_802D0B84_00002328
    lfs f0, lbl_80884564
    fcmpo cr0, f4, f0
    bge lbl_fn_802D0B84_00002318
    lfs f0, 0x538(r31)
    fsubs f0, f0, f3
    stfs f0, 0x538(r31)
    b lbl_fn_802D0B84_00002330
lbl_fn_802D0B84_00002318:
    lfs f0, 0x538(r31)
    fadds f0, f0, f3
    stfs f0, 0x538(r31)
    b lbl_fn_802D0B84_00002330
lbl_fn_802D0B84_00002328:
    lfs f0, 0x17c(r1)
    stfs f0, 0x538(r31)
lbl_fn_802D0B84_00002330:
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    lwz r3, lbl_8087F048
    mr r4, r31
    bl fn_80103F60
    lwz r4, lbl_8087F8A0
    mr r29, r3
    lfs f31, lbl_8088458C
    lwz r28, 0x48(r4)
    lfs f30, lbl_80884564
    b lbl_fn_802D0B84_000023A4
lbl_fn_802D0B84_00002364:
    mr r3, r29
    mr r4, r28
    bl fn_80108378
    mr r30, r3
    mr r3, r28
    bl fn_8016E484
    cmpwi r3, 0x0
    bne lbl_fn_802D0B84_00002394
    slwi r0, r30, 2
    add r3, r29, r0
    stfs f30, 0x128(r3)
    b lbl_fn_802D0B84_000023A0
lbl_fn_802D0B84_00002394:
    slwi r0, r30, 2
    add r3, r29, r0
    stfs f31, 0x128(r3)
lbl_fn_802D0B84_000023A0:
    lwz r28, 0x14ac(r28)
lbl_fn_802D0B84_000023A4:
    cmpwi r28, 0x0
    bne lbl_fn_802D0B84_00002364
    mr r3, r31
    addi r4, r31, 0x1658
    bl fn_805A4A58
    cmpwi r3, 0x0
    beq lbl_fn_802D0B84_000023D8
    mr r3, r31
    addi r4, r31, 0x166c
    li r5, 0x1
    bl fn_805A4A20
    li r0, 0x0
    stb r0, 0x1674(r31)
lbl_fn_802D0B84_000023D8:
    lwz r3, 0x150c(r31)
    subi r0, r3, 0x1
    stw r0, 0x150c(r31)
    psq_l f31, 0x2a8(r1), 0, 0
    lfd f31, 0x2a0(r1)
    psq_l f30, 0x298(r1), 0, 0
    lfd f30, 0x290(r1)
    lwz r31, 0x28c(r1)
    lwz r30, 0x288(r1)
    lwz r29, 0x284(r1)
    lwz r28, 0x280(r1)
    lwz r0, 0x2b4(r1)
    mtlr r0
    addi r1, r1, 0x2b0
    blr
}
