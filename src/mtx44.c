#include "revolution/types.h"

void fn_805F9640(void);
void fn_805F9750(void);
void fn_805F97D0(void);

asm void fn_805F9640(void) {
    nofralloc
    psq_l f0, 0x0(r3), 0, 0
    psq_l f2, 0x0(r4), 0, 0
    ps_muls0 f6, f2, f0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x20(r4), 0, 0
    ps_madds1 f6, f3, f0, f6
    psq_l f1, 0x8(r3), 0, 0
    psq_l f5, 0x30(r4), 0, 0
    ps_madds0 f6, f4, f1, f6
    psq_l f0, 0x10(r3), 0, 0
    ps_madds1 f6, f5, f1, f6
    psq_l f1, 0x18(r3), 0, 0
    ps_muls0 f8, f2, f0
    ps_madds1 f8, f3, f0, f8
    psq_l f0, 0x20(r3), 0, 0
    ps_madds0 f8, f4, f1, f8
    ps_madds1 f8, f5, f1, f8
    psq_l f1, 0x28(r3), 0, 0
    ps_muls0 f10, f2, f0
    ps_madds1 f10, f3, f0, f10
    psq_l f0, 0x30(r3), 0, 0
    ps_madds0 f10, f4, f1, f10
    ps_madds1 f10, f5, f1, f10
    psq_l f1, 0x38(r3), 0, 0
    ps_muls0 f12, f2, f0
    psq_l f2, 0x8(r4), 0, 0
    ps_madds1 f12, f3, f0, f12
    psq_l f0, 0x0(r3), 0, 0
    ps_madds0 f12, f4, f1, f12
    psq_l f3, 0x18(r4), 0, 0
    ps_madds1 f12, f5, f1, f12
    psq_l f1, 0x8(r3), 0, 0
    ps_muls0 f7, f2, f0
    psq_l f4, 0x28(r4), 0, 0
    ps_madds1 f7, f3, f0, f7
    psq_l f5, 0x38(r4), 0, 0
    ps_madds0 f7, f4, f1, f7
    psq_l f0, 0x10(r3), 0, 0
    ps_madds1 f7, f5, f1, f7
    psq_l f1, 0x18(r3), 0, 0
    ps_muls0 f9, f2, f0
    psq_st f6, 0x0(r5), 0, 0
    ps_madds1 f9, f3, f0, f9
    psq_l f0, 0x20(r3), 0, 0
    ps_madds0 f9, f4, f1, f9
    psq_st f8, 0x10(r5), 0, 0
    ps_madds1 f9, f5, f1, f9
    psq_l f1, 0x28(r3), 0, 0
    ps_muls0 f11, f2, f0
    psq_st f10, 0x20(r5), 0, 0
    ps_madds1 f11, f3, f0, f11
    psq_l f0, 0x30(r3), 0, 0
    ps_madds0 f11, f4, f1, f11
    psq_st f12, 0x30(r5), 0, 0
    ps_madds1 f11, f5, f1, f11
    psq_l f1, 0x38(r3), 0, 0
    ps_muls0 f13, f2, f0
    psq_st f7, 0x8(r5), 0, 0
    ps_madds1 f13, f3, f0, f13
    psq_st f9, 0x18(r5), 0, 0
    ps_madds0 f13, f4, f1, f13
    psq_st f11, 0x28(r5), 0, 0
    ps_madds1 f13, f5, f1, f13
    psq_st f13, 0x38(r5), 0, 0
    blr
}

