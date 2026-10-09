#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_24(void);
extern void _restgpr_27(void);
extern void _savegpr_22(void);
extern void _savegpr_24(void);
extern void _savegpr_27(void);
extern void fn_8004D314(void);
extern void fn_8004ED34(void);
extern void fn_800638B0(void);
extern void fn_80063D3C(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_801010A0(void);
extern void fn_8010EE78(void);
extern void fn_80176548(void);
extern void fn_80179D44(void);
extern void fn_80232B7C(void);
extern void fn_8023A8B4(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_80746288[];
extern u8 lbl_80746290[];
extern u8 lbl_807462A8[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F8A0;
extern u32 lbl_80883F34;
extern u32 lbl_80883F3C;
extern u32 lbl_80883F40;
extern u32 lbl_80883F4C;
extern u32 lbl_80883F64;
extern u32 lbl_80883F68;
extern u32 lbl_80883F6C;
extern u32 lbl_80883F70;
extern u32 lbl_80883F74;
extern u32 lbl_80883F78;
extern u32 lbl_80883FAC;
extern u32 lbl_80883FD0;
extern u32 lbl_80883FDC;
extern u32 lbl_80883FE0;
extern u32 lbl_80883FE4;
extern u32 lbl_80883FE8;
extern u32 lbl_80883FEC;
extern u32 lbl_80883FF0;
extern u32 lbl_80883FF4;
extern u32 lbl_80883FF8;
extern u32 lbl_80883FFC;
extern u32 lbl_80884000;
extern u32 lbl_80884004;
extern u32 lbl_80884008;

/* Function declarations */
void fn_802B0430(void);
void fn_802B07F0(void);
void fn_802B0D90(void);
void fn_802B12C4(void);
void fn_802B12CC(void);
void fn_802B12D8(void);
void fn_802B1744(void);
void fn_802B17AC(void);
void fn_802B19EC(void);
void fn_802B1B08(void);
void fn_802B1B50(void);

asm void fn_802B0430(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    addi r11, r1, 0x210
    bl _savegpr_27
    cmpwi r4, 0xb
    lis r0, 0x4330
    stw r0, 0x1d8(r1)
    mr r29, r3
    mr r30, r5
    li r31, 0x0
    stw r0, 0x1e0(r1)
    beq lbl_fn_802B0430_00000040
    cmpwi r4, 0xc
    beq lbl_fn_802B0430_0000004C
    b lbl_fn_802B0430_00000074
lbl_fn_802B0430_00000040:
    li r28, 0x57e4
    li r27, 0x57e4
    b lbl_fn_802B0430_0000007C
lbl_fn_802B0430_0000004C:
    lfs f7, lbl_80883FDC
    lis r4, 0x1
    lfs f0, 0x1a94(r3)
    subi r28, r4, 0x42f0
    fsubs f0, f7, f0
    fmuls f0, f0, f0
    fctiwz f0, f0
    stfd f0, 0x1e8(r1)
    lwz r27, 0x1ec(r1)
    b lbl_fn_802B0430_0000007C
lbl_fn_802B0430_00000074:
    li r3, 0x0
    b lbl_fn_802B0430_000003A8
lbl_fn_802B0430_0000007C:
    lwz r4, 0xd1c(r3)
    lfs f0, 0x530(r3)
    lfs f7, 0x530(r4)
    lfs f9, 0x52c(r4)
    fsubs f10, f7, f0
    lfs f8, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x14
    lfs f7, 0x528(r4)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f10, 0x1c(r1)
    bl fn_805F9920
    xoris r0, r28, 0x8000
    stw r0, 0x1dc(r1)
    lis r3, lbl_80746288@ha
    lfd f7, lbl_80746288@l(r3)
    lfd f0, 0x1d8(r1)
    fsubs f0, f0, f7
    fcmpo cr0, f1, f0
    ble lbl_fn_802B0430_000000F8
    cmpwi r30, 0x0
    li r31, 0x1
    beq lbl_fn_802B0430_000000F8
    stw r0, 0x1e4(r1)
    lfd f0, 0x1e0(r1)
    fsubs f0, f0, f7
    fsubs f0, f1, f0
    stfs f0, 0x0(r30)
lbl_fn_802B0430_000000F8:
    li r0, 0x0
    stw r0, 0x1bc(r1)
    addi r3, r1, 0x2c
    lfs f8, lbl_80883F40
    stw r0, 0x1c0(r1)
    addi r28, r1, 0x158
    lfs f7, lbl_80883FE0
    stw r0, 0x1c4(r1)
    lfs f0, lbl_80883F4C
    stw r0, 0x1c8(r1)
    psq_l f1, 0x528(r29), 0, 0
    lfs f2, 0x530(r29)
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f8, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f7, 0x28(r1)
    stfs f8, 0x184(r1)
    stfs f8, 0x17c(r1)
    stfs f8, 0x178(r1)
    stfs f8, 0x174(r1)
    stfs f8, 0x170(r1)
    stfs f8, 0x168(r1)
    stfs f8, 0x164(r1)
    stfs f8, 0x160(r1)
    stfs f8, 0x15c(r1)
    stfs f0, 0x180(r1)
    stfs f0, 0x16c(r1)
    stfs f0, 0x158(r1)
    lfs f1, 0x53c(r29)
    fcmpu cr0, f8, f1
    beq lbl_fn_802B0430_000001C8
    addi r3, r1, 0x68
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x68
    addi r5, r1, 0x38
    bl fn_805F89F0
    addi r3, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_802B0430_000001C8:
    lfs f0, lbl_80883F40
    lfs f1, 0x538(r29)
    fcmpu cr0, f0, f1
    beq lbl_fn_802B0430_00000228
    addi r3, r1, 0xc8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0xc8
    addi r5, r1, 0x98
    bl fn_805F89F0
    addi r3, r1, 0x98
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_802B0430_00000228:
    lfs f0, lbl_80883F40
    lfs f1, 0x534(r29)
    fcmpu cr0, f0, f1
    beq lbl_fn_802B0430_00000288
    addi r3, r1, 0x128
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x128
    addi r5, r1, 0xf8
    bl fn_805F89F0
    addi r3, r1, 0xf8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_802B0430_00000288:
    addi r4, r1, 0x20
    addi r3, r1, 0x158
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x20(r1)
    mr r3, r29
    lfs f0, 0x528(r29)
    lfs f10, 0x24(r1)
    fadds f0, f7, f0
    lfs f7, 0x30(r1)
    lfs f9, 0x28(r1)
    stfs f0, 0x20(r1)
    lfs f0, lbl_80883FD0
    lfs f8, 0x52c(r29)
    fadds f7, f7, f0
    lwz r28, lbl_8087EE98
    fadds f8, f10, f8
    stfs f8, 0x24(r1)
    fadds f0, f8, f0
    lfs f8, 0x530(r29)
    fadds f8, f9, f8
    stfs f7, 0x30(r1)
    stfs f8, 0x28(r1)
    stfs f0, 0x24(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r28
    addi r4, r1, 0x188
    addi r5, r1, 0x2c
    addi r6, r1, 0x20
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_802B0430_0000038C
    lfs f7, 0x1a0(r1)
    addi r3, r1, 0x8
    lfs f0, 0x530(r29)
    lfs f9, 0x19c(r1)
    fsubs f10, f7, f0
    lfs f8, 0x52c(r29)
    lfs f0, 0x528(r29)
    lfs f7, 0x198(r1)
    fsubs f8, f9, f8
    stfs f10, 0x10(r1)
    fsubs f0, f7, f0
    stfs f8, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9920
    xoris r0, r27, 0x8000
    stw r0, 0x1dc(r1)
    lis r3, lbl_80746288@ha
    lfd f7, lbl_80746288@l(r3)
    lfd f0, 0x1d8(r1)
    fsubs f0, f0, f7
    fcmpo cr0, f1, f0
    bge lbl_fn_802B0430_0000038C
    cmpwi r30, 0x0
    li r31, -0x1
    beq lbl_fn_802B0430_0000038C
    stw r0, 0x1e4(r1)
    lfd f0, 0x1e0(r1)
    fsubs f0, f0, f7
    fsubs f0, f1, f0
    stfs f0, 0x0(r30)
lbl_fn_802B0430_0000038C:
    addi r3, r1, 0x198
    lfs f2, 0x1a0(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r29, 0x1aa8
    psq_st f1, 0x0(r4), 0, 0
    mr r3, r31
    stfs f2, 0x1ab0(r29)
lbl_fn_802B0430_000003A8:
    addi r11, r1, 0x210
    bl _restgpr_27
    lwz r0, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_802B07F0(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    lfs f1, lbl_80883F4C
    stw r0, 0x1d4(r1)
    lfs f2, lbl_80883FE4
    stfd f31, 0x1c0(r1)
    lfs f3, lbl_80883F40
    psq_st f31, 0x1c8(r1), 0, 0
    stfd f30, 0x1b0(r1)
    psq_st f30, 0x1b8(r1), 0, 0
    stw r31, 0x1ac(r1)
    mr r31, r4
    addi r4, r3, 0x1500
    stw r30, 0x1a8(r1)
    mr r30, r3
    stw r29, 0x1a4(r1)
    lwz r29, 0x150c(r3)
    bl fn_802B12D8
    cmpwi r3, 0x0
    beq lbl_fn_802B07F0_00000478
    lfs f7, 0x1508(r30)
    li r0, -0x1
    lfs f9, 0x530(r30)
    addi r4, r1, 0x2c
    lfs f0, 0x1504(r30)
    addi r3, r1, 0x38
    fsubs f10, f7, f9
    lfs f8, 0x52c(r30)
    lfs f7, 0x1500(r30)
    fsubs f11, f0, f8
    lfs f0, 0x528(r30)
    fsubs f2, f9, f10
    fsubs f7, f7, f0
    stw r0, 0x150c(r30)
    fsubs f8, f8, f11
    stfs f7, 0x20(r1)
    fsubs f0, f0, f7
    stfs f8, 0x30(r1)
    stfs f0, 0x2c(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f11, 0x24(r1)
    stfs f10, 0x28(r1)
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x40(r1)
    b lbl_fn_802B07F0_00000498
lbl_fn_802B07F0_00000478:
    addi r4, r30, 0x1500
    li r0, 0x1
    stw r0, 0x150c(r30)
    addi r3, r1, 0x38
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x1508(r30)
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_802B07F0_00000498:
    lfs f1, lbl_80883F4C
    mr r3, r30
    lfs f2, lbl_80883FD0
    addi r4, r1, 0x38
    lfs f3, lbl_80883F40
    bl fn_802B12D8
    cmpwi r3, 0x0
    beq lbl_fn_802B07F0_000004C0
    li r0, 0x0
    stw r0, 0x150c(r30)
lbl_fn_802B07F0_000004C0:
    lwz r0, 0x150c(r30)
    cmpw r0, r29
    beq lbl_fn_802B07F0_0000064C
    cmpwi r0, 0x0
    beq lbl_fn_802B07F0_000004E8
    cmpwi r0, 0x1
    beq lbl_fn_802B07F0_00000560
    cmpwi r0, -0x1
    beq lbl_fn_802B07F0_000005D8
    b lbl_fn_802B07F0_0000064C
lbl_fn_802B07F0_000004E8:
    lfs f8, lbl_80883F68
    lfs f7, 0x1524(r30)
    lfs f0, lbl_80883F64
    fmuls f8, f8, f7
    lfs f2, lbl_80883F40
    fabs f9, f8
    frsp f9, f9
    fcmpo cr0, f9, f0
    bge lbl_fn_802B07F0_00000510
    fmr f8, f7
lbl_fn_802B07F0_00000510:
    fabs f7, f2
    lfs f0, lbl_80883F64
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_802B07F0_00000528
    lfs f2, 0x1528(r30)
lbl_fn_802B07F0_00000528:
    lfs f0, lbl_80883F4C
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883F40
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x1c7
    li r6, 0x1
    li r7, 0x0
    stfs f8, 0x2e8(r30)
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802B07F0_0000064C
lbl_fn_802B07F0_00000560:
    lfs f8, lbl_80883F68
    lfs f7, 0x1524(r30)
    lfs f0, lbl_80883F64
    fmuls f8, f8, f7
    lfs f2, lbl_80883F40
    fabs f9, f8
    frsp f9, f9
    fcmpo cr0, f9, f0
    bge lbl_fn_802B07F0_00000588
    fmr f8, f7
lbl_fn_802B07F0_00000588:
    fabs f7, f2
    lfs f0, lbl_80883F64
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_802B07F0_000005A0
    lfs f2, 0x1528(r30)
lbl_fn_802B07F0_000005A0:
    lfs f0, lbl_80883F4C
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883F40
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x14
    li r6, 0x1
    li r7, 0x0
    stfs f8, 0x2e8(r30)
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802B07F0_0000064C
lbl_fn_802B07F0_000005D8:
    lfs f8, lbl_80883F68
    lfs f7, 0x1524(r30)
    lfs f0, lbl_80883F64
    fmuls f8, f8, f7
    lfs f2, lbl_80883F40
    fabs f9, f8
    frsp f9, f9
    fcmpo cr0, f9, f0
    bge lbl_fn_802B07F0_00000600
    fmr f8, f7
lbl_fn_802B07F0_00000600:
    fabs f7, f2
    lfs f0, lbl_80883F64
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_802B07F0_00000618
    lfs f2, 0x1528(r30)
lbl_fn_802B07F0_00000618:
    lfs f0, lbl_80883F4C
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883F40
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x1c7
    li r6, 0x1
    li r7, 0x0
    stfs f8, 0x2e8(r30)
    li r8, 0x1
    bl fn_80097C08
lbl_fn_802B07F0_0000064C:
    lwz r0, 0x150c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_802B07F0_000006A4
    lis r3, 0x8889
    lwz r4, 0x14c0(r30)
    subi r0, r3, 0x7777
    mulhw r0, r0, r4
    add r0, r0, r4
    srawi r0, r0, 3
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0xf
    subf r0, r0, r4
    cmpwi r0, 0xa
    blt lbl_fn_802B07F0_000008CC
    lfs f1, lbl_80883F34
    mr r3, r30
    lfs f2, lbl_80883F74
    addi r4, r1, 0x38
    lfs f3, lbl_80883F6C
    bl fn_802B12D8
    b lbl_fn_802B07F0_000008CC
lbl_fn_802B07F0_000006A4:
    lfs f1, lbl_80883F4C
    mr r3, r30
    lfs f2, lbl_80883F3C
    addi r4, r1, 0x38
    lfs f3, lbl_80883F74
    bl fn_802B12D8
    lfs f1, lbl_80883F4C
    lis r0, 0x4330
    lis r3, lbl_80746288@ha
    lwz r4, 0x150c(r30)
    fabs f0, f1
    stw r0, 0x198(r1)
    xoris r0, r4, 0x8000
    lfd f8, lbl_80746288@l(r3)
    stw r0, 0x19c(r1)
    frsp f9, f0
    lfd f7, 0x198(r1)
    lfs f0, lbl_80883F64
    fsubs f31, f7, f8
    lfs f30, lbl_80883F40
    fcmpo cr0, f9, f0
    bge lbl_fn_802B07F0_00000708
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
lbl_fn_802B07F0_00000708:
    fabs f7, f30
    lfs f0, lbl_80883F64
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_802B07F0_00000720
    lfs f30, 0x2e8(r30)
lbl_fn_802B07F0_00000720:
    fdivs f8, f31, f1
    lfs f7, lbl_80883F40
    lfs f0, lbl_80883F4C
    addi r29, r1, 0x48
    stfs f7, 0x8(r1)
    stfs f7, 0xc(r1)
    fmuls f8, f30, f8
    stfs f7, 0x74(r1)
    stfs f8, 0x10(r1)
    stfs f7, 0x6c(r1)
    stfs f7, 0x68(r1)
    stfs f7, 0x64(r1)
    stfs f7, 0x60(r1)
    stfs f7, 0x58(r1)
    stfs f7, 0x54(r1)
    stfs f7, 0x50(r1)
    stfs f7, 0x4c(r1)
    stfs f0, 0x70(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x48(r1)
    lfs f1, 0x53c(r30)
    fcmpu cr0, f7, f1
    beq lbl_fn_802B07F0_000007CC
    addi r3, r1, 0x138
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x138
    addi r5, r1, 0x168
    bl fn_805F89F0
    addi r3, r1, 0x168
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
lbl_fn_802B07F0_000007CC:
    lfs f0, lbl_80883F40
    lfs f1, 0x538(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_802B07F0_0000082C
    addi r3, r1, 0xd8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0xd8
    addi r5, r1, 0x108
    bl fn_805F89F0
    addi r3, r1, 0x108
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
lbl_fn_802B07F0_0000082C:
    lfs f0, lbl_80883F40
    lfs f1, 0x534(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_802B07F0_0000088C
    addi r3, r1, 0x78
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x78
    addi r5, r1, 0xa8
    bl fn_805F89F0
    addi r3, r1, 0xa8
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
lbl_fn_802B07F0_0000088C:
    addi r4, r1, 0x8
    addi r3, r1, 0x48
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x528(r30)
    lfs f0, 0x8(r1)
    lfs f8, 0x52c(r30)
    fadds f0, f7, f0
    lfs f7, 0x530(r30)
    stfs f0, 0x528(r30)
    lfs f0, 0xc(r1)
    fadds f0, f8, f0
    stfs f0, 0x52c(r30)
    lfs f0, 0x10(r1)
    fadds f0, f7, f0
    stfs f0, 0x530(r30)
lbl_fn_802B07F0_000008CC:
    lfs f7, 0x40(r1)
    addi r3, r1, 0x14
    lfs f0, 0x530(r30)
    lfs f9, 0x3c(r1)
    fsubs f10, f7, f0
    lfs f8, 0x52c(r30)
    lfs f0, 0x528(r30)
    lfs f7, 0x38(r1)
    fsubs f8, f9, f8
    stfs f10, 0x1c(r1)
    fsubs f0, f7, f0
    stfs f8, 0x18(r1)
    stfs f0, 0x14(r1)
    bl fn_805F9920
    mullw r4, r31, r31
    lis r0, 0x4330
    stw r0, 0x198(r1)
    lis r3, lbl_80746288@ha
    lfd f7, lbl_80746288@l(r3)
    xoris r0, r4, 0x8000
    stw r0, 0x19c(r1)
    lfd f0, 0x198(r1)
    fsubs f0, f0, f7
    fcmpo cr0, f1, f0
    mfcr r3
    psq_l f31, 0x1c8(r1), 0, 0
    lfd f31, 0x1c0(r1)
    srwi r3, r3, 31
    psq_l f30, 0x1b8(r1), 0, 0
    lfd f30, 0x1b0(r1)
    lwz r31, 0x1ac(r1)
    lwz r30, 0x1a8(r1)
    lwz r29, 0x1a4(r1)
    lwz r0, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}

asm void fn_802B0D90(void)
{
    nofralloc
    stwu r1, -0x1f0(r1)
    mflr r0
    stw r0, 0x1f4(r1)
    addi r11, r1, 0x170
    stfd f31, 0x1e0(r1)
    psq_st f31, 0x1e8(r1), 0, 0
    stfd f30, 0x1d0(r1)
    psq_st f30, 0x1d8(r1), 0, 0
    stfd f29, 0x1c0(r1)
    psq_st f29, 0x1c8(r1), 0, 0
    stfd f28, 0x1b0(r1)
    psq_st f28, 0x1b8(r1), 0, 0
    stfd f27, 0x1a0(r1)
    psq_st f27, 0x1a8(r1), 0, 0
    stfd f26, 0x190(r1)
    psq_st f26, 0x198(r1), 0, 0
    stfd f25, 0x180(r1)
    psq_st f25, 0x188(r1), 0, 0
    stfd f24, 0x170(r1)
    psq_st f24, 0x178(r1), 0, 0
    bl _savegpr_22
    lis r5, lbl_80746288@ha
    lfs f29, lbl_80883F78
    lfd f30, lbl_80746288@l(r5)
    mr r30, r3
    lfs f31, lbl_80883FE8
    mr r31, r4
    lfs f24, lbl_80883FEC
    addi r25, r1, 0x80
    lfs f25, lbl_80883FF0
    addi r24, r1, 0x8c
    lfs f26, lbl_80883F40
    li r23, 0x0
    lfs f27, lbl_80883FE0
    li r22, 0x0
    lfs f28, lbl_80883FAC
    li r29, 0x0
    lis r26, 0x4330
    lis r27, lbl_80746290@ha
    lis r28, 0xff01
lbl_fn_802B0D90_00000A00:
    mr r4, r30
    addi r3, r1, 0x98
    addi r5, r30, 0x528
    bl fn_80176548
    lfs f6, 0xa4(r1)
    xoris r0, r22, 0x8000
    lfs f5, 0x53c(r30)
    lfs f4, 0x538(r30)
    fmuls f3, f6, f29
    lfs f0, 0x534(r30)
    fmuls f7, f5, f6
    fmuls f8, f4, f6
    lfs f4, 0x9c(r1)
    fmuls f9, f0, f6
    lfs f6, 0x98(r1)
    fadds f5, f4, f8
    lfs f0, 0xa0(r1)
    fadds f6, f6, f9
    stw r0, 0x13c(r1)
    fadds f4, f0, f7
    lfd f2, lbl_80746290@l(r27)
    stw r26, 0x138(r1)
    lfd f0, 0x138(r1)
    stfs f6, 0x98(r1)
    fsubs f0, f0, f30
    stfs f5, 0x9c(r1)
    stfs f4, 0xa0(r1)
    fmuls f0, f31, f0
    stfs f3, 0xa4(r1)
    lfs f1, 0x538(r30)
    stfs f9, 0x68(r1)
    fmadds f1, f29, f0, f1
    stfs f8, 0x6c(r1)
    stfs f7, 0x70(r1)
    bl fn_8068AEA8
    frsp f0, f1
    fcmpo cr0, f0, f31
    ble lbl_fn_802B0D90_00000A9C
    fsubs f0, f0, f24
lbl_fn_802B0D90_00000A9C:
    fcmpo cr0, f0, f25
    bge lbl_fn_802B0D90_00000AA8
    fadds f0, f0, f24
lbl_fn_802B0D90_00000AA8:
    stfs f26, 0x74(r1)
    addi r3, r1, 0xd8
    li r4, 0x79
    stfs f26, 0x78(r1)
    stfs f27, 0x7c(r1)
    lfs f2, 0x530(r30)
    psq_l f1, 0x528(r30), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    fmr f1, f0
    lfs f0, 0x84(r1)
    stfs f2, 0x88(r1)
    fadds f0, f0, f28
    stfs f0, 0x84(r1)
    bl fn_805F8E70
    addi r4, r1, 0x74
    addi r3, r1, 0xd8
    mr r5, r4
    bl fn_805F93C0
    lwz r3, lbl_8087EE98
    mr r5, r25
    lfs f1, 0xa4(r1)
    addi r4, r1, 0x8c
    addi r6, r1, 0x74
    lis r7, 0x8000
    li r8, 0x0
    li r9, 0x0
    bl fn_8004D314
    cmpwi r3, 0x0
    beq lbl_fn_802B0D90_00000BB8
    addi r3, r1, 0x108
    psq_l f1, 0x0(r24), 0, 0
    add r3, r3, r29
    lfs f2, 0x94(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    lwz r0, 0x1aa0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_802B0D90_00000BA8
    addi r4, r1, 0x108
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80883FAC
    add r4, r4, r29
    lfs f2, lbl_80883F40
    subi r5, r28, 0x1
    bl fn_80063D3C
    lfs f3, 0x88(r1)
    mr r4, r25
    lfs f0, 0x7c(r1)
    addi r5, r1, 0x5c
    lfs f5, 0x84(r1)
    subi r6, r28, 0x1
    fadds f6, f3, f0
    lfs f4, 0x78(r1)
    lfs f3, 0x80(r1)
    lfs f0, 0x74(r1)
    fadds f4, f5, f4
    stfs f6, 0x64(r1)
    fadds f0, f3, f0
    lwz r3, lbl_8087EEB0
    stfs f4, 0x60(r1)
    lfs f1, lbl_80883F74
    stfs f0, 0x5c(r1)
    lfs f2, lbl_80883FF4
    bl fn_800638B0
lbl_fn_802B0D90_00000BA8:
    addi r22, r22, 0x1
    addi r29, r29, 0xc
    cmpwi r22, 0x4
    blt lbl_fn_802B0D90_00000A00
lbl_fn_802B0D90_00000BB8:
    cmpwi r22, 0x4
    bne lbl_fn_802B0D90_00000D84
    lfs f3, 0x108(r1)
    addi r3, r1, 0x50
    lfs f0, 0x120(r1)
    addi r24, r1, 0xc0
    lfs f5, 0x10c(r1)
    addi r4, r1, 0x38
    fadds f9, f3, f0
    lfs f4, 0x124(r1)
    lfs f3, 0x110(r1)
    addi r25, r1, 0xcc
    fadds f8, f5, f4
    lfs f0, 0x128(r1)
    fadds f7, f3, f0
    lfs f4, 0x118(r1)
    lfs f0, 0x130(r1)
    addi r5, r1, 0x20
    lfs f5, lbl_80883F78
    fadds f13, f4, f0
    fmuls f10, f7, f5
    lfs f3, 0x114(r1)
    lfs f0, 0x12c(r1)
    fmuls f11, f9, f5
    lfs f4, 0x11c(r1)
    fadds f24, f3, f0
    lfs f0, 0x134(r1)
    fmuls f6, f8, f5
    fmr f2, f10
    stfs f11, 0x50(r1)
    fadds f12, f4, f0
    fmuls f4, f13, f5
    stfs f6, 0x54(r1)
    fmuls f3, f24, f5
    psq_l f1, 0x0(r3), 0, 0
    fmuls f11, f12, f5
    psq_st f1, 0x0(r24), 0, 0
    lfs f0, lbl_80883F40
    addi r3, r30, 0x1ac4
    stfs f2, 0xc8(r1)
    fmr f2, f11
    lfs f6, 0xc4(r1)
    stfs f3, 0x38(r1)
    frsp f3, f2
    lfs f5, 0xc0(r1)
    stfs f4, 0x3c(r1)
    lfs f4, 0xc8(r1)
    psq_l f1, 0x0(r4), 0, 0
    fadds f25, f4, f3
    psq_st f1, 0x0(r25), 0, 0
    lfs f4, 0xd0(r1)
    lfs f3, 0xcc(r1)
    fadds f6, f6, f4
    stfs f2, 0xd4(r1)
    fadds f26, f5, f3
    lfs f4, 0x52c(r30)
    lfs f3, 0x528(r30)
    fsubs f27, f6, f4
    lfs f5, 0x530(r30)
    fsubs f3, f26, f3
    stfs f9, 0x44(r1)
    fsubs f4, f25, f5
    stfs f27, 0x24(r1)
    stfs f3, 0x20(r1)
    fmr f2, f4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
    frsp f2, f2
    stfs f0, 0x4(r31)
    psq_l f1, 0x0(r31), 0, 0
    lwz r0, 0x1aa0(r30)
    stfs f8, 0x48(r1)
    cmpwi r0, 0x0
    stfs f7, 0x4c(r1)
    stfs f10, 0x58(r1)
    stfs f24, 0x2c(r1)
    stfs f13, 0x30(r1)
    stfs f12, 0x34(r1)
    stfs f11, 0x40(r1)
    stfs f26, 0x14(r1)
    stfs f6, 0x18(r1)
    stfs f25, 0x1c(r1)
    stfs f4, 0x28(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1acc(r30)
    beq lbl_fn_802B0D90_00000D80
    fmr f2, f0
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80883F74
    mr r4, r24
    li r5, -0x100
    bl fn_80063D3C
    lwz r3, lbl_8087EEB0
    mr r4, r25
    lfs f1, lbl_80883F74
    li r5, -0x5600
    lfs f2, lbl_80883F40
    bl fn_80063D3C
    lis r29, 0xff01
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80883F74
    mr r4, r24
    lfs f2, lbl_80883FF4
    addi r5, r30, 0x1ac4
    subi r6, r29, 0x1
    bl fn_800638B0
    lwz r3, lbl_8087EEB0
    mr r4, r25
    lfs f1, lbl_80883F74
    addi r5, r30, 0x1ac4
    lfs f2, lbl_80883FF4
    subi r6, r29, 0x5501
    bl fn_800638B0
lbl_fn_802B0D90_00000D80:
    li r23, 0x1
lbl_fn_802B0D90_00000D84:
    lwz r0, 0x1aa0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_802B0D90_00000E38
    addi r3, r1, 0xa8
    psq_l f1, 0x528(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r5, r30, 0x1ac4
    lfs f2, 0x530(r30)
    addi r4, r1, 0xb4
    stfs f2, 0xb0(r1)
    addi r3, r1, 0x8
    lfs f5, lbl_80883F40
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    fsubs f6, f5, f5
    lfs f2, 0x1acc(r30)
    lfs f4, 0xb0(r1)
    lfs f3, 0xa8(r1)
    lfs f0, 0xb4(r1)
    fsubs f4, f4, f2
    stfs f2, 0xbc(r1)
    fsubs f0, f3, f0
    stfs f5, 0xb8(r1)
    stfs f5, 0xac(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0xc(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    lfs f0, lbl_80883F70
    fcmpo cr0, f1, f0
    bge lbl_fn_802B0D90_00000E20
    lis r5, 0xff00
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80883FAC
    addi r4, r30, 0x1ac4
    lfs f2, lbl_80883F40
    addi r5, r5, 0x44aa
    bl fn_80063D3C
    b lbl_fn_802B0D90_00000E38
lbl_fn_802B0D90_00000E20:
    lwz r3, lbl_8087EEB0
    addi r4, r30, 0x1ac4
    lfs f1, lbl_80883FAC
    lis r5, 0xffaa
    lfs f2, lbl_80883F40
    bl fn_80063D3C
lbl_fn_802B0D90_00000E38:
    psq_l f31, 0x1e8(r1), 0, 0
    mr r3, r23
    lfd f31, 0x1e0(r1)
    psq_l f30, 0x1d8(r1), 0, 0
    lfd f30, 0x1d0(r1)
    psq_l f29, 0x1c8(r1), 0, 0
    lfd f29, 0x1c0(r1)
    psq_l f28, 0x1b8(r1), 0, 0
    lfd f28, 0x1b0(r1)
    psq_l f27, 0x1a8(r1), 0, 0
    lfd f27, 0x1a0(r1)
    psq_l f26, 0x198(r1), 0, 0
    lfd f26, 0x190(r1)
    psq_l f25, 0x188(r1), 0, 0
    lfd f25, 0x180(r1)
    psq_l f24, 0x178(r1), 0, 0
    lfd f24, 0x170(r1)
    addi r11, r1, 0x170
    bl _restgpr_22
    lwz r0, 0x1f4(r1)
    mtlr r0
    addi r1, r1, 0x1f0
    blr
}

asm void fn_802B12C4(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_802B12CC(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_802B12D8(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x154(r1)
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    fmr f31, f1
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    fmr f30, f3
    stfd f29, 0x120(r1)
    psq_st f29, 0x128(r1), 0, 0
    fmr f29, f2
    stfd f28, 0x110(r1)
    psq_st f28, 0x118(r1), 0, 0
    stfd f27, 0x100(r1)
    psq_st f27, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    mr r30, r3
    bne lbl_fn_802B12D8_00000F10
    lwz r0, 0xd1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802B12D8_00000F10
    li r3, 0x0
    b lbl_fn_802B12D8_000012D4
lbl_fn_802B12D8_00000F10:
    cmpwi r4, 0x0
    beq lbl_fn_802B12D8_00000F60
    lfs f3, 0x8(r4)
    addi r6, r1, 0x68
    lfs f0, 0x530(r3)
    addi r5, r1, 0x74
    lfs f5, 0x4(r4)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x0(r4)
    lfs f0, 0x528(r3)
    fsubs f4, f5, f4
    stfs f2, 0x70(r1)
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x7c(r1)
    b lbl_fn_802B12D8_00000FA8
lbl_fn_802B12D8_00000F60:
    lwz r6, 0xd1c(r3)
    addi r5, r1, 0x5c
    lfs f0, 0x530(r3)
    addi r4, r1, 0x74
    lfs f3, 0x530(r6)
    lfs f5, 0x52c(r6)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x528(r6)
    lfs f0, 0x528(r3)
    fsubs f4, f5, f4
    stfs f2, 0x64(r1)
    fsubs f0, f3, f0
    stfs f4, 0x60(r1)
    stfs f0, 0x5c(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x7c(r1)
lbl_fn_802B12D8_00000FA8:
    addi r3, r1, 0x74
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80883F64
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_802B12D8_00000FD0
    addi r3, r1, 0x74
    mr r4, r3
    bl fn_805F98D0
lbl_fn_802B12D8_00000FD0:
    lfs f2, 0x7c(r1)
    addi r3, r1, 0x74
    lfs f0, lbl_80883F64
    addi r31, r1, 0x50
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802B12D8_00001020
    lfs f3, 0x50(r1)
    lfs f0, lbl_80883F40
    fcmpo cr0, f3, f0
    ble lbl_fn_802B12D8_00001014
    lfs f0, lbl_80883FF8
    b lbl_fn_802B12D8_00001018
lbl_fn_802B12D8_00001014:
    lfs f0, lbl_80883FFC
lbl_fn_802B12D8_00001018:
    stfs f0, 0x48(r1)
    b lbl_fn_802B12D8_00001034
lbl_fn_802B12D8_00001020:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802B12D8_00001034:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883F40
    addi r4, r1, 0x38
    lfs f27, 0x88(r1)
    mr r5, r4
    lfs f28, 0x84(r1)
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
    lfs f0, lbl_80883F4C
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f3, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f13, 0x8(r1)
    stfs f28, 0xc(r1)
    stfs f27, 0x10(r1)
    stfs f13, 0xb0(r1)
    stfs f28, 0xb4(r1)
    stfs f27, 0xb8(r1)
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
    lfs f0, lbl_80883F64
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802B12D8_00001150
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883F40
    fcmpo cr0, f3, f0
    ble lbl_fn_802B12D8_00001140
    lfs f0, lbl_80883FF8
    b lbl_fn_802B12D8_00001144
lbl_fn_802B12D8_00001140:
    lfs f0, lbl_80883FFC
lbl_fn_802B12D8_00001144:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802B12D8_00001164
lbl_fn_802B12D8_00001150:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802B12D8_00001164:
    addi r3, r1, 0x44
    lfs f2, lbl_80883F40
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f4, 0x538(r30)
    lfs f3, 0x54(r1)
    lfs f0, lbl_80883FE8
    fsubs f3, f3, f4
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    ble lbl_fn_802B12D8_000011A4
    lfs f0, lbl_80883FEC
    fsubs f0, f3, f0
    fmadds f27, f31, f0, f4
    b lbl_fn_802B12D8_000011C4
lbl_fn_802B12D8_000011A4:
    lfs f0, lbl_80883FF0
    fcmpo cr0, f3, f0
    bge lbl_fn_802B12D8_000011C0
    lfs f0, lbl_80883FEC
    fadds f0, f0, f3
    fmadds f27, f31, f0, f4
    b lbl_fn_802B12D8_000011C4
lbl_fn_802B12D8_000011C0:
    fmadds f27, f31, f3, f4
lbl_fn_802B12D8_000011C4:
    lfs f0, 0x538(r30)
    lis r3, lbl_80746290@ha
    lfd f2, lbl_80746290@l(r3)
    fsubs f1, f27, f0
    bl fn_8068AEA8
    frsp f31, f1
    lfs f0, lbl_80883FE8
    fcmpo cr0, f31, f0
    ble lbl_fn_802B12D8_000011F0
    lfs f0, lbl_80883FEC
    fsubs f31, f31, f0
lbl_fn_802B12D8_000011F0:
    lfs f0, lbl_80883FF0
    fcmpo cr0, f31, f0
    bge lbl_fn_802B12D8_00001204
    lfs f0, lbl_80883FEC
    fadds f31, f31, f0
lbl_fn_802B12D8_00001204:
    fabs f3, f30
    lfs f0, lbl_80883F64
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_802B12D8_000012AC
    lfs f0, lbl_80884000
    fmuls f3, f0, f31
    fabs f0, f3
    frsp f0, f0
    fcmpo cr0, f0, f30
    cror eq, gt, eq
    bne lbl_fn_802B12D8_00001278
    lfs f0, lbl_80883F40
    li r0, 0x1
    fcmpo cr0, f3, f0
    bge lbl_fn_802B12D8_00001248
    li r0, -0x1
lbl_fn_802B12D8_00001248:
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80746288@ha
    stw r3, 0xf4(r1)
    lfs f0, lbl_80884004
    stw r0, 0xf0(r1)
    fmuls f5, f0, f30
    lfd f4, lbl_80746288@l(r4)
    lfd f3, 0xf0(r1)
    lfs f0, 0x538(r30)
    fsubs f3, f3, f4
    fmadds f27, f3, f5, f0
lbl_fn_802B12D8_00001278:
    lis r3, lbl_80746290@ha
    frsp f1, f27
    stfs f27, 0x538(r30)
    lfd f2, lbl_80746290@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80883FE8
    fcmpo cr0, f3, f0
    ble lbl_fn_802B12D8_000012A4
    lfs f0, lbl_80883FEC
    fsubs f3, f3, f0
lbl_fn_802B12D8_000012A4:
    lfs f0, lbl_80883FF0
    fcmpo cr0, f3, f0
lbl_fn_802B12D8_000012AC:
    lfs f0, lbl_80884000
    fmuls f0, f0, f31
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f29
    cror eq, gt, eq
    bne lbl_fn_802B12D8_000012D0
    li r3, 0x1
    b lbl_fn_802B12D8_000012D4
lbl_fn_802B12D8_000012D0:
    li r3, 0x0
lbl_fn_802B12D8_000012D4:
    lwz r0, 0x154(r1)
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    psq_l f29, 0x128(r1), 0, 0
    lfd f29, 0x120(r1)
    psq_l f28, 0x118(r1), 0, 0
    lfd f28, 0x110(r1)
    psq_l f27, 0x108(r1), 0, 0
    lfd f27, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_802B1744(void)
{
    nofralloc
    fabs f3, f1
    lfs f0, lbl_80883F64
    fmr f4, f1
    mr r6, r5
    frsp f1, f3
    fcmpo cr0, f1, f0
    bge lbl_fn_802B1744_00001334
    lfs f4, 0x1524(r3)
lbl_fn_802B1744_00001334:
    fabs f1, f2
    lfs f0, lbl_80883F64
    frsp f1, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_802B1744_0000134C
    lfs f2, 0x1528(r3)
lbl_fn_802B1744_0000134C:
    lfs f0, lbl_80883F4C
    li r0, 0x1
    stw r0, 0x3fc(r3)
    mr r5, r4
    lfs f1, lbl_80883F40
    li r4, 0x0
    stfs f0, 0x2fc(r3)
    li r7, 0x0
    li r8, 0x1
    stfs f4, 0x2e8(r3)
    addi r3, r3, 0xb0
    b fn_80097C08
}

asm void fn_802B17AC(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    fabs f7, f2
    lfs f0, lbl_80883F64
    stw r0, 0x194(r1)
    stfd f31, 0x180(r1)
    frsp f7, f7
    psq_st f31, 0x188(r1), 0, 0
    fmr f31, f3
    fcmpo cr0, f7, f0
    stfd f30, 0x170(r1)
    psq_st f30, 0x178(r1), 0, 0
    fmr f30, f1
    stw r31, 0x16c(r1)
    stw r30, 0x168(r1)
    mr r30, r3
    bge lbl_fn_802B17AC_000013D0
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fmr f2, f1
lbl_fn_802B17AC_000013D0:
    fabs f7, f31
    lfs f0, lbl_80883F64
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_802B17AC_000013E8
    lfs f31, 0x2e8(r30)
lbl_fn_802B17AC_000013E8:
    fdivs f8, f30, f2
    lfs f7, lbl_80883F40
    lfs f0, lbl_80883F4C
    addi r31, r1, 0x138
    stfs f7, 0x8(r1)
    stfs f7, 0xc(r1)
    fmuls f8, f31, f8
    stfs f7, 0x164(r1)
    stfs f8, 0x10(r1)
    stfs f7, 0x15c(r1)
    stfs f7, 0x158(r1)
    stfs f7, 0x154(r1)
    stfs f7, 0x150(r1)
    stfs f7, 0x148(r1)
    stfs f7, 0x144(r1)
    stfs f7, 0x140(r1)
    stfs f7, 0x13c(r1)
    stfs f0, 0x160(r1)
    stfs f0, 0x14c(r1)
    stfs f0, 0x138(r1)
    lfs f1, 0x53c(r30)
    fcmpu cr0, f7, f1
    beq lbl_fn_802B17AC_00001494
    addi r3, r1, 0x48
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x48
    addi r5, r1, 0x18
    bl fn_805F89F0
    addi r3, r1, 0x18
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_802B17AC_00001494:
    lfs f0, lbl_80883F40
    lfs f1, 0x538(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_802B17AC_000014F4
    addi r3, r1, 0xa8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0xa8
    addi r5, r1, 0x78
    bl fn_805F89F0
    addi r3, r1, 0x78
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_802B17AC_000014F4:
    lfs f0, lbl_80883F40
    lfs f1, 0x534(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_802B17AC_00001554
    addi r3, r1, 0x108
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x108
    addi r5, r1, 0xd8
    bl fn_805F89F0
    addi r3, r1, 0xd8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_802B17AC_00001554:
    addi r4, r1, 0x8
    addi r3, r1, 0x138
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x528(r30)
    lfs f0, 0x8(r1)
    lfs f8, 0x52c(r30)
    fadds f0, f7, f0
    lfs f7, 0x530(r30)
    stfs f0, 0x528(r30)
    lfs f0, 0xc(r1)
    fadds f0, f8, f0
    stfs f0, 0x52c(r30)
    lfs f0, 0x10(r1)
    fadds f0, f7, f0
    stfs f0, 0x530(r30)
    psq_l f31, 0x188(r1), 0, 0
    lfd f31, 0x180(r1)
    psq_l f30, 0x178(r1), 0, 0
    lfd f30, 0x170(r1)
    lwz r31, 0x16c(r1)
    lwz r30, 0x168(r1)
    lwz r0, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_802B19EC(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    cmpwi r4, 0xc
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    beq lbl_fn_802B19EC_000015E4
    cmpwi r4, 0x2
    beq lbl_fn_802B19EC_00001654
    b lbl_fn_802B19EC_000016C4
lbl_fn_802B19EC_000015E4:
    li r4, 0x3e8
    bl fn_80232B7C
    lfs f0, lbl_80883F40
    li r3, -0x1
    lfs f1, lbl_80883F4C
    li r0, 0x1
    stfs f0, 0x44(r1)
    addi r4, r31, 0x1a54
    addi r5, r31, 0xb0
    addi r7, r1, 0x38
    stfs f0, 0x48(r1)
    addi r8, r1, 0x44
    addi r9, r1, 0x50
    li r6, 0x0
    stfs f0, 0x4c(r1)
    li r10, -0x1
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x5c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_802B19EC_000016C4
lbl_fn_802B19EC_00001654:
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883F40
    li r3, -0x1
    lfs f1, lbl_80883F4C
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r31, 0x1a78
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
lbl_fn_802B19EC_000016C4:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_802B1B08(void)
{
    nofralloc
    mr r5, r3
    li r6, 0x0
    b lbl_fn_802B1B08_00001710
lbl_fn_802B1B08_000016E4:
    cmpwi r4, 0x0
    beq lbl_fn_802B1B08_000016FC
    lwz r0, 0x156c(r5)
    ori r0, r0, 0x1
    stw r0, 0x156c(r5)
    b lbl_fn_802B1B08_00001708
lbl_fn_802B1B08_000016FC:
    lwz r0, 0x156c(r5)
    clrrwi r0, r0, 1
    stw r0, 0x156c(r5)
lbl_fn_802B1B08_00001708:
    addi r5, r5, 0x58
    addi r6, r6, 0x1
lbl_fn_802B1B08_00001710:
    lwz r0, 0x155c(r3)
    cmplw r6, r0
    blt lbl_fn_802B1B08_000016E4
    blr
}

asm void fn_802B1B50(void)
{
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    stw r0, 0x204(r1)
    addi r11, r1, 0x1d0
    stfd f31, 0x1f0(r1)
    psq_st f31, 0x1f8(r1), 0, 0
    stfd f30, 0x1e0(r1)
    psq_st f30, 0x1e8(r1), 0, 0
    stfd f29, 0x1d0(r1)
    psq_st f29, 0x1d8(r1), 0, 0
    bl _savegpr_24
    lwz r0, 0x1540(r3)
    mr r30, r3
    mr r24, r4
    cmpwi r0, 0x0
    beq lbl_fn_802B1B50_00001ACC
    lfs f7, lbl_80883F40
    addi r28, r1, 0x178
    lfs f0, lbl_80883F4C
    stfs f7, 0x1a4(r1)
    stfs f7, 0x19c(r1)
    stfs f7, 0x198(r1)
    stfs f7, 0x194(r1)
    stfs f7, 0x190(r1)
    stfs f7, 0x188(r1)
    stfs f7, 0x184(r1)
    stfs f7, 0x180(r1)
    stfs f7, 0x17c(r1)
    stfs f0, 0x1a0(r1)
    stfs f0, 0x18c(r1)
    stfs f0, 0x178(r1)
    lfs f1, 0x53c(r3)
    fcmpu cr0, f7, f1
    beq lbl_fn_802B1B50_000017F8
    addi r3, r1, 0x88
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x88
    addi r5, r1, 0x58
    bl fn_805F89F0
    addi r3, r1, 0x58
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_802B1B50_000017F8:
    lfs f0, lbl_80883F40
    lfs f1, 0x538(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_802B1B50_00001858
    addi r3, r1, 0xe8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r28
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
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_802B1B50_00001858:
    lfs f0, lbl_80883F40
    lfs f1, 0x534(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_802B1B50_000018B8
    addi r3, r1, 0x148
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r28
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
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_802B1B50_000018B8:
    cmpwi r24, 0x0
    beq lbl_fn_802B1B50_00001ACC
    lis r3, lbl_807462A8@ha
    lfs f1, lbl_80883F4C
    addi r28, r3, lbl_807462A8@l
    addi r5, r30, 0x528
    addi r3, r1, 0x8
    li r6, 0x0
    addi r4, r28, 0x1bc
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F8A0
    addi r26, r1, 0x18
    lfs f29, lbl_80883F40
    addi r27, r1, 0x24
    lwz r31, 0x48(r3)
    li r29, 0x0
    lfs f30, lbl_80883F4C
    lfs f31, lbl_80883F68
    b lbl_fn_802B1B50_00001AC4
lbl_fn_802B1B50_00001914:
    lwz r6, 0x38(r31)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_802B1B50_00001940
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_802B1B50_00001940
    li r5, 0x1
lbl_fn_802B1B50_00001940:
    cmpwi r5, 0x0
    beq lbl_fn_802B1B50_0000195C
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802B1B50_0000195C
    li r3, 0x1
lbl_fn_802B1B50_0000195C:
    cmpwi r3, 0x0
    beq lbl_fn_802B1B50_00001990
    lwz r0, 0x55c(r31)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802B1B50_00001984
    lwz r0, 0x560(r31)
    cmpwi r0, 0x1c
    bne lbl_fn_802B1B50_00001984
    li r3, 0x1
lbl_fn_802B1B50_00001984:
    cmpwi r3, 0x0
    bne lbl_fn_802B1B50_00001990
    li r4, 0x1
lbl_fn_802B1B50_00001990:
    cmpwi r4, 0x0
    beq lbl_fn_802B1B50_00001AC0
    addi r25, r31, 0xb0
    addi r4, r28, 0x1b7
    mr r3, r25
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B1B50_000019BC
    li r3, 0x0
    b lbl_fn_802B1B50_000019C8
lbl_fn_802B1B50_000019BC:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r25)
    add r3, r3, r0
lbl_fn_802B1B50_000019C8:
    lfs f0, 0x2c(r3)
    lfs f7, 0x1c(r3)
    lfs f8, 0xc(r3)
    stfs f8, 0x30(r1)
    lwz r3, lbl_8087F048
    stfs f7, 0x34(r1)
    stfs f0, 0x38(r1)
    bl fn_801010A0
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_802B1B50_00001AC0
    addi r24, r30, 0xb0
    addi r4, r28, 0x1b7
    mr r3, r24
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B1B50_00001A18
    li r5, 0x0
    b lbl_fn_802B1B50_00001A24
lbl_fn_802B1B50_00001A18:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r24)
    add r5, r3, r0
lbl_fn_802B1B50_00001A24:
    lfs f10, 0x2c(r5)
    mr r3, r26
    lfs f0, 0x38(r1)
    mr r4, r26
    lfs f9, 0x1c(r5)
    lfs f8, 0xc(r5)
    fsubs f2, f0, f10
    lfs f7, 0x34(r1)
    lfs f0, 0x30(r1)
    fsubs f7, f7, f9
    stfs f8, 0xc(r1)
    fsubs f0, f0, f8
    stfs f7, 0x28(r1)
    stfs f0, 0x24(r1)
    psq_l f1, 0x0(r27), 0, 0
    stfs f9, 0x10(r1)
    stfs f10, 0x14(r1)
    stfs f2, 0x2c(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x20(r1)
    bl fn_805F98D0
    addi r0, r30, 0x1a6c
    stw r29, 0x4c(r1)
    lfs f1, lbl_80884008
    mr r3, r25
    stfs f29, 0x50(r1)
    mr r6, r26
    mr r7, r30
    addi r4, r1, 0x3c
    stfs f30, 0x54(r1)
    addi r5, r1, 0xc
    li r8, -0x1
    li r9, 0x0
    stfs f31, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r29, 0x44(r1)
    lwz r0, 0x1540(r30)
    stw r0, 0x48(r1)
    bl fn_8010EE78
lbl_fn_802B1B50_00001AC0:
    lwz r31, 0x14ac(r31)
lbl_fn_802B1B50_00001AC4:
    cmpwi r31, 0x0
    bne lbl_fn_802B1B50_00001914
lbl_fn_802B1B50_00001ACC:
    addi r11, r1, 0x1d0
    psq_l f31, 0x1f8(r1), 0, 0
    lfd f31, 0x1f0(r1)
    psq_l f30, 0x1e8(r1), 0, 0
    lfd f30, 0x1e0(r1)
    psq_l f29, 0x1d8(r1), 0, 0
    lfd f29, 0x1d0(r1)
    bl _restgpr_24
    lwz r0, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}
