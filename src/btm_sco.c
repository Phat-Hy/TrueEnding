#include "revolution/types.h"

/* External function declarations */
extern void _restgpr_20(void);
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_20(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_80626C60(void);
extern void fn_80626D50(void);
extern void fn_80629810(void);
extern void fn_80629830(void);
extern void fn_80629850(void);
extern void fn_806298D0(void);
extern void fn_80630CE8(void);
extern void fn_80631894(void);
extern void fn_8063C9D4(void);
extern void fn_8063CA5C(void);
extern void fn_8063CAE8(void);
extern void fn_8063CB48(void);
extern void fn_8063D068(void);
extern void fn_8063D4EC(void);
extern void fn_8063D5E8(void);
extern void fn_8063D6D0(void);
extern void fn_8067E23C(void);

/* External data declarations */
extern u8 lbl_807B4880[];
extern u8 lbl_807B490C[];
extern u8 lbl_807B495C[];
extern u8 lbl_807B49AC[];
extern u8 lbl_807B4B44[];
extern u8 lbl_807B4B80[];
extern u8 lbl_80820018[];

/* Small data declarations */

/* Function declarations */
void fn_80636408(void);
void fn_806365E4(void);
void fn_80636770(void);
void fn_80636950(void);
void fn_80636AF0(void);
void fn_80636BA8(void);
void fn_80636C2C(void);
void fn_80636D40(void);
void fn_80636DF4(void);
void fn_80636DF8(void);
void fn_80636FA0(void);
void fn_806370A4(void);
void fn_80637114(void);
void fn_80637174(void);
void fn_806371FC(void);

asm void fn_80636408(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r29, r5
    mr r28, r6
    li r31, 0x0
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80636408_00000064
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x1
    blt lbl_fn_80636408_000001C4
    lis r4, lbl_807B4880@ha
    lis r3, 0xd
    addi r4, r4, lbl_807B4880@l
    bl fn_80629810
    b lbl_fn_80636408_000001C4
lbl_fn_80636408_00000064:
    cmplwi r26, 0x3
    bge lbl_fn_80636408_00000080
    mulli r0, r26, 0x34
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    add r3, r3, r0
    addi r31, r3, 0x1854
lbl_fn_80636408_00000080:
    cmpwi r27, 0x0
    beq lbl_fn_80636408_000000E0
    cmpwi r31, 0x0
    beq lbl_fn_80636408_000000A4
    lhz r3, 0x8(r31)
    subi r0, r3, 0x2
    cntlzw r0, r0
    extrwi r0, r0, 16, 11
    sth r0, 0x8(r31)
lbl_fn_80636408_000000A4:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x1908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80636408_000000CC
    mr r3, r30
    mr r4, r29
    mr r5, r27
    bl fn_8063CB48
    b lbl_fn_80636408_000001C4
lbl_fn_80636408_000000CC:
    mr r3, r30
    mr r4, r29
    mr r5, r27
    bl fn_8063D6D0
    b lbl_fn_80636408_000001C4
lbl_fn_80636408_000000E0:
    li r3, 0x1
    bl fn_80631894
    li r0, 0x3
    lis r3, lbl_80820018@ha
    sth r0, 0x8(r31)
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x1908(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80636408_000001B4
    lbz r0, 0x2e(r31)
    cmplwi r0, 0x2
    bne lbl_fn_80636408_000001B4
    cmpwi r28, 0x0
    beq lbl_fn_80636408_00000138
    lwz r3, 0x0(r28)
    lwz r0, 0x4(r28)
    stw r3, 0x14(r31)
    stw r0, 0x18(r31)
    lwz r3, 0x8(r28)
    lwz r0, 0xc(r28)
    stw r3, 0x1c(r31)
    stw r0, 0x20(r31)
lbl_fn_80636408_00000138:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lhz r4, 0x1904(r3)
    sth r4, 0x20(r31)
    lhz r5, 0x656(r3)
    and r3, r4, r5
    rlwinm. r0, r3, 0, 26, 28
    clrlwi r28, r3, 26
    bne lbl_fn_80636408_00000164
    ori r0, r28, 0x8
    clrlwi r28, r0, 16
lbl_fn_80636408_00000164:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x636(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80636408_00000188
    or r0, r4, r5
    rlwinm r0, r0, 0, 22, 25
    or r0, r28, r0
    clrlwi r28, r0, 16
lbl_fn_80636408_00000188:
    lwz r5, 0x14(r31)
    mr r3, r30
    lwz r6, 0x18(r31)
    mr r4, r29
    lhz r7, 0x1c(r31)
    clrlwi r10, r28, 16
    lhz r8, 0x1e(r31)
    lbz r9, 0x22(r31)
    bl fn_8063D5E8
    sth r28, 0x20(r31)
    b lbl_fn_80636408_000001C4
lbl_fn_80636408_000001B4:
    mr r3, r30
    mr r4, r29
    li r5, 0x0
    bl fn_8063CAE8
lbl_fn_80636408_000001C4:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806365E4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_20
    lis r28, lbl_80820018@ha
    mr r23, r3
    addi r28, r28, lbl_80820018@l
    mr r24, r4
    mr r25, r5
    li r27, 0x0
    addi r26, r28, 0x1854
    lis r30, 0xd
    lis r31, lbl_807B495C@ha
    lis r21, lbl_807B490C@ha
    li r22, 0x3
lbl_fn_806365E4_0000021C:
    lhz r0, 0x8(r26)
    cmplwi r0, 0x6
    bne lbl_fn_806365E4_00000340
    cmpwi r25, 0x0
    bne lbl_fn_806365E4_00000340
    cmpwi r23, 0x0
    bne lbl_fn_806365E4_00000340
    addi r3, r26, 0x28
    bl fn_80630CE8
    clrlwi r5, r3, 16
    mr r29, r3
    cmplw r24, r5
    bne lbl_fn_806365E4_00000340
    lbz r0, 0x27c0(r28)
    cmplwi r0, 0x3
    blt lbl_fn_806365E4_0000026C
    lbz r6, 0x1909(r28)
    addi r3, r30, 0x2
    addi r4, r31, lbl_807B495C@l
    bl fn_80629850
lbl_fn_806365E4_0000026C:
    li r3, 0x1
    bl fn_80631894
    lbz r0, 0x1908(r28)
    cmpwi r0, 0x0
    bne lbl_fn_806365E4_000002A0
    lhz r0, 0x20(r26)
    clrlwi r3, r29, 16
    clrlslwi r4, r0, 29, 5
    bl fn_8063CA5C
    clrlwi. r0, r3, 24
    bne lbl_fn_806365E4_00000330
    li r0, 0x3
    b lbl_fn_806365E4_00000334
lbl_fn_806365E4_000002A0:
    lbz r0, 0x636(r28)
    lhz r3, 0x656(r28)
    lhz r4, 0x20(r26)
    cmplwi r0, 0x3
    and r0, r4, r3
    clrlwi r20, r0, 26
    blt lbl_fn_806365E4_000002CC
    or r0, r4, r3
    rlwinm r0, r0, 0, 22, 25
    or r0, r20, r0
    clrlwi r20, r0, 16
lbl_fn_806365E4_000002CC:
    lbz r0, 0x27c0(r28)
    cmplwi r0, 0x3
    blt lbl_fn_806365E4_000002FC
    lwz r5, 0x14(r26)
    addi r3, r30, 0x2
    lwz r6, 0x18(r26)
    addi r4, r21, lbl_807B490C@l
    lhz r7, 0x1c(r26)
    clrlwi r10, r20, 16
    lhz r8, 0x1e(r26)
    lbz r9, 0x22(r26)
    bl fn_806298D0
lbl_fn_806365E4_000002FC:
    lwz r4, 0x14(r26)
    clrlwi r3, r29, 16
    lwz r5, 0x18(r26)
    clrlwi r9, r20, 16
    lhz r6, 0x1c(r26)
    lhz r7, 0x1e(r26)
    lbz r8, 0x22(r26)
    bl fn_8063D4EC
    clrlwi. r0, r3, 24
    bne lbl_fn_806365E4_0000032C
    li r0, 0x3
    b lbl_fn_806365E4_00000334
lbl_fn_806365E4_0000032C:
    sth r20, 0x20(r26)
lbl_fn_806365E4_00000330:
    li r0, 0x1
lbl_fn_806365E4_00000334:
    cmplwi r0, 0x1
    bne lbl_fn_806365E4_00000340
    sth r22, 0x8(r26)
lbl_fn_806365E4_00000340:
    addi r27, r27, 0x1
    addi r26, r26, 0x34
    cmplwi r27, 0x3
    blt lbl_fn_806365E4_0000021C
    addi r11, r1, 0x40
    bl _restgpr_20
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80636770(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lis r6, lbl_80820018@ha
    mr r30, r3
    addi r6, r6, lbl_80820018@l
    mr r29, r4
    mr r31, r5
    li r28, 0x0
    addi r27, r6, 0x1854
lbl_fn_80636770_00000398:
    lhz r3, 0x8(r27)
    cmplwi r3, 0x1
    bne lbl_fn_80636770_000003B0
    lbz r0, 0xd(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80636770_000003B8
lbl_fn_80636770_000003B0:
    cmplwi r3, 0x3
    bne lbl_fn_80636770_00000458
lbl_fn_80636770_000003B8:
    mr r4, r30
    addi r3, r27, 0x28
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80636770_00000458
    li r0, 0x1
    mr r4, r30
    stb r0, 0xd(r27)
    addi r3, r27, 0x28
    li r5, 0x6
    stb r31, 0x2e(r27)
    bl memcpy
    lwz r0, 0x10(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80636770_00000410
    mr r5, r30
    clrlwi r3, r28, 16
    li r4, 0x0
    li r6, 0x0
    bl fn_80636408
    b lbl_fn_80636770_00000530
lbl_fn_80636770_00000410:
    mr r4, r30
    addi r3, r1, 0xa
    li r5, 0x6
    bl memcpy
    mr r4, r29
    addi r3, r1, 0x10
    li r5, 0x3
    bl memcpy
    li r0, 0x2
    stb r31, 0x13(r1)
    addi r4, r1, 0x8
    li r3, 0x2
    sth r0, 0x8(r27)
    lwz r12, 0x10(r27)
    sth r28, 0x8(r1)
    mtctr r12
    bctrl
    b lbl_fn_80636770_00000530
lbl_fn_80636770_00000458:
    addi r28, r28, 0x1
    addi r27, r27, 0x34
    cmplwi r28, 0x3
    blt lbl_fn_80636770_00000398
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lwz r0, 0x1850(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80636770_000004F4
    li r0, 0x3
    addi r28, r3, 0x1854
    li r27, 0x0
    mtctr r0
lbl_fn_80636770_0000048C:
    lhz r0, 0x8(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80636770_000004C4
    li r0, 0x0
    li r29, 0x1
    stb r0, 0xc(r28)
    mr r4, r30
    addi r3, r28, 0x28
    li r5, 0x6
    sth r29, 0x8(r28)
    stb r31, 0x2e(r28)
    bl memcpy
    stb r29, 0xd(r28)
    b lbl_fn_80636770_000004D0
lbl_fn_80636770_000004C4:
    addi r27, r27, 0x1
    addi r28, r28, 0x34
    bdnz lbl_fn_80636770_0000048C
lbl_fn_80636770_000004D0:
    clrlwi r3, r27, 16
    cmplwi r3, 0x3
    bge lbl_fn_80636770_000004F4
    lis r4, lbl_80820018@ha
    addi r4, r4, lbl_80820018@l
    lwz r12, 0x1850(r4)
    mtctr r12
    bctrl
    b lbl_fn_80636770_00000530
lbl_fn_80636770_000004F4:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80636770_0000051C
    lis r3, 0xd
    lis r4, lbl_807B49AC@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B49AC@l
    bl fn_80629810
lbl_fn_80636770_0000051C:
    mr r5, r30
    li r3, 0x3
    li r4, 0xd
    li r6, 0x0
    bl fn_80636408
lbl_fn_80636770_00000530:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80636950(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r7, lbl_80820018@ha
    mr r24, r3
    addi r7, r7, lbl_80820018@l
    mr r25, r4
    sth r3, 0x18f6(r7)
    mr r26, r5
    mr r29, r6
    addi r31, r7, 0x1854
    li r27, 0x0
    li r30, 0x0
lbl_fn_80636950_00000584:
    lhz r28, 0x8(r31)
    addis r3, r28, 0x1
    subi r0, r3, 0x1
    clrlwi r0, r0, 16
    cmplwi r0, 0x2
    bgt lbl_fn_80636950_000006C0
    lbz r0, 0xd(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80636950_000006C0
    cmpwi r25, 0x0
    beq lbl_fn_80636950_000005C8
    mr r4, r25
    addi r3, r31, 0x28
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80636950_000006C0
lbl_fn_80636950_000005C8:
    cmpwi r24, 0x0
    beq lbl_fn_80636950_00000608
    cmplwi r28, 0x3
    bne lbl_fn_80636950_000005FC
    cmplwi r24, 0x23
    beq lbl_fn_80636950_000006D0
    li r0, 0x0
    clrlwi r3, r30, 16
    sth r0, 0x8(r31)
    lwz r12, 0x4(r31)
    mtctr r12
    bctrl
    b lbl_fn_80636950_000006D0
lbl_fn_80636950_000005FC:
    li r0, 0x1
    sth r0, 0x8(r31)
    b lbl_fn_80636950_000006D0
lbl_fn_80636950_00000608:
    cmplwi r28, 0x1
    bne lbl_fn_80636950_00000614
    li r27, 0x1
lbl_fn_80636950_00000614:
    li r0, 0x4
    lis r3, lbl_80820018@ha
    sth r0, 0x8(r31)
    addi r3, r3, lbl_80820018@l
    sth r26, 0xa(r31)
    lbz r0, 0x1908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80636950_0000066C
    li r0, 0x0
    cmpwi r27, 0x0
    stb r0, 0x2e(r31)
    beq lbl_fn_80636950_000006AC
    lhz r6, 0x20(r31)
    clrlwi r3, r30, 16
    lhz r5, 0x1c(r31)
    addi r4, r1, 0x8
    lbz r0, 0x22(r31)
    sth r6, 0xa(r1)
    sth r5, 0x8(r1)
    stb r0, 0xc(r1)
    bl fn_80636DF8
    b lbl_fn_80636950_000006AC
lbl_fn_80636950_0000066C:
    cmpwi r29, 0x0
    beq lbl_fn_80636950_000006AC
    lhz r3, 0x0(r29)
    lhz r0, 0x2(r29)
    sth r3, 0x24(r31)
    sth r0, 0x26(r31)
    lhz r3, 0x4(r29)
    lhz r0, 0x6(r29)
    sth r3, 0x28(r31)
    sth r0, 0x2a(r31)
    lhz r0, 0x8(r29)
    sth r0, 0x2c(r31)
    lhz r0, 0xa(r29)
    sth r0, 0x2e(r31)
    lhz r0, 0xc(r29)
    sth r0, 0x30(r31)
lbl_fn_80636950_000006AC:
    lwz r12, 0x0(r31)
    clrlwi r3, r30, 16
    mtctr r12
    bctrl
    b lbl_fn_80636950_000006D0
lbl_fn_80636950_000006C0:
    addi r30, r30, 0x1
    addi r31, r31, 0x34
    cmplwi r30, 0x3
    blt lbl_fn_80636950_00000584
lbl_fn_80636950_000006D0:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80636AF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80820018@ha
    cmplwi r3, 0x3
    stw r0, 0x14(r1)
    mulli r0, r3, 0x34
    addi r4, r4, lbl_80820018@l
    stw r31, 0xc(r1)
    add r31, r4, r0
    stw r30, 0x8(r1)
    bge lbl_fn_80636AF0_00000720
    lhz r30, 0x185c(r31)
    cmpwi r30, 0x0
    bne lbl_fn_80636AF0_00000728
lbl_fn_80636AF0_00000720:
    li r3, 0x7
    b lbl_fn_80636AF0_00000788
lbl_fn_80636AF0_00000728:
    lhz r0, 0x185e(r31)
    cmplwi r0, 0xffff
    beq lbl_fn_80636AF0_0000073C
    cmplwi r30, 0x6
    bne lbl_fn_80636AF0_0000075C
lbl_fn_80636AF0_0000073C:
    lis r3, 0x1
    li r0, 0x0
    subi r4, r3, 0x1
    sth r4, 0x185e(r31)
    li r3, 0x0
    sth r0, 0x185c(r31)
    stw r0, 0x1864(r31)
    b lbl_fn_80636AF0_00000788
lbl_fn_80636AF0_0000075C:
    li r0, 0x5
    li r4, 0x13
    sth r0, 0x185c(r31)
    lhz r3, 0x185e(r31)
    bl fn_8063C9D4
    clrlwi. r0, r3, 24
    bne lbl_fn_80636AF0_00000784
    sth r30, 0x185c(r31)
    li r3, 0x3
    b lbl_fn_80636AF0_00000788
lbl_fn_80636AF0_00000784:
    li r3, 0x1
lbl_fn_80636AF0_00000788:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80636BA8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80820018@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80820018@l
    stw r31, 0x1c(r1)
    addi r31, r4, 0x1854
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
lbl_fn_80636BA8_000007CC:
    lbz r0, 0xd(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80636BA8_000007F8
    mr r4, r29
    addi r3, r31, 0x28
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80636BA8_000007F8
    clrlwi r3, r30, 16
    bl fn_80636AF0
lbl_fn_80636BA8_000007F8:
    addi r30, r30, 0x1
    addi r31, r31, 0x34
    cmplwi r30, 0x3
    blt lbl_fn_80636BA8_000007CC
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80636C2C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80820018@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_80820018@l
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x0
    sth r4, 0x18f6(r5)
    lhz r0, 0x185c(r5)
    cmpwi r0, 0x7
    bge lbl_fn_80636C2C_00000864
    cmpwi r0, 0x2
    bge lbl_fn_80636C2C_00000860
    b lbl_fn_80636C2C_00000864
lbl_fn_80636C2C_00000860:
    li r3, 0x1
lbl_fn_80636C2C_00000864:
    lhz r0, 0x1890(r5)
    cmpwi r0, 0x7
    bge lbl_fn_80636C2C_00000880
    cmpwi r0, 0x2
    bge lbl_fn_80636C2C_0000087C
    b lbl_fn_80636C2C_00000880
lbl_fn_80636C2C_0000087C:
    addi r3, r3, 0x1
lbl_fn_80636C2C_00000880:
    lhz r0, 0x18c4(r5)
    cmpwi r0, 0x7
    bge lbl_fn_80636C2C_0000089C
    cmpwi r0, 0x2
    bge lbl_fn_80636C2C_00000898
    b lbl_fn_80636C2C_0000089C
lbl_fn_80636C2C_00000898:
    addi r3, r3, 0x1
lbl_fn_80636C2C_0000089C:
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    bgt lbl_fn_80636C2C_000008B0
    li r3, 0x0
    bl fn_80631894
lbl_fn_80636C2C_000008B0:
    lis r3, lbl_80820018@ha
    li r0, 0x3
    addi r3, r3, lbl_80820018@l
    li r6, 0x0
    addi r5, r3, 0x1854
    mtctr r0
lbl_fn_80636C2C_000008C8:
    lhz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80636C2C_00000918
    cmplwi r0, 0x1
    beq lbl_fn_80636C2C_00000918
    lhz r0, 0xa(r5)
    cmplw r0, r31
    bne lbl_fn_80636C2C_00000918
    li r4, 0x0
    lis r3, 0x1
    sth r4, 0x8(r5)
    subi r0, r3, 0x1
    clrlwi r3, r6, 16
    sth r0, 0xa(r5)
    stb r4, 0xd(r5)
    stw r4, 0x10(r5)
    lwz r12, 0x4(r5)
    mtctr r12
    bctrl
    b lbl_fn_80636C2C_00000924
lbl_fn_80636C2C_00000918:
    addi r6, r6, 0x1
    addi r5, r5, 0x34
    bdnz lbl_fn_80636C2C_000008C8
lbl_fn_80636C2C_00000924:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80636D40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80820018@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80820018@l
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    addi r30, r4, 0x1854
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
lbl_fn_80636D40_0000096C:
    lhz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80636D40_000009BC
    cmpwi r28, 0x0
    beq lbl_fn_80636D40_000009A4
    mr r4, r28
    addi r3, r30, 0x28
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80636D40_000009BC
    lbz r0, 0xd(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80636D40_000009BC
lbl_fn_80636D40_000009A4:
    sth r31, 0x8(r30)
    clrlwi r3, r29, 16
    stw r31, 0x10(r30)
    lwz r12, 0x4(r30)
    mtctr r12
    bctrl
lbl_fn_80636D40_000009BC:
    addi r29, r29, 0x1
    addi r30, r30, 0x34
    cmplwi r29, 0x3
    blt lbl_fn_80636D40_0000096C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80636DF4(void)
{
    nofralloc
    b fn_80626D50
}

asm void fn_80636DF8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmplwi r3, 0x3
    lis r30, lbl_807B4880@ha
    mr r28, r4
    addi r30, r30, lbl_807B4880@l
    bge lbl_fn_80636DF8_00000A34
    mulli r0, r3, 0x34
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    add r31, r3, r0
    lhz r0, 0x185c(r31)
    cmplwi r0, 0x4
    beq lbl_fn_80636DF8_00000A3C
lbl_fn_80636DF8_00000A34:
    li r3, 0x6
    b lbl_fn_80636DF8_00000B80
lbl_fn_80636DF8_00000A3C:
    lbz r0, 0x1882(r31)
    addi r29, r31, 0x1868
    cmpwi r0, 0x0
    beq lbl_fn_80636DF8_00000A58
    lbz r0, 0x1908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80636DF8_00000AB8
lbl_fn_80636DF8_00000A58:
    lis r3, lbl_80820018@ha
    lhz r4, 0x2(r4)
    addi r3, r3, lbl_80820018@l
    lhz r0, 0x656(r3)
    clrlwi r0, r0, 29
    and r0, r4, r0
    sth r0, 0xc(r29)
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80636DF8_00000A98
    lis r3, 0xd
    lhz r5, 0x185e(r31)
    lhz r6, 0xc(r29)
    addi r3, r3, 0x2
    addi r4, r30, 0x248
    bl fn_80629850
lbl_fn_80636DF8_00000A98:
    lhz r0, 0xc(r29)
    lhz r3, 0x185e(r31)
    clrlslwi r4, r0, 29, 5
    bl fn_8063D068
    clrlwi. r0, r3, 24
    bne lbl_fn_80636DF8_00000B7C
    li r3, 0x3
    b lbl_fn_80636DF8_00000B80
lbl_fn_80636DF8_00000AB8:
    lbz r0, 0x636(r3)
    lhz r3, 0x656(r3)
    lhz r4, 0x2(r4)
    cmplwi r0, 0x3
    and r0, r4, r3
    clrlwi r27, r0, 26
    blt lbl_fn_80636DF8_00000AE4
    or r0, r4, r3
    rlwinm r0, r0, 0, 22, 25
    or r0, r27, r0
    clrlwi r27, r0, 16
lbl_fn_80636DF8_00000AE4:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80636DF8_00000B0C
    lis r3, 0xd
    lhz r5, 0x185e(r31)
    addi r3, r3, 0x2
    addi r4, r30, 0x28c
    bl fn_80629830
lbl_fn_80636DF8_00000B0C:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80636DF8_00000B48
    lis r3, 0xd
    lwz r5, 0x0(r29)
    lwz r6, 0x4(r29)
    addi r3, r3, 0x2
    lhz r7, 0x0(r28)
    addi r4, r30, 0x8c
    lhz r8, 0xa(r29)
    clrlwi r10, r27, 16
    lbz r9, 0x4(r28)
    bl fn_806298D0
lbl_fn_80636DF8_00000B48:
    lhz r3, 0x185e(r31)
    clrlwi r9, r27, 16
    lwz r4, 0x0(r29)
    lwz r5, 0x4(r29)
    lhz r6, 0x0(r28)
    lhz r7, 0xa(r29)
    lbz r8, 0x4(r28)
    bl fn_8063D4EC
    clrlwi. r0, r3, 24
    bne lbl_fn_80636DF8_00000B78
    li r3, 0x3
    b lbl_fn_80636DF8_00000B80
lbl_fn_80636DF8_00000B78:
    sth r27, 0x2(r28)
lbl_fn_80636DF8_00000B7C:
    li r3, 0x1
lbl_fn_80636DF8_00000B80:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80636FA0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_24
    lis r9, lbl_80820018@ha
    mr r24, r3
    addi r9, r9, lbl_80820018@l
    mr r25, r4
    lbz r0, 0x27c0(r9)
    mr r26, r5
    mr r27, r6
    mr r28, r7
    cmplwi r0, 0x4
    mr r29, r8
    addi r31, r9, 0x1854
    blt lbl_fn_80636FA0_00000BF8
    lis r3, 0xd
    lis r4, lbl_807B4B44@ha
    mr r5, r25
    mr r6, r24
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B4B44@l
    bl fn_80629850
lbl_fn_80636FA0_00000BF8:
    li r0, 0x3
    li r30, 0x0
    mtctr r0
lbl_fn_80636FA0_00000C04:
    lhz r0, 0x8(r31)
    cmplwi r0, 0x4
    bne lbl_fn_80636FA0_00000C78
    lhz r0, 0xa(r31)
    cmplw r25, r0
    bne lbl_fn_80636FA0_00000C78
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80636FA0_00000C84
    addi r3, r1, 0xe
    addi r4, r31, 0x28
    li r5, 0x6
    bl memcpy
    sth r28, 0x24(r31)
    addi r4, r1, 0x8
    li r3, 0x1
    sth r29, 0x26(r31)
    stb r26, 0x2f(r31)
    stb r27, 0x30(r31)
    lwz r12, 0x10(r31)
    stb r24, 0x14(r1)
    sth r30, 0x8(r1)
    sth r28, 0xa(r1)
    sth r29, 0xc(r1)
    stb r26, 0x15(r1)
    stb r27, 0x16(r1)
    mtctr r12
    bctrl
    b lbl_fn_80636FA0_00000C84
lbl_fn_80636FA0_00000C78:
    addi r30, r30, 0x1
    addi r31, r31, 0x34
    bdnz lbl_fn_80636FA0_00000C04
lbl_fn_80636FA0_00000C84:
    addi r11, r1, 0x40
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806370A4(void)
{
    nofralloc
    lis r4, lbl_80820018@ha
    addi r4, r4, lbl_80820018@l
    lhz r0, 0x185e(r4)
    cmplw r3, r0
    bne lbl_fn_806370A4_00000CC4
    lhz r0, 0x185c(r4)
    cmplwi r0, 0x4
    bne lbl_fn_806370A4_00000CC4
    li r3, 0x1
    blr
lbl_fn_806370A4_00000CC4:
    lhz r0, 0x1892(r4)
    cmplw r3, r0
    bne lbl_fn_806370A4_00000CE4
    lhz r0, 0x1890(r4)
    cmplwi r0, 0x4
    bne lbl_fn_806370A4_00000CE4
    li r3, 0x1
    blr
lbl_fn_806370A4_00000CE4:
    lhz r0, 0x18c6(r4)
    cmplw r3, r0
    bne lbl_fn_806370A4_00000D04
    lhz r0, 0x18c4(r4)
    cmplwi r0, 0x4
    bne lbl_fn_806370A4_00000D04
    li r3, 0x1
    blr
lbl_fn_806370A4_00000D04:
    li r3, 0x0
    blr
}

asm void fn_80637114(void)
{
    nofralloc
    lis r4, lbl_80820018@ha
    li r3, 0x0
    addi r4, r4, lbl_80820018@l
    lhz r0, 0x185c(r4)
    cmpwi r0, 0x7
    bge lbl_fn_80637114_00000D34
    cmpwi r0, 0x2
    bge lbl_fn_80637114_00000D30
    b lbl_fn_80637114_00000D34
lbl_fn_80637114_00000D30:
    li r3, 0x1
lbl_fn_80637114_00000D34:
    lhz r0, 0x1890(r4)
    cmpwi r0, 0x7
    bge lbl_fn_80637114_00000D50
    cmpwi r0, 0x2
    bge lbl_fn_80637114_00000D4C
    b lbl_fn_80637114_00000D50
lbl_fn_80637114_00000D4C:
    addi r3, r3, 0x1
lbl_fn_80637114_00000D50:
    lhz r0, 0x18c4(r4)
    cmpwi r0, 0x7
    bgelr
    cmpwi r0, 0x2
    bltlr
    addi r3, r3, 0x1
    blr
}

asm void fn_80637174(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80820018@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80820018@l
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    addi r30, r4, 0x1854
    stw r29, 0x14(r1)
    mr r29, r3
lbl_fn_80637174_00000D98:
    mr r4, r29
    addi r3, r30, 0x28
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80637174_00000DC4
    lhz r0, 0x8(r30)
    cmplwi r0, 0x4
    bne lbl_fn_80637174_00000DC4
    li r3, 0x1
    b lbl_fn_80637174_00000DD8
lbl_fn_80637174_00000DC4:
    addi r31, r31, 0x1
    addi r30, r30, 0x34
    cmplwi r31, 0x3
    blt lbl_fn_80637174_00000D98
    li r3, 0x0
lbl_fn_80637174_00000DD8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806371FC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_80820018@ha
    stw r0, 0x14(r1)
    addi r6, r6, lbl_80820018@l
    lwz r5, 0x0(r3)
    lwz r4, 0x4(r3)
    lbz r0, 0x27c0(r6)
    stw r5, 0x190c(r6)
    cmplwi r0, 0x4
    stw r4, 0x1910(r6)
    lwz r4, 0x8(r3)
    lwz r0, 0xc(r3)
    stw r4, 0x1914(r6)
    stw r0, 0x1918(r6)
    lwz r4, 0x10(r3)
    lwz r0, 0x14(r3)
    stw r4, 0x191c(r6)
    stw r0, 0x1920(r6)
    blt lbl_fn_806371FC_00000E58
    lis r3, 0xd
    lis r4, lbl_807B4B80@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B4B80@l
    bl fn_80629810
lbl_fn_806371FC_00000E58:
    lwz r0, 0x14(r1)
    li r3, 0x1
    mtlr r0
    addi r1, r1, 0x10
    blr
}
