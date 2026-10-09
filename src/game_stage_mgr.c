#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_8004ED34(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800EFBC4(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_801231D0(void);
extern void fn_8016DA4C(void);
extern void fn_80219E6C(void);
extern void fn_8023A8B4(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_80739700[];
extern u8 lbl_80739F34[];
extern u8 lbl_8077E9B8[];
extern u8 lbl_8077EA30[];
extern u8 lbl_8077EAA8[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_80881FB8;
extern u32 lbl_80881FBC;
extern u32 lbl_80881FCC;
extern u32 lbl_80881FD0;
extern u32 lbl_80881FD4;
extern u32 lbl_80881FD8;
extern u32 lbl_80881FDC;
extern u32 lbl_80881FE8;
extern u32 lbl_80881FF4;
extern u32 lbl_80882004;
extern u32 lbl_80882008;
extern u32 lbl_80882030;
extern u32 lbl_80882040;
extern u32 lbl_80882060;
extern u32 lbl_80882064;
extern u32 lbl_80882068;
extern u32 lbl_8088206C;
extern u32 lbl_80882070;
extern u32 lbl_80882074;
extern u32 lbl_80882078;
extern u32 lbl_8088207C;
extern u32 lbl_80882080;
extern u32 lbl_80882084;
extern u32 lbl_80882088;
extern u32 lbl_8088208C;
extern u32 lbl_80882090;
extern u32 lbl_80882094;
extern u32 lbl_80882098;
extern u32 lbl_8088209C;
extern u32 lbl_808820A0;
extern u32 lbl_808820A4;
extern u32 lbl_808820A8;
extern u32 lbl_808820AC;
extern u32 lbl_808820B0;
extern u32 lbl_808820B4;
extern u32 lbl_808820B8;
extern u32 lbl_808820BC;
extern u32 lbl_808820C0;
extern u32 lbl_808820C4;
extern u32 lbl_808820C8;
extern u32 lbl_808820CC;
extern u32 lbl_808820D0;
extern u32 lbl_808820D4;
extern u32 lbl_808820D8;
extern u32 lbl_808820DC;

/* Function declarations */
void fn_801953B8(void);
void fn_801957D4(void);
void fn_801957F0(void);
void fn_80195AD0(void);
void fn_801963F4(void);
void fn_80196408(void);
void fn_8019640C(void);
void fn_80196428(void);
void fn_80196548(void);
void fn_80196974(void);
void fn_80196A18(void);
void fn_80196A20(void);
void fn_80196A98(void);
void fn_80196C68(void);
void fn_80196CD4(void);

asm void fn_801953B8(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x90
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    bl _savegpr_27
    lwz r7, 0x4(r3)
    mr r30, r3
    lfs f0, lbl_80882064
    lfs f3, 0x2e4(r7)
    addi r31, r7, 0xb0
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_801953B8_000000F0
    lwz r0, 0xc(r3)
    cmpwi r0, 0x2
    beq lbl_fn_801953B8_000000C4
    lfs f0, lbl_80882068
    addi r4, r1, 0x64
    lfs f5, 0x14(r3)
    fdivs f8, f3, f0
    lfs f4, 0x20(r3)
    lfs f3, 0x10(r3)
    lfs f0, 0x1c(r3)
    lfs f7, 0x18(r3)
    lfs f6, 0x24(r3)
    fsubs f5, f5, f4
    fsubs f9, f7, f6
    fsubs f3, f3, f0
    stfs f5, 0x20(r1)
    fmuls f7, f5, f8
    stfs f3, 0x1c(r1)
    fmuls f5, f3, f8
    fmuls f8, f9, f8
    stfs f9, 0x24(r1)
    fadds f3, f7, f4
    fadds f0, f5, f0
    stfs f5, 0x10(r1)
    fadds f2, f8, f6
    stfs f3, 0x68(r1)
    stfs f0, 0x64(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r7), 0, 0
    stfs f7, 0x14(r1)
    stfs f8, 0x18(r1)
    stfs f2, 0x6c(r1)
    stfs f2, 0x530(r7)
    b lbl_fn_801953B8_000000E0
lbl_fn_801953B8_000000C4:
    lfs f2, 0x18(r3)
    addi r4, r1, 0x58
    psq_l f1, 0x10(r3), 0, 0
    psq_st f1, 0x528(r7), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x60(r1)
    stfs f2, 0x530(r7)
lbl_fn_801953B8_000000E0:
    lwz r3, lbl_8087EFA8
    li r0, 0x1
    stw r0, 0x240(r3)
    b lbl_fn_801953B8_000003AC
lbl_fn_801953B8_000000F0:
    lwz r0, 0xc(r3)
    cmpwi r0, 0x2
    bne lbl_fn_801953B8_000001A4
    lfs f0, lbl_8088206C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    mfcr r0
    lwz r4, lbl_8087EFA8
    extrwi r0, r0, 1, 2
    lfs f0, lbl_80882070
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x240(r4)
    lfs f3, 0x234(r31)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_801953B8_00000194
    lfs f0, lbl_80882074
    fcmpo cr0, f3, f0
    bge lbl_fn_801953B8_00000194
    lwz r4, lbl_8087EFA8
    lfs f0, lbl_80882078
    lfs f3, 0x3a4(r4)
    lfs f4, lbl_80882008
    fsubs f0, f3, f0
    fcmpo cr0, f4, f0
    ble lbl_fn_801953B8_00000160
    b lbl_fn_801953B8_00000164
lbl_fn_801953B8_00000160:
    fmr f4, f0
lbl_fn_801953B8_00000164:
    stfs f4, 0x3a4(r4)
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801953B8_000003AC
    lfs f3, 0x234(r31)
    lfs f0, lbl_8088207C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_801953B8_000003AC
    li r0, 0x1
    stw r0, 0x28(r3)
    b lbl_fn_801953B8_000003AC
lbl_fn_801953B8_00000194:
    lwz r3, lbl_8087EFA8
    lfs f0, lbl_80881FBC
    stfs f0, 0x3a4(r3)
    b lbl_fn_801953B8_000003AC
lbl_fn_801953B8_000001A4:
    lfs f0, lbl_80882080
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    beq lbl_fn_801953B8_000003AC
    lfs f0, lbl_80882084
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_801953B8_000002A8
    lwz r4, lbl_8087EFA8
    li r0, 0x0
    lfs f0, lbl_80881FBC
    stw r0, 0x240(r4)
    lwz r4, lbl_8087EFA8
    stfs f0, 0x3a4(r4)
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801953B8_000003AC
    lfs f3, 0x234(r31)
    lfs f0, lbl_80882004
    fcmpo cr0, f3, f0
    ble lbl_fn_801953B8_000003AC
    li r0, 0x1
    stw r0, 0x28(r3)
    lwz r3, 0x4(r3)
    bl fn_8016DA4C
    lwz r6, 0x4(r30)
    lis r4, lbl_80739F34@ha
    mr r3, r31
    li r5, 0x0
    lwz r29, 0x638(r6)
    addi r4, r4, lbl_80739F34@l
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_801953B8_00000234
    li r3, 0x0
    b lbl_fn_801953B8_00000240
lbl_fn_801953B8_00000234:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r3, r3, r0
lbl_fn_801953B8_00000240:
    lfs f0, 0x2c(r3)
    lfs f3, 0x1c(r3)
    lfs f4, 0xc(r3)
    stfs f4, 0x4c(r1)
    lwz r27, lbl_8087F048
    stfs f3, 0x50(r1)
    mr r3, r27
    stfs f0, 0x54(r1)
    lwz r4, 0x4(r30)
    addi r28, r4, 0x534
    bl fn_800F8548
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r6, r3
    lfs f1, lbl_80881FCC
    stw r0, 0xc(r1)
    mr r3, r27
    lfs f2, lbl_80881FBC
    mr r5, r29
    lwz r4, 0x4(r30)
    mr r8, r28
    addi r7, r1, 0x4c
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    b lbl_fn_801953B8_000003AC
lbl_fn_801953B8_000002A8:
    lfs f0, lbl_80882088
    fcmpo cr0, f3, f0
    ble lbl_fn_801953B8_000003AC
    addi r5, r1, 0x40
    psq_l f1, 0x528(r7), 0, 0
    lfs f4, lbl_8088208C
    addi r6, r1, 0x34
    lfs f3, 0x30(r3)
    li r4, 0x0
    lfs f0, 0x2c(r3)
    fmuls f6, f3, f4
    psq_st f1, 0x0(r5), 0, 0
    fmuls f7, f0, f4
    lfs f5, 0x34(r3)
    lfs f3, 0x40(r1)
    fmuls f5, f5, f4
    fadds f4, f3, f7
    lfs f0, 0x44(r1)
    lfs f2, 0x530(r7)
    fadds f3, f0, f6
    stfs f4, 0x40(r1)
    fadds f0, f2, f5
    stfs f3, 0x44(r1)
    psq_l f1, 0x0(r5), 0, 0
    fmr f2, f0
    psq_st f1, 0x528(r7), 0, 0
    stfs f2, 0x530(r7)
    lwz r5, 0x4(r3)
    mr r3, r31
    stfs f7, 0x28(r1)
    psq_l f1, 0x534(r5), 0, 0
    lfs f2, 0x53c(r5)
    stfs f6, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f0, 0x48(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x3c(r1)
    bl fn_80097D7C
    lfs f0, lbl_80882090
    lis r3, lbl_80739700@ha
    lfs f3, lbl_80881FE8
    fsubs f4, f1, f0
    lfs f0, 0x38(r1)
    lfd f2, lbl_80739700@l(r3)
    fdivs f3, f3, f4
    fadds f1, f0, f3
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80881FE8
    fcmpo cr0, f3, f0
    ble lbl_fn_801953B8_0000037C
    lfs f0, lbl_80882094
    fsubs f3, f3, f0
lbl_fn_801953B8_0000037C:
    lfs f0, lbl_80882098
    fcmpo cr0, f3, f0
    bge lbl_fn_801953B8_00000390
    lfs f0, lbl_80882094
    fadds f3, f3, f0
lbl_fn_801953B8_00000390:
    stfs f3, 0x38(r1)
    addi r3, r1, 0x34
    lwz r4, 0x4(r30)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r4), 0, 0
    lfs f2, 0x3c(r1)
    stfs f2, 0x53c(r4)
lbl_fn_801953B8_000003AC:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801953B8_000003F8
    lwz r3, 0x4(r30)
    lis r4, lbl_807C7030@ha
    lfs f0, lbl_80881FCC
    addi r4, r4, lbl_807C7030@l
    stfs f0, 0x570(r3)
    li r3, 0x1
    lwz r5, 0x4(r30)
    lfs f2, 0x8(r4)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x574(r5), 0, 0
    stfs f2, 0x57c(r5)
    b lbl_fn_801953B8_000003FC
lbl_fn_801953B8_000003F8:
    li r3, 0x0
lbl_fn_801953B8_000003FC:
    addi r11, r1, 0x90
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    bl _restgpr_27
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_801957D4(void)
{
    nofralloc
    lwz r3, lbl_8087EFA8
    li r0, 0x0
    lfs f0, lbl_80881FBC
    stfs f0, 0x3a4(r3)
    lwz r3, lbl_8087EFA8
    stw r0, 0x240(r3)
    blr
}

asm void fn_801957F0(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    lis r6, lbl_8077EAA8@ha
    lfs f3, lbl_8088209C
    stw r0, 0x104(r1)
    li r10, 0x0
    addi r6, r6, lbl_8077EAA8@l
    li r9, 0x51
    stfd f31, 0xf0(r1)
    li r0, 0x1
    lfs f0, lbl_80881FBC
    li r7, 0x0
    psq_st f31, 0xf8(r1), 0, 0
    li r8, 0x1
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    stw r30, 0xd8(r1)
    mr r30, r3
    stw r5, 0x8(r3)
    li r5, 0x20a
    stw r6, 0x0(r3)
    li r6, 0x0
    stw r4, 0x4(r3)
    stfs f3, 0x34(r3)
    stb r10, 0x38(r3)
    stb r10, 0x39(r3)
    stw r9, 0x560(r4)
    li r4, 0x0
    lwz r9, 0x4(r3)
    lwz r10, 0x8(r3)
    psq_l f1, 0x528(r9), 0, 0
    addi r31, r9, 0xb0
    lfs f2, 0x530(r9)
    stfs f2, 0x30(r3)
    psq_st f1, 0x28(r3), 0, 0
    psq_l f1, 0x528(r10), 0, 0
    lfs f2, 0x530(r10)
    stfs f2, 0x24(r3)
    lfs f2, lbl_80881FDC
    psq_st f1, 0x1c(r3), 0, 0
    fmr f1, f0
    mr r3, r31
    stw r0, 0x3fc(r9)
    stfs f0, 0x2fc(r9)
    bl fn_80097C08
    lfs f0, lbl_80881FBC
    addi r3, r1, 0x5c
    stfs f0, 0x238(r31)
    addi r31, r1, 0x50
    lfs f3, lbl_80881FCC
    lfs f5, 0x24(r30)
    lfs f0, 0x30(r30)
    lfs f4, 0x1c(r30)
    fsubs f2, f5, f0
    lfs f0, 0x28(r30)
    stfs f3, 0x60(r1)
    fsubs f4, f4, f0
    lfs f0, lbl_80881FD0
    stfs f2, 0x64(r1)
    stfs f4, 0x5c(r1)
    frsp f4, f2
    psq_l f1, 0x0(r3), 0, 0
    fabs f5, f4
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    frsp f5, f5
    fcmpo cr0, f5, f0
    bge lbl_fn_801957F0_0000056C
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_801957F0_00000560
    lfs f0, lbl_80881FD4
    b lbl_fn_801957F0_00000564
lbl_fn_801957F0_00000560:
    lfs f0, lbl_80881FD8
lbl_fn_801957F0_00000564:
    stfs f0, 0x48(r1)
    b lbl_fn_801957F0_00000580
lbl_fn_801957F0_0000056C:
    fmr f2, f4
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801957F0_00000580:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881FCC
    addi r4, r1, 0x38
    lfs f30, 0x70(r1)
    mr r5, r4
    lfs f31, 0x6c(r1)
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
    lfs f0, lbl_80881FBC
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x98(r1)
    stfs f31, 0x9c(r1)
    stfs f30, 0xa0(r1)
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
    lfs f0, lbl_80881FD0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801957F0_0000069C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_801957F0_0000068C
    lfs f0, lbl_80881FD4
    b lbl_fn_801957F0_00000690
lbl_fn_801957F0_0000068C:
    lfs f0, lbl_80881FD8
lbl_fn_801957F0_00000690:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801957F0_000006B0
lbl_fn_801957F0_0000069C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801957F0_000006B0:
    lfs f0, lbl_80881FCC
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    fmr f2, f0
    lwz r4, 0x4(r30)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    frsp f2, f2
    psq_st f1, 0x534(r4), 0, 0
    stfs f2, 0x53c(r4)
    psq_l f1, 0x28(r30), 0, 0
    lfs f2, 0x30(r30)
    psq_st f1, 0x10(r30), 0, 0
    stfs f2, 0x18(r30)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r0, 0x104(r1)
    stfs f0, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_80195AD0(void)
{
    nofralloc
    stwu r1, -0x2f0(r1)
    mflr r0
    stw r0, 0x2f4(r1)
    addi r11, r1, 0x2e0
    stfd f31, 0x2e0(r1)
    psq_st f31, 0x2e8(r1), 0, 0
    bl _savegpr_27
    lwz r5, 0x4(r3)
    mr r30, r3
    lwz r4, lbl_8087EFA8
    lfs f3, 0x34(r3)
    addi r31, r5, 0xb0
    lfs f4, 0x2e8(r5)
    lfs f5, 0x3a4(r4)
    lfs f0, lbl_808820A0
    fnmsubs f3, f5, f4, f3
    stfs f3, 0x34(r3)
    lfs f3, 0x2e4(r5)
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80195AD0_00000850
    lwz r4, lbl_8087EFA8
    lfs f0, lbl_80882078
    lfs f3, 0x3a4(r4)
    lfs f4, lbl_80881FB8
    fsubs f0, f3, f0
    fcmpo cr0, f4, f0
    ble lbl_fn_80195AD0_0000078C
    b lbl_fn_80195AD0_00000790
lbl_fn_80195AD0_0000078C:
    fmr f4, f0
lbl_fn_80195AD0_00000790:
    stfs f4, 0x3a4(r4)
    li r0, 0x1
    lfs f0, lbl_8088209C
    addi r4, r1, 0x148
    lwz r6, lbl_8087EFA8
    addi r5, r1, 0x13c
    lfs f3, lbl_80882068
    stw r0, 0x240(r6)
    lfs f4, 0x234(r31)
    lwz r6, 0x8(r3)
    fdivs f12, f4, f0
    lfs f5, 0x2c(r3)
    psq_l f1, 0x528(r6), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x530(r6)
    lfs f0, 0x14c(r1)
    fsubs f10, f0, f5
    lfs f4, 0x148(r1)
    lfs f0, 0x28(r3)
    lfs f6, 0x30(r3)
    fmuls f7, f10, f12
    lwz r4, 0x4(r3)
    fsubs f9, f4, f0
    stfs f2, 0x150(r1)
    fsubs f11, f2, f6
    fadds f4, f7, f5
    fmuls f5, f9, f12
    stfs f9, 0x4c(r1)
    fmuls f8, f11, f12
    stfs f4, 0x140(r1)
    fadds f0, f5, f0
    fadds f2, f8, f6
    stfs f10, 0x50(r1)
    stfs f0, 0x13c(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    stfs f2, 0x530(r4)
    psq_st f1, 0x10(r3), 0, 0
    lfs f0, 0x14(r3)
    stfs f11, 0x54(r1)
    fmadds f0, f3, f12, f0
    stfs f5, 0x40(r1)
    stfs f7, 0x44(r1)
    stfs f8, 0x48(r1)
    stfs f2, 0x144(r1)
    stfs f2, 0x18(r3)
    stfs f0, 0x14(r3)
    b lbl_fn_80195AD0_00000FCC
lbl_fn_80195AD0_00000850:
    lfs f0, lbl_808820A4
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80195AD0_0000099C
    lwz r4, lbl_8087EFA8
    li r0, 0x0
    lfs f0, lbl_80881FBC
    stw r0, 0x240(r4)
    lwz r4, lbl_8087EFA8
    stfs f0, 0x3a4(r4)
    lbz r0, 0x38(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80195AD0_00000974
    lfs f3, 0x234(r31)
    lfs f0, lbl_80882040
    fcmpo cr0, f3, f0
    ble lbl_fn_80195AD0_00000974
    li r0, 0x1
    stb r0, 0x38(r3)
    lwz r3, 0x4(r3)
    bl fn_8016DA4C
    lwz r6, 0x4(r30)
    lis r4, lbl_80739F34@ha
    mr r3, r31
    li r5, 0x0
    lwz r27, 0x638(r6)
    addi r4, r4, lbl_80739F34@l
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80195AD0_000008D0
    li r3, 0x0
    b lbl_fn_80195AD0_000008DC
lbl_fn_80195AD0_000008D0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r3, r3, r0
lbl_fn_80195AD0_000008DC:
    lfs f0, 0x2c(r3)
    lfs f3, 0x1c(r3)
    lfs f4, 0xc(r3)
    stfs f4, 0x130(r1)
    lwz r29, lbl_8087F048
    stfs f3, 0x134(r1)
    mr r3, r29
    stfs f0, 0x138(r1)
    lwz r4, 0x4(r30)
    addi r28, r4, 0x534
    bl fn_800F8548
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r6, r3
    lfs f1, lbl_80881FCC
    stw r0, 0xc(r1)
    mr r3, r29
    lfs f2, lbl_80881FBC
    mr r5, r27
    lwz r4, 0x4(r30)
    mr r8, r28
    addi r7, r1, 0x130
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lwz r5, lbl_8087F430
    li r0, 0x6
    lfs f3, lbl_80881FCC
    lwz r3, 0x96c(r5)
    lfs f0, lbl_808820A8
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    subf r3, r4, r3
    stw r3, 0x96c(r5)
    stw r0, 0x970(r5)
    stfs f3, 0x974(r5)
    stfs f0, 0x978(r5)
lbl_fn_80195AD0_00000974:
    lwz r3, 0x4(r30)
    lfs f0, lbl_80882068
    lfs f2, 0x530(r3)
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x10(r30), 0, 0
    lfs f3, 0x14(r30)
    stfs f2, 0x18(r30)
    fadds f0, f3, f0
    stfs f0, 0x14(r30)
    b lbl_fn_80195AD0_00000FCC
lbl_fn_80195AD0_0000099C:
    lfs f0, lbl_808820AC
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80195AD0_00000FBC
    lbz r0, 0x39(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80195AD0_00000E9C
    lfs f3, lbl_80881FCC
    addi r3, r1, 0x1e8
    lfs f0, lbl_80881FBC
    li r4, 0x79
    stfs f3, 0x100(r1)
    stfs f3, 0x104(r1)
    stfs f0, 0x108(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x100
    addi r3, r1, 0x1e8
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x108(r1)
    addi r29, r1, 0x118
    lfs f4, lbl_808820B0
    addi r3, r1, 0xf4
    lfs f3, 0x104(r1)
    li r0, 0x0
    lfs f0, 0x100(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, lbl_80881FF4
    fmuls f7, f0, f4
    stfs f5, 0x12c(r1)
    mr r5, r29
    stfs f7, 0x124(r1)
    addi r4, r1, 0x278
    addi r6, r1, 0x10c
    stfs f6, 0x128(r1)
    lis r7, 0x8000
    li r8, 0x0
    li r9, 0x0
    lwz r10, 0x4(r30)
    lfs f0, 0x530(r10)
    lfs f4, 0x52c(r10)
    fadds f2, f0, f5
    lfs f0, 0x528(r10)
    fadds f4, f4, f6
    fadds f0, f0, f7
    stfs f2, 0x24(r30)
    stfs f0, 0xf4(r1)
    stfs f4, 0xf8(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x1c(r30), 0, 0
    stfs f2, 0xfc(r1)
    lfs f2, 0x530(r10)
    psq_l f1, 0x528(r10), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, 0x12c(r1)
    lfs f5, 0x11c(r1)
    fadds f6, f2, f0
    lfs f4, 0x128(r1)
    fadds f5, f5, f3
    lfs f3, 0x118(r1)
    lfs f0, 0x124(r1)
    stfs f2, 0x120(r1)
    fadds f4, f5, f4
    lwz r3, lbl_8087EE98
    fadds f0, f3, f0
    stfs f5, 0x11c(r1)
    stfs f0, 0x10c(r1)
    stfs f4, 0x110(r1)
    stfs f6, 0x114(r1)
    stw r0, 0x2ac(r1)
    stw r0, 0x2b0(r1)
    stw r0, 0x2b4(r1)
    stw r0, 0x2b8(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80195AD0_00000E10
    lwz r5, 0x4(r30)
    addi r3, r1, 0x1b8
    lfs f3, lbl_80881FCC
    li r4, 0x79
    lfs f0, lbl_80881FBC
    stfs f3, 0xdc(r1)
    stfs f3, 0xe0(r1)
    stfs f0, 0xe4(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0xdc
    addi r3, r1, 0x1b8
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0xe4(r1)
    addi r5, r1, 0xe8
    lfs f4, lbl_808820B0
    addi r28, r1, 0x124
    lfs f3, 0xe0(r1)
    addi r3, r1, 0x248
    fmuls f2, f0, f4
    lfs f0, 0xdc(r1)
    fmuls f3, f3, f4
    li r4, 0x79
    fmuls f0, f0, f4
    stfs f2, 0xf0(r1)
    stfs f0, 0xe8(r1)
    stfs f3, 0xec(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    lfs f1, lbl_808820B4
    stfs f2, 0x12c(r1)
    bl fn_805F8E70
    mr r4, r28
    mr r5, r28
    addi r3, r1, 0x248
    bl fn_805F93C0
    lwz r4, 0x4(r30)
    addi r27, r1, 0x10c
    lfs f0, 0x12c(r1)
    addi r3, r1, 0xd0
    lfs f3, 0x530(r4)
    addi r10, r1, 0xc4
    lfs f5, 0x52c(r4)
    mr r5, r29
    fadds f6, f3, f0
    lfs f4, 0x128(r1)
    lfs f3, 0x528(r4)
    mr r6, r27
    lfs f0, 0x124(r1)
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f4, 0xd4(r1)
    fmr f2, f6
    addi r4, r1, 0x278
    stfs f0, 0xd0(r1)
    lis r7, 0x8000
    psq_l f1, 0x0(r3), 0, 0
    li r8, 0x0
    psq_st f1, 0x1c(r30), 0, 0
    li r9, 0x0
    stfs f2, 0x24(r30)
    lfs f3, 0x120(r1)
    lfs f0, 0x12c(r1)
    lfs f5, 0x11c(r1)
    fadds f2, f3, f0
    lfs f4, 0x128(r1)
    lfs f3, 0x118(r1)
    lfs f0, 0x124(r1)
    fadds f4, f5, f4
    lwz r3, lbl_8087EE98
    fadds f0, f3, f0
    stfs f4, 0xc8(r1)
    stfs f0, 0xc4(r1)
    psq_l f1, 0x0(r10), 0, 0
    stfs f6, 0xd8(r1)
    stfs f2, 0xcc(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x114(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80195AD0_00000E10
    lwz r5, 0x4(r30)
    addi r3, r1, 0x188
    lfs f3, lbl_80881FCC
    li r4, 0x79
    lfs f0, lbl_80881FBC
    stfs f3, 0xac(r1)
    stfs f3, 0xb0(r1)
    stfs f0, 0xb4(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0xac
    addi r3, r1, 0x188
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0xb4(r1)
    addi r5, r1, 0xb8
    lfs f4, lbl_808820B0
    addi r3, r1, 0x218
    lfs f3, 0xb0(r1)
    li r4, 0x79
    fmuls f2, f0, f4
    lfs f0, 0xac(r1)
    fmuls f3, f3, f4
    fmuls f0, f0, f4
    stfs f2, 0xc0(r1)
    stfs f0, 0xb8(r1)
    stfs f3, 0xbc(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    lfs f1, lbl_808820B8
    stfs f2, 0x12c(r1)
    bl fn_805F8E70
    mr r4, r28
    mr r5, r28
    addi r3, r1, 0x218
    bl fn_805F93C0
    lwz r4, 0x4(r30)
    addi r3, r1, 0xa0
    lfs f0, 0x12c(r1)
    addi r10, r1, 0x94
    lfs f3, 0x530(r4)
    mr r5, r29
    lfs f5, 0x52c(r4)
    mr r6, r27
    fadds f6, f3, f0
    lfs f4, 0x128(r1)
    lfs f3, 0x528(r4)
    addi r4, r1, 0x278
    lfs f0, 0x124(r1)
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f4, 0xa4(r1)
    fmr f2, f6
    lis r7, 0x8000
    stfs f0, 0xa0(r1)
    li r8, 0x0
    psq_l f1, 0x0(r3), 0, 0
    li r9, 0x0
    psq_st f1, 0x1c(r30), 0, 0
    stfs f2, 0x24(r30)
    lfs f3, 0x120(r1)
    lfs f0, 0x12c(r1)
    lfs f5, 0x11c(r1)
    fadds f2, f3, f0
    lfs f4, 0x128(r1)
    lfs f3, 0x118(r1)
    lfs f0, 0x124(r1)
    fadds f4, f5, f4
    lwz r3, lbl_8087EE98
    fadds f0, f3, f0
    stfs f4, 0x98(r1)
    stfs f0, 0x94(r1)
    psq_l f1, 0x0(r10), 0, 0
    stfs f6, 0xa8(r1)
    stfs f2, 0x9c(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x114(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80195AD0_00000E10
    lwz r5, 0x4(r30)
    addi r3, r1, 0x158
    lfs f3, lbl_80881FCC
    li r4, 0x79
    lfs f0, lbl_80881FBC
    stfs f3, 0x7c(r1)
    stfs f3, 0x80(r1)
    stfs f0, 0x84(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x7c
    addi r3, r1, 0x158
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x84(r1)
    addi r3, r1, 0x88
    lfs f4, lbl_808820BC
    addi r4, r1, 0x70
    lfs f3, 0x80(r1)
    fmuls f2, f0, f4
    lfs f0, 0x7c(r1)
    fmuls f3, f3, f4
    fmuls f0, f0, f4
    stfs f2, 0x12c(r1)
    stfs f3, 0x8c(r1)
    frsp f3, f2
    stfs f0, 0x88(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    lwz r3, 0x4(r30)
    stfs f2, 0x90(r1)
    lfs f6, 0x530(r3)
    lfs f4, 0x128(r1)
    fadds f2, f6, f3
    lfs f5, 0x52c(r3)
    lfs f0, 0x124(r1)
    lfs f3, 0x528(r3)
    fadds f4, f5, f4
    stfs f2, 0x78(r1)
    fadds f0, f3, f0
    stfs f4, 0x74(r1)
    stfs f0, 0x70(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x1c(r30), 0, 0
    stfs f2, 0x24(r30)
lbl_fn_80195AD0_00000E10:
    lfs f2, 0x24(r30)
    addi r5, r1, 0x118
    psq_l f1, 0x1c(r30), 0, 0
    addi r6, r1, 0x10c
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r1, 0x278
    lfs f4, lbl_80881FF4
    lis r7, 0x8000
    psq_st f1, 0x0(r6), 0, 0
    li r8, 0x0
    lfs f3, 0x11c(r1)
    li r9, 0x0
    lfs f0, 0x110(r1)
    fadds f3, f3, f4
    stfs f2, 0x120(r1)
    fsubs f0, f0, f4
    lwz r3, lbl_8087EE98
    stfs f3, 0x11c(r1)
    stfs f2, 0x114(r1)
    stfs f0, 0x110(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80195AD0_00000E80
    addi r3, r1, 0x27c
    lfs f2, 0x284(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x1c(r30), 0, 0
    stfs f2, 0x24(r30)
lbl_fn_80195AD0_00000E80:
    lwz r3, 0x4(r30)
    li r0, 0x1
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0x30(r30)
    psq_st f1, 0x28(r30), 0, 0
    stb r0, 0x39(r30)
lbl_fn_80195AD0_00000E9C:
    lfs f4, 0x234(r31)
    addi r3, r1, 0x64
    lfs f0, lbl_808820C0
    addi r4, r1, 0x58
    lfs f3, lbl_8088209C
    fsubs f4, f4, f0
    lfs f9, lbl_80881FBC
    lfs f0, 0x2c(r30)
    lfs f6, 0x20(r30)
    fdivs f10, f4, f3
    lfs f5, 0x28(r30)
    lfs f3, 0x1c(r30)
    lfs f8, 0x30(r30)
    lfs f7, 0x24(r30)
    lwz r5, 0x4(r30)
    fsubs f11, f0, f6
    lfs f4, lbl_80882068
    fsubs f0, f9, f10
    fsubs f12, f8, f7
    stfs f11, 0x38(r1)
    fsubs f5, f5, f3
    fmuls f9, f11, f0
    stfs f12, 0x3c(r1)
    fmuls f10, f12, f0
    fmuls f8, f5, f0
    stfs f5, 0x34(r1)
    fadds f5, f9, f6
    stfs f8, 0x28(r1)
    fadds f3, f8, f3
    fadds f8, f10, f7
    stfs f5, 0x68(r1)
    stfs f3, 0x64(r1)
    fmr f2, f8
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x530(r5)
    lwz r3, 0x8(r30)
    lwz r5, 0x4(r30)
    lfs f3, 0x52c(r3)
    lfs f6, 0x52c(r5)
    lfs f5, 0x528(r3)
    fsubs f13, f3, f6
    lfs f3, 0x528(r5)
    lfs f7, 0x530(r3)
    fsubs f12, f5, f3
    lfs f5, 0x530(r5)
    fmuls f11, f13, f0
    fsubs f31, f7, f5
    stfs f9, 0x2c(r1)
    fmuls f7, f12, f0
    fadds f6, f11, f6
    stfs f10, 0x30(r1)
    fmuls f9, f31, f0
    fadds f3, f7, f3
    stfs f6, 0x5c(r1)
    fadds f2, f9, f5
    stfs f3, 0x58(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x10(r30), 0, 0
    lfs f3, 0x14(r30)
    stfs f8, 0x6c(r1)
    fmadds f0, f4, f0, f3
    stfs f12, 0x1c(r1)
    stfs f13, 0x20(r1)
    stfs f31, 0x24(r1)
    stfs f7, 0x10(r1)
    stfs f11, 0x14(r1)
    stfs f9, 0x18(r1)
    stfs f2, 0x60(r1)
    stfs f2, 0x18(r30)
    stfs f0, 0x14(r30)
    b lbl_fn_80195AD0_00000FCC
lbl_fn_80195AD0_00000FBC:
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    stfs f2, 0x18(r3)
    psq_st f1, 0x10(r3), 0, 0
lbl_fn_80195AD0_00000FCC:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80195AD0_00001018
    lwz r3, 0x4(r30)
    lis r4, lbl_807C7030@ha
    lfs f0, lbl_80881FCC
    addi r4, r4, lbl_807C7030@l
    stfs f0, 0x570(r3)
    li r3, 0x1
    lwz r5, 0x4(r30)
    lfs f2, 0x8(r4)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x574(r5), 0, 0
    stfs f2, 0x57c(r5)
    b lbl_fn_80195AD0_0000101C
lbl_fn_80195AD0_00001018:
    li r3, 0x0
lbl_fn_80195AD0_0000101C:
    addi r11, r1, 0x2e0
    psq_l f31, 0x2e8(r1), 0, 0
    lfd f31, 0x2e0(r1)
    bl _restgpr_27
    lwz r0, 0x2f4(r1)
    mtlr r0
    addi r1, r1, 0x2f0
    blr
}

asm void fn_801963F4(void)
{
    nofralloc
    psq_l f1, 0x10(r4), 0, 0
    lfs f2, 0x18(r4)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    blr
}

asm void fn_80196408(void)
{
    nofralloc
    blr
}

asm void fn_8019640C(void)
{
    nofralloc
    lwz r3, lbl_8087EFA8
    li r0, 0x0
    lfs f0, lbl_80881FBC
    stfs f0, 0x3a4(r3)
    lwz r3, lbl_8087EFA8
    stw r0, 0x240(r3)
    blr
}

asm void fn_80196428(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_8077EA30@ha
    li r10, 0x0
    stw r0, 0x24(r1)
    addi r7, r7, lbl_8077EA30@l
    li r9, 0x4f
    li r0, 0x1
    stw r31, 0x1c(r1)
    li r8, 0x1
    lfs f0, lbl_80881FBC
    stw r30, 0x18(r1)
    mr r30, r5
    lfs f1, lbl_80881FCC
    stw r29, 0x14(r1)
    mr r29, r3
    lfs f2, lbl_80881FDC
    stw r6, 0x28(r3)
    li r6, 0x0
    stw r7, 0x0(r3)
    li r7, 0x1
    stw r5, 0x24(r3)
    li r5, 0x212
    stw r4, 0x4(r3)
    stb r10, 0x2c(r3)
    stw r10, 0x58c(r4)
    li r4, 0x0
    lwz r10, 0x4(r3)
    stw r9, 0x560(r10)
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f0, lbl_80881FBC
    lis r3, lbl_80739700@ha
    stfs f0, 0x238(r31)
    lfs f3, lbl_80881FE8
    lfs f0, 0x538(r30)
    lfd f2, lbl_80739700@l(r3)
    fadds f1, f3, f0
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80881FE8
    fcmpo cr0, f3, f0
    ble lbl_fn_80196428_00001134
    lfs f0, lbl_80882094
    fsubs f3, f3, f0
lbl_fn_80196428_00001134:
    lfs f0, lbl_80882098
    fcmpo cr0, f3, f0
    bge lbl_fn_80196428_00001148
    lfs f0, lbl_80882094
    fadds f3, f3, f0
lbl_fn_80196428_00001148:
    stfs f3, 0x20(r29)
    mr r3, r29
    lwz r4, 0x4(r29)
    psq_l f1, 0x528(r30), 0, 0
    lfs f2, 0x530(r30)
    stfs f2, 0x10(r29)
    psq_st f1, 0x8(r29), 0, 0
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x1c(r29)
    psq_st f1, 0x14(r29), 0, 0
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80196548(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xa0
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    bl _savegpr_27
    lwz r6, 0x4(r3)
    addi r5, r1, 0x70
    lfs f0, lbl_80882030
    addi r4, r1, 0x64
    lfs f4, 0x2e4(r6)
    addi r31, r6, 0xb0
    psq_l f1, 0x528(r6), 0, 0
    mr r30, r3
    lfs f2, 0x530(r6)
    fcmpo cr0, f4, f0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x534(r6), 0, 0
    stfs f2, 0x78(r1)
    lfs f2, 0x53c(r6)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x6c(r1)
    bge lbl_fn_80196548_000012C8
    lfs f0, lbl_80882040
    addi r6, r1, 0x58
    lfs f3, 0xc(r3)
    lis r4, lbl_80739700@ha
    fdivs f8, f4, f0
    lfs f5, 0x18(r3)
    lfs f0, 0x8(r3)
    lfs f4, 0x14(r3)
    lfs f7, 0x10(r3)
    lfs f6, 0x1c(r3)
    fsubs f9, f3, f5
    lfs f3, 0x20(r3)
    fsubs f10, f0, f4
    lfs f0, 0x68(r1)
    fsubs f11, f7, f6
    stfs f9, 0x38(r1)
    fmuls f9, f9, f8
    stfs f10, 0x34(r1)
    fmuls f7, f10, f8
    fmuls f8, f11, f8
    stfs f11, 0x3c(r1)
    fadds f5, f9, f5
    fadds f4, f7, f4
    stfs f7, 0x28(r1)
    fadds f6, f8, f6
    stfs f4, 0x58(r1)
    fsubs f0, f3, f0
    stfs f5, 0x5c(r1)
    fmr f2, f6
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f0
    stfs f2, 0x78(r1)
    lfd f2, lbl_80739700@l(r4)
    stfs f9, 0x2c(r1)
    stfs f8, 0x30(r1)
    stfs f6, 0x60(r1)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_80881FE8
    fcmpo cr0, f4, f0
    ble lbl_fn_80196548_000012A0
    lfs f0, lbl_80882094
    fsubs f4, f4, f0
lbl_fn_80196548_000012A0:
    lfs f0, lbl_80882098
    fcmpo cr0, f4, f0
    bge lbl_fn_80196548_000012B4
    lfs f0, lbl_80882094
    fadds f4, f4, f0
lbl_fn_80196548_000012B4:
    lfs f3, lbl_80881FDC
    lfs f0, 0x68(r1)
    fmadds f0, f3, f4, f0
    stfs f0, 0x68(r1)
    b lbl_fn_80196548_00001454
lbl_fn_80196548_000012C8:
    lfs f0, lbl_808820C4
    fcmpo cr0, f4, f0
    ble lbl_fn_80196548_0000136C
    fsubs f3, f4, f0
    lfs f0, lbl_80882060
    lfs f9, lbl_80881FBC
    fdivs f0, f3, f0
    fcmpo cr0, f9, f0
    bge lbl_fn_80196548_000012F0
    b lbl_fn_80196548_000012F4
lbl_fn_80196548_000012F0:
    fmr f9, f0
lbl_fn_80196548_000012F4:
    lfs f3, 0x1c(r3)
    addi r5, r1, 0x4c
    lfs f5, 0x10(r3)
    addi r4, r1, 0x70
    lfs f0, 0x18(r3)
    fsubs f8, f3, f5
    lfs f4, 0xc(r3)
    lfs f3, 0x14(r3)
    fsubs f6, f0, f4
    lfs f0, 0x8(r3)
    fmuls f7, f8, f9
    fsubs f3, f3, f0
    stfs f6, 0x20(r1)
    fmuls f6, f6, f9
    fadds f2, f7, f5
    stfs f3, 0x1c(r1)
    fmuls f5, f3, f9
    fadds f3, f6, f4
    stfs f8, 0x24(r1)
    fadds f0, f5, f0
    stfs f3, 0x50(r1)
    stfs f0, 0x4c(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f5, 0x10(r1)
    stfs f6, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f2, 0x54(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x78(r1)
    b lbl_fn_80196548_00001454
lbl_fn_80196548_0000136C:
    psq_l f1, 0x8(r3), 0, 0
    lfs f2, 0x10(r3)
    lfs f3, 0x20(r3)
    lwz r4, lbl_8087F430
    lfs f0, lbl_80881FBC
    stfs f0, 0x9c4(r4)
    lbz r0, 0x2c(r3)
    psq_st f1, 0x0(r5), 0, 0
    cmpwi r0, 0x0
    stfs f2, 0x78(r1)
    stfs f3, 0x68(r1)
    bne lbl_fn_80196548_00001454
    lfs f3, 0x234(r31)
    lfs f0, lbl_808820C8
    fcmpo cr0, f3, f0
    ble lbl_fn_80196548_00001454
    lwz r5, 0x4(r3)
    li r0, 0x1
    stb r0, 0x2c(r3)
    lis r4, lbl_80739F34@ha
    addi r28, r5, 0x534
    mr r3, r31
    addi r4, r4, lbl_80739F34@l
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80196548_000013E0
    li r3, 0x0
    b lbl_fn_80196548_000013EC
lbl_fn_80196548_000013E0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r3, r3, r0
lbl_fn_80196548_000013EC:
    lfs f0, 0x2c(r3)
    lfs f3, 0x1c(r3)
    lfs f4, 0xc(r3)
    lwz r27, lbl_8087F048
    stfs f4, 0x40(r1)
    mr r3, r27
    stfs f3, 0x44(r1)
    stfs f0, 0x48(r1)
    bl fn_800F8548
    mr r29, r3
    lwz r3, 0x28(r30)
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_80881FCC
    stw r0, 0xc(r1)
    mr r3, r27
    lfs f2, lbl_80881FBC
    mr r6, r29
    lwz r4, 0x4(r30)
    mr r8, r28
    addi r7, r1, 0x40
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_80196548_00001454:
    lis r3, lbl_80739700@ha
    lfs f1, 0x64(r1)
    lfd f2, lbl_80739700@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80881FE8
    fcmpo cr0, f3, f0
    ble lbl_fn_80196548_0000147C
    lfs f0, lbl_80882094
    fsubs f3, f3, f0
lbl_fn_80196548_0000147C:
    lfs f0, lbl_80882098
    fcmpo cr0, f3, f0
    bge lbl_fn_80196548_00001490
    lfs f0, lbl_80882094
    fadds f3, f3, f0
lbl_fn_80196548_00001490:
    lis r3, lbl_80739700@ha
    lfs f1, 0x68(r1)
    stfs f3, 0x64(r1)
    lfd f2, lbl_80739700@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80881FE8
    fcmpo cr0, f3, f0
    ble lbl_fn_80196548_000014BC
    lfs f0, lbl_80882094
    fsubs f3, f3, f0
lbl_fn_80196548_000014BC:
    lfs f0, lbl_80882098
    fcmpo cr0, f3, f0
    bge lbl_fn_80196548_000014D0
    lfs f0, lbl_80882094
    fadds f3, f3, f0
lbl_fn_80196548_000014D0:
    lis r3, lbl_80739700@ha
    lfs f1, 0x6c(r1)
    stfs f3, 0x68(r1)
    lfd f2, lbl_80739700@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80881FE8
    fcmpo cr0, f3, f0
    ble lbl_fn_80196548_000014FC
    lfs f0, lbl_80882094
    fsubs f3, f3, f0
lbl_fn_80196548_000014FC:
    lfs f0, lbl_80882098
    fcmpo cr0, f3, f0
    bge lbl_fn_80196548_00001510
    lfs f0, lbl_80882094
    fadds f3, f3, f0
lbl_fn_80196548_00001510:
    addi r3, r1, 0x70
    lwz r6, 0x4(r30)
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x64
    psq_st f1, 0x528(r6), 0, 0
    mr r3, r31
    lfs f2, 0x78(r1)
    li r4, 0x0
    stfs f2, 0x530(r6)
    frsp f2, f3
    psq_l f1, 0x0(r5), 0, 0
    lwz r5, 0x4(r30)
    stfs f3, 0x6c(r1)
    psq_st f1, 0x534(r5), 0, 0
    stfs f2, 0x53c(r5)
    lfs f31, 0x234(r31)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80196548_00001568
    li r3, 0x1
    b lbl_fn_80196548_0000159C
lbl_fn_80196548_00001568:
    lwz r3, 0x24(r30)
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80196548_00001598
    lfs f3, 0x234(r31)
    lfs f0, lbl_808820CC
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80196548_00001598
    li r3, 0x1
    b lbl_fn_80196548_0000159C
lbl_fn_80196548_00001598:
    li r3, 0x0
lbl_fn_80196548_0000159C:
    addi r11, r1, 0xa0
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    bl _restgpr_27
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_80196974(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_8077E9B8@ha
    li r5, 0x0
    stw r0, 0x14(r1)
    addi r6, r6, lbl_8077E9B8@l
    li r0, 0x41
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    stw r4, 0x4(r3)
    stw r6, 0x0(r3)
    stw r5, 0x58c(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    bl fn_8016DA4C
    lwz r3, 0x4(r30)
    li r0, 0x1
    lfs f0, lbl_80881FBC
    li r4, 0x0
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    lfs f1, lbl_80881FCC
    mr r3, r31
    lfs f2, lbl_80881FDC
    li r5, 0x20c
    stfs f0, 0x24c(r31)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881FBC
    mr r3, r30
    stfs f0, 0x238(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80196A18(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80196A20(void)
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
    lwz r5, 0x8(r3)
    lfs f31, 0x2e4(r5)
    addi r3, r5, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80196A20_000016C0
    lwz r3, 0x8(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    li r3, 0x1
    b lbl_fn_80196A20_000016C4
lbl_fn_80196A20_000016C0:
    li r3, 0x0
lbl_fn_80196A20_000016C4:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80196A98(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    stw r29, 0x64(r1)
    mr r29, r3
    lwz r0, 0x18(r3)
    lwz r3, 0x4(r3)
    cmpwi r0, 0x0
    addi r30, r3, 0xb0
    beq lbl_fn_80196A98_00001724
    cmpwi r0, 0x1
    beq lbl_fn_80196A98_00001850
    b lbl_fn_80196A98_00001888
lbl_fn_80196A98_00001724:
    lfs f31, 0x234(r30)
    mr r3, r30
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80196A98_00001888
    li r31, 0x1
    stw r31, 0x34c(r30)
    lfs f0, lbl_80881FBC
    mr r3, r30
    stfs f0, 0x24c(r30)
    li r4, 0x0
    lfs f1, lbl_80881FCC
    li r5, 0x211
    lfs f2, lbl_80881FDC
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881FBC
    stfs f0, 0x238(r30)
    lwz r3, 0x14(r29)
    lwz r4, 0x68(r3)
    lfs f2, 0x5c(r3)
    lwz r6, 0x60(r3)
    lwz r5, 0x64(r3)
    lwz r0, 0x6c(r3)
    lfs f1, 0x70(r3)
    lfs f0, 0x74(r3)
    stfs f2, 0x38(r1)
    lwz r3, 0x4(r4)
    stw r6, 0x3c(r1)
    stw r5, 0x40(r1)
    stw r4, 0x44(r1)
    stw r0, 0x48(r1)
    stfs f1, 0x4c(r1)
    stfs f0, 0x50(r1)
    bl fn_800EFBC4
    cmpwi r3, 0x0
    beq lbl_fn_80196A98_00001828
    lfs f0, lbl_80881FCC
    li r0, -0x1
    lfs f1, lbl_80881FBC
    mr r4, r3
    stfs f0, 0x1c(r1)
    mr r5, r30
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
lbl_fn_80196A98_00001828:
    lwz r3, 0x14(r29)
    li r4, 0x0
    li r5, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    li r0, 0x1
    stw r0, 0x18(r29)
    b lbl_fn_80196A98_00001888
lbl_fn_80196A98_00001850:
    lfs f31, 0x234(r30)
    mr r3, r30
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80196A98_00001888
    lwz r3, 0x4(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    li r3, 0x1
    b lbl_fn_80196A98_0000188C
lbl_fn_80196A98_00001888:
    li r3, 0x0
lbl_fn_80196A98_0000188C:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80196C68(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, 0x18(r3)
    stfd f31, 0x10(r1)
    lwz r3, 0x4(r3)
    cmpwi r0, 0x1
    psq_st f31, 0x18(r1), 0, 0
    addi r3, r3, 0xb0
    stw r31, 0xc(r1)
    li r31, 0x0
    bne lbl_fn_80196C68_000018FC
    lfs f31, 0x234(r3)
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80196C68_000018FC
    li r31, 0x1
lbl_fn_80196C68_000018FC:
    psq_l f31, 0x18(r1), 0, 0
    mr r3, r31
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80196CD4(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    stfd f31, 0x210(r1)
    psq_st f31, 0x218(r1), 0, 0
    stfd f30, 0x200(r1)
    psq_st f30, 0x208(r1), 0, 0
    stfd f29, 0x1f0(r1)
    psq_st f29, 0x1f8(r1), 0, 0
    stfd f28, 0x1e0(r1)
    psq_st f28, 0x1e8(r1), 0, 0
    stfd f27, 0x1d0(r1)
    psq_st f27, 0x1d8(r1), 0, 0
    stfd f26, 0x1c0(r1)
    psq_st f26, 0x1c8(r1), 0, 0
    stw r31, 0x1bc(r1)
    mr r31, r3
    stw r30, 0x1b8(r1)
    stw r29, 0x1b4(r1)
    lwz r4, 0x4(r3)
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80196CD4_00001998
    lwz r12, 0x0(r4)
    mr r3, r4
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    li r3, 0x1
    b lbl_fn_80196CD4_00001DB4
lbl_fn_80196CD4_00001998:
    addi r29, r4, 0xb0
    li r4, 0x0
    lfs f26, 0x234(r29)
    mr r3, r29
    bl fn_80097D7C
    fcmpo cr0, f26, f1
    cror eq, gt, eq
    bne lbl_fn_80196CD4_000019CC
    lwz r4, lbl_8087EFA8
    li r3, 0x1
    lfs f0, lbl_80881FBC
    stfs f0, 0x3a4(r4)
    b lbl_fn_80196CD4_00001DB4
lbl_fn_80196CD4_000019CC:
    lfs f26, 0x234(r29)
    mr r3, r29
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_808820D0
    fsubs f0, f1, f0
    fcmpo cr0, f26, f0
    cror eq, gt, eq
    bne lbl_fn_80196CD4_00001A14
    lfs f7, 0x238(r29)
    lfs f0, lbl_80881FDC
    lfs f8, lbl_80882078
    fsubs f0, f7, f0
    fcmpo cr0, f8, f0
    ble lbl_fn_80196CD4_00001A0C
    b lbl_fn_80196CD4_00001A10
lbl_fn_80196CD4_00001A0C:
    fmr f8, f0
lbl_fn_80196CD4_00001A10:
    stfs f8, 0x238(r29)
lbl_fn_80196CD4_00001A14:
    lwz r3, 0x4(r31)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80196CD4_00001A60
    lwz r3, lbl_8087F490
    li r0, 0x1
    stw r0, 0x738(r3)
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80196CD4_00001A60
    lwz r3, lbl_8087F0A8
    li r4, 0x0
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_80196CD4_00001A60
    lwz r3, 0xc(r31)
    subi r0, r3, 0x1
    stw r0, 0xc(r31)
lbl_fn_80196CD4_00001A60:
    lwz r4, 0x8(r31)
    addi r30, r1, 0x180
    lfs f8, lbl_808820D4
    addi r3, r1, 0x120
    lfs f7, lbl_80881FCC
    lfs f0, lbl_808820D8
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    fmr f1, f0
    psq_st f2, 0x8(r30), 0, 0
    fmr f2, f7
    psq_st f3, 0x10(r30), 0, 0
    fmr f3, f8
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    stfs f0, 0x68(r1)
    stfs f7, 0x6c(r1)
    stfs f8, 0x70(r1)
    bl fn_805F90D0
    mr r3, r30
    addi r4, r1, 0x120
    addi r5, r1, 0x150
    bl fn_805F89F0
    addi r5, r1, 0x150
    lfs f7, lbl_80881FCC
    psq_l f1, 0x0(r5), 0, 0
    addi r29, r1, 0x98
    psq_l f2, 0x8(r5), 0, 0
    addi r6, r1, 0x8c
    psq_l f3, 0x10(r5), 0, 0
    addi r7, r1, 0x80
    psq_l f4, 0x18(r5), 0, 0
    mr r3, r30
    psq_l f5, 0x20(r5), 0, 0
    mr r4, r29
    psq_l f6, 0x28(r5), 0, 0
    mr r5, r29
    psq_st f2, 0x8(r30), 0, 0
    lfs f0, lbl_80881FBC
    psq_st f4, 0x18(r30), 0, 0
    lfs f31, 0x18c(r1)
    psq_st f6, 0x28(r30), 0, 0
    lfs f13, 0x19c(r1)
    lfs f12, 0x1ac(r1)
    psq_st f1, 0x0(r30), 0, 0
    lfs f8, lbl_808820DC
    psq_st f3, 0x10(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    lwz r8, 0x4(r31)
    stfs f31, 0xa4(r1)
    lfs f10, 0x52c(r8)
    lfs f9, 0x528(r8)
    fsubs f27, f13, f10
    lfs f11, 0x530(r8)
    fsubs f28, f31, f9
    stfs f7, 0x80(r1)
    fsubs f26, f12, f11
    fmuls f29, f27, f8
    fmuls f30, f28, f8
    stfs f7, 0x84(r1)
    fmuls f31, f26, f8
    fadds f10, f29, f10
    stfs f13, 0xa8(r1)
    fadds f8, f30, f9
    fadds f9, f31, f11
    stfs f10, 0x90(r1)
    stfs f8, 0x8c(r1)
    fmr f2, f9
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x528(r8), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x530(r8)
    fmr f2, f0
    stfs f12, 0xac(r1)
    stfs f28, 0x5c(r1)
    stfs f27, 0x60(r1)
    stfs f26, 0x64(r1)
    stfs f30, 0x50(r1)
    stfs f29, 0x54(r1)
    stfs f31, 0x58(r1)
    stfs f9, 0x94(r1)
    stfs f7, 0x18c(r1)
    stfs f7, 0x19c(r1)
    stfs f7, 0x1ac(r1)
    stfs f0, 0x88(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xa0(r1)
    bl fn_805F93C0
    lfs f2, 0xa0(r1)
    addi r30, r1, 0x74
    psq_l f1, 0x0(r29), 0, 0
    fabs f7, f2
    lfs f0, lbl_80881FD0
    psq_st f1, 0x0(r30), 0, 0
    frsp f7, f7
    stfs f2, 0x7c(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_80196CD4_00001C24
    lfs f7, 0x74(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f7, f0
    ble lbl_fn_80196CD4_00001C18
    lfs f0, lbl_80881FD4
    b lbl_fn_80196CD4_00001C1C
lbl_fn_80196CD4_00001C18:
    lfs f0, lbl_80881FD8
lbl_fn_80196CD4_00001C1C:
    stfs f0, 0x48(r1)
    b lbl_fn_80196CD4_00001C38
lbl_fn_80196CD4_00001C24:
    frsp f2, f2
    lfs f1, 0x74(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80196CD4_00001C38:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xb0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80881FCC
    addi r4, r1, 0x38
    lfs f31, 0xb8(r1)
    mr r5, r4
    lfs f30, 0xb4(r1)
    addi r3, r1, 0xe0
    lfs f29, 0xb0(r1)
    lfs f28, 0xc8(r1)
    lfs f27, 0xc4(r1)
    lfs f26, 0xc0(r1)
    lfs f13, 0xd8(r1)
    lfs f12, 0xd4(r1)
    lfs f11, 0xd0(r1)
    lfs f10, 0xdc(r1)
    lfs f9, 0xcc(r1)
    lfs f8, 0xbc(r1)
    lfs f0, lbl_80881FBC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x7c(r1)
    stfs f7, 0x110(r1)
    stfs f7, 0x114(r1)
    stfs f7, 0x118(r1)
    stfs f0, 0x11c(r1)
    stfs f29, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f29, 0xe0(r1)
    stfs f30, 0xe4(r1)
    stfs f31, 0xe8(r1)
    stfs f26, 0x14(r1)
    stfs f27, 0x18(r1)
    stfs f28, 0x1c(r1)
    stfs f26, 0xf0(r1)
    stfs f27, 0xf4(r1)
    stfs f28, 0xf8(r1)
    stfs f11, 0x20(r1)
    stfs f12, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f11, 0x100(r1)
    stfs f12, 0x104(r1)
    stfs f13, 0x108(r1)
    stfs f8, 0x2c(r1)
    stfs f9, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f8, 0xec(r1)
    stfs f9, 0xfc(r1)
    stfs f10, 0x10c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80881FD0
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80196CD4_00001D54
    lfs f7, 0x3c(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f7, f0
    ble lbl_fn_80196CD4_00001D44
    lfs f0, lbl_80881FD4
    b lbl_fn_80196CD4_00001D48
lbl_fn_80196CD4_00001D44:
    lfs f0, lbl_80881FD8
lbl_fn_80196CD4_00001D48:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80196CD4_00001D68
lbl_fn_80196CD4_00001D54:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80196CD4_00001D68:
    addi r3, r1, 0x44
    lfs f2, lbl_80881FCC
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x4(r31)
    stfs f2, 0x4c(r1)
    stfs f2, 0x7c(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    lwz r0, 0xc(r31)
    psq_st f1, 0x0(r30), 0, 0
    cmpwi r0, 0x0
    bgt lbl_fn_80196CD4_00001DB0
    lwz r4, lbl_8087EFA8
    li r3, 0x1
    lfs f0, lbl_80881FBC
    stfs f0, 0x3a4(r4)
    b lbl_fn_80196CD4_00001DB4
lbl_fn_80196CD4_00001DB0:
    li r3, 0x0
lbl_fn_80196CD4_00001DB4:
    lwz r0, 0x224(r1)
    psq_l f31, 0x218(r1), 0, 0
    lfd f31, 0x210(r1)
    psq_l f30, 0x208(r1), 0, 0
    lfd f30, 0x200(r1)
    psq_l f29, 0x1f8(r1), 0, 0
    lfd f29, 0x1f0(r1)
    psq_l f28, 0x1e8(r1), 0, 0
    lfd f28, 0x1e0(r1)
    psq_l f27, 0x1d8(r1), 0, 0
    lfd f27, 0x1d0(r1)
    psq_l f26, 0x1c8(r1), 0, 0
    lfd f26, 0x1c0(r1)
    lwz r31, 0x1bc(r1)
    lwz r30, 0x1b8(r1)
    lwz r29, 0x1b4(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}
