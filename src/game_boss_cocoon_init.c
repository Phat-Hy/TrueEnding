#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_27(void);
extern void _savegpr_21(void);
extern void _savegpr_27(void);
extern void fn_80219558(void);

/* External data declarations */

/* Small data declarations */
extern u32 lbl_8087E004;

/* Function declarations */
void fn_8044B44C(void);
void fn_8044C6C0(void);

asm void fn_8044B44C(void)
{
    nofralloc
    stwu r1, -0x3a0(r1)
    mflr r0
    stw r0, 0x3a4(r1)
    addi r11, r1, 0x3a0
    bl _savegpr_21
    lis r22, 0x38e4
    lis r6, 0x6666
    mr r23, r3
    mr r24, r4
    mr r25, r5
    addi r30, r6, 0x6667
    subi r29, r22, 0x71c7
    li r31, 0xf
lbl_fn_8044B44C_00000034:
    subf r0, r23, r24
    mulhw r0, r29, r0
    srawi r0, r0, 5
    srwi r3, r0, 31
    add r7, r0, r3
    cmpwi r7, 0x1
    ble lbl_fn_8044B44C_0000125C
    cmpwi r7, 0x14
    bgt lbl_fn_8044B44C_00000308
    cmplw r23, r24
    beq lbl_fn_8044B44C_0000125C
    subi r21, r24, 0x90
    li r30, 0xf
    b lbl_fn_8044B44C_000002FC
lbl_fn_8044B44C_0000006C:
    cmplw r23, r24
    mr r29, r23
    beq lbl_fn_8044B44C_00000130
    addi r31, r23, 0x90
    b lbl_fn_8044B44C_00000128
lbl_fn_8044B44C_00000080:
    lwz r3, 0x0(r31)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x0(r29)
    mr r22, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r22, 0x0
    bge lbl_fn_8044B44C_000000B4
    cmpwi r3, 0x0
    blt lbl_fn_8044B44C_000000B4
    li r0, 0x0
    b lbl_fn_8044B44C_00000118
lbl_fn_8044B44C_000000B4:
    cmpwi r22, 0x0
    blt lbl_fn_8044B44C_000000CC
    cmpwi r3, 0x0
    bge lbl_fn_8044B44C_000000CC
    li r0, 0x1
    b lbl_fn_8044B44C_00000118
lbl_fn_8044B44C_000000CC:
    cmpwi r22, 0x0
    bge lbl_fn_8044B44C_00000104
    cmpwi r3, 0x0
    bge lbl_fn_8044B44C_00000104
    lwz r4, 0x0(r31)
    lwz r3, 0x0(r29)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8044B44C_00000118
lbl_fn_8044B44C_00000104:
    xor r0, r3, r22
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_8044B44C_00000118:
    cmpwi r0, 0x0
    beq lbl_fn_8044B44C_00000124
    mr r29, r31
lbl_fn_8044B44C_00000124:
    addi r31, r31, 0x90
lbl_fn_8044B44C_00000128:
    cmplw r31, r24
    bne lbl_fn_8044B44C_00000080
lbl_fn_8044B44C_00000130:
    cmplw r29, r23
    beq lbl_fn_8044B44C_000002F8
    lwz r0, 0x0(r29)
    mr r6, r29
    stw r0, 0x2d8(r1)
    mr r4, r23
    lwz r0, 0x4(r29)
    stw r0, 0x2dc(r1)
    lwz r0, 0x8(r29)
    stw r0, 0x2e0(r1)
    lfs f0, 0xc(r29)
    stfs f0, 0x2e4(r1)
    lfs f0, 0x10(r29)
    stfs f0, 0x2e8(r1)
    lfs f0, 0x14(r29)
    stfs f0, 0x2ec(r1)
    lfs f0, 0x18(r29)
    stfs f0, 0x2f0(r1)
    lfs f0, 0x1c(r29)
    stfs f0, 0x2f4(r1)
    lfs f0, 0x20(r29)
    stfs f0, 0x2f8(r1)
    lwz r0, 0x24(r29)
    stw r0, 0x2fc(r1)
    lwz r3, 0x28(r29)
    lwz r0, 0x2c(r29)
    stw r0, 0x304(r1)
    stw r3, 0x300(r1)
    lwz r3, 0x30(r29)
    lwz r0, 0x34(r29)
    stw r0, 0x30c(r1)
    stw r3, 0x308(r1)
    lwz r3, 0x38(r29)
    lwz r0, 0x3c(r29)
    stw r0, 0x314(r1)
    stw r3, 0x310(r1)
    lwz r3, 0x40(r29)
    lwz r0, 0x44(r29)
    stw r0, 0x31c(r1)
    stw r3, 0x318(r1)
    lwz r3, 0x48(r29)
    lwz r0, 0x4c(r29)
    stw r0, 0x324(r1)
    stw r3, 0x320(r1)
    lwz r3, 0x50(r29)
    lwz r0, 0x54(r29)
    stw r0, 0x32c(r1)
    stw r3, 0x328(r1)
    lwz r3, 0x58(r29)
    lwz r0, 0x5c(r29)
    stw r0, 0x334(r1)
    stw r3, 0x330(r1)
    lwz r3, 0x60(r29)
    lwz r0, 0x64(r29)
    stw r0, 0x33c(r1)
    stw r3, 0x338(r1)
    lwz r3, 0x68(r29)
    lwz r0, 0x6c(r29)
    stw r0, 0x344(r1)
    stw r3, 0x340(r1)
    lwz r3, 0x70(r29)
    lwz r0, 0x74(r29)
    stw r0, 0x34c(r1)
    stw r3, 0x348(r1)
    lwz r3, 0x78(r29)
    lwz r0, 0x7c(r29)
    stw r0, 0x354(r1)
    stw r3, 0x350(r1)
    lwz r0, 0x80(r29)
    stw r0, 0x358(r1)
    lwz r0, 0x84(r29)
    stw r0, 0x35c(r1)
    lwz r0, 0x88(r29)
    stw r0, 0x360(r1)
    lwz r0, 0x8c(r29)
    stw r0, 0x364(r1)
    lwz r0, 0x0(r23)
    stw r0, 0x0(r29)
    mtctr r30
lbl_fn_8044B44C_0000026C:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_8044B44C_0000026C
    lwz r0, 0x4(r4)
    mr r5, r23
    stw r0, 0x4(r6)
    addi r4, r1, 0x2d8
    lwz r0, 0x80(r23)
    stw r0, 0x80(r29)
    lwz r0, 0x84(r23)
    stw r0, 0x84(r29)
    lwz r0, 0x88(r23)
    stw r0, 0x88(r29)
    lwz r0, 0x8c(r23)
    stw r0, 0x8c(r29)
    lwz r0, 0x2d8(r1)
    stw r0, 0x0(r23)
    mtctr r30
lbl_fn_8044B44C_000002BC:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_8044B44C_000002BC
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    lwz r0, 0x358(r1)
    stw r0, 0x80(r23)
    lwz r0, 0x35c(r1)
    stw r0, 0x84(r23)
    lwz r0, 0x360(r1)
    stw r0, 0x88(r23)
    lwz r0, 0x364(r1)
    stw r0, 0x8c(r23)
lbl_fn_8044B44C_000002F8:
    addi r23, r23, 0x90
lbl_fn_8044B44C_000002FC:
    cmplw r23, r21
    bne lbl_fn_8044B44C_0000006C
    b lbl_fn_8044B44C_0000125C
lbl_fn_8044B44C_00000308:
    lwz r4, lbl_8087E004
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r30, r4
    addi r6, r4, 0x1
    cmpwi r6, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    mulli r0, r0, 0x90
    add r3, r23, r0
    blt lbl_fn_8044B44C_00000348
    li r6, -0x4
lbl_fn_8044B44C_00000348:
    mulhw r4, r30, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8087E004
    cmpwi r0, 0x5
    subf r0, r7, r5
    srawi r0, r0, 2
    addze r5, r0
    srawi r0, r4, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r0, r5, r0
    mulli r0, r0, 0x90
    add r4, r23, r0
    blt lbl_fn_8044B44C_00000394
    li r6, -0x4
    stw r6, lbl_8087E004
lbl_fn_8044B44C_00000394:
    subi r26, r24, 0x90
    mr r6, r25
    mr r5, r26
    bl fn_8044C6C0
    mr r28, r23
    mr r27, r26
    b lbl_fn_8044B44C_000003B4
lbl_fn_8044B44C_000003B0:
    addi r28, r28, 0x90
lbl_fn_8044B44C_000003B4:
    lwz r3, 0x0(r28)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x0(r26)
    mr r21, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r21, 0x0
    bge lbl_fn_8044B44C_000003E8
    cmpwi r3, 0x0
    blt lbl_fn_8044B44C_000003E8
    li r0, 0x0
    b lbl_fn_8044B44C_0000044C
lbl_fn_8044B44C_000003E8:
    cmpwi r21, 0x0
    blt lbl_fn_8044B44C_00000400
    cmpwi r3, 0x0
    bge lbl_fn_8044B44C_00000400
    li r0, 0x1
    b lbl_fn_8044B44C_0000044C
lbl_fn_8044B44C_00000400:
    cmpwi r21, 0x0
    bge lbl_fn_8044B44C_00000438
    cmpwi r3, 0x0
    bge lbl_fn_8044B44C_00000438
    lwz r4, 0x0(r28)
    lwz r3, 0x0(r26)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8044B44C_0000044C
lbl_fn_8044B44C_00000438:
    xor r0, r3, r21
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_8044B44C_0000044C:
    cmpwi r0, 0x0
    bne lbl_fn_8044B44C_000003B0
lbl_fn_8044B44C_00000454:
    subi r27, r27, 0x90
    cmplw r28, r27
    beq lbl_fn_8044B44C_00000500
    lwz r3, 0x0(r27)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x0(r26)
    mr r21, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r21, 0x0
    bge lbl_fn_8044B44C_00000494
    cmpwi r3, 0x0
    blt lbl_fn_8044B44C_00000494
    li r0, 0x0
    b lbl_fn_8044B44C_000004F8
lbl_fn_8044B44C_00000494:
    cmpwi r21, 0x0
    blt lbl_fn_8044B44C_000004AC
    cmpwi r3, 0x0
    bge lbl_fn_8044B44C_000004AC
    li r0, 0x1
    b lbl_fn_8044B44C_000004F8
lbl_fn_8044B44C_000004AC:
    cmpwi r21, 0x0
    bge lbl_fn_8044B44C_000004E4
    cmpwi r3, 0x0
    bge lbl_fn_8044B44C_000004E4
    lwz r4, 0x0(r27)
    lwz r3, 0x0(r26)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8044B44C_000004F8
lbl_fn_8044B44C_000004E4:
    xor r0, r3, r21
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_8044B44C_000004F8:
    cmpwi r0, 0x0
    beq lbl_fn_8044B44C_00000454
lbl_fn_8044B44C_00000500:
    cmplw r28, r27
    bge lbl_fn_8044B44C_000009E4
    lwz r0, 0x0(r28)
    mr r6, r28
    stw r0, 0x248(r1)
    mr r4, r27
    lwz r0, 0x4(r28)
    stw r0, 0x24c(r1)
    lwz r0, 0x8(r28)
    stw r0, 0x250(r1)
    lfs f0, 0xc(r28)
    stfs f0, 0x254(r1)
    lfs f0, 0x10(r28)
    stfs f0, 0x258(r1)
    lfs f0, 0x14(r28)
    stfs f0, 0x25c(r1)
    lfs f0, 0x18(r28)
    stfs f0, 0x260(r1)
    lfs f0, 0x1c(r28)
    stfs f0, 0x264(r1)
    lfs f0, 0x20(r28)
    stfs f0, 0x268(r1)
    lwz r0, 0x24(r28)
    stw r0, 0x26c(r1)
    lwz r3, 0x28(r28)
    lwz r0, 0x2c(r28)
    stw r0, 0x274(r1)
    stw r3, 0x270(r1)
    lwz r3, 0x30(r28)
    lwz r0, 0x34(r28)
    stw r0, 0x27c(r1)
    stw r3, 0x278(r1)
    lwz r3, 0x38(r28)
    lwz r0, 0x3c(r28)
    stw r0, 0x284(r1)
    stw r3, 0x280(r1)
    lwz r3, 0x40(r28)
    lwz r0, 0x44(r28)
    stw r0, 0x28c(r1)
    stw r3, 0x288(r1)
    lwz r3, 0x48(r28)
    lwz r0, 0x4c(r28)
    stw r0, 0x294(r1)
    stw r3, 0x290(r1)
    lwz r3, 0x50(r28)
    lwz r0, 0x54(r28)
    stw r0, 0x29c(r1)
    stw r3, 0x298(r1)
    lwz r3, 0x58(r28)
    lwz r0, 0x5c(r28)
    stw r0, 0x2a4(r1)
    stw r3, 0x2a0(r1)
    lwz r3, 0x60(r28)
    lwz r0, 0x64(r28)
    stw r0, 0x2ac(r1)
    stw r3, 0x2a8(r1)
    lwz r3, 0x68(r28)
    lwz r0, 0x6c(r28)
    stw r0, 0x2b4(r1)
    stw r3, 0x2b0(r1)
    lwz r3, 0x70(r28)
    lwz r0, 0x74(r28)
    stw r0, 0x2bc(r1)
    stw r3, 0x2b8(r1)
    lwz r3, 0x78(r28)
    lwz r0, 0x7c(r28)
    stw r0, 0x2c4(r1)
    stw r3, 0x2c0(r1)
    lwz r0, 0x80(r28)
    stw r0, 0x2c8(r1)
    lwz r0, 0x84(r28)
    stw r0, 0x2cc(r1)
    lwz r0, 0x88(r28)
    stw r0, 0x2d0(r1)
    lwz r0, 0x8c(r28)
    stw r0, 0x2d4(r1)
    lwz r0, 0x0(r27)
    stw r0, 0x0(r28)
    mtctr r31
lbl_fn_8044B44C_0000063C:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_8044B44C_0000063C
    lwz r0, 0x4(r4)
    mr r5, r27
    stw r0, 0x4(r6)
    addi r4, r1, 0x248
    lwz r0, 0x80(r27)
    stw r0, 0x80(r28)
    lwz r0, 0x84(r27)
    stw r0, 0x84(r28)
    lwz r0, 0x88(r27)
    stw r0, 0x88(r28)
    lwz r0, 0x8c(r27)
    stw r0, 0x8c(r28)
    lwz r0, 0x248(r1)
    stw r0, 0x0(r27)
    mtctr r31
lbl_fn_8044B44C_0000068C:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_8044B44C_0000068C
    lwz r0, 0x4(r4)
    addi r28, r28, 0x90
    stw r0, 0x4(r5)
    lwz r0, 0x2c8(r1)
    stw r0, 0x80(r27)
    lwz r0, 0x2cc(r1)
    stw r0, 0x84(r27)
    lwz r0, 0x2d0(r1)
    stw r0, 0x88(r27)
    lwz r0, 0x2d4(r1)
    stw r0, 0x8c(r27)
    b lbl_fn_8044B44C_000006D4
lbl_fn_8044B44C_000006D0:
    addi r28, r28, 0x90
lbl_fn_8044B44C_000006D4:
    lwz r3, 0x0(r28)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x0(r26)
    mr r21, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r21, 0x0
    bge lbl_fn_8044B44C_00000708
    cmpwi r3, 0x0
    blt lbl_fn_8044B44C_00000708
    li r0, 0x0
    b lbl_fn_8044B44C_0000076C
lbl_fn_8044B44C_00000708:
    cmpwi r21, 0x0
    blt lbl_fn_8044B44C_00000720
    cmpwi r3, 0x0
    bge lbl_fn_8044B44C_00000720
    li r0, 0x1
    b lbl_fn_8044B44C_0000076C
lbl_fn_8044B44C_00000720:
    cmpwi r21, 0x0
    bge lbl_fn_8044B44C_00000758
    cmpwi r3, 0x0
    bge lbl_fn_8044B44C_00000758
    lwz r4, 0x0(r28)
    lwz r3, 0x0(r26)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8044B44C_0000076C
lbl_fn_8044B44C_00000758:
    xor r0, r3, r21
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_8044B44C_0000076C:
    cmpwi r0, 0x0
    bne lbl_fn_8044B44C_000006D0
lbl_fn_8044B44C_00000774:
    lwzu r3, -0x90(r27)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x0(r26)
    mr r21, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r21, 0x0
    bge lbl_fn_8044B44C_000007A8
    cmpwi r3, 0x0
    blt lbl_fn_8044B44C_000007A8
    li r0, 0x0
    b lbl_fn_8044B44C_0000080C
lbl_fn_8044B44C_000007A8:
    cmpwi r21, 0x0
    blt lbl_fn_8044B44C_000007C0
    cmpwi r3, 0x0
    bge lbl_fn_8044B44C_000007C0
    li r0, 0x1
    b lbl_fn_8044B44C_0000080C
lbl_fn_8044B44C_000007C0:
    cmpwi r21, 0x0
    bge lbl_fn_8044B44C_000007F8
    cmpwi r3, 0x0
    bge lbl_fn_8044B44C_000007F8
    lwz r4, 0x0(r27)
    lwz r3, 0x0(r26)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8044B44C_0000080C
lbl_fn_8044B44C_000007F8:
    xor r0, r3, r21
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_8044B44C_0000080C:
    cmpwi r0, 0x0
    beq lbl_fn_8044B44C_00000774
    cmplw r28, r27
    bge lbl_fn_8044B44C_000009E4
    lwz r0, 0x0(r28)
    mr r6, r28
    stw r0, 0x1b8(r1)
    mr r4, r27
    lwz r0, 0x4(r28)
    stw r0, 0x1bc(r1)
    lwz r0, 0x8(r28)
    stw r0, 0x1c0(r1)
    lfs f0, 0xc(r28)
    stfs f0, 0x1c4(r1)
    lfs f0, 0x10(r28)
    stfs f0, 0x1c8(r1)
    lfs f0, 0x14(r28)
    stfs f0, 0x1cc(r1)
    lfs f0, 0x18(r28)
    stfs f0, 0x1d0(r1)
    lfs f0, 0x1c(r28)
    stfs f0, 0x1d4(r1)
    lfs f0, 0x20(r28)
    stfs f0, 0x1d8(r1)
    lwz r0, 0x24(r28)
    stw r0, 0x1dc(r1)
    lwz r3, 0x28(r28)
    lwz r0, 0x2c(r28)
    stw r0, 0x1e4(r1)
    stw r3, 0x1e0(r1)
    lwz r3, 0x30(r28)
    lwz r0, 0x34(r28)
    stw r0, 0x1ec(r1)
    stw r3, 0x1e8(r1)
    lwz r3, 0x38(r28)
    lwz r0, 0x3c(r28)
    stw r0, 0x1f4(r1)
    stw r3, 0x1f0(r1)
    lwz r3, 0x40(r28)
    lwz r0, 0x44(r28)
    stw r0, 0x1fc(r1)
    stw r3, 0x1f8(r1)
    lwz r3, 0x48(r28)
    lwz r0, 0x4c(r28)
    stw r0, 0x204(r1)
    stw r3, 0x200(r1)
    lwz r3, 0x50(r28)
    lwz r0, 0x54(r28)
    stw r0, 0x20c(r1)
    stw r3, 0x208(r1)
    lwz r3, 0x58(r28)
    lwz r0, 0x5c(r28)
    stw r0, 0x214(r1)
    stw r3, 0x210(r1)
    lwz r3, 0x60(r28)
    lwz r0, 0x64(r28)
    stw r0, 0x21c(r1)
    stw r3, 0x218(r1)
    lwz r3, 0x68(r28)
    lwz r0, 0x6c(r28)
    stw r0, 0x224(r1)
    stw r3, 0x220(r1)
    lwz r3, 0x70(r28)
    lwz r0, 0x74(r28)
    stw r0, 0x22c(r1)
    stw r3, 0x228(r1)
    lwz r3, 0x78(r28)
    lwz r0, 0x7c(r28)
    stw r0, 0x234(r1)
    stw r3, 0x230(r1)
    lwz r0, 0x80(r28)
    stw r0, 0x238(r1)
    lwz r0, 0x84(r28)
    stw r0, 0x23c(r1)
    lwz r0, 0x88(r28)
    stw r0, 0x240(r1)
    lwz r0, 0x8c(r28)
    stw r0, 0x244(r1)
    lwz r0, 0x0(r27)
    stw r0, 0x0(r28)
    mtctr r31
lbl_fn_8044B44C_00000950:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_8044B44C_00000950
    lwz r0, 0x4(r4)
    mr r5, r27
    stw r0, 0x4(r6)
    addi r4, r1, 0x1b8
    lwz r0, 0x80(r27)
    stw r0, 0x80(r28)
    lwz r0, 0x84(r27)
    stw r0, 0x84(r28)
    lwz r0, 0x88(r27)
    stw r0, 0x88(r28)
    lwz r0, 0x8c(r27)
    stw r0, 0x8c(r28)
    lwz r0, 0x1b8(r1)
    stw r0, 0x0(r27)
    mtctr r31
lbl_fn_8044B44C_000009A0:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_8044B44C_000009A0
    lwz r0, 0x4(r4)
    addi r28, r28, 0x90
    stw r0, 0x4(r5)
    lwz r0, 0x238(r1)
    stw r0, 0x80(r27)
    lwz r0, 0x23c(r1)
    stw r0, 0x84(r27)
    lwz r0, 0x240(r1)
    stw r0, 0x88(r27)
    lwz r0, 0x244(r1)
    stw r0, 0x8c(r27)
    b lbl_fn_8044B44C_000006D4
lbl_fn_8044B44C_000009E4:
    cmplw r28, r23
    bne lbl_fn_8044B44C_000011F8
    lwz r0, 0x0(r28)
    mr r6, r28
    stw r0, 0x128(r1)
    mr r4, r26
    lwz r0, 0x4(r28)
    stw r0, 0x12c(r1)
    lwz r0, 0x8(r28)
    stw r0, 0x130(r1)
    lfs f0, 0xc(r28)
    stfs f0, 0x134(r1)
    lfs f0, 0x10(r28)
    stfs f0, 0x138(r1)
    lfs f0, 0x14(r28)
    stfs f0, 0x13c(r1)
    lfs f0, 0x18(r28)
    stfs f0, 0x140(r1)
    lfs f0, 0x1c(r28)
    stfs f0, 0x144(r1)
    lfs f0, 0x20(r28)
    stfs f0, 0x148(r1)
    lwz r0, 0x24(r28)
    stw r0, 0x14c(r1)
    lwz r3, 0x28(r28)
    lwz r0, 0x2c(r28)
    stw r0, 0x154(r1)
    stw r3, 0x150(r1)
    lwz r3, 0x30(r28)
    lwz r0, 0x34(r28)
    stw r0, 0x15c(r1)
    stw r3, 0x158(r1)
    lwz r3, 0x38(r28)
    lwz r0, 0x3c(r28)
    stw r0, 0x164(r1)
    stw r3, 0x160(r1)
    lwz r3, 0x40(r28)
    lwz r0, 0x44(r28)
    stw r0, 0x16c(r1)
    stw r3, 0x168(r1)
    lwz r3, 0x48(r28)
    lwz r0, 0x4c(r28)
    stw r0, 0x174(r1)
    stw r3, 0x170(r1)
    lwz r3, 0x50(r28)
    lwz r0, 0x54(r28)
    stw r0, 0x17c(r1)
    stw r3, 0x178(r1)
    lwz r3, 0x58(r28)
    lwz r0, 0x5c(r28)
    stw r0, 0x184(r1)
    stw r3, 0x180(r1)
    lwz r3, 0x60(r28)
    lwz r0, 0x64(r28)
    stw r0, 0x18c(r1)
    stw r3, 0x188(r1)
    lwz r3, 0x68(r28)
    lwz r0, 0x6c(r28)
    stw r0, 0x194(r1)
    stw r3, 0x190(r1)
    lwz r3, 0x70(r28)
    lwz r0, 0x74(r28)
    stw r0, 0x19c(r1)
    stw r3, 0x198(r1)
    lwz r3, 0x78(r28)
    lwz r0, 0x7c(r28)
    stw r0, 0x1a4(r1)
    stw r3, 0x1a0(r1)
    lwz r0, 0x80(r28)
    stw r0, 0x1a8(r1)
    lwz r0, 0x84(r28)
    stw r0, 0x1ac(r1)
    lwz r0, 0x88(r28)
    stw r0, 0x1b0(r1)
    lwz r0, 0x8c(r28)
    stw r0, 0x1b4(r1)
    lwz r0, 0x0(r26)
    stw r0, 0x0(r28)
    mtctr r31
lbl_fn_8044B44C_00000B20:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_8044B44C_00000B20
    lwz r0, 0x4(r4)
    mr r5, r26
    stw r0, 0x4(r6)
    addi r4, r1, 0x128
    lwz r0, 0x80(r26)
    stw r0, 0x80(r28)
    lwz r0, 0x84(r26)
    stw r0, 0x84(r28)
    lwz r0, 0x88(r26)
    stw r0, 0x88(r28)
    lwz r0, 0x8c(r26)
    stw r0, 0x8c(r28)
    lwz r0, 0x128(r1)
    stw r0, 0x0(r26)
    mtctr r31
lbl_fn_8044B44C_00000B70:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_8044B44C_00000B70
    lwz r0, 0x4(r4)
    subi r27, r24, 0x90
    stw r0, 0x4(r5)
    addi r28, r28, 0x90
    lwz r0, 0x1a8(r1)
    stw r0, 0x80(r26)
    lwz r0, 0x1ac(r1)
    stw r0, 0x84(r26)
    lwz r0, 0x1b0(r1)
    stw r0, 0x88(r26)
    lwz r0, 0x1b4(r1)
    stw r0, 0x8c(r26)
    lwz r3, 0x0(r23)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x0(r27)
    mr r26, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r26, 0x0
    bge lbl_fn_8044B44C_00000BE8
    cmpwi r3, 0x0
    blt lbl_fn_8044B44C_00000BE8
    li r0, 0x0
    b lbl_fn_8044B44C_00000C4C
lbl_fn_8044B44C_00000BE8:
    cmpwi r26, 0x0
    blt lbl_fn_8044B44C_00000C00
    cmpwi r3, 0x0
    bge lbl_fn_8044B44C_00000C00
    li r0, 0x1
    b lbl_fn_8044B44C_00000C4C
lbl_fn_8044B44C_00000C00:
    cmpwi r26, 0x0
    bge lbl_fn_8044B44C_00000C38
    cmpwi r3, 0x0
    bge lbl_fn_8044B44C_00000C38
    lwz r4, 0x0(r23)
    lwz r3, 0x0(r27)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8044B44C_00000C4C
lbl_fn_8044B44C_00000C38:
    xor r0, r3, r26
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_8044B44C_00000C4C:
    cmpwi r0, 0x0
    bne lbl_fn_8044B44C_00000ECC
    b lbl_fn_8044B44C_00000C5C
lbl_fn_8044B44C_00000C58:
    addi r28, r28, 0x90
lbl_fn_8044B44C_00000C5C:
    cmplw r28, r24
    beq lbl_fn_8044B44C_00000D04
    lwz r3, 0x0(r23)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x0(r28)
    mr r26, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r26, 0x0
    bge lbl_fn_8044B44C_00000C98
    cmpwi r3, 0x0
    blt lbl_fn_8044B44C_00000C98
    li r0, 0x0
    b lbl_fn_8044B44C_00000CFC
lbl_fn_8044B44C_00000C98:
    cmpwi r26, 0x0
    blt lbl_fn_8044B44C_00000CB0
    cmpwi r3, 0x0
    bge lbl_fn_8044B44C_00000CB0
    li r0, 0x1
    b lbl_fn_8044B44C_00000CFC
lbl_fn_8044B44C_00000CB0:
    cmpwi r26, 0x0
    bge lbl_fn_8044B44C_00000CE8
    cmpwi r3, 0x0
    bge lbl_fn_8044B44C_00000CE8
    lwz r4, 0x0(r23)
    lwz r3, 0x0(r28)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8044B44C_00000CFC
lbl_fn_8044B44C_00000CE8:
    xor r0, r3, r26
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_8044B44C_00000CFC:
    cmpwi r0, 0x0
    beq lbl_fn_8044B44C_00000C58
lbl_fn_8044B44C_00000D04:
    cmplw r28, r27
    bge lbl_fn_8044B44C_00000ECC
    lwz r0, 0x0(r28)
    mr r6, r28
    stw r0, 0x98(r1)
    mr r4, r27
    lwz r0, 0x4(r28)
    stw r0, 0x9c(r1)
    lwz r0, 0x8(r28)
    stw r0, 0xa0(r1)
    lfs f0, 0xc(r28)
    stfs f0, 0xa4(r1)
    lfs f0, 0x10(r28)
    stfs f0, 0xa8(r1)
    lfs f0, 0x14(r28)
    stfs f0, 0xac(r1)
    lfs f0, 0x18(r28)
    stfs f0, 0xb0(r1)
    lfs f0, 0x1c(r28)
    stfs f0, 0xb4(r1)
    lfs f0, 0x20(r28)
    stfs f0, 0xb8(r1)
    lwz r0, 0x24(r28)
    stw r0, 0xbc(r1)
    lwz r3, 0x28(r28)
    lwz r0, 0x2c(r28)
    stw r0, 0xc4(r1)
    stw r3, 0xc0(r1)
    lwz r3, 0x30(r28)
    lwz r0, 0x34(r28)
    stw r0, 0xcc(r1)
    stw r3, 0xc8(r1)
    lwz r3, 0x38(r28)
    lwz r0, 0x3c(r28)
    stw r0, 0xd4(r1)
    stw r3, 0xd0(r1)
    lwz r3, 0x40(r28)
    lwz r0, 0x44(r28)
    stw r0, 0xdc(r1)
    stw r3, 0xd8(r1)
    lwz r3, 0x48(r28)
    lwz r0, 0x4c(r28)
    stw r0, 0xe4(r1)
    stw r3, 0xe0(r1)
    lwz r3, 0x50(r28)
    lwz r0, 0x54(r28)
    stw r0, 0xec(r1)
    stw r3, 0xe8(r1)
    lwz r3, 0x58(r28)
    lwz r0, 0x5c(r28)
    stw r0, 0xf4(r1)
    stw r3, 0xf0(r1)
    lwz r3, 0x60(r28)
    lwz r0, 0x64(r28)
    stw r0, 0xfc(r1)
    stw r3, 0xf8(r1)
    lwz r3, 0x68(r28)
    lwz r0, 0x6c(r28)
    stw r0, 0x104(r1)
    stw r3, 0x100(r1)
    lwz r3, 0x70(r28)
    lwz r0, 0x74(r28)
    stw r0, 0x10c(r1)
    stw r3, 0x108(r1)
    lwz r3, 0x78(r28)
    lwz r0, 0x7c(r28)
    stw r0, 0x114(r1)
    stw r3, 0x110(r1)
    lwz r0, 0x80(r28)
    stw r0, 0x118(r1)
    lwz r0, 0x84(r28)
    stw r0, 0x11c(r1)
    lwz r0, 0x88(r28)
    stw r0, 0x120(r1)
    lwz r0, 0x8c(r28)
    stw r0, 0x124(r1)
    lwz r0, 0x0(r27)
    stw r0, 0x0(r28)
    mtctr r31
lbl_fn_8044B44C_00000E40:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_8044B44C_00000E40
    lwz r0, 0x4(r4)
    mr r5, r27
    stw r0, 0x4(r6)
    addi r4, r1, 0x98
    lwz r0, 0x80(r27)
    stw r0, 0x80(r28)
    lwz r0, 0x84(r27)
    stw r0, 0x84(r28)
    lwz r0, 0x88(r27)
    stw r0, 0x88(r28)
    lwz r0, 0x8c(r27)
    stw r0, 0x8c(r28)
    lwz r0, 0x98(r1)
    stw r0, 0x0(r27)
    mtctr r31
lbl_fn_8044B44C_00000E90:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_8044B44C_00000E90
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    lwz r0, 0x118(r1)
    stw r0, 0x80(r27)
    lwz r0, 0x11c(r1)
    stw r0, 0x84(r27)
    lwz r0, 0x120(r1)
    stw r0, 0x88(r27)
    lwz r0, 0x124(r1)
    stw r0, 0x8c(r27)
lbl_fn_8044B44C_00000ECC:
    cmplw r28, r27
    bge lbl_fn_8044B44C_000011F0
    b lbl_fn_8044B44C_00000EDC
lbl_fn_8044B44C_00000ED8:
    addi r28, r28, 0x90
lbl_fn_8044B44C_00000EDC:
    lwz r3, 0x0(r23)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x0(r28)
    mr r26, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r26, 0x0
    bge lbl_fn_8044B44C_00000F10
    cmpwi r3, 0x0
    blt lbl_fn_8044B44C_00000F10
    li r0, 0x0
    b lbl_fn_8044B44C_00000F74
lbl_fn_8044B44C_00000F10:
    cmpwi r26, 0x0
    blt lbl_fn_8044B44C_00000F28
    cmpwi r3, 0x0
    bge lbl_fn_8044B44C_00000F28
    li r0, 0x1
    b lbl_fn_8044B44C_00000F74
lbl_fn_8044B44C_00000F28:
    cmpwi r26, 0x0
    bge lbl_fn_8044B44C_00000F60
    cmpwi r3, 0x0
    bge lbl_fn_8044B44C_00000F60
    lwz r4, 0x0(r23)
    lwz r3, 0x0(r28)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8044B44C_00000F74
lbl_fn_8044B44C_00000F60:
    xor r0, r3, r26
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_8044B44C_00000F74:
    cmpwi r0, 0x0
    beq lbl_fn_8044B44C_00000ED8
lbl_fn_8044B44C_00000F7C:
    lwz r3, 0x0(r23)
    subi r27, r27, 0x90
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x0(r27)
    mr r26, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r26, 0x0
    bge lbl_fn_8044B44C_00000FB4
    cmpwi r3, 0x0
    blt lbl_fn_8044B44C_00000FB4
    li r0, 0x0
    b lbl_fn_8044B44C_00001018
lbl_fn_8044B44C_00000FB4:
    cmpwi r26, 0x0
    blt lbl_fn_8044B44C_00000FCC
    cmpwi r3, 0x0
    bge lbl_fn_8044B44C_00000FCC
    li r0, 0x1
    b lbl_fn_8044B44C_00001018
lbl_fn_8044B44C_00000FCC:
    cmpwi r26, 0x0
    bge lbl_fn_8044B44C_00001004
    cmpwi r3, 0x0
    bge lbl_fn_8044B44C_00001004
    lwz r4, 0x0(r23)
    lwz r3, 0x0(r27)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8044B44C_00001018
lbl_fn_8044B44C_00001004:
    xor r0, r3, r26
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_8044B44C_00001018:
    cmpwi r0, 0x0
    bne lbl_fn_8044B44C_00000F7C
    cmplw r28, r27
    bge lbl_fn_8044B44C_000011F0
    lwz r0, 0x0(r28)
    mr r6, r28
    stw r0, 0x8(r1)
    mr r4, r27
    lwz r0, 0x4(r28)
    stw r0, 0xc(r1)
    lwz r0, 0x8(r28)
    stw r0, 0x10(r1)
    lfs f0, 0xc(r28)
    stfs f0, 0x14(r1)
    lfs f0, 0x10(r28)
    stfs f0, 0x18(r1)
    lfs f0, 0x14(r28)
    stfs f0, 0x1c(r1)
    lfs f0, 0x18(r28)
    stfs f0, 0x20(r1)
    lfs f0, 0x1c(r28)
    stfs f0, 0x24(r1)
    lfs f0, 0x20(r28)
    stfs f0, 0x28(r1)
    lwz r0, 0x24(r28)
    stw r0, 0x2c(r1)
    lwz r3, 0x28(r28)
    lwz r0, 0x2c(r28)
    stw r0, 0x34(r1)
    stw r3, 0x30(r1)
    lwz r3, 0x30(r28)
    lwz r0, 0x34(r28)
    stw r0, 0x3c(r1)
    stw r3, 0x38(r1)
    lwz r3, 0x38(r28)
    lwz r0, 0x3c(r28)
    stw r0, 0x44(r1)
    stw r3, 0x40(r1)
    lwz r3, 0x40(r28)
    lwz r0, 0x44(r28)
    stw r0, 0x4c(r1)
    stw r3, 0x48(r1)
    lwz r3, 0x48(r28)
    lwz r0, 0x4c(r28)
    stw r0, 0x54(r1)
    stw r3, 0x50(r1)
    lwz r3, 0x50(r28)
    lwz r0, 0x54(r28)
    stw r0, 0x5c(r1)
    stw r3, 0x58(r1)
    lwz r3, 0x58(r28)
    lwz r0, 0x5c(r28)
    stw r0, 0x64(r1)
    stw r3, 0x60(r1)
    lwz r3, 0x60(r28)
    lwz r0, 0x64(r28)
    stw r0, 0x6c(r1)
    stw r3, 0x68(r1)
    lwz r3, 0x68(r28)
    lwz r0, 0x6c(r28)
    stw r0, 0x74(r1)
    stw r3, 0x70(r1)
    lwz r3, 0x70(r28)
    lwz r0, 0x74(r28)
    stw r0, 0x7c(r1)
    stw r3, 0x78(r1)
    lwz r3, 0x78(r28)
    lwz r0, 0x7c(r28)
    stw r0, 0x84(r1)
    stw r3, 0x80(r1)
    lwz r0, 0x80(r28)
    stw r0, 0x88(r1)
    lwz r0, 0x84(r28)
    stw r0, 0x8c(r1)
    lwz r0, 0x88(r28)
    stw r0, 0x90(r1)
    lwz r0, 0x8c(r28)
    stw r0, 0x94(r1)
    lwz r0, 0x0(r27)
    stw r0, 0x0(r28)
    mtctr r31
lbl_fn_8044B44C_0000115C:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_8044B44C_0000115C
    lwz r0, 0x4(r4)
    mr r5, r27
    stw r0, 0x4(r6)
    addi r4, r1, 0x8
    lwz r0, 0x80(r27)
    stw r0, 0x80(r28)
    lwz r0, 0x84(r27)
    stw r0, 0x84(r28)
    lwz r0, 0x88(r27)
    stw r0, 0x88(r28)
    lwz r0, 0x8c(r27)
    stw r0, 0x8c(r28)
    lwz r0, 0x8(r1)
    stw r0, 0x0(r27)
    mtctr r31
lbl_fn_8044B44C_000011AC:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_8044B44C_000011AC
    lwz r0, 0x4(r4)
    addi r28, r28, 0x90
    stw r0, 0x4(r5)
    lwz r0, 0x88(r1)
    stw r0, 0x80(r27)
    lwz r0, 0x8c(r1)
    stw r0, 0x84(r27)
    lwz r0, 0x90(r1)
    stw r0, 0x88(r27)
    lwz r0, 0x94(r1)
    stw r0, 0x8c(r27)
    b lbl_fn_8044B44C_00000EDC
lbl_fn_8044B44C_000011F0:
    mr r23, r28
    b lbl_fn_8044B44C_00000034
lbl_fn_8044B44C_000011F8:
    subf r0, r23, r28
    subi r4, r22, 0x71c7
    mulhw r3, r4, r0
    subf r0, r28, r24
    mulhw r0, r4, r0
    srawi r3, r3, 5
    srwi r4, r3, 31
    srawi r0, r0, 5
    add r4, r3, r4
    srwi r3, r0, 31
    add r0, r0, r3
    cmpw r4, r0
    bge lbl_fn_8044B44C_00001244
    mr r3, r23
    mr r4, r28
    mr r5, r25
    bl fn_8044B44C
    mr r23, r28
    b lbl_fn_8044B44C_00000034
lbl_fn_8044B44C_00001244:
    mr r3, r28
    mr r4, r24
    mr r5, r25
    bl fn_8044B44C
    mr r24, r28
    b lbl_fn_8044B44C_00000034
lbl_fn_8044B44C_0000125C:
    addi r11, r1, 0x3a0
    bl _restgpr_21
    lwz r0, 0x3a4(r1)
    mtlr r0
    addi r1, r1, 0x3a0
    blr
}

