#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _savegpr_14(void);
extern void fn_804E09B0(void);
extern void fn_804E0CE8(void);
extern void fn_806846C4(void);
extern void fn_80686A48(void);

/* External data declarations */

/* Small data declarations */

/* Function declarations */
void fn_804E2844(void);
void fn_804E2920(void);

asm void fn_804E2844(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r29, r5
    mr r30, r6
    mr r28, r4
    mr r5, r27
    mr r3, r30
    mr r4, r29
    bl fn_804E09B0
    cntlzw r0, r3
    mr r3, r30
    mr r4, r28
    mr r5, r29
    srwi r31, r0, 5
    bl fn_804E09B0
    cmpwi r31, 0x0
    cntlzw r0, r3
    srwi r0, r0, 5
    beq lbl_fn_804E2844_00000060
    cmpwi r0, 0x0
    bne lbl_fn_804E2844_000000C8
lbl_fn_804E2844_00000060:
    cmpwi r31, 0x0
    bne lbl_fn_804E2844_00000080
    cmpwi r0, 0x0
    bne lbl_fn_804E2844_00000080
    mr r3, r27
    mr r4, r28
    bl fn_804E0CE8
    b lbl_fn_804E2844_000000C8
lbl_fn_804E2844_00000080:
    mr r3, r30
    mr r4, r28
    mr r5, r27
    bl fn_804E09B0
    cmpwi r3, 0x0
    beq lbl_fn_804E2844_000000A4
    mr r3, r27
    mr r4, r28
    bl fn_804E0CE8
lbl_fn_804E2844_000000A4:
    cmpwi r31, 0x0
    beq lbl_fn_804E2844_000000BC
    mr r3, r28
    mr r4, r29
    bl fn_804E0CE8
    b lbl_fn_804E2844_000000C8
lbl_fn_804E2844_000000BC:
    mr r3, r27
    mr r4, r29
    bl fn_804E0CE8
lbl_fn_804E2844_000000C8:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804E2920(void)
{
    nofralloc
    stwu r1, -0xdb0(r1)
    mflr r0
    stw r0, 0xdb4(r1)
    addi r11, r1, 0xdb0
    bl _savegpr_14
    cmplw r3, r4
    mr r23, r3
    mr r24, r4
    beq lbl_fn_804E2920_00001C34
    addi r28, r1, 0x3c4
    addi r27, r1, 0x6d8
    addi r26, r1, 0x9ec
    addi r25, r1, 0xd00
    subi r22, r4, 0xd5c
    addi r14, r1, 0xc5c
    addi r20, r1, 0xcfc
    addi r31, r1, 0x948
    addi r19, r1, 0x9e8
    addi r30, r1, 0x634
    addi r18, r1, 0x6d4
    addi r29, r1, 0x320
    addi r17, r1, 0x3c0
    li r21, 0x50
    b lbl_fn_804E2920_00001C2C
lbl_fn_804E2920_0000013C:
    cmplw r23, r24
    mr r16, r23
    beq lbl_fn_804E2920_00000170
    addi r4, r23, 0xd5c
    b lbl_fn_804E2920_00000168
lbl_fn_804E2920_00000150:
    lwz r3, 0xd58(r4)
    lwz r0, 0xd58(r16)
    cmpw r3, r0
    ble lbl_fn_804E2920_00000164
    mr r16, r4
lbl_fn_804E2920_00000164:
    addi r4, r4, 0xd5c
lbl_fn_804E2920_00000168:
    cmplw r4, r24
    bne lbl_fn_804E2920_00000150
lbl_fn_804E2920_00000170:
    cmplw r16, r23
    beq lbl_fn_804E2920_00001C28
    lwz r0, 0x0(r16)
    stw r0, 0x8(r1)
    lwz r3, 0x4(r16)
    lwz r0, 0x8(r16)
    stw r0, 0x10(r1)
    stw r3, 0xc(r1)
    lwz r3, 0xc(r16)
    lwz r0, 0x10(r16)
    stw r0, 0x18(r1)
    stw r3, 0x14(r1)
    lwz r3, 0x14(r16)
    lwz r0, 0x18(r16)
    stw r0, 0x20(r1)
    stw r3, 0x1c(r1)
    lwz r3, 0x1c(r16)
    lwz r0, 0x20(r16)
    stw r0, 0x28(r1)
    stw r3, 0x24(r1)
    lwz r3, 0x24(r16)
    lwz r0, 0x28(r16)
    stw r0, 0x30(r1)
    stw r3, 0x2c(r1)
    lwz r3, 0x2c(r16)
    lwz r0, 0x30(r16)
    stw r0, 0x38(r1)
    stw r3, 0x34(r1)
    lwz r0, 0x34(r16)
    stw r0, 0x3c(r1)
    lwz r0, 0x38(r16)
    stw r0, 0x40(r1)
    lfs f0, 0x3c(r16)
    stfs f0, 0x44(r1)
    lfs f0, 0x40(r16)
    stfs f0, 0x48(r1)
    lfs f0, 0x44(r16)
    stfs f0, 0x4c(r1)
    lfs f0, 0x48(r16)
    stfs f0, 0x50(r1)
    lfs f0, 0x4c(r16)
    stfs f0, 0x54(r1)
    lfs f0, 0x50(r16)
    stfs f0, 0x58(r1)
    lwz r0, 0x54(r16)
    stw r0, 0x5c(r1)
    lwz r3, 0x58(r16)
    lwz r0, 0x5c(r16)
    stw r0, 0x64(r1)
    stw r3, 0x60(r1)
    lwz r3, 0x60(r16)
    lwz r0, 0x64(r16)
    stw r0, 0x6c(r1)
    stw r3, 0x68(r1)
    lwz r3, 0x68(r16)
    lwz r0, 0x6c(r16)
    stw r0, 0x74(r1)
    stw r3, 0x70(r1)
    lwz r3, 0x70(r16)
    lwz r0, 0x74(r16)
    stw r0, 0x7c(r1)
    stw r3, 0x78(r1)
    lwz r3, 0x78(r16)
    lwz r0, 0x7c(r16)
    stw r0, 0x84(r1)
    stw r3, 0x80(r1)
    lwz r3, 0x80(r16)
    lwz r0, 0x84(r16)
    stw r0, 0x8c(r1)
    stw r3, 0x88(r1)
    lwz r3, 0x88(r16)
    lwz r0, 0x8c(r16)
    stw r0, 0x94(r1)
    stw r3, 0x90(r1)
    lwz r3, 0x90(r16)
    lwz r0, 0x94(r16)
    stw r0, 0x9c(r1)
    stw r3, 0x98(r1)
    lwz r3, 0x98(r16)
    lwz r0, 0x9c(r16)
    stw r0, 0xa4(r1)
    stw r3, 0xa0(r1)
    lwz r3, 0xa0(r16)
    lwz r0, 0xa4(r16)
    stw r0, 0xac(r1)
    stw r3, 0xa8(r1)
    lwz r3, 0xa8(r16)
    lwz r0, 0xac(r16)
    stw r0, 0xb4(r1)
    stw r3, 0xb0(r1)
    lwz r3, 0xb0(r16)
    lwz r0, 0xb4(r16)
    stw r0, 0xbc(r1)
    stw r3, 0xb8(r1)
    lwz r3, 0xb8(r16)
    lwz r0, 0xbc(r16)
    stw r0, 0xc4(r1)
    stw r3, 0xc0(r1)
    lwz r3, 0xc0(r16)
    lwz r0, 0xc4(r16)
    stw r0, 0xcc(r1)
    stw r3, 0xc8(r1)
    lwz r0, 0xc8(r16)
    stw r0, 0xd0(r1)
    lbz r0, 0xcc(r16)
    addi r4, r1, 0x154
    stb r0, 0xd4(r1)
    cmplw r4, r17
    addi r3, r16, 0x14c
    lwz r0, 0xd0(r16)
    stw r0, 0xd8(r1)
    lwz r0, 0xd4(r16)
    stw r0, 0xdc(r1)
    lwz r0, 0xd8(r16)
    stw r0, 0xe0(r1)
    lwz r0, 0xdc(r16)
    stw r0, 0xe4(r1)
    lwz r0, 0xe0(r16)
    stw r0, 0xe8(r1)
    lwz r0, 0xe4(r16)
    stw r0, 0xec(r1)
    lwz r0, 0xe8(r16)
    stw r0, 0xf0(r1)
    lhz r0, 0xec(r16)
    sth r0, 0xf4(r1)
    lwz r0, 0xf0(r16)
    stw r0, 0xf8(r1)
    lwz r5, 0xf4(r16)
    lwz r0, 0xf8(r16)
    stw r0, 0x100(r1)
    stw r5, 0xfc(r1)
    lwz r5, 0xfc(r16)
    lwz r0, 0x100(r16)
    stw r0, 0x108(r1)
    stw r5, 0x104(r1)
    lwz r5, 0x104(r16)
    lwz r0, 0x108(r16)
    stw r0, 0x110(r1)
    stw r5, 0x10c(r1)
    lwz r5, 0x10c(r16)
    lwz r0, 0x110(r16)
    stw r0, 0x118(r1)
    stw r5, 0x114(r1)
    lwz r5, 0x114(r16)
    lwz r0, 0x118(r16)
    stw r0, 0x120(r1)
    stw r5, 0x11c(r1)
    lwz r5, 0x11c(r16)
    lwz r0, 0x120(r16)
    stw r0, 0x128(r1)
    stw r5, 0x124(r1)
    lwz r5, 0x124(r16)
    lwz r0, 0x128(r16)
    stw r0, 0x130(r1)
    stw r5, 0x12c(r1)
    lwz r5, 0x12c(r16)
    lwz r0, 0x130(r16)
    stw r0, 0x138(r1)
    stw r5, 0x134(r1)
    lwz r0, 0x134(r16)
    stw r0, 0x13c(r1)
    lha r0, 0x138(r16)
    sth r0, 0x140(r1)
    lha r0, 0x13a(r16)
    sth r0, 0x142(r1)
    lfs f0, 0x13c(r16)
    stfs f0, 0x144(r1)
    lfs f0, 0x140(r16)
    stfs f0, 0x148(r1)
    lfs f0, 0x144(r16)
    stfs f0, 0x14c(r1)
    lfs f0, 0x148(r16)
    stfs f0, 0x150(r1)
    bge lbl_fn_804E2920_0000064C
    li r0, 0x0
    li r5, 0x0
    bgt lbl_fn_804E2920_00000438
    li r5, 0x1
lbl_fn_804E2920_00000438:
    cmpwi r5, 0x0
    beq lbl_fn_804E2920_00000444
    li r0, 0x1
lbl_fn_804E2920_00000444:
    cmpwi r0, 0x0
    beq lbl_fn_804E2920_000005F4
    addi r5, r29, 0x9f
    li r0, 0xa0
    subf r5, r4, r5
    divwu r5, r5, r0
    mtctr r5
    cmplw r4, r29
    bge lbl_fn_804E2920_000005F4
lbl_fn_804E2920_00000468:
    lha r0, 0x0(r3)
    sth r0, 0x0(r4)
    lha r0, 0x2(r3)
    sth r0, 0x2(r4)
    lfs f0, 0x4(r3)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r3)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r3)
    stfs f0, 0xc(r4)
    lfs f0, 0x10(r3)
    stfs f0, 0x10(r4)
    lha r0, 0x14(r3)
    sth r0, 0x14(r4)
    lha r0, 0x16(r3)
    sth r0, 0x16(r4)
    lfs f0, 0x18(r3)
    stfs f0, 0x18(r4)
    lfs f0, 0x1c(r3)
    stfs f0, 0x1c(r4)
    lfs f0, 0x20(r3)
    stfs f0, 0x20(r4)
    lfs f0, 0x24(r3)
    stfs f0, 0x24(r4)
    lha r0, 0x28(r3)
    sth r0, 0x28(r4)
    lha r0, 0x2a(r3)
    sth r0, 0x2a(r4)
    lfs f0, 0x2c(r3)
    stfs f0, 0x2c(r4)
    lfs f0, 0x30(r3)
    stfs f0, 0x30(r4)
    lfs f0, 0x34(r3)
    stfs f0, 0x34(r4)
    lfs f0, 0x38(r3)
    stfs f0, 0x38(r4)
    lha r0, 0x3c(r3)
    sth r0, 0x3c(r4)
    lha r0, 0x3e(r3)
    sth r0, 0x3e(r4)
    lfs f0, 0x40(r3)
    stfs f0, 0x40(r4)
    lfs f0, 0x44(r3)
    stfs f0, 0x44(r4)
    lfs f0, 0x48(r3)
    stfs f0, 0x48(r4)
    lfs f0, 0x4c(r3)
    stfs f0, 0x4c(r4)
    lha r0, 0x50(r3)
    sth r0, 0x50(r4)
    lha r0, 0x52(r3)
    sth r0, 0x52(r4)
    lfs f0, 0x54(r3)
    stfs f0, 0x54(r4)
    lfs f0, 0x58(r3)
    stfs f0, 0x58(r4)
    lfs f0, 0x5c(r3)
    stfs f0, 0x5c(r4)
    lfs f0, 0x60(r3)
    stfs f0, 0x60(r4)
    lha r0, 0x64(r3)
    sth r0, 0x64(r4)
    lha r0, 0x66(r3)
    sth r0, 0x66(r4)
    lfs f0, 0x68(r3)
    stfs f0, 0x68(r4)
    lfs f0, 0x6c(r3)
    stfs f0, 0x6c(r4)
    lfs f0, 0x70(r3)
    stfs f0, 0x70(r4)
    lfs f0, 0x74(r3)
    stfs f0, 0x74(r4)
    lha r0, 0x78(r3)
    sth r0, 0x78(r4)
    lha r0, 0x7a(r3)
    sth r0, 0x7a(r4)
    lfs f0, 0x7c(r3)
    stfs f0, 0x7c(r4)
    lfs f0, 0x80(r3)
    stfs f0, 0x80(r4)
    lfs f0, 0x84(r3)
    stfs f0, 0x84(r4)
    lfs f0, 0x88(r3)
    stfs f0, 0x88(r4)
    lha r0, 0x8c(r3)
    sth r0, 0x8c(r4)
    lha r0, 0x8e(r3)
    sth r0, 0x8e(r4)
    lfs f0, 0x90(r3)
    stfs f0, 0x90(r4)
    lfs f0, 0x94(r3)
    stfs f0, 0x94(r4)
    lfs f0, 0x98(r3)
    stfs f0, 0x98(r4)
    lfs f0, 0x9c(r3)
    addi r3, r3, 0xa0
    stfs f0, 0x9c(r4)
    addi r4, r4, 0xa0
    bdnz lbl_fn_804E2920_00000468
