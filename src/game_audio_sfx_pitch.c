#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_8000D0F8(void);
extern void fn_8000D114(void);
extern void fn_8000D124(void);
extern void fn_8000D3A4(void);
extern void fn_8001047C(void);
extern void fn_80011034(void);
extern void fn_80011220(void);
extern void fn_800132EC(void);
extern void fn_80013338(void);
extern void fn_800133B0(void);
extern void fn_8004ED34(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_800897D8(void);
extern void fn_80092954(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_80099E9C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800DC288(void);
extern void fn_800F52F0(void);
extern void fn_800F52F8(void);
extern void fn_800F7260(void);
extern void fn_800F72CC(void);
extern void fn_800F7FA0(void);
extern void fn_800F7FA8(void);
extern void fn_800F7FD8(void);
extern void fn_800F7FF0(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_80109950(void);
extern void fn_801162A0(void);
extern void fn_801255C8(void);
extern void fn_80126214(void);
extern void fn_80128930(void);
extern void fn_8012DB04(void);
extern void fn_8013655C(void);
extern void fn_80139550(void);
extern void fn_80139F2C(void);
extern void fn_80139F3C(void);
extern void fn_80139F58(void);
extern void fn_8013A194(void);
extern void fn_8013C38C(void);
extern void fn_8013C394(void);
extern void fn_8013C3B4(void);
extern void fn_8013C3F4(void);
extern void fn_8013C434(void);
extern void fn_8013C478(void);
extern void fn_8013CB68(void);
extern void fn_801404F8(void);
extern void fn_80140500(void);
extern void fn_8014052C(void);
extern void fn_80140588(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_80164168(void);
extern void fn_8016E970(void);
extern void fn_8016EB48(void);
extern void fn_8016F4D8(void);
extern void fn_8016F530(void);
extern void fn_8016F5EC(void);
extern void fn_80204E04(void);
extern void fn_80219E6C(void);
extern void fn_80237518(void);
extern void fn_802375C4(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239D58(void);
extern void fn_80239DAC(void);
extern void fn_80267B20(void);
extern void fn_80267B28(void);
extern void fn_80276AE4(void);
extern void fn_802F0988(void);
extern void fn_802F0990(void);
extern void fn_80315644(void);
extern void fn_8031564C(void);
extern void fn_80315654(void);
extern void fn_80315964(void);
extern void fn_80315FE0(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_805A3C58(void);
extern void fn_805A3D00(void);
extern void fn_805A3D6C(void);
extern void fn_805A40BC(void);
extern void fn_805A4258(void);
extern void fn_805A4984(void);
extern void fn_805A4A20(void);
extern void fn_805A4F20(void);
extern void fn_805F9920(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_80788528[];
extern u8 jumptable_80788560[];
extern u8 jumptable_80788598[];
extern u8 lbl_80749378[];
extern u8 lbl_80749390[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_807885D0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087DC40;
extern u32 lbl_8087DC44;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_80884CF0;
extern u32 lbl_80884CF4;
extern u32 lbl_80884CF8;
extern u32 lbl_80884CFC;
extern u32 lbl_80884D00;
extern u32 lbl_80884D04;
extern u32 lbl_80884D08;
extern u32 lbl_80884D0C;
extern u32 lbl_80884D10;
extern u32 lbl_80884D14;
extern u32 lbl_80884D18;
extern u32 lbl_80884D1C;
extern u32 lbl_80884D20;
extern u32 lbl_80884D24;
extern u32 lbl_80884D28;
extern u32 lbl_80884D2C;
extern u32 lbl_80884D30;
extern u32 lbl_80884D34;
extern u32 lbl_80884D38;
extern u32 lbl_80884D3C;
extern u32 lbl_80884D40;
extern u32 lbl_80884D44;
extern u32 lbl_80884D48;
extern u32 lbl_80884D4C;
extern u32 lbl_80884D50;

/* Function declarations */
void fn_80313544(void);
void fn_80313848(void);
void fn_8031393C(void);
void fn_80313AAC(void);
void fn_80313E44(void);
void fn_80313FC0(void);
void fn_80313FC4(void);
void fn_80313FC8(void);
void fn_80313FE8(void);
void fn_803140B4(void);
void fn_803140C0(void);
void fn_80314130(void);
void fn_80314384(void);
void fn_80314BD8(void);

asm void fn_80313544(void)
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
    lis r4, lbl_807885D0@ha
    addi r3, r31, 0x1564
    addi r4, r4, lbl_807885D0@l
    stw r4, 0x0(r31)
    bl fn_802377B8
    addi r3, r31, 0x1570
    bl fn_80237518
    addi r3, r31, 0x157c
    bl fn_802377B8
    li r30, 0x0
    li r0, 0x5a
    stw r0, 0x15b8(r31)
    addi r3, r31, 0x1620
    stw r30, 0x15c8(r31)
    stw r30, 0x15cc(r31)
    stw r30, 0x15d0(r31)
    stw r30, 0x15d4(r31)
    stw r30, 0x15d8(r31)
    stw r30, 0x15dc(r31)
    stw r30, 0x15e0(r31)
    stw r30, 0x15e4(r31)
    stw r30, 0x15e8(r31)
    stw r30, 0x15ec(r31)
    stw r30, 0x15f0(r31)
    stw r30, 0x15f4(r31)
    bl fn_802377B8
    lfs f1, lbl_80884CF0
    li r0, -0x1
    lfs f0, lbl_80884CF4
    mr r3, r31
    stw r0, 0x162c(r31)
    addi r4, r1, 0x108
    addi r5, r29, 0x2c
    stw r30, 0x1630(r31)
    stw r30, 0x1634(r31)
    stfs f1, 0x1638(r31)
    stfs f1, 0x163c(r31)
    stfs f0, 0x1640(r31)
    stb r30, 0x1644(r31)
    lfs f1, lbl_8087DC40
    stfs f1, 0x1648(r31)
    lfs f0, lbl_8087DC40
    stfs f0, 0x164c(r31)
    fsubs f0, f0, f1
    lfs f1, lbl_8087DC40
    stfs f1, 0x1650(r31)
    stfs f0, 0x1654(r31)
    stw r30, 0x165c(r31)
    bl fn_805A3D6C
    cmpwi r3, 0x0
    beq lbl_fn_80313544_0000010C
    lis r4, lbl_80749390@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_80749390@l
    addi r5, r1, 0x108
    crclr 6
    bl sprintf
    b lbl_fn_80313544_00000124
lbl_fn_80313544_0000010C:
    lis r4, lbl_80749390@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_80749390@l
    addi r4, r4, 0x1c
    crclr 6
    bl sprintf
lbl_fn_80313544_00000124:
    lwz r12, 0x14b4(r31)
    addi r3, r31, 0x14b4
    addi r4, r1, 0x8
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x958(r31)
    li r4, 0x1
    lwz r3, 0x48(r31)
    ori r0, r0, 0x10
    stw r0, 0x958(r31)
    bl fn_80204E04
    lwz r0, 0x0(r3)
    lis r30, lbl_80749390@ha
    stw r0, 0x14d4(r31)
    addi r30, r30, lbl_80749390@l
    addi r4, r30, 0x48
    lwz r0, 0x4(r3)
    stw r0, 0x14d8(r31)
    lwz r5, 0x8(r3)
    lwz r0, 0xc(r3)
    stw r0, 0x14e0(r31)
    stw r5, 0x14dc(r31)
    lwz r5, 0x10(r3)
    lwz r0, 0x14(r3)
    stw r0, 0x14e8(r31)
    stw r5, 0x14e4(r31)
    lwz r5, 0x18(r3)
    lwz r0, 0x1c(r3)
    stw r0, 0x14f0(r31)
    stw r5, 0x14ec(r31)
    lwz r5, 0x20(r3)
    lwz r0, 0x24(r3)
    stw r0, 0x14f8(r31)
    stw r5, 0x14f4(r31)
    lfs f0, 0x28(r3)
    stfs f0, 0x14fc(r31)
    lfs f0, 0x2c(r3)
    stfs f0, 0x1500(r31)
    lfs f0, 0x30(r3)
    stfs f0, 0x1504(r31)
    lfs f0, 0x34(r3)
    stfs f0, 0x1508(r31)
    lfs f0, 0x38(r3)
    stfs f0, 0x150c(r31)
    lwz r0, 0x3c(r3)
    stw r0, 0x1510(r31)
    lwz r0, 0x40(r3)
    stw r0, 0x1514(r31)
    lwz r0, 0x44(r3)
    stw r0, 0x1518(r31)
    lwz r0, 0x48(r3)
    stw r0, 0x151c(r31)
    lfs f0, 0x4c(r3)
    stfs f0, 0x1520(r31)
    lfs f0, 0x50(r3)
    stfs f0, 0x1524(r31)
    lfs f0, 0x54(r3)
    stfs f0, 0x1528(r31)
    lfs f0, 0x58(r3)
    stfs f0, 0x152c(r31)
    lfs f0, 0x5c(r3)
    stfs f0, 0x1530(r31)
    lfs f0, 0x60(r3)
    stfs f0, 0x1534(r31)
    lwz r5, 0x64(r3)
    lwz r0, 0x68(r3)
    stw r0, 0x153c(r31)
    stw r5, 0x1538(r31)
    lwz r5, 0x6c(r3)
    lwz r0, 0x70(r3)
    stw r0, 0x1544(r31)
    stw r5, 0x1540(r31)
    lwz r5, 0x74(r3)
    lwz r0, 0x78(r3)
    stw r0, 0x154c(r31)
    stw r5, 0x1548(r31)
    lwz r5, 0x7c(r3)
    lwz r0, 0x80(r3)
    stw r0, 0x1554(r31)
    stw r5, 0x1550(r31)
    lwz r0, 0x84(r3)
    stw r0, 0x1558(r31)
    lwz r0, 0x88(r3)
    stw r0, 0x155c(r31)
    lwz r0, 0x8c(r3)
    addi r3, r31, 0x1564
    stw r0, 0x1560(r31)
    bl fn_8023780C
    addi r3, r31, 0x1570
    addi r4, r30, 0x5e
    bl fn_80237654
    addi r3, r31, 0x157c
    addi r4, r30, 0x74
    bl fn_8023780C
    addi r3, r31, 0x1620
    addi r4, r30, 0x8a
    bl fn_8023780C
    lwz r0, 0x12a8(r31)
    li r7, 0xb4
    li r3, 0x546
    li r6, 0x547
    ori r0, r0, 0x1000
    li r5, 0x548
    li r4, 0x5a
    stw r3, 0x15c8(r31)
    mr r3, r31
    stw r7, 0x15d0(r31)
    stw r6, 0x15d8(r31)
    stw r7, 0x15e0(r31)
    stw r5, 0x15e8(r31)
    stw r4, 0x15f0(r31)
    stw r0, 0x12a8(r31)
    lwz r31, 0x21c(r1)
    lwz r30, 0x218(r1)
    lwz r29, 0x214(r1)
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_80313848(void)
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
    beq lbl_fn_80313848_000003D8
    addic. r0, r3, 0x165c
    beq lbl_fn_80313848_00000350
    lwz r4, 0x165c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80313848_00000350
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80313848_00000350
    bl fn_800897D8
lbl_fn_80313848_00000350:
    addic. r31, r29, 0x1620
    beq lbl_fn_80313848_00000370
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80313848_00000370
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80313848_00000370:
    addic. r31, r29, 0x157c
    beq lbl_fn_80313848_00000390
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80313848_00000390
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80313848_00000390:
    addi r3, r29, 0x1570
    li r4, -0x1
    bl fn_802375C4
    addic. r31, r29, 0x1564
    beq lbl_fn_80313848_000003BC
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80313848_000003BC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80313848_000003BC:
    mr r3, r29
    li r4, 0x0
    bl fn_805A3D00
    cmpwi r30, 0x0
    ble lbl_fn_80313848_000003D8
    mr r3, r29
    bl dtor_80084684
lbl_fn_80313848_000003D8:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8031393C(void)
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
    beq lbl_fn_8031393C_00000424
    li r3, 0x0
    b lbl_fn_8031393C_00000550
lbl_fn_8031393C_00000424:
    lwz r3, 0x1438(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8031393C_00000448
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8031393C_00000448
    li r3, 0x0
    b lbl_fn_8031393C_00000550
lbl_fn_8031393C_00000448:
    addi r3, r30, 0x14b4
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_8031393C_00000460
    li r3, 0x0
    b lbl_fn_8031393C_00000550
lbl_fn_8031393C_00000460:
    addi r3, r30, 0x1564
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8031393C_00000490
    addi r3, r30, 0x1570
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_8031393C_00000490
    addi r3, r30, 0x157c
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_8031393C_00000498
lbl_fn_8031393C_00000490:
    li r3, 0x0
    b lbl_fn_8031393C_00000550
lbl_fn_8031393C_00000498:
    addi r3, r30, 0x1620
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_8031393C_000004B0
    li r3, 0x0
    b lbl_fn_8031393C_00000550
lbl_fn_8031393C_000004B0:
    lfs f2, lbl_80884CF8
    lis r5, lbl_80749390@ha
    lfs f0, 0x5b0(r30)
    addi r5, r5, lbl_80749390@l
    addi r4, r5, 0x9f
    lfs f1, lbl_80884CFC
    fmuls f0, f2, f0
    addi r3, r30, 0xb0
    addi r5, r5, 0xa4
    stfs f0, 0x1504(r30)
    bl fn_80099E9C
    addi r3, r30, 0x14b4
    bl fn_8047059C
    mr r31, r3
    addi r3, r30, 0x14b4
    bl fn_80470580
    mr r4, r3
    mr r3, r30
    mr r5, r31
    bl fn_80313AAC
    lwz r0, 0x7ec(r30)
    lwz r3, 0x1438(r30)
    ori r0, r0, 0xc010
    oris r0, r0, 0x200
    cmpwi r3, 0x0
    ori r0, r0, 0x4
    stw r0, 0x7ec(r30)
    beq lbl_fn_8031393C_00000538
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8031393C_00000538:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0xfc(r12)
    mtctr r12
    bctrl
    li r3, 0x1
lbl_fn_8031393C_00000550:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80313AAC(void)
{
    nofralloc
    stwu r1, -0x6d0(r1)
    mflr r0
    lis r7, 0x4330
    lis r6, lbl_807772D0@ha
    stw r0, 0x6d4(r1)
    li r0, 0x0
    addi r6, r6, lbl_807772D0@l
    stfd f31, 0x6c0(r1)
    psq_st f31, 0x6c8(r1), 0, 0
    stfd f30, 0x6b0(r1)
    psq_st f30, 0x6b8(r1), 0, 0
    stfd f29, 0x6a0(r1)
    psq_st f29, 0x6a8(r1), 0, 0
    stw r31, 0x69c(r1)
    mr r31, r3
    addi r3, r1, 0x38
    stw r30, 0x698(r1)
    mr r30, r4
    li r4, 0x0
    stw r29, 0x694(r1)
    mr r29, r5
    li r5, 0x400
    stw r7, 0x660(r1)
    stw r7, 0x668(r1)
    stw r6, 0x28(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x658(r1)
    bl memset
    addi r3, r1, 0x638
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x28(r1)
    mr r4, r30
    mr r5, r29
    addi r3, r1, 0x28
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x28
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x28(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r3, lbl_80749378@ha
    lis r30, lbl_80749390@ha
    lfd f31, lbl_80749378@l(r3)
    addi r30, r30, lbl_80749390@l
    lfs f29, lbl_80884D00
    lfs f30, lbl_80884CF0
lbl_fn_80313AAC_0000063C:
    addi r3, r1, 0x28
    bl fn_8005B3CC
    mr r29, r3
    addi r4, r30, 0xaa
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80313AAC_0000066C
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x15c8(r31)
    b lbl_fn_80313AAC_000008BC
lbl_fn_80313AAC_0000066C:
    mr r3, r29
    addi r4, r30, 0xb7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80313AAC_00000694
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x15d8(r31)
    b lbl_fn_80313AAC_000008BC
lbl_fn_80313AAC_00000694:
    mr r3, r29
    addi r4, r30, 0xc3
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80313AAC_000006BC
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x15d0(r31)
    b lbl_fn_80313AAC_000008BC
lbl_fn_80313AAC_000006BC:
    mr r3, r29
    addi r4, r30, 0xd6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80313AAC_000006E4
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x15e0(r31)
    b lbl_fn_80313AAC_000008BC
lbl_fn_80313AAC_000006E4:
    mr r3, r29
    addi r4, r30, 0xe8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80313AAC_0000070C
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x15e8(r31)
    b lbl_fn_80313AAC_000008BC
lbl_fn_80313AAC_0000070C:
    mr r3, r29
    addi r4, r30, 0xf8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80313AAC_00000734
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x15f0(r31)
    b lbl_fn_80313AAC_000008BC
lbl_fn_80313AAC_00000734:
    mr r3, r29
    addi r4, r30, 0x10e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80313AAC_0000075C
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x15b8(r31)
    b lbl_fn_80313AAC_000008BC
lbl_fn_80313AAC_0000075C:
    mr r3, r29
    addi r4, r30, 0x11c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80313AAC_00000784
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1504(r31)
    b lbl_fn_80313AAC_000008BC
lbl_fn_80313AAC_00000784:
    mr r3, r29
    addi r4, r30, 0x12c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80313AAC_000007AC
    mr r3, r31
    addi r4, r31, 0x162c
    addi r5, r1, 0x28
    bl fn_805A4984
    b lbl_fn_80313AAC_000008BC
lbl_fn_80313AAC_000007AC:
    mr r3, r29
    addi r4, r30, 0x13c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80313AAC_000008BC
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
    cmpwi r3, 0x0
    stw r3, 0x1634(r31)
    beq lbl_fn_80313AAC_000008BC
    addi r3, r31, 0xb0
    addi r4, r30, 0x148
    bl fn_80092954
    cmpwi r3, 0x0
    stw r3, 0x1658(r31)
    beq lbl_fn_80313AAC_000008BC
    lwz r0, 0x18(r3)
    fmuls f0, f29, f30
    stw r0, 0x10(r1)
    lbz r0, 0x10(r1)
    fctiwz f0, f0
    stw r0, 0x664(r1)
    lbz r4, 0x11(r1)
    lfd f1, 0x660(r1)
    lbz r0, 0x12(r1)
    fsubs f1, f1, f31
    stw r4, 0x66c(r1)
    stw r0, 0x664(r1)
    fdivs f4, f1, f29
    lfd f2, 0x668(r1)
    lfd f1, 0x660(r1)
    stfd f0, 0x688(r1)
    lwz r0, 0x68c(r1)
    stb r0, 0xb(r1)
    fsubs f3, f2, f31
    stfs f30, 0x24(r1)
    fsubs f0, f1, f31
    fmuls f2, f29, f4
    stfs f4, 0x18(r1)
    fdivs f1, f3, f29
    stfs f1, 0x1c(r1)
    fdivs f0, f0, f29
    stfs f0, 0x20(r1)
    fmuls f1, f29, f1
    fmuls f0, f29, f0
    fctiwz f2, f2
    fctiwz f1, f1
    fctiwz f0, f0
    stfd f2, 0x670(r1)
    stfd f1, 0x678(r1)
    lwz r5, 0x674(r1)
    stfd f0, 0x680(r1)
    lwz r4, 0x67c(r1)
    lwz r0, 0x684(r1)
    stb r5, 0x8(r1)
    stb r4, 0x9(r1)
    stb r0, 0xa(r1)
    lwz r0, 0x8(r1)
    stw r0, 0xc(r1)
    lbz r0, 0xc(r1)
    stb r0, 0x18(r3)
    lbz r0, 0xd(r1)
    stb r0, 0x19(r3)
    lbz r0, 0xe(r1)
    stb r0, 0x1a(r3)
    lbz r0, 0xf(r1)
    stb r0, 0x1b(r3)
lbl_fn_80313AAC_000008BC:
    addi r3, r1, 0x28
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80313AAC_0000063C
    lwz r0, 0x6d4(r1)
    psq_l f31, 0x6c8(r1), 0, 0
    lfd f31, 0x6c0(r1)
    psq_l f30, 0x6b8(r1), 0, 0
    lfd f30, 0x6b0(r1)
    psq_l f29, 0x6a8(r1), 0, 0
    lfd f29, 0x6a0(r1)
    lwz r31, 0x69c(r1)
    lwz r30, 0x698(r1)
    lwz r29, 0x694(r1)
    mtlr r0
    addi r1, r1, 0x6d0
    blr
}

asm void fn_80313E44(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r4, r3, 0x14d4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x12a4(r3)
    stw r4, 0x64(r3)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_80313E44_000009AC
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80313E44_00000954
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_80313E44_00000954
    li r6, 0x1
lbl_fn_80313E44_00000954:
    cmpwi r6, 0x0
    beq lbl_fn_80313E44_00000970
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80313E44_00000970
    li r4, 0x1
lbl_fn_80313E44_00000970:
    cmpwi r4, 0x0
    beq lbl_fn_80313E44_000009A4
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80313E44_00000998
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_80313E44_00000998
    li r4, 0x1
lbl_fn_80313E44_00000998:
    cmpwi r4, 0x0
    bne lbl_fn_80313E44_000009A4
    li r5, 0x1
lbl_fn_80313E44_000009A4:
    cmpwi r5, 0x0
    bne lbl_fn_80313E44_000009FC
lbl_fn_80313E44_000009AC:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x104(r12)
    mtctr r12
    bctrl
    lwz r3, 0x15d4(r31)
    cmpwi r3, 0x0
    ble lbl_fn_80313E44_000009D4
    subi r0, r3, 0x1
    stw r0, 0x15d4(r31)
lbl_fn_80313E44_000009D4:
    lwz r3, 0x15e4(r31)
    cmpwi r3, 0x0
    ble lbl_fn_80313E44_000009E8
    subi r0, r3, 0x1
    stw r0, 0x15e4(r31)
lbl_fn_80313E44_000009E8:
    lwz r3, 0x15f4(r31)
    cmpwi r3, 0x0
    ble lbl_fn_80313E44_000009FC
    subi r0, r3, 0x1
    stw r0, 0x15f4(r31)
lbl_fn_80313E44_000009FC:
    mr r3, r31
    bl fn_8014C540
    lwz r0, 0x38(r31)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_80313E44_00000A28
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 6
    bne lbl_fn_80313E44_00000A28
    mr r3, r31
    bl fn_80145334
lbl_fn_80313E44_00000A28:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x9
    beq lbl_fn_80313E44_00000A60
    lfs f2, 0x534(r31)
    lfs f1, lbl_80884D04
    lfs f0, lbl_80884D08
    fmuls f1, f2, f1
    stfs f1, 0x534(r31)
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80313E44_00000A60
    lfs f0, lbl_80884CF0
    stfs f0, 0x534(r31)
lbl_fn_80313E44_00000A60:
    mr r3, r31
    bl fn_80315654
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80313FC0(void)
{
    nofralloc
    blr
}

asm void fn_80313FC4(void)
{
    nofralloc
    b fn_80149A30
}

asm void fn_80313FC8(void)
{
    nofralloc
    lis r5, lbl_807C7030@ha
    li r3, 0x1
    addi r5, r5, lbl_807C7030@l
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x18(r4)
    psq_st f1, 0x10(r4), 0, 0
    blr
}

asm void fn_80313FE8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xa
    bne lbl_fn_80313FE8_00000B0C
    lwz r3, 0xd1c(r3)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
    lwz r0, 0x15f0(r31)
    mr r4, r31
    stw r0, 0x15f4(r31)
    li r5, 0x0
    lwz r3, lbl_8087F3C0
    bl fn_80239D58
    cmpwi r3, 0x0
    beq lbl_fn_80313FE8_00000B0C
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_80313FE8_00000B0C:
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80313FE8_00000B38
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x2
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80313FE8_00000B5C
lbl_fn_80313FE8_00000B38:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x9
    beq lbl_fn_80313FE8_00000B5C
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80313FE8_00000B5C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803140B4(void)
{
    nofralloc
    lwz r0, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_803140C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x2
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8016E970
    lwz r0, 0x1634(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803140C0_00000BC0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xc
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_803140C0_00000BD8
lbl_fn_803140C0_00000BC0:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_803140C0_00000BD8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80314130(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_80314130_00000E2C
    lwz r5, 0x14cc(r3)
    li r7, 0x0
    lwz r8, 0x58c(r3)
    li r0, 0x17
    clrlwi r6, r5, 4
    cmplwi r4, 0xd
    oris r6, r6, 0x800
    stw r7, 0x14bc(r3)
    stw r7, 0x14c0(r3)
    stw r7, 0x14c4(r3)
    stw r7, 0x14c8(r3)
    stw r6, 0x14cc(r3)
    stw r7, 0x14d0(r3)
    stw r4, 0x58c(r3)
    sth r0, 0xd3a(r3)
    bgt lbl_fn_80314130_00000E08
    lis r5, jumptable_80788528@ha
    slwi r0, r4, 2
    addi r5, r5, jumptable_80788528@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    oris r0, r6, 0x4000
    stw r0, 0x14cc(r3)
    b lbl_fn_80314130_00000E08
    lwz r4, 0xd1c(r3)
    addi r5, r3, 0x528
    li r6, 0x0
    addi r3, r3, 0xc64
    bl fn_80128930
    lwz r4, 0x64(r31)
    addi r3, r31, 0xc64
    lfs f0, 0x30(r4)
    stfs f0, 0xc8c(r31)
    bl fn_801255C8
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x4000
    stw r0, 0x14cc(r31)
    b lbl_fn_80314130_00000E08
    oris r0, r6, 0x4000
    li r4, 0x4
    sth r4, 0xd3a(r3)
    stw r0, 0x14cc(r3)
    b lbl_fn_80314130_00000E08
    lfs f1, lbl_80884CF4
    li r4, 0x142
    lfs f2, lbl_80884CF0
    li r5, 0x0
    li r6, 0x1
    bl fn_805A4F20
    lwz r0, 0x14cc(r31)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x14cc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x15e0(r31)
    addi r6, r31, 0x15f8
    lwz r0, 0x15d0(r31)
    lwz r4, 0xd1c(r31)
    stw r3, 0x14c8(r31)
    lfs f0, lbl_80884CF0
    stw r5, 0x15e4(r31)
    stw r0, 0x15d4(r31)
    stw r4, 0x161c(r31)
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x1600(r31)
    psq_st f1, 0x0(r6), 0, 0
    stfs f0, 0x1604(r31)
    stfs f0, 0x1608(r31)
    stfs f0, 0x160c(r31)
    b lbl_fn_80314130_00000E08
    lfs f1, lbl_80884CF4
    li r4, 0x145
    lfs f2, lbl_80884CF0
    li r5, 0x0
    li r6, 0x1
    bl fn_805A4F20
    lwz r3, 0x14cc(r31)
    lwz r0, 0x15f0(r31)
    rlwinm r3, r3, 0, 2, 0
    stw r3, 0x14cc(r31)
    stw r0, 0x15f4(r31)
    b lbl_fn_80314130_00000E08
    oris r0, r6, 0x4000
    stw r0, 0x14cc(r3)
    b lbl_fn_80314130_00000E08
    lfs f1, lbl_80884CF0
    li r4, 0x2b
    li r5, 0x0
    li r6, 0x1
    fmr f2, f1
    bl fn_805A4F20
    lwz r0, 0x14cc(r31)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x14cc(r31)
    b lbl_fn_80314130_00000E08
    lfs f1, lbl_80884CF4
    li r4, 0x2b
    lfs f2, lbl_80884CF0
    li r5, 0x0
    li r6, 0x1
    bl fn_805A4F20
    lwz r0, 0x14cc(r31)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x14cc(r31)
    b lbl_fn_80314130_00000E08
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80314130_00000DE0
    cmpwi r8, 0x2
    beq lbl_fn_80314130_00000DE0
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_80314130_00000DE0:
    lfs f1, lbl_80884CF4
    mr r3, r31
    lfs f2, lbl_80884CF0
    li r4, 0x2e
    li r5, 0x0
    li r6, 0x1
    bl fn_805A4F20
    lwz r0, 0x14cc(r31)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x14cc(r31)
lbl_fn_80314130_00000E08:
    lwz r3, 0x58c(r31)
    subi r0, r3, 0x7
    cmplwi r0, 0x1
    bgt lbl_fn_80314130_00000E24
    lwz r0, 0xd1c(r31)
    stw r0, 0xfc0(r31)
    b lbl_fn_80314130_00000E2C
lbl_fn_80314130_00000E24:
    li r0, 0x0
    stw r0, 0xfc0(r31)
lbl_fn_80314130_00000E2C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80314384(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lis r5, 0x4330
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r3
    lwz r0, 0x1634(r3)
    lwz r4, 0x14c0(r3)
    cmpwi r0, 0x0
    stw r5, 0x40(r1)
    addi r0, r4, 0x1
    stw r5, 0x48(r1)
    stw r0, 0x14c0(r3)
    beq lbl_fn_80314384_00000F14
    lwz r0, 0xd18(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80314384_00001680
    lfs f2, 0x1650(r3)
    li r4, 0x0
    lfs f5, lbl_80884CF0
    li r0, 0x1
    lfs f4, lbl_80884D0C
    fsubs f0, f2, f2
    lfs f3, lbl_80884CF4
    stw r4, 0x1634(r3)
    fcmpo cr0, f4, f5
    stfs f5, 0x1638(r3)
    stfs f4, 0x163c(r3)
    stfs f3, 0x1640(r3)
    stb r0, 0x1644(r3)
    stfs f2, 0x1648(r3)
    lfs f1, lbl_8087DC44
    stfs f1, 0x164c(r3)
    stfs f0, 0x1654(r3)
    cror eq, lt, eq
    bne lbl_fn_80314384_00000EF8
    fcmpo cr0, f3, f5
    cror eq, gt, eq
    bne lbl_fn_80314384_00000EE8
    stfs f1, 0x1650(r3)
    stfs f4, 0x1638(r3)
    b lbl_fn_80314384_00000EF0
lbl_fn_80314384_00000EE8:
    stfs f2, 0x1650(r3)
    stfs f5, 0x1638(r3)
lbl_fn_80314384_00000EF0:
    li r0, 0x0
    stb r0, 0x1644(r3)
lbl_fn_80314384_00000EF8:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xd
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80314384_00001680
lbl_fn_80314384_00000F14:
    lbz r0, 0x1644(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80314384_0000113C
    lbz r0, 0x1644(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80314384_00001054
    lfs f0, 0x1638(r3)
    lfs f3, 0x1640(r3)
    lfs f2, lbl_80884CF0
    fadds f0, f0, f3
    fcmpo cr0, f3, f2
    stfs f0, 0x1638(r3)
    cror eq, gt, eq
    bne lbl_fn_80314384_00000FD0
    fcmpo cr0, f0, f2
    bge lbl_fn_80314384_00000F64
    lfs f0, 0x1648(r3)
    stfs f0, 0x1650(r3)
    stfs f2, 0x1638(r3)
    b lbl_fn_80314384_00001054
lbl_fn_80314384_00000F64:
    lfs f1, 0x163c(r3)
    fcmpo cr0, f0, f1
    bge lbl_fn_80314384_00000F9C
    fdivs f3, f0, f1
    lfs f1, 0x164c(r3)
    lfs f2, 0x1648(r3)
    lfs f0, 0x1650(r3)
    fsubs f1, f1, f2
    fmuls f1, f3, f1
    fadds f1, f2, f1
    stfs f1, 0x1650(r3)
    fsubs f0, f1, f0
    stfs f0, 0x1654(r3)
    b lbl_fn_80314384_00001054
lbl_fn_80314384_00000F9C:
    fcmpo cr0, f3, f2
    cror eq, gt, eq
    bne lbl_fn_80314384_00000FB8
    lfs f0, 0x164c(r3)
    stfs f0, 0x1650(r3)
    stfs f1, 0x1638(r3)
    b lbl_fn_80314384_00000FC4
lbl_fn_80314384_00000FB8:
    lfs f0, 0x1648(r3)
    stfs f0, 0x1650(r3)
    stfs f2, 0x1638(r3)
lbl_fn_80314384_00000FC4:
    li r0, 0x0
    stb r0, 0x1644(r3)
    b lbl_fn_80314384_00001054
lbl_fn_80314384_00000FD0:
    fcmpo cr0, f0, f2
    bge lbl_fn_80314384_00001010
    fcmpo cr0, f3, f2
    cror eq, gt, eq
    bne lbl_fn_80314384_00000FF8
    lfs f1, 0x164c(r3)
    lfs f0, 0x163c(r3)
    stfs f1, 0x1650(r3)
    stfs f0, 0x1638(r3)
    b lbl_fn_80314384_00001004
lbl_fn_80314384_00000FF8:
    lfs f0, 0x1648(r3)
    stfs f0, 0x1650(r3)
    stfs f2, 0x1638(r3)
lbl_fn_80314384_00001004:
    li r0, 0x0
    stb r0, 0x1644(r3)
    b lbl_fn_80314384_00001054
lbl_fn_80314384_00001010:
    lfs f1, 0x163c(r3)
    fcmpo cr0, f0, f1
    bge lbl_fn_80314384_00001048
    fdivs f3, f0, f1
    lfs f1, 0x164c(r3)
    lfs f2, 0x1648(r3)
    lfs f0, 0x1650(r3)
    fsubs f1, f1, f2
    fmuls f1, f3, f1
    fadds f1, f2, f1
    stfs f1, 0x1650(r3)
    fsubs f0, f1, f0
    stfs f0, 0x1654(r3)
    b lbl_fn_80314384_00001054
lbl_fn_80314384_00001048:
    lfs f0, 0x164c(r3)
    stfs f0, 0x1650(r3)
    stfs f1, 0x1638(r3)
lbl_fn_80314384_00001054:
    lwz r7, 0x1658(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80314384_0000113C
    lwz r0, 0x18(r7)
    lis r5, lbl_80749378@ha
    stw r0, 0x10(r1)
    lfs f0, 0x1650(r3)
    lbz r0, 0x10(r1)
    stw r0, 0x44(r1)
    lbz r4, 0x11(r1)
    lfd f1, 0x40(r1)
    lbz r0, 0x12(r1)
    stw r4, 0x4c(r1)
    lfd f5, lbl_80749378@l(r5)
    lfd f2, 0x48(r1)
    stw r0, 0x44(r1)
    fsubs f3, f1, f5
    fsubs f2, f2, f5
    lfs f4, lbl_80884D00
    lfd f1, 0x40(r1)
    fdivs f3, f3, f4
    stfs f0, 0x3c(r1)
    stfs f3, 0x30(r1)
    fsubs f1, f1, f5
    fdivs f2, f2, f4
    stfs f2, 0x34(r1)
    fdivs f1, f1, f4
    stfs f1, 0x38(r1)
    fmuls f3, f4, f3
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x50(r1)
    fctiwz f0, f0
    stfd f2, 0x58(r1)
    lwz r6, 0x54(r1)
    stfd f1, 0x60(r1)
    lwz r5, 0x5c(r1)
    stfd f0, 0x68(r1)
    lwz r4, 0x64(r1)
    lwz r0, 0x6c(r1)
    stb r6, 0x8(r1)
    stb r5, 0x9(r1)
    stb r4, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0xc(r1)
    lbz r0, 0xc(r1)
    stb r0, 0x18(r7)
    lbz r0, 0xd(r1)
    stb r0, 0x19(r7)
    lbz r0, 0xe(r1)
    stb r0, 0x1a(r7)
    lbz r0, 0xf(r1)
    stb r0, 0x1b(r7)
lbl_fn_80314384_0000113C:
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80314384_00001168
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_80314384_00001168
    li r6, 0x1
lbl_fn_80314384_00001168:
    cmpwi r6, 0x0
    beq lbl_fn_80314384_00001184
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80314384_00001184
    li r4, 0x1
lbl_fn_80314384_00001184:
    cmpwi r4, 0x0
    beq lbl_fn_80314384_000011B8
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80314384_000011AC
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_80314384_000011AC
    li r4, 0x1
lbl_fn_80314384_000011AC:
    cmpwi r4, 0x0
    bne lbl_fn_80314384_000011B8
    li r5, 0x1
lbl_fn_80314384_000011B8:
    cmpwi r5, 0x0
    beq lbl_fn_80314384_00001248
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80314384_00001248
    cmpwi r0, 0x2
    beq lbl_fn_80314384_00001248
    cmpwi r0, 0x9
    beq lbl_fn_80314384_00001248
    cmpwi r0, 0xd
    beq lbl_fn_80314384_00001248
    lwz r0, 0xd18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80314384_00001208
    lwz r4, 0xd1c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80314384_00001208
    lwz r0, 0xd18(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80314384_00001224
lbl_fn_80314384_00001208:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80314384_00001248
lbl_fn_80314384_00001224:
    lwz r0, 0xd20(r3)
    cmplw r4, r0
    beq lbl_fn_80314384_00001248
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80314384_00001248:
    lwz r0, 0x58c(r31)
    cmplwi r0, 0xd
    bgt lbl_fn_80314384_00001668
    lis r3, jumptable_80788560@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80788560@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r0, 0xd18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80314384_000012A8
    lwz r3, 0xd1c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80314384_000012A8
    lwz r0, 0xd18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80314384_000012A8
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80314384_000012A8:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80314384_00001680
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80314384_0000135C
    lwz r4, 0xd1c(r31)
    addi r3, r1, 0x20
    lfs f0, 0x530(r31)
    lfs f1, 0x530(r4)
    lfs f3, 0x52c(r4)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r31)
    lfs f1, 0x528(r4)
    lfs f0, 0x528(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x24(r1)
    stfs f0, 0x20(r1)
    stfs f4, 0x28(r1)
    bl fn_805F9920
    lwz r3, 0x64(r31)
    lfs f2, lbl_80884D10
    lfs f0, 0x30(r3)
    fmuls f0, f0, f0
    fmuls f0, f2, f0
    fmuls f0, f2, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_80314384_00001344
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x8
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80314384_0000135C
lbl_fn_80314384_00001344:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80314384_0000135C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80314384_00001680
    lwz r4, 0xd1c(r31)
    addi r3, r1, 0x14
    lfs f0, 0x530(r31)
    lfs f1, 0x530(r4)
    lfs f3, 0x52c(r4)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r31)
    lfs f1, 0x528(r4)
    lfs f0, 0x528(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f4, 0x1c(r1)
    bl fn_805F9920
    lwz r3, 0x64(r31)
    lfs f2, lbl_80884D14
    lfs f0, 0x30(r3)
    fmuls f0, f0, f0
    fmuls f0, f2, f0
    fmuls f0, f2, f0
    fcmpo cr0, f1, f0
    ble lbl_fn_80314384_000013EC
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80314384_00001540
lbl_fn_80314384_000013EC:
    lwz r0, 0x15e4(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_80314384_00001420
    lwz r0, 0x125c(r31)
    cmplwi r0, 0x2
    blt lbl_fn_80314384_00001420
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x9
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80314384_00001540
lbl_fn_80314384_00001420:
    lwz r0, 0x15f4(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_80314384_000014BC
    lwz r3, 0xd1c(r31)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 21
    beq lbl_fn_80314384_000014BC
    lwz r0, 0x7e0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80314384_000014BC
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80314384_00001460
    lwz r0, 0x560(r3)
    cmpwi r0, 0x7a
    beq lbl_fn_80314384_00001494
lbl_fn_80314384_00001460:
    lwz r4, 0x15b8(r31)
    lwz r5, 0x15e8(r31)
    bl fn_80164168
    lwz r5, 0xd1c(r31)
    mr r3, r31
    addi r4, r31, 0x162c
    lwz r0, 0x48(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80314384_0000148C
    li r5, -0x1
    b lbl_fn_80314384_00001490
lbl_fn_80314384_0000148C:
    lwz r5, 0x58(r5)
lbl_fn_80314384_00001490:
    bl fn_805A4A20
lbl_fn_80314384_00001494:
    lwz r3, 0xd1c(r31)
    mr r4, r31
    bl fn_8016F530
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xa
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80314384_00001540
lbl_fn_80314384_000014BC:
    lwz r0, 0x15d4(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_80314384_00001540
    lwz r3, 0xd1c(r31)
    lwz r0, 0x125c(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80314384_000014E4
    lwz r0, 0x7e0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80314384_00001540
lbl_fn_80314384_000014E4:
    mr r4, r31
    bl fn_8016F4D8
    cmpwi r3, 0x0
    beq lbl_fn_80314384_000014FC
    li r0, 0x1
    b lbl_fn_80314384_00001514
lbl_fn_80314384_000014FC:
    lwz r3, 0xd1c(r31)
    li r4, 0x0
    bl fn_8016F530
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_80314384_00001514:
    cmpwi r0, 0x0
    beq lbl_fn_80314384_00001540
    lwz r3, 0xd1c(r31)
    mr r4, r31
    bl fn_8016F530
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x9
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80314384_00001540:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80314384_00001680
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80314384_0000157C
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x8
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80314384_0000157C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80314384_00001680
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80314384_000015B8
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x8
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80314384_000015B8:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80314384_00001680
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80314384_00001680
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80314384_00001680
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80314384_00001624
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80314384_00001624:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80314384_00001680
    mr r3, r31
    bl fn_805A40BC
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    bne lbl_fn_80314384_00001680
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80314384_00001680
lbl_fn_80314384_00001668:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80314384_00001680:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80314BD8(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    stfd f31, 0x230(r1)
    psq_st f31, 0x238(r1), 0, 0
    stfd f30, 0x220(r1)
    psq_st f30, 0x228(r1), 0, 0
    lfs f30, lbl_80884CF0
    stfd f29, 0x210(r1)
    psq_st f29, 0x218(r1), 0, 0
    lfs f29, lbl_80884CF4
    stw r31, 0x20c(r1)
    stw r30, 0x208(r1)
    mr r30, r3
    addi r3, r1, 0x1a0
    stw r29, 0x204(r1)
    addi r4, r30, 0x534
    bl fn_8001047C
    lwz r0, 0x55c(r30)
    li r31, 0x0
    cmpwi r0, 0x2
    bne lbl_fn_80314BD8_00002070
    lwz r0, 0x58c(r30)
    cmplwi r0, 0xd
    bgt lbl_fn_80314BD8_0000207C
    lis r3, jumptable_80788598@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80788598@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r0, 0x14cc(r30)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r30)
    b lbl_fn_80314BD8_0000207C
    addi r3, r30, 0xc64
    bl fn_80126214
    addi r3, r30, 0xc64
    bl fn_80139F58
    mr r4, r3
    addi r3, r1, 0x194
    bl fn_8001047C
    addi r3, r1, 0x194
    bl fn_8000D3A4
    lfs f0, lbl_80884D18
    fmr f30, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80314BD8_00001778
    addi r3, r1, 0x110
    addi r4, r1, 0x194
    bl fn_800F7FD8
    addi r3, r1, 0x11c
    addi r4, r1, 0x110
    bl fn_80011034
    addi r3, r1, 0x1a0
    addi r4, r1, 0x11c
    bl fn_8000D124
lbl_fn_80314BD8_00001778:
    addi r3, r30, 0xc64
    bl fn_8013C3F4
    cmpwi r3, 0x0
    beq lbl_fn_80314BD8_0000207C
    lwz r0, 0x14cc(r30)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r30)
    b lbl_fn_80314BD8_0000207C
    lwz r3, 0xd1c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80314BD8_0000207C
    li r31, 0x1
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x188
    addi r5, r30, 0x528
    bl fn_80013338
    addi r3, r1, 0x188
    bl fn_8000D3A4
    lfs f0, lbl_80884D18
    fmr f30, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80314BD8_000017E8
    lfs f30, lbl_80884CF0
    addi r3, r1, 0x1a0
    addi r4, r30, 0x534
    bl fn_8000D124
    b lbl_fn_80314BD8_0000207C
lbl_fn_80314BD8_000017E8:
    addi r3, r1, 0x188
    bl fn_800F7FF0
    lwz r3, 0x64(r30)
    lfs f0, lbl_80884D04
    lfs f1, 0x30(r3)
    fmuls f0, f0, f1
    fcmpo cr0, f30, f0
    bge lbl_fn_80314BD8_00001848
    lfs f0, lbl_80884D1C
    fcmpo cr0, f30, f0
    bge lbl_fn_80314BD8_0000181C
    lfs f30, lbl_80884CF4
    b lbl_fn_80314BD8_00001820
lbl_fn_80314BD8_0000181C:
    lfs f30, lbl_80884CFC
lbl_fn_80314BD8_00001820:
    addi r3, r1, 0xf8
    addi r4, r1, 0x188
    bl fn_8013C3B4
    addi r3, r1, 0x104
    addi r4, r1, 0xf8
    bl fn_80011034
    addi r3, r1, 0x1a0
    addi r4, r1, 0x104
    bl fn_8000D124
    b lbl_fn_80314BD8_0000207C
lbl_fn_80314BD8_00001848:
    lfs f0, lbl_80884D10
    fmuls f0, f0, f1
    fcmpo cr0, f30, f0
    ble lbl_fn_80314BD8_00001878
    lfs f30, lbl_80884CF4
    addi r3, r1, 0xec
    addi r4, r1, 0x188
    bl fn_80011034
    addi r3, r1, 0x1a0
    addi r4, r1, 0xec
    bl fn_8000D124
    b lbl_fn_80314BD8_0000207C
lbl_fn_80314BD8_00001878:
    bl fn_800F52F8
    bl fn_8013C434
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80314BD8_000019E8
    bl fn_8013A194
    mr r4, r3
    mr r5, r30
    addi r3, r1, 0x17c
    bl fn_80109950
    addi r3, r1, 0x170
    addi r4, r1, 0x17c
    addi r5, r30, 0x528
    bl fn_80013338
    addi r3, r1, 0x170
    bl fn_8000D3A4
    lfs f0, lbl_80884CF0
    fmr f30, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80314BD8_000018D0
    addi r3, r1, 0x170
    bl fn_800F7FF0
lbl_fn_80314BD8_000018D0:
    lfs f0, lbl_80884D20
    fcmpo cr0, f30, f0
    bge lbl_fn_80314BD8_00001918
    lfs f0, lbl_80884CF0
    fcmpo cr0, f30, f0
    ble lbl_fn_80314BD8_00001904
    addi r3, r1, 0xe0
    addi r4, r1, 0x170
    bl fn_80011034
    addi r3, r1, 0x1a0
    addi r4, r1, 0xe0
    bl fn_8000D124
    b lbl_fn_80314BD8_00001910
lbl_fn_80314BD8_00001904:
    addi r3, r1, 0x1a0
    addi r4, r30, 0x534
    bl fn_8000D124
lbl_fn_80314BD8_00001910:
    lfs f30, lbl_80884CF0
    b lbl_fn_80314BD8_000019D8
lbl_fn_80314BD8_00001918:
    lfs f0, lbl_80884D24
    fcmpo cr0, f30, f0
    ble lbl_fn_80314BD8_000019C0
    addi r3, r1, 0xd4
    addi r4, r1, 0x188
    addi r5, r1, 0x170
    bl fn_8013C394
    lfs f0, 0xd8(r1)
    lfs f1, lbl_80884CF0
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_80314BD8_00001984
    fmr f3, f1
    lfs f2, lbl_80884CF4
    addi r3, r1, 0xb0
    bl fn_8000D114
    mr r4, r3
    addi r3, r1, 0xbc
    addi r5, r1, 0x188
    bl fn_8013C394
    addi r3, r1, 0xc8
    addi r4, r1, 0xbc
    bl fn_80011034
    addi r3, r1, 0x1a0
    addi r4, r1, 0xc8
    bl fn_8000D124
    b lbl_fn_80314BD8_000019D8
lbl_fn_80314BD8_00001984:
    fmr f3, f1
    lfs f2, lbl_80884CF4
    addi r3, r1, 0x8c
    bl fn_8000D114
    mr r5, r3
    addi r3, r1, 0x98
    addi r4, r1, 0x188
    bl fn_8013C394
    addi r3, r1, 0xa4
    addi r4, r1, 0x98
    bl fn_80011034
    addi r3, r1, 0x1a0
    addi r4, r1, 0xa4
    bl fn_8000D124
    b lbl_fn_80314BD8_000019D8
lbl_fn_80314BD8_000019C0:
    addi r3, r1, 0x80
    addi r4, r1, 0x170
    bl fn_80011034
    addi r3, r1, 0x1a0
    addi r4, r1, 0x80
    bl fn_8000D124
lbl_fn_80314BD8_000019D8:
    bl fn_800F52F8
    bl fn_8013C434
    lfs f29, 0x18(r3)
    b lbl_fn_80314BD8_0000207C
lbl_fn_80314BD8_000019E8:
    lfs f30, lbl_80884CF0
    addi r3, r1, 0x74
    addi r4, r1, 0x188
    bl fn_80011034
    addi r3, r1, 0x1a0
    addi r4, r1, 0x74
    bl fn_8000D124
    b lbl_fn_80314BD8_0000207C
    mr r3, r30
    bl fn_800F52F0
    bl fn_8012DB04
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80139F3C
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80139550
    lwz r0, 0x14bc(r30)
    fmr f31, f1
    cmpwi r0, 0x0
    bne lbl_fn_80314BD8_00001BF0
    lis r4, lbl_80749390@ha
    addi r3, r30, 0xb0
    addi r4, r4, lbl_80749390@l
    addi r4, r4, 0x9f
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x164
    bl fn_8000D0F8
    mr r4, r30
    addi r3, r1, 0x50
    bl fn_8014052C
    lfs f1, lbl_80884D24
    addi r3, r1, 0x5c
    addi r4, r1, 0x50
    bl fn_800F72CC
    lwz r3, 0x161c(r30)
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x68
    addi r5, r1, 0x5c
    bl fn_80013338
    addi r3, r30, 0x15f8
    addi r4, r1, 0x68
    bl fn_8000D124
    addi r3, r1, 0x1b0
    bl fn_80140500
    addi r3, r1, 0x158
    addi r4, r30, 0x15f8
    bl fn_8001047C
    lfs f1, 0x15c(r1)
    addi r3, r1, 0x14c
    lfs f0, lbl_80884CF4
    addi r4, r1, 0x158
    fadds f0, f1, f0
    stfs f0, 0x15c(r1)
    bl fn_8001047C
    lfs f1, 0x150(r1)
    lfs f0, lbl_80884D1C
    fsubs f0, f1, f0
    stfs f0, 0x150(r1)
    bl fn_801404F8
    addi r4, r1, 0x1b0
    addi r5, r1, 0x158
    addi r6, r1, 0x14c
    lis r7, 0x8000
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80314BD8_00001B0C
    lfs f0, 0x1b8(r1)
    stfs f0, 0x15fc(r30)
lbl_fn_80314BD8_00001B0C:
    lfs f2, 0x15fc(r30)
    lfs f1, 0x52c(r30)
    lfs f0, lbl_80884D28
    fsubs f1, f2, f1
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80314BD8_00001B38
    lwz r0, 0x14cc(r30)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r30)
    b lbl_fn_80314BD8_000020CC
lbl_fn_80314BD8_00001B38:
    addi r3, r1, 0x140
    addi r4, r30, 0x15f8
    addi r5, r1, 0x164
    bl fn_80013338
    addi r3, r1, 0x44
    addi r4, r1, 0x140
    bl fn_80011034
    addi r3, r30, 0x1604
    addi r4, r1, 0x44
    bl fn_8000D124
    lfs f1, 0x1604(r30)
    mr r3, r30
    lfs f0, lbl_80884D2C
    fsubs f0, f1, f0
    stfs f0, 0x1604(r30)
    bl fn_800F52F0
    bl fn_8012DB04
    fmr f30, f1
    bl fn_802F0990
    bl fn_802F0988
    fmuls f29, f1, f30
    lfs f3, 0x52c(r30)
    lfs f2, 0x1608(r30)
    lfs f1, 0x1604(r30)
    lfs f0, 0x534(r30)
    fadds f3, f3, f29
    stfs f2, 0x538(r30)
    fsubs f1, f1, f0
    stfs f3, 0x52c(r30)
    bl fn_800133B0
    lfs f2, lbl_80884D30
    lfs f0, lbl_80884D34
    fmuls f2, f2, f1
    lfs f1, 0x534(r30)
    fcmpo cr0, f31, f0
    fmadds f0, f29, f2, f1
    stfs f0, 0x534(r30)
    cror eq, gt, eq
    bne lbl_fn_80314BD8_000020CC
    addi r3, r30, 0x1610
    addi r4, r30, 0x528
    bl fn_8000D124
    lwz r3, 0x14bc(r30)
    addi r0, r3, 0x1
    stw r0, 0x14bc(r30)
    b lbl_fn_80314BD8_000020CC
lbl_fn_80314BD8_00001BF0:
    cmpwi r0, 0x1
    bne lbl_fn_80314BD8_00001CDC
    lfs f0, lbl_80884D38
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80314BD8_00001C48
    lfs f2, lbl_80884D28
    addi r3, r1, 0x38
    lfs f0, lbl_80884D3C
    addi r4, r30, 0x1610
    fsubs f2, f1, f2
    lfs f1, lbl_80884CF4
    addi r5, r30, 0x15f8
    fmuls f0, f2, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_80314BD8_00001C34
    b lbl_fn_80314BD8_00001C38
lbl_fn_80314BD8_00001C34:
    fmr f1, f0
lbl_fn_80314BD8_00001C38:
    bl fn_800F7260
    addi r3, r30, 0x528
    addi r4, r1, 0x38
    bl fn_8000D124
lbl_fn_80314BD8_00001C48:
    lfs f0, lbl_80884D40
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_80314BD8_00001CB8
    addi r3, r30, 0x5b8
    bl fn_80315644
    mr r31, r3
    lwz r3, 0x15d8(r30)
    bl fn_80219E6C
    mr r29, r3
    bl fn_8013A194
    li r0, -0x1
    stw r0, 0x8(r1)
    lis r8, lbl_807C7030@ha
    lfs f1, lbl_80884CF0
    stw r0, 0xc(r1)
    mr r4, r30
    lfs f2, lbl_80884CF4
    mr r5, r29
    lwz r6, 0x14c8(r30)
    mr r7, r31
    addi r8, r8, lbl_807C7030@l
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lwz r3, 0x14bc(r30)
    addi r0, r3, 0x1
    stw r0, 0x14bc(r30)
lbl_fn_80314BD8_00001CB8:
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80139F2C
    cmpwi r3, 0x142
    beq lbl_fn_80314BD8_000020CC
    lwz r0, 0x14cc(r30)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r30)
    b lbl_fn_80314BD8_000020CC
lbl_fn_80314BD8_00001CDC:
    lfs f0, lbl_80884D44
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80314BD8_00001D00
    lfs f1, lbl_80884CF4
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80139F3C
    b lbl_fn_80314BD8_00001D20
lbl_fn_80314BD8_00001D00:
    lfs f0, lbl_80884D48
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80314BD8_00001D20
    lfs f1, lbl_80884D4C
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80139F3C
lbl_fn_80314BD8_00001D20:
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    beq lbl_fn_80314BD8_00001D4C
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80139F2C
    cmpwi r3, 0x142
    beq lbl_fn_80314BD8_000020CC
lbl_fn_80314BD8_00001D4C:
    lwz r0, 0x14cc(r30)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r30)
    b lbl_fn_80314BD8_000020CC
    lwz r3, 0xd1c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80314BD8_0000207C
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x134
    addi r5, r30, 0x528
    bl fn_80013338
    addi r3, r1, 0x134
    bl fn_801162A0
    bl fn_80011220
    lfs f0, lbl_80884D50
    fcmpo cr0, f1, f0
    blt lbl_fn_80314BD8_00001D9C
    addi r3, r1, 0x134
    bl fn_800F7FF0
lbl_fn_80314BD8_00001D9C:
    addi r3, r1, 0x2c
    addi r4, r1, 0x134
    bl fn_80011034
    addi r3, r1, 0x1a0
    addi r4, r1, 0x2c
    bl fn_8000D124
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80139550
    lwz r0, 0x14bc(r30)
    fmr f31, f1
    cmpwi r0, 0x0
    bne lbl_fn_80314BD8_00001E2C
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80314BD8_0000207C
    lwz r4, 0x14bc(r30)
    li r0, 0x0
    stw r0, 0x14c0(r30)
    addi r3, r30, 0xb0
    addi r0, r4, 0x1
    lfs f1, lbl_80884CF0
    stw r0, 0x14bc(r30)
    li r4, 0x0
    lfs f2, lbl_80884D4C
    li r5, 0x146
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    mr r3, r30
    bl fn_80315964
    b lbl_fn_80314BD8_0000207C
lbl_fn_80314BD8_00001E2C:
    cmpwi r0, 0x1
    bne lbl_fn_80314BD8_00001ED0
    lwz r3, 0xd1c(r30)
    bl fn_80267B20
    mr r29, r3
    lwz r3, 0xd1c(r30)
    bl fn_80267B28
    lwz r4, 0x14c0(r30)
    lwz r0, 0x15b8(r30)
    cmpw r4, r0
    bge lbl_fn_80314BD8_00001E68
    cmpwi r29, 0x6
    bne lbl_fn_80314BD8_00001E68
    cmpwi r3, 0x7a
    beq lbl_fn_80314BD8_0000207C
lbl_fn_80314BD8_00001E68:
    lwz r4, 0x14bc(r30)
    li r0, 0x0
    stw r0, 0x14c0(r30)
    addi r3, r30, 0xb0
    addi r0, r4, 0x1
    lfs f1, lbl_80884CF0
    stw r0, 0x14bc(r30)
    li r4, 0x0
    lfs f2, lbl_80884D4C
    li r5, 0x147
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    addi r3, r30, 0x15e8
    bl fn_803140B4
    addi r3, r30, 0x15c8
    bl fn_803140B4
    mr r3, r30
    bl fn_80315FE0
    bl fn_800F7FA0
    mr r4, r30
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_80314BD8_0000207C
lbl_fn_80314BD8_00001ED0:
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80314BD8_0000207C
    lwz r0, 0x14cc(r30)
    mr r4, r30
    lwz r3, 0xd1c(r30)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r30)
    bl fn_8016F5EC
    b lbl_fn_80314BD8_0000207C
    addi r3, r30, 0xc64
    bl fn_80126214
    addi r3, r30, 0xc64
    bl fn_80139F58
    mr r4, r3
    addi r3, r1, 0x128
    bl fn_8001047C
    addi r3, r1, 0x128
    bl fn_8000D3A4
    lfs f0, lbl_80884D18
    fmr f30, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80314BD8_00001F5C
    addi r3, r1, 0x14
    addi r4, r1, 0x128
    bl fn_800F7FD8
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    bl fn_80011034
    addi r3, r1, 0x1a0
    addi r4, r1, 0x20
    bl fn_8000D124
lbl_fn_80314BD8_00001F5C:
    addi r3, r30, 0xc64
    bl fn_8013C3F4
    cmpwi r3, 0x0
    beq lbl_fn_80314BD8_0000207C
    lwz r0, 0x14cc(r30)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r30)
    b lbl_fn_80314BD8_0000207C
    b lbl_fn_80314BD8_000020CC
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80139550
    fmr f31, f1
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80314BD8_0000207C
    lwz r0, 0x14cc(r30)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r30)
    b lbl_fn_80314BD8_0000207C
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80139550
    fmr f31, f1
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80314BD8_0000207C
    bl fn_800F7FA0
    li r4, 0x1
    bl fn_8031564C
    bl fn_800F7FA0
    li r4, 0x0
    li r5, 0x0
    bl fn_800F7FA8
    bl fn_800F7FA0
    lfs f1, lbl_80884D20
    addi r4, r30, 0x1620
    addi r6, r30, 0x528
    addi r7, r30, 0x534
    li r5, 0x0
    li r8, -0x1
    li r9, -0x1
    li r10, 0x1
    bl fn_80276AE4
    bl fn_800F7FA0
    li r4, 0x0
    bl fn_8031564C
    lis r4, lbl_80749390@ha
    lfs f1, lbl_80884CF4
    addi r4, r4, lbl_80749390@l
    addi r3, r1, 0x10
    addi r4, r4, 0x151
    addi r5, r30, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x14cc(r30)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r30)
    b lbl_fn_80314BD8_0000207C
lbl_fn_80314BD8_00002070:
    mr r3, r30
    bl fn_805A4258
    b lbl_fn_80314BD8_000020CC
lbl_fn_80314BD8_0000207C:
    cmpwi r31, 0x0
    beq lbl_fn_80314BD8_000020B0
    mr r3, r30
    bl fn_8013C478
    cmpwi r3, 0x0
    beq lbl_fn_80314BD8_000020B0
    lfs f0, 0x568(r30)
    fmr f1, f30
    mr r3, r30
    addi r4, r1, 0x1a0
    fmuls f2, f0, f29
    bl fn_80140588
    b lbl_fn_80314BD8_000020CC
lbl_fn_80314BD8_000020B0:
    lfs f0, 0x568(r30)
    fmr f1, f30
    mr r3, r30
    addi r4, r1, 0x1a0
    fmuls f2, f0, f29
    li r5, 0x0
    bl fn_8013CB68
lbl_fn_80314BD8_000020CC:
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
