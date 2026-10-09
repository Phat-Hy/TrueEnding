#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_23(void);
extern void _restgpr_26(void);
extern void _savegpr_21(void);
extern void _savegpr_23(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8004ECC0(void);
extern void fn_80051B70(void);
extern void fn_80051CD8(void);
extern void fn_80084320(void);
extern void fn_8008A4E0(void);
extern void fn_8008A76C(void);
extern void fn_800BFAC8(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800CB688(void);
extern void fn_800EF73C(void);
extern void fn_80211480(void);
extern void fn_80216AFC(void);
extern void fn_8021D720(void);
extern void fn_8021D770(void);
extern void fn_8021E4E4(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_8037F6D8(void);
extern void fn_803CC6B4(void);
extern void fn_803E3050(void);
extern void fn_803E3BE8(void);
extern void fn_803E5E64(void);
extern void fn_803E6ADC(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_80445130(void);
extern void fn_80448F9C(void);
extern void fn_8044E418(void);
extern void fn_8044E610(void);
extern void fn_8044E644(void);
extern void fn_8044F434(void);
extern void fn_80450778(void);
extern void fn_80450A5C(void);
extern void fn_80450B60(void);
extern void fn_8054E100(void);
extern void fn_8054E52C(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);

/* External data declarations */
extern u8 lbl_807541A0[];
extern u8 lbl_807541F0[];
extern u8 lbl_8078EED8[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F8A8;
extern u32 lbl_80886894;
extern u32 lbl_80886898;
extern u32 lbl_8088689C;
extern u32 lbl_808868A0;
extern u32 lbl_808868A8;
extern u32 lbl_808868AC;
extern u32 lbl_808868B0;
extern u32 lbl_808868B4;
extern u32 lbl_808868B8;
extern u32 lbl_808868BC;
extern u32 lbl_808868C0;
extern u32 lbl_808868C8;
extern u32 lbl_808868CC;
extern u32 lbl_808868D0;

/* Function declarations */
void fn_80434604(void);
void fn_8043465C(void);
void fn_804348C4(void);
void fn_80435684(void);
void fn_80435908(void);
void fn_80435CBC(void);
void fn_80435CE4(void);
void fn_80435DEC(void);
void fn_80435F58(void);

asm void fn_80434604(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_80886894
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8043465C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x100
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    bl _savegpr_21
    lwz r4, lbl_8087F8A0
    mr r31, r3
    cmpwi r4, 0x0
    beq lbl_fn_8043465C_00000298
    lwz r5, 0x48(r4)
    cmpwi r5, 0x0
    bne lbl_fn_8043465C_0000009C
    b lbl_fn_8043465C_00000298
lbl_fn_8043465C_0000009C:
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8043465C_00000298
    lwz r4, 0x11c(r3)
    cmpwi r4, 0x2
    bne lbl_fn_8043465C_000000C0
    lwz r0, 0x168(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8043465C_00000298
lbl_fn_8043465C_000000C0:
    cmpwi r4, 0x3
    bne lbl_fn_8043465C_000000CC
    b lbl_fn_8043465C_00000298
lbl_fn_8043465C_000000CC:
    psq_l f1, 0x614(r5), 0, 0
    addi r4, r1, 0x20
    lfs f2, 0x61c(r5)
    li r0, 0x0
    stfs f2, 0x28(r1)
    addi r28, r1, 0x9c
    lfs f30, lbl_80886894
    addi r27, r1, 0x30
    psq_st f1, 0x0(r4), 0, 0
    addi r26, r1, 0x90
    lfs f31, lbl_8088689C
    li r23, 0x0
    lfs f0, 0x620(r5)
    li r30, 0x0
    stfs f0, 0x2c(r1)
    lwz r24, 0x144(r3)
    stw r0, 0x144(r3)
    b lbl_fn_8043465C_00000244
lbl_fn_8043465C_00000114:
    lwz r0, 0x140(r31)
    li r21, 0x0
    li r29, 0x0
    add r22, r0, r30
    b lbl_fn_8043465C_00000224
lbl_fn_8043465C_00000128:
    lwz r0, 0x10(r22)
    addi r3, r1, 0x60
    li r4, 0x79
    stfs f30, 0xc8(r1)
    add r25, r0, r29
    stfs f30, 0xc0(r1)
    stfs f30, 0xbc(r1)
    stfs f30, 0xb8(r1)
    stfs f30, 0xb4(r1)
    stfs f30, 0xac(r1)
    stfs f30, 0xa8(r1)
    stfs f30, 0xa4(r1)
    stfs f30, 0xa0(r1)
    stfs f31, 0xc4(r1)
    stfs f31, 0xb0(r1)
    stfs f31, 0x9c(r1)
    lfs f1, 0xc(r25)
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x60
    addi r5, r1, 0x30
    bl fn_805F89F0
    psq_l f1, 0x0(r27), 0, 0
    mr r4, r26
    psq_l f2, 0x8(r27), 0, 0
    addi r3, r1, 0x20
    psq_l f3, 0x10(r27), 0, 0
    psq_l f4, 0x18(r27), 0, 0
    psq_l f5, 0x20(r27), 0, 0
    psq_l f6, 0x28(r27), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
    lfs f9, 0x14(r25)
    lfs f8, 0x8(r25)
    lfs f7, 0x4(r25)
    lfs f0, 0x0(r25)
    fadds f8, f8, f30
    fadds f7, f7, f9
    stfs f30, 0x8(r1)
    fadds f0, f0, f30
    stfs f7, 0xb8(r1)
    stfs f0, 0xa8(r1)
    stfs f8, 0xc8(r1)
    psq_l f1, 0x10(r25), 0, 0
    lfs f2, 0x18(r25)
    stfs f9, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f8, 0x1c(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x98(r1)
    bl fn_80051CD8
    cmpwi r3, 0x0
    beq lbl_fn_8043465C_0000021C
    stw r22, 0x144(r31)
    b lbl_fn_8043465C_00000230
lbl_fn_8043465C_0000021C:
    addi r21, r21, 0x1
    addi r29, r29, 0x1c
lbl_fn_8043465C_00000224:
    lwz r0, 0x8(r22)
    cmplw r21, r0
    blt lbl_fn_8043465C_00000128
lbl_fn_8043465C_00000230:
    lwz r0, 0x144(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8043465C_00000250
    addi r23, r23, 0x1
    addi r30, r30, 0x830
lbl_fn_8043465C_00000244:
    lwz r0, 0x138(r31)
    cmplw r23, r0
    blt lbl_fn_8043465C_00000114
lbl_fn_8043465C_00000250:
    lwz r0, 0x144(r31)
    cmplw r24, r0
    beq lbl_fn_8043465C_00000298
    cmpwi r0, 0x0
    beq lbl_fn_8043465C_00000280
    lwz r0, 0x11c(r31)
    cmpwi r0, 0x4
    beq lbl_fn_8043465C_00000298
    mr r3, r31
    li r4, 0x1
    bl fn_80435684
    b lbl_fn_8043465C_00000298
lbl_fn_8043465C_00000280:
    lwz r0, 0x11c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8043465C_00000298
    mr r3, r31
    li r4, 0x0
    bl fn_80435684
lbl_fn_8043465C_00000298:
    addi r11, r1, 0x100
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    bl _restgpr_21
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_804348C4(void)
{
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    stw r0, 0x2d4(r1)
    addi r11, r1, 0x2a0
    stfd f31, 0x2c0(r1)
    psq_st f31, 0x2c8(r1), 0, 0
    stfd f30, 0x2b0(r1)
    psq_st f30, 0x2b8(r1), 0, 0
    stfd f29, 0x2a0(r1)
    psq_st f29, 0x2a8(r1), 0, 0
    bl _savegpr_26
    lwz r0, 0x144(r3)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_804348C4_00000308
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804348C4_00000324
lbl_fn_804348C4_00000308:
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804348C4_00001050
    mr r3, r29
    li r4, 0x0
    bl fn_80435684
    b lbl_fn_804348C4_00001050
lbl_fn_804348C4_00000324:
    lwz r4, lbl_8087F430
    li r5, 0x0
    addi r30, r4, 0x6c
    lwz r4, 0x868(r4)
    subi r4, r4, 0x1
    cmplwi r4, 0x3
    bgt lbl_fn_804348C4_00000354
    li r0, 0x1
    slw r0, r0, r4
    andi. r0, r0, 0xd
    beq lbl_fn_804348C4_00000354
    li r5, 0x1
lbl_fn_804348C4_00000354:
    cmpwi r5, 0x0
    bne lbl_fn_804348C4_00000368
    li r0, 0x0
    stw r0, 0x858(r30)
    stw r0, 0x838(r30)
lbl_fn_804348C4_00000368:
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x1
    beq lbl_fn_804348C4_00000388
    cmpwi r0, 0x2
    beq lbl_fn_804348C4_000003A8
    cmpwi r0, 0x3
    beq lbl_fn_804348C4_00000A6C
    b lbl_fn_804348C4_00000E8C
lbl_fn_804348C4_00000388:
    lwz r4, 0x148(r3)
    subic. r0, r4, 0x1
    stw r0, 0x148(r3)
    bgt lbl_fn_804348C4_00000E8C
    mr r3, r29
    li r4, 0x2
    bl fn_80435684
    b lbl_fn_804348C4_00000E8C
lbl_fn_804348C4_000003A8:
    lwz r0, 0x168(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804348C4_000003C4
    mr r3, r29
    li r4, 0x2
    bl fn_80435684
    b lbl_fn_804348C4_00000E8C
lbl_fn_804348C4_000003C4:
    lwz r3, 0x7fc(r30)
    li r4, 0x0
    subi r3, r3, 0x1
    cmplwi r3, 0x3
    bgt lbl_fn_804348C4_000003EC
    li r0, 0x1
    slw r0, r0, r3
    andi. r0, r0, 0xd
    beq lbl_fn_804348C4_000003EC
    li r4, 0x1
lbl_fn_804348C4_000003EC:
    cmpwi r4, 0x0
    beq lbl_fn_804348C4_00000A4C
    lfs f2, 0x10(r30)
    addi r3, r1, 0x18c
    psq_l f1, 0x8(r30), 0, 0
    addi r27, r1, 0x180
    psq_st f1, 0x0(r27), 0, 0
    frsp f0, f2
    mr r4, r3
    stfs f2, 0x188(r1)
    lfs f9, 0x180(r1)
    lfs f2, 0x1c(r30)
    psq_l f1, 0x14(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    fsubs f0, f2, f0
    lfs f7, 0x184(r1)
    lfs f10, 0x18c(r1)
    lfs f8, 0x190(r1)
    fsubs f9, f10, f9
    stfs f0, 0x194(r1)
    fsubs f0, f8, f7
    stfs f9, 0x18c(r1)
    stfs f0, 0x190(r1)
    bl fn_805F98D0
    lfs f8, 0x18c(r1)
    addi r28, r1, 0x130
    lfs f9, lbl_808868A8
    addi r4, r1, 0x140
    lfs f7, 0x190(r1)
    addi r3, r1, 0x68
    fmuls f11, f8, f9
    lfs f8, 0x180(r1)
    fmuls f10, f7, f9
    lfs f0, 0x194(r1)
    lfs f7, 0x184(r1)
    fmuls f9, f0, f9
    lfs f0, 0x188(r1)
    fadds f8, f11, f8
    fadds f7, f10, f7
    fadds f0, f9, f0
    stfs f8, 0x18c(r1)
    stfs f7, 0x190(r1)
    stfs f0, 0x194(r1)
    lfs f2, 0x15c(r29)
    psq_l f1, 0x154(r29), 0, 0
    lfs f11, 0x120(r29)
    frsp f10, f2
    stfs f11, 0x13c(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x138(r1)
    lfs f9, 0x134(r1)
    lfs f0, 0x10(r30)
    lfs f8, 0xc(r30)
    fsubs f10, f10, f0
    lfs f0, 0x8(r30)
    lfs f7, 0x130(r1)
    fsubs f8, f9, f8
    psq_st f1, 0x0(r4), 0, 0
    fsubs f0, f7, f0
    stfs f2, 0x148(r1)
    stfs f11, 0x14c(r1)
    stfs f0, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f10, 0x70(r1)
    bl fn_805F9940
    lfs f7, 0x14c(r1)
    addi r31, r1, 0x198
    lfs f0, lbl_80886894
    addi r4, r1, 0x124
    fneg f8, f7
    stfs f0, 0x12c(r1)
    fmr f29, f1
    mr r3, r31
    stfs f8, 0x124(r1)
    mr r5, r4
    stfs f8, 0x128(r1)
    stfs f7, 0x118(r1)
    stfs f7, 0x11c(r1)
    stfs f0, 0x120(r1)
    psq_l f1, 0xd0(r30), 0, 0
    psq_l f2, 0xd8(r30), 0, 0
    psq_l f3, 0xe0(r30), 0, 0
    psq_l f4, 0xe8(r30), 0, 0
    psq_l f5, 0xf0(r30), 0, 0
    psq_l f6, 0xf8(r30), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    stfs f0, 0x1a4(r1)
    stfs f0, 0x1b4(r1)
    stfs f0, 0x1c4(r1)
    bl fn_805F93C0
    addi r4, r1, 0x118
    mr r3, r31
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x148(r1)
    addi r3, r1, 0xc8
    lfs f0, 0x12c(r1)
    addi r5, r1, 0x10c
    lfs f9, 0x144(r1)
    fadds f10, f7, f0
    lfs f8, 0x128(r1)
    lfs f7, 0x140(r1)
    lfs f0, 0x124(r1)
    fadds f8, f9, f8
    stfs f10, 0x114(r1)
    fadds f0, f7, f0
    lwz r4, lbl_8087EFB4
    stfs f8, 0x110(r1)
    stfs f0, 0x10c(r1)
    bl fn_800BFAC8
    lfs f9, 0x148(r1)
    addi r4, r1, 0xc8
    lfs f8, 0x120(r1)
    addi r6, r1, 0x10c
    lfs f7, 0x144(r1)
    addi r3, r1, 0xbc
    fadds f8, f9, f8
    lfs f0, 0x11c(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r5, r1, 0x100
    fadds f9, f7, f0
    lfs f2, 0xd0(r1)
    lfs f7, 0x140(r1)
    lfs f0, 0x118(r1)
    psq_st f1, 0x0(r6), 0, 0
    fadds f0, f7, f0
    lwz r4, lbl_8087EFB4
    stfs f2, 0x114(r1)
    stfs f0, 0x100(r1)
    stfs f9, 0x104(r1)
    stfs f8, 0x108(r1)
    bl fn_800BFAC8
    addi r3, r1, 0xbc
    lfs f2, 0xc4(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x100
    psq_st f1, 0x0(r4), 0, 0
    mr r3, r27
    lfs f10, 0x110(r1)
    mr r4, r28
    lfs f7, 0x104(r1)
    li r31, 0x0
    lfs f8, 0x10c(r1)
    fsubs f12, f10, f7
    lfs f0, 0x100(r1)
    fadds f10, f10, f7
    lfs f9, lbl_80886898
    fsubs f11, f8, f0
    lfs f7, lbl_808868AC
    fabs f12, f12
    stfs f2, 0x108(r1)
    fabs f13, f11
    fadds f0, f8, f0
    frsp f11, f12
    fmuls f8, f9, f10
    frsp f12, f13
    stfs f8, 0x3c(r1)
    fmuls f8, f9, f0
    fmuls f10, f9, f11
    fmuls f9, f9, f12
    stfs f8, 0x38(r1)
    fadds f0, f10, f7
    fadds f7, f9, f7
    stfs f0, 0x34(r1)
    stfs f7, 0x30(r1)
    bl fn_80051B70
    cmpwi r3, 0x0
    beq lbl_fn_804348C4_000008B4
    lfs f2, 0x188(r1)
    addi r3, r1, 0x168
    psq_l f1, 0x0(r27), 0, 0
    addi r27, r1, 0x174
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x5c
    psq_l f1, 0x0(r28), 0, 0
    stfs f2, 0x170(r1)
    lfs f2, 0x138(r1)
    psq_st f1, 0x0(r27), 0, 0
    lfs f0, 0x170(r1)
    lfs f9, 0x178(r1)
    fsubs f10, f2, f0
    lfs f8, 0x16c(r1)
    lfs f7, 0x174(r1)
    lfs f0, 0x168(r1)
    fsubs f8, f9, f8
    stfs f2, 0x17c(r1)
    fsubs f0, f7, f0
    lfs f30, 0x13c(r1)
    stfs f8, 0x60(r1)
    stfs f0, 0x5c(r1)
    stfs f10, 0x64(r1)
    bl fn_805F9940
    fabs f7, f1
    lfs f0, lbl_808868B0
    fmr f31, f1
    frsp f7, f7
    fcmpo cr0, f7, f0
    blt lbl_fn_804348C4_00000794
    lfs f7, 0x174(r1)
    mr r3, r27
    lfs f0, 0x168(r1)
    mr r4, r27
    lfs f9, 0x178(r1)
    fsubs f10, f7, f0
    lfs f8, 0x16c(r1)
    lfs f7, 0x17c(r1)
    lfs f0, 0x170(r1)
    fsubs f8, f9, f8
    stfs f10, 0x174(r1)
    fsubs f0, f7, f0
    stfs f8, 0x178(r1)
    stfs f0, 0x17c(r1)
    bl fn_805F98D0
    fsubs f9, f31, f30
    lfs f8, 0x174(r1)
    lfs f7, 0x178(r1)
    lfs f0, 0x17c(r1)
    fmuls f11, f8, f9
    lfs f8, 0x168(r1)
    fmuls f10, f7, f9
    lfs f7, 0x16c(r1)
    fmuls f9, f0, f9
    lfs f0, 0x170(r1)
    fadds f8, f11, f8
    fadds f7, f10, f7
    fadds f0, f9, f0
    stfs f8, 0x174(r1)
    stfs f7, 0x178(r1)
    stfs f0, 0x17c(r1)
lbl_fn_804348C4_00000794:
    lis r4, 0x8000
    lwz r3, lbl_8087EE98
    addi r7, r4, 0x10
    addi r5, r1, 0x168
    addi r6, r1, 0x174
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ECC0
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_804348C4_000008B4
    lfs f9, 0x148(r1)
    addi r4, r1, 0xb0
    lfs f7, 0x120(r1)
    addi r5, r1, 0xa4
    lfs f0, 0x12c(r1)
    li r31, 0x1
    fadds f11, f9, f7
    lfs f8, 0x144(r1)
    fadds f9, f9, f0
    lfs f7, 0x11c(r1)
    lfs f0, 0x128(r1)
    fadds f12, f8, f7
    fadds f10, f8, f0
    lfs f8, 0x140(r1)
    lfs f7, 0x118(r1)
    lfs f0, 0x124(r1)
    fadds f7, f8, f7
    stfs f12, 0xa8(r1)
    fadds f0, f8, f0
    lwz r3, lbl_8087F490
    stfs f7, 0xa4(r1)
    stfs f11, 0xac(r1)
    stfs f0, 0xb0(r1)
    stfs f10, 0xb4(r1)
    stfs f9, 0xb8(r1)
    bl fn_803E6ADC
    lwz r3, lbl_8087F430
    lwz r28, lbl_8087F490
    lwz r27, 0x10d8(r3)
    bl fn_80680CF8
    slwi r0, r3, 30
    srwi r5, r3, 31
    subf r3, r5, r0
    lwz r0, 0x124(r29)
    rotlwi r4, r3, 2
    add r4, r4, r5
    mr r3, r27
    add r4, r0, r4
    bl fn_803CC6B4
    lfs f1, lbl_80886894
    mr r4, r3
    mr r3, r28
    li r5, 0x0
    bl fn_803E3BE8
    lis r3, lbl_807541A0@ha
    lfs f1, lbl_8088689C
    lwz r4, lbl_807541A0@l(r3)
    addi r3, r1, 0x10
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r30
    addi r4, r29, 0x154
    bl fn_8037F6D8
    mr r3, r29
    li r4, 0x3
    bl fn_80435684
lbl_fn_804348C4_000008B4:
    cmpwi r31, 0x0
    bne lbl_fn_804348C4_00000A4C
    lfs f0, lbl_808868A8
    fcmpo cr0, f29, f0
    bge lbl_fn_804348C4_00000A4C
    addi r3, r1, 0x180
    lfs f2, 0x188(r1)
    stfs f2, 0x158(r1)
    addi r4, r1, 0x130
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x150
    psq_st f1, 0x0(r5), 0, 0
    addi r27, r1, 0x15c
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x50
    psq_st f1, 0x0(r27), 0, 0
    lfs f2, 0x138(r1)
    lfs f0, 0x158(r1)
    lfs f9, 0x160(r1)
    fsubs f10, f2, f0
    lfs f8, 0x154(r1)
    lfs f7, 0x15c(r1)
    lfs f0, 0x150(r1)
    fsubs f8, f9, f8
    stfs f2, 0x164(r1)
    fsubs f0, f7, f0
    lfs f30, 0x13c(r1)
    stfs f8, 0x54(r1)
    stfs f0, 0x50(r1)
    stfs f10, 0x58(r1)
    bl fn_805F9940
    fabs f7, f1
    lfs f0, lbl_808868B0
    fmr f31, f1
    frsp f7, f7
    fcmpo cr0, f7, f0
    blt lbl_fn_804348C4_000009C4
    lfs f7, 0x15c(r1)
    mr r3, r27
    lfs f0, 0x150(r1)
    mr r4, r27
    lfs f9, 0x160(r1)
    fsubs f10, f7, f0
    lfs f8, 0x154(r1)
    lfs f7, 0x164(r1)
    lfs f0, 0x158(r1)
    fsubs f8, f9, f8
    stfs f10, 0x15c(r1)
    fsubs f0, f7, f0
    stfs f8, 0x160(r1)
    stfs f0, 0x164(r1)
    bl fn_805F98D0
    fsubs f9, f31, f30
    lfs f8, 0x15c(r1)
    lfs f7, 0x160(r1)
    lfs f0, 0x164(r1)
    fmuls f11, f8, f9
    lfs f8, 0x150(r1)
    fmuls f10, f7, f9
    lfs f7, 0x154(r1)
    fmuls f9, f0, f9
    lfs f0, 0x158(r1)
    fadds f8, f11, f8
    fadds f7, f10, f7
    fadds f0, f9, f0
    stfs f8, 0x15c(r1)
    stfs f7, 0x160(r1)
    stfs f0, 0x164(r1)
lbl_fn_804348C4_000009C4:
    lis r4, 0x8000
    lwz r3, lbl_8087EE98
    addi r7, r4, 0x10
    addi r5, r1, 0x150
    addi r6, r1, 0x15c
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ECC0
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_804348C4_00000A4C
    lfs f7, 0x3c(r1)
    addi r3, r1, 0x140
    lfs f0, 0x38(r1)
    addi r4, r1, 0x98
    psq_l f1, 0x0(r3), 0, 0
    addi r7, r1, 0xf4
    lfs f8, 0x114(r1)
    addi r5, r1, 0x8c
    lfs f2, 0x148(r1)
    addi r6, r1, 0x30
    stfs f2, 0xa0(r1)
    fmr f2, f8
    lwz r3, lbl_8087F490
    stfs f0, 0xf4(r1)
    stfs f7, 0xf8(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f29
    stfs f8, 0xfc(r1)
    stfs f2, 0x94(r1)
    bl fn_803E3050
lbl_fn_804348C4_00000A4C:
    lwz r3, 0x14c(r29)
    subic. r0, r3, 0x1
    stw r0, 0x14c(r29)
    bgt lbl_fn_804348C4_00000E8C
    mr r3, r29
    li r4, 0x4
    bl fn_80435684
    b lbl_fn_804348C4_00000E8C
lbl_fn_804348C4_00000A6C:
    lwz r4, lbl_8087F8A0
    cmpwi r4, 0x0
    beq lbl_fn_804348C4_00000E70
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_804348C4_00000E70
    lwz r0, lbl_8087F4F0
    cmpwi r0, 0x0
    beq lbl_fn_804348C4_00000E70
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_804348C4_00000E70
    lwz r26, 0x48(r4)
    lfs f7, 0x15c(r3)
    lfs f0, 0x530(r26)
    lfs f9, 0x158(r3)
    fsubs f10, f7, f0
    lfs f8, 0x52c(r26)
    lfs f7, 0x154(r3)
    addi r3, r1, 0x80
    lfs f0, 0x528(r26)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x84(r1)
    stfs f0, 0x80(r1)
    stfs f10, 0x88(r1)
    bl fn_805F9920
    lfs f0, lbl_808868B4
    fcmpo cr0, f1, f0
    bge lbl_fn_804348C4_00000E70
    lfs f10, lbl_80886894
    li r27, 0x0
    lwz r5, 0x160(r29)
    mr r3, r29
    lfs f9, lbl_808868B8
    li r4, 0x1
    lfs f8, 0x15c(r29)
    addi r0, r5, 0x1
    lfs f7, 0x158(r29)
    lfs f0, 0x154(r29)
    fadds f8, f8, f10
    stw r27, 0x168(r29)
    fadds f7, f7, f9
    fadds f0, f0, f10
    stw r0, 0x160(r29)
    stfs f10, 0x74(r1)
    stfs f9, 0x78(r1)
    stfs f10, 0x7c(r1)
    stfs f0, 0xe8(r1)
    stfs f7, 0xec(r1)
    stfs f8, 0xf0(r1)
    bl fn_80232B7C
    lfs f1, lbl_8088689C
    lis r8, lbl_807C7030@ha
    stfs f1, 0x40(r1)
    li r31, -0x1
    lwz r3, lbl_8087F3C0
    li r28, 0x1
    stfs f1, 0x44(r1)
    addi r4, r29, 0x10c
    addi r7, r29, 0x154
    addi r8, r8, lbl_807C7030@l
    stfs f1, 0x48(r1)
    addi r9, r1, 0x40
    li r5, 0x0
    li r6, 0x0
    stfs f1, 0x4c(r1)
    li r10, -0x1
    stw r31, 0x8(r1)
    stw r28, 0xc(r1)
    bl fn_8023A8B4
    lwz r3, lbl_8087F8A8
    cmpwi r3, 0x0
    beq lbl_fn_804348C4_00000C78
    lfs f0, lbl_80886894
    li r0, 0x9
    stw r27, 0x1c8(r1)
    mr r4, r26
    stfs f0, 0x1cc(r1)
    stfs f0, 0x1d0(r1)
    stw r27, 0x1d4(r1)
    stw r27, 0x1dc(r1)
    stw r27, 0x1e0(r1)
    stw r28, 0x1e4(r1)
    sth r27, 0x1e8(r1)
    stfs f0, 0x228(r1)
    stfs f0, 0x22c(r1)
    stfs f0, 0x230(r1)
    stfs f0, 0x234(r1)
    stfs f0, 0x238(r1)
    stfs f0, 0x23c(r1)
    stw r27, 0x240(r1)
    stw r31, 0x244(r1)
    stw r31, 0x248(r1)
    stw r27, 0x24c(r1)
    stw r27, 0x250(r1)
    stw r27, 0x254(r1)
    stw r27, 0x258(r1)
    stw r27, 0x25c(r1)
    stw r27, 0x260(r1)
    stw r27, 0x264(r1)
    stw r27, 0x268(r1)
    stw r27, 0x26c(r1)
    stw r27, 0x270(r1)
    stw r27, 0x274(r1)
    stw r27, 0x278(r1)
    stw r0, 0x1d8(r1)
    lwz r5, 0x160(r29)
    bl fn_8054E52C
    stw r3, 0x25c(r1)
    lwz r3, 0x160(r29)
    lwz r0, 0x164(r29)
    cmpw r3, r0
    blt lbl_fn_804348C4_00000C3C
    li r0, 0x64
    stw r0, 0x24c(r1)
lbl_fn_804348C4_00000C3C:
    lwz r4, 0x25c(r1)
    addi r3, r1, 0xe8
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x228
    lwz r3, 0x4(r4)
    addi r4, r1, 0x1c8
    lfs f2, 0xf0(r1)
    lfs f0, 0xa0(r3)
    stfs f0, 0x1cc(r1)
    lwz r3, lbl_8087F8A8
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x230(r1)
    lwz r0, 0x160(r29)
    stw r0, 0x24c(r1)
    bl fn_8054E100
lbl_fn_804348C4_00000C78:
    lwz r3, lbl_8087F430
    lwz r4, 0x144(r29)
    lwz r3, 0x10d0(r3)
    lwz r4, 0x4(r4)
    bl fn_8021D720
    mr r26, r3
    addi r3, r1, 0xd8
    li r4, 0x0
    li r5, 0x10
    bl memset
    cmpwi r26, 0x0
    beq lbl_fn_804348C4_00000E44
    lwz r6, 0x160(r29)
    mr r3, r26
    addi r4, r1, 0x2c
    addi r5, r1, 0xd8
    subi r6, r6, 0x1
    bl fn_8021D770
    cmpwi r3, 0x0
    beq lbl_fn_804348C4_00000E44
    lwz r5, 0x2c(r1)
    cmpwi r5, 0x0
    ble lbl_fn_804348C4_00000E44
    addi r3, r1, 0x28
    addi r4, r1, 0x24
    li r6, 0x1
    bl fn_8021E4E4
    cmpwi r3, 0x0
    beq lbl_fn_804348C4_00000E44
    lwz r3, 0x28(r1)
    bl fn_80450B60
    lwz r0, lbl_8087F4F0
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_804348C4_00000DA0
    li r0, -0x1
    stw r0, 0x20(r1)
    addi r3, r1, 0xd8
    addi r4, r1, 0x20
    stw r0, 0x1c(r1)
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    stw r0, 0x18(r1)
    bl fn_80216AFC
    cmpwi r3, 0x0
    beq lbl_fn_804348C4_00000D64
    lwz r3, lbl_8087F4F0
    li r4, 0x1
    lwz r7, 0x18(r1)
    li r0, 0x0
    lwz r6, 0x1c(r1)
    addis r3, r3, 0x1
    lwz r5, 0x20(r1)
    stw r4, -0x24ec(r3)
    stw r5, -0x24e8(r3)
    stw r6, -0x24e4(r3)
    stw r7, -0x24e0(r3)
    stw r0, -0x24dc(r3)
    stw r0, -0x24d8(r3)
lbl_fn_804348C4_00000D64:
    lwz r3, lbl_8087F4F0
    addi r4, r1, 0x28
    addi r5, r1, 0x24
    li r6, 0x0
    bl fn_80445130
    lwz r3, lbl_8087F4F0
    li r4, 0x0
    li r0, -0x1
    addis r3, r3, 0x1
    stw r4, -0x24ec(r3)
    stw r0, -0x24e8(r3)
    stw r0, -0x24e4(r3)
    stw r0, -0x24e0(r3)
    stw r4, -0x24dc(r3)
    stw r4, -0x24d8(r3)
lbl_fn_804348C4_00000DA0:
    lwz r3, 0x28(r1)
    bl fn_80211480
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_804348C4_00000E44
    lwz r3, lbl_8087F4F0
    li r27, 0x0
    lwz r4, 0x28(r1)
    bl fn_80448F9C
    mr r28, r3
    bl fn_80680CF8
    lis r4, 0x51ec
    subi r0, r4, 0x7ae1
    mulhw r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x64
    subf r0, r0, r3
    cmpw r28, r0
    ble lbl_fn_804348C4_00000DF8
    li r27, 0x1
lbl_fn_804348C4_00000DF8:
    lwz r8, 0x24(r1)
    mr r7, r26
    mr r9, r27
    addi r3, r29, 0x16c
    addi r4, r1, 0xe8
    li r5, 0x19
    li r6, 0x19
    li r10, 0x0
    bl fn_8044E418
    addi r3, r29, 0x16c
    bl fn_8044E610
    cmpwi r3, 0x0
    beq lbl_fn_804348C4_00000E3C
    cmpwi r31, 0x0
    beq lbl_fn_804348C4_00000E3C
    addi r3, r29, 0x16c
    bl fn_8044E644
lbl_fn_804348C4_00000E3C:
    li r0, 0x1
    stw r0, 0x260(r29)
lbl_fn_804348C4_00000E44:
    lwz r3, 0x160(r29)
    lwz r0, 0x164(r29)
    cmpw r3, r0
    bge lbl_fn_804348C4_00000E64
    mr r3, r29
    li r4, 0x2
    bl fn_80435684
    b lbl_fn_804348C4_00000E70
lbl_fn_804348C4_00000E64:
    mr r3, r29
    li r4, 0x4
    bl fn_80435684
lbl_fn_804348C4_00000E70:
    lwz r3, 0x150(r29)
    subic. r0, r3, 0x1
    stw r0, 0x150(r29)
    bgt lbl_fn_804348C4_00000E8C
    mr r3, r29
    li r4, 0x4
    bl fn_80435684
lbl_fn_804348C4_00000E8C:
    lwz r4, 0x170(r29)
    li r0, 0x1
    li r3, 0x0
    cmpwi r4, 0x3
    blt lbl_fn_804348C4_00000EAC
    cmpwi r4, 0x5
    bge lbl_fn_804348C4_00000EAC
    li r3, 0x1
lbl_fn_804348C4_00000EAC:
    cmpwi r3, 0x0
    bne lbl_fn_804348C4_00000EC0
    cmpwi r4, 0x7
    beq lbl_fn_804348C4_00000EC0
    li r0, 0x0
lbl_fn_804348C4_00000EC0:
    cmpwi r0, 0x0
    bne lbl_fn_804348C4_00000EE8
    cmpwi r4, 0x5
    li r0, 0x0
    beq lbl_fn_804348C4_00000EDC
    cmpwi r4, 0x6
    bne lbl_fn_804348C4_00000EE0
lbl_fn_804348C4_00000EDC:
    li r0, 0x1
lbl_fn_804348C4_00000EE0:
    cmpwi r0, 0x0
    beq lbl_fn_804348C4_00000EF0
lbl_fn_804348C4_00000EE8:
    addi r3, r29, 0x16c
    bl fn_8044F434
lbl_fn_804348C4_00000EF0:
    lwz r0, 0x260(r29)
    cmpwi r0, 0x0
    beq lbl_fn_804348C4_00001048
    lwz r4, 0x170(r29)
    li r0, 0x1
    li r3, 0x0
    cmpwi r4, 0x3
    blt lbl_fn_804348C4_00000F1C
    cmpwi r4, 0x5
    bge lbl_fn_804348C4_00000F1C
    li r3, 0x1
lbl_fn_804348C4_00000F1C:
    cmpwi r3, 0x0
    bne lbl_fn_804348C4_00000F30
    cmpwi r4, 0x7
    beq lbl_fn_804348C4_00000F30
    li r0, 0x0
lbl_fn_804348C4_00000F30:
    cmpwi r0, 0x0
    bne lbl_fn_804348C4_00001048
    addi r3, r29, 0x16c
    bl fn_80450778
    lwz r26, lbl_8087F490
    cmpwi r26, 0x0
    beq lbl_fn_804348C4_00000F6C
    addi r3, r29, 0x16c
    bl fn_80450A5C
    lwz r0, 0x258(r29)
    mr r4, r3
    lwz r5, 0x190(r29)
    mr r3, r26
    extrwi r6, r0, 1, 1
    bl fn_803E5E64
lbl_fn_804348C4_00000F6C:
    lis r3, lbl_807541A0@ha
    li r0, 0x0
    addi r3, r3, lbl_807541A0@l
    stw r0, 0x260(r29)
    lwz r4, 0x4(r3)
    addi r3, r1, 0x14
    lfs f1, lbl_8088689C
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    lwz r3, 0x160(r29)
    lfs f1, lbl_8088689C
    subic. r3, r3, 0x1
    ble lbl_fn_804348C4_0000101C
    cmpwi r3, 0x8
    ble lbl_fn_804348C4_00001004
    cmpwi r3, -0x1
    li r0, 0x0
    ble lbl_fn_804348C4_00000FBC
    li r0, 0x1
lbl_fn_804348C4_00000FBC:
    cmpwi r0, 0x0
    beq lbl_fn_804348C4_00001004
    subi r0, r3, 0x1
    lfs f0, lbl_808868BC
    srwi r0, r0, 3
    mtctr r0
    cmpwi r3, 0x8
    ble lbl_fn_804348C4_00001004
lbl_fn_804348C4_00000FDC:
    fmuls f1, f1, f0
    subi r3, r3, 0x8
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    bdnz lbl_fn_804348C4_00000FDC
lbl_fn_804348C4_00001004:
    lfs f0, lbl_808868BC
    mtctr r3
    cmpwi r3, 0x0
    ble lbl_fn_804348C4_0000101C
lbl_fn_804348C4_00001014:
    fmuls f1, f1, f0
    bdnz lbl_fn_804348C4_00001014
lbl_fn_804348C4_0000101C:
    lfs f0, lbl_808868C0
    addi r3, r1, 0x14
    fcmpo cr0, f1, f0
    bge lbl_fn_804348C4_00001030
    b lbl_fn_804348C4_00001034
lbl_fn_804348C4_00001030:
    fmr f1, f0
lbl_fn_804348C4_00001034:
    li r4, 0x0
    bl fn_800CB688
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_804348C4_00001048:
    lwz r0, 0x7fc(r30)
    stw r0, 0x118(r29)
lbl_fn_804348C4_00001050:
    addi r11, r1, 0x2a0
    psq_l f31, 0x2c8(r1), 0, 0
    lfd f31, 0x2c0(r1)
    psq_l f30, 0x2b8(r1), 0, 0
    lfd f30, 0x2b0(r1)
    psq_l f29, 0x2a8(r1), 0, 0
    lfd f29, 0x2a0(r1)
    bl _restgpr_26
    lwz r0, 0x2d4(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}

asm void fn_80435684(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    beq lbl_fn_80435684_000010C4
    cmpwi r4, 0x1
    beq lbl_fn_80435684_000010F0
    cmpwi r4, 0x2
    beq lbl_fn_80435684_0000115C
    cmpwi r4, 0x3
    beq lbl_fn_80435684_00001214
    cmpwi r4, 0x4
    beq lbl_fn_80435684_000012C4
    b lbl_fn_80435684_000012EC
lbl_fn_80435684_000010C4:
    li r0, 0x0
    stw r4, 0x11c(r3)
    stw r0, 0x168(r3)
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_80435684_000012EC
    mr r4, r31
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    b lbl_fn_80435684_000012EC
lbl_fn_80435684_000010F0:
    stw r4, 0x11c(r3)
    lwz r4, 0x144(r3)
    lwz r0, 0x81c(r4)
    stw r0, 0x148(r3)
    lwz r0, 0x820(r4)
    cmpwi r0, 0x0
    ble lbl_fn_80435684_00001130
    bl fn_80680CF8
    lwz r4, 0x144(r31)
    lwz r0, 0x148(r31)
    lwz r5, 0x820(r4)
    divw r4, r3, r5
    mullw r4, r4, r5
    subf r3, r4, r3
    add r0, r0, r3
    stw r0, 0x148(r31)
lbl_fn_80435684_00001130:
    li r0, 0x0
    stw r0, 0x160(r31)
    stw r0, 0x168(r31)
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_80435684_000012EC
    mr r4, r31
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    b lbl_fn_80435684_000012EC
lbl_fn_80435684_0000115C:
    stw r4, 0x11c(r3)
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_80435684_0000117C
    mr r4, r31
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_80435684_0000117C:
    mr r3, r31
    bl fn_80435908
    cmpwi r3, 0x0
    beq lbl_fn_80435684_000012EC
    li r30, 0x1
    stw r30, 0x168(r31)
    lwz r3, 0x144(r31)
    lwz r0, 0x824(r3)
    stw r0, 0x14c(r31)
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_80435684_000012EC
    stw r30, 0xb8(r3)
    mr r3, r31
    li r4, 0x0
    bl fn_80232B7C
    lfs f1, lbl_8088689C
    lis r8, lbl_807C7030@ha
    stfs f1, 0x20(r1)
    li r0, -0x1
    addi r4, r31, 0xf4
    addi r7, r31, 0x154
    stfs f1, 0x24(r1)
    addi r8, r8, lbl_807C7030@l
    addi r9, r1, 0x20
    li r5, 0x0
    stfs f1, 0x28(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f1, 0x2c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
    b lbl_fn_80435684_000012EC
lbl_fn_80435684_00001214:
    stw r4, 0x11c(r3)
    li r30, 0x1
    lwz r6, 0x144(r3)
    lwz r4, 0x160(r3)
    lwz r5, 0x82c(r6)
    lwz r0, 0x828(r6)
    mullw r4, r5, r4
    stw r30, 0x168(r3)
    subf r0, r4, r0
    stw r0, 0x150(r3)
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_80435684_000012EC
    mr r4, r31
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    lwz r5, lbl_8087F3C0
    mr r3, r31
    li r4, 0x0
    stw r30, 0xb8(r5)
    bl fn_80232B7C
    lfs f1, lbl_8088689C
    lis r8, lbl_807C7030@ha
    stfs f1, 0x10(r1)
    li r0, -0x1
    addi r4, r31, 0x100
    addi r7, r31, 0x154
    stfs f1, 0x14(r1)
    addi r8, r8, lbl_807C7030@l
    addi r9, r1, 0x10
    li r5, 0x0
    stfs f1, 0x18(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f1, 0x1c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
    b lbl_fn_80435684_000012EC
lbl_fn_80435684_000012C4:
    li r0, 0x0
    stw r4, 0x11c(r3)
    stw r0, 0x168(r3)
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_80435684_000012EC
    mr r4, r31
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_80435684_000012EC:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80435908(void)
{
    nofralloc
    stwu r1, -0x8f0(r1)
    mflr r0
    stw r0, 0x8f4(r1)
    li r0, 0x8e8
    addi r11, r1, 0x890
    stfd f31, 0x8e0(r1)
    psq_stx f31, r1, r0, 0, 0
    li r0, 0x8d8
    stfd f30, 0x8d0(r1)
    psq_stx f30, r1, r0, 0, 0
    li r0, 0x8c8
    stfd f29, 0x8c0(r1)
    psq_stx f29, r1, r0, 0, 0
    li r0, 0x8b8
    stfd f28, 0x8b0(r1)
    psq_stx f28, r1, r0, 0, 0
    li r0, 0x8a8
    stfd f27, 0x8a0(r1)
    psq_stx f27, r1, r0, 0, 0
    li r0, 0x898
    stfd f26, 0x890(r1)
    psq_stx f26, r1, r0, 0, 0
    bl _savegpr_23
    lwz r4, 0x144(r3)
    mr r29, r3
    lfs f0, lbl_80886894
    cmpwi r4, 0x0
    stfs f0, 0x154(r3)
    stfs f0, 0x158(r3)
    stfs f0, 0x15c(r3)
    beq lbl_fn_80435908_00001398
    lwz r0, lbl_8087F8A0
    cmpwi r0, 0x0
    beq lbl_fn_80435908_00001398
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    bne lbl_fn_80435908_000013A0
lbl_fn_80435908_00001398:
    li r3, 0x0
    b lbl_fn_80435908_00001658
lbl_fn_80435908_000013A0:
    lwz r3, 0x10d0(r3)
    lwz r4, 0x4(r4)
    bl fn_8021D720
    cmpwi r3, 0x0
    bne lbl_fn_80435908_000013BC
    li r3, 0x0
    b lbl_fn_80435908_00001658
lbl_fn_80435908_000013BC:
    addi r4, r1, 0x8
    li r5, 0x0
    li r6, 0x0
    bl fn_8021D770
    cmpwi r3, 0x0
    bne lbl_fn_80435908_000013DC
    li r3, 0x0
    b lbl_fn_80435908_00001658
lbl_fn_80435908_000013DC:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bgt lbl_fn_80435908_000013F0
    li r3, 0x0
    b lbl_fn_80435908_00001658
lbl_fn_80435908_000013F0:
    lwz r3, lbl_8087F8A0
    li r27, 0x0
    lfs f29, lbl_80886894
    addi r25, r1, 0x24
    lwz r31, 0x48(r3)
    addi r24, r1, 0x40
    lfs f30, lbl_808868A0
    addi r26, r1, 0x4c
    stw r27, 0x58(r1)
    li r30, 0x0
    lfs f31, lbl_808868B0
    lis r28, 0x8000
    lfs f28, lbl_80886898
    b lbl_fn_80435908_00001600
lbl_fn_80435908_00001428:
    add r3, r3, r27
    lfs f0, 0x530(r31)
    lwz r23, 0x18(r3)
    addi r3, r1, 0x30
    lfs f4, 0x52c(r31)
    lfs f6, 0xc(r23)
    lfs f5, 0x8(r23)
    fsubs f6, f6, f0
    lfs f3, 0x4(r23)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x34(r1)
    stfs f0, 0x30(r1)
    stfs f6, 0x38(r1)
    bl fn_805F9920
    lwz r3, 0x144(r29)
    lfs f3, 0x818(r3)
    fmuls f0, f28, f3
    fmuls f0, f0, f0
    fcmpo cr0, f0, f1
    bge lbl_fn_80435908_000015F8
    fmuls f0, f3, f3
    fcmpo cr0, f1, f0
    bge lbl_fn_80435908_000015F8
    lfs f0, 0x530(r31)
    addi r3, r1, 0xc
    lfs f3, 0x52c(r31)
    fadds f6, f0, f29
    lfs f0, 0x528(r31)
    fadds f4, f3, f30
    lfs f3, 0x14(r23)
    fadds f0, f0, f29
    stfs f29, 0x18(r1)
    stfs f0, 0x24(r1)
    fmr f2, f6
    fmuls f27, f28, f3
    stfs f4, 0x28(r1)
    psq_l f1, 0x0(r25), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x48(r1)
    lfs f4, 0x44(r1)
    lfs f2, 0xc(r23)
    psq_l f1, 0x4(r23), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    lfs f0, 0x48(r1)
    lfs f5, 0x50(r1)
    fsubs f7, f2, f0
    lfs f3, 0x4c(r1)
    lfs f0, 0x40(r1)
    fsubs f4, f5, f4
    stfs f30, 0x1c(r1)
    fsubs f0, f3, f0
    stfs f29, 0x20(r1)
    stfs f6, 0x2c(r1)
    stfs f2, 0x54(r1)
    stfs f0, 0xc(r1)
    stfs f4, 0x10(r1)
    stfs f7, 0x14(r1)
    bl fn_805F9940
    fabs f0, f1
    fmr f26, f1
    frsp f0, f0
    fcmpo cr0, f0, f31
    blt lbl_fn_80435908_000015A8
    lfs f3, 0x4c(r1)
    mr r3, r26
    lfs f0, 0x40(r1)
    mr r4, r26
    lfs f5, 0x50(r1)
    fsubs f6, f3, f0
    lfs f4, 0x44(r1)
    lfs f3, 0x54(r1)
    lfs f0, 0x48(r1)
    fsubs f4, f5, f4
    stfs f6, 0x4c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x50(r1)
    stfs f0, 0x54(r1)
    bl fn_805F98D0
    fsubs f5, f26, f27
    lfs f4, 0x4c(r1)
    lfs f3, 0x50(r1)
    lfs f0, 0x54(r1)
    fmuls f7, f4, f5
    lfs f4, 0x40(r1)
    fmuls f6, f3, f5
    lfs f3, 0x44(r1)
    fmuls f5, f0, f5
    lfs f0, 0x48(r1)
    fadds f4, f7, f4
    fadds f3, f6, f3
    fadds f0, f5, f0
    stfs f4, 0x4c(r1)
    stfs f3, 0x50(r1)
    stfs f0, 0x54(r1)
lbl_fn_80435908_000015A8:
    lwz r3, lbl_8087EE98
    addi r5, r1, 0x40
    addi r6, r1, 0x4c
    addi r7, r28, 0x10
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ECC0
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_80435908_000015F8
    lwz r0, 0x58(r1)
    addi r3, r1, 0x5c
    slwi r0, r0, 2
    add. r3, r3, r0
    beq lbl_fn_80435908_000015EC
    stw r23, 0x0(r3)
lbl_fn_80435908_000015EC:
    lwz r3, 0x58(r1)
    addi r0, r3, 0x1
    stw r0, 0x58(r1)
lbl_fn_80435908_000015F8:
    addi r30, r30, 0x1
    addi r27, r27, 0x4
lbl_fn_80435908_00001600:
    lwz r3, 0x144(r29)
    lwz r0, 0x14(r3)
    cmplw r30, r0
    blt lbl_fn_80435908_00001428
    lwz r0, 0x58(r1)
    lwz r24, 0x58(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80435908_00001654
    bl fn_80680CF8
    divwu r0, r3, r24
    addi r4, r1, 0x5c
    mullw r0, r0, r24
    subf r0, r0, r3
    li r3, 0x1
    slwi r0, r0, 2
    lwzx r4, r4, r0
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x15c(r29)
    psq_st f1, 0x154(r29), 0, 0
    b lbl_fn_80435908_00001658
lbl_fn_80435908_00001654:
    li r3, 0x0
lbl_fn_80435908_00001658:
    li r0, 0x8e8
    addi r11, r1, 0x890
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0x8e0(r1)
    li r0, 0x8d8
    psq_lx f30, r1, r0, 0, 0
    lfd f30, 0x8d0(r1)
    li r0, 0x8c8
    psq_lx f29, r1, r0, 0, 0
    lfd f29, 0x8c0(r1)
    li r0, 0x8b8
    psq_lx f28, r1, r0, 0, 0
    lfd f28, 0x8b0(r1)
    li r0, 0x8a8
    psq_lx f27, r1, r0, 0, 0
    lfd f27, 0x8a0(r1)
    li r0, 0x898
    psq_lx f26, r1, r0, 0, 0
    lfd f26, 0x890(r1)
    bl _restgpr_23
    lwz r0, 0x8f4(r1)
    mtlr r0
    addi r1, r1, 0x8f0
    blr
}

asm void fn_80435CBC(void)
{
    nofralloc
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80435CBC_000016D8
    lwz r0, 0x168(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80435CBC_000016D8
    li r3, 0x1
    blr
lbl_fn_80435CBC_000016D8:
    li r3, 0x0
    blr
}

asm void fn_80435CE4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_80435CE4_000017C4
    lis r5, lbl_807541F0@ha
    li r3, 0x348
    addi r5, r5, lbl_807541F0@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80435CE4_000017BC
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_803EC568
    lis r4, lbl_8078EED8@ha
    addi r3, r31, 0xf4
    addi r4, r4, lbl_8078EED8@l
    stw r4, 0x0(r31)
    li r4, 0x9
    bl fn_8008A4E0
    lis r4, fn_802377B8@ha
    lis r5, fn_800EF73C@ha
    addi r3, r31, 0x308
    li r6, 0xc
    addi r4, r4, fn_802377B8@l
    addi r5, r5, fn_800EF73C@l
    li r7, 0x3
    bl fn_806958E0
    li r5, 0x1
    stw r5, 0x32c(r31)
    lfs f0, lbl_808868C8
    li r4, 0x0
    stfs f0, 0x330(r31)
    li r3, 0x6
    lfs f0, lbl_808868CC
    li r0, 0xf
    stfs f0, 0x334(r31)
    stw r4, 0x338(r31)
    stw r5, 0x33c(r31)
    stw r4, 0x340(r31)
    stw r4, 0x54(r31)
    stw r3, 0xe8(r31)
    stw r0, 0xec(r31)
lbl_fn_80435CE4_000017BC:
    mr r3, r31
    b lbl_fn_80435CE4_000017C8
lbl_fn_80435CE4_000017C4:
    li r3, 0x0
lbl_fn_80435CE4_000017C8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80435DEC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    beq lbl_fn_80435DEC_00001934
    lis r5, lbl_807541F0@ha
    li r3, 0x348
    addi r5, r5, lbl_807541F0@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80435DEC_000018C4
    lwz r0, 0x20(r30)
    mr r4, r29
    lwz r5, 0x18(r30)
    lwz r6, 0x1c(r30)
    add r5, r5, r0
    bl fn_803EC568
    lis r4, lbl_8078EED8@ha
    addi r3, r31, 0xf4
    addi r4, r4, lbl_8078EED8@l
    stw r4, 0x0(r31)
    li r4, 0x9
    bl fn_8008A4E0
    lis r4, fn_802377B8@ha
    lis r5, fn_800EF73C@ha
    addi r3, r31, 0x308
    li r6, 0xc
    addi r4, r4, fn_802377B8@l
    addi r5, r5, fn_800EF73C@l
    li r7, 0x3
    bl fn_806958E0
    li r5, 0x1
    stw r5, 0x32c(r31)
    lfs f0, lbl_808868C8
    li r4, 0x0
    stfs f0, 0x330(r31)
    li r3, 0x6
    lfs f0, lbl_808868CC
    li r0, 0xf
    stfs f0, 0x334(r31)
    stw r4, 0x338(r31)
    stw r5, 0x33c(r31)
    stw r4, 0x340(r31)
    stw r4, 0x54(r31)
    stw r3, 0xe8(r31)
    stw r0, 0xec(r31)
lbl_fn_80435DEC_000018C4:
    cmpwi r31, 0x0
    beq lbl_fn_80435DEC_0000192C
    lfs f2, 0xc(r30)
    addi r3, r1, 0x14
    psq_l f1, 0x4(r30), 0, 0
    addi r4, r1, 0x8
    psq_st f1, 0x6c(r31), 0, 0
    lfs f0, lbl_808868D0
    stfs f2, 0x74(r31)
    lfs f3, lbl_808868CC
    lfs f4, 0x14(r30)
    stfs f3, 0x14(r1)
    fmr f2, f3
    stfs f4, 0x18(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x78(r31), 0, 0
    stfs f2, 0x80(r31)
    fmr f2, f0
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x90(r31), 0, 0
    stfs f2, 0x98(r31)
    stfs f3, 0x1c(r1)
    stfs f0, 0x10(r1)
    stw r30, 0x338(r31)
lbl_fn_80435DEC_0000192C:
    mr r3, r31
    b lbl_fn_80435DEC_00001938
lbl_fn_80435DEC_00001934:
    li r3, 0x0
lbl_fn_80435DEC_00001938:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80435F58(void)
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
    beq lbl_fn_80435F58_000019E0
    lis r4, lbl_8078EED8@ha
    addi r4, r4, lbl_8078EED8@l
    stw r4, 0x0(r3)
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_80435F58_000019A0
    mr r4, r30
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_80435F58_000019A0:
    lis r4, fn_800EF73C@ha
    addi r3, r30, 0x308
    addi r4, r4, fn_800EF73C@l
    li r5, 0xc
    li r6, 0x3
    bl fn_806959D8
    addi r3, r30, 0xf4
    li r4, -0x1
    bl fn_8008A76C
    mr r3, r30
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_80435F58_000019E0
    mr r3, r30
    bl dtor_80084684
lbl_fn_80435F58_000019E0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
