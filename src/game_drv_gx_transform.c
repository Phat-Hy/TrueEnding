#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_24(void);
extern void _savegpr_24(void);
extern void dtor_80084684(void);
extern void fn_805D7F90(void);
extern void fn_805DB3D0(void);
extern void fn_805DB4B0(void);
extern void fn_80612E80(void);
extern void fn_806134E0(void);
extern void fn_80613520(void);
extern void fn_80613960(void);
extern void fn_80613BB0(void);
extern void fn_80614790(void);
extern void fn_80615D20(void);
extern void fn_80615D50(void);
extern void fn_80615FF0(void);
extern void fn_80616250(void);
extern void fn_806165B0(void);
extern void fn_80617200(void);
extern void fn_80617220(void);
extern void fn_806173E0(void);
extern void fn_80617420(void);
extern void fn_80617460(void);
extern void fn_806174C0(void);
extern void fn_80617520(void);
extern void fn_806176F0(void);
extern void fn_80617730(void);
extern void fn_806177F0(void);
extern void fn_80617880(void);
extern void fn_806179E0(void);
extern void fn_80617A10(void);
extern void fn_80617D50(void);

/* External data declarations */
extern u8 lbl_80764608[];
extern u8 lbl_80764610[];
extern u8 lbl_80764618[];
extern u8 lbl_80764620[];
extern u8 lbl_80764628[];
extern u8 lbl_8079A4D8[];
extern u8 lbl_8079A508[];
extern u8 lbl_8079A5E8[];
extern u8 lbl_8079A5F8[];
extern u8 lbl_8079A650[];
extern u8 lbl_8079A6F0[];
extern u8 lbl_807CA220[];
extern u8 lbl_807CA224[];
extern u8 lbl_807CA228[];
extern u8 lbl_80808081[];

/* Small data declarations */

/* Function declarations */
void fn_805D8E70(void);
void fn_805D8EC0(void);
void fn_805D9010(void);
void fn_805D9190(void);
void fn_805D91A0(void);
void fn_805D91B0(void);
void fn_805D9280(void);
void fn_805D92F0(void);
void fn_805D9360(void);
void fn_805D93D0(void);
void fn_805D93E0(void);
void fn_805D93F0(void);
void fn_805D9530(void);
void fn_805D9540(void);
void fn_805D9550(void);
void fn_805D9560(void);
void fn_805D9570(void);
void fn_805D9580(void);
void fn_805D9590(void);
void fn_805D95A0(void);
void fn_805D9830(void);
void fn_805D9B30(void);
void fn_805D9BE0(void);
void fn_805D9C70(void);
void fn_805D9CC0(void);
void fn_805D9CF0(void);
void fn_805D9D10(void);
void fn_805D9D80(void);
void fn_805D9DF0(void);
void fn_805D9E10(void);
void fn_805D9E60(void);
void fn_805D9EA0(void);
void fn_805D9F00(void);
void fn_805DA050(void);
void fn_805DA160(void);
void fn_805DA1B0(void);
void fn_805DA1F0(void);
void fn_805DA200(void);
void fn_805DA210(void);
void fn_805DA220(void);
void fn_805DA230(void);
void fn_805DA250(void);
void fn_805DA270(void);
void fn_805DA280(void);
void fn_805DA290(void);
void fn_805DA2A0(void);
void fn_805DA2B0(void);
void fn_805DA2C0(void);
void fn_805DA2D0(void);
void fn_805DA2F0(void);
void fn_805DA310(void);
void fn_805DA3B0(void);
void fn_805DA3C0(void);
void fn_805DA410(void);
void fn_805DA510(void);
void fn_805DA5C0(void);
void fn_805DA5D0(void);
void fn_805DA6A0(void);
void fn_805DA7B0(void);
void fn_805DA7C0(void);
void fn_805DA800(void);

asm void fn_805D8E70(void)
{
    nofralloc
    lbz r0, 0x0(r4)
    stb r0, 0x0(r3)
    lbz r0, 0x1(r4)
    stb r0, 0x1(r3)
    lbz r0, 0x2(r4)
    stb r0, 0x2(r3)
    lbz r0, 0x3(r4)
    stb r0, 0x3(r3)
    lbz r0, 0x0(r5)
    stb r0, 0x4(r3)
    lbz r0, 0x1(r5)
    stb r0, 0x5(r3)
    lbz r0, 0x2(r5)
    stb r0, 0x6(r3)
    lbz r0, 0x3(r5)
    stb r0, 0x7(r3)
    blr
}

asm void fn_805D8EC0(void)
{
    nofralloc
    lbz r7, 0x18(r3)
    cmpwi r4, 0x1
    lbz r6, 0x19(r3)
    lbz r5, 0x1a(r3)
    lbz r0, 0x1b(r3)
    stw r4, 0x20(r3)
    stb r7, 0x8(r3)
    stb r6, 0x9(r3)
    stb r5, 0xa(r3)
    stb r0, 0xb(r3)
    beq lbl_fn_805D8EC0_00000084
    addi r5, r3, 0x18
    b lbl_fn_805D8EC0_00000088
lbl_fn_805D8EC0_00000084:
    addi r5, r3, 0x1c
lbl_fn_805D8EC0_00000088:
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
    beq lbl_fn_805D8EC0_000000BC
    addi r5, r3, 0x18
    b lbl_fn_805D8EC0_000000C0
lbl_fn_805D8EC0_000000BC:
    addi r5, r3, 0x1c
lbl_fn_805D8EC0_000000C0:
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
    bne lbl_fn_805D8EC0_000000F4
    addi r5, r3, 0x18
    b lbl_fn_805D8EC0_000000F8
lbl_fn_805D8EC0_000000F4:
    addi r5, r3, 0x1c
lbl_fn_805D8EC0_000000F8:
    lbz r0, 0x0(r5)
    lis r4, lbl_80808081@ha
    stb r0, 0x14(r3)
    addi r10, r4, lbl_80808081@l
    lbz r0, 0xb(r3)
    lbz r4, 0x1(r5)
    stb r4, 0x15(r3)
    lbz r7, 0x42(r3)
    lbz r4, 0x2(r5)
    stb r4, 0x16(r3)
    mullw r6, r0, r7
    lbz r4, 0xf(r3)
    lbz r0, 0x13(r3)
    lbz r8, 0x3(r5)
    mullw r5, r0, r7
    mullw r0, r8, r7
    mullw r4, r4, r7
    mulhw r8, r10, r6
    mulhw r7, r10, r4
    add r6, r8, r6
    srawi r8, r6, 7
    mulhw r6, r10, r5
    srwi r9, r8, 31
    add r4, r7, r4
    add r7, r8, r9
    stb r7, 0xb(r3)
    srawi r7, r4, 7
    add r5, r6, r5
    srwi r6, r7, 31
    mulhw r4, r10, r0
    add r6, r7, r6
    stb r6, 0xf(r3)
    srawi r5, r5, 7
    srwi r6, r5, 31
    add r0, r4, r0
    srawi r0, r0, 7
    add r5, r5, r6
    srwi r4, r0, 31
    stb r5, 0x13(r3)
    add r0, r0, r4
    stb r0, 0x17(r3)
    blr
}

