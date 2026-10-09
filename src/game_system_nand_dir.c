#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800F8C6C(void);
extern void fn_800FAB80(void);
extern void fn_8015ECC4(void);
extern void fn_8016C7D8(void);
extern void fn_8016E970(void);
extern void fn_80192FB4(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A254(void);
extern void fn_8023A680(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F9160(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_8074A8D8[];
extern u8 lbl_8074A8E0[];
extern u8 lbl_8074AA58[];

/* Small data declarations */
extern u32 lbl_8087DCA0;
extern u32 lbl_8087DCA4;
extern u32 lbl_8087DCA8;
extern u32 lbl_8087DCAC;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885378;
extern u32 lbl_8088537C;
extern u32 lbl_80885398;
extern u32 lbl_8088539C;
extern u32 lbl_808853AC;
extern u32 lbl_808853B0;
extern u32 lbl_808853B8;
extern u32 lbl_808853BC;
extern u32 lbl_808853C4;
extern u32 lbl_808853CC;
extern u32 lbl_808853D8;
extern u32 lbl_808853DC;
extern u32 lbl_808853E0;
extern u32 lbl_808853E4;
extern u32 lbl_808853E8;
extern u32 lbl_808853EC;
extern u32 lbl_808853F0;
extern u32 lbl_808853F8;
extern u32 lbl_80885420;
extern u32 lbl_8088542C;
extern u32 lbl_80885438;
extern u32 lbl_80885440;
extern u32 lbl_80885444;
extern u32 lbl_8088544C;
extern u32 lbl_80885450;
extern u32 lbl_80885454;
extern u32 lbl_80885458;
extern u32 lbl_8088545C;
extern u32 lbl_80885460;
extern u32 lbl_80885464;
extern u32 lbl_80885468;
extern u32 lbl_8088546C;
extern u32 lbl_80885470;
extern u32 lbl_80885474;
extern u32 lbl_80885478;
extern u32 lbl_8088547C;
extern u32 lbl_80885480;
extern u32 lbl_80885484;
extern u32 lbl_80885488;
extern u32 lbl_8088548C;

/* Function declarations */
void fn_8034AE48(void);
void fn_8034B8CC(void);
void fn_8034C060(void);
void fn_8034C714(void);

asm void fn_8034AE48(void)
{
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    stw r0, 0x2d4(r1)
    stfd f31, 0x2c0(r1)
    psq_st f31, 0x2c8(r1), 0, 0
    stfd f30, 0x2b0(r1)
    psq_st f30, 0x2b8(r1), 0, 0
    stfd f29, 0x2a0(r1)
    psq_st f29, 0x2a8(r1), 0, 0
    stw r31, 0x29c(r1)
    mr r31, r3
    stw r30, 0x298(r1)
    lwz r0, 0x14b4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8034AE48_00000600
    lwz r5, 0x14b0(r3)
    addi r4, r1, 0xb0
    lfs f0, 0x530(r3)
    addi r30, r1, 0xa4
    lfs f3, 0x530(r5)
    lfs f5, 0x52c(r5)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x528(r5)
    lfs f0, 0x528(r3)
    fsubs f5, f5, f4
    lfs f31, lbl_80885398
    fsubs f4, f3, f0
    stfs f5, 0xb4(r1)
    frsp f3, f2
    lfs f0, lbl_808853D8
    stfs f4, 0xb0(r1)
    fabs f4, f3
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0xb8(r1)
    frsp f4, f4
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xac(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_8034AE48_000000C4
    lfs f3, 0xa4(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_8034AE48_000000B8
    lfs f0, lbl_808853DC
    b lbl_fn_8034AE48_000000BC
lbl_fn_8034AE48_000000B8:
    lfs f0, lbl_808853E0
lbl_fn_8034AE48_000000BC:
    stfs f0, 0xc0(r1)
    b lbl_fn_8034AE48_000000D8
lbl_fn_8034AE48_000000C4:
    fmr f2, f3
    lfs f1, 0xa4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xc0(r1)
lbl_fn_8034AE48_000000D8:
    lfs f0, 0xc0(r1)
    addi r3, r1, 0x238
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885378
    addi r4, r1, 0xc8
    lfs f4, 0x240(r1)
    mr r5, r4
    lfs f5, 0x23c(r1)
    addi r3, r1, 0x1f8
    lfs f6, 0x238(r1)
    lfs f7, 0x250(r1)
    lfs f8, 0x24c(r1)
    lfs f9, 0x248(r1)
    lfs f10, 0x260(r1)
    lfs f11, 0x25c(r1)
    lfs f12, 0x258(r1)
    lfs f13, 0x264(r1)
    lfs f30, 0x254(r1)
    lfs f29, 0x244(r1)
    lfs f0, lbl_80885398
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xac(r1)
    stfs f3, 0x228(r1)
    stfs f3, 0x22c(r1)
    stfs f3, 0x230(r1)
    stfs f0, 0x234(r1)
    stfs f6, 0xf8(r1)
    stfs f5, 0xfc(r1)
    stfs f4, 0x100(r1)
    stfs f6, 0x1f8(r1)
    stfs f5, 0x1fc(r1)
    stfs f4, 0x200(r1)
    stfs f9, 0xec(r1)
    stfs f8, 0xf0(r1)
    stfs f7, 0xf4(r1)
    stfs f9, 0x208(r1)
    stfs f8, 0x20c(r1)
    stfs f7, 0x210(r1)
    stfs f12, 0xe0(r1)
    stfs f11, 0xe4(r1)
    stfs f10, 0xe8(r1)
    stfs f12, 0x218(r1)
    stfs f11, 0x21c(r1)
    stfs f10, 0x220(r1)
    stfs f29, 0xd4(r1)
    stfs f30, 0xd8(r1)
    stfs f13, 0xdc(r1)
    stfs f29, 0x204(r1)
    stfs f30, 0x214(r1)
    stfs f13, 0x224(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xd0(r1)
    bl fn_805F9750
    lfs f2, 0xd0(r1)
    lfs f0, lbl_808853D8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8034AE48_000001F4
    lfs f3, 0xcc(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_8034AE48_000001E4
    lfs f0, lbl_808853DC
    b lbl_fn_8034AE48_000001E8
lbl_fn_8034AE48_000001E4:
    lfs f0, lbl_808853E0
lbl_fn_8034AE48_000001E8:
    fneg f0, f0
    stfs f0, 0xbc(r1)
    b lbl_fn_8034AE48_00000208
lbl_fn_8034AE48_000001F4:
    lfs f1, 0xcc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xbc(r1)
lbl_fn_8034AE48_00000208:
    addi r3, r1, 0xbc
    lfs f3, lbl_80885378
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8074A8E0@ha
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f3
    lfs f0, 0x538(r31)
    lfs f29, 0xa8(r1)
    stfs f2, 0xac(r1)
    fsubs f1, f29, f0
    lfd f2, lbl_8074A8E0@l(r3)
    stfs f3, 0xc4(r1)
    bl fn_8068AEA8
    frsp f5, f1
    lfs f0, lbl_808853E4
    fcmpo cr0, f5, f0
    ble lbl_fn_8034AE48_00000254
    lfs f0, lbl_808853B8
    fsubs f5, f5, f0
lbl_fn_8034AE48_00000254:
    lfs f0, lbl_808853E8
    fcmpo cr0, f5, f0
    bge lbl_fn_8034AE48_00000268
    lfs f0, lbl_808853B8
    fadds f5, f5, f0
lbl_fn_8034AE48_00000268:
    lfs f3, lbl_808853EC
    lfs f0, lbl_80885378
    fmuls f3, f3, f31
    fcmpo cr0, f5, f0
    bge lbl_fn_8034AE48_00000284
    fneg f4, f5
    b lbl_fn_8034AE48_00000288
lbl_fn_8034AE48_00000284:
    fmr f4, f5
lbl_fn_8034AE48_00000288:
    lfs f0, lbl_808853F0
    fmuls f3, f0, f3
    fcmpo cr0, f4, f3
    cror eq, lt, eq
    bne lbl_fn_8034AE48_000002B4
    lfs f1, lbl_80885378
    addi r3, r31, 0xb0
    li r4, 0x1
    bl fn_80097CCC
    stfs f29, 0x538(r31)
    b lbl_fn_8034AE48_000002E0
lbl_fn_8034AE48_000002B4:
    lfs f0, lbl_80885378
    fcmpo cr0, f5, f0
    cror eq, lt, eq
    bne lbl_fn_8034AE48_000002D4
    lfs f0, 0x538(r31)
    fsubs f0, f0, f3
    stfs f0, 0x538(r31)
    b lbl_fn_8034AE48_000002E0
lbl_fn_8034AE48_000002D4:
    lfs f0, 0x538(r31)
    fadds f0, f0, f3
    stfs f0, 0x538(r31)
lbl_fn_8034AE48_000002E0:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_8088544C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8034AE48_00000A54
    lwz r7, 0x14b0(r31)
    addi r4, r1, 0x134
    lfs f0, 0x530(r31)
    addi r6, r31, 0x15dc
    lfs f2, 0x530(r7)
    addi r3, r1, 0x14c
    psq_l f1, 0x528(r7), 0, 0
    addi r5, r1, 0x44
    frsp f3, f2
    psq_st f1, 0x0(r4), 0, 0
    addi r30, r1, 0x38
    stfs f2, 0x13c(r1)
    fsubs f7, f3, f0
    lfs f0, 0x52c(r31)
    stfs f2, 0x154(r1)
    frsp f2, f2
    lfs f5, 0x138(r1)
    stfs f2, 0x15e4(r31)
    fmr f2, f7
    lfs f4, 0x134(r1)
    fsubs f6, f5, f0
    lfs f3, 0x528(r31)
    lfs f0, lbl_808853D8
    frsp f5, f2
    fsubs f4, f4, f3
    stfs f6, 0x48(r1)
    lfs f3, lbl_80885378
    fabs f6, f5
    stfs f4, 0x44(r1)
    psq_st f1, 0x0(r6), 0, 0
    frsp f4, f6
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    fcmpo cr0, f4, f0
    stfs f3, 0x15e0(r31)
    stfs f7, 0x4c(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x40(r1)
    bge lbl_fn_8034AE48_000003B0
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_8034AE48_000003A4
    lfs f0, lbl_808853DC
    b lbl_fn_8034AE48_000003A8
lbl_fn_8034AE48_000003A4:
    lfs f0, lbl_808853E0
lbl_fn_8034AE48_000003A8:
    stfs f0, 0x60(r1)
    b lbl_fn_8034AE48_000003C4
lbl_fn_8034AE48_000003B0:
    fmr f2, f5
    lfs f1, 0x38(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x60(r1)
lbl_fn_8034AE48_000003C4:
    lfs f0, 0x60(r1)
    addi r3, r1, 0x1c8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885378
    addi r4, r1, 0x68
    lfs f4, 0x1d0(r1)
    mr r5, r4
    lfs f5, 0x1cc(r1)
    addi r3, r1, 0x188
    lfs f6, 0x1c8(r1)
    lfs f7, 0x1e0(r1)
    lfs f8, 0x1dc(r1)
    lfs f9, 0x1d8(r1)
    lfs f10, 0x1f0(r1)
    lfs f11, 0x1ec(r1)
    lfs f12, 0x1e8(r1)
    lfs f13, 0x1f4(r1)
    lfs f29, 0x1e4(r1)
    lfs f30, 0x1d4(r1)
    lfs f0, lbl_80885398
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x40(r1)
    stfs f3, 0x1b8(r1)
    stfs f3, 0x1bc(r1)
    stfs f3, 0x1c0(r1)
    stfs f0, 0x1c4(r1)
    stfs f6, 0x98(r1)
    stfs f5, 0x9c(r1)
    stfs f4, 0xa0(r1)
    stfs f6, 0x188(r1)
    stfs f5, 0x18c(r1)
    stfs f4, 0x190(r1)
    stfs f9, 0x8c(r1)
    stfs f8, 0x90(r1)
    stfs f7, 0x94(r1)
    stfs f9, 0x198(r1)
    stfs f8, 0x19c(r1)
    stfs f7, 0x1a0(r1)
    stfs f12, 0x80(r1)
    stfs f11, 0x84(r1)
    stfs f10, 0x88(r1)
    stfs f12, 0x1a8(r1)
    stfs f11, 0x1ac(r1)
    stfs f10, 0x1b0(r1)
    stfs f30, 0x74(r1)
    stfs f29, 0x78(r1)
    stfs f13, 0x7c(r1)
    stfs f30, 0x194(r1)
    stfs f29, 0x1a4(r1)
    stfs f13, 0x1b4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F9750
    lfs f2, 0x70(r1)
    lfs f0, lbl_808853D8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8034AE48_000004E0
    lfs f3, 0x6c(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_8034AE48_000004D0
    lfs f0, lbl_808853DC
    b lbl_fn_8034AE48_000004D4
lbl_fn_8034AE48_000004D0:
    lfs f0, lbl_808853E0
lbl_fn_8034AE48_000004D4:
    fneg f0, f0
    stfs f0, 0x5c(r1)
    b lbl_fn_8034AE48_000004F4
lbl_fn_8034AE48_000004E0:
    lfs f1, 0x6c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x5c(r1)
lbl_fn_8034AE48_000004F4:
    lfs f6, lbl_80885378
    addi r4, r1, 0x5c
    lfs f5, 0x138(r1)
    addi r6, r31, 0x15e8
    lfs f4, 0x52c(r31)
    fmr f2, f6
    lfs f3, 0x134(r1)
    addi r5, r1, 0x50
    fsubs f5, f5, f4
    lfs f0, 0x528(r31)
    psq_l f1, 0x0(r4), 0, 0
    fsubs f4, f3, f0
    stfs f2, 0x40(r1)
    frsp f2, f2
    addi r3, r31, 0x15f4
    lfs f3, 0x13c(r1)
    lfs f0, 0x530(r31)
    stfs f4, 0x50(r1)
    mr r4, r3
    fsubs f0, f3, f0
    stfs f2, 0x15f0(r31)
    fmr f2, f0
    stfs f5, 0x54(r1)
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f6, 0x64(r1)
    stfs f0, 0x58(r1)
    stfs f2, 0x15fc(r31)
    stfs f6, 0x15f8(r31)
    bl fn_805F98D0
    lfs f3, lbl_80885378
    addi r5, r31, 0x1600
    psq_l f1, 0x528(r31), 0, 0
    addi r3, r1, 0x268
    lfs f2, 0x530(r31)
    li r4, 0x79
    psq_st f1, 0x0(r5), 0, 0
    lfs f0, lbl_80885444
    stfs f2, 0x1608(r31)
    stfs f3, 0x570(r31)
    stfs f3, 0x140(r1)
    stfs f3, 0x144(r1)
    stfs f0, 0x148(r1)
    lfs f1, 0x15ec(r31)
    bl fn_805F8E70
    addi r4, r1, 0x140
    addi r3, r1, 0x268
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x15dc(r31)
    lfs f0, 0x140(r1)
    lwz r3, 0x14b4(r31)
    fsubs f0, f3, f0
    lfs f4, 0x15e0(r31)
    lfs f3, 0x15e4(r31)
    addi r0, r3, 0x1
    stfs f0, 0x15dc(r31)
    lfs f0, 0x144(r1)
    fsubs f0, f4, f0
    stfs f0, 0x15e0(r31)
    lfs f0, 0x148(r1)
    fsubs f0, f3, f0
    stw r0, 0x14b4(r31)
    stfs f0, 0x15e4(r31)
    b lbl_fn_8034AE48_00000A54
lbl_fn_8034AE48_00000600:
    cmpwi r0, 0x1
    bne lbl_fn_8034AE48_000007EC
    lfs f4, 0x2e4(r3)
    lfs f3, lbl_8088544C
    lfs f0, lbl_80885450
    fsubs f3, f4, f3
    lfs f4, lbl_80885398
    fdivs f0, f3, f0
    fcmpo cr0, f4, f0
    bge lbl_fn_8034AE48_0000062C
    b lbl_fn_8034AE48_00000630
lbl_fn_8034AE48_0000062C:
    fmr f4, f0
lbl_fn_8034AE48_00000630:
    lfs f11, lbl_80885378
    fcmpo cr0, f11, f4
    ble lbl_fn_8034AE48_00000640
    b lbl_fn_8034AE48_00000668
lbl_fn_8034AE48_00000640:
    lfs f4, 0x2e4(r3)
    lfs f3, lbl_8088544C
    lfs f0, lbl_80885450
    fsubs f3, f4, f3
    lfs f11, lbl_80885398
    fdivs f0, f3, f0
    fcmpo cr0, f11, f0
    bge lbl_fn_8034AE48_00000664
    b lbl_fn_8034AE48_00000668
lbl_fn_8034AE48_00000664:
    fmr f11, f0
lbl_fn_8034AE48_00000668:
    lfs f0, 0x15e4(r3)
    addi r4, r1, 0x128
    lfs f5, 0x1608(r3)
    lfs f3, 0x15e0(r3)
    fsubs f10, f0, f5
    lfs f4, 0x1604(r3)
    lfs f0, 0x15dc(r3)
    fsubs f9, f3, f4
    lfs f3, 0x1600(r3)
    fmuls f7, f10, f11
    fsubs f8, f0, f3
    lfs f12, 0x2e4(r3)
    fmuls f6, f9, f11
    fadds f2, f7, f5
    lfs f0, lbl_80885454
    fmuls f5, f8, f11
    fadds f4, f6, f4
    stfs f8, 0x2c(r1)
    fcmpo cr0, f12, f0
    fadds f3, f5, f3
    stfs f4, 0x12c(r1)
    stfs f3, 0x128(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f9, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f5, 0x20(r1)
    stfs f6, 0x24(r1)
    stfs f7, 0x28(r1)
    stfs f2, 0x130(r1)
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
    cror eq, gt, eq
    bne lbl_fn_8034AE48_00000A54
    lwz r3, lbl_8087F048
    bl fn_800F8548
    mr r8, r3
    lwz r7, 0x1534(r31)
    lwz r3, lbl_8087F048
    mr r6, r31
    lfs f1, lbl_80885378
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    lwz r8, lbl_8087F430
    li r0, 0xa
    lfs f3, lbl_80885398
    addi r7, r31, 0x1600
    lwz r5, 0x96c(r8)
    addi r3, r1, 0x158
    lfs f0, lbl_80885378
    li r4, 0x79
    srwi r6, r5, 31
    clrlwi r5, r5, 31
    xor r5, r5, r6
    subf r5, r6, r5
    stw r5, 0x96c(r8)
    stw r0, 0x970(r8)
    stfs f3, 0x974(r8)
    stfs f3, 0x978(r8)
    psq_l f1, 0x528(r31), 0, 0
    lfs f2, 0x530(r31)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x1608(r31)
    stfs f0, 0x110(r1)
    stfs f0, 0x114(r1)
    stfs f3, 0x118(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x110
    addi r3, r1, 0x158
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x118(r1)
    lfs f4, lbl_808853BC
    lfs f3, 0x114(r1)
    lfs f0, 0x110(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0x15e0(r31)
    fmuls f7, f0, f4
    lfs f4, 0x15dc(r31)
    lfs f0, 0x15e4(r31)
    fadds f3, f3, f6
    fadds f4, f4, f7
    lwz r3, 0x14b4(r31)
    fadds f0, f0, f5
    stfs f7, 0x11c(r1)
    addi r0, r3, 0x1
    stfs f6, 0x120(r1)
    stfs f5, 0x124(r1)
    stfs f4, 0x15dc(r31)
    stfs f3, 0x15e0(r31)
    stfs f0, 0x15e4(r31)
    stw r0, 0x14b4(r31)
    b lbl_fn_8034AE48_00000A54
lbl_fn_8034AE48_000007EC:
    cmpwi r0, 0x2
    bne lbl_fn_8034AE48_00000948
    lfs f4, 0x2e4(r3)
    lfs f3, lbl_80885454
    lfs f0, lbl_80885458
    fsubs f3, f4, f3
    lfs f4, lbl_80885398
    fdivs f0, f3, f0
    fcmpo cr0, f4, f0
    bge lbl_fn_8034AE48_00000818
    b lbl_fn_8034AE48_0000081C
lbl_fn_8034AE48_00000818:
    fmr f4, f0
lbl_fn_8034AE48_0000081C:
    lfs f11, lbl_80885378
    fcmpo cr0, f11, f4
    ble lbl_fn_8034AE48_0000082C
    b lbl_fn_8034AE48_00000854
lbl_fn_8034AE48_0000082C:
    lfs f4, 0x2e4(r3)
    lfs f3, lbl_80885454
    lfs f0, lbl_80885458
    fsubs f3, f4, f3
    lfs f11, lbl_80885398
    fdivs f0, f3, f0
    fcmpo cr0, f11, f0
    bge lbl_fn_8034AE48_00000850
    b lbl_fn_8034AE48_00000854
lbl_fn_8034AE48_00000850:
    fmr f11, f0
lbl_fn_8034AE48_00000854:
    lfs f0, 0x15e4(r3)
    addi r4, r1, 0x104
    lfs f5, 0x1608(r3)
    lfs f3, 0x15e0(r3)
    fsubs f10, f0, f5
    lfs f4, 0x1604(r3)
    lfs f0, 0x15dc(r3)
    fsubs f9, f3, f4
    lfs f3, 0x1600(r3)
    fmuls f7, f10, f11
    fsubs f8, f0, f3
    lfs f12, 0x2e4(r3)
    fmuls f6, f9, f11
    fadds f2, f7, f5
    lfs f0, lbl_8088545C
    fmuls f5, f8, f11
    fadds f4, f6, f4
    stfs f8, 0x14(r1)
    fcmpo cr0, f12, f0
    fadds f3, f5, f3
    stfs f4, 0x108(r1)
    stfs f3, 0x104(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f9, 0x18(r1)
    stfs f10, 0x1c(r1)
    stfs f5, 0x8(r1)
    stfs f6, 0xc(r1)
    stfs f7, 0x10(r1)
    stfs f2, 0x10c(r1)
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
    cror eq, gt, eq
    bne lbl_fn_8034AE48_00000A54
    lwz r3, lbl_8087F048
    bl fn_800F8548
    mr r8, r3
    lwz r3, lbl_8087F048
    lwz r7, 0x1538(r31)
    mr r6, r31
    lfs f1, lbl_80885378
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    lwz r5, lbl_8087F430
    li r0, 0xa
    lfs f0, lbl_80885398
    lwz r3, 0x96c(r5)
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    subf r3, r4, r3
    stw r3, 0x96c(r5)
    stw r0, 0x970(r5)
    stfs f0, 0x974(r5)
    stfs f0, 0x978(r5)
    lwz r3, 0x14b4(r31)
    addi r0, r3, 0x1
    stw r0, 0x14b4(r31)
    b lbl_fn_8034AE48_00000A54
lbl_fn_8034AE48_00000948:
    lfs f29, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f29, f1
    cror eq, gt, eq
    bne lbl_fn_8034AE48_00000A54
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
lbl_fn_8034AE48_00000A54:
    lwz r0, 0x2d4(r1)
    psq_l f31, 0x2c8(r1), 0, 0
    lfd f31, 0x2c0(r1)
    psq_l f30, 0x2b8(r1), 0, 0
    lfd f30, 0x2b0(r1)
    psq_l f29, 0x2a8(r1), 0, 0
    lfd f29, 0x2a0(r1)
    lwz r31, 0x29c(r1)
    lwz r30, 0x298(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}

asm void fn_8034B8CC(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stfd f29, 0xd0(r1)
    psq_st f29, 0xd8(r1), 0, 0
    stw r31, 0xcc(r1)
    stw r30, 0xc8(r1)
    mr r30, r3
    lwz r0, 0x14b4(r3)
    lwz r31, lbl_8087F430
    cmpwi r0, 0x0
    bne lbl_fn_8034B8CC_00000C18
    lwz r4, 0x17e4(r3)
    cmpwi r4, 0x0
    bne lbl_fn_8034B8CC_00000BC4
    li r31, 0x0
    stw r31, 0x14b4(r3)
    stw r31, 0x14b8(r3)
    stw r31, 0x14c0(r3)
    stw r31, 0x17e8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r4, r30
    li r5, 0x3ea
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ed
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ef
    li r6, 0x1
    bl fn_80239DAC
    bl fn_80680CF8
    lis r4, 0x8889
    lwz r0, 0x14c0(r30)
    subi r5, r4, 0x7777
    mulhw r5, r5, r3
    li r4, 0x3
    add r5, r5, r3
    srawi r5, r5, 5
    srwi r6, r5, 31
    add r5, r5, r6
    mulli r5, r5, 0x3c
    subf r5, r5, r3
    mr r3, r30
    subfic r5, r5, 0x1e
    add r0, r0, r5
    stw r0, 0x14c0(r30)
    bl fn_8016E970
    lfs f0, lbl_80885398
    li r0, 0x1
    stw r31, 0x58c(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80885378
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x2
    lfs f2, lbl_808853C4
    li r6, 0x1
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    b lbl_fn_8034B8CC_000010D0
lbl_fn_8034B8CC_00000BC4:
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_80885460
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8034B8CC_000010D0
    lwz r0, 0x55c(r4)
    cmpwi r0, 0x6
    bne lbl_fn_8034B8CC_00000BF0
    lwz r0, 0x560(r4)
    cmpwi r0, 0x53
    beq lbl_fn_8034B8CC_00000BFC
lbl_fn_8034B8CC_00000BF0:
    mr r3, r4
    mr r4, r30
    bl fn_8016C7D8
lbl_fn_8034B8CC_00000BFC:
    lwz r3, 0x17e4(r30)
    lwz r3, 0xf80(r3)
    bl fn_80192FB4
    lwz r3, 0x14b4(r30)
    addi r0, r3, 0x1
    stw r0, 0x14b4(r30)
    b lbl_fn_8034B8CC_000010D0
lbl_fn_8034B8CC_00000C18:
    cmpwi r0, 0x1
    bne lbl_fn_8034B8CC_00000F90
    lwz r4, 0x17e4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8034B8CC_00000E24
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8034B8CC_00000E24
    lwz r0, 0x8a0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8034B8CC_00000DB8
    lfs f29, 0x594(r31)
    addi r5, r31, 0x4d8
    lfs f30, 0x59c(r31)
    lfs f31, 0x5a0(r31)
    lfs f13, 0x5a4(r31)
    lfs f12, 0x5a8(r31)
    lfs f11, 0x5ac(r31)
    lfs f10, 0x5b0(r31)
    lfs f9, 0x5b4(r31)
    lfs f8, 0x5b8(r31)
    lfs f7, 0x5bc(r31)
    lwz r4, 0x5c0(r31)
    lfs f6, lbl_80885464
    stw r3, 0x8a0(r31)
    lfs f5, lbl_80885468
    lwz r0, 0x4d8(r31)
    lfs f0, lbl_808853AC
    lfs f4, lbl_808853BC
    cmpwi r0, 0x4
    stfs f29, 0x8c(r1)
    stfs f30, 0x94(r1)
    stfs f31, 0x98(r1)
    stfs f13, 0x9c(r1)
    stfs f12, 0xa0(r1)
    stfs f11, 0xa4(r1)
    stfs f10, 0xa8(r1)
    stfs f9, 0xac(r1)
    stfs f8, 0xb0(r1)
    stfs f7, 0xb4(r1)
    stw r4, 0xb8(r1)
    stfs f6, 0x88(r1)
    stfs f5, 0x84(r1)
    stfs f0, 0x80(r1)
    stfs f4, 0x90(r1)
    beq lbl_fn_8034B8CC_00000D24
    li r0, 0x4
    stw r0, 0x0(r5)
    lfs f3, lbl_8088546C
    stfs f0, 0xc(r5)
    lfs f0, lbl_80885398
    stfs f5, 0x10(r5)
    stfs f6, 0x14(r5)
    stfs f29, 0x18(r5)
    stfs f4, 0x1c(r5)
    stfs f30, 0x20(r5)
    stfs f31, 0x24(r5)
    stfs f13, 0x28(r5)
    stfs f12, 0x2c(r5)
    stfs f11, 0x30(r5)
    stfs f10, 0x34(r5)
    stfs f9, 0x38(r5)
    stfs f8, 0x3c(r5)
    stfs f7, 0x40(r5)
    stw r4, 0x44(r5)
    stfs f3, 0x8(r5)
    stfs f0, 0x4(r5)
lbl_fn_8034B8CC_00000D24:
    lis r4, lbl_8074AA58@ha
    li r5, 0x0
    addi r4, r4, lbl_8074AA58@l
    addi r3, r3, 0xb0
    addi r4, r4, 0x3e5
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8034B8CC_00000D4C
    li r3, 0x0
    b lbl_fn_8034B8CC_00000D58
lbl_fn_8034B8CC_00000D4C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_8034B8CC_00000D58:
    lfs f2, 0x2c(r3)
    addi r4, r1, 0x40
    lfs f0, 0x1c(r3)
    li r0, 0x1
    lfs f3, 0xc(r3)
    addi r5, r31, 0x97c
    lbz r3, 0x97c(r31)
    stb r3, 0x97d(r31)
    lfs f4, lbl_80885378
    stfs f3, 0x40(r1)
    stfs f0, 0x44(r1)
    stb r0, 0x97c(r31)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0xc(r5), 0, 0
    stfs f2, 0x990(r31)
    stfs f2, 0x48(r1)
    stfs f4, 0x9a0(r31)
    b lbl_fn_8034B8CC_00000DA4
    b lbl_fn_8034B8CC_00000DA8
lbl_fn_8034B8CC_00000DA4:
    li r0, 0x0
lbl_fn_8034B8CC_00000DA8:
    stw r0, 0x4(r5)
    li r0, 0x1
    stb r0, 0x180b(r30)
    b lbl_fn_8034B8CC_00000E24
lbl_fn_8034B8CC_00000DB8:
    lis r4, lbl_8074AA58@ha
    stw r3, 0x8a0(r31)
    addi r4, r4, lbl_8074AA58@l
    li r5, 0x0
    addi r4, r4, 0x3e5
    addi r3, r3, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8034B8CC_00000DE4
    li r5, 0x0
    b lbl_fn_8034B8CC_00000DF0
lbl_fn_8034B8CC_00000DE4:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r5, r3, r0
lbl_fn_8034B8CC_00000DF0:
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x28
    lfs f3, 0xc(r5)
    addi r3, r31, 0x988
    lfs f2, 0x2c(r5)
    li r0, 0x1
    stfs f3, 0x28(r1)
    stfs f0, 0x2c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x990(r31)
    stfs f2, 0x30(r1)
    stb r0, 0x180b(r30)
lbl_fn_8034B8CC_00000E24:
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_808853F8
    fcmpo cr0, f3, f0
    bge lbl_fn_8034B8CC_00000E3C
    lfs f0, lbl_8088539C
    b lbl_fn_8034B8CC_00000E40
lbl_fn_8034B8CC_00000E3C:
    lfs f0, lbl_80885398
lbl_fn_8034B8CC_00000E40:
    stfs f0, 0x2e8(r30)
    frsp f1, f0
    addi r4, r30, 0x16a8
    li r5, 0x0
    lwz r3, lbl_8087F3C0
    bl fn_8023A254
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_80885470
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8034B8CC_000010D0
    lwz r5, lbl_8087F430
    li r0, 0xa
    lfs f3, lbl_80885474
    lwz r3, 0x96c(r5)
    lfs f0, lbl_808853CC
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    subf r3, r4, r3
    stw r3, 0x96c(r5)
    stw r0, 0x970(r5)
    stfs f3, 0x974(r5)
    stfs f0, 0x978(r5)
    lwz r0, 0x17e4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8034B8CC_00000F80
    lbz r0, 0x17ec(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8034B8CC_00000F80
    lfs f3, lbl_80885378
    addi r3, r1, 0x50
    lfs f0, lbl_80885398
    li r4, 0x79
    stfs f3, 0x10(r1)
    stfs f3, 0x14(r1)
    stfs f0, 0x18(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x10
    addi r3, r1, 0x50
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x18(r1)
    lfs f5, lbl_8088539C
    lfs f3, 0x14(r1)
    fmuls f6, f4, f5
    lwz r3, 0x17e4(r30)
    fmuls f7, f3, f5
    lfs f0, 0x10(r1)
    lfs f4, 0x530(r3)
    fmuls f5, f0, f5
    lfs f3, 0x52c(r3)
    fsubs f4, f4, f6
    lfs f0, 0x528(r3)
    fsubs f3, f3, f7
    lwz r31, lbl_8087F048
    fsubs f0, f0, f5
    stfs f5, 0x1c(r1)
    mr r3, r31
    stfs f7, 0x20(r1)
    stfs f6, 0x24(r1)
    stfs f0, 0x34(r1)
    stfs f3, 0x38(r1)
    stfs f4, 0x3c(r1)
    bl fn_800F8548
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r6, r3
    lfs f1, lbl_80885378
    stw r0, 0xc(r1)
    mr r3, r31
    lfs f2, lbl_80885398
    mr r4, r30
    lwz r5, 0x154c(r30)
    addi r7, r1, 0x34
    addi r8, r30, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_8034B8CC_00000F80:
    lwz r3, 0x14b4(r30)
    addi r0, r3, 0x1
    stw r0, 0x14b4(r30)
    b lbl_fn_8034B8CC_000010D0
lbl_fn_8034B8CC_00000F90:
    lbz r0, 0x180b(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8034B8CC_00000FB0
    li r0, 0x0
    stw r0, 0x8a0(r31)
    stw r0, 0x4d8(r31)
    stb r0, 0x97c(r31)
    stb r0, 0x180b(r3)
lbl_fn_8034B8CC_00000FB0:
    lfs f29, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f29, f1
    cror eq, gt, eq
    bne lbl_fn_8034B8CC_000010D0
    li r31, 0x0
    stw r31, 0x14b4(r30)
    stw r31, 0x14b8(r30)
    stw r31, 0x14c0(r30)
    stw r31, 0x17e8(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r4, r30
    li r5, 0x3ea
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ed
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ef
    li r6, 0x1
    bl fn_80239DAC
    bl fn_80680CF8
    lis r4, 0x8889
    lwz r0, 0x14c0(r30)
    subi r5, r4, 0x7777
    mulhw r5, r5, r3
    li r4, 0x3
    add r5, r5, r3
    srawi r5, r5, 5
    srwi r6, r5, 31
    add r5, r5, r6
    mulli r5, r5, 0x3c
    subf r5, r5, r3
    mr r3, r30
    subfic r5, r5, 0x1e
    add r0, r0, r5
    stw r0, 0x14c0(r30)
    bl fn_8016E970
    lfs f0, lbl_80885398
    li r0, 0x1
    stw r31, 0x58c(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80885378
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x2
    lfs f2, lbl_808853C4
    li r6, 0x1
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r3, 0x17e4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8034B8CC_000010D0
    bl fn_8015ECC4
    stw r31, 0x17e4(r30)
lbl_fn_8034B8CC_000010D0:
    lwz r0, 0x14b4(r30)
    cmpwi r0, 0x2
    bge lbl_fn_8034B8CC_000011E8
    lwz r3, 0x1cd4(r30)
    lwz r0, 0x17e8(r30)
    cmpw r3, r0
    bgt lbl_fn_8034B8CC_000011E8
    li r31, 0x0
    stw r31, 0x14b4(r30)
    stw r31, 0x14b8(r30)
    stw r31, 0x14c0(r30)
    stw r31, 0x17e8(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r4, r30
    li r5, 0x3ea
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ed
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ef
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80885398
    li r3, 0xe
    li r0, 0x1
    stw r3, 0x58c(r30)
    lfs f1, lbl_80885378
    addi r3, r30, 0xb0
    stw r0, 0x3fc(r30)
    li r4, 0x0
    lfs f2, lbl_808853C4
    li r5, 0x33
    stfs f0, 0x2fc(r30)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lbz r0, 0x180b(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8034B8CC_000011C8
    lwz r3, lbl_8087F430
    stw r31, 0x8a0(r3)
    stw r31, 0x4d8(r3)
    stb r31, 0x97c(r3)
    stb r31, 0x180b(r30)
lbl_fn_8034B8CC_000011C8:
    lwz r3, 0x17e4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8034B8CC_000011E0
    bl fn_8015ECC4
    li r0, 0x0
    stw r0, 0x17e4(r30)
lbl_fn_8034B8CC_000011E0:
    li r0, 0x0
    stw r0, 0x17e8(r30)
lbl_fn_8034B8CC_000011E8:
    lwz r0, 0x104(r1)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    psq_l f29, 0xd8(r1), 0, 0
    lfd f29, 0xd0(r1)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_8034C060(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x144(r1)
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stfd f29, 0x110(r1)
    psq_st f29, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    mr r31, r3
    stw r30, 0x108(r1)
    beq lbl_fn_8034C060_00001294
    lfs f4, 0x15e4(r3)
    lfs f0, 0x530(r3)
    lfs f3, 0x15dc(r3)
    fsubs f5, f4, f0
    lfs f0, 0x528(r3)
    lfs f4, 0x15e0(r3)
    fsubs f6, f3, f0
    lfs f3, 0x52c(r3)
    fmuls f0, f5, f5
    fsubs f3, f4, f3
    stfs f6, 0x74(r1)
    fmadds f1, f6, f6, f0
    stfs f3, 0x78(r1)
    stfs f5, 0x7c(r1)
    bl fn_8068B100
    frsp f1, f1
    b lbl_fn_8034C060_000012CC
lbl_fn_8034C060_00001294:
    lfs f3, 0x15e4(r3)
    lfs f0, 0x530(r3)
    lfs f5, 0x15e0(r3)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x15dc(r3)
    lfs f0, 0x528(r3)
    fsubs f4, f5, f4
    addi r3, r1, 0x68
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    stfs f6, 0x70(r1)
    bl fn_805F9940
lbl_fn_8034C060_000012CC:
    lfs f31, lbl_808853BC
    fcmpo cr0, f31, f1
    bge lbl_fn_8034C060_000012DC
    b lbl_fn_8034C060_000012E0
lbl_fn_8034C060_000012DC:
    fmr f31, f1
lbl_fn_8034C060_000012E0:
    lwz r0, 0x2dc(r31)
    cmpwi r0, 0x13f
    bne lbl_fn_8034C060_00001394
    lfs f0, lbl_80885438
    addi r3, r31, 0xb0
    stfs f0, 0x2e8(r31)
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_808853CC
    li r0, 0x0
    lfs f3, 0x2e4(r31)
    fsubs f0, f1, f0
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8034C060_00001320
    li r0, 0x1
lbl_fn_8034C060_00001320:
    cmpwi r0, 0x0
    beq lbl_fn_8034C060_0000134C
    lfs f1, lbl_80885378
    addi r3, r31, 0xb0
    lfs f2, lbl_808853C4
    li r4, 0x0
    li r5, 0x140
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_8034C060_0000134C:
    lfs f3, 0x2e4(r31)
    li r0, 0x0
    lfs f0, lbl_8088542C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8034C060_00001368
    li r0, 0x1
lbl_fn_8034C060_00001368:
    cmpwi r0, 0x0
    beq lbl_fn_8034C060_0000159C
    lfs f3, lbl_8088539C
    lfs f0, 0x570(r31)
    fadds f0, f3, f0
    fcmpo cr0, f31, f0
    bge lbl_fn_8034C060_00001388
    b lbl_fn_8034C060_0000138C
lbl_fn_8034C060_00001388:
    fmr f31, f0
lbl_fn_8034C060_0000138C:
    stfs f31, 0x570(r31)
    b lbl_fn_8034C060_0000159C
lbl_fn_8034C060_00001394:
    cmpwi r0, 0x140
    bne lbl_fn_8034C060_000013F8
    lfs f0, lbl_808853B0
    lfs f3, lbl_80885398
    fcmpo cr0, f1, f0
    stfs f3, 0x2e8(r31)
    bge lbl_fn_8034C060_000013D4
    lfs f1, lbl_80885378
    addi r3, r31, 0xb0
    lfs f2, lbl_808853C4
    li r4, 0x0
    li r5, 0x141
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_8034C060_000013D4:
    lfs f3, lbl_8088539C
    lfs f0, 0x570(r31)
    fadds f0, f3, f0
    fcmpo cr0, f31, f0
    bge lbl_fn_8034C060_000013EC
    b lbl_fn_8034C060_000013F0
lbl_fn_8034C060_000013EC:
    fmr f31, f0
lbl_fn_8034C060_000013F0:
    stfs f31, 0x570(r31)
    b lbl_fn_8034C060_0000159C
lbl_fn_8034C060_000013F8:
    cmpwi r0, 0x141
    bne lbl_fn_8034C060_0000159C
    lfs f0, lbl_80885478
    lfs f7, lbl_80885438
    fmuls f0, f0, f1
    lfs f6, 0x15e4(r31)
    lfs f5, 0x530(r31)
    lfs f4, 0x15dc(r31)
    lfs f3, 0x528(r31)
    fsubs f5, f6, f5
    stfs f7, 0x2e8(r31)
    fcmpo cr0, f31, f0
    fsubs f4, f4, f3
    lfs f3, lbl_80885378
    stfs f5, 0x94(r1)
    stfs f4, 0x8c(r1)
    stfs f3, 0x90(r1)
    bge lbl_fn_8034C060_00001444
    b lbl_fn_8034C060_00001448
lbl_fn_8034C060_00001444:
    fmr f31, f0
lbl_fn_8034C060_00001448:
    addi r3, r1, 0x8c
    stfs f31, 0x570(r31)
    mr r4, r3
    bl fn_805F98D0
    addi r3, r1, 0x8c
    addi r4, r31, 0x15f4
    bl fn_805F9990
    lfs f0, lbl_80885378
    fcmpo cr0, f1, f0
    bge lbl_fn_8034C060_00001474
    stfs f0, 0x570(r31)
lbl_fn_8034C060_00001474:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_8088537C
    li r0, 0x0
    lfs f3, 0x2e4(r31)
    fsubs f0, f1, f0
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8034C060_000014A0
    li r0, 0x1
lbl_fn_8034C060_000014A0:
    cmpwi r0, 0x0
    beq lbl_fn_8034C060_0000159C
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
    b lbl_fn_8034C060_0000189C
lbl_fn_8034C060_0000159C:
    lfs f3, 0x570(r31)
    lfs f0, lbl_8088539C
    fcmpo cr0, f3, f0
    ble lbl_fn_8034C060_00001850
    lwz r4, 0x14b0(r31)
    addi r3, r1, 0x14
    lfs f0, 0x530(r31)
    addi r30, r1, 0x8
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r31)
    fsubs f5, f5, f4
    lfs f31, lbl_80885398
    fsubs f4, f3, f0
    stfs f5, 0x18(r1)
    frsp f3, f2
    lfs f0, lbl_808853D8
    stfs f4, 0x14(r1)
    fabs f4, f3
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x1c(r1)
    frsp f4, f4
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x10(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_8034C060_00001634
    lfs f3, 0x8(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_8034C060_00001628
    lfs f0, lbl_808853DC
    b lbl_fn_8034C060_0000162C
lbl_fn_8034C060_00001628:
    lfs f0, lbl_808853E0
lbl_fn_8034C060_0000162C:
    stfs f0, 0x24(r1)
    b lbl_fn_8034C060_00001648
lbl_fn_8034C060_00001634:
    fmr f2, f3
    lfs f1, 0x8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x24(r1)
lbl_fn_8034C060_00001648:
    lfs f0, 0x24(r1)
    addi r3, r1, 0xd8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885378
    addi r4, r1, 0x2c
    lfs f4, 0xe0(r1)
    mr r5, r4
    lfs f5, 0xdc(r1)
    addi r3, r1, 0x98
    lfs f6, 0xd8(r1)
    lfs f7, 0xf0(r1)
    lfs f8, 0xec(r1)
    lfs f9, 0xe8(r1)
    lfs f10, 0x100(r1)
    lfs f11, 0xfc(r1)
    lfs f12, 0xf8(r1)
    lfs f13, 0x104(r1)
    lfs f30, 0xf4(r1)
    lfs f29, 0xe4(r1)
    lfs f0, lbl_80885398
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x10(r1)
    stfs f3, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f6, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f4, 0x64(r1)
    stfs f6, 0x98(r1)
    stfs f5, 0x9c(r1)
    stfs f4, 0xa0(r1)
    stfs f9, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f7, 0x58(r1)
    stfs f9, 0xa8(r1)
    stfs f8, 0xac(r1)
    stfs f7, 0xb0(r1)
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f10, 0x4c(r1)
    stfs f12, 0xb8(r1)
    stfs f11, 0xbc(r1)
    stfs f10, 0xc0(r1)
    stfs f29, 0x38(r1)
    stfs f30, 0x3c(r1)
    stfs f13, 0x40(r1)
    stfs f29, 0xa4(r1)
    stfs f30, 0xb4(r1)
    stfs f13, 0xc4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F9750
    lfs f2, 0x34(r1)
    lfs f0, lbl_808853D8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8034C060_00001764
    lfs f3, 0x30(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_8034C060_00001754
    lfs f0, lbl_808853DC
    b lbl_fn_8034C060_00001758
lbl_fn_8034C060_00001754:
    lfs f0, lbl_808853E0
lbl_fn_8034C060_00001758:
    fneg f0, f0
    stfs f0, 0x20(r1)
    b lbl_fn_8034C060_00001778
lbl_fn_8034C060_00001764:
    lfs f1, 0x30(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x20(r1)
lbl_fn_8034C060_00001778:
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
    ble lbl_fn_8034C060_000017C4
    lfs f0, lbl_808853B8
    fsubs f5, f5, f0
lbl_fn_8034C060_000017C4:
    lfs f0, lbl_808853E8
    fcmpo cr0, f5, f0
    bge lbl_fn_8034C060_000017D8
    lfs f0, lbl_808853B8
    fadds f5, f5, f0
lbl_fn_8034C060_000017D8:
    lfs f3, lbl_808853EC
    lfs f0, lbl_80885378
    fmuls f3, f3, f31
    fcmpo cr0, f5, f0
    bge lbl_fn_8034C060_000017F4
    fneg f4, f5
    b lbl_fn_8034C060_000017F8
lbl_fn_8034C060_000017F4:
    fmr f4, f5
lbl_fn_8034C060_000017F8:
    lfs f0, lbl_808853F0
    fmuls f3, f0, f3
    fcmpo cr0, f4, f3
    cror eq, lt, eq
    bne lbl_fn_8034C060_00001824
    lfs f1, lbl_80885378
    addi r3, r31, 0xb0
    li r4, 0x1
    bl fn_80097CCC
    stfs f29, 0x538(r31)
    b lbl_fn_8034C060_00001850
lbl_fn_8034C060_00001824:
    lfs f0, lbl_80885378
    fcmpo cr0, f5, f0
    cror eq, lt, eq
    bne lbl_fn_8034C060_00001844
    lfs f0, 0x538(r31)
    fsubs f0, f0, f3
    stfs f0, 0x538(r31)
    b lbl_fn_8034C060_00001850
lbl_fn_8034C060_00001844:
    lfs f0, 0x538(r31)
    fadds f0, f0, f3
    stfs f0, 0x538(r31)
lbl_fn_8034C060_00001850:
    lfs f5, 0x570(r31)
    lfs f4, 0x15fc(r31)
    lfs f3, 0x15f8(r31)
    fmuls f6, f4, f5
    lfs f0, 0x15f4(r31)
    fmuls f7, f3, f5
    lfs f3, 0x52c(r31)
    fmuls f5, f0, f5
    lfs f4, 0x528(r31)
    lfs f0, 0x530(r31)
    fadds f3, f3, f7
    fadds f4, f4, f5
    stfs f5, 0x80(r1)
    fadds f0, f0, f6
    stfs f7, 0x84(r1)
    stfs f6, 0x88(r1)
    stfs f4, 0x528(r31)
    stfs f3, 0x52c(r31)
    stfs f0, 0x530(r31)
lbl_fn_8034C060_0000189C:
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

asm void fn_8034C714(void)
{
    nofralloc
    stwu r1, -0x320(r1)
    mflr r0
    stw r0, 0x324(r1)
    addi r11, r1, 0x260
    stfd f31, 0x310(r1)
    psq_st f31, 0x318(r1), 0, 0
    stfd f30, 0x300(r1)
    psq_st f30, 0x308(r1), 0, 0
    stfd f29, 0x2f0(r1)
    psq_st f29, 0x2f8(r1), 0, 0
    stfd f28, 0x2e0(r1)
    psq_st f28, 0x2e8(r1), 0, 0
    stfd f27, 0x2d0(r1)
    psq_st f27, 0x2d8(r1), 0, 0
    stfd f26, 0x2c0(r1)
    psq_st f26, 0x2c8(r1), 0, 0
    stfd f25, 0x2b0(r1)
    psq_st f25, 0x2b8(r1), 0, 0
    stfd f24, 0x2a0(r1)
    psq_st f24, 0x2a8(r1), 0, 0
    stfd f23, 0x290(r1)
    psq_st f23, 0x298(r1), 0, 0
    stfd f22, 0x280(r1)
    psq_st f22, 0x288(r1), 0, 0
    stfd f21, 0x270(r1)
    psq_st f21, 0x278(r1), 0, 0
    stfd f20, 0x260(r1)
    psq_st f20, 0x268(r1), 0, 0
    bl _savegpr_27
    lwz r4, 0x14b4(r3)
    lis r0, 0x4330
    stw r0, 0x238(r1)
    mr r31, r3
    cmpwi r4, 0x0
    stw r0, 0x240(r1)
    bne lbl_fn_8034C714_00001B70
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    lfs f7, lbl_8088547C
    mr r3, r31
    lfs f0, 0x52c(r31)
    li r4, 0x1
    fdivs f7, f7, f1
    fadds f0, f0, f7
    stfs f0, 0x52c(r31)
    bl fn_8034C060
    lwz r0, 0x2dc(r31)
    cmpwi r0, 0x141
    bne lbl_fn_8034C714_00002088
    lwz r5, 0x14b4(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80885378
    li r4, 0x0
    addi r0, r5, 0x1
    stw r0, 0x14b4(r31)
    lfs f2, lbl_808853C4
    li r5, 0x14d
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f7, lbl_80885378
    addi r3, r1, 0x1a8
    lfs f0, lbl_80885398
    li r4, 0x79
    stfs f7, 0x70(r1)
    stfs f7, 0x74(r1)
    stfs f0, 0x78(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x70
    addi r3, r1, 0x1a8
    mr r5, r4
    bl fn_805F93C0
    lfs f8, lbl_80885420
    addi r3, r1, 0x208
    lfs f0, 0x74(r1)
    lfs f9, 0x78(r1)
    fmuls f10, f0, f8
    lfs f7, 0x70(r1)
    lfs f0, 0x52c(r31)
    fmuls f9, f9, f8
    fmuls f11, f7, f8
    lfs f8, 0x530(r31)
    fadds f12, f0, f10
    lfs f7, 0x528(r31)
    lfs f0, lbl_80885454
    fadds f3, f8, f9
    fadds f1, f7, f11
    stfs f11, 0x7c(r1)
    fadds f2, f12, f0
    stfs f10, 0x80(r1)
    stfs f9, 0x84(r1)
    stfs f1, 0xac(r1)
    stfs f3, 0xb4(r1)
    stfs f2, 0xb0(r1)
    bl fn_805F90D0
    addi r4, r1, 0x208
    lfs f0, lbl_808853C4
    psq_l f2, 0x8(r4), 0, 0
    addi r30, r31, 0x1660
    psq_l f3, 0x10(r4), 0, 0
    addi r3, r1, 0x148
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    fmr f1, f0
    psq_st f2, 0x8(r30), 0, 0
    fmr f2, f1
    psq_st f3, 0x10(r30), 0, 0
    fmr f3, f1
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    bl fn_805F9160
    mr r3, r30
    addi r4, r1, 0x148
    addi r5, r1, 0x178
    bl fn_805F89F0
    addi r5, r1, 0x178
    mr r3, r31
    psq_l f1, 0x0(r5), 0, 0
    li r4, 0x3ef
    psq_l f2, 0x8(r5), 0, 0
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    bl fn_80232B7C
    li r0, 0x0
    stw r0, 0x8(r1)
    li r3, -0x1
    lfs f1, lbl_80885398
    stw r3, 0xc(r1)
    li r0, 0x1
    addi r4, r31, 0x17d8
    mr r7, r30
    stw r0, 0x10(r1)
    li r5, -0x1
    li r6, 0x5
    li r8, 0x0
    lwz r3, lbl_8087F3C0
    li r9, 0x0
    li r10, 0x0
    bl fn_8023A680
    lis r4, lbl_8074AA58@ha
    lfs f1, lbl_80885398
    addi r4, r4, lbl_8074AA58@l
    addi r3, r1, 0x18
    addi r4, r4, 0x3ee
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8034C714_00002088
lbl_fn_8034C714_00001B70:
    cmpwi r4, 0x1
    bne lbl_fn_8034C714_00001ED0
    lfs f7, lbl_80885378
    li r4, 0x79
    lfs f0, lbl_80885398
    stfs f7, 0x58(r1)
    stfs f7, 0x5c(r1)
    stfs f0, 0x60(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x118
    bl fn_805F8E70
    addi r4, r1, 0x58
    addi r3, r1, 0x118
    mr r5, r4
    bl fn_805F93C0
    lfs f12, lbl_80885420
    lfs f22, 0x2e4(r31)
    lfs f8, 0x5c(r1)
    fdivs f21, f22, f12
    lfs f13, 0x60(r1)
    lfs f11, 0x58(r1)
    lfs f9, 0x52c(r31)
    lfs f0, lbl_8087DCA4
    lfs f7, lbl_8087DCA0
    fmuls f20, f8, f12
    lfs f10, 0x530(r31)
    fmuls f13, f13, f12
    lfs f8, 0x528(r31)
    fmuls f11, f11, f12
    lfs f23, lbl_80885454
    fadds f9, f9, f20
    stfs f11, 0x64(r1)
    fadds f10, f10, f13
    fadds f11, f8, f11
    stfs f20, 0x68(r1)
    fsubs f0, f0, f7
    fadds f9, f9, f23
    stfs f13, 0x6c(r1)
    fcmpo cr0, f22, f12
    fmadds f20, f21, f0, f7
    stfs f11, 0xa0(r1)
    stfs f10, 0xa8(r1)
    stfs f9, 0xa4(r1)
    cror eq, gt, eq
    bne lbl_fn_8034C714_00001E1C
    fsubs f8, f22, f12
    lwz r4, lbl_8087F8A0
    lis r3, lbl_8074A8D8@ha
    lfs f0, lbl_8087DCAC
    lfs f7, lbl_8087DCA8
    frsp f28, f10
    fdivs f8, f8, f12
    lwz r28, 0x48(r4)
    lfd f24, lbl_8074A8D8@l(r3)
    addi r30, r1, 0x94
    lfs f25, lbl_80885484
    lfs f26, lbl_80885440
    fsubs f0, f0, f7
    lfs f27, lbl_80885480
    frsp f29, f9
    lfs f31, lbl_80885488
    frsp f30, f11
    fmadds f20, f8, f0, f7
    b lbl_fn_8034C714_00001DE0
lbl_fn_8034C714_00001C70:
    li r27, 0x0
lbl_fn_8034C714_00001C74:
    psq_l f1, 0x528(r28), 0, 0
    lfs f2, 0x530(r28)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x9c(r1)
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0x23c(r1)
    lfd f0, 0x238(r1)
    fsubs f0, f0, f24
    fdivs f0, f0, f25
    fmadds f22, f26, f0, f27
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0x244(r1)
    lfd f0, 0x240(r1)
    fsubs f0, f0, f24
    fdivs f0, f0, f25
    fmadds f21, f26, f0, f27
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0x23c(r1)
    lfs f0, 0x98(r1)
    addi r3, r1, 0x88
    lfd f8, 0x238(r1)
    mr r4, r3
    fadds f7, f0, f21
    lfs f0, 0x9c(r1)
    fsubs f9, f8, f24
    lfs f8, 0x94(r1)
    fadds f0, f0, f22
    stfs f7, 0x98(r1)
    fdivs f9, f9, f25
    stfs f0, 0x9c(r1)
    stfs f21, 0x50(r1)
    stfs f22, 0x54(r1)
    fmadds f10, f26, f9, f27
    fsubs f9, f0, f28
    fsubs f7, f7, f29
    stfs f10, 0x4c(r1)
    fadds f0, f8, f10
    stfs f7, 0x8c(r1)
    fsubs f7, f0, f30
    stfs f0, 0x94(r1)
    stfs f7, 0x88(r1)
    stfs f9, 0x90(r1)
    bl fn_805F98D0
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0x244(r1)
    lfs f8, 0x90(r1)
    lfd f0, 0x240(r1)
    lfs f7, 0x8c(r1)
    fsubs f9, f0, f24
    lfs f0, 0x88(r1)
    lwz r29, lbl_8087F048
    fdivs f9, f9, f25
    fmadds f9, f23, f9, f31
    fmuls f8, f8, f9
    fmuls f7, f7, f9
    fmuls f0, f0, f9
    stfs f8, 0x3c(r1)
    fadds f8, f28, f8
    fadds f9, f29, f7
    stfs f0, 0x34(r1)
    fadds f0, f30, f0
    stfs f7, 0x38(r1)
    stfs f0, 0x40(r1)
    stfs f9, 0x44(r1)
    stfs f8, 0x48(r1)
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    lfs f1, lbl_80885378
    subf r0, r4, r0
    lfs f2, lbl_80885398
    slwi r0, r0, 2
    mr r3, r29
    add r5, r31, r0
    mr r4, r31
    lwz r5, 0x1554(r5)
    addi r6, r1, 0x40
    addi r7, r1, 0x88
    li r8, 0x0
    lis r9, 0x100
    li r10, 0x0
    bl fn_800F8574
    addi r27, r27, 0x1
    cmpwi r27, 0x4
    blt lbl_fn_8034C714_00001C74
    lwz r28, 0x14ac(r28)
lbl_fn_8034C714_00001DE0:
    cmpwi r28, 0x0
    bne lbl_fn_8034C714_00001C70
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_8088548C
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_8034C714_00001E1C
    lwz r3, 0x14b4(r31)
    mr r4, r31
    li r5, 0x3ef
    li r6, 0x0
    addi r0, r3, 0x1
    stw r0, 0x14b4(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
lbl_fn_8034C714_00001E1C:
    lfs f1, 0xa0(r1)
    addi r3, r1, 0x1d8
    lfs f2, 0xa4(r1)
    lfs f3, 0xa8(r1)
    bl fn_805F90D0
    addi r4, r1, 0x1d8
    addi r30, r31, 0x1660
    psq_l f2, 0x8(r4), 0, 0
    addi r3, r1, 0xb8
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f1, f20
    psq_st f2, 0x8(r30), 0, 0
    fmr f2, f1
    psq_st f3, 0x10(r30), 0, 0
    fmr f3, f1
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    stfs f20, 0x1c(r1)
    stfs f20, 0x20(r1)
    stfs f20, 0x24(r1)
    bl fn_805F9160
    mr r3, r30
    addi r4, r1, 0xb8
    addi r5, r1, 0xe8
    bl fn_805F89F0
    addi r3, r1, 0xe8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    b lbl_fn_8034C714_00002088
lbl_fn_8034C714_00001ED0:
    cmpwi r4, 0x2
    bne lbl_fn_8034C714_00001F44
    lfs f20, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    lfs f0, lbl_80885398
    fsubs f0, f1, f0
    fcmpo cr0, f20, f0
    cror eq, gt, eq
    bne lbl_fn_8034C714_00002088
    lwz r3, 0x14b4(r31)
    mr r4, r31
    li r5, 0x3ef
    li r6, 0x0
    addi r0, r3, 0x1
    stw r0, 0x14b4(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lfs f1, lbl_80885378
    addi r3, r31, 0xb0
    lfs f2, lbl_808853C4
    li r4, 0x0
    li r5, 0x141
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_8034C714_00002088
lbl_fn_8034C714_00001F44:
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    lfs f0, lbl_8088547C
    lfs f7, 0x52c(r31)
    fdivs f8, f0, f1
    lfs f0, lbl_80885378
    fsubs f7, f7, f8
    stfs f7, 0x52c(r31)
    fcmpo cr0, f7, f0
    bge lbl_fn_8034C714_00001F74
    stfs f0, 0x52c(r31)
lbl_fn_8034C714_00001F74:
    lfs f20, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f20, f1
    cror eq, gt, eq
    bne lbl_fn_8034C714_00002088
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
    lfs f0, lbl_80885378
    stfs f0, 0x52c(r31)
lbl_fn_8034C714_00002088:
    addi r11, r1, 0x260
    psq_l f31, 0x318(r1), 0, 0
    lfd f31, 0x310(r1)
    psq_l f30, 0x308(r1), 0, 0
    lfd f30, 0x300(r1)
    psq_l f29, 0x2f8(r1), 0, 0
    lfd f29, 0x2f0(r1)
    psq_l f28, 0x2e8(r1), 0, 0
    lfd f28, 0x2e0(r1)
    psq_l f27, 0x2d8(r1), 0, 0
    lfd f27, 0x2d0(r1)
    psq_l f26, 0x2c8(r1), 0, 0
    lfd f26, 0x2c0(r1)
    psq_l f25, 0x2b8(r1), 0, 0
    lfd f25, 0x2b0(r1)
    psq_l f24, 0x2a8(r1), 0, 0
    lfd f24, 0x2a0(r1)
    psq_l f23, 0x298(r1), 0, 0
    lfd f23, 0x290(r1)
    psq_l f22, 0x288(r1), 0, 0
    lfd f22, 0x280(r1)
    psq_l f21, 0x278(r1), 0, 0
    lfd f21, 0x270(r1)
    psq_l f20, 0x268(r1), 0, 0
    lfd f20, 0x260(r1)
    bl _restgpr_27
    lwz r0, 0x324(r1)
    mtlr r0
    addi r1, r1, 0x320
    blr
}
