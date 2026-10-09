#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_14(void);
extern void _restgpr_25(void);
extern void _savegpr_14(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AFF8(void);
extern void fn_800844D8(void);
extern void fn_800897D8(void);
extern void fn_80097C08(void);
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
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_800FAB80(void);
extern void fn_8013655C(void);
extern void fn_80145334(void);
extern void fn_8014C540(void);
extern void fn_8016E4C4(void);
extern void fn_8016E970(void);
extern void fn_8017039C(void);
extern void fn_80170A20(void);
extern void fn_801765D8(void);
extern void fn_80219E6C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_802E8084(void);
extern void fn_802EA490(void);
extern void fn_802EAF68(void);
extern void fn_802EB1F4(void);
extern void fn_802EB61C(void);
extern void fn_802EC38C(void);
extern void fn_80370AE4(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_805A3C58(void);
extern void fn_805A3D00(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80683B54(void);
extern void fn_80684600(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80747F70[];
extern u8 lbl_80775A88[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_807873E8[];
extern u8 lbl_80787548[];
extern u8 lbl_8078FBB0[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_80884760;
extern u32 lbl_80884764;
extern u32 lbl_80884768;
extern u32 lbl_808847A8;
extern u32 lbl_808847AC;
extern u32 lbl_808847B0;
extern u32 lbl_808847B4;
extern u32 lbl_808847B8;
extern u32 lbl_808847BC;
extern u32 lbl_808847C0;
extern u32 lbl_808847C4;
extern u32 lbl_808847C8;
extern u32 lbl_808847CC;
extern u32 lbl_808847D0;
extern u32 lbl_808847D4;

/* Function declarations */
void fn_802E8250(void);
void fn_802E82F0(void);
void fn_802E8354(void);
void fn_802E8438(void);
void fn_802E8454(void);
void fn_802E84C8(void);
void fn_802E8580(void);
void fn_802E89B0(void);
void fn_802E8B88(void);
void fn_802E9590(void);

asm void fn_802E8250(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802E8250_0000007C
    lwz r3, 0x1434(r31)
    lwz r4, 0x12a4(r31)
    lwz r0, 0x5c0(r31)
    cmpwi r3, 0x0
    oris r4, r4, 0x200
    stw r4, 0x12a4(r31)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r31)
    ble lbl_fn_802E8250_00000068
    subi r0, r3, 0x1
    stw r0, 0x1434(r31)
    b lbl_fn_802E8250_00000084
lbl_fn_802E8250_00000068:
    ori r0, r4, 0x8000
    stw r0, 0x12a4(r31)
    mr r3, r31
    bl fn_801765D8
    b lbl_fn_802E8250_00000084
lbl_fn_802E8250_0000007C:
    li r0, 0x1e
    stw r0, 0x1434(r31)
lbl_fn_802E8250_00000084:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802E82F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_80884760
    li r4, 0x0
    stw r0, 0x14(r1)
    li r0, 0x1
    lfs f1, lbl_80884768
    li r5, 0x14
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f2, lbl_80884764
    li r6, 0x1
    stw r0, 0x3fc(r3)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2fc(r3)
    addi r3, r3, 0xb0
    bl fn_80097C08
    lfs f0, lbl_80884760
    stfs f0, 0x2e8(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802E8354(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x14dc(r3)
    stw r31, 0x14e0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0x7
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    mr r3, r30
    li r4, 0x1
    bl fn_8016E4C4
    lwz r0, 0x5c0(r30)
    mr r3, r30
    stb r31, 0x1508(r30)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r30)
    lwz r12, 0x0(r30)
    lwz r12, 0x98(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1504(r30)
    cmpwi r3, 0x0
    beq lbl_fn_802E8354_0000019C
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x530(r30)
    psq_st f1, 0x528(r30), 0, 0
    lfs f0, 0x14(r3)
    stfs f0, 0x538(r30)
lbl_fn_802E8354_0000019C:
    lfs f1, lbl_80884760
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f2, lbl_80884764
    li r4, 0x0
    stfs f1, 0x2fc(r30)
    li r5, 0x2d
    li r6, 0x0
    li r7, 0x1
    stfs f1, 0x2e8(r30)
    li r8, 0x1
    bl fn_80097C08
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802E8438(void)
{
    nofralloc
    lwz r0, 0x58c(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x14bc(r3)
    stw r0, 0x4(r4)
    lwz r0, 0x150c(r3)
    stw r0, 0x8(r4)
    blr
}

asm void fn_802E8454(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, 0x0(r4)
    stw r0, 0x14(r1)
    lwz r0, 0x8(r4)
    cmpwi r5, 0x2
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x150c(r3)
    bne lbl_fn_802E8454_00000258
    lbz r0, 0x1508(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802E8454_00000258
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lwz r4, 0x150c(r31)
    mr r3, r31
    bl fn_802E8084
    b lbl_fn_802E8454_00000264
lbl_fn_802E8454_00000258:
    lwz r0, 0x4(r4)
    stw r5, 0x58c(r3)
    stw r0, 0x14bc(r3)
lbl_fn_802E8454_00000264:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802E84C8(void)
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
    beq lbl_fn_802E84C8_00000310
    addic. r0, r3, 0x151c
    beq lbl_fn_802E84C8_000002C4
    lwz r4, 0x151c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802E84C8_000002C4
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802E84C8_000002C4
    bl fn_800897D8
lbl_fn_802E84C8_000002C4:
    addic. r31, r29, 0x1510
    beq lbl_fn_802E84C8_000002E4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802E84C8_000002E4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802E84C8_000002E4:
    addic. r3, r29, 0x14d4
    beq lbl_fn_802E84C8_000002F4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802E84C8_000002F4:
    mr r3, r29
    li r4, 0x0
    bl fn_805A3D00
    cmpwi r30, 0x0
    ble lbl_fn_802E84C8_00000310
    mr r3, r29
    bl dtor_80084684
lbl_fn_802E84C8_00000310:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802E8580(void)
{
    nofralloc
    stwu r1, -0x6a0(r1)
    mflr r0
    stw r0, 0x6a4(r1)
    addi r11, r1, 0x6a0
    bl _savegpr_25
    mr r29, r3
    mr r30, r5
    bl fn_805A3C58
    lis r3, lbl_807873E8@ha
    addi r31, r29, 0x14d4
    addi r3, r3, lbl_807873E8@l
    stw r3, 0x0(r29)
    mr r3, r31
    bl fn_80473E74
    lfs f1, lbl_808847A8
    lis r3, lbl_8078FBB0@ha
    li r28, 0x0
    lfs f0, lbl_808847AC
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x0(r31)
    addi r3, r29, 0x1564
    stw r28, 0x14dc(r29)
    stw r28, 0x14e0(r29)
    stw r28, 0x14e4(r29)
    stw r28, 0x14e8(r29)
    stw r28, 0x14ec(r29)
    stw r28, 0x14f0(r29)
    stw r28, 0x14f8(r29)
    stw r28, 0x14fc(r29)
    stw r28, 0x1500(r29)
    stw r28, 0x1504(r29)
    stw r28, 0x1508(r29)
    stw r28, 0x150c(r29)
    stw r28, 0x1510(r29)
    stw r28, 0x1514(r29)
    stw r28, 0x1524(r29)
    stw r28, 0x1528(r29)
    stfs f1, 0x152c(r29)
    stw r28, 0x1530(r29)
    stw r28, 0x1534(r29)
    stfs f0, 0x1538(r29)
    stw r28, 0x153c(r29)
    stw r28, 0x1540(r29)
    stfs f1, 0x1544(r29)
    stfs f1, 0x1548(r29)
    stfs f1, 0x154c(r29)
    stfs f1, 0x1550(r29)
    stfs f1, 0x1554(r29)
    stfs f1, 0x1558(r29)
    stw r28, 0x155c(r29)
    stw r28, 0x1560(r29)
    bl fn_802377B8
    addi r3, r29, 0x1570
    bl fn_802377B8
    addi r3, r29, 0x157c
    bl fn_802377B8
    addi r3, r29, 0x1588
    bl fn_802377B8
    addi r3, r29, 0x1594
    bl fn_802377B8
    addi r3, r29, 0x15a0
    bl fn_800CB360
    addi r3, r29, 0x15a4
    bl fn_800CB360
    lwz r0, 0x12a4(r29)
    lis r3, lbl_80747F70@ha
    lfs f0, lbl_808847A8
    addi r31, r3, lbl_80747F70@l
    oris r6, r0, 0x60
    lwz r0, 0x958(r29)
    lfs f2, lbl_808847B0
    li r8, 0x1c2
    lfs f1, lbl_808847AC
    li r7, 0x1
    lwz r4, 0x14e0(r29)
    ori r5, r0, 0x10
    lwz r3, 0x14ec(r29)
    addi r27, r1, 0x38
    subf r4, r4, r4
    stw r8, 0x15b8(r29)
    subf r0, r3, r3
    mr r3, r31
    stfs f2, 0x15c4(r29)
    stfs f2, 0x15c8(r29)
    stfs f2, 0x15cc(r29)
    stfs f1, 0x15d0(r29)
    stfs f1, 0x15d4(r29)
    stfs f0, 0x15d8(r29)
    stfs f0, 0x15dc(r29)
    stfs f0, 0x15e0(r29)
    stfs f0, 0x15f0(r29)
    stfs f0, 0x15f4(r29)
    stfs f0, 0x15f8(r29)
    stw r7, 0x1604(r29)
    stw r6, 0x12a4(r29)
    stw r5, 0x958(r29)
    stw r4, 0x14e0(r29)
    stw r0, 0x14ec(r29)
    stw r28, 0x15bc(r29)
    stw r28, 0x15c0(r29)
    stw r28, 0x15e4(r29)
    stw r28, 0x15e8(r29)
    stw r28, 0x15ec(r29)
    stw r28, 0x15fc(r29)
    stw r28, 0x1600(r29)
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
    mr r6, r31
    add r7, r31, r26
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r27, r31, 0x18
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
    addi r3, r30, 0x2c
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
    addi r4, r30, 0x2c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x44
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x44(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
lbl_fn_802E8580_000005E4:
    addi r3, r1, 0x44
    bl fn_8005B3CC
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_802E8580_0000067C
    addi r4, r31, 0x2b
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_802E8580_0000067C
    mr r3, r26
    addi r4, r31, 0x2c
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_802E8580_0000066C
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_802E8580_00000638
    lbz r0, 0x2c(r1)
    clrlwi r25, r0, 25
    b lbl_fn_802E8580_0000063C
lbl_fn_802E8580_00000638:
    lwz r25, 0x30(r1)
lbl_fn_802E8580_0000063C:
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
lbl_fn_802E8580_0000066C:
    addi r3, r1, 0x44
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802E8580_000005E4
lbl_fn_802E8580_0000067C:
    addi r3, r1, 0x20
    addi r4, r1, 0x38
    addi r5, r1, 0x2c
    bl fn_8006AFF8
    lwz r0, 0x20(r1)
    addi r3, r29, 0x14d4
    srwi. r0, r0, 31
    bne lbl_fn_802E8580_000006A4
    addi r4, r1, 0x21
    b lbl_fn_802E8580_000006A8
lbl_fn_802E8580_000006A4:
    lwz r4, 0x28(r1)
lbl_fn_802E8580_000006A8:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r30, lbl_80747F70@ha
    addi r3, r29, 0x1564
    addi r30, r30, lbl_80747F70@l
    addi r4, r30, 0x35
    bl fn_8023780C
    addi r3, r29, 0x1570
    addi r4, r30, 0x4a
    bl fn_8023780C
    addi r3, r29, 0x157c
    addi r4, r30, 0x5f
    bl fn_8023780C
    addi r3, r29, 0x1588
    addi r4, r30, 0x75
    bl fn_8023780C
    addi r3, r29, 0x1594
    addi r4, r30, 0x8a
    bl fn_8023780C
    lwz r0, 0x14cc(r29)
    oris r0, r0, 0x4000
    stw r0, 0x14cc(r29)
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802E8580_0000071C
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_802E8580_0000071C:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802E8580_00000730
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_802E8580_00000730:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802E8580_00000744
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_802E8580_00000744:
    addi r11, r1, 0x6a0
    mr r3, r29
    bl _restgpr_25
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}

asm void fn_802E89B0(void)
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
    beq lbl_fn_802E89B0_00000918
    lis r5, lbl_807873E8@ha
    li r4, 0x5
    addi r5, r5, lbl_807873E8@l
    stw r5, 0x0(r3)
    li r5, 0x0
    addi r3, r3, 0x15a0
    bl fn_800CB5C8
    addi r3, r29, 0x15a4
    li r4, 0x5
    li r5, 0x0
    bl fn_800CB5C8
    addic. r0, r29, 0x15bc
    beq lbl_fn_802E89B0_000007D8
    lwz r4, 0x15bc(r29)
    cmpwi r4, 0x0
    beq lbl_fn_802E89B0_000007D8
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802E89B0_000007D8
    bl fn_800897D8
lbl_fn_802E89B0_000007D8:
    addi r3, r29, 0x15a4
    li r4, -0x1
    bl fn_800CB3A0
    addi r3, r29, 0x15a0
    li r4, -0x1
    bl fn_800CB3A0
    addic. r31, r29, 0x1594
    beq lbl_fn_802E89B0_00000810
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802E89B0_00000810
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802E89B0_00000810:
    addic. r31, r29, 0x1588
    beq lbl_fn_802E89B0_00000830
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802E89B0_00000830
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802E89B0_00000830:
    addic. r31, r29, 0x157c
    beq lbl_fn_802E89B0_00000850
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802E89B0_00000850
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802E89B0_00000850:
    addic. r31, r29, 0x1570
    beq lbl_fn_802E89B0_00000870
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802E89B0_00000870
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802E89B0_00000870:
    addic. r31, r29, 0x1564
    beq lbl_fn_802E89B0_00000890
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802E89B0_00000890
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802E89B0_00000890:
    addic. r4, r29, 0x14e8
    beq lbl_fn_802E89B0_000008C0
    beq lbl_fn_802E89B0_000008C0
    beq lbl_fn_802E89B0_000008C0
    beq lbl_fn_802E89B0_000008C0
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802E89B0_000008C0
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802E89B0_000008C0:
    addic. r4, r29, 0x14dc
    beq lbl_fn_802E89B0_000008EC
    beq lbl_fn_802E89B0_000008EC
    beq lbl_fn_802E89B0_000008EC
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802E89B0_000008EC
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802E89B0_000008EC:
    addic. r3, r29, 0x14d4
    beq lbl_fn_802E89B0_000008FC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802E89B0_000008FC:
    mr r3, r29
    li r4, 0x0
    bl fn_805A3D00
    cmpwi r30, 0x0
    ble lbl_fn_802E89B0_00000918
    mr r3, r29
    bl dtor_80084684
lbl_fn_802E89B0_00000918:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802E8B88(void)
{
    nofralloc
    stwu r1, -0x6d0(r1)
    mflr r0
    stw r0, 0x6d4(r1)
    addi r11, r1, 0x6d0
    bl _savegpr_14
    mr r15, r3
    addi r3, r3, 0x1564
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802E8B88_00001324
    lwz r3, 0x1438(r15)
    cmpwi r3, 0x0
    beq lbl_fn_802E8B88_0000097C
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_802E8B88_00001324
lbl_fn_802E8B88_0000097C:
    addi r3, r15, 0x1570
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802E8B88_00001324
    addi r3, r15, 0x157c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802E8B88_00001324
    addi r3, r15, 0x1588
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802E8B88_00001324
    addi r3, r15, 0x1594
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802E8B88_00001324
    addi r3, r15, 0x14d4
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_802E8B88_00001324
    mr r3, r15
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_802E8B88_00001324
    mr r3, r15
    bl fn_802EC38C
    addi r3, r15, 0x14d4
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_802E8B88_000012E0
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_802E8B88_000012E0
    lwz r0, 0x10d8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802E8B88_000012E0
    addi r3, r15, 0x14d4
    bl fn_8047059C
    mr r16, r3
    addi r3, r15, 0x14d4
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r21, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x48(r1)
    mr r14, r3
    addi r3, r1, 0x58
    stw r21, 0x4c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r21, 0x50(r1)
    stw r21, 0x54(r1)
    stw r21, 0x678(r1)
    bl memset
    addi r3, r1, 0x658
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x48(r1)
    mr r4, r14
    mr r5, r16
    addi r3, r1, 0x48
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x48
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x48(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r3, __files@ha
    lis r4, lbl_80747F70@ha
    addi r20, r1, 0x34
    addi r17, r1, 0x20
    addi r23, r4, lbl_80747F70@l
    addi r14, r3, __files@l
    lis r25, 0xcccd
    lis r22, 0x4000
    lis r24, 0x1555
    lis r26, 0x2aab
    lis r31, 0x1000
lbl_fn_802E8B88_00000AC4:
    addi r3, r1, 0x48
    bl fn_8005B3CC
    mr r16, r3
    addi r4, r23, 0xa3
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E8B88_00000D78
lbl_fn_802E8B88_00000AE0:
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC12C
    lwz r4, lbl_8087F430
    mr r19, r3
    li r5, 0x0
    li r6, 0x0
    lwz r4, 0x10d8(r4)
    lwz r0, 0x78(r4)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802E8B88_00000B38
lbl_fn_802E8B88_00000B10:
    lwz r7, 0x7c(r4)
    lwzx r0, r7, r6
    cmpw r3, r0
    bne lbl_fn_802E8B88_00000B2C
    mulli r0, r5, 0x28
    add r27, r7, r0
    b lbl_fn_802E8B88_00000B3C
lbl_fn_802E8B88_00000B2C:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_802E8B88_00000B10
lbl_fn_802E8B88_00000B38:
    li r27, 0x0
lbl_fn_802E8B88_00000B3C:
    cmpwi r27, 0x0
    beq lbl_fn_802E8B88_00000D6C
    lwz r4, 0x14ec(r15)
    lwz r3, 0x14f0(r15)
    cmplw r4, r3
    bge lbl_fn_802E8B88_00000B70
    addi r4, r4, 0x1
    lwz r3, 0x14e8(r15)
    slwi r0, r4, 2
    stw r4, 0x14ec(r15)
    add r3, r3, r0
    stw r27, -0x4(r3)
    b lbl_fn_802E8B88_00000D6C
lbl_fn_802E8B88_00000B70:
    subi r0, r22, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_802E8B88_00000B94
    addi r4, r23, 0xb0
    addi r3, r14, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802E8B88_00000B94:
    lwz r3, 0x14ec(r15)
    addi r4, r15, 0x14f0
    lwz r18, 0x14f0(r15)
    subi r0, r22, 0x1
    addi r3, r3, 0x1
    stw r21, 0x34(r1)
    subf r3, r18, r3
    subf r0, r18, r0
    cmplw r3, r0
    stw r21, 0x38(r1)
    stw r21, 0x3c(r1)
    stw r4, 0x40(r1)
    stw r21, 0x44(r1)
    stw r3, 0x14(r1)
    ble lbl_fn_802E8B88_00000BE4
    addi r4, r23, 0xb0
    addi r3, r14, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802E8B88_00000BE4:
    addi r0, r24, 0x5555
    cmplw r18, r0
    bge lbl_fn_802E8B88_00000C2C
    addi r4, r18, 0x1
    subi r5, r25, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x14(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x1c
    srwi r4, r4, 2
    stw r4, 0x1c(r1)
    cmplw r4, r0
    bge lbl_fn_802E8B88_00000C20
    addi r3, r1, 0x14
lbl_fn_802E8B88_00000C20:
    lwz r0, 0x0(r3)
    add r18, r18, r0
    b lbl_fn_802E8B88_00000C68
lbl_fn_802E8B88_00000C2C:
    subi r0, r26, 0x5556
    cmplw r18, r0
    bge lbl_fn_802E8B88_00000C64
    addi r3, r18, 0x1
    lwz r0, 0x14(r1)
    srwi r3, r3, 1
    stw r3, 0x18(r1)
    cmplw r3, r0
    addi r3, r1, 0x18
    bge lbl_fn_802E8B88_00000C58
    addi r3, r1, 0x14
lbl_fn_802E8B88_00000C58:
    lwz r0, 0x0(r3)
    add r18, r18, r0
    b lbl_fn_802E8B88_00000C68
lbl_fn_802E8B88_00000C64:
    subi r18, r22, 0x1
lbl_fn_802E8B88_00000C68:
    subi r0, r22, 0x1
    cmplw r18, r0
    ble lbl_fn_802E8B88_00000C88
    addi r4, r23, 0xb0
    addi r3, r14, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802E8B88_00000C88:
    slwi r3, r18, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_802E8B88_00000CB4
    lis r4, lbl_80775A88@ha
    addi r3, r14, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802E8B88_00000CB4:
    lwz r0, 0x14ec(r15)
    lwz r3, 0x38(r1)
    slwi r6, r0, 2
    stw r18, 0x3c(r1)
    addi r4, r3, 0x1
    slwi r5, r3, 2
    add r3, r28, r6
    stw r4, 0x38(r1)
    stwx r27, r5, r3
    lwz r3, 0x14ec(r15)
    lwz r27, 0x14e8(r15)
    slwi r3, r3, 2
    add r3, r27, r3
    mr r4, r27
    subf r3, r27, r3
    srawi r3, r3, 2
    addze r18, r3
    subf r0, r18, r0
    stw r0, 0x44(r1)
    slwi r29, r18, 2
    slwi r0, r0, 2
    mr r5, r29
    add r3, r28, r0
    bl memcpy
    mr r3, r27
    mr r5, r29
    li r4, 0x0
    bl memset
    lwz r0, 0x38(r1)
    cmpwi r20, 0x0
    lwz r3, 0x14e8(r15)
    add r5, r0, r18
    mr r0, r28
    lwz r6, 0x14f0(r15)
    lwz r4, 0x3c(r1)
    stw r4, 0x14f0(r15)
    stw r6, 0x3c(r1)
    stw r0, 0x14e8(r15)
    stw r3, 0x34(r1)
    stw r5, 0x14ec(r15)
    stw r21, 0x38(r1)
    beq lbl_fn_802E8B88_00000D6C
    cmpwi r3, 0x0
    beq lbl_fn_802E8B88_00000D6C
    stw r21, 0x38(r1)
    bl dtor_80084684
lbl_fn_802E8B88_00000D6C:
    cmpwi r19, 0x0
    bne lbl_fn_802E8B88_00000AE0
    b lbl_fn_802E8B88_00001040
lbl_fn_802E8B88_00000D78:
    mr r3, r16
    addi r4, r23, 0xc4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E8B88_00001040
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r27, r3
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r28, r3
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r29, r3
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC12C
    lwz r5, 0x14e0(r15)
    mr r30, r3
    lwz r4, 0x14e4(r15)
    cmplw r5, r4
    bge lbl_fn_802E8B88_00000E04
    addi r5, r5, 0x1
    lwz r4, 0x14dc(r15)
    subi r0, r5, 0x1
    stw r5, 0x14e0(r15)
    slwi r0, r0, 4
    stwux r27, r4, r0
    stw r28, 0x4(r4)
    stw r29, 0x8(r4)
    stw r3, 0xc(r4)
    b lbl_fn_802E8B88_00001040
lbl_fn_802E8B88_00000E04:
    subi r0, r31, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_802E8B88_00000E28
    addi r4, r23, 0xb0
    addi r3, r14, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802E8B88_00000E28:
    lwz r3, 0x14e0(r15)
    addi r4, r15, 0x14e4
    lwz r18, 0x14e4(r15)
    subi r0, r31, 0x1
    addi r3, r3, 0x1
    stw r21, 0x20(r1)
    subf r3, r18, r3
    subf r0, r18, r0
    cmplw r3, r0
    stw r21, 0x24(r1)
    stw r21, 0x28(r1)
    stw r4, 0x2c(r1)
    stw r21, 0x30(r1)
    stw r3, 0x10(r1)
    ble lbl_fn_802E8B88_00000E78
    addi r4, r23, 0xb0
    addi r3, r14, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802E8B88_00000E78:
    lis r3, 0x555
    addi r0, r3, 0x5555
    cmplw r18, r0
    bge lbl_fn_802E8B88_00000EC4
    addi r4, r18, 0x1
    subi r5, r25, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x10(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_802E8B88_00000EB8
    addi r3, r1, 0x10
lbl_fn_802E8B88_00000EB8:
    lwz r0, 0x0(r3)
    add r19, r18, r0
    b lbl_fn_802E8B88_00000F04
lbl_fn_802E8B88_00000EC4:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r18, r0
    bge lbl_fn_802E8B88_00000F00
    addi r3, r18, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_802E8B88_00000EF4
    addi r3, r1, 0x10
lbl_fn_802E8B88_00000EF4:
    lwz r0, 0x0(r3)
    add r19, r18, r0
    b lbl_fn_802E8B88_00000F04
lbl_fn_802E8B88_00000F00:
    subi r19, r31, 0x1
lbl_fn_802E8B88_00000F04:
    subi r0, r31, 0x1
    cmplw r19, r0
    ble lbl_fn_802E8B88_00000F24
    addi r4, r23, 0xb0
    addi r3, r14, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802E8B88_00000F24:
    slwi r3, r19, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r18, r3
    bne lbl_fn_802E8B88_00000F50
    lis r4, lbl_80787548@ha
    addi r3, r14, 0xa0
    addi r4, r4, lbl_80787548@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802E8B88_00000F50:
    lwz r5, 0x14e0(r15)
    lwz r4, 0x24(r1)
    slwi r0, r5, 4
    stw r18, 0x20(r1)
    add r3, r18, r0
    slwi r0, r4, 4
    addi r4, r4, 0x1
    stwx r27, r3, r0
    add r6, r0, r3
    stw r28, 0x4(r6)
    stw r29, 0x8(r6)
    stw r30, 0xc(r6)
    lwz r0, 0x14e0(r15)
    lwz r7, 0x14dc(r15)
    slwi r0, r0, 4
    stw r19, 0x28(r1)
    add r6, r7, r0
    addi r0, r6, 0xf
    stw r5, 0x30(r1)
    subf r0, r7, r0
    srwi r0, r0, 4
    stw r4, 0x24(r1)
    mtctr r0
    cmplw r6, r7
    ble lbl_fn_802E8B88_00000FFC
lbl_fn_802E8B88_00000FB4:
    subic. r3, r3, 0x10
    subi r6, r6, 0x10
    beq lbl_fn_802E8B88_00000FE0
    lwz r0, 0x4(r6)
    lwz r4, 0x0(r6)
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, 0xc(r6)
    lwz r4, 0x8(r6)
    stw r4, 0x8(r3)
    stw r0, 0xc(r3)
lbl_fn_802E8B88_00000FE0:
    lwz r5, 0x30(r1)
    lwz r4, 0x24(r1)
    subi r0, r5, 0x1
    stw r0, 0x30(r1)
    addi r0, r4, 0x1
    stw r0, 0x24(r1)
    bdnz lbl_fn_802E8B88_00000FB4
lbl_fn_802E8B88_00000FFC:
    lwz r0, 0x24(r1)
    cmpwi r17, 0x0
    lwz r6, 0x14e4(r15)
    lwz r5, 0x28(r1)
    lwz r3, 0x14dc(r15)
    lwz r4, 0x20(r1)
    stw r5, 0x14e4(r15)
    stw r6, 0x28(r1)
    stw r4, 0x14dc(r15)
    stw r3, 0x20(r1)
    stw r0, 0x14e0(r15)
    stw r21, 0x24(r1)
    beq lbl_fn_802E8B88_00001040
    cmpwi r3, 0x0
    beq lbl_fn_802E8B88_00001040
    stw r21, 0x24(r1)
    bl dtor_80084684
lbl_fn_802E8B88_00001040:
    mr r3, r16
    addi r4, r23, 0xcf
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E8B88_00001088
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x15e4(r15)
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x15e8(r15)
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x15ec(r15)
    b lbl_fn_802E8B88_000012D0
lbl_fn_802E8B88_00001088:
    mr r3, r16
    addi r4, r23, 0xdb
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E8B88_000010DC
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80683B54
    frsp f0, f1
    addi r3, r1, 0x48
    stfs f0, 0x15d8(r15)
    bl fn_8005B3CC
    bl fn_80683B54
    frsp f0, f1
    addi r3, r1, 0x48
    stfs f0, 0x15dc(r15)
    bl fn_8005B3CC
    bl fn_80683B54
    frsp f0, f1
    stfs f0, 0x15e0(r15)
    b lbl_fn_802E8B88_000012D0
lbl_fn_802E8B88_000010DC:
    mr r3, r16
    addi r4, r23, 0xe8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E8B88_00001108
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80683B54
    frsp f0, f1
    stfs f0, 0x15f8(r15)
    b lbl_fn_802E8B88_000012D0
lbl_fn_802E8B88_00001108:
    mr r3, r16
    addi r4, r23, 0xf7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E8B88_00001130
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x15fc(r15)
    b lbl_fn_802E8B88_000012D0
lbl_fn_802E8B88_00001130:
    mr r3, r16
    addi r4, r23, 0x105
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E8B88_00001158
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1600(r15)
    b lbl_fn_802E8B88_000012D0
lbl_fn_802E8B88_00001158:
    mr r3, r16
    addi r4, r23, 0x113
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E8B88_00001184
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80683B54
    frsp f0, f1
    stfs f0, 0x15f0(r15)
    b lbl_fn_802E8B88_000012D0
lbl_fn_802E8B88_00001184:
    mr r3, r16
    addi r4, r23, 0x11f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E8B88_000011B0
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80683B54
    frsp f0, f1
    stfs f0, 0x15f4(r15)
    b lbl_fn_802E8B88_000012D0
lbl_fn_802E8B88_000011B0:
    mr r3, r16
    addi r4, r23, 0x12b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E8B88_000011D8
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x15a8(r15)
    b lbl_fn_802E8B88_000012D0
lbl_fn_802E8B88_000011D8:
    mr r3, r16
    addi r4, r23, 0x13c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E8B88_00001200
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x15ac(r15)
    b lbl_fn_802E8B88_000012D0
lbl_fn_802E8B88_00001200:
    mr r3, r16
    addi r4, r23, 0x14e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E8B88_00001228
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1604(r15)
    b lbl_fn_802E8B88_000012D0
lbl_fn_802E8B88_00001228:
    mr r3, r16
    addi r4, r23, 0x161
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E8B88_00001250
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x15b8(r15)
    b lbl_fn_802E8B88_000012D0
lbl_fn_802E8B88_00001250:
    mr r3, r16
    addi r4, r23, 0x16b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E8B88_0000127C
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x150c(r15)
    b lbl_fn_802E8B88_000012D0
lbl_fn_802E8B88_0000127C:
    mr r3, r16
    addi r4, r23, 0x178
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E8B88_000012A8
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1514(r15)
    b lbl_fn_802E8B88_000012D0
lbl_fn_802E8B88_000012A8:
    mr r3, r16
    addi r4, r23, 0x186
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E8B88_000012D0
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1510(r15)
lbl_fn_802E8B88_000012D0:
    addi r3, r1, 0x48
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802E8B88_00000AC4
lbl_fn_802E8B88_000012E0:
    lwz r0, 0x7ec(r15)
    lwz r3, 0x1438(r15)
    ori r0, r0, 0x1c0
    oris r0, r0, 0x1
    cmpwi r3, 0x0
    ori r0, r0, 0xc015
    oris r0, r0, 0x300
    stw r0, 0x7ec(r15)
    beq lbl_fn_802E8B88_0000131C
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r15)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_802E8B88_0000131C:
    li r3, 0x1
    b lbl_fn_802E8B88_00001328
lbl_fn_802E8B88_00001324:
    li r3, 0x0
lbl_fn_802E8B88_00001328:
    addi r11, r1, 0x6d0
    bl _restgpr_14
    lwz r0, 0x6d4(r1)
    mtlr r0
    addi r1, r1, 0x6d0
    blr
}

asm void fn_802E9590(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    mr r31, r3
    stw r30, 0x108(r1)
    stw r29, 0x104(r1)
    lwz r4, 0x1524(r3)
    lwz r0, 0xd1c(r3)
    cmpwi r4, 0x0
    stw r0, 0x14f4(r3)
    ble lbl_fn_802E9590_00001394
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xf
    beq lbl_fn_802E9590_00001394
    subi r0, r4, 0x1
    stw r0, 0x1524(r3)
lbl_fn_802E9590_00001394:
    lwz r0, 0x1528(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802E9590_00001428
    lwz r0, 0x1530(r3)
    cmpwi r0, 0x1
    bne lbl_fn_802E9590_000013E4
    lwz r0, 0x1600(r3)
    lwz r4, 0x1534(r3)
    mulli r0, r0, 0x1e
    lfs f0, lbl_808847A8
    addi r4, r4, 0x1
    stfs f0, 0x152c(r3)
    cmpw r4, r0
    stw r4, 0x1534(r3)
    blt lbl_fn_802E9590_00001428
    li r4, 0x2
    li r0, 0x0
    stw r4, 0x1530(r3)
    stw r0, 0x1534(r3)
    b lbl_fn_802E9590_00001428
lbl_fn_802E9590_000013E4:
    cmpwi r0, 0x2
    bne lbl_fn_802E9590_00001420
    lwz r0, 0x15fc(r3)
    lwz r4, 0x1534(r3)
    mulli r0, r0, 0x1e
    lfs f0, 0x15f8(r3)
    addi r4, r4, 0x1
    stfs f0, 0x152c(r3)
    cmpw r4, r0
    stw r4, 0x1534(r3)
    blt lbl_fn_802E9590_00001428
    li r0, 0x0
    stw r0, 0x1530(r3)
    stw r0, 0x1534(r3)
    b lbl_fn_802E9590_00001428
lbl_fn_802E9590_00001420:
    lfs f0, lbl_808847A8
    stfs f0, 0x152c(r3)
lbl_fn_802E9590_00001428:
    lwz r0, 0xd18(r3)
    li r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_802E9590_00001444
    lwz r0, 0xd1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802E9590_00001448
lbl_fn_802E9590_00001444:
    li r4, 0x0
lbl_fn_802E9590_00001448:
    cmpwi r4, 0x0
    bne lbl_fn_802E9590_00001480
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    addi r3, r31, 0x15a0
    li r4, 0x5
    li r5, 0x0
    bl fn_800CB5C8
    addi r3, r31, 0x15a4
    li r4, 0x5
    li r5, 0x0
    bl fn_800CB5C8
    b lbl_fn_802E9590_00001AA0
lbl_fn_802E9590_00001480:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802E9590_0000157C
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_802E9590_00001508
    lwz r0, 0x14f8(r3)
    cmpwi r0, 0x1
    bne lbl_fn_802E9590_00001508
    li r4, 0x5
    li r5, 0x0
    addi r3, r3, 0x15a0
    bl fn_800CB5C8
    addi r3, r31, 0x15a4
    bl fn_800CB58C
    cmpwi r3, 0x0
    bne lbl_fn_802E9590_00001564
    lis r4, lbl_80747F70@ha
    lfs f1, lbl_808847AC
    addi r4, r4, lbl_80747F70@l
    addi r3, r1, 0x14
    addi r4, r4, 0x192
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r31, 0x15a4
    addi r4, r1, 0x14
    bl fn_800CB440
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_802E9590_00001564
lbl_fn_802E9590_00001508:
    li r4, 0x5
    li r5, 0x0
    addi r3, r3, 0x15a4
    bl fn_800CB5C8
    addi r3, r31, 0x15a0
    bl fn_800CB58C
    cmpwi r3, 0x0
    bne lbl_fn_802E9590_00001564
    lis r4, lbl_80747F70@ha
    lfs f1, lbl_808847AC
    addi r4, r4, lbl_80747F70@l
    addi r3, r1, 0x10
    addi r4, r4, 0x19f
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r31, 0x15a0
    addi r4, r1, 0x10
    bl fn_800CB440
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_802E9590_00001564:
    addi r3, r31, 0x15a0
    addi r4, r31, 0x528
    bl fn_800CB6E4
    addi r3, r31, 0x15a4
    addi r4, r31, 0x528
    bl fn_800CB6E4
lbl_fn_802E9590_0000157C:
    lwz r0, 0x14f4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802E9590_00001AA0
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_802E9590_000015C8
    cmpwi r0, 0x7
    beq lbl_fn_802E9590_0000186C
    cmpwi r0, 0x8
    beq lbl_fn_802E9590_00001878
    cmpwi r0, 0xd
    beq lbl_fn_802E9590_00001884
    cmpwi r0, 0xe
    beq lbl_fn_802E9590_00001890
    cmpwi r0, 0xf
    beq lbl_fn_802E9590_000019BC
    cmpwi r0, 0x2
    beq lbl_fn_802E9590_00001A0C
    b lbl_fn_802E9590_00001A24
lbl_fn_802E9590_000015C8:
    lfs f30, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_802E9590_00001610
    li r30, 0x0
    stw r30, 0x14f8(r31)
    stw r30, 0x14fc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_802E9590_00001AA0
lbl_fn_802E9590_00001610:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_808847B4
    fcmpo cr0, f0, f3
    cror eq, lt, eq
    bne lbl_fn_802E9590_0000165C
    lfs f0, lbl_808847B8
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802E9590_0000165C
    lwz r8, 0x590(r31)
    mr r6, r31
    lwz r7, 0x1510(r31)
    li r4, 0x0
    lwz r3, lbl_8087F048
    li r5, 0x0
    lfs f1, lbl_808847A8
    li r9, 0x3c
    li r10, 0x5
    bl fn_800F8C6C
lbl_fn_802E9590_0000165C:
    lwz r4, 0x14f4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_802E9590_00001AA0
    lfs f3, 0x530(r4)
    addi r29, r1, 0x30
    lfs f0, 0x530(r31)
    addi r5, r1, 0x18
    lfs f5, 0x52c(r4)
    mr r3, r29
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r4)
    mr r4, r29
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x1c(r1)
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x20(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x38(r1)
    bl fn_805F98D0
    lfs f2, 0x38(r1)
    addi r30, r1, 0x24
    psq_l f1, 0x0(r29), 0, 0
    fabs f3, f2
    lfs f0, lbl_808847BC
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x2c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802E9590_00001704
    lfs f3, 0x24(r1)
    lfs f0, lbl_808847A8
    fcmpo cr0, f3, f0
    ble lbl_fn_802E9590_000016F8
    lfs f0, lbl_808847C0
    b lbl_fn_802E9590_000016FC
lbl_fn_802E9590_000016F8:
    lfs f0, lbl_808847C4
lbl_fn_802E9590_000016FC:
    stfs f0, 0x40(r1)
    b lbl_fn_802E9590_00001718
lbl_fn_802E9590_00001704:
    frsp f2, f2
    lfs f1, 0x24(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x40(r1)
lbl_fn_802E9590_00001718:
    lfs f0, 0x40(r1)
    addi r3, r1, 0xc8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808847A8
    addi r4, r1, 0x48
    lfs f4, 0xd0(r1)
    mr r5, r4
    lfs f5, 0xcc(r1)
    addi r3, r1, 0x88
    lfs f6, 0xc8(r1)
    lfs f7, 0xe0(r1)
    lfs f8, 0xdc(r1)
    lfs f9, 0xd8(r1)
    lfs f10, 0xf0(r1)
    lfs f11, 0xec(r1)
    lfs f12, 0xe8(r1)
    lfs f13, 0xf4(r1)
    lfs f31, 0xe4(r1)
    lfs f30, 0xd4(r1)
    lfs f0, lbl_808847AC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x2c(r1)
    stfs f3, 0xb8(r1)
    stfs f3, 0xbc(r1)
    stfs f3, 0xc0(r1)
    stfs f0, 0xc4(r1)
    stfs f6, 0x78(r1)
    stfs f5, 0x7c(r1)
    stfs f4, 0x80(r1)
    stfs f6, 0x88(r1)
    stfs f5, 0x8c(r1)
    stfs f4, 0x90(r1)
    stfs f9, 0x6c(r1)
    stfs f8, 0x70(r1)
    stfs f7, 0x74(r1)
    stfs f9, 0x98(r1)
    stfs f8, 0x9c(r1)
    stfs f7, 0xa0(r1)
    stfs f12, 0x60(r1)
    stfs f11, 0x64(r1)
    stfs f10, 0x68(r1)
    stfs f12, 0xa8(r1)
    stfs f11, 0xac(r1)
    stfs f10, 0xb0(r1)
    stfs f30, 0x54(r1)
    stfs f31, 0x58(r1)
    stfs f13, 0x5c(r1)
    stfs f30, 0x94(r1)
    stfs f31, 0xa4(r1)
    stfs f13, 0xb4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x50(r1)
    bl fn_805F9750
    lfs f2, 0x50(r1)
    lfs f0, lbl_808847BC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802E9590_00001834
    lfs f3, 0x4c(r1)
    lfs f0, lbl_808847A8
    fcmpo cr0, f3, f0
    ble lbl_fn_802E9590_00001824
    lfs f0, lbl_808847C0
    b lbl_fn_802E9590_00001828
lbl_fn_802E9590_00001824:
    lfs f0, lbl_808847C4
lbl_fn_802E9590_00001828:
    fneg f0, f0
    stfs f0, 0x3c(r1)
    b lbl_fn_802E9590_00001848
lbl_fn_802E9590_00001834:
    lfs f1, 0x4c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x3c(r1)
lbl_fn_802E9590_00001848:
    addi r3, r1, 0x3c
    lfs f2, lbl_808847A8
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0x28(r1)
    stfs f2, 0x44(r1)
    stfs f2, 0x2c(r1)
    stfs f0, 0x538(r31)
    b lbl_fn_802E9590_00001AA0
lbl_fn_802E9590_0000186C:
    mr r3, r31
    bl fn_802EAF68
    b lbl_fn_802E9590_00001AA0
lbl_fn_802E9590_00001878:
    mr r3, r31
    bl fn_802EB1F4
    b lbl_fn_802E9590_00001AA0
lbl_fn_802E9590_00001884:
    mr r3, r31
    bl fn_802EB61C
    b lbl_fn_802E9590_00001AA0
lbl_fn_802E9590_00001890:
    lfs f30, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_802E9590_000018DC
    li r30, 0x0
    stw r30, 0x1500(r31)
    stw r30, 0x14f8(r31)
    stw r30, 0x14fc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_802E9590_00001928
lbl_fn_802E9590_000018DC:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_808847C8
    fcmpo cr0, f0, f3
    cror eq, lt, eq
    bne lbl_fn_802E9590_00001928
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_808847A8
    mr r4, r31
    stw r0, 0xc(r1)
    addi r7, r31, 0x528
    lfs f2, lbl_808847AC
    addi r8, r31, 0x534
    lwz r3, lbl_8087F048
    li r9, 0x0
    lwz r5, 0x1514(r31)
    li r10, 0x1e
    lwz r6, 0x590(r31)
    bl fn_800FAB80
lbl_fn_802E9590_00001928:
    lwz r0, 0x1528(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802E9590_00001AA0
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_808847CC
    fcmpo cr0, f0, f3
    cror eq, lt, eq
    bne lbl_fn_802E9590_00001AA0
    lfs f0, lbl_808847D0
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802E9590_00001AA0
    lwz r29, lbl_8087F048
    mr r3, r29
    bl fn_800F8548
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r6, r3
    lfs f1, lbl_808847A8
    stw r0, 0xc(r1)
    mr r3, r29
    lfs f2, lbl_808847AC
    mr r4, r31
    lwz r5, 0x1514(r31)
    addi r7, r31, 0x528
    addi r8, r31, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lwz r3, lbl_8087F430
    li r4, 0x5
    li r5, 0x1
    bl fn_80370AE4
    li r0, 0x0
    stw r0, 0x1528(r31)
    stw r0, 0x1540(r31)
    b lbl_fn_802E9590_00001AA0
lbl_fn_802E9590_000019BC:
    lwz r3, 0x14fc(r31)
    lwz r0, 0x15b8(r31)
    cmpw r3, r0
    blt lbl_fn_802E9590_00001AA0
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
    li r30, 0x0
    stw r30, 0x14f8(r31)
    stw r30, 0x14fc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_802E9590_00001AA0
lbl_fn_802E9590_00001A0C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_802E9590_00001AA0
lbl_fn_802E9590_00001A24:
    lwz r3, 0x55c(r31)
    subi r0, r3, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_802E9590_00001A84
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x1500(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802E9590_00001A70
    lwz r0, 0x1560(r31)
    mr r3, r31
    lwz r4, 0x14e8(r31)
    li r5, 0x0
    slwi r0, r0, 2
    lwzx r4, r4, r0
    lwz r4, 0x0(r4)
    bl fn_8017039C
    b lbl_fn_802E9590_00001A84
lbl_fn_802E9590_00001A70:
    lwz r4, 0x14f4(r31)
    mr r3, r31
    lfs f1, lbl_808847D4
    li r5, 0x0
    bl fn_80170A20
lbl_fn_802E9590_00001A84:
    mr r3, r31
    bl fn_802EA490
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x11c(r12)
    mtctr r12
    bctrl
lbl_fn_802E9590_00001AA0:
    lwz r4, 0x14fc(r31)
    mr r3, r31
    addi r0, r4, 0x1
    stw r0, 0x14fc(r31)
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    lwz r0, 0x134(r1)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r29, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}
