#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8004ED34(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AFF8(void);
extern void fn_800897D8(void);
extern void fn_80094958(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800D246C(void);
extern void fn_800EB7A0(void);
extern void fn_800EE360(void);
extern void fn_800F8548(void);
extern void fn_80129978(void);
extern void fn_8013655C(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_80151448(void);
extern void fn_8015495C(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_801765D8(void);
extern void fn_80178A6C(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80264024(void);
extern void fn_802640FC(void);
extern void fn_8026442C(void);
extern void fn_8026474C(void);
extern void fn_802648CC(void);
extern void fn_80264C88(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_803C1560(void);
extern void fn_803EA77C(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80744398[];
extern u8 lbl_807443A0[];
extern u8 lbl_807443C0[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80784BF8[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8087F8A0;
extern u32 lbl_80883578;
extern u32 lbl_80883580;
extern u32 lbl_80883584;
extern u32 lbl_80883598;
extern u32 lbl_808835B4;
extern u32 lbl_808835B8;
extern u32 lbl_808835C0;
extern u32 lbl_808835C8;
extern u32 lbl_808835DC;
extern u32 lbl_808835EC;
extern u32 lbl_808835F0;
extern u32 lbl_808835F4;
extern u32 lbl_808835F8;
extern u32 lbl_808835FC;
extern u32 lbl_80883600;
extern u32 lbl_80883604;
extern u32 lbl_80883608;
extern u32 lbl_8088360C;
extern u32 lbl_80883610;
extern u32 lbl_80883614;
extern u32 lbl_80883618;
extern u32 lbl_8088361C;
extern u32 lbl_80883620;
extern u32 lbl_80883624;
extern u32 lbl_80883628;
extern u32 lbl_8088362C;
extern u32 lbl_80883630;
extern u32 lbl_80883634;

/* Function declarations */
void fn_802620A8(void);
void fn_802621D4(void);
void fn_802626E4(void);
void fn_802627E8(void);
void fn_80262840(void);
void fn_80262938(void);
void fn_80262C40(void);
void fn_80262CF8(void);
void fn_80262E6C(void);
void fn_80262FB4(void);
void fn_8026357C(void);
void fn_80263580(void);
void fn_802639C8(void);

asm void fn_802620A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xb
    bne lbl_fn_802620A8_00000040
    addi r4, r3, 0x1508
    addi r3, r3, 0x1514
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    b lbl_fn_802620A8_00000054
lbl_fn_802620A8_00000040:
    lfs f2, 0x530(r3)
    addi r4, r3, 0x1514
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x151c(r3)
lbl_fn_802620A8_00000054:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r30
    bl fn_80178A6C
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r30
    bl fn_8016DA4C
    li r31, 0x0
    stw r31, 0x14bc(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x12a4(r30)
    mr r4, r30
    stw r3, 0x590(r30)
    li r5, 0x66
    rlwinm r0, r0, 0, 27, 25
    li r6, 0x1
    stw r31, 0x14c4(r30)
    stw r0, 0x12a4(r30)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    li r0, 0x2
    stw r0, 0x58c(r30)
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80883584
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883578
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x2e
    lfs f2, lbl_80883598
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802621D4(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    stfd f31, 0x1d0(r1)
    psq_st f31, 0x1d8(r1), 0, 0
    stfd f30, 0x1c0(r1)
    psq_st f30, 0x1c8(r1), 0, 0
    stw r31, 0x1bc(r1)
    mr r31, r5
    stw r30, 0x1b8(r1)
    mr r30, r4
    stw r29, 0x1b4(r1)
    mr r29, r3
    stw r28, 0x1b0(r1)
    lwz r6, 0x14b8(r3)
    cmpwi r6, 0x0
    beq lbl_fn_802621D4_0000060C
    lfs f3, 0x530(r6)
    lfs f0, 0x1504(r3)
    lfs f5, 0x52c(r6)
    fsubs f6, f3, f0
    lfs f4, 0x1500(r3)
    lfs f0, 0x14fc(r3)
    addi r3, r1, 0xe0
    lfs f3, 0x528(r6)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xe4(r1)
    mr r4, r3
    stfs f0, 0xe0(r1)
    stfs f6, 0xe8(r1)
    bl fn_805F98D0
    lwz r0, 0x14e8(r29)
    cmpwi r0, 0x1
    bne lbl_fn_802621D4_00000278
    lfs f3, 0xe4(r1)
    addi r4, r1, 0xc8
    lfs f0, 0xe0(r1)
    fneg f6, f3
    lwz r3, 0x14c8(r29)
    fneg f7, f0
    lfs f0, 0x8e4(r29)
    lfs f4, 0x40(r3)
    frsp f3, f6
    fadds f8, f4, f0
    lfs f4, 0xe8(r1)
    frsp f0, f7
    lwz r3, 0x14b8(r29)
    fneg f5, f4
    fmuls f9, f3, f8
    fmuls f10, f0, f8
    lfs f4, lbl_808835EC
    frsp f0, f5
    lfs f3, 0x52c(r3)
    fmuls f11, f9, f4
    fmuls f12, f10, f4
    fmuls f8, f0, f8
    lfs f0, 0x528(r3)
    fadds f13, f3, f11
    lfs f3, 0x530(r3)
    fadds f0, f0, f12
    stfs f13, 0xcc(r1)
    fmuls f4, f8, f4
    stfs f0, 0xc8(r1)
    lfs f0, lbl_808835DC
    fadds f2, f3, f4
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f3, 0x4(r30)
    stfs f7, 0xa4(r1)
    fadds f0, f3, f0
    stfs f6, 0xa8(r1)
    stfs f5, 0xac(r1)
    stfs f10, 0xb0(r1)
    stfs f9, 0xb4(r1)
    stfs f8, 0xb8(r1)
    stfs f12, 0xbc(r1)
    stfs f11, 0xc0(r1)
    stfs f4, 0xc4(r1)
    stfs f2, 0xd0(r1)
    stfs f2, 0x8(r30)
    stfs f0, 0x4(r30)
    b lbl_fn_802621D4_00000354
lbl_fn_802621D4_00000278:
    lfs f3, 0x530(r29)
    addi r3, r1, 0xe0
    lfs f0, 0x1504(r29)
    addi r5, r1, 0x98
    lfs f5, 0x52c(r29)
    mr r4, r3
    fsubs f2, f3, f0
    lfs f4, 0x1500(r29)
    lfs f3, 0x528(r29)
    lfs f0, 0x14fc(r29)
    fsubs f4, f5, f4
    stfs f2, 0xa0(r1)
    fsubs f0, f3, f0
    stfs f4, 0x9c(r1)
    stfs f0, 0x98(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xe8(r1)
    bl fn_805F98D0
    lfs f3, 0xe4(r1)
    addi r3, r1, 0x8c
    lfs f0, 0xe0(r1)
    fneg f11, f3
    lfs f3, 0xe8(r1)
    fneg f12, f0
    lfs f8, lbl_808835C0
    fneg f10, f3
    lfs f4, 0x1500(r29)
    frsp f7, f11
    stfs f12, 0x74(r1)
    frsp f6, f12
    lfs f3, 0x14fc(r29)
    lfs f5, 0x1504(r29)
    frsp f9, f10
    fmuls f12, f6, f8
    lfs f0, lbl_808835DC
    fmuls f7, f7, f8
    stfs f11, 0x78(r1)
    fmuls f6, f9, f8
    fadds f3, f3, f12
    fadds f4, f4, f7
    stfs f10, 0x7c(r1)
    fadds f2, f5, f6
    stfs f3, 0x8c(r1)
    stfs f4, 0x90(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f3, 0x4(r30)
    stfs f12, 0x80(r1)
    fadds f0, f3, f0
    stfs f7, 0x84(r1)
    stfs f6, 0x88(r1)
    stfs f2, 0x94(r1)
    stfs f2, 0x8(r30)
    stfs f0, 0x4(r30)
lbl_fn_802621D4_00000354:
    li r0, 0x0
    stw r0, 0x194(r1)
    lfs f6, lbl_80883578
    mr r5, r30
    lfs f5, lbl_808835F0
    addi r4, r1, 0x160
    stw r0, 0x198(r1)
    addi r6, r1, 0xd4
    lwz r3, lbl_8087EE98
    addi r8, r29, 0x5b8
    stw r0, 0x19c(r1)
    lis r7, 0x8000
    li r9, 0x0
    stw r0, 0x1a0(r1)
    lfs f4, 0x8(r30)
    lfs f3, 0x4(r30)
    lfs f0, 0x0(r30)
    fadds f4, f6, f4
    fadds f3, f5, f3
    stfs f6, 0x68(r1)
    fadds f0, f6, f0
    stfs f5, 0x6c(r1)
    stfs f6, 0x70(r1)
    stfs f0, 0xd4(r1)
    stfs f3, 0xd8(r1)
    stfs f4, 0xdc(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_802621D4_000003DC
    addi r3, r1, 0x170
    lfs f2, 0x178(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x8(r30)
lbl_fn_802621D4_000003DC:
    lwz r3, lbl_8087F430
    mr r4, r30
    lfs f1, lbl_808835C8
    li r5, 0x0
    lwz r3, 0x10d8(r3)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_803C1560
    lwz r4, lbl_8087F430
    subi r0, r3, 0x1
    mulli r0, r0, 0x30
    lfs f0, lbl_80883580
    lwz r3, 0x10d8(r4)
    addi r4, r1, 0x50
    addi r28, r1, 0x5c
    lwz r3, 0x9c(r3)
    add r3, r3, r0
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x8(r30)
    psq_st f1, 0x0(r30), 0, 0
    lwz r3, 0x14b8(r29)
    lfs f5, 0x4(r30)
    lfs f3, 0x530(r3)
    lfs f4, 0x528(r3)
    fsubs f2, f3, f2
    lfs f3, 0x0(r30)
    lfs f6, 0x52c(r3)
    fsubs f3, f4, f3
    stfs f2, 0x58(r1)
    frsp f4, f2
    stfs f3, 0x50(r1)
    fsubs f5, f6, f5
    fabs f3, f4
    stfs f5, 0x54(r1)
    psq_l f1, 0x0(r4), 0, 0
    frsp f3, f3
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802621D4_000004A8
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80883578
    fcmpo cr0, f3, f0
    ble lbl_fn_802621D4_0000049C
    lfs f0, lbl_808835B4
    b lbl_fn_802621D4_000004A0
lbl_fn_802621D4_0000049C:
    lfs f0, lbl_808835B8
lbl_fn_802621D4_000004A0:
    stfs f0, 0x48(r1)
    b lbl_fn_802621D4_000004BC
lbl_fn_802621D4_000004A8:
    fmr f2, f4
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802621D4_000004BC:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xf0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883578
    addi r4, r1, 0x38
    lfs f30, 0xf8(r1)
    mr r5, r4
    lfs f31, 0xf4(r1)
    addi r3, r1, 0x120
    lfs f13, 0xf0(r1)
    lfs f12, 0x108(r1)
    lfs f11, 0x104(r1)
    lfs f10, 0x100(r1)
    lfs f9, 0x118(r1)
    lfs f8, 0x114(r1)
    lfs f7, 0x110(r1)
    lfs f6, 0x11c(r1)
    lfs f5, 0x10c(r1)
    lfs f4, 0xfc(r1)
    lfs f0, lbl_80883584
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0x150(r1)
    stfs f3, 0x154(r1)
    stfs f3, 0x158(r1)
    stfs f0, 0x15c(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x120(r1)
    stfs f31, 0x124(r1)
    stfs f30, 0x128(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x130(r1)
    stfs f11, 0x134(r1)
    stfs f12, 0x138(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x140(r1)
    stfs f8, 0x144(r1)
    stfs f9, 0x148(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x12c(r1)
    stfs f5, 0x13c(r1)
    stfs f6, 0x14c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883580
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802621D4_000005D8
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883578
    fcmpo cr0, f3, f0
    ble lbl_fn_802621D4_000005C8
    lfs f0, lbl_808835B4
    b lbl_fn_802621D4_000005CC
lbl_fn_802621D4_000005C8:
    lfs f0, lbl_808835B8
lbl_fn_802621D4_000005CC:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802621D4_000005EC
lbl_fn_802621D4_000005D8:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802621D4_000005EC:
    addi r3, r1, 0x44
    lfs f2, lbl_80883578
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    lfs f0, 0x60(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0x64(r1)
    stfs f0, 0x0(r31)
lbl_fn_802621D4_0000060C:
    lwz r0, 0x1e4(r1)
    psq_l f31, 0x1d8(r1), 0, 0
    lfd f31, 0x1d0(r1)
    psq_l f30, 0x1c8(r1), 0, 0
    lfd f30, 0x1c0(r1)
    lwz r31, 0x1bc(r1)
    lwz r30, 0x1b8(r1)
    lwz r29, 0x1b4(r1)
    lwz r28, 0x1b0(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}

asm void fn_802626E4(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r7
    stw r30, 0x58(r1)
    mr r30, r3
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_802626E4_00000724
    lwz r6, 0x7e0(r3)
    li r5, 0x1
    rlwinm r4, r6, 0, 12, 12
    subis r0, r4, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_802626E4_00000690
    rlwinm r4, r6, 0, 7, 7
    subis r0, r4, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_802626E4_00000690
    li r5, 0x0
lbl_fn_802626E4_00000690:
    cmpwi r5, 0x0
    bne lbl_fn_802626E4_00000724
    lfs f1, lbl_80883578
    li r4, 0x79
    lfs f0, lbl_80883584
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x20
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x20
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0x10(r1)
    mr r3, r31
    lfs f1, 0xc(r1)
    addi r4, r1, 0x14
    lfs f0, 0x8(r1)
    fneg f2, f2
    fneg f1, f1
    fneg f0, f0
    stfs f2, 0x1c(r1)
    stfs f0, 0x14(r1)
    stfs f1, 0x18(r1)
    bl fn_805F9990
    lfs f0, lbl_808835F4
    fcmpo cr0, f1, f0
    ble lbl_fn_802626E4_00000724
    lwz r4, 0x55c(r30)
    subfic r3, r4, 0x6
    subi r0, r4, 0x6
    or r0, r3, r0
    srwi r3, r0, 31
    addi r3, r3, 0x1
    b lbl_fn_802626E4_00000728
lbl_fn_802626E4_00000724:
    li r3, 0x0
lbl_fn_802626E4_00000728:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_802627E8(void)
{
    nofralloc
    cmpwi r4, 0x1
    bne lbl_fn_802627E8_00000790
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_802627E8_00000790
    lwz r5, 0x7e0(r3)
    li r4, 0x1
    rlwinm r3, r5, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_802627E8_00000780
    rlwinm r3, r5, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_802627E8_00000780
    li r4, 0x0
lbl_fn_802627E8_00000780:
    cmpwi r4, 0x0
    bne lbl_fn_802627E8_00000790
    li r3, 0x3
    blr
lbl_fn_802627E8_00000790:
    li r3, -0x1
    blr
}

asm void fn_80262840(void)
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
    beq lbl_fn_80262840_00000870
    addic. r0, r3, 0x1550
    beq lbl_fn_80262840_000007E4
    lwz r4, 0x1550(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80262840_000007E4
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80262840_000007E4
    bl fn_800897D8
lbl_fn_80262840_000007E4:
    addic. r31, r29, 0x1538
    beq lbl_fn_80262840_00000804
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80262840_00000804
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80262840_00000804:
    addic. r31, r29, 0x152c
    beq lbl_fn_80262840_00000824
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80262840_00000824
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80262840_00000824:
    addic. r31, r29, 0x1520
    beq lbl_fn_80262840_00000844
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80262840_00000844
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80262840_00000844:
    addic. r3, r29, 0x14b0
    beq lbl_fn_80262840_00000854
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80262840_00000854:
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_80262840_00000870
    mr r3, r29
    bl dtor_80084684
lbl_fn_80262840_00000870:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80262938(void)
{
    nofralloc
    stwu r1, -0x6a0(r1)
    mflr r0
    stw r0, 0x6a4(r1)
    stmw r25, 0x684(r1)
    mr r31, r5
    mr r30, r3
    lwz r5, 0x20(r5)
    bl fn_8035B694
    lis r3, lbl_80784BF8@ha
    addi r28, r30, 0x14b0
    addi r3, r3, lbl_80784BF8@l
    stw r3, 0x0(r30)
    mr r3, r28
    bl fn_80473E74
    lis r3, lbl_8078FBB0@ha
    li r29, 0x0
    addi r3, r3, lbl_8078FBB0@l
    li r4, 0x5dc
    li r0, 0x5de
    stw r3, 0x0(r28)
    addi r3, r30, 0x16f8
    stw r29, 0x14b8(r30)
    stw r29, 0x14bc(r30)
    stw r29, 0x14c0(r30)
    stw r29, 0x14c4(r30)
    stw r29, 0x14c8(r30)
    stw r29, 0x16cc(r30)
    stw r29, 0x16d0(r30)
    stw r4, 0x16d4(r30)
    stw r0, 0x16d8(r30)
    bl fn_802377B8
    lis r3, lbl_807443C0@ha
    stw r29, 0x1704(r30)
    addi r28, r3, lbl_807443C0@l
    addi r27, r1, 0x38
    stw r29, 0x1708(r30)
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
lbl_fn_80262938_00000A34:
    addi r3, r1, 0x44
    bl fn_8005B3CC
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_80262938_00000ACC
    addi r4, r28, 0x2c
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80262938_00000ACC
    mr r3, r26
    addi r4, r28, 0x2d
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80262938_00000ABC
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80262938_00000A88
    lbz r0, 0x2c(r1)
    clrlwi r25, r0, 25
    b lbl_fn_80262938_00000A8C
lbl_fn_80262938_00000A88:
    lwz r25, 0x30(r1)
lbl_fn_80262938_00000A8C:
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
lbl_fn_80262938_00000ABC:
    addi r3, r1, 0x44
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80262938_00000A34
lbl_fn_80262938_00000ACC:
    addi r3, r1, 0x20
    addi r4, r1, 0x38
    addi r5, r1, 0x2c
    bl fn_8006AFF8
    lwz r0, 0x20(r1)
    addi r3, r30, 0x14b0
    srwi. r0, r0, 31
    bne lbl_fn_80262938_00000AF4
    addi r4, r1, 0x21
    b lbl_fn_80262938_00000AF8
lbl_fn_80262938_00000AF4:
    lwz r4, 0x28(r1)
lbl_fn_80262938_00000AF8:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r3, 0x12a4(r30)
    lis r4, lbl_807443C0@ha
    lwz r0, 0x958(r30)
    addi r4, r4, lbl_807443C0@l
    oris r3, r3, 0x40
    li r5, 0x0
    ori r6, r0, 0x10
    li r0, 0xa
    stw r3, 0x12a4(r30)
    addi r3, r30, 0x16f8
    addi r4, r4, 0x36
    stw r6, 0x958(r30)
    stw r5, 0x16dc(r30)
    stw r0, 0x16e4(r30)
    bl fn_8023780C
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80262938_00000B58
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_80262938_00000B58:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80262938_00000B6C
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_80262938_00000B6C:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80262938_00000B80
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_80262938_00000B80:
    mr r3, r30
    lmw r25, 0x684(r1)
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}

asm void fn_80262C40(void)
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
    beq lbl_fn_80262C40_00000C30
    addic. r0, r3, 0x1704
    beq lbl_fn_80262C40_00000BE4
    lwz r4, 0x1704(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80262C40_00000BE4
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80262C40_00000BE4
    bl fn_800897D8
lbl_fn_80262C40_00000BE4:
    addic. r31, r29, 0x16f8
    beq lbl_fn_80262C40_00000C04
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80262C40_00000C04
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80262C40_00000C04:
    addic. r3, r29, 0x14b0
    beq lbl_fn_80262C40_00000C14
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80262C40_00000C14:
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_80262C40_00000C30
    mr r3, r29
    bl dtor_80084684
lbl_fn_80262C40_00000C30:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80262CF8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_80262CF8_00000DA8
    lwz r3, 0x1438(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80262CF8_00000C90
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80262CF8_00000DA8
lbl_fn_80262CF8_00000C90:
    addi r3, r30, 0x16f8
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80262CF8_00000DA8
    addi r3, r30, 0x14b0
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_80262CF8_00000DA8
    addi r3, r30, 0x14b0
    bl fn_8047059C
    mr r31, r3
    addi r3, r30, 0x14b0
    bl fn_80470580
    mr r4, r3
    mr r3, r30
    mr r5, r31
    bl fn_80262E6C
    lwz r3, 0x7ec(r30)
    lis r4, lbl_807443C0@ha
    lwz r0, 0x12a4(r30)
    addi r4, r4, lbl_807443C0@l
    ori r3, r3, 0x1c0
    lfs f0, lbl_808835F8
    oris r3, r3, 0x1
    rlwinm r0, r0, 0, 8, 6
    ori r3, r3, 0xc21d
    stfs f0, 0x56c(r30)
    oris r3, r3, 0x380
    lfs f2, lbl_808835FC
    stw r3, 0x7ec(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883600
    addi r4, r4, 0x4c
    stw r0, 0x12a4(r30)
    addi r5, r1, 0x28
    lfs f0, lbl_80883604
    addi r6, r1, 0x18
    stfs f2, 0x8(r1)
    addi r7, r1, 0x8
    stfs f2, 0xc(r1)
    stfs f2, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f2, 0x18(r1)
    stfs f2, 0x1c(r1)
    stfs f2, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f1, 0x34(r1)
    bl fn_80094958
    lwz r0, 0x16cc(r30)
    cmpwi r0, 0x1
    bne lbl_fn_80262CF8_00000D74
    li r0, 0x3c
    stw r0, 0x16e0(r30)
    b lbl_fn_80262CF8_00000D7C
lbl_fn_80262CF8_00000D74:
    li r0, 0x96
    stw r0, 0x16e0(r30)
lbl_fn_80262CF8_00000D7C:
    lwz r3, 0x1438(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80262CF8_00000DA0
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_80262CF8_00000DA0:
    li r3, 0x1
    b lbl_fn_80262CF8_00000DAC
lbl_fn_80262CF8_00000DA8:
    li r3, 0x0
lbl_fn_80262CF8_00000DAC:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80262E6C(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    lis r6, lbl_807772D0@ha
    stw r0, 0x654(r1)
    li r0, 0x0
    addi r6, r6, lbl_807772D0@l
    stw r31, 0x64c(r1)
    mr r31, r4
    li r4, 0x0
    stw r30, 0x648(r1)
    mr r30, r5
    li r5, 0x400
    stw r29, 0x644(r1)
    mr r29, r3
    addi r3, r1, 0x18
    stw r6, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r31, lbl_807443C0@ha
    addi r31, r31, lbl_807443C0@l
lbl_fn_80262E6C_00000E64:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    mr r30, r3
    addi r4, r31, 0x58
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80262E6C_00000E94
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x16cc(r29)
    b lbl_fn_80262E6C_00000EE0
lbl_fn_80262E6C_00000E94:
    mr r3, r30
    addi r4, r31, 0x5f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80262E6C_00000EBC
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x16d4(r29)
    b lbl_fn_80262E6C_00000EE0
lbl_fn_80262E6C_00000EBC:
    mr r3, r30
    addi r4, r31, 0x6d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80262E6C_00000EE0
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x16d8(r29)
lbl_fn_80262E6C_00000EE0:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80262E6C_00000E64
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_80262FB4(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    lis r4, lbl_807443C0@ha
    lis r6, lbl_807C7030@ha
    stw r0, 0x164(r1)
    addi r4, r4, lbl_807443C0@l
    lfs f1, lbl_80883608
    addi r6, r6, lbl_807C7030@l
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    stfd f29, 0x130(r1)
    psq_st f29, 0x138(r1), 0, 0
    stw r31, 0x12c(r1)
    mr r31, r3
    stw r30, 0x128(r1)
    stw r29, 0x124(r1)
    lwz r5, lbl_8087F8A0
    lwz r7, 0x48(r5)
    addi r5, r4, 0x7a
    stw r7, 0x14b8(r3)
    addi r3, r3, 0x10d8
    addi r4, r7, 0xb0
    bl fn_80129978
    lwz r0, 0xd18(r31)
    lwz r3, 0x14c0(r31)
    cmpwi r0, 0x0
    addi r0, r3, 0x1
    stw r0, 0x14c0(r31)
    beq lbl_fn_80262FB4_00000F94
    lwz r0, 0x14b8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80262FB4_00000FB4
lbl_fn_80262FB4_00000F94:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x16e0(r31)
    li r3, 0x0
    stw r3, 0x16e8(r31)
    stw r0, 0x16dc(r31)
    b lbl_fn_80262FB4_00001488
lbl_fn_80262FB4_00000FB4:
    beq lbl_fn_80262FB4_00001488
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x7
    beq lbl_fn_80262FB4_00000FF8
    cmpwi r0, 0x8
    beq lbl_fn_80262FB4_00001004
    cmpwi r0, 0x2
    beq lbl_fn_80262FB4_00001010
    cmpwi r0, 0x9
    beq lbl_fn_80262FB4_0000105C
    cmpwi r0, 0xa
    beq lbl_fn_80262FB4_00001068
    cmpwi r0, 0xb
    beq lbl_fn_80262FB4_00001074
    cmpwi r0, 0xc
    beq lbl_fn_80262FB4_000010AC
    b lbl_fn_80262FB4_000010B8
lbl_fn_80262FB4_00000FF8:
    mr r3, r31
    bl fn_802640FC
    b lbl_fn_80262FB4_00001488
lbl_fn_80262FB4_00001004:
    mr r3, r31
    bl fn_8026442C
    b lbl_fn_80262FB4_00001488
lbl_fn_80262FB4_00001010:
    lfs f29, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f29, f1
    cror eq, gt, eq
    bne lbl_fn_80262FB4_00001488
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
    b lbl_fn_80262FB4_00001488
lbl_fn_80262FB4_0000105C:
    mr r3, r31
    bl fn_8026474C
    b lbl_fn_80262FB4_00001488
lbl_fn_80262FB4_00001068:
    mr r3, r31
    bl fn_802648CC
    b lbl_fn_80262FB4_00001488
lbl_fn_80262FB4_00001074:
    lfs f29, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f29, f1
    cror eq, gt, eq
    bne lbl_fn_80262FB4_00001488
    li r30, 0x0
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    stw r30, 0x16e8(r31)
    b lbl_fn_80262FB4_00001488
lbl_fn_80262FB4_000010AC:
    mr r3, r31
    bl fn_80264C88
    b lbl_fn_80262FB4_00001488
lbl_fn_80262FB4_000010B8:
    mr r3, r31
    bl fn_80264024
    lwz r4, 0x14b8(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80262FB4_00001488
    addi r3, r1, 0x10
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x1c
    lfs f2, 0x530(r4)
    lfs f0, 0x530(r31)
    lfs f5, 0x14(r1)
    lfs f4, 0x52c(r31)
    fsubs f6, f2, f0
    lfs f0, 0x528(r31)
    lfs f3, 0x10(r1)
    fsubs f4, f5, f4
    stfs f2, 0x18(r1)
    fsubs f0, f3, f0
    stfs f4, 0x20(r1)
    stfs f0, 0x1c(r1)
    stfs f6, 0x24(r1)
    bl fn_805F9940
    addi r3, r1, 0x1c
    addi r29, r1, 0x34
    fmr f31, f1
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x24(r1)
    mr r3, r29
    psq_st f1, 0x0(r29), 0, 0
    mr r4, r29
    stfs f2, 0x3c(r1)
    bl fn_805F98D0
    lfs f2, 0x3c(r1)
    addi r30, r1, 0x28
    psq_l f1, 0x0(r29), 0, 0
    fabs f3, f2
    lfs f0, lbl_8088360C
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x30(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80262FB4_00001188
    lfs f3, 0x28(r1)
    lfs f0, lbl_80883600
    fcmpo cr0, f3, f0
    ble lbl_fn_80262FB4_0000117C
    lfs f0, lbl_80883610
    b lbl_fn_80262FB4_00001180
lbl_fn_80262FB4_0000117C:
    lfs f0, lbl_80883614
lbl_fn_80262FB4_00001180:
    stfs f0, 0x44(r1)
    b lbl_fn_80262FB4_0000119C
lbl_fn_80262FB4_00001188:
    frsp f2, f2
    lfs f1, 0x28(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x44(r1)
lbl_fn_80262FB4_0000119C:
    lfs f0, 0x44(r1)
    addi r3, r1, 0xf0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883600
    addi r4, r1, 0x4c
    lfs f4, 0xf8(r1)
    mr r5, r4
    lfs f5, 0xf4(r1)
    addi r3, r1, 0xb0
    lfs f6, 0xf0(r1)
    lfs f7, 0x108(r1)
    lfs f8, 0x104(r1)
    lfs f9, 0x100(r1)
    lfs f10, 0x118(r1)
    lfs f11, 0x114(r1)
    lfs f12, 0x110(r1)
    lfs f13, 0x11c(r1)
    lfs f30, 0x10c(r1)
    lfs f29, 0xfc(r1)
    lfs f0, lbl_808835FC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x30(r1)
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f3, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f6, 0x7c(r1)
    stfs f5, 0x80(r1)
    stfs f4, 0x84(r1)
    stfs f6, 0xb0(r1)
    stfs f5, 0xb4(r1)
    stfs f4, 0xb8(r1)
    stfs f9, 0x70(r1)
    stfs f8, 0x74(r1)
    stfs f7, 0x78(r1)
    stfs f9, 0xc0(r1)
    stfs f8, 0xc4(r1)
    stfs f7, 0xc8(r1)
    stfs f12, 0x64(r1)
    stfs f11, 0x68(r1)
    stfs f10, 0x6c(r1)
    stfs f12, 0xd0(r1)
    stfs f11, 0xd4(r1)
    stfs f10, 0xd8(r1)
    stfs f29, 0x58(r1)
    stfs f30, 0x5c(r1)
    stfs f13, 0x60(r1)
    stfs f29, 0xbc(r1)
    stfs f30, 0xcc(r1)
    stfs f13, 0xdc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x54(r1)
    bl fn_805F9750
    lfs f2, 0x54(r1)
    lfs f0, lbl_8088360C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80262FB4_000012B8
    lfs f3, 0x50(r1)
    lfs f0, lbl_80883600
    fcmpo cr0, f3, f0
    ble lbl_fn_80262FB4_000012A8
    lfs f0, lbl_80883610
    b lbl_fn_80262FB4_000012AC
lbl_fn_80262FB4_000012A8:
    lfs f0, lbl_80883614
lbl_fn_80262FB4_000012AC:
    fneg f0, f0
    stfs f0, 0x40(r1)
    b lbl_fn_80262FB4_000012CC
lbl_fn_80262FB4_000012B8:
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x40(r1)
lbl_fn_80262FB4_000012CC:
    addi r3, r1, 0x40
    lfs f2, lbl_80883600
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80744398@ha
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0x538(r31)
    lfs f3, 0x2c(r1)
    stfs f2, 0x30(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80883618
    stfs f2, 0x48(r1)
    lfd f2, lbl_80744398@l(r3)
    fmuls f1, f0, f3
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_8088361C
    fcmpo cr0, f3, f0
    ble lbl_fn_80262FB4_0000131C
    lfs f0, lbl_80883620
    fsubs f3, f3, f0
lbl_fn_80262FB4_0000131C:
    lfs f0, lbl_80883624
    fcmpo cr0, f3, f0
    lwz r0, 0x14c4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80262FB4_00001488
    lwz r0, 0x16e8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80262FB4_00001488
    lfs f0, lbl_80883628
    fcmpo cr0, f31, f0
    bge lbl_fn_80262FB4_000013AC
    li r0, 0x8
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_808835FC
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883600
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x141
    lfs f2, lbl_808835F8
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_80262FB4_00001480
lbl_fn_80262FB4_000013AC:
    li r0, 0x9
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    li r0, 0x1d
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_808835FC
    li r30, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883600
    li r4, 0x0
    stw r30, 0x3fc(r31)
    li r5, 0x145
    lfs f2, lbl_808835F8
    li r6, 0x1
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lfs f0, lbl_80883600
    mr r3, r31
    stfs f0, 0xfb8(r31)
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883600
    li r0, -0x1
    lfs f1, lbl_808835FC
    addi r4, r31, 0x16f8
    stfs f0, 0x94(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x88
    addi r8, r1, 0x94
    stfs f0, 0x98(r1)
    addi r9, r1, 0xa0
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x9c(r1)
    stfs f0, 0x88(r1)
    stfs f0, 0x8c(r1)
    stfs f0, 0x90(r1)
    stfs f1, 0xa0(r1)
    stfs f1, 0xa4(r1)
    stfs f1, 0xa8(r1)
    stfs f1, 0xac(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_80262FB4_00001480:
    lwz r0, 0x16e0(r31)
    stw r0, 0x16dc(r31)
lbl_fn_80262FB4_00001488:
    lfs f0, lbl_8088362C
    mr r3, r31
    stfs f0, 0x5b0(r31)
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    lwz r0, 0x164(r1)
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    psq_l f29, 0x138(r1), 0, 0
    lfd f29, 0x130(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_8026357C(void)
{
    nofralloc
    b fn_80149A30
}

asm void fn_80263580(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    lfs f5, lbl_80883600
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    mr r31, r4
    stw r30, 0xf8(r1)
    mr r30, r3
    stw r29, 0xf4(r1)
    stw r28, 0xf0(r1)
    lfs f4, 0x10(r4)
    lfs f3, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x10(r4)
    stfs f3, 0x14(r4)
    stfs f0, 0x18(r4)
    lwz r0, 0x16cc(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80263580_00001598
    bl fn_80680CF8
    lis r4, 0x51ec
    lis r0, 0x4330
    subi r5, r4, 0x7ae1
    stw r0, 0xe0(r1)
    mulhw r5, r5, r3
    lis r4, lbl_807443A0@ha
    lfd f4, lbl_807443A0@l(r4)
    lfs f0, 0x8c4(r30)
    srawi r0, r5, 4
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x32
    subf r3, r0, r3
    addi r0, r3, 0x12c
    xoris r0, r0, 0x8000
    stw r0, 0xe4(r1)
    lfd f3, 0xe0(r1)
    fsubs f3, f3, f4
    fsubs f0, f0, f3
    stfs f0, 0x8c4(r30)
    b lbl_fn_80263580_000018AC
lbl_fn_80263580_00001598:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80263580_00001838
    lwz r0, 0x44(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80263580_00001840
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x7c(r12)
    mtctr r12
    bctrl
    lwz r29, 0x0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0xc
    mr r3, r30
    li r4, 0x6
    stw r0, 0x58c(r30)
    bl fn_8016E970
    li r0, 0xa
    stw r0, 0x560(r30)
    lfs f0, 0x530(r30)
    addi r3, r1, 0x1c
    lfs f3, 0x530(r29)
    addi r28, r1, 0x10
    lfs f5, 0x52c(r29)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r30)
    lfs f3, 0x528(r29)
    lfs f0, 0x528(r30)
    fsubs f5, f5, f4
    stfs f2, 0x24(r1)
    fsubs f4, f3, f0
    lfs f0, lbl_8088360C
    frsp f3, f2
    stfs f5, 0x20(r1)
    stfs f4, 0x1c(r1)
    fabs f4, f3
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    frsp f4, f4
    stfs f2, 0x18(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_80263580_00001670
    lfs f3, 0x10(r1)
    lfs f0, lbl_80883600
    fcmpo cr0, f3, f0
    ble lbl_fn_80263580_00001664
    lfs f0, lbl_80883610
    b lbl_fn_80263580_00001668
lbl_fn_80263580_00001664:
    lfs f0, lbl_80883614
lbl_fn_80263580_00001668:
    stfs f0, 0x2c(r1)
    b lbl_fn_80263580_00001684
lbl_fn_80263580_00001670:
    fmr f2, f3
    lfs f1, 0x10(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x2c(r1)
lbl_fn_80263580_00001684:
    lfs f0, 0x2c(r1)
    addi r3, r1, 0xb0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883600
    addi r4, r1, 0x34
    lfs f4, 0xb8(r1)
    mr r5, r4
    lfs f5, 0xb4(r1)
    addi r3, r1, 0x70
    lfs f6, 0xb0(r1)
    lfs f7, 0xc8(r1)
    lfs f8, 0xc4(r1)
    lfs f9, 0xc0(r1)
    lfs f10, 0xd8(r1)
    lfs f11, 0xd4(r1)
    lfs f12, 0xd0(r1)
    lfs f13, 0xdc(r1)
    lfs f31, 0xcc(r1)
    lfs f30, 0xbc(r1)
    lfs f0, lbl_808835FC
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x18(r1)
    stfs f3, 0xa0(r1)
    stfs f3, 0xa4(r1)
    stfs f3, 0xa8(r1)
    stfs f0, 0xac(r1)
    stfs f6, 0x64(r1)
    stfs f5, 0x68(r1)
    stfs f4, 0x6c(r1)
    stfs f6, 0x70(r1)
    stfs f5, 0x74(r1)
    stfs f4, 0x78(r1)
    stfs f9, 0x58(r1)
    stfs f8, 0x5c(r1)
    stfs f7, 0x60(r1)
    stfs f9, 0x80(r1)
    stfs f8, 0x84(r1)
    stfs f7, 0x88(r1)
    stfs f12, 0x4c(r1)
    stfs f11, 0x50(r1)
    stfs f10, 0x54(r1)
    stfs f12, 0x90(r1)
    stfs f11, 0x94(r1)
    stfs f10, 0x98(r1)
    stfs f30, 0x40(r1)
    stfs f31, 0x44(r1)
    stfs f13, 0x48(r1)
    stfs f30, 0x7c(r1)
    stfs f31, 0x8c(r1)
    stfs f13, 0x9c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x3c(r1)
    bl fn_805F9750
    lfs f2, 0x3c(r1)
    lfs f0, lbl_8088360C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80263580_000017A0
    lfs f3, 0x38(r1)
    lfs f0, lbl_80883600
    fcmpo cr0, f3, f0
    ble lbl_fn_80263580_00001790
    lfs f0, lbl_80883610
    b lbl_fn_80263580_00001794
lbl_fn_80263580_00001790:
    lfs f0, lbl_80883614
lbl_fn_80263580_00001794:
    fneg f0, f0
    stfs f0, 0x28(r1)
    b lbl_fn_80263580_000017B4
lbl_fn_80263580_000017A0:
    lfs f1, 0x38(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x28(r1)
lbl_fn_80263580_000017B4:
    addi r3, r1, 0x28
    lfs f4, lbl_80883600
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x1
    psq_st f1, 0x0(r28), 0, 0
    fmr f2, f4
    lfs f0, lbl_808835FC
    fmr f1, f4
    lfs f3, 0x14(r1)
    addi r3, r30, 0xb0
    stfs f2, 0x18(r1)
    lfs f2, lbl_808835F8
    li r4, 0x0
    stfs f4, 0x30(r1)
    li r5, 0x1d2
    li r6, 0x0
    li r7, 0x0
    stfs f3, 0x538(r30)
    li r8, 0x1
    stw r0, 0x3fc(r30)
    stfs f0, 0x2fc(r30)
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_80263580_00001840
    lfs f1, lbl_808835FC
    mr r4, r30
    lfs f2, lbl_80883630
    li r5, 0x0
    li r6, 0x0
    bl fn_803EA77C
    b lbl_fn_80263580_00001840
lbl_fn_80263580_00001838:
    li r0, 0x1
    stw r0, 0x8c(r4)
lbl_fn_80263580_00001840:
    li r3, 0x1
    stw r3, 0x64(r31)
    lwz r6, 0x8(r31)
    li r5, 0x0
    lwz r0, 0x94(r31)
    stw r3, 0x90(r31)
    ori r0, r0, 0x8008
    lwz r4, 0x34(r31)
    stw r3, 0x84(r31)
    lwz r3, 0x38(r31)
    lwz r6, 0xc4(r6)
    stw r6, 0x88(r31)
    stw r5, 0x68(r31)
    stw r0, 0x94(r31)
    lwz r0, 0x6d0(r30)
    stw r4, 0x8(r1)
    slwi r0, r0, 3
    add r0, r30, r0
    stw r3, 0xc(r1)
    addic. r5, r0, 0x6d4
    beq lbl_fn_80263580_0000189C
    stw r4, 0x0(r5)
    stw r3, 0x4(r5)
lbl_fn_80263580_0000189C:
    lwz r3, 0x6d0(r30)
    addi r0, r3, 0x1
    stw r0, 0x6d0(r30)
    b lbl_fn_80263580_000018F0
lbl_fn_80263580_000018AC:
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x16cc(r30)
    lwz r3, 0x16dc(r30)
    cmpwi r0, 0x1
    subi r0, r3, 0x14
    stw r0, 0x16dc(r30)
    bne lbl_fn_80263580_000018F0
    lfs f0, lbl_80883634
    stfs f0, 0x8c4(r30)
lbl_fn_80263580_000018F0:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    lwz r28, 0xf0(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_802639C8(void)
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
    lwz r0, 0x68(r4)
    cmpwi r0, 0x0
    beq lbl_fn_802639C8_00001B8C
    lwz r0, 0x16cc(r3)
    cmpwi r0, 0x1
    bne lbl_fn_802639C8_00001B8C
    lfs f4, 0x30(r4)
    li r0, 0xb
    lfs f3, 0x2c(r4)
    lfs f0, 0x28(r4)
    fneg f4, f4
    fneg f3, f3
    li r4, 0x6
    fneg f0, f0
    stfs f4, 0x64(r1)
    stfs f0, 0x5c(r1)
    stfs f3, 0x60(r1)
    stw r0, 0x58c(r3)
    bl fn_8016E970
    lfs f2, 0x64(r1)
    addi r3, r1, 0x5c
    lfs f0, lbl_8088360C
    addi r31, r1, 0x8
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x10(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802639C8_000019E4
    lfs f3, 0x8(r1)
    lfs f0, lbl_80883600
    fcmpo cr0, f3, f0
    ble lbl_fn_802639C8_000019D8
    lfs f0, lbl_80883610
    b lbl_fn_802639C8_000019DC
lbl_fn_802639C8_000019D8:
    lfs f0, lbl_80883614
lbl_fn_802639C8_000019DC:
    stfs f0, 0x18(r1)
    b lbl_fn_802639C8_000019F8
lbl_fn_802639C8_000019E4:
    frsp f2, f2
    lfs f1, 0x8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x18(r1)
lbl_fn_802639C8_000019F8:
    lfs f0, 0x18(r1)
    addi r3, r1, 0xa8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883600
    addi r4, r1, 0x20
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
    lfs f0, lbl_808835FC
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x10(r1)
    stfs f3, 0x98(r1)
    stfs f3, 0x9c(r1)
    stfs f3, 0xa0(r1)
    stfs f0, 0xa4(r1)
    stfs f6, 0x50(r1)
    stfs f5, 0x54(r1)
    stfs f4, 0x58(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f9, 0x44(r1)
    stfs f8, 0x48(r1)
    stfs f7, 0x4c(r1)
    stfs f9, 0x78(r1)
    stfs f8, 0x7c(r1)
    stfs f7, 0x80(r1)
    stfs f12, 0x38(r1)
    stfs f11, 0x3c(r1)
    stfs f10, 0x40(r1)
    stfs f12, 0x88(r1)
    stfs f11, 0x8c(r1)
    stfs f10, 0x90(r1)
    stfs f30, 0x2c(r1)
    stfs f31, 0x30(r1)
    stfs f13, 0x34(r1)
    stfs f30, 0x74(r1)
    stfs f31, 0x84(r1)
    stfs f13, 0x94(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F9750
    lfs f2, 0x28(r1)
    lfs f0, lbl_8088360C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802639C8_00001B14
    lfs f3, 0x24(r1)
    lfs f0, lbl_80883600
    fcmpo cr0, f3, f0
    ble lbl_fn_802639C8_00001B04
    lfs f0, lbl_80883610
    b lbl_fn_802639C8_00001B08
lbl_fn_802639C8_00001B04:
    lfs f0, lbl_80883614
lbl_fn_802639C8_00001B08:
    fneg f0, f0
    stfs f0, 0x14(r1)
    b lbl_fn_802639C8_00001B28
lbl_fn_802639C8_00001B14:
    lfs f1, 0x24(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x14(r1)
lbl_fn_802639C8_00001B28:
    addi r3, r1, 0x14
    lfs f4, lbl_80883600
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x1
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f4
    lfs f0, lbl_808835FC
    fmr f1, f4
    lfs f3, 0xc(r1)
    addi r3, r30, 0xb0
    stfs f2, 0x10(r1)
    lfs f2, lbl_808835F8
    li r4, 0x0
    stfs f4, 0x1c(r1)
    li r5, 0x35
    li r6, 0x0
    li r7, 0x0
    stfs f3, 0x538(r30)
    li r8, 0x1
    stw r0, 0x3fc(r30)
    stfs f0, 0x2fc(r30)
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    mr r3, r30
    bl fn_8016DA4C
lbl_fn_802639C8_00001B8C:
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802639C8_00001C20
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r30
    bl fn_80178A6C
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r30
    bl fn_8016DA4C
    lfs f0, lbl_808835FC
    li r3, 0x2
    li r0, 0x1
    stw r3, 0x58c(r30)
    lfs f1, lbl_80883600
    addi r3, r30, 0xb0
    stw r0, 0x3fc(r30)
    li r4, 0x0
    lfs f2, lbl_808835F8
    li r5, 0x2e
    stfs f0, 0x2fc(r30)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    mr r3, r30
    bl fn_800EB7A0
lbl_fn_802639C8_00001C20:
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