asm void fn_8044C6C0(void)
{
    nofralloc
    stwu r1, -0x260(r1)
    mflr r0
    stw r0, 0x264(r1)
    addi r11, r1, 0x260
    bl _savegpr_27
    lwz r6, 0x0(r5)
    mr r28, r3
    mr r29, r4
    mr r30, r5
    lwz r3, 0x50(r6)
    bl fn_80219558
    lwz r4, 0x0(r28)
    mr r27, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r27, 0x0
    bge lbl_fn_8044C6C0_000012C8
    cmpwi r3, 0x0
    blt lbl_fn_8044C6C0_000012C8
    li r0, 0x0
    b lbl_fn_8044C6C0_0000132C
lbl_fn_8044C6C0_000012C8:
    cmpwi r27, 0x0
    blt lbl_fn_8044C6C0_000012E0
    cmpwi r3, 0x0
    bge lbl_fn_8044C6C0_000012E0
    li r0, 0x1
    b lbl_fn_8044C6C0_0000132C
lbl_fn_8044C6C0_000012E0:
    cmpwi r27, 0x0
    bge lbl_fn_8044C6C0_00001318
    cmpwi r3, 0x0
    bge lbl_fn_8044C6C0_00001318
    lwz r4, 0x0(r30)
    lwz r3, 0x0(r28)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8044C6C0_0000132C
lbl_fn_8044C6C0_00001318:
    xor r0, r3, r27
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_8044C6C0_0000132C:
    lwz r3, 0x0(r29)
    cntlzw r0, r0
    srwi r31, r0, 5
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x0(r30)
    mr r27, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r27, 0x0
    bge lbl_fn_8044C6C0_00001368
    cmpwi r3, 0x0
    blt lbl_fn_8044C6C0_00001368
    li r0, 0x0
    b lbl_fn_8044C6C0_000013CC
lbl_fn_8044C6C0_00001368:
    cmpwi r27, 0x0
    blt lbl_fn_8044C6C0_00001380
    cmpwi r3, 0x0
    bge lbl_fn_8044C6C0_00001380
    li r0, 0x1
    b lbl_fn_8044C6C0_000013CC
lbl_fn_8044C6C0_00001380:
    cmpwi r27, 0x0
    bge lbl_fn_8044C6C0_000013B8
    cmpwi r3, 0x0
    bge lbl_fn_8044C6C0_000013B8
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r30)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8044C6C0_000013CC
lbl_fn_8044C6C0_000013B8:
    xor r0, r3, r27
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_8044C6C0_000013CC:
    cmpwi r31, 0x0
    cntlzw r0, r0
    srwi r0, r0, 5
    beq lbl_fn_8044C6C0_000013E4
    cmpwi r0, 0x0
    bne lbl_fn_8044C6C0_00001BC4
