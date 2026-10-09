#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8004D124(void);
extern void fn_80056DB8(void);
extern void fn_80059468(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AFF8(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_80087E9C(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_80092814(void);
extern void fn_80092954(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB58C(void);
extern void fn_800CB5C8(void);
extern void fn_800CB6E4(void);
extern void fn_800D246C(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_800FAB80(void);
extern void fn_8013655C(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_80151448(void);
extern void fn_8015495C(void);
extern void fn_80158BB4(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_80170A20(void);
extern void fn_801781B0(void);
extern void fn_80178A6C(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80237518(void);
extern void fn_802375C4(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_802B43C8(void);
extern void fn_802B475C(void);
extern void fn_802B4B08(void);
extern void fn_802B52D8(void);
extern void fn_802B55B0(void);
extern void fn_802B596C(void);
extern void fn_802B5DA4(void);
extern void fn_802B6104(void);
extern void fn_802B6AF8(void);
extern void fn_8037D4C0(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_804DA490(void);
extern void fn_805A3C58(void);
extern void fn_805A3D00(void);
extern void fn_805A507C(void);
extern void fn_805A5224(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_8068B100(void);
extern void fn_806959D8(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_807861D8[];
extern u8 lbl_807462A8[];
extern u8 lbl_807465C0[];
extern u8 lbl_807465E0[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80777630[];
extern u8 lbl_807860A0[];
extern u8 lbl_80786204[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F448;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_80883F38;
extern u32 lbl_80883F40;
extern u32 lbl_80883F4C;
extern u32 lbl_8088400C;
extern u32 lbl_80884010;
extern u32 lbl_80884014;
extern u32 lbl_80884018;
extern u32 lbl_8088401C;
extern u32 lbl_80884020;
extern u32 lbl_80884024;
extern u32 lbl_80884028;
extern u32 lbl_8088402C;
extern u32 lbl_80884030;
extern u32 lbl_80884034;
extern u32 lbl_80884038;
extern u32 lbl_8088403C;
extern u32 lbl_80884040;
extern u32 lbl_80884044;
extern u32 lbl_80884048;
extern u32 lbl_8088404C;
extern u32 lbl_80884050;
extern u32 lbl_80884054;
extern u32 lbl_80884058;
extern u32 lbl_8088405C;
extern u32 lbl_80884060;
extern u32 lbl_80884064;
extern u32 lbl_80884068;
extern u32 lbl_8088406C;

/* Function declarations */
void fn_802B1F2C(void);
void fn_802B21F4(void);
void fn_802B21FC(void);
void fn_802B23E8(void);
void fn_802B28BC(void);
void fn_802B2F64(void);
void fn_802B3248(void);
void fn_802B3498(void);
void fn_802B3534(void);
void fn_802B3684(void);
void fn_802B3764(void);

asm void fn_802B1F2C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    lis r5, lbl_807462A8@ha
    stw r0, 0x124(r1)
    addi r5, r5, lbl_807462A8@l
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    mr r30, r4
    addi r4, r5, 0x1c9
    stw r29, 0x114(r1)
    mr r29, r3
    addi r3, r1, 0x8
    crclr 6
    bl sprintf
    lwz r0, 0x1a98(r29)
    cmpwi r0, 0x0
    bne lbl_fn_802B1F2C_00000070
    cmpwi r30, 0x0
    beq lbl_fn_802B1F2C_00000070
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_802B1F2C_00000070
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0x1a98(r29)
    mr r30, r3
    b lbl_fn_802B1F2C_00000074
lbl_fn_802B1F2C_00000070:
    li r30, 0x0
lbl_fn_802B1F2C_00000074:
    mr r3, r29
    mr r4, r30
    bl fn_805A5224
    lis r31, lbl_807462A8@ha
    mr r3, r30
    addi r31, r31, lbl_807462A8@l
    addi r5, r29, 0x1aa0
    addi r4, r31, 0x1d9
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x1e3
    addi r5, r29, 0x1aa4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lis r6, 0x2
    mr r3, r30
    subi r7, r6, 0x7960
    addi r4, r31, 0x1ec
    addi r5, r29, 0x58c
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80883F40
    mr r3, r30
    lfs f2, lbl_8088400C
    addi r4, r31, 0xf4
    lfs f3, lbl_80883F4C
    addi r5, r29, 0x14fc
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r30
    addi r4, r31, 0xea
    addi r5, r29, 0x1510
    li r6, 0x0
    li r7, 0x1f4
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x103
    addi r5, r29, 0x1514
    li r6, 0x0
    li r7, 0x1f4
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x115
    addi r5, r29, 0x1518
    li r6, 0x0
    li r7, 0x1f4
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x121
    addi r5, r29, 0x151c
    li r6, 0x0
    li r7, 0x1f4
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80883F40
    mr r3, r30
    lfs f2, lbl_80884010
    addi r4, r31, 0x1f7
    lfs f3, lbl_80883F4C
    addi r5, r29, 0x1524
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80883F40
    mr r3, r30
    lfs f2, lbl_80884010
    addi r4, r31, 0x207
    lfs f3, lbl_80883F38
    addi r5, r29, 0x1528
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80884014
    mr r3, r30
    lfs f2, lbl_80884018
    addi r4, r31, 0x21c
    lfs f3, lbl_80883F4C
    addi r5, r29, 0x1ab4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80884014
    mr r3, r30
    lfs f2, lbl_80884018
    addi r4, r31, 0x229
    lfs f3, lbl_80883F4C
    addi r5, r29, 0x1ac4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80884014
    mr r3, r30
    lfs f2, lbl_80884018
    addi r4, r31, 0x233
    lfs f3, lbl_80883F4C
    addi r5, r29, 0x1a94
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r30
    addi r4, r31, 0x243
    addi r5, r29, 0x1a44
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x252
    addi r5, r29, 0x14c0
    li r6, 0x0
    li r7, 0x1f4
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x25e
    addi r5, r29, 0x14bc
    li r6, -0x1
    li r7, 0x1f4
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    stw r30, 0x1a9c(r29)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_802B21F4(void)
{
    nofralloc
    lfs f1, lbl_8088401C
    blr
}

asm void fn_802B21FC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r30, r3
    mr r31, r4
    beq lbl_fn_802B21FC_000004A4
    addic. r0, r3, 0x1a98
    beq lbl_fn_802B21FC_00000314
    lwz r4, 0x1a98(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802B21FC_00000314
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802B21FC_00000314
    bl fn_800897D8
lbl_fn_802B21FC_00000314:
    addic. r29, r30, 0x1a78
    beq lbl_fn_802B21FC_00000334
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802B21FC_00000334
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802B21FC_00000334:
    addi r3, r30, 0x1a6c
    li r4, -0x1
    bl fn_802375C4
    addic. r29, r30, 0x1a60
    beq lbl_fn_802B21FC_00000360
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802B21FC_00000360
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802B21FC_00000360:
    addic. r29, r30, 0x1a54
    beq lbl_fn_802B21FC_00000380
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802B21FC_00000380
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802B21FC_00000380:
    addic. r29, r30, 0x1a34
    beq lbl_fn_802B21FC_000003E8
    beq lbl_fn_802B21FC_000003E8
    beq lbl_fn_802B21FC_000003E8
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_802B21FC_000003E8
    lwz r27, 0x4(r29)
    slwi r3, r27, 5
    subf r0, r27, r27
    stw r0, 0x4(r29)
    add r28, r4, r3
    b lbl_fn_802B21FC_000003D8
lbl_fn_802B21FC_000003B4:
    subic. r28, r28, 0x20
    beq lbl_fn_802B21FC_000003D4
    beq lbl_fn_802B21FC_000003D4
    lwz r0, 0x0(r28)
    srwi. r0, r0, 31
    beq lbl_fn_802B21FC_000003D4
    lwz r3, 0x8(r28)
    bl dtor_80084684
lbl_fn_802B21FC_000003D4:
    subi r27, r27, 0x1
lbl_fn_802B21FC_000003D8:
    cmpwi r27, 0x0
    bne lbl_fn_802B21FC_000003B4
    lwz r3, 0x0(r29)
    bl dtor_80084684
lbl_fn_802B21FC_000003E8:
    lis r4, fn_80059468@ha
    addi r3, r30, 0x1564
    addi r4, r4, fn_80059468@l
    li r5, 0x58
    li r6, 0xe
    bl fn_806959D8
    addic. r27, r30, 0x1558
    beq lbl_fn_802B21FC_00000488
    beq lbl_fn_802B21FC_00000488
    beq lbl_fn_802B21FC_00000488
    lwz r4, 0x0(r27)
    cmpwi r4, 0x0
    beq lbl_fn_802B21FC_00000488
    lwz r29, 0x4(r27)
    mulli r3, r29, 0x1c
    subf r0, r29, r29
    stw r0, 0x4(r27)
    add r28, r4, r3
    b lbl_fn_802B21FC_00000478
lbl_fn_802B21FC_00000434:
    subic. r28, r28, 0x1c
    beq lbl_fn_802B21FC_00000474
    addic. r0, r28, 0xc
    beq lbl_fn_802B21FC_00000458
    lwz r0, 0xc(r28)
    srwi. r0, r0, 31
    beq lbl_fn_802B21FC_00000458
    lwz r3, 0x14(r28)
    bl dtor_80084684
lbl_fn_802B21FC_00000458:
    cmpwi r28, 0x0
    beq lbl_fn_802B21FC_00000474
    lwz r0, 0x0(r28)
    srwi. r0, r0, 31
    beq lbl_fn_802B21FC_00000474
    lwz r3, 0x8(r28)
    bl dtor_80084684
lbl_fn_802B21FC_00000474:
    subi r29, r29, 0x1
lbl_fn_802B21FC_00000478:
    cmpwi r29, 0x0
    bne lbl_fn_802B21FC_00000434
    lwz r3, 0x0(r27)
    bl dtor_80084684
lbl_fn_802B21FC_00000488:
    mr r3, r30
    li r4, 0x0
    bl fn_805A3D00
    cmpwi r31, 0x0
    ble lbl_fn_802B21FC_000004A4
    mr r3, r30
    bl dtor_80084684
lbl_fn_802B21FC_000004A4:
    mr r3, r30
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802B23E8(void)
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
    lfs f0, lbl_80884020
    lis r3, lbl_80786204@ha
    li r28, 0x0
    li r29, 0x1
    addi r3, r3, lbl_80786204@l
    li r0, 0x258
    stw r3, 0x0(r30)
    addi r3, r30, 0x1524
    stw r28, 0x14dc(r30)
    stw r28, 0x14e0(r30)
    stw r29, 0x14e4(r30)
    stw r28, 0x14e8(r30)
    stw r28, 0x14ec(r30)
    stw r28, 0x14f0(r30)
    stw r28, 0x14f4(r30)
    stfs f0, 0x14f8(r30)
    stw r28, 0x14fc(r30)
    stw r28, 0x1500(r30)
    stw r28, 0x1504(r30)
    stw r28, 0x1508(r30)
    stw r28, 0x150c(r30)
    stw r28, 0x1510(r30)
    stw r28, 0x1518(r30)
    stw r0, 0x1520(r30)
    bl fn_80237518
    addi r3, r30, 0x1530
    bl fn_802377B8
    addi r3, r30, 0x153c
    bl fn_802377B8
    addi r3, r30, 0x1548
    bl fn_800CB360
    lfs f1, lbl_80884024
    addi r27, r30, 0x1698
    lfs f0, lbl_80884028
    li r0, 0x4650
    stw r28, 0x154c(r30)
    mr r3, r27
    li r4, 0x1
    stw r28, 0x1590(r30)
    stfs f1, 0x15e0(r30)
    stw r28, 0x15f8(r30)
    stfs f0, 0x15fc(r30)
    stw r29, 0x1600(r30)
    stw r0, 0x1604(r30)
    stw r28, 0x1608(r30)
    stw r28, 0x1684(r30)
    bl fn_80056DB8
    lis r29, lbl_80777630@ha
    addi r26, r30, 0x16f0
    addi r29, r29, lbl_80777630@l
    stw r29, 0x0(r27)
    mr r3, r26
    li r4, 0x1
    bl fn_80056DB8
    addi r27, r30, 0x1748
    stw r29, 0x0(r26)
    mr r3, r27
    li r4, 0x1
    bl fn_80056DB8
    addi r26, r30, 0x17a0
    stw r29, 0x0(r27)
    mr r3, r26
    li r4, 0x1
    bl fn_80056DB8
    addi r27, r30, 0x17f8
    stw r29, 0x0(r26)
    mr r3, r27
    li r4, 0x1
    bl fn_80056DB8
    addi r26, r30, 0x1850
    stw r29, 0x0(r27)
    mr r3, r26
    bl fn_80473E74
    lwz r5, 0x12a4(r30)
    lis r3, lbl_8078FBB0@ha
    lwz r0, 0x958(r30)
    addi r3, r3, lbl_8078FBB0@l
    oris r5, r5, 0x40
    lis r29, lbl_807465E0@ha
    ori r0, r0, 0x10
    stw r3, 0x0(r26)
    addi r3, r30, 0x1524
    addi r4, r29, lbl_807465E0@l
    stw r28, 0x1858(r30)
    stw r28, 0x185c(r30)
    stw r5, 0x12a4(r30)
    stw r0, 0x958(r30)
    bl fn_80237654
    addi r29, r29, lbl_807465E0@l
    addi r3, r30, 0x1530
    addi r4, r29, 0xe
    bl fn_8023780C
    addi r3, r30, 0x153c
    addi r4, r29, 0x1c
    bl fn_8023780C
    lis r4, lbl_807860A0@ha
    addi r26, r29, 0x29
    addi r4, r4, lbl_807860A0@l
    addi r27, r1, 0x38
    lfs f0, 0x4(r4)
    mr r3, r26
    stfs f0, 0x160c(r30)
    lfs f0, 0x8(r4)
    stfs f0, 0x1610(r30)
    lfs f0, 0xc(r4)
    stfs f0, 0x1614(r30)
    lfs f0, 0x10(r4)
    stfs f0, 0x1618(r30)
    lfs f0, 0x38(r4)
    stfs f0, 0x161c(r30)
    lfs f0, 0x3c(r4)
    stfs f0, 0x1620(r30)
    lfs f0, 0x40(r4)
    stfs f0, 0x1624(r30)
    lfs f0, 0x44(r4)
    stfs f0, 0x1628(r30)
    lfs f0, 0x6c(r4)
    stfs f0, 0x162c(r30)
    lfs f0, 0x70(r4)
    stfs f0, 0x1630(r30)
    lfs f0, 0x74(r4)
    stfs f0, 0x1634(r30)
    lfs f0, 0x78(r4)
    stfs f0, 0x1638(r30)
    lfs f0, 0xa0(r4)
    stfs f0, 0x163c(r30)
    lfs f0, 0xa4(r4)
    stfs f0, 0x1640(r30)
    lfs f0, 0xa8(r4)
    stfs f0, 0x1644(r30)
    lfs f0, 0xac(r4)
    stfs f0, 0x1648(r30)
    lfs f0, 0xd4(r4)
    stfs f0, 0x164c(r30)
    lfs f0, 0xd8(r4)
    stfs f0, 0x1650(r30)
    lfs f0, 0xdc(r4)
    stfs f0, 0x1654(r30)
    lfs f0, 0xe0(r4)
    stfs f0, 0x1658(r30)
    lfs f0, 0x108(r4)
    stfs f0, 0x165c(r30)
    lfs f0, 0x10c(r4)
    stfs f0, 0x1660(r30)
    lfs f0, 0x110(r4)
    stfs f0, 0x1664(r30)
    lfs f0, 0x114(r4)
    stfs f0, 0x1668(r30)
    stw r28, 0x38(r1)
    stw r28, 0x3c(r1)
    stw r28, 0x40(r1)
    bl strlen
    mr r25, r3
    mr r3, r27
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r27
    stb r0, 0x18(r1)
    mr r6, r26
    add r7, r26, r25
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r26, r29, 0x41
    stw r28, 0x2c(r1)
    addi r27, r1, 0x2c
    stw r28, 0x30(r1)
    mr r3, r26
    stw r28, 0x34(r1)
    bl strlen
    mr r25, r3
    mr r3, r27
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r27
    stb r0, 0x10(r1)
    mr r6, r26
    add r7, r26, r25
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
lbl_fn_802B23E8_0000083C:
    addi r3, r1, 0x44
    bl fn_8005B3CC
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_802B23E8_000008D4
    addi r4, r29, 0x54
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_802B23E8_000008D4
    mr r3, r26
    addi r4, r29, 0x55
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_802B23E8_000008C4
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_802B23E8_00000890
    lbz r0, 0x2c(r1)
    clrlwi r25, r0, 25
    b lbl_fn_802B23E8_00000894
lbl_fn_802B23E8_00000890:
    lwz r25, 0x30(r1)
lbl_fn_802B23E8_00000894:
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
lbl_fn_802B23E8_000008C4:
    addi r3, r1, 0x44
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802B23E8_0000083C
lbl_fn_802B23E8_000008D4:
    addi r3, r1, 0x20
    addi r4, r1, 0x38
    addi r5, r1, 0x2c
    bl fn_8006AFF8
    li r0, 0x0
    stw r0, 0x166c(r30)
    addi r3, r30, 0x1850
    stw r0, 0x1670(r30)
    stw r0, 0x1674(r30)
    stw r0, 0x1678(r30)
    stw r0, 0x167c(r30)
    stw r0, 0x1680(r30)
    stw r0, 0x1684(r30)
    stw r0, 0x1688(r30)
    stw r0, 0x168c(r30)
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    bne lbl_fn_802B23E8_00000924
    addi r4, r1, 0x21
    b lbl_fn_802B23E8_00000928
lbl_fn_802B23E8_00000924:
    lwz r4, 0x28(r1)
lbl_fn_802B23E8_00000928:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802B23E8_0000094C
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_802B23E8_0000094C:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802B23E8_00000960
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_802B23E8_00000960:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802B23E8_00000974
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_802B23E8_00000974:
    addi r11, r1, 0x6a0
    mr r3, r30
    bl _restgpr_25
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}

asm void fn_802B28BC(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    stw r0, 0x654(r1)
    stw r31, 0x64c(r1)
    stw r30, 0x648(r1)
    mr r30, r3
    stw r29, 0x644(r1)
    stw r28, 0x640(r1)
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_802B28BC_00001014
    lwz r3, 0x1438(r30)
    cmpwi r3, 0x0
    beq lbl_fn_802B28BC_000009D8
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_802B28BC_00001014
lbl_fn_802B28BC_000009D8:
    addi r3, r30, 0x1524
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_802B28BC_00001014
    addi r3, r30, 0x1530
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802B28BC_00001014
    addi r3, r30, 0x153c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802B28BC_00001014
    addi r3, r30, 0x1850
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_802B28BC_00001014
    lwz r5, 0x5c0(r30)
    mr r3, r30
    lwz r4, 0x16a0(r30)
    clrlwi r8, r5, 1
    lwz r0, 0x16f8(r30)
    ori r7, r4, 0x3
    lwz r5, 0x1750(r30)
    ori r6, r0, 0x3
    lwz r4, 0x17a8(r30)
    lwz r0, 0x1800(r30)
    ori r5, r5, 0x3
    ori r4, r4, 0x3
    stw r8, 0x5c0(r30)
    ori r0, r0, 0x3
    stw r7, 0x16a0(r30)
    stw r30, 0x16a4(r30)
    stw r6, 0x16f8(r30)
    stw r30, 0x16fc(r30)
    stw r5, 0x1750(r30)
    stw r30, 0x1754(r30)
    stw r4, 0x17a8(r30)
    stw r30, 0x17ac(r30)
    stw r0, 0x1800(r30)
    stw r30, 0x1804(r30)
    bl fn_802B4B08
    li r31, 0x0
    stw r31, 0x154c(r30)
    addi r3, r30, 0x1850
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_802B28BC_00000F44
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_802B28BC_00000F44
    lwz r0, 0x10d8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802B28BC_00000F44
    addi r3, r30, 0x1850
    bl fn_8047059C
    mr r28, r3
    addi r3, r30, 0x1850
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    mr r29, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x8(r1)
    addi r3, r1, 0x18
    li r5, 0x400
    stw r31, 0xc(r1)
    li r4, 0x0
    stw r31, 0x10(r1)
    stw r31, 0x14(r1)
    stw r31, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r29
    mr r5, r28
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r31, lbl_807465E0@ha
    addi r31, r31, lbl_807465E0@l
lbl_fn_802B28BC_00000B3C:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    mr r28, r3
    addi r4, r31, 0x5e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802B28BC_00000B6C
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1520(r30)
    b lbl_fn_802B28BC_00000F34
lbl_fn_802B28BC_00000B6C:
    mr r3, r28
    addi r4, r31, 0x67
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802B28BC_00000C10
lbl_fn_802B28BC_00000B80:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC12C
    lwz r4, lbl_8087F430
    li r5, 0x0
    li r6, 0x0
    lwz r4, 0x10d8(r4)
    lwz r0, 0x78(r4)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802B28BC_00000BD4
lbl_fn_802B28BC_00000BAC:
    lwz r7, 0x7c(r4)
    lwzx r0, r7, r6
    cmpw r3, r0
    bne lbl_fn_802B28BC_00000BC8
    mulli r0, r5, 0x28
    add r4, r7, r0
    b lbl_fn_802B28BC_00000BD8
lbl_fn_802B28BC_00000BC8:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_802B28BC_00000BAC
lbl_fn_802B28BC_00000BD4:
    li r4, 0x0
lbl_fn_802B28BC_00000BD8:
    cmpwi r4, 0x0
    beq lbl_fn_802B28BC_00000C04
    lwz r0, 0x154c(r30)
    slwi r0, r0, 2
    add r0, r30, r0
    addic. r5, r0, 0x1550
    beq lbl_fn_802B28BC_00000BF8
    stw r4, 0x0(r5)
lbl_fn_802B28BC_00000BF8:
    lwz r4, 0x154c(r30)
    addi r0, r4, 0x1
    stw r0, 0x154c(r30)
lbl_fn_802B28BC_00000C04:
    cmpwi r3, 0x0
    bne lbl_fn_802B28BC_00000B80
    b lbl_fn_802B28BC_00000F34
lbl_fn_802B28BC_00000C10:
    mr r3, r28
    addi r4, r31, 0x73
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802B28BC_00000CB4
lbl_fn_802B28BC_00000C24:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC12C
    lwz r4, lbl_8087F430
    li r5, 0x0
    li r6, 0x0
    lwz r4, 0x10d8(r4)
    lwz r0, 0x78(r4)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802B28BC_00000C78
lbl_fn_802B28BC_00000C50:
    lwz r7, 0x7c(r4)
    lwzx r0, r7, r6
    cmpw r3, r0
    bne lbl_fn_802B28BC_00000C6C
    mulli r0, r5, 0x28
    add r4, r7, r0
    b lbl_fn_802B28BC_00000C7C
lbl_fn_802B28BC_00000C6C:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_802B28BC_00000C50
lbl_fn_802B28BC_00000C78:
    li r4, 0x0
lbl_fn_802B28BC_00000C7C:
    cmpwi r4, 0x0
    beq lbl_fn_802B28BC_00000CA8
    lwz r0, 0x1590(r30)
    slwi r0, r0, 2
    add r0, r30, r0
    addic. r5, r0, 0x1594
    beq lbl_fn_802B28BC_00000C9C
    stw r4, 0x0(r5)
lbl_fn_802B28BC_00000C9C:
    lwz r4, 0x1590(r30)
    addi r0, r4, 0x1
    stw r0, 0x1590(r30)
lbl_fn_802B28BC_00000CA8:
    cmpwi r3, 0x0
    bne lbl_fn_802B28BC_00000C24
    b lbl_fn_802B28BC_00000F34
lbl_fn_802B28BC_00000CB4:
    mr r3, r28
    addi r4, r31, 0x7d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802B28BC_00000CE0
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x166c(r30)
    b lbl_fn_802B28BC_00000F34
lbl_fn_802B28BC_00000CE0:
    mr r3, r28
    addi r4, r31, 0x86
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802B28BC_00000D0C
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1670(r30)
    b lbl_fn_802B28BC_00000F34
lbl_fn_802B28BC_00000D0C:
    mr r3, r28
    addi r4, r31, 0x8d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802B28BC_00000D38
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1674(r30)
    b lbl_fn_802B28BC_00000F34
lbl_fn_802B28BC_00000D38:
    mr r3, r28
    addi r4, r31, 0x94
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802B28BC_00000D64
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1678(r30)
    b lbl_fn_802B28BC_00000F34
lbl_fn_802B28BC_00000D64:
    mr r3, r28
    addi r4, r31, 0x9c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802B28BC_00000D90
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x167c(r30)
    b lbl_fn_802B28BC_00000F34
lbl_fn_802B28BC_00000D90:
    mr r3, r28
    addi r4, r31, 0xa3
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802B28BC_00000DBC
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1680(r30)
    b lbl_fn_802B28BC_00000F34
lbl_fn_802B28BC_00000DBC:
    mr r3, r28
    addi r4, r31, 0xab
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802B28BC_00000DE8
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1684(r30)
    b lbl_fn_802B28BC_00000F34
lbl_fn_802B28BC_00000DE8:
    mr r3, r28
    addi r4, r31, 0xb8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802B28BC_00000E14
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1688(r30)
    b lbl_fn_802B28BC_00000F34
lbl_fn_802B28BC_00000E14:
    mr r3, r28
    addi r4, r31, 0xc2
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802B28BC_00000E40
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x168c(r30)
    b lbl_fn_802B28BC_00000F34
lbl_fn_802B28BC_00000E40:
    mr r3, r28
    addi r4, r31, 0xd0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802B28BC_00000E6C
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1690(r30)
    b lbl_fn_802B28BC_00000F34
lbl_fn_802B28BC_00000E6C:
    mr r3, r28
    addi r4, r31, 0xdc
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802B28BC_00000E98
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1694(r30)
    b lbl_fn_802B28BC_00000F34
lbl_fn_802B28BC_00000E98:
    mr r3, r28
    addi r4, r31, 0xec
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802B28BC_00000EC0
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x15e0(r30)
    b lbl_fn_802B28BC_00000F34
lbl_fn_802B28BC_00000EC0:
    mr r3, r28
    addi r4, r31, 0xf8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802B28BC_00000EE8
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x14f8(r30)
    b lbl_fn_802B28BC_00000F34
lbl_fn_802B28BC_00000EE8:
    mr r3, r28
    addi r4, r31, 0x109
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802B28BC_00000F10
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1500(r30)
    b lbl_fn_802B28BC_00000F34
lbl_fn_802B28BC_00000F10:
    mr r3, r28
    addi r4, r31, 0x117
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802B28BC_00000F34
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1508(r30)
lbl_fn_802B28BC_00000F34:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802B28BC_00000B3C
lbl_fn_802B28BC_00000F44:
    lwz r0, 0x7ec(r30)
    lwz r4, 0x1590(r30)
    oris r3, r0, 0x1
    lwz r0, 0x54c(r30)
    ori r3, r3, 0xc0
    cmpwi r4, 0x0
    oris r3, r3, 0x100
    ori r0, r0, 0x200
    ori r3, r3, 0x208
    stw r0, 0x54c(r30)
    oris r0, r3, 0x288
    ori r0, r0, 0x8414
    stw r0, 0x7ec(r30)
    beq lbl_fn_802B28BC_00000F94
    lwz r4, 0x1594(r30)
    addi r3, r30, 0x15d4
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x15dc(r30)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_802B28BC_00000F94:
    lwz r0, 0x1858(r30)
    lis r3, lbl_807465E0@ha
    addi r3, r3, lbl_807465E0@l
    cmpwi r0, 0x0
    addi r4, r3, 0x12a
    bne lbl_fn_802B28BC_00000FC8
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802B28BC_00000FC8
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x1858(r30)
    b lbl_fn_802B28BC_00000FCC
lbl_fn_802B28BC_00000FC8:
    li r3, 0x0
lbl_fn_802B28BC_00000FCC:
    lis r4, lbl_807465E0@ha
    addi r5, r30, 0x185c
    addi r4, r4, lbl_807465E0@l
    li r6, 0x0
    addi r4, r4, 0x130
    li r7, 0x0
    bl fn_80087994
    lwz r3, 0x1438(r30)
    cmpwi r3, 0x0
    beq lbl_fn_802B28BC_0000100C
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_802B28BC_0000100C:
    li r3, 0x1
    b lbl_fn_802B28BC_00001018
lbl_fn_802B28BC_00001014:
    li r3, 0x0
lbl_fn_802B28BC_00001018:
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    lwz r28, 0x640(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_802B2F64(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r4, 0x151c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802B2F64_00001068
    lwz r0, 0x16a0(r3)
    ori r0, r0, 0x1
    stw r0, 0x16a0(r3)
    b lbl_fn_802B2F64_00001074
lbl_fn_802B2F64_00001068:
    lwz r0, 0x16a0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x16a0(r3)
lbl_fn_802B2F64_00001074:
    cmpwi r4, 0x0
    beq lbl_fn_802B2F64_0000108C
    lwz r0, 0x16f8(r3)
    ori r0, r0, 0x1
    stw r0, 0x16f8(r3)
    b lbl_fn_802B2F64_00001098
lbl_fn_802B2F64_0000108C:
    lwz r0, 0x16f8(r3)
    clrrwi r0, r0, 1
    stw r0, 0x16f8(r3)
lbl_fn_802B2F64_00001098:
    cmpwi r4, 0x0
    beq lbl_fn_802B2F64_000010B0
    lwz r0, 0x1750(r3)
    ori r0, r0, 0x1
    stw r0, 0x1750(r3)
    b lbl_fn_802B2F64_000010BC
lbl_fn_802B2F64_000010B0:
    lwz r0, 0x1750(r3)
    clrrwi r0, r0, 1
    stw r0, 0x1750(r3)
lbl_fn_802B2F64_000010BC:
    cmpwi r4, 0x0
    beq lbl_fn_802B2F64_000010D4
    lwz r0, 0x17a8(r3)
    ori r0, r0, 0x1
    stw r0, 0x17a8(r3)
    b lbl_fn_802B2F64_000010E0
lbl_fn_802B2F64_000010D4:
    lwz r0, 0x17a8(r3)
    clrrwi r0, r0, 1
    stw r0, 0x17a8(r3)
lbl_fn_802B2F64_000010E0:
    cmpwi r4, 0x0
    beq lbl_fn_802B2F64_000010F8
    lwz r0, 0x1800(r3)
    ori r0, r0, 0x1
    stw r0, 0x1800(r3)
    b lbl_fn_802B2F64_00001104
lbl_fn_802B2F64_000010F8:
    lwz r0, 0x1800(r3)
    clrrwi r0, r0, 1
    stw r0, 0x1800(r3)
lbl_fn_802B2F64_00001104:
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_802B2F64_000011EC
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_802B2F64_0000113C
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_802B2F64_0000113C
    li r6, 0x1
lbl_fn_802B2F64_0000113C:
    cmpwi r6, 0x0
    beq lbl_fn_802B2F64_00001158
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802B2F64_00001158
    li r4, 0x1
lbl_fn_802B2F64_00001158:
    cmpwi r4, 0x0
    beq lbl_fn_802B2F64_0000118C
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802B2F64_00001180
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_802B2F64_00001180
    li r4, 0x1
lbl_fn_802B2F64_00001180:
    cmpwi r4, 0x0
    bne lbl_fn_802B2F64_0000118C
    li r5, 0x1
lbl_fn_802B2F64_0000118C:
    cmpwi r5, 0x0
    beq lbl_fn_802B2F64_000011D4
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_802B2F64_000011D4
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_802B2F64_000011D4
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802B2F64_000011D4:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x104(r12)
    mtctr r12
    bctrl
    b lbl_fn_802B2F64_0000120C
lbl_fn_802B2F64_000011EC:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x11
    bne lbl_fn_802B2F64_0000120C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
lbl_fn_802B2F64_0000120C:
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    mr r3, r31
    bl fn_802B4B08
    lwz r0, 0x1518(r31)
    lfs f0, lbl_80884028
    cmpwi r0, 0x1
    stfs f0, 0x910(r31)
    stfs f0, 0x914(r31)
    stfs f0, 0x918(r31)
    stfs f0, 0x91c(r31)
    stfs f0, 0x920(r31)
    stfs f0, 0x924(r31)
    stfs f0, 0x928(r31)
    bne lbl_fn_802B2F64_00001264
    lfs f1, lbl_8088402C
    lfs f0, lbl_80884030
    stfs f1, 0x910(r31)
    stfs f0, 0x914(r31)
    b lbl_fn_802B2F64_0000127C
lbl_fn_802B2F64_00001264:
    cmpwi r0, 0x2
    bne lbl_fn_802B2F64_0000127C
    lfs f1, lbl_80884030
    lfs f0, lbl_8088402C
    stfs f1, 0x910(r31)
    stfs f0, 0x914(r31)
lbl_fn_802B2F64_0000127C:
    lwz r0, 0x2dc(r31)
    cmpwi r0, 0x140
    bne lbl_fn_802B2F64_000012E8
    addi r3, r31, 0x1548
    bl fn_800CB58C
    cmpwi r3, 0x0
    bne lbl_fn_802B2F64_000012D8
    lis r4, lbl_807465E0@ha
    lfs f1, lbl_80884034
    addi r4, r4, lbl_807465E0@l
    addi r3, r1, 0x8
    addi r4, r4, 0x13a
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r31, 0x1548
    addi r4, r1, 0x8
    bl fn_800CB440
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_802B2F64_00001308
lbl_fn_802B2F64_000012D8:
    addi r3, r31, 0x1548
    addi r4, r31, 0x528
    bl fn_800CB6E4
    b lbl_fn_802B2F64_00001308
lbl_fn_802B2F64_000012E8:
    addi r3, r31, 0x1548
    bl fn_800CB58C
    cmpwi r3, 0x0
    beq lbl_fn_802B2F64_00001308
    addi r3, r31, 0x1548
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
lbl_fn_802B2F64_00001308:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802B3248(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    lfs f31, lbl_8088403C
    stfd f30, 0x90(r1)
    psq_st f30, 0x98(r1), 0, 0
    lfs f30, lbl_80884038
    stfd f29, 0x80(r1)
    psq_st f29, 0x88(r1), 0, 0
    stw r31, 0x7c(r1)
    lis r31, lbl_807860A0@ha
    addi r31, r31, lbl_807860A0@l
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    li r29, 0x0
    stw r28, 0x70(r1)
    mr r28, r3
    mr r30, r28
lbl_fn_802B3248_0000136C:
    lwz r4, 0x0(r31)
    addi r3, r28, 0xb0
    bl fn_80092954
    cmpwi r3, 0x0
    beq lbl_fn_802B3248_00001518
    lwz r0, 0x1518(r28)
    lfs f3, 0x4(r31)
    lfs f2, 0x8(r31)
    cmpwi r0, 0x1
    lfs f1, 0xc(r31)
    lfs f0, 0x10(r31)
    stfs f3, 0x40(r1)
    stfs f2, 0x44(r1)
    stfs f1, 0x48(r1)
    stfs f0, 0x4c(r1)
    bne lbl_fn_802B3248_000013D0
    lfs f3, 0x14(r31)
    lfs f2, 0x18(r31)
    lfs f1, 0x1c(r31)
    lfs f0, 0x20(r31)
    stfs f3, 0x40(r1)
    stfs f2, 0x44(r1)
    stfs f1, 0x48(r1)
    stfs f0, 0x4c(r1)
    b lbl_fn_802B3248_000013F8
lbl_fn_802B3248_000013D0:
    cmpwi r0, 0x2
    bne lbl_fn_802B3248_000013F8
    lfs f3, 0x24(r31)
    lfs f2, 0x28(r31)
    lfs f1, 0x2c(r31)
    lfs f0, 0x30(r31)
    stfs f3, 0x40(r1)
    stfs f2, 0x44(r1)
    stfs f1, 0x48(r1)
    stfs f0, 0x4c(r1)
lbl_fn_802B3248_000013F8:
    lfs f1, 0x40(r1)
    addi r3, r28, 0xb0
    lfs f0, 0x160c(r30)
    lfs f2, 0x44(r1)
    fsubs f7, f1, f0
    lfs f1, 0x1610(r30)
    lfs f3, 0x48(r1)
    fsubs f12, f2, f1
    lfs f2, 0x1614(r30)
    lfs f4, 0x4c(r1)
    fsubs f13, f3, f2
    lfs f3, 0x1618(r30)
    fmuls f8, f7, f30
    fsubs f29, f4, f3
    stfs f7, 0x20(r1)
    fmuls f9, f12, f30
    fadds f5, f8, f0
    stfs f12, 0x24(r1)
    fmuls f10, f13, f30
    fmuls f11, f29, f30
    stfs f5, 0x160c(r30)
    fadds f4, f9, f1
    fadds f6, f10, f2
    stfs f13, 0x28(r1)
    fadds f7, f11, f3
    fmuls f0, f31, f5
    stfs f4, 0x1610(r30)
    frsp f2, f4
    frsp f1, f6
    stfs f6, 0x1614(r30)
    fctiwz f3, f0
    frsp f0, f7
    stfs f7, 0x1618(r30)
    fmuls f2, f31, f2
    fmuls f1, f31, f1
    stfd f3, 0x50(r1)
    fmuls f0, f31, f0
    fctiwz f2, f2
    lwz r7, 0x54(r1)
    fctiwz f1, f1
    fctiwz f0, f0
    stfd f2, 0x58(r1)
    lwz r4, 0x0(r31)
    stfd f1, 0x60(r1)
    lwz r6, 0x5c(r1)
    stfd f0, 0x68(r1)
    lwz r5, 0x64(r1)
    lwz r0, 0x6c(r1)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stfs f29, 0x2c(r1)
    stfs f8, 0x10(r1)
    stfs f9, 0x14(r1)
    stfs f10, 0x18(r1)
    stfs f11, 0x1c(r1)
    stfs f5, 0x30(r1)
    stfs f4, 0x34(r1)
    stfs f6, 0x38(r1)
    stfs f7, 0x3c(r1)
    stw r0, 0xc(r1)
    bl fn_80092954
    lbz r0, 0xc(r1)
    stb r0, 0x18(r3)
    lbz r0, 0xd(r1)
    stb r0, 0x19(r3)
    lbz r0, 0xe(r1)
    stb r0, 0x1a(r3)
    lbz r0, 0xf(r1)
    stb r0, 0x1b(r3)
lbl_fn_802B3248_00001518:
    addi r29, r29, 0x1
    addi r30, r30, 0x10
    cmpwi r29, 0x6
    addi r31, r31, 0x34
    blt lbl_fn_802B3248_0000136C
    mr r3, r28
    bl fn_80149A30
    lwz r0, 0xb4(r1)
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    psq_l f30, 0x98(r1), 0, 0
    lfd f30, 0x90(r1)
    psq_l f29, 0x88(r1), 0, 0
    lfd f29, 0x80(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_802B3498(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_807C7030@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_807C7030@l
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x50(r4)
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    ori r0, r0, 0x10
    stfs f2, 0x18(r4)
    psq_st f1, 0x10(r4), 0, 0
    stw r0, 0x50(r4)
    bl fn_80151448
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_802B3498_000015D8
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_802B3498_000015F0
lbl_fn_802B3498_000015D8:
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x118(r12)
    mtctr r12
    bctrl
lbl_fn_802B3498_000015F0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802B3534(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r6, 0x68(r4)
    cmpwi r6, 0x0
    beq lbl_fn_802B3534_0000166C
    lwz r4, 0x940(r3)
    lwz r5, 0x14ec(r3)
    srwi r0, r4, 31
    add r0, r0, r4
    add r4, r5, r6
    srawi r0, r0, 1
    stw r4, 0x14ec(r3)
    cmpw r4, r0
    blt lbl_fn_802B3534_0000166C
    lwz r0, 0x14e4(r3)
    cmpwi r0, 0x1
    bne lbl_fn_802B3534_0000166C
    li r4, 0x3
    li r0, 0x0
    stw r4, 0x14e4(r3)
    stw r0, 0x14e8(r3)
lbl_fn_802B3534_0000166C:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802B3534_00001740
    li r0, 0x0
    stw r0, 0x14e0(r3)
    mr r3, r30
    lwz r12, 0x0(r30)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r30
    bl fn_80178A6C
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r30
    bl fn_8016DA4C
    lfs f0, lbl_80884034
    li r0, 0x11
    li r31, 0x1
    stw r0, 0x58c(r30)
    lfs f1, lbl_80884028
    addi r3, r30, 0xb0
    stw r31, 0x3fc(r30)
    li r4, 0x0
    lfs f2, lbl_80884038
    li r5, 0x2e
    stfs f0, 0x2fc(r30)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x67
    li r6, 0x0
    bl fn_80239DAC
    stw r31, 0x151c(r30)
lbl_fn_802B3534_00001740:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802B3684(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x3
    stw r0, 0x24(r1)
    li r0, 0x6
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r0, 0x58c(r3)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x67
    li r6, 0x0
    bl fn_80239DAC
    lfs f3, 0x530(r31)
    li r0, 0x1
    lfs f0, 0x15dc(r31)
    lfs f5, lbl_80884028
    fsubs f6, f3, f0
    lfs f3, 0x528(r31)
    lfs f0, 0x15d4(r31)
    lfs f4, 0x15d8(r31)
    fsubs f7, f3, f0
    stw r0, 0x151c(r31)
    fmuls f0, f6, f6
    fsubs f3, f5, f4
    stfs f5, 0x52c(r31)
    fmadds f1, f7, f7, f0
    stfs f7, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f6, 0x10(r1)
    bl fn_8068B100
    frsp f3, f1
    lfs f0, lbl_80884040
    fcmpo cr0, f3, f0
    ble lbl_fn_802B3684_00001824
    addi r3, r31, 0x15d4
    lfs f2, 0x15dc(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
lbl_fn_802B3684_00001824:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802B3764(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    lis r4, 0x4330
    stw r0, 0xf4(r1)
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    mr r31, r3
    stw r30, 0xd8(r1)
    stw r29, 0xd4(r1)
    lwz r0, 0xd1c(r3)
    stw r4, 0xc0(r1)
    cmpwi r0, 0x0
    stw r4, 0xc8(r1)
    bne lbl_fn_802B3764_00001880
    lwz r4, lbl_8087F8A0
    lwz r0, 0x48(r4)
    stw r0, 0xd1c(r3)
lbl_fn_802B3764_00001880:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x10
    beq lbl_fn_802B3764_0000189C
    cmpwi r0, 0x7
    beq lbl_fn_802B3764_0000189C
    lwz r0, 0xd1c(r3)
    stw r0, 0x14d4(r3)
lbl_fn_802B3764_0000189C:
    lwz r0, 0x940(r3)
    cmpwi r0, 0x0
    ble lbl_fn_802B3764_000018CC
    xoris r0, r0, 0x8000
    stw r0, 0xc4(r1)
    lis r4, lbl_807465C0@ha
    lfs f0, 0x7d8(r3)
    lfd f4, lbl_807465C0@l(r4)
    lfd f3, 0xc0(r1)
    fsubs f3, f3, f4
    fdivs f3, f0, f3
    b lbl_fn_802B3764_000018D0
lbl_fn_802B3764_000018CC:
    lfs f3, lbl_80884028
lbl_fn_802B3764_000018D0:
    lfs f0, lbl_80884044
    fcmpo cr0, f3, f0
    bge lbl_fn_802B3764_00001914
    lwz r0, 0x1608(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802B3764_00001914
    li r0, 0x1
    stw r0, 0x1608(r3)
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_802B3764_00001914
    lfs f1, lbl_80884034
    li r4, 0x8b8
    li r5, 0xf
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
lbl_fn_802B3764_00001914:
    lwz r0, 0xd18(r31)
    lwz r3, 0x14e0(r31)
    cmpwi r0, 0x0
    addi r6, r3, 0x1
    stw r6, 0x14e0(r31)
    beq lbl_fn_802B3764_00001938
    lwz r0, 0x14d4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802B3764_000019EC
lbl_fn_802B3764_00001938:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f1, lbl_80884028
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_80884034
    li r29, 0x1
    stw r29, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884028
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x2
    lfs f2, lbl_80884038
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x67
    li r6, 0x0
    bl fn_80239DAC
    lfs f0, lbl_80884028
    stw r29, 0x151c(r31)
    stfs f0, 0x52c(r31)
    b lbl_fn_802B3764_00002464
lbl_fn_802B3764_000019EC:
    beq lbl_fn_802B3764_00002464
    lwz r3, 0x58c(r31)
    subi r0, r3, 0x7
    cmplwi r0, 0xa
    bgt lbl_fn_802B3764_000023AC
    lis r3, jumptable_807861D8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807861D8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r31
    bl fn_80158BB4
    cmpwi r3, 0x0
    beq lbl_fn_802B3764_00001A94
    li r29, 0x1
    stw r29, 0x151c(r31)
    lwz r3, lbl_8087EE98
    bl fn_8004D124
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x67
    li r6, 0x0
    bl fn_80239DAC
    lfs f0, lbl_80884028
    stw r29, 0x151c(r31)
    stfs f0, 0x52c(r31)
lbl_fn_802B3764_00001A94:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80884048
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802B3764_00002464
    lfs f0, lbl_8088404C
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802B3764_00002464
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r7, 0x1674(r31)
    li r4, 0x0
    lwz r8, 0x590(r31)
    li r5, 0x0
    lfs f1, lbl_80884028
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    b lbl_fn_802B3764_00002464
    mr r3, r31
    bl fn_802B52D8
    b lbl_fn_802B3764_00002464
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802B3764_00002464
    lwz r0, 0x1514(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802B3764_00001B3C
    cmpwi r0, 0x2
    beq lbl_fn_802B3764_00001B4C
    cmpwi r0, 0x3
    beq lbl_fn_802B3764_00001C04
    cmpwi r0, 0x4
    beq lbl_fn_802B3764_00001C94
    cmpwi r0, 0x5
    beq lbl_fn_802B3764_00001D4C
    b lbl_fn_802B3764_00001E04
lbl_fn_802B3764_00001B3C:
    mr r3, r31
    li r4, 0x2
    bl fn_802B6AF8
    b lbl_fn_802B3764_00002464
lbl_fn_802B3764_00001B4C:
    li r29, 0x0
    li r0, 0xd
    stw r29, 0x14e0(r31)
    mr r3, r31
    li r4, 0x6
    stw r29, 0x14dc(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80884034
    li r3, 0x4
    li r0, 0x1
    stw r3, 0x560(r31)
    lfs f1, lbl_80884028
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_80884038
    li r5, 0x140
    stfs f0, 0x2fc(r31)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r0, 0x1518(r31)
    stw r29, 0x151c(r31)
    cmpwi r0, 0x1
    beq lbl_fn_802B3764_00001BD0
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_802B3764_00001BD0
    li r4, 0x3
    bl fn_804DA490
lbl_fn_802B3764_00001BD0:
    addi r3, r31, 0x15d4
    lfs f2, 0x15dc(r31)
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r31, 0x15e4
    li r4, 0x1
    li r3, 0x0
    li r0, -0x1
    stw r4, 0x1518(r31)
    stw r3, 0x150c(r31)
    stw r0, 0x14f4(r31)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x15ec(r31)
    b lbl_fn_802B3764_00002464
lbl_fn_802B3764_00001C04:
    li r29, 0x0
    li r0, 0xc
    stw r29, 0x14e0(r31)
    mr r3, r31
    li r4, 0x6
    stw r29, 0x14dc(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80884034
    li r3, 0x4
    li r0, 0x1
    stw r3, 0x560(r31)
    lfs f1, lbl_80884028
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_80884038
    li r5, 0x140
    stfs f0, 0x2fc(r31)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r0, 0x1518(r31)
    stw r29, 0x151c(r31)
    cmpwi r0, 0x2
    beq lbl_fn_802B3764_00001C88
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_802B3764_00001C88
    li r4, 0x3
    bl fn_804DA490
lbl_fn_802B3764_00001C88:
    li r0, 0x2
    stw r0, 0x1518(r31)
    b lbl_fn_802B3764_00002464
lbl_fn_802B3764_00001C94:
    li r29, 0x0
    li r0, 0xe
    stw r29, 0x14e0(r31)
    mr r3, r31
    li r4, 0x6
    stw r29, 0x14dc(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80884034
    li r3, 0x4
    li r0, 0x1
    stw r3, 0x560(r31)
    lfs f1, lbl_80884028
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_80884038
    li r5, 0x140
    stfs f0, 0x2fc(r31)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r0, 0x1518(r31)
    stw r29, 0x151c(r31)
    cmpwi r0, 0x1
    beq lbl_fn_802B3764_00001D18
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_802B3764_00001D18
    li r4, 0x3
    bl fn_804DA490
lbl_fn_802B3764_00001D18:
    addi r3, r31, 0x15d4
    lfs f2, 0x15dc(r31)
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r31, 0x15e4
    li r4, 0x1
    li r3, 0x0
    li r0, -0x1
    stw r4, 0x1518(r31)
    stw r3, 0x150c(r31)
    stw r0, 0x14f4(r31)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x15ec(r31)
    b lbl_fn_802B3764_00002464
lbl_fn_802B3764_00001D4C:
    li r29, 0x0
    li r0, 0xe
    stw r29, 0x14e0(r31)
    mr r3, r31
    li r4, 0x6
    stw r29, 0x14dc(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80884034
    li r3, 0x4
    li r0, 0x1
    stw r3, 0x560(r31)
    lfs f1, lbl_80884028
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_80884038
    li r5, 0x140
    stfs f0, 0x2fc(r31)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r0, 0x1518(r31)
    stw r29, 0x151c(r31)
    cmpwi r0, 0x2
    beq lbl_fn_802B3764_00001DD0
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_802B3764_00001DD0
    li r4, 0x3
    bl fn_804DA490
lbl_fn_802B3764_00001DD0:
    addi r3, r31, 0x15d4
    lfs f2, 0x15dc(r31)
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r31, 0x15e4
    li r4, 0x2
    li r3, 0x0
    li r0, -0x1
    stw r4, 0x1518(r31)
    stw r3, 0x150c(r31)
    stw r0, 0x14f4(r31)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x15ec(r31)
    b lbl_fn_802B3764_00002464
lbl_fn_802B3764_00001E04:
    li r29, 0x0
    li r0, 0xb
    stw r29, 0x14e0(r31)
    mr r3, r31
    li r4, 0x6
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80884034
    li r0, 0x4
    li r30, 0x1
    stw r0, 0x560(r31)
    lfs f1, lbl_80884028
    addi r3, r31, 0xb0
    stw r30, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_80884038
    li r5, 0x140
    stfs f0, 0x2fc(r31)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r5, lbl_8087F3C0
    mr r3, r31
    li r4, 0x66
    stw r30, 0xc4(r5)
    lwz r5, lbl_8087F3C0
    stw r30, 0xc8(r5)
    bl fn_80232B7C
    lfs f0, lbl_80884028
    li r0, -0x1
    lfs f1, lbl_80884034
    addi r4, r31, 0x1530
    stfs f0, 0x70(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x64
    addi r8, r1, 0x70
    stfs f0, 0x74(r1)
    addi r9, r1, 0x80
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x78(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x68(r1)
    stfs f0, 0x6c(r1)
    stfs f1, 0x80(r1)
    stfs f1, 0x84(r1)
    stfs f1, 0x88(r1)
    stfs f1, 0x8c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    stw r29, 0xc4(r3)
    lwz r3, lbl_8087F3C0
    stw r29, 0xc8(r3)
    stw r29, 0x151c(r31)
    stw r29, 0x1518(r31)
    b lbl_fn_802B3764_00002464
    xoris r0, r6, 0x8000
    stw r0, 0xcc(r1)
    lis r3, lbl_807465C0@ha
    lfs f3, lbl_80884050
    lfd f4, lbl_807465C0@l(r3)
    lfd f0, 0xc8(r1)
    fsubs f0, f0, f4
    fcmpo cr0, f0, f3
    ble lbl_fn_802B3764_00001F9C
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    li r3, 0x0
    li r0, 0xf
    stw r3, 0x14e0(r31)
    mr r3, r31
    li r4, 0x6
    stw r0, 0x58c(r31)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80884034
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884028
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x141
    lfs f2, lbl_80884038
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_802B3764_00002464
lbl_fn_802B3764_00001F9C:
    stw r0, 0xc4(r1)
    lfd f0, 0xc0(r1)
    fsubs f0, f0, f4
    fcmpo cr0, f0, f3
    cror eq, lt, eq
    bne lbl_fn_802B3764_00002464
    lis r4, 0x6666
    mr r3, r31
    addi r0, r4, 0x6667
    li r5, 0x0
    mulhw r0, r0, r6
    srawi r0, r0, 2
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0xa
    subf r0, r0, r6
    cntlzw r0, r0
    srwi r4, r0, 5
    bl fn_802B55B0
    b lbl_fn_802B3764_00002464
    mr r3, r31
    bl fn_802B596C
    b lbl_fn_802B3764_00002464
    mr r3, r31
    bl fn_802B5DA4
    b lbl_fn_802B3764_00002464
    mr r3, r31
    bl fn_802B6104
    b lbl_fn_802B3764_00002464
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802B3764_00002464
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x67
    li r6, 0x0
    bl fn_80239DAC
    lfs f0, lbl_80884028
    li r0, 0x1
    stw r0, 0x151c(r31)
    stfs f0, 0x52c(r31)
    b lbl_fn_802B3764_00002464
    lfs f3, 0x15fc(r31)
    lfs f0, lbl_80884028
    fcmpo cr0, f3, f0
    bge lbl_fn_802B3764_00002104
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x67
    li r6, 0x0
    bl fn_80239DAC
    lfs f0, lbl_80884028
    li r0, 0x1
    stw r0, 0x151c(r31)
    stfs f0, 0x52c(r31)
    b lbl_fn_802B3764_00002464
lbl_fn_802B3764_00002104:
    lwz r0, 0x1600(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802B3764_00002118
    lfs f5, lbl_80884054
    b lbl_fn_802B3764_0000211C
lbl_fn_802B3764_00002118:
    lfs f5, lbl_80884058
lbl_fn_802B3764_0000211C:
    lfs f4, 0x538(r31)
    lfs f3, 0x15fc(r31)
    lfs f0, lbl_80884034
    fadds f4, f4, f5
    fsubs f0, f3, f0
    stfs f4, 0x538(r31)
    stfs f0, 0x15fc(r31)
    b lbl_fn_802B3764_00002464
    lfs f3, 0x15dc(r31)
    addi r3, r1, 0x34
    lfs f0, 0x530(r31)
    lfs f5, 0x15d8(r31)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x15d4(r31)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x38(r1)
    stfs f0, 0x34(r1)
    stfs f6, 0x3c(r1)
    bl fn_805F9940
    addi r3, r1, 0x34
    bl fn_805F9920
    lfs f0, lbl_8088405C
    fcmpo cr0, f1, f0
    bge lbl_fn_802B3764_00002230
    lwz r0, 0x14e0(r31)
    lis r3, lbl_807465C0@ha
    lfd f4, lbl_807465C0@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xcc(r1)
    lfs f0, lbl_80884050
    lfd f3, 0xc8(r1)
    fsubs f3, f3, f4
    fcmpo cr0, f3, f0
    ble lbl_fn_802B3764_00002330
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    li r3, 0x0
    li r0, 0xf
    stw r3, 0x14e0(r31)
    mr r3, r31
    li r4, 0x6
    stw r0, 0x58c(r31)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80884034
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884028
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x141
    lfs f2, lbl_80884038
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_802B3764_00002464
lbl_fn_802B3764_00002230:
    addi r4, r1, 0x34
    lfs f2, 0x3c(r1)
    addi r3, r1, 0x40
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    mr r4, r3
    stfs f2, 0x48(r1)
    bl fn_805F98D0
    lfs f5, lbl_80884028
    lis r3, lbl_807465E0@ha
    lfs f4, lbl_80884060
    addi r3, r3, lbl_807465E0@l
    lfs f3, 0x48(r1)
    addi r4, r3, 0x147
    fmuls f6, f5, f4
    lfs f0, 0x40(r1)
    stfs f5, 0x44(r1)
    fmuls f7, f3, f4
    fmuls f5, f0, f4
    addi r3, r31, 0xb0
    lfs f3, 0x52c(r31)
    li r5, 0x0
    lfs f4, 0x528(r31)
    lfs f0, 0x530(r31)
    fadds f3, f3, f6
    fadds f4, f4, f5
    stfs f5, 0x58(r1)
    fadds f0, f0, f7
    stfs f6, 0x5c(r1)
    stfs f7, 0x60(r1)
    stfs f4, 0x528(r31)
    stfs f3, 0x52c(r31)
    stfs f0, 0x530(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B3764_000022C8
    li r4, 0x0
    b lbl_fn_802B3764_000022D4
lbl_fn_802B3764_000022C8:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802B3764_000022D4:
    lfs f4, 0x2c(r4)
    li r3, 0x4b5
    lfs f3, 0x1c(r4)
    lfs f0, 0xc(r4)
    stfs f0, 0x4c(r1)
    lwz r29, lbl_8087F048
    stfs f3, 0x50(r1)
    stfs f4, 0x54(r1)
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_80884028
    mr r5, r3
    stw r0, 0xc(r1)
    mr r3, r29
    lfs f2, lbl_80884034
    mr r4, r31
    addi r7, r1, 0x4c
    addi r8, r31, 0x534
    li r6, 0x3e8
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_802B3764_00002330:
    lwz r6, 0x14e0(r31)
    lis r3, lbl_807465C0@ha
    lfd f4, lbl_807465C0@l(r3)
    xoris r0, r6, 0x8000
    stw r0, 0xc4(r1)
    lfs f0, lbl_80884050
    lfd f3, 0xc0(r1)
    fsubs f3, f3, f4
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802B3764_00002464
    lis r4, 0x6666
    mr r3, r31
    addi r0, r4, 0x6667
    li r5, 0x0
    mulhw r0, r0, r6
    srawi r0, r0, 2
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0xa
    subf r0, r0, r6
    cntlzw r0, r0
    srwi r4, r0, 5
    bl fn_802B55B0
    b lbl_fn_802B3764_00002464
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_802B3764_00002464
lbl_fn_802B3764_000023AC:
    lwz r3, 0x55c(r31)
    subi r0, r3, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_802B3764_000023DC
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x14d4(r31)
    mr r3, r31
    lfs f1, lbl_80884064
    li r5, 0x0
    bl fn_80170A20
lbl_fn_802B3764_000023DC:
    mr r3, r31
    bl fn_802B43C8
    mr r4, r31
    addi r3, r1, 0x10
    bl fn_801781B0
    addi r3, r1, 0x10
    lfs f3, lbl_80884028
    lfs f2, 0x18(r1)
    addi r29, r1, 0x1c
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x90
    lfs f0, lbl_80884034
    li r4, 0x79
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x24(r1)
    stfs f3, 0x28(r1)
    stfs f3, 0x2c(r1)
    stfs f0, 0x30(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x28
    addi r3, r1, 0x90
    mr r5, r4
    bl fn_805F93C0
    lfs f3, lbl_80884068
    mr r3, r29
    lfs f0, 0x5b0(r31)
    addi r4, r1, 0x28
    lfs f2, lbl_8088406C
    li r5, 0x64
    fmuls f1, f3, f0
    bl fn_805A507C
    mr r3, r31
    bl fn_802B475C
lbl_fn_802B3764_00002464:
    lwz r3, 0x15f8(r31)
    addi r0, r3, 0x1
    stw r0, 0x15f8(r31)
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r29, 0xd4(r1)
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}
