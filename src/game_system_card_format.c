#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_8003F538(void);
extern void fn_8004ED34(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_80084320(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800DC288(void);
extern void fn_800E2AF8(void);
extern void fn_800E2D4C(void);
extern void fn_8011FAF0(void);
extern void fn_8011FB18(void);
extern void fn_8013655C(void);
extern void fn_801446F0(void);
extern void fn_8015495C(void);
extern void fn_80178208(void);
extern void fn_801AFAC0(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_8023A8B4(void);
extern void fn_8035DC58(void);
extern void fn_803EC16C(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_805A3D00(void);
extern void fn_805A49E8(void);
extern void fn_805A5224(void);
extern void fn_805A5378(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80684600(void);

/* External data declarations */
extern u8 lbl_8074B090[];
extern u8 lbl_8074B0A4[];
extern u8 lbl_8074B388[];
extern u8 lbl_8074B390[];
extern u8 lbl_8074B3B8[];
extern u8 lbl_8074B408[];
extern u8 lbl_8074B448[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80789A08[];
extern u8 lbl_80789B10[];
extern u8 lbl_80789B88[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C6B90[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F610;
extern u32 lbl_8088552C;
extern u32 lbl_80885550;
extern u32 lbl_8088559C;
extern u32 lbl_808855B0;
extern u32 lbl_808855D0;
extern u32 lbl_808855D4;
extern u32 lbl_808855EC;
extern u32 lbl_808855F0;
extern u32 lbl_808855F4;
extern u32 lbl_808855F8;
extern u32 lbl_80885600;
extern u32 lbl_80885604;
extern u32 lbl_80885608;
extern u32 lbl_8088560C;
extern u32 lbl_80885610;
extern u32 lbl_80885614;
extern u32 lbl_80885618;
extern u32 lbl_8088561C;

/* Function declarations */
void fn_8035A9F4(void);
void fn_8035AB78(void);
void fn_8035ACB8(void);
void fn_8035ACF0(void);
void fn_8035B034(void);
void fn_8035B234(void);
void fn_8035B368(void);
void fn_8035B42C(void);
void fn_8035B534(void);
void fn_8035B694(void);
void fn_8035B78C(void);
void fn_8035B808(void);
void fn_8035B824(void);
void fn_8035B854(void);
void fn_8035B8B0(void);
void fn_8035BBCC(void);
void fn_8035BC84(void);
void fn_8035BDE8(void);
void fn_8035BEA4(void);
void fn_8035C0E4(void);
void fn_8035C1B4(void);

asm void fn_8035A9F4(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    mr r30, r3
    lwz r4, 0xd1c(r3)
    lfs f0, 0x530(r3)
    lfs f5, 0x530(r4)
    lfs f3, 0x528(r3)
    addi r3, r1, 0x2c
    lfs f4, 0x528(r4)
    fsubs f5, f5, f0
    lfs f0, lbl_8088552C
    fsubs f3, f4, f3
    stfs f5, 0x34(r1)
    stfs f3, 0x2c(r1)
    stfs f0, 0x30(r1)
    bl fn_805F9940
    lfs f0, lbl_808855EC
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8035A9F4_00000160
    addi r3, r1, 0x2c
    mr r4, r3
    bl fn_805F98D0
    li r0, 0x0
    stw r0, 0x6c(r1)
    lfs f0, lbl_808855EC
    addi r31, r1, 0x14
    stw r0, 0x70(r1)
    addi r5, r1, 0x20
    fsubs f4, f31, f0
    lfs f3, 0x34(r1)
    stw r0, 0x74(r1)
    mr r6, r31
    lfs f0, 0x30(r1)
    addi r4, r1, 0x38
    stw r0, 0x78(r1)
    fmuls f7, f3, f4
    lfs f3, 0x2c(r1)
    fmuls f8, f0, f4
    lfs f2, 0x530(r30)
    lis r7, 0x8000
    psq_l f1, 0x528(r30), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fmuls f9, f3, f4
    lfs f5, lbl_808855D4
    frsp f0, f2
    lfs f6, 0x24(r1)
    li r8, 0x0
    stfs f2, 0x28(r1)
    fadds f3, f6, f5
    lwz r3, lbl_8087EE98
    fadds f0, f0, f7
    stfs f9, 0x8(r1)
    li r9, 0x0
    stfs f3, 0x24(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f4, 0x14(r1)
    lfs f3, 0x18(r1)
    fadds f4, f4, f9
    stfs f8, 0xc(r1)
    fadds f3, f3, f8
    stfs f7, 0x10(r1)
    stfs f4, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_8035A9F4_00000160
    lfs f2, 0x530(r30)
    addi r4, r30, 0x150c
    psq_l f1, 0x528(r30), 0, 0
    addi r5, r30, 0x1500
    psq_st f1, 0x0(r4), 0, 0
    li r3, 0x1
    lfs f0, 0x52c(r30)
    stfs f2, 0x1514(r30)
    lfs f2, 0x1c(r1)
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1508(r30)
    stfs f0, 0x1504(r30)
    b lbl_fn_8035A9F4_00000164
lbl_fn_8035A9F4_00000160:
    li r3, 0x0
lbl_fn_8035A9F4_00000164:
    lwz r0, 0xa4(r1)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8035AB78(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x162c(r3)
    cmpwi r0, 0x0
    blt lbl_fn_8035AB78_000001C0
    li r3, 0x0
    b lbl_fn_8035AB78_0000029C
lbl_fn_8035AB78_000001C0:
    lwz r3, 0xd1c(r3)
    cmpwi r3, 0x0
    bne lbl_fn_8035AB78_000001D4
    li r3, 0x0
    b lbl_fn_8035AB78_0000029C
lbl_fn_8035AB78_000001D4:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8035AB78_000001F8
    lwz r12, 0x0(r3)
    lwz r12, 0x78(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_8035AB78_00000200
lbl_fn_8035AB78_000001F8:
    li r3, 0x0
    b lbl_fn_8035AB78_0000029C
lbl_fn_8035AB78_00000200:
    lwz r3, 0xd1c(r28)
    lwz r0, 0x638(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8035AB78_00000218
    li r3, 0x0
    b lbl_fn_8035AB78_0000029C
lbl_fn_8035AB78_00000218:
    lwz r4, 0x940(r28)
    lis r0, 0x4330
    lis r5, lbl_8074B090@ha
    lwz r3, 0x1588(r28)
    xoris r4, r4, 0x8000
    stw r4, 0xc(r1)
    subi r29, r3, 0x1
    lfd f2, lbl_8074B090@l(r5)
    stw r0, 0x8(r1)
    mulli r31, r29, 0x14
    lfs f0, 0x7d8(r28)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fdivs f31, f0, f1
    b lbl_fn_8035AB78_00000290
lbl_fn_8035AB78_00000254:
    add r4, r28, r31
    mr r3, r28
    addi r30, r4, 0x158c
    mr r4, r30
    bl fn_805A49E8
    cmpwi r3, 0x0
    bne lbl_fn_8035AB78_00000288
    lfs f0, 0x10(r30)
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_8035AB78_00000288
    li r3, 0x1
    b lbl_fn_8035AB78_0000029C
lbl_fn_8035AB78_00000288:
    subi r29, r29, 0x1
    subi r31, r31, 0x14
lbl_fn_8035AB78_00000290:
    cmpwi r29, 0x0
    bge lbl_fn_8035AB78_00000254
    li r3, 0x0
lbl_fn_8035AB78_0000029C:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8035ACB8(void)
{
    nofralloc
    lfs f0, lbl_80885550
    li r0, 0x1
    stfs f1, 0x2e8(r3)
    mr r6, r5
    mr r5, r4
    lfs f1, lbl_8088552C
    stw r0, 0x3fc(r3)
    li r4, 0x0
    lfs f2, lbl_808855D0
    li r7, 0x0
    stfs f0, 0x2fc(r3)
    li r8, 0x1
    addi r3, r3, 0xb0
    b fn_80097C08
}

asm void fn_8035ACF0(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    cmpwi r4, 0xb
    stw r0, 0x1e4(r1)
    stw r31, 0x1dc(r1)
    stw r30, 0x1d8(r1)
    mr r30, r3
    beq lbl_fn_8035ACF0_00000330
    cmpwi r4, 0xe
    beq lbl_fn_8035ACF0_00000534
    cmpwi r4, 0x11
    beq lbl_fn_8035ACF0_000005BC
    b lbl_fn_8035ACF0_00000628
lbl_fn_8035ACF0_00000330:
    lfs f8, lbl_8088552C
    addi r31, r1, 0x1a8
    lfs f0, lbl_80885550
    lfs f7, lbl_8088559C
    stfs f8, 0x7c(r1)
    stfs f8, 0x80(r1)
    stfs f7, 0x84(r1)
    stfs f8, 0x1d4(r1)
    stfs f8, 0x1cc(r1)
    stfs f8, 0x1c8(r1)
    stfs f8, 0x1c4(r1)
    stfs f8, 0x1c0(r1)
    stfs f8, 0x1b8(r1)
    stfs f8, 0x1b4(r1)
    stfs f8, 0x1b0(r1)
    stfs f8, 0x1ac(r1)
    stfs f0, 0x1d0(r1)
    stfs f0, 0x1bc(r1)
    stfs f0, 0x1a8(r1)
    lfs f1, 0x53c(r3)
    fcmpu cr0, f8, f1
    beq lbl_fn_8035ACF0_000003D8
    addi r3, r1, 0xb8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0xb8
    addi r5, r1, 0x88
    bl fn_805F89F0
    addi r3, r1, 0x88
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_8035ACF0_000003D8:
    lfs f0, lbl_8088552C
    lfs f1, 0x538(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_8035ACF0_00000438
    addi r3, r1, 0x118
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x118
    addi r5, r1, 0xe8
    bl fn_805F89F0
    addi r3, r1, 0xe8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_8035ACF0_00000438:
    lfs f0, lbl_8088552C
    lfs f1, 0x534(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_8035ACF0_00000498
    addi r3, r1, 0x178
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x178
    addi r5, r1, 0x148
    bl fn_805F89F0
    addi r3, r1, 0x148
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_8035ACF0_00000498:
    addi r4, r1, 0x7c
    addi r3, r1, 0x1a8
    mr r5, r4
    bl fn_805F93C0
    mr r3, r30
    li r4, 0x3e8
    bl fn_80232B7C
    lfs f8, 0x530(r30)
    li r3, -0x1
    lfs f0, 0x84(r1)
    li r0, 0x1
    lfs f9, 0x52c(r30)
    addi r4, r30, 0x164c
    fadds f10, f8, f0
    lfs f7, 0x80(r1)
    lfs f8, 0x528(r30)
    addi r7, r1, 0x70
    lfs f0, lbl_80885550
    fadds f9, f9, f7
    lfs f7, 0x7c(r1)
    addi r8, r30, 0x534
    stfs f9, 0x74(r1)
    addi r9, r1, 0x60
    fadds f7, f8, f7
    lfs f1, lbl_808855B0
    stfs f10, 0x78(r1)
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    stfs f7, 0x70(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x68(r1)
    stfs f0, 0x6c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_8035ACF0_00000628
lbl_fn_8035ACF0_00000534:
    li r4, 0x5
    bl fn_80232B7C
    lwz r4, lbl_8087F3C0
    li r0, 0x2
    lfs f1, lbl_80885550
    li r3, -0x1
    stw r0, 0xb8(r4)
    li r0, 0x1
    lfs f0, lbl_8088552C
    addi r4, r30, 0x1640
    stfs f0, 0x44(r1)
    addi r5, r30, 0xb0
    addi r7, r1, 0x38
    addi r8, r1, 0x44
    stfs f0, 0x48(r1)
    addi r9, r1, 0x50
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x4c(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x5c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
    b lbl_fn_8035ACF0_00000628
lbl_fn_8035ACF0_000005BC:
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_8088552C
    li r3, -0x1
    lfs f1, lbl_80885550
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r30, 0x1634
    addi r5, r30, 0xb0
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_8035ACF0_00000628:
    lwz r0, 0x1e4(r1)
    lwz r31, 0x1dc(r1)
    lwz r30, 0x1d8(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}

asm void fn_8035B034(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_8074B0A4@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_8074B0A4@l
    addi r4, r4, 0x293
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x16b4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8035B034_00000694
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8035B034_00000694
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x16b4(r29)
    mr r30, r3
    b lbl_fn_8035B034_00000698
lbl_fn_8035B034_00000694:
    li r30, 0x0
lbl_fn_8035B034_00000698:
    mr r3, r29
    mr r4, r30
    bl fn_805A5224
    lis r31, lbl_8074B0A4@ha
    mr r3, r30
    addi r31, r31, lbl_8074B0A4@l
    addi r5, r29, 0x16b8
    addi r4, r31, 0x29e
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x2a8
    addi r5, r29, 0x16bc
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lis r6, 0x2
    mr r3, r30
    subi r7, r6, 0x7960
    addi r4, r31, 0x2b1
    addi r5, r29, 0x58c
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x2bc
    addi r5, r29, 0x16c4
    li r6, -0x1
    li r7, 0x3e8
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x2c7
    addi r5, r29, 0x14d4
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x133
    addi r5, r29, 0x1518
    li r6, 0x0
    li r7, 0x1f4
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x1a7
    addi r5, r29, 0x1520
    li r6, 0x0
    li r7, 0x1f4
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x195
    addi r5, r29, 0x151c
    li r6, 0x0
    li r7, 0x1f4
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_8088552C
    mr r3, r30
    lfs f2, lbl_808855F0
    addi r4, r31, 0x14e
    lfs f3, lbl_80885550
    addi r5, r29, 0x14fc
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_8088552C
    mr r3, r30
    lfs f2, lbl_808855F0
    addi r4, r31, 0x2cd
    lfs f3, lbl_808855D0
    addi r5, r29, 0x16c0
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_8088552C
    mr r3, r30
    lfs f2, lbl_808855F4
    addi r4, r31, 0x2dd
    lfs f3, lbl_80885550
    addi r5, r29, 0x7d8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8035B234(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    li r4, 0x1
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8035B234_000008E0
    lwz r0, 0x560(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_8035B234_000008DC
    bge lbl_fn_8035B234_000008B0
    cmpwi r0, 0x1d
    bge lbl_fn_8035B234_0000089C
    cmpwi r0, 0x17
    beq lbl_fn_8035B234_000008DC
    blt lbl_fn_8035B234_000008E0
    cmpwi r0, 0x1b
    bge lbl_fn_8035B234_000008DC
    b lbl_fn_8035B234_000008E0
lbl_fn_8035B234_0000089C:
    cmpwi r0, 0x25
    bge lbl_fn_8035B234_000008E0
    cmpwi r0, 0x23
    bge lbl_fn_8035B234_000008DC
    b lbl_fn_8035B234_000008E0
lbl_fn_8035B234_000008B0:
    cmpwi r0, 0x80
    bge lbl_fn_8035B234_000008D0
    cmpwi r0, 0x71
    beq lbl_fn_8035B234_000008DC
    blt lbl_fn_8035B234_000008E0
    cmpwi r0, 0x7b
    bge lbl_fn_8035B234_000008DC
    b lbl_fn_8035B234_000008E0
lbl_fn_8035B234_000008D0:
    cmpwi r0, 0x8e
    beq lbl_fn_8035B234_000008DC
    b lbl_fn_8035B234_000008E0
lbl_fn_8035B234_000008DC:
    li r4, 0x0
lbl_fn_8035B234_000008E0:
    lwz r0, 0x14e0(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8035B234_000008F0
    li r4, 0x0
lbl_fn_8035B234_000008F0:
    cmpwi r4, 0x0
    beq lbl_fn_8035B234_00000958
    li r3, 0xc8
    bl fn_80219E6C
    lis r7, lbl_807C6B90@ha
    addi r4, r31, 0x7d4
    addi r5, r30, 0x7d4
    li r6, 0x80
    addi r7, r7, lbl_807C6B90@l
    bl fn_8003F538
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    lis r4, lbl_8074B090@ha
    stw r3, 0xc(r1)
    lfd f3, lbl_8074B090@l(r4)
    stw r0, 0x8(r1)
    lfs f1, 0x7d8(r30)
    lfd f2, 0x8(r1)
    lfs f0, lbl_8088552C
    fsubs f2, f2, f3
    fsubs f1, f1, f2
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8035B234_00000958
    li r3, 0xa
    b lbl_fn_8035B234_0000095C
lbl_fn_8035B234_00000958:
    li r3, 0x0
lbl_fn_8035B234_0000095C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8035B368(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    lfs f3, 0x530(r3)
    lfs f0, 0x530(r5)
    lfs f2, 0x528(r3)
    addi r3, r1, 0x8
    lfs f1, 0x528(r5)
    fsubs f3, f3, f0
    lfs f0, lbl_8088552C
    mr r4, r3
    fsubs f1, f2, f1
    stfs f3, 0x10(r1)
    stfs f1, 0x8(r1)
    stfs f0, 0xc(r1)
    bl fn_805F98D0
    subi r0, r31, 0x9
    cmplwi r0, 0x3
    bgt lbl_fn_8035B368_00000A20
    lis r5, lbl_8074B0A4@ha
    li r3, 0x24
    addi r5, r5, lbl_8074B0A4@l
    li r4, 0x3
    addi r5, r5, 0x2e0
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8035B368_00000A10
    mr r4, r30
    mr r6, r31
    addi r5, r1, 0x8
    bl fn_801AFAC0
    mr r4, r3
lbl_fn_8035B368_00000A10:
    mr r3, r30
    bl fn_80178208
    li r0, 0x6
    stw r0, 0x58c(r30)
lbl_fn_8035B368_00000A20:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8035B42C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_8035B42C_00000B20
    addic. r0, r3, 0x16b4
    beq lbl_fn_8035B42C_00000A84
    lwz r4, 0x16b4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8035B42C_00000A84
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8035B42C_00000A84
    bl fn_800897D8
lbl_fn_8035B42C_00000A84:
    addic. r31, r29, 0x1658
    beq lbl_fn_8035B42C_00000AA4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8035B42C_00000AA4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8035B42C_00000AA4:
    addic. r31, r29, 0x164c
    beq lbl_fn_8035B42C_00000AC4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8035B42C_00000AC4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8035B42C_00000AC4:
    addic. r31, r29, 0x1640
    beq lbl_fn_8035B42C_00000AE4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8035B42C_00000AE4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8035B42C_00000AE4:
    addic. r31, r29, 0x1634
    beq lbl_fn_8035B42C_00000B04
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8035B42C_00000B04
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8035B42C_00000B04:
    mr r3, r29
    li r4, 0x0
    bl fn_805A3D00
    cmpwi r30, 0x0
    ble lbl_fn_8035B42C_00000B20
    mr r3, r29
    bl dtor_80084684
lbl_fn_8035B42C_00000B20:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8035B534(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_fn_8035B534_00000B70
    li r3, 0x0
    b lbl_fn_8035B534_00000C84
lbl_fn_8035B534_00000B70:
    cmpwi r5, 0x0
    bne lbl_fn_8035B534_00000B88
    bl fn_805A5378
    cmpwi r3, 0x0
    beq lbl_fn_8035B534_00000B88
    b lbl_fn_8035B534_00000C84
lbl_fn_8035B534_00000B88:
    lis r5, lbl_8074B390@ha
    li r3, 0x14b0
    addi r5, r5, lbl_8074B390@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8035B534_00000C80
    lwz r6, 0x20(r30)
    mr r4, r29
    li r5, 0x2
    bl fn_800E2AF8
    lis r4, lbl_80789A08@ha
    lis r3, 0x2
    addi r4, r4, lbl_80789A08@l
    stw r4, 0x0(r31)
    li r4, 0x0
    subi r0, r3, 0x7960
    stw r4, 0x14ac(r31)
    lwz r4, lbl_8087F408
    lwz r3, 0x50(r4)
    addi r3, r3, 0x1
    stw r3, 0x50(r4)
    cmpw r3, r0
    ble lbl_fn_8035B534_00000C04
    lwz r3, 0x50(r4)
    subis r3, r3, 0x2
    addi r0, r3, 0x7960
    stw r0, 0x50(r4)
lbl_fn_8035B534_00000C04:
    lwz r0, 0x50(r4)
    mr r4, r31
    stw r0, 0x80(r31)
    lwz r3, lbl_8087F408
    bl fn_8011FAF0
    lwz r3, 0x12a4(r31)
    li r0, 0x1
    rlwinm r3, r3, 0, 16, 14
    stw r3, 0x12a4(r31)
    lwz r3, 0xf14(r31)
    stw r3, 0xf18(r31)
    stw r0, 0xf14(r31)
    lwz r3, 0x5c(r31)
    lwz r0, 0xd0(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8035B534_00000C80
    lwz r3, lbl_8087F4A0
    li r4, 0x4650
    lwz r5, 0x80(r31)
    bl fn_803EC16C
    stw r3, 0x1438(r31)
    li r5, 0x1
    lwz r12, 0x0(r3)
    lwz r4, 0x5c(r31)
    lwz r12, 0x68(r12)
    lwz r4, 0xd0(r4)
    mtctr r12
    bctrl
    lwz r3, 0x1438(r31)
    li r4, 0x1
    bl fn_800D246C
lbl_fn_8035B534_00000C80:
    mr r3, r31
lbl_fn_8035B534_00000C84:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8035B694(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r6, r5
    li r5, 0x2
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800E2AF8
    lis r3, lbl_80789A08@ha
    li r0, 0x0
    addi r3, r3, lbl_80789A08@l
    stw r3, 0x0(r31)
    lis r3, 0x2
    stw r0, 0x14ac(r31)
    subi r0, r3, 0x7960
    lwz r4, lbl_8087F408
    lwz r3, 0x50(r4)
    addi r3, r3, 0x1
    stw r3, 0x50(r4)
    cmpw r3, r0
    ble lbl_fn_8035B694_00000D04
    lwz r3, 0x50(r4)
    subis r3, r3, 0x2
    addi r0, r3, 0x7960
    stw r0, 0x50(r4)
lbl_fn_8035B694_00000D04:
    lwz r0, 0x50(r4)
    mr r4, r31
    stw r0, 0x80(r31)
    lwz r3, lbl_8087F408
    bl fn_8011FAF0
    lwz r3, 0x12a4(r31)
    li r0, 0x1
    lwz r4, 0xf14(r31)
    rlwinm r3, r3, 0, 16, 14
    stw r3, 0x12a4(r31)
    lwz r3, 0x5c(r31)
    stw r4, 0xf18(r31)
    stw r0, 0xf14(r31)
    lwz r0, 0xd0(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8035B694_00000D80
    lwz r3, lbl_8087F4A0
    li r4, 0x4650
    lwz r5, 0x80(r31)
    bl fn_803EC16C
    stw r3, 0x1438(r31)
    li r5, 0x1
    lwz r4, 0x5c(r31)
    lwz r12, 0x0(r3)
    lwz r4, 0xd0(r4)
    lwz r12, 0x68(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1438(r31)
    li r4, 0x1
    bl fn_800D246C
lbl_fn_8035B694_00000D80:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8035B78C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_8035B78C_00000DF8
    lis r4, lbl_80789A08@ha
    addi r4, r4, lbl_80789A08@l
    stw r4, 0x0(r3)
    lwz r3, lbl_8087F408
    cmpwi r3, 0x0
    beq lbl_fn_8035B78C_00000DDC
    mr r4, r30
    bl fn_8011FB18
lbl_fn_8035B78C_00000DDC:
    mr r3, r30
    li r4, 0x0
    bl fn_800E2D4C
    cmpwi r31, 0x0
    ble lbl_fn_8035B78C_00000DF8
    mr r3, r30
    bl dtor_80084684
lbl_fn_8035B78C_00000DF8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8035B808(void)
{
    nofralloc
    b lbl_fn_8035B808_00000E1C
lbl_fn_8035B808_00000E18:
    mr r3, r0
lbl_fn_8035B808_00000E1C:
    lwz r0, 0x14ac(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8035B808_00000E18
    stw r4, 0x14ac(r3)
    blr
}

asm void fn_8035B824(void)
{
    nofralloc
    li r5, 0x0
    b lbl_fn_8035B824_00000E40
lbl_fn_8035B824_00000E38:
    mr r5, r3
    lwz r3, 0x14ac(r3)
lbl_fn_8035B824_00000E40:
    cmplw r3, r4
    bne lbl_fn_8035B824_00000E38
    bnelr
    cmpwi r5, 0x0
    beqlr
    lwz r0, 0x14ac(r3)
    stw r0, 0x14ac(r5)
    blr
}

asm void fn_8035B854(void)
{
    nofralloc
    lwz r4, lbl_8087F408
    cmpwi r4, 0x0
    beq lbl_fn_8035B854_00000EB4
    lwz r4, 0x48(r4)
    cmpwi r4, 0x0
    beq lbl_fn_8035B854_00000EB4
    cmplw r3, r4
    bne lbl_fn_8035B854_00000EA0
    b lbl_fn_8035B854_00000E88
lbl_fn_8035B854_00000E84:
    mr r4, r0
lbl_fn_8035B854_00000E88:
    lwz r0, 0x14ac(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8035B854_00000E84
    b lbl_fn_8035B854_00000EAC
    b lbl_fn_8035B854_00000EA0
lbl_fn_8035B854_00000E9C:
    mr r4, r0
lbl_fn_8035B854_00000EA0:
    lwz r0, 0x14ac(r4)
    cmplw r0, r3
    bne lbl_fn_8035B854_00000E9C
lbl_fn_8035B854_00000EAC:
    mr r3, r4
    blr
lbl_fn_8035B854_00000EB4:
    li r3, 0x0
    blr
}

asm void fn_8035B8B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0x14a8(r3)
    extrwi. r0, r0, 1, 7
    beq lbl_fn_8035B8B0_000011BC
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_8035B8B0_000011BC
    lwz r6, lbl_8087F408
    li r0, 0x0
    li r4, 0x0
    li r5, 0x0
    lwz r11, 0x48(r6)
    b lbl_fn_8035B8B0_00000FA4
lbl_fn_8035B8B0_00000F08:
    lwz r10, 0x38(r11)
    li r8, 0x0
    li r7, 0x0
    li r9, 0x0
    rlwinm r6, r10, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_8035B8B0_00000F34
    clrlwi r6, r10, 31
    cmplwi r6, 0x1
    beq lbl_fn_8035B8B0_00000F34
    li r9, 0x1
lbl_fn_8035B8B0_00000F34:
    cmpwi r9, 0x0
    beq lbl_fn_8035B8B0_00000F50
    lwz r6, 0x7e0(r11)
    rlwinm r6, r6, 0, 26, 26
    cmplwi r6, 0x20
    beq lbl_fn_8035B8B0_00000F50
    li r7, 0x1
lbl_fn_8035B8B0_00000F50:
    cmpwi r7, 0x0
    beq lbl_fn_8035B8B0_00000F84
    lwz r6, 0x55c(r11)
    li r7, 0x0
    cmpwi r6, 0x6
    bne lbl_fn_8035B8B0_00000F78
    lwz r6, 0x560(r11)
    cmpwi r6, 0x1c
    bne lbl_fn_8035B8B0_00000F78
    li r7, 0x1
lbl_fn_8035B8B0_00000F78:
    cmpwi r7, 0x0
    bne lbl_fn_8035B8B0_00000F84
    li r8, 0x1
lbl_fn_8035B8B0_00000F84:
    cmpwi r8, 0x0
    beq lbl_fn_8035B8B0_00000FA0
    lwz r6, 0xd18(r11)
    cmpwi r6, 0x1
    bne lbl_fn_8035B8B0_00000FA0
    mr r5, r11
    addi r4, r4, 0x1
lbl_fn_8035B8B0_00000FA0:
    lwz r11, 0x14ac(r11)
lbl_fn_8035B8B0_00000FA4:
    cmpwi r11, 0x0
    bne lbl_fn_8035B8B0_00000F08
    lwz r6, lbl_8087F0A8
    lwz r6, 0x330(r6)
    cmpwi r6, 0x0
    beq lbl_fn_8035B8B0_00001048
    lwz r10, 0x38(r3)
    li r8, 0x0
    li r7, 0x0
    li r9, 0x0
    rlwinm r6, r10, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_8035B8B0_00000FE8
    clrlwi r6, r10, 31
    cmplwi r6, 0x1
    beq lbl_fn_8035B8B0_00000FE8
    li r9, 0x1
lbl_fn_8035B8B0_00000FE8:
    cmpwi r9, 0x0
    beq lbl_fn_8035B8B0_00001004
    lwz r6, 0x7e0(r3)
    rlwinm r6, r6, 0, 26, 26
    cmplwi r6, 0x20
    beq lbl_fn_8035B8B0_00001004
    li r7, 0x1
lbl_fn_8035B8B0_00001004:
    cmpwi r7, 0x0
    beq lbl_fn_8035B8B0_00001038
    lwz r6, 0x55c(r3)
    li r7, 0x0
    cmpwi r6, 0x6
    bne lbl_fn_8035B8B0_0000102C
    lwz r6, 0x560(r3)
    cmpwi r6, 0x1c
    bne lbl_fn_8035B8B0_0000102C
    li r7, 0x1
lbl_fn_8035B8B0_0000102C:
    cmpwi r7, 0x0
    bne lbl_fn_8035B8B0_00001038
    li r8, 0x1
lbl_fn_8035B8B0_00001038:
    cmpwi r8, 0x0
    beq lbl_fn_8035B8B0_00001048
    li r4, 0x1
    mr r5, r30
lbl_fn_8035B8B0_00001048:
    cmpwi r4, 0x1
    bne lbl_fn_8035B8B0_00001124
    cmplw r5, r3
    bne lbl_fn_8035B8B0_00001124
    lwz r4, 0x55c(r3)
    li r0, 0x1
    cmpwi r4, 0x6
    bne lbl_fn_8035B8B0_000010DC
    lwz r4, 0x560(r3)
    cmpwi r4, 0x3b
    beq lbl_fn_8035B8B0_000010D8
    bge lbl_fn_8035B8B0_000010AC
    cmpwi r4, 0x1d
    bge lbl_fn_8035B8B0_00001098
    cmpwi r4, 0x17
    beq lbl_fn_8035B8B0_000010D8
    blt lbl_fn_8035B8B0_000010DC
    cmpwi r4, 0x1b
    bge lbl_fn_8035B8B0_000010D8
    b lbl_fn_8035B8B0_000010DC
lbl_fn_8035B8B0_00001098:
    cmpwi r4, 0x25
    bge lbl_fn_8035B8B0_000010DC
    cmpwi r4, 0x23
    bge lbl_fn_8035B8B0_000010D8
    b lbl_fn_8035B8B0_000010DC
lbl_fn_8035B8B0_000010AC:
    cmpwi r4, 0x80
    bge lbl_fn_8035B8B0_000010CC
    cmpwi r4, 0x71
    beq lbl_fn_8035B8B0_000010D8
    blt lbl_fn_8035B8B0_000010DC
    cmpwi r4, 0x7b
    bge lbl_fn_8035B8B0_000010D8
    b lbl_fn_8035B8B0_000010DC
lbl_fn_8035B8B0_000010CC:
    cmpwi r4, 0x8e
    beq lbl_fn_8035B8B0_000010D8
    b lbl_fn_8035B8B0_000010DC
lbl_fn_8035B8B0_000010D8:
    li r0, 0x0
lbl_fn_8035B8B0_000010DC:
    lwz r4, 0x58c(r3)
    cmplwi r4, 0x1
    ble lbl_fn_8035B8B0_000010F4
    cmpwi r4, 0x5
    beq lbl_fn_8035B8B0_000010F4
    li r0, 0x0
lbl_fn_8035B8B0_000010F4:
    lwz r4, 0x7e0(r3)
    rlwinm r3, r4, 0, 25, 25
    cmplwi r3, 0x40
    beq lbl_fn_8035B8B0_00001110
    rlwinm r3, r4, 0, 24, 24
    cmplwi r3, 0x80
    bne lbl_fn_8035B8B0_00001114
lbl_fn_8035B8B0_00001110:
    li r0, 0x0
lbl_fn_8035B8B0_00001114:
    lwz r3, 0x9f8(r5)
    cmpwi r3, 0x1
    blt lbl_fn_8035B8B0_00001124
    li r0, 0x0
lbl_fn_8035B8B0_00001124:
    cmpwi r0, 0x0
    beq lbl_fn_8035B8B0_000011BC
    li r3, 0xc8
    bl fn_80219E6C
    lis r7, lbl_807C6B90@ha
    addi r4, r31, 0x7d4
    addi r5, r30, 0x7d4
    li r6, 0x80
    addi r7, r7, lbl_807C6B90@l
    bl fn_8003F538
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    lis r4, lbl_8074B388@ha
    stw r3, 0xc(r1)
    lfd f3, lbl_8074B388@l(r4)
    stw r0, 0x8(r1)
    lfs f1, 0x7d8(r30)
    lfd f2, 0x8(r1)
    lfs f0, lbl_808855F8
    fsubs f2, f2, f3
    fsubs f1, f1, f2
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    beq lbl_fn_8035B8B0_00001194
    lwz r3, lbl_8087F0A8
    lwz r0, 0x330(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8035B8B0_000011BC
lbl_fn_8035B8B0_00001194:
    bl fn_80680CF8
    lis r4, 0x5555
    addi r0, r4, 0x5556
    mulhw r4, r0, r3
    srwi r0, r4, 31
    add r0, r4, r0
    mulli r0, r0, 0x3
    subf r3, r0, r3
    addi r3, r3, 0x9
    b lbl_fn_8035B8B0_000011C0
lbl_fn_8035B8B0_000011BC:
    li r3, 0x0
lbl_fn_8035B8B0_000011C0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8035BBCC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    lfs f3, 0x530(r3)
    lfs f0, 0x530(r5)
    lfs f2, 0x528(r3)
    addi r3, r1, 0x8
    lfs f1, 0x528(r5)
    fsubs f3, f3, f0
    lfs f0, lbl_808855F8
    mr r4, r3
    fsubs f1, f2, f1
    stfs f3, 0x10(r1)
    stfs f1, 0x8(r1)
    stfs f0, 0xc(r1)
    bl fn_805F98D0
    subi r0, r31, 0x9
    cmplwi r0, 0x3
    bgt lbl_fn_8035BBCC_00001278
    lis r5, lbl_8074B390@ha
    li r3, 0x24
    addi r5, r5, lbl_8074B390@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8035BBCC_00001270
    mr r4, r30
    mr r6, r31
    addi r5, r1, 0x8
    bl fn_801AFAC0
    mr r4, r3
lbl_fn_8035BBCC_00001270:
    mr r3, r30
    bl fn_80178208
lbl_fn_8035BBCC_00001278:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8035BC84(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lis r7, lbl_80789B10@ha
    li r6, 0x1
    stw r0, 0x54(r1)
    addi r7, r7, lbl_80789B10@l
    li r0, 0x2e
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    mr r29, r3
    stw r5, 0xc(r3)
    li r5, 0x1
    stw r7, 0x0(r3)
    li r7, 0x1
    stw r4, 0x4(r3)
    stw r0, 0x560(r4)
    li r4, 0x0
    lwz r3, 0x4(r3)
    addi r30, r3, 0xb0
    bl fn_8015495C
    li r31, 0x1
    stw r31, 0x34c(r30)
    lfs f0, lbl_8088560C
    mr r3, r30
    stfs f0, 0x24c(r30)
    li r4, 0x0
    lfs f1, lbl_80885610
    li r5, 0x173
    stfs f0, 0x238(r30)
    li r6, 0x0
    lfs f2, lbl_80885614
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r30
    li r4, 0x0
    bl fn_80097D7C
    stfs f1, 0x8(r29)
    lwz r3, 0x4(r29)
    bl fn_801446F0
    lwz r5, 0x4(r29)
    lis r3, lbl_8074B3B8@ha
    lwz r4, lbl_8074B3B8@l(r3)
    addi r3, r1, 0x10
    lfs f1, lbl_8088560C
    addi r5, r5, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r30, 0x4(r29)
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80885610
    li r0, -0x1
    lfs f1, lbl_8088560C
    addi r4, r30, 0x14f8
    stfs f0, 0x28(r1)
    addi r5, r30, 0xb0
    addi r7, r1, 0x34
    addi r8, r1, 0x28
    stfs f0, 0x2c(r1)
    addi r9, r1, 0x18
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x24(r1)
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r31, 0x4c(r1)
    mr r3, r29
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8035BDE8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f0, lbl_80885610
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r4, lbl_8087EFA8
    lfs f1, 0x8(r3)
    lfs f2, 0x3a4(r4)
    fsubs f1, f1, f2
    stfs f1, 0x8(r3)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8035BDE8_00001498
    lis r3, lbl_8074B3B8@ha
    lwz r5, 0x4(r31)
    addi r3, r3, lbl_8074B3B8@l
    lfs f1, lbl_8088560C
    lwz r4, 0x4(r3)
    addi r3, r1, 0x8
    addi r5, r5, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r4, 0xc(r31)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lis r3, lbl_8074B408@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8074B408@l(r3)
    stw r0, 0x14(r1)
    li r4, 0x1
    lwz r3, 0x4(r31)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    bl fn_8035DC58
    li r0, 0x1
lbl_fn_8035BDE8_00001498:
    mr r3, r0
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8035BEA4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r5, 0x20(r5)
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    bl fn_8035B694
    lis r3, lbl_80789B88@ha
    addi r29, r31, 0x14b0
    addi r3, r3, lbl_80789B88@l
    stw r3, 0x0(r31)
    mr r3, r29
    bl fn_80473E74
    lfs f0, lbl_80885610
    lis r3, lbl_8078FBB0@ha
    li r30, 0x0
    li r0, -0x1
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x0(r29)
    addi r3, r31, 0x14f8
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    stw r30, 0x14c0(r31)
    stw r0, 0x14d0(r31)
    stw r0, 0x14d4(r31)
    stw r30, 0x14d8(r31)
    stw r30, 0x14dc(r31)
    stw r30, 0x14e0(r31)
    stfs f0, 0x14e4(r31)
    stw r30, 0x14e8(r31)
    stw r30, 0x14ec(r31)
    stw r30, 0x14f0(r31)
    stw r30, 0x14f4(r31)
    bl fn_802377B8
    addi r3, r31, 0x1504
    bl fn_802377B8
    addi r3, r31, 0x1510
    bl fn_802377B8
    lwz r0, 0x12a4(r31)
    li r7, 0x78
    lfs f0, lbl_80885618
    li r6, 0x1e
    oris r0, r0, 0x40
    li r5, 0x12c
    mr r3, r29
    stw r30, 0x151c(r31)
    lis r29, lbl_8074B448@ha
    stw r30, 0x1540(r31)
    addi r4, r29, lbl_8074B448@l
    stw r7, 0x15a4(r31)
    stw r6, 0x15a8(r31)
    stfs f0, 0x15ac(r31)
    stw r5, 0x15b0(r31)
    stw r30, 0x15b4(r31)
    stw r0, 0x12a4(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x15b4(r31)
    addi r3, r29, lbl_8074B448@l
    addi r4, r3, 0x2b
    cmpwi r0, 0x0
    bne lbl_fn_8035BEA4_000015DC
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8035BEA4_000015DC
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x15b4(r31)
    mr r28, r3
    b lbl_fn_8035BEA4_000015E0
lbl_fn_8035BEA4_000015DC:
    li r28, 0x0
lbl_fn_8035BEA4_000015E0:
    lis r29, lbl_8074B448@ha
    lis r30, 0xf
    addi r29, r29, lbl_8074B448@l
    mr r3, r28
    addi r4, r29, 0x37
    addi r5, r31, 0x15a4
    addi r7, r30, 0x4240
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r29, 0x41
    addi r5, r31, 0x15a8
    addi r7, r30, 0x4240
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80885610
    mr r3, r28
    lfs f2, lbl_8088561C
    addi r4, r29, 0x54
    lfs f3, lbl_8088560C
    addi r5, r31, 0x15ac
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r29, 0x66
    addi r5, r31, 0x15b0
    addi r7, r30, 0x4240
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lwz r4, lbl_80885600
    addi r3, r31, 0x14f8
    bl fn_8023780C
    lwz r4, lbl_80885604
    addi r3, r31, 0x1504
    bl fn_8023780C
    lwz r4, lbl_80885608
    addi r3, r31, 0x1510
    bl fn_8023780C
    li r3, 0xc8
    bl fn_80219E6C
    lwz r0, 0x151c(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x1520
    beq lbl_fn_8035BEA4_000016C0
    stw r3, 0x0(r4)
lbl_fn_8035BEA4_000016C0:
    lwz r4, 0x151c(r31)
    mr r3, r31
    addi r0, r4, 0x1
    stw r0, 0x151c(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8035C0E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x1
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    beq lbl_fn_8035C0E4_0000171C
    li r31, 0x0
lbl_fn_8035C0E4_0000171C:
    addi r3, r30, 0x14b0
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_8035C0E4_00001730
    li r31, 0x0
lbl_fn_8035C0E4_00001730:
    addi r3, r30, 0x14f8
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_8035C0E4_00001744
    li r31, 0x0
lbl_fn_8035C0E4_00001744:
    addi r3, r30, 0x1504
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_8035C0E4_00001758
    li r31, 0x0
lbl_fn_8035C0E4_00001758:
    addi r3, r30, 0x1510
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_8035C0E4_0000176C
    li r31, 0x0
lbl_fn_8035C0E4_0000176C:
    cmpwi r31, 0x0
    beq lbl_fn_8035C0E4_000017A4
    li r0, 0x6
    stw r0, 0x58c(r30)
    mr r3, r30
    bl fn_8035C1B4
    lwz r0, 0x7ec(r30)
    li r3, 0x1
    ori r0, r0, 0x1c0
    oris r0, r0, 0x1
    ori r0, r0, 0x1
    oris r0, r0, 0x100
    stw r0, 0x7ec(r30)
    b lbl_fn_8035C0E4_000017A8
lbl_fn_8035C0E4_000017A4:
    li r3, 0x0
lbl_fn_8035C0E4_000017A8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8035C1B4(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    stw r0, 0x664(r1)
    stw r31, 0x65c(r1)
    mr r31, r3
    addi r3, r3, 0x14b0
    stw r30, 0x658(r1)
    stw r29, 0x654(r1)
    bl fn_8047059C
    mr r29, r3
    addi r3, r31, 0x14b0
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x14(r1)
    mr r30, r3
    addi r3, r1, 0x24
    stw r0, 0x18(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x644(r1)
    bl memset
    addi r3, r1, 0x624
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x14(r1)
    mr r4, r30
    mr r5, r29
    addi r3, r1, 0x14
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x14
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x14(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r30, lbl_8074B448@ha
    addi r30, r30, lbl_8074B448@l
lbl_fn_8035C1B4_00001870:
    addi r3, r1, 0x14
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r29, r3
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_8035C1B4_00001A5C
    cmpwi r0, 0x0
    beq lbl_fn_8035C1B4_00001A5C
    addi r4, r30, 0x77
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8035C1B4_000018BC
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14e8(r31)
    b lbl_fn_8035C1B4_00001A5C
lbl_fn_8035C1B4_000018BC:
    mr r3, r29
    addi r4, r30, 0x86
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8035C1B4_000018E8
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14ec(r31)
    b lbl_fn_8035C1B4_00001A5C
lbl_fn_8035C1B4_000018E8:
    mr r3, r29
    addi r4, r30, 0x95
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8035C1B4_00001914
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14f0(r31)
    b lbl_fn_8035C1B4_00001A5C
lbl_fn_8035C1B4_00001914:
    mr r3, r29
    addi r4, r30, 0xa6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8035C1B4_00001940
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14f4(r31)
    b lbl_fn_8035C1B4_00001A5C
lbl_fn_8035C1B4_00001940:
    mr r3, r29
    addi r4, r30, 0x37
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8035C1B4_00001968
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x15a4(r31)
    b lbl_fn_8035C1B4_00001A5C
lbl_fn_8035C1B4_00001968:
    mr r3, r29
    addi r4, r30, 0x54
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8035C1B4_00001990
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x15ac(r31)
    b lbl_fn_8035C1B4_00001A5C
lbl_fn_8035C1B4_00001990:
    mr r3, r29
    addi r4, r30, 0x41
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8035C1B4_000019B8
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x15a8(r31)
    b lbl_fn_8035C1B4_00001A5C
lbl_fn_8035C1B4_000019B8:
    mr r3, r29
    addi r4, r30, 0x66
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8035C1B4_000019E0
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x15b0(r31)
    b lbl_fn_8035C1B4_00001A5C
lbl_fn_8035C1B4_000019E0:
    mr r3, r29
    addi r4, r30, 0xb9
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8035C1B4_00001A5C
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x8(r1)
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xc(r1)
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, 0x1540(r31)
    stfs f1, 0x10(r1)
    mulli r0, r0, 0xc
    add r0, r31, r0
    addic. r3, r0, 0x1544
    beq lbl_fn_8035C1B4_00001A50
    lwz r0, 0x8(r1)
    stw r0, 0x0(r3)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x10(r1)
    stw r0, 0x8(r3)
lbl_fn_8035C1B4_00001A50:
    lwz r3, 0x1540(r31)
    addi r0, r3, 0x1
    stw r0, 0x1540(r31)
lbl_fn_8035C1B4_00001A5C:
    addi r3, r1, 0x14
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8035C1B4_00001870
    lwz r0, 0x664(r1)
    lwz r31, 0x65c(r1)
    lwz r30, 0x658(r1)
    lwz r29, 0x654(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}
