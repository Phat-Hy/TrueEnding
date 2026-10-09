#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTime(void);
extern void __div2i(void);
extern void __div2u(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_806809C0(void);
extern void fn_806A420C(void);
extern void fn_806A7130(void);
extern void fn_806A76B0(void);
extern void fn_806A9CA0(void);
extern void fn_806AB920(void);
extern void fn_806AB980(void);
extern void fn_806ACCF0(void);
extern void fn_806ACE00(void);
extern void fn_806AEB10(void);
extern void fn_806B1230(void);
extern void fn_806B12F0(void);
extern void fn_806B4D20(void);
extern void fn_806BBCA0(void);
extern void fn_806BC4C0(void);
extern void fn_806BC860(void);
extern void fn_806C05F0(void);
extern void fn_806C0980(void);
extern void fn_806C10C0(void);
extern void fn_806C1430(void);
extern void fn_806C1AC0(void);
extern void fn_806C3ED0(void);
extern void fn_806C4430(void);
extern void fn_806C4740(void);
extern void fn_806C8700(void);
extern void fn_806C89D0(void);
extern void fn_806C8BE0(void);
extern void fn_806CC020(void);
extern void fn_806EAC30(void);
extern void fn_806FEAA0(void);
extern void fn_806FEC90(void);
extern void fn_806FECA0(void);
extern void fn_806FECC0(void);
extern void fn_806FED00(void);
extern void fn_806FED10(void);
extern void fn_806FF920(void);
extern void fn_806FFD80(void);
extern void fn_806FFEA0(void);
extern void fn_806FFEB0(void);

/* External data declarations */
extern u8 lbl_807BE9D0[];
extern u8 lbl_807C16F0[];
extern u8 lbl_80860144[];
extern u8 lbl_80860890[];
extern u8 lbl_80860898[];

/* Small data declarations */

/* Function declarations */
void pad_03_806C4B2C_text(void);
void fn_806C4B30(void);
void fn_806C50A0(void);
void fn_806C57F0(void);
void fn_806C5C10(void);
void fn_806C5EB0(void);
void fn_806C6180(void);
void fn_806C6470(void);
void fn_806C6750(void);

asm void pad_03_806C4B2C_text(void)
{
    nofralloc
    opword 0x00000000
}

asm void fn_806C4B30(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r3, lbl_80860898@ha
    lis r30, lbl_807BE9D0@ha
    lwz r26, lbl_80860898@l(r3)
    addi r30, r30, lbl_807BE9D0@l
    lwz r0, 0x744(r26)
    cmpwi r0, 0x8
    beq lbl_fn_806C4B30_0000004C
    cmpwi r0, 0x13
    beq lbl_fn_806C4B30_0000004C
    cmpwi r0, 0x17
    beq lbl_fn_806C4B30_0000004C
    cmpwi r0, 0x14
    bne lbl_fn_806C4B30_00000088
lbl_fn_806C4B30_0000004C:
    bl OSGetTime
    lis r6, 0x8000
    lwz r8, 0x78c(r26)
    lwz r0, 0xf8(r6)
    lis r5, 0x1062
    addi r6, r5, 0x4dd3
    lwz r7, 0x788(r26)
    srwi r0, r0, 2
    subfc r4, r8, r4
    mulhwu r0, r6, r0
    li r5, 0x0
    subfe r3, r7, r3
    srwi r6, r0, 6
    bl __div2i
    b lbl_fn_806C4B30_00000090
lbl_fn_806C4B30_00000088:
    li r3, 0x1
    b lbl_fn_806C4B30_00000558
lbl_fn_806C4B30_00000090:
    lis r31, lbl_80860898@ha
    lwz r7, lbl_80860898@l(r31)
    lwz r0, 0x744(r7)
    cmpwi r0, 0x8
    beq lbl_fn_806C4B30_000000C0
    cmpwi r0, 0x13
    beq lbl_fn_806C4B30_00000124
    cmpwi r0, 0x17
    beq lbl_fn_806C4B30_000003A0
    cmpwi r0, 0x14
    beq lbl_fn_806C4B30_00000530
    b lbl_fn_806C4B30_00000554
lbl_fn_806C4B30_000000C0:
    lwz r6, 0x7a4(r7)
    lwz r5, 0x7a0(r7)
    subfc r0, r4, r6
    subfe r0, r3, r5
    subfe r0, r6, r6
    neg. r0, r0
    beq lbl_fn_806C4B30_00000554
    addi r4, r30, 0x1f7c
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r31)
    li r4, 0x0
    stw r4, 0x690(r3)
    lwz r3, lbl_80860898@l(r31)
    lwz r0, 0x58(r3)
    cmpwi r0, 0x1
    blt lbl_fn_806C4B30_0000010C
    addi r4, r3, 0x60
lbl_fn_806C4B30_0000010C:
    lwz r3, 0x0(r4)
    bl fn_806C1430
    cmpwi r3, 0x0
    bne lbl_fn_806C4B30_00000554
    li r3, 0x0
    b lbl_fn_806C4B30_00000558
lbl_fn_806C4B30_00000124:
    li r5, 0x1770
    li r28, 0x0
    subfc r0, r4, r5
    subfe r0, r3, r28
    subfe r0, r5, r5
    neg. r0, r0
    beq lbl_fn_806C4B30_00000554
    lbz r3, 0x754(r7)
    addi r0, r3, 0x1
    stb r0, 0x754(r7)
    lwz r3, lbl_80860898@l(r31)
    lbz r5, 0x754(r3)
    cmplwi r5, 0x5
    ble lbl_fn_806C4B30_000002E4
    lwz r5, 0x780(r3)
    addi r4, r30, 0x1fb0
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r31)
    stb r28, 0x754(r3)
    bl OSGetTime
    lwz r5, lbl_80860898@l(r31)
    stw r4, 0x78c(r5)
    stw r3, 0x788(r5)
    lwz r3, 0x780(r5)
    bl fn_806C4430
    cmpwi r3, 0x0
    beq lbl_fn_806C4B30_00000554
    lwz r3, lbl_80860898@l(r31)
    lwz r0, 0x58(r3)
    cmpwi r0, 0x1
    bgt lbl_fn_806C4B30_000001B4
    lwz r0, 0x660(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806C4B30_00000298
lbl_fn_806C4B30_000001B4:
    addi r4, r30, 0x1fec
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    bl OSGetTime
    lis r5, lbl_80860898@ha
    lwz r5, lbl_80860898@l(r5)
    stw r4, 0x78c(r5)
    stw r3, 0x788(r5)
    lwz r31, 0x744(r5)
    cmpwi r31, 0x17
    beq lbl_fn_806C4B30_00000284
    lis r29, lbl_80860890@ha
    addi r28, r29, lbl_80860890@l
    lwz r27, lbl_80860890@l(r29)
    lwz r26, 0x4(r28)
    bl OSGetTime
    stw r4, 0x4(r28)
    lis r28, 0x1062
    lis r6, 0x8000
    subfc r4, r26, r4
    stw r3, lbl_80860890@l(r29)
    addi r7, r28, 0x4dd3
    subfe r3, r27, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r28, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r31, 2
    lwz r8, 0x5c(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r30, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806C4B30_00000284:
    lis r3, lbl_80860898@ha
    li r0, 0x17
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
    b lbl_fn_806C4B30_00000554
lbl_fn_806C4B30_00000298:
    addi r4, r30, 0x201c
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    lwz r5, lbl_80860898@l(r31)
    li r4, 0x2
    lbz r0, 0x15(r5)
    lwz r3, 0x7b0(r5)
    cmpwi r0, 0x0
    beq lbl_fn_806C4B30_000002CC
    lbz r0, 0x15(r5)
    cmplwi r0, 0x1
    bne lbl_fn_806C4B30_000002DC
lbl_fn_806C4B30_000002CC:
    lbz r0, 0xd(r5)
    cmpwi r0, 0x0
    bne lbl_fn_806C4B30_000002DC
    li r4, 0x1
lbl_fn_806C4B30_000002DC:
    bl fn_806C10C0
    b lbl_fn_806C4B30_00000554
lbl_fn_806C4B30_000002E4:
    addi r4, r30, 0x2048
    li r3, 0x40
    li r6, 0x5
    crclr 6
    bl fn_806A76B0
    li r25, 0x1
    li r27, 0x30
    li r28, 0x1
    b lbl_fn_806C4B30_00000358
lbl_fn_806C4B30_00000308:
    cmpw r25, r0
    bge lbl_fn_806C4B30_0000031C
    add r3, r29, r27
    addi r26, r3, 0x60
    b lbl_fn_806C4B30_00000320
lbl_fn_806C4B30_0000031C:
    li r26, 0x0
lbl_fn_806C4B30_00000320:
    lbz r5, 0x16(r26)
    lwz r0, 0x780(r29)
    slw r3, r28, r5
    and. r0, r3, r0
    bne lbl_fn_806C4B30_00000350
    addi r4, r30, 0x2070
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lbz r3, 0x16(r26)
    li r4, 0x2
    bl fn_806C4740
lbl_fn_806C4B30_00000350:
    addi r27, r27, 0x30
    addi r25, r25, 0x1
lbl_fn_806C4B30_00000358:
    lwz r29, lbl_80860898@l(r31)
    lwz r0, 0x58(r29)
    cmpw r25, r0
    blt lbl_fn_806C4B30_00000308
    lbz r5, 0x676(r29)
    li r3, 0x1
    lwz r0, 0x780(r29)
    slw r3, r3, r5
    and. r0, r3, r0
    bne lbl_fn_806C4B30_00000554
    addi r4, r30, 0x2090
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lbz r3, 0x676(r29)
    li r4, 0x2
    bl fn_806C4740
    b lbl_fn_806C4B30_00000554
lbl_fn_806C4B30_000003A0:
    li r6, 0xbb8
    li r5, 0x0
    subfc r0, r4, r6
    subfe r0, r3, r5
    subfe r0, r6, r6
    neg. r0, r0
    beq lbl_fn_806C4B30_00000554
    addi r4, r30, 0x20b8
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r31)
    lbz r0, 0x16(r3)
    cmpwi r0, 0x2
    beq lbl_fn_806C4B30_000003F0
    addi r4, r30, 0xb90
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806C4B30_00000554
lbl_fn_806C4B30_000003F0:
    li r26, 0x1
    li r27, 0x30
    b lbl_fn_806C4B30_00000428
lbl_fn_806C4B30_000003FC:
    cmpw r26, r0
    bge lbl_fn_806C4B30_00000410
    add r3, r3, r27
    addi r3, r3, 0x60
    b lbl_fn_806C4B30_00000414
lbl_fn_806C4B30_00000410:
    li r3, 0x0
lbl_fn_806C4B30_00000414:
    lbz r3, 0x16(r3)
    li r4, 0x4
    bl fn_806C4740
    addi r27, r27, 0x30
    addi r26, r26, 0x1
lbl_fn_806C4B30_00000428:
    lwz r3, lbl_80860898@l(r31)
    lwz r0, 0x58(r3)
    cmpw r26, r0
    blt lbl_fn_806C4B30_000003FC
    lwz r0, 0x660(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806C4B30_00000450
    lbz r3, 0x676(r3)
    li r4, 0x4
    bl fn_806C4740
lbl_fn_806C4B30_00000450:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r28, 0x744(r3)
    cmpwi r28, 0x14
    beq lbl_fn_806C4B30_00000504
    lis r29, lbl_80860890@ha
    addi r31, r29, lbl_80860890@l
    lwz r26, lbl_80860890@l(r29)
    lwz r27, 0x4(r31)
    bl OSGetTime
    stw r4, 0x4(r31)
    lis r31, 0x1062
    lis r6, 0x8000
    subfc r4, r27, r4
    stw r3, lbl_80860890@l(r29)
    addi r7, r31, 0x4dd3
    subfe r3, r26, r3
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
    slwi r0, r28, 2
    lwz r8, 0x50(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r30, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806C4B30_00000504:
    lis r6, lbl_80860898@ha
    li r0, 0x14
    lwz r5, lbl_80860898@l(r6)
    addi r4, r30, 0xbc0
    li r3, 0x80
    stw r0, 0x744(r5)
    lwz r5, lbl_80860898@l(r6)
    lhz r5, 0x758(r5)
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806C4B30_00000554
lbl_fn_806C4B30_00000530:
    lhz r6, 0x758(r7)
    srawi r5, r6, 31
    subfc r0, r4, r6
    subfe r0, r3, r5
    subfe r0, r6, r6
    neg. r0, r0
    beq lbl_fn_806C4B30_00000554
    li r3, 0x3
    bl fn_806C1AC0
lbl_fn_806C4B30_00000554:
    li r3, 0x1
lbl_fn_806C4B30_00000558:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806C50A0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    lis r29, lbl_807BE9D0@ha
    mr r27, r3
    mr r23, r4
    mr r28, r5
    addi r29, r29, lbl_807BE9D0@l
    mr r6, r27
    addi r4, r29, 0x20f0
    subi r5, r23, 0xd
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    bl fn_806B1230
    cmpwi r3, 0x5
    beq lbl_fn_806C50A0_000005D8
    addi r4, r29, 0x211c
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    li r3, 0x1
    b lbl_fn_806C50A0_00000CAC
lbl_fn_806C50A0_000005D8:
    cmpwi r23, 0xd
    beq lbl_fn_806C50A0_000005F4
    cmpwi r23, 0xe
    beq lbl_fn_806C50A0_000007FC
    cmpwi r23, 0xf
    beq lbl_fn_806C50A0_00000C8C
    b lbl_fn_806C50A0_00000CA8
lbl_fn_806C50A0_000005F4:
    lis r30, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r30)
    lwz r31, 0x744(r3)
    cmpwi r31, 0x7
    beq lbl_fn_806C50A0_00000700
    lis r25, lbl_80860890@ha
    addi r26, r25, lbl_80860890@l
    lwz r24, lbl_80860890@l(r25)
    lwz r23, 0x4(r26)
    bl OSGetTime
    stw r4, 0x4(r26)
    lis r26, 0x1062
    lis r6, 0x8000
    subfc r4, r23, r4
    stw r3, lbl_80860890@l(r25)
    addi r7, r26, 0x4dd3
    subfe r3, r24, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r26, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r31, 2
    lwz r8, 0x1c(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r29, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r30)
    li r0, 0x7
    stw r0, 0x744(r3)
    lwz r3, lbl_80860898@l(r30)
    stw r28, 0x7b0(r3)
    lwz r3, lbl_80860898@l(r30)
    lwz r0, 0x690(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806C50A0_000006E8
    addi r4, r29, 0x1d44
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r30)
    li r0, 0x0
    stw r0, 0x690(r3)
lbl_fn_806C50A0_000006E8:
    lis r3, lbl_80860898@ha
    li r4, 0x0
    lwz r3, lbl_80860898@l(r3)
    li r5, 0x30
    addi r3, r3, 0x660
    bl memset
lbl_fn_806C50A0_00000700:
    mr r6, r27
    addi r4, r29, 0x1cbc
    li r3, 0x80
    li r5, 0x1
    crclr 6
    bl fn_806A76B0
    lis r3, lbl_80860898@ha
    li r4, 0x0
    lwz r5, lbl_80860898@l(r3)
    lwz r0, 0x58(r5)
    mr r3, r5
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806C50A0_00000764
    nop
lbl_fn_806C50A0_0000073C:
    lwz r0, 0x60(r3)
    cmpw r27, r0
    bne lbl_fn_806C50A0_00000758
    mulli r0, r4, 0x30
    add r3, r5, r0
    addi r3, r3, 0x60
    b lbl_fn_806C50A0_00000768
lbl_fn_806C50A0_00000758:
    addi r3, r3, 0x30
    addi r4, r4, 0x1
    bdnz lbl_fn_806C50A0_0000073C
lbl_fn_806C50A0_00000764:
    li r3, 0x0
lbl_fn_806C50A0_00000768:
    cmpwi r3, 0x0
    bne lbl_fn_806C50A0_00000788
    addi r4, r29, 0x1ce0
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    li r0, 0x0
    b lbl_fn_806C50A0_000007EC
lbl_fn_806C50A0_00000788:
    lwz r5, 0x4(r3)
    mr r4, r27
    lhz r6, 0xc(r3)
    addi r7, r1, 0x10
    li r3, 0xe
    li r8, 0x0
    bl fn_806BC860
    lis r4, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r4)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806C50A0_000007C0
    bl fn_806C5EB0
    b lbl_fn_806C50A0_000007C4
lbl_fn_806C50A0_000007C0:
    bl fn_806C5C10
lbl_fn_806C50A0_000007C4:
    cmpwi r3, 0x0
    beq lbl_fn_806C50A0_000007D4
    li r0, 0x0
    b lbl_fn_806C50A0_000007EC
lbl_fn_806C50A0_000007D4:
    bl OSGetTime
    lis r5, lbl_80860898@ha
    li r0, 0x1
    lwz r5, lbl_80860898@l(r5)
    stw r4, 0x794(r5)
    stw r3, 0x790(r5)
lbl_fn_806C50A0_000007EC:
    cmpwi r0, 0x0
    bne lbl_fn_806C50A0_00000CA8
    li r3, 0x0
    b lbl_fn_806C50A0_00000CAC
lbl_fn_806C50A0_000007FC:
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x744(r3)
    cmpwi r0, 0x11
    bne lbl_fn_806C50A0_00000B94
    bl OSGetTime
    lis r5, 0x8000
    lwz r30, lbl_80860898@l(r28)
    lwz r0, 0xf8(r5)
    lis r5, 0x1062
    lwz r7, 0x794(r30)
    addi r5, r5, 0x4dd3
    srwi r0, r0, 2
    lwz r6, 0x790(r30)
    mulhwu r0, r5, r0
    subfc r4, r7, r4
    subfe r3, r6, r3
    li r5, 0x0
    srwi r6, r0, 6
    bl __div2u
    rotrwi r5, r4, 1
    li r4, 0x12c
    rlwimi r5, r3, 31, 0, 0
    srwi r3, r3, 1
    subfc r0, r5, r4
    li r0, 0x0
    subfe r0, r3, r0
    subfe r0, r4, r4
    neg. r0, r0
    beq lbl_fn_806C50A0_000008A4
    li r0, -0x12c
    lhz r4, 0x75a(r30)
    addc r6, r5, r0
    li r0, -0x1
    adde r5, r3, r0
    srawi r3, r4, 31
    subfc r0, r6, r4
    subfe r0, r5, r3
    subfe r0, r4, r4
    neg. r0, r0
    beq lbl_fn_806C50A0_000008A4
    sth r6, 0x75a(r30)
lbl_fn_806C50A0_000008A4:
    lis r3, lbl_80860898@ha
    li r4, 0x0
    lwz r5, lbl_80860898@l(r3)
    lwz r0, 0x58(r5)
    mr r3, r5
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806C50A0_000008EC
lbl_fn_806C50A0_000008C4:
    lwz r0, 0x60(r3)
    cmpw r27, r0
    bne lbl_fn_806C50A0_000008E0
    mulli r0, r4, 0x30
    add r3, r5, r0
    addi r3, r3, 0x60
    b lbl_fn_806C50A0_000008F0
lbl_fn_806C50A0_000008E0:
    addi r3, r3, 0x30
    addi r4, r4, 0x1
    bdnz lbl_fn_806C50A0_000008C4
lbl_fn_806C50A0_000008EC:
    li r3, 0x0
lbl_fn_806C50A0_000008F0:
    cmpwi r3, 0x0
    bne lbl_fn_806C50A0_00000900
    li r4, 0xff
    b lbl_fn_806C50A0_00000904
lbl_fn_806C50A0_00000900:
    lbz r4, 0x16(r3)
lbl_fn_806C50A0_00000904:
    cmplwi r4, 0xff
    beq lbl_fn_806C50A0_00000920
    li r0, 0x1
    lwz r3, 0x784(r5)
    slw r0, r0, r4
    or r0, r3, r0
    stw r0, 0x784(r5)
lbl_fn_806C50A0_00000920:
    lis r3, lbl_80860898@ha
    li r6, 0x0
    lwz r8, lbl_80860898@l(r3)
    li r5, 0x1
    li r4, 0x1
    lwz r3, 0x58(r8)
    addi r7, r8, 0x90
    subi r0, r3, 0x1
    mtctr r0
    cmpwi r3, 0x1
    ble lbl_fn_806C50A0_0000097C
lbl_fn_806C50A0_0000094C:
    lwz r0, 0x58(r8)
    cmpw r5, r0
    bge lbl_fn_806C50A0_00000960
    mr r3, r7
    b lbl_fn_806C50A0_00000964
lbl_fn_806C50A0_00000960:
    li r3, 0x0
lbl_fn_806C50A0_00000964:
    lbz r0, 0x16(r3)
    addi r7, r7, 0x30
    addi r5, r5, 0x1
    slw r0, r4, r0
    or r6, r6, r0
    bdnz lbl_fn_806C50A0_0000094C
lbl_fn_806C50A0_0000097C:
    lwz r0, 0x784(r8)
    cmplw r6, r0
    bne lbl_fn_806C50A0_00000CA8
    li r30, 0x1
    li r24, 0x30
    lis r27, lbl_80860898@ha
    b lbl_fn_806C50A0_00000AAC
lbl_fn_806C50A0_00000998:
    cmpw r30, r0
    bge lbl_fn_806C50A0_000009AC
    add r3, r3, r24
    addi r3, r3, 0x60
    b lbl_fn_806C50A0_000009B0
lbl_fn_806C50A0_000009AC:
    li r3, 0x0
lbl_fn_806C50A0_000009B0:
    lwz r23, 0x0(r3)
    addi r4, r29, 0x1cbc
    li r3, 0x80
    li r5, 0x2
    mr r6, r23
    crclr 6
    bl fn_806A76B0
    lwz r5, lbl_80860898@l(r27)
    li r3, 0x0
    lwz r0, 0x58(r5)
    mr r4, r5
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806C50A0_00000A14
    nop
lbl_fn_806C50A0_000009EC:
    lwz r0, 0x60(r4)
    cmpw r23, r0
    bne lbl_fn_806C50A0_00000A08
    mulli r0, r3, 0x30
    add r3, r5, r0
    addi r3, r3, 0x60
    b lbl_fn_806C50A0_00000A18
lbl_fn_806C50A0_00000A08:
    addi r4, r4, 0x30
    addi r3, r3, 0x1
    bdnz lbl_fn_806C50A0_000009EC
lbl_fn_806C50A0_00000A14:
    li r3, 0x0
lbl_fn_806C50A0_00000A18:
    cmpwi r3, 0x0
    bne lbl_fn_806C50A0_00000A38
    addi r4, r29, 0x1ce0
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    li r0, 0x0
    b lbl_fn_806C50A0_00000A94
lbl_fn_806C50A0_00000A38:
    lwz r5, 0x4(r3)
    mr r4, r23
    lhz r6, 0xc(r3)
    addi r7, r1, 0xc
    li r3, 0xf
    li r8, 0x0
    bl fn_806BC860
    lwz r4, lbl_80860898@l(r27)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806C50A0_00000A6C
    bl fn_806C5EB0
    b lbl_fn_806C50A0_00000A70
lbl_fn_806C50A0_00000A6C:
    bl fn_806C5C10
lbl_fn_806C50A0_00000A70:
    cmpwi r3, 0x0
    beq lbl_fn_806C50A0_00000A80
    li r0, 0x0
    b lbl_fn_806C50A0_00000A94
lbl_fn_806C50A0_00000A80:
    bl OSGetTime
    lwz r5, lbl_80860898@l(r27)
    li r0, 0x1
    stw r4, 0x794(r5)
    stw r3, 0x790(r5)
lbl_fn_806C50A0_00000A94:
    cmpwi r0, 0x0
    bne lbl_fn_806C50A0_00000AA4
    li r3, 0x0
    b lbl_fn_806C50A0_00000CAC
lbl_fn_806C50A0_00000AA4:
    addi r24, r24, 0x30
    addi r30, r30, 0x1
lbl_fn_806C50A0_00000AAC:
    lwz r3, lbl_80860898@l(r27)
    lwz r0, 0x58(r3)
    cmpw r30, r0
    blt lbl_fn_806C50A0_00000998
    lwz r30, 0x744(r3)
    cmpwi r30, 0x12
    beq lbl_fn_806C50A0_00000B68
    lis r28, lbl_80860890@ha
    addi r27, r28, lbl_80860890@l
    lwz r23, lbl_80860890@l(r28)
    lwz r24, 0x4(r27)
    bl OSGetTime
    stw r4, 0x4(r27)
    lis r27, 0x1062
    lis r6, 0x8000
    subfc r4, r24, r4
    stw r3, lbl_80860890@l(r28)
    addi r7, r27, 0x4dd3
    subfe r3, r23, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r27, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r30, 2
    lwz r8, 0x48(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r29, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806C50A0_00000B68:
    lis r6, lbl_80860898@ha
    li r0, 0x12
    lwz r5, lbl_80860898@l(r6)
    addi r4, r29, 0xbc0
    li r3, 0x80
    stw r0, 0x744(r5)
    lwz r5, lbl_80860898@l(r6)
    lhz r5, 0x75a(r5)
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806C50A0_00000CA8
lbl_fn_806C50A0_00000B94:
    mr r6, r27
    addi r4, r29, 0x1cbc
    li r3, 0x80
    li r5, 0x2
    crclr 6
    bl fn_806A76B0
    lwz r5, lbl_80860898@l(r28)
    li r3, 0x0
    lwz r0, 0x58(r5)
    mr r4, r5
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806C50A0_00000BF4
    nop
lbl_fn_806C50A0_00000BCC:
    lwz r0, 0x60(r4)
    cmpw r27, r0
    bne lbl_fn_806C50A0_00000BE8
    mulli r0, r3, 0x30
    add r3, r5, r0
    addi r3, r3, 0x60
    b lbl_fn_806C50A0_00000BF8
lbl_fn_806C50A0_00000BE8:
    addi r4, r4, 0x30
    addi r3, r3, 0x1
    bdnz lbl_fn_806C50A0_00000BCC
lbl_fn_806C50A0_00000BF4:
    li r3, 0x0
lbl_fn_806C50A0_00000BF8:
    cmpwi r3, 0x0
    bne lbl_fn_806C50A0_00000C18
    addi r4, r29, 0x1ce0
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    li r0, 0x0
    b lbl_fn_806C50A0_00000C7C
lbl_fn_806C50A0_00000C18:
    lwz r5, 0x4(r3)
    mr r4, r27
    lhz r6, 0xc(r3)
    addi r7, r1, 0x8
    li r3, 0xf
    li r8, 0x0
    bl fn_806BC860
    lis r4, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r4)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806C50A0_00000C50
    bl fn_806C5EB0
    b lbl_fn_806C50A0_00000C54
lbl_fn_806C50A0_00000C50:
    bl fn_806C5C10
lbl_fn_806C50A0_00000C54:
    cmpwi r3, 0x0
    beq lbl_fn_806C50A0_00000C64
    li r0, 0x0
    b lbl_fn_806C50A0_00000C7C
lbl_fn_806C50A0_00000C64:
    bl OSGetTime
    lis r5, lbl_80860898@ha
    li r0, 0x1
    lwz r5, lbl_80860898@l(r5)
    stw r4, 0x794(r5)
    stw r3, 0x790(r5)
lbl_fn_806C50A0_00000C7C:
    cmpwi r0, 0x0
    bne lbl_fn_806C50A0_00000CA8
    li r3, 0x0
    b lbl_fn_806C50A0_00000CAC
lbl_fn_806C50A0_00000C8C:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r0, 0x744(r3)
    cmpwi r0, 0x7
    bne lbl_fn_806C50A0_00000CA8
    li r3, 0x2
    bl fn_806C3ED0
lbl_fn_806C50A0_00000CA8:
    li r3, 0x1
lbl_fn_806C50A0_00000CAC:
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806C57F0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lis r3, lbl_80860898@ha
    lis r29, lbl_807BE9D0@ha
    lwz r26, lbl_80860898@l(r3)
    addi r29, r29, lbl_807BE9D0@l
    lwz r3, 0x744(r26)
    cmpwi r3, 0x7
    beq lbl_fn_806C57F0_00000D00
    subi r0, r3, 0x11
    cmplwi r0, 0x1
    bgt lbl_fn_806C57F0_00000D3C
lbl_fn_806C57F0_00000D00:
    bl OSGetTime
    lis r6, 0x8000
    lwz r8, 0x794(r26)
    lwz r0, 0xf8(r6)
    lis r5, 0x1062
    addi r6, r5, 0x4dd3
    lwz r7, 0x790(r26)
    srwi r0, r0, 2
    subfc r4, r8, r4
    mulhwu r0, r6, r0
    li r5, 0x0
    subfe r3, r7, r3
    srwi r6, r0, 6
    bl __div2i
    b lbl_fn_806C57F0_00000D44
lbl_fn_806C57F0_00000D3C:
    li r3, 0x1
    b lbl_fn_806C57F0_000010C0
lbl_fn_806C57F0_00000D44:
    lis r30, lbl_80860898@ha
    lwz r7, lbl_80860898@l(r30)
    lwz r0, 0x744(r7)
    cmpwi r0, 0x7
    beq lbl_fn_806C57F0_00000D6C
    cmpwi r0, 0x11
    beq lbl_fn_806C57F0_00000E94
    cmpwi r0, 0x12
    beq lbl_fn_806C57F0_00001098
    b lbl_fn_806C57F0_000010BC
lbl_fn_806C57F0_00000D6C:
    li r6, 0x1770
    li r5, 0x0
    subfc r0, r4, r6
    subfe r0, r3, r5
    subfe r0, r6, r6
    neg. r0, r0
    beq lbl_fn_806C57F0_000010BC
    lwz r0, 0x58(r7)
    cmpwi r0, 0x0
    ble lbl_fn_806C57F0_00000D98
    addi r5, r7, 0x60
lbl_fn_806C57F0_00000D98:
    lwz r26, 0x0(r5)
    addi r4, r29, 0x1cbc
    li r3, 0x80
    li r5, 0x1
    mr r6, r26
    crclr 6
    bl fn_806A76B0
    lis r3, lbl_80860898@ha
    li r4, 0x0
    lwz r5, lbl_80860898@l(r3)
    lwz r0, 0x58(r5)
    mr r3, r5
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806C57F0_00000DFC
lbl_fn_806C57F0_00000DD4:
    lwz r0, 0x60(r3)
    cmpw r26, r0
    bne lbl_fn_806C57F0_00000DF0
    mulli r0, r4, 0x30
    add r3, r5, r0
    addi r3, r3, 0x60
    b lbl_fn_806C57F0_00000E00
lbl_fn_806C57F0_00000DF0:
    addi r3, r3, 0x30
    addi r4, r4, 0x1
    bdnz lbl_fn_806C57F0_00000DD4
lbl_fn_806C57F0_00000DFC:
    li r3, 0x0
lbl_fn_806C57F0_00000E00:
    cmpwi r3, 0x0
    bne lbl_fn_806C57F0_00000E20
    addi r4, r29, 0x1ce0
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    li r0, 0x0
    b lbl_fn_806C57F0_00000E84
lbl_fn_806C57F0_00000E20:
    lwz r5, 0x4(r3)
    mr r4, r26
    lhz r6, 0xc(r3)
    addi r7, r1, 0xc
    li r3, 0xe
    li r8, 0x0
    bl fn_806BC860
    lis r4, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r4)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806C57F0_00000E58
    bl fn_806C5EB0
    b lbl_fn_806C57F0_00000E5C
