#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTime(void);
extern void __div2i(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void fn_806809C0(void);
extern void fn_80682544(void);
extern void fn_806A420C(void);
extern void fn_806A4264(void);
extern void fn_806A7130(void);
extern void fn_806A76B0(void);
extern void fn_806A9CA0(void);
extern void fn_806AB920(void);
extern void fn_806AB980(void);
extern void fn_806ABB70(void);
extern void fn_806ACCF0(void);
extern void fn_806ACE00(void);
extern void fn_806B1230(void);
extern void fn_806B12F0(void);
extern void fn_806BBCA0(void);
extern void fn_806BC4C0(void);
extern void fn_806BCD40(void);
extern void fn_806C10C0(void);
extern void fn_806C1430(void);
extern void fn_806C5EB0(void);
extern void fn_806C6180(void);
extern void fn_806C6470(void);
extern void fn_806CD150(void);
extern void fn_806EA920(void);
extern void fn_806EAC30(void);
extern void fn_806EAD00(void);
extern void fn_806EEDC0(void);
extern void fn_806EF9F0(void);
extern void fn_806EFA30(void);
extern void fn_806EFAE0(void);
extern void fn_806FC5D0(void);
extern void fn_806FC900(void);
extern void fn_806FE9A0(void);
extern void fn_806FEA20(void);
extern void fn_806FEAA0(void);
extern void fn_806FEC60(void);
extern void fn_806FEC90(void);
extern void fn_806FECA0(void);
extern void fn_806FECC0(void);
extern void fn_806FECD0(void);
extern void fn_806FED00(void);
extern void fn_806FED10(void);
extern void fn_806FFD10(void);
extern void fn_806FFD80(void);
extern void fn_806FFEA0(void);
extern void fn_806FFEB0(void);
extern void fn_806FFEC0(void);

/* External data declarations */
extern u8 lbl_8076B620[];
extern u8 lbl_807BE9D0[];
extern u8 lbl_807BEB78[];
extern u8 lbl_807BFE68[];
extern u8 lbl_807C0ED0[];
extern u8 lbl_807C0F78[];
extern u8 lbl_807C0FA0[];
extern u8 lbl_807C0FD0[];
extern u8 lbl_807C1188[];
extern u8 lbl_807C16F0[];
extern u8 lbl_80860144[];
extern u8 lbl_80860158[];
extern u8 lbl_80860890[];
extern u8 lbl_80860898[];

/* Small data declarations */

/* Function declarations */
void pad_03_806C86F8_text(void);
void fn_806C8700(void);
void fn_806C89D0(void);
void fn_806C8BE0(void);
void fn_806C8DB0(void);
void fn_806C9670(void);
void fn_806C9680(void);
void fn_806C9690(void);
void fn_806C9790(void);
void fn_806C97A0(void);
void fn_806C9810(void);
void fn_806C9880(void);
void fn_806C9CE0(void);
void fn_806C9E60(void);
void fn_806CA020(void);
void fn_806CA040(void);

asm void pad_03_806C86F8_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
}

