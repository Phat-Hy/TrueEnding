#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8004ED34(void);
extern void fn_80097C08(void);
extern void fn_800F8548(void);
extern void fn_8016E970(void);
extern void fn_80206B14(void);
extern void fn_80206BE4(void);
extern void fn_8020ED84(void);
extern void fn_8020EF80(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A108(void);
extern void fn_8023A254(void);
extern void fn_8023A8B4(void);
extern void fn_803EA77C(void);
extern void fn_804439FC(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F99B0(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern void fn_8068B100(void);

/* External data declarations */

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885378;
extern u32 lbl_80885398;
extern u32 lbl_808853B0;
extern u32 lbl_808853BC;
extern u32 lbl_808853C4;
extern u32 lbl_808853CC;
extern u32 lbl_808853D8;
extern u32 lbl_808853DC;
extern u32 lbl_808853E0;
extern u32 lbl_808854B0;
extern u32 lbl_808854B4;

/* Function declarations */
void fn_80350464(void);
void fn_8035083C(void);
void fn_80350BF0(void);
void fn_80350F64(void);
void fn_80351480(void);
void fn_803519C4(void);
void fn_80351AB8(void);

asm void fn_80350464(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    li r0, 0x0
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    mr r30, r3
    stw r0, 0x14b4(r3)
    stw r0, 0x14b8(r3)
    stw r0, 0x14c0(r3)
    stw r0, 0x17e8(r3)
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
    li r0, 0xa
    stw r0, 0x58c(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80885398
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80885378
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x156
    lfs f2, lbl_808853C4
    li r6, 0x0
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r7, 0x14b0(r30)
    addi r4, r1, 0x74
    lfs f0, 0x530(r30)
    addi r6, r30, 0x15dc
    lfs f2, 0x530(r7)
    addi r3, r1, 0x80
    psq_l f1, 0x528(r7), 0, 0
    addi r5, r1, 0x14
    frsp f3, f2
    psq_st f1, 0x0(r4), 0, 0
    addi r31, r1, 0x8
    stfs f2, 0x7c(r1)
    fsubs f7, f3, f0
    lfs f0, 0x52c(r30)
    stfs f2, 0x88(r1)
    frsp f2, f2
    lfs f5, 0x78(r1)
    stfs f2, 0x15e4(r30)
    fmr f2, f7
    lfs f4, 0x74(r1)
    fsubs f6, f5, f0
    lfs f3, 0x528(r30)
    lfs f0, lbl_808853D8
    frsp f5, f2
    fsubs f4, f4, f3
    stfs f6, 0x18(r1)
    lfs f3, lbl_80885378
    fabs f6, f5
    stfs f4, 0x14(r1)
    psq_st f1, 0x0(r6), 0, 0
    frsp f4, f6
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    fcmpo cr0, f4, f0
    stfs f3, 0x15e0(r30)
    stfs f7, 0x1c(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x10(r1)
    bge lbl_fn_80350464_000001AC
    lfs f0, 0x8(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_80350464_000001A0
    lfs f0, lbl_808853DC
    b lbl_fn_80350464_000001A4
lbl_fn_80350464_000001A0:
    lfs f0, lbl_808853E0
lbl_fn_80350464_000001A4:
    stfs f0, 0x30(r1)
    b lbl_fn_80350464_000001C0
lbl_fn_80350464_000001AC:
    fmr f2, f5
    lfs f1, 0x8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x30(r1)
lbl_fn_80350464_000001C0:
    lfs f0, 0x30(r1)
    addi r3, r1, 0xd0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885378
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
    lfs f0, lbl_80885398
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x10(r1)
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
    lfs f0, lbl_808853D8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80350464_000002DC
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_80350464_000002CC
    lfs f0, lbl_808853DC
    b lbl_fn_80350464_000002D0
lbl_fn_80350464_000002CC:
    lfs f0, lbl_808853E0
lbl_fn_80350464_000002D0:
    fneg f0, f0
    stfs f0, 0x2c(r1)
    b lbl_fn_80350464_000002F0
lbl_fn_80350464_000002DC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x2c(r1)
lbl_fn_80350464_000002F0:
    lfs f6, lbl_80885378
    addi r4, r1, 0x2c
    lfs f5, 0x78(r1)
    addi r6, r30, 0x15e8
    lfs f4, 0x52c(r30)
    fmr f2, f6
    lfs f3, 0x74(r1)
    addi r5, r1, 0x20
    fsubs f5, f5, f4
    lfs f0, 0x528(r30)
    psq_l f1, 0x0(r4), 0, 0
    fsubs f4, f3, f0
    stfs f2, 0x10(r1)
    frsp f2, f2
    addi r3, r30, 0x15f4
    lfs f3, 0x7c(r1)
    lfs f0, 0x530(r30)
    stfs f4, 0x20(r1)
    mr r4, r3
    fsubs f0, f3, f0
    stfs f2, 0x15f0(r30)
    fmr f2, f0
    stfs f5, 0x24(r1)
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f6, 0x34(r1)
    stfs f0, 0x28(r1)
    stfs f2, 0x15fc(r30)
    stfs f6, 0x15f8(r30)
    bl fn_805F98D0
    lfs f0, lbl_80885378
    addi r3, r30, 0x1600
    psq_l f1, 0x528(r30), 0, 0
    lfs f2, 0x530(r30)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1608(r30)
    stfs f0, 0x570(r30)
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_80350464_000003B0
    lfs f1, lbl_80885398
    mr r4, r30
    lfs f2, lbl_808853BC
    li r5, 0x0
    li r6, 0x0
    bl fn_803EA77C
lbl_fn_80350464_000003B0:
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

asm void fn_8035083C(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    li r0, 0x0
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    mr r30, r3
    stw r0, 0x14b4(r3)
    stw r0, 0x14b8(r3)
    stw r0, 0x14c0(r3)
    stw r0, 0x17e8(r3)
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
    li r0, 0xb
    stw r0, 0x58c(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80885398
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80885378
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x142
    lfs f2, lbl_808853C4
    li r6, 0x0
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r7, 0x14b0(r30)
    addi r4, r1, 0x74
    lfs f0, 0x530(r30)
    addi r6, r30, 0x15dc
    lfs f2, 0x530(r7)
    addi r3, r1, 0x80
    psq_l f1, 0x528(r7), 0, 0
    addi r5, r1, 0x14
    frsp f3, f2
    psq_st f1, 0x0(r4), 0, 0
    addi r31, r1, 0x8
    stfs f2, 0x7c(r1)
    fsubs f7, f3, f0
    lfs f0, 0x52c(r30)
    stfs f2, 0x88(r1)
    frsp f2, f2
    lfs f5, 0x78(r1)
    stfs f2, 0x15e4(r30)
    fmr f2, f7
    lfs f4, 0x74(r1)
    fsubs f6, f5, f0
    lfs f3, 0x528(r30)
    lfs f0, lbl_808853D8
    frsp f5, f2
    fsubs f4, f4, f3
    stfs f6, 0x18(r1)
    lfs f3, lbl_80885378
    fabs f6, f5
    stfs f4, 0x14(r1)
    psq_st f1, 0x0(r6), 0, 0
    frsp f4, f6
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    fcmpo cr0, f4, f0
    stfs f3, 0x15e0(r30)
    stfs f7, 0x1c(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x10(r1)
    bge lbl_fn_8035083C_00000584
    lfs f0, 0x8(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_8035083C_00000578
    lfs f0, lbl_808853DC
    b lbl_fn_8035083C_0000057C
lbl_fn_8035083C_00000578:
    lfs f0, lbl_808853E0
lbl_fn_8035083C_0000057C:
    stfs f0, 0x30(r1)
    b lbl_fn_8035083C_00000598
lbl_fn_8035083C_00000584:
    fmr f2, f5
    lfs f1, 0x8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x30(r1)
lbl_fn_8035083C_00000598:
    lfs f0, 0x30(r1)
    addi r3, r1, 0xd0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885378
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
    lfs f0, lbl_80885398
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x10(r1)
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
    lfs f0, lbl_808853D8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8035083C_000006B4
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_8035083C_000006A4
    lfs f0, lbl_808853DC
    b lbl_fn_8035083C_000006A8
lbl_fn_8035083C_000006A4:
    lfs f0, lbl_808853E0
lbl_fn_8035083C_000006A8:
    fneg f0, f0
    stfs f0, 0x2c(r1)
    b lbl_fn_8035083C_000006C8
lbl_fn_8035083C_000006B4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x2c(r1)
lbl_fn_8035083C_000006C8:
    lfs f6, lbl_80885378
    addi r4, r1, 0x2c
    lfs f5, 0x78(r1)
    addi r6, r30, 0x15e8
    lfs f4, 0x52c(r30)
    fmr f2, f6
    lfs f3, 0x74(r1)
    addi r5, r1, 0x20
    fsubs f5, f5, f4
    lfs f0, 0x528(r30)
    psq_l f1, 0x0(r4), 0, 0
    fsubs f4, f3, f0
    stfs f2, 0x10(r1)
    frsp f2, f2
    addi r3, r30, 0x15f4
    lfs f3, 0x7c(r1)
    lfs f0, 0x530(r30)
    stfs f4, 0x20(r1)
    mr r4, r3
    fsubs f0, f3, f0
    stfs f2, 0x15f0(r30)
    fmr f2, f0
    stfs f5, 0x24(r1)
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f6, 0x34(r1)
    stfs f0, 0x28(r1)
    stfs f2, 0x15fc(r30)
    stfs f6, 0x15f8(r30)
    bl fn_805F98D0
    lfs f0, lbl_80885378
    addi r3, r30, 0x1600
    psq_l f1, 0x528(r30), 0, 0
    lfs f2, 0x530(r30)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1608(r30)
    stfs f0, 0x570(r30)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_80350BF0(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stw r31, 0xdc(r1)
    mr r31, r3
    stw r30, 0xd8(r1)
    li r30, 0x0
    stw r29, 0xd4(r1)
    stw r30, 0x14b4(r3)
    stw r30, 0x14b8(r3)
    stw r30, 0x14c0(r3)
    stw r30, 0x17e8(r3)
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
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    li r0, 0xc
    stw r0, 0x58c(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80885398
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80885378
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x14a
    lfs f2, lbl_808853C4
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r0, 0x17e4(r31)
    lfs f0, lbl_808853CC
    stfs f0, 0x2e4(r31)
    stw r0, 0x14b0(r31)
    stw r0, 0xd1c(r31)
    stb r30, 0x17ec(r31)
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    lwz r5, 0x17e4(r31)
    subf. r0, r4, r0
    addi r3, r1, 0xbc
    lfs f0, lbl_808853CC
    addi r30, r1, 0xb0
    stw r0, 0x17f0(r31)
    lfs f2, 0x530(r5)
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f3, 0xc0(r1)
    stfs f2, 0xc4(r1)
    fadds f0, f3, f0
    stfs f2, 0xb8(r1)
    stfs f0, 0xc0(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    bne lbl_fn_80350BF0_00000984
    addi r4, r31, 0x15f4
    addi r29, r1, 0x80
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r29
    lfs f2, 0x15fc(r31)
    mr r4, r29
    stfs f2, 0x88(r1)
    psq_st f1, 0x0(r29), 0, 0
    bl fn_805F98D0
    lfs f3, lbl_80885378
    mr r3, r29
    lfs f0, lbl_80885398
    addi r4, r1, 0x74
    stfs f3, 0x74(r1)
    addi r5, r1, 0x8c
    stfs f0, 0x78(r1)
    stfs f3, 0x7c(r1)
    bl fn_805F99B0
    lfs f5, 0x94(r1)
    addi r3, r1, 0xa4
    lfs f4, lbl_808853B0
    lfs f0, 0x90(r1)
    fmuls f5, f5, f4
    lfs f3, 0x8c(r1)
    fmuls f6, f0, f4
    lfs f0, 0xc4(r1)
    fmuls f4, f3, f4
    lfs f3, 0xc0(r1)
    fadds f2, f0, f5
    lfs f0, 0xbc(r1)
    fadds f3, f3, f6
    stfs f4, 0x98(r1)
    fadds f0, f0, f4
    stfs f3, 0xa8(r1)
    stfs f0, 0xa4(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f6, 0x9c(r1)
    stfs f5, 0xa0(r1)
    stfs f2, 0xac(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xb8(r1)
    b lbl_fn_80350BF0_00000A28
lbl_fn_80350BF0_00000984:
    addi r4, r31, 0x15f4
    addi r29, r1, 0x44
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r29
    lfs f2, 0x15fc(r31)
    mr r4, r29
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r29), 0, 0
    bl fn_805F98D0
    lfs f3, lbl_80885378
    mr r3, r29
    lfs f0, lbl_80885398
    addi r4, r1, 0x38
    stfs f3, 0x38(r1)
    addi r5, r1, 0x50
    stfs f0, 0x3c(r1)
    stfs f3, 0x40(r1)
    bl fn_805F99B0
    lfs f5, 0x58(r1)
    addi r3, r1, 0x68
    lfs f4, lbl_808853B0
    lfs f0, 0x54(r1)
    fmuls f5, f5, f4
    lfs f3, 0x50(r1)
    fmuls f6, f0, f4
    lfs f0, 0xc4(r1)
    fmuls f4, f3, f4
    lfs f3, 0xc0(r1)
    fsubs f2, f0, f5
    lfs f0, 0xbc(r1)
    fsubs f3, f3, f6
    stfs f4, 0x5c(r1)
    fsubs f0, f0, f4
    stfs f3, 0x6c(r1)
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f6, 0x60(r1)
    stfs f5, 0x64(r1)
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xb8(r1)
lbl_fn_80350BF0_00000A28:
    lwz r3, lbl_8087EE98
    addi r5, r1, 0xbc
    addi r6, r1, 0xb0
    li r4, 0x0
    lis r7, 0x8000
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80350BF0_00000A60
    lwz r0, 0x17f0(r31)
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x17f0(r31)
lbl_fn_80350BF0_00000A60:
    addi r3, r31, 0x16a8
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80885378
    li r3, -0x1
    lfs f1, lbl_80885398
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r31, 0x16a8
    addi r5, r31, 0xb0
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    addi r4, r31, 0x16a8
    li r5, 0x0
    li r6, 0x5
    bl fn_8023A108
    lwz r0, 0xe4(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r29, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_80350F64(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    li r0, 0x0
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    stw r31, 0x14c(r1)
    mr r31, r3
    stw r30, 0x148(r1)
    stw r29, 0x144(r1)
    stw r28, 0x140(r1)
    stw r0, 0x14b4(r3)
    stw r0, 0x14b8(r3)
    stw r0, 0x14c0(r3)
    stw r0, 0x17e8(r3)
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
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80885398
    li r3, 0x12
    li r0, 0x1
    stw r3, 0x58c(r31)
    lfs f1, lbl_80885378
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_808853C4
    li r5, 0x13f
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r3, lbl_8087F430
    addi r30, r1, 0xbc
    li r4, 0x0
    li r5, 0x0
    lwz r7, 0x10d8(r3)
    lwz r8, 0x78(r7)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_80350F64_00000C44
lbl_fn_80350F64_00000C1C:
    lwz r3, 0x7c(r7)
    lwzx r0, r3, r5
    cmpwi r0, 0x3
    bne lbl_fn_80350F64_00000C38
    mulli r0, r4, 0x28
    add r5, r3, r0
    b lbl_fn_80350F64_00000C48
lbl_fn_80350F64_00000C38:
    addi r5, r5, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_80350F64_00000C1C
lbl_fn_80350F64_00000C44:
    li r5, 0x0
lbl_fn_80350F64_00000C48:
    li r4, 0x0
    li r6, 0x0
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_80350F64_00000C84
lbl_fn_80350F64_00000C5C:
    lwz r3, 0x7c(r7)
    lwzx r0, r3, r6
    cmpwi r0, 0x4
    bne lbl_fn_80350F64_00000C78
    mulli r0, r4, 0x28
    add r4, r3, r0
    b lbl_fn_80350F64_00000C88
lbl_fn_80350F64_00000C78:
    addi r6, r6, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_80350F64_00000C5C
lbl_fn_80350F64_00000C84:
    li r4, 0x0
lbl_fn_80350F64_00000C88:
    lfs f2, 0xc(r5)
    addi r29, r1, 0x74
    psq_l f1, 0x4(r5), 0, 0
    addi r28, r1, 0x80
    psq_st f1, 0x0(r29), 0, 0
    frsp f0, f2
    lwz r5, lbl_8087F8A0
    addi r3, r1, 0x8c
    stfs f2, 0x7c(r1)
    lfs f4, 0x74(r1)
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x88(r1)
    lfs f6, 0x78(r1)
    psq_st f1, 0x0(r28), 0, 0
    lwz r4, 0x48(r5)
    lfs f2, 0x530(r4)
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    fsubs f7, f0, f2
    lfs f3, 0x8c(r1)
    lfs f5, 0x90(r1)
    fmuls f0, f7, f7
    fsubs f3, f4, f3
    stfs f2, 0x94(r1)
    fsubs f4, f6, f5
    stfs f3, 0x98(r1)
    fmadds f1, f3, f3, f0
    stfs f4, 0x9c(r1)
    stfs f7, 0xa0(r1)
    bl fn_8068B100
    lfs f4, 0x88(r1)
    frsp f30, f1
    lfs f0, 0x94(r1)
    lfs f3, 0x80(r1)
    fsubs f6, f4, f0
    lfs f0, 0x8c(r1)
    lfs f4, 0x84(r1)
    fsubs f5, f3, f0
    lfs f3, 0x90(r1)
    fmuls f0, f6, f6
    fsubs f3, f4, f3
    stfs f5, 0xa4(r1)
    fmadds f1, f5, f5, f0
    stfs f3, 0xa8(r1)
    stfs f6, 0xac(r1)
    bl fn_8068B100
    frsp f0, f1
    fcmpo cr0, f30, f0
    bge lbl_fn_80350F64_00000D54
    b lbl_fn_80350F64_00000D58
lbl_fn_80350F64_00000D54:
    mr r28, r29
lbl_fn_80350F64_00000D58:
    lfs f2, 0x8(r28)
    addi r3, r1, 0xb0
    psq_l f1, 0x0(r28), 0, 0
    addi r5, r31, 0x15dc
    frsp f3, f2
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x530(r31)
    addi r4, r1, 0x14
    stfs f2, 0xb8(r1)
    addi r29, r1, 0x8
    fsubs f7, f3, f0
    stfs f2, 0xc4(r1)
    frsp f2, f2
    lfs f0, 0x52c(r31)
    lfs f5, 0xb4(r1)
    stfs f2, 0x15e4(r31)
    fmr f2, f7
    lfs f4, 0xb0(r1)
    fsubs f6, f5, f0
    lfs f3, 0x528(r31)
    lfs f0, lbl_808853D8
    frsp f5, f2
    stfs f6, 0x18(r1)
    fsubs f4, f4, f3
    lfs f3, lbl_80885378
    fabs f6, f5
    stfs f4, 0x14(r1)
    psq_st f1, 0x0(r5), 0, 0
    frsp f4, f6
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    fcmpo cr0, f4, f0
    stfs f3, 0x15e0(r31)
    stfs f7, 0x1c(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x10(r1)
    bge lbl_fn_80350F64_00000E0C
    lfs f0, 0x8(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_80350F64_00000E00
    lfs f0, lbl_808853DC
    b lbl_fn_80350F64_00000E04
lbl_fn_80350F64_00000E00:
    lfs f0, lbl_808853E0
lbl_fn_80350F64_00000E04:
    stfs f0, 0x30(r1)
    b lbl_fn_80350F64_00000E20
lbl_fn_80350F64_00000E0C:
    fmr f2, f5
    lfs f1, 0x8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x30(r1)
lbl_fn_80350F64_00000E20:
    lfs f0, 0x30(r1)
    addi r3, r1, 0x108
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885378
    addi r4, r1, 0x38
    lfs f4, 0x110(r1)
    mr r5, r4
    lfs f5, 0x10c(r1)
    addi r3, r1, 0xc8
    lfs f6, 0x108(r1)
    lfs f7, 0x120(r1)
    lfs f8, 0x11c(r1)
    lfs f9, 0x118(r1)
    lfs f10, 0x130(r1)
    lfs f11, 0x12c(r1)
    lfs f12, 0x128(r1)
    lfs f13, 0x134(r1)
    lfs f31, 0x124(r1)
    lfs f30, 0x114(r1)
    lfs f0, lbl_80885398
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x10(r1)
    stfs f3, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f3, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f6, 0xc8(r1)
    stfs f5, 0xcc(r1)
    stfs f4, 0xd0(r1)
    stfs f9, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f9, 0xd8(r1)
    stfs f8, 0xdc(r1)
    stfs f7, 0xe0(r1)
    stfs f12, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f10, 0x58(r1)
    stfs f12, 0xe8(r1)
    stfs f11, 0xec(r1)
    stfs f10, 0xf0(r1)
    stfs f30, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f30, 0xd4(r1)
    stfs f31, 0xe4(r1)
    stfs f13, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808853D8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80350F64_00000F3C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_80350F64_00000F2C
    lfs f0, lbl_808853DC
    b lbl_fn_80350F64_00000F30
lbl_fn_80350F64_00000F2C:
    lfs f0, lbl_808853E0
lbl_fn_80350F64_00000F30:
    fneg f0, f0
    stfs f0, 0x2c(r1)
    b lbl_fn_80350F64_00000F50
lbl_fn_80350F64_00000F3C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x2c(r1)
lbl_fn_80350F64_00000F50:
    lfs f6, lbl_80885378
    addi r4, r1, 0x2c
    lfs f5, 0xb4(r1)
    addi r6, r31, 0x15e8
    lfs f4, 0x52c(r31)
    fmr f2, f6
    lfs f3, 0xb0(r1)
    addi r5, r1, 0x20
    fsubs f5, f5, f4
    lfs f0, 0x528(r31)
    psq_l f1, 0x0(r4), 0, 0
    fsubs f4, f3, f0
    stfs f2, 0x10(r1)
    frsp f2, f2
    addi r3, r31, 0x15f4
    lfs f3, 0xb8(r1)
    lfs f0, 0x530(r31)
    stfs f4, 0x20(r1)
    mr r4, r3
    fsubs f0, f3, f0
    stfs f2, 0x15f0(r31)
    fmr f2, f0
    stfs f5, 0x24(r1)
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f6, 0x34(r1)
    stfs f0, 0x28(r1)
    stfs f2, 0x15fc(r31)
    stfs f6, 0x15f8(r31)
    bl fn_805F98D0
    lfs f0, lbl_80885378
    addi r3, r31, 0x1600
    psq_l f1, 0x528(r31), 0, 0
    lfs f2, 0x530(r31)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1608(r31)
    stfs f0, 0x570(r31)
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    lwz r31, 0x14c(r1)
    lwz r30, 0x148(r1)
    lwz r29, 0x144(r1)
    lwz r28, 0x140(r1)
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_80351480(void)
{
    nofralloc
    stwu r1, -0x1b0(r1)
    mflr r0
    stw r0, 0x1b4(r1)
    li r0, 0x0
    stfd f31, 0x1a0(r1)
    psq_st f31, 0x1a8(r1), 0, 0
    stfd f30, 0x190(r1)
    psq_st f30, 0x198(r1), 0, 0
    stw r31, 0x18c(r1)
    mr r31, r3
    stw r30, 0x188(r1)
    mr r30, r4
    stw r0, 0x14b4(r3)
    stw r0, 0x14b8(r3)
    stw r0, 0x14c0(r3)
    stw r0, 0x17e8(r3)
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
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f3, lbl_80885398
    li r3, 0x13
    lfs f0, lbl_808854B0
    li r0, 0x1
    stw r3, 0x58c(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80885378
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x143
    lfs f2, lbl_808853C4
    li r6, 0x0
    stfs f3, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r0, 0x17e4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80351480_00001118
    stw r0, 0x14b0(r31)
lbl_fn_80351480_00001118:
    cmpwi r30, 0x0
    beq lbl_fn_80351480_00001130
    lfs f3, 0x1ce0(r31)
    lfs f0, lbl_808853BC
    fsubs f31, f3, f0
    b lbl_fn_80351480_0000113C
lbl_fn_80351480_00001130:
    lfs f3, 0x1ce8(r31)
    lfs f0, lbl_808853BC
    fsubs f31, f3, f0
lbl_fn_80351480_0000113C:
    lwz r4, 0x14b0(r31)
    addi r3, r1, 0xd4
    lfs f5, 0x1614(r31)
    lfs f0, 0x530(r4)
    lfs f4, 0x160c(r31)
    lfs f3, 0x528(r4)
    fsubs f5, f5, f0
    lfs f0, lbl_80885378
    fsubs f3, f4, f3
    stfs f5, 0xdc(r1)
    stfs f3, 0xd4(r1)
    stfs f0, 0xd8(r1)
    bl fn_805F9920
    lfs f0, lbl_808854B4
    fcmpo cr0, f1, f0
    bge lbl_fn_80351480_000011D0
    lwz r5, 0x14b0(r31)
    addi r3, r1, 0x150
    lfs f3, lbl_80885378
    li r4, 0x79
    lfs f0, lbl_80885398
    stfs f3, 0xbc(r1)
    stfs f3, 0xc0(r1)
    stfs f0, 0xc4(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0xbc
    addi r3, r1, 0x150
    mr r5, r4
    bl fn_805F93C0
    addi r4, r1, 0xbc
    lfs f2, 0xc4(r1)
    addi r3, r1, 0xd4
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xdc(r1)
    b lbl_fn_80351480_000011DC
lbl_fn_80351480_000011D0:
    addi r3, r1, 0xd4
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80351480_000011DC:
    lfs f0, 0xdc(r1)
    addi r4, r1, 0xc8
    lwz r5, 0x14b0(r31)
    addi r3, r1, 0xa4
    fmuls f7, f0, f31
    lfs f0, 0xd4(r1)
    lfs f3, 0x530(r5)
    addi r6, r31, 0x15dc
    fmuls f9, f0, f31
    lfs f0, 0x528(r5)
    fadds f10, f3, f7
    lfs f3, 0xd8(r1)
    fadds f5, f0, f9
    lfs f4, 0x1610(r31)
    fmuls f8, f3, f31
    lfs f0, 0x530(r31)
    fmr f2, f10
    stfs f5, 0xc8(r1)
    lfs f5, 0x52c(r31)
    addi r5, r1, 0x44
    stfs f4, 0xcc(r1)
    addi r30, r1, 0x38
    frsp f3, f2
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0xac(r1)
    frsp f2, f2
    fsubs f12, f3, f0
    stfs f2, 0x15e4(r31)
    lfs f3, 0x528(r31)
    psq_st f1, 0x0(r3), 0, 0
    fmr f2, f12
    lfs f0, lbl_808853D8
    lfs f6, 0xa8(r1)
    lfs f4, 0xa4(r1)
    fsubs f5, f6, f5
    psq_st f1, 0x0(r6), 0, 0
    fsubs f4, f4, f3
    lfs f3, lbl_80885378
    frsp f11, f2
    stfs f5, 0x48(r1)
    stfs f4, 0x44(r1)
    fabs f6, f11
    psq_l f1, 0x0(r5), 0, 0
    stfs f9, 0xb0(r1)
    frsp f4, f6
    stfs f8, 0xb4(r1)
    fcmpo cr0, f4, f0
    stfs f7, 0xb8(r1)
    stfs f10, 0xd0(r1)
    stfs f3, 0x15e0(r31)
    stfs f12, 0x4c(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x40(r1)
    bge lbl_fn_80351480_000012D4
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_80351480_000012C8
    lfs f0, lbl_808853DC
    b lbl_fn_80351480_000012CC
lbl_fn_80351480_000012C8:
    lfs f0, lbl_808853E0
lbl_fn_80351480_000012CC:
    stfs f0, 0x60(r1)
    b lbl_fn_80351480_000012E8
lbl_fn_80351480_000012D4:
    fmr f2, f11
    lfs f1, 0x38(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x60(r1)
lbl_fn_80351480_000012E8:
    lfs f0, 0x60(r1)
    addi r3, r1, 0x120
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885378
    addi r4, r1, 0x68
    lfs f4, 0x128(r1)
    mr r5, r4
    lfs f5, 0x124(r1)
    addi r3, r1, 0xe0
    lfs f6, 0x120(r1)
    lfs f7, 0x138(r1)
    lfs f8, 0x134(r1)
    lfs f9, 0x130(r1)
    lfs f10, 0x148(r1)
    lfs f11, 0x144(r1)
    lfs f12, 0x140(r1)
    lfs f13, 0x14c(r1)
    lfs f31, 0x13c(r1)
    lfs f30, 0x12c(r1)
    lfs f0, lbl_80885398
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x40(r1)
    stfs f3, 0x110(r1)
    stfs f3, 0x114(r1)
    stfs f3, 0x118(r1)
    stfs f0, 0x11c(r1)
    stfs f6, 0x98(r1)
    stfs f5, 0x9c(r1)
    stfs f4, 0xa0(r1)
    stfs f6, 0xe0(r1)
    stfs f5, 0xe4(r1)
    stfs f4, 0xe8(r1)
    stfs f9, 0x8c(r1)
    stfs f8, 0x90(r1)
    stfs f7, 0x94(r1)
    stfs f9, 0xf0(r1)
    stfs f8, 0xf4(r1)
    stfs f7, 0xf8(r1)
    stfs f12, 0x80(r1)
    stfs f11, 0x84(r1)
    stfs f10, 0x88(r1)
    stfs f12, 0x100(r1)
    stfs f11, 0x104(r1)
    stfs f10, 0x108(r1)
    stfs f30, 0x74(r1)
    stfs f31, 0x78(r1)
    stfs f13, 0x7c(r1)
    stfs f30, 0xec(r1)
    stfs f31, 0xfc(r1)
    stfs f13, 0x10c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F9750
    lfs f2, 0x70(r1)
    lfs f0, lbl_808853D8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80351480_00001404
    lfs f3, 0x6c(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_80351480_000013F4
    lfs f0, lbl_808853DC
    b lbl_fn_80351480_000013F8
lbl_fn_80351480_000013F4:
    lfs f0, lbl_808853E0
lbl_fn_80351480_000013F8:
    fneg f0, f0
    stfs f0, 0x5c(r1)
    b lbl_fn_80351480_00001418
lbl_fn_80351480_00001404:
    lfs f1, 0x6c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x5c(r1)
lbl_fn_80351480_00001418:
    lfs f6, lbl_80885378
    addi r4, r1, 0x5c
    lfs f5, 0xa8(r1)
    addi r6, r31, 0x15e8
    lfs f4, 0x52c(r31)
    fmr f2, f6
    lfs f3, 0xa4(r1)
    addi r5, r1, 0x50
    fsubs f5, f5, f4
    lfs f0, 0x528(r31)
    psq_l f1, 0x0(r4), 0, 0
    fsubs f4, f3, f0
    stfs f2, 0x40(r1)
    frsp f2, f2
    addi r3, r31, 0x15f4
    lfs f3, 0xac(r1)
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
    lfs f0, lbl_80885378
    addi r5, r31, 0x1600
    psq_l f1, 0x528(r31), 0, 0
    addi r3, r31, 0x16b4
    lfs f2, 0x530(r31)
    li r4, 0x0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1608(r31)
    stfs f0, 0x570(r31)
    bl fn_80232B7C
    lfs f0, lbl_80885378
    li r3, -0x1
    lfs f1, lbl_80885398
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r31, 0x16b4
    addi r5, r31, 0xb0
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lfs f1, 0x2e8(r31)
    addi r4, r31, 0x16b4
    lwz r3, lbl_8087F3C0
    li r5, 0x0
    bl fn_8023A254
    lwz r0, 0x1b4(r1)
    psq_l f31, 0x1a8(r1), 0, 0
    lfd f31, 0x1a0(r1)
    psq_l f30, 0x198(r1), 0, 0
    lfd f30, 0x190(r1)
    lwz r31, 0x18c(r1)
    lwz r30, 0x188(r1)
    mtlr r0
    addi r1, r1, 0x1b0
    blr
}

asm void fn_803519C4(void)
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
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80885398
    li r3, 0x14
    li r0, 0x1
    stw r3, 0x58c(r30)
    lfs f1, lbl_80885378
    addi r3, r30, 0xb0
    stw r0, 0x3fc(r30)
    li r4, 0x0
    lfs f2, lbl_808853C4
    li r5, 0x144
    stfs f0, 0x2fc(r30)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    stw r31, 0x1cb8(r30)
    stw r31, 0x1cbc(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80351AB8(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    li r0, 0x0
    stfd f31, 0x1b0(r1)
    psq_st f31, 0x1b8(r1), 0, 0
    stfd f30, 0x1a0(r1)
    psq_st f30, 0x1a8(r1), 0, 0
    stw r31, 0x19c(r1)
    li r31, 0x1
    stw r30, 0x198(r1)
    mr r30, r4
    stw r29, 0x194(r1)
    mr r29, r5
    stw r28, 0x190(r1)
    mr r28, r3
    stw r4, 0x16f0(r3)
    stw r5, 0x16f4(r3)
    stb r31, 0x1714(r3)
    stw r0, 0x14b4(r3)
    stw r0, 0x14b8(r3)
    stw r0, 0x14c0(r3)
    stw r0, 0x17e8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r28)
    mr r4, r28
    li r5, 0x3ea
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0x3ed
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0x3ef
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r28
    li r4, 0x3
    bl fn_8016E970
    cmpwi r29, 0x2
    li r0, 0xd
    stw r0, 0x58c(r28)
    bne lbl_fn_80351AB8_00001960
    lfs f0, lbl_80885398
    addi r3, r28, 0xb0
    stw r31, 0x3fc(r28)
    li r4, 0x0
    lfs f1, lbl_80885378
    li r5, 0x3c
    stfs f0, 0x2fc(r28)
    li r6, 0x0
    lfs f2, lbl_808853C4
    li r7, 0x0
    stfs f0, 0x2e8(r28)
    li r8, 0x1
    bl fn_80097C08
    lfs f5, 0x52c(r30)
    addi r3, r28, 0x16f8
    lfs f4, 0x52c(r28)
    addi r5, r1, 0xa4
    lfs f3, 0x528(r30)
    mr r4, r3
    fsubs f5, f5, f4
    lfs f0, 0x528(r28)
    lfs f4, 0x530(r30)
    fsubs f3, f3, f0
    lfs f0, 0x530(r28)
    stfs f5, 0xa8(r1)
    fsubs f2, f4, f0
    lfs f0, lbl_80885378
    stfs f3, 0xa4(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xac(r1)
    stfs f2, 0x1700(r28)
    stfs f0, 0x16fc(r28)
    bl fn_805F98D0
    lfs f2, 0x1700(r28)
    addi r31, r28, 0x16f8
    lfs f0, lbl_808853D8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80351AB8_000017F0
    lfs f3, 0x0(r31)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_80351AB8_000017E4
    lfs f0, lbl_808853DC
    b lbl_fn_80351AB8_000017E8
lbl_fn_80351AB8_000017E4:
    lfs f0, lbl_808853E0
lbl_fn_80351AB8_000017E8:
    stfs f0, 0x54(r1)
    b lbl_fn_80351AB8_00001800
lbl_fn_80351AB8_000017F0:
    lfs f1, 0x0(r31)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x54(r1)
lbl_fn_80351AB8_00001800:
    lfs f0, 0x54(r1)
    addi r3, r1, 0x160
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885378
    addi r4, r1, 0x5c
    lfs f4, 0x168(r1)
    mr r5, r4
    lfs f5, 0x164(r1)
    addi r3, r1, 0x120
    lfs f6, 0x160(r1)
    lfs f7, 0x178(r1)
    lfs f8, 0x174(r1)
    lfs f9, 0x170(r1)
    lfs f10, 0x188(r1)
    lfs f11, 0x184(r1)
    lfs f12, 0x180(r1)
    lfs f13, 0x18c(r1)
    lfs f31, 0x17c(r1)
    lfs f30, 0x16c(r1)
    lfs f0, lbl_80885398
    stfs f3, 0x150(r1)
    stfs f3, 0x154(r1)
    stfs f3, 0x158(r1)
    stfs f0, 0x15c(r1)
    stfs f6, 0x120(r1)
    stfs f5, 0x124(r1)
    stfs f4, 0x128(r1)
    stfs f9, 0x130(r1)
    stfs f8, 0x134(r1)
    stfs f7, 0x138(r1)
    stfs f12, 0x140(r1)
    stfs f11, 0x144(r1)
    stfs f10, 0x148(r1)
    stfs f30, 0x12c(r1)
    stfs f31, 0x13c(r1)
    stfs f13, 0x14c(r1)
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x8(r31)
    stfs f6, 0x8c(r1)
    stfs f5, 0x90(r1)
    stfs f4, 0x94(r1)
    stfs f9, 0x80(r1)
    stfs f8, 0x84(r1)
    stfs f7, 0x88(r1)
    stfs f12, 0x74(r1)
    stfs f11, 0x78(r1)
    stfs f10, 0x7c(r1)
    stfs f30, 0x68(r1)
    stfs f31, 0x6c(r1)
    stfs f13, 0x70(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F9750
    lfs f2, 0x64(r1)
    lfs f0, lbl_808853D8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80351AB8_0000191C
    lfs f3, 0x60(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_80351AB8_0000190C
    lfs f0, lbl_808853DC
    b lbl_fn_80351AB8_00001910
lbl_fn_80351AB8_0000190C:
    lfs f0, lbl_808853E0
lbl_fn_80351AB8_00001910:
    fneg f0, f0
    stfs f0, 0x50(r1)
    b lbl_fn_80351AB8_00001930
lbl_fn_80351AB8_0000191C:
    lfs f1, 0x60(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x50(r1)
lbl_fn_80351AB8_00001930:
    addi r3, r1, 0x50
    lfs f2, lbl_80885378
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r28
    psq_st f1, 0x0(r31), 0, 0
    li r5, 0x3ee
    li r6, 0x1
    stfs f2, 0x8(r31)
    stfs f2, 0x58(r1)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    b lbl_fn_80351AB8_00001B8C
lbl_fn_80351AB8_00001960:
    lfs f0, lbl_80885398
    cmpwi r29, 0x0
    stw r31, 0x3fc(r28)
    addi r3, r28, 0xb0
    li r4, 0x0
    li r5, 0x36
    stfs f0, 0x2fc(r28)
    stfs f0, 0x2e8(r28)
    bne lbl_fn_80351AB8_00001988
    li r5, 0x37
lbl_fn_80351AB8_00001988:
    lfs f1, lbl_80885378
    li r6, 0x0
    lfs f2, lbl_808853C4
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f5, 0x52c(r30)
    addi r3, r28, 0x16f8
    lfs f4, 0x52c(r28)
    addi r5, r1, 0x98
    lfs f3, 0x528(r30)
    mr r4, r3
    fsubs f5, f5, f4
    lfs f0, 0x528(r28)
    lfs f4, 0x530(r30)
    fsubs f3, f3, f0
    lfs f0, 0x530(r28)
    stfs f5, 0x9c(r1)
    fsubs f2, f4, f0
    lfs f0, lbl_80885378
    stfs f3, 0x98(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xa0(r1)
    stfs f2, 0x1700(r28)
    stfs f0, 0x16fc(r28)
    bl fn_805F98D0
    lfs f2, 0x1700(r28)
    addi r31, r28, 0x16f8
    lfs f0, lbl_808853D8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80351AB8_00001A34
    lfs f3, 0x0(r31)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_80351AB8_00001A28
    lfs f0, lbl_808853DC
    b lbl_fn_80351AB8_00001A2C
lbl_fn_80351AB8_00001A28:
    lfs f0, lbl_808853E0
lbl_fn_80351AB8_00001A2C:
    stfs f0, 0xc(r1)
    b lbl_fn_80351AB8_00001A44
lbl_fn_80351AB8_00001A34:
    lfs f1, 0x0(r31)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xc(r1)
lbl_fn_80351AB8_00001A44:
    lfs f0, 0xc(r1)
    addi r3, r1, 0xf0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885378
    addi r4, r1, 0x14
    lfs f4, 0xf8(r1)
    mr r5, r4
    lfs f5, 0xf4(r1)
    addi r3, r1, 0xb0
    lfs f6, 0xf0(r1)
    lfs f7, 0x108(r1)
    lfs f8, 0x104(r1)
    lfs f9, 0x100(r1)
    lfs f10, 0x118(r1)
    lfs f11, 0x114(r1)
    lfs f12, 0x110(r1)
    lfs f13, 0x11c(r1)
    lfs f30, 0x10c(r1)
    lfs f31, 0xfc(r1)
    lfs f0, lbl_80885398
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f3, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f6, 0xb0(r1)
    stfs f5, 0xb4(r1)
    stfs f4, 0xb8(r1)
    stfs f9, 0xc0(r1)
    stfs f8, 0xc4(r1)
    stfs f7, 0xc8(r1)
    stfs f12, 0xd0(r1)
    stfs f11, 0xd4(r1)
    stfs f10, 0xd8(r1)
    stfs f31, 0xbc(r1)
    stfs f30, 0xcc(r1)
    stfs f13, 0xdc(r1)
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x8(r31)
    stfs f6, 0x44(r1)
    stfs f5, 0x48(r1)
    stfs f4, 0x4c(r1)
    stfs f9, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f7, 0x40(r1)
    stfs f12, 0x2c(r1)
    stfs f11, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f31, 0x20(r1)
    stfs f30, 0x24(r1)
    stfs f13, 0x28(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F9750
    lfs f2, 0x1c(r1)
    lfs f0, lbl_808853D8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80351AB8_00001B60
    lfs f3, 0x18(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_80351AB8_00001B50
    lfs f0, lbl_808853DC
    b lbl_fn_80351AB8_00001B54
lbl_fn_80351AB8_00001B50:
    lfs f0, lbl_808853E0
lbl_fn_80351AB8_00001B54:
    fneg f0, f0
    stfs f0, 0x8(r1)
    b lbl_fn_80351AB8_00001B74
lbl_fn_80351AB8_00001B60:
    lfs f1, 0x18(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8(r1)
lbl_fn_80351AB8_00001B74:
    addi r3, r1, 0x8
    lfs f2, lbl_80885378
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
lbl_fn_80351AB8_00001B8C:
    lfs f0, lbl_80885378
    li r29, 0x0
    stfs f0, 0x52c(r28)
    lwz r3, lbl_8087F4F0
    addis r3, r3, 0x1
    subi r31, r3, 0x7cf0
    mr r30, r31
lbl_fn_80351AB8_00001BA8:
    lwz r4, 0x20(r30)
    li r3, 0x0
    bl fn_80206B14
    cmpwi r3, 0x0
    beq lbl_fn_80351AB8_00001BE4
    bl fn_80206BE4
    mr r4, r3
    lwz r3, lbl_8087F4F0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x1
    li r10, 0x0
    bl fn_804439FC
lbl_fn_80351AB8_00001BE4:
    addi r29, r29, 0x1
    addi r30, r30, 0x8
    cmpwi r29, 0x2
    blt lbl_fn_80351AB8_00001BA8
    li r29, 0x0
lbl_fn_80351AB8_00001BF8:
    lwz r4, 0x0(r31)
    mr r3, r29
    bl fn_8020ED84
    cmpwi r3, 0x0
    beq lbl_fn_80351AB8_00001C34
    bl fn_8020EF80
    mr r4, r3
    lwz r3, lbl_8087F4F0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x1
    li r10, 0x0
    bl fn_804439FC
lbl_fn_80351AB8_00001C34:
    addi r29, r29, 0x1
    addi r31, r31, 0x8
    cmpwi r29, 0x2
    blt lbl_fn_80351AB8_00001BF8
    lwz r0, 0x1c4(r1)
    psq_l f31, 0x1b8(r1), 0, 0
    lfd f31, 0x1b0(r1)
    psq_l f30, 0x1a8(r1), 0, 0
    lfd f30, 0x1a0(r1)
    lwz r31, 0x19c(r1)
    lwz r30, 0x198(r1)
    lwz r29, 0x194(r1)
    lwz r28, 0x190(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}