lbl_fn_806C57F0_00000E58:
    bl fn_806C5C10
lbl_fn_806C57F0_00000E5C:
    cmpwi r3, 0x0
    beq lbl_fn_806C57F0_00000E6C
    li r0, 0x0
    b lbl_fn_806C57F0_00000E84
lbl_fn_806C57F0_00000E6C:
    bl OSGetTime
    lis r5, lbl_80860898@ha
    li r0, 0x1
    lwz r5, lbl_80860898@l(r5)
    stw r4, 0x794(r5)
    stw r3, 0x790(r5)
lbl_fn_806C57F0_00000E84:
    cmpwi r0, 0x0
    bne lbl_fn_806C57F0_000010BC
    li r3, 0x0
    b lbl_fn_806C57F0_000010C0
lbl_fn_806C57F0_00000E94:
    li r5, 0x1770
    li r26, 0x0
    subfc r0, r4, r5
    subfe r0, r3, r26
    subfe r0, r5, r5
    neg. r0, r0
    beq lbl_fn_806C57F0_000010BC
    lbz r3, 0x755(r7)
    addi r0, r3, 0x1
    stb r0, 0x755(r7)
    lwz r3, lbl_80860898@l(r30)
    lbz r0, 0x755(r3)
    cmplwi r0, 0x5
    ble lbl_fn_806C57F0_00000F30
    lwz r5, 0x784(r3)
    addi r4, r29, 0x2138
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r30)
    lwz r3, 0x784(r3)
    bl fn_806C4430
    cmpwi r3, 0x0
    bne lbl_fn_806C57F0_00000EFC
    li r3, 0x0
    b lbl_fn_806C57F0_000010C0