asm void fn_806C8700(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807BE9D0@ha
    addi r31, r31, lbl_807BE9D0@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_806FECD0
    mr r5, r3
    addi r4, r31, 0x2374
    li r3, 0x400
    crclr 6
    bl fn_806A76B0
    mr r3, r28
    bl fn_806FED00
    mr r5, r3
    addi r4, r31, 0x2398
    li r3, 0x400
    crclr 6
    bl fn_806A76B0
    mr r3, r28
    bl fn_806FED10
    clrlwi r5, r3, 16
    addi r4, r31, 0x23bc
    li r3, 0x400
    crclr 6
    bl fn_806A76B0
    mr r3, r28
    bl fn_806FEC60
    mr r5, r3
    addi r4, r31, 0x23e0
    li r3, 0x400
    crclr 6
    bl fn_806A76B0
    mr r3, r28
    bl fn_806FEC90
    mr r5, r3
    addi r4, r31, 0x2404
    li r3, 0x400
    crclr 6
    bl fn_806A76B0
    mr r3, r28
    bl fn_806FECA0
    clrlwi r5, r3, 16
    addi r4, r31, 0x2428
    li r3, 0x400
    crclr 6
    bl fn_806A76B0
    mr r3, r28
    bl fn_806FECC0
    mr r5, r3
    addi r4, r31, 0x244c
    li r3, 0x400
    crclr 6
    bl fn_806A76B0
    mr r3, r28
    addi r4, r31, 0x2228
    li r5, -0x1
    bl fn_806FEAA0
    mr r5, r3
    addi r4, r31, 0x2470
    li r3, 0x400
    crclr 6
    bl fn_806A76B0
    mr r3, r28
    addi r4, r31, 0x2234
    li r5, -0x1
    bl fn_806FEAA0
    mr r5, r3
    addi r4, r31, 0x2484
    li r3, 0x400
    crclr 6
    bl fn_806A76B0
    mr r3, r28
    addi r4, r31, 0x188
    li r5, 0x0
    bl fn_806FEAA0
    mr r6, r3
    addi r4, r31, 0x2498
    addi r5, r31, 0x188
    li r3, 0x400
    crclr 6
    bl fn_806A76B0
    mr r3, r28
    addi r4, r31, 0x190
    li r5, -0x1
    bl fn_806FEAA0
    mr r6, r3
    addi r4, r31, 0x24a8
    addi r5, r31, 0x190
    li r3, 0x400
    crclr 6
    bl fn_806A76B0
    mr r3, r28
    addi r4, r31, 0x19c
    li r5, -0x1
    bl fn_806FEAA0
    mr r6, r3
    addi r4, r31, 0x24a8
    addi r5, r31, 0x19c
    li r3, 0x400
    crclr 6
    bl fn_806A76B0
    mr r3, r28
    addi r4, r31, 0x1b4
    li r5, -0x1
    bl fn_806FEAA0
    mr r6, r3
    addi r4, r31, 0x24a8
    addi r5, r31, 0x1b4
    li r3, 0x400
    crclr 6
    bl fn_806A76B0
    mr r3, r28
    addi r4, r31, 0x1c0
    li r5, -0x1
    bl fn_806FEAA0
    mr r6, r3
    addi r4, r31, 0x24a8
    addi r5, r31, 0x1c0
    li r3, 0x400
    crclr 6
    bl fn_806A76B0
    mr r3, r28
    addi r4, r31, 0x1d0
    li r5, -0x1
    bl fn_806FEAA0
    mr r6, r3
    addi r4, r31, 0x24a8
    addi r5, r31, 0x1d0
    li r3, 0x400
    crclr 6
    bl fn_806A76B0
    lis r30, lbl_80860158@ha
    li r29, 0x0
    addi r30, r30, lbl_80860158@l
lbl_fn_806C8700_00000234:
    lbz r0, 0x0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806C8700_000002A0
    lbz r0, 0x1(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806C8700_00000278
    lwz r4, 0x4(r30)
    mr r3, r28
    addi r5, r31, 0x24c0
    bl fn_806FEA20
    lwz r5, 0x4(r30)
    mr r6, r3
    addi r4, r31, 0x24b4
    li r3, 0x400
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806C8700_000002A0
lbl_fn_806C8700_00000278:
    lwz r4, 0x4(r30)
    mr r3, r28
    li r5, -0x1
    bl fn_806FEAA0
    lwz r5, 0x4(r30)
    mr r6, r3
    addi r4, r31, 0x24c8
    li r3, 0x400
    crclr 6
    bl fn_806A76B0
lbl_fn_806C8700_000002A0:
    addi r29, r29, 0x1
    addi r30, r30, 0xc
    cmpwi r29, 0x9a
    blt lbl_fn_806C8700_00000234
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806C89D0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r30, lbl_807BE9D0@ha
    mr r26, r3
    addi r30, r30, lbl_807BE9D0@l
    li r29, 0x0
    li r28, 0x0
    lis r25, 0x80
    lis r31, lbl_80860898@ha
    b lbl_fn_806C89D0_0000045C
lbl_fn_806C89D0_0000030C:
    lwz r3, lbl_80860898@l(r31)
    mr r4, r28
    lwz r3, 0x704(r3)
    bl fn_806FFEA0
    lwz r4, lbl_80860898@l(r31)
    mr r27, r3
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806C89D0_000003B0
    addi r4, r30, 0x188
    li r5, 0x0
    bl fn_806FEAA0
    lwz r6, lbl_80860898@l(r31)
    li r7, 0x0
    li r4, 0x0
    lwz r0, 0x58(r6)
    mr r5, r6
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806C89D0_00000388
    nop
lbl_fn_806C89D0_00000360:
    lwz r0, 0x60(r5)
    cmpw r3, r0
    bne lbl_fn_806C89D0_0000037C
    mulli r0, r4, 0x30
    add r3, r6, r0
    addi r0, r3, 0x60
    b lbl_fn_806C89D0_0000038C
lbl_fn_806C89D0_0000037C:
    addi r5, r5, 0x30
    addi r4, r4, 0x1
    bdnz lbl_fn_806C89D0_00000360
lbl_fn_806C89D0_00000388:
    li r0, 0x0
lbl_fn_806C89D0_0000038C:
    cmpwi r0, 0x0
    beq lbl_fn_806C89D0_000003A8
    lwz r3, 0x704(r6)
    mr r4, r27
    bl fn_806FFD80
    li r7, 0x1
    subi r28, r28, 0x1
lbl_fn_806C89D0_000003A8:
    cmpwi r7, 0x0
    bne lbl_fn_806C89D0_00000458
lbl_fn_806C89D0_000003B0:
    lwz r4, lbl_80860898@l(r31)
    lwz r12, 0x8b0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_806C89D0_00000440
    mr r3, r28
    lwz r4, 0x8b4(r4)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r24, r3
    ble lbl_fn_806C89D0_0000040C
    subi r0, r25, 0x1
    cmpw r3, r0
    ble lbl_fn_806C89D0_000003EC
    mr r24, r0
lbl_fn_806C89D0_000003EC:
    li r3, 0x100
    bl fn_806ABB70
    slwi r0, r24, 8
    addi r4, r30, 0x1a8
    or r5, r0, r3
    mr r3, r27
    bl fn_806FE9A0
    b lbl_fn_806C89D0_00000458
lbl_fn_806C89D0_0000040C:
    lwz r3, lbl_80860898@l(r31)
    mr r4, r27
    lwz r3, 0x704(r3)
    bl fn_806FFD80
    mr r5, r28
    mr r6, r24
    addi r4, r30, 0x24d4
    li r3, 0x400
    crclr 6
    bl fn_806A76B0
    li r29, 0x1
    subi r28, r28, 0x1
    b lbl_fn_806C89D0_00000458
lbl_fn_806C89D0_00000440:
    li r3, 0x80
    bl fn_806ABB70
    mr r5, r3
    mr r3, r27
    addi r4, r30, 0x1a8
    bl fn_806FE9A0
lbl_fn_806C89D0_00000458:
    addi r28, r28, 0x1
lbl_fn_806C89D0_0000045C:
    lwz r3, lbl_80860898@l(r31)
    lwz r3, 0x704(r3)
    bl fn_806FFEB0
    cmpw r28, r3
    blt lbl_fn_806C89D0_0000030C
    cmpwi r26, 0x0
    beq lbl_fn_806C89D0_000004A4
    lwz r3, lbl_80860898@l(r31)
    lwz r3, 0x704(r3)
    bl fn_806FFEB0
    cmpwi r3, 0x0
    beq lbl_fn_806C89D0_000004A4
    lwz r3, lbl_80860898@l(r31)
    addi r5, r30, 0x1a8
    li r4, 0x0
    li r6, 0x0
    lwz r3, 0x704(r3)
    bl fn_806FFEC0
lbl_fn_806C89D0_000004A4:
    cmpwi r29, 0x0
    beq lbl_fn_806C89D0_000004CC
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r3, 0x704(r3)
    bl fn_806FFEB0
    cmpwi r3, 0x0
    bne lbl_fn_806C89D0_000004CC
    li r3, 0x0
    b lbl_fn_806C89D0_000004D0
lbl_fn_806C89D0_000004CC:
    li r3, 0x1
lbl_fn_806C89D0_000004D0:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806C8BE0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    lis r30, lbl_80860898@ha
    li r29, 0x0
    lwz r3, lbl_80860898@l(r30)
    li r28, 0x0
    lwz r3, 0x704(r3)
    bl fn_806FFEB0
    cmpwi r3, 0x1
    ble lbl_fn_806C8BE0_00000694
    lis r25, lbl_8076B620@ha
    li r26, 0x0
    addi r25, r25, lbl_8076B620@l
    lis r27, lbl_807BEB78@ha
    b lbl_fn_806C8BE0_00000568
lbl_fn_806C8BE0_00000530:
    lwz r3, lbl_80860898@l(r30)
    mr r4, r26
    lwz r3, 0x704(r3)
    bl fn_806FFEA0
    addi r4, r27, lbl_807BEB78@l
    li r5, -0x1
    bl fn_806FEAA0
    cmpw r3, r29
    ble lbl_fn_806C8BE0_00000558
    mr r29, r3
lbl_fn_806C8BE0_00000558:
    lwz r0, 0x0(r25)
    addi r25, r25, 0x4
    addi r26, r26, 0x1
    add r28, r28, r0
lbl_fn_806C8BE0_00000568:
    lwz r3, lbl_80860898@l(r30)
    lwz r3, 0x704(r3)
    bl fn_806FFEB0
    cmpw r26, r3
    blt lbl_fn_806C8BE0_00000530
    li r3, 0x64
    bl fn_806ABB70
    lis r25, lbl_8076B620@ha
    mr r30, r3
    addi r26, r1, 0x8
    li r31, 0x0
    addi r25, r25, lbl_8076B620@l
    lis r27, lbl_80860898@ha
    b lbl_fn_806C8BE0_00000608
lbl_fn_806C8BE0_000005A0:
    lwz r3, lbl_80860898@l(r27)
    lwz r3, 0x704(r3)
    bl fn_806FFEB0
    subi r0, r3, 0x1
    cmpw r31, r0
    bne lbl_fn_806C8BE0_000005CC
    slwi r0, r31, 2
    addi r3, r1, 0x8
    li r4, 0x64
    stwx r4, r3, r0
    b lbl_fn_806C8BE0_0000061C
lbl_fn_806C8BE0_000005CC:
    lwz r0, 0x0(r25)
    cmpwi r31, 0x0
    mulli r0, r0, 0x64
    divw r3, r0, r28
    ble lbl_fn_806C8BE0_000005E8
    lwz r0, -0x4(r26)
    b lbl_fn_806C8BE0_000005EC
lbl_fn_806C8BE0_000005E8:
    li r0, 0x0
lbl_fn_806C8BE0_000005EC:
    add r0, r3, r0
    stw r0, 0x0(r26)
    cmplw r30, r0
    blt lbl_fn_806C8BE0_0000061C
    addi r26, r26, 0x4
    addi r25, r25, 0x4
    addi r31, r31, 0x1
lbl_fn_806C8BE0_00000608:
    lwz r3, lbl_80860898@l(r27)
    lwz r3, 0x704(r3)
    bl fn_806FFEB0
    cmpw r31, r3
    blt lbl_fn_806C8BE0_000005A0
lbl_fn_806C8BE0_0000061C:
    slwi r0, r31, 2
    addi r3, r1, 0x8
    lis r4, lbl_807C0ED0@ha
    lwzx r6, r3, r0
    mr r5, r31
    mr r7, r30
    addi r4, r4, lbl_807C0ED0@l
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lis r3, 0x8000
    subi r0, r3, 0x1
    cmpw r29, r0
    bge lbl_fn_806C8BE0_00000658
    addi r29, r29, 0x1
lbl_fn_806C8BE0_00000658:
    lis r30, lbl_80860898@ha
    mr r4, r31
    lwz r3, lbl_80860898@l(r30)
    lwz r3, 0x704(r3)
    bl fn_806FFEA0
    lis r28, lbl_807BEB78@ha
    mr r5, r29
    addi r4, r28, lbl_807BEB78@l
    bl fn_806FE9A0
    lwz r3, lbl_80860898@l(r30)
    addi r5, r28, lbl_807BEB78@l
    li r4, 0x0
    li r6, 0x0
    lwz r3, 0x704(r3)
    bl fn_806FFEC0
lbl_fn_806C8BE0_00000694:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806C8DB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x33
    mr r5, r4
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807BE9D0@ha
    addi r31, r31, lbl_807BE9D0@l
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    beq lbl_fn_806C8DB0_000009D4
    bge lbl_fn_806C8DB0_00000710
    cmpwi r3, 0xa
    beq lbl_fn_806C8DB0_0000081C
    bge lbl_fn_806C8DB0_00000704
    cmpwi r3, 0x8
    beq lbl_fn_806C8DB0_00000738
    b lbl_fn_806C8DB0_00000F00
lbl_fn_806C8DB0_00000704:
    cmpwi r3, 0x32
    bge lbl_fn_806C8DB0_000008F8
    b lbl_fn_806C8DB0_00000F00
lbl_fn_806C8DB0_00000710:
    cmpwi r3, 0x37
    beq lbl_fn_806C8DB0_00000D4C
    bge lbl_fn_806C8DB0_0000072C
    cmpwi r3, 0x35
    beq lbl_fn_806C8DB0_00000B7C
    bge lbl_fn_806C8DB0_00000C48
    b lbl_fn_806C8DB0_00000AB0
lbl_fn_806C8DB0_0000072C:
    cmpwi r3, 0x39
    bge lbl_fn_806C8DB0_00000F00
    b lbl_fn_806C8DB0_00000E28
lbl_fn_806C8DB0_00000738:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r29, 0x58(r3)
    subic. r29, r29, 0x1
    bge lbl_fn_806C8DB0_00000750
    li r29, 0x0
lbl_fn_806C8DB0_00000750:
    mr r3, r5
    mr r4, r29
    bl fn_806EFA30
    cmpwi r30, 0x33
    beq lbl_fn_806C8DB0_000007CC
    bge lbl_fn_806C8DB0_0000078C
    cmpwi r30, 0xa
    beq lbl_fn_806C8DB0_000007BC
    bge lbl_fn_806C8DB0_00000780
    cmpwi r30, 0x8
    beq lbl_fn_806C8DB0_000007B4
    b lbl_fn_806C8DB0_000007FC
lbl_fn_806C8DB0_00000780:
    cmpwi r30, 0x32
    bge lbl_fn_806C8DB0_000007C4
    b lbl_fn_806C8DB0_000007FC
lbl_fn_806C8DB0_0000078C:
    cmpwi r30, 0x37
    beq lbl_fn_806C8DB0_000007EC
    bge lbl_fn_806C8DB0_000007A8
    cmpwi r30, 0x35
    beq lbl_fn_806C8DB0_000007DC
    bge lbl_fn_806C8DB0_000007E4
    b lbl_fn_806C8DB0_000007D4
lbl_fn_806C8DB0_000007A8:
    cmpwi r30, 0x39
    bge lbl_fn_806C8DB0_000007FC
    b lbl_fn_806C8DB0_000007F4
lbl_fn_806C8DB0_000007B4:
    addi r6, r31, 0x252c
    b lbl_fn_806C8DB0_00000800
lbl_fn_806C8DB0_000007BC:
    addi r6, r31, 0x2538
    b lbl_fn_806C8DB0_00000800
lbl_fn_806C8DB0_000007C4:
    addi r6, r31, 0x2544
    b lbl_fn_806C8DB0_00000800
lbl_fn_806C8DB0_000007CC:
    addi r6, r31, 0x2548
    b lbl_fn_806C8DB0_00000800
lbl_fn_806C8DB0_000007D4:
    addi r6, r31, 0x68
    b lbl_fn_806C8DB0_00000800
lbl_fn_806C8DB0_000007DC:
    addi r6, r31, 0x2550
    b lbl_fn_806C8DB0_00000800
lbl_fn_806C8DB0_000007E4:
    addi r6, r31, 0x2558
    b lbl_fn_806C8DB0_00000800
lbl_fn_806C8DB0_000007EC:
    addi r6, r31, 0x2560
    b lbl_fn_806C8DB0_00000800
lbl_fn_806C8DB0_000007F4:
    addi r6, r31, 0x2568
    b lbl_fn_806C8DB0_00000800
lbl_fn_806C8DB0_000007FC:
    addi r6, r31, 0x2570
lbl_fn_806C8DB0_00000800:
    mr r5, r30
    mr r7, r29
    addi r4, r31, 0x2578
    li r3, 0x200
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806C8DB0_00000F54
lbl_fn_806C8DB0_0000081C:
    lis r4, lbl_80860898@ha
    mr r3, r5
    lwz r4, lbl_80860898@l(r4)
    lbz r4, 0x17(r4)
    bl fn_806EFA30
    cmpwi r30, 0x33
    beq lbl_fn_806C8DB0_000008A0
    bge lbl_fn_806C8DB0_00000860
    cmpwi r30, 0xa
    beq lbl_fn_806C8DB0_00000890
    bge lbl_fn_806C8DB0_00000854
    cmpwi r30, 0x8
    beq lbl_fn_806C8DB0_00000888
    b lbl_fn_806C8DB0_000008D0
lbl_fn_806C8DB0_00000854:
    cmpwi r30, 0x32
    bge lbl_fn_806C8DB0_00000898
    b lbl_fn_806C8DB0_000008D0
lbl_fn_806C8DB0_00000860:
    cmpwi r30, 0x37
    beq lbl_fn_806C8DB0_000008C0
    bge lbl_fn_806C8DB0_0000087C
    cmpwi r30, 0x35
    beq lbl_fn_806C8DB0_000008B0
    bge lbl_fn_806C8DB0_000008B8
    b lbl_fn_806C8DB0_000008A8
lbl_fn_806C8DB0_0000087C:
    cmpwi r30, 0x39
    bge lbl_fn_806C8DB0_000008D0
    b lbl_fn_806C8DB0_000008C8
lbl_fn_806C8DB0_00000888:
    addi r6, r31, 0x252c
    b lbl_fn_806C8DB0_000008D4
lbl_fn_806C8DB0_00000890:
    addi r6, r31, 0x2538
    b lbl_fn_806C8DB0_000008D4
lbl_fn_806C8DB0_00000898:
    addi r6, r31, 0x2544
    b lbl_fn_806C8DB0_000008D4
lbl_fn_806C8DB0_000008A0:
    addi r6, r31, 0x2548
    b lbl_fn_806C8DB0_000008D4
lbl_fn_806C8DB0_000008A8:
    addi r6, r31, 0x68
    b lbl_fn_806C8DB0_000008D4
lbl_fn_806C8DB0_000008B0:
    addi r6, r31, 0x2550
    b lbl_fn_806C8DB0_000008D4
lbl_fn_806C8DB0_000008B8:
    addi r6, r31, 0x2558
    b lbl_fn_806C8DB0_000008D4
lbl_fn_806C8DB0_000008C0:
    addi r6, r31, 0x2560
    b lbl_fn_806C8DB0_000008D4
lbl_fn_806C8DB0_000008C8:
    addi r6, r31, 0x2568
    b lbl_fn_806C8DB0_000008D4
lbl_fn_806C8DB0_000008D0:
    addi r6, r31, 0x2570
lbl_fn_806C8DB0_000008D4:
    lis r3, lbl_80860898@ha
    mr r5, r30
    lwz r7, lbl_80860898@l(r3)
    addi r4, r31, 0x2578
    li r3, 0x200
    lbz r7, 0x17(r7)
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806C8DB0_00000F54
lbl_fn_806C8DB0_000008F8:
    lis r4, lbl_80860898@ha
    mr r3, r5
    lwz r4, lbl_80860898@l(r4)
    lwz r4, 0x7a8(r4)
    bl fn_806EFA30
    cmpwi r30, 0x33
    beq lbl_fn_806C8DB0_0000097C
    bge lbl_fn_806C8DB0_0000093C
    cmpwi r30, 0xa
    beq lbl_fn_806C8DB0_0000096C
    bge lbl_fn_806C8DB0_00000930
    cmpwi r30, 0x8
    beq lbl_fn_806C8DB0_00000964
    b lbl_fn_806C8DB0_000009AC
lbl_fn_806C8DB0_00000930:
    cmpwi r30, 0x32
    bge lbl_fn_806C8DB0_00000974
    b lbl_fn_806C8DB0_000009AC
lbl_fn_806C8DB0_0000093C:
    cmpwi r30, 0x37
    beq lbl_fn_806C8DB0_0000099C
    bge lbl_fn_806C8DB0_00000958
    cmpwi r30, 0x35
    beq lbl_fn_806C8DB0_0000098C
    bge lbl_fn_806C8DB0_00000994
    b lbl_fn_806C8DB0_00000984
lbl_fn_806C8DB0_00000958:
    cmpwi r30, 0x39
    bge lbl_fn_806C8DB0_000009AC
    b lbl_fn_806C8DB0_000009A4
lbl_fn_806C8DB0_00000964:
    addi r6, r31, 0x252c
    b lbl_fn_806C8DB0_000009B0
lbl_fn_806C8DB0_0000096C:
    addi r6, r31, 0x2538
    b lbl_fn_806C8DB0_000009B0
lbl_fn_806C8DB0_00000974:
    addi r6, r31, 0x2544
    b lbl_fn_806C8DB0_000009B0
lbl_fn_806C8DB0_0000097C:
    addi r6, r31, 0x2548
    b lbl_fn_806C8DB0_000009B0
lbl_fn_806C8DB0_00000984:
    addi r6, r31, 0x68
    b lbl_fn_806C8DB0_000009B0
lbl_fn_806C8DB0_0000098C:
    addi r6, r31, 0x2550
    b lbl_fn_806C8DB0_000009B0
lbl_fn_806C8DB0_00000994:
    addi r6, r31, 0x2558
    b lbl_fn_806C8DB0_000009B0
lbl_fn_806C8DB0_0000099C:
    addi r6, r31, 0x2560
    b lbl_fn_806C8DB0_000009B0
lbl_fn_806C8DB0_000009A4:
    addi r6, r31, 0x2568
    b lbl_fn_806C8DB0_000009B0
lbl_fn_806C8DB0_000009AC:
    addi r6, r31, 0x2570
lbl_fn_806C8DB0_000009B0:
    lis r3, lbl_80860898@ha
    mr r5, r30
    lwz r7, lbl_80860898@l(r3)
    addi r4, r31, 0x2578
    li r3, 0x200
    lwz r7, 0x7a8(r7)
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806C8DB0_00000F54
lbl_fn_806C8DB0_000009D4:
    lis r4, lbl_80860898@ha
    mr r3, r5
    lwz r4, lbl_80860898@l(r4)
    lbz r4, 0x15(r4)
    bl fn_806EFA30
    cmpwi r30, 0x33
    beq lbl_fn_806C8DB0_00000A58
    bge lbl_fn_806C8DB0_00000A18
    cmpwi r30, 0xa
    beq lbl_fn_806C8DB0_00000A48
    bge lbl_fn_806C8DB0_00000A0C
    cmpwi r30, 0x8
    beq lbl_fn_806C8DB0_00000A40
    b lbl_fn_806C8DB0_00000A88
lbl_fn_806C8DB0_00000A0C:
    cmpwi r30, 0x32
    bge lbl_fn_806C8DB0_00000A50
    b lbl_fn_806C8DB0_00000A88
lbl_fn_806C8DB0_00000A18:
    cmpwi r30, 0x37
    beq lbl_fn_806C8DB0_00000A78
    bge lbl_fn_806C8DB0_00000A34
    cmpwi r30, 0x35
    beq lbl_fn_806C8DB0_00000A68
    bge lbl_fn_806C8DB0_00000A70
    b lbl_fn_806C8DB0_00000A60
lbl_fn_806C8DB0_00000A34:
    cmpwi r30, 0x39
    bge lbl_fn_806C8DB0_00000A88
    b lbl_fn_806C8DB0_00000A80
lbl_fn_806C8DB0_00000A40:
    addi r6, r31, 0x252c
    b lbl_fn_806C8DB0_00000A8C
lbl_fn_806C8DB0_00000A48:
    addi r6, r31, 0x2538
    b lbl_fn_806C8DB0_00000A8C
lbl_fn_806C8DB0_00000A50:
    addi r6, r31, 0x2544
    b lbl_fn_806C8DB0_00000A8C
lbl_fn_806C8DB0_00000A58:
    addi r6, r31, 0x2548
    b lbl_fn_806C8DB0_00000A8C
lbl_fn_806C8DB0_00000A60:
    addi r6, r31, 0x68
    b lbl_fn_806C8DB0_00000A8C
lbl_fn_806C8DB0_00000A68:
    addi r6, r31, 0x2550
    b lbl_fn_806C8DB0_00000A8C
lbl_fn_806C8DB0_00000A70:
    addi r6, r31, 0x2558
    b lbl_fn_806C8DB0_00000A8C
lbl_fn_806C8DB0_00000A78:
    addi r6, r31, 0x2560
    b lbl_fn_806C8DB0_00000A8C
lbl_fn_806C8DB0_00000A80:
    addi r6, r31, 0x2568
    b lbl_fn_806C8DB0_00000A8C
lbl_fn_806C8DB0_00000A88:
    addi r6, r31, 0x2570
lbl_fn_806C8DB0_00000A8C:
    lis r3, lbl_80860898@ha
    mr r5, r30
    lwz r7, lbl_80860898@l(r3)
    addi r4, r31, 0x2578
    li r3, 0x200
    lbz r7, 0x15(r7)
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806C8DB0_00000F54
lbl_fn_806C8DB0_00000AB0:
    mr r3, r5
    li r4, 0x5a
    bl fn_806EFA30
    cmpwi r30, 0x33
    beq lbl_fn_806C8DB0_00000B2C
    bge lbl_fn_806C8DB0_00000AEC
    cmpwi r30, 0xa
    beq lbl_fn_806C8DB0_00000B1C
    bge lbl_fn_806C8DB0_00000AE0
    cmpwi r30, 0x8
    beq lbl_fn_806C8DB0_00000B14
    b lbl_fn_806C8DB0_00000B5C
lbl_fn_806C8DB0_00000AE0:
    cmpwi r30, 0x32
    bge lbl_fn_806C8DB0_00000B24
    b lbl_fn_806C8DB0_00000B5C
lbl_fn_806C8DB0_00000AEC:
    cmpwi r30, 0x37
    beq lbl_fn_806C8DB0_00000B4C
    bge lbl_fn_806C8DB0_00000B08
    cmpwi r30, 0x35
    beq lbl_fn_806C8DB0_00000B3C
    bge lbl_fn_806C8DB0_00000B44
    b lbl_fn_806C8DB0_00000B34
lbl_fn_806C8DB0_00000B08:
    cmpwi r30, 0x39
    bge lbl_fn_806C8DB0_00000B5C
    b lbl_fn_806C8DB0_00000B54
lbl_fn_806C8DB0_00000B14:
    addi r6, r31, 0x252c
    b lbl_fn_806C8DB0_00000B60
lbl_fn_806C8DB0_00000B1C:
    addi r6, r31, 0x2538
    b lbl_fn_806C8DB0_00000B60
lbl_fn_806C8DB0_00000B24:
    addi r6, r31, 0x2544
    b lbl_fn_806C8DB0_00000B60
lbl_fn_806C8DB0_00000B2C:
    addi r6, r31, 0x2548
    b lbl_fn_806C8DB0_00000B60
lbl_fn_806C8DB0_00000B34:
    addi r6, r31, 0x68
    b lbl_fn_806C8DB0_00000B60
lbl_fn_806C8DB0_00000B3C:
    addi r6, r31, 0x2550
    b lbl_fn_806C8DB0_00000B60
lbl_fn_806C8DB0_00000B44:
    addi r6, r31, 0x2558
    b lbl_fn_806C8DB0_00000B60
lbl_fn_806C8DB0_00000B4C:
    addi r6, r31, 0x2560
    b lbl_fn_806C8DB0_00000B60
lbl_fn_806C8DB0_00000B54:
    addi r6, r31, 0x2568
    b lbl_fn_806C8DB0_00000B60
lbl_fn_806C8DB0_00000B5C:
    addi r6, r31, 0x2570
lbl_fn_806C8DB0_00000B60:
    mr r5, r30
    addi r4, r31, 0x2578
    li r3, 0x200
    li r7, 0x5a
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806C8DB0_00000F54
lbl_fn_806C8DB0_00000B7C:
    mr r3, r5
    li r4, 0x1
    bl fn_806EFA30
    cmpwi r30, 0x33
    beq lbl_fn_806C8DB0_00000BF8
    bge lbl_fn_806C8DB0_00000BB8
    cmpwi r30, 0xa
    beq lbl_fn_806C8DB0_00000BE8
    bge lbl_fn_806C8DB0_00000BAC
    cmpwi r30, 0x8
    beq lbl_fn_806C8DB0_00000BE0
    b lbl_fn_806C8DB0_00000C28
lbl_fn_806C8DB0_00000BAC:
    cmpwi r30, 0x32
    bge lbl_fn_806C8DB0_00000BF0
    b lbl_fn_806C8DB0_00000C28
lbl_fn_806C8DB0_00000BB8:
    cmpwi r30, 0x37
    beq lbl_fn_806C8DB0_00000C18
    bge lbl_fn_806C8DB0_00000BD4
    cmpwi r30, 0x35
    beq lbl_fn_806C8DB0_00000C08
    bge lbl_fn_806C8DB0_00000C10
    b lbl_fn_806C8DB0_00000C00
lbl_fn_806C8DB0_00000BD4:
    cmpwi r30, 0x39
    bge lbl_fn_806C8DB0_00000C28
    b lbl_fn_806C8DB0_00000C20
lbl_fn_806C8DB0_00000BE0:
    addi r6, r31, 0x252c
    b lbl_fn_806C8DB0_00000C2C
lbl_fn_806C8DB0_00000BE8:
    addi r6, r31, 0x2538
    b lbl_fn_806C8DB0_00000C2C
lbl_fn_806C8DB0_00000BF0:
    addi r6, r31, 0x2544
    b lbl_fn_806C8DB0_00000C2C
lbl_fn_806C8DB0_00000BF8:
    addi r6, r31, 0x2548
    b lbl_fn_806C8DB0_00000C2C
lbl_fn_806C8DB0_00000C00:
    addi r6, r31, 0x68
    b lbl_fn_806C8DB0_00000C2C
lbl_fn_806C8DB0_00000C08:
    addi r6, r31, 0x2550
    b lbl_fn_806C8DB0_00000C2C
lbl_fn_806C8DB0_00000C10:
    addi r6, r31, 0x2558
    b lbl_fn_806C8DB0_00000C2C
lbl_fn_806C8DB0_00000C18:
    addi r6, r31, 0x2560
    b lbl_fn_806C8DB0_00000C2C
lbl_fn_806C8DB0_00000C20:
    addi r6, r31, 0x2568
    b lbl_fn_806C8DB0_00000C2C
lbl_fn_806C8DB0_00000C28:
    addi r6, r31, 0x2570
lbl_fn_806C8DB0_00000C2C:
    mr r5, r30
    addi r4, r31, 0x2578
    li r3, 0x200
    li r7, 0x1
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806C8DB0_00000F54
lbl_fn_806C8DB0_00000C48:
    lis r4, lbl_80860898@ha
    mr r3, r5
    lwz r4, lbl_80860898@l(r4)
    lbz r0, 0x16(r4)
    cmpwi r0, 0x2
    bne lbl_fn_806C8DB0_00000C68
    lwz r4, 0x8c0(r4)
    b lbl_fn_806C8DB0_00000C6C
lbl_fn_806C8DB0_00000C68:
    li r4, 0x0
lbl_fn_806C8DB0_00000C6C:
    bl fn_806EFA30
    cmpwi r30, 0x33
    beq lbl_fn_806C8DB0_00000CE0
    bge lbl_fn_806C8DB0_00000CA0
    cmpwi r30, 0xa
    beq lbl_fn_806C8DB0_00000CD0
    bge lbl_fn_806C8DB0_00000C94
    cmpwi r30, 0x8
    beq lbl_fn_806C8DB0_00000CC8
    b lbl_fn_806C8DB0_00000D10
lbl_fn_806C8DB0_00000C94:
    cmpwi r30, 0x32
    bge lbl_fn_806C8DB0_00000CD8
    b lbl_fn_806C8DB0_00000D10
lbl_fn_806C8DB0_00000CA0:
    cmpwi r30, 0x37
    beq lbl_fn_806C8DB0_00000D00
    bge lbl_fn_806C8DB0_00000CBC
    cmpwi r30, 0x35
    beq lbl_fn_806C8DB0_00000CF0
    bge lbl_fn_806C8DB0_00000CF8
    b lbl_fn_806C8DB0_00000CE8
lbl_fn_806C8DB0_00000CBC:
    cmpwi r30, 0x39
    bge lbl_fn_806C8DB0_00000D10
    b lbl_fn_806C8DB0_00000D08
lbl_fn_806C8DB0_00000CC8:
    addi r6, r31, 0x252c
    b lbl_fn_806C8DB0_00000D14
lbl_fn_806C8DB0_00000CD0:
    addi r6, r31, 0x2538
    b lbl_fn_806C8DB0_00000D14
lbl_fn_806C8DB0_00000CD8:
    addi r6, r31, 0x2544
    b lbl_fn_806C8DB0_00000D14
lbl_fn_806C8DB0_00000CE0:
    addi r6, r31, 0x2548
    b lbl_fn_806C8DB0_00000D14
lbl_fn_806C8DB0_00000CE8:
    addi r6, r31, 0x68
    b lbl_fn_806C8DB0_00000D14
lbl_fn_806C8DB0_00000CF0:
    addi r6, r31, 0x2550
    b lbl_fn_806C8DB0_00000D14
lbl_fn_806C8DB0_00000CF8:
    addi r6, r31, 0x2558
    b lbl_fn_806C8DB0_00000D14
lbl_fn_806C8DB0_00000D00:
    addi r6, r31, 0x2560
    b lbl_fn_806C8DB0_00000D14
lbl_fn_806C8DB0_00000D08:
    addi r6, r31, 0x2568
    b lbl_fn_806C8DB0_00000D14
lbl_fn_806C8DB0_00000D10:
    addi r6, r31, 0x2570
lbl_fn_806C8DB0_00000D14:
    lis r3, lbl_80860898@ha
    mr r5, r30
    lwz r7, lbl_80860898@l(r3)
    addi r4, r31, 0x2578
    li r3, 0x200
    lbz r0, 0x16(r7)
    cmpwi r0, 0x2
    bne lbl_fn_806C8DB0_00000D3C
    lwz r7, 0x8c0(r7)
    b lbl_fn_806C8DB0_00000D40
lbl_fn_806C8DB0_00000D3C:
    li r7, 0x0
lbl_fn_806C8DB0_00000D40:
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806C8DB0_00000F54
lbl_fn_806C8DB0_00000D4C:
    lis r4, lbl_80860898@ha
    mr r3, r5
    lwz r4, lbl_80860898@l(r4)
    lbz r4, 0x16(r4)
    bl fn_806EFA30
    cmpwi r30, 0x33
    beq lbl_fn_806C8DB0_00000DD0
    bge lbl_fn_806C8DB0_00000D90
    cmpwi r30, 0xa
    beq lbl_fn_806C8DB0_00000DC0
    bge lbl_fn_806C8DB0_00000D84
    cmpwi r30, 0x8
    beq lbl_fn_806C8DB0_00000DB8
    b lbl_fn_806C8DB0_00000E00
lbl_fn_806C8DB0_00000D84:
    cmpwi r30, 0x32
    bge lbl_fn_806C8DB0_00000DC8
    b lbl_fn_806C8DB0_00000E00
lbl_fn_806C8DB0_00000D90:
    cmpwi r30, 0x37
    beq lbl_fn_806C8DB0_00000DF0
    bge lbl_fn_806C8DB0_00000DAC
    cmpwi r30, 0x35
    beq lbl_fn_806C8DB0_00000DE0
    bge lbl_fn_806C8DB0_00000DE8
    b lbl_fn_806C8DB0_00000DD8
lbl_fn_806C8DB0_00000DAC:
    cmpwi r30, 0x39
    bge lbl_fn_806C8DB0_00000E00
    b lbl_fn_806C8DB0_00000DF8
lbl_fn_806C8DB0_00000DB8:
    addi r6, r31, 0x252c
    b lbl_fn_806C8DB0_00000E04
lbl_fn_806C8DB0_00000DC0:
    addi r6, r31, 0x2538
    b lbl_fn_806C8DB0_00000E04
lbl_fn_806C8DB0_00000DC8:
    addi r6, r31, 0x2544
    b lbl_fn_806C8DB0_00000E04
lbl_fn_806C8DB0_00000DD0:
    addi r6, r31, 0x2548
    b lbl_fn_806C8DB0_00000E04
lbl_fn_806C8DB0_00000DD8:
    addi r6, r31, 0x68
    b lbl_fn_806C8DB0_00000E04
lbl_fn_806C8DB0_00000DE0:
    addi r6, r31, 0x2550
    b lbl_fn_806C8DB0_00000E04
lbl_fn_806C8DB0_00000DE8:
    addi r6, r31, 0x2558
    b lbl_fn_806C8DB0_00000E04
lbl_fn_806C8DB0_00000DF0:
    addi r6, r31, 0x2560
    b lbl_fn_806C8DB0_00000E04
lbl_fn_806C8DB0_00000DF8:
    addi r6, r31, 0x2568
    b lbl_fn_806C8DB0_00000E04
lbl_fn_806C8DB0_00000E00:
    addi r6, r31, 0x2570
lbl_fn_806C8DB0_00000E04:
    lis r3, lbl_80860898@ha
    mr r5, r30
    lwz r7, lbl_80860898@l(r3)
    addi r4, r31, 0x2578
    li r3, 0x200
    lbz r7, 0x16(r7)
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806C8DB0_00000F54
lbl_fn_806C8DB0_00000E28:
    lis r4, lbl_80860898@ha
    mr r3, r5
    lwz r4, lbl_80860898@l(r4)
    lwz r29, 0x28(r4)
    mr r4, r29
    bl fn_806EFA30
    cmpwi r30, 0x33
    beq lbl_fn_806C8DB0_00000EB0
    bge lbl_fn_806C8DB0_00000E70
    cmpwi r30, 0xa
    beq lbl_fn_806C8DB0_00000EA0
    bge lbl_fn_806C8DB0_00000E64
    cmpwi r30, 0x8
    beq lbl_fn_806C8DB0_00000E98
    b lbl_fn_806C8DB0_00000EE0
lbl_fn_806C8DB0_00000E64:
    cmpwi r30, 0x32
    bge lbl_fn_806C8DB0_00000EA8
    b lbl_fn_806C8DB0_00000EE0
lbl_fn_806C8DB0_00000E70:
    cmpwi r30, 0x37
    beq lbl_fn_806C8DB0_00000ED0
    bge lbl_fn_806C8DB0_00000E8C
    cmpwi r30, 0x35
    beq lbl_fn_806C8DB0_00000EC0
    bge lbl_fn_806C8DB0_00000EC8
    b lbl_fn_806C8DB0_00000EB8
lbl_fn_806C8DB0_00000E8C:
    cmpwi r30, 0x39
    bge lbl_fn_806C8DB0_00000EE0
    b lbl_fn_806C8DB0_00000ED8
lbl_fn_806C8DB0_00000E98:
    addi r6, r31, 0x252c
    b lbl_fn_806C8DB0_00000EE4
lbl_fn_806C8DB0_00000EA0:
    addi r6, r31, 0x2538
    b lbl_fn_806C8DB0_00000EE4
lbl_fn_806C8DB0_00000EA8:
    addi r6, r31, 0x2544
    b lbl_fn_806C8DB0_00000EE4
lbl_fn_806C8DB0_00000EB0:
    addi r6, r31, 0x2548
    b lbl_fn_806C8DB0_00000EE4
lbl_fn_806C8DB0_00000EB8:
    addi r6, r31, 0x68
    b lbl_fn_806C8DB0_00000EE4
lbl_fn_806C8DB0_00000EC0:
    addi r6, r31, 0x2550
    b lbl_fn_806C8DB0_00000EE4
lbl_fn_806C8DB0_00000EC8:
    addi r6, r31, 0x2558
    b lbl_fn_806C8DB0_00000EE4
lbl_fn_806C8DB0_00000ED0:
    addi r6, r31, 0x2560
    b lbl_fn_806C8DB0_00000EE4
lbl_fn_806C8DB0_00000ED8:
    addi r6, r31, 0x2568
    b lbl_fn_806C8DB0_00000EE4
lbl_fn_806C8DB0_00000EE0:
    addi r6, r31, 0x2570
lbl_fn_806C8DB0_00000EE4:
    mr r5, r30
    mr r7, r29
    addi r4, r31, 0x2578
    li r3, 0x200
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806C8DB0_00000F54
lbl_fn_806C8DB0_00000F00:
    subi r0, r3, 0x64
    cmplwi r0, 0x99
    bgt lbl_fn_806C8DB0_00000F54
    mulli r4, r0, 0xc
    lis r3, lbl_80860158@ha
    addi r3, r3, lbl_80860158@l
    lbzx r0, r3, r4
    cmpwi r0, 0x0
    beq lbl_fn_806C8DB0_00000F54
    add r3, r3, r4
    lbz r0, 0x1(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806C8DB0_00000F44
    lwz r4, 0x8(r3)
    mr r3, r5
    bl fn_806EFAE0
    b lbl_fn_806C8DB0_00000F54
lbl_fn_806C8DB0_00000F44:
    lwz r4, 0x8(r3)
    mr r3, r5
    lwz r4, 0x0(r4)
    bl fn_806EFA30
lbl_fn_806C8DB0_00000F54:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806C9670(void)
{
    nofralloc
    blr
}

asm void fn_806C9680(void)
{
    nofralloc
    blr
}

asm void fn_806C9690(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bne lbl_fn_806C9690_00001060
    mr r3, r29
    li r4, 0x8
    bl fn_806EF9F0
    mr r3, r29
    li r4, 0xa
    bl fn_806EF9F0
    mr r3, r29
    li r4, 0x32
    bl fn_806EF9F0
    mr r3, r29
    li r4, 0x33
    bl fn_806EF9F0
    mr r3, r29
    li r4, 0x34
    bl fn_806EF9F0
    mr r3, r29
    li r4, 0x35
    bl fn_806EF9F0
    mr r3, r29
    li r4, 0x36
    bl fn_806EF9F0
    mr r3, r29
    li r4, 0x37
    bl fn_806EF9F0
    mr r3, r29
    li r4, 0x38
    bl fn_806EF9F0
    lis r31, lbl_80860158@ha
    li r30, 0x0
    addi r31, r31, lbl_80860158@l
lbl_fn_806C9690_0000103C:
    lbz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_806C9690_00001050
    mr r3, r29
    bl fn_806EF9F0
lbl_fn_806C9690_00001050:
    addi r30, r30, 0x1
    addi r31, r31, 0xc
    cmpwi r30, 0x9a
    blt lbl_fn_806C9690_0000103C
lbl_fn_806C9690_00001060:
    lis r4, lbl_807C0F78@ha
    mr r5, r28
    addi r4, r4, lbl_807C0F78@l
    li r3, 0x200
    crclr 6
    bl fn_806A76B0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806C9790(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_806C97A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_807C0FA0@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    addi r4, r6, lbl_807C0FA0@l
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x2
    mr r5, r30
    crclr 6
    bl fn_806A76B0
    lis r4, lbl_807BFE68@ha
    mr r5, r31
    addi r4, r4, lbl_807BFE68@l
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
    mr r3, r30
    bl fn_806C6180
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806C9810(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    mr r30, r4
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_806A420C
    lis r4, lbl_807C0FD0@ha
    mr r5, r3
    mr r6, r30
    li r3, 0x40
    addi r4, r4, lbl_807C0FD0@l
    crclr 6
    bl fn_806A76B0
    lis r4, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r4)
    stw r31, 0x6fc(r3)
    lwz r3, lbl_80860898@l(r4)
    sth r30, 0x6f8(r3)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806C9880(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_24
    lis r31, lbl_807BE9D0@ha
    mr r29, r3
    addi r31, r31, lbl_807BE9D0@l
    li r3, 0x40
    mr r5, r29
    addi r4, r31, 0x2620
    crclr 6
    bl fn_806A76B0
    bl fn_806B12F0
    cmpwi r3, 0x0
    bne lbl_fn_806C9880_000011F4
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r0, 0x690(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806C9880_000011F4
    mr r5, r29
    addi r4, r31, 0x2640
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806C9880_000015C8
lbl_fn_806C9880_000011F4:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r28, 0x744(r3)
    cmpwi r28, 0x1
    bne lbl_fn_806C9880_000012E4
    lwz r0, 0x8e0(r3)
    cmpwi r0, 0x2
    bne lbl_fn_806C9880_000012D0
    cmpwi r28, 0x5
    beq lbl_fn_806C9880_000012BC
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
    slwi r0, r28, 2
    lwz r8, 0x14(r3)
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
lbl_fn_806C9880_000012BC:
    lis r3, lbl_80860898@ha
    li r0, 0x5
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
    b lbl_fn_806C9880_00001308
lbl_fn_806C9880_000012D0:
    addi r4, r31, 0x2660
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806C9880_000015C8
lbl_fn_806C9880_000012E4:
    cmpwi r28, 0x5
    beq lbl_fn_806C9880_00001308
    cmpwi r28, 0xe
    beq lbl_fn_806C9880_00001308
    addi r4, r31, 0x154c
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806C9880_000015C8
lbl_fn_806C9880_00001308:
    lis r3, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r3)
    lwz r0, 0x724(r4)
    cmpw r29, r0
    bne lbl_fn_806C9880_0000132C
    lbz r3, 0x720(r4)
    addi r0, r3, 0x1
    stb r0, 0x720(r4)
    b lbl_fn_806C9880_0000133C
lbl_fn_806C9880_0000132C:
    li r0, 0x0
    stb r0, 0x720(r4)
    lwz r3, lbl_80860898@l(r3)
    stw r29, 0x724(r3)
lbl_fn_806C9880_0000133C:
    lis r3, lbl_80860898@ha
    li r0, 0x0
    lwz r6, lbl_80860898@l(r3)
    mr r4, r29
    li r3, 0x1
    stw r0, 0x72c(r6)
    addi r5, r6, 0x660
    stw r0, 0x728(r6)
    bl fn_806BC4C0
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_806C9880_00001374
    li r28, 0x0
    b lbl_fn_806C9880_000015B0
lbl_fn_806C9880_00001374:
    mr r5, r28
    addi r4, r31, 0x1464
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
    cmpwi r28, 0x1
    beq lbl_fn_806C9880_000013A4
    cmpwi r28, 0x2
    beq lbl_fn_806C9880_000013B0
    cmpwi r28, 0x3
    beq lbl_fn_806C9880_000013BC
    b lbl_fn_806C9880_000013C4
lbl_fn_806C9880_000013A4:
    li r30, 0x9
    li r29, -0x1
    b lbl_fn_806C9880_000013C4
lbl_fn_806C9880_000013B0:
    li r30, 0x6
    li r29, -0x32
    b lbl_fn_806C9880_000013C4
lbl_fn_806C9880_000013BC:
    li r30, 0x6
    li r29, -0x1e
lbl_fn_806C9880_000013C4:
    lis r27, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r27)
    cmpwi r3, 0x0
    beq lbl_fn_806C9880_000015B0
    cmpwi r30, 0x0
    beq lbl_fn_806C9880_000015B0
    li r0, 0x1
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r27)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r27)
    subis r4, r29, 0x1
    li r0, 0x0
    mr r3, r30
    stb r0, 0x751(r5)
    subi r4, r4, 0x4ff0
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r27)
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
    lwz r3, lbl_80860898@l(r27)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C9880_00001464
    cmpwi r6, 0x0
    bne lbl_fn_806C9880_00001464
    li r6, 0x1
lbl_fn_806C9880_00001464:
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
    bne lbl_fn_806C9880_000014D4
    li r4, 0x0
    b lbl_fn_806C9880_00001520
lbl_fn_806C9880_000014D4:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806C9880_0000151C
    lwz r3, lbl_80860898@l(r29)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806C9880_00001508
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806C9880_00001508
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C9880_0000151C
lbl_fn_806C9880_00001508:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C9880_0000151C
    li r4, 0x1
    b lbl_fn_806C9880_00001520
lbl_fn_806C9880_0000151C:
    li r4, 0x0
lbl_fn_806C9880_00001520:
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
    lwz r25, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r25)
    cntlzw r0, r3
    srwi r24, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r25)
    mr r7, r3
    lwz r12, 0x8a0(r25)
    mr r3, r30
    subi r0, r4, 0x2
    mr r5, r24
    cntlzw r0, r0
    lwz r8, 0x8a4(r25)
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
lbl_fn_806C9880_000015B0:
    cmpwi r28, 0x0
    bne lbl_fn_806C9880_000015C8
    lis r3, lbl_80860898@ha
    li r0, 0xff
    lwz r3, lbl_80860898@l(r3)
    stb r0, 0x808(r3)
