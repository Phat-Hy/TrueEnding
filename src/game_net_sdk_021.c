#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTime(void);
extern void __div2i(void);
extern void _restgpr_23(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_806809C0(void);
extern void fn_806A7110(void);
extern void fn_806A76B0(void);
extern void fn_806AB920(void);
extern void fn_806AB980(void);
extern void fn_806ABB70(void);
extern void fn_806ACE00(void);
extern void fn_806B0E30(void);
extern void fn_806B0F80(void);
extern void fn_806B1230(void);
extern void fn_806B12F0(void);
extern void fn_806B14D0(void);
extern void fn_806B3CC0(void);
extern void fn_806BC010(void);
extern void fn_806BC860(void);
extern void fn_806C05F0(void);
extern void fn_806C0980(void);
extern void fn_806C5C10(void);
extern void fn_806C5EB0(void);
extern void fn_806DB310(void);
extern void fn_806EF8B0(void);
extern void fn_806FC900(void);
extern void fn_806FFE10(void);

/* External data declarations */
extern u8 lbl_807BE9D0[];
extern u8 lbl_807BEAE8[];
extern u8 lbl_807BEE20[];
extern u8 lbl_807C16F0[];
extern u8 lbl_80860890[];
extern u8 lbl_80860898[];

/* Small data declarations */

/* Function declarations */
void pad_03_806CB394_text(void);
void fn_806CB3A0(void);
void fn_806CB4C0(void);
void fn_806CB550(void);
void fn_806CB8F0(void);
void fn_806CBB20(void);
void fn_806CC020(void);
void fn_806CC550(void);
void fn_806CC6D0(void);
void fn_806CC850(void);
void fn_806CCB40(void);
void fn_806CCB70(void);
void fn_806CCC70(void);
void fn_806CCC90(void);
void fn_806CCCB0(void);
void fn_806CCCC0(void);
void fn_806CCDB0(void);
void fn_806CCEA0(void);
void fn_806CCED0(void);
void fn_806CCF00(void);
void fn_806CCF50(void);
void fn_806CCFA0(void);
void fn_806CD150(void);

asm void pad_03_806CB394_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
    opword 0x00000000
}

asm void fn_806CB3A0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lis r31, lbl_80860898@ha
    li r29, 0x1
    lwz r3, lbl_80860898@l(r31)
    li r30, 0x30
    li r27, 0x1
    lwz r28, 0x58(r3)
    b lbl_fn_806CB3A0_000000E8
lbl_fn_806CB3A0_0000003C:
    lwz r3, lbl_80860898@l(r31)
    lwz r0, 0x58(r3)
    cmpw r29, r0
    bge lbl_fn_806CB3A0_00000058
    add r3, r3, r30
    addi r26, r3, 0x60
    b lbl_fn_806CB3A0_0000005C
lbl_fn_806CB3A0_00000058:
    li r26, 0x0
lbl_fn_806CB3A0_0000005C:
    bl fn_806B0F80
    rlwinm r5, r3, 24, 8, 15
    extlwi r0, r3, 8, 8
    rlwimi r5, r3, 24, 24, 31
    lwz r4, lbl_80860898@l(r31)
    rlwimi r0, r3, 8, 16, 23
    li r3, 0x52
    or r0, r5, r0
    rotlwi r0, r0, 16
    stw r0, 0x8(r1)
    lbz r5, 0x16(r26)
    lwz r0, 0x8b8(r4)
    slw r4, r27, r5
    and. r0, r4, r0
    beq lbl_fn_806CB3A0_0000009C
    li r3, 0x55
lbl_fn_806CB3A0_0000009C:
    lwz r4, 0x0(r26)
    addi r7, r1, 0x8
    lwz r5, 0x4(r26)
    li r8, 0x1
    lhz r6, 0xc(r26)
    bl fn_806BC860
    lwz r4, lbl_80860898@l(r31)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806CB3A0_000000CC
    bl fn_806C5EB0
    b lbl_fn_806CB3A0_000000D0
lbl_fn_806CB3A0_000000CC:
    bl fn_806C5C10
lbl_fn_806CB3A0_000000D0:
    cmpwi r3, 0x0
    beq lbl_fn_806CB3A0_000000E0
    li r3, 0x0
    b lbl_fn_806CB3A0_00000114
lbl_fn_806CB3A0_000000E0:
    addi r30, r30, 0x30
    addi r29, r29, 0x1
lbl_fn_806CB3A0_000000E8:
    cmpw r29, r28
    blt lbl_fn_806CB3A0_0000003C
    lis r28, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r28)
    stb r0, 0x756(r3)
    bl OSGetTime
    lwz r5, lbl_80860898@l(r28)
    stw r4, 0x7a4(r5)
    stw r3, 0x7a0(r5)
    li r3, 0x1
lbl_fn_806CB3A0_00000114:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806CB4C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80860898@ha
    stw r0, 0x14(r1)
    lwz r5, lbl_80860898@l(r3)
    lwz r0, 0x58(r5)
    cmpwi r0, 0x0
    ble lbl_fn_806CB4C0_00000154
    addi r3, r5, 0x60
    b lbl_fn_806CB4C0_00000158
lbl_fn_806CB4C0_00000154:
    li r3, 0x0
lbl_fn_806CB4C0_00000158:
    cmpwi r3, 0x0
    bne lbl_fn_806CB4C0_00000190
    cmpwi r5, 0x0
    lis r4, lbl_807BEE20@ha
    addi r4, r4, lbl_807BEE20@l
    li r3, 0x1
    beq lbl_fn_806CB4C0_0000017C
    lwz r5, 0x744(r5)
    b lbl_fn_806CB4C0_00000180
lbl_fn_806CB4C0_0000017C:
    li r5, 0x0
lbl_fn_806CB4C0_00000180:
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806CB4C0_000001A4
lbl_fn_806CB4C0_00000190:
    lwz r3, 0x0(r3)
    lwz r0, 0x7a8(r5)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_fn_806CB4C0_000001A4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806CB550(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_26
    cmpwi r3, 0x0
    lis r31, lbl_807BE9D0@ha
    addi r31, r31, lbl_807BE9D0@l
    beq lbl_fn_806CB550_00000288
    lis r28, lbl_80860898@ha
    lis r3, 0x99
    lwz r26, lbl_80860898@l(r28)
    subi r3, r3, 0x6980
    bl fn_806ABB70
    addis r3, r3, 0x5f6
    lwz r0, 0x7a8(r26)
    subi r29, r3, 0x1f00
    addi r4, r31, 0x258
    add r29, r0, r29
    li r3, 0x1
    mr r5, r29
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r28)
    li r4, 0x0
    stw r29, 0x8c0(r3)
    lwz r6, lbl_80860898@l(r28)
    lwz r0, 0x58(r6)
    mr r5, r6
    lwz r3, 0x7a8(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806CB550_0000026C
    nop
lbl_fn_806CB550_00000244:
    lwz r0, 0x60(r5)
    cmpw r3, r0
    bne lbl_fn_806CB550_00000260
    mulli r0, r4, 0x30
    add r3, r6, r0
    addi r3, r3, 0x60
    b lbl_fn_806CB550_00000270
lbl_fn_806CB550_00000260:
    addi r5, r5, 0x30
    addi r4, r4, 0x1
    bdnz lbl_fn_806CB550_00000244
lbl_fn_806CB550_0000026C:
    li r3, 0x0
lbl_fn_806CB550_00000270:
    li r0, 0x0
    stb r0, 0x16(r3)
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    li r0, 0x1
    stw r0, 0x8f4(r3)
lbl_fn_806CB550_00000288:
    lis r4, lbl_80860898@ha
    li r0, 0x2
    lwz r3, lbl_80860898@l(r4)
    stb r0, 0x14(r3)
    lwz r3, lbl_80860898@l(r4)
    lwz r28, 0x744(r3)
    cmpwi r28, 0xd
    beq lbl_fn_806CB550_00000348
    lis r30, lbl_80860890@ha
    addi r29, r30, lbl_80860890@l
    lwz r27, lbl_80860890@l(r30)
    lwz r26, 0x4(r29)
    bl OSGetTime
    stw r4, 0x4(r29)
    lis r29, 0x1062
    lis r6, 0x8000
    subfc r4, r26, r4
    stw r3, lbl_80860890@l(r30)
    addi r7, r29, 0x4dd3
    subfe r3, r27, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r29, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r28, 2
    lwz r8, 0x34(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r31, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806CB550_00000348:
    lis r4, lbl_80860898@ha
    li r5, 0xd
    lwz r3, lbl_80860898@l(r4)
    li r0, 0x2
    stw r5, 0x744(r3)
    lwz r3, lbl_80860898@l(r4)
    stb r0, 0x16(r3)
    lwz r3, lbl_80860898@l(r4)
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806CB550_00000378
    bl fn_806EF8B0
lbl_fn_806CB550_00000378:
    lis r4, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r4)
    stw r0, 0x700(r3)
    lwz r3, lbl_80860898@l(r4)
    stb r0, 0x18(r3)
    lwz r3, lbl_80860898@l(r4)
    lbz r0, 0x15(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806CB550_000003A8
    li r30, 0x3
    b lbl_fn_806CB550_000003BC
lbl_fn_806CB550_000003A8:
    lbz r0, 0x15(r3)
    li r30, 0x6
    cmplwi r0, 0x1
    bne lbl_fn_806CB550_000003BC
    li r30, 0x4
lbl_fn_806CB550_000003BC:
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    bne lbl_fn_806CB550_000003D0
    li r0, 0x2
    stb r0, 0x15(r3)
lbl_fn_806CB550_000003D0:
    lis r29, lbl_80860898@ha
    addi r3, r1, 0x8
    lwz r6, lbl_80860898@l(r29)
    addi r5, r31, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x60
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r29)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806CB550_00000428
    cmpwi r6, 0x0
    bne lbl_fn_806CB550_00000428
    li r6, 0x1
lbl_fn_806CB550_00000428:
    addi r3, r1, 0x8
    addi r5, r31, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x64
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x8
    addi r5, r31, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x68
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB980
    lis r29, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r29)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806CB550_00000498
    li r4, 0x0
    b lbl_fn_806CB550_000004E4
