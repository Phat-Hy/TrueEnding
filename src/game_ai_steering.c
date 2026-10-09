#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_800457A4(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AFF8(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800D246C(void);
extern void fn_800F8574(void);
extern void fn_800F8C6C(void);
extern void fn_80126214(void);
extern void fn_8013655C(void);
extern void fn_8013A258(void);
extern void fn_8013CB68(void);
extern void fn_80144710(void);
extern void fn_80158BB4(void);
extern void fn_8016E970(void);
extern void fn_80206C50(void);
extern void fn_80219E6C(void);
extern void fn_80237518(void);
extern void fn_802375C4(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8026580C(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_80370AE4(void);
extern void fn_803EA77C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80744398[];
extern u8 lbl_807443A0[];
extern u8 lbl_807443A8[];
extern u8 lbl_807443C0[];
extern u8 lbl_80744608[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80784DD8[];
extern u8 lbl_8078FBB0[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_808835F8;
extern u32 lbl_808835FC;
extern u32 lbl_80883600;
extern u32 lbl_80883608;
extern u32 lbl_8088360C;
extern u32 lbl_80883610;
extern u32 lbl_80883614;
extern u32 lbl_80883618;
extern u32 lbl_8088361C;
extern u32 lbl_80883620;
extern u32 lbl_80883624;
extern u32 lbl_80883628;
extern u32 lbl_80883630;
extern u32 lbl_80883638;
extern u32 lbl_8088363C;
extern u32 lbl_80883640;
extern u32 lbl_80883644;
extern u32 lbl_80883648;
extern u32 lbl_8088364C;
extern u32 lbl_80883650;
extern u32 lbl_80883654;
extern u32 lbl_80883658;
extern u32 lbl_8088365C;
extern u32 lbl_80883660;
extern u32 lbl_80883664;
extern u32 lbl_80883668;
extern u32 lbl_80883670;
extern u32 lbl_80883674;
extern u32 lbl_80883678;
extern u32 lbl_8088367C;

/* Function declarations */
void fn_80263CF0(void);
void fn_80264024(void);
void fn_802640FC(void);
void fn_8026442C(void);
void fn_8026474C(void);
void fn_802648CC(void);
void fn_80264C88(void);
void fn_80264DB4(void);
void fn_802652F4(void);
void fn_802655A8(void);

asm void fn_80263CF0(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r4, r1, 0x8c
    addi r5, r1, 0x80
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    lfs f31, lbl_80883600
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    stfd f29, 0x120(r1)
    psq_st f29, 0x128(r1), 0, 0
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    mr r29, r3
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x94(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r4, 0x14b8(r3)
    lfs f0, 0x530(r3)
    lfs f2, 0x530(r4)
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fsubs f6, f2, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x74
    lfs f5, 0x84(r1)
    lfs f3, 0x80(r1)
    fsubs f4, f5, f4
    stfs f2, 0x88(r1)
    fsubs f0, f3, f0
    stfs f4, 0x78(r1)
    stfs f0, 0x74(r1)
    stfs f6, 0x7c(r1)
    bl fn_805F9940
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x7
    bne lbl_fn_80263CF0_000002B8
    addi r3, r29, 0x1030
    bl fn_80126214
    addi r4, r29, 0x1088
    addi r31, r1, 0x68
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r31
    lfs f2, 0x1090(r29)
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r31), 0, 0
    bl fn_805F9940
    lfs f0, lbl_80883638
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80263CF0_000002E8
    addi r30, r1, 0x50
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x70(r1)
    mr r3, r30
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r31, r1, 0x5c
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_8088360C
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80263CF0_00000148
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80883600
    fcmpo cr0, f3, f0
    ble lbl_fn_80263CF0_0000013C
    lfs f0, lbl_80883610
    b lbl_fn_80263CF0_00000140
lbl_fn_80263CF0_0000013C:
    lfs f0, lbl_80883614
lbl_fn_80263CF0_00000140:
    stfs f0, 0x48(r1)
    b lbl_fn_80263CF0_0000015C
lbl_fn_80263CF0_00000148:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80263CF0_0000015C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x98
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883600
    addi r4, r1, 0x38
    lfs f29, 0xa0(r1)
    mr r5, r4
    lfs f30, 0x9c(r1)
    addi r3, r1, 0xc8
    lfs f13, 0x98(r1)
    lfs f12, 0xb0(r1)
    lfs f11, 0xac(r1)
    lfs f10, 0xa8(r1)
    lfs f9, 0xc0(r1)
    lfs f8, 0xbc(r1)
    lfs f7, 0xb8(r1)
    lfs f6, 0xc4(r1)
    lfs f5, 0xb4(r1)
    lfs f4, 0xa4(r1)
    lfs f0, lbl_808835FC
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f3, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0xc8(r1)
    stfs f30, 0xcc(r1)
    stfs f29, 0xd0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xd8(r1)
    stfs f11, 0xdc(r1)
    stfs f12, 0xe0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f9, 0xf0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xd4(r1)
    stfs f5, 0xe4(r1)
    stfs f6, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_8088360C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80263CF0_00000278
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883600
    fcmpo cr0, f3, f0
    ble lbl_fn_80263CF0_00000268
    lfs f0, lbl_80883610
    b lbl_fn_80263CF0_0000026C
lbl_fn_80263CF0_00000268:
    lfs f0, lbl_80883614
lbl_fn_80263CF0_0000026C:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80263CF0_0000028C
lbl_fn_80263CF0_00000278:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80263CF0_0000028C:
    lfs f2, lbl_80883600
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x8c
    stfs f2, 0x4c(r1)
    stfs f2, 0x64(r1)
    frsp f2, f2
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x94(r1)
    b lbl_fn_80263CF0_000002E8
lbl_fn_80263CF0_000002B8:
    cmpwi r0, 0x6
    bne lbl_fn_80263CF0_000002E8
    lwz r0, 0x560(r29)
    cmpwi r0, 0x4
    bne lbl_fn_80263CF0_000002DC
    lfs f0, lbl_80883600
    stfs f0, 0x580(r29)
    stfs f0, 0x584(r29)
    b lbl_fn_80263CF0_000002E8
lbl_fn_80263CF0_000002DC:
    mr r3, r29
    bl fn_8013A258
    b lbl_fn_80263CF0_00000300
lbl_fn_80263CF0_000002E8:
    fmr f1, f31
    lfs f2, 0x568(r29)
    mr r3, r29
    addi r4, r1, 0x8c
    li r5, 0x1
    bl fn_8013CB68
lbl_fn_80263CF0_00000300:
    lwz r0, 0x154(r1)
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    psq_l f29, 0x128(r1), 0, 0
    lfd f29, 0x120(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_80264024(void)
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
    ble lbl_fn_80264024_000003F0
    cmpwi r4, 0x3
    bne lbl_fn_80264024_000003E8
    lwz r0, 0x16cc(r3)
    li r4, 0x1
    lfs f0, lbl_808835FC
    cmpwi r0, 0x0
    stw r4, 0x3fc(r3)
    stfs f0, 0x2fc(r3)
    stfs f0, 0x2e8(r3)
    bne lbl_fn_80264024_000003A8
    lfs f1, lbl_80883600
    li r4, 0x0
    lfs f2, lbl_808835F8
    li r5, 0x14f
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_80264024_000003CC
lbl_fn_80264024_000003A8:
    lfs f1, lbl_80883600
    li r4, 0x0
    lfs f2, lbl_808835F8
    li r5, 0x3
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0xb0
    bl fn_80097C08
lbl_fn_80264024_000003CC:
    lwz r3, 0x16dc(r31)
    subic. r0, r3, 0x1
    stw r0, 0x16dc(r31)
    bgt lbl_fn_80264024_000003F8
    li r0, 0x1
    stw r0, 0x16e8(r31)
    b lbl_fn_80264024_000003F8
lbl_fn_80264024_000003E8:
    li r4, 0x3
    bl fn_8016E970
lbl_fn_80264024_000003F0:
    mr r3, r31
    bl fn_80263CF0
lbl_fn_80264024_000003F8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802640FC(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stfd f29, 0x100(r1)
    psq_st f29, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    mr r31, r3
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    lwz r4, 0x16dc(r3)
    cmpwi r4, 0x0
    bge lbl_fn_802640FC_00000700
    lwz r5, 0x14b8(r3)
    addi r4, r1, 0x74
    lfs f0, 0x530(r3)
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x530(r5)
    lfs f5, 0x78(r1)
    lfs f4, 0x52c(r3)
    fsubs f6, f2, f0
    lfs f0, 0x528(r3)
    addi r3, r1, 0x68
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
    fmr f31, f1
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x70(r1)
    mr r3, r30
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r29, r1, 0x5c
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_8088360C
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802640FC_0000050C
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80883600
    fcmpo cr0, f3, f0
    ble lbl_fn_802640FC_00000500
    lfs f0, lbl_80883610
    b lbl_fn_802640FC_00000504
lbl_fn_802640FC_00000500:
    lfs f0, lbl_80883614
lbl_fn_802640FC_00000504:
    stfs f0, 0x48(r1)
    b lbl_fn_802640FC_00000520
lbl_fn_802640FC_0000050C:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802640FC_00000520:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883600
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
    lfs f0, lbl_808835FC
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
    lfs f0, lbl_8088360C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802640FC_0000063C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883600
    fcmpo cr0, f3, f0
    ble lbl_fn_802640FC_0000062C
    lfs f0, lbl_80883610
    b lbl_fn_802640FC_00000630
lbl_fn_802640FC_0000062C:
    lfs f0, lbl_80883614
lbl_fn_802640FC_00000630:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802640FC_00000650
lbl_fn_802640FC_0000063C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802640FC_00000650:
    addi r3, r1, 0x44
    lfs f2, lbl_80883600
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80744398@ha
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, 0x538(r31)
    lfs f3, 0x60(r1)
    stfs f2, 0x64(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80883618
    stfs f2, 0x4c(r1)
    lfd f2, lbl_80744398@l(r3)
    fmuls f1, f0, f3
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_8088361C
    fcmpo cr0, f3, f0
    ble lbl_fn_802640FC_000006A0
    lfs f0, lbl_80883620
    fsubs f3, f3, f0
lbl_fn_802640FC_000006A0:
    lfs f0, lbl_80883624
    fcmpo cr0, f3, f0
    bl fn_80680CF8
    lwz r0, 0x16e4(r31)
    li r4, 0x64
    divw r4, r4, r0
    divw r0, r3, r4
    mullw r0, r0, r4
    subf. r0, r0, r3
    beq lbl_fn_802640FC_000006D4
    lfs f0, lbl_80883628
    fcmpo cr0, f31, f0
    ble lbl_fn_802640FC_000006F4
lbl_fn_802640FC_000006D4:
    li r0, 0x0
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    li r0, 0x1
    stw r0, 0x16e8(r31)
    b lbl_fn_802640FC_00000708
lbl_fn_802640FC_000006F4:
    lwz r0, 0x16e0(r31)
    stw r0, 0x16dc(r31)
    b lbl_fn_802640FC_00000708
lbl_fn_802640FC_00000700:
    subi r0, r4, 0x1
    stw r0, 0x16dc(r3)
lbl_fn_802640FC_00000708:
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

asm void fn_8026442C(void)
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
    bl fn_80158BB4
    cmpwi r3, 0x0
    beq lbl_fn_8026442C_00000788
    li r31, 0x0
    stw r31, 0x58c(r30)
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    stw r31, 0x16e8(r30)
lbl_fn_8026442C_00000788:
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_8088363C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8026442C_000007E8
    lfs f0, lbl_80883640
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8026442C_000007E8
    lwz r3, 0x16d4(r30)
    bl fn_80219E6C
    mr r31, r3
    mr r3, r30
    bl fn_80144710
    lwz r8, 0x590(r30)
    mr r6, r30
    lwz r3, lbl_8087F048
    mr r7, r31
    lfs f1, lbl_80883600
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
lbl_fn_8026442C_000007E8:
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_808835FC
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8026442C_00000A34
    lfs f0, lbl_80883644
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8026442C_00000A34
    lwz r5, 0x14b8(r30)
    addi r3, r1, 0x50
    lfs f0, 0x530(r30)
    mr r4, r3
    lfs f3, 0x530(r5)
    lfs f5, 0x52c(r5)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r30)
    lfs f3, 0x528(r5)
    lfs f0, 0x528(r30)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    stfs f6, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r31, r1, 0x50
    lfs f0, lbl_8088360C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8026442C_0000088C
    lfs f3, 0x50(r1)
    lfs f0, lbl_80883600
    fcmpo cr0, f3, f0
    ble lbl_fn_8026442C_00000880
    lfs f0, lbl_80883610
    b lbl_fn_8026442C_00000884
lbl_fn_8026442C_00000880:
    lfs f0, lbl_80883614
lbl_fn_8026442C_00000884:
    stfs f0, 0xc(r1)
    b lbl_fn_8026442C_0000089C
lbl_fn_8026442C_0000088C:
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xc(r1)
lbl_fn_8026442C_0000089C:
    lfs f0, 0xc(r1)
    addi r3, r1, 0xa0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883600
    addi r4, r1, 0x14
    lfs f4, 0xa8(r1)
    mr r5, r4
    lfs f5, 0xa4(r1)
    addi r3, r1, 0x60
    lfs f6, 0xa0(r1)
    lfs f7, 0xb8(r1)
    lfs f8, 0xb4(r1)
    lfs f9, 0xb0(r1)
    lfs f10, 0xc8(r1)
    lfs f11, 0xc4(r1)
    lfs f12, 0xc0(r1)
    lfs f13, 0xcc(r1)
    lfs f31, 0xbc(r1)
    lfs f30, 0xac(r1)
    lfs f0, lbl_808835FC
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0x90(r1)
    stfs f3, 0x94(r1)
    stfs f3, 0x98(r1)
    stfs f0, 0x9c(r1)
    stfs f6, 0x44(r1)
    stfs f5, 0x48(r1)
    stfs f4, 0x4c(r1)
    stfs f6, 0x60(r1)
    stfs f5, 0x64(r1)
    stfs f4, 0x68(r1)
    stfs f9, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f7, 0x40(r1)
    stfs f9, 0x70(r1)
    stfs f8, 0x74(r1)
    stfs f7, 0x78(r1)
    stfs f12, 0x2c(r1)
    stfs f11, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f12, 0x80(r1)
    stfs f11, 0x84(r1)
    stfs f10, 0x88(r1)
    stfs f30, 0x20(r1)
    stfs f31, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f30, 0x6c(r1)
    stfs f31, 0x7c(r1)
    stfs f13, 0x8c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F9750
    lfs f2, 0x1c(r1)
    lfs f0, lbl_8088360C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8026442C_000009B8
    lfs f3, 0x18(r1)
    lfs f0, lbl_80883600
    fcmpo cr0, f3, f0
    ble lbl_fn_8026442C_000009A8
    lfs f0, lbl_80883610
    b lbl_fn_8026442C_000009AC
lbl_fn_8026442C_000009A8:
    lfs f0, lbl_80883614
lbl_fn_8026442C_000009AC:
    fneg f0, f0
    stfs f0, 0x8(r1)
    b lbl_fn_8026442C_000009CC
lbl_fn_8026442C_000009B8:
    lfs f1, 0x18(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8(r1)
lbl_fn_8026442C_000009CC:
    addi r3, r1, 0x8
    lfs f2, lbl_80883600
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_807443A8@ha
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, lbl_808835F8
    stfs f2, 0x58(r1)
    lfs f3, 0x54(r1)
    lfs f4, 0x538(r30)
    stfs f2, 0x10(r1)
    fsubs f3, f3, f4
    lfd f2, lbl_807443A8@l(r3)
    fmadds f1, f0, f3, f4
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80883648
    fcmpo cr0, f3, f0
    ble lbl_fn_8026442C_00000A1C
    lfs f0, lbl_8088364C
    fsubs f3, f3, f0
lbl_fn_8026442C_00000A1C:
    lfs f0, lbl_80883650
    fcmpo cr0, f3, f0
    bge lbl_fn_8026442C_00000A30
    lfs f0, lbl_8088364C
    fadds f3, f3, f0
lbl_fn_8026442C_00000A30:
    stfs f3, 0x538(r30)
lbl_fn_8026442C_00000A34:
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

asm void fn_8026474C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r3, 0x16d8(r3)
    bl fn_80219E6C
    stw r3, 0x638(r31)
    lis r0, 0x4330
    lis r5, lbl_807443A0@ha
    lfs f4, 0xfb8(r31)
    lwz r4, 0xc0(r3)
    stw r0, 0x8(r1)
    xoris r4, r4, 0x8000
    lfd f3, lbl_807443A0@l(r5)
    stw r4, 0xc(r1)
    lfd f0, 0x8(r1)
    stw r0, 0x10(r1)
    fsubs f0, f0, f3
    stfs f0, 0xfbc(r31)
    lwz r0, 0xc0(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    fcmpo cr0, f4, f0
    bge lbl_fn_8026474C_00000BC0
    lfs f3, lbl_808835FC
    lfs f5, 0x2e4(r31)
    lfs f0, lbl_80883654
    fadds f3, f4, f3
    fcmpo cr0, f5, f0
    stfs f3, 0xfb8(r31)
    cror eq, gt, eq
    bne lbl_fn_8026474C_00000AF8
    lfs f0, lbl_808835F8
    stfs f0, 0x2e8(r31)
lbl_fn_8026474C_00000AF8:
    lwz r4, 0x638(r31)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lis r3, lbl_807443A0@ha
    lwz r0, 0xc0(r4)
    lfd f3, lbl_807443A0@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfs f4, 0xfb8(r31)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    fcmpu cr0, f4, f0
    bne lbl_fn_8026474C_00000BC0
    li r3, 0xa
    li r0, 0x1e
    stw r3, 0x58c(r31)
    addi r3, r31, 0xb0
    lfs f31, 0x2e4(r31)
    li r4, 0x0
    stw r0, 0x560(r31)
    li r5, 0x146
    lfs f1, lbl_80883600
    li r6, 0x0
    lfs f2, lbl_808835F8
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80883658
    addi r3, r31, 0x16ec
    stfs f31, 0x2e4(r31)
    mr r4, r31
    lwz r7, 0x14b8(r31)
    li r5, 0x0
    stfs f0, 0x2e8(r31)
    li r6, 0x1
    psq_l f1, 0x528(r7), 0, 0
    lfs f2, 0x530(r7)
    stfs f2, 0x16f4(r31)
    psq_st f1, 0x0(r3), 0, 0
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_8026474C_00000BC0
    lfs f1, lbl_808835FC
    mr r4, r31
    lfs f2, lbl_80883630
    li r5, 0x19
    li r6, 0x0
    bl fn_803EA77C
lbl_fn_8026474C_00000BC0:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802648CC(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    stw r30, 0xe8(r1)
    mr r30, r3
    lwz r3, 0x16d8(r3)
    bl fn_80219E6C
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_80883628
    stw r3, 0x638(r30)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802648CC_00000E60
    lfs f0, lbl_8088365C
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802648CC_00000E60
    lfs f3, 0x16f4(r30)
    addi r3, r1, 0x68
    lfs f0, 0x530(r30)
    mr r4, r3
    lfs f5, 0x16f0(r30)
    fsubs f7, f3, f0
    lfs f4, 0x52c(r30)
    lfs f6, lbl_808835FC
    lfs f3, 0x16ec(r30)
    fsubs f4, f5, f4
    lfs f0, 0x528(r30)
    stfs f6, 0x2e8(r30)
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    stfs f7, 0x70(r1)
    bl fn_805F98D0
    lfs f2, 0x70(r1)
    addi r31, r1, 0x68
    lfs f0, lbl_8088360C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802648CC_00000CB8
    lfs f3, 0x68(r1)
    lfs f0, lbl_80883600
    fcmpo cr0, f3, f0
    ble lbl_fn_802648CC_00000CAC
    lfs f0, lbl_80883610
    b lbl_fn_802648CC_00000CB0
lbl_fn_802648CC_00000CAC:
    lfs f0, lbl_80883614
lbl_fn_802648CC_00000CB0:
    stfs f0, 0xc(r1)
    b lbl_fn_802648CC_00000CC8
lbl_fn_802648CC_00000CB8:
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xc(r1)
lbl_fn_802648CC_00000CC8:
    lfs f0, 0xc(r1)
    addi r3, r1, 0xb8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883600
    addi r4, r1, 0x14
    lfs f4, 0xc0(r1)
    mr r5, r4
    lfs f5, 0xbc(r1)
    addi r3, r1, 0x78
    lfs f6, 0xb8(r1)
    lfs f7, 0xd0(r1)
    lfs f8, 0xcc(r1)
    lfs f9, 0xc8(r1)
    lfs f10, 0xe0(r1)
    lfs f11, 0xdc(r1)
    lfs f12, 0xd8(r1)
    lfs f13, 0xe4(r1)
    lfs f31, 0xd4(r1)
    lfs f30, 0xc4(r1)
    lfs f0, lbl_808835FC
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x70(r1)
    stfs f3, 0xa8(r1)
    stfs f3, 0xac(r1)
    stfs f3, 0xb0(r1)
    stfs f0, 0xb4(r1)
    stfs f6, 0x44(r1)
    stfs f5, 0x48(r1)
    stfs f4, 0x4c(r1)
    stfs f6, 0x78(r1)
    stfs f5, 0x7c(r1)
    stfs f4, 0x80(r1)
    stfs f9, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f7, 0x40(r1)
    stfs f9, 0x88(r1)
    stfs f8, 0x8c(r1)
    stfs f7, 0x90(r1)
    stfs f12, 0x2c(r1)
    stfs f11, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f12, 0x98(r1)
    stfs f11, 0x9c(r1)
    stfs f10, 0xa0(r1)
    stfs f30, 0x20(r1)
    stfs f31, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f30, 0x84(r1)
    stfs f31, 0x94(r1)
    stfs f13, 0xa4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F9750
    lfs f2, 0x1c(r1)
    lfs f0, lbl_8088360C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802648CC_00000DE4
    lfs f3, 0x18(r1)
    lfs f0, lbl_80883600
    fcmpo cr0, f3, f0
    ble lbl_fn_802648CC_00000DD4
    lfs f0, lbl_80883610
    b lbl_fn_802648CC_00000DD8
lbl_fn_802648CC_00000DD4:
    lfs f0, lbl_80883614
lbl_fn_802648CC_00000DD8:
    fneg f0, f0
    stfs f0, 0x8(r1)
    b lbl_fn_802648CC_00000DF8
lbl_fn_802648CC_00000DE4:
    lfs f1, 0x18(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8(r1)
lbl_fn_802648CC_00000DF8:
    addi r3, r1, 0x8
    lfs f2, lbl_80883600
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_807443A8@ha
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, lbl_80883608
    stfs f2, 0x70(r1)
    lfs f3, 0x6c(r1)
    lfs f4, 0x538(r30)
    stfs f2, 0x10(r1)
    fsubs f3, f3, f4
    lfd f2, lbl_807443A8@l(r3)
    fmadds f1, f0, f3, f4
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80883648
    fcmpo cr0, f3, f0
    ble lbl_fn_802648CC_00000E48
    lfs f0, lbl_8088364C
    fsubs f3, f3, f0
lbl_fn_802648CC_00000E48:
    lfs f0, lbl_80883650
    fcmpo cr0, f3, f0
    bge lbl_fn_802648CC_00000E5C
    lfs f0, lbl_8088364C
    fadds f3, f3, f0
lbl_fn_802648CC_00000E5C:
    stfs f3, 0x538(r30)
lbl_fn_802648CC_00000E60:
    lfs f3, 0xfb8(r30)
    lfs f0, lbl_80883600
    fcmpo cr0, f3, f0
    ble lbl_fn_802648CC_00000F34
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_80883660
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802648CC_00000F34
    lis r4, lbl_807443C0@ha
    addi r3, r30, 0xb0
    addi r4, r4, lbl_807443C0@l
    li r5, 0x0
    addi r4, r4, 0x7f
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802648CC_00000EAC
    li r5, 0x0
    b lbl_fn_802648CC_00000EB8
lbl_fn_802648CC_00000EAC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r5, r3, r0
lbl_fn_802648CC_00000EB8:
    lfs f5, 0x2c(r5)
    addi r3, r1, 0x50
    lfs f6, 0x1c(r5)
    mr r4, r3
    lfs f7, 0xc(r5)
    stfs f7, 0x5c(r1)
    stfs f6, 0x60(r1)
    stfs f5, 0x64(r1)
    lfs f4, 0x16f4(r30)
    lfs f3, 0x16f0(r30)
    lfs f0, 0x16ec(r30)
    fsubs f4, f4, f5
    fsubs f3, f3, f6
    fsubs f0, f0, f7
    stfs f4, 0x58(r1)
    stfs f0, 0x50(r1)
    stfs f3, 0x54(r1)
    bl fn_805F98D0
    lwz r3, lbl_8087F048
    mr r4, r30
    lwz r5, 0x638(r30)
    addi r6, r1, 0x5c
    lfs f1, lbl_80883600
    addi r7, r1, 0x50
    lfs f2, lbl_808835FC
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
    lfs f0, lbl_80883600
    stfs f0, 0xfb8(r30)
lbl_fn_802648CC_00000F34:
    lfs f30, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_802648CC_00000F70
    li r31, 0x0
    stw r31, 0x58c(r30)
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80883600
    stw r31, 0x16e8(r30)
    stfs f0, 0xfb8(r30)
lbl_fn_802648CC_00000F70:
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80264C88(void)
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
    bne lbl_fn_80264C88_00000FEC
    li r0, 0x0
    stw r0, 0x58c(r30)
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_80264C88_000010A4
lbl_fn_80264C88_00000FEC:
    lfs f1, 0x2e4(r30)
    lfs f0, lbl_80883664
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80264C88_00001060
    lfs f0, lbl_80883668
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80264C88_00001060
    lwz r3, 0x16d4(r30)
    bl fn_80219E6C
    mr r31, r3
    mr r3, r30
    bl fn_80144710
    li r0, 0x1
    stb r0, 0x59f(r30)
    lwz r8, 0x590(r30)
    mr r6, r30
    lwz r3, lbl_8087F048
    mr r7, r31
    lfs f1, lbl_80883600
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    li r0, 0x0
    stb r0, 0x59f(r30)
    b lbl_fn_80264C88_000010A4
lbl_fn_80264C88_00001060:
    lfs f2, 0x2e4(r30)
    lfs f1, lbl_80883630
    lfs f0, lbl_8088360C
    fsubs f1, f2, f1
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80264C88_000010A4
    lwz r3, 0x16d0(r30)
    addi r0, r3, 0x1
    stw r0, 0x16d0(r30)
    cmpwi r0, 0x2
    ble lbl_fn_80264C88_000010A4
    lwz r3, lbl_8087F430
    li r4, 0x66
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_80264C88_000010A4:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80264DB4(void)
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
    lis r3, lbl_80784DD8@ha
    addi r28, r30, 0x14b0
    addi r3, r3, lbl_80784DD8@l
    stw r3, 0x0(r30)
    mr r3, r28
    bl fn_80473E74
    lfs f0, lbl_80883674
    lis r3, lbl_8078FBB0@ha
    li r29, 0x0
    lfs f1, lbl_80883670
    addi r3, r3, lbl_8078FBB0@l
    li r4, 0x2d
    li r0, 0x6
    stw r3, 0x0(r28)
    addi r3, r30, 0x1564
    stw r29, 0x14b8(r30)
    stw r29, 0x14bc(r30)
    stw r29, 0x14c0(r30)
    stw r29, 0x14c4(r30)
    stfs f1, 0x14c8(r30)
    stw r29, 0x14cc(r30)
    stw r29, 0x14d0(r30)
    stw r29, 0x14ec(r30)
    stw r29, 0x14f0(r30)
    stfs f0, 0x14f4(r30)
    stfs f0, 0x14f8(r30)
    stfs f0, 0x14fc(r30)
    stw r4, 0x1500(r30)
    stw r29, 0x1504(r30)
    stw r29, 0x1508(r30)
    stfs f0, 0x1510(r30)
    stfs f0, 0x1514(r30)
    stfs f0, 0x1518(r30)
    stw r0, 0x152c(r30)
    stfs f0, 0x1530(r30)
    stfs f0, 0x1534(r30)
    stfs f0, 0x1538(r30)
    stfs f0, 0x153c(r30)
    stfs f0, 0x1540(r30)
    stw r29, 0x1544(r30)
    stfs f0, 0x1558(r30)
    stfs f0, 0x155c(r30)
    stfs f0, 0x1560(r30)
    bl fn_802377B8
    addi r3, r30, 0x1570
    bl fn_802377B8
    addi r3, r30, 0x157c
    bl fn_802377B8
    addi r3, r30, 0x1588
    bl fn_802377B8
    addi r3, r30, 0x1594
    bl fn_802377B8
    addi r3, r30, 0x15a0
    bl fn_802377B8
    addi r3, r30, 0x15ac
    bl fn_802377B8
    addi r3, r30, 0x15b8
    bl fn_802377B8
    addi r3, r30, 0x15c4
    bl fn_802377B8
    addi r3, r30, 0x15d0
    bl fn_802377B8
    addi r3, r30, 0x15dc
    bl fn_802377B8
    addi r3, r30, 0x15e8
    bl fn_802377B8
    addi r3, r30, 0x15f4
    bl fn_802377B8
    addi r3, r30, 0x1600
    bl fn_80237518
    addi r3, r30, 0x160c
    bl fn_802377B8
    addi r3, r30, 0x1618
    bl fn_802377B8
    li r0, 0x1
    stw r29, 0x162c(r30)
    addi r3, r30, 0x14d4
    li r4, 0x0
    stw r29, 0x1630(r30)
    li r5, 0x18
    stw r29, 0x1634(r30)
    stw r29, 0x1638(r30)
    stw r29, 0x163c(r30)
    stw r29, 0x1640(r30)
    stw r29, 0x1644(r30)
    stw r0, 0x1648(r30)
    stw r29, 0x164c(r30)
    stw r29, 0x1650(r30)
    stw r29, 0x1654(r30)
    stw r29, 0x1688(r30)
    stw r29, 0x168c(r30)
    stw r29, 0x1690(r30)
    bl memset
    lwz r0, 0x12a4(r30)
    lis r3, lbl_80744608@ha
    addi r28, r3, lbl_80744608@l
    addi r27, r1, 0x38
    oris r0, r0, 0x40
    stw r0, 0x12a4(r30)
    mr r3, r28
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
lbl_fn_80264DB4_00001388:
    addi r3, r1, 0x44
    bl fn_8005B3CC
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_80264DB4_00001420
    addi r4, r28, 0x2d
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80264DB4_00001420
    mr r3, r26
    addi r4, r28, 0x2e
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80264DB4_00001410
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80264DB4_000013DC
    lbz r0, 0x2c(r1)
    clrlwi r25, r0, 25
    b lbl_fn_80264DB4_000013E0
lbl_fn_80264DB4_000013DC:
    lwz r25, 0x30(r1)
lbl_fn_80264DB4_000013E0:
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
lbl_fn_80264DB4_00001410:
    addi r3, r1, 0x44
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80264DB4_00001388
lbl_fn_80264DB4_00001420:
    addi r3, r1, 0x20
    addi r4, r1, 0x38
    addi r5, r1, 0x2c
    bl fn_8006AFF8
    lwz r0, 0x20(r1)
    addi r3, r30, 0x14b0
    srwi. r0, r0, 31
    bne lbl_fn_80264DB4_00001448
    addi r4, r1, 0x21
    b lbl_fn_80264DB4_0000144C
lbl_fn_80264DB4_00001448:
    lwz r4, 0x28(r1)
lbl_fn_80264DB4_0000144C:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x168c(r30)
    lis r3, lbl_80744608@ha
    addi r3, r3, lbl_80744608@l
    cmpwi r0, 0x0
    addi r4, r3, 0x37
    bne lbl_fn_80264DB4_00001490
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80264DB4_00001490
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x168c(r30)
    b lbl_fn_80264DB4_00001494
lbl_fn_80264DB4_00001490:
    li r3, 0x0
lbl_fn_80264DB4_00001494:
    lis r31, lbl_80744608@ha
    addi r5, r30, 0x1690
    addi r31, r31, lbl_80744608@l
    li r6, 0x0
    addi r4, r31, 0x49
    li r7, 0x0
    bl fn_80087994
    addi r3, r30, 0x1564
    addi r4, r31, 0x53
    bl fn_8023780C
    addi r3, r30, 0x1570
    addi r4, r31, 0x69
    bl fn_8023780C
    addi r3, r30, 0x157c
    addi r4, r31, 0x7f
    bl fn_8023780C
    addi r3, r30, 0x1588
    addi r4, r31, 0x95
    bl fn_8023780C
    addi r3, r30, 0x1594
    addi r4, r31, 0xab
    bl fn_8023780C
    addi r3, r30, 0x15a0
    addi r4, r31, 0xc1
    bl fn_8023780C
    addi r3, r30, 0x15ac
    addi r4, r31, 0xd7
    bl fn_8023780C
    addi r3, r30, 0x15b8
    addi r4, r31, 0xed
    bl fn_8023780C
    addi r3, r30, 0x15c4
    addi r4, r31, 0x103
    bl fn_8023780C
    addi r3, r30, 0x15d0
    addi r4, r31, 0x119
    bl fn_8023780C
    addi r3, r30, 0x15dc
    addi r4, r31, 0x12f
    bl fn_8023780C
    addi r3, r30, 0x15e8
    addi r4, r31, 0x145
    bl fn_8023780C
    addi r3, r30, 0x15f4
    addi r4, r31, 0x15b
    bl fn_8023780C
    addi r3, r30, 0x1600
    addi r4, r31, 0x171
    bl fn_80237654
    addi r3, r30, 0x160c
    addi r4, r31, 0x18a
    bl fn_8023780C
    addi r3, r30, 0x1618
    addi r4, r31, 0x197
    bl fn_8023780C
    lwz r0, 0x12a8(r30)
    lis r3, 0x2
    subi r3, r3, 0x778b
    ori r0, r0, 0x800
    stw r0, 0x12a8(r30)
    bl fn_80206C50
    mr r4, r3
    lwz r3, 0x78(r3)
    lwz r4, 0x80(r4)
    mr r6, r30
    li r5, 0x0
    li r7, 0x0
    bl fn_800457A4
    stw r3, 0x1624(r30)
    stw r3, 0x1628(r30)
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80264DB4_000015C0
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_80264DB4_000015C0:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80264DB4_000015D4
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_80264DB4_000015D4:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80264DB4_000015E8
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_80264DB4_000015E8:
    addi r11, r1, 0x6a0
    mr r3, r30
    bl _restgpr_25
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}

asm void fn_802652F4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    beq lbl_fn_802652F4_00001898
    lwz r0, 0x1624(r3)
    lis r4, lbl_80784DD8@ha
    addi r4, r4, lbl_80784DD8@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802652F4_0000165C
    mr r3, r0
    li r4, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_802652F4_0000165C:
    addic. r0, r30, 0x168c
    beq lbl_fn_802652F4_00001680
    lwz r4, 0x168c(r30)
    cmpwi r4, 0x0
    beq lbl_fn_802652F4_00001680
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802652F4_00001680
    bl fn_800897D8
lbl_fn_802652F4_00001680:
    addic. r29, r30, 0x1618
    beq lbl_fn_802652F4_000016A0
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802652F4_000016A0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802652F4_000016A0:
    addic. r29, r30, 0x160c
    beq lbl_fn_802652F4_000016C0
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802652F4_000016C0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802652F4_000016C0:
    addi r3, r30, 0x1600
    li r4, -0x1
    bl fn_802375C4
    addic. r29, r30, 0x15f4
    beq lbl_fn_802652F4_000016EC
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802652F4_000016EC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802652F4_000016EC:
    addic. r29, r30, 0x15e8
    beq lbl_fn_802652F4_0000170C
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802652F4_0000170C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802652F4_0000170C:
    addic. r29, r30, 0x15dc
    beq lbl_fn_802652F4_0000172C
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802652F4_0000172C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802652F4_0000172C:
    addic. r29, r30, 0x15d0
    beq lbl_fn_802652F4_0000174C
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802652F4_0000174C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802652F4_0000174C:
    addic. r29, r30, 0x15c4
    beq lbl_fn_802652F4_0000176C
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802652F4_0000176C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802652F4_0000176C:
    addic. r29, r30, 0x15b8
    beq lbl_fn_802652F4_0000178C
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802652F4_0000178C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802652F4_0000178C:
    addic. r29, r30, 0x15ac
    beq lbl_fn_802652F4_000017AC
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802652F4_000017AC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802652F4_000017AC:
    addic. r29, r30, 0x15a0
    beq lbl_fn_802652F4_000017CC
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802652F4_000017CC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802652F4_000017CC:
    addic. r29, r30, 0x1594
    beq lbl_fn_802652F4_000017EC
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802652F4_000017EC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802652F4_000017EC:
    addic. r29, r30, 0x1588
    beq lbl_fn_802652F4_0000180C
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802652F4_0000180C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802652F4_0000180C:
    addic. r29, r30, 0x157c
    beq lbl_fn_802652F4_0000182C
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802652F4_0000182C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802652F4_0000182C:
    addic. r29, r30, 0x1570
    beq lbl_fn_802652F4_0000184C
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802652F4_0000184C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802652F4_0000184C:
    addic. r29, r30, 0x1564
    beq lbl_fn_802652F4_0000186C
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802652F4_0000186C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802652F4_0000186C:
    addic. r3, r30, 0x14b0
    beq lbl_fn_802652F4_0000187C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802652F4_0000187C:
    mr r3, r30
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r31, 0x0
    ble lbl_fn_802652F4_00001898
    mr r3, r30
    bl dtor_80084684
lbl_fn_802652F4_00001898:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802655A8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_802655A8_00001AF4
    lwz r3, 0x1438(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802655A8_000018F4
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_802655A8_00001AF4
lbl_fn_802655A8_000018F4:
    lwz r3, 0x1624(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_802655A8_00001AF4
    addi r3, r31, 0x1564
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802655A8_00001AF4
    addi r3, r31, 0x1570
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802655A8_00001AF4
    addi r3, r31, 0x157c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802655A8_00001AF4
    addi r3, r31, 0x1588
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802655A8_00001AF4
    addi r3, r31, 0x1594
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802655A8_00001AF4
    addi r3, r31, 0x15a0
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802655A8_00001AF4
    addi r3, r31, 0x15ac
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802655A8_00001AF4
    addi r3, r31, 0x15b8
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802655A8_00001AF4
    addi r3, r31, 0x15c4
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802655A8_00001AF4
    addi r3, r31, 0x15d0
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802655A8_00001AF4
    addi r3, r31, 0x15dc
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802655A8_00001AF4
    addi r3, r31, 0x15e8
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802655A8_00001AF4
    addi r3, r31, 0x15f4
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802655A8_00001AF4
    addi r3, r31, 0x1600
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_802655A8_00001AF4
    addi r3, r31, 0x160c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802655A8_00001AF4
    addi r3, r31, 0x1618
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802655A8_00001AF4
    addi r3, r31, 0x14b0
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_802655A8_00001AF4
    lwz r4, 0x7ec(r31)
    li r0, 0x0
    stw r0, 0x58c(r31)
    mr r3, r31
    ori r0, r4, 0x1c0
    li r4, 0x2
    oris r0, r0, 0x1
    ori r0, r0, 0xc21d
    oris r0, r0, 0x380
    stw r0, 0x7ec(r31)
    bl fn_8016E970
    mr r3, r31
    bl fn_8026580C
    lwz r3, 0x1438(r31)
    lfs f0, lbl_80883670
    cmpwi r3, 0x0
    stfs f0, 0xad0(r31)
    beq lbl_fn_802655A8_00001A80
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_802655A8_00001A80:
    lwz r3, 0x14c0(r31)
    li r0, 0x2710
    stw r0, 0x165c(r31)
    cmpwi r3, 0x1
    stw r0, 0x1658(r31)
    bne lbl_fn_802655A8_00001AD0
    lfs f1, lbl_80883678
    addi r3, r1, 0x8
    lfs f0, lbl_8088367C
    li r4, 0x0
    stfs f1, 0x14c8(r31)
    li r5, 0x8
    stfs f0, 0x9fc(r31)
    bl memset
    li r3, 0x616
    stw r3, 0x8(r1)
    lwz r0, 0xc(r1)
    stw r0, 0xac0(r31)
    stw r3, 0xabc(r31)
    b lbl_fn_802655A8_00001AE0
lbl_fn_802655A8_00001AD0:
    cmpwi r3, 0x0
    bne lbl_fn_802655A8_00001AE0
    li r0, 0x1
    stw r0, 0x1634(r31)
lbl_fn_802655A8_00001AE0:
    lwz r0, 0x54c(r31)
    li r3, 0x1
    rlwinm r0, r0, 0, 8, 6
    stw r0, 0x54c(r31)
    b lbl_fn_802655A8_00001AF8
lbl_fn_802655A8_00001AF4:
    li r3, 0x0
lbl_fn_802655A8_00001AF8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