lbl_fn_804E2920_000005F4:
    addi r5, r17, 0x13
    li r0, 0x14
    subf r5, r4, r5
    divwu r5, r5, r0
    mtctr r5
    cmplw r4, r17
    bge lbl_fn_804E2920_0000064C
lbl_fn_804E2920_00000610:
    lha r0, 0x0(r3)
    sth r0, 0x0(r4)
    lha r0, 0x2(r3)
    sth r0, 0x2(r4)
    lfs f0, 0x4(r3)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r3)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r3)
    stfs f0, 0xc(r4)
    lfs f0, 0x10(r3)
    addi r3, r3, 0x14
    stfs f0, 0x10(r4)
    addi r4, r4, 0x14
    bdnz lbl_fn_804E2920_00000610
lbl_fn_804E2920_0000064C:
    lwz r0, 0x3b8(r16)
    addi r4, r1, 0x468
    stw r0, 0x3c0(r1)
    cmplw r4, r18
    addi r3, r16, 0x460
    lwz r5, 0x3bc(r16)
    lwz r0, 0x3c0(r16)
    stw r0, 0x3c8(r1)
    stw r5, 0x3c4(r1)
    lwz r5, 0x3c4(r16)
    lwz r0, 0x3c8(r16)
    stw r0, 0x3d0(r1)
    stw r5, 0x3cc(r1)
    lwz r5, 0x3cc(r16)
    lwz r0, 0x3d0(r16)
    stw r0, 0x3d8(r1)
    stw r5, 0x3d4(r1)
    lwz r5, 0x3d4(r16)
    lwz r0, 0x3d8(r16)
    stw r0, 0x3e0(r1)
    stw r5, 0x3dc(r1)
    lwz r5, 0x3dc(r16)
    lwz r0, 0x3e0(r16)
    stw r0, 0x3e8(r1)
    stw r5, 0x3e4(r1)
    lwz r5, 0x3e4(r16)
    lwz r0, 0x3e8(r16)
    stw r0, 0x3f0(r1)
    stw r5, 0x3ec(r1)
    lwz r5, 0x3ec(r16)
    lwz r0, 0x3f0(r16)
    stw r0, 0x3f8(r1)
    stw r5, 0x3f4(r1)
    lwz r5, 0x3f4(r16)
    lwz r0, 0x3f8(r16)
    stw r0, 0x400(r1)
    stw r5, 0x3fc(r1)
    lwz r0, 0x3fc(r16)
    stw r0, 0x404(r1)
    lhz r0, 0x400(r16)
    sth r0, 0x408(r1)
    lwz r0, 0x404(r16)
    stw r0, 0x40c(r1)
    lwz r5, 0x408(r16)
    lwz r0, 0x40c(r16)
    stw r0, 0x414(r1)
    stw r5, 0x410(r1)
    lwz r5, 0x410(r16)
    lwz r0, 0x414(r16)
    stw r0, 0x41c(r1)
    stw r5, 0x418(r1)
    lwz r5, 0x418(r16)
    lwz r0, 0x41c(r16)
    stw r0, 0x424(r1)
    stw r5, 0x420(r1)
    lwz r5, 0x420(r16)
    lwz r0, 0x424(r16)
    stw r0, 0x42c(r1)
    stw r5, 0x428(r1)
    lwz r5, 0x428(r16)
    lwz r0, 0x42c(r16)
    stw r0, 0x434(r1)
    stw r5, 0x430(r1)
    lwz r5, 0x430(r16)
    lwz r0, 0x434(r16)
    stw r0, 0x43c(r1)
    stw r5, 0x438(r1)
    lwz r5, 0x438(r16)
    lwz r0, 0x43c(r16)
    stw r0, 0x444(r1)
    stw r5, 0x440(r1)
    lwz r5, 0x440(r16)
    lwz r0, 0x444(r16)
    stw r0, 0x44c(r1)
    stw r5, 0x448(r1)
    lwz r0, 0x448(r16)
    stw r0, 0x450(r1)
    lha r0, 0x44c(r16)
    sth r0, 0x454(r1)
    lha r0, 0x44e(r16)
    sth r0, 0x456(r1)
    lfs f0, 0x450(r16)
    stfs f0, 0x458(r1)
    lfs f0, 0x454(r16)
    stfs f0, 0x45c(r1)
    lfs f0, 0x458(r16)
    stfs f0, 0x460(r1)
    lfs f0, 0x45c(r16)
    stfs f0, 0x464(r1)
    bge lbl_fn_804E2920_000009D8
    li r0, 0x0
    li r5, 0x0
    bgt lbl_fn_804E2920_000007C4
    li r5, 0x1