lbl_fn_8044C6C0_000013E4:
    cmpwi r31, 0x0
    bne lbl_fn_8044C6C0_000015C0
    cmpwi r0, 0x0
    bne lbl_fn_8044C6C0_000015C0
    lwz r3, 0x0(r28)
    li r0, 0xf
    stw r3, 0x1b8(r1)
    mr r5, r28
    mr r4, r29
    lwz r3, 0x4(r28)
    stw r3, 0x1bc(r1)
    lwz r3, 0x8(r28)
    stw r3, 0x1c0(r1)
    lfs f0, 0xc(r28)
    stfs f0, 0x1c4(r1)
    lfs f0, 0x10(r28)
    stfs f0, 0x1c8(r1)
    lfs f0, 0x14(r28)
    stfs f0, 0x1cc(r1)
    lfs f0, 0x18(r28)
    stfs f0, 0x1d0(r1)
    lfs f0, 0x1c(r28)
    stfs f0, 0x1d4(r1)
    lfs f0, 0x20(r28)
    stfs f0, 0x1d8(r1)
    lwz r3, 0x24(r28)
    stw r3, 0x1dc(r1)
    lwz r6, 0x28(r28)
    lwz r3, 0x2c(r28)
    stw r3, 0x1e4(r1)
    stw r6, 0x1e0(r1)
    lwz r6, 0x30(r28)
    lwz r3, 0x34(r28)
    stw r3, 0x1ec(r1)
    stw r6, 0x1e8(r1)
    lwz r6, 0x38(r28)
    lwz r3, 0x3c(r28)
    stw r3, 0x1f4(r1)
    stw r6, 0x1f0(r1)
    lwz r6, 0x40(r28)
    lwz r3, 0x44(r28)
    stw r3, 0x1fc(r1)
    stw r6, 0x1f8(r1)
    lwz r6, 0x48(r28)
    lwz r3, 0x4c(r28)
    stw r3, 0x204(r1)
    stw r6, 0x200(r1)
    lwz r6, 0x50(r28)
    lwz r3, 0x54(r28)
    stw r3, 0x20c(r1)
    stw r6, 0x208(r1)
    lwz r6, 0x58(r28)
    lwz r3, 0x5c(r28)
    stw r3, 0x214(r1)
    stw r6, 0x210(r1)
    lwz r6, 0x60(r28)
    lwz r3, 0x64(r28)
    stw r3, 0x21c(r1)
    stw r6, 0x218(r1)
    lwz r6, 0x68(r28)
    lwz r3, 0x6c(r28)
    stw r3, 0x224(r1)
    stw r6, 0x220(r1)
    lwz r6, 0x70(r28)
    lwz r3, 0x74(r28)
    stw r3, 0x22c(r1)
    stw r6, 0x228(r1)
    lwz r6, 0x78(r28)
    lwz r3, 0x7c(r28)
    stw r3, 0x234(r1)
    stw r6, 0x230(r1)
    lwz r3, 0x80(r28)
    stw r3, 0x238(r1)
    lwz r3, 0x84(r28)
    stw r3, 0x23c(r1)
    lwz r3, 0x88(r28)
    stw r3, 0x240(r1)
    lwz r3, 0x8c(r28)
    stw r3, 0x244(r1)
    lwz r3, 0x0(r29)
    stw r3, 0x0(r28)
    mtctr r0
