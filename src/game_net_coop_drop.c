#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_19(void);
extern void _restgpr_26(void);
extern void _savegpr_19(void);
extern void _savegpr_26(void);
extern void fn_8004B338(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8005E3E4(void);
extern void fn_8005E7F4(void);
extern void fn_80076FF8(void);
extern void fn_800BDB58(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_801F4728(void);
extern void fn_801FECE0(void);
extern void fn_80370174(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80682428(void);
extern void fn_80695D84(void);

/* External data declarations */
extern u8 lbl_80757648[];
extern u8 lbl_8075765C[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80887250;
extern u32 lbl_80887258;
extern u32 lbl_80887274;
extern u32 lbl_80887288;
extern u32 lbl_8088728C;
extern u32 lbl_808872A0;
extern u32 lbl_808872B0;
extern u32 lbl_808872B4;
extern u32 lbl_808872B8;
extern u32 lbl_808872BC;

/* Function declarations */
void fn_804A9E44(void);
void fn_804A9E4C(void);
void fn_804A9E54(void);
void fn_804A9E64(void);
void fn_804A9E74(void);
void fn_804A9E84(void);
void fn_804A9E8C(void);
void fn_804A9E94(void);
void fn_804A9E9C(void);
void fn_804A9EA4(void);
void fn_804A9EAC(void);
void fn_804A9EB4(void);
void fn_804AA490(void);
void fn_804AABA8(void);
void fn_804AAD54(void);
void fn_804AAD68(void);
void fn_804AAFCC(void);
void fn_804AB060(void);
void fn_804AB79C(void);

asm void fn_804A9E44(void)
{
    nofralloc
    lwz r3, 0x160c(r3)
    blr
}

asm void fn_804A9E4C(void)
{
    nofralloc
    stw r4, 0x4(r3)
    blr
}

asm void fn_804A9E54(void)
{
    nofralloc
    stfs f1, 0x8(r3)
    stfs f2, 0xc(r3)
    stfs f3, 0x10(r3)
    blr
}

asm void fn_804A9E64(void)
{
    nofralloc
    stfs f1, 0x14(r3)
    stfs f2, 0x18(r3)
    stfs f3, 0x1c(r3)
    blr
}

asm void fn_804A9E74(void)
{
    nofralloc
    stfs f1, 0x20(r3)
    stfs f2, 0x24(r3)
    stfs f3, 0x28(r3)
    blr
}

asm void fn_804A9E84(void)
{
    nofralloc
    lwz r3, 0x3c(r3)
    blr
}

asm void fn_804A9E8C(void)
{
    nofralloc
    lwz r3, 0x40(r3)
    blr
}

asm void fn_804A9E94(void)
{
    nofralloc
    stfs f1, 0x3c(r3)
    blr
}

asm void fn_804A9E9C(void)
{
    nofralloc
    stfs f1, 0x40(r3)
    blr
}

asm void fn_804A9EA4(void)
{
    nofralloc
    stfs f1, 0x44(r3)
    blr
}

asm void fn_804A9EAC(void)
{
    nofralloc
    stfs f1, 0x48(r3)
    blr
}

asm void fn_804A9EB4(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    addi r11, r1, 0x70
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stfd f29, 0xd0(r1)
    psq_st f29, 0xd8(r1), 0, 0
    stfd f28, 0xc0(r1)
    psq_st f28, 0xc8(r1), 0, 0
    stfd f27, 0xb0(r1)
    psq_st f27, 0xb8(r1), 0, 0
    stfd f26, 0xa0(r1)
    psq_st f26, 0xa8(r1), 0, 0
    stfd f25, 0x90(r1)
    psq_st f25, 0x98(r1), 0, 0
    stfd f24, 0x80(r1)
    psq_st f24, 0x88(r1), 0, 0
    stfd f23, 0x70(r1)
    psq_st f23, 0x78(r1), 0, 0
    bl _savegpr_26
    lfs f3, lbl_808872B0
    lis r0, 0x4330
    lfs f0, 0x5fc(r3)
    mr r29, r3
    stw r0, 0x40(r1)
    fdivs f23, f3, f0
    lwz r3, lbl_8087EEE0
    stw r0, 0x48(r1)
    bl fn_80076FF8
    lwz r3, lbl_8087EEE0
    lis r27, lbl_80757648@ha
    lwz r4, lbl_8087F8A0
    lis r26, lbl_8075765C@ha
    lwz r0, 0x40(r3)
    addi r7, r1, 0x1c
    lwz r3, 0x3c(r3)
    addi r26, r26, lbl_8075765C@l
    xoris r0, r0, 0x8000
    stw r0, 0x4c(r1)
    xoris r6, r3, 0x8000
    lwz r8, 0x48(r4)
    stw r6, 0x44(r1)
    addi r4, r26, 0x174
    lfd f0, 0x48(r1)
    addi r5, r1, 0x28
    lfd f13, lbl_80757648@l(r27)
    lfd f3, 0x40(r1)
    fsubs f0, f0, f13
    lfs f12, lbl_80887258
    fsubs f4, f3, f13
    stw r0, 0x4c(r1)
    lwz r3, 0x5d8(r29)
    stw r6, 0x44(r1)
    fdivs f0, f4, f0
    lfd f3, 0x48(r1)
    lfd f5, 0x40(r1)
    lwz r0, 0x38(r3)
    lfs f4, lbl_808872B4
    lfs f2, 0x530(r8)
    fdivs f0, f1, f0
    psq_l f1, 0x528(r8), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    rlwinm r0, r0, 0, 30, 28
    lfs f6, lbl_808872B8
    lfs f7, 0x1c(r1)
    fdivs f24, f12, f0
    lfs f11, 0x538(r8)
    lfs f10, lbl_8088728C
    stw r0, 0x38(r3)
    lfs f0, lbl_808872A0
    lfs f9, lbl_80887250
    fadds f8, f7, f4
    lfs f4, lbl_80887288
    fadds f6, f2, f6
    stfs f0, 0x38(r1)
    fmuls f7, f9, f23
    fmuls f8, f8, f24
    fmuls f6, f6, f23
    stfs f12, 0x30(r1)
    fsubs f3, f3, f13
    fmuls f8, f8, f23
    stfs f12, 0x34(r1)
    fsubs f5, f5, f13
    fmadds f0, f4, f3, f6
    stfs f7, 0x20(r1)
    fsubs f26, f11, f10
    fmadds f3, f4, f5, f8
    stfs f0, 0x2c(r1)
    stfs f3, 0x28(r1)
    stfs f3, 0x1c(r1)
    lwz r3, 0x5d8(r29)
    stfs f0, 0x24(r1)
    bl fn_801F4728
    fneg f3, f26
    lfs f0, lbl_808872BC
    lwz r4, 0x5d8(r29)
    addi r3, r26, 0x17c
    fmuls f25, f0, f3
    addi r28, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f25
    mr r4, r3
    mr r3, r28
    bl fn_801FECE0
    fneg f3, f26
    lfs f0, lbl_808872BC
    lwz r4, 0x5d8(r29)
    addi r3, r26, 0x182
    fmuls f25, f0, f3
    addi r28, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f25
    mr r4, r3
    mr r3, r28
    bl fn_801FECE0
    fneg f3, f26
    lfs f0, lbl_808872BC
    lwz r4, 0x5d8(r29)
    addi r3, r26, 0x188
    fmuls f25, f0, f3
    addi r26, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f25
    mr r4, r3
    mr r3, r26
    bl fn_801FECE0
    lfs f30, lbl_80887258
    addi r31, r29, 0x834
    lfs f25, lbl_80887250
    li r30, 0x0
    lfs f26, lbl_808872B4
    lfs f27, lbl_808872B8
    lfd f28, lbl_80757648@l(r27)
    lfs f29, lbl_80887288
    lfs f31, lbl_80887274
lbl_fn_804A9EB4_00000298:
    lwz r0, 0x0(r31)
    cmpwi r0, 0x1
    bne lbl_fn_804A9EB4_0000059C
    lwz r4, 0x4(r31)
    cmpwi r4, -0x1
    beq lbl_fn_804A9EB4_000002C0
    lwz r3, lbl_8087F430
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_804A9EB4_0000059C
lbl_fn_804A9EB4_000002C0:
    lwz r4, lbl_8087EEE0
    fmuls f6, f25, f23
    lfs f0, 0x18(r31)
    lwz r3, 0x3c(r4)
    fadds f0, f0, f26
    lwz r0, 0x40(r4)
    lfs f3, 0x20(r31)
    xoris r3, r3, 0x8000
    stw r3, 0x44(r1)
    xoris r0, r0, 0x8000
    fmuls f7, f0, f24
    lfd f4, 0x40(r1)
    fadds f5, f3, f27
    stw r0, 0x4c(r1)
    lfs f0, 0x620(r29)
    fsubs f4, f4, f28
    lfd f3, 0x48(r1)
    fmuls f7, f7, f23
    fmuls f5, f5, f23
    stfs f6, 0x14(r1)
    fsubs f3, f3, f28
    fmadds f4, f29, f4, f7
    fcmpo cr0, f0, f30
    fmadds f3, f29, f3, f5
    stfs f4, 0x10(r1)
    stfs f3, 0x18(r1)
    cror eq, gt, eq
    bne lbl_fn_804A9EB4_00000338
    li r28, 0xff
    b lbl_fn_804A9EB4_00000358
lbl_fn_804A9EB4_00000338:
    fcmpo cr0, f0, f25
    cror eq, lt, eq
    bne lbl_fn_804A9EB4_0000034C
    li r3, 0x0
    b lbl_fn_804A9EB4_00000354
lbl_fn_804A9EB4_0000034C:
    fmadds f1, f31, f0, f29
    bl fn_80695D84
lbl_fn_804A9EB4_00000354:
    mr r28, r3
lbl_fn_804A9EB4_00000358:
    lfs f0, 0x624(r29)
    fcmpo cr0, f0, f30
    cror eq, gt, eq
    bne lbl_fn_804A9EB4_00000370
    li r27, 0xff
    b lbl_fn_804A9EB4_00000390
lbl_fn_804A9EB4_00000370:
    fcmpo cr0, f0, f25
    cror eq, lt, eq
    bne lbl_fn_804A9EB4_00000384
    li r3, 0x0
    b lbl_fn_804A9EB4_0000038C
lbl_fn_804A9EB4_00000384:
    fmadds f1, f31, f0, f29
    bl fn_80695D84
lbl_fn_804A9EB4_0000038C:
    mr r27, r3
lbl_fn_804A9EB4_00000390:
    lfs f0, 0x628(r29)
    fcmpo cr0, f0, f30
    cror eq, gt, eq
    bne lbl_fn_804A9EB4_000003A8
    li r26, 0xff
    b lbl_fn_804A9EB4_000003C8
lbl_fn_804A9EB4_000003A8:
    fcmpo cr0, f0, f25
    cror eq, lt, eq
    bne lbl_fn_804A9EB4_000003BC
    li r3, 0x0
    b lbl_fn_804A9EB4_000003C4
lbl_fn_804A9EB4_000003BC:
    fmadds f1, f31, f0, f29
    bl fn_80695D84
lbl_fn_804A9EB4_000003C4:
    mr r26, r3
lbl_fn_804A9EB4_000003C8:
    lfs f0, 0x62c(r29)
    fcmpo cr0, f0, f30
    cror eq, gt, eq
    bne lbl_fn_804A9EB4_000003E0
    li r3, 0xff
    b lbl_fn_804A9EB4_000003FC
lbl_fn_804A9EB4_000003E0:
    fcmpo cr0, f0, f25
    cror eq, lt, eq
    bne lbl_fn_804A9EB4_000003F4
    li r3, 0x0
    b lbl_fn_804A9EB4_000003FC
lbl_fn_804A9EB4_000003F4:
    fmadds f1, f31, f0, f29
    bl fn_80695D84
lbl_fn_804A9EB4_000003FC:
    stfs f30, 0x8(r1)
    slwi r4, r27, 8
    lfs f6, lbl_80887250
    fmr f8, f30
    lfs f0, 0x63c(r29)
    slwi r3, r3, 24
    lfs f9, 0x28(r31)
    slwi r0, r28, 16
    fmuls f10, f29, f0
    fmuls f4, f0, f9
    lfs f3, 0x10(r1)
    lfs f0, 0x18(r1)
    or r0, r3, r0
    fnmsubs f1, f10, f9, f3
    or r4, r26, r4
    fmr f7, f6
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f3, lbl_808872A0
    fnmsubs f2, f10, f9, f0
    or r4, r4, r0
    addi r5, r29, 0x1a8
    li r6, 0x1
    li r7, 0x1
    bl fn_8005E3E4
    lfs f0, 0x8(r31)
    fcmpo cr0, f0, f30
    cror eq, gt, eq
    bne lbl_fn_804A9EB4_00000478
    li r26, 0xff
    b lbl_fn_804A9EB4_00000498
lbl_fn_804A9EB4_00000478:
    fcmpo cr0, f0, f25
    cror eq, lt, eq
    bne lbl_fn_804A9EB4_0000048C
    li r3, 0x0
    b lbl_fn_804A9EB4_00000494
lbl_fn_804A9EB4_0000048C:
    fmadds f1, f31, f0, f29
    bl fn_80695D84
lbl_fn_804A9EB4_00000494:
    mr r26, r3
lbl_fn_804A9EB4_00000498:
    lfs f0, 0xc(r31)
    fcmpo cr0, f0, f30
    cror eq, gt, eq
    bne lbl_fn_804A9EB4_000004B0
    li r27, 0xff
    b lbl_fn_804A9EB4_000004D0
lbl_fn_804A9EB4_000004B0:
    fcmpo cr0, f0, f25
    cror eq, lt, eq
    bne lbl_fn_804A9EB4_000004C4
    li r3, 0x0
    b lbl_fn_804A9EB4_000004CC
lbl_fn_804A9EB4_000004C4:
    fmadds f1, f31, f0, f29
    bl fn_80695D84
lbl_fn_804A9EB4_000004CC:
    mr r27, r3
lbl_fn_804A9EB4_000004D0:
    lfs f0, 0x10(r31)
    fcmpo cr0, f0, f30
    cror eq, gt, eq
    bne lbl_fn_804A9EB4_000004E8
    li r28, 0xff
    b lbl_fn_804A9EB4_00000508
lbl_fn_804A9EB4_000004E8:
    fcmpo cr0, f0, f25
    cror eq, lt, eq
    bne lbl_fn_804A9EB4_000004FC
    li r3, 0x0
    b lbl_fn_804A9EB4_00000504
lbl_fn_804A9EB4_000004FC:
    fmadds f1, f31, f0, f29
    bl fn_80695D84
lbl_fn_804A9EB4_00000504:
    mr r28, r3
lbl_fn_804A9EB4_00000508:
    lfs f0, 0x14(r31)
    fcmpo cr0, f0, f30
    cror eq, gt, eq
    bne lbl_fn_804A9EB4_00000520
    li r3, 0xff
    b lbl_fn_804A9EB4_0000053C
lbl_fn_804A9EB4_00000520:
    fcmpo cr0, f0, f25
    cror eq, lt, eq
    bne lbl_fn_804A9EB4_00000534
    li r3, 0x0
    b lbl_fn_804A9EB4_0000053C
lbl_fn_804A9EB4_00000534:
    fmadds f1, f31, f0, f29
    bl fn_80695D84
lbl_fn_804A9EB4_0000053C:
    stfs f30, 0x8(r1)
    slwi r4, r27, 8
    lfs f6, lbl_80887250
    fmr f8, f30
    lfs f0, 0x638(r29)
    slwi r3, r3, 24
    lfs f9, 0x28(r31)
    slwi r0, r26, 16
    fmuls f10, f29, f0
    fmuls f4, f0, f9
    lfs f3, 0x10(r1)
    lfs f0, 0x18(r1)
    or r0, r3, r0
    fnmsubs f1, f10, f9, f3
    or r4, r28, r4
    fmr f7, f6
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f3, lbl_808872A0
    fnmsubs f2, f10, f9, f0
    or r4, r4, r0
    addi r5, r29, 0xb8
    addi r6, r29, 0x148
    bl fn_8005E7F4
lbl_fn_804A9EB4_0000059C:
    addi r30, r30, 0x1
    addi r31, r31, 0x2c
    cmplwi r30, 0x40
    blt lbl_fn_804A9EB4_00000298
    cmpwi r29, 0x0
    mr r4, r29
    beq lbl_fn_804A9EB4_000005BC
    addi r4, r29, 0x48
lbl_fn_804A9EB4_000005BC:
    lwz r3, lbl_8087EFB4
    li r5, 0x2
    lfs f1, lbl_80887250
    bl fn_800BDB58
    cmpwi r29, 0x0
    beq lbl_fn_804A9EB4_000005D8
    addi r29, r29, 0x48
lbl_fn_804A9EB4_000005D8:
    lwz r3, lbl_8087EFB4
    mr r4, r29
    lfs f1, lbl_80887250
    li r5, 0x10
    bl fn_800BDB58
    addi r11, r1, 0x70
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    psq_l f29, 0xd8(r1), 0, 0
    lfd f29, 0xd0(r1)
    psq_l f28, 0xc8(r1), 0, 0
    lfd f28, 0xc0(r1)
    psq_l f27, 0xb8(r1), 0, 0
    lfd f27, 0xb0(r1)
    psq_l f26, 0xa8(r1), 0, 0
    lfd f26, 0xa0(r1)
    psq_l f25, 0x98(r1), 0, 0
    lfd f25, 0x90(r1)
    psq_l f24, 0x88(r1), 0, 0
    lfd f24, 0x80(r1)
    psq_l f23, 0x78(r1), 0, 0
    lfd f23, 0x70(r1)
    bl _restgpr_26
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_804AA490(void)
{
    nofralloc
    stwu r1, -0x790(r1)
    mflr r0
    stw r0, 0x794(r1)
    addi r11, r1, 0x720
    stfd f31, 0x780(r1)
    psq_st f31, 0x788(r1), 0, 0
    stfd f30, 0x770(r1)
    psq_st f30, 0x778(r1), 0, 0
    stfd f29, 0x760(r1)
    psq_st f29, 0x768(r1), 0, 0
    stfd f28, 0x750(r1)
    psq_st f28, 0x758(r1), 0, 0
    stfd f27, 0x740(r1)
    psq_st f27, 0x748(r1), 0, 0
    stfd f26, 0x730(r1)
    psq_st f26, 0x738(r1), 0, 0
    stfd f25, 0x720(r1)
    psq_st f25, 0x728(r1), 0, 0
    bl _savegpr_19
    mr r23, r3
    addi r3, r3, 0x50
    bl fn_8047059C
    mr r22, r3
    addi r3, r23, 0x50
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r29, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0xb4(r1)
    mr r21, r3
    addi r3, r1, 0xc4
    stw r29, 0xb8(r1)
    li r4, 0x0
    li r5, 0x400
    stw r29, 0xbc(r1)
    stw r29, 0xc0(r1)
    stw r29, 0x6e4(r1)
    bl memset
    addi r3, r1, 0x6c4
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0xb4(r1)
    mr r4, r21
    mr r5, r22
    addi r3, r1, 0xb4
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0xb4
    addi r4, r4, lbl_807772B0@l
    stw r4, 0xb4(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r21, lbl_8075765C@ha
    lfs f31, lbl_80887258
    addi r28, r1, 0x68
    addi r25, r1, 0x8
    addi r27, r1, 0xa0
    addi r24, r1, 0x78
    addi r30, r21, lbl_8075765C@l
    li r26, 0x1
    li r31, -0x1
    li r22, 0x8
lbl_fn_804AA490_00000750:
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    mr r20, r3
    addi r4, r30, 0x18e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804AA490_000009B4
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f25, f1
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f26, f1
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f27, f1
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f30, f1
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f29, f1
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f28, f1
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    mr r4, r23
    stfs f30, 0x58(r1)
    li r6, -0x1
    li r3, 0x0
    stfs f29, 0x5c(r1)
    stfs f28, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f25, 0x68(r1)
    stfs f26, 0x6c(r1)
    stfs f27, 0x70(r1)
    mtctr r22
lbl_fn_804AA490_0000080C:
    lwz r0, 0x834(r4)
    cmpwi r0, -0x1
    bne lbl_fn_804AA490_00000820
    mr r6, r3
    b lbl_fn_804AA490_000008D4
lbl_fn_804AA490_00000820:
    lwz r0, 0x860(r4)
    addi r3, r3, 0x1
    cmpwi r0, -0x1
    bne lbl_fn_804AA490_00000838
    mr r6, r3
    b lbl_fn_804AA490_000008D4
lbl_fn_804AA490_00000838:
    lwz r0, 0x88c(r4)
    addi r3, r3, 0x1
    cmpwi r0, -0x1
    bne lbl_fn_804AA490_00000850
    mr r6, r3
    b lbl_fn_804AA490_000008D4
lbl_fn_804AA490_00000850:
    lwz r0, 0x8b8(r4)
    addi r3, r3, 0x1
    cmpwi r0, -0x1
    bne lbl_fn_804AA490_00000868
    mr r6, r3
    b lbl_fn_804AA490_000008D4
lbl_fn_804AA490_00000868:
    lwz r0, 0x8e4(r4)
    addi r3, r3, 0x1
    cmpwi r0, -0x1
    bne lbl_fn_804AA490_00000880
    mr r6, r3
    b lbl_fn_804AA490_000008D4
lbl_fn_804AA490_00000880:
    lwz r0, 0x910(r4)
    addi r3, r3, 0x1
    cmpwi r0, -0x1
    bne lbl_fn_804AA490_00000898
    mr r6, r3
    b lbl_fn_804AA490_000008D4
lbl_fn_804AA490_00000898:
    lwz r0, 0x93c(r4)
    addi r3, r3, 0x1
    cmpwi r0, -0x1
    bne lbl_fn_804AA490_000008B0
    mr r6, r3
    b lbl_fn_804AA490_000008D4
lbl_fn_804AA490_000008B0:
    lwz r0, 0x968(r4)
    addi r3, r3, 0x1
    cmpwi r0, -0x1
    bne lbl_fn_804AA490_000008C8
    mr r6, r3
    b lbl_fn_804AA490_000008D4
lbl_fn_804AA490_000008C8:
    addi r4, r4, 0x160
    addi r3, r3, 0x1
    bdnz lbl_fn_804AA490_0000080C
lbl_fn_804AA490_000008D4:
    cmpwi r6, -0x1
    beq lbl_fn_804AA490_0000097C
    mulli r0, r6, 0x2c
    lfs f5, 0x58(r1)
    lfs f4, 0x5c(r1)
    lfs f3, 0x60(r1)
    add r4, r23, r0
    lfs f0, 0x64(r1)
    stw r26, 0x834(r4)
    addi r5, r4, 0x84c
    lfs f2, 0x70(r1)
    stfs f5, 0x90(r1)
    psq_l f1, 0x0(r28), 0, 0
    stfs f4, 0x94(r1)
    lwz r3, 0x90(r1)
    stw r31, 0x838(r4)
    lwz r0, 0x94(r1)
    stw r3, 0x83c(r4)
    stfs f3, 0x98(r1)
    stw r0, 0x840(r4)
    lwz r3, 0x98(r1)
    stfs f0, 0x9c(r1)
    stw r3, 0x844(r4)
    lwz r0, 0x9c(r1)
    stw r0, 0x848(r4)
    stfs f2, 0x10(r1)
    stfs f2, 0xa8(r1)
    frsp f2, f2
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x854(r4)
    stw r26, 0x858(r4)
    psq_st f1, 0x0(r25), 0, 0
    stfs f5, 0x18(r1)
    stfs f4, 0x1c(r1)
    stfs f3, 0x20(r1)
    stfs f0, 0x24(r1)
    stw r26, 0x88(r1)
    stw r31, 0x8c(r1)
    psq_st f1, 0x0(r27), 0, 0
    stw r26, 0xac(r1)
    stfs f31, 0xb0(r1)
    stfs f31, 0x85c(r4)
lbl_fn_804AA490_0000097C:
    mulli r0, r6, 0x2c
    addi r3, r1, 0xb4
    add r20, r23, r0
    stw r29, 0x858(r20)
    bl fn_8005B3CC
    mr r19, r3
    addi r4, r21, lbl_8075765C@l
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_804AA490_00000D04
    mr r3, r19
    bl fn_800DC12C
    stw r3, 0x838(r20)
    b lbl_fn_804AA490_00000D04
lbl_fn_804AA490_000009B4:
    mr r3, r20
    addi r4, r30, 0x197
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804AA490_00000AC8
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x5fc(r23)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x5dc(r23)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x5e0(r23)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x5e4(r23)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x5e8(r23)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f30, f1
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f29, f1
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f28, f1
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    frsp f5, f30
    stfs f30, 0x48(r1)
    frsp f4, f29
    addi r3, r1, 0xb4
    frsp f3, f28
    stfs f29, 0x4c(r1)
    frsp f0, f1
    stfs f28, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f5, 0x600(r23)
    stfs f4, 0x604(r23)
    stfs f3, 0x608(r23)
    stfs f0, 0x60c(r23)
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x5ec(r23)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x5f0(r23)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x5f4(r23)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x5f8(r23)
    b lbl_fn_804AA490_00000D04
lbl_fn_804AA490_00000AC8:
    mr r3, r20
    addi r4, r30, 0x19d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804AA490_00000B6C
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x638(r23)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x63c(r23)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f30, f1
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f29, f1
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f28, f1
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    frsp f5, f30
    stfs f30, 0x38(r1)
    frsp f4, f29
    frsp f3, f28
    stfs f29, 0x3c(r1)
    frsp f0, f1
    stfs f28, 0x40(r1)
    stfs f1, 0x44(r1)
    stfs f5, 0x620(r23)
    stfs f4, 0x624(r23)
    stfs f3, 0x628(r23)
    stfs f0, 0x62c(r23)
    b lbl_fn_804AA490_00000D04
lbl_fn_804AA490_00000B6C:
    mr r3, r20
    addi r4, r30, 0x1a3
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804AA490_00000C10
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x630(r23)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x634(r23)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f28, f1
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f29, f1
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f30, f1
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    frsp f5, f28
    stfs f28, 0x28(r1)
    frsp f4, f29
    frsp f3, f30
    stfs f29, 0x2c(r1)
    frsp f0, f1
    stfs f30, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f5, 0x610(r23)
    stfs f4, 0x614(r23)
    stfs f3, 0x618(r23)
    stfs f0, 0x61c(r23)
    b lbl_fn_804AA490_00000D04
lbl_fn_804AA490_00000C10:
    mr r3, r20
    addi r4, r30, 0x1a9
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804AA490_00000C9C
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x78(r1)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x7c(r1)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x80(r1)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, 0x1538(r23)
    addi r4, r23, 0x1538
    stfs f1, 0x84(r1)
    slwi r0, r0, 4
    add r0, r4, r0
    addic. r3, r0, 0x4
    beq lbl_fn_804AA490_00000C8C
    psq_l f1, 0x0(r24), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x8(r24), 0, 0
    psq_st f1, 0x8(r3), 0, 0
lbl_fn_804AA490_00000C8C:
    lwz r3, 0x0(r4)
    addi r0, r3, 0x1
    stw r0, 0x0(r4)
    b lbl_fn_804AA490_00000D04
lbl_fn_804AA490_00000C9C:
    mr r3, r20
    addi r4, r30, 0x1b2
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804AA490_00000D04
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x15f4(r23)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x15f8(r23)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x15fc(r23)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1600(r23)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1604(r23)
    stfs f31, 0x1608(r23)
lbl_fn_804AA490_00000D04:
    addi r3, r1, 0xb4
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_804AA490_00000750
    addi r11, r1, 0x720
    psq_l f31, 0x788(r1), 0, 0
    lfd f31, 0x780(r1)
    psq_l f30, 0x778(r1), 0, 0
    lfd f30, 0x770(r1)
    psq_l f29, 0x768(r1), 0, 0
    lfd f29, 0x760(r1)
    psq_l f28, 0x758(r1), 0, 0
    lfd f28, 0x750(r1)
    psq_l f27, 0x748(r1), 0, 0
    lfd f27, 0x740(r1)
    psq_l f26, 0x738(r1), 0, 0
    lfd f26, 0x730(r1)
    psq_l f25, 0x728(r1), 0, 0
    lfd f25, 0x720(r1)
    bl _restgpr_19
    lwz r0, 0x794(r1)
    mtlr r0
    addi r1, r1, 0x790
    blr
}

asm void fn_804AABA8(void)
{
    nofralloc
    fmr f7, f1
    li r0, 0x8
    stwu r1, -0x50(r1)
    mr r6, r3
    li r10, -0x1
    li r7, 0x0
    mtctr r0
lbl_fn_804AABA8_00000D80:
    lwz r0, 0x834(r6)
    cmpwi r0, -0x1
    bne lbl_fn_804AABA8_00000D94
    mr r10, r7
    b lbl_fn_804AABA8_00000E48
lbl_fn_804AABA8_00000D94:
    lwz r0, 0x860(r6)
    addi r7, r7, 0x1
    cmpwi r0, -0x1
    bne lbl_fn_804AABA8_00000DAC
    mr r10, r7
    b lbl_fn_804AABA8_00000E48
lbl_fn_804AABA8_00000DAC:
    lwz r0, 0x88c(r6)
    addi r7, r7, 0x1
    cmpwi r0, -0x1
    bne lbl_fn_804AABA8_00000DC4
    mr r10, r7
    b lbl_fn_804AABA8_00000E48
lbl_fn_804AABA8_00000DC4:
    lwz r0, 0x8b8(r6)
    addi r7, r7, 0x1
    cmpwi r0, -0x1
    bne lbl_fn_804AABA8_00000DDC
    mr r10, r7
    b lbl_fn_804AABA8_00000E48
lbl_fn_804AABA8_00000DDC:
    lwz r0, 0x8e4(r6)
    addi r7, r7, 0x1
    cmpwi r0, -0x1
    bne lbl_fn_804AABA8_00000DF4
    mr r10, r7
    b lbl_fn_804AABA8_00000E48
lbl_fn_804AABA8_00000DF4:
    lwz r0, 0x910(r6)
    addi r7, r7, 0x1
    cmpwi r0, -0x1
    bne lbl_fn_804AABA8_00000E0C
    mr r10, r7
    b lbl_fn_804AABA8_00000E48
lbl_fn_804AABA8_00000E0C:
    lwz r0, 0x93c(r6)
    addi r7, r7, 0x1
    cmpwi r0, -0x1
    bne lbl_fn_804AABA8_00000E24
    mr r10, r7
    b lbl_fn_804AABA8_00000E48
lbl_fn_804AABA8_00000E24:
    lwz r0, 0x968(r6)
    addi r7, r7, 0x1
    cmpwi r0, -0x1
    bne lbl_fn_804AABA8_00000E3C
    mr r10, r7
    b lbl_fn_804AABA8_00000E48
lbl_fn_804AABA8_00000E3C:
    addi r6, r6, 0x160
    addi r7, r7, 0x1
    bdnz lbl_fn_804AABA8_00000D80
lbl_fn_804AABA8_00000E48:
    cmpwi r10, -0x1
    beq lbl_fn_804AABA8_00000F04
    mulli r0, r10, 0x2c
    lfs f2, 0x8(r4)
    lfs f6, 0x0(r5)
    li r8, 0x1
    lfs f5, 0x4(r5)
    li r7, -0x1
    lfs f4, 0x8(r5)
    add r6, r3, r0
    lfs f3, 0xc(r5)
    addi r9, r6, 0x84c
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r1, 0x18
    stfs f6, 0x2c(r1)
    addi r5, r1, 0x3c
    frsp f0, f7
    stw r8, 0x834(r6)
    lwz r0, 0x2c(r1)
    stw r7, 0x838(r6)
    stfs f5, 0x30(r1)
    stw r0, 0x83c(r6)
    lwz r3, 0x30(r1)
    stfs f4, 0x34(r1)
    stw r3, 0x840(r6)
    lwz r0, 0x34(r1)
    stfs f3, 0x38(r1)
    stw r0, 0x844(r6)
    lwz r0, 0x38(r1)
    stw r0, 0x848(r6)
    stfs f2, 0x20(r1)
    stfs f2, 0x44(r1)
    frsp f2, f2
    psq_st f1, 0x0(r9), 0, 0
    stfs f2, 0x854(r6)
    stw r8, 0x858(r6)
    psq_st f1, 0x0(r4), 0, 0
    stfs f6, 0x8(r1)
    stfs f5, 0xc(r1)
    stfs f4, 0x10(r1)
    stfs f3, 0x14(r1)
    stw r8, 0x24(r1)
    stw r7, 0x28(r1)
    psq_st f1, 0x0(r5), 0, 0
    stw r8, 0x48(r1)
    stfs f7, 0x4c(r1)
    stfs f0, 0x85c(r6)
lbl_fn_804AABA8_00000F04:
    mr r3, r10
    addi r1, r1, 0x50
    blr
}

asm void fn_804AAD54(void)
{
    nofralloc
    mulli r0, r4, 0x2c
    li r4, -0x1
    add r3, r3, r0
    stw r4, 0x834(r3)
    blr
}

asm void fn_804AAD68(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    cmpwi r4, 0x0
    stw r31, 0x7c(r1)
    beq lbl_fn_804AAD68_0000117C
    lwz r0, 0x1334(r3)
    mr r6, r3
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_804AAD68_00000F5C
lbl_fn_804AAD68_00000F48:
    lwz r0, 0x1338(r6)
    cmplw r0, r4
    beq lbl_fn_804AAD68_0000117C
    addi r6, r6, 0x8
    bdnz lbl_fn_804AAD68_00000F48
lbl_fn_804AAD68_00000F5C:
    lfs f2, 0x530(r4)
    addi r8, r1, 0x40
    psq_l f1, 0x528(r4), 0, 0
    li r0, 0x8
    lfs f5, 0x0(r5)
    mr r7, r3
    lfs f4, 0x4(r5)
    li r31, -0x1
    lfs f3, 0x8(r5)
    li r6, 0x0
    lfs f0, 0xc(r5)
    psq_st f1, 0x0(r8), 0, 0
    lfs f6, lbl_80887288
    stfs f2, 0x48(r1)
    stfs f5, 0x30(r1)
    stfs f4, 0x34(r1)
    stfs f3, 0x38(r1)
    stfs f0, 0x3c(r1)
    mtctr r0
lbl_fn_804AAD68_00000FA8:
    lwz r0, 0x834(r7)
    cmpwi r0, -0x1
    bne lbl_fn_804AAD68_00000FBC
    mr r31, r6
    b lbl_fn_804AAD68_00001070
lbl_fn_804AAD68_00000FBC:
    lwz r0, 0x860(r7)
    addi r6, r6, 0x1
    cmpwi r0, -0x1
    bne lbl_fn_804AAD68_00000FD4
    mr r31, r6
    b lbl_fn_804AAD68_00001070
lbl_fn_804AAD68_00000FD4:
    lwz r0, 0x88c(r7)
    addi r6, r6, 0x1
    cmpwi r0, -0x1
    bne lbl_fn_804AAD68_00000FEC
    mr r31, r6
    b lbl_fn_804AAD68_00001070
lbl_fn_804AAD68_00000FEC:
    lwz r0, 0x8b8(r7)
    addi r6, r6, 0x1
    cmpwi r0, -0x1
    bne lbl_fn_804AAD68_00001004
    mr r31, r6
    b lbl_fn_804AAD68_00001070
lbl_fn_804AAD68_00001004:
    lwz r0, 0x8e4(r7)
    addi r6, r6, 0x1
    cmpwi r0, -0x1
    bne lbl_fn_804AAD68_0000101C
    mr r31, r6
    b lbl_fn_804AAD68_00001070
lbl_fn_804AAD68_0000101C:
    lwz r0, 0x910(r7)
    addi r6, r6, 0x1
    cmpwi r0, -0x1
    bne lbl_fn_804AAD68_00001034
    mr r31, r6
    b lbl_fn_804AAD68_00001070
lbl_fn_804AAD68_00001034:
    lwz r0, 0x93c(r7)
    addi r6, r6, 0x1
    cmpwi r0, -0x1
    bne lbl_fn_804AAD68_0000104C
    mr r31, r6
    b lbl_fn_804AAD68_00001070
lbl_fn_804AAD68_0000104C:
    lwz r0, 0x968(r7)
    addi r6, r6, 0x1
    cmpwi r0, -0x1
    bne lbl_fn_804AAD68_00001064
    mr r31, r6
    b lbl_fn_804AAD68_00001070
lbl_fn_804AAD68_00001064:
    addi r7, r7, 0x160
    addi r6, r6, 0x1
    bdnz lbl_fn_804AAD68_00000FA8
lbl_fn_804AAD68_00001070:
    cmpwi r31, -0x1
    beq lbl_fn_804AAD68_00001128
    mulli r0, r31, 0x2c
    lfs f5, 0x30(r1)
    li r11, 0x1
    lfs f4, 0x34(r1)
    lfs f3, 0x38(r1)
    li r7, -0x1
    add r6, r3, r0
    lfs f0, 0x3c(r1)
    stw r11, 0x834(r6)
    addi r9, r6, 0x84c
    lfs f2, 0x48(r1)
    addi r12, r1, 0x10
    stfs f5, 0x54(r1)
    addi r10, r1, 0x64
    psq_l f1, 0x0(r8), 0, 0
    stfs f4, 0x58(r1)
    lwz r5, 0x54(r1)
    stw r7, 0x838(r6)
    lwz r0, 0x58(r1)
    stw r5, 0x83c(r6)
    stfs f3, 0x5c(r1)
    stw r0, 0x840(r6)
    lwz r5, 0x5c(r1)
    stfs f0, 0x60(r1)
    stw r5, 0x844(r6)
    lwz r0, 0x60(r1)
    stw r0, 0x848(r6)
    stfs f2, 0x18(r1)
    stfs f2, 0x6c(r1)
    frsp f2, f2
    psq_st f1, 0x0(r9), 0, 0
    stfs f2, 0x854(r6)
    stw r11, 0x858(r6)
    psq_st f1, 0x0(r12), 0, 0
    stfs f5, 0x20(r1)
    stfs f4, 0x24(r1)
    stfs f3, 0x28(r1)
    stfs f0, 0x2c(r1)
    stw r11, 0x4c(r1)
    stw r7, 0x50(r1)
    psq_st f1, 0x0(r10), 0, 0
    stw r11, 0x70(r1)
    stfs f6, 0x74(r1)
    stfs f6, 0x85c(r6)
lbl_fn_804AAD68_00001128:
    cmpwi r31, -0x1
    beq lbl_fn_804AAD68_0000117C
    lwz r0, 0x1334(r3)
    cmplwi r0, 0x40
    bge lbl_fn_804AAD68_0000117C
    lwz r0, 0x1334(r3)
    stw r4, 0x8(r1)
    slwi r0, r0, 3
    add r0, r3, r0
    stw r31, 0xc(r1)
    addic. r5, r0, 0x1338
    beq lbl_fn_804AAD68_00001160
    stw r4, 0x0(r5)
    stw r31, 0x4(r5)
lbl_fn_804AAD68_00001160:
    lwz r5, 0x1334(r3)
    mulli r0, r31, 0x2c
    li r4, 0x0
    addi r5, r5, 0x1
    stw r5, 0x1334(r3)
    add r3, r3, r0
    stw r4, 0x858(r3)
lbl_fn_804AAD68_0000117C:
    lwz r31, 0x7c(r1)
    addi r1, r1, 0x80
    blr
}

asm void fn_804AAFCC(void)
{
    nofralloc
    lwz r0, 0x1334(r3)
    addi r6, r3, 0x1338
    slwi r0, r0, 3
    add r5, r3, r0
    addi r5, r5, 0x1338
    b lbl_fn_804AAFCC_00001210
lbl_fn_804AAFCC_000011A0:
    lwz r0, 0x0(r6)
    cmplw r0, r4
    bne lbl_fn_804AAFCC_0000120C
    lwz r4, 0x4(r6)
    addi r0, r3, 0x1338
    subf r0, r0, r6
    li r5, -0x1
    mulli r4, r4, 0x2c
    srawi r0, r0, 3
    add r4, r3, r4
    addze r6, r0
    slwi r0, r6, 3
    stw r5, 0x834(r4)
    add r5, r3, r0
    b lbl_fn_804AAFCC_000011F4
lbl_fn_804AAFCC_000011DC:
    lwz r0, 0x1340(r5)
    addi r6, r6, 0x1
    stw r0, 0x1338(r5)
    lwz r0, 0x1344(r5)
    stw r0, 0x133c(r5)
    addi r5, r5, 0x8
lbl_fn_804AAFCC_000011F4:
    lwz r4, 0x1334(r3)
    subi r0, r4, 0x1
    cmplw r6, r0
    blt lbl_fn_804AAFCC_000011DC
    stw r0, 0x1334(r3)
    blr
lbl_fn_804AAFCC_0000120C:
    addi r6, r6, 0x8
lbl_fn_804AAFCC_00001210:
    cmplw r6, r5
    bne lbl_fn_804AAFCC_000011A0
    blr
}

asm void fn_804AB060(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    addi r10, r1, 0x10
    addi r9, r1, 0x1c
    addi r8, r1, 0x28
    stw r31, 0x20c(r1)
    addi r7, r1, 0x34
    addi r6, r1, 0x60
    addi r5, r1, 0x90
    lwz r0, 0x104(r4)
    mr r31, r4
    stw r0, 0x8(r1)
    lwz r0, 0x108(r4)
    stw r0, 0xc(r1)
    psq_l f1, 0x10c(r4), 0, 0
    lfs f2, 0x114(r4)
    stfs f2, 0x18(r1)
    psq_st f1, 0x0(r10), 0, 0
    psq_l f1, 0x118(r4), 0, 0
    lfs f2, 0x120(r4)
    stfs f2, 0x24(r1)
    psq_st f1, 0x0(r9), 0, 0
    psq_l f1, 0x124(r4), 0, 0
    lfs f2, 0x12c(r4)
    stfs f2, 0x30(r1)
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x130(r4), 0, 0
    lfs f2, 0x138(r4)
    stfs f2, 0x3c(r1)
    psq_st f1, 0x0(r7), 0, 0
    lfs f0, 0x13c(r4)
    stfs f0, 0x40(r1)
    lfs f0, 0x140(r4)
    stfs f0, 0x44(r1)
    lfs f0, 0x144(r4)
    stfs f0, 0x48(r1)
    lfs f0, 0x148(r4)
    stfs f0, 0x4c(r1)
    lfs f0, 0x14c(r4)
    stfs f0, 0x50(r1)
    lfs f0, 0x150(r4)
    stfs f0, 0x54(r1)
    lfs f0, 0x154(r4)
    stfs f0, 0x58(r1)
    lfs f0, 0x158(r4)
    stfs f0, 0x5c(r1)
    psq_l f1, 0x15c(r4), 0, 0
    psq_l f2, 0x164(r4), 0, 0
    psq_l f3, 0x16c(r4), 0, 0
    psq_l f4, 0x174(r4), 0, 0
    psq_l f5, 0x17c(r4), 0, 0
    psq_l f6, 0x184(r4), 0, 0
    psq_st f6, 0x28(r6), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    psq_st f3, 0x10(r6), 0, 0
    psq_st f4, 0x18(r6), 0, 0
    psq_st f5, 0x20(r6), 0, 0
    psq_l f1, 0x18c(r4), 0, 0
    psq_l f2, 0x194(r4), 0, 0
    psq_l f3, 0x19c(r4), 0, 0
    psq_l f4, 0x1a4(r4), 0, 0
    psq_l f5, 0x1ac(r4), 0, 0
    psq_l f6, 0x1b4(r4), 0, 0
    psq_l f7, 0x1bc(r4), 0, 0
    psq_l f8, 0x1c4(r4), 0, 0
    psq_st f8, 0x38(r5), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_st f7, 0x30(r5), 0, 0
    lfs f0, 0x1cc(r4)
    stfs f0, 0xd0(r1)
    lfs f0, 0x1d0(r4)
    addi r8, r1, 0x108
    stfs f0, 0xd4(r1)
    addi r5, r1, 0xd8
    addi r6, r8, 0x94
    addi r7, r4, 0x298
    psq_l f1, 0x1d4(r4), 0, 0
    addi r0, r8, 0xf4
    psq_l f2, 0x1dc(r4), 0, 0
    psq_l f3, 0x1e4(r4), 0, 0
    psq_l f4, 0x1ec(r4), 0, 0
    psq_l f5, 0x1f4(r4), 0, 0
    psq_l f6, 0x1fc(r4), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_l f1, 0x204(r4), 0, 0
    psq_l f2, 0x20c(r4), 0, 0
    psq_l f3, 0x214(r4), 0, 0
    psq_l f4, 0x21c(r4), 0, 0
    psq_l f5, 0x224(r4), 0, 0
    psq_l f6, 0x22c(r4), 0, 0
    psq_st f6, 0x28(r8), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    psq_st f2, 0x8(r8), 0, 0
    psq_st f3, 0x10(r8), 0, 0
    psq_st f4, 0x18(r8), 0, 0
    psq_st f5, 0x20(r8), 0, 0
    lwz r5, 0x234(r4)
    stw r5, 0x138(r1)
    lfs f0, 0x238(r4)
    stfs f0, 0x13c(r1)
    lfs f0, 0x23c(r4)
    stfs f0, 0x140(r1)
    psq_l f1, 0x240(r4), 0, 0
    lfs f2, 0x248(r4)
    stfs f2, 0x14c(r1)
    psq_st f1, 0x3c(r8), 0, 0
    lfs f0, 0x24c(r4)
    stfs f0, 0x150(r1)
    psq_l f1, 0x250(r4), 0, 0
    lfs f2, 0x258(r4)
    stfs f2, 0x15c(r1)
    psq_st f1, 0x4c(r8), 0, 0
    lfs f0, 0x25c(r4)
    stfs f0, 0x160(r1)
    psq_l f1, 0x260(r4), 0, 0
    lfs f2, 0x268(r4)
    stfs f2, 0x16c(r1)
    psq_st f1, 0x5c(r8), 0, 0
    lfs f0, 0x26c(r4)
    stfs f0, 0x170(r1)
    psq_l f1, 0x270(r4), 0, 0
    lfs f2, 0x278(r4)
    stfs f2, 0x17c(r1)
    psq_st f1, 0x6c(r8), 0, 0
    lfs f0, 0x27c(r4)
    stfs f0, 0x180(r1)
    psq_l f1, 0x280(r4), 0, 0
    lfs f2, 0x288(r4)
    stfs f2, 0x18c(r1)
    psq_st f1, 0x7c(r8), 0, 0
    psq_l f1, 0x28c(r4), 0, 0
    lfs f2, 0x294(r4)
    stfs f2, 0x198(r1)
    psq_st f1, 0x88(r8), 0, 0
lbl_fn_804AB060_00001464:
    lfs f2, 0x8(r7)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r7)
    addi r7, r7, 0x10
    stfs f0, 0xc(r6)
    addi r6, r6, 0x10
    cmplw r6, r0
    blt lbl_fn_804AB060_00001464
    lwz r0, 0x640(r3)
    stw r0, 0x104(r4)
    lwz r0, 0x644(r3)
    stw r0, 0x108(r4)
    psq_l f1, 0x648(r3), 0, 0
    lfs f2, 0x650(r3)
    stfs f2, 0x114(r4)
    psq_st f1, 0x10c(r4), 0, 0
    psq_l f1, 0x654(r3), 0, 0
    lfs f2, 0x65c(r3)
    stfs f2, 0x120(r4)
    psq_st f1, 0x118(r4), 0, 0
    psq_l f1, 0x660(r3), 0, 0
    lfs f2, 0x668(r3)
    stfs f2, 0x12c(r4)
    psq_st f1, 0x124(r4), 0, 0
    psq_l f1, 0x66c(r3), 0, 0
    lfs f2, 0x674(r3)
    stfs f2, 0x138(r4)
    psq_st f1, 0x130(r4), 0, 0
    lfs f0, 0x678(r3)
    stfs f0, 0x13c(r4)
    lfs f0, 0x67c(r3)
    stfs f0, 0x140(r4)
    lfs f0, 0x680(r3)
    stfs f0, 0x144(r4)
    lfs f0, 0x684(r3)
    stfs f0, 0x148(r4)
    lfs f0, 0x688(r3)
    stfs f0, 0x14c(r4)
    lfs f0, 0x68c(r3)
    stfs f0, 0x150(r4)
    lfs f0, 0x690(r3)
    stfs f0, 0x154(r4)
    lfs f0, 0x694(r3)
    stfs f0, 0x158(r4)
    psq_l f1, 0x698(r3), 0, 0
    psq_l f2, 0x6a0(r3), 0, 0
    psq_l f3, 0x6a8(r3), 0, 0
    psq_l f4, 0x6b0(r3), 0, 0
    psq_l f5, 0x6b8(r3), 0, 0
    psq_l f6, 0x6c0(r3), 0, 0
    psq_st f6, 0x184(r4), 0, 0
    psq_st f1, 0x15c(r4), 0, 0
    psq_st f2, 0x164(r4), 0, 0
    psq_st f3, 0x16c(r4), 0, 0
    psq_st f4, 0x174(r4), 0, 0
    psq_st f5, 0x17c(r4), 0, 0
    psq_l f1, 0x6c8(r3), 0, 0
    psq_l f2, 0x6d0(r3), 0, 0
    psq_l f3, 0x6d8(r3), 0, 0
    psq_l f4, 0x6e0(r3), 0, 0
    psq_l f5, 0x6e8(r3), 0, 0
    psq_l f6, 0x6f0(r3), 0, 0
    psq_l f7, 0x6f8(r3), 0, 0
    psq_l f8, 0x700(r3), 0, 0
    psq_st f8, 0x1c4(r4), 0, 0
    psq_st f1, 0x18c(r4), 0, 0
    psq_st f2, 0x194(r4), 0, 0
    psq_st f3, 0x19c(r4), 0, 0
    psq_st f4, 0x1a4(r4), 0, 0
    psq_st f5, 0x1ac(r4), 0, 0
    psq_st f6, 0x1b4(r4), 0, 0
    psq_st f7, 0x1bc(r4), 0, 0
    lfs f0, 0x708(r3)
    stfs f0, 0x1cc(r4)
    lfs f0, 0x70c(r3)
    addi r7, r4, 0x298
    stfs f0, 0x1d0(r4)
    addi r6, r3, 0x7d4
    addi r0, r4, 0x2f8
    psq_l f1, 0x710(r3), 0, 0
    psq_l f2, 0x718(r3), 0, 0
    psq_l f3, 0x720(r3), 0, 0
    psq_l f4, 0x728(r3), 0, 0
    psq_l f5, 0x730(r3), 0, 0
    psq_l f6, 0x738(r3), 0, 0
    psq_st f6, 0x1fc(r4), 0, 0
    psq_st f1, 0x1d4(r4), 0, 0
    psq_st f2, 0x1dc(r4), 0, 0
    psq_st f3, 0x1e4(r4), 0, 0
    psq_st f4, 0x1ec(r4), 0, 0
    psq_st f5, 0x1f4(r4), 0, 0
    psq_l f1, 0x740(r3), 0, 0
    psq_l f2, 0x748(r3), 0, 0
    psq_l f3, 0x750(r3), 0, 0
    psq_l f4, 0x758(r3), 0, 0
    psq_l f5, 0x760(r3), 0, 0
    psq_l f6, 0x768(r3), 0, 0
    psq_st f6, 0x22c(r4), 0, 0
    psq_st f1, 0x204(r4), 0, 0
    psq_st f2, 0x20c(r4), 0, 0
    psq_st f3, 0x214(r4), 0, 0
    psq_st f4, 0x21c(r4), 0, 0
    psq_st f5, 0x224(r4), 0, 0
    lwz r5, 0x770(r3)
    stw r5, 0x234(r4)
    lfs f0, 0x774(r3)
    stfs f0, 0x238(r4)
    lfs f0, 0x778(r3)
    stfs f0, 0x23c(r4)
    psq_l f1, 0x77c(r3), 0, 0
    lfs f2, 0x784(r3)
    stfs f2, 0x248(r4)
    psq_st f1, 0x240(r4), 0, 0
    lfs f0, 0x788(r3)
    stfs f0, 0x24c(r4)
    psq_l f1, 0x78c(r3), 0, 0
    lfs f2, 0x794(r3)
    stfs f2, 0x258(r4)
    psq_st f1, 0x250(r4), 0, 0
    lfs f0, 0x798(r3)
    stfs f0, 0x25c(r4)
    psq_l f1, 0x79c(r3), 0, 0
    lfs f2, 0x7a4(r3)
    stfs f2, 0x268(r4)
    psq_st f1, 0x260(r4), 0, 0
    lfs f0, 0x7a8(r3)
    stfs f0, 0x26c(r4)
    psq_l f1, 0x7ac(r3), 0, 0
    lfs f2, 0x7b4(r3)
    stfs f2, 0x278(r4)
    psq_st f1, 0x270(r4), 0, 0
    lfs f0, 0x7b8(r3)
    stfs f0, 0x27c(r4)
    psq_l f1, 0x7bc(r3), 0, 0
    lfs f2, 0x7c4(r3)
    stfs f2, 0x288(r4)
    psq_st f1, 0x280(r4), 0, 0
    psq_l f1, 0x7c8(r3), 0, 0
    lfs f2, 0x7d0(r3)
    stfs f2, 0x294(r4)
    psq_st f1, 0x28c(r4), 0, 0
lbl_fn_804AB060_000016A0:
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    lfs f0, 0xc(r6)
    addi r6, r6, 0x10
    stfs f0, 0xc(r7)
    addi r7, r7, 0x10
    cmplw r7, r0
    blt lbl_fn_804AB060_000016A0
    lwzu r12, 0x208(r3)
    mr r4, r31
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lwz r0, 0x8(r1)
    addi r3, r1, 0x10
    stw r0, 0x104(r31)
    addi r4, r1, 0x1c
    addi r5, r1, 0x28
    addi r6, r1, 0x34
    lwz r0, 0xc(r1)
    addi r7, r1, 0x60
    stw r0, 0x108(r31)
    addi r8, r1, 0x90
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x18(r1)
    stfs f2, 0x114(r31)
    psq_st f1, 0x10c(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x24(r1)
    stfs f2, 0x120(r31)
    psq_st f1, 0x118(r31), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x30(r1)
    stfs f2, 0x12c(r31)
    psq_st f1, 0x124(r31), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    lfs f2, 0x3c(r1)
    stfs f2, 0x138(r31)
    psq_st f1, 0x130(r31), 0, 0
    lfs f0, 0x40(r1)
    stfs f0, 0x13c(r31)
    lfs f0, 0x44(r1)
    stfs f0, 0x140(r31)
    lfs f0, 0x48(r1)
    stfs f0, 0x144(r31)
    lfs f0, 0x4c(r1)
    stfs f0, 0x148(r31)
    lfs f0, 0x50(r1)
    stfs f0, 0x14c(r31)
    lfs f0, 0x54(r1)
    stfs f0, 0x150(r31)
    lfs f0, 0x58(r1)
    stfs f0, 0x154(r31)
    lfs f0, 0x5c(r1)
    stfs f0, 0x158(r31)
    psq_l f1, 0x0(r7), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    psq_l f3, 0x10(r7), 0, 0
    psq_l f4, 0x18(r7), 0, 0
    psq_l f5, 0x20(r7), 0, 0
    psq_l f6, 0x28(r7), 0, 0
    psq_st f6, 0x184(r31), 0, 0
    psq_st f1, 0x15c(r31), 0, 0
    psq_st f2, 0x164(r31), 0, 0
    psq_st f3, 0x16c(r31), 0, 0
    psq_st f4, 0x174(r31), 0, 0
    psq_st f5, 0x17c(r31), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    psq_l f3, 0x10(r8), 0, 0
    psq_l f4, 0x18(r8), 0, 0
    psq_l f5, 0x20(r8), 0, 0
    psq_l f6, 0x28(r8), 0, 0
    psq_l f7, 0x30(r8), 0, 0
    psq_l f8, 0x38(r8), 0, 0
    psq_st f8, 0x1c4(r31), 0, 0
    psq_st f1, 0x18c(r31), 0, 0
    psq_st f2, 0x194(r31), 0, 0
    psq_st f3, 0x19c(r31), 0, 0
    psq_st f4, 0x1a4(r31), 0, 0
    psq_st f5, 0x1ac(r31), 0, 0
    psq_st f6, 0x1b4(r31), 0, 0
    psq_st f7, 0x1bc(r31), 0, 0
    lfs f0, 0xd0(r1)
    stfs f0, 0x1cc(r31)
    lfs f0, 0xd4(r1)
    stfs f0, 0x1d0(r31)
    addi r3, r1, 0xd8
    addi r4, r1, 0x108
    psq_l f1, 0x0(r3), 0, 0
    addi r6, r31, 0x298
    psq_l f2, 0x8(r3), 0, 0
    addi r5, r4, 0x94
    psq_l f3, 0x10(r3), 0, 0
    addi r0, r31, 0x2f8
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x1fc(r31), 0, 0
    psq_st f1, 0x1d4(r31), 0, 0
    psq_st f2, 0x1dc(r31), 0, 0
    psq_st f3, 0x1e4(r31), 0, 0
    psq_st f4, 0x1ec(r31), 0, 0
    psq_st f5, 0x1f4(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x22c(r31), 0, 0
    psq_st f1, 0x204(r31), 0, 0
    psq_st f2, 0x20c(r31), 0, 0
    psq_st f3, 0x214(r31), 0, 0
    psq_st f4, 0x21c(r31), 0, 0
    psq_st f5, 0x224(r31), 0, 0
    lwz r3, 0x138(r1)
    stw r3, 0x234(r31)
    lfs f0, 0x13c(r1)
    stfs f0, 0x238(r31)
    lfs f0, 0x140(r1)
    stfs f0, 0x23c(r31)
    psq_l f1, 0x3c(r4), 0, 0
    lfs f2, 0x14c(r1)
    stfs f2, 0x248(r31)
    psq_st f1, 0x240(r31), 0, 0
    lfs f0, 0x150(r1)
    stfs f0, 0x24c(r31)
    psq_l f1, 0x4c(r4), 0, 0
    lfs f2, 0x15c(r1)
    stfs f2, 0x258(r31)
    psq_st f1, 0x250(r31), 0, 0
    lfs f0, 0x160(r1)
    stfs f0, 0x25c(r31)
    psq_l f1, 0x5c(r4), 0, 0
    lfs f2, 0x16c(r1)
    stfs f2, 0x268(r31)
    psq_st f1, 0x260(r31), 0, 0
    lfs f0, 0x170(r1)
    stfs f0, 0x26c(r31)
    psq_l f1, 0x6c(r4), 0, 0
    lfs f2, 0x17c(r1)
    stfs f2, 0x278(r31)
    psq_st f1, 0x270(r31), 0, 0
    lfs f0, 0x180(r1)
    stfs f0, 0x27c(r31)
    psq_l f1, 0x7c(r4), 0, 0
    lfs f2, 0x18c(r1)
    stfs f2, 0x288(r31)
    psq_st f1, 0x280(r31), 0, 0
    psq_l f1, 0x88(r4), 0, 0
    lfs f2, 0x198(r1)
    stfs f2, 0x294(r31)
    psq_st f1, 0x28c(r31), 0, 0
lbl_fn_804AB060_00001910:
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    addi r5, r5, 0x10
    stfs f0, 0xc(r6)
    addi r6, r6, 0x10
    cmplw r6, r0
    blt lbl_fn_804AB060_00001910
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_8004B338
    lwz r0, 0x214(r1)
    lwz r31, 0x20c(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_804AB79C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    stfd f29, 0x20(r1)
    psq_st f29, 0x28(r1), 0, 0
    stfd f28, 0x10(r1)
    psq_st f28, 0x18(r1), 0, 0
    psq_l f1, 0x8(r4), 0, 0
    lfs f2, 0x10(r4)
    psq_st f1, 0x8(r3), 0, 0
    psq_l f1, 0x14(r4), 0, 0
    stfs f2, 0x10(r3)
    lfs f2, 0x1c(r4)
    psq_st f1, 0x14(r3), 0, 0
    psq_l f1, 0x20(r4), 0, 0
    stfs f2, 0x1c(r3)
    lfs f2, 0x28(r4)
    psq_st f1, 0x20(r3), 0, 0
    psq_l f1, 0x2c(r4), 0, 0
    stfs f2, 0x28(r3)
    lfs f2, 0x34(r4)
    psq_st f1, 0x2c(r3), 0, 0
    psq_l f1, 0x58(r4), 0, 0
    stfs f2, 0x34(r3)
    psq_l f2, 0x60(r4), 0, 0
    psq_l f3, 0x68(r4), 0, 0
    psq_l f4, 0x70(r4), 0, 0
    psq_l f5, 0x78(r4), 0, 0
    psq_l f6, 0x80(r4), 0, 0
    psq_st f1, 0x58(r3), 0, 0
    lwz r5, 0x0(r4)
    psq_st f2, 0x60(r3), 0, 0
    lwz r0, 0x4(r4)
    psq_st f3, 0x68(r3), 0, 0
    lfs f28, 0x38(r4)
    psq_st f4, 0x70(r3), 0, 0
    lfs f29, 0x3c(r4)
    psq_st f5, 0x78(r3), 0, 0
    lfs f30, 0x40(r4)
    psq_st f6, 0x80(r3), 0, 0
    lfs f31, 0x44(r4)
    lfs f13, 0x48(r4)
    lfs f12, 0x4c(r4)
    lfs f11, 0x50(r4)
    lfs f10, 0x54(r4)
    psq_l f1, 0x88(r4), 0, 0
    psq_l f2, 0x90(r4), 0, 0
    psq_l f3, 0x98(r4), 0, 0
    psq_l f4, 0xa0(r4), 0, 0
    psq_l f5, 0xa8(r4), 0, 0
    psq_l f6, 0xb0(r4), 0, 0
    psq_l f7, 0xb8(r4), 0, 0
    psq_l f8, 0xc0(r4), 0, 0
    lfs f9, 0xc8(r4)
    lfs f0, 0xcc(r4)
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    stfs f28, 0x38(r3)
    stfs f29, 0x3c(r3)
    stfs f30, 0x40(r3)
    stfs f31, 0x44(r3)
    stfs f13, 0x48(r3)
    stfs f12, 0x4c(r3)
    stfs f11, 0x50(r3)
    stfs f10, 0x54(r3)
    psq_st f1, 0x88(r3), 0, 0
    psq_st f2, 0x90(r3), 0, 0
    psq_st f3, 0x98(r3), 0, 0
    psq_st f4, 0xa0(r3), 0, 0
    psq_st f5, 0xa8(r3), 0, 0
    psq_st f6, 0xb0(r3), 0, 0
    psq_st f7, 0xb8(r3), 0, 0
    psq_st f8, 0xc0(r3), 0, 0
    stfs f9, 0xc8(r3)
    stfs f0, 0xcc(r3)
    psq_l f1, 0xd0(r4), 0, 0
    addi r6, r4, 0x17c
    psq_l f2, 0xd8(r4), 0, 0
    addi r7, r3, 0x17c
    psq_st f1, 0xd0(r3), 0, 0
    addi r9, r3, 0x194
    psq_l f1, 0x100(r4), 0, 0
    addi r8, r4, 0x194
    psq_st f2, 0xd8(r3), 0, 0
    addi r0, r3, 0x1f4
    psq_l f2, 0x108(r4), 0, 0
    psq_st f1, 0x100(r3), 0, 0
    psq_l f1, 0x13c(r4), 0, 0
    psq_st f2, 0x108(r3), 0, 0
    lfs f2, 0x144(r4)
    psq_st f1, 0x13c(r3), 0, 0
    psq_l f1, 0x14c(r4), 0, 0
    stfs f2, 0x144(r3)
    lfs f2, 0x154(r4)
    psq_st f1, 0x14c(r3), 0, 0
    psq_l f1, 0x15c(r4), 0, 0
    stfs f2, 0x154(r3)
    lfs f2, 0x164(r4)
    psq_st f1, 0x15c(r3), 0, 0
    psq_l f1, 0x16c(r4), 0, 0
    stfs f2, 0x164(r3)
    lfs f2, 0x174(r4)
    psq_st f1, 0x16c(r3), 0, 0
    psq_l f3, 0xe0(r4), 0, 0
    stfs f2, 0x174(r3)
    psq_l f4, 0xe8(r4), 0, 0
    psq_l f5, 0xf0(r4), 0, 0
    psq_l f6, 0xf8(r4), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    lfs f2, 0x184(r4)
    psq_st f3, 0xe0(r3), 0, 0
    psq_l f3, 0x110(r4), 0, 0
    psq_st f4, 0xe8(r3), 0, 0
    psq_l f4, 0x118(r4), 0, 0
    psq_st f5, 0xf0(r3), 0, 0
    psq_l f5, 0x120(r4), 0, 0
    psq_st f6, 0xf8(r3), 0, 0
    psq_l f6, 0x128(r4), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    lwz r5, 0x130(r4)
    stfs f2, 0x184(r3)
    lfs f13, 0x134(r4)
    lfs f12, 0x138(r4)
    lfs f11, 0x148(r4)
    lfs f10, 0x158(r4)
    lfs f9, 0x168(r4)
    lfs f0, 0x178(r4)
    psq_l f1, 0xc(r6), 0, 0
    lfs f2, 0x190(r4)
    psq_st f3, 0x110(r3), 0, 0
    psq_st f4, 0x118(r3), 0, 0
    psq_st f5, 0x120(r3), 0, 0
    psq_st f6, 0x128(r3), 0, 0
    stw r5, 0x130(r3)
    stfs f13, 0x134(r3)
    stfs f12, 0x138(r3)
    stfs f11, 0x148(r3)
    stfs f10, 0x158(r3)
    stfs f9, 0x168(r3)
    stfs f0, 0x178(r3)
    psq_st f1, 0xc(r7), 0, 0
    stfs f2, 0x190(r3)
lbl_fn_804AB79C_00001B98:
    psq_l f1, 0x0(r8), 0, 0
    psq_st f1, 0x0(r9), 0, 0
    lfs f2, 0x8(r8)
    stfs f2, 0x8(r9)
    lfs f0, 0xc(r8)
    addi r8, r8, 0x10
    stfs f0, 0xc(r9)
    addi r9, r9, 0x10
    cmplw r9, r0
    blt lbl_fn_804AB79C_00001B98
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    psq_l f29, 0x28(r1), 0, 0
    lfd f29, 0x20(r1)
    psq_l f28, 0x18(r1), 0, 0
    lfd f28, 0x10(r1)
    addi r1, r1, 0x50
    blr
}
