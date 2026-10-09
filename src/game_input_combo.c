#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_14(void);
extern void _savegpr_14(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AFF8(void);
extern void fn_800844D8(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_80088FAC(void);
extern void fn_8008937C(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800CB5C8(void);
extern void fn_800D246C(void);
extern void fn_800DC12C(void);
extern void fn_800EB7A0(void);
extern void fn_800EE360(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_80108F38(void);
extern void fn_8013655C(void);
extern void fn_8015495C(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_801765D8(void);
extern void fn_801781B0(void);
extern void fn_80178A6C(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_8023780C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_802E8580(void);
extern void fn_802E89B0(void);
extern void fn_80370AE4(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473F50(void);
extern void fn_804DA490(void);
extern void fn_804DA4A4(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80683B54(void);
extern void fn_80684600(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80747F70[];
extern u8 lbl_80748250[];
extern u8 lbl_80775A88[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80787548[];
extern u8 lbl_80787568[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_808847A8;
extern u32 lbl_808847AC;
extern u32 lbl_808847B0;
extern u32 lbl_808847BC;
extern u32 lbl_808847C0;
extern u32 lbl_808847C4;
extern u32 lbl_808847C8;
extern u32 lbl_808847CC;
extern u32 lbl_808847D0;
extern u32 lbl_808847D8;
extern u32 lbl_808847E0;
extern u32 lbl_808847EC;
extern u32 lbl_808847F8;
extern u32 lbl_80884808;
extern u32 lbl_80884810;

/* Function declarations */
void fn_802EB814(void);
void fn_802EB97C(void);
void fn_802EB9F8(void);
void fn_802EBABC(void);
void fn_802EBB14(void);
void fn_802EBBA8(void);
void fn_802EBF40(void);
void fn_802EC098(void);
void fn_802EC160(void);
void fn_802EC280(void);
void fn_802EC38C(void);
void fn_802EC660(void);
void fn_802EC664(void);
void fn_802EC668(void);
void fn_802EC66C(void);
void fn_802EC670(void);
void fn_802EC950(void);
void fn_802EC9A8(void);

asm void fn_802EB814(void)
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
    bne lbl_fn_802EB814_0000006C
    li r31, 0x0
    stw r31, 0x1500(r30)
    stw r31, 0x14f8(r30)
    stw r31, 0x14fc(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stw r31, 0x58c(r30)
    bl fn_8016E970
    b lbl_fn_802EB814_000000B8
lbl_fn_802EB814_0000006C:
    lfs f1, 0x2e4(r30)
    lfs f0, lbl_808847C8
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_802EB814_000000B8
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_808847A8
    mr r4, r30
    stw r0, 0xc(r1)
    addi r7, r30, 0x528
    lfs f2, lbl_808847AC
    addi r8, r30, 0x534
    lwz r3, lbl_8087F048
    li r9, 0x0
    lwz r5, 0x1514(r30)
    li r10, 0x1e
    lwz r6, 0x590(r30)
    bl fn_800FAB80
lbl_fn_802EB814_000000B8:
    lwz r0, 0x1528(r30)
    cmpwi r0, 0x0
    beq lbl_fn_802EB814_00000148
    lfs f1, 0x2e4(r30)
    lfs f0, lbl_808847CC
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_802EB814_00000148
    lfs f0, lbl_808847D0
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_802EB814_00000148
    lwz r31, lbl_8087F048
    mr r3, r31
    bl fn_800F8548
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r6, r3
    lfs f1, lbl_808847A8
    stw r0, 0xc(r1)
    mr r3, r31
    lfs f2, lbl_808847AC
    mr r4, r30
    lwz r5, 0x1514(r30)
    addi r7, r30, 0x528
    addi r8, r30, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lwz r3, lbl_8087F430
    li r4, 0x5
    li r5, 0x1
    bl fn_80370AE4
    li r0, 0x0
    stw r0, 0x1528(r30)
    stw r0, 0x1540(r30)
lbl_fn_802EB814_00000148:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802EB97C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, 0x14fc(r3)
    lwz r0, 0x15b8(r3)
    cmpw r4, r0
    blt lbl_fn_802EB97C_000001CC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
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
lbl_fn_802EB97C_000001CC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802EB9F8(void)
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
    bne lbl_fn_802EB9F8_00000284
    lwz r5, 0x12a4(r31)
    mr r3, r31
    lwz r0, 0x5c0(r31)
    li r4, 0x1
    oris r5, r5, 0x200
    stw r5, 0x12a4(r31)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1434(r31)
    cmpwi r3, 0x0
    ble lbl_fn_802EB9F8_00000264
    subi r0, r3, 0x1
    stw r0, 0x1434(r31)
    b lbl_fn_802EB9F8_0000028C
lbl_fn_802EB9F8_00000264:
    lwz r0, 0x12a4(r31)
    mr r3, r31
    ori r0, r0, 0x8000
    stw r0, 0x12a4(r31)
    bl fn_801765D8
    mr r3, r31
    bl fn_800EE360
    b lbl_fn_802EB9F8_0000028C
lbl_fn_802EB9F8_00000284:
    li r0, 0x0
    stw r0, 0x1434(r31)
lbl_fn_802EB9F8_0000028C:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802EBABC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x14f8(r3)
    stw r31, 0x14fc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stw r31, 0x58c(r30)
    bl fn_8016E970
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802EBB14(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x14f8(r3)
    stw r0, 0x14fc(r3)
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
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802EBBA8(void)
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
    mr r29, r3
    lwz r0, 0x14f4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802EBBA8_00000700
    li r30, 0x0
    stw r30, 0x14f8(r3)
    stw r30, 0x14fc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    li r0, 0x7
    mr r3, r29
    li r4, 0x6
    stw r0, 0x58c(r29)
    bl fn_8016E970
    lfs f0, lbl_808847AC
    li r0, 0x4
    li r31, 0x1
    stw r0, 0x560(r29)
    lfs f1, lbl_808847A8
    addi r3, r29, 0xb0
    stw r31, 0x3fc(r29)
    li r4, 0x0
    lfs f2, lbl_808847B0
    li r5, 0x13f
    stfs f0, 0x2fc(r29)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r29)
    bl fn_80097C08
    lwz r5, 0x14f4(r29)
    addi r4, r1, 0x74
    lfs f4, 0x52c(r29)
    addi r3, r29, 0x1518
    lfs f5, 0x52c(r5)
    lfs f3, 0x528(r5)
    fsubs f5, f5, f4
    lfs f0, 0x528(r29)
    lfs f4, 0x530(r5)
    fsubs f3, f3, f0
    stfs f5, 0x78(r1)
    lfs f0, 0x530(r29)
    stfs f3, 0x74(r1)
    fsubs f2, f4, f0
    lfs f3, lbl_808847A8
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x1518(r29)
    stfs f2, 0x7c(r1)
    fcmpu cr0, f3, f0
    stfs f2, 0x1520(r29)
    stfs f3, 0x151c(r29)
    bne lbl_fn_802EBBA8_000004AC
    fcmpu cr0, f3, f3
    bne lbl_fn_802EBBA8_000004AC
    frsp f0, f2
    fcmpu cr0, f3, f0
    bne lbl_fn_802EBBA8_000004AC
    mr r30, r31
lbl_fn_802EBBA8_000004AC:
    cmpwi r30, 0x0
    beq lbl_fn_802EBBA8_00000510
    lfs f1, 0x538(r29)
    addi r3, r1, 0xf0
    li r4, 0x79
    bl fn_805F8E70
    lfs f0, lbl_808847A8
    addi r30, r1, 0x68
    stfs f0, 0x5c(r1)
    addi r6, r1, 0x5c
    lfs f2, lbl_808847AC
    mr r4, r30
    stfs f0, 0x60(r1)
    mr r5, r30
    addi r3, r1, 0xf0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x64(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F93C0
    psq_l f1, 0x0(r30), 0, 0
    addi r3, r29, 0x1518
    lfs f2, 0x70(r1)
    stfs f2, 0x1520(r29)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_802EBBA8_00000510:
    addi r3, r29, 0x1518
    mr r4, r3
    bl fn_805F98D0
    lfs f2, 0x1520(r29)
    addi r3, r29, 0x1518
    lfs f0, lbl_808847BC
    addi r30, r1, 0x50
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802EBBA8_0000056C
    lfs f3, 0x50(r1)
    lfs f0, lbl_808847A8
    fcmpo cr0, f3, f0
    ble lbl_fn_802EBBA8_00000560
    lfs f0, lbl_808847C0
    b lbl_fn_802EBBA8_00000564
lbl_fn_802EBBA8_00000560:
    lfs f0, lbl_808847C4
lbl_fn_802EBBA8_00000564:
    stfs f0, 0x48(r1)
    b lbl_fn_802EBBA8_00000580
lbl_fn_802EBBA8_0000056C:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802EBBA8_00000580:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808847A8
    addi r4, r1, 0x38
    lfs f30, 0x88(r1)
    mr r5, r4
    lfs f31, 0x84(r1)
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
    lfs f0, lbl_808847AC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f3, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xb0(r1)
    stfs f31, 0xb4(r1)
    stfs f30, 0xb8(r1)
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
    lfs f0, lbl_808847BC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802EBBA8_0000069C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808847A8
    fcmpo cr0, f3, f0
    ble lbl_fn_802EBBA8_0000068C
    lfs f0, lbl_808847C0
    b lbl_fn_802EBBA8_00000690
lbl_fn_802EBBA8_0000068C:
    lfs f0, lbl_808847C4
lbl_fn_802EBBA8_00000690:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802EBBA8_000006B0
lbl_fn_802EBBA8_0000069C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802EBBA8_000006B0:
    lfs f6, lbl_808847A8
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    fmr f2, f6
    lfs f4, 0x1518(r29)
    lfs f5, lbl_808847EC
    lfs f3, 0x151c(r29)
    lfs f0, 0x1520(r29)
    fmuls f4, f4, f5
    stfs f2, 0x58(r1)
    frsp f2, f2
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f6, 0x4c(r1)
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x534(r29), 0, 0
    stfs f2, 0x53c(r29)
    stfs f4, 0x1518(r29)
    stfs f3, 0x151c(r29)
    stfs f0, 0x1520(r29)
lbl_fn_802EBBA8_00000700:
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

asm void fn_802EBF40(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    stw r0, 0x14f8(r3)
    stw r0, 0x14fc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f3, lbl_808847AC
    li r0, 0xd
    lfs f0, lbl_808847D8
    li r31, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_808847A8
    li r4, 0x0
    stw r0, 0x58c(r30)
    li r5, 0x14d
    lfs f2, lbl_808847B0
    li r6, 0x0
    stw r31, 0x3fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f3, 0x2fc(r30)
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x64
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    lwz r12, 0x0(r30)
    mr r3, r30
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
    addi r4, r30, 0x1588
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
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_802EBF40_0000086C
    li r4, 0x4
    bl fn_804DA490
    lwz r3, lbl_8087F610
    li r4, 0x0
    bl fn_804DA4A4
lbl_fn_802EBF40_0000086C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802EC098(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x14f8(r3)
    stw r31, 0x14fc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_808847AC
    li r4, 0xe
    lfs f1, lbl_808847A8
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f2, lbl_808847B0
    li r5, 0x66
    stw r4, 0x58c(r30)
    li r4, 0x0
    li r6, 0x0
    li r7, 0x0
    stfs f1, 0x152c(r30)
    li r8, 0x1
    stw r31, 0x1530(r30)
    stw r31, 0x1534(r30)
    stw r0, 0x3fc(r30)
    stfs f0, 0x2fc(r30)
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x98(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_802EC098_00000934
    li r4, 0x5
    bl fn_804DA490
    lwz r3, lbl_8087F610
    li r4, 0x1
    bl fn_804DA4A4
lbl_fn_802EC098_00000934:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802EC160(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    li r0, 0x0
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r3
    stw r0, 0x14f8(r3)
    stw r0, 0x14fc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0xf
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f1, lbl_808847A8
    li r31, 0x1
    lfs f0, lbl_808847AC
    addi r3, r30, 0xb0
    stw r31, 0x3fc(r30)
    li r4, 0x0
    lfs f2, lbl_808847B0
    li r5, 0x2
    stfs f0, 0x2fc(r30)
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    stfs f1, 0x2e8(r30)
    bl fn_80097C08
    mr r3, r30
    li r4, 0x64
    bl fn_80232B7C
    lfs f0, lbl_808847A8
    li r0, -0x1
    lfs f1, lbl_808847AC
    addi r4, r30, 0x1594
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
    lwz r31, lbl_8087F048
    mr r4, r30
    addi r3, r1, 0x38
    bl fn_801781B0
    mr r3, r31
    addi r4, r1, 0x38
    li r5, 0x80
    bl fn_80108F38
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802EC280(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x14f8(r3)
    stw r0, 0x14fc(r3)
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
    lfs f0, lbl_808847AC
    li r3, 0x2
    li r0, 0x1
    stw r3, 0x58c(r31)
    lfs f1, lbl_808847A8
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_808847B0
    li r5, 0x2e
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
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
    addi r3, r31, 0x15a0
    li r4, 0x5
    li r5, 0x0
    bl fn_800CB5C8
    addi r3, r31, 0x15a4
    li r4, 0x5
    li r5, 0x0
    bl fn_800CB5C8
    mr r3, r31
    bl fn_800EB7A0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802EC38C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80747F70@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80747F70@l
    addi r4, r4, 0x1c5
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x15bc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802EC38C_00000BCC
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802EC38C_00000BCC
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x15bc(r29)
    mr r30, r3
    b lbl_fn_802EC38C_00000BD0
lbl_fn_802EC38C_00000BCC:
    li r30, 0x0
lbl_fn_802EC38C_00000BD0:
    lis r31, lbl_80747F70@ha
    mr r3, r30
    addi r31, r31, lbl_80747F70@l
    addi r5, r29, 0x15c0
    addi r4, r31, 0x1cb
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_808847A8
    mr r3, r30
    lfs f2, lbl_808847AC
    addi r4, r31, 0x1d5
    lfs f3, lbl_808847B0
    addi r5, r29, 0x15c4
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f1, lbl_808847B0
    mr r3, r30
    lfs f2, lbl_808847E0
    addi r4, r31, 0x1e1
    fmr f3, f1
    addi r5, r29, 0x15d8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r30
    addi r4, r31, 0x1ea
    addi r5, r29, 0x15e4
    li r6, 0x0
    li r7, 0x64
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_808847B0
    mr r3, r30
    lfs f2, lbl_808847E0
    addi r4, r31, 0x1f2
    fmr f3, f1
    addi r5, r29, 0x15dc
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r30
    addi r4, r31, 0x1fb
    addi r5, r29, 0x15e8
    li r6, 0x0
    li r7, 0x64
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_808847B0
    mr r3, r30
    lfs f2, lbl_808847E0
    addi r4, r31, 0x203
    fmr f3, f1
    addi r5, r29, 0x15e0
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r30
    addi r4, r31, 0x20c
    addi r5, r29, 0x15ec
    li r6, 0x0
    li r7, 0x64
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_808847A8
    mr r3, r30
    lfs f2, lbl_808847AC
    addi r4, r31, 0x214
    lfs f3, lbl_80884808
    addi r5, r29, 0x15f0
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808847A8
    mr r3, r30
    lfs f2, lbl_808847AC
    addi r4, r31, 0x21d
    lfs f3, lbl_80884808
    addi r5, r29, 0x15f4
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r30
    addi r4, r31, 0x226
    addi r5, r29, 0x1528
    li r6, 0x0
    li r7, 0xa
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_808847A8
    mr r3, r30
    lfs f2, lbl_808847AC
    addi r4, r31, 0x231
    lfs f3, lbl_80884808
    addi r5, r29, 0x15f8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r30
    addi r4, r31, 0x23b
    addi r5, r29, 0x15fc
    li r6, 0x0
    li r7, 0x64
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x245
    addi r5, r29, 0x1600
    li r6, 0x0
    li r7, 0x64
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x24f
    addi r5, r29, 0x1530
    li r6, 0x0
    li r7, 0x64
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x258
    addi r5, r29, 0x1534
    li r6, 0x0
    li r7, 0x64
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_808847A8
    mr r3, r30
    lfs f2, lbl_808847F8
    addi r4, r31, 0x260
    lfs f3, lbl_808847AC
    addi r5, r29, 0x152c
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

asm void fn_802EC660(void)
{
    nofralloc
    blr
}

asm void fn_802EC664(void)
{
    nofralloc
    blr
}

asm void fn_802EC668(void)
{
    nofralloc
    blr
}

asm void fn_802EC66C(void)
{
    nofralloc
    blr
}

asm void fn_802EC670(void)
{
    nofralloc
    stwu r1, -0x6a0(r1)
    mflr r0
    stw r0, 0x6a4(r1)
    stmw r25, 0x684(r1)
    mr r30, r3
    mr r31, r5
    bl fn_802E8580
    lwz r3, 0x12a4(r30)
    lis r7, lbl_80787568@ha
    lwz r0, 0x958(r30)
    addi r7, r7, lbl_80787568@l
    oris r6, r3, 0x60
    lwz r4, 0x14e0(r30)
    ori r5, r0, 0x10
    lwz r8, 0x14ec(r30)
    subf r4, r4, r4
    li r29, 0x0
    subf r0, r8, r8
    lis r3, lbl_80748250@ha
    addi r28, r3, lbl_80748250@l
    stw r7, 0x0(r30)
    addi r27, r1, 0x38
    stw r6, 0x12a4(r30)
    mr r3, r28
    stw r5, 0x958(r30)
    stw r4, 0x14e0(r30)
    stw r0, 0x14ec(r30)
    stw r29, 0x162c(r30)
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
lbl_fn_802EC670_00000FDC:
    addi r3, r1, 0x44
    bl fn_8005B3CC
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_802EC670_00001074
    addi r4, r28, 0x2b
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_802EC670_00001074
    mr r3, r26
    addi r4, r28, 0x2c
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_802EC670_00001064
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_802EC670_00001030
    lbz r0, 0x2c(r1)
    clrlwi r25, r0, 25
    b lbl_fn_802EC670_00001034
lbl_fn_802EC670_00001030:
    lwz r25, 0x30(r1)
lbl_fn_802EC670_00001034:
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
lbl_fn_802EC670_00001064:
    addi r3, r1, 0x44
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802EC670_00000FDC
lbl_fn_802EC670_00001074:
    addi r3, r1, 0x20
    addi r4, r1, 0x38
    addi r5, r1, 0x2c
    bl fn_8006AFF8
    lwz r0, 0x20(r1)
    addi r3, r30, 0x14d4
    srwi. r0, r0, 31
    bne lbl_fn_802EC670_0000109C
    addi r4, r1, 0x21
    b lbl_fn_802EC670_000010A0
lbl_fn_802EC670_0000109C:
    lwz r4, 0x28(r1)
lbl_fn_802EC670_000010A0:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r31, lbl_80748250@ha
    addi r3, r30, 0x1564
    addi r31, r31, lbl_80748250@l
    addi r4, r31, 0x35
    bl fn_8023780C
    addi r3, r30, 0x1570
    addi r4, r31, 0x4a
    bl fn_8023780C
    addi r3, r30, 0x157c
    addi r4, r31, 0x5f
    bl fn_8023780C
    addi r3, r30, 0x1588
    addi r4, r31, 0x75
    bl fn_8023780C
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802EC670_000010FC
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_802EC670_000010FC:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802EC670_00001110
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_802EC670_00001110:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802EC670_00001124
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_802EC670_00001124:
    mr r3, r30
    lmw r25, 0x684(r1)
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}

asm void fn_802EC950(void)
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
    beq lbl_fn_802EC950_00001178
    li r4, 0x0
    bl fn_802E89B0
    cmpwi r31, 0x0
    ble lbl_fn_802EC950_00001178
    mr r3, r30
    bl dtor_80084684
lbl_fn_802EC950_00001178:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802EC9A8(void)
{
    nofralloc
    stwu r1, -0x6d0(r1)
    mflr r0
    stw r0, 0x6d4(r1)
    addi r11, r1, 0x6d0
    bl _savegpr_14
    mr r15, r3
    addi r3, r3, 0x1564
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802EC9A8_00001BC0
    lwz r3, 0x1438(r15)
    cmpwi r3, 0x0
    beq lbl_fn_802EC9A8_000011D8
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_802EC9A8_00001BC0
lbl_fn_802EC9A8_000011D8:
    addi r3, r15, 0x1570
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802EC9A8_00001BC0
    addi r3, r15, 0x157c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802EC9A8_00001BC0
    addi r3, r15, 0x1588
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802EC9A8_00001BC0
    addi r3, r15, 0x14d4
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_802EC9A8_00001BC0
    mr r3, r15
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_802EC9A8_00001BC0
    mr r3, r15
    bl fn_802EC38C
    addi r3, r15, 0x14d4
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_802EC9A8_00001B74
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_802EC9A8_00001B74
    lwz r0, 0x10d8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802EC9A8_00001B74
    addi r3, r15, 0x14d4
    bl fn_8047059C
    mr r16, r3
    addi r3, r15, 0x14d4
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r21, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x48(r1)
    mr r14, r3
    addi r3, r1, 0x58
    stw r21, 0x4c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r21, 0x50(r1)
    stw r21, 0x54(r1)
    stw r21, 0x678(r1)
    bl memset
    addi r3, r1, 0x658
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x48(r1)
    mr r4, r14
    mr r5, r16
    addi r3, r1, 0x48
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x48
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x48(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r3, __files@ha
    lis r4, lbl_80748250@ha
    addi r20, r1, 0x34
    addi r17, r1, 0x20
    addi r23, r4, lbl_80748250@l
    addi r14, r3, __files@l
    lis r25, 0xcccd
    lis r22, 0x4000
    lis r24, 0x1555
    lis r26, 0x2aab
    lis r31, 0x1000
lbl_fn_802EC9A8_00001310:
    addi r3, r1, 0x48
    bl fn_8005B3CC
    mr r16, r3
    addi r4, r23, 0x8a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802EC9A8_000015C4
lbl_fn_802EC9A8_0000132C:
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC12C
    lwz r4, lbl_8087F430
    mr r19, r3
    li r5, 0x0
    li r6, 0x0
    lwz r4, 0x10d8(r4)
    lwz r0, 0x78(r4)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802EC9A8_00001384
lbl_fn_802EC9A8_0000135C:
    lwz r7, 0x7c(r4)
    lwzx r0, r7, r6
    cmpw r3, r0
    bne lbl_fn_802EC9A8_00001378
    mulli r0, r5, 0x28
    add r27, r7, r0
    b lbl_fn_802EC9A8_00001388
lbl_fn_802EC9A8_00001378:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_802EC9A8_0000135C
lbl_fn_802EC9A8_00001384:
    li r27, 0x0
lbl_fn_802EC9A8_00001388:
    cmpwi r27, 0x0
    beq lbl_fn_802EC9A8_000015B8
    lwz r4, 0x14ec(r15)
    lwz r3, 0x14f0(r15)
    cmplw r4, r3
    bge lbl_fn_802EC9A8_000013BC
    addi r4, r4, 0x1
    lwz r3, 0x14e8(r15)
    slwi r0, r4, 2
    stw r4, 0x14ec(r15)
    add r3, r3, r0
    stw r27, -0x4(r3)
    b lbl_fn_802EC9A8_000015B8
lbl_fn_802EC9A8_000013BC:
    subi r0, r22, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_802EC9A8_000013E0
    addi r4, r23, 0x97
    addi r3, r14, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802EC9A8_000013E0:
    lwz r3, 0x14ec(r15)
    addi r4, r15, 0x14f0
    lwz r18, 0x14f0(r15)
    subi r0, r22, 0x1
    addi r3, r3, 0x1
    stw r21, 0x34(r1)
    subf r3, r18, r3
    subf r0, r18, r0
    cmplw r3, r0
    stw r21, 0x38(r1)
    stw r21, 0x3c(r1)
    stw r4, 0x40(r1)
    stw r21, 0x44(r1)
    stw r3, 0x14(r1)
    ble lbl_fn_802EC9A8_00001430
    addi r4, r23, 0x97
    addi r3, r14, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802EC9A8_00001430:
    addi r0, r24, 0x5555
    cmplw r18, r0
    bge lbl_fn_802EC9A8_00001478
    addi r4, r18, 0x1
    subi r5, r25, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x14(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x1c
    srwi r4, r4, 2
    stw r4, 0x1c(r1)
    cmplw r4, r0
    bge lbl_fn_802EC9A8_0000146C
    addi r3, r1, 0x14
lbl_fn_802EC9A8_0000146C:
    lwz r0, 0x0(r3)
    add r18, r18, r0
    b lbl_fn_802EC9A8_000014B4
lbl_fn_802EC9A8_00001478:
    subi r0, r26, 0x5556
    cmplw r18, r0
    bge lbl_fn_802EC9A8_000014B0
    addi r3, r18, 0x1
    lwz r0, 0x14(r1)
    srwi r3, r3, 1
    stw r3, 0x18(r1)
    cmplw r3, r0
    addi r3, r1, 0x18
    bge lbl_fn_802EC9A8_000014A4
    addi r3, r1, 0x14
lbl_fn_802EC9A8_000014A4:
    lwz r0, 0x0(r3)
    add r18, r18, r0
    b lbl_fn_802EC9A8_000014B4
lbl_fn_802EC9A8_000014B0:
    subi r18, r22, 0x1
lbl_fn_802EC9A8_000014B4:
    subi r0, r22, 0x1
    cmplw r18, r0
    ble lbl_fn_802EC9A8_000014D4
    addi r4, r23, 0x97
    addi r3, r14, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802EC9A8_000014D4:
    slwi r3, r18, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_802EC9A8_00001500
    lis r4, lbl_80775A88@ha
    addi r3, r14, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802EC9A8_00001500:
    lwz r0, 0x14ec(r15)
    lwz r3, 0x38(r1)
    slwi r6, r0, 2
    stw r18, 0x3c(r1)
    addi r4, r3, 0x1
    slwi r5, r3, 2
    add r3, r28, r6
    stw r4, 0x38(r1)
    stwx r27, r5, r3
    lwz r3, 0x14ec(r15)
    lwz r27, 0x14e8(r15)
    slwi r3, r3, 2
    add r3, r27, r3
    mr r4, r27
    subf r3, r27, r3
    srawi r3, r3, 2
    addze r18, r3
    subf r0, r18, r0
    stw r0, 0x44(r1)
    slwi r29, r18, 2
    slwi r0, r0, 2
    mr r5, r29
    add r3, r28, r0
    bl memcpy
    mr r3, r27
    mr r5, r29
    li r4, 0x0
    bl memset
    lwz r0, 0x38(r1)
    cmpwi r20, 0x0
    lwz r3, 0x14e8(r15)
    add r5, r0, r18
    mr r0, r28
    lwz r6, 0x14f0(r15)
    lwz r4, 0x3c(r1)
    stw r4, 0x14f0(r15)
    stw r6, 0x3c(r1)
    stw r0, 0x14e8(r15)
    stw r3, 0x34(r1)
    stw r5, 0x14ec(r15)
    stw r21, 0x38(r1)
    beq lbl_fn_802EC9A8_000015B8
    cmpwi r3, 0x0
    beq lbl_fn_802EC9A8_000015B8
    stw r21, 0x38(r1)
    bl dtor_80084684
lbl_fn_802EC9A8_000015B8:
    cmpwi r19, 0x0
    bne lbl_fn_802EC9A8_0000132C
    b lbl_fn_802EC9A8_0000188C
lbl_fn_802EC9A8_000015C4:
    mr r3, r16
    addi r4, r23, 0xab
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802EC9A8_0000188C
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r27, r3
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r28, r3
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r29, r3
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC12C
    lwz r5, 0x14e0(r15)
    mr r30, r3
    lwz r4, 0x14e4(r15)
    cmplw r5, r4
    bge lbl_fn_802EC9A8_00001650
    addi r5, r5, 0x1
    lwz r4, 0x14dc(r15)
    subi r0, r5, 0x1
    stw r5, 0x14e0(r15)
    slwi r0, r0, 4
    stwux r27, r4, r0
    stw r28, 0x4(r4)
    stw r29, 0x8(r4)
    stw r3, 0xc(r4)
    b lbl_fn_802EC9A8_0000188C
lbl_fn_802EC9A8_00001650:
    subi r0, r31, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_802EC9A8_00001674
    addi r4, r23, 0x97
    addi r3, r14, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802EC9A8_00001674:
    lwz r3, 0x14e0(r15)
    addi r4, r15, 0x14e4
    lwz r18, 0x14e4(r15)
    subi r0, r31, 0x1
    addi r3, r3, 0x1
    stw r21, 0x20(r1)
    subf r3, r18, r3
    subf r0, r18, r0
    cmplw r3, r0
    stw r21, 0x24(r1)
    stw r21, 0x28(r1)
    stw r4, 0x2c(r1)
    stw r21, 0x30(r1)
    stw r3, 0x10(r1)
    ble lbl_fn_802EC9A8_000016C4
    addi r4, r23, 0x97
    addi r3, r14, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802EC9A8_000016C4:
    lis r3, 0x555
    addi r0, r3, 0x5555
    cmplw r18, r0
    bge lbl_fn_802EC9A8_00001710
    addi r4, r18, 0x1
    subi r5, r25, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x10(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_802EC9A8_00001704
    addi r3, r1, 0x10
lbl_fn_802EC9A8_00001704:
    lwz r0, 0x0(r3)
    add r19, r18, r0
    b lbl_fn_802EC9A8_00001750
lbl_fn_802EC9A8_00001710:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r18, r0
    bge lbl_fn_802EC9A8_0000174C
    addi r3, r18, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_802EC9A8_00001740
    addi r3, r1, 0x10
lbl_fn_802EC9A8_00001740:
    lwz r0, 0x0(r3)
    add r19, r18, r0
    b lbl_fn_802EC9A8_00001750
lbl_fn_802EC9A8_0000174C:
    subi r19, r31, 0x1
lbl_fn_802EC9A8_00001750:
    subi r0, r31, 0x1
    cmplw r19, r0
    ble lbl_fn_802EC9A8_00001770
    addi r4, r23, 0x97
    addi r3, r14, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802EC9A8_00001770:
    slwi r3, r19, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r18, r3
    bne lbl_fn_802EC9A8_0000179C
    lis r4, lbl_80787548@ha
    addi r3, r14, 0xa0
    addi r4, r4, lbl_80787548@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802EC9A8_0000179C:
    lwz r5, 0x14e0(r15)
    lwz r4, 0x24(r1)
    slwi r0, r5, 4
    stw r18, 0x20(r1)
    add r3, r18, r0
    slwi r0, r4, 4
    addi r4, r4, 0x1
    stwx r27, r3, r0
    add r6, r0, r3
    stw r28, 0x4(r6)
    stw r29, 0x8(r6)
    stw r30, 0xc(r6)
    lwz r0, 0x14e0(r15)
    lwz r7, 0x14dc(r15)
    slwi r0, r0, 4
    stw r19, 0x28(r1)
    add r6, r7, r0
    addi r0, r6, 0xf
    stw r5, 0x30(r1)
    subf r0, r7, r0
    srwi r0, r0, 4
    stw r4, 0x24(r1)
    mtctr r0
    cmplw r6, r7
    ble lbl_fn_802EC9A8_00001848
lbl_fn_802EC9A8_00001800:
    subic. r3, r3, 0x10
    subi r6, r6, 0x10
    beq lbl_fn_802EC9A8_0000182C
    lwz r0, 0x4(r6)
    lwz r4, 0x0(r6)
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, 0xc(r6)
    lwz r4, 0x8(r6)
    stw r4, 0x8(r3)
    stw r0, 0xc(r3)
lbl_fn_802EC9A8_0000182C:
    lwz r5, 0x30(r1)
    lwz r4, 0x24(r1)
    subi r0, r5, 0x1
    stw r0, 0x30(r1)
    addi r0, r4, 0x1
    stw r0, 0x24(r1)
    bdnz lbl_fn_802EC9A8_00001800
lbl_fn_802EC9A8_00001848:
    lwz r0, 0x24(r1)
    cmpwi r17, 0x0
    lwz r6, 0x14e4(r15)
    lwz r5, 0x28(r1)
    lwz r3, 0x14dc(r15)
    lwz r4, 0x20(r1)
    stw r5, 0x14e4(r15)
    stw r6, 0x28(r1)
    stw r4, 0x14dc(r15)
    stw r3, 0x20(r1)
    stw r0, 0x14e0(r15)
    stw r21, 0x24(r1)
    beq lbl_fn_802EC9A8_0000188C
    cmpwi r3, 0x0
    beq lbl_fn_802EC9A8_0000188C
    stw r21, 0x24(r1)
    bl dtor_80084684
lbl_fn_802EC9A8_0000188C:
    mr r3, r16
    addi r4, r23, 0xb6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802EC9A8_000018D4
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x15e4(r15)
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x15e8(r15)
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x15ec(r15)
    b lbl_fn_802EC9A8_00001B64
lbl_fn_802EC9A8_000018D4:
    mr r3, r16
    addi r4, r23, 0xc2
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802EC9A8_00001928
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80683B54
    frsp f0, f1
    addi r3, r1, 0x48
    stfs f0, 0x15d8(r15)
    bl fn_8005B3CC
    bl fn_80683B54
    frsp f0, f1
    addi r3, r1, 0x48
    stfs f0, 0x15dc(r15)
    bl fn_8005B3CC
    bl fn_80683B54
    frsp f0, f1
    stfs f0, 0x15e0(r15)
    b lbl_fn_802EC9A8_00001B64
lbl_fn_802EC9A8_00001928:
    mr r3, r16
    addi r4, r23, 0xcf
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802EC9A8_00001954
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80683B54
    frsp f0, f1
    stfs f0, 0x15f8(r15)
    b lbl_fn_802EC9A8_00001B64
lbl_fn_802EC9A8_00001954:
    mr r3, r16
    addi r4, r23, 0xde
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802EC9A8_0000197C
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x15fc(r15)
    b lbl_fn_802EC9A8_00001B64
lbl_fn_802EC9A8_0000197C:
    mr r3, r16
    addi r4, r23, 0xec
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802EC9A8_000019A4
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1600(r15)
    b lbl_fn_802EC9A8_00001B64
lbl_fn_802EC9A8_000019A4:
    mr r3, r16
    addi r4, r23, 0xfa
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802EC9A8_000019D0
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80683B54
    frsp f0, f1
    stfs f0, 0x15f0(r15)
    b lbl_fn_802EC9A8_00001B64
lbl_fn_802EC9A8_000019D0:
    mr r3, r16
    addi r4, r23, 0x106
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802EC9A8_000019FC
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80683B54
    frsp f0, f1
    stfs f0, 0x15f4(r15)
    b lbl_fn_802EC9A8_00001B64
lbl_fn_802EC9A8_000019FC:
    mr r3, r16
    addi r4, r23, 0x112
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802EC9A8_00001A24
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x15a8(r15)
    b lbl_fn_802EC9A8_00001B64
lbl_fn_802EC9A8_00001A24:
    mr r3, r16
    addi r4, r23, 0x123
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802EC9A8_00001A4C
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x15ac(r15)
    b lbl_fn_802EC9A8_00001B64
lbl_fn_802EC9A8_00001A4C:
    mr r3, r16
    addi r4, r23, 0x135
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802EC9A8_00001A74
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1604(r15)
    b lbl_fn_802EC9A8_00001B64
lbl_fn_802EC9A8_00001A74:
    mr r3, r16
    addi r4, r23, 0x148
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802EC9A8_00001A9C
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x15b8(r15)
    b lbl_fn_802EC9A8_00001B64
lbl_fn_802EC9A8_00001A9C:
    mr r3, r16
    addi r4, r23, 0x152
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802EC9A8_00001AE0
    mr r16, r15
    li r18, 0x0
lbl_fn_802EC9A8_00001AB8:
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    addi r18, r18, 0x1
    stw r3, 0x1608(r16)
    cmpwi r18, 0x3
    addi r16, r16, 0x4
    blt lbl_fn_802EC9A8_00001AB8
    b lbl_fn_802EC9A8_00001B64
lbl_fn_802EC9A8_00001AE0:
    mr r3, r16
    addi r4, r23, 0x15f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802EC9A8_00001B24
    mr r16, r15
    li r18, 0x0
lbl_fn_802EC9A8_00001AFC:
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    addi r18, r18, 0x1
    stw r3, 0x1614(r16)
    cmpwi r18, 0x3
    addi r16, r16, 0x4
    blt lbl_fn_802EC9A8_00001AFC
    b lbl_fn_802EC9A8_00001B64
lbl_fn_802EC9A8_00001B24:
    mr r3, r16
    addi r4, r23, 0x16d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802EC9A8_00001B64
    mr r16, r15
    li r18, 0x0
lbl_fn_802EC9A8_00001B40:
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    addi r18, r18, 0x1
    stw r3, 0x1620(r16)
    cmpwi r18, 0x3
    addi r16, r16, 0x4
    blt lbl_fn_802EC9A8_00001B40
lbl_fn_802EC9A8_00001B64:
    addi r3, r1, 0x48
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802EC9A8_00001310
lbl_fn_802EC9A8_00001B74:
    lwz r0, 0x7ec(r15)
    lwz r3, 0x1438(r15)
    ori r0, r0, 0x1c0
    oris r0, r0, 0x1
    cmpwi r3, 0x0
    ori r0, r0, 0xc011
    oris r0, r0, 0x300
    stw r0, 0x7ec(r15)
    beq lbl_fn_802EC9A8_00001BB0
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r15)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_802EC9A8_00001BB0:
    lfs f0, lbl_80884810
    li r3, 0x1
    stfs f0, 0x15d4(r15)
    b lbl_fn_802EC9A8_00001BC4
lbl_fn_802EC9A8_00001BC0:
    li r3, 0x0
lbl_fn_802EC9A8_00001BC4:
    addi r11, r1, 0x6d0
    bl _restgpr_14
    lwz r0, 0x6d4(r1)
    mtlr r0
    addi r1, r1, 0x6d0
    blr
}
