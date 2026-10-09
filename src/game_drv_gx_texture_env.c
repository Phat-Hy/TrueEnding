#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_27(void);
extern void _savegpr_22(void);
extern void _savegpr_27(void);
extern void fn_805E6740(void);
extern void fn_805E6DE0(void);
extern void fn_805ED500(void);
extern void fn_805ED5A0(void);

/* External data declarations */
extern u8 lbl_807646A8[];
extern u8 lbl_807CAE00[];
extern u8 lbl_807CAE18[];
extern u8 lbl_807CAE40[];
extern u8 lbl_807CAF40[];

/* Small data declarations */
extern u32 lbl_8087FA44;
extern u32 lbl_8087FA48;
extern u32 lbl_8087FA4C;
extern u32 lbl_8087FA50;
extern u32 lbl_8087FA60;
extern u32 lbl_8087FA80;
extern u32 lbl_8087FAA0;
extern u32 lbl_8087FAA4;
extern u32 lbl_8087FAA8;
extern u32 lbl_8087FAAC;
extern u32 lbl_8087FAC0;
extern u32 lbl_8087FAE0;
extern u32 lbl_8087FB00;
extern u32 lbl_8087FB20;
extern u32 lbl_8087FB40;
extern u32 lbl_8087FB60;
extern u32 lbl_808884D0;
extern u32 lbl_808884D4;
extern u32 lbl_808884D8;
extern u32 lbl_808884DC;
extern u32 lbl_808884E0;

/* Function declarations */
void fn_805E4960(void);
void fn_805E4D30(void);
void fn_805E4F80(void);
void fn_805E5090(void);
void fn_805E52E0(void);
void fn_805E5770(void);
void fn_805E5C10(void);
void fn_805E5E60(void);
void fn_805E60C0(void);

asm void fn_805E4960(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r4, lbl_8087FA48
    lis r3, 0x10
    stw r4, lbl_8087FAA8
    subi r11, r3, 0x1
    addi r0, r4, 0x101
    lwz r6, lbl_8087FA44
    stw r0, lbl_8087FAA4
    li r12, -0x1
    li r0, 0x0
    li r10, 0x1
    lwz r3, 0x69c(r6)
    li r9, 0x8
    li r7, 0x2
    lbz r5, 0x0(r3)
    addi r4, r3, 0x2
    lbz r3, 0x1(r3)
    rlwimi r3, r5, 8, 16, 23
    subi r3, r3, 0x2
    stw r4, 0x69c(r6)
    clrlwi r5, r3, 16
lbl_fn_805E4960_00000064:
    lwz r30, lbl_8087FA44
    li r6, 0x0
    li r3, 0x0
    lwz r8, 0x69c(r30)
    addi r4, r8, 0x1
    stw r4, 0x69c(r30)
    lbz r4, 0x0(r8)
    lwz r30, lbl_8087FA44
    clrlslwi r8, r4, 28, 1
    srawi r4, r4, 4
    add r4, r8, r4
    lwz r8, 0x69c(r30)
    stw r8, lbl_8087FAAC
    clrlwi r4, r4, 24
    mtctr r7
lbl_fn_805E4960_000000A0:
    lwz r31, lbl_8087FA44
    addi r3, r3, 0x8
    lwz r30, 0x69c(r31)
    addi r8, r30, 0x1
    stw r8, 0x69c(r31)
    lwz r31, lbl_8087FA44
    lbz r8, 0x0(r30)
    lwz r30, 0x69c(r31)
    add r6, r6, r8
    addi r8, r30, 0x1
    stw r8, 0x69c(r31)
    lwz r31, lbl_8087FA44
    lbz r8, 0x0(r30)
    lwz r30, 0x69c(r31)
    add r6, r6, r8
    addi r8, r30, 0x1
    stw r8, 0x69c(r31)
    lwz r31, lbl_8087FA44
    lbz r8, 0x0(r30)
    lwz r30, 0x69c(r31)
    add r6, r6, r8
    addi r8, r30, 0x1
    stw r8, 0x69c(r31)
    lwz r31, lbl_8087FA44
    lbz r8, 0x0(r30)
    lwz r30, 0x69c(r31)
    add r6, r6, r8
    addi r8, r30, 0x1
    stw r8, 0x69c(r31)
    lwz r31, lbl_8087FA44
    lbz r8, 0x0(r30)
    lwz r30, 0x69c(r31)
    add r6, r6, r8
    addi r8, r30, 0x1
    stw r8, 0x69c(r31)
    lwz r31, lbl_8087FA44
    lbz r8, 0x0(r30)
    lwz r30, 0x69c(r31)
    add r6, r6, r8
    addi r8, r30, 0x1
    stw r8, 0x69c(r31)
    lwz r31, lbl_8087FA44
    lbz r8, 0x0(r30)
    lwz r30, 0x69c(r31)
    add r6, r6, r8
    addi r8, r30, 0x1
    stw r8, 0x69c(r31)
    lbz r8, 0x0(r30)
    add r6, r6, r8
    bdnz lbl_fn_805E4960_000000A0
    mulli r3, r4, 0xe0
    lwz r27, lbl_8087FA44
    clrlwi r8, r6, 16
    lwz r31, 0x69c(r27)
    li r28, 0x0
    add r30, r27, r3
    stw r31, 0x340(r30)
    li r29, 0x1
    lwz r31, lbl_8087FA44
    lwz r30, 0x69c(r31)
    add r8, r30, r8
    stw r8, 0x69c(r31)
lbl_fn_805E4960_00000198:
    lwz r8, lbl_8087FAAC
    add r8, r8, r29
    lbz r30, -0x1(r8)
    cmpwi r30, 0x0
    beq lbl_fn_805E4960_00000238
    srwi. r8, r30, 3
    mtctr r8
    beq lbl_fn_805E4960_00000224
lbl_fn_805E4960_000001B8:
    lwz r8, lbl_8087FAA8
    stbx r29, r8, r28
    addi r28, r28, 0x1
    lwz r8, lbl_8087FAA8
    stbx r29, r8, r28
    addi r28, r28, 0x1
    lwz r8, lbl_8087FAA8
    stbx r29, r8, r28
    addi r28, r28, 0x1
    lwz r8, lbl_8087FAA8
    stbx r29, r8, r28
    addi r28, r28, 0x1
    lwz r8, lbl_8087FAA8
    stbx r29, r8, r28
    addi r28, r28, 0x1
    lwz r8, lbl_8087FAA8
    stbx r29, r8, r28
    addi r28, r28, 0x1
    lwz r8, lbl_8087FAA8
    stbx r29, r8, r28
    addi r28, r28, 0x1
    lwz r8, lbl_8087FAA8
    stbx r29, r8, r28
    addi r28, r28, 0x1
    bdnz lbl_fn_805E4960_000001B8
    andi. r30, r30, 0x7
    beq lbl_fn_805E4960_00000238
lbl_fn_805E4960_00000224:
    mtctr r30
lbl_fn_805E4960_00000228:
    lwz r8, lbl_8087FAA8
    stbx r29, r8, r28
    addi r28, r28, 0x1
    bdnz lbl_fn_805E4960_00000228
lbl_fn_805E4960_00000238:
    addi r29, r29, 0x1
    cmpwi r29, 0x10
    ble lbl_fn_805E4960_00000198
    lwz r8, lbl_8087FAA8
    li r27, 0x0
    li r29, 0x0
    stbx r0, r8, r28
    lwz r30, lbl_8087FAA8
    lbz r28, 0x0(r30)
    b lbl_fn_805E4960_00000298
lbl_fn_805E4960_00000260:
    clrlwi r31, r28, 24
    b lbl_fn_805E4960_0000027C
lbl_fn_805E4960_00000268:
    lwz r30, lbl_8087FAA4
    clrlslwi r8, r27, 16, 1
    addi r27, r27, 0x1
    sthx r29, r30, r8
    addi r29, r29, 0x1
lbl_fn_805E4960_0000027C:
    lwz r30, lbl_8087FAA8
    clrlwi r8, r27, 16
    lbzx r8, r30, r8
    cmplw r31, r8
    beq lbl_fn_805E4960_00000268
    clrlslwi r29, r29, 17, 1
    addi r28, r28, 0x1
lbl_fn_805E4960_00000298:
    clrlwi r8, r27, 16
    lbzx r8, r30, r8
    cmpwi r8, 0x0
    bne lbl_fn_805E4960_00000260
    lwz r8, lbl_8087FA44
    li r28, 0x0
    li r27, 0x1
    add r31, r8, r3
    addi r29, r31, 0x304
    mtctr r9
lbl_fn_805E4960_000002C0:
    lwz r3, lbl_8087FAAC
    add r3, r3, r27
    lbz r3, -0x1(r3)
    cmpwi r3, 0x0
    beq lbl_fn_805E4960_00000310
    lwz r8, lbl_8087FAA4
    slwi r3, r28, 1
    lhzx r3, r8, r3
    subf r3, r3, r28
    stw r3, 0x8c(r29)
    lwz r3, lbl_8087FAAC
    lwz r8, lbl_8087FAA4
    add r3, r3, r27
    lbz r3, -0x1(r3)
    add r28, r28, r3
    slwi r3, r28, 1
    add r3, r8, r3
    lhz r3, -0x2(r3)
    stw r3, 0x44(r29)
    b lbl_fn_805E4960_00000318
lbl_fn_805E4960_00000310:
    stw r12, 0x44(r29)
    stw r12, 0x8c(r29)
lbl_fn_805E4960_00000318:
    lwz r3, lbl_8087FAAC
    addi r27, r27, 0x1
    add r3, r3, r27
    lbz r3, -0x1(r3)
    cmpwi r3, 0x0
    beq lbl_fn_805E4960_0000036C
    lwz r8, lbl_8087FAA4
    slwi r3, r28, 1
    lhzx r3, r8, r3
    subf r3, r3, r28
    stw r3, 0x90(r29)
    lwz r3, lbl_8087FAAC
    lwz r8, lbl_8087FAA4
    add r3, r3, r27
    lbz r3, -0x1(r3)
    add r28, r28, r3
    slwi r3, r28, 1
    add r3, r8, r3
    lhz r3, -0x2(r3)
    stw r3, 0x48(r29)
    b lbl_fn_805E4960_00000374
lbl_fn_805E4960_0000036C:
    stw r12, 0x48(r29)
    stw r12, 0x90(r29)
lbl_fn_805E4960_00000374:
    addi r29, r29, 0x8
    addi r27, r27, 0x1
    bdnz lbl_fn_805E4960_000002C0
    stw r11, 0x388(r31)
    addi r3, r6, 0x11
    subf r3, r3, r5
    slw r4, r10, r4
    lwz r6, lbl_8087FA44
    clrlwi. r5, r3, 16
    lbz r3, 0x6a8(r6)
    or r3, r3, r4
    stb r3, 0x6a8(r6)
    bne lbl_fn_805E4960_00000064
    addi r11, r1, 0x20
    li r3, 0x0
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805E4D30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r4, lbl_8087FA44
    lwz r3, 0x6a4(r4)
    lwz r0, 0x69c(r4)
    cmplwi r3, 0x21
    clrrwi r6, r0, 2
    clrlwi r0, r0, 30
    beq lbl_fn_805E4D30_0000040C
    subfic r0, r0, 0x3
    slwi r0, r0, 3
    subf r0, r0, r3
    stw r0, 0x6a4(r4)
    b lbl_fn_805E4D30_00000418
lbl_fn_805E4D30_0000040C:
    slwi r3, r0, 3
    addi r0, r3, 0x1
    stw r0, 0x6a4(r4)
lbl_fn_805E4D30_00000418:
    lwz r5, lbl_8087FA44
    li r3, 0x0
    li r4, 0x0
    li r10, 0xff
    stw r6, 0x69c(r5)
    li r11, 0x1
    li r0, 0x10
    lwz r5, lbl_8087FA44
    lwz r6, 0x0(r6)
    stw r6, 0x6a0(r5)
lbl_fn_805E4D30_00000440:
    lwz r6, lbl_8087FA44
    slw r5, r11, r3
    lbz r6, 0x6a8(r6)
    and. r5, r6, r5
    beq lbl_fn_805E4D30_0000055C
    li r12, 0x0
    mtctr r0
    nop
lbl_fn_805E4D30_00000460:
    lwz r5, lbl_8087FA44
    li r31, 0x0
    add r5, r5, r4
    add r5, r5, r12
    stb r10, 0x300(r5)
    b lbl_fn_805E4D30_000004D0
lbl_fn_805E4D30_00000478:
    lwz r5, lbl_8087FA44
    subfic r6, r31, 0x4
    addi r8, r31, 0x1
    add r9, r5, r4
    srw r30, r12, r6
    slwi r5, r8, 2
    add r7, r9, r5
    lwz r5, 0x344(r7)
    cmpw r30, r5
    bgt lbl_fn_805E4D30_000004CC
    lwz r6, 0x340(r9)
    add r5, r9, r12
    lwz r7, 0x38c(r7)
    li r31, 0x63
    add r6, r6, r30
    lbzx r6, r7, r6
    stb r6, 0x300(r5)
    lwz r5, lbl_8087FA44
    add r5, r5, r4
    add r5, r5, r12
    stb r8, 0x320(r5)
lbl_fn_805E4D30_000004CC:
    addi r31, r31, 0x1
lbl_fn_805E4D30_000004D0:
    cmplwi r31, 0x5
    blt lbl_fn_805E4D30_00000478
    lwz r5, lbl_8087FA44
    addi r12, r12, 0x1
    li r31, 0x0
    add r5, r5, r4
    add r5, r5, r12
    stb r10, 0x300(r5)
    b lbl_fn_805E4D30_0000054C
lbl_fn_805E4D30_000004F4:
    lwz r5, lbl_8087FA44
    subfic r6, r31, 0x4
    addi r8, r31, 0x1
    add r9, r5, r4
    srw r30, r12, r6
    slwi r5, r8, 2
    add r7, r9, r5
    lwz r5, 0x344(r7)
    cmpw r30, r5
    bgt lbl_fn_805E4D30_00000548
    lwz r6, 0x340(r9)
    add r5, r9, r12
    lwz r7, 0x38c(r7)
    li r31, 0x63
    add r6, r6, r30
    lbzx r6, r7, r6
    stb r6, 0x300(r5)
    lwz r5, lbl_8087FA44
    add r5, r5, r4
    add r5, r5, r12
    stb r8, 0x320(r5)
lbl_fn_805E4D30_00000548:
    addi r31, r31, 0x1
lbl_fn_805E4D30_0000054C:
    cmplwi r31, 0x5
    blt lbl_fn_805E4D30_000004F4
    addi r12, r12, 0x1
    bdnz lbl_fn_805E4D30_00000460
lbl_fn_805E4D30_0000055C:
    addi r3, r3, 0x1
    addi r4, r4, 0xe0
    cmplwi r3, 0x4
    blt lbl_fn_805E4D30_00000440
    lwz r8, lbl_8087FA44
    lbz r4, 0x682(r8)
    lbz r7, 0x681(r8)
    lbz r6, 0x687(r8)
    slwi r5, r4, 1
    lbz r3, 0x688(r8)
    slwi r7, r7, 1
    lbz r0, 0x68e(r8)
    slwi r6, r6, 1
    slwi r4, r3, 1
    addi r9, r5, 0x1
    slwi r3, r0, 1
    lbz r0, 0x68d(r8)
    addi r11, r3, 0x1
    addi r10, r4, 0x1
    mulli r3, r7, 0xe0
    slwi r5, r0, 1
    add r4, r8, r3
    mulli r3, r5, 0xe0
    addi r5, r4, 0x300
    stw r5, lbl_8087FB60
    mulli r0, r6, 0xe0
    add r4, r8, r0
    addi r5, r4, 0x300
    stw r5, lbl_8087FB40
    add r4, r8, r3
    addi r5, r4, 0x300
    stw r5, lbl_8087FB20
    mulli r0, r9, 0xe0
    add r4, r8, r0
    addi r5, r4, 0x300
    stw r5, lbl_8087FB00
    mulli r3, r10, 0xe0
    add r4, r8, r3
    mulli r0, r11, 0xe0
    addi r4, r4, 0x300
    stw r4, lbl_8087FAE0
    add r3, r8, r0
    addi r0, r3, 0x300
    stw r0, lbl_8087FAC0
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    addi r1, r1, 0x10
    blr
}