lbl_fn_8044C6C0_0000152C:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_8044C6C0_0000152C
    lwz r3, 0x4(r4)
    li r0, 0xf
    stw r3, 0x4(r5)
    mr r5, r29
    addi r4, r1, 0x1b8
    lwz r3, 0x80(r29)
    stw r3, 0x80(r28)
    lwz r3, 0x84(r29)
    stw r3, 0x84(r28)
    lwz r3, 0x88(r29)
    stw r3, 0x88(r28)
    lwz r3, 0x8c(r29)
    stw r3, 0x8c(r28)
    lwz r3, 0x1b8(r1)
    stw r3, 0x0(r29)
    mtctr r0
lbl_fn_8044C6C0_00001580:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_8044C6C0_00001580
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    lwz r0, 0x238(r1)
    stw r0, 0x80(r29)
    lwz r0, 0x23c(r1)
    stw r0, 0x84(r29)
    lwz r0, 0x240(r1)
    stw r0, 0x88(r29)
    lwz r0, 0x244(r1)
    stw r0, 0x8c(r29)
    b lbl_fn_8044C6C0_00001BC4
lbl_fn_8044C6C0_000015C0:
    lwz r3, 0x0(r29)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x0(r28)
    mr r27, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r27, 0x0
    bge lbl_fn_8044C6C0_000015F4
    cmpwi r3, 0x0
    blt lbl_fn_8044C6C0_000015F4
    li r0, 0x0
    b lbl_fn_8044C6C0_00001658
