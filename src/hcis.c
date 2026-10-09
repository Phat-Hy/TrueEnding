#include "revolution/types.h"

/* External function declarations */
extern void OSDisableInterrupts(void);
extern void OSEnableInterrupts(void);
extern void OSRestoreInterrupts(void);
extern void _restgpr_14(void);
extern void _savegpr_14(void);
extern void fn_806267F0(void);
extern void fn_80626C60(void);
extern void fn_80626D50(void);
extern void fn_80626EC0(void);
extern void fn_80626F10(void);
extern void fn_80627A70(void);
extern void fn_80629330(void);
extern void fn_80629810(void);
extern void fn_80629A30(void);
extern void fn_80644F60(void);
extern void fn_80645130(void);
extern void fn_8066E900(void);
extern void fn_8066E920(void);

/* External data declarations */
extern u8 lbl_807B32B0[];
extern u8 lbl_807B32EC[];
extern u8 lbl_807F3760[];
extern u8 lbl_8081C240[];

/* Small data declarations */
extern u32 lbl_80888840;
extern u32 lbl_80888848;

/* Function declarations */
void fn_80628000(void);
void fn_80628090(void);
void fn_80628140(void);
void fn_80628150(void);
void fn_80628160(void);
void fn_80628170(void);
void fn_80628180(void);
void fn_80628230(void);
void fn_80628240(void);
void fn_80628270(void);
void fn_806282C0(void);
void fn_806282D0(void);
void fn_80628300(void);
void fn_80628310(void);
void fn_80628330(void);