lbl_fn_806C57F0_00000EFC:
    lwz r3, lbl_80860898@l(r30)
    lwz r0, 0x58(r3)
    cmpwi r0, 0x1
    ble lbl_fn_806C57F0_00000F24
    stb r26, 0x755(r3)
    bl OSGetTime
    lwz r5, lbl_80860898@l(r30)
    stw r4, 0x794(r5)
    stw r3, 0x790(r5)
    b lbl_fn_806C57F0_000010BC
lbl_fn_806C57F0_00000F24:
    li r3, 0x2
    bl fn_806C3ED0
    b lbl_fn_806C57F0_000010BC
lbl_fn_806C57F0_00000F30:
    li r26, 0x1
    li r28, 0x30
    li r31, 0x1
    b lbl_fn_806C57F0_00001084
lbl_fn_806C57F0_00000F40:
    cmpw r26, r0
    bge lbl_fn_806C57F0_00000F54
    add r3, r5, r28
    addi r4, r3, 0x60
    b lbl_fn_806C57F0_00000F58
lbl_fn_806C57F0_00000F54:
    li r4, 0x0
lbl_fn_806C57F0_00000F58:
    lbz r3, 0x16(r4)
    lwz r0, 0x784(r5)
    slw r3, r31, r3
    and. r0, r3, r0
    bne lbl_fn_806C57F0_0000107C
    lwz r27, 0x0(r4)
    addi r4, r29, 0x1cbc
    li r3, 0x80
    li r5, 0x0
    mr r6, r27
    crclr 6
    bl fn_806A76B0
    lwz r7, lbl_80860898@l(r30)
    li r4, 0x0
    lwz r5, 0x7b0(r7)
    mr r6, r7
    rlwinm r3, r5, 24, 8, 15
    extlwi r0, r5, 8, 8
    rlwimi r3, r5, 24, 24, 31
    rlwimi r0, r5, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x8(r1)
    lwz r0, 0x58(r7)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806C57F0_00000FEC
lbl_fn_806C57F0_00000FC4:
    lwz r0, 0x60(r6)
    cmpw r27, r0
    bne lbl_fn_806C57F0_00000FE0
    mulli r0, r4, 0x30
    add r3, r7, r0
    addi r3, r3, 0x60
    b lbl_fn_806C57F0_00000FF0
lbl_fn_806C57F0_00000FE0:
    addi r6, r6, 0x30
    addi r4, r4, 0x1
    bdnz lbl_fn_806C57F0_00000FC4
lbl_fn_806C57F0_00000FEC:
    li r3, 0x0
lbl_fn_806C57F0_00000FF0:
    cmpwi r3, 0x0
    bne lbl_fn_806C57F0_00001010
    addi r4, r29, 0x1ce0
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    li r0, 0x0
    b lbl_fn_806C57F0_0000106C
lbl_fn_806C57F0_00001010:
    lwz r5, 0x4(r3)
    mr r4, r27
    lhz r6, 0xc(r3)
    addi r7, r1, 0x8
    li r3, 0xd
    li r8, 0x1
    bl fn_806BC860
    lwz r4, lbl_80860898@l(r30)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806C57F0_00001044
    bl fn_806C5EB0
    b lbl_fn_806C57F0_00001048
lbl_fn_806C57F0_00001044:
    bl fn_806C5C10
lbl_fn_806C57F0_00001048:
    cmpwi r3, 0x0
    beq lbl_fn_806C57F0_00001058
    li r0, 0x0
    b lbl_fn_806C57F0_0000106C
lbl_fn_806C57F0_00001058:
    bl OSGetTime
    lwz r5, lbl_80860898@l(r30)
    li r0, 0x1
    stw r4, 0x794(r5)
    stw r3, 0x790(r5)
lbl_fn_806C57F0_0000106C:
    cmpwi r0, 0x0
    bne lbl_fn_806C57F0_0000107C
    li r3, 0x0
    b lbl_fn_806C57F0_000010C0
lbl_fn_806C57F0_0000107C:
    addi r28, r28, 0x30
    addi r26, r26, 0x1
lbl_fn_806C57F0_00001084:
    lwz r5, lbl_80860898@l(r30)
    lwz r0, 0x58(r5)
    cmpw r26, r0
    blt lbl_fn_806C57F0_00000F40
    b lbl_fn_806C57F0_000010BC
lbl_fn_806C57F0_00001098:
    lhz r6, 0x75a(r7)
    srawi r5, r6, 31
    subfc r0, r4, r6
    subfe r0, r3, r5
    subfe r0, r6, r6
    neg. r0, r0
    beq lbl_fn_806C57F0_000010BC
    li r3, 0x2
    bl fn_806C3ED0
lbl_fn_806C57F0_000010BC:
    li r3, 0x1
lbl_fn_806C57F0_000010C0:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806C5C10(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_27
    cmpwi r3, 0x0
    lis r31, lbl_807BE9D0@ha
    mr r29, r3
    addi r31, r31, lbl_807BE9D0@l
    bne lbl_fn_806C5C10_00001114
    li r3, 0x0
    b lbl_fn_806C5C10_00001368
lbl_fn_806C5C10_00001114:
    mr r5, r29
    addi r4, r31, 0x2168
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
    cmpwi r29, 0x1
    beq lbl_fn_806C5C10_0000114C
    cmpwi r29, 0x2
    beq lbl_fn_806C5C10_00001158
    cmpwi r29, 0x3
    beq lbl_fn_806C5C10_00001164
    cmpwi r29, 0x4
    beq lbl_fn_806C5C10_00001170
    b lbl_fn_806C5C10_00001178
lbl_fn_806C5C10_0000114C:
    li r30, 0x9
    li r27, -0x1
    b lbl_fn_806C5C10_00001178
lbl_fn_806C5C10_00001158:
    li r30, 0x9
    li r27, -0x2
    b lbl_fn_806C5C10_00001178
lbl_fn_806C5C10_00001164:
    li r30, 0x6
    li r27, -0xa
    b lbl_fn_806C5C10_00001178
lbl_fn_806C5C10_00001170:
    li r30, 0x6
    li r27, -0x14
lbl_fn_806C5C10_00001178:
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    cmpwi r3, 0x0
    beq lbl_fn_806C5C10_00001364
    cmpwi r30, 0x0
    beq lbl_fn_806C5C10_00001364
    li r0, 0x1
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r28)
    subis r4, r27, 0x1
    li r0, 0x0
    mr r3, r30
    stb r0, 0x751(r5)
    subi r4, r4, 0x3c68
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r28)
    addi r3, r1, 0x8
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
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C5C10_00001218
    cmpwi r6, 0x0
    bne lbl_fn_806C5C10_00001218
    li r6, 0x1
lbl_fn_806C5C10_00001218:
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
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C5C10_00001288
    li r4, 0x0
    b lbl_fn_806C5C10_000012D4
lbl_fn_806C5C10_00001288:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806C5C10_000012D0
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806C5C10_000012BC
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806C5C10_000012BC
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C5C10_000012D0
lbl_fn_806C5C10_000012BC:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C5C10_000012D0
    li r4, 0x1
    b lbl_fn_806C5C10_000012D4
lbl_fn_806C5C10_000012D0:
    li r4, 0x0
lbl_fn_806C5C10_000012D4:
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
    addi r4, r1, 0x14
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r31, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r31)
    cntlzw r0, r3
    srwi r28, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r31)
    mr r7, r3
    lwz r12, 0x8a0(r31)
    mr r3, r30
    subi r0, r4, 0x2
    mr r5, r28
    cntlzw r0, r0
    lwz r8, 0x8a4(r31)
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
lbl_fn_806C5C10_00001364:
    mr r3, r29
lbl_fn_806C5C10_00001368:
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806C5EB0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_27
    cmpwi r3, 0x0
    lis r31, lbl_807BE9D0@ha
    mr r29, r3
    addi r31, r31, lbl_807BE9D0@l
    bne lbl_fn_806C5EB0_000013B4
    li r3, 0x0
    b lbl_fn_806C5EB0_00001630
lbl_fn_806C5EB0_000013B4:
    mr r5, r29
    addi r4, r31, 0x217c
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
    cmpwi r29, 0x1
    beq lbl_fn_806C5EB0_000013FC
    cmpwi r29, 0x2
    beq lbl_fn_806C5EB0_00001408
    cmpwi r29, 0x3
    beq lbl_fn_806C5EB0_00001414
    cmpwi r29, 0x4
    beq lbl_fn_806C5EB0_00001420
    cmpwi r29, 0x5
    beq lbl_fn_806C5EB0_0000142C
    cmpwi r29, 0x6
    beq lbl_fn_806C5EB0_00001438
    b lbl_fn_806C5EB0_00001440
lbl_fn_806C5EB0_000013FC:
    li r30, 0x6
    li r27, -0x32
    b lbl_fn_806C5EB0_00001440
lbl_fn_806C5EB0_00001408:
    li r30, 0x6
    li r27, -0x1e
    b lbl_fn_806C5EB0_00001440
lbl_fn_806C5EB0_00001414:
    li r30, 0x6
    li r27, -0x14
    b lbl_fn_806C5EB0_00001440
lbl_fn_806C5EB0_00001420:
    li r30, 0x6
    li r27, -0x28
    b lbl_fn_806C5EB0_00001440
lbl_fn_806C5EB0_0000142C:
    li r30, 0x9
    li r27, -0x1
    b lbl_fn_806C5EB0_00001440
lbl_fn_806C5EB0_00001438:
    li r30, 0x9
    li r27, -0x2
lbl_fn_806C5EB0_00001440:
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    cmpwi r3, 0x0
    beq lbl_fn_806C5EB0_0000162C
    cmpwi r30, 0x0
    beq lbl_fn_806C5EB0_0000162C
    li r0, 0x1
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r28)
    subis r4, r27, 0x1
    li r0, 0x0
    mr r3, r30
    stb r0, 0x751(r5)
    subi r4, r4, 0x4c08
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r28)
    addi r3, r1, 0x8
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
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C5EB0_000014E0
    cmpwi r6, 0x0
    bne lbl_fn_806C5EB0_000014E0
    li r6, 0x1
lbl_fn_806C5EB0_000014E0:
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
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C5EB0_00001550
    li r4, 0x0
    b lbl_fn_806C5EB0_0000159C
lbl_fn_806C5EB0_00001550:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806C5EB0_00001598
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806C5EB0_00001584
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806C5EB0_00001584
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C5EB0_00001598
lbl_fn_806C5EB0_00001584:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C5EB0_00001598
    li r4, 0x1
    b lbl_fn_806C5EB0_0000159C
lbl_fn_806C5EB0_00001598:
    li r4, 0x0
lbl_fn_806C5EB0_0000159C:
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
    addi r4, r1, 0x14
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r31, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r31)
    cntlzw r0, r3
    srwi r28, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r31)
    mr r7, r3
    lwz r12, 0x8a0(r31)
    mr r3, r30
    subi r0, r4, 0x2
    mr r5, r28
    cntlzw r0, r0
    lwz r8, 0x8a4(r31)
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
lbl_fn_806C5EB0_0000162C:
    mr r3, r29
lbl_fn_806C5EB0_00001630:
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806C6180(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_27
    cmpwi r3, 0x0
    lis r31, lbl_807BE9D0@ha
    mr r29, r3
    addi r31, r31, lbl_807BE9D0@l
    bne lbl_fn_806C6180_00001684
    li r3, 0x0
    b lbl_fn_806C6180_0000192C
lbl_fn_806C6180_00001684:
    mr r5, r29
    addi r4, r31, 0x2190
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
    cmpwi r29, 0x1
    beq lbl_fn_806C6180_000016C4
    cmpwi r29, 0x2
    beq lbl_fn_806C6180_000016D0
    cmpwi r29, 0x3
    beq lbl_fn_806C6180_000016DC
    cmpwi r29, 0x4
    beq lbl_fn_806C6180_000016E8
    cmpwi r29, 0x5
    beq lbl_fn_806C6180_000016F4
    b lbl_fn_806C6180_000016FC
lbl_fn_806C6180_000016C4:
    li r30, 0x6
    li r27, -0x32
    b lbl_fn_806C6180_000016FC
lbl_fn_806C6180_000016D0:
    li r30, 0x6
    li r27, -0x3c
    b lbl_fn_806C6180_000016FC
lbl_fn_806C6180_000016DC:
    li r30, 0x6
    li r27, -0x1e
    b lbl_fn_806C6180_000016FC
lbl_fn_806C6180_000016E8:
    li r30, 0x6
    li r27, -0x50
    b lbl_fn_806C6180_000016FC
lbl_fn_806C6180_000016F4:
    li r30, 0x6
    li r27, -0x14
lbl_fn_806C6180_000016FC:
    bl fn_806B1230
    cmpwi r3, 0x2
    beq lbl_fn_806C6180_00001714
    cmpwi r3, 0x4
    beq lbl_fn_806C6180_00001728
    b lbl_fn_806C6180_00001918
lbl_fn_806C6180_00001714:
    subis r4, r27, 0x1
    mr r3, r30
    addi r4, r4, 0x600
    bl fn_806AEB10
    b lbl_fn_806C6180_00001928
lbl_fn_806C6180_00001728:
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    cmpwi r3, 0x0
    beq lbl_fn_806C6180_00001928
    cmpwi r30, 0x0
    beq lbl_fn_806C6180_00001928
    li r0, 0x1
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r28)
    subis r4, r27, 0x1
    li r0, 0x0
    mr r3, r30
    stb r0, 0x751(r5)
    subi r4, r4, 0x4820
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r28)
    addi r3, r1, 0x8
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
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C6180_000017C8
    cmpwi r6, 0x0
    bne lbl_fn_806C6180_000017C8
    li r6, 0x1
