#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_14(void);
extern void _restgpr_23(void);
extern void _savegpr_14(void);
extern void _savegpr_23(void);
extern void dtor_80084684(void);
extern void fn_8004ECC0(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
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
extern void fn_8008A76C(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_800902C0(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_800EF73C(void);
extern void fn_8010653C(void);
extern void fn_8011FE3C(void);
extern void fn_80155A88(void);
extern void fn_8016B8D4(void);
extern void fn_801781B0(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_803750E4(void);
extern void fn_803CCA84(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC758(void);
extern void fn_803EC91C(void);
extern void fn_8043C334(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_807542C4[];
extern u8 lbl_80754370[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078F008[];
extern u8 lbl_8078F0C0[];
extern u8 lbl_8078F158[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886920;
extern u32 lbl_80886958;
extern u32 lbl_8088695C;
extern u32 lbl_80886960;
extern u32 lbl_80886964;
extern u32 lbl_80886968;
extern u32 lbl_8088696C;
extern u32 lbl_80886970;
extern u32 lbl_80886974;
extern u32 lbl_80886978;
extern u32 lbl_8088697C;
extern u32 lbl_80886980;
extern u32 lbl_80886984;
extern u32 lbl_80886988;
extern u32 lbl_80886990;
extern u32 lbl_80886994;
extern u32 lbl_80886998;
extern u32 lbl_8088699C;
extern u32 lbl_808869A0;

/* Function declarations */
void fn_8043A530(void);
void fn_8043A770(void);
void fn_8043A850(void);
void fn_8043A98C(void);
void fn_8043AA28(void);
void fn_8043AA50(void);
void fn_8043AAE0(void);
void fn_8043AFC4(void);
void fn_8043AFC8(void);
void fn_8043B028(void);
void fn_8043B160(void);
void fn_8043B164(void);
void fn_8043B5BC(void);
void fn_8043B614(void);
void fn_8043B744(void);
void fn_8043B778(void);
void fn_8043B7E8(void);
void fn_8043B8E8(void);
void fn_8043B988(void);
void fn_8043B9E0(void);

asm void fn_8043A530(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x70
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stfd f30, 0x80(r1)
    psq_st f30, 0x88(r1), 0, 0
    stfd f29, 0x70(r1)
    psq_st f29, 0x78(r1), 0, 0
    bl _savegpr_23
    lwz r0, 0xec8(r3)
    mr r23, r3
    cmpwi r0, 0x0
    ble lbl_fn_8043A530_00000048
    lwz r0, 0xeec(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_8043A530_00000050
lbl_fn_8043A530_00000048:
    li r3, 0x0
    b lbl_fn_8043A530_00000210
lbl_fn_8043A530_00000050:
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8043A530_00000064
    lwz r4, 0x48(r3)
    b lbl_fn_8043A530_00000068
lbl_fn_8043A530_00000064:
    li r4, 0x0
lbl_fn_8043A530_00000068:
    cmpwi r4, 0x0
    bne lbl_fn_8043A530_00000078
    li r3, 0x0
    b lbl_fn_8043A530_00000210
lbl_fn_8043A530_00000078:
    addi r3, r1, 0x20
    bl fn_801781B0
    lfs f31, lbl_80886920
    addi r29, r1, 0x14
    addi r27, r1, 0x20
    addi r26, r1, 0x30
    addi r28, r1, 0x3c
    li r25, 0x0
    li r24, 0x0
    li r31, 0x0
    lis r30, 0x8000
lbl_fn_8043A530_000000A4:
    add r4, r23, r31
    lwz r3, 0x288(r4)
    cmpwi r3, 0x1
    bne lbl_fn_8043A530_000000C0
    lwz r0, 0x314(r4)
    cmpwi r0, 0x5a
    blt lbl_fn_8043A530_000000C8
lbl_fn_8043A530_000000C0:
    cmpwi r3, 0x2
    bne lbl_fn_8043A530_000001FC
lbl_fn_8043A530_000000C8:
    lfs f6, 0x2b8(r4)
    addi r3, r1, 0x8
    lfs f2, 0x28(r1)
    stfs f2, 0x38(r1)
    fmr f2, f6
    lfs f5, 0x2a8(r4)
    lfs f4, 0x298(r4)
    psq_l f1, 0x0(r27), 0, 0
    frsp f3, f2
    lfs f0, 0x38(r1)
    stfs f4, 0x14(r1)
    fsubs f7, f3, f0
    lfs f30, 0xef4(r23)
    psq_st f1, 0x0(r26), 0, 0
    stfs f5, 0x18(r1)
    lfs f4, 0x34(r1)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    lfs f0, 0x30(r1)
    lfs f5, 0x40(r1)
    lfs f3, 0x3c(r1)
    fsubs f4, f5, f4
    stfs f6, 0x1c(r1)
    fsubs f0, f3, f0
    stfs f2, 0x44(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0xc(r1)
    stfs f7, 0x10(r1)
    bl fn_805F9940
    fabs f0, f1
    fmr f29, f1
    frsp f0, f0
    fcmpo cr0, f0, f31
    blt lbl_fn_8043A530_000001CC
    lfs f3, 0x3c(r1)
    mr r3, r28
    lfs f0, 0x30(r1)
    mr r4, r28
    lfs f5, 0x40(r1)
    fsubs f6, f3, f0
    lfs f4, 0x34(r1)
    lfs f3, 0x44(r1)
    lfs f0, 0x38(r1)
    fsubs f4, f5, f4
    stfs f6, 0x3c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x40(r1)
    stfs f0, 0x44(r1)
    bl fn_805F98D0
    fsubs f5, f29, f30
    lfs f4, 0x3c(r1)
    lfs f3, 0x40(r1)
    lfs f0, 0x44(r1)
    fmuls f7, f4, f5
    lfs f4, 0x30(r1)
    fmuls f6, f3, f5
    lfs f3, 0x34(r1)
    fmuls f5, f0, f5
    lfs f0, 0x38(r1)
    fadds f4, f7, f4
    fadds f3, f6, f3
    fadds f0, f5, f0
    stfs f4, 0x3c(r1)
    stfs f3, 0x40(r1)
    stfs f0, 0x44(r1)
lbl_fn_8043A530_000001CC:
    lwz r3, lbl_8087EE98
    addi r5, r1, 0x30
    addi r6, r1, 0x3c
    addi r7, r30, 0x10
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ECC0
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8043A530_000001FC
    addi r25, r25, 0x1
lbl_fn_8043A530_000001FC:
    addi r24, r24, 0x1
    addi r31, r31, 0x188
    cmpwi r24, 0x8
    blt lbl_fn_8043A530_000000A4
    mr r3, r25
lbl_fn_8043A530_00000210:
    addi r11, r1, 0x70
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    psq_l f29, 0x78(r1), 0, 0
    lfd f29, 0x70(r1)
    bl _restgpr_23
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8043A770(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8043A770_000002FC
    lis r5, lbl_807542C4@ha
    li r3, 0x148
    addi r5, r5, lbl_807542C4@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8043A770_000002F4
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_803EC568
    lis r3, lbl_8078F008@ha
    lis r4, fn_802377B8@ha
    addi r3, r3, lbl_8078F008@l
    lis r5, fn_800EF73C@ha
    stw r3, 0x0(r31)
    addi r3, r31, 0xf4
    addi r4, r4, fn_802377B8@l
    addi r5, r5, fn_800EF73C@l
    li r6, 0xc
    li r7, 0x5
    bl fn_806958E0
    li r3, 0x0
    stw r3, 0x130(r31)
    li r0, 0x1
    stw r3, 0x134(r31)
    stw r0, 0x138(r31)
    stw r3, 0x13c(r31)
    stw r3, 0x140(r31)
    stw r0, 0x54(r31)
lbl_fn_8043A770_000002F4:
    mr r3, r31
    b lbl_fn_8043A770_00000300
lbl_fn_8043A770_000002FC:
    li r3, 0x0
lbl_fn_8043A770_00000300:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8043A850(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    beq lbl_fn_8043A850_0000043C
    lis r5, lbl_807542C4@ha
    li r3, 0x148
    addi r5, r5, lbl_807542C4@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8043A850_000003CC
    lwz r6, 0x1c(r30)
    mr r4, r29
    lwz r5, 0x18(r30)
    bl fn_803EC568
    lis r3, lbl_8078F008@ha
    lis r4, fn_802377B8@ha
    addi r3, r3, lbl_8078F008@l
    lis r5, fn_800EF73C@ha
    stw r3, 0x0(r31)
    addi r3, r31, 0xf4
    addi r4, r4, fn_802377B8@l
    addi r5, r5, fn_800EF73C@l
    li r6, 0xc
    li r7, 0x5
    bl fn_806958E0
    li r3, 0x0
    stw r3, 0x130(r31)
    li r0, 0x1
    stw r3, 0x134(r31)
    stw r0, 0x138(r31)
    stw r3, 0x13c(r31)
    stw r3, 0x140(r31)
    stw r0, 0x54(r31)
lbl_fn_8043A850_000003CC:
    cmpwi r31, 0x0
    beq lbl_fn_8043A850_00000434
    lfs f2, 0xc(r30)
    addi r3, r1, 0x14
    psq_l f1, 0x4(r30), 0, 0
    addi r4, r1, 0x8
    psq_st f1, 0x6c(r31), 0, 0
    lfs f0, lbl_8088695C
    stfs f2, 0x74(r31)
    lfs f3, lbl_80886958
    lfs f4, 0x14(r30)
    stfs f3, 0x14(r1)
    fmr f2, f3
    stfs f4, 0x18(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x78(r31), 0, 0
    stfs f2, 0x80(r31)
    fmr f2, f0
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x90(r31), 0, 0
    stfs f2, 0x98(r31)
    stfs f3, 0x1c(r1)
    stfs f0, 0x10(r1)
    stw r30, 0x130(r31)
lbl_fn_8043A850_00000434:
    mr r3, r31
    b lbl_fn_8043A850_00000440
lbl_fn_8043A850_0000043C:
    li r3, 0x0
lbl_fn_8043A850_00000440:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8043A98C(void)
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
    beq lbl_fn_8043A98C_000004DC
    lis r4, lbl_8078F008@ha
    addi r4, r4, lbl_8078F008@l
    stw r4, 0x0(r3)
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_8043A98C_000004A8
    mr r4, r30
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_8043A98C_000004A8:
    lis r4, fn_800EF73C@ha
    addi r3, r30, 0xf4
    addi r4, r4, fn_800EF73C@l
    li r5, 0xc
    li r6, 0x5
    bl fn_806959D8
    mr r3, r30
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_8043A98C_000004DC
    mr r3, r30
    bl dtor_80084684
lbl_fn_8043A98C_000004DC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8043AA28(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_803EC91C
    cntlzw r0, r3
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8043AA50(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_80886958
    li r0, 0x0
    li r3, 0x2
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r0, 0x58(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8043AA50_00000584
    li r0, 0x1
    stw r0, 0x8(r1)
lbl_fn_8043AA50_00000584:
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x8
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8043AAE0(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stfd f29, 0xf0(r1)
    psq_st f29, 0xf8(r1), 0, 0
    stfd f28, 0xe0(r1)
    psq_st f28, 0xe8(r1), 0, 0
    stfd f27, 0xd0(r1)
    psq_st f27, 0xd8(r1), 0, 0
    stw r31, 0xcc(r1)
    mr r31, r3
    stw r30, 0xc8(r1)
    stw r29, 0xc4(r1)
    stw r28, 0xc0(r1)
    lwz r4, 0x130(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8043AAE0_00000694
    lwz r29, 0x7c(r4)
    cmpwi r29, 0x0
    bne lbl_fn_8043AAE0_00000638
    lwz r0, 0x138(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8043AAE0_00000638
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_8043AAE0_00000638
    mr r4, r31
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_8043AAE0_00000638:
    cmpwi r29, 0x0
    beq lbl_fn_8043AAE0_00000690
    lwz r0, 0x138(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8043AAE0_00000690
    lwz r4, 0x54(r31)
    li r0, 0x0
    lfs f0, lbl_80886958
    mr r3, r31
    stw r4, 0x70(r1)
    addi r4, r1, 0x70
    stw r0, 0x74(r1)
    stw r0, 0x78(r1)
    stw r0, 0x7c(r1)
    stw r0, 0x80(r1)
    stfs f0, 0x84(r1)
    stfs f0, 0x88(r1)
    stfs f0, 0x8c(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_8043AAE0_00000690:
    stw r29, 0x138(r31)
lbl_fn_8043AAE0_00000694:
    lwz r0, 0x138(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8043AAE0_00000A4C
    lwz r3, 0x54(r31)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    ble lbl_fn_8043AAE0_000006BC
    cmpwi r3, 0x3
    beq lbl_fn_8043AAE0_00000864
    b lbl_fn_8043AAE0_00000A4C
lbl_fn_8043AAE0_000006BC:
    lwz r4, 0x134(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8043AAE0_0000074C
    lwz r0, 0x55c(r4)
    lwz r3, 0x560(r4)
    cmpwi r0, 0x6
    bne lbl_fn_8043AAE0_000006E0
    cmpwi r3, 0x2
    beq lbl_fn_8043AAE0_0000074C
lbl_fn_8043AAE0_000006E0:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8043AAE0_000006F4
    lwz r3, 0x10d8(r3)
    b lbl_fn_8043AAE0_000006F8
lbl_fn_8043AAE0_000006F4:
    li r3, 0x0
lbl_fn_8043AAE0_000006F8:
    cmpwi r3, 0x0
    beq lbl_fn_8043AAE0_00000744
    addi r5, r1, 0x44
    addi r6, r1, 0x38
    bl fn_803CCA84
    cmpwi r3, 0x0
    beq lbl_fn_8043AAE0_00000744
    addi r3, r1, 0x44
    lwz r5, 0x134(r31)
    lfs f2, 0x4c(r1)
    addi r4, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x530(r5)
    lwz r3, 0x134(r31)
    lfs f2, 0x40(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
lbl_fn_8043AAE0_00000744:
    li r0, 0x0
    stw r0, 0x134(r31)
lbl_fn_8043AAE0_0000074C:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x2
    bne lbl_fn_8043AAE0_00000A4C
    li r0, 0x0
    stw r0, 0x13c(r31)
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8043AAE0_00000774
    lwz r29, 0x48(r3)
    b lbl_fn_8043AAE0_00000778
lbl_fn_8043AAE0_00000774:
    li r29, 0x0
lbl_fn_8043AAE0_00000778:
    cmpwi r29, 0x0
    beq lbl_fn_8043AAE0_00000A4C
    lfs f3, 0x530(r29)
    addi r3, r1, 0x20
    lfs f0, 0x74(r31)
    lfs f5, 0x52c(r29)
    fsubs f6, f3, f0
    lfs f4, 0x70(r31)
    lfs f3, 0x528(r29)
    lfs f0, 0x6c(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    stfs f6, 0x28(r1)
    bl fn_805F9920
    lfs f0, lbl_80886960
    fcmpo cr0, f1, f0
    bge lbl_fn_8043AAE0_00000A4C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8043AAE0_000007D8
    li r4, 0x1bd
    bl fn_803750E4
lbl_fn_8043AAE0_000007D8:
    lwz r3, 0x12a4(r29)
    extrwi. r0, r3, 1, 25
    bne lbl_fn_8043AAE0_00000A4C
    srwi. r4, r3, 31
    li r3, 0x0
    beq lbl_fn_8043AAE0_00000800
    lwz r0, 0xc48(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8043AAE0_00000800
    li r3, 0x1
lbl_fn_8043AAE0_00000800:
    cmpwi r3, 0x0
    bne lbl_fn_8043AAE0_00000A4C
    cmpwi r4, 0x0
    bne lbl_fn_8043AAE0_00000A4C
    lwz r6, lbl_8087F490
    li r4, 0x0
    li r3, 0xf
    li r5, -0x1
    stw r3, 0x7c0(r6)
    li r0, 0x1
    stw r5, 0x7c4(r6)
    stw r5, 0x7c8(r6)
    stw r4, 0x7cc(r6)
    stw r4, 0x7d0(r6)
    stw r4, 0x7d4(r6)
    stw r4, 0x7d8(r6)
    stw r5, 0x54(r1)
    stw r5, 0x58(r1)
    stw r4, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r4, 0x64(r1)
    stw r4, 0x68(r1)
    stw r3, 0x50(r1)
    stw r0, 0x13c(r31)
    b lbl_fn_8043AAE0_00000A4C
lbl_fn_8043AAE0_00000864:
    lwz r3, 0x134(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8043AAE0_00000890
    lwz r0, 0x55c(r3)
    lwz r3, 0x560(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8043AAE0_00000888
    cmpwi r3, 0x2
    beq lbl_fn_8043AAE0_00000890
lbl_fn_8043AAE0_00000888:
    li r0, 0x4
    stw r0, 0x54(r31)
lbl_fn_8043AAE0_00000890:
    lwz r3, 0x140(r31)
    cmpwi r3, 0x0
    ble lbl_fn_8043AAE0_00000A4C
    subic. r0, r3, 0x1
    stw r0, 0x140(r31)
    bgt lbl_fn_8043AAE0_00000A4C
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8043AAE0_00000A4C
    lwz r28, 0x48(r3)
    addi r29, r1, 0x14
    lfs f29, lbl_80886968
    addi r30, r1, 0x2c
    lfs f28, lbl_80886964
    lfs f30, lbl_80886958
    lfs f31, lbl_8088695C
    lfs f27, lbl_80886960
    b lbl_fn_8043AAE0_00000A44
lbl_fn_8043AAE0_000008D8:
    lwz r6, 0x38(r28)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8043AAE0_00000904
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_8043AAE0_00000904
    li r5, 0x1
lbl_fn_8043AAE0_00000904:
    cmpwi r5, 0x0
    beq lbl_fn_8043AAE0_00000920
    lwz r0, 0x7e0(r28)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8043AAE0_00000920
    li r3, 0x1
lbl_fn_8043AAE0_00000920:
    cmpwi r3, 0x0
    beq lbl_fn_8043AAE0_00000954
    lwz r0, 0x55c(r28)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8043AAE0_00000948
    lwz r0, 0x560(r28)
    cmpwi r0, 0x1c
    bne lbl_fn_8043AAE0_00000948
    li r3, 0x1
lbl_fn_8043AAE0_00000948:
    cmpwi r3, 0x0
    bne lbl_fn_8043AAE0_00000954
    li r4, 0x1
lbl_fn_8043AAE0_00000954:
    cmpwi r4, 0x0
    beq lbl_fn_8043AAE0_00000A40
    lfs f3, 0x530(r28)
    addi r3, r1, 0x2c
    lfs f0, 0x74(r31)
    lfs f5, 0x52c(r28)
    fsubs f6, f3, f0
    lfs f4, 0x70(r31)
    lfs f3, 0x528(r28)
    lfs f0, 0x6c(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x30(r1)
    stfs f0, 0x2c(r1)
    stfs f6, 0x34(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f27
    cror eq, gt, eq
    beq lbl_fn_8043AAE0_00000A40
    fabs f0, f1
    frsp f0, f0
    fcmpo cr0, f0, f28
    blt lbl_fn_8043AAE0_000009C8
    fcmpo cr0, f1, f29
    ble lbl_fn_8043AAE0_000009C8
    addi r3, r1, 0x2c
    mr r4, r3
    bl fn_805F98D0
    b lbl_fn_8043AAE0_00000A28
lbl_fn_8043AAE0_000009C8:
    stfs f30, 0x8(r1)
    addi r3, r1, 0x90
    li r4, 0x79
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    lfs f1, 0x538(r28)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x90
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x10(r1)
    lfs f3, 0xc(r1)
    fneg f4, f0
    lfs f0, 0x8(r1)
    fneg f3, f3
    fneg f0, f0
    stfs f4, 0x1c(r1)
    frsp f2, f4
    stfs f0, 0x14(r1)
    stfs f3, 0x18(r1)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x34(r1)
lbl_fn_8043AAE0_00000A28:
    mr r3, r28
    addi r4, r1, 0x2c
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
    bl fn_8016B8D4
lbl_fn_8043AAE0_00000A40:
    lwz r28, 0x14ac(r28)
lbl_fn_8043AAE0_00000A44:
    cmpwi r28, 0x0
    bne lbl_fn_8043AAE0_000008D8
lbl_fn_8043AAE0_00000A4C:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_l f29, 0xf8(r1), 0, 0
    lfd f29, 0xf0(r1)
    psq_l f28, 0xe8(r1), 0, 0
    lfd f28, 0xe0(r1)
    psq_l f27, 0xd8(r1), 0, 0
    lfd f27, 0xd0(r1)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    lwz r29, 0xc4(r1)
    lwz r28, 0xc0(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8043AFC4(void)
{
    nofralloc
    blr
}

asm void fn_8043AFC8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    addi r31, r3, 0xf4
    stw r30, 0x8(r1)
    li r30, 0x0
lbl_fn_8043AFC8_00000AB4:
    mr r3, r31
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_8043AFC8_00000ACC
    li r3, 0x1
    b lbl_fn_8043AFC8_00000AE0
lbl_fn_8043AFC8_00000ACC:
    addi r30, r30, 0x1
    addi r31, r31, 0xc
    cmpwi r30, 0x5
    blt lbl_fn_8043AFC8_00000AB4
    li r3, 0x0
lbl_fn_8043AFC8_00000AE0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8043B028(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    stw r0, 0x654(r1)
    stw r31, 0x64c(r1)
    stw r30, 0x648(r1)
    stw r29, 0x644(r1)
    stw r28, 0x640(r1)
    mr r28, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r31, r3
    addi r3, r28, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x8(r1)
    mr r30, r3
    addi r3, r1, 0x18
    stw r0, 0xc(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r30
    mr r5, r31
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r30, lbl_807542C4@ha
    li r29, 0x1
    addi r30, r30, lbl_807542C4@l
    li r31, 0xc
lbl_fn_8043B028_00000BB4:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_8043B028_00000C00
    addi r4, r30, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8043B028_00000C00
    cmpwi r29, 0x5
    bge lbl_fn_8043B028_00000C00
    addi r3, r1, 0x8
    bl fn_8005B9CC
    add r5, r28, r31
    mr r4, r3
    addi r3, r5, 0xf4
    addi r29, r29, 0x1
    addi r31, r31, 0xc
    bl fn_8023780C
lbl_fn_8043B028_00000C00:
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8043B028_00000BB4
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    lwz r28, 0x640(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_8043B160(void)
{
    nofralloc
    blr
}

asm void fn_8043B164(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    mr r31, r4
    stw r30, 0x88(r1)
    mr r30, r3
    stw r29, 0x84(r1)
    bne lbl_fn_8043B164_00000C64
    li r3, 0x0
    b lbl_fn_8043B164_00001070
lbl_fn_8043B164_00000C64:
    lwz r3, 0x0(r4)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    ble lbl_fn_8043B164_00000C88
    cmpwi r3, 0x3
    beq lbl_fn_8043B164_00000D94
    cmpwi r3, 0x4
    beq lbl_fn_8043B164_00000F98
    b lbl_fn_8043B164_00001068
lbl_fn_8043B164_00000C88:
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_8043B164_00000CA4
    mr r4, r30
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_8043B164_00000CA4:
    lwz r3, 0x0(r31)
    lwz r0, lbl_8087F3C0
    mulli r3, r3, 0xc
    cmpwi r0, 0x0
    add r3, r30, r3
    addi r29, r3, 0xf4
    beq lbl_fn_8043B164_00000D28
    mr r3, r30
    li r4, 0x0
    bl fn_80232B7C
    lwz r3, lbl_8087F3C0
    li r11, 0x1
    lfs f1, lbl_8088695C
    li r0, -0x1
    stw r11, 0xb8(r3)
    mr r4, r29
    addi r7, r30, 0x6c
    addi r8, r30, 0x78
    stfs f1, 0x40(r1)
    addi r9, r1, 0x40
    li r5, 0x0
    li r6, 0x0
    stfs f1, 0x44(r1)
    li r10, -0x1
    stfs f1, 0x48(r1)
    stfs f1, 0x4c(r1)
    stw r0, 0x8(r1)
    stw r11, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
lbl_fn_8043B164_00000D28:
    lwz r3, 0x134(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8043B164_00001068
    lfs f6, lbl_80886958
    addi r4, r1, 0x74
    lfs f5, lbl_8088696C
    li r5, 0x0
    lfs f4, 0x74(r30)
    lfs f3, 0x70(r30)
    lfs f0, 0x6c(r30)
    fsubs f4, f4, f6
    fsubs f3, f3, f5
    stfs f6, 0x68(r1)
    fsubs f0, f0, f6
    stfs f5, 0x6c(r1)
    stfs f6, 0x70(r1)
    stfs f0, 0x74(r1)
    stfs f3, 0x78(r1)
    stfs f4, 0x7c(r1)
    bl fn_80155A88
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_8043B164_00001068
    lwz r4, 0x134(r30)
    addi r5, r4, 0xb0
    bl fn_8010653C
    b lbl_fn_8043B164_00001068
lbl_fn_8043B164_00000D94:
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_8043B164_00000DB0
    mr r4, r30
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_8043B164_00000DB0:
    lwz r0, 0x0(r31)
    lwz r3, lbl_8087F3C0
    mulli r0, r0, 0xc
    cmpwi r3, 0x0
    add r3, r30, r0
    addi r29, r3, 0xf4
    beq lbl_fn_8043B164_00000E34
    mr r3, r30
    li r4, 0x1
    bl fn_80232B7C
    lwz r3, lbl_8087F3C0
    li r11, 0x1
    lfs f1, lbl_8088695C
    li r0, -0x1
    stw r11, 0xb8(r3)
    mr r4, r29
    addi r7, r30, 0x6c
    addi r8, r30, 0x78
    stfs f1, 0x30(r1)
    addi r9, r1, 0x30
    lwz r3, lbl_8087F3C0
    li r5, 0x0
    stfs f1, 0x34(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stw r0, 0x8(r1)
    stw r11, 0xc(r1)
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
lbl_fn_8043B164_00000E34:
    lwz r0, lbl_8087F3C0
    cmpwi r0, 0x0
    beq lbl_fn_8043B164_00000EA8
    mr r3, r30
    li r4, 0x0
    bl fn_80232B7C
    lwz r3, lbl_8087F3C0
    li r11, 0x1
    lfs f1, lbl_8088695C
    li r0, -0x1
    stw r11, 0xb8(r3)
    addi r4, r30, 0x124
    addi r7, r30, 0x6c
    addi r8, r30, 0x78
    stfs f1, 0x20(r1)
    addi r9, r1, 0x20
    lwz r3, lbl_8087F3C0
    li r5, 0x0
    stfs f1, 0x24(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stw r0, 0x8(r1)
    stw r11, 0xc(r1)
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
lbl_fn_8043B164_00000EA8:
    lwz r4, 0x130(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8043B164_00001068
    lwz r3, lbl_8087F890
    cmpwi r3, 0x0
    beq lbl_fn_8043B164_00000ECC
    lwz r4, 0x20(r4)
    bl fn_8011FE3C
    b lbl_fn_8043B164_00000ED0
lbl_fn_8043B164_00000ECC:
    li r3, 0x0
lbl_fn_8043B164_00000ED0:
    cmpwi r3, 0x0
    stw r3, 0x134(r30)
    beq lbl_fn_8043B164_00001068
    lfs f5, lbl_80886958
    addi r9, r1, 0x5c
    lfs f4, lbl_8088696C
    li r4, 0x0
    lfs f3, 0x70(r30)
    li r5, 0x153
    lfs f0, 0x6c(r30)
    li r6, 0x1
    fsubs f6, f3, f4
    lfs f3, 0x74(r30)
    fsubs f7, f0, f5
    stfs f5, 0x50(r1)
    fsubs f0, f3, f5
    li r7, 0x0
    stfs f7, 0x5c(r1)
    li r8, 0x1
    fmr f2, f0
    stfs f6, 0x60(r1)
    psq_l f1, 0x0(r9), 0, 0
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
    lwz r3, 0x134(r30)
    lfs f2, 0x80(r30)
    psq_l f1, 0x78(r30), 0, 0
    psq_st f1, 0x534(r3), 0, 0
    fmr f1, f5
    stfs f2, 0x53c(r3)
    lfs f2, lbl_80886970
    lwz r3, 0x134(r30)
    stfs f4, 0x54(r1)
    addi r3, r3, 0xb0
    stfs f5, 0x58(r1)
    stfs f0, 0x64(r1)
    bl fn_80097C08
    lwz r3, 0x134(r30)
    addi r4, r30, 0x6c
    li r5, 0x0
    bl fn_80155A88
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_8043B164_00000F8C
    lwz r4, 0x134(r30)
    addi r5, r4, 0xb0
    bl fn_8010653C
lbl_fn_8043B164_00000F8C:
    li r0, 0x5
    stw r0, 0x140(r30)
    b lbl_fn_8043B164_00001068
lbl_fn_8043B164_00000F98:
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_8043B164_00000FB4
    mr r4, r30
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_8043B164_00000FB4:
    lwz r0, 0x0(r31)
    lwz r3, lbl_8087F3C0
    mulli r0, r0, 0xc
    cmpwi r3, 0x0
    add r3, r30, r0
    addi r29, r3, 0xf4
    beq lbl_fn_8043B164_00001038
    mr r3, r30
    li r4, 0x1
    bl fn_80232B7C
    lwz r3, lbl_8087F3C0
    li r11, 0x1
    lfs f1, lbl_8088695C
    li r0, -0x1
    stw r11, 0xb8(r3)
    mr r4, r29
    addi r7, r30, 0x6c
    addi r8, r30, 0x78
    stfs f1, 0x10(r1)
    addi r9, r1, 0x10
    lwz r3, lbl_8087F3C0
    li r5, 0x0
    stfs f1, 0x14(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stw r0, 0x8(r1)
    stw r11, 0xc(r1)
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
lbl_fn_8043B164_00001038:
    lwz r3, 0x134(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8043B164_00001068
    lfs f2, 0x74(r30)
    psq_l f1, 0x6c(r30), 0, 0
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
    lwz r3, 0x134(r30)
    lfs f2, 0x80(r30)
    psq_l f1, 0x78(r30), 0, 0
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
lbl_fn_8043B164_00001068:
    lwz r3, 0x0(r31)
    stw r3, 0x54(r30)
lbl_fn_8043B164_00001070:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8043B5BC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_80886958
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

asm void fn_8043B614(void)
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
    bne lbl_fn_8043B614_00001144
    cmpwi r30, 0x0
    beq lbl_fn_8043B614_00001144
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_8043B614_00001144
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0xf0(r29)
    mr r30, r3
    b lbl_fn_8043B614_00001148
lbl_fn_8043B614_00001144:
    li r30, 0x0
lbl_fn_8043B614_00001148:
    lis r31, lbl_807542C4@ha
    mr r3, r30
    addi r31, r31, lbl_807542C4@l
    addi r5, r29, 0x54
    addi r4, r31, 0x5
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80886974
    mr r3, r30
    lfs f2, lbl_80886978
    addi r4, r31, 0xb
    lfs f3, lbl_8088697C
    addi r5, r29, 0x6c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80886980
    mr r3, r30
    lfs f2, lbl_80886984
    addi r4, r31, 0xf
    lfs f3, lbl_80886988
    addi r5, r29, 0x78
    li r6, 0x0
    li r7, 0x0
    bl fn_80088724
    lfs f1, lbl_80886974
    mr r3, r30
    lfs f2, lbl_80886978
    addi r4, r31, 0x13
    lfs f3, lbl_8088697C
    addi r5, r29, 0x90
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    mr r3, r30
    addi r4, r31, 0x17
    addi r5, r29, 0x9c
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

asm void fn_8043B744(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    li r4, 0x0
    cmpwi r0, 0x2
    bne lbl_fn_8043B744_00001240
    lwz r0, 0x138(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8043B744_00001240
    lwz r0, 0x13c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8043B744_00001240
    li r4, 0x1
lbl_fn_8043B744_00001240:
    mr r3, r4
    blr
}

asm void fn_8043B778(void)
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
    beq lbl_fn_8043B778_0000129C
    lis r5, lbl_80754370@ha
    li r3, 0x348
    addi r5, r5, lbl_80754370@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8043B778_0000129C
    mr r4, r30
    mr r5, r31
    bl fn_8043B7E8
lbl_fn_8043B778_0000129C:
    lwz r31, 0xc(r1)
    li r3, 0x0
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8043B7E8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r5
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r5, 0x18(r5)
    lwz r6, 0x1c(r31)
    bl fn_803EC568
    lis r4, lbl_8078F0C0@ha
    stw r31, 0xf4(r30)
    addi r4, r4, lbl_8078F0C0@l
    addi r3, r30, 0xf8
    stw r4, 0x0(r30)
    li r4, 0x1
    bl fn_8008A4E0
    lfs f4, lbl_80886990
    li r6, 0x0
    li r0, 0x1
    stw r6, 0x30c(r30)
    lfs f0, lbl_80886998
    lis r4, lbl_80754370@ha
    stw r6, 0x32c(r30)
    addi r4, r4, lbl_80754370@l
    lfs f3, lbl_80886994
    addi r7, r1, 0x14
    stw r6, 0x330(r30)
    addi r8, r1, 0x8
    addi r3, r30, 0xf8
    addi r4, r4, 0x1
    stfs f4, 0x340(r30)
    li r5, 0x0
    stw r6, 0x54(r30)
    stw r0, 0x68(r30)
    psq_l f1, 0x4(r31), 0, 0
    lfs f2, 0xc(r31)
    stfs f2, 0x74(r30)
    fmr f2, f3
    psq_st f1, 0x6c(r30), 0, 0
    lfs f4, 0x14(r31)
    stfs f3, 0x14(r1)
    stfs f4, 0x18(r1)
    stfs f2, 0x80(r30)
    fmr f2, f0
    psq_l f1, 0x0(r7), 0, 0
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_st f1, 0x78(r30), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f3, 0x1c(r1)
    stfs f0, 0x10(r1)
    psq_st f1, 0x90(r30), 0, 0
    stfs f2, 0x98(r30)
    bl fn_8008AD4C
    lfs f0, lbl_8088699C
    mr r3, r30
    stfs f0, 0x1a4(r30)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8043B8E8(void)
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
    beq lbl_fn_8043B8E8_0000143C
    addic. r0, r3, 0x330
    beq lbl_fn_8043B8E8_000013F8
    lwz r3, 0x330(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8043B8E8_000013F8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8043B8E8_000013F8:
    addic. r0, r30, 0x32c
    beq lbl_fn_8043B8E8_00001414
    lwz r3, 0x32c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8043B8E8_00001414
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8043B8E8_00001414:
    addi r3, r30, 0xf8
    li r4, -0x1
    bl fn_8008A76C
    mr r3, r30
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_8043B8E8_0000143C
    mr r3, r30
    bl dtor_80084684
lbl_fn_8043B8E8_0000143C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8043B988(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_8043B988_00001498
    addi r3, r31, 0xf8
    bl fn_8008B140
    cmpwi r3, 0x0
    bne lbl_fn_8043B988_00001498
    li r0, 0x1
    stw r0, 0x54(r31)
    li r3, 0x1
    b lbl_fn_8043B988_0000149C
lbl_fn_8043B988_00001498:
    li r3, 0x0
lbl_fn_8043B988_0000149C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8043B9E0(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    stw r0, 0x1d4(r1)
    addi r11, r1, 0x1b0
    stfd f31, 0x1c0(r1)
    psq_st f31, 0x1c8(r1), 0, 0
    stfd f30, 0x1b0(r1)
    psq_st f30, 0x1b8(r1), 0, 0
    bl _savegpr_14
    lfs f7, 0x70(r3)
    mr r15, r3
    lfs f0, lbl_808869A0
    lfs f3, 0x74(r3)
    lfs f1, 0x6c(r3)
    fsubs f2, f7, f0
    stfs f1, 0x44(r1)
    addi r3, r1, 0xd8
    stfs f2, 0x48(r1)
    stfs f3, 0x4c(r1)
    bl fn_805F90D0
    addi r4, r1, 0xd8
    addi r3, r1, 0x20
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x128(r15), 0, 0
    psq_st f1, 0x100(r15), 0, 0
    psq_st f2, 0x108(r15), 0, 0
    psq_st f3, 0x110(r15), 0, 0
    psq_st f4, 0x118(r15), 0, 0
    psq_st f5, 0x120(r15), 0, 0
    lfs f8, 0x100(r1)
    lfs f7, 0xf0(r1)
    lfs f0, 0xe0(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0xfc(r1)
    fmr f30, f1
    lfs f7, 0xec(r1)
    addi r3, r1, 0x2c
    lfs f0, 0xdc(r1)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F9940
    lfs f8, 0xf8(r1)
    fmr f31, f1
    lfs f7, 0xe8(r1)
    addi r3, r1, 0x38
    lfs f0, 0xd8(r1)
    stfs f0, 0x38(r1)
    stfs f7, 0x3c(r1)
    stfs f8, 0x40(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x14(r1)
    frsp f0, f30
    stfs f31, 0x18(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x1c(r1)
    ble lbl_fn_8043B9E0_000015BC
    b lbl_fn_8043B9E0_000015C0
lbl_fn_8043B9E0_000015BC:
    fmr f7, f0
lbl_fn_8043B9E0_000015C0:
    lfs f8, 0x14(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_8043B9E0_000015D0
    b lbl_fn_8043B9E0_000015E8
lbl_fn_8043B9E0_000015D0:
    lfs f8, 0x18(r1)
    lfs f0, 0x1c(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_8043B9E0_000015E4
    b lbl_fn_8043B9E0_000015E8
lbl_fn_8043B9E0_000015E4:
    fmr f8, f0
lbl_fn_8043B9E0_000015E8:
    stfs f8, 0x14c(r15)
    li r0, 0x0
    addi r3, r15, 0xf8
    addi r5, r1, 0xa0
    stw r0, 0xa0(r1)
    li r4, 0x0
    bl fn_800902C0
    addic. r3, r1, 0xa0
    beq lbl_fn_8043B9E0_00001640
    lwz r4, 0xa0(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8043B9E0_00001640
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8043B9E0_00001638
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8043B9E0_00001638:
    li r0, 0x0
    stw r0, 0xa0(r1)
lbl_fn_8043B9E0_00001640:
    lfs f0, lbl_80886994
    li r24, 0x0
    lis r4, lbl_80754370@ha
    lis r3, __files@ha
    stw r24, 0x108(r1)
    addi r21, r1, 0x10c
    addi r20, r1, 0x118
    addi r19, r1, 0x124
    stfs f0, 0x10c(r1)
    addi r18, r1, 0x154
    addi r25, r4, lbl_80754370@l
    addi r27, r3, __files@l
    stfs f0, 0x110(r1)
    addi r30, r1, 0x88
    addi r17, r1, 0x8c
    li r16, 0x0
    stfs f0, 0x114(r1)
    lis r31, 0xcccd
    lis r26, 0x2c8
    lis r28, 0xed
    stfs f0, 0x118(r1)
    lis r29, 0x1db
    lis r14, lbl_8078F158@ha
    stfs f0, 0x11c(r1)
    stfs f0, 0x120(r1)
    stfs f0, 0x154(r1)
    stfs f0, 0x158(r1)
    stfs f0, 0x15c(r1)
    stw r24, 0x80(r1)
    stw r24, 0x84(r1)
    stw r24, 0x88(r1)
lbl_fn_8043B9E0_000016BC:
    addi r3, r1, 0xb8
    addi r4, r25, 0x10
    addi r5, r16, 0x1
    crclr 6
    bl sprintf
    addi r3, r15, 0xf8
    addi r4, r1, 0xb8
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    blt lbl_fn_8043B9E0_00001AF8
    stw r3, 0x108(r1)
    bge lbl_fn_8043B9E0_000016F8
    li r3, 0x0
    b lbl_fn_8043B9E0_00001704
lbl_fn_8043B9E0_000016F8:
    mulli r0, r3, 0x30
    lwz r3, 0x134(r15)
    add r3, r3, r0
lbl_fn_8043B9E0_00001704:
    lwz r0, 0x84(r1)
    lwz r22, 0x88(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    cmplw r0, r22
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r19), 0, 0
    psq_st f2, 0x8(r19), 0, 0
    psq_st f3, 0x10(r19), 0, 0
    psq_st f4, 0x18(r19), 0, 0
    psq_st f5, 0x20(r19), 0, 0
    psq_st f6, 0x28(r19), 0, 0
    bge lbl_fn_8043B9E0_000017C4
    mulli r0, r0, 0x5c
    lwz r3, 0x80(r1)
    add. r3, r3, r0
    beq lbl_fn_8043B9E0_000017B4
    lwz r0, 0x108(r1)
    stw r0, 0x0(r3)
    psq_l f1, 0x0(r21), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x114(r1)
    stfs f2, 0xc(r3)
    psq_l f1, 0x0(r20), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    lfs f2, 0x120(r1)
    stfs f2, 0x18(r3)
    psq_l f1, 0x0(r19), 0, 0
    psq_st f1, 0x1c(r3), 0, 0
    psq_l f2, 0x8(r19), 0, 0
    psq_st f2, 0x24(r3), 0, 0
    psq_l f1, 0x0(r18), 0, 0
    psq_st f3, 0x2c(r3), 0, 0
    lfs f2, 0x15c(r1)
    psq_st f4, 0x34(r3), 0, 0
    lfs f0, 0x160(r1)
    psq_st f5, 0x3c(r3), 0, 0
    psq_st f6, 0x44(r3), 0, 0
    psq_st f1, 0x4c(r3), 0, 0
    stfs f2, 0x54(r3)
    stfs f0, 0x58(r3)
lbl_fn_8043B9E0_000017B4:
    lwz r3, 0x84(r1)
    addi r0, r3, 0x1
    stw r0, 0x84(r1)
    b lbl_fn_8043B9E0_00001AF8
lbl_fn_8043B9E0_000017C4:
    addi r0, r26, 0x590b
    subf r0, r22, r0
    cmplwi r0, 0x1
    bge lbl_fn_8043B9E0_000017E8
    addi r4, r25, 0x18
    addi r3, r27, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8043B9E0_000017E8:
    addi r0, r28, 0x7303
    cmplw r22, r0
    bge lbl_fn_8043B9E0_0000181C
    addi r3, r22, 0x1
    subi r4, r31, 0x3333
    slwi r0, r3, 2
    subf r0, r3, r0
    mulhwu r0, r4, r0
    srwi r0, r0, 2
    cmplwi r0, 0x1
    bge lbl_fn_8043B9E0_00001838
    b lbl_fn_8043B9E0_00001838
    b lbl_fn_8043B9E0_00001838
lbl_fn_8043B9E0_0000181C:
    subi r0, r29, 0x19fa
    cmplw r22, r0
    bge lbl_fn_8043B9E0_00001838
    addi r0, r22, 0x1
    srwi r0, r0, 1
    cmplwi r0, 0x1
    cmplwi r0, 0x1
lbl_fn_8043B9E0_00001838:
    lwz r3, 0x84(r1)
    addi r0, r26, 0x590b
    lwz r22, 0x88(r1)
    addi r3, r3, 0x1
    stw r24, 0x8c(r1)
    subf r3, r22, r3
    subf r0, r22, r0
    cmplw r3, r0
    stw r24, 0x90(r1)
    stw r24, 0x94(r1)
    stw r30, 0x98(r1)
    stw r24, 0x9c(r1)
    stw r3, 0x10(r1)
    ble lbl_fn_8043B9E0_00001884
    addi r4, r25, 0x18
    addi r3, r27, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8043B9E0_00001884:
    addi r0, r28, 0x7303
    cmplw r22, r0
    bge lbl_fn_8043B9E0_000018CC
    addi r4, r22, 0x1
    subi r5, r31, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x10(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_8043B9E0_000018C0
    addi r3, r1, 0x10
lbl_fn_8043B9E0_000018C0:
    lwz r0, 0x0(r3)
    add r23, r22, r0
    b lbl_fn_8043B9E0_00001908
lbl_fn_8043B9E0_000018CC:
    subi r0, r29, 0x19fa
    cmplw r22, r0
    bge lbl_fn_8043B9E0_00001904
    addi r3, r22, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_8043B9E0_000018F8
    addi r3, r1, 0x10
lbl_fn_8043B9E0_000018F8:
    lwz r0, 0x0(r3)
    add r23, r22, r0
    b lbl_fn_8043B9E0_00001908
lbl_fn_8043B9E0_00001904:
    addi r23, r26, 0x590b
lbl_fn_8043B9E0_00001908:
    addi r0, r26, 0x590b
    cmplw r23, r0
    ble lbl_fn_8043B9E0_00001928
    addi r4, r25, 0x18
    addi r3, r27, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8043B9E0_00001928:
    mulli r3, r23, 0x5c
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r22, r3
    bne lbl_fn_8043B9E0_00001950
    addi r3, r27, 0xa0
    addi r4, r14, lbl_8078F158@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8043B9E0_00001950:
    lwz r5, 0x84(r1)
    lwz r0, 0x90(r1)
    mulli r4, r5, 0x5c
    stw r22, 0x8c(r1)
    stw r23, 0x94(r1)
    mulli r3, r0, 0x5c
    add r0, r22, r4
    stw r5, 0x9c(r1)
    add. r3, r3, r0
    beq lbl_fn_8043B9E0_000019E8
    lwz r0, 0x108(r1)
    stw r0, 0x0(r3)
    psq_l f1, 0x0(r21), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x114(r1)
    stfs f2, 0xc(r3)
    psq_l f1, 0x0(r20), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    lfs f2, 0x120(r1)
    stfs f2, 0x18(r3)
    psq_l f1, 0x0(r19), 0, 0
    psq_st f1, 0x1c(r3), 0, 0
    psq_l f2, 0x8(r19), 0, 0
    psq_st f2, 0x24(r3), 0, 0
    psq_l f3, 0x10(r19), 0, 0
    psq_st f3, 0x2c(r3), 0, 0
    psq_l f4, 0x18(r19), 0, 0
    psq_st f4, 0x34(r3), 0, 0
    psq_l f5, 0x20(r19), 0, 0
    psq_st f5, 0x3c(r3), 0, 0
    psq_l f6, 0x28(r19), 0, 0
    psq_st f6, 0x44(r3), 0, 0
    psq_l f1, 0x0(r18), 0, 0
    psq_st f1, 0x4c(r3), 0, 0
    lfs f2, 0x15c(r1)
    stfs f2, 0x54(r3)
    lfs f0, 0x160(r1)
    stfs f0, 0x58(r3)
lbl_fn_8043B9E0_000019E8:
    lwz r0, 0x84(r1)
    lwz r3, 0x9c(r1)
    lwz r4, 0x90(r1)
    mulli r5, r0, 0x5c
    lwz r0, 0x80(r1)
    addi r6, r4, 0x1
    stw r6, 0x90(r1)
    mulli r3, r3, 0x5c
    lwz r4, 0x8c(r1)
    add r6, r0, r5
    add r5, r4, r3
    b lbl_fn_8043B9E0_00001AAC
lbl_fn_8043B9E0_00001A18:
    subic. r5, r5, 0x5c
    subi r6, r6, 0x5c
    beq lbl_fn_8043B9E0_00001A94
    lwz r3, 0x0(r6)
    stw r3, 0x0(r5)
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
lbl_fn_8043B9E0_00001A94:
    lwz r4, 0x9c(r1)
    lwz r3, 0x90(r1)
    subi r4, r4, 0x1
    stw r4, 0x9c(r1)
    addi r3, r3, 0x1
    stw r3, 0x90(r1)
lbl_fn_8043B9E0_00001AAC:
    cmplw r0, r6
    blt lbl_fn_8043B9E0_00001A18
    lwz r0, 0x90(r1)
    cmpwi r17, 0x0
    lwz r6, 0x88(r1)
    lwz r5, 0x94(r1)
    lwz r3, 0x80(r1)
    lwz r4, 0x8c(r1)
    stw r5, 0x88(r1)
    stw r6, 0x94(r1)
    stw r4, 0x80(r1)
    stw r3, 0x8c(r1)
    stw r0, 0x84(r1)
    stw r24, 0x90(r1)
    beq lbl_fn_8043B9E0_00001AF8
    cmpwi r3, 0x0
    beq lbl_fn_8043B9E0_00001AF8
    stw r24, 0x90(r1)
    bl dtor_80084684
lbl_fn_8043B9E0_00001AF8:
    addi r16, r16, 0x1
    cmpwi r16, 0xa
    blt lbl_fn_8043B9E0_000016BC
    lwz r14, 0x84(r1)
    stw r14, 0x334(r15)
    cmpwi r14, 0x0
    ble lbl_fn_8043B9E0_00001DB4
    mulli r3, r14, 0x5c
    lis r5, lbl_80754370@ha
    li r4, 0x3
    addi r5, r5, lbl_80754370@l
    mr r6, r5
    li r7, 0x0
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_8043C334@ha
    mr r7, r14
    addi r4, r4, fn_8043C334@l
    li r5, 0x0
    li r6, 0x5c
    bl fn_80695720
    lwz r4, 0x32c(r15)
    cmpwi r4, 0x0
    stw r3, 0x32c(r15)
    beq lbl_fn_8043B9E0_00001B64
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_8043B9E0_00001B64:
    lfs f31, lbl_80886994
    addi r17, r1, 0x68
    li r14, 0x0
    li r16, 0x0
    b lbl_fn_8043B9E0_00001CBC
lbl_fn_8043B9E0_00001B78:
    lwz r3, 0x80(r1)
    lwz r4, 0x32c(r15)
    lwzx r0, r3, r16
    stwx r0, r4, r16
    lwz r0, 0x80(r1)
    lwz r4, 0x32c(r15)
    add r3, r0, r16
    psq_l f2, 0x24(r3), 0, 0
    add r4, r4, r16
    psq_l f3, 0x2c(r3), 0, 0
    psq_l f4, 0x34(r3), 0, 0
    psq_l f5, 0x3c(r3), 0, 0
    psq_l f6, 0x44(r3), 0, 0
    psq_l f1, 0x1c(r3), 0, 0
    psq_st f1, 0x1c(r4), 0, 0
    psq_st f2, 0x24(r4), 0, 0
    psq_st f3, 0x2c(r4), 0, 0
    psq_st f4, 0x34(r4), 0, 0
    psq_st f5, 0x3c(r4), 0, 0
    psq_st f6, 0x44(r4), 0, 0
    lwz r0, 0x32c(r15)
    add r3, r0, r16
    lfs f0, 0x38(r3)
    lfs f7, 0x28(r3)
    lfs f2, 0x48(r3)
    stfs f7, 0x68(r1)
    stfs f0, 0x6c(r1)
    psq_l f1, 0x0(r17), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    stfs f2, 0xc(r3)
    lwz r3, 0x334(r15)
    stfs f2, 0x70(r1)
    subi r0, r3, 0x1
    cmpw r14, r0
    bge lbl_fn_8043B9E0_00001C78
    addi r0, r14, 0x1
    lwz r4, 0x80(r1)
    mulli r0, r0, 0x5c
    addi r3, r1, 0x74
    add r5, r4, r16
    lfs f9, 0x48(r5)
    add r4, r4, r0
    lfs f10, 0x38(r5)
    lfs f0, 0x48(r4)
    lfs f7, 0x38(r4)
    lfs f11, 0x28(r5)
    fsubs f12, f0, f9
    lfs f8, 0x28(r4)
    fsubs f13, f7, f10
    stfs f11, 0x50(r1)
    fsubs f11, f8, f11
    stfs f10, 0x54(r1)
    stfs f9, 0x58(r1)
    stfs f8, 0x5c(r1)
    stfs f7, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f11, 0x74(r1)
    stfs f13, 0x78(r1)
    stfs f12, 0x7c(r1)
    bl fn_805F9940
    lwz r0, 0x32c(r15)
    add r3, r0, r16
    stfs f1, 0x58(r3)
    b lbl_fn_8043B9E0_00001C84
lbl_fn_8043B9E0_00001C78:
    lwz r0, 0x32c(r15)
    add r3, r0, r16
    stfs f31, 0x58(r3)
lbl_fn_8043B9E0_00001C84:
    lwz r0, 0x32c(r15)
    addi r14, r14, 0x1
    add r3, r0, r16
    lfs f2, 0xc(r3)
    psq_l f1, 0x4(r3), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    stfs f2, 0x18(r3)
    lwz r0, 0x32c(r15)
    lfs f7, 0x338(r15)
    add r3, r0, r16
    addi r16, r16, 0x5c
    lfs f0, 0x58(r3)
    fadds f0, f7, f0
    stfs f0, 0x338(r15)
lbl_fn_8043B9E0_00001CBC:
    lwz r18, 0x334(r15)
    cmpw r14, r18
    blt lbl_fn_8043B9E0_00001B78
    mulli r3, r18, 0x5c
    lis r5, lbl_80754370@ha
    li r4, 0x3
    addi r5, r5, lbl_80754370@l
    mr r6, r5
    li r7, 0x0
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_8043C334@ha
    mr r7, r18
    addi r4, r4, fn_8043C334@l
    li r5, 0x0
    li r6, 0x5c
    bl fn_80695720
    lwz r4, 0x330(r15)
    cmpwi r4, 0x0
    stw r3, 0x330(r15)
    beq lbl_fn_8043B9E0_00001D18
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_8043B9E0_00001D18:
    li r6, 0x0
    li r3, 0x0
    b lbl_fn_8043B9E0_00001DA8
lbl_fn_8043B9E0_00001D24:
    lwz r0, 0x330(r15)
    addi r6, r6, 0x1
    lwz r4, 0x32c(r15)
    add r5, r0, r3
    lwzux r0, r4, r3
    stw r0, 0x0(r5)
    addi r3, r3, 0x5c
    lfs f2, 0xc(r4)
    psq_l f1, 0x4(r4), 0, 0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    lfs f2, 0x18(r4)
    psq_l f1, 0x10(r4), 0, 0
    psq_st f1, 0x10(r5), 0, 0
    stfs f2, 0x18(r5)
    psq_l f2, 0x24(r4), 0, 0
    psq_l f3, 0x2c(r4), 0, 0
    psq_l f4, 0x34(r4), 0, 0
    psq_l f5, 0x3c(r4), 0, 0
    psq_l f6, 0x44(r4), 0, 0
    psq_l f1, 0x1c(r4), 0, 0
    psq_st f1, 0x1c(r5), 0, 0
    psq_st f2, 0x24(r5), 0, 0
    psq_st f3, 0x2c(r5), 0, 0
    psq_st f4, 0x34(r5), 0, 0
    psq_st f5, 0x3c(r5), 0, 0
    psq_st f6, 0x44(r5), 0, 0
    lfs f2, 0x54(r4)
    psq_l f1, 0x4c(r4), 0, 0
    psq_st f1, 0x4c(r5), 0, 0
    stfs f2, 0x54(r5)
    lfs f0, 0x58(r4)
    stfs f0, 0x58(r5)
lbl_fn_8043B9E0_00001DA8:
    lwz r0, 0x334(r15)
    cmpw r6, r0
    blt lbl_fn_8043B9E0_00001D24
lbl_fn_8043B9E0_00001DB4:
    addic. r0, r1, 0x80
    beq lbl_fn_8043B9E0_00001DDC
    beq lbl_fn_8043B9E0_00001DDC
    lwz r3, 0x80(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8043B9E0_00001DDC
    lwz r0, 0x84(r1)
    subf r0, r0, r0
    stw r0, 0x84(r1)
    bl dtor_80084684
lbl_fn_8043B9E0_00001DDC:
    addi r11, r1, 0x1b0
    psq_l f31, 0x1c8(r1), 0, 0
    lfd f31, 0x1c0(r1)
    psq_l f30, 0x1b8(r1), 0, 0
    lfd f30, 0x1b0(r1)
    bl _restgpr_14
    lwz r0, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}
