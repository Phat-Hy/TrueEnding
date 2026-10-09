#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8003EA3C(void);
extern void fn_80056DB8(void);
extern void fn_80059468(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_80092814(void);
extern void fn_80094958(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_80107A68(void);
extern void fn_80108F38(void);
extern void fn_8011FC10(void);
extern void fn_8013322C(void);
extern void fn_8013655C(void);
extern void fn_80145334(void);
extern void fn_8014C540(void);
extern void fn_8016E970(void);
extern void fn_80170A20(void);
extern void fn_801765D8(void);
extern void fn_8020A81C(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80237518(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_8023A8B4(void);
extern void fn_802C1FEC(void);
extern void fn_802C2BCC(void);
extern void fn_802C3154(void);
extern void fn_802C3EDC(void);
extern void fn_802C42D4(void);
extern void fn_802C4480(void);
extern void fn_802C4E80(void);
extern void fn_802C5F5C(void);
extern void fn_802C653C(void);
extern void fn_802C69BC(void);
extern void fn_802C6DF4(void);
extern void fn_8035B694(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_8037D4C0(void);
extern void fn_80473E8C(void);
extern void fn_804DA490(void);
extern void fn_805A3D00(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F9160(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);
extern void fn_806959D8(void);

/* External data declarations */
extern u8 jumptable_807866C0[];
extern u8 lbl_80746C38[];
extern u8 lbl_80746C90[];
extern u8 lbl_80777630[];
extern u8 lbl_80777668[];
extern u8 lbl_807866F0[];
extern u8 lbl_807C6B90[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C83A8[];

/* Small data declarations */
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F448;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_8088417C;
extern u32 lbl_80884180;
extern u32 lbl_80884190;
extern u32 lbl_80884194;
extern u32 lbl_80884198;
extern u32 lbl_8088419C;
extern u32 lbl_808841A4;
extern u32 lbl_808841DC;
extern u32 lbl_808841E0;
extern u32 lbl_808841E4;
extern u32 lbl_80884260;
extern u32 lbl_80884264;
extern u32 lbl_80884294;
extern u32 lbl_80884298;
extern u32 lbl_8088429C;
extern u32 lbl_808842A0;
extern u32 lbl_808842A4;
extern u32 lbl_808842A8;
extern u32 lbl_808842AC;
extern u32 lbl_808842B0;
extern u32 lbl_808842B4;
extern u32 lbl_808842B8;
extern u32 lbl_808842BC;
extern u32 lbl_808842C0;
extern u32 lbl_808842C4;
extern u32 lbl_808842C8;
extern u32 lbl_808842CC;
extern u32 lbl_808842D0;
extern u32 lbl_808842D4;
extern u32 lbl_808842D8;
extern u32 lbl_808842DC;
extern u32 lbl_808842E0;
extern u32 lbl_808842E4;
extern u32 lbl_808842E8;
extern u32 lbl_808842EC;
extern u32 lbl_808842F0;
extern u32 lbl_808842F4;
extern u32 lbl_808842F8;
extern u32 lbl_808842FC;
extern u32 lbl_80884300;
extern u32 lbl_80884304;
extern u32 lbl_80884308;
extern u32 lbl_8088430C;
extern u32 lbl_80884310;
extern u32 lbl_80884314;
extern u32 lbl_80884318;
extern u32 lbl_8088431C;
extern u32 lbl_80884320;
extern u32 lbl_80884324;
extern u32 lbl_80884328;
extern u32 lbl_8088432C;

/* Function declarations */
void fn_802C0058(void);
void fn_802C0458(void);
void fn_802C06B4(void);
void fn_802C0738(void);
void fn_802C07BC(void);
void fn_802C07F8(void);
void fn_802C0B20(void);
void fn_802C0B60(void);
void fn_802C0B68(void);
void fn_802C0C38(void);
void fn_802C0F28(void);
void fn_802C1208(void);

asm void fn_802C0058(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x104(r1)
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    mr r31, r3
    stw r30, 0xd8(r1)
    lfs f30, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_802C0058_000003D8
    addi r3, r31, 0x7d4
    li r4, 0x4000
    bl fn_8013322C
    lwz r3, lbl_8087F048
    addi r4, r31, 0xb0
    bl fn_80107A68
    lwz r0, 0x14f4(r31)
    cmpwi r0, 0x4b0
    ble lbl_fn_802C0058_0000013C
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
    ble lbl_fn_802C0058_00000120
lbl_fn_802C0058_000000F8:
    lwz r3, 0x7c(r5)
    lwzx r0, r3, r6
    cmpwi r0, 0x1f4
    bne lbl_fn_802C0058_00000114
    mulli r0, r4, 0x28
    add r4, r3, r0
    b lbl_fn_802C0058_00000124
lbl_fn_802C0058_00000114:
    addi r6, r6, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_802C0058_000000F8
lbl_fn_802C0058_00000120:
    li r4, 0x0
lbl_fn_802C0058_00000124:
    psq_l f1, 0x4(r4), 0, 0
    addi r3, r31, 0x1514
    lfs f2, 0xc(r4)
    stfs f2, 0x151c(r31)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_802C0058_000003D8
lbl_fn_802C0058_0000013C:
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
    ble lbl_fn_802C0058_0000020C
    addi r3, r31, 0x14f8
    mr r4, r3
    bl fn_805F98D0
    b lbl_fn_802C0058_00000220
lbl_fn_802C0058_0000020C:
    lfs f3, lbl_80884190
    lfs f0, lbl_8088417C
    stfs f3, 0x14f8(r31)
    stfs f3, 0x14fc(r31)
    stfs f0, 0x1500(r31)
lbl_fn_802C0058_00000220:
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
    bge lbl_fn_802C0058_00000270
    lfs f3, 0x14(r1)
    lfs f0, lbl_80884190
    fcmpo cr0, f3, f0
    ble lbl_fn_802C0058_00000264
    lfs f0, lbl_808841E0
    b lbl_fn_802C0058_00000268
lbl_fn_802C0058_00000264:
    lfs f0, lbl_808841E4
lbl_fn_802C0058_00000268:
    stfs f0, 0x24(r1)
    b lbl_fn_802C0058_00000284
lbl_fn_802C0058_00000270:
    frsp f2, f2
    lfs f1, 0x14(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x24(r1)
lbl_fn_802C0058_00000284:
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
    psq_l f1, 0x0(r30), 0, 0
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
    bge lbl_fn_802C0058_000003A0
    lfs f3, 0x30(r1)
    lfs f0, lbl_80884190
    fcmpo cr0, f3, f0
    ble lbl_fn_802C0058_00000390
    lfs f0, lbl_808841E0
    b lbl_fn_802C0058_00000394
lbl_fn_802C0058_00000390:
    lfs f0, lbl_808841E4
lbl_fn_802C0058_00000394:
    fneg f0, f0
    stfs f0, 0x20(r1)
    b lbl_fn_802C0058_000003B4
lbl_fn_802C0058_000003A0:
    lfs f1, 0x30(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x20(r1)
lbl_fn_802C0058_000003B4:
    lfs f2, lbl_80884190
    addi r3, r1, 0x20
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x28(r1)
    stfs f2, 0x1c(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
lbl_fn_802C0058_000003D8:
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

asm void fn_802C0458(void)
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
    lwz r0, 0x2dc(r3)
    cmpwi r0, 0x168
    bne lbl_fn_802C0458_000005A4
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_80884294
    lfs f10, lbl_8088417C
    fdivs f0, f3, f0
    fcmpo cr0, f10, f0
    bge lbl_fn_802C0458_0000044C
    b lbl_fn_802C0458_00000450
lbl_fn_802C0458_0000044C:
    fmr f10, f0
lbl_fn_802C0458_00000450:
    lfs f0, 0x1518(r3)
    addi r5, r1, 0x28
    lfs f6, 0x150c(r3)
    li r4, 0x0
    lfs f3, 0x1514(r3)
    fsubs f12, f0, f6
    lfs f5, 0x1508(r3)
    lfs f0, lbl_80884194
    fsubs f11, f3, f5
    lfs f3, 0x151c(r3)
    fmuls f9, f12, f10
    fsubs f4, f10, f0
    lfs f7, 0x1510(r3)
    fmuls f8, f11, f10
    fadds f6, f9, f6
    lfs f0, lbl_80884180
    fsubs f13, f3, f7
    fadds f5, f8, f5
    stfs f6, 0x2c(r1)
    fmuls f4, f4, f4
    stfs f5, 0x28(r1)
    fmuls f10, f13, f10
    lfs f3, lbl_80884298
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x528(r3), 0, 0
    fmadds f3, f3, f4, f0
    fadds f2, f10, f7
    lfs f31, 0x2e4(r3)
    lfs f0, 0x52c(r3)
    stfs f11, 0x1c(r1)
    fadds f0, f0, f3
    stfs f12, 0x20(r1)
    stfs f13, 0x24(r1)
    stfs f8, 0x10(r1)
    stfs f9, 0x14(r1)
    stfs f10, 0x18(r1)
    stfs f2, 0x30(r1)
    stfs f2, 0x530(r3)
    stfs f0, 0x52c(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802C0458_00000524
    lfs f1, lbl_80884190
    addi r3, r29, 0xb0
    lfs f2, lbl_8088419C
    li r4, 0x0
    li r5, 0x169
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_802C0458_00000524:
    lwz r0, 0x14dc(r29)
    cmpwi r0, 0x0
    bne lbl_fn_802C0458_00000638
    lfs f3, 0x2e4(r29)
    lfs f0, lbl_8088429C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802C0458_00000638
    lwz r30, lbl_8087F048
    mr r3, r30
    bl fn_800F8548
    mr r31, r3
    li r3, 0x5c1
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_80884190
    mr r5, r3
    stw r0, 0xc(r1)
    mr r3, r30
    lfs f2, lbl_8088417C
    mr r4, r29
    mr r6, r31
    addi r7, r29, 0x1514
    addi r8, r29, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lwz r3, 0x14dc(r29)
    addi r0, r3, 0x1
    stw r0, 0x14dc(r29)
    b lbl_fn_802C0458_00000638
lbl_fn_802C0458_000005A4:
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802C0458_00000638
    li r31, 0x0
    stw r31, 0x14dc(r29)
    stw r31, 0x14e0(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_8088417C
    li r4, 0x11
    stw r3, 0x590(r29)
    li r0, 0x1
    lfs f1, lbl_80884190
    addi r3, r29, 0xb0
    stw r4, 0x58c(r29)
    li r4, 0x0
    lfs f2, lbl_80884198
    li r5, 0x165
    stw r31, 0x14f0(r29)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stw r31, 0x14f4(r29)
    stw r0, 0x3fc(r29)
    stfs f0, 0x2fc(r29)
    bl fn_80097C08
    lfs f0, lbl_8088417C
    stfs f0, 0x2e8(r29)
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_802C0458_00000638
    li r4, 0x2
    bl fn_804DA490
lbl_fn_802C0458_00000638:
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

asm void fn_802C06B4(void)
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
    bne lbl_fn_802C06B4_000006C0
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
lbl_fn_802C06B4_000006C0:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802C0738(void)
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
    bne lbl_fn_802C0738_00000744
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
lbl_fn_802C0738_00000744:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802C07BC(void)
{
    nofralloc
    lwz r0, 0x58c(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x14bc(r3)
    stw r0, 0x4(r4)
    lwz r0, 0x1900(r3)
    sth r0, 0x8(r4)
    lwz r0, 0x1904(r3)
    sth r0, 0xa(r4)
    lwz r0, 0x14f0(r3)
    stb r0, 0xc(r4)
    lwz r0, 0x1908(r3)
    stb r0, 0xd(r4)
    lwz r0, 0x1520(r3)
    sth r0, 0xe(r4)
    blr
}

asm void fn_802C07F8(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_26
    lwz r5, 0x0(r4)
    mr r30, r3
    mr r31, r4
    cmpwi r5, 0x2
    bne lbl_fn_802C07F8_00000944
    lwz r0, 0x1914(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802C07F8_00000944
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x14dc(r30)
    stw r0, 0x14e0(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0x2
    mr r3, r30
    li r4, 0x6
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f3, lbl_8088417C
    li r0, 0x17
    lfs f0, lbl_80884194
    li r28, 0x1
    stw r0, 0x560(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80884190
    li r4, 0x0
    stw r28, 0x3fc(r30)
    li r5, 0x2e
    lfs f2, lbl_80884198
    li r6, 0x0
    stfs f3, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80884190
    li r29, -0x1
    lfs f1, lbl_8088417C
    addi r4, r30, 0x191c
    stfs f0, 0x20(r1)
    addi r5, r30, 0xb0
    lwz r3, lbl_8087F3C0
    addi r7, r1, 0x2c
    stfs f0, 0x24(r1)
    addi r8, r1, 0x20
    addi r9, r1, 0x10
    li r6, 0x0
    stfs f0, 0x28(r1)
    li r10, -0x1
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stw r29, 0x8(r1)
    stw r28, 0xc(r1)
    bl fn_8023A8B4
    lis r3, lbl_807C7030@ha
    li r4, 0x65
    addi r3, r3, lbl_807C7030@l
    li r5, 0x1
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x57c(r30)
    psq_st f1, 0x574(r30), 0, 0
    lwz r3, lbl_8087F430
    bl fn_80370AE4
    lwz r3, lbl_8087F8A0
    lwz r26, lbl_8087F048
    lwz r27, 0x48(r3)
    mr r3, r26
    bl fn_800F8548
    mr r31, r3
    li r3, 0x5c3
    bl fn_80219E6C
    stw r29, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_80884190
    mr r3, r26
    stw r29, 0xc(r1)
    mr r4, r27
    lfs f2, lbl_8088417C
    mr r6, r31
    addi r7, r30, 0x528
    addi r8, r30, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    stw r28, 0x1914(r30)
    b lbl_fn_802C07F8_00000AB0
lbl_fn_802C07F8_00000944:
    lwz r4, lbl_8087F610
    cmpwi r4, 0x0
    beq lbl_fn_802C07F8_00000A70
    cmpwi r5, 0xc
    bne lbl_fn_802C07F8_00000964
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xc
    bne lbl_fn_802C07F8_00000978
lbl_fn_802C07F8_00000964:
    cmpwi r5, 0x11
    bne lbl_fn_802C07F8_00000984
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x11
    beq lbl_fn_802C07F8_00000984
lbl_fn_802C07F8_00000978:
    mr r3, r4
    li r4, 0x2
    bl fn_804DA490
lbl_fn_802C07F8_00000984:
    lbz r0, 0xd(r31)
    extsb. r0, r0
    beq lbl_fn_802C07F8_00000A2C
    lwz r0, 0x1908(r30)
    cmpwi r0, 0x0
    bne lbl_fn_802C07F8_00000A2C
    lwz r3, lbl_8087F610
    li r4, 0x5
    bl fn_804DA490
    lwz r0, 0x64(r1)
    li r5, 0x0
    li r4, -0x1
    stw r5, 0x48(r1)
    clrlwi r0, r0, 4
    li r3, 0x5c2
    stw r5, 0x4c(r1)
    stw r5, 0x50(r1)
    stw r5, 0x54(r1)
    stw r5, 0x58(r1)
    stw r4, 0x5c(r1)
    stw r0, 0x64(r1)
    stw r4, 0x60(r1)
    bl fn_80219E6C
    lis r8, lbl_807C6B90@ha
    mr r4, r3
    mr r5, r30
    mr r6, r30
    addi r3, r1, 0x48
    addi r8, r8, lbl_807C6B90@l
    li r7, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8003EA3C
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_802C07F8_00000A2C
    lfs f1, lbl_8088417C
    li r4, 0x8b8
    li r5, 0xf
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
lbl_fn_802C07F8_00000A2C:
    lwz r0, 0x0(r31)
    cmpwi r0, 0xf
    bne lbl_fn_802C07F8_00000A70
    lwz r0, 0x58c(r30)
    cmpwi r0, 0xf
    beq lbl_fn_802C07F8_00000A70
    lwz r12, 0x0(r30)
    mr r4, r30
    addi r3, r1, 0x38
    lwz r27, lbl_8087F048
    lwz r12, 0xac(r12)
    mtctr r12
    bctrl
    mr r3, r27
    addi r4, r1, 0x38
    li r5, 0x4000
    bl fn_80108F38
lbl_fn_802C07F8_00000A70:
    lbz r3, 0xc(r31)
    lbz r0, 0xd(r31)
    extsb r4, r3
    lwz r8, 0x0(r31)
    extsb r3, r0
    lwz r7, 0x4(r31)
    lha r6, 0x8(r31)
    lha r5, 0xa(r31)
    lha r0, 0xe(r31)
    stw r8, 0x58c(r30)
    stw r7, 0x14bc(r30)
    stw r6, 0x1900(r30)
    stw r5, 0x1904(r30)
    stw r4, 0x14f0(r30)
    stw r3, 0x1908(r30)
    stw r0, 0x1520(r30)
lbl_fn_802C07F8_00000AB0:
    addi r11, r1, 0x80
    bl _restgpr_26
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_802C0B20(void)
{
    nofralloc
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xa
    bne lbl_fn_802C0B20_00000B00
    lfs f1, 0x2e4(r3)
    lfs f0, lbl_808842A0
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_802C0B20_00000B00
    lfs f0, lbl_808842A4
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_802C0B20_00000B00
    li r3, 0x1
    blr
lbl_fn_802C0B20_00000B00:
    li r3, 0x0
    blr
}

asm void fn_802C0B60(void)
{
    nofralloc
    lfs f1, lbl_808841A4
    blr
}

asm void fn_802C0B68(void)
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
    beq lbl_fn_802C0B68_00000BC0
    addic. r0, r3, 0x1928
    beq lbl_fn_802C0B68_00000B5C
    lwz r4, 0x1928(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802C0B68_00000B5C
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802C0B68_00000B5C
    bl fn_800897D8
lbl_fn_802C0B68_00000B5C:
    addic. r31, r29, 0x191c
    beq lbl_fn_802C0B68_00000B7C
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802C0B68_00000B7C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802C0B68_00000B7C:
    lis r4, fn_80059468@ha
    addi r3, r29, 0x1538
    addi r4, r4, fn_80059468@l
    li r5, 0x58
    li r6, 0xb
    bl fn_806959D8
    addic. r3, r29, 0x14d4
    beq lbl_fn_802C0B68_00000BA4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802C0B68_00000BA4:
    mr r3, r29
    li r4, 0x0
    bl fn_805A3D00
    cmpwi r30, 0x0
    ble lbl_fn_802C0B68_00000BC0
    mr r3, r29
    bl dtor_80084684
lbl_fn_802C0B68_00000BC0:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802C0C38(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    stw r29, 0x84(r1)
    stw r28, 0x80(r1)
    mr r28, r3
    bl fn_8035B694
    lis r3, lbl_807866F0@ha
    li r30, 0x0
    addi r3, r3, lbl_807866F0@l
    stw r3, 0x0(r28)
    addi r3, r28, 0x156c
    stw r30, 0x14d0(r28)
    stw r30, 0x14d4(r28)
    stw r30, 0x14d8(r28)
    stw r30, 0x1524(r28)
    bl fn_80237518
    addi r3, r28, 0x1578
    bl fn_802377B8
    addi r31, r28, 0x1600
    li r0, -0x1
    stw r30, 0x1584(r28)
    mr r3, r31
    li r4, 0x0
    stw r30, 0x1588(r28)
    stw r30, 0x158c(r28)
    stw r30, 0x1590(r28)
    stw r30, 0x1594(r28)
    stw r30, 0x15c8(r28)
    stw r0, 0x15cc(r28)
    stw r30, 0x15f0(r28)
    stw r30, 0x15f4(r28)
    stw r30, 0x15f8(r28)
    stw r30, 0x15fc(r28)
    bl fn_80056DB8
    lis r3, lbl_80777668@ha
    addi r29, r28, 0x164c
    addi r3, r3, lbl_80777668@l
    stw r3, 0x0(r31)
    mr r3, r29
    li r4, 0x1
    bl fn_80056DB8
    lis r4, lbl_80777630@ha
    addi r3, r28, 0x16a4
    addi r4, r4, lbl_80777630@l
    stw r4, 0x0(r29)
    bl fn_802377B8
    addi r3, r28, 0x16b0
    bl fn_802377B8
    addi r3, r28, 0x16f4
    bl fn_80237518
    lwz r8, 0x12a4(r28)
    lis r31, lbl_80746C90@ha
    lwz r0, 0x958(r28)
    addi r3, r28, 0xb0
    oris r8, r8, 0x40
    stw r30, 0x1700(r28)
    lfs f1, lbl_808842A8
    ori r0, r0, 0x10
    lfs f0, lbl_808842AC
    addi r4, r31, lbl_80746C90@l
    stw r30, 0x170c(r28)
    addi r5, r1, 0x68
    addi r6, r1, 0x58
    addi r7, r1, 0x48
    stw r30, 0x1710(r28)
    stw r8, 0x12a4(r28)
    stw r0, 0x958(r28)
    stfs f1, 0x68(r1)
    stfs f1, 0x6c(r1)
    stfs f1, 0x70(r1)
    stfs f0, 0x74(r1)
    stfs f0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0xc(r1)
    stfs f1, 0x20(r1)
    stfs f0, 0x34(r1)
    bl fn_80094958
    addi r31, r31, lbl_80746C90@l
    addi r3, r28, 0xb0
    addi r4, r31, 0xd
    addi r5, r1, 0x68
    addi r6, r1, 0x58
    addi r7, r1, 0x48
    bl fn_80094958
    addi r3, r28, 0xb0
    addi r4, r31, 0x1a
    addi r5, r1, 0x68
    addi r6, r1, 0x58
    addi r7, r1, 0x48
    bl fn_80094958
    addi r3, r28, 0xb0
    addi r4, r31, 0x27
    addi r5, r1, 0x68
    addi r6, r1, 0x58
    addi r7, r1, 0x48
    bl fn_80094958
    addi r3, r28, 0x156c
    addi r4, r31, 0x34
    bl fn_80237654
    addi r3, r28, 0x1578
    addi r4, r31, 0x4d
    bl fn_8023780C
    addi r3, r28, 0x16a4
    addi r4, r31, 0x63
    bl fn_8023780C
    addi r3, r28, 0x16b0
    addi r4, r31, 0x78
    bl fn_8023780C
    lfs f1, lbl_808842A8
    addi r3, r28, 0x16f4
    lfs f0, lbl_808842AC
    addi r4, r31, 0x8e
    lfs f2, lbl_808842B0
    stw r30, 0x16bc(r28)
    stfs f2, 0x16c0(r28)
    stfs f1, 0x16f0(r28)
    stfs f1, 0x16e8(r28)
    stfs f1, 0x16e4(r28)
    stfs f1, 0x16e0(r28)
    stfs f1, 0x16dc(r28)
    stfs f1, 0x16d4(r28)
    stfs f1, 0x16d0(r28)
    stfs f1, 0x16cc(r28)
    stfs f1, 0x16c8(r28)
    stfs f0, 0x16ec(r28)
    stfs f0, 0x16d8(r28)
    stfs f0, 0x16c4(r28)
    bl fn_80237654
    lfs f9, lbl_808842B4
    li r0, 0x1
    lfs f8, lbl_808842B8
    li r4, 0xff
    lfs f7, lbl_808842BC
    li r5, 0x0
    lfs f6, lbl_808842C0
    lfs f5, lbl_808842C4
    lfs f4, lbl_808842C8
    lfs f3, lbl_808842CC
    lfs f2, lbl_808842D0
    lfs f1, lbl_808842D4
    lfs f0, lbl_808842D8
    stfs f9, 0x14bc(r28)
    stfs f8, 0x14c0(r28)
    stfs f7, 0x15d0(r28)
    stfs f6, 0x15d4(r28)
    stfs f5, 0x15d8(r28)
    stfs f4, 0x15dc(r28)
    stfs f3, 0x15e0(r28)
    stfs f2, 0x15e4(r28)
    stfs f1, 0x15e8(r28)
    stfs f0, 0x15ec(r28)
    stw r30, 0x15b0(r28)
    stw r0, 0x15b4(r28)
    stw r30, 0x15b8(r28)
    stw r30, 0x15bc(r28)
    stw r30, 0x15c0(r28)
    stw r30, 0x15c4(r28)
    lwz r3, lbl_8087F430
    bl fn_80370AE4
    lfs f0, lbl_808842DC
    addi r3, r31, 0xa4
    lwz r0, 0x5c(r28)
    stfs f0, 0x568(r28)
    stw r0, 0x1704(r28)
    bl fn_8020A81C
    lwz r0, 0x14a8(r28)
    stw r3, 0x1708(r28)
    mr r3, r28
    oris r0, r0, 0x8000
    stw r0, 0x14a8(r28)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_802C0F28(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_802C0F28_00001194
    addi r3, r31, 0x156c
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_802C0F28_00001194
    addi r3, r31, 0x1578
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802C0F28_00001194
    addi r3, r31, 0x16b0
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802C0F28_00001194
    addi r3, r31, 0x16a4
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802C0F28_00001194
    addi r3, r31, 0x16f4
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_802C0F28_00001194
    lwz r0, 0x170c(r31)
    lis r3, lbl_80746C90@ha
    addi r3, r3, lbl_80746C90@l
    cmpwi r0, 0x0
    addi r4, r3, 0xb3
    bne lbl_fn_802C0F28_00000F78
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802C0F28_00000F78
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x170c(r31)
    b lbl_fn_802C0F28_00000F7C
lbl_fn_802C0F28_00000F78:
    li r3, 0x0
lbl_fn_802C0F28_00000F7C:
    lis r30, lbl_80746C90@ha
    addi r5, r31, 0x1710
    addi r30, r30, lbl_80746C90@l
    li r6, 0x0
    addi r4, r30, 0xb9
    li r7, 0x0
    bl fn_80087994
    lwz r5, 0x7ec(r31)
    addi r4, r30, 0xc3
    lwz r0, 0x1654(r31)
    addi r3, r31, 0xb0
    ori r5, r5, 0x1c0
    lwz r6, 0xc10(r31)
    oris r7, r5, 0x1
    ori r0, r0, 0x3
    ori r7, r7, 0xc218
    lwz r5, 0x1608(r31)
    oris r8, r7, 0x380
    clrlwi r0, r0, 1
    rlwinm r7, r6, 0, 19, 17
    ori r6, r5, 0x3
    ori r8, r8, 0x401
    stw r8, 0x7ec(r31)
    li r5, 0x0
    stw r7, 0xc10(r31)
    stw r6, 0x1608(r31)
    stw r31, 0x160c(r31)
    stw r31, 0x1658(r31)
    stw r0, 0x1654(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C0F28_00001004
    li r4, 0x0
    b lbl_fn_802C0F28_00001010
lbl_fn_802C0F28_00001004:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802C0F28_00001010:
    lfs f4, 0x1c(r4)
    lis r3, lbl_80746C90@ha
    lfs f3, 0xc(r4)
    addi r7, r1, 0x8
    lfs f2, 0x2c(r4)
    addi r3, r3, lbl_80746C90@l
    lfs f0, lbl_808842E0
    addi r6, r31, 0x163c
    stfs f3, 0x8(r1)
    addi r4, r3, 0xc8
    addi r3, r31, 0xb0
    li r5, 0x0
    stfs f4, 0xc(r1)
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x1644(r31)
    stfs f0, 0x1648(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C0F28_0000106C
    li r4, 0x0
    b lbl_fn_802C0F28_00001078
lbl_fn_802C0F28_0000106C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802C0F28_00001078:
    lfs f4, 0x2c(r4)
    lis r3, lbl_80746C90@ha
    lfs f3, 0x1c(r4)
    addi r3, r3, lbl_80746C90@l
    lfs f0, 0xc(r4)
    addi r4, r3, 0xce
    stfs f0, 0x14(r1)
    addi r3, r31, 0xb0
    li r5, 0x0
    stfs f3, 0x18(r1)
    stfs f4, 0x1c(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C0F28_000010B8
    li r3, 0x0
    b lbl_fn_802C0F28_000010C4
lbl_fn_802C0F28_000010B8:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_802C0F28_000010C4:
    lfs f5, 0x2c(r3)
    addi r4, r1, 0x14
    lfs f4, 0x1c(r3)
    addi r6, r31, 0x1688
    lfs f3, 0xc(r3)
    addi r8, r1, 0x20
    lfs f2, 0x1c(r1)
    lis r3, lbl_80746C90@ha
    stfs f2, 0x1690(r31)
    fmr f2, f5
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r3, lbl_80746C90@l
    lfs f0, lbl_808842E4
    addi r4, r3, 0xd4
    stfs f3, 0x20(r1)
    addi r7, r31, 0x1694
    addi r3, r31, 0xb0
    stfs f4, 0x24(r1)
    li r5, 0x0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f5, 0x28(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x169c(r31)
    stfs f0, 0x16a0(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C0F28_0000113C
    li r3, 0x0
    b lbl_fn_802C0F28_00001148
lbl_fn_802C0F28_0000113C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_802C0F28_00001148:
    lfs f5, 0x1c(r3)
    addi r4, r1, 0x2c
    lfs f4, 0xc(r3)
    addi r5, r31, 0x148c
    lfs f2, 0x2c(r3)
    li r0, 0x1
    lfs f3, lbl_808842E8
    li r3, 0x1
    lfs f0, lbl_808842EC
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1494(r31)
    stfs f3, 0x1498(r31)
    stw r0, 0x10d0(r31)
    stfs f0, 0x56c(r31)
    b lbl_fn_802C0F28_00001198
lbl_fn_802C0F28_00001194:
    li r3, 0x0
lbl_fn_802C0F28_00001198:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802C1208(void)
{
    nofralloc
    stwu r1, -0x3a0(r1)
    mflr r0
    stw r0, 0x3a4(r1)
    addi r11, r1, 0x340
    stfd f31, 0x390(r1)
    psq_st f31, 0x398(r1), 0, 0
    stfd f30, 0x380(r1)
    psq_st f30, 0x388(r1), 0, 0
    stfd f29, 0x370(r1)
    psq_st f29, 0x378(r1), 0, 0
    stfd f28, 0x360(r1)
    psq_st f28, 0x368(r1), 0, 0
    stfd f27, 0x350(r1)
    psq_st f27, 0x358(r1), 0, 0
    stfd f26, 0x340(r1)
    psq_st f26, 0x348(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x15f0(r3)
    mr r30, r3
    lfs f0, lbl_808842EC
    cmpwi r0, 0x0
    stfs f0, 0x500(r3)
    bne lbl_fn_802C1208_00001264
    lis r27, lbl_80746C38@ha
    li r29, 0x0
    addi r27, r27, lbl_80746C38@l
lbl_fn_802C1208_00001218:
    mr r28, r27
    li r31, 0x0
lbl_fn_802C1208_00001220:
    lwz r3, lbl_8087F408
    lwz r4, 0x4(r28)
    bl fn_8011FC10
    cmpwi r3, 0x0
    beq lbl_fn_802C1208_00001238
    bl fn_801765D8
lbl_fn_802C1208_00001238:
    addi r31, r31, 0x1
    addi r28, r28, 0x4
    cmpwi r31, 0x3
    blt lbl_fn_802C1208_00001220
    addi r29, r29, 0x1
    addi r27, r27, 0x10
    cmpwi r29, 0x3
    blt lbl_fn_802C1208_00001218
    lwz r3, 0x15f0(r30)
    addi r0, r3, 0x1
    stw r0, 0x15f0(r30)
lbl_fn_802C1208_00001264:
    lwz r0, 0xd18(r30)
    cmpwi r0, 0x0
    beq lbl_fn_802C1208_00001278
    mr r3, r30
    bl fn_802C5F5C
lbl_fn_802C1208_00001278:
    lwz r0, 0xd18(r30)
    li r31, 0x0
    lwz r6, 0x1584(r30)
    lwz r4, 0x1590(r30)
    cmpwi r0, 0x0
    lwz r3, 0x15bc(r30)
    lwz r5, 0xd1c(r30)
    addi r4, r4, 0x1
    subi r0, r3, 0x1
    stw r6, 0x1588(r30)
    stw r5, 0x1584(r30)
    stw r4, 0x1590(r30)
    stw r0, 0x15bc(r30)
    beq lbl_fn_802C1208_000012B8
    cmpwi r5, 0x0
    bne lbl_fn_802C1208_000012C8
lbl_fn_802C1208_000012B8:
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_802C1208_00001C98
lbl_fn_802C1208_000012C8:
    beq lbl_fn_802C1208_00001C98
    lwz r0, 0x58c(r30)
    cmplwi r0, 0xb
    bgt lbl_fn_802C1208_00001C18
    lis r3, jumptable_807866C0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807866C0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r30
    bl fn_802C3EDC
    li r31, 0x1
    b lbl_fn_802C1208_00001C98
    mr r3, r30
    bl fn_802C42D4
    li r31, 0x1
    b lbl_fn_802C1208_00001C98
    lfs f26, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f26, f1
    cror eq, gt, eq
    bne lbl_fn_802C1208_00001368
    li r29, 0x0
    stw r29, 0x1590(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stw r29, 0x58c(r30)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x0
    bl fn_80239DAC
    b lbl_fn_802C1208_00001C98
lbl_fn_802C1208_00001368:
    lfs f7, 0x2e4(r30)
    lfs f0, lbl_808842F0
    fcmpo cr0, f0, f7
    cror eq, lt, eq
    bne lbl_fn_802C1208_000013A8
    lfs f0, lbl_808842F4
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_802C1208_000013A8
    lwz r4, 0x1528(r30)
    addi r3, r30, 0x14c4
    psq_l f1, 0x5f4(r4), 0, 0
    lfs f2, 0x5fc(r4)
    stfs f2, 0x14cc(r30)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_802C1208_00001C98
lbl_fn_802C1208_000013A8:
    lfs f7, 0x2e4(r30)
    lfs f0, lbl_808842F8
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_802C1208_00001C98
    lfs f0, lbl_808842FC
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_802C1208_00001C98
    addi r3, r30, 0x14c4
    li r0, 0x1
    lfs f2, 0x14cc(r30)
    addi r5, r1, 0x60
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r30
    stw r0, 0x14d0(r30)
    li r6, 0x1
    lwz r27, 0x1528(r30)
    psq_st f1, 0x0(r5), 0, 0
    li r5, 0x65
    lwz r3, lbl_8087F3C0
    stfs f2, 0x68(r1)
    bl fn_80239DAC
    lis r3, lbl_80746C90@ha
    li r4, 0x0
    li r0, 0x96
    stw r4, 0x14d4(r30)
    addi r3, r3, lbl_80746C90@l
    li r5, 0x0
    addi r4, r3, 0xdb
    stw r0, 0x14d8(r30)
    addi r3, r30, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C1208_0000143C
    li r5, 0x0
    b lbl_fn_802C1208_00001448
lbl_fn_802C1208_0000143C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r5, r3, r0
lbl_fn_802C1208_00001448:
    lfs f12, 0x2c(r5)
    addi r4, r1, 0xc0
    lfs f0, 0x68(r1)
    addi r3, r30, 0x14dc
    lfs f13, 0x1c(r5)
    addi r29, r1, 0xb4
    fsubs f30, f0, f12
    lfs f31, 0xc(r5)
    lfs f8, lbl_808842A8
    lfs f7, lbl_808842AC
    fmr f2, f30
    lfs f0, 0x64(r1)
    lfs f10, 0x60(r1)
    fsubs f29, f0, f13
    lfs f11, lbl_808842DC
    frsp f9, f2
    fsubs f10, f10, f31
    stfs f29, 0xc4(r1)
    lfs f0, lbl_80884300
    fmuls f2, f9, f11
    stfs f10, 0xc0(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    frsp f29, f2
    lfs f10, 0x14dc(r30)
    lfs f9, 0x14e0(r30)
    fabs f26, f29
    fmuls f10, f10, f11
    stfs f31, 0xcc(r1)
    fmuls f9, f9, f11
    frsp f11, f26
    stfs f10, 0x14dc(r30)
    stfs f9, 0x14e0(r30)
    fcmpo cr0, f11, f0
    psq_l f1, 0x0(r3), 0, 0
    stfs f13, 0xd0(r1)
    stfs f12, 0xd4(r1)
    stw r27, 0x1524(r30)
    stfs f30, 0xc8(r1)
    stfs f2, 0x14e4(r30)
    stfs f8, 0x1520(r30)
    stfs f8, 0x1518(r30)
    stfs f8, 0x1514(r30)
    stfs f8, 0x1510(r30)
    stfs f8, 0x150c(r30)
    stfs f8, 0x1504(r30)
    stfs f8, 0x1500(r30)
    stfs f8, 0x14fc(r30)
    stfs f8, 0x14f8(r30)
    stfs f7, 0x151c(r30)
    stfs f7, 0x1508(r30)
    stfs f7, 0x14f4(r30)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xbc(r1)
    bge lbl_fn_802C1208_00001544
    lfs f0, 0xb4(r1)
    fcmpo cr0, f0, f8
    ble lbl_fn_802C1208_00001538
    lfs f0, lbl_80884304
    b lbl_fn_802C1208_0000153C
lbl_fn_802C1208_00001538:
    lfs f0, lbl_80884308
lbl_fn_802C1208_0000153C:
    stfs f0, 0xac(r1)
    b lbl_fn_802C1208_00001558
lbl_fn_802C1208_00001544:
    fmr f2, f29
    lfs f1, 0xb4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xac(r1)
lbl_fn_802C1208_00001558:
    lfs f0, 0xac(r1)
    addi r3, r1, 0x2b8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_808842A8
    addi r4, r1, 0x9c
    lfs f26, 0x2c0(r1)
    mr r5, r4
    lfs f27, 0x2bc(r1)
    addi r3, r1, 0x2e8
    lfs f28, 0x2b8(r1)
    lfs f31, 0x2d0(r1)
    lfs f30, 0x2cc(r1)
    lfs f29, 0x2c8(r1)
    lfs f13, 0x2e0(r1)
    lfs f12, 0x2dc(r1)
    lfs f11, 0x2d8(r1)
    lfs f10, 0x2e4(r1)
    lfs f9, 0x2d4(r1)
    lfs f8, 0x2c4(r1)
    lfs f0, lbl_808842AC
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xbc(r1)
    stfs f7, 0x318(r1)
    stfs f7, 0x31c(r1)
    stfs f7, 0x320(r1)
    stfs f0, 0x324(r1)
    stfs f28, 0x6c(r1)
    stfs f27, 0x70(r1)
    stfs f26, 0x74(r1)
    stfs f28, 0x2e8(r1)
    stfs f27, 0x2ec(r1)
    stfs f26, 0x2f0(r1)
    stfs f29, 0x78(r1)
    stfs f30, 0x7c(r1)
    stfs f31, 0x80(r1)
    stfs f29, 0x2f8(r1)
    stfs f30, 0x2fc(r1)
    stfs f31, 0x300(r1)
    stfs f11, 0x84(r1)
    stfs f12, 0x88(r1)
    stfs f13, 0x8c(r1)
    stfs f11, 0x308(r1)
    stfs f12, 0x30c(r1)
    stfs f13, 0x310(r1)
    stfs f8, 0x90(r1)
    stfs f9, 0x94(r1)
    stfs f10, 0x98(r1)
    stfs f8, 0x2f4(r1)
    stfs f9, 0x304(r1)
    stfs f10, 0x314(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xa4(r1)
    bl fn_805F9750
    lfs f2, 0xa4(r1)
    lfs f0, lbl_80884300
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_802C1208_00001674
    lfs f7, 0xa0(r1)
    lfs f0, lbl_808842A8
    fcmpo cr0, f7, f0
    ble lbl_fn_802C1208_00001664
    lfs f0, lbl_80884304
    b lbl_fn_802C1208_00001668
lbl_fn_802C1208_00001664:
    lfs f0, lbl_80884308
lbl_fn_802C1208_00001668:
    fneg f0, f0
    stfs f0, 0xa8(r1)
    b lbl_fn_802C1208_00001688
lbl_fn_802C1208_00001674:
    lfs f1, 0xa0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xa8(r1)
lbl_fn_802C1208_00001688:
    lfs f2, lbl_808842A8
    addi r3, r1, 0xa8
    lfs f7, lbl_808842AC
    addi r28, r30, 0x14f4
    frsp f0, f2
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0xb0(r1)
    addi r27, r1, 0x168
    fcmpu cr0, f2, f0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xbc(r1)
    stfs f2, 0x194(r1)
    stfs f2, 0x18c(r1)
    stfs f2, 0x188(r1)
    stfs f2, 0x184(r1)
    stfs f2, 0x180(r1)
    stfs f2, 0x178(r1)
    stfs f2, 0x174(r1)
    stfs f2, 0x170(r1)
    stfs f2, 0x16c(r1)
    stfs f7, 0x190(r1)
    stfs f7, 0x17c(r1)
    stfs f7, 0x168(r1)
    beq lbl_fn_802C1208_0000173C
    fmr f1, f0
    addi r3, r1, 0x258
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x258
    addi r5, r1, 0x288
    bl fn_805F89F0
    addi r3, r1, 0x288
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
lbl_fn_802C1208_0000173C:
    lfs f0, lbl_808842A8
    lfs f1, 0xb8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_802C1208_0000179C
    addi r3, r1, 0x1f8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x1f8
    addi r5, r1, 0x228
    bl fn_805F89F0
    addi r3, r1, 0x228
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
lbl_fn_802C1208_0000179C:
    lfs f0, lbl_808842A8
    lfs f1, 0xb4(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_802C1208_000017FC
    addi r3, r1, 0x198
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x198
    addi r5, r1, 0x1c8
    bl fn_805F89F0
    addi r3, r1, 0x1c8
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
lbl_fn_802C1208_000017FC:
    mr r3, r28
    mr r4, r27
    addi r5, r1, 0x138
    bl fn_805F89F0
    addi r6, r1, 0x138
    lis r5, lbl_807C83A8@ha
    psq_l f1, 0x0(r6), 0, 0
    addi r4, r5, lbl_807C83A8@l
    psq_l f2, 0x8(r6), 0, 0
    addi r27, r30, 0x14f4
    psq_l f3, 0x10(r6), 0, 0
    addi r3, r1, 0x108
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f6, 0x28(r28), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    lfs f1, lbl_807C83A8@l(r5)
    lfs f2, 0x4(r4)
    lfs f3, 0x8(r4)
    bl fn_805F9160
    mr r3, r27
    addi r4, r1, 0x108
    addi r5, r1, 0xd8
    bl fn_805F89F0
    addi r5, r1, 0xd8
    lfs f8, 0xcc(r1)
    psq_l f1, 0x0(r5), 0, 0
    mr r3, r30
    psq_l f2, 0x8(r5), 0, 0
    li r4, 0x65
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_st f6, 0x28(r27), 0, 0
    lfs f0, 0xd4(r1)
    psq_st f2, 0x8(r27), 0, 0
    lfs f7, 0xd0(r1)
    psq_st f4, 0x18(r27), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    stfs f8, 0x1500(r30)
    stfs f7, 0x1510(r30)
    stfs f0, 0x1520(r30)
    bl fn_80232B7C
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    li r5, -0x1
    lfs f1, lbl_808842AC
    stw r0, 0x8(r1)
    li r0, 0x1
    addi r4, r30, 0x156c
    mr r7, r27
    stw r5, 0xc(r1)
    li r5, -0x1
    li r6, 0x5
    li r8, 0x0
    stw r0, 0x10(r1)
    li r9, 0x0
    li r10, 0x0
    bl fn_8023A680
    b lbl_fn_802C1208_00001C98
    mr r3, r30
    bl fn_802C4480
    li r31, 0x1
    b lbl_fn_802C1208_00001C98
    lfs f26, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f26, f1
    cror eq, gt, eq
    bne lbl_fn_802C1208_00001974
    li r29, 0x0
    stw r29, 0x1590(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stw r29, 0x58c(r30)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x0
    bl fn_80239DAC
    b lbl_fn_802C1208_00001A08
lbl_fn_802C1208_00001974:
    lfs f7, 0x2e4(r30)
    lfs f0, lbl_8088430C
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_802C1208_00001A08
    lfs f0, lbl_80884310
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_802C1208_00001A08
    mr r3, r30
    bl fn_802C653C
    lwz r3, lbl_8087F430
    li r4, 0xf8
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_802C1208_000019C4
    lwz r3, lbl_8087F430
    li r4, 0xf8
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_802C1208_000019C4:
    lwz r27, lbl_8087F048
    li r3, 0x57c
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_808842A8
    stw r0, 0xc(r1)
    mr r3, r27
    lfs f2, lbl_808842AC
    mr r4, r30
    lwz r6, 0x590(r30)
    addi r7, r30, 0x528
    addi r8, r30, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_802C1208_00001A08:
    lfs f7, 0x2e4(r30)
    lfs f0, lbl_80884314
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_802C1208_00001C98
    lfs f0, lbl_80884318
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_802C1208_00001C98
    lwz r0, 0x2dc(r30)
    cmpwi r0, 0x145
    bne lbl_fn_802C1208_00001C98
    li r31, 0x1
    b lbl_fn_802C1208_00001C98
    lfs f26, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f26, f1
    cror eq, gt, eq
    bne lbl_fn_802C1208_00001C98
    li r29, 0x0
    stw r29, 0x1590(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stw r29, 0x58c(r30)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x0
    bl fn_80239DAC
    b lbl_fn_802C1208_00001C98
    lfs f26, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f26, f1
    cror eq, gt, eq
    bne lbl_fn_802C1208_00001C98
    li r29, 0x0
    stw r29, 0x1590(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stw r29, 0x58c(r30)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x0
    bl fn_80239DAC
    b lbl_fn_802C1208_00001C98
    lfs f26, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f26, f1
    cror eq, gt, eq
    bne lbl_fn_802C1208_00001C98
    li r29, 0x0
    stw r29, 0x1590(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stw r29, 0x58c(r30)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x0
    bl fn_80239DAC
    b lbl_fn_802C1208_00001C98
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_802C1208_00001C98
    mr r3, r30
    bl fn_802C3EDC
    li r31, 0x1
    b lbl_fn_802C1208_00001C98
    lfs f7, 0x530(r5)
    addi r27, r1, 0x48
    lfs f0, 0x530(r30)
    addi r6, r1, 0x54
    lfs f9, 0x52c(r5)
    mr r3, r27
    fsubs f2, f7, f0
    lfs f8, 0x52c(r30)
    lfs f7, 0x528(r5)
    mr r4, r27
    lfs f0, 0x528(r30)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x58(r1)
    stfs f0, 0x54(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x5c(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x50(r1)
    bl fn_805F98D0
    mr r3, r27
    bl fn_805F9940
    lfs f0, lbl_8088431C
    fcmpo cr0, f1, f0
    blt lbl_fn_802C1208_00001BE8
    lwz r3, lbl_8087F8A0
    lwz r0, 0x1584(r30)
    lwz r3, 0x48(r3)
    cmplw r0, r3
    bne lbl_fn_802C1208_00001C98
lbl_fn_802C1208_00001BE8:
    lwz r0, 0x55c(r30)
    li r3, 0x0
    stw r3, 0x58c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_802C1208_00001C98
    lwz r0, 0x560(r30)
    cmpwi r0, 0x4
    bne lbl_fn_802C1208_00001C98
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_802C1208_00001C98
lbl_fn_802C1208_00001C18:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    beq lbl_fn_802C1208_00001C88
    cmpwi r0, 0x7
    bne lbl_fn_802C1208_00001C68
    lwz r0, 0x1594(r30)
    cmpwi r0, 0x2
    beq lbl_fn_802C1208_00001C88
    lwz r0, 0xd20(r30)
    cmplw r5, r0
    beq lbl_fn_802C1208_00001C88
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x1584(r30)
    mr r3, r30
    lfs f1, lbl_808842B0
    li r5, 0x0
    bl fn_80170A20
    b lbl_fn_802C1208_00001C88
lbl_fn_802C1208_00001C68:
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x1584(r30)
    mr r3, r30
    lfs f1, lbl_808842B0
    li r5, 0x0
    bl fn_80170A20
lbl_fn_802C1208_00001C88:
    mr r3, r30
    bl fn_802C2BCC
    mr r3, r30
    bl fn_802C3154
lbl_fn_802C1208_00001C98:
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_802C1208_00001CD4
    lwz r3, lbl_8087F430
    li r4, 0xfd
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_802C1208_00001CF8
    lwz r3, lbl_8087F430
    li r4, 0xfd
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_802C1208_00001CF8
lbl_fn_802C1208_00001CD4:
    lwz r3, lbl_8087F430
    li r4, 0xfd
    bl fn_80370A78
    cmpwi r3, 0x0
    beq lbl_fn_802C1208_00001CF8
    lwz r3, lbl_8087F430
    li r4, 0xfd
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_802C1208_00001CF8:
    cmpwi r31, 0x0
    beq lbl_fn_802C1208_00001D38
    lwz r0, 0x58c(r30)
    lfs f1, lbl_808842E0
    cmpwi r0, 0xa
    lfs f2, lbl_80884320
    bne lbl_fn_802C1208_00001D1C
    lfs f0, lbl_80884324
    fmuls f1, f1, f0
lbl_fn_802C1208_00001D1C:
    cmpwi r0, 0x5
    bne lbl_fn_802C1208_00001D2C
    lfs f1, lbl_80884328
    lfs f2, lbl_8088432C
lbl_fn_802C1208_00001D2C:
    mr r3, r30
    li r4, 0x64
    bl fn_802C4E80
lbl_fn_802C1208_00001D38:
    mr r3, r30
    bl fn_8014C540
    mr r3, r30
    bl fn_80145334
    mr r3, r30
    bl fn_802C1FEC
    lis r4, lbl_80746C90@ha
    addi r3, r30, 0xb0
    addi r4, r4, lbl_80746C90@l
    li r5, 0x0
    addi r4, r4, 0xc3
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C1208_00001D78
    li r4, 0x0
    b lbl_fn_802C1208_00001D84
lbl_fn_802C1208_00001D78:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_802C1208_00001D84:
    lfs f8, 0x1c(r4)
    lis r3, lbl_80746C90@ha
    lfs f7, 0xc(r4)
    addi r7, r1, 0x18
    lfs f2, 0x2c(r4)
    addi r3, r3, lbl_80746C90@l
    lfs f0, lbl_808842E0
    addi r6, r30, 0x163c
    stfs f7, 0x18(r1)
    addi r4, r3, 0xc8
    addi r3, r30, 0xb0
    li r5, 0x0
    stfs f8, 0x1c(r1)
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x20(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x1644(r30)
    stfs f0, 0x1648(r30)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C1208_00001DE0
    li r4, 0x0
    b lbl_fn_802C1208_00001DEC
lbl_fn_802C1208_00001DE0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_802C1208_00001DEC:
    lfs f8, 0x2c(r4)
    lis r3, lbl_80746C90@ha
    lfs f7, 0x1c(r4)
    addi r3, r3, lbl_80746C90@l
    lfs f0, 0xc(r4)
    addi r4, r3, 0xce
    stfs f0, 0x24(r1)
    addi r3, r30, 0xb0
    li r5, 0x0
    stfs f7, 0x28(r1)
    stfs f8, 0x2c(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C1208_00001E2C
    li r3, 0x0
    b lbl_fn_802C1208_00001E38
lbl_fn_802C1208_00001E2C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_802C1208_00001E38:
    lfs f9, 0x2c(r3)
    addi r4, r1, 0x24
    lfs f8, 0x1c(r3)
    addi r6, r30, 0x1688
    lfs f7, 0xc(r3)
    addi r8, r1, 0x30
    lfs f2, 0x2c(r1)
    lis r3, lbl_80746C90@ha
    stfs f2, 0x1690(r30)
    fmr f2, f9
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r3, lbl_80746C90@l
    lfs f0, lbl_808842E4
    addi r4, r3, 0xd4
    stfs f7, 0x30(r1)
    addi r7, r30, 0x1694
    addi r3, r30, 0xb0
    stfs f8, 0x34(r1)
    li r5, 0x0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f9, 0x38(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x169c(r30)
    stfs f0, 0x16a0(r30)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C1208_00001EB0
    li r3, 0x0
    b lbl_fn_802C1208_00001EBC
lbl_fn_802C1208_00001EB0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_802C1208_00001EBC:
    lfs f8, 0x1c(r3)
    addi r4, r1, 0x3c
    lfs f7, 0xc(r3)
    addi r5, r30, 0x148c
    lfs f2, 0x2c(r3)
    mr r3, r30
    lfs f0, lbl_808842E8
    stfs f7, 0x3c(r1)
    stfs f8, 0x40(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x44(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1494(r30)
    stfs f0, 0x1498(r30)
    bl fn_802C6DF4
    mr r3, r30
    bl fn_802C69BC
    cmpwi r3, 0x0
    beq lbl_fn_802C1208_00001F4C
    lwz r0, 0x1594(r30)
    cmpwi r0, 0x2
    beq lbl_fn_802C1208_00001F4C
    li r31, 0x0
    stw r31, 0x16bc(r30)
    mr r4, r30
    li r5, 0xc8
    lwz r3, lbl_8087F3C0
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0x2
    stw r0, 0x1594(r30)
    li r4, 0xfa
    li r5, 0x1
    lwz r3, lbl_8087F430
    bl fn_80370AE4
    stw r31, 0x58c(r30)
lbl_fn_802C1208_00001F4C:
    addi r11, r1, 0x340
    psq_l f31, 0x398(r1), 0, 0
    lfd f31, 0x390(r1)
    psq_l f30, 0x388(r1), 0, 0
    lfd f30, 0x380(r1)
    psq_l f29, 0x378(r1), 0, 0
    lfd f29, 0x370(r1)
    psq_l f28, 0x368(r1), 0, 0
    lfd f28, 0x360(r1)
    psq_l f27, 0x358(r1), 0, 0
    lfd f27, 0x350(r1)
    psq_l f26, 0x348(r1), 0, 0
    lfd f26, 0x340(r1)
    bl _restgpr_27
    lwz r0, 0x3a4(r1)
    mtlr r0
    addi r1, r1, 0x3a0
    blr
}
