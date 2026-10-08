#include "revolution/types.h"

/* External functions */
extern void fn_8068AD58(void);
extern void fn_8068A850(void);
extern void fn_8068AE24(void);
extern void fn_805F98D0(void);
extern void fn_805F99B0(void);

/* External constants */
extern f32 lbl_80888550;
extern f32 lbl_80888554;
extern f32 lbl_80888558;
extern f32 lbl_8088855C;
extern f32 lbl_80888560;
extern f32 lbl_80888564;
extern f32 lbl_80888568;
extern f32 lbl_8088856C;
extern f32 lbl_80888570;
extern f32 lbl_80888574;

/* Forward declarations */
void fn_805F8E70(void);
void fn_805F8EF0(void);
void fn_805F8FA0(void);
void fn_805F9050(void);
void fn_805F90D0(void);
void fn_805F9110(void);
void fn_805F9160(void);
void fn_805F9190(void);
void fn_805F9240(void);
void fn_805F93C0(void);
void fn_805F9420(void);
void fn_805F94B0(void);
void fn_805F95A0(void);

asm void fn_805F8E70(void) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stfd f30, 0x10(r1)
    psq_st f30, 0x18(r1), 0, 0
    fmr f30, f1
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8068AD58
    frsp f31, f1
    fmr f1, f30
    bl fn_8068A850
    frsp f2, f1
    mr r3, r30
    fmr f1, f31
    extsb r4, r31
    bl fn_805F8EF0
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    psq_l f30, 0x18(r1), 0, 0
    lfd f30, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805F8EF0(void) {
    nofralloc
    frsp f5, f1
    ori r0, r4, 0x20
    frsp f4, f2
    cmplwi r0, 0x78
    lfs f0, lbl_80888554
    ps_neg f2, f5
    lfs f1, lbl_80888550
    beq lbl_rot_x
    cmplwi r0, 0x79
    beq lbl_rot_y
    cmplwi r0, 0x7a
    beq lbl_rot_z
    blr
lbl_rot_x:
    ps_merge00 f3, f5, f4
    psq_st f1, 0x0(r3), 1, 0
    ps_merge00 f1, f4, f2
    psq_st f0, 0x4(r3), 0, 0
    psq_st f0, 0xc(r3), 0, 0
    psq_st f0, 0x1c(r3), 0, 0
    psq_st f0, 0x2c(r3), 1, 0
    psq_st f3, 0x24(r3), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    blr
lbl_rot_y:
    ps_merge00 f3, f4, f0
    psq_st f0, 0x18(r3), 0, 0
    ps_merge00 f1, f0, f1
    ps_merge00 f2, f2, f0
    psq_st f3, 0x0(r3), 0, 0
    ps_merge00 f0, f5, f0
    psq_st f3, 0x28(r3), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    psq_st f0, 0x8(r3), 0, 0
    psq_st f2, 0x20(r3), 0, 0
    blr
lbl_rot_z:
    ps_merge00 f3, f5, f4
    psq_st f0, 0x8(r3), 0, 0
    ps_merge00 f2, f4, f2
    ps_merge00 f1, f1, f0
    psq_st f0, 0x18(r3), 0, 0
    psq_st f0, 0x20(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f2, 0x0(r3), 0, 0
    psq_st f1, 0x28(r3), 0, 0
    blr
}

asm void fn_805F8FA0(void) {
    nofralloc
    psq_l f3, 0x0(r4), 0, 0
    frsp f11, f2
    lfs f10, lbl_80888558
    frsp f12, f1
    ps_mul f4, f3, f3
    lfs f2, 0x8(r4)
    fadds f8, f10, f10
    lfs f9, lbl_8088855C
    fsubs f1, f10, f10
    ps_madd f5, f2, f2, f4
    fsubs f0, f8, f11
    ps_merge00 f11, f11, f11
    ps_sum0 f6, f5, f2, f4
    frsqrte f7, f6
    fmuls f4, f7, f7
    fmuls f5, f7, f10
    fnmsubs f4, f4, f6, f9
    fmuls f7, f4, f5
    ps_muls0 f3, f3, f7
    ps_muls0 f2, f2, f7
    ps_muls0 f6, f3, f0
    ps_muls0 f7, f2, f0
    ps_muls0 f10, f3, f12
    ps_muls1 f5, f6, f3
    ps_muls0 f4, f6, f3
    ps_muls0 f6, f6, f2
    fnmsubs f0, f2, f12, f5
    ps_neg f3, f10
    fmadds f8, f2, f12, f5
    ps_sum0 f4, f4, f0, f11
    ps_sum0 f0, f3, f1, f6
    ps_muls0 f7, f7, f2
    psq_st f4, 0x0(r3), 0, 0
    ps_sum0 f9, f6, f1, f10
    ps_sum0 f3, f6, f6, f3
    psq_st f0, 0x18(r3), 0, 0
    ps_sum1 f5, f11, f8, f5
    ps_sum0 f7, f7, f1, f11
    psq_st f9, 0x8(r3), 0, 0
    ps_sum1 f6, f10, f3, f6
    psq_st f5, 0x10(r3), 0, 0
    psq_st f6, 0x20(r3), 0, 0
    psq_st f7, 0x28(r3), 0, 0
    blr
}

asm void fn_805F9050(void) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stfd f30, 0x10(r1)
    psq_st f30, 0x18(r1), 0, 0
    fmr f30, f1
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8068AD58
    frsp f31, f1
    fmr f1, f30
    bl fn_8068A850
    frsp f2, f1
    mr r3, r30
    fmr f1, f31
    mr r4, r31
    bl fn_805F8FA0
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    psq_l f30, 0x18(r1), 0, 0
    lfd f30, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805F90D0(void) {
    nofralloc
    lfs f0, lbl_80888554
    lfs f4, lbl_80888550
    stfs f1, 0xc(r3)
    stfs f2, 0x1c(r3)
    psq_st f0, 0x4(r3), 0, 0
    psq_st f0, 0x20(r3), 0, 0
    stfs f0, 0x10(r3)
    stfs f4, 0x14(r3)
    stfs f0, 0x18(r3)
    stfs f4, 0x28(r3)
    stfs f3, 0x2c(r3)
    stfs f4, 0x0(r3)
    blr
}

asm void fn_805F9110(void) {
    nofralloc
    psq_l f4, 0x0(r3), 0, 0
    frsp f1, f1
    psq_l f5, 0x8(r3), 0, 0
    frsp f2, f2
    psq_l f7, 0x18(r3), 0, 0
    frsp f3, f3
    psq_l f8, 0x28(r3), 0, 0
    psq_st f4, 0x0(r4), 0, 0
    ps_sum1 f5, f1, f5, f5
    psq_l f6, 0x10(r3), 0, 0
    psq_st f5, 0x8(r4), 0, 0
    ps_sum1 f7, f2, f7, f7
    psq_l f9, 0x20(r3), 0, 0
    psq_st f6, 0x10(r4), 0, 0
    ps_sum1 f8, f3, f8, f8
    psq_st f7, 0x18(r4), 0, 0
    psq_st f9, 0x20(r4), 0, 0
    psq_st f8, 0x28(r4), 0, 0
    blr
}

asm void fn_805F9160(void) {
    nofralloc
    lfs f0, lbl_80888554
    stfs f1, 0x0(r3)
    psq_st f0, 0x4(r3), 0, 0
    psq_st f0, 0xc(r3), 0, 0
    stfs f2, 0x14(r3)
    psq_st f0, 0x18(r3), 0, 0
    psq_st f0, 0x20(r3), 0, 0
    stfs f3, 0x28(r3)
    stfs f0, 0x2c(r3)
    blr
}

asm void fn_805F9190(void) {
    nofralloc
    psq_l f4, 0x0(r4), 0, 0
    psq_l f5, 0x8(r4), 0, 0
    ps_mul f6, f4, f4
    lfs f1, lbl_80888550
    ps_merge10 f9, f4, f4
    fsubs f0, f1, f1
    ps_madd f8, f5, f5, f6
    ps_muls1 f10, f5, f5
    psq_st f0, 0xc(r3), 1, 0
    fadds f2, f1, f1
    ps_sum0 f3, f8, f8, f8
    psq_st f0, 0x2c(r3), 1, 0
    ps_mul f7, f5, f5
    ps_madd f12, f4, f9, f10
    fres f13, f3
    ps_nmsub f3, f3, f13, f2
    ps_muls1 f11, f9, f5
    ps_msub f10, f4, f9, f10
    ps_mul f3, f13, f3
    ps_madds0 f9, f4, f5, f11
    ps_sum1 f8, f7, f8, f6
    fmuls f3, f3, f2
    ps_nmsub f11, f11, f2, f9
    ps_sum0 f6, f6, f6, f6
    ps_mul f9, f9, f3
    ps_mul f11, f11, f3
    ps_nmsub f8, f8, f3, f1
    psq_st f9, 0x8(r3), 1, 0
    ps_mul f12, f12, f3
    ps_mul f10, f10, f3
    ps_merge10 f7, f11, f0
    ps_merge00 f5, f12, f8
    ps_merge10 f4, f8, f10
    psq_st f7, 0x18(r3), 0, 0
    ps_merge01 f13, f11, f9
    ps_nmsub f6, f6, f3, f1
    psq_st f5, 0x10(r3), 0, 0
    psq_st f6, 0x28(r3), 1, 0
    psq_st f4, 0x0(r3), 0, 0
    psq_st f13, 0x20(r3), 0, 0
    blr
}

asm void fn_805F9240(void) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lfs f1, 0x0(r4)
    stw r0, 0x44(r1)
    lfs f0, 0x0(r6)
    stw r31, 0x3c(r1)
    mr r31, r5
    fsubs f4, f1, f0
    lfs f3, 0x4(r4)
    stw r30, 0x38(r1)
    mr r30, r4
    lfs f2, 0x4(r6)
    stw r29, 0x34(r1)
    fsubs f2, f3, f2
    lfs f1, 0x8(r4)
    lfs f0, 0x8(r6)
    mr r29, r3
    addi r3, r1, 0x20
    stfs f4, 0x20(r1)
    fsubs f0, f1, f0
    stfs f2, 0x24(r1)
    mr r4, r3
    stfs f0, 0x28(r1)
    bl fn_805F98D0
    mr r3, r31
    addi r4, r1, 0x20
    addi r5, r1, 0x14
    bl fn_805F99B0
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_805F98D0
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    bl fn_805F99B0
    lfs f0, 0x14(r1)
    stfs f0, 0x0(r29)
    lfs f4, 0x0(r30)
    lfs f0, 0x18(r1)
    stfs f0, 0x4(r29)
    lfs f3, 0x4(r30)
    lfs f0, 0x1c(r1)
    stfs f0, 0x8(r29)
    lfs f5, 0x8(r30)
    lfs f1, 0x14(r1)
    lfs f0, 0x18(r1)
    fmuls f1, f4, f1
    lfs f2, 0x1c(r1)
    fmuls f0, f3, f0
    fmuls f2, f5, f2
    fadds f0, f1, f0
    fadds f0, f2, f0
    fneg f0, f0
    stfs f0, 0xc(r29)
    lfs f0, 0x8(r1)
    stfs f0, 0x10(r29)
    lfs f0, 0xc(r1)
    stfs f0, 0x14(r29)
    lfs f0, 0x10(r1)
    stfs f0, 0x18(r29)
    lfs f1, 0x8(r1)
    lfs f0, 0xc(r1)
    lfs f2, 0x10(r1)
    fmuls f1, f4, f1
    fmuls f0, f3, f0
    fmuls f2, f5, f2
    fadds f0, f1, f0
    fadds f0, f2, f0
    fneg f0, f0
    stfs f0, 0x1c(r29)
    lfs f0, 0x20(r1)
    stfs f0, 0x20(r29)
    lfs f0, 0x24(r1)
    stfs f0, 0x24(r29)
    lfs f0, 0x28(r1)
    stfs f0, 0x28(r29)
    lfs f1, 0x20(r1)
    lfs f0, 0x24(r1)
    lfs f2, 0x28(r1)
    fmuls f1, f4, f1
    fmuls f0, f3, f0
    fmuls f2, f5, f2
    fadds f0, f1, f0
    fadds f0, f2, f0
    fneg f0, f0
    stfs f0, 0x2c(r29)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805F93C0(void) {
    nofralloc
    psq_l f0, 0x0(r4), 0, 0
    psq_l f2, 0x0(r3), 0, 0
    psq_l f1, 0x8(r4), 1, 0
    ps_mul f4, f2, f0
    psq_l f3, 0x8(r3), 0, 0
    ps_madd f5, f3, f1, f4
    psq_l f8, 0x10(r3), 0, 0
    ps_sum0 f6, f5, f6, f5
    psq_l f9, 0x18(r3), 0, 0
    ps_mul f10, f8, f0
    psq_st f6, 0x0(r5), 1, 0
    ps_madd f11, f9, f1, f10
    psq_l f2, 0x20(r3), 0, 0
    ps_sum0 f12, f11, f12, f11
    psq_l f3, 0x28(r3), 0, 0
    ps_mul f4, f2, f0
    psq_st f12, 0x4(r5), 1, 0
    ps_madd f5, f3, f1, f4
    ps_sum0 f6, f5, f6, f5
    psq_st f6, 0x8(r5), 1, 0
    blr
}

asm void fn_805F9420(void) {
    nofralloc
    psq_l f13, 0x0(r3), 0, 0
    psq_l f12, 0x10(r3), 0, 0
    subi r6, r6, 0x1
    psq_l f11, 0x8(r3), 0, 0
    ps_merge00 f0, f13, f12
    subi r5, r5, 0x4
    psq_l f10, 0x18(r3), 0, 0
    ps_merge11 f1, f13, f12
    mtctr r6
    psq_l f4, 0x20(r3), 0, 0
    ps_merge00 f2, f11, f10
    psq_l f5, 0x28(r3), 0, 0
    ps_merge11 f3, f11, f10
    psq_l f6, 0x0(r4), 0, 0
    psq_lu f7, 0x8(r4), 1, 0
    ps_madds0 f8, f0, f6, f3
    ps_mul f9, f4, f6
    ps_madds1 f8, f1, f6, f8
    ps_madd f10, f5, f7, f9
lbl_loop:
    psq_lu f6, 0x4(r4), 0, 0
    ps_madds0 f12, f2, f7, f8
    psq_lu f7, 0x8(r4), 1, 0
    ps_sum0 f13, f10, f9, f10
    ps_madds0 f8, f0, f6, f3
    ps_mul f9, f4, f6
    psq_stu f12, 0x4(r5), 0, 0
    ps_madds1 f8, f1, f6, f8
    psq_stu f13, 0x8(r5), 1, 0
    ps_madd f10, f5, f7, f9
    bdnz lbl_loop
    ps_madds0 f12, f2, f7, f8
    ps_sum0 f13, f10, f9, f10
    psq_stu f12, 0x4(r5), 0, 0
    psq_stu f13, 0x8(r5), 1, 0
    blr
}

asm void fn_805F94B0(void) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lfs f5, lbl_80888570
    stw r0, 0x44(r1)
    fmuls f1, f5, f1
    lfs f0, lbl_80888574
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    fmr f31, f4
    fmuls f1, f0, f1
    stfd f30, 0x20(r1)
    psq_st f30, 0x28(r1), 0, 0
    fmr f30, f3
    stfd f29, 0x10(r1)
    psq_st f29, 0x18(r1), 0, 0
    fmr f29, f2
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8068AE24
    frsp f4, f1
    lfs f3, lbl_80888568
    lfs f5, lbl_80888560
    fsubs f2, f31, f30
    lfs f0, lbl_8088856C
    fmuls f1, f31, f30
    fdivs f6, f5, f4
    stfs f0, 0x38(r31)
    stfs f3, 0x4(r31)
    stfs f3, 0x8(r31)
    stfs f3, 0xc(r31)
    stfs f3, 0x10(r31)
    fdivs f5, f5, f2
    stfs f3, 0x18(r31)
    stfs f6, 0x14(r31)
    stfs f3, 0x1c(r31)
    stfs f3, 0x20(r31)
    stfs f3, 0x24(r31)
    fdivs f4, f6, f29
    stfs f3, 0x30(r31)
    stfs f3, 0x34(r31)
    stfs f3, 0x3c(r31)
    stfs f4, 0x0(r31)
    fneg f0, f1
    fneg f2, f30
    fmuls f0, f5, f0
    fmuls f1, f2, f5
    stfs f0, 0x2c(r31)
    stfs f1, 0x28(r31)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    psq_l f30, 0x28(r1), 0, 0
    lfd f30, 0x20(r1)
    psq_l f29, 0x18(r1), 0, 0
    lfd f29, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805F95A0(void) {
    nofralloc
    fsubs f11, f4, f3
    lfs f8, lbl_80888568
    lfs f10, lbl_80888560
    fsubs f7, f1, f2
    fsubs f0, f6, f5
    lfs f9, lbl_80888564
    fdivs f12, f10, f11
    lfs f5, lbl_8088856C
    stfs f8, 0x4(r3)
    stfs f8, 0x8(r3)
    stfs f8, 0x10(r3)
    stfs f8, 0x18(r3)
    fdivs f11, f10, f7
    stfs f8, 0x20(r3)
    stfs f8, 0x24(r3)
    stfs f8, 0x30(r3)
    stfs f8, 0x34(r3)
    stfs f8, 0x38(r3)
    fdivs f7, f10, f0
    stfs f10, 0x3c(r3)
    fneg f0, f6
    fadds f1, f1, f2
    fadds f3, f4, f3
    fmuls f6, f9, f12
    fmuls f0, f0, f7
    fneg f2, f3
    stfs f6, 0x0(r3)
    fmuls f3, f9, f11
    fneg f1, f1
    stfs f0, 0x2c(r3)
    fmuls f4, f12, f2
    stfs f3, 0x14(r3)
    fmuls f2, f11, f1
    fmuls f1, f5, f7
    stfs f4, 0xc(r3)
    stfs f2, 0x1c(r3)
    stfs f1, 0x28(r3)
    blr
}
