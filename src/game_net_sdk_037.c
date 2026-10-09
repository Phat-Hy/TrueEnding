#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8067E23C(void);
extern void fn_806A4264(void);
extern void fn_806A4270(void);
extern void fn_806D57A0(void);
extern void fn_806D5850(void);
extern void fn_806D58F0(void);
extern void fn_806D5900(void);
extern void fn_806D5930(void);
extern void fn_806D62F0(void);
extern void fn_806D63A0(void);
extern void fn_806D64B0(void);
extern void fn_806D6610(void);
extern void fn_806D7A90(void);
extern void fn_806D7AC0(void);
extern void fn_806D7AE0(void);
extern void fn_806D7B30(void);
extern void fn_806D7BB0(void);
extern void fn_806D7CF0(void);
extern void fn_806D7E70(void);
extern void fn_806D7F20(void);
extern void fn_806D8650(void);
extern void fn_806D8F10(void);
extern void fn_806D8F20(void);
extern void fn_806D8F30(void);
extern void fn_806E96A0(void);
extern void fn_806E9700(void);
extern void fn_806E9710(void);
extern void fn_806E9730(void);
extern void fn_806E9760(void);
extern void fn_806E97F0(void);
extern void fn_806E99F0(void);
extern void fn_806E9AD0(void);
extern void fn_806E9BB0(void);
extern void fn_806E9E40(void);
extern void fn_806E9F50(void);
extern void fn_806EA050(void);
extern void fn_806EA180(void);
extern void fn_806EA3E0(void);
extern void fn_806EA730(void);
extern void fn_806EA790(void);
extern void fn_806EBE60(void);
extern void fn_806EC4B0(void);
extern void fn_806EE8B0(void);
extern void fn_806EED30(void);
extern void fn_806EEEC0(void);

/* External data declarations */
extern u8 lbl_807C4330[];
extern u8 lbl_807C4334[];
extern u8 lbl_80860F98[];

/* Small data declarations */

/* Function declarations */
void pad_03_806EC77C_text(void);
void fn_806EC780(void);
void fn_806ECC20(void);
void fn_806ECE40(void);
void fn_806ECF70(void);
void fn_806ED370(void);
void fn_806ED710(void);
void fn_806ED800(void);
void fn_806ED8D0(void);
void fn_806ED9D0(void);
void fn_806EDAA0(void);
void fn_806EDB70(void);
void fn_806EDCB0(void);
void fn_806EDD80(void);
void fn_806EDE80(void);
void fn_806EDF70(void);
void fn_806EE030(void);
void fn_806EE0F0(void);
void fn_806EE1E0(void);
void fn_806EE200(void);
void fn_806EE240(void);
void fn_806EE250(void);
void fn_806EE2A0(void);
void fn_806EE4E0(void);
void fn_806EE550(void);
void fn_806EE560(void);

asm void pad_03_806EC77C_text(void)
{
    nofralloc
    opword 0x00000000
}