lbl_fn_804E2920_000007C4:
    cmpwi r5, 0x0
    beq lbl_fn_804E2920_000007D0
    li r0, 0x1
lbl_fn_804E2920_000007D0:
    cmpwi r0, 0x0
    beq lbl_fn_804E2920_00000980
    addi r5, r30, 0x9f
    li r0, 0xa0
    subf r5, r4, r5
    divwu r5, r5, r0
    mtctr r5
    cmplw r4, r30
    bge lbl_fn_804E2920_00000980
lbl_fn_804E2920_000007F4:
    lha r0, 0x0(r3)
    sth r0, 0x0(r4)
    lha r0, 0x2(r3)
    sth r0, 0x2(r4)
    lfs f0, 0x4(r3)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r3)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r3)
    stfs f0, 0xc(r4)
    lfs f0, 0x10(r3)
    stfs f0, 0x10(r4)
    lha r0, 0x14(r3)
    sth r0, 0x14(r4)
    lha r0, 0x16(r3)
    sth r0, 0x16(r4)
    lfs f0, 0x18(r3)
    stfs f0, 0x18(r4)
    lfs f0, 0x1c(r3)
    stfs f0, 0x1c(r4)
    lfs f0, 0x20(r3)
    stfs f0, 0x20(r4)
    lfs f0, 0x24(r3)
    stfs f0, 0x24(r4)
    lha r0, 0x28(r3)
    sth r0, 0x28(r4)
    lha r0, 0x2a(r3)
    sth r0, 0x2a(r4)
    lfs f0, 0x2c(r3)
    stfs f0, 0x2c(r4)
    lfs f0, 0x30(r3)
    stfs f0, 0x30(r4)
    lfs f0, 0x34(r3)
    stfs f0, 0x34(r4)
    lfs f0, 0x38(r3)
    stfs f0, 0x38(r4)
    lha r0, 0x3c(r3)
    sth r0, 0x3c(r4)
    lha r0, 0x3e(r3)
    sth r0, 0x3e(r4)
    lfs f0, 0x40(r3)
    stfs f0, 0x40(r4)
    lfs f0, 0x44(r3)
    stfs f0, 0x44(r4)
    lfs f0, 0x48(r3)
    stfs f0, 0x48(r4)
    lfs f0, 0x4c(r3)
    stfs f0, 0x4c(r4)
    lha r0, 0x50(r3)
    sth r0, 0x50(r4)
    lha r0, 0x52(r3)
    sth r0, 0x52(r4)
    lfs f0, 0x54(r3)
    stfs f0, 0x54(r4)
    lfs f0, 0x58(r3)
    stfs f0, 0x58(r4)
    lfs f0, 0x5c(r3)
    stfs f0, 0x5c(r4)
    lfs f0, 0x60(r3)
    stfs f0, 0x60(r4)
    lha r0, 0x64(r3)
    sth r0, 0x64(r4)
    lha r0, 0x66(r3)
    sth r0, 0x66(r4)
    lfs f0, 0x68(r3)
    stfs f0, 0x68(r4)
    lfs f0, 0x6c(r3)
    stfs f0, 0x6c(r4)
    lfs f0, 0x70(r3)
    stfs f0, 0x70(r4)
    lfs f0, 0x74(r3)
    stfs f0, 0x74(r4)
    lha r0, 0x78(r3)
    sth r0, 0x78(r4)
    lha r0, 0x7a(r3)
    sth r0, 0x7a(r4)
    lfs f0, 0x7c(r3)
    stfs f0, 0x7c(r4)
    lfs f0, 0x80(r3)
    stfs f0, 0x80(r4)
    lfs f0, 0x84(r3)
    stfs f0, 0x84(r4)
    lfs f0, 0x88(r3)
    stfs f0, 0x88(r4)
    lha r0, 0x8c(r3)
    sth r0, 0x8c(r4)
    lha r0, 0x8e(r3)
    sth r0, 0x8e(r4)
    lfs f0, 0x90(r3)
    stfs f0, 0x90(r4)
    lfs f0, 0x94(r3)
    stfs f0, 0x94(r4)
    lfs f0, 0x98(r3)
    stfs f0, 0x98(r4)
    lfs f0, 0x9c(r3)
    addi r3, r3, 0xa0
    stfs f0, 0x9c(r4)
    addi r4, r4, 0xa0
    bdnz lbl_fn_804E2920_000007F4
lbl_fn_804E2920_00000980:
    addi r5, r18, 0x13
    li r0, 0x14
    subf r5, r4, r5
    divwu r5, r5, r0
    mtctr r5
    cmplw r4, r18
    bge lbl_fn_804E2920_000009D8
lbl_fn_804E2920_0000099C:
    lha r0, 0x0(r3)
    sth r0, 0x0(r4)
    lha r0, 0x2(r3)
    sth r0, 0x2(r4)
    lfs f0, 0x4(r3)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r3)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r3)
    stfs f0, 0xc(r4)
    lfs f0, 0x10(r3)
    addi r3, r3, 0x14
    stfs f0, 0x10(r4)
    addi r4, r4, 0x14
    bdnz lbl_fn_804E2920_0000099C
