#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_20(void);
extern void _savegpr_14(void);
extern void _savegpr_20(void);
extern void dtor_80084684(void);
extern void fn_805CD830(void);
extern void fn_805CD940(void);
extern void fn_805CE6F0(void);
extern void fn_805D2B50(void);
extern void fn_805D3CA0(void);
extern void fn_805D4260(void);
extern void fn_805D56B0(void);
extern void fn_805D7CE0(void);
extern void fn_805D7D60(void);
extern void fn_805D9BE0(void);
extern void fn_80616360(void);
extern void fn_80616EF0(void);
extern void fn_8061A0F0(void);
extern void fn_8061A100(void);
extern void fn_8068236C(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);

/* External data declarations */
extern u8 lbl_80764558[];
extern u8 lbl_80764570[];
extern u8 lbl_80764574[];
extern u8 lbl_807990C0[];
extern u8 lbl_807CA1F8[];

/* Small data declarations */

/* Function declarations */
void fn_805CF6E0(void);
void fn_805CF8E0(void);
void fn_805CFA00(void);
void fn_805CFC10(void);
void fn_805CFC20(void);
void fn_805D0DB0(void);
void fn_805D0E60(void);

asm void fn_805CF6E0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    subis r0, r3, 0x7061
    cmplwi r0, 0x6e31
    stw r31, 0x4c(r1)
    beq lbl_fn_805CF6E0_00000050
    subis r0, r3, 0x7069
    cmplwi r0, 0x6331
    beq lbl_fn_805CF6E0_00000084
    subis r0, r3, 0x7478
    cmplwi r0, 0x7431
    beq lbl_fn_805CF6E0_000000DC
    subis r0, r3, 0x776e
    cmplwi r0, 0x6431
    beq lbl_fn_805CF6E0_00000134
    subis r0, r3, 0x626e
    cmplwi r0, 0x6431
    beq lbl_fn_805CF6E0_0000018C
    b lbl_fn_805CF6E0_000001E4
lbl_fn_805CF6E0_00000050:
    lis r3, lbl_807CA1F8@ha
    mr r31, r4
    lwz r3, lbl_807CA1F8@l(r3)
    li r4, 0xd4
    bl fn_8061A0F0
    cmpwi r3, 0x0
    beq lbl_fn_805CF6E0_0000007C
    beq lbl_fn_805CF6E0_000001E8
    mr r4, r31
    bl fn_805D2B50
    b lbl_fn_805CF6E0_000001E8
lbl_fn_805CF6E0_0000007C:
    li r3, 0x0
    b lbl_fn_805CF6E0_000001E8
lbl_fn_805CF6E0_00000084:
    lwz r8, 0x0(r5)
    lis r3, lbl_807CA1F8@ha
    lwz r7, 0x4(r5)
    mr r31, r4
    lwz r6, 0x8(r5)
    li r4, 0xec
    lwz r0, 0xc(r5)
    stw r8, 0x38(r1)
    lwz r3, lbl_807CA1F8@l(r3)
    stw r7, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r0, 0x44(r1)
    bl fn_8061A0F0
    cmpwi r3, 0x0
    beq lbl_fn_805CF6E0_000000D4
    beq lbl_fn_805CF6E0_000001E8
    mr r4, r31
    addi r5, r1, 0x38
    bl fn_805D3CA0
    b lbl_fn_805CF6E0_000001E8
lbl_fn_805CF6E0_000000D4:
    li r3, 0x0
    b lbl_fn_805CF6E0_000001E8
lbl_fn_805CF6E0_000000DC:
    lwz r8, 0x0(r5)
    lis r3, lbl_807CA1F8@ha
    lwz r7, 0x4(r5)
    mr r31, r4
    lwz r6, 0x8(r5)
    li r4, 0x100
    lwz r0, 0xc(r5)
    stw r8, 0x28(r1)
    lwz r3, lbl_807CA1F8@l(r3)
    stw r7, 0x2c(r1)
    stw r6, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_8061A0F0
    cmpwi r3, 0x0
    beq lbl_fn_805CF6E0_0000012C
    beq lbl_fn_805CF6E0_000001E8
    mr r4, r31
    addi r5, r1, 0x28
    bl fn_805D4260
    b lbl_fn_805CF6E0_000001E8
lbl_fn_805CF6E0_0000012C:
    li r3, 0x0
    b lbl_fn_805CF6E0_000001E8
lbl_fn_805CF6E0_00000134:
    lwz r8, 0x0(r5)
    lis r3, lbl_807CA1F8@ha
    lwz r7, 0x4(r5)
    mr r31, r4
    lwz r6, 0x8(r5)
    li r4, 0x104
    lwz r0, 0xc(r5)
    stw r8, 0x18(r1)
    lwz r3, lbl_807CA1F8@l(r3)
    stw r7, 0x1c(r1)
    stw r6, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_8061A0F0
    cmpwi r3, 0x0
    beq lbl_fn_805CF6E0_00000184
    beq lbl_fn_805CF6E0_000001E8
    mr r4, r31
    addi r5, r1, 0x18
    bl fn_805D56B0
    b lbl_fn_805CF6E0_000001E8
lbl_fn_805CF6E0_00000184:
    li r3, 0x0
    b lbl_fn_805CF6E0_000001E8
lbl_fn_805CF6E0_0000018C:
    lwz r8, 0x0(r5)
    lis r3, lbl_807CA1F8@ha
    lwz r7, 0x4(r5)
    mr r31, r4
    lwz r6, 0x8(r5)
    li r4, 0xd4
    lwz r0, 0xc(r5)
    stw r8, 0x8(r1)
    lwz r3, lbl_807CA1F8@l(r3)
    stw r7, 0xc(r1)
    stw r6, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8061A0F0
    cmpwi r3, 0x0
    beq lbl_fn_805CF6E0_000001DC
    beq lbl_fn_805CF6E0_000001E8
    mr r4, r31
    addi r5, r1, 0x8
    bl fn_805CD830
    b lbl_fn_805CF6E0_000001E8
lbl_fn_805CF6E0_000001DC:
    li r3, 0x0
    b lbl_fn_805CF6E0_000001E8
lbl_fn_805CF6E0_000001E4:
    li r3, 0x0
