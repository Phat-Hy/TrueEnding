#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _savegpr_23(void);
extern void dtor_80084684(void);
extern void fn_805CDD20(void);
extern void fn_805CDDD0(void);
extern void fn_805CE420(void);
extern void fn_805D2A40(void);
extern void fn_805D9830(void);
extern void fn_80612E80(void);
extern void fn_806134E0(void);
extern void fn_80613520(void);
extern void fn_80613960(void);
extern void fn_80613BB0(void);
extern void fn_80615D20(void);
extern void fn_80615D50(void);
extern void fn_80617200(void);
extern void fn_80617220(void);
extern void fn_80617340(void);
extern void fn_806173E0(void);
extern void fn_80617420(void);
extern void fn_80617460(void);
extern void fn_806174C0(void);
extern void fn_806176F0(void);
extern void fn_80617730(void);
extern void fn_806177F0(void);
extern void fn_80617880(void);
extern void fn_806179E0(void);
extern void fn_80617A10(void);
extern void fn_80617D50(void);

/* External data declarations */
extern u8 lbl_807645C8[];
extern u8 lbl_807645D0[];
extern u8 lbl_807645D8[];
extern u8 lbl_807645E0[];
extern u8 lbl_807645E4[];
extern u8 lbl_80764608[];
extern u8 lbl_8076460C[];
extern u8 lbl_807992D8[];
extern u8 lbl_807993C0[];
extern u8 lbl_8079A3D0[];
extern u8 lbl_807CA200[];
extern u8 lbl_807CA218[];
extern u8 lbl_807CA220[];
extern u8 lbl_807CA228[];
extern u8 lbl_80808081[];

/* Small data declarations */

/* Function declarations */
void fn_805D6E60(void);
void fn_805D7C70(void);
void fn_805D7CA0(void);
void fn_805D7CB0(void);
void fn_805D7CC0(void);
void fn_805D7CE0(void);
void fn_805D7D60(void);
void fn_805D7DD0(void);
void fn_805D7F90(void);
void fn_805D8010(void);
void fn_805D8090(void);
void fn_805D80B0(void);
void fn_805D80D0(void);
void fn_805D8130(void);
void fn_805D84C0(void);
void fn_805D8500(void);
void fn_805D8510(void);
void fn_805D8520(void);

