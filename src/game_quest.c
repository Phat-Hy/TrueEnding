#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_21(void);
extern void _savegpr_14(void);
extern void _savegpr_21(void);
extern void fn_80053254(void);
extern void fn_80054038(void);
extern void fn_80059660(void);
extern void fn_80059784(void);
extern void fn_80059A40(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F9160(void);
extern void fn_805F93C0(void);
extern void fn_805F9940(void);

/* External data declarations */

/* Small data declarations */
extern u32 lbl_80880980;
extern u32 lbl_80880984;
extern u32 lbl_80880988;
extern u32 lbl_8088098C;
extern u32 lbl_80880990;

/* Function declarations */
void fn_80059B5C(void);
void fn_80059BAC(void);
void fn_8005A084(void);
void fn_8005A0D4(void);
void fn_8005A5AC(void);
void fn_8005A5FC(void);
void fn_8005AAD4(void);
void fn_8005AADC(void);
void fn_8005AD74(void);
void fn_8005AD7C(void);

asm void fn_80059B5C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r6, 0x0
    mr r10, r9
    stw r0, 0x24(r1)
    bne lbl_fn_80059B5C_00000020
    li r3, 0x0
    b lbl_fn_80059B5C_00000040
lbl_fn_80059B5C_00000020:
    lfs f0, lbl_80880984
    mr r9, r8
    stfs f0, 0x8(r1)
    addi r8, r1, 0x8
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    lwz r6, 0xc(r6)
    bl fn_80059BAC
lbl_fn_80059B5C_00000040:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80059BAC(void)
{
    nofralloc
    stwu r1, -0x370(r1)
    mflr r0
    stw r0, 0x374(r1)
    addi r11, r1, 0x320
    stfd f31, 0x360(r1)
    psq_st f31, 0x368(r1), 0, 0
    stfd f30, 0x350(r1)
    psq_st f30, 0x358(r1), 0, 0
    stfd f29, 0x340(r1)
    psq_st f29, 0x348(r1), 0, 0
    stfd f28, 0x330(r1)
    psq_st f28, 0x338(r1), 0, 0
    stfd f27, 0x320(r1)
    psq_st f27, 0x328(r1), 0, 0
    bl _savegpr_14
    lfs f30, lbl_80880980
    addi r23, r1, 0x298
    lfs f31, lbl_80880984
    mr r15, r3
    lfs f28, lbl_8088098C
    mr r16, r4
    lfs f29, lbl_80880988
    mr r17, r5
    mr r18, r6
    mr r19, r7
    mr r20, r8
    mr r21, r9
    mr r14, r10
    addi r31, r1, 0x268
    addi r27, r1, 0x118
    addi r26, r1, 0xe8
    addi r28, r1, 0x178
    addi r29, r1, 0x1d8
    addi r30, r1, 0xb8
    addi r25, r1, 0x88
    li r22, 0x0
    b lbl_fn_80059BAC_000004DC
lbl_fn_80059BAC_000000E4:
    cmpw r22, r16
    blt lbl_fn_80059BAC_000000F4
    mr r3, r22
    b lbl_fn_80059BAC_000004E8
lbl_fn_80059BAC_000000F4:
    lfs f2, 0x8(r20)
    addi r3, r1, 0x48
    psq_l f1, 0x0(r20), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r19), 0, 0
    stfs f2, 0x50(r1)
    psq_l f2, 0x8(r19), 0, 0
    psq_l f3, 0x10(r19), 0, 0
    psq_l f4, 0x18(r19), 0, 0
    psq_l f5, 0x20(r19), 0, 0
    psq_l f6, 0x28(r19), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
    lwz r0, 0x8(r18)
    clrlwi. r0, r0, 31
    beq lbl_fn_80059BAC_000001A4
    lfs f3, 0x18(r18)
    addi r3, r1, 0x238
    lfs f2, 0x14(r18)
    lfs f1, 0x10(r18)
    stfs f1, 0x3c(r1)
    stfs f2, 0x40(r1)
    stfs f3, 0x44(r1)
    bl fn_805F90D0
    mr r3, r23
    addi r4, r1, 0x238
    addi r5, r1, 0x268
    bl fn_805F89F0
    psq_l f1, 0x0(r31), 0, 0
    psq_l f2, 0x8(r31), 0, 0
    psq_l f3, 0x10(r31), 0, 0
    psq_l f4, 0x18(r31), 0, 0
    psq_l f5, 0x20(r31), 0, 0
    psq_l f6, 0x28(r31), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
lbl_fn_80059BAC_000001A4:
    lwz r0, 0x8(r18)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_80059BAC_0000033C
    lfs f1, 0x24(r18)
    lfs f7, 0x20(r18)
    lfs f0, 0x1c(r18)
    fcmpu cr0, f30, f1
    stfs f0, 0x30(r1)
    stfs f7, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f30, 0x114(r1)
    stfs f30, 0x10c(r1)
    stfs f30, 0x108(r1)
    stfs f30, 0x104(r1)
    stfs f30, 0x100(r1)
    stfs f30, 0xf8(r1)
    stfs f30, 0xf4(r1)
    stfs f30, 0xf0(r1)
    stfs f30, 0xec(r1)
    stfs f31, 0x110(r1)
    stfs f31, 0xfc(r1)
    stfs f31, 0xe8(r1)
    beq lbl_fn_80059BAC_0000024C
    addi r3, r1, 0x148
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r26
    addi r4, r1, 0x148
    addi r5, r1, 0x118
    bl fn_805F89F0
    psq_l f1, 0x0(r27), 0, 0
    psq_l f2, 0x8(r27), 0, 0
    psq_l f3, 0x10(r27), 0, 0
    psq_l f4, 0x18(r27), 0, 0
    psq_l f5, 0x20(r27), 0, 0
    psq_l f6, 0x28(r27), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
lbl_fn_80059BAC_0000024C:
    lfs f1, 0x34(r1)
    fcmpu cr0, f30, f1
    beq lbl_fn_80059BAC_000002A4
    addi r3, r1, 0x1a8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r26
    addi r4, r1, 0x1a8
    addi r5, r1, 0x178
    bl fn_805F89F0
    psq_l f1, 0x0(r28), 0, 0
    psq_l f2, 0x8(r28), 0, 0
    psq_l f3, 0x10(r28), 0, 0
    psq_l f4, 0x18(r28), 0, 0
    psq_l f5, 0x20(r28), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
lbl_fn_80059BAC_000002A4:
    lfs f1, 0x30(r1)
    fcmpu cr0, f30, f1
    beq lbl_fn_80059BAC_000002FC
    addi r3, r1, 0x208
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r26
    addi r4, r1, 0x208
    addi r5, r1, 0x1d8
    bl fn_805F89F0
    psq_l f1, 0x0(r29), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    psq_l f3, 0x10(r29), 0, 0
    psq_l f4, 0x18(r29), 0, 0
    psq_l f5, 0x20(r29), 0, 0
    psq_l f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
lbl_fn_80059BAC_000002FC:
    mr r3, r23
    mr r4, r26
    addi r5, r1, 0xb8
    bl fn_805F89F0
    psq_l f1, 0x0(r30), 0, 0
    psq_l f2, 0x8(r30), 0, 0
    psq_l f3, 0x10(r30), 0, 0
    psq_l f4, 0x18(r30), 0, 0
    psq_l f5, 0x20(r30), 0, 0
    psq_l f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
lbl_fn_80059BAC_0000033C:
    lwz r0, 0x8(r18)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_fn_80059BAC_000003D8
    lfs f3, 0x34(r18)
    addi r3, r1, 0x58
    lfs f2, 0x30(r18)
    lfs f1, 0x2c(r18)
    stfs f1, 0x24(r1)
    stfs f2, 0x28(r1)
    stfs f3, 0x2c(r1)
    bl fn_805F9160
    addi r3, r1, 0x298
    addi r4, r1, 0x58
    addi r5, r1, 0x88
    bl fn_805F89F0
    psq_l f1, 0x0(r25), 0, 0
    psq_l f2, 0x8(r25), 0, 0
    psq_l f3, 0x10(r25), 0, 0
    psq_l f4, 0x18(r25), 0, 0
    psq_l f5, 0x20(r25), 0, 0
    psq_l f6, 0x28(r25), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    lfs f9, 0x48(r1)
    psq_st f2, 0x8(r23), 0, 0
    lfs f8, 0x4c(r1)
    psq_st f3, 0x10(r23), 0, 0
    lfs f7, 0x50(r1)
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
    lfs f0, 0x2c(r18)
    fmuls f0, f9, f0
    stfs f0, 0x48(r1)
    lfs f0, 0x30(r18)
    fmuls f0, f8, f0
    stfs f0, 0x4c(r1)
    lfs f0, 0x34(r18)
    fmuls f0, f7, f0
    stfs f0, 0x50(r1)
lbl_fn_80059BAC_000003D8:
    lwz r0, 0xc(r18)
    cmpwi r0, 0x0
    beq lbl_fn_80059BAC_00000490
    addi r3, r1, 0x48
    bl fn_805F9940
    lwz r24, 0xc(r18)
    fmuls f7, f28, f1
    addi r4, r1, 0x18
    subf r0, r22, r16
    lfs f0, 0xc(r24)
    mr r3, r23
    stfs f0, 0x18(r1)
    fmuls f27, f29, f7
    mr r5, r4
    lfs f0, 0x10(r24)
    stfs f0, 0x1c(r1)
    lfs f0, 0x14(r24)
    stw r0, 0x2c8(r1)
    stfs f0, 0x20(r1)
    bl fn_805F93C0
    addi r3, r1, 0x18
    lfs f2, 0x20(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x8
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f27
    lwz r4, 0x2c8(r1)
    mr r3, r15
    stfs f2, 0x10(r1)
    mr r5, r17
    mr r6, r24
    lfs f0, 0x18(r24)
    mr r7, r23
    addi r8, r1, 0x8
    mr r9, r21
    fmuls f0, f0, f27
    mr r10, r14
    stfs f0, 0x14(r1)
    bl fn_80059660
    add r22, r22, r3
    cmpw r22, r16
    blt lbl_fn_80059BAC_00000488
    mr r3, r22
    b lbl_fn_80059BAC_000004E8
lbl_fn_80059BAC_00000488:
    mulli r0, r3, 0x50
    add r15, r15, r0
lbl_fn_80059BAC_00000490:
    lwz r6, 0x38(r18)
    cmpwi r6, 0x0
    beq lbl_fn_80059BAC_000004D8
    mr r3, r15
    mr r5, r17
    mr r9, r21
    mr r10, r14
    subf r4, r22, r16
    addi r7, r1, 0x298
    addi r8, r1, 0x48
    bl fn_80059BAC
    add r22, r22, r3
    cmpw r22, r16
    blt lbl_fn_80059BAC_000004D0
    mr r3, r22
    b lbl_fn_80059BAC_000004E8
lbl_fn_80059BAC_000004D0:
    mulli r0, r3, 0x50
    add r15, r15, r0
lbl_fn_80059BAC_000004D8:
    lwz r18, 0x3c(r18)
lbl_fn_80059BAC_000004DC:
    cmpwi r18, 0x0
    bne lbl_fn_80059BAC_000000E4
    mr r3, r22
lbl_fn_80059BAC_000004E8:
    addi r11, r1, 0x320
    psq_l f31, 0x368(r1), 0, 0
    lfd f31, 0x360(r1)
    psq_l f30, 0x358(r1), 0, 0
    lfd f30, 0x350(r1)
    psq_l f29, 0x348(r1), 0, 0
    lfd f29, 0x340(r1)
    psq_l f28, 0x338(r1), 0, 0
    lfd f28, 0x330(r1)
    psq_l f27, 0x328(r1), 0, 0
    lfd f27, 0x320(r1)
    bl _restgpr_14
    lwz r0, 0x374(r1)
    mtlr r0
    addi r1, r1, 0x370
    blr
}

asm void fn_8005A084(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r6, 0x0
    mr r10, r9
    stw r0, 0x24(r1)
    bne lbl_fn_8005A084_00000548
    li r3, 0x0
    b lbl_fn_8005A084_00000568
lbl_fn_8005A084_00000548:
    lfs f0, lbl_80880984
    mr r9, r8
    stfs f0, 0x8(r1)
    addi r8, r1, 0x8
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    lwz r6, 0xc(r6)
    bl fn_8005A0D4
lbl_fn_8005A084_00000568:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8005A0D4(void)
{
    nofralloc
    stwu r1, -0x370(r1)
    mflr r0
    stw r0, 0x374(r1)
    addi r11, r1, 0x320
    stfd f31, 0x360(r1)
    psq_st f31, 0x368(r1), 0, 0
    stfd f30, 0x350(r1)
    psq_st f30, 0x358(r1), 0, 0
    stfd f29, 0x340(r1)
    psq_st f29, 0x348(r1), 0, 0
    stfd f28, 0x330(r1)
    psq_st f28, 0x338(r1), 0, 0
    stfd f27, 0x320(r1)
    psq_st f27, 0x328(r1), 0, 0
    bl _savegpr_14
    lfs f30, lbl_80880980
    addi r23, r1, 0x298
    lfs f31, lbl_80880984
    mr r15, r3
    lfs f28, lbl_8088098C
    mr r16, r4
    lfs f29, lbl_80880988
    mr r17, r5
    mr r18, r6
    mr r19, r7
    mr r20, r8
    mr r21, r9
    mr r14, r10
    addi r31, r1, 0x268
    addi r27, r1, 0x118
    addi r26, r1, 0xe8
    addi r28, r1, 0x178
    addi r29, r1, 0x1d8
    addi r30, r1, 0xb8
    addi r25, r1, 0x88
    li r22, 0x0
    b lbl_fn_8005A0D4_00000A04
lbl_fn_8005A0D4_0000060C:
    cmpw r22, r16
    blt lbl_fn_8005A0D4_0000061C
    mr r3, r22
    b lbl_fn_8005A0D4_00000A10
lbl_fn_8005A0D4_0000061C:
    lfs f2, 0x8(r20)
    addi r3, r1, 0x48
    psq_l f1, 0x0(r20), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r19), 0, 0
    stfs f2, 0x50(r1)
    psq_l f2, 0x8(r19), 0, 0
    psq_l f3, 0x10(r19), 0, 0
    psq_l f4, 0x18(r19), 0, 0
    psq_l f5, 0x20(r19), 0, 0
    psq_l f6, 0x28(r19), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
    lwz r0, 0x8(r18)
    clrlwi. r0, r0, 31
    beq lbl_fn_8005A0D4_000006CC
    lfs f3, 0x18(r18)
    addi r3, r1, 0x238
    lfs f2, 0x14(r18)
    lfs f1, 0x10(r18)
    stfs f1, 0x3c(r1)
    stfs f2, 0x40(r1)
    stfs f3, 0x44(r1)
    bl fn_805F90D0
    mr r3, r23
    addi r4, r1, 0x238
    addi r5, r1, 0x268
    bl fn_805F89F0
    psq_l f1, 0x0(r31), 0, 0
    psq_l f2, 0x8(r31), 0, 0
    psq_l f3, 0x10(r31), 0, 0
    psq_l f4, 0x18(r31), 0, 0
    psq_l f5, 0x20(r31), 0, 0
    psq_l f6, 0x28(r31), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
lbl_fn_8005A0D4_000006CC:
    lwz r0, 0x8(r18)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_8005A0D4_00000864
    lfs f1, 0x24(r18)
    lfs f7, 0x20(r18)
    lfs f0, 0x1c(r18)
    fcmpu cr0, f30, f1
    stfs f0, 0x30(r1)
    stfs f7, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f30, 0x114(r1)
    stfs f30, 0x10c(r1)
    stfs f30, 0x108(r1)
    stfs f30, 0x104(r1)
    stfs f30, 0x100(r1)
    stfs f30, 0xf8(r1)
    stfs f30, 0xf4(r1)
    stfs f30, 0xf0(r1)
    stfs f30, 0xec(r1)
    stfs f31, 0x110(r1)
    stfs f31, 0xfc(r1)
    stfs f31, 0xe8(r1)
    beq lbl_fn_8005A0D4_00000774
    addi r3, r1, 0x148
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r26
    addi r4, r1, 0x148
    addi r5, r1, 0x118
    bl fn_805F89F0
    psq_l f1, 0x0(r27), 0, 0
    psq_l f2, 0x8(r27), 0, 0
    psq_l f3, 0x10(r27), 0, 0
    psq_l f4, 0x18(r27), 0, 0
    psq_l f5, 0x20(r27), 0, 0
    psq_l f6, 0x28(r27), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
lbl_fn_8005A0D4_00000774:
    lfs f1, 0x34(r1)
    fcmpu cr0, f30, f1
    beq lbl_fn_8005A0D4_000007CC
    addi r3, r1, 0x1a8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r26
    addi r4, r1, 0x1a8
    addi r5, r1, 0x178
    bl fn_805F89F0
    psq_l f1, 0x0(r28), 0, 0
    psq_l f2, 0x8(r28), 0, 0
    psq_l f3, 0x10(r28), 0, 0
    psq_l f4, 0x18(r28), 0, 0
    psq_l f5, 0x20(r28), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
lbl_fn_8005A0D4_000007CC:
    lfs f1, 0x30(r1)
    fcmpu cr0, f30, f1
    beq lbl_fn_8005A0D4_00000824
    addi r3, r1, 0x208
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r26
    addi r4, r1, 0x208
    addi r5, r1, 0x1d8
    bl fn_805F89F0
    psq_l f1, 0x0(r29), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    psq_l f3, 0x10(r29), 0, 0
    psq_l f4, 0x18(r29), 0, 0
    psq_l f5, 0x20(r29), 0, 0
    psq_l f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
lbl_fn_8005A0D4_00000824:
    mr r3, r23
    mr r4, r26
    addi r5, r1, 0xb8
    bl fn_805F89F0
    psq_l f1, 0x0(r30), 0, 0
    psq_l f2, 0x8(r30), 0, 0
    psq_l f3, 0x10(r30), 0, 0
    psq_l f4, 0x18(r30), 0, 0
    psq_l f5, 0x20(r30), 0, 0
    psq_l f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
lbl_fn_8005A0D4_00000864:
    lwz r0, 0x8(r18)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_fn_8005A0D4_00000900
    lfs f3, 0x34(r18)
    addi r3, r1, 0x58
    lfs f2, 0x30(r18)
    lfs f1, 0x2c(r18)
    stfs f1, 0x24(r1)
    stfs f2, 0x28(r1)
    stfs f3, 0x2c(r1)
    bl fn_805F9160
    addi r3, r1, 0x298
    addi r4, r1, 0x58
    addi r5, r1, 0x88
    bl fn_805F89F0
    psq_l f1, 0x0(r25), 0, 0
    psq_l f2, 0x8(r25), 0, 0
    psq_l f3, 0x10(r25), 0, 0
    psq_l f4, 0x18(r25), 0, 0
    psq_l f5, 0x20(r25), 0, 0
    psq_l f6, 0x28(r25), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    lfs f9, 0x48(r1)
    psq_st f2, 0x8(r23), 0, 0
    lfs f8, 0x4c(r1)
    psq_st f3, 0x10(r23), 0, 0
    lfs f7, 0x50(r1)
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
    lfs f0, 0x2c(r18)
    fmuls f0, f9, f0
    stfs f0, 0x48(r1)
    lfs f0, 0x30(r18)
    fmuls f0, f8, f0
    stfs f0, 0x4c(r1)
    lfs f0, 0x34(r18)
    fmuls f0, f7, f0
    stfs f0, 0x50(r1)
lbl_fn_8005A0D4_00000900:
    lwz r0, 0xc(r18)
    cmpwi r0, 0x0
    beq lbl_fn_8005A0D4_000009B8
    addi r3, r1, 0x48
    bl fn_805F9940
    lwz r24, 0xc(r18)
    fmuls f7, f28, f1
    addi r4, r1, 0x18
    subf r0, r22, r16
    lfs f0, 0xc(r24)
    mr r3, r23
    stfs f0, 0x18(r1)
    fmuls f27, f29, f7
    mr r5, r4
    lfs f0, 0x10(r24)
    stfs f0, 0x1c(r1)
    lfs f0, 0x14(r24)
    stw r0, 0x2c8(r1)
    stfs f0, 0x20(r1)
    bl fn_805F93C0
    addi r3, r1, 0x18
    lfs f2, 0x20(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x8
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f27
    lwz r4, 0x2c8(r1)
    mr r3, r15
    stfs f2, 0x10(r1)
    mr r5, r17
    mr r6, r24
    lfs f0, 0x18(r24)
    mr r7, r23
    addi r8, r1, 0x8
    mr r9, r21
    fmuls f0, f0, f27
    mr r10, r14
    stfs f0, 0x14(r1)
    bl fn_80059784
    add r22, r22, r3
    cmpw r22, r16
    blt lbl_fn_8005A0D4_000009B0
    mr r3, r22
    b lbl_fn_8005A0D4_00000A10
lbl_fn_8005A0D4_000009B0:
    mulli r0, r3, 0x50
    add r15, r15, r0
lbl_fn_8005A0D4_000009B8:
    lwz r6, 0x38(r18)
    cmpwi r6, 0x0
    beq lbl_fn_8005A0D4_00000A00
    mr r3, r15
    mr r5, r17
    mr r9, r21
    mr r10, r14
    subf r4, r22, r16
    addi r7, r1, 0x298
    addi r8, r1, 0x48
    bl fn_8005A0D4
    add r22, r22, r3
    cmpw r22, r16
    blt lbl_fn_8005A0D4_000009F8
    mr r3, r22
    b lbl_fn_8005A0D4_00000A10
lbl_fn_8005A0D4_000009F8:
    mulli r0, r3, 0x50
    add r15, r15, r0
lbl_fn_8005A0D4_00000A00:
    lwz r18, 0x3c(r18)
lbl_fn_8005A0D4_00000A04:
    cmpwi r18, 0x0
    bne lbl_fn_8005A0D4_0000060C
    mr r3, r22
lbl_fn_8005A0D4_00000A10:
    addi r11, r1, 0x320
    psq_l f31, 0x368(r1), 0, 0
    lfd f31, 0x360(r1)
    psq_l f30, 0x358(r1), 0, 0
    lfd f30, 0x350(r1)
    psq_l f29, 0x348(r1), 0, 0
    lfd f29, 0x340(r1)
    psq_l f28, 0x338(r1), 0, 0
    lfd f28, 0x330(r1)
    psq_l f27, 0x328(r1), 0, 0
    lfd f27, 0x320(r1)
    bl _restgpr_14
    lwz r0, 0x374(r1)
    mtlr r0
    addi r1, r1, 0x370
    blr
}

asm void fn_8005A5AC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r6, 0x0
    mr r10, r9
    stw r0, 0x24(r1)
    bne lbl_fn_8005A5AC_00000A70
    li r3, 0x0
    b lbl_fn_8005A5AC_00000A90
lbl_fn_8005A5AC_00000A70:
    lfs f0, lbl_80880984
    mr r9, r8
    stfs f0, 0x8(r1)
    addi r8, r1, 0x8
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    lwz r6, 0xc(r6)
    bl fn_8005A5FC
lbl_fn_8005A5AC_00000A90:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8005A5FC(void)
{
    nofralloc
    stwu r1, -0x370(r1)
    mflr r0
    stw r0, 0x374(r1)
    addi r11, r1, 0x320
    stfd f31, 0x360(r1)
    psq_st f31, 0x368(r1), 0, 0
    stfd f30, 0x350(r1)
    psq_st f30, 0x358(r1), 0, 0
    stfd f29, 0x340(r1)
    psq_st f29, 0x348(r1), 0, 0
    stfd f28, 0x330(r1)
    psq_st f28, 0x338(r1), 0, 0
    stfd f27, 0x320(r1)
    psq_st f27, 0x328(r1), 0, 0
    bl _savegpr_14
    lfs f30, lbl_80880980
    addi r23, r1, 0x298
    lfs f31, lbl_80880984
    mr r15, r3
    lfs f28, lbl_8088098C
    mr r16, r4
    lfs f29, lbl_80880988
    mr r17, r5
    mr r18, r6
    mr r19, r7
    mr r20, r8
    mr r21, r9
    mr r14, r10
    addi r31, r1, 0x268
    addi r27, r1, 0x118
    addi r26, r1, 0xe8
    addi r28, r1, 0x178
    addi r29, r1, 0x1d8
    addi r30, r1, 0xb8
    addi r25, r1, 0x88
    li r22, 0x0
    b lbl_fn_8005A5FC_00000F2C
lbl_fn_8005A5FC_00000B34:
    cmpw r22, r16
    blt lbl_fn_8005A5FC_00000B44
    mr r3, r22
    b lbl_fn_8005A5FC_00000F38
lbl_fn_8005A5FC_00000B44:
    lfs f2, 0x8(r20)
    addi r3, r1, 0x48
    psq_l f1, 0x0(r20), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r19), 0, 0
    stfs f2, 0x50(r1)
    psq_l f2, 0x8(r19), 0, 0
    psq_l f3, 0x10(r19), 0, 0
    psq_l f4, 0x18(r19), 0, 0
    psq_l f5, 0x20(r19), 0, 0
    psq_l f6, 0x28(r19), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
    lwz r0, 0x8(r18)
    clrlwi. r0, r0, 31
    beq lbl_fn_8005A5FC_00000BF4
    lfs f3, 0x18(r18)
    addi r3, r1, 0x238
    lfs f2, 0x14(r18)
    lfs f1, 0x10(r18)
    stfs f1, 0x3c(r1)
    stfs f2, 0x40(r1)
    stfs f3, 0x44(r1)
    bl fn_805F90D0
    mr r3, r23
    addi r4, r1, 0x238
    addi r5, r1, 0x268
    bl fn_805F89F0
    psq_l f1, 0x0(r31), 0, 0
    psq_l f2, 0x8(r31), 0, 0
    psq_l f3, 0x10(r31), 0, 0
    psq_l f4, 0x18(r31), 0, 0
    psq_l f5, 0x20(r31), 0, 0
    psq_l f6, 0x28(r31), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
lbl_fn_8005A5FC_00000BF4:
    lwz r0, 0x8(r18)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_8005A5FC_00000D8C
    lfs f1, 0x24(r18)
    lfs f7, 0x20(r18)
    lfs f0, 0x1c(r18)
    fcmpu cr0, f30, f1
    stfs f0, 0x30(r1)
    stfs f7, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f30, 0x114(r1)
    stfs f30, 0x10c(r1)
    stfs f30, 0x108(r1)
    stfs f30, 0x104(r1)
    stfs f30, 0x100(r1)
    stfs f30, 0xf8(r1)
    stfs f30, 0xf4(r1)
    stfs f30, 0xf0(r1)
    stfs f30, 0xec(r1)
    stfs f31, 0x110(r1)
    stfs f31, 0xfc(r1)
    stfs f31, 0xe8(r1)
    beq lbl_fn_8005A5FC_00000C9C
    addi r3, r1, 0x148
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r26
    addi r4, r1, 0x148
    addi r5, r1, 0x118
    bl fn_805F89F0
    psq_l f1, 0x0(r27), 0, 0
    psq_l f2, 0x8(r27), 0, 0
    psq_l f3, 0x10(r27), 0, 0
    psq_l f4, 0x18(r27), 0, 0
    psq_l f5, 0x20(r27), 0, 0
    psq_l f6, 0x28(r27), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
lbl_fn_8005A5FC_00000C9C:
    lfs f1, 0x34(r1)
    fcmpu cr0, f30, f1
    beq lbl_fn_8005A5FC_00000CF4
    addi r3, r1, 0x1a8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r26
    addi r4, r1, 0x1a8
    addi r5, r1, 0x178
    bl fn_805F89F0
    psq_l f1, 0x0(r28), 0, 0
    psq_l f2, 0x8(r28), 0, 0
    psq_l f3, 0x10(r28), 0, 0
    psq_l f4, 0x18(r28), 0, 0
    psq_l f5, 0x20(r28), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
lbl_fn_8005A5FC_00000CF4:
    lfs f1, 0x30(r1)
    fcmpu cr0, f30, f1
    beq lbl_fn_8005A5FC_00000D4C
    addi r3, r1, 0x208
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r26
    addi r4, r1, 0x208
    addi r5, r1, 0x1d8
    bl fn_805F89F0
    psq_l f1, 0x0(r29), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    psq_l f3, 0x10(r29), 0, 0
    psq_l f4, 0x18(r29), 0, 0
    psq_l f5, 0x20(r29), 0, 0
    psq_l f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
lbl_fn_8005A5FC_00000D4C:
    mr r3, r23
    mr r4, r26
    addi r5, r1, 0xb8
    bl fn_805F89F0
    psq_l f1, 0x0(r30), 0, 0
    psq_l f2, 0x8(r30), 0, 0
    psq_l f3, 0x10(r30), 0, 0
    psq_l f4, 0x18(r30), 0, 0
    psq_l f5, 0x20(r30), 0, 0
    psq_l f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
lbl_fn_8005A5FC_00000D8C:
    lwz r0, 0x8(r18)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_fn_8005A5FC_00000E28
    lfs f3, 0x34(r18)
    addi r3, r1, 0x58
    lfs f2, 0x30(r18)
    lfs f1, 0x2c(r18)
    stfs f1, 0x24(r1)
    stfs f2, 0x28(r1)
    stfs f3, 0x2c(r1)
    bl fn_805F9160
    addi r3, r1, 0x298
    addi r4, r1, 0x58
    addi r5, r1, 0x88
    bl fn_805F89F0
    psq_l f1, 0x0(r25), 0, 0
    psq_l f2, 0x8(r25), 0, 0
    psq_l f3, 0x10(r25), 0, 0
    psq_l f4, 0x18(r25), 0, 0
    psq_l f5, 0x20(r25), 0, 0
    psq_l f6, 0x28(r25), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    lfs f9, 0x48(r1)
    psq_st f2, 0x8(r23), 0, 0
    lfs f8, 0x4c(r1)
    psq_st f3, 0x10(r23), 0, 0
    lfs f7, 0x50(r1)
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
    lfs f0, 0x2c(r18)
    fmuls f0, f9, f0
    stfs f0, 0x48(r1)
    lfs f0, 0x30(r18)
    fmuls f0, f8, f0
    stfs f0, 0x4c(r1)
    lfs f0, 0x34(r18)
    fmuls f0, f7, f0
    stfs f0, 0x50(r1)
lbl_fn_8005A5FC_00000E28:
    lwz r0, 0xc(r18)
    cmpwi r0, 0x0
    beq lbl_fn_8005A5FC_00000EE0
    addi r3, r1, 0x48
    bl fn_805F9940
    lwz r24, 0xc(r18)
    fmuls f7, f28, f1
    addi r4, r1, 0x18
    subf r0, r22, r16
    lfs f0, 0xc(r24)
    mr r3, r23
    stfs f0, 0x18(r1)
    fmuls f27, f29, f7
    mr r5, r4
    lfs f0, 0x10(r24)
    stfs f0, 0x1c(r1)
    lfs f0, 0x14(r24)
    stw r0, 0x2c8(r1)
    stfs f0, 0x20(r1)
    bl fn_805F93C0
    addi r3, r1, 0x18
    lfs f2, 0x20(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x8
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f27
    lwz r4, 0x2c8(r1)
    mr r3, r15
    stfs f2, 0x10(r1)
    mr r5, r17
    mr r6, r24
    lfs f0, 0x18(r24)
    mr r7, r23
    addi r8, r1, 0x8
    mr r9, r21
    fmuls f0, f0, f27
    mr r10, r14
    stfs f0, 0x14(r1)
    bl fn_80059A40
    add r22, r22, r3
    cmpw r22, r16
    blt lbl_fn_8005A5FC_00000ED8
    mr r3, r22
    b lbl_fn_8005A5FC_00000F38
lbl_fn_8005A5FC_00000ED8:
    mulli r0, r3, 0x50
    add r15, r15, r0
lbl_fn_8005A5FC_00000EE0:
    lwz r6, 0x38(r18)
    cmpwi r6, 0x0
    beq lbl_fn_8005A5FC_00000F28
    mr r3, r15
    mr r5, r17
    mr r9, r21
    mr r10, r14
    subf r4, r22, r16
    addi r7, r1, 0x298
    addi r8, r1, 0x48
    bl fn_8005A5FC
    add r22, r22, r3
    cmpw r22, r16
    blt lbl_fn_8005A5FC_00000F20
    mr r3, r22
    b lbl_fn_8005A5FC_00000F38
lbl_fn_8005A5FC_00000F20:
    mulli r0, r3, 0x50
    add r15, r15, r0
lbl_fn_8005A5FC_00000F28:
    lwz r18, 0x3c(r18)
lbl_fn_8005A5FC_00000F2C:
    cmpwi r18, 0x0
    bne lbl_fn_8005A5FC_00000B34
    mr r3, r22
lbl_fn_8005A5FC_00000F38:
    addi r11, r1, 0x320
    psq_l f31, 0x368(r1), 0, 0
    lfd f31, 0x360(r1)
    psq_l f30, 0x358(r1), 0, 0
    lfd f30, 0x350(r1)
    psq_l f29, 0x348(r1), 0, 0
    lfd f29, 0x340(r1)
    psq_l f28, 0x338(r1), 0, 0
    lfd f28, 0x330(r1)
    psq_l f27, 0x328(r1), 0, 0
    lfd f27, 0x320(r1)
    bl _restgpr_14
    lwz r0, 0x374(r1)
    mtlr r0
    addi r1, r1, 0x370
    blr
}

asm void fn_8005AAD4(void)
{
    nofralloc
    lwz r6, 0x14(r6)
    b fn_8005AADC
}

asm void fn_8005AADC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_21
    lfs f5, 0x0(r5)
    mr r25, r3
    lfs f4, 0xc(r5)
    mr r26, r4
    lfs f1, 0x4(r6)
    mr r27, r5
    fadds f0, f5, f4
    mr r28, r6
    mr r29, r7
    mr r30, r8
    li r31, 0x0
    fcmpo cr0, f1, f0
    ble lbl_fn_8005AADC_00000FD8
    li r0, 0x0
    b lbl_fn_8005AADC_0000105C
lbl_fn_8005AADC_00000FD8:
    lfs f3, 0x4(r5)
    lfs f1, 0x8(r6)
    fadds f0, f3, f4
    fcmpo cr0, f1, f0
    ble lbl_fn_8005AADC_00000FF4
    li r0, 0x0
    b lbl_fn_8005AADC_0000105C
lbl_fn_8005AADC_00000FF4:
    lfs f2, 0x8(r5)
    lfs f1, 0xc(r6)
    fadds f0, f2, f4
    fcmpo cr0, f1, f0
    ble lbl_fn_8005AADC_00001010
    li r0, 0x0
    b lbl_fn_8005AADC_0000105C
lbl_fn_8005AADC_00001010:
    fsubs f0, f5, f4
    lfs f1, 0x10(r6)
    fcmpo cr0, f1, f0
    bge lbl_fn_8005AADC_00001028
    li r0, 0x0
    b lbl_fn_8005AADC_0000105C
lbl_fn_8005AADC_00001028:
    fsubs f0, f3, f4
    lfs f1, 0x14(r6)
    fcmpo cr0, f1, f0
    bge lbl_fn_8005AADC_00001040
    li r0, 0x0
    b lbl_fn_8005AADC_0000105C
lbl_fn_8005AADC_00001040:
    fsubs f0, f2, f4
    lfs f1, 0x18(r6)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_8005AADC_0000105C:
    cmpwi r0, 0x0
    beq lbl_fn_8005AADC_000011F4
    lwz r24, 0x3c(r6)
    li r23, 0x0
    b lbl_fn_8005AADC_000010EC
lbl_fn_8005AADC_00001070:
    cmpw r31, r26
    lwz r22, 0x0(r24)
    blt lbl_fn_8005AADC_00001084
    mr r3, r31
    b lbl_fn_8005AADC_000011F8
lbl_fn_8005AADC_00001084:
    lwz r21, 0x0(r22)
    lwz r0, 0x4(r21)
    and. r0, r29, r0
    bne lbl_fn_8005AADC_000010E4
    cmpwi r30, 0x0
    blt lbl_fn_8005AADC_000010A8
    lwz r0, 0x0(r21)
    cmplw r30, r0
    bne lbl_fn_8005AADC_000010E4
lbl_fn_8005AADC_000010A8:
    mr r3, r25
    mr r4, r27
    addi r5, r22, 0x8
    bl fn_80053254
    cmpwi r3, 0x0
    beq lbl_fn_8005AADC_000010E4
    addi r31, r31, 0x1
    stw r21, 0x34(r25)
    cmpw r31, r26
    addi r0, r22, 0x8
    stw r0, 0x40(r25)
    blt lbl_fn_8005AADC_000010E0
    mr r3, r31
    b lbl_fn_8005AADC_000011F8
lbl_fn_8005AADC_000010E0:
    addi r25, r25, 0x50
lbl_fn_8005AADC_000010E4:
    addi r24, r24, 0x4
    addi r23, r23, 0x1
lbl_fn_8005AADC_000010EC:
    lwz r0, 0x0(r28)
    cmpw r23, r0
    blt lbl_fn_8005AADC_00001070
    lfs f3, 0xc(r28)
    li r21, 0x0
    lfs f0, 0x18(r28)
    lfs f4, 0xc(r27)
    lfs f5, 0x8(r27)
    fadds f2, f3, f0
    lfs f1, lbl_80880990
    fadds f0, f5, f4
    fmuls f31, f1, f2
    fcmpo cr0, f3, f0
    ble lbl_fn_8005AADC_0000112C
    li r0, 0x0
    b lbl_fn_8005AADC_00001144
lbl_fn_8005AADC_0000112C:
    fsubs f0, f5, f4
    fcmpo cr0, f31, f0
    mfcr r0
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_8005AADC_00001144:
    cmpwi r0, 0x0
    bne lbl_fn_8005AADC_00001150
    li r21, 0x4
lbl_fn_8005AADC_00001150:
    slwi r0, r21, 2
    add r24, r28, r0
    b lbl_fn_8005AADC_000011EC
lbl_fn_8005AADC_0000115C:
    lwz r6, 0x1c(r24)
    cmpwi r6, 0x0
    beq lbl_fn_8005AADC_0000119C
    mr r3, r25
    mr r5, r27
    mr r7, r29
    mr r8, r30
    subf r4, r31, r26
    bl fn_8005AADC
    add r31, r31, r3
    cmpw r31, r26
    blt lbl_fn_8005AADC_00001194
    mr r3, r31
    b lbl_fn_8005AADC_000011F8
lbl_fn_8005AADC_00001194:
    mulli r0, r3, 0x50
    add r25, r25, r0
lbl_fn_8005AADC_0000119C:
    cmpwi r21, 0x3
    bne lbl_fn_8005AADC_000011E4
    lfs f2, 0xc(r27)
    lfs f3, 0x8(r27)
    lfs f1, 0x18(r28)
    fadds f0, f3, f2
    fcmpo cr0, f31, f0
    ble lbl_fn_8005AADC_000011C4
    li r0, 0x0
    b lbl_fn_8005AADC_000011DC
lbl_fn_8005AADC_000011C4:
    fsubs f0, f3, f2
    fcmpo cr0, f1, f0
    mfcr r0
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_8005AADC_000011DC:
    cmpwi r0, 0x0
    beq lbl_fn_8005AADC_000011F4
lbl_fn_8005AADC_000011E4:
    addi r24, r24, 0x4
    addi r21, r21, 0x1
lbl_fn_8005AADC_000011EC:
    cmpwi r21, 0x8
    blt lbl_fn_8005AADC_0000115C
lbl_fn_8005AADC_000011F4:
    mr r3, r31
lbl_fn_8005AADC_000011F8:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_21
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8005AD74(void)
{
    nofralloc
    lwz r6, 0x14(r6)
    b fn_8005AD7C
}

asm void fn_8005AD7C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_21
    lfs f1, 0x4(r6)
    mr r25, r3
    lfs f0, 0x0(r5)
    mr r26, r4
    mr r27, r5
    mr r28, r6
    fcmpo cr0, f1, f0
    mr r29, r7
    mr r30, r8
    li r31, 0x0
    ble lbl_fn_8005AD7C_0000127C
    lfs f0, 0xc(r5)
    fcmpo cr0, f1, f0
    ble lbl_fn_8005AD7C_0000127C
    li r0, 0x0
    b lbl_fn_8005AD7C_00001334
lbl_fn_8005AD7C_0000127C:
    lfs f1, 0x8(r6)
    lfs f0, 0x4(r5)
    fcmpo cr0, f1, f0
    ble lbl_fn_8005AD7C_000012A0
    lfs f0, 0x10(r5)
    fcmpo cr0, f1, f0
    ble lbl_fn_8005AD7C_000012A0
    li r0, 0x0
    b lbl_fn_8005AD7C_00001334
lbl_fn_8005AD7C_000012A0:
    lfs f1, 0xc(r6)
    lfs f0, 0x8(r5)
    fcmpo cr0, f1, f0
    ble lbl_fn_8005AD7C_000012C4
    lfs f0, 0x14(r5)
    fcmpo cr0, f1, f0
    ble lbl_fn_8005AD7C_000012C4
    li r0, 0x0
    b lbl_fn_8005AD7C_00001334
lbl_fn_8005AD7C_000012C4:
    lfs f1, 0x10(r6)
    lfs f0, 0x0(r5)
    fcmpo cr0, f1, f0
    bge lbl_fn_8005AD7C_000012E8
    lfs f0, 0xc(r5)
    fcmpo cr0, f1, f0
    bge lbl_fn_8005AD7C_000012E8
    li r0, 0x0
    b lbl_fn_8005AD7C_00001334
lbl_fn_8005AD7C_000012E8:
    lfs f1, 0x14(r6)
    lfs f0, 0x4(r5)
    fcmpo cr0, f1, f0
    bge lbl_fn_8005AD7C_0000130C
    lfs f0, 0x10(r5)
    fcmpo cr0, f1, f0
    bge lbl_fn_8005AD7C_0000130C
    li r0, 0x0
    b lbl_fn_8005AD7C_00001334
lbl_fn_8005AD7C_0000130C:
    lfs f1, 0x18(r6)
    lfs f0, 0x8(r5)
    fcmpo cr0, f1, f0
    bge lbl_fn_8005AD7C_00001330
    lfs f0, 0x14(r5)
    fcmpo cr0, f1, f0
    bge lbl_fn_8005AD7C_00001330
    li r0, 0x0
    b lbl_fn_8005AD7C_00001334
lbl_fn_8005AD7C_00001330:
    li r0, 0x1
lbl_fn_8005AD7C_00001334:
    cmpwi r0, 0x0
    beq lbl_fn_8005AD7C_000014DC
    lwz r24, 0x3c(r6)
    li r23, 0x0
    b lbl_fn_8005AD7C_000013C4
lbl_fn_8005AD7C_00001348:
    cmpw r31, r26
    lwz r22, 0x0(r24)
    blt lbl_fn_8005AD7C_0000135C
    mr r3, r31
    b lbl_fn_8005AD7C_000014E0
lbl_fn_8005AD7C_0000135C:
    lwz r21, 0x0(r22)
    lwz r0, 0x4(r21)
    and. r0, r29, r0
    bne lbl_fn_8005AD7C_000013BC
    cmpwi r30, 0x0
    blt lbl_fn_8005AD7C_00001380
    lwz r0, 0x0(r21)
    cmplw r30, r0
    bne lbl_fn_8005AD7C_000013BC
lbl_fn_8005AD7C_00001380:
    mr r3, r25
    mr r4, r27
    addi r5, r22, 0x8
    bl fn_80054038
    cmpwi r3, 0x0
    beq lbl_fn_8005AD7C_000013BC
    addi r31, r31, 0x1
    stw r21, 0x34(r25)
    cmpw r31, r26
    addi r0, r22, 0x8
    stw r0, 0x40(r25)
    blt lbl_fn_8005AD7C_000013B8
    mr r3, r31
    b lbl_fn_8005AD7C_000014E0
lbl_fn_8005AD7C_000013B8:
    addi r25, r25, 0x50
lbl_fn_8005AD7C_000013BC:
    addi r24, r24, 0x4
    addi r23, r23, 0x1
lbl_fn_8005AD7C_000013C4:
    lwz r0, 0x0(r28)
    cmpw r23, r0
    blt lbl_fn_8005AD7C_00001348
    lfs f2, 0xc(r28)
    li r21, 0x0
    lfs f0, 0x18(r28)
    lfs f3, 0x8(r27)
    fadds f1, f2, f0
    lfs f0, lbl_80880990
    fcmpo cr0, f2, f3
    lfs f4, 0x14(r27)
    fmuls f31, f0, f1
    ble lbl_fn_8005AD7C_00001408
    fcmpo cr0, f2, f4
    ble lbl_fn_8005AD7C_00001408
    li r0, 0x0
    b lbl_fn_8005AD7C_00001424
lbl_fn_8005AD7C_00001408:
    fcmpo cr0, f31, f3
    bge lbl_fn_8005AD7C_00001420
    fcmpo cr0, f31, f4
    bge lbl_fn_8005AD7C_00001420
    li r0, 0x0
    b lbl_fn_8005AD7C_00001424
lbl_fn_8005AD7C_00001420:
    li r0, 0x1
lbl_fn_8005AD7C_00001424:
    cmpwi r0, 0x0
    bne lbl_fn_8005AD7C_00001430
    li r21, 0x4
lbl_fn_8005AD7C_00001430:
    slwi r0, r21, 2
    add r24, r28, r0
    b lbl_fn_8005AD7C_000014D4
lbl_fn_8005AD7C_0000143C:
    lwz r6, 0x1c(r24)
    cmpwi r6, 0x0
    beq lbl_fn_8005AD7C_0000147C
    mr r3, r25
    mr r5, r27
    mr r7, r29
    mr r8, r30
    subf r4, r31, r26
    bl fn_8005AD7C
    add r31, r31, r3
    cmpw r31, r26
    blt lbl_fn_8005AD7C_00001474
    mr r3, r31
    b lbl_fn_8005AD7C_000014E0
lbl_fn_8005AD7C_00001474:
    mulli r0, r3, 0x50
    add r25, r25, r0
lbl_fn_8005AD7C_0000147C:
    cmpwi r21, 0x3
    bne lbl_fn_8005AD7C_000014CC
    lfs f1, 0x8(r27)
    lfs f0, 0x18(r28)
    fcmpo cr0, f31, f1
    lfs f2, 0x14(r27)
    ble lbl_fn_8005AD7C_000014A8
    fcmpo cr0, f31, f2
    ble lbl_fn_8005AD7C_000014A8
    li r0, 0x0
    b lbl_fn_8005AD7C_000014C4
lbl_fn_8005AD7C_000014A8:
    fcmpo cr0, f0, f1
    bge lbl_fn_8005AD7C_000014C0
    fcmpo cr0, f0, f2
    bge lbl_fn_8005AD7C_000014C0
    li r0, 0x0
    b lbl_fn_8005AD7C_000014C4
lbl_fn_8005AD7C_000014C0:
    li r0, 0x1
lbl_fn_8005AD7C_000014C4:
    cmpwi r0, 0x0
    beq lbl_fn_8005AD7C_000014DC
lbl_fn_8005AD7C_000014CC:
    addi r24, r24, 0x4
    addi r21, r21, 0x1
lbl_fn_8005AD7C_000014D4:
    cmpwi r21, 0x8
    blt lbl_fn_8005AD7C_0000143C
lbl_fn_8005AD7C_000014DC:
    mr r3, r31
lbl_fn_8005AD7C_000014E0:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_21
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