lbl_fn_806C9880_000015C8:
    addi r11, r1, 0x60
    bl _restgpr_24
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806C9CE0(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    mr r31, r4
    stw r30, 0xa8(r1)
    mr r30, r3
    stw r29, 0xa4(r1)
    lis r29, lbl_807BE9D0@ha
    addi r29, r29, lbl_807BE9D0@l
    bl fn_806B1230
    cmpwi r3, 0x4
    beq lbl_fn_806C9CE0_0000165C
    bl fn_806B1230
    cmpwi r3, 0x5
    bne lbl_fn_806C9CE0_00001648
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lbz r0, 0x14(r3)
    cmplwi r0, 0x2
    beq lbl_fn_806C9CE0_0000165C
    lbz r0, 0x14(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806C9CE0_0000165C
lbl_fn_806C9CE0_00001648:
    addi r4, r29, 0x2684
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806C9CE0_00001740
lbl_fn_806C9CE0_0000165C:
    mr r4, r30
    addi r3, r1, 0x8
    li r5, 0x14
    bl fn_806A9CA0
    lwz r0, 0xc(r1)
    lwz r7, 0x18(r1)
    rlwinm r5, r0, 24, 8, 15
    extlwi r4, r0, 8, 8
    rlwimi r5, r0, 24, 24, 31
    rlwinm r3, r7, 24, 8, 15
    rlwimi r4, r0, 8, 16, 23
    extlwi r0, r7, 8, 8
    or r4, r5, r4
    lhz r6, 0x12(r1)
    rotlwi r5, r4, 16
    rlwimi r3, r7, 24, 24, 31
    rlwimi r0, r7, 8, 16, 23
    srawi r4, r6, 8
    or r0, r3, r0
    cmplwi r5, 0x5a
    rlwimi r4, r6, 8, 8, 23
    stw r5, 0xc(r1)
    rotlwi r0, r0, 16
    sth r4, 0x12(r1)
    stw r0, 0x18(r1)
    beq lbl_fn_806C9CE0_000016D8
    addi r4, r29, 0x26ac
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806C9CE0_00001740
lbl_fn_806C9CE0_000016D8:
    lbz r5, 0x11(r1)
    addi r0, r5, 0x14
    cmplw r31, r0
    beq lbl_fn_806C9CE0_000016FC
    addi r4, r29, 0x26d0
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806C9CE0_00001740
lbl_fn_806C9CE0_000016FC:
    addi r3, r1, 0x1c
    addi r4, r30, 0x14
    bl fn_806A9CA0
    lbz r5, 0x10(r1)
    addi r4, r29, 0x26f8
    lwz r6, 0x18(r1)
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lbz r0, 0x11(r1)
    addi r7, r1, 0x1c
    lbz r3, 0x10(r1)
    lwz r4, 0x18(r1)
    srawi r8, r0, 2
    lwz r5, 0x14(r1)
    lhz r6, 0x12(r1)
    bl fn_806BCD40
lbl_fn_806C9CE0_00001740:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_806C9E60(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    lis r31, lbl_807BE9D0@ha
    addi r31, r31, lbl_807BE9D0@l
    stw r30, 0xa8(r1)
    li r30, 0x0
    stw r29, 0xa4(r1)
    mr r29, r4
    stw r28, 0xa0(r1)
    mr r28, r3
    bl fn_806B1230
    cmpwi r3, 0x4
    beq lbl_fn_806C9E60_000018F8
    bl fn_806B1230
    cmpwi r3, 0x5
    bne lbl_fn_806C9E60_000017D0
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lbz r0, 0x14(r3)
    cmplwi r0, 0x2
    beq lbl_fn_806C9E60_000018F8
    lbz r0, 0x14(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806C9E60_000018F8
lbl_fn_806C9E60_000017D0:
    addi r4, r31, 0x2728
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806C9E60_00001904
    b lbl_fn_806C9E60_000018F8
lbl_fn_806C9E60_000017E8:
    mr r4, r28
    addi r3, r1, 0x8
    li r5, 0x14
    bl fn_806A9CA0
    lwz r7, 0xc(r1)
    addi r3, r1, 0x8
    lwz r10, 0x18(r1)
    addi r4, r31, 0xf30
    rlwinm r8, r7, 24, 8, 15
    extlwi r5, r7, 8, 8
    rlwinm r6, r10, 24, 8, 15
    extlwi r0, r10, 8, 8
    lhz r9, 0x12(r1)
    rlwimi r8, r7, 24, 24, 31
    rlwimi r5, r7, 8, 16, 23
    rlwimi r6, r10, 24, 24, 31
    rlwimi r0, r10, 8, 16, 23
    srawi r7, r9, 8
    or r8, r8, r5
    li r5, 0x4
    or r6, r6, r0
    rlwimi r7, r9, 8, 8, 23
    rotlwi r0, r8, 16
    stw r0, 0xc(r1)
    rotlwi r0, r6, 16
    sth r7, 0x12(r1)
    stw r0, 0x18(r1)
    bl fn_80682544
    cmpwi r3, 0x0
    beq lbl_fn_806C9E60_00001874
    addi r4, r31, 0x2750
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806C9E60_00001904
lbl_fn_806C9E60_00001874:
    lwz r0, 0xc(r1)
    cmplwi r0, 0x5a
    beq lbl_fn_806C9E60_00001894
    addi r4, r31, 0x276c
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806C9E60_00001904
lbl_fn_806C9E60_00001894:
    lbz r5, 0x11(r1)
    addi r3, r1, 0x1c
    addi r4, r28, 0x14
    bl fn_806A9CA0
    lbz r5, 0x10(r1)
    addi r4, r31, 0x2790
    lwz r6, 0x14(r1)
    li r3, 0x40
    lhz r7, 0x12(r1)
    lwz r8, 0x18(r1)
    crclr 6
    bl fn_806A76B0
    lbz r0, 0x11(r1)
    addi r7, r1, 0x1c
    lbz r3, 0x10(r1)
    lwz r4, 0x18(r1)
    srawi r8, r0, 2
    lwz r5, 0x14(r1)
    lhz r6, 0x12(r1)
    bl fn_806BCD40
    cmpwi r3, 0x0
    beq lbl_fn_806C9E60_00001904
    lbz r0, 0x11(r1)
    add r3, r0, r30
    addi r30, r3, 0x14
lbl_fn_806C9E60_000018F8:
    addi r0, r30, 0x14
    cmpw r0, r29
    ble lbl_fn_806C9E60_000017E8
lbl_fn_806C9E60_00001904:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    lwz r28, 0xa0(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_806CA020(void)
{
    nofralloc
    lis r4, lbl_807C1188@ha
    mr r5, r3
    addi r4, r4, lbl_807C1188@l
    li r3, 0x40
    crclr 6
    b fn_806A76B0
}

asm void fn_806CA040(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0x110
    bl _savegpr_25
    lis r30, lbl_807BE9D0@ha
    mr r31, r3
    addi r30, r30, lbl_807BE9D0@l
    mr r29, r5
    mr r28, r6
    mr r5, r31
    addi r4, r30, 0x27d4
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    cmpwi r28, 0x0
    beq lbl_fn_806CA040_000019A0
    lwz r5, 0x8(r28)
    addi r4, r30, 0x2800
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
lbl_fn_806CA040_000019A0:
    lis r3, lbl_80860898@ha
    lwz r5, lbl_80860898@l(r3)
    lwz r0, 0x744(r5)
    cmpwi r0, 0x5
    beq lbl_fn_806CA040_000019BC
    cmpwi r0, 0xe
    bne lbl_fn_806CA040_000019C4
lbl_fn_806CA040_000019BC:
    cmpwi r28, 0x0
    bne lbl_fn_806CA040_000019D8
lbl_fn_806CA040_000019C4:
    addi r4, r30, 0x2814
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806CA040_00002C84
lbl_fn_806CA040_000019D8:
    cmpwi cr6, r31, 0x0
    bne cr6, lbl_fn_806CA040_00001F30
    cmpwi r29, 0x0
    beq lbl_fn_806CA040_00001A18
    lhz r3, 0x2(r29)
    bl fn_806A4264
    mr r0, r3
    lwz r3, 0x4(r29)
    clrlwi r4, r0, 16
    li r5, 0x0
    bl fn_806EEDC0
    mr r5, r3
    addi r4, r30, 0x2838
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
lbl_fn_806CA040_00001A18:
    lbz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_fn_806CA040_00001E24
    lis r31, lbl_80860898@ha
    lwz r0, 0x4(r29)
    lwz r3, lbl_80860898@l(r31)
    stw r0, 0x670(r3)
    lwz r25, lbl_80860898@l(r31)
    lhz r3, 0x2(r29)
    bl fn_806A4264
    sth r3, 0x674(r25)
    addi r4, r30, 0x2854
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r31)
    li r0, 0x0
    stb r0, 0x720(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r0, 0x724(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r0, 0x72c(r3)
    stw r0, 0x728(r3)
    lwz r28, 0x744(r3)
    cmpwi r28, 0x6
    beq lbl_fn_806CA040_00001BD8
    cmpwi r28, 0xe
    bne lbl_fn_806CA040_00001B38
    lis r29, lbl_80860890@ha
    addi r27, r29, lbl_80860890@l
    lwz r26, lbl_80860890@l(r29)
    lwz r25, 0x4(r27)
    bl OSGetTime
    stw r4, 0x4(r27)
    lis r27, 0x1062
    lis r6, 0x8000
    subfc r4, r25, r4
    stw r3, lbl_80860890@l(r29)
    addi r7, r27, 0x4dd3
    subfe r3, r26, r3
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
    slwi r0, r28, 2
    lwz r8, 0x3c(r3)
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
    lwz r3, lbl_80860898@l(r31)
    li r0, 0xf
    stw r0, 0x744(r3)
    b lbl_fn_806CA040_00001BE8
lbl_fn_806CA040_00001B38:
    lis r29, lbl_80860890@ha
    addi r27, r29, lbl_80860890@l
    lwz r25, lbl_80860890@l(r29)
    lwz r26, 0x4(r27)
    bl OSGetTime
    stw r4, 0x4(r27)
    lis r27, 0x1062
    lis r6, 0x8000
    subfc r4, r26, r4
    stw r3, lbl_80860890@l(r29)
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
    slwi r0, r28, 2
    lwz r8, 0x18(r3)
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
lbl_fn_806CA040_00001BD8:
    lis r3, lbl_80860898@ha
    li r0, 0x6
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
lbl_fn_806CA040_00001BE8:
    lis r27, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r27)
    li r5, 0x0
    stb r0, 0xc(r3)
    lwz r4, lbl_80860898@l(r27)
    lwz r3, 0x670(r4)
    lhz r4, 0x674(r4)
    bl fn_806EEDC0
    mr r5, r3
    addi r4, r30, 0x2878
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    lwz r6, lbl_80860898@l(r27)
    addi r3, r1, 0x38
    addi r5, r30, 0x5c
    li r4, 0x18
    lwz r6, 0x7a8(r6)
    crclr 6
    bl fn_806809C0
    lwz r25, lbl_80860898@l(r27)
    li r5, 0x0
    lwz r3, 0x670(r25)
    lhz r4, 0x674(r25)
    bl fn_806EEDC0
    lwz r4, 0x4(r25)
    mr r5, r3
    lwz r9, 0x8(r25)
    addi r6, r1, 0x38
    lwz r3, 0x0(r4)
    li r4, 0x0
    li r7, -0x1
    li r8, 0x1388
    li r10, 0x0
    bl fn_806EA920
    lwz r6, lbl_80860898@l(r27)
    lwz r0, 0x6c0(r6)
    cmpwi r0, 0x0
    beq lbl_fn_806CA040_00001DC4
    cmpwi r3, 0x0
    beq lbl_fn_806CA040_00001DC4
    lwz r0, 0x58(r6)
    mr r5, r6
    lwz r3, 0x660(r6)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806CA040_00001CD8
    nop
lbl_fn_806CA040_00001CB0:
    lwz r0, 0x60(r5)
    cmpw r3, r0
    bne lbl_fn_806CA040_00001CCC
    mulli r0, r4, 0x30
    add r3, r6, r0
    addi r6, r3, 0x60
    b lbl_fn_806CA040_00001CDC
lbl_fn_806CA040_00001CCC:
    addi r5, r5, 0x30
    addi r4, r4, 0x1
    bdnz lbl_fn_806CA040_00001CB0
lbl_fn_806CA040_00001CD8:
    li r6, 0x0
lbl_fn_806CA040_00001CDC:
    lwz r5, 0x18(r6)
    addi r4, r30, 0x2890
    li r3, 0x40
    addi r0, r5, 0x1
    stw r0, 0x18(r6)
    crclr 6
    bl fn_806A76B0
    bl fn_806CD150
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r29, 0x744(r3)
    cmpwi r29, 0x1
    beq lbl_fn_806CA040_00001DB0
    lis r28, lbl_80860890@ha
    addi r27, r28, lbl_80860890@l
    lwz r25, lbl_80860890@l(r28)
    lwz r26, 0x4(r27)
    bl OSGetTime
    stw r4, 0x4(r27)
    lis r27, 0x1062
    lis r6, 0x8000
    subfc r4, r26, r4
    stw r3, lbl_80860890@l(r28)
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
    slwi r0, r29, 2
    lwz r8, 0x4(r3)
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
lbl_fn_806CA040_00001DB0:
    lis r3, lbl_80860898@ha
    li r0, 0x1
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
    b lbl_fn_806CA040_00002C84
lbl_fn_806CA040_00001DC4:
    cmpwi r3, 0x1
    bne lbl_fn_806CA040_00001DD4
    bl fn_806C6470
    b lbl_fn_806CA040_00002C84
lbl_fn_806CA040_00001DD4:
    cmpwi r3, 0x0
    beq lbl_fn_806CA040_00002C84
    lis r3, lbl_80860898@ha
    li r4, 0x2
    lwz r5, lbl_80860898@l(r3)
    lbz r0, 0x15(r5)
    lwz r3, 0x660(r5)
    cmpwi r0, 0x0
    beq lbl_fn_806CA040_00001E04
    lbz r0, 0x15(r5)
    cmplwi r0, 0x1
    bne lbl_fn_806CA040_00001E14
lbl_fn_806CA040_00001E04:
    lbz r0, 0xd(r6)
    cmpwi r0, 0x0
    bne lbl_fn_806CA040_00001E14
    li r4, 0x1
lbl_fn_806CA040_00001E14:
    bl fn_806C10C0
    cmpwi r3, 0x0
    bne lbl_fn_806CA040_00002C84
    b lbl_fn_806CA040_00002C84
lbl_fn_806CA040_00001E24:
    addi r4, r30, 0x28a4
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    cmpwi r29, 0x0
    beq lbl_fn_806CA040_00001E5C
    lis r4, lbl_80860898@ha
    lwz r0, 0x4(r29)
    lwz r3, lbl_80860898@l(r4)
    stw r0, 0x670(r3)
    lwz r25, lbl_80860898@l(r4)
    lhz r3, 0x2(r29)
    bl fn_806A4264
    sth r3, 0x674(r25)
lbl_fn_806CA040_00001E5C:
    bl OSGetTime
    lis r5, lbl_80860898@ha
    lwz r5, lbl_80860898@l(r5)
    stw r4, 0x734(r5)
    stw r3, 0x730(r5)
    lwz r29, 0x744(r5)
    cmpwi r29, 0x6
    beq lbl_fn_806CA040_00001F1C
    lis r28, lbl_80860890@ha
    addi r27, r28, lbl_80860890@l
    lwz r25, lbl_80860890@l(r28)
    lwz r26, 0x4(r27)
    bl OSGetTime
    stw r4, 0x4(r27)
    lis r27, 0x1062
    lis r6, 0x8000
    subfc r4, r26, r4
    stw r3, lbl_80860890@l(r28)
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
    slwi r0, r29, 2
    lwz r8, 0x18(r3)
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
lbl_fn_806CA040_00001F1C:
    lis r3, lbl_80860898@ha
    li r0, 0x6
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
    b lbl_fn_806CA040_00002C84
lbl_fn_806CA040_00001F30:
    lwz r0, 0x8(r28)
    cmpwi r0, 0x0
    bne lbl_fn_806CA040_00001F50
    addi r4, r30, 0x28cc
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806CA040_00002C84
lbl_fn_806CA040_00001F50:
    lwz r0, 0x6c0(r5)
    cmpwi r0, 0x0
    beq lbl_fn_806CA040_00002094
    lis r3, lbl_80860898@ha
    li r4, 0x0
    lwz r6, lbl_80860898@l(r3)
    lwz r0, 0x58(r6)
    lwz r3, 0x660(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806CA040_00001FA8
    nop
lbl_fn_806CA040_00001F80:
    lwz r0, 0x60(r6)
    cmpw r3, r0
    bne lbl_fn_806CA040_00001F9C
    mulli r0, r4, 0x30
    add r3, r5, r0
    addi r6, r3, 0x60
    b lbl_fn_806CA040_00001FAC
lbl_fn_806CA040_00001F9C:
    addi r6, r6, 0x30
    addi r4, r4, 0x1
    bdnz lbl_fn_806CA040_00001F80
lbl_fn_806CA040_00001FA8:
    li r6, 0x0
lbl_fn_806CA040_00001FAC:
    lwz r5, 0x18(r6)
    addi r4, r30, 0x2890
    li r3, 0x40
    addi r0, r5, 0x1
    stw r0, 0x18(r6)
    crclr 6
    bl fn_806A76B0
    bl fn_806CD150
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r29, 0x744(r3)
    cmpwi r29, 0x1
    beq lbl_fn_806CA040_00002080
    lis r28, lbl_80860890@ha
    addi r27, r28, lbl_80860890@l
    lwz r25, lbl_80860890@l(r28)
    lwz r26, 0x4(r27)
    bl OSGetTime
    stw r4, 0x4(r27)
    lis r27, 0x1062
    lis r6, 0x8000
    subfc r4, r26, r4
    stw r3, lbl_80860890@l(r28)
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
    slwi r0, r29, 2
    lwz r8, 0x4(r3)
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
lbl_fn_806CA040_00002080:
    lis r3, lbl_80860898@ha
    li r0, 0x1
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
    b lbl_fn_806CA040_00002C84
lbl_fn_806CA040_00002094:
    bne cr6, lbl_fn_806CA040_000020A0
    li r31, 0x0
    b lbl_fn_806CA040_000022D8
lbl_fn_806CA040_000020A0:
    mr r5, r31
    addi r4, r30, 0x28f4
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    cmpwi r31, 0x1
    beq lbl_fn_806CA040_000020D0
    cmpwi r31, 0x2
    beq lbl_fn_806CA040_000020D8
    cmpwi r31, 0x3
    beq lbl_fn_806CA040_000020E0
    b lbl_fn_806CA040_000020E8
lbl_fn_806CA040_000020D0:
    li r31, 0x1
    b lbl_fn_806CA040_000022D8
lbl_fn_806CA040_000020D8:
    li r31, 0x2
    b lbl_fn_806CA040_000022D8
lbl_fn_806CA040_000020E0:
    li r31, 0x3
    b lbl_fn_806CA040_000022D8
lbl_fn_806CA040_000020E8:
    lis r27, lbl_80860898@ha
    li r0, 0x6
    lwz r3, lbl_80860898@l(r27)
    cmpwi cr6, r0, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_806CA040_000022D8
    beq cr6, lbl_fn_806CA040_000022D8
    li r0, 0x1
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r27)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r27)
    li r0, 0x0
    lis r4, 0xffff
    li r3, 0x6
    stb r0, 0x751(r5)
    subi r4, r4, 0x4ff9
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r27)
    addi r3, r1, 0x2c
    addi r5, r30, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x60
    addi r4, r1, 0x2c
    addi r5, r1, 0xc8
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r27)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806CA040_0000218C
    cmpwi r6, 0x0
    bne lbl_fn_806CA040_0000218C
    li r6, 0x1
lbl_fn_806CA040_0000218C:
    addi r3, r1, 0x2c
    addi r5, r30, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x64
    addi r4, r1, 0x2c
    addi r5, r1, 0xc8
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x2c
    addi r5, r30, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x68
    addi r4, r1, 0x2c
    addi r5, r1, 0xc8
    li r6, 0x2f
    bl fn_806AB980
    lis r27, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r27)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806CA040_000021FC
    li r4, 0x0
    b lbl_fn_806CA040_00002248
lbl_fn_806CA040_000021FC:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806CA040_00002244
    lwz r3, lbl_80860898@l(r27)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806CA040_00002230
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806CA040_00002230
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806CA040_00002244
lbl_fn_806CA040_00002230:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806CA040_00002244
    li r4, 0x1
    b lbl_fn_806CA040_00002248
lbl_fn_806CA040_00002244:
    li r4, 0x0
lbl_fn_806CA040_00002248:
    neg r0, r4
    addi r3, r1, 0x2c
    or r0, r0, r4
    addi r5, r30, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x6c
    addi r4, r1, 0x2c
    addi r5, r1, 0xc8
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0xc8
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r26, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r26)
    cntlzw r0, r3
    srwi r25, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r26)
    mr r7, r3
    lwz r12, 0x8a0(r26)
    mr r5, r25
    subi r0, r4, 0x2
    lwz r8, 0x8a4(r26)
    cntlzw r0, r0
    li r3, 0x6
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
lbl_fn_806CA040_000022D8:
    subi r0, r31, 0x1
    cmplwi r0, 0x2
    bgt lbl_fn_806CA040_00002C84
    lbz r0, 0x0(r28)
    cmpwi r0, 0x0
    bne lbl_fn_806CA040_0000290C
    lbz r5, 0x1(r28)
    addi r4, r30, 0x290c
    li r3, 0x40
    li r6, 0x1
    crclr 6
    bl fn_806A76B0
    cmpwi r31, 0x1
    beq lbl_fn_806CA040_0000232C
    cmpwi r31, 0x3
    beq lbl_fn_806CA040_0000232C
    cmpwi r31, 0x2
    bne lbl_fn_806CA040_000025F8
    lbz r0, 0x1(r28)
    cmplwi r0, 0x1
    blt lbl_fn_806CA040_000025F8
