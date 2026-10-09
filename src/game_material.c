#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_22(void);
extern void _restgpr_27(void);
extern void _savegpr_21(void);
extern void _savegpr_22(void);
extern void _savegpr_27(void);
extern void fn_8004B338(void);
extern void fn_8004B378(void);
extern void fn_8005DF90(void);
extern void fn_80063764(void);
extern void fn_800638B0(void);
extern void fn_8006FAB0(void);
extern void fn_8006FDD8(void);
extern void fn_8006FE08(void);
extern void fn_80070C98(void);
extern void fn_80071D74(void);
extern void fn_80071E04(void);
extern void fn_80075DEC(void);
extern void fn_80076760(void);
extern void fn_800A96AC(void);
extern void fn_800B6C70(void);
extern void fn_800BDB58(void);
extern void fn_800C1424(void);
extern void fn_800D5E18(void);
extern void fn_805F89F0(void);
extern void fn_805F9240(void);
extern void fn_805F93C0(void);
extern void fn_805F9420(void);
extern void fn_805F98D0(void);
extern void fn_805F9990(void);
extern void fn_80614190(void);
extern void fn_80614CC0(void);
extern void fn_80614D30(void);
extern void fn_80615190(void);
extern void fn_80615560(void);
extern void fn_80615FF0(void);
extern void fn_80616250(void);
extern void fn_80617DA0(void);
extern void fn_80618570(void);