lbl_fn_805CF6E0_000001E8:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_805CF8E0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f1, 0x8(r4)
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    lis r31, lbl_80764558@ha
    addi r31, r31, lbl_80764558@l
    stw r30, 0x18(r1)
    mr r30, r4
    lfs f2, 0x10(r31)
    lfs f0, 0x14(r31)
    stw r29, 0x14(r1)
    mr r29, r3
    fmuls f1, f0, f1
    stfs f2, 0x8(r1)
    stfs f2, 0xc(r1)
    bl fn_805D7D60
    lfs f2, 0x8(r30)
    fmr f31, f1
    lfs f0, 0x14(r31)
    fmuls f1, f0, f2
    bl fn_805D7CE0
    lfs f3, 0xc(r30)
    fneg f5, f1
    lfs f2, 0x8(r1)
    fmuls f9, f1, f3
    lfs f8, 0x18(r31)
    fmuls f11, f31, f3
    lfs f0, 0x10(r30)
    lfs f6, 0xc(r1)
    fneg f4, f2
    fmuls f12, f5, f0
    lfs f3, 0x0(r30)
    fmuls f10, f31, f0
    lfs f1, 0x4(r30)
    fadds f5, f3, f2
    lfs f0, 0x1c(r31)
    fadds f2, f1, f6
    stfs f11, 0x0(r29)
    fneg f7, f6
    fmuls f1, f9, f4
    stfs f12, 0x4(r29)
    fmuls f3, f11, f4
    fmuls f6, f12, f7
    stfs f8, 0x8(r29)
    fadds f1, f2, f1
    fadds f4, f5, f3
    stfs f9, 0x10(r29)
    fmuls f3, f10, f7
    stfs f10, 0x14(r29)
    fadds f2, f6, f4
    fadds f1, f3, f1
    stfs f8, 0x18(r29)
    stfs f2, 0xc(r29)
    stfs f1, 0x1c(r29)
    stfs f8, 0x20(r29)
    stfs f8, 0x24(r29)
    stfs f0, 0x28(r29)
    stfs f8, 0x2c(r29)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805CFA00(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f2, 0x0(r4)
    lis r5, lbl_80764558@ha
    addi r5, r5, lbl_80764558@l
    lfs f3, 0x4(r4)
    fabs f8, f2
    lfs f0, 0x1c(r5)
    lfs f4, 0x8(r4)
    fabs f9, f3
    lfs f5, 0xc(r4)
    li r6, 0x0
    lfs f6, 0x10(r4)
    fcmpo cr0, f8, f0
    lfs f7, 0x14(r4)
    fabs f10, f4
    fabs f11, f5
    stw r0, 0x24(r1)
    fabs f12, f6
    fabs f13, f7
    cror eq, gt, eq
    beq lbl_fn_805CFA00_000003B4
    fcmpo cr0, f9, f0
    cror eq, gt, eq
    beq lbl_fn_805CFA00_000003B4
    fcmpo cr0, f10, f0
    cror eq, gt, eq
    beq lbl_fn_805CFA00_000003B4
    fcmpo cr0, f11, f0
    cror eq, gt, eq
    beq lbl_fn_805CFA00_000003B4
    fcmpo cr0, f12, f0
    cror eq, gt, eq
    beq lbl_fn_805CFA00_000003B4
    fcmpo cr0, f13, f0
    cror eq, gt, eq
    bne lbl_fn_805CFA00_0000044C
lbl_fn_805CFA00_000003B4:
    lfs f1, 0x10(r5)
    lfs f0, 0x1c(r5)
    nop
lbl_fn_805CFA00_000003C0:
    extsb r0, r6
    cmpwi r0, 0x2e
    bge lbl_fn_805CFA00_000004F4
    fmuls f8, f8, f1
    fmuls f2, f2, f1
    fmuls f3, f3, f1
    fcmpo cr0, f8, f0
    fmuls f4, f4, f1
    fmuls f5, f5, f1
    fmuls f6, f6, f1
    fmuls f7, f7, f1
    fmuls f9, f9, f1
    fmuls f10, f10, f1
    fmuls f11, f11, f1
    fmuls f12, f12, f1
    fmuls f13, f13, f1
    cror eq, gt, eq
    addi r6, r6, 0x1
    beq lbl_fn_805CFA00_000003C0
    fcmpo cr0, f9, f0
    cror eq, gt, eq
    beq lbl_fn_805CFA00_000003C0
    fcmpo cr0, f10, f0
    cror eq, gt, eq
    beq lbl_fn_805CFA00_000003C0
    fcmpo cr0, f11, f0
    cror eq, gt, eq
    beq lbl_fn_805CFA00_000003C0
    fcmpo cr0, f12, f0
    cror eq, gt, eq
    beq lbl_fn_805CFA00_000003C0
    fcmpo cr0, f13, f0
    cror eq, gt, eq
    beq lbl_fn_805CFA00_000003C0
    b lbl_fn_805CFA00_000004F4
lbl_fn_805CFA00_0000044C:
    lfs f1, 0x10(r5)
    fcmpo cr0, f8, f1
    bge lbl_fn_805CFA00_000004F4
    fcmpo cr0, f9, f1
    bge lbl_fn_805CFA00_000004F4
    fcmpo cr0, f10, f1
    bge lbl_fn_805CFA00_000004F4
    fcmpo cr0, f11, f1
    bge lbl_fn_805CFA00_000004F4
    fcmpo cr0, f12, f1
    bge lbl_fn_805CFA00_000004F4
    fcmpo cr0, f13, f1
    bge lbl_fn_805CFA00_000004F4
    lfs f0, 0x20(r5)
lbl_fn_805CFA00_00000484:
    fmuls f8, f8, f0
    subi r6, r6, 0x1
    fmuls f2, f2, f0
    fmuls f3, f3, f0
    fcmpo cr0, f8, f1
    fmuls f4, f4, f0
    fmuls f5, f5, f0
    fmuls f6, f6, f0
    fmuls f7, f7, f0
    fmuls f9, f9, f0
    fmuls f10, f10, f0
    fmuls f11, f11, f0
    fmuls f12, f12, f0
    fmuls f13, f13, f0
    bge lbl_fn_805CFA00_000004F4
    fcmpo cr0, f9, f1
    bge lbl_fn_805CFA00_000004F4
    fcmpo cr0, f10, f1
    bge lbl_fn_805CFA00_000004F4
    fcmpo cr0, f11, f1
    bge lbl_fn_805CFA00_000004F4
    fcmpo cr0, f12, f1
    bge lbl_fn_805CFA00_000004F4
    fcmpo cr0, f13, f1
    bge lbl_fn_805CFA00_000004F4
    extsb r0, r6
    cmpwi r0, -0x11
    bgt lbl_fn_805CFA00_00000484
lbl_fn_805CFA00_000004F4:
    stfs f2, 0x8(r1)
    addi r4, r1, 0x8
    extsb r5, r6
    stfs f3, 0xc(r1)
    stfs f4, 0x10(r1)
    stfs f5, 0x14(r1)
    stfs f6, 0x18(r1)
    stfs f7, 0x1c(r1)
    bl fn_80616EF0
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805CFC10(void)
{
    nofralloc
    li r0, -0x1
    stw r0, 0x0(r3)
    blr
}

asm void fn_805CFC20(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_14
    lis r6, lbl_807990C0@ha
    addi r0, r3, 0x1c
    addi r6, r6, lbl_807990C0@l
    li r14, 0x0
    stw r6, 0x0(r3)
    lis r7, fn_805CFC10@ha
    mr r16, r4
    lis r6, fn_805CD940@ha
    mr r17, r5
    addi r4, r7, fn_805CFC10@l
    addi r5, r6, fn_805CD940@l
    stw r14, 0x18(r3)
    mr r15, r3
    li r6, 0x4
    stw r0, 0x1c(r3)
    li r7, 0x4
    stw r0, 0x20(r3)
    addi r3, r3, 0x3c
    bl fn_806958E0
    lis r4, lbl_80764558@ha
    li r7, 0xff
    addi r5, r4, lbl_80764558@l
    lwz r0, 0x50(r15)
    lha r11, lbl_80764558@l(r4)
    mr r4, r16
    lwz r3, 0x4c(r15)
    clrlwi r0, r0, 27
    lha r10, 0x2(r5)
    clrlwi r6, r3, 27
    lha r9, 0x4(r5)
    lha r8, 0x6(r5)
    addi r3, r15, 0x4
    sth r11, 0x24(r15)
    li r5, 0x14
    sth r10, 0x26(r15)
    sth r9, 0x28(r15)
    sth r8, 0x2a(r15)
    sth r7, 0x2c(r15)
    sth r7, 0x2e(r15)
    sth r7, 0x30(r15)
    sth r7, 0x32(r15)
    sth r7, 0x34(r15)
    sth r7, 0x36(r15)
    sth r7, 0x38(r15)
    sth r7, 0x3a(r15)
    stw r6, 0x4c(r15)
    stw r0, 0x50(r15)
    stb r14, 0x54(r15)
    stw r14, 0x58(r15)
    bl fn_8068236C
    lha r0, 0x14(r16)
    addi r21, r16, 0x40
    sth r0, 0x24(r15)
    li r18, 0x8
    lha r0, 0x16(r16)
    sth r0, 0x26(r15)
    lha r0, 0x18(r16)
    sth r0, 0x28(r15)
    lha r0, 0x1a(r16)
    sth r0, 0x2a(r15)
    lha r0, 0x1c(r16)
    sth r0, 0x2c(r15)
    lha r0, 0x1e(r16)
    sth r0, 0x2e(r15)
    lha r0, 0x20(r16)
    sth r0, 0x30(r15)
    lha r0, 0x22(r16)
    sth r0, 0x32(r15)
    lha r0, 0x24(r16)
    sth r0, 0x34(r15)
    lha r0, 0x26(r16)
    sth r0, 0x36(r15)
    lha r0, 0x28(r16)
    sth r0, 0x38(r15)
    lha r0, 0x2a(r16)
    sth r0, 0x3a(r15)
    lwz r0, 0x2c(r16)
    stw r0, 0x3c(r15)
    lwz r0, 0x30(r16)
    stw r0, 0x40(r15)
    lwz r0, 0x34(r16)
    stw r0, 0x44(r15)
    lwz r0, 0x38(r16)
    stw r0, 0x48(r15)
    lwz r0, 0x3c(r16)
    extrwi r6, r0, 4, 24
    clrlslwi r3, r0, 28, 2
    mulli r4, r6, 0x14
    clrlwi r5, r0, 28
    addi r22, r3, 0x40
    cmplwi r5, 0x8
    add r20, r16, r22
    rlwinm r3, r0, 26, 26, 29
    add r22, r22, r4
    extrwi r4, r0, 4, 20
    add r19, r16, r22
    add r22, r22, r3
    bgt lbl_fn_805CFC20_000006E0
    mr r18, r5
lbl_fn_805CFC20_000006E0:
    cmplwi r6, 0xa
    li r14, 0xa
    bgt lbl_fn_805CFC20_000006F0
    mr r14, r6
lbl_fn_805CFC20_000006F0:
    cmplwi r4, 0x8
    li r27, 0x8
    bgt lbl_fn_805CFC20_00000700
    mr r27, r4
lbl_fn_805CFC20_00000700:
    extrwi r6, r0, 1, 6
    extrwi r4, r0, 1, 4
    extrwi r7, r0, 2, 17
    extrwi r3, r0, 1, 19
    stb r3, 0x2c(r1)
    neg r5, r6
    neg r3, r4
    cmplwi r7, 0x3
    or r4, r3, r4
    or r5, r5, r6
    extrwi r3, r0, 1, 8
    stb r3, 0x2b(r1)
    srwi r3, r5, 31
    li r28, 0x3
    stb r3, 0x29(r1)
    extrwi r3, r0, 1, 7
    stb r3, 0x2a(r1)
    srwi r3, r4, 31
    stb r3, 0x28(r1)
    bgt lbl_fn_805CFC20_00000754
    mr r28, r7
lbl_fn_805CFC20_00000754:
    extrwi r3, r0, 3, 14
    li r29, 0x4
    cmplwi r3, 0x4
    bgt lbl_fn_805CFC20_00000768
    mr r29, r3
lbl_fn_805CFC20_00000768:
    extrwi r0, r0, 5, 9
    li r30, 0x10
    cmplwi r0, 0x10
    bgt lbl_fn_805CFC20_0000077C
    mr r30, r0
lbl_fn_805CFC20_0000077C:
    lbz r0, 0x29(r1)
    mr r3, r15
    stw r0, 0x8(r1)
    clrlwi r4, r18, 24
    lbz r0, 0x28(r1)
    clrlwi r5, r14, 24
    stw r0, 0xc(r1)
    clrlwi r6, r27, 24
    lbz r0, 0x2b(r1)
    clrlwi r7, r30, 24
    stw r0, 0x10(r1)
    clrlwi r9, r29, 24
    lbz r0, 0x2a(r1)
    clrlwi r10, r28, 24
    lbz r8, 0x2c(r1)
    stw r0, 0x14(r1)
    bl fn_805D0E60
    lwz r4, 0x58(r15)
    cmpwi r4, 0x0
    beq lbl_fn_805CFC20_000016B4
    clrlwi. r23, r18, 24
    beq lbl_fn_805CFC20_00000814
    lwz r3, 0x50(r15)
    rlwinm r0, r3, 9, 23, 26
    srwi r24, r3, 28
    add r25, r4, r0
    b lbl_fn_805CFC20_00000800
lbl_fn_805CFC20_000007E8:
    mr r3, r25
    li r4, 0x0
    li r5, 0x20
    bl memset
    addi r25, r25, 0x20
    addi r24, r24, 0x1
lbl_fn_805CFC20_00000800:
    cmplw r24, r23
    blt lbl_fn_805CFC20_000007E8
    lwz r0, 0x50(r15)
    rlwimi r0, r18, 28, 0, 3
    stw r0, 0x50(r15)
lbl_fn_805CFC20_00000814:
    clrlwi. r0, r18, 24
    beq lbl_fn_805CFC20_000008A8
    lwz r3, 0x0(r17)
    li r18, 0x0
    lwz r25, 0x58(r15)
    lis r31, 0x7469
    addi r26, r3, 0xc
    b lbl_fn_805CFC20_00000894
lbl_fn_805CFC20_00000834:
    clrlslwi r0, r18, 24, 2
    lwz r3, 0xc(r17)
    add r24, r21, r0
    lhzx r0, r21, r0
    lwz r12, 0x0(r3)
    addi r4, r31, 0x6d67
    slwi r0, r0, 3
    li r6, 0x0
    lwzx r0, r26, r0
    lwz r12, 0xc(r12)
    add r5, r26, r0
    mtctr r12
    bctrl
    lwz r0, 0x58(r15)
    clrlslwi r23, r18, 24, 5
    mr r4, r3
    li r5, 0x0
    add r3, r0, r23
    bl fn_805CE6F0
    lbz r4, 0x2(r24)
    add r3, r25, r23
    lbz r5, 0x3(r24)
    bl fn_80616360
    addi r18, r18, 0x1
lbl_fn_805CFC20_00000894:
    lwz r0, 0x50(r15)
    clrlwi r3, r18, 24
    srwi r0, r0, 28
    cmplw r3, r0
    blt lbl_fn_805CFC20_00000834
lbl_fn_805CFC20_000008A8:
    lwz r0, 0x4c(r15)
    clrlwi. r3, r14, 24
    lwz r4, 0x58(r15)
    mr r5, r20
    rlwinm r0, r0, 9, 23, 26
    add r4, r4, r0
    ble lbl_fn_805CFC20_000009C4
    srwi. r0, r3, 2
    mtctr r0
    beq lbl_fn_805CFC20_00000988
lbl_fn_805CFC20_000008D0:
    lfs f0, 0x0(r20)
    stfs f0, 0x0(r4)
    lfs f0, 0x4(r20)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r5)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r5)
    stfs f0, 0xc(r4)
    lfs f0, 0x10(r5)
    stfs f0, 0x10(r4)
    lfs f0, 0x14(r20)
    stfs f0, 0x14(r4)
    lfs f0, 0x18(r20)
    stfs f0, 0x18(r4)
    lfs f0, 0x1c(r5)
    stfs f0, 0x1c(r4)
    lfs f0, 0x20(r5)
    stfs f0, 0x20(r4)
    lfs f0, 0x24(r5)
    stfs f0, 0x24(r4)
    lfs f0, 0x28(r20)
    stfs f0, 0x28(r4)
    lfs f0, 0x2c(r20)
    stfs f0, 0x2c(r4)
    lfs f0, 0x30(r5)
    stfs f0, 0x30(r4)
    lfs f0, 0x34(r5)
    stfs f0, 0x34(r4)
    lfs f0, 0x38(r5)
    stfs f0, 0x38(r4)
    lfs f0, 0x3c(r20)
    stfs f0, 0x3c(r4)
    lfs f0, 0x40(r20)
    addi r20, r20, 0x50
    stfs f0, 0x40(r4)
    lfs f0, 0x44(r5)
    stfs f0, 0x44(r4)
    lfs f0, 0x48(r5)
    stfs f0, 0x48(r4)
    lfs f0, 0x4c(r5)
    addi r5, r5, 0x50
    stfs f0, 0x4c(r4)
    addi r4, r4, 0x50
    bdnz lbl_fn_805CFC20_000008D0
    andi. r3, r3, 0x3
    beq lbl_fn_805CFC20_000009C4
