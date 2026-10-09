#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _savegpr_22(void);
extern void dtor_80084684(void);
extern void fn_8016F824(void);
extern void fn_8016FDCC(void);
extern void fn_8017039C(void);
extern void fn_805B3124(void);
extern void fn_805B325C(void);
extern void fn_805B33BC(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_80680CF8(void);

/* External data declarations */
extern u8 lbl_80763C28[];

/* Small data declarations */
extern u32 lbl_8087E6E8;
extern u32 lbl_8087E6E9;
extern u32 lbl_80888368;
extern u32 lbl_80888370;
extern u32 lbl_8088837C;
extern u32 lbl_80888380;
extern u32 lbl_80888384;
extern u32 lbl_80888388;

/* Function declarations */
void fn_805AF618(void);
void fn_805B01C4(void);
void fn_805B0D70(void);

asm void fn_805AF618(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    stw r0, 0x1d4(r1)
    addi r11, r1, 0x160
    stfd f31, 0x1c0(r1)
    psq_st f31, 0x1c8(r1), 0, 0
    stfd f30, 0x1b0(r1)
    psq_st f30, 0x1b8(r1), 0, 0
    stfd f29, 0x1a0(r1)
    psq_st f29, 0x1a8(r1), 0, 0
    stfd f28, 0x190(r1)
    psq_st f28, 0x198(r1), 0, 0
    stfd f27, 0x180(r1)
    psq_st f27, 0x188(r1), 0, 0
    stfd f26, 0x170(r1)
    psq_st f26, 0x178(r1), 0, 0
    stfd f25, 0x160(r1)
    psq_st f25, 0x168(r1), 0, 0
    bl _savegpr_22
    lfs f0, lbl_80888368
    lis r0, 0x4330
    mr r23, r3
    stw r0, 0x128(r1)
    mr r26, r6
    mr r24, r4
    stw r0, 0x130(r1)
    mr r25, r5
    mr r8, r23
    rlwinm r6, r6, 0, 29, 29
    stfs f0, 0x104(r1)
    li r9, 0x0
    li r10, 0x0
    stfs f0, 0x108(r1)
    stfs f0, 0x10c(r1)
    b lbl_fn_805AF618_00000140
lbl_fn_805AF618_0000008C:
    cmplwi r6, 0x4
    lwz r11, 0x250(r8)
    bne lbl_fn_805AF618_000000B8
    lwz r4, 0x218(r3)
    cmpwi r4, 0x0
    beq lbl_fn_805AF618_000000AC
    lwz r0, 0x8c(r4)
    b lbl_fn_805AF618_000000B0
lbl_fn_805AF618_000000AC:
    li r0, 0x0
lbl_fn_805AF618_000000B0:
    cmplw r11, r0
    beq lbl_fn_805AF618_00000138
lbl_fn_805AF618_000000B8:
    lwz r0, 0x38(r11)
    li r4, 0x0
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_805AF618_000000FC
    lwz r0, 0x48(r11)
    li r5, 0x1
    cmpwi r0, 0x2
    bne lbl_fn_805AF618_000000F0
    lwz r0, 0x7e0(r11)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_805AF618_000000F0
    li r5, 0x0
lbl_fn_805AF618_000000F0:
    cmpwi r5, 0x0
    beq lbl_fn_805AF618_000000FC
    li r4, 0x1
lbl_fn_805AF618_000000FC:
    cmpwi r4, 0x0
    beq lbl_fn_805AF618_00000138
    lfs f3, 0x104(r1)
    addi r9, r9, 0x1
    lfs f0, 0x528(r11)
    lfs f5, 0x108(r1)
    fadds f6, f3, f0
    lfs f4, 0x52c(r11)
    lfs f3, 0x10c(r1)
    lfs f0, 0x530(r11)
    fadds f4, f5, f4
    stfs f6, 0x104(r1)
    fadds f0, f3, f0
    stfs f4, 0x108(r1)
    stfs f0, 0x10c(r1)
lbl_fn_805AF618_00000138:
    addi r8, r8, 0x4
    addi r10, r10, 0x1
lbl_fn_805AF618_00000140:
    lbz r0, 0x24c(r3)
    cmplw r10, r0
    blt lbl_fn_805AF618_0000008C
    cmpwi r9, 0x0
    ble lbl_fn_805AF618_00000198
    xoris r0, r9, 0x8000
    stw r0, 0x12c(r1)
    lis r3, lbl_80763C28@ha
    lfs f5, lbl_80888370
    lfd f3, lbl_80763C28@l(r3)
    lfd f0, 0x128(r1)
    lfs f4, 0x104(r1)
    fsubs f6, f0, f3
    lfs f3, 0x108(r1)
    lfs f0, 0x10c(r1)
    fdivs f5, f5, f6
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x104(r1)
    stfs f3, 0x108(r1)
    stfs f0, 0x10c(r1)
lbl_fn_805AF618_00000198:
    lfs f0, lbl_80888368
    mr r3, r25
    stfs f0, 0xf8(r1)
    li r28, 0x0
    stfs f0, 0xfc(r1)
    stfs f0, 0x100(r1)
    b lbl_fn_805AF618_000001EC
lbl_fn_805AF618_000001B4:
    lfs f3, 0xf8(r1)
    addi r28, r28, 0x1
    lfs f0, 0x4(r4)
    addi r3, r3, 0x4
    lfs f5, 0xfc(r1)
    fadds f6, f3, f0
    lfs f4, 0x8(r4)
    lfs f3, 0x100(r1)
    lfs f0, 0xc(r4)
    fadds f4, f5, f4
    stfs f6, 0xf8(r1)
    fadds f0, f3, f0
    stfs f4, 0xfc(r1)
    stfs f0, 0x100(r1)
lbl_fn_805AF618_000001EC:
    lwz r4, 0x10(r3)
    cmpwi r4, 0x0
    bne lbl_fn_805AF618_000001B4
    cmpwi r28, 0x0
    ble lbl_fn_805AF618_00000244
    xoris r0, r28, 0x8000
    stw r0, 0x134(r1)
    lis r3, lbl_80763C28@ha
    lfs f5, lbl_80888370
    lfd f3, lbl_80763C28@l(r3)
    lfd f0, 0x130(r1)
    lfs f4, 0xf8(r1)
    fsubs f6, f0, f3
    lfs f3, 0xfc(r1)
    lfs f0, 0x100(r1)
    fdivs f5, f5, f6
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f0, 0x100(r1)
lbl_fn_805AF618_00000244:
    lfs f3, 0x100(r1)
    cmpwi r7, 0x3
    lfs f0, 0x10c(r1)
    lfs f5, 0xfc(r1)
    fsubs f6, f3, f0
    lfs f4, 0x108(r1)
    lfs f3, 0xf8(r1)
    lfs f0, 0x104(r1)
    fsubs f4, f5, f4
    stfs f6, 0xf4(r1)
    fsubs f0, f3, f0
    stfs f4, 0xf0(r1)
    stfs f0, 0xec(r1)
    bne lbl_fn_805AF618_000003A8
    lfs f3, lbl_80888368
    addi r3, r1, 0xec
    lfs f0, lbl_80888370
    addi r4, r1, 0xb0
    stfs f3, 0xb0(r1)
    addi r5, r1, 0xd4
    stfs f0, 0xb4(r1)
    stfs f3, 0xb8(r1)
    bl fn_805F99B0
    lfs f4, 0x100(r1)
    addi r4, r1, 0xa4
    lfs f0, 0x10c(r1)
    addi r3, r1, 0x110
    lfs f3, 0xfc(r1)
    addi r6, r1, 0x80
    fadds f6, f4, f0
    lfs f0, 0x108(r1)
    lfs f11, lbl_8088837C
    addi r5, r1, 0x11c
    fadds f7, f3, f0
    lfs f3, 0xf8(r1)
    fmuls f9, f6, f11
    lfs f0, 0x104(r1)
    fmuls f10, f7, f11
    lfs f5, 0xdc(r1)
    fadds f8, f3, f0
    lfs f4, 0xd8(r1)
    fsubs f12, f9, f5
    lfs f3, 0xd4(r1)
    fmuls f11, f8, f11
    lfs f0, lbl_80888380
    fadds f25, f9, f5
    addi r8, r1, 0x5c
    fsubs f13, f10, f4
    addi r7, r1, 0xe0
    fadds f26, f10, f4
    stfs f8, 0x8c(r1)
    fmr f2, f12
    stfs f13, 0xa8(r1)
    fsubs f13, f11, f3
    fadds f27, f11, f3
    stfs f2, 0x118(r1)
    fmuls f5, f5, f0
    fmuls f4, f4, f0
    stfs f13, 0xa4(r1)
    fmuls f0, f3, f0
    fmr f2, f25
    psq_l f1, 0x0(r4), 0, 0
    stfs f27, 0x80(r1)
    stfs f2, 0x124(r1)
    fmr f2, f5
    stfs f26, 0x84(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x5c(r1)
    stfs f4, 0x60(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f7, 0x90(r1)
    stfs f6, 0x94(r1)
    stfs f11, 0x98(r1)
    stfs f10, 0x9c(r1)
    stfs f9, 0xa0(r1)
    stfs f12, 0xac(r1)
    stfs f8, 0x68(r1)
    stfs f7, 0x6c(r1)
    stfs f6, 0x70(r1)
    stfs f11, 0x74(r1)
    stfs f10, 0x78(r1)
    stfs f9, 0x7c(r1)
    stfs f25, 0x88(r1)
    stfs f5, 0x64(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0xe8(r1)
    b lbl_fn_805AF618_00000404
lbl_fn_805AF618_000003A8:
    cmpwi r7, 0x4
    bne lbl_fn_805AF618_00000404
    addi r4, r1, 0xf8
    lfs f2, 0x100(r1)
    stfs f2, 0x118(r1)
    addi r3, r1, 0x110
    psq_l f1, 0x0(r4), 0, 0
    addi r5, r1, 0x104
    psq_st f1, 0x0(r3), 0, 0
    addi r4, r1, 0x11c
    lfs f2, 0x10c(r1)
    addi r6, r1, 0x50
    psq_l f1, 0x0(r5), 0, 0
    addi r3, r1, 0xe0
    stfs f2, 0x124(r1)
    fmr f2, f6
    stfs f0, 0x50(r1)
    stfs f4, 0x54(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f6, 0x58(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xe8(r1)
lbl_fn_805AF618_00000404:
    lis r3, lbl_80763C28@ha
    li r4, 0x0
    addi r31, r1, 0xcc
    addi r0, r1, 0xc0
    stw r4, 0xc8(r1)
    mr r30, r23
    lfd f27, lbl_80763C28@l(r3)
    rlwinm r29, r26, 0, 29, 29
    stw r4, 0xcc(r1)
    li r27, 0x0
    lfs f26, lbl_80888388
    lis r22, 0x4178
    stw r31, 0xd0(r1)
    lfs f25, lbl_80888384
    stw r4, 0xbc(r1)
    stw r4, 0xc0(r1)
    stw r0, 0xc4(r1)
    b lbl_fn_805AF618_0000061C
lbl_fn_805AF618_0000044C:
    cmplwi r29, 0x4
    lwz r26, 0x250(r30)
    bne lbl_fn_805AF618_00000478
    lwz r3, 0x218(r23)
    cmpwi r3, 0x0
    beq lbl_fn_805AF618_0000046C
    lwz r0, 0x8c(r3)
    b lbl_fn_805AF618_00000470
lbl_fn_805AF618_0000046C:
    li r0, 0x0
lbl_fn_805AF618_00000470:
    cmplw r26, r0
    beq lbl_fn_805AF618_00000614
lbl_fn_805AF618_00000478:
    lwz r0, 0x38(r26)
    li r3, 0x0
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_805AF618_000004A8
    lwz r0, 0x48(r26)
    cmpwi r0, 0x2
    bne lbl_fn_805AF618_000004AC
    lwz r0, 0x7e0(r26)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_805AF618_000004AC
lbl_fn_805AF618_000004A8:
    li r3, 0x1
lbl_fn_805AF618_000004AC:
    cmpwi r3, 0x0
    bne lbl_fn_805AF618_00000614
    addi r3, r1, 0xe0
    bl fn_805F9920
    lfs f6, 0x118(r1)
    fmr f28, f1
    lfs f0, 0x530(r26)
    addi r3, r1, 0xe0
    lfs f5, 0x114(r1)
    addi r4, r1, 0x44
    lfs f4, 0x52c(r26)
    fsubs f6, f6, f0
    lfs f0, 0x528(r26)
    lfs f3, 0x110(r1)
    fsubs f4, f5, f4
    stfs f6, 0x4c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x48(r1)
    stfs f0, 0x44(r1)
    bl fn_805F9990
    fneg f0, f1
    lwz r4, 0xcc(r1)
    addi r3, r1, 0xcc
    fdivs f28, f0, f28
    b lbl_fn_805AF618_00000534
lbl_fn_805AF618_00000510:
    lfs f0, 0xc(r4)
    fcmpo cr0, f0, f28
    mfcr r0
    srwi. r0, r0, 31
    bne lbl_fn_805AF618_00000530
    mr r3, r4
    lwz r4, 0x0(r4)
    b lbl_fn_805AF618_00000534
lbl_fn_805AF618_00000530:
    lwz r4, 0x4(r4)
lbl_fn_805AF618_00000534:
    cmpwi r4, 0x0
    bne lbl_fn_805AF618_00000510
    cmplw r3, r31
    beq lbl_fn_805AF618_00000558
    lfs f0, 0xc(r3)
    fcmpo cr0, f28, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_805AF618_0000055C
lbl_fn_805AF618_00000558:
    addi r3, r1, 0xcc
lbl_fn_805AF618_0000055C:
    cmplw r3, r31
    beq lbl_fn_805AF618_0000059C
    bl fn_80680CF8
    addi r0, r22, 0x749f
    mulhw r0, r0, r3
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x12c(r1)
    lfd f0, 0x128(r1)
    fsubs f0, f0, f27
    fdivs f0, f0, f26
    fmadds f28, f25, f0, f28
lbl_fn_805AF618_0000059C:
    stfs f28, 0x30(r1)
    addi r3, r1, 0xc8
    addi r4, r1, 0x30
    addi r5, r1, 0x10
    stw r26, 0x34(r1)
    addi r6, r1, 0xb
    addi r7, r1, 0xa
    bl fn_805B33BC
    lwz r4, 0x10(r1)
    cmpwi r4, 0x0
    beq lbl_fn_805AF618_000005E0
    lfs f3, 0xc(r4)
    lfs f0, 0x30(r1)
    fcmpo cr0, f3, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_805AF618_00000608
lbl_fn_805AF618_000005E0:
    lbz r5, 0xb(r1)
    mr r4, r3
    lbz r6, 0xa(r1)
    addi r3, r1, 0xc8
    addi r7, r1, 0x30
    bl fn_805B3124
    lbz r0, lbl_8087E6E8
    stw r3, 0x20(r1)
    stb r0, 0x24(r1)
    b lbl_fn_805AF618_00000614
lbl_fn_805AF618_00000608:
    lbz r0, lbl_8087E6E9
    stw r4, 0x20(r1)
    stb r0, 0x24(r1)
lbl_fn_805AF618_00000614:
    addi r30, r30, 0x4
    addi r27, r27, 0x1
lbl_fn_805AF618_0000061C:
    lbz r0, 0x24c(r23)
    cmplw r27, r0
    blt lbl_fn_805AF618_0000044C
    cmpwi r28, 0x0
    li r26, 0x0
    ble lbl_fn_805AF618_000007CC
    lis r3, lbl_80763C28@ha
    lfs f31, 0x118(r1)
    lfs f26, 0x114(r1)
    addi r23, r1, 0xc0
    lfs f27, 0x110(r1)
    lis r27, 0x4178
    lfd f28, lbl_80763C28@l(r3)
    lfs f29, lbl_80888388
    lfs f30, lbl_80888384
    b lbl_fn_805AF618_000007C4
lbl_fn_805AF618_0000065C:
    addi r3, r1, 0xe0
    bl fn_805F9920
    lwz r5, 0x10(r25)
    fmr f25, f1
    addi r3, r1, 0xe0
    addi r4, r1, 0x38
    lfs f4, 0xc(r5)
    lfs f3, 0x8(r5)
    lfs f0, 0x4(r5)
    fsubs f4, f31, f4
    fsubs f3, f26, f3
    fsubs f0, f27, f0
    stfs f4, 0x40(r1)
    stfs f0, 0x38(r1)
    stfs f3, 0x3c(r1)
    bl fn_805F9990
    fneg f0, f1
    lwz r4, 0xc0(r1)
    addi r3, r1, 0xc0
    fdivs f25, f0, f25
    b lbl_fn_805AF618_000006D4
lbl_fn_805AF618_000006B0:
    lfs f0, 0xc(r4)
    fcmpo cr0, f0, f25
    mfcr r0
    srwi. r0, r0, 31
    bne lbl_fn_805AF618_000006D0
    mr r3, r4
    lwz r4, 0x0(r4)
    b lbl_fn_805AF618_000006D4
lbl_fn_805AF618_000006D0:
    lwz r4, 0x4(r4)
lbl_fn_805AF618_000006D4:
    cmpwi r4, 0x0
    bne lbl_fn_805AF618_000006B0
    cmplw r3, r23
    beq lbl_fn_805AF618_000006F8
    lfs f0, 0xc(r3)
    fcmpo cr0, f25, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_805AF618_000006FC
lbl_fn_805AF618_000006F8:
    addi r3, r1, 0xc0
lbl_fn_805AF618_000006FC:
    cmplw r3, r23
    beq lbl_fn_805AF618_0000073C
    bl fn_80680CF8
    addi r0, r27, 0x749f
    mulhw r0, r0, r3
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x134(r1)
    lfd f0, 0x130(r1)
    fsubs f0, f0, f28
    fdivs f0, f0, f29
    fmadds f25, f30, f0, f25
lbl_fn_805AF618_0000073C:
    stfs f25, 0x28(r1)
    addi r3, r1, 0xbc
    lwz r7, 0x10(r25)
    addi r4, r1, 0x28
    addi r5, r1, 0xc
    addi r6, r1, 0x9
    lwz r0, 0x0(r7)
    addi r7, r1, 0x8
    stw r0, 0x2c(r1)
    bl fn_805B33BC
    lwz r4, 0xc(r1)
    cmpwi r4, 0x0
    beq lbl_fn_805AF618_00000788
    lfs f3, 0xc(r4)
    lfs f0, 0x28(r1)
    fcmpo cr0, f3, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_805AF618_000007B0
lbl_fn_805AF618_00000788:
    lbz r5, 0x9(r1)
    mr r4, r3
    lbz r6, 0x8(r1)
    addi r3, r1, 0xbc
    addi r7, r1, 0x28
    bl fn_805B3124
    lbz r0, lbl_8087E6E8
    stw r3, 0x18(r1)
    stb r0, 0x1c(r1)
    b lbl_fn_805AF618_000007BC
lbl_fn_805AF618_000007B0:
    lbz r0, lbl_8087E6E9
    stw r4, 0x18(r1)
    stb r0, 0x1c(r1)
lbl_fn_805AF618_000007BC:
    addi r25, r25, 0x4
    addi r26, r26, 0x1
lbl_fn_805AF618_000007C4:
    cmpw r26, r28
    blt lbl_fn_805AF618_0000065C
lbl_fn_805AF618_000007CC:
    lwz r22, 0xbc(r1)
    lwz r0, 0xc8(r1)
    cmplw r0, r22
    bge lbl_fn_805AF618_000007E0
    mr r22, r0
lbl_fn_805AF618_000007E0:
    lwz r23, 0xd0(r1)
    li r26, 0x0
    lwz r25, 0xc4(r1)
    b lbl_fn_805AF618_000008D4
lbl_fn_805AF618_000007F0:
    cmpwi r24, 0x0
    bne lbl_fn_805AF618_0000080C
    lwz r3, 0x10(r23)
    li r5, 0x0
    lwz r4, 0x10(r25)
    bl fn_8016F824
    b lbl_fn_805AF618_00000840
lbl_fn_805AF618_0000080C:
    cmpwi r24, 0x1
    bne lbl_fn_805AF618_00000828
    lwz r3, 0x10(r23)
    li r5, 0x0
    lwz r4, 0x10(r25)
    bl fn_8016FDCC
    b lbl_fn_805AF618_00000840
lbl_fn_805AF618_00000828:
    cmpwi r24, 0x2
    bne lbl_fn_805AF618_00000840
    lwz r3, 0x10(r23)
    li r5, 0x0
    lwz r4, 0x10(r25)
    bl fn_8017039C
lbl_fn_805AF618_00000840:
    lwz r3, 0x4(r23)
    cmpwi r3, 0x0
    beq lbl_fn_805AF618_00000870
    b lbl_fn_805AF618_00000854
lbl_fn_805AF618_00000850:
    mr r3, r0
lbl_fn_805AF618_00000854:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805AF618_00000850
    mr r23, r3
    b lbl_fn_805AF618_00000888
    b lbl_fn_805AF618_00000870
lbl_fn_805AF618_0000086C:
    mr r23, r3
lbl_fn_805AF618_00000870:
    lwz r0, 0x8(r23)
    clrrwi r3, r0, 1
    lwz r0, 0x0(r3)
    cmplw r23, r0
    bne lbl_fn_805AF618_0000086C
    mr r23, r3
lbl_fn_805AF618_00000888:
    lwz r3, 0x4(r25)
    cmpwi r3, 0x0
    beq lbl_fn_805AF618_000008B8
    b lbl_fn_805AF618_0000089C
lbl_fn_805AF618_00000898:
    mr r3, r0
lbl_fn_805AF618_0000089C:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805AF618_00000898
    mr r25, r3
    b lbl_fn_805AF618_000008D0
    b lbl_fn_805AF618_000008B8
lbl_fn_805AF618_000008B4:
    mr r25, r3
lbl_fn_805AF618_000008B8:
    lwz r0, 0x8(r25)
    clrrwi r3, r0, 1
    lwz r0, 0x0(r3)
    cmplw r25, r0
    bne lbl_fn_805AF618_000008B4
    mr r25, r3
lbl_fn_805AF618_000008D0:
    addi r26, r26, 0x1
lbl_fn_805AF618_000008D4:
    cmplw r26, r22
    blt lbl_fn_805AF618_000007F0
    addic. r22, r1, 0xbc
    beq lbl_fn_805AF618_00000A1C
    beq lbl_fn_805AF618_00000A1C
    beq lbl_fn_805AF618_00000A1C
    beq lbl_fn_805AF618_00000A1C
    lwz r23, 0xc0(r1)
    cmpwi r23, 0x0
    beq lbl_fn_805AF618_00000A1C
    lwz r24, 0x0(r23)
    cmpwi r24, 0x0
    beq lbl_fn_805AF618_00000988
    lwz r25, 0x0(r24)
    cmpwi r25, 0x0
    beq lbl_fn_805AF618_00000944
    lwz r4, 0x0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805AF618_00000928
    mr r3, r22
    bl fn_805B325C
lbl_fn_805AF618_00000928:
    lwz r4, 0x4(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805AF618_0000093C
    mr r3, r22
    bl fn_805B325C
lbl_fn_805AF618_0000093C:
    mr r3, r25
    bl dtor_80084684
lbl_fn_805AF618_00000944:
    lwz r25, 0x4(r24)
    cmpwi r25, 0x0
    beq lbl_fn_805AF618_00000980
    lwz r4, 0x0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805AF618_00000964
    mr r3, r22
    bl fn_805B325C
lbl_fn_805AF618_00000964:
    lwz r4, 0x4(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805AF618_00000978
    mr r3, r22
    bl fn_805B325C
lbl_fn_805AF618_00000978:
    mr r3, r25
    bl dtor_80084684
lbl_fn_805AF618_00000980:
    mr r3, r24
    bl dtor_80084684
lbl_fn_805AF618_00000988:
    lwz r24, 0x4(r23)
    cmpwi r24, 0x0
    beq lbl_fn_805AF618_00000A14
    lwz r25, 0x0(r24)
    cmpwi r25, 0x0
    beq lbl_fn_805AF618_000009D0
    lwz r4, 0x0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805AF618_000009B4
    mr r3, r22
    bl fn_805B325C
lbl_fn_805AF618_000009B4:
    lwz r4, 0x4(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805AF618_000009C8
    mr r3, r22
    bl fn_805B325C
lbl_fn_805AF618_000009C8:
    mr r3, r25
    bl dtor_80084684
lbl_fn_805AF618_000009D0:
    lwz r25, 0x4(r24)
    cmpwi r25, 0x0
    beq lbl_fn_805AF618_00000A0C
    lwz r4, 0x0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805AF618_000009F0
    mr r3, r22
    bl fn_805B325C
lbl_fn_805AF618_000009F0:
    lwz r4, 0x4(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805AF618_00000A04
    mr r3, r22
    bl fn_805B325C
lbl_fn_805AF618_00000A04:
    mr r3, r25
    bl dtor_80084684
lbl_fn_805AF618_00000A0C:
    mr r3, r24
    bl dtor_80084684
lbl_fn_805AF618_00000A14:
    mr r3, r23
    bl dtor_80084684
lbl_fn_805AF618_00000A1C:
    addic. r22, r1, 0xc8
    beq lbl_fn_805AF618_00000B5C
    beq lbl_fn_805AF618_00000B5C
    beq lbl_fn_805AF618_00000B5C
    beq lbl_fn_805AF618_00000B5C
    lwz r23, 0xcc(r1)
    cmpwi r23, 0x0
    beq lbl_fn_805AF618_00000B5C
    lwz r24, 0x0(r23)
    cmpwi r24, 0x0
    beq lbl_fn_805AF618_00000AC8
    lwz r25, 0x0(r24)
    cmpwi r25, 0x0
    beq lbl_fn_805AF618_00000A84
    lwz r4, 0x0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805AF618_00000A68
    mr r3, r22
    bl fn_805B325C
lbl_fn_805AF618_00000A68:
    lwz r4, 0x4(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805AF618_00000A7C
    mr r3, r22
    bl fn_805B325C
lbl_fn_805AF618_00000A7C:
    mr r3, r25
    bl dtor_80084684
lbl_fn_805AF618_00000A84:
    lwz r25, 0x4(r24)
    cmpwi r25, 0x0
    beq lbl_fn_805AF618_00000AC0
    lwz r4, 0x0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805AF618_00000AA4
    mr r3, r22
    bl fn_805B325C
lbl_fn_805AF618_00000AA4:
    lwz r4, 0x4(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805AF618_00000AB8
    mr r3, r22
    bl fn_805B325C
lbl_fn_805AF618_00000AB8:
    mr r3, r25
    bl dtor_80084684
lbl_fn_805AF618_00000AC0:
    mr r3, r24
    bl dtor_80084684
lbl_fn_805AF618_00000AC8:
    lwz r24, 0x4(r23)
    cmpwi r24, 0x0
    beq lbl_fn_805AF618_00000B54
    lwz r25, 0x0(r24)
    cmpwi r25, 0x0
    beq lbl_fn_805AF618_00000B10
    lwz r4, 0x0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805AF618_00000AF4
    mr r3, r22
    bl fn_805B325C
lbl_fn_805AF618_00000AF4:
    lwz r4, 0x4(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805AF618_00000B08
    mr r3, r22
    bl fn_805B325C
lbl_fn_805AF618_00000B08:
    mr r3, r25
    bl dtor_80084684
lbl_fn_805AF618_00000B10:
    lwz r25, 0x4(r24)
    cmpwi r25, 0x0
    beq lbl_fn_805AF618_00000B4C
    lwz r4, 0x0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805AF618_00000B30
    mr r3, r22
    bl fn_805B325C
lbl_fn_805AF618_00000B30:
    lwz r4, 0x4(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805AF618_00000B44
    mr r3, r22
    bl fn_805B325C
lbl_fn_805AF618_00000B44:
    mr r3, r25
    bl dtor_80084684
lbl_fn_805AF618_00000B4C:
    mr r3, r24
    bl dtor_80084684
lbl_fn_805AF618_00000B54:
    mr r3, r23
    bl dtor_80084684
lbl_fn_805AF618_00000B5C:
    addi r11, r1, 0x160
    psq_l f31, 0x1c8(r1), 0, 0
    lfd f31, 0x1c0(r1)
    psq_l f30, 0x1b8(r1), 0, 0
    lfd f30, 0x1b0(r1)
    psq_l f29, 0x1a8(r1), 0, 0
    lfd f29, 0x1a0(r1)
    psq_l f28, 0x198(r1), 0, 0
    lfd f28, 0x190(r1)
    psq_l f27, 0x188(r1), 0, 0
    lfd f27, 0x180(r1)
    psq_l f26, 0x178(r1), 0, 0
    lfd f26, 0x170(r1)
    psq_l f25, 0x168(r1), 0, 0
    lfd f25, 0x160(r1)
    bl _restgpr_22
    lwz r0, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}

asm void fn_805B01C4(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    stw r0, 0x1d4(r1)
    addi r11, r1, 0x160
    stfd f31, 0x1c0(r1)
    psq_st f31, 0x1c8(r1), 0, 0
    stfd f30, 0x1b0(r1)
    psq_st f30, 0x1b8(r1), 0, 0
    stfd f29, 0x1a0(r1)
    psq_st f29, 0x1a8(r1), 0, 0
    stfd f28, 0x190(r1)
    psq_st f28, 0x198(r1), 0, 0
    stfd f27, 0x180(r1)
    psq_st f27, 0x188(r1), 0, 0
    stfd f26, 0x170(r1)
    psq_st f26, 0x178(r1), 0, 0
    stfd f25, 0x160(r1)
    psq_st f25, 0x168(r1), 0, 0
    bl _savegpr_22
    lfs f0, lbl_80888368
    lis r0, 0x4330
    mr r23, r3
    stw r0, 0x128(r1)
    mr r26, r6
    mr r24, r4
    stw r0, 0x130(r1)
    mr r25, r5
    mr r8, r23
    rlwinm r6, r6, 0, 29, 29
    stfs f0, 0x104(r1)
    li r9, 0x0
    li r10, 0x0
    stfs f0, 0x108(r1)
    stfs f0, 0x10c(r1)
    b lbl_fn_805B01C4_00000CEC
lbl_fn_805B01C4_00000C38:
    cmplwi r6, 0x4
    lwz r11, 0x250(r8)
    bne lbl_fn_805B01C4_00000C64
    lwz r4, 0x218(r3)
    cmpwi r4, 0x0
    beq lbl_fn_805B01C4_00000C58
    lwz r0, 0x8c(r4)
    b lbl_fn_805B01C4_00000C5C
lbl_fn_805B01C4_00000C58:
    li r0, 0x0
lbl_fn_805B01C4_00000C5C:
    cmplw r11, r0
    beq lbl_fn_805B01C4_00000CE4
lbl_fn_805B01C4_00000C64:
    lwz r0, 0x38(r11)
    li r4, 0x0
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_805B01C4_00000CA8
    lwz r0, 0x48(r11)
    li r5, 0x1
    cmpwi r0, 0x2
    bne lbl_fn_805B01C4_00000C9C
    lwz r0, 0x7e0(r11)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_805B01C4_00000C9C
    li r5, 0x0
lbl_fn_805B01C4_00000C9C:
    cmpwi r5, 0x0
    beq lbl_fn_805B01C4_00000CA8
    li r4, 0x1
lbl_fn_805B01C4_00000CA8:
    cmpwi r4, 0x0
    beq lbl_fn_805B01C4_00000CE4
    lfs f3, 0x104(r1)
    addi r9, r9, 0x1
    lfs f0, 0x528(r11)
    lfs f5, 0x108(r1)
    fadds f6, f3, f0
    lfs f4, 0x52c(r11)
    lfs f3, 0x10c(r1)
    lfs f0, 0x530(r11)
    fadds f4, f5, f4
    stfs f6, 0x104(r1)
    fadds f0, f3, f0
    stfs f4, 0x108(r1)
    stfs f0, 0x10c(r1)
lbl_fn_805B01C4_00000CE4:
    addi r8, r8, 0x4
    addi r10, r10, 0x1
lbl_fn_805B01C4_00000CEC:
    lbz r0, 0x24c(r3)
    cmplw r10, r0
    blt lbl_fn_805B01C4_00000C38
    cmpwi r9, 0x0
    ble lbl_fn_805B01C4_00000D44
    xoris r0, r9, 0x8000
    stw r0, 0x12c(r1)
    lis r3, lbl_80763C28@ha
    lfs f5, lbl_80888370
    lfd f3, lbl_80763C28@l(r3)
    lfd f0, 0x128(r1)
    lfs f4, 0x104(r1)
    fsubs f6, f0, f3
    lfs f3, 0x108(r1)
    lfs f0, 0x10c(r1)
    fdivs f5, f5, f6
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x104(r1)
    stfs f3, 0x108(r1)
    stfs f0, 0x10c(r1)
lbl_fn_805B01C4_00000D44:
    lfs f0, lbl_80888368
    mr r3, r25
    stfs f0, 0xf8(r1)
    li r28, 0x0
    stfs f0, 0xfc(r1)
    stfs f0, 0x100(r1)
    b lbl_fn_805B01C4_00000D98
lbl_fn_805B01C4_00000D60:
    lfs f3, 0xf8(r1)
    addi r28, r28, 0x1
    lfs f0, 0x4(r4)
    addi r3, r3, 0x4
    lfs f5, 0xfc(r1)
    fadds f6, f3, f0
    lfs f4, 0x8(r4)
    lfs f3, 0x100(r1)
    lfs f0, 0xc(r4)
    fadds f4, f5, f4
    stfs f6, 0xf8(r1)
    fadds f0, f3, f0
    stfs f4, 0xfc(r1)
    stfs f0, 0x100(r1)
lbl_fn_805B01C4_00000D98:
    lwz r4, 0x10(r3)
    cmpwi r4, 0x0
    bne lbl_fn_805B01C4_00000D60
    cmpwi r28, 0x0
    ble lbl_fn_805B01C4_00000DF0
    xoris r0, r28, 0x8000
    stw r0, 0x134(r1)
    lis r3, lbl_80763C28@ha
    lfs f5, lbl_80888370
    lfd f3, lbl_80763C28@l(r3)
    lfd f0, 0x130(r1)
    lfs f4, 0xf8(r1)
    fsubs f6, f0, f3
    lfs f3, 0xfc(r1)
    lfs f0, 0x100(r1)
    fdivs f5, f5, f6
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f0, 0x100(r1)
lbl_fn_805B01C4_00000DF0:
    lfs f3, 0x100(r1)
    cmpwi r7, 0x3
    lfs f0, 0x10c(r1)
    lfs f5, 0xfc(r1)
    fsubs f6, f3, f0
    lfs f4, 0x108(r1)
    lfs f3, 0xf8(r1)
    lfs f0, 0x104(r1)
    fsubs f4, f5, f4
    stfs f6, 0xf4(r1)
    fsubs f0, f3, f0
    stfs f4, 0xf0(r1)
    stfs f0, 0xec(r1)
    bne lbl_fn_805B01C4_00000F54
    lfs f3, lbl_80888368
    addi r3, r1, 0xec
    lfs f0, lbl_80888370
    addi r4, r1, 0xb0
    stfs f3, 0xb0(r1)
    addi r5, r1, 0xd4
    stfs f0, 0xb4(r1)
    stfs f3, 0xb8(r1)
    bl fn_805F99B0
    lfs f4, 0x100(r1)
    addi r4, r1, 0xa4
    lfs f0, 0x10c(r1)
    addi r3, r1, 0x110
    lfs f3, 0xfc(r1)
    addi r6, r1, 0x80
    fadds f6, f4, f0
    lfs f0, 0x108(r1)
    lfs f11, lbl_8088837C
    addi r5, r1, 0x11c
    fadds f7, f3, f0
    lfs f3, 0xf8(r1)
    fmuls f9, f6, f11
    lfs f0, 0x104(r1)
    fmuls f10, f7, f11
    lfs f5, 0xdc(r1)
    fadds f8, f3, f0
    lfs f4, 0xd8(r1)
    fsubs f12, f9, f5
    lfs f3, 0xd4(r1)
    fmuls f11, f8, f11
    lfs f0, lbl_80888380
    fadds f25, f9, f5
    addi r8, r1, 0x5c
    fsubs f13, f10, f4
    addi r7, r1, 0xe0
    fadds f26, f10, f4
    stfs f8, 0x8c(r1)
    fmr f2, f12
    stfs f13, 0xa8(r1)
    fsubs f13, f11, f3
    fadds f27, f11, f3
    stfs f2, 0x118(r1)
    fmuls f5, f5, f0
    fmuls f4, f4, f0
    stfs f13, 0xa4(r1)
    fmuls f0, f3, f0
    fmr f2, f25
    psq_l f1, 0x0(r4), 0, 0
    stfs f27, 0x80(r1)
    stfs f2, 0x124(r1)
    fmr f2, f5
    stfs f26, 0x84(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x5c(r1)
    stfs f4, 0x60(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f7, 0x90(r1)
    stfs f6, 0x94(r1)
    stfs f11, 0x98(r1)
    stfs f10, 0x9c(r1)
    stfs f9, 0xa0(r1)
    stfs f12, 0xac(r1)
    stfs f8, 0x68(r1)
    stfs f7, 0x6c(r1)
    stfs f6, 0x70(r1)
    stfs f11, 0x74(r1)
    stfs f10, 0x78(r1)
    stfs f9, 0x7c(r1)
    stfs f25, 0x88(r1)
    stfs f5, 0x64(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0xe8(r1)
    b lbl_fn_805B01C4_00000FB0
lbl_fn_805B01C4_00000F54:
    cmpwi r7, 0x4
    bne lbl_fn_805B01C4_00000FB0
    addi r4, r1, 0xf8
    lfs f2, 0x100(r1)
    stfs f2, 0x118(r1)
    addi r3, r1, 0x110
    psq_l f1, 0x0(r4), 0, 0
    addi r5, r1, 0x104
    psq_st f1, 0x0(r3), 0, 0
    addi r4, r1, 0x11c
    lfs f2, 0x10c(r1)
    addi r6, r1, 0x50
    psq_l f1, 0x0(r5), 0, 0
    addi r3, r1, 0xe0
    stfs f2, 0x124(r1)
    fmr f2, f6
    stfs f0, 0x50(r1)
    stfs f4, 0x54(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f6, 0x58(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xe8(r1)
lbl_fn_805B01C4_00000FB0:
    lis r3, lbl_80763C28@ha
    li r4, 0x0
    addi r31, r1, 0xcc
    addi r0, r1, 0xc0
    stw r4, 0xc8(r1)
    mr r30, r23
    lfd f27, lbl_80763C28@l(r3)
    rlwinm r29, r26, 0, 29, 29
    stw r4, 0xcc(r1)
    li r27, 0x0
    lfs f26, lbl_80888388
    lis r22, 0x4178
    stw r31, 0xd0(r1)
    lfs f25, lbl_80888384
    stw r4, 0xbc(r1)
    stw r4, 0xc0(r1)
    stw r0, 0xc4(r1)
    b lbl_fn_805B01C4_000011C8
lbl_fn_805B01C4_00000FF8:
    cmplwi r29, 0x4
    lwz r26, 0x250(r30)
    bne lbl_fn_805B01C4_00001024
    lwz r3, 0x218(r23)
    cmpwi r3, 0x0
    beq lbl_fn_805B01C4_00001018
    lwz r0, 0x8c(r3)
    b lbl_fn_805B01C4_0000101C
lbl_fn_805B01C4_00001018:
    li r0, 0x0
lbl_fn_805B01C4_0000101C:
    cmplw r26, r0
    beq lbl_fn_805B01C4_000011C0
lbl_fn_805B01C4_00001024:
    lwz r0, 0x38(r26)
    li r3, 0x0
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_805B01C4_00001054
    lwz r0, 0x48(r26)
    cmpwi r0, 0x2
    bne lbl_fn_805B01C4_00001058
    lwz r0, 0x7e0(r26)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_805B01C4_00001058
lbl_fn_805B01C4_00001054:
    li r3, 0x1
lbl_fn_805B01C4_00001058:
    cmpwi r3, 0x0
    bne lbl_fn_805B01C4_000011C0
    addi r3, r1, 0xe0
    bl fn_805F9920
    lfs f6, 0x118(r1)
    fmr f28, f1
    lfs f0, 0x530(r26)
    addi r3, r1, 0xe0
    lfs f5, 0x114(r1)
    addi r4, r1, 0x44
    lfs f4, 0x52c(r26)
    fsubs f6, f6, f0
    lfs f0, 0x528(r26)
    lfs f3, 0x110(r1)
    fsubs f4, f5, f4
    stfs f6, 0x4c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x48(r1)
    stfs f0, 0x44(r1)
    bl fn_805F9990
    fneg f0, f1
    lwz r4, 0xcc(r1)
    addi r3, r1, 0xcc
    fdivs f28, f0, f28
    b lbl_fn_805B01C4_000010E0
lbl_fn_805B01C4_000010BC:
    lfs f0, 0xc(r4)
    fcmpo cr0, f0, f28
    mfcr r0
    srwi. r0, r0, 31
    bne lbl_fn_805B01C4_000010DC
    mr r3, r4
    lwz r4, 0x0(r4)
    b lbl_fn_805B01C4_000010E0
lbl_fn_805B01C4_000010DC:
    lwz r4, 0x4(r4)
lbl_fn_805B01C4_000010E0:
    cmpwi r4, 0x0
    bne lbl_fn_805B01C4_000010BC
    cmplw r3, r31
    beq lbl_fn_805B01C4_00001104
    lfs f0, 0xc(r3)
    fcmpo cr0, f28, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_805B01C4_00001108
lbl_fn_805B01C4_00001104:
    addi r3, r1, 0xcc
lbl_fn_805B01C4_00001108:
    cmplw r3, r31
    beq lbl_fn_805B01C4_00001148
    bl fn_80680CF8
    addi r0, r22, 0x749f
    mulhw r0, r0, r3
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x12c(r1)
    lfd f0, 0x128(r1)
    fsubs f0, f0, f27
    fdivs f0, f0, f26
    fmadds f28, f25, f0, f28
lbl_fn_805B01C4_00001148:
    stfs f28, 0x30(r1)
    addi r3, r1, 0xc8
    addi r4, r1, 0x30
    addi r5, r1, 0x10
    stw r26, 0x34(r1)
    addi r6, r1, 0xb
    addi r7, r1, 0xa
    bl fn_805B33BC
    lwz r4, 0x10(r1)
    cmpwi r4, 0x0
    beq lbl_fn_805B01C4_0000118C
    lfs f3, 0xc(r4)
    lfs f0, 0x30(r1)
    fcmpo cr0, f3, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_805B01C4_000011B4
lbl_fn_805B01C4_0000118C:
    lbz r5, 0xb(r1)
    mr r4, r3
    lbz r6, 0xa(r1)
    addi r3, r1, 0xc8
    addi r7, r1, 0x30
    bl fn_805B3124
    lbz r0, lbl_8087E6E8
    stw r3, 0x20(r1)
    stb r0, 0x24(r1)
    b lbl_fn_805B01C4_000011C0
lbl_fn_805B01C4_000011B4:
    lbz r0, lbl_8087E6E9
    stw r4, 0x20(r1)
    stb r0, 0x24(r1)
lbl_fn_805B01C4_000011C0:
    addi r30, r30, 0x4
    addi r27, r27, 0x1
lbl_fn_805B01C4_000011C8:
    lbz r0, 0x24c(r23)
    cmplw r27, r0
    blt lbl_fn_805B01C4_00000FF8
    cmpwi r28, 0x0
    li r26, 0x0
    ble lbl_fn_805B01C4_00001378
    lis r3, lbl_80763C28@ha
    lfs f31, 0x118(r1)
    lfs f26, 0x114(r1)
    addi r23, r1, 0xc0
    lfs f27, 0x110(r1)
    lis r27, 0x4178
    lfd f28, lbl_80763C28@l(r3)
    lfs f29, lbl_80888388
    lfs f30, lbl_80888384
    b lbl_fn_805B01C4_00001370
lbl_fn_805B01C4_00001208:
    addi r3, r1, 0xe0
    bl fn_805F9920
    lwz r5, 0x10(r25)
    fmr f25, f1
    addi r3, r1, 0xe0
    addi r4, r1, 0x38
    lfs f4, 0xc(r5)
    lfs f3, 0x8(r5)
    lfs f0, 0x4(r5)
    fsubs f4, f31, f4
    fsubs f3, f26, f3
    fsubs f0, f27, f0
    stfs f4, 0x40(r1)
    stfs f0, 0x38(r1)
    stfs f3, 0x3c(r1)
    bl fn_805F9990
    fneg f0, f1
    lwz r4, 0xc0(r1)
    addi r3, r1, 0xc0
    fdivs f25, f0, f25
    b lbl_fn_805B01C4_00001280
lbl_fn_805B01C4_0000125C:
    lfs f0, 0xc(r4)
    fcmpo cr0, f0, f25
    mfcr r0
    srwi. r0, r0, 31
    bne lbl_fn_805B01C4_0000127C
    mr r3, r4
    lwz r4, 0x0(r4)
    b lbl_fn_805B01C4_00001280
lbl_fn_805B01C4_0000127C:
    lwz r4, 0x4(r4)
lbl_fn_805B01C4_00001280:
    cmpwi r4, 0x0
    bne lbl_fn_805B01C4_0000125C
    cmplw r3, r23
    beq lbl_fn_805B01C4_000012A4
    lfs f0, 0xc(r3)
    fcmpo cr0, f25, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_805B01C4_000012A8
lbl_fn_805B01C4_000012A4:
    addi r3, r1, 0xc0
lbl_fn_805B01C4_000012A8:
    cmplw r3, r23
    beq lbl_fn_805B01C4_000012E8
    bl fn_80680CF8
    addi r0, r27, 0x749f
    mulhw r0, r0, r3
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x134(r1)
    lfd f0, 0x130(r1)
    fsubs f0, f0, f28
    fdivs f0, f0, f29
    fmadds f25, f30, f0, f25
lbl_fn_805B01C4_000012E8:
    stfs f25, 0x28(r1)
    addi r3, r1, 0xbc
    lwz r7, 0x10(r25)
    addi r4, r1, 0x28
    addi r5, r1, 0xc
    addi r6, r1, 0x9
    lwz r0, 0x0(r7)
    addi r7, r1, 0x8
    stw r0, 0x2c(r1)
    bl fn_805B33BC
    lwz r4, 0xc(r1)
    cmpwi r4, 0x0
    beq lbl_fn_805B01C4_00001334
    lfs f3, 0xc(r4)
    lfs f0, 0x28(r1)
    fcmpo cr0, f3, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_805B01C4_0000135C
lbl_fn_805B01C4_00001334:
    lbz r5, 0x9(r1)
    mr r4, r3
    lbz r6, 0x8(r1)
    addi r3, r1, 0xbc
    addi r7, r1, 0x28
    bl fn_805B3124
    lbz r0, lbl_8087E6E8
    stw r3, 0x18(r1)
    stb r0, 0x1c(r1)
    b lbl_fn_805B01C4_00001368
lbl_fn_805B01C4_0000135C:
    lbz r0, lbl_8087E6E9
    stw r4, 0x18(r1)
    stb r0, 0x1c(r1)
lbl_fn_805B01C4_00001368:
    addi r25, r25, 0x4
    addi r26, r26, 0x1
lbl_fn_805B01C4_00001370:
    cmpw r26, r28
    blt lbl_fn_805B01C4_00001208
lbl_fn_805B01C4_00001378:
    lwz r22, 0xbc(r1)
    lwz r0, 0xc8(r1)
    cmplw r0, r22
    bge lbl_fn_805B01C4_0000138C
    mr r22, r0
lbl_fn_805B01C4_0000138C:
    lwz r23, 0xd0(r1)
    li r26, 0x0
    lwz r25, 0xc4(r1)
    b lbl_fn_805B01C4_00001480
lbl_fn_805B01C4_0000139C:
    cmpwi r24, 0x0
    bne lbl_fn_805B01C4_000013B8
    lwz r3, 0x10(r23)
    li r5, 0x0
    lwz r4, 0x10(r25)
    bl fn_8016F824
    b lbl_fn_805B01C4_000013EC
lbl_fn_805B01C4_000013B8:
    cmpwi r24, 0x1
    bne lbl_fn_805B01C4_000013D4
    lwz r3, 0x10(r23)
    li r5, 0x0
    lwz r4, 0x10(r25)
    bl fn_8016FDCC
    b lbl_fn_805B01C4_000013EC
lbl_fn_805B01C4_000013D4:
    cmpwi r24, 0x2
    bne lbl_fn_805B01C4_000013EC
    lwz r3, 0x10(r23)
    li r5, 0x0
    lwz r4, 0x10(r25)
    bl fn_8017039C
lbl_fn_805B01C4_000013EC:
    lwz r3, 0x4(r23)
    cmpwi r3, 0x0
    beq lbl_fn_805B01C4_0000141C
    b lbl_fn_805B01C4_00001400
lbl_fn_805B01C4_000013FC:
    mr r3, r0
lbl_fn_805B01C4_00001400:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805B01C4_000013FC
    mr r23, r3
    b lbl_fn_805B01C4_00001434
    b lbl_fn_805B01C4_0000141C
lbl_fn_805B01C4_00001418:
    mr r23, r3
lbl_fn_805B01C4_0000141C:
    lwz r0, 0x8(r23)
    clrrwi r3, r0, 1
    lwz r0, 0x0(r3)
    cmplw r23, r0
    bne lbl_fn_805B01C4_00001418
    mr r23, r3
lbl_fn_805B01C4_00001434:
    lwz r3, 0x4(r25)
    cmpwi r3, 0x0
    beq lbl_fn_805B01C4_00001464
    b lbl_fn_805B01C4_00001448
lbl_fn_805B01C4_00001444:
    mr r3, r0
lbl_fn_805B01C4_00001448:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805B01C4_00001444
    mr r25, r3
    b lbl_fn_805B01C4_0000147C
    b lbl_fn_805B01C4_00001464
lbl_fn_805B01C4_00001460:
    mr r25, r3
lbl_fn_805B01C4_00001464:
    lwz r0, 0x8(r25)
    clrrwi r3, r0, 1
    lwz r0, 0x0(r3)
    cmplw r25, r0
    bne lbl_fn_805B01C4_00001460
    mr r25, r3
lbl_fn_805B01C4_0000147C:
    addi r26, r26, 0x1
lbl_fn_805B01C4_00001480:
    cmplw r26, r22
    blt lbl_fn_805B01C4_0000139C
    addic. r22, r1, 0xbc
    beq lbl_fn_805B01C4_000015C8
    beq lbl_fn_805B01C4_000015C8
    beq lbl_fn_805B01C4_000015C8
    beq lbl_fn_805B01C4_000015C8
    lwz r23, 0xc0(r1)
    cmpwi r23, 0x0
    beq lbl_fn_805B01C4_000015C8
    lwz r24, 0x0(r23)
    cmpwi r24, 0x0
    beq lbl_fn_805B01C4_00001534
    lwz r25, 0x0(r24)
    cmpwi r25, 0x0
    beq lbl_fn_805B01C4_000014F0
    lwz r4, 0x0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B01C4_000014D4
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B01C4_000014D4:
    lwz r4, 0x4(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B01C4_000014E8
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B01C4_000014E8:
    mr r3, r25
    bl dtor_80084684
lbl_fn_805B01C4_000014F0:
    lwz r25, 0x4(r24)
    cmpwi r25, 0x0
    beq lbl_fn_805B01C4_0000152C
    lwz r4, 0x0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B01C4_00001510
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B01C4_00001510:
    lwz r4, 0x4(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B01C4_00001524
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B01C4_00001524:
    mr r3, r25
    bl dtor_80084684
lbl_fn_805B01C4_0000152C:
    mr r3, r24
    bl dtor_80084684
lbl_fn_805B01C4_00001534:
    lwz r24, 0x4(r23)
    cmpwi r24, 0x0
    beq lbl_fn_805B01C4_000015C0
    lwz r25, 0x0(r24)
    cmpwi r25, 0x0
    beq lbl_fn_805B01C4_0000157C
    lwz r4, 0x0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B01C4_00001560
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B01C4_00001560:
    lwz r4, 0x4(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B01C4_00001574
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B01C4_00001574:
    mr r3, r25
    bl dtor_80084684
lbl_fn_805B01C4_0000157C:
    lwz r25, 0x4(r24)
    cmpwi r25, 0x0
    beq lbl_fn_805B01C4_000015B8
    lwz r4, 0x0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B01C4_0000159C
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B01C4_0000159C:
    lwz r4, 0x4(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B01C4_000015B0
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B01C4_000015B0:
    mr r3, r25
    bl dtor_80084684
lbl_fn_805B01C4_000015B8:
    mr r3, r24
    bl dtor_80084684
lbl_fn_805B01C4_000015C0:
    mr r3, r23
    bl dtor_80084684
lbl_fn_805B01C4_000015C8:
    addic. r22, r1, 0xc8
    beq lbl_fn_805B01C4_00001708
    beq lbl_fn_805B01C4_00001708
    beq lbl_fn_805B01C4_00001708
    beq lbl_fn_805B01C4_00001708
    lwz r23, 0xcc(r1)
    cmpwi r23, 0x0
    beq lbl_fn_805B01C4_00001708
    lwz r24, 0x0(r23)
    cmpwi r24, 0x0
    beq lbl_fn_805B01C4_00001674
    lwz r25, 0x0(r24)
    cmpwi r25, 0x0
    beq lbl_fn_805B01C4_00001630
    lwz r4, 0x0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B01C4_00001614
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B01C4_00001614:
    lwz r4, 0x4(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B01C4_00001628
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B01C4_00001628:
    mr r3, r25
    bl dtor_80084684
lbl_fn_805B01C4_00001630:
    lwz r25, 0x4(r24)
    cmpwi r25, 0x0
    beq lbl_fn_805B01C4_0000166C
    lwz r4, 0x0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B01C4_00001650
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B01C4_00001650:
    lwz r4, 0x4(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B01C4_00001664
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B01C4_00001664:
    mr r3, r25
    bl dtor_80084684
lbl_fn_805B01C4_0000166C:
    mr r3, r24
    bl dtor_80084684
lbl_fn_805B01C4_00001674:
    lwz r24, 0x4(r23)
    cmpwi r24, 0x0
    beq lbl_fn_805B01C4_00001700
    lwz r25, 0x0(r24)
    cmpwi r25, 0x0
    beq lbl_fn_805B01C4_000016BC
    lwz r4, 0x0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B01C4_000016A0
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B01C4_000016A0:
    lwz r4, 0x4(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B01C4_000016B4
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B01C4_000016B4:
    mr r3, r25
    bl dtor_80084684
lbl_fn_805B01C4_000016BC:
    lwz r25, 0x4(r24)
    cmpwi r25, 0x0
    beq lbl_fn_805B01C4_000016F8
    lwz r4, 0x0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B01C4_000016DC
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B01C4_000016DC:
    lwz r4, 0x4(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B01C4_000016F0
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B01C4_000016F0:
    mr r3, r25
    bl dtor_80084684
lbl_fn_805B01C4_000016F8:
    mr r3, r24
    bl dtor_80084684
lbl_fn_805B01C4_00001700:
    mr r3, r23
    bl dtor_80084684
lbl_fn_805B01C4_00001708:
    addi r11, r1, 0x160
    psq_l f31, 0x1c8(r1), 0, 0
    lfd f31, 0x1c0(r1)
    psq_l f30, 0x1b8(r1), 0, 0
    lfd f30, 0x1b0(r1)
    psq_l f29, 0x1a8(r1), 0, 0
    lfd f29, 0x1a0(r1)
    psq_l f28, 0x198(r1), 0, 0
    lfd f28, 0x190(r1)
    psq_l f27, 0x188(r1), 0, 0
    lfd f27, 0x180(r1)
    psq_l f26, 0x178(r1), 0, 0
    lfd f26, 0x170(r1)
    psq_l f25, 0x168(r1), 0, 0
    lfd f25, 0x160(r1)
    bl _restgpr_22
    lwz r0, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}

asm void fn_805B0D70(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    stw r0, 0x1d4(r1)
    addi r11, r1, 0x160
    stfd f31, 0x1c0(r1)
    psq_st f31, 0x1c8(r1), 0, 0
    stfd f30, 0x1b0(r1)
    psq_st f30, 0x1b8(r1), 0, 0
    stfd f29, 0x1a0(r1)
    psq_st f29, 0x1a8(r1), 0, 0
    stfd f28, 0x190(r1)
    psq_st f28, 0x198(r1), 0, 0
    stfd f27, 0x180(r1)
    psq_st f27, 0x188(r1), 0, 0
    stfd f26, 0x170(r1)
    psq_st f26, 0x178(r1), 0, 0
    stfd f25, 0x160(r1)
    psq_st f25, 0x168(r1), 0, 0
    bl _savegpr_22
    lfs f0, lbl_80888368
    lis r0, 0x4330
    mr r23, r3
    stw r0, 0x128(r1)
    mr r26, r6
    mr r24, r4
    stw r0, 0x130(r1)
    mr r25, r5
    mr r8, r23
    rlwinm r6, r6, 0, 29, 29
    stfs f0, 0x104(r1)
    li r9, 0x0
    li r10, 0x0
    stfs f0, 0x108(r1)
    stfs f0, 0x10c(r1)
    b lbl_fn_805B0D70_00001898
lbl_fn_805B0D70_000017E4:
    cmplwi r6, 0x4
    lwz r11, 0x250(r8)
    bne lbl_fn_805B0D70_00001810
    lwz r4, 0x218(r3)
    cmpwi r4, 0x0
    beq lbl_fn_805B0D70_00001804
    lwz r0, 0x8c(r4)
    b lbl_fn_805B0D70_00001808
lbl_fn_805B0D70_00001804:
    li r0, 0x0
lbl_fn_805B0D70_00001808:
    cmplw r11, r0
    beq lbl_fn_805B0D70_00001890
lbl_fn_805B0D70_00001810:
    lwz r0, 0x38(r11)
    li r4, 0x0
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_805B0D70_00001854
    lwz r0, 0x48(r11)
    li r5, 0x1
    cmpwi r0, 0x2
    bne lbl_fn_805B0D70_00001848
    lwz r0, 0x7e0(r11)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_805B0D70_00001848
    li r5, 0x0
lbl_fn_805B0D70_00001848:
    cmpwi r5, 0x0
    beq lbl_fn_805B0D70_00001854
    li r4, 0x1
lbl_fn_805B0D70_00001854:
    cmpwi r4, 0x0
    beq lbl_fn_805B0D70_00001890
    lfs f3, 0x104(r1)
    addi r9, r9, 0x1
    lfs f0, 0x528(r11)
    lfs f5, 0x108(r1)
    fadds f6, f3, f0
    lfs f4, 0x52c(r11)
    lfs f3, 0x10c(r1)
    lfs f0, 0x530(r11)
    fadds f4, f5, f4
    stfs f6, 0x104(r1)
    fadds f0, f3, f0
    stfs f4, 0x108(r1)
    stfs f0, 0x10c(r1)
lbl_fn_805B0D70_00001890:
    addi r8, r8, 0x4
    addi r10, r10, 0x1
lbl_fn_805B0D70_00001898:
    lbz r0, 0x24c(r3)
    cmplw r10, r0
    blt lbl_fn_805B0D70_000017E4
    cmpwi r9, 0x0
    ble lbl_fn_805B0D70_000018F0
    xoris r0, r9, 0x8000
    stw r0, 0x12c(r1)
    lis r3, lbl_80763C28@ha
    lfs f5, lbl_80888370
    lfd f3, lbl_80763C28@l(r3)
    lfd f0, 0x128(r1)
    lfs f4, 0x104(r1)
    fsubs f6, f0, f3
    lfs f3, 0x108(r1)
    lfs f0, 0x10c(r1)
    fdivs f5, f5, f6
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x104(r1)
    stfs f3, 0x108(r1)
    stfs f0, 0x10c(r1)
lbl_fn_805B0D70_000018F0:
    lfs f0, lbl_80888368
    mr r3, r25
    stfs f0, 0xf8(r1)
    li r28, 0x0
    stfs f0, 0xfc(r1)
    stfs f0, 0x100(r1)
    b lbl_fn_805B0D70_00001944
lbl_fn_805B0D70_0000190C:
    lfs f3, 0xf8(r1)
    addi r28, r28, 0x1
    lfs f0, 0x4(r4)
    addi r3, r3, 0x4
    lfs f5, 0xfc(r1)
    fadds f6, f3, f0
    lfs f4, 0x8(r4)
    lfs f3, 0x100(r1)
    lfs f0, 0xc(r4)
    fadds f4, f5, f4
    stfs f6, 0xf8(r1)
    fadds f0, f3, f0
    stfs f4, 0xfc(r1)
    stfs f0, 0x100(r1)
lbl_fn_805B0D70_00001944:
    lwz r4, 0x10(r3)
    cmpwi r4, 0x0
    bne lbl_fn_805B0D70_0000190C
    cmpwi r28, 0x0
    ble lbl_fn_805B0D70_0000199C
    xoris r0, r28, 0x8000
    stw r0, 0x134(r1)
    lis r3, lbl_80763C28@ha
    lfs f5, lbl_80888370
    lfd f3, lbl_80763C28@l(r3)
    lfd f0, 0x130(r1)
    lfs f4, 0xf8(r1)
    fsubs f6, f0, f3
    lfs f3, 0xfc(r1)
    lfs f0, 0x100(r1)
    fdivs f5, f5, f6
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f0, 0x100(r1)
lbl_fn_805B0D70_0000199C:
    lfs f3, 0x100(r1)
    cmpwi r7, 0x3
    lfs f0, 0x10c(r1)
    lfs f5, 0xfc(r1)
    fsubs f6, f3, f0
    lfs f4, 0x108(r1)
    lfs f3, 0xf8(r1)
    lfs f0, 0x104(r1)
    fsubs f4, f5, f4
    stfs f6, 0xf4(r1)
    fsubs f0, f3, f0
    stfs f4, 0xf0(r1)
    stfs f0, 0xec(r1)
    bne lbl_fn_805B0D70_00001B00
    lfs f3, lbl_80888368
    addi r3, r1, 0xec
    lfs f0, lbl_80888370
    addi r4, r1, 0xb0
    stfs f3, 0xb0(r1)
    addi r5, r1, 0xd4
    stfs f0, 0xb4(r1)
    stfs f3, 0xb8(r1)
    bl fn_805F99B0
    lfs f4, 0x100(r1)
    addi r4, r1, 0xa4
    lfs f0, 0x10c(r1)
    addi r3, r1, 0x110
    lfs f3, 0xfc(r1)
    addi r6, r1, 0x80
    fadds f6, f4, f0
    lfs f0, 0x108(r1)
    lfs f11, lbl_8088837C
    addi r5, r1, 0x11c
    fadds f7, f3, f0
    lfs f3, 0xf8(r1)
    fmuls f9, f6, f11
    lfs f0, 0x104(r1)
    fmuls f10, f7, f11
    lfs f5, 0xdc(r1)
    fadds f8, f3, f0
    lfs f4, 0xd8(r1)
    fsubs f12, f9, f5
    lfs f3, 0xd4(r1)
    fmuls f11, f8, f11
    lfs f0, lbl_80888380
    fadds f25, f9, f5
    addi r8, r1, 0x5c
    fsubs f13, f10, f4
    addi r7, r1, 0xe0
    fadds f26, f10, f4
    stfs f8, 0x8c(r1)
    fmr f2, f12
    stfs f13, 0xa8(r1)
    fsubs f13, f11, f3
    fadds f27, f11, f3
    stfs f2, 0x118(r1)
    fmuls f5, f5, f0
    fmuls f4, f4, f0
    stfs f13, 0xa4(r1)
    fmuls f0, f3, f0
    fmr f2, f25
    psq_l f1, 0x0(r4), 0, 0
    stfs f27, 0x80(r1)
    stfs f2, 0x124(r1)
    fmr f2, f5
    stfs f26, 0x84(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x5c(r1)
    stfs f4, 0x60(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f7, 0x90(r1)
    stfs f6, 0x94(r1)
    stfs f11, 0x98(r1)
    stfs f10, 0x9c(r1)
    stfs f9, 0xa0(r1)
    stfs f12, 0xac(r1)
    stfs f8, 0x68(r1)
    stfs f7, 0x6c(r1)
    stfs f6, 0x70(r1)
    stfs f11, 0x74(r1)
    stfs f10, 0x78(r1)
    stfs f9, 0x7c(r1)
    stfs f25, 0x88(r1)
    stfs f5, 0x64(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0xe8(r1)
    b lbl_fn_805B0D70_00001B5C
lbl_fn_805B0D70_00001B00:
    cmpwi r7, 0x4
    bne lbl_fn_805B0D70_00001B5C
    addi r4, r1, 0xf8
    lfs f2, 0x100(r1)
    stfs f2, 0x118(r1)
    addi r3, r1, 0x110
    psq_l f1, 0x0(r4), 0, 0
    addi r5, r1, 0x104
    psq_st f1, 0x0(r3), 0, 0
    addi r4, r1, 0x11c
    lfs f2, 0x10c(r1)
    addi r6, r1, 0x50
    psq_l f1, 0x0(r5), 0, 0
    addi r3, r1, 0xe0
    stfs f2, 0x124(r1)
    fmr f2, f6
    stfs f0, 0x50(r1)
    stfs f4, 0x54(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f6, 0x58(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xe8(r1)
lbl_fn_805B0D70_00001B5C:
    lis r3, lbl_80763C28@ha
    li r4, 0x0
    addi r31, r1, 0xcc
    addi r0, r1, 0xc0
    stw r4, 0xc8(r1)
    mr r30, r23
    lfd f27, lbl_80763C28@l(r3)
    rlwinm r29, r26, 0, 29, 29
    stw r4, 0xcc(r1)
    li r27, 0x0
    lfs f26, lbl_80888388
    lis r22, 0x4178
    stw r31, 0xd0(r1)
    lfs f25, lbl_80888384
    stw r4, 0xbc(r1)
    stw r4, 0xc0(r1)
    stw r0, 0xc4(r1)
    b lbl_fn_805B0D70_00001D74
lbl_fn_805B0D70_00001BA4:
    cmplwi r29, 0x4
    lwz r26, 0x250(r30)
    bne lbl_fn_805B0D70_00001BD0
    lwz r3, 0x218(r23)
    cmpwi r3, 0x0
    beq lbl_fn_805B0D70_00001BC4
    lwz r0, 0x8c(r3)
    b lbl_fn_805B0D70_00001BC8
lbl_fn_805B0D70_00001BC4:
    li r0, 0x0
lbl_fn_805B0D70_00001BC8:
    cmplw r26, r0
    beq lbl_fn_805B0D70_00001D6C
lbl_fn_805B0D70_00001BD0:
    lwz r0, 0x38(r26)
    li r3, 0x0
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_805B0D70_00001C00
    lwz r0, 0x48(r26)
    cmpwi r0, 0x2
    bne lbl_fn_805B0D70_00001C04
    lwz r0, 0x7e0(r26)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_805B0D70_00001C04
lbl_fn_805B0D70_00001C00:
    li r3, 0x1
lbl_fn_805B0D70_00001C04:
    cmpwi r3, 0x0
    bne lbl_fn_805B0D70_00001D6C
    addi r3, r1, 0xe0
    bl fn_805F9920
    lfs f6, 0x118(r1)
    fmr f28, f1
    lfs f0, 0x530(r26)
    addi r3, r1, 0xe0
    lfs f5, 0x114(r1)
    addi r4, r1, 0x44
    lfs f4, 0x52c(r26)
    fsubs f6, f6, f0
    lfs f0, 0x528(r26)
    lfs f3, 0x110(r1)
    fsubs f4, f5, f4
    stfs f6, 0x4c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x48(r1)
    stfs f0, 0x44(r1)
    bl fn_805F9990
    fneg f0, f1
    lwz r4, 0xcc(r1)
    addi r3, r1, 0xcc
    fdivs f28, f0, f28
    b lbl_fn_805B0D70_00001C8C
lbl_fn_805B0D70_00001C68:
    lfs f0, 0xc(r4)
    fcmpo cr0, f0, f28
    mfcr r0
    srwi. r0, r0, 31
    bne lbl_fn_805B0D70_00001C88
    mr r3, r4
    lwz r4, 0x0(r4)
    b lbl_fn_805B0D70_00001C8C
lbl_fn_805B0D70_00001C88:
    lwz r4, 0x4(r4)
lbl_fn_805B0D70_00001C8C:
    cmpwi r4, 0x0
    bne lbl_fn_805B0D70_00001C68
    cmplw r3, r31
    beq lbl_fn_805B0D70_00001CB0
    lfs f0, 0xc(r3)
    fcmpo cr0, f28, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_805B0D70_00001CB4
lbl_fn_805B0D70_00001CB0:
    addi r3, r1, 0xcc
lbl_fn_805B0D70_00001CB4:
    cmplw r3, r31
    beq lbl_fn_805B0D70_00001CF4
    bl fn_80680CF8
    addi r0, r22, 0x749f
    mulhw r0, r0, r3
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x12c(r1)
    lfd f0, 0x128(r1)
    fsubs f0, f0, f27
    fdivs f0, f0, f26
    fmadds f28, f25, f0, f28
lbl_fn_805B0D70_00001CF4:
    stfs f28, 0x30(r1)
    addi r3, r1, 0xc8
    addi r4, r1, 0x30
    addi r5, r1, 0x10
    stw r26, 0x34(r1)
    addi r6, r1, 0xb
    addi r7, r1, 0xa
    bl fn_805B33BC
    lwz r4, 0x10(r1)
    cmpwi r4, 0x0
    beq lbl_fn_805B0D70_00001D38
    lfs f3, 0xc(r4)
    lfs f0, 0x30(r1)
    fcmpo cr0, f3, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_805B0D70_00001D60
lbl_fn_805B0D70_00001D38:
    lbz r5, 0xb(r1)
    mr r4, r3
    lbz r6, 0xa(r1)
    addi r3, r1, 0xc8
    addi r7, r1, 0x30
    bl fn_805B3124
    lbz r0, lbl_8087E6E8
    stw r3, 0x20(r1)
    stb r0, 0x24(r1)
    b lbl_fn_805B0D70_00001D6C
lbl_fn_805B0D70_00001D60:
    lbz r0, lbl_8087E6E9
    stw r4, 0x20(r1)
    stb r0, 0x24(r1)
lbl_fn_805B0D70_00001D6C:
    addi r30, r30, 0x4
    addi r27, r27, 0x1
lbl_fn_805B0D70_00001D74:
    lbz r0, 0x24c(r23)
    cmplw r27, r0
    blt lbl_fn_805B0D70_00001BA4
    cmpwi r28, 0x0
    li r26, 0x0
    ble lbl_fn_805B0D70_00001F24
    lis r3, lbl_80763C28@ha
    lfs f31, 0x118(r1)
    lfs f26, 0x114(r1)
    addi r23, r1, 0xc0
    lfs f27, 0x110(r1)
    lis r27, 0x4178
    lfd f28, lbl_80763C28@l(r3)
    lfs f29, lbl_80888388
    lfs f30, lbl_80888384
    b lbl_fn_805B0D70_00001F1C
lbl_fn_805B0D70_00001DB4:
    addi r3, r1, 0xe0
    bl fn_805F9920
    lwz r5, 0x10(r25)
    fmr f25, f1
    addi r3, r1, 0xe0
    addi r4, r1, 0x38
    lfs f4, 0xc(r5)
    lfs f3, 0x8(r5)
    lfs f0, 0x4(r5)
    fsubs f4, f31, f4
    fsubs f3, f26, f3
    fsubs f0, f27, f0
    stfs f4, 0x40(r1)
    stfs f0, 0x38(r1)
    stfs f3, 0x3c(r1)
    bl fn_805F9990
    fneg f0, f1
    lwz r4, 0xc0(r1)
    addi r3, r1, 0xc0
    fdivs f25, f0, f25
    b lbl_fn_805B0D70_00001E2C
lbl_fn_805B0D70_00001E08:
    lfs f0, 0xc(r4)
    fcmpo cr0, f0, f25
    mfcr r0
    srwi. r0, r0, 31
    bne lbl_fn_805B0D70_00001E28
    mr r3, r4
    lwz r4, 0x0(r4)
    b lbl_fn_805B0D70_00001E2C
lbl_fn_805B0D70_00001E28:
    lwz r4, 0x4(r4)
lbl_fn_805B0D70_00001E2C:
    cmpwi r4, 0x0
    bne lbl_fn_805B0D70_00001E08
    cmplw r3, r23
    beq lbl_fn_805B0D70_00001E50
    lfs f0, 0xc(r3)
    fcmpo cr0, f25, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_805B0D70_00001E54
lbl_fn_805B0D70_00001E50:
    addi r3, r1, 0xc0
lbl_fn_805B0D70_00001E54:
    cmplw r3, r23
    beq lbl_fn_805B0D70_00001E94
    bl fn_80680CF8
    addi r0, r27, 0x749f
    mulhw r0, r0, r3
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x134(r1)
    lfd f0, 0x130(r1)
    fsubs f0, f0, f28
    fdivs f0, f0, f29
    fmadds f25, f30, f0, f25
lbl_fn_805B0D70_00001E94:
    stfs f25, 0x28(r1)
    addi r3, r1, 0xbc
    lwz r7, 0x10(r25)
    addi r4, r1, 0x28
    addi r5, r1, 0xc
    addi r6, r1, 0x9
    lwz r0, 0x0(r7)
    addi r7, r1, 0x8
    stw r0, 0x2c(r1)
    bl fn_805B33BC
    lwz r4, 0xc(r1)
    cmpwi r4, 0x0
    beq lbl_fn_805B0D70_00001EE0
    lfs f3, 0xc(r4)
    lfs f0, 0x28(r1)
    fcmpo cr0, f3, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_805B0D70_00001F08
lbl_fn_805B0D70_00001EE0:
    lbz r5, 0x9(r1)
    mr r4, r3
    lbz r6, 0x8(r1)
    addi r3, r1, 0xbc
    addi r7, r1, 0x28
    bl fn_805B3124
    lbz r0, lbl_8087E6E8
    stw r3, 0x18(r1)
    stb r0, 0x1c(r1)
    b lbl_fn_805B0D70_00001F14
lbl_fn_805B0D70_00001F08:
    lbz r0, lbl_8087E6E9
    stw r4, 0x18(r1)
    stb r0, 0x1c(r1)
lbl_fn_805B0D70_00001F14:
    addi r25, r25, 0x4
    addi r26, r26, 0x1
lbl_fn_805B0D70_00001F1C:
    cmpw r26, r28
    blt lbl_fn_805B0D70_00001DB4
lbl_fn_805B0D70_00001F24:
    lwz r22, 0xbc(r1)
    lwz r0, 0xc8(r1)
    cmplw r0, r22
    bge lbl_fn_805B0D70_00001F38
    mr r22, r0
lbl_fn_805B0D70_00001F38:
    lwz r23, 0xd0(r1)
    li r26, 0x0
    lwz r25, 0xc4(r1)
    b lbl_fn_805B0D70_0000202C
lbl_fn_805B0D70_00001F48:
    cmpwi r24, 0x0
    bne lbl_fn_805B0D70_00001F64
    lwz r3, 0x10(r23)
    li r5, 0x0
    lwz r4, 0x10(r25)
    bl fn_8016F824
    b lbl_fn_805B0D70_00001F98
lbl_fn_805B0D70_00001F64:
    cmpwi r24, 0x1
    bne lbl_fn_805B0D70_00001F80
    lwz r3, 0x10(r23)
    li r5, 0x0
    lwz r4, 0x10(r25)
    bl fn_8016FDCC
    b lbl_fn_805B0D70_00001F98
lbl_fn_805B0D70_00001F80:
    cmpwi r24, 0x2
    bne lbl_fn_805B0D70_00001F98
    lwz r3, 0x10(r23)
    li r5, 0x0
    lwz r4, 0x10(r25)
    bl fn_8017039C
lbl_fn_805B0D70_00001F98:
    lwz r3, 0x4(r23)
    cmpwi r3, 0x0
    beq lbl_fn_805B0D70_00001FC8
    b lbl_fn_805B0D70_00001FAC
lbl_fn_805B0D70_00001FA8:
    mr r3, r0
lbl_fn_805B0D70_00001FAC:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805B0D70_00001FA8
    mr r23, r3
    b lbl_fn_805B0D70_00001FE0
    b lbl_fn_805B0D70_00001FC8
lbl_fn_805B0D70_00001FC4:
    mr r23, r3
lbl_fn_805B0D70_00001FC8:
    lwz r0, 0x8(r23)
    clrrwi r3, r0, 1
    lwz r0, 0x0(r3)
    cmplw r23, r0
    bne lbl_fn_805B0D70_00001FC4
    mr r23, r3
lbl_fn_805B0D70_00001FE0:
    lwz r3, 0x4(r25)
    cmpwi r3, 0x0
    beq lbl_fn_805B0D70_00002010
    b lbl_fn_805B0D70_00001FF4
lbl_fn_805B0D70_00001FF0:
    mr r3, r0
lbl_fn_805B0D70_00001FF4:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805B0D70_00001FF0
    mr r25, r3
    b lbl_fn_805B0D70_00002028
    b lbl_fn_805B0D70_00002010
lbl_fn_805B0D70_0000200C:
    mr r25, r3
lbl_fn_805B0D70_00002010:
    lwz r0, 0x8(r25)
    clrrwi r3, r0, 1
    lwz r0, 0x0(r3)
    cmplw r25, r0
    bne lbl_fn_805B0D70_0000200C
    mr r25, r3
lbl_fn_805B0D70_00002028:
    addi r26, r26, 0x1
lbl_fn_805B0D70_0000202C:
    cmplw r26, r22
    blt lbl_fn_805B0D70_00001F48
    addic. r22, r1, 0xbc
    beq lbl_fn_805B0D70_00002174
    beq lbl_fn_805B0D70_00002174
    beq lbl_fn_805B0D70_00002174
    beq lbl_fn_805B0D70_00002174
    lwz r23, 0xc0(r1)
    cmpwi r23, 0x0
    beq lbl_fn_805B0D70_00002174
    lwz r24, 0x0(r23)
    cmpwi r24, 0x0
    beq lbl_fn_805B0D70_000020E0
    lwz r25, 0x0(r24)
    cmpwi r25, 0x0
    beq lbl_fn_805B0D70_0000209C
    lwz r4, 0x0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B0D70_00002080
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B0D70_00002080:
    lwz r4, 0x4(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B0D70_00002094
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B0D70_00002094:
    mr r3, r25
    bl dtor_80084684
lbl_fn_805B0D70_0000209C:
    lwz r25, 0x4(r24)
    cmpwi r25, 0x0
    beq lbl_fn_805B0D70_000020D8
    lwz r4, 0x0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B0D70_000020BC
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B0D70_000020BC:
    lwz r4, 0x4(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B0D70_000020D0
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B0D70_000020D0:
    mr r3, r25
    bl dtor_80084684
lbl_fn_805B0D70_000020D8:
    mr r3, r24
    bl dtor_80084684
lbl_fn_805B0D70_000020E0:
    lwz r24, 0x4(r23)
    cmpwi r24, 0x0
    beq lbl_fn_805B0D70_0000216C
    lwz r25, 0x0(r24)
    cmpwi r25, 0x0
    beq lbl_fn_805B0D70_00002128
    lwz r4, 0x0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B0D70_0000210C
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B0D70_0000210C:
    lwz r4, 0x4(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B0D70_00002120
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B0D70_00002120:
    mr r3, r25
    bl dtor_80084684
lbl_fn_805B0D70_00002128:
    lwz r25, 0x4(r24)
    cmpwi r25, 0x0
    beq lbl_fn_805B0D70_00002164
    lwz r4, 0x0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B0D70_00002148
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B0D70_00002148:
    lwz r4, 0x4(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B0D70_0000215C
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B0D70_0000215C:
    mr r3, r25
    bl dtor_80084684
lbl_fn_805B0D70_00002164:
    mr r3, r24
    bl dtor_80084684
lbl_fn_805B0D70_0000216C:
    mr r3, r23
    bl dtor_80084684
lbl_fn_805B0D70_00002174:
    addic. r22, r1, 0xc8
    beq lbl_fn_805B0D70_000022B4
    beq lbl_fn_805B0D70_000022B4
    beq lbl_fn_805B0D70_000022B4
    beq lbl_fn_805B0D70_000022B4
    lwz r23, 0xcc(r1)
    cmpwi r23, 0x0
    beq lbl_fn_805B0D70_000022B4
    lwz r24, 0x0(r23)
    cmpwi r24, 0x0
    beq lbl_fn_805B0D70_00002220
    lwz r25, 0x0(r24)
    cmpwi r25, 0x0
    beq lbl_fn_805B0D70_000021DC
    lwz r4, 0x0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B0D70_000021C0
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B0D70_000021C0:
    lwz r4, 0x4(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B0D70_000021D4
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B0D70_000021D4:
    mr r3, r25
    bl dtor_80084684
lbl_fn_805B0D70_000021DC:
    lwz r25, 0x4(r24)
    cmpwi r25, 0x0
    beq lbl_fn_805B0D70_00002218
    lwz r4, 0x0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B0D70_000021FC
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B0D70_000021FC:
    lwz r4, 0x4(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B0D70_00002210
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B0D70_00002210:
    mr r3, r25
    bl dtor_80084684
lbl_fn_805B0D70_00002218:
    mr r3, r24
    bl dtor_80084684
lbl_fn_805B0D70_00002220:
    lwz r24, 0x4(r23)
    cmpwi r24, 0x0
    beq lbl_fn_805B0D70_000022AC
    lwz r25, 0x0(r24)
    cmpwi r25, 0x0
    beq lbl_fn_805B0D70_00002268
    lwz r4, 0x0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B0D70_0000224C
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B0D70_0000224C:
    lwz r4, 0x4(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B0D70_00002260
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B0D70_00002260:
    mr r3, r25
    bl dtor_80084684
lbl_fn_805B0D70_00002268:
    lwz r25, 0x4(r24)
    cmpwi r25, 0x0
    beq lbl_fn_805B0D70_000022A4
    lwz r4, 0x0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B0D70_00002288
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B0D70_00002288:
    lwz r4, 0x4(r25)
    cmpwi r4, 0x0
    beq lbl_fn_805B0D70_0000229C
    mr r3, r22
    bl fn_805B325C
lbl_fn_805B0D70_0000229C:
    mr r3, r25
    bl dtor_80084684
lbl_fn_805B0D70_000022A4:
    mr r3, r24
    bl dtor_80084684
lbl_fn_805B0D70_000022AC:
    mr r3, r23
    bl dtor_80084684
lbl_fn_805B0D70_000022B4:
    addi r11, r1, 0x160
    psq_l f31, 0x1c8(r1), 0, 0
    lfd f31, 0x1c0(r1)
    psq_l f30, 0x1b8(r1), 0, 0
    lfd f30, 0x1b0(r1)
    psq_l f29, 0x1a8(r1), 0, 0
    lfd f29, 0x1a0(r1)
    psq_l f28, 0x198(r1), 0, 0
    lfd f28, 0x190(r1)
    psq_l f27, 0x188(r1), 0, 0
    lfd f27, 0x180(r1)
    psq_l f26, 0x178(r1), 0, 0
    lfd f26, 0x170(r1)
    psq_l f25, 0x168(r1), 0, 0
    lfd f25, 0x160(r1)
    bl _restgpr_22
    lwz r0, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}
