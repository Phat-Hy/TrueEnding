#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8004ED34(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800D246C(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800EE360(void);
extern void fn_800F8548(void);
extern void fn_8013655C(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_8015495C(void);
extern void fn_8015AC48(void);
extern void fn_8016DA4C(void);
extern void fn_8016E4C4(void);
extern void fn_8016E970(void);
extern void fn_801765D8(void);
extern void fn_80178A6C(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_80237874(void);
extern void fn_8023A8B4(void);
extern void fn_802E8084(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473F50(void);
extern void fn_805A3C58(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_80682428(void);
extern void fn_806827C4(void);
extern void fn_80684600(void);
extern void fn_8068AEA4(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80747EA0[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80787290[];
extern u8 lbl_8078FBB0[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_808846EC;
extern u32 lbl_808846F4;
extern u32 lbl_808846F8;
extern u32 lbl_80884720;
extern u32 lbl_80884724;
extern u32 lbl_80884734;
extern u32 lbl_80884738;
extern u32 lbl_8088473C;
extern u32 lbl_80884758;
extern u32 lbl_8088475C;
extern u32 lbl_80884760;
extern u32 lbl_80884764;
extern u32 lbl_80884768;
extern u32 lbl_8088476C;
extern u32 lbl_80884770;
extern u32 lbl_80884774;
extern u32 lbl_80884778;

/* Function declarations */
void fn_802E4D6C(void);
void fn_802E500C(void);
void fn_802E52AC(void);
void fn_802E554C(void);
void fn_802E55B0(void);
void fn_802E58C8(void);
void fn_802E5970(void);
void fn_802E59E0(void);
void fn_802E5B30(void);
void fn_802E5B38(void);
void fn_802E5CD0(void);
void fn_802E5E94(void);
void fn_802E61BC(void);
void fn_802E61D0(void);
void fn_802E6228(void);

asm void fn_802E4D6C(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    li r0, 0x0
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    stw r30, 0xd8(r1)
    mr r30, r3
    stw r0, 0x14b8(r3)
    stw r0, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0xc
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f0, lbl_80884720
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_808846EC
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x142
    lfs f2, lbl_80884724
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lwz r4, 0x14cc(r30)
    addi r3, r1, 0x5c
    lfs f3, lbl_808846EC
    addi r31, r1, 0x50
    lfs f5, 0x530(r4)
    lfs f0, 0x530(r30)
    lfs f4, 0x528(r4)
    fsubs f2, f5, f0
    lfs f0, 0x528(r30)
    stfs f3, 0x60(r1)
    fsubs f4, f4, f0
    lfs f0, lbl_80884734
    stfs f2, 0x64(r1)
    stfs f4, 0x5c(r1)
    frsp f4, f2
    psq_l f1, 0x0(r3), 0, 0
    fabs f5, f4
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    frsp f5, f5
    fcmpo cr0, f5, f0
    bge lbl_fn_802E4D6C_00000104
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_802E4D6C_000000F8
    lfs f0, lbl_80884738
    b lbl_fn_802E4D6C_000000FC
lbl_fn_802E4D6C_000000F8:
    lfs f0, lbl_8088473C
lbl_fn_802E4D6C_000000FC:
    stfs f0, 0x48(r1)
    b lbl_fn_802E4D6C_00000118
lbl_fn_802E4D6C_00000104:
    fmr f2, f4
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802E4D6C_00000118:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808846EC
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
    lfs f0, lbl_80884720
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
    lfs f0, lbl_80884734
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802E4D6C_00000234
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808846EC
    fcmpo cr0, f3, f0
    ble lbl_fn_802E4D6C_00000224
    lfs f0, lbl_80884738
    b lbl_fn_802E4D6C_00000228
lbl_fn_802E4D6C_00000224:
    lfs f0, lbl_8088473C
lbl_fn_802E4D6C_00000228:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802E4D6C_00000248
lbl_fn_802E4D6C_00000234:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802E4D6C_00000248:
    addi r3, r1, 0x44
    lfs f2, lbl_808846EC
    psq_l f1, 0x0(r3), 0, 0
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_808846F4
    psq_st f1, 0x0(r31), 0, 0
    fcmpo cr0, f3, f0
    stfs f2, 0x4c(r1)
    lfs f0, 0x54(r1)
    stfs f2, 0x58(r1)
    blt lbl_fn_802E4D6C_00000278
    stfs f0, 0x538(r30)
lbl_fn_802E4D6C_00000278:
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

asm void fn_802E500C(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    li r0, 0x0
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    stw r30, 0xd8(r1)
    mr r30, r3
    stw r0, 0x14b8(r3)
    stw r0, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0xd
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f0, lbl_80884720
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_808846EC
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x14d
    lfs f2, lbl_80884724
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lwz r4, 0x14cc(r30)
    addi r3, r1, 0x5c
    lfs f3, lbl_808846EC
    addi r31, r1, 0x50
    lfs f5, 0x530(r4)
    lfs f0, 0x530(r30)
    lfs f4, 0x528(r4)
    fsubs f2, f5, f0
    lfs f0, 0x528(r30)
    stfs f3, 0x60(r1)
    fsubs f4, f4, f0
    lfs f0, lbl_80884734
    stfs f2, 0x64(r1)
    stfs f4, 0x5c(r1)
    frsp f4, f2
    psq_l f1, 0x0(r3), 0, 0
    fabs f5, f4
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    frsp f5, f5
    fcmpo cr0, f5, f0
    bge lbl_fn_802E500C_000003A4
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_802E500C_00000398
    lfs f0, lbl_80884738
    b lbl_fn_802E500C_0000039C
lbl_fn_802E500C_00000398:
    lfs f0, lbl_8088473C
lbl_fn_802E500C_0000039C:
    stfs f0, 0x48(r1)
    b lbl_fn_802E500C_000003B8
lbl_fn_802E500C_000003A4:
    fmr f2, f4
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802E500C_000003B8:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808846EC
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
    lfs f0, lbl_80884720
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
    lfs f0, lbl_80884734
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802E500C_000004D4
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808846EC
    fcmpo cr0, f3, f0
    ble lbl_fn_802E500C_000004C4
    lfs f0, lbl_80884738
    b lbl_fn_802E500C_000004C8
lbl_fn_802E500C_000004C4:
    lfs f0, lbl_8088473C
lbl_fn_802E500C_000004C8:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802E500C_000004E8
lbl_fn_802E500C_000004D4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802E500C_000004E8:
    addi r3, r1, 0x44
    lfs f2, lbl_808846EC
    psq_l f1, 0x0(r3), 0, 0
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_808846F4
    psq_st f1, 0x0(r31), 0, 0
    fcmpo cr0, f3, f0
    stfs f2, 0x4c(r1)
    lfs f0, 0x54(r1)
    stfs f2, 0x58(r1)
    blt lbl_fn_802E500C_00000518
    stfs f0, 0x538(r30)
lbl_fn_802E500C_00000518:
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

asm void fn_802E52AC(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    li r0, 0x0
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    stw r30, 0xd8(r1)
    mr r30, r3
    stw r0, 0x14b8(r3)
    stw r0, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0xe
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f0, lbl_80884720
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_808846EC
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x145
    lfs f2, lbl_80884724
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lwz r4, 0x14cc(r30)
    addi r3, r1, 0x5c
    lfs f3, lbl_808846EC
    addi r31, r1, 0x50
    lfs f5, 0x530(r4)
    lfs f0, 0x530(r30)
    lfs f4, 0x528(r4)
    fsubs f2, f5, f0
    lfs f0, 0x528(r30)
    stfs f3, 0x60(r1)
    fsubs f4, f4, f0
    lfs f0, lbl_80884734
    stfs f2, 0x64(r1)
    stfs f4, 0x5c(r1)
    frsp f4, f2
    psq_l f1, 0x0(r3), 0, 0
    fabs f5, f4
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    frsp f5, f5
    fcmpo cr0, f5, f0
    bge lbl_fn_802E52AC_00000644
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_802E52AC_00000638
    lfs f0, lbl_80884738
    b lbl_fn_802E52AC_0000063C
lbl_fn_802E52AC_00000638:
    lfs f0, lbl_8088473C
lbl_fn_802E52AC_0000063C:
    stfs f0, 0x48(r1)
    b lbl_fn_802E52AC_00000658
lbl_fn_802E52AC_00000644:
    fmr f2, f4
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802E52AC_00000658:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808846EC
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
    lfs f0, lbl_80884720
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
    lfs f0, lbl_80884734
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802E52AC_00000774
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808846EC
    fcmpo cr0, f3, f0
    ble lbl_fn_802E52AC_00000764
    lfs f0, lbl_80884738
    b lbl_fn_802E52AC_00000768
lbl_fn_802E52AC_00000764:
    lfs f0, lbl_8088473C
lbl_fn_802E52AC_00000768:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802E52AC_00000788
lbl_fn_802E52AC_00000774:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802E52AC_00000788:
    addi r3, r1, 0x44
    lfs f2, lbl_808846EC
    psq_l f1, 0x0(r3), 0, 0
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_808846F4
    psq_st f1, 0x0(r31), 0, 0
    fcmpo cr0, f3, f0
    stfs f2, 0x4c(r1)
    lfs f0, 0x54(r1)
    stfs f2, 0x58(r1)
    blt lbl_fn_802E52AC_000007B8
    stfs f0, 0x538(r30)
lbl_fn_802E52AC_000007B8:
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

asm void fn_802E554C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0x14b8(r3)
    stw r0, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0xf
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    stw r31, 0x14ec(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802E55B0(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    li r0, 0x0
    stw r31, 0xac(r1)
    mr r31, r3
    stw r30, 0xa8(r1)
    stw r29, 0xa4(r1)
    mr r29, r4
    stw r0, 0x14b8(r3)
    stw r0, 0x14bc(r3)
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
    li r0, 0x2
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80884720
    cmpwi r29, 0x1
    li r30, 0x1
    stw r30, 0x3fc(r31)
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    beq lbl_fn_802E55B0_000008FC
    cmpwi r29, 0x2
    beq lbl_fn_802E55B0_00000990
    cmpwi r29, 0x3
    beq lbl_fn_802E55B0_000009B8
    b lbl_fn_802E55B0_000009E4
lbl_fn_802E55B0_000008FC:
    lfs f1, lbl_808846EC
    addi r3, r31, 0xb0
    lfs f2, lbl_80884724
    li r4, 0x0
    li r5, 0x2f
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_808846EC
    li r0, -0x1
    lfs f1, lbl_80884720
    addi r4, r31, 0x14f8
    stfs f0, 0x34(r1)
    addi r5, r31, 0xb0
    lwz r3, lbl_8087F3C0
    addi r7, r1, 0x28
    stfs f0, 0x38(r1)
    addi r8, r1, 0x34
    addi r9, r1, 0x40
    li r6, 0x0
    stfs f0, 0x3c(r1)
    li r10, -0x1
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f1, 0x40(r1)
    stfs f1, 0x44(r1)
    stfs f1, 0x48(r1)
    stfs f1, 0x4c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    bl fn_8023A8B4
    b lbl_fn_802E55B0_000009E4
lbl_fn_802E55B0_00000990:
    lfs f1, lbl_808846EC
    addi r3, r31, 0xb0
    lfs f2, lbl_80884724
    li r4, 0x0
    li r5, 0x30
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802E55B0_000009E4
lbl_fn_802E55B0_000009B8:
    lfs f0, lbl_808846F8
    addi r3, r31, 0xb0
    stfs f0, 0x2e8(r31)
    li r4, 0x0
    lfs f1, lbl_808846EC
    li r5, 0x2e
    lfs f2, lbl_80884724
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_802E55B0_000009E4:
    lwz r3, 0x14d0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802E55B0_00000B40
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r0, 0x0
    li r4, 0x0
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_802E55B0_00000A1C
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_802E55B0_00000A1C
    li r4, 0x1
lbl_fn_802E55B0_00000A1C:
    cmpwi r4, 0x0
    beq lbl_fn_802E55B0_00000A38
    lwz r4, 0x7e0(r3)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_802E55B0_00000A38
    li r0, 0x1
lbl_fn_802E55B0_00000A38:
    cmpwi r0, 0x0
    beq lbl_fn_802E55B0_00000A6C
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802E55B0_00000A60
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_802E55B0_00000A60
    li r4, 0x1
lbl_fn_802E55B0_00000A60:
    cmpwi r4, 0x0
    bne lbl_fn_802E55B0_00000A6C
    li r5, 0x1
lbl_fn_802E55B0_00000A6C:
    cmpwi r5, 0x0
    beq lbl_fn_802E55B0_00000A7C
    li r4, -0x1
    bl fn_8015AC48
lbl_fn_802E55B0_00000A7C:
    lwz r3, 0x14d0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802E55B0_00000B40
    li r0, 0x0
    stw r0, 0xf1c(r3)
    addi r6, r1, 0x10
    addi r5, r1, 0x1c
    lwz r7, 0x14d0(r31)
    addi r4, r1, 0x50
    lwz r3, lbl_8087EE98
    li r8, 0x0
    psq_l f1, 0x528(r7), 0, 0
    li r9, 0x0
    lfs f2, 0x530(r7)
    lis r7, 0x8000
    stfs f2, 0x18(r1)
    psq_st f1, 0x0(r6), 0, 0
    lfs f2, 0x530(r31)
    psq_l f1, 0x528(r31), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f0, 0x14(r1)
    stfs f2, 0x24(r1)
    stfs f0, 0x20(r1)
    stw r0, 0x84(r1)
    stw r0, 0x88(r1)
    stw r0, 0x8c(r1)
    stw r0, 0x90(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_802E55B0_00000B38
    lfs f3, 0x60(r1)
    addi r3, r1, 0x60
    lfs f0, 0x78(r1)
    lfs f5, 0x64(r1)
    fadds f6, f3, f0
    lfs f4, 0x7c(r1)
    lfs f3, 0x68(r1)
    lfs f0, 0x80(r1)
    fadds f4, f5, f4
    stfs f6, 0x60(r1)
    fadds f2, f3, f0
    stfs f4, 0x64(r1)
    stfs f2, 0x68(r1)
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x14d0(r31)
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
lbl_fn_802E55B0_00000B38:
    li r0, 0x0
    stw r0, 0x14d0(r31)
lbl_fn_802E55B0_00000B40:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_802E58C8(void)
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
    bne lbl_fn_802E58C8_00000BE0
    lwz r3, 0x1434(r31)
    lwz r4, 0x12a4(r31)
    lwz r0, 0x5c0(r31)
    cmpwi r3, 0x0
    oris r4, r4, 0x200
    stw r4, 0x12a4(r31)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r31)
    ble lbl_fn_802E58C8_00000BC4
    subi r0, r3, 0x1
    stw r0, 0x1434(r31)
    b lbl_fn_802E58C8_00000BE8
lbl_fn_802E58C8_00000BC4:
    ori r0, r4, 0x8000
    stw r0, 0x12a4(r31)
    mr r3, r31
    bl fn_801765D8
    mr r3, r31
    bl fn_800EE360
    b lbl_fn_802E58C8_00000BE8
lbl_fn_802E58C8_00000BE0:
    li r0, 0x1e
    stw r0, 0x1434(r31)
lbl_fn_802E58C8_00000BE8:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802E5970(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xb
    beq lbl_fn_802E5970_00000C60
    lfs f0, lbl_80884720
    li r0, 0x1
    stw r0, 0x3fc(r3)
    li r4, 0x0
    lfs f1, lbl_808846EC
    li r5, 0x14
    stfs f0, 0x2fc(r3)
    li r6, 0x1
    lfs f2, lbl_80884724
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0xb0
    bl fn_80097C08
    lfs f0, lbl_80884720
    stfs f0, 0x2e8(r31)
lbl_fn_802E5970_00000C60:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802E59E0(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    mr r29, r5
    stw r28, 0x110(r1)
    mr r28, r3
    bl fn_805A3C58
    lis r3, lbl_80787290@ha
    addi r31, r28, 0x14d4
    addi r3, r3, lbl_80787290@l
    stw r3, 0x0(r28)
    mr r3, r31
    bl fn_80473E74
    lfs f0, lbl_80884758
    lis r3, lbl_8078FBB0@ha
    li r30, 0x0
    li r0, 0x1
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x0(r31)
    addi r3, r28, 0x1510
    stw r30, 0x14dc(r28)
    stw r30, 0x14e0(r28)
    stw r30, 0x14e4(r28)
    stfs f0, 0x14ec(r28)
    stw r30, 0x14f0(r28)
    stw r30, 0x14f4(r28)
    stw r30, 0x14f8(r28)
    stw r30, 0x14fc(r28)
    stw r30, 0x1500(r28)
    stw r30, 0x1504(r28)
    stb r30, 0x1508(r28)
    stw r0, 0x150c(r28)
    bl fn_802377B8
    lwz r3, 0x7ec(r28)
    lis r31, lbl_80747EA0@ha
    lwz r0, 0x958(r28)
    addi r4, r31, lbl_80747EA0@l
    ori r3, r3, 0x40
    stw r30, 0x151c(r28)
    oris r5, r3, 0x100
    ori r0, r0, 0x200
    stw r30, 0x1520(r28)
    addi r3, r29, 0x2c
    stw r5, 0x7ec(r28)
    stw r0, 0x958(r28)
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r5, r3
    beq lbl_fn_802E59E0_00000D60
    addi r4, r31, lbl_80747EA0@l
    addi r3, r1, 0x8
    addi r4, r4, 0x9
    addi r5, r5, 0x8
    crclr 6
    bl sprintf
    b lbl_fn_802E59E0_00000D74
lbl_fn_802E59E0_00000D60:
    addi r4, r31, lbl_80747EA0@l
    addi r3, r1, 0x8
    addi r4, r4, 0x25
    crclr 6
    bl sprintf
lbl_fn_802E59E0_00000D74:
    lwz r12, 0x14d4(r28)
    addi r3, r28, 0x14d4
    addi r4, r1, 0x8
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r4, lbl_80747EA0@ha
    addi r3, r28, 0x1510
    addi r4, r4, lbl_80747EA0@l
    addi r4, r4, 0x51
    bl fn_8023780C
    lwz r31, 0x11c(r1)
    mr r3, r28
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_802E5B30(void)
{
    nofralloc
    stw r4, 0x14f0(r3)
    blr
}

asm void fn_802E5B38(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    bl fn_8013655C
    cmpwi r3, 0x0
    beq lbl_fn_802E5B38_00000DF8
    li r3, 0x0
    b lbl_fn_802E5B38_00000F4C
lbl_fn_802E5B38_00000DF8:
    lwz r3, 0x1438(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802E5B38_00000E1C
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_802E5B38_00000E1C
    li r3, 0x0
    b lbl_fn_802E5B38_00000F4C
lbl_fn_802E5B38_00000E1C:
    addi r3, r31, 0x14d4
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_802E5B38_00000E34
    li r3, 0x0
    b lbl_fn_802E5B38_00000F4C
lbl_fn_802E5B38_00000E34:
    addi r3, r31, 0x1510
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_802E5B38_00000E4C
    li r3, 0x0
    b lbl_fn_802E5B38_00000F4C
lbl_fn_802E5B38_00000E4C:
    lwz r0, 0x151c(r31)
    lis r3, lbl_80747EA0@ha
    addi r3, r3, lbl_80747EA0@l
    cmpwi r0, 0x0
    addi r4, r3, 0x66
    bne lbl_fn_802E5B38_00000E80
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802E5B38_00000E80
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x151c(r31)
    b lbl_fn_802E5B38_00000E84
lbl_fn_802E5B38_00000E80:
    li r3, 0x0
lbl_fn_802E5B38_00000E84:
    lis r4, lbl_80747EA0@ha
    addi r5, r31, 0x1520
    addi r4, r4, lbl_80747EA0@l
    li r6, 0x0
    addi r4, r4, 0x78
    li r7, 0x0
    bl fn_80087994
    lwz r3, 0x1438(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802E5B38_00000EC4
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_802E5B38_00000EC4:
    lwz r0, 0x7ec(r31)
    addi r3, r31, 0x14d4
    ori r0, r0, 0x1c0
    oris r0, r0, 0x1
    ori r0, r0, 0xc21d
    oris r0, r0, 0x380
    stw r0, 0x7ec(r31)
    bl fn_8047059C
    mr r30, r3
    addi r3, r31, 0x14d4
    bl fn_80470580
    mr r4, r3
    mr r3, r31
    mr r5, r30
    bl fn_802E5CD0
    lwz r3, 0x958(r31)
    li r30, 0x0
    lwz r4, 0x54c(r31)
    li r0, 0x1
    ori r3, r3, 0x2a
    stw r3, 0x958(r31)
    ori r3, r4, 0x200
    stw r3, 0x54c(r31)
    stw r0, 0x10d0(r31)
    stw r30, 0x14dc(r31)
    stw r30, 0x14e0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    li r3, 0x1
lbl_fn_802E5B38_00000F4C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802E5CD0(void)
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
    lis r31, lbl_80747EA0@ha
    addi r31, r31, lbl_80747EA0@l
lbl_fn_802E5CD0_00001004:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    mr r30, r3
    addi r4, r31, 0x82
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E5CD0_00001038
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14f8(r29)
    b lbl_fn_802E5CD0_000010FC
lbl_fn_802E5CD0_00001038:
    mr r3, r30
    addi r4, r31, 0x8f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E5CD0_00001064
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14fc(r29)
    b lbl_fn_802E5CD0_000010FC
lbl_fn_802E5CD0_00001064:
    mr r3, r30
    addi r4, r31, 0x9c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E5CD0_0000108C
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x14ec(r29)
    b lbl_fn_802E5CD0_000010FC
lbl_fn_802E5CD0_0000108C:
    mr r3, r30
    addi r4, r31, 0xa4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E5CD0_000010FC
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC12C
    lwz r4, lbl_8087F430
    li r5, 0x0
    li r6, 0x0
    lwz r4, 0x10d8(r4)
    lwz r0, 0x78(r4)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802E5CD0_000010F4
lbl_fn_802E5CD0_000010CC:
    lwz r7, 0x7c(r4)
    lwzx r0, r7, r6
    cmpw r3, r0
    bne lbl_fn_802E5CD0_000010E8
    mulli r0, r5, 0x28
    add r0, r7, r0
    b lbl_fn_802E5CD0_000010F8
lbl_fn_802E5CD0_000010E8:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_802E5CD0_000010CC
lbl_fn_802E5CD0_000010F4:
    li r0, 0x0
lbl_fn_802E5CD0_000010F8:
    stw r0, 0x1504(r29)
lbl_fn_802E5CD0_000010FC:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802E5CD0_00001004
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_802E5E94(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r5, 0x0
    li r4, 0x0
    stw r0, 0x54(r1)
    li r0, 0x0
    stw r31, 0x4c(r1)
    mr r31, r3
    lwz r7, 0x38(r3)
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_802E5E94_00001168
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_802E5E94_00001168
    li r4, 0x1
lbl_fn_802E5E94_00001168:
    cmpwi r4, 0x0
    beq lbl_fn_802E5E94_00001184
    lwz r4, 0x7e0(r3)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_802E5E94_00001184
    li r0, 0x1
lbl_fn_802E5E94_00001184:
    cmpwi r0, 0x0
    beq lbl_fn_802E5E94_000011B8
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802E5E94_000011AC
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_802E5E94_000011AC
    li r4, 0x1
lbl_fn_802E5E94_000011AC:
    cmpwi r4, 0x0
    bne lbl_fn_802E5E94_000011B8
    li r5, 0x1
lbl_fn_802E5E94_000011B8:
    cmpwi r5, 0x0
    beq lbl_fn_802E5E94_000011C8
    li r0, 0x0
    stb r0, 0x1508(r3)
lbl_fn_802E5E94_000011C8:
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_802E5E94_000012B0
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r0, 0x0
    li r4, 0x0
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_802E5E94_00001200
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_802E5E94_00001200
    li r4, 0x1
lbl_fn_802E5E94_00001200:
    cmpwi r4, 0x0
    beq lbl_fn_802E5E94_0000121C
    lwz r4, 0x7e0(r3)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_802E5E94_0000121C
    li r0, 0x1
lbl_fn_802E5E94_0000121C:
    cmpwi r0, 0x0
    beq lbl_fn_802E5E94_00001250
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802E5E94_00001244
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_802E5E94_00001244
    li r4, 0x1
lbl_fn_802E5E94_00001244:
    cmpwi r4, 0x0
    bne lbl_fn_802E5E94_00001250
    li r5, 0x1
lbl_fn_802E5E94_00001250:
    cmpwi r5, 0x0
    beq lbl_fn_802E5E94_00001298
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802E5E94_00001298
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_802E5E94_00001298
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x0
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802E5E94_00001298:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x104(r12)
    mtctr r12
    bctrl
    b lbl_fn_802E5E94_00001300
lbl_fn_802E5E94_000012B0:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802E5E94_000012E0
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x2
    beq lbl_fn_802E5E94_000012E0
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_802E5E94_000012E0:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_802E5E94_00001300
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
lbl_fn_802E5E94_00001300:
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    lfs f2, 0x530(r31)
    lis r3, lbl_80747EA0@ha
    addi r3, r3, lbl_80747EA0@l
    addi r5, r1, 0x8
    psq_l f1, 0x528(r31), 0, 0
    addi r4, r3, 0xae
    psq_st f1, 0x0(r5), 0, 0
    addi r3, r31, 0xb0
    li r5, 0x0
    stfs f2, 0x10(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802E5E94_0000134C
    li r5, 0x0
    b lbl_fn_802E5E94_00001358
lbl_fn_802E5E94_0000134C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_802E5E94_00001358:
    cmpwi r5, 0x0
    beq lbl_fn_802E5E94_0000138C
    lfs f3, 0x1c(r5)
    addi r3, r1, 0x2c
    lfs f0, 0xc(r5)
    addi r4, r1, 0x8
    stfs f0, 0x2c(r1)
    lfs f2, 0x2c(r5)
    stfs f3, 0x30(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x10(r1)
lbl_fn_802E5E94_0000138C:
    lfs f5, 0xc(r1)
    addi r5, r1, 0x38
    lfs f4, 0x5a8(r31)
    addi r3, r1, 0x20
    lfs f3, 0x8(r1)
    addi r4, r1, 0x14
    fadds f4, f5, f4
    lfs f0, 0x5a4(r31)
    lfs f5, 0x5b0(r31)
    fadds f0, f3, f0
    stfs f4, 0x3c(r1)
    lfs f3, 0x10(r1)
    stfs f0, 0x38(r1)
    lfs f0, 0x5ac(r31)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x614(r31), 0, 0
    fadds f6, f3, f0
    lfs f3, lbl_8088475C
    lfs f4, 0x618(r31)
    lfs f0, 0x5b4(r31)
    fmr f2, f6
    fadds f4, f4, f5
    stfs f5, 0x620(r31)
    fnmsubs f3, f3, f5, f0
    stfs f4, 0x618(r31)
    psq_l f1, 0x614(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x24(r1)
    stfs f2, 0x61c(r31)
    frsp f2, f2
    fadds f0, f0, f3
    stfs f2, 0x1c(r1)
    stfs f2, 0x28(r1)
    frsp f2, f2
    stfs f2, 0x5fc(r31)
    lfs f2, 0x28(r1)
    stfs f0, 0x24(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_st f1, 0x5f4(r31), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x600(r31), 0, 0
    stfs f2, 0x608(r31)
    stfs f5, 0x60c(r31)
    lwz r31, 0x4c(r1)
    lwz r0, 0x54(r1)
    stfs f6, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802E61BC(void)
{
    nofralloc
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xc
    beqlr
    b fn_80149A30
    blr
}

asm void fn_802E61D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x14dc(r3)
    stw r31, 0x14e0(r3)
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

asm void fn_802E6228(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    stw r0, 0x1d4(r1)
    stfd f31, 0x1c0(r1)
    psq_st f31, 0x1c8(r1), 0, 0
    stfd f30, 0x1b0(r1)
    psq_st f30, 0x1b8(r1), 0, 0
    stw r31, 0x1ac(r1)
    mr r31, r3
    stw r30, 0x1a8(r1)
    lwz r0, 0xd1c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802E6228_00001AA8
    cmpwi r4, 0x7
    beq lbl_fn_802E6228_00001514
    cmpwi r4, 0x8
    beq lbl_fn_802E6228_000015CC
    cmpwi r4, 0x9
    beq lbl_fn_802E6228_00001820
    cmpwi r4, 0x2
    beq lbl_fn_802E6228_00001A74
    b lbl_fn_802E6228_00001A80
lbl_fn_802E6228_00001514:
    li r30, 0x0
    stw r30, 0x14dc(r3)
    stw r30, 0x14e0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x7
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    mr r3, r31
    li r4, 0x1
    bl fn_8016E4C4
    lwz r0, 0x5c0(r31)
    mr r3, r31
    stb r30, 0x1508(r31)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x98(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1504(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802E6228_00001594
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x530(r31)
    psq_st f1, 0x528(r31), 0, 0
    lfs f0, 0x14(r3)
    stfs f0, 0x538(r31)
lbl_fn_802E6228_00001594:
    lfs f1, lbl_80884760
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f2, lbl_80884764
    li r4, 0x0
    stfs f1, 0x2fc(r31)
    li r5, 0x2d
    li r6, 0x0
    li r7, 0x1
    stfs f1, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802E6228_00001AA8
lbl_fn_802E6228_000015CC:
    li r0, 0x0
    stw r0, 0x14dc(r3)
    stw r0, 0x14e0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x8
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80884760
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884768
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x142
    lfs f2, lbl_80884764
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lwz r4, 0x14f4(r31)
    addi r3, r1, 0x68
    lfs f3, lbl_80884768
    addi r30, r1, 0x74
    lfs f5, 0x530(r4)
    lfs f0, 0x530(r31)
    lfs f4, 0x528(r4)
    fsubs f2, f5, f0
    lfs f0, 0x528(r31)
    stfs f3, 0x6c(r1)
    fsubs f4, f4, f0
    lfs f0, lbl_8088476C
    stfs f2, 0x70(r1)
    stfs f4, 0x68(r1)
    frsp f4, f2
    psq_l f1, 0x0(r3), 0, 0
    fabs f5, f4
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x7c(r1)
    frsp f5, f5
    fcmpo cr0, f5, f0
    bge lbl_fn_802E6228_000016A8
    lfs f0, 0x74(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_802E6228_0000169C
    lfs f0, lbl_80884770
    b lbl_fn_802E6228_000016A0
lbl_fn_802E6228_0000169C:
    lfs f0, lbl_80884774
lbl_fn_802E6228_000016A0:
    stfs f0, 0x84(r1)
    b lbl_fn_802E6228_000016BC
lbl_fn_802E6228_000016A8:
    fmr f2, f4
    lfs f1, 0x74(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x84(r1)
lbl_fn_802E6228_000016BC:
    lfs f0, 0x84(r1)
    addi r3, r1, 0x178
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884768
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
    lfs f31, 0x194(r1)
    lfs f30, 0x184(r1)
    lfs f0, lbl_80884760
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x7c(r1)
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
    stfs f30, 0x98(r1)
    stfs f31, 0x9c(r1)
    stfs f13, 0xa0(r1)
    stfs f30, 0x144(r1)
    stfs f31, 0x154(r1)
    stfs f13, 0x164(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x94(r1)
    bl fn_805F9750
    lfs f2, 0x94(r1)
    lfs f0, lbl_8088476C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802E6228_000017D8
    lfs f3, 0x90(r1)
    lfs f0, lbl_80884768
    fcmpo cr0, f3, f0
    ble lbl_fn_802E6228_000017C8
    lfs f0, lbl_80884770
    b lbl_fn_802E6228_000017CC
lbl_fn_802E6228_000017C8:
    lfs f0, lbl_80884774
lbl_fn_802E6228_000017CC:
    fneg f0, f0
    stfs f0, 0x80(r1)
    b lbl_fn_802E6228_000017EC
lbl_fn_802E6228_000017D8:
    lfs f1, 0x90(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x80(r1)
lbl_fn_802E6228_000017EC:
    addi r3, r1, 0x80
    lfs f2, lbl_80884768
    psq_l f1, 0x0(r3), 0, 0
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80884778
    psq_st f1, 0x0(r30), 0, 0
    fcmpo cr0, f3, f0
    stfs f2, 0x88(r1)
    lfs f0, 0x78(r1)
    stfs f2, 0x7c(r1)
    blt lbl_fn_802E6228_00001AA8
    stfs f0, 0x538(r31)
    b lbl_fn_802E6228_00001AA8
lbl_fn_802E6228_00001820:
    li r0, 0x0
    stw r0, 0x14dc(r3)
    stw r0, 0x14e0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x9
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80884760
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884768
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14d
    lfs f2, lbl_80884764
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lwz r4, 0x14f4(r31)
    addi r3, r1, 0x8
    lfs f3, lbl_80884768
    addi r30, r1, 0x14
    lfs f5, 0x530(r4)
    lfs f0, 0x530(r31)
    lfs f4, 0x528(r4)
    fsubs f2, f5, f0
    lfs f0, 0x528(r31)
    stfs f3, 0xc(r1)
    fsubs f4, f4, f0
    lfs f0, lbl_8088476C
    stfs f2, 0x10(r1)
    stfs f4, 0x8(r1)
    frsp f4, f2
    psq_l f1, 0x0(r3), 0, 0
    fabs f5, f4
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x1c(r1)
    frsp f5, f5
    fcmpo cr0, f5, f0
    bge lbl_fn_802E6228_000018FC
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_802E6228_000018F0
    lfs f0, lbl_80884770
    b lbl_fn_802E6228_000018F4
lbl_fn_802E6228_000018F0:
    lfs f0, lbl_80884774
lbl_fn_802E6228_000018F4:
    stfs f0, 0x24(r1)
    b lbl_fn_802E6228_00001910
lbl_fn_802E6228_000018FC:
    fmr f2, f4
    lfs f1, 0x14(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x24(r1)
lbl_fn_802E6228_00001910:
    lfs f0, 0x24(r1)
    addi r3, r1, 0x108
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884768
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
    lfs f30, 0x124(r1)
    lfs f31, 0x114(r1)
    lfs f0, lbl_80884760
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x1c(r1)
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
    stfs f31, 0x38(r1)
    stfs f30, 0x3c(r1)
    stfs f13, 0x40(r1)
    stfs f31, 0xd4(r1)
    stfs f30, 0xe4(r1)
    stfs f13, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F9750
    lfs f2, 0x34(r1)
    lfs f0, lbl_8088476C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802E6228_00001A2C
    lfs f3, 0x30(r1)
    lfs f0, lbl_80884768
    fcmpo cr0, f3, f0
    ble lbl_fn_802E6228_00001A1C
    lfs f0, lbl_80884770
    b lbl_fn_802E6228_00001A20
lbl_fn_802E6228_00001A1C:
    lfs f0, lbl_80884774
lbl_fn_802E6228_00001A20:
    fneg f0, f0
    stfs f0, 0x20(r1)
    b lbl_fn_802E6228_00001A40
lbl_fn_802E6228_00001A2C:
    lfs f1, 0x30(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x20(r1)
lbl_fn_802E6228_00001A40:
    addi r3, r1, 0x20
    lfs f2, lbl_80884768
    psq_l f1, 0x0(r3), 0, 0
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80884778
    psq_st f1, 0x0(r30), 0, 0
    fcmpo cr0, f3, f0
    stfs f2, 0x28(r1)
    lfs f0, 0x18(r1)
    stfs f2, 0x1c(r1)
    blt lbl_fn_802E6228_00001AA8
    stfs f0, 0x538(r31)
    b lbl_fn_802E6228_00001AA8
lbl_fn_802E6228_00001A74:
    li r4, 0x2
    bl fn_802E8084
    b lbl_fn_802E6228_00001AA8
lbl_fn_802E6228_00001A80:
    li r30, 0x0
    stw r30, 0x14dc(r3)
    stw r30, 0x14e0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
lbl_fn_802E6228_00001AA8:
    lwz r0, 0x1d4(r1)
    psq_l f31, 0x1c8(r1), 0, 0
    lfd f31, 0x1c0(r1)
    psq_l f30, 0x1b8(r1), 0, 0
    lfd f30, 0x1b0(r1)
    lwz r31, 0x1ac(r1)
    lwz r30, 0x1a8(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}