asm void fn_80628000(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, 0x3
    li r4, 0x0
    stw r0, 0x14(r1)
    subi r5, r5, 0x7520
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lis r30, lbl_807F3760@ha
    addi r3, r30, lbl_807F3760@l
    bl memset
    bl fn_806267F0
    bl fn_80627A70
    addi r31, r30, lbl_807F3760@l
    li r4, 0x1
    addis r3, r31, 0x3
    li r0, 0x0
    stb r4, -0x77fe(r3)
    stw r0, -0x7818(r3)
    stw r0, -0x77b8(r3)
    sth r0, -0x77f4(r3)
    stb r0, lbl_807F3760@l(r30)
    bl OSEnableInterrupts
    lbz r0, lbl_807F3760@l(r30)
    slwi r0, r0, 2
    add r4, r31, r0
    stw r3, 0x4(r4)
    lbz r3, lbl_807F3760@l(r30)
    addi r0, r3, 0x1
    stb r0, lbl_807F3760@l(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80628090(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    bl OSDisableInterrupts
    lis r30, lbl_807F3760@ha
    li r0, 0x0
    lbz r5, lbl_807F3760@l(r30)
    addi r31, r30, lbl_807F3760@l
    addis r4, r31, 0x3
    slwi r5, r5, 2
    add r5, r31, r5
    stw r3, 0x4(r5)
    lbz r3, lbl_807F3760@l(r30)
    addi r3, r3, 0x1
    stb r3, lbl_807F3760@l(r30)
    stb r0, -0x77fe(r4)
    lbz r3, lbl_807F3760@l(r30)
    subi r0, r3, 0x1
    stb r0, lbl_807F3760@l(r30)
    clrlslwi r0, r0, 24, 2
    add r3, r31, r0
    lwz r3, 0x4(r3)
    bl OSRestoreInterrupts
    b lbl_fn_80628090_00000114
lbl_fn_80628090_000000F8:
    lbz r3, lbl_807F3760@l(r30)
    subi r0, r3, 0x1
    stb r0, lbl_807F3760@l(r30)
    clrlslwi r0, r0, 24, 2
    add r3, r31, r0
    lwz r3, 0x4(r3)
    bl OSRestoreInterrupts
lbl_fn_80628090_00000114:
    lbz r0, lbl_807F3760@l(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80628090_000000F8
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80628140(void)
{
    nofralloc
    blr
}

asm void fn_80628150(void)
{
    nofralloc
    blr
}

asm void fn_80628160(void)
{
    nofralloc
    blr
}

asm void fn_80628170(void)
{
    nofralloc
    blr
}

asm void fn_80628180(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r3, 0x8
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    blt lbl_fn_80628180_000001AC
    li r3, 0x1
    b lbl_fn_80628180_0000020C
lbl_fn_80628180_000001AC:
    bl OSDisableInterrupts
    lis r7, lbl_807F3760@ha
    clrlslwi r0, r30, 24, 1
    lbz r5, lbl_807F3760@l(r7)
    addi r6, r7, lbl_807F3760@l
    addis r4, r6, 0x3
    slwi r5, r5, 2
    add r5, r6, r5
    add r4, r4, r0
    stw r3, 0x4(r5)
    lbz r3, lbl_807F3760@l(r7)
    addi r0, r3, 0x1
    stb r0, lbl_807F3760@l(r7)
    lhz r0, -0x77f8(r4)
    or r0, r0, r31
    sth r0, -0x77f8(r4)
    lbz r3, lbl_807F3760@l(r7)
    subi r0, r3, 0x1
    stb r0, lbl_807F3760@l(r7)
    clrlslwi r0, r0, 24, 2
    add r3, r6, r0
    lwz r3, 0x4(r3)
    bl OSRestoreInterrupts
    li r3, 0x0
lbl_fn_80628180_0000020C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80628230(void)
{
    nofralloc
    li r3, 0x2
    blr
}

asm void fn_80628240(void)
{
    nofralloc
    lis r5, lbl_807F3760@ha
    lbz r4, lbl_807F3760@l(r5)
    addi r3, r5, lbl_807F3760@l
    subi r0, r4, 0x1
    stb r0, lbl_807F3760@l(r5)
    clrlslwi r0, r0, 24, 2
    add r3, r3, r0
    lwz r3, 0x4(r3)
    b OSRestoreInterrupts
}

asm void fn_80628270(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl OSDisableInterrupts
    lis r5, lbl_807F3760@ha
    lbz r0, lbl_807F3760@l(r5)
    addi r4, r5, lbl_807F3760@l
    slwi r0, r0, 2
    add r4, r4, r0
    stw r3, 0x4(r4)
    lbz r3, lbl_807F3760@l(r5)
    addi r0, r3, 0x1
    stb r0, lbl_807F3760@l(r5)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806282C0(void)
{
    nofralloc
    blr
}

asm void fn_806282D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8066E900
    cmpwi r3, 0x0
    bne lbl_fn_806282D0_000002EC
    li r3, 0x0
lbl_fn_806282D0_000002EC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80628300(void)
{
    nofralloc
    b fn_8066E920
}

asm void fn_80628310(void)
{
    nofralloc
    cmpwi r3, 0x4
    bnelr
    extsb r3, r4
    b fn_80629A30
    blr
}

asm void fn_80628330(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_14
    lbz r0, 0x1e(r4)
    mr r15, r4
    li r19, 0x0
    cmplwi r0, 0x2
    beq lbl_fn_80628330_00000360
    li r3, 0x0
    b lbl_fn_80628330_000006B0
lbl_fn_80628330_00000360:
    addi r20, r3, 0x1
    clrlslwi r0, r3, 16, 1
    lis r31, lbl_8081C240@ha
    add r22, r4, r3
    clrlwi r16, r20, 16
    clrlslwi r23, r3, 16, 2
    add r21, r4, r0
    addi r31, r31, lbl_8081C240@l
    li r29, 0x0
    li r30, 0x4
    la r28, lbl_80888840
    li r25, 0x3
    li r24, 0x2
    lis r14, lbl_807B32B0@ha
    la r26, lbl_80888848
    li r27, 0x1
lbl_fn_80628330_000003A0:
    clrlwi r3, r16, 24
    addi r4, r1, 0x8
    li r5, 0x1
    bl fn_80629330
    clrlwi. r0, r3, 16
    beq lbl_fn_80628330_000006AC
    lbz r0, 0x1a(r22)
    li r17, 0x0
    addi r19, r19, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_80628330_000003F0
    cmpwi r0, 0x1
    beq lbl_fn_80628330_00000498
    cmpwi r0, 0x2
    beq lbl_fn_80628330_00000590
    cmpwi r0, 0x3
    beq lbl_fn_80628330_000005DC
    cmpwi r0, 0x4
    beq lbl_fn_80628330_00000674
    b lbl_fn_80628330_0000068C
lbl_fn_80628330_000003F0:
    cmplwi r16, 0x1
    bne lbl_fn_80628330_0000040C
    li r3, 0x2
    bl fn_80626C60
    stwx r3, r15, r23
    stb r30, 0x14(r22)
    b lbl_fn_80628330_00000440
lbl_fn_80628330_0000040C:
    cmplwi r16, 0x2
    bne lbl_fn_80628330_00000428
    li r3, 0x3
    bl fn_80626C60
    stwx r3, r15, r23
    stb r24, 0x14(r22)
    b lbl_fn_80628330_00000440
lbl_fn_80628330_00000428:
    cmplwi r16, 0x3
    bne lbl_fn_80628330_0000068C
    li r3, 0x1
    bl fn_80626C60
    stwx r3, r15, r23
    stb r25, 0x14(r22)
lbl_fn_80628330_00000440:
    lwzx r3, r15, r23
    cmpwi r3, 0x0
    beq lbl_fn_80628330_00000478
    sth r29, 0x2(r3)
    lbz r0, 0x14(r22)
    lwzx r3, r15, r23
    slwi r0, r0, 1
    add r4, r26, r0
    lhz r0, -0x2(r4)
    sth r0, 0x0(r3)
    lwzx r3, r15, r23
    sth r29, 0x4(r3)
    stb r27, 0x1a(r22)
    b lbl_fn_80628330_00000488
lbl_fn_80628330_00000478:
    addi r4, r14, lbl_807B32B0@l
    lis r3, 0x7
    bl fn_80629810
    stb r24, 0x1a(r22)
lbl_fn_80628330_00000488:
    lbz r0, 0x14(r22)
    add r3, r28, r0
    lbz r0, -0x1(r3)
    sth r0, 0xc(r21)
lbl_fn_80628330_00000498:
    lwzx r6, r15, r23
    lbz r5, 0x8(r1)
    lhz r4, 0x2(r6)
    add r3, r6, r4
    addi r0, r4, 0x1
    stb r5, 0x8(r3)
    sth r0, 0x2(r6)
    lhz r3, 0xc(r21)
    subi r0, r3, 0x1
    sth r0, 0xc(r21)
    clrlwi. r0, r0, 16
    bne lbl_fn_80628330_00000584
    lbz r0, 0x14(r22)
    lbz r18, 0x8(r1)
    cmplwi r0, 0x2
    bne lbl_fn_80628330_00000518
    lbz r0, 0x17(r22)
    clrlslwi r4, r18, 16, 8
    lwzx r3, r15, r23
    add r0, r4, r0
    clrlwi r18, r0, 16
    bl fn_80644F60
    cmpwi r3, 0x0
    stwx r3, r15, r23
    bne lbl_fn_80628330_00000518
    cmpwi r18, 0x0
    sth r18, 0xc(r21)
    bne lbl_fn_80628330_00000510
    stb r29, 0x1a(r22)
    b lbl_fn_80628330_0000068C
lbl_fn_80628330_00000510:
    stb r30, 0x1a(r22)
    b lbl_fn_80628330_0000068C
lbl_fn_80628330_00000518:
    sth r18, 0xc(r21)
    lwzx r3, r15, r23
    bl fn_80626EC0
    lbz r0, 0x14(r22)
    clrlwi r4, r3, 16
    add r3, r28, r0
    lbz r0, -0x1(r3)
    add r3, r18, r0
    addi r0, r3, 0x8
    cmplw r0, r4
    ble lbl_fn_80628330_00000568
    lwzx r3, r15, r23
    bl fn_80626D50
    stwx r29, r15, r23
    lis r3, lbl_807B32EC@ha
    addi r4, r3, lbl_807B32EC@l
    stb r30, 0x1a(r22)
    lis r3, 0x7
    bl fn_80629810
    b lbl_fn_80628330_0000068C
lbl_fn_80628330_00000568:
    cmpwi r18, 0x0
    beq lbl_fn_80628330_00000578
    stb r25, 0x1a(r22)
    b lbl_fn_80628330_0000068C
lbl_fn_80628330_00000578:
    stb r29, 0x1a(r22)
    li r17, 0x1
    b lbl_fn_80628330_0000068C
lbl_fn_80628330_00000584:
    lbz r0, 0x8(r1)
    stb r0, 0x17(r22)
    b lbl_fn_80628330_0000068C
lbl_fn_80628330_00000590:
    lhz r3, 0xc(r21)
    subi r0, r3, 0x1
    sth r0, 0xc(r21)
    clrlwi. r0, r0, 16
    bne lbl_fn_80628330_000005D0
    lbz r0, 0x14(r22)
    lbz r3, 0x8(r1)
    cmplwi r0, 0x2
    bne lbl_fn_80628330_000005C4
    lbz r0, 0x17(r22)
    clrlslwi r3, r3, 16, 8
    add r0, r3, r0
    clrlwi r3, r0, 16
lbl_fn_80628330_000005C4:
    sth r3, 0xc(r21)
    stb r30, 0x1a(r22)
    b lbl_fn_80628330_0000068C
lbl_fn_80628330_000005D0:
    lbz r0, 0x8(r1)
    stb r0, 0x17(r22)
    b lbl_fn_80628330_0000068C
lbl_fn_80628330_000005DC:
    lwzx r7, r15, r23
    clrlwi r3, r20, 24
    lbz r6, 0x8(r1)
    lhz r5, 0x2(r7)
    add r4, r7, r5
    addi r0, r5, 0x1
    stb r6, 0x8(r4)
    sth r0, 0x2(r7)
    lhz r4, 0xc(r21)
    subi r0, r4, 0x1
    sth r0, 0xc(r21)
    clrlwi r5, r0, 16
    lwzx r4, r15, r23
    lhz r0, 0x2(r4)
    add r4, r4, r0
    addi r4, r4, 0x8
    bl fn_80629330
    lwzx r4, r15, r23
    add r19, r19, r3
    lhz r0, 0x2(r4)
    add r0, r0, r3
    sth r0, 0x2(r4)
    lhz r0, 0xc(r21)
    subf r0, r3, r0
    sth r0, 0xc(r21)
    clrlwi. r0, r0, 16
    bne lbl_fn_80628330_0000068C
    lbz r0, 0x14(r22)
    cmplwi r0, 0x2
    bne lbl_fn_80628330_00000668
    bl fn_80645130
    clrlwi. r0, r3, 24
    bne lbl_fn_80628330_00000668
    stb r29, 0x1a(r22)
    b lbl_fn_80628330_0000068C
lbl_fn_80628330_00000668:
    stb r29, 0x1a(r22)
    li r17, 0x1
    b lbl_fn_80628330_0000068C
lbl_fn_80628330_00000674:
    lhz r3, 0xc(r21)
    subi r0, r3, 0x1
    sth r0, 0xc(r21)
    clrlwi. r0, r0, 16
    bne lbl_fn_80628330_0000068C
    stb r29, 0x1a(r22)
lbl_fn_80628330_0000068C:
    cmpwi r17, 0x0
    beq lbl_fn_80628330_000003A0
    lbz r3, 0x1f(r31)
    li r4, 0x0
    lwzx r5, r15, r23
    bl fn_80626F10
    stwx r29, r15, r23
    b lbl_fn_80628330_000003A0
lbl_fn_80628330_000006AC:
    mr r3, r19
lbl_fn_80628330_000006B0:
    addi r11, r1, 0x60
    bl _restgpr_14
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
