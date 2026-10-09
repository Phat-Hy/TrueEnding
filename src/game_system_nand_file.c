#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _savegpr_20(void);
extern void fn_8000D114(void);
extern void fn_8000D124(void);
extern void fn_80011410(void);
extern void fn_800132EC(void);
extern void fn_80013410(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800EFD04(void);
extern void fn_800EFDA0(void);
extern void fn_800F72CC(void);
extern void fn_800F7FA0(void);
extern void fn_800F7FA8(void);
extern void fn_800F8524(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800F8C6C(void);
extern void fn_801010A0(void);
extern void fn_8010B250(void);
extern void fn_8010EE78(void);
extern void fn_80139550(void);
extern void fn_8013A194(void);
extern void fn_8014052C(void);
extern void fn_8016E970(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_8023A8B4(void);
extern void fn_80276AE4(void);
extern void fn_803458DC(void);
extern void fn_803489F4(void);
extern void fn_8034C060(void);
extern void fn_8034F41C(void);
extern void fn_80352938(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_8074A8D8[];
extern u8 lbl_8074A8E0[];
extern u8 lbl_8074AA58[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087DC88;
extern u32 lbl_8087DC8C;
extern u32 lbl_8087DC90;
extern u32 lbl_8087DC94;
extern u32 lbl_8087DC98;
extern u32 lbl_8087DC9C;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885378;
extern u32 lbl_8088537C;
extern u32 lbl_80885380;
extern u32 lbl_80885398;
extern u32 lbl_8088539C;
extern u32 lbl_808853A8;
extern u32 lbl_808853AC;
extern u32 lbl_808853B0;
extern u32 lbl_808853B4;
extern u32 lbl_808853B8;
extern u32 lbl_808853C0;
extern u32 lbl_808853C4;
extern u32 lbl_808853CC;
extern u32 lbl_808853D8;
extern u32 lbl_808853DC;
extern u32 lbl_808853E0;
extern u32 lbl_808853E4;
extern u32 lbl_808853E8;
extern u32 lbl_808853EC;
extern u32 lbl_808853F0;
extern u32 lbl_808853F4;
extern u32 lbl_808853F8;
extern u32 lbl_80885400;
extern u32 lbl_80885404;
extern u32 lbl_80885408;
extern u32 lbl_8088540C;
extern u32 lbl_80885410;
extern u32 lbl_80885414;
extern u32 lbl_80885418;
extern u32 lbl_8088541C;
extern u32 lbl_80885420;
extern u32 lbl_80885424;
extern u32 lbl_80885428;
extern u32 lbl_8088542C;
extern u32 lbl_80885430;
extern u32 lbl_80885434;
extern u32 lbl_80885438;
extern u32 lbl_8088543C;
extern u32 lbl_80885440;
extern u32 lbl_80885444;
extern u32 lbl_80885448;

/* Function declarations */
void fn_80348FF4(void);
void fn_80349424(void);
void fn_80349450(void);
void fn_80349470(void);
void fn_803494AC(void);
void fn_80349BA0(void);
void fn_8034A194(void);
void fn_8034A644(void);

asm void fn_80348FF4(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    stw r31, 0x9c(r1)
    mr r31, r3
    stw r30, 0x98(r1)
    stw r29, 0x94(r1)
    lwz r0, 0x14b4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80348FF4_000000B4
    lfs f1, lbl_808853A8
    bl fn_80352938
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80885400
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80348FF4_0000040C
    bl fn_800F7FA0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    bl fn_800F7FA0
    mr r4, r31
    li r5, 0x3e8
    bl fn_800F7FA8
    bl fn_800F7FA0
    lis r6, lbl_807C7030@ha
    lfs f1, lbl_80885398
    addi r6, r6, lbl_807C7030@l
    addi r4, r31, 0x163c
    mr r7, r6
    addi r5, r31, 0xb0
    li r8, -0x1
    li r9, -0x1
    li r10, 0x1
    bl fn_80276AE4
    lwz r3, 0x14b4(r31)
    addi r0, r3, 0x1
    stw r0, 0x14b4(r31)
    b lbl_fn_80348FF4_0000040C
lbl_fn_80348FF4_000000B4:
    cmpwi r0, 0x1
    bne lbl_fn_80348FF4_000001AC
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80139550
    lfs f0, lbl_80885404
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80348FF4_0000040C
    lfs f1, lbl_80885378
    addi r3, r1, 0x60
    lfs f3, lbl_808853B0
    fmr f2, f1
    bl fn_8000D114
    lis r29, lbl_8074AA58@ha
    addi r3, r31, 0xb0
    addi r29, r29, lbl_8074AA58@l
    addi r4, r29, 0x3aa
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x60
    bl fn_80011410
    mr r3, r31
    addi r4, r1, 0x60
    bl fn_803489F4
    bl fn_800F7FA0
    mr r4, r31
    li r5, 0x3e8
    bl fn_800F7FA8
    bl fn_800F7FA0
    li r30, 0x0
    stw r30, 0x8(r1)
    li r0, -0x1
    lfs f1, lbl_80885398
    stw r0, 0xc(r1)
    li r0, 0x1
    addi r4, r31, 0x1648
    addi r7, r31, 0x1660
    stw r0, 0x10(r1)
    li r5, -0x1
    li r6, 0x5
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8023A680
    lfs f1, lbl_80885398
    addi r3, r1, 0x18
    addi r4, r29, 0x3bc
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    stw r30, 0x1a24(r31)
    bl fn_8013A194
    bl fn_800F8548
    lwz r4, 0x14b4(r31)
    stw r3, 0x1a20(r31)
    addi r0, r4, 0x1
    stw r0, 0x14b4(r31)
    b lbl_fn_80348FF4_0000040C
lbl_fn_80348FF4_000001AC:
    cmpwi r0, 0x2
    bne lbl_fn_80348FF4_000003DC
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80139550
    lfs f0, lbl_80885408
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80348FF4_000003B8
    lfs f1, lbl_80885378
    addi r3, r1, 0x54
    lfs f3, lbl_808853B0
    fmr f2, f1
    bl fn_8000D114
    lis r4, lbl_8074AA58@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_8074AA58@l
    addi r4, r4, 0x3aa
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x54
    bl fn_80011410
    mr r3, r31
    addi r4, r1, 0x54
    bl fn_803489F4
    bl fn_8013A194
    bl fn_801010A0
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_80348FF4_000002A0
    addi r3, r1, 0x6c
    bl fn_80349424
    bl fn_8013A194
    lwz r4, 0x152c(r31)
    li r5, 0x0
    lwz r4, 0x3c(r4)
    bl fn_8010B250
    stfs f1, 0x6c(r1)
    lwz r3, 0x152c(r31)
    lwz r3, 0xb0(r3)
    bl fn_800EFD04
    stw r3, 0x70(r1)
    lwz r3, 0x152c(r31)
    lwz r3, 0xb0(r3)
    bl fn_800EFDA0
    stw r3, 0x74(r1)
    li r0, 0x0
    lfs f0, lbl_80885378
    mr r3, r29
    lwz r4, 0x152c(r31)
    mr r7, r31
    stw r4, 0x78(r1)
    addi r4, r1, 0x6c
    lfs f1, lbl_8088540C
    addi r5, r1, 0x54
    stw r0, 0x7c(r1)
    addi r6, r31, 0x1654
    li r9, 0x0
    stfs f0, 0x80(r1)
    lwz r8, 0x590(r31)
    bl fn_8010EE78
lbl_fn_80348FF4_000002A0:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_808853F8
    lfs f2, lbl_808853B0
    fsubs f1, f1, f0
    lfs f0, lbl_80885398
    fdivs f1, f1, f2
    fcmpo cr0, f0, f1
    bge lbl_fn_80348FF4_000002CC
    b lbl_fn_80348FF4_000002E8
lbl_fn_80348FF4_000002CC:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f2, lbl_808853F8
    lfs f0, lbl_808853B0
    fsubs f1, f1, f2
    fdivs f0, f1, f0
lbl_fn_80348FF4_000002E8:
    lfs f1, lbl_80885378
    fcmpo cr0, f1, f0
    ble lbl_fn_80348FF4_000002F8
    b lbl_fn_80348FF4_00000340
lbl_fn_80348FF4_000002F8:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f2, lbl_808853F8
    lfs f0, lbl_808853B0
    fsubs f2, f1, f2
    lfs f1, lbl_80885398
    fdivs f0, f2, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_80348FF4_00000324
    b lbl_fn_80348FF4_00000340
lbl_fn_80348FF4_00000324:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f2, lbl_808853F8
    lfs f0, lbl_808853B0
    fsubs f1, f1, f2
    fdivs f1, f1, f0
lbl_fn_80348FF4_00000340:
    la r3, lbl_8087DC88
    la r4, lbl_8087DC8C
    bl fn_800F8524
    fmr f31, f1
    mr r4, r31
    addi r3, r1, 0x1c
    bl fn_8014052C
    fmr f1, f31
    addi r3, r1, 0x28
    addi r4, r1, 0x1c
    bl fn_800F72CC
    addi r3, r1, 0x48
    addi r4, r31, 0x528
    addi r5, r1, 0x28
    bl fn_80013410
    addi r3, r31, 0x181c
    bl fn_80349450
    cmpwi r3, 0x0
    bne lbl_fn_80348FF4_0000040C
    addi r3, r1, 0x38
    bl fn_803458DC
    lfs f0, lbl_808853AC
    addi r3, r1, 0x3c
    stfs f0, 0x38(r1)
    addi r4, r1, 0x48
    bl fn_8000D124
    addi r3, r31, 0x181c
    addi r4, r1, 0x38
    bl fn_80349470
    b lbl_fn_80348FF4_0000040C
lbl_fn_80348FF4_000003B8:
    bl fn_800F7FA0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, 0x14b4(r31)
    addi r0, r3, 0x1
    stw r0, 0x14b4(r31)
    b lbl_fn_80348FF4_0000040C
lbl_fn_80348FF4_000003DC:
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fmr f31, f1
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    fcmpo cr0, f1, f31
    cror eq, gt, eq
    bne lbl_fn_80348FF4_0000040C
    mr r3, r31
    bl fn_8034F41C
lbl_fn_80348FF4_0000040C:
    lwz r0, 0xb4(r1)
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_80349424(void)
{
    nofralloc
    lfs f2, lbl_808853C4
    li r0, 0x0
    lfs f1, lbl_80885378
    lfs f0, lbl_80885398
    stfs f2, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0x10(r3)
    stfs f1, 0x14(r3)
    stfs f0, 0x18(r3)
    blr
}

asm void fn_80349450(void)
{
    nofralloc
    lwz r4, 0x0(r3)
    li r3, 0x20
    subi r0, r4, 0x20
    orc r3, r4, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_80349470(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    slwi r0, r0, 4
    add r0, r3, r0
    addic. r5, r0, 0x4
    beq lbl_fn_80349470_000004A8
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r5)
    psq_l f1, 0x4(r4), 0, 0
    psq_st f1, 0x4(r5), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0xc(r5)
lbl_fn_80349470_000004A8:
    lwz r4, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
    blr
}

asm void fn_803494AC(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    stfd f31, 0x200(r1)
    psq_st f31, 0x208(r1), 0, 0
    stw r31, 0x1fc(r1)
    mr r31, r3
    stw r30, 0x1f8(r1)
    lwz r6, 0x14b4(r3)
    cmpwi r6, 0x0
    bne lbl_fn_803494AC_000005D8
    li r4, 0x1
    bl fn_8034C060
    lfs f7, lbl_808853CC
    lfs f0, 0x52c(r31)
    lfs f8, lbl_80885410
    fadds f0, f7, f0
    fcmpo cr0, f8, f0
    bge lbl_fn_803494AC_00000508
    b lbl_fn_803494AC_0000050C
lbl_fn_803494AC_00000508:
    fmr f8, f0
lbl_fn_803494AC_0000050C:
    lwz r0, 0x2dc(r31)
    stfs f8, 0x52c(r31)
    cmpwi r0, 0x141
    bne lbl_fn_803494AC_00000B8C
    lwz r4, 0x14b4(r31)
    li r30, 0x1
    lfs f0, lbl_80885398
    addi r3, r31, 0xb0
    addi r0, r4, 0x1
    stw r0, 0x14b4(r31)
    lfs f1, lbl_80885378
    li r4, 0x0
    stw r30, 0x3fc(r31)
    li r5, 0x16b
    lfs f2, lbl_808853C4
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    mr r3, r31
    li r4, 0x3ea
    bl fn_80232B7C
    lfs f0, lbl_80885378
    li r0, -0x1
    lfs f1, lbl_80885398
    addi r4, r31, 0x16c0
    stfs f0, 0x64(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x58
    addi r8, r1, 0x64
    stfs f0, 0x68(r1)
    addi r9, r1, 0x70
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x6c(r1)
    stfs f0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f1, 0x70(r1)
    stfs f1, 0x74(r1)
    stfs f1, 0x78(r1)
    stfs f1, 0x7c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    li r0, 0x0
    stw r0, 0x14b8(r31)
    b lbl_fn_803494AC_00000B8C
lbl_fn_803494AC_000005D8:
    cmpwi r6, 0x1
    bne lbl_fn_803494AC_00000718
    lwz r4, 0x153c(r3)
    lwz r5, 0x14b8(r3)
    lwz r0, 0xc0(r4)
    cmpw r5, r0
    blt lbl_fn_803494AC_000006A4
    addi r0, r6, 0x1
    stw r0, 0x14b4(r3)
    lfs f1, lbl_80885378
    li r4, 0x0
    lfs f2, lbl_808853C4
    li r5, 0x16d
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0xb0
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ea
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x3e9
    bl fn_80232B7C
    lfs f0, lbl_80885378
    li r3, -0x1
    lfs f1, lbl_80885398
    li r0, 0x1
    stfs f0, 0x38(r1)
    addi r4, r31, 0x16cc
    addi r5, r31, 0xb0
    addi r7, r1, 0x2c
    stfs f0, 0x3c(r1)
    addi r8, r1, 0x38
    addi r9, r1, 0x48
    li r6, 0x0
    stfs f0, 0x40(r1)
    li r10, -0x1
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f1, 0x48(r1)
    stfs f1, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x54(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_803494AC_000006A4:
    lfs f7, lbl_808853CC
    lfs f0, 0x52c(r31)
    lfs f8, lbl_80885410
    fadds f0, f7, f0
    fcmpo cr0, f8, f0
    bge lbl_fn_803494AC_000006C0
    b lbl_fn_803494AC_000006C4
lbl_fn_803494AC_000006C0:
    fmr f8, f0
lbl_fn_803494AC_000006C4:
    lwz r0, 0x2dc(r31)
    stfs f8, 0x52c(r31)
    cmpwi r0, 0x16b
    bne lbl_fn_803494AC_00000B8C
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_803494AC_00000B8C
    lfs f1, lbl_80885398
    addi r3, r31, 0xb0
    lfs f2, lbl_808853C4
    li r4, 0x0
    li r5, 0x16c
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_803494AC_00000B8C
lbl_fn_803494AC_00000718:
    cmpwi r6, 0x2
    bne lbl_fn_803494AC_00000A04
    lfs f8, 0x2e4(r3)
    lfs f7, lbl_808853B4
    lfs f0, lbl_808853C0
    fsubs f7, f8, f7
    lfs f8, lbl_80885378
    fmuls f0, f7, f0
    fcmpo cr0, f8, f0
    ble lbl_fn_803494AC_00000744
    b lbl_fn_803494AC_00000748
lbl_fn_803494AC_00000744:
    fmr f8, f0
lbl_fn_803494AC_00000748:
    lfs f9, lbl_80885398
    fcmpo cr0, f9, f8
    bge lbl_fn_803494AC_00000758
    b lbl_fn_803494AC_00000780
lbl_fn_803494AC_00000758:
    lfs f8, 0x2e4(r3)
    lfs f7, lbl_808853B4
    lfs f0, lbl_808853C0
    fsubs f7, f8, f7
    lfs f9, lbl_80885378
    fmuls f0, f7, f0
    fcmpo cr0, f9, f0
    ble lbl_fn_803494AC_0000077C
    b lbl_fn_803494AC_00000780
lbl_fn_803494AC_0000077C:
    fmr f9, f0
lbl_fn_803494AC_00000780:
    lfs f0, lbl_8087DC94
    lfs f8, lbl_8087DC90
    lfs f10, 0x2e4(r3)
    fsubs f7, f0, f8
    lfs f0, lbl_80885414
    fcmpo cr0, f10, f0
    fmadds f0, f9, f7, f8
    stfs f0, 0x52c(r3)
    lwz r6, lbl_8087F430
    cror eq, gt, eq
    bne lbl_fn_803494AC_00000B8C
    lwz r4, 0x14b4(r3)
    li r0, 0xa
    lfs f11, lbl_80885378
    addi r30, r1, 0x1c8
    addi r4, r4, 0x1
    stw r4, 0x14b4(r3)
    lfs f10, lbl_80885410
    lwz r4, 0x96c(r6)
    lfs f9, lbl_80885418
    srwi r5, r4, 31
    clrlwi r4, r4, 31
    xor r4, r4, r5
    lfs f8, lbl_8088537C
    subf r4, r5, r4
    stw r4, 0x96c(r6)
    lfs f7, lbl_8088541C
    stw r0, 0x970(r6)
    lfs f0, lbl_80885398
    stfs f9, 0x974(r6)
    stfs f8, 0x978(r6)
    stfs f11, 0x8c(r1)
    stfs f11, 0x90(r1)
    stfs f7, 0x94(r1)
    stfs f11, 0x1f4(r1)
    stfs f11, 0x1ec(r1)
    stfs f11, 0x1e8(r1)
    stfs f11, 0x1e4(r1)
    stfs f11, 0x1e0(r1)
    stfs f11, 0x1d8(r1)
    stfs f11, 0x1d4(r1)
    stfs f11, 0x1d0(r1)
    stfs f11, 0x1cc(r1)
    stfs f0, 0x1f0(r1)
    stfs f0, 0x1dc(r1)
    stfs f0, 0x1c8(r1)
    lfs f1, 0x53c(r3)
    stfs f11, 0x98(r1)
    fcmpu cr0, f11, f1
    stfs f11, 0x18(r1)
    stfs f10, 0x28(r1)
    beq lbl_fn_803494AC_000008A0
    addi r3, r1, 0xd8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xd8
    addi r5, r1, 0xa8
    bl fn_805F89F0
    addi r3, r1, 0xa8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_803494AC_000008A0:
    lfs f0, lbl_80885378
    lfs f1, 0x538(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_803494AC_00000900
    addi r3, r1, 0x138
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x138
    addi r5, r1, 0x108
    bl fn_805F89F0
    addi r3, r1, 0x108
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_803494AC_00000900:
    lfs f0, lbl_80885378
    lfs f1, 0x534(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_803494AC_00000960
    addi r3, r1, 0x198
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x198
    addi r5, r1, 0x168
    bl fn_805F89F0
    addi r3, r1, 0x168
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_803494AC_00000960:
    addi r4, r1, 0x8c
    addi r3, r1, 0x1c8
    mr r5, r4
    bl fn_805F93C0
    li r0, 0x1
    stb r0, 0x16d8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x16ec(r31)
    lis r4, lbl_8074AA58@ha
    addi r4, r4, lbl_8074AA58@l
    lfs f9, 0x52c(r31)
    lfs f8, 0x90(r1)
    addi r6, r1, 0x80
    lfs f7, 0x528(r31)
    addi r7, r31, 0x16e0
    fadds f9, f9, f8
    lfs f0, 0x8c(r1)
    lfs f8, 0x530(r31)
    addi r3, r1, 0x10
    fadds f7, f7, f0
    stfs f9, 0x84(r1)
    stfs f7, 0x80(r1)
    addi r4, r4, 0x3cb
    lfs f0, 0x94(r1)
    li r5, 0x0
    psq_l f1, 0x0(r6), 0, 0
    li r6, -0x1
    fadds f2, f8, f0
    psq_st f1, 0x0(r7), 0, 0
    lfs f0, lbl_80885378
    lfs f1, lbl_80885398
    stfs f2, 0x88(r1)
    stfs f2, 0x16e8(r31)
    stfs f0, 0x16e4(r31)
    stfs f0, 0x9fc(r31)
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803494AC_00000B8C
lbl_fn_803494AC_00000A04:
    lfs f8, 0x2e4(r3)
    lfs f7, lbl_808853B4
    lfs f0, lbl_808853C0
    fsubs f7, f8, f7
    lfs f8, lbl_80885378
    fmuls f0, f7, f0
    fcmpo cr0, f8, f0
    ble lbl_fn_803494AC_00000A28
    b lbl_fn_803494AC_00000A2C
lbl_fn_803494AC_00000A28:
    fmr f8, f0
lbl_fn_803494AC_00000A2C:
    lfs f9, lbl_80885398
    fcmpo cr0, f9, f8
    bge lbl_fn_803494AC_00000A3C
    b lbl_fn_803494AC_00000A64
lbl_fn_803494AC_00000A3C:
    lfs f8, 0x2e4(r3)
    lfs f7, lbl_808853B4
    lfs f0, lbl_808853C0
    fsubs f7, f8, f7
    lfs f9, lbl_80885378
    fmuls f0, f7, f0
    fcmpo cr0, f9, f0
    ble lbl_fn_803494AC_00000A60
    b lbl_fn_803494AC_00000A64
lbl_fn_803494AC_00000A60:
    fmr f9, f0
lbl_fn_803494AC_00000A64:
    lfs f0, lbl_8087DC9C
    li r4, 0x0
    lfs f7, lbl_8087DC98
    lfs f31, 0x2e4(r3)
    fsubs f0, f0, f7
    fmadds f0, f9, f0, f7
    stfs f0, 0x52c(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_803494AC_00000B8C
    li r30, 0x0
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    stw r30, 0x14c0(r31)
    stw r30, 0x17e8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x3ea
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ed
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ef
    li r6, 0x1
    bl fn_80239DAC
    bl fn_80680CF8
    lis r4, 0x8889
    lwz r0, 0x14c0(r31)
    subi r5, r4, 0x7777
    mulhw r5, r5, r3
    li r4, 0x3
    add r5, r5, r3
    srawi r5, r5, 5
    srwi r6, r5, 31
    add r5, r5, r6
    mulli r5, r5, 0x3c
    subf r5, r5, r3
    mr r3, r31
    subfic r5, r5, 0x1e
    add r0, r0, r5
    stw r0, 0x14c0(r31)
    bl fn_8016E970
    lfs f0, lbl_80885398
    li r0, 0x1
    stw r30, 0x58c(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80885378
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x2
    lfs f2, lbl_808853C4
    li r6, 0x1
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lfs f0, lbl_80885378
    stfs f0, 0x52c(r31)
lbl_fn_803494AC_00000B8C:
    lwz r0, 0x214(r1)
    psq_l f31, 0x208(r1), 0, 0
    lfd f31, 0x200(r1)
    lwz r31, 0x1fc(r1)
    lwz r30, 0x1f8(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_80349BA0(void)
{
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    stw r0, 0x2d4(r1)
    addi r11, r1, 0x200
    stfd f31, 0x2c0(r1)
    psq_st f31, 0x2c8(r1), 0, 0
    stfd f30, 0x2b0(r1)
    psq_st f30, 0x2b8(r1), 0, 0
    stfd f29, 0x2a0(r1)
    psq_st f29, 0x2a8(r1), 0, 0
    stfd f28, 0x290(r1)
    psq_st f28, 0x298(r1), 0, 0
    stfd f27, 0x280(r1)
    psq_st f27, 0x288(r1), 0, 0
    stfd f26, 0x270(r1)
    psq_st f26, 0x278(r1), 0, 0
    stfd f25, 0x260(r1)
    psq_st f25, 0x268(r1), 0, 0
    stfd f24, 0x250(r1)
    psq_st f24, 0x258(r1), 0, 0
    stfd f23, 0x240(r1)
    psq_st f23, 0x248(r1), 0, 0
    stfd f22, 0x230(r1)
    psq_st f22, 0x238(r1), 0, 0
    stfd f21, 0x220(r1)
    psq_st f21, 0x228(r1), 0, 0
    stfd f20, 0x210(r1)
    psq_st f20, 0x218(r1), 0, 0
    stfd f19, 0x200(r1)
    psq_st f19, 0x208(r1), 0, 0
    bl _savegpr_20
    lwz r0, 0x14b4(r3)
    mr r29, r3
    cmpwi r0, 0x0
    bne lbl_fn_80349BA0_00001014
    lfs f7, 0x2e4(r3)
    lfs f0, lbl_80885420
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_80349BA0_00001120
    li r0, 0x0
    stw r0, 0x1a4(r1)
    lwz r3, 0x14b0(r3)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_80349BA0_00000C80
    addic. r0, r1, 0x1a8
    beq lbl_fn_80349BA0_00000C70
    stw r3, 0x1a8(r1)
lbl_fn_80349BA0_00000C70:
    lwz r3, 0x1a4(r1)
    addi r0, r3, 0x1
    stw r0, 0x1a4(r1)
    b lbl_fn_80349BA0_00000D30
lbl_fn_80349BA0_00000C80:
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_80349BA0_00000D28
lbl_fn_80349BA0_00000C8C:
    lwz r4, 0x38(r3)
    li r6, 0x0
    mr r5, r6
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80349BA0_00000CB0
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    bne lbl_fn_80349BA0_00000CB4
lbl_fn_80349BA0_00000CB0:
    li r5, 0x1
lbl_fn_80349BA0_00000CB4:
    cmpwi r5, 0x0
    bne lbl_fn_80349BA0_00000CF8
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80349BA0_00000CF8
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80349BA0_00000CEC
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_80349BA0_00000CEC
    li r4, 0x1
lbl_fn_80349BA0_00000CEC:
    cmpwi r4, 0x0
    bne lbl_fn_80349BA0_00000CF8
    li r6, 0x1
lbl_fn_80349BA0_00000CF8:
    cmpwi r6, 0x0
    beq lbl_fn_80349BA0_00000D24
    lwz r0, 0x1a4(r1)
    addi r4, r1, 0x1a8
    slwi r0, r0, 2
    add. r4, r4, r0
    beq lbl_fn_80349BA0_00000D18
    stw r3, 0x0(r4)
lbl_fn_80349BA0_00000D18:
    lwz r4, 0x1a4(r1)
    addi r0, r4, 0x1
    stw r0, 0x1a4(r1)
lbl_fn_80349BA0_00000D24:
    lwz r3, 0x14ac(r3)
lbl_fn_80349BA0_00000D28:
    cmpwi r3, 0x0
    bne lbl_fn_80349BA0_00000C8C
lbl_fn_80349BA0_00000D30:
    lis r3, lbl_8074A8D8@ha
    lis r26, lbl_8074AA58@ha
    lfs f20, lbl_80885378
    addi r21, r1, 0x150
    lfs f21, lbl_80885398
    addi r24, r1, 0x120
    lfd f22, lbl_8074A8D8@l(r3)
    addi r31, r1, 0x1a8
    lfs f23, lbl_8088539C
    addi r23, r1, 0xc0
    lfs f24, lbl_80885424
    addi r22, r1, 0x60
    lfs f25, lbl_808853E4
    addi r26, r26, lbl_8074AA58@l
    lfs f26, lbl_808853DC
    li r30, 0x0
    lfs f27, lbl_8088540C
    lis r25, 0x4330
    lfs f28, lbl_808853EC
    li r27, 0x0
    lfs f29, lbl_808853F4
    li r28, -0x1
    lfs f30, lbl_8088537C
    lfs f31, lbl_80885380
    lfs f19, lbl_80885428
lbl_fn_80349BA0_00000D94:
    lwz r3, 0x1a4(r1)
    xoris r0, r30, 0x8000
    stw r0, 0x1cc(r1)
    divwu r0, r30, r3
    stw r25, 0x1c8(r1)
    lfd f0, 0x1c8(r1)
    stfs f20, 0x24(r1)
    fsubs f0, f0, f22
    stfs f21, 0x28(r1)
    fadds f0, f23, f0
    mullw r0, r0, r3
    stfs f20, 0x2c(r1)
    lfs f1, 0x538(r29)
    fmuls f0, f0, f24
    stfs f20, 0xc(r1)
    subf r0, r0, r30
    fmsubs f0, f25, f0, f26
    slwi r0, r0, 2
    fcmpu cr0, f20, f1
    stfs f1, 0x10(r1)
    lwzx r20, r31, r0
    stfs f0, 0x14(r1)
    stfs f20, 0x17c(r1)
    stfs f20, 0x174(r1)
    stfs f20, 0x170(r1)
    stfs f20, 0x16c(r1)
    stfs f20, 0x168(r1)
    stfs f20, 0x160(r1)
    stfs f20, 0x15c(r1)
    stfs f20, 0x158(r1)
    stfs f20, 0x154(r1)
    stfs f21, 0x178(r1)
    stfs f21, 0x164(r1)
    stfs f21, 0x150(r1)
    beq lbl_fn_80349BA0_00000E6C
    addi r3, r1, 0xf0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r21
    addi r4, r1, 0xf0
    addi r5, r1, 0x120
    bl fn_805F89F0
    psq_l f1, 0x0(r24), 0, 0
    psq_l f2, 0x8(r24), 0, 0
    psq_l f3, 0x10(r24), 0, 0
    psq_l f4, 0x18(r24), 0, 0
    psq_l f5, 0x20(r24), 0, 0
    psq_l f6, 0x28(r24), 0, 0
    psq_st f1, 0x0(r21), 0, 0
    psq_st f2, 0x8(r21), 0, 0
    psq_st f3, 0x10(r21), 0, 0
    psq_st f4, 0x18(r21), 0, 0
    psq_st f5, 0x20(r21), 0, 0
    psq_st f6, 0x28(r21), 0, 0
lbl_fn_80349BA0_00000E6C:
    lfs f1, 0xc(r1)
    fcmpu cr0, f20, f1
    beq lbl_fn_80349BA0_00000EC4
    addi r3, r1, 0x90
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r21
    addi r4, r1, 0x90
    addi r5, r1, 0xc0
    bl fn_805F89F0
    psq_l f1, 0x0(r23), 0, 0
    psq_l f2, 0x8(r23), 0, 0
    psq_l f3, 0x10(r23), 0, 0
    psq_l f4, 0x18(r23), 0, 0
    psq_l f5, 0x20(r23), 0, 0
    psq_l f6, 0x28(r23), 0, 0
    psq_st f1, 0x0(r21), 0, 0
    psq_st f2, 0x8(r21), 0, 0
    psq_st f3, 0x10(r21), 0, 0
    psq_st f4, 0x18(r21), 0, 0
    psq_st f5, 0x20(r21), 0, 0
    psq_st f6, 0x28(r21), 0, 0
lbl_fn_80349BA0_00000EC4:
    lfs f1, 0x14(r1)
    fcmpu cr0, f20, f1
    beq lbl_fn_80349BA0_00000F1C
    addi r3, r1, 0x30
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r21
    addi r4, r1, 0x30
    addi r5, r1, 0x60
    bl fn_805F89F0
    psq_l f1, 0x0(r22), 0, 0
    psq_l f2, 0x8(r22), 0, 0
    psq_l f3, 0x10(r22), 0, 0
    psq_l f4, 0x18(r22), 0, 0
    psq_l f5, 0x20(r22), 0, 0
    psq_l f6, 0x28(r22), 0, 0
    psq_st f1, 0x0(r21), 0, 0
    psq_st f2, 0x8(r21), 0, 0
    psq_st f3, 0x10(r21), 0, 0
    psq_st f4, 0x18(r21), 0, 0
    psq_st f5, 0x20(r21), 0, 0
    psq_st f6, 0x28(r21), 0, 0
lbl_fn_80349BA0_00000F1C:
    addi r4, r1, 0x24
    addi r3, r1, 0x150
    mr r5, r4
    bl fn_805F93C0
    addi r4, r26, 0x3af
    addi r3, r29, 0xb0
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80349BA0_00000F4C
    li r3, 0x0
    b lbl_fn_80349BA0_00000F58
lbl_fn_80349BA0_00000F4C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r29)
    add r3, r3, r0
lbl_fn_80349BA0_00000F58:
    lfs f0, 0x2c(r3)
    lfs f7, 0x1c(r3)
    lfs f8, 0xc(r3)
    stfs f8, 0x18(r1)
    lwz r3, lbl_8087F048
    stfs f7, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f27, 0x188(r1)
    stw r27, 0x19c(r1)
    stw r28, 0x1a0(r1)
    stw r20, 0x180(r1)
    stfs f28, 0x198(r1)
    stfs f29, 0x184(r1)
    stfs f30, 0x18c(r1)
    stfs f31, 0x194(r1)
    stfs f19, 0x190(r1)
    bl fn_800F8548
    stw r3, 0x1a0(r1)
    mr r4, r29
    lwz r3, lbl_8087F048
    addi r6, r1, 0x18
    lwz r5, 0x1540(r29)
    addi r7, r1, 0x24
    lfs f1, lbl_80885378
    addi r8, r1, 0x180
    lfs f2, lbl_80885398
    li r9, 0x104
    li r10, 0x0
    bl fn_800F8574
    addi r30, r30, 0x1
    cmpwi r30, 0x8
    blt lbl_fn_80349BA0_00000D94
    lis r4, lbl_8074AA58@ha
    lfs f1, lbl_80885398
    addi r4, r4, lbl_8074AA58@l
    addi r3, r1, 0x8
    addi r4, r4, 0x3d8
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, 0x14b4(r29)
    addi r0, r3, 0x1
    stw r0, 0x14b4(r29)
    b lbl_fn_80349BA0_00001120
lbl_fn_80349BA0_00001014:
    lfs f19, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f19, f1
    cror eq, gt, eq
    bne lbl_fn_80349BA0_00001120
    li r30, 0x0
    stw r30, 0x14b4(r29)
    stw r30, 0x14b8(r29)
    stw r30, 0x14c0(r29)
    stw r30, 0x17e8(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    mr r4, r29
    li r5, 0x3ea
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x3ed
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x3ef
    li r6, 0x1
    bl fn_80239DAC
    bl fn_80680CF8
    lis r4, 0x8889
    lwz r0, 0x14c0(r29)
    subi r5, r4, 0x7777
    mulhw r5, r5, r3
    li r4, 0x3
    add r5, r5, r3
    srawi r5, r5, 5
    srwi r6, r5, 31
    add r5, r5, r6
    mulli r5, r5, 0x3c
    subf r5, r5, r3
    mr r3, r29
    subfic r5, r5, 0x1e
    add r0, r0, r5
    stw r0, 0x14c0(r29)
    bl fn_8016E970
    lfs f0, lbl_80885398
    li r0, 0x1
    stw r30, 0x58c(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_80885378
    li r4, 0x0
    stw r0, 0x3fc(r29)
    li r5, 0x2
    lfs f2, lbl_808853C4
    li r6, 0x1
    stfs f0, 0x2fc(r29)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r29)
    bl fn_80097C08
lbl_fn_80349BA0_00001120:
    addi r11, r1, 0x200
    psq_l f31, 0x2c8(r1), 0, 0
    lfd f31, 0x2c0(r1)
    psq_l f30, 0x2b8(r1), 0, 0
    lfd f30, 0x2b0(r1)
    psq_l f29, 0x2a8(r1), 0, 0
    lfd f29, 0x2a0(r1)
    psq_l f28, 0x298(r1), 0, 0
    lfd f28, 0x290(r1)
    psq_l f27, 0x288(r1), 0, 0
    lfd f27, 0x280(r1)
    psq_l f26, 0x278(r1), 0, 0
    lfd f26, 0x270(r1)
    psq_l f25, 0x268(r1), 0, 0
    lfd f25, 0x260(r1)
    psq_l f24, 0x258(r1), 0, 0
    lfd f24, 0x250(r1)
    psq_l f23, 0x248(r1), 0, 0
    lfd f23, 0x240(r1)
    psq_l f22, 0x238(r1), 0, 0
    lfd f22, 0x230(r1)
    psq_l f21, 0x228(r1), 0, 0
    lfd f21, 0x220(r1)
    psq_l f20, 0x218(r1), 0, 0
    lfd f20, 0x210(r1)
    psq_l f19, 0x208(r1), 0, 0
    lfd f19, 0x200(r1)
    bl _restgpr_20
    lwz r0, 0x2d4(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}

asm void fn_8034A194(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stfd f29, 0xe0(r1)
    psq_st f29, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    mr r31, r3
    stw r30, 0xd8(r1)
    lwz r0, 0x14b4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8034A194_00001514
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_8088542C
    fcmpo cr0, f3, f0
    bge lbl_fn_8034A194_00001490
    lwz r5, 0x14b0(r3)
    addi r4, r1, 0x14
    lfs f0, 0x530(r3)
    addi r30, r1, 0x8
    lfs f3, 0x530(r5)
    lfs f5, 0x52c(r5)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x528(r5)
    lfs f0, 0x528(r3)
    fsubs f5, f5, f4
    lfs f31, lbl_80885398
    fsubs f4, f3, f0
    stfs f5, 0x18(r1)
    frsp f3, f2
    lfs f0, lbl_808853D8
    stfs f4, 0x14(r1)
    fabs f4, f3
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    frsp f4, f4
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x10(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_8034A194_00001274
    lfs f3, 0x8(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_8034A194_00001268
    lfs f0, lbl_808853DC
    b lbl_fn_8034A194_0000126C
lbl_fn_8034A194_00001268:
    lfs f0, lbl_808853E0
lbl_fn_8034A194_0000126C:
    stfs f0, 0x24(r1)
    b lbl_fn_8034A194_00001288
lbl_fn_8034A194_00001274:
    fmr f2, f3
    lfs f1, 0x8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x24(r1)
lbl_fn_8034A194_00001288:
    lfs f0, 0x24(r1)
    addi r3, r1, 0xa8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885378
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
    lfs f30, 0xc4(r1)
    lfs f29, 0xb4(r1)
    lfs f0, lbl_80885398
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x10(r1)
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
    stfs f29, 0x38(r1)
    stfs f30, 0x3c(r1)
    stfs f13, 0x40(r1)
    stfs f29, 0x74(r1)
    stfs f30, 0x84(r1)
    stfs f13, 0x94(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F9750
    lfs f2, 0x34(r1)
    lfs f0, lbl_808853D8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8034A194_000013A4
    lfs f3, 0x30(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_8034A194_00001394
    lfs f0, lbl_808853DC
    b lbl_fn_8034A194_00001398
lbl_fn_8034A194_00001394:
    lfs f0, lbl_808853E0
lbl_fn_8034A194_00001398:
    fneg f0, f0
    stfs f0, 0x20(r1)
    b lbl_fn_8034A194_000013B8
lbl_fn_8034A194_000013A4:
    lfs f1, 0x30(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x20(r1)
lbl_fn_8034A194_000013B8:
    addi r3, r1, 0x20
    lfs f3, lbl_80885378
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8074A8E0@ha
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f3
    lfs f0, 0x538(r31)
    lfs f29, 0xc(r1)
    stfs f2, 0x10(r1)
    fsubs f1, f29, f0
    lfd f2, lbl_8074A8E0@l(r3)
    stfs f3, 0x28(r1)
    bl fn_8068AEA8
    frsp f5, f1
    lfs f0, lbl_808853E4
    fcmpo cr0, f5, f0
    ble lbl_fn_8034A194_00001404
    lfs f0, lbl_808853B8
    fsubs f5, f5, f0
lbl_fn_8034A194_00001404:
    lfs f0, lbl_808853E8
    fcmpo cr0, f5, f0
    bge lbl_fn_8034A194_00001418
    lfs f0, lbl_808853B8
    fadds f5, f5, f0
lbl_fn_8034A194_00001418:
    lfs f3, lbl_808853EC
    lfs f0, lbl_80885378
    fmuls f3, f3, f31
    fcmpo cr0, f5, f0
    bge lbl_fn_8034A194_00001434
    fneg f4, f5
    b lbl_fn_8034A194_00001438
lbl_fn_8034A194_00001434:
    fmr f4, f5
lbl_fn_8034A194_00001438:
    lfs f0, lbl_808853F0
    fmuls f3, f0, f3
    fcmpo cr0, f4, f3
    cror eq, lt, eq
    bne lbl_fn_8034A194_00001464
    lfs f1, lbl_80885378
    addi r3, r31, 0xb0
    li r4, 0x1
    bl fn_80097CCC
    stfs f29, 0x538(r31)
    b lbl_fn_8034A194_00001490
lbl_fn_8034A194_00001464:
    lfs f0, lbl_80885378
    fcmpo cr0, f5, f0
    cror eq, lt, eq
    bne lbl_fn_8034A194_00001484
    lfs f0, 0x538(r31)
    fsubs f0, f0, f3
    stfs f0, 0x538(r31)
    b lbl_fn_8034A194_00001490
lbl_fn_8034A194_00001484:
    lfs f0, 0x538(r31)
    fadds f0, f0, f3
    stfs f0, 0x538(r31)
lbl_fn_8034A194_00001490:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80885430
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8034A194_00001620
    lwz r3, lbl_8087F048
    bl fn_800F8548
    mr r8, r3
    lwz r3, lbl_8087F048
    lwz r7, 0x1548(r31)
    mr r6, r31
    lfs f1, lbl_80885378
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    lwz r5, lbl_8087F430
    li r0, 0xa
    lfs f0, lbl_80885398
    lwz r3, 0x96c(r5)
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    subf r3, r4, r3
    stw r3, 0x96c(r5)
    stw r0, 0x970(r5)
    stfs f0, 0x974(r5)
    stfs f0, 0x978(r5)
    lwz r3, 0x14b4(r31)
    addi r0, r3, 0x1
    stw r0, 0x14b4(r31)
    b lbl_fn_8034A194_00001620
lbl_fn_8034A194_00001514:
    lfs f29, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f29, f1
    cror eq, gt, eq
    bne lbl_fn_8034A194_00001620
    li r30, 0x0
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    stw r30, 0x14c0(r31)
    stw r30, 0x17e8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x3ea
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ed
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ef
    li r6, 0x1
    bl fn_80239DAC
    bl fn_80680CF8
    lis r4, 0x8889
    lwz r0, 0x14c0(r31)
    subi r5, r4, 0x7777
    mulhw r5, r5, r3
    li r4, 0x3
    add r5, r5, r3
    srawi r5, r5, 5
    srwi r6, r5, 31
    add r5, r5, r6
    mulli r5, r5, 0x3c
    subf r5, r5, r3
    mr r3, r31
    subfic r5, r5, 0x1e
    add r0, r0, r5
    stw r0, 0x14c0(r31)
    bl fn_8016E970
    lfs f0, lbl_80885398
    li r0, 0x1
    stw r30, 0x58c(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80885378
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x2
    lfs f2, lbl_808853C4
    li r6, 0x1
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
lbl_fn_8034A194_00001620:
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    psq_l f29, 0xe8(r1), 0, 0
    lfd f29, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8034A644(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    stfd f31, 0x1d0(r1)
    psq_st f31, 0x1d8(r1), 0, 0
    stfd f30, 0x1c0(r1)
    psq_st f30, 0x1c8(r1), 0, 0
    stfd f29, 0x1b0(r1)
    psq_st f29, 0x1b8(r1), 0, 0
    stw r31, 0x1ac(r1)
    mr r31, r3
    stw r30, 0x1a8(r1)
    lwz r0, 0x14b4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8034A644_000019C8
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_808853AC
    fcmpo cr0, f3, f0
    bge lbl_fn_8034A644_00001940
    lwz r5, 0x14b0(r3)
    addi r4, r1, 0x74
    lfs f0, 0x530(r3)
    addi r30, r1, 0x68
    lfs f3, 0x530(r5)
    lfs f5, 0x52c(r5)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x528(r5)
    lfs f0, 0x528(r3)
    fsubs f5, f5, f4
    lfs f31, lbl_80885398
    fsubs f4, f3, f0
    stfs f5, 0x78(r1)
    frsp f3, f2
    lfs f0, lbl_808853D8
    stfs f4, 0x74(r1)
    fabs f4, f3
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x7c(r1)
    frsp f4, f4
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x70(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_8034A644_00001724
    lfs f3, 0x68(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_8034A644_00001718
    lfs f0, lbl_808853DC
    b lbl_fn_8034A644_0000171C
lbl_fn_8034A644_00001718:
    lfs f0, lbl_808853E0
lbl_fn_8034A644_0000171C:
    stfs f0, 0x84(r1)
    b lbl_fn_8034A644_00001738
lbl_fn_8034A644_00001724:
    fmr f2, f3
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x84(r1)
lbl_fn_8034A644_00001738:
    lfs f0, 0x84(r1)
    addi r3, r1, 0x178
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885378
    addi r4, r1, 0x8c
    lfs f4, 0x180(r1)
    mr r5, r4
    lfs f5, 0x17c(r1)
    addi r3, r1, 0x138
    lfs f6, 0x178(r1)
    lfs f7, 0x190(r1)
    lfs f8, 0x18c(r1)
    lfs f9, 0x188(r1)
    lfs f10, 0x1a0(r1)
    lfs f11, 0x19c(r1)
    lfs f12, 0x198(r1)
    lfs f13, 0x1a4(r1)
    lfs f30, 0x194(r1)
    lfs f29, 0x184(r1)
    lfs f0, lbl_80885398
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x70(r1)
    stfs f3, 0x168(r1)
    stfs f3, 0x16c(r1)
    stfs f3, 0x170(r1)
    stfs f0, 0x174(r1)
    stfs f6, 0xbc(r1)
    stfs f5, 0xc0(r1)
    stfs f4, 0xc4(r1)
    stfs f6, 0x138(r1)
    stfs f5, 0x13c(r1)
    stfs f4, 0x140(r1)
    stfs f9, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f7, 0xb8(r1)
    stfs f9, 0x148(r1)
    stfs f8, 0x14c(r1)
    stfs f7, 0x150(r1)
    stfs f12, 0xa4(r1)
    stfs f11, 0xa8(r1)
    stfs f10, 0xac(r1)
    stfs f12, 0x158(r1)
    stfs f11, 0x15c(r1)
    stfs f10, 0x160(r1)
    stfs f29, 0x98(r1)
    stfs f30, 0x9c(r1)
    stfs f13, 0xa0(r1)
    stfs f29, 0x144(r1)
    stfs f30, 0x154(r1)
    stfs f13, 0x164(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x94(r1)
    bl fn_805F9750
    lfs f2, 0x94(r1)
    lfs f0, lbl_808853D8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8034A644_00001854
    lfs f3, 0x90(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_8034A644_00001844
    lfs f0, lbl_808853DC
    b lbl_fn_8034A644_00001848
lbl_fn_8034A644_00001844:
    lfs f0, lbl_808853E0
lbl_fn_8034A644_00001848:
    fneg f0, f0
    stfs f0, 0x80(r1)
    b lbl_fn_8034A644_00001868
lbl_fn_8034A644_00001854:
    lfs f1, 0x90(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x80(r1)
lbl_fn_8034A644_00001868:
    addi r3, r1, 0x80
    lfs f3, lbl_80885378
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8074A8E0@ha
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f3
    lfs f0, 0x538(r31)
    lfs f29, 0x6c(r1)
    stfs f2, 0x70(r1)
    fsubs f1, f29, f0
    lfd f2, lbl_8074A8E0@l(r3)
    stfs f3, 0x88(r1)
    bl fn_8068AEA8
    frsp f5, f1
    lfs f0, lbl_808853E4
    fcmpo cr0, f5, f0
    ble lbl_fn_8034A644_000018B4
    lfs f0, lbl_808853B8
    fsubs f5, f5, f0
lbl_fn_8034A644_000018B4:
    lfs f0, lbl_808853E8
    fcmpo cr0, f5, f0
    bge lbl_fn_8034A644_000018C8
    lfs f0, lbl_808853B8
    fadds f5, f5, f0
lbl_fn_8034A644_000018C8:
    lfs f3, lbl_808853EC
    lfs f0, lbl_80885378
    fmuls f3, f3, f31
    fcmpo cr0, f5, f0
    bge lbl_fn_8034A644_000018E4
    fneg f4, f5
    b lbl_fn_8034A644_000018E8
lbl_fn_8034A644_000018E4:
    fmr f4, f5
lbl_fn_8034A644_000018E8:
    lfs f0, lbl_808853F0
    fmuls f3, f0, f3
    fcmpo cr0, f4, f3
    cror eq, lt, eq
    bne lbl_fn_8034A644_00001914
    lfs f1, lbl_80885378
    addi r3, r31, 0xb0
    li r4, 0x1
    bl fn_80097CCC
    stfs f29, 0x538(r31)
    b lbl_fn_8034A644_00001940
lbl_fn_8034A644_00001914:
    lfs f0, lbl_80885378
    fcmpo cr0, f5, f0
    cror eq, lt, eq
    bne lbl_fn_8034A644_00001934
    lfs f0, 0x538(r31)
    fsubs f0, f0, f3
    stfs f0, 0x538(r31)
    b lbl_fn_8034A644_00001940
lbl_fn_8034A644_00001934:
    lfs f0, 0x538(r31)
    fadds f0, f0, f3
    stfs f0, 0x538(r31)
lbl_fn_8034A644_00001940:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80885434
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8034A644_00001E24
    lwz r3, lbl_8087F048
    bl fn_800F8548
    mr r8, r3
    lwz r3, lbl_8087F048
    lwz r7, 0x1544(r31)
    mr r6, r31
    lfs f1, lbl_80885378
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    lwz r5, lbl_8087F430
    li r0, 0xa
    lfs f3, lbl_80885438
    lwz r3, 0x96c(r5)
    lfs f0, lbl_8088543C
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    subf r3, r4, r3
    stw r3, 0x96c(r5)
    stw r0, 0x970(r5)
    stfs f3, 0x974(r5)
    stfs f0, 0x978(r5)
    lwz r3, 0x14b4(r31)
    addi r0, r3, 0x1
    stw r0, 0x14b4(r31)
    b lbl_fn_8034A644_00001E24
lbl_fn_8034A644_000019C8:
    cmpwi r0, 0x1
    bne lbl_fn_8034A644_00001D18
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_80885440
    fcmpo cr0, f3, f0
    ble lbl_fn_8034A644_00001C90
    lfs f0, lbl_80885444
    fcmpo cr0, f3, f0
    bge lbl_fn_8034A644_00001C90
    lwz r5, 0x14b0(r3)
    addi r4, r1, 0x14
    lfs f0, 0x530(r3)
    addi r30, r1, 0x8
    lfs f3, 0x530(r5)
    lfs f5, 0x52c(r5)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x528(r5)
    lfs f0, 0x528(r3)
    fsubs f5, f5, f4
    lfs f31, lbl_80885398
    fsubs f4, f3, f0
    stfs f5, 0x18(r1)
    frsp f3, f2
    lfs f0, lbl_808853D8
    stfs f4, 0x14(r1)
    fabs f4, f3
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    frsp f4, f4
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x10(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_8034A644_00001A74
    lfs f3, 0x8(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_8034A644_00001A68
    lfs f0, lbl_808853DC
    b lbl_fn_8034A644_00001A6C
lbl_fn_8034A644_00001A68:
    lfs f0, lbl_808853E0
lbl_fn_8034A644_00001A6C:
    stfs f0, 0x24(r1)
    b lbl_fn_8034A644_00001A88
lbl_fn_8034A644_00001A74:
    fmr f2, f3
    lfs f1, 0x8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x24(r1)
lbl_fn_8034A644_00001A88:
    lfs f0, 0x24(r1)
    addi r3, r1, 0x108
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885378
    addi r4, r1, 0x2c
    lfs f4, 0x110(r1)
    mr r5, r4
    lfs f5, 0x10c(r1)
    addi r3, r1, 0xc8
    lfs f6, 0x108(r1)
    lfs f7, 0x120(r1)
    lfs f8, 0x11c(r1)
    lfs f9, 0x118(r1)
    lfs f10, 0x130(r1)
    lfs f11, 0x12c(r1)
    lfs f12, 0x128(r1)
    lfs f13, 0x134(r1)
    lfs f29, 0x124(r1)
    lfs f30, 0x114(r1)
    lfs f0, lbl_80885398
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x10(r1)
    stfs f3, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f3, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f6, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f4, 0x64(r1)
    stfs f6, 0xc8(r1)
    stfs f5, 0xcc(r1)
    stfs f4, 0xd0(r1)
    stfs f9, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f7, 0x58(r1)
    stfs f9, 0xd8(r1)
    stfs f8, 0xdc(r1)
    stfs f7, 0xe0(r1)
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f10, 0x4c(r1)
    stfs f12, 0xe8(r1)
    stfs f11, 0xec(r1)
    stfs f10, 0xf0(r1)
    stfs f30, 0x38(r1)
    stfs f29, 0x3c(r1)
    stfs f13, 0x40(r1)
    stfs f30, 0xd4(r1)
    stfs f29, 0xe4(r1)
    stfs f13, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F9750
    lfs f2, 0x34(r1)
    lfs f0, lbl_808853D8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8034A644_00001BA4
    lfs f3, 0x30(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_8034A644_00001B94
    lfs f0, lbl_808853DC
    b lbl_fn_8034A644_00001B98
lbl_fn_8034A644_00001B94:
    lfs f0, lbl_808853E0
lbl_fn_8034A644_00001B98:
    fneg f0, f0
    stfs f0, 0x20(r1)
    b lbl_fn_8034A644_00001BB8
lbl_fn_8034A644_00001BA4:
    lfs f1, 0x30(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x20(r1)
lbl_fn_8034A644_00001BB8:
    addi r3, r1, 0x20
    lfs f3, lbl_80885378
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8074A8E0@ha
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f3
    lfs f0, 0x538(r31)
    lfs f29, 0xc(r1)
    stfs f2, 0x10(r1)
    fsubs f1, f29, f0
    lfd f2, lbl_8074A8E0@l(r3)
    stfs f3, 0x28(r1)
    bl fn_8068AEA8
    frsp f5, f1
    lfs f0, lbl_808853E4
    fcmpo cr0, f5, f0
    ble lbl_fn_8034A644_00001C04
    lfs f0, lbl_808853B8
    fsubs f5, f5, f0
lbl_fn_8034A644_00001C04:
    lfs f0, lbl_808853E8
    fcmpo cr0, f5, f0
    bge lbl_fn_8034A644_00001C18
    lfs f0, lbl_808853B8
    fadds f5, f5, f0
lbl_fn_8034A644_00001C18:
    lfs f3, lbl_808853EC
    lfs f0, lbl_80885378
    fmuls f3, f3, f31
    fcmpo cr0, f5, f0
    bge lbl_fn_8034A644_00001C34
    fneg f4, f5
    b lbl_fn_8034A644_00001C38
lbl_fn_8034A644_00001C34:
    fmr f4, f5
lbl_fn_8034A644_00001C38:
    lfs f0, lbl_808853F0
    fmuls f3, f0, f3
    fcmpo cr0, f4, f3
    cror eq, lt, eq
    bne lbl_fn_8034A644_00001C64
    lfs f1, lbl_80885378
    addi r3, r31, 0xb0
    li r4, 0x1
    bl fn_80097CCC
    stfs f29, 0x538(r31)
    b lbl_fn_8034A644_00001C90
lbl_fn_8034A644_00001C64:
    lfs f0, lbl_80885378
    fcmpo cr0, f5, f0
    cror eq, lt, eq
    bne lbl_fn_8034A644_00001C84
    lfs f0, 0x538(r31)
    fsubs f0, f0, f3
    stfs f0, 0x538(r31)
    b lbl_fn_8034A644_00001C90
lbl_fn_8034A644_00001C84:
    lfs f0, 0x538(r31)
    fadds f0, f0, f3
    stfs f0, 0x538(r31)
lbl_fn_8034A644_00001C90:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80885448
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8034A644_00001E24
    lwz r3, lbl_8087F048
    bl fn_800F8548
    mr r8, r3
    lwz r3, lbl_8087F048
    lwz r7, 0x1548(r31)
    mr r6, r31
    lfs f1, lbl_80885378
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    lwz r5, lbl_8087F430
    li r0, 0xa
    lfs f3, lbl_80885438
    lwz r3, 0x96c(r5)
    lfs f0, lbl_8088543C
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    subf r3, r4, r3
    stw r3, 0x96c(r5)
    stw r0, 0x970(r5)
    stfs f3, 0x974(r5)
    stfs f0, 0x978(r5)
    lwz r3, 0x14b4(r31)
    addi r0, r3, 0x1
    stw r0, 0x14b4(r31)
    b lbl_fn_8034A644_00001E24
lbl_fn_8034A644_00001D18:
    lfs f29, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f29, f1
    cror eq, gt, eq
    bne lbl_fn_8034A644_00001E24
    li r30, 0x0
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    stw r30, 0x14c0(r31)
    stw r30, 0x17e8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x3ea
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ed
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ef
    li r6, 0x1
    bl fn_80239DAC
    bl fn_80680CF8
    lis r4, 0x8889
    lwz r0, 0x14c0(r31)
    subi r5, r4, 0x7777
    mulhw r5, r5, r3
    li r4, 0x3
    add r5, r5, r3
    srawi r5, r5, 5
    srwi r6, r5, 31
    add r5, r5, r6
    mulli r5, r5, 0x3c
    subf r5, r5, r3
    mr r3, r31
    subfic r5, r5, 0x1e
    add r0, r0, r5
    stw r0, 0x14c0(r31)
    bl fn_8016E970
    lfs f0, lbl_80885398
    li r0, 0x1
    stw r30, 0x58c(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80885378
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x2
    lfs f2, lbl_808853C4
    li r6, 0x1
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
lbl_fn_8034A644_00001E24:
    lwz r0, 0x1e4(r1)
    psq_l f31, 0x1d8(r1), 0, 0
    lfd f31, 0x1d0(r1)
    psq_l f30, 0x1c8(r1), 0, 0
    lfd f30, 0x1c0(r1)
    psq_l f29, 0x1b8(r1), 0, 0
    lfd f29, 0x1b0(r1)
    lwz r31, 0x1ac(r1)
    lwz r30, 0x1a8(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}