lbl_fn_806CB550_00000498:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806CB550_000004E0
    lwz r3, lbl_80860898@l(r29)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806CB550_000004CC
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806CB550_000004CC
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806CB550_000004E0
lbl_fn_806CB550_000004CC:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806CB550_000004E0
    li r4, 0x1
    b lbl_fn_806CB550_000004E4
lbl_fn_806CB550_000004E0:
    li r4, 0x0
lbl_fn_806CB550_000004E4:
    neg r0, r4
    addi r3, r1, 0x8
    or r0, r0, r4
    addi r5, r31, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x6c
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB980
    mr r3, r30
    addi r4, r1, 0x14
    li r5, 0x0
    bl fn_806ACE00
    bl fn_806C5C10
    lis r3, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r3)
    addi r11, r1, 0x60
    stw r0, 0x7ac(r3)
    bl _restgpr_26
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806CB8F0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    bl fn_806B12F0
    cmpwi r3, 0x0
    bne lbl_fn_806CB8F0_0000058C
    li r3, 0x1
    b lbl_fn_806CB8F0_00000764
lbl_fn_806CB8F0_0000058C:
    lis r3, lbl_80860898@ha
    lwz r29, lbl_80860898@l(r3)
    lwz r3, 0x744(r29)
    subi r0, r3, 0x13
    cmplwi r0, 0x1
    bgt lbl_fn_806CB8F0_000005AC
    li r3, 0x1
    b lbl_fn_806CB8F0_00000764
lbl_fn_806CB8F0_000005AC:
    cmpwi r30, 0x0
    bne lbl_fn_806CB8F0_00000610
    bl OSGetTime
    lis r6, 0x8000
    lwz r8, 0x8d4(r29)
    lwz r0, 0xf8(r6)
    lis r5, 0x1062
    addi r6, r5, 0x4dd3
    lwz r7, 0x8d0(r29)
    srwi r0, r0, 2
    subfc r4, r8, r4
    mulhwu r0, r6, r0
    li r5, 0x0
    subfe r3, r7, r3
    srwi r6, r0, 6
    bl __div2i
    li r0, 0x0
    li r6, 0x3a98
    xoris r5, r3, 0x8000
    xoris r0, r0, 0x8000
    subfc r3, r4, r6
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_806CB8F0_00000760
lbl_fn_806CB8F0_00000610:
    lis r31, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r31)
    lwz r4, 0x7a8(r3)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x8(r1)
    bl fn_806B0F80
    rlwinm r5, r3, 24, 8, 15
    extlwi r0, r3, 8, 8
    rlwimi r5, r3, 24, 24, 31
    lwz r4, lbl_80860898@l(r31)
    rlwimi r0, r3, 8, 16, 23
    li r29, 0x0
    or r0, r5, r0
    li r30, 0x0
    rotlwi r0, r0, 16
    stw r0, 0xc(r1)
    lwz r4, 0x8f8(r4)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x10(r1)
    b lbl_fn_806CB8F0_00000740
lbl_fn_806CB8F0_00000688:
    cmpw r29, r0
    bge lbl_fn_806CB8F0_0000069C
    add r3, r5, r30
    addi r6, r3, 0x60
    b lbl_fn_806CB8F0_000006A0
lbl_fn_806CB8F0_0000069C:
    li r6, 0x0
lbl_fn_806CB8F0_000006A0:
    lwz r7, lbl_80860898@l(r31)
    li r3, 0x0
    lwz r4, 0x7a8(r7)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806CB8F0_000006E4
    nop
lbl_fn_806CB8F0_000006BC:
    lwz r0, 0x60(r7)
    cmpw r4, r0
    bne lbl_fn_806CB8F0_000006D8
    mulli r0, r3, 0x30
    add r3, r5, r0
    addi r0, r3, 0x60
    b lbl_fn_806CB8F0_000006E8
lbl_fn_806CB8F0_000006D8:
    addi r7, r7, 0x30
    addi r3, r3, 0x1
    bdnz lbl_fn_806CB8F0_000006BC
lbl_fn_806CB8F0_000006E4:
    li r0, 0x0
lbl_fn_806CB8F0_000006E8:
    cmplw r6, r0
    beq lbl_fn_806CB8F0_00000738
    lwz r4, 0x0(r6)
    addi r7, r1, 0x8
    lwz r5, 0x4(r6)
    li r3, 0x83
    lhz r6, 0xc(r6)
    li r8, 0x3
    bl fn_806BC860
    lwz r4, lbl_80860898@l(r31)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806CB8F0_00000724
    bl fn_806C5EB0
    b lbl_fn_806CB8F0_00000728
lbl_fn_806CB8F0_00000724:
    bl fn_806C5C10
lbl_fn_806CB8F0_00000728:
    cmpwi r3, 0x0
    beq lbl_fn_806CB8F0_00000738
    li r3, -0x1
    b lbl_fn_806CB8F0_00000764
lbl_fn_806CB8F0_00000738:
    addi r30, r30, 0x30
    addi r29, r29, 0x1
lbl_fn_806CB8F0_00000740:
    lwz r5, lbl_80860898@l(r31)
    lwz r0, 0x58(r5)
    cmpw r29, r0
    blt lbl_fn_806CB8F0_00000688
    bl OSGetTime
    lwz r5, lbl_80860898@l(r31)
    stw r4, 0x8d4(r5)
    stw r3, 0x8d0(r5)
lbl_fn_806CB8F0_00000760:
    li r3, 0x1