lbl_fn_806C6180_000017C8:
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
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C6180_00001838
    li r4, 0x0
    b lbl_fn_806C6180_00001884
lbl_fn_806C6180_00001838:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806C6180_00001880
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806C6180_0000186C
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806C6180_0000186C
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C6180_00001880
lbl_fn_806C6180_0000186C:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C6180_00001880
    li r4, 0x1
    b lbl_fn_806C6180_00001884
lbl_fn_806C6180_00001880:
    li r4, 0x0
lbl_fn_806C6180_00001884:
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
    addi r4, r1, 0x14
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r31, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r31)
    cntlzw r0, r3
    srwi r28, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r31)
    mr r7, r3
    lwz r12, 0x8a0(r31)
    mr r3, r30
    subi r0, r4, 0x2
    mr r5, r28
    cntlzw r0, r0
    lwz r8, 0x8a4(r31)
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
    b lbl_fn_806C6180_00001928
lbl_fn_806C6180_00001918:
    subis r4, r27, 0x1
    mr r3, r30
    subi r4, r4, 0x6f30
    bl fn_806A7130
lbl_fn_806C6180_00001928:
    mr r3, r29
lbl_fn_806C6180_0000192C:
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806C6470(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_27
    cmpwi r3, 0x0
    lis r31, lbl_807BE9D0@ha
    mr r29, r3
    addi r31, r31, lbl_807BE9D0@l
    bne lbl_fn_806C6470_00001974
    li r3, 0x0
    b lbl_fn_806C6470_00001C00
lbl_fn_806C6470_00001974:
    mr r5, r29
    addi r4, r31, 0x21a8
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
    cmpwi r29, 0x1
    beq lbl_fn_806C6470_000019C4
    cmpwi r29, 0x2
    beq lbl_fn_806C6470_000019D0
    cmpwi r29, 0x5
    beq lbl_fn_806C6470_000019D0
    cmpwi r29, 0x3
    beq lbl_fn_806C6470_000019E0
    cmpwi r29, 0x4
    beq lbl_fn_806C6470_000019EC
    cmpwi r29, 0x6
    beq lbl_fn_806C6470_000019F8
    cmpwi r29, 0x7
    beq lbl_fn_806C6470_00001A04
    b lbl_fn_806C6470_00001A0C
lbl_fn_806C6470_000019C4:
    li r30, 0x9
    li r27, -0x1
    b lbl_fn_806C6470_00001A0C
lbl_fn_806C6470_000019D0:
    li r30, 0x0
    li r27, 0x0
    li r29, 0x0
    b lbl_fn_806C6470_00001A0C
lbl_fn_806C6470_000019E0:
    li r30, 0x6
    li r27, -0xa
    b lbl_fn_806C6470_00001A0C
lbl_fn_806C6470_000019EC:
    li r30, 0x6
    li r27, -0x1e
    b lbl_fn_806C6470_00001A0C
lbl_fn_806C6470_000019F8:
    li r30, 0x6
    li r27, -0x46
    b lbl_fn_806C6470_00001A0C
lbl_fn_806C6470_00001A04:
    li r30, 0x6
    li r27, -0x50
lbl_fn_806C6470_00001A0C:
    cmpwi cr1, r30, 0x0
    beq cr1, lbl_fn_806C6470_00001BFC
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    cmpwi r3, 0x0
    beq lbl_fn_806C6470_00001BFC
    beq cr1, lbl_fn_806C6470_00001BFC
    li r0, 0x1
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r28)
    subis r4, r27, 0x1
    li r0, 0x0
    mr r3, r30
    stb r0, 0x751(r5)
    subi r4, r4, 0x53d8
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r28)
    addi r3, r1, 0x8
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
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C6470_00001AB0
    cmpwi r6, 0x0
    bne lbl_fn_806C6470_00001AB0
    li r6, 0x1
lbl_fn_806C6470_00001AB0:
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
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C6470_00001B20
    li r4, 0x0
    b lbl_fn_806C6470_00001B6C
lbl_fn_806C6470_00001B20:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806C6470_00001B68
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806C6470_00001B54
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806C6470_00001B54
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C6470_00001B68
lbl_fn_806C6470_00001B54:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C6470_00001B68
    li r4, 0x1
    b lbl_fn_806C6470_00001B6C
lbl_fn_806C6470_00001B68:
    li r4, 0x0
lbl_fn_806C6470_00001B6C:
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
    addi r4, r1, 0x14
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r31, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r31)
    cntlzw r0, r3
    srwi r28, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r31)
    mr r7, r3
    lwz r12, 0x8a0(r31)
    mr r3, r30
    subi r0, r4, 0x2
    mr r5, r28
    cntlzw r0, r0
    lwz r8, 0x8a4(r31)
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
lbl_fn_806C6470_00001BFC:
    mr r3, r29
lbl_fn_806C6470_00001C00:
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806C6750(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_24
    lis r31, lbl_80860898@ha
    lis r30, lbl_807BE9D0@ha
    lwz r6, lbl_80860898@l(r31)
    mr r29, r3
    mr r28, r4
    addi r30, r30, lbl_807BE9D0@l
    lwz r6, 0x744(r6)
    mr r27, r5
    mr r5, r28
    addi r4, r30, 0x21d0
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lis r4, lbl_80860144@ha
    lwz r6, lbl_80860898@l(r31)
    lwz r3, lbl_80860144@l(r4)
    addi r0, r3, 0x1
    stw r0, lbl_80860144@l(r4)
    lwz r0, 0x718(r6)
    lwz r3, 0x71c(r6)
    or. r0, r3, r0
    beq lbl_fn_806C6750_00001D14
    subi r0, r28, 0x4
    cmplwi r0, 0x1
    bgt lbl_fn_806C6750_00001CC0
    li r0, 0x0
    stw r0, 0x71c(r6)
    addi r4, r30, 0x13c
    addi r5, r30, 0x21c0
    stw r0, 0x718(r6)
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806C6750_00001D14
lbl_fn_806C6750_00001CC0:
    bl OSGetTime
    lis r6, 0x8000
    lis r5, 0x1062
    lwz r7, 0xf8(r6)
    addi r8, r5, 0x4dd3
    li r0, 0x7530
    lwz r6, lbl_80860898@l(r31)
    srwi r7, r7, 2
    addi r5, r30, 0x21c0
    mulhwu r7, r8, r7
    srwi r8, r7, 6
    mulhwu r7, r8, r0
    mulli r0, r8, 0x7530
    addc r0, r0, r4
    stw r0, 0x71c(r6)
    adde r0, r7, r3
    addi r4, r30, 0x21f8
    stw r0, 0x718(r6)
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
lbl_fn_806C6750_00001D14:
    cmpwi r28, 0x0
    beq lbl_fn_806C6750_00001D28
    cmpwi r28, 0x4
    beq lbl_fn_806C6750_00001D34
    b lbl_fn_806C6750_00003BA4
lbl_fn_806C6750_00001D28:
    mr r3, r27
    bl fn_806C8700
    b lbl_fn_806C6750_00003BA4
lbl_fn_806C6750_00001D34:
    lis r3, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r3)
    li r24, 0x0
    stw r0, 0x71c(r3)
    stw r0, 0x718(r3)
    b lbl_fn_806C6750_00001E1C
lbl_fn_806C6750_00001D50:
    mr r3, r29
    mr r4, r24
    bl fn_806FFEA0
    mr r27, r3
    addi r4, r30, 0x2228
    li r5, -0x1
    bl fn_806FEAA0
    cmpwi r3, -0x1
    bne lbl_fn_806C6750_00001D7C
    li r3, 0x0
    b lbl_fn_806C6750_00001DEC
lbl_fn_806C6750_00001D7C:
    mr r3, r27
    addi r4, r30, 0x2234
    li r5, -0x1
    bl fn_806FEAA0
    cmpwi r3, -0x1
    bne lbl_fn_806C6750_00001D9C
    li r3, 0x0
    b lbl_fn_806C6750_00001DEC
lbl_fn_806C6750_00001D9C:
    mr r3, r27
    addi r4, r30, 0x190
    li r5, -0x1
    bl fn_806FEAA0
    cmpwi r3, -0x1
    bne lbl_fn_806C6750_00001DBC
    li r3, 0x0
    b lbl_fn_806C6750_00001DEC
lbl_fn_806C6750_00001DBC:
    mr r3, r27
    addi r4, r30, 0x19c
    li r5, -0x1
    bl fn_806FEAA0
    cmpwi r3, -0x1
    bne lbl_fn_806C6750_00001DDC
    li r3, 0x0
    b lbl_fn_806C6750_00001DEC
lbl_fn_806C6750_00001DDC:
    mr r3, r27
    addi r4, r30, 0x188
    li r5, 0x0
    bl fn_806FEAA0
lbl_fn_806C6750_00001DEC:
    cmpwi r3, 0x0
    bne lbl_fn_806C6750_00001E18
    mr r3, r29
    mr r4, r27
    bl fn_806FFD80
    mr r5, r24
    addi r4, r30, 0x2240
    li r3, 0x400
    crclr 6
    bl fn_806A76B0
    subi r24, r24, 0x1
lbl_fn_806C6750_00001E18:
    addi r24, r24, 0x1
lbl_fn_806C6750_00001E1C:
    mr r3, r29
    bl fn_806FFEB0
    cmpw r24, r3
    blt lbl_fn_806C6750_00001D50
    lis r31, lbl_80860898@ha
    lwz r24, lbl_80860898@l(r31)
    lwz r0, 0x744(r24)
    cmpwi r0, 0x16
    beq lbl_fn_806C6750_00001E5C
    cmpwi r0, 0x2
    beq lbl_fn_806C6750_000031B8
    cmpwi r0, 0x4
    beq lbl_fn_806C6750_00003404
    cmpwi r0, 0xc
    beq lbl_fn_806C6750_000039D8
    b lbl_fn_806C6750_00003BA4
lbl_fn_806C6750_00001E5C:
    li r25, 0x0
    b lbl_fn_806C6750_00001EC0
lbl_fn_806C6750_00001E64:
    mr r3, r29
    mr r4, r25
    bl fn_806FFEA0
    lwz r24, lbl_80860898@l(r31)
    mr r27, r3
    lwz r0, 0x6fc(r24)
    cmpwi r0, 0x0
    beq lbl_fn_806C6750_00001EBC
    bl fn_806FEC90
    lwz r0, 0x6fc(r24)
    cmplw r0, r3
    bne lbl_fn_806C6750_00001EBC
    lwz r24, lbl_80860898@l(r31)
    lhz r0, 0x6f8(r24)
    cmpwi r0, 0x0
    beq lbl_fn_806C6750_00001EBC
    mr r3, r27
    bl fn_806FECA0
    lhz r0, 0x6f8(r24)
    clrlwi r3, r3, 16
    cmplw r0, r3
    beq lbl_fn_806C6750_00001ED0
lbl_fn_806C6750_00001EBC:
    addi r25, r25, 0x1
lbl_fn_806C6750_00001EC0:
    mr r3, r29
    bl fn_806FFEB0
    cmpw r25, r3
    blt lbl_fn_806C6750_00001E64
lbl_fn_806C6750_00001ED0:
    mr r3, r29
    bl fn_806FFEB0
    cmpw r25, r3
    bge lbl_fn_806C6750_00003194
    addi r3, r1, 0x48
    li r4, 0x0
    li r5, 0x30
    bl memset
    lis r26, lbl_80860898@ha
    li r0, 0xff
    lwz r5, lbl_80860898@l(r26)
    mr r3, r27
    lwz r4, 0x7a8(r5)
    stw r4, 0x48(r1)
    stb r0, 0x5e(r1)
    lwz r0, 0x6fc(r5)
    stw r0, 0x4c(r1)
    lhz r0, 0x6f8(r5)
    sth r0, 0x54(r1)
    bl fn_806FED00
    stw r3, 0x50(r1)
    mr r3, r27
    bl fn_806FED10
    sth r3, 0x56(r1)
    mr r3, r27
    bl fn_806FECC0
    lwz r4, lbl_80860898@l(r26)
    li r5, 0x4
    stb r3, 0x5f(r1)
    addi r3, r1, 0x70
    addi r4, r4, 0x8ec
    bl fn_806A9CA0
    lwz r8, lbl_80860898@l(r26)
    lbz r0, 0x15(r8)
    cmpwi r0, 0x0
    bne lbl_fn_806C6750_000023C4
    lwz r4, 0x58(r8)
    cmpwi r4, 0x20
    beq lbl_fn_806C6750_000023BC
    cmpwi r4, 0x0
    ble lbl_fn_806C6750_00002348
    cmpwi r4, 0x8
    ble lbl_fn_806C6750_000022C4
    cmpwi r4, -0x1
    li r0, 0x0
    ble lbl_fn_806C6750_00001F8C
    li r0, 0x1
lbl_fn_806C6750_00001F8C:
    cmpwi r0, 0x0
    beq lbl_fn_806C6750_000022C4
    lis r5, lbl_80860898@ha
    subi r0, r4, 0x1
    mulli r3, r4, 0x30
    lwz r5, lbl_80860898@l(r5)
    srwi r0, r0, 3
    add r3, r5, r3
    mtctr r0
    cmpwi r4, 0x8
    ble lbl_fn_806C6750_000022C4