/* External data declarations */
extern u8 lbl_80732ED0[];
extern u8 lbl_80732ED8[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF8C;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB0;
extern u32 lbl_8087EFB4;
extern u32 lbl_80880F78;
extern u32 lbl_80880F7C;
extern u32 lbl_80880F80;
extern u32 lbl_80880F84;
extern u32 lbl_80880F88;
extern u32 lbl_80880F8C;
extern u32 lbl_80880F90;
extern u32 lbl_80880F94;
extern u32 lbl_80880F98;
extern u32 lbl_80880F9C;
extern u32 lbl_80880FA0;
extern u32 lbl_80880FA4;
extern u32 lbl_80880FA8;
extern u32 lbl_80880FAC;
extern u32 lbl_80880FB0;

/* Function declarations */
void fn_800B7090(void);
void fn_800B79E4(void);
void fn_800B8964(void);
void fn_800B8F40(void);

asm void fn_800B7090(void)
{
    nofralloc
    stwu r1, -0x250(r1)
    mflr r0
    stw r0, 0x254(r1)
    addi r11, r1, 0x210
    stfd f31, 0x240(r1)
    psq_st f31, 0x248(r1), 0, 0
    stfd f30, 0x230(r1)
    psq_st f30, 0x238(r1), 0, 0
    stfd f29, 0x220(r1)
    psq_st f29, 0x228(r1), 0, 0
    stfd f28, 0x210(r1)
    psq_st f28, 0x218(r1), 0, 0
    bl _savegpr_21
    lfs f13, 0x14(r5)
    mr r23, r5
    lfs f12, 0x8(r5)
    mr r22, r3
    lfs f11, 0x10(r5)
    mr r21, r6
    fadds f13, f13, f12
    lfs f10, 0x4(r5)
    lfs f12, 0xc(r5)
    mr r3, r23
    fadds f31, f11, f10
    lfs f11, 0x0(r5)
    fadds f11, f12, f11
    lfs f29, lbl_80880F78
    lfs f10, lbl_80880F7C
    addi r4, r1, 0x8
    fmuls f30, f13, f29
    stfs f31, 0xe8(r1)
    fmuls f12, f31, f29
    stfs f11, 0xe4(r1)
    fmuls f31, f11, f29
    addi r5, r1, 0x120
    stfs f13, 0xec(r1)
    stfs f31, 0x120(r1)
    stfs f12, 0x124(r1)
    stfs f30, 0x128(r1)
    stfs f10, 0x8(r1)
    bl fn_8006FAB0
    lwz r4, lbl_8087EFB4
    lwz r0, 0x104(r4)
    stw r0, 0x0(r22)
    lwz r0, 0x108(r4)
    stw r0, 0x4(r22)
    psq_l f1, 0x10c(r4), 0, 0
    lfs f2, 0x114(r4)
    stfs f2, 0x10(r22)
    psq_st f1, 0x8(r22), 0, 0
    psq_l f1, 0x118(r4), 0, 0
    lfs f2, 0x120(r4)
    stfs f2, 0x1c(r22)
    psq_st f1, 0x14(r22), 0, 0
    psq_l f1, 0x124(r4), 0, 0
    lfs f2, 0x12c(r4)
    stfs f2, 0x28(r22)
    psq_st f1, 0x20(r22), 0, 0
    psq_l f1, 0x130(r4), 0, 0
    lfs f2, 0x138(r4)
    stfs f2, 0x34(r22)
    psq_st f1, 0x2c(r22), 0, 0
    lfs f10, 0x13c(r4)
    stfs f10, 0x38(r22)
    lfs f10, 0x140(r4)
    stfs f10, 0x3c(r22)
    lfs f10, 0x144(r4)
    stfs f10, 0x40(r22)
    lfs f10, 0x148(r4)
    stfs f10, 0x44(r22)
    lfs f10, 0x14c(r4)
    stfs f10, 0x48(r22)
    lfs f10, 0x150(r4)
    stfs f10, 0x4c(r22)
    lfs f10, 0x154(r4)
    stfs f10, 0x50(r22)
    lfs f10, 0x158(r4)
    stfs f10, 0x54(r22)
    psq_l f1, 0x15c(r4), 0, 0
    psq_l f2, 0x164(r4), 0, 0
    psq_l f3, 0x16c(r4), 0, 0
    psq_l f4, 0x174(r4), 0, 0
    psq_l f5, 0x17c(r4), 0, 0
    psq_l f6, 0x184(r4), 0, 0
    psq_st f6, 0x80(r22), 0, 0
    psq_st f1, 0x58(r22), 0, 0
    psq_st f2, 0x60(r22), 0, 0
    psq_st f3, 0x68(r22), 0, 0
    psq_st f4, 0x70(r22), 0, 0
    psq_st f5, 0x78(r22), 0, 0
    psq_l f1, 0x18c(r4), 0, 0
    psq_l f2, 0x194(r4), 0, 0
    psq_l f3, 0x19c(r4), 0, 0
    psq_l f4, 0x1a4(r4), 0, 0
    psq_l f5, 0x1ac(r4), 0, 0
    psq_l f6, 0x1b4(r4), 0, 0
    psq_l f7, 0x1bc(r4), 0, 0
    psq_l f8, 0x1c4(r4), 0, 0
    psq_st f8, 0xc0(r22), 0, 0
    psq_st f1, 0x88(r22), 0, 0
    psq_st f2, 0x90(r22), 0, 0
    psq_st f3, 0x98(r22), 0, 0
    psq_st f4, 0xa0(r22), 0, 0
    psq_st f5, 0xa8(r22), 0, 0
    psq_st f6, 0xb0(r22), 0, 0
    psq_st f7, 0xb8(r22), 0, 0
    lfs f10, 0x1cc(r4)
    addi r5, r22, 0x194
    stfs f10, 0xc8(r22)
    addi r6, r4, 0x298
    addi r0, r22, 0x1f4
    lfs f10, 0x1d0(r4)
    stfs f10, 0xcc(r22)
    psq_l f1, 0x1d4(r4), 0, 0
    psq_l f2, 0x1dc(r4), 0, 0
    psq_l f3, 0x1e4(r4), 0, 0
    psq_l f4, 0x1ec(r4), 0, 0
    psq_l f5, 0x1f4(r4), 0, 0
    psq_l f6, 0x1fc(r4), 0, 0
    psq_st f6, 0xf8(r22), 0, 0
    psq_st f1, 0xd0(r22), 0, 0
    psq_st f2, 0xd8(r22), 0, 0
    psq_st f3, 0xe0(r22), 0, 0
    psq_st f4, 0xe8(r22), 0, 0
    psq_st f5, 0xf0(r22), 0, 0
    psq_l f1, 0x204(r4), 0, 0
    psq_l f2, 0x20c(r4), 0, 0
    psq_l f3, 0x214(r4), 0, 0
    psq_l f4, 0x21c(r4), 0, 0
    psq_l f5, 0x224(r4), 0, 0
    psq_l f6, 0x22c(r4), 0, 0
    psq_st f6, 0x128(r22), 0, 0
    psq_st f1, 0x100(r22), 0, 0
    psq_st f2, 0x108(r22), 0, 0
    psq_st f3, 0x110(r22), 0, 0
    psq_st f4, 0x118(r22), 0, 0
    psq_st f5, 0x120(r22), 0, 0
    lwz r3, 0x234(r4)
    stw r3, 0x130(r22)
    lfs f10, 0x238(r4)
    stfs f10, 0x134(r22)
    lfs f10, 0x23c(r4)
    stfs f10, 0x138(r22)
    psq_l f1, 0x240(r4), 0, 0
    lfs f2, 0x248(r4)
    stfs f2, 0x144(r22)
    psq_st f1, 0x13c(r22), 0, 0
    lfs f10, 0x24c(r4)
    stfs f10, 0x148(r22)
    psq_l f1, 0x250(r4), 0, 0
    lfs f2, 0x258(r4)
    stfs f2, 0x154(r22)
    psq_st f1, 0x14c(r22), 0, 0
    lfs f10, 0x25c(r4)
    stfs f10, 0x158(r22)
    psq_l f1, 0x260(r4), 0, 0
    lfs f2, 0x268(r4)
    stfs f2, 0x164(r22)
    psq_st f1, 0x15c(r22), 0, 0
    lfs f10, 0x26c(r4)
    stfs f10, 0x168(r22)
    psq_l f1, 0x270(r4), 0, 0
    lfs f2, 0x278(r4)
    stfs f2, 0x174(r22)
    psq_st f1, 0x16c(r22), 0, 0
    lfs f10, 0x27c(r4)
    stfs f10, 0x178(r22)
    psq_l f1, 0x280(r4), 0, 0
    lfs f2, 0x288(r4)
    stfs f2, 0x184(r22)
    psq_st f1, 0x17c(r22), 0, 0
    psq_l f1, 0x28c(r4), 0, 0
    lfs f2, 0x294(r4)
    stfs f2, 0x190(r22)
    psq_st f1, 0x188(r22), 0, 0
lbl_fn_800B7090_000002BC:
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
    lfs f10, 0xc(r6)
    addi r6, r6, 0x10
    stfs f10, 0xc(r5)
    addi r5, r5, 0x10
    cmplw r5, r0
    blt lbl_fn_800B7090_000002BC
    li r0, 0x1
    stw r0, 0x4(r22)
    addi r6, r1, 0x120
    lfs f11, lbl_80880F80
    lfs f10, 0x8(r1)
    addi r5, r1, 0x108
    lfs f13, 0x8(r21)
    mr r3, r21
    fmuls f29, f11, f10
    lfs f12, 0x4(r21)
    lfs f10, 0x0(r21)
    addi r4, r1, 0xcc
    lfs f11, lbl_80880F7C
    fmuls f28, f13, f29
    fmuls f30, f12, f29
    lfs f31, 0x128(r1)
    fmuls f29, f10, f29
    lfs f13, 0x124(r1)
    lfs f12, 0x120(r1)
    lfs f10, lbl_80880F84
    fadds f31, f31, f28
    psq_l f1, 0x0(r6), 0, 0
    fadds f13, f13, f30
    lfs f2, 0x128(r1)
    fadds f12, f12, f29
    stfs f29, 0xd8(r1)
    stfs f30, 0xdc(r1)
    stfs f28, 0xe0(r1)
    stfs f12, 0x114(r1)
    stfs f13, 0x118(r1)
    stfs f31, 0x11c(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x110(r1)
    stfs f11, 0xfc(r1)
    stfs f10, 0x100(r1)
    stfs f11, 0x104(r1)
    stfs f11, 0xcc(r1)
    stfs f10, 0xd0(r1)
    stfs f11, 0xd4(r1)
    bl fn_805F9990
    fabs f11, f1
    lfs f10, lbl_80880F88
    frsp f11, f11
    fcmpo cr0, f11, f10
    ble lbl_fn_800B7090_00000410
    lfs f10, lbl_80880F7C
    addi r5, r1, 0xc0
    stfs f10, 0xc0(r1)
    addi r24, r1, 0xfc
    lfs f2, lbl_80880F84
    mr r3, r21
    stfs f10, 0xc4(r1)
    addi r4, r1, 0xb4
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0xc8(r1)
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x104(r1)
    stfs f10, 0xb4(r1)
    stfs f10, 0xb8(r1)
    stfs f2, 0xbc(r1)
    bl fn_805F9990
    fabs f11, f1
    lfs f10, lbl_80880F88
    frsp f11, f11
    fcmpo cr0, f11, f10
    ble lbl_fn_800B7090_00000410
    lfs f2, lbl_80880F7C
    addi r3, r1, 0xa8
    lfs f10, lbl_80880F84
    stfs f10, 0xa8(r1)
    stfs f2, 0xac(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0xb0(r1)
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x104(r1)
lbl_fn_800B7090_00000410:
    addi r5, r1, 0xfc
    lfs f2, 0x104(r1)
    psq_l f1, 0x0(r5), 0, 0
    addi r4, r1, 0x114
    psq_st f1, 0x20(r22), 0, 0
    addi r6, r1, 0x108
    addi r3, r1, 0x148
    stfs f2, 0x28(r22)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x11c(r1)
    stfs f2, 0x10(r22)
    psq_st f1, 0x8(r22), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    lfs f2, 0x110(r1)
    stfs f2, 0x1c(r22)
    psq_st f1, 0x14(r22), 0, 0
    bl fn_805F9240
    lfs f28, 0x14(r23)
    addi r24, r1, 0x178
    lfs f13, 0x10(r23)
    addi r4, r1, 0x30
    lfs f12, 0xc(r23)
    fmr f2, f28
    stfs f12, 0x30(r1)
    addi r6, r1, 0x3c
    addi r25, r1, 0x184
    addi r12, r1, 0x48
    stfs f13, 0x34(r1)
    addi r26, r1, 0x190
    addi r11, r1, 0x54
    psq_l f1, 0x0(r4), 0, 0
    addi r27, r1, 0x19c
    psq_st f1, 0x0(r24), 0, 0
    addi r10, r1, 0x60
    addi r28, r1, 0x1a8
    addi r9, r1, 0x6c
    stfs f2, 0x180(r1)
    addi r29, r1, 0x1b4
    addi r8, r1, 0x78
    addi r30, r1, 0x1c0
    lfs f11, 0x0(r23)
    addi r7, r1, 0x84
    stfs f11, 0x3c(r1)
    addi r31, r1, 0x1cc
    addi r3, r1, 0x148
    mr r4, r24
    stfs f13, 0x40(r1)
    mr r5, r24
    addi r21, r1, 0x130
    psq_l f1, 0x0(r6), 0, 0
    li r6, 0x8
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x18c(r1)
    lfs f10, 0x4(r23)
    stfs f12, 0x48(r1)
    stfs f10, 0x4c(r1)
    psq_l f1, 0x0(r12), 0, 0
    stfs f11, 0x54(r1)
    stfs f10, 0x58(r1)
    psq_st f1, 0x0(r26), 0, 0
    psq_l f1, 0x0(r11), 0, 0
    stfs f2, 0x198(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x1a4(r1)
    lfs f2, 0x8(r23)
    stfs f12, 0x60(r1)
    stfs f13, 0x64(r1)
    psq_l f1, 0x0(r10), 0, 0
    stfs f11, 0x6c(r1)
    stfs f13, 0x70(r1)
    psq_st f1, 0x0(r28), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stfs f12, 0x78(r1)
    stfs f10, 0x7c(r1)
    psq_st f1, 0x0(r29), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f11, 0x84(r1)
    stfs f10, 0x88(r1)
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f28, 0x38(r1)
    stfs f28, 0x44(r1)
    stfs f28, 0x50(r1)
    stfs f28, 0x5c(r1)
    stfs f2, 0x68(r1)
    stfs f2, 0x1b0(r1)
    stfs f2, 0x74(r1)
    stfs f2, 0x1bc(r1)
    stfs f2, 0x80(r1)
    stfs f2, 0x1c8(r1)
    stfs f2, 0x8c(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x1d4(r1)
    bl fn_805F9420
    addi r4, r1, 0x18
    addi r3, r1, 0x24
    psq_l f1, 0x0(r24), 0, 0
    mr r5, r4
    lfs f2, 0x180(r1)
    mr r6, r3
    psq_st f1, 0x0(r4), 0, 0
    mr r7, r4
    psq_lu f0, 0x0(r25), 0, 0
    mr r8, r3
    stfs f2, 0x20(r1)
    psq_lu f4, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    ps_sub f8, f0, f4
    lfs f1, 0x8(r25)
    stfs f2, 0x2c(r1)
    lfs f5, 0x8(r5)
    psq_lu f2, 0x0(r6), 0, 0
    ps_sel f8, f8, f0, f4
    fsub f9, f1, f5
    ps_sub f6, f0, f2
    lfs f3, 0x8(r6)
    fsub f7, f1, f3
    ps_sel f6, f6, f2, f0
    fsel f9, f9, f1, f5
    fsel f7, f7, f3, f1
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    mr r5, r4
    mr r6, r3
    psq_lu f2, 0x0(r6), 0, 0
    stfs f9, 0x8(r7)
    mr r7, r4
    psq_lu f4, 0x0(r5), 0, 0
    mr r8, r3
    psq_lu f0, 0x0(r26), 0, 0
    lfs f3, 0x8(r6)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r26)
    lfs f5, 0x8(r5)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    mr r5, r4
    mr r6, r3
    psq_lu f2, 0x0(r6), 0, 0
    stfs f9, 0x8(r7)
    mr r7, r4
    psq_lu f4, 0x0(r5), 0, 0
    mr r8, r3
    psq_lu f0, 0x0(r27), 0, 0
    lfs f3, 0x8(r6)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r27)
    lfs f5, 0x8(r5)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    mr r5, r4
    mr r6, r3
    psq_lu f2, 0x0(r6), 0, 0
    stfs f9, 0x8(r7)
    mr r7, r4
    psq_lu f4, 0x0(r5), 0, 0
    mr r8, r3
    psq_lu f0, 0x0(r28), 0, 0
    lfs f3, 0x8(r6)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r28)
    lfs f5, 0x8(r5)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    stfs f9, 0x8(r7)
    mr r5, r4
    mr r6, r3
    psq_lu f0, 0x0(r29), 0, 0
    mr r7, r4
    psq_lu f2, 0x0(r6), 0, 0
    mr r8, r3
    psq_lu f4, 0x0(r5), 0, 0
    ps_sub f6, f0, f2
    lfs f1, 0x8(r29)
    lfs f3, 0x8(r6)
    ps_sub f8, f0, f4
    lfs f5, 0x8(r5)
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    mr r5, r4
    mr r6, r3
    psq_lu f2, 0x0(r6), 0, 0
    stfs f9, 0x8(r7)
    mr r7, r4
    psq_lu f4, 0x0(r5), 0, 0
    mr r8, r3
    psq_lu f0, 0x0(r30), 0, 0
    lfs f3, 0x8(r6)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r30)
    lfs f5, 0x8(r5)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    mr r5, r4
    mr r6, r3
    psq_lu f2, 0x0(r6), 0, 0
    stfs f9, 0x8(r7)
    mr r7, r4
    psq_lu f4, 0x0(r5), 0, 0
    mr r8, r3
    psq_lu f0, 0x0(r31), 0, 0
    lfs f3, 0x8(r6)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r31)
    lfs f5, 0x8(r5)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r21), 0, 0
    lfs f2, 0x2c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0xc(r21), 0, 0
    lfs f11, 0x134(r1)
    stfs f2, 0x138(r1)
    lfs f2, 0x20(r1)
    stfs f9, 0x8(r7)
    lfs f10, 0x140(r1)
    fneg f31, f2
    lfs f12, 0x130(r1)
    lfs f13, 0x13c(r1)
    stfs f2, 0x144(r1)
    stfs f10, 0x3c(r22)
    stfs f11, 0x40(r22)
    stfs f12, 0x44(r22)
    stfs f13, 0x48(r22)
    lfs f11, 0x1c(r22)
    addi r3, r1, 0x90
    lfs f10, 0x10(r22)
    addi r5, r1, 0xc
    lfs f13, 0x18(r22)
    mr r4, r3
    fsubs f2, f11, f10
    lfs f12, 0xc(r22)
    lfs f11, 0x14(r22)
    lfs f10, 0x8(r22)
    fsubs f12, f13, f12
    stfs f2, 0x14(r1)
    fsubs f10, f11, f10
    stfs f12, 0x10(r1)
    stfs f10, 0xc(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x98(r1)
    bl fn_805F98D0
    lfs f12, 0x98(r1)
    addi r4, r1, 0xf0
    lfs f10, 0x94(r1)
    mr r3, r22
    lfs f11, 0x90(r1)
    fmuls f12, f12, f31
    fmuls f13, f10, f31
    lfs f10, 0x11c(r1)
    fmuls f28, f11, f31
    lfs f11, 0x118(r1)
    fadds f2, f10, f12
    lfs f10, 0x114(r1)
    fadds f29, f11, f13
    lfs f11, 0x144(r1)
    fadds f30, f10, f28
    lfs f10, 0x138(r1)
    lfs f31, lbl_80880F7C
    fsubs f10, f11, f10
    stfs f30, 0xf0(r1)
    stfs f29, 0xf4(r1)
    fadds f10, f31, f10
    psq_l f1, 0x0(r4), 0, 0
    stfs f28, 0x9c(r1)
    stfs f13, 0xa0(r1)
    stfs f12, 0xa4(r1)
    stfs f2, 0xf8(r1)
    psq_st f1, 0x8(r22), 0, 0
    stfs f2, 0x10(r22)
    stfs f31, 0xc8(r22)
    stfs f10, 0xcc(r22)
    bl fn_8004B378
    addi r11, r1, 0x210
    psq_l f31, 0x248(r1), 0, 0
    lfd f31, 0x240(r1)
    psq_l f30, 0x238(r1), 0, 0
    lfd f30, 0x230(r1)
    psq_l f29, 0x228(r1), 0, 0
    lfd f29, 0x220(r1)
    psq_l f28, 0x218(r1), 0, 0
    lfd f28, 0x210(r1)
    bl _restgpr_21
    lwz r0, 0x254(r1)
    mtlr r0
    addi r1, r1, 0x250
    blr
}

