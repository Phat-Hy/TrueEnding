#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8000D0F8(void);
extern void fn_8000D124(void);
extern void fn_800132EC(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800D246C(void);
extern void fn_800F8548(void);
extern void fn_80133130(void);
extern void fn_8013322C(void);
extern void fn_80145334(void);
extern void fn_80148990(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_80151448(void);
extern void fn_80168E60(void);
extern void fn_8016E970(void);
extern void fn_80179D44(void);
extern void fn_80219E6C(void);
extern void fn_802376D0(void);
extern void fn_80239DAC(void);
extern void fn_8028ADF4(void);
extern void fn_8028B47C(void);
extern void fn_8028B75C(void);
extern void fn_8028BFE0(void);
extern void fn_8028C834(void);
extern void fn_8028CB38(void);
extern void fn_8028CFE0(void);
extern void fn_8028D5C8(void);
extern void fn_8028DF34(void);
extern void fn_8028E1A0(void);
extern void fn_8028E488(void);
extern void fn_8028E800(void);
extern void fn_8028EDC4(void);
extern void fn_8028EF20(void);
extern void fn_8028F1D0(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_803C1560(void);
extern void fn_8059B670(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);
extern void fn_80695720(void);

/* External data declarations */
extern u8 jumptable_807857A0[];
extern u8 lbl_807452F0[];
extern u8 lbl_807452F8[];
extern u8 lbl_80745314[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D9E0;
extern u32 lbl_8087D9E4;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F9E8;
extern u32 lbl_80883A98;
extern u32 lbl_80883AA0;
extern u32 lbl_80883AA8;
extern u32 lbl_80883AB0;
extern u32 lbl_80883AB4;
extern u32 lbl_80883AB8;
extern u32 lbl_80883ABC;
extern u32 lbl_80883AC0;
extern u32 lbl_80883AC4;
extern u32 lbl_80883AC8;
extern u32 lbl_80883ACC;
extern u32 lbl_80883AD0;
extern u32 lbl_80883AD4;
extern u32 lbl_80883AD8;
extern u32 lbl_80883ADC;
extern u32 lbl_80883AE0;
extern u32 lbl_80883AE4;
extern u32 lbl_80883AE8;
extern u32 lbl_80883AEC;
extern u32 lbl_80883AF0;
extern u32 lbl_80883AF4;
extern u32 lbl_80883AF8;
extern u32 lbl_80883AFC;
extern u32 lbl_80883B00;
extern u32 lbl_80883B04;
extern u32 lbl_80883B08;
extern u32 lbl_80883B0C;
extern u32 lbl_80883B10;
extern u32 lbl_80883B14;

/* Function declarations */
void fn_80288DD8(void);
void fn_80288E30(void);
void fn_80288E38(void);
void fn_80289974(void);
void fn_80289978(void);
void fn_80289C98(void);
void fn_80289F98(void);
void fn_8028A024(void);
void fn_8028A1F8(void);
void fn_8028A5D4(void);

asm void fn_80288DD8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_80288DD8_00000038
    addi r3, r30, 0xc
    bl fn_802376D0
    cmpwi r3, 0x0
    beq lbl_fn_80288DD8_0000003C
lbl_fn_80288DD8_00000038:
    li r31, 0x1
lbl_fn_80288DD8_0000003C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80288E30(void)
{
    nofralloc
    stfs f1, 0x56c(r3)
    blr
}

asm void fn_80288E38(void)
{
    nofralloc
    stwu r1, -0x310(r1)
    mflr r0
    stw r0, 0x314(r1)
    stfd f31, 0x300(r1)
    psq_st f31, 0x308(r1), 0, 0
    stfd f30, 0x2f0(r1)
    psq_st f30, 0x2f8(r1), 0, 0
    stw r31, 0x2ec(r1)
    mr r31, r3
    stw r30, 0x2e8(r1)
    stw r29, 0x2e4(r1)
    bl fn_8028ADF4
    lwz r0, 0xd18(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80288E38_000000AC
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_80288E38_00000B60
lbl_fn_80288E38_000000AC:
    lwz r3, 0x1630(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80288E38_000000D8
    li r4, 0x1
    bl fn_800D246C
    lwz r3, 0x1630(r31)
    bl fn_80145334
    lwz r3, 0x1630(r31)
    lwz r0, 0x5c0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r3)
lbl_fn_80288E38_000000D8:
    lwz r4, 0x14b0(r31)
    lwz r3, 0x14b8(r31)
    cmpwi r4, 0x0
    addi r0, r3, 0x1
    stw r0, 0x14b8(r31)
    beq lbl_fn_80288E38_00000B60
    lwz r3, 0x58c(r31)
    subi r0, r3, 0x7
    cmplwi r0, 0xe
    bgt lbl_fn_80288E38_00000920
    lis r3, jumptable_807857A0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807857A0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r31
    bl fn_8028BFE0
    b lbl_fn_80288E38_00000B60
    mr r3, r31
    bl fn_8028C834
    b lbl_fn_80288E38_00000B60
    mr r3, r31
    bl fn_8028CB38
    b lbl_fn_80288E38_00000B60
    mr r3, r31
    bl fn_8028F1D0
    b lbl_fn_80288E38_00000B60
    mr r3, r31
    bl fn_8028CFE0
    b lbl_fn_80288E38_00000B60
    mr r3, r31
    bl fn_8028D5C8
    b lbl_fn_80288E38_00000B60
    mr r3, r31
    bl fn_8028DF34
    b lbl_fn_80288E38_00000B60
    mr r3, r31
    bl fn_8028E1A0
    lwz r3, 0x153c(r31)
    addi r0, r3, 0x1
    stw r0, 0x153c(r31)
    b lbl_fn_80288E38_00000B60
    mr r3, r31
    bl fn_8028E488
    lwz r3, 0x153c(r31)
    addi r0, r3, 0x1
    stw r0, 0x153c(r31)
    b lbl_fn_80288E38_00000B60
    lfs f2, 0x530(r4)
    addi r3, r1, 0xf8
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x530(r31)
    lfs f3, 0xf8(r1)
    fsubs f6, f2, f0
    lfs f0, 0x528(r31)
    lfs f4, 0xfc(r1)
    fsubs f5, f3, f0
    lfs f3, 0x52c(r31)
    fmuls f0, f6, f6
    fsubs f3, f4, f3
    stfs f2, 0x100(r1)
    fmadds f1, f5, f5, f0
    stfs f5, 0x104(r1)
    stfs f3, 0x108(r1)
    stfs f6, 0x10c(r1)
    bl fn_8068B100
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80288E38_00000574
    lwz r4, 0x940(r31)
    lis r0, 0x4330
    stw r0, 0x2d0(r1)
    lis r3, lbl_807452F8@ha
    xoris r0, r4, 0x8000
    lfd f5, lbl_807452F8@l(r3)
    stw r0, 0x2d4(r1)
    lfs f3, 0x7d8(r31)
    lfd f4, 0x2d0(r1)
    lfs f0, lbl_80883ABC
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fcmpo cr0, f3, f0
    bge lbl_fn_80288E38_0000023C
    li r0, 0x4
    stw r0, 0x14c0(r31)
    b lbl_fn_80288E38_00000244
lbl_fn_80288E38_0000023C:
    li r0, 0x0
    stw r0, 0x14c0(r31)
lbl_fn_80288E38_00000244:
    li r30, 0x0
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
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
    lwz r29, 0x10d8(r4)
    bl fn_80179D44
    lfs f1, lbl_80883AC0
    mr r5, r3
    mr r3, r29
    addi r4, r31, 0x528
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_803C1560
    subi r0, r3, 0x1
    lwz r3, 0x9c(r29)
    mulli r0, r0, 0x30
    lfs f3, 0x530(r31)
    lfs f4, 0x52c(r31)
    addi r5, r1, 0x170
    lfs f0, 0x528(r31)
    addi r4, r31, 0x151c
    add r6, r3, r0
    lfs f7, 0x1980(r31)
    lfs f6, 0xc(r6)
    addi r3, r1, 0x158
    lfs f5, 0x8(r6)
    addi r30, r1, 0x164
    fsubs f2, f6, f3
    lfs f3, 0x4(r6)
    fsubs f5, f5, f4
    lfs f4, 0x1978(r31)
    fsubs f0, f3, f0
    stfs f2, 0x1524(r31)
    stfs f0, 0x170(r1)
    lfs f6, 0x197c(r31)
    stfs f5, 0x174(r1)
    lfs f0, lbl_80883AB0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f3, 0xc(r6)
    lfs f5, 0x8(r6)
    fsubs f7, f7, f3
    lfs f3, 0x4(r6)
    stfs f2, 0x178(r1)
    fsubs f5, f6, f5
    fsubs f3, f4, f3
    fmr f2, f7
    stfs f3, 0x158(r1)
    frsp f3, f2
    stfs f5, 0x15c(r1)
    psq_l f1, 0x0(r3), 0, 0
    fabs f4, f3
    stfs f7, 0x160(r1)
    psq_st f1, 0x0(r30), 0, 0
    frsp f4, f4
    stfs f2, 0x16c(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_80288E38_000003C0
    lfs f3, 0x164(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_80288E38_000003B4
    lfs f0, lbl_80883AB4
    b lbl_fn_80288E38_000003B8
lbl_fn_80288E38_000003B4:
    lfs f0, lbl_80883AB8
lbl_fn_80288E38_000003B8:
    stfs f0, 0x150(r1)
    b lbl_fn_80288E38_000003D4
lbl_fn_80288E38_000003C0:
    fmr f2, f3
    lfs f1, 0x164(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x150(r1)
lbl_fn_80288E38_000003D4:
    lfs f0, 0x150(r1)
    addi r3, r1, 0x260
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883A98
    addi r4, r1, 0x140
    lfs f30, 0x268(r1)
    mr r5, r4
    lfs f31, 0x264(r1)
    addi r3, r1, 0x290
    lfs f13, 0x260(r1)
    lfs f12, 0x278(r1)
    lfs f11, 0x274(r1)
    lfs f10, 0x270(r1)
    lfs f9, 0x288(r1)
    lfs f8, 0x284(r1)
    lfs f7, 0x280(r1)
    lfs f6, 0x28c(r1)
    lfs f5, 0x27c(r1)
    lfs f4, 0x26c(r1)
    lfs f0, lbl_80883AA8
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x16c(r1)
    stfs f3, 0x2c0(r1)
    stfs f3, 0x2c4(r1)
    stfs f3, 0x2c8(r1)
    stfs f0, 0x2cc(r1)
    stfs f13, 0x110(r1)
    stfs f31, 0x114(r1)
    stfs f30, 0x118(r1)
    stfs f13, 0x290(r1)
    stfs f31, 0x294(r1)
    stfs f30, 0x298(r1)
    stfs f10, 0x11c(r1)
    stfs f11, 0x120(r1)
    stfs f12, 0x124(r1)
    stfs f10, 0x2a0(r1)
    stfs f11, 0x2a4(r1)
    stfs f12, 0x2a8(r1)
    stfs f7, 0x128(r1)
    stfs f8, 0x12c(r1)
    stfs f9, 0x130(r1)
    stfs f7, 0x2b0(r1)
    stfs f8, 0x2b4(r1)
    stfs f9, 0x2b8(r1)
    stfs f4, 0x134(r1)
    stfs f5, 0x138(r1)
    stfs f6, 0x13c(r1)
    stfs f4, 0x29c(r1)
    stfs f5, 0x2ac(r1)
    stfs f6, 0x2bc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x148(r1)
    bl fn_805F9750
    lfs f2, 0x148(r1)
    lfs f0, lbl_80883AB0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80288E38_000004F0
    lfs f3, 0x144(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_80288E38_000004E0
    lfs f0, lbl_80883AB4
    b lbl_fn_80288E38_000004E4
lbl_fn_80288E38_000004E0:
    lfs f0, lbl_80883AB8
lbl_fn_80288E38_000004E4:
    fneg f0, f0
    stfs f0, 0x14c(r1)
    b lbl_fn_80288E38_00000504
lbl_fn_80288E38_000004F0:
    lfs f1, 0x144(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x14c(r1)
lbl_fn_80288E38_00000504:
    addi r3, r1, 0x14c
    lfs f4, lbl_80883A98
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_807452F0@ha
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f4
    lfs f0, 0x538(r31)
    lfs f3, 0x168(r1)
    stfs f2, 0x16c(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_807452F0@l(r3)
    stfs f4, 0x154(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80883AC4
    fcmpo cr0, f3, f0
    ble lbl_fn_80288E38_00000550
    lfs f0, lbl_80883AC8
    fsubs f3, f3, f0
lbl_fn_80288E38_00000550:
    lfs f0, lbl_80883ACC
    fcmpo cr0, f3, f0
    bge lbl_fn_80288E38_00000564
    lfs f0, lbl_80883AC8
    fadds f3, f3, f0
lbl_fn_80288E38_00000564:
    li r0, 0x0
    stfs f3, 0x1528(r31)
    stw r0, 0x153c(r31)
    b lbl_fn_80288E38_00000580
lbl_fn_80288E38_00000574:
    mr r3, r31
    li r4, 0x1
    bl fn_8028B75C
lbl_fn_80288E38_00000580:
    lwz r3, 0x153c(r31)
    addi r0, r3, 0x1
    stw r0, 0x153c(r31)
    b lbl_fn_80288E38_00000B60
    lfs f3, lbl_80883AD0
    lfs f4, 0x2e4(r31)
    lfs f12, lbl_80883AD4
    fcmpo cr0, f4, f3
    cror eq, gt, eq
    bne lbl_fn_80288E38_00000644
    fadds f0, f3, f12
    fcmpo cr0, f4, f0
    bge lbl_fn_80288E38_00000644
    lfs f0, lbl_80883AA8
    lfs f3, 0x1528(r31)
    fdivs f7, f0, f12
    lfs f5, 0x1524(r31)
    lfs f4, 0x1520(r31)
    lwz r3, lbl_8087EFA8
    lfs f0, 0x151c(r31)
    lfs f13, 0x3a4(r3)
    fmuls f11, f5, f7
    lfs f6, 0x528(r31)
    fmuls f10, f4, f7
    lfs f5, 0x52c(r31)
    fmuls f7, f0, f7
    lfs f4, 0x530(r31)
    fmuls f9, f11, f13
    stfs f7, 0x80(r1)
    fmuls f8, f10, f13
    lfs f0, 0x538(r31)
    fmuls f7, f7, f13
    stfs f10, 0x84(r1)
    fadds f4, f4, f9
    stfs f11, 0x88(r1)
    fadds f5, f5, f8
    fadds f6, f6, f7
    stfs f4, 0x530(r31)
    fdivs f3, f3, f12
    stfs f5, 0x52c(r31)
    stfs f6, 0x528(r31)
    lwz r3, lbl_8087EFA8
    stfs f7, 0x74(r1)
    lfs f4, 0x3a4(r3)
    fmadds f0, f3, f4, f0
    stfs f8, 0x78(r1)
    stfs f9, 0x7c(r1)
    stfs f0, 0x538(r31)
    b lbl_fn_80288E38_00000854
lbl_fn_80288E38_00000644:
    fadds f0, f3, f12
    lfs f3, 0x2e4(r31)
    fcmpo cr0, f3, f0
    ble lbl_fn_80288E38_00000854
    lfs f3, 0x1980(r31)
    addi r29, r1, 0x98
    lfs f0, 0x530(r31)
    addi r5, r1, 0xa4
    lfs f5, 0x197c(r31)
    mr r3, r29
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x1978(r31)
    mr r4, r29
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xa8(r1)
    stfs f0, 0xa4(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0xac(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xa0(r1)
    bl fn_805F98D0
    lfs f2, 0xa0(r1)
    addi r30, r1, 0x8c
    psq_l f1, 0x0(r29), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883AB0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x94(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80288E38_000006F0
    lfs f3, 0x8c(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_80288E38_000006E4
    lfs f0, lbl_80883AB4
    b lbl_fn_80288E38_000006E8
lbl_fn_80288E38_000006E4:
    lfs f0, lbl_80883AB8
lbl_fn_80288E38_000006E8:
    stfs f0, 0xb4(r1)
    b lbl_fn_80288E38_00000704
lbl_fn_80288E38_000006F0:
    frsp f2, f2
    lfs f1, 0x8c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xb4(r1)
lbl_fn_80288E38_00000704:
    lfs f0, 0xb4(r1)
    addi r3, r1, 0x230
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883A98
    addi r4, r1, 0xbc
    lfs f4, 0x238(r1)
    mr r5, r4
    lfs f5, 0x234(r1)
    addi r3, r1, 0x1f0
    lfs f6, 0x230(r1)
    lfs f7, 0x248(r1)
    lfs f8, 0x244(r1)
    lfs f9, 0x240(r1)
    lfs f10, 0x258(r1)
    lfs f11, 0x254(r1)
    lfs f12, 0x250(r1)
    lfs f13, 0x25c(r1)
    lfs f30, 0x24c(r1)
    lfs f31, 0x23c(r1)
    lfs f0, lbl_80883AA8
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x94(r1)
    stfs f3, 0x220(r1)
    stfs f3, 0x224(r1)
    stfs f3, 0x228(r1)
    stfs f0, 0x22c(r1)
    stfs f6, 0xec(r1)
    stfs f5, 0xf0(r1)
    stfs f4, 0xf4(r1)
    stfs f6, 0x1f0(r1)
    stfs f5, 0x1f4(r1)
    stfs f4, 0x1f8(r1)
    stfs f9, 0xe0(r1)
    stfs f8, 0xe4(r1)
    stfs f7, 0xe8(r1)
    stfs f9, 0x200(r1)
    stfs f8, 0x204(r1)
    stfs f7, 0x208(r1)
    stfs f12, 0xd4(r1)
    stfs f11, 0xd8(r1)
    stfs f10, 0xdc(r1)
    stfs f12, 0x210(r1)
    stfs f11, 0x214(r1)
    stfs f10, 0x218(r1)
    stfs f31, 0xc8(r1)
    stfs f30, 0xcc(r1)
    stfs f13, 0xd0(r1)
    stfs f31, 0x1fc(r1)
    stfs f30, 0x20c(r1)
    stfs f13, 0x21c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xc4(r1)
    bl fn_805F9750
    lfs f2, 0xc4(r1)
    lfs f0, lbl_80883AB0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80288E38_00000820
    lfs f3, 0xc0(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_80288E38_00000810
    lfs f0, lbl_80883AB4
    b lbl_fn_80288E38_00000814
lbl_fn_80288E38_00000810:
    lfs f0, lbl_80883AB8
lbl_fn_80288E38_00000814:
    fneg f0, f0
    stfs f0, 0xb0(r1)
    b lbl_fn_80288E38_00000834
lbl_fn_80288E38_00000820:
    lfs f1, 0xc0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xb0(r1)
lbl_fn_80288E38_00000834:
    addi r3, r1, 0xb0
    lfs f2, lbl_80883A98
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0x90(r1)
    stfs f2, 0xb8(r1)
    stfs f2, 0x94(r1)
    stfs f0, 0x538(r31)
lbl_fn_80288E38_00000854:
    lfs f30, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80883AD8
    fsubs f0, f1, f0
    fcmpo cr0, f30, f0
    ble lbl_fn_80288E38_00000B60
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
    b lbl_fn_80288E38_00000B60
    mr r3, r31
    bl fn_8028E800
    b lbl_fn_80288E38_00000B60
    mr r3, r31
    bl fn_8028EDC4
    b lbl_fn_80288E38_00000B60
    mr r3, r31
    bl fn_8028EF20
    b lbl_fn_80288E38_00000B60
lbl_fn_80288E38_00000920:
    lfs f30, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80883AD8
    fsubs f0, f1, f0
    fcmpo cr0, f30, f0
    cror eq, gt, eq
    bne lbl_fn_80288E38_00000B4C
    lfs f3, 0x1980(r31)
    addi r30, r1, 0x14
    lfs f0, 0x530(r31)
    addi r5, r1, 0x20
    lfs f5, 0x197c(r31)
    mr r3, r30
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x1978(r31)
    mr r4, r30
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F98D0
    lfs f2, 0x1c(r1)
    addi r29, r1, 0x8
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883AB0
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x10(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80288E38_000009E0
    lfs f3, 0x8(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_80288E38_000009D4
    lfs f0, lbl_80883AB4
    b lbl_fn_80288E38_000009D8
lbl_fn_80288E38_000009D4:
    lfs f0, lbl_80883AB8
lbl_fn_80288E38_000009D8:
    stfs f0, 0x30(r1)
    b lbl_fn_80288E38_000009F4
lbl_fn_80288E38_000009E0:
    frsp f2, f2
    lfs f1, 0x8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x30(r1)
lbl_fn_80288E38_000009F4:
    lfs f0, 0x30(r1)
    addi r3, r1, 0x1c0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883A98
    addi r4, r1, 0x38
    lfs f4, 0x1c8(r1)
    mr r5, r4
    lfs f5, 0x1c4(r1)
    addi r3, r1, 0x180
    lfs f6, 0x1c0(r1)
    lfs f7, 0x1d8(r1)
    lfs f8, 0x1d4(r1)
    lfs f9, 0x1d0(r1)
    lfs f10, 0x1e8(r1)
    lfs f11, 0x1e4(r1)
    lfs f12, 0x1e0(r1)
    lfs f13, 0x1ec(r1)
    lfs f30, 0x1dc(r1)
    lfs f31, 0x1cc(r1)
    lfs f0, lbl_80883AA8
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x10(r1)
    stfs f3, 0x1b0(r1)
    stfs f3, 0x1b4(r1)
    stfs f3, 0x1b8(r1)
    stfs f0, 0x1bc(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f6, 0x180(r1)
    stfs f5, 0x184(r1)
    stfs f4, 0x188(r1)
    stfs f9, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f9, 0x190(r1)
    stfs f8, 0x194(r1)
    stfs f7, 0x198(r1)
    stfs f12, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f10, 0x58(r1)
    stfs f12, 0x1a0(r1)
    stfs f11, 0x1a4(r1)
    stfs f10, 0x1a8(r1)
    stfs f31, 0x44(r1)
    stfs f30, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f31, 0x18c(r1)
    stfs f30, 0x19c(r1)
    stfs f13, 0x1ac(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883AB0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80288E38_00000B10
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_80288E38_00000B00
    lfs f0, lbl_80883AB4
    b lbl_fn_80288E38_00000B04
lbl_fn_80288E38_00000B00:
    lfs f0, lbl_80883AB8
lbl_fn_80288E38_00000B04:
    fneg f0, f0
    stfs f0, 0x2c(r1)
    b lbl_fn_80288E38_00000B24
lbl_fn_80288E38_00000B10:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x2c(r1)
lbl_fn_80288E38_00000B24:
    addi r3, r1, 0x2c
    lfs f2, lbl_80883A98
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x1
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, 0xc(r1)
    stfs f2, 0x34(r1)
    stfs f2, 0x10(r1)
    stfs f0, 0x538(r31)
    b lbl_fn_80288E38_00000B50
lbl_fn_80288E38_00000B4C:
    li r0, 0x0
lbl_fn_80288E38_00000B50:
    cmpwi r0, 0x0
    beq lbl_fn_80288E38_00000B60
    mr r3, r31
    bl fn_8028B47C
lbl_fn_80288E38_00000B60:
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    lwz r0, 0x314(r1)
    psq_l f31, 0x308(r1), 0, 0
    lfd f31, 0x300(r1)
    psq_l f30, 0x2f8(r1), 0, 0
    lfd f30, 0x2f0(r1)
    lwz r31, 0x2ec(r1)
    lwz r30, 0x2e8(r1)
    lwz r29, 0x2e4(r1)
    mtlr r0
    addi r1, r1, 0x310
    blr
}

asm void fn_80289974(void)
{
    nofralloc
    b fn_80149A30
}

asm void fn_80289978(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f5, lbl_80883A98
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r4
    lfs f4, 0x10(r4)
    lfs f3, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f4, f4, f5
    lwz r0, 0x7e0(r3)
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x10(r4)
    extrwi r30, r0, 1, 29
    stfs f3, 0x14(r4)
    stfs f0, 0x18(r4)
    lwz r0, 0x14c8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80289978_00000C0C
    lwz r5, 0x8(r4)
    lwz r0, 0x14d8(r3)
    cmplw r5, r0
    bne lbl_fn_80289978_00000C1C
lbl_fn_80289978_00000C0C:
    li r0, 0x0
    stw r0, 0x68(r4)
    stw r0, 0x4c(r4)
    b lbl_fn_80289978_00000EA4
lbl_fn_80289978_00000C1C:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x12
    bne lbl_fn_80289978_00000C34
    lwz r0, 0xc(r4)
    ori r0, r0, 0x80
    stw r0, 0xc(r4)
lbl_fn_80289978_00000C34:
    mr r3, r31
    mr r4, r29
    bl fn_80151448
    lwz r12, 0x0(r31)
    mr r3, r31
    mr r4, r29
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r4, 0x58c(r31)
    cmpwi r4, 0x15
    beq lbl_fn_80289978_00000EA4
    lwz r3, 0x8(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80289978_00000EA4
    lwz r0, 0xac(r3)
    rlwinm r3, r0, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_80289978_00000DC8
    lwz r0, 0x14c0(r31)
    cmpwi r0, 0x3
    beq lbl_fn_80289978_00000C98
    li r0, 0x0
    b lbl_fn_80289978_00000CEC
lbl_fn_80289978_00000C98:
    cmpwi r4, 0xd
    bne lbl_fn_80289978_00000CA8
    li r0, 0x0
    b lbl_fn_80289978_00000CEC
lbl_fn_80289978_00000CA8:
    cmpwi r4, 0x13
    bne lbl_fn_80289978_00000CB8
    li r0, 0x0
    b lbl_fn_80289978_00000CEC
lbl_fn_80289978_00000CB8:
    cmpwi r4, 0xb
    bne lbl_fn_80289978_00000CE8
    lwz r0, 0x14b4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80289978_00000CE8
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883ADC
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80289978_00000CE8
    li r0, 0x0
    b lbl_fn_80289978_00000CEC
lbl_fn_80289978_00000CE8:
    li r0, 0x1
lbl_fn_80289978_00000CEC:
    cmpwi r0, 0x0
    beq lbl_fn_80289978_00000EA4
    li r30, 0x0
    li r0, 0x14
    stw r0, 0x58c(r31)
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883A98
    li r4, 0x6
    stw r3, 0x590(r31)
    mr r3, r31
    stfs f0, 0x1510(r31)
    stw r30, 0x15d4(r31)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f3, lbl_80883AA8
    li r0, 0x1
    lfs f0, lbl_80883AE0
    li r4, 0x0
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883A98
    li r5, 0x37
    stw r0, 0x3fc(r31)
    li r6, 0x0
    lfs f2, lbl_80883AA0
    li r7, 0x0
    stfs f3, 0x2fc(r31)
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lfs f2, lbl_80883A98
    addi r3, r1, 0x8
    lfs f0, lbl_80883AE4
    addi r7, r31, 0x151c
    stfs f2, 0x8(r1)
    mr r4, r31
    li r5, -0x2
    li r6, 0x1
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    stw r30, 0x14b4(r31)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x1524(r31)
    stfs f2, 0x1528(r31)
    stw r30, 0x1974(r31)
    stfs f2, 0x10(r1)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    b lbl_fn_80289978_00000EA4
lbl_fn_80289978_00000DC8:
    cmpwi r30, 0x0
    bne lbl_fn_80289978_00000EA4
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80289978_00000EA4
    li r30, 0x0
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883A98
    li r0, 0x13
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
    li r5, 0x37
    lfs f2, lbl_80883AA0
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, -0x2
    li r6, 0x1
    bl fn_80239DAC
    addi r3, r31, 0x7d4
    li r4, 0x4
    li r5, 0x258
    li r6, 0x0
    bl fn_80133130
    li r0, 0x3
    stw r0, 0x14c0(r31)
    li r4, 0xe6
    lwz r3, lbl_8087F430
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_80289978_00000EA4
    lwz r3, lbl_8087F430
    li r4, 0xe6
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_80289978_00000EA4:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80289C98(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r5, lbl_807452F8@ha
    lfs f0, lbl_80883AA0
    stw r0, 0x74(r1)
    lis r0, 0x4330
    lfd f5, lbl_807452F8@l(r5)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r4
    stw r29, 0x64(r1)
    mr r29, r3
    lwz r6, 0x940(r3)
    stw r0, 0x58(r1)
    xoris r0, r6, 0x8000
    lfs f3, 0x7d8(r3)
    stw r0, 0x5c(r1)
    lfd f4, 0x58(r1)
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fcmpo cr0, f3, f0
    bge lbl_fn_80289C98_00000F50
    lwz r0, 0x14c8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80289C98_00000F50
    lwz r4, 0x7e0(r3)
    li r0, 0x1
    stw r0, 0x14c8(r3)
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80289C98_00000F50
    li r4, 0x4
    addi r3, r3, 0x7d4
    bl fn_8013322C
    mr r3, r29
    bl fn_80168E60
lbl_fn_80289C98_00000F50:
    lwz r3, 0x58c(r29)
    subi r0, r3, 0x6
    cmplwi r0, 0x6
    bgt lbl_fn_80289C98_000011A4
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80289C98_000011A4
    lwz r0, 0x44(r30)
    cmpwi r0, 0x2
    bne lbl_fn_80289C98_000011A4
    lwz r3, 0x6c(r3)
    bl fn_80219E6C
    lwz r4, 0x0(r30)
    mr r31, r3
    cmpwi r4, 0x0
    beq lbl_fn_80289C98_000011A4
    cmpwi r3, 0x0
    beq lbl_fn_80289C98_000011A4
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80289C98_000011A4
    lbz r0, 0x2(r3)
    cmpwi r0, 0x7
    beq lbl_fn_80289C98_000011A4
    lwz r0, 0x94(r30)
    lfs f0, lbl_80883AE0
    oris r0, r0, 0x2000
    stw r0, 0x94(r30)
    lfs f4, 0x530(r4)
    lfs f6, 0x530(r29)
    lfs f3, 0x52c(r4)
    fsubs f7, f4, f6
    lfs f5, 0x52c(r29)
    lfs f4, 0x528(r4)
    fsubs f8, f3, f5
    lfs f3, 0x528(r29)
    fmuls f9, f7, f0
    fsubs f4, f4, f3
    stfs f8, 0x18(r1)
    fmuls f8, f8, f0
    fadds f6, f6, f9
    stfs f4, 0x14(r1)
    fmuls f0, f4, f0
    fadds f5, f5, f8
    stfs f6, 0x40(r1)
    fadds f10, f3, f0
    stfs f5, 0x3c(r1)
    stfs f10, 0x38(r1)
    lwz r4, 0x1500(r29)
    stfs f7, 0x1c(r1)
    cmpwi r4, 0x0
    stfs f0, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    beq lbl_fn_80289C98_00001138
    lfs f4, 0xc(r4)
    addi r3, r1, 0x2c
    lfs f3, 0x8(r4)
    lfs f0, 0x4(r4)
    fsubs f4, f6, f4
    fsubs f3, f5, f3
    fsubs f0, f10, f0
    stfs f4, 0x34(r1)
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    bl fn_805F9940
    lfs f0, lbl_80883AE8
    fcmpo cr0, f1, f0
    ble lbl_fn_80289C98_00001138
    addi r3, r1, 0x2c
    mr r4, r3
    bl fn_805F98D0
    bl fn_80680CF8
    lis r4, 0x4178
    lis r0, 0x4330
    addi r5, r4, 0x749f
    stw r0, 0x58(r1)
    mulhw r5, r5, r3
    lis r4, lbl_807452F8@ha
    lfd f10, lbl_807452F8@l(r4)
    addi r7, r1, 0x8
    lfs f8, lbl_80883AF0
    addi r6, r1, 0x38
    srawi r0, r5, 8
    lfs f7, lbl_80883AD4
    srwi r4, r0, 31
    lfs f6, lbl_80883AEC
    add r0, r0, r4
    lfs f5, 0x2c(r1)
    mulli r0, r0, 0x3e9
    lfs f4, 0x30(r1)
    lfs f3, 0x34(r1)
    lfs f0, lbl_80883AE8
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x5c(r1)
    lfd f9, 0x58(r1)
    fsubs f9, f9, f10
    fdivs f8, f9, f8
    fmadds f8, f7, f8, f6
    fmuls f7, f5, f8
    fmuls f6, f4, f8
    fmuls f5, f3, f8
    stfs f7, 0x2c(r1)
    stfs f6, 0x30(r1)
    stfs f5, 0x34(r1)
    lwz r3, 0x1500(r29)
    lfs f4, 0x8(r3)
    lfs f3, 0x4(r3)
    fadds f6, f4, f6
    lfs f4, 0xc(r3)
    fadds f3, f3, f7
    stfs f6, 0xc(r1)
    fadds f2, f4, f5
    stfs f3, 0x8(r1)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f3, 0x3c(r1)
    stfs f2, 0x10(r1)
    fadds f0, f3, f0
    stfs f2, 0x40(r1)
    stfs f0, 0x3c(r1)
lbl_fn_80289C98_00001138:
    li r0, 0x0
    stw r0, 0x44(r1)
    lis r8, lbl_807C7030@ha
    lwz r3, lbl_8087F9E8
    lwz r5, 0x0(r30)
    mr r4, r31
    lfs f1, lbl_80883AA8
    addi r7, r1, 0x38
    addi r8, r8, lbl_807C7030@l
    addi r9, r1, 0x44
    li r6, 0x0
    bl fn_8059B670
    addic. r3, r1, 0x44
    beq lbl_fn_80289C98_000011A4
    lwz r4, 0x44(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80289C98_000011A4
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80289C98_0000119C
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80289C98_0000119C:
    li r0, 0x0
    stw r0, 0x44(r1)
lbl_fn_80289C98_000011A4:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80289F98(void)
{
    nofralloc
    lwz r4, 0x58c(r3)
    cmpwi r4, 0xb
    bne lbl_fn_80289F98_00001204
    lwz r0, 0x14b4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80289F98_00001204
    lfs f1, 0x2e4(r3)
    lfs f0, lbl_80883AF4
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_80289F98_00001244
    lfs f0, lbl_80883AF8
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80289F98_00001244
    li r3, 0x1
    blr
lbl_fn_80289F98_00001204:
    cmpwi r4, 0x9
    bne lbl_fn_80289F98_00001244
    lwz r0, 0x14b4(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80289F98_00001244
    lfs f1, 0x2e4(r3)
    lfs f0, lbl_80883AFC
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_80289F98_00001244
    lfs f0, lbl_80883B00
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80289F98_00001244
    li r3, 0x1
    blr
lbl_fn_80289F98_00001244:
    li r3, 0x0
    blr
}

asm void fn_8028A024(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    mr r30, r3
    addi r3, r1, 0x5c
    bl fn_80148990
    lfs f0, lbl_80883B04
    lis r31, lbl_80745314@ha
    addi r31, r31, lbl_80745314@l
    stfs f0, 0x6c(r1)
    addi r3, r30, 0xb0
    addi r4, r31, 0x2fc
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x50
    bl fn_8000D0F8
    addi r3, r1, 0x60
    addi r4, r1, 0x50
    bl fn_8000D124
    addi r3, r30, 0x624
    addi r4, r1, 0x5c
    bl fn_8028A1F8
    lfs f0, lbl_80883B08
    addi r3, r30, 0xb0
    stfs f0, 0x6c(r1)
    addi r4, r31, 0x301
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x44
    bl fn_8000D0F8
    addi r3, r1, 0x60
    addi r4, r1, 0x44
    bl fn_8000D124
    addi r3, r30, 0x624
    addi r4, r1, 0x5c
    bl fn_8028A1F8
    lfs f0, lbl_80883B04
    addi r3, r30, 0xb0
    stfs f0, 0x6c(r1)
    addi r4, r31, 0x306
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x38
    bl fn_8000D0F8
    addi r3, r1, 0x60
    addi r4, r1, 0x38
    bl fn_8000D124
    addi r3, r30, 0x624
    addi r4, r1, 0x5c
    bl fn_8028A1F8
    lfs f0, lbl_80883B04
    addi r3, r30, 0xb0
    stfs f0, 0x6c(r1)
    addi r4, r31, 0x313
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x2c
    bl fn_8000D0F8
    addi r3, r1, 0x60
    addi r4, r1, 0x2c
    bl fn_8000D124
    addi r3, r30, 0x624
    addi r4, r1, 0x5c
    bl fn_8028A1F8
    lfs f0, lbl_80883AD4
    addi r3, r30, 0xb0
    stfs f0, 0x6c(r1)
    addi r4, r31, 0x31f
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_8000D0F8
    addi r3, r1, 0x60
    addi r4, r1, 0x20
    bl fn_8000D124
    addi r3, r30, 0x624
    addi r4, r1, 0x5c
    bl fn_8028A1F8
    lfs f0, lbl_80883B08
    addi r3, r30, 0xb0
    stfs f0, 0x6c(r1)
    addi r4, r31, 0x326
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x14
    bl fn_8000D0F8
    addi r3, r1, 0x60
    addi r4, r1, 0x14
    bl fn_8000D124
    addi r3, r30, 0x624
    addi r4, r1, 0x5c
    bl fn_8028A1F8
    lfs f0, lbl_80883B08
    addi r3, r30, 0xb0
    stfs f0, 0x6c(r1)
    addi r4, r31, 0x32f
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8000D0F8
    addi r3, r1, 0x60
    addi r4, r1, 0x8
    bl fn_8000D124
    addi r3, r30, 0x624
    addi r4, r1, 0x5c
    bl fn_8028A1F8
    lwz r0, 0x12a8(r30)
    oris r0, r0, 0x2000
    stw r0, 0x12a8(r30)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8028A1F8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8028A1F8_0000145C
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8028A1F8_000015FC
lbl_fn_8028A1F8_0000145C:
    lwz r0, 0x4(r3)
    li r29, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_8028A1F8_000017A4
    li r3, 0xb0
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    li r5, 0x0
    addi r4, r4, fn_80148990@l
    li r6, 0x14
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x8(r30)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_8028A1F8_000015F0
    lwz r0, 0x0(r30)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_8028A1F8_000014C0
    mr r5, r0
lbl_fn_8028A1F8_000014C0:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_8028A1F8_000015DC
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_8028A1F8_000015A4
lbl_fn_8028A1F8_000014D8:
    lwz r0, 0x8(r30)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x8(r30)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x8(r30)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x8(r30)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    bdnz lbl_fn_8028A1F8_000014D8
    andi. r5, r5, 0x3
    beq lbl_fn_8028A1F8_000015DC
lbl_fn_8028A1F8_000015A4:
    mtctr r5
lbl_fn_8028A1F8_000015A8:
    lwz r0, 0x8(r30)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    bdnz lbl_fn_8028A1F8_000015A8
lbl_fn_8028A1F8_000015DC:
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8028A1F8_000015F0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8028A1F8_000015F0:
    stw r28, 0x8(r30)
    stw r29, 0x4(r30)
    b lbl_fn_8028A1F8_000017A4
lbl_fn_8028A1F8_000015FC:
    lwz r3, 0x0(r3)
    cmplw r3, r0
    blt lbl_fn_8028A1F8_000017A4
    slwi r29, r3, 1
    cmplw r0, r29
    bgt lbl_fn_8028A1F8_000017A4
    mulli r3, r29, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    mr r7, r29
    addi r4, r4, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x8(r30)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_8028A1F8_0000179C
    lwz r0, 0x0(r30)
    mr r5, r29
    cmplw r29, r0
    ble lbl_fn_8028A1F8_0000166C
    mr r5, r0
lbl_fn_8028A1F8_0000166C:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_8028A1F8_00001788
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_8028A1F8_00001750
lbl_fn_8028A1F8_00001684:
    lwz r0, 0x8(r30)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x8(r30)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x8(r30)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x8(r30)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    bdnz lbl_fn_8028A1F8_00001684
    andi. r5, r5, 0x3
    beq lbl_fn_8028A1F8_00001788
lbl_fn_8028A1F8_00001750:
    mtctr r5
lbl_fn_8028A1F8_00001754:
    lwz r0, 0x8(r30)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    bdnz lbl_fn_8028A1F8_00001754
lbl_fn_8028A1F8_00001788:
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8028A1F8_0000179C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8028A1F8_0000179C:
    stw r28, 0x8(r30)
    stw r29, 0x4(r30)
lbl_fn_8028A1F8_000017A4:
    lwz r0, 0x0(r30)
    lwz r4, 0x8(r30)
    mulli r3, r0, 0x14
    lwz r0, 0x0(r31)
    stwux r0, r3, r4
    psq_l f1, 0x4(r31), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r31)
    stfs f2, 0xc(r3)
    lfs f0, 0x10(r31)
    stfs f0, 0x10(r3)
    lwz r3, 0x0(r30)
    addi r0, r3, 0x1
    stw r0, 0x0(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8028A5D4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r3
    lwz r0, 0x624(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8028A5D4_00001B8C
    lwz r5, 0x62c(r3)
    lis r4, lbl_80745314@ha
    lfs f0, lbl_80883B0C
    addi r4, r4, lbl_80745314@l
    stfs f0, 0x10(r5)
    addi r4, r4, 0x2fc
    li r5, 0x0
    addi r3, r3, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8028A5D4_00001854
    li r4, 0x0
    b lbl_fn_8028A5D4_00001860
lbl_fn_8028A5D4_00001854:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_8028A5D4_00001860:
    lfs f0, 0x1c(r4)
    li r31, 0x1
    lfs f3, 0xc(r4)
    lis r3, lbl_80745314@ha
    stfs f0, 0x54(r1)
    addi r5, r1, 0x50
    lfs f2, 0x2c(r4)
    addi r3, r3, lbl_80745314@l
    stfs f3, 0x50(r1)
    addi r4, r3, 0x301
    lwz r6, 0x62c(r30)
    mulli r0, r31, 0x14
    psq_l f1, 0x0(r5), 0, 0
    addi r3, r30, 0xb0
    psq_st f1, 0x4(r6), 0, 0
    li r5, 0x0
    lfs f0, lbl_80883B10
    stfs f2, 0xc(r6)
    lwz r6, 0x62c(r30)
    stfs f2, 0x58(r1)
    add r6, r6, r0
    stfs f0, 0x10(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8028A5D4_000018CC
    li r3, 0x0
    b lbl_fn_8028A5D4_000018D8
lbl_fn_8028A5D4_000018CC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_8028A5D4_000018D8:
    mulli r0, r31, 0x14
    lfs f3, 0x1c(r3)
    lfs f0, 0xc(r3)
    lis r4, lbl_80745314@ha
    lfs f2, 0x2c(r3)
    addi r3, r1, 0x44
    lwz r5, 0x62c(r30)
    addi r4, r4, lbl_80745314@l
    stfs f0, 0x44(r1)
    li r31, 0x2
    add r5, r5, r0
    lfs f0, lbl_80883B14
    stfs f3, 0x48(r1)
    mulli r0, r31, 0x14
    addi r4, r4, 0x306
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0xb0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    li r5, 0x0
    lwz r6, 0x62c(r30)
    stfs f2, 0x4c(r1)
    add r6, r6, r0
    stfs f0, 0x10(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8028A5D4_0000194C
    li r3, 0x0
    b lbl_fn_8028A5D4_00001958
lbl_fn_8028A5D4_0000194C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_8028A5D4_00001958:
    mulli r0, r31, 0x14
    lfs f3, 0x1c(r3)
    lfs f0, 0xc(r3)
    lis r4, lbl_80745314@ha
    lfs f2, 0x2c(r3)
    addi r3, r1, 0x38
    lwz r5, 0x62c(r30)
    addi r4, r4, lbl_80745314@l
    stfs f0, 0x38(r1)
    li r31, 0x3
    add r5, r5, r0
    lfs f0, lbl_80883B14
    stfs f3, 0x3c(r1)
    mulli r0, r31, 0x14
    addi r4, r4, 0x313
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0xb0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    li r5, 0x0
    lwz r6, 0x62c(r30)
    stfs f2, 0x40(r1)
    add r6, r6, r0
    stfs f0, 0x10(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8028A5D4_000019CC
    li r3, 0x0
    b lbl_fn_8028A5D4_000019D8
lbl_fn_8028A5D4_000019CC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_8028A5D4_000019D8:
    mulli r0, r31, 0x14
    lfs f3, 0x1c(r3)
    lfs f0, 0xc(r3)
    lis r4, lbl_80745314@ha
    lfs f2, 0x2c(r3)
    addi r3, r1, 0x2c
    lwz r5, 0x62c(r30)
    addi r4, r4, lbl_80745314@l
    stfs f0, 0x2c(r1)
    li r31, 0x4
    add r5, r5, r0
    lfs f0, lbl_80883AD4
    stfs f3, 0x30(r1)
    mulli r0, r31, 0x14
    addi r4, r4, 0x31f
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0xb0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    li r5, 0x0
    lwz r6, 0x62c(r30)
    stfs f2, 0x34(r1)
    add r6, r6, r0
    stfs f0, 0x10(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8028A5D4_00001A4C
    li r3, 0x0
    b lbl_fn_8028A5D4_00001A58
lbl_fn_8028A5D4_00001A4C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_8028A5D4_00001A58:
    mulli r0, r31, 0x14
    lfs f3, 0x1c(r3)
    lfs f0, 0xc(r3)
    lis r4, lbl_80745314@ha
    lfs f2, 0x2c(r3)
    addi r3, r1, 0x20
    lwz r5, 0x62c(r30)
    addi r4, r4, lbl_80745314@l
    stfs f0, 0x20(r1)
    li r31, 0x5
    add r5, r5, r0
    lfs f0, lbl_80883B08
    stfs f3, 0x24(r1)
    mulli r0, r31, 0x14
    addi r4, r4, 0x326
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0xb0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    li r5, 0x0
    lwz r6, 0x62c(r30)
    stfs f2, 0x28(r1)
    add r6, r6, r0
    stfs f0, 0x10(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8028A5D4_00001ACC
    li r3, 0x0
    b lbl_fn_8028A5D4_00001AD8
lbl_fn_8028A5D4_00001ACC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_8028A5D4_00001AD8:
    mulli r0, r31, 0x14
    lfs f3, 0x1c(r3)
    lfs f0, 0xc(r3)
    lis r4, lbl_80745314@ha
    lfs f2, 0x2c(r3)
    addi r3, r1, 0x14
    lwz r5, 0x62c(r30)
    addi r4, r4, lbl_80745314@l
    stfs f0, 0x14(r1)
    li r31, 0x6
    add r5, r5, r0
    lfs f0, lbl_80883B08
    stfs f3, 0x18(r1)
    mulli r0, r31, 0x14
    addi r4, r4, 0x32f
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0xb0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    li r5, 0x0
    lwz r6, 0x62c(r30)
    stfs f2, 0x1c(r1)
    add r6, r6, r0
    stfs f0, 0x10(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8028A5D4_00001B4C
    li r4, 0x0
    b lbl_fn_8028A5D4_00001B58
lbl_fn_8028A5D4_00001B4C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_8028A5D4_00001B58:
    lfs f0, 0x1c(r4)
    mulli r0, r31, 0x14
    lfs f3, 0xc(r4)
    addi r3, r1, 0x8
    lfs f2, 0x2c(r4)
    lwz r4, 0x62c(r30)
    stfs f3, 0x8(r1)
    add r4, r4, r0
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x4(r4), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0xc(r4)
lbl_fn_8028A5D4_00001B8C:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