lbl_fn_804E2920_000009D8:
    lwz r0, 0x6cc(r16)
    addi r4, r1, 0x77c
    stw r0, 0x6d4(r1)
    cmplw r4, r19
    addi r3, r16, 0x774
    lwz r5, 0x6d0(r16)
    lwz r0, 0x6d4(r16)
    stw r0, 0x6dc(r1)
    stw r5, 0x6d8(r1)
    lwz r5, 0x6d8(r16)
    lwz r0, 0x6dc(r16)
    stw r0, 0x6e4(r1)
    stw r5, 0x6e0(r1)
    lwz r5, 0x6e0(r16)
    lwz r0, 0x6e4(r16)
    stw r0, 0x6ec(r1)
    stw r5, 0x6e8(r1)
    lwz r5, 0x6e8(r16)
    lwz r0, 0x6ec(r16)
    stw r0, 0x6f4(r1)
    stw r5, 0x6f0(r1)
    lwz r5, 0x6f0(r16)
    lwz r0, 0x6f4(r16)
    stw r0, 0x6fc(r1)
    stw r5, 0x6f8(r1)
    lwz r5, 0x6f8(r16)
    lwz r0, 0x6fc(r16)
    stw r0, 0x704(r1)
    stw r5, 0x700(r1)
    lwz r5, 0x700(r16)
    lwz r0, 0x704(r16)
    stw r0, 0x70c(r1)
    stw r5, 0x708(r1)
    lwz r5, 0x708(r16)
    lwz r0, 0x70c(r16)
    stw r0, 0x714(r1)
    stw r5, 0x710(r1)
    lwz r0, 0x710(r16)
    stw r0, 0x718(r1)
    lhz r0, 0x714(r16)
    sth r0, 0x71c(r1)
    lwz r0, 0x718(r16)
    stw r0, 0x720(r1)
    lwz r5, 0x71c(r16)
    lwz r0, 0x720(r16)
    stw r0, 0x728(r1)
    stw r5, 0x724(r1)
    lwz r5, 0x724(r16)
    lwz r0, 0x728(r16)
    stw r0, 0x730(r1)
    stw r5, 0x72c(r1)
    lwz r5, 0x72c(r16)
    lwz r0, 0x730(r16)
    stw r0, 0x738(r1)
    stw r5, 0x734(r1)
    lwz r5, 0x734(r16)
    lwz r0, 0x738(r16)
    stw r0, 0x740(r1)
    stw r5, 0x73c(r1)
    lwz r5, 0x73c(r16)
    lwz r0, 0x740(r16)
    stw r0, 0x748(r1)
    stw r5, 0x744(r1)
    lwz r5, 0x744(r16)
    lwz r0, 0x748(r16)
    stw r0, 0x750(r1)
    stw r5, 0x74c(r1)
    lwz r5, 0x74c(r16)
    lwz r0, 0x750(r16)
    stw r0, 0x758(r1)
    stw r5, 0x754(r1)
    lwz r5, 0x754(r16)
    lwz r0, 0x758(r16)
    stw r0, 0x760(r1)
    stw r5, 0x75c(r1)
    lwz r0, 0x75c(r16)
    stw r0, 0x764(r1)
    lha r0, 0x760(r16)
    sth r0, 0x768(r1)
    lha r0, 0x762(r16)
    sth r0, 0x76a(r1)
    lfs f0, 0x764(r16)
    stfs f0, 0x76c(r1)
    lfs f0, 0x768(r16)
    stfs f0, 0x770(r1)
    lfs f0, 0x76c(r16)
    stfs f0, 0x774(r1)
    lfs f0, 0x770(r16)
    stfs f0, 0x778(r1)
    bge lbl_fn_804E2920_00000D64
    li r0, 0x0
    li r5, 0x0
    bgt lbl_fn_804E2920_00000B50
    li r5, 0x1
lbl_fn_804E2920_00000B50:
    cmpwi r5, 0x0
    beq lbl_fn_804E2920_00000B5C
    li r0, 0x1
lbl_fn_804E2920_00000B5C:
    cmpwi r0, 0x0
    beq lbl_fn_804E2920_00000D0C
    addi r5, r31, 0x9f
    li r0, 0xa0
    subf r5, r4, r5
    divwu r5, r5, r0
    mtctr r5
    cmplw r4, r31
    bge lbl_fn_804E2920_00000D0C
lbl_fn_804E2920_00000B80:
    lha r0, 0x0(r3)
    sth r0, 0x0(r4)
    lha r0, 0x2(r3)
    sth r0, 0x2(r4)
    lfs f0, 0x4(r3)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r3)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r3)
    stfs f0, 0xc(r4)
    lfs f0, 0x10(r3)
    stfs f0, 0x10(r4)
    lha r0, 0x14(r3)
    sth r0, 0x14(r4)
    lha r0, 0x16(r3)
    sth r0, 0x16(r4)
    lfs f0, 0x18(r3)
    stfs f0, 0x18(r4)
    lfs f0, 0x1c(r3)
    stfs f0, 0x1c(r4)
    lfs f0, 0x20(r3)
    stfs f0, 0x20(r4)
    lfs f0, 0x24(r3)
    stfs f0, 0x24(r4)
    lha r0, 0x28(r3)
    sth r0, 0x28(r4)
    lha r0, 0x2a(r3)
    sth r0, 0x2a(r4)
    lfs f0, 0x2c(r3)
    stfs f0, 0x2c(r4)
    lfs f0, 0x30(r3)
    stfs f0, 0x30(r4)
    lfs f0, 0x34(r3)
    stfs f0, 0x34(r4)
    lfs f0, 0x38(r3)
    stfs f0, 0x38(r4)
    lha r0, 0x3c(r3)
    sth r0, 0x3c(r4)
    lha r0, 0x3e(r3)
    sth r0, 0x3e(r4)
    lfs f0, 0x40(r3)
    stfs f0, 0x40(r4)
    lfs f0, 0x44(r3)
    stfs f0, 0x44(r4)
    lfs f0, 0x48(r3)
    stfs f0, 0x48(r4)
    lfs f0, 0x4c(r3)
    stfs f0, 0x4c(r4)
    lha r0, 0x50(r3)
    sth r0, 0x50(r4)
    lha r0, 0x52(r3)
    sth r0, 0x52(r4)
    lfs f0, 0x54(r3)
    stfs f0, 0x54(r4)
    lfs f0, 0x58(r3)
    stfs f0, 0x58(r4)
    lfs f0, 0x5c(r3)
    stfs f0, 0x5c(r4)
    lfs f0, 0x60(r3)
    stfs f0, 0x60(r4)
    lha r0, 0x64(r3)
    sth r0, 0x64(r4)
    lha r0, 0x66(r3)
    sth r0, 0x66(r4)
    lfs f0, 0x68(r3)
    stfs f0, 0x68(r4)
    lfs f0, 0x6c(r3)
    stfs f0, 0x6c(r4)
    lfs f0, 0x70(r3)
    stfs f0, 0x70(r4)
    lfs f0, 0x74(r3)
    stfs f0, 0x74(r4)
    lha r0, 0x78(r3)
    sth r0, 0x78(r4)
    lha r0, 0x7a(r3)
    sth r0, 0x7a(r4)
    lfs f0, 0x7c(r3)
    stfs f0, 0x7c(r4)
    lfs f0, 0x80(r3)
    stfs f0, 0x80(r4)
    lfs f0, 0x84(r3)
    stfs f0, 0x84(r4)
    lfs f0, 0x88(r3)
    stfs f0, 0x88(r4)
    lha r0, 0x8c(r3)
    sth r0, 0x8c(r4)
    lha r0, 0x8e(r3)
    sth r0, 0x8e(r4)
    lfs f0, 0x90(r3)
    stfs f0, 0x90(r4)
    lfs f0, 0x94(r3)
    stfs f0, 0x94(r4)
    lfs f0, 0x98(r3)
    stfs f0, 0x98(r4)
    lfs f0, 0x9c(r3)
    addi r3, r3, 0xa0
    stfs f0, 0x9c(r4)
    addi r4, r4, 0xa0
    bdnz lbl_fn_804E2920_00000B80
lbl_fn_804E2920_00000D0C:
    addi r5, r19, 0x13
    li r0, 0x14
    subf r5, r4, r5
    divwu r5, r5, r0
    mtctr r5
    cmplw r4, r19
    bge lbl_fn_804E2920_00000D64
lbl_fn_804E2920_00000D28:
    lha r0, 0x0(r3)
    sth r0, 0x0(r4)
    lha r0, 0x2(r3)
    sth r0, 0x2(r4)
    lfs f0, 0x4(r3)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r3)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r3)
    stfs f0, 0xc(r4)
    lfs f0, 0x10(r3)
    addi r3, r3, 0x14
    stfs f0, 0x10(r4)
    addi r4, r4, 0x14
    bdnz lbl_fn_804E2920_00000D28
