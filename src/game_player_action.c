#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80018240(void);
extern void fn_80018BAC(void);
extern void fn_8004ECC0(void);
extern void fn_8005B710(void);
extern void fn_8005B8F8(void);
extern void fn_8005B9AC(void);
extern void fn_8006F72C(void);
extern void fn_800846FC(void);
extern void fn_800A55AC(void);
extern void fn_800CB3A0(void);
extern void fn_800DC1DC(void);
extern void fn_80117228(void);
extern void fn_80117E88(void);
extern void fn_80125320(void);
extern void fn_8012539C(void);
extern void fn_801255C8(void);
extern void fn_80128508(void);
extern void fn_801286F0(void);
extern void fn_80128930(void);
extern void fn_80128A30(void);
extern void fn_80128C08(void);
extern void fn_8014FCC4(void);
extern void fn_801539E0(void);
extern void fn_80153B44(void);
extern void fn_80153FA0(void);
extern void fn_80154344(void);
extern void fn_80155790(void);
extern void fn_80155DAC(void);
extern void fn_8016E484(void);
extern void fn_8016F4D8(void);
extern void fn_8016F5EC(void);
extern void fn_803BEB54(void);
extern void fn_80680CF8(void);
extern void fn_80686A48(void);
extern void fn_80686AF0(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);

/* External data declarations */
extern u8 lbl_8077A070[];
extern u8 lbl_8077A090[];
extern u8 lbl_8077A0A8[];
extern u8 lbl_8077A0B0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D994;
extern u32 lbl_8087D998;
extern u32 lbl_8087EE68;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F430;
extern u32 lbl_80881798;
extern u32 lbl_8088179C;
extern u32 lbl_808817A0;

/* Function declarations */
void fn_8011B570(void);
void fn_8011B8D4(void);
void fn_8011BB7C(void);
void fn_8011BB90(void);
void fn_8011BBBC(void);
void fn_8011BBD0(void);
void fn_8011BD14(void);
void fn_8011BE54(void);
void fn_8011BEB8(void);
void fn_8011BF3C(void);
void fn_8011BF94(void);
void fn_8011C044(void);
void fn_8011C074(void);
void fn_8011C2D4(void);
void fn_8011C314(void);
void fn_8011C378(void);
void fn_8011C3F4(void);
void fn_8011C46C(void);
void fn_8011C4AC(void);
void fn_8011C610(void);
void fn_8011C650(void);
void fn_8011C6C4(void);
void fn_8011C7C0(void);
void fn_8011C850(void);
void fn_8011C8E4(void);
void fn_8011C8EC(void);
void fn_8011C92C(void);
void fn_8011C97C(void);
void fn_8011C9F8(void);
void fn_8011CA00(void);
void fn_8011CA08(void);
void fn_8011CA5C(void);
void fn_8011CAE4(void);