asm void fn_805E4F80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r6, lbl_8087FA44
    stw r3, 0x6b0(r6)
    lwz r6, lbl_8087FA44
    stw r4, 0x6b4(r6)
    lwz r4, lbl_8087FA44
    stw r5, 0x6b8(r4)
    lwz r4, lbl_8087FA44
    lhz r31, 0x698(r4)
    lhz r30, 0x694(r4)
    mfspr r4, GQR5
    mfspr r0, GQR6
    li r3, 0x7
    oris r3, r3, 0x7
    stw r4, lbl_8087FA50
    stw r0, lbl_8087FA4C
    mtspr GQR5, r3
    li r3, 0x3d04
    oris r3, r3, 0x3d04
    mtspr GQR6, r3
    bl fn_805E4D30
    lwz r4, lbl_8087FA44
    lhz r0, 0x692(r4)
    cmplwi r0, 0x200
    bne lbl_fn_805E4F80_000006B8
    cmplwi r30, 0x1c0
    bne lbl_fn_805E4F80_000006B8
    b lbl_fn_805E4F80_000006AC
lbl_fn_805E4F80_000006A0:
    bl fn_805E5090
    addi r0, r31, 0x10
    clrlwi r31, r0, 16
lbl_fn_805E4F80_000006AC:
    cmplw r31, r30
    blt lbl_fn_805E4F80_000006A0
    b lbl_fn_805E4F80_000006FC
lbl_fn_805E4F80_000006B8:
    cmplwi r0, 0x280
    bne lbl_fn_805E4F80_000006F4
    cmplwi r30, 0x1e0
    bne lbl_fn_805E4F80_000006F4
    b lbl_fn_805E4F80_000006D8
lbl_fn_805E4F80_000006CC:
    bl fn_805E5C10
    addi r0, r31, 0x10
    clrlwi r31, r0, 16
lbl_fn_805E4F80_000006D8:
    cmplw r31, r30
    blt lbl_fn_805E4F80_000006CC
    b lbl_fn_805E4F80_000006FC
    b lbl_fn_805E4F80_000006F4
lbl_fn_805E4F80_000006E8:
    bl fn_805E5E60
    addi r0, r31, 0x10
    clrlwi r31, r0, 16
lbl_fn_805E4F80_000006F4:
    cmplw r31, r30
    blt lbl_fn_805E4F80_000006E8