lbl_fn_8044C6C0_000015F4:
    cmpwi r27, 0x0
    blt lbl_fn_8044C6C0_0000160C
    cmpwi r3, 0x0
    bge lbl_fn_8044C6C0_0000160C
    li r0, 0x1
    b lbl_fn_8044C6C0_00001658
lbl_fn_8044C6C0_0000160C:
    cmpwi r27, 0x0
    bge lbl_fn_8044C6C0_00001644
    cmpwi r3, 0x0
    bge lbl_fn_8044C6C0_00001644
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r28)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8044C6C0_00001658
lbl_fn_8044C6C0_00001644:
    xor r0, r3, r27
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_8044C6C0_00001658:
    cmpwi r0, 0x0
    beq lbl_fn_8044C6C0_00001828
    lwz r3, 0x0(r28)
    li r0, 0xf
    stw r3, 0x128(r1)
    mr r5, r28
    mr r4, r29
    lwz r3, 0x4(r28)
    stw r3, 0x12c(r1)
    lwz r3, 0x8(r28)
    stw r3, 0x130(r1)
    lfs f0, 0xc(r28)
    stfs f0, 0x134(r1)
    lfs f0, 0x10(r28)
    stfs f0, 0x138(r1)
    lfs f0, 0x14(r28)
    stfs f0, 0x13c(r1)
    lfs f0, 0x18(r28)
    stfs f0, 0x140(r1)
    lfs f0, 0x1c(r28)
    stfs f0, 0x144(r1)
    lfs f0, 0x20(r28)
    stfs f0, 0x148(r1)
    lwz r3, 0x24(r28)
    stw r3, 0x14c(r1)
    lwz r6, 0x28(r28)
    lwz r3, 0x2c(r28)
    stw r3, 0x154(r1)
    stw r6, 0x150(r1)
    lwz r6, 0x30(r28)
    lwz r3, 0x34(r28)
    stw r3, 0x15c(r1)
    stw r6, 0x158(r1)
    lwz r6, 0x38(r28)
    lwz r3, 0x3c(r28)
    stw r3, 0x164(r1)
    stw r6, 0x160(r1)
    lwz r6, 0x40(r28)
    lwz r3, 0x44(r28)
    stw r3, 0x16c(r1)
    stw r6, 0x168(r1)
    lwz r6, 0x48(r28)
    lwz r3, 0x4c(r28)
    stw r3, 0x174(r1)
    stw r6, 0x170(r1)
    lwz r6, 0x50(r28)
    lwz r3, 0x54(r28)
    stw r3, 0x17c(r1)
    stw r6, 0x178(r1)
    lwz r6, 0x58(r28)
    lwz r3, 0x5c(r28)
    stw r3, 0x184(r1)
    stw r6, 0x180(r1)
    lwz r6, 0x60(r28)
    lwz r3, 0x64(r28)
    stw r3, 0x18c(r1)
    stw r6, 0x188(r1)
    lwz r6, 0x68(r28)
    lwz r3, 0x6c(r28)
    stw r3, 0x194(r1)
    stw r6, 0x190(r1)
    lwz r6, 0x70(r28)
    lwz r3, 0x74(r28)
    stw r3, 0x19c(r1)
    stw r6, 0x198(r1)
    lwz r6, 0x78(r28)
    lwz r3, 0x7c(r28)
    stw r3, 0x1a4(r1)
    stw r6, 0x1a0(r1)
    lwz r3, 0x80(r28)
    stw r3, 0x1a8(r1)
    lwz r3, 0x84(r28)
    stw r3, 0x1ac(r1)
    lwz r3, 0x88(r28)
    stw r3, 0x1b0(r1)
    lwz r3, 0x8c(r28)
    stw r3, 0x1b4(r1)
    lwz r3, 0x0(r29)
    stw r3, 0x0(r28)
    mtctr r0
