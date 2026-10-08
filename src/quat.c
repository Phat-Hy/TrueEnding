#include "revolution/types.h"

extern f32 lbl_80888580;
extern f32 lbl_80888584;
extern f32 lbl_80888588;
extern f32 lbl_8088858C;
extern u32 lbl_80764798[];

extern void fn_805F98D0(void);
extern void fn_8068AD58(void);
extern void fn_8068A850(void);
extern void fn_8068B100(void);
extern void fn_8068AE9C(void);
extern void _savegpr_25(void);
extern void _restgpr_25(void);

void fn_805F99F0(void);
void fn_805F9A50(void);
void fn_805F9AB0(void);
void fn_805F9B50(void);
void fn_805F9D20(void);

asm void fn_805F99F0(void) {
    nofralloc
    psq_l f0, 0x0(r3), 0, 0
    psq_l f1, 0x8(r3), 0, 0
    ps_neg f5, f0
    psq_l f2, 0x0(r4), 0, 0
    ps_neg f6, f1
    psq_l f3, 0x8(r4), 0, 0
    ps_muls0 f7, f1, f2
    ps_merge01 f4, f5, f0
    ps_merge01 f1, f6, f1
    ps_muls0 f5, f5, f2
    ps_muls1 f8, f4, f2
    ps_madds0 f7, f4, f3, f7
    ps_muls1 f2, f1, f2
    ps_madds0 f5, f1, f3, f5
    ps_merge10 f7, f7, f7
    ps_madds1 f2, f0, f3, f2
    ps_merge10 f5, f5, f5
    ps_madds1 f8, f6, f3, f8
    ps_add f7, f7, f2
    ps_sub f5, f5, f8
    psq_st f7, 0x0(r5), 0, 0
    psq_st f5, 0x8(r5), 0, 0
    blr
}

asm void fn_805F9A50(void) {
    nofralloc
    psq_l f0, 0x0(r3), 0, 0
    lfs f5, lbl_80888580
    ps_mul f2, f0, f0
    psq_l f1, 0x8(r3), 0, 0
    ps_sub f4, f5, f5
    ps_add f3, f5, f5
    ps_madd f2, f1, f1, f2
    ps_sum0 f2, f2, f2, f2
    fcmpu cr0, f2, f4
    beq lbl_0094
    fres f5, f2
    ps_nmsub f2, f2, f5, f3
    ps_mul f5, f5, f2
lbl_0094:
    ps_neg f3, f5
    ps_muls1 f2, f5, f1
    ps_muls0 f0, f0, f3
    psq_st f2, 0xc(r4), 1, 0
    ps_muls0 f1, f1, f3
    psq_st f0, 0x0(r4), 0, 0
    psq_st f1, 0x8(r4), 1, 0
    blr
}

asm void fn_805F9AB0(void) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stfd f30, 0x20(r1)
    psq_st f30, 0x28(r1), 0, 0
    fmr f30, f1
    stw r31, 0x1c(r1)
    mr r31, r3
    mr r3, r4
    addi r4, r1, 0x8
    bl fn_805F98D0
    lfs f0, lbl_80888588
    fmuls f30, f0, f30
    fmr f1, f30
    bl fn_8068AD58
    frsp f31, f1
    fmr f1, f30
    bl fn_8068A850
    lfs f0, 0x8(r1)
    frsp f1, f1
    fmuls f0, f31, f0
    stfs f0, 0x0(r31)
    lfs f0, 0xc(r1)
    fmuls f0, f31, f0
    stfs f0, 0x4(r31)
    lfs f0, 0x10(r1)
    fmuls f0, f31, f0
    stfs f1, 0xc(r31)
    stfs f0, 0x8(r31)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    psq_l f30, 0x28(r1), 0, 0
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805F9B50(void) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    lfs f3, 0x0(r4)
    lis r6, lbl_80764798@ha
    lfs f2, 0x14(r4)
    mr r31, r3
    lwzu r5, lbl_80764798@l(r6)
    mr r25, r4
    fadds f1, f3, f2
    lfs f0, 0x28(r4)
    lwz r3, 0x4(r6)
    lwz r0, 0x8(r6)
    fadds f1, f0, f1
    lfs f0, lbl_80888584
    stw r5, 0x14(r1)
    fcmpo cr0, f1, f0
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    ble lbl_0218
    lfs f0, lbl_80888580
    fadds f1, f0, f1
    bl fn_8068B100
    frsp f7, f1
    lfs f6, lbl_80888588
    lfs f5, 0x24(r25)
    lfs f4, 0x18(r25)
    fdivs f8, f6, f7
    lfs f3, 0x8(r25)
    lfs f2, 0x20(r25)
    lfs f1, 0x10(r25)
    lfs f0, 0x4(r25)
    fsubs f4, f5, f4
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    fmuls f5, f6, f7
    fmuls f3, f8, f4
    fmuls f1, f8, f2
    stfs f5, 0xc(r31)
    fmuls f0, f8, f0
    stfs f3, 0x0(r31)
    stfs f1, 0x4(r31)
    stfs f0, 0x8(r31)
    b lbl_0314
lbl_0218:
    fcmpo cr0, f2, f3
    li r5, 0x0
    ble lbl_0228
    li r5, 0x1