lbl_fn_806CA040_0000232C:
    addi r4, r30, 0x2924
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lis r27, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r27)
    lwz r3, 0x740(r3)
    bl fn_806FC900
    li r0, 0x0
    stw r0, 0x8(r28)
    lwz r7, lbl_80860898@l(r27)
    lbz r0, 0x15(r7)
    cmplwi r0, 0x3
    beq lbl_fn_806CA040_0000238C
    lbz r5, 0x721(r7)
    addi r4, r30, 0x2930
    li r3, 0x40
    li r6, 0x5
    addi r0, r5, 0x1
    stb r0, 0x721(r7)
    lwz r5, lbl_80860898@l(r27)
    lbz r5, 0x721(r5)
    crclr 6
    bl fn_806A76B0
lbl_fn_806CA040_0000238C:
    lis r3, lbl_80860898@ha
    lwz r5, lbl_80860898@l(r3)
    lbz r0, 0x15(r5)
    cmplwi r0, 0x3
    beq lbl_fn_806CA040_000023B8
    lwz r0, 0x8c8(r5)
    cmpwi r0, 0x0
    bne lbl_fn_806CA040_000023B8
    lbz r0, 0x721(r5)
    cmplwi r0, 0x5
    blt lbl_fn_806CA040_000025D0
lbl_fn_806CA040_000023B8:
    cmpwi r29, 0x0
    beq lbl_fn_806CA040_000023D0
    lis r4, lbl_80860144@ha
    lwz r3, lbl_80860144@l(r4)
    addi r0, r3, 0x1
    stw r0, lbl_80860144@l(r4)
