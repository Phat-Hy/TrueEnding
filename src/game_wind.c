#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void fn_80044BD4(void);
extern void fn_8004ED34(void);
extern void fn_80092814(void);
extern void fn_80097D40(void);
extern void fn_80097D7C(void);
extern void fn_800E7BB0(void);
extern void fn_800EB270(void);
extern void fn_800EB4AC(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_8010CA34(void);
extern void fn_80134134(void);
extern void fn_80139560(void);
extern void fn_80144710(void);
extern void fn_80153B44(void);
extern void fn_801562A0(void);
extern void fn_80158BB4(void);
extern void fn_80158CA4(void);
extern void fn_80158EF0(void);
extern void fn_8015F568(void);
extern void fn_80165C5C(void);
extern void fn_8016E484(void);
extern void fn_8016EB48(void);
extern void fn_8016F67C(void);
extern void fn_801725EC(void);
extern void fn_8017C9AC(void);
extern void fn_801EA01C(void);
extern void fn_80219E6C(void);
extern void fn_8021AF98(void);
extern void fn_803748E0(void);
extern void fn_80389838(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80735324[];
extern u8 lbl_80766768[];
extern u8 lbl_80779B3C[];
extern u8 lbl_80779B48[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F120;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_808812D8;
extern u32 lbl_808812DC;
extern u32 lbl_808812E4;
extern u32 lbl_8088130C;
extern u32 lbl_80881318;
extern u32 lbl_80881328;
extern u32 lbl_80881330;
extern u32 lbl_80881334;
extern u32 lbl_80881348;
extern u32 lbl_80881350;
extern u32 lbl_80881354;
extern u32 lbl_80881358;
extern u32 lbl_8088135C;
extern u32 lbl_80881360;
extern u32 lbl_8088136C;
extern u32 lbl_80881384;
extern u32 lbl_80881388;
extern u32 lbl_8088138C;
extern u32 lbl_80881390;
extern u32 lbl_80881394;
extern u32 lbl_80881398;
extern u32 lbl_8088139C;

/* Function declarations */
void fn_800E8FA4(void);
void fn_800E8FAC(void);
void fn_800E8FB4(void);
void fn_800E8FB8(void);
void fn_800E9110(void);
void fn_800E932C(void);
void fn_800E9ED8(void);

asm void fn_800E8FA4(void)
{
    nofralloc
    lfs f1, lbl_80881384
    blr
}

asm void fn_800E8FAC(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_800E8FB4(void)
{
    nofralloc
    blr
}

asm void fn_800E8FB8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    lwz r0, 0x648(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800E8FB8_00000150
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    li r6, 0x1
    bl fn_800E932C
    lwz r3, lbl_8087F120
    bl fn_801EA01C
    mr r31, r3
    addi r3, r30, 0x7d4
    li r4, 0x3d
    bl fn_80134134
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_800E8FB8_000000A8
    lwz r3, 0x0(r3)
    lwz r3, 0x4(r3)
    bl fn_80219E6C
    cmpwi r3, 0x0
    beq lbl_fn_800E8FB8_000000A8
    lwz r3, lbl_8087F120
    lwz r0, 0x150(r3)
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r0, 0x50(r3)
    cmpwi r0, 0x65
    bne lbl_fn_800E8FB8_000000A8
    lwz r3, 0x0(r29)
    lwz r31, 0x4(r3)
lbl_fn_800E8FB8_000000A8:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_800E8FB8_00000134
    lwz r3, lbl_8087F120
    lwz r0, 0x150(r3)
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r0, 0x50(r3)
    cmpwi r0, 0x65
    bne lbl_fn_800E8FB8_00000134
    lwz r3, 0x5c(r30)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x3
    beq lbl_fn_800E8FB8_000000F0
    lwz r3, 0x50(r30)
    subis r0, r3, 0xa
    cmplwi r0, 0xae72
    bne lbl_fn_800E8FB8_00000120
lbl_fn_800E8FB8_000000F0:
    lwz r0, 0x145c(r30)
    slwi r0, r0, 3
    add r3, r30, r0
    lwz r3, 0xaa4(r3)
    bl fn_80219E6C
    cmpwi r3, 0x0
    beq lbl_fn_800E8FB8_00000134
    lwz r0, 0xc8(r3)
    cmpwi r0, 0x0
    ble lbl_fn_800E8FB8_00000134
    mr r31, r0
    b lbl_fn_800E8FB8_00000134
lbl_fn_800E8FB8_00000120:
    subis r3, r3, 0xb
    addi r0, r3, 0x518a
    cmplwi r0, 0x1
    bgt lbl_fn_800E8FB8_00000134
    lwz r31, 0xaac(r30)
lbl_fn_800E8FB8_00000134:
    cmpwi r31, 0x0
    ble lbl_fn_800E8FB8_00000150
    mr r3, r30
    mr r4, r31
    addi r5, r1, 0x14
    addi r6, r1, 0x8
    bl fn_80165C5C
lbl_fn_800E8FB8_00000150:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800E9110(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    addi r4, r3, 0xaa0
    stw r0, 0xd4(r1)
    stw r31, 0xcc(r1)
    mr r31, r3
    stw r30, 0xc8(r1)
    lwz r0, 0x145c(r3)
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r3, 0x4(r3)
    bl fn_80219E6C
    psq_l f1, 0x528(r31), 0, 0
    addi r4, r1, 0x5c
    lfs f2, 0x530(r31)
    mr r30, r3
    lfs f3, lbl_808812DC
    lfs f0, lbl_80881388
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x64(r1)
    stfs f3, 0x50(r1)
    stfs f3, 0x54(r1)
    stfs f0, 0x58(r1)
    lwz r0, 0x12a4(r31)
    srwi. r0, r0, 31
    beq lbl_fn_800E9110_00000234
    lwz r0, 0xc48(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800E9110_00000234
    mr r3, r31
    addi r4, r1, 0x44
    addi r5, r1, 0x38
    li r6, 0x1
    bl fn_800E932C
    lfs f0, 0x40(r1)
    addi r4, r1, 0x2c
    lfs f4, lbl_80881388
    addi r3, r1, 0x50
    lfs f3, 0x3c(r1)
    fmuls f2, f0, f4
    lfs f0, 0x38(r1)
    fmuls f3, f3, f4
    fmuls f0, f0, f4
    stfs f2, 0x34(r1)
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x58(r1)
    b lbl_fn_800E9110_00000254
lbl_fn_800E9110_00000234:
    lfs f1, 0x538(r31)
    addi r3, r1, 0x98
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x50
    addi r3, r1, 0x98
    mr r5, r4
    bl fn_805F93C0
lbl_fn_800E9110_00000254:
    lfs f3, 0x5c(r1)
    lfs f0, 0x50(r1)
    lfs f5, 0x60(r1)
    fadds f6, f3, f0
    lfs f4, 0x54(r1)
    lfs f3, 0x64(r1)
    lfs f0, 0x58(r1)
    fadds f4, f5, f4
    stfs f6, 0x5c(r1)
    fadds f0, f3, f0
    stfs f4, 0x60(r1)
    stfs f0, 0x64(r1)
    lbz r3, 0x2(r30)
    subi r0, r3, 0x3
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_fn_800E9110_0000032C
    lfs f3, lbl_808812DC
    addi r3, r1, 0x68
    lfs f0, lbl_808812D8
    li r4, 0x79
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x68
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x10(r1)
    addi r4, r1, 0x20
    lfs f4, lbl_8088138C
    addi r3, r1, 0x5c
    lfs f0, 0xc(r1)
    fmuls f5, f5, f4
    lfs f3, 0x8(r1)
    fmuls f6, f0, f4
    lfs f0, 0x530(r31)
    fmuls f4, f3, f4
    lfs f3, 0x52c(r31)
    fadds f2, f0, f5
    lfs f0, 0x528(r31)
    fadds f3, f3, f6
    stfs f4, 0x14(r1)
    fadds f0, f0, f4
    stfs f3, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f6, 0x18(r1)
    stfs f5, 0x1c(r1)
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x64(r1)
lbl_fn_800E9110_0000032C:
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_800E9110_00000348
    lwz r3, lbl_8087F430
    li r4, 0x3
    addi r3, r3, 0x6c
    bl fn_80389838
lbl_fn_800E9110_00000348:
    mr r3, r31
    mr r6, r30
    addi r4, r1, 0x5c
    li r5, 0x0
    bl fn_8015F568
    lwz r0, 0x12a4(r31)
    li r3, 0x0
    stw r3, 0xfc0(r31)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x12a4(r31)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_800E932C(void)
{
    nofralloc
    stwu r1, -0x340(r1)
    mflr r0
    stw r0, 0x344(r1)
    addi r11, r1, 0x330
    stfd f31, 0x330(r1)
    psq_st f31, 0x338(r1), 0, 0
    bl _savegpr_26
    lwz r7, 0x648(r3)
    addi r31, r1, 0x1dc
    psq_l f1, 0x528(r3), 0, 0
    mr r27, r3
    lfs f2, 0x530(r3)
    cmpwi r7, 0x0
    psq_st f1, 0x0(r31), 0, 0
    mr r28, r4
    mr r29, r5
    mr r30, r6
    stfs f2, 0x1e4(r1)
    beq lbl_fn_800E932C_00000400
    lwz r0, 0x4(r7)
    cmpwi r0, 0x0
    beq lbl_fn_800E932C_00000400
    mr r4, r7
    addi r3, r1, 0x1b8
    bl fn_80044BD4
    addi r3, r1, 0x1b8
    lfs f2, 0x1c0(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x1e4(r1)
lbl_fn_800E932C_00000400:
    lwz r0, 0x12a4(r27)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_800E932C_000004E8
    lwz r3, 0x50(r27)
    subis r0, r3, 0xa
    cmplwi r0, 0xae76
    bne lbl_fn_800E932C_00000480
    lis r4, lbl_80735324@ha
    addi r3, r27, 0xb0
    addi r4, r4, lbl_80735324@l
    li r5, 0x0
    addi r4, r4, 0x6
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_800E932C_00000444
    li r5, 0x0
    b lbl_fn_800E932C_00000450
lbl_fn_800E932C_00000444:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r27)
    add r5, r3, r0
lbl_fn_800E932C_00000450:
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x1ac
    lfs f3, 0xc(r5)
    addi r3, r1, 0x1dc
    stfs f3, 0x1ac(r1)
    lfs f2, 0x2c(r5)
    stfs f0, 0x1b0(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x1b4(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1e4(r1)
    b lbl_fn_800E932C_000004E8
lbl_fn_800E932C_00000480:
    cmplwi r0, 0xae77
    bne lbl_fn_800E932C_000004E8
    lis r4, lbl_80735324@ha
    addi r3, r27, 0xb0
    addi r4, r4, lbl_80735324@l
    li r5, 0x0
    addi r4, r4, 0x13
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_800E932C_000004B0
    li r5, 0x0
    b lbl_fn_800E932C_000004BC
lbl_fn_800E932C_000004B0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r27)
    add r5, r3, r0
lbl_fn_800E932C_000004BC:
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x1a0
    lfs f3, 0xc(r5)
    addi r3, r1, 0x1dc
    stfs f3, 0x1a0(r1)
    lfs f2, 0x2c(r5)
    stfs f0, 0x1a4(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x1a8(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1e4(r1)
lbl_fn_800E932C_000004E8:
    lwz r3, 0x12a4(r27)
    srwi. r0, r3, 31
    beq lbl_fn_800E932C_00000A18
    lwz r0, 0xc48(r27)
    cmpwi r0, 0x0
    bne lbl_fn_800E932C_000006AC
    mr r3, r27
    bl fn_80153B44
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_800E932C_000005B0
    lfs f1, 0x538(r27)
    addi r3, r1, 0x248
    li r4, 0x79
    bl fn_805F8E70
    lfs f3, lbl_808812DC
    mr r4, r29
    lfs f0, lbl_808812D8
    mr r5, r29
    stfs f3, 0x0(r29)
    addi r3, r1, 0x248
    stfs f3, 0x4(r29)
    stfs f0, 0x8(r29)
    bl fn_805F93C0
    lfs f4, lbl_80881390
    addi r4, r1, 0x1d0
    lfs f3, lbl_80881348
    mr r5, r4
    lfs f0, lbl_80881360
    addi r3, r1, 0x248
    stfs f4, 0x1d0(r1)
    stfs f3, 0x1d4(r1)
    stfs f0, 0x1d8(r1)
    bl fn_805F93C0
    psq_l f1, 0x528(r27), 0, 0
    lfs f2, 0x530(r27)
    stfs f2, 0x8(r28)
    psq_st f1, 0x0(r28), 0, 0
    lfs f4, 0x0(r28)
    lfs f0, 0x1d0(r1)
    lfs f3, 0x4(r28)
    fadds f0, f4, f0
    stfs f0, 0x0(r28)
    lfs f0, 0x1d4(r1)
    fadds f0, f3, f0
    stfs f0, 0x4(r28)
    lfs f0, 0x1d8(r1)
    fadds f0, f2, f0
    stfs f0, 0x8(r28)
    b lbl_fn_800E932C_00000ED4
lbl_fn_800E932C_000005B0:
    lfs f3, lbl_808812DC
    addi r3, r1, 0x1e8
    lfs f0, lbl_808812E4
    li r4, 0x79
    stfs f3, 0x0(r29)
    stfs f3, 0x4(r29)
    stfs f0, 0x8(r29)
    lfs f1, 0x538(r27)
    bl fn_805F8E70
    mr r4, r29
    mr r5, r29
    addi r3, r1, 0x1e8
    bl fn_805F93C0
    cmpwi r30, 0x1
    lfs f31, lbl_808812DC
    beq lbl_fn_800E932C_000005FC
    cmpwi r30, 0x2
    beq lbl_fn_800E932C_00000604
    b lbl_fn_800E932C_00000608
lbl_fn_800E932C_000005FC:
    lfs f31, lbl_80881330
    b lbl_fn_800E932C_00000608
lbl_fn_800E932C_00000604:
    lfs f31, lbl_80881334
lbl_fn_800E932C_00000608:
    psq_l f1, 0x528(r27), 0, 0
    lfs f2, 0x530(r27)
    stfs f2, 0x8(r28)
    lfs f4, lbl_8088138C
    psq_st f1, 0x0(r28), 0, 0
    lfs f0, 0x5b0(r27)
    lfs f3, 0x8(r29)
    fadds f6, f4, f0
    lfs f5, 0x4(r29)
    lfs f0, 0x0(r29)
    lfs f4, 0x0(r28)
    fmuls f7, f3, f6
    lfs f3, 0x4(r28)
    fmuls f5, f5, f6
    fmuls f6, f0, f6
    stfs f7, 0x19c(r1)
    fadds f0, f2, f7
    fadds f3, f3, f5
    stfs f6, 0x194(r1)
    fadds f4, f4, f6
    stfs f3, 0x4(r28)
    stfs f4, 0x0(r28)
    stfs f0, 0x8(r28)
    lfs f0, 0x5b4(r27)
    stfs f5, 0x198(r1)
    fadds f0, f3, f0
    stfs f0, 0x4(r28)
    lfs f1, 0x538(r27)
    bl fn_8068A850
    frsp f3, f1
    lfs f0, 0x0(r28)
    fmadds f0, f31, f3, f0
    stfs f0, 0x0(r28)
    lfs f1, 0x538(r27)
    bl fn_8068AD58
    frsp f4, f1
    lfs f0, 0x8(r28)
    fneg f3, f31
    fmadds f0, f3, f4, f0
    stfs f0, 0x8(r28)
    b lbl_fn_800E932C_00000ED4
lbl_fn_800E932C_000006AC:
    lwz r31, lbl_8087F430
    addi r26, r1, 0x188
    addi r5, r1, 0x5c
    lfs f3, 0x27c(r31)
    mr r3, r26
    lfs f0, 0x270(r31)
    mr r4, r26
    lfs f5, 0x278(r31)
    fsubs f2, f3, f0
    lfs f4, 0x26c(r31)
    lfs f3, 0x274(r31)
    lfs f0, 0x268(r31)
    fsubs f4, f5, f4
    stfs f2, 0x64(r1)
    fsubs f0, f3, f0
    stfs f4, 0x60(r1)
    stfs f0, 0x5c(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x190(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r26), 0, 0
    mr r4, r27
    lfs f2, 0x190(r1)
    addi r3, r1, 0x17c
    stfs f2, 0x8(r29)
    psq_st f1, 0x0(r29), 0, 0
    bl fn_8017C9AC
    addi r3, r1, 0x17c
    lfs f2, 0x184(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x8(r28)
    lwz r3, 0x648(r27)
    cmpwi r3, 0x0
    beq lbl_fn_800E932C_00000ED4
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800E932C_00000ED4
    li r0, 0x0
    stw r0, 0x2fc(r1)
    lfs f5, lbl_8088130C
    frsp f4, f2
    stw r0, 0x300(r1)
    mr r5, r28
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x2c8
    stw r0, 0x304(r1)
    addi r6, r1, 0x170
    addi r8, r27, 0x5b8
    stw r0, 0x308(r1)
    li r7, 0x4
    li r9, 0x0
    lfs f0, 0x8(r29)
    lfs f3, 0x4(r29)
    fmuls f6, f0, f5
    lfs f0, 0x0(r29)
    fmuls f7, f3, f5
    lfs f3, 0x4(r28)
    fmuls f5, f0, f5
    lfs f0, 0x0(r28)
    fadds f4, f4, f6
    stfs f5, 0x164(r1)
    fadds f3, f3, f7
    fadds f0, f0, f5
    stfs f7, 0x168(r1)
    stfs f6, 0x16c(r1)
    stfs f0, 0x170(r1)
    stfs f3, 0x174(r1)
    stfs f4, 0x178(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_800E932C_00000ED4
    cmpwi r30, 0x0
    beq lbl_fn_800E932C_0000081C
    lfs f3, 0x2d4(r1)
    addi r3, r1, 0x158
    lfs f0, 0x1e4(r1)
    lfs f5, 0x2d0(r1)
    fsubs f2, f3, f0
    lfs f4, 0x1e0(r1)
    lfs f3, 0x2cc(r1)
    lfs f0, 0x1dc(r1)
    fsubs f4, f5, f4
    stfs f2, 0x160(r1)
    fsubs f0, f3, f0
    stfs f4, 0x15c(r1)
    stfs f0, 0x158(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x8(r29)
    b lbl_fn_800E932C_000008C8
lbl_fn_800E932C_0000081C:
    lis r4, lbl_80735324@ha
    addi r3, r27, 0xb0
    addi r4, r4, lbl_80735324@l
    li r5, 0x0
    addi r4, r4, 0x20
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_800E932C_00000844
    li r3, 0x0
    b lbl_fn_800E932C_00000850
lbl_fn_800E932C_00000844:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r27)
    add r3, r3, r0
lbl_fn_800E932C_00000850:
    cmpwi r3, 0x0
    beq lbl_fn_800E932C_00000878
    lfs f0, 0x2c(r3)
    addi r4, r1, 0x140
    lfs f3, 0x1c(r3)
    lfs f4, 0xc(r3)
    stfs f4, 0x140(r1)
    stfs f3, 0x144(r1)
    stfs f0, 0x148(r1)
    b lbl_fn_800E932C_00000888
lbl_fn_800E932C_00000878:
    lwz r4, 0x648(r27)
    addi r3, r1, 0x134
    bl fn_80044BD4
    addi r4, r1, 0x134
lbl_fn_800E932C_00000888:
    lfs f3, 0x2d4(r1)
    addi r3, r1, 0x14c
    lfs f0, 0x8(r4)
    lfs f5, 0x2d0(r1)
    fsubs f2, f3, f0
    lfs f4, 0x4(r4)
    lfs f3, 0x2cc(r1)
    lfs f0, 0x0(r4)
    fsubs f4, f5, f4
    stfs f2, 0x154(r1)
    fsubs f0, f3, f0
    stfs f4, 0x150(r1)
    stfs f0, 0x14c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x8(r29)
lbl_fn_800E932C_000008C8:
    mr r3, r29
    bl fn_805F9920
    lfs f0, lbl_80881394
    fcmpo cr0, f1, f0
    bge lbl_fn_800E932C_00000940
    lfs f3, 0x27c(r31)
    addi r26, r1, 0x128
    lfs f0, 0x270(r31)
    addi r5, r1, 0x50
    lfs f5, 0x278(r31)
    mr r3, r26
    fsubs f2, f3, f0
    lfs f4, 0x26c(r31)
    lfs f3, 0x274(r31)
    mr r4, r26
    lfs f0, 0x268(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x130(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x130(r1)
    stfs f2, 0x8(r29)
    psq_st f1, 0x0(r29), 0, 0
    b lbl_fn_800E932C_0000094C
lbl_fn_800E932C_00000940:
    mr r3, r29
    mr r4, r29
    bl fn_805F98D0
lbl_fn_800E932C_0000094C:
    lfs f3, 0x27c(r31)
    addi r26, r1, 0x11c
    lfs f0, 0x270(r31)
    addi r5, r1, 0x44
    lfs f5, 0x278(r31)
    mr r3, r26
    fsubs f2, f3, f0
    lfs f4, 0x26c(r31)
    lfs f3, 0x274(r31)
    mr r4, r26
    lfs f0, 0x268(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x48(r1)
    stfs f0, 0x44(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x124(r1)
    bl fn_805F98D0
    mr r3, r29
    mr r4, r26
    bl fn_805F9990
    lfs f0, lbl_80881398
    fcmpo cr0, f1, f0
    bge lbl_fn_800E932C_00000ED4
    lfs f3, 0x27c(r31)
    addi r26, r1, 0x110
    lfs f0, 0x270(r31)
    addi r5, r1, 0x38
    lfs f5, 0x278(r31)
    mr r3, r26
    fsubs f2, f3, f0
    lfs f4, 0x26c(r31)
    lfs f3, 0x274(r31)
    mr r4, r26
    lfs f0, 0x268(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x118(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x118(r1)
    stfs f2, 0x8(r29)
    psq_st f1, 0x0(r29), 0, 0
    b lbl_fn_800E932C_00000ED4
lbl_fn_800E932C_00000A18:
    extrwi. r0, r3, 1, 25
    beq lbl_fn_800E932C_00000E3C
    lwz r31, lbl_8087F430
    addi r26, r1, 0x104
    addi r5, r1, 0x2c
    lfs f3, 0x27c(r31)
    mr r3, r26
    lfs f0, 0x270(r31)
    mr r4, r26
    lfs f5, 0x278(r31)
    fsubs f2, f3, f0
    lfs f4, 0x26c(r31)
    lfs f3, 0x274(r31)
    lfs f0, 0x268(r31)
    fsubs f4, f5, f4
    stfs f2, 0x34(r1)
    fsubs f0, f3, f0
    stfs f4, 0x30(r1)
    stfs f0, 0x2c(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x10c(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r26), 0, 0
    mr r4, r27
    lfs f2, 0x10c(r1)
    addi r3, r1, 0xf8
    stfs f2, 0x8(r29)
    psq_st f1, 0x0(r29), 0, 0
    bl fn_8017C9AC
    addi r3, r1, 0xf8
    lfs f2, 0x100(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x8(r28)
    lwz r0, 0x648(r27)
    cmpwi r0, 0x0
    beq lbl_fn_800E932C_00000ED4
    li r0, 0x0
    stw r0, 0x2ac(r1)
    lfs f5, lbl_8088130C
    frsp f4, f2
    stw r0, 0x2b0(r1)
    mr r5, r28
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x278
    stw r0, 0x2b4(r1)
    addi r6, r1, 0xec
    addi r8, r27, 0x5b8
    stw r0, 0x2b8(r1)
    li r7, 0x4
    li r9, 0x0
    lfs f0, 0x8(r29)
    lfs f3, 0x4(r29)
    fmuls f6, f0, f5
    lfs f0, 0x0(r29)
    fmuls f7, f3, f5
    lfs f3, 0x4(r28)
    fmuls f5, f0, f5
    lfs f0, 0x0(r28)
    fadds f4, f4, f6
    stfs f5, 0xe0(r1)
    fadds f3, f3, f7
    fadds f0, f0, f5
    stfs f7, 0xe4(r1)
    stfs f6, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f3, 0xf0(r1)
    stfs f4, 0xf4(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_800E932C_00000ED4
    cmpwi r30, 0x0
    beq lbl_fn_800E932C_00000B84
    lfs f3, 0x284(r1)
    addi r3, r1, 0xd4
    lfs f0, 0x1e4(r1)
    lfs f5, 0x280(r1)
    fsubs f2, f3, f0
    lfs f4, 0x1e0(r1)
    lfs f3, 0x27c(r1)
    lfs f0, 0x1dc(r1)
    fsubs f4, f5, f4
    stfs f2, 0xdc(r1)
    fsubs f0, f3, f0
    stfs f4, 0xd8(r1)
    stfs f0, 0xd4(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x8(r29)
    b lbl_fn_800E932C_00000CEC
lbl_fn_800E932C_00000B84:
    lwz r0, 0x12a8(r27)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_800E932C_00000C40
    lis r4, lbl_80735324@ha
    addi r3, r27, 0xb0
    addi r4, r4, lbl_80735324@l
    li r5, 0x0
    addi r4, r4, 0x27
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_800E932C_00000BB8
    li r3, 0x0
    b lbl_fn_800E932C_00000BC4
lbl_fn_800E932C_00000BB8:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r27)
    add r3, r3, r0
lbl_fn_800E932C_00000BC4:
    cmpwi r3, 0x0
    beq lbl_fn_800E932C_00000BEC
    lfs f0, 0x2c(r3)
    addi r4, r1, 0xbc
    lfs f3, 0x1c(r3)
    lfs f4, 0xc(r3)
    stfs f4, 0xbc(r1)
    stfs f3, 0xc0(r1)
    stfs f0, 0xc4(r1)
    b lbl_fn_800E932C_00000BFC
lbl_fn_800E932C_00000BEC:
    lwz r4, 0x648(r27)
    addi r3, r1, 0xb0
    bl fn_80044BD4
    addi r4, r1, 0xb0
lbl_fn_800E932C_00000BFC:
    lfs f3, 0x284(r1)
    addi r3, r1, 0xc8
    lfs f0, 0x8(r4)
    lfs f5, 0x280(r1)
    fsubs f2, f3, f0
    lfs f4, 0x4(r4)
    lfs f3, 0x27c(r1)
    lfs f0, 0x0(r4)
    fsubs f4, f5, f4
    stfs f2, 0xd0(r1)
    fsubs f0, f3, f0
    stfs f4, 0xcc(r1)
    stfs f0, 0xc8(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x8(r29)
    b lbl_fn_800E932C_00000CEC
lbl_fn_800E932C_00000C40:
    lis r4, lbl_80735324@ha
    addi r3, r27, 0xb0
    addi r4, r4, lbl_80735324@l
    li r5, 0x0
    addi r4, r4, 0x20
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_800E932C_00000C68
    li r3, 0x0
    b lbl_fn_800E932C_00000C74
lbl_fn_800E932C_00000C68:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r27)
    add r3, r3, r0
lbl_fn_800E932C_00000C74:
    cmpwi r3, 0x0
    beq lbl_fn_800E932C_00000C9C
    lfs f0, 0x2c(r3)
    addi r4, r1, 0x98
    lfs f3, 0x1c(r3)
    lfs f4, 0xc(r3)
    stfs f4, 0x98(r1)
    stfs f3, 0x9c(r1)
    stfs f0, 0xa0(r1)
    b lbl_fn_800E932C_00000CAC
lbl_fn_800E932C_00000C9C:
    lwz r4, 0x648(r27)
    addi r3, r1, 0x8c
    bl fn_80044BD4
    addi r4, r1, 0x8c
lbl_fn_800E932C_00000CAC:
    lfs f3, 0x284(r1)
    addi r3, r1, 0xa4
    lfs f0, 0x8(r4)
    lfs f5, 0x280(r1)
    fsubs f2, f3, f0
    lfs f4, 0x4(r4)
    lfs f3, 0x27c(r1)
    lfs f0, 0x0(r4)
    fsubs f4, f5, f4
    stfs f2, 0xac(r1)
    fsubs f0, f3, f0
    stfs f4, 0xa8(r1)
    stfs f0, 0xa4(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x8(r29)
lbl_fn_800E932C_00000CEC:
    mr r3, r29
    bl fn_805F9920
    lfs f0, lbl_80881394
    fcmpo cr0, f1, f0
    bge lbl_fn_800E932C_00000D64
    lfs f3, 0x27c(r31)
    addi r26, r1, 0x80
    lfs f0, 0x270(r31)
    addi r5, r1, 0x20
    lfs f5, 0x278(r31)
    mr r3, r26
    fsubs f2, f3, f0
    lfs f4, 0x26c(r31)
    lfs f3, 0x274(r31)
    mr r4, r26
    lfs f0, 0x268(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x88(r1)
    stfs f2, 0x8(r29)
    psq_st f1, 0x0(r29), 0, 0
    b lbl_fn_800E932C_00000D70
lbl_fn_800E932C_00000D64:
    mr r3, r29
    mr r4, r29
    bl fn_805F98D0
lbl_fn_800E932C_00000D70:
    lfs f3, 0x27c(r31)
    addi r26, r1, 0x74
    lfs f0, 0x270(r31)
    addi r5, r1, 0x14
    lfs f5, 0x278(r31)
    mr r3, r26
    fsubs f2, f3, f0
    lfs f4, 0x26c(r31)
    lfs f3, 0x274(r31)
    mr r4, r26
    lfs f0, 0x268(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x7c(r1)
    bl fn_805F98D0
    mr r3, r29
    mr r4, r26
    bl fn_805F9990
    lfs f0, lbl_80881398
    fcmpo cr0, f1, f0
    bge lbl_fn_800E932C_00000ED4
    lfs f3, 0x27c(r31)
    addi r26, r1, 0x68
    lfs f0, 0x270(r31)
    addi r5, r1, 0x8
    lfs f5, 0x278(r31)
    mr r3, r26
    fsubs f2, f3, f0
    lfs f4, 0x26c(r31)
    lfs f3, 0x274(r31)
    mr r4, r26
    lfs f0, 0x268(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x70(r1)
    stfs f2, 0x8(r29)
    psq_st f1, 0x0(r29), 0, 0
    b lbl_fn_800E932C_00000ED4
lbl_fn_800E932C_00000E3C:
    lfs f1, 0x538(r27)
    addi r3, r1, 0x218
    li r4, 0x79
    bl fn_805F8E70
    lfs f3, lbl_808812DC
    mr r4, r29
    lfs f0, lbl_808812D8
    mr r5, r29
    stfs f3, 0x0(r29)
    addi r3, r1, 0x218
    stfs f3, 0x4(r29)
    stfs f0, 0x8(r29)
    bl fn_805F93C0
    lfs f4, lbl_80881390
    addi r4, r1, 0x1c4
    lfs f3, lbl_80881348
    mr r5, r4
    lfs f0, lbl_80881360
    addi r3, r1, 0x218
    stfs f4, 0x1c4(r1)
    stfs f3, 0x1c8(r1)
    stfs f0, 0x1cc(r1)
    bl fn_805F93C0
    psq_l f1, 0x528(r27), 0, 0
    lfs f2, 0x530(r27)
    stfs f2, 0x8(r28)
    psq_st f1, 0x0(r28), 0, 0
    lfs f4, 0x0(r28)
    lfs f0, 0x1c4(r1)
    lfs f3, 0x4(r28)
    fadds f0, f4, f0
    stfs f0, 0x0(r28)
    lfs f0, 0x1c8(r1)
    fadds f0, f3, f0
    stfs f0, 0x4(r28)
    lfs f0, 0x1cc(r1)
    fadds f0, f2, f0
    stfs f0, 0x8(r28)
lbl_fn_800E932C_00000ED4:
    lwz r3, 0x648(r27)
    cmpwi r3, 0x0
    beq lbl_fn_800E932C_00000EEC
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800E932C_00000F00
lbl_fn_800E932C_00000EEC:
    lwz r3, 0x50(r27)
    subis r3, r3, 0xb
    addi r0, r3, 0x518a
    cmplwi r0, 0x1
    bgt lbl_fn_800E932C_00000F14
lbl_fn_800E932C_00000F00:
    addi r3, r1, 0x1dc
    lfs f2, 0x1e4(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x8(r28)
lbl_fn_800E932C_00000F14:
    addi r11, r1, 0x330
    psq_l f31, 0x338(r1), 0, 0
    lfd f31, 0x330(r1)
    bl _restgpr_26
    lwz r0, 0x344(r1)
    mtlr r0
    addi r1, r1, 0x340
    blr
}

asm void fn_800E9ED8(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    stfd f31, 0x170(r1)
    psq_st f31, 0x178(r1), 0, 0
    stw r31, 0x16c(r1)
    mr r31, r3
    stw r30, 0x168(r1)
    lwz r4, 0x58c(r3)
    subi r0, r4, 0x3
    cmplwi r0, 0x1
    ble lbl_fn_800E9ED8_00001A04
    cmpwi r4, 0x0
    beq lbl_fn_800E9ED8_00000F88
    cmpwi r4, 0x1
    beq lbl_fn_800E9ED8_0000165C
    cmpwi r4, 0x5
    beq lbl_fn_800E9ED8_00001918
    cmpwi r4, 0x2
    beq lbl_fn_800E9ED8_00001994
    b lbl_fn_800E9ED8_00001A08
lbl_fn_800E9ED8_00000F88:
    lwz r4, 0x55c(r3)
    cmpwi r4, 0x6
    bne lbl_fn_800E9ED8_00001064
    lwz r0, 0x560(r3)
    cmpwi r0, 0x42
    beq lbl_fn_800E9ED8_00001064
    bge lbl_fn_800E9ED8_00000FFC
    cmpwi r0, 0x18
    bge lbl_fn_800E9ED8_00000FD4
    cmpwi r0, 0x11
    bge lbl_fn_800E9ED8_00000FC8
    cmpwi r0, 0x4
    bge lbl_fn_800E9ED8_00001064
    cmpwi r0, 0x2
    bge lbl_fn_800E9ED8_00001050
    b lbl_fn_800E9ED8_00001064
lbl_fn_800E9ED8_00000FC8:
    cmpwi r0, 0x14
    beq lbl_fn_800E9ED8_00001064
    b lbl_fn_800E9ED8_00001050
lbl_fn_800E9ED8_00000FD4:
    cmpwi r0, 0x34
    bge lbl_fn_800E9ED8_00000FE8
    cmpwi r0, 0x27
    beq lbl_fn_800E9ED8_00001050
    b lbl_fn_800E9ED8_00001064
lbl_fn_800E9ED8_00000FE8:
    cmpwi r0, 0x41
    bge lbl_fn_800E9ED8_00001050
    cmpwi r0, 0x36
    bge lbl_fn_800E9ED8_00001064
    b lbl_fn_800E9ED8_00001050
lbl_fn_800E9ED8_00000FFC:
    cmpwi r0, 0x6e
    bge lbl_fn_800E9ED8_00001028
    cmpwi r0, 0x47
    beq lbl_fn_800E9ED8_00001050
    bge lbl_fn_800E9ED8_0000101C
    cmpwi r0, 0x44
    bge lbl_fn_800E9ED8_00001064
    b lbl_fn_800E9ED8_00001050
lbl_fn_800E9ED8_0000101C:
    cmpwi r0, 0x63
    beq lbl_fn_800E9ED8_00001050
    b lbl_fn_800E9ED8_00001064
lbl_fn_800E9ED8_00001028:
    cmpwi r0, 0x80
    bge lbl_fn_800E9ED8_00001044
    cmpwi r0, 0x7b
    bge lbl_fn_800E9ED8_00001050
    cmpwi r0, 0x78
    bge lbl_fn_800E9ED8_00001064
    b lbl_fn_800E9ED8_00001050
lbl_fn_800E9ED8_00001044:
    cmpwi r0, 0x8e
    beq lbl_fn_800E9ED8_00001050
    b lbl_fn_800E9ED8_00001064
lbl_fn_800E9ED8_00001050:
    li r0, 0x0
    stw r0, 0xf08(r3)
    mr r3, r31
    bl fn_80139560
    b lbl_fn_800E9ED8_00001A08
lbl_fn_800E9ED8_00001064:
    cmpwi r4, 0x6
    bne lbl_fn_800E9ED8_00001160
    lwz r0, 0x560(r3)
    cmpwi r0, 0xa
    bne lbl_fn_800E9ED8_00001160
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_8088136C
    fcmpo cr0, f3, f0
    ble lbl_fn_800E9ED8_00001A08
    lfs f0, lbl_80881318
    fcmpo cr0, f3, f0
    bge lbl_fn_800E9ED8_00001A08
    lwz r0, 0xf80(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800E9ED8_000010C0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x148(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x14c(r1)
    stw r0, 0x150(r1)
    b lbl_fn_800E9ED8_000010DC
lbl_fn_800E9ED8_000010C0:
    lis r5, lbl_80779B3C@ha
    lwzu r4, lbl_80779B3C@l(r5)
    stw r4, 0x148(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x14c(r1)
    stw r0, 0x150(r1)
lbl_fn_800E9ED8_000010DC:
    lwz r5, 0x148(r1)
    addi r3, r1, 0x3c
    lwz r4, 0x14c(r1)
    lwz r0, 0x150(r1)
    stw r5, 0x3c(r1)
    stw r4, 0x40(r1)
    stw r0, 0x44(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_800E9ED8_00001A08
    lwz r3, 0xf80(r31)
    cmpwi r3, 0x0
    beq lbl_fn_800E9ED8_00001A08
    li r0, 0x1
    stw r0, 0x1c(r3)
    mr r3, r31
    bl fn_8016E484
    cmpwi r3, 0x0
    beq lbl_fn_800E9ED8_00001140
    li r3, 0x2
    bl fn_8021AF98
    mr r4, r3
    mr r3, r31
    bl fn_800EB270
    b lbl_fn_800E9ED8_00001A08
lbl_fn_800E9ED8_00001140:
    lwz r0, 0x48(r31)
    mr r3, r31
    li r4, 0xd0
    cmpwi r0, 0x2
    bne lbl_fn_800E9ED8_00001158
    li r4, 0xe5
lbl_fn_800E9ED8_00001158:
    bl fn_800EB270
    b lbl_fn_800E9ED8_00001A08
lbl_fn_800E9ED8_00001160:
    cmpwi r4, 0x7
    bne lbl_fn_800E9ED8_000012A8
    lfs f2, 0x530(r3)
    addi r4, r1, 0x6c
    psq_l f1, 0x528(r3), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x74(r1)
    bl fn_80139560
    lfs f5, 0x6c(r1)
    lfs f4, 0x528(r31)
    lfs f3, 0x70(r1)
    fsubs f7, f5, f4
    lfs f0, 0x52c(r31)
    lfs f5, 0x74(r1)
    fsubs f6, f3, f0
    lfs f4, 0x530(r31)
    lfs f3, 0x570(r31)
    lfs f0, lbl_80881328
    fsubs f4, f5, f4
    stfs f7, 0x6c(r1)
    fcmpo cr0, f3, f0
    stfs f6, 0x70(r1)
    stfs f4, 0x74(r1)
    ble lbl_fn_800E9ED8_0000129C
    fabs f3, f7
    lfs f0, lbl_8088139C
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_800E9ED8_0000129C
    fabs f3, f6
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_800E9ED8_0000129C
    fabs f3, f4
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_800E9ED8_0000129C
    lwz r3, 0xf08(r31)
    addi r0, r3, 0x1
    stw r0, 0xf08(r31)
    cmpwi r0, 0x1
    ble lbl_fn_800E9ED8_00001A08
    mr r3, r31
    bl fn_8016F67C
    cmpwi r3, 0x0
    beq lbl_fn_800E9ED8_00001274
    lfs f3, lbl_808812DC
    addi r3, r1, 0xd8
    lfs f0, lbl_808812D8
    li r4, 0x79
    stfs f3, 0x60(r1)
    stfs f3, 0x64(r1)
    stfs f0, 0x68(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x60
    addi r3, r1, 0xd8
    mr r5, r4
    bl fn_805F93C0
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x60
    lwz r12, 0x74(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0xf08(r31)
    b lbl_fn_800E9ED8_00001A08
lbl_fn_800E9ED8_00001274:
    mr r3, r31
    addi r4, r31, 0x528
    addi r5, r31, 0x574
    li r6, 0x0
    bl fn_801725EC
    cmpwi r3, 0x0
    beq lbl_fn_800E9ED8_00001A08
    li r0, 0x0
    stw r0, 0xf08(r31)
    b lbl_fn_800E9ED8_00001A08
lbl_fn_800E9ED8_0000129C:
    li r0, 0x0
    stw r0, 0xf08(r31)
    b lbl_fn_800E9ED8_00001A08
lbl_fn_800E9ED8_000012A8:
    lha r4, 0xd3a(r3)
    cmpwi r4, 0x5
    bne lbl_fn_800E9ED8_00001348
    lha r0, 0xd3e(r3)
    cmpwi r0, 0x2
    bne lbl_fn_800E9ED8_00001348
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_800E9ED8_0000131C
    li r4, 0x173
    addi r3, r3, 0xb0
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_800E9ED8_0000131C
    lwz r3, lbl_8087F0A8
    lwz r0, 0x80(r3)
    cmpwi r0, 0x0
    ble lbl_fn_800E9ED8_0000131C
    lwz r0, 0x958(r31)
    rlwinm r0, r0, 0, 19, 19
    cmplwi r0, 0x1000
    beq lbl_fn_800E9ED8_0000131C
    li r0, 0x5
    stw r0, 0x58c(r31)
    mr r3, r31
    lwz r4, lbl_8087F0A8
    lwz r4, 0x80(r4)
    bl fn_80158EF0
    b lbl_fn_800E9ED8_00001A08
lbl_fn_800E9ED8_0000131C:
    lwz r3, 0x648(r31)
    li r4, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_800E9ED8_0000133C
    lwz r3, 0x274(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800E9ED8_0000133C
    lwz r4, 0xac(r3)
lbl_fn_800E9ED8_0000133C:
    mr r3, r31
    bl fn_800EB270
    b lbl_fn_800E9ED8_00001A08
lbl_fn_800E9ED8_00001348:
    cmpwi r4, 0x6
    bne lbl_fn_800E9ED8_00001368
    lha r0, 0xd3e(r3)
    cmpwi r0, 0x1
    blt lbl_fn_800E9ED8_00001368
    mr r3, r31
    bl fn_800EB4AC
    b lbl_fn_800E9ED8_00001A08
lbl_fn_800E9ED8_00001368:
    lwz r0, lbl_8087F610
    addi r4, r1, 0x54
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    cmpwi r0, 0x0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x5c(r1)
    bne lbl_fn_800E9ED8_00001394
    mr r3, r31
    bl fn_80139560
    b lbl_fn_800E9ED8_00001438
lbl_fn_800E9ED8_00001394:
    lwz r0, 0x48(r3)
    cmpwi r0, 0x3
    bne lbl_fn_800E9ED8_00001430
    lwz r4, lbl_8087F8A0
    cmpwi r4, 0x0
    beq lbl_fn_800E9ED8_00001430
    lwz r0, 0x48(r4)
    cmplw r0, r3
    bne lbl_fn_800E9ED8_00001430
    lwz r0, 0x55c(r3)
    li r30, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_800E9ED8_000013D8
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_800E9ED8_000013D8
    li r30, 0x1
lbl_fn_800E9ED8_000013D8:
    mr r3, r31
    bl fn_80139560
    cmpwi r30, 0x0
    beq lbl_fn_800E9ED8_00001438
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_800E9ED8_00001400
    lwz r0, 0x560(r31)
    cmpwi r0, 0x1c
    beq lbl_fn_800E9ED8_00001438
lbl_fn_800E9ED8_00001400:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_800E9ED8_00001438
    lwz r0, 0x868(r3)
    cmpwi r0, 0x6
    bne lbl_fn_800E9ED8_00001438
    li r4, 0x1
    bl fn_803748E0
    lwz r3, lbl_8087F430
    li r0, 0x1
    stw r0, 0x94c(r3)
    b lbl_fn_800E9ED8_00001438
lbl_fn_800E9ED8_00001430:
    mr r3, r31
    bl fn_80139560
lbl_fn_800E9ED8_00001438:
    lfs f5, 0x54(r1)
    lfs f4, 0x528(r31)
    lfs f3, 0x58(r1)
    fsubs f7, f5, f4
    lfs f0, 0x52c(r31)
    lfs f5, 0x5c(r1)
    fsubs f6, f3, f0
    lfs f4, 0x530(r31)
    lfs f3, 0x570(r31)
    lfs f0, lbl_80881328
    fsubs f4, f5, f4
    stfs f7, 0x54(r1)
    fcmpo cr0, f3, f0
    stfs f6, 0x58(r1)
    stfs f4, 0x5c(r1)
    ble lbl_fn_800E9ED8_00001650
    fabs f3, f7
    lfs f0, lbl_8088139C
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_800E9ED8_00001650
    fabs f3, f6
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_800E9ED8_00001650
    fabs f3, f4
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_800E9ED8_00001650
    lwz r3, 0xf08(r31)
    addi r0, r3, 0x1
    stw r0, 0xf08(r31)
    cmpwi r0, 0x1
    ble lbl_fn_800E9ED8_00001A08
    li r30, 0x0
    stw r30, 0x8(r1)
    mr r3, r31
    bl fn_8016F67C
    cmpwi r3, 0x0
    beq lbl_fn_800E9ED8_0000152C
    lfs f3, lbl_808812DC
    addi r3, r1, 0xa8
    lfs f0, lbl_808812D8
    li r4, 0x79
    stfs f3, 0x48(r1)
    stfs f3, 0x4c(r1)
    stfs f0, 0x50(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x48
    addi r3, r1, 0xa8
    mr r5, r4
    bl fn_805F93C0
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x48
    lwz r12, 0x74(r12)
    mtctr r12
    bctrl
    stw r30, 0xf08(r31)
    b lbl_fn_800E9ED8_00001A08
lbl_fn_800E9ED8_0000152C:
    lwz r0, 0x14a8(r31)
    extrwi. r0, r0, 1, 6
    bne lbl_fn_800E9ED8_00001A08
    mr r3, r31
    addi r4, r31, 0x528
    addi r5, r31, 0x574
    addi r6, r1, 0x8
    bl fn_801725EC
    cmpwi r3, 0x0
    beq lbl_fn_800E9ED8_00001A08
    lha r0, 0xd3a(r31)
    cmpwi r0, 0x5
    bne lbl_fn_800E9ED8_00001644
    lha r0, 0xd3e(r31)
    cmpwi r0, 0x1
    bne lbl_fn_800E9ED8_00001644
    lwz r0, 0xd28(r31)
    cmpwi r0, 0x0
    bne lbl_fn_800E9ED8_00001644
    lwz r0, 0xd1c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800E9ED8_00001644
    lfs f3, lbl_808812DC
    addi r3, r1, 0x78
    lfs f0, lbl_808812D8
    li r4, 0x79
    stfs f3, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f3, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f3, 0x28(r1)
    stfs f0, 0x2c(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x24
    addi r3, r1, 0x78
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x24
    addi r4, r1, 0x18
    addi r5, r1, 0x30
    bl fn_805F99B0
    addi r3, r1, 0x30
    lfs f2, 0x38(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r31, 0xc14
    li r0, 0x1
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xc1c(r31)
    stw r0, 0x58c(r31)
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_800E9ED8_00001608
    bl fn_800F8548
    stw r3, 0x590(r31)
lbl_fn_800E9ED8_00001608:
    li r0, -0x1
    stw r0, 0x594(r31)
    lwz r30, 0xd1c(r31)
    li r3, 0xc8
    lfs f31, 0x5b0(r30)
    bl fn_80219E6C
    fmr f1, f31
    mr r4, r3
    lwz r9, 0x8(r1)
    mr r3, r31
    addi r5, r30, 0x528
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_801562A0
lbl_fn_800E9ED8_00001644:
    li r0, 0x0
    stw r0, 0xf08(r31)
    b lbl_fn_800E9ED8_00001A08
lbl_fn_800E9ED8_00001650:
    li r0, 0x0
    stw r0, 0xf08(r31)
    b lbl_fn_800E9ED8_00001A08
lbl_fn_800E9ED8_0000165C:
    bl fn_80158BB4
    cmpwi r3, 0x0
    beq lbl_fn_800E9ED8_000016B0
    lwz r3, 0x560(r31)
    li r0, 0x0
    stw r0, 0x58c(r31)
    subi r0, r3, 0x15
    cmplwi r0, 0x2
    ble lbl_fn_800E9ED8_000016B0
    cmpwi r3, 0x47
    beq lbl_fn_800E9ED8_000016B0
    cmpwi r3, 0x8e
    beq lbl_fn_800E9ED8_000016B0
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x7
    beq lbl_fn_800E9ED8_000016B0
    mr r3, r31
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    bl fn_8016EB48
lbl_fn_800E9ED8_000016B0:
    lwz r0, 0x2dc(r31)
    lwz r30, lbl_8087F0A8
    cmpwi r0, 0x158
    beq lbl_fn_800E9ED8_000016EC
    cmpwi r0, 0x159
    beq lbl_fn_800E9ED8_000016F4
    cmpwi r0, 0x15a
    beq lbl_fn_800E9ED8_000016FC
    cmpwi r0, 0x15b
    beq lbl_fn_800E9ED8_00001704
    cmpwi r0, 0x16a
    beq lbl_fn_800E9ED8_0000170C
    cmpwi r0, 0x161
    beq lbl_fn_800E9ED8_00001714
    b lbl_fn_800E9ED8_0000171C
lbl_fn_800E9ED8_000016EC:
    lfs f31, lbl_80881348
    b lbl_fn_800E9ED8_00001720
lbl_fn_800E9ED8_000016F4:
    lfs f31, lbl_80881350
    b lbl_fn_800E9ED8_00001720
lbl_fn_800E9ED8_000016FC:
    lfs f31, lbl_80881354
    b lbl_fn_800E9ED8_00001720
lbl_fn_800E9ED8_00001704:
    lfs f31, lbl_80881354
    b lbl_fn_800E9ED8_00001720
lbl_fn_800E9ED8_0000170C:
    lfs f31, lbl_80881358
    b lbl_fn_800E9ED8_00001720
lbl_fn_800E9ED8_00001714:
    lfs f31, lbl_8088135C
    b lbl_fn_800E9ED8_00001720
lbl_fn_800E9ED8_0000171C:
    lfs f31, lbl_80881350
lbl_fn_800E9ED8_00001720:
    lwz r0, 0x14a8(r31)
    extrwi. r0, r0, 1, 2
    beq lbl_fn_800E9ED8_00001788
    lfs f3, 0x2b4(r30)
    lfs f0, lbl_808812DC
    fcmpo cr0, f3, f0
    ble lbl_fn_800E9ED8_00001788
    lfs f0, 0x2e4(r31)
    fcmpo cr0, f0, f31
    cror eq, gt, eq
    bne lbl_fn_800E9ED8_00001788
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fsubs f3, f1, f31
    lfs f0, 0x2b4(r30)
    lwz r0, 0x7e8(r31)
    fadds f0, f3, f0
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    fdivs f31, f3, f0
    bne lbl_fn_800E9ED8_00001784
    lwz r3, lbl_8087F048
    bl fn_8010CA34
    fmuls f31, f31, f1
lbl_fn_800E9ED8_00001784:
    stfs f31, 0x2e8(r31)
lbl_fn_800E9ED8_00001788:
    mr r3, r31
    bl fn_80139560
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_800E9ED8_00001A08
    mr r3, r31
    bl fn_80158CA4
    cmpwi r3, 0x0
    beq lbl_fn_800E9ED8_00001A08
    lwz r0, 0xf80(r31)
    cmpwi r0, 0x0
    bne lbl_fn_800E9ED8_000017D8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x154(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x158(r1)
    stw r0, 0x15c(r1)
    b lbl_fn_800E9ED8_000017F4
lbl_fn_800E9ED8_000017D8:
    lis r5, lbl_80779B48@ha
    lwzu r4, lbl_80779B48@l(r5)
    stw r4, 0x154(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x158(r1)
    stw r0, 0x15c(r1)
lbl_fn_800E9ED8_000017F4:
    lwz r5, 0x154(r1)
    addi r3, r1, 0xc
    lwz r4, 0x158(r1)
    lwz r0, 0x15c(r1)
    stw r5, 0xc(r1)
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_800E9ED8_00001868
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    lwz r0, 0x598(r31)
    cmpw r3, r0
    ble lbl_fn_800E9ED8_00001868
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    li r0, 0x1
    stw r3, 0x598(r31)
    stw r0, 0x594(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
lbl_fn_800E9ED8_00001868:
    lwz r0, 0x594(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800E9ED8_00001A08
    mr r3, r31
    bl fn_80144710
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r7, 0x638(r31)
    addi r4, r1, 0x108
    lwz r8, 0x590(r31)
    li r5, 0x8
    lfs f1, lbl_808812DC
    li r9, 0x1e
    lwz r10, 0x594(r31)
    bl fn_800F8C6C
    cmpwi r3, 0x0
    ble lbl_fn_800E9ED8_00001A08
    lwz r0, 0x594(r31)
    cmpwi r0, 0x0
    ble lbl_fn_800E9ED8_000018C0
    subf r0, r3, r0
    stw r0, 0x594(r31)
lbl_fn_800E9ED8_000018C0:
    addi r5, r1, 0x108
    li r4, 0x0
    mtctr r3
    cmpwi r3, 0x0
    ble lbl_fn_800E9ED8_000018F0
lbl_fn_800E9ED8_000018D4:
    lwz r0, 0x4(r5)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_800E9ED8_000018E8
    li r4, 0x1
lbl_fn_800E9ED8_000018E8:
    addi r5, r5, 0x8
    bdnz lbl_fn_800E9ED8_000018D4
lbl_fn_800E9ED8_000018F0:
    cmpwi r4, 0x0
    beq lbl_fn_800E9ED8_00001A08
    lwz r3, 0x560(r31)
    subi r0, r3, 0x4
    cmplwi r0, 0x1
    bgt lbl_fn_800E9ED8_00001A08
    lwz r0, 0x14a8(r31)
    oris r0, r0, 0x2000
    stw r0, 0x14a8(r31)
    b lbl_fn_800E9ED8_00001A08
lbl_fn_800E9ED8_00001918:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_800E9ED8_00001930
    lwz r0, 0x560(r3)
    cmpwi r0, 0xc
    beq lbl_fn_800E9ED8_00001944
lbl_fn_800E9ED8_00001930:
    li r0, 0x0
    stw r0, 0x58c(r3)
    mr r3, r31
    bl fn_80139560
    b lbl_fn_800E9ED8_00001A08
lbl_fn_800E9ED8_00001944:
    bl fn_80139560
    lwz r3, 0xf80(r31)
    lfs f0, lbl_808812DC
    lfs f3, 0x8(r3)
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_800E9ED8_00001A08
    lwz r3, 0x648(r31)
    li r4, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_800E9ED8_00001988
    lwz r3, 0x274(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800E9ED8_00001988
    lwz r4, 0xac(r3)
lbl_fn_800E9ED8_00001988:
    mr r3, r31
    bl fn_800EB270
    b lbl_fn_800E9ED8_00001A08
lbl_fn_800E9ED8_00001994:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_800E9ED8_000019B4
    lwz r12, 0x0(r3)
    lwz r12, 0xf0(r12)
    mtctr r12
    bctrl
    b lbl_fn_800E9ED8_00001A08
lbl_fn_800E9ED8_000019B4:
    lwz r0, 0x48(r3)
    cmpwi r0, 0x3
    bne lbl_fn_800E9ED8_000019EC
    lwz r4, lbl_8087F8A0
    cmpwi r4, 0x0
    beq lbl_fn_800E9ED8_000019EC
    lwz r0, 0x48(r4)
    cmplw r0, r3
    bne lbl_fn_800E9ED8_000019EC
    lwz r12, 0x0(r3)
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_800E9ED8_00001A08
lbl_fn_800E9ED8_000019EC:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xf0(r12)
    mtctr r12
    bctrl
    b lbl_fn_800E9ED8_00001A08
lbl_fn_800E9ED8_00001A04:
    bl fn_80139560
lbl_fn_800E9ED8_00001A08:
    mr r3, r31
    bl fn_800E7BB0
    lwz r0, 0x184(r1)
    psq_l f31, 0x178(r1), 0, 0
    lfd f31, 0x170(r1)
    lwz r31, 0x16c(r1)
    lwz r30, 0x168(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}