lbl_0228:
    slwi r0, r5, 4
    slwi r3, r5, 2
    add r0, r4, r0
    lfs f1, 0x28(r4)
    lfsx f0, r3, r0
    fcmpo cr0, f1, f0
    ble lbl_0248
    li r5, 0x2
lbl_0248:
    slwi r26, r5, 2
    addi r3, r1, 0x14
    lwzx r6, r3, r26
    slwi r0, r5, 4
    add r25, r4, r0
    lfs f0, lbl_80888580
    slwi r28, r6, 2
    slwi r0, r6, 4
    lwzx r3, r3, r28
    add r29, r4, r0
    lfsx f3, r29, r28
    slwi r0, r3, 4
    slwi r30, r3, 2
    add r27, r4, r0
    lfsx f1, r25, r26
    lfsx f2, r27, r30
    fadds f2, f3, f2
    fsubs f1, f1, f2
    fadds f1, f0, f1
    bl fn_8068B100
    frsp f5, f1
    lfs f2, lbl_80888588
    lfs f0, lbl_80888584
    addi r3, r1, 0x8
    fmuls f1, f2, f5
    fcmpu cr0, f0, f5
    stfsx f1, r3, r26
    beq lbl_02bc
    fdivs f5, f2, f5
lbl_02bc:
    lfsx f2, r25, r28
    addi r3, r1, 0x8
    lfsx f0, r29, r26
    lfsx f1, r25, r30
    fadds f2, f2, f0
    lfsx f0, r27, r26
    lfsx f4, r27, r28
    fadds f0, f1, f0
    lfsx f3, r29, r30
    fmuls f1, f5, f2
    fsubs f2, f4, f3
    stfsx f1, r3, r28
    fmuls f0, f5, f0
    stfsx f0, r3, r30
    fmuls f3, f5, f2
    lfs f2, 0x8(r1)
    lfs f1, 0xc(r1)
    lfs f0, 0x10(r1)
    stfs f3, 0xc(r31)
    stfs f2, 0x0(r31)
    stfs f1, 0x4(r31)
    stfs f0, 0x8(r31)
lbl_0314:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805F9D20(void) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lfs f4, 0x0(r3)
    stw r0, 0x64(r1)
    lfs f3, 0x0(r4)
    stfd f31, 0x50(r1)
    lfs f2, 0x4(r3)
    fmuls f3, f4, f3
    psq_st f31, 0x58(r1), 0, 0
    fmr f31, f1
    lfs f0, 0x4(r4)
    stfd f30, 0x40(r1)
    fmuls f0, f2, f0
    lfs f4, 0x8(r3)
    psq_st f30, 0x48(r1), 0, 0
    lfs f2, 0x8(r4)
    stfd f29, 0x30(r1)
    fmuls f4, f4, f2
    lfs f6, 0xc(r3)
    fadds f2, f3, f0
    psq_st f29, 0x38(r1), 0, 0
    lfs f5, 0xc(r4)
    stfd f28, 0x20(r1)
    fmuls f3, f6, f5
    lfs f0, lbl_80888584
    fadds f2, f4, f2
    psq_st f28, 0x28(r1), 0, 0
    lfs f30, lbl_80888580
    stw r31, 0x1c(r1)
    fadds f2, f3, f2
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    fcmpo cr0, f2, f0
    mr r29, r3
    bge lbl_03cc
    fneg f2, f2
    fneg f30, f30
lbl_03cc:
    lfs f0, lbl_8088858C
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_0424
    fmr f1, f2
    bl fn_8068AE9C
    frsp f29, f1
    fmr f1, f29
    bl fn_8068AD58
    lfs f0, lbl_80888580
    frsp f28, f1
    fsubs f0, f0, f31
    fmuls f1, f0, f29
    bl fn_8068AD58
    frsp f0, f1
    fmuls f1, f31, f29
    fdivs f31, f0, f28
    bl fn_8068AD58
    frsp f0, f1
    fdivs f0, f0, f28
    fmuls f30, f30, f0
    b lbl_0430
lbl_0424:
    lfs f0, lbl_80888580
    fmuls f30, f30, f1
    fsubs f31, f0, f1
lbl_0430:
    lfs f0, 0x0(r29)
    lfs f2, 0x0(r30)
    lfs f1, 0x4(r29)
    fmuls f7, f31, f0
    lfs f0, 0x4(r30)
    fmuls f6, f30, f2
    lfs f3, 0x8(r29)
    fmuls f5, f31, f1
    fmuls f4, f30, f0
    lfs f2, 0x8(r30)
    fmuls f3, f31, f3
    lfs f1, 0xc(r29)
    fadds f6, f7, f6
    lfs f0, 0xc(r30)
    fmuls f2, f30, f2
    stfs f6, 0x0(r31)
    fadds f4, f5, f4
    fmuls f1, f31, f1
    fmuls f0, f30, f0
    stfs f4, 0x4(r31)
    fadds f2, f3, f2
    fadds f0, f1, f0
    stfs f2, 0x8(r31)
    stfs f0, 0xc(r31)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    psq_l f29, 0x38(r1), 0, 0
    lfd f29, 0x30(r1)
    psq_l f28, 0x28(r1), 0, 0
    lfd f28, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