lbl_fn_8044C6C0_00001798:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_8044C6C0_00001798
    lwz r3, 0x4(r4)
    li r0, 0xf
    stw r3, 0x4(r5)
    mr r5, r29
    addi r4, r1, 0x128
    lwz r3, 0x80(r29)
    stw r3, 0x80(r28)
    lwz r3, 0x84(r29)
    stw r3, 0x84(r28)
    lwz r3, 0x88(r29)
    stw r3, 0x88(r28)
    lwz r3, 0x8c(r29)
    stw r3, 0x8c(r28)
    lwz r3, 0x128(r1)
    stw r3, 0x0(r29)
    mtctr r0
lbl_fn_8044C6C0_000017EC:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_8044C6C0_000017EC
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    lwz r0, 0x1a8(r1)
    stw r0, 0x80(r29)
    lwz r0, 0x1ac(r1)
    stw r0, 0x84(r29)
    lwz r0, 0x1b0(r1)
    stw r0, 0x88(r29)
    lwz r0, 0x1b4(r1)
    stw r0, 0x8c(r29)
lbl_fn_8044C6C0_00001828:
    cmpwi r31, 0x0
    beq lbl_fn_8044C6C0_000019FC
    lwz r3, 0x0(r29)
    li r0, 0xf
    stw r3, 0x98(r1)
    mr r5, r29
    mr r4, r30
    lwz r3, 0x4(r29)
    stw r3, 0x9c(r1)
    lwz r3, 0x8(r29)
    stw r3, 0xa0(r1)
    lfs f0, 0xc(r29)
    stfs f0, 0xa4(r1)
    lfs f0, 0x10(r29)
    stfs f0, 0xa8(r1)
    lfs f0, 0x14(r29)
    stfs f0, 0xac(r1)
    lfs f0, 0x18(r29)
    stfs f0, 0xb0(r1)
    lfs f0, 0x1c(r29)
    stfs f0, 0xb4(r1)
    lfs f0, 0x20(r29)
    stfs f0, 0xb8(r1)
    lwz r3, 0x24(r29)
    stw r3, 0xbc(r1)
    lwz r6, 0x28(r29)
    lwz r3, 0x2c(r29)
    stw r3, 0xc4(r1)
    stw r6, 0xc0(r1)
    lwz r6, 0x30(r29)
    lwz r3, 0x34(r29)
    stw r3, 0xcc(r1)
    stw r6, 0xc8(r1)
    lwz r6, 0x38(r29)
    lwz r3, 0x3c(r29)
    stw r3, 0xd4(r1)
    stw r6, 0xd0(r1)
    lwz r6, 0x40(r29)
    lwz r3, 0x44(r29)
    stw r3, 0xdc(r1)
    stw r6, 0xd8(r1)
    lwz r6, 0x48(r29)
    lwz r3, 0x4c(r29)
    stw r3, 0xe4(r1)
    stw r6, 0xe0(r1)
    lwz r6, 0x50(r29)
    lwz r3, 0x54(r29)
    stw r3, 0xec(r1)
    stw r6, 0xe8(r1)
    lwz r6, 0x58(r29)
    lwz r3, 0x5c(r29)
    stw r3, 0xf4(r1)
    stw r6, 0xf0(r1)
    lwz r6, 0x60(r29)
    lwz r3, 0x64(r29)
    stw r3, 0xfc(r1)
    stw r6, 0xf8(r1)
    lwz r6, 0x68(r29)
    lwz r3, 0x6c(r29)
    stw r3, 0x104(r1)
    stw r6, 0x100(r1)
    lwz r6, 0x70(r29)
    lwz r3, 0x74(r29)
    stw r3, 0x10c(r1)
    stw r6, 0x108(r1)
    lwz r6, 0x78(r29)
    lwz r3, 0x7c(r29)
    stw r3, 0x114(r1)
    stw r6, 0x110(r1)
    lwz r3, 0x80(r29)
    stw r3, 0x118(r1)
    lwz r3, 0x84(r29)
    stw r3, 0x11c(r1)
    lwz r3, 0x88(r29)
    stw r3, 0x120(r1)
    lwz r3, 0x8c(r29)
    stw r3, 0x124(r1)
    lwz r3, 0x0(r30)
    stw r3, 0x0(r29)
    mtctr r0
