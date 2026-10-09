#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_8016E970(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_8026F38C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_80744608[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_80883670;
extern u32 lbl_80883674;
extern u32 lbl_8088368C;
extern u32 lbl_80883690;
extern u32 lbl_80883694;
extern u32 lbl_80883698;
extern u32 lbl_808836A0;
extern u32 lbl_808836C0;
extern u32 lbl_8088374C;
extern u32 lbl_80883750;
extern u32 lbl_80883754;

/* Function declarations */
void fn_8026AC8C(void);
void fn_8026AF24(void);
void fn_8026AF78(void);
void fn_8026B008(void);
void fn_8026B118(void);
void fn_8026B430(void);
void fn_8026B748(void);
void fn_8026B9F0(void);
void fn_8026BB08(void);
void fn_8026BE2C(void);
void fn_8026C150(void);
void fn_8026C2C0(void);
void fn_8026C3E0(void);
void fn_8026C4E8(void);

asm void fn_8026AC8C(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    stw r31, 0x9c(r1)
    stw r30, 0x98(r1)
    stw r29, 0x94(r1)
    stw r28, 0x90(r1)
    mr r28, r3
    lwz r0, 0x14c4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8026AC8C_00000078
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_808836A0
    fcmpo cr0, f3, f0
    ble lbl_fn_8026AC8C_00000078
    li r0, 0x1
    stw r0, 0x14c4(r3)
    addi r5, r1, 0x4c
    addi r6, r1, 0x14
    li r4, 0x0
    bl fn_8026F38C
    addi r3, r1, 0x4c
    lfs f2, 0x54(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r28), 0, 0
    stfs f2, 0x530(r28)
    lfs f0, 0x14(r1)
    stfs f0, 0x538(r28)
lbl_fn_8026AC8C_00000078:
    lwz r0, 0x14c4(r28)
    cmpwi r0, 0x1
    bne lbl_fn_8026AC8C_000001F4
    lfs f3, 0x2e4(r28)
    lfs f0, lbl_8088374C
    fcmpo cr0, f3, f0
    ble lbl_fn_8026AC8C_000001F4
    li r0, 0x2
    stw r0, 0x14c4(r28)
    lfs f3, lbl_80883674
    addi r3, r1, 0x58
    lfs f0, lbl_80883670
    li r4, 0x79
    stfs f3, 0x28(r1)
    stfs f3, 0x2c(r1)
    stfs f0, 0x30(r1)
    lfs f1, 0x538(r28)
    bl fn_805F8E70
    addi r4, r1, 0x28
    addi r3, r1, 0x58
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x30(r1)
    li r3, 0x0
    lfs f5, lbl_808836C0
    li r4, 0x0
    lfs f3, 0x2c(r1)
    fmuls f6, f4, f5
    lfs f4, 0x530(r28)
    fmuls f7, f3, f5
    lfs f0, 0x28(r1)
    lfs f3, 0x52c(r28)
    fmuls f5, f0, f5
    lfs f0, 0x528(r28)
    fadds f4, f4, f6
    fadds f3, f3, f7
    stfs f5, 0x34(r1)
    fadds f0, f0, f5
    stfs f7, 0x38(r1)
    stfs f6, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f3, 0x44(r1)
    stfs f4, 0x48(r1)
    bl fn_80232B7C
    lfs f0, lbl_80883670
    lis r8, lbl_807C7030@ha
    stfs f0, 0x18(r1)
    li r31, -0x1
    li r0, 0x1
    lfs f1, lbl_80883750
    stfs f0, 0x1c(r1)
    addi r4, r28, 0x160c
    addi r7, r1, 0x40
    addi r8, r8, lbl_807C7030@l
    stfs f0, 0x20(r1)
    addi r9, r1, 0x18
    li r5, 0x0
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    stw r31, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    li r3, 0x619
    bl fn_80219E6C
    lwz r30, lbl_8087F048
    mr r29, r3
    mr r3, r30
    bl fn_800F8548
    stw r31, 0x8(r1)
    mr r6, r3
    lfs f1, lbl_80883674
    mr r3, r30
    stw r31, 0xc(r1)
    mr r4, r28
    lfs f2, lbl_80883670
    mr r5, r29
    addi r7, r1, 0x40
    addi r8, r28, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lis r4, lbl_80744608@ha
    lfs f1, lbl_80883670
    addi r4, r4, lbl_80744608@l
    addi r3, r1, 0x10
    addi r4, r4, 0x229
    addi r5, r1, 0x40
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8026AC8C_000001F4:
    lfs f31, 0x2e4(r28)
    addi r3, r28, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8026AC8C_00000270
    li r31, 0x0
    stw r31, 0x14bc(r28)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r28)
    li r0, 0x6
    stw r3, 0x590(r28)
    mr r3, r28
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r28)
    stw r5, 0x12a4(r28)
    stw r0, 0x58c(r28)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_8026AC8C_00000270:
    lwz r0, 0xb4(r1)
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    lwz r28, 0x90(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_8026AF24(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x12a4(r30)
    stw r3, 0x590(r30)
    rlwinm r0, r0, 0, 27, 25
    stw r31, 0x14c4(r30)
    stw r0, 0x12a4(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8026AF78(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r30)
    li r0, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r30)
    stw r5, 0x12a4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8026B008(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    li r31, 0x0
    stw r30, 0x38(r1)
    mr r30, r3
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r30)
    li r0, 0x8
    stw r3, 0x590(r30)
    mr r3, r30
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r30)
    stw r5, 0x12a4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f2, lbl_80883670
    li r31, 0x1
    lfs f0, lbl_80883754
    addi r3, r30, 0xb0
    stfs f2, 0x2fc(r30)
    li r4, 0x0
    lfs f1, lbl_80883674
    li r5, 0x156
    stw r31, 0x3fc(r30)
    li r6, 0x0
    lfs f2, lbl_80883698
    li r7, 0x0
    stfs f0, 0x2e8(r30)
    li r8, 0x1
    bl fn_80097C08
    mr r3, r30
    li r4, 0x65
    bl fn_80232B7C
    lfs f0, lbl_80883674
    li r0, -0x1
    lfs f1, lbl_80883670
    addi r4, r30, 0x1594
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
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8026B118(void)
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
    li r31, 0x0
    stw r30, 0x108(r1)
    mr r30, r3
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r30)
    li r0, 0x9
    stw r3, 0x590(r30)
    mr r3, r30
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r30)
    stw r5, 0x12a4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f0, lbl_80883670
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883674
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x13f
    lfs f2, lbl_80883698
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r4, 0x14b8(r30)
    addi r3, r1, 0x80
    lfs f0, 0x530(r30)
    addi r31, r1, 0x8c
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r30)
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    lfs f0, 0x528(r30)
    stfs f2, 0x88(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_8088368C
    stfs f4, 0x84(r1)
    frsp f4, f2
    stfs f3, 0x80(r1)
    fabs f3, f4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x94(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8026B118_000005A8
    lfs f3, 0x8c(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_8026B118_0000059C
    lfs f0, lbl_80883690
    b lbl_fn_8026B118_000005A0
lbl_fn_8026B118_0000059C:
    lfs f0, lbl_80883694
lbl_fn_8026B118_000005A0:
    stfs f0, 0x78(r1)
    b lbl_fn_8026B118_000005BC
lbl_fn_8026B118_000005A8:
    fmr f2, f4
    lfs f1, 0x8c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x78(r1)
lbl_fn_8026B118_000005BC:
    lfs f0, 0x78(r1)
    addi r3, r1, 0x98
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883674
    addi r4, r1, 0x68
    lfs f30, 0xa0(r1)
    mr r5, r4
    lfs f31, 0x9c(r1)
    addi r3, r1, 0xc8
    lfs f13, 0x98(r1)
    lfs f12, 0xb0(r1)
    lfs f11, 0xac(r1)
    lfs f10, 0xa8(r1)
    lfs f9, 0xc0(r1)
    lfs f8, 0xbc(r1)
    lfs f7, 0xb8(r1)
    lfs f6, 0xc4(r1)
    lfs f5, 0xb4(r1)
    lfs f4, 0xa4(r1)
    lfs f0, lbl_80883670
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x94(r1)
    stfs f3, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f3, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f13, 0x38(r1)
    stfs f31, 0x3c(r1)
    stfs f30, 0x40(r1)
    stfs f13, 0xc8(r1)
    stfs f31, 0xcc(r1)
    stfs f30, 0xd0(r1)
    stfs f10, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f12, 0x4c(r1)
    stfs f10, 0xd8(r1)
    stfs f11, 0xdc(r1)
    stfs f12, 0xe0(r1)
    stfs f7, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f9, 0x58(r1)
    stfs f7, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f9, 0xf0(r1)
    stfs f4, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f6, 0x64(r1)
    stfs f4, 0xd4(r1)
    stfs f5, 0xe4(r1)
    stfs f6, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F9750
    lfs f2, 0x70(r1)
    lfs f0, lbl_8088368C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8026B118_000006D8
    lfs f3, 0x6c(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_8026B118_000006C8
    lfs f0, lbl_80883690
    b lbl_fn_8026B118_000006CC
lbl_fn_8026B118_000006C8:
    lfs f0, lbl_80883694
lbl_fn_8026B118_000006CC:
    fneg f0, f0
    stfs f0, 0x74(r1)
    b lbl_fn_8026B118_000006EC
lbl_fn_8026B118_000006D8:
    lfs f1, 0x6c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x74(r1)
lbl_fn_8026B118_000006EC:
    addi r3, r1, 0x74
    lfs f2, lbl_80883674
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    psq_st f1, 0x0(r31), 0, 0
    li r4, 0x64
    lfs f0, 0x90(r1)
    stfs f2, 0x7c(r1)
    stfs f2, 0x94(r1)
    stfs f0, 0x538(r30)
    bl fn_80232B7C
    lfs f0, lbl_80883674
    li r3, -0x1
    lfs f1, lbl_80883670
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r30, 0x15b8
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

asm void fn_8026B430(void)
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
    li r31, 0x0
    stw r30, 0x108(r1)
    mr r30, r3
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r30)
    li r0, 0xa
    stw r3, 0x590(r30)
    mr r3, r30
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r30)
    stw r5, 0x12a4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f0, lbl_80883670
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883674
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x140
    lfs f2, lbl_80883698
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r4, 0x14b8(r30)
    addi r3, r1, 0x80
    lfs f0, 0x530(r30)
    addi r31, r1, 0x8c
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r30)
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    lfs f0, 0x528(r30)
    stfs f2, 0x88(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_8088368C
    stfs f4, 0x84(r1)
    frsp f4, f2
    stfs f3, 0x80(r1)
    fabs f3, f4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x94(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8026B430_000008C0
    lfs f3, 0x8c(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_8026B430_000008B4
    lfs f0, lbl_80883690
    b lbl_fn_8026B430_000008B8
lbl_fn_8026B430_000008B4:
    lfs f0, lbl_80883694
lbl_fn_8026B430_000008B8:
    stfs f0, 0x78(r1)
    b lbl_fn_8026B430_000008D4
lbl_fn_8026B430_000008C0:
    fmr f2, f4
    lfs f1, 0x8c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x78(r1)
lbl_fn_8026B430_000008D4:
    lfs f0, 0x78(r1)
    addi r3, r1, 0x98
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883674
    addi r4, r1, 0x68
    lfs f30, 0xa0(r1)
    mr r5, r4
    lfs f31, 0x9c(r1)
    addi r3, r1, 0xc8
    lfs f13, 0x98(r1)
    lfs f12, 0xb0(r1)
    lfs f11, 0xac(r1)
    lfs f10, 0xa8(r1)
    lfs f9, 0xc0(r1)
    lfs f8, 0xbc(r1)
    lfs f7, 0xb8(r1)
    lfs f6, 0xc4(r1)
    lfs f5, 0xb4(r1)
    lfs f4, 0xa4(r1)
    lfs f0, lbl_80883670
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x94(r1)
    stfs f3, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f3, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f13, 0x38(r1)
    stfs f31, 0x3c(r1)
    stfs f30, 0x40(r1)
    stfs f13, 0xc8(r1)
    stfs f31, 0xcc(r1)
    stfs f30, 0xd0(r1)
    stfs f10, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f12, 0x4c(r1)
    stfs f10, 0xd8(r1)
    stfs f11, 0xdc(r1)
    stfs f12, 0xe0(r1)
    stfs f7, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f9, 0x58(r1)
    stfs f7, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f9, 0xf0(r1)
    stfs f4, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f6, 0x64(r1)
    stfs f4, 0xd4(r1)
    stfs f5, 0xe4(r1)
    stfs f6, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F9750
    lfs f2, 0x70(r1)
    lfs f0, lbl_8088368C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8026B430_000009F0
    lfs f3, 0x6c(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_8026B430_000009E0
    lfs f0, lbl_80883690
    b lbl_fn_8026B430_000009E4
lbl_fn_8026B430_000009E0:
    lfs f0, lbl_80883694
lbl_fn_8026B430_000009E4:
    fneg f0, f0
    stfs f0, 0x74(r1)
    b lbl_fn_8026B430_00000A04
lbl_fn_8026B430_000009F0:
    lfs f1, 0x6c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x74(r1)
lbl_fn_8026B430_00000A04:
    addi r3, r1, 0x74
    lfs f2, lbl_80883674
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    psq_st f1, 0x0(r31), 0, 0
    li r4, 0x65
    lfs f0, 0x90(r1)
    stfs f2, 0x7c(r1)
    stfs f2, 0x94(r1)
    stfs f0, 0x538(r30)
    bl fn_80232B7C
    lfs f0, lbl_80883674
    li r3, -0x1
    lfs f1, lbl_80883670
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r30, 0x1594
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

asm void fn_8026B748(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    li r31, 0x0
    stw r30, 0xd8(r1)
    mr r30, r3
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r30)
    li r0, 0xb
    stw r3, 0x590(r30)
    mr r3, r30
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r30)
    stw r5, 0x12a4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f0, lbl_80883670
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883674
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x141
    lfs f2, lbl_80883698
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r4, 0x14b8(r30)
    addi r3, r1, 0x50
    lfs f0, 0x530(r30)
    addi r31, r1, 0x5c
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r30)
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    lfs f0, 0x528(r30)
    stfs f2, 0x58(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_8088368C
    stfs f4, 0x54(r1)
    frsp f4, f2
    stfs f3, 0x50(r1)
    fabs f3, f4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8026B748_00000BD8
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_8026B748_00000BCC
    lfs f0, lbl_80883690
    b lbl_fn_8026B748_00000BD0
lbl_fn_8026B748_00000BCC:
    lfs f0, lbl_80883694
lbl_fn_8026B748_00000BD0:
    stfs f0, 0x48(r1)
    b lbl_fn_8026B748_00000BEC
lbl_fn_8026B748_00000BD8:
    fmr f2, f4
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8026B748_00000BEC:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883674
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
    lfs f0, lbl_80883670
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
    lfs f0, lbl_8088368C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8026B748_00000D08
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_8026B748_00000CF8
    lfs f0, lbl_80883690
    b lbl_fn_8026B748_00000CFC
lbl_fn_8026B748_00000CF8:
    lfs f0, lbl_80883694
lbl_fn_8026B748_00000CFC:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8026B748_00000D1C
lbl_fn_8026B748_00000D08:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8026B748_00000D1C:
    addi r3, r1, 0x44
    lfs f2, lbl_80883674
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, 0x60(r1)
    stfs f0, 0x538(r30)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r0, 0x104(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_8026B9F0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    li r30, 0x0
    stw r29, 0x44(r1)
    mr r29, r3
    stw r30, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r29)
    li r0, 0xc
    stw r3, 0x590(r29)
    mr r3, r29
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r30, 0x14c4(r29)
    stw r5, 0x12a4(r29)
    stw r0, 0x58c(r29)
    bl fn_8016E970
    lfs f0, lbl_80883670
    li r31, 0x1
    stw r31, 0x3fc(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_80883674
    li r4, 0x0
    stfs f0, 0x2fc(r29)
    li r5, 0x142
    lfs f2, lbl_80883698
    li r6, 0x0
    stfs f0, 0x2e8(r29)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883674
    li r0, -0x1
    lfs f1, lbl_80883670
    addi r4, r29, 0x1618
    stfs f0, 0x1c(r1)
    addi r5, r29, 0xb0
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
    stw r30, 0x1688(r29)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8026BB08(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stw r31, 0x11c(r1)
    li r31, 0x0
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    mr r29, r3
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r29)
    li r0, 0xd
    stw r3, 0x590(r29)
    mr r3, r29
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r29)
    stw r5, 0x12a4(r29)
    stw r0, 0x58c(r29)
    bl fn_8016E970
    lfs f0, lbl_80883670
    li r0, 0x1
    stw r0, 0x3fc(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_80883674
    li r4, 0x0
    stfs f0, 0x2fc(r29)
    li r5, 0x145
    lfs f2, lbl_80883698
    li r6, 0x0
    stfs f0, 0x2e8(r29)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r4, 0x14b8(r29)
    addi r3, r1, 0x80
    lfs f0, 0x530(r29)
    addi r30, r1, 0x8c
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    lfs f0, 0x528(r29)
    stfs f2, 0x88(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_8088368C
    stfs f4, 0x84(r1)
    frsp f4, f2
    stfs f3, 0x80(r1)
    fabs f3, f4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x94(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8026BB08_00000F9C
    lfs f3, 0x8c(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_8026BB08_00000F90
    lfs f0, lbl_80883690
    b lbl_fn_8026BB08_00000F94
lbl_fn_8026BB08_00000F90:
    lfs f0, lbl_80883694
lbl_fn_8026BB08_00000F94:
    stfs f0, 0x78(r1)
    b lbl_fn_8026BB08_00000FB0
lbl_fn_8026BB08_00000F9C:
    fmr f2, f4
    lfs f1, 0x8c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x78(r1)
lbl_fn_8026BB08_00000FB0:
    lfs f0, 0x78(r1)
    addi r3, r1, 0x98
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883674
    addi r4, r1, 0x68
    lfs f30, 0xa0(r1)
    mr r5, r4
    lfs f31, 0x9c(r1)
    addi r3, r1, 0xc8
    lfs f13, 0x98(r1)
    lfs f12, 0xb0(r1)
    lfs f11, 0xac(r1)
    lfs f10, 0xa8(r1)
    lfs f9, 0xc0(r1)
    lfs f8, 0xbc(r1)
    lfs f7, 0xb8(r1)
    lfs f6, 0xc4(r1)
    lfs f5, 0xb4(r1)
    lfs f4, 0xa4(r1)
    lfs f0, lbl_80883670
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x94(r1)
    stfs f3, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f3, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f13, 0x38(r1)
    stfs f31, 0x3c(r1)
    stfs f30, 0x40(r1)
    stfs f13, 0xc8(r1)
    stfs f31, 0xcc(r1)
    stfs f30, 0xd0(r1)
    stfs f10, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f12, 0x4c(r1)
    stfs f10, 0xd8(r1)
    stfs f11, 0xdc(r1)
    stfs f12, 0xe0(r1)
    stfs f7, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f9, 0x58(r1)
    stfs f7, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f9, 0xf0(r1)
    stfs f4, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f6, 0x64(r1)
    stfs f4, 0xd4(r1)
    stfs f5, 0xe4(r1)
    stfs f6, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F9750
    lfs f2, 0x70(r1)
    lfs f0, lbl_8088368C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8026BB08_000010CC
    lfs f3, 0x6c(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_8026BB08_000010BC
    lfs f0, lbl_80883690
    b lbl_fn_8026BB08_000010C0
lbl_fn_8026BB08_000010BC:
    lfs f0, lbl_80883694
lbl_fn_8026BB08_000010C0:
    fneg f0, f0
    stfs f0, 0x74(r1)
    b lbl_fn_8026BB08_000010E0
lbl_fn_8026BB08_000010CC:
    lfs f1, 0x6c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x74(r1)
lbl_fn_8026BB08_000010E0:
    addi r3, r1, 0x74
    lfs f2, lbl_80883674
    psq_l f1, 0x0(r3), 0, 0
    li r31, 0x1
    psq_st f1, 0x0(r30), 0, 0
    mr r3, r29
    li r4, 0x65
    lfs f0, 0x90(r1)
    stfs f2, 0x7c(r1)
    stfs f2, 0x94(r1)
    stfs f0, 0x538(r29)
    stw r31, 0x1508(r29)
    bl fn_80232B7C
    lfs f0, lbl_80883674
    li r0, -0x1
    lfs f1, lbl_80883670
    addi r4, r29, 0x1594
    stfs f0, 0x1c(r1)
    addi r5, r29, 0xb0
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
    lwz r0, 0x144(r1)
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_8026BE2C(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stw r31, 0x11c(r1)
    li r31, 0x0
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    mr r29, r3
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r29)
    li r0, 0xe
    stw r3, 0x590(r29)
    mr r3, r29
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r29)
    stw r5, 0x12a4(r29)
    stw r0, 0x58c(r29)
    bl fn_8016E970
    lfs f0, lbl_80883670
    li r0, 0x1
    stw r0, 0x3fc(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_80883674
    li r4, 0x0
    stfs f0, 0x2fc(r29)
    li r5, 0x146
    lfs f2, lbl_80883698
    li r6, 0x0
    stfs f0, 0x2e8(r29)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r4, 0x14b8(r29)
    addi r3, r1, 0x80
    lfs f0, 0x530(r29)
    addi r30, r1, 0x8c
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    lfs f0, 0x528(r29)
    stfs f2, 0x88(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_8088368C
    stfs f4, 0x84(r1)
    frsp f4, f2
    stfs f3, 0x80(r1)
    fabs f3, f4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x94(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8026BE2C_000012C0
    lfs f3, 0x8c(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_8026BE2C_000012B4
    lfs f0, lbl_80883690
    b lbl_fn_8026BE2C_000012B8
lbl_fn_8026BE2C_000012B4:
    lfs f0, lbl_80883694
lbl_fn_8026BE2C_000012B8:
    stfs f0, 0x78(r1)
    b lbl_fn_8026BE2C_000012D4
lbl_fn_8026BE2C_000012C0:
    fmr f2, f4
    lfs f1, 0x8c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x78(r1)
lbl_fn_8026BE2C_000012D4:
    lfs f0, 0x78(r1)
    addi r3, r1, 0x98
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883674
    addi r4, r1, 0x68
    lfs f30, 0xa0(r1)
    mr r5, r4
    lfs f31, 0x9c(r1)
    addi r3, r1, 0xc8
    lfs f13, 0x98(r1)
    lfs f12, 0xb0(r1)
    lfs f11, 0xac(r1)
    lfs f10, 0xa8(r1)
    lfs f9, 0xc0(r1)
    lfs f8, 0xbc(r1)
    lfs f7, 0xb8(r1)
    lfs f6, 0xc4(r1)
    lfs f5, 0xb4(r1)
    lfs f4, 0xa4(r1)
    lfs f0, lbl_80883670
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x94(r1)
    stfs f3, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f3, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f13, 0x38(r1)
    stfs f31, 0x3c(r1)
    stfs f30, 0x40(r1)
    stfs f13, 0xc8(r1)
    stfs f31, 0xcc(r1)
    stfs f30, 0xd0(r1)
    stfs f10, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f12, 0x4c(r1)
    stfs f10, 0xd8(r1)
    stfs f11, 0xdc(r1)
    stfs f12, 0xe0(r1)
    stfs f7, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f9, 0x58(r1)
    stfs f7, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f9, 0xf0(r1)
    stfs f4, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f6, 0x64(r1)
    stfs f4, 0xd4(r1)
    stfs f5, 0xe4(r1)
    stfs f6, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F9750
    lfs f2, 0x70(r1)
    lfs f0, lbl_8088368C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8026BE2C_000013F0
    lfs f3, 0x6c(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_8026BE2C_000013E0
    lfs f0, lbl_80883690
    b lbl_fn_8026BE2C_000013E4
lbl_fn_8026BE2C_000013E0:
    lfs f0, lbl_80883694
lbl_fn_8026BE2C_000013E4:
    fneg f0, f0
    stfs f0, 0x74(r1)
    b lbl_fn_8026BE2C_00001404
lbl_fn_8026BE2C_000013F0:
    lfs f1, 0x6c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x74(r1)
lbl_fn_8026BE2C_00001404:
    addi r3, r1, 0x74
    lfs f2, lbl_80883674
    psq_l f1, 0x0(r3), 0, 0
    li r31, 0x1
    psq_st f1, 0x0(r30), 0, 0
    mr r3, r29
    li r4, 0x65
    lfs f0, 0x90(r1)
    stfs f2, 0x7c(r1)
    stfs f2, 0x94(r1)
    stfs f0, 0x538(r29)
    stw r31, 0x1508(r29)
    bl fn_80232B7C
    lfs f0, lbl_80883674
    li r0, -0x1
    lfs f1, lbl_80883670
    addi r4, r29, 0x1594
    stfs f0, 0x1c(r1)
    addi r5, r29, 0xb0
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
    lwz r0, 0x144(r1)
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_8026C150(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    li r31, 0x0
    stw r30, 0x48(r1)
    mr r30, r3
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r30)
    li r0, 0xf
    stw r3, 0x590(r30)
    mr r3, r30
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r30)
    stw r5, 0x12a4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f0, lbl_80883670
    li r31, 0x1
    stw r31, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883674
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x14a
    lfs f2, lbl_80883698
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r5, 0x14b8(r30)
    addi r4, r1, 0x38
    lfs f0, 0x530(r30)
    addi r3, r30, 0x1530
    lfs f3, 0x530(r5)
    lfs f5, 0x52c(r5)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r30)
    lfs f3, 0x528(r5)
    lfs f0, 0x528(r30)
    fsubs f4, f5, f4
    stfs f2, 0x40(r1)
    fsubs f0, f3, f0
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1538(r30)
    bl fn_805F9940
    addi r3, r30, 0x1530
    stfs f1, 0x1540(r30)
    mr r4, r3
    bl fn_805F98D0
    lfs f0, lbl_80883674
    mr r3, r30
    stfs f0, 0x153c(r30)
    li r4, 0x65
    bl fn_80232B7C
    lfs f0, lbl_80883674
    li r0, -0x1
    lfs f1, lbl_80883670
    addi r4, r30, 0x1594
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
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8026C2C0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    li r31, 0x0
    stw r30, 0x38(r1)
    mr r30, r3
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r30)
    li r0, 0x10
    stw r3, 0x590(r30)
    mr r3, r30
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r30)
    stw r5, 0x12a4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f0, lbl_80883670
    li r31, 0x1
    stw r31, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883674
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x143
    lfs f2, lbl_80883698
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    addi r4, r30, 0x15a0
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x64
    bl fn_80232B7C
    lfs f0, lbl_80883674
    li r0, -0x1
    lfs f1, lbl_80883670
    addi r4, r30, 0x1570
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
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8026C3E0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    li r31, 0x0
    stw r30, 0x48(r1)
    mr r30, r5
    stw r29, 0x44(r1)
    mr r29, r4
    stw r28, 0x40(r1)
    mr r28, r3
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r28)
    li r0, 0x11
    stw r3, 0x590(r28)
    mr r3, r28
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r28)
    stw r5, 0x12a4(r28)
    stw r0, 0x58c(r28)
    bl fn_8016E970
    stw r30, 0x152c(r28)
    mr r3, r28
    mr r4, r29
    addi r5, r28, 0x151c
    addi r6, r28, 0x1528
    bl fn_8026F38C
    mr r3, r28
    li r4, 0x65
    bl fn_80232B7C
    lfs f0, lbl_80883674
    li r3, -0x1
    lfs f1, lbl_80883670
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r28, 0x1564
    addi r5, r28, 0xb0
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
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8026C4E8(void)
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
    li r31, 0x0
    stw r30, 0xe8(r1)
    mr r30, r4
    stw r29, 0xe4(r1)
    mr r29, r3
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r29)
    li r0, 0x13
    stw r3, 0x590(r29)
    mr r3, r29
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x6
    stw r31, 0x14c4(r29)
    stw r5, 0x12a4(r29)
    stw r0, 0x58c(r29)
    bl fn_8016E970
    li r0, 0xa
    stw r0, 0x560(r29)
    lfs f0, 0x530(r29)
    addi r3, r1, 0x50
    lfs f3, 0x530(r30)
    addi r31, r1, 0x5c
    lfs f5, 0x52c(r30)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x528(r30)
    fsubs f4, f5, f4
    lfs f0, 0x528(r29)
    stfs f2, 0x58(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_8088368C
    stfs f4, 0x54(r1)
    frsp f4, f2
    stfs f3, 0x50(r1)
    fabs f3, f4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8026C4E8_0000194C
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_8026C4E8_00001940
    lfs f0, lbl_80883690
    b lbl_fn_8026C4E8_00001944
lbl_fn_8026C4E8_00001940:
    lfs f0, lbl_80883694
lbl_fn_8026C4E8_00001944:
    stfs f0, 0x48(r1)
    b lbl_fn_8026C4E8_00001960
lbl_fn_8026C4E8_0000194C:
    fmr f2, f4
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8026C4E8_00001960:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883674
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
    lfs f0, lbl_80883670
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
    lfs f0, lbl_8088368C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8026C4E8_00001A7C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_8026C4E8_00001A6C
    lfs f0, lbl_80883690
    b lbl_fn_8026C4E8_00001A70
lbl_fn_8026C4E8_00001A6C:
    lfs f0, lbl_80883694
lbl_fn_8026C4E8_00001A70:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8026C4E8_00001A90
lbl_fn_8026C4E8_00001A7C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8026C4E8_00001A90:
    addi r3, r1, 0x44
    lfs f4, lbl_80883674
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x1
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f4
    lfs f0, lbl_80883670
    fmr f1, f4
    lfs f3, 0x60(r1)
    addi r3, r29, 0xb0
    stfs f2, 0x64(r1)
    lfs f2, lbl_80883698
    li r4, 0x0
    stfs f4, 0x4c(r1)
    li r5, 0x1d2
    li r6, 0x0
    li r7, 0x0
    stfs f3, 0x538(r29)
    li r8, 0x1
    stw r0, 0x3fc(r29)
    stfs f0, 0x2fc(r29)
    stfs f0, 0x2e8(r29)
    bl fn_80097C08
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
