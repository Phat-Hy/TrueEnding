#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_8016E970(void);
extern void fn_80179D44(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_8028B75C(void);
extern void fn_8028FC28(void);
extern void fn_8029101C(void);
extern void fn_80292DB4(void);
extern void fn_803C1560(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_807452F0[];
extern u8 lbl_80745314[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80883A98;
extern u32 lbl_80883AA0;
extern u32 lbl_80883AA8;
extern u32 lbl_80883AB0;
extern u32 lbl_80883AB4;
extern u32 lbl_80883AB8;
extern u32 lbl_80883AC0;
extern u32 lbl_80883AC4;
extern u32 lbl_80883AC8;
extern u32 lbl_80883ACC;
extern u32 lbl_80883AD4;
extern u32 lbl_80883AD8;
extern u32 lbl_80883ADC;
extern u32 lbl_80883AEC;
extern u32 lbl_80883B44;
extern u32 lbl_80883B54;
extern u32 lbl_80883B70;
extern u32 lbl_80883B90;
extern u32 lbl_80883BA8;
extern u32 lbl_80883BAC;
extern u32 lbl_80883BB0;
extern u32 lbl_80883BB4;
extern u32 lbl_80883BB8;
extern u32 lbl_80883BBC;
extern u32 lbl_80883BC0;
extern u32 lbl_80883BC4;
extern u32 lbl_80883BC8;

/* Function declarations */
void fn_8028E1A0(void);
void fn_8028E488(void);
void fn_8028E800(void);
void fn_8028EDC4(void);
void fn_8028EF20(void);
void fn_8028F1D0(void);
void fn_8028F4AC(void);
void fn_8028F560(void);
void fn_8028F8E4(void);
void fn_8028F998(void);
void fn_8028FA60(void);

asm void fn_8028E1A0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r4, r1, 0x38
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    mr r30, r3
    lwz r5, 0x14b0(r3)
    lfs f0, 0x530(r3)
    lfs f2, 0x530(r5)
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    fsubs f6, f2, f0
    lfs f3, 0x528(r3)
    lfs f4, 0x38(r1)
    lfs f5, 0x52c(r3)
    fmuls f0, f6, f6
    fsubs f4, f4, f3
    lfs f3, 0x3c(r1)
    stfs f2, 0x40(r1)
    fsubs f3, f3, f5
    fmadds f1, f4, f4, f0
    stfs f4, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f6, 0x34(r1)
    bl fn_8068B100
    addi r3, r1, 0x2c
    mr r4, r3
    bl fn_805F98D0
    lfs f31, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8028E1A0_00000120
    li r31, 0x0
    li r0, 0xe
    stw r0, 0x58c(r30)
    stw r31, 0x14b4(r30)
    stw r31, 0x14b8(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883A98
    li r4, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    stfs f0, 0x1510(r30)
    stw r31, 0x15d4(r30)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883AA8
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883A98
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x153
    lfs f2, lbl_80883AA0
    li r6, 0x1
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    b lbl_fn_8028E1A0_000002C8
lbl_fn_8028E1A0_00000120:
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_80883AD4
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8028E1A0_0000018C
    lfs f3, 0x1538(r30)
    lis r3, lbl_807452F0@ha
    lfs f0, 0x1534(r30)
    lfd f2, lbl_807452F0@l(r3)
    fsubs f1, f3, f0
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_80883AC4
    fcmpo cr0, f4, f0
    ble lbl_fn_8028E1A0_00000164
    lfs f0, lbl_80883AC8
    fsubs f4, f4, f0
lbl_fn_8028E1A0_00000164:
    lfs f0, lbl_80883ACC
    fcmpo cr0, f4, f0
    bge lbl_fn_8028E1A0_00000178
    lfs f0, lbl_80883AC8
    fadds f4, f4, f0
lbl_fn_8028E1A0_00000178:
    lfs f3, lbl_80883AD4
    lfs f0, 0x538(r30)
    fdivs f3, f4, f3
    fadds f0, f0, f3
    stfs f0, 0x538(r30)
lbl_fn_8028E1A0_0000018C:
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_80883BA8
    fcmpo cr0, f3, f0
    ble lbl_fn_8028E1A0_000001A8
    lfs f0, lbl_80883B70
    fcmpo cr0, f3, f0
    blt lbl_fn_8028E1A0_000001C4
lbl_fn_8028E1A0_000001A8:
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_80883BAC
    fcmpo cr0, f3, f0
    ble lbl_fn_8028E1A0_000002BC
    lfs f0, lbl_80883BB0
    fcmpo cr0, f3, f0
    bge lbl_fn_8028E1A0_000002BC
lbl_fn_8028E1A0_000001C4:
    lis r4, lbl_80745314@ha
    addi r3, r30, 0xb0
    addi r4, r4, lbl_80745314@l
    li r5, 0x0
    addi r4, r4, 0x339
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8028E1A0_000001EC
    li r5, 0x0
    b lbl_fn_8028E1A0_000001F8
lbl_fn_8028E1A0_000001EC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r5, r3, r0
lbl_fn_8028E1A0_000001F8:
    lfs f4, 0x2c(r5)
    addi r3, r1, 0x48
    lfs f5, 0x1c(r5)
    li r4, 0x79
    lfs f6, 0xc(r5)
    lfs f3, lbl_80883A98
    lfs f0, lbl_80883AA8
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r30)
    stfs f6, 0x20(r1)
    stfs f5, 0x24(r1)
    stfs f4, 0x28(r1)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x48
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x10(r1)
    mr r6, r30
    lfs f4, lbl_80883AD4
    li r4, 0x0
    lfs f3, 0xc(r1)
    li r5, 0x0
    lfs f0, 0x8(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0x24(r1)
    fmuls f7, f0, f4
    lfs f4, 0x20(r1)
    lfs f0, 0x28(r1)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x14(r1)
    fadds f0, f0, f5
    lwz r3, lbl_8087F048
    stfs f6, 0x18(r1)
    lwz r7, 0x14e0(r30)
    stfs f5, 0x1c(r1)
    li r9, 0x1e
    lwz r8, 0x590(r30)
    li r10, -0x1
    stfs f4, 0x20(r1)
    lfs f1, lbl_80883A98
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    bl fn_800F8C6C
    b lbl_fn_8028E1A0_000002C8
lbl_fn_8028E1A0_000002BC:
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
lbl_fn_8028E1A0_000002C8:
    lwz r0, 0x94(r1)
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8028E488(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r4, r1, 0x80
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stfd f29, 0x110(r1)
    psq_st f29, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    mr r30, r3
    lwz r5, 0x14b0(r3)
    lfs f0, 0x530(r3)
    lfs f2, 0x530(r5)
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    fsubs f5, f2, f0
    lfs f3, 0x528(r3)
    addi r3, r1, 0x74
    lfs f4, 0x80(r1)
    lfs f0, lbl_80883A98
    fsubs f3, f4, f3
    stfs f2, 0x88(r1)
    stfs f3, 0x74(r1)
    stfs f5, 0x7c(r1)
    stfs f0, 0x78(r1)
    bl fn_805F9940
    fmr f30, f1
    addi r3, r1, 0x74
    mr r4, r3
    bl fn_805F98D0
    lfs f31, 0x2e4(r30)
    lfs f0, lbl_80883BB4
    fcmpo cr0, f31, f0
    ble lbl_fn_8028E488_00000458
    lfs f0, lbl_80883B90
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_8028E488_00000458
    lfs f3, 0x1538(r30)
    lis r3, lbl_807452F0@ha
    lfs f0, 0x1534(r30)
    lfd f2, lbl_807452F0@l(r3)
    fsubs f1, f3, f0
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80883AC4
    fcmpo cr0, f3, f0
    ble lbl_fn_8028E488_000003BC
    lfs f0, lbl_80883AC8
    fsubs f3, f3, f0
lbl_fn_8028E488_000003BC:
    lfs f0, lbl_80883ACC
    fcmpo cr0, f3, f0
    bge lbl_fn_8028E488_000003D0
    lfs f0, lbl_80883AC8
    fadds f3, f3, f0
lbl_fn_8028E488_000003D0:
    lfs f0, lbl_80883BB8
    lfs f5, lbl_80883ADC
    fdivs f3, f3, f0
    lfs f0, 0x538(r30)
    fadds f0, f0, f3
    fcmpo cr0, f30, f5
    stfs f0, 0x538(r30)
    ble lbl_fn_8028E488_0000060C
    lfs f4, 0x7c(r1)
    lfs f0, 0x78(r1)
    fmuls f6, f4, f5
    lfs f3, 0x74(r1)
    fmuls f7, f0, f5
    lfs f0, lbl_80883BBC
    fmuls f5, f3, f5
    lfs f4, 0x528(r30)
    fmuls f8, f6, f0
    lfs f3, 0x52c(r30)
    fmuls f9, f7, f0
    stfs f5, 0x5c(r1)
    fmuls f10, f5, f0
    lfs f0, 0x530(r30)
    fadds f3, f3, f9
    stfs f7, 0x60(r1)
    fadds f4, f4, f10
    fadds f0, f0, f8
    stfs f6, 0x64(r1)
    stfs f10, 0x68(r1)
    stfs f9, 0x6c(r1)
    stfs f8, 0x70(r1)
    stfs f4, 0x528(r30)
    stfs f3, 0x52c(r30)
    stfs f0, 0x530(r30)
    b lbl_fn_8028E488_0000060C
lbl_fn_8028E488_00000458:
    lfs f2, 0x7c(r1)
    addi r3, r1, 0x74
    lfs f0, lbl_80883AB0
    addi r31, r1, 0x50
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8028E488_000004A8
    lfs f3, 0x50(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_8028E488_0000049C
    lfs f0, lbl_80883AB4
    b lbl_fn_8028E488_000004A0
lbl_fn_8028E488_0000049C:
    lfs f0, lbl_80883AB8
lbl_fn_8028E488_000004A0:
    stfs f0, 0x48(r1)
    b lbl_fn_8028E488_000004BC
lbl_fn_8028E488_000004A8:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8028E488_000004BC:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x90
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883A98
    addi r4, r1, 0x38
    lfs f29, 0x98(r1)
    mr r5, r4
    lfs f30, 0x94(r1)
    addi r3, r1, 0xc0
    lfs f13, 0x90(r1)
    lfs f12, 0xa8(r1)
    lfs f11, 0xa4(r1)
    lfs f10, 0xa0(r1)
    lfs f9, 0xb8(r1)
    lfs f8, 0xb4(r1)
    lfs f7, 0xb0(r1)
    lfs f6, 0xbc(r1)
    lfs f5, 0xac(r1)
    lfs f4, 0x9c(r1)
    lfs f0, lbl_80883AA8
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xf0(r1)
    stfs f3, 0xf4(r1)
    stfs f3, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0xc0(r1)
    stfs f30, 0xc4(r1)
    stfs f29, 0xc8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xd0(r1)
    stfs f11, 0xd4(r1)
    stfs f12, 0xd8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xe0(r1)
    stfs f8, 0xe4(r1)
    stfs f9, 0xe8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xcc(r1)
    stfs f5, 0xdc(r1)
    stfs f6, 0xec(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883AB0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8028E488_000005D8
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_8028E488_000005C8
    lfs f0, lbl_80883AB4
    b lbl_fn_8028E488_000005CC
lbl_fn_8028E488_000005C8:
    lfs f0, lbl_80883AB8
lbl_fn_8028E488_000005CC:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8028E488_000005EC
lbl_fn_8028E488_000005D8:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8028E488_000005EC:
    addi r3, r1, 0x44
    lfs f2, lbl_80883A98
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, 0x54(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    stfs f0, 0x1538(r30)
lbl_fn_8028E488_0000060C:
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8028E488_00000630
    mr r3, r30
    li r4, 0x0
    bl fn_8028B75C
lbl_fn_8028E488_00000630:
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

asm void fn_8028E800(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    mr r31, r3
    stw r30, 0x108(r1)
    lwz r0, 0x14b4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8028E800_000008A8
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_80883BC0
    lwz r30, lbl_8087F430
    fcmpo cr0, f3, f0
    bge lbl_fn_8028E800_00000768
    lis r4, lbl_80745314@ha
    li r5, 0x0
    addi r4, r4, lbl_80745314@l
    addi r3, r3, 0xb0
    addi r4, r4, 0x344
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8028E800_000006D0
    li r3, 0x0
    b lbl_fn_8028E800_000006DC
lbl_fn_8028E800_000006D0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_8028E800_000006DC:
    lwz r0, 0x1540(r31)
    lfs f2, 0x2c(r3)
    lfs f0, 0x1c(r3)
    cmpwi r0, 0x0
    lfs f3, 0xc(r3)
    stfs f3, 0x80(r1)
    stfs f0, 0x84(r1)
    stfs f2, 0x88(r1)
    bne lbl_fn_8028E800_0000074C
    stw r31, 0x8a0(r30)
    addi r4, r1, 0x80
    li r0, 0x1
    addi r5, r30, 0x97c
    lbz r3, 0x97c(r30)
    stb r3, 0x97d(r30)
    psq_l f1, 0x0(r4), 0, 0
    stb r0, 0x97c(r30)
    lfs f0, lbl_80883A98
    psq_st f1, 0xc(r5), 0, 0
    stfs f2, 0x990(r30)
    stfs f0, 0x9a0(r30)
    b lbl_fn_8028E800_00000738
    b lbl_fn_8028E800_0000073C
lbl_fn_8028E800_00000738:
    li r0, 0x0
lbl_fn_8028E800_0000073C:
    stw r0, 0x4(r5)
    li r0, 0x1
    stw r0, 0x1540(r31)
    b lbl_fn_8028E800_00000784
lbl_fn_8028E800_0000074C:
    addi r4, r1, 0x80
    stw r31, 0x8a0(r30)
    addi r3, r30, 0x988
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x990(r30)
    b lbl_fn_8028E800_00000784
lbl_fn_8028E800_00000768:
    lwz r0, 0x1540(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8028E800_00000784
    li r0, 0x0
    stw r0, 0x8a0(r30)
    stb r0, 0x97c(r30)
    stw r0, 0x1540(r3)
lbl_fn_8028E800_00000784:
    lwz r0, 0x14dc(r31)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_8028E800_000007E8
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883BA8
    fcmpo cr0, f3, f0
    bge lbl_fn_8028E800_000007E8
    beq cr1, lbl_fn_8028E800_000007E8
    lfs f0, lbl_80883BC4
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8028E800_000007E8
    lwz r5, lbl_8087F430
    li r0, 0xa
    lfs f3, lbl_80883AA8
    lwz r3, 0x96c(r5)
    lfs f0, lbl_80883AD8
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    subf r3, r4, r3
    stw r3, 0x96c(r5)
    stw r0, 0x970(r5)
    stfs f3, 0x974(r5)
    stfs f0, 0x978(r5)
lbl_fn_8028E800_000007E8:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80883AA8
    addi r3, r31, 0xb0
    lfs f7, 0x1524(r31)
    li r4, 0x0
    fdivs f8, f0, f1
    lfs f6, 0x1520(r31)
    lfs f5, 0x151c(r31)
    lfs f4, 0x528(r31)
    lfs f3, 0x52c(r31)
    lfs f0, 0x530(r31)
    fmuls f7, f7, f8
    lfs f30, 0x2e4(r31)
    fmuls f6, f6, f8
    fmuls f5, f5, f8
    stfs f7, 0x7c(r1)
    fadds f0, f0, f7
    fadds f3, f3, f6
    stfs f5, 0x74(r1)
    fadds f4, f4, f5
    stfs f6, 0x78(r1)
    stfs f4, 0x528(r31)
    stfs f3, 0x52c(r31)
    stfs f0, 0x530(r31)
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_8028E800_00000BFC
    lfs f0, lbl_80883AA8
    li r30, 0x1
    stw r30, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883A98
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x1e2
    lfs f2, lbl_80883AA0
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x0
    stw r0, 0x14b8(r31)
    stw r30, 0x14b4(r31)
    b lbl_fn_8028E800_00000BFC
lbl_fn_8028E800_000008A8:
    cmpwi r0, 0x1
    bne lbl_fn_8028E800_00000BFC
    lwz r0, 0x19b4(r3)
    lwz r4, 0x14b8(r3)
    mulli r0, r0, 0x1e
    cmpw r4, r0
    ble lbl_fn_8028E800_00000BFC
    li r30, 0x0
    li r0, 0x2
    stw r0, 0x14c0(r3)
    stw r30, 0x1974(r3)
    stw r30, 0x14b4(r3)
    stw r30, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883AA8
    li r7, 0x11
    lfs f1, lbl_80883A98
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f2, lbl_80883AA0
    li r4, 0x0
    stw r7, 0x58c(r31)
    li r5, 0xa
    li r6, 0x0
    li r7, 0x0
    stfs f1, 0x1510(r31)
    li r8, 0x1
    stw r30, 0x15d4(r31)
    stw r0, 0x3fc(r31)
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    mr r3, r31
    lwz r4, lbl_8087F430
    lwz r30, 0x10d8(r4)
    bl fn_80179D44
    lfs f1, lbl_80883AC0
    mr r5, r3
    mr r3, r30
    addi r4, r31, 0x528
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_803C1560
    subi r0, r3, 0x1
    lwz r3, 0x9c(r30)
    mulli r0, r0, 0x30
    lfs f3, 0x530(r31)
    lfs f4, 0x52c(r31)
    addi r4, r1, 0x8
    lfs f0, 0x528(r31)
    addi r5, r31, 0x151c
    add r6, r3, r0
    lfs f7, 0x1980(r31)
    lfs f6, 0xc(r6)
    addi r3, r1, 0x20
    lfs f5, 0x8(r6)
    addi r30, r1, 0x14
    fsubs f2, f6, f3
    lfs f3, 0x4(r6)
    fsubs f5, f5, f4
    lfs f4, 0x1978(r31)
    fsubs f0, f3, f0
    stfs f2, 0x1524(r31)
    stfs f0, 0x8(r1)
    lfs f6, 0x197c(r31)
    stfs f5, 0xc(r1)
    lfs f0, lbl_80883AB0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f3, 0xc(r6)
    lfs f5, 0x8(r6)
    fsubs f7, f7, f3
    lfs f3, 0x4(r6)
    stfs f2, 0x10(r1)
    fsubs f5, f6, f5
    fsubs f3, f4, f3
    fmr f2, f7
    stfs f3, 0x20(r1)
    frsp f3, f2
    stfs f5, 0x24(r1)
    psq_l f1, 0x0(r3), 0, 0
    fabs f4, f3
    stfs f7, 0x28(r1)
    psq_st f1, 0x0(r30), 0, 0
    frsp f4, f4
    stfs f2, 0x1c(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_8028E800_00000A4C
    lfs f3, 0x14(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_8028E800_00000A40
    lfs f0, lbl_80883AB4
    b lbl_fn_8028E800_00000A44
lbl_fn_8028E800_00000A40:
    lfs f0, lbl_80883AB8
lbl_fn_8028E800_00000A44:
    stfs f0, 0x30(r1)
    b lbl_fn_8028E800_00000A60
lbl_fn_8028E800_00000A4C:
    fmr f2, f3
    lfs f1, 0x14(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x30(r1)
lbl_fn_8028E800_00000A60:
    lfs f0, 0x30(r1)
    addi r3, r1, 0xd0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883A98
    addi r4, r1, 0x38
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
    lfs f31, 0xec(r1)
    lfs f30, 0xdc(r1)
    lfs f0, lbl_80883AA8
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x1c(r1)
    stfs f3, 0xc0(r1)
    stfs f3, 0xc4(r1)
    stfs f3, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f6, 0x90(r1)
    stfs f5, 0x94(r1)
    stfs f4, 0x98(r1)
    stfs f9, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f9, 0xa0(r1)
    stfs f8, 0xa4(r1)
    stfs f7, 0xa8(r1)
    stfs f12, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f10, 0x58(r1)
    stfs f12, 0xb0(r1)
    stfs f11, 0xb4(r1)
    stfs f10, 0xb8(r1)
    stfs f30, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f30, 0x9c(r1)
    stfs f31, 0xac(r1)
    stfs f13, 0xbc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883AB0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8028E800_00000B7C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_8028E800_00000B6C
    lfs f0, lbl_80883AB4
    b lbl_fn_8028E800_00000B70
lbl_fn_8028E800_00000B6C:
    lfs f0, lbl_80883AB8
lbl_fn_8028E800_00000B70:
    fneg f0, f0
    stfs f0, 0x2c(r1)
    b lbl_fn_8028E800_00000B90
lbl_fn_8028E800_00000B7C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x2c(r1)
lbl_fn_8028E800_00000B90:
    addi r3, r1, 0x2c
    lfs f4, lbl_80883A98
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_807452F0@ha
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f4
    lfs f0, 0x538(r31)
    lfs f3, 0x18(r1)
    stfs f2, 0x1c(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_807452F0@l(r3)
    stfs f4, 0x34(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80883AC4
    fcmpo cr0, f3, f0
    ble lbl_fn_8028E800_00000BDC
    lfs f0, lbl_80883AC8
    fsubs f3, f3, f0
lbl_fn_8028E800_00000BDC:
    lfs f0, lbl_80883ACC
    fcmpo cr0, f3, f0
    bge lbl_fn_8028E800_00000BF0
    lfs f0, lbl_80883AC8
    fadds f3, f3, f0
lbl_fn_8028E800_00000BF0:
    li r0, 0x0
    stfs f3, 0x1528(r31)
    stw r0, 0x153c(r31)
lbl_fn_8028E800_00000BFC:
    lwz r0, 0x134(r1)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_8028EDC4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_80883AD4
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lfs f3, 0x2e4(r3)
    lwz r30, lbl_8087F430
    fcmpo cr0, f3, f0
    bge lbl_fn_8028EDC4_00000D18
    lis r4, lbl_80745314@ha
    li r5, 0x0
    addi r4, r4, lbl_80745314@l
    addi r3, r3, 0xb0
    addi r4, r4, 0x344
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8028EDC4_00000C80
    li r3, 0x0
    b lbl_fn_8028EDC4_00000C8C
lbl_fn_8028EDC4_00000C80:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_8028EDC4_00000C8C:
    lwz r0, 0x1540(r31)
    lfs f2, 0x2c(r3)
    lfs f0, 0x1c(r3)
    cmpwi r0, 0x0
    lfs f3, 0xc(r3)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f2, 0x10(r1)
    bne lbl_fn_8028EDC4_00000CFC
    stw r31, 0x8a0(r30)
    addi r4, r1, 0x8
    li r0, 0x1
    addi r5, r30, 0x97c
    lbz r3, 0x97c(r30)
    stb r3, 0x97d(r30)
    psq_l f1, 0x0(r4), 0, 0
    stb r0, 0x97c(r30)
    lfs f0, lbl_80883A98
    psq_st f1, 0xc(r5), 0, 0
    stfs f2, 0x990(r30)
    stfs f0, 0x9a0(r30)
    b lbl_fn_8028EDC4_00000CE8
    b lbl_fn_8028EDC4_00000CEC
lbl_fn_8028EDC4_00000CE8:
    li r0, 0x0
lbl_fn_8028EDC4_00000CEC:
    stw r0, 0x4(r5)
    li r0, 0x1
    stw r0, 0x1540(r31)
    b lbl_fn_8028EDC4_00000D34
lbl_fn_8028EDC4_00000CFC:
    addi r4, r1, 0x8
    stw r31, 0x8a0(r30)
    addi r3, r30, 0x988
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x990(r30)
    b lbl_fn_8028EDC4_00000D34
lbl_fn_8028EDC4_00000D18:
    lwz r0, 0x1540(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8028EDC4_00000D34
    li r0, 0x0
    stw r0, 0x8a0(r30)
    stb r0, 0x97c(r30)
    stw r0, 0x1540(r3)
lbl_fn_8028EDC4_00000D34:
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8028EDC4_00000D60
    li r0, 0x0
    stw r0, 0x1974(r31)
    mr r3, r31
    bl fn_8028FC28
lbl_fn_8028EDC4_00000D60:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8028EF20(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lfs f0, lbl_80883B54
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    lfs f3, 0x2e4(r3)
    lwz r30, lbl_8087F430
    fcmpo cr0, f3, f0
    bge lbl_fn_8028EF20_00000E74
    lis r4, lbl_80745314@ha
    li r5, 0x0
    addi r4, r4, lbl_80745314@l
    addi r3, r3, 0xb0
    addi r4, r4, 0x344
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8028EF20_00000DDC
    li r3, 0x0
    b lbl_fn_8028EF20_00000DE8
lbl_fn_8028EF20_00000DDC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_8028EF20_00000DE8:
    lwz r0, 0x1540(r31)
    lfs f2, 0x2c(r3)
    lfs f0, 0x1c(r3)
    cmpwi r0, 0x0
    lfs f3, 0xc(r3)
    stfs f3, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f2, 0x28(r1)
    bne lbl_fn_8028EF20_00000E58
    stw r31, 0x8a0(r30)
    addi r4, r1, 0x20
    li r0, 0x1
    addi r5, r30, 0x97c
    lbz r3, 0x97c(r30)
    stb r3, 0x97d(r30)
    psq_l f1, 0x0(r4), 0, 0
    stb r0, 0x97c(r30)
    lfs f0, lbl_80883A98
    psq_st f1, 0xc(r5), 0, 0
    stfs f2, 0x990(r30)
    stfs f0, 0x9a0(r30)
    b lbl_fn_8028EF20_00000E44
    b lbl_fn_8028EF20_00000E48
lbl_fn_8028EF20_00000E44:
    li r0, 0x0
lbl_fn_8028EF20_00000E48:
    stw r0, 0x4(r5)
    li r0, 0x1
    stw r0, 0x1540(r31)
    b lbl_fn_8028EF20_00000E90
lbl_fn_8028EF20_00000E58:
    addi r4, r1, 0x20
    stw r31, 0x8a0(r30)
    addi r3, r30, 0x988
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x990(r30)
    b lbl_fn_8028EF20_00000E90
lbl_fn_8028EF20_00000E74:
    lwz r0, 0x1540(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8028EF20_00000E90
    li r0, 0x0
    stw r0, 0x8a0(r30)
    stb r0, 0x97c(r30)
    stw r0, 0x1540(r3)
lbl_fn_8028EF20_00000E90:
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8028EF20_00000F30
    li r30, 0x0
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883A98
    li r0, 0x6
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stfs f0, 0x1510(r31)
    stw r30, 0x15d4(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80883AA8
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883A98
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x2
    lfs f2, lbl_80883AA0
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, -0x2
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_8028EF20_00000F30:
    lfs f4, 0x2e4(r31)
    lfs f3, lbl_80883AD4
    fcmpo cr0, f4, f3
    cror eq, lt, eq
    bne lbl_fn_8028EF20_00000FA0
    lfs f4, 0x2e8(r31)
    lfs f0, lbl_80883AA8
    fdivs f8, f3, f4
    lfs f7, 0x1524(r31)
    lfs f6, 0x1520(r31)
    lfs f5, 0x151c(r31)
    lfs f4, 0x528(r31)
    lfs f3, 0x52c(r31)
    fdivs f8, f0, f8
    lfs f0, 0x530(r31)
    fmuls f7, f7, f8
    fmuls f6, f6, f8
    fmuls f5, f5, f8
    stfs f7, 0x1c(r1)
    fadds f0, f0, f7
    fadds f3, f3, f6
    stfs f5, 0x14(r1)
    fadds f4, f4, f5
    stfs f6, 0x18(r1)
    stfs f4, 0x528(r31)
    stfs f3, 0x52c(r31)
    stfs f0, 0x530(r31)
    b lbl_fn_8028EF20_00001010
lbl_fn_8028EF20_00000FA0:
    fcmpo cr0, f3, f4
    bge lbl_fn_8028EF20_00001010
    lfs f0, lbl_80883B70
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8028EF20_00001010
    lfs f4, 0x2e8(r31)
    lfs f0, lbl_80883AA8
    fdivs f8, f3, f4
    lfs f7, 0x1524(r31)
    lfs f6, 0x1520(r31)
    lfs f5, 0x151c(r31)
    lfs f4, 0x528(r31)
    lfs f3, 0x52c(r31)
    fdivs f8, f0, f8
    lfs f0, 0x530(r31)
    fmuls f7, f7, f8
    fmuls f6, f6, f8
    fmuls f5, f5, f8
    stfs f7, 0x10(r1)
    fsubs f0, f0, f7
    fsubs f3, f3, f6
    stfs f5, 0x8(r1)
    fsubs f4, f4, f5
    stfs f6, 0xc(r1)
    stfs f4, 0x528(r31)
    stfs f3, 0x52c(r31)
    stfs f0, 0x530(r31)
lbl_fn_8028EF20_00001010:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8028F1D0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    lwz r0, 0x14b4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8028F1D0_00001120
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    ble lbl_fn_8028F1D0_000012EC
    lfs f0, lbl_80883AA8
    li r30, 0x1
    stw r30, 0x14b4(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883A98
    li r4, 0x0
    stw r30, 0x3fc(r31)
    li r5, 0x14f
    lfs f2, lbl_80883AA0
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    mr r3, r31
    li r4, 0x3e8
    bl fn_80232B7C
    lfs f0, lbl_80883A98
    li r0, -0x1
    lfs f1, lbl_80883AA8
    addi r4, r31, 0x155c
    stfs f0, 0x1c(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    stfs f0, 0x20(r1)
    addi r9, r1, 0x28
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x24(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_8028F1D0_000012EC
lbl_fn_8028F1D0_00001120:
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    ble lbl_fn_8028F1D0_000011BC
    li r30, 0x0
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883A98
    li r0, 0x6
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stfs f0, 0x1510(r31)
    stw r30, 0x15d4(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80883AA8
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883A98
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x2
    lfs f2, lbl_80883AA0
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, -0x2
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_8028F1D0_000011BC:
    lfs f1, 0x2e4(r31)
    lfs f0, lbl_80883AEC
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_8028F1D0_0000122C
    lfs f0, lbl_80883B44
    fcmpo cr0, f1, f0
    bge lbl_fn_8028F1D0_0000122C
    lwz r0, 0x154c(r31)
    lfs f0, lbl_80883AA8
    cmpwi r0, 0x0
    stfs f0, 0x2e8(r31)
    bne lbl_fn_8028F1D0_00001244
    li r3, 0x1
    li r0, 0x0
    stw r3, 0x154c(r31)
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    stw r0, 0x1548(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lfs f0, lbl_80883A98
    stfs f0, 0x15b4(r31)
    lwz r3, lbl_8087F8A0
    lwz r0, 0x48(r3)
    stw r0, 0x15b0(r31)
    b lbl_fn_8028F1D0_00001244
lbl_fn_8028F1D0_0000122C:
    lwz r0, 0x154c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8028F1D0_00001244
    li r0, 0x0
    stw r0, 0x154c(r31)
    stw r0, 0x1548(r31)
lbl_fn_8028F1D0_00001244:
    lwz r0, 0x154c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8028F1D0_000012EC
    lwz r3, 0x1548(r31)
    addi r3, r3, 0x1
    stw r3, 0x1548(r31)
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add. r0, r0, r3
    bne lbl_fn_8028F1D0_000012BC
    lwz r4, 0x15b0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8028F1D0_000012BC
    lfs f1, 0x15b4(r31)
    mr r3, r31
    bl fn_8029101C
    lwz r3, 0x15b0(r31)
    lwz r0, 0x14ac(r3)
    stw r0, 0x15b0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8028F1D0_000012AC
    lwz r3, lbl_8087F8A0
    lwz r0, 0x48(r3)
    stw r0, 0x15b0(r31)
lbl_fn_8028F1D0_000012AC:
    lfs f1, 0x15b4(r31)
    lfs f0, lbl_80883BC8
    fadds f0, f1, f0
    stfs f0, 0x15b4(r31)
lbl_fn_8028F1D0_000012BC:
    lwz r5, lbl_8087F430
    li r0, 0x1
    lfs f0, lbl_80883AA0
    lwz r3, 0x96c(r5)
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    subf r3, r4, r3
    stw r3, 0x96c(r5)
    stw r0, 0x970(r5)
    stfs f0, 0x974(r5)
    stfs f0, 0x978(r5)
lbl_fn_8028F1D0_000012EC:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8028F4AC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x14b4(r3)
    stw r31, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883A98
    li r0, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stfs f0, 0x1510(r30)
    stw r31, 0x15d4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f0, lbl_80883AA8
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883A98
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x2
    lfs f2, lbl_80883AA0
    li r6, 0x1
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, -0x2
    li r6, 0x1
    bl fn_80239DAC
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8028F560(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    li r31, 0x0
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    mr r29, r3
    stw r31, 0x14b4(r3)
    stw r31, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883A98
    li r0, 0x7
    stw r3, 0x590(r29)
    mr r3, r29
    li r4, 0x3
    stfs f0, 0x1510(r29)
    stw r31, 0x15d4(r29)
    stw r0, 0x58c(r29)
    bl fn_8016E970
    lfs f0, lbl_80883AA8
    li r0, 0x1
    stw r0, 0x3fc(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_80883A98
    li r4, 0x0
    stfs f0, 0x2fc(r29)
    li r5, 0x142
    lfs f2, lbl_80883AA0
    li r6, 0x0
    stfs f0, 0x2e8(r29)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r4, lbl_8087F430
    mr r3, r29
    lwz r30, 0x10d8(r4)
    bl fn_80179D44
    lwz r4, 0x152c(r29)
    mr r5, r3
    lfs f1, lbl_80883AC0
    mr r3, r30
    addi r4, r4, 0x4
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    bl fn_803C1560
    stw r3, 0x1504(r29)
    mr r3, r29
    lwz r4, lbl_8087F430
    lwz r30, 0x10d8(r4)
    bl fn_80179D44
    lwz r4, 0x152c(r29)
    mr r5, r3
    lfs f1, lbl_80883AC0
    mr r3, r30
    addi r4, r4, 0x4
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    bl fn_803C1560
    stw r3, 0x1508(r29)
    addi r31, r1, 0x5c
    lwz r5, 0x152c(r29)
    addi r7, r1, 0x74
    lfs f4, 0x530(r29)
    addi r6, r29, 0x151c
    lfs f3, 0xc(r5)
    addi r8, r1, 0x50
    lfs f0, 0x1980(r29)
    mr r3, r31
    fsubs f6, f3, f4
    lfs f3, 0x8(r5)
    fsubs f8, f0, f4
    lfs f5, 0x52c(r29)
    lfs f0, 0x197c(r29)
    mr r4, r31
    fsubs f7, f3, f5
    lfs f4, 0x4(r5)
    fsubs f5, f0, f5
    lfs f3, 0x528(r29)
    lfs f0, 0x1978(r29)
    fmr f2, f6
    fsubs f4, f4, f3
    stfs f2, 0x1524(r29)
    fsubs f0, f0, f3
    stfs f4, 0x74(r1)
    fmr f2, f8
    stfs f7, 0x78(r1)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f0, 0x50(r1)
    stfs f5, 0x54(r1)
    psq_l f1, 0x0(r8), 0, 0
    stfs f6, 0x7c(r1)
    stfs f8, 0x58(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F98D0
    lfs f2, 0x64(r1)
    addi r30, r1, 0x68
    psq_l f1, 0x0(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883AB0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x70(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8028F560_000015AC
    lfs f3, 0x68(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_8028F560_000015A0
    lfs f0, lbl_80883AB4
    b lbl_fn_8028F560_000015A4
lbl_fn_8028F560_000015A0:
    lfs f0, lbl_80883AB8
lbl_fn_8028F560_000015A4:
    stfs f0, 0x48(r1)
    b lbl_fn_8028F560_000015C0
lbl_fn_8028F560_000015AC:
    frsp f2, f2
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8028F560_000015C0:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883A98
    addi r4, r1, 0x38
    lfs f30, 0x88(r1)
    mr r5, r4
    lfs f31, 0x84(r1)
    addi r3, r1, 0xb0
    lfs f13, 0x80(r1)
    lfs f12, 0x98(r1)
    lfs f11, 0x94(r1)
    lfs f10, 0x90(r1)
    lfs f9, 0xa8(r1)
    lfs f8, 0xa4(r1)
    lfs f7, 0xa0(r1)
    lfs f6, 0xac(r1)
    lfs f5, 0x9c(r1)
    lfs f4, 0x8c(r1)
    lfs f0, lbl_80883AA8
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x70(r1)
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f3, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xb0(r1)
    stfs f31, 0xb4(r1)
    stfs f30, 0xb8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xc0(r1)
    stfs f11, 0xc4(r1)
    stfs f12, 0xc8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xd0(r1)
    stfs f8, 0xd4(r1)
    stfs f9, 0xd8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xcc(r1)
    stfs f6, 0xdc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883AB0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8028F560_000016DC
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_8028F560_000016CC
    lfs f0, lbl_80883AB4
    b lbl_fn_8028F560_000016D0
lbl_fn_8028F560_000016CC:
    lfs f0, lbl_80883AB8
lbl_fn_8028F560_000016D0:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8028F560_000016F0
lbl_fn_8028F560_000016DC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8028F560_000016F0:
    addi r3, r1, 0x44
    lfs f2, lbl_80883A98
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, lbl_80883AB8
    lfs f3, 0x6c(r1)
    stfs f3, 0x538(r29)
    stfs f0, 0x1528(r29)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    lwz r0, 0x124(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8028F8E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x9
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0x58c(r3)
    stw r31, 0x14b4(r3)
    stw r31, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883A98
    li r4, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    stfs f0, 0x1510(r30)
    stw r31, 0x15d4(r30)
    bl fn_8016E970
    li r0, 0x1d
    stw r0, 0x560(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883AA8
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883A98
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x66
    lfs f2, lbl_80883AA0
    li r6, 0x1
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8028F998(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0xa
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0x58c(r3)
    stw r31, 0x14b4(r3)
    stw r31, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883A98
    li r4, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    stfs f0, 0x1510(r30)
    stw r31, 0x15d4(r30)
    bl fn_8016E970
    li r0, 0x1d
    stw r0, 0x560(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883AA8
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883A98
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x66
    lfs f2, lbl_80883AA0
    li r6, 0x1
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r0, 0x14d0(r30)
    stw r0, 0x15d0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8028F998_000018A8
    stw r0, 0x638(r30)
lbl_fn_8028F998_000018A8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8028FA60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0xb
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0x58c(r3)
    stw r31, 0x14b4(r3)
    stw r31, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883A98
    li r4, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    stfs f0, 0x1510(r30)
    stw r31, 0x15d4(r30)
    bl fn_8016E970
    li r0, 0x1d
    stw r0, 0x560(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f1, lbl_80883AA8
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f2, lbl_80883AA0
    li r4, 0x0
    stw r31, 0x14b4(r30)
    li r5, 0x14a
    li r6, 0x0
    li r7, 0x0
    stw r0, 0x3fc(r30)
    li r8, 0x1
    stfs f1, 0x2fc(r30)
    stfs f1, 0x2e8(r30)
    bl fn_80097C08
    mr r3, r30
    bl fn_80292DB4
    lwz r0, 0x14cc(r30)
    stw r0, 0x15d0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8028FA60_00001978
    stw r0, 0x638(r30)
lbl_fn_8028FA60_00001978:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
