#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_800844D8(void);
extern void fn_8008CD60(void);
extern void fn_80092814(void);
extern void fn_800C31F4(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_80149A30(void);
extern void fn_80151448(void);
extern void fn_8016E970(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_8031A484(void);
extern void fn_8031ACC0(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_80749568[];
extern u8 lbl_80749578[];
extern u8 lbl_8074959C[];
extern u8 lbl_80775A88[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087DC50;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F3F4;
extern u32 lbl_8087F408;
extern u32 lbl_8087F8A0;
extern u32 lbl_80884D60;
extern u32 lbl_80884D68;
extern u32 lbl_80884D74;
extern u32 lbl_80884D78;
extern u32 lbl_80884D88;
extern u32 lbl_80884D8C;
extern u32 lbl_80884D90;
extern u32 lbl_80884D94;
extern u32 lbl_80884D98;
extern u32 lbl_80884D9C;
extern u32 lbl_80884DA0;
extern u32 lbl_80884DA4;
extern u32 lbl_80884DA8;

/* Function declarations */
void fn_80316FC0(void);
void fn_80317034(void);
void fn_80317040(void);
void fn_80317110(void);
void fn_80317188(void);
void fn_80317360(void);
void fn_803176D0(void);
void fn_80317EA0(void);
void fn_80317EF8(void);
void fn_80318594(void);
void fn_80318648(void);
void fn_80318720(void);

asm void fn_80316FC0(void)
{
    nofralloc
    lfs f4, lbl_80884D88
    lfs f0, 0x0(r3)
    lfs f2, 0x4(r3)
    fmuls f3, f4, f0
    lfs f1, 0x8(r3)
    lfs f0, 0xc(r3)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    stwu r1, -0x30(r1)
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x10(r1)
    fctiwz f0, f0
    stfd f2, 0x18(r1)
    lwz r5, 0x14(r1)
    stfd f1, 0x20(r1)
    lwz r4, 0x1c(r1)
    stfd f0, 0x28(r1)
    lwz r3, 0x24(r1)
    lwz r0, 0x2c(r1)
    stb r5, 0x8(r1)
    stb r4, 0x9(r1)
    stb r3, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r3, 0x8(r1)
    addi r1, r1, 0x30
    blr
}

asm void fn_80317034(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_80317040(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    li r0, 0x0
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r3
    stw r0, lbl_8087F3F4
    bl fn_80149A30
    lfs f31, lbl_80884D68
    addi r31, r29, 0x1648
    li r30, 0x0
lbl_fn_80317040_000000BC:
    lfs f3, 0x34(r31)
    addi r3, r1, 0x20
    lfs f0, 0xe4(r29)
    lfs f4, 0x24(r31)
    lfs f1, 0xd4(r29)
    fsubs f6, f0, f3
    lfs f5, 0x14(r31)
    lfs f2, 0xc4(r29)
    fsubs f7, f1, f4
    stfs f5, 0x8(r1)
    fsubs f5, f2, f5
    stfs f4, 0xc(r1)
    stfs f3, 0x10(r1)
    stfs f2, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f5, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f6, 0x28(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    ble lbl_fn_80317040_0000011C
    mr r3, r31
    bl fn_8008CD60
lbl_fn_80317040_0000011C:
    addi r30, r30, 0x1
    addi r31, r31, 0x214
    cmpwi r30, 0x3
    blt lbl_fn_80317040_000000BC
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80317110(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f3, lbl_80884D60
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f2, 0x10(r4)
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80317188(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80317188_00000200
    bl fn_8031A484
    b lbl_fn_80317188_00000380
lbl_fn_80317188_00000200:
    lwz r4, 0x8(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80317188_00000330
    lwz r0, 0x90(r4)
    rlwinm r4, r0, 0, 8, 8
    subis r0, r4, 0x80
    cmplwi r0, 0x0
    bne lbl_fn_80317188_00000330
    li r0, 0x0
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xc
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lwz r30, 0x14b8(r31)
    lis r4, lbl_8074959C@ha
    addi r4, r4, lbl_8074959C@l
    addi r29, r1, 0x8
    addi r28, r30, 0xb0
    li r5, 0x0
    mr r3, r28
    addi r4, r4, 0x105
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80317188_00000280
    li r4, 0x0
    b lbl_fn_80317188_0000028C
lbl_fn_80317188_00000280:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r28)
    add r4, r3, r0
lbl_fn_80317188_0000028C:
    lfs f0, lbl_80884D60
    cmpwi r4, 0x0
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    beq lbl_fn_80317188_000002D0
    lfs f0, 0x1c(r4)
    addi r3, r1, 0x14
    lfs f3, 0xc(r4)
    stfs f3, 0x14(r1)
    lfs f2, 0x2c(r4)
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x10(r1)
    b lbl_fn_80317188_000002F0
lbl_fn_80317188_000002D0:
    psq_l f1, 0x528(r30), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f2, 0x530(r30)
    lfs f3, 0xc(r1)
    lfs f0, lbl_80884D8C
    stfs f2, 0x10(r1)
    fadds f0, f3, f0
    stfs f0, 0xc(r1)
lbl_fn_80317188_000002F0:
    addi r3, r31, 0x1510
    psq_l f1, 0x528(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r4, r31, 0x1504
    lfs f2, 0x530(r31)
    lfs f3, 0x1514(r31)
    lfs f0, 0xc(r1)
    psq_st f1, 0x0(r4), 0, 0
    fcmpo cr0, f3, f0
    stfs f2, 0x150c(r31)
    stfs f2, 0x1518(r31)
    ble lbl_fn_80317188_00000324
    stfs f0, 0x1514(r31)
lbl_fn_80317188_00000324:
    lfs f0, lbl_80884D60
    stfs f0, 0x151c(r31)
    b lbl_fn_80317188_00000380
lbl_fn_80317188_00000330:
    li r30, 0x0
    stw r30, 0x14bc(r3)
    stw r30, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e9
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_80317188_00000380:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80317360(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    stw r31, 0x12c(r1)
    li r31, 0x0
    stw r30, 0x128(r1)
    mr r30, r5
    stw r29, 0x124(r1)
    mr r29, r4
    stw r28, 0x120(r1)
    mr r28, r3
    stw r31, 0x14bc(r3)
    stw r31, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r28)
    li r0, 0x6
    mr r3, r28
    li r4, 0x3
    stw r0, 0x58c(r28)
    bl fn_8016E970
    lfs f0, 0x8(r29)
    addi r5, r1, 0x14
    lfs f5, 0x8(r30)
    addi r6, r28, 0x14d8
    lfs f3, 0x4(r29)
    addi r3, r1, 0x20
    fadds f8, f0, f5
    lfs f4, 0x4(r30)
    lfs f0, 0x0(r29)
    addi r4, r28, 0x14e4
    fadds f7, f3, f4
    lfs f3, 0x0(r30)
    fadds f6, f0, f3
    lfs f0, lbl_80884D60
    fmr f2, f8
    stfs f7, 0x18(r1)
    fcmpu cr0, f0, f3
    stfs f6, 0x14(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x20(r1)
    stfs f7, 0x24(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x14e0(r28)
    stfs f2, 0x14ec(r28)
    frsp f2, f2
    stfs f8, 0x1c(r1)
    stfs f8, 0x28(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r28), 0, 0
    stfs f2, 0x530(r28)
    bne lbl_fn_80317360_00000498
    fcmpu cr0, f0, f4
    bne lbl_fn_80317360_00000498
    fcmpu cr0, f0, f5
    bne lbl_fn_80317360_00000498
    li r31, 0x1
lbl_fn_80317360_00000498:
    cmpwi r31, 0x0
    bne lbl_fn_80317360_00000654
    lfs f2, 0x8(r30)
    addi r31, r1, 0x2c
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884D90
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x34(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80317360_000004EC
    lfs f3, 0x2c(r1)
    lfs f0, lbl_80884D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80317360_000004E0
    lfs f0, lbl_80884D94
    b lbl_fn_80317360_000004E4
lbl_fn_80317360_000004E0:
    lfs f0, lbl_80884D98
lbl_fn_80317360_000004E4:
    stfs f0, 0x3c(r1)
    b lbl_fn_80317360_00000500
lbl_fn_80317360_000004EC:
    frsp f2, f2
    lfs f1, 0x2c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x3c(r1)
lbl_fn_80317360_00000500:
    lfs f0, 0x3c(r1)
    addi r3, r1, 0xe8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884D60
    addi r4, r1, 0x44
    lfs f4, 0xf0(r1)
    mr r5, r4
    lfs f5, 0xec(r1)
    addi r3, r1, 0xa8
    lfs f6, 0xe8(r1)
    lfs f7, 0x100(r1)
    lfs f8, 0xfc(r1)
    lfs f9, 0xf8(r1)
    lfs f10, 0x110(r1)
    lfs f11, 0x10c(r1)
    lfs f12, 0x108(r1)
    lfs f13, 0x114(r1)
    lfs f31, 0x104(r1)
    lfs f30, 0xf4(r1)
    lfs f0, lbl_80884D78
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x34(r1)
    stfs f3, 0xd8(r1)
    stfs f3, 0xdc(r1)
    stfs f3, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f6, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f4, 0x7c(r1)
    stfs f6, 0xa8(r1)
    stfs f5, 0xac(r1)
    stfs f4, 0xb0(r1)
    stfs f9, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f7, 0x70(r1)
    stfs f9, 0xb8(r1)
    stfs f8, 0xbc(r1)
    stfs f7, 0xc0(r1)
    stfs f12, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f10, 0x64(r1)
    stfs f12, 0xc8(r1)
    stfs f11, 0xcc(r1)
    stfs f10, 0xd0(r1)
    stfs f30, 0x50(r1)
    stfs f31, 0x54(r1)
    stfs f13, 0x58(r1)
    stfs f30, 0xb4(r1)
    stfs f31, 0xc4(r1)
    stfs f13, 0xd4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F9750
    lfs f2, 0x4c(r1)
    lfs f0, lbl_80884D90
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80317360_0000061C
    lfs f3, 0x48(r1)
    lfs f0, lbl_80884D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80317360_0000060C
    lfs f0, lbl_80884D94
    b lbl_fn_80317360_00000610
lbl_fn_80317360_0000060C:
    lfs f0, lbl_80884D98
lbl_fn_80317360_00000610:
    fneg f0, f0
    stfs f0, 0x38(r1)
    b lbl_fn_80317360_00000630
lbl_fn_80317360_0000061C:
    lfs f1, 0x48(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x38(r1)
lbl_fn_80317360_00000630:
    lfs f2, lbl_80884D60
    addi r3, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x40(r1)
    stfs f2, 0x34(r1)
    frsp f2, f2
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x534(r28), 0, 0
    stfs f2, 0x53c(r28)
lbl_fn_80317360_00000654:
    lfs f0, lbl_80884D60
    li r3, -0x1
    lfs f1, lbl_80884D78
    li r0, 0x1
    stfs f0, 0x90(r1)
    addi r4, r28, 0x1550
    addi r5, r28, 0xb0
    addi r7, r1, 0x9c
    stfs f0, 0x94(r1)
    addi r8, r1, 0x90
    addi r9, r1, 0x80
    li r6, 0x0
    stfs f0, 0x98(r1)
    li r10, -0x1
    stfs f0, 0x9c(r1)
    stfs f0, 0xa0(r1)
    stfs f0, 0xa4(r1)
    stfs f1, 0x80(r1)
    stfs f1, 0x84(r1)
    stfs f1, 0x88(r1)
    stfs f1, 0x8c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lis r3, lbl_80749568@ha
    lfs f1, lbl_80884D78
    lwz r4, lbl_80749568@l(r3)
    addi r3, r1, 0x10
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x154(r1)
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    lwz r28, 0x120(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_803176D0(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    lis r3, __files@ha
    lis r4, lbl_8074959C@ha
    stw r0, 0xb4(r1)
    stmw r14, 0x68(r1)
    li r23, 0x0
    addi r21, r4, lbl_8074959C@l
    addi r20, r3, __files@l
    addi r19, r1, 0x3c
    addi r24, r1, 0x54
    lis r16, 0xcccd
    lis r22, 0x4000
    lis r17, 0x1555
    lis r15, 0x2aab
    lis r14, lbl_80775A88@ha
    stw r23, 0x34(r1)
    lwz r5, lbl_8087F408
    stw r23, 0x3c(r1)
    stw r23, 0x38(r1)
    lwz r27, 0x48(r5)
    b lbl_fn_803176D0_00000ABC
lbl_fn_803176D0_00000768:
    lwz r6, 0x38(r27)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803176D0_00000794
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_803176D0_00000794
    li r5, 0x1
lbl_fn_803176D0_00000794:
    cmpwi r5, 0x0
    beq lbl_fn_803176D0_000007B0
    lwz r0, 0x7e0(r27)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_803176D0_000007B0
    li r3, 0x1
lbl_fn_803176D0_000007B0:
    cmpwi r3, 0x0
    beq lbl_fn_803176D0_000007E4
    lwz r0, 0x55c(r27)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_803176D0_000007D8
    lwz r0, 0x560(r27)
    cmpwi r0, 0x1c
    bne lbl_fn_803176D0_000007D8
    li r3, 0x1
lbl_fn_803176D0_000007D8:
    cmpwi r3, 0x0
    bne lbl_fn_803176D0_000007E4
    li r4, 0x1
lbl_fn_803176D0_000007E4:
    cmpwi r4, 0x0
    beq lbl_fn_803176D0_00000AB8
    lwz r0, 0x146c(r27)
    cmpwi r0, 0x2d
    beq lbl_fn_803176D0_00000800
    cmpwi r0, 0x31
    bne lbl_fn_803176D0_00000AB8
lbl_fn_803176D0_00000800:
    lwz r0, 0x38(r1)
    li r9, 0x0
    lwz r4, 0x34(r1)
    slwi r0, r0, 2
    stw r27, 0x24(r1)
    lwz r5, lbl_8087F8A0
    add r7, r4, r0
    b lbl_fn_803176D0_00000880
lbl_fn_803176D0_00000820:
    lwz r8, 0x48(r5)
    lwz r0, 0x12a4(r8)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_803176D0_00000838
    mr r3, r8
    b lbl_fn_803176D0_0000083C
lbl_fn_803176D0_00000838:
    lwz r3, 0x14d4(r27)
lbl_fn_803176D0_0000083C:
    cmpwi r0, 0x0
    lwz r6, 0x50(r3)
    lwz r3, 0x0(r4)
    beq lbl_fn_803176D0_00000850
    b lbl_fn_803176D0_00000854
lbl_fn_803176D0_00000850:
    lwz r8, 0x14d4(r3)
lbl_fn_803176D0_00000854:
    lwz r0, 0x50(r8)
    cmpw r0, r6
    blt lbl_fn_803176D0_0000087C
    stb r23, 0x8(r1)
    addi r3, r1, 0x34
    addi r5, r1, 0x24
    addi r6, r1, 0x8
    bl fn_8031ACC0
    li r9, 0x1
    b lbl_fn_803176D0_00000888
lbl_fn_803176D0_0000087C:
    addi r4, r4, 0x4
lbl_fn_803176D0_00000880:
    cmplw r4, r7
    bne lbl_fn_803176D0_00000820
lbl_fn_803176D0_00000888:
    cmpwi r9, 0x0
    bne lbl_fn_803176D0_00000AB8
    lwz r4, 0x38(r1)
    lwz r3, 0x3c(r1)
    cmplw r4, r3
    bge lbl_fn_803176D0_000008C0
    addi r4, r4, 0x1
    lwz r3, 0x34(r1)
    slwi r0, r4, 2
    stw r4, 0x38(r1)
    add r3, r3, r0
    lwz r0, 0x24(r1)
    stw r0, -0x4(r3)
    b lbl_fn_803176D0_00000AB8
lbl_fn_803176D0_000008C0:
    subi r0, r22, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_803176D0_000008E4
    addi r4, r21, 0x10c
    addi r3, r20, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803176D0_000008E4:
    lwz r3, 0x38(r1)
    subi r0, r22, 0x1
    lwz r18, 0x3c(r1)
    addi r3, r3, 0x1
    stw r23, 0x54(r1)
    subf r3, r18, r3
    subf r0, r18, r0
    cmplw r3, r0
    stw r23, 0x58(r1)
    stw r23, 0x5c(r1)
    stw r19, 0x60(r1)
    stw r23, 0x64(r1)
    stw r3, 0x18(r1)
    ble lbl_fn_803176D0_00000930
    addi r4, r21, 0x10c
    addi r3, r20, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803176D0_00000930:
    addi r0, r17, 0x5555
    cmplw r18, r0
    bge lbl_fn_803176D0_00000978
    addi r4, r18, 0x1
    subi r5, r16, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x18(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x20
    srwi r4, r4, 2
    stw r4, 0x20(r1)
    cmplw r4, r0
    bge lbl_fn_803176D0_0000096C
    addi r3, r1, 0x18
lbl_fn_803176D0_0000096C:
    lwz r0, 0x0(r3)
    add r18, r18, r0
    b lbl_fn_803176D0_000009B4
lbl_fn_803176D0_00000978:
    subi r0, r15, 0x5556
    cmplw r18, r0
    bge lbl_fn_803176D0_000009B0
    addi r3, r18, 0x1
    lwz r0, 0x18(r1)
    srwi r3, r3, 1
    stw r3, 0x1c(r1)
    cmplw r3, r0
    addi r3, r1, 0x1c
    bge lbl_fn_803176D0_000009A4
    addi r3, r1, 0x18
lbl_fn_803176D0_000009A4:
    lwz r0, 0x0(r3)
    add r18, r18, r0
    b lbl_fn_803176D0_000009B4
lbl_fn_803176D0_000009B0:
    subi r18, r22, 0x1
lbl_fn_803176D0_000009B4:
    subi r0, r22, 0x1
    cmplw r18, r0
    ble lbl_fn_803176D0_000009D4
    addi r4, r21, 0x10c
    addi r3, r20, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803176D0_000009D4:
    slwi r3, r18, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_803176D0_000009FC
    addi r3, r20, 0xa0
    addi r4, r14, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803176D0_000009FC:
    lwz r6, 0x38(r1)
    lwz r3, 0x58(r1)
    slwi r0, r6, 2
    lwz r5, 0x24(r1)
    slwi r4, r3, 2
    addi r3, r3, 0x1
    add r0, r25, r0
    stw r18, 0x5c(r1)
    stwx r5, r4, r0
    lwz r0, 0x38(r1)
    lwz r26, 0x34(r1)
    slwi r0, r0, 2
    stw r3, 0x58(r1)
    add r0, r26, r0
    mr r4, r26
    subf r0, r26, r0
    srawi r0, r0, 2
    addze r18, r0
    subf r0, r18, r6
    stw r0, 0x64(r1)
    slwi r28, r18, 2
    slwi r0, r0, 2
    mr r5, r28
    add r3, r25, r0
    bl memcpy
    mr r3, r26
    mr r5, r28
    li r4, 0x0
    bl memset
    lwz r0, 0x58(r1)
    cmpwi r24, 0x0
    lwz r3, 0x34(r1)
    add r5, r0, r18
    mr r0, r25
    lwz r6, 0x3c(r1)
    lwz r4, 0x5c(r1)
    stw r4, 0x3c(r1)
    stw r6, 0x5c(r1)
    stw r0, 0x34(r1)
    stw r3, 0x54(r1)
    stw r5, 0x38(r1)
    stw r23, 0x58(r1)
    beq lbl_fn_803176D0_00000AB8
    cmpwi r3, 0x0
    beq lbl_fn_803176D0_00000AB8
    stw r23, 0x58(r1)
    bl dtor_80084684
lbl_fn_803176D0_00000AB8:
    lwz r27, 0x14ac(r27)
lbl_fn_803176D0_00000ABC:
    cmpwi r27, 0x0
    bne lbl_fn_803176D0_00000768
    li r17, 0x0
    lis r3, __files@ha
    lis r4, lbl_8074959C@ha
    stw r17, 0x28(r1)
    addi r14, r4, lbl_8074959C@l
    addi r26, r3, __files@l
    stw r17, 0x2c(r1)
    addi r27, r1, 0x30
    addi r23, r1, 0x40
    li r5, -0x1
    stw r17, 0x30(r1)
    li r16, 0x0
    li r20, 0x0
    lis r29, 0xcccd
    li r24, 0x0
    lis r25, 0x4000
    lis r28, 0x1555
    lis r30, 0x2aab
    li r31, 0x1
    b lbl_fn_803176D0_00000DD0
lbl_fn_803176D0_00000B14:
    lwz r3, lbl_8087F8A0
    lwz r4, 0x34(r1)
    lwz r3, 0x48(r3)
    lwzx r15, r4, r20
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_803176D0_00000B34
    b lbl_fn_803176D0_00000B38
lbl_fn_803176D0_00000B34:
    lwz r3, 0x14d4(r15)
lbl_fn_803176D0_00000B38:
    lwz r0, 0x50(r3)
    cmpw r5, r0
    beq lbl_fn_803176D0_00000D80
    stw r24, 0x14c4(r15)
    li r17, 0x0
    stw r24, 0x14c8(r15)
    lwz r4, 0x2c(r1)
    lwz r3, 0x30(r1)
    cmplw r4, r3
    bge lbl_fn_803176D0_00000B80
    addi r4, r4, 0x1
    lwz r3, 0x28(r1)
    slwi r0, r4, 2
    stw r4, 0x2c(r1)
    add r3, r3, r0
    lwz r0, lbl_8087DC50
    stw r0, -0x4(r3)
    b lbl_fn_803176D0_00000DA8
lbl_fn_803176D0_00000B80:
    subi r0, r25, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_803176D0_00000BA4
    addi r4, r14, 0x10c
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803176D0_00000BA4:
    lwz r3, 0x2c(r1)
    subi r0, r25, 0x1
    lwz r18, 0x30(r1)
    addi r3, r3, 0x1
    stw r24, 0x40(r1)
    subf r3, r18, r3
    subf r0, r18, r0
    cmplw r3, r0
    stw r24, 0x44(r1)
    stw r24, 0x48(r1)
    stw r27, 0x4c(r1)
    stw r24, 0x50(r1)
    stw r3, 0xc(r1)
    ble lbl_fn_803176D0_00000BF0
    addi r4, r14, 0x10c
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803176D0_00000BF0:
    addi r0, r28, 0x5555
    cmplw r18, r0
    bge lbl_fn_803176D0_00000C38
    addi r4, r18, 0x1
    subi r5, r29, 0x3333
    slwi r3, r4, 2
    lwz r0, 0xc(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x14
    srwi r4, r4, 2
    stw r4, 0x14(r1)
    cmplw r4, r0
    bge lbl_fn_803176D0_00000C2C
    addi r3, r1, 0xc
lbl_fn_803176D0_00000C2C:
    lwz r0, 0x0(r3)
    add r19, r18, r0
    b lbl_fn_803176D0_00000C74
lbl_fn_803176D0_00000C38:
    subi r0, r30, 0x5556
    cmplw r18, r0
    bge lbl_fn_803176D0_00000C70
    addi r3, r18, 0x1
    lwz r0, 0xc(r1)
    srwi r3, r3, 1
    stw r3, 0x10(r1)
    cmplw r3, r0
    addi r3, r1, 0x10
    bge lbl_fn_803176D0_00000C64
    addi r3, r1, 0xc
lbl_fn_803176D0_00000C64:
    lwz r0, 0x0(r3)
    add r19, r18, r0
    b lbl_fn_803176D0_00000C74
lbl_fn_803176D0_00000C70:
    subi r19, r25, 0x1
lbl_fn_803176D0_00000C74:
    subi r0, r25, 0x1
    cmplw r19, r0
    ble lbl_fn_803176D0_00000C94
    addi r4, r14, 0x10c
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803176D0_00000C94:
    slwi r3, r19, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r21, r3
    bne lbl_fn_803176D0_00000CC0
    lis r4, lbl_80775A88@ha
    addi r3, r26, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803176D0_00000CC0:
    lwz r0, 0x2c(r1)
    lwz r3, 0x44(r1)
    slwi r6, r0, 2
    lwz r7, lbl_8087DC50
    addi r5, r3, 0x1
    slwi r4, r3, 2
    add r3, r21, r6
    stw r19, 0x48(r1)
    stwx r7, r4, r3
    lwz r3, 0x2c(r1)
    lwz r18, 0x28(r1)
    slwi r3, r3, 2
    stw r5, 0x44(r1)
    add r3, r18, r3
    mr r4, r18
    subf r3, r18, r3
    srawi r3, r3, 2
    addze r22, r3
    subf r0, r22, r0
    stw r0, 0x50(r1)
    slwi r19, r22, 2
    slwi r0, r0, 2
    mr r5, r19
    add r3, r21, r0
    bl memcpy
    mr r3, r18
    mr r5, r19
    li r4, 0x0
    bl memset
    lwz r0, 0x44(r1)
    cmpwi r23, 0x0
    lwz r3, 0x28(r1)
    add r5, r0, r22
    mr r0, r21
    lwz r6, 0x30(r1)
    lwz r4, 0x48(r1)
    stw r4, 0x30(r1)
    stw r6, 0x48(r1)
    stw r0, 0x28(r1)
    stw r3, 0x40(r1)
    stw r5, 0x2c(r1)
    stw r24, 0x44(r1)
    beq lbl_fn_803176D0_00000DA8
    cmpwi r3, 0x0
    beq lbl_fn_803176D0_00000DA8
    stw r24, 0x44(r1)
    bl dtor_80084684
    b lbl_fn_803176D0_00000DA8
lbl_fn_803176D0_00000D80:
    lwz r3, 0x2c(r1)
    addi r17, r17, 0x1
    lwz r5, 0x28(r1)
    subi r0, r3, 0x1
    slwi r4, r0, 2
    lwzx r3, r5, r4
    addi r0, r3, 0x1
    stwx r0, r5, r4
    stw r31, 0x14c4(r15)
    stw r17, 0x14c8(r15)
lbl_fn_803176D0_00000DA8:
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_803176D0_00000DC0
    b lbl_fn_803176D0_00000DC4
lbl_fn_803176D0_00000DC0:
    lwz r3, 0x14d4(r15)
lbl_fn_803176D0_00000DC4:
    lwz r5, 0x50(r3)
    addi r20, r20, 0x4
    addi r16, r16, 0x1
lbl_fn_803176D0_00000DD0:
    lwz r0, 0x38(r1)
    cmplw r16, r0
    blt lbl_fn_803176D0_00000B14
    li r7, -0x1
    li r3, -0x4
    li r8, 0x0
    li r6, 0x0
    b lbl_fn_803176D0_00000E68
lbl_fn_803176D0_00000DF0:
    lwz r4, lbl_8087F8A0
    lwz r5, 0x34(r1)
    lwz r4, 0x48(r4)
    lwzx r5, r5, r6
    lwz r0, 0x12a4(r4)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_803176D0_00000E10
    b lbl_fn_803176D0_00000E14
lbl_fn_803176D0_00000E10:
    lwz r4, 0x14d4(r5)
lbl_fn_803176D0_00000E14:
    lwz r0, 0x50(r4)
    cmpw r7, r0
    beq lbl_fn_803176D0_00000E34
    lwz r4, 0x28(r1)
    addi r3, r3, 0x4
    lwzx r0, r4, r3
    stw r0, 0x14cc(r5)
    b lbl_fn_803176D0_00000E40
lbl_fn_803176D0_00000E34:
    lwz r4, 0x28(r1)
    lwzx r0, r4, r3
    stw r0, 0x14cc(r5)
lbl_fn_803176D0_00000E40:
    lwz r4, lbl_8087F8A0
    lwz r4, 0x48(r4)
    lwz r0, 0x12a4(r4)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_803176D0_00000E58
    b lbl_fn_803176D0_00000E5C
lbl_fn_803176D0_00000E58:
    lwz r4, 0x14d4(r5)
lbl_fn_803176D0_00000E5C:
    lwz r7, 0x50(r4)
    addi r6, r6, 0x4
    addi r8, r8, 0x1
lbl_fn_803176D0_00000E68:
    lwz r0, 0x38(r1)
    cmplw r8, r0
    blt lbl_fn_803176D0_00000DF0
    addic. r0, r1, 0x28
    beq lbl_fn_803176D0_00000EA0
    beq lbl_fn_803176D0_00000EA0
    beq lbl_fn_803176D0_00000EA0
    lwz r3, 0x28(r1)
    cmpwi r3, 0x0
    beq lbl_fn_803176D0_00000EA0
    lwz r0, 0x2c(r1)
    subf r0, r0, r0
    stw r0, 0x2c(r1)
    bl dtor_80084684
lbl_fn_803176D0_00000EA0:
    addic. r0, r1, 0x34
    beq lbl_fn_803176D0_00000ECC
    beq lbl_fn_803176D0_00000ECC
    beq lbl_fn_803176D0_00000ECC
    lwz r3, 0x34(r1)
    cmpwi r3, 0x0
    beq lbl_fn_803176D0_00000ECC
    lwz r0, 0x38(r1)
    subf r0, r0, r0
    stw r0, 0x38(r1)
    bl dtor_80084684
lbl_fn_803176D0_00000ECC:
    lmw r14, 0x68(r1)
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_80317EA0(void)
{
    nofralloc
    lwz r4, lbl_8087F8A0
    lwz r5, 0x48(r4)
    lwz r0, 0x12a4(r5)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_80317EA0_00000F10
    lwz r4, 0xd1c(r3)
    li r0, 0x0
    stw r4, 0xd20(r3)
    stw r0, 0x1454(r3)
    stw r5, 0x14b8(r3)
    stw r5, 0xd1c(r3)
    b lbl_fn_80317EA0_00000F20
lbl_fn_80317EA0_00000F10:
    lwz r0, 0xd1c(r3)
    li r4, 0x1
    stw r4, 0x1454(r3)
    stw r0, 0x14b8(r3)
lbl_fn_80317EA0_00000F20:
    lwz r0, 0x14b8(r3)
    cmpwi r0, 0x0
    bnelr
    lwz r0, 0x14d4(r3)
    stw r0, 0x14b8(r3)
    blr
}

asm void fn_80317EF8(void)
{
    nofralloc
    stwu r1, -0x260(r1)
    mflr r0
    stw r0, 0x264(r1)
    addi r11, r1, 0x240
    stfd f31, 0x250(r1)
    psq_st f31, 0x258(r1), 0, 0
    stfd f30, 0x240(r1)
    psq_st f30, 0x248(r1), 0, 0
    bl _savegpr_27
    lwz r29, 0x14b8(r3)
    mr r30, r3
    cmpwi r29, 0x0
    beq lbl_fn_80317EF8_000015AC
    lis r4, lbl_8074959C@ha
    addi r27, r29, 0xb0
    addi r4, r4, lbl_8074959C@l
    addi r28, r1, 0xa8
    mr r3, r27
    li r5, 0x0
    addi r4, r4, 0x105
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80317EF8_00000F9C
    li r4, 0x0
    b lbl_fn_80317EF8_00000FA8
lbl_fn_80317EF8_00000F9C:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r27)
    add r4, r3, r0
lbl_fn_80317EF8_00000FA8:
    lfs f0, lbl_80884D60
    cmpwi r4, 0x0
    stfs f0, 0xa8(r1)
    stfs f0, 0xac(r1)
    stfs f0, 0xb0(r1)
    beq lbl_fn_80317EF8_00000FEC
    lfs f7, 0x1c(r4)
    addi r3, r1, 0x90
    lfs f0, 0xc(r4)
    stfs f0, 0x90(r1)
    lfs f2, 0x2c(r4)
    stfs f7, 0x94(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x98(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xb0(r1)
    b lbl_fn_80317EF8_0000100C
lbl_fn_80317EF8_00000FEC:
    psq_l f1, 0x528(r29), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    lfs f2, 0x530(r29)
    lfs f7, 0xac(r1)
    lfs f0, lbl_80884D8C
    stfs f2, 0xb0(r1)
    fadds f0, f7, f0
    stfs f0, 0xac(r1)
lbl_fn_80317EF8_0000100C:
    lfs f7, 0x530(r30)
    addi r3, r1, 0x9c
    lfs f0, 0xb0(r1)
    lfs f9, 0x52c(r30)
    fsubs f10, f7, f0
    lfs f8, 0xac(r1)
    lfs f7, 0x528(r30)
    lfs f0, 0xa8(r1)
    fsubs f8, f9, f8
    stfs f10, 0xa4(r1)
    fsubs f0, f7, f0
    stfs f8, 0xa0(r1)
    stfs f0, 0x9c(r1)
    bl fn_805F9940
    lwz r0, 0x1574(r30)
    cmpwi r0, 0x0
    bge lbl_fn_80317EF8_000010F0
    li r0, 0x0
    stw r0, 0x14bc(r30)
    stw r0, 0x14c0(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0x8
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    mr r3, r30
    li r4, 0x3e8
    bl fn_80232B7C
    lfs f0, lbl_80884D60
    li r3, -0x1
    lfs f1, lbl_80884D78
    li r0, 0x1
    stfs f0, 0x78(r1)
    addi r4, r30, 0x1590
    addi r5, r30, 0xb0
    addi r7, r1, 0x84
    stfs f0, 0x7c(r1)
    addi r8, r1, 0x78
    addi r9, r1, 0x68
    li r6, 0x0
    stfs f0, 0x80(r1)
    li r10, -0x1
    stfs f0, 0x84(r1)
    stfs f0, 0x88(r1)
    stfs f0, 0x8c(r1)
    stfs f1, 0x68(r1)
    stfs f1, 0x6c(r1)
    stfs f1, 0x70(r1)
    stfs f1, 0x74(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_80317EF8_000015AC
lbl_fn_80317EF8_000010F0:
    lwz r27, 0x1c88(r30)
    bl fn_80680CF8
    lwz r5, 0x1c88(r30)
    li r6, 0x1
    lwz r7, 0x7e0(r30)
    divw r4, r3, r5
    rlwinm r0, r7, 0, 28, 28
    cmplwi r0, 0x8
    mullw r0, r4, r5
    subf r0, r0, r3
    add r27, r27, r0
    beq lbl_fn_80317EF8_00001130
    rlwinm r0, r7, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_80317EF8_00001130
    li r6, 0x0
lbl_fn_80317EF8_00001130:
    cmpwi r6, 0x0
    bne lbl_fn_80317EF8_0000114C
    lwz r0, 0x7e0(r30)
    rlwinm r3, r0, 0, 8, 8
    subis r0, r3, 0x80
    cmplwi r0, 0x0
    bne lbl_fn_80317EF8_00001154
lbl_fn_80317EF8_0000114C:
    slwi r0, r27, 2
    subf r27, r27, r0
lbl_fn_80317EF8_00001154:
    lwz r0, 0x1520(r30)
    cmpw r0, r27
    ble lbl_fn_80317EF8_000015AC
    li r0, 0x0
    stw r0, 0x14bc(r30)
    stw r0, 0x14c0(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0x7
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lwz r27, 0x14b8(r30)
    lis r4, lbl_8074959C@ha
    addi r4, r4, lbl_8074959C@l
    addi r28, r1, 0x14
    addi r29, r27, 0xb0
    li r5, 0x0
    mr r3, r29
    addi r4, r4, 0x105
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80317EF8_000011C0
    li r4, 0x0
    b lbl_fn_80317EF8_000011CC
lbl_fn_80317EF8_000011C0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r29)
    add r4, r3, r0
lbl_fn_80317EF8_000011CC:
    lfs f0, lbl_80884D60
    cmpwi r4, 0x0
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    beq lbl_fn_80317EF8_00001210
    lfs f0, 0x1c(r4)
    addi r3, r1, 0x2c
    lfs f7, 0xc(r4)
    stfs f7, 0x2c(r1)
    lfs f2, 0x2c(r4)
    stfs f0, 0x30(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x1c(r1)
    b lbl_fn_80317EF8_00001230
lbl_fn_80317EF8_00001210:
    psq_l f1, 0x528(r27), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    lfs f2, 0x530(r27)
    lfs f7, 0x18(r1)
    lfs f0, lbl_80884D8C
    stfs f2, 0x1c(r1)
    fadds f0, f7, f0
    stfs f0, 0x18(r1)
lbl_fn_80317EF8_00001230:
    lwz r27, 0x14b8(r30)
    addi r3, r30, 0x1504
    psq_l f1, 0x528(r30), 0, 0
    addi r31, r1, 0x20
    lfs f2, 0x530(r30)
    cmpwi r27, 0x0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x150c(r30)
    bne lbl_fn_80317EF8_00001270
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x28(r1)
    b lbl_fn_80317EF8_00001560
lbl_fn_80317EF8_00001270:
    lis r4, lbl_8074959C@ha
    addi r29, r27, 0xb0
    addi r4, r4, lbl_8074959C@l
    addi r28, r1, 0x5c
    mr r3, r29
    li r5, 0x0
    addi r4, r4, 0x105
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80317EF8_000012A0
    li r4, 0x0
    b lbl_fn_80317EF8_000012AC
lbl_fn_80317EF8_000012A0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r29)
    add r4, r3, r0
lbl_fn_80317EF8_000012AC:
    lfs f0, lbl_80884D60
    cmpwi r4, 0x0
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    beq lbl_fn_80317EF8_000012F0
    lfs f7, 0x1c(r4)
    addi r3, r1, 0x44
    lfs f0, 0xc(r4)
    stfs f0, 0x44(r1)
    lfs f2, 0x2c(r4)
    stfs f7, 0x48(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x64(r1)
    b lbl_fn_80317EF8_00001310
lbl_fn_80317EF8_000012F0:
    psq_l f1, 0x528(r27), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    lfs f2, 0x530(r27)
    lfs f7, 0x60(r1)
    lfs f0, lbl_80884D8C
    stfs f2, 0x64(r1)
    fadds f0, f7, f0
    stfs f0, 0x60(r1)
lbl_fn_80317EF8_00001310:
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    lis r29, 0x4330
    lis r28, lbl_80749578@ha
    stw r0, 0x20c(r1)
    lfd f7, lbl_80749578@l(r28)
    stw r29, 0x208(r1)
    lfs f9, lbl_80884DA0
    lfd f0, 0x208(r1)
    lfs f8, lbl_80884D9C
    fsubs f10, f0, f7
    lfs f7, lbl_80884D78
    lfs f0, 0x1500(r30)
    lfs f31, lbl_80884D60
    fdivs f9, f10, f9
    stfs f31, 0x50(r1)
    stfs f31, 0x54(r1)
    fmadds f7, f8, f9, f7
    fmuls f0, f0, f7
    stfs f0, 0x58(r1)
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0x214(r1)
    lfd f9, lbl_80749578@l(r28)
    stw r29, 0x210(r1)
    lfs f8, lbl_80884DA0
    lfd f0, 0x210(r1)
    lfs f7, lbl_80884DA4
    fsubs f9, f0, f9
    lfs f0, lbl_80884D60
    fdivs f8, f9, f8
    fmadds f30, f7, f8, f0
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0x21c(r1)
    lfs f7, lbl_80884D60
    addi r27, r1, 0x1d8
    stw r29, 0x218(r1)
    lfd f8, lbl_80749578@l(r28)
    fcmpu cr0, f7, f30
    lfd f0, 0x218(r1)
    lfs f9, lbl_80884DA0
    fsubs f10, f0, f8
    lfs f0, lbl_80884D78
    lfs f8, lbl_80884DA8
    stfs f30, 0x3c(r1)
    fdivs f9, f10, f9
    stfs f31, 0x40(r1)
    stfs f7, 0x204(r1)
    stfs f7, 0x1fc(r1)
    stfs f7, 0x1f8(r1)
    stfs f7, 0x1f4(r1)
    fmadds f8, f8, f9, f7
    stfs f7, 0x1f0(r1)
    stfs f8, 0x38(r1)
    stfs f7, 0x1e8(r1)
    stfs f7, 0x1e4(r1)
    stfs f7, 0x1e0(r1)
    stfs f7, 0x1dc(r1)
    stfs f0, 0x200(r1)
    stfs f0, 0x1ec(r1)
    stfs f0, 0x1d8(r1)
    beq lbl_fn_80317EF8_00001460
    fmr f1, f30
    addi r3, r1, 0x178
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x178
    addi r5, r1, 0x1a8
    bl fn_805F89F0
    addi r3, r1, 0x1a8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80317EF8_00001460:
    lfs f0, lbl_80884D60
    lfs f1, 0x38(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80317EF8_000014C0
    addi r3, r1, 0x118
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x118
    addi r5, r1, 0x148
    bl fn_805F89F0
    addi r3, r1, 0x148
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80317EF8_000014C0:
    lfs f0, lbl_80884D60
    lfs f1, 0x40(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80317EF8_00001520
    addi r3, r1, 0xb8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0xb8
    addi r5, r1, 0xe8
    bl fn_805F89F0
    addi r3, r1, 0xe8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80317EF8_00001520:
    addi r4, r1, 0x50
    addi r3, r1, 0x1d8
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x64(r1)
    lfs f0, 0x58(r1)
    lfs f9, 0x60(r1)
    fadds f10, f7, f0
    lfs f8, 0x54(r1)
    lfs f7, 0x5c(r1)
    lfs f0, 0x50(r1)
    fadds f8, f9, f8
    stfs f10, 0x28(r1)
    fadds f0, f7, f0
    stfs f8, 0x24(r1)
    stfs f0, 0x20(r1)
lbl_fn_80317EF8_00001560:
    lis r4, lbl_80749568@ha
    lfs f0, lbl_80884D60
    addi r4, r4, lbl_80749568@l
    lfs f2, 0x8(r31)
    addi r8, r30, 0x1510
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    addi r3, r1, 0x10
    lwz r4, 0x8(r4)
    addi r5, r30, 0x528
    stfs f2, 0x1518(r30)
    li r6, 0x0
    lfs f1, lbl_80884D78
    li r7, -0x1
    stfs f0, 0x151c(r30)
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80317EF8_000015AC:
    addi r11, r1, 0x240
    psq_l f31, 0x258(r1), 0, 0
    lfd f31, 0x250(r1)
    psq_l f30, 0x248(r1), 0, 0
    lfd f30, 0x240(r1)
    bl _restgpr_27
    lwz r0, 0x264(r1)
    mtlr r0
    addi r1, r1, 0x260
    blr
}

asm void fn_80318594(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    lfs f5, 0x52c(r3)
    addi r4, r1, 0x8
    lfs f4, 0x5a8(r3)
    addi r5, r1, 0x14
    lfs f3, 0x528(r3)
    addi r6, r1, 0x20
    fadds f4, f5, f4
    lfs f0, 0x5a4(r3)
    lfs f5, 0x5b0(r3)
    fadds f0, f3, f0
    stfs f4, 0xc(r1)
    lfs f3, 0x530(r3)
    stfs f0, 0x8(r1)
    lfs f0, 0x5ac(r3)
    psq_l f1, 0x0(r4), 0, 0
    fadds f6, f3, f0
    psq_st f1, 0x614(r3), 0, 0
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fmr f2, f6
    lfs f4, 0x618(r3)
    lfs f3, 0x18(r1)
    lfs f0, lbl_80884D74
    fadds f4, f4, f5
    stfs f2, 0x61c(r3)
    lfs f2, 0x530(r3)
    fadds f0, f3, f0
    stfs f2, 0x1c(r1)
    stfs f2, 0x28(r1)
    frsp f2, f2
    stfs f2, 0x5fc(r3)
    lfs f2, 0x1c(r1)
    stfs f0, 0x18(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_st f1, 0x5f4(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f5, 0x620(r3)
    stfs f6, 0x10(r1)
    stfs f4, 0x618(r3)
    psq_st f1, 0x600(r3), 0, 0
    stfs f2, 0x608(r3)
    stfs f5, 0x60c(r3)
    addi r1, r1, 0x30
    blr
}

asm void fn_80318648(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r4, lbl_8074959C@ha
    stw r0, 0x34(r1)
    addi r4, r4, lbl_8074959C@l
    addi r4, r4, 0x105
    stw r31, 0x2c(r1)
    addi r31, r5, 0xb0
    stw r30, 0x28(r1)
    mr r30, r5
    li r5, 0x0
    stw r29, 0x24(r1)
    mr r29, r3
    mr r3, r31
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80318648_000016D4
    li r4, 0x0
    b lbl_fn_80318648_000016E0
lbl_fn_80318648_000016D4:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r4, r3, r0
lbl_fn_80318648_000016E0:
    lfs f0, lbl_80884D60
    cmpwi r4, 0x0
    stfs f0, 0x0(r29)
    stfs f0, 0x4(r29)
    stfs f0, 0x8(r29)
    beq lbl_fn_80318648_00001724
    lfs f0, 0x1c(r4)
    addi r3, r1, 0x8
    lfs f3, 0xc(r4)
    lfs f2, 0x2c(r4)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x8(r29)
    b lbl_fn_80318648_00001744
lbl_fn_80318648_00001724:
    lfs f2, 0x530(r30)
    psq_l f1, 0x528(r30), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, lbl_80884D8C
    lfs f3, 0x4(r29)
    stfs f2, 0x8(r29)
    fadds f0, f3, f0
    stfs f0, 0x4(r29)
lbl_fn_80318648_00001744:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80318720(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    stw r31, 0x12c(r1)
    stw r30, 0x128(r1)
    stw r29, 0x124(r1)
    stw r28, 0x120(r1)
    mr r28, r3
    lwz r29, 0x14b8(r3)
    cmpwi r29, 0x0
    beq lbl_fn_80318720_00001A40
    lfs f0, lbl_80884D60
    lis r4, lbl_8074959C@ha
    addi r4, r4, lbl_8074959C@l
    addi r30, r29, 0xb0
    stfs f0, 0x98(r1)
    mr r3, r30
    addi r31, r1, 0x8c
    addi r4, r4, 0x105
    stfs f0, 0xc(r1)
    li r5, 0x0
    stfs f0, 0x1c(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80318720_000017DC
    li r4, 0x0
    b lbl_fn_80318720_000017E8
lbl_fn_80318720_000017DC:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r30)
    add r4, r3, r0
lbl_fn_80318720_000017E8:
    lfs f0, lbl_80884D60
    cmpwi r4, 0x0
    stfs f0, 0x8c(r1)
    stfs f0, 0x90(r1)
    stfs f0, 0x94(r1)
    beq lbl_fn_80318720_0000182C
    lfs f3, 0x1c(r4)
    addi r3, r1, 0x68
    lfs f0, 0xc(r4)
    stfs f0, 0x68(r1)
    lfs f2, 0x2c(r4)
    stfs f3, 0x6c(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x94(r1)
    b lbl_fn_80318720_0000184C
lbl_fn_80318720_0000182C:
    psq_l f1, 0x528(r29), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f2, 0x530(r29)
    lfs f3, 0x90(r1)
    lfs f0, lbl_80884D8C
    stfs f2, 0x94(r1)
    fadds f0, f3, f0
    stfs f0, 0x90(r1)
lbl_fn_80318720_0000184C:
    lfs f3, 0x94(r1)
    addi r3, r1, 0x80
    lfs f0, 0x530(r28)
    mr r4, r3
    lfs f5, 0x90(r1)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r28)
    lfs f0, 0x528(r28)
    lfs f3, 0x8c(r1)
    fsubs f4, f5, f4
    stfs f6, 0x88(r1)
    fsubs f0, f3, f0
    stfs f4, 0x84(r1)
    stfs f0, 0x80(r1)
    bl fn_805F98D0
    lfs f2, 0x88(r1)
    addi r3, r1, 0x80
    lfs f0, lbl_80884D90
    addi r31, r1, 0x74
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x7c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80318720_000018D8
    lfs f3, 0x74(r1)
    lfs f0, lbl_80884D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80318720_000018CC
    lfs f0, lbl_80884D94
    b lbl_fn_80318720_000018D0
lbl_fn_80318720_000018CC:
    lfs f0, lbl_80884D98
lbl_fn_80318720_000018D0:
    stfs f0, 0x60(r1)
    b lbl_fn_80318720_000018EC
lbl_fn_80318720_000018D8:
    frsp f2, f2
    lfs f1, 0x74(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x60(r1)
lbl_fn_80318720_000018EC:
    lfs f0, 0x60(r1)
    addi r3, r1, 0xa8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884D60
    addi r4, r1, 0x50
    lfs f30, 0xb0(r1)
    mr r5, r4
    lfs f31, 0xac(r1)
    addi r3, r1, 0xd8
    lfs f13, 0xa8(r1)
    lfs f12, 0xc0(r1)
    lfs f11, 0xbc(r1)
    lfs f10, 0xb8(r1)
    lfs f9, 0xd0(r1)
    lfs f8, 0xcc(r1)
    lfs f7, 0xc8(r1)
    lfs f6, 0xd4(r1)
    lfs f5, 0xc4(r1)
    lfs f4, 0xb4(r1)
    lfs f0, lbl_80884D78
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x7c(r1)
    stfs f3, 0x108(r1)
    stfs f3, 0x10c(r1)
    stfs f3, 0x110(r1)
    stfs f0, 0x114(r1)
    stfs f13, 0x20(r1)
    stfs f31, 0x24(r1)
    stfs f30, 0x28(r1)
    stfs f13, 0xd8(r1)
    stfs f31, 0xdc(r1)
    stfs f30, 0xe0(r1)
    stfs f10, 0x2c(r1)
    stfs f11, 0x30(r1)
    stfs f12, 0x34(r1)
    stfs f10, 0xe8(r1)
    stfs f11, 0xec(r1)
    stfs f12, 0xf0(r1)
    stfs f7, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f9, 0x40(r1)
    stfs f7, 0xf8(r1)
    stfs f8, 0xfc(r1)
    stfs f9, 0x100(r1)
    stfs f4, 0x44(r1)
    stfs f5, 0x48(r1)
    stfs f6, 0x4c(r1)
    stfs f4, 0xe4(r1)
    stfs f5, 0xf4(r1)
    stfs f6, 0x104(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F9750
    lfs f2, 0x58(r1)
    lfs f0, lbl_80884D90
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80318720_00001A08
    lfs f3, 0x54(r1)
    lfs f0, lbl_80884D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80318720_000019F8
    lfs f0, lbl_80884D94
    b lbl_fn_80318720_000019FC
lbl_fn_80318720_000019F8:
    lfs f0, lbl_80884D98
lbl_fn_80318720_000019FC:
    fneg f0, f0
    stfs f0, 0x5c(r1)
    b lbl_fn_80318720_00001A1C
lbl_fn_80318720_00001A08:
    lfs f1, 0x54(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x5c(r1)
lbl_fn_80318720_00001A1C:
    lfs f2, lbl_80884D60
    addi r3, r1, 0x5c
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x64(r1)
    stfs f2, 0x7c(r1)
    frsp f2, f2
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x534(r28), 0, 0
    stfs f2, 0x53c(r28)
lbl_fn_80318720_00001A40:
    lwz r0, 0x154(r1)
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    lwz r28, 0x120(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}
