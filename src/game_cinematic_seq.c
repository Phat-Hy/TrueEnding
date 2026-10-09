#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_8003EA3C(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_80084320(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_80097C08(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800E854C(void);
extern void fn_800F8548(void);
extern void fn_8011F91C(void);
extern void fn_8011F9CC(void);
extern void fn_8011FC10(void);
extern void fn_801255C8(void);
extern void fn_80128930(void);
extern void fn_80129978(void);
extern void fn_80129A48(void);
extern void fn_8013322C(void);
extern void fn_80134674(void);
extern void fn_8013655C(void);
extern void fn_801437D0(void);
extern void fn_80145334(void);
extern void fn_8014C0B4(void);
extern void fn_8014C540(void);
extern void fn_80151448(void);
extern void fn_8015783C(void);
extern void fn_8015E4B0(void);
extern void fn_80168F3C(void);
extern void fn_8016D74C(void);
extern void fn_8016E970(void);
extern void fn_80178208(void);
extern void fn_8017BC58(void);
extern void fn_8018E438(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_80237874(void);
extern void fn_8023A8B4(void);
extern void fn_8035B78C(void);
extern void fn_803EA77C(void);
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
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_80789138[];
extern u8 lbl_8074A2A8[];
extern u8 lbl_8074A2B8[];
extern u8 lbl_8074A2C0[];
extern u8 lbl_8074A2D8[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_807890F0[];
extern u8 lbl_807891D4[];
extern u8 lbl_807C6B90[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9E8;
extern u32 lbl_80885138;
extern u32 lbl_80885190;
extern u32 lbl_80885194;
extern u32 lbl_80885198;
extern u32 lbl_8088519C;
extern u32 lbl_808851A0;
extern u32 lbl_808851A4;
extern u32 lbl_808851A8;
extern u32 lbl_808851AC;
extern u32 lbl_808851B0;
extern u32 lbl_808851B4;
extern u32 lbl_808851B8;
extern u32 lbl_808851BC;
extern u32 lbl_808851C0;
extern u32 lbl_808851C4;
extern u32 lbl_808851C8;
extern u32 lbl_808851CC;
extern u32 lbl_808851D0;
extern u32 lbl_808851D4;
extern u32 lbl_808851D8;
extern u32 lbl_808851DC;
extern u32 lbl_808851E0;
extern u32 lbl_808851E4;
extern u32 lbl_808851E8;

/* Function declarations */
void fn_803349D8(void);
void fn_803349EC(void);
void fn_80334A64(void);
void fn_80334AB0(void);
void fn_80334ACC(void);
void fn_80334B38(void);
void fn_80334BCC(void);
void fn_80334C5C(void);
void fn_80334CD8(void);
void fn_80334E74(void);
void fn_80334FDC(void);
void fn_80335374(void);
void fn_80335600(void);
void fn_80335788(void);
void fn_80335940(void);
void fn_80335988(void);

asm void fn_803349D8(void)
{
    nofralloc
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x7
    beqlr
    b fn_801437D0
    blr
}

asm void fn_803349EC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f3, lbl_80885138
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f2, 0x10(r4)
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80334A64(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800E854C
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    blt lbl_fn_80334A64_000000C4
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x2
    beq lbl_fn_80334A64_000000C4
    li r0, 0x0
    stw r0, 0x58c(r31)
lbl_fn_80334A64_000000C4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80334AB0(void)
{
    nofralloc
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    blt lbl_fn_80334AB0_000000EC
    li r3, 0x0
    blr
lbl_fn_80334AB0_000000EC:
    b fn_8017BC58
    blr
}

asm void fn_80334ACC(void)
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
    beq lbl_fn_80334ACC_00000144
    addic. r3, r3, 0x14b0
    beq lbl_fn_80334ACC_00000128
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80334ACC_00000128:
    mr r3, r30
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r31, 0x0
    ble lbl_fn_80334ACC_00000144
    mr r3, r30
    bl dtor_80084684
lbl_fn_80334ACC_00000144:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80334B38(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_80334B38_000001D8
    lwz r0, lbl_8087F408
    cmpwi r0, 0x0
    bne lbl_fn_80334B38_000001D8
    lis r5, lbl_8074A2A8@ha
    li r3, 0x60
    addi r5, r5, lbl_8074A2A8@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80334B38_000001D4
    mr r4, r30
    bl fn_8011F9CC
    lis r3, lbl_807890F0@ha
    li r0, 0x0
    addi r3, r3, lbl_807890F0@l
    stw r3, 0x0(r31)
    stw r0, 0x54(r31)
    stw r0, 0x58(r31)
lbl_fn_80334B38_000001D4:
    stw r31, lbl_8087F408
lbl_fn_80334B38_000001D8:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F408
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80334BCC(void)
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
    beq lbl_fn_80334BCC_00000268
    addic. r0, r3, 0x54
    li r0, 0x0
    stw r0, lbl_8087F408
    beq lbl_fn_80334BCC_00000244
    lwz r4, 0x54(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80334BCC_00000244
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80334BCC_00000244
    bl fn_800897D8
lbl_fn_80334BCC_00000244:
    cmpwi r30, 0x0
    beq lbl_fn_80334BCC_00000258
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
lbl_fn_80334BCC_00000258:
    cmpwi r31, 0x0
    ble lbl_fn_80334BCC_00000268
    mr r3, r30
    bl dtor_80084684
lbl_fn_80334BCC_00000268:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80334C5C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_80334C5C_000002E8
    lwz r0, 0x54(r31)
    lis r3, lbl_8074A2A8@ha
    addi r3, r3, lbl_8074A2A8@l
    cmpwi r0, 0x0
    addi r4, r3, 0x1
    bne lbl_fn_80334C5C_000002D8
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80334C5C_000002D8
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x54(r31)
    b lbl_fn_80334C5C_000002DC
lbl_fn_80334C5C_000002D8:
    li r3, 0x0
lbl_fn_80334C5C_000002DC:
    stw r3, 0x58(r31)
    li r3, 0x1
    b lbl_fn_80334C5C_000002EC
lbl_fn_80334C5C_000002E8:
    li r3, 0x0
lbl_fn_80334C5C_000002EC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80334CD8(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    stw r31, 0x21c(r1)
    stw r30, 0x218(r1)
    mr r30, r5
    stw r29, 0x214(r1)
    mr r29, r3
    bl fn_805A3C58
    lfs f1, lbl_80885190
    lis r3, lbl_807891D4@ha
    li r31, 0x0
    lfs f0, lbl_80885194
    addi r3, r3, lbl_807891D4@l
    li r7, 0x2
    li r6, 0x1
    li r5, 0x28
    li r4, 0xc8
    li r0, 0x50
    stw r3, 0x0(r29)
    addi r3, r29, 0x1528
    stw r31, 0x14d4(r29)
    stw r7, 0x14d8(r29)
    stw r6, 0x14dc(r29)
    stfs f1, 0x14e0(r29)
    stfs f0, 0x14e8(r29)
    stw r5, 0x1504(r29)
    stw r4, 0x1508(r29)
    stw r0, 0x150c(r29)
    stw r31, 0x1510(r29)
    stw r31, 0x1518(r29)
    stw r31, 0x151c(r29)
    bl fn_802377B8
    addi r3, r29, 0x1534
    bl fn_802377B8
    lwz r0, 0x12a4(r29)
    li r6, -0x1
    stw r31, 0x1540(r29)
    mr r3, r29
    oris r0, r0, 0x40
    addi r4, r1, 0x108
    stw r6, 0x1544(r29)
    addi r5, r30, 0x2c
    stw r31, 0x1548(r29)
    stw r6, 0x154c(r29)
    stw r31, 0x1550(r29)
    stw r6, 0x1554(r29)
    stw r31, 0x1558(r29)
    stw r6, 0x155c(r29)
    stw r31, 0x1560(r29)
    stw r6, 0x1564(r29)
    stw r31, 0x1568(r29)
    stw r31, 0x156c(r29)
    stw r31, 0x1570(r29)
    stw r31, 0x1574(r29)
    stw r31, 0x1578(r29)
    stw r31, 0x157c(r29)
    stw r31, 0x1580(r29)
    stw r0, 0x12a4(r29)
    bl fn_805A3D6C
    cmpwi r3, 0x0
    beq lbl_fn_80334CD8_00000414
    lis r4, lbl_8074A2D8@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_8074A2D8@l
    addi r5, r1, 0x108
    crclr 6
    bl sprintf
    b lbl_fn_80334CD8_0000042C
lbl_fn_80334CD8_00000414:
    lis r4, lbl_8074A2D8@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_8074A2D8@l
    addi r4, r4, 0x1b
    crclr 6
    bl sprintf
lbl_fn_80334CD8_0000042C:
    lwz r12, 0x14b4(r29)
    addi r3, r29, 0x14b4
    addi r4, r1, 0x8
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r31, lbl_8074A2D8@ha
    addi r3, r29, 0x1528
    addi r31, r31, lbl_8074A2D8@l
    addi r4, r31, 0x4c
    bl fn_8023780C
    addi r3, r29, 0x1534
    addi r4, r31, 0x5a
    bl fn_8023780C
    lwz r4, 0x12a8(r29)
    mr r3, r29
    lwz r0, 0x12a4(r29)
    ori r4, r4, 0x800
    stw r4, 0x12a8(r29)
    rlwinm r0, r0, 0, 8, 6
    stw r0, 0x12a4(r29)
    lwz r31, 0x21c(r1)
    lwz r30, 0x218(r1)
    lwz r29, 0x214(r1)
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_80334E74(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    beq lbl_fn_80334E74_000004C8
    li r3, 0x0
    b lbl_fn_80334E74_000005EC
lbl_fn_80334E74_000004C8:
    lwz r3, 0x1438(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80334E74_000004EC
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80334E74_000004EC
    li r3, 0x0
    b lbl_fn_80334E74_000005EC
lbl_fn_80334E74_000004EC:
    addi r3, r30, 0x14b4
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_80334E74_00000504
    li r3, 0x0
    b lbl_fn_80334E74_000005EC
lbl_fn_80334E74_00000504:
    addi r3, r30, 0x1528
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80334E74_00000524
    addi r3, r30, 0x1534
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_80334E74_0000052C
lbl_fn_80334E74_00000524:
    li r3, 0x0
    b lbl_fn_80334E74_000005EC
lbl_fn_80334E74_0000052C:
    addi r3, r30, 0x14b4
    bl fn_8047059C
    mr r31, r3
    addi r3, r30, 0x14b4
    bl fn_80470580
    mr r4, r3
    mr r3, r30
    mr r5, r31
    bl fn_80334FDC
    lwz r0, 0x7ec(r30)
    lwz r3, 0x1438(r30)
    ori r0, r0, 0x140
    oris r0, r0, 0x1
    cmpwi r3, 0x0
    ori r0, r0, 0x209
    oris r0, r0, 0x380
    stw r0, 0x7ec(r30)
    beq lbl_fn_80334E74_0000058C
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_80334E74_0000058C:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0xfc(r12)
    mtctr r12
    bctrl
    addi r3, r30, 0x7d4
    li r4, 0x2
    bl fn_80134674
    addi r3, r30, 0x7d4
    li r4, 0x3
    bl fn_80134674
    lwz r6, 0x151c(r30)
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x8
    lwz r31, 0x4(r6)
    bl memset
    stw r31, 0x8(r1)
    li r3, 0x1
    lwz r0, 0xc(r1)
    lfs f0, lbl_80885198
    stw r31, 0xabc(r30)
    stw r0, 0xac0(r30)
    stfs f0, 0xad0(r30)
lbl_fn_80334E74_000005EC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80334FDC(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    lis r6, lbl_807772D0@ha
    stw r0, 0x654(r1)
    li r0, 0x0
    addi r6, r6, lbl_807772D0@l
    stw r31, 0x64c(r1)
    mr r31, r4
    li r4, 0x0
    stw r30, 0x648(r1)
    mr r30, r5
    li r5, 0x400
    stw r29, 0x644(r1)
    mr r29, r3
    addi r3, r1, 0x18
    stw r6, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r31
    mr r5, r30
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
    lis r31, lbl_8074A2D8@ha
    addi r31, r31, lbl_8074A2D8@l
lbl_fn_80334FDC_000006A4:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    mr r30, r3
    addi r4, r31, 0x68
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80334FDC_000006E4
    lwz r30, lbl_8087F8A0
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r4, r3
    mr r3, r30
    bl fn_8011F91C
    stw r3, 0x1580(r29)
    b lbl_fn_80334FDC_00000970
lbl_fn_80334FDC_000006E4:
    mr r3, r30
    addi r4, r31, 0x70
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80334FDC_00000710
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1510(r29)
    b lbl_fn_80334FDC_00000970
lbl_fn_80334FDC_00000710:
    mr r3, r30
    addi r4, r31, 0x7d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80334FDC_0000073C
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1514(r29)
    b lbl_fn_80334FDC_00000970
lbl_fn_80334FDC_0000073C:
    mr r3, r30
    addi r4, r31, 0x8b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80334FDC_00000768
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1518(r29)
    b lbl_fn_80334FDC_00000970
lbl_fn_80334FDC_00000768:
    mr r3, r30
    addi r4, r31, 0x95
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80334FDC_00000794
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x151c(r29)
    b lbl_fn_80334FDC_00000970
lbl_fn_80334FDC_00000794:
    mr r3, r30
    addi r4, r31, 0xa0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80334FDC_000007D4
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1520(r29)
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1524(r29)
    b lbl_fn_80334FDC_00000970
lbl_fn_80334FDC_000007D4:
    mr r3, r30
    addi r4, r31, 0xac
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80334FDC_0000080C
    lwz r30, lbl_8087F408
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    mr r4, r3
    mr r3, r30
    bl fn_8011FC10
    stw r3, 0x1540(r29)
    b lbl_fn_80334FDC_00000970
lbl_fn_80334FDC_0000080C:
    mr r3, r30
    addi r4, r31, 0xbb
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80334FDC_00000834
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1504(r29)
    b lbl_fn_80334FDC_00000970
lbl_fn_80334FDC_00000834:
    mr r3, r30
    addi r4, r31, 0xc5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80334FDC_0000085C
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x150c(r29)
    b lbl_fn_80334FDC_00000970
lbl_fn_80334FDC_0000085C:
    mr r3, r30
    addi r4, r31, 0xd6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80334FDC_00000884
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x14e8(r29)
    b lbl_fn_80334FDC_00000970
lbl_fn_80334FDC_00000884:
    mr r3, r30
    addi r4, r31, 0xe5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80334FDC_000008AC
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1508(r29)
    b lbl_fn_80334FDC_00000970
lbl_fn_80334FDC_000008AC:
    mr r3, r30
    addi r4, r31, 0xf6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80334FDC_000008D4
    mr r3, r29
    addi r4, r29, 0x1544
    addi r5, r1, 0x8
    bl fn_805A4984
    b lbl_fn_80334FDC_00000970
lbl_fn_80334FDC_000008D4:
    mr r3, r30
    addi r4, r31, 0x10d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80334FDC_000008FC
    mr r3, r29
    addi r4, r29, 0x154c
    addi r5, r1, 0x8
    bl fn_805A4984
    b lbl_fn_80334FDC_00000970
lbl_fn_80334FDC_000008FC:
    mr r3, r30
    addi r4, r31, 0x124
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80334FDC_00000924
    mr r3, r29
    addi r4, r29, 0x1554
    addi r5, r1, 0x8
    bl fn_805A4984
    b lbl_fn_80334FDC_00000970
lbl_fn_80334FDC_00000924:
    mr r3, r30
    addi r4, r31, 0x13d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80334FDC_0000094C
    mr r3, r29
    addi r4, r29, 0x155c
    addi r5, r1, 0x8
    bl fn_805A4984
    b lbl_fn_80334FDC_00000970
lbl_fn_80334FDC_0000094C:
    mr r3, r30
    addi r4, r31, 0x153
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80334FDC_00000970
    mr r3, r29
    addi r4, r29, 0x1564
    addi r5, r1, 0x8
    bl fn_805A4984
lbl_fn_80334FDC_00000970:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80334FDC_000006A4
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_80335374(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_8074A2B8@ha
    lfs f0, lbl_8088519C
    stw r0, 0x24(r1)
    lis r0, 0x4330
    lfd f3, lbl_8074A2B8@l(r4)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lwz r5, 0x940(r3)
    stw r0, 0x8(r1)
    xoris r0, r5, 0x8000
    lfs f1, 0x7d8(r3)
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f3
    fdivs f1, f1, f2
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80335374_000009FC
    li r0, 0x2
    stw r0, 0x14d4(r3)
    b lbl_fn_80335374_00000A20
lbl_fn_80335374_000009FC:
    lfs f0, lbl_808851A0
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80335374_00000A18
    li r0, 0x1
    stw r0, 0x14d4(r3)
    b lbl_fn_80335374_00000A20
lbl_fn_80335374_00000A18:
    li r0, 0x0
    stw r0, 0x14d4(r3)
lbl_fn_80335374_00000A20:
    mr r3, r31
    li r4, 0x0
    li r5, 0x146
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x1
    li r5, 0x147
    bl fn_8014C0B4
    lwz r3, 0x1580(r31)
    lfs f0, lbl_80885198
    cmpwi r3, 0x0
    stfs f0, 0xad0(r31)
    beq lbl_fn_80335374_00000A5C
    lfs f0, lbl_808851A4
    stfs f0, 0xad0(r3)
lbl_fn_80335374_00000A5C:
    lwz r0, 0xd1c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80335374_00000A74
    lwz r3, lbl_8087F8A0
    lwz r0, 0x48(r3)
    stw r0, 0xd1c(r31)
lbl_fn_80335374_00000A74:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_80335374_00000B38
    lwz r0, 0x560(r31)
    cmpwi r0, 0xa
    beq lbl_fn_80335374_00000AA8
    cmpwi r0, 0x8d
    beq lbl_fn_80335374_00000AFC
    cmpwi r0, 0x80
    beq lbl_fn_80335374_00000B14
    cmpwi r0, 0x14
    beq lbl_fn_80335374_00000B14
    b lbl_fn_80335374_00000B38
lbl_fn_80335374_00000AA8:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x1
    beq lbl_fn_80335374_00000B38
    li r0, 0x0
    li r30, 0x1
    stw r0, 0x598(r31)
    stb r0, 0x59d(r31)
    stb r0, 0x59c(r31)
    stb r30, 0x59f(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r3, 0xe5
    bl fn_80219E6C
    lwz r0, 0x638(r31)
    stw r0, 0x63c(r31)
    lwz r4, 0xf80(r31)
    stw r3, 0x638(r31)
    stw r30, 0x1c(r4)
    stw r30, 0x58c(r31)
    b lbl_fn_80335374_00000B38
lbl_fn_80335374_00000AFC:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x1
    beq lbl_fn_80335374_00000B38
    li r0, 0x1
    stw r0, 0x58c(r31)
    b lbl_fn_80335374_00000B38
lbl_fn_80335374_00000B14:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80335374_00000B38
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x0
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80335374_00000B38:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x104(r12)
    mtctr r12
    bctrl
    lwz r3, 0x58c(r31)
    subi r0, r3, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_80335374_00000B6C
    cmpwi r3, 0x0
    beq lbl_fn_80335374_00000B6C
    cmpwi r3, 0xa
    bne lbl_fn_80335374_00000BA0
lbl_fn_80335374_00000B6C:
    lwz r4, 0xd1c(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80335374_00000BAC
    lis r5, lbl_8074A2D8@ha
    lis r6, lbl_807C7030@ha
    addi r5, r5, lbl_8074A2D8@l
    lfs f1, lbl_808851A8
    addi r3, r31, 0x10d8
    addi r4, r4, 0xb0
    addi r5, r5, 0x169
    addi r6, r6, lbl_807C7030@l
    bl fn_80129978
    b lbl_fn_80335374_00000BAC
lbl_fn_80335374_00000BA0:
    lfs f1, lbl_808851A8
    addi r3, r31, 0x10d8
    bl fn_80129A48
lbl_fn_80335374_00000BAC:
    lwz r0, 0x157c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80335374_00000BE4
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x8
    beq lbl_fn_80335374_00000BE4
    cmpwi r0, 0x2
    beq lbl_fn_80335374_00000BE4
    lwz r3, lbl_8087F430
    li r0, 0x0
    stw r0, 0x8a0(r3)
    stw r0, 0x4d8(r3)
    stb r0, 0x97c(r3)
    stw r0, 0x157c(r31)
lbl_fn_80335374_00000BE4:
    mr r3, r31
    bl fn_8014C540
    lwz r0, 0x38(r31)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_80335374_00000C10
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 6
    bne lbl_fn_80335374_00000C10
    mr r3, r31
    bl fn_80145334
lbl_fn_80335374_00000C10:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80335600(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r6, 0x58c(r3)
    cmpwi r6, 0x2
    beq lbl_fn_80335600_00000C6C
    cmpwi r6, 0xa
    beq lbl_fn_80335600_00000C6C
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80335600_00000C74
lbl_fn_80335600_00000C6C:
    li r3, 0x0
    b lbl_fn_80335600_00000D94
lbl_fn_80335600_00000C74:
    lwz r0, 0x14d8(r3)
    li r31, 0x0
    cmpwi r0, 0x1
    bne lbl_fn_80335600_00000D48
    lwz r5, 0x8(r4)
    lwz r0, 0x90(r5)
    rlwinm r5, r0, 0, 12, 12
    subis r0, r5, 0x8
    cmplwi r0, 0x0
    bne lbl_fn_80335600_00000CE8
    lfs f0, lbl_80885190
    li r0, 0x2
    stw r0, 0x14d8(r3)
    mr r4, r29
    lwz r5, 0x1524(r29)
    stfs f0, 0x14e0(r3)
    lwz r3, lbl_8087F9E8
    bl fn_8059C2AC
    mr r3, r29
    addi r4, r29, 0x1554
    bl fn_805A49E8
    cmpwi r3, 0x0
    bne lbl_fn_80335600_00000CE0
    mr r3, r29
    addi r4, r29, 0x1554
    li r5, 0x1
    bl fn_805A4A20
lbl_fn_80335600_00000CE0:
    li r31, 0x1
    b lbl_fn_80335600_00000D48
lbl_fn_80335600_00000CE8:
    cmpwi r6, 0x9
    beq lbl_fn_80335600_00000D24
    lfs f2, 0x10(r4)
    li r0, 0x1
    lfs f3, lbl_808851AC
    li r31, 0x1
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    stw r0, 0x48(r4)
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
lbl_fn_80335600_00000D24:
    mr r3, r29
    addi r4, r29, 0x154c
    bl fn_805A49E8
    cmpwi r3, 0x0
    bne lbl_fn_80335600_00000D48
    mr r3, r29
    addi r4, r29, 0x154c
    li r5, 0x1
    bl fn_805A4A20
lbl_fn_80335600_00000D48:
    cmpwi r31, 0x0
    bne lbl_fn_80335600_00000D78
    lfs f2, 0x10(r30)
    lfs f3, lbl_808851B0
    lfs f1, 0x14(r30)
    lfs f0, 0x18(r30)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r30)
    stfs f1, 0x14(r30)
    stfs f0, 0x18(r30)
lbl_fn_80335600_00000D78:
    addi r3, r29, 0x7d4
    li r4, 0x2
    bl fn_80134674
    addi r3, r29, 0x7d4
    li r4, 0x3
    bl fn_80134674
    li r3, 0x1
lbl_fn_80335600_00000D94:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80335788(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80335788_00000E28
    lwz r12, 0x0(r3)
    li r4, 0x2
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    lfs f4, lbl_808851B4
    addi r3, r1, 0x14
    lfs f3, 0x28(r31)
    lfs f0, 0x30(r31)
    fmuls f3, f3, f4
    fmuls f2, f0, f4
    lfs f0, lbl_808851B0
    stfs f0, 0x18(r1)
    stfs f3, 0x14(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x6b8(r30), 0, 0
    stfs f2, 0x6c0(r30)
    b lbl_fn_80335788_00000F50
lbl_fn_80335788_00000E28:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80335788_00000F50
    lwz r0, 0x560(r3)
    cmpwi r0, 0x17
    bne lbl_fn_80335788_00000E4C
    addi r4, r3, 0x6b8
    li r5, -0x1
    bl fn_8015E4B0
lbl_fn_80335788_00000E4C:
    lwz r0, 0x560(r30)
    cmpwi r0, 0xa
    bne lbl_fn_80335788_00000F20
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x1
    beq lbl_fn_80335788_00000F20
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lis r4, lbl_8074A2D8@ha
    li r9, 0x0
    addi r4, r4, lbl_8074A2D8@l
    lfs f0, lbl_808851B8
    addi r5, r4, 0x16e
    lwz r0, 0xd1c(r30)
    stw r3, 0x590(r30)
    li r3, 0x8
    li r8, 0x1
    mr r6, r5
    stw r3, 0x594(r30)
    li r3, 0x38
    li r4, 0x3
    li r7, 0x0
    stb r9, 0x59c(r30)
    stb r9, 0x59d(r30)
    stb r8, 0x59f(r30)
    stb r9, 0x59e(r30)
    stfs f0, 0x5a0(r30)
    stw r0, 0x14e4(r30)
    stw r9, 0x598(r30)
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80335788_00000F10
    lfs f4, 0x30(r31)
    mr r4, r30
    lfs f3, 0x2c(r31)
    addi r5, r1, 0x8
    lfs f0, 0x28(r31)
    fneg f4, f4
    fneg f3, f3
    li r7, 0xa
    fneg f0, f0
    stfs f4, 0x10(r1)
    stfs f0, 0x8(r1)
    stfs f3, 0xc(r1)
    lwz r6, 0x14e4(r30)
    lwz r8, 0x1514(r30)
    bl fn_8018E438
    mr r4, r3
lbl_fn_80335788_00000F10:
    mr r3, r30
    bl fn_80178208
    lfs f0, lbl_808851BC
    stfs f0, 0x2e4(r30)
lbl_fn_80335788_00000F20:
    lwz r3, 0x560(r30)
    subi r0, r3, 0x16
    cmplwi r0, 0x1
    ble lbl_fn_80335788_00000F38
    cmpwi r3, 0xa
    bne lbl_fn_80335788_00000F50
lbl_fn_80335788_00000F38:
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x0
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80335788_00000F50:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80335940(void)
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
    li r4, 0x0
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80335988(void)
{
    nofralloc
    stwu r1, -0x260(r1)
    mflr r0
    cmplwi r4, 0xb
    stw r0, 0x264(r1)
    stfd f31, 0x250(r1)
    psq_st f31, 0x258(r1), 0, 0
    stfd f30, 0x240(r1)
    psq_st f30, 0x248(r1), 0, 0
    stfd f29, 0x230(r1)
    psq_st f29, 0x238(r1), 0, 0
    stfd f28, 0x220(r1)
    psq_st f28, 0x228(r1), 0, 0
    stw r31, 0x21c(r1)
    mr r31, r3
    stw r30, 0x218(r1)
    li r30, 0x0
    lwz r0, 0x14cc(r3)
    stw r30, 0x14bc(r3)
    clrlwi r6, r0, 4
    oris r6, r6, 0x800
    stw r30, 0x14c0(r3)
    stw r30, 0x14c4(r3)
    stw r30, 0x14c8(r3)
    stw r6, 0x14cc(r3)
    stw r30, 0x14d0(r3)
    stw r4, 0x58c(r3)
    stw r30, 0x14e4(r3)
    bgt lbl_fn_80335988_00001B08
    lis r5, jumptable_80789138@ha
    slwi r0, r4, 2
    addi r5, r5, jumptable_80789138@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    oris r0, r6, 0x4000
    stw r0, 0x14cc(r3)
    b lbl_fn_80335988_00001B08
    lwz r5, 0x14d8(r3)
    li r6, 0x1
    lfs f0, lbl_808851B8
    li r4, 0x0
    subi r5, r5, 0x1
    stw r6, 0x3fc(r3)
    lwz r0, 0x12a4(r3)
    cntlzw r5, r5
    rlwimi r0, r5, 0, 26, 26
    lfs f1, lbl_808851B0
    stw r0, 0x12a4(r3)
    li r5, 0x146
    lfs f2, lbl_808851DC
    li r6, 0x1
    stfs f0, 0x2fc(r3)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r3)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_80335988_00001B08
    lwz r0, 0x12a4(r3)
    addi r5, r3, 0x528
    lwz r4, 0xd1c(r3)
    li r6, 0x0
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r3)
    stw r4, 0x14e4(r3)
    addi r3, r3, 0xc64
    bl fn_80128930
    lfs f0, lbl_808851E0
    addi r3, r31, 0xc64
    stfs f0, 0xc8c(r31)
    bl fn_801255C8
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x4000
    stw r0, 0x14cc(r31)
    b lbl_fn_80335988_00001B08
    lwz r0, 0x12a4(r3)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_808851B8
    li r0, 0x8
    lwz r4, 0xd1c(r31)
    stw r3, 0x590(r31)
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    stb r30, 0x59c(r31)
    stb r30, 0x59d(r31)
    stb r30, 0x59f(r31)
    stfs f0, 0x5a0(r31)
    stb r30, 0x59e(r31)
    stw r4, 0x14e4(r31)
    lwz r0, 0x12a4(r4)
    extrwi. r0, r0, 1, 26
    bne lbl_fn_80335988_000011D4
    lwz r12, 0x0(r4)
    mr r3, r4
    lwz r12, 0xc4(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80335988_000011D4
    lwz r5, 0x14e4(r31)
    addi r3, r1, 0x104
    lfs f0, 0x530(r31)
    mr r4, r3
    lfs f5, 0x530(r5)
    lfs f4, 0x528(r5)
    lfs f3, 0x528(r31)
    fsubs f5, f5, f0
    lfs f0, lbl_808851B0
    fsubs f3, f4, f3
    stfs f5, 0x10c(r1)
    stfs f3, 0x104(r1)
    stfs f0, 0x108(r1)
    bl fn_805F98D0
    lis r5, lbl_8074A2D8@ha
    li r3, 0x38
    addi r5, r5, lbl_8074A2D8@l
    li r4, 0x3
    addi r5, r5, 0x16e
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80335988_000011C8
    lwz r6, 0x14e4(r31)
    mr r4, r31
    lwz r8, 0x1514(r31)
    addi r5, r1, 0x104
    li r7, 0x9
    bl fn_8018E438
    mr r4, r3
lbl_fn_80335988_000011C8:
    mr r3, r31
    bl fn_80178208
    b lbl_fn_80335988_000011EC
lbl_fn_80335988_000011D4:
    lwz r5, 0x14e4(r31)
    mr r3, r31
    lwz r4, 0x1510(r31)
    lfs f1, lbl_808851B0
    addi r5, r5, 0x528
    bl fn_8015783C
lbl_fn_80335988_000011EC:
    li r0, 0x0
    stw r0, 0x598(r31)
    b lbl_fn_80335988_00001B08
    lwz r4, 0xd1c(r3)
    lwz r0, 0x12a4(r3)
    cmpwi r4, 0x0
    stw r4, 0x14e4(r3)
    rlwinm r0, r0, 0, 27, 25
    lfs f30, lbl_808851B0
    stw r0, 0x12a4(r3)
    lfs f31, lbl_808851B8
    beq lbl_fn_80335988_000014F4
    lfs f3, 0x530(r4)
    lfs f0, 0x530(r3)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x98
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x9c(r1)
    stfs f0, 0x98(r1)
    stfs f6, 0xa0(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_808851CC
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_80335988_00001274
    addi r3, r1, 0x98
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80335988_00001274:
    lfs f2, 0xa0(r1)
    addi r3, r1, 0x98
    lfs f0, lbl_808851CC
    addi r30, r1, 0xa4
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0xac(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80335988_000012C4
    lfs f3, 0xa4(r1)
    lfs f0, lbl_808851B0
    fcmpo cr0, f3, f0
    ble lbl_fn_80335988_000012B8
    lfs f0, lbl_808851D0
    b lbl_fn_80335988_000012BC
lbl_fn_80335988_000012B8:
    lfs f0, lbl_808851D4
lbl_fn_80335988_000012BC:
    stfs f0, 0xb4(r1)
    b lbl_fn_80335988_000012D8
lbl_fn_80335988_000012C4:
    frsp f2, f2
    lfs f1, 0xa4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xb4(r1)
lbl_fn_80335988_000012D8:
    lfs f0, 0xb4(r1)
    addi r3, r1, 0x1e0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808851B0
    addi r4, r1, 0xbc
    lfs f4, 0x1e8(r1)
    mr r5, r4
    lfs f5, 0x1e4(r1)
    addi r3, r1, 0x1a0
    lfs f6, 0x1e0(r1)
    lfs f7, 0x1f8(r1)
    lfs f8, 0x1f4(r1)
    lfs f9, 0x1f0(r1)
    lfs f10, 0x208(r1)
    lfs f11, 0x204(r1)
    lfs f12, 0x200(r1)
    lfs f13, 0x20c(r1)
    lfs f29, 0x1fc(r1)
    lfs f28, 0x1ec(r1)
    lfs f0, lbl_808851B8
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xac(r1)
    stfs f3, 0x1d0(r1)
    stfs f3, 0x1d4(r1)
    stfs f3, 0x1d8(r1)
    stfs f0, 0x1dc(r1)
    stfs f6, 0xec(r1)
    stfs f5, 0xf0(r1)
    stfs f4, 0xf4(r1)
    stfs f6, 0x1a0(r1)
    stfs f5, 0x1a4(r1)
    stfs f4, 0x1a8(r1)
    stfs f9, 0xe0(r1)
    stfs f8, 0xe4(r1)
    stfs f7, 0xe8(r1)
    stfs f9, 0x1b0(r1)
    stfs f8, 0x1b4(r1)
    stfs f7, 0x1b8(r1)
    stfs f12, 0xd4(r1)
    stfs f11, 0xd8(r1)
    stfs f10, 0xdc(r1)
    stfs f12, 0x1c0(r1)
    stfs f11, 0x1c4(r1)
    stfs f10, 0x1c8(r1)
    stfs f28, 0xc8(r1)
    stfs f29, 0xcc(r1)
    stfs f13, 0xd0(r1)
    stfs f28, 0x1ac(r1)
    stfs f29, 0x1bc(r1)
    stfs f13, 0x1cc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xc4(r1)
    bl fn_805F9750
    lfs f2, 0xc4(r1)
    lfs f0, lbl_808851CC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80335988_000013F4
    lfs f3, 0xc0(r1)
    lfs f0, lbl_808851B0
    fcmpo cr0, f3, f0
    ble lbl_fn_80335988_000013E4
    lfs f0, lbl_808851D0
    b lbl_fn_80335988_000013E8
lbl_fn_80335988_000013E4:
    lfs f0, lbl_808851D4
lbl_fn_80335988_000013E8:
    fneg f0, f0
    stfs f0, 0xb0(r1)
    b lbl_fn_80335988_00001408
lbl_fn_80335988_000013F4:
    lfs f1, 0xc0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xb0(r1)
lbl_fn_80335988_00001408:
    addi r3, r1, 0xb0
    lfs f2, lbl_808851B0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f4, 0x538(r31)
    lfs f3, 0xa8(r1)
    lfs f0, lbl_808851C0
    fsubs f3, f3, f4
    stfs f2, 0xb8(r1)
    stfs f2, 0xac(r1)
    fcmpo cr0, f3, f0
    ble lbl_fn_80335988_00001448
    lfs f0, lbl_808851C4
    fsubs f0, f3, f0
    fmadds f31, f31, f0, f4
    b lbl_fn_80335988_00001468
lbl_fn_80335988_00001448:
    lfs f0, lbl_808851C8
    fcmpo cr0, f3, f0
    bge lbl_fn_80335988_00001464
    lfs f0, lbl_808851C4
    fadds f0, f0, f3
    fmadds f31, f31, f0, f4
    b lbl_fn_80335988_00001468
lbl_fn_80335988_00001464:
    fmadds f31, f31, f3, f4
lbl_fn_80335988_00001468:
    lfs f0, 0x538(r31)
    lis r3, lbl_8074A2C0@ha
    lfd f2, lbl_8074A2C0@l(r3)
    fsubs f1, f31, f0
    bl fn_8068AEA8
    frsp f28, f1
    lfs f0, lbl_808851C0
    fcmpo cr0, f28, f0
    ble lbl_fn_80335988_00001494
    lfs f0, lbl_808851C4
    fsubs f28, f28, f0
lbl_fn_80335988_00001494:
    lfs f0, lbl_808851C8
    fcmpo cr0, f28, f0
    bge lbl_fn_80335988_000014A8
    lfs f0, lbl_808851C4
    fadds f28, f28, f0
lbl_fn_80335988_000014A8:
    lis r3, lbl_8074A2C0@ha
    frsp f1, f31
    stfs f31, 0x538(r31)
    lfd f2, lbl_8074A2C0@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808851C0
    fcmpo cr0, f3, f0
    ble lbl_fn_80335988_000014D4
    lfs f0, lbl_808851C4
    fsubs f3, f3, f0
lbl_fn_80335988_000014D4:
    lfs f0, lbl_808851C8
    fcmpo cr0, f3, f0
    lfs f0, lbl_808851D8
    fmuls f0, f0, f28
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f30
    cror eq, gt, eq
lbl_fn_80335988_000014F4:
    lwz r4, 0x14e4(r31)
    addi r6, r1, 0xf8
    mr r3, r31
    li r5, 0x0
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x100(r1)
    psq_st f1, 0x0(r6), 0, 0
    lwz r4, 0x151c(r31)
    bl fn_8016D74C
    b lbl_fn_80335988_00001B08
    lwz r5, 0x14dc(r3)
    lfs f0, lbl_808851E4
    addi r0, r5, 0x1
    cmpwi r5, 0x1
    srwi r4, r0, 31
    stw r5, 0x14d8(r3)
    clrlwi r0, r0, 31
    xor r0, r0, r4
    stfs f0, 0x14e0(r3)
    subf r0, r4, r0
    stw r0, 0x14dc(r3)
    bne lbl_fn_80335988_00001558
    lfs f0, lbl_80885190
    stfs f0, 0x14e0(r3)
lbl_fn_80335988_00001558:
    lwz r3, lbl_8087F9E8
    mr r4, r31
    lwz r5, 0x1520(r31)
    bl fn_8059C2AC
    lwz r3, lbl_8087F9E8
    mr r4, r31
    lwz r5, 0x1524(r31)
    bl fn_8059C2AC
    lwz r0, 0x12c(r1)
    li r11, 0x0
    li r4, -0x1
    lis r8, lbl_807C6B90@ha
    clrlwi r0, r0, 4
    stw r11, 0x110(r1)
    mr r5, r31
    mr r6, r31
    stw r11, 0x114(r1)
    addi r3, r1, 0x110
    addi r8, r8, lbl_807C6B90@l
    li r7, 0x0
    stw r11, 0x118(r1)
    li r9, 0x0
    li r10, 0x0
    stw r11, 0x11c(r1)
    stw r11, 0x120(r1)
    stw r4, 0x124(r1)
    stw r0, 0x12c(r1)
    stw r4, 0x128(r1)
    lwz r0, 0x14d8(r31)
    slwi r0, r0, 2
    add r4, r31, r0
    lwz r4, 0x1520(r4)
    bl fn_8003EA3C
    lwz r0, 0x14d8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80335988_00001610
    mr r3, r31
    addi r4, r31, 0x155c
    bl fn_805A49E8
    cmpwi r3, 0x0
    bne lbl_fn_80335988_00001650
    mr r3, r31
    addi r4, r31, 0x155c
    li r5, 0x1
    bl fn_805A4A20
    b lbl_fn_80335988_00001650
lbl_fn_80335988_00001610:
    cmpwi r0, 0x1
    bne lbl_fn_80335988_00001650
    addi r3, r31, 0x7d4
    lis r4, 0x8
    bl fn_8013322C
    mr r3, r31
    bl fn_80168F3C
    mr r3, r31
    addi r4, r31, 0x1544
    bl fn_805A49E8
    cmpwi r3, 0x0
    bne lbl_fn_80335988_00001650
    mr r3, r31
    addi r4, r31, 0x1544
    li r5, 0x1
    bl fn_805A4A20
lbl_fn_80335988_00001650:
    lwz r4, 0x12a4(r31)
    li r0, 0x1
    lfs f0, lbl_808851B8
    addi r3, r31, 0xb0
    rlwinm r4, r4, 0, 27, 25
    stw r4, 0x12a4(r31)
    lfs f1, lbl_808851B0
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x173
    lfs f2, lbl_808851DC
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_80335988_00001B08
    lwz r4, 0xd1c(r3)
    addi r5, r3, 0x528
    stw r4, 0x14e4(r3)
    li r6, 0x0
    addi r3, r3, 0xc64
    bl fn_80128930
    lfs f0, lbl_808851E0
    addi r3, r31, 0xc64
    stfs f0, 0xc8c(r31)
    bl fn_801255C8
    lwz r0, 0x58c(r31)
    lwz r3, 0x14cc(r31)
    cmpwi r0, 0xa
    oris r3, r3, 0x4000
    stw r3, 0x14cc(r31)
    bne lbl_fn_80335988_00001B08
    mr r3, r31
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_808851B0
    li r3, -0x1
    lfs f1, lbl_808851B8
    li r0, 0x1
    stfs f0, 0x80(r1)
    addi r4, r31, 0x1528
    addi r5, r31, 0xb0
    addi r7, r1, 0x8c
    stfs f0, 0x84(r1)
    addi r8, r1, 0x80
    addi r9, r1, 0x70
    li r6, 0x0
    stfs f0, 0x88(r1)
    li r10, -0x1
    stfs f0, 0x8c(r1)
    stfs f0, 0x90(r1)
    stfs f0, 0x94(r1)
    stfs f1, 0x70(r1)
    stfs f1, 0x74(r1)
    stfs f1, 0x78(r1)
    stfs f1, 0x7c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_80335988_00001B08
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0xd1c(r31)
    li r5, 0x8
    lwz r0, 0x12a4(r31)
    lfs f31, lbl_808851B8
    cmpwi r4, 0x0
    rlwinm r0, r0, 0, 27, 25
    stw r3, 0x590(r31)
    stw r5, 0x594(r31)
    stw r30, 0x598(r31)
    stb r30, 0x59c(r31)
    stb r30, 0x59d(r31)
    stb r30, 0x59f(r31)
    stb r30, 0x59e(r31)
    stfs f31, 0x5a0(r31)
    stw r0, 0x12a4(r31)
    stw r4, 0x14e4(r31)
    beq lbl_fn_80335988_00001A4C
    lfs f3, 0x530(r4)
    addi r3, r1, 0x10
    lfs f0, 0x530(r31)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x14(r1)
    stfs f0, 0x10(r1)
    stfs f6, 0x18(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_808851CC
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_80335988_000017F0
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80335988_000017F0:
    lfs f2, 0x18(r1)
    addi r3, r1, 0x10
    lfs f0, lbl_808851CC
    addi r30, r1, 0x1c
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x24(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80335988_00001840
    lfs f3, 0x1c(r1)
    lfs f0, lbl_808851B0
    fcmpo cr0, f3, f0
    ble lbl_fn_80335988_00001834
    lfs f0, lbl_808851D0
    b lbl_fn_80335988_00001838
lbl_fn_80335988_00001834:
    lfs f0, lbl_808851D4
lbl_fn_80335988_00001838:
    stfs f0, 0x2c(r1)
    b lbl_fn_80335988_00001854
lbl_fn_80335988_00001840:
    frsp f2, f2
    lfs f1, 0x1c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x2c(r1)
lbl_fn_80335988_00001854:
    lfs f0, 0x2c(r1)
    addi r3, r1, 0x170
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808851B0
    addi r4, r1, 0x34
    lfs f4, 0x178(r1)
    mr r5, r4
    lfs f5, 0x174(r1)
    addi r3, r1, 0x130
    lfs f6, 0x170(r1)
    lfs f7, 0x188(r1)
    lfs f8, 0x184(r1)
    lfs f9, 0x180(r1)
    lfs f10, 0x198(r1)
    lfs f11, 0x194(r1)
    lfs f12, 0x190(r1)
    lfs f13, 0x19c(r1)
    lfs f28, 0x18c(r1)
    lfs f29, 0x17c(r1)
    lfs f0, lbl_808851B8
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x24(r1)
    stfs f3, 0x160(r1)
    stfs f3, 0x164(r1)
    stfs f3, 0x168(r1)
    stfs f0, 0x16c(r1)
    stfs f6, 0x64(r1)
    stfs f5, 0x68(r1)
    stfs f4, 0x6c(r1)
    stfs f6, 0x130(r1)
    stfs f5, 0x134(r1)
    stfs f4, 0x138(r1)
    stfs f9, 0x58(r1)
    stfs f8, 0x5c(r1)
    stfs f7, 0x60(r1)
    stfs f9, 0x140(r1)
    stfs f8, 0x144(r1)
    stfs f7, 0x148(r1)
    stfs f12, 0x4c(r1)
    stfs f11, 0x50(r1)
    stfs f10, 0x54(r1)
    stfs f12, 0x150(r1)
    stfs f11, 0x154(r1)
    stfs f10, 0x158(r1)
    stfs f29, 0x40(r1)
    stfs f28, 0x44(r1)
    stfs f13, 0x48(r1)
    stfs f29, 0x13c(r1)
    stfs f28, 0x14c(r1)
    stfs f13, 0x15c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x3c(r1)
    bl fn_805F9750
    lfs f2, 0x3c(r1)
    lfs f0, lbl_808851CC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80335988_00001970
    lfs f3, 0x38(r1)
    lfs f0, lbl_808851B0
    fcmpo cr0, f3, f0
    ble lbl_fn_80335988_00001960
    lfs f0, lbl_808851D0
    b lbl_fn_80335988_00001964
lbl_fn_80335988_00001960:
    lfs f0, lbl_808851D4
lbl_fn_80335988_00001964:
    fneg f0, f0
    stfs f0, 0x28(r1)
    b lbl_fn_80335988_00001984
lbl_fn_80335988_00001970:
    lfs f1, 0x38(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x28(r1)
lbl_fn_80335988_00001984:
    addi r3, r1, 0x28
    lfs f2, lbl_808851B0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f4, 0x538(r31)
    lfs f3, 0x20(r1)
    lfs f0, lbl_808851C0
    fsubs f3, f3, f4
    stfs f2, 0x30(r1)
    stfs f2, 0x24(r1)
    fcmpo cr0, f3, f0
    ble lbl_fn_80335988_000019C4
    lfs f0, lbl_808851C4
    fsubs f0, f3, f0
    fmadds f28, f31, f0, f4
    b lbl_fn_80335988_000019E4
lbl_fn_80335988_000019C4:
    lfs f0, lbl_808851C8
    fcmpo cr0, f3, f0
    bge lbl_fn_80335988_000019E0
    lfs f0, lbl_808851C4
    fadds f0, f0, f3
    fmadds f28, f31, f0, f4
    b lbl_fn_80335988_000019E4
lbl_fn_80335988_000019E0:
    fmadds f28, f31, f3, f4
lbl_fn_80335988_000019E4:
    lfs f0, 0x538(r31)
    lis r3, lbl_8074A2C0@ha
    lfd f2, lbl_8074A2C0@l(r3)
    fsubs f1, f28, f0
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808851C0
    fcmpo cr0, f3, f0
    ble lbl_fn_80335988_00001A10
    lfs f0, lbl_808851C4
    fsubs f3, f3, f0
lbl_fn_80335988_00001A10:
    lfs f0, lbl_808851C8
    fcmpo cr0, f3, f0
    lis r3, lbl_8074A2C0@ha
    frsp f1, f28
    stfs f28, 0x538(r31)
    lfd f2, lbl_8074A2C0@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808851C0
    fcmpo cr0, f3, f0
    ble lbl_fn_80335988_00001A44
    lfs f0, lbl_808851C4
    fsubs f3, f3, f0
lbl_fn_80335988_00001A44:
    lfs f0, lbl_808851C8
    fcmpo cr0, f3, f0
lbl_fn_80335988_00001A4C:
    lfs f0, lbl_808851B8
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808851B0
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14a
    lfs f2, lbl_808851DC
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_808851B0
    stfs f0, 0x2e4(r31)
    b lbl_fn_80335988_00001B08
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    mr r3, r31
    li r4, 0x2
    bl fn_8016E970
    lfs f0, lbl_808851B8
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808851B0
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x36
    lfs f2, lbl_808851DC
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f1, lbl_808851B8
    stfs f1, 0x2e8(r31)
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_80335988_00001B08
    lfs f2, lbl_808851E8
    mr r4, r31
    li r5, 0x2
    li r6, 0x0
    bl fn_803EA77C
lbl_fn_80335988_00001B08:
    lwz r0, 0x264(r1)
    psq_l f31, 0x258(r1), 0, 0
    lfd f31, 0x250(r1)
    psq_l f30, 0x248(r1), 0, 0
    lfd f30, 0x240(r1)
    psq_l f29, 0x238(r1), 0, 0
    lfd f29, 0x230(r1)
    psq_l f28, 0x228(r1), 0, 0
    lfd f28, 0x220(r1)
    lwz r31, 0x21c(r1)
    lwz r30, 0x218(r1)
    mtlr r0
    addi r1, r1, 0x260
    blr
}
