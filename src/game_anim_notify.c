#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _savegpr_20(void);
extern void fn_8004ED34(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800C3118(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_80108F38(void);
extern void fn_8015495C(void);
extern void fn_8015C3A8(void);
extern void fn_8015C6A0(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_8017039C(void);
extern void fn_801781B0(void);
extern void fn_80178A6C(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80277DC4(void);
extern void fn_802790A0(void);
extern void fn_80370AE4(void);
extern void fn_80370C6C(void);
extern void fn_8054A340(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_80744A08[];
extern u8 lbl_80744A10[];
extern u8 lbl_80744A18[];
extern u8 lbl_807850C8[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80883818;
extern u32 lbl_8088381C;
extern u32 lbl_80883820;
extern u32 lbl_80883830;
extern u32 lbl_80883838;
extern u32 lbl_80883848;
extern u32 lbl_80883860;
extern u32 lbl_80883868;
extern u32 lbl_8088386C;
extern u32 lbl_80883878;
extern u32 lbl_80883884;
extern u32 lbl_80883888;
extern u32 lbl_8088388C;
extern u32 lbl_80883898;
extern u32 lbl_8088389C;
extern u32 lbl_808838A0;
extern u32 lbl_808838A4;
extern u32 lbl_808838A8;
extern u32 lbl_808838AC;
extern u32 lbl_808838B0;
extern u32 lbl_808838B4;
extern u32 lbl_808838B8;
extern u32 lbl_808838BC;

/* Function declarations */
void fn_8027641C(void);
void fn_80276484(void);
void fn_80276648(void);
void fn_802766B8(void);
void fn_802767B0(void);
void fn_8027686C(void);
void fn_8027688C(void);
void fn_802768CC(void);
void fn_80276944(void);
void fn_80276AE4(void);
void fn_80276B3C(void);
void fn_80276BF4(void);
void fn_80276CAC(void);
void fn_80276D58(void);
void fn_80276E44(void);
void fn_80276ECC(void);
void fn_802773F8(void);
void fn_80277478(void);
void fn_802777CC(void);
void fn_80277850(void);
void fn_802778B0(void);
void fn_80277968(void);
void fn_80277A88(void);
void fn_80277AF0(void);
void fn_80277B84(void);
void fn_80277BC0(void);

asm void fn_8027641C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8027641C_0000004C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x138(r12)
    mtctr r12
    bctrl
lbl_fn_8027641C_0000004C:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80276484(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80276484_00000128
    lwz r3, 0x14e8(r31)
    lwz r0, 0x14d0(r31)
    cmpwi r3, 0x7
    stw r0, 0x14d4(r31)
    beq lbl_fn_80276484_000000C8
    cmpwi r3, 0x8
    beq lbl_fn_80276484_000000E0
    cmpwi r3, 0x9
    beq lbl_fn_80276484_000000F8
    b lbl_fn_80276484_00000110
lbl_fn_80276484_000000C8:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x13c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80276484_00000210
lbl_fn_80276484_000000E0:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x140(r12)
    mtctr r12
    bctrl
    b lbl_fn_80276484_00000210
lbl_fn_80276484_000000F8:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x144(r12)
    mtctr r12
    bctrl
    b lbl_fn_80276484_00000210
lbl_fn_80276484_00000110:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x138(r12)
    mtctr r12
    bctrl
    b lbl_fn_80276484_00000210
lbl_fn_80276484_00000128:
    lfs f1, 0x2e4(r31)
    lfs f0, lbl_8088389C
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_80276484_00000210
    lfs f0, lbl_808838A0
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80276484_00000210
    lfs f1, 0x14f4(r31)
    lis r3, lbl_80744A08@ha
    lfs f0, 0x14f0(r31)
    lwz r4, 0x14ec(r31)
    fsubs f1, f1, f0
    lfd f2, lbl_80744A08@l(r3)
    addi r0, r4, 0x2
    stw r0, 0x14ec(r31)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_80883848
    fcmpo cr0, f4, f0
    ble lbl_fn_80276484_00000188
    lfs f0, lbl_80883888
    fsubs f4, f4, f0
lbl_fn_80276484_00000188:
    lfs f0, lbl_8088388C
    fcmpo cr0, f4, f0
    bge lbl_fn_80276484_0000019C
    lfs f0, lbl_80883888
    fadds f4, f4, f0
lbl_fn_80276484_0000019C:
    lwz r4, 0x14ec(r31)
    lis r0, 0x4330
    lis r5, lbl_80744A10@ha
    stw r0, 0x8(r1)
    xoris r4, r4, 0x8000
    lfd f3, lbl_80744A10@l(r5)
    stw r4, 0xc(r1)
    lis r3, lbl_80744A08@ha
    lfs f1, lbl_80883884
    lfd f2, 0x8(r1)
    lfs f0, 0x14f0(r31)
    fsubs f3, f2, f3
    lfd f2, lbl_80744A08@l(r3)
    fmuls f3, f3, f4
    fdivs f1, f3, f1
    fadds f1, f0, f1
    bl fn_8068AEA8
    frsp f1, f1
    lfs f0, lbl_80883848
    fcmpo cr0, f1, f0
    ble lbl_fn_80276484_000001F8
    lfs f0, lbl_80883888
    fsubs f1, f1, f0
lbl_fn_80276484_000001F8:
    lfs f0, lbl_8088388C
    fcmpo cr0, f1, f0
    bge lbl_fn_80276484_0000020C
    lfs f0, lbl_80883888
    fadds f1, f1, f0
lbl_fn_80276484_0000020C:
    stfs f1, 0x538(r31)
lbl_fn_80276484_00000210:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80276648(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80276648_00000280
    mr r3, r31
    bl fn_80277DC4
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x138(r12)
    mtctr r12
    bctrl
lbl_fn_80276648_00000280:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802766B8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r6, 0x0
    li r8, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r4, lbl_8087F430
    lwz r5, 0x14bc(r3)
    lwz r7, 0x10d8(r4)
    lwz r0, 0x78(r7)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802766B8_00000300
lbl_fn_802766B8_000002D8:
    lwz r4, 0x7c(r7)
    lwzx r0, r4, r8
    cmpw r5, r0
    bne lbl_fn_802766B8_000002F4
    mulli r0, r6, 0x28
    add r31, r4, r0
    b lbl_fn_802766B8_00000304
lbl_fn_802766B8_000002F4:
    addi r8, r8, 0x28
    addi r6, r6, 0x1
    bdnz lbl_fn_802766B8_000002D8
lbl_fn_802766B8_00000300:
    li r31, 0x0
lbl_fn_802766B8_00000304:
    lfs f3, 0x530(r3)
    lfs f0, 0xc(r31)
    lfs f2, 0x528(r3)
    addi r3, r1, 0x8
    lfs f1, 0x4(r31)
    fsubs f3, f3, f0
    lfs f0, lbl_80883820
    fsubs f1, f2, f1
    stfs f3, 0x10(r1)
    stfs f1, 0x8(r1)
    stfs f0, 0xc(r1)
    bl fn_805F9920
    lfs f0, lbl_808838A4
    fcmpo cr0, f1, f0
    bge lbl_fn_802766B8_00000368
    li r0, 0x0
    stw r0, 0x14f8(r30)
    mr r3, r30
    lfs f0, 0x14(r31)
    stfs f0, 0x538(r30)
    lwz r12, 0x0(r30)
    lwz r12, 0x158(r12)
    mtctr r12
    bctrl
    b lbl_fn_802766B8_0000037C
lbl_fn_802766B8_00000368:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0xfc(r12)
    mtctr r12
    bctrl
lbl_fn_802766B8_0000037C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802767B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r4, 0x14cc(r3)
    lfs f3, 0x530(r3)
    lfs f0, 0xc(r4)
    lfs f2, 0x528(r3)
    addi r3, r1, 0x8
    lfs f1, 0x4(r4)
    fsubs f3, f3, f0
    lfs f0, lbl_80883820
    fsubs f1, f2, f1
    stfs f3, 0x10(r1)
    stfs f1, 0x8(r1)
    stfs f0, 0xc(r1)
    bl fn_805F9920
    lfs f0, lbl_808838A4
    fcmpo cr0, f1, f0
    bge lbl_fn_802767B0_00000428
    li r0, 0x0
    stw r0, 0x14f8(r31)
    mr r3, r31
    li r4, 0x9
    lwz r12, 0x0(r31)
    lwz r12, 0x154(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_802767B0_0000043C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x144(r12)
    mtctr r12
    bctrl
    b lbl_fn_802767B0_0000043C
lbl_fn_802767B0_00000428:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xfc(r12)
    mtctr r12
    bctrl
lbl_fn_802767B0_0000043C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8027686C(void)
{
    nofralloc
    lwz r0, 0x14dc(r3)
    cmpwi r0, 0x1c2
    bltlr
    lwz r12, 0x0(r3)
    lwz r12, 0x138(r12)
    mtctr r12
    bctr
    blr
}

asm void fn_8027688C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x14d8(r3)
    stw r0, 0x14dc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802768CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x14d8(r3)
    stw r31, 0x14dc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0x6
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    stw r31, 0x18f0(r30)
    mr r4, r30
    li r5, 0xc8
    li r6, 0x0
    stw r31, 0x14f8(r30)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80276944(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    li r31, 0x0
    stw r30, 0x38(r1)
    mr r30, r3
    stw r31, 0x14d8(r3)
    stw r31, 0x14dc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    lwz r12, 0x0(r30)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r30
    bl fn_80178A6C
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r30
    bl fn_8016DA4C
    li r0, 0x2
    stw r0, 0x58c(r30)
    lfs f1, lbl_80883820
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_80883830
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883820
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x2e
    lfs f2, lbl_80883878
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x18ec(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80276944_00000614
    bl fn_8015C6A0
    stw r31, 0x18ec(r30)
    li r31, 0x0
lbl_fn_80276944_000005FC:
    mr r3, r30
    mr r4, r31
    bl fn_802790A0
    addi r31, r31, 0x1
    cmpwi r31, 0x4
    blt lbl_fn_80276944_000005FC
lbl_fn_80276944_00000614:
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883820
    li r3, -0x1
    lfs f1, lbl_80883830
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r30, 0x1914
    addi r5, r30, 0xb0
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
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x1
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80276AE4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r11, r7
    mr r7, r6
    stw r0, 0x24(r1)
    mr r0, r8
    lfs f0, lbl_80883830
    mr r8, r11
    stfs f0, 0x10(r1)
    li r6, 0x0
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stw r9, 0x8(r1)
    addi r9, r1, 0x10
    stw r10, 0xc(r1)
    mr r10, r0
    bl fn_8023A8B4
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80276B3C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x8
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x154(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80276B3C_000007C4
    li r0, 0x0
    stw r0, 0x14d8(r31)
    stw r0, 0x14dc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x14e4(r31)
    li r5, 0x8
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    addi r0, r4, 0x1
    lfs f1, lbl_80883820
    stw r5, 0x58c(r31)
    li r4, 0x0
    stw r0, 0x14e4(r31)
    bl fn_80097CCC
    lfs f0, lbl_80883830
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883820
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x145
    lfs f2, lbl_80883878
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_80276B3C_000007C4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80276BF4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x7
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x154(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80276BF4_0000087C
    li r0, 0x0
    stw r0, 0x14d8(r31)
    stw r0, 0x14dc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x14e4(r31)
    li r5, 0x7
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    addi r0, r4, 0x1
    lfs f1, lbl_80883820
    stw r5, 0x58c(r31)
    li r4, 0x0
    stw r0, 0x14e4(r31)
    bl fn_80097CCC
    lfs f0, lbl_80883830
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883820
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x13f
    lfs f2, lbl_80883878
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_80276BF4_0000087C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80276CAC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x14d8(r3)
    stw r0, 0x14dc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883830
    li r4, 0x9
    stw r3, 0x590(r31)
    li r0, 0x1
    lfs f1, lbl_80883820
    addi r3, r31, 0xb0
    stw r4, 0x58c(r31)
    li r4, 0x0
    lfs f2, lbl_80883878
    li r5, 0x14b
    stw r0, 0x3fc(r31)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2fc(r31)
    bl fn_80097C08
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_808838A8
    mr r3, r31
    fdivs f0, f1, f0
    stfs f0, 0x2e8(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x174(r12)
    mtctr r12
    bctrl
    stw r3, 0x18e8(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80276D58(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_80276D58_00000974
    lwz r0, 0x5694(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80276D58_00000974
    lwz r3, 0x14d4(r3)
    b lbl_fn_80276D58_00000A10
lbl_fn_80276D58_00000974:
    lis r8, lbl_80744A18@ha
    lwzu r7, lbl_80744A18@l(r8)
    stw r7, 0x8(r1)
    addi r31, r1, 0x8
    lwz r6, 0x4(r8)
    li r3, 0x0
    lwz r5, 0x8(r8)
    lwz r4, 0xc(r8)
    lwz r0, 0x10(r8)
    stw r6, 0xc(r1)
    stw r5, 0x10(r1)
    stw r4, 0x14(r1)
    stw r0, 0x18(r1)
    b lbl_fn_80276D58_000009F0
lbl_fn_80276D58_000009AC:
    lwz r3, lbl_8087F8A0
    bl fn_8054A340
    cmpwi r3, 0x0
    beq lbl_fn_80276D58_000009E8
    lwz r5, 0x38(r3)
    li r4, 0x0
    rlwinm r0, r5, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80276D58_000009E0
    clrlwi r0, r5, 31
    cmplwi r0, 0x1
    beq lbl_fn_80276D58_000009E0
    li r4, 0x1
lbl_fn_80276D58_000009E0:
    cmpwi r4, 0x0
    bne lbl_fn_80276D58_000009EC
lbl_fn_80276D58_000009E8:
    li r3, 0x0
lbl_fn_80276D58_000009EC:
    addi r31, r31, 0x4
lbl_fn_80276D58_000009F0:
    cmpwi r3, 0x0
    bne lbl_fn_80276D58_00000A04
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    bge lbl_fn_80276D58_000009AC
lbl_fn_80276D58_00000A04:
    cmpwi r3, 0x0
    bne lbl_fn_80276D58_00000A10
    lwz r3, 0x14d4(r30)
lbl_fn_80276D58_00000A10:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80276E44(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x14d8(r3)
    stw r0, 0x14dc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883830
    li r4, 0xa
    stw r3, 0x590(r31)
    li r0, 0x1
    lfs f1, lbl_80883820
    addi r3, r31, 0xb0
    stw r4, 0x58c(r31)
    li r4, 0x0
    lfs f2, lbl_80883878
    li r5, 0x147
    stw r0, 0x3fc(r31)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r0, 0x1528(r31)
    stw r0, 0x18f0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80276ECC(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    li r0, 0x0
    stfd f31, 0x1d0(r1)
    psq_st f31, 0x1d8(r1), 0, 0
    stfd f30, 0x1c0(r1)
    psq_st f30, 0x1c8(r1), 0, 0
    stw r31, 0x1bc(r1)
    stw r30, 0x1b8(r1)
    mr r30, r3
    stw r0, 0x14d8(r3)
    stw r0, 0x14dc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883830
    li r4, 0xb
    stw r3, 0x590(r30)
    li r0, 0x1
    lfs f1, lbl_80883820
    addi r3, r30, 0xb0
    stw r4, 0x58c(r30)
    li r4, 0x0
    lfs f2, lbl_80883878
    li r5, 0x148
    stw r0, 0x3fc(r30)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2fc(r30)
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r5, 0x18ec(r30)
    addi r3, r1, 0xc8
    lfs f0, 0x530(r30)
    mr r4, r3
    lfs f3, 0x530(r5)
    lfs f5, 0x52c(r5)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r30)
    lfs f3, 0x528(r5)
    lfs f0, 0x528(r30)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xcc(r1)
    stfs f0, 0xc8(r1)
    stfs f6, 0xd0(r1)
    bl fn_805F98D0
    lfs f2, 0xd0(r1)
    addi r3, r1, 0xc8
    lfs f0, lbl_80883838
    addi r31, r1, 0xbc
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0xc4(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80276ECC_00000BC0
    lfs f3, 0xbc(r1)
    lfs f0, lbl_80883820
    fcmpo cr0, f3, f0
    ble lbl_fn_80276ECC_00000BB4
    lfs f0, lbl_80883868
    b lbl_fn_80276ECC_00000BB8
lbl_fn_80276ECC_00000BB4:
    lfs f0, lbl_8088386C
lbl_fn_80276ECC_00000BB8:
    stfs f0, 0x90(r1)
    b lbl_fn_80276ECC_00000BD4
lbl_fn_80276ECC_00000BC0:
    frsp f2, f2
    lfs f1, 0xbc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_80276ECC_00000BD4:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x148
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883820
    addi r4, r1, 0x80
    lfs f30, 0x150(r1)
    mr r5, r4
    lfs f31, 0x14c(r1)
    addi r3, r1, 0x178
    lfs f13, 0x148(r1)
    lfs f12, 0x160(r1)
    lfs f11, 0x15c(r1)
    lfs f10, 0x158(r1)
    lfs f9, 0x170(r1)
    lfs f8, 0x16c(r1)
    lfs f7, 0x168(r1)
    lfs f6, 0x174(r1)
    lfs f5, 0x164(r1)
    lfs f4, 0x154(r1)
    lfs f0, lbl_80883830
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xc4(r1)
    stfs f3, 0x1a8(r1)
    stfs f3, 0x1ac(r1)
    stfs f3, 0x1b0(r1)
    stfs f0, 0x1b4(r1)
    stfs f13, 0x50(r1)
    stfs f31, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f13, 0x178(r1)
    stfs f31, 0x17c(r1)
    stfs f30, 0x180(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x188(r1)
    stfs f11, 0x18c(r1)
    stfs f12, 0x190(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x198(r1)
    stfs f8, 0x19c(r1)
    stfs f9, 0x1a0(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x184(r1)
    stfs f5, 0x194(r1)
    stfs f6, 0x1a4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80883838
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80276ECC_00000CF0
    lfs f3, 0x84(r1)
    lfs f0, lbl_80883820
    fcmpo cr0, f3, f0
    ble lbl_fn_80276ECC_00000CE0
    lfs f0, lbl_80883868
    b lbl_fn_80276ECC_00000CE4
lbl_fn_80276ECC_00000CE0:
    lfs f0, lbl_8088386C
lbl_fn_80276ECC_00000CE4:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_80276ECC_00000D04
lbl_fn_80276ECC_00000CF0:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_80276ECC_00000D04:
    lfs f0, lbl_80883820
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x0
    fmr f2, f0
    psq_st f1, 0x534(r30), 0, 0
    addi r4, r30, 0x1538
    li r5, 0x67
    stfs f2, 0xc4(r1)
    li r6, 0x1
    frsp f2, f2
    stw r0, 0x18f0(r30)
    stfs f2, 0x53c(r30)
    stfs f0, 0x94(r1)
    lwz r3, lbl_8087F3C0
    psq_st f1, 0x0(r31), 0, 0
    bl fn_80239DAC
    lfs f4, lbl_80883898
    addi r3, r1, 0xb0
    lfs f3, 0xcc(r1)
    addi r4, r1, 0xc8
    lfs f0, 0xc8(r1)
    addi r31, r1, 0x98
    fmuls f6, f3, f4
    lfs f5, 0xd0(r1)
    fmuls f7, f0, f4
    lfs f0, 0x528(r30)
    fmuls f4, f5, f4
    lfs f3, 0x52c(r30)
    fadds f5, f3, f6
    lfs f3, 0x530(r30)
    fadds f0, f0, f7
    lwz r5, 0x18ec(r30)
    fadds f3, f3, f4
    stfs f5, 0xb4(r1)
    stfs f0, 0xb0(r1)
    fmr f2, f3
    lfs f0, lbl_80883838
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x530(r5)
    lfs f2, 0xd0(r1)
    psq_l f1, 0x0(r4), 0, 0
    fabs f5, f2
    stfs f7, 0xa4(r1)
    stfs f6, 0xa8(r1)
    frsp f5, f5
    stfs f4, 0xac(r1)
    fcmpo cr0, f5, f0
    stfs f3, 0xb8(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0xa0(r1)
    bge lbl_fn_80276ECC_00000DFC
    lfs f3, 0x98(r1)
    lfs f0, lbl_80883820
    fcmpo cr0, f3, f0
    ble lbl_fn_80276ECC_00000DF0
    lfs f0, lbl_80883868
    b lbl_fn_80276ECC_00000DF4
lbl_fn_80276ECC_00000DF0:
    lfs f0, lbl_8088386C
lbl_fn_80276ECC_00000DF4:
    stfs f0, 0x48(r1)
    b lbl_fn_80276ECC_00000E10
lbl_fn_80276ECC_00000DFC:
    frsp f2, f2
    lfs f1, 0x98(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80276ECC_00000E10:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xd8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883820
    addi r4, r1, 0x38
    lfs f31, 0xe0(r1)
    mr r5, r4
    lfs f30, 0xdc(r1)
    addi r3, r1, 0x108
    lfs f13, 0xd8(r1)
    lfs f12, 0xf0(r1)
    lfs f11, 0xec(r1)
    lfs f10, 0xe8(r1)
    lfs f9, 0x100(r1)
    lfs f8, 0xfc(r1)
    lfs f7, 0xf8(r1)
    lfs f6, 0x104(r1)
    lfs f5, 0xf4(r1)
    lfs f4, 0xe4(r1)
    lfs f0, lbl_80883830
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xa0(r1)
    stfs f3, 0x138(r1)
    stfs f3, 0x13c(r1)
    stfs f3, 0x140(r1)
    stfs f0, 0x144(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0x108(r1)
    stfs f30, 0x10c(r1)
    stfs f31, 0x110(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x118(r1)
    stfs f11, 0x11c(r1)
    stfs f12, 0x120(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x128(r1)
    stfs f8, 0x12c(r1)
    stfs f9, 0x130(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x114(r1)
    stfs f5, 0x124(r1)
    stfs f6, 0x134(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883838
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80276ECC_00000F2C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883820
    fcmpo cr0, f3, f0
    ble lbl_fn_80276ECC_00000F1C
    lfs f0, lbl_80883868
    b lbl_fn_80276ECC_00000F20
lbl_fn_80276ECC_00000F1C:
    lfs f0, lbl_8088386C
lbl_fn_80276ECC_00000F20:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80276ECC_00000F40
lbl_fn_80276ECC_00000F2C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80276ECC_00000F40:
    addi r3, r1, 0x44
    lfs f2, lbl_80883820
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r30
    lwz r3, 0x18ec(r30)
    stfs f2, 0x4c(r1)
    stfs f2, 0xa0(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    psq_st f1, 0x0(r31), 0, 0
    lwz r3, 0x18ec(r30)
    bl fn_8015C3A8
    lwz r5, 0x18ec(r30)
    li r4, 0x79
    lwz r3, lbl_8087F430
    lwz r0, 0x48(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80276ECC_00000F94
    li r5, 0xa
    b lbl_fn_80276ECC_00000F98
lbl_fn_80276ECC_00000F94:
    lwz r5, 0x58(r5)
lbl_fn_80276ECC_00000F98:
    bl fn_80370AE4
    lwz r3, 0x18ec(r30)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80276ECC_00000FB4
    lwz r3, lbl_8087F430
    bl fn_80370C6C
lbl_fn_80276ECC_00000FB4:
    lwz r0, 0x1e4(r1)
    psq_l f31, 0x1d8(r1), 0, 0
    lfd f31, 0x1d0(r1)
    psq_l f30, 0x1c8(r1), 0, 0
    lfd f30, 0x1c0(r1)
    lwz r31, 0x1bc(r1)
    lwz r30, 0x1b8(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}

asm void fn_802773F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x14d8(r3)
    stw r0, 0x14dc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883830
    li r4, 0xc
    stw r3, 0x590(r31)
    li r0, 0x1
    lfs f1, lbl_80883820
    addi r3, r31, 0xb0
    stw r4, 0x58c(r31)
    li r4, 0x0
    lfs f2, lbl_80883878
    li r5, 0x33
    stw r0, 0x3fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80277478(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    stw r30, 0xe8(r1)
    mr r30, r4
    stw r29, 0xe4(r1)
    mr r29, r3
    lwz r5, 0x14d4(r3)
    cmpwi r5, 0x0
    bne lbl_fn_80277478_000010A0
    li r3, 0x0
    b lbl_fn_80277478_00001384
lbl_fn_80277478_000010A0:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x10
    bne lbl_fn_80277478_000010B4
    li r3, 0x0
    b lbl_fn_80277478_00001384
lbl_fn_80277478_000010B4:
    lfs f0, 0x538(r3)
    addi r4, r1, 0x50
    stfs f0, 0x14f0(r3)
    addi r31, r1, 0x5c
    lfs f0, 0x530(r3)
    lfs f3, 0x530(r5)
    lfs f5, 0x52c(r5)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x528(r5)
    fsubs f4, f5, f4
    lfs f0, 0x528(r3)
    stfs f2, 0x58(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80883838
    stfs f4, 0x54(r1)
    frsp f4, f2
    stfs f3, 0x50(r1)
    fabs f3, f4
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80277478_0000113C
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80883820
    fcmpo cr0, f3, f0
    ble lbl_fn_80277478_00001130
    lfs f0, lbl_80883868
    b lbl_fn_80277478_00001134
lbl_fn_80277478_00001130:
    lfs f0, lbl_8088386C
lbl_fn_80277478_00001134:
    stfs f0, 0x48(r1)
    b lbl_fn_80277478_00001150
lbl_fn_80277478_0000113C:
    fmr f2, f4
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80277478_00001150:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883820
    addi r4, r1, 0x38
    lfs f30, 0x70(r1)
    mr r5, r4
    lfs f31, 0x6c(r1)
    addi r3, r1, 0x98
    lfs f13, 0x68(r1)
    lfs f12, 0x80(r1)
    lfs f11, 0x7c(r1)
    lfs f10, 0x78(r1)
    lfs f9, 0x90(r1)
    lfs f8, 0x8c(r1)
    lfs f7, 0x88(r1)
    lfs f6, 0x94(r1)
    lfs f5, 0x84(r1)
    lfs f4, 0x74(r1)
    lfs f0, lbl_80883830
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x98(r1)
    stfs f31, 0x9c(r1)
    stfs f30, 0xa0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xa8(r1)
    stfs f11, 0xac(r1)
    stfs f12, 0xb0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xb8(r1)
    stfs f8, 0xbc(r1)
    stfs f9, 0xc0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xa4(r1)
    stfs f5, 0xb4(r1)
    stfs f6, 0xc4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883838
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80277478_0000126C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883820
    fcmpo cr0, f3, f0
    ble lbl_fn_80277478_0000125C
    lfs f0, lbl_80883868
    b lbl_fn_80277478_00001260
lbl_fn_80277478_0000125C:
    lfs f0, lbl_8088386C
lbl_fn_80277478_00001260:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80277478_00001280
lbl_fn_80277478_0000126C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80277478_00001280:
    addi r3, r1, 0x44
    lfs f4, lbl_80883820
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80744A08@ha
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f4
    lfs f0, 0x14f0(r29)
    lfs f3, 0x60(r1)
    stfs f2, 0x64(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80744A08@l(r3)
    stfs f4, 0x4c(r1)
    stfs f3, 0x14f4(r29)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80883848
    fcmpo cr0, f3, f0
    ble lbl_fn_80277478_000012D0
    lfs f0, lbl_80883888
    fsubs f3, f3, f0
lbl_fn_80277478_000012D0:
    lfs f0, lbl_8088388C
    fcmpo cr0, f3, f0
    bge lbl_fn_80277478_000012E4
    lfs f0, lbl_80883888
    fadds f3, f3, f0
lbl_fn_80277478_000012E4:
    lfs f0, lbl_808838AC
    fcmpo cr0, f0, f3
    bge lbl_fn_80277478_00001304
    lfs f0, lbl_808838B0
    fcmpo cr0, f3, f0
    bge lbl_fn_80277478_00001304
    li r3, 0x0
    b lbl_fn_80277478_00001384
lbl_fn_80277478_00001304:
    lwz r0, 0x14d4(r29)
    li r3, 0x0
    stw r3, 0x14ec(r29)
    stw r30, 0x14e8(r29)
    stw r0, 0x14d0(r29)
    stw r3, 0x14d8(r29)
    stw r3, 0x14dc(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    li r0, 0x10
    lfs f1, lbl_80883820
    addi r3, r29, 0xb0
    stw r0, 0x58c(r29)
    li r4, 0x0
    bl fn_80097CCC
    lfs f3, lbl_80883830
    li r0, 0x1
    lfs f0, lbl_808838B4
    addi r3, r29, 0xb0
    stw r0, 0x3fc(r29)
    li r4, 0x0
    lfs f1, lbl_80883820
    li r5, 0x14d
    stfs f3, 0x2fc(r29)
    li r6, 0x0
    lfs f2, lbl_80883878
    li r7, 0x0
    stfs f0, 0x2e8(r29)
    li r8, 0x1
    bl fn_80097C08
    li r3, 0x1
lbl_fn_80277478_00001384:
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_802777CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x14d8(r3)
    stw r0, 0x14dc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883830
    li r4, 0xd
    stw r3, 0x590(r31)
    li r0, 0x1
    lfs f1, lbl_80883820
    addi r3, r31, 0xb0
    stw r4, 0x58c(r31)
    li r4, 0x0
    lfs f2, lbl_80883878
    li r5, 0x14b
    stw r0, 0x3fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2fc(r31)
    bl fn_80097C08
    lfs f0, lbl_80883860
    stfs f0, 0x2e8(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80277850(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x14d8(r3)
    stw r0, 0x14dc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r3, 0xe
    li r0, 0x1
    lwz r4, 0x14bc(r31)
    stw r3, 0x58c(r31)
    mr r3, r31
    li r5, 0x2
    stw r0, 0x14f8(r31)
    bl fn_8017039C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802778B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x14d8(r3)
    stw r0, 0x14dc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r4, 0xf
    li r0, 0x1
    mr r3, r31
    stw r4, 0x58c(r31)
    stw r0, 0x14f8(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x170(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x14cc(r31)
    beq lbl_fn_802778B0_00001504
    lwz r4, 0x0(r3)
    mr r3, r31
    li r5, 0x2
    bl fn_8017039C
    b lbl_fn_802778B0_00001538
lbl_fn_802778B0_00001504:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x9
    lwz r12, 0x154(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_802778B0_00001538
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x144(r12)
    mtctr r12
    bctrl
lbl_fn_802778B0_00001538:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80277968(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    li r0, 0x0
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r3
    stw r0, 0x14d8(r3)
    stw r0, 0x14dc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0x12
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f1, lbl_80883820
    li r31, 0x1
    lfs f0, lbl_80883830
    addi r3, r30, 0xb0
    stw r31, 0x3fc(r30)
    li r4, 0x0
    lfs f2, lbl_80883878
    li r5, 0x2
    stfs f0, 0x2fc(r30)
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    stfs f1, 0x2e8(r30)
    bl fn_80097C08
    mr r3, r30
    li r4, 0xc8
    bl fn_80232B7C
    lfs f0, lbl_80883820
    li r0, -0x1
    lfs f1, lbl_80883830
    addi r4, r30, 0x192c
    stfs f0, 0x1c(r1)
    addi r5, r30, 0xb0
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
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r31, lbl_8087F048
    mr r4, r30
    addi r3, r1, 0x38
    bl fn_801781B0
    mr r3, r31
    addi r4, r1, 0x38
    li r5, 0x80
    bl fn_80108F38
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80277A88(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80277A88_000016B8
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x138(r12)
    mtctr r12
    bctrl
lbl_fn_80277A88_000016B8:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80277AF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x14d8(r3)
    stw r0, 0x14dc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x11
    mr r3, r31
    li r4, 0x6
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80883830
    li r3, 0x16
    li r0, 0x1
    stw r3, 0x560(r31)
    lfs f1, lbl_80883820
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_808838B8
    li r5, 0x1dd
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80277B84(void)
{
    nofralloc
    lwz r0, 0x190c(r3)
    li r6, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80277B84_0000179C
lbl_fn_80277B84_0000177C:
    lwz r5, 0x1908(r3)
    lwzx r0, r5, r6
    cmplw r0, r4
    bne lbl_fn_80277B84_00001794
    li r3, 0x1
    blr
lbl_fn_80277B84_00001794:
    addi r6, r6, 0x4
    bdnz lbl_fn_80277B84_0000177C
lbl_fn_80277B84_0000179C:
    li r3, 0x0
    blr
}

asm void fn_80277BC0(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0xc0
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    stfd f30, 0xc0(r1)
    psq_st f30, 0xc8(r1), 0, 0
    bl _savegpr_20
    li r22, 0x0
    lis r26, lbl_807850C8@ha
    lfs f30, lbl_808838BC
    mr r20, r3
    lfs f31, lbl_80883830
    mr r27, r22
    addi r26, r26, lbl_807850C8@l
    addi r24, r1, 0x28
    addi r25, r1, 0x34
    addi r23, r3, 0x528
    li r21, 0x0
    li r31, 0x0
    li r28, -0x1
    li r29, 0x1
    lis r30, lbl_807C7030@ha
lbl_fn_80277BC0_00001804:
    lwzx r4, r26, r31
    addi r3, r20, 0xb0
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80277BC0_00001824
    li r3, 0x0
    b lbl_fn_80277BC0_00001830
lbl_fn_80277BC0_00001824:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r20)
    add r3, r3, r0
lbl_fn_80277BC0_00001830:
    lfs f0, 0x1c(r3)
    mr r5, r23
    lfs f3, 0xc(r3)
    mr r6, r25
    lfs f2, 0x2c(r3)
    addi r4, r1, 0x40
    stfs f3, 0x28(r1)
    lis r7, 0x8000
    frsp f4, f2
    lwz r3, lbl_8087EE98
    stfs f0, 0x2c(r1)
    li r8, 0x0
    li r9, 0x0
    psq_l f1, 0x0(r24), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x3c(r1)
    lfs f0, 0x34(r1)
    lfs f7, 0x0(r23)
    lfs f3, 0x38(r1)
    fsubs f0, f0, f7
    stfs f2, 0x30(r1)
    stfs f0, 0x34(r1)
    fmuls f0, f0, f30
    lfs f6, 0x4(r23)
    fsubs f5, f3, f6
    fadds f3, f0, f7
    stfs f5, 0x38(r1)
    fadds f0, f5, f6
    lfs f5, 0x8(r23)
    fsubs f4, f4, f5
    stfs f0, 0x38(r1)
    stfs f3, 0x34(r1)
    fmuls f0, f4, f30
    fadds f0, f0, f5
    stfs f0, 0x3c(r1)
    lfs f0, 0x52c(r20)
    stfs f0, 0x38(r1)
    stw r27, 0x74(r1)
    stw r27, 0x78(r1)
    stw r27, 0x7c(r1)
    stw r27, 0x80(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80277BC0_00001970
    cmpwi r22, 0x0
    bne lbl_fn_80277BC0_00001924
    lwz r3, lbl_8088381C
    bl fn_800C3118
    cmpwi r3, 0x0
    beq lbl_fn_80277BC0_00001924
    lwz r4, lbl_80883818
    addi r3, r1, 0x10
    lfs f1, lbl_80883830
    addi r5, r1, 0x50
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    li r22, 0x1
lbl_fn_80277BC0_00001924:
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    stfs f31, 0x18(r1)
    fmr f1, f31
    addi r4, r20, 0x1920
    addi r7, r1, 0x50
    stfs f31, 0x1c(r1)
    addi r8, r30, lbl_807C7030@l
    addi r9, r1, 0x18
    stfs f31, 0x20(r1)
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    stfs f31, 0x24(r1)
    stw r28, 0x8(r1)
    stw r29, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_80277BC0_00001970:
    addi r21, r21, 0x1
    addi r31, r31, 0x4
    cmpwi r21, 0x6
    blt lbl_fn_80277BC0_00001804
    addi r11, r1, 0xc0
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    psq_l f30, 0xc8(r1), 0, 0
    lfd f30, 0xc0(r1)
    bl _restgpr_20
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}
