#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_17(void);
extern void _savegpr_17(void);
extern void dtor_80084684(void);
extern void fn_80063484(void);
extern void fn_800844D8(void);
extern void fn_800A555C(void);
extern void fn_800BFAC8(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800DC880(void);
extern void fn_800E2DD4(void);
extern void fn_800E2FE0(void);
extern void fn_800E854C(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_80105BD8(void);
extern void fn_8012D8B8(void);
extern void fn_8012DB04(void);
extern void fn_80139560(void);
extern void fn_80144710(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_80151448(void);
extern void fn_8015495C(void);
extern void fn_8015EB2C(void);
extern void fn_80161570(void);
extern void fn_8016AB0C(void);
extern void fn_8016DDB0(void);
extern void fn_8016E4C4(void);
extern void fn_8016EB48(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80237518(void);
extern void fn_802375C4(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A184(void);
extern void fn_8023A680(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_803E2A30(void);
extern void fn_803E3384(void);
extern void fn_80473E8C(void);
extern void fn_8053E6E4(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80686EA4(void);
extern void fn_8068A850(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_8075E148[];
extern u8 lbl_8075E300[];
extern u8 lbl_8075E308[];
extern u8 lbl_8075E324[];
extern u8 lbl_80775A88[];
extern u8 lbl_807940F0[];
extern u8 lbl_80794608[];

/* Small data declarations */
extern u32 lbl_8087E4D8;
extern u32 lbl_8087E4DC;
extern u32 lbl_8087E4E0;
extern u32 lbl_8087E4E4;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F888;
extern u32 lbl_8087F8A0;
extern u32 lbl_80887CA0;
extern u32 lbl_80887CD8;
extern u32 lbl_80887CDC;
extern u32 lbl_80887CE0;
extern u32 lbl_80887CE4;
extern u32 lbl_80887CE8;
extern u32 lbl_80887CEC;
extern u32 lbl_80887CF0;
extern u32 lbl_80887CF4;
extern u32 lbl_80887CF8;
extern u32 lbl_80887CFC;
extern u32 lbl_80887D00;
extern u32 lbl_80887D04;
extern u32 lbl_80887D08;
extern u32 lbl_80887D0C;
extern u32 lbl_80887D10;
extern u32 lbl_80887D14;
extern u32 lbl_80887D18;
extern u32 lbl_80887D1C;
extern u32 lbl_80887D20;
extern u32 lbl_80887D24;
extern u32 lbl_80887D28;
extern u32 lbl_80887D2C;
extern u32 lbl_80887D30;
extern u32 lbl_80887D34;

/* Function declarations */
void fn_80545CEC(void);
void fn_80545FFC(void);
void fn_80546004(void);
void fn_805460D0(void);
void fn_8054616C(void);
void fn_8054622C(void);
void fn_805469D4(void);
void fn_80546A4C(void);
void fn_80546B88(void);
void fn_805473E0(void);
void fn_80547468(void);
void fn_8054746C(void);

asm void fn_80545CEC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    stw r28, 0x40(r1)
    lis r28, lbl_8075E148@ha
    addi r28, r28, lbl_8075E148@l
    addi r3, r28, 0xdd
    bl fn_800DC880
    lis r29, lbl_807940F0@ha
    li r4, 0x0
    addi r29, r29, lbl_807940F0@l
    stw r3, 0x4(r29)
    addi r3, r28, 0xe2
    stw r28, 0xc(r29)
    bl fn_800DC880
    stw r3, 0x1c(r29)
    li r30, 0x1
    addi r3, r28, 0xe7
    li r4, 0x0
    stw r30, 0x24(r29)
    bl fn_800DC880
    stw r3, 0x34(r29)
    li r31, 0x0
    addi r3, r28, 0xf1
    li r4, 0x0
    stw r31, 0x3c(r29)
    bl fn_800DC880
    stw r3, 0x4c(r29)
    li r0, 0x2
    addi r3, r28, 0xfa
    li r4, 0x0
    stw r0, 0x54(r29)
    bl fn_800DC880
    stw r3, 0x64(r29)
    addi r3, r28, 0x101
    li r4, 0x0
    stw r31, 0x6c(r29)
    bl fn_800DC880
    stw r3, 0x7c(r29)
    addi r3, r28, 0x109
    li r4, 0x0
    stw r31, 0x84(r29)
    bl fn_800DC880
    stw r3, 0x94(r29)
    addi r3, r28, 0x112
    li r4, 0x0
    stw r28, 0x9c(r29)
    bl fn_800DC880
    stw r3, 0xac(r29)
    addi r3, r28, 0x11c
    li r4, 0x0
    stw r31, 0xb4(r29)
    bl fn_800DC880
    stw r3, 0xc4(r29)
    addi r3, r28, 0x122
    li r4, 0x0
    stw r30, 0xcc(r29)
    bl fn_800DC880
    stw r3, 0xdc(r29)
    addi r3, r28, 0x126
    li r4, 0x0
    stw r30, 0xe4(r29)
    bl fn_800DC880
    lfs f0, lbl_80887CA0
    li r4, 0x0
    stfs f0, 0x38(r1)
    lwz r0, 0x38(r1)
    stw r3, 0xf4(r29)
    addi r3, r28, 0x12f
    stw r0, 0xfc(r29)
    bl fn_800DC880
    lfs f0, lbl_80887CA0
    li r4, 0x0
    stfs f0, 0x34(r1)
    lwz r0, 0x34(r1)
    stw r3, 0x10c(r29)
    addi r3, r28, 0x138
    stw r0, 0x114(r29)
    bl fn_800DC880
    lfs f0, lbl_80887CA0
    li r4, 0x0
    stfs f0, 0x30(r1)
    lwz r0, 0x30(r1)
    stw r3, 0x124(r29)
    addi r3, r28, 0x141
    stw r0, 0x12c(r29)
    bl fn_800DC880
    lfs f0, lbl_80887CA0
    li r4, 0x0
    stfs f0, 0x2c(r1)
    lwz r0, 0x2c(r1)
    stw r3, 0x13c(r29)
    addi r3, r28, 0x147
    stw r0, 0x144(r29)
    bl fn_800DC880
    lfs f0, lbl_80887CA0
    li r4, 0x0
    stfs f0, 0x28(r1)
    lwz r0, 0x28(r1)
    stw r3, 0x154(r29)
    addi r3, r28, 0x14d
    stw r0, 0x15c(r29)
    bl fn_800DC880
    lfs f0, lbl_80887CA0
    li r4, 0x0
    stfs f0, 0x24(r1)
    lwz r0, 0x24(r1)
    stw r3, 0x16c(r29)
    addi r3, r28, 0x153
    stw r0, 0x174(r29)
    bl fn_800DC880
    lfs f0, lbl_80887CA0
    li r4, 0x0
    stfs f0, 0x20(r1)
    lwz r0, 0x20(r1)
    stw r3, 0x184(r29)
    addi r3, r28, 0x15b
    stw r0, 0x18c(r29)
    bl fn_800DC880
    stw r3, 0x19c(r29)
    addi r3, r28, 0x163
    li r4, 0x0
    stw r31, 0x1a4(r29)
    bl fn_800DC880
    lfs f0, lbl_80887CA0
    li r4, 0x0
    stfs f0, 0x1c(r1)
    lwz r0, 0x1c(r1)
    stw r3, 0x1b4(r29)
    addi r3, r28, 0x16d
    stw r0, 0x1bc(r29)
    bl fn_800DC880
    lfs f0, lbl_80887CA0
    li r4, 0x0
    stfs f0, 0x18(r1)
    lwz r0, 0x18(r1)
    stw r3, 0x1cc(r29)
    addi r3, r28, 0x177
    stw r0, 0x1d4(r29)
    bl fn_800DC880
    lfs f0, lbl_80887CA0
    li r4, 0x0
    stfs f0, 0x14(r1)
    lwz r0, 0x14(r1)
    stw r3, 0x1e4(r29)
    addi r3, r28, 0x181
    stw r0, 0x1ec(r29)
    bl fn_800DC880
    lfs f0, lbl_80887CA0
    li r4, 0x0
    stfs f0, 0x10(r1)
    lwz r0, 0x10(r1)
    stw r3, 0x1fc(r29)
    addi r3, r28, 0x18b
    stw r0, 0x204(r29)
    bl fn_800DC880
    lfs f0, lbl_80887CA0
    li r4, 0x0
    stfs f0, 0xc(r1)
    lwz r0, 0xc(r1)
    stw r3, 0x214(r29)
    addi r3, r28, 0x195
    stw r0, 0x21c(r29)
    bl fn_800DC880
    lfs f0, lbl_80887CA0
    li r4, 0x0
    stfs f0, 0x8(r1)
    lwz r0, 0x8(r1)
    stw r3, 0x22c(r29)
    addi r3, r28, 0x19f
    stw r0, 0x234(r29)
    bl fn_800DC880
    stw r3, 0x244(r29)
    addi r3, r28, 0x1a3
    li r4, 0x0
    stw r30, 0x24c(r29)
    bl fn_800DC880
    stw r3, 0x25c(r29)
    addi r3, r28, 0x1ab
    li r4, 0x0
    stw r31, 0x264(r29)
    bl fn_800DC880
    stw r31, 0x27c(r29)
    lwz r31, 0x4c(r1)
    stw r3, 0x274(r29)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80545FFC(void)
{
    nofralloc
    subi r3, r3, 0x48
    b fn_8053E6E4
}

asm void fn_80546004(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r5, 0x20(r5)
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_8035B694
    lis r3, lbl_80794608@ha
    li r30, 0x0
    addi r3, r3, lbl_80794608@l
    stw r3, 0x0(r29)
    addi r3, r29, 0x14b8
    stw r30, 0x14b0(r29)
    stw r30, 0x14b4(r29)
    bl fn_80237518
    addi r3, r29, 0x14c4
    bl fn_80237518
    addi r3, r29, 0x14d0
    bl fn_802377B8
    lwz r0, 0x54c(r29)
    lis r31, lbl_8075E324@ha
    stw r30, 0x14e0(r29)
    addi r3, r29, 0x14b8
    oris r0, r0, 0x200
    addi r4, r31, lbl_8075E324@l
    stw r30, 0x14e4(r29)
    stw r30, 0x14e8(r29)
    stw r30, 0x14f8(r29)
    stw r30, 0x14fc(r29)
    stw r0, 0x54c(r29)
    bl fn_80237654
    addi r31, r31, lbl_8075E324@l
    addi r3, r29, 0x14c4
    addi r4, r31, 0xd
    bl fn_80237654
    addi r3, r29, 0x14d0
    addi r4, r31, 0x1f
    bl fn_8023780C
    lwz r0, 0x12a8(r29)
    mr r3, r29
    ori r0, r0, 0x2000
    stw r0, 0x12a8(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805460D0(void)
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
    beq lbl_fn_805460D0_00000460
    addic. r31, r3, 0x14d0
    beq lbl_fn_805460D0_0000042C
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_805460D0_0000042C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_805460D0_0000042C:
    addi r3, r29, 0x14c4
    li r4, -0x1
    bl fn_802375C4
    addi r3, r29, 0x14b8
    li r4, -0x1
    bl fn_802375C4
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_805460D0_00000460
    mr r3, r29
    bl dtor_80084684
lbl_fn_805460D0_00000460:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8054616C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r3, 0x14b8
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_8054616C_000004C4
    addi r3, r31, 0x14c4
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_8054616C_000004C4
    addi r3, r31, 0x14d0
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_8054616C_000004CC
lbl_fn_8054616C_000004C4:
    li r3, 0x0
    b lbl_fn_8054616C_0000052C
lbl_fn_8054616C_000004CC:
    mr r3, r31
    bl fn_800E2DD4
    cmpwi r3, 0x0
    beq lbl_fn_8054616C_00000528
    lwz r3, 0x940(r31)
    lis r0, 0x4330
    lis r4, lbl_8075E300@ha
    stw r0, 0x8(r1)
    xoris r3, r3, 0x8000
    lfd f2, lbl_8075E300@l(r4)
    stw r3, 0xc(r1)
    lwz r5, 0x7ec(r31)
    lfd f1, 0x8(r1)
    ori r3, r5, 0x180
    lfs f0, lbl_80887CD8
    fsubs f1, f1, f2
    oris r0, r3, 0x1
    ori r0, r0, 0x41
    stw r0, 0x7ec(r31)
    li r3, 0x1
    fmuls f0, f0, f1
    stfs f0, 0x14ec(r31)
    b lbl_fn_8054616C_0000052C
lbl_fn_8054616C_00000528:
    li r3, 0x0
lbl_fn_8054616C_0000052C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8054622C(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0x110
    bl _savegpr_17
    lwz r5, 0x58c(r3)
    mr r31, r3
    lwz r4, 0x14a8(r3)
    lwz r0, 0x12a4(r3)
    cmpwi r5, 0x6
    oris r4, r4, 0x400
    stw r4, 0x14a8(r3)
    oris r0, r0, 0x400
    stw r0, 0x12a4(r3)
    beq lbl_fn_8054622C_00000590
    cmpwi r5, 0x7
    beq lbl_fn_8054622C_000005BC
    cmpwi r5, 0x2
    beq lbl_fn_8054622C_000006B4
    b lbl_fn_8054622C_00000CA4
lbl_fn_8054622C_00000590:
    bl fn_80546B88
    lwz r4, 0x14a8(r31)
    lwz r3, 0x12a4(r31)
    lwz r0, 0x54c(r31)
    rlwinm r4, r4, 0, 6, 4
    rlwinm r3, r3, 0, 6, 4
    stw r4, 0x14a8(r31)
    ori r0, r0, 0x2000
    stw r3, 0x12a4(r31)
    stw r0, 0x54c(r31)
    b lbl_fn_8054622C_00000CB4
lbl_fn_8054622C_000005BC:
    bl fn_80139560
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_8054622C_0000067C
    lfs f3, 0x52c(r31)
    li r0, 0x0
    lfs f0, lbl_80887CDC
    stw r0, 0x58c(r31)
    fcmpo cr0, f3, f0
    ble lbl_fn_8054622C_00000650
    lfs f3, lbl_80887CE0
    addi r3, r1, 0x90
    lfs f0, lbl_80887CE4
    li r4, 0x79
    stfs f3, 0x50(r1)
    stfs f3, 0x54(r1)
    stfs f0, 0x58(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x50
    addi r3, r1, 0x90
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x58(r1)
    addi r3, r1, 0x44
    lfs f4, lbl_80887CE8
    lfs f3, 0x54(r1)
    fmuls f2, f0, f4
    lfs f0, 0x50(r1)
    fmuls f3, f3, f4
    fmuls f0, f0, f4
    stfs f2, 0x4c(r1)
    stfs f0, 0x44(r1)
    stfs f3, 0x48(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x6b8(r31), 0, 0
    stfs f2, 0x6c0(r31)
lbl_fn_8054622C_00000650:
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
    mr r3, r31
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
lbl_fn_8054622C_0000067C:
    mr r3, r31
    bl fn_80145334
    mr r3, r31
    bl fn_8014C540
    lwz r4, 0x14a8(r31)
    lwz r3, 0x12a4(r31)
    lwz r0, 0x54c(r31)
    rlwinm r4, r4, 0, 6, 4
    rlwinm r3, r3, 0, 6, 4
    stw r4, 0x14a8(r31)
    rlwinm r0, r0, 0, 19, 17
    stw r3, 0x12a4(r31)
    stw r0, 0x54c(r31)
    b lbl_fn_8054622C_00000CB4
lbl_fn_8054622C_000006B4:
    lwz r0, 0x14e0(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8054622C_00000858
    lwz r5, 0x14e8(r3)
    lis r0, 0x4330
    lis r4, lbl_8075E300@ha
    stw r0, 0xc0(r1)
    addi r7, r5, 0x1
    lfd f5, lbl_8075E300@l(r4)
    xoris r5, r7, 0x8000
    stw r5, 0xc4(r1)
    lfs f3, lbl_80887CF8
    addi r4, r31, 0x14b8
    lfd f0, 0xc0(r1)
    addi r6, r1, 0x68
    stw r5, 0xcc(r1)
    li r5, 0x0
    fsubs f4, f0, f5
    lfs f8, lbl_80887CF4
    stw r0, 0xc8(r1)
    lfs f7, 0x540(r3)
    lfd f0, 0xc8(r1)
    fdivs f13, f4, f3
    lfs f6, 0x544(r3)
    lfs f4, 0x548(r3)
    lfs f12, 0x52c(r3)
    lfs f11, lbl_80887CEC
    lfs f10, 0x538(r3)
    fsubs f0, f0, f5
    lfs f9, lbl_80887CF0
    fmuls f5, f6, f8
    stw r7, 0x14e8(r3)
    fadds f11, f12, f11
    fadds f9, f10, f9
    fmuls f7, f7, f8
    stfs f11, 0x52c(r3)
    fmuls f4, f4, f8
    fdivs f6, f0, f3
    stfs f9, 0x538(r3)
    stfs f7, 0x540(r3)
    stfs f5, 0x544(r3)
    stfs f4, 0x548(r3)
    lfs f4, lbl_8087E4DC
    lfs f5, lbl_8087E4D8
    lfs f0, lbl_8087E4E4
    lfs f3, lbl_8087E4E0
    fsubs f4, f4, f5
    lwz r3, lbl_8087F3C0
    fsubs f0, f0, f3
    fmadds f4, f13, f4, f5
    fmadds f0, f6, f0, f3
    stfs f4, 0x68(r1)
    stfs f4, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f0, 0x74(r1)
    bl fn_8023A184
    mr r3, r31
    bl fn_80145334
    mr r3, r31
    bl fn_8014C540
    lwz r0, 0x14e8(r31)
    cmpwi r0, 0x3c
    ble lbl_fn_8054622C_00000C94
    addi r3, r1, 0x5c
    psq_l f1, 0x528(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r4, r31, 0x14b8
    lfs f2, 0x530(r31)
    li r5, 0x0
    lfs f3, 0x60(r1)
    li r6, 0x1
    lfs f0, lbl_80887CFC
    stfs f2, 0x64(r1)
    fadds f0, f3, f0
    lwz r3, lbl_8087F3C0
    stfs f0, 0x60(r1)
    bl fn_80239DAC
    lwz r18, lbl_8087F048
    mr r3, r18
    bl fn_800F8548
    mr r17, r3
    li r3, 0x7f1
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_80887CE0
    mr r5, r3
    stw r0, 0xc(r1)
    mr r3, r18
    lfs f2, lbl_80887CE4
    mr r4, r31
    mr r6, r17
    addi r7, r31, 0x528
    addi r8, r31, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    li r0, 0x2
    stw r0, 0x14e0(r31)
    b lbl_fn_8054622C_00000C94
lbl_fn_8054622C_00000858:
    cmpwi r0, 0x2
    bne lbl_fn_8054622C_00000884
    lwz r12, 0x0(r3)
    lwz r12, 0xf0(r12)
    mtctr r12
    bctrl
    mr r3, r31
    bl fn_80145334
    mr r3, r31
    bl fn_8014C540
    b lbl_fn_8054622C_00000C94
lbl_fn_8054622C_00000884:
    bl fn_8015EB2C
    cmpwi r3, 0x0
    bne lbl_fn_8054622C_000008B8
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xf0(r12)
    mtctr r12
    bctrl
    mr r3, r31
    bl fn_80145334
    mr r3, r31
    bl fn_8014C540
    b lbl_fn_8054622C_00000C94
lbl_fn_8054622C_000008B8:
    lwz r3, lbl_8087F048
    addi r4, r31, 0xb0
    bl fn_80105BD8
    li r20, 0x0
    stw r20, 0x38(r1)
    lwz r5, lbl_8087F4A0
    lis r3, __files@ha
    lis r4, lbl_8075E324@ha
    stw r20, 0x3c(r1)
    addi r22, r4, lbl_8075E324@l
    addi r23, r3, __files@l
    stw r20, 0x40(r1)
    addi r24, r1, 0x40
    addi r18, r1, 0x78
    lis r27, 0xcccd
    lwz r30, 0x48(r5)
    lis r21, 0x4000
    lis r26, 0x1555
    lis r28, 0x2aab
    lis r29, lbl_80775A88@ha
    b lbl_fn_8054622C_00000B5C
lbl_fn_8054622C_0000090C:
    lwz r0, 0x48(r30)
    cmpwi r0, 0x1391
    bne lbl_fn_8054622C_00000B58
    lwz r0, 0x54(r30)
    cmpwi r0, 0x2
    bne lbl_fn_8054622C_00000B58
    lwz r4, 0x3c(r1)
    lwz r3, 0x40(r1)
    cmplw r4, r3
    bge lbl_fn_8054622C_00000950
    addi r4, r4, 0x1
    lwz r3, 0x38(r1)
    slwi r0, r4, 2
    stw r4, 0x3c(r1)
    add r3, r3, r0
    stw r30, -0x4(r3)
    b lbl_fn_8054622C_00000B58
lbl_fn_8054622C_00000950:
    subi r0, r21, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_8054622C_00000974
    addi r4, r22, 0x2c
    addi r3, r23, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8054622C_00000974:
    lwz r3, 0x3c(r1)
    subi r0, r21, 0x1
    lwz r25, 0x40(r1)
    addi r3, r3, 0x1
    stw r20, 0x78(r1)
    subf r3, r25, r3
    subf r0, r25, r0
    cmplw r3, r0
    stw r20, 0x7c(r1)
    stw r20, 0x80(r1)
    stw r24, 0x84(r1)
    stw r20, 0x88(r1)
    stw r3, 0x20(r1)
    ble lbl_fn_8054622C_000009C0
    addi r4, r22, 0x2c
    addi r3, r23, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8054622C_000009C0:
    addi r0, r26, 0x5555
    cmplw r25, r0
    bge lbl_fn_8054622C_00000A08
    addi r4, r25, 0x1
    subi r5, r27, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x20(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x18
    srwi r4, r4, 2
    stw r4, 0x18(r1)
    cmplw r4, r0
    bge lbl_fn_8054622C_000009FC
    addi r3, r1, 0x20
lbl_fn_8054622C_000009FC:
    lwz r0, 0x0(r3)
    add r25, r25, r0
    b lbl_fn_8054622C_00000A44
lbl_fn_8054622C_00000A08:
    subi r0, r28, 0x5556
    cmplw r25, r0
    bge lbl_fn_8054622C_00000A40
    addi r3, r25, 0x1
    lwz r0, 0x20(r1)
    srwi r3, r3, 1
    stw r3, 0x1c(r1)
    cmplw r3, r0
    addi r3, r1, 0x1c
    bge lbl_fn_8054622C_00000A34
    addi r3, r1, 0x20
lbl_fn_8054622C_00000A34:
    lwz r0, 0x0(r3)
    add r25, r25, r0
    b lbl_fn_8054622C_00000A44
lbl_fn_8054622C_00000A40:
    subi r25, r21, 0x1
lbl_fn_8054622C_00000A44:
    subi r0, r21, 0x1
    cmplw r25, r0
    ble lbl_fn_8054622C_00000A64
    addi r4, r22, 0x2c
    addi r3, r23, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8054622C_00000A64:
    slwi r3, r25, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r19, r3
    bne lbl_fn_8054622C_00000A8C
    addi r3, r23, 0xa0
    addi r4, r29, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8054622C_00000A8C:
    lwz r5, 0x3c(r1)
    lwz r0, 0x7c(r1)
    slwi r4, r5, 2
    stw r19, 0x78(r1)
    slwi r3, r0, 2
    stw r25, 0x80(r1)
    add r0, r19, r4
    stw r5, 0x88(r1)
    stwx r30, r3, r0
    lwz r0, 0x3c(r1)
    lwz r4, 0x7c(r1)
    lwz r17, 0x38(r1)
    slwi r0, r0, 2
    addi r5, r4, 0x1
    stw r5, 0x7c(r1)
    add r3, r17, r0
    lwz r0, 0x88(r1)
    subf r3, r17, r3
    srawi r4, r3, 2
    lwz r3, 0x78(r1)
    addze r19, r4
    subf r0, r19, r0
    stw r0, 0x88(r1)
    slwi r25, r19, 2
    mr r4, r17
    slwi r0, r0, 2
    mr r5, r25
    add r3, r3, r0
    bl memcpy
    mr r3, r17
    mr r5, r25
    li r4, 0x0
    bl memset
    lwz r0, 0x7c(r1)
    cmpwi r18, 0x0
    lwz r6, 0x40(r1)
    lwz r4, 0x80(r1)
    add r5, r0, r19
    lwz r3, 0x38(r1)
    lwz r0, 0x78(r1)
    stw r4, 0x40(r1)
    stw r6, 0x80(r1)
    stw r0, 0x38(r1)
    stw r3, 0x78(r1)
    stw r5, 0x3c(r1)
    stw r20, 0x7c(r1)
    beq lbl_fn_8054622C_00000B58
    cmpwi r3, 0x0
    beq lbl_fn_8054622C_00000B58
    stw r20, 0x7c(r1)
    bl dtor_80084684
lbl_fn_8054622C_00000B58:
    lwz r30, 0x5c(r30)
lbl_fn_8054622C_00000B5C:
    cmpwi r30, 0x0
    bne lbl_fn_8054622C_0000090C
    lwz r17, 0x3c(r1)
    cmpwi r17, 0x0
    bne lbl_fn_8054622C_00000B78
    li r17, 0x0
    b lbl_fn_8054622C_00000B94
lbl_fn_8054622C_00000B78:
    bl fn_80680CF8
    divwu r0, r3, r17
    lwz r4, 0x38(r1)
    mullw r0, r0, r17
    subf r0, r0, r3
    slwi r0, r0, 2
    lwzx r17, r4, r0
lbl_fn_8054622C_00000B94:
    addic. r0, r1, 0x38
    beq lbl_fn_8054622C_00000BC0
    beq lbl_fn_8054622C_00000BC0
    beq lbl_fn_8054622C_00000BC0
    lwz r3, 0x38(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8054622C_00000BC0
    lwz r0, 0x3c(r1)
    subf r0, r0, r0
    stw r0, 0x3c(r1)
    bl dtor_80084684
lbl_fn_8054622C_00000BC0:
    mr r3, r31
    li r4, 0x0
    bl fn_8016E4C4
    li r0, 0x6
    stw r17, 0x14dc(r31)
    lfs f3, lbl_80887CD8
    addi r3, r31, 0x14b8
    stw r0, 0x58c(r31)
    li r4, 0x0
    lfs f0, lbl_80887D00
    stfs f3, 0x28(r1)
    stfs f3, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    bl fn_80232B7C
    li r18, 0x0
    stw r18, 0x8(r1)
    li r0, -0x1
    li r17, 0x1
    stw r0, 0xc(r1)
    addi r4, r31, 0x14b8
    lfs f1, lbl_80887CE4
    addi r7, r31, 0xb8
    stw r17, 0x10(r1)
    addi r10, r1, 0x28
    li r5, -0x1
    li r6, 0x5
    lwz r3, lbl_8087F3C0
    li r8, 0x0
    li r9, 0x0
    bl fn_8023A680
    lfs f3, 0x52c(r31)
    mr r3, r31
    lfs f0, lbl_80887D04
    fadds f0, f3, f0
    stfs f0, 0x52c(r31)
    bl fn_80144710
    addi r3, r31, 0x7d4
    bl fn_8012D8B8
    lfs f0, 0x14ec(r31)
    li r4, 0xfa
    stfs f0, 0x7d8(r31)
    stw r17, 0xd18(r31)
    stw r18, 0x14b4(r31)
    stw r18, 0x14f0(r31)
    lwz r3, lbl_8087F430
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8054622C_00000C94
    lwz r3, lbl_8087F430
    li r4, 0xfa
    lwz r5, 0x58(r31)
    bl fn_80370AE4
lbl_fn_8054622C_00000C94:
    lwz r0, 0x54c(r31)
    rlwinm r0, r0, 0, 19, 17
    stw r0, 0x54c(r31)
    b lbl_fn_8054622C_00000CB4
lbl_fn_8054622C_00000CA4:
    bl fn_800E2FE0
    lwz r0, 0x54c(r31)
    rlwinm r0, r0, 0, 19, 17
    stw r0, 0x54c(r31)
lbl_fn_8054622C_00000CB4:
    lwz r0, lbl_8087F888
    cmpwi r0, 0x0
    bne lbl_fn_8054622C_00000CD0
    mr r3, r31
    bl fn_8054746C
    li r0, 0x1
    stw r0, lbl_8087F888
lbl_fn_8054622C_00000CD0:
    addi r11, r1, 0x110
    bl _restgpr_17
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_805469D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, lbl_8087F888
    bl fn_80149A30
    lwz r3, lbl_8087F0A8
    lwz r0, 0x34(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805469D4_00000D4C
    lfs f1, lbl_80887CE8
    li r4, 0x14
    lfs f0, 0x52c(r31)
    lis r5, 0xffff
    lwz r3, lbl_8087EEB0
    fadds f2, f1, f0
    lfs f1, 0x528(r31)
    lfs f3, 0x530(r31)
    lfs f4, 0x538(r31)
    lfs f5, lbl_80887CE0
    lfs f6, lbl_80887D08
    lfs f7, lbl_80887D0C
    bl fn_80063484
lbl_fn_805469D4_00000D4C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80546A4C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r4
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80546A4C_00000E80
    lwz r0, 0x14e0(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80546A4C_00000E80
    lwz r4, 0x14e8(r3)
    lis r0, 0x4330
    lfs f6, lbl_80887CE0
    lis r6, lbl_8075E300@ha
    xoris r4, r4, 0x8000
    stw r4, 0x3c(r1)
    lfs f4, 0x530(r3)
    addi r5, r1, 0x2c
    stw r0, 0x38(r1)
    lfd f3, lbl_8075E300@l(r6)
    fadds f9, f4, f6
    lfd f0, 0x38(r1)
    lfs f7, lbl_80887CF8
    fsubs f8, f0, f3
    lfs f5, lbl_80887D10
    lfs f3, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x20
    fdivs f8, f8, f7
    lfs f7, lbl_80887CE4
    lfs f4, lbl_80887CDC
    stfs f6, 0x14(r1)
    lwz r4, lbl_8087EFB4
    stfs f5, 0x18(r1)
    fsubs f31, f7, f8
    stfs f6, 0x1c(r1)
    fadds f3, f3, f5
    fadds f0, f0, f6
    stfs f9, 0x34(r1)
    fmuls f31, f31, f4
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    bl fn_800BFAC8
    lfs f0, lbl_80887CE0
    lfs f3, 0x28(r1)
    fcmpo cr0, f0, f3
    bge lbl_fn_80546A4C_00000E80
    lfs f0, lbl_80887CE4
    fcmpo cr0, f3, f0
    bge lbl_fn_80546A4C_00000E80
    lfs f0, lbl_80887D14
    fadds f0, f0, f31
    fctiwz f0, f0
    stfd f0, 0x38(r1)
    lwz r5, 0x3c(r1)
    cmpwi r5, 0x0
    bge lbl_fn_80546A4C_00000E54
    li r5, 0x0
lbl_fn_80546A4C_00000E54:
    addi r3, r1, 0x20
    lfs f2, 0x28(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r6, r1, 0x8
    psq_st f1, 0x0(r6), 0, 0
    mr r3, r31
    li r4, 0x2
    li r7, 0x1
    stfs f2, 0x10(r1)
    li r8, 0x0
    bl fn_803E2A30
lbl_fn_80546A4C_00000E80:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80546B88(void)
{
    nofralloc
    stwu r1, -0x1b0(r1)
    mflr r0
    stw r0, 0x1b4(r1)
    addi r11, r1, 0x190
    stfd f31, 0x1a0(r1)
    psq_st f31, 0x1a8(r1), 0, 0
    stfd f30, 0x190(r1)
    psq_st f30, 0x198(r1), 0, 0
    bl _savegpr_17
    lwz r4, 0x14dc(r3)
    mr r18, r3
    cmpwi r4, 0x0
    beq lbl_fn_80546B88_0000122C
    lwz r0, 0x54(r4)
    cmpwi r0, 0x2
    beq lbl_fn_80546B88_0000122C
    li r22, 0x0
    stw r22, 0x6c(r1)
    lwz r5, lbl_8087F4A0
    lis r3, __files@ha
    lis r4, lbl_8075E324@ha
    stw r22, 0x70(r1)
    addi r24, r4, lbl_8075E324@l
    addi r25, r3, __files@l
    stw r22, 0x74(r1)
    addi r28, r1, 0x74
    addi r21, r1, 0xa8
    lis r30, 0xcccd
    lwz r17, 0x48(r5)
    lis r23, 0x4000
    lis r26, 0x1555
    lis r27, 0x2aab
    lis r31, lbl_80775A88@ha
    b lbl_fn_80546B88_000011C4
lbl_fn_80546B88_00000F24:
    lwz r0, 0x48(r17)
    cmpwi r0, 0x1391
    bne lbl_fn_80546B88_000011C0
    lwz r0, 0x54(r17)
    cmpwi r0, 0x2
    bne lbl_fn_80546B88_000011C0
    lwz r3, 0x70(r1)
    lwz r19, 0x74(r1)
    cmplw r3, r19
    bge lbl_fn_80546B88_00000F68
    addi r4, r3, 0x1
    lwz r3, 0x6c(r1)
    slwi r0, r4, 2
    stw r4, 0x70(r1)
    add r3, r3, r0
    stw r17, -0x4(r3)
    b lbl_fn_80546B88_000011C0
lbl_fn_80546B88_00000F68:
    subi r0, r23, 0x1
    subf r0, r19, r0
    cmplwi r0, 0x1
    bge lbl_fn_80546B88_00000F8C
    addi r4, r24, 0x2c
    addi r3, r25, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80546B88_00000F8C:
    addi r0, r26, 0x5555
    cmplw r19, r0
    bge lbl_fn_80546B88_00000FC0
    addi r3, r19, 0x1
    subi r4, r30, 0x3333
    slwi r0, r3, 2
    subf r0, r3, r0
    mulhwu r0, r4, r0
    srwi r0, r0, 2
    cmplwi r0, 0x1
    bge lbl_fn_80546B88_00000FDC
    b lbl_fn_80546B88_00000FDC
    b lbl_fn_80546B88_00000FDC
lbl_fn_80546B88_00000FC0:
    subi r0, r27, 0x5556
    cmplw r19, r0
    bge lbl_fn_80546B88_00000FDC
    addi r0, r19, 0x1
    srwi r0, r0, 1
    cmplwi r0, 0x1
    cmplwi r0, 0x1
lbl_fn_80546B88_00000FDC:
    lwz r3, 0x70(r1)
    subi r0, r23, 0x1
    lwz r29, 0x74(r1)
    addi r3, r3, 0x1
    stw r22, 0xa8(r1)
    subf r3, r29, r3
    subf r0, r29, r0
    cmplw r3, r0
    stw r22, 0xac(r1)
    stw r22, 0xb0(r1)
    stw r28, 0xb4(r1)
    stw r22, 0xb8(r1)
    stw r3, 0x20(r1)
    ble lbl_fn_80546B88_00001028
    addi r4, r24, 0x2c
    addi r3, r25, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80546B88_00001028:
    addi r0, r26, 0x5555
    cmplw r29, r0
    bge lbl_fn_80546B88_00001070
    addi r4, r29, 0x1
    subi r5, r30, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x20(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x18
    srwi r4, r4, 2
    stw r4, 0x18(r1)
    cmplw r4, r0
    bge lbl_fn_80546B88_00001064
    addi r3, r1, 0x20
lbl_fn_80546B88_00001064:
    lwz r0, 0x0(r3)
    add r19, r29, r0
    b lbl_fn_80546B88_000010AC
lbl_fn_80546B88_00001070:
    subi r0, r27, 0x5556
    cmplw r29, r0
    bge lbl_fn_80546B88_000010A8
    addi r3, r29, 0x1
    lwz r0, 0x20(r1)
    srwi r3, r3, 1
    stw r3, 0x1c(r1)
    cmplw r3, r0
    addi r3, r1, 0x1c
    bge lbl_fn_80546B88_0000109C
    addi r3, r1, 0x20
lbl_fn_80546B88_0000109C:
    lwz r0, 0x0(r3)
    add r19, r29, r0
    b lbl_fn_80546B88_000010AC
lbl_fn_80546B88_000010A8:
    subi r19, r23, 0x1
lbl_fn_80546B88_000010AC:
    subi r0, r23, 0x1
    cmplw r19, r0
    ble lbl_fn_80546B88_000010CC
    addi r4, r24, 0x2c
    addi r3, r25, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80546B88_000010CC:
    slwi r3, r19, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r20, r3
    bne lbl_fn_80546B88_000010F4
    addi r3, r25, 0xa0
    addi r4, r31, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80546B88_000010F4:
    lwz r0, 0x70(r1)
    lwz r3, 0xac(r1)
    slwi r4, r0, 2
    stw r20, 0xa8(r1)
    slwi r3, r3, 2
    stw r19, 0xb0(r1)
    add r4, r20, r4
    stw r0, 0xb8(r1)
    stwx r17, r4, r3
    lwz r0, 0x70(r1)
    lwz r4, 0xac(r1)
    lwz r19, 0x6c(r1)
    slwi r0, r0, 2
    addi r5, r4, 0x1
    stw r5, 0xac(r1)
    add r3, r19, r0
    lwz r0, 0xb8(r1)
    subf r3, r19, r3
    srawi r4, r3, 2
    lwz r3, 0xa8(r1)
    addze r29, r4
    subf r0, r29, r0
    stw r0, 0xb8(r1)
    slwi r20, r29, 2
    mr r4, r19
    slwi r0, r0, 2
    mr r5, r20
    add r3, r3, r0
    bl memcpy
    mr r3, r19
    mr r5, r20
    li r4, 0x0
    bl memset
    lwz r0, 0xac(r1)
    cmpwi r21, 0x0
    lwz r6, 0x74(r1)
    lwz r4, 0xb0(r1)
    add r5, r0, r29
    lwz r3, 0x6c(r1)
    lwz r0, 0xa8(r1)
    stw r4, 0x74(r1)
    stw r6, 0xb0(r1)
    stw r0, 0x6c(r1)
    stw r3, 0xa8(r1)
    stw r5, 0x70(r1)
    stw r22, 0xac(r1)
    beq lbl_fn_80546B88_000011C0
    cmpwi r3, 0x0
    beq lbl_fn_80546B88_000011C0
    stw r22, 0xac(r1)
    bl dtor_80084684
lbl_fn_80546B88_000011C0:
    lwz r17, 0x5c(r17)
lbl_fn_80546B88_000011C4:
    cmpwi r17, 0x0
    bne lbl_fn_80546B88_00000F24
    lwz r17, 0x70(r1)
    cmpwi r17, 0x0
    bne lbl_fn_80546B88_000011E0
    li r17, 0x0
    b lbl_fn_80546B88_000011FC
lbl_fn_80546B88_000011E0:
    bl fn_80680CF8
    divwu r0, r3, r17
    lwz r4, 0x6c(r1)
    mullw r0, r0, r17
    subf r0, r0, r3
    slwi r0, r0, 2
    lwzx r17, r4, r0
lbl_fn_80546B88_000011FC:
    addic. r0, r1, 0x6c
    beq lbl_fn_80546B88_00001228
    beq lbl_fn_80546B88_00001228
    beq lbl_fn_80546B88_00001228
    lwz r3, 0x6c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80546B88_00001228
    lwz r0, 0x70(r1)
    subf r0, r0, r0
    stw r0, 0x70(r1)
    bl dtor_80084684
lbl_fn_80546B88_00001228:
    stw r17, 0x14dc(r18)
lbl_fn_80546B88_0000122C:
    lwz r4, 0x14dc(r18)
    cmpwi r4, 0x0
    bne lbl_fn_80546B88_00001260
    li r3, 0x1
    li r0, 0x0
    stw r3, 0x14e0(r18)
    mr r3, r18
    stw r0, 0x14e8(r18)
    lwz r12, 0x0(r18)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    b lbl_fn_80546B88_000016CC
lbl_fn_80546B88_00001260:
    lwz r3, 0x14f0(r18)
    addi r5, r1, 0x9c
    lfs f3, 0x530(r18)
    addi r0, r3, 0x1
    stw r0, 0x14f0(r18)
    lfs f0, 0x528(r18)
    lfs f2, 0x74(r4)
    psq_l f1, 0x6c(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fsubs f7, f2, f3
    lfs f5, 0x52c(r18)
    lfs f4, 0x9c(r1)
    fmuls f3, f7, f7
    lfs f6, 0xa0(r1)
    fsubs f8, f4, f0
    lfs f4, lbl_80887D10
    lfs f0, lbl_80887D18
    fadds f4, f6, f4
    fmadds f6, f8, f8, f3
    stfs f2, 0xa4(r1)
    fsubs f3, f4, f5
    stfs f4, 0xa0(r1)
    fcmpo cr0, f6, f0
    stfs f8, 0x90(r1)
    stfs f3, 0x94(r1)
    stfs f7, 0x98(r1)
    ble lbl_fn_80546B88_000012D4
    lfs f0, lbl_80887CE0
    stfs f0, 0x94(r1)
lbl_fn_80546B88_000012D4:
    addi r3, r1, 0x90
    bl fn_805F9940
    lfs f0, lbl_80887D04
    fcmpo cr0, f1, f0
    bge lbl_fn_80546B88_0000141C
    lwz r3, lbl_8087F3C0
    addi r4, r18, 0x14b8
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, 0x14dc(r18)
    li r4, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x70(r12)
    mtctr r12
    bctrl
    lwz r4, 0x14dc(r18)
    li r0, 0x7
    addi r3, r18, 0x7d4
    psq_l f1, 0x6c(r4), 0, 0
    lfs f2, 0x74(r4)
    stfs f2, 0x530(r18)
    psq_st f1, 0x528(r18), 0, 0
    psq_l f1, 0x78(r4), 0, 0
    lfs f2, 0x80(r4)
    stfs f2, 0x53c(r18)
    psq_st f1, 0x534(r18), 0, 0
    stw r0, 0x58c(r18)
    bl fn_8012D8B8
    lwz r0, 0x5c0(r18)
    li r19, 0x0
    stw r19, 0x9f8(r18)
    mr r3, r18
    ori r0, r0, 0x1
    li r4, 0x0
    stw r0, 0x5c0(r18)
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    lfs f1, lbl_80887D1C
    li r17, 0x1
    stw r17, 0xd18(r18)
    mr r3, r18
    fmr f2, f1
    li r4, 0x2
    li r5, 0x0
    li r6, 0x0
    bl fn_80161570
    lfs f0, lbl_80887CE4
    mr r3, r18
    stfs f0, 0x2ec(r18)
    li r4, 0x1
    bl fn_8016E4C4
    lwz r0, 0x12a4(r18)
    mr r3, r18
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x12a4(r18)
    bl fn_80145334
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    stw r19, 0x8(r1)
    li r0, -0x1
    lfs f1, lbl_80887CE4
    addi r4, r18, 0x14c4
    stw r0, 0xc(r1)
    addi r8, r18, 0x528
    addi r9, r18, 0x534
    li r5, -0x1
    stw r17, 0x10(r1)
    li r6, 0x0
    li r7, 0x0
    li r10, 0x0
    lwz r3, lbl_8087F3C0
    bl fn_8023A680
    lwz r4, 0x14e4(r18)
    mr r3, r18
    addi r0, r4, 0x1
    stw r0, 0x14e4(r18)
    bl fn_80145334
    b lbl_fn_80546B88_000016CC
lbl_fn_80546B88_0000141C:
    addi r3, r1, 0x90
    mr r4, r3
    bl fn_805F98D0
    lwz r0, 0x14f0(r18)
    cmpwi r0, 0x1e
    ble lbl_fn_80546B88_0000143C
    lfs f30, lbl_80887D20
    b lbl_fn_80546B88_00001440
lbl_fn_80546B88_0000143C:
    lfs f30, lbl_80887CD8
lbl_fn_80546B88_00001440:
    addi r3, r18, 0x7d4
    bl fn_8012DB04
    fmuls f5, f30, f1
    lfs f3, 0x98(r1)
    lfs f0, 0x94(r1)
    addi r3, r1, 0x90
    lfs f4, 0x90(r1)
    addi r17, r1, 0x78
    fmuls f6, f3, f5
    lfs f3, 0x530(r18)
    fmuls f7, f0, f5
    lfs f0, 0x52c(r18)
    fmuls f8, f4, f5
    lfs f5, 0x528(r18)
    fadds f4, f0, f7
    lfs f0, lbl_80887D24
    fadds f5, f5, f8
    stfs f8, 0x84(r1)
    fadds f3, f3, f6
    stfs f5, 0x528(r18)
    stfs f4, 0x52c(r18)
    stfs f3, 0x530(r18)
    lfs f2, 0x98(r1)
    psq_l f1, 0x0(r3), 0, 0
    fabs f3, f2
    stfs f7, 0x88(r1)
    stfs f6, 0x8c(r1)
    frsp f3, f3
    psq_st f1, 0x0(r17), 0, 0
    fcmpo cr0, f3, f0
    stfs f2, 0x80(r1)
    bge lbl_fn_80546B88_000014E4
    lfs f3, 0x78(r1)
    lfs f0, lbl_80887CE0
    fcmpo cr0, f3, f0
    ble lbl_fn_80546B88_000014D8
    lfs f0, lbl_80887D0C
    b lbl_fn_80546B88_000014DC
lbl_fn_80546B88_000014D8:
    lfs f0, lbl_80887D28
lbl_fn_80546B88_000014DC:
    stfs f0, 0x64(r1)
    b lbl_fn_80546B88_000014F8
lbl_fn_80546B88_000014E4:
    frsp f2, f2
    lfs f1, 0x78(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x64(r1)
lbl_fn_80546B88_000014F8:
    lfs f0, 0x64(r1)
    addi r3, r1, 0xd8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80887CE0
    addi r4, r1, 0x54
    lfs f30, 0xe0(r1)
    mr r5, r4
    lfs f31, 0xdc(r1)
    addi r3, r1, 0x108
    lfs f13, 0xd8(r1)
    lfs f12, 0xf0(r1)
    lfs f11, 0xec(r1)
    lfs f10, 0xe8(r1)
    lfs f9, 0x100(r1)
    lfs f8, 0xfc(r1)
    lfs f7, 0xf8(r1)
    lfs f6, 0x104(r1)
    lfs f5, 0xf4(r1)
    lfs f4, 0xe4(r1)
    lfs f0, lbl_80887CE4
    psq_l f1, 0x0(r17), 0, 0
    lfs f2, 0x80(r1)
    stfs f3, 0x138(r1)
    stfs f3, 0x13c(r1)
    stfs f3, 0x140(r1)
    stfs f0, 0x144(r1)
    stfs f13, 0x24(r1)
    stfs f31, 0x28(r1)
    stfs f30, 0x2c(r1)
    stfs f13, 0x108(r1)
    stfs f31, 0x10c(r1)
    stfs f30, 0x110(r1)
    stfs f10, 0x30(r1)
    stfs f11, 0x34(r1)
    stfs f12, 0x38(r1)
    stfs f10, 0x118(r1)
    stfs f11, 0x11c(r1)
    stfs f12, 0x120(r1)
    stfs f7, 0x3c(r1)
    stfs f8, 0x40(r1)
    stfs f9, 0x44(r1)
    stfs f7, 0x128(r1)
    stfs f8, 0x12c(r1)
    stfs f9, 0x130(r1)
    stfs f4, 0x48(r1)
    stfs f5, 0x4c(r1)
    stfs f6, 0x50(r1)
    stfs f4, 0x114(r1)
    stfs f5, 0x124(r1)
    stfs f6, 0x134(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x5c(r1)
    bl fn_805F9750
    lfs f2, 0x5c(r1)
    lfs f0, lbl_80887D24
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80546B88_00001614
    lfs f3, 0x58(r1)
    lfs f0, lbl_80887CE0
    fcmpo cr0, f3, f0
    ble lbl_fn_80546B88_00001604
    lfs f0, lbl_80887D0C
    b lbl_fn_80546B88_00001608
lbl_fn_80546B88_00001604:
    lfs f0, lbl_80887D28
lbl_fn_80546B88_00001608:
    fneg f0, f0
    stfs f0, 0x60(r1)
    b lbl_fn_80546B88_00001628
lbl_fn_80546B88_00001614:
    lfs f1, 0x58(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x60(r1)
lbl_fn_80546B88_00001628:
    lfs f2, lbl_80887CE0
    addi r3, r1, 0x60
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r18
    stfs f2, 0x68(r1)
    stfs f2, 0x80(r1)
    frsp f2, f2
    psq_st f1, 0x0(r17), 0, 0
    psq_st f1, 0x534(r18), 0, 0
    stfs f2, 0x53c(r18)
    bl fn_80144710
    mr r3, r18
    bl fn_80145334
    psq_l f1, 0x528(r18), 0, 0
    addi r3, r1, 0xc8
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0xbc
    lfs f2, 0x530(r18)
    lfs f4, 0xcc(r1)
    lfs f3, lbl_80887D2C
    lfs f0, lbl_80887CE8
    fadds f3, f4, f3
    stfs f2, 0xc4(r1)
    lwz r4, 0x62c(r18)
    stfs f2, 0xd0(r1)
    stfs f2, 0x5fc(r18)
    frsp f2, f2
    stfs f2, 0x608(r18)
    lfs f2, 0x530(r18)
    stfs f3, 0xcc(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_st f1, 0x5f4(r18), 0, 0
    psq_l f1, 0xc(r3), 0, 0
    psq_st f1, 0x600(r18), 0, 0
    psq_l f1, 0x528(r18), 0, 0
    stfs f0, 0x60c(r18)
    psq_st f1, 0x4(r4), 0, 0
    stfs f2, 0xc(r4)
    lwz r3, 0x62c(r18)
    stfs f0, 0xd4(r1)
    stfs f0, 0x10(r3)
lbl_fn_80546B88_000016CC:
    addi r11, r1, 0x190
    psq_l f31, 0x1a8(r1), 0, 0
    lfd f31, 0x1a0(r1)
    psq_l f30, 0x198(r1), 0, 0
    lfd f30, 0x190(r1)
    bl _restgpr_17
    lwz r0, 0x1b4(r1)
    mtlr r0
    addi r1, r1, 0x1b0
    blr
}

asm void fn_805473E0(void)
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
    cmpwi r0, 0x6
    bne lbl_fn_805473E0_00001748
    li r3, 0x3
    li r5, 0x0
    li r0, 0x2
    stw r3, 0x64(r4)
    lwz r3, 0x8(r4)
    stw r5, 0x90(r4)
    stw r0, 0x84(r4)
    lwz r0, 0xc4(r3)
    stw r0, 0x88(r4)
    stw r5, 0x68(r4)
    b lbl_fn_805473E0_00001764
lbl_fn_805473E0_00001748:
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_805473E0_00001764:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80547468(void)
{
    nofralloc
    b fn_800E854C
}

asm void fn_8054746C(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    lfs f31, lbl_80887D30
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    li r30, 0x0
    stw r29, 0x64(r1)
    stw r28, 0x60(r1)
    mr r28, r3
    lwz r4, lbl_8087F8A0
    lwz r3, lbl_8087F4A0
    lwz r31, 0x48(r4)
    lwz r29, 0x48(r3)
    b lbl_fn_8054746C_00001830
lbl_fn_8054746C_000017C4:
    lwz r0, 0x48(r29)
    cmpwi r0, 0x1391
    bne lbl_fn_8054746C_0000182C
    lwz r0, 0x54(r29)
    cmpwi r0, 0x2
    bne lbl_fn_8054746C_0000182C
    lfs f1, 0x530(r31)
    addi r3, r1, 0x24
    lfs f0, 0x74(r29)
    lfs f3, 0x52c(r31)
    fsubs f4, f1, f0
    lfs f2, 0x70(r29)
    lfs f1, 0x528(r31)
    lfs f0, 0x6c(r29)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x28(r1)
    stfs f0, 0x24(r1)
    stfs f4, 0x2c(r1)
    bl fn_805F9940
    fcmpo cr0, f1, f31
    bge lbl_fn_8054746C_0000182C
    addi r3, r1, 0x24
    bl fn_805F9940
    mr r30, r29
    fmr f31, f1
lbl_fn_8054746C_0000182C:
    lwz r29, 0x5c(r29)
lbl_fn_8054746C_00001830:
    cmpwi r29, 0x0
    bne lbl_fn_8054746C_000017C4
    cmpwi r30, 0x0
    beq lbl_fn_8054746C_000019F8
    lfs f2, 0x74(r30)
    li r29, 0x0
    lfs f1, 0x530(r31)
    lfs f0, lbl_80887D34
    fsubs f4, f2, f1
    lfs f3, 0x6c(r30)
    lfs f2, 0x528(r31)
    fcmpo cr0, f31, f0
    lfs f1, lbl_80887CE0
    fsubs f0, f3, f2
    stfs f4, 0x20(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x1c(r1)
    bge lbl_fn_8054746C_00001928
    lfs f0, lbl_80887CE4
    addi r3, r1, 0x30
    stfs f1, 0xc(r1)
    li r4, 0x79
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0xc
    addi r3, r1, 0x30
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x18
    addi r4, r1, 0xc
    bl fn_805F9990
    fmr f31, f1
    lis r3, lbl_8075E308@ha
    lfd f1, lbl_8075E308@l(r3)
    bl fn_8068A850
    frsp f0, f1
    fcmpo cr0, f31, f0
    ble lbl_fn_8054746C_00001928
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_8054746C_000018F0
    lwz r0, 0x560(r31)
    cmpwi r0, 0x4
    bne lbl_fn_8054746C_00001928
    li r29, 0x1
    b lbl_fn_8054746C_00001928
lbl_fn_8054746C_000018F0:
    mr r3, r31
    li r4, 0x0
    bl fn_8016DDB0
    cmpwi r3, 0x0
    beq lbl_fn_8054746C_00001928
    lwz r0, 0x14f8(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8054746C_00001928
    lwz r3, 0x12a4(r31)
    extrwi. r0, r3, 1, 25
    bne lbl_fn_8054746C_00001928
    srwi. r0, r3, 31
    bne lbl_fn_8054746C_00001928
    li r29, 0x1
lbl_fn_8054746C_00001928:
    lwz r0, 0x14fc(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8054746C_000019E8
    lwz r4, lbl_8087F490
    cmpwi r4, 0x0
    beq lbl_fn_8054746C_0000196C
    li r0, 0x6
    stw r0, 0x764(r4)
    li r0, 0x10
    li r3, -0x1
    stw r0, 0x768(r4)
    li r0, 0x0
    stw r3, 0x76c(r4)
    stw r0, 0x770(r4)
    stw r0, 0x774(r4)
    stw r0, 0x778(r4)
    stw r0, 0x77c(r4)
lbl_fn_8054746C_0000196C:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8054746C_000019E8
    mr r3, r31
    mr r4, r30
    mr r5, r28
    bl fn_8016AB0C
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x3
    lwz r12, 0x70(r12)
    mtctr r12
    bctrl
    lis r4, lbl_8075E324@ha
    lfs f1, lbl_80887CE4
    addi r4, r4, lbl_8075E324@l
    addi r3, r1, 0x8
    addi r4, r4, 0x40
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_8054746C_000019E8
    bl fn_803E3384
lbl_fn_8054746C_000019E8:
    lwz r0, 0x12a4(r31)
    srwi r0, r0, 31
    stw r0, 0x14f8(r28)
    stw r29, 0x14fc(r28)
lbl_fn_8054746C_000019F8:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r28, 0x60(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}