lbl_fn_804E2920_00000D64:
    lwz r0, 0x9e0(r16)
    addi r4, r1, 0xa90
    stw r0, 0x9e8(r1)
    cmplw r4, r20
    addi r3, r16, 0xa88
    lwz r5, 0x9e4(r16)
    lwz r0, 0x9e8(r16)
    stw r0, 0x9f0(r1)
    stw r5, 0x9ec(r1)
    lwz r5, 0x9ec(r16)
    lwz r0, 0x9f0(r16)
    stw r0, 0x9f8(r1)
    stw r5, 0x9f4(r1)
    lwz r5, 0x9f4(r16)
    lwz r0, 0x9f8(r16)
    stw r0, 0xa00(r1)
    stw r5, 0x9fc(r1)
    lwz r5, 0x9fc(r16)
    lwz r0, 0xa00(r16)
    stw r0, 0xa08(r1)
    stw r5, 0xa04(r1)
    lwz r5, 0xa04(r16)
    lwz r0, 0xa08(r16)
    stw r0, 0xa10(r1)
    stw r5, 0xa0c(r1)
    lwz r5, 0xa0c(r16)
    lwz r0, 0xa10(r16)
    stw r0, 0xa18(r1)
    stw r5, 0xa14(r1)
    lwz r5, 0xa14(r16)
    lwz r0, 0xa18(r16)
    stw r0, 0xa20(r1)
    stw r5, 0xa1c(r1)
    lwz r5, 0xa1c(r16)
    lwz r0, 0xa20(r16)
    stw r0, 0xa28(r1)
    stw r5, 0xa24(r1)
    lwz r0, 0xa24(r16)
    stw r0, 0xa2c(r1)
    lhz r0, 0xa28(r16)
    sth r0, 0xa30(r1)
    lwz r0, 0xa2c(r16)
    stw r0, 0xa34(r1)
    lwz r5, 0xa30(r16)
    lwz r0, 0xa34(r16)
    stw r0, 0xa3c(r1)
    stw r5, 0xa38(r1)
    lwz r5, 0xa38(r16)
    lwz r0, 0xa3c(r16)
    stw r0, 0xa44(r1)
    stw r5, 0xa40(r1)
    lwz r5, 0xa40(r16)
    lwz r0, 0xa44(r16)
    stw r0, 0xa4c(r1)
    stw r5, 0xa48(r1)
    lwz r5, 0xa48(r16)
    lwz r0, 0xa4c(r16)
    stw r0, 0xa54(r1)
    stw r5, 0xa50(r1)
    lwz r5, 0xa50(r16)
    lwz r0, 0xa54(r16)
    stw r0, 0xa5c(r1)
    stw r5, 0xa58(r1)
    lwz r5, 0xa58(r16)
    lwz r0, 0xa5c(r16)
    stw r0, 0xa64(r1)
    stw r5, 0xa60(r1)
    lwz r5, 0xa60(r16)
    lwz r0, 0xa64(r16)
    stw r0, 0xa6c(r1)
    stw r5, 0xa68(r1)
    lwz r5, 0xa68(r16)
    lwz r0, 0xa6c(r16)
    stw r0, 0xa74(r1)
    stw r5, 0xa70(r1)
    lwz r0, 0xa70(r16)
    stw r0, 0xa78(r1)
    lha r0, 0xa74(r16)
    sth r0, 0xa7c(r1)
    lha r0, 0xa76(r16)
    sth r0, 0xa7e(r1)
    lfs f0, 0xa78(r16)
    stfs f0, 0xa80(r1)
    lfs f0, 0xa7c(r16)
    stfs f0, 0xa84(r1)
    lfs f0, 0xa80(r16)
    stfs f0, 0xa88(r1)
    lfs f0, 0xa84(r16)
    stfs f0, 0xa8c(r1)
    bge lbl_fn_804E2920_000010F0
    li r0, 0x0
    li r5, 0x0
    bgt lbl_fn_804E2920_00000EDC
    li r5, 0x1
lbl_fn_804E2920_00000EDC:
    cmpwi r5, 0x0
    beq lbl_fn_804E2920_00000EE8
    li r0, 0x1
lbl_fn_804E2920_00000EE8:
    cmpwi r0, 0x0
    beq lbl_fn_804E2920_00001098
    addi r5, r14, 0x9f
    li r0, 0xa0
    subf r5, r4, r5
    divwu r5, r5, r0
    mtctr r5
    cmplw r4, r14
    bge lbl_fn_804E2920_00001098
lbl_fn_804E2920_00000F0C:
    lha r0, 0x0(r3)
    sth r0, 0x0(r4)
    lha r0, 0x2(r3)
    sth r0, 0x2(r4)
    lfs f0, 0x4(r3)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r3)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r3)
    stfs f0, 0xc(r4)
    lfs f0, 0x10(r3)
    stfs f0, 0x10(r4)
    lha r0, 0x14(r3)
    sth r0, 0x14(r4)
    lha r0, 0x16(r3)
    sth r0, 0x16(r4)
    lfs f0, 0x18(r3)
    stfs f0, 0x18(r4)
    lfs f0, 0x1c(r3)
    stfs f0, 0x1c(r4)
    lfs f0, 0x20(r3)
    stfs f0, 0x20(r4)
    lfs f0, 0x24(r3)
    stfs f0, 0x24(r4)
    lha r0, 0x28(r3)
    sth r0, 0x28(r4)
    lha r0, 0x2a(r3)
    sth r0, 0x2a(r4)
    lfs f0, 0x2c(r3)
    stfs f0, 0x2c(r4)
    lfs f0, 0x30(r3)
    stfs f0, 0x30(r4)
    lfs f0, 0x34(r3)
    stfs f0, 0x34(r4)
    lfs f0, 0x38(r3)
    stfs f0, 0x38(r4)
    lha r0, 0x3c(r3)
    sth r0, 0x3c(r4)
    lha r0, 0x3e(r3)
    sth r0, 0x3e(r4)
    lfs f0, 0x40(r3)
    stfs f0, 0x40(r4)
    lfs f0, 0x44(r3)
    stfs f0, 0x44(r4)
    lfs f0, 0x48(r3)
    stfs f0, 0x48(r4)
    lfs f0, 0x4c(r3)
    stfs f0, 0x4c(r4)
    lha r0, 0x50(r3)
    sth r0, 0x50(r4)
    lha r0, 0x52(r3)
    sth r0, 0x52(r4)
    lfs f0, 0x54(r3)
    stfs f0, 0x54(r4)
    lfs f0, 0x58(r3)
    stfs f0, 0x58(r4)
    lfs f0, 0x5c(r3)
    stfs f0, 0x5c(r4)
    lfs f0, 0x60(r3)
    stfs f0, 0x60(r4)
    lha r0, 0x64(r3)
    sth r0, 0x64(r4)
    lha r0, 0x66(r3)
    sth r0, 0x66(r4)
    lfs f0, 0x68(r3)
    stfs f0, 0x68(r4)
    lfs f0, 0x6c(r3)
    stfs f0, 0x6c(r4)
    lfs f0, 0x70(r3)
    stfs f0, 0x70(r4)
    lfs f0, 0x74(r3)
    stfs f0, 0x74(r4)
    lha r0, 0x78(r3)
    sth r0, 0x78(r4)
    lha r0, 0x7a(r3)
    sth r0, 0x7a(r4)
    lfs f0, 0x7c(r3)
    stfs f0, 0x7c(r4)
    lfs f0, 0x80(r3)
    stfs f0, 0x80(r4)
    lfs f0, 0x84(r3)
    stfs f0, 0x84(r4)
    lfs f0, 0x88(r3)
    stfs f0, 0x88(r4)
    lha r0, 0x8c(r3)
    sth r0, 0x8c(r4)
    lha r0, 0x8e(r3)
    sth r0, 0x8e(r4)
    lfs f0, 0x90(r3)
    stfs f0, 0x90(r4)
    lfs f0, 0x94(r3)
    stfs f0, 0x94(r4)
    lfs f0, 0x98(r3)
    stfs f0, 0x98(r4)
    lfs f0, 0x9c(r3)
    addi r3, r3, 0xa0
    stfs f0, 0x9c(r4)
    addi r4, r4, 0xa0
    bdnz lbl_fn_804E2920_00000F0C
lbl_fn_804E2920_00001098:
    addi r5, r20, 0x13
    li r0, 0x14
    subf r5, r4, r5
    divwu r5, r5, r0
    mtctr r5
    cmplw r4, r20
    bge lbl_fn_804E2920_000010F0
lbl_fn_804E2920_000010B4:
    lha r0, 0x0(r3)
    sth r0, 0x0(r4)
    lha r0, 0x2(r3)
    sth r0, 0x2(r4)
    lfs f0, 0x4(r3)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r3)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r3)
    stfs f0, 0xc(r4)
    lfs f0, 0x10(r3)
    addi r3, r3, 0x14
    stfs f0, 0x10(r4)
    addi r4, r4, 0x14
    bdnz lbl_fn_804E2920_000010B4
