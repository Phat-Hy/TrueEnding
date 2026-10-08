#include "revolution/types.h"

/* External constants */
extern f32 lbl_80888550; /* 1.0f in .sdata2 */
extern f32 lbl_80888554; /* 0.0f in .sdata2 */
extern f32 lbl_8087E7B8[2];
/* Function symbol aliases */
#define PSMTXIdentity fn_805F8980
#define PSMTXCopy fn_805F89B0
#define PSMTXConcat fn_805F89F0
#define PSMTXConcatArray fn_805F8AC0
#define PSMTXTranspose fn_805F8C50
#define PSMTXInverse fn_805F8CA0
#define PSMTXInvXpose fn_805F8DA0

/* Function 1: PSMTXIdentity (fn_805F8980) */
asm void PSMTXIdentity(void* m) {
    nofralloc
    lfs f0, lbl_80888554
    lfs f1, lbl_80888550
    psq_st f0, 0x8(r3), 0, 0
    ps_merge10 f2, f1, f0
    ps_merge01 f1, f0, f1
    psq_st f0, 0x18(r3), 0, 0
    psq_st f0, 0x20(r3), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    psq_st f2, 0x0(r3), 0, 0
    psq_st f2, 0x28(r3), 0, 0
    blr
}

/* Function 2: PSMTXCopy (fn_805F89B0) */
asm void PSMTXCopy(const void* src, void* dst) {
    nofralloc
    psq_l f0, 0x0(r3), 0, 0
    psq_st f0, 0x0(r4), 0, 0
    psq_l f1, 0x8(r3), 0, 0
    psq_st f1, 0x8(r4), 0, 0
    psq_l f2, 0x10(r3), 0, 0
    psq_st f2, 0x10(r4), 0, 0
    psq_l f3, 0x18(r3), 0, 0
    psq_st f3, 0x18(r4), 0, 0
    psq_l f4, 0x20(r3), 0, 0
    psq_st f4, 0x20(r4), 0, 0
    psq_l f5, 0x28(r3), 0, 0
    psq_st f5, 0x28(r4), 0, 0
    blr
}

/* Function 3: PSMTXConcat (fn_805F89F0) */
asm void PSMTXConcat(const void* a, const void* b, void* ab) {
    nofralloc
    stwu r1, -0x40(r1)
    psq_l f0, 0x0(r3), 0, 0
    stfd f14, 0x8(r1)
    psq_l f6, 0x0(r4), 0, 0
    lis r6, lbl_8087E7B8@ha
    psq_l f7, 0x8(r4), 0, 0
    stfd f15, 0x10(r1)
    addi r6, r6, lbl_8087E7B8@l
    stfd f31, 0x28(r1)
    psq_l f8, 0x10(r4), 0, 0
    ps_muls0 f12, f6, f0
    psq_l f2, 0x10(r3), 0, 0
    ps_muls0 f13, f7, f0
    psq_l f31, 0x0(r6), 0, 0
    ps_muls0 f14, f6, f2
    psq_l f9, 0x18(r4), 0, 0
    ps_muls0 f15, f7, f2
    psq_l f1, 0x8(r3), 0, 0
    ps_madds1 f12, f8, f0, f12
    psq_l f3, 0x18(r3), 0, 0
    ps_madds1 f14, f8, f2, f14
    psq_l f10, 0x20(r4), 0, 0
    ps_madds1 f13, f9, f0, f13
    psq_l f11, 0x28(r4), 0, 0
    ps_madds1 f15, f9, f2, f15
    psq_l f4, 0x20(r3), 0, 0
    psq_l f5, 0x28(r3), 0, 0
    ps_madds0 f12, f10, f1, f12
    ps_madds0 f13, f11, f1, f13
    ps_madds0 f14, f10, f3, f14
    ps_madds0 f15, f11, f3, f15
    psq_st f12, 0x0(r5), 0, 0
    ps_muls0 f2, f6, f4
    ps_madds1 f13, f31, f1, f13
    ps_muls0 f0, f7, f4
    psq_st f14, 0x10(r5), 0, 0
    ps_madds1 f15, f31, f3, f15
    psq_st f13, 0x8(r5), 0, 0
    ps_madds1 f2, f8, f4, f2
    ps_madds1 f0, f9, f4, f0
    ps_madds0 f2, f10, f5, f2
    lfd f14, 0x8(r1)
    psq_st f15, 0x18(r5), 0, 0
    ps_madds0 f0, f11, f5, f0
    psq_st f2, 0x20(r5), 0, 0
    ps_madds1 f0, f31, f5, f0
    lfd f15, 0x10(r1)
    psq_st f0, 0x28(r5), 0, 0
    lfd f31, 0x28(r1)
    addi r1, r1, 0x40
    blr
}

