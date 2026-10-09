#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_27(void);
extern void fn_8004B338(void);
extern void fn_8004B378(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800F8548(void);
extern void fn_8016E970(void);
extern void fn_80239DAC(void);
extern void fn_80350BF0(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_80392D2C(void);
extern void fn_804786F8(void);
extern void fn_805BDCC0(void);
extern void fn_805BF208(void);
extern void fn_805BF414(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_80680CF8(void);
extern void fn_8068A4A8(void);
extern void fn_8068AE24(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_8074A8D8[];
extern u8 lbl_8074A8E0[];

/* Small data declarations */
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885378;
extern u32 lbl_80885398;
extern u32 lbl_8088539C;
extern u32 lbl_808853AC;
extern u32 lbl_808853B0;
extern u32 lbl_808853B8;
extern u32 lbl_808853BC;
extern u32 lbl_808853C4;
extern u32 lbl_808853D8;
extern u32 lbl_808853DC;
extern u32 lbl_808853E0;
extern u32 lbl_808853E4;
extern u32 lbl_808853E8;
extern u32 lbl_808853EC;
extern u32 lbl_808853F0;
extern u32 lbl_808853F4;
extern u32 lbl_808853F8;
extern u32 lbl_80885410;
extern u32 lbl_8088542C;
extern u32 lbl_80885438;
extern u32 lbl_80885444;
extern u32 lbl_80885454;
extern u32 lbl_8088546C;
extern u32 lbl_80885484;
extern u32 lbl_80885490;
extern u32 lbl_80885494;
extern u32 lbl_80885498;
extern u32 lbl_8088549C;
extern u32 lbl_808854A0;

/* Function declarations */
void fn_8034CF48(void);
void fn_8034D450(void);
void fn_8034DA0C(void);
void fn_8034DE90(void);
void fn_8034E898(void);

asm void fn_8034CF48(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r4, r1, 0x2c
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    lfs f31, lbl_80885398
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stfd f29, 0x110(r1)
    psq_st f29, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    mr r31, r3
    stw r30, 0x108(r1)
    addi r30, r1, 0x20
    lwz r5, 0x14b0(r3)
    lfs f0, 0x530(r3)
    lfs f3, 0x530(r5)
    lfs f5, 0x52c(r5)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x528(r5)
    fsubs f5, f5, f4
    lfs f0, 0x528(r3)
    stfs f2, 0x34(r1)
    fsubs f4, f3, f0
    lfs f0, lbl_808853D8
    frsp f3, f2
    stfs f4, 0x2c(r1)
    fabs f4, f3
    stfs f5, 0x30(r1)
    psq_l f1, 0x0(r4), 0, 0
    frsp f4, f4
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x28(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_8034CF48_000000B8
    lfs f3, 0x20(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_8034CF48_000000AC
    lfs f0, lbl_808853DC
    b lbl_fn_8034CF48_000000B0
lbl_fn_8034CF48_000000AC:
    lfs f0, lbl_808853E0
lbl_fn_8034CF48_000000B0:
    stfs f0, 0x3c(r1)
    b lbl_fn_8034CF48_000000CC
lbl_fn_8034CF48_000000B8:
    fmr f2, f3
    lfs f1, 0x20(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x3c(r1)
lbl_fn_8034CF48_000000CC:
    lfs f0, 0x3c(r1)
    addi r3, r1, 0xd0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885378
    addi r4, r1, 0x44
    lfs f4, 0xd8(r1)
    mr r5, r4
    lfs f5, 0xd4(r1)
    addi r3, r1, 0x90
    lfs f6, 0xd0(r1)
    lfs f7, 0xe8(r1)
    lfs f8, 0xe4(r1)
    lfs f9, 0xe0(r1)
    lfs f10, 0xf8(r1)
    lfs f11, 0xf4(r1)
    lfs f12, 0xf0(r1)
    lfs f13, 0xfc(r1)
    lfs f30, 0xec(r1)
    lfs f29, 0xdc(r1)
    lfs f0, lbl_80885398
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x28(r1)
    stfs f3, 0xc0(r1)
    stfs f3, 0xc4(r1)
    stfs f3, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f6, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f4, 0x7c(r1)
    stfs f6, 0x90(r1)
    stfs f5, 0x94(r1)
    stfs f4, 0x98(r1)
    stfs f9, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f7, 0x70(r1)
    stfs f9, 0xa0(r1)
    stfs f8, 0xa4(r1)
    stfs f7, 0xa8(r1)
    stfs f12, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f10, 0x64(r1)
    stfs f12, 0xb0(r1)
    stfs f11, 0xb4(r1)
    stfs f10, 0xb8(r1)
    stfs f29, 0x50(r1)
    stfs f30, 0x54(r1)
    stfs f13, 0x58(r1)
    stfs f29, 0x9c(r1)
    stfs f30, 0xac(r1)
    stfs f13, 0xbc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F9750
    lfs f2, 0x4c(r1)
    lfs f0, lbl_808853D8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8034CF48_000001E8
    lfs f3, 0x48(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_8034CF48_000001D8
    lfs f0, lbl_808853DC
    b lbl_fn_8034CF48_000001DC
lbl_fn_8034CF48_000001D8:
    lfs f0, lbl_808853E0
lbl_fn_8034CF48_000001DC:
    fneg f0, f0
    stfs f0, 0x38(r1)
    b lbl_fn_8034CF48_000001FC
lbl_fn_8034CF48_000001E8:
    lfs f1, 0x48(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x38(r1)
lbl_fn_8034CF48_000001FC:
    addi r3, r1, 0x38
    lfs f3, lbl_80885378
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8074A8E0@ha
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f3
    lfs f0, 0x538(r31)
    lfs f29, 0x24(r1)
    stfs f2, 0x28(r1)
    fsubs f1, f29, f0
    lfd f2, lbl_8074A8E0@l(r3)
    stfs f3, 0x40(r1)
    bl fn_8068AEA8
    frsp f5, f1
    lfs f0, lbl_808853E4
    fcmpo cr0, f5, f0
    ble lbl_fn_8034CF48_00000248
    lfs f0, lbl_808853B8
    fsubs f5, f5, f0
lbl_fn_8034CF48_00000248:
    lfs f0, lbl_808853E8
    fcmpo cr0, f5, f0
    bge lbl_fn_8034CF48_0000025C
    lfs f0, lbl_808853B8
    fadds f5, f5, f0
lbl_fn_8034CF48_0000025C:
    lfs f3, lbl_808853EC
    lfs f0, lbl_80885378
    fmuls f3, f3, f31
    fcmpo cr0, f5, f0
    bge lbl_fn_8034CF48_00000278
    fneg f4, f5
    b lbl_fn_8034CF48_0000027C
lbl_fn_8034CF48_00000278:
    fmr f4, f5
lbl_fn_8034CF48_0000027C:
    lfs f0, lbl_808853F0
    fmuls f3, f0, f3
    fcmpo cr0, f4, f3
    cror eq, lt, eq
    bne lbl_fn_8034CF48_000002A8
    lfs f1, lbl_80885378
    addi r3, r31, 0xb0
    li r4, 0x1
    bl fn_80097CCC
    stfs f29, 0x538(r31)
    b lbl_fn_8034CF48_000002D4
lbl_fn_8034CF48_000002A8:
    lfs f0, lbl_80885378
    fcmpo cr0, f5, f0
    cror eq, lt, eq
    bne lbl_fn_8034CF48_000002C8
    lfs f0, 0x538(r31)
    fsubs f0, f0, f3
    stfs f0, 0x538(r31)
    b lbl_fn_8034CF48_000002D4
lbl_fn_8034CF48_000002C8:
    lfs f0, 0x538(r31)
    fadds f0, f0, f3
    stfs f0, 0x538(r31)
lbl_fn_8034CF48_000002D4:
    lfs f4, 0x2e4(r31)
    lfs f3, lbl_8088542C
    lfs f0, lbl_808853AC
    fsubs f3, f4, f3
    lfs f4, lbl_80885398
    fdivs f0, f3, f0
    fcmpo cr0, f4, f0
    bge lbl_fn_8034CF48_000002F8
    b lbl_fn_8034CF48_000002FC
lbl_fn_8034CF48_000002F8:
    fmr f4, f0
lbl_fn_8034CF48_000002FC:
    lfs f9, lbl_80885378
    fcmpo cr0, f9, f4
    ble lbl_fn_8034CF48_0000030C
    b lbl_fn_8034CF48_00000334
lbl_fn_8034CF48_0000030C:
    lfs f4, 0x2e4(r31)
    lfs f3, lbl_8088542C
    lfs f0, lbl_808853AC
    fsubs f3, f4, f3
    lfs f9, lbl_80885398
    fdivs f0, f3, f0
    fcmpo cr0, f9, f0
    bge lbl_fn_8034CF48_00000330
    b lbl_fn_8034CF48_00000334
lbl_fn_8034CF48_00000330:
    fmr f9, f0
lbl_fn_8034CF48_00000334:
    lfs f3, 0x15e4(r31)
    addi r5, r1, 0x80
    lfs f5, 0x1608(r31)
    addi r3, r31, 0xb0
    lfs f0, 0x15e0(r31)
    li r4, 0x0
    fsubs f8, f3, f5
    lfs f4, 0x1604(r31)
    lfs f3, 0x15dc(r31)
    fsubs f6, f0, f4
    lfs f0, 0x1600(r31)
    fmuls f7, f8, f9
    fsubs f3, f3, f0
    stfs f6, 0x18(r1)
    fmuls f6, f6, f9
    fadds f2, f7, f5
    stfs f3, 0x14(r1)
    fmuls f5, f3, f9
    fadds f3, f6, f4
    stfs f8, 0x1c(r1)
    lfs f29, 0x2e4(r31)
    fadds f0, f5, f0
    stfs f3, 0x84(r1)
    stfs f0, 0x80(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f5, 0x8(r1)
    stfs f6, 0xc(r1)
    stfs f7, 0x10(r1)
    stfs f2, 0x88(r1)
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
    bl fn_80097D7C
    lfs f0, lbl_808853BC
    fsubs f0, f1, f0
    fcmpo cr0, f29, f0
    cror eq, gt, eq
    bne lbl_fn_8034CF48_000004D8
    lwz r0, 0x17e4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8034CF48_000003E0
    mr r3, r31
    bl fn_80350BF0
    b lbl_fn_8034CF48_000004D0
lbl_fn_8034CF48_000003E0:
    li r30, 0x0
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    stw r30, 0x14c0(r31)
    stw r30, 0x17e8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x3ea
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ed
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ef
    li r6, 0x1
    bl fn_80239DAC
    bl fn_80680CF8
    lis r4, 0x8889
    lwz r0, 0x14c0(r31)
    subi r5, r4, 0x7777
    mulhw r5, r5, r3
    li r4, 0x3
    add r5, r5, r3
    srawi r5, r5, 5
    srwi r6, r5, 31
    add r5, r5, r6
    mulli r5, r5, 0x3c
    subf r5, r5, r3
    mr r3, r31
    subfic r5, r5, 0x1e
    add r0, r0, r5
    stw r0, 0x14c0(r31)
    bl fn_8016E970
    lfs f0, lbl_80885398
    li r0, 0x1
    stw r30, 0x58c(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80885378
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x2
    lfs f2, lbl_808853C4
    li r6, 0x1
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
lbl_fn_8034CF48_000004D0:
    lwz r0, 0x1cd0(r31)
    stw r0, 0x14c0(r31)
lbl_fn_8034CF48_000004D8:
    lwz r0, 0x144(r1)
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    psq_l f29, 0x118(r1), 0, 0
    lfd f29, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_8034D450(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    addi r11, r1, 0x160
    stfd f31, 0x230(r1)
    psq_st f31, 0x238(r1), 0, 0
    stfd f30, 0x220(r1)
    psq_st f30, 0x228(r1), 0, 0
    stfd f29, 0x210(r1)
    psq_st f29, 0x218(r1), 0, 0
    stfd f28, 0x200(r1)
    psq_st f28, 0x208(r1), 0, 0
    stfd f27, 0x1f0(r1)
    psq_st f27, 0x1f8(r1), 0, 0
    stfd f26, 0x1e0(r1)
    psq_st f26, 0x1e8(r1), 0, 0
    stfd f25, 0x1d0(r1)
    psq_st f25, 0x1d8(r1), 0, 0
    stfd f24, 0x1c0(r1)
    psq_st f24, 0x1c8(r1), 0, 0
    stfd f23, 0x1b0(r1)
    psq_st f23, 0x1b8(r1), 0, 0
    stfd f22, 0x1a0(r1)
    psq_st f22, 0x1a8(r1), 0, 0
    stfd f21, 0x190(r1)
    psq_st f21, 0x198(r1), 0, 0
    stfd f20, 0x180(r1)
    psq_st f20, 0x188(r1), 0, 0
    stfd f19, 0x170(r1)
    psq_st f19, 0x178(r1), 0, 0
    stfd f18, 0x160(r1)
    psq_st f18, 0x168(r1), 0, 0
    bl _savegpr_23
    lis r5, lbl_8074A8D8@ha
    lis r0, 0x4330
    lis r4, 0x4178
    stw r0, 0x128(r1)
    lfd f28, lbl_8074A8D8@l(r5)
    mr r24, r3
    stw r0, 0x130(r1)
    addi r29, r1, 0x50
    lfs f27, lbl_80885484
    addi r31, r1, 0x80
    lfs f26, lbl_80885444
    addi r30, r4, 0x749f
    lfs f25, lbl_80885378
    li r27, 0x0
    lfs f24, lbl_808853B8
    li r23, 0x0
    lfs f23, lbl_808853E8
    lfs f20, lbl_80885490
    lfs f19, lbl_80885454
    lfs f18, lbl_808853B0
lbl_fn_8034D450_000005DC:
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0x12c(r1)
    lfd f0, 0x128(r1)
    stfs f25, 0x74(r1)
    fsubs f0, f0, f28
    stfs f25, 0x78(r1)
    fdivs f0, f0, f27
    fmadds f0, f26, f0, f26
    stfs f0, 0x7c(r1)
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0x134(r1)
    addi r3, r1, 0xf8
    li r4, 0x79
    lfd f0, 0x130(r1)
    fsubs f0, f0, f28
    fdivs f0, f0, f27
    fmadds f1, f24, f0, f23
    bl fn_805F8E70
    addi r4, r1, 0x74
    addi r3, r1, 0xf8
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x530(r24)
    lfs f0, 0x7c(r1)
    lfs f5, 0x52c(r24)
    fadds f2, f3, f0
    lfs f4, 0x78(r1)
    lfs f3, 0x528(r24)
    lfs f0, 0x74(r1)
    fadds f4, f5, f4
    stfs f2, 0x58(r1)
    fadds f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x88(r1)
    bl fn_80680CF8
    mulhw r6, r30, r3
    lwz r5, 0x1cbc(r24)
    lwz r0, 0x1a28(r24)
    addi r4, r5, 0x1
    stb r23, 0x90(r1)
    cmplwi r0, 0x20
    srawi r0, r6, 8
    stb r5, 0x91(r1)
    srwi r6, r0, 31
    add r0, r0, r6
    stw r4, 0x1cbc(r24)
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x12c(r1)
    lfd f0, 0x128(r1)
    fsubs f0, f0, f28
    fdivs f0, f0, f20
    fmadds f0, f19, f0, f18
    stfs f0, 0x8c(r1)
    bge lbl_fn_8034D450_00000710
    lwz r0, 0x1a28(r24)
    addi r4, r24, 0x1a28
    mulli r0, r0, 0x14
    add r0, r4, r0
    addic. r3, r0, 0x4
    beq lbl_fn_8034D450_00000704
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x88(r1)
    stfs f2, 0x8(r3)
    stfs f0, 0xc(r3)
    stb r23, 0x10(r3)
    stb r5, 0x11(r3)
lbl_fn_8034D450_00000704:
    lwz r3, 0x0(r4)
    addi r0, r3, 0x1
    stw r0, 0x0(r4)
lbl_fn_8034D450_00000710:
    addi r27, r27, 0x1
    cmpwi r27, 0x4
    blt lbl_fn_8034D450_000005DC
    lwz r4, lbl_8087F8A0
    lis r3, lbl_8074A8D8@ha
    lis r31, 0x4178
    lfd f25, lbl_8074A8D8@l(r3)
    lwz r26, 0x48(r4)
    addi r27, r1, 0x8
    lfs f26, lbl_80885484
    addi r28, r1, 0x80
    lfs f27, lbl_80885498
    addi r30, r31, 0x749f
    lfs f28, lbl_80885494
    addi r29, r1, 0x2c
    lfs f29, lbl_80885378
    li r23, 0x0
    lfs f18, lbl_80885490
    lfs f19, lbl_80885454
    lfs f20, lbl_808853B0
    lfs f23, lbl_80885398
    lfs f24, lbl_808853C4
    b lbl_fn_8034D450_00000A34
lbl_fn_8034D450_0000076C:
    stfs f29, 0x38(r1)
    addi r3, r1, 0xc8
    li r4, 0x79
    stfs f29, 0x3c(r1)
    stfs f23, 0x40(r1)
    lfs f1, 0x538(r26)
    bl fn_805F8E70
    addi r4, r1, 0x38
    addi r3, r1, 0xc8
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x40(r1)
    lfs f3, 0x3c(r1)
    fmuls f5, f4, f24
    lfs f0, 0x38(r1)
    fmuls f6, f3, f24
    lfs f4, 0x530(r26)
    fmuls f7, f0, f24
    lfs f3, 0x52c(r26)
    lfs f0, 0x528(r26)
    fadds f4, f4, f5
    lwz r0, 0x48(r26)
    fadds f3, f3, f6
    fadds f0, f0, f7
    stfs f7, 0x44(r1)
    cmpwi r0, 0x0
    stfs f6, 0x48(r1)
    stfs f5, 0x4c(r1)
    stfs f0, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f4, 0x70(r1)
    beq lbl_fn_8034D450_000007F8
    lwz r0, 0x14b0(r24)
    cmplw r26, r0
    bne lbl_fn_8034D450_00000914
lbl_fn_8034D450_000007F8:
    stfs f29, 0x14(r1)
    addi r3, r1, 0x98
    li r4, 0x79
    stfs f29, 0x18(r1)
    stfs f23, 0x1c(r1)
    lfs f1, 0x538(r26)
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x98
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x1c(r1)
    lfs f0, 0x18(r1)
    lfs f3, 0x14(r1)
    fmuls f4, f4, f24
    fmuls f5, f0, f24
    lfs f0, 0x70(r1)
    fmuls f6, f3, f24
    lfs f3, 0x6c(r1)
    fadds f2, f0, f4
    lfs f0, 0x68(r1)
    fadds f3, f3, f5
    stfs f6, 0x20(r1)
    fadds f0, f0, f6
    stfs f3, 0x30(r1)
    stfs f0, 0x2c(r1)
    psq_l f1, 0x0(r29), 0, 0
    stfs f5, 0x24(r1)
    stfs f4, 0x28(r1)
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x88(r1)
    bl fn_80680CF8
    addi r0, r31, 0x749f
    lwz r5, 0x1cbc(r24)
    mulhw r6, r0, r3
    lwz r0, 0x1a28(r24)
    addi r4, r5, 0x1
    stw r4, 0x1cbc(r24)
    cmplwi r0, 0x20
    stb r23, 0x90(r1)
    srawi r0, r6, 8
    stb r5, 0x91(r1)
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x134(r1)
    lfd f0, 0x130(r1)
    fsubs f0, f0, f25
    fdivs f0, f0, f18
    fmadds f0, f19, f0, f20
    stfs f0, 0x8c(r1)
    bge lbl_fn_8034D450_00000914
    lwz r0, 0x1a28(r24)
    addi r4, r24, 0x1a28
    mulli r0, r0, 0x14
    add r0, r4, r0
    addic. r3, r0, 0x4
    beq lbl_fn_8034D450_00000908
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x88(r1)
    stfs f2, 0x8(r3)
    stfs f0, 0xc(r3)
    stb r23, 0x10(r3)
    stb r5, 0x11(r3)
lbl_fn_8034D450_00000908:
    lwz r3, 0x0(r4)
    addi r0, r3, 0x1
    stw r0, 0x0(r4)
lbl_fn_8034D450_00000914:
    lfs f0, 0x6c(r1)
    li r25, 0x0
    lfs f30, 0x70(r1)
    fadds f22, f0, f29
    lfs f31, 0x68(r1)
lbl_fn_8034D450_00000928:
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0x12c(r1)
    lfd f0, 0x128(r1)
    fsubs f0, f0, f25
    fdivs f0, f0, f26
    fmadds f21, f27, f0, f28
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0x134(r1)
    fadds f2, f30, f21
    lfd f0, 0x130(r1)
    stfs f22, 0xc(r1)
    fsubs f0, f0, f25
    stfs f29, 0x60(r1)
    fdivs f0, f0, f26
    stfs f21, 0x64(r1)
    stfs f2, 0x10(r1)
    stfs f2, 0x88(r1)
    fmadds f0, f27, f0, f28
    stfs f0, 0x5c(r1)
    fadds f0, f31, f0
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    bl fn_80680CF8
    mulhw r6, r30, r3
    lwz r5, 0x1cbc(r24)
    lwz r0, 0x1a28(r24)
    addi r4, r5, 0x1
    stb r23, 0x90(r1)
    cmplwi r0, 0x20
    srawi r0, r6, 8
    stb r5, 0x91(r1)
    srwi r6, r0, 31
    add r0, r0, r6
    stw r4, 0x1cbc(r24)
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x12c(r1)
    lfd f0, 0x128(r1)
    fsubs f0, f0, f25
    fdivs f0, f0, f18
    fmadds f0, f19, f0, f20
    stfs f0, 0x8c(r1)
    bge lbl_fn_8034D450_00000A24
    lwz r0, 0x1a28(r24)
    addi r4, r24, 0x1a28
    mulli r0, r0, 0x14
    add r0, r4, r0
    addic. r3, r0, 0x4
    beq lbl_fn_8034D450_00000A18
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x88(r1)
    stfs f2, 0x8(r3)
    stfs f0, 0xc(r3)
    stb r23, 0x10(r3)
    stb r5, 0x11(r3)
lbl_fn_8034D450_00000A18:
    lwz r3, 0x0(r4)
    addi r0, r3, 0x1
    stw r0, 0x0(r4)
lbl_fn_8034D450_00000A24:
    addi r25, r25, 0x1
    cmpwi r25, 0x2
    blt lbl_fn_8034D450_00000928
    lwz r26, 0x14ac(r26)
lbl_fn_8034D450_00000A34:
    cmpwi r26, 0x0
    bne lbl_fn_8034D450_0000076C
    addi r11, r1, 0x160
    psq_l f31, 0x238(r1), 0, 0
    lfd f31, 0x230(r1)
    psq_l f30, 0x228(r1), 0, 0
    lfd f30, 0x220(r1)
    psq_l f29, 0x218(r1), 0, 0
    lfd f29, 0x210(r1)
    psq_l f28, 0x208(r1), 0, 0
    lfd f28, 0x200(r1)
    psq_l f27, 0x1f8(r1), 0, 0
    lfd f27, 0x1f0(r1)
    psq_l f26, 0x1e8(r1), 0, 0
    lfd f26, 0x1e0(r1)
    psq_l f25, 0x1d8(r1), 0, 0
    lfd f25, 0x1d0(r1)
    psq_l f24, 0x1c8(r1), 0, 0
    lfd f24, 0x1c0(r1)
    psq_l f23, 0x1b8(r1), 0, 0
    lfd f23, 0x1b0(r1)
    psq_l f22, 0x1a8(r1), 0, 0
    lfd f22, 0x1a0(r1)
    psq_l f21, 0x198(r1), 0, 0
    lfd f21, 0x190(r1)
    psq_l f20, 0x188(r1), 0, 0
    lfd f20, 0x180(r1)
    psq_l f19, 0x178(r1), 0, 0
    lfd f19, 0x170(r1)
    psq_l f18, 0x168(r1), 0, 0
    lfd f18, 0x160(r1)
    bl _restgpr_23
    lwz r0, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_8034DA0C(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stfd f29, 0xe0(r1)
    psq_st f29, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    mr r31, r3
    stw r30, 0xd8(r1)
    lwz r4, 0x14b4(r3)
    cmpwi r4, 0x0
    bne lbl_fn_8034DA0C_00000DE0
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_808853AC
    fcmpo cr0, f3, f0
    bge lbl_fn_8034DA0C_00000DB4
    lwz r5, 0x14b0(r3)
    addi r4, r1, 0x14
    lfs f0, 0x530(r3)
    addi r30, r1, 0x8
    lfs f3, 0x530(r5)
    lfs f5, 0x52c(r5)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x528(r5)
    lfs f0, 0x528(r3)
    fsubs f5, f5, f4
    lfs f31, lbl_808853F4
    fsubs f4, f3, f0
    stfs f5, 0x18(r1)
    frsp f3, f2
    lfs f0, lbl_808853D8
    stfs f4, 0x14(r1)
    fabs f4, f3
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    frsp f4, f4
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x10(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_8034DA0C_00000B98
    lfs f3, 0x8(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_8034DA0C_00000B8C
    lfs f0, lbl_808853DC
    b lbl_fn_8034DA0C_00000B90
lbl_fn_8034DA0C_00000B8C:
    lfs f0, lbl_808853E0
lbl_fn_8034DA0C_00000B90:
    stfs f0, 0x24(r1)
    b lbl_fn_8034DA0C_00000BAC
lbl_fn_8034DA0C_00000B98:
    fmr f2, f3
    lfs f1, 0x8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x24(r1)
lbl_fn_8034DA0C_00000BAC:
    lfs f0, 0x24(r1)
    addi r3, r1, 0xa8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885378
    addi r4, r1, 0x2c
    lfs f4, 0xb0(r1)
    mr r5, r4
    lfs f5, 0xac(r1)
    addi r3, r1, 0x68
    lfs f6, 0xa8(r1)
    lfs f7, 0xc0(r1)
    lfs f8, 0xbc(r1)
    lfs f9, 0xb8(r1)
    lfs f10, 0xd0(r1)
    lfs f11, 0xcc(r1)
    lfs f12, 0xc8(r1)
    lfs f13, 0xd4(r1)
    lfs f30, 0xc4(r1)
    lfs f29, 0xb4(r1)
    lfs f0, lbl_80885398
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x10(r1)
    stfs f3, 0x98(r1)
    stfs f3, 0x9c(r1)
    stfs f3, 0xa0(r1)
    stfs f0, 0xa4(r1)
    stfs f6, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f4, 0x64(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f9, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f7, 0x58(r1)
    stfs f9, 0x78(r1)
    stfs f8, 0x7c(r1)
    stfs f7, 0x80(r1)
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f10, 0x4c(r1)
    stfs f12, 0x88(r1)
    stfs f11, 0x8c(r1)
    stfs f10, 0x90(r1)
    stfs f29, 0x38(r1)
    stfs f30, 0x3c(r1)
    stfs f13, 0x40(r1)
    stfs f29, 0x74(r1)
    stfs f30, 0x84(r1)
    stfs f13, 0x94(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F9750
    lfs f2, 0x34(r1)
    lfs f0, lbl_808853D8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8034DA0C_00000CC8
    lfs f3, 0x30(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_8034DA0C_00000CB8
    lfs f0, lbl_808853DC
    b lbl_fn_8034DA0C_00000CBC
lbl_fn_8034DA0C_00000CB8:
    lfs f0, lbl_808853E0
lbl_fn_8034DA0C_00000CBC:
    fneg f0, f0
    stfs f0, 0x20(r1)
    b lbl_fn_8034DA0C_00000CDC
lbl_fn_8034DA0C_00000CC8:
    lfs f1, 0x30(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x20(r1)
lbl_fn_8034DA0C_00000CDC:
    addi r3, r1, 0x20
    lfs f3, lbl_80885378
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8074A8E0@ha
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f3
    lfs f0, 0x538(r31)
    lfs f29, 0xc(r1)
    stfs f2, 0x10(r1)
    fsubs f1, f29, f0
    lfd f2, lbl_8074A8E0@l(r3)
    stfs f3, 0x28(r1)
    bl fn_8068AEA8
    frsp f5, f1
    lfs f0, lbl_808853E4
    fcmpo cr0, f5, f0
    ble lbl_fn_8034DA0C_00000D28
    lfs f0, lbl_808853B8
    fsubs f5, f5, f0
lbl_fn_8034DA0C_00000D28:
    lfs f0, lbl_808853E8
    fcmpo cr0, f5, f0
    bge lbl_fn_8034DA0C_00000D3C
    lfs f0, lbl_808853B8
    fadds f5, f5, f0
lbl_fn_8034DA0C_00000D3C:
    lfs f3, lbl_808853EC
    lfs f0, lbl_80885378
    fmuls f3, f3, f31
    fcmpo cr0, f5, f0
    bge lbl_fn_8034DA0C_00000D58
    fneg f4, f5
    b lbl_fn_8034DA0C_00000D5C
lbl_fn_8034DA0C_00000D58:
    fmr f4, f5
lbl_fn_8034DA0C_00000D5C:
    lfs f0, lbl_808853F0
    fmuls f3, f0, f3
    fcmpo cr0, f4, f3
    cror eq, lt, eq
    bne lbl_fn_8034DA0C_00000D88
    lfs f1, lbl_80885378
    addi r3, r31, 0xb0
    li r4, 0x1
    bl fn_80097CCC
    stfs f29, 0x538(r31)
    b lbl_fn_8034DA0C_00000DB4
lbl_fn_8034DA0C_00000D88:
    lfs f0, lbl_80885378
    fcmpo cr0, f5, f0
    cror eq, lt, eq
    bne lbl_fn_8034DA0C_00000DA8
    lfs f0, 0x538(r31)
    fsubs f0, f0, f3
    stfs f0, 0x538(r31)
    b lbl_fn_8034DA0C_00000DB4
lbl_fn_8034DA0C_00000DA8:
    lfs f0, 0x538(r31)
    fadds f0, f0, f3
    stfs f0, 0x538(r31)
lbl_fn_8034DA0C_00000DB4:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_808853F8
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8034DA0C_00000F18
    lwz r4, 0x14b4(r31)
    mr r3, r31
    addi r0, r4, 0x1
    stw r0, 0x14b4(r31)
    bl fn_8034D450
    b lbl_fn_8034DA0C_00000F18
lbl_fn_8034DA0C_00000DE0:
    cmpwi r4, 0x1
    bne lbl_fn_8034DA0C_00000E0C
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_80885410
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8034DA0C_00000F18
    addi r0, r4, 0x1
    stw r0, 0x14b4(r3)
    bl fn_8034D450
    b lbl_fn_8034DA0C_00000F18
lbl_fn_8034DA0C_00000E0C:
    lfs f29, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f29, f1
    cror eq, gt, eq
    bne lbl_fn_8034DA0C_00000F18
    li r30, 0x0
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    stw r30, 0x14c0(r31)
    stw r30, 0x17e8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x3ea
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ed
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ef
    li r6, 0x1
    bl fn_80239DAC
    bl fn_80680CF8
    lis r4, 0x8889
    lwz r0, 0x14c0(r31)
    subi r5, r4, 0x7777
    mulhw r5, r5, r3
    li r4, 0x3
    add r5, r5, r3
    srawi r5, r5, 5
    srwi r6, r5, 31
    add r5, r5, r6
    mulli r5, r5, 0x3c
    subf r5, r5, r3
    mr r3, r31
    subfic r5, r5, 0x1e
    add r0, r0, r5
    stw r0, 0x14c0(r31)
    bl fn_8016E970
    lfs f0, lbl_80885398
    li r0, 0x1
    stw r30, 0x58c(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80885378
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x2
    lfs f2, lbl_808853C4
    li r6, 0x1
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
lbl_fn_8034DA0C_00000F18:
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    psq_l f29, 0xe8(r1), 0, 0
    lfd f29, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8034DE90(void)
{
    nofralloc
    stwu r1, -0x400(r1)
    mflr r0
    stw r0, 0x404(r1)
    addi r11, r1, 0x3f0
    stfd f31, 0x3f0(r1)
    psq_st f31, 0x3f8(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x14b4(r3)
    mr r29, r3
    li r31, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_8034DE90_00000FC8
    lwz r3, 0x16f0(r3)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8034DE90_00000FC4
    lwz r0, 0x560(r3)
    cmpwi r0, 0x89
    bne lbl_fn_8034DE90_00000FC4
    lwz r3, 0xf80(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8034DE90_00000FC8
    lwz r12, 0x0(r3)
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8034DE90_00000FC8
    li r0, 0x1
    stw r0, 0x14b4(r29)
    b lbl_fn_8034DE90_00000FC8
lbl_fn_8034DE90_00000FC4:
    li r31, 0x1
lbl_fn_8034DE90_00000FC8:
    lbz r0, 0x1714(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8034DE90_000017B8
    lwz r0, 0x16f4(r29)
    cmpwi r0, 0x2
    beq lbl_fn_8034DE90_00000FF8
    addi r3, r29, 0x1704
    bl fn_804786F8
    li r4, 0x0
    bl fn_805BDCC0
    mr r30, r3
    b lbl_fn_8034DE90_0000100C
lbl_fn_8034DE90_00000FF8:
    addi r3, r29, 0x170c
    bl fn_804786F8
    li r4, 0x0
    bl fn_805BDCC0
    mr r30, r3
lbl_fn_8034DE90_0000100C:
    lfs f1, 0x2e4(r29)
    mr r3, r30
    addi r4, r1, 0x20
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_805BF414
    lfs f1, 0x2e4(r29)
    mr r3, r30
    addi r4, r1, 0x14
    li r5, 0x7
    li r6, 0x8
    li r7, 0x9
    bl fn_805BF414
    lwz r0, 0x16f4(r29)
    cmpwi r0, 0x2
    beq lbl_fn_8034DE90_00001058
    addi r4, r29, 0x528
    b lbl_fn_8034DE90_00001060
lbl_fn_8034DE90_00001058:
    lwz r3, 0x16f0(r29)
    addi r4, r3, 0x528
lbl_fn_8034DE90_00001060:
    lfs f1, 0x0(r4)
    addi r3, r1, 0x1b0
    lfs f2, 0x4(r4)
    lfs f3, 0x8(r4)
    bl fn_805F90D0
    lfs f9, lbl_80885378
    addi r27, r1, 0x60
    lfs f1, 0x538(r29)
    addi r28, r1, 0x1b0
    lfs f0, lbl_80885398
    fcmpu cr0, f9, f1
    stfs f9, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f9, 0x10(r1)
    stfs f9, 0x8c(r1)
    stfs f9, 0x84(r1)
    stfs f9, 0x80(r1)
    stfs f9, 0x7c(r1)
    stfs f9, 0x78(r1)
    stfs f9, 0x70(r1)
    stfs f9, 0x6c(r1)
    stfs f9, 0x68(r1)
    stfs f9, 0x64(r1)
    stfs f0, 0x88(r1)
    stfs f0, 0x74(r1)
    stfs f0, 0x60(r1)
    beq lbl_fn_8034DE90_0000111C
    addi r3, r1, 0xc0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0xc0
    addi r5, r1, 0x90
    bl fn_805F89F0
    addi r3, r1, 0x90
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_8034DE90_0000111C:
    lfs f0, lbl_80885378
    lfs f1, 0x8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8034DE90_0000117C
    addi r3, r1, 0x120
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x120
    addi r5, r1, 0xf0
    bl fn_805F89F0
    addi r3, r1, 0xf0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_8034DE90_0000117C:
    lfs f0, lbl_80885378
    lfs f1, 0x10(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8034DE90_000011DC
    addi r3, r1, 0x180
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x180
    addi r5, r1, 0x150
    bl fn_805F89F0
    addi r3, r1, 0x150
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_8034DE90_000011DC:
    mr r3, r28
    mr r4, r27
    addi r5, r1, 0x30
    bl fn_805F89F0
    addi r6, r1, 0x30
    addi r4, r1, 0x20
    psq_l f1, 0x0(r6), 0, 0
    mr r5, r4
    psq_l f2, 0x8(r6), 0, 0
    addi r3, r1, 0x1b0
    psq_l f3, 0x10(r6), 0, 0
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
    bl fn_805F93C0
    addi r4, r1, 0x14
    addi r3, r1, 0x1b0
    mr r5, r4
    bl fn_805F93C0
    lwz r9, lbl_8087F430
    addi r8, r1, 0x1e8
    addi r7, r1, 0x1f4
    addi r6, r1, 0x200
    lwz r0, 0x6c(r9)
    addi r5, r1, 0x20c
    stw r0, 0x1e0(r1)
    addi r4, r1, 0x238
    addi r3, r1, 0x268
    lwz r0, 0x70(r9)
    stw r0, 0x1e4(r1)
    psq_l f1, 0x74(r9), 0, 0
    lfs f2, 0x7c(r9)
    stfs f2, 0x1f0(r1)
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x80(r9), 0, 0
    lfs f2, 0x88(r9)
    stfs f2, 0x1fc(r1)
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x8c(r9), 0, 0
    lfs f2, 0x94(r9)
    stfs f2, 0x208(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x98(r9), 0, 0
    lfs f2, 0xa0(r9)
    stfs f2, 0x214(r1)
    psq_st f1, 0x0(r5), 0, 0
    lfs f0, 0xa4(r9)
    stfs f0, 0x218(r1)
    lfs f0, 0xa8(r9)
    stfs f0, 0x21c(r1)
    lfs f0, 0xac(r9)
    stfs f0, 0x220(r1)
    lfs f0, 0xb0(r9)
    stfs f0, 0x224(r1)
    lfs f0, 0xb4(r9)
    stfs f0, 0x228(r1)
    lfs f0, 0xb8(r9)
    stfs f0, 0x22c(r1)
    lfs f0, 0xbc(r9)
    stfs f0, 0x230(r1)
    lfs f0, 0xc0(r9)
    stfs f0, 0x234(r1)
    psq_l f1, 0xc4(r9), 0, 0
    psq_l f2, 0xcc(r9), 0, 0
    psq_l f3, 0xd4(r9), 0, 0
    psq_l f4, 0xdc(r9), 0, 0
    psq_l f5, 0xe4(r9), 0, 0
    psq_l f6, 0xec(r9), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_l f1, 0xf4(r9), 0, 0
    psq_l f2, 0xfc(r9), 0, 0
    psq_l f3, 0x104(r9), 0, 0
    psq_l f4, 0x10c(r9), 0, 0
    psq_l f5, 0x114(r9), 0, 0
    psq_l f6, 0x11c(r9), 0, 0
    psq_l f7, 0x124(r9), 0, 0
    psq_l f8, 0x12c(r9), 0, 0
    psq_st f8, 0x38(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f7, 0x30(r3), 0, 0
    lfs f0, 0x134(r9)
    addi r6, r1, 0x2e0
    stfs f0, 0x2a8(r1)
    addi r3, r1, 0x2b0
    addi r4, r6, 0x94
    addi r5, r9, 0x200
    lfs f0, 0x138(r9)
    addi r0, r6, 0xf4
    stfs f0, 0x2ac(r1)
    psq_l f1, 0x13c(r9), 0, 0
    psq_l f2, 0x144(r9), 0, 0
    psq_l f3, 0x14c(r9), 0, 0
    psq_l f4, 0x154(r9), 0, 0
    psq_l f5, 0x15c(r9), 0, 0
    psq_l f6, 0x164(r9), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_l f1, 0x16c(r9), 0, 0
    psq_l f2, 0x174(r9), 0, 0
    psq_l f3, 0x17c(r9), 0, 0
    psq_l f4, 0x184(r9), 0, 0
    psq_l f5, 0x18c(r9), 0, 0
    psq_l f6, 0x194(r9), 0, 0
    psq_st f6, 0x28(r6), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    psq_st f3, 0x10(r6), 0, 0
    psq_st f4, 0x18(r6), 0, 0
    psq_st f5, 0x20(r6), 0, 0
    lwz r3, 0x19c(r9)
    stw r3, 0x310(r1)
    lfs f0, 0x1a0(r9)
    stfs f0, 0x314(r1)
    lfs f0, 0x1a4(r9)
    stfs f0, 0x318(r1)
    psq_l f1, 0x1a8(r9), 0, 0
    lfs f2, 0x1b0(r9)
    stfs f2, 0x324(r1)
    psq_st f1, 0x3c(r6), 0, 0
    lfs f0, 0x1b4(r9)
    stfs f0, 0x328(r1)
    psq_l f1, 0x1b8(r9), 0, 0
    lfs f2, 0x1c0(r9)
    stfs f2, 0x334(r1)
    psq_st f1, 0x4c(r6), 0, 0
    lfs f0, 0x1c4(r9)
    stfs f0, 0x338(r1)
    psq_l f1, 0x1c8(r9), 0, 0
    lfs f2, 0x1d0(r9)
    stfs f2, 0x344(r1)
    psq_st f1, 0x5c(r6), 0, 0
    lfs f0, 0x1d4(r9)
    stfs f0, 0x348(r1)
    psq_l f1, 0x1d8(r9), 0, 0
    lfs f2, 0x1e0(r9)
    stfs f2, 0x354(r1)
    psq_st f1, 0x6c(r6), 0, 0
    lfs f0, 0x1e4(r9)
    stfs f0, 0x358(r1)
    psq_l f1, 0x1e8(r9), 0, 0
    lfs f2, 0x1f0(r9)
    stfs f2, 0x364(r1)
    psq_st f1, 0x7c(r6), 0, 0
    psq_l f1, 0x1f4(r9), 0, 0
    lfs f2, 0x1fc(r9)
    stfs f2, 0x370(r1)
    psq_st f1, 0x88(r6), 0, 0
lbl_fn_8034DE90_00001478:
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    lfs f0, 0xc(r5)
    addi r5, r5, 0x10
    stfs f0, 0xc(r4)
    addi r4, r4, 0x10
    cmplw r4, r0
    blt lbl_fn_8034DE90_00001478
    addi r3, r1, 0x20
    lfs f2, 0x28(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r27, r1, 0x1e8
    stfs f2, 0x1f0(r1)
    addi r4, r1, 0x14
    lfs f2, 0x1c(r1)
    addi r28, r1, 0x1f4
    psq_st f1, 0x0(r27), 0, 0
    mr r3, r30
    psq_l f1, 0x0(r4), 0, 0
    li r4, 0x0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x1fc(r1)
    lfs f1, 0x2e4(r29)
    bl fn_805BF208
    lfs f9, lbl_808853F0
    lfs f0, lbl_8088539C
    fmuls f9, f9, f1
    lfs f31, 0x234(r1)
    fmuls f1, f0, f9
    bl fn_8068AE24
    frsp f0, f1
    fdivs f1, f0, f31
    bl fn_8068A4A8
    frsp f9, f1
    lfs f0, lbl_80885438
    addi r3, r1, 0x1e0
    fmuls f0, f0, f9
    stfs f0, 0x230(r1)
    bl fn_8004B378
    lwz r7, lbl_8087EFB4
    addi r3, r1, 0x200
    lwz r0, 0x1e0(r1)
    addi r4, r1, 0x20c
    stw r0, 0x104(r7)
    addi r5, r1, 0x238
    addi r6, r1, 0x268
    lwz r0, 0x1e4(r1)
    stw r0, 0x108(r7)
    lfs f2, 0x1f0(r1)
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x10c(r7), 0, 0
    stfs f2, 0x114(r7)
    lfs f2, 0x1fc(r1)
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x118(r7), 0, 0
    stfs f2, 0x120(r7)
    lfs f2, 0x208(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x124(r7), 0, 0
    stfs f2, 0x12c(r7)
    lfs f2, 0x214(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x130(r7), 0, 0
    stfs f2, 0x138(r7)
    lfs f0, 0x218(r1)
    stfs f0, 0x13c(r7)
    lfs f0, 0x21c(r1)
    stfs f0, 0x140(r7)
    lfs f0, 0x220(r1)
    stfs f0, 0x144(r7)
    lfs f0, 0x224(r1)
    stfs f0, 0x148(r7)
    lfs f0, 0x228(r1)
    stfs f0, 0x14c(r7)
    lfs f0, 0x22c(r1)
    stfs f0, 0x150(r7)
    lfs f0, 0x230(r1)
    stfs f0, 0x154(r7)
    lfs f0, 0x234(r1)
    stfs f0, 0x158(r7)
    psq_l f2, 0x8(r5), 0, 0
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x15c(r7), 0, 0
    psq_st f2, 0x164(r7), 0, 0
    psq_st f3, 0x16c(r7), 0, 0
    psq_st f4, 0x174(r7), 0, 0
    psq_st f5, 0x17c(r7), 0, 0
    psq_st f6, 0x184(r7), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_l f3, 0x10(r6), 0, 0
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_l f7, 0x30(r6), 0, 0
    psq_l f8, 0x38(r6), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x18c(r7), 0, 0
    psq_st f2, 0x194(r7), 0, 0
    psq_st f3, 0x19c(r7), 0, 0
    psq_st f4, 0x1a4(r7), 0, 0
    psq_st f5, 0x1ac(r7), 0, 0
    psq_st f6, 0x1b4(r7), 0, 0
    psq_st f7, 0x1bc(r7), 0, 0
    psq_st f8, 0x1c4(r7), 0, 0
    lfs f0, 0x2a8(r1)
    addi r4, r1, 0x2e0
    stfs f0, 0x1cc(r7)
    addi r3, r1, 0x2b0
    addi r6, r7, 0x298
    addi r5, r4, 0x94
    lfs f0, 0x2ac(r1)
    addi r0, r7, 0x2f8
    stfs f0, 0x1d0(r7)
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x1d4(r7), 0, 0
    psq_st f2, 0x1dc(r7), 0, 0
    psq_st f3, 0x1e4(r7), 0, 0
    psq_st f4, 0x1ec(r7), 0, 0
    psq_st f5, 0x1f4(r7), 0, 0
    psq_st f6, 0x1fc(r7), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x204(r7), 0, 0
    psq_st f2, 0x20c(r7), 0, 0
    psq_st f3, 0x214(r7), 0, 0
    psq_st f4, 0x21c(r7), 0, 0
    psq_st f5, 0x224(r7), 0, 0
    psq_st f6, 0x22c(r7), 0, 0
    lwz r3, 0x310(r1)
    stw r3, 0x234(r7)
    lfs f0, 0x314(r1)
    stfs f0, 0x238(r7)
    lfs f0, 0x318(r1)
    stfs f0, 0x23c(r7)
    lfs f2, 0x324(r1)
    psq_l f1, 0x3c(r4), 0, 0
    psq_st f1, 0x240(r7), 0, 0
    stfs f2, 0x248(r7)
    lfs f0, 0x328(r1)
    stfs f0, 0x24c(r7)
    lfs f2, 0x334(r1)
    psq_l f1, 0x4c(r4), 0, 0
    psq_st f1, 0x250(r7), 0, 0
    stfs f2, 0x258(r7)
    lfs f0, 0x338(r1)
    stfs f0, 0x25c(r7)
    lfs f2, 0x344(r1)
    psq_l f1, 0x5c(r4), 0, 0
    psq_st f1, 0x260(r7), 0, 0
    stfs f2, 0x268(r7)
    lfs f0, 0x348(r1)
    stfs f0, 0x26c(r7)
    lfs f2, 0x354(r1)
    psq_l f1, 0x6c(r4), 0, 0
    psq_st f1, 0x270(r7), 0, 0
    stfs f2, 0x278(r7)
    lfs f0, 0x358(r1)
    stfs f0, 0x27c(r7)
    lfs f2, 0x364(r1)
    psq_l f1, 0x7c(r4), 0, 0
    psq_st f1, 0x280(r7), 0, 0
    stfs f2, 0x288(r7)
    lfs f2, 0x370(r1)
    psq_l f1, 0x88(r4), 0, 0
    psq_st f1, 0x28c(r7), 0, 0
    stfs f2, 0x294(r7)
lbl_fn_8034DE90_0000174C:
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    addi r5, r5, 0x10
    stfs f0, 0xc(r6)
    addi r6, r6, 0x10
    cmplw r6, r0
    blt lbl_fn_8034DE90_0000174C
    cmpwi r31, 0x0
    bne lbl_fn_8034DE90_00001790
    lfs f0, 0x2e4(r29)
    lfs f9, 0x14(r30)
    fcmpo cr0, f0, f9
    cror eq, gt, eq
    bne lbl_fn_8034DE90_000017AC
lbl_fn_8034DE90_00001790:
    lwz r3, lbl_8087F430
    addi r4, r1, 0x1e0
    lfs f1, lbl_8088546C
    addi r3, r3, 0x6c
    bl fn_80392D2C
    li r0, 0x0
    stb r0, 0x1714(r29)
lbl_fn_8034DE90_000017AC:
    addi r3, r1, 0x1e0
    li r4, -0x1
    bl fn_8004B338
lbl_fn_8034DE90_000017B8:
    lwz r0, 0x16f4(r29)
    addi r3, r29, 0x16f8
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x1700(r29)
    cmpwi r0, 0x2
    psq_st f1, 0x534(r29), 0, 0
    stfs f2, 0x53c(r29)
    bne lbl_fn_8034DE90_0000181C
    lfs f9, 0x2e4(r29)
    lfs f0, lbl_8088549C
    lwz r3, 0x16f0(r29)
    fcmpo cr0, f9, f0
    lfs f0, 0x2e8(r3)
    stfs f0, 0x2e8(r29)
    cror eq, gt, eq
    bne lbl_fn_8034DE90_0000181C
    lwz r3, lbl_8087F430
    li r4, 0x88
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8034DE90_0000181C
    lwz r3, lbl_8087F430
    li r4, 0x88
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_8034DE90_0000181C:
    cmpwi r31, 0x0
    bne lbl_fn_8034DE90_00001840
    lfs f31, 0x2e4(r29)
    addi r3, r29, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8034DE90_00001930
lbl_fn_8034DE90_00001840:
    li r30, 0x0
    stw r30, 0x14b4(r29)
    stw r30, 0x14b8(r29)
    stw r30, 0x14c0(r29)
    stw r30, 0x17e8(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    mr r4, r29
    li r5, 0x3ea
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x3ed
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x3ef
    li r6, 0x1
    bl fn_80239DAC
    bl fn_80680CF8
    lis r4, 0x8889
    lwz r0, 0x14c0(r29)
    subi r5, r4, 0x7777
    mulhw r5, r5, r3
    li r4, 0x3
    add r5, r5, r3
    srawi r5, r5, 5
    srwi r6, r5, 31
    add r5, r5, r6
    mulli r5, r5, 0x3c
    subf r5, r5, r3
    mr r3, r29
    subfic r5, r5, 0x1e
    add r0, r0, r5
    stw r0, 0x14c0(r29)
    bl fn_8016E970
    lfs f0, lbl_80885398
    li r0, 0x1
    stw r30, 0x58c(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_80885378
    li r4, 0x0
    stw r0, 0x3fc(r29)
    li r5, 0x2
    lfs f2, lbl_808853C4
    li r6, 0x1
    stfs f0, 0x2fc(r29)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r29)
    bl fn_80097C08
lbl_fn_8034DE90_00001930:
    addi r11, r1, 0x3f0
    psq_l f31, 0x3f8(r1), 0, 0
    lfd f31, 0x3f0(r1)
    bl _restgpr_27
    lwz r0, 0x404(r1)
    mtlr r0
    addi r1, r1, 0x400
    blr
}

asm void fn_8034E898(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r4, lbl_8074A8D8@ha
    lfs f3, lbl_808854A0
    stw r0, 0x34(r1)
    lis r0, 0x4330
    lfd f5, lbl_8074A8D8@l(r4)
    stfd f31, 0x20(r1)
    lfs f0, lbl_80885378
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lwz r5, lbl_8087F0A8
    stw r0, 0x8(r1)
    lwz r0, 0x30(r5)
    lfs f2, 0x578(r3)
    mullw r0, r0, r0
    lfs f1, 0x52c(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f4, 0x8(r1)
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fadds f2, f2, f3
    stfs f2, 0x578(r3)
    fadds f1, f1, f2
    stfs f1, 0x52c(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_8034E898_000019D0
    stfs f0, 0x52c(r3)
    stfs f0, 0x578(r3)
lbl_fn_8034E898_000019D0:
    lwz r0, 0x14b8(r3)
    cmpwi r0, 0x96
    bge lbl_fn_8034E898_000019F8
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8034E898_00001AE8
lbl_fn_8034E898_000019F8:
    li r30, 0x0
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    stw r30, 0x14c0(r31)
    stw r30, 0x17e8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x3ea
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ed
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ef
    li r6, 0x1
    bl fn_80239DAC
    bl fn_80680CF8
    lis r4, 0x8889
    lwz r0, 0x14c0(r31)
    subi r5, r4, 0x7777
    mulhw r5, r5, r3
    li r4, 0x3
    add r5, r5, r3
    srawi r5, r5, 5
    srwi r6, r5, 31
    add r5, r5, r6
    mulli r5, r5, 0x3c
    subf r5, r5, r3
    mr r3, r31
    subfic r5, r5, 0x1e
    add r0, r0, r5
    stw r0, 0x14c0(r31)
    bl fn_8016E970
    lfs f0, lbl_80885398
    li r0, 0x1
    stw r30, 0x58c(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80885378
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x2
    lfs f2, lbl_808853C4
    li r6, 0x1
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
lbl_fn_8034E898_00001AE8:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