lbl_fn_805CFC20_00000988:
    mtctr r3
lbl_fn_805CFC20_0000098C:
    lfs f0, 0x0(r20)
    stfs f0, 0x0(r4)
    lfs f0, 0x4(r20)
    addi r20, r20, 0x14
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r5)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r5)
    stfs f0, 0xc(r4)
    lfs f0, 0x10(r5)
    addi r5, r5, 0x14
    stfs f0, 0x10(r4)
    addi r4, r4, 0x14
    bdnz lbl_fn_805CFC20_0000098C
lbl_fn_805CFC20_000009C4:
    lwz r3, 0x4c(r15)
    clrlwi. r5, r27, 24
    lwz r4, 0x58(r15)
    extrwi r0, r3, 4, 4
    rlwinm r3, r3, 9, 23, 26
    mulli r0, r0, 0x14
    add r0, r4, r0
    add r3, r3, r0
    beq lbl_fn_805CFC20_00000B18
    lwz r0, 0x50(r15)
    extrwi r4, r0, 4, 8
    cmplw cr1, r4, r5
    bge cr1, lbl_fn_805CFC20_00000B0C
    subf r0, r4, r5
    subi r9, r5, 0x8
    cmplwi r0, 0x8
    ble lbl_fn_805CFC20_00000AC8
    bgt cr1, lbl_fn_805CFC20_00000AC8
    addi r0, r9, 0x7
    slwi r5, r4, 2
    subf r0, r4, r0
    li r8, 0x1
    srwi r0, r0, 3
    add r10, r3, r5
    li r7, 0x4
    li r6, 0x3c
    li r5, 0x0
    mtctr r0
    cmplw r4, r9
    bge lbl_fn_805CFC20_00000AC8
lbl_fn_805CFC20_00000A3C:
    stb r8, 0x0(r10)
    addi r4, r4, 0x8
    stb r7, 0x1(r10)
    stb r6, 0x2(r10)
    stb r5, 0x3(r10)
    stb r8, 0x4(r10)
    stb r7, 0x5(r10)
    stb r6, 0x6(r10)
    stb r5, 0x7(r10)
    stb r8, 0x8(r10)
    stb r7, 0x9(r10)
    stb r6, 0xa(r10)
    stb r5, 0xb(r10)
    stb r8, 0xc(r10)
    stb r7, 0xd(r10)
    stb r6, 0xe(r10)
    stb r5, 0xf(r10)
    stb r8, 0x10(r10)
    stb r7, 0x11(r10)
    stb r6, 0x12(r10)
    stb r5, 0x13(r10)
    stb r8, 0x14(r10)
    stb r7, 0x15(r10)
    stb r6, 0x16(r10)
    stb r5, 0x17(r10)
    stb r8, 0x18(r10)
    stb r7, 0x19(r10)
    stb r6, 0x1a(r10)
    stb r5, 0x1b(r10)
    stb r8, 0x1c(r10)
    stb r7, 0x1d(r10)
    stb r6, 0x1e(r10)
    stb r5, 0x1f(r10)
    addi r10, r10, 0x20
    bdnz lbl_fn_805CFC20_00000A3C
lbl_fn_805CFC20_00000AC8:
    clrlwi r5, r27, 24
    slwi r6, r4, 2
    subf r0, r4, r5
    li r9, 0x1
    add r10, r3, r6
    li r8, 0x4
    li r7, 0x3c
    li r6, 0x0
    mtctr r0
    cmplw r4, r5
    bge lbl_fn_805CFC20_00000B0C
lbl_fn_805CFC20_00000AF4:
    stb r9, 0x0(r10)
    stb r8, 0x1(r10)
    stb r7, 0x2(r10)
    stb r6, 0x3(r10)
    addi r10, r10, 0x4
    bdnz lbl_fn_805CFC20_00000AF4
lbl_fn_805CFC20_00000B0C:
    lwz r0, 0x50(r15)
    rlwimi r0, r27, 20, 8, 11
    stw r0, 0x50(r15)
lbl_fn_805CFC20_00000B18:
    li r4, 0x0
    b lbl_fn_805CFC20_00000B4C