lbl_fn_806CA040_000023D0:
    cmpwi r5, 0x0
    beq lbl_fn_806CA040_000025B0
    li r0, 0x1
    stb r0, 0x751(r5)
    lis r27, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r27)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r27)
    li r0, 0x0
    lis r4, 0xffff
    li r3, 0x6
    stb r0, 0x751(r5)
    subi r4, r4, 0x5194
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r27)
    addi r3, r1, 0x20
    addi r5, r30, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x60
    addi r4, r1, 0x20
    addi r5, r1, 0xa0
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r27)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806CA040_00002464
    cmpwi r6, 0x0
    bne lbl_fn_806CA040_00002464
    li r6, 0x1
lbl_fn_806CA040_00002464:
    addi r3, r1, 0x20
    addi r5, r30, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x64
    addi r4, r1, 0x20
    addi r5, r1, 0xa0
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x20
    addi r5, r30, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x68
    addi r4, r1, 0x20
    addi r5, r1, 0xa0
    li r6, 0x2f
    bl fn_806AB980
    lis r27, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r27)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806CA040_000024D4
    li r4, 0x0
    b lbl_fn_806CA040_00002520
lbl_fn_806CA040_000024D4:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806CA040_0000251C
    lwz r3, lbl_80860898@l(r27)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806CA040_00002508
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806CA040_00002508
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806CA040_0000251C
lbl_fn_806CA040_00002508:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806CA040_0000251C
    li r4, 0x1
    b lbl_fn_806CA040_00002520