asm void fn_805F9750(void) {
    nofralloc
    psq_l f0, 0x0(r4), 0, 0
    psq_l f2, 0x30(r3), 0, 0
    psq_l f1, 0x8(r4), 1, 0
    ps_mul f4, f0, f2
    psq_l f3, 0x38(r3), 0, 0
    ps_madd f5, f1, f3, f4
    ps_merge11 f12, f1, f1
    ps_sum0 f13, f5, f5, f5
    psq_l f4, 0x0(r3), 0, 0
    ps_merge00 f13, f13, f13
    psq_l f5, 0x8(r3), 0, 0
    ps_div f13, f12, f13
    psq_l f6, 0x10(r3), 0, 0
    psq_l f7, 0x18(r3), 0, 0
    psq_l f8, 0x20(r3), 0, 0
    psq_l f9, 0x28(r3), 0, 0
    ps_mul f4, f0, f4
    ps_madd f2, f1, f5, f4
    ps_mul f6, f0, f6
    ps_madd f3, f1, f7, f6
    ps_mul f8, f0, f8
    ps_sum0 f2, f2, f2, f2
    ps_madd f9, f1, f9, f8
    ps_sum1 f2, f3, f2, f3
    ps_sum0 f3, f9, f9, f9
    ps_mul f2, f2, f13
    psq_st f2, 0x0(r5), 0, 0
    ps_mul f3, f3, f13
    psq_st f3, 0x8(r5), 1, 0
    blr
}

asm void fn_805F97D0(void) {
    nofralloc
    stwu r1, -0x18(r1)
    subi r6, r6, 0x1
    psq_l f6, 0x30(r3), 0, 0
    mtctr r6
    psq_l f8, 0x0(r4), 0, 0
    subi r5, r5, 0x4
    stfd f14, 0x8(r1)
    psq_l f7, 0x38(r3), 0, 0
    psq_lu f9, 0x8(r4), 1, 0
    ps_mul f13, f6, f8
    psq_l f0, 0x0(r3), 0, 0
    psq_st f14, 0x10(r1), 0, 0
    ps_madd f13, f7, f9, f13
    psq_l f2, 0x10(r3), 0, 0
    ps_merge11 f14, f9, f9
    ps_mul f10, f0, f8
    psq_l f4, 0x20(r3), 0, 0
    ps_mul f11, f2, f8
    psq_l f1, 0x8(r3), 0, 0
    ps_mul f12, f4, f8
    psq_l f3, 0x18(r3), 0, 0
    ps_sum0 f13, f13, f13, f13
    psq_l f5, 0x28(r3), 0, 0
lbl_loop:
    ps_madd f10, f1, f9, f10
    ps_madd f11, f3, f9, f11
    ps_madd f12, f5, f9, f12
    ps_sum0 f10, f10, f10, f10
    ps_sum0 f11, f11, f11, f11
    ps_sum0 f12, f12, f12, f12
    ps_div f13, f14, f13
    psq_lu f8, 0x4(r4), 0, 0
    psq_lu f9, 0x8(r4), 1, 0
    ps_mul f10, f10, f13
    psq_stu f10, 0x4(r5), 1, 0
    ps_mul f11, f11, f13
    psq_stu f11, 0x4(r5), 1, 0
    ps_mul f12, f12, f13
    psq_stu f12, 0x4(r5), 1, 0
    ps_mul f13, f6, f8
    ps_mul f10, f0, f8
    ps_mul f11, f2, f8
    ps_madd f13, f7, f9, f13
    ps_mul f12, f4, f8
    ps_sum0 f13, f13, f13, f13
    bdnz lbl_loop
    ps_madd f10, f1, f9, f10
    ps_madd f11, f3, f9, f11
    ps_madd f12, f5, f9, f12
    ps_sum0 f10, f10, f10, f10
    ps_sum0 f11, f11, f11, f11
    ps_sum0 f12, f12, f12, f12
    ps_div f13, f14, f13
    ps_mul f10, f10, f13
    psq_st f10, 0x4(r5), 1, 0
    ps_mul f11, f11, f13
    psq_st f11, 0x8(r5), 1, 0
    ps_mul f12, f12, f13
    psq_st f12, 0xc(r5), 1, 0
    psq_l f14, 0x10(r1), 0, 0
    lfd f14, 0x8(r1)
    addi r1, r1, 0x18
    blr
}
