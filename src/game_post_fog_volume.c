#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_25(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_8000E18C(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8004203C(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AFF8(void);
extern void fn_800844D8(void);
extern void fn_800897D8(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800E0AA8(void);
extern void fn_800E0AB0(void);
extern void fn_800EC204(void);
extern void fn_800EF73C(void);
extern void fn_8011FC10(void);
extern void fn_80121F00(void);
extern void fn_8013655C(void);
extern void fn_8013C504(void);
extern void fn_801A03E0(void);
extern void fn_8020A81C(void);
extern void fn_80237518(void);
extern void fn_802375C4(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80244CCC(void);
extern void fn_80244FC0(void);
extern void fn_802D8B6C(void);
extern void fn_802DDBB0(void);
extern void fn_802E2468(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_8036554C(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_805A3D00(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80686EA4(void);
extern void fn_806959D8(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807473F8[];
extern u8 lbl_80747654[];
extern u8 lbl_80775A88[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80786E20[];
extern u8 lbl_80786F50[];
extern u8 lbl_8078FBB0[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F428;
extern u32 lbl_808845E8;
extern u32 lbl_808845EC;
extern u32 lbl_808845F0;
extern u32 lbl_808845F4;
extern u32 lbl_808845F8;
extern u32 lbl_808845FC;

/* Function declarations */
void fn_802D7058(void);
void fn_802D70FC(void);
void fn_802D7100(void);
void fn_802D7104(void);
void fn_802D7108(void);
void fn_802D710C(void);
void fn_802D73E4(void);
void fn_802D7480(void);
void fn_802D7A3C(void);
void fn_802D7E80(void);
void fn_802D8540(void);
void fn_802D8550(void);
void fn_802D8560(void);
void fn_802D8854(void);

asm void fn_802D7058(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    lwz r0, 0x1648(r3)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802D7058_00000054
lbl_fn_802D7058_00000020:
    lwz r4, 0x1644(r3)
    lwzx r4, r4, r5
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802D7058_0000004C
    lwz r0, 0xd18(r4)
    cmpwi r0, 0x1
    bne lbl_fn_802D7058_0000004C
    li r3, 0x0
    b lbl_fn_802D7058_00000094
lbl_fn_802D7058_0000004C:
    addi r5, r5, 0x4
    bdnz lbl_fn_802D7058_00000020
lbl_fn_802D7058_00000054:
    lwz r3, lbl_8087F428
    bl fn_8036554C
    b lbl_fn_802D7058_00000088
lbl_fn_802D7058_00000060:
    lwz r4, 0x7e0(r3)
    rlwinm r0, r4, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802D7058_00000084
    rlwinm r0, r4, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_802D7058_00000084
    li r3, 0x0
    b lbl_fn_802D7058_00000094
lbl_fn_802D7058_00000084:
    lwz r3, 0x14ac(r3)
lbl_fn_802D7058_00000088:
    cmpwi r3, 0x0
    bne lbl_fn_802D7058_00000060
    li r3, 0x1
lbl_fn_802D7058_00000094:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802D70FC(void)
{
    nofralloc
    blr
}

asm void fn_802D7100(void)
{
    nofralloc
    blr
}

asm void fn_802D7104(void)
{
    nofralloc
    blr
}

asm void fn_802D7108(void)
{
    nofralloc
    blr
}

asm void fn_802D710C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    beq lbl_fn_802D710C_0000036C
    addic. r0, r3, 0x16a8
    beq lbl_fn_802D710C_00000100
    lwz r4, 0x16a8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802D710C_00000100
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802D710C_00000100
    bl fn_800897D8
lbl_fn_802D710C_00000100:
    addic. r3, r30, 0x1650
    beq lbl_fn_802D710C_00000110
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D710C_00000110:
    addic. r4, r30, 0x1644
    beq lbl_fn_802D710C_00000140
    beq lbl_fn_802D710C_00000140
    beq lbl_fn_802D710C_00000140
    beq lbl_fn_802D710C_00000140
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802D710C_00000140
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802D710C_00000140:
    addic. r4, r30, 0x1638
    beq lbl_fn_802D710C_00000170
    beq lbl_fn_802D710C_00000170
    beq lbl_fn_802D710C_00000170
    beq lbl_fn_802D710C_00000170
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802D710C_00000170
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802D710C_00000170:
    addic. r4, r30, 0x162c
    beq lbl_fn_802D710C_000001A0
    beq lbl_fn_802D710C_000001A0
    beq lbl_fn_802D710C_000001A0
    beq lbl_fn_802D710C_000001A0
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802D710C_000001A0
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802D710C_000001A0:
    addic. r29, r30, 0x1614
    beq lbl_fn_802D710C_000001C0
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D710C_000001C0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D710C_000001C0:
    addic. r29, r30, 0x1608
    beq lbl_fn_802D710C_000001E0
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D710C_000001E0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D710C_000001E0:
    lis r4, fn_800EF73C@ha
    addi r3, r30, 0x15f0
    addi r4, r4, fn_800EF73C@l
    li r5, 0xc
    li r6, 0x2
    bl fn_806959D8
    addic. r29, r30, 0x15d8
    beq lbl_fn_802D710C_00000218
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D710C_00000218
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D710C_00000218:
    addic. r29, r30, 0x15cc
    beq lbl_fn_802D710C_00000238
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D710C_00000238
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D710C_00000238:
    addic. r4, r30, 0x15ac
    beq lbl_fn_802D710C_00000264
    beq lbl_fn_802D710C_00000264
    beq lbl_fn_802D710C_00000264
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802D710C_00000264
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802D710C_00000264:
    addic. r29, r30, 0x15a0
    beq lbl_fn_802D710C_00000284
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D710C_00000284
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D710C_00000284:
    addic. r29, r30, 0x1594
    beq lbl_fn_802D710C_000002A4
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D710C_000002A4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D710C_000002A4:
    addic. r29, r30, 0x1588
    beq lbl_fn_802D710C_000002C4
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D710C_000002C4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D710C_000002C4:
    addi r3, r30, 0x157c
    li r4, -0x1
    bl fn_802375C4
    addic. r29, r30, 0x1554
    beq lbl_fn_802D710C_000002F0
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D710C_000002F0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D710C_000002F0:
    addic. r29, r30, 0x1548
    beq lbl_fn_802D710C_00000310
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D710C_00000310
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D710C_00000310:
    addic. r29, r30, 0x1520
    beq lbl_fn_802D710C_00000330
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D710C_00000330
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D710C_00000330:
    addic. r29, r30, 0x1514
    beq lbl_fn_802D710C_00000350
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D710C_00000350
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D710C_00000350:
    mr r3, r30
    li r4, 0x0
    bl fn_805A3D00
    cmpwi r31, 0x0
    ble lbl_fn_802D710C_0000036C
    mr r3, r30
    bl dtor_80084684
lbl_fn_802D710C_0000036C:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802D73E4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807473F8@ha
    addi r31, r31, lbl_807473F8@l
    stw r30, 0x18(r1)
    mr r30, r31
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    b lbl_fn_802D73E4_000003F8
lbl_fn_802D73E4_000003C0:
    mr r3, r28
    mr r4, r31
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D73E4_000003EC
    mulli r0, r29, 0x44
    lis r3, lbl_807473F8@ha
    addi r3, r3, lbl_807473F8@l
    add r3, r3, r0
    lwz r3, 0x40(r3)
    b lbl_fn_802D73E4_00000408
lbl_fn_802D73E4_000003EC:
    addi r31, r31, 0x44
    addi r30, r30, 0x44
    addi r29, r29, 0x1
lbl_fn_802D73E4_000003F8:
    lwz r0, 0x40(r30)
    cmpwi r0, 0x0
    bge lbl_fn_802D73E4_000003C0
    li r3, -0x1
lbl_fn_802D73E4_00000408:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802D7480(void)
{
    nofralloc
    stwu r1, -0x6a0(r1)
    mflr r0
    stw r0, 0x6a4(r1)
    addi r11, r1, 0x6a0
    bl _savegpr_25
    mr r31, r5
    lwz r5, 0x20(r5)
    mr r30, r3
    bl fn_8035B694
    lfs f0, lbl_808845E8
    lis r3, lbl_80786E20@ha
    li r28, 0x0
    li r4, 0x2
    addi r3, r3, lbl_80786E20@l
    li r0, 0xa
    li r29, -0x1
    stw r3, 0x0(r30)
    addi r3, r30, 0x14e0
    stw r28, 0x14b0(r30)
    stw r28, 0x14b4(r30)
    stw r4, 0x14b8(r30)
    stw r4, 0x14bc(r30)
    stw r28, 0x14c0(r30)
    stw r28, 0x14c4(r30)
    stw r28, 0x14c8(r30)
    stfs f0, 0x14cc(r30)
    stw r28, 0x14d0(r30)
    stw r28, 0x14d4(r30)
    stw r0, 0x14d8(r30)
    stw r29, 0x14dc(r30)
    bl fn_802377B8
    addi r3, r30, 0x14ec
    bl fn_802377B8
    li r0, 0x450
    stw r0, 0x14f8(r30)
    addi r3, r30, 0x1508
    bl fn_802377B8
    lfs f0, lbl_808845F0
    addi r3, r30, 0x1524
    lfs f1, lbl_808845EC
    stfs f1, 0x1514(r30)
    stfs f0, 0x1518(r30)
    stfs f0, 0x151c(r30)
    stfs f0, 0x1520(r30)
    bl fn_80237518
    addi r3, r30, 0x1530
    bl fn_802377B8
    addi r3, r30, 0x153c
    bl fn_802377B8
    addi r3, r30, 0x1548
    bl fn_802377B8
    stw r28, 0x1554(r30)
    addi r3, r30, 0x1564
    stw r28, 0x1558(r30)
    stw r28, 0x155c(r30)
    stw r28, 0x1560(r30)
    bl fn_802377B8
    addi r3, r30, 0x1570
    bl fn_802377B8
    li r0, 0x712
    stw r28, 0x157c(r30)
    addi r3, r30, 0x1588
    stw r28, 0x1580(r30)
    stw r0, 0x1584(r30)
    bl fn_800CB360
    addi r3, r30, 0x158c
    bl fn_802377B8
    addi r3, r30, 0x1598
    bl fn_802377B8
    addi r3, r30, 0x15a4
    bl fn_802377B8
    addi r3, r30, 0x15b0
    bl fn_802377B8
    lfs f3, lbl_808845F0
    addi r3, r30, 0x15e8
    lfs f2, lbl_808845F4
    lfs f1, lbl_808845F8
    lfs f0, lbl_808845FC
    stw r28, 0x15bc(r30)
    stw r28, 0x15c0(r30)
    stw r28, 0x15c4(r30)
    stfs f3, 0x15c8(r30)
    stfs f3, 0x15cc(r30)
    stfs f3, 0x15d0(r30)
    stw r28, 0x15d4(r30)
    stw r29, 0x15d8(r30)
    stfs f2, 0x15dc(r30)
    stfs f1, 0x15e0(r30)
    stfs f0, 0x15e4(r30)
    bl fn_802377B8
    addi r3, r30, 0x15f4
    bl fn_802377B8
    li r0, 0x717
    stw r28, 0x1600(r30)
    addi r3, r30, 0x160c
    stw r28, 0x1604(r30)
    stw r0, 0x1608(r30)
    bl fn_802377B8
    addi r3, r30, 0x1618
    bl fn_802377B8
    addi r3, r30, 0x1624
    bl fn_802377B8
    addi r29, r30, 0x1684
    stw r28, 0x1630(r30)
    mr r3, r29
    stw r28, 0x1634(r30)
    stw r28, 0x1638(r30)
    stw r28, 0x163c(r30)
    stw r28, 0x1640(r30)
    stw r28, 0x1644(r30)
    stw r28, 0x1648(r30)
    stw r28, 0x164c(r30)
    stw r28, 0x1650(r30)
    stw r28, 0x1654(r30)
    stw r28, 0x1658(r30)
    stw r28, 0x165c(r30)
    stw r28, 0x1660(r30)
    stw r28, 0x1664(r30)
    stw r28, 0x1668(r30)
    stw r28, 0x166c(r30)
    stw r28, 0x1670(r30)
    stw r28, 0x1674(r30)
    stw r28, 0x1678(r30)
    stw r28, 0x167c(r30)
    stw r28, 0x1680(r30)
    bl fn_80473E74
    lwz r4, 0x12a4(r30)
    lis r3, lbl_8078FBB0@ha
    lwz r0, 0x958(r30)
    addi r3, r3, lbl_8078FBB0@l
    oris r4, r4, 0x40
    stw r3, 0x0(r29)
    ori r0, r0, 0x210
    lis r3, lbl_80747654@ha
    addi r29, r3, lbl_80747654@l
    stw r4, 0x12a4(r30)
    addi r27, r1, 0x38
    stw r0, 0x958(r30)
    mr r3, r29
    stw r28, 0x168c(r30)
    stw r28, 0x1690(r30)
    stw r28, 0x1694(r30)
    stw r28, 0x169c(r30)
    stw r28, 0x16a4(r30)
    stw r28, 0x16a8(r30)
    stw r28, 0x38(r1)
    stw r28, 0x3c(r1)
    stw r28, 0x40(r1)
    bl strlen
    mr r26, r3
    mr r3, r27
    mr r4, r26
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r27
    stb r0, 0x18(r1)
    mr r6, r29
    add r7, r29, r26
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r27, r29, 0x18
    stw r28, 0x2c(r1)
    addi r26, r1, 0x2c
    stw r28, 0x30(r1)
    mr r3, r27
    stw r28, 0x34(r1)
    bl strlen
    mr r25, r3
    mr r3, r26
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r26
    stb r0, 0x10(r1)
    mr r6, r27
    add r7, r27, r25
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
lbl_fn_802D7480_0000077C:
    addi r3, r1, 0x44
    bl fn_8005B3CC
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_802D7480_00000814
    addi r4, r29, 0x2b
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_802D7480_00000814
    mr r3, r26
    addi r4, r29, 0x2c
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_802D7480_00000804
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_802D7480_000007D0
    lbz r0, 0x2c(r1)
    clrlwi r25, r0, 25
    b lbl_fn_802D7480_000007D4
lbl_fn_802D7480_000007D0:
    lwz r25, 0x30(r1)
lbl_fn_802D7480_000007D4:
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
lbl_fn_802D7480_00000804:
    addi r3, r1, 0x44
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802D7480_0000077C
lbl_fn_802D7480_00000814:
    addi r3, r1, 0x20
    addi r4, r1, 0x38
    addi r5, r1, 0x2c
    bl fn_8006AFF8
    lwz r0, 0x20(r1)
    addi r3, r30, 0x1684
    srwi. r0, r0, 31
    bne lbl_fn_802D7480_0000083C
    addi r4, r1, 0x21
    b lbl_fn_802D7480_00000840
lbl_fn_802D7480_0000083C:
    lwz r4, 0x28(r1)
lbl_fn_802D7480_00000840:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r31, lbl_80747654@ha
    addi r3, r30, 0x14e0
    addi r31, r31, lbl_80747654@l
    addi r4, r31, 0x35
    bl fn_8023780C
    addi r3, r30, 0x14ec
    addi r4, r31, 0x4b
    bl fn_8023780C
    addi r3, r30, 0x1508
    addi r4, r31, 0x61
    bl fn_8023780C
    addi r3, r30, 0x15f4
    addi r4, r31, 0x77
    bl fn_8023780C
    addi r3, r30, 0x1524
    addi r4, r31, 0x8c
    bl fn_80237654
    addi r3, r30, 0x1530
    addi r4, r31, 0xa5
    bl fn_8023780C
    addi r3, r30, 0x153c
    addi r4, r31, 0xbb
    bl fn_8023780C
    addi r3, r30, 0x1548
    addi r4, r31, 0xd1
    bl fn_8023780C
    addi r3, r30, 0x1564
    addi r4, r31, 0xe7
    bl fn_8023780C
    addi r3, r30, 0x1570
    addi r4, r31, 0xfc
    bl fn_8023780C
    addi r3, r30, 0x158c
    addi r4, r31, 0x111
    bl fn_8023780C
    addi r3, r30, 0x1598
    addi r4, r31, 0x126
    bl fn_8023780C
    addi r3, r30, 0x15a4
    addi r4, r31, 0x13c
    bl fn_8023780C
    addi r3, r30, 0x15e8
    addi r4, r31, 0x152
    bl fn_8023780C
    addi r3, r30, 0x160c
    addi r4, r31, 0x167
    bl fn_8023780C
    addi r3, r30, 0x1618
    addi r4, r31, 0x17d
    bl fn_8023780C
    addi r3, r30, 0x1624
    addi r4, r31, 0x193
    bl fn_8023780C
    lwz r3, 0x1640(r30)
    li r9, 0x0
    lwz r4, 0x164c(r30)
    subf r8, r3, r3
    lwz r0, 0x1558(r30)
    subf r7, r4, r4
    lwz r5, 0x1664(r30)
    lwz r4, 0x167c(r30)
    subf r0, r0, r0
    subf r6, r5, r5
    lwz r3, 0x1670(r30)
    subf r4, r4, r4
    lwz r10, 0x1690(r30)
    subf r5, r3, r3
    lwz r11, 0x15c0(r30)
    subf r3, r10, r10
    stw r0, 0x1558(r30)
    subf r0, r11, r11
    stw r8, 0x1640(r30)
    stw r7, 0x164c(r30)
    stw r6, 0x1664(r30)
    stw r5, 0x1670(r30)
    stw r4, 0x167c(r30)
    stw r3, 0x1690(r30)
    stw r0, 0x15c0(r30)
    stw r9, 0x1698(r30)
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802D7480_000009A0
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_802D7480_000009A0:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802D7480_000009B4
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_802D7480_000009B4:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802D7480_000009C8
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_802D7480_000009C8:
    addi r11, r1, 0x6a0
    mr r3, r30
    bl _restgpr_25
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}

asm void fn_802D7A3C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    beq lbl_fn_802D7A3C_00000E08
    addic. r0, r3, 0x16a4
    beq lbl_fn_802D7A3C_00000A30
    lwz r4, 0x16a4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802D7A3C_00000A30
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802D7A3C_00000A30
    bl fn_800897D8
lbl_fn_802D7A3C_00000A30:
    addic. r4, r30, 0x168c
    beq lbl_fn_802D7A3C_00000A5C
    beq lbl_fn_802D7A3C_00000A5C
    beq lbl_fn_802D7A3C_00000A5C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802D7A3C_00000A5C
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802D7A3C_00000A5C:
    addic. r3, r30, 0x1684
    beq lbl_fn_802D7A3C_00000A6C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D7A3C_00000A6C:
    addic. r4, r30, 0x1678
    beq lbl_fn_802D7A3C_00000A9C
    beq lbl_fn_802D7A3C_00000A9C
    beq lbl_fn_802D7A3C_00000A9C
    beq lbl_fn_802D7A3C_00000A9C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802D7A3C_00000A9C
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802D7A3C_00000A9C:
    addic. r4, r30, 0x166c
    beq lbl_fn_802D7A3C_00000ACC
    beq lbl_fn_802D7A3C_00000ACC
    beq lbl_fn_802D7A3C_00000ACC
    beq lbl_fn_802D7A3C_00000ACC
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802D7A3C_00000ACC
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802D7A3C_00000ACC:
    addic. r4, r30, 0x1660
    beq lbl_fn_802D7A3C_00000AFC
    beq lbl_fn_802D7A3C_00000AFC
    beq lbl_fn_802D7A3C_00000AFC
    beq lbl_fn_802D7A3C_00000AFC
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802D7A3C_00000AFC
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802D7A3C_00000AFC:
    addic. r4, r30, 0x1648
    beq lbl_fn_802D7A3C_00000B2C
    beq lbl_fn_802D7A3C_00000B2C
    beq lbl_fn_802D7A3C_00000B2C
    beq lbl_fn_802D7A3C_00000B2C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802D7A3C_00000B2C
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802D7A3C_00000B2C:
    addic. r4, r30, 0x163c
    beq lbl_fn_802D7A3C_00000B5C
    beq lbl_fn_802D7A3C_00000B5C
    beq lbl_fn_802D7A3C_00000B5C
    beq lbl_fn_802D7A3C_00000B5C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802D7A3C_00000B5C
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802D7A3C_00000B5C:
    addic. r29, r30, 0x1624
    beq lbl_fn_802D7A3C_00000B7C
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D7A3C_00000B7C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D7A3C_00000B7C:
    addic. r29, r30, 0x1618
    beq lbl_fn_802D7A3C_00000B9C
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D7A3C_00000B9C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D7A3C_00000B9C:
    addic. r29, r30, 0x160c
    beq lbl_fn_802D7A3C_00000BBC
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D7A3C_00000BBC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D7A3C_00000BBC:
    addic. r29, r30, 0x15f4
    beq lbl_fn_802D7A3C_00000BDC
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D7A3C_00000BDC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D7A3C_00000BDC:
    addic. r29, r30, 0x15e8
    beq lbl_fn_802D7A3C_00000BFC
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D7A3C_00000BFC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D7A3C_00000BFC:
    addic. r4, r30, 0x15bc
    beq lbl_fn_802D7A3C_00000C28
    beq lbl_fn_802D7A3C_00000C28
    beq lbl_fn_802D7A3C_00000C28
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802D7A3C_00000C28
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802D7A3C_00000C28:
    addic. r29, r30, 0x15b0
    beq lbl_fn_802D7A3C_00000C48
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D7A3C_00000C48
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D7A3C_00000C48:
    addic. r29, r30, 0x15a4
    beq lbl_fn_802D7A3C_00000C68
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D7A3C_00000C68
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D7A3C_00000C68:
    addic. r29, r30, 0x1598
    beq lbl_fn_802D7A3C_00000C88
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D7A3C_00000C88
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D7A3C_00000C88:
    addic. r29, r30, 0x158c
    beq lbl_fn_802D7A3C_00000CA8
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D7A3C_00000CA8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D7A3C_00000CA8:
    addi r3, r30, 0x1588
    li r4, -0x1
    bl fn_800CB3A0
    addic. r29, r30, 0x1570
    beq lbl_fn_802D7A3C_00000CD4
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D7A3C_00000CD4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D7A3C_00000CD4:
    addic. r29, r30, 0x1564
    beq lbl_fn_802D7A3C_00000CF4
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D7A3C_00000CF4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D7A3C_00000CF4:
    addic. r4, r30, 0x1554
    beq lbl_fn_802D7A3C_00000D20
    beq lbl_fn_802D7A3C_00000D20
    beq lbl_fn_802D7A3C_00000D20
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802D7A3C_00000D20
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802D7A3C_00000D20:
    addic. r29, r30, 0x1548
    beq lbl_fn_802D7A3C_00000D40
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D7A3C_00000D40
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D7A3C_00000D40:
    addic. r29, r30, 0x153c
    beq lbl_fn_802D7A3C_00000D60
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D7A3C_00000D60
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D7A3C_00000D60:
    addic. r29, r30, 0x1530
    beq lbl_fn_802D7A3C_00000D80
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D7A3C_00000D80
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D7A3C_00000D80:
    addi r3, r30, 0x1524
    li r4, -0x1
    bl fn_802375C4
    addic. r29, r30, 0x1508
    beq lbl_fn_802D7A3C_00000DAC
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D7A3C_00000DAC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D7A3C_00000DAC:
    addic. r29, r30, 0x14ec
    beq lbl_fn_802D7A3C_00000DCC
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D7A3C_00000DCC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D7A3C_00000DCC:
    addic. r29, r30, 0x14e0
    beq lbl_fn_802D7A3C_00000DEC
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802D7A3C_00000DEC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802D7A3C_00000DEC:
    mr r3, r30
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r31, 0x0
    ble lbl_fn_802D7A3C_00000E08
    mr r3, r30
    bl dtor_80084684
lbl_fn_802D7A3C_00000E08:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802D7E80(void)
{
    nofralloc
    stwu r1, -0x670(r1)
    mflr r0
    stw r0, 0x674(r1)
    stw r31, 0x66c(r1)
    mr r31, r3
    stw r30, 0x668(r1)
    stw r29, 0x664(r1)
    stw r28, 0x660(r1)
    lwz r0, 0x14b0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802D7E80_0000148C
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000014C4
    addi r3, r31, 0x14e0
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000014C4
    addi r3, r31, 0x14ec
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000014C4
    addi r3, r31, 0x1508
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000014C4
    addi r3, r31, 0x15f4
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000014C4
    addi r3, r31, 0x1524
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000014C4
    addi r3, r31, 0x1530
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000014C4
    addi r3, r31, 0x153c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000014C4
    addi r3, r31, 0x1548
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000014C4
    addi r3, r31, 0x1564
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000014C4
    addi r3, r31, 0x1570
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000014C4
    addi r3, r31, 0x15e8
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000014C4
    addi r3, r31, 0x158c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000014C4
    addi r3, r31, 0x1598
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000014C4
    addi r3, r31, 0x15a4
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000014C4
    addi r3, r31, 0x160c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000014C4
    addi r3, r31, 0x1618
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000014C4
    addi r3, r31, 0x1624
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000014C4
    addi r3, r31, 0x1684
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000014C4
    addi r3, r31, 0x1684
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_802D7E80_00001420
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_802D7E80_00001420
    bl fn_80121F00
    bl fn_8013C504
    cmpwi r3, 0x0
    beq lbl_fn_802D7E80_00001420
    addi r3, r31, 0x1684
    bl fn_8047059C
    mr r29, r3
    addi r3, r31, 0x1684
    bl fn_80470580
    mr r4, r3
    mr r5, r29
    addi r3, r1, 0x28
    bl fn_8004203C
    lis r3, lbl_80747654@ha
    li r29, 0x0
    addi r30, r3, lbl_80747654@l
lbl_fn_802D7E80_00000FDC:
    addi r3, r1, 0x28
    bl fn_8005B3CC
    mr r28, r3
    addi r4, r30, 0x1a9
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_00001060
lbl_fn_802D7E80_00000FF8:
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r28, r3
    bl fn_80121F00
    bl fn_8013C504
    mr r4, r28
    bl fn_800EC204
    cmpwi r3, 0x0
    stw r3, 0x18(r1)
    beq lbl_fn_802D7E80_00001030
    addi r3, r31, 0x163c
    addi r4, r1, 0x18
    bl fn_80244CCC
lbl_fn_802D7E80_00001030:
    cmpwi r28, 0x0
    bne lbl_fn_802D7E80_00000FF8
    addi r3, r31, 0x163c
    bl fn_800E0AB0
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_00001410
    lwz r4, 0x1638(r31)
    addi r3, r31, 0x163c
    bl fn_802D8550
    lwz r0, 0x0(r3)
    stw r0, 0x1634(r31)
    b lbl_fn_802D7E80_00001410
lbl_fn_802D7E80_00001060:
    mr r3, r28
    addi r4, r30, 0x1b6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000010B8
lbl_fn_802D7E80_00001074:
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r28, r3
    bl fn_80121F00
    bl fn_8013C504
    mr r4, r28
    bl fn_800EC204
    cmpwi r3, 0x0
    stw r3, 0x14(r1)
    beq lbl_fn_802D7E80_000010AC
    addi r3, r31, 0x1660
    addi r4, r1, 0x14
    bl fn_80244CCC
lbl_fn_802D7E80_000010AC:
    cmpwi r28, 0x0
    bne lbl_fn_802D7E80_00001074
    b lbl_fn_802D7E80_00001410
lbl_fn_802D7E80_000010B8:
    mr r3, r28
    addi r4, r30, 0x1c6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_00001104
    stw r29, 0x10(r1)
lbl_fn_802D7E80_000010D0:
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC12C
    cmpwi r3, 0x0
    stw r3, 0x10(r1)
    beq lbl_fn_802D7E80_000010F4
    addi r3, r31, 0x1648
    addi r4, r1, 0x10
    bl fn_8000E18C
lbl_fn_802D7E80_000010F4:
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    bne lbl_fn_802D7E80_000010D0
    b lbl_fn_802D7E80_00001410
lbl_fn_802D7E80_00001104:
    mr r3, r28
    addi r4, r30, 0x1d0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_00001158
lbl_fn_802D7E80_00001118:
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r28, r3
    bl fn_801A03E0
    mr r4, r28
    bl fn_8011FC10
    cmpwi r3, 0x0
    stw r3, 0xc(r1)
    beq lbl_fn_802D7E80_0000114C
    addi r3, r31, 0x166c
    addi r4, r1, 0xc
    bl fn_80244FC0
lbl_fn_802D7E80_0000114C:
    cmpwi r28, 0x0
    bne lbl_fn_802D7E80_00001118
    b lbl_fn_802D7E80_00001410
lbl_fn_802D7E80_00001158:
    mr r3, r28
    addi r4, r30, 0x1e0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_00001180
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1514(r31)
    b lbl_fn_802D7E80_00001410
lbl_fn_802D7E80_00001180:
    mr r3, r28
    addi r4, r30, 0x1ec
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000011D4
lbl_fn_802D7E80_00001194:
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r28, r3
    bl fn_801A03E0
    mr r4, r28
    bl fn_8011FC10
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    beq lbl_fn_802D7E80_000011C8
    addi r3, r31, 0x1678
    addi r4, r1, 0x8
    bl fn_802D8560
lbl_fn_802D7E80_000011C8:
    cmpwi r28, 0x0
    bne lbl_fn_802D7E80_00001194
    b lbl_fn_802D7E80_00001410
lbl_fn_802D7E80_000011D4:
    mr r3, r28
    addi r4, r30, 0x1f7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_00001264
    b lbl_fn_802D7E80_00001250
lbl_fn_802D7E80_000011EC:
    addi r3, r1, 0x28
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r28, r3
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_802D7E80_00001250
    cmpwi r0, 0x23
    beq lbl_fn_802D7E80_00001250
    addi r4, r30, 0x203
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_802D7E80_00001410
    mr r3, r28
    bl fn_802D73E4
    cmpwi r3, 0x0
    stw r3, 0x20(r1)
    ble lbl_fn_802D7E80_00001250
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x24(r1)
    addi r3, r31, 0x168c
    addi r4, r1, 0x20
    bl fn_802D8854
lbl_fn_802D7E80_00001250:
    addi r3, r1, 0x28
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000011EC
    b lbl_fn_802D7E80_00001410
lbl_fn_802D7E80_00001264:
    mr r3, r28
    addi r4, r30, 0x210
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000012A8
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r28, r3
    bl fn_80121F00
    bl fn_8013C504
    mr r4, r28
    bl fn_800EC204
    cmpwi r3, 0x0
    beq lbl_fn_802D7E80_00001410
    stw r3, 0x15d4(r31)
    b lbl_fn_802D7E80_00001410
lbl_fn_802D7E80_000012A8:
    mr r3, r28
    addi r4, r30, 0x21d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000012D0
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x14f8(r31)
    b lbl_fn_802D7E80_00001410
lbl_fn_802D7E80_000012D0:
    mr r3, r28
    addi r4, r30, 0x22d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000012F8
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1584(r31)
    b lbl_fn_802D7E80_00001410
lbl_fn_802D7E80_000012F8:
    mr r3, r28
    addi r4, r30, 0x23c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_00001320
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1608(r31)
    b lbl_fn_802D7E80_00001410
lbl_fn_802D7E80_00001320:
    mr r3, r28
    addi r4, r30, 0x24d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_00001348
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1604(r31)
    b lbl_fn_802D7E80_00001410
lbl_fn_802D7E80_00001348:
    mr r3, r28
    addi r4, r30, 0x25b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_00001370
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x14cc(r31)
    b lbl_fn_802D7E80_00001410
lbl_fn_802D7E80_00001370:
    mr r3, r28
    addi r4, r30, 0x268
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000013B8
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x15dc(r31)
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x15e0(r31)
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x15e4(r31)
    b lbl_fn_802D7E80_00001410
lbl_fn_802D7E80_000013B8:
    mr r3, r28
    addi r4, r30, 0x277
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000013E8
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_8020A81C
    cmpwi r3, 0x0
    beq lbl_fn_802D7E80_00001410
    stw r3, 0x16b0(r31)
    b lbl_fn_802D7E80_00001410
lbl_fn_802D7E80_000013E8:
    mr r3, r28
    addi r4, r30, 0x282
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_00001410
    addi r3, r1, 0x28
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r31, 0x15b0
    bl fn_8023780C
lbl_fn_802D7E80_00001410:
    addi r3, r1, 0x28
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_00000FDC
lbl_fn_802D7E80_00001420:
    lwz r0, 0x7ec(r31)
    li r28, 0x0
    ori r0, r0, 0x1c0
    oris r0, r0, 0x1
    ori r0, r0, 0xc21d
    oris r0, r0, 0x380
    stw r0, 0x7ec(r31)
    b lbl_fn_802D7E80_0000145C
lbl_fn_802D7E80_00001440:
    mr r4, r28
    addi r3, r31, 0x1678
    bl fn_802D8B6C
    lwz r3, 0x0(r3)
    mr r4, r31
    bl fn_802E2468
    addi r28, r28, 0x1
lbl_fn_802D7E80_0000145C:
    addi r3, r31, 0x1678
    bl fn_800E0AA8
    cmplw r28, r3
    blt lbl_fn_802D7E80_00001440
    mr r3, r31
    bl fn_802DDBB0
    li r0, 0x1
    stw r0, 0x14b0(r31)
    addi r3, r31, 0xb0
    li r4, 0x4
    bl fn_802D8540
    b lbl_fn_802D7E80_000014C4
lbl_fn_802D7E80_0000148C:
    cmpwi r0, 0x1
    bne lbl_fn_802D7E80_000014B4
    addi r3, r3, 0x15b0
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802D7E80_000014C4
    li r0, 0x2
    stw r0, 0x14b0(r31)
    li r3, 0x1
    b lbl_fn_802D7E80_000014C8
lbl_fn_802D7E80_000014B4:
    cmpwi r0, 0x2
    bne lbl_fn_802D7E80_000014C4
    li r3, 0x1
    b lbl_fn_802D7E80_000014C8
lbl_fn_802D7E80_000014C4:
    li r3, 0x0
lbl_fn_802D7E80_000014C8:
    lwz r0, 0x674(r1)
    lwz r31, 0x66c(r1)
    lwz r30, 0x668(r1)
    lwz r29, 0x664(r1)
    lwz r28, 0x660(r1)
    mtlr r0
    addi r1, r1, 0x670
    blr
}

asm void fn_802D8540(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    andc r0, r0, r4
    stw r0, 0x4(r3)
    blr
}

asm void fn_802D8550(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    slwi r0, r4, 2
    add r3, r3, r0
    blr
}

asm void fn_802D8560(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    stw r28, 0x30(r1)
    lwz r6, 0x4(r3)
    lwz r5, 0x8(r3)
    cmplw r6, r5
    bge lbl_fn_802D8560_0000155C
    addi r5, r6, 0x1
    stw r5, 0x4(r3)
    subi r0, r5, 0x1
    lwz r3, 0x0(r3)
    slwi r0, r0, 2
    lwz r4, 0x0(r4)
    stwx r4, r3, r0
    b lbl_fn_802D8560_000017DC
lbl_fn_802D8560_0000155C:
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_802D8560_00001594
    lis r4, lbl_80747654@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80747654@l
    addi r3, r3, __files@l
    addi r4, r4, 0x28c
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802D8560_00001594:
    li r5, 0x0
    addi r4, r29, 0x8
    lis r3, 0x4000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x10(r1)
    ble lbl_fn_802D8560_000015FC
    lis r4, lbl_80747654@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80747654@l
    addi r3, r3, __files@l
    addi r4, r4, 0x28c
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802D8560_000015FC:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_802D8560_0000164C
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x10(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_802D8560_00001640
    addi r3, r1, 0x10
lbl_fn_802D8560_00001640:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_802D8560_00001690
lbl_fn_802D8560_0000164C:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_802D8560_00001688
    addi r3, r31, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_802D8560_0000167C
    addi r3, r1, 0x10
lbl_fn_802D8560_0000167C:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_802D8560_00001690
lbl_fn_802D8560_00001688:
    lis r3, 0x4000
    subi r31, r3, 0x1
lbl_fn_802D8560_00001690:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_802D8560_000016C4
    lis r4, lbl_80747654@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80747654@l
    addi r3, r3, __files@l
    addi r4, r4, 0x28c
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802D8560_000016C4:
    slwi r3, r31, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_802D8560_000016F8
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802D8560_000016F8:
    lwz r0, 0x18(r1)
    stw r28, 0x14(r1)
    slwi r3, r0, 2
    lwz r4, 0x0(r30)
    stw r31, 0x1c(r1)
    lwz r0, 0x4(r29)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r28, r0
    stwx r4, r3, r0
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x4(r29)
    lwz r30, 0x0(r29)
    slwi r4, r4, 2
    add r5, r30, r4
    subf r5, r30, r5
    mr r4, r30
    srawi r5, r5, 2
    addze r28, r5
    subf r0, r28, r0
    stw r0, 0x24(r1)
    slwi r31, r28, 2
    slwi r0, r0, 2
    mr r5, r31
    add r3, r3, r0
    bl memcpy
    mr r3, r30
    mr r5, r31
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    li r4, 0x0
    addic. r3, r1, 0x14
    add r0, r0, r28
    stw r0, 0x18(r1)
    stw r4, 0x4(r29)
    lwz r3, 0x8(r29)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r29)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r29)
    stw r4, 0x18(r1)
    beq lbl_fn_802D8560_000017DC
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_802D8560_000017DC
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_802D8560_000017DC:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802D8854(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    stw r28, 0x30(r1)
    lwz r6, 0x4(r3)
    lwz r5, 0x8(r3)
    cmplw r6, r5
    bge lbl_fn_802D8854_0000185C
    addi r6, r6, 0x1
    lwz r5, 0x0(r3)
    subi r0, r6, 0x1
    stw r6, 0x4(r3)
    slwi r0, r0, 3
    lwz r3, 0x0(r4)
    add r5, r5, r0
    lwz r0, 0x4(r4)
    stw r3, 0x0(r5)
    stw r0, 0x4(r5)
    b lbl_fn_802D8854_00001AF4
lbl_fn_802D8854_0000185C:
    lis r3, 0x2000
    subi r0, r3, 0x1
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_802D8854_00001894
    lis r4, lbl_80747654@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80747654@l
    addi r3, r3, __files@l
    addi r4, r4, 0x28c
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802D8854_00001894:
    li r5, 0x0
    addi r4, r29, 0x8
    lis r3, 0x2000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_802D8854_000018FC
    lis r4, lbl_80747654@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80747654@l
    addi r3, r3, __files@l
    addi r4, r4, 0x28c
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802D8854_000018FC:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_802D8854_0000194C
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_802D8854_00001940
    addi r3, r1, 0x8
lbl_fn_802D8854_00001940:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_802D8854_00001990
lbl_fn_802D8854_0000194C:
    lis r3, 0x1555
    addi r0, r3, 0x5554
    cmplw r31, r0
    bge lbl_fn_802D8854_00001988
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_802D8854_0000197C
    addi r3, r1, 0x8
lbl_fn_802D8854_0000197C:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_802D8854_00001990
lbl_fn_802D8854_00001988:
    lis r3, 0x2000
    subi r28, r3, 0x1
lbl_fn_802D8854_00001990:
    lis r3, 0x2000
    subi r0, r3, 0x1
    cmplw r28, r0
    ble lbl_fn_802D8854_000019C4
    lis r4, lbl_80747654@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80747654@l
    addi r3, r3, __files@l
    addi r4, r4, 0x28c
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802D8854_000019C4:
    slwi r3, r28, 3
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_802D8854_000019F8
    lis r3, __files@ha
    lis r4, lbl_80786F50@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80786F50@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802D8854_000019F8:
    lwz r0, 0x18(r1)
    stw r31, 0x14(r1)
    slwi r5, r0, 3
    lwz r3, 0x0(r30)
    stw r28, 0x1c(r1)
    lwz r0, 0x4(r29)
    stw r0, 0x24(r1)
    slwi r4, r0, 3
    lwz r0, 0x4(r30)
    add r4, r31, r4
    stwux r3, r4, r5
    stw r0, 0x4(r4)
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    slwi r0, r0, 3
    lwz r4, 0x4(r29)
    add r6, r3, r0
    lwz r7, 0x0(r29)
    slwi r0, r4, 3
    add r5, r7, r0
    addi r0, r5, 0x7
    subf r0, r7, r0
    srwi r0, r0, 3
    mtctr r0
    cmplw r5, r7
    ble lbl_fn_802D8854_00001AA4
lbl_fn_802D8854_00001A6C:
    subic. r6, r6, 0x8
    subi r5, r5, 0x8
    beq lbl_fn_802D8854_00001A88
    lwz r0, 0x4(r5)
    lwz r3, 0x0(r5)
    stw r3, 0x0(r6)
    stw r0, 0x4(r6)
lbl_fn_802D8854_00001A88:
    lwz r4, 0x24(r1)
    lwz r3, 0x18(r1)
    subi r0, r4, 0x1
    stw r0, 0x24(r1)
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
    bdnz lbl_fn_802D8854_00001A6C
lbl_fn_802D8854_00001AA4:
    li r4, 0x0
    stw r4, 0x4(r29)
    addic. r0, r1, 0x14
    lwz r3, 0x8(r29)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r29)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r29)
    stw r4, 0x18(r1)
    beq lbl_fn_802D8854_00001AF4
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_802D8854_00001AF4
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_802D8854_00001AF4:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