lbl_fn_804E2920_000010F0:
    lwz r0, 0xcf4(r16)
    addi r5, r16, 0x30
    stw r0, 0xcfc(r1)
    addi r4, r23, 0x30
    lwz r3, 0xcf8(r16)
    lwz r0, 0xcfc(r16)
    stw r0, 0xd04(r1)
    stw r3, 0xd00(r1)
    lwz r3, 0xd00(r16)
    lwz r0, 0xd04(r16)
    stw r0, 0xd0c(r1)
    stw r3, 0xd08(r1)
    lwz r3, 0xd08(r16)
    lwz r0, 0xd0c(r16)
    stw r0, 0xd14(r1)
    stw r3, 0xd10(r1)
    lwz r3, 0xd10(r16)
    lwz r0, 0xd14(r16)
    stw r0, 0xd1c(r1)
    stw r3, 0xd18(r1)
    lwz r3, 0xd18(r16)
    lwz r0, 0xd1c(r16)
    stw r0, 0xd24(r1)
    stw r3, 0xd20(r1)
    lwz r3, 0xd20(r16)
    lwz r0, 0xd24(r16)
    stw r0, 0xd2c(r1)
    stw r3, 0xd28(r1)
    lwz r3, 0xd28(r16)
    lwz r0, 0xd2c(r16)
    stw r0, 0xd34(r1)
    stw r3, 0xd30(r1)
    lwz r3, 0xd30(r16)
    lwz r0, 0xd34(r16)
    stw r0, 0xd3c(r1)
    stw r3, 0xd38(r1)
    lwz r3, 0xd38(r16)
    lwz r0, 0xd3c(r16)
    stw r0, 0xd44(r1)
    stw r3, 0xd40(r1)
    lwz r3, 0xd40(r16)
    lwz r0, 0xd44(r16)
    stw r0, 0xd4c(r1)
    stw r3, 0xd48(r1)
    lwz r0, 0xd48(r16)
    stw r0, 0xd50(r1)
    lwz r0, 0xd4c(r16)
    stw r0, 0xd54(r1)
    lha r0, 0xd50(r16)
    sth r0, 0xd58(r1)
    lbz r0, 0xd52(r16)
    stb r0, 0xd5a(r1)
    lbz r0, 0xd53(r16)
    stb r0, 0xd5b(r1)
    lwz r0, 0xd54(r16)
    stw r0, 0xd5c(r1)
    lwz r0, 0xd58(r16)
    stw r0, 0xd60(r1)
    lwz r0, 0x0(r23)
    stw r0, 0x0(r16)
    lwz r0, 0x8(r23)
    lwz r3, 0x4(r23)
    stw r3, 0x4(r16)
    stw r0, 0x8(r16)
    lwz r0, 0x10(r23)
    lwz r3, 0xc(r23)
    stw r3, 0xc(r16)
    stw r0, 0x10(r16)
    lwz r0, 0x18(r23)
    lwz r3, 0x14(r23)
    stw r3, 0x14(r16)
    stw r0, 0x18(r16)
    lwz r0, 0x20(r23)
    lwz r3, 0x1c(r23)
    stw r3, 0x1c(r16)
    stw r0, 0x20(r16)
    lwz r0, 0x28(r23)
    lwz r3, 0x24(r23)
    stw r3, 0x24(r16)
    stw r0, 0x28(r16)
    lwz r0, 0x30(r23)
    lwz r3, 0x2c(r23)
    stw r3, 0x2c(r16)
    stw r0, 0x30(r16)
    li r0, 0xf
    mtctr r0
lbl_fn_804E2920_00001248:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_804E2920_00001248
    lwz r0, 0x4(r4)
    addi r3, r23, 0x134
    stw r0, 0x4(r5)
    mr r5, r3
    addi r6, r16, 0x134
    lwz r0, 0xb4(r23)
    lwz r4, 0xb0(r23)
    stw r4, 0xb0(r16)
    stw r0, 0xb4(r16)
    lwz r0, 0xbc(r23)
    lwz r4, 0xb8(r23)
    stw r4, 0xb8(r16)
    stw r0, 0xbc(r16)
    lwz r0, 0xc4(r23)
    lwz r4, 0xc0(r23)
    stw r4, 0xc0(r16)
    stw r0, 0xc4(r16)
    lwz r0, 0xc8(r23)
    stw r0, 0xc8(r16)
    lbz r0, 0xcc(r23)
    stb r0, 0xcc(r16)
    lwz r0, 0xd0(r23)
    stw r0, 0xd0(r16)
    lwz r0, 0xd4(r23)
    stw r0, 0xd4(r16)
    lwz r0, 0xd8(r23)
    stw r0, 0xd8(r16)
    lwz r0, 0xdc(r23)
    stw r0, 0xdc(r16)
    lwz r0, 0xe0(r23)
    stw r0, 0xe0(r16)
    lwz r0, 0xe4(r23)
    stw r0, 0xe4(r16)
    lwz r0, 0xe8(r23)
    stw r0, 0xe8(r16)
    lhz r0, 0xec(r23)
    sth r0, 0xec(r16)
    lwz r0, 0xf0(r23)
    stw r0, 0xf0(r16)
    lwz r0, 0xf8(r23)
    lwz r4, 0xf4(r23)
    stw r4, 0xf4(r16)
    stw r0, 0xf8(r16)
    lwz r0, 0x100(r23)
    lwz r4, 0xfc(r23)
    stw r4, 0xfc(r16)
    stw r0, 0x100(r16)
    lwz r0, 0x108(r23)
    lwz r4, 0x104(r23)
    stw r4, 0x104(r16)
    stw r0, 0x108(r16)
    lwz r0, 0x110(r23)
    lwz r4, 0x10c(r23)
    stw r4, 0x10c(r16)
    stw r0, 0x110(r16)
    lwz r0, 0x118(r23)
    lwz r4, 0x114(r23)
    stw r4, 0x114(r16)
    stw r0, 0x118(r16)
    lwz r0, 0x120(r23)
    lwz r4, 0x11c(r23)
    stw r4, 0x11c(r16)
    stw r0, 0x120(r16)
    lwz r0, 0x128(r23)
    lwz r4, 0x124(r23)
    stw r4, 0x124(r16)
    stw r0, 0x128(r16)
    lwz r0, 0x130(r23)
    lwz r4, 0x12c(r23)
    stw r4, 0x12c(r16)
    stw r0, 0x130(r16)
    lwz r0, 0x134(r23)
    stw r0, 0x134(r16)
    mtctr r21
lbl_fn_804E2920_00001384:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_804E2920_00001384
    addi r15, r3, 0x288
    addi r0, r16, 0x3bc
    lwz r3, 0x284(r3)
    cmplw r15, r0
    stw r3, 0x3b8(r16)
    beq lbl_fn_804E2920_000013CC
    mr r3, r15
    bl fn_80686A48
    mr r5, r3
    mr r4, r15
    addi r3, r16, 0x3bc
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_804E2920_000013CC:
    lwz r0, 0x3fc(r23)
    addi r3, r23, 0x448
    stw r0, 0x3fc(r16)
    mr r5, r3
    addi r6, r16, 0x448
    lhz r0, 0x400(r23)
    sth r0, 0x400(r16)
    lwz r0, 0x404(r23)
    stw r0, 0x404(r16)
    lwz r0, 0x40c(r23)
    lwz r4, 0x408(r23)
    stw r4, 0x408(r16)
    stw r0, 0x40c(r16)
    lwz r0, 0x414(r23)
    lwz r4, 0x410(r23)
    stw r4, 0x410(r16)
    stw r0, 0x414(r16)
    lwz r0, 0x41c(r23)
    lwz r4, 0x418(r23)
    stw r4, 0x418(r16)
    stw r0, 0x41c(r16)
    lwz r0, 0x424(r23)
    lwz r4, 0x420(r23)
    stw r4, 0x420(r16)
    stw r0, 0x424(r16)
    lwz r0, 0x42c(r23)
    lwz r4, 0x428(r23)
    stw r4, 0x428(r16)
    stw r0, 0x42c(r16)
    lwz r0, 0x434(r23)
    lwz r4, 0x430(r23)
    stw r4, 0x430(r16)
    stw r0, 0x434(r16)
    lwz r0, 0x43c(r23)
    lwz r4, 0x438(r23)
    stw r4, 0x438(r16)
    stw r0, 0x43c(r16)
    lwz r0, 0x444(r23)
    lwz r4, 0x440(r23)
    stw r4, 0x440(r16)
    stw r0, 0x444(r16)
    lwz r0, 0x448(r23)
    stw r0, 0x448(r16)
    mtctr r21