asm void fn_805D9010(void)
{
    nofralloc
    lbz r8, 0x0(r4)
    stb r8, 0x18(r3)
    lwz r0, 0x20(r3)
    lbz r7, 0x1(r4)
    stb r7, 0x19(r3)
    cmpwi r0, 0x1
    lbz r6, 0x2(r4)
    stb r6, 0x1a(r3)
    lbz r4, 0x3(r4)
    stb r4, 0x1b(r3)
    lbz r0, 0x0(r5)
    stb r0, 0x1c(r3)
    lbz r0, 0x1(r5)
    stb r0, 0x1d(r3)
    lbz r0, 0x2(r5)
    stb r0, 0x1e(r3)
    lbz r0, 0x3(r5)
    stb r0, 0x1f(r3)
    stb r8, 0x8(r3)
    stb r7, 0x9(r3)
    stb r6, 0xa(r3)
    stb r4, 0xb(r3)
    beq lbl_fn_805D9010_00000204
    addi r5, r3, 0x18
    b lbl_fn_805D9010_00000208
lbl_fn_805D9010_00000204:
    addi r5, r3, 0x1c
lbl_fn_805D9010_00000208:
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
    beq lbl_fn_805D9010_0000023C
    addi r5, r3, 0x18
    b lbl_fn_805D9010_00000240
lbl_fn_805D9010_0000023C:
    addi r5, r3, 0x1c
lbl_fn_805D9010_00000240:
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
    bne lbl_fn_805D9010_00000274
    addi r5, r3, 0x18
    b lbl_fn_805D9010_00000278
lbl_fn_805D9010_00000274:
    addi r5, r3, 0x1c
lbl_fn_805D9010_00000278:
    lbz r0, 0x0(r5)
    lis r4, lbl_80808081@ha
    stb r0, 0x14(r3)
    addi r10, r4, lbl_80808081@l
    lbz r0, 0xb(r3)
    lbz r4, 0x1(r5)
    stb r4, 0x15(r3)
    lbz r7, 0x42(r3)
    lbz r4, 0x2(r5)
    stb r4, 0x16(r3)
    mullw r6, r0, r7
    lbz r4, 0xf(r3)
    lbz r0, 0x13(r3)
    lbz r8, 0x3(r5)
    mullw r5, r0, r7
    mullw r0, r8, r7
    mullw r4, r4, r7
    mulhw r8, r10, r6
    mulhw r7, r10, r4
    add r6, r8, r6
    srawi r8, r6, 7
    mulhw r6, r10, r5
    srwi r9, r8, 31
    add r4, r7, r4
    add r7, r8, r9
    stb r7, 0xb(r3)
    srawi r7, r4, 7
    add r5, r6, r5
    srwi r6, r7, 31
    mulhw r4, r10, r0
    add r6, r7, r6
    stb r6, 0xf(r3)
    srawi r5, r5, 7
    srwi r6, r5, 31
    add r0, r4, r0
    srawi r0, r0, 7
    add r5, r5, r6
    srwi r4, r0, 31
    stb r5, 0x13(r3)
    add r0, r0, r4
    stb r0, 0x17(r3)
    blr
}

asm void fn_805D9190(void)
{
    nofralloc
    lfs f1, 0x24(r3)
    blr
}

asm void fn_805D91A0(void)
{
    nofralloc
    lfs f1, 0x28(r3)
    blr
}

