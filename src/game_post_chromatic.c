#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80013D60(void);
extern void dtor_80084684(void);
extern void fn_8003E4A4(void);
extern void fn_8004212C(void);
extern void fn_80057A64(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_80063D3C(void);
extern void fn_8006AFF8(void);
extern void fn_8006CA80(void);
extern void fn_80087994(void);
extern void fn_80088FAC(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_80092814(void);
extern void fn_80092954(void);
extern void fn_80094958(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800D8BB4(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800EB7A0(void);
extern void fn_800EC254(void);
extern void fn_800EC2C4(void);
extern void fn_800EC440(void);
extern void fn_800EC534(void);
extern void fn_800EC5BC(void);
extern void fn_800EC654(void);
extern void fn_800ED42C(void);
extern void fn_800ED4D8(void);
extern void fn_800ED4E0(void);
extern void fn_800EDFE8(void);
extern void fn_800EE360(void);
extern void fn_800F52F0(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800F8C6C(void);
extern void fn_801231D0(void);
extern void fn_8013655C(void);
extern void fn_80144710(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_80151448(void);
extern void fn_8015495C(void);
extern void fn_8016DA4C(void);
extern void fn_8016DDB0(void);
extern void fn_8016E970(void);
extern void fn_80170A20(void);
extern void fn_801765D8(void);
extern void fn_80178A6C(void);
extern void fn_8020A780(void);
extern void fn_8020A81C(void);
extern void fn_80219E6C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_8023A8B4(void);
extern void fn_802660FC(void);
extern void fn_802BABC0(void);
extern void fn_802CF054(void);
extern void fn_802CF3AC(void);
extern void fn_802CF728(void);
extern void fn_802CFAE4(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_80370A78(void);
extern void fn_803E3384(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80682428(void);
extern void fn_80682544(void);

/* External data declarations */
extern u8 lbl_80746EC8[];
extern u8 lbl_80746ED0[];
extern u8 lbl_80746ED8[];
extern u8 lbl_80746EE0[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80786B18[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C83C8[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F8A0;
extern u32 lbl_808844C4;
extern u32 lbl_808844C8;
extern u32 lbl_808844CC;
extern u32 lbl_808844D0;
extern u32 lbl_808844D4;
extern u32 lbl_808844D8;
extern u32 lbl_808844E0;
extern u32 lbl_808844E4;
extern u32 lbl_808844E8;
extern u32 lbl_808844EC;
extern u32 lbl_808844F0;
extern u32 lbl_808844F4;
extern u32 lbl_808844F8;
extern u32 lbl_808844FC;
extern u32 lbl_80884500;
extern u32 lbl_80884504;
extern u32 lbl_80884508;
extern u32 lbl_8088450C;
extern u32 lbl_80884510;
extern u32 lbl_80884514;
extern u32 lbl_80884518;

/* Function declarations */
void fn_802CCB7C(void);
void fn_802CCBD4(void);
void fn_802CCC24(void);
void fn_802CCD48(void);
void fn_802CCE94(void);
void fn_802CCFD0(void);
void fn_802CCFD8(void);
void fn_802CD2E4(void);
void fn_802CD3BC(void);
void fn_802CD73C(void);
void fn_802CE42C(void);
void fn_802CE430(void);

asm void fn_802CCB7C(void)
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
    beq lbl_fn_802CCB7C_0000003C
    li r4, 0x0
    bl fn_802CD2E4
    cmpwi r31, 0x0
    ble lbl_fn_802CCB7C_0000003C
    mr r3, r30
    bl dtor_80084684
lbl_fn_802CCB7C_0000003C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802CCBD4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
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

asm void fn_802CCC24(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_802CCC24_000000E0
    lwz r4, 0x560(r3)
    subi r0, r4, 0x16
    cmplwi r0, 0x1
    bgt lbl_fn_802CCC24_000000E0
    li r0, 0x0
    stw r0, 0x58c(r3)
lbl_fn_802CCC24_000000E0:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802CCC24_000001B8
    mr r3, r31
    bl fn_802CFAE4
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
    li r0, 0x2
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_808844C4
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808844C8
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x2e
    lfs f2, lbl_808844CC
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lis r5, lbl_807C7030@ha
    li r0, 0x1e
    addi r5, r5, lbl_807C7030@l
    mr r3, r31
    psq_l f1, 0x0(r5), 0, 0
    li r4, 0x1
    lfs f2, 0x8(r5)
    stfs f2, 0x57c(r31)
    psq_st f1, 0x574(r31), 0, 0
    stw r0, 0x1434(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
lbl_fn_802CCC24_000001B8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802CCD48(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r4, lbl_80746EC8@ha
    stw r0, 0x64(r1)
    addi r5, r1, 0x20
    addi r7, r1, 0x14
    addi r6, r1, 0x38
    stfd f31, 0x50(r1)
    addi r4, r4, lbl_80746EC8@l
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r3
    lfs f4, 0x52c(r3)
    lfs f0, 0x5a8(r3)
    lfs f3, 0x528(r3)
    fadds f6, f4, f0
    lfs f0, 0x5a4(r3)
    lfs f31, 0x5b0(r3)
    fadds f7, f3, f0
    stfs f6, 0x24(r1)
    lfs f0, lbl_808844D0
    stfs f7, 0x20(r1)
    fmuls f5, f31, f0
    lfs f4, 0x530(r3)
    psq_l f1, 0x0(r5), 0, 0
    li r5, 0x0
    psq_st f1, 0x614(r3), 0, 0
    lfs f3, 0x5ac(r3)
    stfs f7, 0x14(r1)
    fadds f2, f4, f3
    lfs f0, 0x618(r3)
    stfs f6, 0x18(r1)
    fadds f4, f0, f5
    lfs f3, lbl_808844D4
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f0, 0x3c(r1)
    stfs f5, 0x620(r3)
    fmadds f0, f3, f31, f0
    stfs f2, 0x28(r1)
    stfs f2, 0x61c(r3)
    stfs f4, 0x618(r3)
    addi r3, r3, 0xb0
    stfs f2, 0x1c(r1)
    stfs f2, 0x40(r1)
    stfs f0, 0x3c(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802CCD48_00000298
    li r5, 0x0
    b lbl_fn_802CCD48_000002A4
lbl_fn_802CCD48_00000298:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_802CCD48_000002A4:
    lfs f0, 0x2c(r5)
    addi r4, r1, 0x8
    lfs f3, 0x1c(r5)
    addi r3, r1, 0x2c
    lfs f4, 0xc(r5)
    fmr f2, f0
    stfs f4, 0x8(r1)
    addi r5, r1, 0x38
    stfs f3, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x34(r1)
    lfs f2, 0x40(r1)
    psq_st f1, 0x5f4(r31), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x5fc(r31)
    lfs f2, 0x34(r1)
    psq_st f1, 0x600(r31), 0, 0
    stfs f2, 0x608(r31)
    stfs f31, 0x60c(r31)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r0, 0x64(r1)
    stfs f0, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_802CCE94(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802CCE94_00000430
    lbz r0, 0x1548(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802CCE94_00000438
    lwz r0, 0x1434(r31)
    cmpwi r0, 0x0
    ble lbl_fn_802CCE94_00000410
    cmpwi r0, 0x1e
    bne lbl_fn_802CCE94_0000037C
    mr r3, r31
    bl fn_800EB7A0
    b lbl_fn_802CCE94_00000400
lbl_fn_802CCE94_0000037C:
    cmpwi r0, 0xf
    bne lbl_fn_802CCE94_00000400
    lfs f0, lbl_808844C8
    li r3, -0x1
    lfs f1, lbl_808844C4
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r31, 0x1528
    addi r5, r31, 0xb0
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
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
lbl_fn_802CCE94_00000400:
    lwz r3, 0x1434(r31)
    subi r0, r3, 0x1
    stw r0, 0x1434(r31)
    b lbl_fn_802CCE94_00000438
lbl_fn_802CCE94_00000410:
    lwz r0, 0x12a4(r31)
    mr r3, r31
    ori r0, r0, 0x8000
    stw r0, 0x12a4(r31)
    bl fn_801765D8
    mr r3, r31
    bl fn_800EE360
    b lbl_fn_802CCE94_00000438
lbl_fn_802CCE94_00000430:
    li r0, 0x3c
    stw r0, 0x1450(r31)
lbl_fn_802CCE94_00000438:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802CCFD0(void)
{
    nofralloc
    lfs f1, lbl_808844D8
    blr
}

asm void fn_802CCFD8(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    mr r30, r5
    stw r29, 0x104(r1)
    stw r28, 0x100(r1)
    mr r28, r3
    lwz r5, 0x20(r5)
    bl fn_8035B694
    lis r4, lbl_80786B18@ha
    addi r3, r28, 0x14b0
    addi r4, r4, lbl_80786B18@l
    stw r4, 0x0(r28)
    bl fn_8006CA80
    li r29, 0x0
    stw r29, 0x14b8(r28)
    addi r3, r28, 0x14cc
    stw r29, 0x14bc(r28)
    stw r29, 0x14c0(r28)
    stw r29, 0x14c4(r28)
    stw r29, 0x14c8(r28)
    bl fn_80057A64
    addi r3, r28, 0x14d8
    bl fn_80057A64
    addi r3, r28, 0x14e4
    bl fn_80057A64
    addi r3, r28, 0x14f0
    bl fn_80057A64
    lis r4, lbl_807C83C8@ha
    addi r3, r28, 0x14fc
    addi r4, r4, lbl_807C83C8@l
    bl fn_800D8BB4
    lfs f1, lbl_808844E0
    li r6, 0x407
    lfs f0, lbl_808844E4
    li r5, 0x406
    li r4, 0x3c
    li r0, 0x96
    stw r29, 0x150c(r28)
    addi r3, r28, 0x1528
    stw r6, 0x1510(r28)
    stw r5, 0x1514(r28)
    stfs f1, 0x1518(r28)
    stfs f0, 0x151c(r28)
    stw r4, 0x1520(r28)
    stw r0, 0x1524(r28)
    bl fn_802377B8
    addi r3, r28, 0x1534
    bl fn_802377B8
    stw r29, 0x1540(r28)
    addi r3, r28, 0x1550
    stw r29, 0x1544(r28)
    stb r29, 0x1548(r28)
    stb r29, 0x1549(r28)
    stw r29, 0x154c(r28)
    bl fn_802BABC0
    stw r29, 0x1554(r28)
    mr r3, r28
    bl fn_800F52F0
    li r4, 0x10
    addi r3, r3, 0xe8
    bl fn_802660FC
    mr r3, r28
    bl fn_800F52F0
    li r4, 0x2
    addi r3, r3, 0xe8
    bl fn_802660FC
    mr r3, r28
    bl fn_800F52F0
    li r4, 0x8
    addi r3, r3, 0xe8
    bl fn_802660FC
    mr r3, r28
    bl fn_800F52F0
    li r4, 0x20
    addi r3, r3, 0xe8
    bl fn_802660FC
    lwz r0, 0x7ec(r28)
    lis r29, lbl_80746EE0@ha
    addi r3, r1, 0x2c
    ori r0, r0, 0x40
    stw r0, 0x7ec(r28)
    addi r4, r29, lbl_80746EE0@l
    bl fn_8003E4A4
    addi r29, r29, lbl_80746EE0@l
    addi r3, r1, 0x20
    addi r4, r29, 0x18
    bl fn_8003E4A4
    addi r3, r1, 0x14
    addi r4, r30, 0x2c
    bl fn_8003E4A4
    addi r3, r1, 0x74
    addi r4, r29, 0x2b
    li r5, 0x0
    li r6, 0x0
    bl fn_800EC440
    addi r3, r1, 0xd4
    addi r4, r1, 0x14
    addi r5, r1, 0x74
    bl fn_800EC2C4
    addi r3, r1, 0x74
    li r4, -0x1
    bl fn_800EC534
    addi r3, r1, 0x98
    addi r4, r1, 0xd4
    bl fn_800EC654
    li r30, 0x1
    b lbl_fn_802CCFD8_0000067C
lbl_fn_802CCFD8_00000614:
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    addi r4, r29, 0x2d
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_802CCFD8_00000654
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    mr r4, r3
    addi r3, r1, 0x20
    addi r4, r4, 0x8
    bl fn_8020A780
    b lbl_fn_802CCFD8_00000674
lbl_fn_802CCFD8_00000654:
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    addi r4, r29, 0x36
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802CCFD8_00000674
    stb r30, 0x1549(r28)
lbl_fn_802CCFD8_00000674:
    addi r3, r1, 0x98
    bl fn_800ED4E0
lbl_fn_802CCFD8_0000067C:
    addi r3, r1, 0x38
    addi r4, r1, 0xd4
    bl fn_800EDFE8
    addi r3, r1, 0x98
    addi r4, r1, 0x38
    bl fn_800EC254
    mr r31, r3
    addi r3, r1, 0x38
    li r4, -0x1
    bl fn_800ED42C
    cmpwi r31, 0x0
    bne lbl_fn_802CCFD8_00000614
    addi r3, r1, 0x98
    li r4, -0x1
    bl fn_800ED42C
    addi r3, r1, 0x8
    addi r4, r1, 0x2c
    addi r5, r1, 0x20
    bl fn_8006AFF8
    addi r3, r1, 0x8
    bl fn_8004212C
    lwz r12, 0x14b0(r28)
    mr r4, r3
    addi r3, r28, 0x14b0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r31, lbl_80746EE0@ha
    addi r3, r28, 0x1528
    addi r31, r31, lbl_80746EE0@l
    addi r4, r31, 0x43
    bl fn_8023780C
    addi r3, r28, 0x1534
    addi r4, r31, 0x58
    bl fn_8023780C
    addi r3, r1, 0x8
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0xd4
    li r4, -0x1
    bl fn_800EC5BC
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x20
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x2c
    li r4, -0x1
    bl dtor_80013D60
    lwz r31, 0x10c(r1)
    mr r3, r28
    lwz r30, 0x108(r1)
    lwz r29, 0x104(r1)
    lwz r28, 0x100(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_802CD2E4(void)
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
    beq lbl_fn_802CD2E4_00000820
    addic. r0, r3, 0x1550
    beq lbl_fn_802CD2E4_000007B4
    lwz r4, 0x1550(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802CD2E4_000007B4
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802CD2E4_000007B4
    bl fn_800897D8
lbl_fn_802CD2E4_000007B4:
    addic. r31, r29, 0x1534
    beq lbl_fn_802CD2E4_000007D4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802CD2E4_000007D4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802CD2E4_000007D4:
    addic. r31, r29, 0x1528
    beq lbl_fn_802CD2E4_000007F4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802CD2E4_000007F4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802CD2E4_000007F4:
    addic. r3, r29, 0x14b0
    beq lbl_fn_802CD2E4_00000804
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802CD2E4_00000804:
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_802CD2E4_00000820
    mr r3, r29
    bl dtor_80084684
lbl_fn_802CD2E4_00000820:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802CD3BC(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    stw r0, 0x654(r1)
    stw r31, 0x64c(r1)
    mr r31, r3
    stw r30, 0x648(r1)
    stw r29, 0x644(r1)
    stw r28, 0x640(r1)
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_802CD3BC_00000B9C
    lwz r3, 0x1438(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802CD3BC_00000888
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_802CD3BC_00000B9C
lbl_fn_802CD3BC_00000888:
    addi r3, r31, 0x14b0
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_802CD3BC_00000B9C
    addi r3, r31, 0x1528
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802CD3BC_00000B9C
    addi r3, r31, 0x1534
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802CD3BC_00000B9C
    lwz r0, 0x1550(r31)
    lis r3, lbl_80746EE0@ha
    addi r3, r3, lbl_80746EE0@l
    cmpwi r0, 0x0
    addi r4, r3, 0x6e
    bne lbl_fn_802CD3BC_000008F0
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802CD3BC_000008F0
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x1550(r31)
    mr r29, r3
    b lbl_fn_802CD3BC_000008F4
lbl_fn_802CD3BC_000008F0:
    li r29, 0x0
lbl_fn_802CD3BC_000008F4:
    lis r4, lbl_80746EE0@ha
    mr r3, r29
    addi r30, r4, lbl_80746EE0@l
    addi r5, r31, 0x1554
    addi r4, r30, 0x7e
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_808844E8
    mr r3, r29
    lfs f2, lbl_808844EC
    addi r4, r30, 0x88
    lfs f3, lbl_808844F0
    addi r5, r31, 0x14fc
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lwz r0, 0x7ec(r31)
    addi r3, r31, 0x14b0
    lwz r4, 0x5c(r31)
    ori r0, r0, 0xc2d8
    stw r4, 0x1540(r31)
    oris r0, r0, 0x380
    stw r0, 0x7ec(r31)
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_802CD3BC_00000B70
    addi r3, r31, 0x14b0
    bl fn_8047059C
    mr r28, r3
    addi r3, r31, 0x14b0
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x8(r1)
    mr r29, r3
    addi r3, r1, 0x18
    stw r0, 0xc(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r29
    mr r5, r28
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
lbl_fn_802CD3BC_000009EC:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    mr r28, r3
    addi r4, r30, 0x93
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802CD3BC_00000A1C
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1510(r31)
    b lbl_fn_802CD3BC_00000B60
lbl_fn_802CD3BC_00000A1C:
    mr r3, r28
    addi r4, r30, 0x9f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802CD3BC_00000A44
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1514(r31)
    b lbl_fn_802CD3BC_00000B60
lbl_fn_802CD3BC_00000A44:
    mr r3, r28
    addi r4, r30, 0xab
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802CD3BC_00000A6C
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1518(r31)
    b lbl_fn_802CD3BC_00000B60
lbl_fn_802CD3BC_00000A6C:
    mr r3, r28
    addi r4, r30, 0xba
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802CD3BC_00000A94
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x151c(r31)
    b lbl_fn_802CD3BC_00000B60
lbl_fn_802CD3BC_00000A94:
    mr r3, r28
    addi r4, r30, 0xc9
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802CD3BC_00000ABC
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1520(r31)
    b lbl_fn_802CD3BC_00000B60
lbl_fn_802CD3BC_00000ABC:
    mr r3, r28
    addi r4, r30, 0xd8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802CD3BC_00000AE4
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1524(r31)
    b lbl_fn_802CD3BC_00000B60
lbl_fn_802CD3BC_00000AE4:
    mr r3, r28
    addi r4, r30, 0xe7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802CD3BC_00000B0C
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x150c(r31)
    b lbl_fn_802CD3BC_00000B60
lbl_fn_802CD3BC_00000B0C:
    mr r3, r28
    addi r4, r30, 0xee
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802CD3BC_00000B34
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_8020A81C
    stw r3, 0x1544(r31)
    b lbl_fn_802CD3BC_00000B60
lbl_fn_802CD3BC_00000B34:
    mr r3, r28
    addi r4, r30, 0xfb
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802CD3BC_00000B60
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC12C
    cntlzw r0, r3
    srwi r0, r0, 5
    stb r0, 0x1548(r31)
lbl_fn_802CD3BC_00000B60:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802CD3BC_000009EC
lbl_fn_802CD3BC_00000B70:
    lwz r3, 0x1438(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802CD3BC_00000B94
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_802CD3BC_00000B94:
    li r3, 0x1
    b lbl_fn_802CD3BC_00000BA0
lbl_fn_802CD3BC_00000B9C:
    li r3, 0x0
lbl_fn_802CD3BC_00000BA0:
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    lwz r28, 0x640(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_802CD73C(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    lis r4, 0x4330
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stw r31, 0x11c(r1)
    mr r31, r3
    stw r30, 0x118(r1)
    lwz r5, 0x7e0(r3)
    lwz r0, 0xd1c(r3)
    rlwinm r5, r5, 0, 26, 26
    stw r4, 0x100(r1)
    cmplwi r5, 0x20
    stw r4, 0x108(r1)
    stw r0, 0x14b8(r3)
    bne lbl_fn_802CD73C_00000EAC
    lbz r0, 0x1548(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802CD73C_00000EAC
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_802CD73C_00000EAC
    lwz r3, lbl_8087F430
    li r4, 0xc9
    bl fn_80370A78
    cmpwi r3, 0x1
    bne lbl_fn_802CD73C_00000EAC
    lwz r4, lbl_8087F8A0
    addi r3, r1, 0xc8
    lfs f6, 0x530(r31)
    lwz r30, 0x48(r4)
    lfs f5, 0x52c(r31)
    lfs f0, 0x530(r30)
    lfs f4, 0x52c(r30)
    fsubs f6, f6, f0
    lfs f3, 0x528(r31)
    lfs f0, 0x528(r30)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xcc(r1)
    stfs f0, 0xc8(r1)
    stfs f6, 0xd0(r1)
    bl fn_805F9940
    lbz r0, 0x1549(r31)
    fmr f31, f1
    cmpwi r0, 0x0
    beq lbl_fn_802CD73C_00000D38
    lwz r3, lbl_8087F430
    li r4, 0xc8
    bl fn_80370A78
    cmpwi r3, 0x1
    bne lbl_fn_802CD73C_00000D38
    li r30, 0x0
    stw r30, 0x14bc(r31)
    stw r30, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x7
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_808844EC
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808844E8
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14d
    lfs f2, lbl_808844F4
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x98(r12)
    mtctr r12
    bctrl
    lwz r0, 0x5c0(r31)
    mr r3, r31
    li r4, 0x1
    ori r0, r0, 0x1
    stw r0, 0x5c0(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    stw r30, 0x154c(r31)
    b lbl_fn_802CD73C_00000EAC
lbl_fn_802CD73C_00000D38:
    lfs f0, lbl_808844F8
    fcmpo cr0, f31, f0
    bge lbl_fn_802CD73C_00000EAC
    mr r3, r30
    li r4, 0x0
    bl fn_8016DDB0
    cmpwi r3, 0x0
    beq lbl_fn_802CD73C_00000EAC
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    beq lbl_fn_802CD73C_00000EAC
    lwz r6, lbl_8087F490
    cmpwi r6, 0x0
    beq lbl_fn_802CD73C_00000DB8
    li r3, 0x6
    stw r3, 0x764(r6)
    li r4, 0x0
    li r0, 0x14
    stw r0, 0x768(r6)
    li r5, -0x1
    stw r5, 0x76c(r6)
    stw r4, 0x770(r6)
    stw r4, 0x774(r6)
    stw r4, 0x778(r6)
    stw r5, 0xe8(r1)
    stw r4, 0xec(r1)
    stw r4, 0xf0(r1)
    stw r4, 0xf4(r1)
    stw r4, 0xf8(r1)
    stw r3, 0xe0(r1)
    stw r0, 0xe4(r1)
    stw r4, 0x77c(r6)
lbl_fn_802CD73C_00000DB8:
    lwz r3, lbl_8087F0A8
    li r4, 0x2
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_802CD73C_00000EAC
    li r0, 0x0
    stw r0, 0x14bc(r31)
    stw r0, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x7
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_808844EC
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808844E8
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14d
    lfs f2, lbl_808844F4
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x98(r12)
    mtctr r12
    bctrl
    lwz r0, 0x5c0(r31)
    mr r3, r31
    li r4, 0x1
    ori r0, r0, 0x1
    stw r0, 0x5c0(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    lis r4, lbl_80746EE0@ha
    stw r30, 0x154c(r31)
    addi r4, r4, lbl_80746EE0@l
    lfs f1, lbl_808844EC
    addi r3, r1, 0x18
    li r5, 0x0
    addi r4, r4, 0x106
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_802CD73C_00000EAC
    bl fn_803E3384
lbl_fn_802CD73C_00000EAC:
    lwz r0, 0xd18(r31)
    lwz r3, 0x14c0(r31)
    cmpwi r0, 0x0
    addi r0, r3, 0x1
    stw r0, 0x14c0(r31)
    beq lbl_fn_802CD73C_00000ED0
    lwz r3, 0x14b8(r31)
    cmpwi r3, 0x0
    bne lbl_fn_802CD73C_00001080
lbl_fn_802CD73C_00000ED0:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x7
    bne lbl_fn_802CD73C_00000EF4
    mr r3, r31
    bl fn_802CF728
    b lbl_fn_802CD73C_00001478
lbl_fn_802CD73C_00000EF4:
    cmpwi r0, 0x6
    bne lbl_fn_802CD73C_00001040
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802CD73C_00000F40
    li r30, 0x0
    stw r30, 0x14bc(r31)
    stw r30, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
lbl_fn_802CD73C_00000F40:
    lfs f4, 0x2e4(r31)
    lfs f3, lbl_808844FC
    lfs f0, lbl_80884500
    fsubs f3, f4, f3
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802CD73C_00001478
    lis r4, lbl_80746EE0@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80746EE0@l
    li r5, 0x0
    addi r4, r4, 0x113
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802CD73C_00000F88
    li r3, 0x0
    b lbl_fn_802CD73C_00000F94
lbl_fn_802CD73C_00000F88:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_802CD73C_00000F94:
    lfs f6, 0x2c(r3)
    addi r30, r1, 0x70
    lfs f5, 0x1c(r3)
    addi r5, r1, 0x7c
    lfs f4, 0xc(r3)
    mr r3, r30
    stfs f4, 0x64(r1)
    mr r4, r30
    stfs f5, 0x68(r1)
    stfs f6, 0x6c(r1)
    lfs f0, 0x14e0(r31)
    lfs f3, 0x14dc(r31)
    fsubs f2, f0, f6
    lfs f0, 0x14d8(r31)
    fsubs f3, f3, f5
    fsubs f0, f0, f4
    stfs f2, 0x84(r1)
    stfs f0, 0x7c(r1)
    stfs f3, 0x80(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x78(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r30), 0, 0
    addi r4, r31, 0x14cc
    lfs f2, 0x78(r1)
    stfs f2, 0x14d4(r31)
    lwz r3, 0x1514(r31)
    psq_st f1, 0x0(r4), 0, 0
    lwz r30, lbl_8087F048
    bl fn_80219E6C
    lfs f1, lbl_808844E8
    mr r5, r3
    lfs f2, lbl_808844EC
    mr r3, r30
    mr r4, r31
    addi r6, r1, 0x64
    addi r7, r31, 0x14cc
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
    b lbl_fn_802CD73C_00001478
lbl_fn_802CD73C_00001040:
    cmpwi r0, 0x2
    bne lbl_fn_802CD73C_00001060
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_802CD73C_00001478
lbl_fn_802CD73C_00001060:
    cmpwi r0, 0x8
    bne lbl_fn_802CD73C_00001074
    li r0, 0x0
    stw r0, 0x58c(r31)
    b lbl_fn_802CD73C_00001478
lbl_fn_802CD73C_00001074:
    mr r3, r31
    bl fn_802CF054
    b lbl_fn_802CD73C_00001478
lbl_fn_802CD73C_00001080:
    beq lbl_fn_802CD73C_00001478
    lwz r3, 0x58c(r31)
    cmpwi r3, 0x6
    beq lbl_fn_802CD73C_000010BC
    cmpwi r3, 0x7
    beq lbl_fn_802CD73C_00001200
    cmpwi r3, 0x8
    beq lbl_fn_802CD73C_0000120C
    cmpwi r3, 0x9
    beq lbl_fn_802CD73C_000012E4
    cmpwi r3, 0xa
    beq lbl_fn_802CD73C_000013C0
    cmpwi r3, 0x2
    beq lbl_fn_802CD73C_000013F4
    b lbl_fn_802CD73C_0000140C
lbl_fn_802CD73C_000010BC:
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802CD73C_00001100
    li r30, 0x0
    stw r30, 0x14bc(r31)
    stw r30, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
lbl_fn_802CD73C_00001100:
    lfs f4, 0x2e4(r31)
    lfs f3, lbl_808844FC
    lfs f0, lbl_80884500
    fsubs f3, f4, f3
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802CD73C_00001478
    lis r4, lbl_80746EE0@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80746EE0@l
    li r5, 0x0
    addi r4, r4, 0x113
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802CD73C_00001148
    li r3, 0x0
    b lbl_fn_802CD73C_00001154
lbl_fn_802CD73C_00001148:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_802CD73C_00001154:
    lfs f6, 0x2c(r3)
    addi r30, r1, 0x4c
    lfs f5, 0x1c(r3)
    addi r5, r1, 0x58
    lfs f4, 0xc(r3)
    mr r3, r30
    stfs f4, 0x40(r1)
    mr r4, r30
    stfs f5, 0x44(r1)
    stfs f6, 0x48(r1)
    lfs f0, 0x14e0(r31)
    lfs f3, 0x14dc(r31)
    fsubs f2, f0, f6
    lfs f0, 0x14d8(r31)
    fsubs f3, f3, f5
    fsubs f0, f0, f4
    stfs f2, 0x60(r1)
    stfs f0, 0x58(r1)
    stfs f3, 0x5c(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x54(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r30), 0, 0
    addi r4, r31, 0x14cc
    lfs f2, 0x54(r1)
    stfs f2, 0x14d4(r31)
    lwz r3, 0x1514(r31)
    psq_st f1, 0x0(r4), 0, 0
    lwz r30, lbl_8087F048
    bl fn_80219E6C
    lfs f1, lbl_808844E8
    mr r5, r3
    lfs f2, lbl_808844EC
    mr r3, r30
    mr r4, r31
    addi r6, r1, 0x40
    addi r7, r31, 0x14cc
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
    b lbl_fn_802CD73C_00001478
lbl_fn_802CD73C_00001200:
    mr r3, r31
    bl fn_802CF728
    b lbl_fn_802CD73C_00001478
lbl_fn_802CD73C_0000120C:
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802CD73C_00001250
    li r30, 0x0
    stw r30, 0x14bc(r31)
    stw r30, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
lbl_fn_802CD73C_00001250:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80884504
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802CD73C_000012AC
    lfs f0, lbl_80884508
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802CD73C_000012AC
    mr r3, r31
    bl fn_80144710
    lwz r3, 0x1510(r31)
    bl fn_80219E6C
    mr r7, r3
    lwz r8, 0x590(r31)
    lwz r3, lbl_8087F048
    mr r6, r31
    lfs f1, lbl_808844E8
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
lbl_fn_802CD73C_000012AC:
    lwz r0, 0x1554(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802CD73C_00001478
    lwz r3, 0x1510(r31)
    bl fn_80219E6C
    lfs f0, 0x40(r3)
    addi r4, r31, 0x528
    lfs f3, 0x8e4(r31)
    lis r5, 0xffff
    lwz r3, lbl_8087EEB0
    fadds f1, f3, f0
    lfs f2, lbl_808844E8
    bl fn_80063D3C
    b lbl_fn_802CD73C_00001478
lbl_fn_802CD73C_000012E4:
    cmpwi r0, 0x3c
    blt lbl_fn_802CD73C_0000132C
    addi r3, r31, 0x14f0
    li r30, 0x0
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x14f8(r31)
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
    stw r30, 0x14bc(r31)
    stw r30, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_802CD73C_00001478
lbl_fn_802CD73C_0000132C:
    xoris r0, r0, 0x8000
    stw r0, 0x104(r1)
    lis r3, lbl_80746ED0@ha
    lfs f3, lbl_8088450C
    lfd f5, lbl_80746ED0@l(r3)
    addi r3, r1, 0x1c
    lfd f4, 0x100(r1)
    lfs f0, 0x14f8(r31)
    fsubs f7, f4, f5
    lfs f6, 0x14ec(r31)
    lfs f5, 0x14f4(r31)
    fsubs f8, f0, f6
    lfs f4, 0x14e8(r31)
    fdivs f9, f7, f3
    lfs f3, 0x14f0(r31)
    lfs f0, 0x14e4(r31)
    stfs f8, 0x30(r1)
    fmuls f7, f8, f9
    fsubs f3, f3, f0
    fsubs f5, f5, f4
    stfs f7, 0x3c(r1)
    fadds f2, f7, f6
    fmuls f8, f3, f9
    stfs f5, 0x2c(r1)
    fmuls f5, f5, f9
    stfs f3, 0x28(r1)
    fadds f0, f8, f0
    fadds f3, f5, f4
    stfs f8, 0x34(r1)
    stfs f3, 0x20(r1)
    stfs f0, 0x1c(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f5, 0x38(r1)
    stfs f2, 0x24(r1)
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
    b lbl_fn_802CD73C_00001478
lbl_fn_802CD73C_000013C0:
    cmpwi r0, 0x1
    ble lbl_fn_802CD73C_00001478
    li r30, 0x0
    stw r30, 0x14bc(r31)
    stw r30, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_802CD73C_00001478
lbl_fn_802CD73C_000013F4:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_802CD73C_00001478
lbl_fn_802CD73C_0000140C:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_802CD73C_0000145C
    lwz r0, 0x150c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802CD73C_00001448
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x14b8(r31)
    mr r3, r31
    lfs f1, lbl_80884510
    li r5, 0x0
    bl fn_80170A20
    b lbl_fn_802CD73C_0000145C
lbl_fn_802CD73C_00001448:
    cmpwi r0, 0x1
    bne lbl_fn_802CD73C_0000145C
    mr r3, r31
    li r4, 0x9
    bl fn_8016E970
lbl_fn_802CD73C_0000145C:
    mr r3, r31
    bl fn_802CF054
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_802CD73C_00001478
    mr r3, r31
    bl fn_802CF3AC
lbl_fn_802CD73C_00001478:
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    lis r30, lbl_80746EE0@ha
    addi r3, r31, 0xb0
    addi r30, r30, lbl_80746EE0@l
    addi r4, r30, 0x120
    bl fn_80092954
    cmpwi r3, 0x0
    beq lbl_fn_802CD73C_00001598
    lwz r0, 0x1c(r3)
    lis r5, lbl_80746ED8@ha
    stw r0, 0x10(r1)
    addi r4, r30, 0x120
    lfd f7, lbl_80746ED8@l(r5)
    addi r5, r31, 0x14fc
    lbz r8, 0x10(r1)
    addi r6, r1, 0xb8
    stw r8, 0x10c(r1)
    addi r7, r1, 0xa8
    lbz r0, 0x11(r1)
    lfd f0, 0x108(r1)
    stw r0, 0x104(r1)
    fsubs f5, f0, f7
    lbz r8, 0x12(r1)
    lfd f0, 0x100(r1)
    lbz r0, 0x13(r1)
    stw r8, 0x10c(r1)
    fsubs f4, f0, f7
    lfs f6, lbl_80884514
    stw r0, 0x104(r1)
    lfd f3, 0x108(r1)
    fdivs f5, f5, f6
    lfd f0, 0x100(r1)
    stfs f5, 0xa8(r1)
    fsubs f3, f3, f7
    fsubs f0, f0, f7
    fdivs f4, f4, f6
    stfs f4, 0xac(r1)
    fdivs f3, f3, f6
    stfs f3, 0xb0(r1)
    fdivs f0, f0, f6
    stfs f0, 0xb4(r1)
    lwz r0, 0x20(r3)
    addi r3, r31, 0xb0
    stw r0, 0x14(r1)
    lbz r8, 0x14(r1)
    stw r8, 0x10c(r1)
    lbz r0, 0x15(r1)
    lfd f0, 0x108(r1)
    stw r0, 0x104(r1)
    fsubs f3, f0, f7
    lbz r8, 0x16(r1)
    lfd f0, 0x100(r1)
    lbz r0, 0x17(r1)
    fsubs f4, f0, f7
    stw r0, 0x104(r1)
    fdivs f5, f3, f6
    stw r8, 0x10c(r1)
    lfd f0, 0x100(r1)
    lfd f3, 0x108(r1)
    stfs f5, 0xb8(r1)
    fsubs f3, f3, f7
    fsubs f0, f0, f7
    fdivs f4, f4, f6
    stfs f4, 0xbc(r1)
    fdivs f3, f3, f6
    stfs f3, 0xc0(r1)
    fdivs f0, f0, f6
    stfs f0, 0xc4(r1)
    bl fn_80094958
lbl_fn_802CD73C_00001598:
    lis r30, lbl_80746EE0@ha
    addi r3, r31, 0xb0
    addi r30, r30, lbl_80746EE0@l
    addi r4, r30, 0x12b
    bl fn_80092954
    cmpwi r3, 0x0
    beq lbl_fn_802CD73C_000016A8
    lwz r0, 0x1c(r3)
    lis r5, lbl_80746ED8@ha
    stw r0, 0x8(r1)
    addi r4, r30, 0x12b
    lfd f7, lbl_80746ED8@l(r5)
    addi r5, r31, 0x14fc
    lbz r8, 0x8(r1)
    addi r6, r1, 0x98
    stw r8, 0x10c(r1)
    addi r7, r1, 0x88
    lbz r0, 0x9(r1)
    lfd f0, 0x108(r1)
    stw r0, 0x104(r1)
    fsubs f5, f0, f7
    lbz r8, 0xa(r1)
    lfd f0, 0x100(r1)
    lbz r0, 0xb(r1)
    stw r8, 0x10c(r1)
    fsubs f4, f0, f7
    lfs f6, lbl_80884514
    stw r0, 0x104(r1)
    lfd f3, 0x108(r1)
    fdivs f5, f5, f6
    lfd f0, 0x100(r1)
    stfs f5, 0x88(r1)
    fsubs f3, f3, f7
    fsubs f0, f0, f7
    fdivs f4, f4, f6
    stfs f4, 0x8c(r1)
    fdivs f3, f3, f6
    stfs f3, 0x90(r1)
    fdivs f0, f0, f6
    stfs f0, 0x94(r1)
    lwz r0, 0x20(r3)
    addi r3, r31, 0xb0
    stw r0, 0xc(r1)
    lbz r8, 0xc(r1)
    stw r8, 0x10c(r1)
    lbz r0, 0xd(r1)
    lfd f0, 0x108(r1)
    stw r0, 0x104(r1)
    fsubs f3, f0, f7
    lbz r8, 0xe(r1)
    lfd f0, 0x100(r1)
    lbz r0, 0xf(r1)
    fsubs f4, f0, f7
    stw r0, 0x104(r1)
    fdivs f5, f3, f6
    stw r8, 0x10c(r1)
    lfd f0, 0x100(r1)
    lfd f3, 0x108(r1)
    stfs f5, 0x98(r1)
    fsubs f3, f3, f7
    fsubs f0, f0, f7
    fdivs f4, f4, f6
    stfs f4, 0x9c(r1)
    fdivs f3, f3, f6
    stfs f3, 0xa0(r1)
    fdivs f0, f0, f6
    stfs f0, 0xa4(r1)
    bl fn_80094958
lbl_fn_802CD73C_000016A8:
    lwz r6, 0x38(r31)
    li r4, 0x0
    li r0, 0x0
    li r3, 0x0
    rlwinm r5, r6, 0, 29, 29
    cmplwi r5, 0x4
    beq lbl_fn_802CD73C_000016D4
    clrlwi r5, r6, 31
    cmplwi r5, 0x1
    beq lbl_fn_802CD73C_000016D4
    li r3, 0x1
lbl_fn_802CD73C_000016D4:
    cmpwi r3, 0x0
    beq lbl_fn_802CD73C_000016F0
    lwz r3, 0x7e0(r31)
    rlwinm r3, r3, 0, 26, 26
    cmplwi r3, 0x20
    beq lbl_fn_802CD73C_000016F0
    li r0, 0x1
lbl_fn_802CD73C_000016F0:
    cmpwi r0, 0x0
    beq lbl_fn_802CD73C_00001724
    lwz r0, 0x55c(r31)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802CD73C_00001718
    lwz r0, 0x560(r31)
    cmpwi r0, 0x1c
    bne lbl_fn_802CD73C_00001718
    li r3, 0x1
lbl_fn_802CD73C_00001718:
    cmpwi r3, 0x0
    bne lbl_fn_802CD73C_00001724
    li r4, 0x1
lbl_fn_802CD73C_00001724:
    cmpwi r4, 0x0
    beq lbl_fn_802CD73C_00001890
    lwz r0, 0x54c(r31)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_802CD73C_00001890
    lwz r0, 0xd18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802CD73C_00001890
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_802CD73C_0000175C
    lwz r3, 0x48(r3)
    b lbl_fn_802CD73C_00001760
lbl_fn_802CD73C_0000175C:
    li r3, 0x0
lbl_fn_802CD73C_00001760:
    cmpwi r3, 0x0
    beq lbl_fn_802CD73C_00001890
    lfs f3, 0x52c(r31)
    lfs f0, 0x52c(r3)
    lfs f4, 0x530(r31)
    fsubs f6, f3, f0
    lfs f3, 0x530(r3)
    lfs f0, lbl_80884518
    fsubs f5, f4, f3
    lfs f4, 0x528(r31)
    lfs f3, 0x528(r3)
    fcmpo cr0, f6, f0
    stfs f6, 0xd8(r1)
    fsubs f0, f4, f3
    stfs f5, 0xdc(r1)
    stfs f0, 0xd4(r1)
    bge lbl_fn_802CD73C_00001890
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x14bc(r31)
    stw r0, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    lwz r12, 0x0(r31)
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
    li r0, 0x2
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_808844EC
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808844E8
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x2e
    lfs f2, lbl_808844F4
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lis r5, lbl_807C7030@ha
    li r0, 0x1e
    addi r5, r5, lbl_807C7030@l
    mr r3, r31
    psq_l f1, 0x0(r5), 0, 0
    li r4, 0x1
    lfs f2, 0x8(r5)
    stfs f2, 0x57c(r31)
    psq_st f1, 0x574(r31), 0, 0
    stw r0, 0x1434(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
lbl_fn_802CD73C_00001890:
    lwz r0, 0x134(r1)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_802CE42C(void)
{
    nofralloc
    b fn_80149A30
}

asm void fn_802CE430(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_802CE430_00001918
    lwz r3, 0x80(r4)
    li r6, 0x0
    li r5, -0x1
    li r0, 0x3
    clrlwi r3, r3, 4
    stw r6, 0x68(r4)
    stw r6, 0x6c(r4)
    stw r6, 0x70(r4)
    stw r6, 0x74(r4)
    stw r5, 0x78(r4)
    stw r3, 0x80(r4)
    stw r5, 0x7c(r4)
    stw r0, 0x64(r4)
    stw r6, 0x90(r4)
    b lbl_fn_802CE430_00001970
lbl_fn_802CE430_00001918:
    lwz r0, 0x150c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_802CE430_0000194C
    lfs f2, 0x10(r4)
    lfs f3, lbl_808844E8
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
lbl_fn_802CE430_0000194C:
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_802CE430_00001970:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
