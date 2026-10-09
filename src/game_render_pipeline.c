#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D0F8(void);
extern void fn_8000D114(void);
extern void fn_8000D9E8(void);
extern void fn_8000DCF4(void);
extern void fn_8000DD0C(void);
extern void fn_800109E0(void);
extern void fn_80011410(void);
extern void fn_80012C88(void);
extern void fn_800132EC(void);
extern void fn_8001336C(void);
extern void fn_800844D8(void);
extern void fn_80097C08(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800E0AA8(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800FAB80(void);
extern void fn_801125F8(void);
extern void fn_8013A13C(void);
extern void fn_8013A194(void);
extern void fn_8013C480(void);
extern void fn_8016E970(void);
extern void fn_8016F3D0(void);
extern void fn_801A03E0(void);
extern void fn_801A03EC(void);
extern void fn_801A0408(void);
extern void fn_80244674(void);
extern void fn_80244FC0(void);
extern void fn_802A4094(void);
extern void fn_802A409C(void);
extern void fn_802A40A8(void);
extern void fn_802A4120(void);
extern void fn_802A4168(void);
extern void fn_802A4170(void);
extern void fn_802A4184(void);
extern void fn_802A42CC(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_80745C48[];
extern u8 lbl_80745C50[];
extern u8 lbl_80745C70[];
extern u8 lbl_80785C98[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F430;
extern u32 lbl_80883D28;
extern u32 lbl_80883D30;
extern u32 lbl_80883D44;
extern u32 lbl_80883D48;
extern u32 lbl_80883D4C;
extern u32 lbl_80883D50;
extern u32 lbl_80883D54;
extern u32 lbl_80883D58;
extern u32 lbl_80883D60;
extern u32 lbl_80883D6C;
extern u32 lbl_80883D84;
extern u32 lbl_80883D88;
extern u32 lbl_80883DD4;
extern u32 lbl_80883DDC;
extern u32 lbl_80883E0C;
extern u32 lbl_80883E10;
extern u32 lbl_80883E14;
extern u32 lbl_80883E18;
extern u32 lbl_80883E1C;

/* Function declarations */
void fn_802A2494(void);
void fn_802A254C(void);
void fn_802A2600(void);
void fn_802A2790(void);
void fn_802A2A68(void);
void fn_802A2F48(void);
void fn_802A325C(void);
void fn_802A3520(void);
void fn_802A35B0(void);
void fn_802A36B0(void);
void fn_802A36B8(void);
void fn_802A3D64(void);
void fn_802A3D6C(void);
void fn_802A3D80(void);

asm void fn_802A2494(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x9
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0x58c(r3)
    stw r31, 0x14d8(r3)
    stw r31, 0x14dc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D28
    li r4, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    stfs f0, 0x155c(r30)
    stw r31, 0x15fc(r30)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f3, lbl_80883D30
    li r0, 0x1
    lfs f0, lbl_80883D88
    li r4, 0x0
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883D28
    li r5, 0x66
    stw r0, 0x3fc(r30)
    li r6, 0x1
    lfs f2, lbl_80883D60
    li r7, 0x0
    stfs f3, 0x2fc(r30)
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802A254C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0xb
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0x58c(r3)
    stw r31, 0x14d8(r3)
    stw r31, 0x14dc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D28
    li r4, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    stfs f0, 0x155c(r30)
    stw r31, 0x15fc(r30)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D30
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883D28
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x13f
    lfs f2, lbl_80883D60
    li r6, 0x0
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802A2600(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0xc
    stw r31, 0x3c(r1)
    li r31, 0x0
    stw r30, 0x38(r1)
    mr r30, r3
    stw r0, 0x58c(r3)
    stw r31, 0x14d8(r3)
    stw r31, 0x14dc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D28
    li r4, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    stfs f0, 0x155c(r30)
    stw r31, 0x15fc(r30)
    stw r31, 0x1618(r30)
    stw r31, 0x1610(r30)
    stw r31, 0x1630(r30)
    stw r31, 0x1634(r30)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D30
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883D28
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x15e
    lfs f2, lbl_80883D60
    li r6, 0x0
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r7, 0x14d4(r30)
    addi r4, r1, 0x2c
    lfs f5, lbl_80883D28
    addi r6, r1, 0x14
    psq_l f1, 0x528(r7), 0, 0
    addi r5, r30, 0x1560
    psq_st f1, 0x0(r4), 0, 0
    addi r3, r1, 0x20
    lfs f4, 0x52c(r30)
    mr r4, r3
    lfs f3, 0x2c(r1)
    fsubs f6, f5, f4
    lfs f0, 0x528(r30)
    lfs f2, 0x530(r7)
    fsubs f3, f3, f0
    lfs f4, 0x530(r30)
    stfs f6, 0x18(r1)
    fsubs f0, f2, f4
    stfs f3, 0x14(r1)
    stfs f2, 0x34(r1)
    fmr f2, f0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    frsp f4, f2
    stfs f2, 0x1568(r30)
    lfs f3, 0x1560(r30)
    stfs f5, 0x30(r1)
    stfs f0, 0x1c(r1)
    stfs f3, 0x20(r1)
    stfs f5, 0x24(r1)
    stfs f4, 0x28(r1)
    bl fn_805F98D0
    lfs f5, 0x28(r1)
    lfs f4, lbl_80883DD4
    lfs f3, 0x24(r1)
    lfs f0, 0x20(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0x1564(r30)
    fmuls f7, f0, f4
    lfs f4, 0x1560(r30)
    lfs f0, 0x1568(r30)
    fsubs f3, f3, f6
    fsubs f4, f4, f7
    stfs f7, 0x8(r1)
    fsubs f0, f0, f5
    stfs f4, 0x1560(r30)
    stfs f3, 0x1564(r30)
    stfs f0, 0x1568(r30)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    stfs f6, 0xc(r1)
    stfs f5, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802A2790(void)
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
    stw r31, 0x14d8(r3)
    stw r31, 0x14dc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D28
    li r4, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    stfs f0, 0x155c(r30)
    stw r31, 0x15fc(r30)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D30
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883D28
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x15f
    lfs f2, lbl_80883D60
    li r6, 0x0
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r6, 0x14d4(r30)
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
    lfs f0, lbl_80883D28
    fsubs f3, f4, f3
    stfs f2, 0x70(r1)
    stfs f3, 0x5c(r1)
    stfs f5, 0x64(r1)
    stfs f0, 0x60(r1)
    bl fn_805F98D0
    lfs f0, 0x538(r30)
    addi r3, r1, 0x5c
    stfs f0, 0x1574(r30)
    addi r31, r1, 0x50
    lfs f0, lbl_80883D44
    lfs f2, 0x64(r1)
    psq_l f1, 0x0(r3), 0, 0
    fabs f3, f2
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802A2790_00000448
    lfs f3, 0x50(r1)
    lfs f0, lbl_80883D28
    fcmpo cr0, f3, f0
    ble lbl_fn_802A2790_0000043C
    lfs f0, lbl_80883D48
    b lbl_fn_802A2790_00000440
lbl_fn_802A2790_0000043C:
    lfs f0, lbl_80883D4C
lbl_fn_802A2790_00000440:
    stfs f0, 0x48(r1)
    b lbl_fn_802A2790_0000045C
lbl_fn_802A2790_00000448:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802A2790_0000045C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883D28
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
    lfs f0, lbl_80883D30
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
    lfs f0, lbl_80883D44
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802A2790_00000578
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883D28
    fcmpo cr0, f3, f0
    ble lbl_fn_802A2790_00000568
    lfs f0, lbl_80883D48
    b lbl_fn_802A2790_0000056C
lbl_fn_802A2790_00000568:
    lfs f0, lbl_80883D4C
lbl_fn_802A2790_0000056C:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802A2790_0000058C
lbl_fn_802A2790_00000578:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802A2790_0000058C:
    addi r3, r1, 0x44
    lfs f2, lbl_80883D28
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, 0x54(r1)
    stfs f0, 0x1578(r30)
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

asm void fn_802A2A68(void)
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
    stw r31, 0x14d8(r3)
    stw r31, 0x14dc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f4, lbl_80883D28
    addi r5, r1, 0xbc
    stw r3, 0x590(r30)
    addi r3, r1, 0xb0
    lwz r6, 0x14d4(r30)
    mr r4, r3
    stfs f4, 0x155c(r30)
    lfs f3, 0x530(r30)
    stw r31, 0x15fc(r30)
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
    lfs f0, lbl_80883D44
    addi r31, r1, 0xa4
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0xac(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802A2A68_000006BC
    lfs f3, 0xa4(r1)
    lfs f0, lbl_80883D28
    fcmpo cr0, f3, f0
    ble lbl_fn_802A2A68_000006B0
    lfs f0, lbl_80883D48
    b lbl_fn_802A2A68_000006B4
lbl_fn_802A2A68_000006B0:
    lfs f0, lbl_80883D4C
lbl_fn_802A2A68_000006B4:
    stfs f0, 0x90(r1)
    b lbl_fn_802A2A68_000006D0
lbl_fn_802A2A68_000006BC:
    frsp f2, f2
    lfs f1, 0xa4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_802A2A68_000006D0:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x138
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883D28
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
    lfs f0, lbl_80883D30
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
    lfs f0, lbl_80883D44
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802A2A68_000007EC
    lfs f3, 0x84(r1)
    lfs f0, lbl_80883D28
    fcmpo cr0, f3, f0
    ble lbl_fn_802A2A68_000007DC
    lfs f0, lbl_80883D48
    b lbl_fn_802A2A68_000007E0
lbl_fn_802A2A68_000007DC:
    lfs f0, lbl_80883D4C
lbl_fn_802A2A68_000007E0:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_802A2A68_00000800
lbl_fn_802A2A68_000007EC:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_802A2A68_00000800:
    addi r3, r1, 0x8c
    lfs f4, lbl_80883D28
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80745C48@ha
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f4
    lfs f0, 0x538(r30)
    lfs f3, 0xa8(r1)
    stfs f2, 0xac(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80745C48@l(r3)
    stfs f4, 0x94(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80883D50
    fcmpo cr0, f3, f0
    ble lbl_fn_802A2A68_0000084C
    lfs f0, lbl_80883D54
    fsubs f3, f3, f0
lbl_fn_802A2A68_0000084C:
    lfs f0, lbl_80883D58
    fcmpo cr0, f3, f0
    bge lbl_fn_802A2A68_00000860
    lfs f0, lbl_80883D54
    fadds f3, f3, f0
lbl_fn_802A2A68_00000860:
    lfs f1, lbl_80883D28
    li r0, 0x1
    lfs f0, lbl_80883D30
    fcmpo cr0, f3, f1
    stw r0, 0x3fc(r30)
    stfs f0, 0x2fc(r30)
    stfs f0, 0x2e8(r30)
    bge lbl_fn_802A2A68_000008A4
    lfs f2, lbl_80883D60
    addi r3, r30, 0xb0
    li r4, 0x0
    li r5, 0x158
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802A2A68_000008C4
lbl_fn_802A2A68_000008A4:
    lfs f2, lbl_80883D60
    addi r3, r30, 0xb0
    li r4, 0x0
    li r5, 0x159
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
lbl_fn_802A2A68_000008C4:
    lfs f0, 0x538(r30)
    addi r3, r1, 0xb0
    stfs f0, 0x1574(r30)
    addi r31, r1, 0x98
    lfs f0, lbl_80883D44
    lfs f2, 0xb8(r1)
    psq_l f1, 0x0(r3), 0, 0
    fabs f3, f2
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0xa0(r1)
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802A2A68_0000091C
    lfs f3, 0x98(r1)
    lfs f0, lbl_80883D28
    fcmpo cr0, f3, f0
    ble lbl_fn_802A2A68_00000910
    lfs f0, lbl_80883D48
    b lbl_fn_802A2A68_00000914
lbl_fn_802A2A68_00000910:
    lfs f0, lbl_80883D4C
lbl_fn_802A2A68_00000914:
    stfs f0, 0x48(r1)
    b lbl_fn_802A2A68_00000930
lbl_fn_802A2A68_0000091C:
    frsp f2, f2
    lfs f1, 0x98(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802A2A68_00000930:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xc8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883D28
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
    lfs f0, lbl_80883D30
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
    lfs f0, lbl_80883D44
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802A2A68_00000A4C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883D28
    fcmpo cr0, f3, f0
    ble lbl_fn_802A2A68_00000A3C
    lfs f0, lbl_80883D48
    b lbl_fn_802A2A68_00000A40
lbl_fn_802A2A68_00000A3C:
    lfs f0, lbl_80883D4C
lbl_fn_802A2A68_00000A40:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802A2A68_00000A60
lbl_fn_802A2A68_00000A4C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802A2A68_00000A60:
    addi r3, r1, 0x44
    li r0, 0x0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f2, lbl_80883D28
    lfs f0, 0x9c(r1)
    stfs f0, 0x1578(r30)
    stw r0, 0x1594(r30)
    stw r0, 0x1598(r30)
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

asm void fn_802A2F48(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    mr r30, r3
    bl fn_802A2A68
    lfs f2, 0x530(r30)
    addi r4, r30, 0x157c
    psq_l f1, 0x528(r30), 0, 0
    addi r3, r1, 0x80
    psq_st f1, 0x0(r4), 0, 0
    lwz r5, 0x14d4(r30)
    stfs f2, 0x1584(r30)
    lfs f0, 0x1640(r30)
    lfs f5, 0x530(r5)
    lfs f4, 0x528(r5)
    lfs f3, 0x1638(r30)
    fsubs f5, f5, f0
    lfs f0, lbl_80883D28
    fsubs f3, f4, f3
    stfs f5, 0x88(r1)
    stfs f3, 0x80(r1)
    stfs f0, 0x84(r1)
    bl fn_805F9920
    lfs f0, lbl_80883E0C
    fcmpo cr0, f1, f0
    ble lbl_fn_802A2F48_00000B44
    addi r3, r1, 0x80
    mr r4, r3
    bl fn_805F98D0
    b lbl_fn_802A2F48_00000B58
lbl_fn_802A2F48_00000B44:
    lfs f3, lbl_80883D28
    lfs f0, lbl_80883D30
    stfs f3, 0x80(r1)
    stfs f3, 0x84(r1)
    stfs f0, 0x88(r1)
lbl_fn_802A2F48_00000B58:
    lfs f5, 0x88(r1)
    addi r4, r1, 0x74
    lfs f4, lbl_80883E10
    addi r3, r30, 0x1588
    lfs f3, 0x84(r1)
    addi r5, r1, 0x50
    lfs f0, 0x80(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0x1640(r30)
    fmuls f7, f0, f4
    lfs f0, 0x163c(r30)
    fsubs f8, f3, f5
    fsubs f4, f0, f6
    lfs f3, 0x1638(r30)
    addi r31, r1, 0x5c
    stfs f4, 0x78(r1)
    fmr f2, f8
    fsubs f3, f3, f7
    stfs f2, 0x1590(r30)
    lfs f0, lbl_80883D44
    stfs f3, 0x74(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f3, 0x88(r1)
    lfs f4, 0x84(r1)
    fneg f9, f3
    lfs f3, 0x80(r1)
    fneg f4, f4
    stfs f7, 0x68(r1)
    fneg f3, f3
    frsp f2, f9
    stfs f3, 0x50(r1)
    fabs f3, f2
    stfs f4, 0x54(r1)
    psq_l f1, 0x0(r5), 0, 0
    frsp f3, f3
    stfs f6, 0x6c(r1)
    stfs f5, 0x70(r1)
    fcmpo cr0, f3, f0
    stfs f8, 0x7c(r1)
    stfs f9, 0x58(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x64(r1)
    bge lbl_fn_802A2F48_00000C30
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80883D28
    fcmpo cr0, f3, f0
    ble lbl_fn_802A2F48_00000C24
    lfs f0, lbl_80883D48
    b lbl_fn_802A2F48_00000C28
lbl_fn_802A2F48_00000C24:
    lfs f0, lbl_80883D4C
lbl_fn_802A2F48_00000C28:
    stfs f0, 0x48(r1)
    b lbl_fn_802A2F48_00000C44
lbl_fn_802A2F48_00000C30:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802A2F48_00000C44:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x90
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883D28
    addi r4, r1, 0x38
    lfs f30, 0x98(r1)
    mr r5, r4
    lfs f31, 0x94(r1)
    addi r3, r1, 0xc0
    lfs f13, 0x90(r1)
    lfs f12, 0xa8(r1)
    lfs f11, 0xa4(r1)
    lfs f10, 0xa0(r1)
    lfs f9, 0xb8(r1)
    lfs f8, 0xb4(r1)
    lfs f7, 0xb0(r1)
    lfs f6, 0xbc(r1)
    lfs f5, 0xac(r1)
    lfs f4, 0x9c(r1)
    lfs f0, lbl_80883D30
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xf0(r1)
    stfs f3, 0xf4(r1)
    stfs f3, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xc0(r1)
    stfs f31, 0xc4(r1)
    stfs f30, 0xc8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xd0(r1)
    stfs f11, 0xd4(r1)
    stfs f12, 0xd8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xe0(r1)
    stfs f8, 0xe4(r1)
    stfs f9, 0xe8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xcc(r1)
    stfs f5, 0xdc(r1)
    stfs f6, 0xec(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883D44
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802A2F48_00000D60
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883D28
    fcmpo cr0, f3, f0
    ble lbl_fn_802A2F48_00000D50
    lfs f0, lbl_80883D48
    b lbl_fn_802A2F48_00000D54
lbl_fn_802A2F48_00000D50:
    lfs f0, lbl_80883D4C
lbl_fn_802A2F48_00000D54:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802A2F48_00000D74
lbl_fn_802A2F48_00000D60:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802A2F48_00000D74:
    addi r3, r1, 0x44
    li r0, 0x1
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f2, lbl_80883D28
    lfs f0, 0x60(r1)
    stfs f0, 0x1578(r30)
    stw r0, 0x1594(r30)
    stw r0, 0x1598(r30)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r0, 0x134(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_802A325C(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    li r0, 0x11
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    li r31, 0x0
    stw r30, 0xe8(r1)
    mr r30, r3
    stw r0, 0x58c(r3)
    stw r31, 0x14d8(r3)
    stw r31, 0x14dc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D28
    stw r3, 0x590(r30)
    stfs f0, 0x155c(r30)
    stw r31, 0x15fc(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D30
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883D28
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x160
    lfs f2, lbl_80883D60
    li r6, 0x0
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r6, 0x14d4(r30)
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
    lfs f0, lbl_80883D28
    fsubs f3, f4, f3
    stfs f2, 0x70(r1)
    stfs f3, 0x5c(r1)
    stfs f5, 0x64(r1)
    stfs f0, 0x60(r1)
    bl fn_805F98D0
    lfs f0, 0x538(r30)
    addi r3, r1, 0x5c
    stfs f0, 0x1574(r30)
    addi r31, r1, 0x50
    lfs f0, lbl_80883D44
    lfs f2, 0x64(r1)
    psq_l f1, 0x0(r3), 0, 0
    fabs f3, f2
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802A325C_00000F00
    lfs f3, 0x50(r1)
    lfs f0, lbl_80883D28
    fcmpo cr0, f3, f0
    ble lbl_fn_802A325C_00000EF4
    lfs f0, lbl_80883D48
    b lbl_fn_802A325C_00000EF8
lbl_fn_802A325C_00000EF4:
    lfs f0, lbl_80883D4C
lbl_fn_802A325C_00000EF8:
    stfs f0, 0x48(r1)
    b lbl_fn_802A325C_00000F14
lbl_fn_802A325C_00000F00:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802A325C_00000F14:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883D28
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
    lfs f0, lbl_80883D30
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
    lfs f0, lbl_80883D44
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802A325C_00001030
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883D28
    fcmpo cr0, f3, f0
    ble lbl_fn_802A325C_00001020
    lfs f0, lbl_80883D48
    b lbl_fn_802A325C_00001024
lbl_fn_802A325C_00001020:
    lfs f0, lbl_80883D4C
lbl_fn_802A325C_00001024:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802A325C_00001044
lbl_fn_802A325C_00001030:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802A325C_00001044:
    addi r3, r1, 0x44
    lfs f2, lbl_80883D28
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, 0x54(r1)
    stfs f0, 0x1578(r30)
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

asm void fn_802A3520(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x12
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0x58c(r3)
    stw r31, 0x14d8(r3)
    stw r31, 0x14dc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D30
    li r0, 0x1
    lfs f1, lbl_80883D28
    li r4, 0x0
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f2, lbl_80883D60
    li r5, 0x14d
    stfs f1, 0x155c(r30)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stw r31, 0x15fc(r30)
    stw r0, 0x3fc(r30)
    stfs f0, 0x2fc(r30)
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802A35B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r3
    stw r31, 0x14d8(r3)
    stw r31, 0x14dc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D30
    li r7, 0xe
    lfs f1, lbl_80883D28
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f2, lbl_80883D60
    li r4, 0x0
    stw r7, 0x58c(r30)
    li r5, 0xa
    li r6, 0x0
    li r7, 0x0
    stfs f1, 0x155c(r30)
    li r8, 0x1
    stw r31, 0x15fc(r30)
    stw r0, 0x3fc(r30)
    stfs f0, 0x2fc(r30)
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    mr r3, r30
    li r4, 0x6
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r30)
    mr r3, r30
    bl fn_802A42CC
    lwz r3, 0x1570(r30)
    addi r5, r1, 0x8
    lfs f0, 0x530(r30)
    addi r4, r30, 0x1560
    lfs f4, 0xc(r3)
    lfs f5, 0x8(r3)
    lfs f3, 0x4(r3)
    fsubs f2, f4, f0
    lfs f4, 0x52c(r30)
    lfs f0, 0x528(r30)
    fsubs f4, f5, f4
    stfs f2, 0x1568(r30)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stw r31, 0x1610(r30)
    stw r31, 0x1630(r30)
    stw r31, 0x1634(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    stfs f2, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802A36B0(void)
{
    nofralloc
    lwz r3, 0x48(r3)
    blr
}

asm void fn_802A36B8(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    stw r31, 0x1dc(r1)
    stw r30, 0x1d8(r1)
    mr r30, r3
    stw r29, 0x1d4(r1)
    lwz r0, 0x14f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802A36B8_00001254
    li r3, 0x1
    b lbl_fn_802A36B8_000018B4
lbl_fn_802A36B8_00001254:
    lwz r0, 0x15c4(r3)
    cmpwi r0, 0x78
    blt lbl_fn_802A36B8_00001268
    li r3, 0x1
    b lbl_fn_802A36B8_000018B4
lbl_fn_802A36B8_00001268:
    cmpwi r0, 0x21
    blt lbl_fn_802A36B8_0000183C
    lfs f8, lbl_80883D28
    addi r31, r1, 0x198
    lfs f0, lbl_80883D30
    lfs f7, lbl_80883D84
    stfs f8, 0x54(r1)
    stfs f8, 0x58(r1)
    stfs f7, 0x5c(r1)
    stfs f8, 0x1c4(r1)
    stfs f8, 0x1bc(r1)
    stfs f8, 0x1b8(r1)
    stfs f8, 0x1b4(r1)
    stfs f8, 0x1b0(r1)
    stfs f8, 0x1a8(r1)
    stfs f8, 0x1a4(r1)
    stfs f8, 0x1a0(r1)
    stfs f8, 0x19c(r1)
    stfs f0, 0x1c0(r1)
    stfs f0, 0x1ac(r1)
    stfs f0, 0x198(r1)
    lfs f1, 0x15e4(r3)
    fcmpu cr0, f8, f1
    beq lbl_fn_802A36B8_00001318
    addi r3, r1, 0xa8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0xa8
    addi r5, r1, 0x78
    bl fn_805F89F0
    addi r3, r1, 0x78
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
lbl_fn_802A36B8_00001318:
    lfs f0, lbl_80883D28
    lfs f1, 0x15e0(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_802A36B8_00001378
    addi r3, r1, 0x108
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x108
    addi r5, r1, 0xd8
    bl fn_805F89F0
    addi r3, r1, 0xd8
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
lbl_fn_802A36B8_00001378:
    lfs f0, lbl_80883D28
    lfs f1, 0x15dc(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_802A36B8_000013D8
    addi r3, r1, 0x168
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x168
    addi r5, r1, 0x138
    bl fn_805F89F0
    addi r3, r1, 0x138
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
lbl_fn_802A36B8_000013D8:
    addi r4, r1, 0x54
    addi r3, r1, 0x198
    mr r5, r4
    bl fn_805F93C0
    lwz r4, 0x15c4(r30)
    lis r0, 0x4330
    stw r0, 0x1c8(r1)
    lis r3, lbl_80745C50@ha
    subi r0, r4, 0x21
    lfd f8, lbl_80745C50@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x1cc(r1)
    lfs f0, 0x5c(r1)
    li r0, -0x1
    lfd f7, 0x1c8(r1)
    mr r4, r30
    lfs f10, 0x58(r1)
    addi r7, r1, 0x48
    fsubs f11, f7, f8
    lfs f9, 0x54(r1)
    lfs f8, 0x15d8(r30)
    addi r8, r30, 0x534
    lfs f7, 0x15d4(r30)
    li r9, 0x0
    fmuls f12, f0, f11
    lfs f0, 0x15d0(r30)
    fmuls f10, f10, f11
    lwz r3, lbl_8087F048
    fmuls f9, f9, f11
    stfs f12, 0x34(r1)
    fadds f8, f8, f12
    stfs f9, 0x2c(r1)
    fadds f7, f7, f10
    lfs f1, lbl_80883D28
    fadds f0, f0, f9
    stfs f8, 0x50(r1)
    stfs f0, 0x48(r1)
    li r10, 0x1e
    lfs f2, lbl_80883D30
    stfs f7, 0x4c(r1)
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stfs f10, 0x30(r1)
    lwz r5, 0x14f4(r30)
    lwz r6, 0x15cc(r30)
    bl fn_800FAB80
    lwz r0, 0x15f0(r30)
    addi r4, r1, 0x48
    lwz r31, 0x15f4(r30)
    addi r5, r1, 0x3c
    psq_l f1, 0x0(r4), 0, 0
    lwz r3, 0x15c4(r30)
    cmplw r0, r31
    lfs f2, 0x50(r1)
    addi r4, r3, 0x1
    stw r4, 0x38(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x44(r1)
    bge lbl_fn_802A36B8_000014F4
    lwz r3, 0x15ec(r30)
    slwi r0, r0, 4
    add. r3, r3, r0
    beq lbl_fn_802A36B8_000014E4
    stw r4, 0x0(r3)
    frsp f2, f2
    psq_st f1, 0x4(r3), 0, 0
    stfs f2, 0xc(r3)
lbl_fn_802A36B8_000014E4:
    lwz r3, 0x15f0(r30)
    addi r0, r3, 0x1
    stw r0, 0x15f0(r30)
    b lbl_fn_802A36B8_000017F0
lbl_fn_802A36B8_000014F4:
    lis r3, 0x1000
    li r4, 0x1
    subi r0, r3, 0x1
    stw r4, 0x10(r1)
    subf r0, r31, r0
    cmplwi r0, 0x1
    bge lbl_fn_802A36B8_00001534
    lis r4, lbl_80745C70@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80745C70@l
    addi r3, r3, __files@l
    addi r4, r4, 0x221
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802A36B8_00001534:
    lis r3, 0x555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_802A36B8_0000156C
    addi r4, r31, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x18(r1)
    cmplwi r0, 0x1
    b lbl_fn_802A36B8_0000158C
lbl_fn_802A36B8_0000156C:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_802A36B8_0000158C
    addi r0, r31, 0x1
    srwi r0, r0, 1
    stw r0, 0x14(r1)
    cmplwi r0, 0x1
lbl_fn_802A36B8_0000158C:
    lwz r4, 0x15f0(r30)
    li r5, 0x0
    lis r3, 0x1000
    lwz r31, 0x15f4(r30)
    subi r0, r3, 0x1
    addi r4, r4, 0x1
    subf r3, r31, r4
    addi r6, r30, 0x15f4
    subf r0, r31, r0
    stw r5, 0x60(r1)
    cmplw r3, r0
    stw r5, 0x64(r1)
    stw r5, 0x68(r1)
    stw r6, 0x6c(r1)
    stw r5, 0x70(r1)
    stw r3, 0x24(r1)
    ble lbl_fn_802A36B8_000015F4
    lis r4, lbl_80745C70@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80745C70@l
    addi r3, r3, __files@l
    addi r4, r4, 0x221
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802A36B8_000015F4:
    lis r3, 0x555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_802A36B8_00001644
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x24(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x1c
    srwi r4, r4, 2
    stw r4, 0x1c(r1)
    cmplw r4, r0
    bge lbl_fn_802A36B8_00001638
    addi r3, r1, 0x24
lbl_fn_802A36B8_00001638:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_802A36B8_00001688
lbl_fn_802A36B8_00001644:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_802A36B8_00001680
    addi r3, r31, 0x1
    lwz r0, 0x24(r1)
    srwi r3, r3, 1
    stw r3, 0x20(r1)
    cmplw r3, r0
    addi r3, r1, 0x20
    bge lbl_fn_802A36B8_00001674
    addi r3, r1, 0x24
lbl_fn_802A36B8_00001674:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_802A36B8_00001688
lbl_fn_802A36B8_00001680:
    lis r3, 0x1000
    subi r31, r3, 0x1
lbl_fn_802A36B8_00001688:
    lis r3, 0x1000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_802A36B8_000016BC
    lis r4, lbl_80745C70@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80745C70@l
    addi r3, r3, __files@l
    addi r4, r4, 0x221
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802A36B8_000016BC:
    slwi r3, r31, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_802A36B8_000016F0
    lis r3, __files@ha
    lis r4, lbl_80785C98@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80785C98@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802A36B8_000016F0:
    lwz r5, 0x15f0(r30)
    addi r6, r1, 0x3c
    lwz r0, 0x64(r1)
    slwi r3, r5, 4
    stw r29, 0x60(r1)
    slwi r4, r0, 4
    lwz r0, 0x38(r1)
    add r3, r29, r3
    stw r31, 0x68(r1)
    add. r3, r4, r3
    stw r5, 0x70(r1)
    beq lbl_fn_802A36B8_00001734
    stw r0, 0x0(r3)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x44(r1)
    stfs f2, 0xc(r3)
lbl_fn_802A36B8_00001734:
    lwz r4, 0x64(r1)
    lwz r0, 0x70(r1)
    addi r5, r4, 0x1
    lwz r3, 0x15f0(r30)
    lwz r7, 0x15ec(r30)
    slwi r0, r0, 4
    slwi r4, r3, 4
    lwz r3, 0x60(r1)
    stw r5, 0x64(r1)
    add r6, r7, r4
    add r5, r3, r0
    b lbl_fn_802A36B8_000017A0
lbl_fn_802A36B8_00001764:
    subic. r5, r5, 0x10
    subi r6, r6, 0x10
    beq lbl_fn_802A36B8_00001788
    lwz r0, 0x0(r6)
    stw r0, 0x0(r5)
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
lbl_fn_802A36B8_00001788:
    lwz r4, 0x70(r1)
    lwz r3, 0x64(r1)
    subi r0, r4, 0x1
    stw r0, 0x70(r1)
    addi r0, r3, 0x1
    stw r0, 0x64(r1)
lbl_fn_802A36B8_000017A0:
    cmplw r7, r6
    blt lbl_fn_802A36B8_00001764
    addic. r0, r1, 0x60
    lwz r0, 0x64(r1)
    lwz r7, 0x15f4(r30)
    li r6, 0x0
    lwz r5, 0x68(r1)
    lwz r3, 0x15ec(r30)
    lwz r4, 0x60(r1)
    stw r5, 0x15f4(r30)
    stw r7, 0x68(r1)
    stw r4, 0x15ec(r30)
    stw r3, 0x60(r1)
    stw r0, 0x15f0(r30)
    stw r6, 0x64(r1)
    beq lbl_fn_802A36B8_000017F0
    cmpwi r3, 0x0
    beq lbl_fn_802A36B8_000017F0
    stw r6, 0x64(r1)
    bl dtor_80084684
lbl_fn_802A36B8_000017F0:
    lwz r3, 0x15c4(r30)
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add. r0, r0, r3
    bne lbl_fn_802A36B8_0000183C
    lis r4, lbl_80745C70@ha
    lfs f1, lbl_80883D30
    addi r4, r4, lbl_80745C70@l
    addi r3, r1, 0x28
    addi r4, r4, 0x282
    addi r5, r1, 0x48
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x28
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_802A36B8_0000183C:
    lfs f7, lbl_80883DDC
    li r7, 0x0
    lfs f0, lbl_80883D60
    li r6, 0x0
    li r3, 0x1
    b lbl_fn_802A36B8_00001898
lbl_fn_802A36B8_00001854:
    lwz r4, 0x15ec(r30)
    lwz r5, 0x15c4(r30)
    lwzx r0, r4, r6
    cmpw r5, r0
    bne lbl_fn_802A36B8_00001890
    lwz r5, lbl_8087F430
    lwz r0, 0x96c(r5)
    srwi r4, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r4
    subf r0, r4, r0
    stw r0, 0x96c(r5)
    stw r3, 0x970(r5)
    stfs f7, 0x974(r5)
    stfs f0, 0x978(r5)
lbl_fn_802A36B8_00001890:
    addi r6, r6, 0x10
    addi r7, r7, 0x1
lbl_fn_802A36B8_00001898:
    lwz r0, 0x15f0(r30)
    cmplw r7, r0
    blt lbl_fn_802A36B8_00001854
    lwz r4, 0x15c4(r30)
    li r3, 0x0
    addi r0, r4, 0x1
    stw r0, 0x15c4(r30)
lbl_fn_802A36B8_000018B4:
    lwz r0, 0x1e4(r1)
    lwz r31, 0x1dc(r1)
    lwz r30, 0x1d8(r1)
    lwz r29, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}

asm void fn_802A3D64(void)
{
    nofralloc
    li r4, 0x7a
    b fn_805F8E70
}

asm void fn_802A3D6C(void)
{
    nofralloc
    neg r0, r4
    stw r4, 0x15f8(r3)
    or r0, r0, r4
    srwi r3, r0, 31
    blr
}

asm void fn_802A3D80(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    addi r11, r1, 0x180
    stfd f31, 0x1b0(r1)
    psq_st f31, 0x1b8(r1), 0, 0
    stfd f30, 0x1a0(r1)
    psq_st f30, 0x1a8(r1), 0, 0
    stfd f29, 0x190(r1)
    psq_st f29, 0x198(r1), 0, 0
    stfd f28, 0x180(r1)
    psq_st f28, 0x188(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x14e8(r3)
    mr r27, r3
    mr r28, r4
    cmpwi r0, 0x0
    beq lbl_fn_802A3D80_00001BC8
    bl fn_8000D9E8
    bl fn_802A4168
    addi r3, r1, 0x38
    bl fn_802A4170
    cmpwi r28, 0x0
    beq lbl_fn_802A3D80_00001968
    bl fn_8000D9E8
    bl fn_8000DCF4
    stw r3, 0x8(r1)
    addi r3, r1, 0x38
    addi r4, r1, 0x8
    bl fn_80244FC0
    b lbl_fn_802A3D80_00001A08
lbl_fn_802A3D80_00001968:
    bl fn_8000D9E8
    bl fn_802A36B0
    stw r3, 0x10(r1)
    b lbl_fn_802A3D80_0000199C
lbl_fn_802A3D80_00001978:
    bl fn_8013C480
    cmpwi r3, 0x0
    beq lbl_fn_802A3D80_00001990
    addi r3, r1, 0x38
    addi r4, r1, 0x10
    bl fn_80244FC0
lbl_fn_802A3D80_00001990:
    lwz r3, 0x10(r1)
    bl fn_802A4094
    stw r3, 0x10(r1)
lbl_fn_802A3D80_0000199C:
    cmpwi r3, 0x0
    bne lbl_fn_802A3D80_00001978
    bl fn_801A03E0
    bl fn_801A0408
    stw r3, 0xc(r1)
    b lbl_fn_802A3D80_00001A00
lbl_fn_802A3D80_000019B4:
    bl fn_8013C480
    cmpwi r3, 0x0
    beq lbl_fn_802A3D80_000019F4
    lwz r3, 0xc(r1)
    mr r4, r27
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_802A3D80_000019F4
    lwz r3, 0xc(r1)
    bl fn_802A409C
    cmpwi r3, 0x0
    beq lbl_fn_802A3D80_000019F4
    addi r3, r1, 0x38
    addi r4, r1, 0xc
    bl fn_80244FC0
lbl_fn_802A3D80_000019F4:
    lwz r3, 0xc(r1)
    bl fn_801A03EC
    stw r3, 0xc(r1)
lbl_fn_802A3D80_00001A00:
    cmpwi r3, 0x0
    bne lbl_fn_802A3D80_000019B4
lbl_fn_802A3D80_00001A08:
    addi r3, r1, 0x38
    bl fn_800E0AA8
    lis r3, lbl_80745C50@ha
    lis r30, lbl_80745C70@ha
    lfs f29, lbl_80883D6C
    addi r30, r30, lbl_80745C70@l
    lfs f30, lbl_80883E1C
    li r29, 0x0
    lfd f31, lbl_80745C50@l(r3)
    lis r31, 0x4330
    b lbl_fn_802A3D80_00001BAC
lbl_fn_802A3D80_00001A34:
    mr r4, r29
    addi r3, r1, 0x38
    bl fn_802A4184
    lwz r28, 0x0(r3)
    mr r3, r27
    bl fn_8000DD0C
    addi r4, r30, 0x277
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x2c
    bl fn_8000D0F8
    lfs f1, lbl_80883D28
    addi r3, r1, 0x20
    lfs f3, lbl_80883D84
    fmr f2, f1
    bl fn_8000D114
    addi r3, r1, 0x108
    addi r4, r27, 0x534
    bl fn_800109E0
    addi r3, r1, 0x20
    addi r4, r1, 0x108
    bl fn_80011410
    mr r3, r27
    bl fn_8000DD0C
    addi r4, r30, 0x277
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0xd8
    bl fn_8001336C
    addi r3, r1, 0x20
    addi r4, r1, 0xd8
    bl fn_80011410
    addi r3, r1, 0x2c
    addi r4, r1, 0x20
    bl fn_80012C88
    lfs f1, lbl_80883D28
    lfs f2, lbl_80883E14
    bl fn_802A40A8
    fmr f28, f1
    lfs f1, lbl_80883D28
    lfs f3, lbl_80883D6C
    addi r3, r1, 0x14
    fmr f2, f1
    bl fn_8000D114
    lfs f1, lbl_80883E18
    bl fn_801125F8
    addi r3, r1, 0xa8
    bl fn_8013A13C
    addi r3, r1, 0x14
    addi r4, r1, 0xa8
    bl fn_80011410
    fmr f1, f28
    bl fn_801125F8
    addi r3, r1, 0x78
    bl fn_802A3D64
    addi r3, r1, 0x14
    addi r4, r1, 0x78
    bl fn_80011410
    addi r3, r1, 0x48
    addi r4, r27, 0x534
    bl fn_800109E0
    addi r3, r1, 0x14
    addi r4, r1, 0x48
    bl fn_80011410
    addi r3, r1, 0x138
    bl fn_802A4120
    stw r28, 0x138(r1)
    stfs f29, 0x150(r1)
    stfs f30, 0x13c(r1)
    lfs f0, 0x1690(r27)
    stfs f0, 0x144(r1)
    lwz r3, 0x14e8(r27)
    stw r31, 0x160(r1)
    lwz r0, 0x5c(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f31
    stfs f0, 0x14c(r1)
    lfs f1, 0x1694(r27)
    bl fn_801125F8
    stfs f1, 0x148(r1)
    bl fn_8013A194
    lwz r5, 0x14e8(r27)
    mr r4, r27
    lfs f1, lbl_80883D28
    addi r6, r1, 0x2c
    lfs f2, lbl_80883D30
    addi r7, r1, 0x14
    addi r8, r1, 0x138
    li r9, 0x104
    li r10, 0x0
    bl fn_800F8574
    addi r29, r29, 0x1
lbl_fn_802A3D80_00001BAC:
    addi r3, r1, 0x38
    bl fn_800E0AA8
    cmplw r29, r3
    blt lbl_fn_802A3D80_00001A34
    addi r3, r1, 0x38
    li r4, -0x1
    bl fn_80244674
lbl_fn_802A3D80_00001BC8:
    addi r11, r1, 0x180
    psq_l f31, 0x1b8(r1), 0, 0
    lfd f31, 0x1b0(r1)
    psq_l f30, 0x1a8(r1), 0, 0
    lfd f30, 0x1a0(r1)
    psq_l f29, 0x198(r1), 0, 0
    lfd f29, 0x190(r1)
    psq_l f28, 0x188(r1), 0, 0
    lfd f28, 0x180(r1)
    bl _restgpr_27
    lwz r0, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}
