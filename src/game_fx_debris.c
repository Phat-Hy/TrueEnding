#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_15(void);
extern void _restgpr_25(void);
extern void _savegpr_15(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_8000D124(void);
extern void fn_8000D760(void);
extern void fn_8000E18C(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8004203C(void);
extern void fn_80057A68(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AFF8(void);
extern void fn_80092814(void);
extern void fn_800DB3EC(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800EC204(void);
extern void fn_800F8574(void);
extern void fn_8011FC10(void);
extern void fn_80121F00(void);
extern void fn_8013655C(void);
extern void fn_8013C504(void);
extern void fn_80179D44(void);
extern void fn_801A03E0(void);
extern void fn_80219E6C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_80237874(void);
extern void fn_80244CCC(void);
extern void fn_80288390(void);
extern void fn_80288E30(void);
extern void fn_803C1560(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473F50(void);
extern void fn_805A3C58(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_8068B100(void);
extern void fn_806958E0(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807457F8[];
extern u8 lbl_80745818[];
extern u8 lbl_80745C70[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80785AE0[];
extern u8 lbl_80785B38[];
extern u8 lbl_8078FBB0[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087F048;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80883BE8;
extern u32 lbl_80883BF0;
extern u32 lbl_80883C0C;
extern u32 lbl_80883C20;
extern u32 lbl_80883C3C;
extern u32 lbl_80883C40;
extern u32 lbl_80883C50;
extern u32 lbl_80883C78;
extern u32 lbl_80883C7C;
extern u32 lbl_80883C98;
extern u32 lbl_80883CEC;
extern u32 lbl_80883CFC;
extern u32 lbl_80883D00;
extern u32 lbl_80883D04;
extern u32 lbl_80883D08;
extern u32 lbl_80883D0C;
extern u32 lbl_80883D10;
extern u32 lbl_80883D14;
extern u32 lbl_80883D18;
extern u32 lbl_80883D1C;
extern u32 lbl_80883D20;
extern u32 lbl_80883D28;
extern u32 lbl_80883D2C;
extern u32 lbl_80883D30;

/* Function declarations */
void fn_8029BDC8(void);
void fn_8029BE7C(void);
void fn_8029C564(void);
void fn_8029C69C(void);
void fn_8029C728(void);
void fn_8029C8CC(void);
void fn_8029C94C(void);
void fn_8029CA54(void);
void fn_8029CA64(void);
void fn_8029CA6C(void);
void fn_8029CA74(void);
void fn_8029CA7C(void);
void fn_8029CA84(void);
void fn_8029CB00(void);
void fn_8029CF00(void);

asm void fn_8029BDC8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_80883BE8
    lis r5, lbl_80745818@ha
    stw r0, 0x34(r1)
    addi r5, r5, lbl_80745818@l
    stw r31, 0x2c(r1)
    mr r31, r4
    addi r4, r5, 0x309
    li r5, 0x0
    stw r30, 0x28(r1)
    mr r30, r3
    addi r3, r31, 0xb0
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029BDC8_00000054
    li r3, 0x0
    b lbl_fn_8029BDC8_00000060
lbl_fn_8029BDC8_00000054:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_8029BDC8_00000060:
    lfs f3, 0x2c(r3)
    lfs f4, 0x1c(r3)
    lfs f5, 0xc(r3)
    lfs f2, 0x10(r1)
    lfs f1, 0xc(r1)
    lfs f0, 0x8(r1)
    fadds f2, f3, f2
    fadds f1, f4, f1
    stfs f5, 0x14(r1)
    fadds f0, f5, f0
    stfs f1, 0x4(r30)
    stfs f0, 0x0(r30)
    stfs f2, 0x8(r30)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    stfs f4, 0x18(r1)
    stfs f3, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8029BE7C(void)
{
    nofralloc
    stwu r1, -0x4b0(r1)
    mflr r0
    stw r0, 0x4b4(r1)
    addi r11, r1, 0x3e0
    stfd f31, 0x4a0(r1)
    psq_st f31, 0x4a8(r1), 0, 0
    stfd f30, 0x490(r1)
    psq_st f30, 0x498(r1), 0, 0
    stfd f29, 0x480(r1)
    psq_st f29, 0x488(r1), 0, 0
    stfd f28, 0x470(r1)
    psq_st f28, 0x478(r1), 0, 0
    stfd f27, 0x460(r1)
    psq_st f27, 0x468(r1), 0, 0
    stfd f26, 0x450(r1)
    psq_st f26, 0x458(r1), 0, 0
    stfd f25, 0x440(r1)
    psq_st f25, 0x448(r1), 0, 0
    stfd f24, 0x430(r1)
    psq_st f24, 0x438(r1), 0, 0
    stfd f23, 0x420(r1)
    psq_st f23, 0x428(r1), 0, 0
    stfd f22, 0x410(r1)
    psq_st f22, 0x418(r1), 0, 0
    stfd f21, 0x400(r1)
    psq_st f21, 0x408(r1), 0, 0
    stfd f20, 0x3f0(r1)
    psq_st f20, 0x3f8(r1), 0, 0
    stfd f19, 0x3e0(r1)
    psq_st f19, 0x3e8(r1), 0, 0
    bl _savegpr_15
    addic. r0, r3, 0x14d4
    mr r29, r3
    beq lbl_fn_8029BE7C_0000071C
    lwz r6, lbl_8087F8A0
    lis r4, lbl_807457F8@ha
    lis r5, lbl_80745818@ha
    lfs f21, lbl_80883BE8
    lwz r30, 0x48(r6)
    addi r15, r3, 0xb0
    lfs f22, lbl_80883C7C
    addi r25, r5, lbl_80745818@l
    lfs f23, lbl_80883BF0
    addi r21, r1, 0x150
    lfd f24, lbl_807457F8@l(r4)
    addi r24, r1, 0x330
    lfs f25, lbl_80883CFC
    addi r22, r1, 0x1b0
    lfs f26, lbl_80883C40
    addi r23, r1, 0x210
    lfs f27, lbl_80883D00
    addi r20, r1, 0x300
    lfs f28, lbl_80883C0C
    addi r16, r1, 0x30
    lfs f29, lbl_80883D04
    addi r19, r1, 0x270
    lfs f30, lbl_80883D08
    addi r17, r1, 0x90
    lfs f31, lbl_80883C3C
    addi r18, r1, 0xf0
    lfs f19, lbl_80883CEC
    li r31, 0x0
    lis r26, 0x4330
    li r27, 0x0
    li r28, -0x1
    b lbl_fn_8029BE7C_00000714
lbl_fn_8029BE7C_000001BC:
    mr r3, r15
    addi r4, r25, 0x2e4
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029BE7C_000001DC
    li r3, 0x0
    b lbl_fn_8029BE7C_000001E8
lbl_fn_8029BE7C_000001DC:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r15)
    add r3, r3, r0
lbl_fn_8029BE7C_000001E8:
    lfs f0, 0x2c(r3)
    lfs f7, 0x1c(r3)
    lfs f8, 0xc(r3)
    stfs f8, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f21, 0x14(r1)
    stfs f21, 0x18(r1)
    stfs f22, 0x1c(r1)
    stfs f21, 0x35c(r1)
    stfs f21, 0x354(r1)
    stfs f21, 0x350(r1)
    stfs f21, 0x34c(r1)
    stfs f21, 0x348(r1)
    stfs f21, 0x340(r1)
    stfs f21, 0x33c(r1)
    stfs f21, 0x338(r1)
    stfs f21, 0x334(r1)
    stfs f23, 0x358(r1)
    stfs f23, 0x344(r1)
    stfs f23, 0x330(r1)
    lfs f1, 0x53c(r29)
    fcmpu cr0, f21, f1
    beq lbl_fn_8029BE7C_00000294
    addi r3, r1, 0x180
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r24
    addi r4, r1, 0x180
    addi r5, r1, 0x150
    bl fn_805F89F0
    psq_l f1, 0x0(r21), 0, 0
    psq_l f2, 0x8(r21), 0, 0
    psq_l f3, 0x10(r21), 0, 0
    psq_l f4, 0x18(r21), 0, 0
    psq_l f5, 0x20(r21), 0, 0
    psq_l f6, 0x28(r21), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    psq_st f2, 0x8(r24), 0, 0
    psq_st f3, 0x10(r24), 0, 0
    psq_st f4, 0x18(r24), 0, 0
    psq_st f5, 0x20(r24), 0, 0
    psq_st f6, 0x28(r24), 0, 0
lbl_fn_8029BE7C_00000294:
    lfs f1, 0x538(r29)
    fcmpu cr0, f21, f1
    beq lbl_fn_8029BE7C_000002EC
    addi r3, r1, 0x1e0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r24
    addi r4, r1, 0x1e0
    addi r5, r1, 0x1b0
    bl fn_805F89F0
    psq_l f1, 0x0(r22), 0, 0
    psq_l f2, 0x8(r22), 0, 0
    psq_l f3, 0x10(r22), 0, 0
    psq_l f4, 0x18(r22), 0, 0
    psq_l f5, 0x20(r22), 0, 0
    psq_l f6, 0x28(r22), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    psq_st f2, 0x8(r24), 0, 0
    psq_st f3, 0x10(r24), 0, 0
    psq_st f4, 0x18(r24), 0, 0
    psq_st f5, 0x20(r24), 0, 0
    psq_st f6, 0x28(r24), 0, 0
lbl_fn_8029BE7C_000002EC:
    lfs f1, 0x534(r29)
    fcmpu cr0, f21, f1
    beq lbl_fn_8029BE7C_00000344
    addi r3, r1, 0x240
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r24
    addi r4, r1, 0x240
    addi r5, r1, 0x210
    bl fn_805F89F0
    psq_l f1, 0x0(r23), 0, 0
    psq_l f2, 0x8(r23), 0, 0
    psq_l f3, 0x10(r23), 0, 0
    psq_l f4, 0x18(r23), 0, 0
    psq_l f5, 0x20(r23), 0, 0
    psq_l f6, 0x28(r23), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    psq_st f2, 0x8(r24), 0, 0
    psq_st f3, 0x10(r24), 0, 0
    psq_st f4, 0x18(r24), 0, 0
    psq_st f5, 0x20(r24), 0, 0
    psq_st f6, 0x28(r24), 0, 0
lbl_fn_8029BE7C_00000344:
    addi r4, r1, 0x14
    addi r3, r1, 0x330
    mr r5, r4
    bl fn_805F93C0
    mr r3, r15
    addi r4, r25, 0x2e4
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029BE7C_00000374
    li r6, 0x0
    b lbl_fn_8029BE7C_00000380
lbl_fn_8029BE7C_00000374:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r15)
    add r6, r3, r0
lbl_fn_8029BE7C_00000380:
    psq_l f1, 0x0(r6), 0, 0
    addi r4, r1, 0x14
    psq_l f2, 0x8(r6), 0, 0
    mr r3, r20
    psq_l f3, 0x10(r6), 0, 0
    mr r5, r4
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f6, 0x28(r20), 0, 0
    psq_st f2, 0x8(r20), 0, 0
    psq_st f4, 0x18(r20), 0, 0
    psq_st f1, 0x0(r20), 0, 0
    psq_st f3, 0x10(r20), 0, 0
    psq_st f5, 0x20(r20), 0, 0
    stfs f21, 0x30c(r1)
    stfs f21, 0x31c(r1)
    stfs f21, 0x32c(r1)
    bl fn_805F93C0
    lfs f7, 0x20(r1)
    addi r3, r1, 0x2d0
    lfs f0, 0x14(r1)
    li r4, 0x79
    lfs f9, 0x24(r1)
    fadds f10, f7, f0
    lfs f8, 0x18(r1)
    lfs f7, 0x28(r1)
    lfs f0, 0x1c(r1)
    fadds f8, f9, f8
    stfs f10, 0x20(r1)
    fadds f0, f7, f0
    lwz r5, lbl_8087F8A0
    stfs f8, 0x24(r1)
    lfs f1, lbl_80883C20
    stfs f0, 0x28(r1)
    lwz r0, 0x4c(r5)
    stw r26, 0x388(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x38c(r1)
    lfd f0, 0x388(r1)
    stfs f21, 0x8(r1)
    fsubs f0, f0, f24
    stfs f21, 0xc(r1)
    fdivs f20, f25, f0
    stfs f26, 0x10(r1)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x2d0
    mr r5, r4
    bl fn_805F93C0
    xoris r0, r31, 0x8000
    stw r0, 0x394(r1)
    addi r3, r1, 0x2a0
    li r4, 0x7a
    stw r26, 0x390(r1)
    lfd f0, 0x390(r1)
    fsubs f0, f0, f24
    fmuls f0, f20, f0
    fmuls f1, f27, f0
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x2a0
    mr r5, r4
    bl fn_805F93C0
    stfs f21, 0x29c(r1)
    stfs f21, 0x294(r1)
    stfs f21, 0x290(r1)
    stfs f21, 0x28c(r1)
    stfs f21, 0x288(r1)
    stfs f21, 0x280(r1)
    stfs f21, 0x27c(r1)
    stfs f21, 0x278(r1)
    stfs f21, 0x274(r1)
    stfs f23, 0x298(r1)
    stfs f23, 0x284(r1)
    stfs f23, 0x270(r1)
    lfs f1, 0x53c(r29)
    fcmpu cr0, f21, f1
    beq lbl_fn_8029BE7C_00000508
    addi r3, r1, 0x60
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r19
    addi r4, r1, 0x60
    addi r5, r1, 0x30
    bl fn_805F89F0
    psq_l f1, 0x0(r16), 0, 0
    psq_l f2, 0x8(r16), 0, 0
    psq_l f3, 0x10(r16), 0, 0
    psq_l f4, 0x18(r16), 0, 0
    psq_l f5, 0x20(r16), 0, 0
    psq_l f6, 0x28(r16), 0, 0
    psq_st f1, 0x0(r19), 0, 0
    psq_st f2, 0x8(r19), 0, 0
    psq_st f3, 0x10(r19), 0, 0
    psq_st f4, 0x18(r19), 0, 0
    psq_st f5, 0x20(r19), 0, 0
    psq_st f6, 0x28(r19), 0, 0
lbl_fn_8029BE7C_00000508:
    lfs f1, 0x538(r29)
    fcmpu cr0, f21, f1
    beq lbl_fn_8029BE7C_00000560
    addi r3, r1, 0xc0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r19
    addi r4, r1, 0xc0
    addi r5, r1, 0x90
    bl fn_805F89F0
    psq_l f1, 0x0(r17), 0, 0
    psq_l f2, 0x8(r17), 0, 0
    psq_l f3, 0x10(r17), 0, 0
    psq_l f4, 0x18(r17), 0, 0
    psq_l f5, 0x20(r17), 0, 0
    psq_l f6, 0x28(r17), 0, 0
    psq_st f1, 0x0(r19), 0, 0
    psq_st f2, 0x8(r19), 0, 0
    psq_st f3, 0x10(r19), 0, 0
    psq_st f4, 0x18(r19), 0, 0
    psq_st f5, 0x20(r19), 0, 0
    psq_st f6, 0x28(r19), 0, 0
lbl_fn_8029BE7C_00000560:
    lfs f1, 0x534(r29)
    fcmpu cr0, f21, f1
    beq lbl_fn_8029BE7C_000005B8
    addi r3, r1, 0x120
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r19
    addi r4, r1, 0x120
    addi r5, r1, 0xf0
    bl fn_805F89F0
    psq_l f1, 0x0(r18), 0, 0
    psq_l f2, 0x8(r18), 0, 0
    psq_l f3, 0x10(r18), 0, 0
    psq_l f4, 0x18(r18), 0, 0
    psq_l f5, 0x20(r18), 0, 0
    psq_l f6, 0x28(r18), 0, 0
    psq_st f1, 0x0(r19), 0, 0
    psq_st f2, 0x8(r19), 0, 0
    psq_st f3, 0x10(r19), 0, 0
    psq_st f4, 0x18(r19), 0, 0
    psq_st f5, 0x20(r19), 0, 0
    psq_st f6, 0x28(r19), 0, 0
lbl_fn_8029BE7C_000005B8:
    addi r4, r1, 0x8
    addi r3, r1, 0x270
    mr r5, r4
    bl fn_805F93C0
    stw r27, 0x360(r1)
    lwz r3, lbl_8087F8A0
    stfs f21, 0x364(r1)
    stfs f28, 0x368(r1)
    stfs f26, 0x36c(r1)
    stfs f29, 0x370(r1)
    stfs f30, 0x374(r1)
    stfs f31, 0x378(r1)
    stw r27, 0x37c(r1)
    stw r28, 0x380(r1)
    lwz r3, 0x48(r3)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_8029BE7C_00000610
    cmplw r30, r3
    bne lbl_fn_8029BE7C_00000710
    stw r30, 0x360(r1)
    b lbl_fn_8029BE7C_0000069C
lbl_fn_8029BE7C_00000610:
    lwz r7, 0x38(r30)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8029BE7C_0000063C
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_8029BE7C_0000063C
    li r6, 0x1
lbl_fn_8029BE7C_0000063C:
    cmpwi r6, 0x0
    beq lbl_fn_8029BE7C_00000658
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8029BE7C_00000658
    li r4, 0x1
lbl_fn_8029BE7C_00000658:
    cmpwi r4, 0x0
    beq lbl_fn_8029BE7C_0000068C
    lwz r0, 0x55c(r30)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8029BE7C_00000680
    lwz r0, 0x560(r30)
    cmpwi r0, 0x1c
    bne lbl_fn_8029BE7C_00000680
    li r4, 0x1
lbl_fn_8029BE7C_00000680:
    cmpwi r4, 0x0
    bne lbl_fn_8029BE7C_0000068C
    li r5, 0x1
lbl_fn_8029BE7C_0000068C:
    cmpwi r5, 0x0
    beq lbl_fn_8029BE7C_00000698
    mr r3, r30
lbl_fn_8029BE7C_00000698:
    stw r3, 0x360(r1)
lbl_fn_8029BE7C_0000069C:
    stfs f26, 0x378(r1)
    mr r4, r29
    lwz r3, lbl_8087F048
    addi r6, r1, 0x20
    stfs f19, 0x364(r1)
    addi r7, r1, 0x8
    lfs f1, lbl_80883BE8
    addi r8, r1, 0x360
    lfs f0, 0x1674(r29)
    li r9, 0x504
    stfs f0, 0x36c(r1)
    li r10, 0x0
    lfs f2, lbl_80883BF0
    lwz r0, 0x14c8(r29)
    stw r26, 0x390(r1)
    slwi r0, r0, 2
    add r5, r29, r0
    lwz r5, 0x14d4(r5)
    lwz r0, 0x5c(r5)
    xoris r0, r0, 0x8000
    stw r0, 0x394(r1)
    lfd f0, 0x390(r1)
    fsubs f0, f0, f24
    stfs f0, 0x374(r1)
    lfs f0, 0x1678(r29)
    fmuls f0, f27, f0
    stfs f0, 0x370(r1)
    bl fn_800F8574
    addi r31, r31, 0x1
lbl_fn_8029BE7C_00000710:
    lwz r30, 0x14ac(r30)
lbl_fn_8029BE7C_00000714:
    cmpwi r30, 0x0
    bne lbl_fn_8029BE7C_000001BC
lbl_fn_8029BE7C_0000071C:
    addi r11, r1, 0x3e0
    psq_l f31, 0x4a8(r1), 0, 0
    lfd f31, 0x4a0(r1)
    psq_l f30, 0x498(r1), 0, 0
    lfd f30, 0x490(r1)
    psq_l f29, 0x488(r1), 0, 0
    lfd f29, 0x480(r1)
    psq_l f28, 0x478(r1), 0, 0
    lfd f28, 0x470(r1)
    psq_l f27, 0x468(r1), 0, 0
    lfd f27, 0x460(r1)
    psq_l f26, 0x458(r1), 0, 0
    lfd f26, 0x450(r1)
    psq_l f25, 0x448(r1), 0, 0
    lfd f25, 0x440(r1)
    psq_l f24, 0x438(r1), 0, 0
    lfd f24, 0x430(r1)
    psq_l f23, 0x428(r1), 0, 0
    lfd f23, 0x420(r1)
    psq_l f22, 0x418(r1), 0, 0
    lfd f22, 0x410(r1)
    psq_l f21, 0x408(r1), 0, 0
    lfd f21, 0x400(r1)
    psq_l f20, 0x3f8(r1), 0, 0
    lfd f20, 0x3f0(r1)
    psq_l f19, 0x3e8(r1), 0, 0
    lfd f19, 0x3e0(r1)
    bl _restgpr_15
    lwz r0, 0x4b4(r1)
    mtlr r0
    addi r1, r1, 0x4b0
    blr
}

asm void fn_8029C564(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r3
    lwz r0, 0x1568(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8029C564_000007D8
    li r3, 0x0
    b lbl_fn_8029C564_000008AC
lbl_fn_8029C564_000007D8:
    lfs f31, lbl_80883D0C
    li r31, -0x1
    li r30, 0x0
    li r29, 0x0
    b lbl_fn_8029C564_0000084C
lbl_fn_8029C564_000007EC:
    lwz r3, 0x1564(r28)
    lfs f2, 0x530(r28)
    lwzx r3, r3, r29
    lfs f0, 0x528(r28)
    lfs f3, 0xc(r3)
    lfs f1, 0x4(r3)
    fsubs f3, f3, f2
    lfs f2, 0x8(r3)
    fsubs f4, f1, f0
    lfs f1, 0x52c(r28)
    stfs f3, 0x10(r1)
    fmuls f0, f3, f3
    fsubs f2, f2, f1
    stfs f4, 0x8(r1)
    fmadds f1, f4, f4, f0
    stfs f2, 0xc(r1)
    bl fn_8068B100
    frsp f0, f1
    fcmpo cr0, f0, f31
    bge lbl_fn_8029C564_00000844
    fmr f31, f0
    mr r31, r30
lbl_fn_8029C564_00000844:
    addi r29, r29, 0x4
    addi r30, r30, 0x1
lbl_fn_8029C564_0000084C:
    lwz r0, 0x1568(r28)
    cmplw r30, r0
    blt lbl_fn_8029C564_000007EC
    lwz r4, lbl_8087F430
    mr r3, r28
    lwz r30, 0x1564(r28)
    slwi r31, r31, 2
    lwz r29, 0x10d8(r4)
    bl fn_80179D44
    lwzx r4, r30, r31
    mr r5, r3
    lfs f1, lbl_80883C0C
    mr r3, r29
    addi r4, r4, 0x4
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_803C1560
    subi r0, r3, 0x1
    lwz r4, 0x9c(r29)
    mulli r0, r0, 0x30
    li r3, 0x1
    add r0, r4, r0
    stw r0, 0x153c(r28)
lbl_fn_8029C564_000008AC:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8029C69C(void)
{
    nofralloc
    lwz r4, 0x58c(r3)
    cmpwi r4, 0x9
    bne lbl_fn_8029C69C_00000918
    lwz r0, 0x14b4(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8029C69C_00000918
    lfs f1, 0x2e4(r3)
    lfs f0, lbl_80883C98
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_8029C69C_00000958
    lfs f0, lbl_80883D10
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8029C69C_00000958
    li r3, 0x1
    blr
lbl_fn_8029C69C_00000918:
    cmpwi r4, 0x8
    bne lbl_fn_8029C69C_00000958
    lwz r0, 0x14b4(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8029C69C_00000958
    lfs f1, 0x2e4(r3)
    lfs f0, lbl_80883C7C
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_8029C69C_00000958
    lfs f0, lbl_80883C78
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8029C69C_00000958
    li r3, 0x1
    blr
lbl_fn_8029C69C_00000958:
    li r3, 0x0
    blr
}

asm void fn_8029C728(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r5, lbl_80745818@ha
    stw r0, 0x44(r1)
    addi r5, r5, lbl_80745818@l
    stw r31, 0x3c(r1)
    mr r31, r4
    addi r4, r5, 0x31b
    li r5, 0x0
    stw r30, 0x38(r1)
    mr r30, r3
    addi r3, r3, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029C728_000009A4
    li r4, 0x0
    b lbl_fn_8029C728_000009B0
lbl_fn_8029C728_000009A4:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_8029C728_000009B0:
    lfs f0, 0x1c(r4)
    lis r3, lbl_80745818@ha
    lfs f3, 0xc(r4)
    addi r6, r1, 0x2c
    lfs f2, 0x2c(r4)
    addi r3, r3, lbl_80745818@l
    stfs f3, 0x2c(r1)
    addi r4, r3, 0x2dd
    addi r3, r30, 0xb0
    li r5, 0x0
    stfs f0, 0x30(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029C728_00000A00
    li r4, 0x0
    b lbl_fn_8029C728_00000A0C
lbl_fn_8029C728_00000A00:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_8029C728_00000A0C:
    lfs f0, 0x1c(r4)
    lis r3, lbl_80745818@ha
    lfs f3, 0xc(r4)
    addi r6, r1, 0x20
    lfs f2, 0x2c(r4)
    addi r3, r3, lbl_80745818@l
    stfs f3, 0x20(r1)
    addi r4, r3, 0x329
    addi r3, r30, 0xb0
    li r5, 0x0
    stfs f0, 0x24(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x28(r1)
    psq_st f1, 0xc(r31), 0, 0
    stfs f2, 0x14(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029C728_00000A5C
    li r4, 0x0
    b lbl_fn_8029C728_00000A68
lbl_fn_8029C728_00000A5C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_8029C728_00000A68:
    lfs f0, 0x1c(r4)
    lis r3, lbl_80745818@ha
    lfs f3, 0xc(r4)
    addi r6, r1, 0x14
    lfs f2, 0x2c(r4)
    addi r3, r3, lbl_80745818@l
    stfs f3, 0x14(r1)
    addi r4, r3, 0x2e4
    addi r3, r30, 0xb0
    li r5, 0x0
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x18(r31), 0, 0
    stfs f2, 0x20(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029C728_00000AB8
    li r4, 0x0
    b lbl_fn_8029C728_00000AC4
lbl_fn_8029C728_00000AB8:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_8029C728_00000AC4:
    lfs f0, 0x1c(r4)
    addi r3, r1, 0x8
    lfs f3, 0xc(r4)
    lfs f2, 0x2c(r4)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x24(r31), 0, 0
    stfs f2, 0x2c(r31)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    stfs f2, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8029C8CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80745818@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_80745818@l
    stw r31, 0xc(r1)
    mr r31, r4
    addi r4, r5, 0x309
    li r5, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r31, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029C8CC_00000B48
    li r3, 0x0
    b lbl_fn_8029C8CC_00000B54
lbl_fn_8029C8CC_00000B48:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_8029C8CC_00000B54:
    lfs f0, 0x2c(r3)
    lfs f1, 0x1c(r3)
    lfs f2, 0xc(r3)
    stfs f2, 0x0(r30)
    stfs f1, 0x4(r30)
    stfs f0, 0x8(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8029C94C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r5, lbl_80745818@ha
    stw r0, 0x64(r1)
    addi r5, r5, lbl_80745818@l
    stw r31, 0x5c(r1)
    mr r31, r4
    addi r4, r5, 0x2ba
    li r5, 0x0
    stw r30, 0x58(r1)
    mr r30, r3
    addi r3, r31, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029C94C_00000BC8
    li r5, 0x0
    b lbl_fn_8029C94C_00000BD4
lbl_fn_8029C94C_00000BC8:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_8029C94C_00000BD4:
    lfs f1, 0x1c(r5)
    addi r3, r1, 0x20
    lfs f0, lbl_80883C40
    li r4, 0x79
    lfs f3, 0x2c(r5)
    lfs f4, 0xc(r5)
    fadds f2, f1, f0
    stfs f4, 0x0(r30)
    lfs f1, lbl_80883BE8
    stfs f3, 0x8(r30)
    lfs f0, lbl_80883BF0
    stfs f2, 0x4(r30)
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x20
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x10(r1)
    lfs f2, lbl_80883C40
    lfs f1, 0xc(r1)
    lfs f0, 0x8(r1)
    fmuls f3, f3, f2
    fmuls f4, f1, f2
    lfs f1, 0x4(r30)
    fmuls f5, f0, f2
    lfs f2, 0x0(r30)
    lfs f0, 0x8(r30)
    fadds f1, f1, f4
    fadds f2, f2, f5
    stfs f5, 0x14(r1)
    fadds f0, f0, f3
    stfs f2, 0x0(r30)
    stfs f1, 0x4(r30)
    stfs f0, 0x8(r30)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r0, 0x64(r1)
    stfs f4, 0x18(r1)
    stfs f3, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8029CA54(void)
{
    nofralloc
    lfs f1, lbl_80883D18
    lfs f0, 0x538(r3)
    fadds f1, f1, f0
    blr
}

asm void fn_8029CA64(void)
{
    nofralloc
    lfs f1, lbl_80883D1C
    blr
}

asm void fn_8029CA6C(void)
{
    nofralloc
    lfs f1, lbl_80883D20
    blr
}

asm void fn_8029CA74(void)
{
    nofralloc
    lfs f1, lbl_80883C50
    blr
}

asm void fn_8029CA7C(void)
{
    nofralloc
    lfs f1, lbl_80883D14
    blr
}

asm void fn_8029CA84(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80785AE0@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r4, 0xb0
    addi r4, r5, lbl_80785AE0@l
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029CA84_00000CFC
    li r3, 0x0
    b lbl_fn_8029CA84_00000D08
lbl_fn_8029CA84_00000CFC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_8029CA84_00000D08:
    lfs f0, 0x2c(r3)
    lfs f1, 0x1c(r3)
    lfs f2, 0xc(r3)
    stfs f2, 0x0(r30)
    stfs f1, 0x4(r30)
    stfs f0, 0x8(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8029CB00(void)
{
    nofralloc
    stwu r1, -0x6a0(r1)
    mflr r0
    stw r0, 0x6a4(r1)
    addi r11, r1, 0x6a0
    bl _savegpr_25
    mr r29, r3
    mr r30, r5
    bl fn_805A3C58
    lis r3, lbl_80785B38@ha
    li r28, 0x0
    addi r3, r3, lbl_80785B38@l
    li r0, 0x2
    lis r4, fn_80288390@ha
    lis r5, fn_8000D760@ha
    stw r3, 0x0(r29)
    addi r3, r29, 0x1508
    addi r4, r4, fn_80288390@l
    addi r5, r5, fn_8000D760@l
    stw r28, 0x14d4(r29)
    li r6, 0xc
    li r7, 0x6
    stw r28, 0x14d8(r29)
    stw r28, 0x14dc(r29)
    stw r28, 0x14e0(r29)
    stw r0, 0x14e4(r29)
    stw r28, 0x14e8(r29)
    stw r28, 0x14ec(r29)
    stw r28, 0x14f0(r29)
    stw r28, 0x14fc(r29)
    stw r28, 0x1500(r29)
    stw r28, 0x1504(r29)
    bl fn_806958E0
    lfs f0, lbl_80883D28
    li r0, 0x5a
    stw r28, 0x1550(r29)
    addi r3, r29, 0x1668
    stw r28, 0x1554(r29)
    stfs f0, 0x155c(r29)
    stw r28, 0x156c(r29)
    stw r28, 0x1570(r29)
    stw r28, 0x15a8(r29)
    stw r28, 0x15ac(r29)
    stw r28, 0x15b0(r29)
    stw r28, 0x15b4(r29)
    stw r28, 0x15b8(r29)
    stw r28, 0x15bc(r29)
    stw r28, 0x15c0(r29)
    stw r28, 0x15c4(r29)
    stw r28, 0x15c8(r29)
    stw r28, 0x15ec(r29)
    stw r28, 0x15f0(r29)
    stw r28, 0x15f4(r29)
    stw r28, 0x15fc(r29)
    stw r28, 0x1600(r29)
    stw r28, 0x1604(r29)
    stw r28, 0x1608(r29)
    stw r28, 0x160c(r29)
    stw r28, 0x1610(r29)
    stw r28, 0x1614(r29)
    stw r28, 0x1618(r29)
    stw r28, 0x161c(r29)
    stw r28, 0x1620(r29)
    stw r28, 0x1624(r29)
    stw r28, 0x1628(r29)
    stw r28, 0x162c(r29)
    stw r28, 0x1630(r29)
    stw r28, 0x1634(r29)
    stw r28, 0x1644(r29)
    stw r28, 0x1648(r29)
    stw r28, 0x164c(r29)
    stw r28, 0x1650(r29)
    stw r0, 0x1654(r29)
    stw r28, 0x1658(r29)
    stw r28, 0x165c(r29)
    stw r28, 0x1660(r29)
    stw r28, 0x1664(r29)
    bl fn_802377B8
    addi r27, r29, 0x167c
    stw r28, 0x1674(r29)
    mr r3, r27
    stw r28, 0x1678(r29)
    bl fn_80473E74
    lwz r0, 0x12a4(r29)
    li r4, 0x23
    lfs f0, lbl_80883D2C
    lis r6, lbl_8078FBB0@ha
    addi r6, r6, lbl_8078FBB0@l
    oris r0, r0, 0x40
    li r5, 0xa
    stw r6, 0x0(r27)
    lis r3, lbl_80745C70@ha
    addi r27, r1, 0x38
    addi r31, r3, lbl_80745C70@l
    stfs f0, 0x1690(r29)
    mr r3, r31
    stw r5, 0x16a8(r29)
    stw r4, 0x16ac(r29)
    stw r4, 0x16b0(r29)
    stw r0, 0x12a4(r29)
    stw r28, 0x1684(r29)
    stw r28, 0x1688(r29)
    stw r28, 0x38(r1)
    stw r28, 0x3c(r1)
    stw r28, 0x40(r1)
    bl strlen
    mr r26, r3
    mr r3, r27
    mr r4, r26
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r27
    stb r0, 0x18(r1)
    mr r6, r31
    add r7, r31, r26
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r27, r31, 0x18
    stw r28, 0x2c(r1)
    addi r26, r1, 0x2c
    stw r28, 0x30(r1)
    mr r3, r27
    stw r28, 0x34(r1)
    bl strlen
    mr r25, r3
    mr r3, r26
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r26
    stb r0, 0x10(r1)
    mr r6, r27
    add r7, r27, r25
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r3, r30, 0x2c
    bl strlen
    lis r4, lbl_807772D0@ha
    mr r26, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x44(r1)
    addi r3, r1, 0x54
    li r5, 0x400
    stw r28, 0x48(r1)
    li r4, 0x0
    stw r28, 0x4c(r1)
    stw r28, 0x50(r1)
    stw r28, 0x674(r1)
    bl memset
    addi r3, r1, 0x654
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x44(r1)
    mr r5, r26
    addi r3, r1, 0x44
    addi r4, r30, 0x2c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x44
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x44(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
lbl_fn_8029CB00_00000FDC:
    addi r3, r1, 0x44
    bl fn_8005B3CC
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_8029CB00_00001074
    addi r4, r31, 0x2b
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8029CB00_00001074
    mr r3, r26
    addi r4, r31, 0x2c
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8029CB00_00001064
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8029CB00_00001030
    lbz r0, 0x2c(r1)
    clrlwi r25, r0, 25
    b lbl_fn_8029CB00_00001034
lbl_fn_8029CB00_00001030:
    lwz r25, 0x30(r1)
lbl_fn_8029CB00_00001034:
    lbz r0, 0xc(r1)
    addi r3, r26, 0x8
    stb r0, 0x8(r1)
    bl strlen
    add r4, r26, r3
    mr r5, r25
    addi r7, r4, 0x8
    addi r3, r1, 0x2c
    addi r6, r26, 0x8
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_8029CB00_00001064:
    addi r3, r1, 0x44
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8029CB00_00000FDC
lbl_fn_8029CB00_00001074:
    addi r3, r1, 0x20
    addi r4, r1, 0x38
    addi r5, r1, 0x2c
    bl fn_8006AFF8
    lwz r0, 0x20(r1)
    addi r3, r29, 0x167c
    srwi. r0, r0, 31
    bne lbl_fn_8029CB00_0000109C
    addi r4, r1, 0x21
    b lbl_fn_8029CB00_000010A0
lbl_fn_8029CB00_0000109C:
    lwz r4, 0x28(r1)
lbl_fn_8029CB00_000010A0:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r4, lbl_80745C70@ha
    addi r3, r29, 0x1668
    addi r4, r4, lbl_80745C70@l
    addi r4, r4, 0x35
    bl fn_8023780C
    lwz r0, 0x5c0(r29)
    lfs f0, lbl_80883D28
    clrlwi r0, r0, 1
    stfs f0, 0x1560(r29)
    stfs f0, 0x1564(r29)
    stfs f0, 0x1568(r29)
    stw r0, 0x5c0(r29)
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8029CB00_000010F4
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_8029CB00_000010F4:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8029CB00_00001108
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_8029CB00_00001108:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8029CB00_0000111C
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_8029CB00_0000111C:
    addi r11, r1, 0x6a0
    mr r3, r29
    bl _restgpr_25
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}

asm void fn_8029CF00(void)
{
    nofralloc
    stwu r1, -0x690(r1)
    mflr r0
    stw r0, 0x694(r1)
    addi r11, r1, 0x680
    stfd f31, 0x680(r1)
    psq_st f31, 0x688(r1), 0, 0
    bl _savegpr_25
    mr r31, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_000019C0
    addi r3, r31, 0x167c
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_000019C0
    addi r3, r31, 0x1668
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_000019C0
    lfs f1, lbl_80883D30
    mr r3, r31
    bl fn_80288E30
    lwz r0, 0x7ec(r31)
    oris r0, r0, 0x1
    ori r0, r0, 0x2c9
    oris r0, r0, 0x380
    ori r0, r0, 0x8410
    oris r0, r0, 0x8
    ori r0, r0, 0x4
    stw r0, 0x7ec(r31)
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_8029CF00_000011CC
    bl fn_80121F00
    bl fn_8013C504
    mr r26, r3
    b lbl_fn_8029CF00_000011D0
lbl_fn_8029CF00_000011CC:
    li r26, 0x0
lbl_fn_8029CF00_000011D0:
    addi r3, r31, 0x167c
    li r25, 0x0
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_8029CF00_00001978
    cmpwi r26, 0x0
    beq lbl_fn_8029CF00_00001978
    addi r3, r31, 0x167c
    bl fn_8047059C
    mr r27, r3
    addi r3, r31, 0x167c
    bl fn_80470580
    mr r4, r3
    mr r5, r27
    addi r3, r1, 0x2c
    bl fn_8004203C
    lis r27, lbl_80745C70@ha
    lfs f31, lbl_80883D28
    addi r27, r27, lbl_80745C70@l
    li r28, 0x0
    li r29, 0x1
lbl_fn_8029CF00_00001224:
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    mr r30, r3
    addi r4, r27, 0x4a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_00001254
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x168c(r31)
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_00001254:
    mr r3, r30
    addi r4, r27, 0x55
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_0000127C
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1690(r31)
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_0000127C:
    mr r3, r30
    addi r4, r27, 0x61
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_000012A4
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1694(r31)
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_000012A4:
    mr r3, r30
    addi r4, r27, 0x6c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_000012CC
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1698(r31)
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_000012CC:
    mr r3, r30
    addi r4, r27, 0x77
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_000012F4
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x169c(r31)
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_000012F4:
    mr r3, r30
    addi r4, r27, 0x83
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_0000131C
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x16a0(r31)
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_0000131C:
    mr r3, r30
    addi r4, r27, 0x92
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_00001344
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x16a4(r31)
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_00001344:
    mr r3, r30
    addi r4, r27, 0x9b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_0000136C
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x16a8(r31)
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_0000136C:
    mr r3, r30
    addi r4, r27, 0xa5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_00001394
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x16ac(r31)
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_00001394:
    mr r3, r30
    addi r4, r27, 0xb5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_000013BC
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x16b0(r31)
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_000013BC:
    mr r3, r30
    addi r4, r27, 0xc5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_000013E4
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x16b4(r31)
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_000013E4:
    mr r3, r30
    addi r4, r27, 0xdb
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_0000140C
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x16bc(r31)
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_0000140C:
    mr r3, r30
    addi r4, r27, 0xea
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_00001434
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x16b8(r31)
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_00001434:
    mr r3, r30
    addi r4, r27, 0xf9
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_0000145C
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x16c0(r31)
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_0000145C:
    mr r3, r30
    addi r4, r27, 0x10a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_00001484
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x16c4(r31)
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_00001484:
    mr r3, r30
    addi r4, r27, 0x11c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_000014AC
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x16c8(r31)
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_000014AC:
    mr r3, r30
    addi r4, r27, 0x12b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_000014F0
    stw r28, 0x28(r1)
lbl_fn_8029CF00_000014C4:
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x28(r1)
    addi r3, r31, 0x1508
    addi r4, r1, 0x28
    bl fn_8000E18C
    lwz r0, 0x28(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8029CF00_000014C4
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_000014F0:
    mr r3, r30
    addi r4, r27, 0x139
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_00001534
    stw r28, 0x24(r1)
lbl_fn_8029CF00_00001508:
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x24(r1)
    addi r3, r31, 0x1514
    addi r4, r1, 0x24
    bl fn_8000E18C
    lwz r0, 0x24(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8029CF00_00001508
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_00001534:
    mr r3, r30
    addi r4, r27, 0x147
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_00001578
    stw r28, 0x20(r1)
lbl_fn_8029CF00_0000154C:
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x20(r1)
    addi r3, r31, 0x1520
    addi r4, r1, 0x20
    bl fn_8000E18C
    lwz r0, 0x20(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8029CF00_0000154C
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_00001578:
    mr r3, r30
    addi r4, r27, 0x155
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_000015BC
    stw r28, 0x1c(r1)
lbl_fn_8029CF00_00001590:
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1c(r1)
    addi r3, r31, 0x152c
    addi r4, r1, 0x1c
    bl fn_8000E18C
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8029CF00_00001590
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_000015BC:
    mr r3, r30
    addi r4, r27, 0x161
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_00001600
    stw r28, 0x18(r1)
lbl_fn_8029CF00_000015D4:
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x18(r1)
    addi r3, r31, 0x1538
    addi r4, r1, 0x18
    bl fn_8000E18C
    lwz r0, 0x18(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8029CF00_000015D4
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_00001600:
    mr r3, r30
    addi r4, r27, 0x16d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_00001644
    stw r28, 0x14(r1)
lbl_fn_8029CF00_00001618:
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x14(r1)
    addi r3, r31, 0x1544
    addi r4, r1, 0x14
    bl fn_8000E18C
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8029CF00_00001618
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_00001644:
    mr r3, r30
    addi r4, r27, 0x179
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_0000168C
    stfs f31, 0x10(r1)
    li r30, 0x0
lbl_fn_8029CF00_00001660:
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x10(r1)
    addi r3, r31, 0x1624
    addi r4, r1, 0x10
    bl fn_800DB3EC
    addi r30, r30, 0x1
    cmpwi r30, 0x3
    blt lbl_fn_8029CF00_00001660
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_0000168C:
    mr r3, r30
    addi r4, r27, 0x184
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_000016C0
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r4, r3
    mr r3, r26
    bl fn_800EC204
    mr r25, r3
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_000016C0:
    mr r3, r30
    addi r4, r27, 0x190
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_00001714
lbl_fn_8029CF00_000016D4:
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r30, r3
    mr r3, r26
    mr r4, r30
    bl fn_800EC204
    cmpwi r3, 0x0
    stw r3, 0xc(r1)
    beq lbl_fn_8029CF00_00001708
    addi r3, r31, 0x15a8
    addi r4, r1, 0xc
    bl fn_80244CCC
lbl_fn_8029CF00_00001708:
    cmpwi r30, 0x0
    bne lbl_fn_8029CF00_000016D4
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_00001714:
    mr r3, r30
    addi r4, r27, 0x1a5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_00001758
    stw r28, 0x8(r1)
lbl_fn_8029CF00_0000172C:
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x8(r1)
    addi r3, r31, 0x15b4
    addi r4, r1, 0x8
    bl fn_8000E18C
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8029CF00_0000172C
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_00001758:
    mr r3, r30
    addi r4, r27, 0x1b4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_0000178C
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    cmpwi r3, 0x0
    beq lbl_fn_8029CF00_00001968
    stw r3, 0x14e8(r31)
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_0000178C:
    mr r3, r30
    addi r4, r27, 0x1bc
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_000017C0
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    cmpwi r3, 0x0
    beq lbl_fn_8029CF00_00001968
    stw r3, 0x14ec(r31)
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_000017C0:
    mr r3, r30
    addi r4, r27, 0x1c5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_000017F4
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    cmpwi r3, 0x0
    beq lbl_fn_8029CF00_00001968
    stw r3, 0x14f0(r31)
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_000017F4:
    mr r3, r30
    addi r4, r27, 0x1cc
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_00001828
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    cmpwi r3, 0x0
    beq lbl_fn_8029CF00_00001968
    stw r3, 0x14f4(r31)
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_00001828:
    mr r3, r30
    addi r4, r27, 0x1d5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_0000185C
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    cmpwi r3, 0x0
    beq lbl_fn_8029CF00_00001968
    stw r3, 0x14f8(r31)
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_0000185C:
    mr r3, r30
    addi r4, r27, 0x1dd
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_00001890
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    cmpwi r3, 0x0
    beq lbl_fn_8029CF00_00001968
    stw r3, 0x1500(r31)
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_00001890:
    mr r3, r30
    addi r4, r27, 0x1eb
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_000018C4
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    cmpwi r3, 0x0
    beq lbl_fn_8029CF00_00001968
    stw r3, 0x1504(r31)
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_000018C4:
    mr r3, r30
    addi r4, r27, 0x1fc
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_000018F8
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    cmpwi r3, 0x0
    beq lbl_fn_8029CF00_00001968
    stw r3, 0x14fc(r31)
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_000018F8:
    mr r3, r30
    addi r4, r27, 0x20b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_00001934
    stw r29, 0x1644(r31)
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_80684600
    mr r30, r3
    bl fn_801A03E0
    mr r4, r30
    bl fn_8011FC10
    stw r3, 0x1648(r31)
    b lbl_fn_8029CF00_00001968
lbl_fn_8029CF00_00001934:
    mr r3, r30
    addi r4, r27, 0x217
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_00001968
    addi r3, r1, 0x2c
    bl fn_8005B3CC
    bl fn_80684600
    mr r30, r3
    bl fn_801A03E0
    mr r4, r30
    bl fn_8011FC10
    stw r3, 0x164c(r31)
lbl_fn_8029CF00_00001968:
    addi r3, r1, 0x2c
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8029CF00_00001224
lbl_fn_8029CF00_00001978:
    cmpwi r25, 0x0
    beq lbl_fn_8029CF00_00001990
    addi r3, r31, 0x1638
    addi r4, r25, 0x4
    bl fn_8000D124
    b lbl_fn_8029CF00_000019A4
lbl_fn_8029CF00_00001990:
    lfs f1, lbl_80883D28
    addi r3, r31, 0x1638
    fmr f2, f1
    fmr f3, f1
    bl fn_80057A68
lbl_fn_8029CF00_000019A4:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x11c(r12)
    mtctr r12
    bctrl
    li r3, 0x1
    b lbl_fn_8029CF00_000019C4
lbl_fn_8029CF00_000019C0:
    li r3, 0x0
lbl_fn_8029CF00_000019C4:
    addi r11, r1, 0x680
    psq_l f31, 0x688(r1), 0, 0
    lfd f31, 0x680(r1)
    bl _restgpr_25
    lwz r0, 0x694(r1)
    mtlr r0
    addi r1, r1, 0x690
    blr
}