lbl_fn_806CA040_0000251C:
    li r4, 0x0
lbl_fn_806CA040_00002520:
    neg r0, r4
    addi r3, r1, 0x20
    or r0, r0, r4
    addi r5, r30, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x6c
    addi r4, r1, 0x20
    addi r5, r1, 0xa0
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0xa0
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r26, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r26)
    cntlzw r0, r3
    srwi r25, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r26)
    mr r7, r3
    lwz r12, 0x8a0(r26)
    mr r5, r25
    subi r0, r4, 0x2
    lwz r8, 0x8a4(r26)
    cntlzw r0, r0
    li r3, 0x6
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
lbl_fn_806CA040_000025B0:
    cmpwi r29, 0x0
    beq lbl_fn_806CA040_000025C8
    lis r4, lbl_80860144@ha
    lwz r3, lbl_80860144@l(r4)
    subi r0, r3, 0x1
    stw r0, lbl_80860144@l(r4)
lbl_fn_806CA040_000025C8:
    li r0, 0x0
    b lbl_fn_806CA040_000025D4
lbl_fn_806CA040_000025D0:
    li r0, 0x1
lbl_fn_806CA040_000025D4:
    cmpwi r0, 0x0
    beq lbl_fn_806CA040_00002C84
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r3, 0x660(r3)
    bl fn_806C1430
    cmpwi r3, 0x0
    bne lbl_fn_806CA040_00002C84
    b lbl_fn_806CA040_00002C84