asm void fn_806EC780(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_24
    lwz r0, 0x44(r3)
    mr r29, r6
    mr r30, r7
    mr r26, r3
    mr r27, r4
    add r31, r4, r0
    mr r28, r5
    subf r24, r0, r5
    mr r4, r29
    mr r5, r30
    bl fn_806EE250
    stw r3, 0x14(r1)
    mr r4, r3
    lwz r0, 0x2c(r26)
    cmpwi r0, 0x0
    beq lbl_fn_806EC780_00000088
    mr r3, r26
    mr r5, r29
    mr r6, r30
    mr r8, r27
    mr r9, r28
    li r7, 0x0
    li r10, 0x0
    bl fn_806E9F50
    cmpwi r3, 0x0
    bne lbl_fn_806EC780_00000088
    li r3, 0x0
    b lbl_fn_806EC780_0000048C
lbl_fn_806EC780_00000088:
    cmpwi r24, 0x2
    li r25, 0x0
    ble lbl_fn_806EC780_000000B4
    lis r4, lbl_807C4330@ha
    mr r3, r31
    addi r4, r4, lbl_807C4330@l
    li r5, 0x2
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_806EC780_000000B4
    li r25, 0x1
lbl_fn_806EC780_000000B4:
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    bne lbl_fn_806EC780_00000270
    mr r3, r26
    mr r4, r29
    mr r5, r30
    mr r6, r27
    mr r7, r28
    addi r8, r1, 0x10
    bl fn_806EA050
    cmpwi r3, 0x0
    bne lbl_fn_806EC780_000000EC
    li r3, 0x0
    b lbl_fn_806EC780_0000048C
lbl_fn_806EC780_000000EC:
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806EC780_00000100
    li r3, 0x1
    b lbl_fn_806EC780_0000048C
lbl_fn_806EC780_00000100:
    cmpwi r25, 0x0
    beq lbl_fn_806EC780_00000114
    lbz r0, 0x2(r31)
    cmplwi r0, 0x1
    beq lbl_fn_806EC780_000001B0
lbl_fn_806EC780_00000114:
    cmpwi r25, 0x0
    beq lbl_fn_806EC780_00000128
    lbz r0, 0x2(r31)
    cmplwi r0, 0x68
    beq lbl_fn_806EC780_000001A8
lbl_fn_806EC780_00000128:
    lwz r0, 0x40(r26)
    li r27, 0x0
    cmpwi r0, 0x2
    bne lbl_fn_806EC780_00000154
    li r0, 0x3
    sth r0, 0xc(r1)
    addi r3, r1, 0x28
    addi r4, r1, 0xc
    li r5, 0x2
    bl memcpy
    li r27, 0x2
lbl_fn_806EC780_00000154:
    addi r3, r1, 0x28
    lis r4, lbl_807C4330@ha
    add r3, r3, r27
    li r5, 0x2
    addi r4, r4, lbl_807C4330@l
    bl memcpy
    addi r27, r27, 0x2
    addi r6, r1, 0x28
    li r0, 0x68
    stbx r0, r6, r27
    mr r3, r26
    mr r4, r29
    mr r5, r30
    addi r7, r27, 0x1
    bl fn_806EE8B0
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_fn_806EC780_000001A8
    li r3, 0x0
    b lbl_fn_806EC780_0000048C
lbl_fn_806EC780_000001A8:
    li r3, 0x1
    b lbl_fn_806EC780_0000048C
lbl_fn_806EC780_000001B0:
    lwz r0, 0x20(r26)
    cmpwi r0, 0x0
    bne lbl_fn_806EC780_000001C4
    li r3, 0x1
    b lbl_fn_806EC780_0000048C
lbl_fn_806EC780_000001C4:
    mr r3, r26
    mr r5, r29
    mr r6, r30
    addi r4, r1, 0x14
    bl fn_806EA180
    cmpwi r3, 0x0
    beq lbl_fn_806EC780_00000270
    cmpwi r3, 0x5
    beq lbl_fn_806EC780_00000268
    lwz r0, 0x40(r26)
    li r27, 0x0
    cmpwi r0, 0x2
    bne lbl_fn_806EC780_00000214
    li r0, 0x3
    sth r0, 0xa(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0xa
    li r5, 0x2
    bl memcpy
    li r27, 0x2
lbl_fn_806EC780_00000214:
    addi r3, r1, 0x20
    lis r4, lbl_807C4330@ha
    add r3, r3, r27
    li r5, 0x2
    addi r4, r4, lbl_807C4330@l
    bl memcpy
    addi r27, r27, 0x2
    addi r6, r1, 0x20
    li r0, 0x68
    stbx r0, r6, r27
    mr r3, r26
    mr r4, r29
    mr r5, r30
    addi r7, r27, 0x1
    bl fn_806EE8B0
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_fn_806EC780_00000268
    li r3, 0x0
    b lbl_fn_806EC780_0000048C
lbl_fn_806EC780_00000268:
    li r3, 0x1
    b lbl_fn_806EC780_0000048C
lbl_fn_806EC780_00000270:
    lwz r3, 0x14(r1)
    lwz r0, 0xc(r3)
    cmpwi r0, 0x7
    bne lbl_fn_806EC780_0000032C
    cmpwi r25, 0x0
    beq lbl_fn_806EC780_00000294
    lbz r0, 0x2(r31)
    cmplwi r0, 0x68
    beq lbl_fn_806EC780_00000324
lbl_fn_806EC780_00000294:
    lwz r3, 0x14(r1)
    li r26, 0x0
    lwz r29, 0x8(r3)
    lhz r27, 0x4(r3)
    lwz r0, 0x40(r29)
    lwz r28, 0x0(r3)
    cmpwi r0, 0x2
    bne lbl_fn_806EC780_000002D0
    li r0, 0x3
    sth r0, 0x8(r1)
    addi r3, r1, 0x18
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    li r26, 0x2
lbl_fn_806EC780_000002D0:
    addi r3, r1, 0x18
    lis r4, lbl_807C4330@ha
    add r3, r3, r26
    li r5, 0x2
    addi r4, r4, lbl_807C4330@l
    bl memcpy
    addi r26, r26, 0x2
    addi r6, r1, 0x18
    li r0, 0x68
    stbx r0, r6, r26
    mr r3, r29
    mr r4, r28
    mr r5, r27
    addi r7, r26, 0x1
    bl fn_806EE8B0
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_fn_806EC780_00000324
    li r3, 0x0
    b lbl_fn_806EC780_0000048C
lbl_fn_806EC780_00000324:
    li r3, 0x1
    b lbl_fn_806EC780_0000048C
lbl_fn_806EC780_0000032C:
    cmpwi r25, 0x0
    beq lbl_fn_806EC780_00000374
    cmpwi r24, 0x4
    blt lbl_fn_806EC780_00000374
    lis r4, lbl_807C4330@ha
    addi r3, r31, 0x2
    addi r4, r4, lbl_807C4330@l
    li r5, 0x2
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_806EC780_00000374
    lbz r3, 0x1(r27)
    li r25, 0x0
    lbz r0, 0x0(r27)
    addi r31, r31, 0x2
    stb r3, 0x3(r27)
    subi r28, r28, 0x2
    stbu r0, 0x2(r27)
lbl_fn_806EC780_00000374:
    cmpwi r25, 0x0
    bne lbl_fn_806EC780_00000444
    lwz r31, 0x14(r1)
    lwz r0, 0xc(r31)
    cmpwi r0, 0x5
    bge lbl_fn_806EC780_000003B8
    mr r3, r26
    mr r4, r29
    mr r5, r30
    mr r6, r27
    mr r7, r28
    addi r8, r1, 0x10
    bl fn_806EA050
    cmpwi r3, 0x0
    bne lbl_fn_806EC780_0000043C
    li r3, 0x0
    b lbl_fn_806EC780_0000048C
lbl_fn_806EC780_000003B8:
    beq lbl_fn_806EC780_000003CC
    cmpwi r0, 0x6
    beq lbl_fn_806EC780_000003CC
    li r0, 0x1
    b lbl_fn_806EC780_0000042C
lbl_fn_806EC780_000003CC:
    lwz r3, 0x9c(r31)
    bl fn_806D58F0
    cmpwi r3, 0x0
    beq lbl_fn_806EC780_0000040C
    mr r3, r31
    mr r5, r27
    mr r6, r28
    li r4, 0x0
    li r7, 0x0
    bl fn_806E9E40
    cmpwi r3, 0x0
    bne lbl_fn_806EC780_00000404
    li r0, 0x0
    b lbl_fn_806EC780_0000042C
lbl_fn_806EC780_00000404:
    li r0, 0x1
    b lbl_fn_806EC780_0000042C
lbl_fn_806EC780_0000040C:
    mr r3, r31
    mr r4, r27
    mr r5, r28
    li r6, 0x0
    bl fn_806E9AD0
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_806EC780_0000042C:
    cmpwi r0, 0x0
    bne lbl_fn_806EC780_0000043C
    li r3, 0x0
    b lbl_fn_806EC780_0000048C
lbl_fn_806EC780_0000043C:
    li r3, 0x1
    b lbl_fn_806EC780_0000048C
lbl_fn_806EC780_00000444:
    lbz r4, 0x2(r31)
    cmpwi r4, 0x8
    bge lbl_fn_806EC780_00000470
    lwz r3, 0x14(r1)
    mr r5, r27
    mr r6, r28
    bl fn_806EBE60
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_806EC780_0000048C
lbl_fn_806EC780_00000470:
    lwz r3, 0x14(r1)
    mr r5, r27
    mr r6, r28
    bl fn_806EC4B0
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_806EC780_0000048C:
    addi r11, r1, 0x50
    bl _restgpr_24
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_806ECC20(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_806EE250
    lwz r0, 0x2c(r28)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_806ECC20_00000514
    mr r3, r28
    mr r4, r31
    mr r5, r29
    mr r6, r30
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_806E9F50
    cmpwi r3, 0x0
    bne lbl_fn_806ECC20_00000514
    li r3, 0x0
    b lbl_fn_806ECC20_0000069C
lbl_fn_806ECC20_00000514:
    cmpwi r31, 0x0
    bne lbl_fn_806ECC20_00000524
    li r3, 0x1
    b lbl_fn_806ECC20_0000069C
lbl_fn_806ECC20_00000524:
    lwz r3, 0xc(r31)
    cmpwi r3, 0x0
    bne lbl_fn_806ECC20_000005FC
    lwz r0, 0x20(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806ECC20_00000554
    bl fn_806D8F30
    lwz r4, 0x1c(r31)
    lwz r0, 0x20(r31)
    subf r3, r4, r3
    cmplw r3, r0
    bge lbl_fn_806ECC20_0000055C
lbl_fn_806ECC20_00000554:
    li r3, 0x1
    b lbl_fn_806ECC20_0000069C
lbl_fn_806ECC20_0000055C:
    lwz r3, 0xc(r31)
    cmpwi r3, 0x5
    bge lbl_fn_806ECC20_000005BC
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806ECC20_000005A0
    mr r3, r31
    bl fn_806EA730
    mr r3, r31
    li r4, 0x6
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    cmpwi r3, 0x0
    bne lbl_fn_806ECC20_000005E8
    li r0, 0x0
    b lbl_fn_806ECC20_000005EC
lbl_fn_806ECC20_000005A0:
    cmpwi r3, 0x4
    bne lbl_fn_806ECC20_000005B0
    li r0, 0x1
    stw r0, 0x14(r31)
lbl_fn_806ECC20_000005B0:
    mr r3, r31
    bl fn_806EA730
    b lbl_fn_806ECC20_000005E8
lbl_fn_806ECC20_000005BC:
    cmpwi r3, 0x7
    beq lbl_fn_806ECC20_000005E8
    mr r3, r31
    bl fn_806EA730
    mr r3, r31
    li r4, 0x1
    bl fn_806E9BB0
    cmpwi r3, 0x0
    bne lbl_fn_806ECC20_000005E8
    li r0, 0x0
    b lbl_fn_806ECC20_000005EC
lbl_fn_806ECC20_000005E8:
    li r0, 0x1
lbl_fn_806ECC20_000005EC:
    cmpwi r0, 0x0
    bne lbl_fn_806ECC20_00000698
    li r3, 0x0
    b lbl_fn_806ECC20_0000069C
lbl_fn_806ECC20_000005FC:
    cmpwi r3, 0x5
    bge lbl_fn_806ECC20_00000658
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806ECC20_0000063C
    mr r3, r31
    bl fn_806EA730
    mr r3, r31
    li r4, 0x2
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    cmpwi r3, 0x0
    bne lbl_fn_806ECC20_00000684
    li r0, 0x0
    b lbl_fn_806ECC20_00000688
lbl_fn_806ECC20_0000063C:
    cmpwi r3, 0x4
    bne lbl_fn_806ECC20_0000064C
    li r0, 0x1
    stw r0, 0x14(r31)
lbl_fn_806ECC20_0000064C:
    mr r3, r31
    bl fn_806EA730
    b lbl_fn_806ECC20_00000684
lbl_fn_806ECC20_00000658:
    cmpwi r3, 0x7
    beq lbl_fn_806ECC20_00000684
    mr r3, r31
    bl fn_806EA730
    mr r3, r31
    li r4, 0x1
    bl fn_806E9BB0
    cmpwi r3, 0x0
    bne lbl_fn_806ECC20_00000684
    li r0, 0x0
    b lbl_fn_806ECC20_00000688
lbl_fn_806ECC20_00000684:
    li r0, 0x1
lbl_fn_806ECC20_00000688:
    cmpwi r0, 0x0
    bne lbl_fn_806ECC20_00000698
    li r3, 0x0
    b lbl_fn_806ECC20_0000069C
lbl_fn_806ECC20_00000698:
    li r3, 0x1
lbl_fn_806ECC20_0000069C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806ECE40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r29, r5
    mr r27, r3
    mr r28, r4
    mr r30, r6
    bl fn_806EE250
    lwz r0, 0x2c(r27)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_806ECE40_00000730
    mr r3, r27
    mr r4, r31
    mr r5, r28
    mr r6, r29
    mr r10, r30
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    bl fn_806E9F50
    cmpwi r3, 0x0
    bne lbl_fn_806ECE40_00000730
    li r3, 0x0
    b lbl_fn_806ECE40_000007DC
lbl_fn_806ECE40_00000730:
    cmpwi r31, 0x0
    bne lbl_fn_806ECE40_00000740
    li r3, 0x1
    b lbl_fn_806ECE40_000007DC
lbl_fn_806ECE40_00000740:
    lwz r3, 0xc(r31)
    cmpwi r3, 0x5
    bge lbl_fn_806ECE40_000007A0
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806ECE40_00000784
    mr r3, r31
    bl fn_806EA730
    mr r3, r31
    li r4, 0x6
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    cmpwi r3, 0x0
    bne lbl_fn_806ECE40_000007CC
    li r3, 0x0
    b lbl_fn_806ECE40_000007D0
lbl_fn_806ECE40_00000784:
    cmpwi r3, 0x4
    bne lbl_fn_806ECE40_00000794
    li r0, 0x1
    stw r0, 0x14(r31)
lbl_fn_806ECE40_00000794:
    mr r3, r31
    bl fn_806EA730
    b lbl_fn_806ECE40_000007CC
lbl_fn_806ECE40_000007A0:
    cmpwi r3, 0x7
    beq lbl_fn_806ECE40_000007CC
    mr r3, r31
    bl fn_806EA730
    mr r3, r31
    li r4, 0x1
    bl fn_806E9BB0
    cmpwi r3, 0x0
    bne lbl_fn_806ECE40_000007CC
    li r3, 0x0
    b lbl_fn_806ECE40_000007D0
lbl_fn_806ECE40_000007CC:
    li r3, 0x1
lbl_fn_806ECE40_000007D0:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_806ECE40_000007DC:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806ECF70(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    mr r29, r3
    li r27, 0x1
    li r30, 0x8
    lis r31, lbl_80860F98@ha
    b lbl_fn_806ECF70_00000BBC
lbl_fn_806ECF70_0000081C:
    stw r30, 0x8(r1)
    addi r4, r31, lbl_80860F98@l
    addi r7, r1, 0x10
    addi r8, r1, 0x8
    lwz r3, 0x0(r29)
    li r5, 0x1000
    li r6, 0x0
    bl fn_806D7CF0
    cmpwi r3, -0x1
    mr r25, r3
    bne lbl_fn_806ECF70_00000B88
    lwz r3, 0x0(r29)
    bl fn_806D7F20
    cmpwi r3, -0xf
    bne lbl_fn_806ECF70_00000A4C
    lhz r3, 0x12(r1)
    bl fn_806A4264
    lwz r26, 0x14(r1)
    mr r28, r3
    mr r3, r29
    mr r4, r26
    clrlwi r5, r28, 16
    bl fn_806EE250
    lwz r0, 0x2c(r29)
    mr r25, r3
    cmpwi r0, 0x0
    beq lbl_fn_806ECF70_000008BC
    mr r3, r29
    mr r4, r25
    mr r5, r26
    clrlwi r6, r28, 16
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_806E9F50
    cmpwi r3, 0x0
    bne lbl_fn_806ECF70_000008BC
    li r0, 0x0
    b lbl_fn_806ECF70_00000A3C
lbl_fn_806ECF70_000008BC:
    cmpwi r25, 0x0
    bne lbl_fn_806ECF70_000008CC
    li r0, 0x1
    b lbl_fn_806ECF70_00000A3C
lbl_fn_806ECF70_000008CC:
    lwz r3, 0xc(r25)
    cmpwi r3, 0x0
    bne lbl_fn_806ECF70_000009A0
    lwz r0, 0x20(r25)
    cmpwi r0, 0x0
    beq lbl_fn_806ECF70_000008FC
    bl fn_806D8F30
    lwz r4, 0x1c(r25)
    lwz r0, 0x20(r25)
    subf r3, r4, r3
    cmplw r3, r0
    bge lbl_fn_806ECF70_00000904
lbl_fn_806ECF70_000008FC:
    li r0, 0x1
    b lbl_fn_806ECF70_00000A3C
lbl_fn_806ECF70_00000904:
    lwz r3, 0xc(r25)
    cmpwi r3, 0x5
    bge lbl_fn_806ECF70_00000960
    lwz r0, 0x10(r25)
    cmpwi r0, 0x0
    beq lbl_fn_806ECF70_00000948
    mr r3, r25
    bl fn_806EA730
    mr r3, r25
    li r4, 0x6
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    cmpwi r3, 0x0
    bne lbl_fn_806ECF70_0000098C
    li r0, 0x0
    b lbl_fn_806ECF70_00000990
lbl_fn_806ECF70_00000948:
    cmpwi r3, 0x4
    bne lbl_fn_806ECF70_00000954
    stw r27, 0x14(r25)
lbl_fn_806ECF70_00000954:
    mr r3, r25
    bl fn_806EA730
    b lbl_fn_806ECF70_0000098C
lbl_fn_806ECF70_00000960:
    cmpwi r3, 0x7
    beq lbl_fn_806ECF70_0000098C
    mr r3, r25
    bl fn_806EA730
    mr r3, r25
    li r4, 0x1
    bl fn_806E9BB0
    cmpwi r3, 0x0
    bne lbl_fn_806ECF70_0000098C
    li r0, 0x0
    b lbl_fn_806ECF70_00000990
lbl_fn_806ECF70_0000098C:
    li r0, 0x1
lbl_fn_806ECF70_00000990:
    cmpwi r0, 0x0
    bne lbl_fn_806ECF70_00000A38
    li r0, 0x0
    b lbl_fn_806ECF70_00000A3C
lbl_fn_806ECF70_000009A0:
    cmpwi r3, 0x5
    bge lbl_fn_806ECF70_000009F8
    lwz r0, 0x10(r25)
    cmpwi r0, 0x0
    beq lbl_fn_806ECF70_000009E0
    mr r3, r25
    bl fn_806EA730
    mr r3, r25
    li r4, 0x2
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    cmpwi r3, 0x0
    bne lbl_fn_806ECF70_00000A24
    li r0, 0x0
    b lbl_fn_806ECF70_00000A28
lbl_fn_806ECF70_000009E0:
    cmpwi r3, 0x4
    bne lbl_fn_806ECF70_000009EC
    stw r27, 0x14(r25)
lbl_fn_806ECF70_000009EC:
    mr r3, r25
    bl fn_806EA730
    b lbl_fn_806ECF70_00000A24
lbl_fn_806ECF70_000009F8:
    cmpwi r3, 0x7
    beq lbl_fn_806ECF70_00000A24
    mr r3, r25
    bl fn_806EA730
    mr r3, r25
    li r4, 0x1
    bl fn_806E9BB0
    cmpwi r3, 0x0
    bne lbl_fn_806ECF70_00000A24
    li r0, 0x0
    b lbl_fn_806ECF70_00000A28
lbl_fn_806ECF70_00000A24:
    li r0, 0x1
lbl_fn_806ECF70_00000A28:
    cmpwi r0, 0x0
    bne lbl_fn_806ECF70_00000A38
    li r0, 0x0
    b lbl_fn_806ECF70_00000A3C
lbl_fn_806ECF70_00000A38:
    li r0, 0x1
lbl_fn_806ECF70_00000A3C:
    cmpwi r0, 0x0
    bne lbl_fn_806ECF70_00000BBC
    li r3, 0x0
    b lbl_fn_806ECF70_00000BD0
lbl_fn_806ECF70_00000A4C:
    cmpwi r3, -0x17
    bne lbl_fn_806ECF70_00000B70
    lhz r3, 0x12(r1)
    bl fn_806A4264
    lwz r25, 0x14(r1)
    mr r28, r3
    mr r3, r29
    mr r4, r25
    clrlwi r5, r28, 16
    bl fn_806EE250
    lwz r0, 0x2c(r29)
    mr r26, r3
    cmpwi r0, 0x0
    beq lbl_fn_806ECF70_00000AB8
    mr r3, r29
    mr r4, r26
    mr r5, r25
    clrlwi r6, r28, 16
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_806E9F50
    cmpwi r3, 0x0
    bne lbl_fn_806ECF70_00000AB8
    li r0, 0x0
    b lbl_fn_806ECF70_00000B60
lbl_fn_806ECF70_00000AB8:
    cmpwi r26, 0x0
    bne lbl_fn_806ECF70_00000AC8
    li r0, 0x1
    b lbl_fn_806ECF70_00000B60
lbl_fn_806ECF70_00000AC8:
    lwz r3, 0xc(r26)
    cmpwi r3, 0x5
    bge lbl_fn_806ECF70_00000B24
    lwz r0, 0x10(r26)
    cmpwi r0, 0x0
    beq lbl_fn_806ECF70_00000B0C
    mr r3, r26
    bl fn_806EA730
    mr r3, r26
    li r4, 0x6
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    cmpwi r3, 0x0
    bne lbl_fn_806ECF70_00000B50
    li r3, 0x0
    b lbl_fn_806ECF70_00000B54
lbl_fn_806ECF70_00000B0C:
    cmpwi r3, 0x4
    bne lbl_fn_806ECF70_00000B18
    stw r27, 0x14(r26)
lbl_fn_806ECF70_00000B18:
    mr r3, r26
    bl fn_806EA730
    b lbl_fn_806ECF70_00000B50
lbl_fn_806ECF70_00000B24:
    cmpwi r3, 0x7
    beq lbl_fn_806ECF70_00000B50
    mr r3, r26
    bl fn_806EA730
    mr r3, r26
    li r4, 0x1
    bl fn_806E9BB0
    cmpwi r3, 0x0
    bne lbl_fn_806ECF70_00000B50
    li r3, 0x0
    b lbl_fn_806ECF70_00000B54
lbl_fn_806ECF70_00000B50:
    li r3, 0x1
lbl_fn_806ECF70_00000B54:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_806ECF70_00000B60:
    cmpwi r0, 0x0
    bne lbl_fn_806ECF70_00000BBC
    li r3, 0x0
    b lbl_fn_806ECF70_00000BD0
lbl_fn_806ECF70_00000B70:
    cmpwi r3, -0x23
    beq lbl_fn_806ECF70_00000BBC
    mr r3, r29
    bl fn_806EED30
    li r3, 0x0
    b lbl_fn_806ECF70_00000BD0
lbl_fn_806ECF70_00000B88:
    lhz r3, 0x12(r1)
    bl fn_806A4264
    mr r0, r3
    lwz r6, 0x14(r1)
    mr r3, r29
    mr r5, r25
    addi r4, r31, lbl_80860F98@l
    clrlwi r7, r0, 16
    bl fn_806EC780
    cmpwi r3, 0x0
    bne lbl_fn_806ECF70_00000BBC
    li r3, 0x0
    b lbl_fn_806ECF70_00000BD0
lbl_fn_806ECF70_00000BBC:
    lwz r3, 0x0(r29)
    bl fn_806D8650
    cmpwi r3, 0x0
    bne lbl_fn_806ECF70_0000081C
    li r3, 0x1
lbl_fn_806ECF70_00000BD0:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806ED370(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_26
    lwz r7, 0x8(r3)
    mr r30, r3
    mr r28, r4
    mr r27, r5
    lwz r0, 0x44(r7)
    mr r31, r6
    addi r3, r3, 0x50
    subf r0, r0, r5
    sth r0, 0xc(r1)
    bl fn_806E9700
    cmpw r3, r27
    bge lbl_fn_806ED370_00000D74
    lwz r29, 0x8(r30)
    li r26, 0x0
    lhz r27, 0x4(r30)
    lwz r0, 0x40(r29)
    lwz r28, 0x0(r30)
    cmpwi r0, 0x2
    bne lbl_fn_806ED370_00000C70
    li r0, 0x3
    sth r0, 0xa(r1)
    addi r3, r1, 0x18
    addi r4, r1, 0xa
    li r5, 0x2
    bl memcpy
    li r26, 0x2
lbl_fn_806ED370_00000C70:
    addi r3, r1, 0x18
    lis r4, lbl_807C4330@ha
    add r3, r3, r26
    li r5, 0x2
    addi r4, r4, lbl_807C4330@l
    bl memcpy
    addi r26, r26, 0x2
    addi r6, r1, 0x18
    li r0, 0x68
    stbx r0, r6, r26
    mr r3, r29
    mr r4, r28
    mr r5, r27
    addi r7, r26, 0x1
    bl fn_806EE8B0
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_fn_806ED370_00000CC4
    li r0, 0x0
    b lbl_fn_806ED370_00000D54
lbl_fn_806ED370_00000CC4:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x5
    bge lbl_fn_806ED370_00000D24
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806ED370_00000D08
    mr r3, r30
    bl fn_806EA730
    mr r3, r30
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    cmpwi r3, 0x0
    bne lbl_fn_806ED370_00000D50
    li r0, 0x0
    b lbl_fn_806ED370_00000D54
lbl_fn_806ED370_00000D08:
    cmpwi r3, 0x4
    bne lbl_fn_806ED370_00000D18
    li r0, 0x1
    stw r0, 0x14(r30)
lbl_fn_806ED370_00000D18:
    mr r3, r30
    bl fn_806EA730
    b lbl_fn_806ED370_00000D50
lbl_fn_806ED370_00000D24:
    cmpwi r3, 0x7
    beq lbl_fn_806ED370_00000D50
    mr r3, r30
    bl fn_806EA730
    mr r3, r30
    li r4, 0x4
    bl fn_806E9BB0
    cmpwi r3, 0x0
    bne lbl_fn_806ED370_00000D50
    li r0, 0x0
    b lbl_fn_806ED370_00000D54
lbl_fn_806ED370_00000D50:
    li r0, 0x1
lbl_fn_806ED370_00000D54:
    cmpwi r0, 0x0
    bne lbl_fn_806ED370_00000D64
    li r3, 0x0
    b lbl_fn_806ED370_00000F7C
lbl_fn_806ED370_00000D64:
    li r0, 0x1
    stw r0, 0x0(r31)
    li r3, 0x1
    b lbl_fn_806ED370_00000F7C
lbl_fn_806ED370_00000D74:
    lhz r26, 0x64(r30)
    addi r3, r1, 0x20
    li r4, 0x0
    li r5, 0x10
    bl memset
    lwz r0, 0x58(r30)
    stw r0, 0x20(r1)
    stw r27, 0x24(r1)
    sth r26, 0x28(r1)
    bl fn_806D8F30
    stw r3, 0x2c(r1)
    lwz r3, 0x60(r30)
    bl fn_806D58F0
    mr r29, r3
    lwz r3, 0x60(r30)
    addi r4, r1, 0x20
    bl fn_806D5930
    lwz r3, 0x60(r30)
    bl fn_806D58F0
    addi r0, r29, 0x1
    subf r0, r0, r3
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_806ED370_00000F10
    lwz r26, 0x8(r30)
    li r29, 0x0
    lhz r28, 0x4(r30)
    lwz r0, 0x40(r26)
    lwz r27, 0x0(r30)
    cmpwi r0, 0x2
    bne lbl_fn_806ED370_00000E0C
    li r0, 0x3
    sth r0, 0x8(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    li r29, 0x2
lbl_fn_806ED370_00000E0C:
    addi r3, r1, 0x10
    lis r4, lbl_807C4330@ha
    add r3, r3, r29
    li r5, 0x2
    addi r4, r4, lbl_807C4330@l
    bl memcpy
    addi r29, r29, 0x2
    addi r6, r1, 0x10
    li r0, 0x68
    stbx r0, r6, r29
    mr r3, r26
    mr r4, r27
    mr r5, r28
    addi r7, r29, 0x1
    bl fn_806EE8B0
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_fn_806ED370_00000E60
    li r0, 0x0
    b lbl_fn_806ED370_00000EF0
lbl_fn_806ED370_00000E60:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x5
    bge lbl_fn_806ED370_00000EC0
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806ED370_00000EA4
    mr r3, r30
    bl fn_806EA730
    mr r3, r30
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    cmpwi r3, 0x0
    bne lbl_fn_806ED370_00000EEC
    li r0, 0x0
    b lbl_fn_806ED370_00000EF0
lbl_fn_806ED370_00000EA4:
    cmpwi r3, 0x4
    bne lbl_fn_806ED370_00000EB4
    li r0, 0x1
    stw r0, 0x14(r30)
lbl_fn_806ED370_00000EB4:
    mr r3, r30
    bl fn_806EA730
    b lbl_fn_806ED370_00000EEC
lbl_fn_806ED370_00000EC0:
    cmpwi r3, 0x7
    beq lbl_fn_806ED370_00000EEC
    mr r3, r30
    bl fn_806EA730
    mr r3, r30
    li r4, 0x4
    bl fn_806E9BB0
    cmpwi r3, 0x0
    bne lbl_fn_806ED370_00000EEC
    li r0, 0x0
    b lbl_fn_806ED370_00000EF0
lbl_fn_806ED370_00000EEC:
    li r0, 0x1
lbl_fn_806ED370_00000EF0:
    cmpwi r0, 0x0
    bne lbl_fn_806ED370_00000F00
    li r3, 0x0
    b lbl_fn_806ED370_00000F7C
lbl_fn_806ED370_00000F00:
    li r0, 0x1
    stw r0, 0x0(r31)
    li r3, 0x1
    b lbl_fn_806ED370_00000F7C
lbl_fn_806ED370_00000F10:
    lwz r3, 0x8(r30)
    lwz r0, 0x40(r3)
    cmpwi r0, 0x2
    bne lbl_fn_806ED370_00000F30
    lwz r5, 0x44(r3)
    addi r3, r30, 0x50
    addi r4, r1, 0xc
    bl fn_806E9760
lbl_fn_806ED370_00000F30:
    lis r4, lbl_807C4330@ha
    addi r3, r30, 0x50
    addi r4, r4, lbl_807C4330@l
    li r5, 0x2
    bl fn_806E9760
    addi r3, r30, 0x50
    clrlwi r4, r28, 24
    bl fn_806E9710
    lhz r4, 0x64(r30)
    addi r3, r30, 0x50
    addi r0, r4, 0x1
    sth r0, 0x64(r30)
    bl fn_806E9730
    lhz r4, 0x66(r30)
    addi r3, r30, 0x50
    bl fn_806E9730
    li r0, 0x0
    stw r0, 0x0(r31)
    li r3, 0x1
lbl_fn_806ED370_00000F7C:
    addi r11, r1, 0x50
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_806ED710(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r6, r1, 0x8
    stw r31, 0x1c(r1)
    mr r31, r4
    li r4, 0x1
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r5, 0x8(r3)
    lwz r5, 0x44(r5)
    addi r5, r5, 0x27
    bl fn_806ED370
    cmpwi r3, 0x0
    bne lbl_fn_806ED710_00000FD8
    li r3, 0x0
    b lbl_fn_806ED710_00001060
lbl_fn_806ED710_00000FD8:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806ED710_00000FEC
    li r3, 0x1
    b lbl_fn_806ED710_00001060
lbl_fn_806ED710_00000FEC:
    mr r4, r31
    addi r3, r30, 0x50
    li r5, 0x20
    bl fn_806E9760
    lwz r3, 0x60(r30)
    bl fn_806D58F0
    mr r4, r3
    lwz r3, 0x60(r30)
    subi r4, r4, 0x1
    bl fn_806D5900
    mr r5, r3
    lwz r0, 0x0(r3)
    lwz r4, 0x50(r30)
    mr r3, r30
    lwz r5, 0x4(r5)
    add r4, r4, r0
    bl fn_806EA3E0
    cmpwi r3, 0x0
    bne lbl_fn_806ED710_00001040
    li r0, 0x0
    b lbl_fn_806ED710_0000104C
lbl_fn_806ED710_00001040:
    li r0, 0x0
    stw r0, 0x90(r30)
    li r0, 0x1
lbl_fn_806ED710_0000104C:
    cmpwi r0, 0x0
    bne lbl_fn_806ED710_0000105C
    li r3, 0x0
    b lbl_fn_806ED710_00001060
lbl_fn_806ED710_0000105C:
    li r3, 0x1
lbl_fn_806ED710_00001060:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806ED800(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x4
    stw r0, 0x24(r1)
    addi r6, r1, 0x8
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r5, 0x8(r3)
    lwz r5, 0x44(r5)
    addi r5, r5, 0x7
    bl fn_806ED370
    cmpwi r3, 0x0
    bne lbl_fn_806ED800_000010C0
    li r3, 0x0
    b lbl_fn_806ED800_00001138
lbl_fn_806ED800_000010C0:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806ED800_000010D4
    li r3, 0x1
    b lbl_fn_806ED800_00001138
lbl_fn_806ED800_000010D4:
    lwz r3, 0x60(r31)
    bl fn_806D58F0
    mr r4, r3
    lwz r3, 0x60(r31)
    subi r4, r4, 0x1
    bl fn_806D5900
    mr r5, r3
    lwz r0, 0x0(r3)
    lwz r4, 0x50(r31)
    mr r3, r31
    lwz r5, 0x4(r5)
    add r4, r4, r0
    bl fn_806EA3E0
    cmpwi r3, 0x0
    bne lbl_fn_806ED800_00001118
    li r0, 0x0
    b lbl_fn_806ED800_00001124
lbl_fn_806ED800_00001118:
    li r0, 0x0
    stw r0, 0x90(r31)
    li r0, 0x1
lbl_fn_806ED800_00001124:
    cmpwi r0, 0x0
    bne lbl_fn_806ED800_00001134
    li r3, 0x0
    b lbl_fn_806ED800_00001138
lbl_fn_806ED800_00001134:
    li r3, 0x1
lbl_fn_806ED800_00001138:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806ED8D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0x5
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r6, 0x8(r3)
    lwz r0, 0x44(r6)
    addi r6, r1, 0x8
    add r5, r5, r0
    addi r5, r5, 0x7
    bl fn_806ED370
    cmpwi r3, 0x0
    bne lbl_fn_806ED8D0_000011A4
    li r3, 0x0
    b lbl_fn_806ED8D0_0000122C
lbl_fn_806ED8D0_000011A4:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806ED8D0_000011B8
    li r3, 0x1
    b lbl_fn_806ED8D0_0000122C
lbl_fn_806ED8D0_000011B8:
    mr r4, r30
    mr r5, r31
    addi r3, r29, 0x50
    bl fn_806E9760
    lwz r3, 0x60(r29)
    bl fn_806D58F0
    mr r4, r3
    lwz r3, 0x60(r29)
    subi r4, r4, 0x1
    bl fn_806D5900
    mr r5, r3
    lwz r0, 0x0(r3)
    lwz r4, 0x50(r29)
    mr r3, r29
    lwz r5, 0x4(r5)
    add r4, r4, r0
    bl fn_806EA3E0
    cmpwi r3, 0x0
    bne lbl_fn_806ED8D0_0000120C
    li r0, 0x0
    b lbl_fn_806ED8D0_00001218
lbl_fn_806ED8D0_0000120C:
    li r0, 0x0
    stw r0, 0x90(r29)
    li r0, 0x1
lbl_fn_806ED8D0_00001218:
    cmpwi r0, 0x0
    bne lbl_fn_806ED8D0_00001228
    li r3, 0x0
    b lbl_fn_806ED8D0_0000122C
lbl_fn_806ED8D0_00001228:
    li r3, 0x1
lbl_fn_806ED8D0_0000122C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806ED9D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x6
    stw r0, 0x24(r1)
    addi r6, r1, 0x8
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r5, 0x8(r3)
    lwz r5, 0x44(r5)
    addi r5, r5, 0x7
    bl fn_806ED370
    cmpwi r3, 0x0
    bne lbl_fn_806ED9D0_00001290
    li r3, 0x0
    b lbl_fn_806ED9D0_00001308
lbl_fn_806ED9D0_00001290:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806ED9D0_000012A4
    li r3, 0x1
    b lbl_fn_806ED9D0_00001308
lbl_fn_806ED9D0_000012A4:
    lwz r3, 0x60(r31)
    bl fn_806D58F0
    mr r4, r3
    lwz r3, 0x60(r31)
    subi r4, r4, 0x1
    bl fn_806D5900
    mr r5, r3
    lwz r0, 0x0(r3)
    lwz r4, 0x50(r31)
    mr r3, r31
    lwz r5, 0x4(r5)
    add r4, r4, r0
    bl fn_806EA3E0
    cmpwi r3, 0x0
    bne lbl_fn_806ED9D0_000012E8
    li r0, 0x0
    b lbl_fn_806ED9D0_000012F4
lbl_fn_806ED9D0_000012E8:
    li r0, 0x0
    stw r0, 0x90(r31)
    li r0, 0x1
lbl_fn_806ED9D0_000012F4:
    cmpwi r0, 0x0
    bne lbl_fn_806ED9D0_00001304
    li r3, 0x0
    b lbl_fn_806ED9D0_00001308
lbl_fn_806ED9D0_00001304:
    li r3, 0x1
lbl_fn_806ED9D0_00001308:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806EDAA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x7
    stw r0, 0x24(r1)
    addi r6, r1, 0x8
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r5, 0x8(r3)
    lwz r5, 0x44(r5)
    addi r5, r5, 0x7
    bl fn_806ED370
    cmpwi r3, 0x0
    bne lbl_fn_806EDAA0_00001360
    li r3, 0x0
    b lbl_fn_806EDAA0_000013D8
lbl_fn_806EDAA0_00001360:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806EDAA0_00001374
    li r3, 0x1
    b lbl_fn_806EDAA0_000013D8
lbl_fn_806EDAA0_00001374:
    lwz r3, 0x60(r31)
    bl fn_806D58F0
    mr r4, r3
    lwz r3, 0x60(r31)
    subi r4, r4, 0x1
    bl fn_806D5900
    mr r5, r3
    lwz r0, 0x0(r3)
    lwz r4, 0x50(r31)
    mr r3, r31
    lwz r5, 0x4(r5)
    add r4, r4, r0
    bl fn_806EA3E0
    cmpwi r3, 0x0
    bne lbl_fn_806EDAA0_000013B8
    li r0, 0x0
    b lbl_fn_806EDAA0_000013C4
lbl_fn_806EDAA0_000013B8:
    li r0, 0x0
    stw r0, 0x90(r31)
    li r0, 0x1
lbl_fn_806EDAA0_000013C4:
    cmpwi r0, 0x0
    bne lbl_fn_806EDAA0_000013D4
    li r3, 0x0
    b lbl_fn_806EDAA0_000013D8
lbl_fn_806EDAA0_000013D4:
    li r3, 0x1
lbl_fn_806EDAA0_000013D8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806EDB70(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r5, 0x2
    mr r27, r3
    mr r28, r4
    mr r29, r5
    blt lbl_fn_806EDB70_00001440
    lwz r3, 0x8(r3)
    lis r6, lbl_807C4330@ha
    li r5, 0x2
    lwz r0, 0x44(r3)
    add r3, r4, r0
    addi r4, r6, lbl_807C4330@l
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_806EDB70_00001468
lbl_fn_806EDB70_00001440:
    mr r3, r27
    mr r4, r28
    mr r5, r29
    bl fn_806EA3E0
    cmpwi r3, 0x0
    bne lbl_fn_806EDB70_00001460
    li r3, 0x0
    b lbl_fn_806EDB70_00001510
lbl_fn_806EDB70_00001460:
    li r3, 0x1
    b lbl_fn_806EDB70_00001510
lbl_fn_806EDB70_00001468:
    addi r31, r29, 0x2
    addi r3, r27, 0x50
    bl fn_806E9700
    cmpw r3, r31
    bge lbl_fn_806EDB70_00001484
    li r3, 0x1
    b lbl_fn_806EDB70_00001510
lbl_fn_806EDB70_00001484:
    lwz r3, 0x8(r27)
    lwz r4, 0x50(r27)
    lwz r0, 0x40(r3)
    lwz r3, 0x58(r27)
    cmpwi r0, 0x2
    add r30, r4, r3
    bne lbl_fn_806EDB70_000014B0
    mr r4, r28
    addi r3, r27, 0x50
    li r5, 0x2
    bl fn_806E9760
lbl_fn_806EDB70_000014B0:
    lis r4, lbl_807C4330@ha
    addi r3, r27, 0x50
    addi r4, r4, lbl_807C4330@l
    li r5, 0x2
    bl fn_806E9760
    lwz r4, 0x8(r27)
    addi r3, r27, 0x50
    lwz r0, 0x44(r4)
    add r4, r28, r0
    subf r5, r0, r29
    bl fn_806E9760
    mr r3, r27
    mr r4, r30
    mr r5, r31
    bl fn_806EA3E0
    cmpwi r3, 0x0
    bne lbl_fn_806EDB70_000014FC
    li r3, 0x0
    b lbl_fn_806EDB70_00001510
lbl_fn_806EDB70_000014FC:
    mr r5, r31
    addi r3, r27, 0x50
    li r4, -0x1
    bl fn_806E97F0
    li r3, 0x1
lbl_fn_806EDB70_00001510:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806EDCB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r4, 0x8(r3)
    lwz r0, 0x40(r4)
    cmpwi r0, 0x2
    bne lbl_fn_806EDCB0_0000157C
    li r0, 0x5
    sth r0, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    li r31, 0x2
lbl_fn_806EDCB0_0000157C:
    addi r3, r1, 0xc
    lis r4, lbl_807C4330@ha
    add r3, r3, r31
    li r5, 0x2
    addi r4, r4, lbl_807C4330@l
    bl memcpy
    addi r31, r31, 0x2
    addi r4, r1, 0xc
    li r0, 0x64
    stbx r0, r4, r31
    addi r6, r31, 0x2
    addi r5, r31, 0x3
    lhz r7, 0x66(r30)
    addi r31, r31, 0x1
    mr r3, r30
    extrwi r0, r7, 8, 16
    stbx r0, r4, r31
    stbx r7, r4, r6
    bl fn_806EA3E0
    cmpwi r3, 0x0
    bne lbl_fn_806EDCB0_000015D8
    li r3, 0x0
    b lbl_fn_806EDCB0_000015E4
lbl_fn_806EDCB0_000015D8:
    li r0, 0x0
    stw r0, 0x90(r30)
    li r3, 0x1
lbl_fn_806EDCB0_000015E4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806EDD80(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    li r31, 0x0
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    lwz r6, 0x8(r3)
    lwz r0, 0x40(r6)
    cmpwi r0, 0x2
    bne lbl_fn_806EDD80_0000165C
    li r0, 0x7
    sth r0, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    li r31, 0x2
lbl_fn_806EDD80_0000165C:
    addi r3, r1, 0xc
    lis r4, lbl_807C4330@ha
    add r3, r3, r31
    li r5, 0x2
    addi r4, r4, lbl_807C4330@l
    bl memcpy
    addi r3, r1, 0xc
    addi r31, r31, 0x2
    li r0, 0x65
    stbx r0, r3, r31
    addi r31, r31, 0x1
    cmplw r29, r30
    extrwi r0, r29, 8, 16
    stbx r0, r3, r31
    addi r0, r31, 0x1
    addi r31, r31, 0x2
    stbx r29, r3, r0
    beq lbl_fn_806EDD80_000016B8
    extrwi r0, r30, 8, 16
    stbx r0, r3, r31
    addi r0, r31, 0x1
    addi r31, r31, 0x2
    stbx r30, r3, r0
lbl_fn_806EDD80_000016B8:
    mr r3, r28
    mr r5, r31
    addi r4, r1, 0xc
    bl fn_806EA3E0
    cmpwi r3, 0x0
    bne lbl_fn_806EDD80_000016D8
    li r3, 0x0
    b lbl_fn_806EDD80_000016DC
lbl_fn_806EDD80_000016D8:
    li r3, 0x1
lbl_fn_806EDD80_000016DC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806EDE80(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    li r30, 0x0
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r4, 0x8(r3)
    lwz r0, 0x40(r4)
    cmpwi r0, 0x2
    bne lbl_fn_806EDE80_00001750
    li r0, 0xb
    sth r0, 0x8(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    li r30, 0x2
lbl_fn_806EDE80_00001750:
    addi r3, r1, 0x10
    lis r4, lbl_807C4330@ha
    add r3, r3, r30
    li r5, 0x2
    addi r4, r4, lbl_807C4330@l
    bl memcpy
    addi r31, r1, 0x10
    addi r30, r30, 0x2
    li r0, 0x66
    stbx r0, r31, r30
    lis r4, lbl_807C4334@ha
    mr r3, r31
    addi r30, r30, 0x1
    li r5, 0x4
    add r3, r3, r30
    addi r4, r4, lbl_807C4334@l
    bl memcpy
    bl fn_806D8F30
    stw r3, 0xc(r1)
    mr r3, r31
    add r3, r30, r3
    addi r4, r1, 0xc
    addi r3, r3, 0x4
    li r5, 0x4
    bl memcpy
    mr r3, r29
    mr r4, r31
    addi r5, r30, 0x8
    bl fn_806EA3E0
    cmpwi r3, 0x0
    bne lbl_fn_806EDE80_000017D4
    li r3, 0x0
    b lbl_fn_806EDE80_000017D8
lbl_fn_806EDE80_000017D4:
    li r3, 0x1
lbl_fn_806EDE80_000017D8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806EDF70(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    li r28, 0x0
    lwz r31, 0x8(r3)
    lhz r29, 0x4(r3)
    lwz r0, 0x40(r31)
    lwz r30, 0x0(r3)
    cmpwi r0, 0x2
    bne lbl_fn_806EDF70_00001848
    li r0, 0x3
    sth r0, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    li r28, 0x2
lbl_fn_806EDF70_00001848:
    addi r3, r1, 0xc
    lis r4, lbl_807C4330@ha
    add r3, r3, r28
    li r5, 0x2
    addi r4, r4, lbl_807C4330@l
    bl memcpy
    addi r28, r28, 0x2
    addi r6, r1, 0xc
    li r0, 0x68
    stbx r0, r6, r28
    mr r3, r31
    mr r4, r30
    mr r5, r29
    addi r7, r28, 0x1
    bl fn_806EE8B0
    neg r0, r3
    lwz r31, 0x2c(r1)
    or r0, r0, r3
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    srwi r3, r0, 31
    lwz r28, 0x20(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806EE030(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r5, 0x8(r3)
    lhz r8, 0x66(r3)
    lwz r6, 0x44(r5)
    lwz r5, 0x0(r4)
    extrwi r0, r8, 8, 16
    lwz r7, 0x50(r3)
    add r5, r5, r6
    addi r5, r5, 0x5
    stbx r0, r7, r5
    addi r5, r5, 0x1
    stbx r8, r7, r5
    lwz r6, 0x50(r3)
    lwz r0, 0x0(r4)
    lwz r5, 0x4(r4)
    add r4, r6, r0
    bl fn_806EA3E0
    cmpwi r3, 0x0
    bne lbl_fn_806EE030_00001920
    li r3, 0x0
    b lbl_fn_806EE030_00001958
lbl_fn_806EE030_00001920:
    lwz r0, 0x88(r31)
    stw r0, 0xc(r30)
    lwz r0, 0x0(r30)
    lwz r3, 0x8(r31)
    lwz r4, 0x50(r31)
    lwz r3, 0x44(r3)
    add r0, r0, r3
    add r3, r0, r4
    lbz r0, 0x2(r3)
    cmpwi r0, 0x2
    bne lbl_fn_806EE030_00001954
    lwz r0, 0x88(r31)
    stw r0, 0x8c(r31)
lbl_fn_806EE030_00001954:
    li r3, 0x1
lbl_fn_806EE030_00001958:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806EE0F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r6, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_806EE0F0_00001A44
    addi r6, r1, 0x8
    li r4, 0x0
    addi r5, r5, 0x7
    bl fn_806ED370
    cmpwi r3, 0x0
    bne lbl_fn_806EE0F0_000019C0
    li r3, 0x0
    b lbl_fn_806EE0F0_00001A48
lbl_fn_806EE0F0_000019C0:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806EE0F0_000019D4
    li r3, 0x1
    b lbl_fn_806EE0F0_00001A48
lbl_fn_806EE0F0_000019D4:
    mr r4, r30
    mr r5, r31
    addi r3, r29, 0x50
    bl fn_806E9760
    lwz r3, 0x60(r29)
    bl fn_806D58F0
    mr r4, r3
    lwz r3, 0x60(r29)
    subi r4, r4, 0x1
    bl fn_806D5900
    mr r5, r3
    lwz r0, 0x0(r3)
    lwz r4, 0x50(r29)
    mr r3, r29
    lwz r5, 0x4(r5)
    add r4, r4, r0
    bl fn_806EA3E0
    cmpwi r3, 0x0
    bne lbl_fn_806EE0F0_00001A28
    li r3, 0x0
    b lbl_fn_806EE0F0_00001A34
lbl_fn_806EE0F0_00001A28:
    li r0, 0x0
    stw r0, 0x90(r29)
    li r3, 0x1
lbl_fn_806EE0F0_00001A34:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_806EE0F0_00001A48
lbl_fn_806EE0F0_00001A44:
    bl fn_806EDB70
lbl_fn_806EE0F0_00001A48:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806EE1E0(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    lwz r3, 0x0(r5)
    lhz r0, 0x4(r5)
    mullw r3, r3, r0
    divwu r0, r3, r4
    mullw r0, r0, r4
    subf r3, r0, r3
    blr
}

asm void fn_806EE200(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    lwz r4, 0x0(r4)
    lwz r3, 0x0(r5)
    lwz r0, 0x0(r4)
    cmplw r3, r0
    beq lbl_fn_806EE200_00001AA4
    subf r3, r0, r3
    blr
lbl_fn_806EE200_00001AA4:
    lhz r3, 0x4(r4)
    lhz r0, 0x4(r5)
    subf r0, r3, r0
    extsh r3, r0
    blr
}

asm void fn_806EE240(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    b fn_806EA790
}

asm void fn_806EE250(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r0, r1, 0x10
    stw r4, 0x10(r1)
    addi r4, r1, 0x8
    sth r5, 0x14(r1)
    stw r0, 0x8(r1)
    lwz r3, 0xc(r3)
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_806EE250_00001B0C
    lwz r3, 0x0(r3)
    b lbl_fn_806EE250_00001B10
lbl_fn_806EE250_00001B0C:
    li r3, 0x0
lbl_fn_806EE250_00001B10:
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_806EE2A0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    mr r26, r3
    mr r31, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    mr r30, r8
    bl fn_806D8F10
    cmpwi r28, 0x0
    bne lbl_fn_806EE2A0_00001B60
    lis r28, 0x1
lbl_fn_806EE2A0_00001B60:
    cmpwi r27, 0x0
    bne lbl_fn_806EE2A0_00001B6C
    lis r27, 0x1
lbl_fn_806EE2A0_00001B6C:
    mr r3, r31
    addi r4, r1, 0x10
    addi r5, r1, 0x8
    bl fn_806EEEC0
    cmpwi r3, 0x0
    bne lbl_fn_806EE2A0_00001B8C
    li r3, 0x4
    b lbl_fn_806EE2A0_00001D44
lbl_fn_806EE2A0_00001B8C:
    li r3, 0x4c
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806EE2A0_00001BA8
    li r3, 0x1
    b lbl_fn_806EE2A0_00001D44
lbl_fn_806EE2A0_00001BA8:
    li r4, 0x0
    li r5, 0x4c
    bl memset
    li r0, -0x1
    stw r0, 0x0(r31)
    lis r6, fn_806EE1E0@ha
    lis r7, fn_806EE200@ha
    stw r28, 0x3c(r31)
    addi r6, r6, fn_806EE1E0@l
    addi r7, r7, fn_806EE200@l
    li r3, 0x4
    stw r27, 0x38(r31)
    li r4, 0x20
    li r5, 0x2
    li r8, 0x0
    stw r29, 0x24(r31)
    bl fn_806D62F0
    cmpwi r3, 0x0
    stw r3, 0xc(r31)
    bne lbl_fn_806EE2A0_00001C08
    mr r3, r31
    bl fn_806D7AC0
    li r3, 0x1
    b lbl_fn_806EE2A0_00001D44
lbl_fn_806EE2A0_00001C08:
    lis r5, fn_806EE240@ha
    li r3, 0x4
    addi r5, r5, fn_806EE240@l
    li r4, 0x4
    bl fn_806D57A0
    cmpwi r3, 0x0
    stw r3, 0x10(r31)
    bne lbl_fn_806EE2A0_00001C40
    lwz r3, 0xc(r31)
    bl fn_806D63A0
    mr r3, r31
    bl fn_806D7AC0
    li r3, 0x1
    b lbl_fn_806EE2A0_00001D44
lbl_fn_806EE2A0_00001C40:
    li r3, 0x2
    li r4, 0x2
    li r5, 0x11
    bl fn_806D7AE0
    stw r3, 0x0(r31)
    cmpwi r30, 0x3
    stw r30, 0x40(r31)
    bne lbl_fn_806EE2A0_00001C6C
    li r0, 0x0
    stw r0, 0x44(r31)
    b lbl_fn_806EE2A0_00001C70
lbl_fn_806EE2A0_00001C6C:
    stw r30, 0x44(r31)
lbl_fn_806EE2A0_00001C70:
    lwz r0, 0x0(r31)
    cmpwi r0, -0x1
    bne lbl_fn_806EE2A0_00001C9C
    lwz r3, 0xc(r31)
    bl fn_806D63A0
    lwz r3, 0x10(r31)
    bl fn_806D5850
    mr r3, r31
    bl fn_806D7AC0
    li r3, 0x3
    b lbl_fn_806EE2A0_00001D44
lbl_fn_806EE2A0_00001C9C:
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0x8
    bl memset
    lwz r0, 0x10(r1)
    li r3, 0x2
    stb r3, 0x19(r1)
    lhz r3, 0x8(r1)
    stw r0, 0x1c(r1)
    bl fn_806A4270
    cmpwi r30, 0x3
    sth r3, 0x1a(r1)
    beq lbl_fn_806EE2A0_00001D10
    lwz r3, 0x0(r31)
    addi r4, r1, 0x18
    li r5, 0x8
    bl fn_806D7BB0
    cmpwi r3, -0x1
    bne lbl_fn_806EE2A0_00001D10
    lwz r3, 0x0(r31)
    bl fn_806D7B30
    lwz r3, 0xc(r31)
    bl fn_806D63A0
    lwz r3, 0x10(r31)
    bl fn_806D5850
    mr r3, r31
    bl fn_806D7AC0
    li r3, 0x3
    b lbl_fn_806EE2A0_00001D44
lbl_fn_806EE2A0_00001D10:
    li r0, 0x8
    stw r0, 0xc(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0xc
    lwz r3, 0x0(r31)
    bl fn_806D7E70
    lwz r0, 0x1c(r1)
    stw r0, 0x4(r31)
    lhz r3, 0x1a(r1)
    bl fn_806A4264
    sth r3, 0x8(r31)
    li r3, 0x0
    stw r31, 0x0(r26)
lbl_fn_806EE2A0_00001D44:
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806EE4E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806EE4E0_00001D90
    li r0, 0x1
    stw r0, 0x14(r3)
    b lbl_fn_806EE4E0_00001DB4
lbl_fn_806EE4E0_00001D90:
    lwz r3, 0x0(r3)
    bl fn_806D7B30
    lwz r3, 0xc(r31)
    bl fn_806D63A0
    lwz r3, 0x10(r31)
    bl fn_806D5850
    mr r3, r31
    bl fn_806D7AC0
    bl fn_806D8F20
lbl_fn_806EE4E0_00001DB4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806EE550(void)
{
    nofralloc
    stw r4, 0x20(r3)
    blr
}

asm void fn_806EE560(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    addi r11, r1, 0x170
    bl _savegpr_27
    addi r0, r1, 0xb8
    li r31, 0x0
    stw r31, 0x10(r1)
    mr r28, r4
    mr r27, r3
    mr r29, r5
    stw r5, 0xb8(r1)
    mr r30, r6
    addi r4, r1, 0xc
    sth r6, 0xbc(r1)
    stw r0, 0xc(r1)
    lwz r3, 0xc(r3)
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_806EE560_00001E38
    lwz r31, 0x0(r3)
lbl_fn_806EE560_00001E38:
    cmpwi r31, 0x0
    beq lbl_fn_806EE560_00001E48
    li r3, 0x5
    b lbl_fn_806EE560_00002040
lbl_fn_806EE560_00001E48:
    li r3, 0xa0
    bl fn_806D7A90
    cmpwi r3, 0x0
    stw r3, 0x10(r1)
    beq lbl_fn_806EE560_00001FC4
    li r4, 0x0
    li r5, 0xa0
    bl memset
    lwz r3, 0x10(r1)
    stw r29, 0x0(r3)
    lwz r3, 0x10(r1)
    sth r30, 0x4(r3)
    lwz r3, 0x10(r1)
    stw r27, 0x8(r3)
    bl fn_806D8F30
    lwz r4, 0x10(r1)
    li r31, 0x0
    stw r3, 0x1c(r4)
    lwz r3, 0x10(r1)
    lwz r0, 0x1c(r3)
    stw r0, 0x88(r3)
    lwz r3, 0x10(r1)
    sth r31, 0x64(r3)
    lwz r3, 0x10(r1)
    sth r31, 0x66(r3)
    lwz r3, 0x10(r1)
    lwz r4, 0x3c(r27)
    addi r3, r3, 0x44
    bl fn_806E96A0
    cmpwi r3, 0x0
    beq lbl_fn_806EE560_00001FC4
    lwz r3, 0x10(r1)
    lwz r4, 0x38(r27)
    addi r3, r3, 0x50
    bl fn_806E96A0
    cmpwi r3, 0x0
    beq lbl_fn_806EE560_00001FC4
    li r3, 0x10
    li r4, 0x40
    li r5, 0x0
    bl fn_806D57A0
    lwz r4, 0x10(r1)
    stw r3, 0x5c(r4)
    lwz r3, 0x10(r1)
    lwz r0, 0x5c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806EE560_00001FC4
    li r3, 0x10
    li r4, 0x40
    li r5, 0x0
    bl fn_806D57A0
    lwz r4, 0x10(r1)
    stw r3, 0x60(r4)
    lwz r3, 0x10(r1)
    lwz r0, 0x60(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806EE560_00001FC4
    li r3, 0x4
    li r4, 0x2
    li r5, 0x0
    bl fn_806D57A0
    lwz r4, 0x10(r1)
    stw r3, 0x98(r4)
    lwz r3, 0x10(r1)
    lwz r0, 0x98(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806EE560_00001FC4
    li r3, 0x4
    li r4, 0x2
    li r5, 0x0
    bl fn_806D57A0
    lwz r4, 0x10(r1)
    stw r3, 0x9c(r4)
    lwz r3, 0x10(r1)
    lwz r0, 0x9c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806EE560_00001FC4
    lwz r3, 0xc(r27)
    addi r4, r1, 0x10
    bl fn_806D64B0
    addi r0, r1, 0x18
    stw r29, 0x18(r1)
    addi r4, r1, 0x8
    sth r30, 0x1c(r1)
    stw r0, 0x8(r1)
    lwz r3, 0xc(r27)
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_806EE560_00001FB0
    lwz r31, 0x0(r3)
lbl_fn_806EE560_00001FB0:
    cmpwi r31, 0x0
    stw r31, 0x0(r28)
    beq lbl_fn_806EE560_00001FC4
    li r3, 0x0
    b lbl_fn_806EE560_00002040
lbl_fn_806EE560_00001FC4:
    lwz r3, 0x10(r1)
    cmpwi r3, 0x0
    beq lbl_fn_806EE560_0000203C
    lwz r3, 0x44(r3)
    bl fn_806D7AC0
    lwz r3, 0x10(r1)
    lwz r3, 0x50(r3)
    bl fn_806D7AC0
    lwz r3, 0x10(r1)
    lwz r3, 0x5c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806EE560_00001FF8
    bl fn_806D5850
lbl_fn_806EE560_00001FF8:
    lwz r3, 0x10(r1)
    lwz r3, 0x60(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806EE560_0000200C
    bl fn_806D5850
lbl_fn_806EE560_0000200C:
    lwz r3, 0x10(r1)
    lwz r3, 0x98(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806EE560_00002020
    bl fn_806D5850
lbl_fn_806EE560_00002020:
    lwz r3, 0x10(r1)
    lwz r3, 0x9c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806EE560_00002034
    bl fn_806D5850
lbl_fn_806EE560_00002034:
    lwz r3, 0x10(r1)
    bl fn_806D7AC0
lbl_fn_806EE560_0000203C:
    li r3, 0x1
lbl_fn_806EE560_00002040:
    addi r11, r1, 0x170
    bl _restgpr_27
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}