lbl_fn_806C6750_00001FB8:
    lwz r0, 0x34(r3)
    lwz r5, 0x30(r3)
    stw r5, 0x60(r3)
    stw r0, 0x64(r3)
    lwz r0, 0x3c(r3)
    lwz r5, 0x38(r3)
    stw r5, 0x68(r3)
    stw r0, 0x6c(r3)
    lwz r0, 0x44(r3)
    lwz r5, 0x40(r3)
    stw r5, 0x70(r3)
    stw r0, 0x74(r3)
    lwz r0, 0x4c(r3)
    lwz r5, 0x48(r3)
    stw r5, 0x78(r3)
    stw r0, 0x7c(r3)
    lwz r0, 0x54(r3)
    lwz r5, 0x50(r3)
    stw r5, 0x80(r3)
    stw r0, 0x84(r3)
    lwz r0, 0x5c(r3)
    lwz r5, 0x58(r3)
    stw r5, 0x88(r3)
    stw r0, 0x8c(r3)
    lwz r0, 0x4(r3)
    lwz r5, 0x0(r3)
    stw r5, 0x30(r3)
    stw r0, 0x34(r3)
    lwz r0, 0xc(r3)
    lwz r5, 0x8(r3)
    stw r5, 0x38(r3)
    stw r0, 0x3c(r3)
    lwz r0, 0x14(r3)
    lwz r5, 0x10(r3)
    stw r5, 0x40(r3)
    stw r0, 0x44(r3)
    lwz r0, 0x1c(r3)
    lwz r5, 0x18(r3)
    stw r5, 0x48(r3)
    stw r0, 0x4c(r3)
    lwz r0, 0x24(r3)
    lwz r5, 0x20(r3)
    stw r5, 0x50(r3)
    stw r0, 0x54(r3)
    lwz r0, 0x2c(r3)
    lwz r5, 0x28(r3)
    stw r5, 0x58(r3)
    stw r0, 0x5c(r3)
    lwz r0, -0x2c(r3)
    lwz r5, -0x30(r3)
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, -0x24(r3)
    lwz r5, -0x28(r3)
    stw r5, 0x8(r3)
    stw r0, 0xc(r3)
    lwz r0, -0x1c(r3)
    lwz r5, -0x20(r3)
    stw r5, 0x10(r3)
    stw r0, 0x14(r3)
    lwz r0, -0x14(r3)
    lwz r5, -0x18(r3)
    stw r5, 0x18(r3)
    stw r0, 0x1c(r3)
    lwz r0, -0xc(r3)
    lwz r5, -0x10(r3)
    stw r5, 0x20(r3)
    stw r0, 0x24(r3)
    lwz r0, -0x4(r3)
    lwz r5, -0x8(r3)
    stw r5, 0x28(r3)
    stw r0, 0x2c(r3)
    lwz r0, -0x5c(r3)
    lwz r5, -0x60(r3)
    stw r5, -0x30(r3)
    stw r0, -0x2c(r3)
    lwz r0, -0x54(r3)
    lwz r5, -0x58(r3)
    stw r5, -0x28(r3)
    stw r0, -0x24(r3)
    lwz r0, -0x4c(r3)
    lwz r5, -0x50(r3)
    stw r5, -0x20(r3)
    stw r0, -0x1c(r3)
    lwz r0, -0x44(r3)
    lwz r5, -0x48(r3)
    stw r5, -0x18(r3)
    stw r0, -0x14(r3)
    lwz r0, -0x3c(r3)
    lwz r5, -0x40(r3)
    stw r5, -0x10(r3)
    stw r0, -0xc(r3)
    lwz r0, -0x34(r3)
    lwz r5, -0x38(r3)
    stw r5, -0x8(r3)
    stw r0, -0x4(r3)
    lwz r0, -0x8c(r3)
    lwz r5, -0x90(r3)
    stw r5, -0x60(r3)
    stw r0, -0x5c(r3)
    lwz r0, -0x84(r3)
    lwz r5, -0x88(r3)
    stw r5, -0x58(r3)
    stw r0, -0x54(r3)
    lwz r0, -0x7c(r3)
    lwz r5, -0x80(r3)
    stw r5, -0x50(r3)
    stw r0, -0x4c(r3)
    lwz r0, -0x74(r3)
    lwz r5, -0x78(r3)
    stw r5, -0x48(r3)
    stw r0, -0x44(r3)
    lwz r0, -0x6c(r3)
    lwz r5, -0x70(r3)
    stw r5, -0x40(r3)
    stw r0, -0x3c(r3)
    lwz r0, -0x64(r3)
    lwz r5, -0x68(r3)
    stw r5, -0x38(r3)
    stw r0, -0x34(r3)
    lwz r0, -0xbc(r3)
    subi r4, r4, 0x8
    lwz r5, -0xc0(r3)
    stw r5, -0x90(r3)
    stw r0, -0x8c(r3)
    lwz r0, -0xb4(r3)
    lwz r5, -0xb8(r3)
    stw r5, -0x88(r3)
    stw r0, -0x84(r3)
    lwz r0, -0xac(r3)
    lwz r5, -0xb0(r3)
    stw r5, -0x80(r3)
    stw r0, -0x7c(r3)
    lwz r0, -0xa4(r3)
    lwz r5, -0xa8(r3)
    stw r5, -0x78(r3)
    stw r0, -0x74(r3)
    lwz r0, -0x9c(r3)
    lwz r5, -0xa0(r3)
    stw r5, -0x70(r3)
    stw r0, -0x6c(r3)
    lwz r0, -0x94(r3)
    lwz r5, -0x98(r3)
    stw r5, -0x68(r3)
    stw r0, -0x64(r3)
    lwz r0, -0xec(r3)
    lwz r5, -0xf0(r3)
    stw r5, -0xc0(r3)
    stw r0, -0xbc(r3)
    lwz r0, -0xe4(r3)
    lwz r5, -0xe8(r3)
    stw r5, -0xb8(r3)
    stw r0, -0xb4(r3)
    lwz r0, -0xdc(r3)
    lwz r5, -0xe0(r3)
    stw r5, -0xb0(r3)
    stw r0, -0xac(r3)
    lwz r0, -0xd4(r3)
    lwz r5, -0xd8(r3)
    stw r5, -0xa8(r3)
    stw r0, -0xa4(r3)
    lwz r0, -0xcc(r3)
    lwz r5, -0xd0(r3)
    stw r5, -0xa0(r3)
    stw r0, -0x9c(r3)
    lwz r0, -0xc4(r3)
    lwz r5, -0xc8(r3)
    stw r5, -0x98(r3)
    stw r0, -0x94(r3)
    lwz r0, -0x11c(r3)
    lwz r5, -0x120(r3)
    stw r5, -0xf0(r3)
    stw r0, -0xec(r3)
    lwz r0, -0x114(r3)
    lwz r5, -0x118(r3)
    stw r5, -0xe8(r3)
    stw r0, -0xe4(r3)
    lwz r0, -0x10c(r3)
    lwz r5, -0x110(r3)
    stw r5, -0xe0(r3)
    stw r0, -0xdc(r3)
    lwz r0, -0x104(r3)
    lwz r5, -0x108(r3)
    stw r5, -0xd8(r3)
    stw r0, -0xd4(r3)
    lwz r0, -0xfc(r3)
    lwz r5, -0x100(r3)
    stw r5, -0xd0(r3)
    stw r0, -0xcc(r3)
    lwz r0, -0xf4(r3)
    lwz r5, -0xf8(r3)
    stw r5, -0xc8(r3)
    stw r0, -0xc4(r3)
    subi r3, r3, 0x180
    bdnz lbl_fn_806C6750_00001FB8
lbl_fn_806C6750_000022C4:
    lis r3, lbl_80860898@ha
    mulli r0, r4, 0x30
    lwz r3, lbl_80860898@l(r3)
    add r5, r3, r0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_806C6750_00002348
lbl_fn_806C6750_000022E0:
    lwz r0, 0x34(r5)
    lwz r3, 0x30(r5)
    stw r3, 0x60(r5)
    stw r0, 0x64(r5)
    lwz r0, 0x3c(r5)
    lwz r3, 0x38(r5)
    stw r3, 0x68(r5)
    stw r0, 0x6c(r5)
    lwz r0, 0x44(r5)
    lwz r3, 0x40(r5)
    stw r3, 0x70(r5)
    stw r0, 0x74(r5)
    lwz r0, 0x4c(r5)
    lwz r3, 0x48(r5)
    stw r3, 0x78(r5)
    stw r0, 0x7c(r5)
    lwz r0, 0x54(r5)
    lwz r3, 0x50(r5)
    stw r3, 0x80(r5)
    stw r0, 0x84(r5)
    lwz r0, 0x5c(r5)
    lwz r3, 0x58(r5)
    stw r3, 0x88(r5)
    stw r0, 0x8c(r5)
    subi r5, r5, 0x30
    bdnz lbl_fn_806C6750_000022E0
lbl_fn_806C6750_00002348:
    lis r3, lbl_80860898@ha
    lwz r0, 0x4c(r1)
    lwz r4, lbl_80860898@l(r3)
    lwz r3, 0x48(r1)
    stw r3, 0x60(r4)
    stw r0, 0x64(r4)
    lwz r0, 0x54(r1)
    lwz r3, 0x50(r1)
    stw r3, 0x68(r4)
    stw r0, 0x6c(r4)
    lwz r0, 0x5c(r1)
    lwz r3, 0x58(r1)
    stw r3, 0x70(r4)
    stw r0, 0x74(r4)
    lwz r0, 0x64(r1)
    lwz r3, 0x60(r1)
    stw r3, 0x78(r4)
    stw r0, 0x7c(r4)
    lwz r0, 0x6c(r1)
    lwz r3, 0x68(r1)
    stw r3, 0x80(r4)
    stw r0, 0x84(r4)
    lwz r0, 0x74(r1)
    lwz r3, 0x70(r1)
    stw r3, 0x88(r4)
    stw r0, 0x8c(r4)
    lwz r3, 0x58(r4)
    addi r0, r3, 0x1
    stw r0, 0x58(r4)
lbl_fn_806C6750_000023BC:
    bl fn_806CC020
    b lbl_fn_806C6750_00003BA4
lbl_fn_806C6750_000023C4:
    lbz r0, 0x15(r8)
    cmplwi r0, 0x1
    bne lbl_fn_806C6750_00002834
    lwz r4, 0x58(r8)
    cmpwi r4, 0x20
    beq lbl_fn_806C6750_0000282C
    cmpwi r4, 0x0
    ble lbl_fn_806C6750_000027B8
    cmpwi r4, 0x8
    ble lbl_fn_806C6750_00002734
    cmpwi r4, -0x1
    li r0, 0x0
    ble lbl_fn_806C6750_000023FC
    li r0, 0x1
lbl_fn_806C6750_000023FC:
    cmpwi r0, 0x0
    beq lbl_fn_806C6750_00002734
    lis r5, lbl_80860898@ha
    subi r0, r4, 0x1
    mulli r3, r4, 0x30
    lwz r5, lbl_80860898@l(r5)
    srwi r0, r0, 3
    add r3, r5, r3
    mtctr r0
    cmpwi r4, 0x8
    ble lbl_fn_806C6750_00002734
lbl_fn_806C6750_00002428:
    lwz r0, 0x34(r3)
    lwz r5, 0x30(r3)
    stw r5, 0x60(r3)
    stw r0, 0x64(r3)
    lwz r0, 0x3c(r3)
    lwz r5, 0x38(r3)
    stw r5, 0x68(r3)
    stw r0, 0x6c(r3)
    lwz r0, 0x44(r3)
    lwz r5, 0x40(r3)
    stw r5, 0x70(r3)
    stw r0, 0x74(r3)
    lwz r0, 0x4c(r3)
    lwz r5, 0x48(r3)
    stw r5, 0x78(r3)
    stw r0, 0x7c(r3)
    lwz r0, 0x54(r3)
    lwz r5, 0x50(r3)
    stw r5, 0x80(r3)
    stw r0, 0x84(r3)
    lwz r0, 0x5c(r3)
    lwz r5, 0x58(r3)
    stw r5, 0x88(r3)
    stw r0, 0x8c(r3)
    lwz r0, 0x4(r3)
    lwz r5, 0x0(r3)
    stw r5, 0x30(r3)
    stw r0, 0x34(r3)
    lwz r0, 0xc(r3)
    lwz r5, 0x8(r3)
    stw r5, 0x38(r3)
    stw r0, 0x3c(r3)
    lwz r0, 0x14(r3)
    lwz r5, 0x10(r3)
    stw r5, 0x40(r3)
    stw r0, 0x44(r3)
    lwz r0, 0x1c(r3)
    lwz r5, 0x18(r3)
    stw r5, 0x48(r3)
    stw r0, 0x4c(r3)
    lwz r0, 0x24(r3)
    lwz r5, 0x20(r3)
    stw r5, 0x50(r3)
    stw r0, 0x54(r3)
    lwz r0, 0x2c(r3)
    lwz r5, 0x28(r3)
    stw r5, 0x58(r3)
    stw r0, 0x5c(r3)
    lwz r0, -0x2c(r3)
    lwz r5, -0x30(r3)
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, -0x24(r3)
    lwz r5, -0x28(r3)
    stw r5, 0x8(r3)
    stw r0, 0xc(r3)
    lwz r0, -0x1c(r3)
    lwz r5, -0x20(r3)
    stw r5, 0x10(r3)
    stw r0, 0x14(r3)
    lwz r0, -0x14(r3)
    lwz r5, -0x18(r3)
    stw r5, 0x18(r3)
    stw r0, 0x1c(r3)
    lwz r0, -0xc(r3)
    lwz r5, -0x10(r3)
    stw r5, 0x20(r3)
    stw r0, 0x24(r3)
    lwz r0, -0x4(r3)
    lwz r5, -0x8(r3)
    stw r5, 0x28(r3)
    stw r0, 0x2c(r3)
    lwz r0, -0x5c(r3)
    lwz r5, -0x60(r3)
    stw r5, -0x30(r3)
    stw r0, -0x2c(r3)
    lwz r0, -0x54(r3)
    lwz r5, -0x58(r3)
    stw r5, -0x28(r3)
    stw r0, -0x24(r3)
    lwz r0, -0x4c(r3)
    lwz r5, -0x50(r3)
    stw r5, -0x20(r3)
    stw r0, -0x1c(r3)
    lwz r0, -0x44(r3)
    lwz r5, -0x48(r3)
    stw r5, -0x18(r3)
    stw r0, -0x14(r3)
    lwz r0, -0x3c(r3)
    lwz r5, -0x40(r3)
    stw r5, -0x10(r3)
    stw r0, -0xc(r3)
    lwz r0, -0x34(r3)
    lwz r5, -0x38(r3)
    stw r5, -0x8(r3)
    stw r0, -0x4(r3)
    lwz r0, -0x8c(r3)
    lwz r5, -0x90(r3)
    stw r5, -0x60(r3)
    stw r0, -0x5c(r3)
    lwz r0, -0x84(r3)
    lwz r5, -0x88(r3)
    stw r5, -0x58(r3)
    stw r0, -0x54(r3)
    lwz r0, -0x7c(r3)
    lwz r5, -0x80(r3)
    stw r5, -0x50(r3)
    stw r0, -0x4c(r3)
    lwz r0, -0x74(r3)
    lwz r5, -0x78(r3)
    stw r5, -0x48(r3)
    stw r0, -0x44(r3)
    lwz r0, -0x6c(r3)
    lwz r5, -0x70(r3)
    stw r5, -0x40(r3)
    stw r0, -0x3c(r3)
    lwz r0, -0x64(r3)
    lwz r5, -0x68(r3)
    stw r5, -0x38(r3)
    stw r0, -0x34(r3)
    lwz r0, -0xbc(r3)
    subi r4, r4, 0x8
    lwz r5, -0xc0(r3)
    stw r5, -0x90(r3)
    stw r0, -0x8c(r3)
    lwz r0, -0xb4(r3)
    lwz r5, -0xb8(r3)
    stw r5, -0x88(r3)
    stw r0, -0x84(r3)
    lwz r0, -0xac(r3)
    lwz r5, -0xb0(r3)
    stw r5, -0x80(r3)
    stw r0, -0x7c(r3)
    lwz r0, -0xa4(r3)
    lwz r5, -0xa8(r3)
    stw r5, -0x78(r3)
    stw r0, -0x74(r3)
    lwz r0, -0x9c(r3)
    lwz r5, -0xa0(r3)
    stw r5, -0x70(r3)
    stw r0, -0x6c(r3)
    lwz r0, -0x94(r3)
    lwz r5, -0x98(r3)
    stw r5, -0x68(r3)
    stw r0, -0x64(r3)
    lwz r0, -0xec(r3)
    lwz r5, -0xf0(r3)
    stw r5, -0xc0(r3)
    stw r0, -0xbc(r3)
    lwz r0, -0xe4(r3)
    lwz r5, -0xe8(r3)
    stw r5, -0xb8(r3)
    stw r0, -0xb4(r3)
    lwz r0, -0xdc(r3)
    lwz r5, -0xe0(r3)
    stw r5, -0xb0(r3)
    stw r0, -0xac(r3)
    lwz r0, -0xd4(r3)
    lwz r5, -0xd8(r3)
    stw r5, -0xa8(r3)
    stw r0, -0xa4(r3)
    lwz r0, -0xcc(r3)
    lwz r5, -0xd0(r3)
    stw r5, -0xa0(r3)
    stw r0, -0x9c(r3)
    lwz r0, -0xc4(r3)
    lwz r5, -0xc8(r3)
    stw r5, -0x98(r3)
    stw r0, -0x94(r3)
    lwz r0, -0x11c(r3)
    lwz r5, -0x120(r3)
    stw r5, -0xf0(r3)
    stw r0, -0xec(r3)
    lwz r0, -0x114(r3)
    lwz r5, -0x118(r3)
    stw r5, -0xe8(r3)
    stw r0, -0xe4(r3)
    lwz r0, -0x10c(r3)
    lwz r5, -0x110(r3)
    stw r5, -0xe0(r3)
    stw r0, -0xdc(r3)
    lwz r0, -0x104(r3)
    lwz r5, -0x108(r3)
    stw r5, -0xd8(r3)
    stw r0, -0xd4(r3)
    lwz r0, -0xfc(r3)
    lwz r5, -0x100(r3)
    stw r5, -0xd0(r3)
    stw r0, -0xcc(r3)
    lwz r0, -0xf4(r3)
    lwz r5, -0xf8(r3)
    stw r5, -0xc8(r3)
    stw r0, -0xc4(r3)
    subi r3, r3, 0x180
    bdnz lbl_fn_806C6750_00002428