asm void fn_805D91B0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    fmr f31, f2
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    fmr f30, f1
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r3, 0x48(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    xoris r0, r3, 0x8000
    lis r31, 0x4330
    lis r30, lbl_80764610@ha
    stw r0, 0xc(r1)
    lfd f1, lbl_80764610@l(r30)
    stw r31, 0x8(r1)
    lwz r3, 0x48(r29)
    lfd f0, 0x8(r1)
    lwz r12, 0x0(r3)
    fsubs f0, f0, f1
    lwz r12, 0xc(r12)
    fdivs f31, f31, f0
    mtctr r12
    bctrl
    xoris r0, r3, 0x8000
    stw r0, 0x14(r1)
    lfd f1, lbl_80764610@l(r30)
    stw r31, 0x10(r1)
    lfd f0, 0x10(r1)
    stfs f31, 0x28(r29)
    fsubs f0, f0, f1
    fdivs f0, f30, f0
    stfs f0, 0x24(r29)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_805D9280(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r3, 0x48(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80764610@ha
    stw r3, 0xc(r1)
    lfd f2, lbl_80764610@l(r4)
    stw r0, 0x8(r1)
    lfs f0, 0x24(r31)
    lfd f1, 0x8(r1)
    lwz r31, 0x1c(r1)
    fsubs f1, f1, f2
    lwz r0, 0x24(r1)
    fmuls f1, f0, f1
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805D92F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r3, 0x48(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80764610@ha
    stw r3, 0xc(r1)
    lfd f2, lbl_80764610@l(r4)
    stw r0, 0x8(r1)
    lfs f0, 0x28(r31)
    lfd f1, 0x8(r1)
    lwz r31, 0x1c(r1)
    fsubs f1, f1, f2
    lwz r0, 0x24(r1)
    fmuls f1, f0, f1
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805D9360(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r3, 0x48(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80764610@ha
    stw r3, 0xc(r1)
    lfd f2, lbl_80764610@l(r4)
    stw r0, 0x8(r1)
    lfs f0, 0x28(r31)
    lfd f1, 0x8(r1)
    lwz r31, 0x1c(r1)
    fsubs f1, f1, f2
    lwz r0, 0x24(r1)
    fmuls f1, f0, f1
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805D93D0(void)
{
    nofralloc
    lbz r3, 0x43(r3)
    blr
}

asm void fn_805D93E0(void)
{
    nofralloc
    lfs f1, 0x44(r3)
    blr
}

asm void fn_805D93F0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    mr r5, r4
    stw r0, 0x54(r1)
    lis r0, 0x4330
    addi r4, r1, 0x8
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r3, 0x48(r3)
    stw r0, 0x20(r1)
    lwz r12, 0x0(r3)
    stw r0, 0x28(r1)
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    lbz r0, 0x43(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805D93F0_00000630
    lbz r4, 0xe(r1)
    lis r5, lbl_80764610@ha
    lbz r0, 0xc(r1)
    lis r3, lbl_80764618@ha
    extsb r4, r4
    lfd f4, lbl_80764610@l(r5)
    xoris r4, r4, 0x8000
    stw r4, 0x24(r1)
    extsb r0, r0
    lfs f3, 0x24(r31)
    lfd f0, 0x20(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    fsubs f2, f0, f4
    lfs f31, 0x44(r31)
    lfd f0, 0x28(r1)
    lfs f1, lbl_80764618@l(r3)
    fmuls f2, f2, f3
    fsubs f0, f0, f4
    fsubs f2, f31, f2
    fmuls f0, f0, f3
    fmuls f1, f2, f1
    fadds f1, f1, f0
    b lbl_fn_805D93F0_00000674
lbl_fn_805D93F0_00000630:
    lbz r4, 0xe(r1)
    lis r3, lbl_80764610@ha
    lbz r0, 0xc(r1)
    extsb r4, r4
    lfd f3, lbl_80764610@l(r3)
    extsb r0, r0
    lfs f1, 0x24(r31)
    xoris r3, r4, 0x8000
    stw r3, 0x24(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lfd f2, 0x20(r1)
    lfd f0, 0x28(r1)
    fsubs f2, f2, f3
    fsubs f0, f0, f3
    fmuls f31, f2, f1
    fmuls f1, f0, f1
lbl_fn_805D93F0_00000674:
    lfs f0, 0x2c(r31)
    mr r3, r31
    lfs f2, 0x30(r31)
    addi r4, r1, 0x8
    fadds f1, f0, f1
    lfs f3, 0x34(r31)
    bl fn_805D95A0
    lfs f0, 0x2c(r31)
    fmr f1, f31
    fadds f0, f0, f31
    stfs f0, 0x2c(r31)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_805D9530(void)
{
    nofralloc
    stfs f1, 0x2c(r3)
    stfs f2, 0x30(r3)
    blr
}

asm void fn_805D9540(void)
{
    nofralloc
    stfs f1, 0x2c(r3)
    blr
}

asm void fn_805D9550(void)
{
    nofralloc
    stfs f1, 0x30(r3)
    blr
}

asm void fn_805D9560(void)
{
    nofralloc
    lfs f0, 0x2c(r3)
    fadds f0, f0, f1
    stfs f0, 0x2c(r3)
    blr
}

asm void fn_805D9570(void)
{
    nofralloc
    lfs f0, 0x30(r3)
    fadds f0, f0, f1
    stfs f0, 0x30(r3)
    blr
}

asm void fn_805D9580(void)
{
    nofralloc
    lfs f1, 0x2c(r3)
    blr
}

asm void fn_805D9590(void)
{
    nofralloc
    lfs f1, 0x30(r3)
    blr
}

asm void fn_805D95A0(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0x70
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stfd f29, 0x90(r1)
    psq_st f29, 0x98(r1), 0, 0
    stfd f28, 0x80(r1)
    psq_st f28, 0x88(r1), 0, 0
    stfd f27, 0x70(r1)
    psq_st f27, 0x78(r1), 0, 0
    bl _savegpr_24
    lbz r25, 0x5(r4)
    lis r31, 0x4330
    lhz r6, 0x10(r4)
    li r11, 0x0
    lbz r24, 0x7(r4)
    lis r26, lbl_80764620@ha
    add r0, r6, r25
    lhz r8, 0x12(r4)
    lhz r5, 0xc(r4)
    slwi r6, r6, 15
    add r7, r8, r24
    slwi r8, r8, 15
    divwu r30, r6, r5
    lhz r6, 0xe(r4)
    slwi r27, r0, 15
    lwz r0, 0x0(r4)
    slwi r12, r7, 15
    lwz r10, 0x38(r3)
    divwu r29, r8, r6
    lis r8, lbl_807CA228@ha
    lwz r7, lbl_807CA228@l(r8)
    fmr f29, f3
    lwz r9, 0x3c(r3)
    fmr f27, f1
    divwu r28, r27, r5
    cmpw r11, r7
    stw r25, 0x3c(r1)
    fmr f28, f2
    lfd f5, lbl_80764620@l(r26)
    mr r27, r3
    stw r31, 0x38(r1)
    divwu r7, r12, r6
    lfd f0, 0x38(r1)
    stw r31, 0x40(r1)
    clrlwi r31, r30, 16
    fsubs f3, f0, f5
    lfs f0, 0x24(r3)
    fmuls f4, f3, f0
    stw r24, 0x44(r1)
    clrlwi r30, r29, 16
    clrlwi r29, r28, 16
    lfd f3, 0x40(r1)
    clrlwi r28, r7, 16
    fadds f31, f1, f4
    lfs f0, 0x28(r3)
    fsubs f1, f3, f5
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    fmuls f0, f1, f0
    stw r10, 0x10(r1)
    fadds f30, f2, f0
    stw r9, 0x14(r1)
    bne lbl_fn_805D95A0_00000868
    addi r7, r8, lbl_807CA228@l
    lwz r3, 0x4(r7)
    cmplw r0, r3
    bne lbl_fn_805D95A0_00000868
    lwz r3, 0x8(r7)
    cmpw r10, r3
    bne lbl_fn_805D95A0_00000868
    lwz r3, 0xc(r7)
    cmpw r9, r3
    beq lbl_fn_805D95A0_0000086C
lbl_fn_805D95A0_00000868:
    li r11, 0x1
lbl_fn_805D95A0_0000086C:
    cmpwi r11, 0x0
    beq lbl_fn_805D95A0_000008F0
    lwz r7, 0x8(r4)
    mr r4, r0
    addi r3, r1, 0x18
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lis r3, lbl_80764608@ha
    lwz r4, 0x38(r27)
    lfs f1, lbl_80764608@l(r3)
    addi r3, r1, 0x18
    lwz r5, 0x3c(r27)
    li r6, 0x0
    fmr f2, f1
    li r7, 0x0
    fmr f3, f1
    li r8, 0x0
    bl fn_80616250
    addi r3, r1, 0x18
    li r4, 0x0
    bl fn_806165B0
    lis r6, lbl_807CA228@ha
    lwz r7, 0x8(r1)
    addi r4, r6, lbl_807CA228@l
    lwz r5, 0xc(r1)
    lwz r3, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r7, lbl_807CA228@l(r6)
    stw r5, 0x4(r4)
    stw r3, 0x8(r4)
    stw r0, 0xc(r4)
lbl_fn_805D95A0_000008F0:
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl fn_80614790
    lis r3, 0xcc01
    stfs f27, -0x8000(r3)
    stfs f28, -0x8000(r3)
    stfs f29, -0x8000(r3)
    lwz r0, 0x8(r27)
    stw r0, -0x8000(r3)
    sth r31, -0x8000(r3)
    sth r30, -0x8000(r3)
    stfs f31, -0x8000(r3)
    stfs f28, -0x8000(r3)
    stfs f29, -0x8000(r3)
    lwz r0, 0xc(r27)
    stw r0, -0x8000(r3)
    sth r29, -0x8000(r3)
    sth r30, -0x8000(r3)
    stfs f31, -0x8000(r3)
    stfs f30, -0x8000(r3)
    stfs f29, -0x8000(r3)
    lwz r0, 0x14(r27)
    stw r0, -0x8000(r3)
    sth r29, -0x8000(r3)
    sth r28, -0x8000(r3)
    stfs f27, -0x8000(r3)
    stfs f30, -0x8000(r3)
    stfs f29, -0x8000(r3)
    lwz r0, 0x10(r27)
    stw r0, -0x8000(r3)
    sth r31, -0x8000(r3)
    sth r28, -0x8000(r3)
    addi r11, r1, 0x70
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    psq_l f29, 0x98(r1), 0, 0
    lfd f29, 0x90(r1)
    psq_l f28, 0x88(r1), 0, 0
    lfd f28, 0x80(r1)
    psq_l f27, 0x78(r1), 0, 0
    lfd f27, 0x70(r1)
    bl _restgpr_24
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_805D9830(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_807CA220@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    lbz r0, lbl_807CA220@l(r5)
    extsb. r0, r0
    bne lbl_fn_805D9830_00000A00
    lis r3, lbl_807CA224@ha
    li r4, 0x0
    li r0, 0x1
    stw r4, lbl_807CA224@l(r3)
    stb r0, lbl_807CA220@l(r5)
lbl_fn_805D9830_00000A00:
    lis r3, lbl_80764608@ha
    lis r4, lbl_807CA224@ha
    lfs f1, lbl_80764608@l(r3)
    li r3, 0x0
    lwz r0, lbl_807CA224@l(r4)
    addi r4, r1, 0x8
    fmr f2, f1
    stw r0, 0x8(r1)
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
    li r3, 0x2
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617220
    li r3, 0x1
    bl fn_80617220
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    lwz r0, 0x0(r30)
    addi r4, r1, 0x10
    stw r0, 0x10(r1)
    li r3, 0x1
    bl fn_80617520
    lwz r0, 0x0(r31)
    addi r4, r1, 0xc
    stw r0, 0xc(r1)
    li r3, 0x2
    bl fn_80617520
    li r3, 0x0
    li r4, 0x2
    li r5, 0x4
    li r6, 0x8
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x2
    li r6, 0x4
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
    li r3, 0x1
    li r4, 0xff
    li r5, 0xff
    li r6, 0x4
    bl fn_80617880
    li r3, 0x1
    li r4, 0xf
    li r5, 0x0
    li r6, 0xa
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x1
    li r4, 0x7
    li r5, 0x0
    li r6, 0x5
    li r7, 0x7
    bl fn_80617420
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x1
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
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805D9B30(void)
{
    nofralloc
    cmpwi r4, 0x0
    lis r5, lbl_8079A4D8@ha
    addi r5, r5, lbl_8079A4D8@l
    beq lbl_fn_805D9B30_00000CE4
    cmpwi r4, 0x1
    beq lbl_fn_805D9B30_00000D04
    cmpwi r4, 0x2
    beq lbl_fn_805D9B30_00000D24
    b lbl_fn_805D9B30_00000D44
lbl_fn_805D9B30_00000CE4:
    addi r4, r5, 0x0
    lwz r5, 0x0(r5)
    lwz r0, 0x4(r4)
    stw r0, 0x8(r3)
    stw r5, 0x4(r3)
    lwz r0, 0x8(r4)
    stw r0, 0xc(r3)
    blr
lbl_fn_805D9B30_00000D04:
    addi r4, r5, 0xc
    lwz r5, 0xc(r5)
    lwz r0, 0x4(r4)
    stw r0, 0x8(r3)
    stw r5, 0x4(r3)
    lwz r0, 0x8(r4)
    stw r0, 0xc(r3)
    blr
lbl_fn_805D9B30_00000D24:
    addi r4, r5, 0x18
    lwz r5, 0x18(r5)
    lwz r0, 0x4(r4)
    stw r0, 0x8(r3)
    stw r5, 0x4(r3)
    lwz r0, 0x8(r4)
    stw r0, 0xc(r3)
    blr
lbl_fn_805D9B30_00000D44:
    addi r4, r5, 0x24
    lwz r5, 0x24(r5)
    lwz r0, 0x4(r4)
    stw r0, 0x8(r3)
    stw r5, 0x4(r3)
    lwz r0, 0x8(r4)
    stw r0, 0xc(r3)
    blr
}

asm void fn_805D9BE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_805D9BE0_00000DDC
    lwz r7, 0x4(r3)
    addi r6, r3, 0x4
    li r0, 0x0
    b lbl_fn_805D9BE0_00000DC4
lbl_fn_805D9BE0_00000D9C:
    lwz r8, 0x0(r7)
    lwz r5, 0x4(r7)
    stw r5, 0x4(r8)
    stw r8, 0x0(r5)
    lwz r5, 0x0(r3)
    subi r5, r5, 0x1
    stw r5, 0x0(r3)
    stw r0, 0x0(r7)
    stw r0, 0x4(r7)
    mr r7, r8
lbl_fn_805D9BE0_00000DC4:
    cmplw r7, r6
    bne lbl_fn_805D9BE0_00000D9C
    cmpwi r4, 0x0
    ble lbl_fn_805D9BE0_00000DDC
    mr r3, r31
    bl dtor_80084684
lbl_fn_805D9BE0_00000DDC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805D9C70(void)
{
    nofralloc
    lwz r6, 0x0(r4)
    li r0, 0x0
    lwz r5, 0x0(r6)
    b lbl_fn_805D9C70_00000E38
lbl_fn_805D9C70_00000E10:
    lwz r7, 0x0(r6)
    lwz r4, 0x4(r6)
    stw r4, 0x4(r7)
    stw r7, 0x0(r4)
    lwz r4, 0x0(r3)
    subi r4, r4, 0x1
    stw r4, 0x0(r3)
    stw r0, 0x0(r6)
    stw r0, 0x4(r6)
    mr r6, r7
lbl_fn_805D9C70_00000E38:
    cmplw r6, r5
    bne lbl_fn_805D9C70_00000E10
    mr r3, r5
    blr
}

asm void fn_805D9CC0(void)
{
    nofralloc
    lwz r4, 0x0(r4)
    lwz r6, 0x4(r4)
    stw r6, 0x4(r5)
    stw r4, 0x0(r5)
    stw r5, 0x4(r4)
    stw r5, 0x0(r6)
    lwz r4, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
    mr r3, r5
    blr
}

asm void fn_805D9CF0(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    sth r0, 0x8(r3)
    sth r4, 0xa(r3)
    blr
}

asm void fn_805D9D10(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805D9D10_00000ED8
    lhz r5, 0xa(r3)
    li r0, 0x0
    add r5, r4, r5
    stw r0, 0x4(r5)
    stw r0, 0x0(r5)
    lhz r5, 0x8(r3)
    stw r4, 0x0(r3)
    addi r0, r5, 0x1
    stw r4, 0x4(r3)
    sth r0, 0x8(r3)
    blr
lbl_fn_805D9D10_00000ED8:
    lhz r6, 0xa(r3)
    li r0, 0x0
    lwz r5, 0x4(r3)
    stwux r5, r6, r4
    stw r0, 0x4(r6)
    lwz r5, 0x4(r3)
    lhz r0, 0xa(r3)
    add r5, r5, r0
    stw r4, 0x4(r5)
    lhz r5, 0x8(r3)
    stw r4, 0x4(r3)
    addi r0, r5, 0x1
    sth r0, 0x8(r3)
    blr
}

asm void fn_805D9D80(void)
{
    nofralloc
    lhz r0, 0xa(r3)
    add r6, r4, r0
    lwzx r4, r4, r0
    cmpwi r4, 0x0
    bne lbl_fn_805D9D80_00000F30
    lwz r0, 0x4(r6)
    stw r0, 0x0(r3)
    b lbl_fn_805D9D80_00000F3C
lbl_fn_805D9D80_00000F30:
    add r4, r4, r0
    lwz r0, 0x4(r6)
    stw r0, 0x4(r4)
lbl_fn_805D9D80_00000F3C:
    lwz r5, 0x4(r6)
    cmpwi r5, 0x0
    bne lbl_fn_805D9D80_00000F54
    lwz r0, 0x0(r6)
    stw r0, 0x4(r3)
    b lbl_fn_805D9D80_00000F60
lbl_fn_805D9D80_00000F54:
    lhz r0, 0xa(r3)
    lwz r4, 0x0(r6)
    stwx r4, r5, r0
lbl_fn_805D9D80_00000F60:
    li r0, 0x0
    stw r0, 0x0(r6)
    stw r0, 0x4(r6)
    lhz r4, 0x8(r3)
    subi r0, r4, 0x1
    sth r0, 0x8(r3)
    blr
}

asm void fn_805D9DF0(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_805D9DF0_00000F90
    lwz r3, 0x0(r3)
    blr
lbl_fn_805D9DF0_00000F90:
    lhz r0, 0xa(r3)
    add r3, r4, r0
    lwz r3, 0x4(r3)
    blr
}

asm void fn_805D9E10(void)
{
    nofralloc
    li r6, 0x0
    li r5, 0x0
    b lbl_fn_805D9E10_00000FC4
    nop
lbl_fn_805D9E10_00000FB0:
    cmpw r4, r6
    bne lbl_fn_805D9E10_00000FC0
    mr r3, r5
    blr
lbl_fn_805D9E10_00000FC0:
    addi r6, r6, 0x1
lbl_fn_805D9E10_00000FC4:
    cmpwi r5, 0x0
    beq lbl_fn_805D9E10_00000FDC
    lhz r0, 0xa(r3)
    add r5, r5, r0
    lwz r5, 0x4(r5)
    b lbl_fn_805D9E10_00000FE0
lbl_fn_805D9E10_00000FDC:
    lwz r5, 0x0(r3)
lbl_fn_805D9E10_00000FE0:
    cmpwi r5, 0x0
    bne lbl_fn_805D9E10_00000FB0
    li r3, 0x0
    blr
}

asm void fn_805D9E60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_805DA160
    lis r4, lbl_8079A508@ha
    mr r3, r31
    addi r4, r4, lbl_8079A508@l
    stw r4, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805D9EA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_805D9EA0_0000106C
    li r4, 0x0
    bl fn_805DA1B0
    cmpwi r31, 0x0
    ble lbl_fn_805D9EA0_0000106C
    mr r3, r30
    bl dtor_80084684
lbl_fn_805D9EA0_0000106C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805D9F00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805D9F00_000010C4
    li r3, 0x0
    b lbl_fn_805D9F00_000011C0
lbl_fn_805D9F00_000010C4:
    lwz r3, 0x0(r4)
    subis r0, r3, 0x5246
    cmplwi r0, 0x4e55
    bne lbl_fn_805D9F00_00001118
    lhz r0, 0xc(r4)
    lhz r3, 0xe(r4)
    add r4, r4, r0
    mtctr r3
    cmpwi r3, 0x0
    ble lbl_fn_805D9F00_00001180
    nop
lbl_fn_805D9F00_000010F0:
    lwz r3, 0x0(r4)
    subis r0, r3, 0x4649
    cmplwi r0, 0x4e46
    bne lbl_fn_805D9F00_00001108
    addi r5, r4, 0x8
    b lbl_fn_805D9F00_00001180
lbl_fn_805D9F00_00001108:
    lwz r0, 0x4(r4)
    add r4, r4, r0
    bdnz lbl_fn_805D9F00_000010F0
    b lbl_fn_805D9F00_00001180
lbl_fn_805D9F00_00001118:
    lhz r0, 0x6(r4)
    cmplwi r0, 0x104
    bne lbl_fn_805D9F00_0000114C
    lis r4, 0x5246
    mr r3, r31
    addi r4, r4, 0x4e54
    li r5, 0x104
    li r6, 0x2
    bl fn_805D7F90
    cmpwi r3, 0x0
    bne lbl_fn_805D9F00_00001174
    li r3, 0x0
    b lbl_fn_805D9F00_000011C0
lbl_fn_805D9F00_0000114C:
    lis r4, 0x5246
    mr r3, r31
    addi r4, r4, 0x4e54
    li r5, 0x102
    li r6, 0x2
    bl fn_805D7F90
    cmpwi r3, 0x0
    bne lbl_fn_805D9F00_00001174
    li r3, 0x0
    b lbl_fn_805D9F00_000011C0
lbl_fn_805D9F00_00001174:
    mr r3, r31
    bl fn_805DA050
    mr r5, r3
lbl_fn_805D9F00_00001180:
    cmpwi r5, 0x0
    bne lbl_fn_805D9F00_00001190
    li r3, 0x0
    b lbl_fn_805D9F00_000011C0
lbl_fn_805D9F00_00001190:
    mr r3, r30
    mr r4, r31
    bl fn_805DA1F0
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r30
    bl fn_805D9B30
    li r3, 0x1
lbl_fn_805D9F00_000011C0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805DA050(void)
{
    nofralloc
    lhz r0, 0xc(r3)
    li r6, 0x0
    li r7, 0x0
    add r5, r3, r0
    b lbl_fn_805DA050_000012CC
    nop
lbl_fn_805DA050_000011F8:
    lwz r4, 0x0(r5)
    subis r0, r4, 0x4649
    cmplwi r0, 0x4e46
    beq lbl_fn_805DA050_0000123C
    subis r0, r4, 0x5447
    cmplwi r0, 0x4c50
    beq lbl_fn_805DA050_00001278
    subis r0, r4, 0x4357
    cmplwi r0, 0x4448
    beq lbl_fn_805DA050_00001288
    subis r0, r4, 0x434d
    cmplwi r0, 0x4150
    beq lbl_fn_805DA050_000012A0
    subis r0, r4, 0x474c
    cmplwi r0, 0x4752
    beq lbl_fn_805DA050_000012C0
    b lbl_fn_805DA050_000012B8
lbl_fn_805DA050_0000123C:
    lwz r0, 0x10(r5)
    addi r6, r5, 0x8
    add r0, r3, r0
    stw r0, 0x10(r5)
    lwz r0, 0x14(r5)
    cmpwi r0, 0x0
    beq lbl_fn_805DA050_00001260
    add r0, r3, r0
    stw r0, 0xc(r6)
lbl_fn_805DA050_00001260:
    lwz r0, 0x10(r6)
    cmpwi r0, 0x0
    beq lbl_fn_805DA050_000012C0
    add r0, r3, r0
    stw r0, 0x10(r6)
    b lbl_fn_805DA050_000012C0
lbl_fn_805DA050_00001278:
    lwz r0, 0x1c(r5)
    add r0, r3, r0
    stw r0, 0x1c(r5)
    b lbl_fn_805DA050_000012C0
lbl_fn_805DA050_00001288:
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    beq lbl_fn_805DA050_000012C0
    add r0, r3, r0
    stw r0, 0xc(r5)
    b lbl_fn_805DA050_000012C0
lbl_fn_805DA050_000012A0:
    lwz r0, 0x10(r5)
    cmpwi r0, 0x0
    beq lbl_fn_805DA050_000012C0
    add r0, r3, r0
    stw r0, 0x10(r5)
    b lbl_fn_805DA050_000012C0
lbl_fn_805DA050_000012B8:
    li r3, 0x0
    blr
lbl_fn_805DA050_000012C0:
    lwz r0, 0x4(r5)
    addi r7, r7, 0x1
    add r5, r5, r0
lbl_fn_805DA050_000012CC:
    lhz r0, 0xe(r3)
    cmpw r7, r0
    blt lbl_fn_805DA050_000011F8
    lis r4, 0x5246
    addi r0, r4, 0x4e55
    stw r0, 0x0(r3)
    mr r3, r6
    blr
}

asm void fn_805DA160(void)
{
    nofralloc
    lis r4, lbl_8079A650@ha
    lis r7, lbl_8079A5E8@ha
    addi r4, r4, lbl_8079A650@l
    stw r4, 0x0(r3)
    lis r4, lbl_8079A5F8@ha
    li r0, 0x0
    lwzu r6, lbl_8079A5E8@l(r7)
    addi r4, r4, lbl_8079A5F8@l
    lwz r5, 0x4(r7)
    stw r5, 0x8(r3)
    stw r6, 0x4(r3)
    lwz r5, 0x8(r7)
    stw r5, 0xc(r3)
    stw r4, 0x0(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    blr
}

asm void fn_805DA1B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_805DA1B0_00001368
    cmpwi r4, 0x0
    ble lbl_fn_805DA1B0_00001368
    bl dtor_80084684
lbl_fn_805DA1B0_00001368:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805DA1F0(void)
{
    nofralloc
    stw r4, 0x10(r3)
    stw r5, 0x14(r3)
    blr
}

asm void fn_805DA200(void)
{
    nofralloc
    lwz r3, 0x14(r3)
    lbz r3, 0x15(r3)
    blr
}

asm void fn_805DA210(void)
{
    nofralloc
    lwz r3, 0x14(r3)
    lbz r3, 0x14(r3)
    blr
}

asm void fn_805DA220(void)
{
    nofralloc
    lwz r3, 0x14(r3)
    lbz r3, 0x16(r3)
    blr
}

asm void fn_805DA230(void)
{
    nofralloc
    lwz r4, 0x14(r3)
    lbz r3, 0x16(r4)
    lbz r0, 0x14(r4)
    subf r3, r3, r0
    blr
}

asm void fn_805DA250(void)
{
    nofralloc
    lwz r3, 0x14(r3)
    lwz r3, 0x8(r3)
    lbz r3, 0x2(r3)
    extsb r3, r3
    blr
}

asm void fn_805DA270(void)
{
    nofralloc
    lwz r3, 0x14(r3)
    lwz r3, 0x8(r3)
    lbz r3, 0x1(r3)
    blr
}

asm void fn_805DA280(void)
{
    nofralloc
    lwz r3, 0x14(r3)
    lwz r3, 0x8(r3)
    lbz r3, 0x0(r3)
    blr
}

asm void fn_805DA290(void)
{
    nofralloc
    lwz r3, 0x14(r3)
    lwz r3, 0x8(r3)
    lbz r3, 0x3(r3)
    blr
}

asm void fn_805DA2A0(void)
{
    nofralloc
    li r3, 0x2
    blr
}

asm void fn_805DA2B0(void)
{
    nofralloc
    lwz r3, 0x14(r3)
    lwz r3, 0x8(r3)
    lhz r3, 0xa(r3)
    blr
}

asm void fn_805DA2C0(void)
{
    nofralloc
    lwz r3, 0x14(r3)
    lbz r3, 0x1(r3)
    extsb r3, r3
    blr
}

asm void fn_805DA2D0(void)
{
    nofralloc
    lwz r4, 0x14(r3)
    lhz r0, 0x4(r4)
    slwi r3, r0, 16
    lbz r0, 0x6(r4)
    rlwimi r3, r0, 8, 16, 23
    blr
}

asm void fn_805DA2F0(void)
{
    nofralloc
    lwz r3, 0x14(r3)
    lbz r0, 0x0(r4)
    stb r0, 0x4(r3)
    lbz r0, 0x1(r4)
    stb r0, 0x5(r3)
    lbz r0, 0x2(r4)
    stb r0, 0x6(r3)
    blr
}

asm void fn_805DA310(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r5, r4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r6, 0x14(r3)
    lwz r6, 0x10(r6)
    b lbl_fn_805DA310_000014F8
    nop
lbl_fn_805DA310_000014C8:
    lhz r0, 0x0(r6)
    cmplw r0, r4
    bgt lbl_fn_805DA310_000014F4
    lhz r0, 0x2(r6)
    cmplw r4, r0
    bgt lbl_fn_805DA310_000014F4
    mr r3, r31
    mr r4, r6
    bl fn_805DA5D0
    mr r5, r3
    b lbl_fn_805DA310_00001508
lbl_fn_805DA310_000014F4:
    lwz r6, 0x8(r6)
lbl_fn_805DA310_000014F8:
    cmpwi r6, 0x0
    bne lbl_fn_805DA310_000014C8
    lis r3, 0x1
    subi r5, r3, 0x1
lbl_fn_805DA310_00001508:
    clrlwi r0, r5, 16
    cmplwi r0, 0xffff
    beq lbl_fn_805DA310_00001524
    lwz r4, 0x14(r31)
    li r3, 0x1
    sth r5, 0x2(r4)
    b lbl_fn_805DA310_00001528
lbl_fn_805DA310_00001524:
    li r3, 0x0
lbl_fn_805DA310_00001528:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805DA3B0(void)
{
    nofralloc
    lwz r3, 0x14(r3)
    stb r4, 0x1(r3)
    blr
}

asm void fn_805DA3C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
    srwi r0, r3, 16
    sth r0, 0x8(r1)
    extrwi r0, r3, 8, 16
    mr r3, r0
    stb r0, 0xa(r1)
    lwz r0, 0x14(r1)
    extsb r3, r3
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805DA410(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r5, r4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r6, 0x14(r3)
    lwz r6, 0x10(r6)
    b lbl_fn_805DA410_000015F4
    nop
lbl_fn_805DA410_000015C8:
    lhz r0, 0x0(r6)
    cmplw r0, r4
    bgt lbl_fn_805DA410_000015F0
    lhz r0, 0x2(r6)
    cmplw r4, r0
    bgt lbl_fn_805DA410_000015F0
    mr r3, r31
    mr r4, r6
    bl fn_805DA5D0
    b lbl_fn_805DA410_00001604
lbl_fn_805DA410_000015F0:
    lwz r6, 0x8(r6)
lbl_fn_805DA410_000015F4:
    cmpwi r6, 0x0
    bne lbl_fn_805DA410_000015C8
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_fn_805DA410_00001604:
    clrlwi r0, r3, 16
    cmplwi r0, 0xffff
    beq lbl_fn_805DA410_00001614
    b lbl_fn_805DA410_0000161C
lbl_fn_805DA410_00001614:
    lwz r3, 0x14(r31)
    lhz r3, 0x2(r3)
lbl_fn_805DA410_0000161C:
    lwz r6, 0x14(r31)
    clrlwi r3, r3, 16
    lwz r4, 0xc(r6)
    b lbl_fn_805DA410_00001664
    nop
lbl_fn_805DA410_00001630:
    lhz r5, 0x0(r4)
    cmplw r5, r3
    bgt lbl_fn_805DA410_00001660
    lhz r0, 0x2(r4)
    cmplw r3, r0
    bgt lbl_fn_805DA410_00001660
    subf r3, r5, r3
    slwi r0, r3, 2
    subf r0, r3, r0
    add r3, r4, r0
    addi r4, r3, 0x8
    b lbl_fn_805DA410_00001670
lbl_fn_805DA410_00001660:
    lwz r4, 0x4(r4)
lbl_fn_805DA410_00001664:
    cmpwi r4, 0x0
    bne lbl_fn_805DA410_00001630
    addi r4, r6, 0x4
lbl_fn_805DA410_00001670:
    lhz r0, 0x0(r4)
    lwz r31, 0xc(r1)
    slwi r3, r0, 16
    lbz r0, 0x2(r4)
    rlwimi r3, r0, 8, 16, 23
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805DA510(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r6, 0x14(r3)
    lwz r4, 0x10(r6)
    b lbl_fn_805DA510_000016F4
lbl_fn_805DA510_000016C8:
    lhz r0, 0x0(r4)
    cmplw r0, r5
    bgt lbl_fn_805DA510_000016F0
    lhz r0, 0x2(r4)
    cmplw r5, r0
    bgt lbl_fn_805DA510_000016F0
    mr r3, r30
    bl fn_805DA5D0
    mr r5, r3
    b lbl_fn_805DA510_00001704
lbl_fn_805DA510_000016F0:
    lwz r4, 0x8(r4)
lbl_fn_805DA510_000016F4:
    cmpwi r4, 0x0
    bne lbl_fn_805DA510_000016C8
    lis r3, 0x1
    subi r5, r3, 0x1
lbl_fn_805DA510_00001704:
    clrlwi r0, r5, 16
    mr r3, r30
    cmplwi r0, 0xffff
    mr r4, r31
    beq lbl_fn_805DA510_0000171C
    b lbl_fn_805DA510_00001724
lbl_fn_805DA510_0000171C:
    lwz r5, 0x14(r30)
    lhz r5, 0x2(r5)
lbl_fn_805DA510_00001724:
    clrlwi r5, r5, 16
    bl fn_805DA6A0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805DA5C0(void)
{
    nofralloc
    lwz r3, 0x14(r3)
    lbz r3, 0x7(r3)
    blr
}

asm void fn_805DA5D0(void)
{
    nofralloc
    lhz r0, 0x4(r4)
    lis r3, 0x1
    subi r3, r3, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_805DA5D0_00001788
    cmpwi r0, 0x1
    beq lbl_fn_805DA5D0_000017A0
    cmpwi r0, 0x2
    beq lbl_fn_805DA5D0_000017B8
    blr
lbl_fn_805DA5D0_00001788:
    lhz r0, 0x0(r4)
    lhz r3, 0xc(r4)
    subf r0, r0, r5
    add r0, r3, r0
    clrlwi r3, r0, 16
    blr
lbl_fn_805DA5D0_000017A0:
    lhz r0, 0x0(r4)
    subf r0, r0, r5
    slwi r0, r0, 1
    add r3, r4, r0
    lhz r3, 0xc(r3)
    blr
lbl_fn_805DA5D0_000017B8:
    addi r6, r4, 0xc
    lhz r4, 0xc(r4)
    addi r7, r6, 0x2
    subi r0, r4, 0x1
    slwi r0, r0, 2
    add r4, r6, r0
    addi r6, r4, 0x2
    b lbl_fn_805DA5D0_00001820
lbl_fn_805DA5D0_000017D8:
    subf r0, r7, r6
    srawi r0, r0, 2
    addze r4, r0
    srwi r0, r4, 31
    add r0, r0, r4
    extlwi r0, r0, 30, 1
    add r4, r7, r0
    lhzx r0, r7, r0
    cmplw r0, r5
    bge lbl_fn_805DA5D0_00001808
    addi r7, r4, 0x4
    b lbl_fn_805DA5D0_00001820
lbl_fn_805DA5D0_00001808:
    cmplw r5, r0
    bge lbl_fn_805DA5D0_00001818
    subi r6, r4, 0x4
    b lbl_fn_805DA5D0_00001820
lbl_fn_805DA5D0_00001818:
    lhz r3, 0x2(r4)
    blr
lbl_fn_805DA5D0_00001820:
    cmplw r7, r6
    ble lbl_fn_805DA5D0_000017D8
    blr
}

asm void fn_805DA6A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lwz r12, 0x14(r3)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r3, 0x8(r12)
    lhz r31, 0xc(r3)
    lhz r0, 0xe(r3)
    lbz r7, 0x0(r3)
    mullw r9, r31, r0
    lwz r0, 0x4(r3)
    lbz r6, 0x1(r3)
    addi r8, r7, 0x1
    addi r7, r6, 0x1
    lwz r6, 0x14(r3)
    divwu r11, r5, r9
    mullw r9, r11, r9
    subf r30, r9, r5
    divwu r10, r30, r31
    mullw r9, r10, r31
    mullw r0, r11, r0
    subf r9, r9, r30
    mullw r8, r9, r8
    add r0, r6, r0
    stw r0, 0x0(r4)
    lwz r6, 0xc(r12)
    mullw r9, r10, r7
    b lbl_fn_805DA6A0_000018D4
    nop
lbl_fn_805DA6A0_000018A0:
    lhz r7, 0x0(r6)
    cmplw r7, r5
    bgt lbl_fn_805DA6A0_000018D0
    lhz r0, 0x2(r6)
    cmplw r5, r0
    bgt lbl_fn_805DA6A0_000018D0
    subf r5, r7, r5
    slwi r0, r5, 2
    subf r0, r5, r0
    add r5, r6, r0
    addi r7, r5, 0x8
    b lbl_fn_805DA6A0_000018E0
lbl_fn_805DA6A0_000018D0:
    lwz r6, 0x4(r6)
lbl_fn_805DA6A0_000018D4:
    cmpwi r6, 0x0
    bne lbl_fn_805DA6A0_000018A0
    addi r7, r12, 0x4
lbl_fn_805DA6A0_000018E0:
    lbz r0, 0x0(r7)
    addi r5, r8, 0x1
    stb r0, 0x4(r4)
    addi r0, r9, 0x1
    lbz r6, 0x1(r7)
    stb r6, 0x5(r4)
    lbz r6, 0x2(r7)
    stb r6, 0x6(r4)
    lbz r6, 0x1(r3)
    stb r6, 0x7(r4)
    lhz r6, 0xa(r3)
    stw r6, 0x8(r4)
    lhz r6, 0x10(r3)
    sth r6, 0xc(r4)
    lhz r3, 0x12(r3)
    sth r3, 0xe(r4)
    sth r5, 0x10(r4)
    sth r0, 0x12(r4)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    addi r1, r1, 0x10
    blr
}

asm void fn_805DA7B0(void)
{
    nofralloc
    lis r4, lbl_8079A6F0@ha
    addi r4, r4, lbl_8079A6F0@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_805DA7C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_805DA7C0_00001978
    cmpwi r4, 0x0
    ble lbl_fn_805DA7C0_00001978
    bl dtor_80084684
lbl_fn_805DA7C0_00001978:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805DA800(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r4, 0xa
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r5
    beq lbl_fn_805DA800_000019D0
    cmpwi r4, 0x9
    beq lbl_fn_805DA800_00001A04
    b lbl_fn_805DA800_00001ABC
lbl_fn_805DA800_000019D0:
    lwz r31, 0x0(r5)
    lfs f30, 0x8(r5)
    mr r3, r31
    bl fn_805DB3D0
    fmr f31, f1
    mr r3, r31
    bl fn_805D9590
    fadds f2, f1, f31
    mr r3, r31
    fmr f1, f30
    bl fn_805D9530
    li r3, 0x3
    b lbl_fn_805DA800_00001AC0
lbl_fn_805DA800_00001A04:
    lwz r30, 0x0(r5)
    mr r3, r30
    bl fn_805DB4B0
    cmpwi r3, 0x0
    mr r31, r3
    ble lbl_fn_805DA800_00001AB4
    mr r3, r30
    bl fn_805D93D0
    cmpwi r3, 0x0
    beq lbl_fn_805DA800_00001A3C
    mr r3, r30
    bl fn_805D93E0
    fmr f31, f1
    b lbl_fn_805DA800_00001A48
lbl_fn_805DA800_00001A3C:
    mr r3, r30
    bl fn_805D9280
    fmr f31, f1
lbl_fn_805DA800_00001A48:
    mr r3, r30
    bl fn_805D9580
    lis r0, 0x4330
    xoris r3, r31, 0x8000
    stw r3, 0xc(r1)
    lis r4, lbl_80764628@ha
    lfd f2, lbl_80764628@l(r4)
    mr r3, r30
    stw r0, 0x8(r1)
    lfs f3, 0x8(r29)
    lfd f0, 0x8(r1)
    fsubs f4, f1, f3
    stw r0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f1, f0, f31
    fdivs f0, f4, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r4, 0x14(r1)
    addi r0, r4, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fadds f1, f3, f0
    bl fn_805D9540
lbl_fn_805DA800_00001AB4:
    li r3, 0x1
    b lbl_fn_805DA800_00001AC0
lbl_fn_805DA800_00001ABC:
    li r3, 0x0
lbl_fn_805DA800_00001AC0:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