lbl_fn_805CFC20_00000B20:
    lbz r0, 0x0(r19)
    addi r4, r4, 0x1
    stb r0, 0x0(r3)
    lbz r0, 0x1(r19)
    stb r0, 0x1(r3)
    lbz r0, 0x2(r19)
    stb r0, 0x2(r3)
    lbz r0, 0x3(r19)
    addi r19, r19, 0x4
    stb r0, 0x3(r3)
    addi r3, r3, 0x4
lbl_fn_805CFC20_00000B4C:
    lwz r0, 0x50(r15)
    extrwi r0, r0, 4, 8
    cmplw r4, r0
    blt lbl_fn_805CFC20_00000B20
    lbz r0, 0x29(r1)
    cmpwi r0, 0x0
    beq lbl_fn_805CFC20_00000BB0
    lwz r4, 0x4c(r15)
    add r7, r16, r22
    lwz r6, 0x58(r15)
    extrwi r0, r4, 4, 4
    rlwinm r5, r4, 14, 26, 29
    mulli r3, r0, 0x14
    rlwinm r4, r4, 9, 23, 26
    lbzx r0, r16, r22
    addi r22, r22, 0x4
    add r4, r5, r4
    add r3, r6, r3
    stbux r0, r3, r4
    lbz r0, 0x1(r7)
    stb r0, 0x1(r3)
    lbz r0, 0x2(r7)
    stb r0, 0x2(r3)
    lbz r0, 0x3(r7)
    stb r0, 0x3(r3)
lbl_fn_805CFC20_00000BB0:
    lbz r0, 0x28(r1)
    cmpwi r0, 0x0
    beq lbl_fn_805CFC20_00000C0C
    lwz r6, 0x4c(r15)
    add r8, r16, r22
    lwz r7, 0x58(r15)
    extrwi r0, r6, 4, 4
    rlwinm r5, r6, 14, 26, 29
    mulli r4, r0, 0x14
    rlwinm r3, r6, 9, 23, 26
    rlwinm r6, r6, 26, 29, 29
    lbzx r0, r16, r22
    add r3, r5, r3
    add r4, r6, r4
    add r3, r7, r3
    stbux r0, r3, r4
    addi r22, r22, 0x4
    lbz r0, 0x1(r8)
    stb r0, 0x1(r3)
    lbz r0, 0x2(r8)
    stb r0, 0x2(r3)
    lbz r0, 0x3(r8)
    stb r0, 0x3(r3)
lbl_fn_805CFC20_00000C0C:
    lbz r0, 0x2c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_805CFC20_00000C70
    lwz r3, 0x4c(r15)
    add r9, r16, r22
    lwz r8, 0x58(r15)
    extrwi r0, r3, 4, 4
    rlwinm r7, r3, 27, 29, 29
    mulli r5, r0, 0x14
    lbzx r0, r16, r22
    rlwinm r6, r3, 26, 29, 29
    rlwinm r4, r3, 14, 26, 29
    rlwinm r3, r3, 9, 23, 26
    addi r22, r22, 0x4
    add r4, r4, r3
    add r3, r7, r6
    add r4, r5, r4
    add r3, r8, r3
    stbux r0, r3, r4
    lbz r0, 0x1(r9)
    stb r0, 0x1(r3)
    lbz r0, 0x2(r9)
    stb r0, 0x2(r3)
    lbz r0, 0x3(r9)
    stb r0, 0x3(r3)
lbl_fn_805CFC20_00000C70:
    clrlwi r3, r28, 24
    cmpwi cr1, r3, 0x0
    beq cr1, lbl_fn_805CFC20_00000ECC
    lwz r12, 0x4c(r15)
    add r5, r16, r22
    lwz r17, 0x58(r15)
    li r6, 0x0
    extrwi r0, r12, 4, 4
    rlwinm r11, r12, 28, 29, 29
    mulli r4, r0, 0x14
    rlwinm r9, r12, 26, 29, 29
    rlwinm r10, r12, 20, 29, 29
    rlwinm r8, r12, 27, 29, 29
    rlwinm r7, r12, 14, 26, 29
    rlwinm r0, r12, 9, 23, 26
    add r0, r7, r0
    rlwinm r14, r12, 19, 27, 29
    rlwinm r12, r12, 29, 29, 29
    add r8, r10, r8
    add r7, r11, r9
    add r4, r4, r0
    add r7, r8, r7
    add r0, r14, r12
    add r4, r7, r4
    add r0, r17, r0
    add r0, r4, r0
    ble cr1, lbl_fn_805CFC20_00000ECC
    cmpwi r3, 0x8
    subi r8, r3, 0x8
    ble lbl_fn_805CFC20_00000E78
    li r7, 0x0
    blt cr1, lbl_fn_805CFC20_00000D04
    lis r4, 0x8000
    subi r4, r4, 0x2
    cmpw r3, r4
    bgt lbl_fn_805CFC20_00000D04
    li r7, 0x1
lbl_fn_805CFC20_00000D04:
    cmpwi r7, 0x0
    beq lbl_fn_805CFC20_00000E78
    addi r7, r8, 0x7
    mr r3, r5
    srwi r7, r7, 3
    mr r4, r0
    mtctr r7
    cmpwi r8, 0x0
    ble lbl_fn_805CFC20_00000E78
lbl_fn_805CFC20_00000D28:
    lwz r7, 0x4(r3)
    addi r6, r6, 0x8
    lwz r8, 0x0(r3)
    stw r8, 0x0(r4)
    stw r7, 0x4(r4)
    lfs f0, 0x8(r3)
    stfs f0, 0x8(r4)
    lwz r7, 0x10(r3)
    lwz r8, 0xc(r3)
    stw r8, 0xc(r4)
    stw r7, 0x10(r4)
    lwz r7, 0x18(r3)
    lwz r8, 0x14(r3)
    stw r8, 0x14(r4)
    stw r7, 0x18(r4)
    lfs f0, 0x1c(r3)
    stfs f0, 0x1c(r4)
    lwz r7, 0x24(r3)
    lwz r8, 0x20(r3)
    stw r8, 0x20(r4)
    stw r7, 0x24(r4)
    lwz r7, 0x2c(r3)
    lwz r8, 0x28(r3)
    stw r8, 0x28(r4)
    stw r7, 0x2c(r4)
    lfs f0, 0x30(r3)
    stfs f0, 0x30(r4)
    lwz r7, 0x38(r3)
    lwz r8, 0x34(r3)
    stw r8, 0x34(r4)
    stw r7, 0x38(r4)
    lwz r7, 0x40(r3)
    lwz r8, 0x3c(r3)
    stw r8, 0x3c(r4)
    stw r7, 0x40(r4)
    lfs f0, 0x44(r3)
    stfs f0, 0x44(r4)
    lwz r7, 0x4c(r3)
    lwz r8, 0x48(r3)
    stw r8, 0x48(r4)
    stw r7, 0x4c(r4)
    lwz r7, 0x54(r3)
    lwz r8, 0x50(r3)
    stw r8, 0x50(r4)
    stw r7, 0x54(r4)
    lfs f0, 0x58(r3)
    stfs f0, 0x58(r4)
    lwz r7, 0x60(r3)
    lwz r8, 0x5c(r3)
    stw r8, 0x5c(r4)
    stw r7, 0x60(r4)
    lwz r7, 0x68(r3)
    lwz r8, 0x64(r3)
    stw r8, 0x64(r4)
    stw r7, 0x68(r4)
    lfs f0, 0x6c(r3)
    stfs f0, 0x6c(r4)
    lwz r7, 0x74(r3)
    lwz r8, 0x70(r3)
    stw r8, 0x70(r4)
    stw r7, 0x74(r4)
    lwz r7, 0x7c(r3)
    lwz r8, 0x78(r3)
    stw r8, 0x78(r4)
    stw r7, 0x7c(r4)
    lfs f0, 0x80(r3)
    stfs f0, 0x80(r4)
    lwz r7, 0x88(r3)
    lwz r8, 0x84(r3)
    stw r8, 0x84(r4)
    stw r7, 0x88(r4)
    lwz r7, 0x90(r3)
    lwz r8, 0x8c(r3)
    stw r8, 0x8c(r4)
    stw r7, 0x90(r4)
    lfs f0, 0x94(r3)
    stfs f0, 0x94(r4)
    lwz r7, 0x9c(r3)
    lwz r8, 0x98(r3)
    addi r3, r3, 0xa0
    stw r8, 0x98(r4)
    stw r7, 0x9c(r4)
    addi r4, r4, 0xa0
    bdnz lbl_fn_805CFC20_00000D28
lbl_fn_805CFC20_00000E78:
    mulli r7, r6, 0x14
    clrlwi r4, r28, 24
    subf r3, r6, r4
    add r5, r5, r7
    add r7, r0, r7
    mtctr r3
    cmpw r6, r4
    bge lbl_fn_805CFC20_00000ECC
lbl_fn_805CFC20_00000E98:
    lwz r0, 0x4(r5)
    lwz r3, 0x0(r5)
    stw r3, 0x0(r7)
    stw r0, 0x4(r7)
    lfs f0, 0x8(r5)
    stfs f0, 0x8(r7)
    lwz r0, 0x10(r5)
    lwz r3, 0xc(r5)
    addi r5, r5, 0x14
    stw r3, 0xc(r7)
    stw r0, 0x10(r7)
    addi r7, r7, 0x14
    bdnz lbl_fn_805CFC20_00000E98