lbl_fn_806C6750_00002734:
    lis r3, lbl_80860898@ha
    mulli r0, r4, 0x30
    lwz r3, lbl_80860898@l(r3)
    add r5, r3, r0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_806C6750_000027B8
lbl_fn_806C6750_00002750:
    lwz r0, 0x34(r5)
    lwz r3, 0x30(r5)
    stw r3, 0x60(r5)
    stw r0, 0x64(r5)
    lwz r0, 0x3c(r5)
    lwz r3, 0x38(r5)
    stw r3, 0x68(r5)
    stw r0, 0x6c(r5)
    lwz r0, 0x44(r5)
    lwz r3, 0x40(r5)
    stw r3, 0x70(r5)
    stw r0, 0x74(r5)
    lwz r0, 0x4c(r5)
    lwz r3, 0x48(r5)
    stw r3, 0x78(r5)
    stw r0, 0x7c(r5)
    lwz r0, 0x54(r5)
    lwz r3, 0x50(r5)
    stw r3, 0x80(r5)
    stw r0, 0x84(r5)
    lwz r0, 0x5c(r5)
    lwz r3, 0x58(r5)
    stw r3, 0x88(r5)
    stw r0, 0x8c(r5)
    subi r5, r5, 0x30
    bdnz lbl_fn_806C6750_00002750
lbl_fn_806C6750_000027B8:
    lis r3, lbl_80860898@ha
    lwz r0, 0x4c(r1)
    lwz r4, lbl_80860898@l(r3)
    lwz r3, 0x48(r1)
    stw r3, 0x60(r4)
    stw r0, 0x64(r4)
    lwz r0, 0x54(r1)
    lwz r3, 0x50(r1)
    stw r3, 0x68(r4)
    stw r0, 0x6c(r4)
    lwz r0, 0x5c(r1)
    lwz r3, 0x58(r1)
    stw r3, 0x70(r4)
    stw r0, 0x74(r4)
    lwz r0, 0x64(r1)
    lwz r3, 0x60(r1)
    stw r3, 0x78(r4)
    stw r0, 0x7c(r4)
    lwz r0, 0x6c(r1)
    lwz r3, 0x68(r1)
    stw r3, 0x80(r4)
    stw r0, 0x84(r4)
    lwz r0, 0x74(r1)
    lwz r3, 0x70(r1)
    stw r3, 0x88(r4)
    stw r0, 0x8c(r4)
    lwz r3, 0x58(r4)
    addi r0, r3, 0x1
    stw r0, 0x58(r4)
lbl_fn_806C6750_0000282C:
    bl fn_806CC020
    b lbl_fn_806C6750_00003BA4
lbl_fn_806C6750_00002834:
    lbz r0, 0x15(r8)
    cmplwi r0, 0x2
    bne lbl_fn_806C6750_00002D24
    lwz r0, 0x58(r8)
    cmpwi r0, 0x20
    bne lbl_fn_806C6750_00002854
    li r5, 0xff
    b lbl_fn_806C6750_000028B0
lbl_fn_806C6750_00002854:
    li r5, 0x0
    nop
lbl_fn_806C6750_0000285C:
    lwz r7, 0x58(r8)
    mr r6, r8
    clrlwi r3, r5, 24
    li r4, 0x0
    mtctr r7
    cmpwi r7, 0x0
    ble lbl_fn_806C6750_00002894
    nop
lbl_fn_806C6750_0000287C:
    lbz r0, 0x76(r6)
    cmplw r3, r0
    beq lbl_fn_806C6750_00002894
    addi r6, r6, 0x30
    addi r4, r4, 0x1
    bdnz lbl_fn_806C6750_0000287C
lbl_fn_806C6750_00002894:
    cmpw r4, r7
    bne lbl_fn_806C6750_000028A0
    b lbl_fn_806C6750_000028B0
lbl_fn_806C6750_000028A0:
    addi r5, r5, 0x1
    cmplwi r5, 0x20
    blt lbl_fn_806C6750_0000285C
    li r5, 0xff
lbl_fn_806C6750_000028B0:
    stb r5, 0x5e(r1)
    lwz r4, 0x58(r8)
    cmpwi r4, 0x20
    beq lbl_fn_806C6750_00002D1C
    cmpwi r4, 0x0
    ble lbl_fn_806C6750_00002CA8
    cmpwi r4, 0x8
    ble lbl_fn_806C6750_00002C24
    lis r3, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r3)
    lwz r3, 0x58(r3)
    cmpwi r3, -0x1
    ble lbl_fn_806C6750_000028EC
    li r0, 0x1
lbl_fn_806C6750_000028EC:
    cmpwi r0, 0x0
    beq lbl_fn_806C6750_00002C24
    lis r5, lbl_80860898@ha
    subi r0, r4, 0x1
    mulli r3, r4, 0x30
    lwz r5, lbl_80860898@l(r5)
    srwi r0, r0, 3
    add r3, r5, r3
    mtctr r0
    cmpwi r4, 0x8
    ble lbl_fn_806C6750_00002C24
lbl_fn_806C6750_00002918:
    lwz r0, 0x34(r3)
    lwz r5, 0x30(r3)
    stw r5, 0x60(r3)
    stw r0, 0x64(r3)
    lwz r0, 0x3c(r3)
    lwz r5, 0x38(r3)
    stw r5, 0x68(r3)
    stw r0, 0x6c(r3)
    lwz r0, 0x44(r3)
    lwz r5, 0x40(r3)
    stw r5, 0x70(r3)
    stw r0, 0x74(r3)
    lwz r0, 0x4c(r3)
    lwz r5, 0x48(r3)
    stw r5, 0x78(r3)
    stw r0, 0x7c(r3)
    lwz r0, 0x54(r3)
    lwz r5, 0x50(r3)
    stw r5, 0x80(r3)
    stw r0, 0x84(r3)
    lwz r0, 0x5c(r3)
    lwz r5, 0x58(r3)
    stw r5, 0x88(r3)
    stw r0, 0x8c(r3)
    lwz r0, 0x4(r3)
    lwz r5, 0x0(r3)
    stw r5, 0x30(r3)
    stw r0, 0x34(r3)
    lwz r0, 0xc(r3)
    lwz r5, 0x8(r3)
    stw r5, 0x38(r3)
    stw r0, 0x3c(r3)
    lwz r0, 0x14(r3)
    lwz r5, 0x10(r3)
    stw r5, 0x40(r3)
    stw r0, 0x44(r3)
    lwz r0, 0x1c(r3)
    lwz r5, 0x18(r3)
    stw r5, 0x48(r3)
    stw r0, 0x4c(r3)
    lwz r0, 0x24(r3)
    lwz r5, 0x20(r3)
    stw r5, 0x50(r3)
    stw r0, 0x54(r3)
    lwz r0, 0x2c(r3)
    lwz r5, 0x28(r3)
    stw r5, 0x58(r3)
    stw r0, 0x5c(r3)
    lwz r0, -0x2c(r3)
    lwz r5, -0x30(r3)
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, -0x24(r3)
    lwz r5, -0x28(r3)
    stw r5, 0x8(r3)
    stw r0, 0xc(r3)
    lwz r0, -0x1c(r3)
    lwz r5, -0x20(r3)
    stw r5, 0x10(r3)
    stw r0, 0x14(r3)
    lwz r0, -0x14(r3)
    lwz r5, -0x18(r3)
    stw r5, 0x18(r3)
    stw r0, 0x1c(r3)
    lwz r0, -0xc(r3)
    lwz r5, -0x10(r3)
    stw r5, 0x20(r3)
    stw r0, 0x24(r3)
    lwz r0, -0x4(r3)
    lwz r5, -0x8(r3)
    stw r5, 0x28(r3)
    stw r0, 0x2c(r3)
    lwz r0, -0x5c(r3)
    lwz r5, -0x60(r3)
    stw r5, -0x30(r3)
    stw r0, -0x2c(r3)
    lwz r0, -0x54(r3)
    lwz r5, -0x58(r3)
    stw r5, -0x28(r3)
    stw r0, -0x24(r3)
    lwz r0, -0x4c(r3)
    lwz r5, -0x50(r3)
    stw r5, -0x20(r3)
    stw r0, -0x1c(r3)
    lwz r0, -0x44(r3)
    lwz r5, -0x48(r3)
    stw r5, -0x18(r3)
    stw r0, -0x14(r3)
    lwz r0, -0x3c(r3)
    lwz r5, -0x40(r3)
    stw r5, -0x10(r3)
    stw r0, -0xc(r3)
    lwz r0, -0x34(r3)
    lwz r5, -0x38(r3)
    stw r5, -0x8(r3)
    stw r0, -0x4(r3)
    lwz r0, -0x8c(r3)
    lwz r5, -0x90(r3)
    stw r5, -0x60(r3)
    stw r0, -0x5c(r3)
    lwz r0, -0x84(r3)
    lwz r5, -0x88(r3)
    stw r5, -0x58(r3)
    stw r0, -0x54(r3)
    lwz r0, -0x7c(r3)
    lwz r5, -0x80(r3)
    stw r5, -0x50(r3)
    stw r0, -0x4c(r3)
    lwz r0, -0x74(r3)
    lwz r5, -0x78(r3)
    stw r5, -0x48(r3)
    stw r0, -0x44(r3)
    lwz r0, -0x6c(r3)
    lwz r5, -0x70(r3)
    stw r5, -0x40(r3)
    stw r0, -0x3c(r3)
    lwz r0, -0x64(r3)
    lwz r5, -0x68(r3)
    stw r5, -0x38(r3)
    stw r0, -0x34(r3)
    lwz r0, -0xbc(r3)
    subi r4, r4, 0x8
    lwz r5, -0xc0(r3)
    stw r5, -0x90(r3)
    stw r0, -0x8c(r3)
    lwz r0, -0xb4(r3)
    lwz r5, -0xb8(r3)
    stw r5, -0x88(r3)
    stw r0, -0x84(r3)
    lwz r0, -0xac(r3)
    lwz r5, -0xb0(r3)
    stw r5, -0x80(r3)
    stw r0, -0x7c(r3)
    lwz r0, -0xa4(r3)
    lwz r5, -0xa8(r3)
    stw r5, -0x78(r3)
    stw r0, -0x74(r3)
    lwz r0, -0x9c(r3)
    lwz r5, -0xa0(r3)
    stw r5, -0x70(r3)
    stw r0, -0x6c(r3)
    lwz r0, -0x94(r3)
    lwz r5, -0x98(r3)
    stw r5, -0x68(r3)
    stw r0, -0x64(r3)
    lwz r0, -0xec(r3)
    lwz r5, -0xf0(r3)
    stw r5, -0xc0(r3)
    stw r0, -0xbc(r3)
    lwz r0, -0xe4(r3)
    lwz r5, -0xe8(r3)
    stw r5, -0xb8(r3)
    stw r0, -0xb4(r3)
    lwz r0, -0xdc(r3)
    lwz r5, -0xe0(r3)
    stw r5, -0xb0(r3)
    stw r0, -0xac(r3)
    lwz r0, -0xd4(r3)
    lwz r5, -0xd8(r3)
    stw r5, -0xa8(r3)
    stw r0, -0xa4(r3)
    lwz r0, -0xcc(r3)
    lwz r5, -0xd0(r3)
    stw r5, -0xa0(r3)
    stw r0, -0x9c(r3)
    lwz r0, -0xc4(r3)
    lwz r5, -0xc8(r3)
    stw r5, -0x98(r3)
    stw r0, -0x94(r3)
    lwz r0, -0x11c(r3)
    lwz r5, -0x120(r3)
    stw r5, -0xf0(r3)
    stw r0, -0xec(r3)
    lwz r0, -0x114(r3)
    lwz r5, -0x118(r3)
    stw r5, -0xe8(r3)
    stw r0, -0xe4(r3)
    lwz r0, -0x10c(r3)
    lwz r5, -0x110(r3)
    stw r5, -0xe0(r3)
    stw r0, -0xdc(r3)
    lwz r0, -0x104(r3)
    lwz r5, -0x108(r3)
    stw r5, -0xd8(r3)
    stw r0, -0xd4(r3)
    lwz r0, -0xfc(r3)
    lwz r5, -0x100(r3)
    stw r5, -0xd0(r3)
    stw r0, -0xcc(r3)
    lwz r0, -0xf4(r3)
    lwz r5, -0xf8(r3)
    stw r5, -0xc8(r3)
    stw r0, -0xc4(r3)
    subi r3, r3, 0x180
    bdnz lbl_fn_806C6750_00002918
lbl_fn_806C6750_00002C24:
    lis r3, lbl_80860898@ha
    mulli r0, r4, 0x30
    lwz r3, lbl_80860898@l(r3)
    add r5, r3, r0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_806C6750_00002CA8
lbl_fn_806C6750_00002C40:
    lwz r0, 0x34(r5)
    lwz r3, 0x30(r5)
    stw r3, 0x60(r5)
    stw r0, 0x64(r5)
    lwz r0, 0x3c(r5)
    lwz r3, 0x38(r5)
    stw r3, 0x68(r5)
    stw r0, 0x6c(r5)
    lwz r0, 0x44(r5)
    lwz r3, 0x40(r5)
    stw r3, 0x70(r5)
    stw r0, 0x74(r5)
    lwz r0, 0x4c(r5)
    lwz r3, 0x48(r5)
    stw r3, 0x78(r5)
    stw r0, 0x7c(r5)
    lwz r0, 0x54(r5)
    lwz r3, 0x50(r5)
    stw r3, 0x80(r5)
    stw r0, 0x84(r5)
    lwz r0, 0x5c(r5)
    lwz r3, 0x58(r5)
    stw r3, 0x88(r5)
    stw r0, 0x8c(r5)
    subi r5, r5, 0x30
    bdnz lbl_fn_806C6750_00002C40
