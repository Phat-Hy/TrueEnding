#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_24(void);
extern void _savegpr_24(void);
extern void dtor_80084684(void);
extern void fn_8004ECC0(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_8008BBD8(void);
extern void fn_80097C08(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800CB5C8(void);
extern void fn_80105B3C(void);
extern void fn_80105B4C(void);
extern void fn_801070C8(void);
extern void fn_8010CB2C(void);
extern void fn_8011BF3C(void);
extern void fn_801240B4(void);
extern void fn_8016DA4C(void);
extern void fn_8016F3D0(void);
extern void fn_801B2EDC(void);
extern void fn_801C3458(void);
extern void fn_801C3D1C(void);
extern void fn_80219558(void);
extern void fn_80219E6C(void);
extern void fn_8021FD7C(void);
extern void fn_8036DAA8(void);
extern void fn_803E2110(void);
extern void fn_803EA77C(void);
extern void fn_805ADCC4(void);
extern void fn_805ADD84(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F99B0(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_80695B00(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8073B3C8[];
extern u8 lbl_8073B5D0[];
extern u8 lbl_80781708[];
extern u8 lbl_80781714[];
extern u8 lbl_80781730[];
extern u8 lbl_80781738[];
extern u8 lbl_80781740[];
extern u8 lbl_807817C0[];
extern u8 lbl_80781838[];
extern u8 lbl_807818B8[];
extern u8 lbl_807818D4[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C7C68[];
extern u8 lbl_807C7C70[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F100;
extern u32 lbl_8087F101;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F498;
extern u32 lbl_8087F610;
extern u32 lbl_8087F9F8;
extern u32 lbl_808825E4;
extern u32 lbl_808825E8;
extern u32 lbl_808825EC;
extern u32 lbl_808825F0;
extern u32 lbl_808825F4;
extern u32 lbl_808825F8;
extern u32 lbl_808825FC;
extern u32 lbl_80882600;
extern u32 lbl_80882608;
extern u32 lbl_8088260C;
extern u32 lbl_80882610;
extern u32 lbl_80882614;
extern u32 lbl_80882618;
extern u32 lbl_8088261C;
extern u32 lbl_80882620;
extern u32 lbl_80882624;
extern u32 lbl_80882628;
extern u32 lbl_8088262C;
extern u32 lbl_80882630;
extern u32 lbl_80882634;
extern u32 lbl_80882638;
extern u32 lbl_8088263C;
extern u32 lbl_80882640;

/* Function declarations */
void fn_801BC904(void);
void fn_801BC97C(void);
void fn_801BDA9C(void);
void fn_801BDE68(void);
void fn_801BDE98(void);
void fn_801BDFB4(void);
void fn_801BDFE8(void);
void fn_801BE10C(void);

asm void fn_801BC904(void)
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
    beq lbl_fn_801BC904_0000005C
    lis r5, lbl_80781838@ha
    li r4, 0x5
    addi r5, r5, lbl_80781838@l
    stw r5, 0x0(r3)
    li r5, 0x0
    addi r3, r3, 0x30
    bl fn_800CB5C8
    addi r3, r30, 0x30
    li r4, -0x1
    bl fn_800CB3A0
    cmpwi r31, 0x0
    ble lbl_fn_801BC904_0000005C
    mr r3, r30
    bl dtor_80084684
lbl_fn_801BC904_0000005C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801BC97C(void)
{
    nofralloc
    stwu r1, -0x2f0(r1)
    mflr r0
    stw r0, 0x2f4(r1)
    addi r11, r1, 0x2c0
    stfd f31, 0x2e0(r1)
    psq_st f31, 0x2e8(r1), 0, 0
    stfd f30, 0x2d0(r1)
    psq_st f30, 0x2d8(r1), 0, 0
    stfd f29, 0x2c0(r1)
    psq_st f29, 0x2c8(r1), 0, 0
    bl _savegpr_24
    lwz r4, 0x4(r3)
    mr r25, r3
    lis r0, 0x4330
    stw r0, 0x290(r1)
    lwz r3, lbl_8087F048
    addi r30, r4, 0xb0
    stw r0, 0x298(r1)
    li r28, 0x0
    lfs f1, 0x40(r25)
    bl fn_8010CB2C
    lwz r3, lbl_8087F9F8
    fmr f30, f1
    cmpwi r3, 0x0
    beq lbl_fn_801BC97C_00000164
    lwz r4, 0x4(r25)
    li r6, 0x0
    lwz r5, 0x638(r4)
    bl fn_805ADCC4
    cmpwi r3, 0x0
    beq lbl_fn_801BC97C_00000164
    lwz r3, 0x4(r25)
    lwz r3, 0x638(r3)
    lwz r0, 0xac(r3)
    rlwinm r3, r0, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    beq lbl_fn_801BC97C_00000154
    lwz r0, 0x38(r25)
    lis r3, lbl_8073B3C8@ha
    lfd f4, lbl_8073B3C8@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x294(r1)
    lfs f3, lbl_8088260C
    lfd f0, 0x290(r1)
    lfs f5, 0x2c(r25)
    fsubs f0, f0, f4
    fsubs f0, f0, f3
    fcmpo cr0, f0, f5
    ble lbl_fn_801BC97C_00000150
    stw r0, 0x29c(r1)
    lfd f0, 0x298(r1)
    fsubs f0, f0, f4
    fsubs f5, f0, f3
lbl_fn_801BC97C_00000150:
    stfs f5, 0x2c(r25)
lbl_fn_801BC97C_00000154:
    lwz r4, 0x4(r25)
    lwz r3, lbl_8087F9F8
    lwz r5, 0x638(r4)
    bl fn_805ADD84
lbl_fn_801BC97C_00000164:
    lwz r3, 0x4(r25)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801BC97C_000004EC
    lwz r31, 0x3c(r25)
    li r27, 0x0
    lfs f0, lbl_80882610
    lwz r3, 0xc8(r31)
    fmuls f30, f30, f0
    cmpwi r3, 0x0
    ble lbl_fn_801BC97C_00000198
    bl fn_80219E6C
    mr r31, r3
lbl_fn_801BC97C_00000198:
    lwz r0, 0x38(r25)
    lis r3, lbl_8073B3C8@ha
    lfd f3, lbl_8073B3C8@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x294(r1)
    lfs f4, 0x2c(r25)
    lfd f0, 0x290(r1)
    lwz r26, 0x3c(r25)
    fsubs f0, f0, f3
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_801BC97C_000001D0
    mr r4, r26
    b lbl_fn_801BC97C_000001D4
lbl_fn_801BC97C_000001D0:
    mr r4, r31
lbl_fn_801BC97C_000001D4:
    lwz r3, 0x4(r25)
    lwz r0, 0x638(r3)
    stw r0, 0x63c(r3)
    stw r4, 0x638(r3)
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_801BC97C_00000240
    lwz r0, 0x38(r25)
    lis r3, lbl_8073B3C8@ha
    lfd f4, lbl_8073B3C8@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x29c(r1)
    lfs f5, 0x2c(r25)
    lfd f0, 0x298(r1)
    fsubs f0, f0, f4
    fcmpo cr0, f5, f0
    cror eq, gt, eq
    bne lbl_fn_801BC97C_00000224
    lfs f0, lbl_808825E8
    b lbl_fn_801BC97C_0000023C
lbl_fn_801BC97C_00000224:
    stw r0, 0x294(r1)
    lfs f0, lbl_80882614
    lfd f3, 0x290(r1)
    fsubs f3, f3, f4
    fdivs f3, f5, f3
    fmuls f0, f0, f3
lbl_fn_801BC97C_0000023C:
    stfs f0, 0x48(r25)
lbl_fn_801BC97C_00000240:
    lwz r5, 0x4(r25)
    lwz r29, 0x638(r5)
    cmpwi r29, 0x0
    beq lbl_fn_801BC97C_0000030C
    lfs f0, 0x58(r29)
    stfs f0, 0x28(r25)
    lbz r0, 0x2(r29)
    cmpwi r0, 0x4
    bne lbl_fn_801BC97C_00000300
    stw r5, 0x34(r25)
    addi r3, r1, 0x260
    lfs f3, lbl_808825E4
    li r4, 0x79
    lfs f0, lbl_808825E8
    stfs f3, 0x134(r1)
    stfs f3, 0x138(r1)
    stfs f0, 0x13c(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x134
    addi r3, r1, 0x260
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x13c(r1)
    addi r3, r1, 0x14c
    lfs f4, lbl_808825EC
    lfs f0, 0x138(r1)
    fmuls f5, f5, f4
    lwz r4, 0x4(r25)
    fmuls f6, f0, f4
    lfs f3, 0x134(r1)
    lfs f0, 0x530(r4)
    fmuls f4, f3, f4
    fadds f2, f0, f5
    lfs f3, 0x52c(r4)
    lfs f0, 0x528(r4)
    fadds f3, f3, f6
    stfs f4, 0x140(r1)
    fadds f0, f0, f4
    stfs f3, 0x150(r1)
    stfs f0, 0x14c(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f6, 0x144(r1)
    stfs f5, 0x148(r1)
    stfs f2, 0x154(r1)
    psq_st f1, 0x8(r25), 0, 0
    stfs f2, 0x10(r25)
    b lbl_fn_801BC97C_0000031C
lbl_fn_801BC97C_00000300:
    li r0, 0x0
    stw r0, 0x34(r25)
    b lbl_fn_801BC97C_0000031C
lbl_fn_801BC97C_0000030C:
    lfs f0, lbl_808825E8
    li r0, 0x0
    stfs f0, 0x28(r25)
    stw r0, 0x34(r25)
lbl_fn_801BC97C_0000031C:
    lwz r3, lbl_8087F0A8
    li r4, 0x5
    addi r3, r3, 0x48c
    bl fn_801240B4
    cmpwi r3, 0x0
    beq lbl_fn_801BC97C_00000434
    lwz r5, lbl_8087EFA8
    mr r3, r25
    lwz r6, 0x4(r25)
    li r4, 0x0
    lfs f0, 0x3a4(r5)
    lfs f5, 0x400(r6)
    fmuls f4, f30, f0
    lfs f0, 0x2c(r25)
    lfs f2, lbl_80882618
    lfs f3, lbl_8088261C
    fmadds f0, f4, f5, f0
    stfs f0, 0x2c(r25)
    lfs f1, 0x58(r31)
    bl fn_801C3458
    lwz r3, 0x34(r25)
    cmpwi r3, 0x0
    beq lbl_fn_801BC97C_00000388
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0x10(r25)
    psq_st f1, 0x8(r25), 0, 0
lbl_fn_801BC97C_00000388:
    lbz r3, 0x2(r29)
    subi r0, r3, 0x3
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_fn_801BC97C_000004C0
    lwz r5, 0x4(r25)
    addi r3, r1, 0x230
    lfs f3, lbl_808825E4
    li r4, 0x79
    lfs f0, lbl_808825E8
    stfs f3, 0x110(r1)
    stfs f3, 0x114(r1)
    stfs f0, 0x118(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x110
    addi r3, r1, 0x230
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x118(r1)
    addi r3, r1, 0x128
    lfs f4, lbl_808825EC
    lfs f0, 0x114(r1)
    fmuls f5, f5, f4
    lfs f3, 0x110(r1)
    fmuls f6, f0, f4
    lfs f0, 0x1c(r25)
    fmuls f4, f3, f4
    lfs f3, 0x18(r25)
    fadds f2, f0, f5
    lfs f0, 0x14(r25)
    fadds f3, f3, f6
    stfs f4, 0x11c(r1)
    fadds f0, f0, f4
    stfs f3, 0x12c(r1)
    stfs f0, 0x128(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f6, 0x120(r1)
    stfs f5, 0x124(r1)
    stfs f2, 0x130(r1)
    psq_st f1, 0x8(r25), 0, 0
    stfs f2, 0x10(r25)
    b lbl_fn_801BC97C_000004C0
lbl_fn_801BC97C_00000434:
    lwz r0, 0x38(r25)
    lis r3, lbl_8073B3C8@ha
    lfd f3, lbl_8073B3C8@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x29c(r1)
    lfs f4, 0x2c(r25)
    lfd f0, 0x298(r1)
    fsubs f0, f0, f3
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    beq lbl_fn_801BC97C_00000488
    cmpwi r29, 0x0
    beq lbl_fn_801BC97C_000004BC
    lwz r0, 0xc0(r29)
    xoris r0, r0, 0x8000
    stw r0, 0x294(r1)
    lfd f0, 0x290(r1)
    fsubs f0, f0, f3
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_801BC97C_000004BC
lbl_fn_801BC97C_00000488:
    cmpwi r29, 0x0
    li r3, 0x1
    stb r3, 0x44(r25)
    li r28, 0x1
    beq lbl_fn_801BC97C_000004C0
    cmplw r26, r29
    bne lbl_fn_801BC97C_000004C0
    lwz r4, 0x4(r29)
    subi r0, r4, 0x179a
    cmplwi r0, 0x4
    bgt lbl_fn_801BC97C_000004C0
    stb r3, 0x47(r25)
    b lbl_fn_801BC97C_000004C0
lbl_fn_801BC97C_000004BC:
    li r27, 0x1
lbl_fn_801BC97C_000004C0:
    cmpwi r27, 0x0
    beq lbl_fn_801BC97C_00000B58
    lwz r4, 0x4(r25)
    li r0, 0x0
    lwz r3, 0x638(r4)
    stw r3, 0x63c(r4)
    stw r0, 0x638(r4)
    lwz r3, 0x4(r25)
    bl fn_8016DA4C
    li r28, 0x1
    b lbl_fn_801BC97C_00000B58
lbl_fn_801BC97C_000004EC:
    lwz r29, 0x638(r3)
    cmpwi r29, 0x0
    beq lbl_fn_801BC97C_00000500
    lfs f0, 0x58(r29)
    b lbl_fn_801BC97C_00000504
lbl_fn_801BC97C_00000500:
    lfs f0, lbl_808825E8
lbl_fn_801BC97C_00000504:
    lbz r0, 0x47(r25)
    stfs f0, 0x28(r25)
    cmpwi r0, 0x0
    bne lbl_fn_801BC97C_000005E0
    lwz r6, 0x34(r25)
    cmpwi r6, 0x0
    beq lbl_fn_801BC97C_000005A4
    lwz r7, 0x38(r6)
    li r4, 0x0
    li r0, 0x0
    li r3, 0x0
    rlwinm r5, r7, 0, 29, 29
    cmplwi r5, 0x4
    beq lbl_fn_801BC97C_0000054C
    clrlwi r5, r7, 31
    cmplwi r5, 0x1
    beq lbl_fn_801BC97C_0000054C
    li r3, 0x1
lbl_fn_801BC97C_0000054C:
    cmpwi r3, 0x0
    beq lbl_fn_801BC97C_00000568
    lwz r3, 0x7e0(r6)
    rlwinm r3, r3, 0, 26, 26
    cmplwi r3, 0x20
    beq lbl_fn_801BC97C_00000568
    li r0, 0x1
lbl_fn_801BC97C_00000568:
    cmpwi r0, 0x0
    beq lbl_fn_801BC97C_0000059C
    lwz r0, 0x55c(r6)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_801BC97C_00000590
    lwz r0, 0x560(r6)
    cmpwi r0, 0x1c
    bne lbl_fn_801BC97C_00000590
    li r3, 0x1
lbl_fn_801BC97C_00000590:
    cmpwi r3, 0x0
    bne lbl_fn_801BC97C_0000059C
    li r4, 0x1
lbl_fn_801BC97C_0000059C:
    cmpwi r4, 0x0
    bne lbl_fn_801BC97C_000005D0
lbl_fn_801BC97C_000005A4:
    lwz r4, 0x4(r25)
    addi r3, r1, 0x104
    li r5, 0x2
    addi r4, r4, 0xc58
    bl fn_8011BF3C
    addi r3, r1, 0x104
    lfs f2, 0x10c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x8(r25), 0, 0
    stfs f2, 0x10(r25)
    b lbl_fn_801BC97C_000005E0
lbl_fn_801BC97C_000005D0:
    psq_l f1, 0x528(r6), 0, 0
    lfs f2, 0x530(r6)
    stfs f2, 0x10(r25)
    psq_st f1, 0x8(r25), 0, 0
lbl_fn_801BC97C_000005E0:
    lwz r0, 0x38(r25)
    lis r3, lbl_8073B3C8@ha
    lfd f3, lbl_8073B3C8@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x29c(r1)
    lfs f4, 0x2c(r25)
    lfd f0, 0x298(r1)
    fsubs f0, f0, f3
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_801BC97C_00000614
    li r0, 0x1
    stb r0, 0x45(r25)
lbl_fn_801BC97C_00000614:
    cmpwi r29, 0x0
    beq lbl_fn_801BC97C_00000644
    lwz r3, 0x4(r25)
    lwz r0, 0xd28(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801BC97C_00000644
    lwz r0, 0xd1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801BC97C_00000644
    li r0, 0x0
    stb r0, 0x45(r25)
    li r28, 0x1
lbl_fn_801BC97C_00000644:
    lbz r0, 0x45(r25)
    cmpwi r0, 0x0
    beq lbl_fn_801BC97C_00000B44
    lwz r3, 0x4(r25)
    li r26, 0x1
    lwz r0, 0xd28(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801BC97C_00000AD4
    lwz r3, 0xd1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_801BC97C_00000AD4
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_801BC97C_00000698
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1d
    bne lbl_fn_801BC97C_00000698
    lfs f3, 0xc(r25)
    lfs f0, lbl_80882600
    fadds f0, f3, f0
    stfs f0, 0xc(r25)
lbl_fn_801BC97C_00000698:
    cmpwi r29, 0x0
    beq lbl_fn_801BC97C_000006AC
    lbz r0, 0x2(r29)
    cmpwi r0, 0x8
    beq lbl_fn_801BC97C_00000AD4
lbl_fn_801BC97C_000006AC:
    lwz r6, 0x4(r25)
    addi r4, r1, 0x1b0
    lfs f0, lbl_80882620
    addi r5, r1, 0x1a4
    lfs f2, 0x530(r6)
    addi r3, r1, 0x198
    psq_l f1, 0x528(r6), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f3, 0x1b4(r1)
    stfs f2, 0x1b8(r1)
    fadds f5, f3, f0
    lfs f0, 0x1b0(r1)
    frsp f3, f2
    stfs f5, 0x1b4(r1)
    lfs f2, 0x10(r25)
    psq_l f1, 0x8(r25), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fsubs f6, f2, f3
    lfs f4, 0x1a8(r1)
    lfs f3, 0x1a4(r1)
    fsubs f4, f4, f5
    stfs f2, 0x1ac(r1)
    fsubs f0, f3, f0
    stfs f4, 0x19c(r1)
    stfs f0, 0x198(r1)
    stfs f6, 0x1a0(r1)
    bl fn_805F9940
    fmr f29, f1
    addi r3, r1, 0x198
    mr r4, r3
    bl fn_805F98D0
    cmpwi r29, 0x0
    lis r3, 0x8000
    addi r24, r3, 0x2
    beq lbl_fn_801BC97C_00000740
    lfs f31, 0x58(r29)
    b lbl_fn_801BC97C_00000744
lbl_fn_801BC97C_00000740:
    lfs f31, lbl_808825E8
lbl_fn_801BC97C_00000744:
    lfs f4, 0x1a0(r1)
    fcmpo cr0, f29, f31
    lfs f0, 0x19c(r1)
    fmuls f5, f4, f31
    lfs f3, 0x198(r1)
    fmuls f6, f0, f31
    lfs f0, lbl_808825FC
    fmuls f7, f3, f31
    lfs f4, 0x1a4(r1)
    fmuls f8, f5, f0
    lfs f3, 0x1a8(r1)
    fmuls f9, f6, f0
    stfs f7, 0xec(r1)
    fmuls f10, f7, f0
    lfs f0, 0x1ac(r1)
    fsubs f3, f3, f9
    stfs f6, 0xf0(r1)
    fsubs f4, f4, f10
    fsubs f0, f0, f8
    stfs f5, 0xf4(r1)
    stfs f10, 0xf8(r1)
    stfs f9, 0xfc(r1)
    stfs f8, 0x100(r1)
    stfs f4, 0x1a4(r1)
    stfs f3, 0x1a8(r1)
    stfs f0, 0x1ac(r1)
    ble lbl_fn_801BC97C_00000AD4
    lis r4, 0x8000
    lwz r3, lbl_8087EE98
    addi r7, r4, 0x2
    addi r5, r1, 0x1b0
    addi r6, r1, 0x1a4
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ECC0
    cmpwi r3, 0x0
    beq lbl_fn_801BC97C_00000AD4
    lfs f3, lbl_808825E4
    addi r3, r1, 0x198
    lfs f0, lbl_808825E8
    addi r4, r1, 0xe0
    stfs f3, 0xe0(r1)
    addi r5, r1, 0x18c
    stfs f0, 0xe4(r1)
    stfs f3, 0xe8(r1)
    bl fn_805F99B0
    lfs f4, 0x194(r1)
    addi r31, r1, 0x198
    lfs f3, 0x190(r1)
    addi r3, r1, 0xd4
    lfs f0, 0x18c(r1)
    fmuls f4, f4, f31
    fmuls f5, f3, f31
    lfs f3, lbl_808825FC
    fmuls f6, f0, f31
    lfs f0, 0x10(r25)
    fmuls f7, f4, f3
    fmuls f8, f5, f3
    fmuls f9, f6, f3
    lfs f3, 0xc(r25)
    fsubs f10, f0, f7
    lfs f0, 0x8(r25)
    fsubs f3, f3, f8
    fsubs f11, f0, f9
    fmr f2, f10
    stfs f3, 0xd8(r1)
    addi r27, r1, 0x1a4
    lfs f0, 0x1b8(r1)
    stfs f11, 0xd4(r1)
    frsp f3, f2
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0xb0
    psq_st f1, 0x0(r27), 0, 0
    mr r3, r31
    fsubs f11, f3, f0
    lfs f3, 0x1a8(r1)
    mr r4, r31
    lfs f0, 0x1b4(r1)
    stfs f2, 0x1ac(r1)
    fmr f2, f11
    fsubs f12, f3, f0
    lfs f3, 0x1a4(r1)
    lfs f0, 0x1b0(r1)
    stfs f12, 0xb4(r1)
    fsubs f0, f3, f0
    stfs f6, 0xbc(r1)
    stfs f0, 0xb0(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f5, 0xc0(r1)
    stfs f4, 0xc4(r1)
    stfs f9, 0xc8(r1)
    stfs f8, 0xcc(r1)
    stfs f7, 0xd0(r1)
    stfs f10, 0xdc(r1)
    stfs f11, 0xb8(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x1a0(r1)
    bl fn_805F98D0
    lfs f3, 0x1a4(r1)
    mr r6, r27
    lfs f0, 0x198(r1)
    mr r7, r24
    lfs f5, 0x1a8(r1)
    addi r5, r1, 0x1b0
    fsubs f6, f3, f0
    lfs f4, 0x19c(r1)
    lfs f3, 0x1ac(r1)
    li r4, 0x0
    lfs f0, 0x1a0(r1)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f6, 0x1a4(r1)
    lwz r3, lbl_8087EE98
    li r8, 0x0
    stfs f4, 0x1a8(r1)
    li r9, 0x0
    stfs f0, 0x1ac(r1)
    bl fn_8004ECC0
    cmpwi r3, 0x0
    beq lbl_fn_801BC97C_00000A94
    lfs f4, 0x194(r1)
    addi r4, r1, 0xa4
    lfs f3, 0x190(r1)
    addi r5, r1, 0x80
    lfs f0, 0x18c(r1)
    fmuls f6, f4, f31
    fmuls f7, f3, f31
    lfs f3, lbl_808825FC
    fmuls f8, f0, f31
    lfs f0, 0x10(r25)
    fmuls f9, f6, f3
    fmuls f10, f7, f3
    fmuls f11, f8, f3
    lfs f3, 0xc(r25)
    fadds f12, f0, f9
    lfs f0, 0x8(r25)
    fadds f3, f3, f10
    fadds f4, f0, f11
    fmr f2, f12
    stfs f3, 0xa8(r1)
    lfs f0, 0x1b8(r1)
    mr r3, r31
    stfs f4, 0xa4(r1)
    frsp f3, f2
    psq_l f1, 0x0(r4), 0, 0
    mr r4, r31
    psq_st f1, 0x0(r27), 0, 0
    fsubs f13, f3, f0
    lfs f4, 0x1b4(r1)
    lfs f5, 0x1a8(r1)
    lfs f3, 0x1a4(r1)
    lfs f0, 0x1b0(r1)
    fsubs f4, f5, f4
    stfs f2, 0x1ac(r1)
    fmr f2, f13
    fsubs f0, f3, f0
    stfs f4, 0x84(r1)
    stfs f0, 0x80(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f8, 0x8c(r1)
    stfs f7, 0x90(r1)
    stfs f6, 0x94(r1)
    stfs f11, 0x98(r1)
    stfs f10, 0x9c(r1)
    stfs f9, 0xa0(r1)
    stfs f12, 0xac(r1)
    stfs f13, 0x88(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x1a0(r1)
    bl fn_805F98D0
    lfs f3, 0x1a4(r1)
    mr r6, r27
    lfs f0, 0x198(r1)
    mr r7, r24
    lfs f5, 0x1a8(r1)
    addi r5, r1, 0x1b0
    fsubs f6, f3, f0
    lfs f4, 0x19c(r1)
    lfs f3, 0x1ac(r1)
    li r4, 0x0
    lfs f0, 0x1a0(r1)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f6, 0x1a4(r1)
    lwz r3, lbl_8087EE98
    li r8, 0x0
    stfs f4, 0x1a8(r1)
    li r9, 0x0
    stfs f0, 0x1ac(r1)
    bl fn_8004ECC0
    cmpwi r3, 0x0
    beq lbl_fn_801BC97C_00000A50
    li r26, 0x0
    b lbl_fn_801BC97C_00000AD4
lbl_fn_801BC97C_00000A50:
    lfs f3, 0x1ac(r1)
    addi r3, r1, 0x74
    lfs f0, 0x1a0(r1)
    lfs f5, 0x1a8(r1)
    fadds f2, f3, f0
    lfs f4, 0x19c(r1)
    lfs f3, 0x1a4(r1)
    lfs f0, 0x198(r1)
    fadds f4, f5, f4
    stfs f2, 0x7c(r1)
    fadds f0, f3, f0
    stfs f4, 0x78(r1)
    stfs f0, 0x74(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x8(r25), 0, 0
    stfs f2, 0x10(r25)
    b lbl_fn_801BC97C_00000AD4
lbl_fn_801BC97C_00000A94:
    lfs f3, 0x1ac(r1)
    addi r3, r1, 0x68
    lfs f0, 0x1a0(r1)
    lfs f5, 0x1a8(r1)
    fadds f2, f3, f0
    lfs f4, 0x19c(r1)
    lfs f3, 0x1a4(r1)
    lfs f0, 0x198(r1)
    fadds f4, f5, f4
    stfs f2, 0x70(r1)
    fadds f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x8(r25), 0, 0
    stfs f2, 0x10(r25)
lbl_fn_801BC97C_00000AD4:
    cmpwi r26, 0x0
    bne lbl_fn_801BC97C_00000B0C
    lwz r4, 0x38(r25)
    lis r3, lbl_8073B3C8@ha
    lfd f3, lbl_8073B3C8@l(r3)
    addi r0, r4, 0x3c
    lfs f4, 0x2c(r25)
    xoris r0, r0, 0x8000
    stw r0, 0x294(r1)
    lfd f0, 0x290(r1)
    fsubs f0, f0, f3
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_801BC97C_00000B44
lbl_fn_801BC97C_00000B0C:
    lwz r0, 0x34(r25)
    cmpwi r0, 0x0
    bne lbl_fn_801BC97C_00000B38
    lwz r3, 0x4(r25)
    lwz r0, 0xd28(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801BC97C_00000B38
    lwz r0, 0xd1c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801BC97C_00000B38
    stw r0, 0x34(r25)
lbl_fn_801BC97C_00000B38:
    li r0, 0x1
    stb r0, 0x44(r25)
    li r28, 0x1
lbl_fn_801BC97C_00000B44:
    lwz r3, lbl_8087EFA8
    lfs f0, 0x2c(r25)
    lfs f3, 0x3a4(r3)
    fmadds f0, f30, f3, f0
    stfs f0, 0x2c(r25)
lbl_fn_801BC97C_00000B58:
    lwz r4, 0x4(r25)
    addi r3, r1, 0x180
    lfs f3, 0x10(r25)
    lfs f0, 0x530(r4)
    lfs f5, 0xc(r25)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r4)
    lfs f3, 0x8(r25)
    lfs f0, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x184(r1)
    stfs f0, 0x180(r1)
    stfs f6, 0x188(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80882624
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801BC97C_00000BFC
    lwz r5, 0x4(r25)
    lwz r6, 0xd1c(r5)
    cmpwi r6, 0x0
    beq lbl_fn_801BC97C_00000BFC
    lfs f3, 0x530(r6)
    addi r4, r1, 0x5c
    lfs f0, 0x530(r5)
    addi r3, r1, 0x180
    lfs f5, 0x52c(r6)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r5)
    lfs f3, 0x528(r6)
    lfs f0, 0x528(r5)
    fsubs f4, f5, f4
    stfs f2, 0x64(r1)
    fsubs f0, f3, f0
    stfs f4, 0x60(r1)
    stfs f0, 0x5c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x188(r1)
lbl_fn_801BC97C_00000BFC:
    lwz r3, 0x4(r25)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801BC97C_00000E1C
    addi r3, r1, 0x180
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80882624
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_801BC97C_00000E1C
    addi r3, r1, 0x180
    mr r4, r3
    bl fn_805F98D0
    lwz r5, 0x4(r25)
    addi r3, r1, 0x174
    lfs f0, lbl_80882624
    addi r4, r1, 0x180
    lfs f2, 0x53c(r5)
    addi r26, r1, 0x50
    stfs f2, 0x17c(r1)
    lfs f2, 0x188(r1)
    psq_l f1, 0x534(r5), 0, 0
    fabs f3, f2
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801BC97C_00000C9C
    lfs f3, 0x50(r1)
    lfs f0, lbl_808825E4
    fcmpo cr0, f3, f0
    ble lbl_fn_801BC97C_00000C90
    lfs f0, lbl_80882628
    b lbl_fn_801BC97C_00000C94
lbl_fn_801BC97C_00000C90:
    lfs f0, lbl_8088262C
lbl_fn_801BC97C_00000C94:
    stfs f0, 0x48(r1)
    b lbl_fn_801BC97C_00000CB0
lbl_fn_801BC97C_00000C9C:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801BC97C_00000CB0:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x1c0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808825E4
    addi r4, r1, 0x38
    lfs f31, 0x1c8(r1)
    mr r5, r4
    lfs f29, 0x1c4(r1)
    addi r3, r1, 0x1f0
    lfs f13, 0x1c0(r1)
    lfs f12, 0x1d8(r1)
    lfs f11, 0x1d4(r1)
    lfs f10, 0x1d0(r1)
    lfs f9, 0x1e8(r1)
    lfs f8, 0x1e4(r1)
    lfs f7, 0x1e0(r1)
    lfs f6, 0x1ec(r1)
    lfs f5, 0x1dc(r1)
    lfs f4, 0x1cc(r1)
    lfs f0, lbl_808825E8
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0x220(r1)
    stfs f3, 0x224(r1)
    stfs f3, 0x228(r1)
    stfs f0, 0x22c(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0x1f0(r1)
    stfs f29, 0x1f4(r1)
    stfs f31, 0x1f8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x200(r1)
    stfs f11, 0x204(r1)
    stfs f12, 0x208(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x210(r1)
    stfs f8, 0x214(r1)
    stfs f9, 0x218(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x1fc(r1)
    stfs f5, 0x20c(r1)
    stfs f6, 0x21c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80882624
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801BC97C_00000DCC
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808825E4
    fcmpo cr0, f3, f0
    ble lbl_fn_801BC97C_00000DBC
    lfs f0, lbl_80882628
    b lbl_fn_801BC97C_00000DC0
lbl_fn_801BC97C_00000DBC:
    lfs f0, lbl_8088262C
lbl_fn_801BC97C_00000DC0:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801BC97C_00000DE0
lbl_fn_801BC97C_00000DCC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801BC97C_00000DE0:
    addi r3, r1, 0x44
    lfs f3, lbl_808825E4
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x174
    psq_st f1, 0x0(r26), 0, 0
    fmr f2, f3
    lwz r4, 0x4(r25)
    lfs f0, 0x54(r1)
    stfs f0, 0x178(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r4), 0, 0
    stfs f2, 0x58(r1)
    lfs f2, 0x17c(r1)
    stfs f3, 0x4c(r1)
    stfs f2, 0x53c(r4)
lbl_fn_801BC97C_00000E1C:
    cmpwi r29, 0x0
    lfs f4, lbl_80882630
    beq lbl_fn_801BC97C_00000E3C
    lwz r0, 0xac(r29)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_fn_801BC97C_00000E3C
    lfs f0, lbl_80882634
    fmuls f4, f4, f0
lbl_fn_801BC97C_00000E3C:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x40(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801BC97C_00000EA8
    lwz r3, 0x4(r25)
    lfs f0, 0x18(r25)
    lfs f3, 0x52c(r3)
    fsubs f0, f3, f0
    fcmpo cr0, f0, f4
    bge lbl_fn_801BC97C_00000EA8
    mr r3, r25
    bl fn_801C3D1C
    cmpwi r3, 0x0
    beq lbl_fn_801BC97C_00000EA8
    lwz r4, 0x4(r25)
    addi r3, r1, 0x168
    lfs f3, lbl_80882638
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x530(r4)
    lfs f0, 0x16c(r1)
    stfs f2, 0x170(r1)
    fmadds f0, f3, f30, f0
    stfs f0, 0x16c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    stfs f2, 0x530(r4)
lbl_fn_801BC97C_00000EA8:
    lbz r0, 0x46(r25)
    cmpwi r0, 0x0
    bne lbl_fn_801BC97C_00000FE0
    lwz r4, 0x38(r25)
    lis r3, lbl_8073B3C8@ha
    lfd f3, lbl_8073B3C8@l(r3)
    subi r0, r4, 0x5a
    lfs f4, 0x2c(r25)
    xoris r0, r0, 0x8000
    stw r0, 0x29c(r1)
    lfd f0, 0x298(r1)
    fsubs f0, f0, f3
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_801BC97C_00000FE0
    li r0, 0x1
    stb r0, 0x46(r25)
    lwz r3, 0x4(r25)
    lfs f0, lbl_808825E8
    stfs f0, 0x158(r1)
    stfs f0, 0x15c(r1)
    stfs f0, 0x160(r1)
    stfs f0, 0x164(r1)
    lwz r3, 0x50(r3)
    bl fn_80219558
    subi r0, r3, 0x9
    cmplwi r0, 0x1
    ble lbl_fn_801BC97C_00000F3C
    cmpwi r3, 0x1
    beq lbl_fn_801BC97C_00000F3C
    cmpwi r3, 0x4
    beq lbl_fn_801BC97C_00000F5C
    cmpwi r3, 0x6
    beq lbl_fn_801BC97C_00000F7C
    cmpwi r3, 0x5
    beq lbl_fn_801BC97C_00000F9C
    b lbl_fn_801BC97C_00000FB4
lbl_fn_801BC97C_00000F3C:
    lfs f4, lbl_808825E8
    lfs f3, lbl_808825F0
    lfs f0, lbl_808825F4
    stfs f4, 0x158(r1)
    stfs f3, 0x15c(r1)
    stfs f0, 0x160(r1)
    stfs f4, 0x164(r1)
    b lbl_fn_801BC97C_00000FB4
lbl_fn_801BC97C_00000F5C:
    lfs f4, lbl_808825E8
    lfs f3, lbl_808825F4
    lfs f0, lbl_808825EC
    stfs f4, 0x158(r1)
    stfs f3, 0x15c(r1)
    stfs f0, 0x160(r1)
    stfs f4, 0x164(r1)
    b lbl_fn_801BC97C_00000FB4
lbl_fn_801BC97C_00000F7C:
    lfs f0, lbl_808825E8
    lfs f4, lbl_808825F8
    lfs f3, lbl_808825FC
    stfs f4, 0x158(r1)
    stfs f3, 0x15c(r1)
    stfs f0, 0x160(r1)
    stfs f0, 0x164(r1)
    b lbl_fn_801BC97C_00000FB4
lbl_fn_801BC97C_00000F9C:
    lfs f3, lbl_808825F8
    lfs f0, lbl_808825E8
    stfs f3, 0x158(r1)
    stfs f0, 0x15c(r1)
    stfs f3, 0x160(r1)
    stfs f0, 0x164(r1)
lbl_fn_801BC97C_00000FB4:
    lwz r3, 0x4(r25)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801BC97C_00000FCC
    lfs f0, lbl_8088263C
    stfs f0, 0x164(r1)
lbl_fn_801BC97C_00000FCC:
    lwz r3, lbl_8087F048
    mr r5, r30
    lwz r4, 0x4(r25)
    addi r6, r1, 0x158
    bl fn_80105B4C
lbl_fn_801BC97C_00000FE0:
    lwz r3, 0x4(r25)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x3
    bne lbl_fn_801BC97C_000010B0
    cmpwi r29, 0x0
    beq lbl_fn_801BC97C_000010B0
    lwz r4, 0x34(r25)
    cmpwi r4, 0x0
    beq lbl_fn_801BC97C_000010B0
    lwz r8, 0x38(r4)
    li r6, 0x0
    li r0, 0x0
    li r5, 0x0
    rlwinm r7, r8, 0, 29, 29
    cmplwi r7, 0x4
    beq lbl_fn_801BC97C_00001030
    clrlwi r7, r8, 31
    cmplwi r7, 0x1
    beq lbl_fn_801BC97C_00001030
    li r5, 0x1
lbl_fn_801BC97C_00001030:
    cmpwi r5, 0x0
    beq lbl_fn_801BC97C_0000104C
    lwz r5, 0x7e0(r4)
    rlwinm r5, r5, 0, 26, 26
    cmplwi r5, 0x20
    beq lbl_fn_801BC97C_0000104C
    li r0, 0x1
lbl_fn_801BC97C_0000104C:
    cmpwi r0, 0x0
    beq lbl_fn_801BC97C_00001080
    lwz r0, 0x55c(r4)
    li r5, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_801BC97C_00001074
    lwz r0, 0x560(r4)
    cmpwi r0, 0x1c
    bne lbl_fn_801BC97C_00001074
    li r5, 0x1
lbl_fn_801BC97C_00001074:
    cmpwi r5, 0x0
    bne lbl_fn_801BC97C_00001080
    li r6, 0x1
lbl_fn_801BC97C_00001080:
    cmpwi r6, 0x0
    bne lbl_fn_801BC97C_000010B0
    lwz r0, 0xd1c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801BC97C_000010B0
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_801BC97C_000010B0
    lwz r3, 0x4(r25)
    lwz r0, 0xd1c(r3)
    stw r0, 0x34(r25)
lbl_fn_801BC97C_000010B0:
    lwz r3, 0x4(r25)
    lfs f2, 0x10(r25)
    addi r3, r3, 0xf6c
    psq_l f1, 0x8(r25), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    lwz r3, 0x4(r25)
    lfs f0, 0x28(r25)
    stfs f0, 0xf78(r3)
    lwz r3, 0x4(r25)
    lwz r0, 0x34(r25)
    stw r0, 0xf7c(r3)
    lwz r3, 0x4(r25)
    lfs f0, 0x2c(r25)
    stfs f0, 0xfb8(r3)
    lwz r3, 0x4(r25)
    lbz r4, 0x45(r25)
    lwz r0, 0x12a8(r3)
    rlwimi r0, r4, 8, 23, 23
    stw r0, 0x12a8(r3)
    lwz r3, 0x4(r25)
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_801BC97C_00001120
    li r0, 0x0
    stb r0, 0x44(r25)
    li r28, 0x1
lbl_fn_801BC97C_00001120:
    cmpwi r28, 0x0
    beq lbl_fn_801BC97C_00001164
    lbz r0, 0x44(r25)
    cmpwi r0, 0x0
    beq lbl_fn_801BC97C_00001164
    lwz r4, 0x4(r25)
    lwz r3, 0x638(r4)
    lwz r0, 0xac(r3)
    rlwinm r3, r0, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_801BC97C_00001164
    lwz r3, lbl_8087F430
    bl fn_8036DAA8
    cmpwi r3, 0x0
    bne lbl_fn_801BC97C_00001164
    li r28, 0x0
lbl_fn_801BC97C_00001164:
    psq_l f31, 0x2e8(r1), 0, 0
    mr r3, r28
    lfd f31, 0x2e0(r1)
    psq_l f30, 0x2d8(r1), 0, 0
    lfd f30, 0x2d0(r1)
    psq_l f29, 0x2c8(r1), 0, 0
    lfd f29, 0x2c0(r1)
    addi r11, r1, 0x2c0
    bl _restgpr_24
    lwz r0, 0x2f4(r1)
    mtlr r0
    addi r1, r1, 0x2f0
    blr
}

asm void fn_801BDA9C(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    lbz r0, 0x44(r4)
    stw r31, 0xec(r1)
    mr r31, r3
    cmpwi r0, 0x0
    stw r30, 0xe8(r1)
    stw r29, 0xe4(r1)
    mr r29, r4
    beq lbl_fn_801BDA9C_0000137C
    lis r5, lbl_80781708@ha
    lwzu r7, lbl_80781708@l(r5)
    lbz r9, 0x47(r4)
    li r0, 0x0
    lwz r6, 0x4(r5)
    lwz r5, 0x8(r5)
    lfs f0, 0x48(r4)
    stw r0, 0x0(r3)
    lwz r8, 0x4(r4)
    stfs f0, 0x8(r1)
    lbz r0, lbl_8087F101
    lwz r3, 0x8(r1)
    stw r3, 0xc(r1)
    extsb. r0, r0
    lfs f0, 0xc(r1)
    stw r8, 0x48(r1)
    stb r9, 0x4c(r1)
    stfs f0, 0x50(r1)
    stw r7, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r7, 0x30(r1)
    stw r6, 0x34(r1)
    stw r5, 0x38(r1)
    stw r7, 0xc8(r1)
    stw r6, 0xcc(r1)
    stw r5, 0xd0(r1)
    stw r8, 0xd4(r1)
    stb r9, 0xd8(r1)
    stfs f0, 0xdc(r1)
    bne lbl_fn_801BDA9C_00001268
    lis r6, lbl_807C7C70@ha
    lis r4, fn_801BDFB4@ha
    lis r3, fn_801BDFE8@ha
    li r0, 0x1
    addi r3, r3, fn_801BDFE8@l
    addi r5, r6, lbl_807C7C70@l
    addi r4, r4, fn_801BDFB4@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7C70@l(r6)
    stb r0, lbl_8087F101
lbl_fn_801BDA9C_00001268:
    lwz r8, 0xc8(r1)
    addi r3, r1, 0x98
    lwz r7, 0xcc(r1)
    lwz r6, 0xd0(r1)
    lwz r5, 0xd4(r1)
    lwz r4, 0xd8(r1)
    lwz r0, 0xdc(r1)
    stw r8, 0x98(r1)
    stw r7, 0x9c(r1)
    stw r6, 0xa0(r1)
    stw r5, 0xa4(r1)
    stw r4, 0xa8(r1)
    stw r0, 0xac(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801BDA9C_00001354
    lwz r8, 0x98(r1)
    li r3, 0x18
    lwz r7, 0x9c(r1)
    lwz r6, 0xa0(r1)
    lwz r5, 0xa4(r1)
    lwz r4, 0xa8(r1)
    lwz r0, 0xac(r1)
    stw r8, 0x80(r1)
    stw r7, 0x84(r1)
    stw r6, 0x88(r1)
    stw r5, 0x8c(r1)
    stw r4, 0x90(r1)
    stw r0, 0x94(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801BDA9C_00001310
    lis r3, __files@ha
    lis r4, lbl_807818B8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807818B8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801BDA9C_00001310:
    cmpwi r30, 0x0
    beq lbl_fn_801BDA9C_00001348
    lwz r0, 0x80(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x84(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x88(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x8c(r1)
    stw r0, 0xc(r30)
    lbz r0, 0x90(r1)
    stb r0, 0x10(r30)
    lfs f0, 0x94(r1)
    stfs f0, 0x14(r30)
lbl_fn_801BDA9C_00001348:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801BDA9C_00001358
lbl_fn_801BDA9C_00001354:
    li r0, 0x0
lbl_fn_801BDA9C_00001358:
    cmpwi r0, 0x0
    beq lbl_fn_801BDA9C_00001370
    lis r3, lbl_807C7C70@ha
    addi r3, r3, lbl_807C7C70@l
    stw r3, 0x0(r31)
    b lbl_fn_801BDA9C_00001548
lbl_fn_801BDA9C_00001370:
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_801BDA9C_00001548
lbl_fn_801BDA9C_0000137C:
    lis r5, lbl_8073B5D0@ha
    li r3, 0x34
    addi r5, r5, lbl_8073B5D0@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801BDA9C_000013CC
    lis r5, lbl_807C7030@ha
    lwz r4, 0x4(r29)
    addi r5, r5, lbl_807C7030@l
    bl fn_801B2EDC
    lis r3, lbl_80781740@ha
    li r0, 0x1f
    addi r3, r3, lbl_80781740@l
    stw r3, 0x0(r30)
    lwz r3, 0x4(r30)
    stw r0, 0x560(r3)
lbl_fn_801BDA9C_000013CC:
    lis r3, lbl_80781714@ha
    lwzu r5, lbl_80781714@l(r3)
    lwz r6, 0x4(r29)
    li r0, 0x0
    lwz r4, 0x4(r3)
    lwz r3, 0x8(r3)
    stw r6, 0x10(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F100
    stw r30, 0x14(r1)
    extsb. r0, r0
    stw r5, 0x24(r1)
    stw r4, 0x28(r1)
    stw r3, 0x2c(r1)
    stw r5, 0x18(r1)
    stw r4, 0x1c(r1)
    stw r3, 0x20(r1)
    stw r5, 0xb0(r1)
    stw r4, 0xb4(r1)
    stw r3, 0xb8(r1)
    stw r6, 0xbc(r1)
    stw r30, 0xc0(r1)
    bne lbl_fn_801BDA9C_00001450
    lis r6, lbl_807C7C68@ha
    lis r4, fn_801BDE68@ha
    lis r3, fn_801BDE98@ha
    li r0, 0x1
    addi r3, r3, fn_801BDE98@l
    addi r5, r6, lbl_807C7C68@l
    addi r4, r4, fn_801BDE68@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7C68@l(r6)
    stb r0, lbl_8087F100
lbl_fn_801BDA9C_00001450:
    lwz r7, 0xb0(r1)
    addi r3, r1, 0x68
    lwz r6, 0xb4(r1)
    lwz r5, 0xb8(r1)
    lwz r4, 0xbc(r1)
    lwz r0, 0xc0(r1)
    stw r7, 0x68(r1)
    stw r6, 0x6c(r1)
    stw r5, 0x70(r1)
    stw r4, 0x74(r1)
    stw r0, 0x78(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801BDA9C_00001524
    lwz r7, 0x68(r1)
    li r3, 0x14
    lwz r6, 0x6c(r1)
    lwz r5, 0x70(r1)
    lwz r4, 0x74(r1)
    lwz r0, 0x78(r1)
    stw r7, 0x54(r1)
    stw r6, 0x58(r1)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r0, 0x64(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801BDA9C_000014E8
    lis r3, __files@ha
    lis r4, lbl_807818D4@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807818D4@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801BDA9C_000014E8:
    cmpwi r30, 0x0
    beq lbl_fn_801BDA9C_00001518
    lwz r0, 0x54(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x58(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x5c(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x60(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x64(r1)
    stw r0, 0x10(r30)
lbl_fn_801BDA9C_00001518:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801BDA9C_00001528
lbl_fn_801BDA9C_00001524:
    li r0, 0x0
lbl_fn_801BDA9C_00001528:
    cmpwi r0, 0x0
    beq lbl_fn_801BDA9C_00001540
    lis r3, lbl_807C7C68@ha
    addi r3, r3, lbl_807C7C68@l
    stw r3, 0x0(r31)
    b lbl_fn_801BDA9C_00001548
lbl_fn_801BDA9C_00001540:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_801BDA9C_00001548:
    lwz r0, 0xf4(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_801BDE68(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    lwz r4, 0x10(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801BDE98(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_801BDE98_000015CC
    lis r3, lbl_80781730@ha
    addi r3, r3, lbl_80781730@l
    stw r3, 0x0(r4)
    b lbl_fn_801BDE98_00001694
lbl_fn_801BDE98_000015CC:
    cmpwi r5, 0x0
    bne lbl_fn_801BDE98_00001644
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801BDE98_0000160C
    lis r3, __files@ha
    lis r4, lbl_807818D4@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807818D4@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801BDE98_0000160C:
    cmpwi r30, 0x0
    beq lbl_fn_801BDE98_0000163C
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lwz r0, 0x10(r31)
    stw r0, 0x10(r30)
lbl_fn_801BDE98_0000163C:
    stw r30, 0x0(r29)
    b lbl_fn_801BDE98_00001694
lbl_fn_801BDE98_00001644:
    cmpwi r5, 0x1
    bne lbl_fn_801BDE98_00001660
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_801BDE98_00001694
lbl_fn_801BDE98_00001660:
    lwz r5, 0x0(r4)
    lis r3, lbl_80781730@ha
    lwz r4, lbl_80781730@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_801BDE98_0000168C
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_801BDE98_00001694
lbl_fn_801BDE98_0000168C:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801BDE98_00001694:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801BDFB4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lfs f1, 0x14(r12)
    lwz r3, 0xc(r12)
    lbz r4, 0x10(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801BDFE8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_801BDFE8_0000171C
    lis r3, lbl_80781738@ha
    addi r3, r3, lbl_80781738@l
    stw r3, 0x0(r4)
    b lbl_fn_801BDFE8_000017EC
lbl_fn_801BDFE8_0000171C:
    cmpwi r5, 0x0
    bne lbl_fn_801BDFE8_0000179C
    lwz r31, 0x0(r3)
    li r3, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801BDFE8_0000175C
    lis r3, __files@ha
    lis r4, lbl_807818B8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807818B8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801BDFE8_0000175C:
    cmpwi r30, 0x0
    beq lbl_fn_801BDFE8_00001794
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lbz r0, 0x10(r31)
    stb r0, 0x10(r30)
    lfs f0, 0x14(r31)
    stfs f0, 0x14(r30)
lbl_fn_801BDFE8_00001794:
    stw r30, 0x0(r29)
    b lbl_fn_801BDFE8_000017EC
lbl_fn_801BDFE8_0000179C:
    cmpwi r5, 0x1
    bne lbl_fn_801BDFE8_000017B8
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_801BDFE8_000017EC
lbl_fn_801BDFE8_000017B8:
    lwz r5, 0x0(r4)
    lis r3, lbl_80781738@ha
    lwz r4, lbl_80781738@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_801BDFE8_000017E4
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_801BDFE8_000017EC
lbl_fn_801BDFE8_000017E4:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801BDFE8_000017EC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801BE10C(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    lis r9, lbl_807817C0@ha
    lfs f0, lbl_808825E4
    stw r0, 0x144(r1)
    neg r0, r7
    or r0, r0, r7
    li r8, 0x0
    stw r31, 0x13c(r1)
    srwi r7, r0, 31
    addi r9, r9, lbl_807817C0@l
    li r0, 0x1e
    stw r30, 0x138(r1)
    cmpwi r5, 0x0
    stw r29, 0x134(r1)
    mr r29, r3
    stw r28, 0x130(r1)
    stw r4, 0x4(r3)
    stw r9, 0x0(r3)
    stfs f0, 0x18(r3)
    stb r8, 0x1c(r3)
    stb r8, 0x1d(r3)
    stb r7, 0x1e(r3)
    stb r8, 0x1f(r3)
    stfs f1, 0x20(r3)
    stw r0, 0x560(r4)
    lwz r4, 0x4(r3)
    lwz r31, 0x638(r4)
    addi r30, r4, 0xb0
    stw r5, 0x14(r3)
    beq lbl_fn_801BE10C_00001938
    lwz r9, 0x38(r5)
    li r7, 0x0
    li r0, 0x0
    li r4, 0x0
    rlwinm r8, r9, 0, 29, 29
    cmplwi r8, 0x4
    beq lbl_fn_801BE10C_000018B0
    clrlwi r8, r9, 31
    cmplwi r8, 0x1
    beq lbl_fn_801BE10C_000018B0
    li r4, 0x1
lbl_fn_801BE10C_000018B0:
    cmpwi r4, 0x0
    beq lbl_fn_801BE10C_000018CC
    lwz r4, 0x7e0(r5)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_801BE10C_000018CC
    li r0, 0x1
lbl_fn_801BE10C_000018CC:
    cmpwi r0, 0x0
    beq lbl_fn_801BE10C_00001900
    lwz r0, 0x55c(r5)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_801BE10C_000018F4
    lwz r0, 0x560(r5)
    cmpwi r0, 0x1c
    bne lbl_fn_801BE10C_000018F4
    li r4, 0x1
lbl_fn_801BE10C_000018F4:
    cmpwi r4, 0x0
    bne lbl_fn_801BE10C_00001900
    li r7, 0x1
lbl_fn_801BE10C_00001900:
    cmpwi r7, 0x0
    bne lbl_fn_801BE10C_00001938
    lwz r4, 0x4(r3)
    lwz r4, 0xd1c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_801BE10C_00001938
    cmpwi r31, 0x0
    beq lbl_fn_801BE10C_00001938
    lwz r0, 0x4(r31)
    cmpwi r0, 0x179a
    beq lbl_fn_801BE10C_00001934
    cmpwi r0, 0x179c
    bne lbl_fn_801BE10C_00001938
lbl_fn_801BE10C_00001934:
    stw r4, 0x14(r3)
lbl_fn_801BE10C_00001938:
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801BE10C_0000194C
    lwz r0, 0x4(r3)
    stw r0, 0x14(r3)
lbl_fn_801BE10C_0000194C:
    psq_l f1, 0x0(r6), 0, 0
    li r0, 0x1
    lfs f2, 0x8(r6)
    cmpwi r31, 0x0
    psq_st f1, 0x8(r3), 0, 0
    lfs f0, lbl_808825E8
    stfs f2, 0x10(r3)
    stw r0, 0x34c(r30)
    stfs f0, 0x24c(r30)
    beq lbl_fn_801BE10C_00001B9C
    lwz r5, 0xac(r31)
    rlwinm r4, r5, 0, 13, 13
    subis r0, r4, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_801BE10C_00001B0C
    lwz r3, 0x4(r3)
    lwz r3, 0x50(r3)
    bl fn_80219558
    subi r0, r3, 0x9
    cmplwi r0, 0x1
    ble lbl_fn_801BE10C_00001A54
    cmpwi r3, 0x4
    beq lbl_fn_801BE10C_000019C4
    cmpwi r3, 0x6
    beq lbl_fn_801BE10C_000019C4
    cmpwi r3, 0x1
    beq lbl_fn_801BE10C_00001A54
    cmpwi r3, 0x5
    beq lbl_fn_801BE10C_00001A54
    b lbl_fn_801BE10C_00001AE4
lbl_fn_801BE10C_000019C4:
    lfs f1, lbl_808825E4
    mr r3, r30
    lfs f2, lbl_808825EC
    li r4, 0x0
    li r5, 0x17a
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80882640
    stfs f0, 0x238(r30)
    lwz r3, lbl_8087F048
    lwz r4, 0x4(r29)
    bl fn_80105B3C
    li r0, 0x1
    stb r0, 0x1f(r29)
    lwz r0, 0xb0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801BE10C_00001BC0
    lfs f1, lbl_808825E8
    lis r8, lbl_807C7030@ha
    stfs f1, 0x20(r1)
    addi r8, r8, lbl_807C7030@l
    lwz r3, lbl_8087F048
    mr r9, r8
    stfs f1, 0x24(r1)
    addi r10, r1, 0x20
    li r5, 0x0
    li r6, 0x0
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    lwz r7, 0x4(r29)
    lwz r4, 0xb0(r31)
    addi r7, r7, 0xb0
    bl fn_801070C8
    b lbl_fn_801BE10C_00001BC0
lbl_fn_801BE10C_00001A54:
    lfs f1, lbl_808825E4
    mr r3, r30
    lfs f2, lbl_808825EC
    li r4, 0x0
    li r5, 0x17b
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_801BE10C_00001A8C
    lwz r4, 0x4(r29)
    bl fn_80105B3C
lbl_fn_801BE10C_00001A8C:
    li r0, 0x1
    stb r0, 0x1f(r29)
    lwz r0, 0xb0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801BE10C_00001BC0
    lfs f1, lbl_808825E8
    lis r8, lbl_807C7030@ha
    stfs f1, 0x10(r1)
    addi r8, r8, lbl_807C7030@l
    lwz r3, lbl_8087F048
    mr r9, r8
    stfs f1, 0x14(r1)
    addi r10, r1, 0x10
    li r5, 0x0
    li r6, 0x0
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    lwz r7, 0x4(r29)
    lwz r4, 0xb0(r31)
    addi r7, r7, 0xb0
    bl fn_801070C8
    b lbl_fn_801BE10C_00001BC0
lbl_fn_801BE10C_00001AE4:
    lfs f1, lbl_808825E4
    mr r3, r30
    lfs f2, lbl_808825EC
    li r4, 0x0
    li r5, 0x6b
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801BE10C_00001BC0
lbl_fn_801BE10C_00001B0C:
    rlwinm r0, r5, 0, 26, 26
    cmpwi r0, 0x20
    bne lbl_fn_801BE10C_00001B40
    lfs f1, lbl_808825E4
    mr r3, r30
    lfs f2, lbl_808825EC
    li r4, 0x0
    li r5, 0x6b
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801BE10C_00001BC0
lbl_fn_801BE10C_00001B40:
    lwz r0, 0xc0(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_801BE10C_00001B74
    lfs f1, lbl_808825E4
    mr r3, r30
    lfs f2, lbl_808825EC
    li r4, 0x0
    li r5, 0x6a
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801BE10C_00001BC0
lbl_fn_801BE10C_00001B74:
    lfs f1, lbl_808825E4
    mr r3, r30
    lfs f2, lbl_808825EC
    li r4, 0x0
    li r5, 0x67
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801BE10C_00001BC0
lbl_fn_801BE10C_00001B9C:
    lfs f1, lbl_808825E4
    mr r3, r30
    lfs f2, lbl_808825EC
    li r4, 0x0
    li r5, 0x67
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_801BE10C_00001BC0:
    lfs f0, lbl_808825E8
    stfs f0, 0x238(r30)
    lwz r3, 0x4(r29)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801BE10C_00001BE0
    cmpwi r0, 0x3
    bne lbl_fn_801BE10C_00001BF8
lbl_fn_801BE10C_00001BE0:
    lbz r0, 0x1f(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801BE10C_00001BF8
    lwz r3, lbl_8087F0A8
    lfs f0, 0x2bc(r3)
    stfs f0, 0x234(r30)
lbl_fn_801BE10C_00001BF8:
    lwz r3, lbl_8087F490
    li r4, 0x2
    lwz r5, 0x4(r29)
    bl fn_803E2110
    lbz r0, 0x1f(r29)
    cmpwi r0, 0x0
    beq lbl_fn_801BE10C_00001CE4
    cmpwi r31, 0x0
    li r28, 0x24
    beq lbl_fn_801BE10C_00001C38
    lwz r0, 0x4(r31)
    cmpwi r0, 0x179a
    beq lbl_fn_801BE10C_00001C34
    cmpwi r0, 0x6c2
    bne lbl_fn_801BE10C_00001C38
lbl_fn_801BE10C_00001C34:
    li r28, 0x25
lbl_fn_801BE10C_00001C38:
    lwz r3, 0x4(r29)
    lwz r3, 0x7c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_801BE10C_00001CBC
    mr r4, r28
    bl fn_8021FD7C
    cmpwi r3, 0x0
    beq lbl_fn_801BE10C_00001CBC
    lwz r3, 0x4(r29)
    mr r4, r28
    lwz r3, 0x7c(r3)
    bl fn_8021FD7C
    lis r4, lbl_8073B5D0@ha
    mr r5, r3
    addi r4, r4, lbl_8073B5D0@l
    addi r3, r1, 0x30
    addi r4, r4, 0x1
    crclr 6
    bl sprintf
    addi r3, r1, 0x30
    li r30, 0x0
    bl strlen
    addi r4, r1, 0x2f
    lfs f1, lbl_808825E8
    stbx r30, r4, r3
    addi r3, r1, 0x8
    addi r4, r1, 0x30
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_801BE10C_00001CBC:
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_801BE10C_00001D08
    lwz r4, 0x4(r29)
    mr r5, r28
    lfs f1, lbl_808825E8
    li r6, 0x0
    lfs f2, lbl_80882608
    bl fn_803EA77C
    b lbl_fn_801BE10C_00001D08
lbl_fn_801BE10C_00001CE4:
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_801BE10C_00001D08
    lwz r4, 0x4(r29)
    li r5, 0x19
    lfs f1, lbl_808825E8
    li r6, 0x0
    lfs f2, lbl_80882608
    bl fn_803EA77C
lbl_fn_801BE10C_00001D08:
    lwz r31, 0x13c(r1)
    mr r3, r29
    lwz r30, 0x138(r1)
    lwz r29, 0x134(r1)
    lwz r28, 0x130(r1)
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}
