#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_17(void);
extern void _restgpr_27(void);
extern void _savegpr_17(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_800844D8(void);
extern void fn_80092814(void);
extern void fn_8009373C(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C31F4(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800FAB80(void);
extern void fn_8013310C(void);
extern void fn_8016E4C4(void);
extern void fn_8016E970(void);
extern void fn_801765D8(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A254(void);
extern void fn_8023A8B4(void);
extern void fn_8033E8D4(void);
extern void fn_80370AE4(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_8074A490[];
extern u8 lbl_8074A498[];
extern u8 lbl_8074A4C0[];
extern u8 lbl_80775A88[];

/* Small data declarations */
extern u32 lbl_8087DC78;
extern u32 lbl_8087DC7C;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885238;
extern u32 lbl_8088523C;
extern u32 lbl_80885254;
extern u32 lbl_8088525C;
extern u32 lbl_80885260;
extern u32 lbl_80885264;
extern u32 lbl_80885270;
extern u32 lbl_80885280;
extern u32 lbl_80885284;
extern u32 lbl_80885288;
extern u32 lbl_80885298;
extern u32 lbl_8088529C;
extern u32 lbl_808852A0;
extern u32 lbl_808852AC;
extern u32 lbl_808852B0;
extern u32 lbl_808852B4;
extern u32 lbl_808852C0;
extern u32 lbl_808852F4;
extern u32 lbl_808852FC;
extern u32 lbl_80885300;
extern u32 lbl_80885304;
extern u32 lbl_80885318;
extern u32 lbl_80885320;
extern u32 lbl_80885324;
extern u32 lbl_80885328;
extern u32 lbl_8088532C;
extern u32 lbl_80885330;
extern u32 lbl_80885334;
extern u32 lbl_80885338;
extern u32 lbl_8088533C;
extern u32 lbl_80885340;
extern u32 lbl_80885344;

/* Function declarations */
void fn_803402C0(void);
void fn_803405C0(void);
void fn_80340E54(void);
void fn_8034100C(void);
void fn_803412AC(void);
void fn_80341BEC(void);

asm void fn_803402C0(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    lfs f3, 0x4(r5)
    stw r0, 0xa4(r1)
    addi r6, r1, 0x50
    lfs f4, 0x8(r5)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stfd f30, 0x80(r1)
    psq_st f30, 0x88(r1), 0, 0
    stw r31, 0x7c(r1)
    mr r31, r4
    stw r30, 0x78(r1)
    mr r30, r3
    addi r3, r1, 0x44
    psq_l f1, 0x8(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f2, 0x10(r4)
    lfs f0, 0x54(r1)
    lwz r0, 0x4(r4)
    fsubs f4, f4, f2
    fsubs f5, f3, f0
    lfs f3, 0x0(r5)
    lfs f0, 0x50(r1)
    oris r0, r0, 0x20
    stw r0, 0x4(r4)
    fsubs f0, f3, f0
    stfs f2, 0x58(r1)
    stfs f5, 0x48(r1)
    stfs f0, 0x44(r1)
    stfs f4, 0x4c(r1)
    bl fn_805F9940
    fmr f31, f1
    lfs f0, lbl_80885288
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_803402C0_0000011C
    lwz r0, 0x16d4(r30)
    cmplwi r0, 0x20
    bge lbl_fn_803402C0_000000FC
    lwz r0, 0x16d4(r30)
    lfs f4, 0x5c(r31)
    slwi r0, r0, 2
    lwz r5, 0x60(r31)
    add r0, r30, r0
    lwz r4, 0x64(r31)
    addic. r6, r0, 0x16d8
    lwz r3, 0x68(r31)
    lwz r0, 0x6c(r31)
    lfs f3, 0x70(r31)
    lfs f0, 0x74(r31)
    stfs f4, 0x5c(r1)
    stw r5, 0x60(r1)
    stw r4, 0x64(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    stfs f3, 0x70(r1)
    stfs f0, 0x74(r1)
    beq lbl_fn_803402C0_000000F0
    stw r3, 0x0(r6)
lbl_fn_803402C0_000000F0:
    lwz r3, 0x16d4(r30)
    addi r0, r3, 0x1
    stw r0, 0x16d4(r30)
lbl_fn_803402C0_000000FC:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_803402C0_000002D8
lbl_fn_803402C0_0000011C:
    addi r3, r1, 0x44
    mr r4, r3
    bl fn_805F98D0
    psq_l f1, 0x20(r31), 0, 0
    addi r30, r1, 0x38
    lfs f2, 0x28(r31)
    mr r3, r30
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r30), 0, 0
    bl fn_805F9940
    lfs f3, 0x78(r31)
    fmr f30, f1
    lfs f0, lbl_80885320
    fcmpo cr0, f3, f0
    ble lbl_fn_803402C0_00000204
    mr r3, r30
    mr r4, r30
    bl fn_805F98D0
    lfs f4, 0x78(r31)
    lfs f3, lbl_80885324
    lfs f0, lbl_80885328
    fsubs f3, f4, f3
    lfs f9, lbl_80885260
    fdivs f0, f3, f0
    fcmpo cr0, f9, f0
    bge lbl_fn_803402C0_00000188
    b lbl_fn_803402C0_0000018C
lbl_fn_803402C0_00000188:
    fmr f9, f0
lbl_fn_803402C0_0000018C:
    lfs f3, 0x4c(r1)
    addi r4, r1, 0x2c
    lfs f5, 0x40(r1)
    addi r3, r1, 0x38
    lfs f0, 0x48(r1)
    fsubs f8, f3, f5
    lfs f4, 0x3c(r1)
    lfs f3, 0x44(r1)
    fsubs f6, f0, f4
    lfs f0, 0x38(r1)
    fmuls f7, f8, f9
    fsubs f3, f3, f0
    stfs f6, 0x18(r1)
    fmuls f6, f6, f9
    fadds f2, f7, f5
    stfs f3, 0x14(r1)
    fmuls f5, f3, f9
    fadds f3, f6, f4
    stfs f8, 0x1c(r1)
    fadds f0, f5, f0
    stfs f3, 0x30(r1)
    stfs f0, 0x2c(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f5, 0x8(r1)
    stfs f6, 0xc(r1)
    stfs f7, 0x10(r1)
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x40(r1)
    b lbl_fn_803402C0_00000260
lbl_fn_803402C0_00000204:
    lfs f5, 0x44(r1)
    addi r3, r1, 0x20
    lfs f4, lbl_808852F4
    lfs f3, 0x48(r1)
    fmuls f7, f5, f4
    lfs f0, 0x4c(r1)
    fmuls f6, f3, f4
    lfs f3, 0x3c(r1)
    fmuls f5, f0, f4
    lfs f0, 0x38(r1)
    fadds f3, f3, f6
    lfs f4, 0x40(r1)
    fadds f0, f0, f7
    stfs f7, 0x44(r1)
    fadds f2, f4, f5
    stfs f3, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f6, 0x48(r1)
    stfs f5, 0x4c(r1)
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x40(r1)
lbl_fn_803402C0_00000260:
    addi r3, r1, 0x38
    mr r4, r3
    bl fn_805F98D0
    fcmpo cr0, f30, f31
    ble lbl_fn_803402C0_0000027C
    fmr f3, f31
    b lbl_fn_803402C0_00000280
lbl_fn_803402C0_0000027C:
    fmr f3, f30
lbl_fn_803402C0_00000280:
    lfs f0, 0x38(r1)
    fcmpo cr0, f30, f31
    fmuls f0, f0, f3
    stfs f0, 0x38(r1)
    ble lbl_fn_803402C0_0000029C
    fmr f3, f31
    b lbl_fn_803402C0_000002A0
lbl_fn_803402C0_0000029C:
    fmr f3, f30
lbl_fn_803402C0_000002A0:
    lfs f0, 0x3c(r1)
    fcmpo cr0, f30, f31
    fmuls f0, f0, f3
    stfs f0, 0x3c(r1)
    ble lbl_fn_803402C0_000002B8
    b lbl_fn_803402C0_000002BC
lbl_fn_803402C0_000002B8:
    fmr f31, f30
lbl_fn_803402C0_000002BC:
    lfs f0, 0x40(r1)
    addi r3, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    fmuls f2, f0, f31
    stfs f2, 0x40(r1)
    psq_st f1, 0x20(r31), 0, 0
    stfs f2, 0x28(r31)
lbl_fn_803402C0_000002D8:
    lwz r0, 0xa4(r1)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_803405C0(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r11, r1, 0xf0
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    stfd f29, 0x120(r1)
    psq_st f29, 0x128(r1), 0, 0
    stfd f28, 0x110(r1)
    psq_st f28, 0x118(r1), 0, 0
    stfd f27, 0x100(r1)
    psq_st f27, 0x108(r1), 0, 0
    stfd f26, 0xf0(r1)
    psq_st f26, 0xf8(r1), 0, 0
    bl _savegpr_17
    lwz r4, 0x14b4(r3)
    mr r31, r3
    cmpwi r4, 0x0
    bne lbl_fn_803405C0_0000042C
    lfs f1, lbl_808852C0
    addi r5, r3, 0x1598
    li r4, 0x1
    bl fn_8033E8D4
    lwz r0, 0x2dc(r31)
    cmpwi r0, 0x141
    bne lbl_fn_803405C0_00000B4C
    lwz r5, 0x14b4(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80885238
    li r4, 0x0
    addi r0, r5, 0x1
    stw r0, 0x14b4(r31)
    lfs f2, lbl_80885284
    li r5, 0x140
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80885270
    mr r3, r31
    stfs f0, 0x2e8(r31)
    li r4, 0x3ea
    bl fn_80232B7C
    lfs f0, lbl_80885238
    li r0, -0x1
    lfs f1, lbl_80885260
    li r17, 0x1
    stfs f0, 0x28(r1)
    addi r4, r31, 0x162c
    addi r5, r31, 0xb0
    addi r7, r1, 0x1c
    stfs f0, 0x2c(r1)
    addi r8, r1, 0x28
    addi r9, r1, 0x38
    li r6, 0x0
    stfs f0, 0x30(r1)
    li r10, -0x1
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f1, 0x44(r1)
    stw r0, 0x8(r1)
    stw r17, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    li r0, 0x0
    stw r0, 0x14b8(r31)
    stb r17, 0x16b2(r31)
    stb r0, 0x16b3(r31)
    b lbl_fn_803405C0_00000B4C
lbl_fn_803405C0_0000042C:
    cmpwi r4, 0x1
    bne lbl_fn_803405C0_0000057C
    lwz r4, 0x14b8(r3)
    lwz r0, 0x16d0(r3)
    cmpw r4, r0
    bgt lbl_fn_803405C0_00000450
    lwz r0, 0x16d4(r3)
    cmplwi r0, 0x20
    blt lbl_fn_803405C0_000004A0
lbl_fn_803405C0_00000450:
    lwz r7, 0x14b4(r3)
    mr r4, r31
    li r5, 0x3ea
    li r6, 0x0
    addi r0, r7, 0x1
    stw r0, 0x14b4(r3)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lfs f1, lbl_80885238
    addi r3, r31, 0xb0
    lfs f2, lbl_80885284
    li r4, 0x0
    li r5, 0x14d
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80885260
    stfs f0, 0x2e8(r31)
    b lbl_fn_803405C0_00000B4C
lbl_fn_803405C0_000004A0:
    lis r4, lbl_8074A4C0@ha
    li r5, 0x0
    addi r4, r4, lbl_8074A4C0@l
    addi r3, r3, 0xb0
    addi r4, r4, 0x327
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803405C0_000004C8
    li r3, 0x0
    b lbl_fn_803405C0_000004D4
lbl_fn_803405C0_000004C8:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_803405C0_000004D4:
    lfs f0, 0x2c(r3)
    li r18, 0x0
    lfs f1, 0x1c(r3)
    li r17, 0x0
    lfs f2, 0xc(r3)
    stfs f2, 0x78(r1)
    stfs f1, 0x7c(r1)
    stfs f0, 0x80(r1)
lbl_fn_803405C0_000004F4:
    lwz r3, lbl_8087F048
    addis r0, r3, 0x1
    add r3, r0, r17
    lwz r0, -0x5eac(r3)
    subi r4, r3, 0x5eb0
    rlwinm r3, r0, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_803405C0_00000524
    mr r3, r31
    addi r5, r1, 0x78
    bl fn_803402C0
lbl_fn_803405C0_00000524:
    addi r18, r18, 0x1
    addi r17, r17, 0xc8
    cmpwi r18, 0x20
    blt lbl_fn_803405C0_000004F4
    li r18, 0x0
    li r17, 0x0
lbl_fn_803405C0_0000053C:
    lwz r0, lbl_8087F048
    add r3, r0, r17
    lwz r0, 0x154(r3)
    addi r4, r3, 0x150
    rlwinm r3, r0, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_803405C0_00000568
    mr r3, r31
    addi r5, r1, 0x78
    bl fn_803402C0
lbl_fn_803405C0_00000568:
    addi r18, r18, 0x1
    addi r17, r17, 0xa0
    cmpwi r18, 0x100
    blt lbl_fn_803405C0_0000053C
    b lbl_fn_803405C0_00000B4C
lbl_fn_803405C0_0000057C:
    cmpwi r4, 0x2
    bne lbl_fn_803405C0_00000A08
    lfs f1, 0x2e4(r3)
    lfs f0, lbl_80885304
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_803405C0_00000B4C
    lfs f0, lbl_8088532C
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_803405C0_000005B0
    addi r0, r4, 0x1
    stw r0, 0x14b4(r3)
lbl_fn_803405C0_000005B0:
    li r20, 0x0
    stw r20, 0x6c(r1)
    lwz r5, lbl_8087F8A0
    lis r3, __files@ha
    lis r4, lbl_8074A4C0@ha
    stw r20, 0x70(r1)
    addi r22, r4, lbl_8074A4C0@l
    addi r23, r3, __files@l
    stw r20, 0x74(r1)
    addi r24, r1, 0x74
    addi r19, r1, 0x84
    lis r27, 0xcccd
    lwz r30, 0x48(r5)
    lis r21, 0x4000
    lis r26, 0x1555
    lis r28, 0x2aab
    lis r29, lbl_80775A88@ha
    b lbl_fn_803405C0_00000830
lbl_fn_803405C0_000005F8:
    lwz r4, 0x70(r1)
    lwz r3, 0x74(r1)
    cmplw r4, r3
    bge lbl_fn_803405C0_00000624
    addi r4, r4, 0x1
    lwz r3, 0x6c(r1)
    slwi r0, r4, 2
    stw r4, 0x70(r1)
    add r3, r3, r0
    stw r30, -0x4(r3)
    b lbl_fn_803405C0_0000082C
lbl_fn_803405C0_00000624:
    subi r0, r21, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_803405C0_00000648
    addi r4, r22, 0xf6
    addi r3, r23, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803405C0_00000648:
    lwz r3, 0x70(r1)
    subi r0, r21, 0x1
    lwz r25, 0x74(r1)
    addi r3, r3, 0x1
    stw r20, 0x84(r1)
    subf r3, r25, r3
    subf r0, r25, r0
    cmplw r3, r0
    stw r20, 0x88(r1)
    stw r20, 0x8c(r1)
    stw r24, 0x90(r1)
    stw r20, 0x94(r1)
    stw r3, 0x10(r1)
    ble lbl_fn_803405C0_00000694
    addi r4, r22, 0xf6
    addi r3, r23, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803405C0_00000694:
    addi r0, r26, 0x5555
    cmplw r25, r0
    bge lbl_fn_803405C0_000006DC
    addi r4, r25, 0x1
    subi r5, r27, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x10(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x18
    srwi r4, r4, 2
    stw r4, 0x18(r1)
    cmplw r4, r0
    bge lbl_fn_803405C0_000006D0
    addi r3, r1, 0x10
lbl_fn_803405C0_000006D0:
    lwz r0, 0x0(r3)
    add r18, r25, r0
    b lbl_fn_803405C0_00000718
lbl_fn_803405C0_000006DC:
    subi r0, r28, 0x5556
    cmplw r25, r0
    bge lbl_fn_803405C0_00000714
    addi r3, r25, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0x14(r1)
    cmplw r3, r0
    addi r3, r1, 0x14
    bge lbl_fn_803405C0_00000708
    addi r3, r1, 0x10
lbl_fn_803405C0_00000708:
    lwz r0, 0x0(r3)
    add r18, r25, r0
    b lbl_fn_803405C0_00000718
lbl_fn_803405C0_00000714:
    subi r18, r21, 0x1
lbl_fn_803405C0_00000718:
    subi r0, r21, 0x1
    cmplw r18, r0
    ble lbl_fn_803405C0_00000738
    addi r4, r22, 0xf6
    addi r3, r23, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803405C0_00000738:
    slwi r3, r18, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_803405C0_00000760
    addi r3, r23, 0xa0
    addi r4, r29, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803405C0_00000760:
    lwz r5, 0x70(r1)
    lwz r0, 0x88(r1)
    slwi r4, r5, 2
    stw r25, 0x84(r1)
    slwi r3, r0, 2
    stw r18, 0x8c(r1)
    add r0, r25, r4
    stw r5, 0x94(r1)
    stwx r30, r3, r0
    lwz r0, 0x70(r1)
    lwz r4, 0x88(r1)
    lwz r17, 0x6c(r1)
    slwi r0, r0, 2
    addi r5, r4, 0x1
    stw r5, 0x88(r1)
    add r3, r17, r0
    lwz r0, 0x94(r1)
    subf r3, r17, r3
    srawi r4, r3, 2
    lwz r3, 0x84(r1)
    addze r25, r4
    subf r0, r25, r0
    stw r0, 0x94(r1)
    slwi r18, r25, 2
    mr r4, r17
    slwi r0, r0, 2
    mr r5, r18
    add r3, r3, r0
    bl memcpy
    mr r3, r17
    mr r5, r18
    li r4, 0x0
    bl memset
    lwz r0, 0x88(r1)
    cmpwi r19, 0x0
    lwz r6, 0x74(r1)
    lwz r4, 0x8c(r1)
    add r5, r0, r25
    lwz r3, 0x6c(r1)
    lwz r0, 0x84(r1)
    stw r4, 0x74(r1)
    stw r6, 0x8c(r1)
    stw r0, 0x6c(r1)
    stw r3, 0x84(r1)
    stw r5, 0x70(r1)
    stw r20, 0x88(r1)
    beq lbl_fn_803405C0_0000082C
    cmpwi r3, 0x0
    beq lbl_fn_803405C0_0000082C
    stw r20, 0x88(r1)
    bl dtor_80084684
lbl_fn_803405C0_0000082C:
    lwz r30, 0x14ac(r30)
lbl_fn_803405C0_00000830:
    cmpwi r30, 0x0
    bne lbl_fn_803405C0_000005F8
    lis r4, lbl_8074A4C0@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_8074A4C0@l
    li r5, 0x0
    addi r4, r4, 0x327
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803405C0_00000860
    li r4, 0x0
    b lbl_fn_803405C0_0000086C
lbl_fn_803405C0_00000860:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_803405C0_0000086C:
    lfs f0, 0x2c(r4)
    lis r3, lbl_8074A490@ha
    lfs f1, 0x1c(r4)
    mr r19, r31
    lfs f2, 0xc(r4)
    li r20, 0x0
    stfs f2, 0x60(r1)
    lis r17, 0x4330
    lfd f31, lbl_8074A490@l(r3)
    stfs f1, 0x64(r1)
    lfs f28, lbl_80885318
    stfs f0, 0x68(r1)
    lfs f29, lbl_8088525C
    lfs f30, lbl_80885330
    b lbl_fn_803405C0_000009CC
lbl_fn_803405C0_000008A8:
    lwz r21, 0x16d8(r19)
    lwz r18, 0x70(r1)
    bl fn_80680CF8
    divwu r0, r3, r18
    lwz r4, 0x6c(r1)
    lfs f4, 0x68(r1)
    lfs f2, 0x64(r1)
    lfs f0, 0x60(r1)
    mullw r0, r0, r18
    subf r0, r0, r3
    slwi r0, r0, 2
    lwzx r3, r4, r0
    lfs f5, 0x530(r3)
    lfs f3, 0x52c(r3)
    lfs f1, 0x528(r3)
    fsubs f4, f5, f4
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f4, 0x5c(r1)
    stfs f0, 0x54(r1)
    stfs f2, 0x58(r1)
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0x9c(r1)
    stw r17, 0x98(r1)
    lfd f0, 0x98(r1)
    fsubs f0, f0, f31
    fdivs f0, f0, f28
    fmadds f27, f29, f0, f30
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0xa4(r1)
    stw r17, 0xa0(r1)
    lfd f0, 0xa0(r1)
    fsubs f0, f0, f31
    fdivs f0, f0, f28
    fmadds f26, f29, f0, f30
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0xac(r1)
    lfs f0, 0x5c(r1)
    addi r3, r1, 0x54
    stw r17, 0xa8(r1)
    mr r4, r3
    fadds f0, f0, f27
    lfs f1, 0x58(r1)
    lfd f3, 0xa8(r1)
    fadds f1, f1, f26
    stfs f0, 0x5c(r1)
    fsubs f3, f3, f31
    lfs f2, 0x54(r1)
    stfs f26, 0x4c(r1)
    fdivs f3, f3, f28
    stfs f27, 0x50(r1)
    stfs f1, 0x58(r1)
    fmadds f0, f29, f3, f30
    stfs f0, 0x48(r1)
    fadds f0, f2, f0
    stfs f0, 0x54(r1)
    bl fn_805F98D0
    lwz r3, lbl_8087F048
    mr r4, r31
    lfs f1, lbl_80885238
    mr r5, r21
    lfs f2, lbl_80885260
    addi r6, r1, 0x60
    addi r7, r1, 0x54
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
    addi r19, r19, 0x4
    addi r20, r20, 0x1
lbl_fn_803405C0_000009CC:
    lwz r0, 0x16d4(r31)
    cmplw r20, r0
    blt lbl_fn_803405C0_000008A8
    addic. r0, r1, 0x6c
    beq lbl_fn_803405C0_00000B4C
    beq lbl_fn_803405C0_00000B4C
    beq lbl_fn_803405C0_00000B4C
    lwz r3, 0x6c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_803405C0_00000B4C
    lwz r0, 0x70(r1)
    subf r0, r0, r0
    stw r0, 0x70(r1)
    bl dtor_80084684
    b lbl_fn_803405C0_00000B4C
lbl_fn_803405C0_00000A08:
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    lfs f0, lbl_808852C0
    lfs f2, 0x52c(r31)
    fdivs f1, f0, f1
    lfs f0, lbl_80885238
    fsubs f1, f2, f1
    stfs f1, 0x52c(r31)
    fcmpo cr0, f1, f0
    bge lbl_fn_803405C0_00000A38
    stfs f0, 0x52c(r31)
lbl_fn_803405C0_00000A38:
    lfs f26, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f26, f1
    cror eq, gt, eq
    bne lbl_fn_803405C0_00000B4C
    li r17, 0x0
    stw r17, 0x14b4(r31)
    stw r17, 0x14b8(r31)
    stw r17, 0x14c0(r31)
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
    stw r17, 0x58c(r31)
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
    lfs f0, lbl_80885238
    stfs f0, 0x52c(r31)
lbl_fn_803405C0_00000B4C:
    addi r11, r1, 0xf0
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    psq_l f29, 0x128(r1), 0, 0
    lfd f29, 0x120(r1)
    psq_l f28, 0x118(r1), 0, 0
    lfd f28, 0x110(r1)
    psq_l f27, 0x108(r1), 0, 0
    lfd f27, 0x100(r1)
    psq_l f26, 0xf8(r1), 0, 0
    lfd f26, 0xf0(r1)
    bl _restgpr_17
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_80340E54(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r4, lbl_8074A490@ha
    lfs f3, lbl_80885334
    stw r0, 0x34(r1)
    lis r0, 0x4330
    lfd f5, lbl_8074A490@l(r4)
    stfd f31, 0x20(r1)
    lfs f0, lbl_80885238
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r5, lbl_8087F0A8
    stw r0, 0x8(r1)
    lwz r0, 0x30(r5)
    lfs f2, 0x578(r3)
    mullw r0, r0, r0
    lfs f1, 0x52c(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f4, 0x8(r1)
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fadds f2, f2, f3
    stfs f2, 0x578(r3)
    fadds f1, f1, f2
    stfs f1, 0x52c(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_80340E54_00000C14
    stfs f0, 0x52c(r3)
    stfs f0, 0x578(r3)
lbl_fn_80340E54_00000C14:
    lwz r0, 0x14b8(r3)
    cmpwi r0, 0x96
    bge lbl_fn_80340E54_00000C3C
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80340E54_00000D2C
lbl_fn_80340E54_00000C3C:
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
lbl_fn_80340E54_00000D2C:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8034100C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r4, lbl_8074A490@ha
    lfs f3, lbl_80885334
    stw r0, 0x34(r1)
    lis r0, 0x4330
    lfd f5, lbl_8074A490@l(r4)
    stfd f31, 0x20(r1)
    lfs f0, lbl_80885238
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r5, lbl_8087F0A8
    stw r0, 0x8(r1)
    lwz r0, 0x30(r5)
    lfs f2, 0x578(r3)
    mullw r0, r0, r0
    lfs f1, 0x52c(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f4, 0x8(r1)
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fadds f2, f2, f3
    stfs f2, 0x578(r3)
    fadds f1, f1, f2
    stfs f1, 0x52c(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_8034100C_00000DCC
    stfs f0, 0x52c(r3)
    stfs f0, 0x578(r3)
lbl_fn_8034100C_00000DCC:
    lwz r0, 0x14b4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8034100C_00000E40
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8034100C_00000FCC
    lfs f0, lbl_80885260
    li r31, 0x1
    stw r31, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80885238
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x3e
    lfs f2, lbl_80885284
    li r6, 0x1
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x0
    stw r31, 0x14b4(r30)
    stw r0, 0x14b8(r30)
    stw r0, 0x16ac(r30)
    b lbl_fn_8034100C_00000FCC
lbl_fn_8034100C_00000E40:
    cmpwi r0, 0x1
    bne lbl_fn_8034100C_00000EB8
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x2
    beq lbl_fn_8034100C_00000FCC
    lwz r4, 0x14b8(r3)
    lwz r0, 0x16a4(r3)
    cmpw r4, r0
    bge lbl_fn_8034100C_00000E74
    lwz r4, 0x16ac(r3)
    lwz r0, 0x16a8(r3)
    cmpw r4, r0
    ble lbl_fn_8034100C_00000FCC
lbl_fn_8034100C_00000E74:
    lfs f0, lbl_80885260
    li r0, 0x1
    stw r0, 0x3fc(r3)
    li r4, 0x0
    lfs f1, lbl_80885238
    li r5, 0x3f
    stfs f0, 0x2fc(r3)
    li r6, 0x0
    lfs f2, lbl_80885284
    li r7, 0x0
    stfs f0, 0x2e8(r3)
    li r8, 0x1
    addi r3, r3, 0xb0
    bl fn_80097C08
    li r0, 0x2
    stw r0, 0x14b4(r30)
    b lbl_fn_8034100C_00000FCC
lbl_fn_8034100C_00000EB8:
    cmpwi r0, 0x2
    bne lbl_fn_8034100C_00000FCC
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8034100C_00000FCC
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
lbl_fn_8034100C_00000FCC:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803412AC(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    addi r11, r1, 0x190
    stfd f31, 0x1b0(r1)
    psq_st f31, 0x1b8(r1), 0, 0
    stfd f30, 0x1a0(r1)
    psq_st f30, 0x1a8(r1), 0, 0
    stfd f29, 0x190(r1)
    psq_st f29, 0x198(r1), 0, 0
    bl _savegpr_27
    lwz r5, lbl_8087F0A8
    lis r0, 0x4330
    stw r0, 0x168(r1)
    lis r4, lbl_8074A490@ha
    lwz r0, 0x30(r5)
    mr r30, r3
    lfd f7, lbl_8074A490@l(r4)
    mullw r0, r0, r0
    lfs f5, lbl_80885334
    lfs f4, 0x578(r3)
    lfs f3, 0x52c(r3)
    lfs f0, lbl_80885238
    xoris r0, r0, 0x8000
    stw r0, 0x16c(r1)
    lfd f6, 0x168(r1)
    fsubs f6, f6, f7
    fdivs f5, f5, f6
    fadds f4, f4, f5
    stfs f4, 0x578(r3)
    fadds f3, f3, f4
    stfs f3, 0x52c(r3)
    fcmpo cr0, f3, f0
    bge lbl_fn_803412AC_0000107C
    stfs f0, 0x52c(r3)
    stfs f0, 0x578(r3)
lbl_fn_803412AC_0000107C:
    lwz r4, 0x14b4(r3)
    lwz r31, lbl_8087F430
    cmpwi r4, 0x0
    bne lbl_fn_803412AC_00001538
    lwz r5, lbl_8087F8A0
    addi r4, r1, 0x88
    lfs f3, 0x530(r3)
    addi r29, r1, 0x94
    lwz r5, 0x48(r5)
    stw r5, 0x14b0(r3)
    lfs f0, 0x52c(r3)
    lfs f4, 0x530(r5)
    lfs f5, 0x52c(r5)
    fsubs f2, f4, f3
    lfs f4, 0x528(r5)
    lfs f3, 0x528(r3)
    fsubs f5, f5, f0
    lfs f0, lbl_80885298
    fsubs f3, f4, f3
    frsp f4, f2
    stfs f5, 0x8c(r1)
    stfs f3, 0x88(r1)
    fabs f3, f4
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x90(r1)
    frsp f3, f3
    psq_st f1, 0x0(r29), 0, 0
    fcmpo cr0, f3, f0
    stfs f2, 0x9c(r1)
    bge lbl_fn_803412AC_00001118
    lfs f3, 0x94(r1)
    lfs f0, lbl_80885238
    fcmpo cr0, f3, f0
    ble lbl_fn_803412AC_0000110C
    lfs f0, lbl_8088529C
    b lbl_fn_803412AC_00001110
lbl_fn_803412AC_0000110C:
    lfs f0, lbl_808852A0
lbl_fn_803412AC_00001110:
    stfs f0, 0x80(r1)
    b lbl_fn_803412AC_0000112C
lbl_fn_803412AC_00001118:
    fmr f2, f4
    lfs f1, 0x94(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x80(r1)
lbl_fn_803412AC_0000112C:
    lfs f0, 0x80(r1)
    addi r3, r1, 0xb8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885238
    addi r4, r1, 0x70
    lfs f30, 0xc0(r1)
    mr r5, r4
    lfs f29, 0xbc(r1)
    addi r3, r1, 0xe8
    lfs f13, 0xb8(r1)
    lfs f12, 0xd0(r1)
    lfs f11, 0xcc(r1)
    lfs f10, 0xc8(r1)
    lfs f9, 0xe0(r1)
    lfs f8, 0xdc(r1)
    lfs f7, 0xd8(r1)
    lfs f6, 0xe4(r1)
    lfs f5, 0xd4(r1)
    lfs f4, 0xc4(r1)
    lfs f0, lbl_80885260
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x9c(r1)
    stfs f3, 0x118(r1)
    stfs f3, 0x11c(r1)
    stfs f3, 0x120(r1)
    stfs f0, 0x124(r1)
    stfs f13, 0x40(r1)
    stfs f29, 0x44(r1)
    stfs f30, 0x48(r1)
    stfs f13, 0xe8(r1)
    stfs f29, 0xec(r1)
    stfs f30, 0xf0(r1)
    stfs f10, 0x4c(r1)
    stfs f11, 0x50(r1)
    stfs f12, 0x54(r1)
    stfs f10, 0xf8(r1)
    stfs f11, 0xfc(r1)
    stfs f12, 0x100(r1)
    stfs f7, 0x58(r1)
    stfs f8, 0x5c(r1)
    stfs f9, 0x60(r1)
    stfs f7, 0x108(r1)
    stfs f8, 0x10c(r1)
    stfs f9, 0x110(r1)
    stfs f4, 0x64(r1)
    stfs f5, 0x68(r1)
    stfs f6, 0x6c(r1)
    stfs f4, 0xf4(r1)
    stfs f5, 0x104(r1)
    stfs f6, 0x114(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x78(r1)
    bl fn_805F9750
    lfs f2, 0x78(r1)
    lfs f0, lbl_80885298
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_803412AC_00001248
    lfs f3, 0x74(r1)
    lfs f0, lbl_80885238
    fcmpo cr0, f3, f0
    ble lbl_fn_803412AC_00001238
    lfs f0, lbl_8088529C
    b lbl_fn_803412AC_0000123C
lbl_fn_803412AC_00001238:
    lfs f0, lbl_808852A0
lbl_fn_803412AC_0000123C:
    fneg f0, f0
    stfs f0, 0x7c(r1)
    b lbl_fn_803412AC_0000125C
lbl_fn_803412AC_00001248:
    lfs f1, 0x74(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x7c(r1)
lbl_fn_803412AC_0000125C:
    addi r3, r1, 0x7c
    lfs f3, lbl_80885238
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8074A498@ha
    psq_st f1, 0x0(r29), 0, 0
    fmr f2, f3
    lfs f0, 0x538(r30)
    lfs f29, 0x98(r1)
    stfs f2, 0x9c(r1)
    fsubs f1, f29, f0
    lfd f2, lbl_8074A498@l(r3)
    stfs f3, 0x84(r1)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_808852AC
    fcmpo cr0, f4, f0
    ble lbl_fn_803412AC_000012A8
    lfs f0, lbl_80885280
    fsubs f4, f4, f0
lbl_fn_803412AC_000012A8:
    lfs f0, lbl_808852B0
    fcmpo cr0, f4, f0
    bge lbl_fn_803412AC_000012BC
    lfs f0, lbl_80885280
    fadds f4, f4, f0
lbl_fn_803412AC_000012BC:
    lfs f0, lbl_80885238
    fcmpo cr0, f4, f0
    bge lbl_fn_803412AC_000012D0
    fneg f0, f4
    b lbl_fn_803412AC_000012D4
lbl_fn_803412AC_000012D0:
    fmr f0, f4
lbl_fn_803412AC_000012D4:
    lfs f3, lbl_808852B4
    fcmpo cr0, f0, f3
    cror eq, lt, eq
    bne lbl_fn_803412AC_000012EC
    stfs f29, 0x538(r30)
    b lbl_fn_803412AC_00001318
lbl_fn_803412AC_000012EC:
    lfs f0, lbl_80885238
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_803412AC_0000130C
    lfs f0, 0x538(r30)
    fsubs f0, f0, f3
    stfs f0, 0x538(r30)
    b lbl_fn_803412AC_00001318
lbl_fn_803412AC_0000130C:
    lfs f0, 0x538(r30)
    fadds f0, f0, f3
    stfs f0, 0x538(r30)
lbl_fn_803412AC_00001318:
    lfs f29, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f29, f1
    cror eq, gt, eq
    bne lbl_fn_803412AC_000018FC
    lwz r0, 0x7e0(r30)
    lwz r3, 0x14b4(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    addi r0, r3, 0x1
    stw r0, 0x14b4(r30)
    beq lbl_fn_803412AC_000013A0
    lfs f0, lbl_80885238
    addi r3, r30, 0x7d4
    stfs f0, 0x7d8(r30)
    li r4, 0x20
    li r5, 0x0
    bl fn_8013310C
    lwz r3, lbl_8087F430
    li r4, 0xce
    li r5, 0x1
    bl fn_80370AE4
    lis r29, lbl_8074A4C0@ha
    addi r3, r30, 0xb0
    addi r29, r29, lbl_8074A4C0@l
    li r5, 0x0
    addi r4, r29, 0x2fb
    bl fn_8009373C
    addi r3, r30, 0xb0
    addi r4, r29, 0x308
    li r5, 0x0
    bl fn_8009373C
lbl_fn_803412AC_000013A0:
    lfs f1, lbl_80885238
    addi r3, r30, 0xb0
    lfs f2, lbl_80885284
    li r4, 0x0
    li r5, 0x1e1
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80885254
    li r3, 0x0
    stfs f0, 0x2e8(r30)
    lwz r4, 0x6a8(r30)
    lfs f0, lbl_80885238
    lwz r0, 0x3dc(r4)
    fmr f2, f0
    clrlwi r0, r0, 1
    stw r0, 0x3dc(r4)
    stfs f0, 0x528(r30)
    lwz r4, 0x1758(r30)
    stfs f0, 0x52c(r30)
    stfs f0, 0x530(r30)
    psq_l f1, 0x528(r30), 0, 0
    stw r3, 0x14b8(r30)
    psq_st f1, 0x528(r4), 0, 0
    stfs f2, 0x530(r4)
    lwz r3, 0x1758(r30)
    lfs f2, 0x53c(r30)
    psq_l f1, 0x534(r30), 0, 0
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    lwz r3, 0x1758(r30)
    stfs f0, 0x2e4(r3)
    lwz r3, 0x1758(r30)
    lfs f0, 0x2e8(r30)
    stfs f0, 0x2e8(r3)
    lwz r3, lbl_8087F8A0
    lwz r27, lbl_8087F048
    lwz r28, 0x48(r3)
    mr r3, r27
    bl fn_800F8548
    mr r29, r3
    li r3, 0x780
    bl fn_80219E6C
    li r31, -0x1
    stw r31, 0x8(r1)
    lfs f1, lbl_80885238
    mr r5, r3
    stw r31, 0xc(r1)
    mr r3, r27
    lfs f2, lbl_80885260
    mr r4, r28
    mr r6, r29
    addi r7, r30, 0x528
    addi r8, r30, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    addi r3, r30, 0x168c
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80885238
    li r0, 0x1
    lfs f1, lbl_80885260
    addi r4, r30, 0x168c
    stfs f0, 0x20(r1)
    addi r5, r30, 0xb0
    addi r7, r1, 0x14
    addi r8, r1, 0x20
    stfs f0, 0x24(r1)
    addi r9, r1, 0x30
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x28(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stw r31, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    addi r4, r30, 0x168c
    lfs f1, lbl_80885254
    li r5, 0x0
    bl fn_8023A254
    lis r4, lbl_8074A4C0@ha
    lfs f1, lbl_80885260
    addi r4, r4, lbl_8074A4C0@l
    addi r3, r1, 0x10
    addi r4, r4, 0x362
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803412AC_000018FC
lbl_fn_803412AC_00001538:
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_803412AC_000018E0
    lfs f29, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    lfs f3, lbl_808852FC
    lfs f0, lbl_8088525C
    fsubs f3, f1, f3
    lfs f4, lbl_80885260
    fsubs f0, f29, f0
    fdivs f0, f0, f3
    fcmpo cr0, f4, f0
    bge lbl_fn_803412AC_00001578
    b lbl_fn_803412AC_0000159C
lbl_fn_803412AC_00001578:
    lfs f29, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f3, lbl_808852FC
    lfs f0, lbl_8088525C
    fsubs f3, f1, f3
    fsubs f0, f29, f0
    fdivs f4, f0, f3
lbl_fn_803412AC_0000159C:
    lfs f5, lbl_80885238
    fcmpo cr0, f5, f4
    ble lbl_fn_803412AC_000015AC
    b lbl_fn_803412AC_00001604
lbl_fn_803412AC_000015AC:
    lfs f29, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f3, lbl_808852FC
    lfs f0, lbl_8088525C
    fsubs f3, f1, f3
    lfs f5, lbl_80885260
    fsubs f0, f29, f0
    fdivs f0, f0, f3
    fcmpo cr0, f5, f0
    bge lbl_fn_803412AC_000015E0
    b lbl_fn_803412AC_00001604
lbl_fn_803412AC_000015E0:
    lfs f29, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f3, lbl_808852FC
    lfs f0, lbl_8088525C
    fsubs f3, f1, f3
    fsubs f0, f29, f0
    fdivs f5, f0, f3
lbl_fn_803412AC_00001604:
    lfs f0, lbl_8087DC7C
    lfs f3, lbl_8087DC78
    fsubs f0, f0, f3
    fmadds f0, f5, f0, f3
    stfs f0, 0x540(r30)
    stfs f0, 0x544(r30)
    stfs f0, 0x548(r30)
    lwz r0, 0x8a0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803412AC_00001794
    lfs f29, 0x594(r31)
    lfs f30, 0x59c(r31)
    lfs f31, 0x5a0(r31)
    lfs f13, 0x5a4(r31)
    lfs f12, 0x5a8(r31)
    lfs f11, 0x5ac(r31)
    lfs f10, 0x5b0(r31)
    lfs f9, 0x5b4(r31)
    lfs f8, 0x5b8(r31)
    lfs f7, 0x5bc(r31)
    lwz r3, 0x5c0(r31)
    lfs f6, lbl_80885338
    stw r30, 0x8a0(r31)
    lfs f5, lbl_8088533C
    lwz r0, 0x4d8(r31)
    lfs f0, lbl_808852FC
    lfs f4, lbl_8088523C
    cmpwi r0, 0x4
    stfs f29, 0x134(r1)
    stfs f30, 0x13c(r1)
    stfs f31, 0x140(r1)
    stfs f13, 0x144(r1)
    stfs f12, 0x148(r1)
    stfs f11, 0x14c(r1)
    stfs f10, 0x150(r1)
    stfs f9, 0x154(r1)
    stfs f8, 0x158(r1)
    stfs f7, 0x15c(r1)
    stw r3, 0x160(r1)
    stfs f6, 0x130(r1)
    stfs f5, 0x12c(r1)
    stfs f0, 0x128(r1)
    stfs f4, 0x138(r1)
    beq lbl_fn_803412AC_00001708
    li r0, 0x4
    stw r0, 0x4d8(r31)
    lfs f3, lbl_80885300
    stfs f0, 0x4e4(r31)
    lfs f0, lbl_80885260
    stfs f5, 0x4e8(r31)
    stfs f6, 0x4ec(r31)
    stfs f29, 0x4f0(r31)
    stfs f4, 0x4f4(r31)
    stfs f30, 0x4f8(r31)
    stfs f31, 0x4fc(r31)
    stfs f13, 0x500(r31)
    stfs f12, 0x504(r31)
    stfs f11, 0x508(r31)
    stfs f10, 0x50c(r31)
    stfs f9, 0x510(r31)
    stfs f8, 0x514(r31)
    stfs f7, 0x518(r31)
    stw r3, 0x51c(r31)
    stfs f3, 0x4e0(r31)
    stfs f0, 0x4dc(r31)
lbl_fn_803412AC_00001708:
    lis r4, lbl_8074A4C0@ha
    addi r3, r30, 0xb0
    addi r4, r4, lbl_8074A4C0@l
    li r5, 0x0
    addi r4, r4, 0x332
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803412AC_00001730
    li r3, 0x0
    b lbl_fn_803412AC_0000173C
lbl_fn_803412AC_00001730:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_803412AC_0000173C:
    lfs f2, 0x2c(r3)
    addi r4, r1, 0xac
    lfs f0, 0x1c(r3)
    li r0, 0x1
    lfs f3, 0xc(r3)
    addi r5, r31, 0x97c
    lbz r3, 0x97c(r31)
    stb r3, 0x97d(r31)
    lfs f4, lbl_80885238
    stfs f3, 0xac(r1)
    stfs f0, 0xb0(r1)
    stb r0, 0x97c(r31)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0xc(r5), 0, 0
    stfs f2, 0x990(r31)
    stfs f2, 0xb4(r1)
    stfs f4, 0x9a0(r31)
    b lbl_fn_803412AC_00001788
    b lbl_fn_803412AC_0000178C
lbl_fn_803412AC_00001788:
    li r0, 0x0
lbl_fn_803412AC_0000178C:
    stw r0, 0x4(r5)
    b lbl_fn_803412AC_000017F8
lbl_fn_803412AC_00001794:
    lis r4, lbl_8074A4C0@ha
    stw r30, 0x8a0(r31)
    addi r4, r4, lbl_8074A4C0@l
    addi r3, r30, 0xb0
    addi r4, r4, 0x332
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803412AC_000017C0
    li r5, 0x0
    b lbl_fn_803412AC_000017CC
lbl_fn_803412AC_000017C0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r5, r3, r0
lbl_fn_803412AC_000017CC:
    lfs f0, 0x1c(r5)
    addi r4, r1, 0xa0
    lfs f3, 0xc(r5)
    addi r3, r31, 0x988
    lfs f2, 0x2c(r5)
    stfs f3, 0xa0(r1)
    stfs f0, 0xa4(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xa8(r1)
    stfs f2, 0x990(r31)
lbl_fn_803412AC_000017F8:
    lfs f29, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f29, f1
    cror eq, gt, eq
    bne lbl_fn_803412AC_00001860
    lwz r3, lbl_8087F430
    lwz r0, 0x8a0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803412AC_00001834
    li r0, 0x0
    stw r0, 0x8a0(r3)
    stw r0, 0x4d8(r3)
    stb r0, 0x97c(r3)
lbl_fn_803412AC_00001834:
    lwz r3, lbl_8087F430
    li r4, 0xcf
    li r5, 0x1
    bl fn_80370AE4
    lwz r4, 0x14b4(r30)
    li r0, 0x0
    stw r0, 0x14b8(r30)
    mr r3, r30
    addi r0, r4, 0x1
    stw r0, 0x14b4(r30)
    bl fn_801765D8
lbl_fn_803412AC_00001860:
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_80885340
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_803412AC_000018BC
    lwz r0, 0x14b4(r30)
    cmpwi r0, 0x1
    bne lbl_fn_803412AC_000018BC
    lwz r3, 0x96c(r31)
    li r0, 0x1e
    lfs f3, lbl_80885238
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    lfs f0, lbl_8088525C
    subf r3, r4, r3
    stw r3, 0x96c(r31)
    stw r0, 0x970(r31)
    stfs f3, 0x974(r31)
    stfs f0, 0x978(r31)
    lwz r3, 0x14b4(r30)
    addi r0, r3, 0x1
    stw r0, 0x14b4(r30)
lbl_fn_803412AC_000018BC:
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_80885344
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_803412AC_000018FC
    mr r3, r30
    li r4, 0x0
    bl fn_8016E4C4
    b lbl_fn_803412AC_000018FC
lbl_fn_803412AC_000018E0:
    lwz r0, 0x8a0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803412AC_000018FC
    li r0, 0x0
    stw r0, 0x8a0(r31)
    stw r0, 0x4d8(r31)
    stb r0, 0x97c(r31)
lbl_fn_803412AC_000018FC:
    addi r11, r1, 0x190
    psq_l f31, 0x1b8(r1), 0, 0
    lfd f31, 0x1b0(r1)
    psq_l f30, 0x1a8(r1), 0, 0
    lfd f30, 0x1a0(r1)
    psq_l f29, 0x198(r1), 0, 0
    lfd f29, 0x190(r1)
    bl _restgpr_27
    lwz r0, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

asm void fn_80341BEC(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r3
    lwz r4, 0x14b4(r3)
    cmpwi r4, 0x0
    bne lbl_fn_80341BEC_00001A20
    lfs f1, 0x2e4(r3)
    lfs f0, lbl_80885304
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80341BEC_00001B34
    addi r0, r4, 0x1
    li r31, 0x1
    stw r0, 0x14b4(r3)
    li r4, 0x0
    stw r31, 0x14bc(r3)
    addi r3, r3, 0x1610
    bl fn_80232B7C
    lfs f2, lbl_80885238
    li r0, -0x1
    lfs f0, lbl_80885260
    addi r4, r30, 0x1610
    stfs f2, 0x28(r1)
    addi r5, r30, 0xb0
    lfs f1, lbl_80885264
    addi r7, r1, 0x34
    stfs f2, 0x2c(r1)
    addi r8, r1, 0x28
    addi r9, r1, 0x18
    li r6, 0x0
    stfs f2, 0x30(r1)
    li r10, -0x1
    stfs f2, 0x34(r1)
    stfs f2, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lis r4, lbl_8074A4C0@ha
    lfs f1, lbl_80885260
    addi r4, r4, lbl_8074A4C0@l
    addi r3, r1, 0x10
    addi r4, r4, 0x36f
    addi r5, r30, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80341BEC_00001B34
lbl_fn_80341BEC_00001A20:
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    lfs f0, lbl_80885260
    fsubs f0, f1, f0
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_80341BEC_00001B34
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
lbl_fn_80341BEC_00001B34:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
