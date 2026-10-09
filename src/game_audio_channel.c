#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB5C8(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_8012DB04(void);
extern void fn_801426A4(void);
extern void fn_80148B0C(void);
extern void fn_80158BB4(void);
extern void fn_8016E970(void);
extern void fn_8017039C(void);
extern void fn_80170A20(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_802F8EBC(void);
extern void fn_802FB6AC(void);
extern void fn_802FBA30(void);
extern void fn_802FBE00(void);
extern void fn_802FC2E0(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_80748760[];
extern u8 lbl_80748768[];
extern u8 lbl_80748780[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_80884978;
extern u32 lbl_80884980;
extern u32 lbl_80884990;
extern u32 lbl_80884994;
extern u32 lbl_80884998;
extern u32 lbl_808849A0;
extern u32 lbl_808849AC;
extern u32 lbl_808849B0;
extern u32 lbl_808849CC;
extern u32 lbl_808849D4;
extern u32 lbl_808849D8;
extern u32 lbl_808849E0;
extern u32 lbl_808849E4;
extern u32 lbl_808849E8;
extern u32 lbl_808849EC;
extern u32 lbl_808849F0;
extern u32 lbl_808849F4;
extern u32 lbl_808849F8;
extern u32 lbl_808849FC;
extern u32 lbl_80884A00;
extern u32 lbl_80884A04;
extern u32 lbl_80884A08;
extern u32 lbl_80884A0C;

/* Function declarations */
void fn_802F97B8(void);
void fn_802F9F3C(void);
void fn_802FA2F4(void);
void fn_802FA764(void);
void fn_802FB0C4(void);

asm void fn_802F97B8(void)
{
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    stfd f31, 0x2d0(r1)
    psq_st f31, 0x2d8(r1), 0, 0
    stfd f30, 0x2c0(r1)
    psq_st f30, 0x2c8(r1), 0, 0
    stfd f29, 0x2b0(r1)
    psq_st f29, 0x2b8(r1), 0, 0
    stfd f28, 0x2a0(r1)
    psq_st f28, 0x2a8(r1), 0, 0
    stfd f27, 0x290(r1)
    psq_st f27, 0x298(r1), 0, 0
    stfd f26, 0x280(r1)
    psq_st f26, 0x288(r1), 0, 0
    stw r31, 0x27c(r1)
    mr r31, r3
    stw r30, 0x278(r1)
    lwz r0, 0x15cc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802F97B8_00000068
    cmpwi r0, 0x1
    beq lbl_fn_802F97B8_00000180
    cmpwi r0, 0x2
    beq lbl_fn_802F97B8_0000021C
    b lbl_fn_802F97B8_0000073C
lbl_fn_802F97B8_00000068:
    lfs f7, 0x2e4(r3)
    lfs f0, lbl_808849E4
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_802F97B8_00000084
    li r0, 0x1
    stw r0, 0x1538(r3)
lbl_fn_802F97B8_00000084:
    lfs f26, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f26, f1
    cror eq, gt, eq
    bne lbl_fn_802F97B8_0000073C
    li r30, 0x1
    stw r30, 0x15cc(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80884980
    li r0, -0x1
    lfs f1, lbl_80884994
    addi r4, r31, 0x1520
    stfs f0, 0x68(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x5c
    addi r8, r1, 0x68
    stfs f0, 0x6c(r1)
    addi r9, r1, 0x78
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x70(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f1, 0x78(r1)
    stfs f1, 0x7c(r1)
    stfs f1, 0x80(r1)
    stfs f1, 0x84(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lfs f1, lbl_80884994
    addi r3, r1, 0x10
    addi r4, r31, 0x14fc
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r31, 0x151c
    addi r4, r1, 0x10
    bl fn_800CB440
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lfs f0, lbl_80884994
    addi r3, r31, 0xb0
    stw r30, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_80884980
    li r5, 0x143
    stfs f0, 0x2fc(r31)
    li r6, 0x1
    lfs f2, lbl_808849CC
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802F97B8_0000073C
lbl_fn_802F97B8_00000180:
    lwz r4, 0x15d8(r3)
    li r30, 0x1
    lwz r0, 0x14e8(r3)
    addi r4, r4, 0x1
    stw r4, 0x15d8(r3)
    cmpw r4, r0
    stw r30, 0x1538(r3)
    blt lbl_fn_802F97B8_0000073C
    li r4, 0x2
    li r0, 0x0
    stw r4, 0x15cc(r3)
    li r4, 0x6
    stw r0, 0x15d8(r3)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    mr r4, r31
    li r5, 0x0
    lwz r3, lbl_8087F3C0
    li r6, 0x1
    bl fn_80239DAC
    addi r3, r31, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lfs f0, lbl_80884994
    addi r3, r31, 0xb0
    stw r30, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_80884980
    li r5, 0x144
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    lfs f2, lbl_808849CC
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802F97B8_0000073C
lbl_fn_802F97B8_0000021C:
    bl fn_80158BB4
    cmpwi r3, 0x0
    beq lbl_fn_802F97B8_00000298
    lwz r3, 0x14f4(r31)
    li r0, 0x0
    stw r0, 0x14b0(r31)
    cmpwi r3, 0x0
    stw r0, 0x15cc(r31)
    beq lbl_fn_802F97B8_00000248
    lwz r0, 0x68(r3)
    b lbl_fn_802F97B8_0000024C
lbl_fn_802F97B8_00000248:
    li r0, 0x5a
lbl_fn_802F97B8_0000024C:
    stw r0, 0x15d4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_802F97B8_00000724
lbl_fn_802F97B8_00000298:
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_808849E8
    fcmpo cr0, f0, f7
    bge lbl_fn_802F97B8_000002D8
    lfs f0, lbl_808849EC
    fcmpo cr0, f7, f0
    bge lbl_fn_802F97B8_000002D8
    lwz r3, 0x15d8(r31)
    lwz r0, 0x14ec(r31)
    addi r3, r3, 0x1
    stw r3, 0x15d8(r31)
    cmpw r3, r0
    bge lbl_fn_802F97B8_00000724
    lfs f0, lbl_808849A0
    stfs f0, 0x2e4(r31)
    b lbl_fn_802F97B8_00000724
lbl_fn_802F97B8_000002D8:
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_808849F0
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_802F97B8_00000724
    lfs f0, lbl_808849F4
    fcmpo cr0, f7, f0
    bge lbl_fn_802F97B8_00000724
    lwz r3, 0x15bc(r31)
    li r4, 0x0
    bl fn_80148B0C
    lfs f7, 0xc(r3)
    addi r4, r1, 0x88
    lfs f0, 0x530(r31)
    addi r30, r1, 0xac
    lfs f9, 0x8(r3)
    fsubs f2, f7, f0
    lfs f8, 0x52c(r31)
    lfs f7, 0x4(r3)
    fsubs f8, f9, f8
    lfs f0, 0x528(r31)
    stfs f2, 0x90(r1)
    fsubs f7, f7, f0
    lfs f0, lbl_80884998
    stfs f8, 0x8c(r1)
    frsp f8, f2
    stfs f7, 0x88(r1)
    fabs f7, f8
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f7, f7
    stfs f2, 0xb4(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_802F97B8_00000384
    lfs f7, 0xac(r1)
    lfs f0, lbl_80884980
    fcmpo cr0, f7, f0
    ble lbl_fn_802F97B8_00000378
    lfs f0, lbl_808849D4
    b lbl_fn_802F97B8_0000037C
lbl_fn_802F97B8_00000378:
    lfs f0, lbl_808849D8
lbl_fn_802F97B8_0000037C:
    stfs f0, 0x54(r1)
    b lbl_fn_802F97B8_00000398
lbl_fn_802F97B8_00000384:
    fmr f2, f8
    lfs f1, 0xac(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x54(r1)
lbl_fn_802F97B8_00000398:
    lfs f0, 0x54(r1)
    addi r3, r1, 0x1d8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80884980
    addi r4, r1, 0x44
    lfs f26, 0x1e0(r1)
    mr r5, r4
    lfs f27, 0x1dc(r1)
    addi r3, r1, 0x208
    lfs f28, 0x1d8(r1)
    lfs f29, 0x1f0(r1)
    lfs f30, 0x1ec(r1)
    lfs f31, 0x1e8(r1)
    lfs f13, 0x200(r1)
    lfs f12, 0x1fc(r1)
    lfs f11, 0x1f8(r1)
    lfs f10, 0x204(r1)
    lfs f9, 0x1f4(r1)
    lfs f8, 0x1e4(r1)
    lfs f0, lbl_80884994
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xb4(r1)
    stfs f7, 0x238(r1)
    stfs f7, 0x23c(r1)
    stfs f7, 0x240(r1)
    stfs f0, 0x244(r1)
    stfs f28, 0x14(r1)
    stfs f27, 0x18(r1)
    stfs f26, 0x1c(r1)
    stfs f28, 0x208(r1)
    stfs f27, 0x20c(r1)
    stfs f26, 0x210(r1)
    stfs f31, 0x20(r1)
    stfs f30, 0x24(r1)
    stfs f29, 0x28(r1)
    stfs f31, 0x218(r1)
    stfs f30, 0x21c(r1)
    stfs f29, 0x220(r1)
    stfs f11, 0x2c(r1)
    stfs f12, 0x30(r1)
    stfs f13, 0x34(r1)
    stfs f11, 0x228(r1)
    stfs f12, 0x22c(r1)
    stfs f13, 0x230(r1)
    stfs f8, 0x38(r1)
    stfs f9, 0x3c(r1)
    stfs f10, 0x40(r1)
    stfs f8, 0x214(r1)
    stfs f9, 0x224(r1)
    stfs f10, 0x234(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F9750
    lfs f2, 0x4c(r1)
    lfs f0, lbl_80884998
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_802F97B8_000004B4
    lfs f7, 0x48(r1)
    lfs f0, lbl_80884980
    fcmpo cr0, f7, f0
    ble lbl_fn_802F97B8_000004A4
    lfs f0, lbl_808849D4
    b lbl_fn_802F97B8_000004A8
lbl_fn_802F97B8_000004A4:
    lfs f0, lbl_808849D8
lbl_fn_802F97B8_000004A8:
    fneg f0, f0
    stfs f0, 0x50(r1)
    b lbl_fn_802F97B8_000004C8
lbl_fn_802F97B8_000004B4:
    lfs f1, 0x48(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x50(r1)
lbl_fn_802F97B8_000004C8:
    addi r3, r1, 0x50
    lfs f2, lbl_80884980
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0x538(r31)
    lfs f9, 0xb0(r1)
    lfs f8, 0x14f8(r31)
    lfs f7, lbl_80884990
    fsubs f9, f9, f0
    stfs f2, 0x58(r1)
    fmuls f0, f8, f7
    stfs f2, 0xb4(r1)
    fcmpo cr0, f9, f0
    cror eq, gt, eq
    bne lbl_fn_802F97B8_0000050C
    stfs f0, 0xb0(r1)
    b lbl_fn_802F97B8_00000524
lbl_fn_802F97B8_0000050C:
    fneg f0, f8
    fmuls f0, f0, f7
    fcmpo cr0, f9, f0
    cror eq, lt, eq
    bne lbl_fn_802F97B8_00000524
    stfs f0, 0xb0(r1)
lbl_fn_802F97B8_00000524:
    lfs f7, lbl_80884980
    addi r30, r1, 0x248
    lfs f1, 0xb4(r1)
    lfs f0, lbl_80884994
    fcmpu cr0, f7, f1
    stfs f7, 0x274(r1)
    stfs f7, 0x26c(r1)
    stfs f7, 0x268(r1)
    stfs f7, 0x264(r1)
    stfs f7, 0x260(r1)
    stfs f7, 0x258(r1)
    stfs f7, 0x254(r1)
    stfs f7, 0x250(r1)
    stfs f7, 0x24c(r1)
    stfs f0, 0x270(r1)
    stfs f0, 0x25c(r1)
    stfs f0, 0x248(r1)
    beq lbl_fn_802F97B8_000005BC
    addi r3, r1, 0xe8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xe8
    addi r5, r1, 0xb8
    bl fn_805F89F0
    addi r3, r1, 0xb8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_802F97B8_000005BC:
    lfs f0, lbl_80884980
    lfs f1, 0xb0(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_802F97B8_0000061C
    addi r3, r1, 0x148
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x148
    addi r5, r1, 0x118
    bl fn_805F89F0
    addi r3, r1, 0x118
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_802F97B8_0000061C:
    lfs f0, lbl_80884980
    lfs f1, 0xac(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_802F97B8_0000067C
    addi r3, r1, 0x1a8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x1a8
    addi r5, r1, 0x178
    bl fn_805F89F0
    addi r3, r1, 0x178
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_802F97B8_0000067C:
    lis r4, lbl_80748780@ha
    addi r30, r31, 0xb0
    addi r4, r4, lbl_80748780@l
    li r5, 0x0
    mr r3, r30
    addi r4, r4, 0x217
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802F97B8_000006A8
    li r3, 0x0
    b lbl_fn_802F97B8_000006B4
lbl_fn_802F97B8_000006A8:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r30)
    add r3, r3, r0
lbl_fn_802F97B8_000006B4:
    lfs f8, 0x2c(r3)
    addi r4, r1, 0x94
    lfs f9, 0x1c(r3)
    mr r5, r4
    lfs f10, 0xc(r3)
    addi r3, r1, 0x248
    lfs f7, lbl_80884980
    lfs f0, lbl_808849E0
    stfs f10, 0xa0(r1)
    stfs f9, 0xa4(r1)
    stfs f8, 0xa8(r1)
    stfs f7, 0x94(r1)
    stfs f7, 0x98(r1)
    stfs f0, 0x9c(r1)
    bl fn_805F93C0
    lwz r5, 0x14f4(r31)
    cmpwi r5, 0x0
    beq lbl_fn_802F97B8_00000724
    lwz r3, lbl_8087F048
    mr r4, r31
    lfs f1, lbl_80884980
    addi r6, r1, 0xa0
    lfs f2, lbl_80884994
    addi r7, r1, 0x94
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
lbl_fn_802F97B8_00000724:
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_808849F8
    fcmpo cr0, f7, f0
    bge lbl_fn_802F97B8_0000073C
    li r0, 0x1
    stw r0, 0x1538(r31)
lbl_fn_802F97B8_0000073C:
    lwz r0, 0x2e4(r1)
    psq_l f31, 0x2d8(r1), 0, 0
    lfd f31, 0x2d0(r1)
    psq_l f30, 0x2c8(r1), 0, 0
    lfd f30, 0x2c0(r1)
    psq_l f29, 0x2b8(r1), 0, 0
    lfd f29, 0x2b0(r1)
    psq_l f28, 0x2a8(r1), 0, 0
    lfd f28, 0x2a0(r1)
    psq_l f27, 0x298(r1), 0, 0
    lfd f27, 0x290(r1)
    psq_l f26, 0x288(r1), 0, 0
    lfd f26, 0x280(r1)
    lwz r31, 0x27c(r1)
    lwz r30, 0x278(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

asm void fn_802F9F3C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802F9F3C_00000A38
    lwz r0, 0x153c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_802F9F3C_000007F4
    cmpwi r0, 0x7
    beq lbl_fn_802F9F3C_00000864
    cmpwi r0, 0x8
    beq lbl_fn_802F9F3C_00000874
    cmpwi r0, 0xa
    beq lbl_fn_802F9F3C_00000884
    cmpwi r0, 0xb
    beq lbl_fn_802F9F3C_00000948
    cmpwi r0, 0xc
    beq lbl_fn_802F9F3C_00000A28
    b lbl_fn_802F9F3C_00000B20
lbl_fn_802F9F3C_000007F4:
    lwz r3, 0x14f4(r31)
    li r0, 0x0
    stw r0, 0x14b0(r31)
    cmpwi r3, 0x0
    stw r0, 0x15cc(r31)
    beq lbl_fn_802F9F3C_00000814
    lwz r0, 0x68(r3)
    b lbl_fn_802F9F3C_00000818
lbl_fn_802F9F3C_00000814:
    li r0, 0x5a
lbl_fn_802F9F3C_00000818:
    stw r0, 0x15d4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_802F9F3C_00000B20
lbl_fn_802F9F3C_00000864:
    lwz r4, 0x15c4(r31)
    mr r3, r31
    bl fn_802FB6AC
    b lbl_fn_802F9F3C_00000B20
lbl_fn_802F9F3C_00000874:
    lwz r4, 0x15c4(r31)
    mr r3, r31
    bl fn_802FBA30
    b lbl_fn_802F9F3C_00000B20
lbl_fn_802F9F3C_00000884:
    lwz r4, 0x15c4(r31)
    mr r3, r31
    li r5, 0xa
    bl fn_802FBE00
    cmpwi r3, 0x0
    bne lbl_fn_802F9F3C_00000B20
    lwz r3, 0x14f4(r31)
    li r0, 0x0
    stw r0, 0x14b0(r31)
    cmpwi r3, 0x0
    stw r0, 0x15cc(r31)
    beq lbl_fn_802F9F3C_000008BC
    lwz r0, 0x68(r3)
    b lbl_fn_802F9F3C_000008C0
lbl_fn_802F9F3C_000008BC:
    li r0, 0x5a
lbl_fn_802F9F3C_000008C0:
    stw r0, 0x15d4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0xa
    stw r0, 0x58c(r31)
    lfs f1, lbl_80884980
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_80884994
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884980
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14
    lfs f2, lbl_808849CC
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802F9F3C_00000B20
lbl_fn_802F9F3C_00000948:
    lwz r4, 0x15bc(r31)
    mr r3, r31
    li r5, 0xb
    bl fn_802FBE00
    cmpwi r3, 0x0
    bne lbl_fn_802F9F3C_00000B20
    lwz r3, 0x14f4(r31)
    li r0, 0x0
    stw r0, 0x14b0(r31)
    cmpwi r3, 0x0
    stw r0, 0x15cc(r31)
    beq lbl_fn_802F9F3C_00000980
    lwz r0, 0x68(r3)
    b lbl_fn_802F9F3C_00000984
lbl_fn_802F9F3C_00000980:
    li r0, 0x5a
lbl_fn_802F9F3C_00000984:
    stw r0, 0x15d4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0xb
    stw r0, 0x58c(r31)
    lfs f1, lbl_80884980
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_80884994
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884980
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14
    lfs f2, lbl_808849CC
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x1530(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802F9F3C_00000A1C
    lwz r0, 0x68(r3)
    b lbl_fn_802F9F3C_00000A20
lbl_fn_802F9F3C_00000A1C:
    li r0, 0x3c
lbl_fn_802F9F3C_00000A20:
    stw r0, 0x15d0(r31)
    b lbl_fn_802F9F3C_00000B20
lbl_fn_802F9F3C_00000A28:
    lwz r4, 0x15bc(r31)
    mr r3, r31
    bl fn_802FC2E0
    b lbl_fn_802F9F3C_00000B20
lbl_fn_802F9F3C_00000A38:
    lfs f1, 0x2e4(r31)
    lfs f0, lbl_808849B0
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_802F9F3C_00000B20
    lfs f0, lbl_808849FC
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_802F9F3C_00000B20
    lfs f1, 0x1548(r31)
    lis r3, lbl_80748768@ha
    lfs f0, 0x1544(r31)
    lwz r4, 0x1540(r31)
    fsubs f1, f1, f0
    lfd f2, lbl_80748768@l(r3)
    addi r0, r4, 0x2
    stw r0, 0x1540(r31)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_80884A00
    fcmpo cr0, f4, f0
    ble lbl_fn_802F9F3C_00000A98
    lfs f0, lbl_80884A04
    fsubs f4, f4, f0
lbl_fn_802F9F3C_00000A98:
    lfs f0, lbl_80884A08
    fcmpo cr0, f4, f0
    bge lbl_fn_802F9F3C_00000AAC
    lfs f0, lbl_80884A04
    fadds f4, f4, f0
lbl_fn_802F9F3C_00000AAC:
    lwz r4, 0x1540(r31)
    lis r0, 0x4330
    lis r5, lbl_80748760@ha
    stw r0, 0x8(r1)
    xoris r4, r4, 0x8000
    lfd f3, lbl_80748760@l(r5)
    stw r4, 0xc(r1)
    lis r3, lbl_80748768@ha
    lfs f1, lbl_808849A0
    lfd f2, 0x8(r1)
    lfs f0, 0x1544(r31)
    fsubs f3, f2, f3
    lfd f2, lbl_80748768@l(r3)
    fmuls f3, f3, f4
    fdivs f1, f3, f1
    fadds f1, f0, f1
    bl fn_8068AEA8
    frsp f1, f1
    lfs f0, lbl_80884A00
    fcmpo cr0, f1, f0
    ble lbl_fn_802F9F3C_00000B08
    lfs f0, lbl_80884A04
    fsubs f1, f1, f0
lbl_fn_802F9F3C_00000B08:
    lfs f0, lbl_80884A08
    fcmpo cr0, f1, f0
    bge lbl_fn_802F9F3C_00000B1C
    lfs f0, lbl_80884A04
    fadds f1, f1, f0
lbl_fn_802F9F3C_00000B1C:
    stfs f1, 0x538(r31)
lbl_fn_802F9F3C_00000B20:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802FA2F4(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stfd f29, 0x100(r1)
    psq_st f29, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    mr r31, r3
    stw r30, 0xf8(r1)
    lwz r4, 0x15bc(r3)
    lfs f0, 0x530(r3)
    lfs f4, 0x530(r4)
    lfs f3, 0x528(r4)
    fsubs f5, f4, f0
    lfs f0, 0x528(r3)
    lfs f4, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f3, 0x52c(r3)
    fmuls f0, f5, f5
    fsubs f3, f4, f3
    stfs f6, 0x5c(r1)
    fmadds f1, f6, f6, f0
    stfs f3, 0x60(r1)
    stfs f5, 0x64(r1)
    bl fn_8068B100
    lfs f2, 0x64(r1)
    addi r3, r1, 0x5c
    frsp f31, f1
    lfs f0, lbl_80884998
    fabs f3, f2
    addi r30, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802FA2F4_00000C00
    lfs f3, 0x50(r1)
    lfs f0, lbl_80884980
    fcmpo cr0, f3, f0
    ble lbl_fn_802FA2F4_00000BF4
    lfs f0, lbl_808849D4
    b lbl_fn_802FA2F4_00000BF8
lbl_fn_802FA2F4_00000BF4:
    lfs f0, lbl_808849D8
lbl_fn_802FA2F4_00000BF8:
    stfs f0, 0x48(r1)
    b lbl_fn_802FA2F4_00000C14
lbl_fn_802FA2F4_00000C00:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802FA2F4_00000C14:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884980
    addi r4, r1, 0x38
    lfs f29, 0x80(r1)
    mr r5, r4
    lfs f30, 0x7c(r1)
    addi r3, r1, 0xa8
    lfs f13, 0x78(r1)
    lfs f12, 0x90(r1)
    lfs f11, 0x8c(r1)
    lfs f10, 0x88(r1)
    lfs f9, 0xa0(r1)
    lfs f8, 0x9c(r1)
    lfs f7, 0x98(r1)
    lfs f6, 0xa4(r1)
    lfs f5, 0x94(r1)
    lfs f4, 0x84(r1)
    lfs f0, lbl_80884994
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xd8(r1)
    stfs f3, 0xdc(r1)
    stfs f3, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0xa8(r1)
    stfs f30, 0xac(r1)
    stfs f29, 0xb0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xb8(r1)
    stfs f11, 0xbc(r1)
    stfs f12, 0xc0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xc8(r1)
    stfs f8, 0xcc(r1)
    stfs f9, 0xd0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xb4(r1)
    stfs f5, 0xc4(r1)
    stfs f6, 0xd4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80884998
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802FA2F4_00000D30
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884980
    fcmpo cr0, f3, f0
    ble lbl_fn_802FA2F4_00000D20
    lfs f0, lbl_808849D4
    b lbl_fn_802FA2F4_00000D24
lbl_fn_802FA2F4_00000D20:
    lfs f0, lbl_808849D8
lbl_fn_802FA2F4_00000D24:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802FA2F4_00000D44
lbl_fn_802FA2F4_00000D30:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802FA2F4_00000D44:
    lfs f2, lbl_80884980
    addi r3, r1, 0x44
    lwz r5, 0x1530(r31)
    addi r4, r1, 0x68
    stfs f2, 0x4c(r1)
    psq_l f1, 0x0(r3), 0, 0
    cmpwi r5, 0x0
    stfs f2, 0x58(r1)
    frsp f2, f2
    lfs f29, lbl_80884978
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
    beq lbl_fn_802FA2F4_00000D80
    lfs f29, 0x40(r5)
lbl_fn_802FA2F4_00000D80:
    lwz r0, 0x15b0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802FA2F4_00000DE4
    lwz r4, 0x940(r31)
    lis r0, 0x4330
    stw r0, 0xe8(r1)
    lis r3, lbl_80748760@ha
    xoris r0, r4, 0x8000
    lfd f5, lbl_80748760@l(r3)
    stw r0, 0xec(r1)
    lfs f3, 0x7d8(r31)
    lfd f4, 0xe8(r1)
    lfs f0, 0x1594(r31)
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fcmpo cr0, f3, f0
    bge lbl_fn_802FA2F4_00000DE4
    lwz r4, 0x15bc(r31)
    cmpwi r4, 0x0
    beq lbl_fn_802FA2F4_00000DE4
    lwz r0, 0x12a4(r4)
    extrwi. r0, r0, 1, 3
    bne lbl_fn_802FA2F4_00000DE4
    mr r3, r31
    bl fn_802FC2E0
lbl_fn_802FA2F4_00000DE4:
    fcmpo cr0, f31, f29
    bge lbl_fn_802FA2F4_00000EF0
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x15bc(r31)
    mr r3, r31
    li r5, 0xb
    bl fn_802FBE00
    cmpwi r3, 0x0
    bne lbl_fn_802FA2F4_00000F7C
    lwz r4, 0x15bc(r31)
    mr r3, r31
    li r5, 0xb
    bl fn_802FBE00
    cmpwi r3, 0x0
    bne lbl_fn_802FA2F4_00000F7C
    lwz r3, 0x14f4(r31)
    li r0, 0x0
    stw r0, 0x14b0(r31)
    cmpwi r3, 0x0
    stw r0, 0x15cc(r31)
    beq lbl_fn_802FA2F4_00000E48
    lwz r0, 0x68(r3)
    b lbl_fn_802FA2F4_00000E4C
lbl_fn_802FA2F4_00000E48:
    li r0, 0x5a
lbl_fn_802FA2F4_00000E4C:
    stw r0, 0x15d4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0xb
    stw r0, 0x58c(r31)
    lfs f1, lbl_80884980
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_80884994
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884980
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14
    lfs f2, lbl_808849CC
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x1530(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802FA2F4_00000EE4
    lwz r0, 0x68(r3)
    b lbl_fn_802FA2F4_00000EE8
lbl_fn_802FA2F4_00000EE4:
    li r0, 0x3c
lbl_fn_802FA2F4_00000EE8:
    stw r0, 0x15d0(r31)
    b lbl_fn_802FA2F4_00000F7C
lbl_fn_802FA2F4_00000EF0:
    lfs f3, 0x152c(r31)
    fcmpo cr0, f31, f3
    ble lbl_fn_802FA2F4_00000F30
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x15bc(r31)
    mr r3, r31
    li r5, 0x8
    bl fn_802FBE00
    cmpwi r3, 0x0
    bne lbl_fn_802FA2F4_00000F7C
    lwz r4, 0x15bc(r31)
    mr r3, r31
    bl fn_802FBA30
    b lbl_fn_802FA2F4_00000F7C
lbl_fn_802FA2F4_00000F30:
    lwz r3, 0x55c(r31)
    subi r0, r3, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_802FA2F4_00000F74
    lfs f0, lbl_808849AC
    li r0, 0x3
    lfs f1, lbl_80884978
    mr r3, r31
    fmuls f0, f0, f3
    stw r0, 0x55c(r31)
    lwz r4, 0x15bc(r31)
    fcmpo cr0, f1, f0
    bge lbl_fn_802FA2F4_00000F68
    b lbl_fn_802FA2F4_00000F6C
lbl_fn_802FA2F4_00000F68:
    fmr f1, f0
lbl_fn_802FA2F4_00000F6C:
    li r5, 0x0
    bl fn_80170A20
lbl_fn_802FA2F4_00000F74:
    mr r3, r31
    bl fn_802F8EBC
lbl_fn_802FA2F4_00000F7C:
    lwz r0, 0x134(r1)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    psq_l f29, 0x108(r1), 0, 0
    lfd f29, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_802FA764(void)
{
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    stfd f31, 0x2d0(r1)
    psq_st f31, 0x2d8(r1), 0, 0
    stfd f30, 0x2c0(r1)
    psq_st f30, 0x2c8(r1), 0, 0
    lfs f30, lbl_80884994
    stfd f29, 0x2b0(r1)
    psq_st f29, 0x2b8(r1), 0, 0
    stfd f28, 0x2a0(r1)
    psq_st f28, 0x2a8(r1), 0, 0
    stw r31, 0x29c(r1)
    mr r31, r3
    stw r30, 0x298(r1)
    stw r29, 0x294(r1)
    lwz r4, 0x15bc(r3)
    lfs f0, 0x530(r3)
    lfs f4, 0x530(r4)
    lfs f3, 0x528(r4)
    fsubs f5, f4, f0
    lfs f0, 0x528(r3)
    lfs f4, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f3, 0x52c(r3)
    fmuls f0, f5, f5
    fsubs f3, f4, f3
    stfs f6, 0x11c(r1)
    fmadds f1, f6, f6, f0
    stfs f3, 0x120(r1)
    stfs f5, 0x124(r1)
    bl fn_8068B100
    lfs f2, 0x124(r1)
    addi r3, r1, 0x11c
    frsp f31, f1
    lfs f0, lbl_80884998
    fabs f3, f2
    addi r30, r1, 0x110
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x118(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802FA764_00001080
    lfs f3, 0x110(r1)
    lfs f0, lbl_80884980
    fcmpo cr0, f3, f0
    ble lbl_fn_802FA764_00001074
    lfs f0, lbl_808849D4
    b lbl_fn_802FA764_00001078
lbl_fn_802FA764_00001074:
    lfs f0, lbl_808849D8
lbl_fn_802FA764_00001078:
    stfs f0, 0xd8(r1)
    b lbl_fn_802FA764_00001094
lbl_fn_802FA764_00001080:
    frsp f2, f2
    lfs f1, 0x110(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xd8(r1)
lbl_fn_802FA764_00001094:
    lfs f0, 0xd8(r1)
    addi r3, r1, 0x218
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884980
    addi r4, r1, 0xc8
    lfs f28, 0x220(r1)
    mr r5, r4
    lfs f29, 0x21c(r1)
    addi r3, r1, 0x248
    lfs f13, 0x218(r1)
    lfs f12, 0x230(r1)
    lfs f11, 0x22c(r1)
    lfs f10, 0x228(r1)
    lfs f9, 0x240(r1)
    lfs f8, 0x23c(r1)
    lfs f7, 0x238(r1)
    lfs f6, 0x244(r1)
    lfs f5, 0x234(r1)
    lfs f4, 0x224(r1)
    lfs f0, lbl_80884994
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x118(r1)
    stfs f3, 0x278(r1)
    stfs f3, 0x27c(r1)
    stfs f3, 0x280(r1)
    stfs f0, 0x284(r1)
    stfs f13, 0x98(r1)
    stfs f29, 0x9c(r1)
    stfs f28, 0xa0(r1)
    stfs f13, 0x248(r1)
    stfs f29, 0x24c(r1)
    stfs f28, 0x250(r1)
    stfs f10, 0xa4(r1)
    stfs f11, 0xa8(r1)
    stfs f12, 0xac(r1)
    stfs f10, 0x258(r1)
    stfs f11, 0x25c(r1)
    stfs f12, 0x260(r1)
    stfs f7, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f7, 0x268(r1)
    stfs f8, 0x26c(r1)
    stfs f9, 0x270(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xc0(r1)
    stfs f6, 0xc4(r1)
    stfs f4, 0x254(r1)
    stfs f5, 0x264(r1)
    stfs f6, 0x274(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xd0(r1)
    bl fn_805F9750
    lfs f2, 0xd0(r1)
    lfs f0, lbl_80884998
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802FA764_000011B0
    lfs f3, 0xcc(r1)
    lfs f0, lbl_80884980
    fcmpo cr0, f3, f0
    ble lbl_fn_802FA764_000011A0
    lfs f0, lbl_808849D4
    b lbl_fn_802FA764_000011A4
lbl_fn_802FA764_000011A0:
    lfs f0, lbl_808849D8
lbl_fn_802FA764_000011A4:
    fneg f0, f0
    stfs f0, 0xd4(r1)
    b lbl_fn_802FA764_000011C4
lbl_fn_802FA764_000011B0:
    lfs f1, 0xcc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xd4(r1)
lbl_fn_802FA764_000011C4:
    lfs f0, lbl_80884980
    addi r3, r1, 0xd4
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x128
    fmr f2, f0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x118(r1)
    frsp f2, f2
    stfs f0, 0xdc(r1)
    stfs f2, 0x130(r1)
    lwz r0, 0x15b0(r31)
    psq_st f1, 0x0(r30), 0, 0
    cmpwi r0, 0x0
    beq lbl_fn_802FA764_00001254
    lwz r4, 0x940(r31)
    lis r0, 0x4330
    stw r0, 0x288(r1)
    lis r3, lbl_80748760@ha
    xoris r0, r4, 0x8000
    lfd f5, lbl_80748760@l(r3)
    stw r0, 0x28c(r1)
    lfs f3, 0x7d8(r31)
    lfd f4, 0x288(r1)
    lfs f0, 0x1594(r31)
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fcmpo cr0, f3, f0
    bge lbl_fn_802FA764_00001254
    lwz r4, 0x15bc(r31)
    cmpwi r4, 0x0
    beq lbl_fn_802FA764_00001254
    lwz r0, 0x12a4(r4)
    extrwi. r0, r0, 1, 3
    bne lbl_fn_802FA764_00001254
    mr r3, r31
    bl fn_802FC2E0
lbl_fn_802FA764_00001254:
    lfs f3, 0x152c(r31)
    fcmpo cr0, f31, f3
    ble lbl_fn_802FA764_00001294
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x15bc(r31)
    mr r3, r31
    li r5, 0x8
    bl fn_802FBE00
    cmpwi r3, 0x0
    bne lbl_fn_802FA764_000018D0
    lwz r4, 0x15bc(r31)
    mr r3, r31
    bl fn_802FBA30
    b lbl_fn_802FA764_000018D0
lbl_fn_802FA764_00001294:
    lfs f0, lbl_808849AC
    fmuls f0, f0, f3
    fcmpo cr0, f31, f0
    ble lbl_fn_802FA764_0000138C
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x15bc(r31)
    mr r3, r31
    li r5, 0xa
    bl fn_802FBE00
    cmpwi r3, 0x0
    bne lbl_fn_802FA764_000018D0
    lwz r4, 0x15bc(r31)
    mr r3, r31
    li r5, 0xa
    bl fn_802FBE00
    cmpwi r3, 0x0
    bne lbl_fn_802FA764_000018D0
    lwz r3, 0x14f4(r31)
    li r0, 0x0
    stw r0, 0x14b0(r31)
    cmpwi r3, 0x0
    stw r0, 0x15cc(r31)
    beq lbl_fn_802FA764_00001300
    lwz r0, 0x68(r3)
    b lbl_fn_802FA764_00001304
lbl_fn_802FA764_00001300:
    li r0, 0x5a
lbl_fn_802FA764_00001304:
    stw r0, 0x15d4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0xa
    stw r0, 0x58c(r31)
    lfs f1, lbl_80884980
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_80884994
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884980
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14
    lfs f2, lbl_808849CC
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802FA764_000018D0
lbl_fn_802FA764_0000138C:
    lwz r0, 0x15d0(r31)
    cmpwi r0, 0x0
    bge lbl_fn_802FA764_000013CC
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x15bc(r31)
    mr r3, r31
    li r5, 0x7
    bl fn_802FBE00
    cmpwi r3, 0x0
    bne lbl_fn_802FA764_000018D0
    lwz r4, 0x15bc(r31)
    mr r3, r31
    bl fn_802FB6AC
    b lbl_fn_802FA764_000018D0
lbl_fn_802FA764_000013CC:
    lwz r3, 0x1530(r31)
    lfs f5, lbl_80884978
    cmpwi r3, 0x0
    beq lbl_fn_802FA764_000013E0
    lfs f5, 0x40(r3)
lbl_fn_802FA764_000013E0:
    lfs f0, lbl_808849AC
    fmuls f0, f0, f5
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_802FA764_00001414
    lfs f0, lbl_80884A0C
    fmuls f0, f0, f5
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_802FA764_00001414
    li r0, 0x1
    stw r0, 0x15cc(r31)
    b lbl_fn_802FA764_00001448
lbl_fn_802FA764_00001414:
    lfs f0, lbl_808849AC
    fmuls f0, f0, f5
    fcmpo cr0, f31, f0
    bge lbl_fn_802FA764_00001430
    li r0, 0x0
    stw r0, 0x15cc(r31)
    b lbl_fn_802FA764_00001448
lbl_fn_802FA764_00001430:
    lfs f0, lbl_80884A0C
    fmuls f0, f0, f5
    fcmpo cr0, f31, f0
    ble lbl_fn_802FA764_00001448
    li r0, 0x2
    stw r0, 0x15cc(r31)
lbl_fn_802FA764_00001448:
    lwz r0, 0x15cc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802FA764_00001670
    fdivs f4, f31, f5
    lfs f3, lbl_80884994
    lfs f0, lbl_80884980
    fsubs f3, f3, f4
    fmuls f31, f5, f3
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_802FA764_0000147C
    addi r29, r31, 0x534
    b lbl_fn_802FA764_00001648
lbl_fn_802FA764_0000147C:
    addi r3, r1, 0x11c
    addi r30, r1, 0x104
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x124(r1)
    mr r4, r30
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x10c(r1)
    bl fn_805F98D0
    lfs f2, 0x10c(r1)
    addi r29, r1, 0xf8
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884998
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x100(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802FA764_000014EC
    lfs f3, 0xf8(r1)
    lfs f0, lbl_80884980
    fcmpo cr0, f3, f0
    ble lbl_fn_802FA764_000014E0
    lfs f0, lbl_808849D4
    b lbl_fn_802FA764_000014E4
lbl_fn_802FA764_000014E0:
    lfs f0, lbl_808849D8
lbl_fn_802FA764_000014E4:
    stfs f0, 0x90(r1)
    b lbl_fn_802FA764_00001500
lbl_fn_802FA764_000014EC:
    frsp f2, f2
    lfs f1, 0xf8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_802FA764_00001500:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x1a8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884980
    addi r4, r1, 0x80
    lfs f29, 0x1b0(r1)
    mr r5, r4
    lfs f28, 0x1ac(r1)
    addi r3, r1, 0x1d8
    lfs f13, 0x1a8(r1)
    lfs f12, 0x1c0(r1)
    lfs f11, 0x1bc(r1)
    lfs f10, 0x1b8(r1)
    lfs f9, 0x1d0(r1)
    lfs f8, 0x1cc(r1)
    lfs f7, 0x1c8(r1)
    lfs f6, 0x1d4(r1)
    lfs f5, 0x1c4(r1)
    lfs f4, 0x1b4(r1)
    lfs f0, lbl_80884994
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x100(r1)
    stfs f3, 0x208(r1)
    stfs f3, 0x20c(r1)
    stfs f3, 0x210(r1)
    stfs f0, 0x214(r1)
    stfs f13, 0x50(r1)
    stfs f28, 0x54(r1)
    stfs f29, 0x58(r1)
    stfs f13, 0x1d8(r1)
    stfs f28, 0x1dc(r1)
    stfs f29, 0x1e0(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x1e8(r1)
    stfs f11, 0x1ec(r1)
    stfs f12, 0x1f0(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x1f8(r1)
    stfs f8, 0x1fc(r1)
    stfs f9, 0x200(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x1e4(r1)
    stfs f5, 0x1f4(r1)
    stfs f6, 0x204(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80884998
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802FA764_0000161C
    lfs f3, 0x84(r1)
    lfs f0, lbl_80884980
    fcmpo cr0, f3, f0
    ble lbl_fn_802FA764_0000160C
    lfs f0, lbl_808849D4
    b lbl_fn_802FA764_00001610
lbl_fn_802FA764_0000160C:
    lfs f0, lbl_808849D8
lbl_fn_802FA764_00001610:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_802FA764_00001630
lbl_fn_802FA764_0000161C:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_802FA764_00001630:
    addi r3, r1, 0x8c
    lfs f2, lbl_80884980
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x94(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x100(r1)
lbl_fn_802FA764_00001648:
    lfs f2, 0x8(r29)
    addi r3, r1, 0x128
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, lbl_80884A00
    lfs f3, 0x12c(r1)
    stfs f2, 0x130(r1)
    fsubs f0, f3, f0
    stfs f0, 0x12c(r1)
    b lbl_fn_802FA764_00001690
lbl_fn_802FA764_00001670:
    cmpwi r0, 0x1
    bne lbl_fn_802FA764_00001680
    lfs f31, lbl_80884980
    b lbl_fn_802FA764_00001690
lbl_fn_802FA764_00001680:
    cmpwi r0, 0x2
    bne lbl_fn_802FA764_00001690
    fdivs f0, f31, f5
    fmuls f31, f31, f0
lbl_fn_802FA764_00001690:
    lwz r4, 0x15bc(r31)
    addi r3, r1, 0xe0
    lfs f0, 0x530(r31)
    addi r29, r1, 0xec
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    lfs f0, 0x528(r31)
    stfs f2, 0xe8(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80884998
    stfs f4, 0xe4(r1)
    frsp f4, f2
    stfs f3, 0xe0(r1)
    fabs f3, f4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0xf4(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802FA764_00001714
    lfs f3, 0xec(r1)
    lfs f0, lbl_80884980
    fcmpo cr0, f3, f0
    ble lbl_fn_802FA764_00001708
    lfs f0, lbl_808849D4
    b lbl_fn_802FA764_0000170C
lbl_fn_802FA764_00001708:
    lfs f0, lbl_808849D8
lbl_fn_802FA764_0000170C:
    stfs f0, 0x48(r1)
    b lbl_fn_802FA764_00001728
lbl_fn_802FA764_00001714:
    fmr f2, f4
    lfs f1, 0xec(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802FA764_00001728:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x138
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884980
    addi r4, r1, 0x38
    lfs f29, 0x140(r1)
    mr r5, r4
    lfs f28, 0x13c(r1)
    addi r3, r1, 0x168
    lfs f13, 0x138(r1)
    lfs f12, 0x150(r1)
    lfs f11, 0x14c(r1)
    lfs f10, 0x148(r1)
    lfs f9, 0x160(r1)
    lfs f8, 0x15c(r1)
    lfs f7, 0x158(r1)
    lfs f6, 0x164(r1)
    lfs f5, 0x154(r1)
    lfs f4, 0x144(r1)
    lfs f0, lbl_80884994
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xf4(r1)
    stfs f3, 0x198(r1)
    stfs f3, 0x19c(r1)
    stfs f3, 0x1a0(r1)
    stfs f0, 0x1a4(r1)
    stfs f13, 0x8(r1)
    stfs f28, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0x168(r1)
    stfs f28, 0x16c(r1)
    stfs f29, 0x170(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x178(r1)
    stfs f11, 0x17c(r1)
    stfs f12, 0x180(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x188(r1)
    stfs f8, 0x18c(r1)
    stfs f9, 0x190(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x174(r1)
    stfs f5, 0x184(r1)
    stfs f6, 0x194(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80884998
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802FA764_00001844
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884980
    fcmpo cr0, f3, f0
    ble lbl_fn_802FA764_00001834
    lfs f0, lbl_808849D4
    b lbl_fn_802FA764_00001838
lbl_fn_802FA764_00001834:
    lfs f0, lbl_808849D8
lbl_fn_802FA764_00001838:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802FA764_00001858
lbl_fn_802FA764_00001844:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802FA764_00001858:
    addi r3, r1, 0x44
    lwz r4, 0x7e0(r31)
    psq_l f1, 0x0(r3), 0, 0
    rlwinm r3, r4, 0, 6, 6
    psq_st f1, 0x0(r29), 0, 0
    subis r0, r3, 0x200
    lfs f2, lbl_80884980
    lfs f0, 0xf0(r1)
    cmplwi r0, 0x0
    stfs f2, 0x4c(r1)
    stfs f2, 0xf4(r1)
    stfs f0, 0x538(r31)
    beq lbl_fn_802FA764_00001898
    rlwinm r0, r4, 0, 16, 16
    cmplwi r0, 0x8000
    bne lbl_fn_802FA764_000018A0
lbl_fn_802FA764_00001898:
    lfs f0, lbl_80884990
    fmuls f30, f30, f0
lbl_fn_802FA764_000018A0:
    addi r3, r31, 0x7d4
    bl fn_8012DB04
    fmuls f30, f30, f1
    lfs f0, 0x568(r31)
    fmr f1, f31
    mr r3, r31
    addi r4, r1, 0x128
    fmuls f2, f0, f30
    bl fn_801426A4
    lwz r3, 0x15d0(r31)
    subi r0, r3, 0x1
    stw r0, 0x15d0(r31)
lbl_fn_802FA764_000018D0:
    lwz r0, 0x2e4(r1)
    psq_l f31, 0x2d8(r1), 0, 0
    lfd f31, 0x2d0(r1)
    psq_l f30, 0x2c8(r1), 0, 0
    lfd f30, 0x2c0(r1)
    psq_l f29, 0x2b8(r1), 0, 0
    lfd f29, 0x2b0(r1)
    psq_l f28, 0x2a8(r1), 0, 0
    lfd f28, 0x2a0(r1)
    lwz r31, 0x29c(r1)
    lwz r30, 0x298(r1)
    lwz r29, 0x294(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

asm void fn_802FB0C4(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stfd f29, 0xf0(r1)
    psq_st f29, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    stw r30, 0xe8(r1)
    mr r30, r3
    lfs f4, 0x15a8(r3)
    lfs f0, 0x530(r3)
    lfs f3, 0x15a0(r3)
    fsubs f5, f4, f0
    lfs f0, 0x528(r3)
    lfs f4, 0x15a4(r3)
    fsubs f6, f3, f0
    lfs f3, 0x52c(r3)
    fmuls f0, f5, f5
    fsubs f3, f4, f3
    stfs f6, 0x5c(r1)
    fmadds f1, f6, f6, f0
    stfs f3, 0x60(r1)
    stfs f5, 0x64(r1)
    bl fn_8068B100
    lfs f2, 0x64(r1)
    addi r3, r1, 0x5c
    frsp f31, f1
    lfs f0, lbl_80884998
    fabs f3, f2
    addi r31, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802FB0C4_000019CC
    lfs f3, 0x50(r1)
    lfs f0, lbl_80884980
    fcmpo cr0, f3, f0
    ble lbl_fn_802FB0C4_000019C0
    lfs f0, lbl_808849D4
    b lbl_fn_802FB0C4_000019C4
lbl_fn_802FB0C4_000019C0:
    lfs f0, lbl_808849D8
lbl_fn_802FB0C4_000019C4:
    stfs f0, 0x48(r1)
    b lbl_fn_802FB0C4_000019E0
lbl_fn_802FB0C4_000019CC:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802FB0C4_000019E0:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884980
    addi r4, r1, 0x38
    lfs f29, 0x80(r1)
    mr r5, r4
    lfs f30, 0x7c(r1)
    addi r3, r1, 0xa8
    lfs f13, 0x78(r1)
    lfs f12, 0x90(r1)
    lfs f11, 0x8c(r1)
    lfs f10, 0x88(r1)
    lfs f9, 0xa0(r1)
    lfs f8, 0x9c(r1)
    lfs f7, 0x98(r1)
    lfs f6, 0xa4(r1)
    lfs f5, 0x94(r1)
    lfs f4, 0x84(r1)
    lfs f0, lbl_80884994
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xd8(r1)
    stfs f3, 0xdc(r1)
    stfs f3, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0xa8(r1)
    stfs f30, 0xac(r1)
    stfs f29, 0xb0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xb8(r1)
    stfs f11, 0xbc(r1)
    stfs f12, 0xc0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xc8(r1)
    stfs f8, 0xcc(r1)
    stfs f9, 0xd0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xb4(r1)
    stfs f5, 0xc4(r1)
    stfs f6, 0xd4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80884998
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802FB0C4_00001AFC
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884980
    fcmpo cr0, f3, f0
    ble lbl_fn_802FB0C4_00001AEC
    lfs f0, lbl_808849D4
    b lbl_fn_802FB0C4_00001AF0
lbl_fn_802FB0C4_00001AEC:
    lfs f0, lbl_808849D8
lbl_fn_802FB0C4_00001AF0:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802FB0C4_00001B10
lbl_fn_802FB0C4_00001AFC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802FB0C4_00001B10:
    lfs f2, lbl_80884980
    addi r3, r1, 0x44
    lfs f0, lbl_808849E4
    addi r4, r1, 0x68
    stfs f2, 0x4c(r1)
    psq_l f1, 0x0(r3), 0, 0
    fcmpo cr0, f31, f0
    stfs f2, 0x58(r1)
    frsp f2, f2
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
    bge lbl_fn_802FB0C4_00001B80
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    li r0, 0x0
    stw r0, 0x1590(r30)
    lwz r4, 0x15bc(r30)
    mr r3, r30
    li r5, 0x8
    bl fn_802FBE00
    cmpwi r3, 0x0
    bne lbl_fn_802FB0C4_00001BB4
    lwz r4, 0x15bc(r30)
    mr r3, r30
    bl fn_802FBA30
    b lbl_fn_802FB0C4_00001BB4
lbl_fn_802FB0C4_00001B80:
    lwz r3, 0x55c(r30)
    subi r0, r3, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_802FB0C4_00001BAC
    li r0, 0x3
    stw r0, 0x55c(r30)
    lwz r4, 0x159c(r30)
    mr r3, r30
    li r5, 0x0
    lwz r4, 0x0(r4)
    bl fn_8017039C
lbl_fn_802FB0C4_00001BAC:
    mr r3, r30
    bl fn_802F8EBC
lbl_fn_802FB0C4_00001BB4:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_l f29, 0xf8(r1), 0, 0
    lfd f29, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}
