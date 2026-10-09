#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_80044E0C(void);
extern void fn_8004D314(void);
extern void fn_8004D388(void);
extern void fn_8004ED34(void);
extern void fn_80050A1C(void);
extern void fn_80084320(void);
extern void fn_80097C08(void);
extern void fn_80125474(void);
extern void fn_8014C228(void);
extern void fn_8014DEE4(void);
extern void fn_80153698(void);
extern void fn_8016E970(void);
extern void fn_801720AC(void);
extern void fn_801749EC(void);
extern void fn_80179D44(void);
extern void fn_801C8938(void);
extern void fn_8036DB24(void);
extern void fn_80370174(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80737808[];
extern u8 lbl_80737810[];
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077A720[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_80881964;
extern u32 lbl_8088196C;
extern u32 lbl_80881978;
extern u32 lbl_80881988;
extern u32 lbl_80881994;
extern u32 lbl_808819A0;
extern u32 lbl_808819A4;
extern u32 lbl_808819A8;
extern u32 lbl_808819B0;
extern u32 lbl_808819B4;
extern u32 lbl_808819B8;
extern u32 lbl_808819C4;
extern u32 lbl_808819C8;
extern u32 lbl_808819CC;
extern u32 lbl_808819F8;
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
extern u32 lbl_80881A5C;
extern u32 lbl_80881A60;

/* Function declarations */
void fn_801404E0(void);
void fn_801404F8(void);
void fn_80140500(void);
void fn_80140518(void);
void fn_8014052C(void);
void fn_80140588(void);
void fn_80141674(void);

asm void fn_801404E0(void)
{
    nofralloc
    lwz r0, 0x9c(r3)
    and r0, r4, r0
    subf r0, r4, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_801404F8(void)
{
    nofralloc
    lwz r3, lbl_8087EE98
    blr
}

asm void fn_80140500(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x34(r3)
    stw r0, 0x38(r3)
    stw r0, 0x3c(r3)
    stw r0, 0x40(r3)
    blr
}

asm void fn_80140518(void)
{
    nofralloc
    lwz r3, 0x48(r3)
    subi r0, r3, 0x3
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_8014052C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lfs f1, lbl_8088196C
    stw r0, 0x44(r1)
    lfs f0, lbl_80881964
    stw r31, 0x3c(r1)
    mr r31, r3
    stfs f1, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    addi r3, r1, 0x8
    lfs f1, 0x538(r4)
    li r4, 0x79
    bl fn_805F8E70
    mr r4, r31
    mr r5, r31
    addi r3, r1, 0x8
    bl fn_805F93C0
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80140588(void)
{
    nofralloc
    stwu r1, -0x270(r1)
    mflr r0
    stw r0, 0x274(r1)
    addi r11, r1, 0x240
    stfd f31, 0x260(r1)
    psq_st f31, 0x268(r1), 0, 0
    stfd f30, 0x250(r1)
    psq_st f30, 0x258(r1), 0, 0
    stfd f29, 0x240(r1)
    psq_st f29, 0x248(r1), 0, 0
    bl _savegpr_27
    lwz r5, lbl_8087EFA8
    fmr f29, f1
    fmr f30, f2
    lis r30, lbl_8077A720@ha
    lfs f0, 0x3a4(r5)
    addi r6, r1, 0x10c
    lfs f3, 0x400(r3)
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    fmuls f31, f0, f3
    stfs f2, 0x114(r1)
    addi r7, r1, 0x100
    lfs f3, 0x4(r4)
    lis r5, lbl_80737810@ha
    psq_st f1, 0x0(r6), 0, 0
    mr r27, r3
    mr r28, r4
    psq_l f1, 0x534(r3), 0, 0
    addi r30, r30, lbl_8077A720@l
    psq_st f1, 0x0(r7), 0, 0
    lfs f2, 0x53c(r3)
    lfs f0, 0x104(r1)
    stfs f2, 0x108(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80737810@l(r5)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80881A0C
    fcmpo cr0, f3, f0
    ble lbl_fn_80140588_00000154
    lfs f0, lbl_80881A10
    fsubs f3, f3, f0
lbl_fn_80140588_00000154:
    lfs f0, lbl_80881A14
    fcmpo cr0, f3, f0
    lfs f4, 0x570(r27)
    lfs f3, lbl_80881A18
    lfs f0, lbl_80881A1C
    fmuls f3, f4, f3
    stfs f3, 0x570(r27)
    fcmpo cr0, f3, f0
    bge lbl_fn_80140588_00000180
    lfs f0, lbl_8088196C
    stfs f0, 0x570(r27)
lbl_fn_80140588_00000180:
    lfs f0, lbl_80881964
    fcmpo cr0, f29, f0
    ble lbl_fn_80140588_00000190
    fmr f29, f0
lbl_fn_80140588_00000190:
    lfs f0, lbl_808819A0
    fcmpo cr0, f29, f0
    ble lbl_fn_80140588_000001B8
    fsubs f4, f29, f0
    lfs f3, lbl_808819A4
    lfs f0, lbl_80881A20
    fdivs f29, f4, f3
    fmuls f29, f29, f30
    fmuls f29, f29, f0
    b lbl_fn_80140588_000001BC
lbl_fn_80140588_000001B8:
    lfs f29, lbl_8088196C
lbl_fn_80140588_000001BC:
    lfs f1, 0x4(r28)
    bl fn_8068AD58
    frsp f3, f1
    lfs f0, lbl_8088196C
    stfs f0, 0xf8(r1)
    lfs f1, 0x4(r28)
    fmuls f0, f29, f3
    stfs f0, 0xf4(r1)
    bl fn_8068A850
    frsp f5, f1
    lfs f3, 0xf4(r1)
    lfs f0, 0xf8(r1)
    mr r3, r27
    fmuls f4, f3, f31
    lfs f3, lbl_80881A28
    fmuls f6, f29, f5
    stfs f4, 0xf4(r1)
    fmuls f5, f0, f31
    lfs f0, lbl_80881A24
    fmuls f4, f6, f31
    stfs f5, 0xf8(r1)
    stfs f4, 0xfc(r1)
    lfs f4, 0x570(r27)
    fmuls f3, f3, f4
    fmsubs f0, f0, f29, f3
    fadds f0, f4, f0
    stfs f0, 0x570(r27)
    lwz r12, 0x0(r27)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_808819FC
    lfs f4, lbl_80881964
    fmuls f0, f0, f31
    fcmpo cr0, f4, f0
    bge lbl_fn_80140588_00000250
    b lbl_fn_80140588_00000254
lbl_fn_80140588_00000250:
    fmr f4, f0
lbl_fn_80140588_00000254:
    lfs f0, lbl_808819FC
    lfs f3, 0x574(r27)
    fmuls f0, f0, f31
    lfs f5, lbl_80881964
    fnmsubs f3, f3, f4, f3
    fcmpo cr0, f5, f0
    stfs f3, 0x574(r27)
    bge lbl_fn_80140588_00000278
    b lbl_fn_80140588_0000027C
lbl_fn_80140588_00000278:
    fmr f5, f0
lbl_fn_80140588_0000027C:
    lfs f0, 0x57c(r27)
    lwz r0, 0x958(r27)
    fnmsubs f0, f0, f5, f0
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    stfs f0, 0x57c(r27)
    beq lbl_fn_80140588_000002EC
    lwz r0, 0x54c(r27)
    rlwinm r3, r0, 0, 10, 10
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    beq lbl_fn_80140588_000002EC
    lwz r4, lbl_8087F0A8
    lis r0, 0x4330
    stw r0, 0x1f8(r1)
    lis r3, lbl_80737808@ha
    lwz r0, 0x30(r4)
    lfd f5, lbl_80737808@l(r3)
    mullw r0, r0, r0
    lfs f3, lbl_80881A2C
    lfs f0, 0x578(r27)
    xoris r0, r0, 0x8000
    stw r0, 0x1fc(r1)
    lfd f4, 0x1f8(r1)
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fmadds f0, f31, f3, f0
    stfs f0, 0x578(r27)
lbl_fn_80140588_000002EC:
    lfs f4, 0x6b8(r27)
    lfs f3, 0xf4(r1)
    lfs f0, lbl_80881A34
    fmadds f4, f4, f31, f3
    lfs f3, 0xfc(r1)
    fmuls f0, f0, f31
    lfs f6, lbl_80881964
    stfs f4, 0xf4(r1)
    lfs f4, 0xf8(r1)
    lfs f5, 0x6c0(r27)
    fcmpo cr0, f6, f0
    fmadds f3, f5, f31, f3
    stfs f3, 0xfc(r1)
    lfs f3, 0x6bc(r27)
    fadds f3, f4, f3
    stfs f3, 0xf8(r1)
    bge lbl_fn_80140588_00000334
    b lbl_fn_80140588_00000338
lbl_fn_80140588_00000334:
    fmr f6, f0
lbl_fn_80140588_00000338:
    lfs f0, lbl_80881A34
    lfs f3, 0x6c0(r27)
    fmuls f0, f0, f31
    lfs f4, lbl_80881964
    fmuls f5, f3, f6
    fcmpo cr0, f4, f0
    bge lbl_fn_80140588_00000358
    b lbl_fn_80140588_0000035C
lbl_fn_80140588_00000358:
    fmr f4, f0
lbl_fn_80140588_0000035C:
    lfs f0, lbl_80881A34
    lfs f3, 0x6bc(r27)
    fmuls f0, f0, f31
    lfs f7, lbl_80881964
    fmuls f6, f3, f4
    fcmpo cr0, f7, f0
    bge lbl_fn_80140588_0000037C
    b lbl_fn_80140588_00000380
lbl_fn_80140588_0000037C:
    fmr f7, f0
lbl_fn_80140588_00000380:
    lfs f3, 0x6b8(r27)
    addi r3, r27, 0x6b8
    lfs f0, 0x6c0(r27)
    fmuls f7, f3, f7
    lfs f4, 0x6b8(r27)
    fsubs f3, f0, f5
    lfs f0, lbl_8088196C
    stfs f7, 0x8c(r1)
    fsubs f4, f4, f7
    stfs f6, 0x90(r1)
    stfs f5, 0x94(r1)
    stfs f4, 0x6b8(r27)
    stfs f3, 0x6c0(r27)
    stfs f0, 0x6bc(r27)
    bl fn_805F9940
    lfs f0, lbl_80881994
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    beq lbl_fn_80140588_000003DC
    lfs f0, lbl_8088196C
    stfs f0, 0x6b8(r27)
    stfs f0, 0x6bc(r27)
    stfs f0, 0x6c0(r27)
lbl_fn_80140588_000003DC:
    lfs f3, 0xf4(r1)
    lfs f0, 0x574(r27)
    lfs f5, 0xf8(r1)
    fadds f3, f3, f0
    lfs f0, lbl_80881A38
    lfs f4, 0xfc(r1)
    stfs f3, 0xf4(r1)
    lfs f3, 0x578(r27)
    fadds f3, f5, f3
    stfs f3, 0xf8(r1)
    fcmpo cr0, f3, f0
    lfs f3, 0x57c(r27)
    fadds f3, f4, f3
    stfs f3, 0xfc(r1)
    bge lbl_fn_80140588_0000041C
    stfs f0, 0xf8(r1)
lbl_fn_80140588_0000041C:
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x80
    lfs f0, 0x530(r27)
    li r29, 0x1
    lfs f3, 0x114(r4)
    lfs f5, 0x110(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r27)
    lfs f3, 0x10c(r4)
    lfs f0, 0x528(r27)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x84(r1)
    stfs f0, 0x80(r1)
    stfs f6, 0x88(r1)
    bl fn_805F9920
    lfs f0, lbl_80881A3C
    fcmpo cr0, f1, f0
    bge lbl_fn_80140588_00000D3C
    li r0, 0x0
    addi r4, r1, 0x10c
    lfs f2, 0x114(r1)
    addi r3, r1, 0xe8
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r1, 0xd8
    stw r0, 0x1dc(r1)
    addi r5, r1, 0x74
    lfs f6, 0x114(r1)
    stw r0, 0x1e0(r1)
    lfs f5, 0x110(r1)
    stw r0, 0x1e4(r1)
    lfs f3, 0x10c(r1)
    stw r0, 0x1e8(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x614(r27), 0, 0
    stfs f2, 0xf0(r1)
    lfs f2, 0x61c(r27)
    stfs f2, 0xe0(r1)
    psq_st f1, 0x0(r4), 0, 0
    lfs f7, 0x620(r27)
    stfs f7, 0xe4(r1)
    lfs f0, 0x5ac(r27)
    lfs f4, 0x5a8(r27)
    fadds f2, f6, f0
    lfs f0, 0x5a4(r27)
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f2, 0xe0(r1)
    stfs f0, 0x74(r1)
    stfs f4, 0x78(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x958(r27)
    stfs f2, 0x7c(r1)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_80140588_00000510
    lfs f0, 0xdc(r1)
    fsubs f0, f0, f7
    stfs f0, 0xdc(r1)
    b lbl_fn_80140588_0000051C
lbl_fn_80140588_00000510:
    lfs f0, 0xdc(r1)
    fadds f0, f0, f7
    stfs f0, 0xdc(r1)
lbl_fn_80140588_0000051C:
    mr r3, r27
    bl fn_80179D44
    lwz r0, 0x48(r27)
    mr r7, r3
    cmpwi r0, 0x0
    bne lbl_fn_80140588_0000053C
    li r0, 0x1
    b lbl_fn_80140588_00000578
lbl_fn_80140588_0000053C:
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_80140588_00000574
    lwz r0, 0x48(r4)
    cmpwi r0, 0x2
    bne lbl_fn_80140588_00000574
    lwz r0, 0x4c(r4)
    cmpwi r0, 0x19
    bne lbl_fn_80140588_00000574
    lwz r4, 0x50(r4)
    subi r0, r4, 0x2
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_80140588_00000578
lbl_fn_80140588_00000574:
    li r0, 0x0
lbl_fn_80140588_00000578:
    cmpwi r0, 0x0
    beq lbl_fn_80140588_00000584
    oris r7, r3, 0x200
lbl_fn_80140588_00000584:
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x1a8
    lfs f1, 0xe4(r1)
    addi r5, r1, 0xd8
    addi r6, r1, 0xf4
    addi r8, r27, 0x5b8
    li r9, 0x0
    bl fn_8004D388
    lwz r0, 0x54c(r27)
    mr r31, r3
    rlwinm r0, r0, 0, 22, 22
    cmplwi r0, 0x200
    bne lbl_fn_80140588_000005F0
    lfs f7, lbl_8088196C
    lfs f0, 0x110(r1)
    lfs f6, 0x10c(r1)
    fadds f4, f0, f7
    lfs f5, 0xf4(r1)
    lfs f3, 0x114(r1)
    lfs f0, 0xfc(r1)
    fadds f5, f6, f5
    stfs f7, 0xf8(r1)
    fadds f0, f3, f0
    stfs f5, 0x10c(r1)
    stfs f4, 0x110(r1)
    stfs f0, 0x114(r1)
    b lbl_fn_80140588_00000640
lbl_fn_80140588_000005F0:
    addi r5, r1, 0x1b8
    lfs f2, 0x1c0(r1)
    addi r4, r1, 0x10c
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, 0xe4(r1)
    stfs f2, 0x114(r1)
    lfs f5, 0x10c(r1)
    lfs f3, 0x5a4(r27)
    lfs f4, 0x110(r1)
    fsubs f3, f5, f3
    stfs f3, 0x10c(r1)
    lfs f3, 0x5a8(r27)
    fsubs f3, f4, f3
    stfs f3, 0x110(r1)
    fsubs f0, f3, f0
    lfs f3, 0x5ac(r27)
    fsubs f3, f2, f3
    stfs f0, 0x110(r1)
    stfs f3, 0x114(r1)
lbl_fn_80140588_00000640:
    cmpwi r3, 0x0
    beq lbl_fn_80140588_0000074C
    lwz r3, 0x1e4(r1)
    clrlwi r4, r3, 31
    cmplwi r4, 0x1
    bne lbl_fn_80140588_00000660
    lfs f0, lbl_8088196C
    stfs f0, 0xf8(r1)
lbl_fn_80140588_00000660:
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80140588_000006B0
    rlwinm r0, r3, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_80140588_000006B0
    cmplwi r4, 0x1
    bne lbl_fn_80140588_000006B0
    addi r3, r1, 0xf4
    bl fn_805F9920
    lfs f0, lbl_80881994
    fcmpo cr0, f1, f0
    ble lbl_fn_80140588_000006B0
    lwz r0, 0x958(r27)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_80140588_000006B0
    lwz r0, 0x54c(r27)
    ori r0, r0, 0x100
    stw r0, 0x54c(r27)
lbl_fn_80140588_000006B0:
    lwz r0, 0x1e4(r1)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_80140588_000006E4
    lwz r0, 0x54c(r27)
    addi r4, r1, 0x1ec
    addi r3, r27, 0x13a0
    oris r0, r0, 0x2
    stw r0, 0x54c(r27)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x1f4(r1)
    stfs f2, 0x13a8(r27)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_80140588_000006E4:
    lwz r0, 0x1e4(r1)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_80140588_00000718
    lwz r0, 0x54c(r27)
    addi r4, r1, 0x1ec
    addi r3, r27, 0x13a0
    oris r0, r0, 0x4
    stw r0, 0x54c(r27)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x1f4(r1)
    stfs f2, 0x13a8(r27)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_80140588_00000718:
    lwz r0, 0x1e4(r1)
    rlwinm r0, r0, 0, 22, 22
    cmplwi r0, 0x200
    bne lbl_fn_80140588_0000074C
    lwz r0, 0x54c(r27)
    addi r4, r1, 0x1ec
    addi r3, r27, 0x13a0
    oris r0, r0, 0x10
    stw r0, 0x54c(r27)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x1f4(r1)
    stfs f2, 0x13a8(r27)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_80140588_0000074C:
    lwz r4, 0x1dc(r1)
    li r3, 0x0
    li r0, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_80140588_00000770
    lwz r4, 0x0(r4)
    cmplwi r4, 0x1a
    bne lbl_fn_80140588_00000770
    li r0, 0x1
lbl_fn_80140588_00000770:
    cmpwi r0, 0x0
    beq lbl_fn_80140588_00000790
    lwz r0, 0x54c(r27)
    rlwinm r4, r0, 0, 5, 5
    subis r0, r4, 0x400
    cmplwi r0, 0x0
    beq lbl_fn_80140588_00000790
    li r3, 0x1
lbl_fn_80140588_00000790:
    lwz r0, 0x54c(r27)
    lwz r4, 0x12a4(r27)
    rlwimi r4, r3, 3, 28, 28
    rlwinm r3, r0, 0, 10, 10
    stw r4, 0x12a4(r27)
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    bne lbl_fn_80140588_000007B8
    ori r0, r4, 0x8
    stw r0, 0x12a4(r27)
lbl_fn_80140588_000007B8:
    lwz r3, 0x1dc(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80140588_000007CC
    lwz r0, 0x0(r3)
    b lbl_fn_80140588_000007D0
lbl_fn_80140588_000007CC:
    li r0, -0x1
lbl_fn_80140588_000007D0:
    cmpwi r31, 0x0
    stw r0, 0x634(r27)
    li r28, 0x0
    beq lbl_fn_80140588_000007F0
    lwz r0, 0x1e4(r1)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_80140588_000008D0
lbl_fn_80140588_000007F0:
    lwz r0, 0x958(r27)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80140588_000008D0
    lwz r0, 0x54c(r27)
    rlwinm r3, r0, 0, 10, 10
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    beq lbl_fn_80140588_000008D0
    lwz r3, 0x48(r27)
    li r0, 0x1
    cmpwi r3, 0x1
    beq lbl_fn_80140588_00000830
    cmpwi r3, 0x4
    beq lbl_fn_80140588_00000830
    li r0, 0x0
lbl_fn_80140588_00000830:
    cmpwi r0, 0x0
    bne lbl_fn_80140588_000008D0
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_80140588_000008D0
    addi r3, r1, 0x10c
    lfs f2, 0x114(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0xc8
    addi r6, r1, 0xbc
    psq_st f1, 0x0(r5), 0, 0
    lfs f4, lbl_80881978
    addi r8, r27, 0x5b8
    psq_st f1, 0x0(r6), 0, 0
    li r4, 0x0
    lfs f5, 0xcc(r1)
    lis r7, 0x8000
    lfs f3, 0xc0(r1)
    li r9, 0x0
    lfs f0, lbl_80881A50
    fadds f4, f5, f4
    stfs f2, 0xd0(r1)
    fsubs f0, f3, f0
    lwz r3, lbl_8087EE98
    stfs f2, 0xc4(r1)
    stfs f4, 0xcc(r1)
    stfs f0, 0xc0(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_80140588_000008AC
    li r28, 0x1
lbl_fn_80140588_000008AC:
    lwz r0, 0x54c(r27)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80140588_000008D0
    lfs f3, 0xc0(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    bge lbl_fn_80140588_000008D0
    li r28, 0x0
lbl_fn_80140588_000008D0:
    cmpwi r28, 0x0
    beq lbl_fn_80140588_00000968
    lwz r3, 0x630(r27)
    addi r0, r3, 0x1
    stw r0, 0x630(r27)
    cmpwi r0, 0x1
    ble lbl_fn_80140588_000009A8
    addi r3, r1, 0x10c
    lfs f3, lbl_8088196C
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0xb0
    lfs f2, 0x114(r1)
    addi r6, r1, 0xa4
    lfs f0, lbl_80881A44
    li r4, 0x0
    psq_st f1, 0x0(r5), 0, 0
    lis r7, 0x8000
    lwz r3, lbl_8087EE98
    li r8, 0x0
    stfs f2, 0xb8(r1)
    li r9, 0x0
    lfs f1, lbl_80881978
    stfs f3, 0xa4(r1)
    stfs f0, 0xa8(r1)
    stfs f3, 0xac(r1)
    bl fn_8004D314
    cmpwi r3, 0x0
    bne lbl_fn_80140588_0000095C
    lwz r12, 0x0(r27)
    mr r3, r27
    addi r4, r1, 0xf4
    lwz r12, 0x8c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80140588_000009A8
lbl_fn_80140588_0000095C:
    li r0, 0x0
    stw r0, 0x630(r27)
    b lbl_fn_80140588_000009A8
lbl_fn_80140588_00000968:
    cmpwi r31, 0x0
    li r0, 0x0
    stw r0, 0x630(r27)
    beq lbl_fn_80140588_000009A8
    lwz r0, 0x1e4(r1)
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    beq lbl_fn_80140588_00000998
    lwz r3, lbl_8087F0A8
    lwz r0, 0x2c0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80140588_000009A8
lbl_fn_80140588_00000998:
    mr r3, r27
    addi r4, r1, 0x10c
    addi r5, r1, 0xf4
    bl fn_801749EC
lbl_fn_80140588_000009A8:
    mr r3, r27
    addi r4, r1, 0x10c
    addi r5, r1, 0xf4
    bl fn_801720AC
    cmpwi r3, 0x0
    beq lbl_fn_80140588_000009C8
    li r29, 0x0
    b lbl_fn_80140588_00000DD8
lbl_fn_80140588_000009C8:
    lwz r0, 0x7e0(r27)
    rlwinm r3, r0, 0, 6, 6
    subis r0, r3, 0x200
    cmplwi r0, 0x0
    bne lbl_fn_80140588_00000DD8
    lwz r3, 0x55c(r27)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_80140588_00000DD8
    lwz r0, 0x54c(r27)
    rlwinm r3, r0, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_80140588_00000DD8
    lwz r0, 0x12a4(r27)
    extrwi. r0, r0, 1, 28
    bne lbl_fn_80140588_00000DD8
    addi r3, r27, 0x574
    bl fn_805F9920
    lfs f0, lbl_80881964
    fcmpo cr0, f1, f0
    bgt lbl_fn_80140588_00000A30
    lfs f3, 0x570(r27)
    lfs f0, lbl_808819A8
    fcmpo cr0, f3, f0
    ble lbl_fn_80140588_00000DD8
lbl_fn_80140588_00000A30:
    lwz r3, 0x1208(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80140588_00000A8C
    lfs f0, lbl_8088196C
    li r28, 0x0
    li r0, 0x3
    stw r28, 0x11c(r1)
    addi r4, r1, 0x118
    stw r28, 0x120(r1)
    stw r28, 0x124(r1)
    stfs f0, 0x12c(r1)
    stfs f0, 0x130(r1)
    stfs f0, 0x134(r1)
    stw r0, 0x118(r1)
    stw r27, 0x128(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1208(r27)
    li r0, 0xff
    stb r0, 0x520(r3)
    stw r28, 0x1208(r27)
lbl_fn_80140588_00000A8C:
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
    beq lbl_fn_80140588_00000AC8
    mr r4, r27
    li r5, 0x0
    bl fn_801C8938
    mr r31, r3
lbl_fn_80140588_00000AC8:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_80140588_00000B58
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80140588_00000B00
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x200(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x204(r1)
    stw r0, 0x208(r1)
    b lbl_fn_80140588_00000B1C
lbl_fn_80140588_00000B00:
    addi r3, r30, 0x20c
    lwz r5, 0x20c(r30)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x200(r1)
    stw r4, 0x204(r1)
    stw r0, 0x208(r1)
lbl_fn_80140588_00000B1C:
    lwz r5, 0x200(r1)
    addi r3, r1, 0x68
    lwz r4, 0x204(r1)
    lwz r0, 0x208(r1)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    stw r0, 0x70(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80140588_00000B58
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80140588_00000B58:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_80140588_00000D0C
    cmpwi r0, 0x8
    beq lbl_fn_80140588_00000B70
    stw r0, 0x564(r27)
lbl_fn_80140588_00000B70:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_80140588_00000D0C
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80140588_00000BA8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x20c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x210(r1)
    stw r0, 0x214(r1)
    b lbl_fn_80140588_00000BC4
lbl_fn_80140588_00000BA8:
    addi r3, r30, 0x218
    lwz r5, 0x218(r30)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x20c(r1)
    stw r4, 0x210(r1)
    stw r0, 0x214(r1)
lbl_fn_80140588_00000BC4:
    lwz r5, 0x20c(r1)
    addi r3, r1, 0x50
    lwz r4, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r0, 0x58(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80140588_00000C00
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80140588_00000C00:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_80140588_00000CDC
    cmpwi r0, 0x8
    beq lbl_fn_80140588_00000C18
    stw r0, 0x564(r27)
lbl_fn_80140588_00000C18:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_80140588_00000CDC
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80140588_00000C50
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x218(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x21c(r1)
    stw r0, 0x220(r1)
    b lbl_fn_80140588_00000C6C
lbl_fn_80140588_00000C50:
    addi r3, r30, 0x224
    lwz r5, 0x224(r30)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x218(r1)
    stw r4, 0x21c(r1)
    stw r0, 0x220(r1)
lbl_fn_80140588_00000C6C:
    lwz r5, 0x218(r1)
    addi r3, r1, 0x5c
    lwz r4, 0x21c(r1)
    lwz r0, 0x220(r1)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r0, 0x64(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80140588_00000CA8
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80140588_00000CA8:
    mr r3, r27
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r27)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_80140588_00000CDC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80140588_00000CDC:
    lwz r3, 0xf80(r27)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r27)
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_80140588_00000D0C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80140588_00000D0C:
    lwz r3, 0xf80(r27)
    li r0, 0x6
    stw r0, 0x55c(r27)
    cmpwi r3, 0x0
    stw r31, 0xf80(r27)
    beq lbl_fn_80140588_00001164
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_80140588_00001164
lbl_fn_80140588_00000D3C:
    lfs f0, lbl_8088196C
    addi r3, r27, 0xc64
    stfs f0, 0xf8(r1)
    bl fn_80125474
    cmpwi r3, 0x0
    beq lbl_fn_80140588_00000D9C
    addi r3, r1, 0xf4
    bl fn_805F9940
    lfs f3, 0xcc4(r27)
    fmr f29, f1
    lfs f0, 0xcbc(r27)
    fmuls f3, f3, f3
    fmadds f1, f0, f0, f3
    bl fn_8068B100
    lfs f0, lbl_808819B8
    frsp f3, f1
    fcmpo cr0, f29, f0
    ble lbl_fn_80140588_00000D9C
    fcmpo cr0, f3, f0
    ble lbl_fn_80140588_00000D9C
    fdivs f3, f3, f29
    lfs f0, 0xcc0(r27)
    fdivs f0, f0, f3
    stfs f0, 0xf8(r1)
lbl_fn_80140588_00000D9C:
    lfs f3, 0x10c(r1)
    lfs f0, 0xf4(r1)
    lfs f5, 0x110(r1)
    fadds f6, f3, f0
    lfs f4, 0xf8(r1)
    lfs f3, 0x114(r1)
    lfs f0, 0xfc(r1)
    fadds f4, f5, f4
    stfs f6, 0x10c(r1)
    fadds f0, f3, f0
    stfs f4, 0x110(r1)
    stfs f0, 0x114(r1)
    lwz r3, 0x610(r27)
    addi r0, r3, 0x1
    stw r0, 0x610(r27)
lbl_fn_80140588_00000DD8:
    lwz r0, 0x54c(r27)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80140588_00000E00
    lfs f3, 0x110(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    bge lbl_fn_80140588_00000E00
    stfs f0, 0x110(r1)
    stfs f0, 0xf8(r1)
lbl_fn_80140588_00000E00:
    lwz r4, 0xfc0(r27)
    addi r3, r1, 0x98
    lfs f0, 0x114(r1)
    lfs f5, 0x530(r4)
    lfs f4, 0x528(r4)
    fsubs f5, f5, f0
    lfs f3, 0x10c(r1)
    lfs f0, lbl_8088196C
    fsubs f3, f4, f3
    stfs f5, 0xa0(r1)
    stfs f3, 0x98(r1)
    stfs f0, 0x9c(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_808819C4
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80140588_00000E5C
    lfs f3, lbl_8088196C
    lfs f0, lbl_80881994
    stfs f3, 0x98(r1)
    stfs f3, 0x9c(r1)
    stfs f0, 0xa0(r1)
lbl_fn_80140588_00000E5C:
    addi r3, r1, 0x98
    mr r4, r3
    bl fn_805F98D0
    lfs f2, 0xa0(r1)
    addi r28, r1, 0x98
    lfs f0, lbl_808819C4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80140588_00000EA8
    lfs f3, 0x98(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    ble lbl_fn_80140588_00000E9C
    lfs f0, lbl_808819C8
    b lbl_fn_80140588_00000EA0
lbl_fn_80140588_00000E9C:
    lfs f0, lbl_808819CC
lbl_fn_80140588_00000EA0:
    stfs f0, 0xc(r1)
    b lbl_fn_80140588_00000EB8
lbl_fn_80140588_00000EA8:
    lfs f1, 0x98(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xc(r1)
lbl_fn_80140588_00000EB8:
    lfs f0, 0xc(r1)
    addi r3, r1, 0x178
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_8088196C
    addi r4, r1, 0x14
    lfs f4, 0x180(r1)
    mr r5, r4
    lfs f5, 0x17c(r1)
    addi r3, r1, 0x138
    lfs f6, 0x178(r1)
    lfs f7, 0x190(r1)
    lfs f8, 0x18c(r1)
    lfs f9, 0x188(r1)
    lfs f10, 0x1a0(r1)
    lfs f11, 0x19c(r1)
    lfs f12, 0x198(r1)
    lfs f13, 0x1a4(r1)
    lfs f29, 0x194(r1)
    lfs f30, 0x184(r1)
    lfs f0, lbl_80881964
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0xa0(r1)
    stfs f3, 0x168(r1)
    stfs f3, 0x16c(r1)
    stfs f3, 0x170(r1)
    stfs f0, 0x174(r1)
    stfs f6, 0x44(r1)
    stfs f5, 0x48(r1)
    stfs f4, 0x4c(r1)
    stfs f6, 0x138(r1)
    stfs f5, 0x13c(r1)
    stfs f4, 0x140(r1)
    stfs f9, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f7, 0x40(r1)
    stfs f9, 0x148(r1)
    stfs f8, 0x14c(r1)
    stfs f7, 0x150(r1)
    stfs f12, 0x2c(r1)
    stfs f11, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f12, 0x158(r1)
    stfs f11, 0x15c(r1)
    stfs f10, 0x160(r1)
    stfs f30, 0x20(r1)
    stfs f29, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f30, 0x144(r1)
    stfs f29, 0x154(r1)
    stfs f13, 0x164(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F9750
    lfs f2, 0x1c(r1)
    lfs f0, lbl_808819C4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80140588_00000FD4
    lfs f3, 0x18(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    ble lbl_fn_80140588_00000FC4
    lfs f0, lbl_808819C8
    b lbl_fn_80140588_00000FC8
lbl_fn_80140588_00000FC4:
    lfs f0, lbl_808819CC
lbl_fn_80140588_00000FC8:
    fneg f0, f0
    stfs f0, 0x8(r1)
    b lbl_fn_80140588_00000FE8
lbl_fn_80140588_00000FD4:
    lfs f1, 0x18(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8(r1)
lbl_fn_80140588_00000FE8:
    addi r3, r1, 0x8
    lfs f4, lbl_8088196C
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80737810@ha
    psq_st f1, 0x0(r28), 0, 0
    fmr f2, f4
    lfs f0, 0x104(r1)
    lfs f3, 0x9c(r1)
    stfs f2, 0xa0(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80737810@l(r3)
    stfs f4, 0x10(r1)
    bl fn_8068AEA8
    frsp f6, f1
    lfs f0, lbl_80881A0C
    fcmpo cr0, f6, f0
    ble lbl_fn_80140588_00001034
    lfs f0, lbl_80881A10
    fsubs f6, f6, f0
lbl_fn_80140588_00001034:
    lfs f0, lbl_80881A14
    fcmpo cr0, f6, f0
    bge lbl_fn_80140588_00001048
    lfs f0, lbl_80881A10
    fadds f6, f6, f0
lbl_fn_80140588_00001048:
    lwz r0, 0x12a4(r27)
    lfs f7, 0x104(r1)
    extrwi. r0, r0, 1, 28
    lfs f8, 0x56c(r27)
    beq lbl_fn_80140588_00001078
    lwz r0, 0x54c(r27)
    rlwinm r3, r0, 0, 10, 10
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    bne lbl_fn_80140588_00001078
    lfs f0, lbl_80881994
    fmuls f8, f8, f0
lbl_fn_80140588_00001078:
    lfs f0, lbl_80881A0C
    lfs f3, lbl_808819B4
    fdivs f4, f6, f0
    lfs f0, lbl_80881964
    lfs f5, lbl_808819A8
    fabs f4, f4
    frsp f4, f4
    fmuls f3, f4, f3
    fadds f0, f0, f3
    fmuls f8, f8, f0
    fmuls f3, f6, f8
    fcmpo cr0, f5, f3
    ble lbl_fn_80140588_000010B0
    b lbl_fn_80140588_000010B4
lbl_fn_80140588_000010B0:
    fmr f5, f3
lbl_fn_80140588_000010B4:
    fcmpo cr0, f6, f5
    bge lbl_fn_80140588_000010C4
    fmr f0, f6
    b lbl_fn_80140588_000010D8
lbl_fn_80140588_000010C4:
    lfs f0, lbl_808819A8
    fcmpo cr0, f0, f3
    ble lbl_fn_80140588_000010D4
    b lbl_fn_80140588_000010D8
lbl_fn_80140588_000010D4:
    fmr f0, f3
lbl_fn_80140588_000010D8:
    fadds f7, f7, f0
    lfs f3, lbl_808819FC
    lfs f0, lbl_808819A0
    lfs f5, 0x580(r27)
    fmuls f6, f3, f6
    lfs f3, lbl_80881988
    fmuls f4, f0, f5
    lfs f0, lbl_80881A1C
    stfs f7, 0x104(r1)
    fmsubs f3, f3, f6, f4
    fadds f3, f5, f3
    stfs f3, 0x580(r27)
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80140588_00001120
    lfs f0, lbl_8088196C
    stfs f0, 0x580(r27)
lbl_fn_80140588_00001120:
    addi r3, r1, 0x10c
    lfs f2, 0x114(r1)
    psq_l f1, 0x0(r3), 0, 0
    cmpwi r29, 0x0
    psq_st f1, 0x528(r27), 0, 0
    stfs f2, 0x530(r27)
    beq lbl_fn_80140588_00001150
    addi r3, r1, 0x100
    lfs f2, 0x108(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r27), 0, 0
    stfs f2, 0x53c(r27)
lbl_fn_80140588_00001150:
    addi r3, r1, 0xf4
    lfs f2, 0xfc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x574(r27), 0, 0
    stfs f2, 0x57c(r27)
lbl_fn_80140588_00001164:
    addi r11, r1, 0x240
    psq_l f31, 0x268(r1), 0, 0
    lfd f31, 0x260(r1)
    psq_l f30, 0x258(r1), 0, 0
    lfd f30, 0x250(r1)
    psq_l f29, 0x248(r1), 0, 0
    lfd f29, 0x240(r1)
    bl _restgpr_27
    lwz r0, 0x274(r1)
    mtlr r0
    addi r1, r1, 0x270
    blr
}

asm void fn_80141674(void)
{
    nofralloc
    stwu r1, -0x3d0(r1)
    mflr r0
    lfs f3, lbl_8088196C
    stw r0, 0x3d4(r1)
    lfs f0, lbl_80881964
    stfd f31, 0x3c0(r1)
    psq_st f31, 0x3c8(r1), 0, 0
    stfd f30, 0x3b0(r1)
    psq_st f30, 0x3b8(r1), 0, 0
    fmr f30, f2
    stfd f29, 0x3a0(r1)
    psq_st f29, 0x3a8(r1), 0, 0
    fmr f29, f1
    lfs f1, 0x4(r4)
    li r4, 0x79
    stfd f28, 0x390(r1)
    psq_st f28, 0x398(r1), 0, 0
    stw r31, 0x38c(r1)
    mr r31, r3
    stw r30, 0x388(r1)
    stw r29, 0x384(r1)
    stw r28, 0x380(r1)
    lwz r5, lbl_8087EFA8
    lfs f5, 0x400(r3)
    addi r3, r1, 0x260
    lfs f4, 0x3a4(r5)
    fmuls f31, f4, f5
    stfs f3, 0x19c(r1)
    stfs f3, 0x1a0(r1)
    stfs f0, 0x1a4(r1)
    bl fn_805F8E70
    addi r4, r1, 0x19c
    addi r3, r1, 0x260
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x19c
    addi r4, r31, 0xc14
    bl fn_805F9990
    lfs f3, lbl_8088196C
    fmr f28, f1
    lfs f0, lbl_80881964
    addi r3, r31, 0xc14
    stfs f3, 0x108(r1)
    addi r4, r1, 0x108
    addi r5, r1, 0x190
    stfs f0, 0x10c(r1)
    stfs f3, 0x110(r1)
    bl fn_805F99B0
    lfs f0, lbl_80881A5C
    addi r3, r1, 0x184
    psq_l f1, 0x528(r31), 0, 0
    addi r4, r1, 0x178
    lfs f2, 0x530(r31)
    fcmpo cr0, f28, f0
    psq_st f1, 0x0(r3), 0, 0
    li r28, 0x0
    psq_l f1, 0x534(r31), 0, 0
    li r29, 0x0
    stfs f2, 0x18c(r1)
    lfs f2, 0x53c(r31)
    li r30, 0x0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x180(r1)
    bge lbl_fn_80141674_000012F4
    lfs f0, 0xc1c(r31)
    addi r4, r1, 0xfc
    lfs f3, 0xc18(r31)
    addi r3, r1, 0x19c
    fneg f4, f0
    lfs f0, 0xc14(r31)
    fneg f3, f3
    addi r28, r31, 0xc20
    fneg f0, f0
    stfs f4, 0x104(r1)
    stfs f0, 0xfc(r1)
    frsp f2, f4
    stfs f3, 0x100(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1a4(r1)
    lwz r0, 0x12a4(r31)
    lwz r4, 0xc38(r31)
    lwz r3, 0xc3c(r31)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x12a4(r31)
    subi r29, r4, 0x1
    subi r30, r3, 0x1
    b lbl_fn_80141674_0000134C
lbl_fn_80141674_000012F4:
    lfs f0, lbl_808819A8
    fcmpo cr0, f28, f0
    ble lbl_fn_80141674_0000133C
    addi r4, r31, 0xc14
    lfs f2, 0xc1c(r31)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x19c
    psq_st f1, 0x0(r3), 0, 0
    addi r28, r31, 0xc2c
    stfs f2, 0x1a4(r1)
    lwz r0, 0x12a4(r31)
    lwz r4, 0xc3c(r31)
    lwz r3, 0xc38(r31)
    oris r0, r0, 0x2000
    stw r0, 0x12a4(r31)
    subi r29, r4, 0x1
    subi r30, r3, 0x1
    b lbl_fn_80141674_0000134C
lbl_fn_80141674_0000133C:
    lfs f0, lbl_8088196C
    stfs f0, 0x19c(r1)
    stfs f0, 0x1a0(r1)
    stfs f0, 0x1a4(r1)
lbl_fn_80141674_0000134C:
    cmpwi r28, 0x0
    beq lbl_fn_80141674_00001574
    lfs f3, 0x18c(r1)
    addi r3, r1, 0xf0
    lfs f0, 0x8(r28)
    lfs f5, 0x188(r1)
    fsubs f6, f3, f0
    lfs f4, 0x4(r28)
    lfs f0, 0x0(r28)
    fsubs f5, f5, f4
    lfs f3, 0x184(r1)
    lfs f4, 0x1a4(r1)
    fsubs f7, f3, f0
    lfs f3, 0x1a0(r1)
    lfs f0, 0x19c(r1)
    fadds f4, f6, f4
    stfs f7, 0x16c(r1)
    fadds f3, f5, f3
    fadds f0, f7, f0
    stfs f5, 0x170(r1)
    stfs f6, 0x174(r1)
    stfs f0, 0xf0(r1)
    stfs f3, 0xf4(r1)
    stfs f4, 0xf8(r1)
    bl fn_805F9920
    fmr f28, f1
    addi r3, r1, 0x16c
    bl fn_805F9920
    fcmpo cr0, f1, f28
    bge lbl_fn_80141674_00001574
    lfs f3, 0x8(r28)
    addi r4, r1, 0xe4
    lfs f0, 0x18c(r1)
    addi r8, r1, 0x19c
    lfs f5, 0x4(r28)
    mr r5, r31
    fsubs f2, f3, f0
    lfs f4, 0x188(r1)
    lfs f3, 0x0(r28)
    mr r6, r29
    lfs f0, 0x184(r1)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xe8(r1)
    lwz r3, lbl_8087F430
    mr r7, r30
    stfs f0, 0xe4(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r1, 0x290
    stfs f2, 0xec(r1)
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0x1a4(r1)
    bl fn_8036DB24
    cmpwi r3, 0x0
    beq lbl_fn_80141674_00001574
    lwz r0, 0x12a4(r31)
    clrlwi r0, r0, 2
    stw r0, 0x12a4(r31)
    lwz r3, lbl_8087F430
    lwz r5, 0x10d8(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80141674_0000148C
    lwz r3, 0xc38(r31)
    cmpwi r3, 0x0
    ble lbl_fn_80141674_0000148C
    lwz r0, 0xc3c(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80141674_0000148C
    subi r0, r3, 0x1
    lwz r3, 0xb0(r5)
    slwi r0, r0, 6
    li r4, 0x0
    add r3, r3, r0
    stw r4, 0x3c(r3)
    lwz r6, 0xc3c(r31)
    lwz r3, 0xb0(r5)
    subi r0, r6, 0x1
    slwi r0, r0, 6
    add r3, r3, r0
    stw r4, 0x3c(r3)
lbl_fn_80141674_0000148C:
    lwz r4, 0x48(r31)
    cmpwi r4, 0x0
    bne lbl_fn_80141674_000014C0
    lwz r3, lbl_8087F0A8
    lwz r0, 0x278(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80141674_000014C0
    lwz r3, 0x5c(r31)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80141674_000014C0
    li r0, 0x1
    b lbl_fn_80141674_000014E0
lbl_fn_80141674_000014C0:
    cmpwi r4, 0x0
    bne lbl_fn_80141674_000014DC
    lwz r0, 0x12a8(r31)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_80141674_000014DC
    li r0, 0x1
    b lbl_fn_80141674_000014E0
lbl_fn_80141674_000014DC:
    li r0, 0x0
lbl_fn_80141674_000014E0:
    cmpwi r0, 0x0
    beq lbl_fn_80141674_00001564
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_80141674_00001544
    lwz r3, 0x648(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80141674_00001510
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_80141674_00001510:
    lwz r3, 0x64c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80141674_00001524
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_80141674_00001524:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r31)
    mr r3, r31
    stw r0, 0x648(r31)
    stw r0, 0x64c(r31)
    bl fn_8014C228
    b lbl_fn_80141674_00001564
lbl_fn_80141674_00001544:
    lwz r0, 0x674(r31)
    cmpwi r0, 0x0
    blt lbl_fn_80141674_00001564
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_80141674_00001564:
    mr r3, r31
    addi r4, r1, 0x290
    li r5, 0x1
    bl fn_80153698
lbl_fn_80141674_00001574:
    lfs f0, lbl_80881964
    lfs f3, lbl_8088196C
    fcmpo cr0, f29, f0
    stfs f3, 0x570(r31)
    stfs f3, 0x574(r31)
    stfs f3, 0x57c(r31)
    ble lbl_fn_80141674_00001594
    fmr f29, f0
lbl_fn_80141674_00001594:
    lfs f0, lbl_808819A0
    fcmpo cr0, f29, f0
    ble lbl_fn_80141674_000015BC
    fsubs f4, f29, f0
    lfs f3, lbl_808819A4
    lfs f0, lbl_808819A8
    fdivs f29, f4, f3
    fmuls f29, f29, f30
    fmuls f29, f29, f0
    b lbl_fn_80141674_000015C0
lbl_fn_80141674_000015BC:
    lfs f29, lbl_8088196C
lbl_fn_80141674_000015C0:
    fmuls f5, f29, f31
    lfs f4, 0x19c(r1)
    lfs f3, 0x1a0(r1)
    addi r3, r1, 0x19c
    lfs f0, 0x1a4(r1)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x19c(r1)
    stfs f3, 0x1a0(r1)
    stfs f0, 0x1a4(r1)
    bl fn_805F9940
    lfs f0, lbl_8088196C
    li r0, 0x1
    lfs f3, lbl_80881964
    fcmpo cr0, f1, f0
    stw r0, 0x3fc(r31)
    stfs f3, 0x2fc(r31)
    stfs f3, 0x2e8(r31)
    ble lbl_fn_80141674_000016CC
    lwz r3, 0x12a4(r31)
    extrwi. r0, r3, 1, 1
    beq lbl_fn_80141674_00001654
    extrwi. r0, r3, 1, 2
    beq lbl_fn_80141674_0000162C
    lwz r5, 0x4a8(r31)
    b lbl_fn_80141674_00001630
lbl_fn_80141674_0000162C:
    lwz r5, 0x4ac(r31)
lbl_fn_80141674_00001630:
    lfs f1, lbl_8088196C
    addi r3, r31, 0xb0
    lfs f2, lbl_80881994
    li r4, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80141674_00001778
lbl_fn_80141674_00001654:
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_80141674_00001694
    extrwi. r0, r3, 1, 2
    addi r3, r31, 0xb0
    li r4, 0x0
    li r5, 0x1b8
    beq lbl_fn_80141674_00001678
    li r5, 0x1b7
lbl_fn_80141674_00001678:
    lfs f1, lbl_8088196C
    li r6, 0x1
    lfs f2, lbl_80881994
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80141674_00001778
lbl_fn_80141674_00001694:
    extrwi. r0, r3, 1, 2
    beq lbl_fn_80141674_000016A4
    lwz r5, 0x4b0(r31)
    b lbl_fn_80141674_000016A8
lbl_fn_80141674_000016A4:
    lwz r5, 0x4b4(r31)
lbl_fn_80141674_000016A8:
    lfs f1, lbl_8088196C
    addi r3, r31, 0xb0
    lfs f2, lbl_80881994
    li r4, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80141674_00001778
lbl_fn_80141674_000016CC:
    lwz r3, 0x12a4(r31)
    extrwi. r0, r3, 1, 1
    beq lbl_fn_80141674_00001710
    extrwi. r0, r3, 1, 2
    beq lbl_fn_80141674_000016E8
    lwz r5, 0x498(r31)
    b lbl_fn_80141674_000016EC
lbl_fn_80141674_000016E8:
    lwz r5, 0x49c(r31)
lbl_fn_80141674_000016EC:
    lfs f1, lbl_8088196C
    addi r3, r31, 0xb0
    lfs f2, lbl_80881994
    li r4, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80141674_00001778
lbl_fn_80141674_00001710:
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_80141674_00001744
    fmr f1, f0
    lfs f2, lbl_80881994
    addi r3, r31, 0xb0
    li r4, 0x0
    li r5, 0x1b9
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80141674_00001778
lbl_fn_80141674_00001744:
    extrwi. r0, r3, 1, 2
    beq lbl_fn_80141674_00001754
    lwz r5, 0x4a0(r31)
    b lbl_fn_80141674_00001758
lbl_fn_80141674_00001754:
    lwz r5, 0x4a4(r31)
lbl_fn_80141674_00001758:
    lfs f1, lbl_8088196C
    addi r3, r31, 0xb0
    lfs f2, lbl_80881994
    li r4, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_80141674_00001778:
    lfs f3, lbl_8088196C
    addi r3, r1, 0x190
    stfs f3, 0x580(r31)
    addi r29, r1, 0xd8
    lfs f0, lbl_808819C4
    stfs f3, 0x584(r31)
    lfs f2, 0x198(r1)
    psq_l f1, 0x0(r3), 0, 0
    fabs f4, f2
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xe0(r1)
    frsp f4, f4
    fcmpo cr0, f4, f0
    bge lbl_fn_80141674_000017D0
    lfs f0, 0xd8(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_80141674_000017C4
    lfs f0, lbl_808819C8
    b lbl_fn_80141674_000017C8
lbl_fn_80141674_000017C4:
    lfs f0, lbl_808819CC
lbl_fn_80141674_000017C8:
    stfs f0, 0x60(r1)
    b lbl_fn_80141674_000017E4
lbl_fn_80141674_000017D0:
    frsp f2, f2
    lfs f1, 0xd8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x60(r1)
lbl_fn_80141674_000017E4:
    lfs f0, 0x60(r1)
    addi r3, r1, 0x1f0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_8088196C
    addi r4, r1, 0x50
    lfs f29, 0x1f8(r1)
    mr r5, r4
    lfs f28, 0x1f4(r1)
    addi r3, r1, 0x220
    lfs f13, 0x1f0(r1)
    lfs f12, 0x208(r1)
    lfs f11, 0x204(r1)
    lfs f10, 0x200(r1)
    lfs f9, 0x218(r1)
    lfs f8, 0x214(r1)
    lfs f7, 0x210(r1)
    lfs f6, 0x21c(r1)
    lfs f5, 0x20c(r1)
    lfs f4, 0x1fc(r1)
    lfs f0, lbl_80881964
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xe0(r1)
    stfs f3, 0x250(r1)
    stfs f3, 0x254(r1)
    stfs f3, 0x258(r1)
    stfs f0, 0x25c(r1)
    stfs f13, 0x20(r1)
    stfs f28, 0x24(r1)
    stfs f29, 0x28(r1)
    stfs f13, 0x220(r1)
    stfs f28, 0x224(r1)
    stfs f29, 0x228(r1)
    stfs f10, 0x2c(r1)
    stfs f11, 0x30(r1)
    stfs f12, 0x34(r1)
    stfs f10, 0x230(r1)
    stfs f11, 0x234(r1)
    stfs f12, 0x238(r1)
    stfs f7, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f9, 0x40(r1)
    stfs f7, 0x240(r1)
    stfs f8, 0x244(r1)
    stfs f9, 0x248(r1)
    stfs f4, 0x44(r1)
    stfs f5, 0x48(r1)
    stfs f6, 0x4c(r1)
    stfs f4, 0x22c(r1)
    stfs f5, 0x23c(r1)
    stfs f6, 0x24c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F9750
    lfs f2, 0x58(r1)
    lfs f0, lbl_808819C4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80141674_00001900
    lfs f3, 0x54(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    ble lbl_fn_80141674_000018F0
    lfs f0, lbl_808819C8
    b lbl_fn_80141674_000018F4
lbl_fn_80141674_000018F0:
    lfs f0, lbl_808819CC
lbl_fn_80141674_000018F4:
    fneg f0, f0
    stfs f0, 0x5c(r1)
    b lbl_fn_80141674_00001914
lbl_fn_80141674_00001900:
    lfs f1, 0x54(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x5c(r1)
lbl_fn_80141674_00001914:
    lfs f0, lbl_8088196C
    addi r3, r1, 0x5c
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80737810@ha
    psq_st f1, 0x0(r29), 0, 0
    fmr f2, f0
    stfs f2, 0xe0(r1)
    lfs f1, 0xdc(r1)
    lfd f2, lbl_80737810@l(r3)
    stfs f0, 0x64(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80881A0C
    fcmpo cr0, f3, f0
    ble lbl_fn_80141674_00001958
    lfs f0, lbl_80881A10
    fsubs f3, f3, f0
lbl_fn_80141674_00001958:
    lfs f0, lbl_80881A14
    fcmpo cr0, f3, f0
    bge lbl_fn_80141674_0000196C
    lfs f0, lbl_80881A10
    fadds f3, f3, f0
lbl_fn_80141674_0000196C:
    addi r4, r1, 0x19c
    lfs f2, 0x1a4(r1)
    addi r3, r1, 0x160
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x168(r1)
    lwz r0, 0x958(r31)
    stfs f3, 0x17c(r1)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_80141674_000019EC
    lwz r0, 0x54c(r31)
    rlwinm r3, r0, 0, 10, 10
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    beq lbl_fn_80141674_000019EC
    lwz r4, lbl_8087F0A8
    lis r0, 0x4330
    stw r0, 0x370(r1)
    lis r3, lbl_80737808@ha
    lwz r0, 0x30(r4)
    lfd f5, lbl_80737808@l(r3)
    mullw r0, r0, r0
    lfs f3, lbl_80881A2C
    lfs f0, 0x578(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x374(r1)
    lfd f4, 0x370(r1)
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fmadds f0, f31, f3, f0
    stfs f0, 0x578(r31)
lbl_fn_80141674_000019EC:
    lfs f3, 0x160(r1)
    lfs f0, 0x574(r31)
    lfs f5, 0x164(r1)
    fadds f3, f3, f0
    lfs f0, lbl_80881A38
    lfs f4, 0x168(r1)
    stfs f3, 0x160(r1)
    lfs f3, 0x578(r31)
    fadds f3, f5, f3
    stfs f3, 0x164(r1)
    fcmpo cr0, f3, f0
    lfs f3, 0x57c(r31)
    fadds f3, f4, f3
    stfs f3, 0x168(r1)
    bge lbl_fn_80141674_00001A2C
    stfs f0, 0x164(r1)
lbl_fn_80141674_00001A2C:
    lfs f3, lbl_8088196C
    li r0, 0x0
    lfs f0, lbl_80881964
    addi r3, r1, 0x184
    stw r0, 0x354(r1)
    addi r5, r1, 0x154
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x1c0
    stw r0, 0x358(r1)
    li r4, 0x79
    lfs f2, 0x18c(r1)
    stw r0, 0x35c(r1)
    stw r0, 0x360(r1)
    stfs f3, 0x148(r1)
    stfs f3, 0x14c(r1)
    stfs f0, 0x150(r1)
    lfs f0, 0x538(r31)
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f0
    stfs f2, 0x15c(r1)
    bl fn_805F8E70
    addi r4, r1, 0x148
    addi r3, r1, 0x1c0
    mr r5, r4
    bl fn_805F93C0
    psq_l f1, 0x614(r31), 0, 0
    addi r3, r1, 0x138
    lfs f2, 0x61c(r31)
    addi r4, r1, 0x14
    stfs f2, 0x140(r1)
    lfs f6, 0x18c(r1)
    psq_st f1, 0x0(r3), 0, 0
    lfs f5, 0x188(r1)
    lfs f7, 0x620(r31)
    stfs f7, 0x144(r1)
    lfs f3, 0x184(r1)
    lfs f0, 0x5ac(r31)
    lfs f4, 0x5a8(r31)
    fadds f2, f6, f0
    lfs f0, 0x5a4(r31)
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f2, 0x140(r1)
    stfs f0, 0x14(r1)
    stfs f4, 0x18(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lwz r0, 0x958(r31)
    stfs f2, 0x1c(r1)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_80141674_00001B0C
    lfs f0, 0x13c(r1)
    fsubs f0, f0, f7
    stfs f0, 0x13c(r1)
    b lbl_fn_80141674_00001B18
lbl_fn_80141674_00001B0C:
    lfs f0, 0x13c(r1)
    fadds f0, f0, f7
    stfs f0, 0x13c(r1)
lbl_fn_80141674_00001B18:
    lfs f5, 0x150(r1)
    mr r3, r31
    lfs f4, lbl_80881A60
    lfs f0, 0x14c(r1)
    fmuls f6, f5, f4
    lfs f3, 0x148(r1)
    fmuls f7, f0, f4
    lfs f0, 0x13c(r1)
    fmuls f8, f3, f4
    lfs f5, 0x138(r1)
    fsubs f4, f0, f7
    lfs f3, 0x140(r1)
    fsubs f5, f5, f8
    lfs f0, lbl_80881978
    fsubs f3, f3, f6
    stfs f8, 0xcc(r1)
    stfs f7, 0xd0(r1)
    stfs f6, 0xd4(r1)
    stfs f5, 0x138(r1)
    stfs f4, 0x13c(r1)
    stfs f3, 0x140(r1)
    stfs f0, 0x144(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    lwz r3, lbl_8087EE98
    lfs f1, 0x144(r1)
    addi r4, r1, 0x320
    addi r5, r1, 0x138
    addi r6, r1, 0x160
    addi r8, r31, 0x5b8
    li r9, 0x0
    bl fn_8004D388
    addi r5, r1, 0x330
    li r0, 0x0
    addi r4, r1, 0x184
    psq_l f1, 0x0(r5), 0, 0
    lfs f5, 0x140(r1)
    mr r29, r3
    lfs f4, 0x15c(r1)
    mr r3, r31
    lfs f3, 0x138(r1)
    lfs f0, 0x154(r1)
    fsubs f8, f5, f4
    psq_st f1, 0x0(r4), 0, 0
    fsubs f9, f3, f0
    lfs f2, 0x338(r1)
    lfs f5, 0x184(r1)
    fsubs f4, f2, f8
    lfs f3, 0x158(r1)
    fsubs f5, f5, f9
    lfs f0, lbl_8088196C
    lfs f7, 0x13c(r1)
    lfs f6, 0x158(r1)
    stfs f9, 0xc0(r1)
    fsubs f6, f7, f6
    stfs f8, 0xc8(r1)
    stfs f6, 0xc4(r1)
    stfs f5, 0x184(r1)
    stfs f4, 0x18c(r1)
    stfs f3, 0x188(r1)
    stfs f0, 0x164(r1)
    stw r0, 0x304(r1)
    stw r0, 0x308(r1)
    stw r0, 0x30c(r1)
    stw r0, 0x310(r1)
    bl fn_80179D44
    lfs f5, 0x18c(r1)
    addi r4, r1, 0xb0
    lfs f4, 0x5ac(r31)
    addi r5, r1, 0x8
    lfs f3, 0x188(r1)
    oris r7, r3, 0x4000
    fadds f6, f5, f4
    lfs f0, 0x5a8(r31)
    lwz r0, 0x958(r31)
    fadds f5, f3, f0
    lfs f3, 0x184(r1)
    lfs f0, 0x5a4(r31)
    lfs f2, 0x61c(r31)
    rlwinm r0, r0, 0, 25, 25
    fadds f0, f3, f0
    stfs f2, 0xb8(r1)
    fmr f2, f6
    psq_l f1, 0x614(r31), 0, 0
    cmplwi r0, 0x40
    lfs f4, 0x620(r31)
    stfs f5, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f4, 0xbc(r1)
    stfs f6, 0x10(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xb8(r1)
    bne lbl_fn_80141674_00001CA4
    lfs f0, 0xb4(r1)
    fsubs f0, f0, f4
    stfs f0, 0xb4(r1)
    b lbl_fn_80141674_00001CB0
lbl_fn_80141674_00001CA4:
    lfs f0, 0xb4(r1)
    fadds f0, f0, f4
    stfs f0, 0xb4(r1)
lbl_fn_80141674_00001CB0:
    lfs f3, 0x150(r1)
    addi r5, r1, 0x138
    lfs f4, lbl_808819B0
    addi r6, r1, 0x98
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r1, 0x2d0
    fmuls f7, f3, f4
    lfs f0, 0x14c(r1)
    lfs f3, 0x148(r1)
    addi r8, r31, 0x5b8
    lfs f2, 0xb8(r1)
    fmuls f8, f0, f4
    psq_st f1, 0x0(r5), 0, 0
    fmuls f9, f3, f4
    lfs f6, 0xbc(r1)
    li r9, 0x0
    lfs f0, 0x13c(r1)
    lfs f3, 0x138(r1)
    fadds f4, f0, f8
    stfs f2, 0x140(r1)
    fadds f5, f3, f9
    lfs f0, lbl_8088196C
    stfs f6, 0x144(r1)
    fadds f3, f2, f7
    lfs f1, 0x60c(r31)
    lwz r3, lbl_8087EE98
    stfs f1, 0x144(r1)
    stfs f9, 0xa4(r1)
    stfs f8, 0xa8(r1)
    stfs f7, 0xac(r1)
    stfs f5, 0x138(r1)
    stfs f4, 0x13c(r1)
    stfs f3, 0x140(r1)
    stfs f0, 0x98(r1)
    stfs f0, 0x9c(r1)
    stfs f0, 0xa0(r1)
    bl fn_8004D388
    cmpwi r3, 0x0
    beq lbl_fn_80141674_00001DB4
    lfs f4, lbl_808819B0
    addi r4, r1, 0x8c
    lfs f3, 0x14c(r1)
    addi r3, r1, 0x184
    lfs f0, 0x148(r1)
    fmuls f6, f3, f4
    lfs f5, 0x150(r1)
    fmuls f7, f0, f4
    lfs f0, 0x2e0(r1)
    fmuls f4, f5, f4
    lfs f3, 0x2e4(r1)
    fsubs f5, f3, f6
    lfs f3, 0x2e8(r1)
    fsubs f8, f0, f7
    lfs f0, 0x158(r1)
    stfs f5, 0x90(r1)
    fsubs f2, f3, f4
    stfs f8, 0x8c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f7, 0x80(r1)
    stfs f6, 0x84(r1)
    stfs f4, 0x88(r1)
    stfs f2, 0x94(r1)
    stfs f2, 0x18c(r1)
    stfs f0, 0x188(r1)
lbl_fn_80141674_00001DB4:
    cmpwi r29, 0x0
    beq lbl_fn_80141674_00001E58
    lwz r0, 0x35c(r1)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_80141674_00001DF0
    lwz r0, 0x54c(r31)
    addi r4, r1, 0x364
    addi r3, r31, 0x13a0
    oris r0, r0, 0x2
    stw r0, 0x54c(r31)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x36c(r1)
    stfs f2, 0x13a8(r31)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_80141674_00001DF0:
    lwz r0, 0x35c(r1)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_80141674_00001E24
    lwz r0, 0x54c(r31)
    addi r4, r1, 0x364
    addi r3, r31, 0x13a0
    oris r0, r0, 0x4
    stw r0, 0x54c(r31)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x36c(r1)
    stfs f2, 0x13a8(r31)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_80141674_00001E24:
    lwz r0, 0x35c(r1)
    rlwinm r0, r0, 0, 22, 22
    cmplwi r0, 0x200
    bne lbl_fn_80141674_00001E58
    lwz r0, 0x54c(r31)
    addi r4, r1, 0x364
    addi r3, r31, 0x13a0
    oris r0, r0, 0x10
    stw r0, 0x54c(r31)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x36c(r1)
    stfs f2, 0x13a8(r31)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_80141674_00001E58:
    addi r4, r1, 0x184
    lfs f2, 0x18c(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r31, 0x528
    stfs f2, 0x530(r31)
    addi r5, r1, 0x178
    lfs f2, 0x180(r1)
    addi r6, r31, 0xc20
    psq_st f1, 0x0(r3), 0, 0
    addi r4, r1, 0x1a8
    psq_l f1, 0x0(r5), 0, 0
    addi r8, r31, 0xc2c
    psq_st f1, 0x534(r31), 0, 0
    addi r7, r1, 0x1b4
    psq_l f1, 0x0(r6), 0, 0
    addi r5, r1, 0x12c
    stfs f2, 0x53c(r31)
    lfs f2, 0xc28(r31)
    lfs f0, 0x164(r1)
    stfs f0, 0x578(r31)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1b0(r1)
    lfs f0, 0x1ac(r1)
    lfs f2, 0xc34(r31)
    psq_l f1, 0x0(r8), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x1bc(r1)
    stfs f0, 0x1b8(r1)
    bl fn_80050A1C
    lfs f4, 0xc28(r31)
    addi r3, r1, 0x12c
    lfs f0, 0xc34(r31)
    lfs f3, 0xc20(r31)
    fsubs f5, f4, f0
    lfs f0, 0xc2c(r31)
    lfs f4, 0xc24(r31)
    fsubs f6, f3, f0
    lfs f3, 0xc30(r31)
    fmuls f0, f5, f5
    fsubs f3, f4, f3
    lfs f2, 0x134(r1)
    psq_l f1, 0x0(r3), 0, 0
    fmadds f0, f6, f6, f0
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
    fmr f1, f0
    stfs f6, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f5, 0x70(r1)
    bl fn_8068B100
    lfs f4, 0xc28(r31)
    frsp f28, f1
    lfs f0, 0x134(r1)
    lfs f3, 0xc20(r31)
    fsubs f5, f4, f0
    lfs f0, 0x12c(r1)
    lfs f4, 0xc24(r31)
    fsubs f6, f3, f0
    lfs f3, 0x130(r1)
    fmuls f0, f5, f5
    fsubs f3, f4, f3
    stfs f6, 0x74(r1)
    fmadds f1, f6, f6, f0
    stfs f3, 0x78(r1)
    stfs f5, 0x7c(r1)
    bl fn_8068B100
    frsp f4, f1
    lfs f0, 0xc30(r31)
    lfs f3, 0xc24(r31)
    addi r29, r1, 0x120
    lfs f2, 0x530(r31)
    addi r30, r1, 0x114
    fdivs f5, f4, f28
    lfs f4, lbl_808819F8
    mr r3, r31
    fsubs f0, f0, f3
    fmadds f0, f5, f0, f3
    stfs f0, 0x52c(r31)
    psq_l f1, 0x528(r31), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lwz r28, lbl_8087EE98
    psq_st f1, 0x0(r30), 0, 0
    lfs f3, 0x124(r1)
    lfs f0, 0x118(r1)
    fadds f3, f3, f4
    stfs f2, 0x128(r1)
    fsubs f0, f0, f4
    stfs f3, 0x124(r1)
    stfs f2, 0x11c(r1)
    stfs f0, 0x118(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r28
    mr r5, r29
    mr r6, r30
    addi r4, r1, 0x320
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80141674_00002184
    lfs f0, 0x328(r1)
    li r4, 0x0
    stfs f0, 0x52c(r31)
    li r3, 0x0
    lwz r5, 0x354(r1)
    cmpwi r5, 0x0
    beq lbl_fn_80141674_00002018
    lwz r0, 0x0(r5)
    cmplwi r0, 0x1a
    bne lbl_fn_80141674_00002018
    li r3, 0x1
lbl_fn_80141674_00002018:
    cmpwi r3, 0x0
    beq lbl_fn_80141674_00002038
    lwz r0, 0x54c(r31)
    rlwinm r3, r0, 0, 5, 5
    subis r0, r3, 0x400
    cmplwi r0, 0x0
    beq lbl_fn_80141674_00002038
    li r4, 0x1
lbl_fn_80141674_00002038:
    lwz r3, 0x12a4(r31)
    rlwimi r3, r4, 3, 28, 28
    stw r3, 0x12a4(r31)
    extrwi. r0, r3, 1, 28
    beq lbl_fn_80141674_00002184
    clrlwi r0, r3, 2
    stw r0, 0x12a4(r31)
    lwz r3, lbl_8087F430
    lwz r4, 0x10d8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80141674_000020AC
    lwz r3, 0xc38(r31)
    cmpwi r3, 0x0
    ble lbl_fn_80141674_000020AC
    lwz r0, 0xc3c(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80141674_000020AC
    subi r0, r3, 0x1
    lwz r3, 0xb0(r4)
    slwi r0, r0, 6
    li r5, 0x0
    add r3, r3, r0
    stw r5, 0x3c(r3)
    lwz r3, 0xc3c(r31)
    lwz r4, 0xb0(r4)
    subi r0, r3, 0x1
    slwi r0, r0, 6
    add r3, r4, r0
    stw r5, 0x3c(r3)
lbl_fn_80141674_000020AC:
    lwz r4, 0x48(r31)
    cmpwi r4, 0x0
    bne lbl_fn_80141674_000020E0
    lwz r3, lbl_8087F0A8
    lwz r0, 0x278(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80141674_000020E0
    lwz r3, 0x5c(r31)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80141674_000020E0
    li r0, 0x1
    b lbl_fn_80141674_00002100
lbl_fn_80141674_000020E0:
    cmpwi r4, 0x0
    bne lbl_fn_80141674_000020FC
    lwz r0, 0x12a8(r31)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_80141674_000020FC
    li r0, 0x1
    b lbl_fn_80141674_00002100
lbl_fn_80141674_000020FC:
    li r0, 0x0
lbl_fn_80141674_00002100:
    cmpwi r0, 0x0
    beq lbl_fn_80141674_00002184
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_80141674_00002164
    lwz r3, 0x648(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80141674_00002130
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_80141674_00002130:
    lwz r3, 0x64c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80141674_00002144
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_80141674_00002144:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r31)
    mr r3, r31
    stw r0, 0x648(r31)
    stw r0, 0x64c(r31)
    bl fn_8014C228
    b lbl_fn_80141674_00002184
lbl_fn_80141674_00002164:
    lwz r0, 0x674(r31)
    cmpwi r0, 0x0
    blt lbl_fn_80141674_00002184
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_80141674_00002184:
    lwz r0, 0x3d4(r1)
    psq_l f31, 0x3c8(r1), 0, 0
    lfd f31, 0x3c0(r1)
    psq_l f30, 0x3b8(r1), 0, 0
    lfd f30, 0x3b0(r1)
    psq_l f29, 0x3a8(r1), 0, 0
    lfd f29, 0x3a0(r1)
    psq_l f28, 0x398(r1), 0, 0
    lfd f28, 0x390(r1)
    lwz r31, 0x38c(r1)
    lwz r30, 0x388(r1)
    lwz r29, 0x384(r1)
    lwz r28, 0x380(r1)
    mtlr r0
    addi r1, r1, 0x3d0
    blr
}
