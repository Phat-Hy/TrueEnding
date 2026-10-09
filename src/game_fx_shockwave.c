#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D124(void);
extern void fn_8000D760(void);
extern void fn_8000E18C(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8004203C(void);
extern void fn_80057A68(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AFF8(void);
extern void fn_800897D8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_800DB3EC(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800EC204(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_80121F00(void);
extern void fn_8012F034(void);
extern void fn_8013322C(void);
extern void fn_80133B30(void);
extern void fn_8013655C(void);
extern void fn_8013C504(void);
extern void fn_80145334(void);
extern void fn_8014C540(void);
extern void fn_8016E970(void);
extern void fn_80179D44(void);
extern void fn_80219E6C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_80244CCC(void);
extern void fn_80288390(void);
extern void fn_80288E30(void);
extern void fn_802953C8(void);
extern void fn_80296268(void);
extern void fn_80296B8C(void);
extern void fn_80296DB8(void);
extern void fn_80297114(void);
extern void fn_80297474(void);
extern void fn_8029795C(void);
extern void fn_80298580(void);
extern void fn_80298850(void);
extern void fn_80298B10(void);
extern void fn_80298E98(void);
extern void fn_80299134(void);
extern void fn_802992F8(void);
extern void fn_802995D4(void);
extern void fn_802997B8(void);
extern void fn_80299A7C(void);
extern void fn_8029A0A8(void);
extern void fn_8029B704(void);
extern void fn_8029C564(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_80373148(void);
extern void fn_803C1560(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_804A04AC(void);
extern void fn_8054A340(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_8068B100(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_80785918[];
extern u8 lbl_80745314[];
extern u8 lbl_80745818[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80785910[];
extern u8 lbl_80785978[];
extern u8 lbl_8078FBB0[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80883A98;
extern u32 lbl_80883AA8;
extern u32 lbl_80883ABC;
extern u32 lbl_80883B04;
extern u32 lbl_80883BD8;
extern u32 lbl_80883BDC;
extern u32 lbl_80883BE0;
extern u32 lbl_80883BE8;
extern u32 lbl_80883BEC;
extern u32 lbl_80883BF0;
extern u32 lbl_80883BF4;
extern u32 lbl_80883BF8;
extern u32 lbl_80883BFC;
extern u32 lbl_80883C00;
extern u32 lbl_80883C04;
extern u32 lbl_80883C08;
extern u32 lbl_80883C0C;
extern u32 lbl_80883C10;

/* Function declarations */
void fn_80293368(void);
void fn_8029350C(void);
void fn_8029358C(void);
void fn_80293694(void);
void fn_802936A4(void);
void fn_802936AC(void);
void fn_802936B4(void);
void fn_80293730(void);
void fn_80293738(void);
void fn_80293BC8(void);
void fn_80293E30(void);
void fn_802946BC(void);

asm void fn_80293368(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r5, lbl_80745314@ha
    stw r0, 0x44(r1)
    addi r5, r5, lbl_80745314@l
    stw r31, 0x3c(r1)
    mr r31, r4
    addi r4, r5, 0x349
    li r5, 0x0
    stw r30, 0x38(r1)
    mr r30, r3
    addi r3, r3, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80293368_00000044
    li r4, 0x0
    b lbl_fn_80293368_00000050
lbl_fn_80293368_00000044:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_80293368_00000050:
    lfs f0, 0x1c(r4)
    lis r3, lbl_80745314@ha
    lfs f3, 0xc(r4)
    addi r6, r1, 0x2c
    lfs f2, 0x2c(r4)
    addi r3, r3, lbl_80745314@l
    stfs f3, 0x2c(r1)
    addi r4, r3, 0x31f
    addi r3, r30, 0xb0
    li r5, 0x0
    stfs f0, 0x30(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80293368_000000A0
    li r4, 0x0
    b lbl_fn_80293368_000000AC
lbl_fn_80293368_000000A0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_80293368_000000AC:
    lfs f0, 0x1c(r4)
    lis r3, lbl_80745314@ha
    lfs f3, 0xc(r4)
    addi r6, r1, 0x20
    lfs f2, 0x2c(r4)
    addi r3, r3, lbl_80745314@l
    stfs f3, 0x20(r1)
    addi r4, r3, 0x357
    addi r3, r30, 0xb0
    li r5, 0x0
    stfs f0, 0x24(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x28(r1)
    psq_st f1, 0xc(r31), 0, 0
    stfs f2, 0x14(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80293368_000000FC
    li r4, 0x0
    b lbl_fn_80293368_00000108
lbl_fn_80293368_000000FC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_80293368_00000108:
    lfs f0, 0x1c(r4)
    lis r3, lbl_80745314@ha
    lfs f3, 0xc(r4)
    addi r6, r1, 0x14
    lfs f2, 0x2c(r4)
    addi r3, r3, lbl_80745314@l
    stfs f3, 0x14(r1)
    addi r4, r3, 0x339
    addi r3, r30, 0xb0
    li r5, 0x0
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x18(r31), 0, 0
    stfs f2, 0x20(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80293368_00000158
    li r4, 0x0
    b lbl_fn_80293368_00000164
lbl_fn_80293368_00000158:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_80293368_00000164:
    lfs f0, 0x1c(r4)
    addi r3, r1, 0x8
    lfs f3, 0xc(r4)
    lfs f2, 0x2c(r4)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x24(r31), 0, 0
    stfs f2, 0x2c(r31)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    stfs f2, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8029350C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80745314@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_80745314@l
    stw r31, 0xc(r1)
    mr r31, r4
    addi r4, r5, 0x344
    li r5, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r31, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029350C_000001E8
    li r3, 0x0
    b lbl_fn_8029350C_000001F4
lbl_fn_8029350C_000001E8:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_8029350C_000001F4:
    lfs f0, 0x2c(r3)
    lfs f1, 0x1c(r3)
    lfs f2, 0xc(r3)
    stfs f2, 0x0(r30)
    stfs f1, 0x4(r30)
    stfs f0, 0x8(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8029358C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r5, lbl_80745314@ha
    stw r0, 0x64(r1)
    addi r5, r5, lbl_80745314@l
    stw r31, 0x5c(r1)
    mr r31, r4
    addi r4, r5, 0x301
    li r5, 0x0
    stw r30, 0x58(r1)
    mr r30, r3
    addi r3, r31, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029358C_00000268
    li r5, 0x0
    b lbl_fn_8029358C_00000274
lbl_fn_8029358C_00000268:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_8029358C_00000274:
    lfs f1, 0x1c(r5)
    addi r3, r1, 0x20
    lfs f0, lbl_80883B04
    li r4, 0x79
    lfs f3, 0x2c(r5)
    lfs f4, 0xc(r5)
    fadds f2, f1, f0
    stfs f4, 0x0(r30)
    lfs f1, lbl_80883A98
    stfs f3, 0x8(r30)
    lfs f0, lbl_80883AA8
    stfs f2, 0x4(r30)
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x20
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x10(r1)
    lfs f2, lbl_80883BD8
    lfs f1, 0xc(r1)
    lfs f0, 0x8(r1)
    fmuls f3, f3, f2
    fmuls f4, f1, f2
    lfs f1, 0x4(r30)
    fmuls f5, f0, f2
    lfs f2, 0x0(r30)
    lfs f0, 0x8(r30)
    fadds f1, f1, f4
    fadds f2, f2, f5
    stfs f5, 0x14(r1)
    fadds f0, f0, f3
    stfs f2, 0x0(r30)
    stfs f1, 0x4(r30)
    stfs f0, 0x8(r30)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r0, 0x64(r1)
    stfs f4, 0x18(r1)
    stfs f3, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80293694(void)
{
    nofralloc
    lfs f1, lbl_80883BDC
    lfs f0, 0x538(r3)
    fadds f1, f1, f0
    blr
}

asm void fn_802936A4(void)
{
    nofralloc
    lfs f1, lbl_80883ABC
    blr
}

asm void fn_802936AC(void)
{
    nofralloc
    lfs f1, lbl_80883BE0
    blr
}

asm void fn_802936B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80785910@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r4, 0xb0
    addi r4, r5, lbl_80785910@l
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802936B4_0000038C
    li r3, 0x0
    b lbl_fn_802936B4_00000398
lbl_fn_802936B4_0000038C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_802936B4_00000398:
    lfs f0, 0x2c(r3)
    lfs f1, 0x1c(r3)
    lfs f2, 0xc(r3)
    stfs f2, 0x0(r30)
    stfs f1, 0x4(r30)
    stfs f0, 0x8(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80293730(void)
{
    nofralloc
    lfs f1, lbl_80883B04
    blr
}

asm void fn_80293738(void)
{
    nofralloc
    stwu r1, -0x6a0(r1)
    mflr r0
    stw r0, 0x6a4(r1)
    addi r11, r1, 0x6a0
    bl _savegpr_25
    mr r30, r5
    lwz r5, 0x20(r5)
    mr r29, r3
    bl fn_8035B694
    lis r3, lbl_80785978@ha
    li r28, 0x0
    addi r3, r3, lbl_80785978@l
    li r0, 0x2
    lis r4, fn_80288390@ha
    lis r5, fn_8000D760@ha
    stw r3, 0x0(r29)
    addi r3, r29, 0x1504
    addi r4, r4, fn_80288390@l
    addi r5, r5, fn_8000D760@l
    stw r28, 0x14b0(r29)
    li r6, 0xc
    li r7, 0x2
    stw r28, 0x14b4(r29)
    stw r28, 0x14b8(r29)
    stw r28, 0x14bc(r29)
    stw r28, 0x14c0(r29)
    stw r0, 0x14c4(r29)
    stw r28, 0x14c8(r29)
    stw r28, 0x14cc(r29)
    stw r28, 0x14d0(r29)
    bl fn_806958E0
    lfs f0, lbl_80883BE8
    addi r3, r29, 0x15bc
    stw r28, 0x151c(r29)
    stw r28, 0x1520(r29)
    stw r28, 0x1524(r29)
    stfs f0, 0x152c(r29)
    stw r28, 0x153c(r29)
    stw r28, 0x1540(r29)
    stfs f0, 0x1558(r29)
    stfs f0, 0x155c(r29)
    stfs f0, 0x1560(r29)
    stw r28, 0x1564(r29)
    stw r28, 0x1568(r29)
    stw r28, 0x156c(r29)
    stw r28, 0x1570(r29)
    stw r28, 0x1574(r29)
    stw r28, 0x1578(r29)
    stw r28, 0x157c(r29)
    stw r28, 0x1580(r29)
    stw r28, 0x1584(r29)
    stw r28, 0x15a8(r29)
    stw r28, 0x15ac(r29)
    stw r28, 0x15b0(r29)
    stw r28, 0x15b8(r29)
    bl fn_802377B8
    addi r3, r29, 0x15c8
    bl fn_802377B8
    stw r28, 0x15d4(r29)
    addi r3, r29, 0x15e4
    stw r28, 0x15d8(r29)
    stw r28, 0x15dc(r29)
    stw r28, 0x15e0(r29)
    bl fn_802377B8
    addi r3, r29, 0x15f0
    bl fn_802377B8
    stw r28, 0x15fc(r29)
    addi r3, r29, 0x162c
    stw r28, 0x1600(r29)
    stw r28, 0x1604(r29)
    stw r28, 0x1608(r29)
    stw r28, 0x160c(r29)
    stw r28, 0x1610(r29)
    stw r28, 0x1614(r29)
    stw r28, 0x1618(r29)
    stw r28, 0x161c(r29)
    stw r28, 0x1620(r29)
    stw r28, 0x1624(r29)
    bl fn_802377B8
    lfs f0, lbl_80883BE8
    addi r27, r29, 0x1660
    stw r28, 0x1638(r29)
    mr r3, r27
    stfs f0, 0x163c(r29)
    stfs f0, 0x1640(r29)
    stfs f0, 0x1644(r29)
    stfs f0, 0x1648(r29)
    stfs f0, 0x164c(r29)
    stfs f0, 0x1650(r29)
    bl fn_80473E74
    lwz r0, 0x12a4(r29)
    li r5, 0x23
    lfs f2, lbl_80883BF0
    lis r7, lbl_8078FBB0@ha
    lfs f0, lbl_80883BE8
    li r4, 0x64
    lfs f3, lbl_80883BEC
    addi r7, r7, lbl_8078FBB0@l
    lfs f1, lbl_80883BF4
    oris r0, r0, 0x40
    li r6, 0xa
    stw r7, 0x0(r27)
    lis r3, lbl_80745818@ha
    addi r27, r1, 0x38
    addi r31, r3, lbl_80745818@l
    stfs f3, 0x1674(r29)
    mr r3, r31
    stw r6, 0x1680(r29)
    stw r5, 0x1684(r29)
    stw r5, 0x1688(r29)
    stw r4, 0x16a4(r29)
    stw r4, 0x16a8(r29)
    stfs f2, 0x16b0(r29)
    stfs f2, 0x16b4(r29)
    stfs f1, 0x16c0(r29)
    stfs f0, 0x16c4(r29)
    stfs f0, 0x16c8(r29)
    stfs f2, 0x16cc(r29)
    stw r0, 0x12a4(r29)
    stw r28, 0x1668(r29)
    stw r28, 0x166c(r29)
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
lbl_fn_80293738_000006C4:
    addi r3, r1, 0x44
    bl fn_8005B3CC
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_80293738_0000075C
    addi r4, r31, 0x2b
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80293738_0000075C
    mr r3, r26
    addi r4, r31, 0x2c
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80293738_0000074C
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80293738_00000718
    lbz r0, 0x2c(r1)
    clrlwi r25, r0, 25
    b lbl_fn_80293738_0000071C
lbl_fn_80293738_00000718:
    lwz r25, 0x30(r1)
lbl_fn_80293738_0000071C:
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
lbl_fn_80293738_0000074C:
    addi r3, r1, 0x44
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80293738_000006C4
lbl_fn_80293738_0000075C:
    addi r3, r1, 0x20
    addi r4, r1, 0x38
    addi r5, r1, 0x2c
    bl fn_8006AFF8
    lwz r0, 0x20(r1)
    addi r3, r29, 0x1660
    srwi. r0, r0, 31
    bne lbl_fn_80293738_00000784
    addi r4, r1, 0x21
    b lbl_fn_80293738_00000788
lbl_fn_80293738_00000784:
    lwz r4, 0x28(r1)
lbl_fn_80293738_00000788:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_80883BE8
    lis r30, lbl_80745818@ha
    addi r30, r30, lbl_80745818@l
    stfs f0, 0x1530(r29)
    addi r3, r29, 0x162c
    stfs f0, 0x1534(r29)
    addi r4, r30, 0x35
    stfs f0, 0x1538(r29)
    bl fn_8023780C
    addi r3, r29, 0x15e4
    addi r4, r30, 0x4b
    bl fn_8023780C
    lwz r0, 0x5c0(r29)
    li r3, 0x0
    stw r3, 0x14d4(r29)
    clrlwi r0, r0, 1
    stw r3, 0x14dc(r29)
    stw r3, 0x14e4(r29)
    stw r3, 0x14ec(r29)
    stw r3, 0x14f4(r29)
    stw r3, 0x14fc(r29)
    stw r3, 0x14d8(r29)
    stw r3, 0x14e0(r29)
    stw r3, 0x14e8(r29)
    stw r3, 0x14f0(r29)
    stw r3, 0x14f8(r29)
    stw r3, 0x1500(r29)
    stw r0, 0x5c0(r29)
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80293738_0000081C
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_80293738_0000081C:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80293738_00000830
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_80293738_00000830:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80293738_00000844
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_80293738_00000844:
    addi r11, r1, 0x6a0
    mr r3, r29
    bl _restgpr_25
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}

asm void fn_80293BC8(void)
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
    beq lbl_fn_80293BC8_00000AA8
    addic. r0, r3, 0x1668
    beq lbl_fn_80293BC8_000008AC
    lwz r4, 0x1668(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80293BC8_000008AC
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80293BC8_000008AC
    bl fn_800897D8
lbl_fn_80293BC8_000008AC:
    addic. r3, r30, 0x1660
    beq lbl_fn_80293BC8_000008BC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80293BC8_000008BC:
    addic. r29, r30, 0x162c
    beq lbl_fn_80293BC8_000008DC
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_80293BC8_000008DC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80293BC8_000008DC:
    addic. r4, r30, 0x161c
    beq lbl_fn_80293BC8_0000090C
    beq lbl_fn_80293BC8_0000090C
    beq lbl_fn_80293BC8_0000090C
    beq lbl_fn_80293BC8_0000090C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80293BC8_0000090C
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80293BC8_0000090C:
    addic. r4, r30, 0x1610
    beq lbl_fn_80293BC8_0000093C
    beq lbl_fn_80293BC8_0000093C
    beq lbl_fn_80293BC8_0000093C
    beq lbl_fn_80293BC8_0000093C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80293BC8_0000093C
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80293BC8_0000093C:
    addic. r29, r30, 0x15f0
    beq lbl_fn_80293BC8_0000095C
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_80293BC8_0000095C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80293BC8_0000095C:
    addic. r29, r30, 0x15e4
    beq lbl_fn_80293BC8_0000097C
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_80293BC8_0000097C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80293BC8_0000097C:
    addic. r4, r30, 0x15d4
    beq lbl_fn_80293BC8_000009A8
    beq lbl_fn_80293BC8_000009A8
    beq lbl_fn_80293BC8_000009A8
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80293BC8_000009A8
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80293BC8_000009A8:
    addic. r29, r30, 0x15c8
    beq lbl_fn_80293BC8_000009C8
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_80293BC8_000009C8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80293BC8_000009C8:
    addic. r29, r30, 0x15bc
    beq lbl_fn_80293BC8_000009E8
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_80293BC8_000009E8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80293BC8_000009E8:
    addic. r4, r30, 0x15a8
    beq lbl_fn_80293BC8_00000A14
    beq lbl_fn_80293BC8_00000A14
    beq lbl_fn_80293BC8_00000A14
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80293BC8_00000A14
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80293BC8_00000A14:
    addic. r4, r30, 0x1570
    beq lbl_fn_80293BC8_00000A44
    beq lbl_fn_80293BC8_00000A44
    beq lbl_fn_80293BC8_00000A44
    beq lbl_fn_80293BC8_00000A44
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80293BC8_00000A44
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80293BC8_00000A44:
    addic. r4, r30, 0x1564
    beq lbl_fn_80293BC8_00000A74
    beq lbl_fn_80293BC8_00000A74
    beq lbl_fn_80293BC8_00000A74
    beq lbl_fn_80293BC8_00000A74
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80293BC8_00000A74
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80293BC8_00000A74:
    lis r4, fn_8000D760@ha
    addi r3, r30, 0x1504
    addi r4, r4, fn_8000D760@l
    li r5, 0xc
    li r6, 0x2
    bl fn_806959D8
    mr r3, r30
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r31, 0x0
    ble lbl_fn_80293BC8_00000AA8
    mr r3, r30
    bl dtor_80084684
lbl_fn_80293BC8_00000AA8:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80293E30(void)
{
    nofralloc
    stwu r1, -0x680(r1)
    mflr r0
    stw r0, 0x684(r1)
    addi r11, r1, 0x670
    stfd f31, 0x670(r1)
    psq_st f31, 0x678(r1), 0, 0
    bl _savegpr_27
    mr r27, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00001330
    addi r3, r27, 0x1660
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00001330
    addi r3, r27, 0x15bc
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00001330
    addi r3, r27, 0x15c8
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00001330
    addi r3, r27, 0x162c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00001330
    addi r3, r27, 0x15e4
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00001330
    lfs f1, lbl_80883BF0
    mr r3, r27
    bl fn_80288E30
    lwz r0, 0x7ec(r27)
    ori r0, r0, 0x1c0
    oris r0, r0, 0x1
    ori r0, r0, 0xc219
    oris r0, r0, 0x380
    stw r0, 0x7ec(r27)
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_80293E30_00000B84
    bl fn_80121F00
    bl fn_8013C504
    mr r29, r3
    b lbl_fn_80293E30_00000B88
lbl_fn_80293E30_00000B84:
    li r29, 0x0
lbl_fn_80293E30_00000B88:
    addi r3, r27, 0x1660
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_80293E30_000012C8
    cmpwi r29, 0x0
    beq lbl_fn_80293E30_000012C8
    addi r3, r27, 0x1660
    bl fn_8047059C
    mr r30, r3
    addi r3, r27, 0x1660
    bl fn_80470580
    mr r4, r3
    mr r5, r30
    addi r3, r1, 0x20
    bl fn_8004203C
    lis r30, lbl_80745818@ha
    lfs f31, lbl_80883BE8
    addi r30, r30, lbl_80745818@l
    li r31, 0x0
lbl_fn_80293E30_00000BD4:
    addi r3, r1, 0x20
    bl fn_8005B3CC
    mr r28, r3
    addi r4, r30, 0x61
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00000C04
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1670(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_00000C04:
    mr r3, r28
    addi r4, r30, 0x6c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00000C2C
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1674(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_00000C2C:
    mr r3, r28
    addi r4, r30, 0x78
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00000C54
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1678(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_00000C54:
    mr r3, r28
    addi r4, r30, 0x83
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00000C7C
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x167c(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_00000C7C:
    mr r3, r28
    addi r4, r30, 0x8c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00000CA4
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1680(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_00000CA4:
    mr r3, r28
    addi r4, r30, 0x96
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00000CCC
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1684(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_00000CCC:
    mr r3, r28
    addi r4, r30, 0xa6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00000CF4
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1688(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_00000CF4:
    mr r3, r28
    addi r4, r30, 0xb6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00000D1C
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x168c(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_00000D1C:
    mr r3, r28
    addi r4, r30, 0xcc
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00000D44
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1694(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_00000D44:
    mr r3, r28
    addi r4, r30, 0xdb
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00000D6C
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1690(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_00000D6C:
    mr r3, r28
    addi r4, r30, 0xea
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00000D94
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1698(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_00000D94:
    mr r3, r28
    addi r4, r30, 0xfb
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00000DBC
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x169c(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_00000DBC:
    mr r3, r28
    addi r4, r30, 0x10d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00000DE4
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x16a0(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_00000DE4:
    mr r3, r28
    addi r4, r30, 0x11c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00000E0C
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x16a4(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_00000E0C:
    mr r3, r28
    addi r4, r30, 0x12f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00000E34
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x16a8(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_00000E34:
    mr r3, r28
    addi r4, r30, 0x144
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00000E5C
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x16ac(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_00000E5C:
    mr r3, r28
    addi r4, r30, 0x15b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00000E84
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x16b0(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_00000E84:
    mr r3, r28
    addi r4, r30, 0x16e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00000EAC
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x16b4(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_00000EAC:
    mr r3, r28
    addi r4, r30, 0x183
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00000ED4
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x16b8(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_00000ED4:
    mr r3, r28
    addi r4, r30, 0x19a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00000EFC
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x16bc(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_00000EFC:
    mr r3, r28
    addi r4, r30, 0x1af
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00000F40
    stw r31, 0x1c(r1)
lbl_fn_80293E30_00000F14:
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1c(r1)
    addi r3, r27, 0x1504
    addi r4, r1, 0x1c
    bl fn_8000E18C
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80293E30_00000F14
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_00000F40:
    mr r3, r28
    addi r4, r30, 0x1b8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00000F84
    stw r31, 0x18(r1)
lbl_fn_80293E30_00000F58:
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x18(r1)
    addi r3, r27, 0x1510
    addi r4, r1, 0x18
    bl fn_8000E18C
    lwz r0, 0x18(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80293E30_00000F58
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_00000F84:
    mr r3, r28
    addi r4, r30, 0x1c4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00000FC8
    stfs f31, 0x14(r1)
lbl_fn_80293E30_00000F9C:
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x14(r1)
    addi r3, r27, 0x1610
    addi r4, r1, 0x14
    bl fn_800DB3EC
    lfs f0, 0x14(r1)
    fcmpu cr0, f31, f0
    bne lbl_fn_80293E30_00000F9C
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_00000FC8:
    mr r3, r28
    addi r4, r30, 0x1cf
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_0000100C
    stfs f31, 0x10(r1)
lbl_fn_80293E30_00000FE0:
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x10(r1)
    addi r3, r27, 0x161c
    addi r4, r1, 0x10
    bl fn_800DB3EC
    lfs f0, 0x10(r1)
    fcmpu cr0, f31, f0
    bne lbl_fn_80293E30_00000FE0
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_0000100C:
    mr r3, r28
    addi r4, r30, 0x1dd
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00001060
lbl_fn_80293E30_00001020:
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r28, r3
    mr r3, r29
    mr r4, r28
    bl fn_800EC204
    cmpwi r3, 0x0
    stw r3, 0xc(r1)
    beq lbl_fn_80293E30_00001054
    addi r3, r27, 0x1564
    addi r4, r1, 0xc
    bl fn_80244CCC
lbl_fn_80293E30_00001054:
    cmpwi r28, 0x0
    bne lbl_fn_80293E30_00001020
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_00001060:
    mr r3, r28
    addi r4, r30, 0x1f2
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_000010A4
    stw r31, 0x8(r1)
lbl_fn_80293E30_00001078:
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x8(r1)
    addi r3, r27, 0x1570
    addi r4, r1, 0x8
    bl fn_8000E18C
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80293E30_00001078
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_000010A4:
    mr r3, r28
    addi r4, r30, 0x201
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_000010EC
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r4, r3
    mr r3, r29
    bl fn_800EC204
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80293E30_000012B8
    addi r3, r27, 0x1558
    addi r4, r4, 0x4
    bl fn_8000D124
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_000010EC:
    mr r3, r28
    addi r4, r30, 0x20d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_0000112C
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14d4(r27)
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14d8(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_0000112C:
    mr r3, r28
    addi r4, r30, 0x215
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_0000116C
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14dc(r27)
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14e0(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_0000116C:
    mr r3, r28
    addi r4, r30, 0x21e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_000011AC
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14e4(r27)
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14e8(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_000011AC:
    mr r3, r28
    addi r4, r30, 0x225
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_000011EC
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14ec(r27)
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14f0(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_000011EC:
    mr r3, r28
    addi r4, r30, 0x22e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_0000122C
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14f4(r27)
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14f8(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_0000122C:
    mr r3, r28
    addi r4, r30, 0x236
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_0000126C
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14fc(r27)
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1500(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_0000126C:
    mr r3, r28
    addi r4, r30, 0x244
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00001294
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14cc(r27)
    b lbl_fn_80293E30_000012B8
lbl_fn_80293E30_00001294:
    mr r3, r28
    addi r4, r30, 0x253
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_000012B8
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14d0(r27)
lbl_fn_80293E30_000012B8:
    addi r3, r1, 0x20
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80293E30_00000BD4
lbl_fn_80293E30_000012C8:
    cmpwi r29, 0x0
    beq lbl_fn_80293E30_000012E4
    mr r3, r29
    li r4, 0x258
    bl fn_800EC204
    mr r4, r3
    b lbl_fn_80293E30_000012E8
lbl_fn_80293E30_000012E4:
    li r4, 0x0
lbl_fn_80293E30_000012E8:
    cmpwi r4, 0x0
    beq lbl_fn_80293E30_00001300
    addi r3, r27, 0x1654
    addi r4, r4, 0x4
    bl fn_8000D124
    b lbl_fn_80293E30_00001314
lbl_fn_80293E30_00001300:
    lfs f1, lbl_80883BE8
    addi r3, r27, 0x1654
    fmr f2, f1
    fmr f3, f1
    bl fn_80057A68
lbl_fn_80293E30_00001314:
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    li r3, 0x1
    b lbl_fn_80293E30_00001334
lbl_fn_80293E30_00001330:
    li r3, 0x0
lbl_fn_80293E30_00001334:
    addi r11, r1, 0x670
    psq_l f31, 0x678(r1), 0, 0
    lfd f31, 0x670(r1)
    bl _restgpr_27
    lwz r0, 0x684(r1)
    mtlr r0
    addi r1, r1, 0x680
    blr
}

asm void fn_802946BC(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x60
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    bl _savegpr_27
    mr r31, r3
    lwz r3, lbl_8087F430
    li r4, 0xe6
    bl fn_80370A78
    cmpwi r3, 0x1
    bne lbl_fn_802946BC_000015C8
    lwz r3, lbl_8087F430
    li r4, 0xe6
    li r5, 0x2
    bl fn_80370AE4
    lwz r5, lbl_8087F430
    li r29, 0x0
    lfs f0, lbl_80883BE8
    addi r3, r31, 0x1558
    stw r29, 0x8a0(r5)
    addi r4, r1, 0x34
    li r30, 0x1
    stb r29, 0x97c(r5)
    lfs f2, 0x1560(r31)
    lwz r0, 0x58c(r31)
    stfs f2, 0x530(r31)
    fmr f2, f0
    psq_l f1, 0x0(r3), 0, 0
    cmpwi r0, 0x16
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    psq_st f1, 0x528(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stw r29, 0x1524(r31)
    stw r30, 0x14c8(r31)
    stfs f0, 0x3c(r1)
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
    bne lbl_fn_802946BC_000014AC
    li r0, 0x16
    stw r0, 0x58c(r31)
    stw r29, 0x14b4(r31)
    stw r29, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BE8
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x7d0
    li r6, 0x1
    stfs f0, 0x152c(r31)
    stw r29, 0x15b8(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BF0
    li r4, 0x0
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883BE8
    li r5, 0x1e2
    stw r30, 0x3fc(r31)
    li r6, 0x1
    lfs f2, lbl_80883BF8
    li r7, 0x0
    stfs f0, 0x2fc(r31)
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    addi r3, r31, 0x7d4
    li r4, 0x20
    bl fn_8013322C
    lfs f0, lbl_80883BF0
    stfs f0, 0x7d8(r31)
    b lbl_fn_802946BC_000015C8
lbl_fn_802946BC_000014AC:
    li r0, 0xc
    stw r0, 0x58c(r31)
    stw r29, 0x14b4(r31)
    stw r29, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BE8
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x7d0
    li r6, 0x1
    stfs f0, 0x152c(r31)
    stw r29, 0x15b8(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BF0
    li r4, 0x0
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883BE8
    li r5, 0x153
    stw r30, 0x3fc(r31)
    li r6, 0x1
    lfs f2, lbl_80883BF8
    li r7, 0x0
    stfs f0, 0x2fc(r31)
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    li r0, 0x6
    stw r0, 0x14c4(r31)
    li r4, 0x1
    lwz r3, lbl_8087F8A0
    bl fn_8054A340
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_802946BC_00001578
    lwz r3, lbl_8087F8A0
    lwz r28, 0x48(r3)
lbl_fn_802946BC_00001578:
    lwz r27, lbl_8087F048
    mr r3, r27
    bl fn_800F8548
    mr r30, r3
    li r3, 0x6c2
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_80883BE8
    mr r5, r3
    stw r0, 0xc(r1)
    mr r3, r27
    lfs f2, lbl_80883BF0
    mr r4, r28
    mr r6, r30
    addi r7, r31, 0x528
    addi r8, r31, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_802946BC_000015C8:
    lwz r0, 0x1584(r31)
    lwz r3, 0x1520(r31)
    cmpwi r0, 0x0
    subi r0, r3, 0x1
    stw r0, 0x1520(r31)
    beq lbl_fn_802946BC_000015FC
    mr r3, r31
    bl fn_8029B704
    cmpwi r3, 0x0
    beq lbl_fn_802946BC_000015FC
    li r0, 0x0
    stw r0, 0x1584(r31)
    stw r0, 0x1580(r31)
lbl_fn_802946BC_000015FC:
    lwz r0, 0xd1c(r31)
    stw r0, 0x14b0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802946BC_00001618
    lwz r3, lbl_8087F8A0
    lwz r0, 0x48(r3)
    stw r0, 0x14b0(r31)
lbl_fn_802946BC_00001618:
    lwz r3, 0x14b8(r31)
    addi r0, r3, 0x1
    stw r0, 0x14b8(r31)
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_802946BC_00001674
    li r4, 0x1
    bl fn_8054A340
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_802946BC_00001674
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802946BC_00001660
    lfs f0, lbl_80883BF0
    stfs f0, 0xad0(r3)
    b lbl_fn_802946BC_00001674
lbl_fn_802946BC_00001660:
    lfs f1, lbl_80883BFC
    addi r3, r3, 0x7d4
    bl fn_8012F034
    lfs f0, lbl_80883BEC
    stfs f0, 0xad0(r30)
lbl_fn_802946BC_00001674:
    lwz r0, 0x14c8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802946BC_00001690
    lwz r4, 0x14cc(r31)
    addi r3, r31, 0x7d4
    bl fn_80133B30
    b lbl_fn_802946BC_0000169C
lbl_fn_802946BC_00001690:
    lwz r4, 0x14d0(r31)
    addi r3, r31, 0x7d4
    bl fn_80133B30
lbl_fn_802946BC_0000169C:
    lwz r0, 0xd18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802946BC_000016B4
    lwz r0, 0x14b0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802946BC_000016C4
lbl_fn_802946BC_000016B4:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_802946BC_00001B60
lbl_fn_802946BC_000016C4:
    beq lbl_fn_802946BC_00001B60
    lwz r0, 0x58c(r31)
    cmplwi r0, 0x17
    bgt lbl_fn_802946BC_00001AC0
    lis r3, jumptable_80785918@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80785918@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r31
    bl fn_802953C8
    lfs f3, lbl_80883C00
    lfs f0, 0x52c(r31)
    fcmpo cr0, f0, f3
    fsubs f4, f3, f0
    ble lbl_fn_802946BC_00001740
    lfs f0, lbl_80883BE8
    fcmpo cr0, f4, f0
    bge lbl_fn_802946BC_00001718
    fneg f4, f4
lbl_fn_802946BC_00001718:
    lfs f3, lbl_80883C04
    fcmpo cr0, f4, f3
    bge lbl_fn_802946BC_00001730
    lfs f0, lbl_80883C00
    stfs f0, 0x52c(r31)
    b lbl_fn_802946BC_00001778
lbl_fn_802946BC_00001730:
    lfs f0, 0x52c(r31)
    fsubs f0, f0, f3
    stfs f0, 0x52c(r31)
    b lbl_fn_802946BC_00001778
lbl_fn_802946BC_00001740:
    bge lbl_fn_802946BC_00001778
    lfs f0, lbl_80883BE8
    fcmpo cr0, f4, f0
    bge lbl_fn_802946BC_00001754
    fneg f4, f4
lbl_fn_802946BC_00001754:
    lfs f3, lbl_80883C08
    fcmpo cr0, f4, f3
    bge lbl_fn_802946BC_0000176C
    lfs f0, lbl_80883C00
    stfs f0, 0x52c(r31)
    b lbl_fn_802946BC_00001778
lbl_fn_802946BC_0000176C:
    lfs f0, 0x52c(r31)
    fadds f0, f0, f3
    stfs f0, 0x52c(r31)
lbl_fn_802946BC_00001778:
    mr r3, r31
    bl fn_80296DB8
    b lbl_fn_802946BC_00001B60
    mr r3, r31
    bl fn_80297474
    b lbl_fn_802946BC_00001B60
    mr r3, r31
    bl fn_802953C8
    mr r3, r31
    bl fn_80297114
    b lbl_fn_802946BC_00001B60
    mr r3, r31
    bl fn_8029795C
    b lbl_fn_802946BC_00001B60
    mr r3, r31
    bl fn_80298580
    b lbl_fn_802946BC_00001B60
    mr r3, r31
    bl fn_80298850
    lwz r3, 0x15fc(r31)
    addi r0, r3, 0x1
    stw r0, 0x15fc(r31)
    b lbl_fn_802946BC_00001B60
    mr r3, r31
    bl fn_80298B10
    lwz r3, 0x15fc(r31)
    addi r0, r3, 0x1
    stw r0, 0x15fc(r31)
    b lbl_fn_802946BC_00001B60
    mr r3, r31
    bl fn_80298E98
    lwz r3, 0x15fc(r31)
    addi r0, r3, 0x1
    stw r0, 0x15fc(r31)
    b lbl_fn_802946BC_00001B60
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_802946BC_00001A44
    lwz r0, 0x14c8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802946BC_00001A44
    li r30, 0x0
    li r0, 0x5
    stw r0, 0x14c4(r31)
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BE8
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x7d0
    li r6, 0x1
    stfs f0, 0x152c(r31)
    stw r30, 0x15b8(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lfs f0, lbl_80883BF0
    li r3, 0xd
    li r0, 0x1
    stw r3, 0x58c(r31)
    lfs f1, lbl_80883BE8
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_80883BF8
    li r5, 0xa
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0x1568(r31)
    li r0, 0x4
    stw r0, 0x560(r31)
    cmpwi r3, 0x0
    bne lbl_fn_802946BC_000018D8
    b lbl_fn_802946BC_000019F0
lbl_fn_802946BC_000018D8:
    lfs f31, lbl_80883BE8
    addi r29, r1, 0x10
    li r27, -0x1
    li r28, 0x0
    b lbl_fn_802946BC_0000195C
lbl_fn_802946BC_000018EC:
    lwz r3, 0x1564(r31)
    lwz r4, 0x14b0(r31)
    lwzx r3, r3, r30
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    lfs f0, 0xc(r3)
    psq_st f1, 0x0(r29), 0, 0
    fsubs f6, f0, f2
    lfs f3, 0x4(r3)
    lfs f0, 0x10(r1)
    lfs f4, 0x8(r3)
    fsubs f5, f3, f0
    lfs f3, 0x14(r1)
    fmuls f0, f6, f6
    stfs f2, 0x18(r1)
    fsubs f3, f4, f3
    stfs f5, 0x1c(r1)
    fmadds f1, f5, f5, f0
    stfs f3, 0x20(r1)
    stfs f6, 0x24(r1)
    bl fn_8068B100
    frsp f0, f1
    fcmpo cr0, f0, f31
    ble lbl_fn_802946BC_00001954
    fmr f31, f0
    mr r27, r28
lbl_fn_802946BC_00001954:
    addi r28, r28, 0x1
    addi r30, r30, 0x4
lbl_fn_802946BC_0000195C:
    lwz r0, 0x1568(r31)
    cmplw r28, r0
    blt lbl_fn_802946BC_000018EC
    cmpwi r27, 0x0
    blt lbl_fn_802946BC_000019F0
    cmpw r27, r0
    blt lbl_fn_802946BC_0000197C
    b lbl_fn_802946BC_000019F0
lbl_fn_802946BC_0000197C:
    mr r3, r31
    li r4, 0x1
    bl fn_8029C564
    lwz r4, lbl_8087F430
    slwi r28, r27, 2
    lwz r29, 0x1564(r31)
    mr r3, r31
    lwz r27, 0x10d8(r4)
    bl fn_80179D44
    lwzx r4, r29, r28
    mr r5, r3
    lfs f1, lbl_80883C0C
    mr r3, r27
    addi r4, r4, 0x4
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_803C1560
    subi r0, r3, 0x1
    lwz r3, 0x153c(r31)
    mulli r0, r0, 0x30
    lwz r4, 0x9c(r27)
    cmpwi r3, 0x0
    add r0, r4, r0
    stw r0, 0x1540(r31)
    beq lbl_fn_802946BC_000019F0
    cmpwi r0, 0x0
    beq lbl_fn_802946BC_000019F0
    cmplw r3, r0
lbl_fn_802946BC_000019F0:
    lwz r3, 0x1540(r31)
    addi r5, r1, 0x28
    lfs f0, 0x530(r31)
    addi r4, r31, 0x1530
    lfs f3, 0xc(r3)
    li r0, 0x0
    lfs f5, 0x8(r3)
    fsubs f2, f3, f0
    lfs f3, 0x4(r3)
    lfs f4, 0x52c(r31)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    stfs f2, 0x30(r1)
    fsubs f0, f3, f0
    stfs f4, 0x2c(r1)
    stfs f0, 0x28(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1538(r31)
    stw r0, 0x15fc(r31)
    b lbl_fn_802946BC_00001A50
lbl_fn_802946BC_00001A44:
    mr r3, r31
    li r4, 0x1
    bl fn_80296B8C
lbl_fn_802946BC_00001A50:
    lwz r3, 0x15fc(r31)
    addi r0, r3, 0x1
    stw r0, 0x15fc(r31)
    b lbl_fn_802946BC_00001B60
    mr r3, r31
    bl fn_80299134
    b lbl_fn_802946BC_00001B60
    mr r3, r31
    bl fn_802992F8
    b lbl_fn_802946BC_00001B60
    mr r3, r31
    bl fn_802995D4
    b lbl_fn_802946BC_00001B60
    mr r3, r31
    bl fn_802997B8
    b lbl_fn_802946BC_00001B60
    mr r3, r31
    bl fn_80299A7C
    b lbl_fn_802946BC_00001B60
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_802946BC_00001B60
    mr r3, r31
    bl fn_8029A0A8
    b lbl_fn_802946BC_00001B60
lbl_fn_802946BC_00001AC0:
    mr r3, r31
    bl fn_802953C8
    lfs f3, lbl_80883C00
    lfs f0, 0x52c(r31)
    fcmpo cr0, f0, f3
    fsubs f4, f3, f0
    ble lbl_fn_802946BC_00001B14
    lfs f0, lbl_80883BE8
    fcmpo cr0, f4, f0
    bge lbl_fn_802946BC_00001AEC
    fneg f4, f4
lbl_fn_802946BC_00001AEC:
    lfs f3, lbl_80883C04
    fcmpo cr0, f4, f3
    bge lbl_fn_802946BC_00001B04
    lfs f0, lbl_80883C00
    stfs f0, 0x52c(r31)
    b lbl_fn_802946BC_00001B4C
lbl_fn_802946BC_00001B04:
    lfs f0, 0x52c(r31)
    fsubs f0, f0, f3
    stfs f0, 0x52c(r31)
    b lbl_fn_802946BC_00001B4C
lbl_fn_802946BC_00001B14:
    bge lbl_fn_802946BC_00001B4C
    lfs f0, lbl_80883BE8
    fcmpo cr0, f4, f0
    bge lbl_fn_802946BC_00001B28
    fneg f4, f4
lbl_fn_802946BC_00001B28:
    lfs f3, lbl_80883C08
    fcmpo cr0, f4, f3
    bge lbl_fn_802946BC_00001B40
    lfs f0, lbl_80883C00
    stfs f0, 0x52c(r31)
    b lbl_fn_802946BC_00001B4C
lbl_fn_802946BC_00001B40:
    lfs f0, 0x52c(r31)
    fadds f0, f0, f3
    stfs f0, 0x52c(r31)
lbl_fn_802946BC_00001B4C:
    lwz r0, 0x1520(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_802946BC_00001B60
    mr r3, r31
    bl fn_80296268
lbl_fn_802946BC_00001B60:
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_802946BC_00001B9C
    bl fn_80373148
    mr r27, r3
    b lbl_fn_802946BC_00001BA0
lbl_fn_802946BC_00001B9C:
    li r27, 0x0
lbl_fn_802946BC_00001BA0:
    cmpwi r27, 0x0
    beq lbl_fn_802946BC_00001C00
    lwz r3, 0x14b0(r31)
    lfs f3, 0x52c(r31)
    lfs f4, 0x52c(r3)
    lfs f0, lbl_80883C10
    fsubs f3, f4, f3
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802946BC_00001BD4
    li r28, 0x1
    b lbl_fn_802946BC_00001BD8
lbl_fn_802946BC_00001BD4:
    li r28, 0x2
lbl_fn_802946BC_00001BD8:
    lwz r0, 0xe0(r27)
    cmpw r28, r0
    beq lbl_fn_802946BC_00001C00
    mr r3, r27
    mr r4, r28
    li r5, 0xf
    li r6, -0x1
    li r7, 0x0
    bl fn_804A04AC
    stw r28, 0xe8(r27)
lbl_fn_802946BC_00001C00:
    addi r11, r1, 0x60
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    bl _restgpr_27
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