lbl_fn_805CFC20_00000ECC:
    lwz r0, 0x3c(r16)
    clrlwi. r12, r29, 24
    extrwi r0, r0, 2, 17
    mulli r0, r0, 0x14
    add r22, r22, r0
    beq lbl_fn_805CFC20_00001250
    lwz r10, 0x4c(r15)
    lwz r0, 0x50(r15)
    extrwi r3, r10, 4, 4
    rlwinm r9, r10, 28, 29, 29
    mulli r4, r3, 0x14
    rlwinm r7, r10, 26, 29, 29
    extrwi r3, r0, 3, 14
    lwz r11, 0x58(r15)
    rlwinm r8, r10, 20, 29, 29
    rlwinm r6, r10, 27, 29, 29
    rlwinm r5, r10, 14, 26, 29
    rlwinm r0, r10, 9, 23, 26
    add r0, r5, r0
    add r6, r8, r6
    add r5, r9, r7
    cmplw cr1, r3, r12
    add r0, r4, r0
    rlwinm r7, r10, 29, 29, 29
    add r4, r6, r5
    add r4, r7, r4
    add r0, r11, r0
    add r7, r4, r0
    bge cr1, lbl_fn_805CFC20_0000103C
    subf r0, r3, r12
    subi r6, r12, 0x8
    cmplwi r0, 0x8
    ble lbl_fn_805CFC20_00001004
    bgt cr1, lbl_fn_805CFC20_00001004
    addi r0, r6, 0x7
    slwi r5, r3, 2
    subf r0, r3, r0
    li r4, 0x0
    srwi r0, r0, 3
    add r5, r7, r5
    mtctr r0
    cmplw r3, r6
    bge lbl_fn_805CFC20_00001004
lbl_fn_805CFC20_00000F78:
    stb r4, 0x0(r5)
    addi r3, r3, 0x8
    stb r4, 0x1(r5)
    stb r4, 0x2(r5)
    stb r4, 0x3(r5)
    stb r4, 0x4(r5)
    stb r4, 0x5(r5)
    stb r4, 0x6(r5)
    stb r4, 0x7(r5)
    stb r4, 0x8(r5)
    stb r4, 0x9(r5)
    stb r4, 0xa(r5)
    stb r4, 0xb(r5)
    stb r4, 0xc(r5)
    stb r4, 0xd(r5)
    stb r4, 0xe(r5)
    stb r4, 0xf(r5)
    stb r4, 0x10(r5)
    stb r4, 0x11(r5)
    stb r4, 0x12(r5)
    stb r4, 0x13(r5)
    stb r4, 0x14(r5)
    stb r4, 0x15(r5)
    stb r4, 0x16(r5)
    stb r4, 0x17(r5)
    stb r4, 0x18(r5)
    stb r4, 0x19(r5)
    stb r4, 0x1a(r5)
    stb r4, 0x1b(r5)
    stb r4, 0x1c(r5)
    stb r4, 0x1d(r5)
    stb r4, 0x1e(r5)
    stb r4, 0x1f(r5)
    addi r5, r5, 0x20
    bdnz lbl_fn_805CFC20_00000F78
lbl_fn_805CFC20_00001004:
    clrlwi r4, r29, 24
    slwi r6, r3, 2
    subf r0, r3, r4
    li r5, 0x0
    add r6, r7, r6
    mtctr r0
    cmplw r3, r4
    bge lbl_fn_805CFC20_0000103C