lbl_fn_806CA040_000025F8:
    lbz r0, 0x0(r28)
    lbz r3, 0x1(r28)
    cmpwi r0, 0x0
    addi r0, r3, 0x1
    stb r0, 0x1(r28)
    bne lbl_fn_806CA040_00002664
    lis r4, lbl_80860898@ha
    lwz r3, 0x4(r28)
    lwz r25, lbl_80860898@l(r4)
    li r4, 0x0
    li r5, 0x0
    bl fn_806EEDC0
    mr r4, r3
    lwz r3, 0x704(r25)
    lhz r5, 0x2(r28)
    lwz r6, 0x8(r28)
    bl fn_806FFD10
    bl fn_806C5EB0
    cmpwi r3, 0x0
    beq lbl_fn_806CA040_00002650
    li r31, 0x2
    b lbl_fn_806CA040_000026B4
lbl_fn_806CA040_00002650:
    lwz r5, 0x8(r28)
    addi r4, r30, 0xec4
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
lbl_fn_806CA040_00002664:
    lis r3, lbl_80860898@ha
    lis r31, fn_806CA020@ha
    lwz r3, lbl_80860898@l(r3)
    lis r27, fn_806CA040@ha
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAD00
    lwz r4, 0x8(r28)
    mr r8, r28
    lbz r5, 0x0(r28)
    addi r6, r31, fn_806CA020@l
    addi r7, r27, fn_806CA040@l
    bl fn_806FC5D0
    cmpwi r3, 0x3
    mr r31, r3
    bne lbl_fn_806CA040_000026B4
    addi r4, r30, 0xedc
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
lbl_fn_806CA040_000026B4:
    cmpwi r31, 0x0
    bne lbl_fn_806CA040_000026C4
    li r31, 0x0
    b lbl_fn_806CA040_00002900
