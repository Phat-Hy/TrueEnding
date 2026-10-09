#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_14(void);
extern void _restgpr_22(void);
extern void _restgpr_23(void);
extern void _restgpr_26(void);
extern void _savegpr_14(void);
extern void _savegpr_22(void);
extern void _savegpr_23(void);
extern void _savegpr_26(void);
extern void dtor_80013D60(void);
extern void dtor_80084684(void);
extern void fn_8003E4A4(void);
extern void fn_8004212C(void);
extern void fn_80043EAC(void);
extern void fn_80044134(void);
extern void fn_8004424C(void);
extern void fn_80044BB0(void);
extern void fn_80057A64(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_80063200(void);
extern void fn_8006AA20(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800874C8(void);
extern void fn_80087994(void);
extern void fn_80087E9C(void);
extern void fn_80088724(void);
extern void fn_8008937C(void);
extern void fn_8008A4E0(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_8008CD60(void);
extern void fn_800902C0(void);
extern void fn_80092814(void);
extern void fn_8009373C(void);
extern void fn_80097A88(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800D246C(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800E0AA8(void);
extern void fn_8011D424(void);
extern void fn_8011F91C(void);
extern void fn_8011FC10(void);
extern void fn_8011FE3C(void);
extern void fn_801207D4(void);
extern void fn_801354B4(void);
extern void fn_80136544(void);
extern void fn_8020A780(void);
extern void fn_80219E6C(void);
extern void fn_80223EE0(void);
extern void fn_8032AC1C(void);
extern void fn_8032AF90(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC758(void);
extern void fn_803EC91C(void);
extern void fn_803ED610(void);
extern void fn_803EDCF4(void);
extern void fn_803EFCA8(void);
extern void fn_8043B9E0(void);
extern void fn_80440184(void);
extern void fn_80440280(void);
extern void fn_80440360(void);
extern void fn_8044058C(void);
extern void fn_80442B50(void);
extern void fn_80442E64(void);
extern void fn_80442EA4(void);
extern void fn_80442EAC(void);
extern void fn_80442ECC(void);
extern void fn_804444E8(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F9190(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_805F99F0(void);
extern void fn_805F9AB0(void);
extern void fn_805F9B50(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_8068AE9C(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_80695720(void);
extern void fn_80695AD0(void);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 lbl_80754370[];
extern u8 lbl_807543A0[];
extern u8 lbl_807543BC[];
extern u8 lbl_80754498[];
extern u8 lbl_807544B8[];
extern u8 lbl_807544C0[];
extern u8 lbl_80766768[];
extern u8 lbl_80775A88[];
extern u8 lbl_8078E8A0[];
extern u8 lbl_8078F0A0[];
extern u8 lbl_8078F178[];
extern u8 lbl_8078F210[];
extern u8 lbl_8078F21C[];
extern u8 lbl_8078F228[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087DFC0;
extern u32 lbl_8087DFC4;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F120;
extern u32 lbl_8087F408;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886994;
extern u32 lbl_80886998;
extern u32 lbl_808869A0;
extern u32 lbl_808869A4;
extern u32 lbl_808869A8;
extern u32 lbl_808869AC;
extern u32 lbl_808869B0;
extern u32 lbl_808869B4;
extern u32 lbl_808869B8;
extern u32 lbl_808869BC;
extern u32 lbl_808869C0;
extern u32 lbl_808869C8;
extern u32 lbl_808869CC;
extern u32 lbl_808869D0;
extern u32 lbl_808869D4;
extern u32 lbl_808869D8;
extern u32 lbl_808869DC;
extern u32 lbl_808869E0;
extern u32 lbl_808869E4;
extern u32 lbl_808869E8;
extern u32 lbl_808869EC;
extern u32 lbl_808869F0;
extern u32 lbl_808869F4;
extern u32 lbl_808869F8;
extern u32 lbl_808869FC;
extern u32 lbl_80886A00;
extern u32 lbl_80886A04;
extern u32 lbl_80886A08;
extern u32 lbl_80886A0C;
extern u32 lbl_80886A10;
extern u32 lbl_80886A14;
extern u32 lbl_80886A18;

/* Function declarations */
void fn_8043C334(void);
void fn_8043C368(void);
void fn_8043C4E0(void);
void fn_8043C508(void);
void fn_8043CA58(void);
void fn_8043CF58(void);
void fn_8043D568(void);
void fn_8043D580(void);
void fn_8043D594(void);
void fn_8043D618(void);
void fn_8043D6E4(void);
void fn_8043D6F4(void);
void fn_8043D930(void);
void fn_8043D940(void);
void fn_8043D9F8(void);
void fn_8043DB84(void);
void fn_8043DC9C(void);
void fn_8043DD70(void);
void fn_8043DD78(void);
void fn_8043E07C(void);
void fn_8043E0E8(void);
void fn_8043E134(void);
void fn_8043E1F0(void);
void fn_8043E4E4(void);
void fn_8043E514(void);
void fn_8043E56C(void);
void fn_8043E580(void);
void fn_8043E6B0(void);
void fn_8043E770(void);
void fn_8043EA64(void);
void fn_8043F028(void);
void fn_8043F0F4(void);
void fn_8043F178(void);
void fn_8043F244(void);
void fn_8043F24C(void);
void fn_8043F5BC(void);
void fn_8043F5C4(void);
void fn_8043F63C(void);
void fn_8043F694(void);
void fn_8043F908(void);
void fn_8043FA08(void);
void fn_8043FE90(void);
void fn_8043FEE8(void);

asm void fn_8043C334(void)
{
    nofralloc
    lfs f0, lbl_80886994
    li r0, 0x0
    stw r0, 0x0(r3)
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    stfs f0, 0x14(r3)
    stfs f0, 0x18(r3)
    stfs f0, 0x4c(r3)
    stfs f0, 0x50(r3)
    stfs f0, 0x54(r3)
    blr
}

asm void fn_8043C368(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r4, lbl_8087EFB4
    lfs f0, 0x74(r3)
    lfs f1, 0x114(r4)
    lfs f3, 0x110(r4)
    fsubs f4, f1, f0
    lfs f2, 0x70(r3)
    lfs f0, 0x6c(r3)
    addi r3, r1, 0x8
    lfs f1, 0x10c(r4)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    lfs f0, lbl_808869A4
    fcmpo cr0, f1, f0
    bgt lbl_fn_8043C368_00000198
    lwz r3, 0x30c(r31)
    cmpwi r3, 0x0
    bne lbl_fn_8043C368_00000174
    lwz r4, 0xf4(r31)
    lwz r0, 0x20(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8043C368_000000BC
    lwz r3, lbl_8087F8A0
    lwz r0, 0x48(r3)
    stw r0, 0x30c(r31)
    b lbl_fn_8043C368_0000010C
lbl_fn_8043C368_000000BC:
    cmpwi r0, 0x1
    bne lbl_fn_8043C368_000000D8
    lwz r3, lbl_8087F890
    lwz r4, 0x24(r4)
    bl fn_8011FE3C
    stw r3, 0x30c(r31)
    b lbl_fn_8043C368_0000010C
lbl_fn_8043C368_000000D8:
    cmpwi r0, 0x2
    bne lbl_fn_8043C368_000000F4
    lwz r3, lbl_8087F408
    lwz r4, 0x24(r4)
    bl fn_8011FC10
    stw r3, 0x30c(r31)
    b lbl_fn_8043C368_0000010C
lbl_fn_8043C368_000000F4:
    cmpwi r0, 0x3
    bne lbl_fn_8043C368_0000010C
    lwz r3, lbl_8087F8A0
    lwz r4, 0x24(r4)
    bl fn_8011F91C
    stw r3, 0x30c(r31)
lbl_fn_8043C368_0000010C:
    lwz r3, 0x30c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8043C368_00000134
    lwz r4, 0x38(r3)
    rlwinm r0, r4, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8043C368_00000134
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8043C368_00000140
lbl_fn_8043C368_00000134:
    li r0, 0x0
    stw r0, 0x30c(r31)
    b lbl_fn_8043C368_00000198
lbl_fn_8043C368_00000140:
    lwz r5, 0xf4(r31)
    lis r4, lbl_8078F0A0@ha
    addi r4, r4, lbl_8078F0A0@l
    addi r3, r3, 0xb0
    lwz r0, 0x28(r5)
    li r5, 0x0
    slwi r0, r0, 2
    lwzx r4, r4, r0
    bl fn_80092814
    stw r3, 0x310(r31)
    mr r3, r31
    bl fn_8043B9E0
    b lbl_fn_8043C368_00000190
lbl_fn_8043C368_00000174:
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8043C368_00000190
    li r0, 0x0
    stw r0, 0x30c(r31)
    b lbl_fn_8043C368_00000198
lbl_fn_8043C368_00000190:
    mr r3, r31
    bl fn_8043C508
lbl_fn_8043C368_00000198:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8043C4E0(void)
{
    nofralloc
    lwz r0, 0x30c(r3)
    cmpwi r0, 0x0
    beqlr
    lwz r4, lbl_8087F0A8
    lwz r0, 0x18(r4)
    cmpwi r0, 0x0
    beqlr
    addi r4, r3, 0xf8
    b fn_803ED610
    blr
}

asm void fn_8043C508(void)
{
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    stw r0, 0x2d4(r1)
    stfd f31, 0x2c0(r1)
    psq_st f31, 0x2c8(r1), 0, 0
    stfd f30, 0x2b0(r1)
    psq_st f30, 0x2b8(r1), 0, 0
    stw r31, 0x2ac(r1)
    mr r31, r3
    stw r30, 0x2a8(r1)
    lwz r0, 0x310(r3)
    psq_l f1, 0x6c(r3), 0, 0
    lfs f2, 0x74(r3)
    cmpwi r0, 0x0
    psq_st f1, 0x314(r3), 0, 0
    lwz r4, 0x30c(r3)
    stfs f2, 0x31c(r3)
    bge lbl_fn_8043C508_00000224
    li r4, 0x0
    b lbl_fn_8043C508_00000230
lbl_fn_8043C508_00000224:
    mulli r0, r0, 0x30
    lwz r3, 0xec(r4)
    add r4, r3, r0
lbl_fn_8043C508_00000230:
    lfs f8, lbl_808869A8
    addi r30, r1, 0x278
    lfs f7, lbl_80886994
    addi r3, r1, 0x1e8
    lfs f0, lbl_808869AC
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
    stfs f0, 0x50(r1)
    stfs f7, 0x54(r1)
    stfs f8, 0x58(r1)
    bl fn_805F90D0
    mr r3, r30
    addi r4, r1, 0x1e8
    addi r5, r1, 0x218
    bl fn_805F89F0
    addi r4, r1, 0x218
    lfs f10, lbl_80886994
    psq_l f2, 0x8(r4), 0, 0
    addi r5, r1, 0x80
    psq_l f4, 0x18(r4), 0, 0
    addi r6, r1, 0xa4
    psq_st f2, 0x8(r30), 0, 0
    addi r3, r1, 0x188
    psq_l f6, 0x28(r4), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    lfs f9, 0x284(r1)
    psq_st f6, 0x28(r30), 0, 0
    lfs f8, 0x294(r1)
    lfs f7, 0x2a4(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    fmr f2, f7
    psq_l f5, 0x20(r4), 0, 0
    lfs f11, lbl_808869B0
    psq_st f3, 0x10(r30), 0, 0
    fmr f3, f11
    lfs f0, lbl_80886998
    stfs f9, 0x80(r1)
    stfs f8, 0x84(r1)
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f1, 0x320(r31), 0, 0
    psq_l f1, 0x6c(r31), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    fmr f1, f10
    stfs f2, 0x328(r31)
    lfs f2, 0x74(r31)
    stfs f2, 0xac(r1)
    fmr f2, f1
    stfs f7, 0x88(r1)
    stfs f0, 0x33c(r31)
    stfs f10, 0x44(r1)
    stfs f10, 0x48(r1)
    stfs f11, 0x4c(r1)
    bl fn_805F90D0
    mr r3, r30
    addi r4, r1, 0x188
    addi r5, r1, 0x1b8
    bl fn_805F89F0
    addi r4, r1, 0x1b8
    addi r6, r1, 0x74
    psq_l f6, 0x28(r4), 0, 0
    addi r5, r1, 0x98
    psq_st f6, 0x28(r30), 0, 0
    addi r7, r1, 0x68
    psq_l f2, 0x8(r4), 0, 0
    addi r3, r1, 0x8c
    psq_l f4, 0x18(r4), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    lfs f9, 0x2a4(r1)
    psq_st f4, 0x18(r30), 0, 0
    fmr f2, f9
    lfs f7, 0x284(r1)
    lfs f0, 0x294(r1)
    stfs f7, 0x74(r1)
    psq_l f1, 0x0(r4), 0, 0
    frsp f8, f2
    stfs f0, 0x78(r1)
    lfs f7, 0xac(r1)
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    fsubs f8, f8, f7
    psq_st f1, 0x0(r5), 0, 0
    lfs f0, 0xa8(r1)
    lfs f7, 0x9c(r1)
    stfs f2, 0xa0(r1)
    fmr f2, f8
    fsubs f10, f7, f0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    lfs f7, 0x98(r1)
    lfs f0, 0xa4(r1)
    stfs f10, 0x6c(r1)
    fsubs f0, f7, f0
    psq_st f3, 0x10(r30), 0, 0
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    stfs f9, 0x7c(r1)
    stfs f8, 0x70(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x94(r1)
    bl fn_805F9940
    lfs f0, lbl_808869B4
    fcmpo cr0, f1, f0
    ble lbl_fn_8043C508_000006F4
    lfs f2, 0x8c(r1)
    lfs f1, 0x94(r1)
    bl fn_8068AEA4
    lfs f8, lbl_80886994
    frsp f9, f1
    lfs f7, lbl_80886998
    addi r3, r1, 0x128
    stfs f8, 0x274(r1)
    fneg f10, f9
    lfs f0, lbl_808869A0
    lfs f9, lbl_808869B8
    stfs f8, 0x26c(r1)
    fadds f30, f9, f10
    stfs f8, 0x268(r1)
    stfs f8, 0x264(r1)
    stfs f8, 0x260(r1)
    stfs f8, 0x258(r1)
    stfs f8, 0x254(r1)
    stfs f8, 0x250(r1)
    stfs f8, 0x24c(r1)
    stfs f7, 0x270(r1)
    stfs f7, 0x25c(r1)
    stfs f7, 0x248(r1)
    lfs f7, 0x70(r31)
    lfs f3, 0x74(r31)
    fsubs f2, f7, f0
    lfs f1, 0x6c(r31)
    stfs f1, 0x38(r1)
    stfs f3, 0x40(r1)
    stfs f2, 0x3c(r1)
    bl fn_805F90D0
    addi r3, r1, 0x248
    addi r4, r1, 0x128
    addi r5, r1, 0x158
    bl fn_805F89F0
    addi r5, r1, 0x158
    addi r30, r1, 0x248
    psq_l f1, 0x0(r5), 0, 0
    addi r3, r1, 0xf8
    psq_st f1, 0x0(r30), 0, 0
    fmr f1, f30
    psq_l f2, 0x8(r5), 0, 0
    li r4, 0x79
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xf8
    addi r5, r1, 0xc8
    bl fn_805F89F0
    addi r4, r1, 0xc8
    addi r3, r1, 0x14
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x100(r31), 0, 0
    psq_st f2, 0x108(r31), 0, 0
    psq_st f3, 0x110(r31), 0, 0
    psq_st f4, 0x118(r31), 0, 0
    psq_st f5, 0x120(r31), 0, 0
    psq_st f6, 0x128(r31), 0, 0
    lfs f8, 0x270(r1)
    lfs f7, 0x260(r1)
    lfs f0, 0x250(r1)
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f8, 0x1c(r1)
    bl fn_805F9940
    lfs f8, 0x26c(r1)
    fmr f30, f1
    lfs f7, 0x25c(r1)
    addi r3, r1, 0x20
    lfs f0, 0x24c(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0x268(r1)
    fmr f31, f1
    lfs f7, 0x258(r1)
    addi r3, r1, 0x2c
    lfs f0, 0x248(r1)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x8(r1)
    frsp f0, f30
    stfs f31, 0xc(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x10(r1)
    ble lbl_fn_8043C508_000005C8
    b lbl_fn_8043C508_000005CC
lbl_fn_8043C508_000005C8:
    fmr f7, f0
lbl_fn_8043C508_000005CC:
    lfs f8, 0x8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_8043C508_000005DC
    b lbl_fn_8043C508_000005F4
lbl_fn_8043C508_000005DC:
    lfs f8, 0xc(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_8043C508_000005F0
    b lbl_fn_8043C508_000005F4
lbl_fn_8043C508_000005F0:
    fmr f8, f0
lbl_fn_8043C508_000005F4:
    stfs f8, 0x14c(r31)
    li r0, 0x0
    addi r3, r31, 0xf8
    addi r5, r1, 0xb0
    stw r0, 0xb0(r1)
    li r4, 0x0
    bl fn_800902C0
    addic. r3, r1, 0xb0
    beq lbl_fn_8043C508_0000064C
    lwz r4, 0xb0(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8043C508_0000064C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8043C508_00000644
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8043C508_00000644:
    li r0, 0x0
    stw r0, 0xb0(r1)
lbl_fn_8043C508_0000064C:
    addi r4, r1, 0x5c
    li r7, 0x0
    li r3, 0x0
    b lbl_fn_8043C508_000006E8
lbl_fn_8043C508_0000065C:
    lwz r0, 0x330(r31)
    add r6, r0, r3
    lwzx r0, r3, r0
    cmpwi r0, 0x0
    bge lbl_fn_8043C508_00000678
    li r5, 0x0
    b lbl_fn_8043C508_00000684
lbl_fn_8043C508_00000678:
    mulli r0, r0, 0x30
    lwz r5, 0x134(r31)
    add r5, r5, r0
lbl_fn_8043C508_00000684:
    psq_l f2, 0x8(r5), 0, 0
    addi r7, r7, 0x1
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x1c(r6), 0, 0
    psq_st f2, 0x24(r6), 0, 0
    psq_st f3, 0x2c(r6), 0, 0
    psq_st f4, 0x34(r6), 0, 0
    psq_st f5, 0x3c(r6), 0, 0
    psq_st f6, 0x44(r6), 0, 0
    lwz r0, 0x330(r31)
    add r5, r0, r3
    addi r3, r3, 0x5c
    lfs f0, 0x38(r5)
    lfs f7, 0x28(r5)
    lfs f2, 0x48(r5)
    stfs f7, 0x5c(r1)
    stfs f0, 0x60(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0x64(r1)
    stfs f2, 0xc(r5)
lbl_fn_8043C508_000006E8:
    lwz r0, 0x334(r31)
    cmpw r7, r0
    blt lbl_fn_8043C508_0000065C
lbl_fn_8043C508_000006F4:
    mr r3, r31
    bl fn_8043CA58
    lwz r0, 0x2d4(r1)
    psq_l f31, 0x2c8(r1), 0, 0
    lfd f31, 0x2c0(r1)
    psq_l f30, 0x2b8(r1), 0, 0
    lfd f30, 0x2b0(r1)
    lwz r31, 0x2ac(r1)
    lwz r30, 0x2a8(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}

asm void fn_8043CA58(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x60
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    bl _savegpr_22
    lwz r24, 0x334(r3)
    mr r25, r3
    lis r5, lbl_80754370@ha
    li r4, 0x3
    mulli r3, r24, 0x5c
    li r7, 0x0
    addi r5, r5, lbl_80754370@l
    mr r6, r5
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_8043C334@ha
    mr r7, r24
    addi r4, r4, fn_8043C334@l
    li r5, 0x0
    li r6, 0x5c
    bl fn_80695720
    mr r28, r3
    li r7, 0x0
    li r4, 0x0
    b lbl_fn_8043CA58_0000081C
lbl_fn_8043CA58_00000798:
    lwz r0, 0x32c(r25)
    add r5, r3, r4
    addi r7, r7, 0x1
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x5c
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    lfs f2, 0x18(r6)
    psq_l f1, 0x10(r6), 0, 0
    psq_st f1, 0x10(r5), 0, 0
    stfs f2, 0x18(r5)
    psq_l f2, 0x24(r6), 0, 0
    psq_l f3, 0x2c(r6), 0, 0
    psq_l f4, 0x34(r6), 0, 0
    psq_l f5, 0x3c(r6), 0, 0
    psq_l f6, 0x44(r6), 0, 0
    psq_l f1, 0x1c(r6), 0, 0
    psq_st f1, 0x1c(r5), 0, 0
    psq_st f2, 0x24(r5), 0, 0
    psq_st f3, 0x2c(r5), 0, 0
    psq_st f4, 0x34(r5), 0, 0
    psq_st f5, 0x3c(r5), 0, 0
    psq_st f6, 0x44(r5), 0, 0
    lfs f2, 0x54(r6)
    psq_l f1, 0x4c(r6), 0, 0
    psq_st f1, 0x4c(r5), 0, 0
    stfs f2, 0x54(r5)
    lfs f0, 0x58(r6)
    stfs f0, 0x58(r5)
lbl_fn_8043CA58_0000081C:
    lwz r0, 0x334(r25)
    cmpw r7, r0
    blt lbl_fn_8043CA58_00000798
    mr r5, r28
    li r6, 0x0
    li r4, 0x0
    b lbl_fn_8043CA58_00000898
lbl_fn_8043CA58_00000838:
    lwz r0, 0x32c(r25)
    addi r6, r6, 0x1
    lfs f8, 0x340(r25)
    add r3, r0, r4
    lfs f7, 0x33c(r25)
    lfs f0, 0x50(r3)
    fnmsubs f0, f8, f7, f0
    stfs f0, 0x50(r3)
    lwz r0, 0x32c(r25)
    lfs f7, 0x4(r5)
    add r3, r0, r4
    addi r4, r4, 0x5c
    lfs f0, 0x4c(r3)
    fadds f0, f7, f0
    stfs f0, 0x4(r5)
    lfs f7, 0x8(r5)
    lfs f0, 0x50(r3)
    fadds f0, f7, f0
    stfs f0, 0x8(r5)
    lfs f7, 0xc(r5)
    lfs f0, 0x54(r3)
    fadds f0, f7, f0
    stfs f0, 0xc(r5)
    addi r5, r5, 0x5c
lbl_fn_8043CA58_00000898:
    lwz r0, 0x334(r25)
    cmpw r6, r0
    blt lbl_fn_8043CA58_00000838
    lfs f31, lbl_808869BC
    addi r30, r1, 0x20
    addi r31, r1, 0x2c
    li r27, 0x14
    li r26, 0x0
lbl_fn_8043CA58_000008B8:
    lfs f2, 0x31c(r25)
    li r29, 0x0
    psq_l f1, 0x314(r25), 0, 0
    li r24, 0x0
    psq_st f1, 0x4(r28), 0, 0
    stfs f2, 0xc(r28)
    lwz r3, 0x334(r25)
    lfs f2, 0x328(r25)
    subi r0, r3, 0x1
    psq_l f1, 0x320(r25), 0, 0
    mulli r0, r0, 0x5c
    add r3, r28, r0
    psq_st f1, 0x4(r3), 0, 0
    stfs f2, 0xc(r3)
    b lbl_fn_8043CA58_00000A2C
lbl_fn_8043CA58_000008F4:
    addi r0, r29, 0x1
    add r23, r28, r24
    mulli r0, r0, 0x5c
    lfs f7, 0xc(r23)
    lfs f8, 0x8(r23)
    mr r3, r31
    lfs f0, 0x4(r23)
    add r22, r28, r0
    lfs f10, 0xc(r22)
    lfs f9, 0x8(r22)
    fsubs f2, f10, f7
    lfs f7, 0x4(r22)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f2, 0x28(r1)
    stfs f0, 0x20(r1)
    stfs f8, 0x24(r1)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F9940
    lfs f7, 0x58(r23)
    mr r3, r31
    lfs f0, 0x33c(r25)
    mr r4, r31
    fmsubs f0, f7, f0, f1
    fmuls f30, f31, f0
    bl fn_805F98D0
    lfs f8, 0x2c(r1)
    lfs f7, 0x30(r1)
    lfs f0, 0x34(r1)
    fmuls f8, f8, f30
    fmuls f7, f7, f30
    fmuls f0, f0, f30
    stfs f8, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f0, 0x34(r1)
    lfs f0, 0x4(r23)
    fsubs f0, f0, f8
    stfs f0, 0x4(r23)
    lfs f7, 0x8(r23)
    lfs f0, 0x30(r1)
    fsubs f0, f7, f0
    stfs f0, 0x8(r23)
    lfs f7, 0xc(r23)
    lfs f0, 0x34(r1)
    fsubs f0, f7, f0
    stfs f0, 0xc(r23)
    lfs f7, 0x4(r22)
    lfs f0, 0x2c(r1)
    fadds f0, f7, f0
    stfs f0, 0x4(r22)
    lfs f7, 0x8(r22)
    lfs f0, 0x30(r1)
    fadds f0, f7, f0
    stfs f0, 0x8(r22)
    lfs f7, 0xc(r22)
    lfs f0, 0x34(r1)
    fadds f0, f7, f0
    stfs f0, 0xc(r22)
    lwz r3, 0x30c(r25)
    lfs f7, 0x8(r23)
    lfs f0, 0x52c(r3)
    fcmpo cr0, f7, f0
    ble lbl_fn_8043CA58_000009FC
    b lbl_fn_8043CA58_00000A00
lbl_fn_8043CA58_000009FC:
    fmr f7, f0
lbl_fn_8043CA58_00000A00:
    stfs f7, 0x8(r23)
    lwz r3, 0x30c(r25)
    lfs f7, 0x8(r22)
    lfs f0, 0x52c(r3)
    fcmpo cr0, f7, f0
    ble lbl_fn_8043CA58_00000A1C
    b lbl_fn_8043CA58_00000A20
lbl_fn_8043CA58_00000A1C:
    fmr f7, f0
lbl_fn_8043CA58_00000A20:
    stfs f7, 0x8(r22)
    addi r29, r29, 0x1
    addi r24, r24, 0x5c
lbl_fn_8043CA58_00000A2C:
    lwz r3, 0x334(r25)
    subi r0, r3, 0x1
    cmpw r29, r0
    blt lbl_fn_8043CA58_000008F4
    addi r26, r26, 0x1
    cmpw r26, r27
    blt lbl_fn_8043CA58_000008B8
    lfs f2, 0x31c(r25)
    addi r5, r1, 0x14
    psq_l f1, 0x314(r25), 0, 0
    li r7, 0x0
    psq_st f1, 0x4(r28), 0, 0
    li r3, 0x0
    stfs f2, 0xc(r28)
    lwz r4, 0x334(r25)
    lfs f2, 0x328(r25)
    subi r0, r4, 0x1
    psq_l f1, 0x320(r25), 0, 0
    mulli r0, r0, 0x5c
    add r4, r28, r0
    psq_st f1, 0x4(r4), 0, 0
    stfs f2, 0xc(r4)
    b lbl_fn_8043CA58_00000B28
lbl_fn_8043CA58_00000A88:
    lwz r0, 0x32c(r25)
    add r6, r28, r3
    lfs f9, 0x8(r6)
    addi r7, r7, 0x1
    add r4, r0, r3
    lfs f7, 0x4(r6)
    lfs f8, 0x8(r4)
    lfs f0, 0x4(r4)
    fsubs f9, f9, f8
    lfs f8, 0xc(r6)
    fsubs f7, f7, f0
    lfs f0, 0xc(r4)
    stfs f9, 0x18(r1)
    fsubs f0, f8, f0
    stfs f7, 0x14(r1)
    psq_l f1, 0x0(r5), 0, 0
    fmr f2, f0
    psq_st f1, 0x4c(r6), 0, 0
    stfs f2, 0x54(r6)
    frsp f2, f2
    lwz r0, 0x32c(r25)
    stfs f0, 0x1c(r1)
    add r4, r0, r3
    psq_st f1, 0x4c(r4), 0, 0
    stfs f2, 0x54(r4)
    lwz r0, 0x32c(r25)
    lfs f0, 0x4c(r6)
    add r4, r0, r3
    addi r3, r3, 0x5c
    lfs f7, 0x4(r4)
    fadds f0, f7, f0
    stfs f0, 0x4(r4)
    lfs f7, 0x8(r4)
    lfs f0, 0x50(r6)
    fadds f0, f7, f0
    stfs f0, 0x8(r4)
    lfs f7, 0xc(r4)
    lfs f0, 0x54(r6)
    fadds f0, f7, f0
    stfs f0, 0xc(r4)
lbl_fn_8043CA58_00000B28:
    lwz r0, 0x334(r25)
    cmpw r7, r0
    blt lbl_fn_8043CA58_00000A88
    mr r3, r25
    bl fn_8043CF58
    lfs f7, lbl_808869BC
    addi r4, r1, 0x8
    li r6, 0x0
    li r3, 0x0
    b lbl_fn_8043CA58_00000BE0
lbl_fn_8043CA58_00000B50:
    lwz r0, 0x32c(r25)
    addi r6, r6, 0x1
    add r5, r0, r3
    lfs f10, 0x8(r5)
    lfs f9, 0x14(r5)
    lfs f8, 0x4(r5)
    fsubs f10, f10, f9
    lfs f0, 0x10(r5)
    lfs f9, 0xc(r5)
    fsubs f8, f8, f0
    lfs f0, 0x18(r5)
    stfs f10, 0xc(r1)
    fsubs f2, f9, f0
    stfs f8, 0x8(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x4c(r5), 0, 0
    stfs f2, 0x54(r5)
    lwz r0, 0x32c(r25)
    stfs f2, 0x10(r1)
    add r5, r0, r3
    lfs f0, 0x4c(r5)
    fmuls f0, f0, f7
    stfs f0, 0x4c(r5)
    lfs f0, 0x50(r5)
    fmuls f0, f0, f7
    stfs f0, 0x50(r5)
    lfs f0, 0x54(r5)
    fmuls f0, f0, f7
    stfs f0, 0x54(r5)
    lwz r0, 0x32c(r25)
    add r5, r0, r3
    addi r3, r3, 0x5c
    lfs f2, 0xc(r5)
    psq_l f1, 0x4(r5), 0, 0
    psq_st f1, 0x10(r5), 0, 0
    stfs f2, 0x18(r5)
lbl_fn_8043CA58_00000BE0:
    lwz r0, 0x334(r25)
    cmpw r6, r0
    blt lbl_fn_8043CA58_00000B50
    cmpwi r28, 0x0
    beq lbl_fn_8043CA58_00000BFC
    subi r3, r28, 0x10
    bl fn_80084C24
lbl_fn_8043CA58_00000BFC:
    addi r11, r1, 0x60
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    bl _restgpr_22
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8043CF58(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    stw r0, 0x1d4(r1)
    addi r11, r1, 0x180
    stfd f31, 0x1c0(r1)
    psq_st f31, 0x1c8(r1), 0, 0
    stfd f30, 0x1b0(r1)
    psq_st f30, 0x1b8(r1), 0, 0
    stfd f29, 0x1a0(r1)
    psq_st f29, 0x1a8(r1), 0, 0
    stfd f28, 0x190(r1)
    psq_st f28, 0x198(r1), 0, 0
    stfd f27, 0x180(r1)
    psq_st f27, 0x188(r1), 0, 0
    bl _savegpr_14
    lfs f29, lbl_80886998
    mr r15, r3
    lfs f31, lbl_80886994
    addi r24, r1, 0x100
    lfs f30, lbl_808869C0
    addi r22, r1, 0x28
    lfs f28, lbl_808869B4
    addi r23, r1, 0xb0
    addi r20, r1, 0x18
    addi r21, r1, 0x90
    addi r18, r1, 0x8
    addi r19, r1, 0xa0
    addi r14, r1, 0x80
    addi r27, r1, 0x44
    addi r28, r1, 0x74
    addi r29, r1, 0x50
    addi r25, r1, 0x38
    addi r26, r1, 0x68
    addi r30, r1, 0xc0
    addi r17, r1, 0xd0
    li r16, 0x0
    li r31, 0x0
    b lbl_fn_8043CF58_00001100
lbl_fn_8043CF58_00000CBC:
    addi r0, r16, 0x1
    lwz r4, 0x32c(r15)
    mulli r0, r0, 0x5c
    mr r3, r30
    add r5, r4, r31
    lfs f0, 0xc(r5)
    add r4, r4, r0
    lfs f8, 0x8(r5)
    lfs f7, 0xc(r4)
    lfs f9, 0x8(r4)
    fsubs f2, f7, f0
    lfs f7, 0x4(r4)
    lfs f0, 0x4(r5)
    fsubs f8, f9, f8
    addi r4, r1, 0x5c
    stfs f2, 0x64(r1)
    fsubs f0, f7, f0
    stfs f8, 0x60(r1)
    stfs f0, 0x5c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xc8(r1)
    bl fn_805F9940
    fcmpo cr0, f1, f28
    ble lbl_fn_8043CF58_0000108C
    psq_l f1, 0x0(r30), 0, 0
    cmpwi r16, 0x0
    lfs f2, 0xc8(r1)
    psq_st f1, 0x0(r14), 0, 0
    stfs f2, 0x88(r1)
    bne lbl_fn_8043CF58_00000D8C
    addi r0, r16, 0x1
    lwz r3, 0x330(r15)
    mulli r0, r0, 0x5c
    add r4, r3, r31
    lfs f0, 0xc(r4)
    add r3, r3, r0
    lfs f8, 0x8(r4)
    lfs f7, 0xc(r3)
    lfs f9, 0x8(r3)
    fsubs f2, f7, f0
    lfs f7, 0x4(r3)
    lfs f0, 0x4(r4)
    fsubs f8, f9, f8
    stfs f2, 0x58(r1)
    fsubs f0, f7, f0
    stfs f8, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x7c(r1)
    b lbl_fn_8043CF58_00000DDC
lbl_fn_8043CF58_00000D8C:
    subi r0, r16, 0x1
    lwz r4, 0x32c(r15)
    mulli r0, r0, 0x5c
    add r3, r4, r31
    lfs f7, 0xc(r3)
    add r4, r4, r0
    lfs f9, 0x8(r3)
    lfs f0, 0xc(r4)
    lfs f8, 0x8(r4)
    fsubs f2, f7, f0
    lfs f7, 0x4(r3)
    lfs f0, 0x4(r4)
    fsubs f8, f9, f8
    stfs f2, 0x4c(r1)
    fsubs f0, f7, f0
    stfs f8, 0x48(r1)
    stfs f0, 0x44(r1)
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x7c(r1)
lbl_fn_8043CF58_00000DDC:
    addi r3, r1, 0x74
    mr r4, r3
    bl fn_805F98D0
    addi r3, r1, 0x80
    mr r4, r3
    bl fn_805F98D0
    addi r3, r1, 0x74
    addi r4, r1, 0x80
    addi r5, r1, 0x38
    bl fn_805F99B0
    psq_l f1, 0x0(r25), 0, 0
    mr r3, r26
    lfs f2, 0x40(r1)
    mr r4, r26
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F98D0
    addi r3, r1, 0x74
    addi r4, r1, 0x80
    bl fn_805F9990
    fcmpo cr0, f1, f29
    ble lbl_fn_8043CF58_00000E3C
    fmr f1, f29
    b lbl_fn_8043CF58_00000E48
lbl_fn_8043CF58_00000E3C:
    fcmpo cr0, f1, f30
    bge lbl_fn_8043CF58_00000E48
    fmr f1, f30
lbl_fn_8043CF58_00000E48:
    fcmpo cr0, f1, f29
    bge lbl_fn_8043CF58_0000101C
    bl fn_8068AE9C
    frsp f27, f1
    cmpwi r16, 0x0
    stfs f31, 0x12c(r1)
    stfs f31, 0x124(r1)
    stfs f31, 0x120(r1)
    stfs f31, 0x11c(r1)
    stfs f31, 0x118(r1)
    stfs f31, 0x110(r1)
    stfs f31, 0x10c(r1)
    stfs f31, 0x108(r1)
    stfs f31, 0x104(r1)
    stfs f29, 0x128(r1)
    stfs f29, 0x114(r1)
    stfs f29, 0x100(r1)
    bne lbl_fn_8043CF58_00000ECC
    lwz r0, 0x330(r15)
    add r3, r0, r31
    psq_l f1, 0x1c(r3), 0, 0
    psq_l f2, 0x24(r3), 0, 0
    psq_l f3, 0x2c(r3), 0, 0
    psq_l f4, 0x34(r3), 0, 0
    psq_l f5, 0x3c(r3), 0, 0
    psq_l f6, 0x44(r3), 0, 0
    psq_st f6, 0x28(r24), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    psq_st f2, 0x8(r24), 0, 0
    psq_st f3, 0x10(r24), 0, 0
    psq_st f4, 0x18(r24), 0, 0
    psq_st f5, 0x20(r24), 0, 0
    b lbl_fn_8043CF58_00000F0C
lbl_fn_8043CF58_00000ECC:
    subi r0, r16, 0x1
    lwz r3, 0x32c(r15)
    mulli r0, r0, 0x5c
    add r3, r3, r0
    psq_l f1, 0x1c(r3), 0, 0
    psq_l f2, 0x24(r3), 0, 0
    psq_l f3, 0x2c(r3), 0, 0
    psq_l f4, 0x34(r3), 0, 0
    psq_l f5, 0x3c(r3), 0, 0
    psq_l f6, 0x44(r3), 0, 0
    psq_st f6, 0x28(r24), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    psq_st f2, 0x8(r24), 0, 0
    psq_st f3, 0x10(r24), 0, 0
    psq_st f4, 0x18(r24), 0, 0
    psq_st f5, 0x20(r24), 0, 0
lbl_fn_8043CF58_00000F0C:
    stfs f31, 0x10c(r1)
    addi r3, r1, 0x28
    addi r4, r1, 0x100
    stfs f31, 0x11c(r1)
    stfs f31, 0x12c(r1)
    bl fn_805F9B50
    psq_l f1, 0x0(r22), 0, 0
    addi r3, r1, 0x68
    psq_l f2, 0x8(r22), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    bl fn_805F9940
    fcmpo cr0, f1, f31
    ble lbl_fn_8043CF58_00000F68
    fmr f1, f27
    addi r3, r1, 0x18
    addi r4, r1, 0x68
    bl fn_805F9AB0
    psq_l f1, 0x0(r20), 0, 0
    psq_l f2, 0x8(r20), 0, 0
    psq_st f1, 0x0(r21), 0, 0
    psq_st f2, 0x8(r21), 0, 0
    b lbl_fn_8043CF58_00000F78
lbl_fn_8043CF58_00000F68:
    stfs f31, 0x90(r1)
    stfs f31, 0x94(r1)
    stfs f31, 0x98(r1)
    stfs f29, 0x9c(r1)
lbl_fn_8043CF58_00000F78:
    addi r3, r1, 0x90
    addi r4, r1, 0xb0
    addi r5, r1, 0x8
    bl fn_805F99F0
    psq_l f1, 0x0(r18), 0, 0
    mr r4, r19
    psq_l f2, 0x8(r18), 0, 0
    addi r3, r1, 0xd0
    psq_st f1, 0x0(r19), 0, 0
    psq_st f2, 0x8(r19), 0, 0
    bl fn_805F9190
    psq_l f1, 0x0(r17), 0, 0
    psq_l f2, 0x8(r17), 0, 0
    psq_l f3, 0x10(r17), 0, 0
    psq_l f4, 0x18(r17), 0, 0
    psq_l f5, 0x20(r17), 0, 0
    psq_l f6, 0x28(r17), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    psq_st f2, 0x8(r24), 0, 0
    psq_st f3, 0x10(r24), 0, 0
    psq_st f4, 0x18(r24), 0, 0
    psq_st f5, 0x20(r24), 0, 0
    psq_st f6, 0x28(r24), 0, 0
    lwz r0, 0x32c(r15)
    add r3, r0, r31
    lfs f0, 0x4(r3)
    stfs f0, 0x10c(r1)
    lfs f0, 0x8(r3)
    stfs f0, 0x11c(r1)
    psq_l f2, 0x8(r24), 0, 0
    lfs f0, 0xc(r3)
    stfs f0, 0x12c(r1)
    psq_l f4, 0x18(r24), 0, 0
    psq_l f6, 0x28(r24), 0, 0
    psq_st f1, 0x1c(r3), 0, 0
    psq_st f2, 0x24(r3), 0, 0
    psq_st f3, 0x2c(r3), 0, 0
    psq_st f4, 0x34(r3), 0, 0
    psq_st f5, 0x3c(r3), 0, 0
    psq_st f6, 0x44(r3), 0, 0
    b lbl_fn_8043CF58_000010F8
lbl_fn_8043CF58_0000101C:
    cmpwi r16, 0x0
    beq lbl_fn_8043CF58_00001068
    subi r0, r16, 0x1
    lwz r4, 0x32c(r15)
    mulli r0, r0, 0x5c
    add r3, r4, r31
    add r4, r4, r0
    psq_l f2, 0x24(r4), 0, 0
    psq_l f3, 0x2c(r4), 0, 0
    psq_l f4, 0x34(r4), 0, 0
    psq_l f5, 0x3c(r4), 0, 0
    psq_l f6, 0x44(r4), 0, 0
    psq_l f1, 0x1c(r4), 0, 0
    psq_st f1, 0x1c(r3), 0, 0
    psq_st f2, 0x24(r3), 0, 0
    psq_st f3, 0x2c(r3), 0, 0
    psq_st f4, 0x34(r3), 0, 0
    psq_st f5, 0x3c(r3), 0, 0
    psq_st f6, 0x44(r3), 0, 0
lbl_fn_8043CF58_00001068:
    lwz r0, 0x32c(r15)
    add r3, r0, r31
    lfs f0, 0x4(r3)
    stfs f0, 0x28(r3)
    lfs f0, 0x8(r3)
    stfs f0, 0x38(r3)
    lfs f0, 0xc(r3)
    stfs f0, 0x48(r3)
    b lbl_fn_8043CF58_000010F8
lbl_fn_8043CF58_0000108C:
    cmpwi r16, 0x0
    beq lbl_fn_8043CF58_000010D8
    subi r0, r16, 0x1
    lwz r4, 0x32c(r15)
    mulli r0, r0, 0x5c
    add r3, r4, r31
    add r4, r4, r0
    psq_l f2, 0x24(r4), 0, 0
    psq_l f3, 0x2c(r4), 0, 0
    psq_l f4, 0x34(r4), 0, 0
    psq_l f5, 0x3c(r4), 0, 0
    psq_l f6, 0x44(r4), 0, 0
    psq_l f1, 0x1c(r4), 0, 0
    psq_st f1, 0x1c(r3), 0, 0
    psq_st f2, 0x24(r3), 0, 0
    psq_st f3, 0x2c(r3), 0, 0
    psq_st f4, 0x34(r3), 0, 0
    psq_st f5, 0x3c(r3), 0, 0
    psq_st f6, 0x44(r3), 0, 0
lbl_fn_8043CF58_000010D8:
    lwz r0, 0x32c(r15)
    add r3, r0, r31
    lfs f0, 0x4(r3)
    stfs f0, 0x28(r3)
    lfs f0, 0x8(r3)
    stfs f0, 0x38(r3)
    lfs f0, 0xc(r3)
    stfs f0, 0x48(r3)
lbl_fn_8043CF58_000010F8:
    addi r16, r16, 0x1
    addi r31, r31, 0x5c
lbl_fn_8043CF58_00001100:
    lwz r3, 0x334(r15)
    subi r0, r3, 0x1
    cmpw r16, r0
    blt lbl_fn_8043CF58_00000CBC
    mulli r0, r0, 0x5c
    addi r5, r1, 0x100
    lwz r4, 0x32c(r15)
    li r6, 0x0
    psq_l f2, 0x8(r5), 0, 0
    li r3, 0x0
    psq_l f3, 0x10(r5), 0, 0
    add r4, r4, r0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x1c(r4), 0, 0
    psq_st f2, 0x24(r4), 0, 0
    psq_st f3, 0x2c(r4), 0, 0
    psq_st f4, 0x34(r4), 0, 0
    psq_st f5, 0x3c(r4), 0, 0
    psq_st f6, 0x44(r4), 0, 0
    lwz r4, 0x334(r15)
    lwz r5, 0x32c(r15)
    subi r0, r4, 0x1
    mulli r0, r0, 0x5c
    add r4, r5, r0
    lfs f0, 0x4(r4)
    stfs f0, 0x28(r4)
    lfs f0, 0x8(r4)
    stfs f0, 0x38(r4)
    lfs f0, 0xc(r4)
    stfs f0, 0x48(r4)
    b lbl_fn_8043CF58_000011E8
lbl_fn_8043CF58_00001188:
    lwz r0, 0x32c(r15)
    add r5, r0, r3
    lwzx r0, r3, r0
    cmpwi r0, 0x0
    bge lbl_fn_8043CF58_000011A4
    li r4, 0x0
    b lbl_fn_8043CF58_000011B0
lbl_fn_8043CF58_000011A4:
    mulli r0, r0, 0x30
    lwz r4, 0x134(r15)
    add r4, r4, r0
lbl_fn_8043CF58_000011B0:
    psq_l f2, 0x24(r5), 0, 0
    addi r6, r6, 0x1
    psq_l f3, 0x2c(r5), 0, 0
    addi r3, r3, 0x5c
    psq_l f4, 0x34(r5), 0, 0
    psq_l f5, 0x3c(r5), 0, 0
    psq_l f6, 0x44(r5), 0, 0
    psq_l f1, 0x1c(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
lbl_fn_8043CF58_000011E8:
    lwz r0, 0x334(r15)
    cmpw r6, r0
    blt lbl_fn_8043CF58_00001188
    addi r11, r1, 0x180
    psq_l f31, 0x1c8(r1), 0, 0
    lfd f31, 0x1c0(r1)
    psq_l f30, 0x1b8(r1), 0, 0
    lfd f30, 0x1b0(r1)
    psq_l f29, 0x1a8(r1), 0, 0
    lfd f29, 0x1a0(r1)
    psq_l f28, 0x198(r1), 0, 0
    lfd f28, 0x190(r1)
    psq_l f27, 0x188(r1), 0, 0
    lfd f27, 0x180(r1)
    bl _restgpr_14
    lwz r0, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}

asm void fn_8043D568(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_8043D568_00001244
    lwz r0, 0x0(r4)
    stw r0, 0x54(r3)
lbl_fn_8043D568_00001244:
    li r3, 0x0
    blr
}

asm void fn_8043D580(void)
{
    nofralloc
    lwz r0, 0xfc(r3)
    stw r4, 0x2d4(r3)
    oris r0, r0, 0x1
    stw r0, 0xfc(r3)
    blr
}

asm void fn_8043D594(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_8043D594_000012C4
    lis r5, lbl_807543BC@ha
    li r3, 0x1a0
    addi r5, r5, lbl_807543BC@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8043D594_000012C8
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_8043D618
    b lbl_fn_8043D594_000012C8
lbl_fn_8043D594_000012C4:
    li r3, 0x0
lbl_fn_8043D594_000012C8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8043D618(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC568
    lfs f1, lbl_808869C8
    lis r3, lbl_8078F178@ha
    li r0, 0x0
    lfs f0, lbl_808869CC
    addi r3, r3, lbl_8078F178@l
    stw r3, 0x0(r31)
    mr r3, r31
    stw r0, 0xf4(r31)
    stw r0, 0xfc(r31)
    stw r0, 0x100(r31)
    stfs f1, 0x104(r31)
    stw r0, 0x108(r31)
    stw r0, 0x10c(r31)
    stw r0, 0x110(r31)
    stw r0, 0x114(r31)
    stw r0, 0x118(r31)
    stw r0, 0x11c(r31)
    stw r0, 0x120(r31)
    stw r0, 0x124(r31)
    stw r0, 0x12c(r31)
    stw r0, 0x134(r31)
    stw r0, 0x13c(r31)
    stw r0, 0x140(r31)
    stfs f0, 0x144(r31)
    stw r0, 0x160(r31)
    stw r0, 0x164(r31)
    stw r0, 0x168(r31)
    stw r0, 0x16c(r31)
    stw r0, 0x170(r31)
    stw r0, 0x174(r31)
    stw r0, 0x178(r31)
    stw r0, 0x17c(r31)
    stw r0, 0x180(r31)
    stw r0, 0x184(r31)
    stw r0, 0x188(r31)
    stw r0, 0x18c(r31)
    stw r0, 0x198(r31)
    stw r0, 0x54(r31)
    stw r0, 0x128(r31)
    stw r0, 0x138(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8043D6E4(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    blr
}

asm void fn_8043D6F4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r30, r3
    mr r31, r4
    beq lbl_fn_8043D6F4_000015E4
    lis r4, lbl_8078F178@ha
    li r28, 0x0
    addi r4, r4, lbl_8078F178@l
    stw r4, 0x0(r3)
    li r27, 0x0
    b lbl_fn_8043D6F4_0000140C
lbl_fn_8043D6F4_000013F8:
    lwz r3, 0x124(r30)
    lwzx r3, r3, r27
    bl dtor_80084684
    addi r27, r27, 0x4
    addi r28, r28, 0x1
lbl_fn_8043D6F4_0000140C:
    lwz r0, 0x128(r30)
    cmplw r28, r0
    blt lbl_fn_8043D6F4_000013F8
    lwz r0, 0x128(r30)
    addic. r29, r30, 0x140
    lwz r3, 0x138(r30)
    subf r0, r0, r0
    stw r0, 0x128(r30)
    subf r0, r3, r3
    stw r0, 0x138(r30)
    beq lbl_fn_8043D6F4_000014EC
    addic. r4, r29, 0x44
    beq lbl_fn_8043D6F4_00001468
    beq lbl_fn_8043D6F4_00001468
    beq lbl_fn_8043D6F4_00001468
    beq lbl_fn_8043D6F4_00001468
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8043D6F4_00001468
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8043D6F4_00001468:
    addic. r4, r29, 0x38
    beq lbl_fn_8043D6F4_00001494
    beq lbl_fn_8043D6F4_00001494
    beq lbl_fn_8043D6F4_00001494
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8043D6F4_00001494
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8043D6F4_00001494:
    addic. r4, r29, 0x2c
    beq lbl_fn_8043D6F4_000014C0
    beq lbl_fn_8043D6F4_000014C0
    beq lbl_fn_8043D6F4_000014C0
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8043D6F4_000014C0
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8043D6F4_000014C0:
    addic. r4, r29, 0x20
    beq lbl_fn_8043D6F4_000014EC
    beq lbl_fn_8043D6F4_000014EC
    beq lbl_fn_8043D6F4_000014EC
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8043D6F4_000014EC
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8043D6F4_000014EC:
    addic. r4, r30, 0x134
    beq lbl_fn_8043D6F4_00001518
    beq lbl_fn_8043D6F4_00001518
    beq lbl_fn_8043D6F4_00001518
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8043D6F4_00001518
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8043D6F4_00001518:
    addic. r4, r30, 0x124
    beq lbl_fn_8043D6F4_00001548
    beq lbl_fn_8043D6F4_00001548
    beq lbl_fn_8043D6F4_00001548
    beq lbl_fn_8043D6F4_00001548
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8043D6F4_00001548
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8043D6F4_00001548:
    addic. r29, r30, 0x114
    beq lbl_fn_8043D6F4_000015AC
    beq lbl_fn_8043D6F4_000015AC
    beq lbl_fn_8043D6F4_000015AC
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_8043D6F4_000015AC
    lwz r27, 0x4(r29)
    mulli r3, r27, 0xc
    subf r0, r27, r27
    stw r0, 0x4(r29)
    add r28, r4, r3
    b lbl_fn_8043D6F4_0000159C
lbl_fn_8043D6F4_0000157C:
    subic. r28, r28, 0xc
    beq lbl_fn_8043D6F4_00001598
    lwz r0, 0x0(r28)
    srwi. r0, r0, 31
    beq lbl_fn_8043D6F4_00001598
    lwz r3, 0x8(r28)
    bl dtor_80084684
lbl_fn_8043D6F4_00001598:
    subi r27, r27, 0x1
lbl_fn_8043D6F4_0000159C:
    cmpwi r27, 0x0
    bne lbl_fn_8043D6F4_0000157C
    lwz r3, 0x0(r29)
    bl dtor_80084684
lbl_fn_8043D6F4_000015AC:
    addic. r0, r30, 0x108
    beq lbl_fn_8043D6F4_000015C8
    lwz r0, 0x108(r30)
    srwi. r0, r0, 31
    beq lbl_fn_8043D6F4_000015C8
    lwz r3, 0x110(r30)
    bl dtor_80084684
lbl_fn_8043D6F4_000015C8:
    mr r3, r30
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_8043D6F4_000015E4
    mr r3, r30
    bl dtor_80084684
lbl_fn_8043D6F4_000015E4:
    mr r3, r30
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8043D930(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    slwi r0, r4, 2
    add r3, r3, r0
    blr
}

asm void fn_8043D940(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_8043D940_000016A4
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_8043D940_00001690
lbl_fn_8043D940_00001640:
    lwz r3, 0x124(r29)
    lwzx r3, r3, r31
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8043D940_00001674
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8043D940_00001674
    li r4, 0x0
    bl fn_800D246C
    li r0, 0x0
    b lbl_fn_8043D940_00001678
lbl_fn_8043D940_00001674:
    li r0, 0x1
lbl_fn_8043D940_00001678:
    cmpwi r0, 0x0
    beq lbl_fn_8043D940_00001688
    li r3, 0x0
    b lbl_fn_8043D940_000016A8
lbl_fn_8043D940_00001688:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_8043D940_00001690:
    lwz r0, 0x128(r29)
    cmplw r30, r0
    blt lbl_fn_8043D940_00001640
    li r3, 0x1
    b lbl_fn_8043D940_000016A8
lbl_fn_8043D940_000016A4:
    li r3, 0x0
lbl_fn_8043D940_000016A8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8043D9F8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    lwz r12, 0x0(r3)
    mr r28, r3
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_808869CC
    li r30, 0x0
    li r0, 0x1
    stw r0, 0x8(r1)
    mr r3, r28
    addi r4, r1, 0x8
    stw r30, 0xc(r1)
    stw r30, 0x10(r1)
    stw r30, 0x14(r1)
    stw r30, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r28)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    bl fn_80680CF8
    lis r31, 0x8889
    lwz r0, 0xf8(r28)
    subi r4, r31, 0x7777
    stw r30, 0x120(r28)
    mulhw r4, r4, r3
    cmpwi r0, 0x0
    add r0, r4, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3c
    subf r0, r0, r3
    stw r0, 0x100(r28)
    bne lbl_fn_8043D9F8_00001838
    li r29, 0x0
lbl_fn_8043D9F8_00001770:
    lwz r3, 0x120(r28)
    lwz r0, 0x128(r28)
    cmpw r3, r0
    bge lbl_fn_8043D9F8_000017FC
    lwz r5, 0x124(r28)
    slwi r4, r3, 2
    lwzx r3, r5, r4
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8043D9F8_000017FC
    lwz r3, 0x100(r28)
    subic. r0, r3, 0x1
    stw r0, 0x100(r28)
    bge lbl_fn_8043D9F8_000017FC
    lwzx r3, r5, r4
    bl fn_8043E770
    bl fn_80680CF8
    subi r0, r31, 0x7777
    lwz r4, 0x120(r28)
    mulhw r6, r0, r3
    lwz r0, 0x128(r28)
    addi r4, r4, 0x1
    stw r4, 0x120(r28)
    lwz r5, 0xfc(r28)
    cmpw r0, r4
    add r0, r6, r3
    srawi r0, r0, 3
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0xf
    subf r0, r0, r3
    add r0, r5, r0
    stw r0, 0x100(r28)
    bgt lbl_fn_8043D9F8_000017FC
    stw r30, 0x120(r28)
lbl_fn_8043D9F8_000017FC:
    li r27, 0x0
    li r26, 0x0
    b lbl_fn_8043D9F8_00001820
lbl_fn_8043D9F8_00001808:
    lwz r3, 0x124(r28)
    li r4, 0x1
    lwzx r3, r3, r26
    bl fn_8043EA64
    addi r26, r26, 0x4
    addi r27, r27, 0x1
lbl_fn_8043D9F8_00001820:
    lwz r0, 0x128(r28)
    cmplw r27, r0
    blt lbl_fn_8043D9F8_00001808
    addi r29, r29, 0x1
    cmpwi r29, 0x5dc
    blt lbl_fn_8043D9F8_00001770
lbl_fn_8043D9F8_00001838:
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8043DB84(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8043DB84_00001888
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_8043DB84_00001888:
    lwz r3, 0x120(r31)
    lwz r0, 0x128(r31)
    cmpw r3, r0
    bge lbl_fn_8043DB84_0000191C
    lwz r5, 0x124(r31)
    slwi r4, r3, 2
    lwzx r3, r5, r4
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8043DB84_0000191C
    lwz r3, 0x100(r31)
    subic. r0, r3, 0x1
    stw r0, 0x100(r31)
    bge lbl_fn_8043DB84_0000191C
    lwzx r3, r5, r4
    bl fn_8043E770
    bl fn_80680CF8
    lis r5, 0x8889
    lwz r4, 0x120(r31)
    subi r5, r5, 0x7777
    lwz r0, 0x128(r31)
    mulhw r6, r5, r3
    addi r4, r4, 0x1
    stw r4, 0x120(r31)
    cmpw r0, r4
    lwz r5, 0xfc(r31)
    add r0, r6, r3
    srawi r0, r0, 3
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0xf
    subf r0, r0, r3
    add r0, r5, r0
    stw r0, 0x100(r31)
    bgt lbl_fn_8043DB84_0000191C
    li r0, 0x0
    stw r0, 0x120(r31)
lbl_fn_8043DB84_0000191C:
    li r30, 0x0
    li r29, 0x0
    b lbl_fn_8043DB84_00001940
lbl_fn_8043DB84_00001928:
    lwz r3, 0x124(r31)
    li r4, 0x0
    lwzx r3, r3, r29
    bl fn_8043EA64
    addi r29, r29, 0x4
    addi r30, r30, 0x1
lbl_fn_8043DB84_00001940:
    lwz r0, 0x128(r31)
    cmplw r30, r0
    blt lbl_fn_8043DB84_00001928
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8043DC9C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x9c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8043DC9C_00001A14
    lwz r4, lbl_8087F0A8
    lwz r0, 0x74(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8043DC9C_000019B0
    bl fn_803EDCF4
lbl_fn_8043DC9C_000019B0:
    lwz r0, 0x198(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8043DC9C_00001A14
    lfs f31, lbl_808869C8
    li r29, 0x0
    li r30, 0x0
    lis r31, 0xff00
    b lbl_fn_8043DC9C_00001A08
lbl_fn_8043DC9C_000019D0:
    lwz r0, 0x134(r28)
    addi r5, r31, 0xff
    lwz r3, lbl_8087EEB0
    li r4, 0xc
    add r6, r0, r30
    lfs f4, lbl_808869CC
    lfs f0, 0x4(r6)
    lfsx f1, r30, r0
    fadds f2, f31, f0
    lfs f3, 0x8(r6)
    lfs f5, lbl_808869D0
    bl fn_80063200
    addi r30, r30, 0xc
    addi r29, r29, 0x1
lbl_fn_8043DC9C_00001A08:
    lwz r0, 0x138(r28)
    cmplw r29, r0
    blt lbl_fn_8043DC9C_000019D0
lbl_fn_8043DC9C_00001A14:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8043DD70(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8043DD78(void)
{
    nofralloc
    stwu r1, -0x780(r1)
    mflr r0
    stw r0, 0x784(r1)
    stw r31, 0x77c(r1)
    stw r30, 0x778(r1)
    stw r29, 0x774(r1)
    mr r29, r3
    addi r3, r3, 0x140
    bl fn_8043E07C
    addi r3, r29, 0x134
    bl fn_8043D6E4
    addi r3, r29, 0x114
    bl fn_80223EE0
    addi r3, r1, 0x24
    bl fn_80057A64
    addi r3, r29, 0x60
    bl fn_8047059C
    mr r31, r3
    addi r3, r29, 0x60
    bl fn_80470580
    mr r4, r3
    mr r5, r31
    addi r3, r1, 0x130
    bl fn_803EFCA8
    lis r31, lbl_807543BC@ha
    addi r31, r31, lbl_807543BC@l
lbl_fn_8043DD78_00001AAC:
    addi r3, r1, 0x130
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r30, r3
    cmpwi r0, 0x3b
    beq lbl_fn_8043DD78_00001CC8
    addi r4, r31, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8043DD78_00001B70
    addi r3, r1, 0x130
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x30
    bl strcpy
    addi r3, r1, 0x30
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_8043DD78_00001CC8
    mr r5, r31
    mr r6, r31
    li r3, 0x30
    li r4, 0xc
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8043DD78_00001B20
    mr r4, r29
    bl fn_8043E0E8
lbl_fn_8043DD78_00001B20:
    stw r3, 0x8(r1)
    addi r3, r1, 0x18
    addi r4, r1, 0x30
    bl fn_8003E4A4
    mr r3, r29
    addi r4, r1, 0x18
    bl fn_8043E134
    lwz r5, 0x8(r1)
    li r4, -0x1
    stw r3, 0x8(r5)
    addi r3, r1, 0x18
    bl dtor_80013D60
    lwz r3, 0x8(r1)
    li r4, 0x1
    lwz r3, 0x8(r3)
    bl fn_800D246C
    addi r3, r29, 0x124
    addi r4, r1, 0x8
    bl fn_8043E1F0
    b lbl_fn_8043DD78_00001CC8
lbl_fn_8043DD78_00001B70:
    mr r3, r30
    addi r4, r31, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8043DD78_00001B9C
    addi r3, r1, 0x130
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x108
    bl fn_8020A780
    b lbl_fn_8043DD78_00001CC8
lbl_fn_8043DD78_00001B9C:
    mr r3, r30
    addi r4, r31, 0xe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8043DD78_00001BE0
    addi r3, r1, 0x130
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0xc
    bl fn_8003E4A4
    addi r3, r29, 0x114
    addi r4, r1, 0xc
    bl fn_801207D4
    addi r3, r1, 0xc
    li r4, -0x1
    bl dtor_80013D60
    b lbl_fn_8043DD78_00001CC8
lbl_fn_8043DD78_00001BE0:
    mr r3, r30
    addi r4, r31, 0x1b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8043DD78_00001C08
    addi r3, r1, 0x130
    bl fn_8005B9CC
    bl fn_800DC12C
    stw r3, 0x194(r29)
    b lbl_fn_8043DD78_00001CC8
lbl_fn_8043DD78_00001C08:
    mr r3, r30
    addi r4, r31, 0x31
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8043DD78_00001C5C
    addi r3, r1, 0x130
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x24(r1)
    addi r3, r1, 0x130
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x28(r1)
    addi r3, r1, 0x130
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x2c(r1)
    addi r3, r29, 0x134
    addi r4, r1, 0x24
    bl fn_8032AC1C
    b lbl_fn_8043DD78_00001CC8
lbl_fn_8043DD78_00001C5C:
    mr r3, r30
    addi r4, r31, 0x3c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8043DD78_00001C84
    addi r3, r1, 0x130
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x104(r29)
    b lbl_fn_8043DD78_00001CC8
lbl_fn_8043DD78_00001C84:
    mr r3, r30
    addi r4, r31, 0x47
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8043DD78_00001CC8
    addi r3, r1, 0x130
    bl fn_8005B9CC
    bl fn_800DC12C
    stw r3, 0xf4(r29)
    addi r3, r1, 0x130
    bl fn_8005B9CC
    bl fn_800DC12C
    stw r3, 0xfc(r29)
    addi r3, r1, 0x130
    bl fn_8005B9CC
    bl fn_800DC12C
    stw r3, 0xf8(r29)
lbl_fn_8043DD78_00001CC8:
    addi r3, r1, 0x130
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8043DD78_00001AAC
    addi r3, r29, 0x140
    addi r4, r29, 0x134
    bl fn_8032AF90
    li r30, 0x0
    b lbl_fn_8043DD78_00001D1C
lbl_fn_8043DD78_00001CEC:
    addi r3, r29, 0x108
    bl fn_8004212C
    mr r31, r3
    mr r4, r30
    addi r3, r29, 0x124
    bl fn_8043D930
    lwz r3, 0x0(r3)
    mr r4, r31
    lfs f1, 0x104(r29)
    addi r5, r29, 0x114
    bl fn_8043E6B0
    addi r30, r30, 0x1
lbl_fn_8043DD78_00001D1C:
    addi r3, r29, 0x124
    bl fn_800E0AA8
    cmplw r30, r3
    blt lbl_fn_8043DD78_00001CEC
    lwz r0, 0x784(r1)
    lwz r31, 0x77c(r1)
    lwz r30, 0x778(r1)
    lwz r29, 0x774(r1)
    mtlr r0
    addi r1, r1, 0x780
    blr
}

asm void fn_8043E07C(void)
{
    nofralloc
    lfs f0, lbl_808869CC
    li r0, 0x0
    lis r7, lbl_807C7030@ha
    stw r0, 0x0(r3)
    addi r7, r7, lbl_807C7030@l
    lwz r0, 0x24(r3)
    stfs f0, 0x4(r3)
    lwz r4, 0x30(r3)
    subf r6, r0, r0
    psq_l f1, 0x0(r7), 0, 0
    lfs f2, 0x8(r7)
    subf r5, r4, r4
    lwz r0, 0x3c(r3)
    psq_st f1, 0x8(r3), 0, 0
    lwz r8, 0x48(r3)
    subf r4, r0, r0
    stfs f2, 0x10(r3)
    subf r0, r8, r8
    psq_l f1, 0x0(r7), 0, 0
    lfs f2, 0x8(r7)
    stfs f2, 0x1c(r3)
    psq_st f1, 0x14(r3), 0, 0
    stw r6, 0x24(r3)
    stw r5, 0x30(r3)
    stw r4, 0x3c(r3)
    stw r0, 0x48(r3)
    blr
}

asm void fn_8043E0E8(void)
{
    nofralloc
    li r0, 0x0
    lis r5, lbl_807C7030@ha
    stw r4, 0x0(r3)
    addi r5, r5, lbl_807C7030@l
    lfs f0, lbl_808869C8
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x14(r3)
    psq_st f1, 0xc(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x20(r3)
    psq_st f1, 0x18(r3), 0, 0
    stfs f0, 0x24(r3)
    stw r0, 0x28(r3)
    stw r0, 0x2c(r3)
    blr
}

asm void fn_8043E134(void)
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
    beq lbl_fn_8043E134_00001E9C
    li r3, 0x1428
    li r4, 0x1
    la r5, lbl_8087DFC4
    la r6, lbl_8087DFC0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8043E134_00001E94
    mr r4, r29
    li r5, 0x5
    li r6, 0x0
    bl fn_801354B4
    lis r4, lbl_8078E8A0@ha
    mr r3, r31
    addi r4, r4, lbl_8078E8A0@l
    stw r4, 0x0(r31)
    lwz r0, 0x0(r30)
    srwi. r0, r0, 31
    bne lbl_fn_8043E134_00001E80
    addi r4, r30, 0x1
    b lbl_fn_8043E134_00001E84
lbl_fn_8043E134_00001E80:
    lwz r4, 0x8(r30)
lbl_fn_8043E134_00001E84:
    bl fn_80136544
    addi r3, r31, 0x1188
    addi r4, r31, 0xb0
    bl fn_8011D424
lbl_fn_8043E134_00001E94:
    mr r3, r31
    b lbl_fn_8043E134_00001EA0
lbl_fn_8043E134_00001E9C:
    li r3, 0x0
lbl_fn_8043E134_00001EA0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8043E1F0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    stw r28, 0x30(r1)
    lwz r6, 0x4(r3)
    lwz r5, 0x8(r3)
    cmplw r6, r5
    bge lbl_fn_8043E1F0_00001F10
    addi r5, r6, 0x1
    stw r5, 0x4(r3)
    subi r0, r5, 0x1
    lwz r3, 0x0(r3)
    slwi r0, r0, 2
    lwz r4, 0x0(r4)
    stwx r4, r3, r0
    b lbl_fn_8043E1F0_00002190
lbl_fn_8043E1F0_00001F10:
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_8043E1F0_00001F48
    lis r4, lbl_807543BC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807543BC@l
    addi r3, r3, __files@l
    addi r4, r4, 0x4d
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8043E1F0_00001F48:
    li r5, 0x0
    addi r4, r29, 0x8
    lis r3, 0x4000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x10(r1)
    ble lbl_fn_8043E1F0_00001FB0
    lis r4, lbl_807543BC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807543BC@l
    addi r3, r3, __files@l
    addi r4, r4, 0x4d
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8043E1F0_00001FB0:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_8043E1F0_00002000
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x10(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_8043E1F0_00001FF4
    addi r3, r1, 0x10
lbl_fn_8043E1F0_00001FF4:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_8043E1F0_00002044
lbl_fn_8043E1F0_00002000:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_8043E1F0_0000203C
    addi r3, r31, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_8043E1F0_00002030
    addi r3, r1, 0x10
lbl_fn_8043E1F0_00002030:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_8043E1F0_00002044
lbl_fn_8043E1F0_0000203C:
    lis r3, 0x4000
    subi r31, r3, 0x1
lbl_fn_8043E1F0_00002044:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_8043E1F0_00002078
    lis r4, lbl_807543BC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807543BC@l
    addi r3, r3, __files@l
    addi r4, r4, 0x4d
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8043E1F0_00002078:
    slwi r3, r31, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_8043E1F0_000020AC
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8043E1F0_000020AC:
    lwz r0, 0x18(r1)
    stw r28, 0x14(r1)
    slwi r3, r0, 2
    lwz r4, 0x0(r30)
    stw r31, 0x1c(r1)
    lwz r0, 0x4(r29)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r28, r0
    stwx r4, r3, r0
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x4(r29)
    lwz r30, 0x0(r29)
    slwi r4, r4, 2
    add r5, r30, r4
    subf r5, r30, r5
    mr r4, r30
    srawi r5, r5, 2
    addze r28, r5
    subf r0, r28, r0
    stw r0, 0x24(r1)
    slwi r31, r28, 2
    slwi r0, r0, 2
    mr r5, r31
    add r3, r3, r0
    bl memcpy
    mr r3, r30
    mr r5, r31
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    li r4, 0x0
    addic. r3, r1, 0x14
    add r0, r0, r28
    stw r0, 0x18(r1)
    stw r4, 0x4(r29)
    lwz r3, 0x8(r29)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r29)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r29)
    stw r4, 0x18(r1)
    beq lbl_fn_8043E1F0_00002190
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8043E1F0_00002190
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_8043E1F0_00002190:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8043E4E4(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_8043E4E4_000021C0
    li r3, 0x0
    blr
lbl_fn_8043E4E4_000021C0:
    lwz r0, 0x0(r4)
    stw r0, 0x54(r3)
    cmplwi r0, 0x1
    ble lbl_fn_8043E4E4_000021D8
    li r0, 0x0
    stw r0, 0x54(r3)
lbl_fn_8043E4E4_000021D8:
    lwz r3, 0x54(r3)
    blr
}

asm void fn_8043E514(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_808869CC
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8043E56C(void)
{
    nofralloc
    lwz r3, 0x54(r3)
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_8043E580(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    addi r4, r1, 0x8
    stw r29, 0x34(r1)
    mr r29, r3
    bl fn_803EC758
    lwz r0, 0xf0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8043E580_000022AC
    cmpwi r30, 0x0
    beq lbl_fn_8043E580_000022AC
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_8043E580_000022AC
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0xf0(r29)
    mr r30, r3
    b lbl_fn_8043E580_000022B0
lbl_fn_8043E580_000022AC:
    li r30, 0x0
lbl_fn_8043E580_000022B0:
    lis r31, lbl_807543BC@ha
    mr r3, r30
    addi r31, r31, lbl_807543BC@l
    addi r5, r29, 0x54
    addi r4, r31, 0x61
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_808869D8
    mr r3, r30
    lfs f2, lbl_808869DC
    addi r4, r31, 0x67
    lfs f3, lbl_808869E0
    addi r5, r29, 0x6c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_808869E4
    mr r3, r30
    lfs f2, lbl_808869E8
    addi r4, r31, 0x6b
    lfs f3, lbl_808869EC
    addi r5, r29, 0x78
    li r6, 0x0
    li r7, 0x0
    bl fn_80088724
    lfs f1, lbl_808869D8
    mr r3, r30
    lfs f2, lbl_808869DC
    addi r4, r31, 0x6f
    lfs f3, lbl_808869E0
    addi r5, r29, 0x90
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    mr r3, r30
    addi r4, r31, 0x73
    addi r5, r29, 0x198
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8043E6B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f1
    stw r31, 0x14(r1)
    stw r30, 0x10(r1)
    stw r29, 0xc(r1)
    mr r29, r5
    stw r28, 0x8(r1)
    mr r28, r3
    lwz r6, 0x8(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8043E6B0_00002414
    mr r5, r4
    addi r3, r6, 0xb0
    li r4, 0x13f
    bl fn_80097A88
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_8043E6B0_00002408
lbl_fn_8043E6B0_000023D0:
    lwz r0, 0x0(r29)
    addi r4, r30, 0xef
    lwz r3, 0x8(r28)
    add r5, r0, r31
    lwzx r0, r31, r0
    addi r3, r3, 0xb0
    srwi. r0, r0, 31
    bne lbl_fn_8043E6B0_000023F8
    addi r5, r5, 0x1
    b lbl_fn_8043E6B0_000023FC
lbl_fn_8043E6B0_000023F8:
    lwz r5, 0x8(r5)
lbl_fn_8043E6B0_000023FC:
    bl fn_80097A88
    addi r31, r31, 0xc
    addi r30, r30, 0x1
lbl_fn_8043E6B0_00002408:
    lwz r0, 0x4(r29)
    cmplw r30, r0
    blt lbl_fn_8043E6B0_000023D0
lbl_fn_8043E6B0_00002414:
    stfs f31, 0x24(r28)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    lwz r29, 0xc(r1)
    lwz r28, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8043E770(void)
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
    mr r31, r3
    stw r30, 0xe8(r1)
    stw r29, 0xe4(r1)
    lwz r6, 0x0(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8043E770_00002704
    lwz r7, 0x8(r3)
    cmpwi r7, 0x0
    beq lbl_fn_8043E770_00002704
    lwz r0, 0x138(r6)
    cmplwi r0, 0x2
    blt lbl_fn_8043E770_0000269C
    lwz r4, 0x134(r6)
    addi r5, r1, 0x5c
    lfs f0, lbl_808869F0
    addi r30, r1, 0x50
    lfs f2, 0x8(r4)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r7), 0, 0
    stfs f2, 0x530(r7)
    lwz r4, 0x28(r3)
    addi r0, r4, 0x1
    stw r0, 0x28(r3)
    lwz r3, 0x134(r6)
    lfs f4, 0x14(r3)
    lfs f3, 0x8(r3)
    lfs f6, 0x10(r3)
    fsubs f2, f4, f3
    lfs f4, 0xc(r3)
    lfs f3, 0x0(r3)
    lfs f5, 0x4(r3)
    fsubs f3, f4, f3
    stfs f2, 0x64(r1)
    frsp f4, f2
    stfs f3, 0x5c(r1)
    fsubs f5, f6, f5
    fabs f3, f4
    stfs f5, 0x60(r1)
    psq_l f1, 0x0(r5), 0, 0
    frsp f3, f3
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8043E770_00002530
    lfs f3, 0x50(r1)
    lfs f0, lbl_808869CC
    fcmpo cr0, f3, f0
    ble lbl_fn_8043E770_00002524
    lfs f0, lbl_808869F4
    b lbl_fn_8043E770_00002528
lbl_fn_8043E770_00002524:
    lfs f0, lbl_808869F8
lbl_fn_8043E770_00002528:
    stfs f0, 0x48(r1)
    b lbl_fn_8043E770_00002544
lbl_fn_8043E770_00002530:
    fmr f2, f4
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8043E770_00002544:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808869CC
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
    lfs f0, lbl_808869D4
    psq_l f1, 0x0(r30), 0, 0
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
    lfs f0, lbl_808869F0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8043E770_00002660
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808869CC
    fcmpo cr0, f3, f0
    ble lbl_fn_8043E770_00002650
    lfs f0, lbl_808869F4
    b lbl_fn_8043E770_00002654
lbl_fn_8043E770_00002650:
    lfs f0, lbl_808869F8
lbl_fn_8043E770_00002654:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8043E770_00002674
lbl_fn_8043E770_00002660:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8043E770_00002674:
    addi r3, r1, 0x44
    lfs f2, lbl_808869CC
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x8(r31)
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x53c(r3)
lbl_fn_8043E770_0000269C:
    lwz r3, 0x0(r31)
    lwz r29, 0x194(r3)
    bl fn_80680CF8
    divw r0, r3, r29
    lwz r9, 0x8(r31)
    li r30, 0x1
    lfs f0, lbl_808869D4
    lfs f1, lbl_808869CC
    li r4, 0x0
    mullw r0, r0, r29
    lfs f2, lbl_808869FC
    li r5, 0x13f
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    subf r0, r0, r3
    stw r0, 0x2c(r31)
    stw r30, 0x3fc(r9)
    lwz r3, 0x8(r31)
    stfs f0, 0x2fc(r3)
    lwz r3, 0x8(r31)
    stfs f0, 0x2e8(r3)
    lwz r3, 0x8(r31)
    addi r3, r3, 0xb0
    bl fn_80097C08
    stw r30, 0x4(r31)
lbl_fn_8043E770_00002704:
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8043EA64(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    stfd f31, 0x190(r1)
    psq_st f31, 0x198(r1), 0, 0
    stfd f30, 0x180(r1)
    psq_st f30, 0x188(r1), 0, 0
    stfd f29, 0x170(r1)
    psq_st f29, 0x178(r1), 0, 0
    stw r31, 0x16c(r1)
    stw r30, 0x168(r1)
    mr r30, r4
    stw r29, 0x164(r1)
    mr r29, r3
    stw r28, 0x160(r1)
    lwz r31, 0x0(r3)
    cmpwi r31, 0x0
    beq lbl_fn_8043EA64_00002CBC
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8043EA64_00002C58
    lwz r5, 0x8(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8043EA64_00002B80
    lwz r0, 0x138(r31)
    cmplwi r0, 0x2
    blt lbl_fn_8043EA64_00002B3C
    lwz r0, 0x28(r3)
    addi r6, r1, 0xb0
    lwz r4, 0x134(r31)
    addi r7, r1, 0x98
    mulli r0, r0, 0xc
    lfs f6, 0x530(r5)
    lfs f4, 0x52c(r5)
    addi r3, r1, 0xa4
    lfs f0, 0x528(r5)
    add r4, r4, r0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f2, 0x8(r4)
    lfs f5, 0xb4(r1)
    lfs f3, 0xb0(r1)
    fsubs f6, f2, f6
    fsubs f4, f5, f4
    stfs f2, 0xb8(r1)
    fsubs f0, f3, f0
    stfs f4, 0xa8(r1)
    stfs f0, 0xa4(r1)
    stfs f6, 0xac(r1)
    psq_l f1, 0x534(r5), 0, 0
    lfs f2, 0x53c(r5)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0xa0(r1)
    bl fn_805F9940
    lfs f2, 0xac(r1)
    addi r3, r1, 0xa4
    fmr f31, f1
    lfs f0, lbl_808869F0
    fabs f3, f2
    addi r28, r1, 0x80
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    frsp f3, f3
    stfs f2, 0x88(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8043EA64_0000285C
    lfs f3, 0x80(r1)
    lfs f0, lbl_808869CC
    fcmpo cr0, f3, f0
    ble lbl_fn_8043EA64_00002850
    lfs f0, lbl_808869F4
    b lbl_fn_8043EA64_00002854
lbl_fn_8043EA64_00002850:
    lfs f0, lbl_808869F8
lbl_fn_8043EA64_00002854:
    stfs f0, 0x48(r1)
    b lbl_fn_8043EA64_00002870
lbl_fn_8043EA64_0000285C:
    frsp f2, f2
    lfs f1, 0x80(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8043EA64_00002870:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xf0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808869CC
    addi r4, r1, 0x38
    lfs f29, 0xf8(r1)
    mr r5, r4
    lfs f30, 0xf4(r1)
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
    lfs f0, lbl_808869D4
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x88(r1)
    stfs f3, 0x150(r1)
    stfs f3, 0x154(r1)
    stfs f3, 0x158(r1)
    stfs f0, 0x15c(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0x120(r1)
    stfs f30, 0x124(r1)
    stfs f29, 0x128(r1)
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
    lfs f0, lbl_808869F0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8043EA64_0000298C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808869CC
    fcmpo cr0, f3, f0
    ble lbl_fn_8043EA64_0000297C
    lfs f0, lbl_808869F4
    b lbl_fn_8043EA64_00002980
lbl_fn_8043EA64_0000297C:
    lfs f0, lbl_808869F8
lbl_fn_8043EA64_00002980:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8043EA64_000029A0
lbl_fn_8043EA64_0000298C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8043EA64_000029A0:
    addi r3, r1, 0x44
    lfs f3, lbl_808869CC
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_807543A0@ha
    psq_st f1, 0x0(r28), 0, 0
    fmr f2, f3
    lfs f0, 0x9c(r1)
    lfs f4, 0x84(r1)
    stfs f2, 0x88(r1)
    fsubs f1, f4, f0
    lfd f2, lbl_807543A0@l(r3)
    stfs f3, 0x4c(r1)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_808869E8
    fcmpo cr0, f4, f0
    ble lbl_fn_8043EA64_000029EC
    lfs f0, lbl_80886A00
    fsubs f4, f4, f0
lbl_fn_8043EA64_000029EC:
    lfs f0, lbl_808869E4
    fcmpo cr0, f4, f0
    bge lbl_fn_8043EA64_00002A00
    lfs f0, lbl_80886A00
    fadds f4, f4, f0
lbl_fn_8043EA64_00002A00:
    fabs f0, f4
    lfs f3, lbl_80886A04
    frsp f0, f0
    fcmpo cr0, f0, f3
    ble lbl_fn_8043EA64_00002A2C
    lfs f0, lbl_808869CC
    fcmpo cr0, f4, f0
    ble lbl_fn_8043EA64_00002A24
    b lbl_fn_8043EA64_00002A28
lbl_fn_8043EA64_00002A24:
    lfs f3, lbl_80886A08
lbl_fn_8043EA64_00002A28:
    fmr f4, f3
lbl_fn_8043EA64_00002A2C:
    lfs f0, 0x9c(r1)
    addi r5, r1, 0x98
    lwz r6, 0x8(r29)
    addi r28, r1, 0x8c
    fadds f0, f0, f4
    lfs f2, 0xa0(r1)
    lfs f3, lbl_808869CC
    addi r3, r1, 0xc0
    stfs f0, 0x9c(r1)
    li r4, 0x79
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x534(r6), 0, 0
    lfs f0, lbl_808869D4
    stfs f2, 0x53c(r6)
    lwz r5, 0x8(r29)
    lfs f29, 0x24(r29)
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    psq_st f1, 0x0(r28), 0, 0
    stfs f3, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f0, 0x70(r1)
    lfs f1, 0x538(r5)
    stfs f2, 0x94(r1)
    bl fn_805F8E70
    addi r4, r1, 0x68
    addi r3, r1, 0xc0
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x6c(r1)
    lfs f0, 0x68(r1)
    fmuls f7, f3, f29
    lfs f4, 0x70(r1)
    fmuls f8, f0, f29
    lfs f3, 0x8c(r1)
    lfs f0, 0x90(r1)
    fmuls f6, f4, f29
    fadds f5, f3, f8
    lfs f3, 0x94(r1)
    fadds f4, f0, f7
    lfs f0, lbl_808869D0
    stfs f5, 0x8c(r1)
    fadds f2, f3, f6
    stfs f4, 0x90(r1)
    fcmpo cr0, f31, f0
    lwz r3, 0x8(r29)
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x528(r3), 0, 0
    stfs f8, 0x74(r1)
    stfs f7, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f2, 0x94(r1)
    stfs f2, 0x530(r3)
    bge lbl_fn_8043EA64_00002B80
    lwz r3, 0x28(r29)
    addi r3, r3, 0x1
    stw r3, 0x28(r29)
    lwz r0, 0x138(r31)
    cmpw r3, r0
    blt lbl_fn_8043EA64_00002B80
    li r4, 0x0
    stw r4, 0x28(r29)
    lwz r3, 0x0(r29)
    lwz r0, 0xf4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8043EA64_00002B80
    stw r4, 0x4(r29)
    b lbl_fn_8043EA64_00002B80
lbl_fn_8043EA64_00002B3C:
    lfs f3, lbl_808869CC
    lis r6, lbl_807C7030@ha
    lfs f0, lbl_80886A0C
    addi r4, r1, 0x5c
    stfs f3, 0x5c(r1)
    fmr f2, f3
    addi r6, r6, lbl_807C7030@l
    stfs f0, 0x60(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x530(r5)
    lwz r3, 0x8(r3)
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x534(r3), 0, 0
    stfs f3, 0x64(r1)
    stfs f2, 0x53c(r3)
lbl_fn_8043EA64_00002B80:
    cmpwi r30, 0x0
    bne lbl_fn_8043EA64_00002CBC
    lwz r5, 0x0(r29)
    lwz r0, 0x118(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8043EA64_00002CBC
    lwz r3, 0x2c(r29)
    lwz r4, 0x8(r29)
    addi r0, r3, 0x1
    stw r0, 0x2c(r29)
    addi r31, r4, 0xb0
    lwz r28, 0x194(r5)
    bl fn_80680CF8
    lis r4, 0x51ec
    lwz r0, 0x2c(r29)
    subi r4, r4, 0x7ae1
    mulhw r4, r4, r3
    srawi r4, r4, 5
    srwi r5, r4, 31
    add r4, r4, r5
    mulli r4, r4, 0x64
    subf r3, r4, r3
    add r3, r28, r3
    cmpw r0, r3
    blt lbl_fn_8043EA64_00002C28
    li r0, 0x0
    stw r0, 0x2c(r29)
    lwz r3, 0x0(r29)
    lwz r28, 0x118(r3)
    bl fn_80680CF8
    divwu r0, r3, r28
    lfs f1, lbl_808869CC
    lfs f2, lbl_808869FC
    li r4, 0x3
    li r6, 0x0
    li r7, 0x0
    mullw r0, r0, r28
    li r8, 0x1
    subf r5, r0, r3
    mr r3, r31
    addi r5, r5, 0xef
    bl fn_80097C08
lbl_fn_8043EA64_00002C28:
    lfs f29, 0x2c4(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_80097D7C
    fcmpo cr0, f29, f1
    cror eq, gt, eq
    bne lbl_fn_8043EA64_00002CBC
    lfs f1, lbl_808869CC
    mr r3, r31
    li r4, 0x3
    bl fn_80097CCC
    b lbl_fn_8043EA64_00002CBC
lbl_fn_8043EA64_00002C58:
    lfs f3, lbl_808869CC
    lis r6, lbl_807C7030@ha
    lfs f0, lbl_80886A0C
    addi r5, r1, 0x50
    stfs f3, 0x50(r1)
    fmr f2, f3
    lwz r7, 0x8(r3)
    addi r6, r6, lbl_807C7030@l
    stfs f0, 0x54(r1)
    li r4, 0x3
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x528(r7), 0, 0
    stfs f2, 0x530(r7)
    lwz r5, 0x8(r3)
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x534(r5), 0, 0
    fmr f1, f3
    stfs f2, 0x53c(r5)
    lwz r3, 0x8(r3)
    stfs f3, 0x58(r1)
    addi r3, r3, 0xb0
    bl fn_80097CCC
    li r0, 0x0
    stw r0, 0x2c(r29)
lbl_fn_8043EA64_00002CBC:
    lwz r0, 0x1a4(r1)
    psq_l f31, 0x198(r1), 0, 0
    lfd f31, 0x190(r1)
    psq_l f30, 0x188(r1), 0, 0
    lfd f30, 0x180(r1)
    psq_l f29, 0x178(r1), 0, 0
    lfd f29, 0x170(r1)
    lwz r31, 0x16c(r1)
    lwz r30, 0x168(r1)
    lwz r29, 0x164(r1)
    lwz r28, 0x160(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_8043F028(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80043EAC
    lis r3, lbl_8078F228@ha
    li r0, 0x0
    addi r3, r3, lbl_8078F228@l
    stw r3, 0x0(r31)
    lwz r3, 0x270(r31)
    stw r0, 0x2a8(r31)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8043F028_00002D3C
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8043F028_00002DA8
lbl_fn_8043F028_00002D3C:
    lis r5, lbl_80754498@ha
    li r3, 0x214
    addi r5, r5, lbl_80754498@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8043F028_00002D68
    li r4, 0x505
    bl fn_8008A4E0
lbl_fn_8043F028_00002D68:
    lwz r0, 0x2a8(r31)
    cmpwi r0, 0x0
    stw r3, 0x2a8(r31)
    beq lbl_fn_8043F028_00002D90
    mr r3, r0
    li r4, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8043F028_00002D90:
    lis r4, lbl_80754498@ha
    lwz r3, 0x2a8(r31)
    addi r4, r4, lbl_80754498@l
    li r5, 0x0
    addi r4, r4, 0x1
    bl fn_8008AD4C
lbl_fn_8043F028_00002DA8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8043F0F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_8043F0F4_00002E28
    addic. r0, r3, 0x2a8
    beq lbl_fn_8043F0F4_00002E0C
    lwz r3, 0x2a8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8043F0F4_00002E0C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8043F0F4_00002E0C:
    mr r3, r30
    li r4, 0x0
    bl fn_80044134
    cmpwi r31, 0x0
    ble lbl_fn_8043F0F4_00002E28
    mr r3, r30
    bl dtor_80084684
lbl_fn_8043F0F4_00002E28:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8043F178(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    li r31, 0x0
    stw r30, 0x28(r1)
    mr r30, r3
    bl fn_8004424C
    cmpwi r3, 0x0
    beq lbl_fn_8043F178_00002E70
    li r31, 0x1
lbl_fn_8043F178_00002E70:
    lwz r0, 0x2a8(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8043F178_00002E9C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    b lbl_fn_8043F178_00002EB8
lbl_fn_8043F178_00002E9C:
    lis r5, lbl_8078F210@ha
    lwzu r4, lbl_8078F210@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
lbl_fn_8043F178_00002EB8:
    lwz r5, 0x14(r1)
    addi r3, r1, 0x8
    lwz r4, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8043F178_00002EF4
    lwz r3, 0x2a8(r30)
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_8043F178_00002EF4
    li r31, 0x1
lbl_fn_8043F178_00002EF4:
    mr r3, r31
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8043F244(void)
{
    nofralloc
    mr r3, r7
    b fn_80219E6C
}

asm void fn_8043F24C(void)
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
    mr r31, r3
    stw r30, 0x108(r1)
    lwz r0, 0x284(r3)
    cmpwi r0, 0x3
    bne lbl_fn_8043F24C_00003260
    lwz r3, lbl_8087F120
    li r5, 0x1
    li r30, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_8043F24C_00002FC4
    lwz r0, 0x150(r3)
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r0, 0x50(r3)
    cmpwi r0, 0x70
    beq lbl_fn_8043F24C_00002F8C
    cmpwi r0, 0x71
    beq lbl_fn_8043F24C_00002FB8
    cmpwi r0, 0x6f
    beq lbl_fn_8043F24C_00002FC0
    b lbl_fn_8043F24C_00002FC4
lbl_fn_8043F24C_00002F8C:
    lwz r3, lbl_8087F4F0
    li r30, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_8043F24C_00002FB0
    li r4, 0x70
    bl fn_804444E8
    cmpwi r3, 0x0
    ble lbl_fn_8043F24C_00002FB0
    li r30, 0x1
lbl_fn_8043F24C_00002FB0:
    li r5, 0x0
    b lbl_fn_8043F24C_00002FC4
lbl_fn_8043F24C_00002FB8:
    li r5, 0x0
    b lbl_fn_8043F24C_00002FC4
lbl_fn_8043F24C_00002FC0:
    li r5, 0x0
lbl_fn_8043F24C_00002FC4:
    lwz r3, 0x270(r31)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8043F24C_00002FE8
    lwz r0, 0x560(r3)
    cmpwi r0, 0x62
    bne lbl_fn_8043F24C_00002FE8
    li r30, 0x0
    li r5, 0x0
lbl_fn_8043F24C_00002FE8:
    lis r4, lbl_80754498@ha
    addi r3, r31, 0x10
    addi r4, r4, lbl_80754498@l
    addi r4, r4, 0x10
    bl fn_8009373C
    cmpwi r30, 0x0
    beq lbl_fn_8043F24C_00003258
    lwz r0, 0x2a8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8043F24C_00003030
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0xf8(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0xfc(r1)
    stw r0, 0x100(r1)
    b lbl_fn_8043F24C_0000304C
lbl_fn_8043F24C_00003030:
    lis r5, lbl_8078F21C@ha
    lwzu r4, lbl_8078F21C@l(r5)
    stw r4, 0xf8(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0xfc(r1)
    stw r0, 0x100(r1)
lbl_fn_8043F24C_0000304C:
    lwz r5, 0xf8(r1)
    addi r3, r1, 0x44
    lwz r4, 0xfc(r1)
    lwz r0, 0x100(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8043F24C_00003258
    lwz r3, 0x2a8(r31)
    lwz r0, 0x16c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8043F24C_00003258
    lfs f8, lbl_80886A10
    addi r30, r1, 0xc8
    lfs f7, lbl_80886A14
    addi r3, r1, 0x68
    lfs f0, lbl_80886A18
    psq_l f1, 0x18(r31), 0, 0
    psq_l f2, 0x20(r31), 0, 0
    psq_l f3, 0x28(r31), 0, 0
    psq_l f4, 0x30(r31), 0, 0
    psq_l f5, 0x38(r31), 0, 0
    psq_l f6, 0x40(r31), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    fmr f1, f0
    psq_st f2, 0x8(r30), 0, 0
    fmr f2, f7
    psq_st f3, 0x10(r30), 0, 0
    fmr f3, f8
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    stfs f0, 0x38(r1)
    stfs f7, 0x3c(r1)
    stfs f8, 0x40(r1)
    bl fn_805F90D0
    mr r3, r30
    addi r4, r1, 0x68
    addi r5, r1, 0x98
    bl fn_805F89F0
    addi r4, r1, 0x98
    addi r3, r1, 0x14
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    lwz r30, 0x2a8(r31)
    psq_st f1, 0x8(r30), 0, 0
    psq_st f2, 0x10(r30), 0, 0
    psq_st f3, 0x18(r30), 0, 0
    psq_st f4, 0x20(r30), 0, 0
    psq_st f5, 0x28(r30), 0, 0
    psq_st f6, 0x30(r30), 0, 0
    lfs f8, 0xf0(r1)
    lfs f7, 0xe0(r1)
    lfs f0, 0xd0(r1)
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f8, 0x1c(r1)
    bl fn_805F9940
    lfs f8, 0xec(r1)
    fmr f30, f1
    lfs f7, 0xdc(r1)
    addi r3, r1, 0x20
    lfs f0, 0xcc(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0xe8(r1)
    fmr f31, f1
    lfs f7, 0xd8(r1)
    addi r3, r1, 0x2c
    lfs f0, 0xc8(r1)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x8(r1)
    frsp f0, f30
    stfs f31, 0xc(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x10(r1)
    ble lbl_fn_8043F24C_000031CC
    b lbl_fn_8043F24C_000031D0
lbl_fn_8043F24C_000031CC:
    fmr f7, f0
lbl_fn_8043F24C_000031D0:
    lfs f8, 0x8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_8043F24C_000031E0
    b lbl_fn_8043F24C_000031F8
lbl_fn_8043F24C_000031E0:
    lfs f8, 0xc(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_8043F24C_000031F4
    b lbl_fn_8043F24C_000031F8
lbl_fn_8043F24C_000031F4:
    fmr f8, f0
lbl_fn_8043F24C_000031F8:
    stfs f8, 0x54(r30)
    li r0, 0x0
    addi r5, r1, 0x50
    li r4, 0x0
    stw r0, 0x50(r1)
    lwz r3, 0x2a8(r31)
    bl fn_800902C0
    addic. r3, r1, 0x50
    beq lbl_fn_8043F24C_00003250
    lwz r4, 0x50(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8043F24C_00003250
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8043F24C_00003248
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8043F24C_00003248:
    li r0, 0x0
    stw r0, 0x50(r1)
lbl_fn_8043F24C_00003250:
    lwz r3, 0x2a8(r31)
    bl fn_8008CD60
lbl_fn_8043F24C_00003258:
    mr r3, r31
    bl fn_80044BB0
lbl_fn_8043F24C_00003260:
    lwz r0, 0x134(r1)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_8043F5BC(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_8043F5C4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_807544B8@ha
    stw r0, 0x14(r1)
    lwz r5, lbl_807544B8@l(r5)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80442B50
    li r0, 0x0
    stw r0, 0x20(r31)
    mr r3, r31
    bl fn_80442EA4
    cmpwi r3, 0x0
    beq lbl_fn_8043F5C4_000032D0
    mr r3, r31
    bl fn_8043F694
lbl_fn_8043F5C4_000032D0:
    mr r3, r31
    li r4, 0x208
    li r5, 0x0
    bl fn_80442ECC
    cmpwi r3, 0x0
    beq lbl_fn_8043F5C4_000032F0
    lwz r0, 0x8(r3)
    stw r0, 0x20(r31)
lbl_fn_8043F5C4_000032F0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8043F63C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_8043F63C_00003344
    li r4, -0x1
    bl fn_80442E64
    cmpwi r31, 0x0
    ble lbl_fn_8043F63C_00003344
    mr r3, r30
    bl dtor_80084684
lbl_fn_8043F63C_00003344:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8043F694(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    lwz r4, 0x10(r3)
    mr r28, r3
    addi r30, r4, 0x8
    bl fn_80442EAC
    mr r31, r3
    li r29, 0x0
    lis r26, 0xf0f1
    li r27, 0x3
    b lbl_fn_8043F694_000035B4
lbl_fn_8043F694_00003398:
    lwz r0, 0x0(r30)
    cmpwi r0, 0x205
    beq lbl_fn_8043F694_000033C8
    cmpwi r0, 0x206
    beq lbl_fn_8043F694_0000348C
    cmpwi r0, 0x207
    beq lbl_fn_8043F694_000034F8
    cmpwi r0, 0x208
    beq lbl_fn_8043F694_00003508
    cmpwi r0, 0x209
    beq lbl_fn_8043F694_00003530
    b lbl_fn_8043F694_000035AC
lbl_fn_8043F694_000033C8:
    lwz r0, 0xc(r30)
    subi r3, r26, 0xf0f
    lwz r4, 0x8(r30)
    li r5, 0x0
    mulhwu r0, r3, r0
    srwi r0, r0, 6
    b lbl_fn_8043F694_00003480
lbl_fn_8043F694_000033E4:
    mr r6, r4
    addi r7, r4, 0xc
    addi r8, r4, 0x18
    addi r9, r4, 0x24
    addi r10, r4, 0x30
    mtctr r27
lbl_fn_8043F694_000033FC:
    lfs f0, 0x0(r6)
    stfs f0, 0x10(r1)
    lwz r3, 0x10(r1)
    stwbrx r3, r0, r6
    lfs f0, 0xc(r6)
    stfs f0, 0x14(r1)
    lwz r3, 0x14(r1)
    stwbrx r3, r0, r7
    addi r7, r7, 0x4
    lfs f0, 0x18(r6)
    stfs f0, 0x18(r1)
    lwz r3, 0x18(r1)
    stwbrx r3, r0, r8
    addi r8, r8, 0x4
    lfs f0, 0x24(r6)
    stfs f0, 0x1c(r1)
    lwz r3, 0x1c(r1)
    stwbrx r3, r0, r9
    addi r9, r9, 0x4
    lfs f0, 0x30(r6)
    addi r6, r6, 0x4
    stfs f0, 0x20(r1)
    lwz r3, 0x20(r1)
    stwbrx r3, r0, r10
    addi r10, r10, 0x4
    bdnz lbl_fn_8043F694_000033FC
    lfs f0, 0x3c(r4)
    addi r6, r4, 0x3c
    stfs f0, 0x24(r1)
    addi r4, r4, 0x44
    addi r5, r5, 0x1
    lwz r3, 0x24(r1)
    stwbrx r3, r0, r6
lbl_fn_8043F694_00003480:
    cmplw r5, r0
    blt lbl_fn_8043F694_000033E4
    b lbl_fn_8043F694_000035AC
lbl_fn_8043F694_0000348C:
    lwz r3, 0x8(r30)
    lwz r4, 0x0(r3)
    addi r0, r3, 0x4
    stwbrx r4, r0, r3
    lwz r4, 0x4(r3)
    stwbrx r4, r0, r0
    addi r4, r3, 0x18
    lfs f0, 0x18(r3)
    stfs f0, 0x8(r1)
    lwz r0, 0x8(r1)
    stwbrx r0, r0, r4
    addi r4, r3, 0xc
    lfs f0, 0xc(r3)
    stfs f0, 0xc(r1)
    lwz r0, 0xc(r1)
    stwbrx r0, r0, r4
    addi r4, r3, 0x10
    lfs f0, 0x10(r3)
    stfs f0, 0xc(r1)
    lwz r0, 0xc(r1)
    stwbrx r0, r0, r4
    addi r4, r3, 0x14
    lfs f0, 0x14(r3)
    stfs f0, 0xc(r1)
    lwz r0, 0xc(r1)
    stwbrx r0, r0, r4
    b lbl_fn_8043F694_000035AC
lbl_fn_8043F694_000034F8:
    lwz r4, 0x8(r30)
    mr r3, r28
    bl fn_8043F908
    b lbl_fn_8043F694_000035AC
lbl_fn_8043F694_00003508:
    lwz r3, 0x8(r30)
    lwz r4, 0x0(r3)
    addi r0, r3, 0x4
    stwbrx r4, r0, r3
    lwz r4, 0x4(r3)
    stwbrx r4, r0, r0
    addi r0, r3, 0x8
    lwz r4, 0x8(r3)
    stwbrx r4, r0, r0
    b lbl_fn_8043F694_000035AC
lbl_fn_8043F694_00003530:
    lwz r0, 0xc(r30)
    lwz r3, 0x8(r30)
    srwi r0, r0, 5
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8043F694_000035AC
lbl_fn_8043F694_00003548:
    lwz r4, 0x0(r3)
    addi r0, r3, 0x4
    stwbrx r4, r0, r3
    lwz r4, 0x4(r3)
    stwbrx r4, r0, r0
    addi r0, r3, 0x8
    lwz r4, 0x8(r3)
    stwbrx r4, r0, r0
    addi r0, r3, 0xc
    lwz r4, 0xc(r3)
    stwbrx r4, r0, r0
    addi r0, r3, 0x10
    lwz r4, 0x10(r3)
    stwbrx r4, r0, r0
    addi r0, r3, 0x14
    lwz r4, 0x14(r3)
    stwbrx r4, r0, r0
    addi r0, r3, 0x18
    lwz r4, 0x18(r3)
    stwbrx r4, r0, r0
    addi r0, r3, 0x1c
    lwz r4, 0x1c(r3)
    addi r3, r3, 0x20
    stwbrx r4, r0, r0
    bdnz lbl_fn_8043F694_00003548
lbl_fn_8043F694_000035AC:
    addi r29, r29, 0x1
    addi r30, r30, 0x10
lbl_fn_8043F694_000035B4:
    cmplw r29, r31
    blt lbl_fn_8043F694_00003398
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8043F908(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    li r0, 0x3
    addi r5, r4, 0x4
    addi r3, r4, 0x8
    lwz r7, 0x0(r4)
    mr r10, r4
    lwz r8, 0x4(r4)
    lwz r9, 0x8(r4)
    slwi r6, r7, 24
    rlwimi r6, r7, 8, 24, 31
    stwbrx r8, r0, r5
    rlwimi r6, r7, 24, 16, 23
    addi r5, r4, 0x10
    rlwimi r6, r7, 8, 8, 15
    stwbrx r7, r0, r4
    addi r6, r4, 0x2c
    addi r7, r4, 0x5c
    stwbrx r9, r0, r3
    addi r3, r4, 0x50
    mtctr r0
lbl_fn_8043F908_00003624:
    lfs f0, 0x10(r10)
    stfs f0, 0x18(r1)
    lwz r0, 0x18(r1)
    stwbrx r0, r0, r5
    addi r5, r5, 0x4
    lfs f0, 0x2c(r10)
    stfs f0, 0x14(r1)
    lwz r0, 0x14(r1)
    stwbrx r0, r0, r6
    addi r6, r6, 0x4
    lfs f0, 0x50(r10)
    stfs f0, 0x10(r1)
    lwz r0, 0x10(r1)
    stwbrx r0, r0, r3
    addi r3, r3, 0x4
    lfs f0, 0x5c(r10)
    addi r10, r10, 0x4
    stfs f0, 0xc(r1)
    lwz r0, 0xc(r1)
    stwbrx r0, r0, r7
    addi r7, r7, 0x4
    bdnz lbl_fn_8043F908_00003624
    lfs f0, 0x1c(r4)
    addi r3, r4, 0x1c
    stfs f0, 0x8(r1)
    lwz r0, 0x8(r1)
    stwbrx r0, r0, r3
    addi r3, r4, 0x20
    lfs f0, 0x20(r4)
    stfs f0, 0x8(r1)
    lwz r0, 0x8(r1)
    stwbrx r0, r0, r3
    addi r3, r4, 0x24
    lfs f0, 0x24(r4)
    stfs f0, 0x8(r1)
    lwz r0, 0x8(r1)
    stwbrx r0, r0, r3
    addi r3, r4, 0x28
    lfs f0, 0x28(r4)
    stfs f0, 0x8(r1)
    lwz r0, 0x8(r1)
    stwbrx r0, r0, r3
    addi r1, r1, 0x20
    blr
}

asm void fn_8043FA08(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    lis r5, lbl_807544C0@ha
    mr r31, r3
    lwz r5, lbl_807544C0@l(r5)
    bl fn_80442B50
    li r0, 0x0
    stw r0, 0x20(r31)
    lwz r4, 0xc(r31)
    mr r3, r31
    stw r0, 0x24(r31)
    stw r0, 0x28(r31)
    lwz r0, 0xc(r4)
    rlwinm r0, r0, 0, 29, 29
    stw r0, 0x2c(r31)
    bl fn_80442EA4
    lwz r0, 0x2c(r31)
    stw r3, 0x30(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8043FA08_00003740
    cmpwi r3, 0x0
    beq lbl_fn_8043FA08_00003740
    mr r3, r31
    bl fn_8043FEE8
lbl_fn_8043FA08_00003740:
    mr r3, r31
    li r4, 0x200
    li r5, 0x0
    bl fn_80442ECC
    cmpwi r3, 0x0
    beq lbl_fn_8043FA08_00003760
    lwz r0, 0x8(r3)
    stw r0, 0x20(r31)
lbl_fn_8043FA08_00003760:
    lwz r4, 0x20(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8043FA08_00003B40
    beq lbl_fn_8043FA08_000039F0
    lwz r0, 0x30(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8043FA08_000037E4
    lwz r3, 0x0(r4)
    addi r0, r4, 0x4
    stwbrx r3, r0, r4
    lwz r3, 0x4(r4)
    stwbrx r3, r0, r0
    addi r3, r4, 0x8
    lfs f0, 0x8(r4)
    stfs f0, 0x10(r1)
    lwz r0, 0x10(r1)
    stwbrx r0, r0, r3
    addi r3, r4, 0xc
    lfs f0, 0xc(r4)
    stfs f0, 0x10(r1)
    lwz r0, 0x10(r1)
    stwbrx r0, r0, r3
    addi r3, r4, 0x10
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r1)
    lwz r0, 0x10(r1)
    stwbrx r0, r0, r3
    lwz r0, 0x2c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8043FA08_000037E4
    lwz r0, 0x14(r4)
    addi r3, r4, 0x14
    stwbrx r0, r0, r3
lbl_fn_8043FA08_000037E4:
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8043FA08_000039F0
    add r0, r4, r0
    addic. r29, r0, 0x14
    stw r29, 0x14(r4)
    beq lbl_fn_8043FA08_000039F0
    lwz r0, 0x30(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8043FA08_000038EC
    lwz r0, 0x0(r29)
    addi r3, r29, 0x4
    stwbrx r0, r0, r29
    lfs f0, 0x4(r29)
    stfs f0, 0xc(r1)
    lwz r0, 0xc(r1)
    stwbrx r0, r0, r3
    addi r3, r29, 0x10
    lfs f0, 0x10(r29)
    stfs f0, 0x8(r1)
    lwz r0, 0x8(r1)
    stwbrx r0, r0, r3
    addi r3, r29, 0x8
    lfs f0, 0x8(r29)
    stfs f0, 0xc(r1)
    lwz r0, 0xc(r1)
    stwbrx r0, r0, r3
    addi r3, r29, 0x14
    lfs f0, 0x14(r29)
    stfs f0, 0x8(r1)
    lwz r0, 0x8(r1)
    stwbrx r0, r0, r3
    addi r3, r29, 0xc
    lfs f0, 0xc(r29)
    stfs f0, 0xc(r1)
    lwz r0, 0xc(r1)
    stwbrx r0, r0, r3
    addi r3, r29, 0x18
    lfs f0, 0x18(r29)
    stfs f0, 0x8(r1)
    lwz r0, 0x8(r1)
    stwbrx r0, r0, r3
    lwz r0, 0x2c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8043FA08_000038EC
    li r0, 0x2
    mr r3, r29
    addi r4, r29, 0x1c
    mtctr r0
lbl_fn_8043FA08_000038A8:
    lwz r0, 0x1c(r3)
    addi r5, r4, 0x4
    stwbrx r0, r0, r4
    lwz r0, 0x20(r3)
    stwbrx r0, r0, r5
    addi r5, r4, 0x8
    lwz r0, 0x24(r3)
    stwbrx r0, r0, r5
    addi r5, r4, 0xc
    addi r4, r4, 0x10
    lwz r0, 0x28(r3)
    addi r3, r3, 0x10
    stwbrx r0, r0, r5
    bdnz lbl_fn_8043FA08_000038A8
    lwz r0, 0x3c(r29)
    addi r3, r29, 0x3c
    stwbrx r0, r0, r3
lbl_fn_8043FA08_000038EC:
    mr r26, r29
    addi r25, r29, 0x1c
    li r27, 0x0
lbl_fn_8043FA08_000038F8:
    lwz r0, 0x1c(r26)
    cmpwi r0, 0x0
    beq lbl_fn_8043FA08_00003988
    add. r28, r25, r0
    stw r28, 0x1c(r26)
    beq lbl_fn_8043FA08_00003988
    lwz r0, 0x30(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8043FA08_00003928
    mr r3, r31
    mr r4, r28
    bl fn_80440184
lbl_fn_8043FA08_00003928:
    mr r24, r28
    addi r23, r28, 0x1c
    li r30, 0x0
lbl_fn_8043FA08_00003934:
    lwz r0, 0x1c(r24)
    cmpwi r0, 0x0
    beq lbl_fn_8043FA08_00003950
    add r4, r23, r0
    stw r4, 0x1c(r24)
    mr r3, r31
    bl fn_80440360
lbl_fn_8043FA08_00003950:
    addi r30, r30, 0x1
    addi r23, r23, 0x4
    cmpwi r30, 0x8
    addi r24, r24, 0x4
    blt lbl_fn_8043FA08_00003934
    lwz r0, 0x3c(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8043FA08_00003988
    add r4, r28, r0
    mr r3, r31
    addi r4, r4, 0x3c
    stw r4, 0x3c(r28)
    lwz r5, 0x0(r28)
    bl fn_8044058C
lbl_fn_8043FA08_00003988:
    addi r27, r27, 0x1
    addi r25, r25, 0x4
    cmpwi r27, 0x8
    addi r26, r26, 0x4
    blt lbl_fn_8043FA08_000038F8
    lwz r0, 0x3c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8043FA08_000039F0
    add r0, r29, r0
    addic. r3, r0, 0x3c
    stw r3, 0x3c(r29)
    lwz r0, 0x0(r29)
    beq lbl_fn_8043FA08_000039F0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8043FA08_000039F0
lbl_fn_8043FA08_000039C8:
    lwz r0, 0x30(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8043FA08_000039DC
    lwz r0, 0x0(r3)
    stwbrx r0, r0, r3
lbl_fn_8043FA08_000039DC:
    lwz r0, 0x0(r3)
    add r0, r3, r0
    stw r0, 0x0(r3)
    addi r3, r3, 0x4
    bdnz lbl_fn_8043FA08_000039C8
lbl_fn_8043FA08_000039F0:
    mr r3, r31
    li r4, 0x203
    li r5, 0x0
    bl fn_80442ECC
    cmpwi r3, 0x0
    beq lbl_fn_8043FA08_00003A74
    lwz r29, 0x8(r3)
    lis r4, 0x38e4
    stw r29, 0x24(r31)
    subi r4, r4, 0x71c7
    cmpwi r29, 0x0
    lwz r0, 0xc(r3)
    mulhwu r0, r4, r0
    srwi r30, r0, 4
    stw r30, 0x28(r31)
    beq lbl_fn_8043FA08_00003A74
    lwz r0, 0x30(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8043FA08_00003A4C
    mr r3, r31
    mr r4, r29
    mr r5, r30
    bl fn_80440280
lbl_fn_8043FA08_00003A4C:
    mtctr r30
    cmplwi r30, 0x0
    ble lbl_fn_8043FA08_00003A74
lbl_fn_8043FA08_00003A58:
    lwz r0, 0x0(r29)
    cmplwi r0, 0x1
    beq lbl_fn_8043FA08_00003A6C
    add r0, r29, r0
    stw r0, 0x0(r29)
lbl_fn_8043FA08_00003A6C:
    addi r29, r29, 0x48
    bdnz lbl_fn_8043FA08_00003A58
lbl_fn_8043FA08_00003A74:
    mr r3, r31
    li r4, 0x204
    li r5, 0x0
    bl fn_80442ECC
    cmpwi r3, 0x0
    beq lbl_fn_8043FA08_00003B40
    lwz r5, 0x8(r3)
    lwz r0, 0xc(r3)
    cmpwi r5, 0x0
    srwi r4, r0, 5
    beq lbl_fn_8043FA08_00003B40
    lwz r0, 0x30(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8043FA08_00003B40
    cmplwi r4, 0x0
    ble lbl_fn_8043FA08_00003B40
    srwi. r0, r4, 1
    mtctr r0
    beq lbl_fn_8043FA08_00003B14
lbl_fn_8043FA08_00003AC0:
    lwz r3, 0x0(r5)
    addi r0, r5, 0x8
    stwbrx r3, r0, r5
    lwz r3, 0x8(r5)
    stwbrx r3, r0, r0
    addi r0, r5, 0x4
    lwz r3, 0x4(r5)
    stwbrx r3, r0, r0
    addi r0, r5, 0x20
    lwz r3, 0x20(r5)
    stwbrx r3, r0, r0
    addi r0, r5, 0x28
    lwz r3, 0x28(r5)
    stwbrx r3, r0, r0
    addi r0, r5, 0x24
    lwz r3, 0x24(r5)
    addi r5, r5, 0x40
    stwbrx r3, r0, r0
    bdnz lbl_fn_8043FA08_00003AC0
    andi. r4, r4, 0x1
    beq lbl_fn_8043FA08_00003B40
lbl_fn_8043FA08_00003B14:
    mtctr r4
lbl_fn_8043FA08_00003B18:
    lwz r3, 0x0(r5)
    addi r0, r5, 0x8
    stwbrx r3, r0, r5
    lwz r3, 0x8(r5)
    stwbrx r3, r0, r0
    addi r0, r5, 0x4
    lwz r3, 0x4(r5)
    addi r5, r5, 0x20
    stwbrx r3, r0, r0
    bdnz lbl_fn_8043FA08_00003B18
lbl_fn_8043FA08_00003B40:
    addi r11, r1, 0x40
    mr r3, r31
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8043FE90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_8043FE90_00003B98
    li r4, -0x1
    bl fn_80442E64
    cmpwi r31, 0x0
    ble lbl_fn_8043FE90_00003B98
    mr r3, r30
    bl dtor_80084684
lbl_fn_8043FE90_00003B98:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8043FEE8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r4, 0x10(r3)
    mr r28, r3
    addi r30, r4, 0x8
    bl fn_80442EAC
    mr r31, r3
    li r29, 0x0
    lis r26, 0x38e4
    li r27, 0x2
    b lbl_fn_8043FEE8_00003E30
lbl_fn_8043FEE8_00003BEC:
    lwz r0, 0x0(r30)
    cmpwi r0, 0x201
    beq lbl_fn_8043FEE8_00003C14
    cmpwi r0, 0x200
    beq lbl_fn_8043FEE8_00003CF8
    cmpwi r0, 0x203
    beq lbl_fn_8043FEE8_00003D68
    cmpwi r0, 0x204
    beq lbl_fn_8043FEE8_00003D88
    b lbl_fn_8043FEE8_00003E28
lbl_fn_8043FEE8_00003C14:
    lwz r3, 0x8(r30)
    lwz r0, 0x0(r3)
    addi r4, r3, 0x4
    stwbrx r0, r0, r3
    lfs f0, 0x4(r3)
    stfs f0, 0xc(r1)
    lwz r0, 0xc(r1)
    stwbrx r0, r0, r4
    addi r4, r3, 0x10
    lfs f0, 0x10(r3)
    stfs f0, 0x10(r1)
    lwz r0, 0x10(r1)
    stwbrx r0, r0, r4
    addi r4, r3, 0x8
    lfs f0, 0x8(r3)
    stfs f0, 0xc(r1)
    lwz r0, 0xc(r1)
    stwbrx r0, r0, r4
    addi r4, r3, 0x14
    lfs f0, 0x14(r3)
    stfs f0, 0x10(r1)
    lwz r0, 0x10(r1)
    stwbrx r0, r0, r4
    addi r4, r3, 0xc
    lfs f0, 0xc(r3)
    stfs f0, 0xc(r1)
    lwz r0, 0xc(r1)
    stwbrx r0, r0, r4
    addi r4, r3, 0x18
    lfs f0, 0x18(r3)
    stfs f0, 0x10(r1)
    lwz r0, 0x10(r1)
    stwbrx r0, r0, r4
    lwz r0, 0x2c(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8043FEE8_00003E28
    mr r4, r3
    addi r5, r3, 0x1c
    mtctr r27
lbl_fn_8043FEE8_00003CB0:
    lwz r0, 0x1c(r4)
    addi r6, r5, 0x4
    stwbrx r0, r0, r5
    lwz r0, 0x20(r4)
    stwbrx r0, r0, r6
    addi r6, r5, 0x8
    lwz r0, 0x24(r4)
    stwbrx r0, r0, r6
    addi r6, r5, 0xc
    addi r5, r5, 0x10
    lwz r0, 0x28(r4)
    addi r4, r4, 0x10
    stwbrx r0, r0, r6
    bdnz lbl_fn_8043FEE8_00003CB0
    lwz r0, 0x3c(r3)
    addi r4, r3, 0x3c
    stwbrx r0, r0, r4
    b lbl_fn_8043FEE8_00003E28
lbl_fn_8043FEE8_00003CF8:
    lwz r3, 0x8(r30)
    lwz r4, 0x0(r3)
    addi r0, r3, 0x4
    stwbrx r4, r0, r3
    lwz r4, 0x4(r3)
    stwbrx r4, r0, r0
    addi r4, r3, 0x8
    lfs f0, 0x8(r3)
    stfs f0, 0x8(r1)
    lwz r0, 0x8(r1)
    stwbrx r0, r0, r4
    addi r4, r3, 0xc
    lfs f0, 0xc(r3)
    stfs f0, 0x8(r1)
    lwz r0, 0x8(r1)
    stwbrx r0, r0, r4
    addi r4, r3, 0x10
    lfs f0, 0x10(r3)
    stfs f0, 0x8(r1)
    lwz r0, 0x8(r1)
    stwbrx r0, r0, r4
    lwz r0, 0x2c(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8043FEE8_00003E28
    lwz r0, 0x14(r3)
    addi r4, r3, 0x14
    stwbrx r0, r0, r4
    b lbl_fn_8043FEE8_00003E28
lbl_fn_8043FEE8_00003D68:
    lwz r0, 0xc(r30)
    subi r5, r26, 0x71c7
    lwz r4, 0x8(r30)
    mr r3, r28
    mulhwu r0, r5, r0
    srwi r5, r0, 4
    bl fn_80440280
    b lbl_fn_8043FEE8_00003E28
lbl_fn_8043FEE8_00003D88:
    lwz r0, 0xc(r30)
    lwz r3, 0x8(r30)
    srwi r4, r0, 5
    cmplwi r4, 0x0
    ble lbl_fn_8043FEE8_00003E28
    srwi. r0, r4, 1
    mtctr r0
    beq lbl_fn_8043FEE8_00003DFC
lbl_fn_8043FEE8_00003DA8:
    lwz r5, 0x0(r3)
    addi r0, r3, 0x8
    stwbrx r5, r0, r3
    lwz r5, 0x8(r3)
    stwbrx r5, r0, r0
    addi r0, r3, 0x4
    lwz r5, 0x4(r3)
    stwbrx r5, r0, r0
    addi r0, r3, 0x20
    lwz r5, 0x20(r3)
    stwbrx r5, r0, r0
    addi r0, r3, 0x28
    lwz r5, 0x28(r3)
    stwbrx r5, r0, r0
    addi r0, r3, 0x24
    lwz r5, 0x24(r3)
    addi r3, r3, 0x40
    stwbrx r5, r0, r0
    bdnz lbl_fn_8043FEE8_00003DA8
    andi. r4, r4, 0x1
    beq lbl_fn_8043FEE8_00003E28
lbl_fn_8043FEE8_00003DFC:
    mtctr r4
lbl_fn_8043FEE8_00003E00:
    lwz r5, 0x0(r3)
    addi r0, r3, 0x8
    stwbrx r5, r0, r3
    lwz r5, 0x8(r3)
    stwbrx r5, r0, r0
    addi r0, r3, 0x4
    lwz r5, 0x4(r3)
    addi r3, r3, 0x20
    stwbrx r5, r0, r0
    bdnz lbl_fn_8043FEE8_00003E00
lbl_fn_8043FEE8_00003E28:
    addi r29, r29, 0x1
    addi r30, r30, 0x10
lbl_fn_8043FEE8_00003E30:
    cmplw r29, r31
    blt lbl_fn_8043FEE8_00003BEC
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