lbl_fn_806C6750_00002CA8:
    lis r3, lbl_80860898@ha
    lwz r0, 0x4c(r1)
    lwz r4, lbl_80860898@l(r3)
    lwz r3, 0x48(r1)
    stw r3, 0x60(r4)
    stw r0, 0x64(r4)
    lwz r0, 0x54(r1)
    lwz r3, 0x50(r1)
    stw r3, 0x68(r4)
    stw r0, 0x6c(r4)
    lwz r0, 0x5c(r1)
    lwz r3, 0x58(r1)
    stw r3, 0x70(r4)
    stw r0, 0x74(r4)
    lwz r0, 0x64(r1)
    lwz r3, 0x60(r1)
    stw r3, 0x78(r4)
    stw r0, 0x7c(r4)
    lwz r0, 0x6c(r1)
    lwz r3, 0x68(r1)
    stw r3, 0x80(r4)
    stw r0, 0x84(r4)
    lwz r0, 0x74(r1)
    lwz r3, 0x70(r1)
    stw r3, 0x88(r4)
    stw r0, 0x8c(r4)
    lwz r3, 0x58(r4)
    addi r0, r3, 0x1
    stw r0, 0x58(r4)
lbl_fn_806C6750_00002D1C:
    bl fn_806CC020
    b lbl_fn_806C6750_00003BA4
lbl_fn_806C6750_00002D24:
    lbz r0, 0x15(r8)
    cmplwi r0, 0x3
    bne lbl_fn_806C6750_00003BA4
    lwz r4, 0x58(r8)
    cmpwi r4, 0x20
    beq lbl_fn_806C6750_0000318C
    cmpwi r4, 0x0
    ble lbl_fn_806C6750_00003118
    cmpwi r4, 0x8
    ble lbl_fn_806C6750_00003094
    cmpwi r4, -0x1
    li r0, 0x0
    ble lbl_fn_806C6750_00002D5C
    li r0, 0x1
lbl_fn_806C6750_00002D5C:
    cmpwi r0, 0x0
    beq lbl_fn_806C6750_00003094
    lis r5, lbl_80860898@ha
    subi r0, r4, 0x1
    mulli r3, r4, 0x30
    lwz r5, lbl_80860898@l(r5)
    srwi r0, r0, 3
    add r3, r5, r3
    mtctr r0
    cmpwi r4, 0x8
    ble lbl_fn_806C6750_00003094
lbl_fn_806C6750_00002D88:
    lwz r0, 0x34(r3)
    lwz r5, 0x30(r3)
    stw r5, 0x60(r3)
    stw r0, 0x64(r3)
    lwz r0, 0x3c(r3)
    lwz r5, 0x38(r3)
    stw r5, 0x68(r3)
    stw r0, 0x6c(r3)
    lwz r0, 0x44(r3)
    lwz r5, 0x40(r3)
    stw r5, 0x70(r3)
    stw r0, 0x74(r3)
    lwz r0, 0x4c(r3)
    lwz r5, 0x48(r3)
    stw r5, 0x78(r3)
    stw r0, 0x7c(r3)
    lwz r0, 0x54(r3)
    lwz r5, 0x50(r3)
    stw r5, 0x80(r3)
    stw r0, 0x84(r3)
    lwz r0, 0x5c(r3)
    lwz r5, 0x58(r3)
    stw r5, 0x88(r3)
    stw r0, 0x8c(r3)
    lwz r0, 0x4(r3)
    lwz r5, 0x0(r3)
    stw r5, 0x30(r3)
    stw r0, 0x34(r3)
    lwz r0, 0xc(r3)
    lwz r5, 0x8(r3)
    stw r5, 0x38(r3)
    stw r0, 0x3c(r3)
    lwz r0, 0x14(r3)
    lwz r5, 0x10(r3)
    stw r5, 0x40(r3)
    stw r0, 0x44(r3)
    lwz r0, 0x1c(r3)
    lwz r5, 0x18(r3)
    stw r5, 0x48(r3)
    stw r0, 0x4c(r3)
    lwz r0, 0x24(r3)
    lwz r5, 0x20(r3)
    stw r5, 0x50(r3)
    stw r0, 0x54(r3)
    lwz r0, 0x2c(r3)
    lwz r5, 0x28(r3)
    stw r5, 0x58(r3)
    stw r0, 0x5c(r3)
    lwz r0, -0x2c(r3)
    lwz r5, -0x30(r3)
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, -0x24(r3)
    lwz r5, -0x28(r3)
    stw r5, 0x8(r3)
    stw r0, 0xc(r3)
    lwz r0, -0x1c(r3)
    lwz r5, -0x20(r3)
    stw r5, 0x10(r3)
    stw r0, 0x14(r3)
    lwz r0, -0x14(r3)
    lwz r5, -0x18(r3)
    stw r5, 0x18(r3)
    stw r0, 0x1c(r3)
    lwz r0, -0xc(r3)
    lwz r5, -0x10(r3)
    stw r5, 0x20(r3)
    stw r0, 0x24(r3)
    lwz r0, -0x4(r3)
    lwz r5, -0x8(r3)
    stw r5, 0x28(r3)
    stw r0, 0x2c(r3)
    lwz r0, -0x5c(r3)
    lwz r5, -0x60(r3)
    stw r5, -0x30(r3)
    stw r0, -0x2c(r3)
    lwz r0, -0x54(r3)
    lwz r5, -0x58(r3)
    stw r5, -0x28(r3)
    stw r0, -0x24(r3)
    lwz r0, -0x4c(r3)
    lwz r5, -0x50(r3)
    stw r5, -0x20(r3)
    stw r0, -0x1c(r3)
    lwz r0, -0x44(r3)
    lwz r5, -0x48(r3)
    stw r5, -0x18(r3)
    stw r0, -0x14(r3)
    lwz r0, -0x3c(r3)
    lwz r5, -0x40(r3)
    stw r5, -0x10(r3)
    stw r0, -0xc(r3)
    lwz r0, -0x34(r3)
    lwz r5, -0x38(r3)
    stw r5, -0x8(r3)
    stw r0, -0x4(r3)
    lwz r0, -0x8c(r3)
    lwz r5, -0x90(r3)
    stw r5, -0x60(r3)
    stw r0, -0x5c(r3)
    lwz r0, -0x84(r3)
    lwz r5, -0x88(r3)
    stw r5, -0x58(r3)
    stw r0, -0x54(r3)
    lwz r0, -0x7c(r3)
    lwz r5, -0x80(r3)
    stw r5, -0x50(r3)
    stw r0, -0x4c(r3)
    lwz r0, -0x74(r3)
    lwz r5, -0x78(r3)
    stw r5, -0x48(r3)
    stw r0, -0x44(r3)
    lwz r0, -0x6c(r3)
    lwz r5, -0x70(r3)
    stw r5, -0x40(r3)
    stw r0, -0x3c(r3)
    lwz r0, -0x64(r3)
    lwz r5, -0x68(r3)
    stw r5, -0x38(r3)
    stw r0, -0x34(r3)
    lwz r0, -0xbc(r3)
    subi r4, r4, 0x8
    lwz r5, -0xc0(r3)
    stw r5, -0x90(r3)
    stw r0, -0x8c(r3)
    lwz r0, -0xb4(r3)
    lwz r5, -0xb8(r3)
    stw r5, -0x88(r3)
    stw r0, -0x84(r3)
    lwz r0, -0xac(r3)
    lwz r5, -0xb0(r3)
    stw r5, -0x80(r3)
    stw r0, -0x7c(r3)
    lwz r0, -0xa4(r3)
    lwz r5, -0xa8(r3)
    stw r5, -0x78(r3)
    stw r0, -0x74(r3)
    lwz r0, -0x9c(r3)
    lwz r5, -0xa0(r3)
    stw r5, -0x70(r3)
    stw r0, -0x6c(r3)
    lwz r0, -0x94(r3)
    lwz r5, -0x98(r3)
    stw r5, -0x68(r3)
    stw r0, -0x64(r3)
    lwz r0, -0xec(r3)
    lwz r5, -0xf0(r3)
    stw r5, -0xc0(r3)
    stw r0, -0xbc(r3)
    lwz r0, -0xe4(r3)
    lwz r5, -0xe8(r3)
    stw r5, -0xb8(r3)
    stw r0, -0xb4(r3)
    lwz r0, -0xdc(r3)
    lwz r5, -0xe0(r3)
    stw r5, -0xb0(r3)
    stw r0, -0xac(r3)
    lwz r0, -0xd4(r3)
    lwz r5, -0xd8(r3)
    stw r5, -0xa8(r3)
    stw r0, -0xa4(r3)
    lwz r0, -0xcc(r3)
    lwz r5, -0xd0(r3)
    stw r5, -0xa0(r3)
    stw r0, -0x9c(r3)
    lwz r0, -0xc4(r3)
    lwz r5, -0xc8(r3)
    stw r5, -0x98(r3)
    stw r0, -0x94(r3)
    lwz r0, -0x11c(r3)
    lwz r5, -0x120(r3)
    stw r5, -0xf0(r3)
    stw r0, -0xec(r3)
    lwz r0, -0x114(r3)
    lwz r5, -0x118(r3)
    stw r5, -0xe8(r3)
    stw r0, -0xe4(r3)
    lwz r0, -0x10c(r3)
    lwz r5, -0x110(r3)
    stw r5, -0xe0(r3)
    stw r0, -0xdc(r3)
    lwz r0, -0x104(r3)
    lwz r5, -0x108(r3)
    stw r5, -0xd8(r3)
    stw r0, -0xd4(r3)
    lwz r0, -0xfc(r3)
    lwz r5, -0x100(r3)
    stw r5, -0xd0(r3)
    stw r0, -0xcc(r3)
    lwz r0, -0xf4(r3)
    lwz r5, -0xf8(r3)
    stw r5, -0xc8(r3)
    stw r0, -0xc4(r3)
    subi r3, r3, 0x180
    bdnz lbl_fn_806C6750_00002D88
lbl_fn_806C6750_00003094:
    lis r3, lbl_80860898@ha
    mulli r0, r4, 0x30
    lwz r3, lbl_80860898@l(r3)
    add r5, r3, r0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_806C6750_00003118
lbl_fn_806C6750_000030B0:
    lwz r0, 0x34(r5)
    lwz r3, 0x30(r5)
    stw r3, 0x60(r5)
    stw r0, 0x64(r5)
    lwz r0, 0x3c(r5)
    lwz r3, 0x38(r5)
    stw r3, 0x68(r5)
    stw r0, 0x6c(r5)
    lwz r0, 0x44(r5)
    lwz r3, 0x40(r5)
    stw r3, 0x70(r5)
    stw r0, 0x74(r5)
    lwz r0, 0x4c(r5)
    lwz r3, 0x48(r5)
    stw r3, 0x78(r5)
    stw r0, 0x7c(r5)
    lwz r0, 0x54(r5)
    lwz r3, 0x50(r5)
    stw r3, 0x80(r5)
    stw r0, 0x84(r5)
    lwz r0, 0x5c(r5)
    lwz r3, 0x58(r5)
    stw r3, 0x88(r5)
    stw r0, 0x8c(r5)
    subi r5, r5, 0x30
    bdnz lbl_fn_806C6750_000030B0
lbl_fn_806C6750_00003118:
    lis r3, lbl_80860898@ha
    lwz r0, 0x4c(r1)
    lwz r4, lbl_80860898@l(r3)
    lwz r3, 0x48(r1)
    stw r3, 0x60(r4)
    stw r0, 0x64(r4)
    lwz r0, 0x54(r1)
    lwz r3, 0x50(r1)
    stw r3, 0x68(r4)
    stw r0, 0x6c(r4)
    lwz r0, 0x5c(r1)
    lwz r3, 0x58(r1)
    stw r3, 0x70(r4)
    stw r0, 0x74(r4)
    lwz r0, 0x64(r1)
    lwz r3, 0x60(r1)
    stw r3, 0x78(r4)
    stw r0, 0x7c(r4)
    lwz r0, 0x6c(r1)
    lwz r3, 0x68(r1)
    stw r3, 0x80(r4)
    stw r0, 0x84(r4)
    lwz r0, 0x74(r1)
    lwz r3, 0x70(r1)
    stw r3, 0x88(r4)
    stw r0, 0x8c(r4)
    lwz r3, 0x58(r4)
    addi r0, r3, 0x1
    stw r0, 0x58(r4)
lbl_fn_806C6750_0000318C:
    bl fn_806CC020
    b lbl_fn_806C6750_00003BA4
lbl_fn_806C6750_00003194:
    lis r26, lbl_80860898@ha
    li r0, 0x2
    lwz r3, lbl_80860898@l(r26)
    stw r0, 0x708(r3)
    bl OSGetTime
    lwz r5, lbl_80860898@l(r26)
    stw r4, 0x714(r5)
    stw r3, 0x710(r5)
    b lbl_fn_806C6750_00003BA4
lbl_fn_806C6750_000031B8:
    li r3, 0x1
    bl fn_806C89D0
    bl fn_806C8BE0
    mr r3, r29
    bl fn_806FFEB0
    cmpwi r3, 0x0
    beq lbl_fn_806C6750_000033D4
    mr r3, r29
    li r4, 0x0
    bl fn_806FFEA0
    lwz r6, lbl_80860898@l(r31)
    mr r25, r3
    li r4, 0x0
    li r5, 0x30
    addi r3, r6, 0x660
    bl memset
    lwz r24, lbl_80860898@l(r31)
    mr r3, r25
    addi r4, r30, 0x188
    li r5, 0x0
    bl fn_806FEAA0
    stw r3, 0x660(r24)
    li r0, 0xff
    mr r3, r25
    lwz r4, lbl_80860898@l(r31)
    stb r0, 0x676(r4)
    lwz r24, lbl_80860898@l(r31)
    bl fn_806FEC90
    stw r3, 0x664(r24)
    mr r3, r25
    lwz r24, lbl_80860898@l(r31)
    bl fn_806FECA0
    sth r3, 0x66c(r24)
    mr r3, r25
    lwz r24, lbl_80860898@l(r31)
    bl fn_806FED00
    stw r3, 0x668(r24)
    mr r3, r25
    lwz r24, lbl_80860898@l(r31)
    bl fn_806FED10
    sth r3, 0x66e(r24)
    mr r3, r25
    lwz r24, lbl_80860898@l(r31)
    bl fn_806FECC0
    stb r3, 0x677(r24)
    li r0, 0x3
    lwz r3, lbl_80860898@l(r31)
    stb r0, 0x14(r3)
    lwz r24, lbl_80860898@l(r31)
    lwz r0, 0x704(r24)
    cmpwi r0, 0x0
    bne lbl_fn_806C6750_000032BC
    lwz r3, 0x7b4(r24)
    li r0, 0x0
    lis r10, fn_806C6750@ha
    li r6, 0x0
    stw r0, 0x8(r1)
    mr r4, r3
    addi r10, r10, fn_806C6750@l
    li r7, 0x14
    lwz r5, 0x7b8(r24)
    li r8, 0x1
    li r9, 0x0
    bl fn_806FF920
    stw r3, 0x704(r24)
