#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _savegpr_22(void);
extern void fn_8003EA3C(void);
extern void fn_8004D388(void);
extern void fn_80063D3C(void);
extern void fn_80092814(void);
extern void fn_80094958(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800F8C6C(void);
extern void fn_800FAB80(void);
extern void fn_8012DB04(void);
extern void fn_8013A258(void);
extern void fn_80144710(void);
extern void fn_8016E970(void);
extern void fn_80170A20(void);
extern void fn_80176548(void);
extern void fn_801765D8(void);
extern void fn_80179D44(void);
extern void fn_80219E6C(void);
extern void fn_802BC4EC(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_8037D4C0(void);
extern void fn_804DA490(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80746A70[];
extern u8 lbl_80746AF8[];
extern u8 lbl_80746B00[];
extern u8 lbl_80746B08[];
extern u8 lbl_80746B20[];
extern u8 lbl_80766768[];
extern u8 lbl_8078655C[];
extern u8 lbl_807C6B90[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F448;
extern u32 lbl_8087F610;
extern u32 lbl_8088417C;
extern u32 lbl_80884190;
extern u32 lbl_80884194;
extern u32 lbl_80884198;
extern u32 lbl_8088419C;
extern u32 lbl_808841A0;
extern u32 lbl_808841A4;
extern u32 lbl_808841A8;
extern u32 lbl_808841B0;
extern u32 lbl_808841B4;
extern u32 lbl_808841B8;
extern u32 lbl_808841BC;
extern u32 lbl_808841C8;
extern u32 lbl_808841CC;
extern u32 lbl_808841D8;
extern u32 lbl_808841DC;
extern u32 lbl_808841E0;
extern u32 lbl_808841E4;
extern u32 lbl_808841F4;
extern u32 lbl_808841F8;
extern u32 lbl_808841FC;
extern u32 lbl_80884200;
extern u32 lbl_80884204;
extern u32 lbl_80884208;
extern u32 lbl_8088420C;
extern u32 lbl_80884210;
extern u32 lbl_80884214;
extern u32 lbl_80884218;
extern u32 lbl_8088421C;
extern u32 lbl_80884220;
extern u32 lbl_80884224;
extern u32 lbl_80884228;
extern u32 lbl_8088422C;
extern u32 lbl_80884230;
extern u32 lbl_80884234;
extern u32 lbl_80884238;
extern u32 lbl_8088423C;
extern u32 lbl_80884240;
extern u32 lbl_80884244;
extern u32 lbl_80884248;
extern u32 lbl_8088424C;
extern u32 lbl_80884250;
extern u32 lbl_80884254;
extern u32 lbl_80884258;
extern u32 lbl_8088425C;
extern u32 lbl_80884260;
extern u32 lbl_80884264;
extern u32 lbl_80884268;
extern u32 lbl_8088426C;
extern u32 lbl_80884270;
extern u32 lbl_80884274;
extern u32 lbl_80884278;
extern u32 lbl_8088427C;
extern u32 lbl_80884280;
extern u32 lbl_80884284;
extern u32 lbl_80884288;
extern u32 lbl_8088428C;
extern u32 lbl_80884290;

/* Function declarations */
void fn_802BCD3C(void);
void fn_802BCE84(void);
void fn_802BD118(void);
void fn_802BD480(void);
void fn_802BDA04(void);
void fn_802BDF68(void);
void fn_802BDFA0(void);
void fn_802BDFF8(void);
void fn_802BE0FC(void);
void fn_802BE180(void);
void fn_802BE2A0(void);
void fn_802BE7EC(void);
void fn_802BE9C8(void);
void fn_802BEAEC(void);
void fn_802BEE44(void);
void fn_802BF5C0(void);

asm void fn_802BCD3C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_802BCD3C_000000AC
    lwz r0, 0xf80(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802BCD3C_0000004C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    b lbl_fn_802BCD3C_00000068
lbl_fn_802BCD3C_0000004C:
    lis r5, lbl_8078655C@ha
    lwzu r4, lbl_8078655C@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
lbl_fn_802BCD3C_00000068:
    lwz r5, 0x14(r1)
    addi r3, r1, 0x8
    lwz r4, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_802BCD3C_000000AC
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_802BCD3C_00000134
lbl_fn_802BCD3C_000000AC:
    lwz r0, 0x14e8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802BCD3C_000000F8
    lfs f2, lbl_8088417C
    li r0, 0x1
    lfs f0, lbl_808841F4
    addi r3, r31, 0xb0
    stfs f2, 0x2fc(r31)
    li r4, 0x0
    lfs f1, lbl_80884190
    li r5, 0x14
    stw r0, 0x3fc(r31)
    li r6, 0x1
    lfs f2, lbl_80884198
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802BCD3C_00000134
lbl_fn_802BCD3C_000000F8:
    lfs f2, lbl_8088417C
    li r0, 0x1
    lfs f0, lbl_808841F4
    addi r3, r31, 0xb0
    stfs f2, 0x2fc(r31)
    li r4, 0x0
    lfs f1, lbl_80884190
    li r5, 0x2
    stw r0, 0x3fc(r31)
    li r6, 0x1
    lfs f2, lbl_80884198
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
lbl_fn_802BCD3C_00000134:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802BCE84(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x80
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    bl _savegpr_22
    lfs f5, 0x52c(r3)
    addi r6, r1, 0x2c
    lfs f4, 0x5a8(r3)
    addi r8, r1, 0x38
    lfs f3, 0x528(r3)
    addi r7, r1, 0x44
    fadds f4, f5, f4
    lfs f0, 0x5a4(r3)
    lfs f6, 0x5b0(r3)
    mr r29, r3
    fadds f0, f3, f0
    stfs f4, 0x30(r1)
    stfs f0, 0x2c(r1)
    lwz r5, 0x14f0(r3)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x614(r3), 0, 0
    neg r4, r5
    lfs f5, 0x530(r3)
    or r4, r4, r5
    lfs f0, 0x618(r3)
    srawi r4, r4, 31
    lfs f4, 0x5ac(r3)
    rlwinm r31, r4, 0, 24, 26
    fadds f3, f0, f6
    lwz r0, 0x58c(r3)
    fadds f4, f5, f4
    lfs f0, lbl_808841F8
    stfs f3, 0x618(r3)
    cmpwi r0, 0xa
    psq_l f1, 0x614(r3), 0, 0
    fmr f2, f4
    psq_st f1, 0x0(r8), 0, 0
    lfs f3, 0x3c(r1)
    stfs f2, 0x61c(r3)
    frsp f2, f2
    fadds f0, f3, f0
    stfs f2, 0x4c(r1)
    stfs f2, 0x40(r1)
    frsp f2, f2
    stfs f2, 0x5fc(r3)
    lfs f2, 0x40(r1)
    stfs f0, 0x3c(r1)
    psq_st f1, 0x0(r7), 0, 0
    psq_st f1, 0x5f4(r3), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f6, 0x620(r3)
    stfs f4, 0x34(r1)
    psq_st f1, 0x600(r3), 0, 0
    stfs f2, 0x608(r3)
    stfs f6, 0x60c(r3)
    bne lbl_fn_802BCE84_00000234
    ori r31, r31, 0x4
lbl_fn_802BCE84_00000234:
    lis r4, lbl_80746A70@ha
    stw r31, 0x5d8(r3)
    addi r24, r1, 0x20
    addi r25, r1, 0x44
    addi r26, r4, lbl_80746A70@l
    addi r22, r1, 0x14
    addi r23, r1, 0x38
    li r30, 0x0
    li r28, 0x0
    li r27, 0x0
lbl_fn_802BCE84_0000025C:
    add r4, r26, r27
    addi r3, r29, 0xb0
    lfs f31, 0x8(r4)
    li r5, 0x0
    lwz r4, 0x0(r4)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802BCE84_00000284
    li r5, 0x0
    b lbl_fn_802BCE84_00000290
lbl_fn_802BCE84_00000284:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r29)
    add r5, r3, r0
lbl_fn_802BCE84_00000290:
    lfs f0, 0x1c(r5)
    add r4, r26, r27
    lfs f3, 0xc(r5)
    addi r3, r29, 0xb0
    stfs f3, 0x20(r1)
    lfs f2, 0x2c(r5)
    li r5, 0x0
    stfs f0, 0x24(r1)
    lwz r4, 0x4(r4)
    psq_l f1, 0x0(r24), 0, 0
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802BCE84_000002D8
    li r4, 0x0
    b lbl_fn_802BCE84_000002E4
lbl_fn_802BCE84_000002D8:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r29)
    add r4, r3, r0
lbl_fn_802BCE84_000002E4:
    lfs f3, 0x1c(r4)
    add r3, r29, r28
    lfs f4, 0xc(r4)
    addi r30, r30, 0x1
    lfs f0, 0x2c(r4)
    addi r5, r3, 0x1574
    stfs f4, 0x14(r1)
    addi r4, r3, 0x1580
    fmr f2, f0
    cmpwi r30, 0xb
    stfs f3, 0x18(r1)
    addi r28, r28, 0x58
    addi r27, r27, 0xc
    psq_l f1, 0x0(r22), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_l f1, 0x0(r25), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r23), 0, 0
    stfs f2, 0x40(r1)
    lfs f2, 0x4c(r1)
    stfs f2, 0x157c(r3)
    lfs f2, 0x40(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1588(r3)
    stfs f31, 0x158c(r3)
    stfs f0, 0x1c(r1)
    stw r31, 0x1558(r3)
    blt lbl_fn_802BCE84_0000025C
    lis r4, lbl_80746B20@ha
    addi r3, r29, 0xb0
    addi r4, r4, lbl_80746B20@l
    li r5, 0x0
    addi r4, r4, 0x77
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802BCE84_0000037C
    li r5, 0x0
    b lbl_fn_802BCE84_00000388
lbl_fn_802BCE84_0000037C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r29)
    add r5, r3, r0
lbl_fn_802BCE84_00000388:
    lfs f3, 0x1c(r5)
    addi r4, r1, 0x8
    lfs f4, 0xc(r5)
    addi r3, r29, 0x148c
    lfs f2, 0x2c(r5)
    lfs f0, lbl_808841FC
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1494(r29)
    stfs f0, 0x1498(r29)
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    addi r11, r1, 0x80
    stfs f2, 0x10(r1)
    bl _restgpr_22
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_802BD118(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    li r5, 0x1
    stw r0, 0x154(r1)
    addi r4, r1, 0x80
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    lfs f31, lbl_80884190
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    lfs f30, lbl_8088417C
    stfd f29, 0x120(r1)
    psq_st f29, 0x128(r1), 0, 0
    stfd f28, 0x110(r1)
    psq_st f28, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    mr r30, r3
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x88(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r4, 0x7e0(r3)
    rlwinm r0, r4, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_802BD118_00000454
    rlwinm r0, r4, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_802BD118_00000454
    li r5, 0x0
lbl_fn_802BD118_00000454:
    cmpwi r5, 0x0
    bne lbl_fn_802BD118_00000464
    lfs f0, lbl_808841CC
    fmuls f30, f30, f0
lbl_fn_802BD118_00000464:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_802BD118_000006E0
    lwz r6, 0xd1c(r3)
    addi r31, r1, 0x74
    lfs f0, 0x530(r3)
    addi r5, r1, 0x68
    lfs f3, 0x530(r6)
    mr r4, r31
    lfs f5, 0x52c(r6)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    mr r3, r31
    lfs f3, 0x528(r6)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x7c(r1)
    bl fn_805F98D0
    lwz r4, 0xd1c(r30)
    addi r3, r1, 0x5c
    lfs f0, 0x530(r30)
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r30)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r30)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x60(r1)
    stfs f0, 0x5c(r1)
    stfs f6, 0x64(r1)
    bl fn_805F9940
    lfs f0, lbl_80884200
    fcmpo cr0, f1, f0
    bge lbl_fn_802BD118_00000514
    lfs f31, lbl_80884190
    b lbl_fn_802BD118_00000520
lbl_fn_802BD118_00000514:
    mr r3, r31
    bl fn_805F9940
    fmr f31, f1
lbl_fn_802BD118_00000520:
    lfs f2, 0x7c(r1)
    addi r3, r1, 0x74
    lfs f0, lbl_808841DC
    addi r31, r1, 0x50
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802BD118_00000570
    lfs f3, 0x50(r1)
    lfs f0, lbl_80884190
    fcmpo cr0, f3, f0
    ble lbl_fn_802BD118_00000564
    lfs f0, lbl_808841E0
    b lbl_fn_802BD118_00000568
lbl_fn_802BD118_00000564:
    lfs f0, lbl_808841E4
lbl_fn_802BD118_00000568:
    stfs f0, 0x48(r1)
    b lbl_fn_802BD118_00000584
lbl_fn_802BD118_00000570:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802BD118_00000584:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x90
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884190
    addi r4, r1, 0x38
    lfs f28, 0x98(r1)
    mr r5, r4
    lfs f29, 0x94(r1)
    addi r3, r1, 0xc0
    lfs f13, 0x90(r1)
    lfs f12, 0xa8(r1)
    lfs f11, 0xa4(r1)
    lfs f10, 0xa0(r1)
    lfs f9, 0xb8(r1)
    lfs f8, 0xb4(r1)
    lfs f7, 0xb0(r1)
    lfs f6, 0xbc(r1)
    lfs f5, 0xac(r1)
    lfs f4, 0x9c(r1)
    lfs f0, lbl_8088417C
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xf0(r1)
    stfs f3, 0xf4(r1)
    stfs f3, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f28, 0x10(r1)
    stfs f13, 0xc0(r1)
    stfs f29, 0xc4(r1)
    stfs f28, 0xc8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xd0(r1)
    stfs f11, 0xd4(r1)
    stfs f12, 0xd8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xe0(r1)
    stfs f8, 0xe4(r1)
    stfs f9, 0xe8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xcc(r1)
    stfs f5, 0xdc(r1)
    stfs f6, 0xec(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808841DC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802BD118_000006A0
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884190
    fcmpo cr0, f3, f0
    ble lbl_fn_802BD118_00000690
    lfs f0, lbl_808841E0
    b lbl_fn_802BD118_00000694
lbl_fn_802BD118_00000690:
    lfs f0, lbl_808841E4
lbl_fn_802BD118_00000694:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802BD118_000006B4
lbl_fn_802BD118_000006A0:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802BD118_000006B4:
    lfs f2, lbl_80884190
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x80
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    frsp f2, f2
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x88(r1)
    b lbl_fn_802BD118_000006F4
lbl_fn_802BD118_000006E0:
    cmpwi r0, 0x6
    bne lbl_fn_802BD118_000006F4
    mr r3, r30
    bl fn_8013A258
    b lbl_fn_802BD118_0000070C
lbl_fn_802BD118_000006F4:
    lfs f0, 0x568(r30)
    fmr f1, f31
    mr r3, r30
    addi r4, r1, 0x80
    fmuls f2, f0, f30
    bl fn_802BC4EC
lbl_fn_802BD118_0000070C:
    lwz r0, 0x154(r1)
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    psq_l f29, 0x128(r1), 0, 0
    lfd f29, 0x120(r1)
    psq_l f28, 0x118(r1), 0, 0
    lfd f28, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_802BD480(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stw r31, 0xac(r1)
    mr r31, r3
    stw r30, 0xa8(r1)
    lwz r8, 0xd1c(r3)
    cmpwi r8, 0x0
    beq lbl_fn_802BD480_00000CA0
    lwz r0, 0x1904(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802BD480_000007E0
    li r0, 0x0
    stw r0, 0x14dc(r3)
    stw r0, 0x14e0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_8088417C
    li r4, 0xb
    stw r3, 0x590(r31)
    li r0, 0x1
    lfs f1, lbl_80884190
    addi r3, r31, 0xb0
    stw r4, 0x58c(r31)
    li r4, 0x0
    lfs f2, lbl_80884198
    li r5, 0x145
    stw r0, 0x3fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_802BD480_00000CA0
lbl_fn_802BD480_000007E0:
    lwz r5, 0x7e0(r3)
    li r4, 0x1
    rlwinm r0, r5, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_802BD480_00000804
    rlwinm r0, r5, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_802BD480_00000804
    li r4, 0x0
lbl_fn_802BD480_00000804:
    cmpwi r4, 0x0
    li r6, 0x78
    bne lbl_fn_802BD480_00000814
    li r6, 0x3c
lbl_fn_802BD480_00000814:
    lwz r7, 0x14e0(r3)
    cmpw r7, r6
    ble lbl_fn_802BD480_00000CA0
    lwz r0, 0x1908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802BD480_00000978
    lwz r0, 0x940(r3)
    cmpwi r0, 0x0
    ble lbl_fn_802BD480_00000864
    xoris r4, r0, 0x8000
    lis r0, 0x4330
    lis r5, lbl_80746B00@ha
    stw r4, 0x9c(r1)
    lfd f4, lbl_80746B00@l(r5)
    stw r0, 0x98(r1)
    lfs f0, 0x7d8(r3)
    lfd f3, 0x98(r1)
    fsubs f3, f3, f4
    fdivs f3, f0, f3
    b lbl_fn_802BD480_00000868
lbl_fn_802BD480_00000864:
    lfs f3, lbl_80884190
lbl_fn_802BD480_00000868:
    lfs f0, lbl_80884204
    fcmpo cr0, f3, f0
    blt lbl_fn_802BD480_00000880
    lwz r0, 0x1910(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_802BD480_00000978
lbl_fn_802BD480_00000880:
    li r30, 0x0
    stw r30, 0x14dc(r3)
    stw r30, 0x14e0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f3, lbl_8088417C
    li r0, 0x1
    lfs f0, lbl_808841CC
    li r5, 0x12
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884190
    li r4, 0x0
    stw r5, 0x58c(r31)
    li r5, 0x142
    lfs f2, lbl_80884198
    li r6, 0x0
    stw r0, 0x1908(r31)
    li r7, 0x0
    li r8, 0x1
    stw r0, 0x3fc(r31)
    stfs f3, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r0, 0x64(r1)
    li r4, -0x1
    stw r30, 0x48(r1)
    li r3, 0x5c2
    clrlwi r0, r0, 4
    stw r30, 0x4c(r1)
    stw r30, 0x50(r1)
    stw r30, 0x54(r1)
    stw r30, 0x58(r1)
    stw r4, 0x5c(r1)
    stw r0, 0x64(r1)
    stw r4, 0x60(r1)
    bl fn_80219E6C
    lis r8, lbl_807C6B90@ha
    mr r4, r3
    mr r5, r31
    mr r6, r31
    addi r3, r1, 0x48
    addi r8, r8, lbl_807C6B90@l
    li r7, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8003EA3C
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_802BD480_00000950
    li r4, 0x5
    bl fn_804DA490
lbl_fn_802BD480_00000950:
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_802BD480_00000CA0
    lfs f1, lbl_8088417C
    li r4, 0x8b8
    li r5, 0xf
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
    b lbl_fn_802BD480_00000CA0
lbl_fn_802BD480_00000978:
    lwz r0, 0x14f4(r3)
    cmpwi r0, 0x708
    ble lbl_fn_802BD480_00000A10
    li r30, 0x0
    stw r30, 0x14dc(r3)
    stw r30, 0x14e0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_8088417C
    li r0, 0x1
    stw r3, 0x590(r31)
    li r3, 0xc
    lfs f1, lbl_80884190
    li r4, 0x0
    stw r3, 0x58c(r31)
    addi r3, r31, 0xb0
    lfs f2, lbl_80884198
    li r5, 0x165
    stw r0, 0x14f0(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stw r30, 0x14f4(r31)
    stw r0, 0x3fc(r31)
    stfs f0, 0x2fc(r31)
    bl fn_80097C08
    lfs f0, lbl_80884208
    addi r3, r31, 0xb0
    stfs f0, 0x2e8(r31)
    li r4, 0x0
    bl fn_80097D7C
    stfs f1, 0x2e4(r31)
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_802BD480_00000CA0
    li r4, 0x2
    bl fn_804DA490
    b lbl_fn_802BD480_00000CA0
lbl_fn_802BD480_00000A10:
    lwz r0, 0x1528(r3)
    cmpwi r0, 0x5
    bge lbl_fn_802BD480_00000A28
    slwi r0, r6, 1
    cmpw r7, r0
    ble lbl_fn_802BD480_00000A94
lbl_fn_802BD480_00000A28:
    li r30, 0x0
    stw r30, 0x14dc(r3)
    stw r30, 0x14e0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xa
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_8088417C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884190
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x13f
    lfs f2, lbl_80884198
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    stw r30, 0x1528(r31)
    b lbl_fn_802BD480_00000CA0
lbl_fn_802BD480_00000A94:
    addi r4, r1, 0x38
    psq_l f1, 0x528(r8), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x530(r8)
    lfs f0, 0x530(r3)
    lfs f5, 0x3c(r1)
    lfs f4, 0x52c(r3)
    fsubs f6, f2, f0
    lfs f0, 0x528(r3)
    addi r3, r1, 0x2c
    lfs f3, 0x38(r1)
    fsubs f4, f5, f4
    stfs f2, 0x40(r1)
    fsubs f0, f3, f0
    stfs f4, 0x30(r1)
    stfs f0, 0x2c(r1)
    stfs f6, 0x34(r1)
    bl fn_805F9940
    fmr f30, f1
    addi r3, r1, 0x2c
    mr r4, r3
    bl fn_805F98D0
    lfs f3, lbl_80884190
    addi r3, r1, 0x68
    lfs f0, lbl_8088417C
    li r4, 0x79
    stfs f3, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x68
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x20
    addi r4, r1, 0x2c
    bl fn_805F9990
    fmr f31, f1
    lis r3, lbl_80746B08@ha
    lfd f1, lbl_80746B08@l(r3)
    bl fn_8068A850
    frsp f0, f1
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_802BD480_00000CA0
    lfs f0, lbl_80884200
    fcmpo cr0, f30, f0
    bge lbl_fn_802BD480_00000BF8
    addi r3, r1, 0x2c
    lfs f2, 0x34(r1)
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x0
    addi r30, r1, 0x14
    stfs f2, 0x1c(r1)
    stw r0, 0x14dc(r31)
    stw r0, 0x14e0(r31)
    psq_st f1, 0x0(r30), 0, 0
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x8
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_8088417C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884190
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x156
    lfs f2, lbl_80884198
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x1528(r31)
    addi r4, r31, 0x152c
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x1c(r1)
    addi r0, r3, 0x1
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1534(r31)
    stw r0, 0x1528(r31)
    b lbl_fn_802BD480_00000CA0
lbl_fn_802BD480_00000BF8:
    lfs f0, lbl_8088420C
    fcmpo cr0, f30, f0
    bge lbl_fn_802BD480_00000CA0
    addi r3, r1, 0x2c
    lfs f2, 0x34(r1)
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x0
    addi r30, r1, 0x8
    stfs f2, 0x10(r1)
    stw r0, 0x14dc(r31)
    stw r0, 0x14e0(r31)
    psq_st f1, 0x0(r30), 0, 0
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x9
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_8088417C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884190
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14d
    lfs f2, lbl_80884198
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x1528(r31)
    addi r4, r31, 0x152c
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x10(r1)
    addi r0, r3, 0x1
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1534(r31)
    stw r0, 0x1528(r31)
lbl_fn_802BD480_00000CA0:
    lwz r0, 0xd4(r1)
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_802BDA04(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r4, 0x4330
    lfs f1, lbl_80884210
    stw r0, 0x64(r1)
    lfs f0, lbl_80884214
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    lis r30, lbl_80746B00@ha
    lfd f3, lbl_80746B00@l(r30)
    lwz r0, 0x14ec(r3)
    stw r4, 0x48(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x4c(r1)
    lfd f2, 0x48(r1)
    stw r4, 0x50(r1)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fmuls f1, f0, f1
    bl fn_8068AD58
    frsp f1, f1
    lfs f0, lbl_80884194
    lfs f2, lbl_8088417C
    fmadds f0, f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_802BDA04_00000D38
    b lbl_fn_802BDA04_00000D70
lbl_fn_802BDA04_00000D38:
    lwz r0, 0x14ec(r31)
    lfd f3, lbl_80746B00@l(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x54(r1)
    lfs f1, lbl_80884210
    lfd f2, 0x50(r1)
    lfs f0, lbl_80884214
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fmuls f1, f0, f1
    bl fn_8068AD58
    frsp f1, f1
    lfs f0, lbl_80884194
    fmadds f2, f0, f1, f0
lbl_fn_802BDA04_00000D70:
    lfs f1, lbl_808841A8
    lfs f0, lbl_808841A0
    lwz r3, 0x58c(r31)
    fmadds f5, f1, f2, f0
    subi r0, r3, 0x6
    cmplwi r0, 0x1
    fmr f0, f5
    fmr f6, f5
    ble lbl_fn_802BDA04_0000104C
    cmpwi r3, 0x8
    beq lbl_fn_802BDA04_00000DA8
    cmpwi r3, 0x9
    beq lbl_fn_802BDA04_00000F00
    b lbl_fn_802BDA04_000010E4
lbl_fn_802BDA04_00000DA8:
    lfs f3, 0x2e4(r31)
    lfs f2, lbl_80884218
    fcmpo cr0, f3, f2
    bge lbl_fn_802BDA04_00000DD4
    fdivs f2, f3, f2
    lfs f1, lbl_8088417C
    fsubs f1, f1, f2
    fmuls f5, f5, f1
    fmuls f0, f0, f1
    fmuls f6, f6, f1
    b lbl_fn_802BDA04_000010E4
lbl_fn_802BDA04_00000DD4:
    lfs f1, lbl_8088421C
    fcmpo cr0, f3, f1
    bge lbl_fn_802BDA04_00000EC4
    lfs f0, lbl_80884220
    fcmpo cr0, f3, f0
    bge lbl_fn_802BDA04_00000E48
    lfs f0, lbl_80884224
    lfs f1, lbl_80884190
    fsubs f0, f3, f0
    fdivs f0, f0, f2
    fcmpo cr0, f1, f0
    ble lbl_fn_802BDA04_00000E08
    b lbl_fn_802BDA04_00000E0C
lbl_fn_802BDA04_00000E08:
    fmr f1, f0
lbl_fn_802BDA04_00000E0C:
    lfs f0, lbl_8088417C
    fcmpo cr0, f0, f1
    bge lbl_fn_802BDA04_00000E1C
    b lbl_fn_802BDA04_00000EB0
lbl_fn_802BDA04_00000E1C:
    lfs f2, 0x2e4(r31)
    lfs f0, lbl_80884224
    lfs f1, lbl_80884218
    fsubs f2, f2, f0
    lfs f0, lbl_80884190
    fdivs f1, f2, f1
    fcmpo cr0, f0, f1
    ble lbl_fn_802BDA04_00000E40
    b lbl_fn_802BDA04_00000EB0
lbl_fn_802BDA04_00000E40:
    fmr f0, f1
    b lbl_fn_802BDA04_00000EB0
lbl_fn_802BDA04_00000E48:
    fsubs f2, f3, f0
    lfs f1, lbl_808841F8
    lfs f0, lbl_8088417C
    lfs f3, lbl_80884190
    fdivs f1, f2, f1
    fsubs f0, f0, f1
    fcmpo cr0, f3, f0
    ble lbl_fn_802BDA04_00000E6C
    b lbl_fn_802BDA04_00000E70
lbl_fn_802BDA04_00000E6C:
    fmr f3, f0
lbl_fn_802BDA04_00000E70:
    lfs f0, lbl_8088417C
    fcmpo cr0, f0, f3
    bge lbl_fn_802BDA04_00000E80
    b lbl_fn_802BDA04_00000EB0
lbl_fn_802BDA04_00000E80:
    lfs f3, 0x2e4(r31)
    lfs f2, lbl_80884220
    lfs f1, lbl_808841F8
    fsubs f2, f3, f2
    lfs f3, lbl_80884190
    fdivs f1, f2, f1
    fsubs f0, f0, f1
    fcmpo cr0, f3, f0
    ble lbl_fn_802BDA04_00000EA8
    b lbl_fn_802BDA04_00000EAC
lbl_fn_802BDA04_00000EA8:
    fmr f3, f0
lbl_fn_802BDA04_00000EAC:
    fmr f0, f3
lbl_fn_802BDA04_00000EB0:
    fmr f5, f0
    li r0, 0x43
    stw r0, 0x14ec(r31)
    lfs f6, lbl_80884190
    b lbl_fn_802BDA04_000010E4
lbl_fn_802BDA04_00000EC4:
    lfs f2, lbl_80884228
    lfs f1, lbl_80884224
    fsubs f2, f3, f2
    lfs f3, lbl_8088417C
    fdivs f1, f2, f1
    fcmpo cr0, f3, f1
    bge lbl_fn_802BDA04_00000EE4
    b lbl_fn_802BDA04_00000EE8
lbl_fn_802BDA04_00000EE4:
    fmr f3, f1
lbl_fn_802BDA04_00000EE8:
    fmuls f5, f5, f3
    li r0, 0x43
    fmuls f0, f0, f3
    stw r0, 0x14ec(r31)
    fmuls f6, f6, f3
    b lbl_fn_802BDA04_000010E4
lbl_fn_802BDA04_00000F00:
    lfs f3, 0x2e4(r31)
    lfs f2, lbl_80884218
    fcmpo cr0, f3, f2
    bge lbl_fn_802BDA04_00000F2C
    fdivs f2, f3, f2
    lfs f1, lbl_8088417C
    fsubs f1, f1, f2
    fmuls f5, f5, f1
    fmuls f0, f0, f1
    fmuls f6, f6, f1
    b lbl_fn_802BDA04_000010E4
lbl_fn_802BDA04_00000F2C:
    lfs f1, lbl_8088422C
    fcmpo cr0, f3, f1
    bge lbl_fn_802BDA04_00001014
    lfs f0, lbl_80884200
    fcmpo cr0, f3, f0
    bge lbl_fn_802BDA04_00000F98
    fsubs f0, f3, f2
    lfs f1, lbl_80884190
    fdivs f0, f0, f2
    fcmpo cr0, f1, f0
    ble lbl_fn_802BDA04_00000F5C
    b lbl_fn_802BDA04_00000F60
lbl_fn_802BDA04_00000F5C:
    fmr f1, f0
lbl_fn_802BDA04_00000F60:
    lfs f0, lbl_8088417C
    fcmpo cr0, f0, f1
    bge lbl_fn_802BDA04_00000F70
    b lbl_fn_802BDA04_00001000
lbl_fn_802BDA04_00000F70:
    lfs f1, 0x2e4(r31)
    lfs f2, lbl_80884218
    lfs f0, lbl_80884190
    fsubs f1, f1, f2
    fdivs f1, f1, f2
    fcmpo cr0, f0, f1
    ble lbl_fn_802BDA04_00000F90
    b lbl_fn_802BDA04_00001000
lbl_fn_802BDA04_00000F90:
    fmr f0, f1
    b lbl_fn_802BDA04_00001000
lbl_fn_802BDA04_00000F98:
    fsubs f2, f3, f0
    lfs f1, lbl_808841F8
    lfs f0, lbl_8088417C
    lfs f3, lbl_80884190
    fdivs f1, f2, f1
    fsubs f0, f0, f1
    fcmpo cr0, f3, f0
    ble lbl_fn_802BDA04_00000FBC
    b lbl_fn_802BDA04_00000FC0
lbl_fn_802BDA04_00000FBC:
    fmr f3, f0
lbl_fn_802BDA04_00000FC0:
    lfs f0, lbl_8088417C
    fcmpo cr0, f0, f3
    bge lbl_fn_802BDA04_00000FD0
    b lbl_fn_802BDA04_00001000
lbl_fn_802BDA04_00000FD0:
    lfs f3, 0x2e4(r31)
    lfs f2, lbl_80884200
    lfs f1, lbl_808841F8
    fsubs f2, f3, f2
    lfs f3, lbl_80884190
    fdivs f1, f2, f1
    fsubs f0, f0, f1
    fcmpo cr0, f3, f0
    ble lbl_fn_802BDA04_00000FF8
    b lbl_fn_802BDA04_00000FFC
lbl_fn_802BDA04_00000FF8:
    fmr f3, f0
lbl_fn_802BDA04_00000FFC:
    fmr f0, f3
lbl_fn_802BDA04_00001000:
    fmr f5, f0
    li r0, 0x43
    fmr f6, f0
    stw r0, 0x14ec(r31)
    b lbl_fn_802BDA04_000010E4
lbl_fn_802BDA04_00001014:
    fsubs f2, f3, f1
    lfs f1, lbl_808841F8
    lfs f3, lbl_8088417C
    fdivs f1, f2, f1
    fcmpo cr0, f3, f1
    bge lbl_fn_802BDA04_00001030
    b lbl_fn_802BDA04_00001034
lbl_fn_802BDA04_00001030:
    fmr f3, f1
lbl_fn_802BDA04_00001034:
    fmuls f5, f5, f3
    li r0, 0x43
    fmuls f0, f0, f3
    stw r0, 0x14ec(r31)
    fmuls f6, f6, f3
    b lbl_fn_802BDA04_000010E4
lbl_fn_802BDA04_0000104C:
    lwz r0, 0x14ec(r31)
    lis r30, lbl_80746B00@ha
    lfd f3, lbl_80746B00@l(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x4c(r1)
    lfs f1, lbl_80884230
    lfd f2, 0x48(r1)
    lfs f0, lbl_80884214
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fmuls f1, f0, f1
    bl fn_8068AD58
    frsp f1, f1
    lfs f0, lbl_80884194
    lfs f2, lbl_8088417C
    fmadds f0, f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_802BDA04_00001098
    b lbl_fn_802BDA04_000010D0
lbl_fn_802BDA04_00001098:
    lwz r0, 0x14ec(r31)
    lfd f3, lbl_80746B00@l(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x54(r1)
    lfs f1, lbl_80884230
    lfd f2, 0x50(r1)
    lfs f0, lbl_80884214
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fmuls f1, f0, f1
    bl fn_8068AD58
    frsp f1, f1
    lfs f0, lbl_80884194
    fmadds f2, f0, f1, f0
lbl_fn_802BDA04_000010D0:
    lfs f1, lbl_808841A8
    lfs f0, lbl_808841A0
    fmadds f5, f1, f2, f0
    fmr f0, f5
    fmr f6, f5
lbl_fn_802BDA04_000010E4:
    lfs f1, lbl_8088417C
    stfs f5, 0x38(r1)
    stfs f5, 0x3c(r1)
    stfs f5, 0x40(r1)
    stfs f1, 0x44(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f6, 0x18(r1)
    stfs f6, 0x1c(r1)
    stfs f6, 0x20(r1)
    stfs f1, 0x24(r1)
    lwz r0, 0x1908(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802BDA04_0000118C
    lfs f3, 0x190c(r31)
    lfs f2, lbl_80884234
    lfs f1, lbl_808841A0
    fsubs f3, f3, f2
    fcmpo cr0, f3, f1
    ble lbl_fn_802BDA04_00001140
    b lbl_fn_802BDA04_00001144
lbl_fn_802BDA04_00001140:
    fmr f3, f1
lbl_fn_802BDA04_00001144:
    frsp f2, f3
    stfs f3, 0x190c(r31)
    lfs f1, lbl_8088417C
    stfs f5, 0x38(r1)
    fmuls f3, f0, f2
    fmuls f4, f6, f2
    stfs f1, 0x44(r1)
    fmuls f2, f5, f2
    stfs f0, 0x28(r1)
    stfs f2, 0x3c(r1)
    stfs f2, 0x40(r1)
    stfs f3, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f6, 0x18(r1)
    stfs f4, 0x1c(r1)
    stfs f4, 0x20(r1)
    stfs f1, 0x24(r1)
lbl_fn_802BDA04_0000118C:
    lfs f0, lbl_8088417C
    lis r30, lbl_80746B20@ha
    addi r30, r30, lbl_80746B20@l
    addi r6, r1, 0x8
    stfs f0, 0x8(r1)
    mr r7, r6
    addi r3, r31, 0xb0
    addi r4, r30, 0x7c
    stfs f0, 0xc(r1)
    addi r5, r1, 0x38
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    bl fn_80094958
    addi r6, r1, 0x8
    addi r3, r31, 0xb0
    mr r7, r6
    addi r4, r30, 0x89
    addi r5, r1, 0x38
    bl fn_80094958
    addi r6, r1, 0x8
    addi r3, r31, 0xb0
    mr r7, r6
    addi r4, r30, 0x96
    addi r5, r1, 0x28
    bl fn_80094958
    addi r6, r1, 0x8
    addi r3, r31, 0xb0
    mr r7, r6
    addi r4, r30, 0xa3
    addi r5, r1, 0x18
    bl fn_80094958
    lwz r3, 0x14ec(r31)
    addi r0, r3, 0x1
    stw r0, 0x14ec(r31)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_802BDF68(void)
{
    nofralloc
    li r0, 0xb
    mtctr r0
lbl_fn_802BDF68_00001234:
    cmpwi r4, 0x0
    beq lbl_fn_802BDF68_0000124C
    lwz r0, 0x1540(r3)
    ori r0, r0, 0x1
    stw r0, 0x1540(r3)
    b lbl_fn_802BDF68_00001258
lbl_fn_802BDF68_0000124C:
    lwz r0, 0x1540(r3)
    clrrwi r0, r0, 1
    stw r0, 0x1540(r3)
lbl_fn_802BDF68_00001258:
    addi r3, r3, 0x58
    bdnz lbl_fn_802BDF68_00001234
    blr
}

asm void fn_802BDFA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_802BDFA0_000012A0
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0xd1c(r31)
    mr r3, r31
    lfs f1, lbl_80884238
    li r5, 0x0
    bl fn_80170A20
lbl_fn_802BDFA0_000012A0:
    mr r3, r31
    bl fn_802BD118
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802BDFF8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802BDFF8_000013A4
    lwz r4, 0x12a4(r31)
    li r0, 0xa
    mulli r0, r0, 0x58
    mr r3, r31
    oris r4, r4, 0x200
    stw r4, 0x12a4(r31)
    lwz r5, 0x1540(r31)
    add r4, r31, r0
    clrrwi r0, r5, 1
    stw r0, 0x1540(r31)
    lwz r0, 0x1598(r31)
    clrrwi r0, r0, 1
    stw r0, 0x1598(r31)
    lwz r0, 0x15f0(r31)
    clrrwi r0, r0, 1
    stw r0, 0x15f0(r31)
    lwz r0, 0x1648(r31)
    clrrwi r0, r0, 1
    stw r0, 0x1648(r31)
    lwz r0, 0x16a0(r31)
    clrrwi r0, r0, 1
    stw r0, 0x16a0(r31)
    lwz r5, 0x16f8(r31)
    clrrwi r0, r5, 1
    stw r0, 0x16f8(r31)
    lwz r0, 0x1750(r31)
    clrrwi r0, r0, 1
    stw r0, 0x1750(r31)
    lwz r0, 0x17a8(r31)
    clrrwi r0, r0, 1
    stw r0, 0x17a8(r31)
    lwz r0, 0x1800(r31)
    clrrwi r0, r0, 1
    stw r0, 0x1800(r31)
    lwz r0, 0x1858(r31)
    clrrwi r0, r0, 1
    stw r0, 0x1858(r31)
    lwz r0, 0x1540(r4)
    clrrwi r0, r0, 1
    stw r0, 0x1540(r4)
    lwz r0, 0x12a4(r31)
    ori r0, r0, 0x8000
    stw r0, 0x12a4(r31)
    bl fn_801765D8
lbl_fn_802BDFF8_000013A4:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802BE0FC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802BE0FC_00001424
    li r31, 0x0
    stw r31, 0x14dc(r30)
    stw r31, 0x14e0(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stw r31, 0x58c(r30)
    bl fn_8016E970
lbl_fn_802BE0FC_00001424:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802BE180(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0x7d4
    bl fn_8012DB04
    stfs f1, 0x2e8(r30)
    addi r3, r30, 0xb0
    lfs f31, 0x2e4(r30)
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802BE180_000014B8
    li r31, 0x0
    stw r31, 0x14dc(r30)
    stw r31, 0x14e0(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stw r31, 0x58c(r30)
    bl fn_8016E970
    b lbl_fn_802BE180_00001544
lbl_fn_802BE180_000014B8:
    lfs f1, 0x2e4(r30)
    lfs f0, lbl_8088423C
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_802BE180_00001544
    lfs f0, lbl_8088422C
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_802BE180_00001544
    li r3, 0x5bf
    bl fn_80219E6C
    mr r31, r3
    mr r3, r30
    bl fn_80144710
    lwz r3, lbl_8087F048
    mr r6, r30
    lwz r8, 0x590(r30)
    mr r7, r31
    lfs f1, lbl_80884190
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    lwz r0, 0x192c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_802BE180_00001544
    lfs f1, 0x8e4(r30)
    addi r4, r30, 0x528
    lfs f0, 0x40(r31)
    lis r5, 0xffff
    lwz r3, lbl_8087EEB0
    fadds f1, f1, f0
    lfs f2, lbl_80884190
    bl fn_80063D3C
lbl_fn_802BE180_00001544:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802BE2A0(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    stfd f31, 0x200(r1)
    psq_st f31, 0x208(r1), 0, 0
    stfd f30, 0x1f0(r1)
    psq_st f30, 0x1f8(r1), 0, 0
    stfd f29, 0x1e0(r1)
    psq_st f29, 0x1e8(r1), 0, 0
    stw r31, 0x1dc(r1)
    stw r30, 0x1d8(r1)
    mr r30, r3
    addi r3, r3, 0x7d4
    bl fn_8012DB04
    stfs f1, 0x2e8(r30)
    addi r3, r30, 0xb0
    lfs f29, 0x2e4(r30)
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f29, f1
    cror eq, gt, eq
    bne lbl_fn_802BE2A0_000015E4
    li r31, 0x0
    stw r31, 0x14dc(r30)
    stw r31, 0x14e0(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stw r31, 0x58c(r30)
    bl fn_8016E970
lbl_fn_802BE2A0_000015E4:
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_80884240
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802BE2A0_00001A80
    lfs f0, lbl_80884244
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802BE2A0_00001A80
    lwz r5, lbl_8087EFA8
    addi r3, r1, 0x1a0
    lfs f5, 0x2e8(r30)
    li r4, 0x79
    lfs f4, 0x3a4(r5)
    lfs f3, lbl_80884190
    lfs f0, lbl_8088417C
    fmuls f31, f5, f4
    stfs f3, 0xb0(r1)
    stfs f3, 0xb4(r1)
    stfs f0, 0xb8(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0xb0
    addi r3, r1, 0x1a0
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0x1534(r30)
    addi r3, r30, 0x152c
    lfs f0, lbl_808841DC
    addi r31, r1, 0xa4
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0xac(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802BE2A0_0000169C
    lfs f3, 0xa4(r1)
    lfs f0, lbl_80884190
    fcmpo cr0, f3, f0
    ble lbl_fn_802BE2A0_00001690
    lfs f0, lbl_808841E0
    b lbl_fn_802BE2A0_00001694
lbl_fn_802BE2A0_00001690:
    lfs f0, lbl_808841E4
lbl_fn_802BE2A0_00001694:
    stfs f0, 0x90(r1)
    b lbl_fn_802BE2A0_000016B0
lbl_fn_802BE2A0_0000169C:
    frsp f2, f2
    lfs f1, 0xa4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_802BE2A0_000016B0:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x130
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884190
    addi r4, r1, 0x80
    lfs f29, 0x138(r1)
    mr r5, r4
    lfs f30, 0x134(r1)
    addi r3, r1, 0x160
    lfs f13, 0x130(r1)
    lfs f12, 0x148(r1)
    lfs f11, 0x144(r1)
    lfs f10, 0x140(r1)
    lfs f9, 0x158(r1)
    lfs f8, 0x154(r1)
    lfs f7, 0x150(r1)
    lfs f6, 0x15c(r1)
    lfs f5, 0x14c(r1)
    lfs f4, 0x13c(r1)
    lfs f0, lbl_8088417C
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xac(r1)
    stfs f3, 0x190(r1)
    stfs f3, 0x194(r1)
    stfs f3, 0x198(r1)
    stfs f0, 0x19c(r1)
    stfs f13, 0x50(r1)
    stfs f30, 0x54(r1)
    stfs f29, 0x58(r1)
    stfs f13, 0x160(r1)
    stfs f30, 0x164(r1)
    stfs f29, 0x168(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x170(r1)
    stfs f11, 0x174(r1)
    stfs f12, 0x178(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x180(r1)
    stfs f8, 0x184(r1)
    stfs f9, 0x188(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x16c(r1)
    stfs f5, 0x17c(r1)
    stfs f6, 0x18c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_808841DC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802BE2A0_000017CC
    lfs f3, 0x84(r1)
    lfs f0, lbl_80884190
    fcmpo cr0, f3, f0
    ble lbl_fn_802BE2A0_000017BC
    lfs f0, lbl_808841E0
    b lbl_fn_802BE2A0_000017C0
lbl_fn_802BE2A0_000017BC:
    lfs f0, lbl_808841E4
lbl_fn_802BE2A0_000017C0:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_802BE2A0_000017E0
lbl_fn_802BE2A0_000017CC:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_802BE2A0_000017E0:
    addi r3, r1, 0x8c
    lfs f2, lbl_80884190
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80746AF8@ha
    psq_st f1, 0x0(r31), 0, 0
    lfs f4, 0x538(r30)
    lfs f0, 0xa8(r1)
    stfs f2, 0xac(r1)
    fsubs f3, f0, f4
    lfs f0, lbl_80884248
    stfs f2, 0x94(r1)
    lfd f2, lbl_80746AF8@l(r3)
    fmuls f0, f0, f3
    fmuls f0, f31, f0
    fadds f1, f4, f0
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_808841B0
    fcmpo cr0, f4, f0
    ble lbl_fn_802BE2A0_00001838
    lfs f0, lbl_808841B4
    fsubs f4, f4, f0
lbl_fn_802BE2A0_00001838:
    lfs f0, lbl_808841B8
    fcmpo cr0, f4, f0
    bge lbl_fn_802BE2A0_0000184C
    lfs f0, lbl_808841B4
    fadds f4, f4, f0
lbl_fn_802BE2A0_0000184C:
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_8088424C
    stfs f4, 0x538(r30)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802BE2A0_000018B0
    lfs f0, lbl_80884250
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802BE2A0_000018B0
    li r3, 0x5be
    bl fn_80219E6C
    mr r31, r3
    mr r3, r30
    bl fn_80144710
    lwz r8, 0x590(r30)
    mr r6, r30
    lwz r3, lbl_8087F048
    mr r7, r31
    lfs f1, lbl_80884190
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
lbl_fn_802BE2A0_000018B0:
    lfs f2, 0xb8(r1)
    addi r3, r1, 0xb0
    lfs f0, lbl_808841DC
    addi r31, r1, 0x98
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0xa0(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802BE2A0_00001900
    lfs f3, 0x98(r1)
    lfs f0, lbl_80884190
    fcmpo cr0, f3, f0
    ble lbl_fn_802BE2A0_000018F4
    lfs f0, lbl_808841E0
    b lbl_fn_802BE2A0_000018F8
lbl_fn_802BE2A0_000018F4:
    lfs f0, lbl_808841E4
lbl_fn_802BE2A0_000018F8:
    stfs f0, 0x48(r1)
    b lbl_fn_802BE2A0_00001914
lbl_fn_802BE2A0_00001900:
    frsp f2, f2
    lfs f1, 0x98(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802BE2A0_00001914:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xc0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884190
    addi r4, r1, 0x38
    lfs f30, 0xc8(r1)
    mr r5, r4
    lfs f29, 0xc4(r1)
    addi r3, r1, 0xf0
    lfs f13, 0xc0(r1)
    lfs f12, 0xd8(r1)
    lfs f11, 0xd4(r1)
    lfs f10, 0xd0(r1)
    lfs f9, 0xe8(r1)
    lfs f8, 0xe4(r1)
    lfs f7, 0xe0(r1)
    lfs f6, 0xec(r1)
    lfs f5, 0xdc(r1)
    lfs f4, 0xcc(r1)
    lfs f0, lbl_8088417C
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xa0(r1)
    stfs f3, 0x120(r1)
    stfs f3, 0x124(r1)
    stfs f3, 0x128(r1)
    stfs f0, 0x12c(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xf0(r1)
    stfs f29, 0xf4(r1)
    stfs f30, 0xf8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x100(r1)
    stfs f11, 0x104(r1)
    stfs f12, 0x108(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x110(r1)
    stfs f8, 0x114(r1)
    stfs f9, 0x118(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xfc(r1)
    stfs f5, 0x10c(r1)
    stfs f6, 0x11c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808841DC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802BE2A0_00001A30
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884190
    fcmpo cr0, f3, f0
    ble lbl_fn_802BE2A0_00001A20
    lfs f0, lbl_808841E0
    b lbl_fn_802BE2A0_00001A24
lbl_fn_802BE2A0_00001A20:
    lfs f0, lbl_808841E4
lbl_fn_802BE2A0_00001A24:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802BE2A0_00001A44
lbl_fn_802BE2A0_00001A30:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802BE2A0_00001A44:
    lfs f0, lbl_80884254
    addi r4, r1, 0x44
    lfs f4, lbl_80884190
    mr r3, r30
    fmuls f3, f0, f31
    psq_l f1, 0x0(r4), 0, 0
    fmr f2, f4
    lfs f0, lbl_808841F4
    psq_st f1, 0x0(r31), 0, 0
    mr r4, r31
    stfs f2, 0xa0(r1)
    fmuls f2, f0, f3
    lfs f1, lbl_8088417C
    stfs f4, 0x4c(r1)
    bl fn_802BC4EC
lbl_fn_802BE2A0_00001A80:
    lwz r0, 0x214(r1)
    psq_l f31, 0x208(r1), 0, 0
    lfd f31, 0x200(r1)
    psq_l f30, 0x1f8(r1), 0, 0
    lfd f30, 0x1f0(r1)
    psq_l f29, 0x1e8(r1), 0, 0
    lfd f29, 0x1e0(r1)
    lwz r31, 0x1dc(r1)
    lwz r30, 0x1d8(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_802BE7EC(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    mr r29, r3
    lwz r0, 0x14dc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802BE7EC_00001C24
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_80884258
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802BE7EC_00001C68
    lfs f0, lbl_80884204
    lis r4, lbl_80746B20@ha
    addi r4, r4, lbl_80746B20@l
    li r0, 0x1
    stw r0, 0x14dc(r3)
    addi r4, r4, 0xb0
    li r5, 0x0
    stfs f0, 0x12cc(r3)
    addi r3, r3, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802BE7EC_00001B2C
    li r4, 0x0
    b lbl_fn_802BE7EC_00001B38
lbl_fn_802BE7EC_00001B2C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r29)
    add r4, r3, r0
lbl_fn_802BE7EC_00001B38:
    lfs f0, 0x2c(r4)
    lis r3, lbl_80746B20@ha
    lfs f3, 0x1c(r4)
    addi r3, r3, lbl_80746B20@l
    lfs f4, 0xc(r4)
    addi r4, r3, 0xba
    stfs f4, 0x2c(r1)
    li r5, 0x0
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    lwz r3, 0xd1c(r29)
    addi r31, r3, 0xb0
    mr r3, r31
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802BE7EC_00001B80
    li r3, 0x0
    b lbl_fn_802BE7EC_00001B8C
lbl_fn_802BE7EC_00001B80:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r3, r3, r0
lbl_fn_802BE7EC_00001B8C:
    lfs f4, 0x2c(r3)
    addi r31, r1, 0x14
    lfs f0, 0x34(r1)
    addi r5, r1, 0x8
    lfs f5, 0x1c(r3)
    mr r4, r31
    lfs f6, 0xc(r3)
    fsubs f2, f4, f0
    lfs f3, 0x30(r1)
    mr r3, r31
    lfs f0, 0x2c(r1)
    fsubs f3, f5, f3
    stfs f6, 0x20(r1)
    fsubs f0, f6, f0
    stfs f3, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f5, 0x24(r1)
    stfs f4, 0x28(r1)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F98D0
    lwz r30, lbl_8087F048
    li r3, 0x5c5
    bl fn_80219E6C
    lfs f1, lbl_80884190
    mr r5, r3
    lfs f2, lbl_8088417C
    mr r3, r30
    mr r4, r29
    mr r7, r31
    addi r6, r1, 0x2c
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
    b lbl_fn_802BE7EC_00001C68
lbl_fn_802BE7EC_00001C24:
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802BE7EC_00001C68
    li r31, 0x0
    stw r31, 0x14dc(r29)
    stw r31, 0x14e0(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    mr r3, r29
    li r4, 0x3
    stw r31, 0x58c(r29)
    bl fn_8016E970
lbl_fn_802BE7EC_00001C68:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_802BE9C8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802BE9C8_00001CF0
    li r31, 0x0
    stw r31, 0x14dc(r30)
    stw r31, 0x14e0(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stw r31, 0x58c(r30)
    bl fn_8016E970
lbl_fn_802BE9C8_00001CF0:
    lfs f1, 0x2e4(r30)
    lfs f0, lbl_8088425C
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_802BE9C8_00001D90
    lwz r0, 0x1904(r30)
    cmpwi r0, 0x0
    bne lbl_fn_802BE9C8_00001D90
    lwz r3, lbl_8087F430
    li r4, 0x96
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_802BE9C8_00001D34
    lwz r3, lbl_8087F430
    li r4, 0x96
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_802BE9C8_00001D34:
    lwz r0, 0x1520(r30)
    li r3, 0x57c
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x1520(r30)
    lwz r31, lbl_8087F048
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_80884190
    stw r0, 0xc(r1)
    mr r3, r31
    lfs f2, lbl_8088417C
    mr r4, r30
    lwz r6, 0x590(r30)
    addi r7, r30, 0x528
    addi r8, r30, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    li r0, 0x384
    stw r0, 0x1904(r30)
lbl_fn_802BE9C8_00001D90:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802BEAEC(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    stw r30, 0xd8(r1)
    mr r30, r3
    lwz r0, 0x2dc(r3)
    cmpwi r0, 0x169
    bne lbl_fn_802BEAEC_000020A0
    lfs f30, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_802BEAEC_000020E0
    li r31, 0x0
    stw r31, 0x14dc(r30)
    stw r31, 0x14e0(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_8088417C
    li r4, 0xd
    stw r3, 0x590(r30)
    li r0, 0x1
    lfs f1, lbl_80884190
    addi r3, r30, 0xb0
    stw r4, 0x58c(r30)
    li r4, 0x0
    lfs f2, lbl_80884198
    li r5, 0x167
    stw r31, 0x1504(r30)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    stw r0, 0x3fc(r30)
    stfs f0, 0x2fc(r30)
    bl fn_80097C08
    lfs f0, lbl_80884260
    addi r4, r1, 0x8
    stfs f0, 0x2e8(r30)
    addi r3, r30, 0x14f8
    lwz r5, 0xd1c(r30)
    lfs f4, 0x52c(r30)
    lfs f5, 0x52c(r5)
    lfs f3, 0x528(r5)
    fsubs f5, f5, f4
    lfs f0, 0x528(r30)
    lfs f4, 0x530(r5)
    fsubs f3, f3, f0
    lfs f0, 0x530(r30)
    stfs f5, 0xc(r1)
    fsubs f2, f4, f0
    lfs f0, lbl_80884190
    stfs f3, 0x8(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0x1500(r30)
    stfs f0, 0x14fc(r30)
    bl fn_805F9920
    lfs f0, lbl_80884264
    fcmpo cr0, f1, f0
    ble lbl_fn_802BEAEC_00001ED0
    addi r3, r30, 0x14f8
    mr r4, r3
    bl fn_805F98D0
    b lbl_fn_802BEAEC_00001EE4
lbl_fn_802BEAEC_00001ED0:
    lfs f3, lbl_80884190
    lfs f0, lbl_8088417C
    stfs f3, 0x14f8(r30)
    stfs f3, 0x14fc(r30)
    stfs f0, 0x1500(r30)
lbl_fn_802BEAEC_00001EE4:
    lfs f2, 0x1500(r30)
    addi r3, r30, 0x14f8
    lfs f0, lbl_808841DC
    addi r31, r1, 0x14
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x1c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802BEAEC_00001F34
    lfs f3, 0x14(r1)
    lfs f0, lbl_80884190
    fcmpo cr0, f3, f0
    ble lbl_fn_802BEAEC_00001F28
    lfs f0, lbl_808841E0
    b lbl_fn_802BEAEC_00001F2C
lbl_fn_802BEAEC_00001F28:
    lfs f0, lbl_808841E4
lbl_fn_802BEAEC_00001F2C:
    stfs f0, 0x24(r1)
    b lbl_fn_802BEAEC_00001F48
lbl_fn_802BEAEC_00001F34:
    frsp f2, f2
    lfs f1, 0x14(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x24(r1)
lbl_fn_802BEAEC_00001F48:
    lfs f0, 0x24(r1)
    addi r3, r1, 0xa8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884190
    addi r4, r1, 0x2c
    lfs f4, 0xb0(r1)
    mr r5, r4
    lfs f5, 0xac(r1)
    addi r3, r1, 0x68
    lfs f6, 0xa8(r1)
    lfs f7, 0xc0(r1)
    lfs f8, 0xbc(r1)
    lfs f9, 0xb8(r1)
    lfs f10, 0xd0(r1)
    lfs f11, 0xcc(r1)
    lfs f12, 0xc8(r1)
    lfs f13, 0xd4(r1)
    lfs f31, 0xc4(r1)
    lfs f30, 0xb4(r1)
    lfs f0, lbl_8088417C
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x1c(r1)
    stfs f3, 0x98(r1)
    stfs f3, 0x9c(r1)
    stfs f3, 0xa0(r1)
    stfs f0, 0xa4(r1)
    stfs f6, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f4, 0x64(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f9, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f7, 0x58(r1)
    stfs f9, 0x78(r1)
    stfs f8, 0x7c(r1)
    stfs f7, 0x80(r1)
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f10, 0x4c(r1)
    stfs f12, 0x88(r1)
    stfs f11, 0x8c(r1)
    stfs f10, 0x90(r1)
    stfs f30, 0x38(r1)
    stfs f31, 0x3c(r1)
    stfs f13, 0x40(r1)
    stfs f30, 0x74(r1)
    stfs f31, 0x84(r1)
    stfs f13, 0x94(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F9750
    lfs f2, 0x34(r1)
    lfs f0, lbl_808841DC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802BEAEC_00002064
    lfs f3, 0x30(r1)
    lfs f0, lbl_80884190
    fcmpo cr0, f3, f0
    ble lbl_fn_802BEAEC_00002054
    lfs f0, lbl_808841E0
    b lbl_fn_802BEAEC_00002058
lbl_fn_802BEAEC_00002054:
    lfs f0, lbl_808841E4
lbl_fn_802BEAEC_00002058:
    fneg f0, f0
    stfs f0, 0x20(r1)
    b lbl_fn_802BEAEC_00002078
lbl_fn_802BEAEC_00002064:
    lfs f1, 0x30(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x20(r1)
lbl_fn_802BEAEC_00002078:
    lfs f2, lbl_80884190
    addi r3, r1, 0x20
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x28(r1)
    stfs f2, 0x1c(r1)
    frsp f2, f2
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x534(r30), 0, 0
    stfs f2, 0x53c(r30)
    b lbl_fn_802BEAEC_000020E0
lbl_fn_802BEAEC_000020A0:
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_808841CC
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802BEAEC_000020E0
    lfs f1, lbl_80884190
    li r4, 0x0
    lfs f2, lbl_8088419C
    li r5, 0x169
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0xb0
    bl fn_80097C08
    lfs f0, lbl_8088417C
    stfs f0, 0x2e8(r30)
lbl_fn_802BEAEC_000020E0:
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

asm void fn_802BEE44(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    lfs f0, lbl_808841DC
    addi r4, r3, 0x14f8
    stw r0, 0x234(r1)
    stfd f31, 0x220(r1)
    psq_st f31, 0x228(r1), 0, 0
    stfd f30, 0x210(r1)
    psq_st f30, 0x218(r1), 0, 0
    stw r31, 0x20c(r1)
    mr r31, r3
    stw r30, 0x208(r1)
    addi r30, r1, 0xcc
    stw r29, 0x204(r1)
    lfs f2, 0x1500(r3)
    psq_l f1, 0x0(r4), 0, 0
    fabs f3, f2
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xd4(r1)
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802BEE44_00002184
    lfs f3, 0xcc(r1)
    lfs f0, lbl_80884190
    fcmpo cr0, f3, f0
    ble lbl_fn_802BEE44_00002178
    lfs f0, lbl_808841E0
    b lbl_fn_802BEE44_0000217C
lbl_fn_802BEE44_00002178:
    lfs f0, lbl_808841E4
lbl_fn_802BEE44_0000217C:
    stfs f0, 0x48(r1)
    b lbl_fn_802BEE44_00002198
lbl_fn_802BEE44_00002184:
    frsp f2, f2
    lfs f1, 0xcc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802BEE44_00002198:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x138
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884190
    addi r4, r1, 0x38
    lfs f30, 0x140(r1)
    mr r5, r4
    lfs f31, 0x13c(r1)
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
    lfs f0, lbl_8088417C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xd4(r1)
    stfs f3, 0x198(r1)
    stfs f3, 0x19c(r1)
    stfs f3, 0x1a0(r1)
    stfs f0, 0x1a4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x168(r1)
    stfs f31, 0x16c(r1)
    stfs f30, 0x170(r1)
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
    lfs f0, lbl_808841DC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802BEE44_000022B4
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884190
    fcmpo cr0, f3, f0
    ble lbl_fn_802BEE44_000022A4
    lfs f0, lbl_808841E0
    b lbl_fn_802BEE44_000022A8
lbl_fn_802BEE44_000022A4:
    lfs f0, lbl_808841E4
lbl_fn_802BEE44_000022A8:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802BEE44_000022C8
lbl_fn_802BEE44_000022B4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802BEE44_000022C8:
    lfs f4, lbl_80884190
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0xc0
    fmr f2, f4
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x528(r31), 0, 0
    addi r5, r1, 0xb4
    stfs f2, 0xd4(r1)
    lfs f2, 0x530(r31)
    stfs f2, 0xc8(r1)
    lwz r3, lbl_8087EFA8
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, lbl_80884268
    lfs f3, 0x570(r31)
    lfs f5, 0x3a4(r3)
    fmuls f3, f3, f0
    lfs f6, 0x400(r31)
    lfs f0, lbl_808841D8
    fmuls f31, f5, f6
    lfs f6, lbl_808841CC
    psq_l f1, 0x534(r31), 0, 0
    lfs f2, 0x53c(r31)
    fcmpo cr0, f3, f0
    fmuls f6, f6, f31
    stfs f4, 0x4c(r1)
    lfs f5, lbl_8088417C
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0xbc(r1)
    stfs f3, 0x570(r31)
    bge lbl_fn_802BEE44_00002348
    stfs f4, 0x570(r31)
lbl_fn_802BEE44_00002348:
    lfs f0, lbl_8088417C
    fcmpo cr0, f5, f0
    ble lbl_fn_802BEE44_00002358
    fmr f5, f0
lbl_fn_802BEE44_00002358:
    lfs f0, lbl_80884204
    fcmpo cr0, f5, f0
    ble lbl_fn_802BEE44_00002388
    fsubs f4, f5, f0
    lfs f3, lbl_808841A8
    lfs f0, lbl_80884190
    fdivs f5, f4, f3
    fmuls f5, f5, f6
    fcmpo cr0, f5, f0
    bge lbl_fn_802BEE44_0000238C
    fmr f5, f0
    b lbl_fn_802BEE44_0000238C
lbl_fn_802BEE44_00002388:
    lfs f5, lbl_80884190
lbl_fn_802BEE44_0000238C:
    lfs f3, lbl_80884270
    addi r3, r31, 0x574
    lfs f4, 0x570(r31)
    lfs f0, lbl_8088426C
    fmuls f3, f3, f4
    fmsubs f0, f0, f5, f3
    fadds f0, f4, f0
    stfs f0, 0x570(r31)
    bl fn_805F9920
    lfs f0, lbl_80884274
    lfs f4, lbl_8088417C
    fmuls f0, f0, f31
    fcmpo cr0, f4, f0
    bge lbl_fn_802BEE44_000023C8
    b lbl_fn_802BEE44_000023CC
lbl_fn_802BEE44_000023C8:
    fmr f4, f0
lbl_fn_802BEE44_000023CC:
    lfs f0, lbl_80884274
    lfs f3, 0x574(r31)
    fmuls f0, f0, f31
    lfs f5, lbl_8088417C
    fnmsubs f3, f3, f4, f3
    fcmpo cr0, f5, f0
    stfs f3, 0x574(r31)
    bge lbl_fn_802BEE44_000023F0
    b lbl_fn_802BEE44_000023F4
lbl_fn_802BEE44_000023F0:
    fmr f5, f0
lbl_fn_802BEE44_000023F4:
    lfs f0, 0x57c(r31)
    lfs f1, 0xb8(r1)
    fnmsubs f0, f0, f5, f0
    stfs f0, 0x57c(r31)
    bl fn_8068AD58
    frsp f4, f1
    lfs f3, 0x570(r31)
    lfs f0, lbl_80884190
    lfs f1, 0xb8(r1)
    fmuls f3, f3, f4
    stfs f0, 0xac(r1)
    stfs f3, 0xa8(r1)
    bl fn_8068A850
    frsp f3, f1
    lfs f0, 0x570(r31)
    lfs f4, lbl_8088417C
    fmuls f0, f0, f3
    fcmpo cr0, f4, f31
    stfs f0, 0xb0(r1)
    bge lbl_fn_802BEE44_00002448
    b lbl_fn_802BEE44_0000244C
lbl_fn_802BEE44_00002448:
    fmr f4, f31
lbl_fn_802BEE44_0000244C:
    lfs f0, 0xa8(r1)
    lfs f3, lbl_8088417C
    fmuls f0, f0, f4
    fcmpo cr0, f3, f31
    stfs f0, 0xa8(r1)
    bge lbl_fn_802BEE44_00002468
    b lbl_fn_802BEE44_0000246C
lbl_fn_802BEE44_00002468:
    fmr f3, f31
lbl_fn_802BEE44_0000246C:
    lfs f0, 0xac(r1)
    lfs f4, lbl_8088417C
    fmuls f0, f0, f3
    fcmpo cr0, f4, f31
    stfs f0, 0xac(r1)
    bge lbl_fn_802BEE44_00002488
    b lbl_fn_802BEE44_0000248C
lbl_fn_802BEE44_00002488:
    fmr f4, f31
lbl_fn_802BEE44_0000248C:
    lfs f0, 0xb0(r1)
    lis r0, 0x4330
    lis r3, lbl_80746B00@ha
    lwz r4, lbl_8087F0A8
    fmuls f0, f0, f4
    stw r0, 0x1f8(r1)
    lfd f6, lbl_80746B00@l(r3)
    stfs f0, 0xb0(r1)
    lfs f4, lbl_808841C8
    lwz r0, 0x30(r4)
    lfs f3, 0x578(r31)
    mullw r0, r0, r0
    lfs f0, lbl_80884190
    xoris r0, r0, 0x8000
    stw r0, 0x1fc(r1)
    lfd f5, 0x1f8(r1)
    fsubs f5, f5, f6
    fdivs f4, f4, f5
    fmadds f3, f31, f4, f3
    stfs f3, 0x578(r31)
    fcmpo cr0, f3, f0
    bge lbl_fn_802BEE44_000024FC
    lfs f0, lbl_80884278
    fcmpo cr0, f3, f0
    bge lbl_fn_802BEE44_000024F4
    b lbl_fn_802BEE44_000024F8
lbl_fn_802BEE44_000024F4:
    fmr f3, f0
lbl_fn_802BEE44_000024F8:
    stfs f3, 0x578(r31)
lbl_fn_802BEE44_000024FC:
    lfs f0, 0x578(r31)
    lfs f4, 0x57c(r31)
    fmuls f7, f0, f31
    lfs f3, 0x574(r31)
    lfs f0, 0xac(r1)
    fmuls f6, f4, f31
    fmuls f8, f3, f31
    lfs f5, 0xa8(r1)
    fadds f4, f0, f7
    lfs f3, 0xb0(r1)
    lfs f0, lbl_8088427C
    fadds f5, f5, f8
    fadds f3, f3, f6
    stfs f8, 0x74(r1)
    fcmpo cr0, f4, f0
    stfs f7, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f5, 0xa8(r1)
    stfs f4, 0xac(r1)
    stfs f3, 0xb0(r1)
    bge lbl_fn_802BEE44_00002554
    stfs f0, 0xac(r1)
lbl_fn_802BEE44_00002554:
    li r0, 0x0
    stw r0, 0x1dc(r1)
    mr r4, r31
    addi r3, r1, 0x98
    stw r0, 0x1e0(r1)
    addi r5, r1, 0xc0
    stw r0, 0x1e4(r1)
    stw r0, 0x1e8(r1)
    bl fn_80176548
    mr r3, r31
    lis r29, 0x8000
    bl fn_80179D44
    or r7, r29, r3
    lwz r3, lbl_8087EE98
    lfs f1, 0xa4(r1)
    addi r4, r1, 0x1a8
    addi r5, r1, 0x98
    addi r6, r1, 0xa8
    addi r8, r31, 0x5b8
    li r9, 0x0
    bl fn_8004D388
    addi r4, r1, 0x1b8
    lfs f2, 0x1c0(r1)
    addi r3, r1, 0xc0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lwz r3, 0x1dc(r1)
    stfs f2, 0xc8(r1)
    lfs f3, 0xc0(r1)
    cmpwi r3, 0x0
    lfs f0, 0x5a4(r31)
    lfs f4, 0xc4(r1)
    fsubs f3, f3, f0
    lfs f0, 0xa4(r1)
    stfs f3, 0xc0(r1)
    lfs f3, 0x5a8(r31)
    fsubs f3, f4, f3
    stfs f3, 0xc4(r1)
    fsubs f0, f3, f0
    lfs f3, 0x5ac(r31)
    fsubs f3, f2, f3
    stfs f0, 0xc4(r1)
    stfs f3, 0xc8(r1)
    beq lbl_fn_802BEE44_0000260C
    lwz r0, 0x0(r3)
    b lbl_fn_802BEE44_00002610
lbl_fn_802BEE44_0000260C:
    li r0, -0x1
lbl_fn_802BEE44_00002610:
    stw r0, 0x634(r31)
    addi r3, r1, 0xc0
    addi r5, r1, 0xb4
    addi r6, r1, 0xa8
    psq_l f1, 0x0(r3), 0, 0
    addi r30, r1, 0x8c
    lfs f2, 0xc8(r1)
    addi r3, r1, 0x108
    stfs f2, 0x530(r31)
    li r4, 0x79
    lfs f2, 0xbc(r1)
    psq_st f1, 0x528(r31), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x534(r31), 0, 0
    lfs f3, lbl_80884190
    stfs f2, 0x53c(r31)
    lfs f0, lbl_8088417C
    psq_l f1, 0x0(r6), 0, 0
    lfs f2, 0xb0(r1)
    stfs f2, 0x57c(r31)
    lfs f2, 0x530(r31)
    psq_st f1, 0x574(r31), 0, 0
    psq_l f1, 0x528(r31), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f3, 0x5c(r1)
    stfs f3, 0x60(r1)
    stfs f0, 0x64(r1)
    lfs f1, 0x538(r31)
    stfs f2, 0x94(r1)
    bl fn_805F8E70
    addi r4, r1, 0x5c
    addi r3, r1, 0x108
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x64(r1)
    li r3, 0x5c0
    lfs f4, lbl_808841A4
    lfs f3, 0x60(r1)
    lfs f0, 0x5c(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0x52c(r31)
    fmuls f7, f0, f4
    lfs f4, 0x528(r31)
    lfs f0, 0x530(r31)
    fsubs f3, f3, f6
    fsubs f4, f4, f7
    stfs f7, 0x68(r1)
    fsubs f0, f0, f5
    lwz r29, 0x590(r31)
    stfs f6, 0x6c(r1)
    stfs f5, 0x70(r1)
    stfs f4, 0x528(r31)
    stfs f3, 0x52c(r31)
    stfs f0, 0x530(r31)
    bl fn_80219E6C
    mr r7, r3
    lwz r3, lbl_8087F048
    lfs f1, lbl_80884190
    mr r6, r31
    mr r8, r29
    li r4, 0x0
    li r5, 0x0
    li r9, 0x3c
    li r10, -0x1
    bl fn_800F8C6C
    lwz r3, 0x1504(r31)
    psq_l f1, 0x0(r30), 0, 0
    addi r0, r3, 0x1
    lfs f2, 0x94(r1)
    cmpwi r0, 0x3c
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
    stw r0, 0x1504(r31)
    ble lbl_fn_802BEE44_00002858
    lwz r4, 0xd1c(r31)
    frsp f0, f2
    lfs f3, 0x528(r31)
    addi r3, r1, 0x80
    lfs f5, 0x530(r4)
    lfs f4, 0x528(r4)
    fsubs f5, f5, f0
    lfs f0, lbl_80884190
    fsubs f3, f4, f3
    stfs f0, 0x84(r1)
    stfs f3, 0x80(r1)
    stfs f5, 0x88(r1)
    bl fn_805F9920
    lfs f0, lbl_80884264
    fcmpo cr0, f1, f0
    bge lbl_fn_802BEE44_00002794
    lfs f3, lbl_80884190
    lfs f0, lbl_8088417C
    stfs f3, 0x80(r1)
    stfs f3, 0x84(r1)
    stfs f0, 0x88(r1)
    b lbl_fn_802BEE44_000027A0
lbl_fn_802BEE44_00002794:
    addi r3, r1, 0x80
    mr r4, r3
    bl fn_805F98D0
lbl_fn_802BEE44_000027A0:
    lfs f3, lbl_80884190
    addi r3, r1, 0xd8
    lfs f0, lbl_8088417C
    li r4, 0x79
    stfs f3, 0x50(r1)
    stfs f3, 0x54(r1)
    stfs f0, 0x58(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x50
    addi r3, r1, 0xd8
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x80
    addi r4, r1, 0x50
    bl fn_805F9990
    lfs f0, lbl_80884280
    fcmpo cr0, f1, f0
    blt lbl_fn_802BEE44_000027F8
    lwz r0, 0x1504(r31)
    cmpwi r0, 0xb4
    ble lbl_fn_802BEE44_00002858
lbl_fn_802BEE44_000027F8:
    li r30, 0x0
    stw r30, 0x14dc(r31)
    stw r30, 0x14e0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_8088417C
    li r4, 0xe
    stw r3, 0x590(r31)
    li r0, 0x1
    lfs f1, lbl_80884190
    addi r3, r31, 0xb0
    stw r4, 0x58c(r31)
    li r4, 0x0
    lfs f2, lbl_80884198
    li r5, 0x166
    stw r30, 0x1504(r31)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    stw r0, 0x3fc(r31)
    stfs f0, 0x2fc(r31)
    bl fn_80097C08
    lfs f0, lbl_8088417C
    stfs f0, 0x2e8(r31)
lbl_fn_802BEE44_00002858:
    lwz r0, 0x234(r1)
    psq_l f31, 0x228(r1), 0, 0
    lfd f31, 0x220(r1)
    psq_l f30, 0x218(r1), 0, 0
    lfd f30, 0x210(r1)
    lwz r31, 0x20c(r1)
    lwz r30, 0x208(r1)
    lwz r29, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}

asm void fn_802BF5C0(void)
{
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    stw r0, 0x2d4(r1)
    stfd f31, 0x2c0(r1)
    psq_st f31, 0x2c8(r1), 0, 0
    stfd f30, 0x2b0(r1)
    psq_st f30, 0x2b8(r1), 0, 0
    stfd f29, 0x2a0(r1)
    psq_st f29, 0x2a8(r1), 0, 0
    stw r31, 0x29c(r1)
    mr r31, r3
    stw r30, 0x298(r1)
    stw r29, 0x294(r1)
    lwz r4, 0xd1c(r3)
    lfs f0, 0x530(r3)
    lfs f5, 0x530(r4)
    lfs f3, 0x528(r3)
    addi r3, r1, 0x114
    lfs f4, 0x528(r4)
    fsubs f5, f5, f0
    lfs f0, lbl_80884190
    fsubs f3, f4, f3
    stfs f5, 0x11c(r1)
    stfs f3, 0x114(r1)
    stfs f0, 0x118(r1)
    bl fn_805F9920
    lfs f0, lbl_80884264
    fcmpo cr0, f1, f0
    bge lbl_fn_802BF5C0_00002910
    lfs f3, lbl_80884190
    lfs f0, lbl_8088417C
    stfs f3, 0x114(r1)
    stfs f3, 0x118(r1)
    stfs f0, 0x11c(r1)
    b lbl_fn_802BF5C0_0000291C
lbl_fn_802BF5C0_00002910:
    addi r3, r1, 0x114
    mr r4, r3
    bl fn_805F98D0
lbl_fn_802BF5C0_0000291C:
    lfs f2, 0x11c(r1)
    addi r3, r1, 0x114
    lfs f0, lbl_808841DC
    addi r30, r1, 0x108
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x110(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802BF5C0_0000296C
    lfs f3, 0x108(r1)
    lfs f0, lbl_80884190
    fcmpo cr0, f3, f0
    ble lbl_fn_802BF5C0_00002960
    lfs f0, lbl_808841E0
    b lbl_fn_802BF5C0_00002964
lbl_fn_802BF5C0_00002960:
    lfs f0, lbl_808841E4
lbl_fn_802BF5C0_00002964:
    stfs f0, 0xa8(r1)
    b lbl_fn_802BF5C0_00002980
lbl_fn_802BF5C0_0000296C:
    frsp f2, f2
    lfs f1, 0x108(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xa8(r1)
lbl_fn_802BF5C0_00002980:
    lfs f0, 0xa8(r1)
    addi r3, r1, 0x1c0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884190
    addi r4, r1, 0x98
    lfs f30, 0x1c8(r1)
    mr r5, r4
    lfs f29, 0x1c4(r1)
    addi r3, r1, 0x1f0
    lfs f13, 0x1c0(r1)
    lfs f12, 0x1d8(r1)
    lfs f11, 0x1d4(r1)
    lfs f10, 0x1d0(r1)
    lfs f9, 0x1e8(r1)
    lfs f8, 0x1e4(r1)
    lfs f7, 0x1e0(r1)
    lfs f6, 0x1ec(r1)
    lfs f5, 0x1dc(r1)
    lfs f4, 0x1cc(r1)
    lfs f0, lbl_8088417C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x110(r1)
    stfs f3, 0x220(r1)
    stfs f3, 0x224(r1)
    stfs f3, 0x228(r1)
    stfs f0, 0x22c(r1)
    stfs f13, 0x68(r1)
    stfs f29, 0x6c(r1)
    stfs f30, 0x70(r1)
    stfs f13, 0x1f0(r1)
    stfs f29, 0x1f4(r1)
    stfs f30, 0x1f8(r1)
    stfs f10, 0x74(r1)
    stfs f11, 0x78(r1)
    stfs f12, 0x7c(r1)
    stfs f10, 0x200(r1)
    stfs f11, 0x204(r1)
    stfs f12, 0x208(r1)
    stfs f7, 0x80(r1)
    stfs f8, 0x84(r1)
    stfs f9, 0x88(r1)
    stfs f7, 0x210(r1)
    stfs f8, 0x214(r1)
    stfs f9, 0x218(r1)
    stfs f4, 0x8c(r1)
    stfs f5, 0x90(r1)
    stfs f6, 0x94(r1)
    stfs f4, 0x1fc(r1)
    stfs f5, 0x20c(r1)
    stfs f6, 0x21c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xa0(r1)
    bl fn_805F9750
    lfs f2, 0xa0(r1)
    lfs f0, lbl_808841DC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802BF5C0_00002A9C
    lfs f3, 0x9c(r1)
    lfs f0, lbl_80884190
    fcmpo cr0, f3, f0
    ble lbl_fn_802BF5C0_00002A8C
    lfs f0, lbl_808841E0
    b lbl_fn_802BF5C0_00002A90
lbl_fn_802BF5C0_00002A8C:
    lfs f0, lbl_808841E4
lbl_fn_802BF5C0_00002A90:
    fneg f0, f0
    stfs f0, 0xa4(r1)
    b lbl_fn_802BF5C0_00002AB0
lbl_fn_802BF5C0_00002A9C:
    lfs f1, 0x9c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xa4(r1)
lbl_fn_802BF5C0_00002AB0:
    lfs f4, lbl_80884190
    addi r3, r1, 0xa4
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0xfc
    fmr f2, f4
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x528(r31), 0, 0
    addi r5, r1, 0xf0
    stfs f2, 0x110(r1)
    lis r3, lbl_80746AF8@ha
    lfs f2, 0x530(r31)
    stfs f2, 0x104(r1)
    lfs f3, 0x10c(r1)
    psq_st f1, 0x0(r4), 0, 0
    lfs f31, lbl_8088417C
    psq_l f1, 0x534(r31), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f2, 0x53c(r31)
    lfs f0, 0xf4(r1)
    stfs f2, 0xf8(r1)
    fsubs f1, f3, f0
    lfs f30, lbl_80884234
    stfs f4, 0xac(r1)
    lfd f2, lbl_80746AF8@l(r3)
    bl fn_8068AEA8
    frsp f9, f1
    lfs f0, lbl_808841B0
    fcmpo cr0, f9, f0
    ble lbl_fn_802BF5C0_00002B2C
    lfs f0, lbl_808841B4
    fsubs f9, f9, f0
lbl_fn_802BF5C0_00002B2C:
    lfs f0, lbl_808841B8
    fcmpo cr0, f9, f0
    bge lbl_fn_802BF5C0_00002B40
    lfs f0, lbl_808841B4
    fadds f9, f9, f0
lbl_fn_802BF5C0_00002B40:
    lfs f0, lbl_808841B0
    lwz r3, lbl_8087EFA8
    fdivs f0, f9, f0
    lfs f7, 0x400(r31)
    lfs f6, 0x3a4(r3)
    lfs f5, lbl_808841BC
    lfs f3, 0x570(r31)
    lfs f4, lbl_8088417C
    fabs f8, f0
    lfs f0, lbl_80884284
    fmuls f29, f6, f7
    lfs f10, lbl_8088419C
    fmuls f3, f3, f0
    lfs f0, lbl_808841D8
    frsp f6, f8
    lfs f7, 0xf4(r1)
    fcmpo cr0, f3, f0
    stfs f3, 0x570(r31)
    fmuls f30, f30, f29
    fmuls f5, f6, f5
    fadds f0, f4, f5
    fmuls f10, f10, f0
    fmuls f0, f9, f10
    fadds f7, f7, f0
    stfs f7, 0xf4(r1)
    bge lbl_fn_802BF5C0_00002BB0
    lfs f0, lbl_80884190
    stfs f0, 0x570(r31)
lbl_fn_802BF5C0_00002BB0:
    lfs f0, lbl_8088417C
    fcmpo cr0, f31, f0
    ble lbl_fn_802BF5C0_00002BC0
    fmr f31, f0
lbl_fn_802BF5C0_00002BC0:
    lfs f3, 0x570(r31)
    fmuls f31, f31, f30
    lfs f0, lbl_80884194
    lfs f4, lbl_80884288
    fcmpo cr0, f3, f0
    bge lbl_fn_802BF5C0_00002BDC
    lfs f4, lbl_80884190
lbl_fn_802BF5C0_00002BDC:
    lfs f3, lbl_808841B0
    lfs f0, lbl_80884190
    fdivs f3, f9, f3
    fabs f3, f3
    frsp f3, f3
    fsubs f6, f3, f4
    fcmpo cr0, f6, f0
    bge lbl_fn_802BF5C0_00002C00
    fmr f6, f0
lbl_fn_802BF5C0_00002C00:
    lfs f5, lbl_8088417C
    lfs f3, lbl_808841F4
    fsubs f4, f5, f4
    lfs f0, lbl_80884190
    fdivs f6, f6, f4
    fnmsubs f3, f3, f6, f5
    fmuls f31, f31, f3
    fcmpo cr0, f31, f0
    bge lbl_fn_802BF5C0_00002C28
    fmr f31, f0
lbl_fn_802BF5C0_00002C28:
    lfs f3, lbl_80884270
    addi r3, r31, 0x574
    lfs f4, 0x570(r31)
    lfs f0, lbl_8088426C
    fmuls f3, f3, f4
    fmsubs f0, f0, f31, f3
    fadds f0, f4, f0
    stfs f0, 0x570(r31)
    bl fn_805F9920
    lfs f0, lbl_8088428C
    lfs f4, lbl_8088417C
    fmuls f0, f0, f29
    fcmpo cr0, f4, f0
    bge lbl_fn_802BF5C0_00002C64
    b lbl_fn_802BF5C0_00002C68
lbl_fn_802BF5C0_00002C64:
    fmr f4, f0
lbl_fn_802BF5C0_00002C68:
    lfs f0, lbl_8088428C
    lfs f3, 0x574(r31)
    fmuls f0, f0, f29
    lfs f5, lbl_8088417C
    fnmsubs f3, f3, f4, f3
    fcmpo cr0, f5, f0
    stfs f3, 0x574(r31)
    bge lbl_fn_802BF5C0_00002C8C
    b lbl_fn_802BF5C0_00002C90
lbl_fn_802BF5C0_00002C8C:
    fmr f5, f0
lbl_fn_802BF5C0_00002C90:
    lfs f0, 0x57c(r31)
    lfs f1, 0xf4(r1)
    fnmsubs f0, f0, f5, f0
    stfs f0, 0x57c(r31)
    bl fn_8068AD58
    frsp f4, f1
    lfs f3, 0x570(r31)
    lfs f0, lbl_80884190
    lfs f1, 0xf4(r1)
    fmuls f3, f3, f4
    stfs f0, 0xe8(r1)
    stfs f3, 0xe4(r1)
    bl fn_8068A850
    frsp f3, f1
    lfs f0, 0x570(r31)
    lfs f4, lbl_8088417C
    fmuls f0, f0, f3
    fcmpo cr0, f4, f29
    stfs f0, 0xec(r1)
    bge lbl_fn_802BF5C0_00002CE4
    b lbl_fn_802BF5C0_00002CE8
lbl_fn_802BF5C0_00002CE4:
    fmr f4, f29
lbl_fn_802BF5C0_00002CE8:
    lfs f0, 0xe4(r1)
    lfs f3, lbl_8088417C
    fmuls f0, f0, f4
    fcmpo cr0, f3, f29
    stfs f0, 0xe4(r1)
    bge lbl_fn_802BF5C0_00002D04
    b lbl_fn_802BF5C0_00002D08
lbl_fn_802BF5C0_00002D04:
    fmr f3, f29
lbl_fn_802BF5C0_00002D08:
    lfs f0, 0xe8(r1)
    lfs f4, lbl_8088417C
    fmuls f0, f0, f3
    fcmpo cr0, f4, f29
    stfs f0, 0xe8(r1)
    bge lbl_fn_802BF5C0_00002D24
    b lbl_fn_802BF5C0_00002D28
lbl_fn_802BF5C0_00002D24:
    fmr f4, f29
lbl_fn_802BF5C0_00002D28:
    lfs f0, 0xec(r1)
    lis r0, 0x4330
    lis r3, lbl_80746B00@ha
    lwz r4, lbl_8087F0A8
    fmuls f0, f0, f4
    stw r0, 0x280(r1)
    lfd f6, lbl_80746B00@l(r3)
    stfs f0, 0xec(r1)
    lfs f4, lbl_808841C8
    lwz r0, 0x30(r4)
    lfs f3, 0x578(r31)
    mullw r0, r0, r0
    lfs f0, lbl_80884190
    xoris r0, r0, 0x8000
    stw r0, 0x284(r1)
    lfd f5, 0x280(r1)
    fsubs f5, f5, f6
    fdivs f4, f4, f5
    fmadds f3, f29, f4, f3
    stfs f3, 0x578(r31)
    fcmpo cr0, f3, f0
    bge lbl_fn_802BF5C0_00002D98
    lfs f0, lbl_80884278
    fcmpo cr0, f3, f0
    bge lbl_fn_802BF5C0_00002D90
    b lbl_fn_802BF5C0_00002D94
lbl_fn_802BF5C0_00002D90:
    fmr f3, f0
lbl_fn_802BF5C0_00002D94:
    stfs f3, 0x578(r31)
lbl_fn_802BF5C0_00002D98:
    lfs f0, 0x578(r31)
    lfs f4, 0x57c(r31)
    fmuls f7, f0, f29
    lfs f3, 0x574(r31)
    lfs f0, 0xe8(r1)
    fmuls f6, f4, f29
    fmuls f8, f3, f29
    lfs f5, 0xe4(r1)
    fadds f4, f0, f7
    lfs f3, 0xec(r1)
    lfs f0, lbl_8088427C
    fadds f5, f5, f8
    fadds f3, f3, f6
    stfs f8, 0xbc(r1)
    fcmpo cr0, f4, f0
    stfs f7, 0xc0(r1)
    stfs f6, 0xc4(r1)
    stfs f5, 0xe4(r1)
    stfs f4, 0xe8(r1)
    stfs f3, 0xec(r1)
    bge lbl_fn_802BF5C0_00002DF0
    stfs f0, 0xe8(r1)
lbl_fn_802BF5C0_00002DF0:
    addi r30, r1, 0xfc
    li r0, 0x0
    lfs f2, 0x104(r1)
    addi r3, r1, 0xd8
    psq_l f1, 0x0(r30), 0, 0
    mr r4, r31
    psq_st f1, 0x0(r3), 0, 0
    mr r5, r30
    addi r3, r1, 0xc8
    stfs f2, 0xe0(r1)
    stw r0, 0x264(r1)
    stw r0, 0x268(r1)
    stw r0, 0x26c(r1)
    stw r0, 0x270(r1)
    bl fn_80176548
    mr r3, r31
    lis r29, 0x8000
    bl fn_80179D44
    or r7, r29, r3
    lwz r3, lbl_8087EE98
    lfs f1, 0xd4(r1)
    addi r4, r1, 0x230
    addi r5, r1, 0xc8
    addi r6, r1, 0xe4
    addi r8, r31, 0x5b8
    li r9, 0x0
    bl fn_8004D388
    addi r3, r1, 0x240
    lfs f2, 0x248(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lwz r3, 0x264(r1)
    stfs f2, 0x104(r1)
    lfs f3, 0xfc(r1)
    cmpwi r3, 0x0
    lfs f0, 0x5a4(r31)
    lfs f4, 0x100(r1)
    fsubs f3, f3, f0
    lfs f0, 0xd4(r1)
    stfs f3, 0xfc(r1)
    lfs f3, 0x5a8(r31)
    fsubs f3, f4, f3
    stfs f3, 0x100(r1)
    fsubs f0, f3, f0
    lfs f3, 0x5ac(r31)
    fsubs f3, f2, f3
    stfs f0, 0x100(r1)
    stfs f3, 0x104(r1)
    beq lbl_fn_802BF5C0_00002EBC
    lwz r0, 0x0(r3)
    b lbl_fn_802BF5C0_00002EC0
lbl_fn_802BF5C0_00002EBC:
    li r0, -0x1
lbl_fn_802BF5C0_00002EC0:
    stw r0, 0x634(r31)
    addi r4, r1, 0xfc
    lwz r3, 0x1504(r31)
    addi r5, r1, 0xf0
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r1, 0xe4
    lfs f2, 0x104(r1)
    addi r0, r3, 0x1
    stfs f2, 0x530(r31)
    cmpwi r0, 0x1e
    lfs f2, 0xf8(r1)
    psq_st f1, 0x528(r31), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0xec(r1)
    stfs f2, 0x57c(r31)
    psq_st f1, 0x574(r31), 0, 0
    stw r0, 0x1504(r31)
    ble lbl_fn_802BF5C0_000032E8
    lfs f3, lbl_80884190
    addi r3, r1, 0x190
    lfs f0, lbl_8088417C
    li r4, 0x79
    stfs f3, 0xb0(r1)
    stfs f3, 0xb4(r1)
    stfs f0, 0xb8(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0xb0
    addi r3, r1, 0x190
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x114
    addi r4, r1, 0xb0
    bl fn_805F9990
    lfs f0, lbl_80884290
    fcmpo cr0, f1, f0
    bgt lbl_fn_802BF5C0_00002F6C
    lwz r0, 0x1504(r31)
    cmpwi r0, 0x5a
    ble lbl_fn_802BF5C0_000032E8
lbl_fn_802BF5C0_00002F6C:
    lwz r0, 0x14f4(r31)
    cmpwi r0, 0x4b0
    ble lbl_fn_802BF5C0_0000304C
    li r0, 0x0
    stw r0, 0x14dc(r31)
    stw r0, 0x14e0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_8088417C
    li r4, 0x10
    stw r3, 0x590(r31)
    li r0, 0x1
    lfs f1, lbl_80884190
    addi r3, r31, 0xb0
    stw r4, 0x58c(r31)
    li r4, 0x0
    lfs f2, lbl_80884198
    li r5, 0x168
    stw r0, 0x3fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2fc(r31)
    bl fn_80097C08
    lfs f0, lbl_8088417C
    addi r3, r31, 0x1508
    psq_l f1, 0x528(r31), 0, 0
    li r4, 0x0
    lfs f2, 0x530(r31)
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1510(r31)
    lwz r3, lbl_8087F430
    lwz r5, 0x10d8(r3)
    lwz r0, 0x78(r5)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802BF5C0_00003030
lbl_fn_802BF5C0_00003008:
    lwz r3, 0x7c(r5)
    lwzx r0, r3, r6
    cmpwi r0, 0x1f4
    bne lbl_fn_802BF5C0_00003024
    mulli r0, r4, 0x28
    add r4, r3, r0
    b lbl_fn_802BF5C0_00003034
lbl_fn_802BF5C0_00003024:
    addi r6, r6, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_802BF5C0_00003008
lbl_fn_802BF5C0_00003030:
    li r4, 0x0
lbl_fn_802BF5C0_00003034:
    psq_l f1, 0x4(r4), 0, 0
    addi r3, r31, 0x1514
    lfs f2, 0xc(r4)
    stfs f2, 0x151c(r31)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_802BF5C0_000032E8
lbl_fn_802BF5C0_0000304C:
    li r30, 0x0
    stw r30, 0x14dc(r31)
    stw r30, 0x14e0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_8088417C
    li r4, 0xd
    stw r3, 0x590(r31)
    li r0, 0x1
    lfs f1, lbl_80884190
    addi r3, r31, 0xb0
    stw r4, 0x58c(r31)
    li r4, 0x0
    lfs f2, lbl_80884198
    li r5, 0x167
    stw r30, 0x1504(r31)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    stw r0, 0x3fc(r31)
    stfs f0, 0x2fc(r31)
    bl fn_80097C08
    lfs f0, lbl_80884260
    addi r4, r1, 0x8
    stfs f0, 0x2e8(r31)
    addi r3, r31, 0x14f8
    lwz r5, 0xd1c(r31)
    lfs f4, 0x52c(r31)
    lfs f5, 0x52c(r5)
    lfs f3, 0x528(r5)
    fsubs f5, f5, f4
    lfs f0, 0x528(r31)
    lfs f4, 0x530(r5)
    fsubs f3, f3, f0
    lfs f0, 0x530(r31)
    stfs f5, 0xc(r1)
    fsubs f2, f4, f0
    lfs f0, lbl_80884190
    stfs f3, 0x8(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0x1500(r31)
    stfs f0, 0x14fc(r31)
    bl fn_805F9920
    lfs f0, lbl_80884264
    fcmpo cr0, f1, f0
    ble lbl_fn_802BF5C0_0000311C
    addi r3, r31, 0x14f8
    mr r4, r3
    bl fn_805F98D0
    b lbl_fn_802BF5C0_00003130
lbl_fn_802BF5C0_0000311C:
    lfs f3, lbl_80884190
    lfs f0, lbl_8088417C
    stfs f3, 0x14f8(r31)
    stfs f3, 0x14fc(r31)
    stfs f0, 0x1500(r31)
lbl_fn_802BF5C0_00003130:
    lfs f2, 0x1500(r31)
    addi r3, r31, 0x14f8
    lfs f0, lbl_808841DC
    addi r30, r1, 0x14
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x1c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802BF5C0_00003180
    lfs f3, 0x14(r1)
    lfs f0, lbl_80884190
    fcmpo cr0, f3, f0
    ble lbl_fn_802BF5C0_00003174
    lfs f0, lbl_808841E0
    b lbl_fn_802BF5C0_00003178
lbl_fn_802BF5C0_00003174:
    lfs f0, lbl_808841E4
lbl_fn_802BF5C0_00003178:
    stfs f0, 0x24(r1)
    b lbl_fn_802BF5C0_00003194
lbl_fn_802BF5C0_00003180:
    frsp f2, f2
    lfs f1, 0x14(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x24(r1)
lbl_fn_802BF5C0_00003194:
    lfs f0, 0x24(r1)
    addi r3, r1, 0x160
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884190
    addi r4, r1, 0x2c
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
    lfs f29, 0x17c(r1)
    lfs f30, 0x16c(r1)
    lfs f0, lbl_8088417C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x1c(r1)
    stfs f3, 0x150(r1)
    stfs f3, 0x154(r1)
    stfs f3, 0x158(r1)
    stfs f0, 0x15c(r1)
    stfs f6, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f4, 0x64(r1)
    stfs f6, 0x120(r1)
    stfs f5, 0x124(r1)
    stfs f4, 0x128(r1)
    stfs f9, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f7, 0x58(r1)
    stfs f9, 0x130(r1)
    stfs f8, 0x134(r1)
    stfs f7, 0x138(r1)
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f10, 0x4c(r1)
    stfs f12, 0x140(r1)
    stfs f11, 0x144(r1)
    stfs f10, 0x148(r1)
    stfs f30, 0x38(r1)
    stfs f29, 0x3c(r1)
    stfs f13, 0x40(r1)
    stfs f30, 0x12c(r1)
    stfs f29, 0x13c(r1)
    stfs f13, 0x14c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F9750
    lfs f2, 0x34(r1)
    lfs f0, lbl_808841DC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802BF5C0_000032B0
    lfs f3, 0x30(r1)
    lfs f0, lbl_80884190
    fcmpo cr0, f3, f0
    ble lbl_fn_802BF5C0_000032A0
    lfs f0, lbl_808841E0
    b lbl_fn_802BF5C0_000032A4
lbl_fn_802BF5C0_000032A0:
    lfs f0, lbl_808841E4
lbl_fn_802BF5C0_000032A4:
    fneg f0, f0
    stfs f0, 0x20(r1)
    b lbl_fn_802BF5C0_000032C4
lbl_fn_802BF5C0_000032B0:
    lfs f1, 0x30(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x20(r1)
lbl_fn_802BF5C0_000032C4:
    lfs f2, lbl_80884190
    addi r3, r1, 0x20
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x28(r1)
    stfs f2, 0x1c(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
lbl_fn_802BF5C0_000032E8:
    lwz r0, 0x2d4(r1)
    psq_l f31, 0x2c8(r1), 0, 0
    lfd f31, 0x2c0(r1)
    psq_l f30, 0x2b8(r1), 0, 0
    lfd f30, 0x2b0(r1)
    psq_l f29, 0x2a8(r1), 0, 0
    lfd f29, 0x2a0(r1)
    lwz r31, 0x29c(r1)
    lwz r30, 0x298(r1)
    lwz r29, 0x294(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}
