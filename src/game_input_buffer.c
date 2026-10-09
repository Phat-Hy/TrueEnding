#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void fn_8004D388(void);
extern void fn_80092814(void);
extern void fn_8009373C(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_80108F38(void);
extern void fn_80126214(void);
extern void fn_8012DB04(void);
extern void fn_8013A258(void);
extern void fn_8013CB68(void);
extern void fn_80144710(void);
extern void fn_80149A30(void);
extern void fn_80151448(void);
extern void fn_8016E970(void);
extern void fn_8017039C(void);
extern void fn_80170A20(void);
extern void fn_801781B0(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_802EBBA8(void);
extern void fn_802EC280(void);
extern void fn_80370AE4(void);
extern void fn_804DA490(void);
extern void fn_804DA4A4(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_80747F58[];
extern u8 lbl_80747F70[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F610;
extern u32 lbl_808847A8;
extern u32 lbl_808847AC;
extern u32 lbl_808847B0;
extern u32 lbl_808847B4;
extern u32 lbl_808847B8;
extern u32 lbl_808847BC;
extern u32 lbl_808847C0;
extern u32 lbl_808847C4;
extern u32 lbl_808847D4;
extern u32 lbl_808847D8;
extern u32 lbl_808847DC;
extern u32 lbl_808847E0;
extern u32 lbl_808847E4;
extern u32 lbl_808847E8;
extern u32 lbl_808847EC;
extern u32 lbl_808847F0;
extern u32 lbl_808847F4;
extern u32 lbl_808847F8;
extern u32 lbl_808847FC;
extern u32 lbl_80884800;
extern u32 lbl_80884804;

/* Function declarations */
void fn_802E9D38(void);
void fn_802E9DEC(void);
void fn_802E9FC8(void);
void fn_802EA27C(void);
void fn_802EA490(void);
void fn_802EA994(void);
void fn_802EABE4(void);
void fn_802EAC70(void);
void fn_802EAF68(void);
void fn_802EB1F4(void);
void fn_802EB61C(void);

asm void fn_802E9D38(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0x1528(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802E9D38_0000005C
    lfs f3, 0x15c4(r3)
    lis r4, lbl_80747F70@ha
    lfs f2, 0x15c8(r3)
    addi r4, r4, lbl_80747F70@l
    lfs f1, 0x15cc(r3)
    addi r4, r4, 0x1ac
    lfs f0, 0x15d0(r3)
    li r5, 0x0
    stfs f3, 0xf0(r3)
    stfs f2, 0xf4(r3)
    stfs f1, 0xf8(r3)
    stfs f0, 0xfc(r3)
    addi r3, r3, 0xb0
    bl fn_8009373C
    b lbl_fn_802E9D38_00000098
lbl_fn_802E9D38_0000005C:
    lfs f0, lbl_808847AC
    lis r4, lbl_80747F70@ha
    addi r4, r4, lbl_80747F70@l
    stfs f0, 0x8(r1)
    addi r4, r4, 0x1ac
    li r5, 0x1
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0xf0(r3)
    stfs f0, 0xf4(r3)
    stfs f0, 0xf8(r3)
    stfs f0, 0xfc(r3)
    addi r3, r3, 0xb0
    bl fn_8009373C
lbl_fn_802E9D38_00000098:
    mr r3, r31
    bl fn_80149A30
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802E9DEC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r5, 0x8(r4)
    lwz r6, 0x4(r5)
    cmpwi r6, 0x2710
    bne lbl_fn_802E9DEC_00000100
    bl fn_80151448
    lwz r12, 0x0(r31)
    mr r3, r31
    mr r4, r30
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_802E9DEC_00000278
lbl_fn_802E9DEC_00000100:
    lwz r0, 0x1524(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_802E9DEC_00000178
    cmpwi r6, 0x134
    beq lbl_fn_802E9DEC_00000178
    li r0, 0x0
    stw r0, 0x68(r4)
    li r0, 0x1
    lwz r5, 0xc4(r5)
    stw r5, 0x88(r4)
    stw r0, 0x84(r4)
    stw r0, 0x90(r4)
    lwz r4, 0x1504(r3)
    addi r0, r4, 0x1
    stw r0, 0x1504(r3)
    cmpwi r0, 0x3
    bne lbl_fn_802E9DEC_00000154
    lwz r3, lbl_8087F430
    li r4, 0x4
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_802E9DEC_00000154:
    lwz r0, 0x1528(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802E9DEC_00000278
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802E9DEC_00000278
    mr r3, r31
    bl fn_802EBBA8
    b lbl_fn_802E9DEC_00000278
lbl_fn_802E9DEC_00000178:
    lwz r5, 0x58c(r3)
    subi r0, r5, 0x6
    cmplwi r0, 0x2
    ble lbl_fn_802E9DEC_00000194
    subi r0, r5, 0xe
    cmplwi r0, 0x1
    bgt lbl_fn_802E9DEC_000001C0
lbl_fn_802E9DEC_00000194:
    lfs f2, 0x10(r4)
    lfs f3, lbl_808847A8
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
    b lbl_fn_802E9DEC_000001E8
lbl_fn_802E9DEC_000001C0:
    lfs f2, 0x10(r4)
    lfs f3, lbl_808847B0
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
lbl_fn_802E9DEC_000001E8:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xf
    bne lbl_fn_802E9DEC_00000200
    lwz r0, 0xc(r4)
    ori r0, r0, 0x80
    stw r0, 0xc(r4)
lbl_fn_802E9DEC_00000200:
    lwz r4, 0x8(r4)
    lwz r0, 0x4(r4)
    cmpwi r0, 0x134
    bne lbl_fn_802E9DEC_00000254
    lwz r0, 0x153c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802E9DEC_00000238
    lwz r3, lbl_8087F430
    li r4, 0x4
    li r5, 0x2
    bl fn_80370AE4
    li r0, 0x1
    stw r0, 0x153c(r31)
    b lbl_fn_802E9DEC_00000248
lbl_fn_802E9DEC_00000238:
    lwz r3, lbl_8087F430
    li r4, 0x4
    li r5, 0x4
    bl fn_80370AE4
lbl_fn_802E9DEC_00000248:
    lwz r0, 0xc(r30)
    ori r0, r0, 0x800
    stw r0, 0xc(r30)
lbl_fn_802E9DEC_00000254:
    mr r3, r31
    mr r4, r30
    bl fn_80151448
    lwz r12, 0x0(r31)
    mr r3, r31
    mr r4, r30
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_802E9DEC_00000278:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802E9FC8(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r3
    stw r30, 0x78(r1)
    lwz r4, 0x8(r4)
    lwz r0, 0x4(r4)
    cmpwi r0, 0x134
    bne lbl_fn_802E9FC8_000003FC
    lwz r4, 0x1540(r3)
    lwz r0, 0x1604(r3)
    addi r4, r4, 0x1
    stw r4, 0x1540(r3)
    cmpw r4, r0
    blt lbl_fn_802E9FC8_00000514
    li r0, 0x0
    stw r0, 0x14f8(r3)
    stw r0, 0x14fc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f3, lbl_808847AC
    li r0, 0xd
    lfs f0, lbl_808847D8
    li r30, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808847A8
    li r4, 0x0
    stw r0, 0x58c(r31)
    li r5, 0x14d
    lfs f2, lbl_808847B0
    li r6, 0x0
    stw r30, 0x3fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f3, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x64
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x0
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_808847A8
    li r0, -0x1
    lfs f1, lbl_808847AC
    addi r4, r31, 0x1588
    stfs f0, 0x58(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x64
    addi r8, r1, 0x58
    stfs f0, 0x5c(r1)
    addi r9, r1, 0x48
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x68(r1)
    stfs f0, 0x6c(r1)
    stfs f1, 0x48(r1)
    stfs f1, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x54(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_802E9FC8_00000514
    li r4, 0x4
    bl fn_804DA490
    lwz r3, lbl_8087F610
    li r4, 0x0
    bl fn_804DA4A4
    b lbl_fn_802E9FC8_00000514
lbl_fn_802E9FC8_000003FC:
    cmpwi r0, 0x1791
    bne lbl_fn_802E9FC8_000004F8
    li r0, 0x0
    stw r0, 0x14f8(r3)
    stw r0, 0x14fc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xf
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f1, lbl_808847A8
    li r30, 0x1
    lfs f0, lbl_808847AC
    addi r3, r31, 0xb0
    stw r30, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_808847B0
    li r5, 0x2
    stfs f0, 0x2fc(r31)
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    stfs f1, 0x2e8(r31)
    bl fn_80097C08
    mr r3, r31
    li r4, 0x64
    bl fn_80232B7C
    lfs f0, lbl_808847A8
    li r0, -0x1
    lfs f1, lbl_808847AC
    addi r4, r31, 0x1594
    stfs f0, 0x30(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x3c
    addi r8, r1, 0x30
    stfs f0, 0x34(r1)
    addi r9, r1, 0x20
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r30, lbl_8087F048
    mr r4, r31
    addi r3, r1, 0x10
    bl fn_801781B0
    mr r3, r30
    addi r4, r1, 0x10
    li r5, 0x80
    bl fn_80108F38
    b lbl_fn_802E9FC8_00000514
lbl_fn_802E9FC8_000004F8:
    lwz r0, 0x1530(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802E9FC8_00000514
    li r4, 0x1
    li r0, 0x0
    stw r4, 0x1530(r3)
    stw r0, 0x1534(r3)
lbl_fn_802E9FC8_00000514:
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802E9FC8_0000052C
    mr r3, r31
    bl fn_802EC280
lbl_fn_802E9FC8_0000052C:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_802EA27C(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lis r4, lbl_80747F70@ha
    lfs f11, lbl_808847DC
    stw r0, 0x84(r1)
    addi r4, r4, lbl_80747F70@l
    addi r5, r1, 0x8
    lfs f10, lbl_808847E0
    stw r31, 0x7c(r1)
    addi r4, r4, 0x1b8
    stw r30, 0x78(r1)
    mr r30, r3
    lfs f8, 0x52c(r3)
    lfs f7, 0x528(r3)
    lfs f0, 0x5a4(r3)
    fadds f8, f8, f11
    stfs f11, 0x5a8(r3)
    fadds f7, f7, f0
    lfs f0, lbl_808847E4
    stfs f8, 0xc(r1)
    fmuls f9, f0, f10
    lfs f8, 0x530(r3)
    stfs f7, 0x8(r1)
    lfs f7, 0x5ac(r3)
    psq_l f1, 0x0(r5), 0, 0
    li r5, 0x0
    psq_st f1, 0x614(r3), 0, 0
    fadds f2, f8, f7
    lfs f0, 0x618(r3)
    stfs f10, 0x5b0(r3)
    fadds f0, f0, f9
    stfs f9, 0x620(r3)
    stfs f2, 0x10(r1)
    stfs f2, 0x61c(r3)
    stfs f0, 0x618(r3)
    addi r3, r3, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802EA27C_000005E8
    li r3, 0x0
    b lbl_fn_802EA27C_000005F4
lbl_fn_802EA27C_000005E8:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_802EA27C_000005F4:
    addic. r31, r1, 0x48
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    beq lbl_fn_802EA27C_00000738
    lfs f0, lbl_808847E0
    addi r4, r1, 0x38
    stfs f0, 0x5b0(r30)
    mr r3, r31
    lfs f8, lbl_808847A8
    mr r5, r4
    lfs f9, 0x74(r1)
    lfs f10, 0x64(r1)
    lfs f11, 0x54(r1)
    lfs f7, lbl_808847E8
    lfs f0, lbl_808847EC
    stfs f8, 0x38(r1)
    stfs f7, 0x3c(r1)
    stfs f8, 0x40(r1)
    stfs f11, 0x2c(r1)
    stfs f10, 0x30(r1)
    stfs f9, 0x34(r1)
    stfs f8, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f8, 0x28(r1)
    stfs f11, 0x14(r1)
    stfs f10, 0x18(r1)
    stfs f9, 0x1c(r1)
    stfs f8, 0x54(r1)
    stfs f8, 0x64(r1)
    stfs f8, 0x74(r1)
    bl fn_805F93C0
    addi r4, r1, 0x20
    mr r3, r31
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x34(r1)
    addi r4, r1, 0x2c
    lfs f0, 0x40(r1)
    addi r3, r1, 0x14
    lfs f10, 0x2c(r1)
    fadds f11, f7, f0
    lfs f0, 0x38(r1)
    lfs f9, 0x30(r1)
    fadds f13, f10, f0
    lfs f8, 0x3c(r1)
    lfs f7, 0x14(r1)
    fadds f12, f9, f8
    lfs f0, 0x20(r1)
    lfs f9, 0x18(r1)
    fadds f10, f7, f0
    lfs f8, 0x24(r1)
    lfs f0, 0x28(r1)
    fadds f8, f9, f8
    lfs f7, 0x1c(r1)
    fmr f2, f11
    fadds f0, f7, f0
    lfs f9, 0x5b0(r30)
    stfs f2, 0x5fc(r30)
    fmr f2, f0
    stfs f13, 0x2c(r1)
    stfs f12, 0x30(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f10, 0x14(r1)
    stfs f8, 0x18(r1)
    psq_st f1, 0x5f4(r30), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f11, 0x34(r1)
    stfs f0, 0x1c(r1)
    psq_st f1, 0x600(r30), 0, 0
    stfs f2, 0x608(r30)
    stfs f9, 0x60c(r30)
lbl_fn_802EA27C_00000738:
    li r0, 0x80
    stw r0, 0x5d8(r30)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_802EA490(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r4, r1, 0x80
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    lfs f31, lbl_808847A8
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    lfs f30, lbl_808847AC
    stfd f29, 0x120(r1)
    psq_st f29, 0x128(r1), 0, 0
    stfd f28, 0x110(r1)
    psq_st f28, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    mr r31, r3
    stw r30, 0x108(r1)
    stw r29, 0x104(r1)
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x88(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_802EA490_00000BF4
    addi r3, r3, 0x1030
    bl fn_80126214
    addi r4, r31, 0x1088
    lwz r5, lbl_8087F430
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x74
    lfs f2, 0x1090(r31)
    cmpwi r5, 0x0
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r3), 0, 0
    beq lbl_fn_802EA490_00000958
    lwz r4, 0x10d8(r5)
    cmpwi r4, 0x0
    beq lbl_fn_802EA490_00000958
    lwz r3, 0x1030(r31)
    cmpwi r3, 0x0
    ble lbl_fn_802EA490_00000958
    lwz r5, 0x1034(r31)
    cmpwi r5, 0x0
    ble lbl_fn_802EA490_00000958
    subi r0, r5, 0x1
    subi r3, r3, 0x1
    mulli r8, r0, 0x30
    lwz r7, 0x9c(r4)
    lwz r6, 0x14e0(r31)
    li r4, 0x0
    li r5, 0x0
    lwzux r10, r8, r7
    mulli r0, r3, 0x30
    lwzx r9, r7, r0
    mtctr r6
    cmplwi r6, 0x0
    ble lbl_fn_802EA490_0000089C
lbl_fn_802EA490_00000840:
    lwz r7, 0x14dc(r31)
    lwzx r6, r7, r5
    add r3, r7, r5
    cmpw r9, r6
    bne lbl_fn_802EA490_0000086C
    lwz r0, 0x4(r3)
    cmpw r10, r0
    bne lbl_fn_802EA490_0000086C
    slwi r0, r4, 4
    add r30, r7, r0
    b lbl_fn_802EA490_000008A0
lbl_fn_802EA490_0000086C:
    lwz r0, 0x4(r3)
    cmpw r9, r0
    bne lbl_fn_802EA490_00000890
    cmpw r10, r6
    bne lbl_fn_802EA490_00000890
    lwz r3, 0x14dc(r31)
    slwi r0, r4, 4
    add r30, r3, r0
    b lbl_fn_802EA490_000008A0
lbl_fn_802EA490_00000890:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_802EA490_00000840
lbl_fn_802EA490_0000089C:
    li r30, 0x0
lbl_fn_802EA490_000008A0:
    cmpwi r30, 0x0
    beq lbl_fn_802EA490_00000958
    lfs f2, 0xc(r8)
    li r0, 0x0
    psq_l f1, 0x4(r8), 0, 0
    addi r29, r1, 0x68
    psq_st f1, 0x0(r29), 0, 0
    stw r0, 0x14f8(r31)
    stw r0, 0x14fc(r31)
    stfs f2, 0x70(r1)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x8
    mr r3, r31
    li r4, 0x6
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_808847AC
    li r3, 0x4
    li r0, 0x1
    stw r3, 0x560(r31)
    lfs f1, lbl_808847A8
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_808847B0
    li r5, 0x2
    stfs f0, 0x2fc(r31)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lfs f2, 0x530(r31)
    addi r4, r31, 0x1544
    psq_l f1, 0x528(r31), 0, 0
    addi r3, r31, 0x1550
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    stfs f2, 0x154c(r31)
    lfs f2, 0x70(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1558(r31)
    stw r30, 0x155c(r31)
    b lbl_fn_802EA490_00000C20
lbl_fn_802EA490_00000958:
    addi r3, r1, 0x74
    bl fn_805F9940
    lfs f0, lbl_808847F0
    fmr f31, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_802EA490_00000988
    psq_l f1, 0x534(r31), 0, 0
    addi r3, r1, 0x80
    lfs f2, 0x53c(r31)
    stfs f2, 0x88(r1)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_802EA490_00000B64
lbl_fn_802EA490_00000988:
    addi r3, r1, 0x74
    addi r29, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r29
    lfs f2, 0x7c(r1)
    mr r4, r29
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r30, r1, 0x5c
    psq_l f1, 0x0(r29), 0, 0
    fabs f3, f2
    lfs f0, lbl_808847BC
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802EA490_000009F8
    lfs f3, 0x5c(r1)
    lfs f0, lbl_808847A8
    fcmpo cr0, f3, f0
    ble lbl_fn_802EA490_000009EC
    lfs f0, lbl_808847C0
    b lbl_fn_802EA490_000009F0
lbl_fn_802EA490_000009EC:
    lfs f0, lbl_808847C4
lbl_fn_802EA490_000009F0:
    stfs f0, 0x48(r1)
    b lbl_fn_802EA490_00000A0C
lbl_fn_802EA490_000009F8:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802EA490_00000A0C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x90
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808847A8
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
    lfs f0, lbl_808847AC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x64(r1)
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
    lfs f0, lbl_808847BC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802EA490_00000B28
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808847A8
    fcmpo cr0, f3, f0
    ble lbl_fn_802EA490_00000B18
    lfs f0, lbl_808847C0
    b lbl_fn_802EA490_00000B1C
lbl_fn_802EA490_00000B18:
    lfs f0, lbl_808847C4
lbl_fn_802EA490_00000B1C:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802EA490_00000B3C
lbl_fn_802EA490_00000B28:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802EA490_00000B3C:
    lfs f2, lbl_808847A8
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x80
    stfs f2, 0x4c(r1)
    stfs f2, 0x64(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x88(r1)
lbl_fn_802EA490_00000B64:
    lwz r0, 0x1528(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802EA490_00000B8C
    lfs f4, 0x15d8(r31)
    lfs f3, 0x152c(r31)
    lfs f0, 0x1538(r31)
    fadds f3, f4, f3
    fmuls f0, f0, f3
    fmuls f30, f30, f0
    b lbl_fn_802EA490_00000BDC
lbl_fn_802EA490_00000B8C:
    cmpwi r0, 0x2
    bne lbl_fn_802EA490_00000BB0
    lfs f4, 0x15dc(r31)
    lfs f3, 0x152c(r31)
    lfs f0, 0x1538(r31)
    fadds f3, f4, f3
    fmuls f0, f0, f3
    fmuls f30, f30, f0
    b lbl_fn_802EA490_00000BDC
lbl_fn_802EA490_00000BB0:
    cmpwi r0, 0x3
    bne lbl_fn_802EA490_00000BD4
    lfs f4, 0x15e0(r31)
    lfs f3, 0x152c(r31)
    lfs f0, 0x1538(r31)
    fadds f3, f4, f3
    fmuls f0, f0, f3
    fmuls f30, f30, f0
    b lbl_fn_802EA490_00000BDC
lbl_fn_802EA490_00000BD4:
    lfs f0, 0x15d4(r31)
    fmuls f30, f30, f0
lbl_fn_802EA490_00000BDC:
    cmpwi r0, 0x0
    beq lbl_fn_802EA490_00000C04
    addi r3, r31, 0x7d4
    bl fn_8012DB04
    fmuls f30, f30, f1
    b lbl_fn_802EA490_00000C04
lbl_fn_802EA490_00000BF4:
    cmpwi r0, 0x6
    bne lbl_fn_802EA490_00000C04
    bl fn_8013A258
    b lbl_fn_802EA490_00000C20
lbl_fn_802EA490_00000C04:
    lfs f0, 0x568(r31)
    fmr f1, f31
    mr r3, r31
    addi r4, r1, 0x80
    fmuls f2, f30, f0
    li r5, 0x1
    bl fn_8013CB68
lbl_fn_802EA490_00000C20:
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
    lwz r29, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_802EA994(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    lwz r0, 0x1500(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802EA994_00000D54
    lwz r5, 0x14f4(r3)
    cmpwi r5, 0x0
    beq lbl_fn_802EA994_00000D54
    lwz r4, 0x14fc(r3)
    lwz r0, 0x15a8(r3)
    cmpw r4, r0
    blt lbl_fn_802EA994_00000E94
    addi r4, r1, 0x20
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x530(r5)
    lfs f0, 0x530(r3)
    lfs f3, 0x528(r3)
    addi r3, r1, 0x14
    fsubs f5, f2, f0
    lfs f4, 0x20(r1)
    lfs f0, lbl_808847A8
    fsubs f3, f4, f3
    stfs f2, 0x28(r1)
    stfs f3, 0x14(r1)
    stfs f5, 0x1c(r1)
    stfs f0, 0x18(r1)
    bl fn_805F9940
    lfs f0, lbl_808847F4
    fcmpo cr0, f1, f0
    bge lbl_fn_802EA994_00000D54
    li r0, 0x0
    stw r0, 0x14f8(r31)
    stw r0, 0x14fc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x6
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_808847AC
    li r3, 0x4
    li r0, 0x1
    stw r3, 0x560(r31)
    lfs f1, lbl_808847A8
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_808847B0
    li r5, 0x145
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
lbl_fn_802EA994_00000D54:
    lwz r0, 0x1500(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802EA994_00000E94
    lwz r0, 0x1524(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_802EA994_00000E08
    li r30, 0x0
    stw r30, 0x14f8(r31)
    stw r30, 0x14fc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_808847AC
    li r4, 0xe
    lfs f1, lbl_808847A8
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f2, lbl_808847B0
    li r5, 0x66
    stw r4, 0x58c(r31)
    li r4, 0x0
    li r6, 0x0
    li r7, 0x0
    stfs f1, 0x152c(r31)
    li r8, 0x1
    stw r30, 0x1530(r31)
    stw r30, 0x1534(r31)
    stw r0, 0x3fc(r31)
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x98(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_802EA994_00000E94
    li r4, 0x5
    bl fn_804DA490
    lwz r3, lbl_8087F610
    li r4, 0x1
    bl fn_804DA4A4
    b lbl_fn_802EA994_00000E94
lbl_fn_802EA994_00000E08:
    lwz r0, 0x1560(r31)
    addi r3, r1, 0x8
    lwz r4, 0x14e8(r31)
    slwi r0, r0, 2
    lfs f5, 0x530(r31)
    lwzx r4, r4, r0
    lfs f4, 0x528(r31)
    lfs f0, 0xc(r4)
    lfs f3, 0x4(r4)
    fsubs f5, f5, f0
    lfs f0, lbl_808847A8
    fsubs f3, f4, f3
    stfs f0, 0xc(r1)
    stfs f3, 0x8(r1)
    stfs f5, 0x10(r1)
    bl fn_805F9920
    lfs f0, lbl_808847F8
    fcmpo cr0, f1, f0
    bge lbl_fn_802EA994_00000E94
    lwz r3, 0x1560(r31)
    lwz r0, 0x14ec(r31)
    addi r3, r3, 0x1
    stw r3, 0x1560(r31)
    cmpw r3, r0
    blt lbl_fn_802EA994_00000E74
    li r0, 0x0
    stw r0, 0x1560(r31)
lbl_fn_802EA994_00000E74:
    lwz r0, 0x1560(r31)
    mr r3, r31
    lwz r4, 0x14e8(r31)
    li r5, 0x0
    slwi r0, r0, 2
    lwzx r4, r4, r0
    lwz r4, 0x0(r4)
    bl fn_8017039C
lbl_fn_802EA994_00000E94:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802EABE4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x55c(r3)
    subi r0, r4, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_802EABE4_00000F1C
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x1500(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802EABE4_00000F08
    lwz r0, 0x1560(r31)
    mr r3, r31
    lwz r4, 0x14e8(r31)
    li r5, 0x0
    slwi r0, r0, 2
    lwzx r4, r4, r0
    lwz r4, 0x0(r4)
    bl fn_8017039C
    b lbl_fn_802EABE4_00000F1C
lbl_fn_802EABE4_00000F08:
    lwz r4, 0x14f4(r31)
    mr r3, r31
    lfs f1, lbl_808847D4
    li r5, 0x0
    bl fn_80170A20
lbl_fn_802EABE4_00000F1C:
    mr r3, r31
    bl fn_802EA490
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802EAC70(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    mr r29, r3
    lfs f30, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_802EAC70_00000FAC
    li r31, 0x0
    stw r31, 0x14f8(r29)
    stw r31, 0x14fc(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    mr r3, r29
    li r4, 0x3
    stw r31, 0x58c(r29)
    bl fn_8016E970
    b lbl_fn_802EAC70_00001204
lbl_fn_802EAC70_00000FAC:
    lfs f3, 0x2e4(r29)
    lfs f0, lbl_808847B4
    fcmpo cr0, f0, f3
    cror eq, lt, eq
    bne lbl_fn_802EAC70_00000FF8
    lfs f0, lbl_808847B8
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802EAC70_00000FF8
    lwz r8, 0x590(r29)
    mr r6, r29
    lwz r7, 0x1510(r29)
    li r4, 0x0
    lwz r3, lbl_8087F048
    li r5, 0x0
    lfs f1, lbl_808847A8
    li r9, 0x3c
    li r10, 0x5
    bl fn_800F8C6C
lbl_fn_802EAC70_00000FF8:
    lwz r4, 0x14f4(r29)
    cmpwi r4, 0x0
    beq lbl_fn_802EAC70_00001204
    lfs f3, 0x530(r4)
    addi r31, r1, 0x50
    lfs f0, 0x530(r29)
    addi r5, r1, 0x68
    lfs f5, 0x52c(r4)
    mr r3, r31
    fsubs f2, f3, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x528(r4)
    mr r4, r31
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r30, r1, 0x5c
    psq_l f1, 0x0(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_808847BC
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802EAC70_000010A0
    lfs f3, 0x5c(r1)
    lfs f0, lbl_808847A8
    fcmpo cr0, f3, f0
    ble lbl_fn_802EAC70_00001094
    lfs f0, lbl_808847C0
    b lbl_fn_802EAC70_00001098
lbl_fn_802EAC70_00001094:
    lfs f0, lbl_808847C4
lbl_fn_802EAC70_00001098:
    stfs f0, 0x48(r1)
    b lbl_fn_802EAC70_000010B4
lbl_fn_802EAC70_000010A0:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802EAC70_000010B4:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808847A8
    addi r4, r1, 0x38
    lfs f30, 0x80(r1)
    mr r5, r4
    lfs f31, 0x7c(r1)
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
    lfs f0, lbl_808847AC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xd8(r1)
    stfs f3, 0xdc(r1)
    stfs f3, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xa8(r1)
    stfs f31, 0xac(r1)
    stfs f30, 0xb0(r1)
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
    lfs f0, lbl_808847BC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802EAC70_000011D0
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808847A8
    fcmpo cr0, f3, f0
    ble lbl_fn_802EAC70_000011C0
    lfs f0, lbl_808847C0
    b lbl_fn_802EAC70_000011C4
lbl_fn_802EAC70_000011C0:
    lfs f0, lbl_808847C4
lbl_fn_802EAC70_000011C4:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802EAC70_000011E4
lbl_fn_802EAC70_000011D0:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802EAC70_000011E4:
    addi r3, r1, 0x44
    lfs f2, lbl_808847A8
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0x60(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0x64(r1)
    stfs f0, 0x538(r29)
lbl_fn_802EAC70_00001204:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_802EAF68(void)
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
    lwz r0, 0x14f8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802EAF68_0000132C
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802EAF68_0000149C
    lfs f0, lbl_808847AC
    li r31, 0x1
    stw r31, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_808847A8
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x140
    lfs f2, lbl_808847B0
    li r6, 0x1
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x0
    stw r31, 0x14f8(r30)
    mr r3, r30
    li r4, 0x65
    stw r0, 0x14fc(r30)
    bl fn_80232B7C
    lfs f0, lbl_808847A8
    li r0, -0x1
    lfs f1, lbl_808847AC
    addi r4, r30, 0x157c
    stfs f0, 0x1c(r1)
    addi r5, r30, 0xb0
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    stfs f0, 0x20(r1)
    addi r9, r1, 0x28
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x24(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_802EAF68_0000149C
lbl_fn_802EAF68_0000132C:
    cmpwi r0, 0x1
    bne lbl_fn_802EAF68_00001450
    li r31, 0x0
    stw r31, 0x6c(r1)
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x38
    stw r31, 0x70(r1)
    addi r5, r30, 0x614
    addi r6, r30, 0x1518
    addi r8, r30, 0x5b8
    stw r31, 0x74(r1)
    lis r7, 0x8000
    li r9, 0x0
    stw r31, 0x78(r1)
    lfs f1, 0x620(r30)
    bl fn_8004D388
    cmpwi r3, 0x0
    beq lbl_fn_802EAF68_00001378
    li r31, 0x1
lbl_fn_802EAF68_00001378:
    mr r3, r30
    bl fn_80144710
    lwz r3, lbl_8087F048
    mr r6, r30
    lwz r7, 0x150c(r30)
    li r4, 0x0
    lwz r8, 0x590(r30)
    li r5, 0x0
    lfs f1, lbl_808847A8
    li r9, 0xa
    li r10, 0x5
    bl fn_800F8C6C
    cmpwi r3, 0x0
    beq lbl_fn_802EAF68_000013B4
    li r31, 0x1
lbl_fn_802EAF68_000013B4:
    cmpwi r31, 0x0
    beq lbl_fn_802EAF68_0000141C
    lfs f0, lbl_808847AC
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_808847A8
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x141
    lfs f2, lbl_808847B0
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r3, 0x2
    li r0, 0x0
    stw r3, 0x14f8(r30)
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    stw r0, 0x14fc(r30)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    b lbl_fn_802EAF68_0000149C
lbl_fn_802EAF68_0000141C:
    lfs f1, 0x528(r30)
    lfs f0, 0x1518(r30)
    lfs f3, 0x52c(r30)
    fadds f4, f1, f0
    lfs f2, 0x151c(r30)
    lfs f1, 0x530(r30)
    lfs f0, 0x1520(r30)
    fadds f2, f3, f2
    stfs f4, 0x528(r30)
    fadds f0, f1, f0
    stfs f2, 0x52c(r30)
    stfs f0, 0x530(r30)
    b lbl_fn_802EAF68_0000149C
lbl_fn_802EAF68_00001450:
    cmpwi r0, 0x2
    bne lbl_fn_802EAF68_0000149C
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802EAF68_0000149C
    li r31, 0x0
    stw r31, 0x14f8(r30)
    stw r31, 0x14fc(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stw r31, 0x58c(r30)
    bl fn_8016E970
lbl_fn_802EAF68_0000149C:
    lwz r0, 0xa4(r1)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_802EB1F4(void)
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
    mr r31, r3
    stw r30, 0x128(r1)
    stw r29, 0x124(r1)
    lfs f3, 0x1558(r3)
    lfs f0, 0x154c(r3)
    lfs f5, 0x1554(r3)
    fsubs f2, f3, f0
    lfs f4, 0x1548(r3)
    lfs f3, 0x1550(r3)
    lfs f0, 0x1544(r3)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x84(r1)
    stfs f0, 0x80(r1)
    stfs f2, 0x88(r1)
    lwz r0, 0x14f8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802EB1F4_000017E8
    lwz r4, 0x14fc(r3)
    lwz r0, 0x15ac(r3)
    cmpw r4, r0
    ble lbl_fn_802EB1F4_00001604
    li r4, 0x0
    li r0, 0x1
    stw r4, 0x14fc(r3)
    stw r0, 0x14f8(r3)
    lwz r4, lbl_8087F4A0
    lwz r6, 0x48(r4)
    b lbl_fn_802EB1F4_000015C0
lbl_fn_802EB1F4_00001550:
    lwz r5, 0x155c(r3)
    lwz r0, 0x48(r6)
    lwz r4, 0x8(r5)
    cmpw r4, r0
    bne lbl_fn_802EB1F4_000015BC
    lwz r4, 0xc(r5)
    lwz r0, 0x4c(r6)
    cmpw r4, r0
    bne lbl_fn_802EB1F4_000015BC
    lfs f0, lbl_808847A8
    li r0, 0x0
    li r3, 0x4
    stw r3, 0x90(r1)
    mr r3, r6
    addi r4, r1, 0x90
    stw r0, 0x94(r1)
    stw r0, 0x98(r1)
    stw r0, 0x9c(r1)
    stw r0, 0xa0(r1)
    stfs f0, 0xa4(r1)
    stfs f0, 0xa8(r1)
    stfs f0, 0xac(r1)
    lwz r12, 0x0(r6)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_802EB1F4_000015C8
lbl_fn_802EB1F4_000015BC:
    lwz r6, 0x5c(r6)
lbl_fn_802EB1F4_000015C0:
    cmpwi r6, 0x0
    bne lbl_fn_802EB1F4_00001550
lbl_fn_802EB1F4_000015C8:
    lfs f0, lbl_808847AC
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808847A8
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x142
    lfs f2, lbl_808847B0
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802EB1F4_000018B8
lbl_fn_802EB1F4_00001604:
    addi r3, r1, 0x80
    addi r30, r1, 0x68
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    stfs f2, 0x70(r1)
    bl fn_805F98D0
    lfs f2, 0x70(r1)
    addi r29, r1, 0x74
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_808847BC
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x7c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802EB1F4_00001670
    lfs f3, 0x74(r1)
    lfs f0, lbl_808847A8
    fcmpo cr0, f3, f0
    ble lbl_fn_802EB1F4_00001664
    lfs f0, lbl_808847C0
    b lbl_fn_802EB1F4_00001668
lbl_fn_802EB1F4_00001664:
    lfs f0, lbl_808847C4
lbl_fn_802EB1F4_00001668:
    stfs f0, 0x48(r1)
    b lbl_fn_802EB1F4_00001684
lbl_fn_802EB1F4_00001670:
    frsp f2, f2
    lfs f1, 0x74(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802EB1F4_00001684:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xb0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808847A8
    addi r4, r1, 0x38
    lfs f30, 0xb8(r1)
    mr r5, r4
    lfs f31, 0xb4(r1)
    addi r3, r1, 0xe0
    lfs f13, 0xb0(r1)
    lfs f12, 0xc8(r1)
    lfs f11, 0xc4(r1)
    lfs f10, 0xc0(r1)
    lfs f9, 0xd8(r1)
    lfs f8, 0xd4(r1)
    lfs f7, 0xd0(r1)
    lfs f6, 0xdc(r1)
    lfs f5, 0xcc(r1)
    lfs f4, 0xbc(r1)
    lfs f0, lbl_808847AC
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x7c(r1)
    stfs f3, 0x110(r1)
    stfs f3, 0x114(r1)
    stfs f3, 0x118(r1)
    stfs f0, 0x11c(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xe0(r1)
    stfs f31, 0xe4(r1)
    stfs f30, 0xe8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xf0(r1)
    stfs f11, 0xf4(r1)
    stfs f12, 0xf8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x100(r1)
    stfs f8, 0x104(r1)
    stfs f9, 0x108(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xec(r1)
    stfs f5, 0xfc(r1)
    stfs f6, 0x10c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808847BC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802EB1F4_000017A0
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808847A8
    fcmpo cr0, f3, f0
    ble lbl_fn_802EB1F4_00001790
    lfs f0, lbl_808847C0
    b lbl_fn_802EB1F4_00001794
lbl_fn_802EB1F4_00001790:
    lfs f0, lbl_808847C4
lbl_fn_802EB1F4_00001794:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802EB1F4_000017B4
lbl_fn_802EB1F4_000017A0:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802EB1F4_000017B4:
    addi r3, r1, 0x44
    lfs f2, lbl_808847A8
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f4, 0x538(r31)
    lfs f3, 0x78(r1)
    lfs f0, lbl_808847D8
    fsubs f3, f3, f4
    stfs f2, 0x4c(r1)
    stfs f2, 0x7c(r1)
    fmadds f0, f0, f3, f4
    stfs f0, 0x538(r31)
    b lbl_fn_802EB1F4_000018B8
lbl_fn_802EB1F4_000017E8:
    cmpwi r0, 0x1
    bne lbl_fn_802EB1F4_000018B8
    lfs f30, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_802EB1F4_00001834
    li r30, 0x0
    stw r30, 0x14f8(r31)
    stw r30, 0x14fc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
lbl_fn_802EB1F4_00001834:
    addi r3, r1, 0x80
    bl fn_805F9940
    fmr f31, f1
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fdivs f30, f31, f1
    addi r4, r1, 0x80
    lfs f2, 0x88(r1)
    addi r3, r1, 0x50
    psq_l f1, 0x0(r4), 0, 0
    mr r4, r3
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f4, 0x58(r1)
    lfs f3, 0x54(r1)
    fmuls f5, f4, f30
    lfs f0, 0x50(r1)
    fmuls f6, f3, f30
    lfs f3, 0x52c(r31)
    fmuls f7, f0, f30
    lfs f4, 0x528(r31)
    lfs f0, 0x530(r31)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x5c(r1)
    fadds f0, f0, f5
    stfs f6, 0x60(r1)
    stfs f5, 0x64(r1)
    stfs f4, 0x528(r31)
    stfs f3, 0x52c(r31)
    stfs f0, 0x530(r31)
lbl_fn_802EB1F4_000018B8:
    lwz r0, 0x154(r1)
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_802EB61C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_26
    lfs f31, 0x2e4(r3)
    mr r31, r3
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802EB61C_0000194C
    li r30, 0x0
    stw r30, 0x14f8(r31)
    stw r30, 0x14fc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_802EB61C_00001ABC
lbl_fn_802EB61C_0000194C:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_808847FC
    fcmpo cr0, f0, f3
    cror eq, lt, eq
    bne lbl_fn_802EB61C_00001ABC
    lfs f0, lbl_80884800
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802EB61C_00001ABC
    lwz r4, 0x940(r31)
    lis r0, 0x4330
    stw r0, 0x20(r1)
    lis r3, lbl_80747F58@ha
    xoris r0, r4, 0x8000
    lfd f4, lbl_80747F58@l(r3)
    stw r0, 0x24(r1)
    lfs f5, 0x7d8(r31)
    lfd f3, 0x20(r1)
    lfs f0, 0x15f4(r31)
    fsubs f3, f3, f4
    fdivs f3, f5, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802EB61C_000019B4
    li r0, 0x3
    stw r0, 0x1528(r31)
    b lbl_fn_802EB61C_000019D4
lbl_fn_802EB61C_000019B4:
    lfs f0, 0x15f0(r31)
    fcmpo cr0, f3, f0
    bge lbl_fn_802EB61C_000019CC
    li r0, 0x2
    stw r0, 0x1528(r31)
    b lbl_fn_802EB61C_000019D4
lbl_fn_802EB61C_000019CC:
    li r0, 0x1
    stw r0, 0x1528(r31)
lbl_fn_802EB61C_000019D4:
    lwz r0, 0x1528(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802EB61C_000019F0
    lwz r0, 0x15e4(r31)
    mulli r0, r0, 0x1e
    stw r0, 0x1524(r31)
    b lbl_fn_802EB61C_00001A1C
lbl_fn_802EB61C_000019F0:
    cmpwi r0, 0x2
    bne lbl_fn_802EB61C_00001A08
    lwz r0, 0x15e8(r31)
    mulli r0, r0, 0x1e
    stw r0, 0x1524(r31)
    b lbl_fn_802EB61C_00001A1C
lbl_fn_802EB61C_00001A08:
    cmpwi r0, 0x3
    bne lbl_fn_802EB61C_00001A1C
    lwz r0, 0x15ec(r31)
    mulli r0, r0, 0x1e
    stw r0, 0x1524(r31)
lbl_fn_802EB61C_00001A1C:
    lfs f31, lbl_80884804
    addi r29, r1, 0x14
    addi r28, r1, 0x8
    li r26, 0x0
    li r27, 0x0
    li r30, 0x0
    b lbl_fn_802EB61C_00001AA4
lbl_fn_802EB61C_00001A38:
    lwz r4, 0x14e8(r31)
    mr r3, r28
    lfs f3, 0x530(r31)
    lwzx r4, r4, r30
    lfs f5, 0x52c(r31)
    lfs f0, 0xc(r4)
    lfs f4, 0x8(r4)
    fsubs f2, f3, f0
    lfs f3, 0x528(r31)
    lfs f0, 0x4(r4)
    fsubs f4, f5, f4
    stfs f2, 0x1c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x10(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_802EB61C_00001A9C
    mr r3, r28
    bl fn_805F9920
    mr r26, r27
    fmr f31, f1
lbl_fn_802EB61C_00001A9C:
    addi r27, r27, 0x1
    addi r30, r30, 0x4
lbl_fn_802EB61C_00001AA4:
    lwz r0, 0x14ec(r31)
    cmplw r27, r0
    blt lbl_fn_802EB61C_00001A38
    li r0, 0x1
    stw r26, 0x1560(r31)
    stw r0, 0x1500(r31)
lbl_fn_802EB61C_00001ABC:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