lbl_fn_8044C6C0_00001968:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_8044C6C0_00001968
    lwz r3, 0x4(r4)
    li r0, 0xf
    stw r3, 0x4(r5)
    mr r5, r30
    addi r4, r1, 0x98
    lwz r3, 0x80(r30)
    stw r3, 0x80(r29)
    lwz r3, 0x84(r30)
    stw r3, 0x84(r29)
    lwz r3, 0x88(r30)
    stw r3, 0x88(r29)
    lwz r3, 0x8c(r30)
    stw r3, 0x8c(r29)
    lwz r3, 0x98(r1)
    stw r3, 0x0(r30)
    mtctr r0
lbl_fn_8044C6C0_000019BC:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_8044C6C0_000019BC
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    lwz r0, 0x118(r1)
    stw r0, 0x80(r30)
    lwz r0, 0x11c(r1)
    stw r0, 0x84(r30)
    lwz r0, 0x120(r1)
    stw r0, 0x88(r30)
    lwz r0, 0x124(r1)
    stw r0, 0x8c(r30)
    b lbl_fn_8044C6C0_00001BC4
lbl_fn_8044C6C0_000019FC:
    lwz r3, 0x0(r28)
    li r0, 0xf
    stw r3, 0x8(r1)
    mr r5, r28
    mr r4, r30
    lwz r3, 0x4(r28)
    stw r3, 0xc(r1)
    lwz r3, 0x8(r28)
    stw r3, 0x10(r1)
    lfs f0, 0xc(r28)
    stfs f0, 0x14(r1)
    lfs f0, 0x10(r28)
    stfs f0, 0x18(r1)
    lfs f0, 0x14(r28)
    stfs f0, 0x1c(r1)
    lfs f0, 0x18(r28)
    stfs f0, 0x20(r1)
    lfs f0, 0x1c(r28)
    stfs f0, 0x24(r1)
    lfs f0, 0x20(r28)
    stfs f0, 0x28(r1)
    lwz r3, 0x24(r28)
    stw r3, 0x2c(r1)
    lwz r6, 0x28(r28)
    lwz r3, 0x2c(r28)
    stw r3, 0x34(r1)
    stw r6, 0x30(r1)
    lwz r6, 0x30(r28)
    lwz r3, 0x34(r28)
    stw r3, 0x3c(r1)
    stw r6, 0x38(r1)
    lwz r6, 0x38(r28)
    lwz r3, 0x3c(r28)
    stw r3, 0x44(r1)
    stw r6, 0x40(r1)
    lwz r6, 0x40(r28)
    lwz r3, 0x44(r28)
    stw r3, 0x4c(r1)
    stw r6, 0x48(r1)
    lwz r6, 0x48(r28)
    lwz r3, 0x4c(r28)
    stw r3, 0x54(r1)
    stw r6, 0x50(r1)
    lwz r6, 0x50(r28)
    lwz r3, 0x54(r28)
    stw r3, 0x5c(r1)
    stw r6, 0x58(r1)
    lwz r6, 0x58(r28)
    lwz r3, 0x5c(r28)
    stw r3, 0x64(r1)
    stw r6, 0x60(r1)
    lwz r6, 0x60(r28)
    lwz r3, 0x64(r28)
    stw r3, 0x6c(r1)
    stw r6, 0x68(r1)
    lwz r6, 0x68(r28)
    lwz r3, 0x6c(r28)
    stw r3, 0x74(r1)
    stw r6, 0x70(r1)
    lwz r6, 0x70(r28)
    lwz r3, 0x74(r28)
    stw r3, 0x7c(r1)
    stw r6, 0x78(r1)
    lwz r6, 0x78(r28)
    lwz r3, 0x7c(r28)
    stw r3, 0x84(r1)
    stw r6, 0x80(r1)
    lwz r3, 0x80(r28)
    stw r3, 0x88(r1)
    lwz r3, 0x84(r28)
    stw r3, 0x8c(r1)
    lwz r3, 0x88(r28)
    stw r3, 0x90(r1)
    lwz r3, 0x8c(r28)
    stw r3, 0x94(r1)
    lwz r3, 0x0(r30)
    stw r3, 0x0(r28)
    mtctr r0