lbl_fn_805CFC20_00001024:
    stb r5, 0x0(r6)
    stb r5, 0x1(r6)
    stb r5, 0x2(r6)
    stb r5, 0x3(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_805CFC20_00001024
lbl_fn_805CFC20_0000103C:
    lwz r10, 0x4c(r15)
    clrlwi r4, r29, 24
    lwz r5, 0x50(r15)
    rlwimi r5, r29, 15, 14, 16
    extrwi r0, r10, 4, 4
    stw r5, 0x50(r15)
    mulli r3, r0, 0x14
    rlwinm r9, r10, 28, 29, 29
    rlwinm r7, r10, 26, 29, 29
    lwz r11, 0x58(r15)
    rlwinm r8, r10, 20, 29, 29
    rlwinm r6, r10, 27, 29, 29
    rlwinm r5, r10, 14, 26, 29
    rlwinm r0, r10, 9, 23, 26
    add r0, r5, r0
    add r6, r8, r6
    add r5, r9, r7
    cmpwi cr1, r4, 0x0
    add r0, r3, r0
    rlwinm r7, r10, 29, 29, 29
    add r3, r6, r5
    add r5, r16, r22
    add r3, r7, r3
    add r0, r11, r0
    add r0, r3, r0
    li r6, 0x0
    ble cr1, lbl_fn_805CFC20_00001250
    cmpwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_805CFC20_00001204
    li r7, 0x0
    blt cr1, lbl_fn_805CFC20_000010D0
    lis r3, 0x8000
    subi r3, r3, 0x2
    cmpw r4, r3
    bgt lbl_fn_805CFC20_000010D0
    li r7, 0x1
lbl_fn_805CFC20_000010D0:
    cmpwi r7, 0x0
    beq lbl_fn_805CFC20_00001204
    addi r7, r8, 0x7
    mr r3, r5
    srwi r7, r7, 3
    mr r4, r0
    mtctr r7
    cmpwi r8, 0x0
    ble lbl_fn_805CFC20_00001204
lbl_fn_805CFC20_000010F4:
    lbz r7, 0x0(r3)
    addi r6, r6, 0x8
    stb r7, 0x0(r4)
    lbz r7, 0x1(r3)
    stb r7, 0x1(r4)
    lbz r7, 0x2(r3)
    stb r7, 0x2(r4)
    lbz r7, 0x3(r3)
    stb r7, 0x3(r4)
    lbz r7, 0x4(r3)
    stb r7, 0x4(r4)
    lbz r7, 0x5(r3)
    stb r7, 0x5(r4)
    lbz r7, 0x6(r3)
    stb r7, 0x6(r4)
    lbz r7, 0x7(r3)
    stb r7, 0x7(r4)
    lbz r7, 0x8(r3)
    stb r7, 0x8(r4)
    lbz r7, 0x9(r3)
    stb r7, 0x9(r4)
    lbz r7, 0xa(r3)
    stb r7, 0xa(r4)
    lbz r7, 0xb(r3)
    stb r7, 0xb(r4)
    lbz r7, 0xc(r3)
    stb r7, 0xc(r4)
    lbz r7, 0xd(r3)
    stb r7, 0xd(r4)
    lbz r7, 0xe(r3)
    stb r7, 0xe(r4)
    lbz r7, 0xf(r3)
    stb r7, 0xf(r4)
    lbz r7, 0x10(r3)
    stb r7, 0x10(r4)
    lbz r7, 0x11(r3)
    stb r7, 0x11(r4)
    lbz r7, 0x12(r3)
    stb r7, 0x12(r4)
    lbz r7, 0x13(r3)
    stb r7, 0x13(r4)
    lbz r7, 0x14(r3)
    stb r7, 0x14(r4)
    lbz r7, 0x15(r3)
    stb r7, 0x15(r4)
    lbz r7, 0x16(r3)
    stb r7, 0x16(r4)
    lbz r7, 0x17(r3)
    stb r7, 0x17(r4)
    lbz r7, 0x18(r3)
    stb r7, 0x18(r4)
    lbz r7, 0x19(r3)
    stb r7, 0x19(r4)
    lbz r7, 0x1a(r3)
    stb r7, 0x1a(r4)
    lbz r7, 0x1b(r3)
    stb r7, 0x1b(r4)
    lbz r7, 0x1c(r3)
    stb r7, 0x1c(r4)
    lbz r7, 0x1d(r3)
    stb r7, 0x1d(r4)
    lbz r7, 0x1e(r3)
    stb r7, 0x1e(r4)
    lbz r7, 0x1f(r3)
    addi r3, r3, 0x20
    stb r7, 0x1f(r4)
    addi r4, r4, 0x20
    bdnz lbl_fn_805CFC20_000010F4
lbl_fn_805CFC20_00001204:
    clrlwi r4, r29, 24
    slwi r7, r6, 2
    subf r3, r6, r4
    add r5, r5, r7
    add r7, r0, r7
    mtctr r3
    cmpw r6, r4
    bge lbl_fn_805CFC20_00001250
lbl_fn_805CFC20_00001224:
    lbz r0, 0x0(r5)
    stb r0, 0x0(r7)
    lbz r0, 0x1(r5)
    stb r0, 0x1(r7)
    lbz r0, 0x2(r5)
    stb r0, 0x2(r7)
    lbz r0, 0x3(r5)
    addi r5, r5, 0x4
    stb r0, 0x3(r7)
    addi r7, r7, 0x4
    bdnz lbl_fn_805CFC20_00001224
lbl_fn_805CFC20_00001250:
    lwz r3, 0x3c(r16)
    clrlwi. r0, r30, 24
    rlwinm r3, r3, 19, 27, 29
    add r22, r22, r3
    beq lbl_fn_805CFC20_000015CC
    lwz r11, 0x4c(r15)
    lwz r3, 0x50(r15)
    extrwi r5, r11, 2, 12
    extrwi r4, r11, 4, 4
    add r4, r5, r4
    extrwi r3, r3, 5, 18
    mulli r10, r4, 0x14
    rlwinm r6, r11, 27, 29, 29
    rlwinm r4, r11, 20, 29, 29
    lwz r12, 0x58(r15)
    rlwinm r7, r11, 26, 29, 29
    add r4, r6, r4
    rlwinm r5, r11, 28, 29, 29
    add r6, r10, r7
    rlwinm r9, r11, 9, 23, 26
    rlwinm r8, r11, 14, 26, 29
    add r8, r9, r8
    add r5, r5, r4
    add r4, r8, r6
    rlwinm r7, r11, 29, 29, 29
    cmplw r3, r0
    rlwinm r6, r11, 19, 27, 29
    add r5, r7, r5
    add r4, r12, r4
    add r5, r6, r5
    add r14, r5, r4
    bge lbl_fn_805CFC20_00001438
    li r10, 0x0
    li r12, 0xff
    slwi r4, r3, 4
    li r9, 0xaf
    li r8, 0x77
    li r7, 0x57
    li r6, 0x61
    li r5, 0x81
    li r11, 0x4
    stb r12, 0x1c(r1)
    add r14, r14, r4
    subf r3, r3, r0
    stb r9, 0x1d(r1)
    stb r8, 0x20(r1)
    stb r7, 0x21(r1)
    stb r10, 0x1e(r1)
    stb r6, 0x1f(r1)
    stb r10, 0x22(r1)
    lwz r4, 0x1c(r1)
    stb r5, 0x23(r1)
    stb r12, 0x18(r1)
    lwz r5, 0x20(r1)
    stb r11, 0x19(r1)
    stb r12, 0x1a(r1)
    stb r10, 0x1b(r1)
    stb r10, 0x24(r1)
    stb r10, 0x25(r1)
    stb r10, 0x26(r1)
    stb r10, 0x27(r1)
    bge lbl_fn_805CFC20_00001438
    srwi. r0, r3, 2
    mtctr r0
    beq lbl_fn_805CFC20_00001404
lbl_fn_805CFC20_00001354:
    stb r12, 0x0(r14)
    stb r11, 0x1(r14)
    stb r12, 0x2(r14)
    stb r10, 0x3(r14)
    stw r4, 0x4(r14)
    stw r5, 0x8(r14)
    stb r10, 0xc(r14)
    stb r10, 0xd(r14)
    stb r10, 0xe(r14)
    stb r10, 0xf(r14)
    stb r12, 0x10(r14)
    stb r11, 0x11(r14)
    stb r12, 0x12(r14)
    stb r10, 0x13(r14)
    stw r4, 0x14(r14)
    stw r5, 0x18(r14)
    stb r10, 0x1c(r14)
    stb r10, 0x1d(r14)
    stb r10, 0x1e(r14)
    stb r10, 0x1f(r14)
    stb r12, 0x20(r14)
    stb r11, 0x21(r14)
    stb r12, 0x22(r14)
    stb r10, 0x23(r14)
    stw r4, 0x24(r14)
    stw r5, 0x28(r14)
    stb r10, 0x2c(r14)
    stb r10, 0x2d(r14)
    stb r10, 0x2e(r14)
    stb r10, 0x2f(r14)
    stb r12, 0x30(r14)
    stb r11, 0x31(r14)
    stb r12, 0x32(r14)
    stb r10, 0x33(r14)
    stw r4, 0x34(r14)
    stw r5, 0x38(r14)
    stb r10, 0x3c(r14)
    stb r10, 0x3d(r14)
    stb r10, 0x3e(r14)
    stb r10, 0x3f(r14)
    addi r14, r14, 0x40
    bdnz lbl_fn_805CFC20_00001354
    andi. r3, r3, 0x3
    beq lbl_fn_805CFC20_00001438
lbl_fn_805CFC20_00001404:
    mtctr r3
lbl_fn_805CFC20_00001408:
    stb r12, 0x0(r14)
    stb r11, 0x1(r14)
    stb r12, 0x2(r14)
    stb r10, 0x3(r14)
    stw r4, 0x4(r14)
    stw r5, 0x8(r14)
    stb r10, 0xc(r14)
    stb r10, 0xd(r14)
    stb r10, 0xe(r14)
    stb r10, 0xf(r14)
    addi r14, r14, 0x10
    bdnz lbl_fn_805CFC20_00001408
lbl_fn_805CFC20_00001438:
    lwz r10, 0x4c(r15)
    clrlwi. r3, r30, 24
    lwz r7, 0x50(r15)
    rlwimi r7, r30, 9, 18, 22
    extrwi r4, r10, 2, 12
    extrwi r0, r10, 4, 4
    add r0, r4, r0
    stw r7, 0x50(r15)
    mulli r9, r0, 0x14
    rlwinm r5, r10, 27, 29, 29
    rlwinm r0, r10, 20, 29, 29
    lwz r11, 0x58(r15)
    rlwinm r6, r10, 26, 29, 29
    add r0, r5, r0
    rlwinm r4, r10, 28, 29, 29
    add r5, r9, r6
    rlwinm r8, r10, 9, 23, 26
    rlwinm r7, r10, 14, 26, 29
    add r7, r8, r7
    add r4, r4, r0
    add r0, r7, r5
    rlwinm r6, r10, 29, 29, 29
    rlwinm r5, r10, 19, 27, 29
    add r4, r6, r4
    add r0, r11, r0
    add r4, r5, r4
    add r5, r16, r22
    add r4, r4, r0
    ble lbl_fn_805CFC20_000015CC
    srwi. r0, r3, 1
    mtctr r0
    beq lbl_fn_805CFC20_0000156C
lbl_fn_805CFC20_000014B8:
    lbz r0, 0x0(r5)
    stb r0, 0x0(r4)
    lbz r0, 0x1(r5)
    stb r0, 0x1(r4)
    lbz r0, 0x2(r5)
    stb r0, 0x2(r4)
    lbz r0, 0x3(r5)
    stb r0, 0x3(r4)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r4)
    lwz r0, 0x8(r5)
    stw r0, 0x8(r4)
    lbz r0, 0xc(r5)
    stb r0, 0xc(r4)
    lbz r0, 0xd(r5)
    stb r0, 0xd(r4)
    lbz r0, 0xe(r5)
    stb r0, 0xe(r4)
    lbz r0, 0xf(r5)
    stb r0, 0xf(r4)
    lbz r0, 0x10(r5)
    stb r0, 0x10(r4)
    lbz r0, 0x11(r5)
    stb r0, 0x11(r4)
    lbz r0, 0x12(r5)
    stb r0, 0x12(r4)
    lbz r0, 0x13(r5)
    stb r0, 0x13(r4)
    lwz r0, 0x14(r5)
    stw r0, 0x14(r4)
    lwz r0, 0x18(r5)
    stw r0, 0x18(r4)
    lbz r0, 0x1c(r5)
    stb r0, 0x1c(r4)
    lbz r0, 0x1d(r5)
    stb r0, 0x1d(r4)
    lbz r0, 0x1e(r5)
    stb r0, 0x1e(r4)
    lbz r0, 0x1f(r5)
    addi r5, r5, 0x20
    stb r0, 0x1f(r4)
    addi r4, r4, 0x20
    bdnz lbl_fn_805CFC20_000014B8
    andi. r3, r3, 0x1
    beq lbl_fn_805CFC20_000015CC
lbl_fn_805CFC20_0000156C:
    mtctr r3
lbl_fn_805CFC20_00001570:
    lbz r0, 0x0(r5)
    stb r0, 0x0(r4)
    lbz r0, 0x1(r5)
    stb r0, 0x1(r4)
    lbz r0, 0x2(r5)
    stb r0, 0x2(r4)
    lbz r0, 0x3(r5)
    stb r0, 0x3(r4)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r4)
    lwz r0, 0x8(r5)
    stw r0, 0x8(r4)
    lbz r0, 0xc(r5)
    stb r0, 0xc(r4)
    lbz r0, 0xd(r5)
    stb r0, 0xd(r4)
    lbz r0, 0xe(r5)
    stb r0, 0xe(r4)
    lbz r0, 0xf(r5)
    addi r5, r5, 0x10
    stb r0, 0xf(r4)
    addi r4, r4, 0x10
    bdnz lbl_fn_805CFC20_00001570
lbl_fn_805CFC20_000015CC:
    lbz r0, 0x2b(r1)
    lwz r3, 0x3c(r16)
    cmpwi r0, 0x0
    rlwinm r0, r3, 18, 23, 27
    add r22, r22, r0
    beq lbl_fn_805CFC20_00001644
    lwz r6, 0x4c(r15)
    add r9, r16, r22
    lwz r8, 0x58(r15)
    rlwinm r3, r6, 20, 29, 29
    rlwinm r0, r6, 27, 29, 29
    add r3, r3, r0
    rlwinm r5, r6, 26, 29, 29
    add r3, r5, r3
    extrwi r4, r6, 4, 4
    rlwinm r7, r6, 14, 26, 29
    rlwinm r6, r6, 9, 23, 26
    mulli r5, r4, 0x14
    lbzx r0, r16, r22
    add r4, r7, r6
    add r3, r8, r3
    add r4, r5, r4
    addi r22, r22, 0x4
    stbux r0, r3, r4
    lbz r0, 0x1(r9)
    stb r0, 0x1(r3)
    lbz r0, 0x2(r9)
    stb r0, 0x2(r3)
    lbz r0, 0x3(r9)
    stb r0, 0x3(r3)