lbl_fn_806CB8F0_00000764:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806CBB20(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_26
    lis r6, lbl_80860898@ha
    lis r31, lbl_807BE9D0@ha
    lwz r6, lbl_80860898@l(r6)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    lwz r0, 0x58(r6)
    addi r31, r31, lbl_807BE9D0@l
    cmpwi r0, 0x0
    ble lbl_fn_806CBB20_000007D0
    addi r30, r6, 0x60
    b lbl_fn_806CBB20_000007D4
lbl_fn_806CBB20_000007D0:
    li r30, 0x0
lbl_fn_806CBB20_000007D4:
    cmpwi r4, 0x0
    lbz r5, 0x16(r30)
    lwz r7, 0x1c(r6)
    beq lbl_fn_806CBB20_000007F8
    li r0, 0x1
    slw r0, r0, r3
    or r0, r7, r0
    stw r0, 0x1c(r6)
    b lbl_fn_806CBB20_00000808
lbl_fn_806CBB20_000007F8:
    li r0, 0x1
    slw r0, r0, r3
    andc r0, r7, r0
    stw r0, 0x1c(r6)
lbl_fn_806CBB20_00000808:
    lis r4, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r4)
    lwz r8, 0x1c(r4)
    cmplw r7, r8
    beq lbl_fn_806CBB20_00000994
    cmplw r3, r5
    bne lbl_fn_806CBB20_0000083C
    mr r5, r26
    mr r6, r27
    addi r4, r31, 0x2960
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
lbl_fn_806CBB20_0000083C:
    lis r29, lbl_80860898@ha
    addi r3, r1, 0x8
    lwz r6, lbl_80860898@l(r29)
    addi r5, r31, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x60
    addi r4, r1, 0x8
    addi r5, r1, 0x28
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r29)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806CBB20_00000894
    cmpwi r6, 0x0
    bne lbl_fn_806CBB20_00000894
    li r6, 0x1
lbl_fn_806CBB20_00000894:
    addi r3, r1, 0x8
    addi r5, r31, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x64
    addi r4, r1, 0x8
    addi r5, r1, 0x28
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x8
    addi r5, r31, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x68
    addi r4, r1, 0x8
    addi r5, r1, 0x28
    li r6, 0x2f
    bl fn_806AB980
    lis r29, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r29)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806CBB20_00000904
    li r4, 0x0
    b lbl_fn_806CBB20_00000950
lbl_fn_806CBB20_00000904:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806CBB20_0000094C
    lwz r3, lbl_80860898@l(r29)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806CBB20_00000938
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806CBB20_00000938
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806CBB20_0000094C
lbl_fn_806CBB20_00000938:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806CBB20_0000094C
    li r4, 0x1
    b lbl_fn_806CBB20_00000950
lbl_fn_806CBB20_0000094C:
    li r4, 0x0
lbl_fn_806CBB20_00000950:
    neg r0, r4
    addi r3, r1, 0x8
    or r0, r0, r4
    addi r5, r31, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x6c
    addi r4, r1, 0x8
    addi r5, r1, 0x28
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x28
    li r3, -0x1
    li r5, 0x0
    bl fn_806ACE00
lbl_fn_806CBB20_00000994:
    lis r31, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r31)
    lwz r29, 0x1c(r3)
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806CBB20_000009D4
    lwz r3, lbl_80860898@l(r31)
    lwz r0, 0x744(r3)
    cmpwi r0, 0xd
    beq lbl_fn_806CBB20_000009C4
    cmpwi r0, 0x16
    bne lbl_fn_806CBB20_000009CC
lbl_fn_806CBB20_000009C4:
    li r0, 0x1
    b lbl_fn_806CBB20_000009D8
lbl_fn_806CBB20_000009CC:
    li r0, 0x0
    b lbl_fn_806CBB20_000009D8
lbl_fn_806CBB20_000009D4:
    li r0, 0x1
lbl_fn_806CBB20_000009D8:
    cmpwi r0, 0x0
    bne lbl_fn_806CBB20_000009F4
    bl fn_806B0E30
    clrlwi r3, r3, 24
    li r0, 0x1
    slw r0, r0, r3
    andc r29, r29, r0
lbl_fn_806CBB20_000009F4:
    bl fn_806B3CC0
    cmpwi r27, 0x0
    li r31, 0x1
    li r0, 0x0
    beq lbl_fn_806CBB20_00000A14
    cmpwi r3, 0x0
    beq lbl_fn_806CBB20_00000A14
    li r0, 0x1
lbl_fn_806CBB20_00000A14:
    cmpwi r0, 0x0
    bne lbl_fn_806CBB20_00000A40
    cmpwi r27, 0x0
    li r0, 0x0
    bne lbl_fn_806CBB20_00000A30
    cmpwi r3, 0x0
    beq lbl_fn_806CBB20_00000A34
lbl_fn_806CBB20_00000A30:
    li r0, 0x1
lbl_fn_806CBB20_00000A34:
    cmpwi r0, 0x0
    beq lbl_fn_806CBB20_00000A40
    li r31, 0x0
lbl_fn_806CBB20_00000A40:
    cmpwi r28, 0x1
    bne lbl_fn_806CBB20_00000B5C
    lis r3, lbl_80860898@ha
    li r4, 0x0
    lwz r7, lbl_80860898@l(r3)
    lwz r0, 0x58(r7)
    mr r3, r7
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806CBB20_00000A94
    nop
lbl_fn_806CBB20_00000A6C:
    lbz r0, 0x76(r3)
    cmplw r26, r0
    bne lbl_fn_806CBB20_00000A88
    mulli r0, r4, 0x30
    add r3, r7, r0
    addi r6, r3, 0x60
    b lbl_fn_806CBB20_00000A98
lbl_fn_806CBB20_00000A88:
    addi r3, r3, 0x30
    addi r4, r4, 0x1
    bdnz lbl_fn_806CBB20_00000A6C
lbl_fn_806CBB20_00000A94:
    li r6, 0x0
lbl_fn_806CBB20_00000A98:
    lwz r5, 0x7a8(r7)
    lis r0, 0x100
    cmpwi r31, 0x0
    li r8, 0x2
    rlwinm r4, r5, 24, 8, 15
    extlwi r3, r5, 8, 8
    rlwimi r4, r5, 24, 24, 31
    stw r0, 0x1c(r1)
    rlwimi r3, r5, 8, 16, 23
    or r0, r4, r3
    rotlwi r0, r0, 16
    stw r0, 0x18(r1)
    beq lbl_fn_806CBB20_00000B14
    lbz r0, 0x30(r7)
    cmpwi r0, 0x0
    beq lbl_fn_806CBB20_00000B14
    rlwinm r5, r27, 24, 8, 15
    extlwi r4, r27, 8, 8
    rlwinm r3, r29, 24, 8, 15
    extlwi r0, r29, 8, 8
    rlwimi r5, r27, 24, 24, 31
    rlwimi r4, r27, 8, 16, 23
    rlwimi r3, r29, 24, 24, 31
    rlwimi r0, r29, 8, 16, 23
    or r0, r3, r0
    or r4, r5, r4
    rotlwi r3, r4, 16
    stw r3, 0x20(r1)
    rotlwi r0, r0, 16
    li r8, 0x4
    stw r0, 0x24(r1)
lbl_fn_806CBB20_00000B14:
    lwz r4, 0x0(r6)
    addi r7, r1, 0x18
    lwz r5, 0x4(r6)
    li r3, 0x82
    lhz r6, 0xc(r6)
    bl fn_806BC860
    lis r4, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r4)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806CBB20_00000B48
    bl fn_806C5EB0
    b lbl_fn_806CBB20_00000B4C
lbl_fn_806CBB20_00000B48:
    bl fn_806C5C10
lbl_fn_806CBB20_00000B4C:
    cmpwi r3, 0x0
    beq lbl_fn_806CBB20_00000B5C
    li r3, 0x0
    b lbl_fn_806CBB20_00000C74
