#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8000D124(void);
extern void fn_80011034(void);
extern void fn_80013338(void);
extern void fn_80013410(void);
extern void fn_8004ED34(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800C344C(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB5C8(void);
extern void fn_800EB7A0(void);
extern void fn_800F72CC(void);
extern void fn_800F7FA0(void);
extern void fn_800F7FA8(void);
extern void fn_800F7FD8(void);
extern void fn_800F7FF0(void);
extern void fn_800F8548(void);
extern void fn_800FDB20(void);
extern void fn_80101434(void);
extern void fn_8012D8B8(void);
extern void fn_8013C38C(void);
extern void fn_801404F8(void);
extern void fn_80140500(void);
extern void fn_80149A30(void);
extern void fn_80151448(void);
extern void fn_801533C8(void);
extern void fn_8016E970(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80239D58(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_8023A8B4(void);
extern void fn_802657FC(void);
extern void fn_8026607C(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F9160(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void memmove(void);

/* External data declarations */
extern u8 lbl_80749718[];
extern u8 lbl_8074973C[];
extern u8 lbl_80775A88[];
extern u8 lbl_807889C0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_80884DF0;
extern u32 lbl_80884E00;
extern u32 lbl_80884E04;
extern u32 lbl_80884E10;
extern u32 lbl_80884E14;
extern u32 lbl_80884E18;
extern u32 lbl_80884E1C;
extern u32 lbl_80884E20;
extern u32 lbl_80884E24;
extern u32 lbl_80884E28;
extern u32 lbl_80884E2C;
extern u32 lbl_80884E30;
extern u32 lbl_80884E34;
extern u32 lbl_80884E38;

/* Function declarations */
void fn_8031C530(void);
void fn_8031C534(void);
void fn_8031C584(void);
void fn_8031C754(void);
void fn_8031C894(void);
void fn_8031CA30(void);
void fn_8031D27C(void);
void fn_8031D2BC(void);
void fn_8031D350(void);
void fn_8031D4F4(void);
void fn_8031D57C(void);
void fn_8031D6DC(void);

asm void fn_8031C530(void)
{
    nofralloc
    b fn_80149A30
}

asm void fn_8031C534(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8031C584(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8031C584_00000210
    li r0, 0x0
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x2
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x0
    bl fn_80239DAC
    psq_l f1, 0x6b8(r31), 0, 0
    addi r3, r1, 0x1c
    lfs f2, 0x6c0(r31)
    mr r4, r3
    stfs f2, 0x24(r1)
    psq_st f1, 0x0(r3), 0, 0
    bl fn_805F98D0
    lfs f4, lbl_80884E24
    addi r3, r1, 0x10
    lfs f3, 0x20(r1)
    addi r4, r31, 0x14f0
    lfs f0, 0x1c(r1)
    fmuls f6, f3, f4
    lfs f5, 0x24(r1)
    fmuls f0, f0, f4
    lfs f3, lbl_80884E28
    stfs f6, 0x14(r1)
    fmuls f2, f5, f4
    stfs f0, 0x10(r1)
    lfs f0, lbl_80884DF0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f4, 0x14f4(r31)
    stfs f2, 0x18(r1)
    fmuls f3, f4, f3
    stfs f2, 0x14f8(r31)
    fcmpo cr0, f3, f0
    stfs f3, 0x14f4(r31)
    ble lbl_fn_8031C584_00000130
    stfs f0, 0x14f4(r31)
lbl_fn_8031C584_00000130:
    lwz r3, lbl_8087F0A8
    lis r0, 0x4330
    lis r5, lbl_80749718@ha
    lwz r4, lbl_8087EFA8
    lwz r6, 0x30(r3)
    mr r3, r31
    stw r0, 0x50(r1)
    mullw r0, r6, r6
    lfd f5, lbl_80749718@l(r5)
    lfs f3, lbl_80884E2C
    lfs f6, 0x3a4(r4)
    lfs f0, lbl_80884E30
    xoris r0, r0, 0x8000
    stw r0, 0x54(r1)
    lfd f4, 0x50(r1)
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fmuls f3, f3, f6
    fmuls f0, f0, f3
    stfs f0, 0x14fc(r31)
    bl fn_800EB7A0
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x66
    bl fn_80232B7C
    lfs f0, lbl_80884DF0
    li r3, -0x1
    lfs f1, lbl_80884E04
    li r0, 0x1
    stfs f0, 0x38(r1)
    addi r4, r31, 0x15a4
    addi r5, r31, 0xb0
    addi r7, r1, 0x44
    stfs f0, 0x3c(r1)
    addi r8, r1, 0x38
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x40(r1)
    li r10, -0x1
    stfs f0, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    li r0, 0x0
    stw r0, 0x153c(r31)
lbl_fn_8031C584_00000210:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8031C754(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    li r0, 0x0
    stw r31, 0x5c(r1)
    mr r31, r5
    stw r30, 0x58(r1)
    mr r30, r4
    stw r29, 0x54(r1)
    mr r29, r3
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    li r0, 0x6
    mr r3, r29
    li r4, 0x3
    stw r0, 0x58c(r29)
    bl fn_8016E970
    lfs f5, 0x8(r30)
    addi r6, r29, 0x14d4
    lfs f4, 0x8(r31)
    addi r11, r1, 0x10
    lfs f3, 0x4(r30)
    addi r12, r29, 0x14e0
    fadds f5, f5, f4
    lfs f0, 0x4(r31)
    lfs f2, 0x8(r30)
    li r3, -0x1
    fadds f4, f3, f0
    lfs f3, 0x0(r30)
    stfs f2, 0x14dc(r29)
    fmr f2, f5
    psq_l f1, 0x0(r30), 0, 0
    li r0, 0x1
    psq_st f1, 0x0(r6), 0, 0
    addi r4, r29, 0x15b0
    lfs f0, 0x0(r31)
    stfs f4, 0x14(r1)
    addi r5, r29, 0xb0
    fadds f4, f3, f0
    lfs f3, lbl_80884DF0
    stfs f2, 0x14e8(r29)
    addi r7, r1, 0x3c
    lfs f2, 0x8(r30)
    addi r8, r1, 0x30
    stfs f4, 0x10(r1)
    addi r9, r1, 0x20
    lfs f0, lbl_80884E04
    li r6, 0x0
    psq_l f1, 0x0(r11), 0, 0
    li r10, -0x1
    psq_st f1, 0x0(r12), 0, 0
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x528(r29), 0, 0
    fmr f1, f0
    stfs f2, 0x530(r29)
    stfs f3, 0x30(r1)
    stfs f3, 0x34(r1)
    stfs f3, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f3, 0x40(r1)
    stfs f3, 0x44(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    stfs f5, 0x18(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8031C894(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    mr r29, r3
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x78
    blt lbl_fn_8031C894_000004A4
    addi r3, r3, 0x7d4
    bl fn_8012D8B8
    li r0, 0x0
    stw r0, 0x14bc(r29)
    lis r30, lbl_807C7030@ha
    addi r31, r29, 0x14c8
    stw r0, 0x14c0(r29)
    addi r30, r30, lbl_807C7030@l
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    li r0, 0x6
    mr r3, r29
    li r4, 0x3
    stw r0, 0x58c(r29)
    bl fn_8016E970
    lfs f2, 0x8(r31)
    addi r4, r29, 0x14d4
    psq_l f1, 0x0(r31), 0, 0
    addi r6, r1, 0x10
    psq_st f1, 0x0(r4), 0, 0
    addi r11, r29, 0x14e0
    lfs f4, 0x8(r31)
    li r3, -0x1
    stfs f2, 0x14dc(r29)
    li r0, 0x1
    lfs f5, 0x4(r31)
    addi r4, r29, 0x15b0
    lfs f0, 0x8(r30)
    addi r5, r29, 0xb0
    lfs f3, 0x4(r30)
    addi r7, r1, 0x3c
    fadds f6, f4, f0
    lfs f4, 0x0(r31)
    fadds f5, f5, f3
    lfs f0, 0x0(r30)
    lfs f3, lbl_80884DF0
    addi r8, r1, 0x30
    fadds f4, f4, f0
    stfs f5, 0x14(r1)
    fmr f2, f6
    lfs f0, lbl_80884E04
    stfs f4, 0x10(r1)
    addi r9, r1, 0x20
    psq_l f1, 0x0(r6), 0, 0
    li r6, 0x0
    psq_st f1, 0x0(r11), 0, 0
    li r10, -0x1
    psq_l f1, 0x0(r31), 0, 0
    stfs f2, 0x14e8(r29)
    lfs f2, 0x8(r31)
    psq_st f1, 0x528(r29), 0, 0
    fmr f1, f0
    stfs f2, 0x530(r29)
    stfs f3, 0x30(r1)
    stfs f3, 0x34(r1)
    stfs f3, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f3, 0x40(r1)
    stfs f3, 0x44(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    stfs f6, 0x18(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_8031C894_000004B4
lbl_fn_8031C894_000004A4:
    lfs f3, 0x14f4(r3)
    lfs f0, 0x14fc(r3)
    fadds f0, f3, f0
    stfs f0, 0x14f4(r3)
lbl_fn_8031C894_000004B4:
    lfs f3, 0x528(r29)
    lfs f0, 0x14f0(r29)
    lfs f5, 0x52c(r29)
    fadds f6, f3, f0
    lfs f4, 0x14f4(r29)
    lfs f3, 0x530(r29)
    lfs f0, 0x14f8(r29)
    fadds f4, f5, f4
    stfs f6, 0x528(r29)
    fadds f0, f3, f0
    stfs f4, 0x52c(r29)
    stfs f0, 0x530(r29)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8031CA30(void)
{
    nofralloc
    stwu r1, -0x420(r1)
    mflr r0
    stw r0, 0x424(r1)
    stfd f31, 0x410(r1)
    psq_st f31, 0x418(r1), 0, 0
    stfd f30, 0x400(r1)
    psq_st f30, 0x408(r1), 0, 0
    stfd f29, 0x3f0(r1)
    psq_st f29, 0x3f8(r1), 0, 0
    stfd f28, 0x3e0(r1)
    psq_st f28, 0x3e8(r1), 0, 0
    stfd f27, 0x3d0(r1)
    psq_st f27, 0x3d8(r1), 0, 0
    stfd f26, 0x3c0(r1)
    psq_st f26, 0x3c8(r1), 0, 0
    stw r31, 0x3bc(r1)
    mr r31, r3
    stw r30, 0x3b8(r1)
    stw r29, 0x3b4(r1)
    stw r28, 0x3b0(r1)
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x5a
    ble lbl_fn_8031CA30_00000644
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x0
    bl fn_80239DAC
    li r30, 0x0
    stw r30, 0x14bc(r31)
    stw r30, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x9
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    mr r3, r31
    li r4, 0x66
    bl fn_80232B7C
    lfs f0, lbl_80884DF0
    li r3, -0x1
    lfs f1, lbl_80884E04
    li r0, 0x1
    stfs f0, 0xb8(r1)
    addi r4, r31, 0x15a4
    addi r5, r31, 0xb0
    addi r7, r1, 0xc4
    stfs f0, 0xbc(r1)
    addi r8, r1, 0xb8
    addi r9, r1, 0xa8
    li r6, 0x0
    stfs f0, 0xc0(r1)
    li r10, -0x1
    stfs f0, 0xc4(r1)
    stfs f0, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f1, 0xa8(r1)
    stfs f1, 0xac(r1)
    stfs f1, 0xb0(r1)
    stfs f1, 0xb4(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    stw r30, 0x153c(r31)
    bl fn_80680CF8
    lis r4, 0xb60b
    addi r0, r4, 0x60b7
    mulhw r0, r0, r3
    add r0, r0, r3
    srawi r0, r0, 6
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5a
    subf r3, r0, r3
    addi r0, r3, 0xf
    stw r0, 0x1530(r31)
    b lbl_fn_8031CA30_00000CFC
lbl_fn_8031CA30_00000644:
    lfs f8, lbl_80884E04
    addi r5, r1, 0xe8
    lfs f7, 0x1528(r3)
    addi r4, r3, 0x1500
    lfs f0, 0x1524(r3)
    fmuls f13, f7, f8
    lfs f9, 0x152c(r3)
    fmuls f31, f0, f8
    lfs f7, 0x1510(r3)
    fmuls f12, f9, f8
    lfs f8, 0x150c(r3)
    fadds f10, f7, f13
    lfs f0, 0x1514(r3)
    fadds f11, f8, f31
    lfs f7, 0x52c(r3)
    fadds f9, f0, f12
    lfs f0, 0x528(r3)
    fsubs f7, f10, f7
    lfs f8, 0x530(r3)
    fsubs f0, f11, f0
    stfs f31, 0xf4(r1)
    fsubs f2, f9, f8
    stfs f7, 0xec(r1)
    stfs f0, 0xe8(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f13, 0xf8(r1)
    stfs f12, 0xfc(r1)
    stfs f11, 0x150c(r3)
    stfs f10, 0x1510(r3)
    stfs f9, 0x1514(r3)
    mr r3, r4
    stfs f2, 0xf0(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    bl fn_805F98D0
    lfs f2, 0x1508(r31)
    addi r3, r31, 0x1500
    lfs f0, lbl_80884E10
    addi r30, r1, 0xdc
    fabs f7, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f7, f7
    stfs f2, 0xe4(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8031CA30_00000720
    lfs f7, 0xdc(r1)
    lfs f0, lbl_80884DF0
    fcmpo cr0, f7, f0
    ble lbl_fn_8031CA30_00000714
    lfs f0, lbl_80884E14
    b lbl_fn_8031CA30_00000718
lbl_fn_8031CA30_00000714:
    lfs f0, lbl_80884E18
lbl_fn_8031CA30_00000718:
    stfs f0, 0x9c(r1)
    b lbl_fn_8031CA30_00000734
lbl_fn_8031CA30_00000720:
    frsp f2, f2
    lfs f1, 0xdc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x9c(r1)
lbl_fn_8031CA30_00000734:
    lfs f0, 0x9c(r1)
    addi r3, r1, 0x2b8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80884DF0
    addi r4, r1, 0x8c
    lfs f26, 0x2c0(r1)
    mr r5, r4
    lfs f27, 0x2bc(r1)
    addi r3, r1, 0x2e8
    lfs f28, 0x2b8(r1)
    lfs f29, 0x2d0(r1)
    lfs f30, 0x2cc(r1)
    lfs f31, 0x2c8(r1)
    lfs f13, 0x2e0(r1)
    lfs f12, 0x2dc(r1)
    lfs f11, 0x2d8(r1)
    lfs f10, 0x2e4(r1)
    lfs f9, 0x2d4(r1)
    lfs f8, 0x2c4(r1)
    lfs f0, lbl_80884E04
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xe4(r1)
    stfs f7, 0x318(r1)
    stfs f7, 0x31c(r1)
    stfs f7, 0x320(r1)
    stfs f0, 0x324(r1)
    stfs f28, 0x5c(r1)
    stfs f27, 0x60(r1)
    stfs f26, 0x64(r1)
    stfs f28, 0x2e8(r1)
    stfs f27, 0x2ec(r1)
    stfs f26, 0x2f0(r1)
    stfs f31, 0x68(r1)
    stfs f30, 0x6c(r1)
    stfs f29, 0x70(r1)
    stfs f31, 0x2f8(r1)
    stfs f30, 0x2fc(r1)
    stfs f29, 0x300(r1)
    stfs f11, 0x74(r1)
    stfs f12, 0x78(r1)
    stfs f13, 0x7c(r1)
    stfs f11, 0x308(r1)
    stfs f12, 0x30c(r1)
    stfs f13, 0x310(r1)
    stfs f8, 0x80(r1)
    stfs f9, 0x84(r1)
    stfs f10, 0x88(r1)
    stfs f8, 0x2f4(r1)
    stfs f9, 0x304(r1)
    stfs f10, 0x314(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x94(r1)
    bl fn_805F9750
    lfs f2, 0x94(r1)
    lfs f0, lbl_80884E10
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8031CA30_00000850
    lfs f7, 0x90(r1)
    lfs f0, lbl_80884DF0
    fcmpo cr0, f7, f0
    ble lbl_fn_8031CA30_00000840
    lfs f0, lbl_80884E14
    b lbl_fn_8031CA30_00000844
lbl_fn_8031CA30_00000840:
    lfs f0, lbl_80884E18
lbl_fn_8031CA30_00000844:
    fneg f0, f0
    stfs f0, 0x98(r1)
    b lbl_fn_8031CA30_00000864
lbl_fn_8031CA30_00000850:
    lfs f1, 0x90(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x98(r1)
lbl_fn_8031CA30_00000864:
    lfs f8, lbl_80884DF0
    addi r3, r1, 0x98
    psq_l f1, 0x0(r3), 0, 0
    addi r29, r1, 0x328
    fmr f2, f8
    psq_st f1, 0x534(r31), 0, 0
    lfs f7, lbl_80884E20
    stfs f2, 0xe4(r1)
    frsp f2, f2
    lfs f0, lbl_80884E04
    stfs f8, 0xa0(r1)
    stfs f2, 0x53c(r31)
    fcmpu cr0, f8, f2
    psq_st f1, 0x0(r30), 0, 0
    stfs f8, 0x118(r1)
    stfs f8, 0x11c(r1)
    stfs f7, 0x120(r1)
    stfs f8, 0x354(r1)
    stfs f8, 0x34c(r1)
    stfs f8, 0x348(r1)
    stfs f8, 0x344(r1)
    stfs f8, 0x340(r1)
    stfs f8, 0x338(r1)
    stfs f8, 0x334(r1)
    stfs f8, 0x330(r1)
    stfs f8, 0x32c(r1)
    stfs f0, 0x350(r1)
    stfs f0, 0x33c(r1)
    stfs f0, 0x328(r1)
    beq lbl_fn_8031CA30_00000930
    frsp f1, f2
    addi r3, r1, 0x1c8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x1c8
    addi r5, r1, 0x198
    bl fn_805F89F0
    addi r3, r1, 0x198
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8031CA30_00000930:
    lfs f0, lbl_80884DF0
    lfs f1, 0x538(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_8031CA30_00000990
    addi r3, r1, 0x228
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x228
    addi r5, r1, 0x1f8
    bl fn_805F89F0
    addi r3, r1, 0x1f8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8031CA30_00000990:
    lfs f0, lbl_80884DF0
    lfs f1, 0x534(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_8031CA30_000009F0
    addi r3, r1, 0x288
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x288
    addi r5, r1, 0x258
    bl fn_805F89F0
    addi r3, r1, 0x258
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8031CA30_000009F0:
    addi r4, r1, 0x118
    addi r3, r1, 0x328
    mr r5, r4
    bl fn_805F93C0
    lfs f8, 0x530(r31)
    li r0, 0x0
    lfs f0, 0x120(r1)
    addi r4, r1, 0x358
    lfs f9, 0x52c(r31)
    addi r5, r31, 0x528
    lfs f7, 0x528(r31)
    fadds f10, f8, f0
    lfs f8, 0x11c(r1)
    addi r6, r1, 0x10c
    lfs f0, 0x118(r1)
    addi r8, r31, 0x5b8
    fadds f8, f9, f8
    fadds f0, f7, f0
    stfs f10, 0x114(r1)
    lwz r3, lbl_8087EE98
    lis r7, 0x4000
    stfs f0, 0x10c(r1)
    li r9, 0x0
    stfs f8, 0x110(r1)
    stw r0, 0x38c(r1)
    stw r0, 0x390(r1)
    stw r0, 0x394(r1)
    stw r0, 0x398(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8031CA30_00000CFC
    lwz r3, 0x390(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8031CA30_00000CFC
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8031CA30_00000CFC
    li r3, 0x76e
    bl fn_80219E6C
    lwz r6, 0x390(r1)
    mr r30, r3
    lwz r4, 0x590(r31)
    mr r5, r30
    lwz r28, 0xc(r6)
    mr r3, r28
    bl fn_801533C8
    cmpwi r3, 0x0
    bne lbl_fn_8031CA30_00000CFC
    lfs f7, 0x120(r1)
    addi r3, r1, 0xd0
    lfs f0, 0x11c(r1)
    addi r29, r1, 0x100
    fneg f8, f7
    lfs f7, 0x118(r1)
    fneg f9, f0
    lfs f0, lbl_80884E10
    fneg f7, f7
    stfs f8, 0xd8(r1)
    frsp f2, f8
    stfs f7, 0xd0(r1)
    stfs f9, 0xd4(r1)
    fabs f7, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f7, f7
    stfs f2, 0x108(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8031CA30_00000B28
    lfs f7, 0x100(r1)
    lfs f0, lbl_80884DF0
    fcmpo cr0, f7, f0
    ble lbl_fn_8031CA30_00000B1C
    lfs f0, lbl_80884E14
    b lbl_fn_8031CA30_00000B20
lbl_fn_8031CA30_00000B1C:
    lfs f0, lbl_80884E18
lbl_fn_8031CA30_00000B20:
    stfs f0, 0x54(r1)
    b lbl_fn_8031CA30_00000B3C
lbl_fn_8031CA30_00000B28:
    frsp f2, f2
    lfs f1, 0x100(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x54(r1)
lbl_fn_8031CA30_00000B3C:
    lfs f0, 0x54(r1)
    addi r3, r1, 0x128
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80884DF0
    addi r4, r1, 0x44
    lfs f31, 0x130(r1)
    mr r5, r4
    lfs f30, 0x12c(r1)
    addi r3, r1, 0x158
    lfs f29, 0x128(r1)
    lfs f28, 0x140(r1)
    lfs f27, 0x13c(r1)
    lfs f26, 0x138(r1)
    lfs f13, 0x150(r1)
    lfs f12, 0x14c(r1)
    lfs f11, 0x148(r1)
    lfs f10, 0x154(r1)
    lfs f9, 0x144(r1)
    lfs f8, 0x134(r1)
    lfs f0, lbl_80884E04
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x108(r1)
    stfs f7, 0x188(r1)
    stfs f7, 0x18c(r1)
    stfs f7, 0x190(r1)
    stfs f0, 0x194(r1)
    stfs f29, 0x14(r1)
    stfs f30, 0x18(r1)
    stfs f31, 0x1c(r1)
    stfs f29, 0x158(r1)
    stfs f30, 0x15c(r1)
    stfs f31, 0x160(r1)
    stfs f26, 0x20(r1)
    stfs f27, 0x24(r1)
    stfs f28, 0x28(r1)
    stfs f26, 0x168(r1)
    stfs f27, 0x16c(r1)
    stfs f28, 0x170(r1)
    stfs f11, 0x2c(r1)
    stfs f12, 0x30(r1)
    stfs f13, 0x34(r1)
    stfs f11, 0x178(r1)
    stfs f12, 0x17c(r1)
    stfs f13, 0x180(r1)
    stfs f8, 0x38(r1)
    stfs f9, 0x3c(r1)
    stfs f10, 0x40(r1)
    stfs f8, 0x164(r1)
    stfs f9, 0x174(r1)
    stfs f10, 0x184(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F9750
    lfs f2, 0x4c(r1)
    lfs f0, lbl_80884E10
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8031CA30_00000C58
    lfs f7, 0x48(r1)
    lfs f0, lbl_80884DF0
    fcmpo cr0, f7, f0
    ble lbl_fn_8031CA30_00000C48
    lfs f0, lbl_80884E14
    b lbl_fn_8031CA30_00000C4C
lbl_fn_8031CA30_00000C48:
    lfs f0, lbl_80884E18
lbl_fn_8031CA30_00000C4C:
    fneg f0, f0
    stfs f0, 0x50(r1)
    b lbl_fn_8031CA30_00000C6C
lbl_fn_8031CA30_00000C58:
    lfs f1, 0x48(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x50(r1)
lbl_fn_8031CA30_00000C6C:
    addi r3, r1, 0x50
    lfs f2, lbl_80884DF0
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0xf
    psq_st f1, 0x0(r29), 0, 0
    mr r4, r31
    lfs f1, lbl_80884E00
    mr r5, r28
    stfs f2, 0x108(r1)
    mr r7, r30
    addi r9, r1, 0x368
    addi r10, r31, 0x1500
    stw r0, 0x8(r1)
    li r6, 0x0
    stfs f2, 0x58(r1)
    lwz r3, lbl_8087F048
    lwz r8, 0x590(r31)
    bl fn_800FDB20
    lwz r3, lbl_8087F048
    addi r4, r1, 0x368
    lwz r6, 0xc4(r30)
    addi r5, r1, 0x100
    li r7, 0x0
    bl fn_80101434
    lis r4, lbl_8074973C@ha
    lfs f1, lbl_80884E04
    addi r4, r4, lbl_8074973C@l
    addi r3, r1, 0x10
    addi r4, r4, 0xd3
    addi r5, r1, 0x368
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8031CA30_00000CFC:
    lwz r0, 0x424(r1)
    psq_l f31, 0x418(r1), 0, 0
    lfd f31, 0x410(r1)
    psq_l f30, 0x408(r1), 0, 0
    lfd f30, 0x400(r1)
    psq_l f29, 0x3f8(r1), 0, 0
    lfd f29, 0x3f0(r1)
    psq_l f28, 0x3e8(r1), 0, 0
    lfd f28, 0x3e0(r1)
    psq_l f27, 0x3d8(r1), 0, 0
    lfd f27, 0x3d0(r1)
    psq_l f26, 0x3c8(r1), 0, 0
    lfd f26, 0x3c0(r1)
    lwz r31, 0x3bc(r1)
    lwz r30, 0x3b8(r1)
    lwz r29, 0x3b4(r1)
    lwz r28, 0x3b0(r1)
    mtlr r0
    addi r1, r1, 0x420
    blr
}

asm void fn_8031D27C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8031D2BC(void)
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
    stw r31, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stw r31, 0x58c(r30)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8031D350(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stw r31, 0xdc(r1)
    mr r31, r3
    bl fn_8031D27C
    mr r3, r31
    li r4, 0x8
    bl fn_802657FC
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    bl fn_800F7FA0
    mr r4, r31
    li r5, 0x65
    bl fn_800F7FA8
    bl fn_800F7FA0
    addi r4, r31, 0x1598
    addi r5, r31, 0xb0
    li r6, 0x1
    bl fn_8026607C
    lwz r3, 0x14b8(r31)
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x74
    addi r5, r31, 0x528
    bl fn_80013338
    addi r3, r1, 0x74
    bl fn_800F7FF0
    addi r3, r31, 0x1524
    addi r4, r1, 0x74
    bl fn_8000D124
    lfs f0, lbl_80884DF0
    addi r3, r31, 0x1524
    stfs f0, 0x1528(r31)
    bl fn_800F7FF0
    lfs f1, lbl_80884E34
    addi r3, r1, 0x50
    addi r4, r31, 0x1524
    bl fn_800F72CC
    lwz r3, 0x14b8(r31)
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x5c
    addi r5, r1, 0x50
    bl fn_80013338
    addi r3, r31, 0x150c
    addi r4, r1, 0x5c
    bl fn_8000D124
    addi r3, r1, 0x38
    addi r4, r31, 0x150c
    addi r5, r31, 0x528
    bl fn_80013338
    addi r3, r1, 0x44
    addi r4, r1, 0x38
    bl fn_800F7FD8
    addi r3, r1, 0x74
    addi r4, r1, 0x44
    bl fn_8000D124
    lfs f1, lbl_80884E38
    addi r3, r1, 0x2c
    addi r4, r1, 0x74
    bl fn_800F72CC
    addi r3, r1, 0x68
    addi r4, r31, 0x528
    addi r5, r1, 0x2c
    bl fn_80013410
    addi r3, r1, 0x80
    bl fn_80140500
    bl fn_801404F8
    lis r7, 0x8000
    addi r4, r1, 0x80
    addi r5, r31, 0x528
    addi r6, r1, 0x68
    addi r7, r7, 0x4
    addi r8, r31, 0x5b8
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8031D350_00000FA8
    addi r3, r31, 0x1538
    addi r4, r1, 0x90
    addi r5, r1, 0xa8
    bl fn_8031D6DC
    addi r3, r1, 0x8
    addi r4, r1, 0x90
    addi r5, r31, 0x528
    bl fn_80013338
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_800F7FD8
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    bl fn_80011034
    addi r3, r31, 0x534
    addi r4, r1, 0x20
    bl fn_8000D124
    b lbl_fn_8031D350_00000FB0
lbl_fn_8031D350_00000FA8:
    mr r3, r31
    bl fn_8031D2BC
lbl_fn_8031D350_00000FB0:
    lwz r0, 0xe4(r1)
    lwz r31, 0xdc(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_8031D4F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807889C0@ha
    lfs f1, lbl_80884DF0
    stw r0, 0x14(r1)
    li r0, 0x0
    lfs f0, lbl_80884E04
    addi r4, r4, lbl_807889C0@l
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stfs f1, 0x10(r3)
    stfs f1, 0x14(r3)
    stfs f1, 0x18(r3)
    stfs f1, 0x1c(r3)
    stfs f0, 0x20(r3)
    stfs f1, 0x24(r3)
    stw r0, 0x28(r3)
    stw r0, 0x2c(r3)
    stw r0, 0x30(r3)
    stw r0, 0x34(r3)
    addi r3, r3, 0x38
    bl fn_800CB360
    lwz r0, 0x2c(r31)
    mr r3, r31
    subf r0, r0, r0
    stw r0, 0x2c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8031D57C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    beq lbl_fn_8031D57C_0000118C
    lis r4, lbl_807889C0@ha
    li r0, 0x0
    addi r4, r4, lbl_807889C0@l
    lwz r29, 0x28(r3)
    stw r0, 0x4(r3)
    stw r4, 0x0(r3)
    stw r0, 0x34(r3)
    b lbl_fn_8031D57C_000010EC
lbl_fn_8031D57C_00001094:
    lwz r3, lbl_8087F3C0
    li r5, 0x0
    lwz r4, 0x0(r29)
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, 0x0(r29)
    bl dtor_80084684
    lwz r0, 0x2c(r30)
    mr r3, r29
    lwz r5, 0x28(r30)
    addi r4, r29, 0x4
    slwi r0, r0, 2
    add r0, r5, r0
    subf r0, r29, r0
    srawi r0, r0, 2
    addze r5, r0
    subi r0, r5, 0x1
    slwi r5, r0, 2
    bl memmove
    lwz r3, 0x2c(r30)
    subi r0, r3, 0x1
    stw r0, 0x2c(r30)
lbl_fn_8031D57C_000010EC:
    lwz r0, 0x2c(r30)
    lwz r3, 0x28(r30)
    slwi r0, r0, 2
    add r0, r3, r0
    cmplw r29, r0
    bne lbl_fn_8031D57C_00001094
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x0
    bl fn_80239D58
    cmpwi r3, 0x0
    beq lbl_fn_8031D57C_00001130
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_8031D57C_00001130:
    addi r3, r30, 0x38
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    addi r3, r30, 0x38
    li r4, -0x1
    bl fn_800CB3A0
    addic. r4, r30, 0x28
    beq lbl_fn_8031D57C_0000117C
    beq lbl_fn_8031D57C_0000117C
    beq lbl_fn_8031D57C_0000117C
    beq lbl_fn_8031D57C_0000117C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8031D57C_0000117C
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8031D57C_0000117C:
    cmpwi r31, 0x0
    ble lbl_fn_8031D57C_0000118C
    mr r3, r30
    bl dtor_80084684
lbl_fn_8031D57C_0000118C:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8031D6DC(void)
{
    nofralloc
    stwu r1, -0x3a0(r1)
    mflr r0
    stw r0, 0x3a4(r1)
    addi r11, r1, 0x340
    stfd f31, 0x390(r1)
    psq_st f31, 0x398(r1), 0, 0
    stfd f30, 0x380(r1)
    psq_st f30, 0x388(r1), 0, 0
    stfd f29, 0x370(r1)
    psq_st f29, 0x378(r1), 0, 0
    stfd f28, 0x360(r1)
    psq_st f28, 0x368(r1), 0, 0
    stfd f27, 0x350(r1)
    psq_st f27, 0x358(r1), 0, 0
    stfd f26, 0x340(r1)
    psq_st f26, 0x348(r1), 0, 0
    bl _savegpr_26
    li r0, 0x0
    lwz r27, 0x28(r3)
    stw r0, 0x4(r3)
    mr r28, r3
    mr r29, r4
    mr r30, r5
    stw r0, 0x34(r3)
    b lbl_fn_8031D6DC_00001268
lbl_fn_8031D6DC_00001210:
    lwz r3, lbl_8087F3C0
    li r5, 0x0
    lwz r4, 0x0(r27)
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, 0x0(r27)
    bl dtor_80084684
    lwz r0, 0x2c(r28)
    mr r3, r27
    lwz r5, 0x28(r28)
    addi r4, r27, 0x4
    slwi r0, r0, 2
    add r0, r5, r0
    subf r0, r27, r0
    srawi r0, r0, 2
    addze r5, r0
    subi r0, r5, 0x1
    slwi r5, r0, 2
    bl memmove
    lwz r3, 0x2c(r28)
    subi r0, r3, 0x1
    stw r0, 0x2c(r28)
lbl_fn_8031D6DC_00001268:
    lwz r0, 0x2c(r28)
    lwz r3, 0x28(r28)
    slwi r0, r0, 2
    add r0, r3, r0
    cmplw r27, r0
    bne lbl_fn_8031D6DC_00001210
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0x0
    bl fn_80239D58
    cmpwi r3, 0x0
    beq lbl_fn_8031D6DC_000012AC
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_8031D6DC_000012AC:
    addi r3, r28, 0x38
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    li r0, 0x1
    stw r0, 0x4(r28)
    lis r4, lbl_8074973C@ha
    li r3, 0x50
    psq_l f1, 0x0(r29), 0, 0
    addi r4, r4, lbl_8074973C@l
    lfs f2, 0x8(r29)
    addi r5, r4, 0xe0
    stfs f2, 0x18(r28)
    mr r6, r5
    lfs f2, 0x8(r30)
    li r4, 0x1
    psq_st f1, 0x10(r28), 0, 0
    li r7, 0x0
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x1c(r28), 0, 0
    stfs f2, 0x24(r28)
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    lfs f2, 0x18(r28)
    addi r4, r1, 0x28
    psq_l f1, 0x10(r28), 0, 0
    addi r5, r3, 0x3c
    psq_st f1, 0x30(r3), 0, 0
    stfs f2, 0x38(r3)
    mr r3, r5
    lfs f9, 0x4(r29)
    lfs f8, 0x14(r28)
    lfs f7, 0x0(r29)
    fsubs f9, f9, f8
    lfs f0, 0x10(r28)
    lfs f8, 0x8(r29)
    fsubs f7, f7, f0
    lfs f0, 0x18(r28)
    stfs f9, 0x2c(r1)
    fsubs f2, f8, f0
    stfs f7, 0x28(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x30(r1)
    stfs f2, 0x8(r5)
    bl fn_805F9940
    frsp f7, f1
    lfs f0, lbl_80884E10
    stfs f1, 0x48(r30)
    fabs f7, f7
    frsp f7, f7
    fcmpo cr0, f7, f0
    blt lbl_fn_8031D6DC_00001390
    addi r3, r30, 0x3c
    mr r4, r3
    bl fn_805F98D0
lbl_fn_8031D6DC_00001390:
    li r0, 0x1e
    stw r0, 0x4c(r30)
    addi r3, r1, 0xa8
    lfs f1, 0x0(r29)
    lfs f2, 0x4(r29)
    lfs f3, 0x8(r29)
    bl fn_805F90D0
    addi r3, r1, 0xa8
    lfs f0, lbl_80884E10
    psq_l f2, 0x8(r3), 0, 0
    addi r31, r1, 0x34
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    lfs f2, 0x44(r30)
    psq_l f1, 0x3c(r30), 0, 0
    fabs f7, f2
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x3c(r1)
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8031D6DC_0000142C
    lfs f7, 0x34(r1)
    lfs f0, lbl_80884DF0
    fcmpo cr0, f7, f0
    ble lbl_fn_8031D6DC_00001420
    lfs f0, lbl_80884E14
    b lbl_fn_8031D6DC_00001424
lbl_fn_8031D6DC_00001420:
    lfs f0, lbl_80884E18
lbl_fn_8031D6DC_00001424:
    stfs f0, 0x44(r1)
    b lbl_fn_8031D6DC_00001440
lbl_fn_8031D6DC_0000142C:
    frsp f2, f2
    lfs f1, 0x34(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x44(r1)
lbl_fn_8031D6DC_00001440:
    lfs f0, 0x44(r1)
    addi r3, r1, 0x118
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80884DF0
    addi r4, r1, 0x4c
    lfs f8, 0x120(r1)
    mr r5, r4
    lfs f9, 0x11c(r1)
    addi r3, r1, 0xd8
    lfs f10, 0x118(r1)
    lfs f11, 0x130(r1)
    lfs f12, 0x12c(r1)
    lfs f13, 0x128(r1)
    lfs f31, 0x140(r1)
    lfs f30, 0x13c(r1)
    lfs f29, 0x138(r1)
    lfs f28, 0x144(r1)
    lfs f27, 0x134(r1)
    lfs f26, 0x124(r1)
    lfs f0, lbl_80884E04
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x3c(r1)
    stfs f7, 0x108(r1)
    stfs f7, 0x10c(r1)
    stfs f7, 0x110(r1)
    stfs f0, 0x114(r1)
    stfs f10, 0x7c(r1)
    stfs f9, 0x80(r1)
    stfs f8, 0x84(r1)
    stfs f10, 0xd8(r1)
    stfs f9, 0xdc(r1)
    stfs f8, 0xe0(r1)
    stfs f13, 0x70(r1)
    stfs f12, 0x74(r1)
    stfs f11, 0x78(r1)
    stfs f13, 0xe8(r1)
    stfs f12, 0xec(r1)
    stfs f11, 0xf0(r1)
    stfs f29, 0x64(r1)
    stfs f30, 0x68(r1)
    stfs f31, 0x6c(r1)
    stfs f29, 0xf8(r1)
    stfs f30, 0xfc(r1)
    stfs f31, 0x100(r1)
    stfs f26, 0x58(r1)
    stfs f27, 0x5c(r1)
    stfs f28, 0x60(r1)
    stfs f26, 0xe4(r1)
    stfs f27, 0xf4(r1)
    stfs f28, 0x104(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x54(r1)
    bl fn_805F9750
    lfs f2, 0x54(r1)
    lfs f0, lbl_80884E10
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8031D6DC_0000155C
    lfs f7, 0x50(r1)
    lfs f0, lbl_80884DF0
    fcmpo cr0, f7, f0
    ble lbl_fn_8031D6DC_0000154C
    lfs f0, lbl_80884E14
    b lbl_fn_8031D6DC_00001550
lbl_fn_8031D6DC_0000154C:
    lfs f0, lbl_80884E18
lbl_fn_8031D6DC_00001550:
    fneg f0, f0
    stfs f0, 0x40(r1)
    b lbl_fn_8031D6DC_00001570
lbl_fn_8031D6DC_0000155C:
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x40(r1)
lbl_fn_8031D6DC_00001570:
    lfs f2, lbl_80884DF0
    addi r3, r1, 0x40
    lfs f7, lbl_80884E04
    addi r27, r1, 0x268
    frsp f0, f2
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x48(r1)
    fcmpu cr0, f2, f0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x3c(r1)
    stfs f2, 0x294(r1)
    stfs f2, 0x28c(r1)
    stfs f2, 0x288(r1)
    stfs f2, 0x284(r1)
    stfs f2, 0x280(r1)
    stfs f2, 0x278(r1)
    stfs f2, 0x274(r1)
    stfs f2, 0x270(r1)
    stfs f2, 0x26c(r1)
    stfs f7, 0x290(r1)
    stfs f7, 0x27c(r1)
    stfs f7, 0x268(r1)
    beq lbl_fn_8031D6DC_00001620
    fmr f1, f0
    addi r3, r1, 0x178
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x178
    addi r5, r1, 0x148
    bl fn_805F89F0
    addi r3, r1, 0x148
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
lbl_fn_8031D6DC_00001620:
    lfs f0, lbl_80884DF0
    lfs f1, 0x38(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8031D6DC_00001680
    addi r3, r1, 0x1d8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x1d8
    addi r5, r1, 0x1a8
    bl fn_805F89F0
    addi r3, r1, 0x1a8
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
lbl_fn_8031D6DC_00001680:
    lfs f0, lbl_80884DF0
    lfs f1, 0x34(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8031D6DC_000016E0
    addi r3, r1, 0x238
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x238
    addi r5, r1, 0x208
    bl fn_805F89F0
    addi r3, r1, 0x208
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
lbl_fn_8031D6DC_000016E0:
    mr r3, r30
    mr r4, r27
    addi r5, r1, 0x298
    bl fn_805F89F0
    addi r4, r1, 0x298
    lfs f8, lbl_80884E04
    psq_l f2, 0x8(r4), 0, 0
    addi r3, r1, 0x2f8
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    fmr f1, f8
    lfs f0, lbl_80884E1C
    psq_st f2, 0x8(r30), 0, 0
    fmr f2, f1
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    lfs f7, 0x48(r30)
    stfs f8, 0x88(r1)
    fdivs f3, f7, f0
    stfs f8, 0x8c(r1)
    stfs f3, 0x90(r1)
    bl fn_805F9160
    mr r3, r30
    addi r4, r1, 0x2f8
    addi r5, r1, 0x2c8
    bl fn_805F89F0
    addi r3, r1, 0x2c8
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    lwz r3, 0x2c(r28)
    lwz r4, 0x30(r28)
    cmplw r3, r4
    bge lbl_fn_8031D6DC_000017C0
    addi r3, r3, 0x1
    stw r3, 0x2c(r28)
    subi r0, r3, 0x1
    lwz r3, 0x28(r28)
    slwi r0, r0, 2
    stwx r30, r3, r0
    b lbl_fn_8031D6DC_00001A3C
lbl_fn_8031D6DC_000017C0:
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_8031D6DC_000017F8
    lis r4, lbl_8074973C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8074973C@l
    addi r3, r3, __files@l
    addi r4, r4, 0xe1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8031D6DC_000017F8:
    li r5, 0x0
    addi r4, r28, 0x30
    lis r3, 0x4000
    stw r5, 0x94(r1)
    subi r0, r3, 0x1
    stw r5, 0x98(r1)
    stw r5, 0x9c(r1)
    stw r4, 0xa0(r1)
    stw r5, 0xa4(r1)
    lwz r3, 0x2c(r28)
    lwz r31, 0x30(r28)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x20(r1)
    ble lbl_fn_8031D6DC_00001860
    lis r4, lbl_8074973C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8074973C@l
    addi r3, r3, __files@l
    addi r4, r4, 0xe1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8031D6DC_00001860:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_8031D6DC_000018B0
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x20(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x18
    srwi r4, r4, 2
    stw r4, 0x18(r1)
    cmplw r4, r0
    bge lbl_fn_8031D6DC_000018A4
    addi r3, r1, 0x20
lbl_fn_8031D6DC_000018A4:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_8031D6DC_000018F4
lbl_fn_8031D6DC_000018B0:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_8031D6DC_000018EC
    addi r3, r31, 0x1
    lwz r0, 0x20(r1)
    srwi r3, r3, 1
    stw r3, 0x1c(r1)
    cmplw r3, r0
    addi r3, r1, 0x1c
    bge lbl_fn_8031D6DC_000018E0
    addi r3, r1, 0x20
lbl_fn_8031D6DC_000018E0:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_8031D6DC_000018F4
lbl_fn_8031D6DC_000018EC:
    lis r3, 0x4000
    subi r31, r3, 0x1
lbl_fn_8031D6DC_000018F4:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_8031D6DC_00001928
    lis r4, lbl_8074973C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8074973C@l
    addi r3, r3, __files@l
    addi r4, r4, 0xe1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8031D6DC_00001928:
    slwi r3, r31, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_8031D6DC_0000195C
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8031D6DC_0000195C:
    lwz r0, 0x98(r1)
    stw r27, 0x94(r1)
    slwi r3, r0, 2
    stw r31, 0x9c(r1)
    lwz r0, 0x2c(r28)
    stw r0, 0xa4(r1)
    slwi r0, r0, 2
    add r0, r27, r0
    stwx r30, r3, r0
    lwz r3, 0x98(r1)
    lwz r0, 0xa4(r1)
    addi r3, r3, 0x1
    stw r3, 0x98(r1)
    lwz r3, 0x94(r1)
    lwz r4, 0x2c(r28)
    lwz r31, 0x28(r28)
    slwi r4, r4, 2
    add r5, r31, r4
    subf r5, r31, r5
    mr r4, r31
    srawi r5, r5, 2
    addze r27, r5
    subf r0, r27, r0
    stw r0, 0xa4(r1)
    slwi r26, r27, 2
    slwi r0, r0, 2
    mr r5, r26
    add r3, r3, r0
    bl memcpy
    mr r3, r31
    mr r5, r26
    li r4, 0x0
    bl memset
    lwz r0, 0x98(r1)
    li r4, 0x0
    addic. r3, r1, 0x94
    add r0, r0, r27
    stw r0, 0x98(r1)
    stw r4, 0x2c(r28)
    lwz r3, 0x30(r28)
    lwz r0, 0x9c(r1)
    stw r0, 0x30(r28)
    stw r3, 0x9c(r1)
    lwz r0, 0x94(r1)
    lwz r3, 0x28(r28)
    stw r0, 0x28(r28)
    stw r3, 0x94(r1)
    lwz r0, 0x98(r1)
    stw r0, 0x2c(r28)
    stw r4, 0x98(r1)
    beq lbl_fn_8031D6DC_00001A3C
    lwz r3, 0x94(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8031D6DC_00001A3C
    stw r4, 0x98(r1)
    bl dtor_80084684
lbl_fn_8031D6DC_00001A3C:
    lwz r0, 0x8(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8031D6DC_00001A94
    mr r3, r30
    li r4, 0x0
    bl fn_80232B7C
    li r0, 0x0
    stw r0, 0x8(r1)
    li r3, -0x1
    lfs f1, lbl_80884E04
    stw r3, 0xc(r1)
    li r0, 0x1
    mr r7, r30
    li r5, -0x1
    stw r0, 0x10(r1)
    li r6, 0x5
    li r8, 0x0
    li r9, 0x0
    lwz r3, lbl_8087F3C0
    li r10, 0x0
    lwz r4, 0x8(r28)
    bl fn_8023A680
lbl_fn_8031D6DC_00001A94:
    lwz r3, 0x2c(r28)
    lis r4, lbl_8074973C@ha
    addi r4, r4, lbl_8074973C@l
    lwz r6, 0x28(r28)
    subi r0, r3, 0x1
    lfs f1, lbl_80884E04
    slwi r0, r0, 2
    mr r5, r29
    lwzx r0, r6, r0
    addi r3, r1, 0x24
    stw r0, 0x34(r28)
    addi r4, r4, 0xf5
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r28, 0x38
    addi r4, r1, 0x24
    bl fn_800CB440
    addi r3, r1, 0x24
    li r4, -0x1
    bl fn_800CB3A0
    addi r11, r1, 0x340
    psq_l f31, 0x398(r1), 0, 0
    lfd f31, 0x390(r1)
    psq_l f30, 0x388(r1), 0, 0
    lfd f30, 0x380(r1)
    psq_l f29, 0x378(r1), 0, 0
    lfd f29, 0x370(r1)
    psq_l f28, 0x368(r1), 0, 0
    lfd f28, 0x360(r1)
    psq_l f27, 0x358(r1), 0, 0
    lfd f27, 0x350(r1)
    psq_l f26, 0x348(r1), 0, 0
    lfd f26, 0x340(r1)
    bl _restgpr_26
    lwz r0, 0x3a4(r1)
    mtlr r0
    addi r1, r1, 0x3a0
    blr
}