lbl_fn_805CFC20_00001644:
    lbz r0, 0x2a(r1)
    cmpwi r0, 0x0
    beq lbl_fn_805CFC20_000016B4
    lwz r4, 0x4c(r15)
    add r10, r16, r22
    lwz r9, 0x58(r15)
    extrwi r5, r4, 4, 4
    rlwinm r3, r4, 28, 29, 29
    mulli r5, r5, 0x14
    rlwinm r0, r4, 26, 29, 29
    rlwinm r8, r4, 20, 29, 29
    rlwinm r7, r4, 27, 29, 29
    rlwinm r6, r4, 14, 26, 29
    rlwinm r4, r4, 9, 23, 26
    add r3, r3, r0
    add r7, r8, r7
    add r4, r6, r4
    lbzx r0, r16, r22
    add r3, r7, r3
    add r4, r5, r4
    add r3, r9, r3
    stbux r0, r3, r4
    lbz r0, 0x1(r10)
    stb r0, 0x1(r3)
    lbz r0, 0x2(r10)
    stb r0, 0x2(r3)
    lbz r0, 0x3(r10)
    stb r0, 0x3(r3)
lbl_fn_805CFC20_000016B4:
    addi r11, r1, 0x80
    mr r3, r15
    bl _restgpr_14
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_805D0DB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_805D0DB0_00001764
    lis r12, lbl_807990C0@ha
    addi r12, r12, lbl_807990C0@l
    stw r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lwz r4, 0x58(r30)
    cmpwi r4, 0x0
    beq lbl_fn_805D0DB0_0000172C
    lis r3, lbl_807CA1F8@ha
    lwz r3, lbl_807CA1F8@l(r3)
    bl fn_8061A100
    li r0, 0x0
    stw r0, 0x58(r30)
lbl_fn_805D0DB0_0000172C:
    lis r4, fn_805CD940@ha
    addi r3, r30, 0x3c
    addi r4, r4, fn_805CD940@l
    li r5, 0x4
    li r6, 0x4
    bl fn_806959D8
    addic. r3, r30, 0x18
    beq lbl_fn_805D0DB0_00001754
    li r4, 0x0
    bl fn_805D9BE0
lbl_fn_805D0DB0_00001754:
    cmpwi r31, 0x0
    ble lbl_fn_805D0DB0_00001764
    mr r3, r30
    bl dtor_80084684