asm void fn_800B79E4(void)
{
    nofralloc
    stwu r1, -0x530(r1)
    mflr r0
    stw r0, 0x534(r1)
    addi r11, r1, 0x4f0
    stfd f31, 0x520(r1)
    psq_st f31, 0x528(r1), 0, 0
    stfd f30, 0x510(r1)
    psq_st f30, 0x518(r1), 0, 0
    stfd f29, 0x500(r1)
    psq_st f29, 0x508(r1), 0, 0
    stfd f28, 0x4f0(r1)
    psq_st f28, 0x4f8(r1), 0, 0
    bl _savegpr_22
    cmpwi r4, 0x0
    mr r30, r3
    mr r31, r4
    bne lbl_fn_800B79E4_000009AC
    lwz r3, lbl_8087EFB4
    li r4, 0x0
    lfs f1, lbl_80880F7C
    li r5, 0x3
    bl fn_800BDB58
lbl_fn_800B79E4_000009AC:
    lwz r4, lbl_8087EFB4
    lwz r0, 0x104(r4)
    stw r0, 0x74(r30)
    lwz r0, 0x108(r4)
    stw r0, 0x78(r30)
    psq_l f1, 0x10c(r4), 0, 0
    lfs f2, 0x114(r4)
    stfs f2, 0x84(r30)
    psq_st f1, 0x7c(r30), 0, 0
    psq_l f1, 0x118(r4), 0, 0
    lfs f2, 0x120(r4)
    stfs f2, 0x90(r30)
    psq_st f1, 0x88(r30), 0, 0
    psq_l f1, 0x124(r4), 0, 0
    lfs f2, 0x12c(r4)
    stfs f2, 0x9c(r30)
    psq_st f1, 0x94(r30), 0, 0
    psq_l f1, 0x130(r4), 0, 0
    lfs f2, 0x138(r4)
    stfs f2, 0xa8(r30)
    psq_st f1, 0xa0(r30), 0, 0
    lfs f0, 0x13c(r4)
    stfs f0, 0xac(r30)
    lfs f0, 0x140(r4)
    stfs f0, 0xb0(r30)
    lfs f0, 0x144(r4)
    stfs f0, 0xb4(r30)
    lfs f0, 0x148(r4)
    stfs f0, 0xb8(r30)
    lfs f0, 0x14c(r4)
    stfs f0, 0xbc(r30)
    lfs f0, 0x150(r4)
    stfs f0, 0xc0(r30)
    lfs f0, 0x154(r4)
    stfs f0, 0xc4(r30)
    lfs f0, 0x158(r4)
    stfs f0, 0xc8(r30)
    psq_l f1, 0x15c(r4), 0, 0
    psq_l f2, 0x164(r4), 0, 0
    psq_l f3, 0x16c(r4), 0, 0
    psq_l f4, 0x174(r4), 0, 0
    psq_l f5, 0x17c(r4), 0, 0
    psq_l f6, 0x184(r4), 0, 0
    psq_st f6, 0xf4(r30), 0, 0
    psq_st f1, 0xcc(r30), 0, 0
    psq_st f2, 0xd4(r30), 0, 0
    psq_st f3, 0xdc(r30), 0, 0
    psq_st f4, 0xe4(r30), 0, 0
    psq_st f5, 0xec(r30), 0, 0
    psq_l f1, 0x18c(r4), 0, 0
    psq_l f2, 0x194(r4), 0, 0
    psq_l f3, 0x19c(r4), 0, 0
    psq_l f4, 0x1a4(r4), 0, 0
    psq_l f5, 0x1ac(r4), 0, 0
    psq_l f6, 0x1b4(r4), 0, 0
    psq_l f7, 0x1bc(r4), 0, 0
    psq_l f8, 0x1c4(r4), 0, 0
    psq_st f8, 0x134(r30), 0, 0
    psq_st f1, 0xfc(r30), 0, 0
    psq_st f2, 0x104(r30), 0, 0
    psq_st f3, 0x10c(r30), 0, 0
    psq_st f4, 0x114(r30), 0, 0
    psq_st f5, 0x11c(r30), 0, 0
    psq_st f6, 0x124(r30), 0, 0
    psq_st f7, 0x12c(r30), 0, 0
    lfs f0, 0x1cc(r4)
    addi r5, r30, 0x208
    stfs f0, 0x13c(r30)
    addi r6, r4, 0x298
    addi r0, r30, 0x268
    lfs f0, 0x1d0(r4)
    stfs f0, 0x140(r30)
    psq_l f1, 0x1d4(r4), 0, 0
    psq_l f2, 0x1dc(r4), 0, 0
    psq_l f3, 0x1e4(r4), 0, 0
    psq_l f4, 0x1ec(r4), 0, 0
    psq_l f5, 0x1f4(r4), 0, 0
    psq_l f6, 0x1fc(r4), 0, 0
    psq_st f6, 0x16c(r30), 0, 0
    psq_st f1, 0x144(r30), 0, 0
    psq_st f2, 0x14c(r30), 0, 0
    psq_st f3, 0x154(r30), 0, 0
    psq_st f4, 0x15c(r30), 0, 0
    psq_st f5, 0x164(r30), 0, 0
    psq_l f1, 0x204(r4), 0, 0
    psq_l f2, 0x20c(r4), 0, 0
    psq_l f3, 0x214(r4), 0, 0
    psq_l f4, 0x21c(r4), 0, 0
    psq_l f5, 0x224(r4), 0, 0
    psq_l f6, 0x22c(r4), 0, 0
    psq_st f6, 0x19c(r30), 0, 0
    psq_st f1, 0x174(r30), 0, 0
    psq_st f2, 0x17c(r30), 0, 0
    psq_st f3, 0x184(r30), 0, 0
    psq_st f4, 0x18c(r30), 0, 0
    psq_st f5, 0x194(r30), 0, 0
    lwz r3, 0x234(r4)
    stw r3, 0x1a4(r30)
    lfs f0, 0x238(r4)
    stfs f0, 0x1a8(r30)
    lfs f0, 0x23c(r4)
    stfs f0, 0x1ac(r30)
    psq_l f1, 0x240(r4), 0, 0
    lfs f2, 0x248(r4)
    stfs f2, 0x1b8(r30)
    psq_st f1, 0x1b0(r30), 0, 0
    lfs f0, 0x24c(r4)
    stfs f0, 0x1bc(r30)
    psq_l f1, 0x250(r4), 0, 0
    lfs f2, 0x258(r4)
    stfs f2, 0x1c8(r30)
    psq_st f1, 0x1c0(r30), 0, 0
    lfs f0, 0x25c(r4)
    stfs f0, 0x1cc(r30)
    psq_l f1, 0x260(r4), 0, 0
    lfs f2, 0x268(r4)
    stfs f2, 0x1d8(r30)
    psq_st f1, 0x1d0(r30), 0, 0
    lfs f0, 0x26c(r4)
    stfs f0, 0x1dc(r30)
    psq_l f1, 0x270(r4), 0, 0
    lfs f2, 0x278(r4)
    stfs f2, 0x1e8(r30)
    psq_st f1, 0x1e0(r30), 0, 0
    lfs f0, 0x27c(r4)
    stfs f0, 0x1ec(r30)
    psq_l f1, 0x280(r4), 0, 0
    lfs f2, 0x288(r4)
    stfs f2, 0x1f8(r30)
    psq_st f1, 0x1f0(r30), 0, 0
    psq_l f1, 0x28c(r4), 0, 0
    lfs f2, 0x294(r4)
    stfs f2, 0x204(r30)
    psq_st f1, 0x1fc(r30), 0, 0
lbl_fn_800B79E4_00000BC4:
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
    lfs f0, 0xc(r6)
    addi r6, r6, 0x10
    stfs f0, 0xc(r5)
    addi r5, r5, 0x10
    cmplw r5, r0
    blt lbl_fn_800B79E4_00000BC4
    lwz r4, lbl_8087EFA8
    lwz r3, lbl_8087EFB4
    lfs f10, 0x128(r4)
    lfs f9, 0x124(r4)
    lfs f0, 0x120(r4)
    fneg f10, f10
    fneg f9, f9
    fneg f0, f0
    stfs f10, 0xb8(r1)
    stfs f0, 0xb0(r1)
    stfs f9, 0xb4(r1)
    bl fn_800C1424
    lwz r0, 0x234(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800B79E4_00000C64
    lfs f0, 0x25c(r3)
    addi r5, r1, 0x8c
    lfs f9, 0x258(r3)
    addi r4, r1, 0xb0
    fneg f10, f0
    lfs f0, 0x254(r3)
    fneg f9, f9
    fneg f0, f0
    stfs f10, 0x94(r1)
    frsp f2, f10
    stfs f0, 0x8c(r1)
    stfs f9, 0x90(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xb8(r1)
lbl_fn_800B79E4_00000C64:
    lfs f9, lbl_80880F7C
    li r0, 0x0
    lfs f0, 0xb0(r1)
    fcmpu cr0, f9, f0
    bne lbl_fn_800B79E4_00000C94
    lfs f0, 0xb4(r1)
    fcmpu cr0, f9, f0
    bne lbl_fn_800B79E4_00000C94
    lfs f0, 0xb8(r1)
    fcmpu cr0, f9, f0
    bne lbl_fn_800B79E4_00000C94
    li r0, 0x1
lbl_fn_800B79E4_00000C94:
    cmpwi r0, 0x0
    beq lbl_fn_800B79E4_00000CE4
    lfs f2, lbl_80880F84
    addi r28, r1, 0x80
    lfs f0, lbl_80880F8C
    addi r5, r1, 0x74
    stfs f2, 0x74(r1)
    mr r3, r28
    mr r4, r28
    stfs f0, 0x78(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F98D0
    lfs f2, 0x88(r1)
    addi r3, r1, 0xb0
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xb8(r1)
lbl_fn_800B79E4_00000CE4:
    addi r3, r1, 0xb0
    mr r4, r3
    bl fn_805F98D0
    lfs f10, lbl_80880F90
    addi r7, r1, 0x1c8
    lfs f9, lbl_80880F94
    addi r4, r1, 0x68
    fmr f2, f10
    stfs f10, 0x68(r1)
    addi r3, r1, 0x120
    addi r6, r1, 0x5c
    stfs f10, 0x6c(r1)
    addi r5, r1, 0x12c
    psq_l f1, 0x0(r4), 0, 0
    addi r8, r7, 0x94
    stfs f2, 0x128(r1)
    fmr f2, f9
    addi r4, r30, 0x208
    addi r0, r7, 0xf4
    stfs f9, 0x5c(r1)
    stfs f9, 0x60(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x134(r1)
    psq_l f1, 0x174(r30), 0, 0
    psq_l f2, 0x17c(r30), 0, 0
    psq_l f3, 0x184(r30), 0, 0
    psq_l f4, 0x18c(r30), 0, 0
    psq_l f5, 0x194(r30), 0, 0
    psq_l f6, 0x19c(r30), 0, 0
    psq_st f6, 0x28(r7), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    psq_st f2, 0x8(r7), 0, 0
    psq_st f3, 0x10(r7), 0, 0
    psq_st f4, 0x18(r7), 0, 0
    psq_st f5, 0x20(r7), 0, 0
    lwz r3, 0x1a4(r30)
    stw r3, 0x1f8(r1)
    lfs f0, 0x1a8(r30)
    stfs f0, 0x1fc(r1)
    lfs f0, 0x1ac(r30)
    stfs f0, 0x200(r1)
    psq_l f1, 0x1b0(r30), 0, 0
    lfs f2, 0x1b8(r30)
    stfs f2, 0x20c(r1)
    psq_st f1, 0x3c(r7), 0, 0
    lfs f0, 0x1bc(r30)
    stfs f0, 0x210(r1)
    psq_l f1, 0x1c0(r30), 0, 0
    lfs f2, 0x1c8(r30)
    stfs f2, 0x21c(r1)
    psq_st f1, 0x4c(r7), 0, 0
    lfs f0, 0x1cc(r30)
    stfs f0, 0x220(r1)
    psq_l f1, 0x1d0(r30), 0, 0
    lfs f2, 0x1d8(r30)
    stfs f2, 0x22c(r1)
    psq_st f1, 0x5c(r7), 0, 0
    lfs f0, 0x1dc(r30)
    stfs f0, 0x230(r1)
    psq_l f1, 0x1e0(r30), 0, 0
    lfs f2, 0x1e8(r30)
    stfs f2, 0x23c(r1)
    psq_st f1, 0x6c(r7), 0, 0
    lfs f0, 0x1ec(r30)
    stfs f0, 0x240(r1)
    psq_l f1, 0x1f0(r30), 0, 0
    lfs f2, 0x1f8(r30)
    stfs f2, 0x24c(r1)
    psq_st f1, 0x7c(r7), 0, 0
    psq_l f1, 0x1fc(r30), 0, 0
    lfs f2, 0x204(r30)
    stfs f10, 0x70(r1)
    stfs f9, 0x64(r1)
    psq_st f1, 0x88(r7), 0, 0
    stfs f2, 0x258(r1)
lbl_fn_800B79E4_00000E18:
    lfs f2, 0x8(r4)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0x8(r8)
    lfs f0, 0xc(r4)
    addi r4, r4, 0x10
    stfs f0, 0xc(r8)
    addi r8, r8, 0x10
    cmplw r8, r0
    blt lbl_fn_800B79E4_00000E18
    psq_l f1, 0xcc(r30), 0, 0
    addi r3, r1, 0x138
    psq_l f2, 0xd4(r30), 0, 0
    addi r4, r1, 0xa4
    psq_l f3, 0xdc(r30), 0, 0
    addi r26, r1, 0x50
    psq_l f4, 0xe4(r30), 0, 0
    addi r27, r1, 0x108
    psq_l f5, 0xec(r30), 0, 0
    addi r24, r1, 0x44
    psq_l f6, 0xf4(r30), 0, 0
    addi r25, r1, 0x114
    psq_st f6, 0x28(r3), 0, 0
    addi r22, r1, 0xd8
    lfs f30, lbl_80880F90
    addi r23, r1, 0x120
    psq_st f1, 0x0(r3), 0, 0
    lis r28, 0xff00
    lfs f31, lbl_80880F94
    li r29, 0x0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_l f1, 0x7c(r30), 0, 0
    lfs f2, 0x84(r30)
    stfs f2, 0xac(r1)
    psq_st f1, 0x0(r4), 0, 0
    b lbl_fn_800B79E4_00000F78
lbl_fn_800B79E4_00000EB4:
    fmr f2, f30
    stfs f30, 0x50(r1)
    stfs f30, 0x54(r1)
    stfs f2, 0x110(r1)
    fmr f2, f31
    psq_l f1, 0x0(r26), 0, 0
    stfs f31, 0x44(r1)
    stfs f31, 0x48(r1)
    psq_st f1, 0x0(r27), 0, 0
    psq_l f1, 0x0(r24), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x11c(r1)
    lwz r3, 0x0(r31)
    stfs f30, 0x58(r1)
    cmpwi r3, 0x0
    stfs f31, 0x4c(r1)
    beq lbl_fn_800B79E4_00000F70
    lwz r12, 0x0(r3)
    mr r7, r27
    addi r4, r1, 0x138
    addi r5, r1, 0xa4
    lwz r12, 0x14(r12)
    addi r6, r1, 0x1c8
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_800B79E4_00000F70
    lwz r3, lbl_8087EFA8
    lwz r0, 0x12c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800B79E4_00000F3C
    mr r3, r27
    addi r4, r28, 0xff
    bl fn_8006FE08
lbl_fn_800B79E4_00000F3C:
    addi r3, r1, 0xd8
    addi r4, r1, 0x120
    addi r5, r1, 0x108
    bl fn_80070C98
    psq_l f1, 0x0(r22), 0, 0
    lfs f2, 0xe0(r1)
    psq_st f1, 0x0(r23), 0, 0
    psq_l f1, 0xc(r22), 0, 0
    stfs f2, 0x128(r1)
    lfs f2, 0xec(r1)
    psq_st f1, 0xc(r23), 0, 0
    stfs f2, 0x134(r1)
    b lbl_fn_800B79E4_00000F74
lbl_fn_800B79E4_00000F70:
    stw r29, 0x0(r31)
lbl_fn_800B79E4_00000F74:
    lwz r31, 0x8(r31)
lbl_fn_800B79E4_00000F78:
    cmpwi r31, 0x0
    bne lbl_fn_800B79E4_00000EB4
    lwz r5, lbl_8087EFA8
    addi r3, r1, 0x244
    lfs f2, 0x24c(r1)
    addi r22, r1, 0xf0
    lwz r0, 0x140(r5)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r22), 0, 0
    cmpwi r0, 0x0
    psq_l f1, 0xc(r3), 0, 0
    stfs f2, 0xf8(r1)
    lfs f2, 0x258(r1)
    psq_st f1, 0xc(r22), 0, 0
    stfs f2, 0x104(r1)
    beq lbl_fn_800B79E4_00001078
    lwz r0, 0x138(r5)
    cmpwi r0, 0x0
    beq lbl_fn_800B79E4_00001024
    addi r3, r1, 0x120
    bl fn_8006FDD8
    lfs f0, lbl_80880F84
    fcmpo cr0, f1, f0
    ble lbl_fn_800B79E4_00001000
    addi r3, r1, 0x120
    lfs f2, 0x128(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x5c(r30), 0, 0
    stfs f2, 0x64(r30)
    psq_l f1, 0xc(r3), 0, 0
    lfs f2, 0x134(r1)
    stfs f2, 0x70(r30)
    psq_st f1, 0x68(r30), 0, 0
    b lbl_fn_800B79E4_00001078
lbl_fn_800B79E4_00001000:
    psq_l f1, 0x0(r22), 0, 0
    lfs f2, 0xf8(r1)
    psq_st f1, 0x5c(r30), 0, 0
    psq_l f1, 0xc(r22), 0, 0
    stfs f2, 0x64(r30)
    lfs f2, 0x104(r1)
    psq_st f1, 0x68(r30), 0, 0
    stfs f2, 0x70(r30)
    b lbl_fn_800B79E4_00001078
lbl_fn_800B79E4_00001024:
    lfs f0, 0x16c(r5)
    addi r3, r1, 0x38
    lfs f9, 0x174(r5)
    addi r4, r1, 0x2c
    lfs f2, 0x164(r5)
    stfs f9, 0x38(r1)
    stfs f0, 0x3c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x5c(r30), 0, 0
    stfs f2, 0x64(r30)
    lwz r3, lbl_8087EFA8
    stfs f2, 0x40(r1)
    lfs f0, 0x168(r3)
    lfs f9, 0x170(r3)
    lfs f2, 0x160(r3)
    stfs f9, 0x2c(r1)
    stfs f0, 0x30(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    psq_st f1, 0x68(r30), 0, 0
    stfs f2, 0x70(r30)
lbl_fn_800B79E4_00001078:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x17c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800B79E4_000010EC
    lfs f0, 0x180(r3)
    lis r0, 0x4330
    lis r3, lbl_80732ED0@ha
    stw r0, 0x4b8(r1)
    fctiwz f0, f0
    lfd f9, lbl_80732ED0@l(r3)
    mr r4, r30
    addi r3, r1, 0xc0
    stfd f0, 0x4b0(r1)
    addi r5, r30, 0x5c
    lwz r0, 0x4b4(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x4bc(r1)
    lfd f0, 0x4b8(r1)
    fsubs f1, f0, f9
    bl fn_800B6C70
    addi r3, r1, 0xc0
    lfs f2, 0xc8(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x5c(r30), 0, 0
    stfs f2, 0x64(r30)
    psq_l f1, 0xc(r3), 0, 0
    lfs f2, 0xd4(r1)
    stfs f2, 0x70(r30)
    psq_st f1, 0x68(r30), 0, 0
lbl_fn_800B79E4_000010EC:
    lwz r5, lbl_8087EFA8
    mr r4, r30
    lfs f10, 0x5c(r30)
    addi r3, r1, 0x2bc
    lfs f29, 0x190(r5)
    addi r5, r30, 0x5c
    lfs f9, 0x60(r30)
    addi r6, r1, 0xb0
    fsubs f13, f10, f29
    lfs f0, 0x64(r30)
    fsubs f12, f9, f29
    lfs f10, 0x68(r30)
    fsubs f11, f0, f29
    lfs f9, 0x6c(r30)
    lfs f0, 0x70(r30)
    fadds f10, f10, f29
    fadds f9, f9, f29
    stfs f29, 0x98(r1)
    fadds f0, f0, f29
    stfs f29, 0x9c(r1)
    stfs f29, 0xa0(r1)
    stfs f13, 0x5c(r30)
    stfs f12, 0x60(r30)
    stfs f11, 0x64(r30)
    stfs f10, 0x68(r30)
    stfs f9, 0x6c(r30)
    stfs f0, 0x70(r30)
    bl fn_800B7090
    lwz r0, 0x2bc(r1)
    addi r8, r1, 0x2c4
    stw r0, 0x268(r30)
    addi r7, r1, 0x2d0
    addi r6, r1, 0x2dc
    addi r5, r1, 0x2e8
    lwz r0, 0x2c0(r1)
    addi r4, r1, 0x314
    stw r0, 0x26c(r30)
    addi r3, r1, 0x344
    psq_l f1, 0x0(r8), 0, 0
    lfs f2, 0x2cc(r1)
    stfs f2, 0x278(r30)
    psq_st f1, 0x270(r30), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    lfs f2, 0x2d8(r1)
    stfs f2, 0x284(r30)
    psq_st f1, 0x27c(r30), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    lfs f2, 0x2e4(r1)
    stfs f2, 0x290(r30)
    psq_st f1, 0x288(r30), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x2f0(r1)
    stfs f2, 0x29c(r30)
    psq_st f1, 0x294(r30), 0, 0
    lfs f0, 0x2f4(r1)
    stfs f0, 0x2a0(r30)
    lfs f0, 0x2f8(r1)
    stfs f0, 0x2a4(r30)
    lfs f0, 0x2fc(r1)
    stfs f0, 0x2a8(r30)
    lfs f0, 0x300(r1)
    stfs f0, 0x2ac(r30)
    lfs f0, 0x304(r1)
    stfs f0, 0x2b0(r30)
    lfs f0, 0x308(r1)
    stfs f0, 0x2b4(r30)
    lfs f0, 0x30c(r1)
    stfs f0, 0x2b8(r30)
    lfs f0, 0x310(r1)
    stfs f0, 0x2bc(r30)
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x2e8(r30), 0, 0
    psq_st f1, 0x2c0(r30), 0, 0
    psq_st f2, 0x2c8(r30), 0, 0
    psq_st f3, 0x2d0(r30), 0, 0
    psq_st f4, 0x2d8(r30), 0, 0
    psq_st f5, 0x2e0(r30), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f7, 0x30(r3), 0, 0
    psq_l f8, 0x38(r3), 0, 0
    psq_st f8, 0x328(r30), 0, 0
    psq_st f1, 0x2f0(r30), 0, 0
    psq_st f2, 0x2f8(r30), 0, 0
    psq_st f3, 0x300(r30), 0, 0
    psq_st f4, 0x308(r30), 0, 0
    psq_st f5, 0x310(r30), 0, 0
    psq_st f6, 0x318(r30), 0, 0
    psq_st f7, 0x320(r30), 0, 0
    lfs f0, 0x384(r1)
    stfs f0, 0x330(r30)
    lfs f0, 0x388(r1)
    stfs f0, 0x334(r30)
    addi r3, r1, 0x38c
    addi r6, r1, 0x3bc
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r30, 0x3fc
    psq_l f2, 0x8(r3), 0, 0
    addi r5, r6, 0x94
    psq_l f3, 0x10(r3), 0, 0
    addi r0, r30, 0x45c
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x360(r30), 0, 0
    psq_st f1, 0x338(r30), 0, 0
    psq_st f2, 0x340(r30), 0, 0
    psq_st f3, 0x348(r30), 0, 0
    psq_st f4, 0x350(r30), 0, 0
    psq_st f5, 0x358(r30), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_l f3, 0x10(r6), 0, 0
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f6, 0x390(r30), 0, 0
    psq_st f1, 0x368(r30), 0, 0
    psq_st f2, 0x370(r30), 0, 0
    psq_st f3, 0x378(r30), 0, 0
    psq_st f4, 0x380(r30), 0, 0
    psq_st f5, 0x388(r30), 0, 0
    lwz r3, 0x3ec(r1)
    stw r3, 0x398(r30)
    lfs f0, 0x3f0(r1)
    stfs f0, 0x39c(r30)
    lfs f0, 0x3f4(r1)
    stfs f0, 0x3a0(r30)
    psq_l f1, 0x3c(r6), 0, 0
    lfs f2, 0x400(r1)
    stfs f2, 0x3ac(r30)
    psq_st f1, 0x3a4(r30), 0, 0
    lfs f0, 0x404(r1)
    stfs f0, 0x3b0(r30)
    psq_l f1, 0x4c(r6), 0, 0
    lfs f2, 0x410(r1)
    stfs f2, 0x3bc(r30)
    psq_st f1, 0x3b4(r30), 0, 0
    lfs f0, 0x414(r1)
    stfs f0, 0x3c0(r30)
    psq_l f1, 0x5c(r6), 0, 0
    lfs f2, 0x420(r1)
    stfs f2, 0x3cc(r30)
    psq_st f1, 0x3c4(r30), 0, 0
    lfs f0, 0x424(r1)
    stfs f0, 0x3d0(r30)
    psq_l f1, 0x6c(r6), 0, 0
    lfs f2, 0x430(r1)
    stfs f2, 0x3dc(r30)
    psq_st f1, 0x3d4(r30), 0, 0
    lfs f0, 0x434(r1)
    stfs f0, 0x3e0(r30)
    psq_l f1, 0x7c(r6), 0, 0
    lfs f2, 0x440(r1)
    stfs f2, 0x3ec(r30)
    psq_st f1, 0x3e4(r30), 0, 0
    psq_l f1, 0x88(r6), 0, 0
    lfs f2, 0x44c(r1)
    stfs f2, 0x3f8(r30)
    psq_st f1, 0x3f0(r30), 0, 0
lbl_fn_800B79E4_00001390:
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    lfs f0, 0xc(r5)
    addi r5, r5, 0x10
    stfs f0, 0xc(r4)
    addi r4, r4, 0x10
    cmplw r4, r0
    blt lbl_fn_800B79E4_00001390
    addi r3, r1, 0x2bc
    li r4, -0x1
    bl fn_8004B338
    lwz r6, lbl_8087EFB4
    lwz r0, 0x268(r30)
    stw r0, 0x318(r6)
    lwz r0, 0x26c(r30)
    stw r0, 0x31c(r6)
    lfs f2, 0x278(r30)
    psq_l f1, 0x270(r30), 0, 0
    psq_st f1, 0x320(r6), 0, 0
    stfs f2, 0x328(r6)
    lfs f2, 0x284(r30)
    psq_l f1, 0x27c(r30), 0, 0
    psq_st f1, 0x32c(r6), 0, 0
    stfs f2, 0x334(r6)
    lfs f2, 0x290(r30)
    psq_l f1, 0x288(r30), 0, 0
    psq_st f1, 0x338(r6), 0, 0
    stfs f2, 0x340(r6)
    lfs f2, 0x29c(r30)
    psq_l f1, 0x294(r30), 0, 0
    psq_st f1, 0x344(r6), 0, 0
    stfs f2, 0x34c(r6)
    lfs f0, 0x2a0(r30)
    stfs f0, 0x350(r6)
    lfs f0, 0x2a4(r30)
    stfs f0, 0x354(r6)
    lfs f0, 0x2a8(r30)
    stfs f0, 0x358(r6)
    lfs f0, 0x2ac(r30)
    stfs f0, 0x35c(r6)
    lfs f0, 0x2b0(r30)
    stfs f0, 0x360(r6)
    lfs f0, 0x2b4(r30)
    stfs f0, 0x364(r6)
    lfs f0, 0x2b8(r30)
    stfs f0, 0x368(r6)
    lfs f0, 0x2bc(r30)
    stfs f0, 0x36c(r6)
    psq_l f2, 0x2c8(r30), 0, 0
    psq_l f3, 0x2d0(r30), 0, 0
    psq_l f4, 0x2d8(r30), 0, 0
    psq_l f5, 0x2e0(r30), 0, 0
    psq_l f6, 0x2e8(r30), 0, 0
    psq_l f1, 0x2c0(r30), 0, 0
    psq_st f1, 0x370(r6), 0, 0
    psq_st f2, 0x378(r6), 0, 0
    psq_st f3, 0x380(r6), 0, 0
    psq_st f4, 0x388(r6), 0, 0
    psq_st f5, 0x390(r6), 0, 0
    psq_st f6, 0x398(r6), 0, 0
    psq_l f2, 0x2f8(r30), 0, 0
    psq_l f3, 0x300(r30), 0, 0
    psq_l f4, 0x308(r30), 0, 0
    psq_l f5, 0x310(r30), 0, 0
    psq_l f6, 0x318(r30), 0, 0
    psq_l f7, 0x320(r30), 0, 0
    psq_l f8, 0x328(r30), 0, 0
    psq_l f1, 0x2f0(r30), 0, 0
    psq_st f1, 0x3a0(r6), 0, 0
    psq_st f2, 0x3a8(r6), 0, 0
    psq_st f3, 0x3b0(r6), 0, 0
    psq_st f4, 0x3b8(r6), 0, 0
    psq_st f5, 0x3c0(r6), 0, 0
    psq_st f6, 0x3c8(r6), 0, 0
    psq_st f7, 0x3d0(r6), 0, 0
    psq_st f8, 0x3d8(r6), 0, 0
    lfs f0, 0x330(r30)
    addi r5, r6, 0x4ac
    stfs f0, 0x3e0(r6)
    addi r4, r30, 0x3fc
    addi r0, r6, 0x50c
    lfs f0, 0x334(r30)
    stfs f0, 0x3e4(r6)
    psq_l f2, 0x340(r30), 0, 0
    psq_l f3, 0x348(r30), 0, 0
    psq_l f4, 0x350(r30), 0, 0
    psq_l f5, 0x358(r30), 0, 0
    psq_l f6, 0x360(r30), 0, 0
    psq_l f1, 0x338(r30), 0, 0
    psq_st f1, 0x3e8(r6), 0, 0
    psq_st f2, 0x3f0(r6), 0, 0
    psq_st f3, 0x3f8(r6), 0, 0
    psq_st f4, 0x400(r6), 0, 0
    psq_st f5, 0x408(r6), 0, 0
    psq_st f6, 0x410(r6), 0, 0
    psq_l f2, 0x370(r30), 0, 0
    psq_l f3, 0x378(r30), 0, 0
    psq_l f4, 0x380(r30), 0, 0
    psq_l f5, 0x388(r30), 0, 0
    psq_l f6, 0x390(r30), 0, 0
    psq_l f1, 0x368(r30), 0, 0
    psq_st f1, 0x418(r6), 0, 0
    psq_st f2, 0x420(r6), 0, 0
    psq_st f3, 0x428(r6), 0, 0
    psq_st f4, 0x430(r6), 0, 0
    psq_st f5, 0x438(r6), 0, 0
    psq_st f6, 0x440(r6), 0, 0
    lwz r3, 0x398(r30)
    stw r3, 0x448(r6)
    lfs f0, 0x39c(r30)
    stfs f0, 0x44c(r6)
    lfs f0, 0x3a0(r30)
    stfs f0, 0x450(r6)
    lfs f2, 0x3ac(r30)
    psq_l f1, 0x3a4(r30), 0, 0
    psq_st f1, 0x454(r6), 0, 0
    stfs f2, 0x45c(r6)
    lfs f0, 0x3b0(r30)
    stfs f0, 0x460(r6)
    lfs f2, 0x3bc(r30)
    psq_l f1, 0x3b4(r30), 0, 0
    psq_st f1, 0x464(r6), 0, 0
    stfs f2, 0x46c(r6)
    lfs f0, 0x3c0(r30)
    stfs f0, 0x470(r6)
    lfs f2, 0x3cc(r30)
    psq_l f1, 0x3c4(r30), 0, 0
    psq_st f1, 0x474(r6), 0, 0
    stfs f2, 0x47c(r6)
    lfs f0, 0x3d0(r30)
    stfs f0, 0x480(r6)
    lfs f2, 0x3dc(r30)
    psq_l f1, 0x3d4(r30), 0, 0
    psq_st f1, 0x484(r6), 0, 0
    stfs f2, 0x48c(r6)
    lfs f0, 0x3e0(r30)
    stfs f0, 0x490(r6)
    lfs f2, 0x3ec(r30)
    psq_l f1, 0x3e4(r30), 0, 0
    psq_st f1, 0x494(r6), 0, 0
    stfs f2, 0x49c(r6)
    lfs f2, 0x3f8(r30)
    psq_l f1, 0x3f0(r30), 0, 0
    psq_st f1, 0x4a0(r6), 0, 0
    stfs f2, 0x4a8(r6)
lbl_fn_800B79E4_000015DC:
    lfs f2, 0x8(r4)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
    lfs f0, 0xc(r4)
    addi r4, r4, 0x10
    stfs f0, 0xc(r5)
    addi r5, r5, 0x10
    cmplw r5, r0
    blt lbl_fn_800B79E4_000015DC
    lwz r3, lbl_8087EFA8
    lwz r0, 0x12c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800B79E4_0000189C
    addi r3, r30, 0x5c
    li r4, -0x100
    bl fn_8006FE08
    lwz r3, lbl_8087EEB0
    addi r4, r30, 0x270
    lfs f1, lbl_80880F7C
    addi r5, r30, 0x27c
    lis r6, 0xffff
    bl fn_80063764
    lfs f9, 0x280(r30)
    addi r4, r30, 0x270
    lfs f11, 0x274(r30)
    addi r5, r1, 0x20
    lfs f0, 0x284(r30)
    lis r6, 0xffff
    fsubs f30, f9, f11
    lfs f12, 0x278(r30)
    lfs f10, 0x27c(r30)
    fsubs f13, f0, f12
    lfs f0, lbl_80880F98
    lfs f9, 0x270(r30)
    fmuls f29, f30, f0
    stfs f30, 0xc(r1)
    fmuls f31, f13, f0
    fsubs f10, f10, f9
    lwz r3, lbl_8087EEB0
    stfs f13, 0x10(r1)
    fadds f12, f12, f31
    lfs f1, lbl_80880F7C
    fmuls f0, f10, f0
    stfs f10, 0x8(r1)
    fadds f10, f11, f29
    lfs f2, lbl_80880F80
    stfs f0, 0x14(r1)
    fadds f0, f9, f0
    stfs f29, 0x18(r1)
    stfs f31, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f10, 0x24(r1)
    stfs f12, 0x28(r1)
    bl fn_800638B0
    lfs f0, 0x334(r30)
    addi r22, r30, 0x338
    lfs f9, 0x330(r30)
    addi r23, r1, 0x168
    fneg f10, f0
    lfs f29, 0x2a4(r30)
    lfs f0, lbl_80880F84
    fneg f13, f9
    lfs f31, 0x2ac(r30)
    li r24, 0x0
    lfs f28, 0x2b0(r30)
    fmuls f11, f0, f29
    lfs f30, 0x2a8(r30)
    fmuls f12, f0, f31
    fmuls f9, f0, f28
    stfs f30, 0x184(r1)
    fmuls f0, f0, f30
    stfs f28, 0x174(r1)
    stfs f31, 0x168(r1)
    stfs f29, 0x16c(r1)
    stfs f13, 0x170(r1)
    stfs f29, 0x178(r1)
    stfs f13, 0x17c(r1)
    stfs f28, 0x180(r1)
    stfs f13, 0x188(r1)
    stfs f31, 0x18c(r1)
    stfs f30, 0x190(r1)
    stfs f13, 0x194(r1)
    stfs f12, 0x198(r1)
    stfs f11, 0x19c(r1)
    stfs f10, 0x1a0(r1)
    stfs f9, 0x1a4(r1)
    stfs f11, 0x1a8(r1)
    stfs f10, 0x1ac(r1)
    stfs f9, 0x1b0(r1)
    stfs f0, 0x1b4(r1)
    stfs f10, 0x1b8(r1)
    stfs f12, 0x1bc(r1)
    stfs f0, 0x1c0(r1)
    stfs f10, 0x1c4(r1)
lbl_fn_800B79E4_00001758:
    mr r3, r22
    mr r4, r23
    mr r5, r23
    bl fn_805F93C0
    addi r24, r24, 0x1
    addi r23, r23, 0xc
    cmpwi r24, 0x8
    blt lbl_fn_800B79E4_00001758
    lis r30, 0xff01
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80880F7C
    addi r4, r1, 0x168
    addi r5, r1, 0x174
    subi r6, r30, 0x100
    bl fn_80063764
    lwz r3, lbl_8087EEB0
    addi r4, r1, 0x174
    lfs f1, lbl_80880F7C
    addi r5, r1, 0x180
    subi r6, r30, 0x100
    bl fn_80063764
    lwz r3, lbl_8087EEB0
    addi r4, r1, 0x180
    lfs f1, lbl_80880F7C
    addi r5, r1, 0x18c
    subi r6, r30, 0x100
    bl fn_80063764
    lwz r3, lbl_8087EEB0
    addi r4, r1, 0x18c
    lfs f1, lbl_80880F7C
    addi r5, r1, 0x168
    subi r6, r30, 0x100
    bl fn_80063764
    lwz r3, lbl_8087EEB0
    addi r4, r1, 0x198
    lfs f1, lbl_80880F7C
    addi r5, r1, 0x1a4
    subi r6, r30, 0x100
    bl fn_80063764
    lwz r3, lbl_8087EEB0
    addi r4, r1, 0x1a4
    lfs f1, lbl_80880F7C
    addi r5, r1, 0x1b0
    subi r6, r30, 0x100
    bl fn_80063764
    lwz r3, lbl_8087EEB0
    addi r4, r1, 0x1b0
    lfs f1, lbl_80880F7C
    addi r5, r1, 0x1bc
    subi r6, r30, 0x100
    bl fn_80063764
    lwz r3, lbl_8087EEB0
    addi r4, r1, 0x1bc
    lfs f1, lbl_80880F7C
    addi r5, r1, 0x198
    subi r6, r30, 0x100
    bl fn_80063764
    lwz r3, lbl_8087EEB0
    addi r4, r1, 0x168
    lfs f1, lbl_80880F7C
    addi r5, r1, 0x198
    subi r6, r30, 0x100
    bl fn_80063764
    lwz r3, lbl_8087EEB0
    addi r4, r1, 0x174
    lfs f1, lbl_80880F7C
    addi r5, r1, 0x1a4
    subi r6, r30, 0x100
    bl fn_80063764
    lwz r3, lbl_8087EEB0
    addi r4, r1, 0x180
    lfs f1, lbl_80880F7C
    addi r5, r1, 0x1b0
    subi r6, r30, 0x100
    bl fn_80063764
    lwz r3, lbl_8087EEB0
    addi r4, r1, 0x18c
    lfs f1, lbl_80880F7C
    addi r5, r1, 0x1bc
    subi r6, r30, 0x100
    bl fn_80063764
lbl_fn_800B79E4_0000189C:
    addi r11, r1, 0x4f0
    psq_l f31, 0x528(r1), 0, 0
    lfd f31, 0x520(r1)
    psq_l f30, 0x518(r1), 0, 0
    lfd f30, 0x510(r1)
    psq_l f29, 0x508(r1), 0, 0
    lfd f29, 0x500(r1)
    psq_l f28, 0x4f8(r1), 0, 0
    lfd f28, 0x4f0(r1)
    bl _restgpr_22
    lwz r0, 0x534(r1)
    mtlr r0
    addi r1, r1, 0x530
    blr
}

asm void fn_800B8964(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    lis r4, 0x4330
    li r6, 0x4
    stw r0, 0x104(r1)
    li r0, 0x1
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stfd f29, 0xd0(r1)
    psq_st f29, 0xd8(r1), 0, 0
    stfd f28, 0xc0(r1)
    psq_st f28, 0xc8(r1), 0, 0
    stfd f27, 0xb0(r1)
    psq_st f27, 0xb8(r1), 0, 0
    stfd f26, 0xa0(r1)
    psq_st f26, 0xa8(r1), 0, 0
    stw r31, 0x9c(r1)
    stw r30, 0x98(r1)
    stw r29, 0x94(r1)
    mr r29, r3
    stw r28, 0x90(r1)
    lwz r5, lbl_8087EFA8
    stw r4, 0x38(r1)
    lwz r31, 0x158(r5)
    lwz r30, 0x15c(r5)
    stw r4, 0x40(r1)
    mr r4, r31
    lwz r3, lbl_8087EF8C
    mr r5, r30
    stb r0, lbl_8087EFB0
    bl fn_800A96AC
    stw r3, 0x45c(r29)
    mr r4, r3
    addi r3, r29, 0x460
    clrlwi r5, r31, 16
    clrlwi r6, r30, 16
    li r7, 0x4
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80880F7C
    addi r3, r29, 0x460
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    lwz r4, lbl_8087EFB4
    addi r3, r29, 0x480
    clrlwi r5, r31, 16
    clrlwi r6, r30, 16
    lwz r4, 0x79c(r4)
    li r7, 0x3
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80880F7C
    addi r3, r29, 0x480
    li r4, 0x0
    li r5, 0x0
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    lwz r3, lbl_8087EFB4
    lwz r0, 0x268(r29)
    stw r0, 0x104(r3)
    lwz r0, 0x26c(r29)
    stw r0, 0x108(r3)
    lfs f2, 0x278(r29)
    psq_l f1, 0x270(r29), 0, 0
    psq_st f1, 0x10c(r3), 0, 0
    stfs f2, 0x114(r3)
    lfs f2, 0x284(r29)
    psq_l f1, 0x27c(r29), 0, 0
    psq_st f1, 0x118(r3), 0, 0
    stfs f2, 0x120(r3)
    lfs f2, 0x290(r29)
    psq_l f1, 0x288(r29), 0, 0
    psq_st f1, 0x124(r3), 0, 0
    stfs f2, 0x12c(r3)
    lfs f2, 0x29c(r29)
    psq_l f1, 0x294(r29), 0, 0
    psq_st f1, 0x130(r3), 0, 0
    stfs f2, 0x138(r3)
    lfs f0, 0x2a0(r29)
    stfs f0, 0x13c(r3)
    lfs f0, 0x2a4(r29)
    stfs f0, 0x140(r3)
    lfs f0, 0x2a8(r29)
    stfs f0, 0x144(r3)
    lfs f0, 0x2ac(r29)
    stfs f0, 0x148(r3)
    lfs f0, 0x2b0(r29)
    stfs f0, 0x14c(r3)
    lfs f0, 0x2b4(r29)
    stfs f0, 0x150(r3)
    lfs f0, 0x2b8(r29)
    stfs f0, 0x154(r3)
    lfs f0, 0x2bc(r29)
    stfs f0, 0x158(r3)
    psq_l f2, 0x2c8(r29), 0, 0
    psq_l f3, 0x2d0(r29), 0, 0
    psq_l f4, 0x2d8(r29), 0, 0
    psq_l f5, 0x2e0(r29), 0, 0
    psq_l f6, 0x2e8(r29), 0, 0
    psq_l f1, 0x2c0(r29), 0, 0
    psq_st f1, 0x15c(r3), 0, 0
    psq_st f2, 0x164(r3), 0, 0
    psq_st f3, 0x16c(r3), 0, 0
    psq_st f4, 0x174(r3), 0, 0
    psq_st f5, 0x17c(r3), 0, 0
    psq_st f6, 0x184(r3), 0, 0
    psq_l f2, 0x2f8(r29), 0, 0
    psq_l f3, 0x300(r29), 0, 0
    psq_l f4, 0x308(r29), 0, 0
    psq_l f5, 0x310(r29), 0, 0
    psq_l f6, 0x318(r29), 0, 0
    psq_l f7, 0x320(r29), 0, 0
    psq_l f8, 0x328(r29), 0, 0
    psq_l f1, 0x2f0(r29), 0, 0
    psq_st f1, 0x18c(r3), 0, 0
    psq_st f2, 0x194(r3), 0, 0
    psq_st f3, 0x19c(r3), 0, 0
    psq_st f4, 0x1a4(r3), 0, 0
    psq_st f5, 0x1ac(r3), 0, 0
    psq_st f6, 0x1b4(r3), 0, 0
    psq_st f7, 0x1bc(r3), 0, 0
    psq_st f8, 0x1c4(r3), 0, 0
    lfs f0, 0x330(r29)
    addi r4, r3, 0x204
    stfs f0, 0x1cc(r3)
    addi r5, r29, 0x368
    addi r7, r4, 0x94
    addi r0, r4, 0xf4
    lfs f0, 0x334(r29)
    addi r6, r5, 0x94
    stfs f0, 0x1d0(r3)
    psq_l f2, 0x340(r29), 0, 0
    psq_l f3, 0x348(r29), 0, 0
    psq_l f4, 0x350(r29), 0, 0
    psq_l f5, 0x358(r29), 0, 0
    psq_l f6, 0x360(r29), 0, 0
    psq_l f1, 0x338(r29), 0, 0
    psq_st f1, 0x1d4(r3), 0, 0
    psq_st f2, 0x1dc(r3), 0, 0
    psq_st f3, 0x1e4(r3), 0, 0
    psq_st f4, 0x1ec(r3), 0, 0
    psq_st f5, 0x1f4(r3), 0, 0
    psq_st f6, 0x1fc(r3), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    lwz r3, 0x398(r29)
    stw r3, 0x30(r4)
    lfs f0, 0x39c(r29)
    stfs f0, 0x34(r4)
    lfs f0, 0x3a0(r29)
    stfs f0, 0x38(r4)
    lfs f2, 0x3ac(r29)
    psq_l f1, 0x3c(r5), 0, 0
    psq_st f1, 0x3c(r4), 0, 0
    stfs f2, 0x44(r4)
    lfs f0, 0x3b0(r29)
    stfs f0, 0x48(r4)
    lfs f2, 0x3bc(r29)
    psq_l f1, 0x4c(r5), 0, 0
    psq_st f1, 0x4c(r4), 0, 0
    stfs f2, 0x54(r4)
    lfs f0, 0x3c0(r29)
    stfs f0, 0x58(r4)
    lfs f2, 0x3cc(r29)
    psq_l f1, 0x5c(r5), 0, 0
    psq_st f1, 0x5c(r4), 0, 0
    stfs f2, 0x64(r4)
    lfs f0, 0x3d0(r29)
    stfs f0, 0x68(r4)
    lfs f2, 0x3dc(r29)
    psq_l f1, 0x6c(r5), 0, 0
    psq_st f1, 0x6c(r4), 0, 0
    stfs f2, 0x74(r4)
    lfs f0, 0x3e0(r29)
    stfs f0, 0x78(r4)
    lfs f2, 0x3ec(r29)
    psq_l f1, 0x7c(r5), 0, 0
    psq_st f1, 0x7c(r4), 0, 0
    stfs f2, 0x84(r4)
    lfs f2, 0x3f8(r29)
    psq_l f1, 0x88(r5), 0, 0
    psq_st f1, 0x88(r4), 0, 0
    stfs f2, 0x90(r4)
lbl_fn_800B8964_00001C18:
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    lfs f0, 0xc(r6)
    addi r6, r6, 0x10
    stfs f0, 0xc(r7)
    addi r7, r7, 0x10
    cmplw r7, r0
    blt lbl_fn_800B8964_00001C18
    lwz r28, lbl_8087EEE0
    mr r3, r28
    bl fn_80071E04
    mr r3, r28
    li r4, 0x6
    li r5, 0x2
    bl fn_80076760
    mr r3, r28
    addi r4, r29, 0x2f0
    bl fn_80071D74
    mr r3, r28
    li r4, 0x8
    li r5, 0x1
    bl fn_80076760
    mr r3, r28
    li r4, 0x9
    li r5, 0x2
    bl fn_80076760
    mr r3, r28
    li r4, 0xa
    li r5, 0x1
    bl fn_80076760
    lwz r5, lbl_8087EFA8
    lis r4, lbl_80732ED0@ha
    lfs f1, lbl_80880F7C
    lwz r3, 0x158(r5)
    lwz r0, 0x15c(r5)
    fmr f2, f1
    xoris r3, r3, 0x8000
    stw r3, 0x3c(r1)
    xoris r0, r0, 0x8000
    lfd f10, lbl_80732ED0@l(r4)
    stw r0, 0x44(r1)
    lfd f9, 0x38(r1)
    fmr f5, f1
    lfd f0, 0x40(r1)
    fsubs f3, f9, f10
    lfs f6, lbl_80880F84
    fsubs f4, f0, f10
    bl fn_80618570
    lwz r4, lbl_8087EEE0
    lis r5, lbl_80732ED8@ha
    lfs f11, lbl_80880F7C
    lis r28, 0x100
    lwz r6, 0x48(r4)
    addi r3, r1, 0x14
    lfs f30, lbl_80880FA0
    extrwi r0, r6, 8, 8
    stw r0, 0x3c(r1)
    extrwi r0, r6, 8, 16
    fmuls f0, f30, f11
    stw r0, 0x44(r1)
    clrlwi r4, r6, 24
    lfd f12, 0x38(r1)
    srwi r0, r6, 24
    lfd f27, 0x40(r1)
    stw r4, 0x3c(r1)
    fctiwz f9, f0
    lfd f31, lbl_80732ED8@l(r5)
    subi r4, r28, 0x1
    lfd f13, 0x38(r1)
    lfs f10, lbl_80880F84
    fsubs f26, f12, f31
    stw r0, 0x44(r1)
    fsubs f27, f27, f31
    lfs f29, lbl_80880F9C
    fsubs f13, f13, f31
    lfd f12, 0x40(r1)
    fmuls f26, f29, f26
    stfd f9, 0x68(r1)
    fsubs f12, f12, f31
    fmuls f0, f30, f10
    stfd f9, 0x70(r1)
    fmuls f27, f29, f27
    fmuls f28, f29, f13
    stfd f9, 0x78(r1)
    fmuls f29, f29, f12
    fctiwz f0, f0
    lwz r7, 0x6c(r1)
    fmuls f13, f30, f27
    fmuls f12, f30, f28
    stfd f0, 0x80(r1)
    fmuls f31, f30, f26
    fctiwz f13, f13
    lwz r6, 0x74(r1)
    fctiwz f12, f12
    fctiwz f0, f31
    lwz r5, 0x7c(r1)
    lwz r0, 0x84(r1)
    stfd f0, 0x48(r1)
    fmuls f9, f30, f29
    stfd f13, 0x50(r1)
    fctiwz f0, f9
    lwz r11, 0x4c(r1)
    stfd f12, 0x58(r1)
    lwz r10, 0x54(r1)
    stfd f0, 0x60(r1)
    lwz r9, 0x5c(r1)
    lwz r8, 0x64(r1)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stfs f26, 0x28(r1)
    stfs f27, 0x2c(r1)
    stfs f28, 0x30(r1)
    stfs f29, 0x34(r1)
    stb r11, 0xc(r1)
    stb r10, 0xd(r1)
    stb r9, 0xe(r1)
    stb r8, 0xf(r1)
    stfs f11, 0x18(r1)
    stfs f11, 0x1c(r1)
    stfs f11, 0x20(r1)
    stfs f10, 0x24(r1)
    stw r0, 0x14(r1)
    bl fn_80615190
    clrlwi r5, r31, 16
    clrlwi r6, r30, 16
    li r3, 0x0
    li r4, 0x0
    bl fn_80614CC0
    extrwi r3, r31, 15, 16
    extrwi r4, r30, 15, 16
    li r5, 0x4
    li r6, 0x1
    bl fn_80614D30
    lwz r3, 0x45c(r29)
    li r4, 0x1
    bl fn_80615560
    lwz r0, 0xc(r1)
    addi r3, r1, 0x10
    stw r0, 0x10(r1)
    subi r4, r28, 0x1
    bl fn_80615190
    lwz r0, 0x104(r1)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    psq_l f29, 0xd8(r1), 0, 0
    lfd f29, 0xd0(r1)
    psq_l f28, 0xc8(r1), 0, 0
    lfd f28, 0xc0(r1)
    psq_l f27, 0xb8(r1), 0, 0
    lfd f27, 0xb0(r1)
    psq_l f26, 0xa8(r1), 0, 0
    lfd f26, 0xa0(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    lwz r28, 0x90(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_800B8F40(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    addi r11, r1, 0x150
    stfd f31, 0x170(r1)
    psq_st f31, 0x178(r1), 0, 0
    stfd f30, 0x160(r1)
    psq_st f30, 0x168(r1), 0, 0
    stfd f29, 0x150(r1)
    psq_st f29, 0x158(r1), 0, 0
    bl _savegpr_27
    lwz r4, lbl_8087EFA8
    lis r0, 0x4330
    mr r31, r3
    stw r0, 0x128(r1)
    lwz r3, 0x134(r4)
    stw r0, 0x130(r1)
    cmpwi r3, 0x0
    lwz r30, 0x158(r4)
    lwz r29, 0x15c(r4)
    bne lbl_fn_800B8F40_00001F64
    lwz r4, lbl_8087EFB4
    clrlwi r5, r30, 16
    clrlwi r6, r29, 16
    li r3, 0x0
    lwz r27, 0x79c(r4)
    li r4, 0x0
    bl fn_80614CC0
    clrlwi r3, r30, 16
    clrlwi r4, r29, 16
    li r5, 0x13
    li r6, 0x0
    bl fn_80614D30
    mr r3, r27
    li r4, 0x0
    bl fn_80615560
    mr r4, r27
    addi r3, r31, 0x480
    clrlwi r5, r30, 16
    clrlwi r6, r29, 16
    li r7, 0x3
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
lbl_fn_800B8F40_00001F64:
    clrlwi r5, r30, 16
    clrlwi r6, r29, 16
    li r3, 0x0
    li r4, 0x0
    bl fn_80614CC0
    extrwi r3, r30, 15, 16
    extrwi r4, r29, 15, 16
    li r5, 0x4
    li r6, 0x1
    bl fn_80614D30
    lwz r3, 0x45c(r31)
    li r4, 0x1
    bl fn_80615560
    srwi r3, r30, 31
    srwi r0, r29, 31
    add r5, r3, r30
    lwz r4, 0x45c(r31)
    add r0, r0, r29
    addi r3, r31, 0x460
    extrwi r5, r5, 16, 15
    li r7, 0x4
    extrwi r6, r0, 16, 15
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    bl fn_80614190
    li r0, 0x0
    stb r0, lbl_8087EFB0
    lwz r3, lbl_8087EEE0
    bl fn_80075DEC
    li r3, 0x1
    bl fn_80617DA0
    lwz r3, lbl_8087EFB4
    lwz r0, 0x74(r31)
    stw r0, 0x104(r3)
    lwz r0, 0x78(r31)
    stw r0, 0x108(r3)
    lfs f2, 0x84(r31)
    psq_l f1, 0x7c(r31), 0, 0
    psq_st f1, 0x10c(r3), 0, 0
    stfs f2, 0x114(r3)
    lfs f2, 0x90(r31)
    psq_l f1, 0x88(r31), 0, 0
    psq_st f1, 0x118(r3), 0, 0
    stfs f2, 0x120(r3)
    lfs f2, 0x9c(r31)
    psq_l f1, 0x94(r31), 0, 0
    psq_st f1, 0x124(r3), 0, 0
    stfs f2, 0x12c(r3)
    lfs f2, 0xa8(r31)
    psq_l f1, 0xa0(r31), 0, 0
    psq_st f1, 0x130(r3), 0, 0
    stfs f2, 0x138(r3)
    lfs f0, 0xac(r31)
    stfs f0, 0x13c(r3)
    lfs f0, 0xb0(r31)
    stfs f0, 0x140(r3)
    lfs f0, 0xb4(r31)
    stfs f0, 0x144(r3)
    lfs f0, 0xb8(r31)
    stfs f0, 0x148(r3)
    lfs f0, 0xbc(r31)
    stfs f0, 0x14c(r3)
    lfs f0, 0xc0(r31)
    stfs f0, 0x150(r3)
    lfs f0, 0xc4(r31)
    stfs f0, 0x154(r3)
    lfs f0, 0xc8(r31)
    stfs f0, 0x158(r3)
    psq_l f2, 0xd4(r31), 0, 0
    psq_l f3, 0xdc(r31), 0, 0
    psq_l f4, 0xe4(r31), 0, 0
    psq_l f5, 0xec(r31), 0, 0
    psq_l f6, 0xf4(r31), 0, 0
    psq_l f1, 0xcc(r31), 0, 0
    psq_st f1, 0x15c(r3), 0, 0
    psq_st f2, 0x164(r3), 0, 0
    psq_st f3, 0x16c(r3), 0, 0
    psq_st f4, 0x174(r3), 0, 0
    psq_st f5, 0x17c(r3), 0, 0
    psq_st f6, 0x184(r3), 0, 0
    psq_l f2, 0x104(r31), 0, 0
    psq_l f3, 0x10c(r31), 0, 0
    psq_l f4, 0x114(r31), 0, 0
    psq_l f5, 0x11c(r31), 0, 0
    psq_l f6, 0x124(r31), 0, 0
    psq_l f7, 0x12c(r31), 0, 0
    psq_l f8, 0x134(r31), 0, 0
    psq_l f1, 0xfc(r31), 0, 0
    psq_st f1, 0x18c(r3), 0, 0
    psq_st f2, 0x194(r3), 0, 0
    psq_st f3, 0x19c(r3), 0, 0
    psq_st f4, 0x1a4(r3), 0, 0
    psq_st f5, 0x1ac(r3), 0, 0
    psq_st f6, 0x1b4(r3), 0, 0
    psq_st f7, 0x1bc(r3), 0, 0
    psq_st f8, 0x1c4(r3), 0, 0
    lfs f0, 0x13c(r31)
    addi r4, r3, 0x204
    stfs f0, 0x1cc(r3)
    addi r5, r31, 0x174
    addi r7, r4, 0x94
    addi r0, r4, 0xf4
    lfs f0, 0x140(r31)
    addi r6, r5, 0x94
    stfs f0, 0x1d0(r3)
    psq_l f2, 0x14c(r31), 0, 0
    psq_l f3, 0x154(r31), 0, 0
    psq_l f4, 0x15c(r31), 0, 0
    psq_l f5, 0x164(r31), 0, 0
    psq_l f6, 0x16c(r31), 0, 0
    psq_l f1, 0x144(r31), 0, 0
    psq_st f1, 0x1d4(r3), 0, 0
    psq_st f2, 0x1dc(r3), 0, 0
    psq_st f3, 0x1e4(r3), 0, 0
    psq_st f4, 0x1ec(r3), 0, 0
    psq_st f5, 0x1f4(r3), 0, 0
    psq_st f6, 0x1fc(r3), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    lwz r3, 0x1a4(r31)
    stw r3, 0x30(r4)
    lfs f0, 0x1a8(r31)
    stfs f0, 0x34(r4)
    lfs f0, 0x1ac(r31)
    stfs f0, 0x38(r4)
    lfs f2, 0x1b8(r31)
    psq_l f1, 0x3c(r5), 0, 0
    psq_st f1, 0x3c(r4), 0, 0
    stfs f2, 0x44(r4)
    lfs f0, 0x1bc(r31)
    stfs f0, 0x48(r4)
    lfs f2, 0x1c8(r31)
    psq_l f1, 0x4c(r5), 0, 0
    psq_st f1, 0x4c(r4), 0, 0
    stfs f2, 0x54(r4)
    lfs f0, 0x1cc(r31)
    stfs f0, 0x58(r4)
    lfs f2, 0x1d8(r31)
    psq_l f1, 0x5c(r5), 0, 0
    psq_st f1, 0x5c(r4), 0, 0
    stfs f2, 0x64(r4)
    lfs f0, 0x1dc(r31)
    stfs f0, 0x68(r4)
    lfs f2, 0x1e8(r31)
    psq_l f1, 0x6c(r5), 0, 0
    psq_st f1, 0x6c(r4), 0, 0
    stfs f2, 0x74(r4)
    lfs f0, 0x1ec(r31)
    stfs f0, 0x78(r4)
    lfs f2, 0x1f8(r31)
    psq_l f1, 0x7c(r5), 0, 0
    psq_st f1, 0x7c(r4), 0, 0
    stfs f2, 0x84(r4)
    lfs f2, 0x204(r31)
    psq_l f1, 0x88(r5), 0, 0
    psq_st f1, 0x88(r4), 0, 0
    stfs f2, 0x90(r4)
lbl_fn_800B8F40_00002208:
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    lfs f0, 0xc(r6)
    addi r6, r6, 0x10
    stfs f0, 0xc(r7)
    addi r7, r7, 0x10
    cmplw r7, r0
    blt lbl_fn_800B8F40_00002208
    lwz r3, lbl_8087EFA8
    lwz r0, 0x12c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800B8F40_00002344
    lwz r3, lbl_8087EEE0
    lis r30, lbl_80732ED0@ha
    lfd f31, lbl_80732ED0@l(r30)
    addi r5, r31, 0x480
    lwz r28, 0x40(r3)
    li r4, -0x1
    lwz r29, 0x3c(r3)
    li r6, 0x0
    srawi r3, r28, 2
    xoris r0, r28, 0x8000
    addze r8, r3
    xoris r7, r29, 0x8000
    srawi r3, r29, 2
    lfs f10, lbl_80880FA4
    addze r3, r3
    subf r27, r8, r28
    subf r3, r3, r29
    lfs f11, lbl_80880FA8
    xoris r3, r3, 0x8000
    stw r3, 0x12c(r1)
    xoris r3, r27, 0x8000
    lfs f9, lbl_80880F98
    lfd f0, 0x128(r1)
    stw r3, 0x134(r1)
    fsubs f13, f0, f31
    lwz r3, lbl_8087EEB0
    lfd f0, 0x130(r1)
    stw r7, 0x12c(r1)
    fsubs f12, f0, f31
    lfs f3, lbl_80880F7C
    stw r0, 0x134(r1)
    fsubs f1, f13, f10
    lfd f10, 0x128(r1)
    lfd f0, 0x130(r1)
    fsubs f10, f10, f31
    fsubs f0, f0, f31
    fsubs f2, f12, f11
    fmuls f4, f10, f9
    fmuls f5, f0, f9
    bl fn_8005DF90
    xoris r0, r27, 0x8000
    stw r0, 0x12c(r1)
    xoris r3, r29, 0x8000
    fmr f13, f31
    lfd f0, 0x128(r1)
    xoris r0, r28, 0x8000
    stw r3, 0x134(r1)
    addi r5, r31, 0x460
    fsubs f12, f0, f13
    stw r0, 0x12c(r1)
    li r4, -0x1
    lfd f9, 0x130(r1)
    li r6, 0x0
    lfd f0, 0x128(r1)
    fsubs f10, f9, f13
    lfs f11, lbl_80880FA8
    lfs f9, lbl_80880F98
    fsubs f0, f0, f13
    fsubs f2, f12, f11
    lwz r3, lbl_8087EEB0
    fmuls f4, f10, f9
    lfs f1, lbl_80880FA4
    fmuls f5, f0, f9
    lfs f3, lbl_80880F7C
    bl fn_8005DF90
lbl_fn_800B8F40_00002344:
    lfs f9, lbl_80880F7C
    addi r3, r1, 0xf8
    lfs f0, lbl_80880F84
    lfs f5, lbl_80880F78
    stfs f9, 0x124(r1)
    fmr f7, f5
    lfs f6, lbl_80880FAC
    stfs f9, 0x11c(r1)
    fmr f8, f5
    stfs f9, 0x118(r1)
    stfs f9, 0x114(r1)
    stfs f9, 0x110(r1)
    stfs f9, 0x108(r1)
    stfs f9, 0x104(r1)
    stfs f9, 0x100(r1)
    stfs f9, 0xfc(r1)
    stfs f0, 0x120(r1)
    stfs f0, 0x10c(r1)
    stfs f0, 0xf8(r1)
    lfs f4, 0x2b0(r31)
    lfs f3, 0x2ac(r31)
    lfs f2, 0x2a8(r31)
    lfs f1, 0x2a4(r31)
    bl fn_800D5E18
    lfs f0, 0x334(r31)
    addi r3, r1, 0xc8
    lfs f31, 0x330(r31)
    li r4, 0x0
    lfs f29, lbl_80880FB0
    li r5, 0x30
    fsubs f30, f0, f31
    bl memset
    fneg f9, f31
    lfs f10, lbl_80880F8C
    lfs f0, lbl_80880F84
    addi r3, r31, 0x2c0
    fdivs f10, f10, f30
    stfs f0, 0xf4(r1)
    addi r4, r31, 0x144
    addi r5, r1, 0x68
    stfs f10, 0xd0(r1)
    fdivs f0, f9, f30
    stfs f0, 0xd4(r1)
    fmuls f9, f10, f29
    fmuls f0, f0, f29
    stfs f9, 0xe0(r1)
    stfs f0, 0xe4(r1)
    bl fn_805F89F0
    addi r3, r1, 0xc8
    addi r4, r1, 0x68
    addi r5, r1, 0x98
    bl fn_805F89F0
    addi r6, r1, 0x98
    addi r3, r31, 0x2c0
    psq_l f1, 0x0(r6), 0, 0
    addi r4, r31, 0x144
    psq_l f2, 0x8(r6), 0, 0
    addi r5, r1, 0x8
    psq_l f3, 0x10(r6), 0, 0
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f6, 0x4c8(r31), 0, 0
    psq_st f1, 0x4a0(r31), 0, 0
    psq_st f2, 0x4a8(r31), 0, 0
    psq_st f3, 0x4b0(r31), 0, 0
    psq_st f4, 0x4b8(r31), 0, 0
    psq_st f5, 0x4c0(r31), 0, 0
    bl fn_805F89F0
    addi r3, r1, 0xf8
    addi r4, r1, 0x8
    addi r5, r1, 0x38
    bl fn_805F89F0
    addi r3, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x4f8(r31), 0, 0
    psq_st f1, 0x4d0(r31), 0, 0
    psq_st f2, 0x4d8(r31), 0, 0
    psq_st f3, 0x4e0(r31), 0, 0
    psq_st f4, 0x4e8(r31), 0, 0
    psq_st f5, 0x4f0(r31), 0, 0
    psq_l f31, 0x178(r1), 0, 0
    lfd f31, 0x170(r1)
    psq_l f30, 0x168(r1), 0, 0
    lfd f30, 0x160(r1)
    psq_l f29, 0x158(r1), 0, 0
    lfd f29, 0x150(r1)
    addi r11, r1, 0x150
    bl _restgpr_27
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}