lbl_fn_804E2920_0000147C:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_804E2920_0000147C
    addi r15, r3, 0x288
    addi r0, r16, 0x6d0
    lwz r3, 0x284(r3)
    cmplw r15, r0
    stw r3, 0x6cc(r16)
    beq lbl_fn_804E2920_000014C4
    mr r3, r15
    bl fn_80686A48
    mr r5, r3
    mr r4, r15
    addi r3, r16, 0x6d0
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_804E2920_000014C4:
    lwz r0, 0x710(r23)
    addi r3, r23, 0x75c
    stw r0, 0x710(r16)
    mr r5, r3
    addi r6, r16, 0x75c
    lhz r0, 0x714(r23)
    sth r0, 0x714(r16)
    lwz r0, 0x718(r23)
    stw r0, 0x718(r16)
    lwz r0, 0x720(r23)
    lwz r4, 0x71c(r23)
    stw r4, 0x71c(r16)
    stw r0, 0x720(r16)
    lwz r0, 0x728(r23)
    lwz r4, 0x724(r23)
    stw r4, 0x724(r16)
    stw r0, 0x728(r16)
    lwz r0, 0x730(r23)
    lwz r4, 0x72c(r23)
    stw r4, 0x72c(r16)
    stw r0, 0x730(r16)
    lwz r0, 0x738(r23)
    lwz r4, 0x734(r23)
    stw r4, 0x734(r16)
    stw r0, 0x738(r16)
    lwz r0, 0x740(r23)
    lwz r4, 0x73c(r23)
    stw r4, 0x73c(r16)
    stw r0, 0x740(r16)
    lwz r0, 0x748(r23)
    lwz r4, 0x744(r23)
    stw r4, 0x744(r16)
    stw r0, 0x748(r16)
    lwz r0, 0x750(r23)
    lwz r4, 0x74c(r23)
    stw r4, 0x74c(r16)
    stw r0, 0x750(r16)
    lwz r0, 0x758(r23)
    lwz r4, 0x754(r23)
    stw r4, 0x754(r16)
    stw r0, 0x758(r16)
    lwz r0, 0x75c(r23)
    stw r0, 0x75c(r16)
    mtctr r21
lbl_fn_804E2920_00001574:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_804E2920_00001574
    addi r15, r3, 0x288
    addi r0, r16, 0x9e4
    lwz r3, 0x284(r3)
    cmplw r15, r0
    stw r3, 0x9e0(r16)
    beq lbl_fn_804E2920_000015BC
    mr r3, r15
    bl fn_80686A48
    mr r5, r3
    mr r4, r15
    addi r3, r16, 0x9e4
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_804E2920_000015BC:
    lwz r0, 0xa24(r23)
    addi r3, r23, 0xa70
    stw r0, 0xa24(r16)
    mr r5, r3
    addi r6, r16, 0xa70
    lhz r0, 0xa28(r23)
    sth r0, 0xa28(r16)
    lwz r0, 0xa2c(r23)
    stw r0, 0xa2c(r16)
    lwz r0, 0xa34(r23)
    lwz r4, 0xa30(r23)
    stw r4, 0xa30(r16)
    stw r0, 0xa34(r16)
    lwz r0, 0xa3c(r23)
    lwz r4, 0xa38(r23)
    stw r4, 0xa38(r16)
    stw r0, 0xa3c(r16)
    lwz r0, 0xa44(r23)
    lwz r4, 0xa40(r23)
    stw r4, 0xa40(r16)
    stw r0, 0xa44(r16)
    lwz r0, 0xa4c(r23)
    lwz r4, 0xa48(r23)
    stw r4, 0xa48(r16)
    stw r0, 0xa4c(r16)
    lwz r0, 0xa54(r23)
    lwz r4, 0xa50(r23)
    stw r4, 0xa50(r16)
    stw r0, 0xa54(r16)
    lwz r0, 0xa5c(r23)
    lwz r4, 0xa58(r23)
    stw r4, 0xa58(r16)
    stw r0, 0xa5c(r16)
    lwz r0, 0xa64(r23)
    lwz r4, 0xa60(r23)
    stw r4, 0xa60(r16)
    stw r0, 0xa64(r16)
    lwz r0, 0xa6c(r23)
    lwz r4, 0xa68(r23)
    stw r4, 0xa68(r16)
    stw r0, 0xa6c(r16)
    lwz r0, 0xa70(r23)
    stw r0, 0xa70(r16)
    mtctr r21
lbl_fn_804E2920_0000166C:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_804E2920_0000166C
    addi r15, r3, 0x288
    addi r0, r16, 0xcf8
    lwz r3, 0x284(r3)
    cmplw r15, r0
    stw r3, 0xcf4(r16)
    beq lbl_fn_804E2920_000016B4
    mr r3, r15
    bl fn_80686A48
    mr r5, r3
    mr r4, r15
    addi r3, r16, 0xcf8
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_804E2920_000016B4:
    lwz r0, 0xd3c(r23)
    addi r6, r23, 0x30
    lwz r3, 0xd38(r23)
    addi r4, r1, 0x38
    stw r3, 0xd38(r16)
    stw r0, 0xd3c(r16)
    lwz r0, 0xd44(r23)
    lwz r3, 0xd40(r23)
    stw r3, 0xd40(r16)
    stw r0, 0xd44(r16)
    lwz r0, 0xd48(r23)
    stw r0, 0xd48(r16)
    lwz r0, 0xd4c(r23)
    stw r0, 0xd4c(r16)
    lha r0, 0xd50(r23)
    sth r0, 0xd50(r16)
    lbz r0, 0xd52(r23)
    stb r0, 0xd52(r16)
    lbz r0, 0xd53(r23)
    stb r0, 0xd53(r16)
    lwz r0, 0xd54(r23)
    stw r0, 0xd54(r16)
    lwz r0, 0xd58(r23)
    stw r0, 0xd58(r16)
    lwz r0, 0x8(r1)
    stw r0, 0x0(r23)
    lwz r0, 0x10(r1)
    lwz r3, 0xc(r1)
    stw r3, 0x4(r23)
    stw r0, 0x8(r23)
    lwz r0, 0x18(r1)
    lwz r3, 0x14(r1)
    stw r3, 0xc(r23)
    stw r0, 0x10(r23)
    lwz r0, 0x20(r1)
    lwz r3, 0x1c(r1)
    stw r3, 0x14(r23)
    stw r0, 0x18(r23)
    lwz r0, 0x28(r1)
    lwz r3, 0x24(r1)
    stw r3, 0x1c(r23)
    stw r0, 0x20(r23)
    lwz r0, 0x30(r1)
    lwz r3, 0x2c(r1)
    stw r3, 0x24(r23)
    stw r0, 0x28(r23)
    lwz r0, 0x38(r1)
    lwz r3, 0x34(r1)
    stw r3, 0x2c(r23)
    stw r0, 0x30(r23)
    li r0, 0xf
    mtctr r0
lbl_fn_804E2920_00001784:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_804E2920_00001784
    lwz r0, 0x4(r4)
    addi r5, r23, 0x134
    stw r0, 0x4(r6)
    addi r4, r1, 0x13c
    lwz r0, 0xbc(r1)
    lwz r3, 0xb8(r1)
    stw r3, 0xb0(r23)
    stw r0, 0xb4(r23)
    lwz r0, 0xc4(r1)
    lwz r3, 0xc0(r1)
    stw r3, 0xb8(r23)
    stw r0, 0xbc(r23)
    lwz r0, 0xcc(r1)
    lwz r3, 0xc8(r1)
    stw r3, 0xc0(r23)
    stw r0, 0xc4(r23)
    lwz r0, 0xd0(r1)
    stw r0, 0xc8(r23)
    lbz r0, 0xd4(r1)
    stb r0, 0xcc(r23)
    lwz r0, 0xd8(r1)
    stw r0, 0xd0(r23)
    lwz r0, 0xdc(r1)
    stw r0, 0xd4(r23)
    lwz r0, 0xe0(r1)
    stw r0, 0xd8(r23)
    lwz r0, 0xe4(r1)
    stw r0, 0xdc(r23)
    lwz r0, 0xe8(r1)
    stw r0, 0xe0(r23)
    lwz r0, 0xec(r1)
    stw r0, 0xe4(r23)
    lwz r0, 0xf0(r1)
    stw r0, 0xe8(r23)
    lhz r0, 0xf4(r1)
    sth r0, 0xec(r23)
    lwz r0, 0xf8(r1)
    stw r0, 0xf0(r23)
    lwz r0, 0x100(r1)
    lwz r3, 0xfc(r1)
    stw r3, 0xf4(r23)
    stw r0, 0xf8(r23)
    lwz r0, 0x108(r1)
    lwz r3, 0x104(r1)
    stw r3, 0xfc(r23)
    stw r0, 0x100(r23)
    lwz r0, 0x110(r1)
    lwz r3, 0x10c(r1)
    stw r3, 0x104(r23)
    stw r0, 0x108(r23)
    lwz r0, 0x118(r1)
    lwz r3, 0x114(r1)
    stw r3, 0x10c(r23)
    stw r0, 0x110(r23)
    lwz r0, 0x120(r1)
    lwz r3, 0x11c(r1)
    stw r3, 0x114(r23)
    stw r0, 0x118(r23)
    lwz r0, 0x128(r1)
    lwz r3, 0x124(r1)
    stw r3, 0x11c(r23)
    stw r0, 0x120(r23)
    lwz r0, 0x130(r1)
    lwz r3, 0x12c(r1)
    stw r3, 0x124(r23)
    stw r0, 0x128(r23)
    lwz r0, 0x138(r1)
    lwz r3, 0x134(r1)
    stw r3, 0x12c(r23)
    stw r0, 0x130(r23)
    lwz r0, 0x13c(r1)
    stw r0, 0x134(r23)
    mtctr r21