lbl_fn_805D0DB0_00001764:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805D0E60(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_20
    lwz r0, 0x4c(r3)
    mr r20, r3
    lbz r28, 0x6b(r1)
    mr r21, r4
    srwi r11, r0, 28
    lbz r29, 0x6f(r1)
    cmplw r11, r4
    lbz r30, 0x73(r1)
    lbz r31, 0x77(r1)
    mr r22, r5
    mr r23, r6
    mr r24, r7
    mr r25, r8
    mr r26, r9
    mr r27, r10
    blt lbl_fn_805D0E60_0000184C
    extrwi r4, r0, 4, 4
    cmplw r4, r5
    blt lbl_fn_805D0E60_0000184C
    extrwi r4, r0, 4, 8
    cmplw r4, r6
    blt lbl_fn_805D0E60_0000184C
    extrwi r4, r0, 5, 18
    cmplw r4, r7
    blt lbl_fn_805D0E60_0000184C
    extrwi r4, r0, 1, 17
    cmplw r4, r8
    blt lbl_fn_805D0E60_0000184C
    extrwi r4, r0, 3, 14
    cmplw r4, r9
    blt lbl_fn_805D0E60_0000184C
    extrwi r4, r0, 2, 12
    cmplw r4, r10
    blt lbl_fn_805D0E60_0000184C
    extrwi r4, r0, 1, 23
    cmplw r4, r28
    blt lbl_fn_805D0E60_0000184C
    extrwi r4, r0, 1, 24
    cmplw r4, r29
    blt lbl_fn_805D0E60_0000184C
    extrwi r4, r0, 1, 25
    cmplw r4, r30
    blt lbl_fn_805D0E60_0000184C
    extrwi r0, r0, 1, 26
    cmplw r0, r31
    bge lbl_fn_805D0E60_00001E00
lbl_fn_805D0E60_0000184C:
    lwz r4, 0x58(r3)
    cmpwi r4, 0x0
    beq lbl_fn_805D0E60_00001884
    lis r3, lbl_807CA1F8@ha
    lwz r3, lbl_807CA1F8@l(r3)
    bl fn_8061A100
    lwz r3, 0x4c(r20)
    li r4, 0x0
    lwz r0, 0x50(r20)
    clrlwi r3, r3, 27
    stw r4, 0x58(r20)
    clrlwi r0, r0, 27
    stw r3, 0x4c(r20)
    stw r0, 0x50(r20)
lbl_fn_805D0E60_00001884:
    add r5, r27, r22
    add r0, r25, r28
    mulli r6, r5, 0x14
    add r4, r31, r29
    add r3, r26, r23
    add r0, r30, r0
    add r3, r4, r3
    lis r7, lbl_807CA1F8@ha
    add r0, r3, r0
    clrlslwi r5, r21, 24, 5
    slwi r0, r0, 2
    clrlslwi r4, r24, 24, 4
    add r0, r6, r0
    lwz r3, lbl_807CA1F8@l(r7)
    add r0, r5, r0
    add r4, r4, r0
    bl fn_8061A0F0
    cmpwi r3, 0x0
    stw r3, 0x58(r20)
    beq lbl_fn_805D0E60_00001E00
    lwz r0, 0x4c(r20)
    rlwimi r0, r21, 28, 0, 3
    rlwimi r0, r22, 24, 4, 7
    lwz r4, 0x50(r20)
    rlwimi r0, r23, 20, 8, 11
    li r7, 0x0
    rlwimi r0, r27, 18, 12, 13
    rlwimi r0, r26, 15, 14, 16
    rlwimi r0, r25, 14, 17, 17
    rlwimi r0, r24, 9, 18, 22
    rlwimi r0, r28, 8, 23, 23
    rlwimi r0, r29, 7, 24, 24
    rlwimi r0, r30, 6, 25, 25
    rlwimi r0, r31, 5, 26, 26
    stw r0, 0x4c(r20)
    rlwimi r4, r0, 0, 4, 7
    rlwinm r0, r0, 9, 23, 26
    stw r4, 0x50(r20)
    extrwi. r6, r4, 4, 4
    add r8, r3, r0
    beq lbl_fn_805D0E60_00001A6C
    cmplwi r6, 0x8
    subi r5, r6, 0x8
    ble lbl_fn_805D0E60_00001A18
    addi r0, r5, 0x7
    lis r4, lbl_80764570@ha
    lis r3, lbl_80764574@ha
    mr r9, r8
    srwi r0, r0, 3
    lfs f1, lbl_80764570@l(r4)
    lfs f0, lbl_80764574@l(r3)
    mtctr r0
    cmplwi r5, 0x0
    ble lbl_fn_805D0E60_00001A18
lbl_fn_805D0E60_0000195C:
    stfs f1, 0x0(r9)
    addi r7, r7, 0x8
    stfs f1, 0x4(r9)
    stfs f1, 0x8(r9)
    stfs f0, 0xc(r9)
    stfs f0, 0x10(r9)
    stfs f1, 0x14(r9)
    stfs f1, 0x18(r9)
    stfs f1, 0x1c(r9)
    stfs f0, 0x20(r9)
    stfs f0, 0x24(r9)
    stfs f1, 0x28(r9)
    stfs f1, 0x2c(r9)
    stfs f1, 0x30(r9)
    stfs f0, 0x34(r9)
    stfs f0, 0x38(r9)
    stfs f1, 0x3c(r9)
    stfs f1, 0x40(r9)
    stfs f1, 0x44(r9)
    stfs f0, 0x48(r9)
    stfs f0, 0x4c(r9)
    stfs f1, 0x50(r9)
    stfs f1, 0x54(r9)
    stfs f1, 0x58(r9)
    stfs f0, 0x5c(r9)
    stfs f0, 0x60(r9)
    stfs f1, 0x64(r9)
    stfs f1, 0x68(r9)
    stfs f1, 0x6c(r9)
    stfs f0, 0x70(r9)
    stfs f0, 0x74(r9)
    stfs f1, 0x78(r9)
    stfs f1, 0x7c(r9)
    stfs f1, 0x80(r9)
    stfs f0, 0x84(r9)
    stfs f0, 0x88(r9)
    stfs f1, 0x8c(r9)
    stfs f1, 0x90(r9)
    stfs f1, 0x94(r9)
    stfs f0, 0x98(r9)
    stfs f0, 0x9c(r9)
    addi r9, r9, 0xa0
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    bdnz lbl_fn_805D0E60_0000195C
lbl_fn_805D0E60_00001A18:
    mulli r5, r7, 0x14
    lis r4, lbl_80764570@ha
    lis r3, lbl_80764574@ha
    lfs f1, lbl_80764570@l(r4)
    subf r0, r7, r6
    lfs f0, lbl_80764574@l(r3)
    add r3, r8, r5
    mtctr r0
    cmplw r7, r6
    bge lbl_fn_805D0E60_00001A6C
lbl_fn_805D0E60_00001A40:
    stfs f1, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f1, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    addi r3, r3, 0x14
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    bdnz lbl_fn_805D0E60_00001A40
lbl_fn_805D0E60_00001A6C:
    lwz r11, 0x4c(r20)
    li r4, 0x0
    lwz r5, 0x4c(r20)
    extrwi r0, r11, 4, 4
    lwz r3, 0x50(r20)
    mulli r7, r0, 0x14
    rlwimi r3, r5, 0, 12, 13
    rlwinm r10, r11, 28, 29, 29
    stw r3, 0x50(r20)
    rlwinm r6, r11, 26, 29, 29
    lwz r21, 0x58(r20)
    rlwinm r9, r11, 20, 29, 29
    rlwinm r8, r11, 27, 29, 29
    rlwinm r5, r11, 14, 26, 29
    rlwinm r0, r11, 9, 23, 26
    rlwinm r12, r11, 19, 27, 29
    rlwinm r11, r11, 29, 29, 29
    add r5, r5, r0
    add r8, r9, r8
    add r6, r10, r6
    add r0, r12, r11
    extrwi. r3, r3, 2, 12
    add r5, r7, r5
    add r6, r8, r6
    add r0, r21, r0
    add r5, r6, r5
    add r8, r5, r0
    beq lbl_fn_805D0E60_00001C20
    cmplwi r3, 0x8
    subi r7, r3, 0x8
    ble lbl_fn_805D0E60_00001BCC
    addi r0, r7, 0x7
    lis r6, lbl_80764570@ha
    lis r5, lbl_80764574@ha
    mr r9, r8
    srwi r0, r0, 3
    lfs f1, lbl_80764570@l(r6)
    lfs f0, lbl_80764574@l(r5)
    mtctr r0
    cmplwi r7, 0x0
    ble lbl_fn_805D0E60_00001BCC
lbl_fn_805D0E60_00001B10:
    stfs f1, 0x0(r9)
    addi r4, r4, 0x8
    stfs f1, 0x4(r9)
    stfs f1, 0x8(r9)
    stfs f0, 0xc(r9)
    stfs f0, 0x10(r9)
    stfs f1, 0x14(r9)
    stfs f1, 0x18(r9)
    stfs f1, 0x1c(r9)
    stfs f0, 0x20(r9)
    stfs f0, 0x24(r9)
    stfs f1, 0x28(r9)
    stfs f1, 0x2c(r9)
    stfs f1, 0x30(r9)
    stfs f0, 0x34(r9)
    stfs f0, 0x38(r9)
    stfs f1, 0x3c(r9)
    stfs f1, 0x40(r9)
    stfs f1, 0x44(r9)
    stfs f0, 0x48(r9)
    stfs f0, 0x4c(r9)
    stfs f1, 0x50(r9)
    stfs f1, 0x54(r9)
    stfs f1, 0x58(r9)
    stfs f0, 0x5c(r9)
    stfs f0, 0x60(r9)
    stfs f1, 0x64(r9)
    stfs f1, 0x68(r9)
    stfs f1, 0x6c(r9)
    stfs f0, 0x70(r9)
    stfs f0, 0x74(r9)
    stfs f1, 0x78(r9)
    stfs f1, 0x7c(r9)
    stfs f1, 0x80(r9)
    stfs f0, 0x84(r9)
    stfs f0, 0x88(r9)
    stfs f1, 0x8c(r9)
    stfs f1, 0x90(r9)
    stfs f1, 0x94(r9)
    stfs f0, 0x98(r9)
    stfs f0, 0x9c(r9)
    addi r9, r9, 0xa0
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    bdnz lbl_fn_805D0E60_00001B10
lbl_fn_805D0E60_00001BCC:
    mulli r7, r4, 0x14
    lis r6, lbl_80764570@ha
    lis r5, lbl_80764574@ha
    lfs f1, lbl_80764570@l(r6)
    subf r0, r4, r3
    lfs f0, lbl_80764574@l(r5)
    add r5, r8, r7
    mtctr r0
    cmplw r4, r3
    bge lbl_fn_805D0E60_00001C20
lbl_fn_805D0E60_00001BF4:
    stfs f1, 0x0(r5)
    stfs f1, 0x4(r5)
    stfs f1, 0x8(r5)
    stfs f0, 0xc(r5)
    stfs f0, 0x10(r5)
    addi r5, r5, 0x14
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    bdnz lbl_fn_805D0E60_00001BF4
lbl_fn_805D0E60_00001C20:
    lwz r3, 0x4c(r20)
    lwz r0, 0x50(r20)
    rlwimi r0, r3, 0, 23, 23
    stw r0, 0x50(r20)
    extrwi. r0, r0, 1, 23
    beq lbl_fn_805D0E60_00001C70
    lwz r5, 0x4c(r20)
    li r3, 0x1
    lwz r7, 0x58(r20)
    li r0, 0x0
    extrwi r4, r5, 4, 4
    rlwinm r6, r5, 14, 26, 29
    mulli r4, r4, 0x14
    rlwinm r5, r5, 9, 23, 26
    add r5, r6, r5
    add r4, r7, r4
    stbux r3, r4, r5
    stb r3, 0x1(r4)
    stb r0, 0x2(r4)
    stb r0, 0x3(r4)
lbl_fn_805D0E60_00001C70:
    lwz r3, 0x4c(r20)
    lwz r0, 0x50(r20)
    rlwimi r0, r3, 0, 24, 24
    stw r0, 0x50(r20)
    extrwi. r0, r0, 1, 24
    beq lbl_fn_805D0E60_00001CB8
    lwz r5, 0x4c(r20)
    li r7, -0x1
    lwz r6, 0x58(r20)
    extrwi r0, r5, 4, 4
    rlwinm r4, r5, 14, 26, 29
    mulli r3, r0, 0x14
    rlwinm r0, r5, 9, 23, 26
    rlwinm r5, r5, 26, 29, 29
    add r0, r4, r0
    add r3, r5, r3
    add r0, r6, r0
    stwx r7, r3, r0
lbl_fn_805D0E60_00001CB8:
    lwz r3, 0x4c(r20)
    lwz r0, 0x50(r20)
    rlwimi r0, r3, 0, 17, 17
    stw r0, 0x50(r20)
    extrwi. r0, r0, 1, 17
    beq lbl_fn_805D0E60_00001D20
    lwz r9, 0x4c(r20)
    li r5, 0xe4
    lwz r10, 0x58(r20)
    li r4, 0xc0
    extrwi r0, r9, 4, 4
    rlwinm r3, r9, 14, 26, 29
    mulli r6, r0, 0x14
    rlwinm r8, r9, 27, 29, 29
    rlwinm r0, r9, 9, 23, 26
    rlwinm r7, r9, 26, 29, 29
    add r3, r3, r0
    add r0, r8, r7
    add r7, r6, r3
    li r3, 0xd5
    add r6, r10, r0
    stbux r5, r6, r7
    li r0, 0xea
    stb r4, 0x1(r6)
    stb r3, 0x2(r6)
    stb r0, 0x3(r6)
lbl_fn_805D0E60_00001D20:
    lwz r3, 0x4c(r20)
    lwz r0, 0x50(r20)
    rlwimi r0, r3, 0, 25, 25
    stw r0, 0x50(r20)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_805D0E60_00001D88
    lwz r9, 0x4c(r20)
    li r3, 0x77
    lwz r10, 0x58(r20)
    li r0, 0x0
    rlwinm r7, r9, 20, 29, 29
    rlwinm r4, r9, 27, 29, 29
    add r4, r7, r4
    rlwinm r6, r9, 26, 29, 29
    add r4, r6, r4
    extrwi r5, r9, 4, 4
    mulli r6, r5, 0x14
    rlwinm r8, r9, 14, 26, 29
    rlwinm r7, r9, 9, 23, 26
    add r4, r10, r4
    add r5, r8, r7
    add r5, r6, r5
    stbux r3, r4, r5
    stb r0, 0x1(r4)
    stb r0, 0x2(r4)
    stb r0, 0x3(r4)
lbl_fn_805D0E60_00001D88:
    lwz r3, 0x4c(r20)
    lwz r0, 0x50(r20)
    rlwimi r0, r3, 0, 26, 26
    stw r0, 0x50(r20)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_805D0E60_00001E00
    lwz r7, 0x4c(r20)
    li r5, 0x1
    lwz r11, 0x58(r20)
    li r4, 0x4
    extrwi r0, r7, 4, 4
    rlwinm r6, r7, 28, 29, 29
    rlwinm r3, r7, 26, 29, 29
    rlwinm r10, r7, 20, 29, 29
    rlwinm r9, r7, 27, 29, 29
    rlwinm r8, r7, 14, 26, 29
    rlwinm r7, r7, 9, 23, 26
    add r6, r6, r3
    add r7, r8, r7
    add r9, r10, r9
    mulli r8, r0, 0x14
    li r3, 0x5
    add r6, r9, r6
    li r0, 0xf
    add r7, r8, r7
    add r6, r11, r6
    stbux r5, r6, r7
    stb r4, 0x1(r6)
    stb r3, 0x2(r6)
    stb r0, 0x3(r6)
lbl_fn_805D0E60_00001E00:
    addi r11, r1, 0x60
    bl _restgpr_20
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