asm void fn_8011B570(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, lbl_8087EF70
    cmpwi r0, 0x0
    beq lbl_fn_8011B570_00000034
    mr r3, r0
    li r4, 0x0
    li r5, 0x0
    bl fn_800A55AC
    b lbl_fn_8011B570_00000038
lbl_fn_8011B570_00000034:
    li r3, 0x0
lbl_fn_8011B570_00000038:
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_fn_8011B570_00000074
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_8011B570_00000064
    li r4, 0x0
    li r5, 0x1a
    bl fn_800A55AC
    b lbl_fn_8011B570_00000068
lbl_fn_8011B570_00000064:
    li r3, 0x0
lbl_fn_8011B570_00000068:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_8011B570_00000074:
    cmpwi r0, 0x0
    beq lbl_fn_8011B570_000000B0
    lwz r3, 0x130(r31)
    subic. r3, r3, 0x1
    stw r3, 0x130(r31)
    bge lbl_fn_8011B570_00000094
    addi r0, r3, 0x2
    stw r0, 0x130(r31)
lbl_fn_8011B570_00000094:
    addi r3, r1, 0x14
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8011B570_0000032C
lbl_fn_8011B570_000000B0:
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_8011B570_000000CC
    li r4, 0x0
    li r5, 0x1
    bl fn_800A55AC
    b lbl_fn_8011B570_000000D0
lbl_fn_8011B570_000000CC:
    li r3, 0x0
lbl_fn_8011B570_000000D0:
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_fn_8011B570_0000010C
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_8011B570_000000FC
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55AC
    b lbl_fn_8011B570_00000100
lbl_fn_8011B570_000000FC:
    li r3, 0x0
lbl_fn_8011B570_00000100:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_8011B570_0000010C:
    cmpwi r0, 0x0
    beq lbl_fn_8011B570_0000014C
    lwz r3, 0x130(r31)
    addi r3, r3, 0x1
    stw r3, 0x130(r31)
    cmpwi r3, 0x2
    blt lbl_fn_8011B570_00000130
    subi r0, r3, 0x2
    stw r0, 0x130(r31)
lbl_fn_8011B570_00000130:
    addi r3, r1, 0x10
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8011B570_0000032C
lbl_fn_8011B570_0000014C:
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_8011B570_00000168
    li r4, 0x0
    li r5, 0x3
    bl fn_800A55AC
    b lbl_fn_8011B570_0000016C
lbl_fn_8011B570_00000168:
    li r3, 0x0
lbl_fn_8011B570_0000016C:
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_fn_8011B570_000001A8
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_8011B570_00000198
    li r4, 0x0
    li r5, 0x18
    bl fn_800A55AC
    b lbl_fn_8011B570_0000019C
lbl_fn_8011B570_00000198:
    li r3, 0x0
lbl_fn_8011B570_0000019C:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_8011B570_000001A8:
    cmpwi r0, 0x0
    beq lbl_fn_8011B570_00000244
    lwz r5, 0x48(r31)
    li r4, 0x0
    lwz r3, 0x12c(r31)
    cmpwi r5, 0x1
    addi r0, r3, 0x1
    stw r0, 0x12c(r31)
    bne lbl_fn_8011B570_000001DC
    lwz r0, 0x134(r31)
    cmpwi r0, 0x2
    bne lbl_fn_8011B570_000001DC
    li r4, 0x1
lbl_fn_8011B570_000001DC:
    cmpwi r4, 0x0
    li r3, 0x4
    beq lbl_fn_8011B570_000001EC
    li r3, 0x1
lbl_fn_8011B570_000001EC:
    lwz r0, 0x12c(r31)
    cmpw r3, r0
    bgt lbl_fn_8011B570_00000228
    subi r0, r5, 0x1
    lwz r4, 0x134(r31)
    cntlzw r3, r0
    srwi r3, r3, 5
    li r0, 0x0
    addi r4, r4, 0x1
    stw r0, 0x12c(r31)
    addi r3, r3, 0x2
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    stw r0, 0x134(r31)
lbl_fn_8011B570_00000228:
    addi r3, r1, 0xc
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8011B570_0000032C
lbl_fn_8011B570_00000244:
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_8011B570_00000260
    li r4, 0x0
    li r5, 0x2
    bl fn_800A55AC
    b lbl_fn_8011B570_00000264
lbl_fn_8011B570_00000260:
    li r3, 0x0
lbl_fn_8011B570_00000264:
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_fn_8011B570_000002A0
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_8011B570_00000290
    li r4, 0x0
    li r5, 0x17
    bl fn_800A55AC
    b lbl_fn_8011B570_00000294
lbl_fn_8011B570_00000290:
    li r3, 0x0
lbl_fn_8011B570_00000294:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_8011B570_000002A0:
    cmpwi r0, 0x0
    beq lbl_fn_8011B570_0000032C
    lwz r3, 0x12c(r31)
    subic. r0, r3, 0x1
    stw r0, 0x12c(r31)
    bge lbl_fn_8011B570_00000314
    lwz r3, 0x48(r31)
    lwz r4, 0x134(r31)
    subi r0, r3, 0x1
    cntlzw r0, r0
    cmpwi r4, 0x0
    srwi r3, r0, 5
    addi r3, r3, 0x1
    ble lbl_fn_8011B570_000002DC
    subi r3, r4, 0x1
lbl_fn_8011B570_000002DC:
    lwz r0, 0x48(r31)
    li r4, 0x0
    stw r3, 0x134(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8011B570_000002FC
    cmpwi r3, 0x2
    bne lbl_fn_8011B570_000002FC
    li r4, 0x1
lbl_fn_8011B570_000002FC:
    neg r3, r4
    li r0, 0x3
    or r3, r3, r4
    srawi r3, r3, 31
    andc r0, r0, r3
    stw r0, 0x12c(r31)
lbl_fn_8011B570_00000314:
    addi r3, r1, 0x8
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8011B570_0000032C:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8011B570_00000350
    lwz r0, 0x134(r31)
    cmpwi r0, 0x2
    bne lbl_fn_8011B570_00000350
    li r0, 0x0
    stw r0, 0x12c(r31)
    stw r0, 0x130(r31)
lbl_fn_8011B570_00000350:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8011B8D4(void)
{
    nofralloc
    stwu r1, -0xc90(r1)
    mflr r0
    lis r6, lbl_8077A090@ha
    stw r0, 0xc94(r1)
    li r0, 0x0
    addi r6, r6, lbl_8077A090@l
    stmw r25, 0xc74(r1)
    mr r31, r3
    mr r25, r4
    mr r29, r5
    addi r27, r1, 0x10
    addi r3, r1, 0x20
    li r4, 0x0
    li r5, 0x800
    stw r6, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0xc60(r1)
    bl memset
    addi r3, r1, 0xc20
    li r4, 0x0
    li r5, 0x40
    bl memset
    cmpwi r29, 0x0
    mr r5, r29
    beq lbl_fn_8011B8D4_000003D4
    subi r5, r29, 0x1
lbl_fn_8011B8D4_000003D4:
    cmpwi r29, 0x0
    mr r3, r27
    beq lbl_fn_8011B8D4_000003E8
    addi r4, r25, 0x2
    b lbl_fn_8011B8D4_000003EC
lbl_fn_8011B8D4_000003E8:
    mr r4, r25
lbl_fn_8011B8D4_000003EC:
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_8077A070@ha
    lis r4, lbl_8077A0A8@ha
    addi r3, r3, lbl_8077A070@l
    stw r3, 0x10(r1)
    mr r3, r27
    addi r4, r4, lbl_8077A0A8@l
    bl fn_8005B9AC
    lis r28, lbl_8077A0B0@ha
    li r26, 0x0
    addi r28, r28, lbl_8077A0B0@l
    b lbl_fn_8011B8D4_00000470
lbl_fn_8011B8D4_00000428:
    addi r3, r1, 0x10
    bl fn_8005B710
    addi r4, r28, 0x90
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_8011B8D4_00000470
    addi r3, r1, 0x10
    bl fn_8005B710
    bl fn_800DC1DC
    mr r27, r3
    addi r3, r1, 0x10
    bl fn_8005B710
    bl fn_800DC1DC
    cmpwi r27, 0x0
    ble lbl_fn_8011B8D4_00000470
    cmpwi r3, 0x0
    ble lbl_fn_8011B8D4_00000470
    addi r26, r26, 0x1
lbl_fn_8011B8D4_00000470:
    addi r3, r1, 0x10
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_8011B8D4_00000428
    lwz r3, 0x4c4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8011B8D4_00000498
    lis r4, fn_80117E88@ha
    addi r4, r4, fn_80117E88@l
    bl fn_80695A50
lbl_fn_8011B8D4_00000498:
    cmpwi r26, 0x0
    stw r26, 0x4c0(r31)
    beq lbl_fn_8011B8D4_000004E4
    mulli r3, r26, 0x18
    li r4, 0x0
    la r5, lbl_8087D998
    la r6, lbl_8087D994
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8011BBBC@ha
    lis r5, fn_80117E88@ha
    mr r7, r26
    li r6, 0x18
    addi r4, r4, fn_8011BBBC@l
    addi r5, r5, fn_80117E88@l
    bl fn_80695720
    stw r3, 0x4c4(r31)
    b lbl_fn_8011B8D4_000004EC
lbl_fn_8011B8D4_000004E4:
    li r0, 0x0
    stw r0, 0x4c4(r31)
lbl_fn_8011B8D4_000004EC:
    cmpwi r29, 0x0
    li r30, 0x0
    beq lbl_fn_8011B8D4_000004FC
    addi r25, r25, 0x2
lbl_fn_8011B8D4_000004FC:
    cmpwi r29, 0x0
    stw r25, 0x14(r1)
    beq lbl_fn_8011B8D4_0000050C
    subi r29, r29, 0x1
lbl_fn_8011B8D4_0000050C:
    li r0, 0x0
    lis r27, lbl_8077A0B0@ha
    stw r29, 0x18(r1)
    addi r27, r27, lbl_8077A0B0@l
    stw r0, 0x1c(r1)
    b lbl_fn_8011B8D4_000005E8
lbl_fn_8011B8D4_00000524:
    addi r3, r1, 0x10
    bl fn_8005B710
    addi r4, r27, 0x90
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_8011B8D4_000005E8
    addi r3, r1, 0x10
    bl fn_8005B710
    bl fn_800DC1DC
    mr r28, r3
    addi r3, r1, 0x10
    bl fn_8005B710
    bl fn_800DC1DC
    mr r29, r3
    addi r3, r1, 0x10
    bl fn_8005B710
    bl fn_800DC1DC
    cmpwi r28, 0x0
    ble lbl_fn_8011B8D4_000005E8
    cmpwi r29, 0x0
    ble lbl_fn_8011B8D4_000005E8
    lwz r0, 0x4c4(r31)
    stwx r28, r30, r0
    add r26, r0, r30
    stw r29, 0x4(r26)
    stw r3, 0x8(r26)
    addi r3, r1, 0x10
    bl fn_8005B710
    lwz r0, 0xc(r26)
    mr r28, r3
    srwi. r0, r0, 31
    bne lbl_fn_8011B8D4_000005B0
    lbz r0, 0xc(r26)
    clrlwi r29, r0, 25
    b lbl_fn_8011B8D4_000005B4
lbl_fn_8011B8D4_000005B0:
    lwz r29, 0x10(r26)
lbl_fn_8011B8D4_000005B4:
    lbz r0, 0xc(r1)
    mr r3, r28
    stb r0, 0x8(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r5, r29
    mr r6, r28
    addi r3, r26, 0xc
    addi r8, r1, 0x8
    add r7, r28, r0
    li r4, 0x0
    bl fn_8006F72C
    addi r30, r30, 0x18
lbl_fn_8011B8D4_000005E8:
    addi r3, r1, 0x10
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_8011B8D4_00000524
    lmw r25, 0xc74(r1)
    lwz r0, 0xc94(r1)
    mtlr r0
    addi r1, r1, 0xc90
    blr
}

asm void fn_8011BB7C(void)
{
    nofralloc
    li r0, 0x0
    stw r4, 0x4(r3)
    stw r5, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_8011BB90(void)
{
    nofralloc
    cmpwi r5, 0x0
    beq lbl_fn_8011BB90_0000062C
    addi r4, r4, 0x2
lbl_fn_8011BB90_0000062C:
    cmpwi r5, 0x0
    stw r4, 0x4(r3)
    beq lbl_fn_8011BB90_0000063C
    subi r5, r5, 0x1
lbl_fn_8011BB90_0000063C:
    li r0, 0x0
    stw r5, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_8011BBBC(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    blr
}

asm void fn_8011BBD0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r0, 0x4b4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8011BBD0_00000694
    li r3, 0x0
    b lbl_fn_8011BBD0_00000784
lbl_fn_8011BBD0_00000694:
    lwz r6, 0x48(r3)
    li r31, 0x0
    cmpwi r6, 0x0
    bne lbl_fn_8011BBD0_000006AC
    lwz r5, 0x4c(r3)
    b lbl_fn_8011BBD0_000006B0
lbl_fn_8011BBD0_000006AC:
    lwz r5, 0x50(r3)
lbl_fn_8011BBD0_000006B0:
    mulli r0, r4, 0xb8
    cmpwi r6, 0x0
    add r4, r5, r0
    bne lbl_fn_8011BBD0_000006C8
    lwz r3, 0x4c(r3)
    b lbl_fn_8011BBD0_000006CC
lbl_fn_8011BBD0_000006C8:
    lwz r3, 0x50(r3)
lbl_fn_8011BBD0_000006CC:
    addi r30, r3, 0x4c
    addi r29, r4, 0x54
    mr r3, r30
    bl fn_803BEB54
    cmpwi r3, 0x0
    beq lbl_fn_8011BBD0_000006EC
    li r31, 0x0
    b lbl_fn_8011BBD0_00000780
lbl_fn_8011BBD0_000006EC:
    cmpwi r28, 0x0
    bne lbl_fn_8011BBD0_000006FC
    li r31, 0x0
    b lbl_fn_8011BBD0_00000780
lbl_fn_8011BBD0_000006FC:
    lwz r3, 0x1c(r30)
    lwz r0, 0x14(r29)
    cmpw r0, r3
    bge lbl_fn_8011BBD0_00000714
    li r31, 0x1
    b lbl_fn_8011BBD0_00000780
lbl_fn_8011BBD0_00000714:
    cmpw r3, r0
    bne lbl_fn_8011BBD0_00000780
    lwz r4, 0x1c(r29)
    lwz r3, 0x24(r30)
    addi r4, r4, 0x1
    lwz r7, 0x8(r29)
    addi r0, r3, 0x1
    lwz r3, 0x10(r30)
    mulli r6, r4, 0x18
    lwz r8, 0x4(r29)
    lwz r4, 0xc(r30)
    lwz r9, 0x0(r29)
    mulli r0, r0, 0x18
    lwz r5, 0x8(r30)
    add r6, r7, r6
    add r0, r3, r0
    mulli r3, r6, 0x3c
    mulli r0, r0, 0x3c
    add r3, r8, r3
    add r0, r4, r0
    mulli r3, r3, 0x3c
    mulli r0, r0, 0x3c
    add r3, r9, r3
    add r0, r5, r0
    cmpw r3, r0
    bgt lbl_fn_8011BBD0_00000780
    li r31, 0x1
lbl_fn_8011BBD0_00000780:
    mr r3, r31
lbl_fn_8011BBD0_00000784:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8011BD14(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x0(r3)
    stw r31, 0x4(r3)
    stw r31, 0x8(r3)
    addi r3, r3, 0xc
    bl fn_80125320
    lhz r0, 0xe0(r30)
    addi r3, r30, 0x140
    lfs f0, lbl_80881798
    li r4, 0x0
    rlwinm r0, r0, 0, 22, 15
    stw r31, 0xb4(r30)
    li r5, 0x60
    stw r31, 0xb8(r30)
    stw r31, 0xbc(r30)
    stw r31, 0xc0(r30)
    stw r31, 0xc4(r30)
    stw r31, 0xc8(r30)
    stw r31, 0xcc(r30)
    stw r31, 0xd0(r30)
    stw r31, 0xd4(r30)
    stw r31, 0xdc(r30)
    sth r0, 0xe0(r30)
    sth r31, 0xe2(r30)
    sth r31, 0xe4(r30)
    sth r31, 0xe6(r30)
    stw r31, 0xe8(r30)
    stw r31, 0xec(r30)
    stfs f0, 0xf8(r30)
    stfs f0, 0xfc(r30)
    stfs f0, 0x100(r30)
    stfs f0, 0x108(r30)
    stw r31, 0x10c(r30)
    stw r31, 0x110(r30)
    stw r31, 0x114(r30)
    stw r31, 0x118(r30)
    stb r31, 0x11c(r30)
    stb r31, 0x11d(r30)
    sth r31, 0x11e(r30)
    sth r31, 0x120(r30)
    sth r31, 0x122(r30)
    stw r31, 0x124(r30)
    stw r31, 0x128(r30)
    stw r31, 0x12c(r30)
    stfs f0, 0x130(r30)
    stfs f0, 0x134(r30)
    stfs f0, 0x138(r30)
    stw r31, 0x13c(r30)
    stw r31, 0x2b0(r30)
    stw r31, 0x2b4(r30)
    stw r31, 0x2b8(r30)
    stw r31, 0xd8(r30)
    bl memset
    addi r3, r30, 0x1a0
    li r4, 0x0
    li r5, 0x10
    bl memset
    addi r3, r30, 0x1b0
    li r4, 0x0
    li r5, 0x100
    bl memset
    addi r3, r30, 0xf0
    li r4, 0x0
    li r5, 0x8
    bl memset
    addi r3, r30, 0xc
    bl fn_8012539C
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011BE54(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x60
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0xd8(r3)
    rlwinm r0, r0, 0, 31, 28
    stw r0, 0xd8(r3)
    addi r3, r3, 0x140
    bl memset
    addi r3, r31, 0x1a0
    li r4, 0x0
    li r5, 0x10
    bl memset
    addi r3, r31, 0x1b0
    li r4, 0x0
    li r5, 0x100
    bl memset
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011BEB8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x0(r3)
    beq lbl_fn_8011BEB8_00000970
    stw r0, 0xd0(r3)
lbl_fn_8011BEB8_00000970:
    lha r4, 0xe2(r3)
    li r5, 0x0
    lhz r0, 0xe0(r3)
    stw r5, 0xbc(r3)
    rlwinm r0, r0, 0, 18, 16
    sth r4, 0xe4(r3)
    sth r5, 0xe2(r3)
    sth r5, 0xe6(r3)
    sth r0, 0xe0(r3)
    stw r5, 0xe8(r3)
    stw r5, 0xec(r3)
    addi r3, r3, 0xc
    bl fn_8012539C
    addi r3, r31, 0xc
    bl fn_8012539C
    lwz r0, 0xd8(r31)
    ori r0, r0, 0x4
    stw r0, 0xd8(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011BF3C(void)
{
    nofralloc
    lwz r0, 0xd0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8011BF3C_000009EC
    mr r4, r0
    lwz r12, 0x0(r4)
    lwz r12, 0x54(r12)
    mtctr r12
    bctr
lbl_fn_8011BF3C_000009EC:
    lwz r4, 0xc4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_8011BF3C_00000A08
    lwz r12, 0x0(r4)
    lwz r12, 0x64(r12)
    mtctr r12
    bctr
lbl_fn_8011BF3C_00000A08:
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_8011BF94(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    lha r4, 0xe2(r3)
    lhz r0, 0xe0(r3)
    stw r31, 0x0(r3)
    rlwinm r0, r0, 0, 18, 16
    stw r31, 0xd0(r3)
    stw r31, 0xbc(r3)
    sth r4, 0xe4(r3)
    sth r31, 0xe2(r3)
    sth r31, 0xe6(r3)
    sth r0, 0xe0(r3)
    stw r31, 0xe8(r3)
    stw r31, 0xec(r3)
    addi r3, r3, 0xc
    bl fn_8012539C
    addi r3, r30, 0xc
    bl fn_8012539C
    lwz r0, 0xd8(r30)
    stw r31, 0xb4(r30)
    ori r0, r0, 0x4
    clrrwi r0, r0, 1
    stw r0, 0xd8(r30)
    stw r31, 0xb8(r30)
    stw r31, 0x118(r30)
    stw r31, 0x2b0(r30)
    stw r31, 0xc4(r30)
    stw r31, 0xc8(r30)
    stw r31, 0xd0(r30)
    stw r31, 0xcc(r30)
    stw r31, 0xd4(r30)
    stw r31, 0xdc(r30)
    stw r31, 0xc0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011C044(void)
{
    nofralloc
    lha r6, 0xe2(r3)
    li r5, 0x0
    lhz r0, 0xe0(r3)
    sth r6, 0xe4(r3)
    rlwinm r0, r0, 0, 18, 16
    sth r4, 0xe2(r3)
    sth r5, 0xe6(r3)
    sth r0, 0xe0(r3)
    stw r5, 0xe8(r3)
    stw r5, 0xec(r3)
    addi r3, r3, 0xc
    b fn_8012539C
}

asm void fn_8011C074(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r6, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    lha r7, 0xe2(r3)
    lhz r0, 0xe0(r3)
    sth r7, 0xe4(r3)
    rlwinm r0, r0, 0, 18, 16
    sth r5, 0xe2(r3)
    sth r6, 0xe6(r3)
    sth r0, 0xe0(r3)
    stw r6, 0xe8(r3)
    stw r6, 0xec(r3)
    addi r3, r3, 0xc
    bl fn_8012539C
    lha r0, 0xe2(r30)
    cmpwi r0, 0x4
    beq lbl_fn_8011C074_00000B78
    cmpwi r0, 0x0
    bne lbl_fn_8011C074_00000B90
    lwz r3, lbl_8087EE68
    mr r4, r31
    bl fn_80018BAC
    cmpwi r3, 0x0
    bne lbl_fn_8011C074_00000B90
lbl_fn_8011C074_00000B78:
    lwz r0, 0x12a4(r31)
    ori r0, r0, 0x20
    stw r0, 0x12a4(r31)
    lwz r0, 0xc4(r30)
    stw r0, 0xfc0(r31)
    b lbl_fn_8011C074_00000BA4
lbl_fn_8011C074_00000B90:
    lwz r0, 0x12a4(r31)
    li r3, 0x0
    stw r3, 0xfc0(r31)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r31)
lbl_fn_8011C074_00000BA4:
    lwz r3, 0x12a4(r31)
    srwi. r0, r3, 31
    beq lbl_fn_8011C074_00000CF4
    lha r0, 0xe2(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8011C074_00000C6C
    cmpwi r0, 0x6
    beq lbl_fn_8011C074_00000C6C
    cmpwi r0, 0x7
    beq lbl_fn_8011C074_00000C6C
    mr r3, r31
    bl fn_80153B44
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_8011C074_00000C64
    mr r3, r31
    bl fn_8014FCC4
    cmpwi r3, 0x0
    beq lbl_fn_8011C074_00000C64
    bl fn_80680CF8
    lis r4, 0x51ec
    subi r0, r4, 0x7ae1
    mulhw r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x64
    subf r0, r0, r3
    cmpwi r0, 0x32
    bge lbl_fn_8011C074_00000C64
    mr r3, r31
    bl fn_80153B44
    cmpwi r3, 0x1
    bne lbl_fn_8011C074_00000C58
    lfs f2, 0xc1c(r31)
    addi r4, r1, 0x8
    lfs f1, 0xc18(r31)
    lfs f0, 0xc14(r31)
    fneg f2, f2
    fneg f1, f1
    fneg f0, f0
    stfs f2, 0x10(r1)
    stfs f0, 0x8(r1)
    stfs f1, 0xc(r1)
    b lbl_fn_8011C074_00000C5C
lbl_fn_8011C074_00000C58:
    addi r4, r31, 0xc14
lbl_fn_8011C074_00000C5C:
    mr r3, r31
    bl fn_80155790
lbl_fn_8011C074_00000C64:
    mr r3, r31
    bl fn_801539E0
lbl_fn_8011C074_00000C6C:
    lwz r0, 0x12a4(r31)
    li r3, 0x0
    srwi. r4, r0, 31
    beq lbl_fn_8011C074_00000C8C
    lwz r0, 0xc48(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8011C074_00000C8C
    li r3, 0x1
lbl_fn_8011C074_00000C8C:
    cmpwi r3, 0x0
    bne lbl_fn_8011C074_00000CAC
    lha r0, 0xe2(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8011C074_00000CAC
    mr r3, r31
    bl fn_80153FA0
    b lbl_fn_8011C074_00000D4C
lbl_fn_8011C074_00000CAC:
    cmpwi r4, 0x0
    li r3, 0x0
    beq lbl_fn_8011C074_00000CC8
    lwz r0, 0xc48(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8011C074_00000CC8
    li r3, 0x1
lbl_fn_8011C074_00000CC8:
    cmpwi r3, 0x0
    beq lbl_fn_8011C074_00000D4C
    lha r0, 0xe4(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8011C074_00000D4C
    lha r0, 0xe2(r30)
    cmpwi r0, 0x6
    beq lbl_fn_8011C074_00000D4C
    mr r3, r31
    bl fn_80154344
    b lbl_fn_8011C074_00000D4C
lbl_fn_8011C074_00000CF4:
    extrwi. r3, r3, 1, 25
    bne lbl_fn_8011C074_00000D18
    lha r0, 0xe2(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8011C074_00000D18
    mr r3, r31
    li r4, 0x1
    bl fn_80155DAC
    b lbl_fn_8011C074_00000D4C
lbl_fn_8011C074_00000D18:
    cmpwi r3, 0x0
    beq lbl_fn_8011C074_00000D4C
    lha r0, 0xe4(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8011C074_00000D4C
    lha r0, 0xe2(r30)
    cmpwi r0, 0x6
    beq lbl_fn_8011C074_00000D4C
    cmpwi r0, 0x0
    beq lbl_fn_8011C074_00000D4C
    mr r3, r31
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_8011C074_00000D4C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8011C2D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    li r5, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8011C074
    stw r31, 0xbc(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011C314(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    li r5, 0x1
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_8011C074
    mr r4, r31
    addi r3, r29, 0xc
    addi r5, r30, 0x528
    li r6, 0x0
    bl fn_80128508
    addi r3, r29, 0xc
    bl fn_801255C8
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8011C378(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    li r5, 0x2
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_8011C074
    lwz r3, 0xd8(r29)
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8011C378_00000E4C
    rlwinm r0, r3, 0, 30, 28
    stw r0, 0xd8(r29)
lbl_fn_8011C378_00000E4C:
    mr r4, r31
    addi r3, r29, 0xc
    addi r5, r30, 0x528
    li r6, 0x0
    bl fn_801286F0
    addi r3, r29, 0xc
    bl fn_801255C8
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8011C3F4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f1
    stw r31, 0x14(r1)
    mr r31, r5
    li r5, 0x3
    stw r30, 0x10(r1)
    mr r30, r4
    stw r29, 0xc(r1)
    mr r29, r3
    bl fn_8011C074
    stfs f31, 0x108(r29)
    mr r4, r31
    addi r3, r29, 0xc
    addi r5, r30, 0x528
    li r6, 0x0
    bl fn_80128930
    stfs f31, 0x34(r29)
    addi r3, r29, 0xc
    bl fn_801255C8
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    lwz r29, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8011C46C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    li r5, 0x4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8011C074
    stw r31, 0xbc(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011C4AC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r0, 0x48(r4)
    cmpwi r0, 0x3
    bne lbl_fn_8011C4AC_00000FF0
    mr r3, r30
    bl fn_8016E484
    cmpwi r3, 0x0
    bne lbl_fn_8011C4AC_00000FF0
    lfs f3, 0x9fc(r30)
    lfs f0, lbl_8088179C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8011C4AC_00000FF0
    lwz r0, 0xabc(r30)
    cmpwi r0, 0x0
    ble lbl_fn_8011C4AC_00000FF0
    lwz r3, 0xc4(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8011C4AC_00000FC0
    mr r4, r30
    bl fn_8016F4D8
    cmpwi r3, 0x0
    beq lbl_fn_8011C4AC_00000FC0
    lwz r3, 0xc4(r29)
    mr r4, r30
    bl fn_8016F5EC
lbl_fn_8011C4AC_00000FC0:
    lwz r31, 0xc4(r29)
    mr r3, r29
    mr r4, r30
    li r5, 0x7
    bl fn_8011C074
    stw r31, 0x10c(r29)
    lwz r0, 0xaa0(r30)
    cmplwi r0, 0x3
    ble lbl_fn_8011C4AC_00001084
    addi r0, r30, 0xabc
    stw r0, 0xdc(r29)
    b lbl_fn_8011C4AC_00001084
lbl_fn_8011C4AC_00000FF0:
    mr r3, r29
    mr r4, r30
    li r5, 0x5
    bl fn_8011C074
    lwz r10, 0xc4(r29)
    cmpwi r10, 0x0
    beq lbl_fn_8011C4AC_00001084
    psq_l f1, 0x600(r30), 0, 0
    addi r5, r1, 0x14
    lfs f2, 0x608(r30)
    addi r6, r1, 0x8
    stfs f2, 0x1c(r1)
    li r4, 0x0
    lwz r3, lbl_8087EE98
    lis r7, 0x8000
    psq_st f1, 0x0(r5), 0, 0
    li r8, 0x0
    li r9, 0x0
    psq_l f1, 0x600(r10), 0, 0
    lfs f2, 0x608(r10)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r6), 0, 0
    bl fn_8004ECC0
    cmpwi r3, 0x0
    beq lbl_fn_8011C4AC_0000107C
    li r0, 0x0
    sth r0, 0xe6(r29)
    lwz r4, 0xc4(r29)
    addi r3, r29, 0xc
    addi r5, r30, 0x528
    li r6, 0x0
    bl fn_80128930
    addi r3, r29, 0xc
    bl fn_801255C8
    b lbl_fn_8011C4AC_00001084
lbl_fn_8011C4AC_0000107C:
    li r0, 0x1
    sth r0, 0xe6(r29)
lbl_fn_8011C4AC_00001084:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8011C610(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    li r5, 0x6
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8011C074
    stw r31, 0xec(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011C650(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    li r5, 0x7
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_8011C074
    stw r31, 0x10c(r28)
    lwz r0, 0xaa0(r29)
    cmplw r30, r0
    bge lbl_fn_8011C650_00001134
    slwi r0, r30, 3
    add r3, r29, r0
    addi r0, r3, 0xaa4
    stw r0, 0xdc(r28)
lbl_fn_8011C650_00001134:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8011C6C4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    fmr f31, f1
    stw r31, 0x1c(r1)
    mr r31, r5
    li r5, 0x8
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_8011C074
    stw r31, 0x104(r29)
    stfs f31, 0x108(r29)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8011C6C4_000011A8
    lwz r5, 0x10d8(r3)
    b lbl_fn_8011C6C4_000011AC
lbl_fn_8011C6C4_000011A8:
    li r5, 0x0
lbl_fn_8011C6C4_000011AC:
    cmpwi r5, 0x0
    beq lbl_fn_8011C6C4_000011FC
    lwz r0, 0x78(r5)
    li r4, 0x0
    li r6, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8011C6C4_000011F4
lbl_fn_8011C6C4_000011CC:
    lwz r3, 0x7c(r5)
    lwzx r0, r3, r6
    cmpw r31, r0
    bne lbl_fn_8011C6C4_000011E8
    mulli r0, r4, 0x28
    add r3, r3, r0
    b lbl_fn_8011C6C4_00001200
lbl_fn_8011C6C4_000011E8:
    addi r6, r6, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_8011C6C4_000011CC
lbl_fn_8011C6C4_000011F4:
    li r3, 0x0
    b lbl_fn_8011C6C4_00001200
lbl_fn_8011C6C4_000011FC:
    li r3, 0x0
lbl_fn_8011C6C4_00001200:
    cmpwi r3, 0x0
    beq lbl_fn_8011C6C4_0000121C
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x100(r29)
    psq_st f1, 0xf8(r29), 0, 0
    b lbl_fn_8011C6C4_0000122C
lbl_fn_8011C6C4_0000121C:
    psq_l f1, 0x528(r30), 0, 0
    lfs f2, 0x530(r30)
    stfs f2, 0x100(r29)
    psq_st f1, 0xf8(r29), 0, 0
lbl_fn_8011C6C4_0000122C:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8011C7C0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    fmr f31, f1
    stw r31, 0x1c(r1)
    mr r31, r5
    li r5, 0x9
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_8011C074
    cmpwi r31, 0x0
    stw r31, 0xcc(r29)
    stfs f31, 0x108(r29)
    beq lbl_fn_8011C7C0_000012AC
    psq_l f1, 0x528(r31), 0, 0
    lfs f2, 0x530(r31)
    stfs f2, 0x100(r29)
    psq_st f1, 0xf8(r29), 0, 0
    b lbl_fn_8011C7C0_000012BC
lbl_fn_8011C7C0_000012AC:
    psq_l f1, 0x528(r30), 0, 0
    lfs f2, 0x530(r30)
    stfs f2, 0x100(r29)
    psq_st f1, 0xf8(r29), 0, 0
lbl_fn_8011C7C0_000012BC:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8011C850(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0xf
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_8011C074
    lwz r3, lbl_8087EE68
    mr r4, r31
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    bl fn_80018240
    cmpwi r3, 0x0
    beq lbl_fn_8011C850_00001348
    addi r3, r1, 0xc
    lfs f2, 0x14(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0xf8(r30), 0, 0
    lfs f3, lbl_808817A0
    stfs f2, 0x100(r30)
    lfs f0, 0x8(r1)
    fmuls f0, f3, f0
    stfs f0, 0x108(r30)
    b lbl_fn_8011C850_0000135C
lbl_fn_8011C850_00001348:
    lhz r0, 0xe0(r30)
    li r3, -0x1
    sth r3, 0xe6(r30)
    ori r0, r0, 0x4000
    sth r0, 0xe0(r30)
lbl_fn_8011C850_0000135C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8011C8E4(void)
{
    nofralloc
    li r5, 0xa
    b fn_8011C074
}

asm void fn_8011C8EC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    li r5, 0xb
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8011C074
    stw r31, 0x104(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011C92C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f1
    stw r31, 0x14(r1)
    mr r31, r5
    li r5, 0xc
    stw r30, 0x10(r1)
    mr r30, r3
    bl fn_8011C074
    stw r31, 0x104(r30)
    stfs f31, 0x108(r30)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8011C97C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f1
    stw r31, 0x14(r1)
    mr r31, r5
    li r5, 0xd
    stw r30, 0x10(r1)
    mr r30, r4
    stw r29, 0xc(r1)
    mr r29, r3
    bl fn_8011C074
    stw r31, 0x10c(r29)
    mr r4, r31
    addi r3, r30, 0xc64
    addi r5, r30, 0x528
    stfs f31, 0x108(r29)
    li r6, 0x0
    bl fn_80128930
    stfs f31, 0xc8c(r30)
    addi r3, r30, 0xc64
    bl fn_801255C8
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    lwz r29, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8011C9F8(void)
{
    nofralloc
    li r5, 0xe
    b fn_8011C074
}

asm void fn_8011CA00(void)
{
    nofralloc
    li r5, 0x10
    b fn_8011C074
}

asm void fn_8011CA08(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f1
    stw r31, 0x14(r1)
    mr r31, r5
    li r5, 0x11
    stw r30, 0x10(r1)
    mr r30, r3
    bl fn_8011C074
    stw r31, 0xcc(r30)
    stw r31, 0x10c(r30)
    stfs f31, 0x108(r30)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8011CA5C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x28(r1)
    fmr f31, f2
    stfd f30, 0x20(r1)
    fmr f30, f1
    stw r31, 0x1c(r1)
    mr r31, r5
    li r5, 0x12
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_8011C074
    fmr f1, f31
    stfs f30, 0x108(r29)
    mr r4, r31
    addi r3, r29, 0xc
    addi r5, r30, 0x528
    li r6, 0x0
    bl fn_80128C08
    stfs f30, 0x34(r29)
    addi r3, r29, 0xc
    bl fn_801255C8
    lwz r0, 0x34(r1)
    lfd f31, 0x28(r1)
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8011CAE4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    fmr f31, f1
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r5, lbl_8087F430
    cmpwi r5, 0x0
    beq lbl_fn_8011CAE4_000015B4
    lwz r3, 0x10d8(r5)
    b lbl_fn_8011CAE4_000015B8
lbl_fn_8011CAE4_000015B4:
    li r3, 0x0
lbl_fn_8011CAE4_000015B8:
    cmpwi r3, 0x0
    beq lbl_fn_8011CAE4_0000169C
    lwz r5, 0x48(r4)
    li r7, 0x0
    li r0, 0x1
    cmpwi r5, 0x1
    beq lbl_fn_8011CAE4_000015E0
    cmpwi r5, 0x4
    beq lbl_fn_8011CAE4_000015E0
    li r0, 0x0
lbl_fn_8011CAE4_000015E0:
    cmpwi r0, 0x0
    beq lbl_fn_8011CAE4_000015F0
    addi r7, r3, 0x80
    b lbl_fn_8011CAE4_0000160C
lbl_fn_8011CAE4_000015F0:
    cmpwi r5, 0x2
    bne lbl_fn_8011CAE4_00001600
    addi r7, r3, 0x88
    b lbl_fn_8011CAE4_0000160C
lbl_fn_8011CAE4_00001600:
    cmpwi r5, 0x3
    bne lbl_fn_8011CAE4_0000160C
    addi r7, r3, 0x90
lbl_fn_8011CAE4_0000160C:
    cmpwi r7, 0x0
    beq lbl_fn_8011CAE4_0000169C
    lwz r0, 0x0(r7)
    li r31, 0x0
    li r8, 0x0
    li r6, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8011CAE4_0000165C
lbl_fn_8011CAE4_00001630:
    lwz r5, 0x4(r7)
    lwz r0, 0x58(r4)
    lwzx r3, r5, r6
    cmpw r3, r0
    bne lbl_fn_8011CAE4_00001650
    mulli r0, r8, 0x148
    add r31, r5, r0
    b lbl_fn_8011CAE4_0000165C
lbl_fn_8011CAE4_00001650:
    addi r6, r6, 0x148
    addi r8, r8, 0x1
    bdnz lbl_fn_8011CAE4_00001630
lbl_fn_8011CAE4_0000165C:
    cmpwi r31, 0x0
    beq lbl_fn_8011CAE4_0000169C
    mr r3, r29
    mr r4, r30
    li r5, 0x13
    bl fn_8011C074
    stfs f31, 0x108(r29)
    addi r3, r29, 0xc
    addi r4, r31, 0x4
    addi r5, r30, 0x528
    lfs f1, 0x14(r31)
    li r6, 0x0
    bl fn_80128A30
    stfs f31, 0x34(r29)
    addi r3, r29, 0xc
    bl fn_801255C8
lbl_fn_8011CAE4_0000169C:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