/* Function 4: PSMTXConcatArray (fn_805F8AC0) */
asm void PSMTXConcatArray(const void* a, const void* bArray, void* abArray, u32 count) {
    nofralloc
    stwu r1, -0x50(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    stfd f29, 0x20(r1)
    psq_st f29, 0x28(r1), 0, 0
    stfd f28, 0x10(r1)
    psq_st f28, 0x18(r1), 0, 0
    subi r0, r6, 0x1
    psq_l f0, 0x0(r3), 0, 0
    psq_l f1, 0x8(r3), 0, 0
    la r6, lbl_8087E7B8
    psq_l f2, 0x10(r3), 0, 0
    psq_l f3, 0x18(r3), 0, 0
    psq_l f4, 0x20(r3), 0, 0
    psq_l f5, 0x28(r3), 0, 0
    mtctr r0
    psq_l f6, 0x0(r4), 0, 0
    psq_l f7, 0x8(r4), 0, 0
    ps_muls0 f11, f6, f0
    psq_l f8, 0x10(r4), 0, 0
    ps_muls0 f13, f6, f2
    psq_l f9, 0x20(r4), 0, 0
    ps_muls0 f30, f6, f4
    psq_l f6, 0x18(r4), 0, 0
    ps_madds1 f11, f8, f0, f11
    psq_l f28, 0x0(r6), 0, 0
    ps_madds1 f13, f8, f2, f13
    psq_l f10, 0x28(r4), 0, 0
    ps_madds1 f30, f8, f4, f30
    ps_muls0 f12, f7, f0
    ps_muls0 f31, f7, f2
    ps_muls0 f29, f7, f4
    ps_madds0 f11, f9, f1, f11
    ps_madds0 f13, f9, f3, f13
    ps_madds0 f30, f9, f5, f30
    psq_st f11, 0x0(r5), 0, 0
    ps_madds1 f12, f6, f0, f12
    ps_madds1 f31, f6, f2, f31
    psq_st f13, 0x10(r5), 0, 0
    ps_madds1 f29, f6, f4, f29
lbl_loop:
    ps_madds0 f12, f10, f1, f12
    psq_l f6, 0x30(r4), 0, 0
    ps_madds0 f31, f10, f3, f31
    psq_st f30, 0x20(r5), 0, 0
    ps_madds0 f29, f10, f5, f29
    psq_l f8, 0x40(r4), 0, 0
    ps_madd f12, f28, f1, f12
    psq_l f9, 0x50(r4), 0, 0
    ps_muls0 f11, f6, f0
    psq_l f7, 0x38(r4), 0, 0
    psq_st f12, 0x8(r5), 0, 0
    ps_madd f31, f28, f3, f31
    ps_muls0 f13, f6, f2
    psq_st f31, 0x18(r5), 0, 0
    ps_muls0 f30, f6, f4
    psq_l f6, 0x48(r4), 0, 0
    ps_madds1 f11, f8, f0, f11
    psq_l f10, 0x58(r4), 0, 0
    ps_madd f29, f28, f5, f29
    addi r4, r4, 0x30
    ps_madds1 f13, f8, f2, f13
    psq_st f29, 0x28(r5), 0, 0
    ps_madds1 f30, f8, f4, f30
    ps_madds0 f11, f9, f1, f11
    ps_muls0 f12, f7, f0
    ps_muls0 f31, f7, f2
    psq_st f11, 0x30(r5), 0, 0
    ps_muls0 f29, f7, f4
    ps_madds0 f13, f9, f3, f13
    ps_madds0 f30, f9, f5, f30
    psq_st f13, 0x40(r5), 0, 0
    ps_madds1 f12, f6, f0, f12
    ps_madds1 f31, f6, f2, f31
    addi r5, r5, 0x30
    ps_madds1 f29, f6, f4, f29
    bdnz lbl_loop
    ps_madds0 f12, f10, f1, f12
    psq_st f30, 0x20(r5), 0, 0
    ps_madds0 f31, f10, f3, f31
    ps_madds0 f29, f10, f5, f29
    ps_madd f12, f28, f1, f12
    ps_madd f31, f28, f3, f31
    psq_st f12, 0x8(r5), 0, 0
    ps_madd f29, f28, f5, f29
    psq_st f31, 0x18(r5), 0, 0
    psq_st f29, 0x28(r5), 0, 0
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    psq_l f29, 0x28(r1), 0, 0
    lfd f29, 0x20(r1)
    psq_l f28, 0x18(r1), 0, 0
    lfd f28, 0x10(r1)
    addi r1, r1, 0x50
    blr
}

/* Function 5: PSMTXTranspose (fn_805F8C50) */
asm void PSMTXTranspose(const void* src, void* dst) {
    nofralloc
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x10(r3), 0, 0
    lfs f0, lbl_80888554
    ps_merge00 f4, f1, f2
    psq_l f3, 0x8(r3), 1, 0
    ps_merge11 f5, f1, f2
    psq_l f2, 0x18(r3), 1, 0
    psq_l f1, 0x20(r3), 0, 0
    ps_merge00 f2, f3, f2
    psq_st f4, 0x0(r4), 0, 0
    ps_merge00 f4, f1, f0
    lfs f3, 0x28(r3)
    psq_st f5, 0x10(r4), 0, 0
    ps_merge10 f5, f1, f0
    stfs f0, 0x2c(r4)
    psq_st f2, 0x20(r4), 0, 0
    psq_st f4, 0x8(r4), 0, 0
    psq_st f5, 0x18(r4), 0, 0
    stfs f3, 0x28(r4)
    blr
}

/* Function 6: PSMTXInverse (fn_805F8CA0) */
asm u32 PSMTXInverse(const void* src, void* dst) {
    nofralloc
    psq_l f0, 0x0(r3), 1, 0
    psq_l f1, 0x4(r3), 0, 0
    psq_l f2, 0x10(r3), 1, 0
    ps_merge10 f6, f1, f0
    psq_l f3, 0x14(r3), 0, 0
    psq_l f4, 0x20(r3), 1, 0
    ps_merge10 f7, f3, f2
    psq_l f5, 0x24(r3), 0, 0
    ps_mul f11, f3, f6
    ps_merge10 f8, f5, f4
    ps_mul f13, f5, f7
    ps_msub f11, f1, f7, f11
    ps_mul f12, f1, f8
    ps_msub f13, f3, f8, f13
    ps_mul f10, f3, f4
    ps_msub f12, f5, f6, f12
    ps_mul f7, f0, f13
    ps_mul f9, f0, f5
    ps_mul f8, f1, f2
    ps_madd f7, f2, f12, f7
    ps_sub f6, f6, f6
    ps_msub f10, f2, f5, f10
    ps_madd f7, f4, f11, f7
    ps_msub f9, f1, f4, f9
    ps_msub f8, f0, f3, f8
    ps_cmpo0 cr0, f7, f6
    bne lbl_0394
    li r3, 0x0
    blr
lbl_0394:
    fres f0, f7
    ps_add f6, f0, f0
    ps_mul f5, f7, f0
    ps_nmsub f0, f0, f5, f6
    lfs f1, 0xc(r3)
    ps_muls0 f13, f13, f0
    lfs f2, 0x1c(r3)
    ps_muls0 f12, f12, f0
    lfs f3, 0x2c(r3)
    ps_muls0 f11, f11, f0
    ps_merge00 f5, f13, f12
    ps_merge11 f4, f13, f12
    ps_mul f6, f13, f1
    psq_st f5, 0x0(r4), 0, 0
    psq_st f4, 0x10(r4), 0, 0
    ps_muls0 f10, f10, f0
    ps_muls0 f9, f9, f0
    ps_madd f6, f12, f2, f6
    psq_st f10, 0x20(r4), 1, 0
    ps_muls0 f8, f8, f0
    ps_nmadd f6, f11, f3, f6
    psq_st f9, 0x24(r4), 1, 0
    ps_mul f7, f10, f1
    ps_merge00 f5, f11, f6
    psq_st f8, 0x28(r4), 1, 0
    ps_madd f7, f9, f2, f7
    ps_merge11 f4, f11, f6
    psq_st f5, 0x8(r4), 0, 0
    ps_nmadd f7, f8, f3, f7
    psq_st f4, 0x18(r4), 0, 0
    psq_st f7, 0x2c(r4), 1, 0
    li r3, 0x1
    blr
}

/* Function 7: PSMTXInvXpose (fn_805F8DA0) */
asm u32 PSMTXInvXpose(const void* src, void* dst) {
    nofralloc
    psq_l f0, 0x0(r3), 1, 0
    psq_l f1, 0x4(r3), 0, 0
    psq_l f2, 0x10(r3), 1, 0
    ps_merge10 f6, f1, f0
    psq_l f3, 0x14(r3), 0, 0
    psq_l f4, 0x20(r3), 1, 0
    ps_merge10 f7, f3, f2
    psq_l f5, 0x24(r3), 0, 0
    ps_mul f11, f3, f6
    ps_merge10 f8, f5, f4
    ps_mul f13, f5, f7
    ps_msub f11, f1, f7, f11
    ps_mul f12, f1, f8
    ps_msub f13, f3, f8, f13
    ps_mul f10, f3, f4
    ps_msub f12, f5, f6, f12
    ps_mul f7, f0, f13
    ps_mul f9, f0, f5
    ps_mul f8, f1, f2
    ps_madd f7, f2, f12, f7
    ps_sub f6, f6, f6
    ps_msub f10, f2, f5, f10
    ps_madd f7, f4, f11, f7
    ps_msub f9, f1, f4, f9
    ps_msub f8, f0, f3, f8
    ps_cmpo0 cr0, f7, f6
    bne lbl_0494
    li r3, 0x0
    blr
lbl_0494:
    fres f0, f7
    psq_st f6, 0xc(r4), 1, 0
    ps_add f4, f0, f0
    ps_mul f5, f7, f0
    psq_st f6, 0x1c(r4), 1, 0
    ps_nmsub f0, f0, f5, f4
    psq_st f6, 0x2c(r4), 1, 0
    ps_muls0 f13, f13, f0
    ps_muls0 f12, f12, f0
    psq_st f13, 0x0(r4), 0, 0
    ps_muls0 f11, f11, f0
    psq_st f12, 0x10(r4), 0, 0
    ps_muls0 f10, f10, f0
    psq_st f11, 0x20(r4), 0, 0
    ps_muls0 f9, f9, f0
    psq_st f10, 0x8(r4), 1, 0
    ps_muls0 f8, f8, f0
    psq_st f9, 0x18(r4), 1, 0
    psq_st f8, 0x28(r4), 1, 0
    li r3, 0x1
    blr
}
