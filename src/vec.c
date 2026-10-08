#include "revolution/types.h"

extern f32 lbl_80888578;
extern f32 lbl_8088857C;

void fn_805F98D0(void);
void fn_805F9920(void);
void fn_805F9940(void);
void fn_805F9990(void);
void fn_805F99B0(void);

asm void fn_805F98D0(void) {
    nofralloc
    psq_l f2, 0x0(r3), 0, 0
    psq_l f3, 0x8(r3), 1, 0
    ps_mul f5, f2, f2
    lfs f0, lbl_80888578
    lfs f1, lbl_8088857C
    ps_madd f4, f3, f3, f5
    ps_sum0 f4, f4, f3, f5
    frsqrte f5, f4
    fmuls f6, f5, f5
    fmuls f0, f5, f0
    fnmsubs f6, f6, f4, f1
    fmuls f5, f6, f0
    ps_muls0 f2, f2, f5
    ps_muls0 f3, f3, f5
    psq_st f2, 0x0(r4), 0, 0
    psq_st f3, 0x8(r4), 1, 0
    blr
}

asm void fn_805F9920(void) {
    nofralloc
    psq_l f0, 0x0(r3), 0, 0
    lfs f1, 0x8(r3)
    ps_mul f0, f0, f0
    ps_madd f1, f1, f1, f0
    ps_sum0 f1, f1, f0, f0
    blr
}

asm void fn_805F9940(void) {
    nofralloc
    psq_l f0, 0x0(r3), 0, 0
    lfs f4, lbl_80888578
    ps_mul f0, f0, f0
    lfs f1, 0x8(r3)
    fsubs f2, f4, f4
    ps_madd f1, f1, f1, f0
    ps_sum0 f1, f1, f0, f0
    fcmpu cr0, f1, f2
    beqlr
    frsqrte f0, f1
    lfs f3, lbl_8088857C
    fmuls f2, f0, f0
    fmuls f0, f0, f4
    fnmsubs f2, f2, f1, f3
    fmuls f0, f2, f0
    fmuls f1, f1, f0
    blr
}

asm void fn_805F9990(void) {
    nofralloc
    psq_l f2, 0x4(r3), 0, 0
    psq_l f3, 0x4(r4), 0, 0
    ps_mul f2, f2, f3
    psq_l f5, 0x0(r3), 0, 0
    psq_l f4, 0x0(r4), 0, 0
    ps_madd f3, f5, f4, f2
    ps_sum0 f1, f3, f2, f2
    blr
}

asm void fn_805F99B0(void) {
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r3)
    psq_l f0, 0x0(r3), 0, 0
    ps_merge10 f6, f1, f1
    lfs f3, 0x8(r4)
    ps_mul f4, f1, f2
    ps_muls0 f7, f1, f0
    ps_msub f5, f0, f3, f4
    ps_msub f8, f0, f6, f7
    ps_merge11 f9, f5, f5
    ps_merge01 f10, f5, f8
    psq_st f9, 0x0(r5), 1, 0
    ps_neg f10, f10
    psq_st f10, 0x4(r5), 0, 0
    blr
}
