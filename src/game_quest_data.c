#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8004D314(void);
extern void fn_8004D388(void);
extern void fn_8004ECC0(void);
extern void fn_8004ED34(void);
extern void fn_80084320(void);
extern void fn_80097C08(void);
extern void fn_80097D40(void);
extern void fn_800A08D4(void);
extern void fn_80125474(void);
extern void fn_8016E970(void);
extern void fn_801720AC(void);
extern void fn_801749EC(void);
extern void fn_80179D44(void);
extern void fn_801C8938(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80737390[];
extern u8 lbl_80737808[];
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077A720[];
extern u8 lbl_8077A974[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087FA20;
extern u32 lbl_80881964;
extern u32 lbl_8088196C;
extern u32 lbl_80881978;
extern u32 lbl_80881988;
extern u32 lbl_80881994;
extern u32 lbl_808819A0;
extern u32 lbl_808819A4;
extern u32 lbl_808819A8;
extern u32 lbl_808819B0;
extern u32 lbl_808819B8;
extern u32 lbl_808819C4;
extern u32 lbl_808819C8;
extern u32 lbl_808819CC;
extern u32 lbl_808819D4;
extern u32 lbl_808819F4;
extern u32 lbl_808819FC;
extern u32 lbl_80881A0C;
extern u32 lbl_80881A10;
extern u32 lbl_80881A14;
extern u32 lbl_80881A18;
extern u32 lbl_80881A1C;
extern u32 lbl_80881A20;
extern u32 lbl_80881A24;
extern u32 lbl_80881A28;
extern u32 lbl_80881A2C;
extern u32 lbl_80881A34;
extern u32 lbl_80881A38;
extern u32 lbl_80881A3C;
extern u32 lbl_80881A44;
extern u32 lbl_80881A50;
extern u32 lbl_80881A60;
extern u32 lbl_80881A64;
extern u32 lbl_80881A68;
extern u32 lbl_80881A6C;
extern u32 lbl_80881A70;

/* Function declarations */
void fn_801426A4(void);
void fn_801437D0(void);

asm void fn_801426A4(void)
{
    nofralloc
    stwu r1, -0x2c0(r1)
    mflr r0
    fmr f6, f2
    stw r0, 0x2c4(r1)
    addi r6, r1, 0x12c
    stfd f31, 0x2b0(r1)
    psq_st f31, 0x2b8(r1), 0, 0
    stfd f30, 0x2a0(r1)
    psq_st f30, 0x2a8(r1), 0, 0
    lfs f30, lbl_8088196C
    stfd f29, 0x290(r1)
    psq_st f29, 0x298(r1), 0, 0
    fmr f29, f1
    stfd f28, 0x280(r1)
    psq_st f28, 0x288(r1), 0, 0
    stfd f27, 0x270(r1)
    psq_st f27, 0x278(r1), 0, 0
    stw r31, 0x26c(r1)
    stw r30, 0x268(r1)
    lis r30, lbl_8077A720@ha
    addi r30, r30, lbl_8077A720@l
    stw r29, 0x264(r1)
    mr r29, r3
    stw r28, 0x260(r1)
    lwz r5, lbl_8087EFA8
    lfs f3, 0x400(r3)
    lfs f0, 0x3a4(r5)
    addi r5, r1, 0x138
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    fmuls f31, f0, f3
    stfs f2, 0x140(r1)
    lfs f3, lbl_80881A18
    psq_st f1, 0x0(r5), 0, 0
    lfs f0, lbl_80881A1C
    lfs f4, 0x570(r3)
    psq_l f1, 0x534(r3), 0, 0
    fmuls f3, f4, f3
    lfs f2, 0x53c(r3)
    psq_st f1, 0x0(r6), 0, 0
    lfs f4, 0x4(r4)
    fcmpo cr0, f3, f0
    stfs f2, 0x134(r1)
    stfs f4, 0x130(r1)
    stfs f3, 0x570(r3)
    bge lbl_fn_801426A4_000000BC
    stfs f30, 0x570(r3)
lbl_fn_801426A4_000000BC:
    lfs f0, lbl_80881964
    fcmpo cr0, f29, f0
    ble lbl_fn_801426A4_000000CC
    fmr f29, f0
lbl_fn_801426A4_000000CC:
    lfs f0, lbl_808819A0
    fcmpo cr0, f29, f0
    ble lbl_fn_801426A4_00000104
    fsubs f5, f29, f0
    lfs f4, lbl_808819A4
    lfs f3, lbl_80881A20
    lfs f0, lbl_8088196C
    fdivs f29, f5, f4
    fmuls f29, f29, f6
    fmuls f29, f29, f3
    fcmpo cr0, f29, f0
    bge lbl_fn_801426A4_000002F4
    fmr f29, f0
    b lbl_fn_801426A4_000002F4
lbl_fn_801426A4_00000104:
    lfs f29, lbl_8088196C
    addi r3, r3, 0x574
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_808819C4
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_801426A4_000002F4
    psq_l f1, 0x574(r29), 0, 0
    addi r31, r1, 0x98
    lfs f2, 0x57c(r29)
    mr r3, r31
    stfs f2, 0xa0(r1)
    mr r4, r31
    psq_st f1, 0x0(r31), 0, 0
    bl fn_805F98D0
    lfs f2, 0xa0(r1)
    addi r28, r1, 0xa4
    psq_l f1, 0x0(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_808819C4
    psq_st f1, 0x0(r28), 0, 0
    frsp f3, f3
    stfs f2, 0xac(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801426A4_00000190
    lfs f3, 0xa4(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    ble lbl_fn_801426A4_00000184
    lfs f0, lbl_808819C8
    b lbl_fn_801426A4_00000188
lbl_fn_801426A4_00000184:
    lfs f0, lbl_808819CC
lbl_fn_801426A4_00000188:
    stfs f0, 0x78(r1)
    b lbl_fn_801426A4_000001A4
lbl_fn_801426A4_00000190:
    frsp f2, f2
    lfs f1, 0xa4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x78(r1)
lbl_fn_801426A4_000001A4:
    lfs f0, 0x78(r1)
    addi r3, r1, 0x168
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_8088196C
    addi r4, r1, 0x68
    lfs f27, 0x170(r1)
    mr r5, r4
    lfs f28, 0x16c(r1)
    addi r3, r1, 0x198
    lfs f13, 0x168(r1)
    lfs f12, 0x180(r1)
    lfs f11, 0x17c(r1)
    lfs f10, 0x178(r1)
    lfs f9, 0x190(r1)
    lfs f8, 0x18c(r1)
    lfs f7, 0x188(r1)
    lfs f6, 0x194(r1)
    lfs f5, 0x184(r1)
    lfs f4, 0x174(r1)
    lfs f0, lbl_80881964
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0xac(r1)
    stfs f3, 0x1c8(r1)
    stfs f3, 0x1cc(r1)
    stfs f3, 0x1d0(r1)
    stfs f0, 0x1d4(r1)
    stfs f13, 0x38(r1)
    stfs f28, 0x3c(r1)
    stfs f27, 0x40(r1)
    stfs f13, 0x198(r1)
    stfs f28, 0x19c(r1)
    stfs f27, 0x1a0(r1)
    stfs f10, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f12, 0x4c(r1)
    stfs f10, 0x1a8(r1)
    stfs f11, 0x1ac(r1)
    stfs f12, 0x1b0(r1)
    stfs f7, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f9, 0x58(r1)
    stfs f7, 0x1b8(r1)
    stfs f8, 0x1bc(r1)
    stfs f9, 0x1c0(r1)
    stfs f4, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f6, 0x64(r1)
    stfs f4, 0x1a4(r1)
    stfs f5, 0x1b4(r1)
    stfs f6, 0x1c4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F9750
    lfs f2, 0x70(r1)
    lfs f0, lbl_808819C4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801426A4_000002C0
    lfs f3, 0x6c(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    ble lbl_fn_801426A4_000002B0
    lfs f0, lbl_808819C8
    b lbl_fn_801426A4_000002B4
lbl_fn_801426A4_000002B0:
    lfs f0, lbl_808819CC
lbl_fn_801426A4_000002B4:
    fneg f0, f0
    stfs f0, 0x74(r1)
    b lbl_fn_801426A4_000002D4
lbl_fn_801426A4_000002C0:
    lfs f1, 0x6c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x74(r1)
lbl_fn_801426A4_000002D4:
    addi r3, r1, 0x74
    lfs f2, lbl_8088196C
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    lfs f0, 0xa8(r1)
    stfs f2, 0x7c(r1)
    stfs f2, 0xac(r1)
    stfs f0, 0x130(r1)
lbl_fn_801426A4_000002F4:
    lfs f3, lbl_808819FC
    lfs f0, lbl_808819A0
    lfs f5, 0x580(r29)
    fmuls f6, f3, f30
    lfs f3, lbl_80881988
    fmuls f4, f0, f5
    lfs f0, lbl_80881A1C
    fmsubs f3, f3, f6, f4
    fadds f3, f5, f3
    stfs f3, 0x580(r29)
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801426A4_00000334
    lfs f0, lbl_8088196C
    stfs f0, 0x580(r29)
lbl_fn_801426A4_00000334:
    lfs f3, lbl_80881A28
    mr r3, r29
    lfs f4, 0x570(r29)
    lfs f0, lbl_80881A24
    fmuls f3, f3, f4
    fmsubs f0, f0, f29, f3
    fadds f0, f4, f0
    stfs f0, 0x570(r29)
    lwz r12, 0x0(r29)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_808819FC
    lfs f4, lbl_80881964
    fmuls f0, f0, f31
    fcmpo cr0, f4, f0
    bge lbl_fn_801426A4_0000037C
    b lbl_fn_801426A4_00000380
lbl_fn_801426A4_0000037C:
    fmr f4, f0
lbl_fn_801426A4_00000380:
    lfs f0, lbl_808819FC
    lfs f3, 0x574(r29)
    fmuls f0, f0, f31
    lfs f5, lbl_80881964
    fnmsubs f3, f3, f4, f3
    fcmpo cr0, f5, f0
    stfs f3, 0x574(r29)
    bge lbl_fn_801426A4_000003A4
    b lbl_fn_801426A4_000003A8
lbl_fn_801426A4_000003A4:
    fmr f5, f0
lbl_fn_801426A4_000003A8:
    lfs f0, 0x57c(r29)
    lfs f1, 0x130(r1)
    fnmsubs f0, f0, f5, f0
    stfs f0, 0x57c(r29)
    bl fn_8068AD58
    frsp f4, f1
    lfs f3, 0x570(r29)
    lfs f0, lbl_8088196C
    lfs f1, 0x130(r1)
    fmuls f3, f3, f4
    stfs f0, 0x124(r1)
    stfs f3, 0x120(r1)
    bl fn_8068A850
    frsp f5, f1
    lfs f4, 0x570(r29)
    lfs f3, 0x120(r1)
    lfs f0, 0x124(r1)
    fmuls f5, f4, f5
    fmuls f4, f3, f31
    fmuls f3, f0, f31
    fmuls f0, f5, f31
    stfs f4, 0x120(r1)
    stfs f3, 0x124(r1)
    stfs f0, 0x128(r1)
    lwz r3, 0x958(r29)
    rlwinm r0, r3, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_801426A4_0000045C
    lwz r4, lbl_8087F0A8
    lis r0, 0x4330
    stw r0, 0x228(r1)
    lis r3, lbl_80737808@ha
    lwz r0, 0x30(r4)
    lfd f5, lbl_80737808@l(r3)
    mullw r0, r0, r0
    lfs f3, lbl_80881A2C
    lfs f0, 0x578(r29)
    xoris r0, r0, 0x8000
    stw r0, 0x22c(r1)
    lfd f4, 0x228(r1)
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fsubs f0, f0, f3
    stfs f0, 0x578(r29)
    b lbl_fn_801426A4_000004BC
lbl_fn_801426A4_0000045C:
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    beq lbl_fn_801426A4_000004BC
    lwz r0, 0x54c(r29)
    rlwinm r3, r0, 0, 10, 10
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    beq lbl_fn_801426A4_000004BC
    lwz r4, lbl_8087F0A8
    lis r0, 0x4330
    stw r0, 0x228(r1)
    lis r3, lbl_80737808@ha
    lwz r0, 0x30(r4)
    lfd f5, lbl_80737808@l(r3)
    mullw r0, r0, r0
    lfs f3, lbl_80881A2C
    lfs f0, 0x578(r29)
    xoris r0, r0, 0x8000
    stw r0, 0x22c(r1)
    lfd f4, 0x228(r1)
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x578(r29)
lbl_fn_801426A4_000004BC:
    lfs f4, 0x120(r1)
    lfs f3, 0x6b8(r29)
    lfs f0, lbl_80881A34
    fadds f3, f4, f3
    lfs f5, 0x124(r1)
    fmuls f0, f0, f31
    lfs f6, lbl_80881964
    stfs f3, 0x120(r1)
    lfs f4, 0x128(r1)
    lfs f3, 0x6bc(r29)
    fcmpo cr0, f6, f0
    fadds f3, f5, f3
    stfs f3, 0x124(r1)
    lfs f3, 0x6c0(r29)
    fadds f3, f4, f3
    stfs f3, 0x128(r1)
    bge lbl_fn_801426A4_00000504
    b lbl_fn_801426A4_00000508
lbl_fn_801426A4_00000504:
    fmr f6, f0
lbl_fn_801426A4_00000508:
    lfs f0, lbl_80881A34
    lfs f3, 0x6c0(r29)
    fmuls f0, f0, f31
    lfs f4, lbl_80881964
    fmuls f5, f3, f6
    fcmpo cr0, f4, f0
    bge lbl_fn_801426A4_00000528
    b lbl_fn_801426A4_0000052C
lbl_fn_801426A4_00000528:
    fmr f4, f0
lbl_fn_801426A4_0000052C:
    lfs f0, lbl_80881A34
    lfs f3, 0x6bc(r29)
    fmuls f0, f0, f31
    lfs f7, lbl_80881964
    fmuls f6, f3, f4
    fcmpo cr0, f7, f0
    bge lbl_fn_801426A4_0000054C
    b lbl_fn_801426A4_00000550
lbl_fn_801426A4_0000054C:
    fmr f7, f0
lbl_fn_801426A4_00000550:
    lfs f3, 0x6b8(r29)
    addi r3, r29, 0x6b8
    lfs f0, 0x6c0(r29)
    fmuls f7, f3, f7
    lfs f4, 0x6b8(r29)
    fsubs f3, f0, f5
    lfs f0, lbl_8088196C
    stfs f7, 0x8c(r1)
    fsubs f4, f4, f7
    stfs f6, 0x90(r1)
    stfs f5, 0x94(r1)
    stfs f4, 0x6b8(r29)
    stfs f3, 0x6c0(r29)
    stfs f0, 0x6bc(r29)
    bl fn_805F9940
    lfs f0, lbl_80881994
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    beq lbl_fn_801426A4_000005AC
    lfs f0, lbl_8088196C
    stfs f0, 0x6b8(r29)
    stfs f0, 0x6bc(r29)
    stfs f0, 0x6c0(r29)
lbl_fn_801426A4_000005AC:
    lfs f3, 0x120(r1)
    lfs f0, 0x574(r29)
    lfs f5, 0x124(r1)
    fadds f3, f3, f0
    lfs f0, lbl_80881A38
    lfs f4, 0x128(r1)
    stfs f3, 0x120(r1)
    lfs f3, 0x578(r29)
    fadds f3, f5, f3
    stfs f3, 0x124(r1)
    fcmpo cr0, f3, f0
    lfs f3, 0x57c(r29)
    fadds f3, f4, f3
    stfs f3, 0x128(r1)
    bge lbl_fn_801426A4_000005EC
    stfs f0, 0x124(r1)
lbl_fn_801426A4_000005EC:
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x80
    lfs f0, 0x530(r29)
    lfs f3, 0x114(r4)
    lfs f5, 0x110(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x10c(r4)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x84(r1)
    stfs f0, 0x80(r1)
    stfs f6, 0x88(r1)
    bl fn_805F9920
    lfs f0, lbl_80881A3C
    fcmpo cr0, f1, f0
    bge lbl_fn_801426A4_00000FF8
    lwz r0, 0x610(r29)
    cmpwi r0, 0x4
    ble lbl_fn_801426A4_000006E0
    addi r4, r1, 0x138
    lfs f2, 0x140(r1)
    addi r3, r1, 0x114
    psq_l f1, 0x0(r4), 0, 0
    addi r5, r1, 0x108
    psq_st f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x11c(r1)
    lfs f3, 0x10c(r1)
    stfs f2, 0x110(r1)
    lfs f0, 0x5b4(r29)
    fadds f0, f3, f0
    stfs f0, 0x10c(r1)
    lwz r0, 0x958(r29)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_801426A4_000006A4
    frsp f2, f2
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x11c(r1)
    lfs f2, 0x140(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x110(r1)
lbl_fn_801426A4_000006A4:
    lwz r28, lbl_8087EE98
    mr r3, r29
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r28
    addi r4, r1, 0xfc
    addi r5, r1, 0x108
    addi r6, r1, 0x114
    addi r8, r29, 0x5b8
    li r9, 0x0
    bl fn_8004ECC0
    cmpwi r3, 0x0
    beq lbl_fn_801426A4_000006E0
    lfs f0, 0x100(r1)
    stfs f0, 0x13c(r1)
lbl_fn_801426A4_000006E0:
    li r0, 0x0
    addi r4, r1, 0x138
    lfs f2, 0x140(r1)
    addi r3, r1, 0xf0
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r1, 0xe0
    stw r0, 0x20c(r1)
    addi r5, r1, 0x2c
    lfs f6, 0x140(r1)
    stw r0, 0x210(r1)
    lfs f5, 0x13c(r1)
    stw r0, 0x214(r1)
    lfs f3, 0x138(r1)
    stw r0, 0x218(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x614(r29), 0, 0
    stfs f2, 0xf8(r1)
    lfs f2, 0x61c(r29)
    stfs f2, 0xe8(r1)
    psq_st f1, 0x0(r4), 0, 0
    lfs f7, 0x620(r29)
    stfs f7, 0xec(r1)
    lfs f0, 0x5ac(r29)
    lfs f4, 0x5a8(r29)
    fadds f2, f6, f0
    lfs f0, 0x5a4(r29)
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f2, 0xe8(r1)
    stfs f0, 0x2c(r1)
    stfs f4, 0x30(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x958(r29)
    stfs f2, 0x34(r1)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_801426A4_00000788
    lfs f0, 0xe4(r1)
    fsubs f0, f0, f7
    stfs f0, 0xe4(r1)
    b lbl_fn_801426A4_00000794
lbl_fn_801426A4_00000788:
    lfs f0, 0xe4(r1)
    fadds f0, f0, f7
    stfs f0, 0xe4(r1)
lbl_fn_801426A4_00000794:
    mr r3, r29
    bl fn_80179D44
    lwz r0, 0x48(r29)
    mr r7, r3
    cmpwi r0, 0x0
    bne lbl_fn_801426A4_000007B4
    li r0, 0x1
    b lbl_fn_801426A4_000007F0
lbl_fn_801426A4_000007B4:
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_801426A4_000007EC
    lwz r0, 0x48(r4)
    cmpwi r0, 0x2
    bne lbl_fn_801426A4_000007EC
    lwz r0, 0x4c(r4)
    cmpwi r0, 0x19
    bne lbl_fn_801426A4_000007EC
    lwz r4, 0x50(r4)
    subi r0, r4, 0x2
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_801426A4_000007F0
lbl_fn_801426A4_000007EC:
    li r0, 0x0
lbl_fn_801426A4_000007F0:
    cmpwi r0, 0x0
    beq lbl_fn_801426A4_000007FC
    oris r7, r3, 0x200
lbl_fn_801426A4_000007FC:
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x1d8
    lfs f1, 0xec(r1)
    addi r5, r1, 0xe0
    addi r6, r1, 0x120
    addi r8, r29, 0x5b8
    li r9, 0x0
    bl fn_8004D388
    lwz r0, 0x54c(r29)
    mr r31, r3
    rlwinm r0, r0, 0, 22, 22
    cmplwi r0, 0x200
    bne lbl_fn_801426A4_00000868
    lfs f7, lbl_8088196C
    lfs f0, 0x13c(r1)
    lfs f6, 0x138(r1)
    fadds f4, f0, f7
    lfs f5, 0x120(r1)
    lfs f3, 0x140(r1)
    lfs f0, 0x128(r1)
    fadds f5, f6, f5
    stfs f7, 0x124(r1)
    fadds f0, f3, f0
    stfs f5, 0x138(r1)
    stfs f4, 0x13c(r1)
    stfs f0, 0x140(r1)
    b lbl_fn_801426A4_000008D8
lbl_fn_801426A4_00000868:
    addi r5, r1, 0x1e8
    lfs f2, 0x1f0(r1)
    addi r4, r1, 0x138
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x140(r1)
    lfs f4, 0x138(r1)
    lfs f0, 0x5a4(r29)
    lfs f3, 0x13c(r1)
    fsubs f0, f4, f0
    stfs f0, 0x138(r1)
    lfs f0, 0x5a8(r29)
    fsubs f3, f3, f0
    stfs f3, 0x13c(r1)
    lfs f0, 0x5ac(r29)
    fsubs f0, f2, f0
    stfs f0, 0x140(r1)
    lwz r0, 0x958(r29)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_801426A4_000008CC
    lfs f0, 0xec(r1)
    fadds f0, f3, f0
    stfs f0, 0x13c(r1)
    b lbl_fn_801426A4_000008D8
lbl_fn_801426A4_000008CC:
    lfs f0, 0xec(r1)
    fsubs f0, f3, f0
    stfs f0, 0x13c(r1)
lbl_fn_801426A4_000008D8:
    cmpwi r3, 0x0
    beq lbl_fn_801426A4_00000A08
    lwz r3, 0x214(r1)
    clrlwi r4, r3, 31
    cmplwi r4, 0x1
    bne lbl_fn_801426A4_000008F8
    lfs f0, lbl_8088196C
    stfs f0, 0x124(r1)
lbl_fn_801426A4_000008F8:
    lwz r0, 0x958(r29)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_801426A4_0000091C
    rlwinm r0, r3, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_801426A4_0000091C
    lfs f0, lbl_8088196C
    stfs f0, 0x124(r1)
lbl_fn_801426A4_0000091C:
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_801426A4_0000096C
    rlwinm r0, r3, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_801426A4_0000096C
    cmplwi r4, 0x1
    bne lbl_fn_801426A4_0000096C
    addi r3, r1, 0x120
    bl fn_805F9920
    lfs f0, lbl_80881994
    fcmpo cr0, f1, f0
    ble lbl_fn_801426A4_0000096C
    lwz r0, 0x958(r29)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_801426A4_0000096C
    lwz r0, 0x54c(r29)
    ori r0, r0, 0x100
    stw r0, 0x54c(r29)
lbl_fn_801426A4_0000096C:
    lwz r0, 0x214(r1)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_801426A4_000009A0
    lwz r0, 0x54c(r29)
    addi r4, r1, 0x21c
    addi r3, r29, 0x13a0
    oris r0, r0, 0x2
    stw r0, 0x54c(r29)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x224(r1)
    stfs f2, 0x13a8(r29)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_801426A4_000009A0:
    lwz r0, 0x214(r1)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_801426A4_000009D4
    lwz r0, 0x54c(r29)
    addi r4, r1, 0x21c
    addi r3, r29, 0x13a0
    oris r0, r0, 0x4
    stw r0, 0x54c(r29)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x224(r1)
    stfs f2, 0x13a8(r29)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_801426A4_000009D4:
    lwz r0, 0x214(r1)
    rlwinm r0, r0, 0, 22, 22
    cmplwi r0, 0x200
    bne lbl_fn_801426A4_00000A08
    lwz r0, 0x54c(r29)
    addi r4, r1, 0x21c
    addi r3, r29, 0x13a0
    oris r0, r0, 0x10
    stw r0, 0x54c(r29)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x224(r1)
    stfs f2, 0x13a8(r29)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_801426A4_00000A08:
    lwz r4, 0x20c(r1)
    li r3, 0x0
    li r0, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_801426A4_00000A2C
    lwz r4, 0x0(r4)
    cmplwi r4, 0x1a
    bne lbl_fn_801426A4_00000A2C
    li r0, 0x1
lbl_fn_801426A4_00000A2C:
    cmpwi r0, 0x0
    beq lbl_fn_801426A4_00000A4C
    lwz r0, 0x54c(r29)
    rlwinm r4, r0, 0, 5, 5
    subis r0, r4, 0x400
    cmplwi r0, 0x0
    beq lbl_fn_801426A4_00000A4C
    li r3, 0x1
lbl_fn_801426A4_00000A4C:
    lwz r0, 0x54c(r29)
    lwz r4, 0x12a4(r29)
    rlwimi r4, r3, 3, 28, 28
    rlwinm r3, r0, 0, 10, 10
    stw r4, 0x12a4(r29)
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    bne lbl_fn_801426A4_00000A74
    ori r0, r4, 0x8
    stw r0, 0x12a4(r29)
lbl_fn_801426A4_00000A74:
    lwz r3, 0x20c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_801426A4_00000A88
    lwz r0, 0x0(r3)
    b lbl_fn_801426A4_00000A8C
lbl_fn_801426A4_00000A88:
    li r0, -0x1
lbl_fn_801426A4_00000A8C:
    cmpwi r31, 0x0
    stw r0, 0x634(r29)
    li r28, 0x0
    beq lbl_fn_801426A4_00000AAC
    lwz r0, 0x214(r1)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_801426A4_00000B8C
lbl_fn_801426A4_00000AAC:
    lwz r0, 0x958(r29)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_801426A4_00000B8C
    lwz r0, 0x54c(r29)
    rlwinm r3, r0, 0, 10, 10
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    beq lbl_fn_801426A4_00000B8C
    lwz r3, 0x48(r29)
    li r0, 0x1
    cmpwi r3, 0x1
    beq lbl_fn_801426A4_00000AEC
    cmpwi r3, 0x4
    beq lbl_fn_801426A4_00000AEC
    li r0, 0x0
lbl_fn_801426A4_00000AEC:
    cmpwi r0, 0x0
    bne lbl_fn_801426A4_00000B8C
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801426A4_00000B8C
    addi r3, r1, 0x138
    lfs f2, 0x140(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0xd4
    addi r6, r1, 0xc8
    psq_st f1, 0x0(r5), 0, 0
    lfs f4, lbl_80881978
    addi r8, r29, 0x5b8
    psq_st f1, 0x0(r6), 0, 0
    li r4, 0x0
    lfs f5, 0xd8(r1)
    lis r7, 0x8000
    lfs f3, 0xcc(r1)
    li r9, 0x0
    lfs f0, lbl_80881A50
    fadds f4, f5, f4
    stfs f2, 0xdc(r1)
    fsubs f0, f3, f0
    lwz r3, lbl_8087EE98
    stfs f2, 0xd0(r1)
    stfs f4, 0xd8(r1)
    stfs f0, 0xcc(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_801426A4_00000B68
    li r28, 0x1
lbl_fn_801426A4_00000B68:
    lwz r0, 0x54c(r29)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801426A4_00000B8C
    lfs f3, 0xcc(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    bge lbl_fn_801426A4_00000B8C
    li r28, 0x0
lbl_fn_801426A4_00000B8C:
    cmpwi r28, 0x0
    beq lbl_fn_801426A4_00000C24
    lwz r3, 0x630(r29)
    addi r0, r3, 0x1
    stw r0, 0x630(r29)
    cmpwi r0, 0x1
    ble lbl_fn_801426A4_00000C64
    addi r3, r1, 0x138
    lfs f3, lbl_8088196C
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0xbc
    lfs f2, 0x140(r1)
    addi r6, r1, 0xb0
    lfs f0, lbl_80881A44
    li r4, 0x0
    psq_st f1, 0x0(r5), 0, 0
    lis r7, 0x8000
    lwz r3, lbl_8087EE98
    li r8, 0x0
    stfs f2, 0xc4(r1)
    li r9, 0x0
    lfs f1, lbl_80881978
    stfs f3, 0xb0(r1)
    stfs f0, 0xb4(r1)
    stfs f3, 0xb8(r1)
    bl fn_8004D314
    cmpwi r3, 0x0
    bne lbl_fn_801426A4_00000C18
    lwz r12, 0x0(r29)
    mr r3, r29
    addi r4, r1, 0x120
    lwz r12, 0x8c(r12)
    mtctr r12
    bctrl
    b lbl_fn_801426A4_00000C64
lbl_fn_801426A4_00000C18:
    li r0, 0x0
    stw r0, 0x630(r29)
    b lbl_fn_801426A4_00000C64
lbl_fn_801426A4_00000C24:
    cmpwi r31, 0x0
    li r0, 0x0
    stw r0, 0x630(r29)
    beq lbl_fn_801426A4_00000C64
    lwz r0, 0x214(r1)
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    beq lbl_fn_801426A4_00000C54
    lwz r3, lbl_8087F0A8
    lwz r0, 0x2c0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801426A4_00000C64
lbl_fn_801426A4_00000C54:
    mr r3, r29
    addi r4, r1, 0x138
    addi r5, r1, 0x120
    bl fn_801749EC
lbl_fn_801426A4_00000C64:
    li r0, 0x0
    stw r0, 0x610(r29)
    mr r3, r29
    addi r4, r1, 0x138
    addi r5, r1, 0x120
    bl fn_801720AC
    cmpwi r3, 0x0
    bne lbl_fn_801426A4_00001094
    lwz r0, 0x7e0(r29)
    rlwinm r3, r0, 0, 6, 6
    subis r0, r3, 0x200
    cmplwi r0, 0x0
    bne lbl_fn_801426A4_00001094
    lwz r3, 0x55c(r29)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_801426A4_00001094
    lwz r0, 0x54c(r29)
    rlwinm r3, r0, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_801426A4_00001094
    lwz r0, 0x12a4(r29)
    extrwi. r0, r0, 1, 28
    bne lbl_fn_801426A4_00001094
    addi r3, r29, 0x574
    bl fn_805F9920
    lfs f0, lbl_80881964
    fcmpo cr0, f1, f0
    bgt lbl_fn_801426A4_00000CEC
    lfs f3, 0x570(r29)
    lfs f0, lbl_808819A8
    fcmpo cr0, f3, f0
    ble lbl_fn_801426A4_00001094
lbl_fn_801426A4_00000CEC:
    lwz r3, 0x1208(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801426A4_00000D48
    lfs f0, lbl_8088196C
    li r31, 0x0
    li r0, 0x3
    stw r31, 0x14c(r1)
    addi r4, r1, 0x148
    stw r31, 0x150(r1)
    stw r31, 0x154(r1)
    stfs f0, 0x15c(r1)
    stfs f0, 0x160(r1)
    stfs f0, 0x164(r1)
    stw r0, 0x148(r1)
    stw r29, 0x158(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1208(r29)
    li r0, 0xff
    stb r0, 0x520(r3)
    stw r31, 0x1208(r29)
lbl_fn_801426A4_00000D48:
    lis r5, lbl_80737A9C@ha
    li r3, 0x18
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_801426A4_00000D84
    mr r4, r29
    li r5, 0x0
    bl fn_801C8938
    mr r31, r3
lbl_fn_801426A4_00000D84:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801426A4_00000E14
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801426A4_00000DBC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x230(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x234(r1)
    stw r0, 0x238(r1)
    b lbl_fn_801426A4_00000DD8
lbl_fn_801426A4_00000DBC:
    addi r3, r30, 0x230
    lwz r5, 0x230(r30)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x230(r1)
    stw r4, 0x234(r1)
    stw r0, 0x238(r1)
lbl_fn_801426A4_00000DD8:
    lwz r5, 0x230(r1)
    addi r3, r1, 0x20
    lwz r4, 0x234(r1)
    lwz r0, 0x238(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801426A4_00000E14
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801426A4_00000E14:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801426A4_00000FC8
    cmpwi r0, 0x8
    beq lbl_fn_801426A4_00000E2C
    stw r0, 0x564(r29)
lbl_fn_801426A4_00000E2C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801426A4_00000FC8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801426A4_00000E64
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x23c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x240(r1)
    stw r0, 0x244(r1)
    b lbl_fn_801426A4_00000E80
lbl_fn_801426A4_00000E64:
    addi r3, r30, 0x23c
    lwz r5, 0x23c(r30)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x23c(r1)
    stw r4, 0x240(r1)
    stw r0, 0x244(r1)
lbl_fn_801426A4_00000E80:
    lwz r5, 0x23c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x240(r1)
    lwz r0, 0x244(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801426A4_00000EBC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801426A4_00000EBC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801426A4_00000F98
    cmpwi r0, 0x8
    beq lbl_fn_801426A4_00000ED4
    stw r0, 0x564(r29)
lbl_fn_801426A4_00000ED4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801426A4_00000F98
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801426A4_00000F0C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x248(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x24c(r1)
    stw r0, 0x250(r1)
    b lbl_fn_801426A4_00000F28
lbl_fn_801426A4_00000F0C:
    addi r3, r30, 0x248
    lwz r5, 0x248(r30)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x248(r1)
    stw r4, 0x24c(r1)
    stw r0, 0x250(r1)
lbl_fn_801426A4_00000F28:
    lwz r5, 0x248(r1)
    addi r3, r1, 0x14
    lwz r4, 0x24c(r1)
    lwz r0, 0x250(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801426A4_00000F64
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801426A4_00000F64:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801426A4_00000F98
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801426A4_00000F98:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801426A4_00000FC8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801426A4_00000FC8:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r31, 0xf80(r29)
    beq lbl_fn_801426A4_000010E4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_801426A4_000010E4
lbl_fn_801426A4_00000FF8:
    lfs f0, lbl_8088196C
    addi r3, r29, 0xc64
    stfs f0, 0x124(r1)
    bl fn_80125474
    cmpwi r3, 0x0
    beq lbl_fn_801426A4_00001058
    addi r3, r1, 0x120
    bl fn_805F9940
    lfs f3, 0xcc4(r29)
    fmr f29, f1
    lfs f0, 0xcbc(r29)
    fmuls f3, f3, f3
    fmadds f1, f0, f0, f3
    bl fn_8068B100
    lfs f0, lbl_808819B8
    frsp f3, f1
    fcmpo cr0, f29, f0
    ble lbl_fn_801426A4_00001058
    fcmpo cr0, f3, f0
    ble lbl_fn_801426A4_00001058
    fdivs f3, f3, f29
    lfs f0, 0xcc0(r29)
    fdivs f0, f0, f3
    stfs f0, 0x124(r1)
lbl_fn_801426A4_00001058:
    lfs f3, 0x138(r1)
    lfs f0, 0x120(r1)
    lfs f5, 0x13c(r1)
    fadds f6, f3, f0
    lfs f4, 0x124(r1)
    lfs f3, 0x140(r1)
    lfs f0, 0x128(r1)
    fadds f4, f5, f4
    stfs f6, 0x138(r1)
    fadds f0, f3, f0
    stfs f4, 0x13c(r1)
    stfs f0, 0x140(r1)
    lwz r3, 0x610(r29)
    addi r0, r3, 0x1
    stw r0, 0x610(r29)
lbl_fn_801426A4_00001094:
    lwz r0, 0x54c(r29)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801426A4_000010BC
    lfs f3, 0x13c(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    bge lbl_fn_801426A4_000010BC
    stfs f0, 0x13c(r1)
    stfs f0, 0x124(r1)
lbl_fn_801426A4_000010BC:
    addi r3, r1, 0x138
    lfs f2, 0x140(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x120
    psq_st f1, 0x528(r29), 0, 0
    stfs f2, 0x530(r29)
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x128(r1)
    stfs f2, 0x57c(r29)
    psq_st f1, 0x574(r29), 0, 0
lbl_fn_801426A4_000010E4:
    lwz r0, 0x2c4(r1)
    psq_l f31, 0x2b8(r1), 0, 0
    lfd f31, 0x2b0(r1)
    psq_l f30, 0x2a8(r1), 0, 0
    lfd f30, 0x2a0(r1)
    psq_l f29, 0x298(r1), 0, 0
    lfd f29, 0x290(r1)
    psq_l f28, 0x288(r1), 0, 0
    lfd f28, 0x280(r1)
    psq_l f27, 0x278(r1), 0, 0
    lfd f27, 0x270(r1)
    lwz r31, 0x26c(r1)
    lwz r30, 0x268(r1)
    lwz r29, 0x264(r1)
    lwz r28, 0x260(r1)
    mtlr r0
    addi r1, r1, 0x2c0
    blr
}

asm void fn_801437D0(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    stfd f31, 0x1b0(r1)
    psq_st f31, 0x1b8(r1), 0, 0
    stfd f30, 0x1a0(r1)
    psq_st f30, 0x1a8(r1), 0, 0
    stfd f29, 0x190(r1)
    psq_st f29, 0x198(r1), 0, 0
    stfd f28, 0x180(r1)
    psq_st f28, 0x188(r1), 0, 0
    stfd f27, 0x170(r1)
    psq_st f27, 0x178(r1), 0, 0
    stfd f26, 0x160(r1)
    psq_st f26, 0x168(r1), 0, 0
    stfd f25, 0x150(r1)
    psq_st f25, 0x158(r1), 0, 0
    stw r31, 0x14c(r1)
    lis r31, lbl_80737390@ha
    addi r31, r31, lbl_80737390@l
    stw r30, 0x148(r1)
    mr r30, r3
    stw r29, 0x144(r1)
    stw r28, 0x140(r1)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    bne lbl_fn_801437D0_00001FEC
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_801437D0_00001230
    lwz r0, 0xf80(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801437D0_000011D0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x130(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x134(r1)
    stw r0, 0x138(r1)
    b lbl_fn_801437D0_000011EC
lbl_fn_801437D0_000011D0:
    lis r5, lbl_8077A974@ha
    lwzu r4, lbl_8077A974@l(r5)
    stw r4, 0x130(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x134(r1)
    stw r0, 0x138(r1)
lbl_fn_801437D0_000011EC:
    lwz r5, 0x130(r1)
    addi r3, r1, 0x68
    lwz r4, 0x134(r1)
    lwz r0, 0x138(r1)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    stw r0, 0x70(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801437D0_00001230
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_801437D0_00001FEC
lbl_fn_801437D0_00001230:
    lwz r3, 0x55c(r30)
    cmpwi r3, 0x9
    beq lbl_fn_801437D0_00001FEC
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_801437D0_0000124C
    b lbl_fn_801437D0_00001FEC
lbl_fn_801437D0_0000124C:
    cmpwi r3, 0x2
    bne lbl_fn_801437D0_00001274
    lha r3, 0xd3a(r30)
    subi r0, r3, 0x14
    clrlwi r0, r0, 16
    cmplwi r0, 0x2
    bgt lbl_fn_801437D0_00001274
    lhz r0, 0xd38(r30)
    extrwi. r0, r0, 1, 17
    beq lbl_fn_801437D0_00001FEC
lbl_fn_801437D0_00001274:
    lwz r4, lbl_8087EFA8
    lwz r3, 0x12a4(r30)
    lfs f0, 0x3a4(r4)
    lfs f3, 0x400(r30)
    extrwi. r0, r3, 1, 26
    fmuls f26, f0, f3
    bne lbl_fn_801437D0_00001298
    extrwi. r0, r3, 1, 27
    beq lbl_fn_801437D0_00001650
lbl_fn_801437D0_00001298:
    lfs f0, lbl_80881964
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0x574
    stfs f0, 0x2fc(r30)
    bl fn_805F9940
    lfs f3, 0x570(r30)
    fmr f31, f1
    lfs f0, lbl_808819F4
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    beq lbl_fn_801437D0_000012D0
    fcmpo cr0, f1, f0
    bgt lbl_fn_801437D0_00001300
lbl_fn_801437D0_000012D0:
    lwz r5, 0x4e8(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_8088196C
    li r4, 0x0
    lfs f2, lbl_80881994
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881964
    stfs f0, 0x2e8(r30)
    b lbl_fn_801437D0_00001FEC
lbl_fn_801437D0_00001300:
    lfs f3, lbl_8088196C
    addi r3, r1, 0x100
    lfs f0, lbl_80881964
    li r4, 0x79
    stfs f3, 0x80(r1)
    stfs f3, 0x84(r1)
    stfs f0, 0x88(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x80
    addi r3, r1, 0x100
    mr r5, r4
    bl fn_805F93C0
    psq_l f1, 0x574(r30), 0, 0
    addi r29, r1, 0x74
    lfs f2, 0x57c(r30)
    mr r3, r29
    stfs f2, 0x7c(r1)
    mr r4, r29
    psq_st f1, 0x0(r29), 0, 0
    bl fn_805F98D0
    mr r4, r29
    addi r3, r1, 0x80
    bl fn_805F9990
    fmr f26, f1
    lfd f1, 0x488(r31)
    bl fn_8068A850
    frsp f0, f1
    fcmpo cr0, f26, f0
    ble lbl_fn_801437D0_000013A0
    lwz r5, 0x4f0(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_8088196C
    li r4, 0x0
    lfs f2, lbl_80881994
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801437D0_00001618
lbl_fn_801437D0_000013A0:
    lfd f1, 0x490(r31)
    bl fn_8068A850
    frsp f0, f1
    fcmpo cr0, f26, f0
    ble lbl_fn_801437D0_000015F4
    lfs f2, 0x7c(r1)
    addi r28, r1, 0x5c
    psq_l f1, 0x0(r29), 0, 0
    fabs f3, f2
    lfs f0, lbl_808819C4
    psq_st f1, 0x0(r28), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801437D0_00001400
    lfs f3, 0x5c(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    ble lbl_fn_801437D0_000013F4
    lfs f0, lbl_808819C8
    b lbl_fn_801437D0_000013F8
lbl_fn_801437D0_000013F4:
    lfs f0, lbl_808819CC
lbl_fn_801437D0_000013F8:
    stfs f0, 0x48(r1)
    b lbl_fn_801437D0_00001414
lbl_fn_801437D0_00001400:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801437D0_00001414:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x90
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_8088196C
    addi r4, r1, 0x38
    lfs f27, 0x98(r1)
    mr r5, r4
    lfs f26, 0x94(r1)
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
    lfs f0, lbl_80881964
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xf0(r1)
    stfs f3, 0xf4(r1)
    stfs f3, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f13, 0x8(r1)
    stfs f26, 0xc(r1)
    stfs f27, 0x10(r1)
    stfs f13, 0xc0(r1)
    stfs f26, 0xc4(r1)
    stfs f27, 0xc8(r1)
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
    lfs f0, lbl_808819C4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801437D0_00001530
    lfs f3, 0x3c(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    ble lbl_fn_801437D0_00001520
    lfs f0, lbl_808819C8
    b lbl_fn_801437D0_00001524
lbl_fn_801437D0_00001520:
    lfs f0, lbl_808819CC
lbl_fn_801437D0_00001524:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801437D0_00001544
lbl_fn_801437D0_00001530:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801437D0_00001544:
    addi r3, r1, 0x44
    lfs f3, lbl_8088196C
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    fmr f2, f3
    lfs f0, 0x538(r30)
    lfs f4, 0x60(r1)
    stfs f2, 0x64(r1)
    fsubs f1, f4, f0
    lfd f2, 0x480(r31)
    stfs f3, 0x4c(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80881A0C
    fcmpo cr0, f3, f0
    ble lbl_fn_801437D0_0000158C
    lfs f0, lbl_80881A10
    fsubs f3, f3, f0
lbl_fn_801437D0_0000158C:
    lfs f0, lbl_80881A14
    fcmpo cr0, f3, f0
    bge lbl_fn_801437D0_000015A0
    lfs f0, lbl_80881A10
    fadds f3, f3, f0
lbl_fn_801437D0_000015A0:
    lfs f1, lbl_8088196C
    fcmpo cr0, f3, f1
    ble lbl_fn_801437D0_000015D0
    lwz r5, 0x4f8(r30)
    addi r3, r30, 0xb0
    lfs f2, lbl_80881994
    li r4, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801437D0_00001618
lbl_fn_801437D0_000015D0:
    lwz r5, 0x4fc(r30)
    addi r3, r30, 0xb0
    lfs f2, lbl_80881994
    li r4, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801437D0_00001618
lbl_fn_801437D0_000015F4:
    lwz r5, 0x4f4(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_8088196C
    li r4, 0x0
    lfs f2, lbl_80881994
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_801437D0_00001618:
    lwz r0, 0x64c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801437D0_0000162C
    lfs f3, lbl_808819B0
    b lbl_fn_801437D0_00001630
lbl_fn_801437D0_0000162C:
    lfs f3, lbl_80881A60
lbl_fn_801437D0_00001630:
    lfs f0, 0x50c(r30)
    fdivs f0, f31, f0
    fcmpo cr0, f3, f0
    bge lbl_fn_801437D0_00001644
    b lbl_fn_801437D0_00001648
lbl_fn_801437D0_00001644:
    fmr f3, f0
lbl_fn_801437D0_00001648:
    stfs f3, 0x2e8(r30)
    b lbl_fn_801437D0_00001FEC
lbl_fn_801437D0_00001650:
    lwz r0, 0x1208(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801437D0_00001704
    lfs f0, lbl_80881964
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0x574
    stfs f0, 0x2fc(r30)
    bl fn_805F9940
    lfs f3, 0x570(r30)
    fmr f26, f1
    lfs f0, lbl_808819F4
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    beq lbl_fn_801437D0_00001694
    fcmpo cr0, f1, f0
    bgt lbl_fn_801437D0_000016C4
lbl_fn_801437D0_00001694:
    lfs f1, lbl_8088196C
    addi r3, r30, 0xb0
    lfs f2, lbl_80881994
    li r4, 0x0
    li r5, 0x6d
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881964
    stfs f0, 0x2e8(r30)
    b lbl_fn_801437D0_000016F4
lbl_fn_801437D0_000016C4:
    lfs f1, lbl_8088196C
    addi r3, r30, 0xb0
    lfs f2, lbl_80881994
    li r4, 0x0
    li r5, 0x6e
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881988
    fdivs f0, f26, f0
    stfs f0, 0x2e8(r30)
lbl_fn_801437D0_000016F4:
    lwz r0, 0x54c(r30)
    rlwinm r0, r0, 0, 25, 23
    stw r0, 0x54c(r30)
    b lbl_fn_801437D0_00001FEC
lbl_fn_801437D0_00001704:
    extrwi. r0, r3, 1, 28
    beq lbl_fn_801437D0_000017E0
    lfs f0, lbl_80881964
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0x574
    stfs f0, 0x2fc(r30)
    bl fn_805F9940
    lfs f3, 0x570(r30)
    lfs f0, lbl_808819F4
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    beq lbl_fn_801437D0_00001744
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_801437D0_0000178C
lbl_fn_801437D0_00001744:
    lwz r0, 0x54c(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    li r5, 0x5d
    rlwinm r6, r0, 0, 10, 10
    subis r0, r6, 0x20
    cmplwi r0, 0x0
    bne lbl_fn_801437D0_00001768
    li r5, 0x1e8
lbl_fn_801437D0_00001768:
    lfs f1, lbl_8088196C
    li r6, 0x1
    lfs f2, lbl_80881994
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881964
    stfs f0, 0x2e8(r30)
    b lbl_fn_801437D0_000017D0
lbl_fn_801437D0_0000178C:
    lwz r0, 0x54c(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    li r5, 0x5e
    rlwinm r6, r0, 0, 10, 10
    subis r0, r6, 0x20
    cmplwi r0, 0x0
    bne lbl_fn_801437D0_000017B0
    li r5, 0x1e9
lbl_fn_801437D0_000017B0:
    lfs f1, lbl_8088196C
    li r6, 0x1
    lfs f2, lbl_80881994
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881964
    stfs f0, 0x2e8(r30)
lbl_fn_801437D0_000017D0:
    lwz r0, 0x54c(r30)
    rlwinm r0, r0, 0, 25, 23
    stw r0, 0x54c(r30)
    b lbl_fn_801437D0_00001FEC
lbl_fn_801437D0_000017E0:
    lwz r0, 0xf54(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801437D0_00001838
    lfs f0, lbl_80881964
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_8088196C
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x219
    lfs f2, lbl_80881994
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r0, 0x54c(r30)
    lfs f0, lbl_80881964
    rlwinm r0, r0, 0, 25, 23
    stfs f0, 0x2e8(r30)
    stw r0, 0x54c(r30)
    b lbl_fn_801437D0_00001FEC
lbl_fn_801437D0_00001838:
    lwz r0, 0xf50(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801437D0_00001884
    lfs f0, lbl_80881964
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_8088196C
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x21b
    lfs f2, lbl_80881994
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881964
    stfs f0, 0x2e8(r30)
    b lbl_fn_801437D0_00001FEC
lbl_fn_801437D0_00001884:
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 20
    bne lbl_fn_801437D0_00001FEC
    lwz r3, 0x139c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801437D0_000018F0
    lfs f1, lbl_80881964
    addi r3, r3, 0xb0
    lfs f2, lbl_80881994
    li r4, 0x0
    li r5, 0x1f4
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x139c(r30)
    li r0, 0x1
    lfs f3, lbl_80881964
    stw r0, 0x3fc(r3)
    lfs f0, lbl_8088196C
    lwz r3, 0x139c(r30)
    stfs f3, 0x2fc(r3)
    lwz r3, 0x139c(r30)
    stfs f0, 0x2e8(r3)
    lwz r3, 0x139c(r30)
    lfs f0, 0x374(r30)
    stfs f0, 0x2e4(r3)
lbl_fn_801437D0_000018F0:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_801437D0_00001914
    lwz r3, 0x560(r30)
    subi r0, r3, 0x74
    cmplwi r0, 0x3
    bgt lbl_fn_801437D0_00001914
    li r0, 0x1
    b lbl_fn_801437D0_00001918
lbl_fn_801437D0_00001914:
    li r0, 0x0
lbl_fn_801437D0_00001918:
    cmpwi r0, 0x0
    bne lbl_fn_801437D0_00001FEC
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 4
    bne lbl_fn_801437D0_00001FEC
    lwz r3, 0x54c(r30)
    rlwinm r0, r3, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_801437D0_000019D8
    lfs f4, lbl_8088196C
    rlwinm r0, r3, 0, 25, 23
    stw r0, 0x54c(r30)
    fcmpo cr0, f26, f4
    ble lbl_fn_801437D0_00001958
    lfs f0, 0x570(r30)
    fdivs f4, f0, f26
lbl_fn_801437D0_00001958:
    lfs f3, lbl_808819A0
    li r0, 0x1
    lfs f0, lbl_80881A1C
    fdivs f26, f4, f3
    lfs f3, lbl_80881964
    stw r0, 0x3fc(r30)
    stfs f3, 0x2fc(r30)
    fcmpo cr0, f4, f0
    bgt lbl_fn_801437D0_000019AC
    lwz r5, 0x484(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_8088196C
    li r4, 0x0
    lfs f2, lbl_80881994
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881964
    stfs f0, 0x2e8(r30)
    b lbl_fn_801437D0_00001FEC
lbl_fn_801437D0_000019AC:
    lfs f1, lbl_8088196C
    addi r3, r30, 0xb0
    lfs f2, lbl_80881994
    li r4, 0x0
    li r5, 0x5b
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    stfs f26, 0x2e8(r30)
    b lbl_fn_801437D0_00001FEC
lbl_fn_801437D0_000019D8:
    lwz r4, 0x488(r30)
    addi r3, r30, 0xb0
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_801437D0_000019F4
    bl fn_800A08D4
    b lbl_fn_801437D0_000019F8
lbl_fn_801437D0_000019F4:
    lfs f1, lbl_808819D4
lbl_fn_801437D0_000019F8:
    lfs f0, lbl_8088196C
    fmr f27, f1
    fcmpu cr0, f0, f1
    bne lbl_fn_801437D0_00001A0C
    lfs f27, lbl_80881964
lbl_fn_801437D0_00001A0C:
    lwz r4, 0x48c(r30)
    addi r3, r30, 0xb0
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_801437D0_00001A28
    bl fn_800A08D4
    b lbl_fn_801437D0_00001A2C
lbl_fn_801437D0_00001A28:
    lfs f1, lbl_808819D4
lbl_fn_801437D0_00001A2C:
    lfs f0, lbl_8088196C
    fmr f28, f1
    fcmpu cr0, f0, f1
    bne lbl_fn_801437D0_00001A40
    lfs f28, lbl_80881964
lbl_fn_801437D0_00001A40:
    lwz r4, 0x490(r30)
    addi r3, r30, 0xb0
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_801437D0_00001A5C
    bl fn_800A08D4
    b lbl_fn_801437D0_00001A60
lbl_fn_801437D0_00001A5C:
    lfs f1, lbl_808819D4
lbl_fn_801437D0_00001A60:
    lfs f0, lbl_8088196C
    fcmpu cr0, f0, f1
    bne lbl_fn_801437D0_00001A70
    lfs f1, lbl_80881964
lbl_fn_801437D0_00001A70:
    fdivs f31, f27, f28
    lfs f4, 0x500(r30)
    lfs f8, lbl_8088196C
    lfs f6, 0x504(r30)
    lfs f3, 0x508(r30)
    fdivs f30, f28, f1
    fcmpo cr0, f26, f8
    fmuls f5, f4, f31
    fmuls f7, f6, f30
    ble lbl_fn_801437D0_00001AA0
    lfs f0, 0x570(r30)
    fdivs f8, f0, f26
lbl_fn_801437D0_00001AA0:
    lfs f0, lbl_80881A64
    fcmpo cr0, f8, f0
    blt lbl_fn_801437D0_00001ACC
    lfs f8, lbl_8088196C
    stfs f8, 0x570(r30)
    stfs f8, 0x574(r30)
    stfs f8, 0x578(r30)
    stfs f8, 0x57c(r30)
    stfs f8, 0x534(r30)
    stfs f8, 0x538(r30)
    stfs f8, 0x53c(r30)
lbl_fn_801437D0_00001ACC:
    fcmpo cr0, f8, f4
    bge lbl_fn_801437D0_00001AE8
    lfs f28, lbl_80881964
    fdivs f29, f8, f4
    fdivs f26, f28, f31
    fmr f27, f28
    b lbl_fn_801437D0_00001BB4
lbl_fn_801437D0_00001AE8:
    fcmpo cr0, f8, f5
    bge lbl_fn_801437D0_00001B14
    fsubs f3, f8, f4
    lfs f29, lbl_80881964
    fsubs f0, f5, f4
    lfs f26, lbl_8088196C
    fsubs f4, f31, f29
    fdivs f0, f3, f0
    fmadds f28, f4, f0, f29
    fdivs f27, f28, f31
    b lbl_fn_801437D0_00001BB4
lbl_fn_801437D0_00001B14:
    fcmpo cr0, f8, f6
    bge lbl_fn_801437D0_00001B3C
    fsubs f3, f8, f5
    lfs f27, lbl_80881964
    fsubs f0, f6, f5
    fmr f28, f31
    fmr f26, f27
    fdivs f0, f3, f0
    fadds f29, f27, f0
    b lbl_fn_801437D0_00001BB4
lbl_fn_801437D0_00001B3C:
    fcmpo cr0, f8, f7
    bge lbl_fn_801437D0_00001B6C
    fsubs f3, f8, f6
    lfs f5, lbl_80881964
    fsubs f0, f7, f6
    lfs f29, lbl_808819B0
    fsubs f4, f30, f5
    lfs f28, lbl_8088196C
    fdivs f0, f3, f0
    fmadds f27, f4, f0, f5
    fdivs f26, f27, f30
    b lbl_fn_801437D0_00001BB4
lbl_fn_801437D0_00001B6C:
    fcmpo cr0, f8, f3
    bge lbl_fn_801437D0_00001B98
    fsubs f4, f8, f7
    lfs f0, lbl_808819B0
    fsubs f3, f3, f7
    lfs f28, lbl_8088196C
    fmr f27, f30
    lfs f26, lbl_80881964
    fdivs f3, f4, f3
    fadds f29, f0, f3
    b lbl_fn_801437D0_00001BB4
lbl_fn_801437D0_00001B98:
    fdivs f0, f8, f3
    lfs f3, lbl_80881964
    lfs f29, lbl_80881978
    lfs f28, lbl_8088196C
    fsubs f0, f0, f3
    fadds f26, f3, f0
    fmuls f27, f26, f30
lbl_fn_801437D0_00001BB4:
    lwz r3, 0x48(r30)
    li r0, 0x1
    lfs f25, lbl_80881A68
    cmpwi r3, 0x1
    beq lbl_fn_801437D0_00001BD4
    cmpwi r3, 0x4
    beq lbl_fn_801437D0_00001BD4
    li r0, 0x0
lbl_fn_801437D0_00001BD4:
    cmpwi r0, 0x0
    bne lbl_fn_801437D0_00001BE8
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    beq lbl_fn_801437D0_00001BF0
lbl_fn_801437D0_00001BE8:
    lwz r3, lbl_8087EFA8
    lfs f25, 0x21c(r3)
lbl_fn_801437D0_00001BF0:
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x50
    lfs f0, 0x530(r30)
    lfs f3, 0x114(r4)
    lfs f5, 0x110(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r30)
    lfs f3, 0x10c(r4)
    lfs f0, 0x528(r30)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    stfs f6, 0x58(r1)
    bl fn_805F9920
    fmuls f0, f25, f25
    fcmpo cr0, f1, f0
    ble lbl_fn_801437D0_00001D20
    lfs f0, lbl_808819A8
    li r0, 0x1
    lfs f3, lbl_80881964
    fcmpo cr0, f29, f0
    stw r0, 0x3fc(r30)
    stfs f3, 0x2fc(r30)
    bge lbl_fn_801437D0_00001C84
    lwz r5, 0x484(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_8088196C
    li r4, 0x0
    lfs f2, lbl_80881994
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881964
    stfs f0, 0x2e8(r30)
    b lbl_fn_801437D0_00001FEC
lbl_fn_801437D0_00001C84:
    lfs f0, lbl_80881A20
    fcmpo cr0, f29, f0
    bge lbl_fn_801437D0_00001CBC
    lwz r5, 0x488(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_8088196C
    li r4, 0x0
    lfs f2, lbl_80881994
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    stfs f28, 0x2e8(r30)
    b lbl_fn_801437D0_00001FEC
lbl_fn_801437D0_00001CBC:
    lfs f0, lbl_80881A60
    fcmpo cr0, f29, f0
    bge lbl_fn_801437D0_00001CF4
    lwz r5, 0x48c(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_8088196C
    li r4, 0x0
    lfs f2, lbl_80881994
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    stfs f27, 0x2e8(r30)
    b lbl_fn_801437D0_00001FEC
lbl_fn_801437D0_00001CF4:
    lwz r5, 0x490(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_8088196C
    li r4, 0x0
    lfs f2, lbl_80881994
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    stfs f26, 0x2e8(r30)
    b lbl_fn_801437D0_00001FEC
lbl_fn_801437D0_00001D20:
    lfs f3, lbl_80881964
    li r0, 0x3
    lfs f0, lbl_8088196C
    fsubs f25, f3, f29
    stw r0, 0x3fc(r30)
    fcmpo cr0, f25, f0
    bge lbl_fn_801437D0_00001D44
    fmr f25, f0
    b lbl_fn_801437D0_00001D50
lbl_fn_801437D0_00001D44:
    fcmpo cr0, f25, f3
    ble lbl_fn_801437D0_00001D50
    fmr f25, f3
lbl_fn_801437D0_00001D50:
    lwz r0, 0x139c(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_801437D0_00001D6C
    li r5, 0x3
    b lbl_fn_801437D0_00001D70
lbl_fn_801437D0_00001D6C:
    lwz r5, 0x484(r30)
lbl_fn_801437D0_00001D70:
    lfs f1, lbl_8088196C
    li r6, 0x1
    lfs f2, lbl_80881994
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_808819B0
    li r28, 0x1
    lfs f4, lbl_80881964
    fcmpo cr0, f29, f0
    stfs f4, 0x2e8(r30)
    stfs f25, 0x2fc(r30)
    bge lbl_fn_801437D0_00001E48
    fsubs f3, f4, f29
    lfs f0, lbl_8088196C
    fabs f3, f3
    frsp f3, f3
    fsubs f25, f4, f3
    fcmpo cr0, f25, f0
    bge lbl_fn_801437D0_00001DC8
    fmr f25, f0
    b lbl_fn_801437D0_00001DD4
lbl_fn_801437D0_00001DC8:
    fcmpo cr0, f25, f4
    ble lbl_fn_801437D0_00001DD4
    fmr f25, f4
lbl_fn_801437D0_00001DD4:
    mulli r28, r28, 0x30
    lwz r5, 0x488(r30)
    lfs f1, lbl_8088196C
    addi r3, r30, 0xb0
    lfs f2, lbl_80881994
    li r4, 0x1
    add r6, r30, r28
    li r7, 0x0
    lwz r0, 0x2dc(r6)
    li r6, 0x1
    li r8, 0x1
    subf r9, r0, r5
    subf r0, r5, r0
    or r0, r9, r0
    srwi r29, r0, 31
    bl fn_80097C08
    cmpwi r29, 0x0
    beq lbl_fn_801437D0_00001E38
    li r0, 0x2
    add r3, r30, r28
    mulli r0, r0, 0x30
    add r4, r30, r0
    lfs f0, 0x2e4(r4)
    fmuls f0, f31, f0
    stfs f0, 0x2e4(r3)
lbl_fn_801437D0_00001E38:
    add r3, r30, r28
    li r28, 0x2
    stfs f28, 0x2e8(r3)
    stfs f25, 0x2fc(r3)
lbl_fn_801437D0_00001E48:
    lfs f0, lbl_808819B0
    lfs f3, lbl_80881964
    fsubs f4, f0, f29
    lfs f0, lbl_8088196C
    fabs f4, f4
    frsp f4, f4
    fsubs f25, f3, f4
    fcmpo cr0, f25, f0
    bge lbl_fn_801437D0_00001E74
    fmr f25, f0
    b lbl_fn_801437D0_00001E80
lbl_fn_801437D0_00001E74:
    fcmpo cr0, f25, f3
    ble lbl_fn_801437D0_00001E80
    fmr f25, f3
lbl_fn_801437D0_00001E80:
    cmpwi r28, 0x1
    li r31, 0x0
    bne lbl_fn_801437D0_00001EA8
    mulli r3, r28, 0x30
    lwz r0, 0x48c(r30)
    add r3, r30, r3
    lwz r3, 0x2dc(r3)
    cmpw r3, r0
    beq lbl_fn_801437D0_00001EA8
    li r31, 0x1
lbl_fn_801437D0_00001EA8:
    lwz r5, 0x48c(r30)
    mr r4, r28
    lfs f1, lbl_8088196C
    addi r3, r30, 0xb0
    lfs f2, lbl_80881994
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    cmpwi r31, 0x0
    beq lbl_fn_801437D0_00001EF0
    addi r0, r28, 0x1
    mulli r3, r0, 0x30
    add r3, r30, r3
    mulli r0, r28, 0x30
    lfs f0, 0x2e4(r3)
    add r3, r30, r0
    stfs f0, 0x2e4(r3)
lbl_fn_801437D0_00001EF0:
    mulli r0, r28, 0x30
    cmpwi r28, 0x2
    add r3, r30, r0
    stfs f27, 0x2e8(r3)
    stfs f25, 0x2fc(r3)
    bne lbl_fn_801437D0_00001F30
    lfs f3, 0x344(r30)
    lfs f4, 0x314(r30)
    lfs f0, lbl_808819C4
    fmsubs f3, f31, f3, f4
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_801437D0_00001F30
    fdivs f0, f4, f31
    stfs f0, 0x344(r30)
lbl_fn_801437D0_00001F30:
    lfs f0, lbl_808819B0
    fcmpo cr0, f29, f0
    cror eq, gt, eq
    bne lbl_fn_801437D0_00001FD0
    fsubs f25, f29, f0
    lfs f0, lbl_8088196C
    fcmpo cr0, f25, f0
    bge lbl_fn_801437D0_00001F58
    fmr f25, f0
    b lbl_fn_801437D0_00001F68
lbl_fn_801437D0_00001F58:
    lfs f0, lbl_80881964
    fcmpo cr0, f25, f0
    ble lbl_fn_801437D0_00001F68
    fmr f25, f0
lbl_fn_801437D0_00001F68:
    lwz r5, 0x490(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_8088196C
    addi r4, r28, 0x1
    lfs f2, lbl_80881994
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    addi r0, r28, 0x1
    mulli r3, r0, 0x30
    cmpwi r0, 0x2
    add r3, r30, r3
    stfs f26, 0x2e8(r3)
    stfs f25, 0x2fc(r3)
    bne lbl_fn_801437D0_00001FD0
    lfs f3, 0x344(r30)
    lfs f4, 0x314(r30)
    lfs f0, lbl_808819C4
    fmsubs f3, f30, f3, f4
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_801437D0_00001FD0
    fdivs f0, f4, f30
    stfs f0, 0x344(r30)
lbl_fn_801437D0_00001FD0:
    lfs f0, lbl_80881A6C
    fcmpo cr0, f29, f0
    cror eq, lt, eq
    bne lbl_fn_801437D0_00001FEC
    lfs f0, lbl_80881A70
    stfs f0, 0x314(r30)
    stfs f0, 0x344(r30)
lbl_fn_801437D0_00001FEC:
    lwz r0, 0x1c4(r1)
    psq_l f31, 0x1b8(r1), 0, 0
    lfd f31, 0x1b0(r1)
    psq_l f30, 0x1a8(r1), 0, 0
    lfd f30, 0x1a0(r1)
    psq_l f29, 0x198(r1), 0, 0
    lfd f29, 0x190(r1)
    psq_l f28, 0x188(r1), 0, 0
    lfd f28, 0x180(r1)
    psq_l f27, 0x178(r1), 0, 0
    lfd f27, 0x170(r1)
    psq_l f26, 0x168(r1), 0, 0
    lfd f26, 0x160(r1)
    psq_l f25, 0x158(r1), 0, 0
    lfd f25, 0x150(r1)
    lwz r31, 0x14c(r1)
    lwz r30, 0x148(r1)
    lwz r29, 0x144(r1)
    lwz r28, 0x140(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}
