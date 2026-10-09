#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _restgpr_21(void);
extern void _savegpr_20(void);
extern void _savegpr_21(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800F8C6C(void);
extern void fn_800FAB80(void);
extern void fn_8016E970(void);
extern void fn_8016F3D0(void);
extern void fn_801781B0(void);
extern void fn_80219E6C(void);
extern void fn_80239DAC(void);
extern void fn_8023A254(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_8074A490[];
extern u8 lbl_8074A498[];
extern u8 lbl_8074A4C0[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885238;
extern u32 lbl_8088523C;
extern u32 lbl_80885240;
extern u32 lbl_80885250;
extern u32 lbl_80885254;
extern u32 lbl_8088525C;
extern u32 lbl_80885260;
extern u32 lbl_80885270;
extern u32 lbl_80885274;
extern u32 lbl_80885278;
extern u32 lbl_80885280;
extern u32 lbl_80885284;
extern u32 lbl_80885288;
extern u32 lbl_80885290;
extern u32 lbl_80885298;
extern u32 lbl_8088529C;
extern u32 lbl_808852A0;
extern u32 lbl_808852A4;
extern u32 lbl_808852A8;
extern u32 lbl_808852AC;
extern u32 lbl_808852B0;
extern u32 lbl_808852B4;
extern u32 lbl_808852C0;
extern u32 lbl_808852C4;
extern u32 lbl_808852CC;
extern u32 lbl_808852D4;
extern u32 lbl_808852D8;
extern u32 lbl_808852DC;
extern u32 lbl_808852E0;
extern u32 lbl_808852E4;
extern u32 lbl_808852E8;
extern u32 lbl_808852EC;
extern u32 lbl_808852F0;
extern u32 lbl_808852F4;
extern u32 lbl_808852F8;
extern u32 lbl_808852FC;
extern u32 lbl_80885300;
extern u32 lbl_80885304;
extern u32 lbl_80885308;

/* Function declarations */
void fn_8033D750(void);
void fn_8033DB8C(void);
void fn_8033E058(void);
void fn_8033E8D4(void);
void fn_8033EF90(void);

asm void fn_8033D750(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x104(r1)
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    stw r30, 0xd8(r1)
    mr r30, r3
    lfs f30, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_8033D750_00000138
    li r31, 0x0
    stw r31, 0x14b4(r30)
    stw r31, 0x14b8(r30)
    stw r31, 0x14c0(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ea
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ed
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ef
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3f0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3f1
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80885260
    li r0, 0x1
    stw r31, 0x58c(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80885238
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x2
    lfs f2, lbl_80885284
    li r6, 0x1
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    b lbl_fn_8033D750_00000414
lbl_fn_8033D750_00000138:
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_808852D8
    fcmpo cr0, f3, f0
    bge lbl_fn_8033D750_000003CC
    lwz r4, 0x14b0(r30)
    addi r3, r1, 0x50
    lfs f0, 0x530(r30)
    addi r31, r1, 0x5c
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r30)
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    lfs f0, 0x528(r30)
    stfs f2, 0x58(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80885298
    stfs f4, 0x54(r1)
    frsp f4, f2
    stfs f3, 0x50(r1)
    fabs f3, f4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8033D750_000001CC
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80885238
    fcmpo cr0, f3, f0
    ble lbl_fn_8033D750_000001C0
    lfs f0, lbl_8088529C
    b lbl_fn_8033D750_000001C4
lbl_fn_8033D750_000001C0:
    lfs f0, lbl_808852A0
lbl_fn_8033D750_000001C4:
    stfs f0, 0x48(r1)
    b lbl_fn_8033D750_000001E0
lbl_fn_8033D750_000001CC:
    fmr f2, f4
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8033D750_000001E0:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885238
    addi r4, r1, 0x38
    lfs f30, 0x70(r1)
    mr r5, r4
    lfs f31, 0x6c(r1)
    addi r3, r1, 0x98
    lfs f13, 0x68(r1)
    lfs f12, 0x80(r1)
    lfs f11, 0x7c(r1)
    lfs f10, 0x78(r1)
    lfs f9, 0x90(r1)
    lfs f8, 0x8c(r1)
    lfs f7, 0x88(r1)
    lfs f6, 0x94(r1)
    lfs f5, 0x84(r1)
    lfs f4, 0x74(r1)
    lfs f0, lbl_80885260
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x98(r1)
    stfs f31, 0x9c(r1)
    stfs f30, 0xa0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xa8(r1)
    stfs f11, 0xac(r1)
    stfs f12, 0xb0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xb8(r1)
    stfs f8, 0xbc(r1)
    stfs f9, 0xc0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xa4(r1)
    stfs f5, 0xb4(r1)
    stfs f6, 0xc4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80885298
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8033D750_000002FC
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80885238
    fcmpo cr0, f3, f0
    ble lbl_fn_8033D750_000002EC
    lfs f0, lbl_8088529C
    b lbl_fn_8033D750_000002F0
lbl_fn_8033D750_000002EC:
    lfs f0, lbl_808852A0
lbl_fn_8033D750_000002F0:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8033D750_00000310
lbl_fn_8033D750_000002FC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8033D750_00000310:
    addi r3, r1, 0x44
    lfs f3, lbl_80885238
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8074A498@ha
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f3
    lfs f0, 0x538(r30)
    lfs f31, 0x60(r1)
    stfs f2, 0x64(r1)
    fsubs f1, f31, f0
    lfd f2, lbl_8074A498@l(r3)
    stfs f3, 0x4c(r1)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_808852AC
    fcmpo cr0, f4, f0
    ble lbl_fn_8033D750_0000035C
    lfs f0, lbl_80885280
    fsubs f4, f4, f0
lbl_fn_8033D750_0000035C:
    lfs f0, lbl_808852B0
    fcmpo cr0, f4, f0
    bge lbl_fn_8033D750_00000370
    lfs f0, lbl_80885280
    fadds f4, f4, f0
lbl_fn_8033D750_00000370:
    lfs f0, lbl_80885238
    fcmpo cr0, f4, f0
    bge lbl_fn_8033D750_00000384
    fneg f0, f4
    b lbl_fn_8033D750_00000388
lbl_fn_8033D750_00000384:
    fmr f0, f4
lbl_fn_8033D750_00000388:
    lfs f3, lbl_808852B4
    fcmpo cr0, f0, f3
    cror eq, lt, eq
    bne lbl_fn_8033D750_000003A0
    stfs f31, 0x538(r30)
    b lbl_fn_8033D750_000003CC
lbl_fn_8033D750_000003A0:
    lfs f0, lbl_80885238
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8033D750_000003C0
    lfs f0, 0x538(r30)
    fsubs f0, f0, f3
    stfs f0, 0x538(r30)
    b lbl_fn_8033D750_000003CC
lbl_fn_8033D750_000003C0:
    lfs f0, 0x538(r30)
    fadds f0, f0, f3
    stfs f0, 0x538(r30)
lbl_fn_8033D750_000003CC:
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_808852DC
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8033D750_00000414
    lfs f0, lbl_808852CC
    fcmpo cr0, f3, f0
    bge lbl_fn_8033D750_00000414
    lwz r3, lbl_8087F048
    mr r6, r30
    lwz r7, 0x14e0(r30)
    li r4, 0x0
    lwz r8, 0x590(r30)
    li r5, 0x0
    lfs f1, lbl_80885238
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
lbl_fn_8033D750_00000414:
    lwz r0, 0x104(r1)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_8033DB8C(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    addi r11, r1, 0x180
    stfd f31, 0x200(r1)
    psq_st f31, 0x208(r1), 0, 0
    stfd f30, 0x1f0(r1)
    psq_st f30, 0x1f8(r1), 0, 0
    stfd f29, 0x1e0(r1)
    psq_st f29, 0x1e8(r1), 0, 0
    stfd f28, 0x1d0(r1)
    psq_st f28, 0x1d8(r1), 0, 0
    stfd f27, 0x1c0(r1)
    psq_st f27, 0x1c8(r1), 0, 0
    stfd f26, 0x1b0(r1)
    psq_st f26, 0x1b8(r1), 0, 0
    stfd f25, 0x1a0(r1)
    psq_st f25, 0x1a8(r1), 0, 0
    stfd f24, 0x190(r1)
    psq_st f24, 0x198(r1), 0, 0
    stfd f23, 0x180(r1)
    psq_st f23, 0x188(r1), 0, 0
    bl _savegpr_20
    lwz r4, 0x14b4(r3)
    mr r21, r3
    cmpwi r4, 0x0
    bne lbl_fn_8033DB8C_0000079C
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_808852C4
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8033DB8C_000008A8
    addi r0, r4, 0x1
    stw r0, 0x14b4(r3)
    lwz r20, lbl_8087F048
    mr r3, r20
    bl fn_800F8548
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r6, r3
    lfs f1, lbl_80885238
    stw r0, 0xc(r1)
    mr r3, r20
    lfs f2, lbl_80885260
    mr r4, r21
    lwz r5, 0x14cc(r21)
    addi r7, r21, 0x528
    addi r8, r21, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    li r0, 0x0
    stw r0, 0xbc(r1)
    lwz r3, lbl_8087F8A0
    lwz r22, 0x48(r3)
    b lbl_fn_8033DB8C_000005F8
lbl_fn_8033DB8C_0000051C:
    lwz r3, 0x38(r22)
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8033DB8C_00000548
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    beq lbl_fn_8033DB8C_00000548
    li r7, 0x1
lbl_fn_8033DB8C_00000548:
    cmpwi r7, 0x0
    beq lbl_fn_8033DB8C_00000564
    lwz r0, 0x7e0(r22)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8033DB8C_00000564
    li r6, 0x1
lbl_fn_8033DB8C_00000564:
    cmpwi r6, 0x0
    beq lbl_fn_8033DB8C_00000598
    lwz r0, 0x55c(r22)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8033DB8C_0000058C
    lwz r0, 0x560(r22)
    cmpwi r0, 0x1c
    bne lbl_fn_8033DB8C_0000058C
    li r3, 0x1
lbl_fn_8033DB8C_0000058C:
    cmpwi r3, 0x0
    bne lbl_fn_8033DB8C_00000598
    li r5, 0x1
lbl_fn_8033DB8C_00000598:
    cmpwi r5, 0x0
    beq lbl_fn_8033DB8C_000005F4
    lwz r0, 0x54c(r22)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_8033DB8C_000005F4
    mr r3, r21
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_8033DB8C_000005F4
    lwz r0, 0xd18(r22)
    cmpwi r0, 0x0
    beq lbl_fn_8033DB8C_000005F4
    lwz r0, 0xbc(r1)
    addi r3, r1, 0xc0
    slwi r0, r0, 2
    add. r3, r3, r0
    beq lbl_fn_8033DB8C_000005E8
    stw r22, 0x0(r3)
lbl_fn_8033DB8C_000005E8:
    lwz r3, 0xbc(r1)
    addi r0, r3, 0x1
    stw r0, 0xbc(r1)
lbl_fn_8033DB8C_000005F4:
    lwz r22, 0x14ac(r22)
lbl_fn_8033DB8C_000005F8:
    cmpwi r22, 0x0
    mr r4, r22
    bne lbl_fn_8033DB8C_0000051C
    lwz r23, 0xbc(r1)
    cmplwi r23, 0x7
    bge lbl_fn_8033DB8C_00000614
    li r23, 0x7
lbl_fn_8033DB8C_00000614:
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lis r4, lbl_8074A490@ha
    lfs f24, lbl_80885280
    lfd f23, lbl_8074A490@l(r4)
    mr r28, r3
    lfs f25, lbl_80885238
    xoris r30, r23, 0x8000
    lfs f26, lbl_80885260
    addi r26, r1, 0x68
    lfs f28, lbl_808852A8
    addi r27, r1, 0x28
    lfs f29, lbl_8088525C
    addi r25, r1, 0x1c
    lfs f30, lbl_80885240
    addi r20, r1, 0xc0
    lfs f31, lbl_808852E4
    li r22, 0x0
    lfs f27, lbl_808852E0
    lis r29, 0x4330
    li r31, 0x0
    b lbl_fn_8033DB8C_00000790
lbl_fn_8033DB8C_0000066C:
    stw r30, 0x14c(r1)
    xoris r0, r22, 0x8000
    addi r3, r1, 0x68
    li r4, 0x79
    stw r29, 0x148(r1)
    lfd f0, 0x148(r1)
    stw r0, 0x144(r1)
    fsubs f0, f0, f23
    stw r29, 0x140(r1)
    fdivs f0, f24, f0
    lfd f3, 0x140(r1)
    fsubs f3, f3, f23
    fmuls f1, f3, f0
    bl fn_805F8E70
    stfs f25, 0x1c(r1)
    addi r3, r1, 0x38
    li r4, 0x79
    stfs f25, 0x20(r1)
    stfs f26, 0x24(r1)
    lfs f1, 0x538(r21)
    bl fn_805F8E70
    addi r4, r1, 0x1c
    addi r3, r1, 0x38
    mr r5, r4
    bl fn_805F93C0
    psq_l f1, 0x0(r25), 0, 0
    mr r3, r26
    lfs f2, 0x24(r1)
    mr r4, r27
    psq_st f1, 0x0(r27), 0, 0
    mr r5, r27
    stfs f2, 0x30(r1)
    bl fn_805F93C0
    lfs f0, 0x2c(r1)
    lwz r0, 0xbc(r1)
    fadds f0, f0, f27
    lwz r5, 0xbc(r1)
    cmpwi r0, 0x0
    stfs f0, 0x2c(r1)
    beq lbl_fn_8033DB8C_0000078C
    divwu r0, r22, r5
    stfs f25, 0x9c(r1)
    lwz r24, lbl_8087F048
    mr r4, r21
    stfs f28, 0xa0(r1)
    addi r3, r1, 0x10
    mullw r0, r0, r5
    stfs f29, 0xa4(r1)
    stfs f30, 0xac(r1)
    stw r31, 0xb4(r1)
    subf r0, r0, r22
    slwi r0, r0, 2
    stfs f31, 0xa8(r1)
    lwzx r0, r20, r0
    stw r0, 0x98(r1)
    stfs f25, 0xb0(r1)
    stw r28, 0xb8(r1)
    bl fn_801781B0
    lwz r3, 0x14cc(r21)
    lwz r3, 0x6c(r3)
    bl fn_80219E6C
    lfs f1, lbl_80885238
    mr r5, r3
    lfs f2, lbl_80885260
    mr r3, r24
    mr r4, r21
    mr r7, r27
    addi r6, r1, 0x10
    addi r8, r1, 0x98
    li r9, 0x2006
    li r10, 0x0
    bl fn_800F8574
lbl_fn_8033DB8C_0000078C:
    addi r22, r22, 0x1
lbl_fn_8033DB8C_00000790:
    cmpw r22, r23
    blt lbl_fn_8033DB8C_0000066C
    b lbl_fn_8033DB8C_000008A8
lbl_fn_8033DB8C_0000079C:
    lfs f23, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f23, f1
    cror eq, gt, eq
    bne lbl_fn_8033DB8C_000008A8
    li r22, 0x0
    stw r22, 0x14b4(r21)
    stw r22, 0x14b8(r21)
    stw r22, 0x14c0(r21)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r21)
    mr r4, r21
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r21
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r21
    li r5, 0x3ea
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r21
    li r5, 0x3ed
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r21
    li r5, 0x3ef
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r21
    li r5, 0x3f0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r21
    li r5, 0x3f1
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r21
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80885260
    li r0, 0x1
    stw r22, 0x58c(r21)
    addi r3, r21, 0xb0
    lfs f1, lbl_80885238
    li r4, 0x0
    stw r0, 0x3fc(r21)
    li r5, 0x2
    lfs f2, lbl_80885284
    li r6, 0x1
    stfs f0, 0x2fc(r21)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r21)
    bl fn_80097C08
lbl_fn_8033DB8C_000008A8:
    addi r11, r1, 0x180
    psq_l f31, 0x208(r1), 0, 0
    lfd f31, 0x200(r1)
    psq_l f30, 0x1f8(r1), 0, 0
    lfd f30, 0x1f0(r1)
    psq_l f29, 0x1e8(r1), 0, 0
    lfd f29, 0x1e0(r1)
    psq_l f28, 0x1d8(r1), 0, 0
    lfd f28, 0x1d0(r1)
    psq_l f27, 0x1c8(r1), 0, 0
    lfd f27, 0x1c0(r1)
    psq_l f26, 0x1b8(r1), 0, 0
    lfd f26, 0x1b0(r1)
    psq_l f25, 0x1a8(r1), 0, 0
    lfd f25, 0x1a0(r1)
    psq_l f24, 0x198(r1), 0, 0
    lfd f24, 0x190(r1)
    psq_l f23, 0x188(r1), 0, 0
    lfd f23, 0x180(r1)
    bl _restgpr_20
    lwz r0, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_8033E058(void)
{
    nofralloc
    stwu r1, -0x260(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x264(r1)
    stfd f31, 0x250(r1)
    psq_st f31, 0x258(r1), 0, 0
    stfd f30, 0x240(r1)
    psq_st f30, 0x248(r1), 0, 0
    stw r31, 0x23c(r1)
    mr r31, r3
    addi r3, r3, 0xb0
    stw r30, 0x238(r1)
    bl fn_80097D7C
    lfs f0, lbl_80885288
    li r0, 0x0
    lfs f3, 0x2e4(r31)
    fsubs f0, f1, f0
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8033E058_0000095C
    li r0, 0x1
lbl_fn_8033E058_0000095C:
    cmpwi r0, 0x0
    beq lbl_fn_8033E058_00000A58
    li r30, 0x0
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    stw r30, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ea
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ed
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ef
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3f0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3f1
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80885260
    li r0, 0x1
    stw r30, 0x58c(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80885238
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x2
    lfs f2, lbl_80885284
    li r6, 0x1
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_8033E058_0000115C
lbl_fn_8033E058_00000A58:
    lfs f3, 0x2e4(r31)
    li r0, 0x0
    lfs f0, lbl_808852D4
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8033E058_00000A80
    lfs f0, lbl_808852E8
    fcmpo cr0, f3, f0
    bge lbl_fn_8033E058_00000A80
    li r0, 0x1
lbl_fn_8033E058_00000A80:
    cmpwi r0, 0x0
    beq lbl_fn_8033E058_00000A94
    lfs f0, lbl_808852EC
    stfs f0, 0x2e8(r31)
    b lbl_fn_8033E058_00000A9C
lbl_fn_8033E058_00000A94:
    lfs f0, lbl_808852A4
    stfs f0, 0x2e8(r31)
lbl_fn_8033E058_00000A9C:
    lfs f1, 0x2e8(r31)
    addi r4, r31, 0x1698
    lwz r3, lbl_8087F3C0
    li r5, 0x0
    bl fn_8023A254
    lfs f4, 0x2e4(r31)
    lfs f3, lbl_808852F0
    lfs f0, lbl_808852F4
    fsubs f3, f4, f3
    lfs f4, lbl_80885260
    fdivs f0, f3, f0
    fcmpo cr0, f4, f0
    bge lbl_fn_8033E058_00000AD4
    b lbl_fn_8033E058_00000AD8
lbl_fn_8033E058_00000AD4:
    fmr f4, f0
lbl_fn_8033E058_00000AD8:
    lfs f11, lbl_80885238
    fcmpo cr0, f11, f4
    ble lbl_fn_8033E058_00000AE8
    b lbl_fn_8033E058_00000B10
lbl_fn_8033E058_00000AE8:
    lfs f4, 0x2e4(r31)
    lfs f3, lbl_808852F0
    lfs f0, lbl_808852F4
    fsubs f3, f4, f3
    lfs f11, lbl_80885260
    fdivs f0, f3, f0
    fcmpo cr0, f11, f0
    bge lbl_fn_8033E058_00000B0C
    b lbl_fn_8033E058_00000B10
lbl_fn_8033E058_00000B0C:
    fmr f11, f0
lbl_fn_8033E058_00000B10:
    lfs f0, 0x1570(r31)
    addi r3, r1, 0xf8
    lfs f5, 0x1594(r31)
    lfs f3, 0x156c(r31)
    fsubs f10, f0, f5
    lfs f4, 0x1590(r31)
    lfs f0, 0x1568(r31)
    fsubs f9, f3, f4
    lfs f3, 0x158c(r31)
    fmuls f7, f10, f11
    fsubs f8, f0, f3
    lfs f12, 0x2e4(r31)
    fmuls f6, f9, f11
    fadds f2, f7, f5
    lfs f0, lbl_808852CC
    fmuls f5, f8, f11
    fadds f4, f6, f4
    stfs f8, 0xe0(r1)
    fcmpo cr0, f12, f0
    fadds f3, f5, f3
    stfs f4, 0xfc(r1)
    stfs f3, 0xf8(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f9, 0xe4(r1)
    stfs f10, 0xe8(r1)
    stfs f5, 0xd4(r1)
    stfs f6, 0xd8(r1)
    stfs f7, 0xdc(r1)
    stfs f2, 0x100(r1)
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
    cror eq, lt, eq
    bne lbl_fn_8033E058_00001114
    lwz r4, 0x14b0(r31)
    frsp f3, f2
    lfs f0, 0x52c(r31)
    addi r3, r1, 0xbc
    lfs f4, 0x530(r4)
    addi r30, r1, 0xc8
    lfs f5, 0x52c(r4)
    fsubs f2, f4, f3
    lfs f4, 0x528(r4)
    lfs f3, 0x528(r31)
    fsubs f5, f5, f0
    lfs f0, lbl_80885298
    fsubs f3, f4, f3
    frsp f4, f2
    stfs f5, 0xc0(r1)
    stfs f3, 0xbc(r1)
    fabs f3, f4
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0xc4(r1)
    frsp f3, f3
    psq_st f1, 0x0(r30), 0, 0
    fcmpo cr0, f3, f0
    stfs f2, 0xd0(r1)
    bge lbl_fn_8033E058_00000C18
    lfs f3, 0xc8(r1)
    lfs f0, lbl_80885238
    fcmpo cr0, f3, f0
    ble lbl_fn_8033E058_00000C0C
    lfs f0, lbl_8088529C
    b lbl_fn_8033E058_00000C10
lbl_fn_8033E058_00000C0C:
    lfs f0, lbl_808852A0
lbl_fn_8033E058_00000C10:
    stfs f0, 0xb4(r1)
    b lbl_fn_8033E058_00000C2C
lbl_fn_8033E058_00000C18:
    fmr f2, f4
    lfs f1, 0xc8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xb4(r1)
lbl_fn_8033E058_00000C2C:
    lfs f0, 0xb4(r1)
    addi r3, r1, 0x190
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885238
    addi r4, r1, 0xa4
    lfs f30, 0x198(r1)
    mr r5, r4
    lfs f31, 0x194(r1)
    addi r3, r1, 0x1c0
    lfs f13, 0x190(r1)
    lfs f12, 0x1a8(r1)
    lfs f11, 0x1a4(r1)
    lfs f10, 0x1a0(r1)
    lfs f9, 0x1b8(r1)
    lfs f8, 0x1b4(r1)
    lfs f7, 0x1b0(r1)
    lfs f6, 0x1bc(r1)
    lfs f5, 0x1ac(r1)
    lfs f4, 0x19c(r1)
    lfs f0, lbl_80885260
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xd0(r1)
    stfs f3, 0x1f0(r1)
    stfs f3, 0x1f4(r1)
    stfs f3, 0x1f8(r1)
    stfs f0, 0x1fc(r1)
    stfs f13, 0x74(r1)
    stfs f31, 0x78(r1)
    stfs f30, 0x7c(r1)
    stfs f13, 0x1c0(r1)
    stfs f31, 0x1c4(r1)
    stfs f30, 0x1c8(r1)
    stfs f10, 0x80(r1)
    stfs f11, 0x84(r1)
    stfs f12, 0x88(r1)
    stfs f10, 0x1d0(r1)
    stfs f11, 0x1d4(r1)
    stfs f12, 0x1d8(r1)
    stfs f7, 0x8c(r1)
    stfs f8, 0x90(r1)
    stfs f9, 0x94(r1)
    stfs f7, 0x1e0(r1)
    stfs f8, 0x1e4(r1)
    stfs f9, 0x1e8(r1)
    stfs f4, 0x98(r1)
    stfs f5, 0x9c(r1)
    stfs f6, 0xa0(r1)
    stfs f4, 0x1cc(r1)
    stfs f5, 0x1dc(r1)
    stfs f6, 0x1ec(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xac(r1)
    bl fn_805F9750
    lfs f2, 0xac(r1)
    lfs f0, lbl_80885298
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8033E058_00000D48
    lfs f3, 0xa8(r1)
    lfs f0, lbl_80885238
    fcmpo cr0, f3, f0
    ble lbl_fn_8033E058_00000D38
    lfs f0, lbl_8088529C
    b lbl_fn_8033E058_00000D3C
lbl_fn_8033E058_00000D38:
    lfs f0, lbl_808852A0
lbl_fn_8033E058_00000D3C:
    fneg f0, f0
    stfs f0, 0xb0(r1)
    b lbl_fn_8033E058_00000D5C
lbl_fn_8033E058_00000D48:
    lfs f1, 0xa8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xb0(r1)
lbl_fn_8033E058_00000D5C:
    addi r3, r1, 0xb0
    lfs f3, lbl_80885238
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8074A498@ha
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f3
    lfs f0, 0x538(r31)
    lfs f31, 0xcc(r1)
    stfs f2, 0xd0(r1)
    fsubs f1, f31, f0
    lfd f2, lbl_8074A498@l(r3)
    stfs f3, 0xb8(r1)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_808852AC
    fcmpo cr0, f4, f0
    ble lbl_fn_8033E058_00000DA8
    lfs f0, lbl_80885280
    fsubs f4, f4, f0
lbl_fn_8033E058_00000DA8:
    lfs f0, lbl_808852B0
    fcmpo cr0, f4, f0
    bge lbl_fn_8033E058_00000DBC
    lfs f0, lbl_80885280
    fadds f4, f4, f0
lbl_fn_8033E058_00000DBC:
    lfs f0, lbl_80885238
    fcmpo cr0, f4, f0
    bge lbl_fn_8033E058_00000DD0
    fneg f0, f4
    b lbl_fn_8033E058_00000DD4
lbl_fn_8033E058_00000DD0:
    fmr f0, f4
lbl_fn_8033E058_00000DD4:
    lfs f3, lbl_808852B4
    fcmpo cr0, f0, f3
    cror eq, lt, eq
    bne lbl_fn_8033E058_00000DEC
    stfs f31, 0x538(r31)
    b lbl_fn_8033E058_00000E18
lbl_fn_8033E058_00000DEC:
    lfs f0, lbl_80885238
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8033E058_00000E0C
    lfs f0, 0x538(r31)
    fsubs f0, f0, f3
    stfs f0, 0x538(r31)
    b lbl_fn_8033E058_00000E18
lbl_fn_8033E058_00000E0C:
    lfs f0, 0x538(r31)
    fadds f0, f0, f3
    stfs f0, 0x538(r31)
lbl_fn_8033E058_00000E18:
    lwz r7, 0x14b0(r31)
    addi r4, r1, 0xec
    lfs f0, 0x530(r31)
    addi r6, r31, 0x1568
    lfs f2, 0x530(r7)
    addi r3, r1, 0x110
    psq_l f1, 0x528(r7), 0, 0
    addi r5, r1, 0x14
    frsp f3, f2
    psq_st f1, 0x0(r4), 0, 0
    addi r30, r1, 0x8
    stfs f2, 0xf4(r1)
    fsubs f7, f3, f0
    lfs f0, 0x52c(r31)
    stfs f2, 0x118(r1)
    frsp f2, f2
    lfs f5, 0xf0(r1)
    stfs f2, 0x1570(r31)
    fmr f2, f7
    lfs f4, 0xec(r1)
    fsubs f6, f5, f0
    lfs f3, 0x528(r31)
    lfs f0, lbl_80885298
    frsp f5, f2
    fsubs f4, f4, f3
    stfs f6, 0x18(r1)
    lfs f3, lbl_80885238
    fabs f6, f5
    stfs f4, 0x14(r1)
    psq_st f1, 0x0(r6), 0, 0
    frsp f4, f6
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    fcmpo cr0, f4, f0
    stfs f3, 0x156c(r31)
    stfs f7, 0x1c(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x10(r1)
    bge lbl_fn_8033E058_00000ED4
    lfs f0, 0x8(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_8033E058_00000EC8
    lfs f0, lbl_8088529C
    b lbl_fn_8033E058_00000ECC
lbl_fn_8033E058_00000EC8:
    lfs f0, lbl_808852A0
lbl_fn_8033E058_00000ECC:
    stfs f0, 0x30(r1)
    b lbl_fn_8033E058_00000EE8
lbl_fn_8033E058_00000ED4:
    fmr f2, f5
    lfs f1, 0x8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x30(r1)
lbl_fn_8033E058_00000EE8:
    lfs f0, 0x30(r1)
    addi r3, r1, 0x160
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885238
    addi r4, r1, 0x38
    lfs f4, 0x168(r1)
    mr r5, r4
    lfs f5, 0x164(r1)
    addi r3, r1, 0x120
    lfs f6, 0x160(r1)
    lfs f7, 0x178(r1)
    lfs f8, 0x174(r1)
    lfs f9, 0x170(r1)
    lfs f10, 0x188(r1)
    lfs f11, 0x184(r1)
    lfs f12, 0x180(r1)
    lfs f13, 0x18c(r1)
    lfs f30, 0x17c(r1)
    lfs f31, 0x16c(r1)
    lfs f0, lbl_80885260
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x10(r1)
    stfs f3, 0x150(r1)
    stfs f3, 0x154(r1)
    stfs f3, 0x158(r1)
    stfs f0, 0x15c(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f6, 0x120(r1)
    stfs f5, 0x124(r1)
    stfs f4, 0x128(r1)
    stfs f9, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f9, 0x130(r1)
    stfs f8, 0x134(r1)
    stfs f7, 0x138(r1)
    stfs f12, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f10, 0x58(r1)
    stfs f12, 0x140(r1)
    stfs f11, 0x144(r1)
    stfs f10, 0x148(r1)
    stfs f31, 0x44(r1)
    stfs f30, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f31, 0x12c(r1)
    stfs f30, 0x13c(r1)
    stfs f13, 0x14c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80885298
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8033E058_00001004
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80885238
    fcmpo cr0, f3, f0
    ble lbl_fn_8033E058_00000FF4
    lfs f0, lbl_8088529C
    b lbl_fn_8033E058_00000FF8
lbl_fn_8033E058_00000FF4:
    lfs f0, lbl_808852A0
lbl_fn_8033E058_00000FF8:
    fneg f0, f0
    stfs f0, 0x2c(r1)
    b lbl_fn_8033E058_00001018
lbl_fn_8033E058_00001004:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x2c(r1)
lbl_fn_8033E058_00001018:
    lfs f6, lbl_80885238
    addi r4, r1, 0x2c
    lfs f5, 0xf0(r1)
    addi r6, r31, 0x1574
    lfs f4, 0x52c(r31)
    fmr f2, f6
    lfs f3, 0xec(r1)
    addi r5, r1, 0x20
    fsubs f5, f5, f4
    lfs f0, 0x528(r31)
    psq_l f1, 0x0(r4), 0, 0
    fsubs f4, f3, f0
    stfs f2, 0x10(r1)
    frsp f2, f2
    addi r3, r31, 0x1580
    lfs f3, 0xf4(r1)
    lfs f0, 0x530(r31)
    stfs f4, 0x20(r1)
    mr r4, r3
    fsubs f0, f3, f0
    stfs f2, 0x157c(r31)
    fmr f2, f0
    stfs f5, 0x24(r1)
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f6, 0x34(r1)
    stfs f0, 0x28(r1)
    stfs f2, 0x1588(r31)
    stfs f6, 0x1584(r31)
    bl fn_805F98D0
    lfs f3, lbl_80885238
    addi r5, r31, 0x158c
    psq_l f1, 0x528(r31), 0, 0
    addi r3, r1, 0x200
    lfs f2, 0x530(r31)
    li r4, 0x79
    psq_st f1, 0x0(r5), 0, 0
    lfs f0, lbl_808852C4
    stfs f2, 0x1594(r31)
    stfs f3, 0x570(r31)
    stfs f3, 0x104(r1)
    stfs f3, 0x108(r1)
    stfs f0, 0x10c(r1)
    lfs f1, 0x1578(r31)
    bl fn_805F8E70
    addi r4, r1, 0x104
    addi r3, r1, 0x200
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x1568(r31)
    lfs f0, 0x104(r1)
    lfs f4, 0x156c(r31)
    fsubs f0, f3, f0
    lfs f3, 0x1570(r31)
    stfs f0, 0x1568(r31)
    lfs f0, 0x108(r1)
    fsubs f0, f4, f0
    stfs f0, 0x156c(r31)
    lfs f0, 0x10c(r1)
    fsubs f0, f3, f0
    stfs f0, 0x1570(r31)
lbl_fn_8033E058_00001114:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_808852F8
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8033E058_0000115C
    lfs f0, lbl_808852D4
    fcmpo cr0, f3, f0
    bge lbl_fn_8033E058_0000115C
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r7, 0x14d4(r31)
    li r4, 0x0
    lwz r8, 0x590(r31)
    li r5, 0x0
    lfs f1, lbl_80885238
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
lbl_fn_8033E058_0000115C:
    lwz r0, 0x264(r1)
    psq_l f31, 0x258(r1), 0, 0
    lfd f31, 0x250(r1)
    psq_l f30, 0x248(r1), 0, 0
    lfd f30, 0x240(r1)
    lwz r31, 0x23c(r1)
    lwz r30, 0x238(r1)
    mtlr r0
    addi r1, r1, 0x260
    blr
}

asm void fn_8033E8D4(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x154(r1)
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    fmr f30, f1
    stfd f29, 0x120(r1)
    psq_st f29, 0x128(r1), 0, 0
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    mr r30, r5
    stw r29, 0x114(r1)
    mr r29, r3
    beq lbl_fn_8033E8D4_0000120C
    lfs f4, 0x1570(r3)
    lfs f0, 0x530(r3)
    lfs f3, 0x1568(r3)
    fsubs f5, f4, f0
    lfs f0, 0x528(r3)
    lfs f4, 0x156c(r3)
    fsubs f6, f3, f0
    lfs f3, 0x52c(r3)
    fmuls f0, f5, f5
    fsubs f3, f4, f3
    stfs f6, 0x74(r1)
    fmadds f1, f6, f6, f0
    stfs f3, 0x78(r1)
    stfs f5, 0x7c(r1)
    bl fn_8068B100
    frsp f1, f1
    b lbl_fn_8033E8D4_00001244
lbl_fn_8033E8D4_0000120C:
    lfs f3, 0x1570(r3)
    lfs f0, 0x530(r3)
    lfs f5, 0x156c(r3)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x1568(r3)
    lfs f0, 0x528(r3)
    fsubs f4, f5, f4
    addi r3, r1, 0x68
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    stfs f6, 0x70(r1)
    bl fn_805F9940
lbl_fn_8033E8D4_00001244:
    lfs f31, lbl_8088525C
    fcmpo cr0, f31, f1
    bge lbl_fn_8033E8D4_00001254
    b lbl_fn_8033E8D4_00001258
lbl_fn_8033E8D4_00001254:
    fmr f31, f1
lbl_fn_8033E8D4_00001258:
    lwz r0, 0x2dc(r29)
    cmpwi r0, 0x13f
    bne lbl_fn_8033E8D4_0000130C
    lfs f0, lbl_808852A4
    addi r3, r29, 0xb0
    stfs f0, 0x2e8(r29)
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80885288
    li r0, 0x0
    lfs f3, 0x2e4(r29)
    fsubs f0, f1, f0
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8033E8D4_00001298
    li r0, 0x1
lbl_fn_8033E8D4_00001298:
    cmpwi r0, 0x0
    beq lbl_fn_8033E8D4_000012C4
    lfs f1, lbl_80885238
    addi r3, r29, 0xb0
    lfs f2, lbl_80885284
    li r4, 0x0
    li r5, 0x140
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_8033E8D4_000012C4:
    lfs f3, 0x2e4(r29)
    li r0, 0x0
    lfs f0, lbl_808852FC
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8033E8D4_000012E0
    li r0, 0x1
lbl_fn_8033E8D4_000012E0:
    cmpwi r0, 0x0
    beq lbl_fn_8033E8D4_00001514
    lfs f3, lbl_80885254
    lfs f0, 0x570(r29)
    fadds f0, f3, f0
    fcmpo cr0, f31, f0
    bge lbl_fn_8033E8D4_00001300
    b lbl_fn_8033E8D4_00001304
lbl_fn_8033E8D4_00001300:
    fmr f31, f0
lbl_fn_8033E8D4_00001304:
    stfs f31, 0x570(r29)
    b lbl_fn_8033E8D4_00001514
lbl_fn_8033E8D4_0000130C:
    cmpwi r0, 0x140
    bne lbl_fn_8033E8D4_00001370
    lfs f0, lbl_80885278
    lfs f3, lbl_80885260
    fcmpo cr0, f1, f0
    stfs f3, 0x2e8(r29)
    bge lbl_fn_8033E8D4_0000134C
    lfs f1, lbl_80885238
    addi r3, r29, 0xb0
    lfs f2, lbl_80885284
    li r4, 0x0
    li r5, 0x141
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_8033E8D4_0000134C:
    lfs f3, lbl_80885254
    lfs f0, 0x570(r29)
    fadds f0, f3, f0
    fcmpo cr0, f31, f0
    bge lbl_fn_8033E8D4_00001364
    b lbl_fn_8033E8D4_00001368
lbl_fn_8033E8D4_00001364:
    fmr f31, f0
lbl_fn_8033E8D4_00001368:
    stfs f31, 0x570(r29)
    b lbl_fn_8033E8D4_00001514
lbl_fn_8033E8D4_00001370:
    cmpwi r0, 0x141
    bne lbl_fn_8033E8D4_00001514
    lfs f0, lbl_80885290
    lfs f7, lbl_808852A4
    fmuls f0, f0, f1
    lfs f6, 0x1570(r29)
    lfs f5, 0x530(r29)
    lfs f4, 0x1568(r29)
    lfs f3, 0x528(r29)
    fsubs f5, f6, f5
    stfs f7, 0x2e8(r29)
    fcmpo cr0, f31, f0
    fsubs f4, f4, f3
    lfs f3, lbl_80885238
    stfs f5, 0x94(r1)
    stfs f4, 0x8c(r1)
    stfs f3, 0x90(r1)
    bge lbl_fn_8033E8D4_000013BC
    b lbl_fn_8033E8D4_000013C0
lbl_fn_8033E8D4_000013BC:
    fmr f31, f0
lbl_fn_8033E8D4_000013C0:
    addi r3, r1, 0x8c
    stfs f31, 0x570(r29)
    mr r4, r3
    bl fn_805F98D0
    addi r3, r1, 0x8c
    addi r4, r29, 0x1580
    bl fn_805F9990
    lfs f0, lbl_80885238
    fcmpo cr0, f1, f0
    bge lbl_fn_8033E8D4_000013EC
    stfs f0, 0x570(r29)
lbl_fn_8033E8D4_000013EC:
    addi r3, r29, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_8088523C
    li r0, 0x0
    lfs f3, 0x2e4(r29)
    fsubs f0, f1, f0
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8033E8D4_00001418
    li r0, 0x1
lbl_fn_8033E8D4_00001418:
    cmpwi r0, 0x0
    beq lbl_fn_8033E8D4_00001514
    li r31, 0x0
    stw r31, 0x14b4(r29)
    stw r31, 0x14b8(r29)
    stw r31, 0x14c0(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    mr r4, r29
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x3ea
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x3ed
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x3ef
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x3f0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x3f1
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r29
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80885260
    li r0, 0x1
    stw r31, 0x58c(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_80885238
    li r4, 0x0
    stw r0, 0x3fc(r29)
    li r5, 0x2
    lfs f2, lbl_80885284
    li r6, 0x1
    stfs f0, 0x2fc(r29)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r29)
    bl fn_80097C08
    b lbl_fn_8033E8D4_0000180C
lbl_fn_8033E8D4_00001514:
    lfs f3, 0x570(r29)
    lfs f0, lbl_80885254
    fcmpo cr0, f3, f0
    ble lbl_fn_8033E8D4_000017A4
    lfs f3, 0x8(r30)
    addi r3, r1, 0x14
    lfs f0, 0x530(r29)
    addi r31, r1, 0x8
    lfs f5, 0x4(r30)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x0(r30)
    fsubs f5, f5, f4
    lfs f0, 0x528(r29)
    stfs f2, 0x1c(r1)
    fsubs f4, f3, f0
    lfs f0, lbl_80885298
    frsp f3, f2
    stfs f4, 0x14(r1)
    fabs f4, f3
    stfs f5, 0x18(r1)
    psq_l f1, 0x0(r3), 0, 0
    frsp f4, f4
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x10(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_8033E8D4_000015A4
    lfs f3, 0x8(r1)
    lfs f0, lbl_80885238
    fcmpo cr0, f3, f0
    ble lbl_fn_8033E8D4_00001598
    lfs f0, lbl_8088529C
    b lbl_fn_8033E8D4_0000159C
lbl_fn_8033E8D4_00001598:
    lfs f0, lbl_808852A0
lbl_fn_8033E8D4_0000159C:
    stfs f0, 0x24(r1)
    b lbl_fn_8033E8D4_000015B8
lbl_fn_8033E8D4_000015A4:
    fmr f2, f3
    lfs f1, 0x8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x24(r1)
lbl_fn_8033E8D4_000015B8:
    lfs f0, 0x24(r1)
    addi r3, r1, 0xd8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885238
    addi r4, r1, 0x2c
    lfs f4, 0xe0(r1)
    mr r5, r4
    lfs f5, 0xdc(r1)
    addi r3, r1, 0x98
    lfs f6, 0xd8(r1)
    lfs f7, 0xf0(r1)
    lfs f8, 0xec(r1)
    lfs f9, 0xe8(r1)
    lfs f10, 0x100(r1)
    lfs f11, 0xfc(r1)
    lfs f12, 0xf8(r1)
    lfs f13, 0x104(r1)
    lfs f31, 0xf4(r1)
    lfs f29, 0xe4(r1)
    lfs f0, lbl_80885260
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x10(r1)
    stfs f3, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f6, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f4, 0x64(r1)
    stfs f6, 0x98(r1)
    stfs f5, 0x9c(r1)
    stfs f4, 0xa0(r1)
    stfs f9, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f7, 0x58(r1)
    stfs f9, 0xa8(r1)
    stfs f8, 0xac(r1)
    stfs f7, 0xb0(r1)
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f10, 0x4c(r1)
    stfs f12, 0xb8(r1)
    stfs f11, 0xbc(r1)
    stfs f10, 0xc0(r1)
    stfs f29, 0x38(r1)
    stfs f31, 0x3c(r1)
    stfs f13, 0x40(r1)
    stfs f29, 0xa4(r1)
    stfs f31, 0xb4(r1)
    stfs f13, 0xc4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F9750
    lfs f2, 0x34(r1)
    lfs f0, lbl_80885298
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8033E8D4_000016D4
    lfs f3, 0x30(r1)
    lfs f0, lbl_80885238
    fcmpo cr0, f3, f0
    ble lbl_fn_8033E8D4_000016C4
    lfs f0, lbl_8088529C
    b lbl_fn_8033E8D4_000016C8
lbl_fn_8033E8D4_000016C4:
    lfs f0, lbl_808852A0
lbl_fn_8033E8D4_000016C8:
    fneg f0, f0
    stfs f0, 0x20(r1)
    b lbl_fn_8033E8D4_000016E8
lbl_fn_8033E8D4_000016D4:
    lfs f1, 0x30(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x20(r1)
lbl_fn_8033E8D4_000016E8:
    addi r3, r1, 0x20
    lfs f3, lbl_80885238
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8074A498@ha
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f3
    lfs f0, 0x538(r29)
    lfs f29, 0xc(r1)
    stfs f2, 0x10(r1)
    fsubs f1, f29, f0
    lfd f2, lbl_8074A498@l(r3)
    stfs f3, 0x28(r1)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_808852AC
    fcmpo cr0, f4, f0
    ble lbl_fn_8033E8D4_00001734
    lfs f0, lbl_80885280
    fsubs f4, f4, f0
lbl_fn_8033E8D4_00001734:
    lfs f0, lbl_808852B0
    fcmpo cr0, f4, f0
    bge lbl_fn_8033E8D4_00001748
    lfs f0, lbl_80885280
    fadds f4, f4, f0
lbl_fn_8033E8D4_00001748:
    lfs f0, lbl_80885238
    fcmpo cr0, f4, f0
    bge lbl_fn_8033E8D4_0000175C
    fneg f0, f4
    b lbl_fn_8033E8D4_00001760
lbl_fn_8033E8D4_0000175C:
    fmr f0, f4
lbl_fn_8033E8D4_00001760:
    lfs f3, lbl_808852B4
    fcmpo cr0, f0, f3
    cror eq, lt, eq
    bne lbl_fn_8033E8D4_00001778
    stfs f29, 0x538(r29)
    b lbl_fn_8033E8D4_000017A4
lbl_fn_8033E8D4_00001778:
    lfs f0, lbl_80885238
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8033E8D4_00001798
    lfs f0, 0x538(r29)
    fsubs f0, f0, f3
    stfs f0, 0x538(r29)
    b lbl_fn_8033E8D4_000017A4
lbl_fn_8033E8D4_00001798:
    lfs f0, 0x538(r29)
    fadds f0, f0, f3
    stfs f0, 0x538(r29)
lbl_fn_8033E8D4_000017A4:
    lfs f5, 0x570(r29)
    addi r3, r29, 0xb0
    lfs f4, 0x1588(r29)
    li r4, 0x0
    lfs f3, 0x1584(r29)
    fmuls f6, f4, f5
    lfs f0, 0x1580(r29)
    fmuls f7, f3, f5
    lfs f3, 0x52c(r29)
    fmuls f5, f0, f5
    lfs f4, 0x528(r29)
    lfs f0, 0x530(r29)
    fadds f3, f3, f7
    fadds f4, f4, f5
    stfs f5, 0x80(r1)
    fadds f0, f0, f6
    stfs f7, 0x84(r1)
    stfs f6, 0x88(r1)
    stfs f4, 0x528(r29)
    stfs f3, 0x52c(r29)
    stfs f0, 0x530(r29)
    bl fn_80097D7C
    fdivs f3, f30, f1
    lfs f0, 0x52c(r29)
    fadds f0, f0, f3
    stfs f0, 0x52c(r29)
lbl_fn_8033E8D4_0000180C:
    lwz r0, 0x154(r1)
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    psq_l f29, 0x128(r1), 0, 0
    lfd f29, 0x120(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_8033EF90(void)
{
    nofralloc
    stwu r1, -0x320(r1)
    mflr r0
    stw r0, 0x324(r1)
    addi r11, r1, 0x250
    stfd f31, 0x310(r1)
    psq_st f31, 0x318(r1), 0, 0
    stfd f30, 0x300(r1)
    psq_st f30, 0x308(r1), 0, 0
    stfd f29, 0x2f0(r1)
    psq_st f29, 0x2f8(r1), 0, 0
    stfd f28, 0x2e0(r1)
    psq_st f28, 0x2e8(r1), 0, 0
    stfd f27, 0x2d0(r1)
    psq_st f27, 0x2d8(r1), 0, 0
    stfd f26, 0x2c0(r1)
    psq_st f26, 0x2c8(r1), 0, 0
    stfd f25, 0x2b0(r1)
    psq_st f25, 0x2b8(r1), 0, 0
    stfd f24, 0x2a0(r1)
    psq_st f24, 0x2a8(r1), 0, 0
    stfd f23, 0x290(r1)
    psq_st f23, 0x298(r1), 0, 0
    stfd f22, 0x280(r1)
    psq_st f22, 0x288(r1), 0, 0
    stfd f21, 0x270(r1)
    psq_st f21, 0x278(r1), 0, 0
    stfd f20, 0x260(r1)
    psq_st f20, 0x268(r1), 0, 0
    stfd f19, 0x250(r1)
    psq_st f19, 0x258(r1), 0, 0
    bl _savegpr_21
    lwz r4, 0x14b4(r3)
    lis r0, 0x4330
    stw r0, 0x208(r1)
    mr r30, r3
    cmpwi r4, 0x0
    stw r0, 0x210(r1)
    bne lbl_fn_8033EF90_00001994
    lfs f1, lbl_808852C0
    addi r5, r3, 0x1598
    li r4, 0x1
    bl fn_8033E8D4
    lwz r0, 0x2dc(r30)
    cmpwi r0, 0x141
    bne lbl_fn_8033EF90_0000202C
    lfs f1, lbl_80885238
    addi r3, r30, 0xb0
    lfs f2, lbl_80885284
    li r4, 0x0
    li r5, 0x16b
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r4, 0x14b4(r30)
    li r5, 0x0
    lfs f0, lbl_80885260
    mr r3, r30
    addi r0, r4, 0x1
    stfs f0, 0x2e8(r30)
    li r4, 0x6
    stw r5, 0x14b8(r30)
    stw r0, 0x14b4(r30)
    bl fn_8016E970
    lwz r0, 0x14b8(r30)
    lis r3, lbl_8074A490@ha
    lwz r4, 0x638(r30)
    li r5, 0x1d
    xoris r0, r0, 0x8000
    stw r0, 0x20c(r1)
    lwz r6, 0x14dc(r30)
    lfd f7, lbl_8074A490@l(r3)
    lfd f0, 0x208(r1)
    stw r5, 0x560(r30)
    fsubs f0, f0, f7
    stw r4, 0x63c(r30)
    stw r6, 0x638(r30)
    stfs f0, 0xfb8(r30)
    lwz r0, 0xc0(r6)
    xoris r0, r0, 0x8000
    stw r0, 0x214(r1)
    lfd f0, 0x210(r1)
    fsubs f0, f0, f7
    stfs f0, 0xfbc(r30)
    b lbl_fn_8033EF90_0000202C
lbl_fn_8033EF90_00001994:
    cmpwi r4, 0x1
    bne lbl_fn_8033EF90_00001A0C
    lwz r0, 0x14b8(r3)
    lis r4, lbl_8074A490@ha
    lfd f7, lbl_8074A490@l(r4)
    li r4, 0x0
    xoris r0, r0, 0x8000
    stw r0, 0x20c(r1)
    lfs f19, 0x2e4(r3)
    lfd f0, 0x208(r1)
    fsubs f0, f0, f7
    stfs f0, 0xfb8(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f19, f1
    cror eq, gt, eq
    bne lbl_fn_8033EF90_0000202C
    lfs f1, lbl_80885238
    addi r3, r30, 0xb0
    lfs f2, lbl_80885284
    li r4, 0x0
    li r5, 0x16c
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x14b4(r30)
    addi r0, r3, 0x1
    stw r0, 0x14b4(r30)
    b lbl_fn_8033EF90_0000202C
lbl_fn_8033EF90_00001A0C:
    cmpwi r4, 0x2
    bne lbl_fn_8033EF90_00001A88
    lwz r5, 0x14b8(r3)
    lis r4, lbl_8074A490@ha
    lfd f7, lbl_8074A490@l(r4)
    xoris r0, r5, 0x8000
    stw r0, 0x214(r1)
    lwz r4, 0x14dc(r3)
    lfd f0, 0x210(r1)
    fsubs f0, f0, f7
    stfs f0, 0xfb8(r3)
    lwz r0, 0xc0(r4)
    cmpw r5, r0
    blt lbl_fn_8033EF90_0000202C
    li r4, 0x3
    bl fn_8016E970
    lfs f1, lbl_80885238
    addi r3, r30, 0xb0
    lfs f2, lbl_80885300
    li r4, 0x0
    li r5, 0x14d
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x14b4(r30)
    lfs f0, lbl_80885270
    addi r0, r3, 0x1
    stfs f0, 0x2e8(r30)
    stw r0, 0x14b4(r30)
    b lbl_fn_8033EF90_0000202C
lbl_fn_8033EF90_00001A88:
    cmpwi r4, 0x3
    bne lbl_fn_8033EF90_00001E84
    lfs f7, 0x2e4(r3)
    lfs f0, lbl_80885304
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_8033EF90_0000202C
    li r0, 0x0
    stw r0, 0x78(r1)
    lfs f0, lbl_80885260
    lwz r3, 0x14b0(r3)
    stfs f0, 0x68(r1)
    lwz r0, 0x12a4(r3)
    stfs f0, 0x14(r1)
    extrwi. r0, r0, 1, 3
    stfs f0, 0x28(r1)
    stfs f0, 0x3c(r1)
    beq lbl_fn_8033EF90_00001AEC
    addic. r0, r1, 0x7c
    beq lbl_fn_8033EF90_00001ADC
    stw r3, 0x7c(r1)
lbl_fn_8033EF90_00001ADC:
    lwz r3, 0x78(r1)
    addi r0, r3, 0x1
    stw r0, 0x78(r1)
    b lbl_fn_8033EF90_00001B9C
lbl_fn_8033EF90_00001AEC:
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_8033EF90_00001B94
lbl_fn_8033EF90_00001AF8:
    lwz r4, 0x38(r3)
    li r6, 0x0
    mr r5, r6
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8033EF90_00001B1C
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    bne lbl_fn_8033EF90_00001B20
lbl_fn_8033EF90_00001B1C:
    li r5, 0x1
lbl_fn_8033EF90_00001B20:
    cmpwi r5, 0x0
    bne lbl_fn_8033EF90_00001B64
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8033EF90_00001B64
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8033EF90_00001B58
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_8033EF90_00001B58
    li r4, 0x1
lbl_fn_8033EF90_00001B58:
    cmpwi r4, 0x0
    bne lbl_fn_8033EF90_00001B64
    li r6, 0x1
lbl_fn_8033EF90_00001B64:
    cmpwi r6, 0x0
    beq lbl_fn_8033EF90_00001B90
    lwz r0, 0x78(r1)
    addi r4, r1, 0x7c
    slwi r0, r0, 2
    add. r4, r4, r0
    beq lbl_fn_8033EF90_00001B84
    stw r3, 0x0(r4)
lbl_fn_8033EF90_00001B84:
    lwz r4, 0x78(r1)
    addi r0, r4, 0x1
    stw r0, 0x78(r1)
lbl_fn_8033EF90_00001B90:
    lwz r3, 0x14ac(r3)
lbl_fn_8033EF90_00001B94:
    cmpwi r3, 0x0
    bne lbl_fn_8033EF90_00001AF8
lbl_fn_8033EF90_00001B9C:
    lwz r0, 0x78(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8033EF90_00001E48
    lis r3, lbl_8074A490@ha
    lis r27, lbl_8074A4C0@ha
    lfs f20, lbl_80885238
    addi r23, r1, 0x1b0
    lfs f21, lbl_80885260
    addi r26, r1, 0x180
    lfd f22, lbl_8074A490@l(r3)
    addi r22, r1, 0x7c
    lfs f23, lbl_80885254
    addi r25, r1, 0x120
    lfs f24, lbl_80885288
    addi r24, r1, 0xc0
    lfs f25, lbl_808852AC
    addi r27, r27, lbl_8074A4C0@l
    lfs f26, lbl_8088529C
    li r31, 0x0
    lfs f27, lbl_808852A8
    li r28, 0x0
    lfs f28, lbl_80885250
    li r29, -0x1
    lfs f29, lbl_80885274
    lfs f30, lbl_8088523C
    lfs f31, lbl_80885240
    lfs f19, lbl_80885308
lbl_fn_8033EF90_00001C08:
    xoris r0, r31, 0x8000
    stw r0, 0x20c(r1)
    lwz r3, 0x78(r1)
    lfd f0, 0x208(r1)
    divwu r0, r31, r3
    stfs f20, 0x58(r1)
    fsubs f0, f0, f22
    stfs f21, 0x5c(r1)
    fadds f0, f23, f0
    stfs f20, 0x60(r1)
    fdivs f0, f0, f24
    lfs f7, 0x538(r30)
    mullw r0, r0, r3
    stfs f20, 0x40(r1)
    stfs f7, 0x44(r1)
    stfs f20, 0x1dc(r1)
    fmsubs f1, f25, f0, f26
    subf r0, r0, r31
    slwi r0, r0, 2
    stfs f20, 0x1d4(r1)
    lwzx r21, r22, r0
    fcmpu cr0, f20, f1
    stfs f1, 0x48(r1)
    stfs f20, 0x1d0(r1)
    stfs f20, 0x1cc(r1)
    stfs f20, 0x1c8(r1)
    stfs f20, 0x1c0(r1)
    stfs f20, 0x1bc(r1)
    stfs f20, 0x1b8(r1)
    stfs f20, 0x1b4(r1)
    stfs f21, 0x1d8(r1)
    stfs f21, 0x1c4(r1)
    stfs f21, 0x1b0(r1)
    beq lbl_fn_8033EF90_00001CDC
    addi r3, r1, 0x150
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r23
    addi r4, r1, 0x150
    addi r5, r1, 0x180
    bl fn_805F89F0
    psq_l f1, 0x0(r26), 0, 0
    psq_l f2, 0x8(r26), 0, 0
    psq_l f3, 0x10(r26), 0, 0
    psq_l f4, 0x18(r26), 0, 0
    psq_l f5, 0x20(r26), 0, 0
    psq_l f6, 0x28(r26), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
lbl_fn_8033EF90_00001CDC:
    lfs f1, 0x44(r1)
    fcmpu cr0, f20, f1
    beq lbl_fn_8033EF90_00001D34
    addi r3, r1, 0xf0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r23
    addi r4, r1, 0xf0
    addi r5, r1, 0x120
    bl fn_805F89F0
    psq_l f1, 0x0(r25), 0, 0
    psq_l f2, 0x8(r25), 0, 0
    psq_l f3, 0x10(r25), 0, 0
    psq_l f4, 0x18(r25), 0, 0
    psq_l f5, 0x20(r25), 0, 0
    psq_l f6, 0x28(r25), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
lbl_fn_8033EF90_00001D34:
    lfs f1, 0x40(r1)
    fcmpu cr0, f20, f1
    beq lbl_fn_8033EF90_00001D8C
    addi r3, r1, 0x90
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r23
    addi r4, r1, 0x90
    addi r5, r1, 0xc0
    bl fn_805F89F0
    psq_l f1, 0x0(r24), 0, 0
    psq_l f2, 0x8(r24), 0, 0
    psq_l f3, 0x10(r24), 0, 0
    psq_l f4, 0x18(r24), 0, 0
    psq_l f5, 0x20(r24), 0, 0
    psq_l f6, 0x28(r24), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
lbl_fn_8033EF90_00001D8C:
    addi r4, r1, 0x58
    addi r3, r1, 0x1b0
    mr r5, r4
    bl fn_805F93C0
    addi r4, r27, 0x32c
    addi r3, r30, 0xb0
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8033EF90_00001DBC
    li r3, 0x0
    b lbl_fn_8033EF90_00001DC8
lbl_fn_8033EF90_00001DBC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_8033EF90_00001DC8:
    lfs f0, 0x2c(r3)
    lfs f7, 0x1c(r3)
    lfs f8, 0xc(r3)
    stfs f8, 0x4c(r1)
    lwz r3, lbl_8087F048
    stfs f7, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f27, 0x1e8(r1)
    stw r28, 0x1fc(r1)
    stw r29, 0x200(r1)
    stw r21, 0x1e0(r1)
    stfs f28, 0x1f8(r1)
    stfs f29, 0x1e4(r1)
    stfs f30, 0x1ec(r1)
    stfs f31, 0x1f4(r1)
    stfs f19, 0x1f0(r1)
    bl fn_800F8548
    stw r3, 0x200(r1)
    mr r4, r30
    lwz r3, lbl_8087F048
    addi r6, r1, 0x4c
    lwz r5, 0x14dc(r30)
    addi r7, r1, 0x58
    lfs f1, lbl_80885238
    addi r8, r1, 0x1e0
    lfs f2, lbl_80885260
    li r9, 0x104
    li r10, 0x0
    bl fn_800F8574
    addi r31, r31, 0x1
    cmpwi r31, 0x5
    blt lbl_fn_8033EF90_00001C08
lbl_fn_8033EF90_00001E48:
    lis r4, lbl_8074A4C0@ha
    lfs f1, lbl_80885260
    addi r4, r4, lbl_8074A4C0@l
    addi r3, r1, 0x8
    addi r4, r4, 0x355
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, 0x14b4(r30)
    addi r0, r3, 0x1
    stw r0, 0x14b4(r30)
    b lbl_fn_8033EF90_0000202C
lbl_fn_8033EF90_00001E84:
    cmpwi r4, 0x4
    bne lbl_fn_8033EF90_00001EE4
    lfs f19, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f19, f1
    cror eq, gt, eq
    bne lbl_fn_8033EF90_0000202C
    lfs f0, lbl_80885260
    addi r3, r30, 0xb0
    stfs f0, 0x2e8(r30)
    li r4, 0x0
    lfs f1, lbl_80885238
    li r5, 0x141
    lfs f2, lbl_80885284
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x14b4(r30)
    addi r0, r3, 0x1
    stw r0, 0x14b4(r30)
    b lbl_fn_8033EF90_0000202C
lbl_fn_8033EF90_00001EE4:
    lfs f19, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f19, f1
    cror eq, gt, eq
    bne lbl_fn_8033EF90_00001FFC
    li r31, 0x0
    stw r31, 0x14b4(r30)
    stw r31, 0x14b8(r30)
    stw r31, 0x14c0(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ea
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ed
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ef
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3f0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3f1
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80885260
    li r0, 0x1
    stw r31, 0x58c(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80885238
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x2
    lfs f2, lbl_80885284
    li r6, 0x1
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lfs f0, lbl_80885238
    stfs f0, 0x52c(r30)
    b lbl_fn_8033EF90_0000202C
lbl_fn_8033EF90_00001FFC:
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_808852C0
    lfs f7, 0x52c(r30)
    fdivs f8, f0, f1
    lfs f0, lbl_80885238
    fsubs f7, f7, f8
    stfs f7, 0x52c(r30)
    fcmpo cr0, f7, f0
    bge lbl_fn_8033EF90_0000202C
    stfs f0, 0x52c(r30)
lbl_fn_8033EF90_0000202C:
    addi r11, r1, 0x250
    psq_l f31, 0x318(r1), 0, 0
    lfd f31, 0x310(r1)
    psq_l f30, 0x308(r1), 0, 0
    lfd f30, 0x300(r1)
    psq_l f29, 0x2f8(r1), 0, 0
    lfd f29, 0x2f0(r1)
    psq_l f28, 0x2e8(r1), 0, 0
    lfd f28, 0x2e0(r1)
    psq_l f27, 0x2d8(r1), 0, 0
    lfd f27, 0x2d0(r1)
    psq_l f26, 0x2c8(r1), 0, 0
    lfd f26, 0x2c0(r1)
    psq_l f25, 0x2b8(r1), 0, 0
    lfd f25, 0x2b0(r1)
    psq_l f24, 0x2a8(r1), 0, 0
    lfd f24, 0x2a0(r1)
    psq_l f23, 0x298(r1), 0, 0
    lfd f23, 0x290(r1)
    psq_l f22, 0x288(r1), 0, 0
    lfd f22, 0x280(r1)
    psq_l f21, 0x278(r1), 0, 0
    lfd f21, 0x270(r1)
    psq_l f20, 0x268(r1), 0, 0
    lfd f20, 0x260(r1)
    psq_l f19, 0x258(r1), 0, 0
    lfd f19, 0x250(r1)
    bl _restgpr_21
    lwz r0, 0x324(r1)
    mtlr r0
    addi r1, r1, 0x320
    blr
}