lbl_fn_806CBB20_00000B5C:
    cmpwi r31, 0x0
    beq lbl_fn_806CBB20_00000C70
    lis r31, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r31)
    lbz r0, 0x30(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806CBB20_00000C70
    li r0, 0x1
    stb r0, 0x30(r3)
    rlwinm r5, r27, 24, 8, 15
    extlwi r4, r27, 8, 8
    lwz r6, lbl_80860898@l(r31)
    rlwinm r3, r29, 24, 8, 15
    extlwi r0, r29, 8, 8
    rlwimi r5, r27, 24, 24, 31
    lwz r7, 0x7a8(r6)
    rlwimi r4, r27, 8, 16, 23
    or r8, r5, r4
    lis r5, 0x100
    rlwinm r6, r7, 24, 8, 15
    extlwi r4, r7, 8, 8
    rlwimi r6, r7, 24, 24, 31
    rlwimi r3, r29, 24, 24, 31
    rlwimi r4, r7, 8, 16, 23
    rlwimi r0, r29, 8, 16, 23
    or r6, r6, r4
    stw r5, 0x1c(r1)
    or r0, r3, r0
    rotlwi r4, r8, 16
    rotlwi r3, r6, 16
    stw r3, 0x18(r1)
    rotlwi r0, r0, 16
    li r27, 0x0
    stw r4, 0x20(r1)
    li r26, 0x0
    stw r0, 0x24(r1)
    b lbl_fn_806CBB20_00000C60
lbl_fn_806CBB20_00000BF0:
    cmpw r27, r0
    bge lbl_fn_806CBB20_00000C04
    add r3, r3, r26
    addi r6, r3, 0x60
    b lbl_fn_806CBB20_00000C08
lbl_fn_806CBB20_00000C04:
    li r6, 0x0
lbl_fn_806CBB20_00000C08:
    cmplw r6, r30
    beq lbl_fn_806CBB20_00000C58
    lwz r4, 0x0(r6)
    addi r7, r1, 0x18
    lwz r5, 0x4(r6)
    li r3, 0x82
    lhz r6, 0xc(r6)
    li r8, 0x4
    bl fn_806BC860
    lwz r4, lbl_80860898@l(r31)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806CBB20_00000C44
    bl fn_806C5EB0
    b lbl_fn_806CBB20_00000C48
lbl_fn_806CBB20_00000C44:
    bl fn_806C5C10
lbl_fn_806CBB20_00000C48:
    cmpwi r3, 0x0
    beq lbl_fn_806CBB20_00000C58
    li r3, 0x0
    b lbl_fn_806CBB20_00000C74
lbl_fn_806CBB20_00000C58:
    addi r26, r26, 0x30
    addi r27, r27, 0x1
lbl_fn_806CBB20_00000C60:
    lwz r3, lbl_80860898@l(r31)
    lwz r0, 0x58(r3)
    cmpw r27, r0
    blt lbl_fn_806CBB20_00000BF0
lbl_fn_806CBB20_00000C70:
    li r3, 0x1
lbl_fn_806CBB20_00000C74:
    addi r11, r1, 0x70
    bl _restgpr_26
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_806CC020(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r3, 0x704(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806CC020_00000CB8
    bl fn_806FFE10
lbl_fn_806CC020_00000CB8:
    lis r29, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r29)
    lwz r0, 0x8c8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806CC020_00000D90
    lwz r31, 0x744(r4)
    cmpwi r31, 0xc
    beq lbl_fn_806CC020_00000D7C
    lis r30, lbl_80860890@ha
    addi r29, r30, lbl_80860890@l
    lwz r28, lbl_80860890@l(r30)
    lwz r27, 0x4(r29)
    bl OSGetTime
    stw r4, 0x4(r29)
    lis r29, 0x1062
    lis r6, 0x8000
    subfc r4, r27, r4
    stw r3, lbl_80860890@l(r30)
    addi r7, r29, 0x4dd3
    subfe r3, r28, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r29, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r31, 2
    lwz r8, 0x30(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    lis r3, lbl_807BEAE8@ha
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r3, lbl_807BEAE8@l
    addi r0, r7, 0x32
    li r3, 0x1
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806CC020_00000D7C:
    lis r3, lbl_80860898@ha
    li r0, 0xc
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
    b lbl_fn_806CC020_00001178
lbl_fn_806CC020_00000D90:
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806CC020_00000E60
    lwz r31, 0x744(r4)
    cmpwi r31, 0x2
    beq lbl_fn_806CC020_00000E4C
    lis r30, lbl_80860890@ha
    addi r29, r30, lbl_80860890@l
    lwz r27, lbl_80860890@l(r30)
    lwz r28, 0x4(r29)
    bl OSGetTime
    stw r4, 0x4(r29)
    lis r29, 0x1062
    lis r6, 0x8000
    subfc r4, r28, r4
    stw r3, lbl_80860890@l(r30)
    addi r7, r29, 0x4dd3
    subfe r3, r27, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r29, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r31, 2
    lwz r8, 0x8(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    lis r3, lbl_807BEAE8@ha
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r3, lbl_807BEAE8@l
    addi r0, r7, 0x32
    li r3, 0x1
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806CC020_00000E4C:
    lis r3, lbl_80860898@ha
    li r0, 0x2
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
    b lbl_fn_806CC020_00001178
lbl_fn_806CC020_00000E60:
    lbz r0, 0x15(r4)
    cmplwi r0, 0x1
    bne lbl_fn_806CC020_00000F70
    lwz r31, 0x744(r4)
    cmpwi r31, 0x3
    beq lbl_fn_806CC020_00000F1C
    lis r30, lbl_80860890@ha
    addi r29, r30, lbl_80860890@l
    lwz r27, lbl_80860890@l(r30)
    lwz r28, 0x4(r29)
    bl OSGetTime
    stw r4, 0x4(r29)
    lis r29, 0x1062
    lis r6, 0x8000
    subfc r4, r28, r4
    stw r3, lbl_80860890@l(r30)
    addi r7, r29, 0x4dd3
    subfe r3, r27, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r29, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r31, 2
    lwz r8, 0xc(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    lis r3, lbl_807BEAE8@ha
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r3, lbl_807BEAE8@l
    addi r0, r7, 0x32
    li r3, 0x1
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806CC020_00000F1C:
    lis r29, lbl_80860898@ha
    li r0, 0x3
    lwz r6, lbl_80860898@l(r29)
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    stw r0, 0x744(r6)
    bl fn_806C0980
    lwz r4, lbl_80860898@l(r29)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806CC020_00000F54
    bl fn_806C5EB0
    b lbl_fn_806CC020_00000F58
lbl_fn_806CC020_00000F54:
    bl fn_806C5C10
lbl_fn_806CC020_00000F58:
    cmpwi r3, 0x0
    beq lbl_fn_806CC020_00000F68
    li r3, 0x0
    b lbl_fn_806CC020_000011A0
lbl_fn_806CC020_00000F68:
    li r3, 0x1
    b lbl_fn_806CC020_000011A0
lbl_fn_806CC020_00000F70:
    lbz r0, 0x15(r4)
    cmplwi r0, 0x2
    bne lbl_fn_806CC020_00001050
    lwz r31, 0x744(r4)
    cmpwi r31, 0xd
    beq lbl_fn_806CC020_0000102C
    lis r30, lbl_80860890@ha
    addi r29, r30, lbl_80860890@l
    lwz r27, lbl_80860890@l(r30)
    lwz r28, 0x4(r29)
    bl OSGetTime
    stw r4, 0x4(r29)
    lis r29, 0x1062
    lis r6, 0x8000
    subfc r4, r28, r4
    stw r3, lbl_80860890@l(r30)
    addi r7, r29, 0x4dd3
    subfe r3, r27, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r29, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r31, 2
    lwz r8, 0x34(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    lis r3, lbl_807BEAE8@ha
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r3, lbl_807BEAE8@l
    addi r0, r7, 0x32
    li r3, 0x1
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806CC020_0000102C:
    lis r5, lbl_80860898@ha
    li r6, 0xd
    lwz r4, lbl_80860898@l(r5)
    li r0, 0x1
    li r3, 0x1
    stw r6, 0x744(r4)
    lwz r4, lbl_80860898@l(r5)
    stb r0, 0xd(r4)
    b lbl_fn_806CC020_000011A0
lbl_fn_806CC020_00001050:
    lbz r0, 0x15(r4)
    cmplwi r0, 0x3
    bne lbl_fn_806CC020_00001178
    lwz r3, 0x0(r4)
    lwz r4, 0x660(r4)
    bl fn_806DB310
    cmpwi r3, 0x0
    beq lbl_fn_806CC020_00001170
    lwz r3, lbl_80860898@l(r29)
    lwz r29, 0x744(r3)
    cmpwi r29, 0x3
    beq lbl_fn_806CC020_00001124
    lis r30, lbl_80860890@ha
    addi r31, r30, lbl_80860890@l
    lwz r27, lbl_80860890@l(r30)
    lwz r28, 0x4(r31)
    bl OSGetTime
    stw r4, 0x4(r31)
    lis r31, 0x1062
    lis r6, 0x8000
    subfc r4, r28, r4
    stw r3, lbl_80860890@l(r30)
    addi r7, r31, 0x4dd3
    subfe r3, r27, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r31, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r29, 2
    lwz r8, 0xc(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    lis r3, lbl_807BEAE8@ha
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r3, lbl_807BEAE8@l
    addi r0, r7, 0x32
    li r3, 0x1
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806CC020_00001124:
    lis r31, lbl_80860898@ha
    li r0, 0x3
    lwz r3, lbl_80860898@l(r31)
    li r4, 0x0
    stw r0, 0x744(r3)
    lwz r3, lbl_80860898@l(r31)
    lwz r3, 0x660(r3)
    bl fn_806C05F0
    lwz r4, lbl_80860898@l(r31)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806CC020_0000115C
    bl fn_806C5EB0
    b lbl_fn_806CC020_00001160
lbl_fn_806CC020_0000115C:
    bl fn_806C5C10
lbl_fn_806CC020_00001160:
    cmpwi r3, 0x0
    beq lbl_fn_806CC020_00001170
    li r3, 0x0
    b lbl_fn_806CC020_000011A0
lbl_fn_806CC020_00001170:
    li r3, 0x1
    b lbl_fn_806CC020_000011A0
lbl_fn_806CC020_00001178:
    lis r4, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r4)
    stw r0, 0x7ac(r3)
    lwz r3, lbl_80860898@l(r4)
    lwz r3, 0x7ac(r3)
    bl fn_806BC010
    bl fn_806C5EB0
    cntlzw r0, r3
    srwi r3, r0, 5
lbl_fn_806CC020_000011A0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806CC550(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807BE9D0@ha
    addi r31, r31, lbl_807BE9D0@l
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_806A7110
    cmpwi r3, 0x0
    bne lbl_fn_806CC550_00001268
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806CC550_00001268
    lbz r0, 0x16(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806CC550_00001268
    bl fn_806B1230
    cmpwi r3, 0x4
    beq lbl_fn_806CC550_0000122C
    bl fn_806B1230
    cmpwi r3, 0x5
    bne lbl_fn_806CC550_00001268
lbl_fn_806CC550_0000122C:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lbz r0, 0x16(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806CC550_00001268
    lwz r0, 0x744(r3)
    cmpwi r0, 0xd
    beq lbl_fn_806CC550_00001254
    cmpwi r0, 0x1
    bne lbl_fn_806CC550_00001268
lbl_fn_806CC550_00001254:
    cmpwi r29, 0x0
    beq lbl_fn_806CC550_00001268
    lbz r0, 0xd(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806CC550_00001280
lbl_fn_806CC550_00001268:
    addi r4, r31, 0x2990
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806CC550_00001310
lbl_fn_806CC550_00001280:
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806CC550_000012B8
    lwz r0, 0x2c(r3)
    addi r4, r31, 0x29a0
    addi r5, r31, 0x100
    li r3, 0x2
    cmpwi r0, 0x0
    beq lbl_fn_806CC550_000012A8
    addi r5, r31, 0xf8
lbl_fn_806CC550_000012A8:
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806CC550_00001310
lbl_fn_806CC550_000012B8:
    lwz r0, 0x2c(r3)
    cmpw r28, r0
    beq lbl_fn_806CC550_0000130C
    li r0, 0x0
    stb r0, 0x30(r3)
    lis r31, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r31)
    stw r28, 0x2c(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r29, 0x34(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r30, 0x38(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r0, 0x24(r3)
    stw r0, 0x20(r3)
    bl OSGetTime
    lwz r5, lbl_80860898@l(r31)
    li r0, 0x1
    stw r4, 0x44(r5)
    stw r3, 0x40(r5)
    stw r0, 0x4c(r5)
lbl_fn_806CC550_0000130C:
    li r3, 0x1
lbl_fn_806CC550_00001310:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806CC6D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_80860898@ha
    stw r29, 0x14(r1)
    lis r29, lbl_807BE9D0@ha
    addi r29, r29, lbl_807BE9D0@l
    lwz r3, lbl_80860898@l(r30)
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806CC6D0_00001378
    li r3, 0x0
    b lbl_fn_806CC6D0_000014A0
lbl_fn_806CC6D0_00001378:
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806CC6D0_000013DC
    lwz r5, 0x38(r3)
    li r31, 0x0
    lwz r4, 0x34(r3)
    lwz r0, 0x2c(r3)
    stb r31, 0x30(r3)
    lwz r3, lbl_80860898@l(r30)
    stw r0, 0x2c(r3)
    lwz r3, lbl_80860898@l(r30)
    stw r4, 0x34(r3)
    lwz r3, lbl_80860898@l(r30)
    stw r5, 0x38(r3)
    lwz r3, lbl_80860898@l(r30)
    stw r31, 0x24(r3)
    stw r31, 0x20(r3)
    bl OSGetTime
    lwz r5, lbl_80860898@l(r30)
    li r0, 0x1
    stw r4, 0x44(r5)
    stw r3, 0x40(r5)
    stw r0, 0x4c(r5)
    lwz r3, lbl_80860898@l(r30)
    stw r31, 0x48(r3)
lbl_fn_806CC6D0_000013DC:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r30, 0x2c(r3)
    cmpwi r30, 0xff
    bne lbl_fn_806CC6D0_000013F8
    li r3, 0x0
    b lbl_fn_806CC6D0_000014A0
lbl_fn_806CC6D0_000013F8:
    bl fn_806B3CC0
    cmpwi r30, 0x0
    beq lbl_fn_806CC6D0_0000140C
    cmpwi r3, 0x0
    bne lbl_fn_806CC6D0_0000141C
lbl_fn_806CC6D0_0000140C:
    cmpwi r30, 0x0
    bne lbl_fn_806CC6D0_00001494
    cmpwi r3, 0x0
    bne lbl_fn_806CC6D0_00001494
lbl_fn_806CC6D0_0000141C:
    cmpwi r30, 0x0
    addi r4, r29, 0x29d8
    addi r5, r29, 0x100
    lis r3, 0x1
    beq lbl_fn_806CC6D0_00001434
    addi r5, r29, 0xf8
lbl_fn_806CC6D0_00001434:
    crclr 6
    bl fn_806A76B0
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r12, 0x34(r3)
    cmpwi r12, 0x0
    beq lbl_fn_806CC6D0_00001464
    lwz r4, 0x2c(r3)
    lwz r5, 0x38(r3)
    li r3, 0x0
    mtctr r12
    bctrl
lbl_fn_806CC6D0_00001464:
    lis r31, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r31)
    lwz r3, 0x10(r3)
    bl fn_806EF8B0
    lwz r4, lbl_80860898@l(r31)
    li r5, 0xff
    li r0, 0x0
    li r3, 0x1
    stw r5, 0x2c(r4)
    lwz r4, lbl_80860898@l(r31)
    stw r0, 0x4c(r4)
    b lbl_fn_806CC6D0_000014A0
lbl_fn_806CC6D0_00001494:
    mr r3, r30
    bl fn_806CC850
    li r3, 0x1
lbl_fn_806CC6D0_000014A0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806CC850(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    lis r29, lbl_80860898@ha
    lwz r31, lbl_80860898@l(r29)
    lbz r0, 0x16(r31)
    cmpwi r0, 0x2
    bne lbl_fn_806CC850_0000154C
    lwz r0, 0x58(r31)
    mr r5, r31
    lwz r4, 0x7a8(r31)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806CC850_00001534
    nop
lbl_fn_806CC850_0000150C:
    lwz r0, 0x60(r5)
    cmpw r4, r0
    bne lbl_fn_806CC850_00001528
    mulli r0, r3, 0x30
    add r3, r31, r0
    addi r3, r3, 0x60
    b lbl_fn_806CC850_00001538
lbl_fn_806CC850_00001528:
    addi r5, r5, 0x30
    addi r3, r3, 0x1
    bdnz lbl_fn_806CC850_0000150C
lbl_fn_806CC850_00001534:
    li r3, 0x0
lbl_fn_806CC850_00001538:
    lbz r3, 0x16(r3)
    mr r4, r30
    li r5, 0x0
    bl fn_806CBB20
    b lbl_fn_806CC850_00001788
lbl_fn_806CC850_0000154C:
    lwz r0, 0x744(r31)
    cmpwi r0, 0x1
    beq lbl_fn_806CC850_00001560
    li r3, 0x1
    b lbl_fn_806CC850_00001788
lbl_fn_806CC850_00001560:
    lbz r0, 0x30(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806CC850_000015D8
    bl OSGetTime
    lis r6, 0x8000
    lwz r7, 0x24(r31)
    lwz r0, 0xf8(r6)
    lis r5, 0x1062
    addi r6, r5, 0x4dd3
    lwz r29, lbl_80860898@l(r29)
    srwi r0, r0, 2
    subfc r4, r7, r4
    mulhwu r0, r6, r0
    lwz r6, 0x20(r31)
    li r5, 0x0
    subfe r3, r6, r3
    mr r31, r29
    srwi r6, r0, 6
    bl __div2i
    lwz r5, 0x900(r29)
    xoris r0, r3, 0x8000
    lwz r3, 0x904(r29)
    xoris r5, r5, 0x8000
    subfc r3, r3, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_806CC850_000015D8
    li r3, 0x1
    b lbl_fn_806CC850_00001788
lbl_fn_806CC850_000015D8:
    bl OSGetTime
    lis r6, 0x8000
    lwz r8, 0x24(r31)
    lwz r0, 0xf8(r6)
    lis r5, 0x1062
    addi r6, r5, 0x4dd3
    lwz r7, 0x20(r31)
    srwi r0, r0, 2
    subfc r4, r8, r4
    mulhwu r0, r6, r0
    li r5, 0x0
    subfe r3, r7, r3
    srwi r6, r0, 6
    bl __div2i
    li r0, 0x0
    li r6, 0xbb8
    xoris r5, r3, 0x8000
    xoris r0, r0, 0x8000
    subfc r3, r4, r6
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_806CC850_00001784
    lis r3, lbl_80860898@ha
    li r4, 0x0
    lwz r6, lbl_80860898@l(r3)
    lwz r0, 0x58(r6)
    mr r5, r6
    lwz r3, 0x7a8(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806CC850_00001684
    nop
lbl_fn_806CC850_0000165C:
    lwz r0, 0x60(r5)
    cmpw r3, r0
    bne lbl_fn_806CC850_00001678
    mulli r0, r4, 0x30
    add r3, r6, r0
    addi r9, r3, 0x60
    b lbl_fn_806CC850_00001688
lbl_fn_806CC850_00001678:
    addi r5, r5, 0x30
    addi r4, r4, 0x1
    bdnz lbl_fn_806CC850_0000165C
lbl_fn_806CC850_00001684:
    li r9, 0x0
lbl_fn_806CC850_00001688:
    lwz r0, 0x58(r6)
    cmpwi r0, 0x0
    ble lbl_fn_806CC850_0000169C
    addi r10, r6, 0x60
    b lbl_fn_806CC850_000016A0
lbl_fn_806CC850_0000169C:
    li r10, 0x0
lbl_fn_806CC850_000016A0:
    lwz r7, 0x7a8(r6)
    rlwinm r3, r30, 24, 8, 15
    extlwi r0, r30, 8, 8
    li r4, 0x0
    rlwinm r6, r7, 24, 8, 15
    extlwi r5, r7, 8, 8
    rlwimi r6, r7, 24, 24, 31
    rlwimi r3, r30, 24, 24, 31
    rlwimi r5, r7, 8, 16, 23
    rlwimi r0, r30, 8, 16, 23
    or r5, r6, r5
    stw r4, 0xc(r1)
    or r3, r3, r0
    addi r7, r1, 0x8
    rotlwi r0, r5, 16
    stw r0, 0x8(r1)
    rotlwi r0, r3, 16
    li r3, 0x82
    stw r0, 0x10(r1)
    li r8, 0x4
    lbz r0, 0x16(r9)
    extrwi r6, r0, 8, 16
    rlwinm r5, r0, 24, 8, 15
    clrlslwi r4, r0, 24, 8
    extlwi r0, r0, 8, 8
    or r5, r6, r5
    or r0, r4, r0
    or r0, r5, r0
    srwi r4, r0, 16
    slwi r0, r0, 16
    or r0, r4, r0
    stw r0, 0x14(r1)
    lwz r4, 0x0(r10)
    lwz r5, 0x4(r10)
    lhz r6, 0xc(r10)
    bl fn_806BC860
    lis r4, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r4)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806CC850_0000174C
    bl fn_806C5EB0
    b lbl_fn_806CC850_00001750
lbl_fn_806CC850_0000174C:
    bl fn_806C5C10
lbl_fn_806CC850_00001750:
    cmpwi r3, 0x0
    beq lbl_fn_806CC850_00001760
    li r3, 0x0
    b lbl_fn_806CC850_00001788
lbl_fn_806CC850_00001760:
    bl OSGetTime
    lis r6, lbl_80860898@ha
    li r5, 0xbb8
    lwz r6, lbl_80860898@l(r6)
    li r0, 0x0
    stw r4, 0x24(r6)
    stw r3, 0x20(r6)
    stw r5, 0x904(r6)
    stw r0, 0x900(r6)
lbl_fn_806CC850_00001784:
    li r3, 0x1
lbl_fn_806CC850_00001788:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806CCB40(void)
{
    nofralloc
    lis r4, lbl_80860898@ha
    li r3, 0x2
    lwz r4, lbl_80860898@l(r4)
    lwz r4, 0x744(r4)
    subi r4, r4, 0x9
    subfic r0, r4, 0x2
    orc r3, r3, r4
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_806CCB70(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r4, lbl_80860898@ha
    mr r31, r3
    lwz r4, lbl_80860898@l(r4)
    lwz r28, 0x744(r4)
    cmpw r28, r3
    beq lbl_fn_806CCB70_000018B0
    lis r29, lbl_80860890@ha
    addi r30, r29, lbl_80860890@l
    lwz r27, lbl_80860890@l(r29)
    lwz r26, 0x4(r30)
    bl OSGetTime
    stw r4, 0x4(r30)
    lis r30, 0x1062
    lis r6, 0x8000
    subfc r4, r26, r4
    stw r3, lbl_80860890@l(r29)
    addi r7, r30, 0x4dd3
    subfe r3, r27, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r30, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r31, 2
    subi r7, r5, 0x7ae1
    lwzx r8, r3, r0
    srawi r6, r6, 6
    slwi r5, r28, 2
    srwi r9, r6, 31
    lwzx r5, r3, r5
    add r6, r6, r9
    lis r3, lbl_807BEAE8@ha
    subf r4, r6, r4
    addi r0, r4, 0x32
    mulhw r0, r7, r0
    addi r4, r3, lbl_807BEAE8@l
    li r3, 0x1
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806CCB70_000018B0:
    lis r3, lbl_80860898@ha
    addi r11, r1, 0x20
    lwz r3, lbl_80860898@l(r3)
    stw r31, 0x744(r3)
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806CCC70(void)
{
    nofralloc
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r4, 0x8e0(r3)
    subfic r3, r4, 0x1
    subi r0, r4, 0x1
    or r0, r3, r0
    srwi r3, r0, 31
    blr
}

asm void fn_806CCC90(void)
{
    nofralloc
    lis r3, lbl_80860898@ha
    li r4, 0x0
    lwz r3, lbl_80860898@l(r3)
    li r5, 0x608
    addi r3, r3, 0x58
    b memset
}

asm void fn_806CCCB0(void)
{
    nofralloc
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r3, 0x58(r3)
    blr
}

asm void fn_806CCCC0(void)
{
    nofralloc
    lis r4, lbl_80860898@ha
    lwz r6, lbl_80860898@l(r4)
    lwz r5, 0x58(r6)
    cmpwi r5, 0x0
    bne lbl_fn_806CCCC0_00001948
    li r3, 0x0
    blr
lbl_fn_806CCCC0_00001948:
    mr r4, r6
    li r7, 0x0
    mtctr r5
    ble lbl_fn_806CCCC0_00001974
    nop
lbl_fn_806CCCC0_0000195C:
    lbz r0, 0x76(r4)
    cmplw r3, r0
    beq lbl_fn_806CCCC0_00001974
    addi r4, r4, 0x30
    addi r7, r7, 0x1
    bdnz lbl_fn_806CCCC0_0000195C
lbl_fn_806CCCC0_00001974:
    cmpw r7, r5
    bne lbl_fn_806CCCC0_00001984
    li r3, 0x0
    blr
lbl_fn_806CCCC0_00001984:
    lis r3, lbl_80860898@ha
    mulli r0, r7, 0x30
    lwz r3, lbl_80860898@l(r3)
    add r4, r3, r0
    b lbl_fn_806CCCC0_00001A00
lbl_fn_806CCCC0_00001998:
    lwz r0, 0x94(r4)
    addi r7, r7, 0x1
    lwz r3, 0x90(r4)
    stw r3, 0x60(r4)
    stw r0, 0x64(r4)
    lwz r0, 0x9c(r4)
    lwz r3, 0x98(r4)
    stw r3, 0x68(r4)
    stw r0, 0x6c(r4)
    lwz r0, 0xa4(r4)
    lwz r3, 0xa0(r4)
    stw r3, 0x70(r4)
    stw r0, 0x74(r4)
    lwz r0, 0xac(r4)
    lwz r3, 0xa8(r4)
    stw r3, 0x78(r4)
    stw r0, 0x7c(r4)
    lwz r0, 0xb4(r4)
    lwz r3, 0xb0(r4)
    stw r3, 0x80(r4)
    stw r0, 0x84(r4)
    lwz r0, 0xbc(r4)
    lwz r3, 0xb8(r4)
    stw r3, 0x88(r4)
    stw r0, 0x8c(r4)
    addi r4, r4, 0x30
lbl_fn_806CCCC0_00001A00:
    lwz r3, 0x58(r6)
    subi r0, r3, 0x1
    cmpw r7, r0
    blt lbl_fn_806CCCC0_00001998
    stw r0, 0x58(r6)
    li r3, 0x1
    blr
}

asm void fn_806CCDB0(void)
{
    nofralloc
    lis r4, lbl_80860898@ha
    lwz r6, lbl_80860898@l(r4)
    lwz r5, 0x58(r6)
    cmpwi r5, 0x0
    bne lbl_fn_806CCDB0_00001A38
    li r3, 0x0
    blr
lbl_fn_806CCDB0_00001A38:
    mr r4, r6
    li r7, 0x0
    mtctr r5
    ble lbl_fn_806CCDB0_00001A64
    nop
lbl_fn_806CCDB0_00001A4C:
    lwz r0, 0x60(r4)
    cmpw r3, r0
    beq lbl_fn_806CCDB0_00001A64
    addi r4, r4, 0x30
    addi r7, r7, 0x1
    bdnz lbl_fn_806CCDB0_00001A4C
lbl_fn_806CCDB0_00001A64:
    cmpw r7, r5
    bne lbl_fn_806CCDB0_00001A74
    li r3, 0x0
    blr
lbl_fn_806CCDB0_00001A74:
    lis r3, lbl_80860898@ha
    mulli r0, r7, 0x30
    lwz r3, lbl_80860898@l(r3)
    add r4, r3, r0
    b lbl_fn_806CCDB0_00001AF0
lbl_fn_806CCDB0_00001A88:
    lwz r0, 0x94(r4)
    addi r7, r7, 0x1
    lwz r3, 0x90(r4)
    stw r3, 0x60(r4)
    stw r0, 0x64(r4)
    lwz r0, 0x9c(r4)
    lwz r3, 0x98(r4)
    stw r3, 0x68(r4)
    stw r0, 0x6c(r4)
    lwz r0, 0xa4(r4)
    lwz r3, 0xa0(r4)
    stw r3, 0x70(r4)
    stw r0, 0x74(r4)
    lwz r0, 0xac(r4)
    lwz r3, 0xa8(r4)
    stw r3, 0x78(r4)
    stw r0, 0x7c(r4)
    lwz r0, 0xb4(r4)
    lwz r3, 0xb0(r4)
    stw r3, 0x80(r4)
    stw r0, 0x84(r4)
    lwz r0, 0xbc(r4)
    lwz r3, 0xb8(r4)
    stw r3, 0x88(r4)
    stw r0, 0x8c(r4)
    addi r4, r4, 0x30
lbl_fn_806CCDB0_00001AF0:
    lwz r3, 0x58(r6)
    subi r0, r3, 0x1
    cmpw r7, r0
    blt lbl_fn_806CCDB0_00001A88
    stw r0, 0x58(r6)
    li r3, 0x1
    blr
}

asm void fn_806CCEA0(void)
{
    nofralloc
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r0, 0x58(r3)
    cmpwi r0, 0x1
    blt lbl_fn_806CCEA0_00001B28
    addi r3, r3, 0x60
    blr
lbl_fn_806CCEA0_00001B28:
    li r3, 0x0
    blr
}

asm void fn_806CCED0(void)
{
    nofralloc
    lis r4, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r4)
    lwz r0, 0x58(r4)
    cmpw r3, r0
    bge lbl_fn_806CCED0_00001B60
    mulli r0, r3, 0x30
    add r3, r4, r0
    addi r3, r3, 0x60
    blr
lbl_fn_806CCED0_00001B60:
    li r3, 0x0
    blr
}

asm void fn_806CCF00(void)
{
    nofralloc
    lis r4, lbl_80860898@ha
    li r6, 0x0
    lwz r5, lbl_80860898@l(r4)
    lwz r0, 0x58(r5)
    mr r4, r5
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806CCF00_00001BB4
lbl_fn_806CCF00_00001B8C:
    lwz r0, 0x60(r4)
    cmpw r3, r0
    bne lbl_fn_806CCF00_00001BA8
    mulli r0, r6, 0x30
    add r3, r5, r0
    addi r3, r3, 0x60
    blr
lbl_fn_806CCF00_00001BA8:
    addi r4, r4, 0x30
    addi r6, r6, 0x1
    bdnz lbl_fn_806CCF00_00001B8C
lbl_fn_806CCF00_00001BB4:
    li r3, 0x0
    blr
}

asm void fn_806CCF50(void)
{
    nofralloc
    lis r4, lbl_80860898@ha
    li r6, 0x0
    lwz r5, lbl_80860898@l(r4)
    lwz r0, 0x58(r5)
    mr r4, r5
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806CCF50_00001C04
lbl_fn_806CCF50_00001BDC:
    lbz r0, 0x76(r4)
    cmplw r3, r0
    bne lbl_fn_806CCF50_00001BF8
    mulli r0, r6, 0x30
    add r3, r5, r0
    addi r3, r3, 0x60
    blr
lbl_fn_806CCF50_00001BF8:
    addi r4, r4, 0x30
    addi r6, r6, 0x1
    bdnz lbl_fn_806CCF50_00001BDC
lbl_fn_806CCF50_00001C04:
    li r3, 0x0
    blr
}

asm void fn_806CCFA0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lis r3, lbl_80860898@ha
    li r4, 0x0
    lwz r6, lbl_80860898@l(r3)
    lwz r0, 0x58(r6)
    mr r5, r6
    lwz r3, 0x7a8(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806CCFA0_00001C6C
lbl_fn_806CCFA0_00001C44:
    lwz r0, 0x60(r5)
    cmpw r3, r0
    bne lbl_fn_806CCFA0_00001C60
    mulli r0, r4, 0x30
    add r3, r6, r0
    addi r29, r3, 0x60
    b lbl_fn_806CCFA0_00001C70
lbl_fn_806CCFA0_00001C60:
    addi r5, r5, 0x30
    addi r4, r4, 0x1
    bdnz lbl_fn_806CCFA0_00001C44
lbl_fn_806CCFA0_00001C6C:
    li r29, 0x0
lbl_fn_806CCFA0_00001C70:
    bl OSGetTime
    lis r5, 0x8000
    lis r6, 0x1062
    lwz r0, 0xf8(r5)
    addi r7, r6, 0x4dd3
    lis r26, lbl_80860898@ha
    li r28, 0x0
    srwi r6, r0, 2
    lwz r5, lbl_80860898@l(r26)
    mulhwu r6, r7, r6
    li r0, 0xbb8
    lwz r7, 0x58(r5)
    li r27, 0x0
    cmpwi r7, 0x2
    srwi r5, r6, 6
    mulhwu r0, r5, r0
    mulli r5, r5, 0xbb8
    addc r30, r4, r5
    adde r31, r3, r0
    ble lbl_fn_806CCFA0_00001D28
    li r23, 0x1
    li r24, 0x30
    b lbl_fn_806CCFA0_00001D18
lbl_fn_806CCFA0_00001CCC:
    cmpw r23, r7
    bge lbl_fn_806CCFA0_00001CE0
    add r3, r3, r24
    addi r25, r3, 0x60
    b lbl_fn_806CCFA0_00001CE4
lbl_fn_806CCFA0_00001CE0:
    li r25, 0x0
lbl_fn_806CCFA0_00001CE4:
    cmplw r29, r25
    bne lbl_fn_806CCFA0_00001CF4
    mr r27, r23
    b lbl_fn_806CCFA0_00001D10
lbl_fn_806CCFA0_00001CF4:
    lbz r3, 0x16(r25)
    bl fn_806B14D0
    lbz r3, 0x16(r25)
    bl fn_806B14D0
    cmpwi r3, 0x0
    beq lbl_fn_806CCFA0_00001D10
    addi r28, r28, 0x1
lbl_fn_806CCFA0_00001D10:
    addi r24, r24, 0x30
    addi r23, r23, 0x1
lbl_fn_806CCFA0_00001D18:
    lwz r3, lbl_80860898@l(r26)
    lwz r7, 0x58(r3)
    cmpw r23, r7
    blt lbl_fn_806CCFA0_00001CCC
lbl_fn_806CCFA0_00001D28:
    lis r4, 0x8000
    lis r3, 0x1062
    lwz r4, 0xf8(r4)
    addi r5, r3, 0x4dd3
    subi r0, r7, 0x1
    addi r11, r1, 0x30
    srwi r3, r4, 2
    srawi r4, r28, 31
    mulhwu r3, r5, r3
    subf r0, r27, r0
    li r5, 0xbb8
    mulli r0, r0, 0x1770
    srwi r8, r3, 6
    mulhwu r3, r28, r8
    mullw r4, r4, r8
    mullw r7, r28, r8
    add r6, r3, r4
    mulhwu r3, r7, r5
    mullw r5, r6, r5
    mulli r4, r7, 0xbb8
    add r3, r3, r5
    addc r4, r30, r4
    adde r6, r31, r3
    mullw r3, r0, r8
    srawi r5, r0, 31
    addc r4, r4, r3
    mulhwu r0, r0, r8
    mullw r3, r5, r8
    add r0, r0, r3
    adde r3, r6, r0
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806CD150(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80860898@ha
    stw r30, 0x8(r1)
    lis r30, lbl_807BE9D0@ha
    addi r30, r30, lbl_807BE9D0@l
    lwz r5, lbl_80860898@l(r31)
    addi r4, r30, 0x29f8
    lwz r5, 0x6c0(r5)
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r31)
    lwz r0, 0x6c0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806CD150_00001E0C
    li r3, 0x0
    b lbl_fn_806CD150_00002010
lbl_fn_806CD150_00001E0C:
    li r0, 0x0
    stw r0, 0x6c0(r3)
    addi r4, r30, 0x2a10
    li r3, 0x1
    lwz r5, lbl_80860898@l(r31)
    lwz r0, 0x744(r5)
    stw r0, 0x6c4(r5)
    lwz r5, lbl_80860898@l(r31)
    lwz r5, 0x660(r5)
    neg r0, r5
    or r0, r0, r5
    srwi r5, r0, 31
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r31)
    lwz r6, 0x660(r3)
    cmpwi r6, 0x0
    beq lbl_fn_806CD150_00001ED0
    lbz r5, 0x676(r3)
    addi r4, r30, 0x2a34
    li r3, 0x1
    crclr 6
    bl fn_806A76B0
    lwz r4, lbl_80860898@l(r31)
    lwz r0, 0x664(r4)
    lwz r3, 0x660(r4)
    stw r3, 0x6c8(r4)
    stw r0, 0x6cc(r4)
    lwz r0, 0x66c(r4)
    lwz r3, 0x668(r4)
    stw r3, 0x6d0(r4)
    stw r0, 0x6d4(r4)
    lwz r0, 0x674(r4)
    lwz r3, 0x670(r4)
    stw r3, 0x6d8(r4)
    stw r0, 0x6dc(r4)
    lwz r0, 0x67c(r4)
    lwz r3, 0x678(r4)
    stw r3, 0x6e0(r4)
    stw r0, 0x6e4(r4)
    lwz r0, 0x684(r4)
    lwz r3, 0x680(r4)
    stw r3, 0x6e8(r4)
    stw r0, 0x6ec(r4)
    lwz r0, 0x68c(r4)
    lwz r3, 0x688(r4)
    stw r3, 0x6f0(r4)
    stw r0, 0x6f4(r4)
    b lbl_fn_806CD150_00001EE0
lbl_fn_806CD150_00001ED0:
    addi r3, r3, 0x6c8
    li r4, 0x0
    li r5, 0x30
    bl memset
lbl_fn_806CD150_00001EE0:
    lis r31, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r31)
    lwz r3, 0x740(r4)
    cmpwi r3, 0x0
    beq lbl_fn_806CD150_00001F20
    bl fn_806FC900
    lwz r3, lbl_80860898@l(r31)
    li r0, 0x0
    stw r0, 0x740(r3)
    lwz r3, lbl_80860898@l(r31)
    stb r0, 0x720(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r0, 0x724(r3)
    lwz r4, lbl_80860898@l(r31)
    stw r0, 0x72c(r4)
    stw r0, 0x728(r4)
lbl_fn_806CD150_00001F20:
    lwz r3, 0x744(r4)
    cmpwi r3, 0x3
    beq lbl_fn_806CD150_00001F48
    cmpwi r3, 0x5
    beq lbl_fn_806CD150_00001F48
    cmpwi r3, 0x6
    beq lbl_fn_806CD150_00001F48
    subi r0, r3, 0xe
    cmplwi r0, 0x1
    bgt lbl_fn_806CD150_00001FF4
lbl_fn_806CD150_00001F48:
    lwz r0, 0x7ac(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806CD150_00001FDC
    lwz r4, 0x660(r4)
    cmpwi r4, 0x0
    bne lbl_fn_806CD150_00001F68
    li r3, 0x0
    b lbl_fn_806CD150_00001F94
lbl_fn_806CD150_00001F68:
    lis r31, lbl_80860898@ha
    li r3, 0x5
    lwz r6, lbl_80860898@l(r31)
    li r7, 0x0
    li r8, 0x0
    lwz r5, 0x664(r6)
    lhz r6, 0x66c(r6)
    bl fn_806BC860
    lwz r4, lbl_80860898@l(r31)
    li r0, 0x0
    stw r0, 0x7ac(r4)
lbl_fn_806CD150_00001F94:
    lis r4, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r4)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806CD150_00001FB0
    bl fn_806C5EB0
    b lbl_fn_806CD150_00001FB4
lbl_fn_806CD150_00001FB0:
    bl fn_806C5C10
lbl_fn_806CD150_00001FB4:
    cmpwi r3, 0x0
    beq lbl_fn_806CD150_00001FDC
    lis r3, lbl_80860898@ha
    li r4, 0x0
    lwz r3, lbl_80860898@l(r3)
    li r5, 0x30
    addi r3, r3, 0x660
    bl memset
    li r3, 0x1
    b lbl_fn_806CD150_00002010
lbl_fn_806CD150_00001FDC:
    lis r4, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r4)
    stb r0, 0x18(r3)
    lwz r3, lbl_80860898@l(r4)
    stw r0, 0x700(r3)
lbl_fn_806CD150_00001FF4:
    lis r3, lbl_80860898@ha
    li r4, 0x0
    lwz r3, lbl_80860898@l(r3)
    li r5, 0x30
    addi r3, r3, 0x660
    bl memset
    li r3, 0x1
lbl_fn_806CD150_00002010:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
