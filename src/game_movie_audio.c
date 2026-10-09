#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_8016E970(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_8033E8D4(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F9160(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_80680CF8(void);

/* External data declarations */
extern u8 lbl_8074A490[];

/* Small data declarations */
extern u32 lbl_8087DC68;
extern u32 lbl_8087DC6C;
extern u32 lbl_8087DC70;
extern u32 lbl_8087DC74;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885238;
extern u32 lbl_80885260;
extern u32 lbl_80885284;
extern u32 lbl_808852B8;
extern u32 lbl_808852C0;
extern u32 lbl_80885304;
extern u32 lbl_8088530C;
extern u32 lbl_80885310;
extern u32 lbl_80885314;
extern u32 lbl_80885318;
extern u32 lbl_8088531C;

/* Function declarations */
void fn_8033F7FC(void);

asm void fn_8033F7FC(void)
{
    nofralloc
    stwu r1, -0x410(r1)
    mflr r0
    stw r0, 0x414(r1)
    addi r11, r1, 0x350
    stfd f31, 0x400(r1)
    psq_st f31, 0x408(r1), 0, 0
    stfd f30, 0x3f0(r1)
    psq_st f30, 0x3f8(r1), 0, 0
    stfd f29, 0x3e0(r1)
    psq_st f29, 0x3e8(r1), 0, 0
    stfd f28, 0x3d0(r1)
    psq_st f28, 0x3d8(r1), 0, 0
    stfd f27, 0x3c0(r1)
    psq_st f27, 0x3c8(r1), 0, 0
    stfd f26, 0x3b0(r1)
    psq_st f26, 0x3b8(r1), 0, 0
    stfd f25, 0x3a0(r1)
    psq_st f25, 0x3a8(r1), 0, 0
    stfd f24, 0x390(r1)
    psq_st f24, 0x398(r1), 0, 0
    stfd f23, 0x380(r1)
    psq_st f23, 0x388(r1), 0, 0
    stfd f22, 0x370(r1)
    psq_st f22, 0x378(r1), 0, 0
    stfd f21, 0x360(r1)
    psq_st f21, 0x368(r1), 0, 0
    stfd f20, 0x350(r1)
    psq_st f20, 0x358(r1), 0, 0
    bl _savegpr_27
    lwz r6, 0x14b4(r3)
    lis r0, 0x4330
    stw r0, 0x328(r1)
    mr r31, r3
    cmpwi r6, 0x0
    stw r0, 0x330(r1)
    bne lbl_fn_8033F7FC_000002BC
    lfs f1, lbl_808852C0
    addi r5, r3, 0x1598
    li r4, 0x1
    bl fn_8033E8D4
    lwz r0, 0x2dc(r31)
    cmpwi r0, 0x141
    bne lbl_fn_8033F7FC_00000A4C
    lwz r5, 0x14b4(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80885238
    li r4, 0x0
    addi r0, r5, 0x1
    stw r0, 0x14b4(r31)
    lfs f2, lbl_80885284
    li r5, 0x16b
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f7, lbl_80885238
    addi r3, r1, 0x268
    lfs f0, lbl_80885260
    li r4, 0x79
    stfs f7, 0x90(r1)
    stfs f7, 0x94(r1)
    stfs f0, 0x98(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x90
    addi r3, r1, 0x268
    mr r5, r4
    bl fn_805F93C0
    lfs f8, lbl_80885304
    addi r3, r1, 0x2f8
    lfs f0, 0x94(r1)
    lfs f9, 0x98(r1)
    fmuls f10, f0, f8
    lfs f7, 0x90(r1)
    lfs f0, 0x52c(r31)
    fmuls f9, f9, f8
    fmuls f11, f7, f8
    lfs f8, 0x530(r31)
    fadds f12, f0, f10
    lfs f7, 0x528(r31)
    lfs f0, lbl_8088530C
    fadds f3, f8, f9
    fadds f1, f7, f11
    stfs f11, 0x9c(r1)
    fadds f2, f12, f0
    stfs f10, 0xa0(r1)
    stfs f9, 0xa4(r1)
    stfs f1, 0xd8(r1)
    stfs f3, 0xe0(r1)
    stfs f2, 0xdc(r1)
    bl fn_805F90D0
    addi r4, r1, 0x2f8
    lfs f0, lbl_80885284
    psq_l f2, 0x8(r4), 0, 0
    addi r30, r31, 0x15e0
    psq_l f3, 0x10(r4), 0, 0
    addi r3, r1, 0x208
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
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    bl fn_805F9160
    mr r3, r30
    addi r4, r1, 0x208
    addi r5, r1, 0x238
    bl fn_805F89F0
    addi r5, r1, 0x238
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
    lfs f1, lbl_80885260
    stw r3, 0xc(r1)
    li r0, 0x1
    addi r4, r31, 0x1668
    mr r7, r30
    stw r0, 0x10(r1)
    li r5, -0x1
    li r6, 0x5
    li r8, 0x0
    lwz r3, lbl_8087F3C0
    li r9, 0x0
    li r10, 0x0
    bl fn_8023A680
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    lwz r0, 0x14b8(r31)
    lis r3, lbl_8074A490@ha
    lfd f7, lbl_8074A490@l(r3)
    li r5, 0x1d
    xoris r0, r0, 0x8000
    stw r0, 0x32c(r1)
    lwz r4, 0x638(r31)
    lfd f0, 0x328(r1)
    lwz r0, 0x14dc(r31)
    fsubs f0, f0, f7
    stw r5, 0x560(r31)
    lwz r3, 0x14e4(r31)
    stw r4, 0x63c(r31)
    stw r0, 0x638(r31)
    stfs f0, 0xfb8(r31)
    lwz r0, 0xc0(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x334(r1)
    lfd f0, 0x330(r1)
    fsubs f0, f0, f7
    stfs f0, 0xfbc(r31)
    b lbl_fn_8033F7FC_00000A4C
lbl_fn_8033F7FC_000002BC:
    cmpwi r6, 0x1
    bne lbl_fn_8033F7FC_00000334
    lwz r0, 0x14b8(r3)
    lis r4, lbl_8074A490@ha
    lfd f7, lbl_8074A490@l(r4)
    li r4, 0x0
    xoris r0, r0, 0x8000
    stw r0, 0x32c(r1)
    lfs f20, 0x2e4(r3)
    lfd f0, 0x328(r1)
    fsubs f0, f0, f7
    stfs f0, 0xfb8(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f20, f1
    cror eq, gt, eq
    bne lbl_fn_8033F7FC_00000A4C
    lfs f1, lbl_80885238
    addi r3, r31, 0xb0
    lfs f2, lbl_80885284
    li r4, 0x0
    li r5, 0x16c
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x14b4(r31)
    addi r0, r3, 0x1
    stw r0, 0x14b4(r31)
    b lbl_fn_8033F7FC_00000A4C
lbl_fn_8033F7FC_00000334:
    cmpwi r6, 0x2
    bne lbl_fn_8033F7FC_0000052C
    lwz r5, 0x14b8(r3)
    lis r4, lbl_8074A490@ha
    lfd f7, lbl_8074A490@l(r4)
    xoris r0, r5, 0x8000
    stw r0, 0x334(r1)
    lwz r4, 0x14e4(r3)
    lfd f0, 0x330(r1)
    fsubs f0, f0, f7
    stfs f0, 0xfb8(r3)
    lwz r0, 0xc0(r4)
    cmpw r5, r0
    blt lbl_fn_8033F7FC_00000A4C
    addi r0, r6, 0x1
    stw r0, 0x14b4(r3)
    mr r4, r31
    li r5, 0x3ea
    lwz r3, lbl_8087F3C0
    li r6, 0x1
    bl fn_80239DAC
    lfs f1, lbl_80885238
    addi r3, r31, 0xb0
    lfs f2, lbl_80885284
    li r4, 0x0
    li r5, 0x14d
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f7, lbl_80885238
    addi r3, r1, 0x1d8
    lfs f0, lbl_80885260
    li r4, 0x79
    stfs f7, 0x78(r1)
    stfs f7, 0x7c(r1)
    stfs f0, 0x80(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x78
    addi r3, r1, 0x1d8
    mr r5, r4
    bl fn_805F93C0
    lfs f8, lbl_80885304
    addi r3, r1, 0x2c8
    lfs f0, 0x7c(r1)
    lfs f9, 0x80(r1)
    fmuls f10, f0, f8
    lfs f7, 0x78(r1)
    lfs f0, 0x52c(r31)
    fmuls f9, f9, f8
    fmuls f11, f7, f8
    lfs f8, 0x530(r31)
    fadds f12, f0, f10
    lfs f7, 0x528(r31)
    lfs f0, lbl_8088530C
    fadds f3, f8, f9
    fadds f1, f7, f11
    stfs f11, 0x84(r1)
    fadds f2, f12, f0
    stfs f10, 0x88(r1)
    stfs f9, 0x8c(r1)
    stfs f1, 0xcc(r1)
    stfs f3, 0xd4(r1)
    stfs f2, 0xd0(r1)
    bl fn_805F90D0
    addi r4, r1, 0x2c8
    lfs f0, lbl_80885284
    psq_l f2, 0x8(r4), 0, 0
    addi r30, r31, 0x15e0
    psq_l f3, 0x10(r4), 0, 0
    addi r3, r1, 0x178
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
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    bl fn_805F9160
    mr r3, r30
    addi r4, r1, 0x178
    addi r5, r1, 0x1a8
    bl fn_805F89F0
    addi r5, r1, 0x1a8
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
    lfs f1, lbl_80885260
    stw r3, 0xc(r1)
    li r0, 0x1
    addi r4, r31, 0x1668
    mr r7, r30
    stw r0, 0x10(r1)
    li r5, -0x1
    li r6, 0x5
    li r8, 0x0
    lwz r3, lbl_8087F3C0
    li r9, 0x0
    li r10, 0x0
    bl fn_8023A680
    b lbl_fn_8033F7FC_00000A4C
lbl_fn_8033F7FC_0000052C:
    cmpwi r6, 0x3
    bne lbl_fn_8033F7FC_00000894
    li r4, 0x3
    bl fn_8016E970
    lfs f7, lbl_80885238
    addi r3, r1, 0x148
    lfs f0, lbl_80885260
    li r4, 0x79
    stfs f7, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f0, 0x68(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x60
    addi r3, r1, 0x148
    mr r5, r4
    bl fn_805F93C0
    lfs f12, lbl_80885304
    lfs f22, 0x2e4(r31)
    lfs f8, 0x64(r1)
    fdivs f21, f22, f12
    lfs f13, 0x68(r1)
    lfs f11, 0x60(r1)
    lfs f9, 0x52c(r31)
    lfs f0, lbl_8087DC6C
    lfs f7, lbl_8087DC68
    fmuls f20, f8, f12
    lfs f10, 0x530(r31)
    fmuls f13, f13, f12
    lfs f8, 0x528(r31)
    fmuls f11, f11, f12
    lfs f23, lbl_8088530C
    fadds f9, f9, f20
    stfs f11, 0x6c(r1)
    fadds f10, f10, f13
    fadds f11, f8, f11
    stfs f20, 0x70(r1)
    fsubs f0, f0, f7
    fadds f9, f9, f23
    stfs f13, 0x74(r1)
    fcmpo cr0, f22, f12
    fmadds f20, f21, f0, f7
    stfs f11, 0xc0(r1)
    stfs f10, 0xc8(r1)
    stfs f9, 0xc4(r1)
    cror eq, gt, eq
    bne lbl_fn_8033F7FC_000007E0
    fsubs f8, f22, f12
    lwz r4, lbl_8087F8A0
    lis r3, lbl_8074A490@ha
    lfs f0, lbl_8087DC74
    lfs f7, lbl_8087DC70
    frsp f28, f10
    fdivs f8, f8, f12
    lwz r28, 0x48(r4)
    lfd f24, lbl_8074A490@l(r3)
    addi r30, r1, 0xb4
    lfs f25, lbl_80885318
    lfs f26, lbl_80885314
    fsubs f0, f0, f7
    lfs f27, lbl_80885310
    frsp f29, f9
    lfs f31, lbl_8088531C
    frsp f30, f11
    fmadds f20, f8, f0, f7
    b lbl_fn_8033F7FC_000007A4
lbl_fn_8033F7FC_00000634:
    li r27, 0x0
lbl_fn_8033F7FC_00000638:
    psq_l f1, 0x528(r28), 0, 0
    lfs f2, 0x530(r28)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xbc(r1)
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0x32c(r1)
    lfd f0, 0x328(r1)
    fsubs f0, f0, f24
    fdivs f0, f0, f25
    fmadds f22, f26, f0, f27
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0x334(r1)
    lfd f0, 0x330(r1)
    fsubs f0, f0, f24
    fdivs f0, f0, f25
    fmadds f21, f26, f0, f27
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0x32c(r1)
    lfs f0, 0xb8(r1)
    addi r3, r1, 0xa8
    lfd f8, 0x328(r1)
    mr r4, r3
    fadds f7, f0, f21
    lfs f0, 0xbc(r1)
    fsubs f9, f8, f24
    lfs f8, 0xb4(r1)
    fadds f0, f0, f22
    stfs f7, 0xb8(r1)
    fdivs f9, f9, f25
    stfs f0, 0xbc(r1)
    stfs f21, 0x58(r1)
    stfs f22, 0x5c(r1)
    fmadds f10, f26, f9, f27
    fsubs f9, f0, f28
    fsubs f7, f7, f29
    stfs f10, 0x54(r1)
    fadds f0, f8, f10
    stfs f7, 0xac(r1)
    fsubs f7, f0, f30
    stfs f0, 0xb4(r1)
    stfs f7, 0xa8(r1)
    stfs f9, 0xb0(r1)
    bl fn_805F98D0
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0x334(r1)
    lfs f8, 0xb0(r1)
    lfd f0, 0x330(r1)
    lfs f7, 0xac(r1)
    fsubs f9, f0, f24
    lfs f0, 0xa8(r1)
    lwz r29, lbl_8087F048
    fdivs f9, f9, f25
    fmadds f9, f23, f9, f31
    fmuls f8, f8, f9
    fmuls f7, f7, f9
    fmuls f0, f0, f9
    stfs f8, 0x44(r1)
    fadds f8, f28, f8
    fadds f9, f29, f7
    stfs f0, 0x3c(r1)
    fadds f0, f30, f0
    stfs f7, 0x40(r1)
    stfs f0, 0x48(r1)
    stfs f9, 0x4c(r1)
    stfs f8, 0x50(r1)
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    lfs f1, lbl_80885238
    subf r0, r4, r0
    lfs f2, lbl_80885260
    slwi r0, r0, 2
    mr r3, r29
    add r5, r31, r0
    mr r4, r31
    lwz r5, 0x14e4(r5)
    addi r6, r1, 0x48
    addi r7, r1, 0xa8
    li r8, 0x0
    lis r9, 0x100
    li r10, 0x0
    bl fn_800F8574
    addi r27, r27, 0x1
    cmpwi r27, 0x3
    blt lbl_fn_8033F7FC_00000638
    lwz r28, 0x14ac(r28)
lbl_fn_8033F7FC_000007A4:
    cmpwi r28, 0x0
    bne lbl_fn_8033F7FC_00000634
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_808852B8
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_8033F7FC_000007E0
    lwz r3, 0x14b4(r31)
    mr r4, r31
    li r5, 0x3ef
    li r6, 0x0
    addi r0, r3, 0x1
    stw r0, 0x14b4(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
lbl_fn_8033F7FC_000007E0:
    lfs f1, 0xc0(r1)
    addi r3, r1, 0x298
    lfs f2, 0xc4(r1)
    lfs f3, 0xc8(r1)
    bl fn_805F90D0
    addi r4, r1, 0x298
    addi r30, r31, 0x15e0
    psq_l f2, 0x8(r4), 0, 0
    addi r3, r1, 0xe8
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
    stfs f20, 0x18(r1)
    stfs f20, 0x1c(r1)
    stfs f20, 0x20(r1)
    bl fn_805F9160
    mr r3, r30
    addi r4, r1, 0xe8
    addi r5, r1, 0x118
    bl fn_805F89F0
    addi r3, r1, 0x118
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
    b lbl_fn_8033F7FC_00000A4C
lbl_fn_8033F7FC_00000894:
    cmpwi r6, 0x4
    bne lbl_fn_8033F7FC_00000908
    lfs f20, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    lfs f0, lbl_80885260
    fsubs f0, f1, f0
    fcmpo cr0, f20, f0
    cror eq, gt, eq
    bne lbl_fn_8033F7FC_00000A4C
    lwz r3, 0x14b4(r31)
    mr r4, r31
    li r5, 0x3ef
    li r6, 0x0
    addi r0, r3, 0x1
    stw r0, 0x14b4(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lfs f1, lbl_80885238
    addi r3, r31, 0xb0
    lfs f2, lbl_80885284
    li r4, 0x0
    li r5, 0x141
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_8033F7FC_00000A4C
lbl_fn_8033F7FC_00000908:
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    lfs f0, lbl_808852C0
    lfs f7, 0x52c(r31)
    fdivs f8, f0, f1
    lfs f0, lbl_80885238
    fsubs f7, f7, f8
    stfs f7, 0x52c(r31)
    fcmpo cr0, f7, f0
    bge lbl_fn_8033F7FC_00000938
    stfs f0, 0x52c(r31)
lbl_fn_8033F7FC_00000938:
    lfs f20, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f20, f1
    cror eq, gt, eq
    bne lbl_fn_8033F7FC_00000A4C
    li r30, 0x0
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    stw r30, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ea
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ed
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ef
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3f0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3f1
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80885260
    li r0, 0x1
    stw r30, 0x58c(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80885238
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x2
    lfs f2, lbl_80885284
    li r6, 0x1
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lfs f0, lbl_80885238
    stfs f0, 0x52c(r31)
lbl_fn_8033F7FC_00000A4C:
    addi r11, r1, 0x350
    psq_l f31, 0x408(r1), 0, 0
    lfd f31, 0x400(r1)
    psq_l f30, 0x3f8(r1), 0, 0
    lfd f30, 0x3f0(r1)
    psq_l f29, 0x3e8(r1), 0, 0
    lfd f29, 0x3e0(r1)
    psq_l f28, 0x3d8(r1), 0, 0
    lfd f28, 0x3d0(r1)
    psq_l f27, 0x3c8(r1), 0, 0
    lfd f27, 0x3c0(r1)
    psq_l f26, 0x3b8(r1), 0, 0
    lfd f26, 0x3b0(r1)
    psq_l f25, 0x3a8(r1), 0, 0
    lfd f25, 0x3a0(r1)
    psq_l f24, 0x398(r1), 0, 0
    lfd f24, 0x390(r1)
    psq_l f23, 0x388(r1), 0, 0
    lfd f23, 0x380(r1)
    psq_l f22, 0x378(r1), 0, 0
    lfd f22, 0x370(r1)
    psq_l f21, 0x368(r1), 0, 0
    lfd f21, 0x360(r1)
    psq_l f20, 0x358(r1), 0, 0
    lfd f20, 0x350(r1)
    bl _restgpr_27
    lwz r0, 0x414(r1)
    mtlr r0
    addi r1, r1, 0x410
    blr
}
