#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _savegpr_23(void);
extern void fn_8004D124(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800FAB80(void);
extern void fn_801010A0(void);
extern void fn_8010EE78(void);
extern void fn_8013A258(void);
extern void fn_8013CB68(void);
extern void fn_80158BB4(void);
extern void fn_8016E970(void);
extern void fn_80219E6C(void);
extern void fn_80239DAC(void);
extern void fn_802B6F80(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_807465C0[];
extern u8 lbl_807465C8[];
extern u8 lbl_807465E0[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F610;
extern u32 lbl_80884020;
extern u32 lbl_80884028;
extern u32 lbl_80884034;
extern u32 lbl_80884038;
extern u32 lbl_80884050;
extern u32 lbl_8088405C;
extern u32 lbl_80884060;
extern u32 lbl_80884064;
extern u32 lbl_80884070;
extern u32 lbl_80884074;
extern u32 lbl_80884078;
extern u32 lbl_8088407C;
extern u32 lbl_80884080;
extern u32 lbl_80884084;
extern u32 lbl_80884088;
extern u32 lbl_8088408C;
extern u32 lbl_80884090;
extern u32 lbl_80884094;
extern u32 lbl_80884098;
extern u32 lbl_8088409C;
extern u32 lbl_808840A0;
extern u32 lbl_808840A4;
extern u32 lbl_808840A8;
extern u32 lbl_808840AC;
extern u32 lbl_808840B0;
extern u32 lbl_808840B4;
extern u32 lbl_808840B8;
extern u32 lbl_808840BC;
extern u32 lbl_808840C0;
extern u32 lbl_808840C4;
extern u32 lbl_808840C8;
extern u32 lbl_808840CC;

/* Function declarations */
void fn_802B43C0(void);
void fn_802B43C4(void);
void fn_802B43C8(void);
void fn_802B475C(void);
void fn_802B4B08(void);
void fn_802B5134(void);
void fn_802B5214(void);
void fn_802B52D8(void);
void fn_802B55B0(void);
void fn_802B596C(void);

asm void fn_802B43C0(void)
{
    nofralloc
    blr
}

asm void fn_802B43C4(void)
{
    nofralloc
    blr
}

asm void fn_802B43C8(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    lfs f31, lbl_80884028
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stfd f29, 0x100(r1)
    psq_st f29, 0x108(r1), 0, 0
    lfs f29, lbl_80884034
    stw r31, 0xfc(r1)
    mr r31, r3
    stw r30, 0xf8(r1)
    addi r30, r1, 0x74
    stw r29, 0xf4(r1)
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r30), 0, 0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_802B43C8_000002A8
    lwz r4, 0x14d4(r3)
    lfs f0, 0x530(r3)
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x68
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    stfs f6, 0x70(r1)
    bl fn_805F9940
    lfs f0, lbl_80884070
    fmr f31, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_802B43C8_000000C4
    psq_l f1, 0x534(r31), 0, 0
    lfs f2, 0x53c(r31)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r30), 0, 0
    b lbl_fn_802B43C8_000002A0
lbl_fn_802B43C8_000000C4:
    addi r3, r1, 0x68
    addi r30, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x70(r1)
    mr r4, r30
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r29, r1, 0x5c
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884074
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802B43C8_00000134
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80884028
    fcmpo cr0, f3, f0
    ble lbl_fn_802B43C8_00000128
    lfs f0, lbl_80884078
    b lbl_fn_802B43C8_0000012C
lbl_fn_802B43C8_00000128:
    lfs f0, lbl_8088407C
lbl_fn_802B43C8_0000012C:
    stfs f0, 0x48(r1)
    b lbl_fn_802B43C8_00000148
lbl_fn_802B43C8_00000134:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802B43C8_00000148:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884028
    addi r4, r1, 0x38
    lfs f29, 0x88(r1)
    mr r5, r4
    lfs f30, 0x84(r1)
    addi r3, r1, 0xb0
    lfs f13, 0x80(r1)
    lfs f12, 0x98(r1)
    lfs f11, 0x94(r1)
    lfs f10, 0x90(r1)
    lfs f9, 0xa8(r1)
    lfs f8, 0xa4(r1)
    lfs f7, 0xa0(r1)
    lfs f6, 0xac(r1)
    lfs f5, 0x9c(r1)
    lfs f4, 0x8c(r1)
    lfs f0, lbl_80884034
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f3, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0xb0(r1)
    stfs f30, 0xb4(r1)
    stfs f29, 0xb8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xc0(r1)
    stfs f11, 0xc4(r1)
    stfs f12, 0xc8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xd0(r1)
    stfs f8, 0xd4(r1)
    stfs f9, 0xd8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xcc(r1)
    stfs f6, 0xdc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80884074
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802B43C8_00000264
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884028
    fcmpo cr0, f3, f0
    ble lbl_fn_802B43C8_00000254
    lfs f0, lbl_80884078
    b lbl_fn_802B43C8_00000258
lbl_fn_802B43C8_00000254:
    lfs f0, lbl_8088407C
lbl_fn_802B43C8_00000258:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802B43C8_00000278
lbl_fn_802B43C8_00000264:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802B43C8_00000278:
    lfs f2, lbl_80884028
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x74
    stfs f2, 0x4c(r1)
    stfs f2, 0x64(r1)
    frsp f2, f2
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x7c(r1)
lbl_fn_802B43C8_000002A0:
    lfs f29, lbl_80884020
    b lbl_fn_802B43C8_000002B8
lbl_fn_802B43C8_000002A8:
    cmpwi r0, 0x6
    bne lbl_fn_802B43C8_000002B8
    bl fn_8013A258
    b lbl_fn_802B43C8_00000368
lbl_fn_802B43C8_000002B8:
    lwz r3, 0x16a0(r31)
    lwz r0, 0x16f8(r31)
    clrrwi r6, r3, 1
    lwz r4, 0x1750(r31)
    clrrwi r5, r0, 1
    lwz r3, 0x17a8(r31)
    lwz r0, 0x1800(r31)
    clrrwi r4, r4, 1
    clrrwi r3, r3, 1
    stw r6, 0x16a0(r31)
    clrrwi r0, r0, 1
    stw r5, 0x16f8(r31)
    stw r4, 0x1750(r31)
    stw r3, 0x17a8(r31)
    stw r0, 0x1800(r31)
    lwz r3, lbl_8087EE98
    bl fn_8004D124
    lfs f0, 0x568(r31)
    fmr f1, f31
    lwz r0, 0x14cc(r31)
    mr r3, r31
    fmuls f2, f0, f29
    addi r4, r1, 0x74
    oris r0, r0, 0x4000
    stw r0, 0x14cc(r31)
    li r5, 0x1
    bl fn_8013CB68
    lwz r3, 0x16a0(r31)
    lwz r0, 0x16f8(r31)
    ori r6, r3, 0x1
    lwz r4, 0x1750(r31)
    ori r5, r0, 0x1
    lwz r3, 0x17a8(r31)
    lwz r0, 0x1800(r31)
    ori r4, r4, 0x1
    ori r3, r3, 0x1
    stw r6, 0x16a0(r31)
    ori r0, r0, 0x1
    stw r5, 0x16f8(r31)
    stw r4, 0x1750(r31)
    stw r3, 0x17a8(r31)
    stw r0, 0x1800(r31)
    lwz r3, lbl_8087EE98
    bl fn_8004D124
lbl_fn_802B43C8_00000368:
    lwz r0, 0x134(r1)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    psq_l f29, 0x108(r1), 0, 0
    lfd f29, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_802B475C(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    mr r31, r3
    stw r30, 0x108(r1)
    stw r29, 0x104(r1)
    lwz r0, 0x14d4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802B475C_0000071C
    lfs f3, 0x530(r3)
    lfs f0, 0x15dc(r3)
    lfs f5, 0x52c(r3)
    fsubs f6, f3, f0
    lfs f4, 0x15d8(r3)
    lfs f3, 0x528(r3)
    lfs f0, 0x15d4(r3)
    fsubs f4, f5, f4
    addi r3, r1, 0x80
    fsubs f0, f3, f0
    stfs f4, 0x84(r1)
    stfs f0, 0x80(r1)
    stfs f6, 0x88(r1)
    bl fn_805F9940
    lfs f0, 0x15e0(r31)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_802B475C_00000438
    li r3, 0x3
    li r0, 0x0
    stw r3, 0x1510(r31)
    mr r3, r31
    stw r0, 0x15f8(r31)
    bl fn_802B6F80
    b lbl_fn_802B475C_0000071C
lbl_fn_802B475C_00000438:
    lwz r5, 0x14d4(r31)
    addi r4, r1, 0x74
    lfs f0, 0x530(r31)
    addi r3, r1, 0x68
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x530(r5)
    lfs f5, 0x78(r1)
    lfs f4, 0x52c(r31)
    fsubs f6, f2, f0
    lfs f0, 0x528(r31)
    lfs f3, 0x74(r1)
    fsubs f4, f5, f4
    stfs f2, 0x7c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    stfs f6, 0x70(r1)
    bl fn_805F9940
    addi r3, r1, 0x68
    addi r30, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x70(r1)
    mr r4, r30
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r29, r1, 0x5c
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884074
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802B475C_000004F4
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80884028
    fcmpo cr0, f3, f0
    ble lbl_fn_802B475C_000004E8
    lfs f0, lbl_80884078
    b lbl_fn_802B475C_000004EC
lbl_fn_802B475C_000004E8:
    lfs f0, lbl_8088407C
lbl_fn_802B475C_000004EC:
    stfs f0, 0x48(r1)
    b lbl_fn_802B475C_00000508
lbl_fn_802B475C_000004F4:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802B475C_00000508:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x90
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884028
    addi r4, r1, 0x38
    lfs f30, 0x98(r1)
    mr r5, r4
    lfs f31, 0x94(r1)
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
    lfs f0, lbl_80884034
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xf0(r1)
    stfs f3, 0xf4(r1)
    stfs f3, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xc0(r1)
    stfs f31, 0xc4(r1)
    stfs f30, 0xc8(r1)
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
    lfs f0, lbl_80884074
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802B475C_00000624
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884028
    fcmpo cr0, f3, f0
    ble lbl_fn_802B475C_00000614
    lfs f0, lbl_80884078
    b lbl_fn_802B475C_00000618
lbl_fn_802B475C_00000614:
    lfs f0, lbl_8088407C
lbl_fn_802B475C_00000618:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802B475C_00000638
lbl_fn_802B475C_00000624:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802B475C_00000638:
    addi r3, r1, 0x44
    lfs f2, lbl_80884028
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_807465C8@ha
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, 0x538(r31)
    lfs f3, 0x60(r1)
    stfs f2, 0x64(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80884080
    stfs f2, 0x4c(r1)
    lfd f2, lbl_807465C8@l(r3)
    fmuls f1, f0, f3
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80884084
    fcmpo cr0, f3, f0
    ble lbl_fn_802B475C_00000688
    lfs f0, lbl_80884088
    fsubs f3, f3, f0
lbl_fn_802B475C_00000688:
    lfs f0, lbl_8088408C
    fcmpo cr0, f3, f0
    lwz r3, 0x15f8(r31)
    lwz r0, 0x1520(r31)
    cmpw r3, r0
    bge lbl_fn_802B475C_00000704
    lis r3, 0x6666
    lwz r4, 0x14e8(r31)
    addi r0, r3, 0x6667
    mulhw r0, r0, r4
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r3, r0, r4
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    ble lbl_fn_802B475C_000006F8
    cmpwi r3, 0x0
    beq lbl_fn_802B475C_000006EC
    cmpwi r3, 0x3
    beq lbl_fn_802B475C_000006EC
    cmpwi r3, 0x4
    beq lbl_fn_802B475C_000006F8
    b lbl_fn_802B475C_00000714
lbl_fn_802B475C_000006EC:
    li r0, 0x2
    stw r0, 0x1510(r31)
    b lbl_fn_802B475C_00000714
lbl_fn_802B475C_000006F8:
    li r0, 0x1
    stw r0, 0x1510(r31)
    b lbl_fn_802B475C_00000714
lbl_fn_802B475C_00000704:
    li r3, 0x3
    li r0, 0x0
    stw r3, 0x1510(r31)
    stw r0, 0x15f8(r31)
lbl_fn_802B475C_00000714:
    mr r3, r31
    bl fn_802B6F80
lbl_fn_802B475C_0000071C:
    lwz r0, 0x134(r1)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r29, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_802B4B08(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    lis r4, lbl_807465E0@ha
    stw r0, 0xe4(r1)
    addi r4, r4, lbl_807465E0@l
    addi r5, r1, 0x8c
    addi r6, r1, 0xa4
    stfd f31, 0xd0(r1)
    addi r4, r4, 0x14c
    psq_st f31, 0xd8(r1), 0, 0
    stfd f30, 0xc0(r1)
    psq_st f30, 0xc8(r1), 0, 0
    stw r31, 0xbc(r1)
    mr r31, r3
    lfs f5, 0x52c(r3)
    lfs f4, 0x5a8(r3)
    lfs f3, 0x528(r3)
    fadds f5, f5, f4
    lfs f0, 0x5a4(r3)
    lfs f4, 0x5b0(r3)
    fadds f0, f3, f0
    stfs f5, 0x90(r1)
    lfs f3, 0x530(r3)
    stfs f0, 0x8c(r1)
    lfs f0, 0x5ac(r3)
    psq_l f1, 0x0(r5), 0, 0
    li r5, 0x0
    fadds f3, f3, f0
    psq_st f1, 0x614(r3), 0, 0
    lfs f0, 0x618(r3)
    fmr f2, f3
    stfs f4, 0x620(r3)
    fadds f0, f0, f4
    stfs f2, 0x61c(r3)
    frsp f2, f2
    stfs f0, 0x618(r3)
    psq_l f1, 0x614(r3), 0, 0
    addi r3, r3, 0xb0
    stfs f3, 0x94(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0xac(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B4B08_00000800
    li r5, 0x0
    b lbl_fn_802B4B08_0000080C
lbl_fn_802B4B08_00000800:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_802B4B08_0000080C:
    lfs f0, 0x1c(r5)
    lis r3, lbl_807465E0@ha
    lfs f3, 0xc(r5)
    addi r4, r1, 0x80
    stfs f0, 0x84(r1)
    addi r6, r1, 0x98
    lfs f4, 0x2c(r5)
    addi r7, r1, 0xa4
    stfs f3, 0x80(r1)
    addi r3, r3, lbl_807465E0@l
    fmr f2, f4
    lfs f5, 0x620(r31)
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r3, 0x151
    psq_st f1, 0x0(r6), 0, 0
    addi r3, r31, 0xb0
    lfs f3, 0x9c(r1)
    li r5, 0x0
    lfs f0, lbl_80884034
    stfs f2, 0xa0(r1)
    fsubs f0, f3, f0
    psq_l f1, 0x0(r7), 0, 0
    lfs f2, 0xac(r1)
    stfs f2, 0x5fc(r31)
    lfs f2, 0xa0(r1)
    stfs f0, 0x9c(r1)
    lfs f31, lbl_80884090
    psq_st f1, 0x5f4(r31), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f4, 0x88(r1)
    psq_st f1, 0x600(r31), 0, 0
    stfs f2, 0x608(r31)
    stfs f5, 0x60c(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B4B08_000008A4
    li r4, 0x0
    b lbl_fn_802B4B08_000008B0
lbl_fn_802B4B08_000008A4:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802B4B08_000008B0:
    lfs f0, 0x1c(r4)
    lis r3, lbl_807465E0@ha
    lfs f3, 0xc(r4)
    addi r7, r1, 0x74
    stfs f3, 0x74(r1)
    addi r6, r1, 0xa4
    lfs f2, 0x2c(r4)
    addi r3, r3, lbl_807465E0@l
    stfs f0, 0x78(r1)
    addi r4, r3, 0x15d
    addi r3, r31, 0xb0
    li r5, 0x0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0xac(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B4B08_00000904
    li r4, 0x0
    b lbl_fn_802B4B08_00000910
lbl_fn_802B4B08_00000904:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802B4B08_00000910:
    lfs f0, 0x2c(r4)
    lis r3, lbl_807465E0@ha
    lfs f3, 0x1c(r4)
    addi r6, r1, 0x98
    lfs f4, 0xc(r4)
    fmr f2, f0
    stfs f4, 0x68(r1)
    addi r4, r1, 0x68
    addi r5, r1, 0xa4
    addi r8, r31, 0x16d4
    stfs f3, 0x6c(r1)
    addi r7, r31, 0x16e0
    addi r3, r3, lbl_807465E0@l
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r3, 0x169
    psq_st f1, 0x0(r6), 0, 0
    addi r3, r31, 0xb0
    psq_l f1, 0x0(r5), 0, 0
    li r5, 0x0
    stfs f2, 0xa0(r1)
    lfs f2, 0xac(r1)
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x16dc(r31)
    lfs f2, 0xa0(r1)
    stfs f0, 0x70(r1)
    lfs f30, lbl_80884090
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x16e8(r31)
    stfs f31, 0x16ec(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B4B08_0000099C
    li r4, 0x0
    b lbl_fn_802B4B08_000009A8
lbl_fn_802B4B08_0000099C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802B4B08_000009A8:
    lfs f0, 0x1c(r4)
    lis r3, lbl_807465E0@ha
    lfs f3, 0xc(r4)
    addi r7, r1, 0x5c
    stfs f3, 0x5c(r1)
    addi r6, r1, 0xa4
    lfs f2, 0x2c(r4)
    addi r3, r3, lbl_807465E0@l
    stfs f0, 0x60(r1)
    addi r4, r3, 0x176
    addi r3, r31, 0xb0
    li r5, 0x0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x64(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0xac(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B4B08_000009FC
    li r4, 0x0
    b lbl_fn_802B4B08_00000A08
lbl_fn_802B4B08_000009FC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802B4B08_00000A08:
    lfs f0, 0x2c(r4)
    lis r3, lbl_807465E0@ha
    lfs f3, 0x1c(r4)
    addi r6, r1, 0x98
    lfs f4, 0xc(r4)
    fmr f2, f0
    stfs f4, 0x50(r1)
    addi r4, r1, 0x50
    addi r5, r1, 0xa4
    addi r8, r31, 0x172c
    stfs f3, 0x54(r1)
    addi r7, r31, 0x1738
    addi r3, r3, lbl_807465E0@l
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r3, 0x183
    psq_st f1, 0x0(r6), 0, 0
    addi r3, r31, 0xb0
    psq_l f1, 0x0(r5), 0, 0
    li r5, 0x0
    stfs f2, 0xa0(r1)
    lfs f2, 0xac(r1)
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x1734(r31)
    lfs f2, 0xa0(r1)
    stfs f0, 0x58(r1)
    lfs f31, lbl_80884094
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x1740(r31)
    stfs f30, 0x1744(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B4B08_00000A94
    li r4, 0x0
    b lbl_fn_802B4B08_00000AA0
lbl_fn_802B4B08_00000A94:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802B4B08_00000AA0:
    lfs f0, 0x1c(r4)
    lis r3, lbl_807465E0@ha
    lfs f3, 0xc(r4)
    addi r7, r1, 0x44
    stfs f3, 0x44(r1)
    addi r6, r1, 0xa4
    lfs f2, 0x2c(r4)
    addi r3, r3, lbl_807465E0@l
    stfs f0, 0x48(r1)
    addi r4, r3, 0x18b
    addi r3, r31, 0xb0
    li r5, 0x0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0xac(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B4B08_00000AF4
    li r4, 0x0
    b lbl_fn_802B4B08_00000B00
lbl_fn_802B4B08_00000AF4:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802B4B08_00000B00:
    lfs f0, 0x2c(r4)
    lis r3, lbl_807465E0@ha
    lfs f3, 0x1c(r4)
    addi r6, r1, 0x98
    lfs f4, 0xc(r4)
    fmr f2, f0
    stfs f4, 0x38(r1)
    addi r4, r1, 0x38
    addi r5, r1, 0xa4
    addi r8, r31, 0x1784
    stfs f3, 0x3c(r1)
    addi r7, r31, 0x1790
    addi r3, r3, lbl_807465E0@l
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r3, 0x194
    psq_st f1, 0x0(r6), 0, 0
    addi r3, r31, 0xb0
    psq_l f1, 0x0(r5), 0, 0
    li r5, 0x0
    stfs f2, 0xa0(r1)
    lfs f2, 0xac(r1)
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x178c(r31)
    lfs f2, 0xa0(r1)
    stfs f0, 0x40(r1)
    lfs f30, lbl_80884094
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x1798(r31)
    stfs f31, 0x179c(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B4B08_00000B8C
    li r4, 0x0
    b lbl_fn_802B4B08_00000B98
lbl_fn_802B4B08_00000B8C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802B4B08_00000B98:
    lfs f0, 0x1c(r4)
    lis r3, lbl_807465E0@ha
    lfs f3, 0xc(r4)
    addi r7, r1, 0x2c
    stfs f3, 0x2c(r1)
    addi r6, r1, 0xa4
    lfs f2, 0x2c(r4)
    addi r3, r3, lbl_807465E0@l
    stfs f0, 0x30(r1)
    addi r4, r3, 0x19d
    addi r3, r31, 0xb0
    li r5, 0x0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0xac(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B4B08_00000BEC
    li r4, 0x0
    b lbl_fn_802B4B08_00000BF8
lbl_fn_802B4B08_00000BEC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802B4B08_00000BF8:
    lfs f0, 0x2c(r4)
    lis r3, lbl_807465E0@ha
    lfs f3, 0x1c(r4)
    addi r6, r1, 0x98
    lfs f4, 0xc(r4)
    fmr f2, f0
    stfs f4, 0x20(r1)
    addi r4, r1, 0x20
    addi r5, r1, 0xa4
    addi r8, r31, 0x17dc
    stfs f3, 0x24(r1)
    addi r7, r31, 0x17e8
    addi r3, r3, lbl_807465E0@l
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r3, 0x1a7
    psq_st f1, 0x0(r6), 0, 0
    addi r3, r31, 0xb0
    psq_l f1, 0x0(r5), 0, 0
    li r5, 0x0
    stfs f2, 0xa0(r1)
    lfs f2, 0xac(r1)
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x17e4(r31)
    lfs f2, 0xa0(r1)
    stfs f0, 0x28(r1)
    lfs f31, lbl_80884098
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x17f0(r31)
    stfs f30, 0x17f4(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B4B08_00000C84
    li r4, 0x0
    b lbl_fn_802B4B08_00000C90
lbl_fn_802B4B08_00000C84:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802B4B08_00000C90:
    lfs f0, 0x1c(r4)
    lis r3, lbl_807465E0@ha
    lfs f3, 0xc(r4)
    addi r7, r1, 0x14
    stfs f3, 0x14(r1)
    addi r6, r1, 0xa4
    lfs f2, 0x2c(r4)
    addi r3, r3, lbl_807465E0@l
    stfs f0, 0x18(r1)
    addi r4, r3, 0x1ae
    addi r3, r31, 0xb0
    li r5, 0x0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0xac(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B4B08_00000CE4
    li r5, 0x0
    b lbl_fn_802B4B08_00000CF0
lbl_fn_802B4B08_00000CE4:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_802B4B08_00000CF0:
    lfs f0, 0x2c(r5)
    addi r4, r1, 0x8
    lfs f3, 0x1c(r5)
    addi r3, r1, 0x98
    lfs f4, 0xc(r5)
    fmr f2, f0
    stfs f4, 0x8(r1)
    addi r6, r1, 0xa4
    addi r7, r31, 0x1834
    addi r5, r31, 0x1840
    stfs f3, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0xa0(r1)
    lfs f2, 0xac(r1)
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x183c(r31)
    lfs f2, 0xa0(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1848(r31)
    stfs f31, 0x184c(r31)
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    psq_l f30, 0xc8(r1), 0, 0
    lfd f30, 0xc0(r1)
    lwz r31, 0xbc(r1)
    lwz r0, 0xe4(r1)
    stfs f0, 0x10(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_802B5134(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r0, 0x624(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802B5134_00000E40
    lis r4, lbl_807465E0@ha
    li r5, 0x0
    addi r4, r4, lbl_807465E0@l
    addi r3, r3, 0xb0
    addi r4, r4, 0x1b5
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B5134_00000DBC
    li r4, 0x0
    b lbl_fn_802B5134_00000DC8
lbl_fn_802B5134_00000DBC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802B5134_00000DC8:
    lfs f3, lbl_8088409C
    addi r3, r1, 0x8
    lfs f0, 0x5b0(r31)
    lfs f4, 0x2c(r4)
    lfs f5, 0x1c(r4)
    fmuls f0, f3, f0
    lfs f6, 0xc(r4)
    lwz r4, 0x62c(r31)
    stfs f6, 0x14(r1)
    stfs f0, 0x10(r4)
    lfs f3, 0x5a8(r31)
    lfs f0, 0x5a4(r31)
    fadds f7, f5, f3
    lfs f3, 0x5ac(r31)
    fadds f0, f6, f0
    lwz r4, 0x62c(r31)
    fadds f2, f4, f3
    stfs f7, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x4(r4), 0, 0
    stfs f2, 0xc(r4)
    lwz r3, 0x62c(r31)
    lfs f3, 0x52c(r31)
    lfs f0, 0x10(r3)
    stfs f5, 0x18(r1)
    fadds f0, f3, f0
    stfs f4, 0x1c(r1)
    stfs f2, 0x10(r1)
    stfs f0, 0x8(r3)
lbl_fn_802B5134_00000E40:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802B5214(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    bne lbl_fn_802B5214_00000EF0
    lis r4, lbl_807465E0@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_807465E0@l
    li r5, 0x0
    addi r4, r4, 0x1b5
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B5214_00000EB0
    li r4, 0x0
    b lbl_fn_802B5214_00000EBC
lbl_fn_802B5214_00000EB0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802B5214_00000EBC:
    lfs f0, 0x1c(r4)
    addi r3, r1, 0x8
    lfs f3, 0xc(r4)
    lfs f2, 0x2c(r4)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x8(r30)
    lfs f0, 0x52c(r31)
    stfs f2, 0x10(r1)
    stfs f0, 0x4(r30)
    b lbl_fn_802B5214_00000F00
lbl_fn_802B5214_00000EF0:
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_802B5214_00000F00:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802B52D8(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r3
    lwz r0, 0x14dc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802B52D8_00001000
    lwz r0, 0x14e0(r3)
    cmpwi r0, 0x3c
    ble lbl_fn_802B52D8_00000F88
    lfs f0, lbl_80884034
    li r31, 0x1
    stw r31, 0x3fc(r3)
    li r4, 0x0
    lfs f1, lbl_80884028
    li r5, 0x3
    stfs f0, 0x2fc(r3)
    li r6, 0x1
    lfs f2, lbl_80884038
    li r7, 0x0
    stfs f0, 0x2e8(r3)
    li r8, 0x1
    addi r3, r3, 0xb0
    bl fn_80097C08
    stw r31, 0x14dc(r30)
    b lbl_fn_802B52D8_000011D8
lbl_fn_802B52D8_00000F88:
    lfs f1, 0x538(r3)
    addi r3, r1, 0x38
    li r4, 0x79
    bl fn_805F8E70
    lfs f0, lbl_80884028
    addi r4, r1, 0x1c
    stfs f0, 0x10(r1)
    addi r6, r1, 0x10
    lfs f2, lbl_808840A0
    mr r5, r4
    stfs f0, 0x14(r1)
    addi r3, r1, 0x38
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x18(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x24(r1)
    bl fn_805F93C0
    lfs f3, 0x528(r30)
    lfs f0, 0x1c(r1)
    lfs f4, 0x52c(r30)
    fadds f0, f3, f0
    lfs f3, 0x530(r30)
    stfs f0, 0x528(r30)
    lfs f0, 0x20(r1)
    fadds f0, f4, f0
    stfs f0, 0x52c(r30)
    lfs f0, 0x24(r1)
    fadds f0, f3, f0
    stfs f0, 0x530(r30)
    b lbl_fn_802B52D8_000011D8
lbl_fn_802B52D8_00001000:
    cmpwi r0, 0x1
    bne lbl_fn_802B52D8_0000105C
    lwz r0, 0x14e0(r3)
    cmpwi r0, 0xa
    ble lbl_fn_802B52D8_000011D8
    lfs f3, lbl_80884034
    li r0, 0x1
    lfs f0, lbl_80884020
    li r4, 0x0
    stw r0, 0x3fc(r3)
    li r5, 0x145
    lfs f1, lbl_80884028
    li r6, 0x0
    stfs f3, 0x2fc(r3)
    li r7, 0x0
    lfs f2, lbl_80884038
    li r8, 0x1
    stfs f0, 0x2e8(r3)
    addi r3, r3, 0xb0
    bl fn_80097C08
    li r0, 0x2
    stw r0, 0x14dc(r30)
    b lbl_fn_802B52D8_000011D8
lbl_fn_802B52D8_0000105C:
    cmpwi r0, 0x2
    bne lbl_fn_802B52D8_000011D8
    lis r4, lbl_807465E0@ha
    li r5, 0x0
    addi r4, r4, lbl_807465E0@l
    addi r3, r3, 0xb0
    addi r4, r4, 0x147
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B52D8_0000108C
    li r4, 0x0
    b lbl_fn_802B52D8_00001098
lbl_fn_802B52D8_0000108C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_802B52D8_00001098:
    lfs f0, 0x2c(r4)
    mr r3, r30
    lfs f3, 0x1c(r4)
    lfs f4, 0xc(r4)
    stfs f4, 0x28(r1)
    stfs f3, 0x2c(r1)
    stfs f0, 0x30(r1)
    bl fn_80158BB4
    cmpwi r3, 0x0
    beq lbl_fn_802B52D8_00001120
    li r0, 0x6
    stw r0, 0x58c(r30)
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x67
    li r6, 0x0
    bl fn_80239DAC
    lfs f0, lbl_80884028
    li r0, 0x1
    stw r0, 0x151c(r30)
    stfs f0, 0x52c(r30)
lbl_fn_802B52D8_00001120:
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_808840A4
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802B52D8_0000117C
    lfs f0, lbl_808840A8
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802B52D8_0000117C
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_80884028
    mr r4, r30
    stw r0, 0xc(r1)
    addi r7, r1, 0x28
    lfs f2, lbl_80884034
    addi r8, r30, 0x534
    lwz r3, lbl_8087F048
    li r9, 0x0
    lwz r5, 0x1678(r30)
    li r10, 0x1e
    lwz r6, 0x590(r30)
    bl fn_800FAB80
lbl_fn_802B52D8_0000117C:
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_808840AC
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802B52D8_000011D8
    lfs f0, lbl_808840B0
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802B52D8_000011D8
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_80884028
    mr r4, r30
    stw r0, 0xc(r1)
    addi r7, r1, 0x28
    lfs f2, lbl_80884034
    addi r8, r30, 0x534
    lwz r3, lbl_8087F048
    li r9, 0x0
    lwz r5, 0x167c(r30)
    li r10, 0x1e
    lwz r6, 0x590(r30)
    bl fn_800FAB80
lbl_fn_802B52D8_000011D8:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_802B55B0(void)
{
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    stw r0, 0x204(r1)
    addi r11, r1, 0x1d0
    stfd f31, 0x1f0(r1)
    psq_st f31, 0x1f8(r1), 0, 0
    stfd f30, 0x1e0(r1)
    psq_st f30, 0x1e8(r1), 0, 0
    stfd f29, 0x1d0(r1)
    psq_st f29, 0x1d8(r1), 0, 0
    bl _savegpr_23
    lwz r0, 0x1680(r3)
    mr r30, r3
    mr r23, r4
    cmpwi r0, 0x0
    beq lbl_fn_802B55B0_0000157C
    lfs f7, lbl_80884028
    addi r27, r1, 0x178
    lfs f0, lbl_80884034
    stfs f7, 0x1a4(r1)
    stfs f7, 0x19c(r1)
    stfs f7, 0x198(r1)
    stfs f7, 0x194(r1)
    stfs f7, 0x190(r1)
    stfs f7, 0x188(r1)
    stfs f7, 0x184(r1)
    stfs f7, 0x180(r1)
    stfs f7, 0x17c(r1)
    stfs f0, 0x1a0(r1)
    stfs f0, 0x18c(r1)
    stfs f0, 0x178(r1)
    lfs f1, 0x53c(r3)
    fcmpu cr0, f7, f1
    beq lbl_fn_802B55B0_000012C8
    addi r3, r1, 0x88
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x88
    addi r5, r1, 0x58
    bl fn_805F89F0
    addi r3, r1, 0x58
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
lbl_fn_802B55B0_000012C8:
    lfs f0, lbl_80884028
    lfs f1, 0x538(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_802B55B0_00001328
    addi r3, r1, 0xe8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r27
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
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_802B55B0_00001328:
    lfs f0, lbl_80884028
    lfs f1, 0x534(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_802B55B0_00001388
    addi r3, r1, 0x148
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r27
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
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_802B55B0_00001388:
    lis r4, lbl_807465E0@ha
    addi r25, r30, 0xb0
    addi r4, r4, lbl_807465E0@l
    li r5, 0x0
    mr r3, r25
    addi r4, r4, 0x147
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B55B0_000013B4
    li r3, 0x0
    b lbl_fn_802B55B0_000013C0
lbl_fn_802B55B0_000013B4:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r25)
    add r3, r3, r0
lbl_fn_802B55B0_000013C0:
    lfs f0, 0x2c(r3)
    cmpwi r23, 0x0
    lfs f7, 0x1c(r3)
    lfs f8, 0xc(r3)
    stfs f8, 0x30(r1)
    stfs f7, 0x34(r1)
    stfs f0, 0x38(r1)
    beq lbl_fn_802B55B0_0000157C
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_802B55B0_0000157C
    lis r3, lbl_807465E0@ha
    lfs f1, lbl_80884034
    addi r27, r3, lbl_807465E0@l
    addi r5, r30, 0x528
    addi r3, r1, 0x8
    li r6, 0x0
    addi r4, r27, 0x1bc
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F610
    li r31, 0x0
    lfs f29, lbl_80884028
    mr r28, r31
    lwz r24, 0x5e8(r3)
    addi r26, r1, 0x18
    lfs f30, lbl_80884034
    addi r25, r1, 0xc
    lfs f31, lbl_808840B4
    li r29, 0x0
    b lbl_fn_802B55B0_00001574
lbl_fn_802B55B0_00001448:
    cmpwi r31, 0x0
    lwz r3, lbl_8087F610
    blt lbl_fn_802B55B0_0000146C
    lwz r0, 0x5e8(r3)
    cmpw r31, r0
    bge lbl_fn_802B55B0_0000146C
    lwz r0, 0x5e4(r3)
    add r3, r0, r29
    b lbl_fn_802B55B0_00001470
lbl_fn_802B55B0_0000146C:
    li r3, 0x0
lbl_fn_802B55B0_00001470:
    cmpwi r3, 0x0
    beq lbl_fn_802B55B0_0000156C
    lwz r0, 0xd0(r3)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_802B55B0_0000156C
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_802B55B0_0000156C
    addi r23, r3, 0xb0
    addi r4, r27, 0x147
    mr r3, r23
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B55B0_000014B8
    li r5, 0x0
    b lbl_fn_802B55B0_000014C4
lbl_fn_802B55B0_000014B8:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r23)
    add r5, r3, r0
lbl_fn_802B55B0_000014C4:
    lfs f8, 0x2c(r5)
    mr r3, r26
    lfs f0, 0x38(r1)
    mr r4, r26
    lfs f9, 0x1c(r5)
    fsubs f2, f8, f0
    lfs f10, 0xc(r5)
    lfs f7, 0x34(r1)
    lfs f0, 0x30(r1)
    fsubs f7, f9, f7
    stfs f10, 0x24(r1)
    fsubs f0, f10, f0
    stfs f7, 0x10(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r25), 0, 0
    stfs f9, 0x28(r1)
    stfs f8, 0x2c(r1)
    stfs f2, 0x14(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x20(r1)
    bl fn_805F98D0
    lwz r3, lbl_8087F048
    bl fn_801010A0
    cmpwi r3, 0x0
    beq lbl_fn_802B55B0_0000157C
    addi r0, r30, 0x1524
    stw r28, 0x4c(r1)
    lfs f1, lbl_80884064
    mr r6, r26
    stfs f29, 0x50(r1)
    mr r7, r30
    addi r4, r1, 0x3c
    addi r5, r1, 0x30
    stfs f30, 0x54(r1)
    li r8, -0x1
    li r9, 0x0
    stfs f31, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r28, 0x44(r1)
    lwz r0, 0x1680(r30)
    stw r0, 0x48(r1)
    bl fn_8010EE78
lbl_fn_802B55B0_0000156C:
    addi r31, r31, 0x1
    addi r29, r29, 0xd5c
lbl_fn_802B55B0_00001574:
    cmpw r31, r24
    blt lbl_fn_802B55B0_00001448
lbl_fn_802B55B0_0000157C:
    addi r11, r1, 0x1d0
    psq_l f31, 0x1f8(r1), 0, 0
    lfd f31, 0x1f0(r1)
    psq_l f30, 0x1e8(r1), 0, 0
    lfd f30, 0x1e0(r1)
    psq_l f29, 0x1d8(r1), 0, 0
    lfd f29, 0x1d0(r1)
    bl _restgpr_23
    lwz r0, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}

asm void fn_802B596C(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    addi r5, r3, 0x15d4
    lfs f0, lbl_808840B8
    stw r0, 0xf4(r1)
    addi r4, r1, 0x64
    stw r31, 0xec(r1)
    mr r31, r3
    stw r30, 0xe8(r1)
    stw r29, 0xe4(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x15dc(r3)
    lfs f4, 0x68(r1)
    lfs f3, 0x530(r3)
    fadds f5, f4, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    fsubs f6, f2, f3
    lfs f3, 0x64(r1)
    addi r3, r1, 0x58
    fsubs f4, f5, f4
    stfs f2, 0x6c(r1)
    fsubs f0, f3, f0
    stfs f5, 0x68(r1)
    stfs f0, 0x58(r1)
    stfs f4, 0x5c(r1)
    stfs f6, 0x60(r1)
    bl fn_805F9940
    lwz r0, 0x14dc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802B596C_00001640
    addi r3, r1, 0x58
    bl fn_805F9920
    lfs f0, lbl_8088405C
    fcmpo cr0, f1, f0
    bge lbl_fn_802B596C_000018CC
lbl_fn_802B596C_00001640:
    lwz r0, 0x14dc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802B596C_0000166C
    lwz r0, 0x14e0(r31)
    cmpwi r0, 0x3c
    ble lbl_fn_802B596C_000019C8
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x14e0(r31)
    stw r0, 0x14dc(r31)
    b lbl_fn_802B596C_000019C8
lbl_fn_802B596C_0000166C:
    lwz r4, 0x14e0(r31)
    lis r0, 0x4330
    stw r0, 0xd0(r1)
    lis r3, lbl_807465C0@ha
    xoris r0, r4, 0x8000
    lfd f4, lbl_807465C0@l(r3)
    stw r0, 0xd4(r1)
    lfs f0, lbl_80884050
    lfd f3, 0xd0(r1)
    fsubs f3, f3, f4
    fcmpo cr0, f3, f0
    ble lbl_fn_802B596C_0000171C
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    li r3, 0x0
    li r0, 0xf
    stw r3, 0x14e0(r31)
    mr r3, r31
    li r4, 0x6
    stw r0, 0x58c(r31)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80884034
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884028
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x141
    lfs f2, lbl_80884038
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_802B596C_000019C8
lbl_fn_802B596C_0000171C:
    cmpwi r4, 0xa
    ble lbl_fn_802B596C_00001748
    lfs f4, 0x52c(r31)
    lfs f3, lbl_808840B4
    lfs f0, lbl_80884028
    fsubs f3, f4, f3
    stfs f3, 0x52c(r31)
    fcmpo cr0, f3, f0
    bge lbl_fn_802B596C_000019C8
    stfs f0, 0x52c(r31)
    b lbl_fn_802B596C_000019C8
lbl_fn_802B596C_00001748:
    lis r4, lbl_807465E0@ha
    addi r29, r31, 0xb0
    addi r4, r4, lbl_807465E0@l
    li r5, 0x0
    mr r3, r29
    addi r4, r4, 0x147
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B596C_00001774
    li r3, 0x0
    b lbl_fn_802B596C_00001780
lbl_fn_802B596C_00001774:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r29)
    add r3, r3, r0
lbl_fn_802B596C_00001780:
    lfs f0, 0x2c(r3)
    lfs f3, 0x1c(r3)
    lfs f4, 0xc(r3)
    stfs f4, 0x4c(r1)
    stfs f3, 0x50(r1)
    stfs f0, 0x54(r1)
    lwz r0, 0x14e0(r31)
    cmpwi r0, 0xa
    bne lbl_fn_802B596C_000017E8
    lfs f1, lbl_80884028
    mr r4, r31
    lfs f3, lbl_80884064
    addi r6, r1, 0x4c
    lfs f0, lbl_808840BC
    addi r7, r1, 0x40
    stfs f1, 0x40(r1)
    li r8, 0x0
    lwz r3, lbl_8087F048
    li r9, 0x0
    stfs f3, 0x44(r1)
    li r10, 0x0
    lfs f2, lbl_80884034
    stfs f0, 0x48(r1)
    lwz r5, 0x1688(r31)
    bl fn_800F8574
    b lbl_fn_802B596C_000019C8
lbl_fn_802B596C_000017E8:
    xoris r0, r0, 0x8000
    lis r30, 0x4330
    lis r29, lbl_807465C0@ha
    stw r0, 0xd4(r1)
    lfd f4, lbl_807465C0@l(r29)
    addi r3, r1, 0xa0
    stw r30, 0xd0(r1)
    li r4, 0x79
    lfs f6, lbl_80884028
    lfd f3, 0xd0(r1)
    lfs f0, lbl_808840C0
    fsubs f3, f3, f4
    lfs f5, lbl_80884064
    lfs f4, lbl_808840B4
    stfs f6, 0x34(r1)
    fmuls f1, f0, f3
    stfs f5, 0x38(r1)
    stfs f4, 0x3c(r1)
    bl fn_805F8E70
    addi r4, r1, 0x34
    addi r3, r1, 0xa0
    mr r5, r4
    bl fn_805F93C0
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0xdc(r1)
    lfd f5, lbl_807465C0@l(r29)
    addi r3, r1, 0x70
    stw r30, 0xd8(r1)
    li r4, 0x78
    lfs f4, lbl_808840CC
    lfd f0, 0xd8(r1)
    lfs f3, lbl_808840C8
    fsubs f5, f0, f5
    lfs f0, lbl_808840C4
    fdivs f4, f5, f4
    fmadds f1, f3, f4, f0
    bl fn_805F8E70
    addi r4, r1, 0x34
    addi r3, r1, 0x70
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x34
    mr r4, r3
    bl fn_805F98D0
    lwz r3, lbl_8087F048
    mr r4, r31
    lwz r5, 0x168c(r31)
    addi r6, r1, 0x4c
    lfs f1, lbl_80884028
    addi r7, r1, 0x34
    lfs f2, lbl_80884034
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
    b lbl_fn_802B596C_000019C8
lbl_fn_802B596C_000018CC:
    addi r4, r1, 0x58
    lfs f2, 0x60(r1)
    addi r3, r1, 0x28
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    mr r4, r3
    stfs f2, 0x30(r1)
    bl fn_805F98D0
    lfs f5, 0x30(r1)
    lis r3, lbl_807465E0@ha
    lfs f4, lbl_80884060
    addi r3, r3, lbl_807465E0@l
    lfs f3, 0x2c(r1)
    addi r4, r3, 0x147
    lfs f0, 0x28(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0x52c(r31)
    fmuls f7, f0, f4
    lfs f4, 0x528(r31)
    lfs f0, 0x530(r31)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x10(r1)
    fadds f0, f0, f5
    addi r3, r31, 0xb0
    stfs f6, 0x14(r1)
    li r5, 0x0
    stfs f5, 0x18(r1)
    stfs f4, 0x528(r31)
    stfs f3, 0x52c(r31)
    stfs f0, 0x530(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B596C_00001960
    li r4, 0x0
    b lbl_fn_802B596C_0000196C
lbl_fn_802B596C_00001960:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802B596C_0000196C:
    lfs f0, 0x2c(r4)
    li r3, 0x4b5
    lfs f3, 0x1c(r4)
    lfs f4, 0xc(r4)
    stfs f4, 0x1c(r1)
    lwz r29, lbl_8087F048
    stfs f3, 0x20(r1)
    stfs f0, 0x24(r1)
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_80884028
    mr r5, r3
    stw r0, 0xc(r1)
    mr r3, r29
    lfs f2, lbl_80884034
    mr r4, r31
    addi r7, r1, 0x1c
    addi r8, r31, 0x534
    li r6, 0x3e8
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_802B596C_000019C8:
    lwz r0, 0xf4(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}