lbl_fn_804E2920_000018BC:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_804E2920_000018BC
    addi r0, r23, 0x3bc
    lwz r3, 0x3c0(r1)
    cmplw r28, r0
    stw r3, 0x3b8(r23)
    beq lbl_fn_804E2920_00001900
    mr r3, r28
    bl fn_80686A48
    mr r5, r3
    mr r4, r28
    addi r3, r23, 0x3bc
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_804E2920_00001900:
    lwz r0, 0x404(r1)
    addi r5, r23, 0x448
    stw r0, 0x3fc(r23)
    addi r4, r1, 0x450
    lhz r0, 0x408(r1)
    sth r0, 0x400(r23)
    lwz r0, 0x40c(r1)
    stw r0, 0x404(r23)
    lwz r0, 0x414(r1)
    lwz r3, 0x410(r1)
    stw r3, 0x408(r23)
    stw r0, 0x40c(r23)
    lwz r0, 0x41c(r1)
    lwz r3, 0x418(r1)
    stw r3, 0x410(r23)
    stw r0, 0x414(r23)
    lwz r0, 0x424(r1)
    lwz r3, 0x420(r1)
    stw r3, 0x418(r23)
    stw r0, 0x41c(r23)
    lwz r0, 0x42c(r1)
    lwz r3, 0x428(r1)
    stw r3, 0x420(r23)
    stw r0, 0x424(r23)
    lwz r0, 0x434(r1)
    lwz r3, 0x430(r1)
    stw r3, 0x428(r23)
    stw r0, 0x42c(r23)
    lwz r0, 0x43c(r1)
    lwz r3, 0x438(r1)
    stw r3, 0x430(r23)
    stw r0, 0x434(r23)
    lwz r0, 0x444(r1)
    lwz r3, 0x440(r1)
    stw r3, 0x438(r23)
    stw r0, 0x43c(r23)
    lwz r0, 0x44c(r1)
    lwz r3, 0x448(r1)
    stw r3, 0x440(r23)
    stw r0, 0x444(r23)
    lwz r0, 0x450(r1)
    stw r0, 0x448(r23)
    mtctr r21
lbl_fn_804E2920_000019AC:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_804E2920_000019AC
    addi r0, r23, 0x6d0
    lwz r3, 0x6d4(r1)
    cmplw r27, r0
    stw r3, 0x6cc(r23)
    beq lbl_fn_804E2920_000019F0
    mr r3, r27
    bl fn_80686A48
    mr r5, r3
    mr r4, r27
    addi r3, r23, 0x6d0
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_804E2920_000019F0:
    lwz r0, 0x718(r1)
    addi r5, r23, 0x75c
    stw r0, 0x710(r23)
    addi r4, r1, 0x764
    lhz r0, 0x71c(r1)
    sth r0, 0x714(r23)
    lwz r0, 0x720(r1)
    stw r0, 0x718(r23)
    lwz r0, 0x728(r1)
    lwz r3, 0x724(r1)
    stw r3, 0x71c(r23)
    stw r0, 0x720(r23)
    lwz r0, 0x730(r1)
    lwz r3, 0x72c(r1)
    stw r3, 0x724(r23)
    stw r0, 0x728(r23)
    lwz r0, 0x738(r1)
    lwz r3, 0x734(r1)
    stw r3, 0x72c(r23)
    stw r0, 0x730(r23)
    lwz r0, 0x740(r1)
    lwz r3, 0x73c(r1)
    stw r3, 0x734(r23)
    stw r0, 0x738(r23)
    lwz r0, 0x748(r1)
    lwz r3, 0x744(r1)
    stw r3, 0x73c(r23)
    stw r0, 0x740(r23)
    lwz r0, 0x750(r1)
    lwz r3, 0x74c(r1)
    stw r3, 0x744(r23)
    stw r0, 0x748(r23)
    lwz r0, 0x758(r1)
    lwz r3, 0x754(r1)
    stw r3, 0x74c(r23)
    stw r0, 0x750(r23)
    lwz r0, 0x760(r1)
    lwz r3, 0x75c(r1)
    stw r3, 0x754(r23)
    stw r0, 0x758(r23)
    lwz r0, 0x764(r1)
    stw r0, 0x75c(r23)
    mtctr r21
lbl_fn_804E2920_00001A9C:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_804E2920_00001A9C
    addi r0, r23, 0x9e4
    lwz r3, 0x9e8(r1)
    cmplw r26, r0
    stw r3, 0x9e0(r23)
    beq lbl_fn_804E2920_00001AE0
    mr r3, r26
    bl fn_80686A48
    mr r5, r3
    mr r4, r26
    addi r3, r23, 0x9e4
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_804E2920_00001AE0:
    lwz r0, 0xa2c(r1)
    addi r5, r23, 0xa70
    stw r0, 0xa24(r23)
    addi r4, r1, 0xa78
    lhz r0, 0xa30(r1)
    sth r0, 0xa28(r23)
    lwz r0, 0xa34(r1)
    stw r0, 0xa2c(r23)
    lwz r0, 0xa3c(r1)
    lwz r3, 0xa38(r1)
    stw r3, 0xa30(r23)
    stw r0, 0xa34(r23)
    lwz r0, 0xa44(r1)
    lwz r3, 0xa40(r1)
    stw r3, 0xa38(r23)
    stw r0, 0xa3c(r23)
    lwz r0, 0xa4c(r1)
    lwz r3, 0xa48(r1)
    stw r3, 0xa40(r23)
    stw r0, 0xa44(r23)
    lwz r0, 0xa54(r1)
    lwz r3, 0xa50(r1)
    stw r3, 0xa48(r23)
    stw r0, 0xa4c(r23)
    lwz r0, 0xa5c(r1)
    lwz r3, 0xa58(r1)
    stw r3, 0xa50(r23)
    stw r0, 0xa54(r23)
    lwz r0, 0xa64(r1)
    lwz r3, 0xa60(r1)
    stw r3, 0xa58(r23)
    stw r0, 0xa5c(r23)
    lwz r0, 0xa6c(r1)
    lwz r3, 0xa68(r1)
    stw r3, 0xa60(r23)
    stw r0, 0xa64(r23)
    lwz r0, 0xa74(r1)
    lwz r3, 0xa70(r1)
    stw r3, 0xa68(r23)
    stw r0, 0xa6c(r23)
    lwz r0, 0xa78(r1)
    stw r0, 0xa70(r23)
    mtctr r21
lbl_fn_804E2920_00001B8C:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_804E2920_00001B8C
    addi r0, r23, 0xcf8
    lwz r3, 0xcfc(r1)
    cmplw r25, r0
    stw r3, 0xcf4(r23)
    beq lbl_fn_804E2920_00001BD0
    mr r3, r25
    bl fn_80686A48
    mr r5, r3
    mr r4, r25
    addi r3, r23, 0xcf8
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_804E2920_00001BD0:
    lwz r0, 0xd44(r1)
    lwz r3, 0xd40(r1)
    stw r3, 0xd38(r23)
    stw r0, 0xd3c(r23)
    lwz r0, 0xd4c(r1)
    lwz r3, 0xd48(r1)
    stw r3, 0xd40(r23)
    stw r0, 0xd44(r23)
    lwz r0, 0xd50(r1)
    stw r0, 0xd48(r23)
    lwz r0, 0xd54(r1)
    stw r0, 0xd4c(r23)
    lha r0, 0xd58(r1)
    sth r0, 0xd50(r23)
    lbz r0, 0xd5a(r1)
    stb r0, 0xd52(r23)
    lbz r0, 0xd5b(r1)
    stb r0, 0xd53(r23)
    lwz r0, 0xd5c(r1)
    stw r0, 0xd54(r23)
    lwz r0, 0xd60(r1)
    stw r0, 0xd58(r23)
lbl_fn_804E2920_00001C28:
    addi r23, r23, 0xd5c
lbl_fn_804E2920_00001C2C:
    cmplw r23, r22
    bne lbl_fn_804E2920_0000013C
lbl_fn_804E2920_00001C34:
    addi r11, r1, 0xdb0
    bl _restgpr_14
    lwz r0, 0xdb4(r1)
    mtlr r0
    addi r1, r1, 0xdb0
    blr
}
