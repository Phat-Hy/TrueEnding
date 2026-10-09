#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_14(void);
extern void _restgpr_21(void);
extern void _restgpr_26(void);
extern void _savegpr_14(void);
extern void _savegpr_21(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8000FAE4(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80089EE4(void);
extern void fn_8008B140(void);
extern void fn_80097D40(void);
extern void fn_80098948(void);
extern void fn_80099010(void);
extern void fn_800A0548(void);
extern void fn_800A08E0(void);
extern void fn_800D1D3C(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_8011D320(void);
extern void fn_802180A8(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);

/* External data declarations */
extern u8 lbl_80736FA8[];
extern u8 lbl_80775A88[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8077A1E8[];
extern u8 lbl_807C7AF8[];

/* Small data declarations */
extern u32 lbl_8087D6DC;
extern u32 lbl_8087D6E0;
extern u32 lbl_8087D710;
extern u32 lbl_8087D9A0;
extern u32 lbl_8087D9A4;
extern u32 lbl_8087D9A8;
extern u32 lbl_8087D9AC;
extern u32 lbl_808817C4;
extern u32 lbl_808817C8;
extern u32 lbl_808817CC;
extern u32 lbl_808817D0;
extern u32 lbl_808817E0;
extern u32 lbl_808817E4;

/* Function declarations */
void fn_8011E200(void);
void fn_8011E81C(void);
void fn_8011EAF8(void);
void fn_8011EB18(void);
void fn_8011EDE0(void);
void fn_8011EE58(void);
void fn_8011EEA0(void);
void fn_8011EF14(void);
void fn_8011F6B0(void);
void fn_8011F6FC(void);

asm void fn_8011E200(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0xc0
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stfd f29, 0x100(r1)
    psq_st f29, 0x108(r1), 0, 0
    stfd f28, 0xf0(r1)
    psq_st f28, 0xf8(r1), 0, 0
    stfd f27, 0xe0(r1)
    psq_st f27, 0xe8(r1), 0, 0
    stfd f26, 0xd0(r1)
    psq_st f26, 0xd8(r1), 0, 0
    stfd f25, 0xc0(r1)
    psq_st f25, 0xc8(r1), 0, 0
    bl _savegpr_14
    lwz r0, 0x14(r4)
    fmr f31, f1
    mr r27, r3
    mr r28, r4
    cmpwi r0, 0x0
    li r5, 0x0
    beq lbl_fn_8011E200_00000078
    lbz r0, 0x1c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8011E200_00000078
    li r5, 0x1
lbl_fn_8011E200_00000078:
    cmpwi r5, 0x0
    beq lbl_fn_8011E200_000005CC
    lfs f0, lbl_808817C8
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    mfcr r0
    extrwi r0, r0, 1, 2
    stb r0, 0x38(r1)
    mr. r0, r0
    bne lbl_fn_8011E200_000000F4
    lfs f1, 0x8(r4)
    lfs f0, 0xc(r4)
    lfs f2, 0x10(r4)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_8011E200_000000BC
    b lbl_fn_8011E200_000000C0
lbl_fn_8011E200_000000BC:
    fmr f2, f0
lbl_fn_8011E200_000000C0:
    lfs f3, lbl_808817C8
    fcmpo cr0, f3, f2
    ble lbl_fn_8011E200_000000D0
    b lbl_fn_8011E200_000000F0
lbl_fn_8011E200_000000D0:
    lfs f1, 0x8(r4)
    lfs f0, 0xc(r4)
    lfs f3, 0x10(r4)
    fadds f0, f1, f0
    fcmpo cr0, f3, f0
    bge lbl_fn_8011E200_000000EC
    b lbl_fn_8011E200_000000F0
lbl_fn_8011E200_000000EC:
    fmr f3, f0
lbl_fn_8011E200_000000F0:
    stfs f3, 0x8(r4)
lbl_fn_8011E200_000000F4:
    lwz r4, 0x0(r3)
    addi r3, r1, 0x8
    lwz r21, 0x220(r4)
    bl fn_800A08E0
    lwz r4, 0x0(r27)
    lis r14, lbl_80736FA8@ha
    addi r3, r14, lbl_80736FA8@l
    lwz r20, 0x16c(r4)
    bl fn_800DC6B4
    addi r15, r14, lbl_80736FA8@l
    mr r22, r3
    addi r3, r15, 0x5
    bl fn_800DC6B4
    mr r23, r3
    addi r3, r15, 0xa
    bl fn_800DC6B4
    mr r24, r3
    addi r3, r15, 0x10
    bl fn_800DC6B4
    mr r25, r3
    addi r3, r15, 0x16
    bl fn_800DC6B4
    mr r14, r3
    addi r3, r15, 0x1f
    bl fn_800DC6B4
    stw r3, 0x40(r1)
    addi r3, r15, 0x28
    bl fn_800DC6B4
    stw r3, 0x44(r1)
    addi r3, r15, 0x36
    bl fn_800DC6B4
    stw r3, 0x48(r1)
    addi r3, r15, 0x44
    bl fn_800DC6B4
    stw r3, 0x4c(r1)
    addi r3, r15, 0x4b
    bl fn_800DC6B4
    stw r3, 0x50(r1)
    addi r3, r15, 0x53
    bl fn_800DC6B4
    stw r3, 0x54(r1)
    addi r3, r15, 0x5b
    bl fn_800DC6B4
    stw r3, 0x58(r1)
    addi r3, r15, 0x67
    bl fn_800DC6B4
    stw r3, 0x5c(r1)
    addi r3, r15, 0x6e
    bl fn_800DC6B4
    stw r3, 0x60(r1)
    addi r3, r15, 0x76
    bl fn_800DC6B4
    stw r3, 0x64(r1)
    addi r3, r15, 0x7d
    bl fn_800DC6B4
    stw r3, 0x68(r1)
    addi r3, r15, 0x88
    bl fn_800DC6B4
    stw r3, 0x6c(r1)
    addi r3, r15, 0x8f
    bl fn_800DC6B4
    li r0, 0x0
    stw r0, 0x34(r1)
    li r0, 0x0
    lfs f30, lbl_808817C8
    stw r3, 0x70(r1)
    lis r26, lbl_807C7AF8@ha
    lfs f29, lbl_808817E0
    lfs f27, lbl_808817C4
    stw r0, 0x3c(r1)
    lfs f28, lbl_808817D0
    b lbl_fn_8011E200_00000584
lbl_fn_8011E200_00000214:
    lwz r4, 0x18(r28)
    lwz r0, 0x3c(r1)
    lwz r3, 0x0(r27)
    add r19, r4, r0
    lwzx r4, r4, r0
    lbz r0, 0x38(r1)
    add r4, r4, r0
    bl fn_80097D40
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8011E200_0000056C
    fcmpo cr0, f31, f30
    ble lbl_fn_8011E200_00000254
    lfs f0, 0x4(r19)
    fmuls f26, f31, f0
    b lbl_fn_8011E200_00000260
lbl_fn_8011E200_00000254:
    lfs f1, 0x8(r28)
    lfs f0, 0x4(r19)
    fmuls f26, f1, f0
lbl_fn_8011E200_00000260:
    fsubs f0, f26, f27
    li r18, 0x0
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f28
    bge lbl_fn_8011E200_0000028C
    lfs f0, 0x7c(r27)
    fcmpo cr0, f0, f29
    cror eq, gt, eq
    bne lbl_fn_8011E200_0000028C
    li r18, 0x1
lbl_fn_8011E200_0000028C:
    li r30, 0x0
    li r17, 0x0
    b lbl_fn_8011E200_00000560
lbl_fn_8011E200_00000298:
    lwz r3, 0x48(r20)
    fcmpo cr0, f31, f30
    lwzx r29, r3, r17
    lwz r15, 0x18(r29)
    ble lbl_fn_8011E200_000002DC
    lwz r3, 0x14(r29)
    cmplw r3, r14
    beq lbl_fn_8011E200_000002DC
    lwz r0, 0x40(r1)
    cmplw r3, r0
    beq lbl_fn_8011E200_000002DC
    lwz r0, 0x44(r1)
    cmplw r3, r0
    beq lbl_fn_8011E200_000002DC
    lwz r0, 0x48(r1)
    cmplw r3, r0
    bne lbl_fn_8011E200_00000558
lbl_fn_8011E200_000002DC:
    lbz r0, 0x1d(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8011E200_000002FC
    lwz r0, 0x14(r29)
    cmplw r0, r24
    beq lbl_fn_8011E200_00000558
    cmplw r0, r25
    beq lbl_fn_8011E200_00000558
lbl_fn_8011E200_000002FC:
    lbz r0, 0x1e(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8011E200_0000031C
    lwz r0, 0x14(r29)
    cmplw r0, r23
    beq lbl_fn_8011E200_00000558
    cmplw r0, r22
    beq lbl_fn_8011E200_00000558
lbl_fn_8011E200_0000031C:
    lbz r0, 0x1f(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8011E200_000003A4
    lwz r3, 0x14(r29)
    lwz r0, 0x4c(r1)
    cmplw r3, r0
    beq lbl_fn_8011E200_00000558
    lwz r0, 0x50(r1)
    cmplw r3, r0
    beq lbl_fn_8011E200_00000558
    lwz r0, 0x54(r1)
    cmplw r3, r0
    beq lbl_fn_8011E200_00000558
    lwz r0, 0x58(r1)
    cmplw r3, r0
    beq lbl_fn_8011E200_00000558
    lwz r0, 0x5c(r1)
    cmplw r3, r0
    beq lbl_fn_8011E200_00000558
    lwz r0, 0x60(r1)
    cmplw r3, r0
    beq lbl_fn_8011E200_00000558
    lwz r0, 0x64(r1)
    cmplw r3, r0
    beq lbl_fn_8011E200_00000558
    lwz r0, 0x68(r1)
    cmplw r3, r0
    beq lbl_fn_8011E200_00000558
    lwz r0, 0x6c(r1)
    cmplw r3, r0
    beq lbl_fn_8011E200_00000558
    lwz r0, 0x70(r1)
    cmplw r3, r0
    beq lbl_fn_8011E200_00000558
lbl_fn_8011E200_000003A4:
    lwz r0, 0x8(r19)
    cmpwi r0, 0x0
    beq lbl_fn_8011E200_000003F0
    li r6, 0x0
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8011E200_000003E8
lbl_fn_8011E200_000003C4:
    lwz r3, 0xc(r19)
    lwz r4, 0x14(r29)
    lwzx r0, r3, r5
    cmplw r4, r0
    bne lbl_fn_8011E200_000003E0
    li r6, 0x1
    b lbl_fn_8011E200_000003E8
lbl_fn_8011E200_000003E0:
    addi r5, r5, 0x4
    bdnz lbl_fn_8011E200_000003C4
lbl_fn_8011E200_000003E8:
    cmpwi r6, 0x0
    beq lbl_fn_8011E200_00000558
lbl_fn_8011E200_000003F0:
    addi r3, r26, lbl_807C7AF8@l
    li r4, 0x0
    li r5, 0x12
    bl memset
    cmpwi r18, 0x0
    li r0, 0x0
    stw r0, 0x8(r1)
    beq lbl_fn_8011E200_00000480
    mulli r15, r15, 0x2c
    lwz r5, 0x14(r29)
    lfs f1, 0x0(r28)
    mr r3, r31
    addi r6, r26, lbl_807C7AF8@l
    add r4, r21, r15
    bl fn_800A0548
    cmpwi r3, 0x0
    bne lbl_fn_8011E200_00000558
    lwz r0, 0x14(r29)
    cmplw r0, r23
    beq lbl_fn_8011E200_00000448
    cmplw r0, r22
    bne lbl_fn_8011E200_00000558
lbl_fn_8011E200_00000448:
    add r16, r21, r15
    mr r4, r29
    mr r3, r16
    bl fn_80099010
    mr r4, r29
    addi r3, r1, 0x8
    bl fn_80099010
    fmr f1, f26
    mr r3, r16
    mr r5, r16
    addi r6, r1, 0x8
    li r4, 0x1
    bl fn_80098948
    b lbl_fn_8011E200_00000558
lbl_fn_8011E200_00000480:
    lwz r5, 0x14(r29)
    li r0, 0x1
    cmplw r5, r23
    beq lbl_fn_8011E200_0000049C
    cmplw r5, r22
    beq lbl_fn_8011E200_0000049C
    li r0, 0x0
lbl_fn_8011E200_0000049C:
    cmpwi r0, 0x0
    beq lbl_fn_8011E200_000004B0
    lfs f0, 0x7c(r27)
    fmuls f25, f26, f0
    b lbl_fn_8011E200_000004B4
lbl_fn_8011E200_000004B0:
    fmr f25, f26
lbl_fn_8011E200_000004B4:
    lfs f1, 0x0(r28)
    mr r3, r31
    addi r4, r1, 0x8
    addi r6, r26, lbl_807C7AF8@l
    bl fn_800A0548
    cmpwi r3, 0x0
    beq lbl_fn_8011E200_0000050C
    mulli r16, r15, 0x2c
    mr r4, r29
    add r15, r21, r16
    mr r3, r15
    bl fn_80099010
    mr r4, r29
    addi r3, r1, 0x8
    bl fn_80099010
    fmr f1, f25
    mr r3, r15
    mr r5, r15
    addi r6, r1, 0x8
    li r4, 0x1
    bl fn_80098948
    b lbl_fn_8011E200_00000558
lbl_fn_8011E200_0000050C:
    lwz r0, 0x14(r29)
    cmplw r0, r23
    beq lbl_fn_8011E200_00000520
    cmplw r0, r22
    bne lbl_fn_8011E200_00000558
lbl_fn_8011E200_00000520:
    mulli r15, r15, 0x2c
    mr r4, r29
    add r16, r21, r15
    mr r3, r16
    bl fn_80099010
    mr r4, r29
    addi r3, r1, 0x8
    bl fn_80099010
    fmr f1, f25
    mr r3, r16
    mr r5, r16
    addi r6, r1, 0x8
    li r4, 0x1
    bl fn_80098948
lbl_fn_8011E200_00000558:
    addi r17, r17, 0x4
    addi r30, r30, 0x1
lbl_fn_8011E200_00000560:
    lwz r0, 0x44(r20)
    cmpw r30, r0
    blt lbl_fn_8011E200_00000298
lbl_fn_8011E200_0000056C:
    lwz r3, 0x3c(r1)
    addi r3, r3, 0x10
    stw r3, 0x3c(r1)
    lwz r3, 0x34(r1)
    addi r3, r3, 0x1
    stw r3, 0x34(r1)
lbl_fn_8011E200_00000584:
    lwz r3, 0x14(r28)
    lwz r0, 0x34(r1)
    cmplw r0, r3
    blt lbl_fn_8011E200_00000214
    lbz r0, 0x38(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8011E200_000005B0
    lfs f1, 0x0(r28)
    lfs f0, 0x4(r28)
    fadds f0, f1, f0
    stfs f0, 0x0(r28)
lbl_fn_8011E200_000005B0:
    lfs f1, 0x8(r28)
    lfs f0, lbl_808817C8
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8011E200_000005CC
    li r0, 0x0
    stb r0, 0x1c(r28)
lbl_fn_8011E200_000005CC:
    addi r11, r1, 0xc0
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    psq_l f29, 0x108(r1), 0, 0
    lfd f29, 0x100(r1)
    psq_l f28, 0xf8(r1), 0, 0
    lfd f28, 0xf0(r1)
    psq_l f27, 0xe8(r1), 0, 0
    lfd f27, 0xe0(r1)
    psq_l f26, 0xd8(r1), 0, 0
    lfd f26, 0xd0(r1)
    psq_l f25, 0xc8(r1), 0, 0
    lfd f25, 0xc0(r1)
    bl _restgpr_14
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_8011E81C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x30
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    bl _savegpr_26
    lwz r0, 0x5c(r3)
    mr r29, r5
    fmr f30, f1
    mr r28, r3
    slwi r9, r0, 5
    fmr f31, f2
    add r8, r3, r9
    mr r30, r6
    lwz r0, 0x18(r8)
    mr r31, r7
    li r5, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8011E81C_00000684
    lbz r0, 0x20(r8)
    cmpwi r0, 0x0
    beq lbl_fn_8011E81C_00000684
    li r5, 0x1
lbl_fn_8011E81C_00000684:
    cmpwi r5, 0x0
    beq lbl_fn_8011E81C_000006B8
    add r6, r3, r9
    lwz r5, 0x1c(r6)
    lwz r0, 0x0(r5)
    cmpw r4, r0
    beq lbl_fn_8011E81C_000008D0
    lfs f0, lbl_808817C8
    stfs f0, 0x10(r6)
    lwz r0, 0x5c(r3)
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x5c(r3)
lbl_fn_8011E81C_000006B8:
    lfs f0, lbl_808817C4
    li r0, 0x0
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r4, 0x8(r1)
    stfs f0, 0xc(r1)
    lwz r0, 0x5c(r3)
    slwi r0, r0, 5
    add r27, r3, r0
    lwz r3, 0x1c(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8011E81C_000006F4
    lis r4, fn_8011D320@ha
    addi r4, r4, fn_8011D320@l
    bl fn_80695A50
lbl_fn_8011E81C_000006F4:
    li r0, 0x1
    stw r0, 0x18(r27)
    li r3, 0x20
    li r4, 0x1
    la r5, lbl_8087D9AC
    la r6, lbl_8087D9A8
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8011EAF8@ha
    lis r5, fn_8011D320@ha
    addi r4, r4, fn_8011EAF8@l
    li r6, 0x10
    addi r5, r5, fn_8011D320@l
    li r7, 0x1
    bl fn_80695720
    stw r3, 0x1c(r27)
    b lbl_fn_8011E81C_0000073C
    stw r0, 0x1c(r27)
lbl_fn_8011E81C_0000073C:
    lwz r3, 0x5c(r28)
    lwz r0, 0x8(r1)
    slwi r3, r3, 5
    add r3, r28, r3
    lwz r27, 0x1c(r3)
    stw r0, 0x0(r27)
    lfs f0, 0xc(r1)
    stfs f0, 0x4(r27)
    lwz r3, 0xc(r27)
    lwz r26, 0x10(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8011E81C_00000770
    bl fn_80084C24
lbl_fn_8011E81C_00000770:
    cmpwi r26, 0x0
    stw r26, 0x8(r27)
    beq lbl_fn_8011E81C_0000079C
    slwi r3, r26, 2
    li r4, 0x0
    la r5, lbl_8087D9A4
    la r6, lbl_8087D9A0
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0xc(r27)
    b lbl_fn_8011E81C_000007A4
lbl_fn_8011E81C_0000079C:
    li r0, 0x0
    stw r0, 0xc(r27)
lbl_fn_8011E81C_000007A4:
    li r5, 0x0
    li r6, 0x0
    b lbl_fn_8011E81C_000007C8
lbl_fn_8011E81C_000007B0:
    lwz r4, 0x14(r1)
    addi r5, r5, 0x1
    lwz r3, 0xc(r27)
    lwzx r0, r4, r6
    stwx r0, r3, r6
    addi r6, r6, 0x4
lbl_fn_8011E81C_000007C8:
    lwz r0, 0x8(r27)
    cmplw r5, r0
    blt lbl_fn_8011E81C_000007B0
    lwz r3, 0x5c(r28)
    li r4, 0x1
    lfs f2, lbl_808817C8
    li r0, 0x0
    slwi r3, r3, 5
    lfs f1, lbl_808817C4
    add r3, r28, r3
    lfs f0, lbl_808817CC
    stfs f2, 0x4(r3)
    lwz r3, 0x5c(r28)
    slwi r3, r3, 5
    add r3, r28, r3
    stfs f1, 0x8(r3)
    lwz r3, 0x5c(r28)
    slwi r3, r3, 5
    add r3, r28, r3
    stfs f31, 0xc(r3)
    lwz r3, 0x5c(r28)
    slwi r3, r3, 5
    add r3, r28, r3
    stfs f0, 0x10(r3)
    lwz r3, 0x5c(r28)
    slwi r3, r3, 5
    add r3, r28, r3
    stfs f30, 0x14(r3)
    lwz r3, 0x5c(r28)
    slwi r3, r3, 5
    add r3, r28, r3
    stb r4, 0x20(r3)
    lwz r3, 0x5c(r28)
    slwi r3, r3, 5
    add r3, r28, r3
    stb r29, 0x21(r3)
    lwz r3, 0x5c(r28)
    slwi r3, r3, 5
    add r3, r28, r3
    stb r30, 0x22(r3)
    lwz r3, 0x5c(r28)
    slwi r3, r3, 5
    add r3, r28, r3
    stb r31, 0x23(r3)
    lwz r3, 0x5c(r28)
    mulli r3, r3, 0xc
    add r28, r28, r3
    stw r0, 0x44(r28)
    stw r0, 0x48(r28)
    lwz r3, 0x4c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8011E81C_000008AC
    beq lbl_fn_8011E81C_000008A4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8011E81C_000008A4:
    li r0, 0x0
    stw r0, 0x4c(r28)
lbl_fn_8011E81C_000008AC:
    addic. r0, r1, 0x10
    beq lbl_fn_8011E81C_000008D0
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8011E81C_000008C4
    bl fn_80084C24
lbl_fn_8011E81C_000008C4:
    li r0, 0x0
    stw r0, 0x14(r1)
    stw r0, 0x10(r1)
lbl_fn_8011E81C_000008D0:
    addi r11, r1, 0x30
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8011EAF8(void)
{
    nofralloc
    lfs f0, lbl_808817C8
    li r0, 0x0
    li r4, -0x1
    stw r4, 0x0(r3)
    stfs f0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_8011EB18(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x40
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    bl _savegpr_21
    lwz r0, 0x5c(r3)
    mr r27, r5
    fmr f30, f1
    mr r25, r3
    slwi r8, r0, 5
    fmr f31, f2
    add r7, r3, r8
    mr r26, r4
    lwz r0, 0x18(r7)
    mr r28, r6
    li r5, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8011EB18_00000980
    lbz r0, 0x20(r7)
    cmpwi r0, 0x0
    beq lbl_fn_8011EB18_00000980
    li r5, 0x1
lbl_fn_8011EB18_00000980:
    cmpwi r5, 0x0
    beq lbl_fn_8011EB18_000009BC
    add r7, r3, r8
    lwz r5, 0x4(r4)
    lwz r6, 0x1c(r7)
    lwz r0, 0x0(r5)
    lwz r5, 0x0(r6)
    cmpw r5, r0
    beq lbl_fn_8011EB18_00000BB8
    lfs f0, lbl_808817C8
    stfs f0, 0x10(r7)
    lwz r0, 0x5c(r3)
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x5c(r3)
lbl_fn_8011EB18_000009BC:
    lwz r0, 0x5c(r3)
    lwz r23, 0x0(r4)
    slwi r0, r0, 5
    add r31, r3, r0
    lwz r3, 0x1c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8011EB18_000009E4
    lis r4, fn_8011D320@ha
    addi r4, r4, fn_8011D320@l
    bl fn_80695A50
lbl_fn_8011EB18_000009E4:
    cmpwi r23, 0x0
    stw r23, 0x18(r31)
    beq lbl_fn_8011EB18_00000A30
    slwi r3, r23, 4
    li r4, 0x0
    addi r3, r3, 0x10
    la r5, lbl_8087D9AC
    la r6, lbl_8087D9A8
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8011EAF8@ha
    lis r5, fn_8011D320@ha
    mr r7, r23
    li r6, 0x10
    addi r4, r4, fn_8011EAF8@l
    addi r5, r5, fn_8011D320@l
    bl fn_80695720
    stw r3, 0x1c(r31)
    b lbl_fn_8011EB18_00000A38
lbl_fn_8011EB18_00000A30:
    li r0, 0x0
    stw r0, 0x1c(r31)
lbl_fn_8011EB18_00000A38:
    li r30, 0x0
    li r29, 0x0
    li r24, 0x0
    b lbl_fn_8011EB18_00000AE4
lbl_fn_8011EB18_00000A48:
    lwz r3, 0x4(r26)
    lwz r0, 0x1c(r31)
    add r22, r3, r29
    add r23, r0, r29
    lwzx r0, r3, r29
    stw r0, 0x0(r23)
    lfs f0, 0x4(r22)
    stfs f0, 0x4(r23)
    lwz r3, 0xc(r23)
    lwz r21, 0x8(r22)
    cmpwi r3, 0x0
    beq lbl_fn_8011EB18_00000A7C
    bl fn_80084C24
lbl_fn_8011EB18_00000A7C:
    cmpwi r21, 0x0
    stw r21, 0x8(r23)
    beq lbl_fn_8011EB18_00000AA8
    slwi r3, r21, 2
    li r4, 0x0
    la r5, lbl_8087D9A4
    la r6, lbl_8087D9A0
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0xc(r23)
    b lbl_fn_8011EB18_00000AAC
lbl_fn_8011EB18_00000AA8:
    stw r24, 0xc(r23)
lbl_fn_8011EB18_00000AAC:
    li r5, 0x0
    li r6, 0x0
    b lbl_fn_8011EB18_00000AD0
lbl_fn_8011EB18_00000AB8:
    lwz r4, 0xc(r22)
    addi r5, r5, 0x1
    lwz r3, 0xc(r23)
    lwzx r0, r4, r6
    stwx r0, r3, r6
    addi r6, r6, 0x4
lbl_fn_8011EB18_00000AD0:
    lwz r0, 0x8(r23)
    cmplw r5, r0
    blt lbl_fn_8011EB18_00000AB8
    addi r29, r29, 0x10
    addi r30, r30, 0x1
lbl_fn_8011EB18_00000AE4:
    lwz r0, 0x18(r31)
    cmplw r30, r0
    blt lbl_fn_8011EB18_00000A48
    lwz r3, 0x5c(r25)
    li r4, 0x1
    lfs f2, lbl_808817C8
    li r0, 0x0
    slwi r3, r3, 5
    lfs f1, lbl_808817C4
    add r3, r25, r3
    lfs f0, lbl_808817CC
    stfs f2, 0x4(r3)
    lwz r3, 0x5c(r25)
    slwi r3, r3, 5
    add r3, r25, r3
    stfs f1, 0x8(r3)
    lwz r3, 0x5c(r25)
    slwi r3, r3, 5
    add r3, r25, r3
    stfs f31, 0xc(r3)
    lwz r3, 0x5c(r25)
    slwi r3, r3, 5
    add r3, r25, r3
    stfs f0, 0x10(r3)
    lwz r3, 0x5c(r25)
    slwi r3, r3, 5
    add r3, r25, r3
    stfs f30, 0x14(r3)
    lwz r3, 0x5c(r25)
    slwi r3, r3, 5
    add r3, r25, r3
    stb r4, 0x20(r3)
    lwz r3, 0x5c(r25)
    slwi r3, r3, 5
    add r3, r25, r3
    stb r27, 0x21(r3)
    lwz r3, 0x5c(r25)
    slwi r3, r3, 5
    add r3, r25, r3
    stb r28, 0x22(r3)
    lwz r3, 0x5c(r25)
    mulli r3, r3, 0xc
    add r25, r25, r3
    stw r0, 0x44(r25)
    stw r0, 0x48(r25)
    lwz r3, 0x4c(r25)
    cmpwi r3, 0x0
    beq lbl_fn_8011EB18_00000BB8
    beq lbl_fn_8011EB18_00000BB0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8011EB18_00000BB0:
    li r0, 0x0
    stw r0, 0x4c(r25)
lbl_fn_8011EB18_00000BB8:
    addi r11, r1, 0x40
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    bl _restgpr_21
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8011EDE0(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_8011EDE0_00000C2C
    lwz r0, 0x5c(r3)
    li r4, 0x0
    slwi r6, r0, 5
    add r5, r3, r6
    lwz r0, 0x18(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8011EDE0_00000C14
    lbz r0, 0x20(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8011EDE0_00000C14
    li r4, 0x1
lbl_fn_8011EDE0_00000C14:
    cmpwi r4, 0x0
    beqlr
    add r3, r3, r6
    lfs f0, lbl_808817E4
    stfs f0, 0x10(r3)
    blr
lbl_fn_8011EDE0_00000C2C:
    lwz r0, 0x5c(r3)
    li r5, 0x0
    cntlzw r0, r0
    clrrwi r0, r0, 5
    add r4, r3, r0
    stb r5, 0x20(r4)
    lwz r0, 0x5c(r3)
    slwi r0, r0, 5
    add r3, r3, r0
    stb r5, 0x20(r3)
    blr
}

asm void fn_8011EE58(void)
{
    nofralloc
    fabs f6, f3
    stfs f1, 0x70(r3)
    lfs f0, lbl_808817D0
    stfs f2, 0x74(r3)
    frsp f1, f6
    stfs f5, 0x64(r3)
    fcmpo cr0, f1, f0
    stfs f4, 0x68(r3)
    bge lbl_fn_8011EE58_00000C90
    frsp f1, f5
    frsp f0, f4
    fadds f0, f1, f0
    stfs f0, 0x6c(r3)
    b lbl_fn_8011EE58_00000C94
lbl_fn_8011EE58_00000C90:
    stfs f3, 0x6c(r3)
lbl_fn_8011EE58_00000C94:
    lfs f0, 0x6c(r3)
    stfs f0, 0x60(r3)
    blr
}

asm void fn_8011EEA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8011EEA0_00000CD8
    lis r4, fn_8011D320@ha
    mr r3, r0
    addi r4, r4, fn_8011D320@l
    bl fn_80695A50
lbl_fn_8011EEA0_00000CD8:
    li r0, 0x0
    stw r0, 0xc(r30)
    mr r3, r30
    mr r4, r31
    stw r0, 0x8(r30)
    lwz r12, 0x0(r30)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011EF14(void)
{
    nofralloc
    stwu r1, -0x6b0(r1)
    mflr r0
    stw r0, 0x6b4(r1)
    addi r11, r1, 0x6b0
    bl _savegpr_14
    lwz r0, 0x8(r3)
    mr r15, r3
    cmpwi r0, 0x0
    bne lbl_fn_8011EF14_00001494
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_8011EF14_00000D4C
    li r3, 0x1
    b lbl_fn_8011EF14_00001498
lbl_fn_8011EF14_00000D4C:
    mr r3, r15
    bl fn_8047059C
    mr r16, r3
    mr r3, r15
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x34(r1)
    mr r14, r3
    addi r3, r1, 0x44
    stw r0, 0x38(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x664(r1)
    bl memset
    addi r3, r1, 0x644
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x34(r1)
    mr r4, r14
    mr r5, r16
    addi r3, r1, 0x34
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x34
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x34(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r16, lbl_80736FA8@ha
    li r17, 0x0
    addi r16, r16, lbl_80736FA8@l
    li r14, 0x0
lbl_fn_8011EF14_00000DE8:
    addi r3, r1, 0x34
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r18, r3
    extsb. r0, r0
    beq lbl_fn_8011EF14_00000E38
    cmpwi r0, 0x3b
    beq lbl_fn_8011EF14_00000E38
    addi r4, r16, 0x9a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8011EF14_00000E20
    addi r17, r17, 0x1
    b lbl_fn_8011EF14_00000E38
lbl_fn_8011EF14_00000E20:
    mr r3, r18
    addi r4, r16, 0xa1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8011EF14_00000E38
    addi r14, r14, 0x1
lbl_fn_8011EF14_00000E38:
    addi r3, r1, 0x34
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8011EF14_00000DE8
    cmpwi r17, 0x0
    ble lbl_fn_8011EF14_00000EBC
    lwz r3, 0xc(r15)
    cmpwi r3, 0x0
    beq lbl_fn_8011EF14_00000E68
    lis r4, fn_8011D320@ha
    addi r4, r4, fn_8011D320@l
    bl fn_80695A50
lbl_fn_8011EF14_00000E68:
    cmpwi r17, 0x0
    stw r17, 0x8(r15)
    beq lbl_fn_8011EF14_00000EB4
    slwi r3, r17, 4
    li r4, 0x1
    addi r3, r3, 0x10
    la r5, lbl_8087D9AC
    la r6, lbl_8087D9A8
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8011EAF8@ha
    lis r5, fn_8011D320@ha
    mr r7, r17
    li r6, 0x10
    addi r4, r4, fn_8011EAF8@l
    addi r5, r5, fn_8011D320@l
    bl fn_80695720
    stw r3, 0xc(r15)
    b lbl_fn_8011EF14_00000EBC
lbl_fn_8011EF14_00000EB4:
    li r0, 0x0
    stw r0, 0xc(r15)
lbl_fn_8011EF14_00000EBC:
    cmpwi r14, 0x0
    ble lbl_fn_8011EF14_00001064
    beq lbl_fn_8011EF14_00000F04
    mulli r3, r14, 0x2c
    li r4, 0x0
    la r5, lbl_8087D6E0
    la r6, lbl_8087D6DC
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8000FAE4@ha
    mr r7, r14
    addi r4, r4, fn_8000FAE4@l
    li r5, 0x0
    li r6, 0x2c
    bl fn_80695720
    mr r16, r3
    b lbl_fn_8011EF14_00000F08
lbl_fn_8011EF14_00000F04:
    li r16, 0x0
lbl_fn_8011EF14_00000F08:
    lwz r0, 0x18(r15)
    cmpwi r0, 0x0
    beq lbl_fn_8011EF14_00001058
    lwz r0, 0x10(r15)
    mr r4, r14
    cmplw r14, r0
    ble lbl_fn_8011EF14_00000F28
    mr r4, r0
lbl_fn_8011EF14_00000F28:
    cmplwi r4, 0x0
    li r3, 0x0
    ble lbl_fn_8011EF14_00001044
    srwi. r0, r4, 1
    mtctr r0
    beq lbl_fn_8011EF14_00000FEC
lbl_fn_8011EF14_00000F40:
    lwz r0, 0x18(r15)
    add r6, r16, r3
    add r5, r0, r3
    lwzx r0, r3, r0
    stwx r0, r16, r3
    addi r3, r3, 0x2c
    lwz r0, 0x4(r5)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r5)
    psq_l f1, 0x8(r5), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r5)
    psq_l f1, 0x14(r5), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r5)
    psq_l f1, 0x20(r5), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    add r6, r16, r3
    lwz r0, 0x18(r15)
    add r5, r0, r3
    lwzx r0, r3, r0
    stwx r0, r16, r3
    addi r3, r3, 0x2c
    lwz r0, 0x4(r5)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r5)
    psq_l f1, 0x8(r5), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r5)
    psq_l f1, 0x14(r5), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r5)
    psq_l f1, 0x20(r5), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    bdnz lbl_fn_8011EF14_00000F40
    andi. r4, r4, 0x1
    beq lbl_fn_8011EF14_00001044
lbl_fn_8011EF14_00000FEC:
    mtctr r4
lbl_fn_8011EF14_00000FF0:
    lwz r0, 0x18(r15)
    add r6, r16, r3
    add r5, r0, r3
    lwzx r0, r3, r0
    stwx r0, r16, r3
    addi r3, r3, 0x2c
    lwz r0, 0x4(r5)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r5)
    psq_l f1, 0x8(r5), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r5)
    psq_l f1, 0x14(r5), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r5)
    psq_l f1, 0x20(r5), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    bdnz lbl_fn_8011EF14_00000FF0
lbl_fn_8011EF14_00001044:
    lwz r3, 0x18(r15)
    cmpwi r3, 0x0
    beq lbl_fn_8011EF14_00001058
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8011EF14_00001058:
    stw r16, 0x18(r15)
    stw r14, 0x10(r15)
    stw r14, 0x14(r15)
lbl_fn_8011EF14_00001064:
    addi r3, r1, 0x44
    li r31, 0x0
    li r30, 0x0
    li r4, 0x0
    li r5, 0x400
    bl memset
    addi r3, r1, 0x644
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x34(r1)
    addi r3, r1, 0x34
    lwz r4, 0x38(r1)
    lwz r12, 0x8(r12)
    lwz r5, 0x3c(r1)
    mtctr r12
    bctrl
    lis r3, lbl_80736FA8@ha
    addi r25, r1, 0x1c
    addi r24, r3, lbl_80736FA8@l
    addi r22, r1, 0x20
    addi r14, r1, 0x14
    li r29, 0x0
    lis r27, 0xcccd
    lis r23, 0x4000
    lis r26, 0x1555
    lis r28, 0x2aab
lbl_fn_8011EF14_000010D0:
    addi r3, r1, 0x34
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r16, r3
    extsb. r0, r0
    beq lbl_fn_8011EF14_0000147C
    cmpwi r0, 0x3b
    beq lbl_fn_8011EF14_0000147C
    addi r4, r24, 0x9a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8011EF14_00001454
    lwz r0, 0xc(r15)
    addi r3, r1, 0x34
    add r19, r0, r31
    addi r31, r31, 0x10
    bl fn_8005B9CC
    bl fn_802180A8
    cmpwi r3, 0x0
    stw r3, 0x0(r19)
    blt lbl_fn_8011EF14_0000147C
    addi r3, r1, 0x34
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x4(r19)
    stw r29, 0x14(r1)
    stw r29, 0x18(r1)
    stw r29, 0x1c(r1)
lbl_fn_8011EF14_00001140:
    addi r3, r1, 0x34
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_8011EF14_000013A8
    mr r3, r16
    bl fn_800DC6B4
    lwz r5, 0x18(r1)
    mr r17, r3
    lwz r4, 0x1c(r1)
    cmplw r5, r4
    bge lbl_fn_8011EF14_0000118C
    addi r5, r5, 0x1
    lwz r4, 0x14(r1)
    slwi r0, r5, 2
    stw r5, 0x18(r1)
    add r4, r4, r0
    stw r3, -0x4(r4)
    b lbl_fn_8011EF14_00001140
lbl_fn_8011EF14_0000118C:
    subi r0, r23, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_8011EF14_000011B8
    lis r3, __files@ha
    addi r4, r24, 0xab
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8011EF14_000011B8:
    lwz r3, 0x18(r1)
    subi r0, r23, 0x1
    lwz r18, 0x1c(r1)
    addi r3, r3, 0x1
    stw r29, 0x20(r1)
    subf r3, r18, r3
    subf r0, r18, r0
    cmplw r3, r0
    stw r29, 0x24(r1)
    stw r29, 0x28(r1)
    stw r25, 0x2c(r1)
    stw r29, 0x30(r1)
    stw r3, 0x8(r1)
    ble lbl_fn_8011EF14_0000120C
    lis r3, __files@ha
    addi r4, r24, 0xab
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8011EF14_0000120C:
    addi r0, r26, 0x5555
    cmplw r18, r0
    bge lbl_fn_8011EF14_00001254
    addi r4, r18, 0x1
    subi r5, r27, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x8(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_8011EF14_00001248
    addi r3, r1, 0x8
lbl_fn_8011EF14_00001248:
    lwz r0, 0x0(r3)
    add r18, r18, r0
    b lbl_fn_8011EF14_00001290
lbl_fn_8011EF14_00001254:
    subi r0, r28, 0x5556
    cmplw r18, r0
    bge lbl_fn_8011EF14_0000128C
    addi r3, r18, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_8011EF14_00001280
    addi r3, r1, 0x8
lbl_fn_8011EF14_00001280:
    lwz r0, 0x0(r3)
    add r18, r18, r0
    b lbl_fn_8011EF14_00001290
lbl_fn_8011EF14_0000128C:
    subi r18, r23, 0x1
lbl_fn_8011EF14_00001290:
    subi r0, r23, 0x1
    cmplw r18, r0
    ble lbl_fn_8011EF14_000012B8
    lis r3, __files@ha
    addi r4, r24, 0xab
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8011EF14_000012B8:
    slwi r3, r18, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r20, r3
    bne lbl_fn_8011EF14_000012EC
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8011EF14_000012EC:
    lwz r0, 0x18(r1)
    lwz r3, 0x24(r1)
    slwi r6, r0, 2
    stw r18, 0x28(r1)
    addi r4, r3, 0x1
    slwi r5, r3, 2
    add r3, r20, r6
    stw r4, 0x24(r1)
    stwx r17, r5, r3
    lwz r3, 0x18(r1)
    lwz r17, 0x14(r1)
    slwi r3, r3, 2
    add r3, r17, r3
    mr r4, r17
    subf r3, r17, r3
    srawi r3, r3, 2
    addze r21, r3
    subf r0, r21, r0
    stw r0, 0x30(r1)
    slwi r18, r21, 2
    slwi r0, r0, 2
    mr r5, r18
    add r3, r20, r0
    bl memcpy
    mr r3, r17
    mr r5, r18
    li r4, 0x0
    bl memset
    lwz r0, 0x24(r1)
    cmpwi r22, 0x0
    lwz r3, 0x14(r1)
    add r5, r0, r21
    mr r0, r20
    lwz r6, 0x1c(r1)
    lwz r4, 0x28(r1)
    stw r4, 0x1c(r1)
    stw r6, 0x28(r1)
    stw r0, 0x14(r1)
    stw r3, 0x20(r1)
    stw r5, 0x18(r1)
    stw r29, 0x24(r1)
    beq lbl_fn_8011EF14_00001140
    cmpwi r3, 0x0
    beq lbl_fn_8011EF14_00001140
    stw r29, 0x24(r1)
    bl dtor_80084684
    b lbl_fn_8011EF14_00001140
lbl_fn_8011EF14_000013A8:
    lwz r16, 0x18(r1)
    cmpwi r16, 0x0
    beq lbl_fn_8011EF14_00001424
    lwz r3, 0xc(r19)
    cmpwi r3, 0x0
    beq lbl_fn_8011EF14_000013C4
    bl fn_80084C24
lbl_fn_8011EF14_000013C4:
    cmpwi r16, 0x0
    stw r16, 0x8(r19)
    beq lbl_fn_8011EF14_000013F0
    slwi r3, r16, 2
    li r4, 0x1
    la r5, lbl_8087D9A4
    la r6, lbl_8087D9A0
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0xc(r19)
    b lbl_fn_8011EF14_000013F4
lbl_fn_8011EF14_000013F0:
    stw r29, 0xc(r19)
lbl_fn_8011EF14_000013F4:
    li r6, 0x0
    li r5, 0x0
    b lbl_fn_8011EF14_00001418
lbl_fn_8011EF14_00001400:
    lwz r4, 0x14(r1)
    addi r6, r6, 0x1
    lwz r3, 0xc(r19)
    lwzx r0, r4, r5
    stwx r0, r3, r5
    addi r5, r5, 0x4
lbl_fn_8011EF14_00001418:
    lwz r0, 0x18(r1)
    cmplw r6, r0
    blt lbl_fn_8011EF14_00001400
lbl_fn_8011EF14_00001424:
    cmpwi r14, 0x0
    beq lbl_fn_8011EF14_0000147C
    beq lbl_fn_8011EF14_0000147C
    beq lbl_fn_8011EF14_0000147C
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8011EF14_0000147C
    lwz r0, 0x18(r1)
    subf r0, r0, r0
    stw r0, 0x18(r1)
    bl dtor_80084684
    b lbl_fn_8011EF14_0000147C
lbl_fn_8011EF14_00001454:
    mr r3, r16
    addi r4, r24, 0xa1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8011EF14_0000147C
    lwz r0, 0x18(r15)
    addi r4, r1, 0x34
    add r3, r0, r30
    addi r30, r30, 0x2c
    bl fn_80089EE4
lbl_fn_8011EF14_0000147C:
    addi r3, r1, 0x34
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8011EF14_000010D0
    mr r3, r15
    bl fn_80473F88
lbl_fn_8011EF14_00001494:
    li r3, 0x0
lbl_fn_8011EF14_00001498:
    addi r11, r1, 0x6b0
    bl _restgpr_14
    lwz r0, 0x6b4(r1)
    mtlr r0
    addi r1, r1, 0x6b0
    blr
}

asm void fn_8011F6B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800D1D3C
    lis r3, lbl_8077A1E8@ha
    li r0, 0x0
    addi r3, r3, lbl_8077A1E8@l
    stw r3, 0x0(r31)
    mr r3, r31
    stw r0, 0x48(r31)
    stw r0, 0x4c(r31)
    stw r0, 0x50(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011F6FC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    lwz r30, 0x48(r3)
    b lbl_fn_8011F6FC_0000155C
lbl_fn_8011F6FC_0000151C:
    lwz r0, 0x2bc(r30)
    extlwi r0, r0, 2, 29
    srawi. r0, r0, 31
    beq lbl_fn_8011F6FC_00001534
    addi r3, r30, 0xb0
    bl fn_8008B140
lbl_fn_8011F6FC_00001534:
    lwz r0, 0x38(r30)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8011F6FC_00001554
    lwz r3, 0x1418(r30)
    addi r0, r3, 0x1
    stw r0, 0x1418(r30)
    b lbl_fn_8011F6FC_00001558
lbl_fn_8011F6FC_00001554:
    stw r31, 0x1418(r30)
lbl_fn_8011F6FC_00001558:
    lwz r30, 0x14ac(r30)
lbl_fn_8011F6FC_0000155C:
    cmpwi r30, 0x0
    bne lbl_fn_8011F6FC_0000151C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
