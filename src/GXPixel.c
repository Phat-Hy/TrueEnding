#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_805F30F0(void);
extern void fn_805F3130(void);
extern void fn_805F3210(void);
extern void fn_8061A130(void);
extern void fn_8061A150(void);
extern void fn_8061A1C0(void);
extern void fn_8061A230(void);

/* External data declarations */
extern u8 lbl_807E7608[];
extern u8 lbl_807E7618[];

/* Small data declarations */
extern u32 lbl_808800B8;

/* Function declarations */
void fn_80618F60(void);
void fn_806190A0(void);
void fn_80619260(void);
void fn_806193D0(void);
void fn_80619600(void);
void fn_806196E0(void);
void fn_806197B0(void);
void fn_80619920(void);
void fn_806199D0(void);
void fn_80619A00(void);
void fn_80619AB0(void);
void fn_80619B80(void);
void fn_80619C60(void);
void fn_80619CB0(void);
void fn_80619D40(void);
void fn_80619D70(void);
void fn_80619E90(void);
void fn_80619F30(void);

asm void fn_80618F60(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r4
    b lbl_fn_80618F60_00000104
lbl_fn_80618F60_0000002C:
    lwz r0, 0x18(r3)
    cmplw r0, r28
    bgt lbl_fn_80618F60_00000104
    lwz r0, 0x1c(r3)
    cmplw r28, r0
    bge lbl_fn_80618F60_00000104
    li r31, 0x0
    b lbl_fn_80618F60_000000D4
lbl_fn_80618F60_0000004C:
    lwz r0, 0x18(r3)
    cmplw r0, r28
    bgt lbl_fn_80618F60_000000D4
    lwz r0, 0x1c(r3)
    cmplw r28, r0
    bge lbl_fn_80618F60_000000D4
    li r30, 0x0
    b lbl_fn_80618F60_000000A4
lbl_fn_80618F60_0000006C:
    lwz r0, 0x18(r3)
    cmplw r0, r28
    bgt lbl_fn_80618F60_000000A4
    lwz r0, 0x1c(r3)
    cmplw r28, r0
    bge lbl_fn_80618F60_000000A4
    mr r4, r28
    addi r3, r3, 0xc
    bl fn_80618F60
    cmpwi r3, 0x0
    beq lbl_fn_80618F60_0000009C
    b lbl_fn_80618F60_000000C0
lbl_fn_80618F60_0000009C:
    mr r3, r30
    b lbl_fn_80618F60_000000C0
lbl_fn_80618F60_000000A4:
    mr r4, r30
    addi r3, r31, 0xc
    bl fn_8061A230
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80618F60_0000006C
    li r3, 0x0
lbl_fn_80618F60_000000C0:
    cmpwi r3, 0x0
    beq lbl_fn_80618F60_000000CC
    b lbl_fn_80618F60_000000F0
lbl_fn_80618F60_000000CC:
    mr r3, r31
    b lbl_fn_80618F60_000000F0
lbl_fn_80618F60_000000D4:
    mr r4, r31
    addi r3, r29, 0xc
    bl fn_8061A230
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_80618F60_0000004C
    li r3, 0x0
lbl_fn_80618F60_000000F0:
    cmpwi r3, 0x0
    beq lbl_fn_80618F60_000000FC
    b lbl_fn_80618F60_00000120
lbl_fn_80618F60_000000FC:
    mr r3, r29
    b lbl_fn_80618F60_00000120
lbl_fn_80618F60_00000104:
    mr r3, r30
    mr r4, r29
    bl fn_8061A230
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_80618F60_0000002C
    li r3, 0x0
lbl_fn_80618F60_00000120:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806190A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    stw r4, 0x0(r3)
    li r0, 0x0
    rlwimi r0, r7, 0, 24, 31
    mr r27, r3
    stw r5, 0x18(r3)
    li r4, 0x4
    stw r6, 0x1c(r3)
    stw r0, 0x38(r3)
    addi r3, r3, 0xc
    bl fn_8061A130
    lwz r0, lbl_808800B8
    cmpwi r0, 0x0
    bne lbl_fn_806190A0_000001AC
    lis r3, lbl_807E7608@ha
    li r4, 0x4
    addi r3, r3, lbl_807E7608@l
    bl fn_8061A130
    lis r3, lbl_807E7618@ha
    addi r3, r3, lbl_807E7618@l
    bl fn_805F30F0
    li r0, 0x1
    stw r0, lbl_808800B8
lbl_fn_806190A0_000001AC:
    addi r3, r27, 0x20
    bl fn_805F30F0
    lis r3, lbl_807E7618@ha
    addi r3, r3, lbl_807E7618@l
    bl fn_805F3130
    lis r31, lbl_807E7608@ha
    li r30, 0x0
    addi r28, r31, lbl_807E7608@l
    b lbl_fn_806190A0_000002A8
lbl_fn_806190A0_000001D0:
    lwz r0, 0x18(r3)
    cmplw r0, r27
    bgt lbl_fn_806190A0_000002A8
    lwz r0, 0x1c(r3)
    cmplw r27, r0
    bge lbl_fn_806190A0_000002A8
    li r31, 0x0
    b lbl_fn_806190A0_00000278
lbl_fn_806190A0_000001F0:
    lwz r0, 0x18(r3)
    cmplw r0, r27
    bgt lbl_fn_806190A0_00000278
    lwz r0, 0x1c(r3)
    cmplw r27, r0
    bge lbl_fn_806190A0_00000278
    li r29, 0x0
    b lbl_fn_806190A0_00000248
lbl_fn_806190A0_00000210:
    lwz r0, 0x18(r3)
    cmplw r0, r27
    bgt lbl_fn_806190A0_00000248
    lwz r0, 0x1c(r3)
    cmplw r27, r0
    bge lbl_fn_806190A0_00000248
    mr r4, r27
    addi r3, r3, 0xc
    bl fn_80618F60
    cmpwi r3, 0x0
    beq lbl_fn_806190A0_00000240
    b lbl_fn_806190A0_00000264
lbl_fn_806190A0_00000240:
    mr r3, r29
    b lbl_fn_806190A0_00000264
lbl_fn_806190A0_00000248:
    mr r4, r29
    addi r3, r31, 0xc
    bl fn_8061A230
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_806190A0_00000210
    li r3, 0x0
lbl_fn_806190A0_00000264:
    cmpwi r3, 0x0
    beq lbl_fn_806190A0_00000270
    b lbl_fn_806190A0_00000294
lbl_fn_806190A0_00000270:
    mr r3, r31
    b lbl_fn_806190A0_00000294
lbl_fn_806190A0_00000278:
    mr r4, r31
    addi r3, r30, 0xc
    bl fn_8061A230
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806190A0_000001F0
    li r3, 0x0
lbl_fn_806190A0_00000294:
    cmpwi r3, 0x0
    beq lbl_fn_806190A0_000002A0
    b lbl_fn_806190A0_000002C4
lbl_fn_806190A0_000002A0:
    mr r3, r30
    b lbl_fn_806190A0_000002C4
lbl_fn_806190A0_000002A8:
    mr r4, r30
    addi r3, r31, lbl_807E7608@l
    bl fn_8061A230
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_806190A0_000001D0
    li r3, 0x0
lbl_fn_806190A0_000002C4:
    cmpwi r3, 0x0
    beq lbl_fn_806190A0_000002D0
    addi r28, r3, 0xc
lbl_fn_806190A0_000002D0:
    mr r3, r28
    mr r4, r27
    bl fn_8061A150
    lis r3, lbl_807E7618@ha
    addi r3, r3, lbl_807E7618@l
    bl fn_805F3210
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80619260(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r4, lbl_807E7618@ha
    mr r27, r3
    addi r3, r4, lbl_807E7618@l
    bl fn_805F3130
    lis r31, lbl_807E7608@ha
    li r30, 0x0
    addi r28, r31, lbl_807E7608@l
    b lbl_fn_80619260_0000040C
lbl_fn_80619260_00000334:
    lwz r0, 0x18(r3)
    cmplw r0, r27
    bgt lbl_fn_80619260_0000040C
    lwz r0, 0x1c(r3)
    cmplw r27, r0
    bge lbl_fn_80619260_0000040C
    li r31, 0x0
    b lbl_fn_80619260_000003DC
lbl_fn_80619260_00000354:
    lwz r0, 0x18(r3)
    cmplw r0, r27
    bgt lbl_fn_80619260_000003DC
    lwz r0, 0x1c(r3)
    cmplw r27, r0
    bge lbl_fn_80619260_000003DC
    li r29, 0x0
    b lbl_fn_80619260_000003AC
lbl_fn_80619260_00000374:
    lwz r0, 0x18(r3)
    cmplw r0, r27
    bgt lbl_fn_80619260_000003AC
    lwz r0, 0x1c(r3)
    cmplw r27, r0
    bge lbl_fn_80619260_000003AC
    mr r4, r27
    addi r3, r3, 0xc
    bl fn_80618F60
    cmpwi r3, 0x0
    beq lbl_fn_80619260_000003A4
    b lbl_fn_80619260_000003C8
lbl_fn_80619260_000003A4:
    mr r3, r29
    b lbl_fn_80619260_000003C8
lbl_fn_80619260_000003AC:
    mr r4, r29
    addi r3, r31, 0xc
    bl fn_8061A230
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_80619260_00000374
    li r3, 0x0
lbl_fn_80619260_000003C8:
    cmpwi r3, 0x0
    beq lbl_fn_80619260_000003D4
    b lbl_fn_80619260_000003F8
lbl_fn_80619260_000003D4:
    mr r3, r31
    b lbl_fn_80619260_000003F8
lbl_fn_80619260_000003DC:
    mr r4, r31
    addi r3, r30, 0xc
    bl fn_8061A230
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_80619260_00000354
    li r3, 0x0
lbl_fn_80619260_000003F8:
    cmpwi r3, 0x0
    beq lbl_fn_80619260_00000404
    b lbl_fn_80619260_00000428
lbl_fn_80619260_00000404:
    mr r3, r30
    b lbl_fn_80619260_00000428
lbl_fn_80619260_0000040C:
    mr r4, r30
    addi r3, r31, lbl_807E7608@l
    bl fn_8061A230
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80619260_00000334
    li r3, 0x0
lbl_fn_80619260_00000428:
    cmpwi r3, 0x0
    beq lbl_fn_80619260_00000434
    addi r28, r3, 0xc
lbl_fn_80619260_00000434:
    mr r3, r28
    mr r4, r27
    bl fn_8061A1C0
    lis r3, lbl_807E7618@ha
    addi r3, r3, lbl_807E7618@l
    bl fn_805F3210
    li r0, 0x0
    stw r0, 0x0(r27)
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806193D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r8, 0x8(r4)
    add r30, r6, r5
    lhz r6, 0x2(r4)
    subi r29, r5, 0x10
    lwz r0, 0x4(r4)
    cmpwi r8, 0x0
    extrwi r9, r6, 7, 17
    lwz r10, 0xc(r4)
    add r6, r4, r0
    mr r27, r5
    mr r26, r3
    mr r28, r7
    mr r31, r29
    subf r5, r9, r4
    addi r6, r6, 0x10
    beq lbl_fn_806193D0_000004CC
    stw r10, 0xc(r8)
    b lbl_fn_806193D0_000004D0
lbl_fn_806193D0_000004CC:
    stw r10, 0x0(r3)
lbl_fn_806193D0_000004D0:
    cmpwi r10, 0x0
    beq lbl_fn_806193D0_000004E0
    stw r8, 0x8(r10)
    b lbl_fn_806193D0_000004E4
lbl_fn_806193D0_000004E0:
    stw r8, 0x4(r3)
lbl_fn_806193D0_000004E4:
    subf r0, r5, r29
    cmplwi r0, 0x14
    blt lbl_fn_806193D0_00000504
    cmpwi r7, 0x0
    bne lbl_fn_806193D0_0000050C
    lhz r0, 0x12(r3)
    extrwi. r0, r0, 1, 30
    bne lbl_fn_806193D0_0000050C
lbl_fn_806193D0_00000504:
    mr r31, r5
    b lbl_fn_806193D0_00000568
lbl_fn_806193D0_0000050C:
    li r0, 0x4652
    sth r0, 0x0(r5)
    li r4, 0x0
    cmpwi r8, 0x0
    sth r4, 0x2(r5)
    addi r0, r5, 0x10
    subf r0, r0, r29
    stw r0, 0x4(r5)
    stw r4, 0xc(r5)
    stw r8, 0x8(r5)
    beq lbl_fn_806193D0_00000544
    lwz r4, 0xc(r8)
    stw r5, 0xc(r8)
    b lbl_fn_806193D0_0000054C
lbl_fn_806193D0_00000544:
    lwz r4, 0x0(r3)
    stw r5, 0x0(r3)
lbl_fn_806193D0_0000054C:
    cmpwi r4, 0x0
    stw r4, 0xc(r5)
    beq lbl_fn_806193D0_00000560
    stw r5, 0x8(r4)
    b lbl_fn_806193D0_00000564
lbl_fn_806193D0_00000560:
    stw r5, 0x4(r3)
lbl_fn_806193D0_00000564:
    mr r8, r5
lbl_fn_806193D0_00000568:
    subf r0, r30, r6
    cmplwi r0, 0x14
    blt lbl_fn_806193D0_00000588
    cmplwi r7, 0x1
    bne lbl_fn_806193D0_00000590
    lhz r0, 0x12(r3)
    extrwi. r0, r0, 1, 30
    bne lbl_fn_806193D0_00000590
lbl_fn_806193D0_00000588:
    mr r30, r6
    b lbl_fn_806193D0_000005E8
lbl_fn_806193D0_00000590:
    li r0, 0x4652
    sth r0, 0x0(r30)
    li r4, 0x0
    cmpwi r8, 0x0
    sth r4, 0x2(r30)
    addi r0, r30, 0x10
    subf r0, r0, r6
    stw r0, 0x4(r30)
    stw r4, 0xc(r30)
    stw r8, 0x8(r30)
    beq lbl_fn_806193D0_000005C8
    lwz r4, 0xc(r8)
    stw r30, 0xc(r8)
    b lbl_fn_806193D0_000005D0
lbl_fn_806193D0_000005C8:
    lwz r4, 0x0(r3)
    stw r30, 0x0(r3)
lbl_fn_806193D0_000005D0:
    cmpwi r4, 0x0
    stw r4, 0xc(r30)
    beq lbl_fn_806193D0_000005E4
    stw r30, 0x8(r4)
    b lbl_fn_806193D0_000005E8
lbl_fn_806193D0_000005E4:
    stw r30, 0x4(r3)
lbl_fn_806193D0_000005E8:
    lwz r0, -0x4(r3)
    subf r5, r31, r30
    clrlwi. r0, r0, 31
    beq lbl_fn_806193D0_00000604
    mr r3, r31
    li r4, 0x0
    bl memset
lbl_fn_806193D0_00000604:
    li r5, 0x0
    addi r4, r29, 0x10
    mr r3, r5
    li r6, 0x5544
    subf r4, r4, r30
    subf r0, r31, r29
    rlwimi r3, r28, 15, 16, 16
    sth r6, 0x0(r29)
    rlwimi r3, r0, 8, 17, 23
    stw r4, 0x4(r29)
    stw r5, 0x8(r29)
    stw r5, 0xc(r29)
    sth r3, 0x2(r29)
    lhz r0, 0x10(r26)
    rlwimi r3, r0, 0, 24, 31
    sth r3, 0x2(r29)
    lwz r4, 0xc(r26)
    stw r4, 0x8(r29)
    cmpwi r4, 0x0
    beq lbl_fn_806193D0_00000660
    lwz r3, 0xc(r4)
    stw r29, 0xc(r4)
    b lbl_fn_806193D0_00000668
lbl_fn_806193D0_00000660:
    lwz r3, 0x8(r26)
    stw r29, 0x8(r26)
lbl_fn_806193D0_00000668:
    cmpwi r3, 0x0
    stw r3, 0xc(r29)
    beq lbl_fn_806193D0_0000067C
    stw r29, 0x8(r3)
    b lbl_fn_806193D0_00000680
lbl_fn_806193D0_0000067C:
    stw r29, 0xc(r26)
lbl_fn_806193D0_00000680:
    addi r11, r1, 0x20
    mr r3, r27
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80619600(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    addi r3, r3, 0x3c
    mr r6, r4
    stw r0, 0x24(r1)
    subi r0, r5, 0x1
    nor r9, r0, r0
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, -0x1
    stw r29, 0x14(r1)
    li r29, 0x0
    lhz r7, 0x12(r3)
    lwz r12, 0x0(r3)
    clrlwi r0, r7, 31
    cntlzw r0, r0
    srwi r11, r0, 5
    b lbl_fn_80619600_00000738
lbl_fn_80619600_000006EC:
    addi r8, r12, 0x10
    lwz r10, 0x4(r12)
    add r7, r5, r8
    subi r0, r7, 0x1
    and r7, r9, r0
    subf r0, r8, r7
    add r0, r4, r0
    cmplw r10, r0
    blt lbl_fn_80619600_00000734
    cmplw r30, r10
    ble lbl_fn_80619600_00000734
    cmpwi r11, 0x0
    mr r31, r12
    mr r30, r10
    mr r29, r7
    bne lbl_fn_80619600_00000740
    cmplw r10, r4
    beq lbl_fn_80619600_00000740
lbl_fn_80619600_00000734:
    lwz r12, 0xc(r12)
lbl_fn_80619600_00000738:
    cmpwi r12, 0x0
    bne lbl_fn_80619600_000006EC
lbl_fn_80619600_00000740:
    cmpwi r31, 0x0
    beq lbl_fn_80619600_0000075C
    mr r4, r31
    mr r5, r29
    li r7, 0x0
    bl fn_806193D0
    b lbl_fn_80619600_00000760
lbl_fn_80619600_0000075C:
    li r3, 0x0
lbl_fn_80619600_00000760:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806196E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r3, r3, 0x3c
    mr r6, r4
    stw r0, 0x14(r1)
    subi r0, r5, 0x1
    nor r8, r0, r0
    li r12, 0x0
    stw r31, 0xc(r1)
    li r31, -0x1
    stw r30, 0x8(r1)
    lhz r5, 0x12(r3)
    lwz r11, 0x4(r3)
    clrlwi r0, r5, 31
    li r5, 0x0
    cntlzw r0, r0
    srwi r10, r0, 5
    b lbl_fn_806196E0_0000080C
lbl_fn_806196E0_000007C8:
    lwz r9, 0x4(r11)
    addi r7, r11, 0x10
    add r0, r9, r7
    subf r0, r4, r0
    and r30, r8, r0
    subf. r0, r7, r30
    blt lbl_fn_806196E0_00000808
    cmplw r31, r9
    ble lbl_fn_806196E0_00000808
    cmpwi r10, 0x0
    mr r12, r11
    mr r31, r9
    mr r5, r30
    bne lbl_fn_806196E0_00000814
    cmplw r9, r4
    beq lbl_fn_806196E0_00000814
lbl_fn_806196E0_00000808:
    lwz r11, 0x8(r11)
lbl_fn_806196E0_0000080C:
    cmpwi r11, 0x0
    bne lbl_fn_806196E0_000007C8
lbl_fn_806196E0_00000814:
    cmpwi r12, 0x0
    beq lbl_fn_806196E0_0000082C
    mr r4, r12
    li r7, 0x1
    bl fn_806193D0
    b lbl_fn_806196E0_00000830
lbl_fn_806196E0_0000082C:
    li r3, 0x0
lbl_fn_806196E0_00000830:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806197B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    li r8, 0x0
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r4)
    stw r5, 0x8(r1)
    lwz r6, 0x0(r3)
    stw r0, 0xc(r1)
    b lbl_fn_806197B0_000008D8
lbl_fn_806197B0_00000870:
    lwz r0, 0x0(r4)
    cmplw r6, r0
    bge lbl_fn_806197B0_00000884
    mr r8, r6
    b lbl_fn_806197B0_000008D4
lbl_fn_806197B0_00000884:
    lwz r0, 0x4(r4)
    cmplw r6, r0
    bne lbl_fn_806197B0_000008E0
    lwz r0, 0x4(r6)
    lwz r7, 0x8(r6)
    add r5, r6, r0
    lwz r6, 0xc(r6)
    addi r0, r5, 0x10
    cmpwi r7, 0x0
    stw r0, 0xc(r1)
    beq lbl_fn_806197B0_000008B8
    stw r6, 0xc(r7)
    b lbl_fn_806197B0_000008BC
lbl_fn_806197B0_000008B8:
    stw r6, 0x0(r3)
lbl_fn_806197B0_000008BC:
    cmpwi r6, 0x0
    beq lbl_fn_806197B0_000008CC
    stw r7, 0x8(r6)
    b lbl_fn_806197B0_000008E0
lbl_fn_806197B0_000008CC:
    stw r7, 0x4(r3)
    b lbl_fn_806197B0_000008E0
lbl_fn_806197B0_000008D4:
    lwz r6, 0xc(r6)
lbl_fn_806197B0_000008D8:
    cmpwi r6, 0x0
    bne lbl_fn_806197B0_00000870
lbl_fn_806197B0_000008E0:
    cmpwi r8, 0x0
    beq lbl_fn_806197B0_00000938
    lwz r5, 0x4(r8)
    lwz r0, 0x0(r4)
    add r4, r8, r5
    addi r4, r4, 0x10
    cmplw r4, r0
    bne lbl_fn_806197B0_00000938
    lwz r5, 0x8(r8)
    stw r8, 0x8(r1)
    cmpwi r5, 0x0
    lwz r4, 0xc(r8)
    beq lbl_fn_806197B0_0000091C
    stw r4, 0xc(r5)
    b lbl_fn_806197B0_00000920
lbl_fn_806197B0_0000091C:
    stw r4, 0x0(r3)
lbl_fn_806197B0_00000920:
    cmpwi r4, 0x0
    beq lbl_fn_806197B0_00000930
    stw r5, 0x8(r4)
    b lbl_fn_806197B0_00000934
lbl_fn_806197B0_00000930:
    stw r5, 0x4(r3)
lbl_fn_806197B0_00000934:
    mr r8, r5
lbl_fn_806197B0_00000938:
    lwz r6, 0xc(r1)
    lwz r5, 0x8(r1)
    subf r0, r5, r6
    cmplwi r0, 0x10
    bge lbl_fn_806197B0_00000954
    li r3, 0x0
    b lbl_fn_806197B0_000009B0
lbl_fn_806197B0_00000954:
    li r0, 0x4652
    sth r0, 0x0(r5)
    li r4, 0x0
    cmpwi r8, 0x0
    sth r4, 0x2(r5)
    addi r0, r5, 0x10
    subf r0, r0, r6
    stw r0, 0x4(r5)
    stw r4, 0xc(r5)
    stw r8, 0x8(r5)
    beq lbl_fn_806197B0_0000098C
    lwz r4, 0xc(r8)
    stw r5, 0xc(r8)
    b lbl_fn_806197B0_00000994
lbl_fn_806197B0_0000098C:
    lwz r4, 0x0(r3)
    stw r5, 0x0(r3)
lbl_fn_806197B0_00000994:
    cmpwi r4, 0x0
    stw r4, 0xc(r5)
    beq lbl_fn_806197B0_000009A8
    stw r5, 0x8(r4)
    b lbl_fn_806197B0_000009AC
lbl_fn_806197B0_000009A8:
    stw r5, 0x4(r3)
lbl_fn_806197B0_000009AC:
    li r3, 0x1
lbl_fn_806197B0_000009B0:
    addi r1, r1, 0x10
    blr
}

asm void fn_80619920(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    add r4, r4, r3
    stw r0, 0x14(r1)
    addi r0, r3, 0x3
    clrrwi r6, r4, 2
    stw r31, 0xc(r1)
    clrrwi r31, r0, 2
    cmplw r31, r6
    bgt lbl_fn_80619920_000009F4
    subf r0, r31, r6
    cmplwi r0, 0x64
    bge lbl_fn_80619920_000009FC
lbl_fn_80619920_000009F4:
    li r3, 0x0
    b lbl_fn_80619920_00000A5C
lbl_fn_80619920_000009FC:
    lis r4, 0x4558
    mr r7, r5
    mr r3, r31
    addi r5, r31, 0x50
    addi r4, r4, 0x5048
    bl fn_806190A0
    li r5, 0x0
    sth r5, 0x4c(r31)
    li r4, 0x4652
    mr r3, r31
    sth r5, 0x4e(r31)
    lwz r6, 0x18(r31)
    lwz r7, 0x1c(r31)
    addi r0, r6, 0x10
    sth r4, 0x0(r6)
    subf r0, r0, r7
    sth r5, 0x2(r6)
    stw r0, 0x4(r6)
    stw r5, 0x8(r6)
    stw r5, 0xc(r6)
    stw r6, 0x3c(r31)
    stw r6, 0x40(r31)
    stw r5, 0x44(r31)
    stw r5, 0x48(r31)
lbl_fn_80619920_00000A5C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806199D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80619260
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80619A00(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_fn_80619A00_00000AD0
    li r30, 0x1
lbl_fn_80619A00_00000AD0:
    lwz r0, 0x38(r3)
    addi r4, r30, 0x3
    clrrwi r30, r4, 2
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_80619A00_00000AEC
    addi r3, r3, 0x20
    bl fn_805F3130
lbl_fn_80619A00_00000AEC:
    cmpwi r31, 0x0
    blt lbl_fn_80619A00_00000B08
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_80619600
    b lbl_fn_80619A00_00000B18
lbl_fn_80619A00_00000B08:
    mr r3, r29
    mr r4, r30
    neg r5, r31
    bl fn_806196E0
lbl_fn_80619A00_00000B18:
    lwz r0, 0x38(r29)
    mr r31, r3
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_80619A00_00000B30
    addi r3, r29, 0x20
    bl fn_805F3210
lbl_fn_80619A00_00000B30:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80619AB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    beq lbl_fn_80619AB0_00000BFC
    lwz r0, 0x38(r3)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_80619AB0_00000B88
    addi r3, r3, 0x20
    bl fn_805F3130
lbl_fn_80619AB0_00000B88:
    lhz r0, -0xe(r31)
    subi r6, r31, 0x10
    addi r3, r30, 0x3c
    extrwi r0, r0, 7, 17
    subf r0, r0, r6
    stw r0, 0x8(r1)
    lwz r0, -0xc(r31)
    add r4, r6, r0
    addi r0, r4, 0x10
    stw r0, 0xc(r1)
    lwz r5, -0x8(r31)
    lwz r4, -0x4(r31)
    cmpwi r5, 0x0
    beq lbl_fn_80619AB0_00000BC8
    stw r4, 0xc(r5)
    b lbl_fn_80619AB0_00000BCC
lbl_fn_80619AB0_00000BC8:
    stw r4, 0x8(r3)
lbl_fn_80619AB0_00000BCC:
    cmpwi r4, 0x0
    beq lbl_fn_80619AB0_00000BDC
    stw r5, 0x8(r4)
    b lbl_fn_80619AB0_00000BE0
lbl_fn_80619AB0_00000BDC:
    stw r5, 0xc(r3)
lbl_fn_80619AB0_00000BE0:
    addi r4, r1, 0x8
    bl fn_806197B0
    lwz r0, 0x38(r30)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_80619AB0_00000BFC
    addi r3, r30, 0x20
    bl fn_805F3210
lbl_fn_80619AB0_00000BFC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80619B80(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    srawi r5, r4, 31
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    xor r31, r5, r4
    subf r31, r5, r31
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    lwz r0, 0x38(r3)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_80619B80_00000C5C
    addi r3, r3, 0x20
    bl fn_805F3130
lbl_fn_80619B80_00000C5C:
    subi r0, r31, 0x1
    lwz r6, 0x3c(r30)
    nor r4, r0, r0
    li r29, 0x0
    li r7, -0x1
    b lbl_fn_80619B80_00000CBC
lbl_fn_80619B80_00000C74:
    addi r5, r6, 0x10
    lwz r0, 0x4(r6)
    add r3, r31, r5
    subi r3, r3, 0x1
    add r0, r0, r5
    and r3, r4, r3
    cmplw r3, r0
    bge lbl_fn_80619B80_00000CB8
    subf r0, r3, r0
    subf r3, r5, r3
    cmplw r29, r0
    blt lbl_fn_80619B80_00000CB0
    bne lbl_fn_80619B80_00000CB8
    cmplw r7, r3
    ble lbl_fn_80619B80_00000CB8
lbl_fn_80619B80_00000CB0:
    mr r29, r0
    mr r7, r3
lbl_fn_80619B80_00000CB8:
    lwz r6, 0xc(r6)
lbl_fn_80619B80_00000CBC:
    cmpwi r6, 0x0
    bne lbl_fn_80619B80_00000C74
    lwz r0, 0x38(r30)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_80619B80_00000CD8
    addi r3, r30, 0x20
    bl fn_805F3210
lbl_fn_80619B80_00000CD8:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80619C60(void)
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
    bl OSDisableInterrupts
    lhz r31, 0x4c(r29)
    sth r30, 0x4c(r29)
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80619CB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    add r4, r4, r3
    stw r0, 0x14(r1)
    addi r0, r3, 0x3
    clrrwi r6, r4, 2
    stw r31, 0xc(r1)
    clrrwi r31, r0, 2
    cmplw r31, r6
    bgt lbl_fn_80619CB0_00000D84
    subf r0, r31, r6
    cmplwi r0, 0x48
    bge lbl_fn_80619CB0_00000D8C
lbl_fn_80619CB0_00000D84:
    li r3, 0x0
    b lbl_fn_80619CB0_00000DC0
lbl_fn_80619CB0_00000D8C:
    lis r4, 0x4652
    mr r7, r5
    mr r3, r31
    addi r5, r31, 0x48
    addi r4, r4, 0x4d48
    bl fn_806190A0
    lwz r3, 0x18(r31)
    li r0, 0x0
    stw r3, 0x3c(r31)
    mr r3, r31
    lwz r4, 0x1c(r31)
    stw r4, 0x40(r31)
    stw r0, 0x44(r31)
lbl_fn_80619CB0_00000DC0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80619D40(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80619260
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80619D70(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r5
    bne lbl_fn_80619D70_00000E40
    li r30, 0x1
lbl_fn_80619D70_00000E40:
    lwz r0, 0x38(r3)
    addi r4, r30, 0x3
    clrrwi r30, r4, 2
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_80619D70_00000E5C
    addi r3, r3, 0x20
    bl fn_805F3130
lbl_fn_80619D70_00000E5C:
    cmpwi r29, 0x0
    blt lbl_fn_80619D70_00000EB4
    lwz r3, 0x3c(r31)
    subi r0, r29, 0x1
    nor r5, r0, r0
    lwz r0, 0x40(r31)
    add r4, r29, r3
    subi r4, r4, 0x1
    and r29, r5, r4
    add r30, r30, r29
    cmplw r30, r0
    ble lbl_fn_80619D70_00000E94
    li r29, 0x0
    b lbl_fn_80619D70_00000EFC
lbl_fn_80619D70_00000E94:
    lwz r0, 0x38(r31)
    subf r5, r3, r30
    clrlwi. r0, r0, 31
    beq lbl_fn_80619D70_00000EAC
    li r4, 0x0
    bl memset
lbl_fn_80619D70_00000EAC:
    stw r30, 0x3c(r31)
    b lbl_fn_80619D70_00000EFC
lbl_fn_80619D70_00000EB4:
    lwz r5, 0x40(r31)
    subfic r0, r29, -0x1
    nor r4, r0, r0
    lwz r0, 0x3c(r31)
    subf r3, r30, r5
    and r29, r4, r3
    cmplw r29, r0
    bge lbl_fn_80619D70_00000EDC
    li r29, 0x0
    b lbl_fn_80619D70_00000EFC
lbl_fn_80619D70_00000EDC:
    lwz r0, 0x38(r31)
    subf r5, r29, r5
    clrlwi. r0, r0, 31
    beq lbl_fn_80619D70_00000EF8
    mr r3, r29
    li r4, 0x0
    bl memset
lbl_fn_80619D70_00000EF8:
    stw r29, 0x40(r31)
lbl_fn_80619D70_00000EFC:
    lwz r0, 0x38(r31)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_80619D70_00000F10
    addi r3, r31, 0x20
    bl fn_805F3210
lbl_fn_80619D70_00000F10:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80619E90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x38(r3)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_80619E90_00000F60
    addi r3, r3, 0x20
    bl fn_805F3130
lbl_fn_80619E90_00000F60:
    clrlwi. r0, r31, 31
    beq lbl_fn_80619E90_00000F78
    lwz r3, 0x18(r30)
    li r0, 0x0
    stw r3, 0x3c(r30)
    stw r0, 0x44(r30)
lbl_fn_80619E90_00000F78:
    rlwinm. r0, r31, 0, 30, 30
    beq lbl_fn_80619E90_00000FA4
    lwz r3, 0x44(r30)
    b lbl_fn_80619E90_00000F94
lbl_fn_80619E90_00000F88:
    lwz r0, 0x1c(r30)
    stw r0, 0x8(r3)
    lwz r3, 0xc(r3)
lbl_fn_80619E90_00000F94:
    cmpwi r3, 0x0
    bne lbl_fn_80619E90_00000F88
    lwz r0, 0x1c(r30)
    stw r0, 0x40(r30)
lbl_fn_80619E90_00000FA4:
    lwz r0, 0x38(r30)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_80619E90_00000FB8
    addi r3, r30, 0x20
    bl fn_805F3210
lbl_fn_80619E90_00000FB8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80619F30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r0, 0x38(r3)
    mr r27, r3
    mr r28, r4
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_80619F30_00001000
    addi r3, r3, 0x20
    bl fn_805F3130
lbl_fn_80619F30_00001000:
    lwz r29, 0x3c(r27)
    lwz r0, 0x40(r27)
    addi r3, r29, 0x3
    clrrwi r31, r3, 2
    addi r30, r31, 0x10
    cmplw r30, r0
    ble lbl_fn_80619F30_00001024
    li r31, 0x0
    b lbl_fn_80619F30_00001044
lbl_fn_80619F30_00001024:
    lwz r0, 0x38(r27)
    subf r5, r29, r30
    clrlwi. r0, r0, 31
    beq lbl_fn_80619F30_00001040
    mr r3, r29
    li r4, 0x0
    bl memset
lbl_fn_80619F30_00001040:
    stw r30, 0x3c(r27)
lbl_fn_80619F30_00001044:
    cmpwi r31, 0x0
    bne lbl_fn_80619F30_00001054
    li r30, 0x0
    b lbl_fn_80619F30_00001074
lbl_fn_80619F30_00001054:
    stw r28, 0x0(r31)
    li r30, 0x1
    stw r29, 0x4(r31)
    lwz r0, 0x40(r27)
    stw r0, 0x8(r31)
    lwz r0, 0x44(r27)
    stw r0, 0xc(r31)
    stw r31, 0x44(r27)
lbl_fn_80619F30_00001074:
    lwz r0, 0x38(r27)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_80619F30_00001088
    addi r3, r27, 0x20
    bl fn_805F3210
lbl_fn_80619F30_00001088:
    addi r11, r1, 0x20
    mr r3, r30
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