lbl_fn_806CA040_000026C4:
    mr r5, r31
    addi r4, r30, 0x1464
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
    cmpwi r31, 0x1
    beq lbl_fn_806CA040_000026F4
    cmpwi r31, 0x2
    beq lbl_fn_806CA040_00002700
    cmpwi r31, 0x3
    beq lbl_fn_806CA040_0000270C
    b lbl_fn_806CA040_00002714
lbl_fn_806CA040_000026F4:
    li r29, 0x9
    li r28, -0x1
    b lbl_fn_806CA040_00002714
lbl_fn_806CA040_00002700:
    li r29, 0x6
    li r28, -0x32
    b lbl_fn_806CA040_00002714
lbl_fn_806CA040_0000270C:
    li r29, 0x6
    li r28, -0x1e
lbl_fn_806CA040_00002714:
    lis r27, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r27)
    cmpwi r3, 0x0
    beq lbl_fn_806CA040_00002900
    cmpwi r29, 0x0
    beq lbl_fn_806CA040_00002900
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
    addi r5, r1, 0x78
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r27)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806CA040_000027B4
    cmpwi r6, 0x0
    bne lbl_fn_806CA040_000027B4
    li r6, 0x1
lbl_fn_806CA040_000027B4:
    addi r3, r1, 0x14
    addi r5, r30, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x64
    addi r4, r1, 0x14
    addi r5, r1, 0x78
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
    addi r5, r1, 0x78
    li r6, 0x2f
    bl fn_806AB980
    lis r27, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r27)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806CA040_00002824
    li r4, 0x0
    b lbl_fn_806CA040_00002870
lbl_fn_806CA040_00002824:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806CA040_0000286C
    lwz r3, lbl_80860898@l(r27)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806CA040_00002858
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806CA040_00002858
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806CA040_0000286C
lbl_fn_806CA040_00002858:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806CA040_0000286C
    li r4, 0x1
    b lbl_fn_806CA040_00002870
lbl_fn_806CA040_0000286C:
    li r4, 0x0
lbl_fn_806CA040_00002870:
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
    addi r5, r1, 0x78
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x78
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r26, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r26)
    cntlzw r0, r3
    srwi r25, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r26)
    mr r7, r3
    lwz r12, 0x8a0(r26)
    mr r3, r29
    subi r0, r4, 0x2
    mr r5, r25
    cntlzw r0, r0
    lwz r8, 0x8a4(r26)
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
lbl_fn_806CA040_00002900:
    cmpwi r31, 0x0
    beq lbl_fn_806CA040_00002C84
    b lbl_fn_806CA040_00002C84
lbl_fn_806CA040_0000290C:
    lis r27, lbl_80860898@ha
    addi r4, r30, 0x2944
    lwz r5, lbl_80860898@l(r27)
    li r3, 0x40
    li r6, 0x1
    lbz r5, 0x720(r5)
    crclr 6
    bl fn_806A76B0
    bl OSGetTime
    lwz r5, lbl_80860898@l(r27)
    cmpwi r31, 0x1
    stw r4, 0x72c(r5)
    stw r3, 0x728(r5)
    beq lbl_fn_806CA040_00002960
    cmpwi r31, 0x3
    beq lbl_fn_806CA040_00002960
    cmpwi r31, 0x2
    bne lbl_fn_806CA040_00002C84
    lbz r0, 0x720(r5)
    cmplwi r0, 0x1
    blt lbl_fn_806CA040_00002C84
lbl_fn_806CA040_00002960:
    addi r4, r30, 0x2924
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lis r31, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r31)
    lwz r3, 0x740(r3)
    bl fn_806FC900
    li r0, 0x0
    stw r0, 0x8(r28)
    lwz r7, lbl_80860898@l(r31)
    lbz r0, 0x15(r7)
    cmplwi r0, 0x3
    beq lbl_fn_806CA040_00002C28
    lbz r0, 0x15(r7)
    cmplwi r0, 0x2
    beq lbl_fn_806CA040_00002C28
    lbz r0, 0x15(r7)
    cmplwi r0, 0x3
    beq lbl_fn_806CA040_000029D8
    lbz r5, 0x721(r7)
    addi r4, r30, 0x2930
    li r3, 0x40
    li r6, 0x5
    addi r0, r5, 0x1
    stb r0, 0x721(r7)
    lwz r5, lbl_80860898@l(r31)
    lbz r5, 0x721(r5)
    crclr 6
    bl fn_806A76B0
lbl_fn_806CA040_000029D8:
    lis r3, lbl_80860898@ha
    lwz r5, lbl_80860898@l(r3)
    lbz r0, 0x15(r5)
    cmplwi r0, 0x3
    beq lbl_fn_806CA040_00002A04
    lwz r0, 0x8c8(r5)
    cmpwi r0, 0x0
    bne lbl_fn_806CA040_00002A04
    lbz r0, 0x721(r5)
    cmplwi r0, 0x5
    blt lbl_fn_806CA040_00002C1C
lbl_fn_806CA040_00002A04:
    cmpwi r29, 0x0
    beq lbl_fn_806CA040_00002A1C
    lis r4, lbl_80860144@ha
    lwz r3, lbl_80860144@l(r4)
    addi r0, r3, 0x1
    stw r0, lbl_80860144@l(r4)
lbl_fn_806CA040_00002A1C:
    cmpwi r5, 0x0
    beq lbl_fn_806CA040_00002BFC
    li r0, 0x1
    stb r0, 0x751(r5)
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r28)
    li r0, 0x0
    lis r4, 0xffff
    li r3, 0x6
    stb r0, 0x751(r5)
    subi r4, r4, 0x5194
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r28)
    addi r3, r1, 0x8
    addi r5, r30, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x60
    addi r4, r1, 0x8
    addi r5, r1, 0x50
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806CA040_00002AB0
    cmpwi r6, 0x0
    bne lbl_fn_806CA040_00002AB0
    li r6, 0x1
lbl_fn_806CA040_00002AB0:
    addi r3, r1, 0x8
    addi r5, r30, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x64
    addi r4, r1, 0x8
    addi r5, r1, 0x50
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x8
    addi r5, r30, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x68
    addi r4, r1, 0x8
    addi r5, r1, 0x50
    li r6, 0x2f
    bl fn_806AB980
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806CA040_00002B20
    li r4, 0x0
    b lbl_fn_806CA040_00002B6C
lbl_fn_806CA040_00002B20:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806CA040_00002B68
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806CA040_00002B54
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806CA040_00002B54
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806CA040_00002B68
lbl_fn_806CA040_00002B54:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806CA040_00002B68
    li r4, 0x1
    b lbl_fn_806CA040_00002B6C
lbl_fn_806CA040_00002B68:
    li r4, 0x0
lbl_fn_806CA040_00002B6C:
    neg r0, r4
    addi r3, r1, 0x8
    or r0, r0, r4
    addi r5, r30, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x6c
    addi r4, r1, 0x8
    addi r5, r1, 0x50
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x50
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r26, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r26)
    cntlzw r0, r3
    srwi r25, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r26)
    mr r7, r3
    lwz r12, 0x8a0(r26)
    mr r5, r25
    subi r0, r4, 0x2
    lwz r8, 0x8a4(r26)
    cntlzw r0, r0
    li r3, 0x6
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
lbl_fn_806CA040_00002BFC:
    cmpwi r29, 0x0
    beq lbl_fn_806CA040_00002C14
    lis r4, lbl_80860144@ha
    lwz r3, lbl_80860144@l(r4)
    subi r0, r3, 0x1
    stw r0, lbl_80860144@l(r4)
lbl_fn_806CA040_00002C14:
    li r0, 0x0
    b lbl_fn_806CA040_00002C20
lbl_fn_806CA040_00002C1C:
    li r0, 0x1
lbl_fn_806CA040_00002C20:
    cmpwi r0, 0x0
    beq lbl_fn_806CA040_00002C84
lbl_fn_806CA040_00002C28:
    lis r5, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r5)
    li r4, 0x2
    stb r0, 0x720(r3)
    lwz r3, lbl_80860898@l(r5)
    stw r0, 0x724(r3)
    lwz r5, lbl_80860898@l(r5)
    stw r0, 0x72c(r5)
    stw r0, 0x728(r5)
    lbz r0, 0x15(r5)
    lwz r3, 0x660(r5)
    cmpwi r0, 0x0
    beq lbl_fn_806CA040_00002C6C
    lbz r0, 0x15(r5)
    cmplwi r0, 0x1
    bne lbl_fn_806CA040_00002C7C
lbl_fn_806CA040_00002C6C:
    lbz r0, 0xd(r5)
    cmpwi r0, 0x0
    bne lbl_fn_806CA040_00002C7C
    li r4, 0x1
lbl_fn_806CA040_00002C7C:
    bl fn_806C10C0
    cmpwi r3, 0x0
lbl_fn_806CA040_00002C84:
    addi r11, r1, 0x110
    bl _restgpr_25
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}
