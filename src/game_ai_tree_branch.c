#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_17(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_17(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8004ED34(void);
extern void fn_80056DB8(void);
extern void fn_80056E40(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AFF8(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800897D8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800DD3FC(void);
extern void fn_800EE360(void);
extern void fn_800F8548(void);
extern void fn_80102EAC(void);
extern void fn_80103F60(void);
extern void fn_80108378(void);
extern void fn_80109828(void);
extern void fn_8013655C(void);
extern void fn_80145334(void);
extern void fn_8014C540(void);
extern void fn_801513D0(void);
extern void fn_8015E4B0(void);
extern void fn_8016E970(void);
extern void fn_801765D8(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_8025B9EC(void);
extern void fn_8025BD1C(void);
extern void fn_8025BF58(void);
extern void fn_8025C29C(void);
extern void fn_8025C460(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_8059C6E0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9920(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_80686EA4(void);
extern void fn_8068B100(void);
extern void fn_80695AD0(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80743D00[];
extern u8 lbl_80743F50[];
extern u8 lbl_80743F78[];
extern u8 lbl_80766768[];
extern u8 lbl_80775A88[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80777668[];
extern u8 lbl_807847D0[];
extern u8 lbl_807847E0[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C8328[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9E8;
extern u32 lbl_808813D0;
extern u32 lbl_808833E0;
extern u32 lbl_808833F4;
extern u32 lbl_80883424;
extern u32 lbl_80883428;
extern u32 lbl_80883434;
extern u32 lbl_80883440;
extern u32 lbl_80883474;
extern u32 lbl_8088348C;
extern u32 lbl_80883490;
extern u32 lbl_80883494;
extern u32 lbl_80883498;
extern u32 lbl_808834A0;
extern u32 lbl_808834A4;
extern u32 lbl_808834A8;
extern u32 lbl_808834AC;
extern u32 lbl_808834B0;
extern u32 lbl_808834B4;
extern u32 lbl_808834B8;
extern u32 lbl_808834BC;
extern u32 lbl_808834C0;
extern u32 lbl_808834C4;
extern u32 lbl_808834C8;

/* Function declarations */
void fn_8025941C(void);
void fn_80259604(void);
void fn_802598DC(void);
void fn_80259AB4(void);
void fn_8025A03C(void);
void fn_8025A060(void);
void fn_8025A4A4(void);
void fn_8025A67C(void);
void fn_8025ACA0(void);

asm void fn_8025941C(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    li r31, 0x0
    stw r30, 0xa8(r1)
    mr r30, r3
    stw r31, 0x14c8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0xd
    mr r3, r30
    li r4, 0x3
    stw r31, 0x14d0(r30)
    stw r31, 0x1660(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f0, lbl_808833F4
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_808833E0
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x1ea
    lfs f2, lbl_80883440
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r0, 0x1680(r30)
    addi r4, r30, 0x1684
    li r3, 0x0
    cmpwi r0, 0x4
    bge lbl_fn_8025941C_000000A0
    mulli r0, r0, 0x34
    add r3, r30, r0
    lwz r3, 0x151c(r3)
lbl_fn_8025941C_000000A0:
    cmpwi r3, 0x0
    beq lbl_fn_8025941C_000000C0
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x8(r4)
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, 0x14(r3)
    stfs f0, 0x1690(r30)
lbl_fn_8025941C_000000C0:
    li r0, 0x0
    stw r0, 0x84(r1)
    lfs f6, lbl_808833E0
    addi r5, r30, 0x1684
    lfs f5, lbl_80883474
    addi r4, r1, 0x50
    stw r0, 0x88(r1)
    addi r6, r1, 0x44
    addi r8, r30, 0x5b8
    lis r7, 0x8000
    stw r0, 0x8c(r1)
    li r9, 0x0
    stw r0, 0x90(r1)
    lfs f4, 0x168c(r30)
    lfs f3, 0x1688(r30)
    lfs f0, 0x1684(r30)
    fadds f4, f6, f4
    psq_l f1, 0x0(r5), 0, 0
    fadds f3, f5, f3
    lfs f2, 0x168c(r30)
    fadds f0, f6, f0
    psq_st f1, 0x528(r30), 0, 0
    stfs f2, 0x530(r30)
    stfs f6, 0x38(r1)
    lwz r3, lbl_8087EE98
    stfs f5, 0x3c(r1)
    stfs f6, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f4, 0x4c(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8025941C_00000158
    addi r3, r1, 0x60
    lfs f2, 0x68(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r30), 0, 0
    stfs f2, 0x530(r30)
lbl_fn_8025941C_00000158:
    lfs f0, 0x1690(r30)
    mr r3, r30
    stfs f0, 0x538(r30)
    li r4, 0x65
    bl fn_80232B7C
    lfs f0, lbl_808833E0
    li r3, -0x1
    lfs f1, lbl_808833F4
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r30, 0x15f8
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
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_80259604(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xc
    beq lbl_fn_80259604_00000224
    cmpwi r0, 0xd
    beq lbl_fn_80259604_00000224
    cmpwi r0, 0x9
    bne lbl_fn_80259604_00000278
lbl_fn_80259604_00000224:
    lfs f2, 0x10(r4)
    li r3, 0x3
    lfs f3, lbl_808833E0
    li r5, 0x0
    lfs f1, 0x14(r4)
    li r0, 0x2
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    stw r3, 0x64(r4)
    fmuls f0, f0, f3
    lwz r3, 0x8(r4)
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
    stw r5, 0x90(r4)
    stw r0, 0x84(r4)
    lwz r0, 0xc4(r3)
    stw r0, 0x88(r4)
    stw r5, 0x68(r4)
    b lbl_fn_80259604_000004A4
lbl_fn_80259604_00000278:
    lwz r0, 0x40(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80259604_00000344
    lwz r6, 0x1680(r3)
    mulli r0, r6, 0x34
    add r5, r3, r0
    lwz r0, 0x1520(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80259604_000004A4
    lwz r0, 0x44(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80259604_000002D8
    lwz r3, 0x0(r4)
    li r4, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x7c(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    li r3, 0x4
    stw r3, 0x64(r31)
    stw r0, 0x90(r31)
    stw r0, 0x68(r31)
    b lbl_fn_80259604_000004A4
lbl_fn_80259604_000002D8:
    cmpwi r0, 0x2
    bne lbl_fn_80259604_000004A4
    lwz r0, 0x1524(r5)
    lwz r4, 0x8(r4)
    slwi r0, r0, 2
    lfs f0, lbl_80883424
    add r4, r4, r0
    lfs f1, 0x74(r4)
    fcmpo cr0, f1, f0
    ble lbl_fn_80259604_000004A4
    mr r4, r6
    li r5, 0x2
    bl fn_80259AB4
    li r3, 0x1
    li r0, 0x0
    stw r3, 0x15f4(r30)
    li r4, 0xc8
    stw r0, 0x15ec(r30)
    lwz r3, lbl_8087F430
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_80259604_000004A4
    lwz r3, lbl_8087F430
    li r4, 0xc8
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_80259604_000004A4
lbl_fn_80259604_00000344:
    bl fn_801513D0
    lwz r5, 0x14c8(r30)
    lis r3, 0x4330
    lis r4, lbl_80743D00@ha
    lwz r0, 0x940(r30)
    addi r5, r5, 0x1e
    stw r5, 0x14c8(r30)
    xoris r0, r0, 0x8000
    lwz r6, 0x14f0(r30)
    lwz r5, 0x68(r31)
    stw r3, 0x8(r1)
    add r5, r6, r5
    lfd f3, lbl_80743D00@l(r4)
    xoris r4, r5, 0x8000
    stw r4, 0xc(r1)
    lfs f0, lbl_80883440
    lfd f1, 0x8(r1)
    stw r0, 0x14(r1)
    fsubs f2, f1, f3
    stw r3, 0x10(r1)
    lfd f1, 0x10(r1)
    stw r5, 0x14f0(r30)
    fsubs f1, f1, f3
    fdivs f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80259604_000003BC
    li r3, 0x1
    li r0, 0x0
    stw r3, 0x14f8(r30)
    stw r0, 0x14f0(r30)
lbl_fn_80259604_000003BC:
    lwz r4, 0x940(r30)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lis r3, lbl_80743D00@ha
    xoris r0, r4, 0x8000
    lfd f2, lbl_80743D00@l(r3)
    stw r0, 0x14(r1)
    lfs f3, 0x7d8(r30)
    lfd f1, 0x10(r1)
    lfs f0, lbl_80883440
    fsubs f1, f1, f2
    fdivs f1, f3, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80259604_00000424
    lwz r3, lbl_8087F430
    li r4, 0xd2
    li r5, 0x1
    bl fn_80370AE4
    li r29, 0x0
lbl_fn_80259604_00000408:
    mr r3, r30
    mr r4, r29
    li r5, 0x2
    bl fn_80259AB4
    addi r29, r29, 0x1
    cmplwi r29, 0x4
    blt lbl_fn_80259604_00000408
lbl_fn_80259604_00000424:
    lwz r0, 0x68(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80259604_00000448
    lwz r3, lbl_8087F048
    li r6, 0x64
    lwz r4, 0x16a0(r30)
    li r7, -0x1
    lwz r5, 0x0(r31)
    bl fn_80102EAC
lbl_fn_80259604_00000448:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_80259604_000004A4
    lwz r0, 0x560(r30)
    cmpwi r0, 0x16
    beq lbl_fn_80259604_00000484
    cmpwi r0, 0x17
    beq lbl_fn_80259604_00000474
    cmpwi r0, 0x14
    beq lbl_fn_80259604_00000484
    b lbl_fn_80259604_000004A4
lbl_fn_80259604_00000474:
    mr r3, r30
    addi r4, r30, 0x6b8
    li r5, -0x1
    bl fn_8015E4B0
lbl_fn_80259604_00000484:
    li r31, 0x0
    stw r31, 0x58c(r30)
    stw r31, 0x14c8(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    stw r31, 0x14d0(r30)
    stw r31, 0x1660(r30)
lbl_fn_80259604_000004A4:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802598DC(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lis r5, lbl_807C7030@ha
    stw r0, 0x84(r1)
    addi r5, r5, lbl_807C7030@l
    addi r4, r1, 0x14
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    stfd f29, 0x50(r1)
    psq_st f29, 0x58(r1), 0, 0
    stfd f28, 0x40(r1)
    psq_st f28, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    lwz r6, lbl_8087F8A0
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    psq_st f1, 0x0(r4), 0, 0
    lwz r3, 0x48(r6)
    stfs f2, 0x1c(r1)
    b lbl_fn_802598DC_0000055C
lbl_fn_802598DC_00000528:
    lfs f3, 0x14(r1)
    lfs f0, 0x528(r3)
    lfs f5, 0x18(r1)
    fadds f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x530(r3)
    lfs f3, 0x1c(r1)
    fadds f4, f5, f4
    stfs f6, 0x14(r1)
    fadds f0, f3, f0
    lwz r3, 0x14ac(r3)
    stfs f4, 0x18(r1)
    stfs f0, 0x1c(r1)
lbl_fn_802598DC_0000055C:
    cmpwi r3, 0x0
    bne lbl_fn_802598DC_00000528
    lwz r4, lbl_8087F8A0
    lis r0, 0x4330
    stw r0, 0x20(r1)
    lis r3, lbl_80743D00@ha
    lwz r0, 0x4c(r4)
    li r29, -0x1
    lfd f3, lbl_80743D00@l(r3)
    li r28, 0x0
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lfs f5, lbl_808833F4
    li r30, 0x0
    lfd f0, 0x20(r1)
    lfs f4, 0x14(r1)
    fsubs f6, f0, f3
    lfs f3, 0x18(r1)
    lfs f0, 0x1c(r1)
    lfs f31, lbl_8088348C
    fdivs f5, f5, f6
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x14(r1)
    frsp f30, f4
    frsp f29, f3
    stfs f3, 0x18(r1)
    frsp f28, f0
    stfs f0, 0x1c(r1)
    b lbl_fn_802598DC_0000062C
lbl_fn_802598DC_000005D8:
    lwz r0, 0x14c4(r31)
    add r3, r0, r30
    lfsx f0, r30, r0
    lfs f3, 0x8(r3)
    fsubs f5, f30, f0
    fsubs f4, f28, f3
    lfs f3, 0x4(r3)
    stfs f5, 0x8(r1)
    fsubs f3, f29, f3
    fmuls f0, f4, f4
    stfs f4, 0x10(r1)
    stfs f3, 0xc(r1)
    fmadds f1, f5, f5, f0
    bl fn_8068B100
    frsp f0, f1
    fcmpo cr0, f31, f0
    ble lbl_fn_802598DC_00000624
    fmr f31, f0
    mr r29, r28
lbl_fn_802598DC_00000624:
    addi r28, r28, 0x1
    addi r30, r30, 0xc
lbl_fn_802598DC_0000062C:
    lwz r0, 0x14bc(r31)
    cmplw r28, r0
    blt lbl_fn_802598DC_000005D8
    mulli r0, r29, 0xc
    lwz r3, 0x14c4(r31)
    addi r4, r31, 0x1694
    add r3, r3, r0
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x169c(r31)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    psq_l f29, 0x58(r1), 0, 0
    lfd f29, 0x50(r1)
    psq_l f28, 0x48(r1), 0, 0
    lfd f28, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80259AB4(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xf0
    bl _savegpr_26
    mulli r0, r4, 0x34
    mr r29, r3
    mr r26, r5
    lfs f4, lbl_80883428
    addi r31, r1, 0x64
    lfs f3, lbl_808833E0
    add r3, r3, r0
    lis r27, lbl_807C8328@ha
    addi r30, r3, 0x1520
    li r4, 0x79
    lwz r28, 0x0(r30)
    addi r3, r1, 0xa0
    stw r5, 0x0(r30)
    lwz r5, 0x2c(r30)
    lfs f0, lbl_807C8328@l(r27)
    lfs f2, 0xc(r5)
    psq_l f1, 0x4(r5), 0, 0
    fneg f5, f0
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, 0x68(r1)
    stfs f2, 0x6c(r1)
    fadds f0, f0, f4
    stfs f0, 0x68(r1)
    lfs f1, 0x14(r5)
    stfs f1, 0x5c(r1)
    stfs f3, 0x58(r1)
    stfs f3, 0x60(r1)
    stfs f5, 0x4c(r1)
    stfs f3, 0x50(r1)
    stfs f5, 0x54(r1)
    bl fn_805F8E70
    addi r4, r1, 0x4c
    addi r3, r1, 0xa0
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x6c(r1)
    addi r3, r1, 0x70
    lfs f0, 0x54(r1)
    li r4, 0x79
    lfs f5, 0x68(r1)
    fadds f6, f3, f0
    lfs f4, 0x50(r1)
    lfs f3, 0x64(r1)
    lfs f0, 0x4c(r1)
    fadds f4, f5, f4
    stfs f6, 0x48(r1)
    fadds f3, f3, f0
    lfs f0, lbl_807C8328@l(r27)
    stfs f4, 0x44(r1)
    lfs f4, lbl_80883434
    fneg f6, f0
    stfs f3, 0x40(r1)
    lfs f3, lbl_808833E0
    lwz r5, 0x2c(r30)
    lfs f1, 0x5c(r1)
    lfs f5, 0x14(r5)
    fsubs f4, f5, f4
    stfs f3, 0x34(r1)
    stfs f4, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f0, 0x28(r1)
    stfs f3, 0x2c(r1)
    stfs f6, 0x30(r1)
    bl fn_805F8E70
    addi r4, r1, 0x28
    addi r3, r1, 0x70
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x6c(r1)
    mr r4, r30
    lfs f0, 0x30(r1)
    li r5, 0x0
    lfs f5, 0x68(r1)
    li r6, 0x1
    fadds f6, f3, f0
    lfs f4, 0x2c(r1)
    lfs f3, 0x64(r1)
    fadds f5, f5, f4
    lfs f0, 0x28(r1)
    stfs f6, 0x24(r1)
    fadds f3, f3, f0
    lfs f4, lbl_80883434
    stfs f5, 0x20(r1)
    lfs f0, lbl_808833E0
    stfs f3, 0x1c(r1)
    lwz r3, lbl_8087F3C0
    lwz r7, 0x2c(r30)
    lfs f3, 0x14(r7)
    fadds f3, f4, f3
    stfs f0, 0x10(r1)
    stfs f3, 0x14(r1)
    stfs f0, 0x18(r1)
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x0
    bl fn_80232B7C
    cmpwi r26, 0x0
    beq lbl_fn_80259AB4_00000848
    cmpwi r26, 0x1
    beq lbl_fn_80259AB4_00000A8C
    cmpwi r26, 0x2
    beq lbl_fn_80259AB4_00000B4C
    b lbl_fn_80259AB4_00000C08
lbl_fn_80259AB4_00000848:
    cmpwi r28, 0x1
    bne lbl_fn_80259AB4_00000910
    li r28, -0x1
    stw r28, 0x8(r1)
    li r27, 0x1
    lfs f1, lbl_80883490
    stw r27, 0xc(r1)
    mr r7, r31
    addi r4, r29, 0x1640
    addi r8, r1, 0x58
    lwz r0, 0x4(r30)
    li r5, 0x0
    lwz r3, lbl_8087F3C0
    li r6, 0x0
    slwi r0, r0, 4
    li r10, -0x1
    add r9, r29, r0
    addi r9, r9, 0x16c0
    bl fn_8023A8B4
    stw r28, 0x8(r1)
    addi r4, r29, 0x1640
    lfs f1, lbl_80883490
    addi r7, r1, 0x40
    stw r27, 0xc(r1)
    addi r8, r1, 0x34
    li r5, 0x0
    li r6, 0x0
    lwz r0, 0x4(r30)
    li r10, -0x1
    lwz r3, lbl_8087F3C0
    slwi r0, r0, 4
    add r9, r29, r0
    addi r9, r9, 0x16c0
    bl fn_8023A8B4
    stw r28, 0x8(r1)
    addi r4, r29, 0x1640
    lfs f1, lbl_80883490
    addi r7, r1, 0x1c
    stw r27, 0xc(r1)
    addi r8, r1, 0x10
    li r5, 0x0
    li r6, 0x0
    lwz r0, 0x4(r30)
    li r10, -0x1
    lwz r3, lbl_8087F3C0
    slwi r0, r0, 4
    add r9, r29, r0
    addi r9, r9, 0x16c0
    bl fn_8023A8B4
    b lbl_fn_80259AB4_00000A08
lbl_fn_80259AB4_00000910:
    lwz r0, 0x4(r30)
    li r28, -0x1
    lwz r3, lbl_8087F3C0
    li r27, 0x1
    slwi r0, r0, 4
    lfs f1, lbl_80883490
    stw r28, 0x8(r1)
    add r5, r29, r0
    addi r9, r5, 0x16c0
    mr r7, r31
    stw r27, 0xc(r1)
    addi r4, r29, 0x161c
    addi r8, r1, 0x58
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
    lwz r0, 0x4(r30)
    addi r7, r1, 0x40
    lwz r3, lbl_8087F3C0
    addi r8, r1, 0x34
    slwi r0, r0, 4
    lfs f1, lbl_80883490
    stw r28, 0x8(r1)
    add r4, r29, r0
    addi r9, r4, 0x16c0
    li r5, 0x0
    stw r27, 0xc(r1)
    addi r4, r29, 0x161c
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
    lwz r0, 0x4(r30)
    addi r7, r1, 0x1c
    lwz r3, lbl_8087F3C0
    addi r8, r1, 0x10
    slwi r0, r0, 4
    lfs f1, lbl_80883490
    stw r28, 0x8(r1)
    add r4, r29, r0
    addi r9, r4, 0x16c0
    li r5, 0x0
    stw r27, 0xc(r1)
    addi r4, r29, 0x161c
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
    lwz r4, lbl_8087F430
    lfs f0, lbl_808833E0
    lbz r0, 0x97c(r4)
    addi r3, r4, 0x988
    stb r0, 0x97d(r4)
    stb r27, 0x97c(r4)
    lfs f2, 0x6c(r1)
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x990(r4)
    stfs f0, 0x9a0(r4)
    b lbl_fn_80259AB4_00000A00
    b lbl_fn_80259AB4_00000A04
lbl_fn_80259AB4_00000A00:
    li r0, 0x0
lbl_fn_80259AB4_00000A04:
    stw r0, 0x980(r4)
lbl_fn_80259AB4_00000A08:
    lwz r3, lbl_8087F430
    li r4, 0xca
    li r5, 0x1
    bl fn_80370AE4
    lwz r0, 0x4(r30)
    cmpwi r0, 0x3
    bne lbl_fn_80259AB4_00000A38
    lwz r3, lbl_8087F430
    li r4, 0xcb
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_80259AB4_00000C08
lbl_fn_80259AB4_00000A38:
    cmpwi r0, 0x0
    bne lbl_fn_80259AB4_00000A54
    lwz r3, lbl_8087F430
    li r4, 0xcb
    li r5, 0x2
    bl fn_80370AE4
    b lbl_fn_80259AB4_00000C08
lbl_fn_80259AB4_00000A54:
    cmpwi r0, 0x1
    bne lbl_fn_80259AB4_00000A70
    lwz r3, lbl_8087F430
    li r4, 0xcb
    li r5, 0x3
    bl fn_80370AE4
    b lbl_fn_80259AB4_00000C08
lbl_fn_80259AB4_00000A70:
    cmpwi r0, 0x4
    bne lbl_fn_80259AB4_00000C08
    lwz r3, lbl_8087F430
    li r4, 0xcb
    li r5, 0x4
    bl fn_80370AE4
    b lbl_fn_80259AB4_00000C08
lbl_fn_80259AB4_00000A8C:
    li r28, -0x1
    stw r28, 0x8(r1)
    li r27, 0x1
    lfs f1, lbl_80883490
    stw r27, 0xc(r1)
    mr r7, r31
    addi r4, r29, 0x1628
    addi r8, r1, 0x58
    lwz r0, 0x4(r30)
    li r5, 0x0
    lwz r3, lbl_8087F3C0
    li r6, 0x0
    slwi r0, r0, 4
    li r10, -0x1
    add r9, r29, r0
    addi r9, r9, 0x16c0
    bl fn_8023A8B4
    stw r28, 0x8(r1)
    addi r4, r29, 0x1628
    lfs f1, lbl_80883490
    addi r7, r1, 0x40
    stw r27, 0xc(r1)
    addi r8, r1, 0x34
    li r5, 0x0
    li r6, 0x0
    lwz r0, 0x4(r30)
    li r10, -0x1
    lwz r3, lbl_8087F3C0
    slwi r0, r0, 4
    add r9, r29, r0
    addi r9, r9, 0x16c0
    bl fn_8023A8B4
    stw r28, 0x8(r1)
    addi r4, r29, 0x1628
    lfs f1, lbl_80883490
    addi r7, r1, 0x1c
    stw r27, 0xc(r1)
    addi r8, r1, 0x10
    li r5, 0x0
    li r6, 0x0
    lwz r0, 0x4(r30)
    li r10, -0x1
    lwz r3, lbl_8087F3C0
    slwi r0, r0, 4
    add r9, r29, r0
    addi r9, r9, 0x16c0
    bl fn_8023A8B4
    b lbl_fn_80259AB4_00000C08
lbl_fn_80259AB4_00000B4C:
    li r27, -0x1
    stw r27, 0x8(r1)
    li r28, 0x1
    lfs f1, lbl_80883490
    stw r28, 0xc(r1)
    mr r7, r31
    addi r4, r29, 0x1634
    addi r8, r1, 0x58
    lwz r0, 0x4(r30)
    li r5, 0x0
    lwz r3, lbl_8087F3C0
    li r6, 0x0
    slwi r0, r0, 4
    li r10, -0x1
    add r9, r29, r0
    addi r9, r9, 0x16c0
    bl fn_8023A8B4
    stw r27, 0x8(r1)
    addi r4, r29, 0x1634
    lfs f1, lbl_80883490
    addi r7, r1, 0x40
    stw r28, 0xc(r1)
    addi r8, r1, 0x34
    li r5, 0x0
    li r6, 0x0
    lwz r0, 0x4(r30)
    li r10, -0x1
    lwz r3, lbl_8087F3C0
    slwi r0, r0, 4
    add r9, r29, r0
    addi r9, r9, 0x16c0
    bl fn_8023A8B4
    stw r27, 0x8(r1)
    addi r4, r29, 0x1634
    lfs f1, lbl_80883490
    addi r7, r1, 0x1c
    stw r28, 0xc(r1)
    addi r8, r1, 0x10
    li r5, 0x0
    li r6, 0x0
    lwz r0, 0x4(r30)
    li r10, -0x1
    lwz r3, lbl_8087F3C0
    slwi r0, r0, 4
    add r9, r29, r0
    addi r9, r9, 0x16c0
    bl fn_8023A8B4
lbl_fn_80259AB4_00000C08:
    addi r11, r1, 0xf0
    bl _restgpr_26
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_8025A03C(void)
{
    nofralloc
    lis r4, lbl_807C8328@ha
    lfs f2, lbl_80883494
    addi r3, r4, lbl_807C8328@l
    lfs f1, lbl_80883498
    lfs f0, lbl_808833F4
    stfs f2, lbl_807C8328@l(r4)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    blr
}

asm void fn_8025A060(void)
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
    lis r3, lbl_807847E0@ha
    addi r28, r30, 0x14b0
    addi r3, r3, lbl_807847E0@l
    stw r3, 0x0(r30)
    mr r3, r28
    bl fn_80473E74
    lis r3, lbl_8078FBB0@ha
    li r29, 0x0
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x0(r28)
    addi r3, r30, 0x1518
    stw r29, 0x14c0(r30)
    stw r29, 0x14c4(r30)
    stw r29, 0x14c8(r30)
    stw r29, 0x14cc(r30)
    stw r29, 0x14d0(r30)
    stw r29, 0x14d4(r30)
    stw r29, 0x14d8(r30)
    stw r29, 0x14dc(r30)
    stw r29, 0x14e0(r30)
    stw r29, 0x1504(r30)
    bl fn_802377B8
    addi r3, r30, 0x1524
    bl fn_802377B8
    addi r3, r30, 0x1530
    bl fn_802377B8
    addi r3, r30, 0x153c
    bl fn_802377B8
    addi r3, r30, 0x1548
    bl fn_802377B8
    stw r29, 0x1554(r30)
    addi r3, r30, 0x155c
    bl fn_802377B8
    addi r3, r30, 0x1568
    bl fn_802377B8
    addi r3, r30, 0x1574
    bl fn_802377B8
    addi r28, r30, 0x1580
    li r4, 0x0
    mr r3, r28
    bl fn_80056DB8
    lwz r4, 0x12a4(r30)
    li r5, 0x1
    lwz r0, 0x14c4(r30)
    lis r6, lbl_80777668@ha
    lfs f0, lbl_808834A0
    addi r6, r6, lbl_80777668@l
    oris r4, r4, 0x40
    subf r0, r0, r0
    stw r6, 0x0(r28)
    lis r3, lbl_80743F78@ha
    addi r28, r3, lbl_80743F78@l
    addi r27, r1, 0x38
    stw r5, 0x15cc(r30)
    mr r3, r28
    stw r5, 0x15d0(r30)
    stw r4, 0x12a4(r30)
    stfs f0, 0x14bc(r30)
    stw r0, 0x14c4(r30)
    stw r29, 0x15d4(r30)
    stw r29, 0x15d8(r30)
    stw r29, 0x15dc(r30)
    stw r29, 0x15e0(r30)
    stw r29, 0x15e4(r30)
    stw r29, 0x14b8(r30)
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
lbl_fn_8025A060_00000E7C:
    addi r3, r1, 0x44
    bl fn_8005B3CC
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_8025A060_00000F14
    addi r4, r28, 0x2b
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8025A060_00000F14
    mr r3, r26
    addi r4, r28, 0x2c
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8025A060_00000F04
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8025A060_00000ED0
    lbz r0, 0x2c(r1)
    clrlwi r25, r0, 25
    b lbl_fn_8025A060_00000ED4
lbl_fn_8025A060_00000ED0:
    lwz r25, 0x30(r1)
lbl_fn_8025A060_00000ED4:
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
lbl_fn_8025A060_00000F04:
    addi r3, r1, 0x44
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8025A060_00000E7C
lbl_fn_8025A060_00000F14:
    addi r3, r1, 0x20
    addi r4, r1, 0x38
    addi r5, r1, 0x2c
    bl fn_8006AFF8
    lwz r0, 0x20(r1)
    addi r3, r30, 0x14b0
    srwi. r0, r0, 31
    bne lbl_fn_8025A060_00000F3C
    addi r4, r1, 0x21
    b lbl_fn_8025A060_00000F40
lbl_fn_8025A060_00000F3C:
    lwz r4, 0x28(r1)
lbl_fn_8025A060_00000F40:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r31, lbl_80743F78@ha
    addi r3, r30, 0x1518
    addi r31, r31, lbl_80743F78@l
    addi r4, r31, 0x35
    bl fn_8023780C
    addi r3, r30, 0x1524
    addi r4, r31, 0x42
    bl fn_8023780C
    addi r3, r30, 0x1530
    addi r4, r31, 0x50
    bl fn_8023780C
    addi r3, r30, 0x153c
    addi r4, r31, 0x5e
    bl fn_8023780C
    addi r3, r30, 0x155c
    addi r4, r31, 0x6c
    bl fn_8023780C
    addi r3, r30, 0x1568
    addi r4, r31, 0x7a
    bl fn_8023780C
    addi r3, r30, 0x1574
    addi r4, r31, 0x88
    bl fn_8023780C
    addi r5, r31, 0x2b
    li r3, 0xc
    mr r6, r5
    li r4, 0x1
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8025A060_00000FD0
    bl fn_802377B8
lbl_fn_8025A060_00000FD0:
    lwz r26, 0x121c(r30)
    cmpwi r26, 0x0
    stw r3, 0x121c(r30)
    beq lbl_fn_8025A060_00001000
    mr r3, r26
    bl fn_8023781C
    addic. r3, r26, 0x4
    beq lbl_fn_8025A060_00000FF8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8025A060_00000FF8:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8025A060_00001000:
    lis r4, lbl_80743F78@ha
    lwz r3, 0x121c(r30)
    addi r4, r4, lbl_80743F78@l
    addi r4, r4, 0x96
    bl fn_8023780C
    lwz r0, 0x12a8(r30)
    li r4, 0x5e6
    li r3, 0x5ea
    stw r4, 0x14fc(r30)
    ori r0, r0, 0x820
    stw r3, 0x1500(r30)
    stw r0, 0x12a8(r30)
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8025A060_00001044
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_8025A060_00001044:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8025A060_00001058
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_8025A060_00001058:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8025A060_0000106C
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_8025A060_0000106C:
    addi r11, r1, 0x6a0
    mr r3, r30
    bl _restgpr_25
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}

asm void fn_8025A4A4(void)
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
    beq lbl_fn_8025A4A4_00001240
    addic. r0, r3, 0x15e0
    beq lbl_fn_8025A4A4_000010D4
    lwz r4, 0x15e0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8025A4A4_000010D4
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8025A4A4_000010D4
    bl fn_800897D8
lbl_fn_8025A4A4_000010D4:
    addic. r3, r29, 0x1580
    beq lbl_fn_8025A4A4_000010E4
    li r4, 0x0
    bl fn_80056E40
lbl_fn_8025A4A4_000010E4:
    addic. r31, r29, 0x1574
    beq lbl_fn_8025A4A4_00001104
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8025A4A4_00001104
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8025A4A4_00001104:
    addic. r31, r29, 0x1568
    beq lbl_fn_8025A4A4_00001124
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8025A4A4_00001124
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8025A4A4_00001124:
    addic. r31, r29, 0x155c
    beq lbl_fn_8025A4A4_00001144
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8025A4A4_00001144
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8025A4A4_00001144:
    addic. r31, r29, 0x1548
    beq lbl_fn_8025A4A4_00001164
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8025A4A4_00001164
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8025A4A4_00001164:
    addic. r31, r29, 0x153c
    beq lbl_fn_8025A4A4_00001184
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8025A4A4_00001184
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8025A4A4_00001184:
    addic. r31, r29, 0x1530
    beq lbl_fn_8025A4A4_000011A4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8025A4A4_000011A4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8025A4A4_000011A4:
    addic. r31, r29, 0x1524
    beq lbl_fn_8025A4A4_000011C4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8025A4A4_000011C4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8025A4A4_000011C4:
    addic. r31, r29, 0x1518
    beq lbl_fn_8025A4A4_000011E4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8025A4A4_000011E4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8025A4A4_000011E4:
    addic. r4, r29, 0x14c0
    beq lbl_fn_8025A4A4_00001214
    beq lbl_fn_8025A4A4_00001214
    beq lbl_fn_8025A4A4_00001214
    beq lbl_fn_8025A4A4_00001214
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8025A4A4_00001214
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8025A4A4_00001214:
    addic. r3, r29, 0x14b0
    beq lbl_fn_8025A4A4_00001224
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8025A4A4_00001224:
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_8025A4A4_00001240
    mr r3, r29
    bl dtor_80084684
lbl_fn_8025A4A4_00001240:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8025A67C(void)
{
    nofralloc
    stwu r1, -0x6c0(r1)
    mflr r0
    stw r0, 0x6c4(r1)
    addi r11, r1, 0x6c0
    bl _savegpr_17
    mr r18, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_8025A67C_00001868
    lwz r3, 0x1438(r18)
    cmpwi r3, 0x0
    beq lbl_fn_8025A67C_000012A0
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8025A67C_00001868
lbl_fn_8025A67C_000012A0:
    addi r3, r18, 0x14b0
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_8025A67C_00001868
    addi r3, r18, 0x1518
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8025A67C_00001868
    addi r3, r18, 0x153c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8025A67C_00001868
    addi r3, r18, 0x155c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8025A67C_00001868
    addi r3, r18, 0x1568
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8025A67C_00001868
    addi r3, r18, 0x1574
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8025A67C_00001868
    addi r3, r18, 0x1530
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8025A67C_00001868
    addi r3, r18, 0x14b0
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_8025A67C_000017BC
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8025A67C_000017BC
    lwz r0, 0x10d8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8025A67C_000017BC
    addi r3, r18, 0x14b0
    bl fn_8047059C
    mr r20, r3
    addi r3, r18, 0x14b0
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r22, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x44(r1)
    mr r19, r3
    addi r3, r1, 0x54
    stw r22, 0x48(r1)
    li r4, 0x0
    li r5, 0x400
    stw r22, 0x4c(r1)
    stw r22, 0x50(r1)
    stw r22, 0x674(r1)
    bl memset
    addi r3, r1, 0x654
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x44(r1)
    mr r4, r19
    mr r5, r20
    addi r3, r1, 0x44
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x44
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x44(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r4, lbl_80743F78@ha
    lis r3, __files@ha
    addi r20, r1, 0x30
    lis r30, 0xcccd
    addi r25, r4, lbl_80743F78@l
    addi r26, r3, __files@l
    lis r24, 0x4000
    lis r27, 0x1555
    lis r28, 0x2aab
    lis r31, lbl_80775A88@ha
lbl_fn_8025A67C_000013EC:
    addi r3, r1, 0x44
    bl fn_8005B3CC
    mr r17, r3
    addi r4, r25, 0xa3
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8025A67C_0000141C
    addi r3, r1, 0x44
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x14b8(r18)
    b lbl_fn_8025A67C_000017AC
lbl_fn_8025A67C_0000141C:
    mr r3, r17
    addi r4, r25, 0xae
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8025A67C_00001444
    addi r3, r1, 0x44
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x14bc(r18)
    b lbl_fn_8025A67C_000017AC
lbl_fn_8025A67C_00001444:
    mr r3, r17
    addi r4, r25, 0xbe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8025A67C_0000173C
lbl_fn_8025A67C_00001458:
    addi r3, r1, 0x44
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
    ble lbl_fn_8025A67C_000014B0
lbl_fn_8025A67C_00001488:
    lwz r7, 0x7c(r4)
    lwzx r0, r7, r6
    cmpw r3, r0
    bne lbl_fn_8025A67C_000014A4
    mulli r0, r5, 0x28
    add r21, r7, r0
    b lbl_fn_8025A67C_000014B4
lbl_fn_8025A67C_000014A4:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_8025A67C_00001488
lbl_fn_8025A67C_000014B0:
    li r21, 0x0
lbl_fn_8025A67C_000014B4:
    cmpwi r21, 0x0
    beq lbl_fn_8025A67C_00001730
    lwz r3, 0x14c4(r18)
    lwz r19, 0x14c8(r18)
    cmplw r3, r19
    bge lbl_fn_8025A67C_000014E8
    addi r4, r3, 0x1
    lwz r3, 0x14c0(r18)
    slwi r0, r4, 2
    stw r4, 0x14c4(r18)
    add r3, r3, r0
    stw r21, -0x4(r3)
    b lbl_fn_8025A67C_00001730
lbl_fn_8025A67C_000014E8:
    subi r0, r24, 0x1
    subf r0, r19, r0
    cmplwi r0, 0x1
    bge lbl_fn_8025A67C_0000150C
    addi r4, r25, 0xc9
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8025A67C_0000150C:
    addi r0, r27, 0x5555
    cmplw r19, r0
    bge lbl_fn_8025A67C_00001540
    addi r3, r19, 0x1
    subi r4, r30, 0x3333
    slwi r0, r3, 2
    subf r0, r3, r0
    mulhwu r0, r4, r0
    srwi r0, r0, 2
    cmplwi r0, 0x1
    bge lbl_fn_8025A67C_0000155C
    b lbl_fn_8025A67C_0000155C
    b lbl_fn_8025A67C_0000155C
lbl_fn_8025A67C_00001540:
    subi r0, r28, 0x5556
    cmplw r19, r0
    bge lbl_fn_8025A67C_0000155C
    addi r0, r19, 0x1
    srwi r0, r0, 1
    cmplwi r0, 0x1
    cmplwi r0, 0x1
lbl_fn_8025A67C_0000155C:
    lwz r3, 0x14c4(r18)
    addi r4, r18, 0x14c8
    lwz r29, 0x14c8(r18)
    subi r0, r24, 0x1
    addi r3, r3, 0x1
    stw r22, 0x30(r1)
    subf r3, r29, r3
    subf r0, r29, r0
    cmplw r3, r0
    stw r22, 0x34(r1)
    stw r22, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r22, 0x40(r1)
    stw r3, 0x8(r1)
    ble lbl_fn_8025A67C_000015AC
    addi r4, r25, 0xc9
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8025A67C_000015AC:
    addi r0, r27, 0x5555
    cmplw r29, r0
    bge lbl_fn_8025A67C_000015F4
    addi r4, r29, 0x1
    subi r5, r30, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x8(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_8025A67C_000015E8
    addi r3, r1, 0x8
lbl_fn_8025A67C_000015E8:
    lwz r0, 0x0(r3)
    add r19, r29, r0
    b lbl_fn_8025A67C_00001630
lbl_fn_8025A67C_000015F4:
    subi r0, r28, 0x5556
    cmplw r29, r0
    bge lbl_fn_8025A67C_0000162C
    addi r3, r29, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_8025A67C_00001620
    addi r3, r1, 0x8
lbl_fn_8025A67C_00001620:
    lwz r0, 0x0(r3)
    add r19, r29, r0
    b lbl_fn_8025A67C_00001630
lbl_fn_8025A67C_0000162C:
    subi r19, r24, 0x1
lbl_fn_8025A67C_00001630:
    subi r0, r24, 0x1
    cmplw r19, r0
    ble lbl_fn_8025A67C_00001650
    addi r4, r25, 0xc9
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8025A67C_00001650:
    slwi r3, r19, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8025A67C_00001678
    addi r3, r26, 0xa0
    addi r4, r31, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8025A67C_00001678:
    lwz r5, 0x14c4(r18)
    lwz r3, 0x34(r1)
    slwi r4, r5, 2
    stw r19, 0x38(r1)
    slwi r0, r3, 2
    addi r3, r3, 0x1
    add r4, r29, r4
    stw r3, 0x34(r1)
    stwx r21, r4, r0
    lwz r0, 0x14c4(r18)
    lwz r19, 0x14c0(r18)
    slwi r0, r0, 2
    add r0, r19, r0
    mr r4, r19
    subf r0, r19, r0
    srawi r0, r0, 2
    addze r21, r0
    subf r0, r21, r5
    stw r0, 0x40(r1)
    slwi r17, r21, 2
    slwi r0, r0, 2
    mr r5, r17
    add r3, r29, r0
    bl memcpy
    mr r3, r19
    mr r5, r17
    li r4, 0x0
    bl memset
    lwz r0, 0x34(r1)
    cmpwi r20, 0x0
    lwz r3, 0x14c0(r18)
    add r5, r0, r21
    mr r0, r29
    lwz r6, 0x14c8(r18)
    lwz r4, 0x38(r1)
    stw r4, 0x14c8(r18)
    stw r6, 0x38(r1)
    stw r0, 0x14c0(r18)
    stw r3, 0x30(r1)
    stw r5, 0x14c4(r18)
    stw r22, 0x34(r1)
    beq lbl_fn_8025A67C_00001730
    cmpwi r3, 0x0
    beq lbl_fn_8025A67C_00001730
    stw r22, 0x34(r1)
    bl dtor_80084684
lbl_fn_8025A67C_00001730:
    cmpwi r23, 0x0
    bne lbl_fn_8025A67C_00001458
    b lbl_fn_8025A67C_000017AC
lbl_fn_8025A67C_0000173C:
    mr r3, r17
    addi r4, r25, 0xdd
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8025A67C_000017AC
    addi r3, r1, 0x44
    bl fn_8005B3CC
    bl fn_80684600
    lwz r4, lbl_8087F430
    li r5, 0x0
    li r6, 0x0
    lwz r4, 0x10d8(r4)
    lwz r0, 0x78(r4)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8025A67C_000017A4
lbl_fn_8025A67C_0000177C:
    lwz r7, 0x7c(r4)
    lwzx r0, r7, r6
    cmpw r3, r0
    bne lbl_fn_8025A67C_00001798
    mulli r0, r5, 0x28
    add r0, r7, r0
    b lbl_fn_8025A67C_000017A8
lbl_fn_8025A67C_00001798:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_8025A67C_0000177C
lbl_fn_8025A67C_000017A4:
    li r0, 0x0
lbl_fn_8025A67C_000017A8:
    stw r0, 0x14cc(r18)
lbl_fn_8025A67C_000017AC:
    addi r3, r1, 0x44
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8025A67C_000013EC
lbl_fn_8025A67C_000017BC:
    lfs f3, lbl_808834A8
    li r0, 0x80
    lwz r3, 0x7ec(r18)
    addi r6, r1, 0x14
    fmr f2, f3
    lfs f0, lbl_808834AC
    ori r4, r3, 0x141
    lwz r3, 0x1438(r18)
    oris r4, r4, 0x1
    stfs f0, 0x18(r1)
    lfs f0, lbl_808834A4
    ori r4, r4, 0x21c
    oris r5, r4, 0x80
    stfs f3, 0x14(r1)
    lwz r4, 0x1588(r18)
    ori r5, r5, 0xc000
    stfs f2, 0x28(r1)
    frsp f2, f2
    psq_l f1, 0x0(r6), 0, 0
    addi r7, r18, 0x15bc
    addi r6, r1, 0x20
    oris r5, r5, 0x300
    ori r4, r4, 0x3
    cmpwi r3, 0x0
    stw r5, 0x7ec(r18)
    stfs f0, 0x2c(r1)
    stfs f3, 0x1c(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x15c4(r18)
    stfs f0, 0x15c8(r18)
    stw r4, 0x1588(r18)
    stw r18, 0x158c(r18)
    stw r0, 0x15a0(r18)
    beq lbl_fn_8025A67C_00001860
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r18)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8025A67C_00001860:
    li r3, 0x1
    b lbl_fn_8025A67C_0000186C
lbl_fn_8025A67C_00001868:
    li r3, 0x0
lbl_fn_8025A67C_0000186C:
    addi r11, r1, 0x6c0
    bl _restgpr_17
    lwz r0, 0x6c4(r1)
    mtlr r0
    addi r1, r1, 0x6c0
    blr
}

asm void fn_8025ACA0(void)
{
    nofralloc
    stwu r1, -0x320(r1)
    mflr r0
    stw r0, 0x324(r1)
    stfd f31, 0x310(r1)
    psq_st f31, 0x318(r1), 0, 0
    stfd f30, 0x300(r1)
    psq_st f30, 0x308(r1), 0, 0
    stfd f29, 0x2f0(r1)
    psq_st f29, 0x2f8(r1), 0, 0
    stfd f28, 0x2e0(r1)
    psq_st f28, 0x2e8(r1), 0, 0
    stw r31, 0x2dc(r1)
    mr r31, r3
    stw r30, 0x2d8(r1)
    stw r29, 0x2d4(r1)
    lwz r0, 0xd1c(r3)
    stw r0, 0x14d0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8025ACA0_000018E0
    lwz r4, lbl_8087F8A0
    lwz r0, 0x48(r4)
    stw r0, 0x14d0(r3)
    stw r0, 0xd1c(r3)
lbl_fn_8025ACA0_000018E0:
    lwz r5, 0x58c(r3)
    lwz r4, 0x14d8(r3)
    cmpwi r5, 0xa
    addi r0, r4, 0x1
    stw r0, 0x14d8(r3)
    beq lbl_fn_8025ACA0_00001998
    cmpwi r5, 0xb
    beq lbl_fn_8025ACA0_00001998
    lfs f2, 0x530(r3)
    addi r4, r1, 0x80
    lfs f0, 0x14bc(r3)
    li r29, 0x0
    psq_l f1, 0x528(r3), 0, 0
    frsp f28, f2
    psq_st f1, 0x0(r4), 0, 0
    fmuls f31, f0, f0
    lwz r3, lbl_8087F8A0
    stfs f2, 0x88(r1)
    lwz r30, 0x48(r3)
    lfs f29, 0x84(r1)
    lfs f30, 0x80(r1)
    b lbl_fn_8025ACA0_00001984
lbl_fn_8025ACA0_00001938:
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8025ACA0_00001980
    lfs f4, 0x530(r30)
    addi r3, r1, 0x8c
    lfs f3, 0x52c(r30)
    lfs f0, 0x528(r30)
    fsubs f4, f4, f28
    fsubs f3, f3, f29
    fsubs f0, f0, f30
    stfs f4, 0x94(r1)
    stfs f0, 0x8c(r1)
    stfs f3, 0x90(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_8025ACA0_00001980
    addi r29, r29, 0x1
lbl_fn_8025ACA0_00001980:
    lwz r30, 0x14ac(r30)
lbl_fn_8025ACA0_00001984:
    cmpwi r30, 0x0
    bne lbl_fn_8025ACA0_00001938
    lwz r0, 0x1504(r31)
    add r0, r0, r29
    stw r0, 0x1504(r31)
lbl_fn_8025ACA0_00001998:
    lwz r0, 0x15d8(r31)
    cmpwi r0, 0x2
    bgt lbl_fn_8025ACA0_000019B8
    lwz r3, lbl_8087F430
    li r4, 0xe8
    bl fn_80370A78
    cmpwi r3, 0x1
    bne lbl_fn_8025ACA0_000019C0
lbl_fn_8025ACA0_000019B8:
    li r0, 0x1
    stw r0, 0x14dc(r31)
lbl_fn_8025ACA0_000019C0:
    lwz r0, 0xd18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8025ACA0_000019D8
    lwz r0, 0x14d0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8025ACA0_000019E8
lbl_fn_8025ACA0_000019D8:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_8025ACA0_00001FCC
lbl_fn_8025ACA0_000019E8:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x2
    beq lbl_fn_8025ACA0_00001A20
    cmpwi r0, 0x7
    beq lbl_fn_8025ACA0_00001A6C
    cmpwi r0, 0x8
    beq lbl_fn_8025ACA0_00001A78
    cmpwi r0, 0xa
    beq lbl_fn_8025ACA0_00001A84
    cmpwi r0, 0xb
    beq lbl_fn_8025ACA0_00001AAC
    cmpwi r0, 0x9
    beq lbl_fn_8025ACA0_00001B9C
    b lbl_fn_8025ACA0_00001DAC
lbl_fn_8025ACA0_00001A20:
    lfs f28, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f28, f1
    cror eq, gt, eq
    bne lbl_fn_8025ACA0_00001FCC
    lwz r0, 0x12a4(r31)
    mr r3, r31
    lwz r4, 0x5c0(r31)
    oris r0, r0, 0x200
    clrrwi r4, r4, 1
    stw r4, 0x5c0(r31)
    ori r0, r0, 0x8000
    stw r0, 0x12a4(r31)
    bl fn_801765D8
    mr r3, r31
    bl fn_800EE360
    b lbl_fn_8025ACA0_00001FCC
lbl_fn_8025ACA0_00001A6C:
    mr r3, r31
    bl fn_8025BD1C
    b lbl_fn_8025ACA0_00001FCC
lbl_fn_8025ACA0_00001A78:
    mr r3, r31
    bl fn_8025BF58
    b lbl_fn_8025ACA0_00001FCC
lbl_fn_8025ACA0_00001A84:
    lfs f28, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f28, f1
    cror eq, gt, eq
    bne lbl_fn_8025ACA0_00001FCC
    mr r3, r31
    bl fn_8025C460
    b lbl_fn_8025ACA0_00001FCC
lbl_fn_8025ACA0_00001AAC:
    lfs f28, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f28, f1
    cror eq, gt, eq
    bne lbl_fn_8025ACA0_00001FCC
    lwz r0, 0x14dc(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8025ACA0_00001B5C
    lwz r0, 0x1554(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8025ACA0_00001B5C
    li r0, 0x0
    stw r0, 0x14d4(r31)
    stw r0, 0x14d8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    li r0, 0x9
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_808834B0
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808834A8
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x6a
    lfs f2, lbl_808834B4
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_8025ACA0_00001FCC
lbl_fn_8025ACA0_00001B5C:
    li r30, 0x0
    stw r30, 0x14d4(r31)
    stw r30, 0x14d8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_8025ACA0_00001FCC
lbl_fn_8025ACA0_00001B9C:
    lfs f28, 0x2e4(r31)
    lfs f3, lbl_808834B8
    lfs f0, lbl_808834BC
    fsubs f3, f28, f3
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8025ACA0_00001D4C
    li r0, 0x1
    li r5, 0x0
    stw r0, 0x1554(r31)
    li r0, 0x2
    mr r3, r31
    li r4, 0x3e9
    stw r5, 0x1558(r31)
    lwz r5, lbl_8087F3C0
    stw r0, 0xb8(r5)
    bl fn_80232B7C
    lwz r0, 0x15d4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8025ACA0_00001C14
    lfs f3, lbl_808834B0
    addi r12, r1, 0x50
    lfs f4, lbl_808834A8
    lfs f0, lbl_808834C0
    stfs f4, 0x50(r1)
    stfs f3, 0x54(r1)
    stfs f0, 0x58(r1)
    stfs f3, 0x5c(r1)
    b lbl_fn_8025ACA0_00001C34
lbl_fn_8025ACA0_00001C14:
    lfs f4, lbl_808834B0
    addi r12, r1, 0x60
    lfs f3, lbl_808834C4
    lfs f0, lbl_808834A8
    stfs f4, 0x60(r1)
    stfs f3, 0x64(r1)
    stfs f0, 0x68(r1)
    stfs f4, 0x6c(r1)
lbl_fn_8025ACA0_00001C34:
    lfs f0, 0x0(r12)
    lis r7, lbl_807C7030@ha
    stfs f0, 0x70(r1)
    addi r7, r7, lbl_807C7030@l
    lwz r3, lbl_8087F3C0
    li r11, -0x1
    lfs f0, 0x4(r12)
    li r0, 0x1
    stfs f0, 0x74(r1)
    mr r8, r7
    lfs f1, lbl_808834B0
    addi r4, r31, 0x155c
    lfs f0, 0x8(r12)
    addi r5, r31, 0xb0
    stfs f0, 0x78(r1)
    addi r9, r1, 0x70
    li r6, 0x0
    li r10, -0x1
    lfs f0, 0xc(r12)
    stfs f0, 0x7c(r1)
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_8023A8B4
    lwz r5, lbl_8087F3C0
    lis r3, lbl_80743F50@ha
    li r0, 0x0
    lwz r4, lbl_80743F50@l(r3)
    stw r0, 0xb8(r5)
    addi r3, r1, 0x10
    lfs f1, lbl_808834B0
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x15d4(r31)
    lwz r3, lbl_8087F430
    cntlzw r0, r0
    extrwi r0, r0, 1, 26
    neg r4, r0
    addi r29, r4, 0xea
    mr r4, r29
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8025ACA0_00001D00
    lwz r3, lbl_8087F430
    mr r4, r29
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_8025ACA0_00001D00:
    addi r3, r1, 0xc0
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r3, lbl_8087F1E4
    lwz r4, 0x294(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8025ACA0_00001D24
    b lbl_fn_8025ACA0_00001D28
lbl_fn_8025ACA0_00001D24:
    la r4, lbl_808813D0
lbl_fn_8025ACA0_00001D28:
    lwz r5, 0x60(r31)
    addi r3, r1, 0xc0
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0xc0
    bl fn_80109828
    b lbl_fn_8025ACA0_00001FCC
lbl_fn_8025ACA0_00001D4C:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f28, f1
    cror eq, gt, eq
    bne lbl_fn_8025ACA0_00001FCC
    lfs f0, lbl_808834A8
    li r30, 0x0
    stfs f0, 0xfb8(r31)
    stw r30, 0x14d4(r31)
    stw r30, 0x14d8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_8025ACA0_00001FCC
lbl_fn_8025ACA0_00001DAC:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_8025ACA0_00001E6C
    lwz r0, 0x560(r31)
    cmpwi r0, 0x1e
    bne lbl_fn_8025ACA0_00001E78
    lwz r0, 0xf80(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8025ACA0_00001DF0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c0(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x2c4(r1)
    stw r0, 0x2c8(r1)
    b lbl_fn_8025ACA0_00001E0C
lbl_fn_8025ACA0_00001DF0:
    lis r5, lbl_807847D0@ha
    lwzu r4, lbl_807847D0@l(r5)
    stw r4, 0x2c0(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x2c4(r1)
    stw r0, 0x2c8(r1)
lbl_fn_8025ACA0_00001E0C:
    lwz r5, 0x2c0(r1)
    addi r3, r1, 0x40
    lwz r4, 0x2c4(r1)
    lwz r0, 0x2c8(r1)
    stw r5, 0x40(r1)
    stw r4, 0x44(r1)
    stw r0, 0x48(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8025ACA0_00001E78
    lwz r3, 0xf80(r31)
    lbz r0, 0x1d(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8025ACA0_00001E78
    lwz r3, lbl_8087F430
    li r4, 0xec
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8025ACA0_00001E78
    lwz r3, lbl_8087F430
    li r4, 0xec
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_8025ACA0_00001E78
lbl_fn_8025ACA0_00001E6C:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
lbl_fn_8025ACA0_00001E78:
    mr r3, r31
    bl fn_8025B9EC
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_8025ACA0_00001FCC
    lwz r3, 0x1504(r31)
    lwz r0, 0x14b8(r31)
    cmpw r3, r0
    blt lbl_fn_8025ACA0_00001F88
    li r0, 0x0
    stw r0, 0x1504(r31)
    stw r0, 0x14d4(r31)
    stw r0, 0x14d8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    li r0, 0xa
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_808834B0
    li r30, 0x1
    stw r30, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808834A8
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x1ea
    lfs f2, lbl_808834B4
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r31
    li r4, 0x65
    bl fn_80232B7C
    lfs f0, lbl_808834A8
    li r0, -0x1
    lfs f1, lbl_808834B0
    addi r4, r31, 0x1530
    stfs f0, 0x20(r1)
    addi r5, r31, 0xb0
    lwz r3, lbl_8087F3C0
    addi r7, r1, 0x14
    stfs f0, 0x24(r1)
    addi r8, r1, 0x20
    addi r9, r1, 0x30
    li r6, 0x0
    stfs f0, 0x28(r1)
    li r10, -0x1
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    bl fn_8023A8B4
    b lbl_fn_8025ACA0_00001FCC
lbl_fn_8025ACA0_00001F88:
    lwz r0, 0x14d0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8025ACA0_00001FCC
    lwz r30, lbl_8087F9E8
    li r29, 0x1
    lwz r3, 0x1500(r31)
    bl fn_80219E6C
    mr r4, r3
    mr r3, r30
    mr r5, r31
    bl fn_8059C6E0
    cmpwi r3, 0x0
    beq lbl_fn_8025ACA0_00001FC0
    li r29, 0x0
lbl_fn_8025ACA0_00001FC0:
    mr r3, r31
    mr r4, r29
    bl fn_8025C29C
lbl_fn_8025ACA0_00001FCC:
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    lwz r3, lbl_8087F8A0
    lfs f31, lbl_808834C8
    lwz r29, 0x48(r3)
    b lbl_fn_8025ACA0_000020B4
lbl_fn_8025ACA0_00001FEC:
    lwz r0, 0x48(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8025ACA0_000020B0
    lwz r6, 0x38(r29)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8025ACA0_00002024
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_8025ACA0_00002024
    li r5, 0x1
lbl_fn_8025ACA0_00002024:
    cmpwi r5, 0x0
    beq lbl_fn_8025ACA0_00002040
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8025ACA0_00002040
    li r3, 0x1
lbl_fn_8025ACA0_00002040:
    cmpwi r3, 0x0
    beq lbl_fn_8025ACA0_00002074
    lwz r0, 0x55c(r29)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8025ACA0_00002068
    lwz r0, 0x560(r29)
    cmpwi r0, 0x1c
    bne lbl_fn_8025ACA0_00002068
    li r3, 0x1
lbl_fn_8025ACA0_00002068:
    cmpwi r3, 0x0
    bne lbl_fn_8025ACA0_00002074
    li r4, 0x1
lbl_fn_8025ACA0_00002074:
    cmpwi r4, 0x0
    beq lbl_fn_8025ACA0_000020B0
    lwz r3, lbl_8087F048
    mr r4, r29
    bl fn_80103F60
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8025ACA0_000020B0
    mr r4, r31
    bl fn_80108378
    cmpwi r3, 0x0
    blt lbl_fn_8025ACA0_000020B0
    slwi r0, r3, 2
    add r3, r30, r0
    stfs f31, 0x128(r3)
lbl_fn_8025ACA0_000020B0:
    lwz r29, 0x14ac(r29)
lbl_fn_8025ACA0_000020B4:
    cmpwi r29, 0x0
    bne lbl_fn_8025ACA0_00001FEC
    lwz r0, 0x1554(r31)
    lfs f0, lbl_808834A4
    cmpwi r0, 0x0
    stfs f0, 0xbc(r1)
    beq lbl_fn_8025ACA0_00002134
    lis r4, lbl_80743F78@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80743F78@l
    li r5, 0x0
    addi r4, r4, 0xef
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8025ACA0_000020F8
    li r5, 0x0
    b lbl_fn_8025ACA0_00002104
lbl_fn_8025ACA0_000020F8:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_8025ACA0_00002104:
    lfs f0, 0x1c(r5)
    addi r4, r1, 0xa4
    lfs f3, 0xc(r5)
    addi r3, r1, 0xb0
    stfs f3, 0xa4(r1)
    lfs f2, 0x2c(r5)
    stfs f0, 0xa8(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0xac(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xb8(r1)
    b lbl_fn_8025ACA0_0000215C
lbl_fn_8025ACA0_00002134:
    lfs f2, lbl_808834A8
    addi r4, r1, 0x98
    lfs f0, lbl_808834AC
    addi r3, r1, 0xb0
    stfs f2, 0x98(r1)
    stfs f0, 0x9c(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0xa0(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xb8(r1)
lbl_fn_8025ACA0_0000215C:
    addi r3, r1, 0xb0
    lfs f2, 0xb8(r1)
    lfs f0, 0xbc(r1)
    addi r4, r31, 0x15bc
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x15c4(r31)
    stfs f0, 0x15c8(r31)
    psq_l f31, 0x318(r1), 0, 0
    lfd f31, 0x310(r1)
    psq_l f30, 0x308(r1), 0, 0
    lfd f30, 0x300(r1)
    psq_l f29, 0x2f8(r1), 0, 0
    lfd f29, 0x2f0(r1)
    psq_l f28, 0x2e8(r1), 0, 0
    lfd f28, 0x2e0(r1)
    lwz r31, 0x2dc(r1)
    lwz r30, 0x2d8(r1)
    lwz r29, 0x2d4(r1)
    lwz r0, 0x324(r1)
    mtlr r0
    addi r1, r1, 0x320
    blr
}