asm void fn_805D6E60(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    addi r11, r1, 0x170
    bl _savegpr_23
    lis r8, lbl_807645C8@ha
    li r0, -0x1
    lfs f0, lbl_807645C8@l(r8)
    lis r8, 0x4330
    mr r28, r7
    stw r8, 0x138(r1)
    mr r24, r3
    mr r25, r4
    stw r8, 0x140(r1)
    mr r26, r5
    mr r27, r6
    mr r4, r28
    stw r0, 0x108(r1)
    li r3, 0x0
    stw r0, 0x10c(r1)
    stw r0, 0x110(r1)
    stw r0, 0x114(r1)
    stfs f0, 0x100(r1)
    stfs f0, 0x104(r1)
    bl fn_805CDD20
    mr r30, r3
    lwz r3, 0x4(r26)
    mr r4, r30
    mr r5, r28
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f1, 0x8(r27)
    mr r29, r3
    lfs f0, 0x0(r27)
    addi r3, r1, 0xf0
    stfs f0, 0xf8(r1)
    li r5, 0x0
    lbz r31, 0x0(r26)
    stfs f1, 0xfc(r1)
    lwz r4, 0x4(r26)
    stfs f0, 0x100(r1)
    stfs f1, 0x104(r1)
    bl fn_805D2A40
    mulli r0, r31, 0xa
    lis r4, lbl_807992D8@ha
    lis r3, lbl_807645D8@ha
    lfs f2, 0xf4(r1)
    addi r4, r4, lbl_807992D8@l
    lfs f3, 0xf0(r1)
    add r7, r4, r0
    lis r4, lbl_807645D0@ha
    lbz r0, 0x9(r7)
    addi r6, r1, 0x40
    lbz r5, 0x8(r7)
    addi r9, r1, 0x128
    lbzx r8, r7, r0
    add r23, r7, r0
    lfd f5, lbl_807645D8@l(r3)
    add r3, r7, r5
    lbzx r10, r7, r5
    slwi r12, r0, 2
    stw r8, 0x144(r1)
    slwi r11, r5, 2
    lbz r0, 0x2(r3)
    addi r31, r1, 0x118
    lfd f1, 0x140(r1)
    addi r7, r1, 0x120
    subf r3, r10, r0
    lbz r0, 0x4(r23)
    xoris r3, r3, 0x8000
    stw r3, 0x144(r1)
    lfd f8, lbl_807645D0@l(r4)
    subf r0, r8, r0
    lfd f0, 0x140(r1)
    xoris r0, r0, 0x8000
    stfs f3, 0x40(r1)
    fsubs f6, f1, f8
    fsubs f4, f0, f5
    lfs f3, 0x100(r1)
    stfs f2, 0x44(r1)
    addi r5, r1, 0x130
    lfs f0, 0x104(r1)
    stw r0, 0x144(r1)
    lfsx f1, r6, r11
    mr r3, r29
    lfd f2, 0x140(r1)
    li r4, 0x1
    fmuls f4, f4, f1
    lfsx f1, r6, r12
    fsubs f2, f2, f5
    stw r10, 0x13c(r1)
    fdivs f4, f3, f4
    lfd f7, 0x138(r1)
    stw r10, 0x13c(r1)
    lfd f5, 0x138(r1)
    stw r8, 0x13c(r1)
    lfd f3, 0x138(r1)
    fmuls f1, f2, f1
    fsubs f7, f7, f8
    fsubs f2, f5, f8
    fdivs f0, f0, f1
    stfsx f7, r9, r11
    stfsx f7, r31, r11
    stfsx f6, r7, r12
    stfsx f6, r31, r12
    fadds f2, f2, f4
    fsubs f1, f3, f8
    stfsx f2, r7, r11
    stfsx f2, r5, r11
    fadds f0, f1, f0
    stfsx f0, r9, r12
    stfsx f0, r5, r12
    bl fn_805CDDD0
    cmpwi r29, 0x0
    mr r3, r25
    mr r6, r31
    addi r4, r1, 0x100
    li r5, 0x1
    li r7, 0x0
    beq lbl_fn_805D6E60_000001EC
    addi r7, r1, 0x108
lbl_fn_805D6E60_000001EC:
    mr r8, r28
    bl fn_805CE420
    lwz r3, 0x34(r26)
    mr r4, r30
    mr r5, r28
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f1, 0x4c(r24)
    mr r29, r3
    lfs f0, 0x0(r27)
    addi r3, r1, 0xe0
    lfs f2, 0x8(r27)
    li r5, 0x0
    fsubs f1, f1, f0
    lfs f0, 0x4(r27)
    stfs f2, 0xec(r1)
    lbz r31, 0x30(r26)
    fsubs f0, f1, f0
    stfs f2, 0x104(r1)
    lwz r4, 0x34(r26)
    stfs f0, 0xe8(r1)
    stfs f0, 0x100(r1)
    bl fn_805D2A40
    mulli r0, r31, 0xa
    lis r4, lbl_807992D8@ha
    lis r3, lbl_807645D8@ha
    lfs f2, 0xe4(r1)
    addi r4, r4, lbl_807992D8@l
    lfs f3, 0xe0(r1)
    add r7, r4, r0
    lis r4, lbl_807645D0@ha
    lbz r0, 0x9(r7)
    addi r6, r1, 0x38
    lbz r5, 0x8(r7)
    addi r10, r1, 0x128
    lbzx r8, r7, r0
    add r31, r7, r0
    lfd f5, lbl_807645D8@l(r3)
    add r3, r7, r5
    lbzx r11, r7, r5
    slwi r23, r0, 2
    stw r8, 0x144(r1)
    slwi r12, r5, 2
    lbz r0, 0x2(r3)
    addi r9, r1, 0x118
    lfd f1, 0x140(r1)
    addi r7, r1, 0x120
    subf r3, r11, r0
    lbz r0, 0x4(r31)
    xoris r3, r3, 0x8000
    stw r3, 0x144(r1)
    lfd f8, lbl_807645D0@l(r4)
    subf r0, r8, r0
    lfd f0, 0x140(r1)
    xoris r0, r0, 0x8000
    stfs f3, 0x38(r1)
    fsubs f6, f1, f8
    fsubs f4, f0, f5
    lfs f3, 0x100(r1)
    stfs f2, 0x3c(r1)
    addi r5, r1, 0x130
    lfs f0, 0x104(r1)
    stw r0, 0x144(r1)
    lfsx f1, r6, r12
    mr r3, r29
    lfd f2, 0x140(r1)
    li r4, 0x1
    fmuls f4, f4, f1
    lfsx f1, r6, r23
    fsubs f2, f2, f5
    stw r11, 0x13c(r1)
    fdivs f4, f3, f4
    lfd f7, 0x138(r1)
    stw r11, 0x13c(r1)
    lfd f5, 0x138(r1)
    stw r8, 0x13c(r1)
    lfd f3, 0x138(r1)
    fmuls f1, f2, f1
    fsubs f7, f7, f8
    fsubs f2, f5, f8
    fdivs f0, f0, f1
    stfsx f7, r10, r12
    stfsx f7, r9, r12
    stfsx f6, r7, r23
    stfsx f6, r9, r23
    fadds f2, f2, f4
    fsubs f1, f3, f8
    stfsx f2, r7, r12
    stfsx f2, r5, r12
    fadds f0, f1, f0
    stfsx f0, r10, r23
    stfsx f0, r5, r23
    bl fn_805CDDD0
    cmpwi r29, 0x0
    li r7, 0x0
    beq lbl_fn_805D6E60_00000378
    addi r7, r1, 0x108
lbl_fn_805D6E60_00000378:
    lfs f1, 0x0(r25)
    mr r8, r28
    lfs f0, 0x0(r27)
    addi r3, r1, 0xd8
    lfs f2, 0x4(r25)
    addi r4, r1, 0x100
    fadds f0, f1, f0
    stfs f2, 0xdc(r1)
    addi r6, r1, 0x118
    li r5, 0x1
    stfs f0, 0xd8(r1)
    bl fn_805CE420
    lwz r3, 0xc(r26)
    mr r4, r30
    mr r5, r28
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f1, 0x8(r27)
    mr r29, r3
    lfs f0, 0x4(r27)
    addi r3, r1, 0xc8
    stfs f0, 0xd0(r1)
    li r5, 0x0
    lbz r31, 0x8(r26)
    stfs f1, 0xd4(r1)
    lwz r4, 0xc(r26)
    stfs f0, 0x100(r1)
    stfs f1, 0x104(r1)
    bl fn_805D2A40
    mulli r0, r31, 0xa
    lis r4, lbl_807992D8@ha
    lis r3, lbl_807645D8@ha
    lfs f2, 0xcc(r1)
    addi r4, r4, lbl_807992D8@l
    lfs f3, 0xc8(r1)
    add r9, r4, r0
    lis r11, lbl_807645D0@ha
    lbz r4, 0x9(r9)
    addi r6, r1, 0x30
    lbz r7, 0x8(r9)
    addi r10, r1, 0x130
    add r5, r9, r4
    lfd f5, lbl_807645D8@l(r3)
    lbz r8, 0x2(r5)
    add r3, r9, r7
    lbz r12, 0x2(r3)
    slwi r23, r4, 2
    lbzx r3, r9, r7
    slwi r0, r7, 2
    stw r8, 0x144(r1)
    addi r9, r1, 0x120
    subf r4, r12, r3
    lbz r3, 0x6(r5)
    lfd f1, 0x140(r1)
    xoris r4, r4, 0x8000
    subf r3, r8, r3
    lfd f8, lbl_807645D0@l(r11)
    stw r4, 0x144(r1)
    xoris r3, r3, 0x8000
    fsubs f6, f1, f8
    addi r7, r1, 0x118
    lfd f0, 0x140(r1)
    addi r5, r1, 0x128
    stfs f3, 0x30(r1)
    li r4, 0x1
    stfs f2, 0x34(r1)
    fsubs f4, f0, f5
    lfs f3, 0x100(r1)
    stw r3, 0x144(r1)
    mr r3, r29
    lfsx f1, r6, r0
    lfd f2, 0x140(r1)
    fmuls f4, f4, f1
    lfsx f1, r6, r23
    fsubs f2, f2, f5
    lfs f0, 0x104(r1)
    stw r12, 0x13c(r1)
    fdivs f4, f3, f4
    lfd f7, 0x138(r1)
    stw r12, 0x13c(r1)
    lfd f5, 0x138(r1)
    stw r8, 0x13c(r1)
    lfd f3, 0x138(r1)
    fmuls f1, f2, f1
    fsubs f7, f7, f8
    fsubs f2, f5, f8
    fdivs f0, f0, f1
    stfsx f7, r10, r0
    stfsx f7, r9, r0
    stfsx f6, r7, r23
    stfsx f6, r9, r23
    fadds f2, f2, f4
    fsubs f1, f3, f8
    stfsx f2, r7, r0
    stfsx f2, r5, r0
    fadds f0, f1, f0
    stfsx f0, r10, r23
    stfsx f0, r5, r23
    bl fn_805CDDD0
    cmpwi r29, 0x0
    li r7, 0x0
    beq lbl_fn_805D6E60_0000051C
    addi r7, r1, 0x108
lbl_fn_805D6E60_0000051C:
    lfs f1, 0x0(r25)
    mr r8, r28
    lfs f0, 0x4c(r24)
    addi r3, r1, 0xc0
    lfs f2, 0x4(r25)
    addi r4, r1, 0x100
    fadds f1, f1, f0
    lfs f0, 0x4(r27)
    stfs f2, 0xc4(r1)
    addi r6, r1, 0x118
    li r5, 0x1
    fsubs f0, f1, f0
    stfs f0, 0xc0(r1)
    bl fn_805CE420
    lwz r3, 0x2c(r26)
    mr r4, r30
    mr r5, r28
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f1, 0x50(r24)
    mr r29, r3
    lfs f0, 0x8(r27)
    addi r3, r1, 0xb0
    lfs f2, 0x4(r27)
    li r5, 0x0
    fsubs f1, f1, f0
    lfs f0, 0xc(r27)
    stfs f2, 0xb8(r1)
    lbz r31, 0x28(r26)
    fsubs f0, f1, f0
    stfs f2, 0x100(r1)
    lwz r4, 0x2c(r26)
    stfs f0, 0xbc(r1)
    stfs f0, 0x104(r1)
    bl fn_805D2A40
    mulli r0, r31, 0xa
    lis r4, lbl_807992D8@ha
    lis r3, lbl_807645D8@ha
    lfs f2, 0xb4(r1)
    addi r4, r4, lbl_807992D8@l
    lfs f3, 0xb0(r1)
    add r9, r4, r0
    lis r11, lbl_807645D0@ha
    lbz r4, 0x9(r9)
    addi r6, r1, 0x28
    lbz r7, 0x8(r9)
    addi r10, r1, 0x130
    add r5, r9, r4
    lfd f5, lbl_807645D8@l(r3)
    lbz r8, 0x2(r5)
    add r3, r9, r7
    lbz r12, 0x2(r3)
    slwi r23, r4, 2
    lbzx r3, r9, r7
    slwi r0, r7, 2
    stw r8, 0x144(r1)
    addi r9, r1, 0x120
    subf r4, r12, r3
    lbz r3, 0x6(r5)
    lfd f1, 0x140(r1)
    xoris r4, r4, 0x8000
    subf r3, r8, r3
    lfd f8, lbl_807645D0@l(r11)
    stw r4, 0x144(r1)
    xoris r3, r3, 0x8000
    fsubs f6, f1, f8
    addi r7, r1, 0x118
    lfd f0, 0x140(r1)
    addi r5, r1, 0x128
    stfs f3, 0x28(r1)
    li r4, 0x1
    stfs f2, 0x2c(r1)
    fsubs f4, f0, f5
    lfs f3, 0x100(r1)
    stw r3, 0x144(r1)
    mr r3, r29
    lfsx f1, r6, r0
    lfd f2, 0x140(r1)
    fmuls f4, f4, f1
    lfsx f1, r6, r23
    fsubs f2, f2, f5
    lfs f0, 0x104(r1)
    stw r12, 0x13c(r1)
    fdivs f4, f3, f4
    lfd f7, 0x138(r1)
    stw r12, 0x13c(r1)
    lfd f5, 0x138(r1)
    stw r8, 0x13c(r1)
    lfd f3, 0x138(r1)
    fmuls f1, f2, f1
    fsubs f7, f7, f8
    fsubs f2, f5, f8
    fdivs f0, f0, f1
    stfsx f7, r10, r0
    stfsx f7, r9, r0
    stfsx f6, r7, r23
    stfsx f6, r9, r23
    fadds f2, f2, f4
    fsubs f1, f3, f8
    stfsx f2, r7, r0
    stfsx f2, r5, r0
    fadds f0, f1, f0
    stfsx f0, r10, r23
    stfsx f0, r5, r23
    bl fn_805CDDD0
    cmpwi r29, 0x0
    li r7, 0x0
    beq lbl_fn_805D6E60_000006D8
    addi r7, r1, 0x108
lbl_fn_805D6E60_000006D8:
    lfs f1, 0x0(r25)
    mr r8, r28
    lfs f0, 0x4c(r24)
    addi r3, r1, 0xa8
    lfs f3, 0x4(r25)
    addi r4, r1, 0x100
    fadds f1, f1, f0
    lfs f2, 0x8(r27)
    lfs f0, 0x4(r27)
    addi r6, r1, 0x118
    fadds f2, f3, f2
    li r5, 0x1
    fsubs f0, f1, f0
    stfs f2, 0xac(r1)
    stfs f0, 0xa8(r1)
    bl fn_805CE420
    lwz r3, 0x1c(r26)
    mr r4, r30
    mr r5, r28
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f1, 0xc(r27)
    mr r29, r3
    lfs f0, 0x4(r27)
    addi r3, r1, 0x98
    stfs f0, 0xa0(r1)
    li r5, 0x0
    lbz r31, 0x18(r26)
    stfs f1, 0xa4(r1)
    lwz r4, 0x1c(r26)
    stfs f0, 0x100(r1)
    stfs f1, 0x104(r1)
    bl fn_805D2A40
    mulli r0, r31, 0xa
    lis r4, lbl_807992D8@ha
    lis r3, lbl_807645D8@ha
    lfs f2, 0x9c(r1)
    addi r4, r4, lbl_807992D8@l
    lfs f3, 0x98(r1)
    add r8, r4, r0
    lis r5, lbl_807645D0@ha
    lbz r0, 0x9(r8)
    addi r6, r1, 0x20
    lbz r7, 0x8(r8)
    addi r10, r1, 0x120
    lfd f5, lbl_807645D8@l(r3)
    add r4, r8, r0
    add r3, r8, r7
    lbz r8, 0x6(r4)
    stw r8, 0x144(r1)
    slwi r23, r0, 2
    lbz r11, 0x6(r3)
    slwi r12, r7, 2
    lbz r0, 0x4(r3)
    addi r9, r1, 0x130
    lfd f1, 0x140(r1)
    addi r7, r1, 0x128
    subf r3, r11, r0
    lbz r0, 0x2(r4)
    xoris r3, r3, 0x8000
    stw r3, 0x144(r1)
    subf r0, r8, r0
    lfd f8, lbl_807645D0@l(r5)
    lfd f0, 0x140(r1)
    xoris r0, r0, 0x8000
    stfs f3, 0x20(r1)
    fsubs f6, f1, f8
    fsubs f4, f0, f5
    lfs f3, 0x100(r1)
    stfs f2, 0x24(r1)
    addi r5, r1, 0x118
    lfs f0, 0x104(r1)
    stw r0, 0x144(r1)
    lfsx f1, r6, r12
    mr r3, r29
    lfd f2, 0x140(r1)
    li r4, 0x1
    fmuls f4, f4, f1
    lfsx f1, r6, r23
    fsubs f2, f2, f5
    stw r11, 0x13c(r1)
    fdivs f4, f3, f4
    lfd f7, 0x138(r1)
    stw r11, 0x13c(r1)
    lfd f5, 0x138(r1)
    stw r8, 0x13c(r1)
    lfd f3, 0x138(r1)
    fmuls f1, f2, f1
    fsubs f7, f7, f8
    fsubs f2, f5, f8
    fdivs f0, f0, f1
    stfsx f7, r10, r12
    stfsx f7, r9, r12
    stfsx f6, r7, r23
    stfsx f6, r9, r23
    fadds f2, f2, f4
    fsubs f1, f3, f8
    stfsx f2, r7, r12
    stfsx f2, r5, r12
    fadds f0, f1, f0
    stfsx f0, r10, r23
    stfsx f0, r5, r23
    bl fn_805CDDD0
    cmpwi r29, 0x0
    li r7, 0x0
    beq lbl_fn_805D6E60_0000088C
    addi r7, r1, 0x108
lbl_fn_805D6E60_0000088C:
    lfs f3, 0x4(r25)
    mr r8, r28
    lfs f2, 0x50(r24)
    addi r3, r1, 0x90
    lfs f1, 0x0(r25)
    addi r4, r1, 0x100
    lfs f0, 0x4c(r24)
    fadds f3, f3, f2
    lfs f2, 0xc(r27)
    addi r6, r1, 0x118
    fadds f1, f1, f0
    lfs f0, 0x4(r27)
    fsubs f2, f3, f2
    li r5, 0x1
    fsubs f0, f1, f0
    stfs f2, 0x94(r1)
    stfs f0, 0x90(r1)
    bl fn_805CE420
    lwz r3, 0x3c(r26)
    mr r4, r30
    mr r5, r28
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f1, 0x4c(r24)
    mr r29, r3
    lfs f0, 0x0(r27)
    addi r3, r1, 0x80
    lfs f2, 0xc(r27)
    li r5, 0x0
    fsubs f1, f1, f0
    lfs f0, 0x4(r27)
    stfs f2, 0x8c(r1)
    lbz r31, 0x38(r26)
    fsubs f0, f1, f0
    stfs f2, 0x104(r1)
    lwz r4, 0x3c(r26)
    stfs f0, 0x88(r1)
    stfs f0, 0x100(r1)
    bl fn_805D2A40
    mulli r0, r31, 0xa
    lis r4, lbl_807992D8@ha
    lis r3, lbl_807645D8@ha
    lfs f2, 0x84(r1)
    addi r4, r4, lbl_807992D8@l
    lfs f3, 0x80(r1)
    add r8, r4, r0
    lis r5, lbl_807645D0@ha
    lbz r0, 0x9(r8)
    addi r6, r1, 0x18
    lbz r7, 0x8(r8)
    addi r10, r1, 0x120
    lfd f5, lbl_807645D8@l(r3)
    add r4, r8, r0
    add r3, r8, r7
    lbz r8, 0x6(r4)
    stw r8, 0x144(r1)
    slwi r23, r0, 2
    lbz r11, 0x6(r3)
    slwi r12, r7, 2
    lbz r0, 0x4(r3)
    addi r9, r1, 0x130
    lfd f1, 0x140(r1)
    addi r7, r1, 0x128
    subf r3, r11, r0
    lbz r0, 0x2(r4)
    xoris r3, r3, 0x8000
    stw r3, 0x144(r1)
    subf r0, r8, r0
    lfd f8, lbl_807645D0@l(r5)
    lfd f0, 0x140(r1)
    xoris r0, r0, 0x8000
    stfs f3, 0x18(r1)
    fsubs f6, f1, f8
    fsubs f4, f0, f5
    lfs f3, 0x100(r1)
    stfs f2, 0x1c(r1)
    addi r5, r1, 0x118
    lfs f0, 0x104(r1)
    stw r0, 0x144(r1)
    lfsx f1, r6, r12
    mr r3, r29
    lfd f2, 0x140(r1)
    li r4, 0x1
    fmuls f4, f4, f1
    lfsx f1, r6, r23
    fsubs f2, f2, f5
    stw r11, 0x13c(r1)
    fdivs f4, f3, f4
    lfd f7, 0x138(r1)
    stw r11, 0x13c(r1)
    lfd f5, 0x138(r1)
    stw r8, 0x13c(r1)
    lfd f3, 0x138(r1)
    fmuls f1, f2, f1
    fsubs f7, f7, f8
    fsubs f2, f5, f8
    fdivs f0, f0, f1
    stfsx f7, r10, r12
    stfsx f7, r9, r12
    stfsx f6, r7, r23
    stfsx f6, r9, r23
    fadds f2, f2, f4
    fsubs f1, f3, f8
    stfsx f2, r7, r12
    stfsx f2, r5, r12
    fadds f0, f1, f0
    stfsx f0, r10, r23
    stfsx f0, r5, r23
    bl fn_805CDDD0
    cmpwi r29, 0x0
    li r7, 0x0
    beq lbl_fn_805D6E60_00000A58
    addi r7, r1, 0x108
lbl_fn_805D6E60_00000A58:
    lfs f1, 0x4(r25)
    mr r8, r28
    lfs f0, 0x50(r24)
    addi r3, r1, 0x78
    lfs f2, 0xc(r27)
    addi r4, r1, 0x100
    fadds f3, f1, f0
    lfs f1, 0x0(r25)
    lfs f0, 0x0(r27)
    addi r6, r1, 0x118
    li r5, 0x1
    fsubs f2, f3, f2
    fadds f0, f1, f0
    stfs f2, 0x7c(r1)
    stfs f0, 0x78(r1)
    bl fn_805CE420
    lwz r3, 0x14(r26)
    mr r4, r30
    mr r5, r28
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f1, 0xc(r27)
    mr r29, r3
    lfs f0, 0x0(r27)
    addi r3, r1, 0x68
    stfs f0, 0x70(r1)
    li r5, 0x0
    lbz r31, 0x10(r26)
    stfs f1, 0x74(r1)
    lwz r4, 0x14(r26)
    stfs f0, 0x100(r1)
    stfs f1, 0x104(r1)
    bl fn_805D2A40
    mulli r0, r31, 0xa
    lis r3, lbl_807992D8@ha
    lis r5, lbl_807645D0@ha
    lfs f1, 0x6c(r1)
    addi r3, r3, lbl_807992D8@l
    lfd f8, lbl_807645D0@l(r5)
    add r11, r3, r0
    lis r4, lbl_807645D8@ha
    lbz r7, 0x9(r11)
    addi r6, r1, 0x10
    lbz r9, 0x8(r11)
    addi r10, r1, 0x118
    add r3, r11, r7
    lfs f2, 0x68(r1)
    lbz r8, 0x4(r3)
    add r3, r11, r9
    lbzx r0, r11, r7
    slwi r12, r9, 2
    lbz r11, 0x4(r3)
    slwi r23, r7, 2
    stw r8, 0x144(r1)
    subf r0, r8, r0
    lbz r3, 0x6(r3)
    xoris r0, r0, 0x8000
    lfd f0, 0x140(r1)
    addi r9, r1, 0x128
    subf r3, r11, r3
    lfd f5, lbl_807645D8@l(r4)
    xoris r3, r3, 0x8000
    stw r3, 0x144(r1)
    fsubs f6, f0, f8
    lfs f3, 0x100(r1)
    lfd f0, 0x140(r1)
    addi r7, r1, 0x130
    stfs f2, 0x10(r1)
    addi r5, r1, 0x120
    stfs f1, 0x14(r1)
    fsubs f2, f0, f5
    mr r3, r29
    li r4, 0x1
    stw r0, 0x144(r1)
    lfsx f1, r6, r12
    lfd f0, 0x140(r1)
    fmuls f4, f2, f1
    lfsx f1, r6, r23
    fsubs f2, f0, f5
    lfs f0, 0x104(r1)
    stw r11, 0x13c(r1)
    fdivs f4, f3, f4
    lfd f7, 0x138(r1)
    stw r11, 0x13c(r1)
    lfd f5, 0x138(r1)
    stw r8, 0x13c(r1)
    lfd f3, 0x138(r1)
    fmuls f1, f2, f1
    fsubs f7, f7, f8
    fsubs f2, f5, f8
    fdivs f0, f0, f1
    stfsx f7, r10, r12
    stfsx f7, r9, r12
    stfsx f6, r7, r23
    stfsx f6, r9, r23
    fadds f2, f2, f4
    fsubs f1, f3, f8
    stfsx f2, r7, r12
    stfsx f2, r5, r12
    fadds f0, f1, f0
    stfsx f0, r10, r23
    stfsx f0, r5, r23
    bl fn_805CDDD0
    cmpwi r29, 0x0
    li r7, 0x0
    beq lbl_fn_805D6E60_00000C0C
    addi r7, r1, 0x108
lbl_fn_805D6E60_00000C0C:
    lfs f1, 0x4(r25)
    mr r8, r28
    lfs f0, 0x50(r24)
    addi r3, r1, 0x60
    lfs f2, 0x0(r25)
    addi r4, r1, 0x100
    fadds f1, f1, f0
    lfs f0, 0xc(r27)
    stfs f2, 0x60(r1)
    addi r6, r1, 0x118
    li r5, 0x1
    fsubs f0, f1, f0
    stfs f0, 0x64(r1)
    bl fn_805CE420
    lwz r3, 0x24(r26)
    mr r4, r30
    mr r5, r28
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f1, 0x50(r24)
    mr r29, r3
    lfs f0, 0x8(r27)
    addi r3, r1, 0x50
    lfs f2, 0x0(r27)
    li r5, 0x0
    fsubs f1, f1, f0
    lfs f0, 0xc(r27)
    stfs f2, 0x58(r1)
    lbz r24, 0x20(r26)
    fsubs f0, f1, f0
    stfs f2, 0x100(r1)
    lwz r4, 0x24(r26)
    stfs f0, 0x5c(r1)
    stfs f0, 0x104(r1)
    bl fn_805D2A40
    mulli r0, r24, 0xa
    lis r3, lbl_807992D8@ha
    lis r5, lbl_807645D0@ha
    lfs f1, 0x54(r1)
    addi r3, r3, lbl_807992D8@l
    lfd f8, lbl_807645D0@l(r5)
    add r11, r3, r0
    lis r4, lbl_807645D8@ha
    lbz r7, 0x9(r11)
    addi r6, r1, 0x8
    lbz r9, 0x8(r11)
    addi r10, r1, 0x118
    add r3, r11, r7
    lfs f2, 0x50(r1)
    lbz r8, 0x4(r3)
    add r3, r11, r9
    lbzx r0, r11, r7
    slwi r12, r9, 2
    lbz r11, 0x4(r3)
    slwi r23, r7, 2
    stw r8, 0x144(r1)
    subf r0, r8, r0
    lbz r3, 0x6(r3)
    xoris r0, r0, 0x8000
    lfd f0, 0x140(r1)
    addi r9, r1, 0x128
    subf r3, r11, r3
    lfd f5, lbl_807645D8@l(r4)
    xoris r3, r3, 0x8000
    stw r3, 0x144(r1)
    fsubs f6, f0, f8
    lfs f3, 0x100(r1)
    lfd f0, 0x140(r1)
    addi r7, r1, 0x130
    stfs f2, 0x8(r1)
    addi r5, r1, 0x120
    stfs f1, 0xc(r1)
    fsubs f2, f0, f5
    mr r3, r29
    li r4, 0x1
    stw r0, 0x144(r1)
    lfsx f1, r6, r12
    lfd f0, 0x140(r1)
    fmuls f4, f2, f1
    lfsx f1, r6, r23
    fsubs f2, f0, f5
    lfs f0, 0x104(r1)
    stw r11, 0x13c(r1)
    fdivs f4, f3, f4
    lfd f7, 0x138(r1)
    stw r11, 0x13c(r1)
    lfd f5, 0x138(r1)
    stw r8, 0x13c(r1)
    lfd f3, 0x138(r1)
    fmuls f1, f2, f1
    fsubs f7, f7, f8
    fsubs f2, f5, f8
    fdivs f0, f0, f1
    stfsx f7, r10, r12
    stfsx f7, r9, r12
    stfsx f6, r7, r23
    stfsx f6, r9, r23
    fadds f2, f2, f4
    fsubs f1, f3, f8
    stfsx f2, r7, r12
    stfsx f2, r5, r12
    fadds f0, f1, f0
    stfsx f0, r10, r23
    stfsx f0, r5, r23
    bl fn_805CDDD0
    cmpwi r29, 0x0
    li r7, 0x0
    beq lbl_fn_805D6E60_00000DC8
    addi r7, r1, 0x108
lbl_fn_805D6E60_00000DC8:
    lfs f1, 0x4(r25)
    mr r8, r28
    lfs f0, 0x8(r27)
    addi r3, r1, 0x48
    lfs f2, 0x0(r25)
    addi r4, r1, 0x100
    fadds f0, f1, f0
    stfs f2, 0x48(r1)
    addi r6, r1, 0x118
    li r5, 0x1
    stfs f0, 0x4c(r1)
    bl fn_805CE420
    addi r11, r1, 0x170
    bl _restgpr_23
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_805D7C70(void)
{
    nofralloc
    lbz r0, 0x100(r3)
    cmplw r4, r0
    blt lbl_fn_805D7C70_00000E24
    li r3, 0x0
    blr
lbl_fn_805D7C70_00000E24:
    lwz r3, 0xfc(r3)
    slwi r0, r4, 3
    add r3, r3, r0
    lwz r3, 0x4(r3)
    blr
}

asm void fn_805D7CA0(void)
{
    nofralloc
    lwz r12, 0x0(r3)
    lwz r12, 0x5c(r12)
    mtctr r12
    bctr
}

asm void fn_805D7CB0(void)
{
    nofralloc
    lis r3, lbl_807CA218@ha
    addi r3, r3, lbl_807CA218@l
    blr
}

asm void fn_805D7CC0(void)
{
    nofralloc
    lis r4, lbl_807CA200@ha
    lis r3, lbl_807CA218@ha
    addi r4, r4, lbl_807CA200@l
    stw r4, lbl_807CA218@l(r3)
    blr
}

asm void fn_805D7CE0(void)
{
    nofralloc
    lis r3, lbl_807645E0@ha
    fabs f2, f1
    stwu r1, -0x10(r1)
    lfs f0, lbl_807645E0@l(r3)
    b lbl_fn_805D7CE0_00000E9C
    nop
lbl_fn_805D7CE0_00000E98:
    fsubs f2, f2, f0
lbl_fn_805D7CE0_00000E9C:
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    beq lbl_fn_805D7CE0_00000E98
    addi r3, r1, 0xc
    psq_st f2, 0x0(r3), 1, 3
    addi r3, r1, 0x8
    lhz r0, 0xc(r1)
    sth r0, 0x8(r1)
    psq_l f0, 0x0(r3), 1, 3
    lis r5, lbl_807993C0@ha
    clrlslwi r0, r0, 24, 4
    lis r3, lbl_807645E4@ha
    addi r5, r5, lbl_807993C0@l
    fsubs f4, f2, f0
    add r4, r5, r0
    lfs f0, lbl_807645E4@l(r3)
    lfs f3, 0x8(r4)
    fcmpo cr0, f1, f0
    lfsx f2, r5, r0
    fmuls f0, f4, f3
    fadds f1, f2, f0
    bge lbl_fn_805D7CE0_00000EF8
    fneg f1, f1
lbl_fn_805D7CE0_00000EF8:
    addi r1, r1, 0x10
    blr
}

asm void fn_805D7D60(void)
{
    nofralloc
    lis r3, lbl_807645E0@ha
    fabs f1, f1
    stwu r1, -0x10(r1)
    lfs f0, lbl_807645E0@l(r3)
    b lbl_fn_805D7D60_00000F1C
    nop
lbl_fn_805D7D60_00000F18:
    fsubs f1, f1, f0
lbl_fn_805D7D60_00000F1C:
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    beq lbl_fn_805D7D60_00000F18
    addi r3, r1, 0xc
    psq_st f1, 0x0(r3), 1, 3
    addi r3, r1, 0x8
    lhz r0, 0xc(r1)
    sth r0, 0x8(r1)
    psq_l f0, 0x0(r3), 1, 3
    lis r3, lbl_807993C0@ha
    clrlslwi r0, r0, 24, 4
    addi r3, r3, lbl_807993C0@l
    fsubs f2, f1, f0
    add r3, r3, r0
    lfs f1, 0xc(r3)
    lfs f0, 0x4(r3)
    fmuls f1, f2, f1
    fadds f1, f0, f1
    addi r1, r1, 0x10
    blr
}

asm void fn_805D7DD0(void)
{
    nofralloc
    lis r3, lbl_807645E0@ha
    stwu r1, -0x20(r1)
    addi r3, r3, lbl_807645E0@l
    lfs f0, 0x4(r3)
    fcmpu cr0, f0, f2
    bne lbl_fn_805D7DD0_00000F98
    fcmpu cr0, f0, f1
    bne lbl_fn_805D7DD0_00000F98
    fmr f1, f0
    b lbl_fn_805D7DD0_00001128
lbl_fn_805D7DD0_00000F98:
    lfs f4, 0x4(r3)
    fcmpo cr0, f2, f4
    cror eq, gt, eq
    bne lbl_fn_805D7DD0_00001010
    fcmpo cr0, f1, f4
    cror eq, gt, eq
    bne lbl_fn_805D7DD0_00000FE0
    fcmpo cr0, f2, f1
    cror eq, gt, eq
    bne lbl_fn_805D7DD0_00000FCC
    fmr f3, f2
    li r0, 0x0
    b lbl_fn_805D7DD0_00001084
lbl_fn_805D7DD0_00000FCC:
    fmr f3, f1
    lfs f4, 0x10(r3)
    fmr f1, f2
    li r0, 0x1
    b lbl_fn_805D7DD0_00001084
lbl_fn_805D7DD0_00000FE0:
    fneg f1, f1
    fcmpo cr0, f2, f1
    cror eq, gt, eq
    bne lbl_fn_805D7DD0_00000FFC
    fmr f3, f2
    li r0, 0x1
    b lbl_fn_805D7DD0_00001084
lbl_fn_805D7DD0_00000FFC:
    fmr f3, f1
    lfs f4, 0x18(r3)
    fmr f1, f2
    li r0, 0x0
    b lbl_fn_805D7DD0_00001084
lbl_fn_805D7DD0_00001010:
    fcmpo cr0, f1, f4
    cror eq, gt, eq
    bne lbl_fn_805D7DD0_00001050
    fneg f0, f2
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_805D7DD0_0000103C
    fmr f3, f0
    lfs f4, 0x1c(r3)
    li r0, 0x1
    b lbl_fn_805D7DD0_00001084
lbl_fn_805D7DD0_0000103C:
    fmr f3, f1
    lfs f4, 0x10(r3)
    fmr f1, f0
    li r0, 0x0
    b lbl_fn_805D7DD0_00001084
lbl_fn_805D7DD0_00001050:
    fneg f0, f2
    fneg f1, f1
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_805D7DD0_00001074
    fmr f3, f0
    lfs f4, 0x20(r3)
    li r0, 0x0
    b lbl_fn_805D7DD0_00001084
lbl_fn_805D7DD0_00001074:
    fmr f3, f1
    lfs f4, 0x18(r3)
    fmr f1, f0
    li r0, 0x1
lbl_fn_805D7DD0_00001084:
    cmpwi r0, 0x0
    beq lbl_fn_805D7DD0_000010DC
    fdivs f1, f1, f3
    lfs f0, 0xc(r3)
    addi r3, r1, 0x10
    fmuls f1, f1, f0
    psq_st f1, 0x0(r3), 1, 3
    addi r3, r1, 0xa
    lhz r0, 0x10(r1)
    sth r0, 0xa(r1)
    psq_l f0, 0x0(r3), 1, 3
    lis r4, lbl_8079A3D0@ha
    slwi r0, r0, 3
    addi r4, r4, lbl_8079A3D0@l
    fsubs f2, f1, f0
    add r3, r4, r0
    lfsx f0, r4, r0
    lfs f1, 0x4(r3)
    fmuls f1, f2, f1
    fadds f0, f0, f1
    fsubs f1, f4, f0
    b lbl_fn_805D7DD0_00001128
lbl_fn_805D7DD0_000010DC:
    fdivs f1, f1, f3
    lfs f0, 0xc(r3)
    addi r3, r1, 0xc
    fmuls f1, f1, f0
    psq_st f1, 0x0(r3), 1, 3
    addi r3, r1, 0x8
    lhz r0, 0xc(r1)
    sth r0, 0x8(r1)
    psq_l f0, 0x0(r3), 1, 3
    lis r4, lbl_8079A3D0@ha
    slwi r0, r0, 3
    addi r4, r4, lbl_8079A3D0@l
    fsubs f2, f1, f0
    add r3, r4, r0
    lfsx f0, r4, r0
    lfs f1, 0x4(r3)
    fmuls f1, f2, f1
    fadds f0, f0, f1
    fadds f1, f4, f0
lbl_fn_805D7DD0_00001128:
    addi r1, r1, 0x20
    blr
}

asm void fn_805D7F90(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    cmplw r0, r4
    beq lbl_fn_805D7F90_00001144
    li r3, 0x0
    blr
lbl_fn_805D7F90_00001144:
    lhz r0, 0x4(r3)
    cmplwi r0, 0xfeff
    beq lbl_fn_805D7F90_00001158
    li r3, 0x0
    blr
lbl_fn_805D7F90_00001158:
    lhz r0, 0x6(r3)
    cmplw r0, r5
    beq lbl_fn_805D7F90_0000116C
    li r3, 0x0
    blr
lbl_fn_805D7F90_0000116C:
    clrlslwi r4, r6, 16, 3
    lwz r5, 0x8(r3)
    addi r0, r4, 0x10
    cmplw r5, r0
    bge lbl_fn_805D7F90_00001188
    li r3, 0x0
    blr
lbl_fn_805D7F90_00001188:
    lhz r3, 0xe(r3)
    subf r0, r6, r3
    orc r3, r3, r6
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_805D8010(void)
{
    nofralloc
    lwz r7, 0x0(r3)
    lbz r6, 0x0(r7)
    rlwinm. r0, r6, 0, 24, 24
    bne lbl_fn_805D8010_000011D0
    lwz r4, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
    b lbl_fn_805D8010_00001220
lbl_fn_805D8010_000011D0:
    rlwinm r0, r6, 0, 24, 26
    cmpwi r0, 0xc0
    bne lbl_fn_805D8010_000011FC
    lbz r0, 0x1(r7)
    lwz r4, 0x0(r3)
    clrlwi r5, r0, 26
    rlwimi r5, r6, 6, 21, 25
    addi r0, r4, 0x2
    stw r0, 0x0(r3)
    mr r6, r5
    b lbl_fn_805D8010_00001220
lbl_fn_805D8010_000011FC:
    lwz r4, 0x0(r3)
    clrlslwi r5, r6, 27, 12
    lbz r6, 0x1(r7)
    lbz r7, 0x2(r7)
    addi r0, r4, 0x3
    rlwimi r5, r6, 6, 20, 25
    rlwimi r5, r7, 0, 26, 31
    stw r0, 0x0(r3)
    clrlwi r6, r5, 16
lbl_fn_805D8010_00001220:
    mr r3, r6
    blr
}

asm void fn_805D8090(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    mr r6, r3
    lwz r4, 0x0(r3)
    lhz r3, 0x0(r5)
    addi r0, r4, 0x2
    stw r0, 0x0(r6)
    blr
}

asm void fn_805D80B0(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    mr r6, r3
    lwz r4, 0x0(r3)
    lbz r3, 0x0(r5)
    addi r0, r4, 0x1
    stw r0, 0x0(r6)
    blr
}

asm void fn_805D80D0(void)
{
    nofralloc
    lwz r4, 0x0(r3)
    li r0, 0x0
    lbz r5, 0x0(r4)
    cmplwi r5, 0x81
    blt lbl_fn_805D80D0_0000128C
    cmplwi r5, 0xa0
    blt lbl_fn_805D80D0_00001294
lbl_fn_805D80D0_0000128C:
    cmplwi r5, 0xe0
    blt lbl_fn_805D80D0_00001298
lbl_fn_805D80D0_00001294:
    li r0, 0x1
lbl_fn_805D80D0_00001298:
    cmpwi r0, 0x0
    beq lbl_fn_805D80D0_000012B8
    lbz r6, 0x1(r4)
    rlwimi r6, r5, 8, 16, 23
    lwz r4, 0x0(r3)
    addi r0, r4, 0x2
    stw r0, 0x0(r3)
    b lbl_fn_805D80D0_000012C8
lbl_fn_805D80D0_000012B8:
    lwz r4, 0x0(r3)
    mr r6, r5
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
lbl_fn_805D80D0_000012C8:
    mr r3, r6
    blr
}

asm void fn_805D8130(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    lis r4, lbl_80764608@ha
    li r6, -0x1
    lfs f0, lbl_80764608@l(r4)
    stw r31, 0x2c(r1)
    lis r5, lbl_807CA228@ha
    li r0, 0xff
    stw r30, 0x28(r1)
    addi r4, r5, lbl_807CA228@l
    stw r29, 0x24(r1)
    li r29, 0x0
    stw r28, 0x20(r1)
    addi r28, r3, 0x18
    stw r6, 0x0(r3)
    stw r29, 0x8(r1)
    stw r6, 0xc(r1)
    lbz r30, 0x8(r1)
    stw r6, 0x4(r3)
    lbz r31, 0x9(r1)
    stw r6, 0x8(r3)
    lbz r12, 0xa(r1)
    stw r6, 0xc(r3)
    lbz r11, 0xb(r1)
    stw r6, 0x10(r3)
    lbz r10, 0xc(r1)
    stw r6, 0x14(r3)
    lbz r9, 0xd(r1)
    stw r6, 0x18(r3)
    lbz r8, 0xe(r1)
    stw r6, 0x1c(r3)
    lbz r7, 0xf(r1)
    stb r0, 0x42(r3)
    stb r29, 0x43(r3)
    stfs f0, 0x44(r3)
    stw r29, 0x48(r3)
    stw r0, lbl_807CA228@l(r5)
    stw r29, 0x4(r4)
    lbz r6, 0x18(r3)
    lbz r5, 0x19(r3)
    lbz r4, 0x1a(r3)
    lbz r0, 0x1b(r3)
    stb r30, 0x0(r3)
    stb r31, 0x1(r3)
    stb r12, 0x2(r3)
    stb r11, 0x3(r3)
    stb r10, 0x4(r3)
    stb r9, 0x5(r3)
    stb r8, 0x6(r3)
    stb r7, 0x7(r3)
    stw r29, 0x20(r3)
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r4, 0xa(r3)
    stb r0, 0xb(r3)
    lbz r0, 0x0(r28)
    stb r0, 0xc(r3)
    lwz r0, 0x20(r3)
    lbz r4, 0x1(r28)
    stb r4, 0xd(r3)
    cmpwi r0, 0x2
    lbz r0, 0x2(r28)
    stb r0, 0xe(r3)
    lbz r0, 0x3(r28)
    stb r0, 0xf(r3)
    beq lbl_fn_805D8130_000013DC
    addi r5, r3, 0x18
    b lbl_fn_805D8130_000013E0
lbl_fn_805D8130_000013DC:
    addi r5, r3, 0x1c
lbl_fn_805D8130_000013E0:
    lbz r0, 0x0(r5)
    stb r0, 0x10(r3)
    lwz r0, 0x20(r3)
    lbz r4, 0x1(r5)
    stb r4, 0x11(r3)
    cmpwi r0, 0x0
    lbz r0, 0x2(r5)
    stb r0, 0x12(r3)
    lbz r0, 0x3(r5)
    stb r0, 0x13(r3)
    bne lbl_fn_805D8130_00001414
    addi r6, r3, 0x18
    b lbl_fn_805D8130_00001418
lbl_fn_805D8130_00001414:
    addi r6, r3, 0x1c
lbl_fn_805D8130_00001418:
    lbz r0, 0x0(r6)
    lis r5, lbl_80808081@ha
    stb r0, 0x14(r3)
    addi r12, r5, lbl_80808081@l
    lwz r0, 0x20(r3)
    li r4, -0x1
    lbz r5, 0x1(r6)
    stb r5, 0x15(r3)
    cmpwi r0, 0x1
    lbz r5, 0xb(r3)
    lbz r0, 0x2(r6)
    stb r0, 0x16(r3)
    lbz r11, 0x42(r3)
    lbz r0, 0xf(r3)
    stw r4, 0x10(r1)
    mullw r10, r5, r11
    lbz r31, 0x3(r6)
    lbz r5, 0x11(r1)
    lbz r7, 0x13(r3)
    stb r5, 0x19(r3)
    mullw r9, r0, r11
    lbz r0, 0x13(r1)
    lbz r4, 0x12(r1)
    stb r5, 0x9(r3)
    lbz r6, 0x10(r1)
    mullw r8, r7, r11
    stb r0, 0x1b(r3)
    stb r0, 0xb(r3)
    mulhw r0, r12, r9
    stb r4, 0x1a(r3)
    stb r4, 0xa(r3)
    stb r6, 0x18(r3)
    mulhw r5, r12, r10
    add r0, r0, r9
    stb r6, 0x8(r3)
    add r4, r5, r10
    srawi r4, r4, 7
    mulhw r4, r12, r8
    srawi r5, r0, 7
    srwi r6, r5, 31
    add r5, r5, r6
    stb r5, 0xf(r3)
    mullw r7, r31, r11
    add r4, r4, r8
    srawi r5, r4, 7
    mulhw r0, r12, r7
    srwi r6, r5, 31
    add r5, r5, r6
    stb r5, 0x13(r3)
    add r0, r0, r7
    srawi r0, r0, 7
    srwi r4, r0, 31
    add r0, r0, r4
    stb r0, 0x17(r3)
    beq lbl_fn_805D8130_000014FC
    addi r5, r3, 0x18
    b lbl_fn_805D8130_00001500
lbl_fn_805D8130_000014FC:
    addi r5, r3, 0x1c
lbl_fn_805D8130_00001500:
    lbz r0, 0x0(r5)
    stb r0, 0xc(r3)
    lwz r0, 0x20(r3)
    lbz r4, 0x1(r5)
    stb r4, 0xd(r3)
    cmpwi r0, 0x2
    lbz r0, 0x2(r5)
    stb r0, 0xe(r3)
    lbz r0, 0x3(r5)
    stb r0, 0xf(r3)
    beq lbl_fn_805D8130_00001534
    addi r5, r3, 0x18
    b lbl_fn_805D8130_00001538
lbl_fn_805D8130_00001534:
    addi r5, r3, 0x1c
lbl_fn_805D8130_00001538:
    lbz r0, 0x0(r5)
    stb r0, 0x10(r3)
    lwz r0, 0x20(r3)
    lbz r4, 0x1(r5)
    stb r4, 0x11(r3)
    cmpwi r0, 0x0
    lbz r0, 0x2(r5)
    stb r0, 0x12(r3)
    lbz r0, 0x3(r5)
    stb r0, 0x13(r3)
    bne lbl_fn_805D8130_0000156C
    addi r11, r3, 0x18
    b lbl_fn_805D8130_00001570
lbl_fn_805D8130_0000156C:
    addi r11, r3, 0x1c
lbl_fn_805D8130_00001570:
    lbz r0, 0x0(r11)
    lis r6, lbl_80808081@ha
    stb r0, 0x14(r3)
    lis r5, lbl_8076460C@ha
    lbz r7, 0xb(r3)
    lis r4, lbl_80764608@ha
    lbz r9, 0x42(r3)
    addi r10, r6, lbl_80808081@l
    lbz r0, 0x1(r11)
    stb r0, 0x15(r3)
    mullw r8, r7, r9
    lbz r7, 0xf(r3)
    li r0, 0x1
    lbz r6, 0x2(r11)
    stb r6, 0x16(r3)
    lbz r6, 0x13(r3)
    lbz r11, 0x3(r11)
    mullw r7, r7, r9
    lfs f0, lbl_80764608@l(r4)
    lfs f1, lbl_8076460C@l(r5)
    stw r0, 0x38(r3)
    mullw r5, r6, r9
    stw r0, 0x3c(r3)
    stfs f1, 0x24(r3)
    stfs f1, 0x28(r3)
    mulhw r6, r10, r8
    stfs f0, 0x2c(r3)
    stfs f0, 0x30(r3)
    mulhw r0, r10, r7
    stfs f0, 0x34(r3)
    add r6, r6, r8
    srawi r8, r6, 7
    mullw r4, r11, r9
    srwi r9, r8, 31
    add r0, r0, r7
    add r7, r8, r9
    stb r7, 0xb(r3)
    srawi r7, r0, 7
    mulhw r6, r10, r5
    add r5, r6, r5
    mulhw r0, r10, r4
    srwi r6, r7, 31
    srawi r5, r5, 7
    add r6, r7, r6
    stb r6, 0xf(r3)
    srwi r6, r5, 31
    add r0, r0, r4
    add r5, r5, r6
    srawi r0, r0, 7
    stb r5, 0x13(r3)
    srwi r4, r0, 31
    add r0, r0, r4
    stb r0, 0x17(r3)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    addi r1, r1, 0x30
    blr
}

asm void fn_805D84C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_805D84C0_00001688
    cmpwi r4, 0x0
    ble lbl_fn_805D84C0_00001688
    bl dtor_80084684
lbl_fn_805D84C0_00001688:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805D8500(void)
{
    nofralloc
    stw r4, 0x48(r3)
    blr
}

asm void fn_805D8510(void)
{
    nofralloc
    lwz r3, 0x48(r3)
    blr
}

asm void fn_805D8520(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0xff
    stw r31, 0x2c(r1)
    li r31, 0x0
    stw r30, 0x28(r1)
    lis r30, lbl_807CA220@ha
    addi r30, r30, lbl_807CA220@l
    addi r4, r30, 0x8
    stw r0, 0x8(r30)
    stw r31, 0x4(r4)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805D8520_0000170C
    lwz r4, 0x4(r3)
    addis r0, r4, 0x1
    cmplwi r0, 0xffff
    beq lbl_fn_805D8520_0000172C
lbl_fn_805D8520_0000170C:
    lwz r0, 0x0(r3)
    addi r4, r1, 0x1c
    stw r0, 0x20(r1)
    lwz r0, 0x4(r3)
    addi r3, r1, 0x20
    stw r0, 0x1c(r1)
    bl fn_805D9830
    b lbl_fn_805D8520_00001FF8
lbl_fn_805D8520_0000172C:
    lwz r3, 0x48(r3)
    cmpwi r3, 0x0
    beq lbl_fn_805D8520_00001E58
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    subi r0, r3, 0x4
    cmplwi r0, 0x2
    ble lbl_fn_805D8520_00001B10
    cmplwi r3, 0x1
    ble lbl_fn_805D8520_0000176C
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_805D8520_0000196C
    b lbl_fn_805D8520_00001CB4
lbl_fn_805D8520_0000176C:
    lbz r0, 0x0(r30)
    extsb. r0, r0
    bne lbl_fn_805D8520_00001784
    li r0, 0x1
    stw r31, 0x4(r30)
    stb r0, 0x0(r30)
lbl_fn_805D8520_00001784:
    lis r3, lbl_80764608@ha
    lwz r0, 0x4(r30)
    lfs f1, lbl_80764608@l(r3)
    addi r4, r1, 0x18
    stw r0, 0x18(r1)
    li r3, 0x0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80617A10
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x0
    li r4, 0x11
    li r5, 0x0
    bl fn_806177F0
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x0
    bl fn_80617200
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0xf
    bl fn_80617D50
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617220
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0xa
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl fn_80617420
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x2
    li r7, 0xf
    bl fn_80613520
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xb
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    b lbl_fn_805D8520_00001FF8
lbl_fn_805D8520_0000196C:
    lbz r0, 0x0(r30)
    extsb. r0, r0
    bne lbl_fn_805D8520_00001984
    li r0, 0x1
    stw r31, 0x4(r30)
    stb r0, 0x0(r30)
lbl_fn_805D8520_00001984:
    lis r3, lbl_80764608@ha
    lwz r0, 0x4(r30)
    lfs f1, lbl_80764608@l(r3)
    addi r4, r1, 0x14
    stw r0, 0x14(r1)
    li r3, 0x0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80617A10
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x0
    li r4, 0x11
    li r5, 0x0
    bl fn_806177F0
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x0
    bl fn_80617200
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0xf
    bl fn_80617D50
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617220
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0x0
    bl fn_80617340
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x2
    li r7, 0xf
    bl fn_80613520
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xb
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    b lbl_fn_805D8520_00001FF8
lbl_fn_805D8520_00001B10:
    lbz r0, 0x0(r30)
    extsb. r0, r0
    bne lbl_fn_805D8520_00001B28
    li r0, 0x1
    stw r31, 0x4(r30)
    stb r0, 0x0(r30)
lbl_fn_805D8520_00001B28:
    lis r3, lbl_80764608@ha
    lwz r0, 0x4(r30)
    lfs f1, lbl_80764608@l(r3)
    addi r4, r1, 0x10
    stw r0, 0x10(r1)
    li r3, 0x0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80617A10
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x0
    li r4, 0x11
    li r5, 0x0
    bl fn_806177F0
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x0
    bl fn_80617200
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0xf
    bl fn_80617D50
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617220
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0x0
    bl fn_80617340
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x2
    li r7, 0xf
    bl fn_80613520
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xb
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    b lbl_fn_805D8520_00001FF8
lbl_fn_805D8520_00001CB4:
    lbz r0, 0x0(r30)
    extsb. r0, r0
    bne lbl_fn_805D8520_00001CCC
    li r0, 0x1
    stw r31, 0x4(r30)
    stb r0, 0x0(r30)
lbl_fn_805D8520_00001CCC:
    lis r3, lbl_80764608@ha
    lwz r0, 0x4(r30)
    lfs f1, lbl_80764608@l(r3)
    addi r4, r1, 0xc
    stw r0, 0xc(r1)
    li r3, 0x0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80617A10
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x0
    li r4, 0x11
    li r5, 0x0
    bl fn_806177F0
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x0
    bl fn_80617200
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0xf
    bl fn_80617D50
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617220
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0x0
    bl fn_80617340
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x2
    li r7, 0xf
    bl fn_80613520
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xb
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    b lbl_fn_805D8520_00001FF8
lbl_fn_805D8520_00001E58:
    lbz r0, 0x0(r30)
    extsb. r0, r0
    bne lbl_fn_805D8520_00001E70
    li r0, 0x1
    stw r31, 0x4(r30)
    stb r0, 0x0(r30)
lbl_fn_805D8520_00001E70:
    lis r3, lbl_80764608@ha
    lwz r0, 0x4(r30)
    lfs f1, lbl_80764608@l(r3)
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    li r3, 0x0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80617A10
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x0
    li r4, 0x11
    li r5, 0x0
    bl fn_806177F0
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x0
    bl fn_80617200
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0xf
    bl fn_80617D50
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617220
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0x0
    bl fn_80617340
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x2
    li r7, 0xf
    bl fn_80613520
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xb
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
lbl_fn_805D8520_00001FF8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