lbl_fn_805E4F80_000006FC:
    lwz r4, lbl_8087FA50
    lwz r0, lbl_8087FA4C
    mtspr GQR5, r4
    mtspr GQR6, r0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805E5090(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    li r3, 0x3
    bl fn_805ED5A0
    lis r26, lbl_807CAE00@ha
    lis r28, lbl_807CAE18@ha
    addi r27, r26, lbl_807CAE00@l
    li r25, 0x0
    addi r30, r28, lbl_807CAE18@l
    li r29, 0x200
    li r31, 0x100
    li r22, 0x21
    li r23, 0x0
    b lbl_fn_805E5090_000008E0
lbl_fn_805E5090_00000774:
    lwz r3, lbl_8087FA44
    lwz r4, lbl_807CAE00@l(r26)
    bl fn_805E60C0
    lwz r3, lbl_8087FA44
    lwz r4, 0x4(r27)
    bl fn_805E60C0
    lwz r3, lbl_8087FA44
    lwz r4, 0x8(r27)
    bl fn_805E60C0
    lwz r3, lbl_8087FA44
    lwz r4, 0xc(r27)
    bl fn_805E60C0
    lwz r3, lbl_8087FA44
    lwz r4, 0x10(r27)
    bl fn_805E6740
    lwz r3, lbl_8087FA44
    lwz r4, 0x14(r27)
    bl fn_805E6DE0
    lwz r0, lbl_807CAE18@l(r28)
    clrlslwi r24, r25, 24, 4
    stw r0, lbl_8087FAA0
    mr r4, r24
    lwz r5, lbl_8087FA44
    stw r29, lbl_8087FA80
    lwz r3, lbl_807CAE00@l(r26)
    lbz r0, 0x680(r5)
    slwi r0, r0, 8
    add r0, r5, r0
    stw r0, lbl_8087FA60
    bl fn_805E52E0
    lwz r3, 0x4(r27)
    addi r4, r24, 0x8
    bl fn_805E52E0
    lwz r3, 0x8(r27)
    mr r4, r24
    bl fn_805E5770
    lwz r3, 0xc(r27)
    addi r4, r24, 0x8
    bl fn_805E5770
    lwz r0, 0x4(r30)
    srwi r24, r24, 1
    stw r0, lbl_8087FAA0
    mr r4, r24
    lwz r5, lbl_8087FA44
    stw r31, lbl_8087FA80
    lwz r3, 0x10(r27)
    lbz r0, 0x686(r5)
    slwi r0, r0, 8
    add r0, r5, r0
    stw r0, lbl_8087FA60
    bl fn_805E52E0
    lwz r0, 0x8(r30)
    mr r4, r24
    stw r0, lbl_8087FAA0
    lwz r5, lbl_8087FA44
    lwz r3, 0x14(r27)
    lbz r0, 0x68c(r5)
    slwi r0, r0, 8
    add r0, r5, r0
    stw r0, lbl_8087FA60
    bl fn_805E52E0
    lwz r4, lbl_8087FA44
    lbz r0, 0x6a9(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805E5090_000008DC
    lhz r3, 0x6ac(r4)
    subi r0, r3, 0x1
    sth r0, 0x6ac(r4)
    clrlwi. r0, r0, 16
    bne lbl_fn_805E5090_000008DC
    lwz r3, lbl_8087FA44
    lhz r0, 0x6aa(r3)
    sth r0, 0x6ac(r3)
    lwz r4, lbl_8087FA44
    lwz r3, 0x6a4(r4)
    addi r0, r3, 0x6
    clrrwi r3, r0, 3
    addi r0, r3, 0x1
    stw r0, 0x6a4(r4)
    lwz r3, lbl_8087FA44
    lwz r0, 0x6a4(r3)
    cmplwi r0, 0x21
    ble lbl_fn_805E5090_000008C4
    stw r22, 0x6a4(r3)
lbl_fn_805E5090_000008C4:
    lwz r3, lbl_8087FA44
    sth r23, 0x684(r3)
    lwz r3, lbl_8087FA44
    sth r23, 0x68a(r3)
    lwz r3, lbl_8087FA44
    sth r23, 0x690(r3)
lbl_fn_805E5090_000008DC:
    addi r25, r25, 0x1
lbl_fn_805E5090_000008E0:
    lwz r3, lbl_8087FA44
    clrlwi r4, r25, 24
    lhz r0, 0x696(r3)
    cmpw r4, r0
    blt lbl_fn_805E5090_00000774
    lis r24, lbl_807CAE18@ha
    lwz r3, 0x6b0(r3)
    lwz r4, lbl_807CAE18@l(r24)
    li r5, 0x2000
    bl fn_805ED500
    lwz r3, lbl_8087FA44
    addi r24, r24, lbl_807CAE18@l
    lwz r4, 0x4(r24)
    li r5, 0x800
    lwz r3, 0x6b4(r3)
    bl fn_805ED500
    lwz r3, lbl_8087FA44
    li r5, 0x800
    lwz r4, 0x8(r24)
    lwz r3, 0x6b8(r3)
    bl fn_805ED500
    lwz r4, lbl_8087FA44
    addi r11, r1, 0x30
    lwz r3, 0x6b0(r4)
    addi r0, r3, 0x2000
    stw r0, 0x6b0(r4)
    lwz r4, lbl_8087FA44
    lwz r3, 0x6b4(r4)
    addi r0, r3, 0x800
    stw r0, 0x6b4(r4)
    lwz r4, lbl_8087FA44
    lwz r3, 0x6b8(r4)
    addi r0, r3, 0x800
    stw r0, 0x6b8(r4)
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805E52E0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    stfd f29, 0x50(r1)
    psq_st f29, 0x58(r1), 0, 0
    stfd f28, 0x40(r1)
    psq_st f28, 0x48(r1), 0, 0
    stfd f27, 0x30(r1)
    psq_st f27, 0x38(r1), 0, 0
    stfd f26, 0x20(r1)
    psq_st f26, 0x28(r1), 0, 0
    stfd f25, 0x10(r1)
    psq_st f25, 0x18(r1), 0, 0
    lis r5, lbl_807CAE40@ha
    li r7, 0x8
    addi r5, r5, lbl_807CAE40@l
    lfs f29, lbl_808884D0
    subi r10, r5, 0x8
    lfs f28, lbl_808884D4
    lfs f27, lbl_808884D8
    lfs f26, lbl_808884DC
    lfs f25, lbl_808884E0
    lwz r5, lbl_8087FA60
    mtctr r7
lbl_fn_805E52E0_000009E8:
    psq_l f10, 0x0(r3), 0, 5
    psq_l f11, 0x0(r5), 0, 0
    lwz r0, 0xc(r3)
    lwz r8, 0x8(r3)
    ps_mul f10, f10, f11
    lwz r6, 0x4(r3)
    or. r0, r0, r8
    lhz r7, 0x2(r3)
lbl_fn_805E52E0_00000A08:
    cmpwi r0, 0x0
    bne lbl_fn_805E52E0_00000B48
    ps_merge00 f0, f10, f10
    cmpwi r6, 0x0
    psq_st f0, 0x8(r10), 0, 0
    bne lbl_fn_805E52E0_00000AB4
    psq_st f0, 0x10(r10), 0, 0
    cmpwi r7, 0x0
    psq_st f0, 0x18(r10), 0, 0
    bne lbl_fn_805E52E0_00000A44
    psq_stu f0, 0x20(r10), 0, 0
    addi r3, r3, 0x10
    addi r5, r5, 0x20
    bdnz lbl_fn_805E52E0_000009E8
    b lbl_fn_805E52E0_00000C08
lbl_fn_805E52E0_00000A44:
    ps_msub f2, f10, f28, f10
    psq_lu f11, 0x20(r5), 0, 0
    ps_sub f1, f28, f27
    lwz r6, 0x14(r3)
    ps_merge00 f9, f10, f10
    lhz r7, 0x12(r3)
    ps_msub f3, f10, f29, f2
    ps_merge11 f5, f10, f2
    ps_nmsub f4, f10, f1, f3
    ps_add f7, f9, f5
    psq_l f10, 0x10(r3), 0, 5
    lwz r0, 0x1c(r3)
    ps_sub f5, f9, f5
    ps_merge11 f6, f3, f4
    lwz r8, 0x18(r3)
    ps_add f8, f9, f6
    ps_sub f6, f9, f6
    psq_stu f7, 0x8(r10), 0, 0
    ps_merge10 f6, f6, f6
    psq_stu f8, 0x8(r10), 0, 0
    ps_merge10 f5, f5, f5
    or r0, r0, r8
    psq_stu f6, 0x8(r10), 0, 0
    ps_mul f10, f10, f11
    psq_stu f5, 0x8(r10), 0, 0
    addi r3, r3, 0x10
    bdnz lbl_fn_805E52E0_00000A08
    b lbl_fn_805E52E0_00000C08
lbl_fn_805E52E0_00000AB4:
    psq_l f1, 0x4(r3), 0, 5
    psq_l f9, 0x8(r5), 0, 0
    lwz r0, 0x1c(r3)
    ps_mul f1, f1, f9
    lwz r8, 0x18(r3)
    lwz r6, 0x14(r3)
    lhz r7, 0x12(r3)
    ps_sub f3, f10, f1
    ps_add f2, f10, f1
    ps_mul f8, f3, f28
    ps_madd f4, f1, f29, f3
    ps_nmsub f5, f1, f29, f2
    ps_nmsub f6, f1, f26, f8
    ps_nmsub f7, f10, f27, f8
    ps_merge00 f4, f2, f4
    ps_sub f6, f6, f2
    ps_merge00 f5, f5, f3
    ps_msub f8, f3, f29, f6
    ps_merge11 f2, f2, f6
    psq_lu f10, 0x10(r3), 0, 5
    psq_lu f11, 0x20(r5), 0, 0
    ps_sub f7, f7, f8
    ps_add f9, f4, f2
    ps_sub f4, f4, f2
    ps_merge11 f3, f8, f7
    psq_stu f9, 0x8(r10), 0, 0
    or r0, r0, r8
    ps_sub f1, f5, f3
    ps_add f0, f5, f3
    psq_stu f0, 0x8(r10), 0, 0
    ps_merge10 f1, f1, f1
    ps_merge10 f4, f4, f4
    psq_stu f1, 0x8(r10), 0, 0
    ps_mul f10, f10, f11
    psq_stu f4, 0x8(r10), 0, 0
    bdnz lbl_fn_805E52E0_00000A08
    b lbl_fn_805E52E0_00000C08
lbl_fn_805E52E0_00000B48:
    psq_l f9, 0x4(r3), 0, 5
    psq_l f5, 0x8(r5), 0, 0
    ps_mul f9, f9, f5
    psq_l f2, 0x8(r3), 0, 5
    psq_l f6, 0x10(r5), 0, 0
    ps_merge01 f0, f10, f9
    psq_l f3, 0xc(r3), 0, 5
    ps_merge01 f1, f9, f10
    psq_l f7, 0x18(r5), 0, 0
    lwz r0, 0x1c(r3)
    ps_madd f4, f2, f6, f0
    ps_nmsub f5, f2, f6, f0
    lwz r8, 0x18(r3)
    ps_madd f6, f3, f7, f1
    lwz r6, 0x14(r3)
    ps_nmsub f7, f3, f7, f1
    lhz r7, 0x12(r3)
    ps_add f0, f4, f6
    ps_sub f8, f7, f5
    ps_msub f2, f7, f29, f6
    ps_sub f3, f4, f6
    ps_mul f8, f8, f28
    ps_add f1, f5, f2
    ps_sub f2, f5, f2
    ps_nmsub f6, f5, f26, f8
    ps_msub f4, f7, f27, f8
    ps_merge00 f1, f0, f1
    ps_sub f6, f6, f0
    ps_merge00 f2, f2, f3
    ps_madd f5, f3, f29, f6
    ps_merge11 f7, f0, f6
    psq_lu f10, 0x10(r3), 0, 5
    psq_lu f11, 0x20(r5), 0, 0
    ps_sub f4, f4, f5
    ps_add f3, f1, f7
    ps_sub f0, f1, f7
    ps_merge11 f4, f5, f4
    ps_mul f10, f10, f11
    ps_add f5, f2, f4
    ps_sub f6, f2, f4
    ps_merge10 f5, f5, f5
    psq_stu f3, 0x8(r10), 0, 0
    ps_merge10 f0, f0, f0
    psq_stu f6, 0x8(r10), 0, 0
    psq_stu f5, 0x8(r10), 0, 0
    or r0, r0, r8
    psq_stu f0, 0x8(r10), 0, 0
    bdnz lbl_fn_805E52E0_00000A08
lbl_fn_805E52E0_00000C08:
    lis r10, lbl_807CAE40@ha
    lwz r0, lbl_8087FA80
    addi r10, r10, lbl_807CAE40@l
    slwi r4, r4, 2
    psq_l f10, 0x0(r10), 0, 0
    slwi r5, r0, 2
    psq_l f11, 0x80(r10), 0, 0
    add r5, r4, r5
    lwz r0, lbl_8087FAA0
    li r3, 0x3
    ps_add f6, f10, f11
    psq_l f12, 0x40(r10), 0, 0
    psq_l f13, 0xc0(r10), 0, 0
    ps_sub f8, f10, f11
    add r6, r0, r4
    add r7, r0, r5
    ps_add f6, f6, f25
    ps_add f7, f12, f13
    ps_sub f9, f12, f13
    ps_add f8, f8, f25
    ps_add f0, f6, f7
    mtctr r3
lbl_fn_805E52E0_00000C60:
    ps_msub f9, f9, f29, f7
    psq_l f4, 0x20(r10), 0, 0
    ps_sub f3, f6, f7
    psq_l f5, 0x60(r10), 0, 0
    psq_l f6, 0xa0(r10), 0, 0
    psq_l f7, 0xe0(r10), 0, 0
    ps_add f1, f8, f9
    psq_l f10, 0x8(r10), 0, 0
    ps_sub f2, f8, f9
    psq_l f11, 0x88(r10), 0, 0
    ps_add f8, f6, f5
    psq_l f12, 0x48(r10), 0, 0
    ps_add f9, f4, f7
    psq_l f13, 0xc8(r10), 0, 0
    ps_sub f6, f6, f5
    addi r10, r10, 0x8
    ps_sub f4, f4, f7
    ps_add f7, f9, f8
    ps_sub f5, f9, f8
    ps_add f8, f6, f4
    ps_add f9, f0, f7
    ps_sub f30, f0, f7
    ps_mul f8, f8, f28
    ps_madd f6, f6, f26, f8
    ps_sub f6, f6, f7
    psq_st f9, 0x0(r6), 0, 6
    ps_msub f4, f4, f27, f8
    ps_msub f5, f5, f29, f6
    ps_add f9, f1, f6
    ps_sub f31, f1, f6
    psq_st f9, 0x8(r6), 0, 6
    ps_add f4, f4, f5
    ps_add f8, f2, f5
    psq_st f8, 0x10(r6), 0, 6
    ps_sub f9, f3, f4
    ps_add f0, f3, f4
    psq_st f9, 0x18(r6), 0, 6
    ps_add f6, f10, f11
    ps_sub f1, f2, f5
    psq_st f0, 0x0(r7), 0, 6
    ps_sub f8, f10, f11
    ps_add f6, f6, f25
    psq_st f1, 0x8(r7), 0, 6
    ps_add f7, f12, f13
    ps_sub f9, f12, f13
    psq_st f31, 0x10(r7), 0, 6
    addi r4, r4, 0x2
    add r6, r0, r4
    ps_add f0, f6, f7
    psq_st f30, 0x18(r7), 0, 6
    addi r5, r5, 0x2
    ps_add f8, f8, f25
    add r7, r0, r5
    bdnz lbl_fn_805E52E0_00000C60
    ps_msub f9, f9, f29, f7
    psq_l f4, 0x20(r10), 0, 0
    ps_sub f3, f6, f7
    psq_l f5, 0x60(r10), 0, 0
    psq_l f6, 0xa0(r10), 0, 0
    psq_l f7, 0xe0(r10), 0, 0
    ps_add f1, f8, f9
    ps_sub f2, f8, f9
    ps_add f8, f6, f5
    ps_add f9, f4, f7
    ps_sub f6, f6, f5
    ps_sub f4, f4, f7
    ps_add f7, f9, f8
    ps_sub f5, f9, f8
    ps_add f8, f6, f4
    ps_add f9, f0, f7
    ps_sub f30, f0, f7
    ps_mul f8, f8, f28
    ps_madd f6, f6, f26, f8
    psq_st f9, 0x0(r6), 0, 6
    ps_msub f4, f4, f27, f8
    ps_sub f6, f6, f7
    psq_st f30, 0x18(r7), 0, 6
    ps_add f9, f1, f6
    ps_msub f5, f5, f29, f6
    ps_sub f31, f1, f6
    psq_st f9, 0x8(r6), 0, 6
    ps_add f4, f4, f5
    ps_add f8, f2, f5
    psq_st f31, 0x10(r7), 0, 6
    psq_st f8, 0x10(r6), 0, 6
    ps_sub f9, f3, f4
    ps_add f0, f3, f4
    psq_st f9, 0x18(r6), 0, 6
    ps_sub f1, f2, f5
    psq_st f0, 0x0(r7), 0, 6
    psq_st f1, 0x8(r7), 0, 6
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    psq_l f29, 0x58(r1), 0, 0
    lfd f29, 0x50(r1)
    psq_l f28, 0x48(r1), 0, 0
    lfd f28, 0x40(r1)
    psq_l f27, 0x38(r1), 0, 0
    lfd f27, 0x30(r1)
    psq_l f26, 0x28(r1), 0, 0
    lfd f26, 0x20(r1)
    psq_l f25, 0x18(r1), 0, 0
    lfd f25, 0x10(r1)
    addi r1, r1, 0x80
    blr
}

asm void fn_805E5770(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    stfd f29, 0x50(r1)
    psq_st f29, 0x58(r1), 0, 0
    stfd f28, 0x40(r1)
    psq_st f28, 0x48(r1), 0, 0
    stfd f27, 0x30(r1)
    psq_st f27, 0x38(r1), 0, 0
    stfd f26, 0x20(r1)
    psq_st f26, 0x28(r1), 0, 0
    stfd f25, 0x10(r1)
    psq_st f25, 0x18(r1), 0, 0
    lis r5, lbl_807CAE40@ha
    li r7, 0x8
    addi r5, r5, lbl_807CAE40@l
    lfs f29, lbl_808884D0
    subi r10, r5, 0x8
    lfs f28, lbl_808884D4
    lfs f27, lbl_808884D8
    lfs f26, lbl_808884DC
    lfs f25, lbl_808884E0
    lwz r5, lbl_8087FA60
    mtctr r7
lbl_fn_805E5770_00000E78:
    psq_l f10, 0x0(r3), 0, 5
    psq_l f11, 0x0(r5), 0, 0
    lwz r0, 0xc(r3)
    lwz r8, 0x8(r3)
    ps_mul f10, f10, f11
    lwz r6, 0x4(r3)
    lhz r7, 0x2(r3)
    or r0, r0, r8
lbl_fn_805E5770_00000E98:
    cmpwi r0, 0x0
    bne lbl_fn_805E5770_00000FD8
    ps_merge00 f0, f10, f10
    cmpwi r6, 0x0
    psq_st f0, 0x8(r10), 0, 0
    bne lbl_fn_805E5770_00000F44
    psq_st f0, 0x10(r10), 0, 0
    cmpwi r7, 0x0
    psq_st f0, 0x18(r10), 0, 0
    bne lbl_fn_805E5770_00000ED4
    psq_stu f0, 0x20(r10), 0, 0
    addi r3, r3, 0x10
    addi r5, r5, 0x20
    bdnz lbl_fn_805E5770_00000E78
    b lbl_fn_805E5770_00001098
lbl_fn_805E5770_00000ED4:
    ps_msub f2, f10, f28, f10
    psq_lu f11, 0x20(r5), 0, 0
    ps_sub f1, f28, f27
    lwz r6, 0x14(r3)
    ps_merge00 f9, f10, f10
    lhz r7, 0x12(r3)
    ps_msub f3, f10, f29, f2
    ps_merge11 f5, f10, f2
    ps_nmsub f4, f10, f1, f3
    ps_add f7, f9, f5
    psq_l f10, 0x10(r3), 0, 5
    lwz r0, 0x1c(r3)
    ps_sub f5, f9, f5
    ps_merge11 f6, f3, f4
    lwz r8, 0x18(r3)
    ps_add f8, f9, f6
    ps_sub f6, f9, f6
    psq_stu f7, 0x8(r10), 0, 0
    ps_merge10 f6, f6, f6
    psq_stu f8, 0x8(r10), 0, 0
    ps_merge10 f5, f5, f5
    or r0, r0, r8
    psq_stu f6, 0x8(r10), 0, 0
    ps_mul f10, f10, f11
    psq_stu f5, 0x8(r10), 0, 0
    addi r3, r3, 0x10
    bdnz lbl_fn_805E5770_00000E98
    b lbl_fn_805E5770_00001098
lbl_fn_805E5770_00000F44:
    psq_l f1, 0x4(r3), 0, 5
    psq_l f9, 0x8(r5), 0, 0
    lwz r0, 0x1c(r3)
    ps_mul f1, f1, f9
    lwz r8, 0x18(r3)
    lwz r6, 0x14(r3)
    lhz r7, 0x12(r3)
    ps_sub f3, f10, f1
    ps_add f2, f10, f1
    ps_mul f8, f3, f28
    ps_madd f4, f1, f29, f3
    ps_nmsub f5, f1, f29, f2
    ps_nmsub f6, f1, f26, f8
    ps_nmsub f7, f10, f27, f8
    ps_merge00 f4, f2, f4
    ps_sub f6, f6, f2
    ps_merge00 f5, f5, f3
    ps_msub f8, f3, f29, f6
    ps_merge11 f2, f2, f6
    psq_lu f10, 0x10(r3), 0, 5
    psq_lu f11, 0x20(r5), 0, 0
    ps_sub f7, f7, f8
    ps_add f9, f4, f2
    ps_sub f4, f4, f2
    ps_merge11 f3, f8, f7
    psq_stu f9, 0x8(r10), 0, 0
    or r0, r0, r8
    ps_sub f1, f5, f3
    ps_add f0, f5, f3
    psq_stu f0, 0x8(r10), 0, 0
    ps_merge10 f1, f1, f1
    ps_merge10 f4, f4, f4
    psq_stu f1, 0x8(r10), 0, 0
    ps_mul f10, f10, f11
    psq_stu f4, 0x8(r10), 0, 0
    bdnz lbl_fn_805E5770_00000E98
    b lbl_fn_805E5770_00001098
lbl_fn_805E5770_00000FD8:
    psq_l f9, 0x4(r3), 0, 5
    psq_l f5, 0x8(r5), 0, 0
    ps_mul f9, f9, f5
    psq_l f2, 0x8(r3), 0, 5
    psq_l f6, 0x10(r5), 0, 0
    ps_merge01 f0, f10, f9
    psq_l f3, 0xc(r3), 0, 5
    ps_merge01 f1, f9, f10
    psq_l f7, 0x18(r5), 0, 0
    lwz r0, 0x1c(r3)
    ps_madd f4, f2, f6, f0
    ps_nmsub f5, f2, f6, f0
    lwz r8, 0x18(r3)
    ps_madd f6, f3, f7, f1
    lwz r6, 0x14(r3)
    ps_nmsub f7, f3, f7, f1
    lhz r7, 0x12(r3)
    ps_add f0, f4, f6
    ps_sub f8, f7, f5
    ps_msub f2, f7, f29, f6
    ps_sub f3, f4, f6
    ps_mul f8, f8, f28
    ps_add f1, f5, f2
    ps_sub f2, f5, f2
    ps_nmsub f6, f5, f26, f8
    ps_msub f4, f7, f27, f8
    ps_merge00 f1, f0, f1
    ps_sub f6, f6, f0
    ps_merge00 f2, f2, f3
    ps_madd f5, f3, f29, f6
    ps_merge11 f7, f0, f6
    psq_lu f10, 0x10(r3), 0, 5
    psq_lu f11, 0x20(r5), 0, 0
    ps_sub f4, f4, f5
    ps_add f3, f1, f7
    ps_sub f0, f1, f7
    ps_merge11 f4, f5, f4
    ps_mul f10, f10, f11
    ps_add f5, f2, f4
    ps_sub f6, f2, f4
    ps_merge10 f5, f5, f5
    psq_stu f3, 0x8(r10), 0, 0
    ps_merge10 f0, f0, f0
    psq_stu f6, 0x8(r10), 0, 0
    psq_stu f5, 0x8(r10), 0, 0
    or r0, r0, r8
    psq_stu f0, 0x8(r10), 0, 0
    bdnz lbl_fn_805E5770_00000E98
lbl_fn_805E5770_00001098:
    lis r10, lbl_807CAE40@ha
    lwz r0, lbl_8087FA80
    addi r10, r10, lbl_807CAE40@l
    slwi r3, r4, 2
    psq_l f10, 0x0(r10), 0, 0
    slwi r4, r0, 3
    psq_l f11, 0x80(r10), 0, 0
    slwi r5, r0, 2
    add r4, r4, r3
    lwz r0, lbl_8087FAA0
    ps_add f6, f10, f11
    psq_l f12, 0x40(r10), 0, 0
    psq_l f13, 0xc0(r10), 0, 0
    ps_sub f8, f10, f11
    add r5, r4, r5
    li r3, 0x3
    ps_add f6, f6, f25
    add r6, r0, r4
    ps_add f7, f12, f13
    add r7, r0, r5
    ps_sub f9, f12, f13
    ps_add f8, f8, f25
    ps_add f0, f6, f7
    mtctr r3
lbl_fn_805E5770_000010F8:
    ps_msub f9, f9, f29, f7
    psq_l f4, 0x20(r10), 0, 0
    ps_sub f3, f6, f7
    psq_l f5, 0x60(r10), 0, 0
    psq_l f6, 0xa0(r10), 0, 0
    psq_l f7, 0xe0(r10), 0, 0
    ps_add f1, f8, f9
    psq_l f10, 0x8(r10), 0, 0
    ps_sub f2, f8, f9
    psq_l f11, 0x88(r10), 0, 0
    ps_add f8, f6, f5
    psq_l f12, 0x48(r10), 0, 0
    ps_add f9, f4, f7
    psq_l f13, 0xc8(r10), 0, 0
    ps_sub f6, f6, f5
    addi r10, r10, 0x8
    ps_sub f4, f4, f7
    ps_add f7, f9, f8
    ps_sub f5, f9, f8
    ps_add f8, f6, f4
    ps_add f9, f0, f7
    ps_sub f30, f0, f7
    ps_mul f8, f8, f28
    ps_madd f6, f6, f26, f8
    ps_sub f6, f6, f7
    psq_st f9, 0x0(r6), 0, 6
    ps_msub f4, f4, f27, f8
    ps_msub f5, f5, f29, f6
    ps_add f9, f1, f6
    ps_sub f31, f1, f6
    psq_st f9, 0x8(r6), 0, 6
    ps_add f4, f4, f5
    ps_add f8, f2, f5
    psq_st f8, 0x10(r6), 0, 6
    ps_sub f9, f3, f4
    ps_add f0, f3, f4
    psq_st f9, 0x18(r6), 0, 6
    ps_add f6, f10, f11
    ps_sub f1, f2, f5
    psq_st f0, 0x0(r7), 0, 6
    ps_sub f8, f10, f11
    ps_add f6, f6, f25
    psq_st f1, 0x8(r7), 0, 6
    ps_add f7, f12, f13
    ps_sub f9, f12, f13
    psq_st f31, 0x10(r7), 0, 6
    addi r4, r4, 0x2
    add r6, r0, r4
    ps_add f0, f6, f7
    psq_st f30, 0x18(r7), 0, 6
    addi r5, r5, 0x2
    ps_add f8, f8, f25
    add r7, r0, r5
    bdnz lbl_fn_805E5770_000010F8
    ps_msub f9, f9, f29, f7
    psq_l f4, 0x20(r10), 0, 0
    ps_sub f3, f6, f7
    psq_l f5, 0x60(r10), 0, 0
    psq_l f6, 0xa0(r10), 0, 0
    psq_l f7, 0xe0(r10), 0, 0
    ps_add f1, f8, f9
    ps_sub f2, f8, f9
    ps_add f8, f6, f5
    ps_add f9, f4, f7
    ps_sub f6, f6, f5
    ps_sub f4, f4, f7
    ps_add f7, f9, f8
    ps_sub f5, f9, f8
    ps_add f8, f6, f4
    ps_add f9, f0, f7
    ps_sub f30, f0, f7
    ps_mul f8, f8, f28
    ps_madd f6, f6, f26, f8
    psq_st f9, 0x0(r6), 0, 6
    ps_msub f4, f4, f27, f8
    ps_sub f6, f6, f7
    psq_st f30, 0x18(r7), 0, 6
    ps_msub f5, f5, f29, f6
    ps_add f9, f1, f6
    ps_sub f31, f1, f6
    psq_st f9, 0x8(r6), 0, 6
    ps_add f8, f2, f5
    ps_add f4, f4, f5
    psq_st f8, 0x10(r6), 0, 6
    ps_sub f9, f3, f4
    psq_st f31, 0x10(r7), 0, 6
    ps_add f0, f3, f4
    psq_st f9, 0x18(r6), 0, 6
    ps_sub f1, f2, f5
    psq_st f0, 0x0(r7), 0, 6
    psq_st f1, 0x8(r7), 0, 6
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    psq_l f29, 0x58(r1), 0, 0
    lfd f29, 0x50(r1)
    psq_l f28, 0x48(r1), 0, 0
    lfd f28, 0x40(r1)
    psq_l f27, 0x38(r1), 0, 0
    lfd f27, 0x30(r1)
    psq_l f26, 0x28(r1), 0, 0
    lfd f26, 0x20(r1)
    psq_l f25, 0x18(r1), 0, 0
    lfd f25, 0x10(r1)
    addi r1, r1, 0x80
    blr
}

asm void fn_805E5C10(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    li r3, 0x3
    bl fn_805ED5A0
    lis r26, lbl_807CAE00@ha
    lis r28, lbl_807CAF40@ha
    addi r27, r26, lbl_807CAE00@l
    li r25, 0x0
    addi r30, r28, lbl_807CAF40@l
    li r29, 0x280
    li r31, 0x140
    li r22, 0x21
    li r23, 0x0
    b lbl_fn_805E5C10_00001464
lbl_fn_805E5C10_000012F4:
    lwz r3, lbl_8087FA44
    lwz r4, lbl_807CAE00@l(r26)
    bl fn_805E60C0
    lwz r3, lbl_8087FA44
    lwz r4, 0x4(r27)
    bl fn_805E60C0
    lwz r3, lbl_8087FA44
    lwz r4, 0x8(r27)
    bl fn_805E60C0
    lwz r3, lbl_8087FA44
    lwz r4, 0xc(r27)
    bl fn_805E60C0
    lwz r3, lbl_8087FA44
    lwz r4, 0x10(r27)
    bl fn_805E6740
    lwz r3, lbl_8087FA44
    lwz r4, 0x14(r27)
    bl fn_805E6DE0
    lwz r0, lbl_807CAF40@l(r28)
    clrlslwi r24, r25, 24, 4
    stw r0, lbl_8087FAA0
    mr r4, r24
    lwz r5, lbl_8087FA44
    stw r29, lbl_8087FA80
    lwz r3, lbl_807CAE00@l(r26)
    lbz r0, 0x680(r5)
    slwi r0, r0, 8
    add r0, r5, r0
    stw r0, lbl_8087FA60
    bl fn_805E52E0
    lwz r3, 0x4(r27)
    addi r4, r24, 0x8
    bl fn_805E52E0
    lwz r3, 0x8(r27)
    mr r4, r24
    bl fn_805E5770
    lwz r3, 0xc(r27)
    addi r4, r24, 0x8
    bl fn_805E5770
    lwz r0, 0x4(r30)
    srwi r24, r24, 1
    stw r0, lbl_8087FAA0
    mr r4, r24
    lwz r5, lbl_8087FA44
    stw r31, lbl_8087FA80
    lwz r3, 0x10(r27)
    lbz r0, 0x686(r5)
    slwi r0, r0, 8
    add r0, r5, r0
    stw r0, lbl_8087FA60
    bl fn_805E52E0
    lwz r0, 0x8(r30)
    mr r4, r24
    stw r0, lbl_8087FAA0
    lwz r5, lbl_8087FA44
    lwz r3, 0x14(r27)
    lbz r0, 0x68c(r5)
    slwi r0, r0, 8
    add r0, r5, r0
    stw r0, lbl_8087FA60
    bl fn_805E52E0
    lwz r4, lbl_8087FA44
    lbz r0, 0x6a9(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805E5C10_00001460
    lhz r3, 0x6ac(r4)
    subi r0, r3, 0x1
    sth r0, 0x6ac(r4)
    lwz r3, lbl_8087FA44
    lhz r0, 0x6ac(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805E5C10_00001460
    lhz r0, 0x6aa(r3)
    sth r0, 0x6ac(r3)
    lwz r4, lbl_8087FA44
    lwz r3, 0x6a4(r4)
    addi r0, r3, 0x6
    clrrwi r3, r0, 3
    addi r0, r3, 0x1
    stw r0, 0x6a4(r4)
    lwz r3, lbl_8087FA44
    lwz r0, 0x6a4(r3)
    cmplwi r0, 0x20
    ble lbl_fn_805E5C10_00001448
    stw r22, 0x6a4(r3)
lbl_fn_805E5C10_00001448:
    lwz r3, lbl_8087FA44
    sth r23, 0x684(r3)
    lwz r3, lbl_8087FA44
    sth r23, 0x68a(r3)
    lwz r3, lbl_8087FA44
    sth r23, 0x690(r3)
lbl_fn_805E5C10_00001460:
    addi r25, r25, 0x1
lbl_fn_805E5C10_00001464:
    lwz r3, lbl_8087FA44
    clrlwi r4, r25, 24
    lhz r0, 0x696(r3)
    cmpw r4, r0
    blt lbl_fn_805E5C10_000012F4
    lis r24, lbl_807CAF40@ha
    lwz r3, 0x6b0(r3)
    lwz r4, lbl_807CAF40@l(r24)
    li r5, 0x2800
    bl fn_805ED500
    lwz r3, lbl_8087FA44
    addi r24, r24, lbl_807CAF40@l
    lwz r4, 0x4(r24)
    li r5, 0xa00
    lwz r3, 0x6b4(r3)
    bl fn_805ED500
    lwz r3, lbl_8087FA44
    li r5, 0xa00
    lwz r4, 0x8(r24)
    lwz r3, 0x6b8(r3)
    bl fn_805ED500
    lwz r4, lbl_8087FA44
    addi r11, r1, 0x30
    lwz r3, 0x6b0(r4)
    addi r0, r3, 0x2800
    stw r0, 0x6b0(r4)
    lwz r4, lbl_8087FA44
    lwz r3, 0x6b4(r4)
    addi r0, r3, 0xa00
    stw r0, 0x6b4(r4)
    lwz r4, lbl_8087FA44
    lwz r3, 0x6b8(r4)
    addi r0, r3, 0xa00
    stw r0, 0x6b8(r4)
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805E5E60(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    lwz r4, lbl_8087FA44
    li r3, 0x3
    lhz r24, 0x692(r4)
    bl fn_805ED5A0
    lis r27, lbl_807CAE00@ha
    lis r29, lbl_807CAF40@ha
    addi r28, r27, lbl_807CAE00@l
    srwi r31, r24, 1
    addi r30, r29, lbl_807CAF40@l
    li r26, 0x0
    li r22, 0x21
    li r23, 0x0
    b lbl_fn_805E5E60_000016B8
lbl_fn_805E5E60_00001548:
    lwz r3, lbl_8087FA44
    lwz r4, lbl_807CAE00@l(r27)
    bl fn_805E60C0
    lwz r3, lbl_8087FA44
    lwz r4, 0x4(r28)
    bl fn_805E60C0
    lwz r3, lbl_8087FA44
    lwz r4, 0x8(r28)
    bl fn_805E60C0
    lwz r3, lbl_8087FA44
    lwz r4, 0xc(r28)
    bl fn_805E60C0
    lwz r3, lbl_8087FA44
    lwz r4, 0x10(r28)
    bl fn_805E6740
    lwz r3, lbl_8087FA44
    lwz r4, 0x14(r28)
    bl fn_805E6DE0
    lwz r0, lbl_807CAF40@l(r29)
    clrlslwi r25, r26, 24, 4
    stw r0, lbl_8087FAA0
    mr r4, r25
    lwz r5, lbl_8087FA44
    stw r24, lbl_8087FA80
    lwz r3, lbl_807CAE00@l(r27)
    lbz r0, 0x680(r5)
    slwi r0, r0, 8
    add r0, r5, r0
    stw r0, lbl_8087FA60
    bl fn_805E52E0
    lwz r3, 0x4(r28)
    addi r4, r25, 0x8
    bl fn_805E52E0
    lwz r3, 0x8(r28)
    mr r4, r25
    bl fn_805E5770
    lwz r3, 0xc(r28)
    addi r4, r25, 0x8
    bl fn_805E5770
    lwz r0, 0x4(r30)
    srwi r25, r25, 1
    stw r0, lbl_8087FAA0
    mr r4, r25
    lwz r5, lbl_8087FA44
    stw r31, lbl_8087FA80
    lwz r3, 0x10(r28)
    lbz r0, 0x686(r5)
    slwi r0, r0, 8
    add r0, r5, r0
    stw r0, lbl_8087FA60
    bl fn_805E52E0
    lwz r0, 0x8(r30)
    mr r4, r25
    stw r0, lbl_8087FAA0
    lwz r5, lbl_8087FA44
    lwz r3, 0x14(r28)
    lbz r0, 0x68c(r5)
    slwi r0, r0, 8
    add r0, r5, r0
    stw r0, lbl_8087FA60
    bl fn_805E52E0
    lwz r4, lbl_8087FA44
    lbz r0, 0x6a9(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805E5E60_000016B4
    lhz r3, 0x6ac(r4)
    subi r0, r3, 0x1
    sth r0, 0x6ac(r4)
    lwz r3, lbl_8087FA44
    lhz r0, 0x6ac(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805E5E60_000016B4
    lhz r0, 0x6aa(r3)
    sth r0, 0x6ac(r3)
    lwz r4, lbl_8087FA44
    lwz r3, 0x6a4(r4)
    addi r0, r3, 0x6
    clrrwi r3, r0, 3
    addi r0, r3, 0x1
    stw r0, 0x6a4(r4)
    lwz r3, lbl_8087FA44
    lwz r0, 0x6a4(r3)
    cmplwi r0, 0x20
    ble lbl_fn_805E5E60_0000169C
    stw r22, 0x6a4(r3)
lbl_fn_805E5E60_0000169C:
    lwz r3, lbl_8087FA44
    sth r23, 0x684(r3)
    lwz r3, lbl_8087FA44
    sth r23, 0x68a(r3)
    lwz r3, lbl_8087FA44
    sth r23, 0x690(r3)
lbl_fn_805E5E60_000016B4:
    addi r26, r26, 0x1
lbl_fn_805E5E60_000016B8:
    lwz r3, lbl_8087FA44
    clrlwi r4, r26, 24
    lhz r0, 0x696(r3)
    cmpw r4, r0
    blt lbl_fn_805E5E60_00001548
    lis r25, lbl_807CAF40@ha
    lwz r3, 0x6b0(r3)
    lwz r4, lbl_807CAF40@l(r25)
    extlwi r5, r24, 24, 4
    bl fn_805ED500
    lwz r3, lbl_8087FA44
    addi r25, r25, lbl_807CAF40@l
    lwz r4, 0x4(r25)
    extlwi r5, r24, 26, 2
    lwz r3, 0x6b4(r3)
    bl fn_805ED500
    lwz r3, lbl_8087FA44
    extlwi r5, r24, 26, 2
    lwz r4, 0x8(r25)
    lwz r3, 0x6b8(r3)
    bl fn_805ED500
    lwz r5, lbl_8087FA44
    extlwi r0, r24, 24, 4
    extlwi r4, r24, 26, 2
    addi r11, r1, 0x30
    lwz r3, 0x6b0(r5)
    add r0, r3, r0
    stw r0, 0x6b0(r5)
    lwz r3, lbl_8087FA44
    lwz r0, 0x6b4(r3)
    add r0, r0, r4
    stw r0, 0x6b4(r3)
    lwz r3, lbl_8087FA44
    lwz r0, 0x6b8(r3)
    add r0, r0, r4
    stw r0, 0x6b8(r3)
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805E60C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    dcbz r0, r4
    lwz r12, 0x6a4(r3)
    lwz r8, lbl_8087FB60
    cmpwi r12, 0x1c
    lwz r11, 0x6a0(r3)
    addi r5, r12, 0x4
    addi r10, r8, 0x20
    rlwnm r9, r11, r5, 27, 31
    bgt lbl_fn_805E60C0_00001850
    lbzx r5, r8, r9
    lbzx r10, r10, r9
    cmpwi r5, 0xff
    beq lbl_fn_805E60C0_000017B4
    add r12, r12, r10
    stw r12, 0x6a4(r3)
    b lbl_fn_805E60C0_000019F4
lbl_fn_805E60C0_000017B4:
    addi r6, r8, 0x58
    li r5, 0x5
    addi r12, r12, 0x5
lbl_fn_805E60C0_000017C0:
    cmpwi r12, 0x21
    slwi r9, r9, 1
    beq lbl_fn_805E60C0_000017E0
    rlwnm r10, r11, r12, 31, 31
    lwzu r0, 0x4(r6)
    or r9, r9, r10
    addi r12, r12, 0x1
    b lbl_fn_805E60C0_00001824
lbl_fn_805E60C0_000017E0:
    lwz r10, 0x69c(r3)
    li r12, 0x1
    lwzu r11, 0x4(r10)
    lwzu r0, 0x4(r6)
    rlwimi r9, r11, 1, 31, 31
    stw r10, 0x69c(r3)
    stw r11, 0x6a0(r3)
    b lbl_fn_805E60C0_00001810
lbl_fn_805E60C0_00001800:
    slwi r9, r9, 1
    rlwnm r10, r11, r12, 31, 31
    lwzu r0, 0x4(r6)
    or r9, r9, r10
lbl_fn_805E60C0_00001810:
    cmpw r9, r0
    addi r12, r12, 0x1
    addi r5, r5, 0x1
    bgt lbl_fn_805E60C0_00001800
    b lbl_fn_805E60C0_00001830
lbl_fn_805E60C0_00001824:
    cmpw r9, r0
    addi r5, r5, 0x1
    bgt lbl_fn_805E60C0_000017C0
lbl_fn_805E60C0_00001830:
    stw r12, 0x6a4(r3)
    slwi r0, r5, 2
    add r5, r8, r0
    lwz r0, 0x40(r8)
    lwz r5, 0x8c(r5)
    add r0, r0, r9
    lbzx r5, r5, r0
    b lbl_fn_805E60C0_000019F4
lbl_fn_805E60C0_00001850:
    cmpwi r12, 0x21
    lwz r9, 0x69c(r3)
    beq lbl_fn_805E60C0_00001908
    cmpwi r12, 0x20
    rlwnm r5, r11, r5, 27, 31
    beq lbl_fn_805E60C0_00001890
    lbzx r9, r8, r5
    lbzx r10, r10, r5
    cmpwi r9, 0xff
    add r5, r12, r10
    beq lbl_fn_805E60C0_0000196C
    cmpwi r5, 0x21
    stw r5, 0x6a4(r3)
    bgt lbl_fn_805E60C0_0000196C
    mr r5, r9
    b lbl_fn_805E60C0_000019F4
lbl_fn_805E60C0_00001890:
    lwzu r11, 0x4(r9)
    stw r9, 0x69c(r3)
    rlwimi r5, r11, 4, 28, 31
    lbzx r9, r8, r5
    lbzx r10, r10, r5
    cmpwi r9, 0xff
    stw r10, 0x6a4(r3)
    stw r11, 0x6a0(r3)
    beq lbl_fn_805E60C0_000018BC
    mr r5, r9
    b lbl_fn_805E60C0_000019F4
lbl_fn_805E60C0_000018BC:
    slwi r9, r5, 27
    addi r6, r8, 0x58
    rlwimi r9, r11, 31, 1, 31
    li r12, 0x5
    nop
lbl_fn_805E60C0_000018D0:
    subfic r11, r12, 0x1f
    lwzu r0, 0x4(r6)
    srw r5, r9, r11
    addi r12, r12, 0x1
    cmpw r5, r0
    bgt lbl_fn_805E60C0_000018D0
    stw r12, 0x6a4(r3)
lbl_fn_805E60C0_000018EC:
    slwi r0, r12, 2
    lwz r7, 0x40(r8)
    add r6, r8, r0
    lwz r6, 0x8c(r6)
    add r0, r7, r5
    lbzx r5, r6, r0
    b lbl_fn_805E60C0_000019F4
lbl_fn_805E60C0_00001908:
    lwzu r11, 0x4(r9)
    stw r9, 0x69c(r3)
    srwi r5, r11, 27
    lbzx r12, r8, r5
    lbzx r10, r10, r5
    cmpwi r12, 0xff
    stw r11, 0x6a0(r3)
    addi r10, r10, 0x1
    beq lbl_fn_805E60C0_00001938
    stw r10, 0x6a4(r3)
    mr r5, r12
    b lbl_fn_805E60C0_000019F4
lbl_fn_805E60C0_00001938:
    li r12, 0x5
    li r6, 0x14
lbl_fn_805E60C0_00001940:
    subfic r9, r12, 0x1f
    addi r6, r6, 0x4
    add r5, r8, r6
    addi r12, r12, 0x1
    lwz r0, 0x44(r5)
    srw r5, r11, r9
    cmpw cr1, r5, r0
    bgt cr1, lbl_fn_805E60C0_00001940
    addi r0, r12, 0x1
    stw r0, 0x6a4(r3)
    b lbl_fn_805E60C0_000018EC
lbl_fn_805E60C0_0000196C:
    subfic r0, r12, 0x21
    li r5, -0x1
    slw r7, r5, r0
    lwz r9, 0x69c(r3)
    andc r5, r11, r7
    addi r7, r8, 0x44
    subfic r6, r12, 0x21
    lwzu r11, 0x4(r9)
    addi r12, r6, 0x1
    slwi r6, r6, 2
    stw r11, 0x6a0(r3)
    add r7, r7, r6
    slwi r5, r5, 1
    stw r9, 0x69c(r3)
    rlwimi r5, r11, 1, 31, 31
    li r9, 0x2
    lwzu r6, 0x4(r7)
    b lbl_fn_805E60C0_000019CC
    nop
lbl_fn_805E60C0_000019B8:
    slwi r5, r5, 1
    lwzu r6, 0x4(r7)
    add r5, r5, r10
    addi r9, r9, 0x1
    addi r12, r12, 0x1
lbl_fn_805E60C0_000019CC:
    cmpw r5, r6
    rlwnm r10, r11, r9, 31, 31
    bgt lbl_fn_805E60C0_000019B8
    stw r9, 0x6a4(r3)
    slwi r0, r12, 2
    add r6, r8, r0
    lwz r0, 0x40(r8)
    lwz r6, 0x8c(r6)
    add r0, r0, r5
    lbzx r5, r6, r0
lbl_fn_805E60C0_000019F4:
    li r0, 0x20
    dcbz r4, r0
    li r0, 0x40
    li r7, 0x0
    dcbz r4, r0
    cmpwi cr1, r5, 0x0
    beq cr1, lbl_fn_805E60C0_00001A94
    lwz r7, 0x6a4(r3)
    subfic r8, r7, 0x21
    lwz r6, 0x6a0(r3)
    subfc. r9, r8, r5
    subi r10, r7, 0x1
    bgt lbl_fn_805E60C0_00001A40
    add r0, r7, r5
    stw r0, 0x6a4(r3)
    slw r7, r6, r10
    subfic r0, r5, 0x20
    srw r7, r7, r0
    b lbl_fn_805E60C0_00001A6C
lbl_fn_805E60C0_00001A40:
    slw r0, r6, r10
    lwz r7, 0x69c(r3)
    lwzu r6, 0x4(r7)
    addi r9, r9, 0x1
    stw r6, 0x6a0(r3)
    srw r6, r6, r8
    stw r7, 0x69c(r3)
    add r0, r6, r0
    stw r9, 0x6a4(r3)
    subfic r9, r5, 0x20
    srw r7, r0, r9
lbl_fn_805E60C0_00001A6C:
    extsh r6, r7
    subfic r0, r5, 0x20
    cntlzw r6, r6
    cmpw cr1, r6, r0
    ble cr1, lbl_fn_805E60C0_00001A94
    li r0, -0x1
    slw r0, r0, r5
    add r5, r7, r0
    addi r0, r5, 0x1
    extsh r7, r0
lbl_fn_805E60C0_00001A94:
    li r0, 0x60
    dcbz r4, r0
    lis r10, lbl_807646A8@ha
    lha r0, 0x684(r3)
    addi r10, r10, lbl_807646A8@l
    li r5, 0x1
    li r11, -0x1
    add r0, r0, r7
    sth r0, 0x684(r3)
    sth r0, 0x0(r4)
    lwz r8, lbl_8087FB00
    lwz r6, 0x6a4(r3)
    lwz r0, 0x6a0(r3)
    addi r7, r8, 0x20
    b lbl_fn_805E60C0_00001DAC
lbl_fn_805E60C0_00001AD0:
    cmpwi r6, 0x1c
    addi r30, r6, 0x4
    rlwnm r29, r0, r30, 27, 31
    bgt lbl_fn_805E60C0_00001B94
    lbzx r31, r8, r29
    lbzx r30, r7, r29
    cmpwi r31, 0xff
    beq lbl_fn_805E60C0_00001AF8
    add r6, r6, r30
    b lbl_fn_805E60C0_00001D18
lbl_fn_805E60C0_00001AF8:
    addi r9, r8, 0x58
    li r30, 0x5
    addi r6, r6, 0x5
    nop
lbl_fn_805E60C0_00001B08:
    cmpwi r6, 0x21
    slwi r29, r29, 1
    beq lbl_fn_805E60C0_00001B28
    rlwnm r31, r0, r6, 31, 31
    lwzu r12, 0x4(r9)
    or r29, r29, r31
    addi r6, r6, 0x1
    b lbl_fn_805E60C0_00001B6C
lbl_fn_805E60C0_00001B28:
    lwz r31, 0x69c(r3)
    li r6, 0x1
    lwzu r0, 0x4(r31)
    lwzu r12, 0x4(r9)
    rlwimi r29, r0, 1, 31, 31
    stw r31, 0x69c(r3)
    b lbl_fn_805E60C0_00001B58
    nop
lbl_fn_805E60C0_00001B48:
    slwi r29, r29, 1
    rlwnm r31, r0, r6, 31, 31
    lwzu r12, 0x4(r9)
    or r29, r29, r31
lbl_fn_805E60C0_00001B58:
    cmpw r29, r12
    addi r6, r6, 0x1
    addi r30, r30, 0x1
    bgt lbl_fn_805E60C0_00001B48
    b lbl_fn_805E60C0_00001B78
lbl_fn_805E60C0_00001B6C:
    cmpw r29, r12
    addi r30, r30, 0x1
    bgt lbl_fn_805E60C0_00001B08
lbl_fn_805E60C0_00001B78:
    slwi r9, r30, 2
    lwz r31, 0x40(r8)
    add r9, r8, r9
    lwz r12, 0x8c(r9)
    add r9, r31, r29
    lbzx r31, r12, r9
    b lbl_fn_805E60C0_00001D18
lbl_fn_805E60C0_00001B94:
    cmpwi r6, 0x21
    lwz r29, 0x69c(r3)
    beq lbl_fn_805E60C0_00001BD0
    cmpwi r6, 0x20
    rlwnm r30, r0, r30, 27, 31
    beq lbl_fn_805E60C0_00001C38
    lbzx r31, r8, r30
    lbzx r28, r7, r30
    cmpwi r31, 0xff
    add r30, r6, r28
    beq lbl_fn_805E60C0_00001C9C
    cmpwi r30, 0x21
    bgt lbl_fn_805E60C0_00001C9C
    mr r6, r30
    b lbl_fn_805E60C0_00001D18
lbl_fn_805E60C0_00001BD0:
    lwzu r0, 0x4(r29)
    stw r29, 0x69c(r3)
    srwi r30, r0, 27
    lbzx r31, r8, r30
    lbzx r29, r7, r30
    cmpwi r31, 0xff
    addi r6, r29, 0x1
    beq lbl_fn_805E60C0_00001BF4
    b lbl_fn_805E60C0_00001D18
lbl_fn_805E60C0_00001BF4:
    li r31, 0x5
    li r6, 0x14
    nop
lbl_fn_805E60C0_00001C00:
    subfic r29, r31, 0x1f
    addi r6, r6, 0x4
    add r12, r8, r6
    addi r31, r31, 0x1
    lwz r9, 0x44(r12)
    srw r30, r0, r29
    cmpw cr1, r30, r9
    bgt cr1, lbl_fn_805E60C0_00001C00
    lwz r9, 0x40(r8)
    addi r6, r31, 0x1
    lwz r12, 0x8c(r12)
    add r9, r9, r30
    lbzx r31, r12, r9
    b lbl_fn_805E60C0_00001D18
lbl_fn_805E60C0_00001C38:
    lwzu r0, 0x4(r29)
    stw r29, 0x69c(r3)
    rlwimi r30, r0, 4, 28, 31
    lbzx r31, r8, r30
    lbzx r6, r7, r30
    cmpwi r31, 0xff
    beq lbl_fn_805E60C0_00001C58
    b lbl_fn_805E60C0_00001D18
lbl_fn_805E60C0_00001C58:
    slwi r29, r30, 27
    addi r9, r8, 0x58
    rlwimi r29, r0, 31, 1, 31
    li r6, 0x5
lbl_fn_805E60C0_00001C68:
    subfic r31, r6, 0x1f
    lwzu r12, 0x4(r9)
    srw r30, r29, r31
    addi r6, r6, 0x1
    cmpw r30, r12
    bgt lbl_fn_805E60C0_00001C68
    slwi r9, r6, 2
    lwz r31, 0x40(r8)
    add r9, r8, r9
    lwz r12, 0x8c(r9)
    add r9, r31, r30
    lbzx r31, r12, r9
    b lbl_fn_805E60C0_00001D18
lbl_fn_805E60C0_00001C9C:
    subfic r9, r6, 0x21
    lwz r29, 0x69c(r3)
    slw r9, r11, r9
    andc r30, r0, r9
    addi r9, r8, 0x44
    subfic r12, r6, 0x21
    lwzu r0, 0x4(r29)
    addi r31, r12, 0x1
    slwi r12, r12, 2
    slwi r30, r30, 1
    stw r29, 0x69c(r3)
    add r9, r9, r12
    rlwimi r30, r0, 1, 31, 31
    li r6, 0x2
    lwzu r12, 0x4(r9)
    b lbl_fn_805E60C0_00001CF4
    nop
lbl_fn_805E60C0_00001CE0:
    slwi r30, r30, 1
    lwzu r12, 0x4(r9)
    add r30, r30, r28
    addi r6, r6, 0x1
    addi r31, r31, 0x1
lbl_fn_805E60C0_00001CF4:
    cmpw r30, r12
    rlwnm r28, r0, r6, 31, 31
    bgt lbl_fn_805E60C0_00001CE0
    slwi r9, r31, 2
    lwz r31, 0x40(r8)
    add r9, r8, r9
    lwz r12, 0x8c(r9)
    add r9, r31, r30
    lbzx r31, r12, r9
lbl_fn_805E60C0_00001D18:
    andi. r28, r31, 0xf
    srawi r31, r31, 4
    beq lbl_fn_805E60C0_00001D9C
    add r5, r5, r31
    subfic r30, r6, 0x21
    subfc. r29, r30, r28
    subi r9, r6, 0x1
    bgt lbl_fn_805E60C0_00001D4C
    add r6, r6, r28
    slw r12, r0, r9
    subfic r9, r28, 0x20
    srw r31, r12, r9
    b lbl_fn_805E60C0_00001D70
lbl_fn_805E60C0_00001D4C:
    slw r9, r0, r9
    lwz r12, 0x69c(r3)
    lwzu r0, 0x4(r12)
    addi r6, r29, 0x1
    stw r12, 0x69c(r3)
    srw r12, r0, r30
    add r9, r12, r9
    subfic r29, r28, 0x20
    srw r31, r9, r29
lbl_fn_805E60C0_00001D70:
    cntlzw r12, r31
    subfic r9, r28, 0x20
    cmpw cr1, r12, r9
    ble cr1, lbl_fn_805E60C0_00001D8C
    slw r9, r11, r28
    add r9, r9, r31
    addi r31, r9, 0x1
lbl_fn_805E60C0_00001D8C:
    lbzx r9, r10, r5
    slwi r9, r9, 1
    sthx r31, r4, r9
    b lbl_fn_805E60C0_00001DA8
lbl_fn_805E60C0_00001D9C:
    cmpwi cr1, r31, 0xf
    bne cr1, lbl_fn_805E60C0_00001DB4
    addi r5, r5, 0xf
lbl_fn_805E60C0_00001DA8:
    addi r5, r5, 0x1
lbl_fn_805E60C0_00001DAC:
    cmpwi cr1, r5, 0x40
    blt cr1, lbl_fn_805E60C0_00001AD0
lbl_fn_805E60C0_00001DB4:
    stw r6, 0x6a4(r3)
    stw r0, 0x6a0(r3)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    addi r1, r1, 0x20
    blr
}
