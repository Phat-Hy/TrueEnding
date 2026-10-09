#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8000D3A4(void);
extern void fn_8001047C(void);
extern void fn_80011034(void);
extern void fn_80013338(void);
extern void fn_8004D124(void);
extern void fn_80059468(void);
extern void fn_80097C08(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB5C8(void);
extern void fn_800DD3FC(void);
extern void fn_800EB7A0(void);
extern void fn_800F7FD8(void);
extern void fn_800F8548(void);
extern void fn_80109828(void);
extern void fn_8012A1B8(void);
extern void fn_8013C38C(void);
extern void fn_8015495C(void);
extern void fn_8015AC48(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_80178A6C(void);
extern void fn_80232B7C(void);
extern void fn_80237518(void);
extern void fn_80237654(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_802A7910(void);
extern void fn_802A7964(void);
extern void fn_802AC550(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_805A3C58(void);
extern void fn_805A3D6C(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_806958E0(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80745FC8[];
extern u8 lbl_80745FD0[];
extern u8 lbl_80745FE4[];
extern u8 lbl_807462A8[];
extern u8 lbl_80785F0C[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_808813D0;
extern u32 lbl_80883E38;
extern u32 lbl_80883E40;
extern u32 lbl_80883E44;
extern u32 lbl_80883E50;
extern u32 lbl_80883E60;
extern u32 lbl_80883E90;
extern u32 lbl_80883E94;
extern u32 lbl_80883E98;
extern u32 lbl_80883E9C;
extern u32 lbl_80883EA0;
extern u32 lbl_80883EA4;
extern u32 lbl_80883EA8;
extern u32 lbl_80883EC0;
extern u32 lbl_80883ED4;
extern u32 lbl_80883F10;
extern u32 lbl_80883F14;
extern u32 lbl_80883F18;
extern u32 lbl_80883F1C;
extern u32 lbl_80883F20;
extern u32 lbl_80883F24;
extern u32 lbl_80883F28;
extern u32 lbl_80883F30;
extern u32 lbl_80883F34;
extern u32 lbl_80883F38;
extern u32 lbl_80883F3C;
extern u32 lbl_80883F40;
extern u32 lbl_80883F44;

/* Function declarations */
void fn_802AABD8(void);
void fn_802AAF2C(void);
void fn_802AB280(void);
void fn_802AB354(void);
void fn_802AB42C(void);
void fn_802AB510(void);
void fn_802AB5E8(void);
void fn_802AB794(void);
void fn_802AB97C(void);
void fn_802ABC50(void);
void fn_802ABF6C(void);
void fn_802AC0E0(void);
void fn_802AC364(void);

asm void fn_802AABD8(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    li r4, 0x3
    stw r0, 0x124(r1)
    li r0, 0x7
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    li r31, 0x0
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    mr r29, r3
    stw r31, 0x14c0(r3)
    stw r0, 0x58c(r3)
    bl fn_8016E970
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f3, lbl_80883E44
    li r0, 0x1
    lfs f0, lbl_80883ED4
    li r4, 0x0
    stw r3, 0x590(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_80883E40
    li r5, 0x14
    stw r0, 0x3fc(r29)
    li r6, 0x1
    lfs f2, lbl_80883E50
    li r7, 0x0
    stfs f3, 0x2fc(r29)
    li r8, 0x1
    stfs f0, 0x2e8(r29)
    bl fn_80097C08
    addi r4, r29, 0x15d4
    lfs f2, 0x15dc(r29)
    addi r3, r1, 0x74
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r30, r1, 0x20
    lfs f0, 0x530(r29)
    addi r5, r1, 0x8
    lfs f5, 0x78(r1)
    mr r3, r30
    fsubs f6, f2, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x74(r1)
    mr r4, r30
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f2, 0x7c(r1)
    fmr f2, f6
    stw r31, 0x14b8(r29)
    stfs f0, 0x8(r1)
    stfs f4, 0xc(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x10(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F98D0
    lfs f2, 0x28(r1)
    addi r31, r1, 0x14
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883E90
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x1c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802AABD8_00000144
    lfs f3, 0x14(r1)
    lfs f0, lbl_80883E40
    fcmpo cr0, f3, f0
    ble lbl_fn_802AABD8_00000138
    lfs f0, lbl_80883E94
    b lbl_fn_802AABD8_0000013C
lbl_fn_802AABD8_00000138:
    lfs f0, lbl_80883E98
lbl_fn_802AABD8_0000013C:
    stfs f0, 0x30(r1)
    b lbl_fn_802AABD8_00000158
lbl_fn_802AABD8_00000144:
    frsp f2, f2
    lfs f1, 0x14(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x30(r1)
lbl_fn_802AABD8_00000158:
    lfs f0, 0x30(r1)
    addi r3, r1, 0xc0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883E40
    addi r4, r1, 0x38
    lfs f4, 0xc8(r1)
    mr r5, r4
    lfs f5, 0xc4(r1)
    addi r3, r1, 0x80
    lfs f6, 0xc0(r1)
    lfs f7, 0xd8(r1)
    lfs f8, 0xd4(r1)
    lfs f9, 0xd0(r1)
    lfs f10, 0xe8(r1)
    lfs f11, 0xe4(r1)
    lfs f12, 0xe0(r1)
    lfs f13, 0xec(r1)
    lfs f31, 0xdc(r1)
    lfs f30, 0xcc(r1)
    lfs f0, lbl_80883E44
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x1c(r1)
    stfs f3, 0xb0(r1)
    stfs f3, 0xb4(r1)
    stfs f3, 0xb8(r1)
    stfs f0, 0xbc(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f6, 0x80(r1)
    stfs f5, 0x84(r1)
    stfs f4, 0x88(r1)
    stfs f9, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f9, 0x90(r1)
    stfs f8, 0x94(r1)
    stfs f7, 0x98(r1)
    stfs f12, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f10, 0x58(r1)
    stfs f12, 0xa0(r1)
    stfs f11, 0xa4(r1)
    stfs f10, 0xa8(r1)
    stfs f30, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f30, 0x8c(r1)
    stfs f31, 0x9c(r1)
    stfs f13, 0xac(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883E90
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802AABD8_00000274
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883E40
    fcmpo cr0, f3, f0
    ble lbl_fn_802AABD8_00000264
    lfs f0, lbl_80883E94
    b lbl_fn_802AABD8_00000268
lbl_fn_802AABD8_00000264:
    lfs f0, lbl_80883E98
lbl_fn_802AABD8_00000268:
    fneg f0, f0
    stfs f0, 0x2c(r1)
    b lbl_fn_802AABD8_00000288
lbl_fn_802AABD8_00000274:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x2c(r1)
lbl_fn_802AABD8_00000288:
    addi r3, r1, 0x2c
    lfs f2, lbl_80883E40
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80745FD0@ha
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, 0x538(r29)
    lfs f3, 0x18(r1)
    stfs f2, 0x1c(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80883E9C
    stfs f2, 0x34(r1)
    lfd f2, lbl_80745FD0@l(r3)
    fmuls f1, f0, f3
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80883EA0
    fcmpo cr0, f3, f0
    ble lbl_fn_802AABD8_000002D8
    lfs f0, lbl_80883EA4
    fsubs f3, f3, f0
lbl_fn_802AABD8_000002D8:
    lfs f0, lbl_80883EA8
    fcmpo cr0, f3, f0
    bge lbl_fn_802AABD8_000002EC
    lfs f0, lbl_80883EA4
    fadds f3, f3, f0
lbl_fn_802AABD8_000002EC:
    lfs f0, lbl_80883E40
    fcmpo cr0, f3, f0
    bge lbl_fn_802AABD8_00000314
    fneg f3, f3
    lfs f0, lbl_80883E38
    li r0, 0x0
    stw r0, 0x15ec(r29)
    fmuls f0, f3, f0
    stfs f0, 0x15e8(r29)
    b lbl_fn_802AABD8_00000328
lbl_fn_802AABD8_00000314:
    lfs f0, lbl_80883E38
    li r0, 0x1
    stw r0, 0x15ec(r29)
    fmuls f0, f3, f0
    stfs f0, 0x15e8(r29)
lbl_fn_802AABD8_00000328:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_802AAF2C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    li r4, 0x3
    stw r0, 0x124(r1)
    li r0, 0x8
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    li r31, 0x0
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    mr r29, r3
    stw r31, 0x14c0(r3)
    stw r0, 0x58c(r3)
    bl fn_8016E970
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f3, lbl_80883E44
    li r0, 0x1
    lfs f0, lbl_80883ED4
    li r4, 0x0
    stw r3, 0x590(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_80883E40
    li r5, 0x1c7
    stw r0, 0x3fc(r29)
    li r6, 0x1
    lfs f2, lbl_80883E50
    li r7, 0x0
    stfs f3, 0x2fc(r29)
    li r8, 0x1
    stfs f0, 0x2e8(r29)
    bl fn_80097C08
    addi r4, r29, 0x15d4
    lfs f2, 0x15dc(r29)
    addi r3, r1, 0x74
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r30, r1, 0x20
    lfs f0, 0x530(r29)
    addi r5, r1, 0x8
    lfs f5, 0x78(r1)
    mr r3, r30
    fsubs f6, f2, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x74(r1)
    mr r4, r30
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f2, 0x7c(r1)
    fmr f2, f6
    stw r31, 0x14b8(r29)
    stfs f0, 0x8(r1)
    stfs f4, 0xc(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x10(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F98D0
    lfs f2, 0x28(r1)
    addi r31, r1, 0x14
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883E90
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x1c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802AAF2C_00000498
    lfs f3, 0x14(r1)
    lfs f0, lbl_80883E40
    fcmpo cr0, f3, f0
    ble lbl_fn_802AAF2C_0000048C
    lfs f0, lbl_80883E94
    b lbl_fn_802AAF2C_00000490
lbl_fn_802AAF2C_0000048C:
    lfs f0, lbl_80883E98
lbl_fn_802AAF2C_00000490:
    stfs f0, 0x30(r1)
    b lbl_fn_802AAF2C_000004AC
lbl_fn_802AAF2C_00000498:
    frsp f2, f2
    lfs f1, 0x14(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x30(r1)
lbl_fn_802AAF2C_000004AC:
    lfs f0, 0x30(r1)
    addi r3, r1, 0xc0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883E40
    addi r4, r1, 0x38
    lfs f4, 0xc8(r1)
    mr r5, r4
    lfs f5, 0xc4(r1)
    addi r3, r1, 0x80
    lfs f6, 0xc0(r1)
    lfs f7, 0xd8(r1)
    lfs f8, 0xd4(r1)
    lfs f9, 0xd0(r1)
    lfs f10, 0xe8(r1)
    lfs f11, 0xe4(r1)
    lfs f12, 0xe0(r1)
    lfs f13, 0xec(r1)
    lfs f31, 0xdc(r1)
    lfs f30, 0xcc(r1)
    lfs f0, lbl_80883E44
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x1c(r1)
    stfs f3, 0xb0(r1)
    stfs f3, 0xb4(r1)
    stfs f3, 0xb8(r1)
    stfs f0, 0xbc(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f6, 0x80(r1)
    stfs f5, 0x84(r1)
    stfs f4, 0x88(r1)
    stfs f9, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f9, 0x90(r1)
    stfs f8, 0x94(r1)
    stfs f7, 0x98(r1)
    stfs f12, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f10, 0x58(r1)
    stfs f12, 0xa0(r1)
    stfs f11, 0xa4(r1)
    stfs f10, 0xa8(r1)
    stfs f30, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f30, 0x8c(r1)
    stfs f31, 0x9c(r1)
    stfs f13, 0xac(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883E90
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802AAF2C_000005C8
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883E40
    fcmpo cr0, f3, f0
    ble lbl_fn_802AAF2C_000005B8
    lfs f0, lbl_80883E94
    b lbl_fn_802AAF2C_000005BC
lbl_fn_802AAF2C_000005B8:
    lfs f0, lbl_80883E98
lbl_fn_802AAF2C_000005BC:
    fneg f0, f0
    stfs f0, 0x2c(r1)
    b lbl_fn_802AAF2C_000005DC
lbl_fn_802AAF2C_000005C8:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x2c(r1)
lbl_fn_802AAF2C_000005DC:
    addi r3, r1, 0x2c
    lfs f2, lbl_80883E40
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80745FD0@ha
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, 0x538(r29)
    lfs f3, 0x18(r1)
    stfs f2, 0x1c(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80883E9C
    stfs f2, 0x34(r1)
    lfd f2, lbl_80745FD0@l(r3)
    fmuls f1, f0, f3
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80883EA0
    fcmpo cr0, f3, f0
    ble lbl_fn_802AAF2C_0000062C
    lfs f0, lbl_80883EA4
    fsubs f3, f3, f0
lbl_fn_802AAF2C_0000062C:
    lfs f0, lbl_80883EA8
    fcmpo cr0, f3, f0
    bge lbl_fn_802AAF2C_00000640
    lfs f0, lbl_80883EA4
    fadds f3, f3, f0
lbl_fn_802AAF2C_00000640:
    lfs f0, lbl_80883E40
    fcmpo cr0, f3, f0
    bge lbl_fn_802AAF2C_00000668
    fneg f3, f3
    lfs f0, lbl_80883E38
    li r0, 0x0
    stw r0, 0x15ec(r29)
    fmuls f0, f3, f0
    stfs f0, 0x15e8(r29)
    b lbl_fn_802AAF2C_0000067C
lbl_fn_802AAF2C_00000668:
    lfs f0, lbl_80883E38
    li r0, 0x1
    stw r0, 0x15ec(r29)
    fmuls f0, f3, f0
    stfs f0, 0x15e8(r29)
lbl_fn_802AAF2C_0000067C:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_802AB280(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    li r0, 0x9
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x14c0(r3)
    li r4, 0x6
    stw r0, 0x58c(r3)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f3, lbl_80883E44
    li r0, 0x1
    lfs f0, lbl_80883F10
    li r4, 0x0
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883E40
    li r5, 0x156
    stw r0, 0x3fc(r31)
    li r6, 0x0
    lfs f2, lbl_80883E50
    li r7, 0x0
    stfs f3, 0x2fc(r31)
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r3, 0x1694(r31)
    lwz r0, 0x16ec(r31)
    clrrwi r6, r3, 1
    lwz r4, 0x1744(r31)
    clrrwi r5, r0, 1
    lwz r3, 0x179c(r31)
    lwz r0, 0x17f4(r31)
    clrrwi r4, r4, 1
    clrrwi r3, r3, 1
    stw r6, 0x1694(r31)
    clrrwi r0, r0, 1
    stw r5, 0x16ec(r31)
    stw r4, 0x1744(r31)
    stw r3, 0x179c(r31)
    stw r0, 0x17f4(r31)
    lwz r3, lbl_8087EE98
    bl fn_8004D124
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802AB354(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x214(r1)
    li r0, 0xa
    stw r31, 0x20c(r1)
    mr r31, r3
    stw r4, 0x14c0(r3)
    li r4, 0x6
    stw r0, 0x58c(r3)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f3, lbl_80883E44
    li r0, 0x1
    lfs f0, lbl_80883E38
    li r4, 0x0
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883E40
    li r5, 0x14a
    stw r0, 0x3fc(r31)
    li r6, 0x0
    lfs f2, lbl_80883E50
    li r7, 0x0
    stfs f3, 0x2fc(r31)
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0x38c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802AB354_00000820
    b lbl_fn_802AB354_00000824
lbl_fn_802AB354_00000820:
    la r4, lbl_808813D0
lbl_fn_802AB354_00000824:
    lwz r5, 0x60(r31)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x8
    bl fn_80109828
    lwz r0, 0x214(r1)
    lwz r31, 0x20c(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_802AB42C(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    li r4, 0x6
    stw r0, 0x214(r1)
    li r0, 0xe
    stw r31, 0x20c(r1)
    li r31, 0x0
    stw r30, 0x208(r1)
    mr r30, r3
    stw r31, 0x14c0(r3)
    stw r0, 0x58c(r3)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f3, lbl_80883E44
    li r0, 0x1
    lfs f0, lbl_80883E38
    li r4, 0x0
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883E40
    li r5, 0x1c7
    stw r0, 0x3fc(r30)
    li r6, 0x1
    lfs f2, lbl_80883E50
    li r7, 0x0
    stfs f3, 0x2fc(r30)
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    stw r31, 0x14b8(r30)
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0x3a4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802AB42C_00000900
    b lbl_fn_802AB42C_00000904
lbl_fn_802AB42C_00000900:
    la r4, lbl_808813D0
lbl_fn_802AB42C_00000904:
    lwz r5, 0x60(r30)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x8
    bl fn_80109828
    lwz r0, 0x214(r1)
    lwz r31, 0x20c(r1)
    lwz r30, 0x208(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_802AB510(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x24(r1)
    li r0, 0xf
    stw r31, 0x1c(r1)
    mr r31, r4
    li r4, 0x6
    stw r30, 0x18(r1)
    mr r30, r3
    stw r5, 0x14c0(r3)
    stw r0, 0x58c(r3)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883E44
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883E40
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x13f
    lfs f2, lbl_80883E50
    li r6, 0x0
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lis r4, lbl_80745FE4@ha
    lfs f1, lbl_80883E44
    addi r4, r4, lbl_80745FE4@l
    addi r3, r1, 0x8
    addi r4, r4, 0x239
    addi r5, r30, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r30, 0x1538
    addi r4, r1, 0x8
    bl fn_800CB440
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    stw r31, 0x14f8(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802AB5E8(void)
{
    nofralloc
    stwu r1, -0x250(r1)
    mflr r0
    li r4, 0x6
    stw r0, 0x254(r1)
    li r0, 0x11
    stw r31, 0x24c(r1)
    mr r31, r3
    stw r30, 0x248(r1)
    stw r29, 0x244(r1)
    li r29, 0x0
    stw r29, 0x14c0(r3)
    stw r0, 0x58c(r3)
    bl fn_8016E970
    lfs f0, lbl_80883E44
    li r0, 0x4
    li r30, 0x1
    stw r0, 0x560(r31)
    lfs f1, lbl_80883E40
    addi r3, r31, 0xb0
    stw r30, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_80883E50
    li r5, 0x140
    stfs f0, 0x2fc(r31)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r0, 0x1648(r31)
    cmpwi r0, 0x0
    ble lbl_fn_802AB5E8_00000BA0
    lwz r5, lbl_8087F3C0
    mr r3, r31
    li r4, 0x66
    stw r30, 0xc4(r5)
    lwz r5, lbl_8087F3C0
    stw r30, 0xc8(r5)
    bl fn_80232B7C
    lfs f0, lbl_80883E40
    li r0, -0x1
    lfs f1, lbl_80883E44
    addi r4, r31, 0x1514
    stfs f0, 0x1c(r1)
    addi r5, r31, 0xb0
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
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r5, lbl_8087F3C0
    addi r3, r1, 0x38
    li r4, 0x0
    stw r29, 0xc4(r5)
    li r5, 0x200
    lwz r6, lbl_8087F3C0
    stw r29, 0xc8(r6)
    lwz r6, 0x1694(r31)
    lwz r0, 0x16ec(r31)
    clrrwi r9, r6, 1
    lwz r7, 0x1744(r31)
    clrrwi r8, r0, 1
    lwz r6, 0x179c(r31)
    lwz r0, 0x17f4(r31)
    clrrwi r7, r7, 1
    clrrwi r6, r6, 1
    stw r9, 0x1694(r31)
    clrrwi r0, r0, 1
    stw r8, 0x16ec(r31)
    stw r7, 0x1744(r31)
    stw r6, 0x179c(r31)
    stw r0, 0x17f4(r31)
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x38
    lwz r4, 0x3ac(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802AB5E8_00000B80
    b lbl_fn_802AB5E8_00000B84
lbl_fn_802AB5E8_00000B80:
    la r4, lbl_808813D0
lbl_fn_802AB5E8_00000B84:
    lwz r5, 0x60(r31)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x38
    bl fn_80109828
lbl_fn_802AB5E8_00000BA0:
    lwz r0, 0x254(r1)
    lwz r31, 0x24c(r1)
    lwz r30, 0x248(r1)
    lwz r29, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x250
    blr
}

asm void fn_802AB794(void)
{
    nofralloc
    stwu r1, -0x250(r1)
    mflr r0
    li r4, 0x6
    stw r0, 0x254(r1)
    li r0, 0x10
    stw r31, 0x24c(r1)
    mr r31, r3
    stw r30, 0x248(r1)
    stw r29, 0x244(r1)
    li r29, 0x0
    stw r29, 0x14c0(r3)
    stw r0, 0x58c(r3)
    bl fn_8016E970
    lfs f0, lbl_80883E44
    li r0, 0x4
    li r30, 0x1
    stw r0, 0x560(r31)
    lfs f1, lbl_80883E40
    addi r3, r31, 0xb0
    stw r30, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_80883E50
    li r5, 0x140
    stfs f0, 0x2fc(r31)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r0, 0x1648(r31)
    cmpwi r0, 0x0
    ble lbl_fn_802AB794_00000D4C
    lwz r5, lbl_8087F3C0
    mr r3, r31
    li r4, 0x66
    stw r30, 0xc4(r5)
    lwz r5, lbl_8087F3C0
    stw r30, 0xc8(r5)
    bl fn_80232B7C
    lfs f0, lbl_80883E40
    li r0, -0x1
    lfs f1, lbl_80883E44
    addi r4, r31, 0x1514
    stfs f0, 0x1c(r1)
    addi r5, r31, 0xb0
    lwz r3, lbl_8087F3C0
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
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    bl fn_8023A8B4
    lwz r5, lbl_8087F3C0
    addi r3, r1, 0x38
    li r4, 0x0
    stw r29, 0xc4(r5)
    li r5, 0x200
    lwz r6, lbl_8087F3C0
    stw r29, 0xc8(r6)
    lwz r6, 0x1694(r31)
    lwz r0, 0x16ec(r31)
    clrrwi r9, r6, 1
    lwz r7, 0x1744(r31)
    clrrwi r8, r0, 1
    lwz r6, 0x179c(r31)
    lwz r0, 0x17f4(r31)
    clrrwi r7, r7, 1
    clrrwi r6, r6, 1
    stw r9, 0x1694(r31)
    clrrwi r0, r0, 1
    stw r8, 0x16ec(r31)
    stw r7, 0x1744(r31)
    stw r6, 0x179c(r31)
    stw r0, 0x17f4(r31)
    bl memset
    lwz r3, lbl_8087F1E4
    lwz r4, 0x3ac(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802AB794_00000D28
    b lbl_fn_802AB794_00000D2C
lbl_fn_802AB794_00000D28:
    la r4, lbl_808813D0
lbl_fn_802AB794_00000D2C:
    lwz r5, 0x60(r31)
    addi r3, r1, 0x38
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x38
    bl fn_80109828
lbl_fn_802AB794_00000D4C:
    lwz r29, 0x1580(r31)
    bl fn_80680CF8
    divwu r4, r3, r29
    addi r5, r31, 0x15d4
    li r0, 0x0
    mullw r4, r4, r29
    subf r3, r4, r3
    slwi r3, r3, 2
    add r3, r31, r3
    lwz r3, 0x1584(r3)
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x15dc(r31)
    psq_st f1, 0x0(r5), 0, 0
    stw r0, 0x15e0(r31)
    lwz r31, 0x24c(r1)
    lwz r30, 0x248(r1)
    lwz r29, 0x244(r1)
    lwz r0, 0x254(r1)
    mtlr r0
    addi r1, r1, 0x250
    blr
}

asm void fn_802AB97C(void)
{
    nofralloc
    stwu r1, -0x270(r1)
    mflr r0
    li r4, 0x6
    stw r0, 0x274(r1)
    li r0, 0x15
    stw r31, 0x26c(r1)
    mr r31, r3
    stw r30, 0x268(r1)
    stw r29, 0x264(r1)
    stw r28, 0x260(r1)
    li r28, 0x0
    stw r28, 0x14c0(r3)
    stw r0, 0x58c(r3)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x65
    li r6, 0x0
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x67
    bl fn_80232B7C
    lfs f0, lbl_80883E44
    lis r8, lbl_807C7030@ha
    lfs f3, lbl_80883E40
    li r29, -0x1
    lfs f2, lbl_80883F14
    li r30, 0x1
    stfs f3, 0x48(r1)
    addi r4, r31, 0x1654
    lfs f1, lbl_80883EC0
    addi r5, r31, 0xb0
    stfs f2, 0x4c(r1)
    addi r7, r1, 0x48
    addi r8, r8, lbl_807C7030@l
    addi r9, r1, 0x38
    stfs f3, 0x50(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    stw r29, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lfs f0, lbl_80883E44
    addi r3, r31, 0xb0
    stw r30, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_80883E40
    li r5, 0x35
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    lfs f2, lbl_80883F18
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    stw r28, 0x14b8(r31)
    li r4, 0x50
    li r5, 0x2
    lwz r3, lbl_8087F430
    bl fn_80370AE4
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883E40
    addi r4, r31, 0x152c
    lfs f1, lbl_80883E44
    addi r5, r31, 0xb0
    stfs f0, 0x1c(r1)
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    stfs f0, 0x20(r1)
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
    stw r29, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    addi r3, r1, 0x58
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x58
    lwz r4, 0x3b4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802AB97C_00000F60
    b lbl_fn_802AB97C_00000F64
lbl_fn_802AB97C_00000F60:
    la r4, lbl_808813D0
lbl_fn_802AB97C_00000F64:
    lwz r5, 0x60(r31)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x58
    bl fn_80109828
    lwz r0, 0x1854(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802AB97C_00000F9C
    lwz r3, lbl_8087F430
    li r5, 0x1
    lwz r4, 0x1680(r31)
    bl fn_80370AE4
lbl_fn_802AB97C_00000F9C:
    lwz r4, 0x1688(r31)
    cmpwi r4, 0x0
    beq lbl_fn_802AB97C_00000FC8
    lwz r3, lbl_8087F430
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_802AB97C_00000FC8
    lwz r3, lbl_8087F430
    li r5, 0x1
    lwz r4, 0x1688(r31)
    bl fn_80370AE4
lbl_fn_802AB97C_00000FC8:
    lwz r3, 0x1644(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802AB97C_00000FE4
    li r4, -0x1
    bl fn_8015AC48
    li r0, 0x0
    stw r0, 0x1644(r31)
lbl_fn_802AB97C_00000FE4:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    addi r3, r31, 0x1538
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, 0x1694(r31)
    lwz r0, 0x16ec(r31)
    ori r6, r3, 0x1
    lwz r4, 0x1744(r31)
    ori r5, r0, 0x1
    lwz r3, 0x179c(r31)
    lwz r0, 0x17f4(r31)
    ori r4, r4, 0x1
    ori r3, r3, 0x1
    stw r6, 0x1694(r31)
    ori r0, r0, 0x1
    stw r5, 0x16ec(r31)
    stw r4, 0x1744(r31)
    stw r3, 0x179c(r31)
    stw r0, 0x17f4(r31)
    lwz r31, 0x26c(r1)
    lwz r30, 0x268(r1)
    lwz r29, 0x264(r1)
    lwz r28, 0x260(r1)
    lwz r0, 0x274(r1)
    mtlr r0
    addi r1, r1, 0x270
    blr
}

asm void fn_802ABC50(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x124(r1)
    li r0, 0x1a
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    mr r29, r3
    stw r4, 0x14c0(r3)
    li r4, 0x6
    stw r0, 0x58c(r3)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    addi r30, r1, 0x20
    lwz r6, 0x14b0(r29)
    addi r4, r1, 0x74
    lfs f0, 0x530(r29)
    addi r5, r1, 0x8
    lfs f2, 0x530(r6)
    mr r3, r30
    psq_l f1, 0x528(r6), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    fsubs f6, f2, f0
    lfs f4, 0x52c(r29)
    mr r4, r30
    lfs f5, 0x78(r1)
    lfs f3, 0x74(r1)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    stfs f2, 0x7c(r1)
    fmr f2, f6
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x10(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F98D0
    lfs f2, 0x28(r1)
    addi r31, r1, 0x14
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883E90
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x1c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802ABC50_00001184
    lfs f3, 0x14(r1)
    lfs f0, lbl_80883E40
    fcmpo cr0, f3, f0
    ble lbl_fn_802ABC50_00001178
    lfs f0, lbl_80883E94
    b lbl_fn_802ABC50_0000117C
lbl_fn_802ABC50_00001178:
    lfs f0, lbl_80883E98
lbl_fn_802ABC50_0000117C:
    stfs f0, 0x30(r1)
    b lbl_fn_802ABC50_00001198
lbl_fn_802ABC50_00001184:
    frsp f2, f2
    lfs f1, 0x14(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x30(r1)
lbl_fn_802ABC50_00001198:
    lfs f0, 0x30(r1)
    addi r3, r1, 0xc0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883E40
    addi r4, r1, 0x38
    lfs f4, 0xc8(r1)
    mr r5, r4
    lfs f5, 0xc4(r1)
    addi r3, r1, 0x80
    lfs f6, 0xc0(r1)
    lfs f7, 0xd8(r1)
    lfs f8, 0xd4(r1)
    lfs f9, 0xd0(r1)
    lfs f10, 0xe8(r1)
    lfs f11, 0xe4(r1)
    lfs f12, 0xe0(r1)
    lfs f13, 0xec(r1)
    lfs f31, 0xdc(r1)
    lfs f30, 0xcc(r1)
    lfs f0, lbl_80883E44
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x1c(r1)
    stfs f3, 0xb0(r1)
    stfs f3, 0xb4(r1)
    stfs f3, 0xb8(r1)
    stfs f0, 0xbc(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f6, 0x80(r1)
    stfs f5, 0x84(r1)
    stfs f4, 0x88(r1)
    stfs f9, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f9, 0x90(r1)
    stfs f8, 0x94(r1)
    stfs f7, 0x98(r1)
    stfs f12, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f10, 0x58(r1)
    stfs f12, 0xa0(r1)
    stfs f11, 0xa4(r1)
    stfs f10, 0xa8(r1)
    stfs f30, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f30, 0x8c(r1)
    stfs f31, 0x9c(r1)
    stfs f13, 0xac(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883E90
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802ABC50_000012B4
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883E40
    fcmpo cr0, f3, f0
    ble lbl_fn_802ABC50_000012A4
    lfs f0, lbl_80883E94
    b lbl_fn_802ABC50_000012A8
lbl_fn_802ABC50_000012A4:
    lfs f0, lbl_80883E98
lbl_fn_802ABC50_000012A8:
    fneg f0, f0
    stfs f0, 0x2c(r1)
    b lbl_fn_802ABC50_000012C8
lbl_fn_802ABC50_000012B4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x2c(r1)
lbl_fn_802ABC50_000012C8:
    addi r3, r1, 0x2c
    lfs f2, lbl_80883E40
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80745FD0@ha
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, 0x538(r29)
    lfs f3, 0x18(r1)
    stfs f2, 0x1c(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80883E9C
    stfs f2, 0x34(r1)
    lfd f2, lbl_80745FD0@l(r3)
    fmuls f1, f0, f3
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80883EA0
    fcmpo cr0, f3, f0
    ble lbl_fn_802ABC50_00001318
    lfs f0, lbl_80883EA4
    fsubs f3, f3, f0
lbl_fn_802ABC50_00001318:
    lfs f0, lbl_80883EA8
    fcmpo cr0, f3, f0
    bge lbl_fn_802ABC50_0000132C
    lfs f0, lbl_80883EA4
    fadds f3, f3, f0
lbl_fn_802ABC50_0000132C:
    lfs f0, lbl_80883E40
    fcmpo cr0, f3, f0
    bge lbl_fn_802ABC50_00001354
    fneg f3, f3
    lfs f0, lbl_80883E38
    li r0, 0x0
    stw r0, 0x15ec(r29)
    fmuls f0, f3, f0
    stfs f0, 0x15e8(r29)
    b lbl_fn_802ABC50_00001368
lbl_fn_802ABC50_00001354:
    lfs f0, lbl_80883E38
    li r0, 0x1
    stw r0, 0x15ec(r29)
    fmuls f0, f3, f0
    stfs f0, 0x15e8(r29)
lbl_fn_802ABC50_00001368:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_802ABF6C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x2e
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x58c(r3)
    stw r4, 0x14c0(r3)
    cmpwi r0, 0x18
    bne lbl_fn_802ABF6C_000013C8
    li r31, 0x31
lbl_fn_802ABF6C_000013C8:
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
    lfs f0, lbl_80883E44
    li r3, 0x1b
    li r0, 0x1
    stw r3, 0x58c(r30)
    lfs f1, lbl_80883E40
    mr r5, r31
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f2, lbl_80883E50
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x67
    li r6, 0x0
    bl fn_80239DAC
    addi r3, r30, 0x1538
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r4, 0x1694(r30)
    lwz r0, 0x16ec(r30)
    ori r7, r4, 0x1
    lwz r3, 0x1644(r30)
    ori r6, r0, 0x1
    lwz r5, 0x1744(r30)
    lwz r4, 0x179c(r30)
    cmpwi r3, 0x0
    lwz r0, 0x17f4(r30)
    ori r5, r5, 0x1
    ori r4, r4, 0x1
    stw r7, 0x1694(r30)
    ori r0, r0, 0x1
    stw r6, 0x16ec(r30)
    stw r5, 0x1744(r30)
    stw r4, 0x179c(r30)
    stw r0, 0x17f4(r30)
    beq lbl_fn_802ABF6C_000014E8
    li r4, -0x1
    bl fn_8015AC48
    li r0, 0x0
    stw r0, 0x1644(r30)
lbl_fn_802ABF6C_000014E8:
    mr r3, r30
    bl fn_800EB7A0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802AC0E0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r3
    lwz r3, 0x14b0(r3)
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x2c
    bl fn_8001047C
    addi r3, r1, 0x20
    addi r4, r1, 0x2c
    addi r5, r31, 0x528
    bl fn_80013338
    addi r3, r1, 0x20
    bl fn_8000D3A4
    fmr f30, f1
    mr r3, r31
    bl fn_8012A1B8
    lfs f31, 0x4(r3)
    addi r3, r1, 0x8
    addi r4, r1, 0x20
    bl fn_800F7FD8
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_80011034
    lfs f0, 0x18(r1)
    fsubs f1, f0, f31
    bl fn_802A7964
    bl fn_802A7910
    lfs f0, lbl_80883F1C
    li r3, 0x0
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_802AC0E0_000015B8
    lfs f0, lbl_80883F20
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_802AC0E0_000015B8
    li r3, 0x1
lbl_fn_802AC0E0_000015B8:
    lwz r0, 0x14f4(r31)
    cmpwi r0, 0x1
    beq lbl_fn_802AC0E0_000015F8
    cmpwi r0, 0x2
    beq lbl_fn_802AC0E0_00001634
    cmpwi r0, 0x3
    beq lbl_fn_802AC0E0_00001670
    cmpwi r0, 0x7
    beq lbl_fn_802AC0E0_000016AC
    cmpwi r0, 0x4
    beq lbl_fn_802AC0E0_000016BC
    cmpwi r0, 0x5
    beq lbl_fn_802AC0E0_000016C8
    cmpwi r0, 0x6
    beq lbl_fn_802AC0E0_000016D4
    b lbl_fn_802AC0E0_00001768
lbl_fn_802AC0E0_000015F8:
    lfs f0, lbl_80883F24
    fcmpo cr0, f30, f0
    bge lbl_fn_802AC0E0_00001768
    cmpwi r3, 0x0
    beq lbl_fn_802AC0E0_00001624
    mr r3, r31
    bl fn_802AB280
    lwz r3, 0x14cc(r31)
    addi r0, r3, 0x1
    stw r0, 0x14cc(r31)
    b lbl_fn_802AC0E0_00001768
lbl_fn_802AC0E0_00001624:
    mr r3, r31
    li r4, 0x1
    bl fn_802ABC50
    b lbl_fn_802AC0E0_00001768
lbl_fn_802AC0E0_00001634:
    lfs f0, lbl_80883F28
    fcmpo cr0, f30, f0
    bge lbl_fn_802AC0E0_00001768
    cmpwi r3, 0x0
    beq lbl_fn_802AC0E0_00001660
    mr r3, r31
    bl fn_802AB354
    lwz r3, 0x14cc(r31)
    addi r0, r3, 0x1
    stw r0, 0x14cc(r31)
    b lbl_fn_802AC0E0_00001768
lbl_fn_802AC0E0_00001660:
    mr r3, r31
    li r4, 0x1
    bl fn_802ABC50
    b lbl_fn_802AC0E0_00001768
lbl_fn_802AC0E0_00001670:
    lfs f0, lbl_80883E60
    fcmpo cr0, f30, f0
    bge lbl_fn_802AC0E0_00001768
    cmpwi r3, 0x0
    beq lbl_fn_802AC0E0_0000169C
    mr r3, r31
    bl fn_802AB42C
    lwz r3, 0x14cc(r31)
    addi r0, r3, 0x1
    stw r0, 0x14cc(r31)
    b lbl_fn_802AC0E0_00001768
lbl_fn_802AC0E0_0000169C:
    mr r3, r31
    li r4, 0x1
    bl fn_802ABC50
    b lbl_fn_802AC0E0_00001768
lbl_fn_802AC0E0_000016AC:
    mr r3, r31
    li r4, 0x1
    bl fn_802AB510
    b lbl_fn_802AC0E0_00001768
lbl_fn_802AC0E0_000016BC:
    mr r3, r31
    bl fn_802AABD8
    b lbl_fn_802AC0E0_00001768
lbl_fn_802AC0E0_000016C8:
    mr r3, r31
    bl fn_802AAF2C
    b lbl_fn_802AC0E0_00001768
lbl_fn_802AC0E0_000016D4:
    lwz r4, 0x940(r31)
    lis r0, 0x4330
    stw r0, 0x38(r1)
    lis r3, lbl_80745FC8@ha
    xoris r0, r4, 0x8000
    lfd f3, lbl_80745FC8@l(r3)
    stw r0, 0x3c(r1)
    lfs f1, 0x7d8(r31)
    lfd f2, 0x38(r1)
    lfs f0, 0x14dc(r31)
    fsubs f2, f2, f3
    fdivs f1, f1, f2
    fcmpo cr0, f1, f0
    bge lbl_fn_802AC0E0_00001750
    lwz r3, 0x14e0(r31)
    lwz r0, 0x14e4(r31)
    cmpw r3, r0
    bge lbl_fn_802AC0E0_00001750
    lwz r3, 0x14e8(r31)
    lwz r0, 0x14ec(r31)
    cmpw r3, r0
    blt lbl_fn_802AC0E0_00001750
    mr r3, r31
    li r4, 0x2
    bl fn_802AB510
    lwz r3, 0x14e0(r31)
    li r0, 0x0
    stw r0, 0x14e8(r31)
    addi r0, r3, 0x1
    stw r0, 0x14e0(r31)
    b lbl_fn_802AC0E0_00001768
lbl_fn_802AC0E0_00001750:
    lwz r5, 0x14e8(r31)
    mr r3, r31
    li r4, 0x0
    addi r0, r5, 0x1
    stw r0, 0x14e8(r31)
    bl fn_802AB510
lbl_fn_802AC0E0_00001768:
    lwz r0, 0x74(r1)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_802AC364(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    stw r31, 0x21c(r1)
    stw r30, 0x218(r1)
    mr r30, r5
    stw r29, 0x214(r1)
    mr r29, r3
    bl fn_805A3C58
    lfs f4, lbl_80883F30
    lis r3, lbl_80785F0C@ha
    li r31, 0x0
    li r9, 0x50
    lfs f3, lbl_80883F34
    addi r3, r3, lbl_80785F0C@l
    lfs f2, lbl_80883F38
    li r10, 0x1e
    lfs f1, lbl_80883F3C
    li r8, 0xb4
    lfs f0, lbl_80883F40
    li r0, 0x3c
    lis r4, fn_802AC550@ha
    lis r5, fn_80059468@ha
    stw r3, 0x0(r29)
    addi r3, r29, 0x1564
    addi r4, r4, fn_802AC550@l
    addi r5, r5, fn_80059468@l
    stw r31, 0x14d4(r29)
    li r6, 0x58
    li r7, 0xe
    stw r31, 0x14dc(r29)
    stw r31, 0x14e0(r29)
    stw r31, 0x14e4(r29)
    stb r31, 0x14e8(r29)
    stfs f4, 0x14fc(r29)
    stw r31, 0x150c(r29)
    stw r10, 0x1510(r29)
    stw r9, 0x1514(r29)
    stw r8, 0x1518(r29)
    stw r9, 0x151c(r29)
    stw r0, 0x1520(r29)
    stfs f3, 0x1524(r29)
    stfs f2, 0x1528(r29)
    stw r31, 0x1548(r29)
    stfs f1, 0x154c(r29)
    stfs f0, 0x1550(r29)
    stw r31, 0x1554(r29)
    stw r31, 0x1558(r29)
    stw r31, 0x155c(r29)
    stw r31, 0x1560(r29)
    bl fn_806958E0
    li r0, 0x1
    stw r31, 0x1a34(r29)
    addi r3, r29, 0x1a54
    stw r31, 0x1a38(r29)
    stw r31, 0x1a3c(r29)
    stb r0, 0x1a40(r29)
    stw r0, 0x1a44(r29)
    bl fn_802377B8
    addi r3, r29, 0x1a60
    bl fn_802377B8
    addi r3, r29, 0x1a6c
    bl fn_80237518
    addi r3, r29, 0x1a78
    bl fn_802377B8
    lwz r0, 0x12a4(r29)
    li r6, -0x1
    lfs f0, lbl_80883F44
    mr r3, r29
    oris r0, r0, 0x40
    stw r6, 0x1a84(r29)
    addi r4, r1, 0x108
    addi r5, r30, 0x2c
    stw r31, 0x1a88(r29)
    stw r6, 0x1a8c(r29)
    stw r31, 0x1a90(r29)
    stfs f0, 0x1a94(r29)
    stw r31, 0x1a98(r29)
    stw r31, 0x1a9c(r29)
    stw r31, 0x1aa0(r29)
    stw r31, 0x1aa4(r29)
    stw r0, 0x12a4(r29)
    bl fn_805A3D6C
    cmpwi r3, 0x0
    beq lbl_fn_802AC364_000018FC
    lis r4, lbl_807462A8@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807462A8@l
    addi r5, r1, 0x108
    crclr 6
    bl sprintf
    b lbl_fn_802AC364_00001914
lbl_fn_802AC364_000018FC:
    lis r4, lbl_807462A8@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807462A8@l
    addi r4, r4, 0x1c
    crclr 6
    bl sprintf
lbl_fn_802AC364_00001914:
    lwz r12, 0x14b4(r29)
    addi r3, r29, 0x14b4
    addi r4, r1, 0x8
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r31, lbl_807462A8@ha
    addi r3, r29, 0x1a6c
    addi r31, r31, lbl_807462A8@l
    addi r4, r31, 0x48
    bl fn_80237654
    addi r3, r29, 0x1a60
    addi r4, r31, 0x5e
    bl fn_8023780C
    addi r3, r29, 0x1a78
    addi r4, r31, 0x74
    bl fn_8023780C
    lwz r31, 0x21c(r1)
    mr r3, r29
    lwz r30, 0x218(r1)
    lwz r29, 0x214(r1)
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}