lbl_fn_8044C6C0_00001B34:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_8044C6C0_00001B34
    lwz r3, 0x4(r4)
    li r0, 0xf
    stw r3, 0x4(r5)
    mr r5, r30
    addi r4, r1, 0x8
    lwz r3, 0x80(r30)
    stw r3, 0x80(r28)
    lwz r3, 0x84(r30)
    stw r3, 0x84(r28)
    lwz r3, 0x88(r30)
    stw r3, 0x88(r28)
    lwz r3, 0x8c(r30)
    stw r3, 0x8c(r28)
    lwz r3, 0x8(r1)
    stw r3, 0x0(r30)
    mtctr r0
lbl_fn_8044C6C0_00001B88:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_8044C6C0_00001B88
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    lwz r0, 0x88(r1)
    stw r0, 0x80(r30)
    lwz r0, 0x8c(r1)
    stw r0, 0x84(r30)
    lwz r0, 0x90(r1)
    stw r0, 0x88(r30)
    lwz r0, 0x94(r1)
    stw r0, 0x8c(r30)
lbl_fn_8044C6C0_00001BC4:
    addi r11, r1, 0x260
    bl _restgpr_27
    lwz r0, 0x264(r1)
    mtlr r0
    addi r1, r1, 0x260
    blr
}
