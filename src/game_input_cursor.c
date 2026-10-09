#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8004D314(void);
extern void fn_8004ED34(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB5C8(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_80103F60(void);
extern void fn_80126214(void);
extern void fn_8013322C(void);
extern void fn_8013A258(void);
extern void fn_8013CB68(void);
extern void fn_801426A4(void);
extern void fn_80148B0C(void);
extern void fn_80149A30(void);
extern void fn_80151448(void);
extern void fn_80158BB4(void);
extern void fn_8016E970(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_802F5BCC(void);
extern void fn_802F5F20(void);
extern void fn_802F62A0(void);
extern void fn_802F66CC(void);
extern void fn_802F693C(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_8068A850(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_80748538[];
extern u8 lbl_80748540[];
extern u8 lbl_80748558[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_808848D8;
extern u32 lbl_808848DC;
extern u32 lbl_808848E0;
extern u32 lbl_808848E4;
extern u32 lbl_808848EC;
extern u32 lbl_808848F0;
extern u32 lbl_808848F8;
extern u32 lbl_808848FC;
extern u32 lbl_80884900;
extern u32 lbl_80884904;
extern u32 lbl_8088490C;
extern u32 lbl_80884910;
extern u32 lbl_80884914;
extern u32 lbl_80884918;
extern u32 lbl_8088491C;
extern u32 lbl_80884920;
extern u32 lbl_80884924;
extern u32 lbl_80884928;
extern u32 lbl_8088492C;
extern u32 lbl_80884930;
extern u32 lbl_80884934;
extern u32 lbl_80884938;
extern u32 lbl_8088493C;
extern u32 lbl_80884940;
extern u32 lbl_80884944;

/* Function declarations */
void fn_802F2AF4(void);
void fn_802F2AF8(void);
void fn_802F2C50(void);
void fn_802F2D1C(void);
void fn_802F2FA4(void);
void fn_802F31D4(void);
void fn_802F3394(void);
void fn_802F339C(void);
void fn_802F33A0(void);
void fn_802F389C(void);
void fn_802F3BE8(void);
void fn_802F42CC(void);

asm void fn_802F2AF4(void)
{
    nofralloc
    b fn_80149A30
}

asm void fn_802F2AF8(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lfs f3, lbl_808848DC
    stw r0, 0x84(r1)
    addi r4, r1, 0x38
    stw r31, 0x7c(r1)
    mr r31, r3
    lwz r0, 0x58c(r3)
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    cmpwi r0, 0x8
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    stfs f3, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f3, 0x34(r1)
    bne lbl_fn_802F2AF8_000000B4
    lfs f0, lbl_808848FC
    li r4, 0x79
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x48
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x48
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x10(r1)
    addi r4, r1, 0x14
    lfs f4, lbl_8088490C
    addi r3, r1, 0x2c
    lfs f3, 0xc(r1)
    fmuls f2, f0, f4
    lfs f0, 0x8(r1)
    fmuls f3, f3, f4
    fmuls f0, f0, f4
    stfs f2, 0x1c(r1)
    stfs f0, 0x14(r1)
    stfs f3, 0x18(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x34(r1)
lbl_fn_802F2AF8_000000B4:
    lfs f5, 0x38(r1)
    addi r3, r1, 0x38
    lfs f3, 0x2c(r1)
    addi r4, r1, 0x20
    lfs f4, 0x3c(r1)
    fadds f5, f5, f3
    lfs f0, 0x30(r1)
    lfs f3, 0x40(r1)
    fadds f4, f4, f0
    lfs f0, 0x34(r1)
    stfs f5, 0x38(r1)
    fadds f7, f3, f0
    lfs f6, lbl_80884910
    stfs f4, 0x3c(r1)
    lfs f5, 0x5b0(r31)
    psq_l f1, 0x0(r3), 0, 0
    fmr f2, f7
    fmuls f4, f6, f5
    lfs f0, 0x52c(r31)
    psq_st f1, 0x614(r31), 0, 0
    fnmsubs f0, f6, f5, f0
    psq_st f1, 0x0(r4), 0, 0
    lfs f3, 0x618(r31)
    stfs f0, 0x24(r1)
    fnmsubs f0, f6, f5, f3
    psq_st f1, 0x5f4(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x61c(r31)
    stfs f2, 0x28(r1)
    stfs f2, 0x5fc(r31)
    frsp f2, f2
    stfs f4, 0x620(r31)
    stfs f0, 0x618(r31)
    psq_st f1, 0x600(r31), 0, 0
    stfs f2, 0x608(r31)
    stfs f4, 0x60c(r31)
    lwz r31, 0x7c(r1)
    lwz r0, 0x84(r1)
    stfs f7, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_802F2C50(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lfs f4, lbl_80884914
    lis r7, 0x2000
    stw r0, 0x84(r1)
    addi r5, r1, 0x8
    addi r6, r1, 0x14
    lfs f0, lbl_80884918
    stw r31, 0x7c(r1)
    li r31, 0x0
    addi r4, r1, 0x20
    li r8, 0x0
    lfs f2, 0x530(r3)
    li r9, 0x0
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lwz r3, lbl_8087EE98
    psq_st f1, 0x0(r6), 0, 0
    lfs f5, 0xc(r1)
    lfs f3, 0x18(r1)
    fadds f4, f5, f4
    stfs f2, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f2, 0x1c(r1)
    stfs f0, 0x18(r1)
    stw r31, 0x54(r1)
    stw r31, 0x58(r1)
    stw r31, 0x5c(r1)
    stw r31, 0x60(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_802F2C50_00000210
    lwz r3, 0x54(r1)
    cmpwi r3, 0x0
    beq lbl_fn_802F2C50_00000210
    lwz r3, 0x0(r3)
    cmplwi r3, 0x14
    beq lbl_fn_802F2C50_0000020C
    cmplwi r3, 0x15
    beq lbl_fn_802F2C50_0000020C
    subi r0, r3, 0x1a
    cmplwi r0, 0x3
    bgt lbl_fn_802F2C50_00000210
lbl_fn_802F2C50_0000020C:
    li r31, 0x1
lbl_fn_802F2C50_00000210:
    mr r3, r31
    lwz r31, 0x7c(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_802F2D1C(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r4
    stw r30, 0x68(r1)
    mr r30, r3
    lwz r5, 0x8(r4)
    lwz r0, 0x4(r5)
    cmpwi r0, 0xd1
    beq lbl_fn_802F2D1C_00000288
    lwz r5, 0x58c(r3)
    subi r0, r5, 0xe
    cmplwi r0, 0x4
    bgt lbl_fn_802F2D1C_00000288
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x68(r4)
    stw r3, 0x8c(r4)
    stw r0, 0x84(r4)
    stw r3, 0x90(r4)
    b lbl_fn_802F2D1C_00000490
lbl_fn_802F2D1C_00000288:
    lwz r7, 0x7e0(r3)
    li r6, 0x1
    rlwinm r5, r7, 0, 12, 12
    subis r0, r5, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_802F2D1C_000002B4
    rlwinm r5, r7, 0, 7, 7
    subis r0, r5, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_802F2D1C_000002B4
    li r6, 0x0
lbl_fn_802F2D1C_000002B4:
    cmpwi r6, 0x0
    bne lbl_fn_802F2D1C_00000424
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x8
    bne lbl_fn_802F2D1C_000002E0
    lis r5, lbl_807C7030@ha
    addi r5, r5, lbl_807C7030@l
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x18(r4)
    psq_st f1, 0x10(r4), 0, 0
lbl_fn_802F2D1C_000002E0:
    lfs f3, 0x152c(r3)
    lfs f0, lbl_808848E4
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_802F2D1C_00000424
    lwz r5, 0x8(r4)
    lwz r0, 0x4(r5)
    cmpwi r0, 0xd1
    beq lbl_fn_802F2D1C_00000424
    lfs f3, 0x24(r4)
    addi r6, r1, 0x14
    lfs f0, 0x530(r3)
    addi r5, r1, 0x20
    lfs f5, 0x20(r4)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x1c(r4)
    mr r4, r5
    lfs f0, 0x528(r3)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    mr r3, r5
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F98D0
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x8
    bne lbl_fn_802F2D1C_0000038C
    lfs f4, 0x20(r1)
    lfs f5, lbl_80884904
    lfs f3, 0x24(r1)
    lfs f0, 0x28(r1)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
lbl_fn_802F2D1C_0000038C:
    lwz r3, 0x8(r31)
    lbz r0, 0x1(r3)
    cmpwi r0, 0x1
    beq lbl_fn_802F2D1C_00000424
    lfs f3, lbl_808848DC
    addi r3, r1, 0x30
    lfs f0, lbl_808848FC
    li r4, 0x79
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x30
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x20
    addi r4, r1, 0x8
    bl fn_805F9990
    lfs f4, 0x152c(r30)
    fmr f31, f1
    lfs f3, lbl_808848E0
    lfs f0, lbl_808848EC
    fmuls f3, f4, f3
    fmuls f1, f0, f3
    bl fn_8068A850
    frsp f0, f1
    fcmpo cr0, f31, f0
    bge lbl_fn_802F2D1C_00000424
    li r0, 0x1
    lis r3, lbl_807C7030@ha
    stw r0, 0x48(r31)
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x18(r31)
    psq_st f1, 0x10(r31), 0, 0
lbl_fn_802F2D1C_00000424:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802F2D1C_0000046C
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x8
    bne lbl_fn_802F2D1C_0000046C
    lwz r0, 0x1590(r30)
    cmpwi r0, 0x1
    bne lbl_fn_802F2D1C_0000046C
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    addi r3, r30, 0x1514
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
lbl_fn_802F2D1C_0000046C:
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_802F2D1C_00000490:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_802F2FA4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r0, 0x55c(r3)
    lwz r5, 0x1554(r3)
    cmpwi r0, 0x6
    addi r0, r5, 0x1
    stw r0, 0x1554(r3)
    bne lbl_fn_802F2FA4_0000053C
    lwz r4, 0x560(r3)
    subi r0, r4, 0x16
    cmplwi r0, 0x1
    bgt lbl_fn_802F2FA4_0000053C
    lwz r5, 0x14ec(r3)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x58c(r3)
    cmpwi r5, 0x0
    stw r0, 0x1590(r3)
    beq lbl_fn_802F2FA4_00000518
    lwz r0, 0x68(r5)
    b lbl_fn_802F2FA4_0000051C
lbl_fn_802F2FA4_00000518:
    li r0, 0x5a
lbl_fn_802F2FA4_0000051C:
    stw r0, 0x15a0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0x1514
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
lbl_fn_802F2FA4_0000053C:
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802F2FA4_000006C8
    lwz r3, 0x8(r30)
    lwz r0, 0x4(r3)
    cmpwi r0, 0xd1
    beq lbl_fn_802F2FA4_00000604
    addi r3, r31, 0x7d4
    li r4, 0x20
    bl fn_8013322C
    lwz r3, 0x14ec(r31)
    li r0, 0x0
    lfs f0, lbl_808848FC
    cmpwi r3, 0x0
    stfs f0, 0x7d8(r31)
    stw r0, 0x1590(r31)
    beq lbl_fn_802F2FA4_0000058C
    lwz r0, 0x68(r3)
    b lbl_fn_802F2FA4_00000590
lbl_fn_802F2FA4_0000058C:
    li r0, 0x5a
lbl_fn_802F2FA4_00000590:
    stw r0, 0x15a0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x54c(r31)
    li r4, 0xe
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    ori r0, r0, 0x2000
    lfs f1, lbl_808848DC
    stw r4, 0x58c(r31)
    li r4, 0x0
    stw r0, 0x54c(r31)
    bl fn_80097CCC
    lfs f2, lbl_808848FC
    li r0, 0x1
    lfs f0, lbl_808848E0
    addi r3, r31, 0xb0
    stfs f2, 0x2fc(r31)
    li r4, 0x0
    lfs f1, lbl_808848DC
    li r5, 0x14
    stw r0, 0x3fc(r31)
    li r6, 0x1
    lfs f2, lbl_80884900
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802F2FA4_000006C8
lbl_fn_802F2FA4_00000604:
    lwz r0, 0x15d0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802F2FA4_000006C0
    addi r3, r31, 0x7d4
    li r4, 0x20
    bl fn_8013322C
    lwz r3, 0x14ec(r31)
    li r0, 0x0
    lfs f0, lbl_808848FC
    cmpwi r3, 0x0
    stfs f0, 0x7d8(r31)
    stw r0, 0x1590(r31)
    beq lbl_fn_802F2FA4_00000640
    lwz r0, 0x68(r3)
    b lbl_fn_802F2FA4_00000644
lbl_fn_802F2FA4_00000640:
    li r0, 0x5a
lbl_fn_802F2FA4_00000644:
    stw r0, 0x15a0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x54c(r31)
    li r4, 0x11
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    rlwinm r0, r0, 0, 19, 17
    lfs f1, lbl_808848DC
    stw r4, 0x58c(r31)
    li r4, 0x0
    stw r0, 0x54c(r31)
    bl fn_80097CCC
    lfs f0, lbl_808848FC
    li r30, 0x1
    stw r30, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808848DC
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14c
    lfs f2, lbl_80884900
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x0
    stw r30, 0x1594(r31)
    stw r0, 0x1598(r31)
    b lbl_fn_802F2FA4_000006C8
lbl_fn_802F2FA4_000006C0:
    mr r3, r31
    bl fn_802F66CC
lbl_fn_802F2FA4_000006C8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802F31D4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    li r0, 0x0
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    mr r30, r5
    stw r29, 0x44(r1)
    mr r29, r4
    lwz r6, 0x14ec(r3)
    stw r0, 0x1590(r3)
    cmpwi r6, 0x0
    beq lbl_fn_802F31D4_00000720
    lwz r0, 0x68(r6)
    b lbl_fn_802F31D4_00000724
lbl_fn_802F31D4_00000720:
    li r0, 0x5a
lbl_fn_802F31D4_00000724:
    stw r0, 0x15a0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xd
    lfs f1, lbl_808848DC
    addi r3, r31, 0xb0
    stw r0, 0x58c(r31)
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_808848FC
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808848DC
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x68
    lfs f2, lbl_80884900
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f3, 0x8(r29)
    addi r3, r31, 0xb0
    lfs f0, 0x8(r30)
    li r4, 0x0
    lfs f5, 0x4(r29)
    fadds f6, f3, f0
    lfs f4, 0x4(r30)
    lfs f3, 0x0(r29)
    lfs f0, 0x0(r30)
    fadds f4, f5, f4
    stfs f6, 0x10(r1)
    fadds f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_80097D7C
    lfs f0, lbl_808848FC
    lis r4, lbl_80748538@ha
    lis r3, 0x4330
    stw r3, 0x30(r1)
    fdivs f5, f0, f1
    lwz r0, 0x5c0(r31)
    lfs f3, 0x10(r1)
    addi r5, r1, 0x14
    lfs f0, 0x530(r31)
    addi r6, r31, 0x1540
    fsubs f10, f3, f0
    lfs f4, 0xc(r1)
    lfs f0, 0x52c(r31)
    fmr f7, f1
    lfs f3, 0x8(r1)
    clrrwi r0, r0, 1
    fsubs f9, f4, f0
    lfs f0, 0x528(r31)
    fmuls f2, f10, f5
    lfd f6, lbl_80748538@l(r4)
    fsubs f8, f3, f0
    lfs f4, lbl_808848F8
    fmuls f3, f9, f5
    stfs f2, 0x1548(r31)
    fmuls f0, f8, f5
    li r3, 0x0
    stfs f3, 0x18(r1)
    lfs f3, lbl_808848E0
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lwz r4, lbl_8087F0A8
    lfs f0, 0x1544(r31)
    lwz r4, 0x30(r4)
    stfs f8, 0x20(r1)
    mullw r4, r4, r4
    stw r3, 0x159c(r31)
    stw r0, 0x5c0(r31)
    xoris r4, r4, 0x8000
    stw r4, 0x34(r1)
    lfd f5, 0x30(r1)
    stfs f9, 0x24(r1)
    fsubs f5, f5, f6
    stfs f10, 0x28(r1)
    fdivs f4, f4, f5
    stfs f2, 0x1c(r1)
    fmuls f4, f7, f4
    fnmsubs f0, f3, f4, f0
    stfs f0, 0x1544(r31)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802F3394(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_802F339C(void)
{
    nofralloc
    blr
}

asm void fn_802F33A0(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    lfs f3, lbl_808848DC
    stw r0, 0x214(r1)
    addi r4, r1, 0xc8
    stfd f31, 0x200(r1)
    psq_st f31, 0x208(r1), 0, 0
    stfd f30, 0x1f0(r1)
    psq_st f30, 0x1f8(r1), 0, 0
    lfs f30, lbl_808848FC
    stfd f29, 0x1e0(r1)
    psq_st f29, 0x1e8(r1), 0, 0
    stfd f28, 0x1d0(r1)
    psq_st f28, 0x1d8(r1), 0, 0
    stw r31, 0x1cc(r1)
    stw r30, 0x1c8(r1)
    stw r29, 0x1c4(r1)
    mr r29, r3
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0xd0(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_802F33A0_00000D48
    addi r3, r3, 0x1030
    bl fn_80126214
    addi r4, r29, 0x1088
    addi r31, r1, 0xbc
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r31
    lfs f2, 0x1090(r29)
    stfs f2, 0xc4(r1)
    psq_st f1, 0x0(r31), 0, 0
    bl fn_805F9940
    lfs f0, lbl_8088491C
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_802F33A0_00000B20
    addi r30, r1, 0xa4
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xc4(r1)
    mr r3, r30
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    stfs f2, 0xac(r1)
    bl fn_805F98D0
    lfs f2, 0xac(r1)
    addi r31, r1, 0xb0
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_808848E4
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0xb8(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802F33A0_000009B4
    lfs f3, 0xb0(r1)
    lfs f0, lbl_808848DC
    fcmpo cr0, f3, f0
    ble lbl_fn_802F33A0_000009A8
    lfs f0, lbl_80884920
    b lbl_fn_802F33A0_000009AC
lbl_fn_802F33A0_000009A8:
    lfs f0, lbl_80884924
lbl_fn_802F33A0_000009AC:
    stfs f0, 0x90(r1)
    b lbl_fn_802F33A0_000009C8
lbl_fn_802F33A0_000009B4:
    frsp f2, f2
    lfs f1, 0xb0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_802F33A0_000009C8:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x148
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808848DC
    addi r4, r1, 0x80
    lfs f28, 0x150(r1)
    mr r5, r4
    lfs f29, 0x14c(r1)
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
    lfs f0, lbl_808848FC
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xb8(r1)
    stfs f3, 0x1a8(r1)
    stfs f3, 0x1ac(r1)
    stfs f3, 0x1b0(r1)
    stfs f0, 0x1b4(r1)
    stfs f13, 0x50(r1)
    stfs f29, 0x54(r1)
    stfs f28, 0x58(r1)
    stfs f13, 0x178(r1)
    stfs f29, 0x17c(r1)
    stfs f28, 0x180(r1)
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
    lfs f0, lbl_808848E4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802F33A0_00000AE4
    lfs f3, 0x84(r1)
    lfs f0, lbl_808848DC
    fcmpo cr0, f3, f0
    ble lbl_fn_802F33A0_00000AD4
    lfs f0, lbl_80884920
    b lbl_fn_802F33A0_00000AD8
lbl_fn_802F33A0_00000AD4:
    lfs f0, lbl_80884924
lbl_fn_802F33A0_00000AD8:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_802F33A0_00000AF8
lbl_fn_802F33A0_00000AE4:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_802F33A0_00000AF8:
    lfs f2, lbl_808848DC
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xc8
    stfs f2, 0x94(r1)
    stfs f2, 0xb8(r1)
    frsp f2, f2
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xd0(r1)
lbl_fn_802F33A0_00000B20:
    lwz r6, 0x1580(r29)
    addi r30, r1, 0xbc
    lfs f4, 0x52c(r29)
    addi r5, r1, 0x98
    lfs f5, 0x52c(r6)
    mr r3, r30
    lfs f3, 0x528(r6)
    mr r4, r30
    fsubs f5, f5, f4
    lfs f0, 0x528(r29)
    lfs f4, 0x530(r6)
    fsubs f3, f3, f0
    stfs f5, 0x9c(r1)
    lfs f0, 0x530(r29)
    stfs f3, 0x98(r1)
    fsubs f2, f4, f0
    lfs f0, lbl_808848DC
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xa0(r1)
    stfs f2, 0xc4(r1)
    stfs f0, 0xc0(r1)
    bl fn_805F98D0
    lfs f2, 0xc4(r1)
    lfs f0, lbl_808848E4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802F33A0_00000BB8
    lfs f3, 0xbc(r1)
    lfs f0, lbl_808848DC
    fcmpo cr0, f3, f0
    ble lbl_fn_802F33A0_00000BAC
    lfs f0, lbl_80884920
    b lbl_fn_802F33A0_00000BB0
lbl_fn_802F33A0_00000BAC:
    lfs f0, lbl_80884924
lbl_fn_802F33A0_00000BB0:
    stfs f0, 0xc(r1)
    b lbl_fn_802F33A0_00000BC8
lbl_fn_802F33A0_00000BB8:
    lfs f1, 0xbc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xc(r1)
lbl_fn_802F33A0_00000BC8:
    lfs f0, 0xc(r1)
    addi r3, r1, 0x118
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808848DC
    addi r4, r1, 0x14
    lfs f4, 0x120(r1)
    mr r5, r4
    lfs f5, 0x11c(r1)
    addi r3, r1, 0xd8
    lfs f6, 0x118(r1)
    lfs f7, 0x130(r1)
    lfs f8, 0x12c(r1)
    lfs f9, 0x128(r1)
    lfs f10, 0x140(r1)
    lfs f11, 0x13c(r1)
    lfs f12, 0x138(r1)
    lfs f13, 0x144(r1)
    lfs f28, 0x134(r1)
    lfs f29, 0x124(r1)
    lfs f0, lbl_808848FC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xc4(r1)
    stfs f3, 0x108(r1)
    stfs f3, 0x10c(r1)
    stfs f3, 0x110(r1)
    stfs f0, 0x114(r1)
    stfs f6, 0x44(r1)
    stfs f5, 0x48(r1)
    stfs f4, 0x4c(r1)
    stfs f6, 0xd8(r1)
    stfs f5, 0xdc(r1)
    stfs f4, 0xe0(r1)
    stfs f9, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f7, 0x40(r1)
    stfs f9, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f7, 0xf0(r1)
    stfs f12, 0x2c(r1)
    stfs f11, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f12, 0xf8(r1)
    stfs f11, 0xfc(r1)
    stfs f10, 0x100(r1)
    stfs f29, 0x20(r1)
    stfs f28, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f29, 0xe4(r1)
    stfs f28, 0xf4(r1)
    stfs f13, 0x104(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F9750
    lfs f2, 0x1c(r1)
    lfs f0, lbl_808848E4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802F33A0_00000CE4
    lfs f3, 0x18(r1)
    lfs f0, lbl_808848DC
    fcmpo cr0, f3, f0
    ble lbl_fn_802F33A0_00000CD4
    lfs f0, lbl_80884920
    b lbl_fn_802F33A0_00000CD8
lbl_fn_802F33A0_00000CD4:
    lfs f0, lbl_80884924
lbl_fn_802F33A0_00000CD8:
    fneg f0, f0
    stfs f0, 0x8(r1)
    b lbl_fn_802F33A0_00000CF8
lbl_fn_802F33A0_00000CE4:
    lfs f1, 0x18(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8(r1)
lbl_fn_802F33A0_00000CF8:
    addi r3, r1, 0x8
    lfs f2, lbl_808848DC
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xc4(r1)
    lfs f0, 0xc0(r1)
    lwz r0, 0x58c(r29)
    stfs f2, 0x10(r1)
    cmpwi r0, 0xc
    stfs f0, 0x538(r29)
    bne lbl_fn_802F33A0_00000D2C
    lfs f0, 0x155c(r29)
    fmuls f30, f30, f0
lbl_fn_802F33A0_00000D2C:
    lfs f0, 0x568(r29)
    fmr f1, f31
    mr r3, r29
    addi r4, r1, 0xc8
    fmuls f2, f0, f30
    bl fn_801426A4
    b lbl_fn_802F33A0_00000D6C
lbl_fn_802F33A0_00000D48:
    cmpwi r0, 0x6
    bne lbl_fn_802F33A0_00000D58
    bl fn_8013A258
    b lbl_fn_802F33A0_00000D6C
lbl_fn_802F33A0_00000D58:
    lfs f0, 0x568(r3)
    fmr f1, f3
    li r5, 0x0
    fmuls f2, f0, f30
    bl fn_8013CB68
lbl_fn_802F33A0_00000D6C:
    lwz r0, 0x214(r1)
    psq_l f31, 0x208(r1), 0, 0
    lfd f31, 0x200(r1)
    psq_l f30, 0x1f8(r1), 0, 0
    lfd f30, 0x1f0(r1)
    psq_l f29, 0x1e8(r1), 0, 0
    lfd f29, 0x1e0(r1)
    psq_l f28, 0x1d8(r1), 0, 0
    lfd f28, 0x1d0(r1)
    lwz r31, 0x1cc(r1)
    lwz r30, 0x1c8(r1)
    lwz r29, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_802F389C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r4, 0x1554(r3)
    lwz r0, 0x1558(r3)
    lwz r5, 0x15a0(r3)
    cmpw r4, r0
    subi r0, r5, 0x1
    stw r0, 0x15a0(r3)
    blt lbl_fn_802F389C_00000DF4
    lwz r0, 0x1574(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802F389C_00000DF4
    lwz r4, 0x1580(r3)
    bl fn_802F693C
lbl_fn_802F389C_00000DF4:
    lwz r3, 0x1580(r31)
    lwz r0, 0x1584(r31)
    cmplw r3, r0
    beq lbl_fn_802F389C_00000E44
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r3, 0x14ec(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802F389C_00000E24
    lwz r0, 0x68(r3)
    b lbl_fn_802F389C_00000E28
lbl_fn_802F389C_00000E24:
    li r0, 0x5a
lbl_fn_802F389C_00000E28:
    stw r0, 0x15a0(r31)
    mr r3, r31
    lwz r4, 0x1580(r31)
    li r5, 0x6
    bl fn_802F62A0
    cmpwi r3, 0x0
    bne lbl_fn_802F389C_000010D8
lbl_fn_802F389C_00000E44:
    lwz r3, 0x1580(r31)
    lfs f0, 0x530(r31)
    lfs f2, 0x530(r3)
    lfs f1, 0x528(r3)
    fsubs f3, f2, f0
    lfs f0, 0x528(r31)
    lfs f2, 0x52c(r3)
    fsubs f4, f1, f0
    lfs f1, 0x52c(r31)
    fmuls f0, f3, f3
    fsubs f2, f2, f1
    stfs f4, 0x14(r1)
    fmadds f1, f4, f4, f0
    stfs f2, 0x18(r1)
    stfs f3, 0x1c(r1)
    bl fn_8068B100
    lwz r0, 0x15a0(r31)
    frsp f31, f1
    cmpwi r0, 0x0
    bge lbl_fn_802F389C_00000EF8
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, 0x14e8(r31)
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_802F389C_00000ED8
    lwz r4, 0x1580(r31)
    mr r3, r31
    li r5, 0x8
    bl fn_802F62A0
    cmpwi r3, 0x0
    bne lbl_fn_802F389C_000010D8
    lwz r4, 0x1580(r31)
    mr r3, r31
    bl fn_802F5F20
    b lbl_fn_802F389C_000010D8
lbl_fn_802F389C_00000ED8:
    lwz r3, 0x14ec(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802F389C_00000EEC
    lwz r0, 0x68(r3)
    b lbl_fn_802F389C_00000EF0
lbl_fn_802F389C_00000EEC:
    li r0, 0x5a
lbl_fn_802F389C_00000EF0:
    stw r0, 0x15a0(r31)
    b lbl_fn_802F389C_000010D8
lbl_fn_802F389C_00000EF8:
    lfs f2, lbl_808848DC
    addi r5, r31, 0x528
    lfs f0, lbl_80884928
    addi r6, r1, 0x8
    stfs f2, 0x8(r1)
    li r4, 0x0
    lwz r3, lbl_8087EE98
    lis r7, 0x8000
    stfs f0, 0xc(r1)
    li r8, 0x0
    lfs f1, lbl_8088492C
    li r9, 0x0
    stfs f2, 0x10(r1)
    bl fn_8004D314
    cmpwi r3, 0x0
    beq lbl_fn_802F389C_000010D8
    lwz r3, 0x1528(r31)
    lfs f0, lbl_808848D8
    cmpwi r3, 0x0
    beq lbl_fn_802F389C_00000F4C
    lfs f0, 0x40(r3)
lbl_fn_802F389C_00000F4C:
    fcmpo cr0, f31, f0
    bge lbl_fn_802F389C_00001020
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x1580(r31)
    mr r3, r31
    li r5, 0xb
    bl fn_802F62A0
    cmpwi r3, 0x0
    bne lbl_fn_802F389C_000010D8
    lwz r3, 0x14ec(r31)
    li r0, 0x0
    stw r0, 0x1590(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802F389C_00000F94
    lwz r0, 0x68(r3)
    b lbl_fn_802F389C_00000F98
lbl_fn_802F389C_00000F94:
    li r0, 0x5a
lbl_fn_802F389C_00000F98:
    stw r0, 0x15a0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xb
    lfs f1, lbl_808848DC
    addi r3, r31, 0xb0
    stw r0, 0x58c(r31)
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_808848FC
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808848DC
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14
    lfs f2, lbl_80884900
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x1528(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802F389C_0000100C
    lwz r3, 0x68(r3)
    b lbl_fn_802F389C_00001010
lbl_fn_802F389C_0000100C:
    li r3, 0x3c
lbl_fn_802F389C_00001010:
    lwz r0, 0x1580(r31)
    stw r3, 0x159c(r31)
    stw r0, 0x1584(r31)
    b lbl_fn_802F389C_000010D8
lbl_fn_802F389C_00001020:
    lfs f0, 0x1524(r31)
    fcmpo cr0, f31, f0
    bge lbl_fn_802F389C_000010D8
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x1580(r31)
    mr r3, r31
    li r5, 0xa
    bl fn_802F62A0
    cmpwi r3, 0x0
    bne lbl_fn_802F389C_000010D8
    lwz r3, 0x14ec(r31)
    li r0, 0x0
    stw r0, 0x1590(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802F389C_0000106C
    lwz r0, 0x68(r3)
    b lbl_fn_802F389C_00001070
lbl_fn_802F389C_0000106C:
    li r0, 0x5a
lbl_fn_802F389C_00001070:
    stw r0, 0x15a0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xa
    lfs f1, lbl_808848DC
    addi r3, r31, 0xb0
    stw r0, 0x58c(r31)
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_808848FC
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808848DC
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14
    lfs f2, lbl_80884900
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r0, 0x1580(r31)
    stw r0, 0x1584(r31)
lbl_fn_802F389C_000010D8:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802F3BE8(void)
{
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    stfd f31, 0x2d0(r1)
    psq_st f31, 0x2d8(r1), 0, 0
    stfd f30, 0x2c0(r1)
    psq_st f30, 0x2c8(r1), 0, 0
    stfd f29, 0x2b0(r1)
    psq_st f29, 0x2b8(r1), 0, 0
    stfd f28, 0x2a0(r1)
    psq_st f28, 0x2a8(r1), 0, 0
    stfd f27, 0x290(r1)
    psq_st f27, 0x298(r1), 0, 0
    stfd f26, 0x280(r1)
    psq_st f26, 0x288(r1), 0, 0
    stw r31, 0x27c(r1)
    mr r31, r3
    stw r30, 0x278(r1)
    lwz r0, 0x1590(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802F3BE8_0000115C
    cmpwi r0, 0x1
    beq lbl_fn_802F3BE8_00001258
    cmpwi r0, 0x2
    beq lbl_fn_802F3BE8_000012F0
    b lbl_fn_802F3BE8_00001790
lbl_fn_802F3BE8_0000115C:
    lfs f26, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f26, f1
    cror eq, gt, eq
    bne lbl_fn_802F3BE8_00001790
    li r30, 0x1
    stw r30, 0x1590(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_808848DC
    li r0, -0x1
    lfs f1, lbl_808848FC
    addi r4, r31, 0x1518
    stfs f0, 0x68(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x5c
    addi r8, r1, 0x68
    stfs f0, 0x6c(r1)
    addi r9, r1, 0x78
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x70(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f1, 0x78(r1)
    stfs f1, 0x7c(r1)
    stfs f1, 0x80(r1)
    stfs f1, 0x84(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lfs f1, lbl_808848FC
    addi r3, r1, 0x10
    addi r4, r31, 0x14f4
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r31, 0x1514
    addi r4, r1, 0x10
    bl fn_800CB440
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lfs f0, lbl_808848FC
    addi r3, r31, 0xb0
    stw r30, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_808848DC
    li r5, 0x143
    stfs f0, 0x2fc(r31)
    li r6, 0x1
    lfs f2, lbl_80884900
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802F3BE8_00001790
lbl_fn_802F3BE8_00001258:
    lwz r4, 0x15a4(r3)
    lwz r0, 0x14e4(r3)
    addi r4, r4, 0x1
    stw r4, 0x15a4(r3)
    cmpw r4, r0
    blt lbl_fn_802F3BE8_00001790
    li r4, 0x2
    li r0, 0x0
    stw r4, 0x1590(r3)
    li r4, 0x6
    stw r0, 0x15a4(r3)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    mr r4, r31
    li r5, 0x0
    lwz r3, lbl_8087F3C0
    li r6, 0x1
    bl fn_80239DAC
    addi r3, r31, 0x1514
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lfs f0, lbl_808848FC
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808848DC
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x144
    lfs f2, lbl_80884900
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802F3BE8_00001790
lbl_fn_802F3BE8_000012F0:
    bl fn_80158BB4
    cmpwi r3, 0x0
    beq lbl_fn_802F3BE8_00001344
    lwz r3, 0x14ec(r31)
    li r0, 0x0
    stw r0, 0x1590(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802F3BE8_00001318
    lwz r0, 0x68(r3)
    b lbl_fn_802F3BE8_0000131C
lbl_fn_802F3BE8_00001318:
    li r0, 0x5a
lbl_fn_802F3BE8_0000131C:
    stw r0, 0x15a0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_802F3BE8_00001790
lbl_fn_802F3BE8_00001344:
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_80884930
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_802F3BE8_00001790
    lfs f0, lbl_80884934
    fcmpo cr0, f7, f0
    bge lbl_fn_802F3BE8_00001790
    lis r4, lbl_80748558@ha
    addi r30, r31, 0xb0
    addi r4, r4, lbl_80748558@l
    li r5, 0x0
    mr r3, r30
    addi r4, r4, 0x192
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802F3BE8_00001390
    li r3, 0x0
    b lbl_fn_802F3BE8_0000139C
lbl_fn_802F3BE8_00001390:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r30)
    add r3, r3, r0
lbl_fn_802F3BE8_0000139C:
    lfs f0, 0x2c(r3)
    li r4, 0x0
    lfs f7, 0x1c(r3)
    lfs f8, 0xc(r3)
    stfs f8, 0xac(r1)
    stfs f7, 0xb0(r1)
    stfs f0, 0xb4(r1)
    lwz r3, 0x1580(r31)
    bl fn_80148B0C
    lfs f7, 0xc(r3)
    addi r4, r1, 0x88
    lfs f0, 0xb4(r1)
    addi r30, r1, 0xa0
    lfs f9, 0x8(r3)
    fsubs f2, f7, f0
    lfs f8, 0xb0(r1)
    lfs f7, 0x4(r3)
    fsubs f8, f9, f8
    lfs f0, 0xac(r1)
    stfs f2, 0x90(r1)
    fsubs f7, f7, f0
    lfs f0, lbl_808848E4
    stfs f8, 0x8c(r1)
    frsp f8, f2
    stfs f7, 0x88(r1)
    fabs f7, f8
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f7, f7
    stfs f2, 0xa8(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_802F3BE8_00001440
    lfs f7, 0xa0(r1)
    lfs f0, lbl_808848DC
    fcmpo cr0, f7, f0
    ble lbl_fn_802F3BE8_00001434
    lfs f0, lbl_80884920
    b lbl_fn_802F3BE8_00001438
lbl_fn_802F3BE8_00001434:
    lfs f0, lbl_80884924
lbl_fn_802F3BE8_00001438:
    stfs f0, 0x54(r1)
    b lbl_fn_802F3BE8_00001454
lbl_fn_802F3BE8_00001440:
    fmr f2, f8
    lfs f1, 0xa0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x54(r1)
lbl_fn_802F3BE8_00001454:
    lfs f0, 0x54(r1)
    addi r3, r1, 0x1d8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_808848DC
    addi r4, r1, 0x44
    lfs f26, 0x1e0(r1)
    mr r5, r4
    lfs f27, 0x1dc(r1)
    addi r3, r1, 0x208
    lfs f28, 0x1d8(r1)
    lfs f29, 0x1f0(r1)
    lfs f30, 0x1ec(r1)
    lfs f31, 0x1e8(r1)
    lfs f13, 0x200(r1)
    lfs f12, 0x1fc(r1)
    lfs f11, 0x1f8(r1)
    lfs f10, 0x204(r1)
    lfs f9, 0x1f4(r1)
    lfs f8, 0x1e4(r1)
    lfs f0, lbl_808848FC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xa8(r1)
    stfs f7, 0x238(r1)
    stfs f7, 0x23c(r1)
    stfs f7, 0x240(r1)
    stfs f0, 0x244(r1)
    stfs f28, 0x14(r1)
    stfs f27, 0x18(r1)
    stfs f26, 0x1c(r1)
    stfs f28, 0x208(r1)
    stfs f27, 0x20c(r1)
    stfs f26, 0x210(r1)
    stfs f31, 0x20(r1)
    stfs f30, 0x24(r1)
    stfs f29, 0x28(r1)
    stfs f31, 0x218(r1)
    stfs f30, 0x21c(r1)
    stfs f29, 0x220(r1)
    stfs f11, 0x2c(r1)
    stfs f12, 0x30(r1)
    stfs f13, 0x34(r1)
    stfs f11, 0x228(r1)
    stfs f12, 0x22c(r1)
    stfs f13, 0x230(r1)
    stfs f8, 0x38(r1)
    stfs f9, 0x3c(r1)
    stfs f10, 0x40(r1)
    stfs f8, 0x214(r1)
    stfs f9, 0x224(r1)
    stfs f10, 0x234(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F9750
    lfs f2, 0x4c(r1)
    lfs f0, lbl_808848E4
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_802F3BE8_00001570
    lfs f7, 0x48(r1)
    lfs f0, lbl_808848DC
    fcmpo cr0, f7, f0
    ble lbl_fn_802F3BE8_00001560
    lfs f0, lbl_80884920
    b lbl_fn_802F3BE8_00001564
lbl_fn_802F3BE8_00001560:
    lfs f0, lbl_80884924
lbl_fn_802F3BE8_00001564:
    fneg f0, f0
    stfs f0, 0x50(r1)
    b lbl_fn_802F3BE8_00001584
lbl_fn_802F3BE8_00001570:
    lfs f1, 0x48(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x50(r1)
lbl_fn_802F3BE8_00001584:
    addi r3, r1, 0x50
    lfs f2, lbl_808848DC
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0x538(r31)
    lfs f9, 0xa4(r1)
    lfs f8, 0x14f0(r31)
    lfs f7, lbl_808848E0
    fsubs f9, f9, f0
    stfs f2, 0x58(r1)
    fmuls f0, f8, f7
    stfs f2, 0xa8(r1)
    fcmpo cr0, f9, f0
    cror eq, gt, eq
    bne lbl_fn_802F3BE8_000015C8
    stfs f0, 0xa4(r1)
    b lbl_fn_802F3BE8_000015E0
lbl_fn_802F3BE8_000015C8:
    fneg f0, f8
    fmuls f0, f0, f7
    fcmpo cr0, f9, f0
    cror eq, lt, eq
    bne lbl_fn_802F3BE8_000015E0
    stfs f0, 0xa4(r1)
lbl_fn_802F3BE8_000015E0:
    lfs f7, lbl_808848DC
    addi r30, r1, 0x248
    lfs f1, 0xa8(r1)
    lfs f0, lbl_808848FC
    fcmpu cr0, f7, f1
    stfs f7, 0x274(r1)
    stfs f7, 0x26c(r1)
    stfs f7, 0x268(r1)
    stfs f7, 0x264(r1)
    stfs f7, 0x260(r1)
    stfs f7, 0x258(r1)
    stfs f7, 0x254(r1)
    stfs f7, 0x250(r1)
    stfs f7, 0x24c(r1)
    stfs f0, 0x270(r1)
    stfs f0, 0x25c(r1)
    stfs f0, 0x248(r1)
    beq lbl_fn_802F3BE8_00001678
    addi r3, r1, 0xe8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xe8
    addi r5, r1, 0xb8
    bl fn_805F89F0
    addi r3, r1, 0xb8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_802F3BE8_00001678:
    lfs f0, lbl_808848DC
    lfs f1, 0xa4(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_802F3BE8_000016D8
    addi r3, r1, 0x148
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x148
    addi r5, r1, 0x118
    bl fn_805F89F0
    addi r3, r1, 0x118
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_802F3BE8_000016D8:
    lfs f0, lbl_808848DC
    lfs f1, 0xa0(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_802F3BE8_00001738
    addi r3, r1, 0x1a8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x1a8
    addi r5, r1, 0x178
    bl fn_805F89F0
    addi r3, r1, 0x178
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_802F3BE8_00001738:
    lfs f7, lbl_808848DC
    addi r4, r1, 0x94
    lfs f0, lbl_808848FC
    mr r5, r4
    stfs f7, 0x94(r1)
    addi r3, r1, 0x248
    stfs f7, 0x98(r1)
    stfs f0, 0x9c(r1)
    bl fn_805F93C0
    lwz r5, 0x14ec(r31)
    cmpwi r5, 0x0
    beq lbl_fn_802F3BE8_00001790
    lwz r3, lbl_8087F048
    mr r4, r31
    lfs f1, lbl_808848DC
    addi r6, r1, 0xac
    lfs f2, lbl_808848FC
    addi r7, r1, 0x94
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
lbl_fn_802F3BE8_00001790:
    lwz r0, 0x2e4(r1)
    psq_l f31, 0x2d8(r1), 0, 0
    lfd f31, 0x2d0(r1)
    psq_l f30, 0x2c8(r1), 0, 0
    lfd f30, 0x2c0(r1)
    psq_l f29, 0x2b8(r1), 0, 0
    lfd f29, 0x2b0(r1)
    psq_l f28, 0x2a8(r1), 0, 0
    lfd f28, 0x2a0(r1)
    psq_l f27, 0x298(r1), 0, 0
    lfd f27, 0x290(r1)
    psq_l f26, 0x288(r1), 0, 0
    lfd f26, 0x280(r1)
    lwz r31, 0x27c(r1)
    lwz r30, 0x278(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

asm void fn_802F42CC(void)
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
    bne lbl_fn_802F42CC_00001AA4
    lwz r0, 0x1530(r31)
    cmpwi r0, 0x6
    beq lbl_fn_802F42CC_00001848
    cmpwi r0, 0x7
    beq lbl_fn_802F42CC_00001890
    cmpwi r0, 0x8
    beq lbl_fn_802F42CC_000018A0
    cmpwi r0, 0xa
    beq lbl_fn_802F42CC_000018B0
    cmpwi r0, 0xb
    beq lbl_fn_802F42CC_00001954
    cmpwi r0, 0xc
    beq lbl_fn_802F42CC_00001A14
    b lbl_fn_802F42CC_00001A20
lbl_fn_802F42CC_00001848:
    lwz r3, 0x14ec(r31)
    li r0, 0x0
    stw r0, 0x1590(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802F42CC_00001864
    lwz r0, 0x68(r3)
    b lbl_fn_802F42CC_00001868
lbl_fn_802F42CC_00001864:
    li r0, 0x5a
lbl_fn_802F42CC_00001868:
    stw r0, 0x15a0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_802F42CC_00001A20
lbl_fn_802F42CC_00001890:
    lwz r4, 0x1588(r31)
    mr r3, r31
    bl fn_802F5BCC
    b lbl_fn_802F42CC_00001A20
lbl_fn_802F42CC_000018A0:
    lwz r4, 0x1588(r31)
    mr r3, r31
    bl fn_802F5F20
    b lbl_fn_802F42CC_00001A20
lbl_fn_802F42CC_000018B0:
    lwz r4, 0x1588(r31)
    mr r3, r31
    li r5, 0xa
    bl fn_802F62A0
    cmpwi r3, 0x0
    bne lbl_fn_802F42CC_00001A20
    lwz r3, 0x14ec(r31)
    li r0, 0x0
    stw r0, 0x1590(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802F42CC_000018E4
    lwz r0, 0x68(r3)
    b lbl_fn_802F42CC_000018E8
lbl_fn_802F42CC_000018E4:
    li r0, 0x5a
lbl_fn_802F42CC_000018E8:
    stw r0, 0x15a0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xa
    lfs f1, lbl_808848DC
    addi r3, r31, 0xb0
    stw r0, 0x58c(r31)
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_808848FC
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808848DC
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14
    lfs f2, lbl_80884900
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r0, 0x1580(r31)
    stw r0, 0x1584(r31)
    b lbl_fn_802F42CC_00001A20
lbl_fn_802F42CC_00001954:
    lwz r4, 0x1580(r31)
    mr r3, r31
    li r5, 0xb
    bl fn_802F62A0
    cmpwi r3, 0x0
    bne lbl_fn_802F42CC_00001A20
    lwz r3, 0x14ec(r31)
    li r0, 0x0
    stw r0, 0x1590(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802F42CC_00001988
    lwz r0, 0x68(r3)
    b lbl_fn_802F42CC_0000198C
lbl_fn_802F42CC_00001988:
    li r0, 0x5a
lbl_fn_802F42CC_0000198C:
    stw r0, 0x15a0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xb
    lfs f1, lbl_808848DC
    addi r3, r31, 0xb0
    stw r0, 0x58c(r31)
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_808848FC
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808848DC
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14
    lfs f2, lbl_80884900
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x1528(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802F42CC_00001A00
    lwz r3, 0x68(r3)
    b lbl_fn_802F42CC_00001A04
lbl_fn_802F42CC_00001A00:
    li r3, 0x3c
lbl_fn_802F42CC_00001A04:
    lwz r0, 0x1580(r31)
    stw r3, 0x159c(r31)
    stw r0, 0x1584(r31)
    b lbl_fn_802F42CC_00001A20
lbl_fn_802F42CC_00001A14:
    lwz r4, 0x1580(r31)
    mr r3, r31
    bl fn_802F693C
lbl_fn_802F42CC_00001A20:
    lwz r3, lbl_8087F048
    mr r4, r31
    bl fn_80103F60
    li r0, 0x3
    lfs f0, lbl_808848FC
    mtctr r0
lbl_fn_802F42CC_00001A38:
    stfs f0, 0x128(r3)
    stfs f0, 0x12c(r3)
    stfs f0, 0x130(r3)
    stfs f0, 0x134(r3)
    stfs f0, 0x138(r3)
    stfs f0, 0x13c(r3)
    stfs f0, 0x140(r3)
    stfs f0, 0x144(r3)
    stfs f0, 0x148(r3)
    stfs f0, 0x14c(r3)
    stfs f0, 0x150(r3)
    stfs f0, 0x154(r3)
    stfs f0, 0x158(r3)
    stfs f0, 0x15c(r3)
    stfs f0, 0x160(r3)
    stfs f0, 0x164(r3)
    stfs f0, 0x168(r3)
    stfs f0, 0x16c(r3)
    stfs f0, 0x170(r3)
    stfs f0, 0x174(r3)
    stfs f0, 0x178(r3)
    stfs f0, 0x17c(r3)
    stfs f0, 0x180(r3)
    stfs f0, 0x184(r3)
    addi r3, r3, 0x60
    bdnz lbl_fn_802F42CC_00001A38
    b lbl_fn_802F42CC_00001B8C
lbl_fn_802F42CC_00001AA4:
    lfs f1, 0x2e4(r31)
    lfs f0, lbl_80884914
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_802F42CC_00001B8C
    lfs f0, lbl_80884938
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_802F42CC_00001B8C
    lfs f1, 0x153c(r31)
    lis r3, lbl_80748540@ha
    lfs f0, 0x1538(r31)
    lwz r4, 0x1534(r31)
    fsubs f1, f1, f0
    lfd f2, lbl_80748540@l(r3)
    addi r0, r4, 0x2
    stw r0, 0x1534(r31)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_8088493C
    fcmpo cr0, f4, f0
    ble lbl_fn_802F42CC_00001B04
    lfs f0, lbl_80884940
    fsubs f4, f4, f0
lbl_fn_802F42CC_00001B04:
    lfs f0, lbl_80884944
    fcmpo cr0, f4, f0
    bge lbl_fn_802F42CC_00001B18
    lfs f0, lbl_80884940
    fadds f4, f4, f0
lbl_fn_802F42CC_00001B18:
    lwz r4, 0x1534(r31)
    lis r0, 0x4330
    lis r5, lbl_80748538@ha
    stw r0, 0x8(r1)
    xoris r4, r4, 0x8000
    lfd f3, lbl_80748538@l(r5)
    stw r4, 0xc(r1)
    lis r3, lbl_80748540@ha
    lfs f1, lbl_808848F0
    lfd f2, 0x8(r1)
    lfs f0, 0x1538(r31)
    fsubs f3, f2, f3
    lfd f2, lbl_80748540@l(r3)
    fmuls f3, f3, f4
    fdivs f1, f3, f1
    fadds f1, f0, f1
    bl fn_8068AEA8
    frsp f1, f1
    lfs f0, lbl_8088493C
    fcmpo cr0, f1, f0
    ble lbl_fn_802F42CC_00001B74
    lfs f0, lbl_80884940
    fsubs f1, f1, f0
lbl_fn_802F42CC_00001B74:
    lfs f0, lbl_80884944
    fcmpo cr0, f1, f0
    bge lbl_fn_802F42CC_00001B88
    lfs f0, lbl_80884940
    fadds f1, f1, f0
lbl_fn_802F42CC_00001B88:
    stfs f1, 0x538(r31)
lbl_fn_802F42CC_00001B8C:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
