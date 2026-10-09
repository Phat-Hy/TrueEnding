#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _restgpr_27(void);
extern void _savegpr_20(void);
extern void _savegpr_27(void);
extern void fn_8004D388(void);
extern void fn_8004ED34(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_800638B0(void);
extern void fn_80063D3C(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800DC288(void);
extern void fn_800E41FC(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_800FAB80(void);
extern void fn_80103F60(void);
extern void fn_80108378(void);
extern void fn_8011FC10(void);
extern void fn_801255C8(void);
extern void fn_80126214(void);
extern void fn_80128930(void);
extern void fn_8012D8B8(void);
extern void fn_8013655C(void);
extern void fn_8013CB68(void);
extern void fn_801426A4(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_8015495C(void);
extern void fn_8016E970(void);
extern void fn_80176548(void);
extern void fn_80176ACC(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_80237874(void);
extern void fn_8023A8B4(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473F50(void);
extern void fn_805A3C58(void);
extern void fn_805A3D6C(void);
extern void fn_805A40BC(void);
extern void fn_805A4258(void);
extern void fn_805A45FC(void);
extern void fn_805A4984(void);
extern void fn_805A4A20(void);
extern void fn_805A4F20(void);
extern void fn_805F8E70(void);
extern void fn_805F9050(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_80787D40[];
extern u8 jumptable_80787D7C[];
extern u8 jumptable_80787DB8[];
extern u8 lbl_80748CE8[];
extern u8 lbl_80748CF0[];
extern u8 lbl_80748DC0[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80787DF0[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80884A70;
extern u32 lbl_80884A74;
extern u32 lbl_80884A78;
extern u32 lbl_80884B20;
extern u32 lbl_80884B24;
extern u32 lbl_80884B28;
extern u32 lbl_80884B2C;
extern u32 lbl_80884B30;
extern u32 lbl_80884B34;
extern u32 lbl_80884B38;
extern u32 lbl_80884B3C;
extern u32 lbl_80884B40;
extern u32 lbl_80884B44;
extern u32 lbl_80884B48;
extern u32 lbl_80884B4C;
extern u32 lbl_80884B50;
extern u32 lbl_80884B54;
extern u32 lbl_80884B58;
extern u32 lbl_80884B5C;
extern u32 lbl_80884B60;
extern u32 lbl_80884B64;
extern u32 lbl_80884B68;
extern u32 lbl_80884B6C;
extern u32 lbl_80884B70;
extern u32 lbl_80884B74;
extern u32 lbl_80884B78;
extern u32 lbl_80884B7C;
extern u32 lbl_80884B80;
extern u32 lbl_80884B84;
extern u32 lbl_80884B88;
extern u32 lbl_80884B8C;
extern u32 lbl_80884B90;
extern u32 lbl_80884B94;
extern u32 lbl_80884B98;

/* Function declarations */
void fn_80305BB8(void);
void fn_80305C74(void);
void fn_80305EDC(void);
void fn_80306078(void);
void fn_8030646C(void);
void fn_803066F0(void);
void fn_803066F4(void);
void fn_803067E0(void);
void fn_80306AF8(void);
void fn_80306B40(void);
void fn_80306EB0(void);
void fn_803073C4(void);

asm void fn_80305BB8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    bl fn_800E41FC
    lwz r0, 0x1690(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80305BB8_000000A8
    lfs f2, 0x15e0(r31)
    lis r6, 0xff00
    lfs f3, lbl_80884A74
    addi r4, r31, 0x528
    lfs f1, 0x15dc(r31)
    addi r5, r1, 0x14
    fmuls f4, f2, f3
    lfs f2, 0x530(r31)
    fmuls f5, f1, f3
    lfs f0, 0x15d8(r31)
    lfs f1, 0x52c(r31)
    addi r6, r6, 0xff
    fmuls f3, f0, f3
    lfs f0, 0x528(r31)
    fadds f6, f4, f2
    lwz r3, lbl_8087EEB0
    fadds f7, f5, f1
    stfs f3, 0x8(r1)
    fadds f0, f3, f0
    stfs f5, 0xc(r1)
    lfs f1, lbl_80884A70
    stfs f4, 0x10(r1)
    lfs f2, lbl_80884A78
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f6, 0x1c(r1)
    bl fn_800638B0
    lwz r3, lbl_8087EEB0
    addi r4, r31, 0x1608
    lfs f1, 0x16e0(r31)
    li r5, -0x1
    lfs f2, lbl_80884A70
    bl fn_80063D3C
lbl_fn_80305BB8_000000A8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80305C74(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    stw r31, 0x21c(r1)
    mr r31, r3
    stw r30, 0x218(r1)
    stw r29, 0x214(r1)
    mr r29, r5
    bl fn_805A3C58
    lfs f1, lbl_80884B20
    lis r3, lbl_80787DF0@ha
    li r30, 0x0
    lfs f0, lbl_80884B24
    addi r3, r3, lbl_80787DF0@l
    li r0, 0x5a
    stw r3, 0x0(r31)
    addi r3, r31, 0x152c
    stfs f1, 0x14d8(r31)
    stfs f1, 0x14dc(r31)
    stfs f1, 0x14e0(r31)
    stfs f0, 0x14e4(r31)
    stw r30, 0x14e8(r31)
    stw r30, 0x14ec(r31)
    stw r30, 0x14f0(r31)
    stw r30, 0x14f4(r31)
    stw r30, 0x14f8(r31)
    stw r30, 0x14fc(r31)
    stw r30, 0x1500(r31)
    stw r30, 0x1504(r31)
    stw r30, 0x1508(r31)
    stw r30, 0x150c(r31)
    stw r30, 0x1510(r31)
    stw r30, 0x1514(r31)
    stw r30, 0x1518(r31)
    stw r30, 0x151c(r31)
    stw r30, 0x1520(r31)
    stw r30, 0x1524(r31)
    stw r0, 0x1528(r31)
    bl fn_802377B8
    addi r4, r31, 0x1580
    addi r5, r31, 0x15b8
    lfs f0, lbl_80884B20
    cmplw r4, r5
    li r0, -0x1
    lfs f1, lbl_80884B28
    li r3, 0xa
    stw r3, 0x1538(r31)
    stfs f1, 0x153c(r31)
    stfs f0, 0x1540(r31)
    stfs f0, 0x1544(r31)
    stfs f0, 0x1548(r31)
    stfs f0, 0x154c(r31)
    stfs f0, 0x1550(r31)
    stfs f0, 0x1554(r31)
    stw r0, 0x1558(r31)
    stw r30, 0x155c(r31)
    stw r0, 0x1560(r31)
    stw r30, 0x1564(r31)
    stw r0, 0x1568(r31)
    stw r30, 0x156c(r31)
    stw r30, 0x1570(r31)
    stw r30, 0x1574(r31)
    stw r30, 0x1578(r31)
    stw r30, 0x157c(r31)
    bge lbl_fn_80305C74_000001E4
    addi r0, r5, 0x7
    subf r0, r4, r0
    srwi r0, r0, 3
    mtctr r0
    bge lbl_fn_80305C74_000001E4
lbl_fn_80305C74_000001D4:
    stw r30, 0x0(r4)
    stw r30, 0x4(r4)
    addi r4, r4, 0x8
    bdnz lbl_fn_80305C74_000001D4
lbl_fn_80305C74_000001E4:
    lfs f0, lbl_80884B2C
    li r30, 0x0
    stfs f0, 0x15b8(r31)
    addi r3, r31, 0x163c
    stb r30, 0x15bc(r31)
    bl fn_802377B8
    stw r30, 0x1648(r31)
    mr r3, r31
    addi r4, r1, 0x108
    addi r5, r29, 0x2c
    stw r30, 0x164c(r31)
    stw r30, 0x1650(r31)
    stw r30, 0x1654(r31)
    bl fn_805A3D6C
    cmpwi r3, 0x0
    beq lbl_fn_80305C74_00000240
    lis r4, lbl_80748DC0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_80748DC0@l
    addi r5, r1, 0x108
    crclr 6
    bl sprintf
    b lbl_fn_80305C74_00000258
lbl_fn_80305C74_00000240:
    lis r4, lbl_80748DC0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_80748DC0@l
    addi r4, r4, 0x1c
    crclr 6
    bl sprintf
lbl_fn_80305C74_00000258:
    lwz r12, 0x14b4(r31)
    addi r3, r31, 0x14b4
    addi r4, r1, 0x8
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r30, lbl_80748DC0@ha
    addi r3, r31, 0x152c
    addi r30, r30, lbl_80748DC0@l
    addi r4, r30, 0x48
    bl fn_8023780C
    addi r30, r30, 0x5e
    addi r0, r31, 0x15bc
    cmplw r30, r0
    beq lbl_fn_80305C74_000002B0
    mr r3, r30
    bl strlen
    mr r5, r3
    mr r4, r30
    addi r3, r31, 0x15bc
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80305C74_000002B0:
    lwz r0, 0x12a4(r31)
    li r3, 0x64a
    li r11, 0x5a
    li r10, 0x64b
    oris r0, r0, 0x40
    li r9, 0x96
    li r8, 0x64c
    li r7, 0x78
    li r6, 0x1e
    li r5, 0x64d
    li r4, 0x0
    stw r3, 0x14e8(r31)
    mr r3, r31
    stw r11, 0x14f0(r31)
    stw r10, 0x14f8(r31)
    stw r9, 0x1500(r31)
    stw r8, 0x1508(r31)
    stw r7, 0x1510(r31)
    stw r6, 0x150c(r31)
    stw r5, 0x1518(r31)
    stw r4, 0x1520(r31)
    stw r0, 0x12a4(r31)
    lwz r31, 0x21c(r1)
    lwz r30, 0x218(r1)
    lwz r29, 0x214(r1)
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_80305EDC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r0, 0x164c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80305EDC_000003BC
    addi r3, r3, 0x14b4
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_80305EDC_00000360
    li r3, 0x0
    b lbl_fn_80305EDC_000004A8
lbl_fn_80305EDC_00000360:
    addi r3, r31, 0x14b4
    bl fn_8047059C
    mr r30, r3
    addi r3, r31, 0x14b4
    bl fn_80470580
    mr r4, r3
    mr r3, r31
    mr r5, r30
    bl fn_80306078
    lfs f1, 0x15b8(r31)
    lfs f0, lbl_80884B20
    fcmpo cr0, f1, f0
    ble lbl_fn_80305EDC_000003AC
    lwz r0, 0x1574(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80305EDC_000003AC
    addi r3, r31, 0x163c
    addi r4, r31, 0x15bc
    bl fn_8023780C
lbl_fn_80305EDC_000003AC:
    lwz r3, 0x164c(r31)
    addi r0, r3, 0x1
    stw r0, 0x164c(r31)
    b lbl_fn_80305EDC_000004A4
lbl_fn_80305EDC_000003BC:
    bl fn_8013655C
    cmpwi r3, 0x0
    beq lbl_fn_80305EDC_000003D0
    li r3, 0x0
    b lbl_fn_80305EDC_000004A8
lbl_fn_80305EDC_000003D0:
    lwz r3, 0x1438(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80305EDC_000003F4
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80305EDC_000003F4
    li r3, 0x0
    b lbl_fn_80305EDC_000004A8
lbl_fn_80305EDC_000003F4:
    addi r3, r31, 0x152c
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_80305EDC_0000040C
    li r3, 0x0
    b lbl_fn_80305EDC_000004A8
lbl_fn_80305EDC_0000040C:
    addi r3, r31, 0x163c
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_80305EDC_00000424
    li r3, 0x0
    b lbl_fn_80305EDC_000004A8
lbl_fn_80305EDC_00000424:
    lwz r3, 0x1438(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80305EDC_00000448
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_80305EDC_00000448:
    lfs f1, 0x15b8(r31)
    lfs f0, lbl_80884B20
    fcmpo cr0, f1, f0
    ble lbl_fn_80305EDC_0000046C
    lwz r0, 0x1574(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80305EDC_0000046C
    li r0, 0x1
    stw r0, 0x1648(r31)
lbl_fn_80305EDC_0000046C:
    lwz r0, 0x7ec(r31)
    mr r3, r31
    ori r0, r0, 0x1c0
    oris r0, r0, 0x1
    ori r0, r0, 0x4011
    oris r0, r0, 0x300
    ori r0, r0, 0x8004
    stw r0, 0x7ec(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0xfc(r12)
    mtctr r12
    bctrl
    li r3, 0x1
    b lbl_fn_80305EDC_000004A8
lbl_fn_80305EDC_000004A4:
    li r3, 0x0
lbl_fn_80305EDC_000004A8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80306078(void)
{
    nofralloc
    stwu r1, -0x670(r1)
    mflr r0
    stw r0, 0x674(r1)
    addi r11, r1, 0x660
    stfd f31, 0x660(r1)
    psq_st f31, 0x668(r1), 0, 0
    bl _savegpr_27
    lis r6, lbl_807772D0@ha
    li r29, 0x0
    addi r6, r6, lbl_807772D0@l
    stw r6, 0x8(r1)
    mr r31, r3
    mr r28, r4
    mr r27, r5
    stw r29, 0xc(r1)
    addi r3, r1, 0x18
    li r4, 0x0
    stw r29, 0x10(r1)
    li r5, 0x400
    stw r29, 0x14(r1)
    stw r29, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r28
    mr r5, r27
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
    lis r30, lbl_80748DC0@ha
    lfs f31, lbl_80884B30
    addi r30, r30, lbl_80748DC0@l
lbl_fn_80306078_00000568:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    mr r28, r3
    addi r4, r30, 0x74
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80306078_00000598
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14e8(r31)
    b lbl_fn_80306078_00000884
lbl_fn_80306078_00000598:
    mr r3, r28
    addi r4, r30, 0x88
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80306078_000005C0
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14f0(r31)
    b lbl_fn_80306078_00000884
lbl_fn_80306078_000005C0:
    mr r3, r28
    addi r4, r30, 0x9d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80306078_000005E8
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1508(r31)
    b lbl_fn_80306078_00000884
lbl_fn_80306078_000005E8:
    mr r3, r28
    addi r4, r30, 0xaf
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80306078_00000610
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x150c(r31)
    b lbl_fn_80306078_00000884
lbl_fn_80306078_00000610:
    mr r3, r28
    addi r4, r30, 0xc4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80306078_00000638
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1510(r31)
    b lbl_fn_80306078_00000884
lbl_fn_80306078_00000638:
    mr r3, r28
    addi r4, r30, 0xd8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80306078_00000660
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1518(r31)
    b lbl_fn_80306078_00000884
lbl_fn_80306078_00000660:
    mr r3, r28
    addi r4, r30, 0xed
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80306078_00000688
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x14e4(r31)
    b lbl_fn_80306078_00000884
lbl_fn_80306078_00000688:
    mr r3, r28
    addi r4, r30, 0xfc
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80306078_000006B0
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1528(r31)
    b lbl_fn_80306078_00000884
lbl_fn_80306078_000006B0:
    mr r3, r28
    addi r4, r30, 0x106
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80306078_000006D8
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1538(r31)
    b lbl_fn_80306078_00000884
lbl_fn_80306078_000006D8:
    mr r3, r28
    addi r4, r30, 0x119
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80306078_00000700
    mr r3, r31
    addi r4, r31, 0x1558
    addi r5, r1, 0x8
    bl fn_805A4984
    b lbl_fn_80306078_00000884
lbl_fn_80306078_00000700:
    mr r3, r28
    addi r4, r30, 0x12d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80306078_00000728
    mr r3, r31
    addi r4, r31, 0x1560
    addi r5, r1, 0x8
    bl fn_805A4984
    b lbl_fn_80306078_00000884
lbl_fn_80306078_00000728:
    mr r3, r28
    addi r4, r30, 0x142
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80306078_00000754
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    fdivs f0, f1, f31
    stfs f0, 0x15b8(r31)
    b lbl_fn_80306078_00000884
lbl_fn_80306078_00000754:
    mr r3, r28
    addi r4, r30, 0x14b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80306078_000007A8
lbl_fn_80306078_00000768:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    cmpwi r3, 0x0
    beq lbl_fn_80306078_00000884
    lwz r0, 0x1574(r31)
    slwi r0, r0, 3
    add r0, r31, r0
    addic. r4, r0, 0x1578
    beq lbl_fn_80306078_00000798
    stw r3, 0x0(r4)
    stw r29, 0x4(r4)
lbl_fn_80306078_00000798:
    lwz r3, 0x1574(r31)
    addi r0, r3, 0x1
    stw r0, 0x1574(r31)
    b lbl_fn_80306078_00000768
lbl_fn_80306078_000007A8:
    mr r3, r28
    addi r4, r30, 0x157
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80306078_000007F0
    addi r28, r31, 0x1578
    li r27, 0x0
    b lbl_fn_80306078_000007E0
lbl_fn_80306078_000007C8:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x4(r28)
    addi r28, r28, 0x8
    addi r27, r27, 0x1
lbl_fn_80306078_000007E0:
    lwz r0, 0x1574(r31)
    cmplw r27, r0
    blt lbl_fn_80306078_000007C8
    b lbl_fn_80306078_00000884
lbl_fn_80306078_000007F0:
    mr r3, r28
    addi r4, r30, 0x167
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80306078_00000818
    mr r3, r31
    addi r4, r31, 0x1568
    addi r5, r1, 0x8
    bl fn_805A4984
    b lbl_fn_80306078_00000884
lbl_fn_80306078_00000818:
    mr r3, r28
    addi r4, r30, 0x178
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80306078_00000860
    addi r3, r1, 0x8
    bl fn_8005B3CC
    addi r0, r31, 0x15bc
    mr r28, r3
    cmplw r3, r0
    beq lbl_fn_80306078_00000884
    bl strlen
    mr r5, r3
    mr r4, r28
    addi r3, r31, 0x15bc
    addi r5, r5, 0x1
    bl memcpy
    b lbl_fn_80306078_00000884
lbl_fn_80306078_00000860:
    mr r3, r28
    addi r4, r30, 0x182
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80306078_00000884
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x153c(r31)
lbl_fn_80306078_00000884:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80306078_00000568
    addi r11, r1, 0x660
    psq_l f31, 0x668(r1), 0, 0
    lfd f31, 0x660(r1)
    bl _restgpr_27
    lwz r0, 0x674(r1)
    mtlr r0
    addi r1, r1, 0x670
    blr
}

asm void fn_8030646C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_8030646C_00000964
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r0, 0x0
    li r4, 0x0
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_8030646C_0000090C
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_8030646C_0000090C
    li r4, 0x1
lbl_fn_8030646C_0000090C:
    cmpwi r4, 0x0
    beq lbl_fn_8030646C_00000928
    lwz r4, 0x7e0(r3)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_8030646C_00000928
    li r0, 0x1
lbl_fn_8030646C_00000928:
    cmpwi r0, 0x0
    beq lbl_fn_8030646C_0000095C
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8030646C_00000950
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_8030646C_00000950
    li r4, 0x1
lbl_fn_8030646C_00000950:
    cmpwi r4, 0x0
    bne lbl_fn_8030646C_0000095C
    li r5, 0x1
lbl_fn_8030646C_0000095C:
    cmpwi r5, 0x0
    bne lbl_fn_8030646C_00000978
lbl_fn_8030646C_00000964:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x104(r12)
    mtctr r12
    bctrl
lbl_fn_8030646C_00000978:
    lwz r3, 0x14f4(r31)
    cmpwi r3, 0x0
    ble lbl_fn_8030646C_0000098C
    subi r0, r3, 0x1
    stw r0, 0x14f4(r31)
lbl_fn_8030646C_0000098C:
    lwz r3, 0x1504(r31)
    cmpwi r3, 0x0
    ble lbl_fn_8030646C_000009A0
    subi r0, r3, 0x1
    stw r0, 0x1504(r31)
lbl_fn_8030646C_000009A0:
    lwz r3, 0x1514(r31)
    cmpwi r3, 0x0
    ble lbl_fn_8030646C_000009B4
    subi r0, r3, 0x1
    stw r0, 0x1514(r31)
lbl_fn_8030646C_000009B4:
    lwz r3, 0x1524(r31)
    cmpwi r3, 0x0
    ble lbl_fn_8030646C_000009C8
    subi r0, r3, 0x1
    stw r0, 0x1524(r31)
lbl_fn_8030646C_000009C8:
    mr r3, r31
    bl fn_8014C540
    lwz r0, 0x58c(r31)
    addi r3, r1, 0x14
    psq_l f1, 0x528(r31), 0, 0
    addi r4, r1, 0x8
    lfs f2, 0x530(r31)
    cmpwi r0, 0xc
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x534(r31), 0, 0
    stfs f2, 0x1c(r1)
    lfs f2, 0x53c(r31)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x10(r1)
    bne lbl_fn_8030646C_00000A5C
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8030646C_00000A38
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fdivs f4, f31, f1
    lfs f3, 0x5b0(r31)
    lfs f0, 0x52c(r31)
    fmadds f0, f3, f4, f0
    stfs f0, 0x52c(r31)
    b lbl_fn_8030646C_00000A5C
lbl_fn_8030646C_00000A38:
    lfs f5, 0x52c(r31)
    lfs f4, 0x5b0(r31)
    lfs f3, 0x154c(r31)
    lfs f0, lbl_80884B34
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f4, 0x52c(r31)
    stfs f0, 0x154c(r31)
    stfs f0, 0x534(r31)
lbl_fn_8030646C_00000A5C:
    lwz r0, 0x38(r31)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_8030646C_00000A80
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 6
    bne lbl_fn_8030646C_00000A80
    mr r3, r31
    bl fn_80145334
lbl_fn_8030646C_00000A80:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0xc
    bne lbl_fn_8030646C_00000AB4
    addi r3, r1, 0x14
    lfs f2, 0x1c(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x8
    psq_st f1, 0x528(r31), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x530(r31)
    lfs f2, 0x10(r1)
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
lbl_fn_8030646C_00000AB4:
    lwz r0, 0x1570(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8030646C_00000B18
    lwz r3, lbl_8087F048
    mr r4, r31
    bl fn_80103F60
    lwz r4, lbl_8087F8A0
    mr r31, r3
    lwz r30, 0x48(r4)
    b lbl_fn_8030646C_00000B10
lbl_fn_8030646C_00000ADC:
    mr r3, r31
    mr r4, r30
    bl fn_80108378
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8030646C_00000AFC
    lfs f0, lbl_80884B38
    b lbl_fn_8030646C_00000B00
lbl_fn_8030646C_00000AFC:
    lfs f0, lbl_80884B3C
lbl_fn_8030646C_00000B00:
    slwi r0, r3, 2
    add r3, r31, r0
    stfs f0, 0x128(r3)
    lwz r30, 0x14ac(r30)
lbl_fn_8030646C_00000B10:
    cmpwi r30, 0x0
    bne lbl_fn_8030646C_00000ADC
lbl_fn_8030646C_00000B18:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803066F0(void)
{
    nofralloc
    b fn_80149A30
}

asm void fn_803066F4(void)
{
    nofralloc
    lwz r0, 0x14cc(r3)
    extrwi. r0, r0, 1, 2
    beq lbl_fn_803066F4_00000B50
    li r3, 0x0
    blr
lbl_fn_803066F4_00000B50:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xd
    bne lbl_fn_803066F4_00000BB8
    lwz r3, 0x8(r4)
    cmpwi r3, 0x0
    beq lbl_fn_803066F4_00000BB0
    lwz r0, 0x4(r3)
    cmpwi r0, 0x658
    bne lbl_fn_803066F4_00000BB0
    lfs f2, 0x10(r4)
    li r3, 0x1
    lfs f3, lbl_80884B20
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    lwz r0, 0xc(r4)
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    ori r0, r0, 0x80
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
    stw r0, 0xc(r4)
    blr
lbl_fn_803066F4_00000BB0:
    li r3, 0x0
    blr
lbl_fn_803066F4_00000BB8:
    lfs f2, 0x10(r4)
    li r5, 0x1
    lfs f3, lbl_80884B20
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
    lwz r6, 0x7e0(r3)
    rlwinm r3, r6, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_803066F4_00000C0C
    rlwinm r3, r6, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_803066F4_00000C0C
    li r5, 0x0
lbl_fn_803066F4_00000C0C:
    cmpwi r5, 0x0
    bne lbl_fn_803066F4_00000C20
    lwz r0, 0xc(r4)
    ori r0, r0, 0x8
    stw r0, 0xc(r4)
lbl_fn_803066F4_00000C20:
    li r3, 0x1
    blr
}

asm void fn_803067E0(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    stw r30, 0xe8(r1)
    stw r29, 0xe4(r1)
    mr r29, r4
    stw r28, 0xe0(r1)
    mr r28, r3
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_803067E0_00000C84
    lwz r12, 0x0(r3)
    li r4, 0x2
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_803067E0_00000F10
lbl_fn_803067E0_00000C84:
    lwz r3, 0x8(r4)
    cmpwi r3, 0x0
    beq lbl_fn_803067E0_00000ED4
    lwz r0, 0x4(r3)
    cmpwi r0, 0xcb
    bne lbl_fn_803067E0_00000ED4
    lfs f2, 0x18(r4)
    addi r31, r1, 0x5c
    psq_l f1, 0x10(r4), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, lbl_80884B20
    stfs f2, 0x64(r1)
    stfs f0, 0x60(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80884B40
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_803067E0_00000EA8
    mr r3, r31
    mr r4, r31
    bl fn_805F98D0
    lfs f2, 0x64(r1)
    addi r30, r1, 0x50
    psq_l f1, 0x0(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884B40
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_803067E0_00000D2C
    lfs f3, 0x50(r1)
    lfs f0, lbl_80884B20
    fcmpo cr0, f3, f0
    ble lbl_fn_803067E0_00000D20
    lfs f0, lbl_80884B44
    b lbl_fn_803067E0_00000D24
lbl_fn_803067E0_00000D20:
    lfs f0, lbl_80884B48
lbl_fn_803067E0_00000D24:
    stfs f0, 0x48(r1)
    b lbl_fn_803067E0_00000D40
lbl_fn_803067E0_00000D2C:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_803067E0_00000D40:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884B20
    addi r4, r1, 0x38
    lfs f30, 0x70(r1)
    mr r5, r4
    lfs f31, 0x6c(r1)
    addi r3, r1, 0x98
    lfs f13, 0x68(r1)
    lfs f12, 0x80(r1)
    lfs f11, 0x7c(r1)
    lfs f10, 0x78(r1)
    lfs f9, 0x90(r1)
    lfs f8, 0x8c(r1)
    lfs f7, 0x88(r1)
    lfs f6, 0x94(r1)
    lfs f5, 0x84(r1)
    lfs f4, 0x74(r1)
    lfs f0, lbl_80884B38
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x98(r1)
    stfs f31, 0x9c(r1)
    stfs f30, 0xa0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xa8(r1)
    stfs f11, 0xac(r1)
    stfs f12, 0xb0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xb8(r1)
    stfs f8, 0xbc(r1)
    stfs f9, 0xc0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xa4(r1)
    stfs f5, 0xb4(r1)
    stfs f6, 0xc4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80884B40
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_803067E0_00000E5C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884B20
    fcmpo cr0, f3, f0
    ble lbl_fn_803067E0_00000E4C
    lfs f0, lbl_80884B44
    b lbl_fn_803067E0_00000E50
lbl_fn_803067E0_00000E4C:
    lfs f0, lbl_80884B48
lbl_fn_803067E0_00000E50:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_803067E0_00000E70
lbl_fn_803067E0_00000E5C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_803067E0_00000E70:
    addi r3, r1, 0x44
    lfs f4, lbl_80884B20
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r28), 0, 0
    fmr f2, f4
    lfs f0, lbl_80884B4C
    lfs f3, 0x538(r28)
    stfs f2, 0x58(r1)
    frsp f2, f2
    fadds f0, f3, f0
    stfs f4, 0x4c(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x53c(r28)
    stfs f0, 0x538(r28)
lbl_fn_803067E0_00000EA8:
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0xfc(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r3, r28
    li r4, 0xc
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_803067E0_00000ED4:
    lwz r0, 0x58c(r28)
    cmpwi r0, 0xd
    bne lbl_fn_803067E0_00000F10
    lwz r3, 0x8(r29)
    cmpwi r3, 0x0
    beq lbl_fn_803067E0_00000F10
    lwz r0, 0x4(r3)
    cmpwi r0, 0x658
    bne lbl_fn_803067E0_00000F10
    mr r3, r28
    addi r4, r28, 0x1560
    li r5, 0x1
    bl fn_805A4A20
    li r0, 0x1
    stw r0, 0x1570(r28)
lbl_fn_803067E0_00000F10:
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    lwz r28, 0xe0(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80306AF8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x2
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8016E970
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80306B40(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    mr r31, r3
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_80306B40_000012E4
    lwz r0, 0x14cc(r3)
    li r5, 0x0
    lwz r7, 0x58c(r3)
    cmplwi r4, 0xe
    clrlwi r6, r0, 4
    stw r5, 0x14bc(r3)
    oris r6, r6, 0x800
    stw r5, 0x14c0(r3)
    stw r5, 0x14c4(r3)
    stw r5, 0x14c8(r3)
    stw r6, 0x14cc(r3)
    stw r5, 0x14d0(r3)
    stw r4, 0x58c(r3)
    bgt lbl_fn_80306B40_000012E4
    lis r5, jumptable_80787D40@ha
    slwi r0, r4, 2
    addi r5, r5, jumptable_80787D40@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    oris r0, r6, 0x4000
    stw r0, 0x14cc(r3)
    b lbl_fn_80306B40_000012E4
    oris r0, r6, 0x4000
    stw r0, 0x14cc(r3)
    b lbl_fn_80306B40_000012E4
    lwz r4, 0xd1c(r3)
    addi r5, r3, 0x528
    stw r4, 0x14d4(r3)
    li r6, 0x0
    addi r3, r3, 0xc64
    bl fn_80128930
    lfs f3, lbl_80884B50
    addi r3, r31, 0xc64
    lfs f0, 0x14e4(r31)
    fmuls f0, f3, f0
    stfs f0, 0xc8c(r31)
    bl fn_801255C8
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x4000
    stw r0, 0x14cc(r31)
    b lbl_fn_80306B40_000012E4
    lwz r4, 0xd1c(r3)
    stw r4, 0x14d4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80306B40_000010D8
    lfs f5, 0x52c(r4)
    addi r5, r1, 0x8
    lfs f4, 0x52c(r3)
    addi r6, r3, 0x14d8
    lfs f3, 0x528(r4)
    fsubs f5, f5, f4
    lfs f0, 0x528(r3)
    lfs f4, 0x530(r4)
    fsubs f3, f3, f0
    lfs f0, 0x530(r3)
    stfs f5, 0xc(r1)
    fsubs f2, f4, f0
    lfs f0, lbl_80884B20
    stfs f3, 0x8(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f0, 0x14dc(r3)
    mr r3, r6
    stfs f2, 0x10(r1)
    stfs f2, 0x8(r6)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80884B40
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_80306B40_0000110C
    addi r3, r31, 0x14d8
    mr r4, r3
    bl fn_805F98D0
    b lbl_fn_80306B40_0000110C
lbl_fn_80306B40_000010D8:
    lfs f3, lbl_80884B20
    li r4, 0x79
    lfs f0, lbl_80884B38
    lfs f1, 0x538(r3)
    stfs f3, 0x14d8(r3)
    stfs f3, 0x14dc(r3)
    stfs f0, 0x14e0(r3)
    addi r3, r1, 0x60
    bl fn_805F8E70
    addi r4, r31, 0x14d8
    addi r3, r1, 0x60
    mr r5, r4
    bl fn_805F93C0
lbl_fn_80306B40_0000110C:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x9
    bne lbl_fn_80306B40_00001138
    lfs f1, lbl_80884B38
    mr r3, r31
    lfs f2, lbl_80884B20
    li r4, 0x140
    li r5, 0x0
    li r6, 0x1
    bl fn_805A4F20
    b lbl_fn_80306B40_0000117C
lbl_fn_80306B40_00001138:
    cmpwi r0, 0xa
    bne lbl_fn_80306B40_00001160
    lfs f1, lbl_80884B38
    mr r3, r31
    lfs f2, lbl_80884B20
    li r4, 0x143
    li r5, 0x0
    li r6, 0x1
    bl fn_805A4F20
    b lbl_fn_80306B40_0000117C
lbl_fn_80306B40_00001160:
    lfs f1, lbl_80884B38
    mr r3, r31
    lfs f2, lbl_80884B20
    li r4, 0x145
    li r5, 0x0
    li r6, 0x1
    bl fn_805A4F20
lbl_fn_80306B40_0000117C:
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x14cc(r31)
    stw r3, 0x14c8(r31)
    oris r0, r0, 0x1000
    stw r0, 0x14cc(r31)
    b lbl_fn_80306B40_000012E4
    lfs f3, lbl_80884B20
    li r4, 0x79
    lfs f0, lbl_80884B38
    stfs f3, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f0, 0x1c(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x30
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x30
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x1c(r1)
    addi r6, r1, 0x20
    lfs f0, 0x18(r1)
    addi r7, r31, 0x1540
    fneg f4, f3
    lfs f3, 0x14(r1)
    fneg f5, f0
    lfs f0, lbl_80884B20
    fneg f3, f3
    stfs f4, 0x28(r1)
    frsp f2, f4
    stfs f3, 0x20(r1)
    mr r3, r31
    li r4, 0x14a
    stfs f5, 0x24(r1)
    li r5, 0x0
    psq_l f1, 0x0(r6), 0, 0
    li r6, 0x1
    stfs f2, 0x1548(r31)
    fmr f2, f0
    psq_st f1, 0x0(r7), 0, 0
    lfs f1, lbl_80884B38
    stfs f0, 0x154c(r31)
    stfs f0, 0x1550(r31)
    stfs f0, 0x1554(r31)
    bl fn_805A4F20
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x14cc(r31)
    stw r3, 0x14c8(r31)
    oris r0, r0, 0x1000
    stw r0, 0x14cc(r31)
    b lbl_fn_80306B40_000012E4
    lfs f1, lbl_80884B38
    li r4, 0x3d
    lfs f2, lbl_80884B20
    li r5, 0x0
    li r6, 0x1
    bl fn_805A4F20
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x1000
    stw r0, 0x14cc(r31)
    b lbl_fn_80306B40_000012E4
    lfs f1, lbl_80884B38
    li r4, 0x150
    lfs f2, lbl_80884B20
    li r5, 0x0
    li r6, 0x1
    bl fn_805A4F20
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x1000
    stw r0, 0x14cc(r31)
    b lbl_fn_80306B40_000012E4
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80306B40_000012C8
    cmpwi r7, 0x2
    beq lbl_fn_80306B40_000012C8
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_80306B40_000012C8:
    lfs f1, lbl_80884B38
    mr r3, r31
    lfs f2, lbl_80884B20
    li r4, 0x2e
    li r5, 0x0
    li r6, 0x1
    bl fn_805A4F20
lbl_fn_80306B40_000012E4:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80306EB0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r5, 0x0
    li r6, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lwz r7, 0x38(r3)
    lwz r4, 0x14c0(r3)
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    addi r0, r4, 0x1
    stw r0, 0x14c0(r3)
    li r4, 0x0
    beq lbl_fn_80306EB0_0000134C
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_80306EB0_0000134C
    li r4, 0x1
lbl_fn_80306EB0_0000134C:
    cmpwi r4, 0x0
    beq lbl_fn_80306EB0_00001368
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80306EB0_00001368
    li r6, 0x1
lbl_fn_80306EB0_00001368:
    cmpwi r6, 0x0
    beq lbl_fn_80306EB0_0000139C
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80306EB0_00001390
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_80306EB0_00001390
    li r4, 0x1
lbl_fn_80306EB0_00001390:
    cmpwi r4, 0x0
    bne lbl_fn_80306EB0_0000139C
    li r5, 0x1
lbl_fn_80306EB0_0000139C:
    cmpwi r5, 0x0
    beq lbl_fn_80306EB0_0000145C
    lwz r3, 0x58c(r3)
    subi r0, r3, 0x7
    cmplwi r0, 0x1
    bgt lbl_fn_80306EB0_0000145C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80306EB0_000013EC
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80306EB0_0000145C
lbl_fn_80306EB0_000013EC:
    lwz r0, 0x1648(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80306EB0_0000145C
    lwz r0, 0x940(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80306EB0_00001430
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80748CE8@ha
    stw r3, 0x1c(r1)
    lfd f2, lbl_80748CE8@l(r4)
    stw r0, 0x18(r1)
    lfs f0, 0x7d8(r31)
    lfd f1, 0x18(r1)
    fsubs f1, f1, f2
    fdivs f1, f0, f1
    b lbl_fn_80306EB0_00001434
lbl_fn_80306EB0_00001430:
    lfs f1, lbl_80884B20
lbl_fn_80306EB0_00001434:
    lfs f0, 0x15b8(r31)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80306EB0_0000145C
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xe
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80306EB0_0000145C:
    lwz r0, 0x58c(r31)
    cmplwi r0, 0xe
    bgt lbl_fn_80306EB0_000017D8
    lis r3, jumptable_80787D7C@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80787D7C@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80306EB0_000014B4
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x8
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80306EB0_000014B4:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80306EB0_000017F0
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80306EB0_00001548
    bl fn_80680CF8
    lis r4, 0x51ec
    lwz r0, 0x1538(r31)
    subi r4, r4, 0x7ae1
    mulhw r4, r4, r3
    srawi r4, r4, 5
    srwi r5, r4, 31
    add r4, r4, r5
    mulli r4, r4, 0x64
    subf r3, r4, r3
    cmpw r0, r3
    ble lbl_fn_80306EB0_00001530
    lwz r0, 0x1514(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_80306EB0_00001530
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xb
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80306EB0_00001548
lbl_fn_80306EB0_00001530:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x8
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80306EB0_00001548:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80306EB0_000017F0
    lwz r4, 0x14d4(r31)
    lwz r0, 0xd1c(r31)
    cmplw r0, r4
    beq lbl_fn_80306EB0_000015E4
    bl fn_80680CF8
    lis r4, 0x51ec
    lwz r0, 0x1538(r31)
    subi r4, r4, 0x7ae1
    mulhw r4, r4, r3
    srawi r4, r4, 5
    srwi r5, r4, 31
    add r4, r4, r5
    mulli r4, r4, 0x64
    subf r3, r4, r3
    cmpw r0, r3
    ble lbl_fn_80306EB0_000015C8
    lwz r0, 0x1514(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_80306EB0_000015C8
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xb
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80306EB0_00001700
lbl_fn_80306EB0_000015C8:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x8
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80306EB0_00001700
lbl_fn_80306EB0_000015E4:
    lwz r30, 0x55c(r4)
    mr r3, r31
    lwz r29, 0x560(r4)
    lfs f1, lbl_80884B54
    lfs f2, lbl_80884B58
    lfs f3, lbl_80884B20
    bl fn_805A45FC
    lis r3, 0x6666
    lwz r4, 0x14c0(r31)
    addi r0, r3, 0x6667
    mulhw r0, r0, r4
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0xa
    subf. r0, r0, r4
    bne lbl_fn_80306EB0_00001668
    lwz r0, 0x1514(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_80306EB0_00001668
    cmpwi r30, 0x6
    bne lbl_fn_80306EB0_00001668
    cmpwi r29, 0x1d
    beq lbl_fn_80306EB0_0000164C
    cmpwi r29, 0xd
    bne lbl_fn_80306EB0_00001668
lbl_fn_80306EB0_0000164C:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xb
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80306EB0_00001700
lbl_fn_80306EB0_00001668:
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80306EB0_00001700
    lwz r4, 0x14d4(r31)
    addi r3, r1, 0x8
    lfs f0, 0x530(r31)
    lfs f1, 0x530(r4)
    lfs f3, 0x52c(r4)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r31)
    lfs f1, 0x528(r4)
    lfs f0, 0x528(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    lfs f0, 0x14e4(r31)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_80306EB0_000016E8
    lwz r0, 0x14f4(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_80306EB0_00001700
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x9
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80306EB0_00001700
lbl_fn_80306EB0_000016E8:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x8
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80306EB0_00001700:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80306EB0_000017F0
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80306EB0_0000173C
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80306EB0_0000173C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80306EB0_000017F0
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80306EB0_00001778
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80306EB0_00001778:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80306EB0_000017F0
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80306EB0_000017B4
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80306EB0_000017B4:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80306EB0_000017F0
    mr r3, r31
    bl fn_805A40BC
    b lbl_fn_80306EB0_000017F0
lbl_fn_80306EB0_000017D8:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80306EB0_000017F0:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803073C4(void)
{
    nofralloc
    stwu r1, -0x750(r1)
    mflr r0
    stw r0, 0x754(r1)
    addi r11, r1, 0x700
    stfd f31, 0x740(r1)
    psq_st f31, 0x748(r1), 0, 0
    stfd f30, 0x730(r1)
    psq_st f30, 0x738(r1), 0, 0
    stfd f29, 0x720(r1)
    psq_st f29, 0x728(r1), 0, 0
    stfd f28, 0x710(r1)
    psq_st f28, 0x718(r1), 0, 0
    stfd f27, 0x700(r1)
    psq_st f27, 0x708(r1), 0, 0
    bl _savegpr_20
    lwz r7, 0x7e0(r3)
    mr r24, r3
    lfs f30, lbl_80884B20
    li r5, 0x1
    rlwinm r0, r7, 0, 28, 28
    li r6, 0x1
    cmplwi r0, 0x8
    li r4, 0x1
    beq lbl_fn_803073C4_0000187C
    rlwinm r0, r7, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_803073C4_0000187C
    li r4, 0x0
lbl_fn_803073C4_0000187C:
    cmpwi r4, 0x0
    bne lbl_fn_803073C4_00001898
    rlwinm r4, r7, 0, 8, 8
    subis r0, r4, 0x80
    cmplwi r0, 0x0
    beq lbl_fn_803073C4_00001898
    li r6, 0x0
lbl_fn_803073C4_00001898:
    cmpwi r6, 0x0
    bne lbl_fn_803073C4_000018B4
    rlwinm r4, r7, 0, 7, 7
    subis r0, r4, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_803073C4_000018B4
    li r5, 0x0
lbl_fn_803073C4_000018B4:
    cmpwi r5, 0x0
    bne lbl_fn_803073C4_000018C4
    lfs f29, 0x153c(r3)
    b lbl_fn_803073C4_000018C8
lbl_fn_803073C4_000018C4:
    lfs f29, lbl_80884B5C
lbl_fn_803073C4_000018C8:
    psq_l f1, 0x534(r3), 0, 0
    addi r4, r1, 0x328
    lfs f2, 0x53c(r3)
    li r28, 0x0
    stfs f2, 0x330(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_803073C4_000030D4
    lwz r4, 0x58c(r3)
    subi r0, r4, 0xb
    cmplwi r0, 0x2
    ble lbl_fn_803073C4_00001984
    cmpwi r4, 0x2
    beq lbl_fn_803073C4_00001984
    lwz r7, 0x7e0(r3)
    li r5, 0x1
    li r6, 0x1
    li r4, 0x1
    rlwinm r0, r7, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_803073C4_00001930
    rlwinm r0, r7, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_803073C4_00001930
    li r4, 0x0
lbl_fn_803073C4_00001930:
    cmpwi r4, 0x0
    bne lbl_fn_803073C4_0000194C
    rlwinm r4, r7, 0, 8, 8
    subis r0, r4, 0x80
    cmplwi r0, 0x0
    beq lbl_fn_803073C4_0000194C
    li r6, 0x0
lbl_fn_803073C4_0000194C:
    cmpwi r6, 0x0
    bne lbl_fn_803073C4_00001968
    rlwinm r4, r7, 0, 7, 7
    subis r0, r4, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_803073C4_00001968
    li r5, 0x0
lbl_fn_803073C4_00001968:
    cmpwi r5, 0x0
    bne lbl_fn_803073C4_00001978
    lfs f0, lbl_80884B60
    b lbl_fn_803073C4_0000197C
lbl_fn_803073C4_00001978:
    lfs f0, lbl_80884B64
lbl_fn_803073C4_0000197C:
    stfs f0, 0x2e8(r3)
    b lbl_fn_803073C4_0000198C
lbl_fn_803073C4_00001984:
    lfs f0, lbl_80884B38
    stfs f0, 0x2e8(r3)
lbl_fn_803073C4_0000198C:
    lwz r4, 0x58c(r3)
    subi r0, r4, 0x7
    cmplwi r0, 0x7
    bgt lbl_fn_803073C4_000030E0
    lis r4, jumptable_80787DB8@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80787DB8@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lwz r7, 0x7e0(r3)
    li r5, 0x1
    li r6, 0x1
    li r4, 0x1
    rlwinm r0, r7, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_803073C4_000019E0
    rlwinm r0, r7, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_803073C4_000019E0
    li r4, 0x0
lbl_fn_803073C4_000019E0:
    cmpwi r4, 0x0
    bne lbl_fn_803073C4_000019FC
    rlwinm r4, r7, 0, 8, 8
    subis r0, r4, 0x80
    cmplwi r0, 0x0
    beq lbl_fn_803073C4_000019FC
    li r6, 0x0
lbl_fn_803073C4_000019FC:
    cmpwi r6, 0x0
    bne lbl_fn_803073C4_00001A18
    rlwinm r4, r7, 0, 7, 7
    subis r0, r4, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_803073C4_00001A18
    li r5, 0x0
lbl_fn_803073C4_00001A18:
    cmpwi r5, 0x0
    lwz r4, 0x14c0(r3)
    bne lbl_fn_803073C4_00001A34
    lwz r0, 0x1528(r3)
    srawi r0, r0, 3
    addze r0, r0
    b lbl_fn_803073C4_00001A38
lbl_fn_803073C4_00001A34:
    lwz r0, 0x1528(r3)
lbl_fn_803073C4_00001A38:
    cmpw r4, r0
    ble lbl_fn_803073C4_000030E0
    lwz r0, 0x14cc(r3)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r3)
    b lbl_fn_803073C4_000030E0
    addi r3, r3, 0xc64
    bl fn_80126214
    lwz r0, 0xc90(r24)
    cmpwi r0, 0x0
    beq lbl_fn_803073C4_00001A70
    lwz r0, 0x14cc(r24)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r24)
lbl_fn_803073C4_00001A70:
    addi r4, r24, 0xcbc
    addi r20, r1, 0x31c
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r20
    lfs f2, 0xcc4(r24)
    stfs f2, 0x324(r1)
    psq_st f1, 0x0(r20), 0, 0
    bl fn_805F9920
    lfs f0, lbl_80884B68
    fmr f30, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_803073C4_00001C7C
    addi r21, r1, 0x26c
    psq_l f1, 0x0(r20), 0, 0
    lfs f2, 0x324(r1)
    mr r3, r21
    psq_st f1, 0x0(r21), 0, 0
    mr r4, r21
    stfs f2, 0x274(r1)
    bl fn_805F98D0
    lfs f2, 0x274(r1)
    addi r20, r1, 0x278
    psq_l f1, 0x0(r21), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884B40
    psq_st f1, 0x0(r20), 0, 0
    frsp f3, f3
    stfs f2, 0x280(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_803073C4_00001B0C
    lfs f3, 0x278(r1)
    lfs f0, lbl_80884B20
    fcmpo cr0, f3, f0
    ble lbl_fn_803073C4_00001B00
    lfs f0, lbl_80884B44
    b lbl_fn_803073C4_00001B04
lbl_fn_803073C4_00001B00:
    lfs f0, lbl_80884B48
lbl_fn_803073C4_00001B04:
    stfs f0, 0x1c8(r1)
    b lbl_fn_803073C4_00001B20
lbl_fn_803073C4_00001B0C:
    frsp f2, f2
    lfs f1, 0x278(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x1c8(r1)
lbl_fn_803073C4_00001B20:
    lfs f0, 0x1c8(r1)
    addi r3, r1, 0x4f8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884B20
    addi r4, r1, 0x1b8
    lfs f28, 0x500(r1)
    mr r5, r4
    lfs f27, 0x4fc(r1)
    addi r3, r1, 0x528
    lfs f13, 0x4f8(r1)
    lfs f12, 0x510(r1)
    lfs f11, 0x50c(r1)
    lfs f10, 0x508(r1)
    lfs f9, 0x520(r1)
    lfs f8, 0x51c(r1)
    lfs f7, 0x518(r1)
    lfs f6, 0x524(r1)
    lfs f5, 0x514(r1)
    lfs f4, 0x504(r1)
    lfs f0, lbl_80884B38
    psq_l f1, 0x0(r20), 0, 0
    lfs f2, 0x280(r1)
    stfs f3, 0x558(r1)
    stfs f3, 0x55c(r1)
    stfs f3, 0x560(r1)
    stfs f0, 0x564(r1)
    stfs f13, 0x188(r1)
    stfs f27, 0x18c(r1)
    stfs f28, 0x190(r1)
    stfs f13, 0x528(r1)
    stfs f27, 0x52c(r1)
    stfs f28, 0x530(r1)
    stfs f10, 0x194(r1)
    stfs f11, 0x198(r1)
    stfs f12, 0x19c(r1)
    stfs f10, 0x538(r1)
    stfs f11, 0x53c(r1)
    stfs f12, 0x540(r1)
    stfs f7, 0x1a0(r1)
    stfs f8, 0x1a4(r1)
    stfs f9, 0x1a8(r1)
    stfs f7, 0x548(r1)
    stfs f8, 0x54c(r1)
    stfs f9, 0x550(r1)
    stfs f4, 0x1ac(r1)
    stfs f5, 0x1b0(r1)
    stfs f6, 0x1b4(r1)
    stfs f4, 0x534(r1)
    stfs f5, 0x544(r1)
    stfs f6, 0x554(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c0(r1)
    bl fn_805F9750
    lfs f2, 0x1c0(r1)
    lfs f0, lbl_80884B40
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_803073C4_00001C3C
    lfs f3, 0x1bc(r1)
    lfs f0, lbl_80884B20
    fcmpo cr0, f3, f0
    ble lbl_fn_803073C4_00001C2C
    lfs f0, lbl_80884B44
    b lbl_fn_803073C4_00001C30
lbl_fn_803073C4_00001C2C:
    lfs f0, lbl_80884B48
lbl_fn_803073C4_00001C30:
    fneg f0, f0
    stfs f0, 0x1c4(r1)
    b lbl_fn_803073C4_00001C50
lbl_fn_803073C4_00001C3C:
    lfs f1, 0x1bc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x1c4(r1)
lbl_fn_803073C4_00001C50:
    lfs f2, lbl_80884B20
    addi r3, r1, 0x1c4
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x328
    stfs f2, 0x1cc(r1)
    stfs f2, 0x280(r1)
    frsp f2, f2
    psq_st f1, 0x0(r20), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x330(r1)
    b lbl_fn_803073C4_000030E0
lbl_fn_803073C4_00001C7C:
    psq_l f1, 0x534(r24), 0, 0
    addi r3, r1, 0x328
    lfs f2, 0x53c(r24)
    stfs f2, 0x330(r1)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_803073C4_000030E0
    addi r3, r3, 0x14d8
    lfs f0, lbl_80884B40
    lfs f2, 0x8(r3)
    addi r20, r1, 0x260
    psq_l f1, 0x0(r3), 0, 0
    fabs f3, f2
    psq_st f1, 0x0(r20), 0, 0
    stfs f2, 0x268(r1)
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_803073C4_00001CE4
    lfs f3, 0x260(r1)
    lfs f0, lbl_80884B20
    fcmpo cr0, f3, f0
    ble lbl_fn_803073C4_00001CD8
    lfs f0, lbl_80884B44
    b lbl_fn_803073C4_00001CDC
lbl_fn_803073C4_00001CD8:
    lfs f0, lbl_80884B48
lbl_fn_803073C4_00001CDC:
    stfs f0, 0x180(r1)
    b lbl_fn_803073C4_00001CF8
lbl_fn_803073C4_00001CE4:
    frsp f2, f2
    lfs f1, 0x260(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x180(r1)
lbl_fn_803073C4_00001CF8:
    lfs f0, 0x180(r1)
    addi r3, r1, 0x488
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884B20
    addi r4, r1, 0x170
    lfs f28, 0x490(r1)
    mr r5, r4
    lfs f27, 0x48c(r1)
    addi r3, r1, 0x4b8
    lfs f13, 0x488(r1)
    lfs f12, 0x4a0(r1)
    lfs f11, 0x49c(r1)
    lfs f10, 0x498(r1)
    lfs f9, 0x4b0(r1)
    lfs f8, 0x4ac(r1)
    lfs f7, 0x4a8(r1)
    lfs f6, 0x4b4(r1)
    lfs f5, 0x4a4(r1)
    lfs f4, 0x494(r1)
    lfs f0, lbl_80884B38
    psq_l f1, 0x0(r20), 0, 0
    lfs f2, 0x268(r1)
    stfs f3, 0x4e8(r1)
    stfs f3, 0x4ec(r1)
    stfs f3, 0x4f0(r1)
    stfs f0, 0x4f4(r1)
    stfs f13, 0x140(r1)
    stfs f27, 0x144(r1)
    stfs f28, 0x148(r1)
    stfs f13, 0x4b8(r1)
    stfs f27, 0x4bc(r1)
    stfs f28, 0x4c0(r1)
    stfs f10, 0x14c(r1)
    stfs f11, 0x150(r1)
    stfs f12, 0x154(r1)
    stfs f10, 0x4c8(r1)
    stfs f11, 0x4cc(r1)
    stfs f12, 0x4d0(r1)
    stfs f7, 0x158(r1)
    stfs f8, 0x15c(r1)
    stfs f9, 0x160(r1)
    stfs f7, 0x4d8(r1)
    stfs f8, 0x4dc(r1)
    stfs f9, 0x4e0(r1)
    stfs f4, 0x164(r1)
    stfs f5, 0x168(r1)
    stfs f6, 0x16c(r1)
    stfs f4, 0x4c4(r1)
    stfs f5, 0x4d4(r1)
    stfs f6, 0x4e4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x178(r1)
    bl fn_805F9750
    lfs f2, 0x178(r1)
    lfs f0, lbl_80884B40
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_803073C4_00001E14
    lfs f3, 0x174(r1)
    lfs f0, lbl_80884B20
    fcmpo cr0, f3, f0
    ble lbl_fn_803073C4_00001E04
    lfs f0, lbl_80884B44
    b lbl_fn_803073C4_00001E08
lbl_fn_803073C4_00001E04:
    lfs f0, lbl_80884B48
lbl_fn_803073C4_00001E08:
    fneg f0, f0
    stfs f0, 0x17c(r1)
    b lbl_fn_803073C4_00001E28
lbl_fn_803073C4_00001E14:
    lfs f1, 0x174(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x17c(r1)
lbl_fn_803073C4_00001E28:
    lfs f0, lbl_80884B20
    addi r3, r1, 0x17c
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x328
    fmr f2, f0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x268(r1)
    frsp f2, f2
    stfs f0, 0x184(r1)
    stfs f2, 0x330(r1)
    lwz r0, 0x14bc(r24)
    psq_st f1, 0x0(r20), 0, 0
    cmpwi r0, 0x0
    lfs f27, 0x2e4(r24)
    bne lbl_fn_803073C4_00001F20
    lwz r0, 0x58c(r24)
    cmpwi r0, 0x9
    bne lbl_fn_803073C4_00001EC4
    lfs f0, lbl_80884B6C
    fcmpo cr0, f27, f0
    cror eq, gt, eq
    bne lbl_fn_803073C4_00001EC4
    lwz r20, 0x14c8(r24)
    lwz r3, 0x14e8(r24)
    bl fn_80219E6C
    mr r7, r3
    lwz r3, lbl_8087F048
    lfs f1, lbl_80884B20
    mr r6, r24
    mr r8, r20
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    lwz r3, 0x14bc(r24)
    addi r0, r3, 0x1
    stw r0, 0x14bc(r24)
    b lbl_fn_803073C4_000030E0
lbl_fn_803073C4_00001EC4:
    cmpwi r0, 0xa
    bne lbl_fn_803073C4_000030E0
    lfs f0, lbl_80884B24
    fcmpo cr0, f27, f0
    cror eq, gt, eq
    bne lbl_fn_803073C4_000030E0
    lwz r20, 0x14c8(r24)
    lwz r3, 0x14f8(r24)
    bl fn_80219E6C
    mr r7, r3
    lwz r3, lbl_8087F048
    lfs f1, lbl_80884B20
    mr r6, r24
    mr r8, r20
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    lwz r3, 0x14bc(r24)
    addi r0, r3, 0x1
    stw r0, 0x14bc(r24)
    b lbl_fn_803073C4_000030E0
lbl_fn_803073C4_00001F20:
    addi r3, r24, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f27, f1
    cror eq, gt, eq
    bne lbl_fn_803073C4_000030E0
    lwz r0, 0x14cc(r24)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r24)
    b lbl_fn_803073C4_000030E0
    addi r3, r3, 0x14d8
    lfs f0, lbl_80884B40
    lfs f2, 0x8(r3)
    addi r20, r1, 0x254
    psq_l f1, 0x0(r3), 0, 0
    fabs f3, f2
    psq_st f1, 0x0(r20), 0, 0
    stfs f2, 0x25c(r1)
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_803073C4_00001F98
    lfs f3, 0x254(r1)
    lfs f0, lbl_80884B20
    fcmpo cr0, f3, f0
    ble lbl_fn_803073C4_00001F8C
    lfs f0, lbl_80884B44
    b lbl_fn_803073C4_00001F90
lbl_fn_803073C4_00001F8C:
    lfs f0, lbl_80884B48
lbl_fn_803073C4_00001F90:
    stfs f0, 0x138(r1)
    b lbl_fn_803073C4_00001FAC
lbl_fn_803073C4_00001F98:
    frsp f2, f2
    lfs f1, 0x254(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x138(r1)
lbl_fn_803073C4_00001FAC:
    lfs f0, 0x138(r1)
    addi r3, r1, 0x418
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884B20
    addi r4, r1, 0x128
    lfs f28, 0x420(r1)
    mr r5, r4
    lfs f27, 0x41c(r1)
    addi r3, r1, 0x448
    lfs f13, 0x418(r1)
    lfs f12, 0x430(r1)
    lfs f11, 0x42c(r1)
    lfs f10, 0x428(r1)
    lfs f9, 0x440(r1)
    lfs f8, 0x43c(r1)
    lfs f7, 0x438(r1)
    lfs f6, 0x444(r1)
    lfs f5, 0x434(r1)
    lfs f4, 0x424(r1)
    lfs f0, lbl_80884B38
    psq_l f1, 0x0(r20), 0, 0
    lfs f2, 0x25c(r1)
    stfs f3, 0x478(r1)
    stfs f3, 0x47c(r1)
    stfs f3, 0x480(r1)
    stfs f0, 0x484(r1)
    stfs f13, 0xf8(r1)
    stfs f27, 0xfc(r1)
    stfs f28, 0x100(r1)
    stfs f13, 0x448(r1)
    stfs f27, 0x44c(r1)
    stfs f28, 0x450(r1)
    stfs f10, 0x104(r1)
    stfs f11, 0x108(r1)
    stfs f12, 0x10c(r1)
    stfs f10, 0x458(r1)
    stfs f11, 0x45c(r1)
    stfs f12, 0x460(r1)
    stfs f7, 0x110(r1)
    stfs f8, 0x114(r1)
    stfs f9, 0x118(r1)
    stfs f7, 0x468(r1)
    stfs f8, 0x46c(r1)
    stfs f9, 0x470(r1)
    stfs f4, 0x11c(r1)
    stfs f5, 0x120(r1)
    stfs f6, 0x124(r1)
    stfs f4, 0x454(r1)
    stfs f5, 0x464(r1)
    stfs f6, 0x474(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x130(r1)
    bl fn_805F9750
    lfs f2, 0x130(r1)
    lfs f0, lbl_80884B40
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_803073C4_000020C8
    lfs f3, 0x12c(r1)
    lfs f0, lbl_80884B20
    fcmpo cr0, f3, f0
    ble lbl_fn_803073C4_000020B8
    lfs f0, lbl_80884B44
    b lbl_fn_803073C4_000020BC
lbl_fn_803073C4_000020B8:
    lfs f0, lbl_80884B48
lbl_fn_803073C4_000020BC:
    fneg f0, f0
    stfs f0, 0x134(r1)
    b lbl_fn_803073C4_000020DC
lbl_fn_803073C4_000020C8:
    lfs f1, 0x12c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x134(r1)
lbl_fn_803073C4_000020DC:
    lfs f4, lbl_80884B20
    addi r3, r1, 0x134
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x328
    fmr f2, f4
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x25c(r1)
    frsp f2, f2
    stfs f4, 0x13c(r1)
    stfs f2, 0x330(r1)
    lwz r3, 0x14bc(r24)
    psq_st f1, 0x0(r20), 0, 0
    cmpwi r3, 0x0
    lfs f31, 0x2e4(r24)
    bne lbl_fn_803073C4_0000216C
    addi r3, r24, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_803073C4_000030E0
    lfs f1, lbl_80884B20
    addi r3, r24, 0xb0
    lfs f2, lbl_80884B70
    li r4, 0x0
    li r5, 0x146
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x14bc(r24)
    li r0, 0x0
    stw r0, 0x14c0(r24)
    addi r0, r3, 0x1
    stw r0, 0x14bc(r24)
    b lbl_fn_803073C4_000030E0
lbl_fn_803073C4_0000216C:
    cmpwi r3, 0x1
    bne lbl_fn_803073C4_00002224
    lwz r0, 0x14c0(r24)
    cmpwi r0, 0x1e
    ble lbl_fn_803073C4_000030E0
    fmr f1, f4
    lfs f2, lbl_80884B70
    addi r3, r24, 0xb0
    li r4, 0x0
    li r5, 0x147
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    addi r3, r24, 0x152c
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80884B20
    li r3, -0x1
    lfs f1, lbl_80884B38
    li r0, 0x1
    stfs f0, 0xdc(r1)
    addi r4, r24, 0x152c
    addi r5, r24, 0xb0
    addi r7, r1, 0xd0
    stfs f0, 0xe0(r1)
    addi r8, r1, 0xdc
    addi r9, r1, 0xe8
    li r6, 0x0
    stfs f0, 0xe4(r1)
    li r10, -0x1
    stfs f0, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f0, 0xd8(r1)
    stfs f1, 0xe8(r1)
    stfs f1, 0xec(r1)
    stfs f1, 0xf0(r1)
    stfs f1, 0xf4(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, 0x14bc(r24)
    addi r0, r3, 0x1
    stw r0, 0x14bc(r24)
    b lbl_fn_803073C4_000030E0
lbl_fn_803073C4_00002224:
    cmpwi r3, 0x2
    bne lbl_fn_803073C4_00002248
    lfs f0, lbl_80884B24
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_803073C4_000030E0
    addi r0, r3, 0x1
    stw r0, 0x14bc(r24)
    b lbl_fn_803073C4_000030E0
lbl_fn_803073C4_00002248:
    lwz r0, 0x14c0(r24)
    srwi r3, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r3
    subf. r0, r3, r0
    bne lbl_fn_803073C4_0000263C
    lfs f3, lbl_80884B24
    lfs f0, lbl_80884B74
    fsubs f3, f31, f3
    fdivs f0, f3, f0
    fcmpo cr0, f0, f4
    ble lbl_fn_803073C4_0000227C
    b lbl_fn_803073C4_00002280
lbl_fn_803073C4_0000227C:
    fmr f0, f4
lbl_fn_803073C4_00002280:
    lfs f3, lbl_80884B38
    fcmpo cr0, f0, f3
    bge lbl_fn_803073C4_000022B0
    lfs f0, lbl_80884B24
    lfs f3, lbl_80884B74
    fsubs f4, f31, f0
    lfs f0, lbl_80884B20
    fdivs f3, f4, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_803073C4_000022AC
    b lbl_fn_803073C4_000022B0
lbl_fn_803073C4_000022AC:
    fmr f3, f0
lbl_fn_803073C4_000022B0:
    lfs f0, lbl_80884B78
    lis r3, lbl_80748DC0@ha
    lfs f2, 0x530(r24)
    addi r3, r3, lbl_80748DC0@l
    fmuls f28, f0, f3
    addi r5, r1, 0x310
    psq_l f1, 0x528(r24), 0, 0
    addi r4, r3, 0x188
    psq_st f1, 0x0(r5), 0, 0
    addi r3, r24, 0xb0
    stfs f2, 0x318(r1)
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803073C4_000022F4
    li r20, 0x0
    b lbl_fn_803073C4_00002300
lbl_fn_803073C4_000022F4:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r24)
    add r20, r3, r0
lbl_fn_803073C4_00002300:
    lis r4, lbl_80748DC0@ha
    addi r3, r24, 0xb0
    addi r4, r4, lbl_80748DC0@l
    li r5, 0x0
    addi r4, r4, 0x191
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803073C4_00002328
    li r5, 0x0
    b lbl_fn_803073C4_00002334
lbl_fn_803073C4_00002328:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r24)
    add r5, r3, r0
lbl_fn_803073C4_00002334:
    cmpwi r20, 0x0
    beq lbl_fn_803073C4_000023BC
    cmpwi r5, 0x0
    beq lbl_fn_803073C4_000023BC
    lfs f6, 0x2c(r5)
    addi r4, r1, 0x248
    lfs f3, 0x2c(r20)
    addi r3, r1, 0x310
    lfs f7, 0x1c(r5)
    lfs f4, 0x1c(r20)
    fadds f9, f3, f6
    lfs f8, 0xc(r5)
    lfs f5, 0xc(r20)
    fadds f10, f4, f7
    lfs f0, lbl_80884B7C
    fadds f11, f5, f8
    stfs f8, 0x224(r1)
    fmuls f2, f9, f0
    fmuls f8, f10, f0
    stfs f7, 0x228(r1)
    fmuls f0, f11, f0
    stfs f8, 0x24c(r1)
    stfs f0, 0x248(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f6, 0x22c(r1)
    stfs f5, 0x230(r1)
    stfs f4, 0x234(r1)
    stfs f3, 0x238(r1)
    stfs f11, 0x23c(r1)
    stfs f10, 0x240(r1)
    stfs f9, 0x244(r1)
    stfs f2, 0x250(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x318(r1)
lbl_fn_803073C4_000023BC:
    lfs f4, 0x14e0(r24)
    lfs f3, 0x14dc(r24)
    lfs f0, 0x14d8(r24)
    fmuls f4, f4, f28
    fmuls f3, f3, f28
    fmuls f0, f0, f28
    stfs f4, 0x30c(r1)
    stfs f0, 0x304(r1)
    stfs f3, 0x308(r1)
    lwz r3, 0x1508(r24)
    bl fn_80219E6C
    lis r4, lbl_80748CE8@ha
    lfs f27, lbl_80884B60
    lfd f28, lbl_80748CE8@l(r4)
    mr r22, r3
    li r23, 0x0
    lis r21, 0x4330
    li r20, -0x1
lbl_fn_803073C4_00002404:
    lfs f3, 0x318(r1)
    xoris r0, r23, 0x8000
    lfs f0, 0x30c(r1)
    mr r4, r24
    lfs f5, 0x314(r1)
    mr r5, r22
    fadds f6, f3, f0
    lfs f4, 0x308(r1)
    lfs f3, 0x310(r1)
    addi r7, r1, 0x2f8
    fadds f5, f5, f4
    lfs f0, 0x304(r1)
    fadds f4, f3, f0
    stw r0, 0x6cc(r1)
    lfs f0, 0x314(r1)
    addi r8, r24, 0x534
    stw r21, 0x6c8(r1)
    li r9, 0x0
    lfd f3, 0x6c8(r1)
    li r10, 0x1e
    stfs f4, 0x2f8(r1)
    fsubs f4, f3, f28
    lfs f1, lbl_80884B20
    stfs f5, 0x2fc(r1)
    lfs f2, lbl_80884B38
    stfs f6, 0x300(r1)
    lfs f3, 0x58(r22)
    fmuls f3, f4, f3
    stw r20, 0x8(r1)
    stw r20, 0xc(r1)
    fmadds f0, f27, f3, f0
    lwz r3, lbl_8087F048
    stfs f0, 0x314(r1)
    lwz r6, 0x14c8(r24)
    bl fn_800FAB80
    addi r23, r23, 0x1
    cmpwi r23, 0x5
    blt lbl_fn_803073C4_00002404
    lfs f1, lbl_80884B80
    addi r3, r1, 0x5f8
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x304
    addi r3, r1, 0x5f8
    mr r5, r4
    bl fn_805F93C0
    lis r3, lbl_80748CE8@ha
    lfs f27, lbl_80884B60
    lfd f28, lbl_80748CE8@l(r3)
    li r23, 0x0
    lis r21, 0x4330
    li r20, -0x1
lbl_fn_803073C4_000024D4:
    lfs f3, 0x318(r1)
    xoris r0, r23, 0x8000
    lfs f0, 0x30c(r1)
    mr r4, r24
    lfs f5, 0x314(r1)
    mr r5, r22
    fadds f6, f3, f0
    lfs f4, 0x308(r1)
    lfs f3, 0x310(r1)
    addi r7, r1, 0x2ec
    fadds f5, f5, f4
    lfs f0, 0x304(r1)
    fadds f4, f3, f0
    stw r0, 0x6cc(r1)
    lfs f0, 0x314(r1)
    addi r8, r24, 0x534
    stw r21, 0x6c8(r1)
    li r9, 0x0
    lfd f3, 0x6c8(r1)
    li r10, 0x1e
    stfs f4, 0x2ec(r1)
    fsubs f4, f3, f28
    lfs f1, lbl_80884B20
    stfs f5, 0x2f0(r1)
    lfs f2, lbl_80884B38
    stfs f6, 0x2f4(r1)
    lfs f3, 0x58(r22)
    fmuls f3, f4, f3
    stw r20, 0x8(r1)
    stw r20, 0xc(r1)
    fmadds f0, f27, f3, f0
    lwz r3, lbl_8087F048
    stfs f0, 0x314(r1)
    lwz r6, 0x14c8(r24)
    bl fn_800FAB80
    addi r23, r23, 0x1
    cmpwi r23, 0x5
    blt lbl_fn_803073C4_000024D4
    lfs f1, lbl_80884B84
    addi r3, r1, 0x5c8
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x304
    addi r3, r1, 0x5c8
    mr r5, r4
    bl fn_805F93C0
    lis r3, lbl_80748CE8@ha
    lfs f28, lbl_80884B60
    lfd f27, lbl_80748CE8@l(r3)
    li r23, 0x0
    lis r21, 0x4330
    li r20, -0x1
lbl_fn_803073C4_000025A4:
    lfs f3, 0x318(r1)
    xoris r0, r23, 0x8000
    lfs f0, 0x30c(r1)
    mr r4, r24
    lfs f5, 0x314(r1)
    mr r5, r22
    fadds f6, f3, f0
    lfs f4, 0x308(r1)
    lfs f3, 0x310(r1)
    addi r7, r1, 0x2e0
    fadds f5, f5, f4
    lfs f0, 0x304(r1)
    fadds f4, f3, f0
    stw r0, 0x6cc(r1)
    lfs f0, 0x314(r1)
    addi r8, r24, 0x534
    stw r21, 0x6c8(r1)
    li r9, 0x0
    lfd f3, 0x6c8(r1)
    li r10, 0x1e
    stfs f4, 0x2e0(r1)
    fsubs f4, f3, f27
    lfs f1, lbl_80884B20
    stfs f5, 0x2e4(r1)
    lfs f2, lbl_80884B38
    stfs f6, 0x2e8(r1)
    lfs f3, 0x58(r22)
    fmuls f3, f4, f3
    stw r20, 0x8(r1)
    stw r20, 0xc(r1)
    fmadds f0, f28, f3, f0
    lwz r3, lbl_8087F048
    stfs f0, 0x314(r1)
    lwz r6, 0x14c8(r24)
    bl fn_800FAB80
    addi r23, r23, 0x1
    cmpwi r23, 0x5
    blt lbl_fn_803073C4_000025A4
lbl_fn_803073C4_0000263C:
    addi r3, r24, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_803073C4_000030E0
    lwz r0, 0x14cc(r24)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r24)
    b lbl_fn_803073C4_000030E0
    addi r3, r3, 0x1540
    lfs f0, lbl_80884B40
    lfs f2, 0x8(r3)
    addi r20, r1, 0x218
    psq_l f1, 0x0(r3), 0, 0
    fabs f3, f2
    psq_st f1, 0x0(r20), 0, 0
    stfs f2, 0x220(r1)
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_803073C4_000026B4
    lfs f3, 0x218(r1)
    lfs f0, lbl_80884B20
    fcmpo cr0, f3, f0
    ble lbl_fn_803073C4_000026A8
    lfs f0, lbl_80884B44
    b lbl_fn_803073C4_000026AC
lbl_fn_803073C4_000026A8:
    lfs f0, lbl_80884B48
lbl_fn_803073C4_000026AC:
    stfs f0, 0xc8(r1)
    b lbl_fn_803073C4_000026C8
lbl_fn_803073C4_000026B4:
    frsp f2, f2
    lfs f1, 0x218(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xc8(r1)
lbl_fn_803073C4_000026C8:
    lfs f0, 0xc8(r1)
    addi r3, r1, 0x3a8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884B20
    addi r4, r1, 0xb8
    lfs f28, 0x3b0(r1)
    mr r5, r4
    lfs f27, 0x3ac(r1)
    addi r3, r1, 0x3d8
    lfs f13, 0x3a8(r1)
    lfs f12, 0x3c0(r1)
    lfs f11, 0x3bc(r1)
    lfs f10, 0x3b8(r1)
    lfs f9, 0x3d0(r1)
    lfs f8, 0x3cc(r1)
    lfs f7, 0x3c8(r1)
    lfs f6, 0x3d4(r1)
    lfs f5, 0x3c4(r1)
    lfs f4, 0x3b4(r1)
    lfs f0, lbl_80884B38
    psq_l f1, 0x0(r20), 0, 0
    lfs f2, 0x220(r1)
    stfs f3, 0x408(r1)
    stfs f3, 0x40c(r1)
    stfs f3, 0x410(r1)
    stfs f0, 0x414(r1)
    stfs f13, 0x88(r1)
    stfs f27, 0x8c(r1)
    stfs f28, 0x90(r1)
    stfs f13, 0x3d8(r1)
    stfs f27, 0x3dc(r1)
    stfs f28, 0x3e0(r1)
    stfs f10, 0x94(r1)
    stfs f11, 0x98(r1)
    stfs f12, 0x9c(r1)
    stfs f10, 0x3e8(r1)
    stfs f11, 0x3ec(r1)
    stfs f12, 0x3f0(r1)
    stfs f7, 0xa0(r1)
    stfs f8, 0xa4(r1)
    stfs f9, 0xa8(r1)
    stfs f7, 0x3f8(r1)
    stfs f8, 0x3fc(r1)
    stfs f9, 0x400(r1)
    stfs f4, 0xac(r1)
    stfs f5, 0xb0(r1)
    stfs f6, 0xb4(r1)
    stfs f4, 0x3e4(r1)
    stfs f5, 0x3f4(r1)
    stfs f6, 0x404(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xc0(r1)
    bl fn_805F9750
    lfs f2, 0xc0(r1)
    lfs f0, lbl_80884B40
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_803073C4_000027E4
    lfs f3, 0xbc(r1)
    lfs f0, lbl_80884B20
    fcmpo cr0, f3, f0
    ble lbl_fn_803073C4_000027D4
    lfs f0, lbl_80884B44
    b lbl_fn_803073C4_000027D8
lbl_fn_803073C4_000027D4:
    lfs f0, lbl_80884B48
lbl_fn_803073C4_000027D8:
    fneg f0, f0
    stfs f0, 0xc4(r1)
    b lbl_fn_803073C4_000027F8
lbl_fn_803073C4_000027E4:
    lfs f1, 0xbc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xc4(r1)
lbl_fn_803073C4_000027F8:
    lfs f0, lbl_80884B20
    addi r3, r1, 0xc4
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x328
    fmr f2, f0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x220(r1)
    frsp f2, f2
    stfs f0, 0xcc(r1)
    stfs f2, 0x330(r1)
    lwz r0, 0x14bc(r24)
    psq_st f1, 0x0(r20), 0, 0
    cmpwi r0, 0x0
    lfs f27, 0x2e4(r24)
    bne lbl_fn_803073C4_00002880
    addi r3, r24, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f27, f1
    cror eq, gt, eq
    bne lbl_fn_803073C4_00002D50
    lfs f1, lbl_80884B20
    addi r3, r24, 0xb0
    lfs f2, lbl_80884B70
    li r4, 0x0
    li r5, 0x14b
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x14bc(r24)
    addi r0, r3, 0x1
    stw r0, 0x14bc(r24)
    b lbl_fn_803073C4_00002D50
lbl_fn_803073C4_00002880:
    lwz r0, 0x14c0(r24)
    cmpwi r0, 0x12c
    ble lbl_fn_803073C4_0000289C
    lwz r0, 0x14cc(r24)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r24)
    b lbl_fn_803073C4_00002D50
lbl_fn_803073C4_0000289C:
    mr r4, r24
    addi r3, r1, 0x2d0
    addi r5, r24, 0x528
    bl fn_80176548
    li r20, 0x0
    stw r20, 0x6ac(r1)
    lfs f5, lbl_80884B88
    addi r4, r1, 0x678
    stw r20, 0x6b0(r1)
    addi r5, r1, 0x2d0
    lfs f0, lbl_80884B8C
    addi r6, r1, 0x2c0
    stw r20, 0x6b4(r1)
    lis r7, 0x8002
    lwz r3, lbl_8087EE98
    li r8, 0x0
    stw r20, 0x6b8(r1)
    li r9, 0x0
    lfs f1, 0x2dc(r1)
    lfs f4, 0x1548(r24)
    lfs f3, 0x1540(r24)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    stfs f0, 0x2c4(r1)
    stfs f3, 0x2c0(r1)
    stfs f4, 0x2c8(r1)
    bl fn_8004D388
    cmpwi r3, 0x0
    beq lbl_fn_803073C4_00002B00
    addi r5, r1, 0x688
    lfs f2, 0x690(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x528(r24), 0, 0
    stfs f2, 0x530(r24)
    lwz r0, 0x6b4(r1)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_803073C4_00002B14
    lis r4, lbl_80748DC0@ha
    lfs f1, lbl_80884B38
    addi r4, r4, lbl_80748DC0@l
    addi r3, r1, 0x10
    li r6, 0x0
    li r7, -0x1
    addi r4, r4, 0x19b
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lfs f4, 0x1548(r24)
    addi r4, r1, 0x628
    lfs f5, lbl_80884B54
    addi r5, r1, 0x2d0
    lfs f3, 0x1544(r24)
    addi r6, r1, 0x2a8
    lfs f0, 0x1540(r24)
    fmuls f6, f4, f5
    fmuls f7, f3, f5
    lfs f4, 0x2d8(r1)
    fmuls f5, f0, f5
    lfs f3, 0x2d4(r1)
    lfs f0, 0x2d0(r1)
    fadds f4, f4, f6
    fadds f3, f3, f7
    stfs f5, 0x20c(r1)
    fadds f0, f0, f5
    lwz r3, lbl_8087EE98
    stfs f7, 0x210(r1)
    lis r7, 0x8000
    stfs f6, 0x214(r1)
    li r8, 0x0
    li r9, 0x0
    stfs f0, 0x2a8(r1)
    stfs f3, 0x2ac(r1)
    stfs f4, 0x2b0(r1)
    stw r20, 0x65c(r1)
    stw r20, 0x660(r1)
    stw r20, 0x664(r1)
    stw r20, 0x668(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_803073C4_00002A6C
    addi r4, r24, 0x1540
    lfs f2, 0x1548(r24)
    psq_l f1, 0x0(r4), 0, 0
    addi r20, r1, 0x2b4
    psq_st f1, 0x0(r20), 0, 0
    addi r3, r1, 0x598
    lfs f0, lbl_80884B20
    addi r4, r1, 0x650
    stfs f2, 0x2bc(r1)
    lfs f1, lbl_80884B4C
    stfs f0, 0x2b8(r1)
    bl fn_805F9050
    mr r4, r20
    mr r5, r20
    addi r3, r1, 0x598
    bl fn_805F93C0
    lfs f0, 0x2bc(r1)
    addi r5, r1, 0x200
    lfs f3, 0x2b8(r1)
    mr r3, r20
    fneg f4, f0
    lfs f0, 0x2b4(r1)
    fneg f3, f3
    mr r4, r20
    fneg f0, f0
    stfs f4, 0x208(r1)
    stfs f0, 0x200(r1)
    frsp f2, f4
    stfs f3, 0x204(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r20), 0, 0
    stfs f2, 0x2bc(r1)
    bl fn_805F98D0
    b lbl_fn_803073C4_00002AE4
lbl_fn_803073C4_00002A6C:
    lfs f5, 0x2d4(r1)
    addi r3, r1, 0x2b4
    lfs f3, 0x1544(r24)
    addi r5, r1, 0x1f4
    lfs f4, 0x2d0(r1)
    mr r4, r3
    fadds f6, f5, f3
    lfs f0, 0x1540(r24)
    lfs f3, 0x68c(r1)
    fadds f7, f4, f0
    lfs f0, 0x688(r1)
    fsubs f8, f3, f6
    lfs f5, 0x2d8(r1)
    lfs f4, 0x1548(r24)
    fsubs f0, f0, f7
    stfs f8, 0x1f8(r1)
    fadds f4, f5, f4
    lfs f3, 0x690(r1)
    stfs f0, 0x1f4(r1)
    lfs f0, lbl_80884B20
    fsubs f2, f3, f4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f7, 0x29c(r1)
    stfs f6, 0x2a0(r1)
    stfs f4, 0x2a4(r1)
    stfs f2, 0x1fc(r1)
    stfs f2, 0x2bc(r1)
    stfs f0, 0x2b8(r1)
    bl fn_805F98D0
lbl_fn_803073C4_00002AE4:
    addi r3, r1, 0x2b4
    lfs f2, 0x2bc(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r24, 0x1540
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1548(r24)
    b lbl_fn_803073C4_00002B14
lbl_fn_803073C4_00002B00:
    addi r3, r1, 0x688
    lfs f2, 0x690(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r24), 0, 0
    stfs f2, 0x530(r24)
lbl_fn_803073C4_00002B14:
    lfs f3, 0x1548(r24)
    addi r3, r1, 0x1dc
    lfs f0, 0x1544(r24)
    addi r20, r1, 0x1e8
    fneg f4, f3
    lfs f3, 0x1540(r24)
    fneg f5, f0
    lfs f0, lbl_80884B40
    fneg f3, f3
    stfs f4, 0x1e4(r1)
    frsp f2, f4
    stfs f3, 0x1dc(r1)
    stfs f5, 0x1e0(r1)
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r20), 0, 0
    frsp f3, f3
    stfs f2, 0x1f0(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_803073C4_00002B88
    lfs f3, 0x1e8(r1)
    lfs f0, lbl_80884B20
    fcmpo cr0, f3, f0
    ble lbl_fn_803073C4_00002B7C
    lfs f0, lbl_80884B44
    b lbl_fn_803073C4_00002B80
lbl_fn_803073C4_00002B7C:
    lfs f0, lbl_80884B48
lbl_fn_803073C4_00002B80:
    stfs f0, 0x80(r1)
    b lbl_fn_803073C4_00002B9C
lbl_fn_803073C4_00002B88:
    frsp f2, f2
    lfs f1, 0x1e8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x80(r1)
lbl_fn_803073C4_00002B9C:
    lfs f0, 0x80(r1)
    addi r3, r1, 0x338
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884B20
    addi r4, r1, 0x70
    lfs f28, 0x340(r1)
    mr r5, r4
    lfs f27, 0x33c(r1)
    addi r3, r1, 0x368
    lfs f13, 0x338(r1)
    lfs f12, 0x350(r1)
    lfs f11, 0x34c(r1)
    lfs f10, 0x348(r1)
    lfs f9, 0x360(r1)
    lfs f8, 0x35c(r1)
    lfs f7, 0x358(r1)
    lfs f6, 0x364(r1)
    lfs f5, 0x354(r1)
    lfs f4, 0x344(r1)
    lfs f0, lbl_80884B38
    psq_l f1, 0x0(r20), 0, 0
    lfs f2, 0x1f0(r1)
    stfs f3, 0x398(r1)
    stfs f3, 0x39c(r1)
    stfs f3, 0x3a0(r1)
    stfs f0, 0x3a4(r1)
    stfs f13, 0x40(r1)
    stfs f27, 0x44(r1)
    stfs f28, 0x48(r1)
    stfs f13, 0x368(r1)
    stfs f27, 0x36c(r1)
    stfs f28, 0x370(r1)
    stfs f10, 0x4c(r1)
    stfs f11, 0x50(r1)
    stfs f12, 0x54(r1)
    stfs f10, 0x378(r1)
    stfs f11, 0x37c(r1)
    stfs f12, 0x380(r1)
    stfs f7, 0x58(r1)
    stfs f8, 0x5c(r1)
    stfs f9, 0x60(r1)
    stfs f7, 0x388(r1)
    stfs f8, 0x38c(r1)
    stfs f9, 0x390(r1)
    stfs f4, 0x64(r1)
    stfs f5, 0x68(r1)
    stfs f6, 0x6c(r1)
    stfs f4, 0x374(r1)
    stfs f5, 0x384(r1)
    stfs f6, 0x394(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x78(r1)
    bl fn_805F9750
    lfs f2, 0x78(r1)
    lfs f0, lbl_80884B40
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_803073C4_00002CB8
    lfs f3, 0x74(r1)
    lfs f0, lbl_80884B20
    fcmpo cr0, f3, f0
    ble lbl_fn_803073C4_00002CA8
    lfs f0, lbl_80884B44
    b lbl_fn_803073C4_00002CAC
lbl_fn_803073C4_00002CA8:
    lfs f0, lbl_80884B48
lbl_fn_803073C4_00002CAC:
    fneg f0, f0
    stfs f0, 0x7c(r1)
    b lbl_fn_803073C4_00002CCC
lbl_fn_803073C4_00002CB8:
    lfs f1, 0x74(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x7c(r1)
lbl_fn_803073C4_00002CCC:
    addi r3, r1, 0x7c
    lfs f4, lbl_80884B20
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80748CF0@ha
    psq_st f1, 0x0(r20), 0, 0
    fmr f2, f4
    lfs f0, 0x538(r24)
    lfs f3, 0x1ec(r1)
    stfs f2, 0x1f0(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80748CF0@l(r3)
    stfs f4, 0x84(r1)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_80884B4C
    fcmpo cr0, f4, f0
    ble lbl_fn_803073C4_00002D18
    lfs f0, lbl_80884B90
    fsubs f4, f4, f0
lbl_fn_803073C4_00002D18:
    lfs f0, lbl_80884B94
    fcmpo cr0, f4, f0
    bge lbl_fn_803073C4_00002D2C
    lfs f0, lbl_80884B90
    fadds f4, f4, f0
lbl_fn_803073C4_00002D2C:
    lfs f3, lbl_80884B64
    lfs f0, 0x538(r24)
    fmuls f4, f4, f3
    lfs f3, 0x52c(r24)
    fadds f0, f0, f4
    stfs f0, 0x538(r24)
    lfs f0, 0x2dc(r1)
    fsubs f0, f3, f0
    stfs f0, 0x52c(r24)
lbl_fn_803073C4_00002D50:
    lwz r0, 0x14bc(r24)
    cmpwi r0, 0x1
    bne lbl_fn_803073C4_0000311C
    lis r3, 0x2aab
    lwz r4, 0x14c0(r24)
    subi r0, r3, 0x5555
    mulhw r3, r0, r4
    srwi r0, r3, 31
    add r0, r3, r0
    mulli r0, r0, 0x6
    subf. r0, r0, r4
    bne lbl_fn_803073C4_0000311C
    lwz r20, lbl_8087F048
    lwz r3, 0x1518(r24)
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_80884B20
    stw r0, 0xc(r1)
    mr r3, r20
    lfs f2, lbl_80884B38
    mr r4, r24
    lwz r6, 0x14c8(r24)
    addi r7, r24, 0x528
    addi r8, r24, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    b lbl_fn_803073C4_0000311C
    lfs f27, 0x2e4(r3)
    lfs f0, lbl_80884B98
    fcmpo cr0, f27, f0
    cror eq, lt, eq
    bne lbl_fn_803073C4_00002E38
    lfs f3, 0x1550(r3)
    lis r4, lbl_80748CF0@ha
    lfs f0, 0x538(r3)
    lfd f2, lbl_80748CF0@l(r4)
    fsubs f1, f3, f0
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_80884B4C
    fcmpo cr0, f4, f0
    ble lbl_fn_803073C4_00002E0C
    lfs f0, lbl_80884B90
    fsubs f4, f4, f0
lbl_fn_803073C4_00002E0C:
    lfs f0, lbl_80884B94
    fcmpo cr0, f4, f0
    bge lbl_fn_803073C4_00002E20
    lfs f0, lbl_80884B90
    fadds f4, f4, f0
lbl_fn_803073C4_00002E20:
    lfs f3, lbl_80884B64
    lfs f0, 0x538(r24)
    fmuls f3, f4, f3
    fadds f0, f0, f3
    stfs f0, 0x538(r24)
    b lbl_fn_803073C4_0000311C
lbl_fn_803073C4_00002E38:
    lfs f0, 0x1550(r3)
    li r4, 0x0
    stfs f0, 0x538(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f27, f1
    cror eq, gt, eq
    bne lbl_fn_803073C4_0000311C
    lwz r0, 0x14cc(r24)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r24)
    b lbl_fn_803073C4_0000311C
    lwz r0, 0x14bc(r3)
    lfs f27, 0x2e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803073C4_000030A4
    lfs f0, lbl_80884B24
    fcmpo cr0, f27, f0
    cror eq, gt, eq
    bne lbl_fn_803073C4_000030E0
    li r27, 0x0
    lfs f28, lbl_80884B38
    lfs f31, lbl_80884B20
    mr r20, r27
    addi r31, r1, 0x290
    addi r30, r1, 0x284
    addi r29, r1, 0x1d0
    li r23, 0x0
    li r21, 0x1
    li r22, -0x1
    b lbl_fn_803073C4_00003078
lbl_fn_803073C4_00002EB4:
    lwz r3, lbl_8087F408
    add r4, r24, r23
    addi r26, r4, 0x1578
    cmpwi r3, 0x0
    beq lbl_fn_803073C4_00002ED8
    lwz r4, 0x0(r26)
    bl fn_8011FC10
    mr r25, r3
    b lbl_fn_803073C4_00002EDC
lbl_fn_803073C4_00002ED8:
    li r25, 0x0
lbl_fn_803073C4_00002EDC:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803073C4_00002EF0
    lwz r5, 0x10d8(r3)
    b lbl_fn_803073C4_00002EF4
lbl_fn_803073C4_00002EF0:
    li r5, 0x0
lbl_fn_803073C4_00002EF4:
    cmpwi r5, 0x0
    beq lbl_fn_803073C4_00002F48
    lwz r0, 0x78(r5)
    li r4, 0x0
    lwz r3, 0x4(r26)
    li r6, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803073C4_00002F40
lbl_fn_803073C4_00002F18:
    lwz r7, 0x7c(r5)
    lwzx r0, r7, r6
    cmpw r3, r0
    bne lbl_fn_803073C4_00002F34
    mulli r0, r4, 0x28
    add r5, r7, r0
    b lbl_fn_803073C4_00002F4C
lbl_fn_803073C4_00002F34:
    addi r6, r6, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_803073C4_00002F18
lbl_fn_803073C4_00002F40:
    li r5, 0x0
    b lbl_fn_803073C4_00002F4C
lbl_fn_803073C4_00002F48:
    li r5, 0x0
lbl_fn_803073C4_00002F4C:
    cmpwi r25, 0x0
    beq lbl_fn_803073C4_00003070
    cmpwi r5, 0x0
    beq lbl_fn_803073C4_00003070
    psq_l f1, 0x4(r5), 0, 0
    addi r3, r1, 0x568
    lfs f2, 0xc(r5)
    li r4, 0x79
    stfs f2, 0x298(r1)
    psq_st f1, 0x0(r31), 0, 0
    lfs f1, 0x14(r5)
    bl fn_805F8E70
    stfs f31, 0x1d0(r1)
    fmr f2, f28
    mr r4, r30
    mr r5, r30
    stfs f31, 0x1d4(r1)
    addi r3, r1, 0x568
    psq_l f1, 0x0(r29), 0, 0
    stfs f28, 0x1d8(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x28c(r1)
    bl fn_805F93C0
    mr r3, r25
    bl fn_80176ACC
    mr r3, r25
    li r4, 0x0
    bl fn_800D246C
    stw r20, 0x58c(r25)
    addi r3, r25, 0x7d4
    bl fn_8012D8B8
    mr r3, r25
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    stw r21, 0xd18(r25)
    mr r3, r25
    mr r4, r31
    mr r5, r30
    lwz r0, 0x54c(r25)
    rlwinm r0, r0, 0, 19, 17
    stw r0, 0x54c(r25)
    lwz r12, 0x0(r25)
    lwz r12, 0x80(r12)
    mtctr r12
    bctrl
    mr r3, r26
    mr r4, r27
    bl fn_80232B7C
    stfs f31, 0x20(r1)
    fmr f1, f28
    addi r4, r24, 0x163c
    addi r5, r25, 0xb0
    stfs f31, 0x24(r1)
    addi r7, r1, 0x14
    addi r8, r1, 0x20
    stfs f31, 0x28(r1)
    addi r9, r1, 0x30
    li r6, 0x0
    li r10, -0x1
    stfs f31, 0x14(r1)
    stfs f31, 0x18(r1)
    stfs f31, 0x1c(r1)
    stfs f28, 0x30(r1)
    stfs f28, 0x34(r1)
    stfs f28, 0x38(r1)
    stfs f28, 0x3c(r1)
    stw r22, 0x8(r1)
    stw r21, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_803073C4_00003070:
    addi r27, r27, 0x1
    addi r23, r23, 0x8
lbl_fn_803073C4_00003078:
    lwz r0, 0x1574(r24)
    cmplw r27, r0
    blt lbl_fn_803073C4_00002EB4
    mr r3, r24
    addi r4, r24, 0x1568
    li r5, 0x1
    bl fn_805A4A20
    lwz r3, 0x14bc(r24)
    addi r0, r3, 0x1
    stw r0, 0x14bc(r24)
    b lbl_fn_803073C4_000030E0
lbl_fn_803073C4_000030A4:
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f27, f1
    cror eq, gt, eq
    bne lbl_fn_803073C4_000030E0
    lwz r0, 0x14cc(r24)
    li r3, 0x0
    stw r3, 0x1648(r24)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r24)
    b lbl_fn_803073C4_000030E0
lbl_fn_803073C4_000030D4:
    mr r3, r24
    bl fn_805A4258
    b lbl_fn_803073C4_0000311C
lbl_fn_803073C4_000030E0:
    cmpwi r28, 0x0
    beq lbl_fn_803073C4_00003100
    fmr f1, f30
    mr r3, r24
    fmr f2, f29
    addi r4, r1, 0x328
    bl fn_801426A4
    b lbl_fn_803073C4_0000311C
lbl_fn_803073C4_00003100:
    lfs f0, 0x568(r24)
    fmr f1, f30
    mr r3, r24
    addi r4, r1, 0x328
    fmuls f2, f0, f29
    li r5, 0x0
    bl fn_8013CB68
lbl_fn_803073C4_0000311C:
    addi r11, r1, 0x700
    psq_l f31, 0x748(r1), 0, 0
    lfd f31, 0x740(r1)
    psq_l f30, 0x738(r1), 0, 0
    lfd f30, 0x730(r1)
    psq_l f29, 0x728(r1), 0, 0
    lfd f29, 0x720(r1)
    psq_l f28, 0x718(r1), 0, 0
    lfd f28, 0x710(r1)
    psq_l f27, 0x708(r1), 0, 0
    lfd f27, 0x700(r1)
    bl _restgpr_20
    lwz r0, 0x754(r1)
    mtlr r0
    addi r1, r1, 0x750
    blr
}
