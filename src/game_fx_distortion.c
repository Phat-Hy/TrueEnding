#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _savegpr_20(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_800DD3FC(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_80109828(void);
extern void fn_8016E970(void);
extern void fn_80232B7C(void);
extern void fn_8023A8B4(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_807452F0[];
extern u8 lbl_807452F8[];
extern u8 lbl_80745314[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F8A0;
extern u32 lbl_808813D0;
extern u32 lbl_80883A98;
extern u32 lbl_80883AA0;
extern u32 lbl_80883AA8;
extern u32 lbl_80883AAC;
extern u32 lbl_80883AB0;
extern u32 lbl_80883AB4;
extern u32 lbl_80883AB8;
extern u32 lbl_80883AC0;
extern u32 lbl_80883AC4;
extern u32 lbl_80883AC8;
extern u32 lbl_80883ACC;
extern u32 lbl_80883AD8;
extern u32 lbl_80883B04;
extern u32 lbl_80883B08;
extern u32 lbl_80883B1C;
extern u32 lbl_80883B48;
extern u32 lbl_80883B54;
extern u32 lbl_80883B74;
extern u32 lbl_80883B84;
extern u32 lbl_80883B88;
extern u32 lbl_80883B8C;
extern u32 lbl_80883BCC;
extern u32 lbl_80883BD0;

/* Function declarations */
void fn_8028FB30(void);
void fn_8028FC28(void);
void fn_8028FDB0(void);
void fn_80290088(void);
void fn_8029055C(void);
void fn_80290674(void);
void fn_80290AB4(void);
void fn_8029101C(void);
void fn_80291390(void);
void fn_802913B0(void);
void fn_80291440(void);

asm void fn_8028FB30(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    stw r31, 0x20c(r1)
    stw r30, 0x208(r1)
    mr r30, r3
    lwz r0, 0x1630(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8028FB30_000000E0
    li r31, 0x0
    li r0, 0xc
    stw r0, 0x58c(r3)
    stw r31, 0x14b4(r3)
    stw r31, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883A98
    li r4, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    stfs f0, 0x1510(r30)
    stw r31, 0x15d4(r30)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883AA8
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883A98
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x13f
    lfs f2, lbl_80883AA0
    li r6, 0x0
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0x334(r4)
    cmpwi r4, 0x0
    beq lbl_fn_8028FB30_000000C0
    b lbl_fn_8028FB30_000000C4
lbl_fn_8028FB30_000000C0:
    la r4, lbl_808813D0
lbl_fn_8028FB30_000000C4:
    lwz r5, 0x60(r30)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x8
    bl fn_80109828
lbl_fn_8028FB30_000000E0:
    lwz r0, 0x214(r1)
    lwz r31, 0x20c(r1)
    lwz r30, 0x208(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_8028FC28(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0xd
    stw r31, 0x3c(r1)
    li r31, 0x0
    stw r30, 0x38(r1)
    mr r30, r3
    stw r0, 0x58c(r3)
    stw r31, 0x14b4(r3)
    stw r31, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883A98
    li r4, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    stfs f0, 0x1510(r30)
    stw r31, 0x15d4(r30)
    stw r31, 0x153c(r30)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883AA8
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883A98
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x15e
    lfs f2, lbl_80883AA0
    li r6, 0x0
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    addi r5, r30, 0x1978
    lfs f2, 0x1980(r30)
    addi r4, r1, 0x2c
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    addi r3, r1, 0x20
    lfs f5, lbl_80883AAC
    addi r7, r1, 0x14
    lfs f0, 0x52c(r30)
    addi r6, r30, 0x151c
    lfs f4, 0x530(r30)
    mr r4, r3
    fsubs f6, f5, f0
    lfs f3, 0x2c(r1)
    lfs f0, 0x528(r30)
    fsubs f4, f2, f4
    stfs f6, 0x18(r1)
    fsubs f3, f3, f0
    stfs f2, 0x34(r1)
    fmr f2, f4
    lfs f0, lbl_80883A98
    stfs f3, 0x14(r1)
    frsp f6, f2
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x1524(r30)
    lfs f3, 0x151c(r30)
    stfs f5, 0x30(r1)
    stfs f4, 0x1c(r1)
    stfs f3, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f6, 0x28(r1)
    bl fn_805F98D0
    lfs f5, 0x28(r1)
    lfs f4, lbl_80883B74
    lfs f3, 0x24(r1)
    lfs f0, 0x20(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0x1520(r30)
    fmuls f7, f0, f4
    lfs f4, 0x151c(r30)
    lfs f0, 0x1524(r30)
    fsubs f3, f3, f6
    fsubs f4, f4, f7
    stfs f7, 0x8(r1)
    fsubs f0, f0, f5
    stfs f4, 0x151c(r30)
    stfs f3, 0x1520(r30)
    stfs f0, 0x1524(r30)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    stfs f6, 0xc(r1)
    stfs f5, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8028FDB0(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    li r0, 0xf
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    li r31, 0x0
    stw r30, 0xe8(r1)
    mr r30, r3
    stw r0, 0x58c(r3)
    stw r31, 0x14b4(r3)
    stw r31, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883A98
    li r4, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    stfs f0, 0x1510(r30)
    stw r31, 0x15d4(r30)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883AA8
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883A98
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x15f
    lfs f2, lbl_80883AA0
    li r6, 0x0
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r6, 0x14b0(r30)
    addi r3, r1, 0x5c
    addi r5, r1, 0x68
    lfs f0, 0x530(r30)
    psq_l f1, 0x528(r6), 0, 0
    mr r4, r3
    psq_st f1, 0x0(r5), 0, 0
    lfs f2, 0x530(r6)
    lfs f4, 0x68(r1)
    lfs f3, 0x528(r30)
    fsubs f5, f2, f0
    lfs f0, lbl_80883A98
    fsubs f3, f4, f3
    stfs f2, 0x70(r1)
    stfs f3, 0x5c(r1)
    stfs f5, 0x64(r1)
    stfs f0, 0x60(r1)
    bl fn_805F98D0
    lfs f0, 0x538(r30)
    addi r3, r1, 0x5c
    stfs f0, 0x1534(r30)
    addi r31, r1, 0x50
    lfs f0, lbl_80883AB0
    lfs f2, 0x64(r1)
    psq_l f1, 0x0(r3), 0, 0
    fabs f3, f2
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8028FDB0_000003CC
    lfs f3, 0x50(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_8028FDB0_000003C0
    lfs f0, lbl_80883AB4
    b lbl_fn_8028FDB0_000003C4
lbl_fn_8028FDB0_000003C0:
    lfs f0, lbl_80883AB8
lbl_fn_8028FDB0_000003C4:
    stfs f0, 0x48(r1)
    b lbl_fn_8028FDB0_000003E0
lbl_fn_8028FDB0_000003CC:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8028FDB0_000003E0:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883A98
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
    lfs f0, lbl_80883AA8
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
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
    lfs f0, lbl_80883AB0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8028FDB0_000004FC
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_8028FDB0_000004EC
    lfs f0, lbl_80883AB4
    b lbl_fn_8028FDB0_000004F0
lbl_fn_8028FDB0_000004EC:
    lfs f0, lbl_80883AB8
lbl_fn_8028FDB0_000004F0:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8028FDB0_00000510
lbl_fn_8028FDB0_000004FC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8028FDB0_00000510:
    addi r3, r1, 0x44
    lfs f2, lbl_80883A98
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, 0x54(r1)
    stfs f0, 0x1538(r30)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r0, 0x114(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80290088(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    stw r0, 0x1d4(r1)
    li r0, 0x10
    stfd f31, 0x1c0(r1)
    psq_st f31, 0x1c8(r1), 0, 0
    stfd f30, 0x1b0(r1)
    psq_st f30, 0x1b8(r1), 0, 0
    stw r31, 0x1ac(r1)
    li r31, 0x0
    stw r30, 0x1a8(r1)
    mr r30, r3
    stw r0, 0x58c(r3)
    stw r31, 0x14b4(r3)
    stw r31, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f4, lbl_80883A98
    addi r5, r1, 0xbc
    stw r3, 0x590(r30)
    addi r3, r1, 0xb0
    lwz r6, 0x14b0(r30)
    mr r4, r3
    stfs f4, 0x1510(r30)
    lfs f3, 0x530(r30)
    stw r31, 0x15d4(r30)
    lfs f0, 0x528(r30)
    lfs f2, 0x530(r6)
    psq_l f1, 0x528(r6), 0, 0
    fsubs f5, f2, f3
    psq_st f1, 0x0(r5), 0, 0
    lfs f3, 0xbc(r1)
    stfs f2, 0xc4(r1)
    fsubs f0, f3, f0
    stfs f5, 0xb8(r1)
    stfs f0, 0xb0(r1)
    stfs f4, 0xb4(r1)
    bl fn_805F98D0
    lfs f2, 0xb8(r1)
    addi r3, r1, 0xb0
    lfs f0, lbl_80883AB0
    addi r31, r1, 0xa4
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0xac(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80290088_00000640
    lfs f3, 0xa4(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_80290088_00000634
    lfs f0, lbl_80883AB4
    b lbl_fn_80290088_00000638
lbl_fn_80290088_00000634:
    lfs f0, lbl_80883AB8
lbl_fn_80290088_00000638:
    stfs f0, 0x90(r1)
    b lbl_fn_80290088_00000654
lbl_fn_80290088_00000640:
    frsp f2, f2
    lfs f1, 0xa4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_80290088_00000654:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x138
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883A98
    addi r4, r1, 0x80
    lfs f30, 0x140(r1)
    mr r5, r4
    lfs f31, 0x13c(r1)
    addi r3, r1, 0x168
    lfs f13, 0x138(r1)
    lfs f12, 0x150(r1)
    lfs f11, 0x14c(r1)
    lfs f10, 0x148(r1)
    lfs f9, 0x160(r1)
    lfs f8, 0x15c(r1)
    lfs f7, 0x158(r1)
    lfs f6, 0x164(r1)
    lfs f5, 0x154(r1)
    lfs f4, 0x144(r1)
    lfs f0, lbl_80883AA8
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xac(r1)
    stfs f3, 0x198(r1)
    stfs f3, 0x19c(r1)
    stfs f3, 0x1a0(r1)
    stfs f0, 0x1a4(r1)
    stfs f13, 0x50(r1)
    stfs f31, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f13, 0x168(r1)
    stfs f31, 0x16c(r1)
    stfs f30, 0x170(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x178(r1)
    stfs f11, 0x17c(r1)
    stfs f12, 0x180(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x188(r1)
    stfs f8, 0x18c(r1)
    stfs f9, 0x190(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x174(r1)
    stfs f5, 0x184(r1)
    stfs f6, 0x194(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80883AB0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80290088_00000770
    lfs f3, 0x84(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_80290088_00000760
    lfs f0, lbl_80883AB4
    b lbl_fn_80290088_00000764
lbl_fn_80290088_00000760:
    lfs f0, lbl_80883AB8
lbl_fn_80290088_00000764:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_80290088_00000784
lbl_fn_80290088_00000770:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_80290088_00000784:
    addi r3, r1, 0x8c
    lfs f4, lbl_80883A98
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_807452F0@ha
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f4
    lfs f0, 0x538(r30)
    lfs f3, 0xa8(r1)
    stfs f2, 0xac(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_807452F0@l(r3)
    stfs f4, 0x94(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80883AC4
    fcmpo cr0, f3, f0
    ble lbl_fn_80290088_000007D0
    lfs f0, lbl_80883AC8
    fsubs f3, f3, f0
lbl_fn_80290088_000007D0:
    lfs f0, lbl_80883ACC
    fcmpo cr0, f3, f0
    bge lbl_fn_80290088_000007E4
    lfs f0, lbl_80883AC8
    fadds f3, f3, f0
lbl_fn_80290088_000007E4:
    lfs f1, lbl_80883A98
    li r0, 0x1
    lfs f0, lbl_80883AA8
    fcmpo cr0, f3, f1
    stw r0, 0x3fc(r30)
    stfs f0, 0x2fc(r30)
    stfs f0, 0x2e8(r30)
    bge lbl_fn_80290088_00000828
    lfs f2, lbl_80883AA0
    addi r3, r30, 0xb0
    li r4, 0x0
    li r5, 0x158
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80290088_00000848
lbl_fn_80290088_00000828:
    lfs f2, lbl_80883AA0
    addi r3, r30, 0xb0
    li r4, 0x0
    li r5, 0x159
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
lbl_fn_80290088_00000848:
    lfs f0, 0x538(r30)
    addi r3, r1, 0xb0
    stfs f0, 0x1534(r30)
    addi r31, r1, 0x98
    lfs f0, lbl_80883AB0
    lfs f2, 0xb8(r1)
    psq_l f1, 0x0(r3), 0, 0
    fabs f3, f2
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0xa0(r1)
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80290088_000008A0
    lfs f3, 0x98(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_80290088_00000894
    lfs f0, lbl_80883AB4
    b lbl_fn_80290088_00000898
lbl_fn_80290088_00000894:
    lfs f0, lbl_80883AB8
lbl_fn_80290088_00000898:
    stfs f0, 0x48(r1)
    b lbl_fn_80290088_000008B4
lbl_fn_80290088_000008A0:
    frsp f2, f2
    lfs f1, 0x98(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80290088_000008B4:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xc8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883A98
    addi r4, r1, 0x38
    lfs f31, 0xd0(r1)
    mr r5, r4
    lfs f30, 0xcc(r1)
    addi r3, r1, 0xf8
    lfs f13, 0xc8(r1)
    lfs f12, 0xe0(r1)
    lfs f11, 0xdc(r1)
    lfs f10, 0xd8(r1)
    lfs f9, 0xf0(r1)
    lfs f8, 0xec(r1)
    lfs f7, 0xe8(r1)
    lfs f6, 0xf4(r1)
    lfs f5, 0xe4(r1)
    lfs f4, 0xd4(r1)
    lfs f0, lbl_80883AA8
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xa0(r1)
    stfs f3, 0x128(r1)
    stfs f3, 0x12c(r1)
    stfs f3, 0x130(r1)
    stfs f0, 0x134(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0xf8(r1)
    stfs f30, 0xfc(r1)
    stfs f31, 0x100(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x108(r1)
    stfs f11, 0x10c(r1)
    stfs f12, 0x110(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x118(r1)
    stfs f8, 0x11c(r1)
    stfs f9, 0x120(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x104(r1)
    stfs f5, 0x114(r1)
    stfs f6, 0x124(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883AB0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80290088_000009D0
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_80290088_000009C0
    lfs f0, lbl_80883AB4
    b lbl_fn_80290088_000009C4
lbl_fn_80290088_000009C0:
    lfs f0, lbl_80883AB8
lbl_fn_80290088_000009C4:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80290088_000009E4
lbl_fn_80290088_000009D0:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80290088_000009E4:
    addi r3, r1, 0x44
    lfs f2, lbl_80883A98
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, 0x9c(r1)
    stfs f0, 0x1538(r30)
    psq_l f31, 0x1c8(r1), 0, 0
    lfd f31, 0x1c0(r1)
    psq_l f30, 0x1b8(r1), 0, 0
    lfd f30, 0x1b0(r1)
    lwz r31, 0x1ac(r1)
    lwz r30, 0x1a8(r1)
    lwz r0, 0x1d4(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0xa0(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}

asm void fn_8029055C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x15
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    li r30, 0x0
    stw r29, 0x24(r1)
    mr r29, r3
    stw r0, 0x58c(r3)
    stw r30, 0x14b4(r3)
    stw r30, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883A98
    li r4, 0x6
    stw r3, 0x590(r29)
    mr r3, r29
    stfs f0, 0x1510(r29)
    stw r30, 0x15d4(r29)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f3, lbl_80883AA8
    li r31, 0x1
    lfs f0, lbl_80883B1C
    li r4, 0x0
    stw r3, 0x590(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_80883A98
    li r5, 0x13f
    stw r30, 0x14b8(r29)
    li r6, 0x0
    lfs f2, lbl_80883AA0
    li r7, 0x0
    stw r30, 0x14b4(r29)
    li r8, 0x1
    stw r31, 0x3fc(r29)
    stfs f3, 0x2fc(r29)
    stfs f0, 0x2e8(r29)
    bl fn_80097C08
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f1, lbl_80883AA8
    li r0, -0x1
    stfs f1, 0x10(r1)
    addi r4, r29, 0x1574
    addi r7, r29, 0x528
    addi r8, r29, 0x534
    stfs f1, 0x14(r1)
    addi r9, r1, 0x10
    li r5, 0x0
    li r6, 0x0
    stfs f1, 0x18(r1)
    li r10, -0x1
    stfs f1, 0x1c(r1)
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80290674(void)
{
    nofralloc
    stwu r1, -0x2c0(r1)
    mflr r0
    lfs f8, lbl_80883A98
    stw r0, 0x2c4(r1)
    lfs f0, lbl_80883AA8
    stfd f31, 0x2b0(r1)
    lfs f7, lbl_80883B08
    psq_st f31, 0x2b8(r1), 0, 0
    stfd f30, 0x2a0(r1)
    psq_st f30, 0x2a8(r1), 0, 0
    stfd f29, 0x290(r1)
    psq_st f29, 0x298(r1), 0, 0
    stfd f28, 0x280(r1)
    psq_st f28, 0x288(r1), 0, 0
    stfd f27, 0x270(r1)
    psq_st f27, 0x278(r1), 0, 0
    stfd f26, 0x260(r1)
    psq_st f26, 0x268(r1), 0, 0
    stw r31, 0x25c(r1)
    addi r31, r1, 0x228
    stw r30, 0x258(r1)
    mr r30, r3
    stfs f8, 0x80(r1)
    stfs f8, 0x84(r1)
    stfs f7, 0x88(r1)
    stfs f8, 0x254(r1)
    stfs f8, 0x24c(r1)
    stfs f8, 0x248(r1)
    stfs f8, 0x244(r1)
    stfs f8, 0x240(r1)
    stfs f8, 0x238(r1)
    stfs f8, 0x234(r1)
    stfs f8, 0x230(r1)
    stfs f8, 0x22c(r1)
    stfs f0, 0x250(r1)
    stfs f0, 0x23c(r1)
    stfs f0, 0x228(r1)
    lfs f1, 0x53c(r3)
    fcmpu cr0, f8, f1
    beq lbl_fn_80290674_00000C34
    addi r3, r1, 0x138
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
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
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80290674_00000C34:
    lfs f0, lbl_80883A98
    lfs f1, 0x538(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_80290674_00000C94
    addi r3, r1, 0x198
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
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
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80290674_00000C94:
    lfs f0, lbl_80883A98
    lfs f1, 0x534(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_80290674_00000CF4
    addi r3, r1, 0x1f8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x1f8
    addi r5, r1, 0x1c8
    bl fn_805F89F0
    addi r3, r1, 0x1c8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80290674_00000CF4:
    addi r4, r1, 0x80
    addi r3, r1, 0x228
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x530(r30)
    addi r4, r1, 0x68
    lfs f0, 0x88(r1)
    addi r3, r1, 0x8c
    lfs f8, 0x52c(r30)
    addi r5, r1, 0x50
    fadds f11, f7, f0
    lfs f0, 0x84(r1)
    lwz r6, 0x14b0(r30)
    addi r31, r1, 0x5c
    fadds f10, f8, f0
    lfs f9, 0x528(r30)
    fmr f2, f11
    lfs f8, 0x80(r1)
    stfs f10, 0x6c(r1)
    fadds f8, f9, f8
    lfs f7, 0x530(r6)
    frsp f0, f2
    stfs f8, 0x68(r1)
    lfs f10, 0x52c(r6)
    stfs f2, 0x94(r1)
    fsubs f2, f7, f0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    frsp f12, f2
    lfs f8, 0x528(r6)
    lfs f9, 0x90(r1)
    lfs f7, 0x8c(r1)
    fsubs f9, f10, f9
    lfs f0, lbl_80883AB0
    fsubs f7, f8, f7
    stfs f11, 0x70(r1)
    fabs f10, f12
    stfs f9, 0x54(r1)
    frsp f8, f10
    stfs f7, 0x50(r1)
    psq_l f1, 0x0(r5), 0, 0
    fcmpo cr0, f8, f0
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x64(r1)
    bge lbl_fn_80290674_00000DD0
    lfs f7, 0x5c(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f7, f0
    ble lbl_fn_80290674_00000DC4
    lfs f0, lbl_80883AB4
    b lbl_fn_80290674_00000DC8
lbl_fn_80290674_00000DC4:
    lfs f0, lbl_80883AB8
lbl_fn_80290674_00000DC8:
    stfs f0, 0x48(r1)
    b lbl_fn_80290674_00000DE4
lbl_fn_80290674_00000DD0:
    fmr f2, f12
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80290674_00000DE4:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x98
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80883A98
    addi r4, r1, 0x38
    lfs f26, 0xa0(r1)
    mr r5, r4
    lfs f27, 0x9c(r1)
    addi r3, r1, 0xc8
    lfs f28, 0x98(r1)
    lfs f29, 0xb0(r1)
    lfs f30, 0xac(r1)
    lfs f31, 0xa8(r1)
    lfs f13, 0xc0(r1)
    lfs f12, 0xbc(r1)
    lfs f11, 0xb8(r1)
    lfs f10, 0xc4(r1)
    lfs f9, 0xb4(r1)
    lfs f8, 0xa4(r1)
    lfs f0, lbl_80883AA8
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x64(r1)
    stfs f7, 0xf8(r1)
    stfs f7, 0xfc(r1)
    stfs f7, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f28, 0x8(r1)
    stfs f27, 0xc(r1)
    stfs f26, 0x10(r1)
    stfs f28, 0xc8(r1)
    stfs f27, 0xcc(r1)
    stfs f26, 0xd0(r1)
    stfs f31, 0x14(r1)
    stfs f30, 0x18(r1)
    stfs f29, 0x1c(r1)
    stfs f31, 0xd8(r1)
    stfs f30, 0xdc(r1)
    stfs f29, 0xe0(r1)
    stfs f11, 0x20(r1)
    stfs f12, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f11, 0xe8(r1)
    stfs f12, 0xec(r1)
    stfs f13, 0xf0(r1)
    stfs f8, 0x2c(r1)
    stfs f9, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f8, 0xd4(r1)
    stfs f9, 0xe4(r1)
    stfs f10, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883AB0
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80290674_00000F00
    lfs f7, 0x3c(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f7, f0
    ble lbl_fn_80290674_00000EF0
    lfs f0, lbl_80883AB4
    b lbl_fn_80290674_00000EF4
lbl_fn_80290674_00000EF0:
    lfs f0, lbl_80883AB8
lbl_fn_80290674_00000EF4:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80290674_00000F14
lbl_fn_80290674_00000F00:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80290674_00000F14:
    lfs f2, lbl_80883A98
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x74
    psq_l f31, 0x2b8(r1), 0, 0
    lfd f31, 0x2b0(r1)
    psq_l f30, 0x2a8(r1), 0, 0
    lfd f30, 0x2a0(r1)
    psq_l f29, 0x298(r1), 0, 0
    lfd f29, 0x290(r1)
    psq_l f28, 0x288(r1), 0, 0
    lfd f28, 0x280(r1)
    psq_l f27, 0x278(r1), 0, 0
    lfd f27, 0x270(r1)
    psq_l f26, 0x268(r1), 0, 0
    stfs f2, 0x4c(r1)
    lfd f26, 0x260(r1)
    stfs f2, 0x64(r1)
    frsp f2, f2
    psq_st f1, 0x0(r31), 0, 0
    lwz r31, 0x25c(r1)
    lwz r30, 0x258(r1)
    lwz r0, 0x2c4(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x7c(r1)
    mtlr r0
    addi r1, r1, 0x2c0
    blr
}

asm void fn_80290AB4(void)
{
    nofralloc
    stwu r1, -0x320(r1)
    mflr r0
    stw r0, 0x324(r1)
    addi r11, r1, 0x250
    stfd f31, 0x310(r1)
    psq_st f31, 0x318(r1), 0, 0
    stfd f30, 0x300(r1)
    psq_st f30, 0x308(r1), 0, 0
    stfd f29, 0x2f0(r1)
    psq_st f29, 0x2f8(r1), 0, 0
    stfd f28, 0x2e0(r1)
    psq_st f28, 0x2e8(r1), 0, 0
    stfd f27, 0x2d0(r1)
    psq_st f27, 0x2d8(r1), 0, 0
    stfd f26, 0x2c0(r1)
    psq_st f26, 0x2c8(r1), 0, 0
    stfd f25, 0x2b0(r1)
    psq_st f25, 0x2b8(r1), 0, 0
    stfd f24, 0x2a0(r1)
    psq_st f24, 0x2a8(r1), 0, 0
    stfd f23, 0x290(r1)
    psq_st f23, 0x298(r1), 0, 0
    stfd f22, 0x280(r1)
    psq_st f22, 0x288(r1), 0, 0
    stfd f21, 0x270(r1)
    psq_st f21, 0x278(r1), 0, 0
    stfd f20, 0x260(r1)
    psq_st f20, 0x268(r1), 0, 0
    stfd f19, 0x250(r1)
    psq_st f19, 0x258(r1), 0, 0
    bl _savegpr_20
    lwz r0, 0x14cc(r3)
    lis r4, 0x4330
    stw r4, 0x208(r1)
    mr r20, r3
    cmpwi r0, 0x0
    stw r4, 0x210(r1)
    beq lbl_fn_80290AB4_0000146C
    lwz r6, lbl_8087F8A0
    lis r4, lbl_807452F8@ha
    lis r5, lbl_80745314@ha
    lfs f20, lbl_80883A98
    lwz r21, 0x48(r6)
    addi r23, r3, 0xb0
    lfs f21, lbl_80883B54
    addi r29, r5, lbl_80745314@l
    lfd f22, lbl_807452F8@l(r4)
    addi r28, r1, 0x1b0
    lfs f23, lbl_80883BCC
    addi r24, r1, 0x30
    lfs f24, lbl_80883B08
    addi r27, r1, 0x150
    lfs f25, lbl_80883AD8
    addi r25, r1, 0x90
    lfs f26, lbl_80883B48
    addi r26, r1, 0xf0
    lfs f27, lbl_80883AA8
    li r22, 0x0
    lfs f28, lbl_80883AC0
    li r30, 0x0
    lfs f29, lbl_80883B84
    li r31, -0x1
    lfs f30, lbl_80883B88
    lfs f31, lbl_80883B04
    lfs f19, lbl_80883B8C
    b lbl_fn_80290AB4_00001464
lbl_fn_80290AB4_0000108C:
    mr r3, r23
    addi r4, r29, 0x339
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80290AB4_000010AC
    li r5, 0x0
    b lbl_fn_80290AB4_000010B8
lbl_fn_80290AB4_000010AC:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r23)
    add r5, r3, r0
lbl_fn_80290AB4_000010B8:
    lfs f0, 0x2c(r5)
    mr r3, r23
    lfs f7, 0x1c(r5)
    addi r4, r29, 0x339
    lfs f8, 0xc(r5)
    li r5, 0x0
    stfs f8, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f20, 0x14(r1)
    stfs f20, 0x18(r1)
    stfs f21, 0x1c(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80290AB4_000010FC
    li r6, 0x0
    b lbl_fn_80290AB4_00001108
lbl_fn_80290AB4_000010FC:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r23)
    add r6, r3, r0
lbl_fn_80290AB4_00001108:
    psq_l f1, 0x0(r6), 0, 0
    addi r4, r1, 0x14
    psq_l f2, 0x8(r6), 0, 0
    mr r3, r28
    psq_l f3, 0x10(r6), 0, 0
    mr r5, r4
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f6, 0x28(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    stfs f20, 0x1bc(r1)
    stfs f20, 0x1cc(r1)
    stfs f20, 0x1dc(r1)
    bl fn_805F93C0
    lfs f7, 0x20(r1)
    xoris r0, r22, 0x8000
    lfs f0, 0x14(r1)
    addi r3, r1, 0x180
    lfs f9, 0x24(r1)
    li r4, 0x7a
    fadds f10, f7, f0
    lfs f8, 0x18(r1)
    lfs f7, 0x28(r1)
    lfs f0, 0x1c(r1)
    fadds f8, f9, f8
    stfs f10, 0x20(r1)
    fadds f0, f7, f0
    lwz r5, lbl_8087F8A0
    stfs f8, 0x24(r1)
    stfs f0, 0x28(r1)
    lwz r5, 0x4c(r5)
    stw r0, 0x20c(r1)
    xoris r0, r5, 0x8000
    stw r0, 0x214(r1)
    lfd f0, 0x208(r1)
    lfd f7, 0x210(r1)
    fsubs f0, f0, f22
    stfs f24, 0x8(r1)
    fsubs f7, f7, f22
    stfs f20, 0xc(r1)
    fdivs f7, f23, f7
    stfs f25, 0x10(r1)
    fmuls f0, f7, f0
    fmuls f1, f26, f0
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x180
    mr r5, r4
    bl fn_805F93C0
    stfs f20, 0x17c(r1)
    stfs f20, 0x174(r1)
    stfs f20, 0x170(r1)
    stfs f20, 0x16c(r1)
    stfs f20, 0x168(r1)
    stfs f20, 0x160(r1)
    stfs f20, 0x15c(r1)
    stfs f20, 0x158(r1)
    stfs f20, 0x154(r1)
    stfs f27, 0x178(r1)
    stfs f27, 0x164(r1)
    stfs f27, 0x150(r1)
    lfs f1, 0x53c(r20)
    fcmpu cr0, f20, f1
    beq lbl_fn_80290AB4_00001268
    addi r3, r1, 0x60
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x60
    addi r5, r1, 0x30
    bl fn_805F89F0
    psq_l f1, 0x0(r24), 0, 0
    psq_l f2, 0x8(r24), 0, 0
    psq_l f3, 0x10(r24), 0, 0
    psq_l f4, 0x18(r24), 0, 0
    psq_l f5, 0x20(r24), 0, 0
    psq_l f6, 0x28(r24), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80290AB4_00001268:
    lfs f1, 0x538(r20)
    fcmpu cr0, f20, f1
    beq lbl_fn_80290AB4_000012C0
    addi r3, r1, 0xc0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0xc0
    addi r5, r1, 0x90
    bl fn_805F89F0
    psq_l f1, 0x0(r25), 0, 0
    psq_l f2, 0x8(r25), 0, 0
    psq_l f3, 0x10(r25), 0, 0
    psq_l f4, 0x18(r25), 0, 0
    psq_l f5, 0x20(r25), 0, 0
    psq_l f6, 0x28(r25), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80290AB4_000012C0:
    lfs f1, 0x534(r20)
    fcmpu cr0, f20, f1
    beq lbl_fn_80290AB4_00001318
    addi r3, r1, 0x120
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x120
    addi r5, r1, 0xf0
    bl fn_805F89F0
    psq_l f1, 0x0(r26), 0, 0
    psq_l f2, 0x8(r26), 0, 0
    psq_l f3, 0x10(r26), 0, 0
    psq_l f4, 0x18(r26), 0, 0
    psq_l f5, 0x20(r26), 0, 0
    psq_l f6, 0x28(r26), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80290AB4_00001318:
    addi r4, r1, 0x8
    addi r3, r1, 0x150
    mr r5, r4
    bl fn_805F93C0
    stw r30, 0x1e0(r1)
    lwz r3, lbl_8087F8A0
    stfs f20, 0x1e4(r1)
    stfs f28, 0x1e8(r1)
    stfs f24, 0x1ec(r1)
    stfs f29, 0x1f0(r1)
    stfs f30, 0x1f4(r1)
    stfs f31, 0x1f8(r1)
    stw r30, 0x1fc(r1)
    stw r31, 0x200(r1)
    lwz r6, 0x48(r3)
    lwz r0, 0x12a4(r6)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_80290AB4_00001370
    cmplw r21, r6
    bne lbl_fn_80290AB4_00001460
    stw r6, 0x1e0(r1)
    b lbl_fn_80290AB4_000013FC
lbl_fn_80290AB4_00001370:
    lwz r7, 0x38(r21)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80290AB4_0000139C
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_80290AB4_0000139C
    li r5, 0x1
lbl_fn_80290AB4_0000139C:
    cmpwi r5, 0x0
    beq lbl_fn_80290AB4_000013B8
    lwz r0, 0x7e0(r21)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80290AB4_000013B8
    li r3, 0x1
lbl_fn_80290AB4_000013B8:
    cmpwi r3, 0x0
    beq lbl_fn_80290AB4_000013EC
    lwz r0, 0x55c(r21)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80290AB4_000013E0
    lwz r0, 0x560(r21)
    cmpwi r0, 0x1c
    bne lbl_fn_80290AB4_000013E0
    li r3, 0x1
lbl_fn_80290AB4_000013E0:
    cmpwi r3, 0x0
    bne lbl_fn_80290AB4_000013EC
    li r4, 0x1
lbl_fn_80290AB4_000013EC:
    cmpwi r4, 0x0
    beq lbl_fn_80290AB4_000013F8
    mr r6, r21
lbl_fn_80290AB4_000013F8:
    stw r6, 0x1e0(r1)
lbl_fn_80290AB4_000013FC:
    stfs f24, 0x1f8(r1)
    mr r4, r20
    lwz r3, lbl_8087F048
    addi r6, r1, 0x20
    stfs f19, 0x1e4(r1)
    addi r7, r1, 0x8
    lfs f1, lbl_80883A98
    addi r8, r1, 0x1e0
    lfs f0, 0x199c(r20)
    li r9, 0x504
    stfs f0, 0x1ec(r1)
    li r10, 0x0
    lfs f2, lbl_80883AA8
    lwz r5, 0x14cc(r20)
    lwz r0, 0x5c(r5)
    xoris r0, r0, 0x8000
    stw r0, 0x214(r1)
    lfd f0, 0x210(r1)
    fsubs f0, f0, f22
    stfs f0, 0x1f4(r1)
    lfs f0, 0x19a0(r20)
    fmuls f0, f26, f0
    stfs f0, 0x1f0(r1)
    bl fn_800F8574
    addi r22, r22, 0x1
lbl_fn_80290AB4_00001460:
    lwz r21, 0x14ac(r21)
lbl_fn_80290AB4_00001464:
    cmpwi r21, 0x0
    bne lbl_fn_80290AB4_0000108C
lbl_fn_80290AB4_0000146C:
    addi r11, r1, 0x250
    psq_l f31, 0x318(r1), 0, 0
    lfd f31, 0x310(r1)
    psq_l f30, 0x308(r1), 0, 0
    lfd f30, 0x300(r1)
    psq_l f29, 0x2f8(r1), 0, 0
    lfd f29, 0x2f0(r1)
    psq_l f28, 0x2e8(r1), 0, 0
    lfd f28, 0x2e0(r1)
    psq_l f27, 0x2d8(r1), 0, 0
    lfd f27, 0x2d0(r1)
    psq_l f26, 0x2c8(r1), 0, 0
    lfd f26, 0x2c0(r1)
    psq_l f25, 0x2b8(r1), 0, 0
    lfd f25, 0x2b0(r1)
    psq_l f24, 0x2a8(r1), 0, 0
    lfd f24, 0x2a0(r1)
    psq_l f23, 0x298(r1), 0, 0
    lfd f23, 0x290(r1)
    psq_l f22, 0x288(r1), 0, 0
    lfd f22, 0x280(r1)
    psq_l f21, 0x278(r1), 0, 0
    lfd f21, 0x270(r1)
    psq_l f20, 0x268(r1), 0, 0
    lfd f20, 0x260(r1)
    psq_l f19, 0x258(r1), 0, 0
    lfd f19, 0x250(r1)
    bl _restgpr_20
    lwz r0, 0x324(r1)
    mtlr r0
    addi r1, r1, 0x320
    blr
}

asm void fn_8029101C(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    stfd f31, 0x210(r1)
    psq_st f31, 0x218(r1), 0, 0
    fmr f31, f1
    stw r31, 0x20c(r1)
    mr r31, r4
    stw r30, 0x208(r1)
    mr r30, r3
    stw r29, 0x204(r1)
    lwz r0, 0x14e4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8029101C_0000183C
    lis r4, lbl_80745314@ha
    addi r29, r3, 0xb0
    addi r4, r4, lbl_80745314@l
    li r5, 0x0
    mr r3, r29
    addi r4, r4, 0x33f
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029101C_00001550
    li r5, 0x0
    b lbl_fn_8029101C_0000155C
lbl_fn_8029101C_00001550:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r29)
    add r5, r3, r0
lbl_fn_8029101C_0000155C:
    addi r6, r1, 0x1c8
    psq_l f2, 0x8(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    lis r4, lbl_80745314@ha
    psq_l f6, 0x28(r5), 0, 0
    addi r4, r4, lbl_80745314@l
    psq_l f1, 0x0(r5), 0, 0
    addi r29, r30, 0xb0
    psq_l f3, 0x10(r5), 0, 0
    mr r3, r29
    psq_l f5, 0x20(r5), 0, 0
    addi r4, r4, 0x33f
    psq_st f2, 0x8(r6), 0, 0
    li r5, 0x0
    lfs f0, lbl_80883A98
    psq_st f4, 0x18(r6), 0, 0
    psq_st f6, 0x28(r6), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_st f3, 0x10(r6), 0, 0
    psq_st f5, 0x20(r6), 0, 0
    stfs f0, 0x1d4(r1)
    stfs f0, 0x1e4(r1)
    stfs f0, 0x1f4(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029101C_000015CC
    li r4, 0x0
    b lbl_fn_8029101C_000015D8
lbl_fn_8029101C_000015CC:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r29)
    add r4, r3, r0
lbl_fn_8029101C_000015D8:
    lfs f8, 0x2c(r4)
    fmr f1, f31
    lfs f9, 0x1c(r4)
    addi r3, r1, 0x170
    lfs f10, 0xc(r4)
    li r4, 0x7a
    lfs f7, lbl_80883AD8
    lfs f0, lbl_80883A98
    stfs f10, 0x14(r1)
    stfs f9, 0x18(r1)
    stfs f8, 0x1c(r1)
    stfs f7, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f7, 0x10(r1)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x170
    mr r5, r4
    bl fn_805F93C0
    lfs f7, lbl_80883A98
    addi r29, r1, 0x140
    lfs f0, lbl_80883AA8
    stfs f7, 0x16c(r1)
    stfs f7, 0x164(r1)
    stfs f7, 0x160(r1)
    stfs f7, 0x15c(r1)
    stfs f7, 0x158(r1)
    stfs f7, 0x150(r1)
    stfs f7, 0x14c(r1)
    stfs f7, 0x148(r1)
    stfs f7, 0x144(r1)
    stfs f0, 0x168(r1)
    stfs f0, 0x154(r1)
    stfs f0, 0x140(r1)
    lfs f1, 0x53c(r30)
    fcmpu cr0, f7, f1
    beq lbl_fn_8029101C_000016BC
    addi r3, r1, 0x50
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x50
    addi r5, r1, 0x20
    bl fn_805F89F0
    addi r3, r1, 0x20
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8029101C_000016BC:
    lfs f0, lbl_80883A98
    lfs f1, 0x538(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_8029101C_0000171C
    addi r3, r1, 0xb0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0xb0
    addi r5, r1, 0x80
    bl fn_805F89F0
    addi r3, r1, 0x80
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8029101C_0000171C:
    lfs f0, lbl_80883A98
    lfs f1, 0x534(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_8029101C_0000177C
    addi r3, r1, 0x110
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x110
    addi r5, r1, 0xe0
    bl fn_805F89F0
    addi r3, r1, 0xe0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8029101C_0000177C:
    addi r4, r1, 0x8
    addi r3, r1, 0x140
    mr r5, r4
    bl fn_805F93C0
    lfs f11, lbl_80883B08
    li r11, 0x0
    lfs f0, lbl_80883AC0
    li r5, -0x1
    lfs f10, lbl_80883B84
    lis r0, 0x4330
    lfs f9, lbl_80883B88
    lis r3, lbl_807452F8@ha
    lfs f7, lbl_80883BD0
    mr r4, r30
    stfs f0, 0x1a8(r1)
    addi r6, r1, 0x14
    lfd f8, lbl_807452F8@l(r3)
    addi r7, r1, 0x8
    stfs f11, 0x1ac(r1)
    addi r8, r1, 0x1a0
    lfs f0, lbl_80883B48
    li r9, 0x4
    stfs f10, 0x1b0(r1)
    li r10, 0x0
    lwz r3, lbl_8087F048
    stfs f9, 0x1b4(r1)
    lfs f1, lbl_80883A98
    stw r11, 0x1bc(r1)
    lfs f2, lbl_80883AA8
    stw r5, 0x1c0(r1)
    stw r31, 0x1a0(r1)
    stfs f11, 0x1b8(r1)
    stfs f7, 0x1a4(r1)
    lfs f7, 0x199c(r30)
    stfs f7, 0x1ac(r1)
    lwz r5, 0x14cc(r30)
    stw r0, 0x1f8(r1)
    lwz r0, 0x5c(r5)
    xoris r0, r0, 0x8000
    stw r0, 0x1fc(r1)
    lfd f7, 0x1f8(r1)
    fsubs f7, f7, f8
    stfs f7, 0x1b4(r1)
    lfs f7, 0x19a0(r30)
    fmuls f0, f0, f7
    stfs f0, 0x1b0(r1)
    lwz r5, 0x14e4(r30)
    bl fn_800F8574
lbl_fn_8029101C_0000183C:
    lwz r0, 0x224(r1)
    psq_l f31, 0x218(r1), 0, 0
    lfd f31, 0x210(r1)
    lwz r31, 0x20c(r1)
    lwz r30, 0x208(r1)
    lwz r29, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_80291390(void)
{
    nofralloc
    cmpwi r4, 0x0
    stw r4, 0x15d0(r3)
    beq lbl_fn_80291390_00001878
    stw r4, 0x638(r3)
    li r3, 0x1
    blr
lbl_fn_80291390_00001878:
    li r3, 0x0
    blr
}

asm void fn_802913B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lfs f0, lbl_80883A98
    lwz r6, 0x15d0(r3)
    stfs f0, 0xfb8(r3)
    cmpwi r6, 0x0
    stfs f0, 0xfbc(r3)
    bne lbl_fn_802913B0_000018A4
    li r3, 0x1
    b lbl_fn_802913B0_00001908
lbl_fn_802913B0_000018A4:
    lwz r4, 0x15d4(r3)
    lwz r0, 0xc0(r6)
    cmpw r4, r0
    ble lbl_fn_802913B0_000018BC
    li r3, 0x1
    b lbl_fn_802913B0_00001908
lbl_fn_802913B0_000018BC:
    addi r5, r4, 0x1
    lis r0, 0x4330
    xoris r4, r5, 0x8000
    stw r4, 0xc(r1)
    lis r4, lbl_807452F8@ha
    stw r0, 0x8(r1)
    lfd f1, lbl_807452F8@l(r4)
    lfd f0, 0x8(r1)
    stw r5, 0x15d4(r3)
    fsubs f0, f0, f1
    stw r0, 0x10(r1)
    stfs f0, 0xfb8(r3)
    lwz r0, 0xc0(r6)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    stfs f0, 0xfbc(r3)
    li r3, 0x0
lbl_fn_802913B0_00001908:
    addi r1, r1, 0x20
    blr
}

asm void fn_80291440(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f1, lbl_80883A98
    lis r5, lbl_80745314@ha
    stw r0, 0x34(r1)
    addi r5, r5, lbl_80745314@l
    lfs f0, lbl_80883B04
    stw r31, 0x2c(r1)
    mr r31, r4
    addi r4, r5, 0x344
    li r5, 0x0
    stw r30, 0x28(r1)
    mr r30, r3
    addi r3, r31, 0xb0
    stfs f1, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f1, 0x10(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80291440_00001968
    li r3, 0x0
    b lbl_fn_80291440_00001974
lbl_fn_80291440_00001968:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_80291440_00001974:
    lfs f3, 0x2c(r3)
    lfs f4, 0x1c(r3)
    lfs f5, 0xc(r3)
    lfs f2, 0x10(r1)
    lfs f1, 0xc(r1)
    lfs f0, 0x8(r1)
    fadds f2, f3, f2
    fadds f1, f4, f1
    stfs f5, 0x14(r1)
    fadds f0, f5, f0
    stfs f1, 0x4(r30)
    stfs f0, 0x0(r30)
    stfs f2, 0x8(r30)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    stfs f4, 0x18(r1)
    stfs f3, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
