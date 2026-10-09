#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_17(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_17(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8004ED34(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AFF8(void);
extern void fn_800844D8(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CB5C8(void);
extern void fn_800D246C(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800EB7A0(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_8013655C(void);
extern void fn_80144710(void);
extern void fn_80145334(void);
extern void fn_8014C540(void);
extern void fn_8015495C(void);
extern void fn_80158BB4(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_8017039C(void);
extern void fn_80170A20(void);
extern void fn_80178A6C(void);
extern void fn_80219E6C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_802847CC(void);
extern void fn_80284CC8(void);
extern void fn_80285064(void);
extern void fn_802857B4(void);
extern void fn_80285B7C(void);
extern void fn_80285FA0(void);
extern void fn_802868A0(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_8036554C(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F9920(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_80785630[];
extern u8 lbl_80744E80[];
extern u8 lbl_80744EE8[];
extern u8 lbl_807450E0[];
extern u8 lbl_80745100[];
extern u8 lbl_80775A88[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80785670[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F428;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80883948;
extern u32 lbl_8088394C;
extern u32 lbl_80883954;
extern u32 lbl_80883980;
extern u32 lbl_80883988;
extern u32 lbl_808839A0;
extern u32 lbl_808839A4;
extern u32 lbl_808839AC;
extern u32 lbl_808839D0;
extern u32 lbl_808839D4;
extern u32 lbl_808839D8;
extern u32 lbl_808839DC;
extern u32 lbl_808839E0;
extern u32 lbl_808839E4;
extern u32 lbl_808839E8;
extern u32 lbl_808839EC;
extern u32 lbl_808839F0;
extern u32 lbl_808839F4;
extern u32 lbl_808839F8;
extern u32 lbl_808839FC;
extern u32 lbl_80883A00;
extern u32 lbl_80883A04;
extern u32 lbl_80883A08;
extern u32 lbl_80883A0C;
extern u32 lbl_80883A10;
extern u32 lbl_80883A14;
extern u32 lbl_80883A18;
extern u32 lbl_80883A1C;
extern u32 lbl_80883A20;
extern u32 lbl_80883A24;

/* Function declarations */
void fn_80281ED8(void);
void fn_80281F88(void);
void fn_802826A0(void);
void fn_802829DC(void);
void fn_80282AE8(void);
void fn_80282EA4(void);
void fn_80283004(void);
void fn_802837F4(void);

asm void fn_80281ED8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x14b8(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80281ED8_00000098
    li r31, 0x0
    stw r31, 0x14d8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x14b8(r30)
    li r0, 0x7
    stw r3, 0x590(r30)
    mr r3, r30
    li r5, 0x2
    stw r0, 0x58c(r30)
    stw r4, 0x1504(r30)
    bl fn_8017039C
    lfs f3, lbl_8088394C
    li r0, 0x1
    lfs f0, lbl_808839AC
    addi r3, r30, 0xb0
    stw r31, 0x1520(r30)
    li r4, 0x0
    lfs f1, lbl_80883948
    li r5, 0x14
    stw r0, 0x151c(r30)
    li r6, 0x0
    lfs f2, lbl_80883988
    li r7, 0x0
    stw r0, 0x3fc(r30)
    li r8, 0x1
    stfs f3, 0x2fc(r30)
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
lbl_fn_80281ED8_00000098:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80281F88(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    addi r11, r1, 0x1d0
    stfd f31, 0x200(r1)
    psq_st f31, 0x208(r1), 0, 0
    stfd f30, 0x1f0(r1)
    psq_st f30, 0x1f8(r1), 0, 0
    stfd f29, 0x1e0(r1)
    psq_st f29, 0x1e8(r1), 0, 0
    stfd f28, 0x1d0(r1)
    psq_st f28, 0x1d8(r1), 0, 0
    bl _savegpr_27
    lfs f3, lbl_80883948
    li r31, 0x0
    lfs f0, lbl_8088394C
    mr r30, r3
    stw r31, 0x194(r1)
    li r4, 0x79
    stw r31, 0x198(r1)
    stw r31, 0x19c(r1)
    stw r31, 0x1a0(r1)
    stw r31, 0x144(r1)
    stw r31, 0x148(r1)
    stw r31, 0x14c(r1)
    stw r31, 0x150(r1)
    stfs f3, 0x74(r1)
    stfs f3, 0x78(r1)
    stfs f0, 0x7c(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0xe0
    bl fn_805F8E70
    addi r4, r1, 0x74
    addi r3, r1, 0xe0
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x74(r1)
    addi r4, r1, 0x80
    lfs f2, lbl_80883948
    addi r6, r1, 0xa4
    fneg f3, f0
    lfs f0, lbl_808839D0
    stfs f2, 0x84(r1)
    addi r5, r30, 0x528
    lwz r3, lbl_8087EE98
    lis r7, 0x8000
    fmuls f0, f0, f3
    stfs f2, 0xac(r1)
    frsp f3, f2
    li r8, 0x0
    stfs f0, 0x80(r1)
    li r9, 0x0
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r1, 0x160
    psq_st f1, 0x0(r6), 0, 0
    lfs f5, 0xa4(r1)
    lfs f0, 0x528(r30)
    lfs f4, 0xa8(r1)
    fadds f0, f5, f0
    stfs f2, 0x88(r1)
    stfs f0, 0xa4(r1)
    lfs f0, 0x52c(r30)
    fadds f0, f4, f0
    stfs f0, 0xa8(r1)
    lfs f0, 0x530(r30)
    fadds f0, f3, f0
    stfs f0, 0xac(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_80281F88_000001E4
    lwz r3, 0x198(r1)
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80281F88_000001E4
    li r28, 0x0
lbl_fn_80281F88_000001E4:
    lfs f3, lbl_80883948
    addi r3, r1, 0xb0
    lfs f0, lbl_8088394C
    li r4, 0x79
    stfs f3, 0x5c(r1)
    stfs f3, 0x60(r1)
    stfs f0, 0x64(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x5c
    addi r3, r1, 0xb0
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x64(r1)
    addi r7, r1, 0x68
    lfs f0, lbl_80883948
    addi r6, r1, 0xa4
    fneg f4, f3
    lfs f3, lbl_808839D0
    stfs f0, 0x68(r1)
    addi r5, r30, 0x528
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x110
    fmuls f2, f3, f4
    stfs f0, 0x6c(r1)
    li r8, 0x0
    li r9, 0x0
    psq_l f1, 0x0(r7), 0, 0
    lis r7, 0x8000
    psq_st f1, 0x0(r6), 0, 0
    frsp f3, f2
    stfs f2, 0xac(r1)
    lfs f5, 0xa4(r1)
    lfs f0, 0x528(r30)
    lfs f4, 0xa8(r1)
    fadds f0, f5, f0
    stfs f2, 0x70(r1)
    stfs f0, 0xa4(r1)
    lfs f0, 0x52c(r30)
    fadds f0, f4, f0
    stfs f0, 0xa8(r1)
    lfs f0, 0x530(r30)
    fadds f0, f3, f0
    stfs f0, 0xac(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80281F88_000002B8
    lwz r4, 0x148(r1)
    lwz r0, 0x8(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80281F88_000002B8
    li r3, 0x0
lbl_fn_80281F88_000002B8:
    cmpwi r28, 0x0
    beq lbl_fn_80281F88_00000374
    cmpwi r3, 0x0
    beq lbl_fn_80281F88_00000374
    lfs f3, 0x530(r30)
    addi r4, r1, 0x170
    lfs f0, 0x178(r1)
    addi r29, r1, 0x98
    lfs f5, 0x52c(r30)
    addi r3, r1, 0x44
    fsubs f6, f3, f0
    lfs f4, 0x174(r1)
    lfs f3, 0x528(r30)
    lfs f0, 0x170(r1)
    fsubs f4, f5, f4
    psq_l f1, 0x0(r4), 0, 0
    fsubs f0, f3, f0
    lfs f2, 0x178(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xa0(r1)
    stfs f0, 0x44(r1)
    stfs f4, 0x48(r1)
    stfs f6, 0x4c(r1)
    bl fn_805F9920
    lfs f3, 0x530(r30)
    fmr f29, f1
    lfs f0, 0x128(r1)
    addi r3, r1, 0x50
    lfs f5, 0x52c(r30)
    fsubs f6, f3, f0
    lfs f4, 0x124(r1)
    lfs f3, 0x528(r30)
    lfs f0, 0x120(r1)
    fsubs f4, f5, f4
    stfs f6, 0x58(r1)
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f29
    bge lbl_fn_80281F88_000003C0
    addi r3, r1, 0x120
    lfs f2, 0x128(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xa0(r1)
    b lbl_fn_80281F88_000003C0
lbl_fn_80281F88_00000374:
    cmpwi r28, 0x0
    beq lbl_fn_80281F88_00000398
    addi r4, r1, 0x170
    lfs f2, 0x178(r1)
    addi r3, r1, 0x98
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xa0(r1)
    b lbl_fn_80281F88_000003C0
lbl_fn_80281F88_00000398:
    cmpwi r3, 0x0
    beq lbl_fn_80281F88_00000790
    addi r4, r1, 0x120
    lfs f2, 0x128(r1)
    addi r3, r1, 0x98
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xa0(r1)
    b lbl_fn_80281F88_000003C0
    b lbl_fn_80281F88_00000790
lbl_fn_80281F88_000003C0:
    lfs f28, lbl_80883954
    li r28, 0x0
    lfs f29, 0xa0(r1)
    li r29, 0x0
    lfs f30, 0x9c(r1)
    lfs f31, 0x98(r1)
    b lbl_fn_80281F88_00000428
lbl_fn_80281F88_000003DC:
    lwz r4, 0x14cc(r30)
    addi r3, r1, 0x38
    lwzx r4, r4, r29
    lfs f4, 0xc(r4)
    lfs f3, 0x8(r4)
    lfs f0, 0x4(r4)
    fsubs f4, f29, f4
    fsubs f3, f30, f3
    fsubs f0, f31, f0
    stfs f4, 0x40(r1)
    stfs f0, 0x38(r1)
    stfs f3, 0x3c(r1)
    bl fn_805F9920
    fcmpo cr0, f28, f1
    ble lbl_fn_80281F88_00000420
    fmr f28, f1
    mr r31, r28
lbl_fn_80281F88_00000420:
    addi r29, r29, 0x4
    addi r28, r28, 0x1
lbl_fn_80281F88_00000428:
    lwz r0, 0x14d0(r30)
    cmplw r28, r0
    blt lbl_fn_80281F88_000003DC
    lwz r5, lbl_8087F8A0
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    addi r3, r1, 0x8c
    lwz r5, 0x48(r5)
    li r29, 0x1
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x528(r5), 0, 0
    stfs f2, 0x94(r1)
    lfs f2, 0x530(r5)
    psq_st f1, 0x0(r3), 0, 0
    lwz r3, lbl_8087F428
    stfs f2, 0x94(r1)
    bl fn_8036554C
    b lbl_fn_80281F88_000004C0
lbl_fn_80281F88_00000478:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80281F88_000004BC
    lfs f3, 0x8c(r1)
    addi r29, r29, 0x1
    lfs f0, 0x528(r3)
    lfs f5, 0x90(r1)
    fadds f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x94(r1)
    lfs f0, 0x530(r3)
    fadds f4, f5, f4
    stfs f6, 0x8c(r1)
    fadds f0, f3, f0
    stfs f4, 0x90(r1)
    stfs f0, 0x94(r1)
lbl_fn_80281F88_000004BC:
    lwz r3, 0x14ac(r3)
lbl_fn_80281F88_000004C0:
    cmpwi r3, 0x0
    bne lbl_fn_80281F88_00000478
    xoris r3, r29, 0x8000
    lis r0, 0x4330
    stw r3, 0x1b4(r1)
    lis r4, lbl_80744E80@ha
    lfd f3, lbl_80744E80@l(r4)
    srwi r3, r31, 31
    stw r0, 0x1b0(r1)
    clrlwi r0, r31, 31
    xor r0, r0, r3
    lfs f5, lbl_8088394C
    lfd f0, 0x1b0(r1)
    subf r0, r3, r0
    lfs f4, 0x8c(r1)
    cmpwi r0, 0x1
    fsubs f6, f0, f3
    lfs f3, 0x90(r1)
    lfs f0, 0x94(r1)
    lwz r28, 0x14c4(r30)
    fdivs f5, f5, f6
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x8c(r1)
    stfs f3, 0x90(r1)
    stfs f0, 0x94(r1)
    bne lbl_fn_80281F88_00000608
    add r0, r3, r31
    srawi r3, r0, 1
    subic. r29, r3, 0x1
    bge lbl_fn_80281F88_00000544
    subi r29, r28, 0x1
lbl_fn_80281F88_00000544:
    cmpw r29, r28
    blt lbl_fn_80281F88_00000550
    li r29, 0x0
lbl_fn_80281F88_00000550:
    addic. r27, r3, 0x1
    bge lbl_fn_80281F88_0000055C
    subi r27, r28, 0x1
lbl_fn_80281F88_0000055C:
    cmpw r27, r28
    blt lbl_fn_80281F88_00000568
    li r27, 0x0
lbl_fn_80281F88_00000568:
    lwz r4, 0x14c0(r30)
    slwi r0, r29, 2
    lfs f6, 0x94(r1)
    addi r3, r1, 0x2c
    lwzx r4, r4, r0
    lfs f5, 0x90(r1)
    lfs f0, 0xc(r4)
    lfs f4, 0x8(r4)
    fsubs f6, f6, f0
    lfs f0, 0x4(r4)
    lfs f3, 0x8c(r1)
    fsubs f4, f5, f4
    stfs f6, 0x34(r1)
    fsubs f0, f3, f0
    stfs f4, 0x30(r1)
    stfs f0, 0x2c(r1)
    bl fn_805F9920
    lwz r3, 0x14c0(r30)
    slwi r0, r27, 2
    lfs f6, 0x94(r1)
    fmr f31, f1
    lwzx r4, r3, r0
    addi r3, r1, 0x20
    lfs f5, 0x90(r1)
    lfs f0, 0xc(r4)
    lfs f4, 0x8(r4)
    fsubs f6, f6, f0
    lfs f0, 0x4(r4)
    lfs f3, 0x8c(r1)
    fsubs f4, f5, f4
    stfs f6, 0x28(r1)
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    bl fn_805F9920
    fcmpo cr0, f31, f1
    ble lbl_fn_80281F88_00000600
    b lbl_fn_80281F88_00000610
lbl_fn_80281F88_00000600:
    mr r29, r27
    b lbl_fn_80281F88_00000610
lbl_fn_80281F88_00000608:
    add r0, r3, r31
    srawi r29, r0, 1
lbl_fn_80281F88_00000610:
    lwz r3, 0x14c0(r30)
    slwi r0, r29, 2
    subic. r5, r29, 0x1
    lwzx r3, r3, r0
    lwz r0, 0x0(r3)
    stw r0, 0x14f4(r30)
    bge lbl_fn_80281F88_00000630
    subi r5, r28, 0x1
lbl_fn_80281F88_00000630:
    cmpw r5, r28
    blt lbl_fn_80281F88_0000063C
    li r5, 0x0
lbl_fn_80281F88_0000063C:
    addic. r27, r29, 0x1
    bge lbl_fn_80281F88_00000648
    subi r27, r28, 0x1
lbl_fn_80281F88_00000648:
    cmpw r27, r28
    blt lbl_fn_80281F88_00000654
    li r27, 0x0
lbl_fn_80281F88_00000654:
    lwz r4, 0x14c0(r30)
    slwi r29, r5, 2
    lfs f6, 0x94(r1)
    addi r3, r1, 0x14
    lwzx r4, r4, r29
    lfs f5, 0x90(r1)
    lfs f0, 0xc(r4)
    lfs f4, 0x8(r4)
    fsubs f6, f6, f0
    lfs f0, 0x4(r4)
    lfs f3, 0x8c(r1)
    fsubs f4, f5, f4
    stfs f6, 0x1c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    bl fn_805F9920
    lwz r3, 0x14c0(r30)
    slwi r28, r27, 2
    lfs f6, 0x94(r1)
    fmr f31, f1
    lwzx r4, r3, r28
    addi r3, r1, 0x8
    lfs f5, 0x90(r1)
    lfs f0, 0xc(r4)
    lfs f4, 0x8(r4)
    fsubs f6, f6, f0
    lfs f0, 0x4(r4)
    lfs f3, 0x8c(r1)
    fsubs f4, f5, f4
    stfs f6, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9920
    fcmpo cr0, f31, f1
    ble lbl_fn_80281F88_000006FC
    lwz r3, 0x14c0(r30)
    lwzx r3, r3, r29
    lwz r0, 0x0(r3)
    stw r0, 0x14f8(r30)
    b lbl_fn_80281F88_0000070C
lbl_fn_80281F88_000006FC:
    lwz r3, 0x14c0(r30)
    lwzx r3, r3, r28
    lwz r0, 0x0(r3)
    stw r0, 0x14f8(r30)
lbl_fn_80281F88_0000070C:
    li r29, 0x0
    stw r29, 0x14f0(r30)
    lwz r4, 0x14cc(r30)
    slwi r0, r31, 2
    mr r3, r30
    li r5, 0x2
    lwzx r4, r4, r0
    lwz r4, 0x0(r4)
    stw r4, 0x1504(r30)
    bl fn_8017039C
    stw r29, 0x14d8(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f3, lbl_8088394C
    li r0, 0x1
    lfs f0, lbl_808839AC
    li r4, 0x8
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883948
    li r5, 0x14
    stw r4, 0x58c(r30)
    li r4, 0x0
    lfs f2, lbl_80883988
    li r6, 0x0
    stw r29, 0x1520(r30)
    li r7, 0x0
    li r8, 0x1
    stw r0, 0x151c(r30)
    stw r0, 0x3fc(r30)
    stfs f3, 0x2fc(r30)
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
lbl_fn_80281F88_00000790:
    addi r11, r1, 0x1d0
    psq_l f31, 0x208(r1), 0, 0
    lfd f31, 0x200(r1)
    psq_l f30, 0x1f8(r1), 0, 0
    lfd f30, 0x1f0(r1)
    psq_l f29, 0x1e8(r1), 0, 0
    lfd f29, 0x1e0(r1)
    psq_l f28, 0x1d8(r1), 0, 0
    lfd f28, 0x1d0(r1)
    bl _restgpr_27
    lwz r0, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_802826A0(void)
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
    mr r30, r5
    stw r29, 0xe4(r1)
    mr r29, r4
    stw r28, 0xe0(r1)
    mr r28, r3
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x9
    bne lbl_fn_802826A0_0000081C
    li r3, 0x0
    b lbl_fn_802826A0_00000ACC
lbl_fn_802826A0_0000081C:
    lfs f3, 0x530(r4)
    addi r5, r1, 0x50
    lfs f0, 0x530(r3)
    addi r31, r1, 0x5c
    lfs f5, 0x52c(r4)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    lfs f0, 0x528(r3)
    lfs f31, 0x538(r3)
    fsubs f3, f3, f0
    stfs f4, 0x54(r1)
    frsp f4, f2
    stfs f3, 0x50(r1)
    lfs f0, lbl_80883980
    fabs f3, f4
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x58(r1)
    frsp f3, f3
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802826A0_000008A0
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_802826A0_00000894
    lfs f0, lbl_808839A0
    b lbl_fn_802826A0_00000898
lbl_fn_802826A0_00000894:
    lfs f0, lbl_808839A4
lbl_fn_802826A0_00000898:
    stfs f0, 0x48(r1)
    b lbl_fn_802826A0_000008B4
lbl_fn_802826A0_000008A0:
    fmr f2, f4
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802826A0_000008B4:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883948
    addi r4, r1, 0x38
    lfs f29, 0x70(r1)
    mr r5, r4
    lfs f30, 0x6c(r1)
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
    lfs f0, lbl_8088394C
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0x98(r1)
    stfs f30, 0x9c(r1)
    stfs f29, 0xa0(r1)
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
    lfs f0, lbl_80883980
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802826A0_000009D0
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_802826A0_000009C0
    lfs f0, lbl_808839A0
    b lbl_fn_802826A0_000009C4
lbl_fn_802826A0_000009C0:
    lfs f0, lbl_808839A4
lbl_fn_802826A0_000009C4:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802826A0_000009E4
lbl_fn_802826A0_000009D0:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802826A0_000009E4:
    addi r3, r1, 0x44
    lfs f0, lbl_80883948
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80744EE8@ha
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f0
    lfs f3, 0x60(r1)
    stfs f2, 0x64(r1)
    fsubs f1, f3, f31
    lfd f2, lbl_80744EE8@l(r3)
    stfs f0, 0x4c(r1)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_808839D4
    fcmpo cr0, f4, f0
    ble lbl_fn_802826A0_00000A2C
    lfs f0, lbl_808839D8
    fsubs f4, f4, f0
lbl_fn_802826A0_00000A2C:
    lfs f0, lbl_808839DC
    fcmpo cr0, f4, f0
    bge lbl_fn_802826A0_00000A40
    lfs f0, lbl_808839D8
    fadds f4, f4, f0
lbl_fn_802826A0_00000A40:
    frsp f3, f4
    lfs f0, lbl_808839E0
    stfs f4, 0x153c(r28)
    fcmpo cr0, f0, f3
    bge lbl_fn_802826A0_00000A68
    lfs f0, lbl_808839E4
    fcmpo cr0, f3, f0
    bge lbl_fn_802826A0_00000A68
    li r3, 0x0
    b lbl_fn_802826A0_00000ACC
lbl_fn_802826A0_00000A68:
    li r0, 0x0
    stw r30, 0x1538(r28)
    stw r29, 0x1540(r28)
    stw r0, 0x14d8(r28)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f3, lbl_8088394C
    li r5, 0x9
    lfs f0, lbl_808839AC
    li r0, 0x1
    stw r3, 0x590(r28)
    addi r3, r28, 0xb0
    lfs f1, lbl_80883948
    li r4, 0x0
    stw r5, 0x58c(r28)
    li r5, 0x14d
    lfs f2, lbl_80883988
    li r6, 0x0
    stw r0, 0x3fc(r28)
    li r7, 0x1
    li r8, 0x1
    stfs f3, 0x2fc(r28)
    stfs f0, 0x2e8(r28)
    bl fn_80097C08
    li r3, 0x1
lbl_fn_802826A0_00000ACC:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_l f29, 0xf8(r1), 0, 0
    lfd f29, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    lwz r28, 0xe0(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_802829DC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x5
    bne lbl_fn_802829DC_00000B44
    lwz r0, 0x1530(r3)
    cmpwi r0, 0x1
    bne lbl_fn_802829DC_00000B44
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_802829DC_00000B44:
    addi r3, r31, 0x15a8
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r31
    bl fn_80178A6C
    mr r3, r31
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r31
    bl fn_8016DA4C
    li r0, 0xa
    stw r0, 0x58c(r31)
    lfs f1, lbl_80883948
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_8088394C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883948
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x2e
    lfs f2, lbl_80883988
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r31
    bl fn_800EB7A0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80282AE8(void)
{
    nofralloc
    stwu r1, -0x6a0(r1)
    mflr r0
    stw r0, 0x6a4(r1)
    addi r11, r1, 0x6a0
    bl _savegpr_25
    mr r31, r5
    lwz r5, 0x20(r5)
    mr r30, r3
    bl fn_8035B694
    lis r3, lbl_80785670@ha
    li r29, 0x0
    addi r3, r3, lbl_80785670@l
    stw r3, 0x0(r30)
    addi r3, r30, 0x14d8
    stw r29, 0x14b0(r30)
    stw r29, 0x14b4(r30)
    bl fn_800CB360
    addi r3, r30, 0x14dc
    bl fn_802377B8
    lfs f1, lbl_808839E8
    li r3, 0x3c
    lfs f0, lbl_808839EC
    li r0, 0xf
    stw r3, 0x14e8(r30)
    addi r3, r30, 0x151c
    stw r0, 0x14ec(r30)
    stfs f1, 0x14f0(r30)
    stfs f0, 0x14f8(r30)
    bl fn_800CB360
    addi r3, r30, 0x1520
    bl fn_802377B8
    lfs f1, lbl_808839F8
    li r0, 0x5a
    lfs f3, lbl_808839F0
    addi r3, r30, 0x15a4
    lfs f2, lbl_808839F4
    lfs f0, lbl_808839FC
    stfs f3, 0x152c(r30)
    stfs f2, 0x1534(r30)
    stw r29, 0x153c(r30)
    stfs f1, 0x1540(r30)
    stfs f1, 0x1544(r30)
    stw r29, 0x1554(r30)
    stw r29, 0x1570(r30)
    stw r29, 0x1574(r30)
    stw r29, 0x1578(r30)
    stw r29, 0x157c(r30)
    stw r29, 0x1580(r30)
    stw r29, 0x1584(r30)
    stw r29, 0x158c(r30)
    stw r0, 0x1590(r30)
    stw r0, 0x1594(r30)
    stw r29, 0x159c(r30)
    stfs f0, 0x15a0(r30)
    bl fn_802377B8
    addi r3, r30, 0x15b0
    bl fn_802377B8
    addi r28, r30, 0x15bc
    mr r3, r28
    bl fn_80473E74
    lfs f0, lbl_808839FC
    lis r3, lbl_8078FBB0@ha
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x0(r28)
    lis r3, lbl_80745100@ha
    addi r27, r1, 0x38
    addi r28, r3, lbl_80745100@l
    stfs f0, 0x15c4(r30)
    mr r3, r28
    stfs f0, 0x15c8(r30)
    stfs f0, 0x15cc(r30)
    stfs f0, 0x15d0(r30)
    stw r29, 0x15d4(r30)
    stw r29, 0x15d8(r30)
    stw r29, 0x38(r1)
    stw r29, 0x3c(r1)
    stw r29, 0x40(r1)
    bl strlen
    mr r26, r3
    mr r3, r27
    mr r4, r26
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r27
    stb r0, 0x18(r1)
    mr r6, r28
    add r7, r28, r26
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r27, r28, 0x18
    stw r29, 0x2c(r1)
    addi r26, r1, 0x2c
    stw r29, 0x30(r1)
    mr r3, r27
    stw r29, 0x34(r1)
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
    addi r3, r31, 0x2c
    bl strlen
    lis r4, lbl_807772D0@ha
    mr r26, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x44(r1)
    addi r3, r1, 0x54
    li r5, 0x400
    stw r29, 0x48(r1)
    li r4, 0x0
    stw r29, 0x4c(r1)
    stw r29, 0x50(r1)
    stw r29, 0x674(r1)
    bl memset
    addi r3, r1, 0x654
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x44(r1)
    mr r5, r26
    addi r3, r1, 0x44
    addi r4, r31, 0x2c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x44
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x44(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
lbl_fn_80282AE8_00000E48:
    addi r3, r1, 0x44
    bl fn_8005B3CC
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_80282AE8_00000EE0
    addi r4, r28, 0x2d
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80282AE8_00000EE0
    mr r3, r26
    addi r4, r28, 0x2e
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80282AE8_00000ED0
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80282AE8_00000E9C
    lbz r0, 0x2c(r1)
    clrlwi r25, r0, 25
    b lbl_fn_80282AE8_00000EA0
lbl_fn_80282AE8_00000E9C:
    lwz r25, 0x30(r1)
lbl_fn_80282AE8_00000EA0:
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
lbl_fn_80282AE8_00000ED0:
    addi r3, r1, 0x44
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80282AE8_00000E48
lbl_fn_80282AE8_00000EE0:
    addi r3, r1, 0x20
    addi r4, r1, 0x38
    addi r5, r1, 0x2c
    bl fn_8006AFF8
    lwz r0, 0x20(r1)
    addi r3, r30, 0x15bc
    srwi. r0, r0, 31
    bne lbl_fn_80282AE8_00000F08
    addi r4, r1, 0x21
    b lbl_fn_80282AE8_00000F0C
lbl_fn_80282AE8_00000F08:
    lwz r4, 0x28(r1)
lbl_fn_80282AE8_00000F0C:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_80883A00
    li r3, 0x3f8
    stfs f0, 0x568(r30)
    bl fn_80219E6C
    stw r3, 0x1530(r30)
    li r3, 0x3f7
    bl fn_80219E6C
    lis r31, lbl_80745100@ha
    stw r3, 0x14f4(r30)
    addi r31, r31, lbl_80745100@l
    addi r3, r30, 0x15a4
    addi r4, r31, 0x37
    bl fn_8023780C
    addi r3, r30, 0x1520
    addi r4, r31, 0x4c
    bl fn_8023780C
    addi r3, r30, 0x14dc
    addi r4, r31, 0x62
    bl fn_8023780C
    addi r3, r30, 0x15b0
    addi r4, r31, 0x77
    bl fn_8023780C
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80282AE8_00000F88
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_80282AE8_00000F88:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80282AE8_00000F9C
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_80282AE8_00000F9C:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80282AE8_00000FB0
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_80282AE8_00000FB0:
    addi r11, r1, 0x6a0
    mr r3, r30
    bl _restgpr_25
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}

asm void fn_80282EA4(void)
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
    beq lbl_fn_80282EA4_0000110C
    addic. r0, r3, 0x15d4
    beq lbl_fn_80282EA4_00001018
    lwz r4, 0x15d4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80282EA4_00001018
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80282EA4_00001018
    bl fn_800897D8
lbl_fn_80282EA4_00001018:
    addic. r3, r29, 0x15bc
    beq lbl_fn_80282EA4_00001028
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80282EA4_00001028:
    addic. r31, r29, 0x15b0
    beq lbl_fn_80282EA4_00001048
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80282EA4_00001048
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80282EA4_00001048:
    addic. r31, r29, 0x15a4
    beq lbl_fn_80282EA4_00001068
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80282EA4_00001068
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80282EA4_00001068:
    addic. r4, r29, 0x1570
    beq lbl_fn_80282EA4_00001098
    beq lbl_fn_80282EA4_00001098
    beq lbl_fn_80282EA4_00001098
    beq lbl_fn_80282EA4_00001098
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80282EA4_00001098
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80282EA4_00001098:
    addic. r31, r29, 0x1520
    beq lbl_fn_80282EA4_000010B8
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80282EA4_000010B8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80282EA4_000010B8:
    addi r3, r29, 0x151c
    li r4, -0x1
    bl fn_800CB3A0
    addic. r31, r29, 0x14dc
    beq lbl_fn_80282EA4_000010E4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80282EA4_000010E4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80282EA4_000010E4:
    addi r3, r29, 0x14d8
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_80282EA4_0000110C
    mr r3, r29
    bl dtor_80084684
lbl_fn_80282EA4_0000110C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80283004(void)
{
    nofralloc
    stwu r1, -0x6e0(r1)
    mflr r0
    stw r0, 0x6e4(r1)
    addi r11, r1, 0x6a0
    stfd f31, 0x6d0(r1)
    psq_st f31, 0x6d8(r1), 0, 0
    stfd f30, 0x6c0(r1)
    psq_st f30, 0x6c8(r1), 0, 0
    stfd f29, 0x6b0(r1)
    psq_st f29, 0x6b8(r1), 0, 0
    stfd f28, 0x6a0(r1)
    psq_st f28, 0x6a8(r1), 0, 0
    bl _savegpr_17
    mr r18, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_80283004_000018E0
    lwz r3, 0x1438(r18)
    cmpwi r3, 0x0
    beq lbl_fn_80283004_0000118C
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80283004_000018E0
lbl_fn_80283004_0000118C:
    addi r3, r18, 0x15a4
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80283004_000018E0
    addi r3, r18, 0x1520
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80283004_000018E0
    addi r3, r18, 0x14dc
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80283004_000018E0
    addi r3, r18, 0x15bc
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_80283004_000018E0
    addi r3, r18, 0x15bc
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_80283004_00001848
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80283004_00001848
    lwz r0, 0x10d8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80283004_00001848
    addi r3, r18, 0x15bc
    bl fn_8047059C
    mr r20, r3
    addi r3, r18, 0x15bc
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r22, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x28(r1)
    mr r19, r3
    addi r3, r1, 0x38
    stw r22, 0x2c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r22, 0x30(r1)
    stw r22, 0x34(r1)
    stw r22, 0x658(r1)
    bl memset
    addi r3, r1, 0x638
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x28(r1)
    mr r4, r19
    mr r5, r20
    addi r3, r1, 0x28
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x28
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x28(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r4, lbl_80745100@ha
    lis r3, __files@ha
    lfs f31, lbl_80883A04
    addi r25, r4, lbl_80745100@l
    lfs f30, lbl_80883A0C
    addi r26, r3, __files@l
    lfs f28, lbl_808839EC
    addi r20, r1, 0x14
    lfs f29, lbl_80883A08
    lis r29, 0xcccd
    lis r24, 0x4000
    lis r28, 0x1555
    lis r30, 0x2aab
    lis r31, lbl_80775A88@ha
lbl_fn_80283004_000012B8:
    addi r3, r1, 0x28
    bl fn_8005B3CC
    mr r17, r3
    addi r4, r25, 0x90
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80283004_000012FC
    addi r3, r1, 0x28
    bl fn_8005B3CC
    addi r4, r25, 0x9d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80283004_00001838
    lwz r0, 0x157c(r18)
    ori r0, r0, 0x2
    stw r0, 0x157c(r18)
    b lbl_fn_80283004_00001838
lbl_fn_80283004_000012FC:
    mr r3, r17
    addi r4, r25, 0xa0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80283004_00001338
    addi r3, r1, 0x28
    bl fn_8005B3CC
    addi r4, r25, 0x9d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80283004_00001838
    lwz r0, 0x157c(r18)
    ori r0, r0, 0x4
    stw r0, 0x157c(r18)
    b lbl_fn_80283004_00001838
lbl_fn_80283004_00001338:
    mr r3, r17
    addi r4, r25, 0xa7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80283004_00001374
    addi r3, r1, 0x28
    bl fn_8005B3CC
    addi r4, r25, 0x9d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80283004_00001838
    lwz r0, 0x157c(r18)
    ori r0, r0, 0x1
    stw r0, 0x157c(r18)
    b lbl_fn_80283004_00001838
lbl_fn_80283004_00001374:
    mr r3, r17
    addi r4, r25, 0xac
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80283004_0000161C
lbl_fn_80283004_00001388:
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC12C
    lwz r4, lbl_8087F430
    mr r23, r3
    li r5, 0x0
    li r6, 0x0
    lwz r4, 0x10d8(r4)
    lwz r0, 0x78(r4)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80283004_000013E0
lbl_fn_80283004_000013B8:
    lwz r7, 0x7c(r4)
    lwzx r0, r7, r6
    cmpw r3, r0
    bne lbl_fn_80283004_000013D4
    mulli r0, r5, 0x28
    add r21, r7, r0
    b lbl_fn_80283004_000013E4
lbl_fn_80283004_000013D4:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_80283004_000013B8
lbl_fn_80283004_000013E0:
    li r21, 0x0
lbl_fn_80283004_000013E4:
    cmpwi r21, 0x0
    beq lbl_fn_80283004_00001610
    lwz r4, 0x1574(r18)
    lwz r3, 0x1578(r18)
    cmplw r4, r3
    bge lbl_fn_80283004_00001418
    addi r4, r4, 0x1
    lwz r3, 0x1570(r18)
    slwi r0, r4, 2
    stw r4, 0x1574(r18)
    add r3, r3, r0
    stw r21, -0x4(r3)
    b lbl_fn_80283004_00001610
lbl_fn_80283004_00001418:
    subi r0, r24, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_80283004_0000143C
    addi r4, r25, 0xb7
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80283004_0000143C:
    lwz r3, 0x1574(r18)
    addi r4, r18, 0x1578
    lwz r27, 0x1578(r18)
    subi r0, r24, 0x1
    addi r3, r3, 0x1
    stw r22, 0x14(r1)
    subf r3, r27, r3
    subf r0, r27, r0
    cmplw r3, r0
    stw r22, 0x18(r1)
    stw r22, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r22, 0x24(r1)
    stw r3, 0x8(r1)
    ble lbl_fn_80283004_0000148C
    addi r4, r25, 0xb7
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80283004_0000148C:
    addi r0, r28, 0x5555
    cmplw r27, r0
    bge lbl_fn_80283004_000014D4
    addi r4, r27, 0x1
    subi r5, r29, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x8(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_80283004_000014C8
    addi r3, r1, 0x8
lbl_fn_80283004_000014C8:
    lwz r0, 0x0(r3)
    add r19, r27, r0
    b lbl_fn_80283004_00001510
lbl_fn_80283004_000014D4:
    subi r0, r30, 0x5556
    cmplw r27, r0
    bge lbl_fn_80283004_0000150C
    addi r3, r27, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80283004_00001500
    addi r3, r1, 0x8
lbl_fn_80283004_00001500:
    lwz r0, 0x0(r3)
    add r19, r27, r0
    b lbl_fn_80283004_00001510
lbl_fn_80283004_0000150C:
    subi r19, r24, 0x1
lbl_fn_80283004_00001510:
    subi r0, r24, 0x1
    cmplw r19, r0
    ble lbl_fn_80283004_00001530
    addi r4, r25, 0xb7
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80283004_00001530:
    slwi r3, r19, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_80283004_00001558
    addi r3, r26, 0xa0
    addi r4, r31, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80283004_00001558:
    lwz r5, 0x1574(r18)
    lwz r3, 0x18(r1)
    slwi r0, r5, 2
    stw r19, 0x1c(r1)
    slwi r4, r3, 2
    addi r3, r3, 0x1
    add r0, r27, r0
    stw r3, 0x18(r1)
    stwx r21, r4, r0
    lwz r0, 0x1574(r18)
    lwz r19, 0x1570(r18)
    slwi r0, r0, 2
    add r0, r19, r0
    mr r4, r19
    subf r0, r19, r0
    srawi r0, r0, 2
    addze r21, r0
    subf r0, r21, r5
    stw r0, 0x24(r1)
    slwi r17, r21, 2
    slwi r0, r0, 2
    mr r5, r17
    add r3, r27, r0
    bl memcpy
    mr r3, r19
    mr r5, r17
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    cmpwi r20, 0x0
    lwz r3, 0x1570(r18)
    add r5, r0, r21
    mr r0, r27
    lwz r6, 0x1578(r18)
    lwz r4, 0x1c(r1)
    stw r4, 0x1578(r18)
    stw r6, 0x1c(r1)
    stw r0, 0x1570(r18)
    stw r3, 0x14(r1)
    stw r5, 0x1574(r18)
    stw r22, 0x18(r1)
    beq lbl_fn_80283004_00001610
    cmpwi r3, 0x0
    beq lbl_fn_80283004_00001610
    stw r22, 0x18(r1)
    bl dtor_80084684
lbl_fn_80283004_00001610:
    cmpwi r23, 0x0
    bne lbl_fn_80283004_00001388
    b lbl_fn_80283004_00001838
lbl_fn_80283004_0000161C:
    mr r3, r17
    addi r4, r25, 0xcb
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80283004_00001644
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14e8(r18)
    b lbl_fn_80283004_00001838
lbl_fn_80283004_00001644:
    mr r3, r17
    addi r4, r25, 0xdc
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80283004_0000166C
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14ec(r18)
    b lbl_fn_80283004_00001838
lbl_fn_80283004_0000166C:
    mr r3, r17
    addi r4, r25, 0xee
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80283004_00001694
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x152c(r18)
    b lbl_fn_80283004_00001838
lbl_fn_80283004_00001694:
    mr r3, r17
    addi r4, r25, 0xf9
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80283004_000016BC
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x14f0(r18)
    b lbl_fn_80283004_00001838
lbl_fn_80283004_000016BC:
    mr r3, r17
    addi r4, r25, 0x104
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80283004_000016E4
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1558(r18)
    b lbl_fn_80283004_00001838
lbl_fn_80283004_000016E4:
    mr r3, r17
    addi r4, r25, 0x110
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80283004_0000170C
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x155c(r18)
    b lbl_fn_80283004_00001838
lbl_fn_80283004_0000170C:
    mr r3, r17
    addi r4, r25, 0x11c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80283004_00001750
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    fmuls f0, f31, f1
    stfs f0, 0x1534(r18)
    fsubs f0, f0, f28
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f29
    bge lbl_fn_80283004_00001838
    stfs f30, 0x1534(r18)
    b lbl_fn_80283004_00001838
lbl_fn_80283004_00001750:
    mr r3, r17
    addi r4, r25, 0x127
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80283004_0000177C
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    fmuls f0, f31, f1
    stfs f0, 0x14f8(r18)
    b lbl_fn_80283004_00001838
lbl_fn_80283004_0000177C:
    mr r3, r17
    addi r4, r25, 0x133
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80283004_000017A8
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1530(r18)
    b lbl_fn_80283004_00001838
lbl_fn_80283004_000017A8:
    mr r3, r17
    addi r4, r25, 0x13c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80283004_000017D4
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14f4(r18)
    b lbl_fn_80283004_00001838
lbl_fn_80283004_000017D4:
    mr r3, r17
    addi r4, r25, 0x145
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80283004_00001808
    addi r3, r1, 0x28
    bl fn_8005B3CC
    mr r5, r3
    addi r3, r18, 0x14fc
    addi r4, r25, 0x154
    crclr 6
    bl sprintf
    b lbl_fn_80283004_00001838
lbl_fn_80283004_00001808:
    mr r3, r17
    addi r4, r25, 0x157
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80283004_00001838
    addi r3, r1, 0x28
    bl fn_8005B3CC
    mr r5, r3
    addi r3, r18, 0x14b8
    addi r4, r25, 0x154
    crclr 6
    bl sprintf
lbl_fn_80283004_00001838:
    addi r3, r1, 0x28
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80283004_000012B8
lbl_fn_80283004_00001848:
    lwz r4, 0x7ec(r18)
    lis r3, lbl_80745100@ha
    lwz r0, 0x15d4(r18)
    addi r3, r3, lbl_80745100@l
    ori r4, r4, 0x1c0
    oris r4, r4, 0x1
    cmpwi r0, 0x0
    ori r0, r4, 0x4218
    oris r0, r0, 0x380
    stw r0, 0x7ec(r18)
    addi r4, r3, 0x15e
    bne lbl_fn_80283004_00001894
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80283004_00001894
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x15d4(r18)
    b lbl_fn_80283004_00001898
lbl_fn_80283004_00001894:
    li r3, 0x0
lbl_fn_80283004_00001898:
    lis r4, lbl_80745100@ha
    addi r5, r18, 0x15d8
    addi r4, r4, lbl_80745100@l
    li r6, 0x0
    addi r4, r4, 0x16d
    li r7, 0x0
    bl fn_80087994
    lwz r3, 0x1438(r18)
    cmpwi r3, 0x0
    beq lbl_fn_80283004_000018D8
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r18)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_80283004_000018D8:
    li r3, 0x1
    b lbl_fn_80283004_000018E4
lbl_fn_80283004_000018E0:
    li r3, 0x0
lbl_fn_80283004_000018E4:
    addi r11, r1, 0x6a0
    psq_l f31, 0x6d8(r1), 0, 0
    lfd f31, 0x6d0(r1)
    psq_l f30, 0x6c8(r1), 0, 0
    lfd f30, 0x6c0(r1)
    psq_l f29, 0x6b8(r1), 0, 0
    lfd f29, 0x6b0(r1)
    psq_l f28, 0x6a8(r1), 0, 0
    lfd f28, 0x6a0(r1)
    bl _restgpr_17
    lwz r0, 0x6e4(r1)
    mtlr r0
    addi r1, r1, 0x6e0
    blr
}

asm void fn_802837F4(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stw r31, 0x8c(r1)
    mr r31, r3
    stw r30, 0x88(r1)
    lwz r0, 0x58c(r3)
    lwz r4, 0xd1c(r3)
    cmpwi r0, 0x9
    stw r4, 0xd20(r3)
    bne lbl_fn_802837F4_0000195C
    li r0, 0x0
    stw r0, 0x1454(r3)
    b lbl_fn_802837F4_00001968
lbl_fn_802837F4_0000195C:
    li r0, 0x1
    stw r0, 0x1454(r3)
    stw r4, 0x1580(r3)
lbl_fn_802837F4_00001968:
    lwz r0, 0xd18(r3)
    lwz r4, 0x14b0(r3)
    lwz r6, 0x1580(r3)
    cmpwi r0, 0x0
    addi r5, r4, 0x1
    stw r6, 0xd1c(r3)
    stw r5, 0x14b0(r3)
    beq lbl_fn_802837F4_00001990
    cmpwi r6, 0x0
    bne lbl_fn_802837F4_000019CC
lbl_fn_802837F4_00001990:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_802837F4_000019C0
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_802837F4_00001D48
lbl_fn_802837F4_000019C0:
    mr r3, r31
    bl fn_802847CC
    b lbl_fn_802837F4_00001D48
lbl_fn_802837F4_000019CC:
    lwz r0, 0x58c(r3)
    cmplwi r0, 0xf
    bgt lbl_fn_802837F4_00001D0C
    lis r4, jumptable_80785630@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80785630@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    mr r3, r31
    bl fn_80158BB4
    cmpwi r3, 0x0
    beq lbl_fn_802837F4_00001A2C
    lwz r0, 0x55c(r31)
    li r3, 0x6
    stw r3, 0x58c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_802837F4_00001A2C
    lwz r0, 0x560(r31)
    cmpwi r0, 0x4
    bne lbl_fn_802837F4_00001A2C
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
lbl_fn_802837F4_00001A2C:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883A10
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802837F4_00001D48
    lfs f0, lbl_80883A14
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802837F4_00001D48
    mr r3, r31
    bl fn_80144710
    lwz r30, 0x590(r31)
    li r3, 0x3f3
    bl fn_80219E6C
    mr r7, r3
    lwz r3, lbl_8087F048
    lfs f1, lbl_808839F8
    mr r6, r31
    mr r8, r30
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    b lbl_fn_802837F4_00001D48
    mr r3, r31
    bl fn_80285064
    b lbl_fn_802837F4_00001D48
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_802837F4_00001D48
    mr r3, r31
    bl fn_802857B4
    b lbl_fn_802837F4_00001D48
    mr r3, r31
    bl fn_80285B7C
    b lbl_fn_802837F4_00001D48
    mr r3, r31
    bl fn_80285FA0
    b lbl_fn_802837F4_00001D48
    mr r3, r31
    bl fn_802868A0
    b lbl_fn_802837F4_00001D48
    lwz r0, 0x158c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802837F4_00001D48
    lwz r4, 0x1590(r3)
    lwz r0, 0x159c(r3)
    addi r4, r4, 0x1
    stw r4, 0x1590(r3)
    cmpw r4, r0
    blt lbl_fn_802837F4_00001B84
    lwz r4, 0x14f4(r3)
    li r0, 0x0
    stw r0, 0x14b0(r3)
    cmpwi r4, 0x0
    stw r0, 0x158c(r3)
    beq lbl_fn_802837F4_00001B28
    lwz r0, 0x68(r4)
    b lbl_fn_802837F4_00001B2C
lbl_fn_802837F4_00001B28:
    li r0, 0x5a
lbl_fn_802837F4_00001B2C:
    stw r0, 0x1594(r3)
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
    lwz r0, 0x5c0(r31)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r31)
    b lbl_fn_802837F4_00001D48
lbl_fn_802837F4_00001B84:
    lfs f4, 0x528(r3)
    lis r0, 0x4330
    lfs f3, 0x1548(r3)
    lis r4, lbl_807450E0@ha
    lfs f2, 0x530(r3)
    addi r5, r1, 0x8
    fadds f5, f4, f3
    lfs f0, 0x1550(r3)
    psq_l f1, 0x528(r3), 0, 0
    fadds f0, f2, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x154c(r3)
    stfs f5, 0x528(r3)
    fadds f4, f4, f3
    lfd f5, lbl_807450E0@l(r4)
    stfs f0, 0x530(r3)
    lfs f3, lbl_80883A18
    stfs f4, 0x52c(r3)
    lfs f0, 0x154c(r3)
    lwz r4, lbl_8087F0A8
    stw r0, 0x78(r1)
    lwz r0, 0x30(r4)
    psq_st f1, 0x0(r5), 0, 0
    mullw r0, r0, r0
    stfs f2, 0x10(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x7c(r1)
    lfd f4, 0x78(r1)
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x154c(r3)
    b lbl_fn_802837F4_00001D48
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802837F4_00001D48
    lwz r3, 0x14f4(r31)
    li r0, 0x0
    stw r0, 0x14b0(r31)
    cmpwi r3, 0x0
    stw r0, 0x158c(r31)
    beq lbl_fn_802837F4_00001C44
    lwz r0, 0x68(r3)
    b lbl_fn_802837F4_00001C48
lbl_fn_802837F4_00001C44:
    li r0, 0x5a
lbl_fn_802837F4_00001C48:
    stw r0, 0x1594(r31)
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
    b lbl_fn_802837F4_00001D48
    cmpwi r5, 0x1c2
    blt lbl_fn_802837F4_00001D48
    lwz r4, 0x14f4(r3)
    li r0, 0x0
    stw r0, 0x14b0(r3)
    cmpwi r4, 0x0
    stw r0, 0x158c(r3)
    beq lbl_fn_802837F4_00001CBC
    lwz r0, 0x68(r4)
    b lbl_fn_802837F4_00001CC0
lbl_fn_802837F4_00001CBC:
    li r0, 0x5a
lbl_fn_802837F4_00001CC0:
    stw r0, 0x1594(r3)
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
    b lbl_fn_802837F4_00001D48
lbl_fn_802837F4_00001D0C:
    lwz r4, 0x55c(r3)
    subi r0, r4, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_802837F4_00001D38
    li r0, 0x3
    stw r0, 0x55c(r3)
    lwz r4, 0x1580(r31)
    mr r3, r31
    lfs f1, lbl_80883A1C
    li r5, 0x0
    bl fn_80170A20
lbl_fn_802837F4_00001D38:
    mr r3, r31
    bl fn_802847CC
    mr r3, r31
    bl fn_80284CC8
lbl_fn_802837F4_00001D48:
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    addi r30, r1, 0x38
    psq_l f1, 0x528(r31), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lwz r0, 0x58c(r31)
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883A20
    cmpwi r0, 0x8
    lfs f2, 0x530(r31)
    fsubs f0, f3, f0
    stfs f2, 0x40(r1)
    stfs f0, 0x3c(r1)
    bne lbl_fn_802837F4_00001E28
    lfs f3, lbl_808839F8
    addi r3, r1, 0x48
    lfs f0, lbl_808839FC
    li r4, 0x79
    stfs f3, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f0, 0x1c(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x48
    mr r5, r4
    bl fn_805F93C0
    lfs f5, lbl_80883A24
    lfs f0, 0x18(r1)
    lfs f3, 0x14(r1)
    fmuls f7, f0, f5
    lfs f0, 0x3c(r1)
    fmuls f8, f3, f5
    lfs f3, 0x38(r1)
    lfs f6, 0x1c(r1)
    fadds f0, f0, f7
    fadds f4, f3, f8
    lfs f3, 0x5b0(r31)
    stfs f0, 0x3c(r1)
    fmuls f5, f6, f5
    lfs f0, 0x40(r1)
    stfs f4, 0x38(r1)
    fadds f2, f0, f5
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x614(r31), 0, 0
    lfs f0, 0x618(r31)
    stfs f8, 0x2c(r1)
    fadds f0, f0, f3
    stfs f7, 0x30(r1)
    stfs f5, 0x34(r1)
    stfs f2, 0x40(r1)
    stfs f3, 0x620(r31)
    stfs f2, 0x61c(r31)
    stfs f0, 0x618(r31)
lbl_fn_802837F4_00001E28:
    addi r4, r1, 0x38
    lfs f3, 0x5b0(r31)
    lfs f0, 0x52c(r31)
    addi r3, r1, 0x20
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    fadds f0, f0, f3
    lfs f2, 0x40(r1)
    stfs f0, 0x24(r1)
    psq_st f1, 0x5f4(r31), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x5fc(r31)
    psq_st f1, 0x600(r31), 0, 0
    stfs f2, 0x608(r31)
    stfs f3, 0x60c(r31)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r0, 0xa4(r1)
    stfs f2, 0x28(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}