lbl_fn_806C6750_000032BC:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r0, 0x704(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C6750_000032E0
    li r3, 0x5
    bl fn_806C5EB0
    cmpwi r3, 0x0
    bne lbl_fn_806C6750_00003BA4
lbl_fn_806C6750_000032E0:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r28, 0x744(r3)
    cmpwi r28, 0x3
    beq lbl_fn_806C6750_00003394
    lis r27, lbl_80860890@ha
    addi r26, r27, lbl_80860890@l
    lwz r29, lbl_80860890@l(r27)
    lwz r31, 0x4(r26)
    bl OSGetTime
    stw r4, 0x4(r26)
    lis r26, 0x1062
    lis r6, 0x8000
    subfc r4, r31, r4
    stw r3, lbl_80860890@l(r27)
    addi r7, r26, 0x4dd3
    subfe r3, r29, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r26, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r28, 2
    lwz r8, 0xc(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r30, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806C6750_00003394:
    lis r26, lbl_80860898@ha
    li r0, 0x3
    lwz r3, lbl_80860898@l(r26)
    li r4, 0x0
    stw r0, 0x744(r3)
    lwz r3, lbl_80860898@l(r26)
    lwz r3, 0x660(r3)
    bl fn_806C05F0
    lwz r4, lbl_80860898@l(r26)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806C6750_000033CC
    bl fn_806C5EB0
    b lbl_fn_806C6750_00003BA4
lbl_fn_806C6750_000033CC:
    bl fn_806C5C10
    b lbl_fn_806C6750_00003BA4
lbl_fn_806C6750_000033D4:
    lwz r3, lbl_80860898@l(r31)
    li r0, 0x2
    stw r0, 0x708(r3)
    bl OSGetTime
    lwz r6, lbl_80860898@l(r31)
    li r5, 0x30
    stw r4, 0x714(r6)
    li r4, 0x0
    stw r3, 0x710(r6)
    addi r3, r6, 0x660
    bl memset
    b lbl_fn_806C6750_00003BA4
lbl_fn_806C6750_00003404:
    lwz r0, 0x664(r24)
    addi r3, r1, 0x10
    stw r0, 0x10(r1)
    bl fn_806A420C
    lhz r6, 0x66c(r24)
    mr r5, r3
    addi r4, r30, 0x2258
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806C6750_0000347C
lbl_fn_806C6750_00003430:
    mr r3, r29
    li r4, 0x0
    bl fn_806FFEA0
    lwz r24, lbl_80860898@l(r31)
    mr r27, r3
    bl fn_806FEC90
    lwz r0, 0x664(r24)
    cmplw r3, r0
    bne lbl_fn_806C6750_00003470
    lwz r24, lbl_80860898@l(r31)
    mr r3, r27
    bl fn_806FECA0
    lhz r0, 0x66c(r24)
    clrlwi r3, r3, 16
    cmplw r3, r0
    beq lbl_fn_806C6750_0000348C
lbl_fn_806C6750_00003470:
    mr r3, r29
    mr r4, r27
    bl fn_806FFD80
lbl_fn_806C6750_0000347C:
    mr r3, r29
    bl fn_806FFEB0
    cmpwi r3, 0x0
    bne lbl_fn_806C6750_00003430
lbl_fn_806C6750_0000348C:
    mr r3, r29
    bl fn_806FFEB0
    cmpwi r3, 0x0
    beq lbl_fn_806C6750_000039B4
    mr r3, r29
    li r4, 0x0
    bl fn_806FFEA0
    addi r4, r30, 0x188
    li r5, 0x0
    bl fn_806FEAA0
    lis r4, lbl_80860898@ha
    mr r26, r3
    lwz r4, lbl_80860898@l(r4)
    lbz r0, 0x15(r4)
    cmplwi r0, 0x1
    bne lbl_fn_806C6750_00003680
    lwz r0, 0x7ac(r4)
    cmpw r3, r0
    beq lbl_fn_806C6750_000034E8
    addi r4, r30, 0x2278
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
lbl_fn_806C6750_000034E8:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r0, 0x7ac(r3)
    cmpw r26, r0
    bne lbl_fn_806C6750_0000350C
    li r3, 0x0
    bl fn_806C89D0
    cmpwi r3, 0x0
    bne lbl_fn_806C6750_00003680
lbl_fn_806C6750_0000350C:
    lis r26, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r26)
    lwz r4, 0x660(r3)
    cmpwi r4, 0x0
    bne lbl_fn_806C6750_00003528
    li r3, 0x0
    b lbl_fn_806C6750_0000354C
lbl_fn_806C6750_00003528:
    lwz r5, 0x664(r3)
    li r7, 0x0
    lhz r6, 0x66c(r3)
    li r3, 0x5
    li r8, 0x0
    bl fn_806BC860
    lwz r4, lbl_80860898@l(r26)
    li r0, 0x0
    stw r0, 0x7ac(r4)
lbl_fn_806C6750_0000354C:
    lis r4, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r4)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806C6750_00003568
    bl fn_806C5EB0
    b lbl_fn_806C6750_0000356C
lbl_fn_806C6750_00003568:
    bl fn_806C5C10
lbl_fn_806C6750_0000356C:
    cmpwi r3, 0x0
    bne lbl_fn_806C6750_00003BA4
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r28, 0x744(r3)
    cmpwi r28, 0x3
    beq lbl_fn_806C6750_00003628
    lis r27, lbl_80860890@ha
    addi r26, r27, lbl_80860890@l
    lwz r29, lbl_80860890@l(r27)
    lwz r31, 0x4(r26)
    bl OSGetTime
    stw r4, 0x4(r26)
    lis r26, 0x1062
    lis r6, 0x8000
    subfc r4, r31, r4
    stw r3, lbl_80860890@l(r27)
    addi r7, r26, 0x4dd3
    subfe r3, r29, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r26, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r28, 2
    lwz r8, 0xc(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r30, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806C6750_00003628:
    lis r26, lbl_80860898@ha
    li r0, 0x3
    lwz r3, lbl_80860898@l(r26)
    li r4, 0x0
    li r5, 0x30
    stw r0, 0x744(r3)
    lwz r3, lbl_80860898@l(r26)
    addi r3, r3, 0x660
    bl memset
    lwz r5, lbl_80860898@l(r26)
    li r3, 0x0
    li r4, 0x0
    lwz r5, 0x7ac(r5)
    bl fn_806C0980
    lwz r4, lbl_80860898@l(r26)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806C6750_00003678
    bl fn_806C5EB0
    b lbl_fn_806C6750_00003BA4
lbl_fn_806C6750_00003678:
    bl fn_806C5C10
    b lbl_fn_806C6750_00003BA4
lbl_fn_806C6750_00003680:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r31, 0x744(r3)
    cmpwi r31, 0x5
    beq lbl_fn_806C6750_00003734
    lis r26, lbl_80860890@ha
    addi r27, r26, lbl_80860890@l
    lwz r25, lbl_80860890@l(r26)
    lwz r24, 0x4(r27)
    bl OSGetTime
    stw r4, 0x4(r27)
    lis r27, 0x1062
    lis r6, 0x8000
    subfc r4, r24, r4
    stw r3, lbl_80860890@l(r26)
    addi r7, r27, 0x4dd3
    subfe r3, r25, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r27, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r31, 2
    lwz r8, 0x14(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r30, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806C6750_00003734:
    lis r27, lbl_80860898@ha
    li r0, 0x5
    lwz r5, lbl_80860898@l(r27)
    mr r3, r29
    li r4, 0x0
    stw r0, 0x744(r5)
    bl fn_806FFEA0
    lwz r5, lbl_80860898@l(r27)
    li r3, 0x0
    li r4, 0x0
    addi r5, r5, 0x660
    bl fn_806BC4C0
    cmpwi r3, 0x0
    mr r24, r3
    bne lbl_fn_806C6750_00003774
    b lbl_fn_806C6750_00003BA4
lbl_fn_806C6750_00003774:
    mr r5, r24
    addi r4, r30, 0x1464
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
    cmpwi r24, 0x1
    beq lbl_fn_806C6750_000037A4
    cmpwi r24, 0x2
    beq lbl_fn_806C6750_000037B0
    cmpwi r24, 0x3
    beq lbl_fn_806C6750_000037BC
    b lbl_fn_806C6750_000037C4
lbl_fn_806C6750_000037A4:
    li r29, 0x9
    li r28, -0x1
    b lbl_fn_806C6750_000037C4
lbl_fn_806C6750_000037B0:
    li r29, 0x6
    li r28, -0x32
    b lbl_fn_806C6750_000037C4
lbl_fn_806C6750_000037BC:
    li r29, 0x6
    li r28, -0x1e
lbl_fn_806C6750_000037C4:
    lis r27, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r27)
    cmpwi r3, 0x0
    beq lbl_fn_806C6750_00003BA4
    cmpwi r29, 0x0
    beq lbl_fn_806C6750_00003BA4
    li r0, 0x1
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r27)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r27)
    subis r4, r28, 0x1
    li r0, 0x0
    mr r3, r29
    stb r0, 0x751(r5)
    subi r4, r4, 0x4ff0
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r27)
    addi r3, r1, 0x14
    addi r5, r30, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x60
    addi r4, r1, 0x14
    addi r5, r1, 0x20
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r27)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C6750_00003864
    cmpwi r6, 0x0
    bne lbl_fn_806C6750_00003864
    li r6, 0x1
lbl_fn_806C6750_00003864:
    addi r3, r1, 0x14
    addi r5, r30, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x64
    addi r4, r1, 0x14
    addi r5, r1, 0x20
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x14
    addi r5, r30, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x68
    addi r4, r1, 0x14
    addi r5, r1, 0x20
    li r6, 0x2f
    bl fn_806AB980
    lis r27, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r27)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C6750_000038D4
    li r4, 0x0
    b lbl_fn_806C6750_00003920
lbl_fn_806C6750_000038D4:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806C6750_0000391C
    lwz r3, lbl_80860898@l(r27)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806C6750_00003908
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806C6750_00003908
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C6750_0000391C
lbl_fn_806C6750_00003908:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C6750_0000391C
    li r4, 0x1
    b lbl_fn_806C6750_00003920
lbl_fn_806C6750_0000391C:
    li r4, 0x0
lbl_fn_806C6750_00003920:
    neg r0, r4
    addi r3, r1, 0x14
    or r0, r0, r4
    addi r5, r30, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x6c
    addi r4, r1, 0x14
    addi r5, r1, 0x20
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x20
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r25, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r25)
    cntlzw r0, r3
    srwi r24, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r25)
    mr r7, r3
    lwz r12, 0x8a0(r25)
    mr r3, r29
    subi r0, r4, 0x2
    mr r5, r24
    cntlzw r0, r0
    lwz r8, 0x8a4(r25)
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
    b lbl_fn_806C6750_00003BA4
lbl_fn_806C6750_000039B4:
    lis r27, lbl_80860898@ha
    li r0, 0x2
    lwz r3, lbl_80860898@l(r27)
    stw r0, 0x708(r3)
    bl OSGetTime
    lwz r5, lbl_80860898@l(r27)
    stw r4, 0x714(r5)
    stw r3, 0x710(r5)
    b lbl_fn_806C6750_00003BA4
lbl_fn_806C6750_000039D8:
    mr r3, r29
    bl fn_806FFEB0
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_806C6750_00003B78
    cmpwi r3, 0x1
    ble lbl_fn_806C6750_00003A68
    li r27, -0x1
    li r24, 0x0
    b lbl_fn_806C6750_00003A5C
lbl_fn_806C6750_00003A00:
    mr r3, r29
    mr r4, r24
    bl fn_806FFEA0
    mr r31, r3
    addi r4, r30, 0x2228
    li r5, -0x1
    bl fn_806FEAA0
    mr r26, r3
    addi r4, r30, 0x22c0
    mr r5, r26
    li r3, 0x400
    crclr 6
    bl fn_806A76B0
    cmpw r27, r26
    bge lbl_fn_806C6750_00003A58
    mr r28, r31
    mr r27, r26
    mr r5, r26
    addi r4, r30, 0x2300
    li r3, 0x400
    crclr 6
    bl fn_806A76B0
lbl_fn_806C6750_00003A58:
    addi r24, r24, 0x1
lbl_fn_806C6750_00003A5C:
    cmpw r24, r25
    blt lbl_fn_806C6750_00003A00
    b lbl_fn_806C6750_00003A78
lbl_fn_806C6750_00003A68:
    mr r3, r29
    li r4, 0x0
    bl fn_806FFEA0
    mr r28, r3
lbl_fn_806C6750_00003A78:
    lis r27, lbl_80860898@ha
    li r4, 0x0
    lwz r3, lbl_80860898@l(r27)
    li r5, 0x30
    addi r3, r3, 0x660
    bl memset
    lwz r24, lbl_80860898@l(r27)
    mr r3, r28
    addi r4, r30, 0x188
    li r5, 0x0
    bl fn_806FEAA0
    stw r3, 0x660(r24)
    li r0, 0xff
    mr r3, r28
    lwz r4, lbl_80860898@l(r27)
    stb r0, 0x676(r4)
    lwz r24, lbl_80860898@l(r27)
    bl fn_806FEC90
    stw r3, 0x664(r24)
    mr r3, r28
    lwz r24, lbl_80860898@l(r27)
    bl fn_806FECA0
    sth r3, 0x66c(r24)
    mr r3, r28
    lwz r24, lbl_80860898@l(r27)
    bl fn_806FED00
    stw r3, 0x668(r24)
    mr r3, r28
    lwz r24, lbl_80860898@l(r27)
    bl fn_806FED10
    sth r3, 0x66e(r24)
    mr r3, r28
    lwz r24, lbl_80860898@l(r27)
    bl fn_806FECC0
    stb r3, 0x677(r24)
    mr r3, r28
    addi r4, r30, 0x190
    li r5, -0x1
    lwz r24, lbl_80860898@l(r27)
    bl fn_806FEAA0
    stb r3, 0x15(r24)
    mr r5, r25
    addi r4, r30, 0x2330
    li r3, 0x400
    crclr 6
    bl fn_806A76B0
    lwz r25, lbl_80860898@l(r27)
    mr r3, r28
    addi r4, r30, 0x188
    li r5, 0x0
    lwz r24, 0x8e0(r25)
    bl fn_806FEAA0
    lwz r0, 0x8f0(r25)
    mr r4, r3
    stw r0, 0x8(r1)
    mr r3, r24
    addi r10, r25, 0x8ec
    lwz r5, 0x8a0(r25)
    lwz r6, 0x8a4(r25)
    lwz r7, 0x8a8(r25)
    lwz r8, 0x8ac(r25)
    lwz r9, 0x8e8(r25)
    bl fn_806B4D20
    b lbl_fn_806C6750_00003BA4
lbl_fn_806C6750_00003B78:
    lwz r3, lbl_80860898@l(r31)
    li r0, 0x2
    stw r0, 0x708(r3)
    bl OSGetTime
    lwz r5, lbl_80860898@l(r31)
    stw r4, 0x714(r5)
    addi r4, r30, 0x2354
    stw r3, 0x710(r5)
    li r3, 0x400
    crclr 6
    bl fn_806A76B0
lbl_fn_806C6750_00003BA4:
    lis r4, lbl_80860144@ha
    addi r11, r1, 0xa0
    lwz r3, lbl_80860144@l(r4)
    subi r0, r3, 0x1
    stw r0, lbl_80860144@l(r4)
    bl _restgpr_24
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}
