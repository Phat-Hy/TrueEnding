#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_24(void);
extern void _savegpr_24(void);
extern void fn_8000D124(void);
extern void fn_8000D3A4(void);
extern void fn_8001047C(void);
extern void fn_80011034(void);
extern void fn_80013338(void);
extern void fn_800133B0(void);
extern void fn_80063D3C(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800E0AA8(void);
extern void fn_800E0AB0(void);
extern void fn_800F7FF0(void);
extern void fn_800F8524(void);
extern void fn_800F8548(void);
extern void fn_801162A0(void);
extern void fn_80121F00(void);
extern void fn_8013C38C(void);
extern void fn_8016E970(void);
extern void fn_80179D44(void);
extern void fn_80239DAC(void);
extern void fn_8028F560(void);
extern void fn_8028F8E4(void);
extern void fn_8028F998(void);
extern void fn_8028FA60(void);
extern void fn_8028FB30(void);
extern void fn_8028FC28(void);
extern void fn_8028FDB0(void);
extern void fn_80290088(void);
extern void fn_8029055C(void);
extern void fn_80291390(void);
extern void fn_8029207C(void);
extern void fn_802921F8(void);
extern void fn_80292C9C(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_803C1560(void);
extern void fn_803CD958(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_807452F0[];
extern u8 lbl_807452F8[];
extern u8 lbl_80745314[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80883A98;
extern u32 lbl_80883AA0;
extern u32 lbl_80883AA4;
extern u32 lbl_80883AA8;
extern u32 lbl_80883AB0;
extern u32 lbl_80883AB4;
extern u32 lbl_80883AB8;
extern u32 lbl_80883ABC;
extern u32 lbl_80883AC0;
extern u32 lbl_80883AC4;
extern u32 lbl_80883AC8;
extern u32 lbl_80883ACC;
extern u32 lbl_80883AD8;
extern u32 lbl_80883AE0;
extern u32 lbl_80883B04;
extern u32 lbl_80883B08;
extern u32 lbl_80883B18;
extern u32 lbl_80883B20;
extern u32 lbl_80883B24;
extern u32 lbl_80883B28;
extern u32 lbl_80883B2C;
extern u32 lbl_80883B30;
extern u32 lbl_80883B34;

/* Function declarations */
void fn_8028A97C(void);
void fn_8028AA38(void);
void fn_8028AC70(void);
void fn_8028ADF4(void);
void fn_8028AFD8(void);
void fn_8028B47C(void);
void fn_8028B74C(void);
void fn_8028B75C(void);
void fn_8028BFE0(void);

asm void fn_8028A97C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    bne lbl_fn_8028A97C_00000048
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_8028A97C_000000A4
lbl_fn_8028A97C_00000048:
    lis r4, lbl_80745314@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80745314@l
    li r5, 0x0
    addi r4, r4, 0x2fc
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8028A97C_00000070
    li r4, 0x0
    b lbl_fn_8028A97C_0000007C
lbl_fn_8028A97C_00000070:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_8028A97C_0000007C:
    lfs f0, 0x1c(r4)
    addi r3, r1, 0x8
    lfs f3, 0xc(r4)
    lfs f2, 0x2c(r4)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x8(r30)
lbl_fn_8028A97C_000000A4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8028AA38(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    lfs f0, lbl_80883AA8
    addi r5, r4, 0xc
    stw r0, 0xf4(r1)
    addi r6, r4, 0x18
    fcmpo cr0, f1, f0
    addi r7, r4, 0x24
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stfd f30, 0xd0(r1)
    psq_st f30, 0xd8(r1), 0, 0
    stfd f29, 0xc0(r1)
    psq_st f29, 0xc8(r1), 0, 0
    fmr f29, f1
    stw r31, 0xbc(r1)
    mr r31, r4
    stw r30, 0xb8(r1)
    mr r30, r3
    addi r3, r1, 0xac
    bge lbl_fn_8028AA38_00000114
    b lbl_fn_8028AA38_00000118
lbl_fn_8028AA38_00000114:
    fmr f1, f0
lbl_fn_8028AA38_00000118:
    bl fn_8028AC70
    addi r3, r1, 0xa0
    addi r4, r1, 0xac
    addi r5, r30, 0x528
    bl fn_80013338
    addi r3, r1, 0xa0
    bl fn_800F7FF0
    addi r3, r1, 0x94
    addi r4, r1, 0xa0
    bl fn_80011034
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x7
    bne lbl_fn_8028AA38_00000170
    addi r3, r1, 0x64
    addi r4, r1, 0xac
    addi r5, r30, 0x528
    bl fn_80013338
    addi r3, r1, 0x64
    bl fn_8000D3A4
    lfs f0, 0x1514(r30)
    fadds f0, f0, f1
    stfs f0, 0x1514(r30)
lbl_fn_8028AA38_00000170:
    addi r3, r30, 0x528
    addi r4, r1, 0xac
    bl fn_8000D124
    mr r5, r31
    addi r3, r1, 0x88
    addi r4, r31, 0xc
    bl fn_80013338
    addi r3, r1, 0x7c
    addi r4, r31, 0x18
    addi r5, r31, 0xc
    bl fn_80013338
    addi r3, r1, 0x70
    addi r4, r31, 0x24
    addi r5, r31, 0x18
    bl fn_80013338
    addi r3, r1, 0x88
    bl fn_801162A0
    lfs f0, lbl_80883B18
    fcmpo cr0, f1, f0
    bge lbl_fn_8028AA38_000001CC
    addi r3, r1, 0x88
    addi r4, r1, 0x7c
    bl fn_8000D124
lbl_fn_8028AA38_000001CC:
    addi r3, r1, 0x70
    bl fn_801162A0
    lfs f0, lbl_80883B18
    fcmpo cr0, f1, f0
    bge lbl_fn_8028AA38_000001EC
    addi r3, r1, 0x70
    addi r4, r1, 0x7c
    bl fn_8000D124
lbl_fn_8028AA38_000001EC:
    addi r3, r1, 0x88
    bl fn_800F7FF0
    addi r3, r1, 0x7c
    bl fn_800F7FF0
    addi r3, r1, 0x70
    bl fn_800F7FF0
    addi r3, r1, 0x58
    addi r4, r1, 0x88
    bl fn_80011034
    lfs f31, 0x5c(r1)
    addi r3, r1, 0x4c
    addi r4, r1, 0x7c
    bl fn_80011034
    lfs f30, 0x50(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x70
    bl fn_80011034
    fsubs f1, f30, f31
    lfs f31, 0x44(r1)
    bl fn_800133B0
    stfs f1, 0xc(r1)
    fsubs f1, f31, f30
    bl fn_800133B0
    stfs f1, 0x8(r1)
    fmr f1, f29
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800F8524
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x7
    bne lbl_fn_8028AA38_0000029C
    addi r3, r1, 0x28
    addi r4, r30, 0x1978
    addi r5, r30, 0x528
    bl fn_80013338
    addi r3, r1, 0x34
    addi r4, r1, 0x28
    bl fn_80011034
    lfs f1, 0x38(r1)
    bl fn_800133B0
    lfs f0, lbl_80883AB4
    fsubs f0, f1, f0
    stfs f0, 0x538(r30)
    b lbl_fn_8028AA38_000002C4
lbl_fn_8028AA38_0000029C:
    addi r3, r1, 0x10
    addi r4, r30, 0x1978
    addi r5, r30, 0x528
    bl fn_80013338
    addi r3, r1, 0x1c
    addi r4, r1, 0x10
    bl fn_80011034
    lfs f1, 0x20(r1)
    bl fn_800133B0
    stfs f1, 0x538(r30)
lbl_fn_8028AA38_000002C4:
    lwz r0, 0xf4(r1)
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    psq_l f30, 0xd8(r1), 0, 0
    lfd f30, 0xd0(r1)
    psq_l f29, 0xc8(r1), 0, 0
    lfd f29, 0xc0(r1)
    lwz r31, 0xbc(r1)
    lwz r30, 0xb8(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_8028AC70(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stfd f30, 0x80(r1)
    psq_st f30, 0x88(r1), 0, 0
    stfd f29, 0x70(r1)
    psq_st f29, 0x78(r1), 0, 0
    stfd f28, 0x60(r1)
    psq_st f28, 0x68(r1), 0, 0
    fmuls f0, f1, f1
    lfs f3, lbl_80883B04
    lfs f7, lbl_80883B24
    lfs f4, lbl_80883AA4
    fmuls f2, f0, f1
    lfs f10, lbl_80883AD8
    fmuls f5, f3, f0
    lfs f6, lbl_80883B20
    fmuls f12, f7, f0
    lfs f9, 0x8(r5)
    fneg f3, f2
    lfs f8, 0x4(r5)
    fmsubs f11, f4, f2, f5
    lfs f7, 0x0(r5)
    fmadds f12, f6, f2, f12
    lfs f5, 0x8(r4)
    fmadds f6, f10, f0, f3
    lfs f4, 0x4(r4)
    fadds f10, f10, f11
    lfs f3, 0x0(r4)
    fadds f13, f1, f12
    lfs f12, 0x8(r6)
    fsubs f1, f6, f1
    lfs f11, 0x4(r6)
    fmuls f29, f9, f10
    lfs f6, 0x0(r6)
    fmuls f30, f8, f10
    lfs f8, 0x8(r7)
    fmuls f31, f5, f1
    lfs f5, 0x4(r7)
    fmuls f9, f4, f1
    lfs f4, 0x0(r7)
    fmuls f7, f7, f10
    stfs f30, 0x24(r1)
    fmuls f1, f3, f1
    stfs f7, 0x20(r1)
    fsubs f2, f2, f0
    lfs f0, lbl_80883AE0
    fmuls f28, f12, f13
    stfs f29, 0x28(r1)
    fmuls f12, f11, f13
    stfs f28, 0x1c(r1)
    fmuls f11, f6, f13
    fmuls f13, f8, f2
    stfs f12, 0x18(r1)
    fadds f3, f31, f29
    fadds f6, f1, f7
    stfs f11, 0x14(r1)
    fadds f10, f9, f30
    fmuls f8, f5, f2
    stfs f13, 0x10(r1)
    fmuls f4, f4, f2
    fadds f7, f3, f28
    stfs f8, 0xc(r1)
    fadds f5, f10, f12
    fadds f2, f6, f11
    stfs f4, 0x8(r1)
    fadds f12, f7, f13
    fadds f8, f5, f8
    stfs f1, 0x2c(r1)
    fadds f4, f2, f4
    fmuls f11, f12, f0
    stfs f9, 0x30(r1)
    fmuls f13, f8, f0
    fmuls f0, f4, f0
    stfs f11, 0x8(r3)
    stfs f0, 0x0(r3)
    stfs f13, 0x4(r3)
    stfs f31, 0x34(r1)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    psq_l f29, 0x78(r1), 0, 0
    lfd f29, 0x70(r1)
    psq_l f28, 0x68(r1), 0, 0
    stfs f6, 0x38(r1)
    lfd f28, 0x60(r1)
    stfs f10, 0x3c(r1)
    stfs f3, 0x40(r1)
    stfs f2, 0x44(r1)
    stfs f5, 0x48(r1)
    stfs f7, 0x4c(r1)
    stfs f4, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f12, 0x58(r1)
    addi r1, r1, 0xa0
    blr
}

asm void fn_8028ADF4(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_24
    lwz r0, 0x58c(r3)
    mr r31, r3
    lwz r5, 0x14b0(r3)
    cmpwi r0, 0xb
    lwz r6, 0x1640(r3)
    bne lbl_fn_8028ADF4_000004DC
    lwz r4, lbl_8087F8A0
    lwz r4, 0x48(r4)
    lwz r0, 0x12a4(r4)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_8028ADF4_000004C4
    li r0, 0x3
    stw r0, 0x1640(r3)
    b lbl_fn_8028ADF4_000004CC
lbl_fn_8028ADF4_000004C4:
    li r0, 0x2
    stw r0, 0x1640(r3)
lbl_fn_8028ADF4_000004CC:
    lwz r4, lbl_8087F8A0
    lwz r0, 0x48(r4)
    stw r0, 0x14b0(r3)
    b lbl_fn_8028ADF4_00000524
lbl_fn_8028ADF4_000004DC:
    cmpwi r0, 0xc
    bne lbl_fn_8028ADF4_000004F8
    lwz r0, 0x1630(r3)
    li r4, 0x1
    stw r4, 0x1640(r3)
    stw r0, 0x14b0(r3)
    b lbl_fn_8028ADF4_00000524
lbl_fn_8028ADF4_000004F8:
    li r0, 0x0
    stw r0, 0x1640(r3)
    lwz r4, lbl_8087F8A0
    lwz r4, 0x48(r4)
    lwz r0, 0x12a4(r4)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_8028ADF4_0000051C
    stw r4, 0x14b0(r3)
    b lbl_fn_8028ADF4_00000524
lbl_fn_8028ADF4_0000051C:
    lwz r0, 0xd1c(r3)
    stw r0, 0x14b0(r3)
lbl_fn_8028ADF4_00000524:
    lwz r0, 0x14b0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8028ADF4_0000053C
    lwz r4, lbl_8087F8A0
    lwz r0, 0x48(r4)
    stw r0, 0x14b0(r3)
lbl_fn_8028ADF4_0000053C:
    lwz r0, 0x1640(r3)
    cmpw r0, r6
    bne lbl_fn_8028ADF4_00000554
    lwz r0, 0x14b0(r3)
    cmplw r0, r5
    beq lbl_fn_8028ADF4_0000063C
lbl_fn_8028ADF4_00000554:
    lwz r3, lbl_8087F3C0
    addi r4, r31, 0x1674
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    li r24, 0x0
    lis r26, lbl_807C7030@ha
    mr r29, r24
    addi r28, r1, 0x38
    addi r27, r1, 0x8
    addi r26, r26, lbl_807C7030@l
    li r30, 0x0
lbl_fn_8028ADF4_00000584:
    add r4, r31, r30
    addi r3, r1, 0x38
    addi r25, r4, 0x1674
    li r5, 0x30
    li r4, 0x0
    bl memset
    psq_l f2, 0x8(r28), 0, 0
    addi r3, r1, 0x8
    psq_l f3, 0x10(r28), 0, 0
    li r4, 0x0
    psq_l f4, 0x18(r28), 0, 0
    li r5, 0x30
    psq_l f5, 0x20(r28), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0xc(r25), 0, 0
    psq_st f2, 0x14(r25), 0, 0
    psq_st f3, 0x1c(r25), 0, 0
    psq_st f4, 0x24(r25), 0, 0
    psq_st f5, 0x2c(r25), 0, 0
    psq_st f6, 0x34(r25), 0, 0
    bl memset
    psq_l f2, 0x8(r27), 0, 0
    addi r24, r24, 0x1
    psq_l f3, 0x10(r27), 0, 0
    cmpwi r24, 0x6
    psq_l f4, 0x18(r27), 0, 0
    addi r30, r30, 0x74
    psq_l f5, 0x20(r27), 0, 0
    psq_l f6, 0x28(r27), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x3c(r25), 0, 0
    psq_st f2, 0x44(r25), 0, 0
    psq_st f3, 0x4c(r25), 0, 0
    psq_st f4, 0x54(r25), 0, 0
    psq_st f5, 0x5c(r25), 0, 0
    psq_st f6, 0x64(r25), 0, 0
    stw r29, 0x70(r25)
    lfs f2, 0x8(r26)
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x8(r25)
    stw r29, 0x6c(r25)
    blt lbl_fn_8028ADF4_00000584
    mr r3, r31
    bl fn_8029207C
lbl_fn_8028ADF4_0000063C:
    mr r3, r31
    bl fn_802921F8
    addi r11, r1, 0x90
    bl _restgpr_24
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8028AFD8(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x80
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    bl _savegpr_24
    lwz r0, 0x58c(r3)
    mr r28, r3
    mr r29, r4
    li r30, 0x0
    cmpwi r0, 0x7
    bne lbl_fn_8028AFD8_000006A0
    lfs f3, lbl_80883AA8
    lfs f0, 0x1994(r3)
    fdivs f31, f3, f0
    b lbl_fn_8028AFD8_000006AC
lbl_fn_8028AFD8_000006A0:
    lfs f3, lbl_80883AA8
    lfs f0, 0x1998(r3)
    fdivs f31, f3, f0
lbl_fn_8028AFD8_000006AC:
    cmpwi r0, 0x7
    bne lbl_fn_8028AFD8_000007CC
    lwz r4, lbl_8087F430
    mr r3, r28
    lwz r24, 0x10d8(r4)
    bl fn_80179D44
    lwz r4, 0x152c(r28)
    mr r5, r3
    lfs f1, lbl_80883AC0
    mr r3, r24
    addi r4, r4, 0x4
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    bl fn_803C1560
    lwz r4, lbl_8087F430
    mr r25, r3
    mr r3, r28
    lwz r24, 0x10d8(r4)
    bl fn_80179D44
    lwz r4, 0x1530(r28)
    mr r5, r3
    lfs f1, lbl_80883AC0
    mr r3, r24
    addi r4, r4, 0x4
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    bl fn_803C1560
    lwz r5, lbl_8087F430
    mr r24, r3
    lwz r31, 0x1504(r28)
    subi r4, r24, 0x1
    lwz r3, 0x10d8(r5)
    subi r0, r31, 0x1
    lwz r26, 0x1508(r28)
    lwz r3, 0xa4(r3)
    slwi r0, r0, 3
    add r3, r3, r0
    bl fn_803CD958
    clrlwi. r27, r3, 16
    bne lbl_fn_8028AFD8_00000778
    lwz r3, lbl_8087F430
    subi r0, r31, 0x1
    slwi r0, r0, 3
    subi r4, r25, 0x1
    lwz r3, 0x10d8(r3)
    lwz r3, 0xa4(r3)
    add r3, r3, r0
    bl fn_803CD958
    clrlwi r27, r3, 16
lbl_fn_8028AFD8_00000778:
    stw r27, 0x150c(r28)
    subi r0, r27, 0x1
    slwi r0, r0, 3
    subi r4, r24, 0x1
    lwz r3, lbl_8087F430
    lwz r3, 0x10d8(r3)
    lwz r3, 0xa4(r3)
    add r3, r3, r0
    bl fn_803CD958
    clrlwi. r3, r3, 16
    bne lbl_fn_8028AFD8_000008A8
    lwz r3, lbl_8087F430
    subi r0, r31, 0x1
    slwi r0, r0, 3
    subi r4, r25, 0x1
    lwz r3, 0x10d8(r3)
    lwz r3, 0xa4(r3)
    add r3, r3, r0
    bl fn_803CD958
    clrlwi r3, r3, 16
    b lbl_fn_8028AFD8_000008A8
lbl_fn_8028AFD8_000007CC:
    cmpwi r0, 0x8
    bne lbl_fn_8028AFD8_000008A8
    lwz r4, lbl_8087F430
    mr r3, r28
    lwz r24, 0x10d8(r4)
    bl fn_80179D44
    lwz r4, 0x152c(r28)
    mr r5, r3
    lfs f1, lbl_80883AC0
    mr r3, r24
    addi r4, r4, 0x4
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_803C1560
    lwz r4, lbl_8087F430
    mr r24, r3
    mr r3, r28
    lwz r25, 0x10d8(r4)
    bl fn_80179D44
    lwz r4, 0x1530(r28)
    mr r5, r3
    lfs f1, lbl_80883AC0
    mr r3, r25
    addi r4, r4, 0x4
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_803C1560
    lwz r5, lbl_8087F430
    mr r25, r3
    lwz r31, 0x1504(r28)
    subi r4, r25, 0x1
    lwz r3, 0x10d8(r5)
    subi r0, r31, 0x1
    lwz r26, 0x1508(r28)
    lwz r3, 0xa4(r3)
    slwi r0, r0, 3
    add r3, r3, r0
    bl fn_803CD958
    clrlwi. r27, r3, 16
    bne lbl_fn_8028AFD8_00000878
    mr r27, r24
lbl_fn_8028AFD8_00000878:
    stw r27, 0x150c(r28)
    subi r0, r27, 0x1
    slwi r0, r0, 3
    subi r4, r25, 0x1
    lwz r3, lbl_8087F430
    lwz r3, 0x10d8(r3)
    lwz r3, 0xa4(r3)
    add r3, r3, r0
    bl fn_803CD958
    clrlwi. r3, r3, 16
    bne lbl_fn_8028AFD8_000008A8
    mr r3, r24
lbl_fn_8028AFD8_000008A8:
    lwz r6, lbl_8087F430
    subi r4, r26, 0x1
    mulli r0, r4, 0x30
    addi r7, r1, 0x30
    lwz r5, 0x10d8(r6)
    subi r4, r31, 0x1
    cmpwi r29, 0x0
    lwz r5, 0x9c(r5)
    add r5, r5, r0
    lfs f2, 0xc(r5)
    mulli r0, r4, 0x30
    psq_l f1, 0x4(r5), 0, 0
    subi r4, r27, 0x1
    psq_st f1, 0x0(r7), 0, 0
    addi r7, r1, 0x3c
    stfs f2, 0x38(r1)
    lwz r5, 0x10d8(r6)
    lwz r5, 0x9c(r5)
    add r5, r5, r0
    lfs f2, 0xc(r5)
    mulli r0, r4, 0x30
    psq_l f1, 0x4(r5), 0, 0
    subi r4, r3, 0x1
    psq_st f1, 0x0(r7), 0, 0
    addi r7, r1, 0x48
    stfs f2, 0x44(r1)
    lwz r5, 0x10d8(r6)
    lwz r5, 0x9c(r5)
    add r5, r5, r0
    lfs f2, 0xc(r5)
    mulli r0, r4, 0x30
    psq_l f1, 0x4(r5), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    addi r7, r1, 0x54
    stfs f2, 0x50(r1)
    lwz r5, 0x10d8(r6)
    lwz r5, 0x9c(r5)
    add r5, r5, r0
    lfs f2, 0xc(r5)
    psq_l f1, 0x4(r5), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x5c(r1)
    beq lbl_fn_8028AFD8_000009C0
    lfs f3, 0x50(r1)
    addi r3, r1, 0x20
    lfs f0, 0x44(r1)
    lfs f5, 0x4c(r1)
    fsubs f6, f3, f0
    lfs f4, 0x40(r1)
    lfs f3, 0x48(r1)
    lfs f0, 0x3c(r1)
    fsubs f4, f5, f4
    stfs f6, 0x28(r1)
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    bl fn_805F9940
    lfs f0, 0x1510(r28)
    mr r3, r28
    addi r4, r1, 0x30
    fadds f1, f0, f31
    stfs f1, 0x1510(r28)
    bl fn_8028AA38
    lfs f3, 0x1510(r28)
    lfs f0, lbl_80883AA8
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8028AFD8_00000A4C
    li r30, 0x1
    b lbl_fn_8028AFD8_00000A4C
lbl_fn_8028AFD8_000009C0:
    lfs f4, 0x38(r1)
    lfs f0, 0x530(r28)
    lfs f3, 0x30(r1)
    fsubs f5, f4, f0
    lfs f0, 0x528(r28)
    lfs f4, 0x34(r1)
    fsubs f6, f3, f0
    lfs f3, 0x52c(r28)
    fmuls f0, f5, f5
    fsubs f3, f4, f3
    stfs f6, 0x14(r1)
    fmadds f1, f6, f6, f0
    stfs f3, 0x18(r1)
    stfs f5, 0x1c(r1)
    bl fn_8068B100
    lfs f4, 0x50(r1)
    frsp f31, f1
    lfs f0, 0x530(r28)
    lfs f3, 0x48(r1)
    fsubs f5, f4, f0
    lfs f0, 0x528(r28)
    lfs f4, 0x4c(r1)
    fsubs f6, f3, f0
    lfs f3, 0x52c(r28)
    fmuls f0, f5, f5
    fsubs f3, f4, f3
    stfs f6, 0x8(r1)
    fmadds f1, f6, f6, f0
    stfs f3, 0xc(r1)
    stfs f5, 0x10(r1)
    bl fn_8068B100
    frsp f0, f1
    fcmpo cr0, f0, f31
    bge lbl_fn_8028AFD8_00000A4C
    li r30, 0x1
lbl_fn_8028AFD8_00000A4C:
    cmpwi r30, 0x0
    beq lbl_fn_8028AFD8_00000A68
    lwz r0, 0x1504(r28)
    lfs f0, lbl_80883A98
    stw r0, 0x1508(r28)
    stw r27, 0x1504(r28)
    stfs f0, 0x1510(r28)
lbl_fn_8028AFD8_00000A68:
    lwz r0, 0x1990(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8028AFD8_00000AE0
    lwz r4, lbl_8087F430
    mr r3, r28
    lwz r5, 0x14b0(r28)
    lwz r25, 0x10d8(r4)
    addi r24, r5, 0x528
    bl fn_80179D44
    lfs f1, lbl_80883AC0
    mr r5, r3
    mr r3, r25
    mr r4, r24
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_803C1560
    lwz r5, lbl_8087F430
    subi r0, r3, 0x1
    lis r4, 0xff00
    lwz r3, lbl_8087EEB0
    lwz r6, 0x10d8(r5)
    addi r5, r4, 0xff
    mulli r0, r0, 0x30
    lfs f1, lbl_80883B08
    lwz r4, 0x9c(r6)
    lfs f2, lbl_80883B28
    add r4, r4, r0
    addi r4, r4, 0x4
    bl fn_80063D3C
lbl_fn_8028AFD8_00000AE0:
    addi r11, r1, 0x80
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    bl _restgpr_24
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8028B47C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    stw r29, 0x34(r1)
    lwz r0, 0x14b0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8028B47C_00000DB4
    mr r3, r0
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x14
    bl fn_8001047C
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    addi r5, r30, 0x528
    bl fn_80013338
    addi r3, r1, 0x8
    bl fn_8000D3A4
    lwz r0, 0x14c8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8028B47C_00000B74
    mr r3, r30
    bl fn_80292C9C
    mr r3, r30
    bl fn_8028F560
    b lbl_fn_8028B47C_00000DB4
lbl_fn_8028B47C_00000B74:
    lwz r31, 0x14c0(r30)
    cmpwi r31, 0x0
    bne lbl_fn_8028B47C_00000BDC
    mr r3, r30
    bl fn_80292C9C
    lwz r4, 0x152c(r30)
    lwz r0, 0x1530(r30)
    cmplw r4, r0
    beq lbl_fn_8028B47C_00000BA0
    cmpwi r3, 0x0
    bne lbl_fn_8028B47C_00000BAC
lbl_fn_8028B47C_00000BA0:
    li r0, 0x1
    stw r0, 0x14c0(r30)
    b lbl_fn_8028B47C_00000DB4
lbl_fn_8028B47C_00000BAC:
    mr r3, r30
    bl fn_8028F560
    lwz r0, 0x14c4(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8028B47C_00000BD0
    li r0, 0x1
    stw r0, 0x14c0(r30)
    stw r0, 0x14c4(r30)
    b lbl_fn_8028B47C_00000DB4
lbl_fn_8028B47C_00000BD0:
    li r0, 0x2
    stw r0, 0x14c0(r30)
    b lbl_fn_8028B47C_00000DB4
lbl_fn_8028B47C_00000BDC:
    cmpwi r31, 0x1
    bne lbl_fn_8028B47C_00000BF8
    mr r3, r30
    bl fn_8028FB30
    li r0, 0x0
    stw r0, 0x14c0(r30)
    b lbl_fn_8028B47C_00000DB4
lbl_fn_8028B47C_00000BF8:
    cmpwi r31, 0x3
    bne lbl_fn_8028B47C_00000C0C
    li r0, 0x0
    stw r0, 0x14c0(r30)
    b lbl_fn_8028B47C_00000DB4
lbl_fn_8028B47C_00000C0C:
    cmpwi r31, 0x4
    bne lbl_fn_8028B47C_00000C28
    mr r3, r30
    bl fn_8029055C
    li r0, 0x0
    stw r0, 0x14c0(r30)
    b lbl_fn_8028B47C_00000DB4
lbl_fn_8028B47C_00000C28:
    cmpwi r31, 0x2
    bne lbl_fn_8028B47C_00000DB4
    addi r29, r30, 0x15ec
    mr r3, r29
    bl fn_800E0AB0
    cmpwi r3, 0x0
    bne lbl_fn_8028B47C_00000DB0
    lwz r4, 0x1628(r30)
    mr r3, r29
    bl fn_8028B74C
    lwz r0, 0x0(r3)
    cmpwi r0, 0x1
    beq lbl_fn_8028B47C_00000C78
    cmpwi r0, 0x5
    beq lbl_fn_8028B47C_00000CDC
    cmpwi r0, 0x2
    beq lbl_fn_8028B47C_00000CE8
    cmpwi r0, 0x3
    beq lbl_fn_8028B47C_00000CF4
    b lbl_fn_8028B47C_00000D54
lbl_fn_8028B47C_00000C78:
    lwz r4, 0x940(r30)
    lis r0, 0x4330
    stw r0, 0x20(r1)
    lis r3, lbl_807452F8@ha
    xoris r0, r4, 0x8000
    lfd f3, lbl_807452F8@l(r3)
    stw r0, 0x24(r1)
    lfs f1, 0x7d8(r30)
    lfd f2, 0x20(r1)
    lfs f0, lbl_80883ABC
    fsubs f2, f2, f3
    fdivs f1, f1, f2
    fcmpo cr0, f1, f0
    bge lbl_fn_8028B47C_00000CBC
    mr r3, r30
    bl fn_8029055C
    b lbl_fn_8028B47C_00000D54
lbl_fn_8028B47C_00000CBC:
    lwz r4, 0x14d4(r30)
    mr r3, r30
    bl fn_80291390
    cmpwi r3, 0x0
    beq lbl_fn_8028B47C_00000D54
    mr r3, r30
    bl fn_8028F8E4
    b lbl_fn_8028B47C_00000D54
lbl_fn_8028B47C_00000CDC:
    mr r3, r30
    bl fn_8028FC28
    b lbl_fn_8028B47C_00000D54
lbl_fn_8028B47C_00000CE8:
    mr r3, r30
    bl fn_8028FA60
    b lbl_fn_8028B47C_00000D54
lbl_fn_8028B47C_00000CF4:
    lwz r4, 0x940(r30)
    lis r0, 0x4330
    stw r0, 0x20(r1)
    lis r3, lbl_807452F8@ha
    xoris r0, r4, 0x8000
    lfd f2, lbl_807452F8@l(r3)
    stw r0, 0x24(r1)
    lfs f3, 0x7d8(r30)
    lfd f1, 0x20(r1)
    lfs f0, lbl_80883AE0
    fsubs f1, f1, f2
    fdivs f1, f3, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_8028B47C_00000D38
    mr r3, r30
    bl fn_8028F998
    b lbl_fn_8028B47C_00000D54
lbl_fn_8028B47C_00000D38:
    lwz r4, 0x14d4(r30)
    mr r3, r30
    bl fn_80291390
    cmpwi r3, 0x0
    beq lbl_fn_8028B47C_00000D54
    mr r3, r30
    bl fn_8028F8E4
lbl_fn_8028B47C_00000D54:
    lwz r0, 0x14bc(r30)
    lwz r3, 0x1628(r30)
    mulli r0, r0, 0xc
    addi r3, r3, 0x1
    stw r3, 0x1628(r30)
    add r3, r30, r0
    addi r3, r3, 0x15ec
    bl fn_800E0AA8
    lwz r0, 0x1628(r30)
    cmpw r0, r3
    blt lbl_fn_8028B47C_00000D88
    li r0, 0x0
    stw r0, 0x1628(r30)
lbl_fn_8028B47C_00000D88:
    lwz r0, 0x1628(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8028B47C_00000DB0
    bl fn_80121F00
    li r4, 0x9b
    bl fn_80370A78
    cmpwi r3, 0x0
    li r31, 0x1
    bne lbl_fn_8028B47C_00000DB0
    li r31, 0x2
lbl_fn_8028B47C_00000DB0:
    stw r31, 0x14c0(r30)
lbl_fn_8028B47C_00000DB4:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8028B74C(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    slwi r0, r4, 2
    add r3, r3, r0
    blr
}

asm void fn_8028B75C(void)
{
    nofralloc
    stwu r1, -0x250(r1)
    mflr r0
    stw r0, 0x254(r1)
    stfd f31, 0x240(r1)
    psq_st f31, 0x248(r1), 0, 0
    stfd f30, 0x230(r1)
    psq_st f30, 0x238(r1), 0, 0
    stw r31, 0x22c(r1)
    mr r31, r3
    stw r30, 0x228(r1)
    mr r30, r4
    lwz r0, 0x14c8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8028B75C_0000114C
    li r30, 0x0
    stw r30, 0x14c0(r3)
    stw r30, 0x14b4(r3)
    stw r30, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883AA8
    li r7, 0x11
    lfs f1, lbl_80883A98
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f2, lbl_80883AA0
    li r4, 0x0
    stw r7, 0x58c(r31)
    li r5, 0xa
    li r6, 0x0
    li r7, 0x0
    stfs f1, 0x1510(r31)
    li r8, 0x1
    stw r30, 0x15d4(r31)
    stw r0, 0x3fc(r31)
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    mr r3, r31
    lwz r4, lbl_8087F430
    lwz r30, 0x10d8(r4)
    bl fn_80179D44
    lfs f1, lbl_80883AC0
    mr r5, r3
    mr r3, r30
    addi r4, r31, 0x528
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_803C1560
    subi r0, r3, 0x1
    lwz r3, 0x9c(r30)
    mulli r0, r0, 0x30
    lfs f3, 0x530(r31)
    lfs f4, 0x52c(r31)
    addi r4, r1, 0x74
    lfs f0, 0x528(r31)
    addi r5, r31, 0x151c
    add r6, r3, r0
    lfs f7, 0x1980(r31)
    lfs f6, 0xc(r6)
    addi r3, r1, 0x8c
    lfs f5, 0x8(r6)
    addi r30, r1, 0x80
    fsubs f2, f6, f3
    lfs f3, 0x4(r6)
    fsubs f5, f5, f4
    lfs f4, 0x1978(r31)
    fsubs f0, f3, f0
    stfs f2, 0x1524(r31)
    stfs f0, 0x74(r1)
    lfs f6, 0x197c(r31)
    stfs f5, 0x78(r1)
    lfs f0, lbl_80883AB0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f3, 0xc(r6)
    lfs f5, 0x8(r6)
    fsubs f7, f7, f3
    lfs f3, 0x4(r6)
    stfs f2, 0x7c(r1)
    fsubs f5, f6, f5
    fsubs f3, f4, f3
    fmr f2, f7
    stfs f3, 0x8c(r1)
    frsp f3, f2
    stfs f5, 0x90(r1)
    psq_l f1, 0x0(r3), 0, 0
    fabs f4, f3
    stfs f7, 0x94(r1)
    psq_st f1, 0x0(r30), 0, 0
    frsp f4, f4
    stfs f2, 0x88(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_8028B75C_00000F98
    lfs f3, 0x80(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_8028B75C_00000F8C
    lfs f0, lbl_80883AB4
    b lbl_fn_8028B75C_00000F90
lbl_fn_8028B75C_00000F8C:
    lfs f0, lbl_80883AB8
lbl_fn_8028B75C_00000F90:
    stfs f0, 0x9c(r1)
    b lbl_fn_8028B75C_00000FAC
lbl_fn_8028B75C_00000F98:
    fmr f2, f3
    lfs f1, 0x80(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x9c(r1)
lbl_fn_8028B75C_00000FAC:
    lfs f0, 0x9c(r1)
    addi r3, r1, 0x1f0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883A98
    addi r4, r1, 0xa4
    lfs f4, 0x1f8(r1)
    mr r5, r4
    lfs f5, 0x1f4(r1)
    addi r3, r1, 0x1b0
    lfs f6, 0x1f0(r1)
    lfs f7, 0x208(r1)
    lfs f8, 0x204(r1)
    lfs f9, 0x200(r1)
    lfs f10, 0x218(r1)
    lfs f11, 0x214(r1)
    lfs f12, 0x210(r1)
    lfs f13, 0x21c(r1)
    lfs f31, 0x20c(r1)
    lfs f30, 0x1fc(r1)
    lfs f0, lbl_80883AA8
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x88(r1)
    stfs f3, 0x1e0(r1)
    stfs f3, 0x1e4(r1)
    stfs f3, 0x1e8(r1)
    stfs f0, 0x1ec(r1)
    stfs f6, 0xd4(r1)
    stfs f5, 0xd8(r1)
    stfs f4, 0xdc(r1)
    stfs f6, 0x1b0(r1)
    stfs f5, 0x1b4(r1)
    stfs f4, 0x1b8(r1)
    stfs f9, 0xc8(r1)
    stfs f8, 0xcc(r1)
    stfs f7, 0xd0(r1)
    stfs f9, 0x1c0(r1)
    stfs f8, 0x1c4(r1)
    stfs f7, 0x1c8(r1)
    stfs f12, 0xbc(r1)
    stfs f11, 0xc0(r1)
    stfs f10, 0xc4(r1)
    stfs f12, 0x1d0(r1)
    stfs f11, 0x1d4(r1)
    stfs f10, 0x1d8(r1)
    stfs f30, 0xb0(r1)
    stfs f31, 0xb4(r1)
    stfs f13, 0xb8(r1)
    stfs f30, 0x1bc(r1)
    stfs f31, 0x1cc(r1)
    stfs f13, 0x1dc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xac(r1)
    bl fn_805F9750
    lfs f2, 0xac(r1)
    lfs f0, lbl_80883AB0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8028B75C_000010C8
    lfs f3, 0xa8(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_8028B75C_000010B8
    lfs f0, lbl_80883AB4
    b lbl_fn_8028B75C_000010BC
lbl_fn_8028B75C_000010B8:
    lfs f0, lbl_80883AB8
lbl_fn_8028B75C_000010BC:
    fneg f0, f0
    stfs f0, 0x98(r1)
    b lbl_fn_8028B75C_000010DC
lbl_fn_8028B75C_000010C8:
    lfs f1, 0xa8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x98(r1)
lbl_fn_8028B75C_000010DC:
    addi r3, r1, 0x98
    lfs f4, lbl_80883A98
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_807452F0@ha
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f4
    lfs f0, 0x538(r31)
    lfs f3, 0x84(r1)
    stfs f2, 0x88(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_807452F0@l(r3)
    stfs f4, 0xa0(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80883AC4
    fcmpo cr0, f3, f0
    ble lbl_fn_8028B75C_00001128
    lfs f0, lbl_80883AC8
    fsubs f3, f3, f0
lbl_fn_8028B75C_00001128:
    lfs f0, lbl_80883ACC
    fcmpo cr0, f3, f0
    bge lbl_fn_8028B75C_0000113C
    lfs f0, lbl_80883AC8
    fadds f3, f3, f0
lbl_fn_8028B75C_0000113C:
    li r0, 0x0
    stfs f3, 0x1528(r31)
    stw r0, 0x153c(r31)
    b lbl_fn_8028B75C_0000163C
lbl_fn_8028B75C_0000114C:
    lwz r6, 0x14b0(r3)
    lis r4, lbl_80745314@ha
    addi r4, r4, lbl_80745314@l
    addi r5, r1, 0x104
    psq_l f1, 0x528(r6), 0, 0
    addi r4, r4, 0x339
    lfs f2, 0x530(r6)
    addi r3, r3, 0xb0
    psq_st f1, 0x0(r5), 0, 0
    li r5, 0x0
    stfs f2, 0x10c(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8028B75C_0000118C
    li r4, 0x0
    b lbl_fn_8028B75C_00001198
lbl_fn_8028B75C_0000118C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_8028B75C_00001198:
    lfs f4, 0x2c(r4)
    addi r3, r1, 0xec
    lfs f6, 0xc(r4)
    lfs f3, 0x10c(r1)
    lfs f0, 0x104(r1)
    lfs f5, 0x1c(r4)
    fsubs f3, f3, f4
    fsubs f7, f0, f6
    lfs f0, lbl_80883A98
    stfs f6, 0xf8(r1)
    stfs f5, 0xfc(r1)
    stfs f4, 0x100(r1)
    stfs f7, 0xec(r1)
    stfs f3, 0xf4(r1)
    stfs f0, 0xf0(r1)
    bl fn_805F9940
    lfs f0, lbl_80883B2C
    fmr f30, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_8028B75C_00001204
    lfs f3, lbl_80883A98
    lfs f0, lbl_80883AA8
    stfs f3, 0xec(r1)
    lfs f30, lbl_80883AA0
    stfs f3, 0xf0(r1)
    stfs f0, 0xf4(r1)
    b lbl_fn_8028B75C_00001210
lbl_fn_8028B75C_00001204:
    addi r3, r1, 0xec
    mr r4, r3
    bl fn_805F98D0
lbl_fn_8028B75C_00001210:
    lfs f3, lbl_80883A98
    addi r3, r1, 0x180
    lfs f0, lbl_80883AA8
    li r4, 0x79
    stfs f3, 0xe0(r1)
    lfs f31, lbl_80883B30
    stfs f3, 0xe4(r1)
    stfs f0, 0xe8(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0xe0
    addi r3, r1, 0x180
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0xec
    addi r4, r1, 0xe0
    bl fn_805F9990
    fcmpo cr0, f1, f31
    ble lbl_fn_8028B75C_00001634
    lwz r3, 0x14e0(r31)
    lfs f3, lbl_80883B34
    lfs f0, 0x40(r3)
    fadds f0, f3, f0
    fcmpo cr0, f30, f0
    cror eq, lt, eq
    bne lbl_fn_8028B75C_0000129C
    cmpwi r30, 0x0
    beq lbl_fn_8028B75C_00001290
    lwz r3, 0x14b8(r31)
    lwz r0, 0x19c4(r31)
    cmpw r3, r0
    ble lbl_fn_8028B75C_0000163C
lbl_fn_8028B75C_00001290:
    mr r3, r31
    bl fn_8028FDB0
    b lbl_fn_8028B75C_0000163C
lbl_fn_8028B75C_0000129C:
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8028B75C_00001628
    lwz r4, 0x940(r31)
    lis r0, 0x4330
    stw r0, 0x220(r1)
    lis r3, lbl_807452F8@ha
    xoris r0, r4, 0x8000
    lfd f5, lbl_807452F8@l(r3)
    stw r0, 0x224(r1)
    lfs f3, 0x7d8(r31)
    lfd f4, 0x220(r1)
    lfs f0, lbl_80883ABC
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fcmpo cr0, f3, f0
    bge lbl_fn_8028B75C_000012F0
    li r0, 0x4
    stw r0, 0x14c0(r31)
    b lbl_fn_8028B75C_000012F8
lbl_fn_8028B75C_000012F0:
    li r0, 0x0
    stw r0, 0x14c0(r31)
lbl_fn_8028B75C_000012F8:
    li r30, 0x0
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883AA8
    li r7, 0x11
    lfs f1, lbl_80883A98
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f2, lbl_80883AA0
    li r4, 0x0
    stw r7, 0x58c(r31)
    li r5, 0xa
    li r6, 0x0
    li r7, 0x0
    stfs f1, 0x1510(r31)
    li r8, 0x1
    stw r30, 0x15d4(r31)
    stw r0, 0x3fc(r31)
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    mr r3, r31
    lwz r4, lbl_8087F430
    lwz r30, 0x10d8(r4)
    bl fn_80179D44
    lfs f1, lbl_80883AC0
    mr r5, r3
    mr r3, r30
    addi r4, r31, 0x528
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_803C1560
    subi r0, r3, 0x1
    lwz r3, 0x9c(r30)
    mulli r0, r0, 0x30
    lfs f3, 0x530(r31)
    lfs f4, 0x52c(r31)
    addi r4, r1, 0x8
    lfs f0, 0x528(r31)
    addi r5, r31, 0x151c
    add r6, r3, r0
    lfs f7, 0x1980(r31)
    lfs f6, 0xc(r6)
    addi r3, r1, 0x20
    lfs f5, 0x8(r6)
    addi r30, r1, 0x14
    fsubs f2, f6, f3
    lfs f3, 0x4(r6)
    fsubs f5, f5, f4
    lfs f4, 0x1978(r31)
    fsubs f0, f3, f0
    stfs f2, 0x1524(r31)
    stfs f0, 0x8(r1)
    lfs f6, 0x197c(r31)
    stfs f5, 0xc(r1)
    lfs f0, lbl_80883AB0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f3, 0xc(r6)
    lfs f5, 0x8(r6)
    fsubs f7, f7, f3
    lfs f3, 0x4(r6)
    stfs f2, 0x10(r1)
    fsubs f5, f6, f5
    fsubs f3, f4, f3
    fmr f2, f7
    stfs f3, 0x20(r1)
    frsp f3, f2
    stfs f5, 0x24(r1)
    psq_l f1, 0x0(r3), 0, 0
    fabs f4, f3
    stfs f7, 0x28(r1)
    psq_st f1, 0x0(r30), 0, 0
    frsp f4, f4
    stfs f2, 0x1c(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_8028B75C_00001474
    lfs f3, 0x14(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_8028B75C_00001468
    lfs f0, lbl_80883AB4
    b lbl_fn_8028B75C_0000146C
lbl_fn_8028B75C_00001468:
    lfs f0, lbl_80883AB8
lbl_fn_8028B75C_0000146C:
    stfs f0, 0x30(r1)
    b lbl_fn_8028B75C_00001488
lbl_fn_8028B75C_00001474:
    fmr f2, f3
    lfs f1, 0x14(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x30(r1)
lbl_fn_8028B75C_00001488:
    lfs f0, 0x30(r1)
    addi r3, r1, 0x150
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883A98
    addi r4, r1, 0x38
    lfs f4, 0x158(r1)
    mr r5, r4
    lfs f5, 0x154(r1)
    addi r3, r1, 0x110
    lfs f6, 0x150(r1)
    lfs f7, 0x168(r1)
    lfs f8, 0x164(r1)
    lfs f9, 0x160(r1)
    lfs f10, 0x178(r1)
    lfs f11, 0x174(r1)
    lfs f12, 0x170(r1)
    lfs f13, 0x17c(r1)
    lfs f30, 0x16c(r1)
    lfs f31, 0x15c(r1)
    lfs f0, lbl_80883AA8
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x1c(r1)
    stfs f3, 0x140(r1)
    stfs f3, 0x144(r1)
    stfs f3, 0x148(r1)
    stfs f0, 0x14c(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f6, 0x110(r1)
    stfs f5, 0x114(r1)
    stfs f4, 0x118(r1)
    stfs f9, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f9, 0x120(r1)
    stfs f8, 0x124(r1)
    stfs f7, 0x128(r1)
    stfs f12, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f10, 0x58(r1)
    stfs f12, 0x130(r1)
    stfs f11, 0x134(r1)
    stfs f10, 0x138(r1)
    stfs f31, 0x44(r1)
    stfs f30, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f31, 0x11c(r1)
    stfs f30, 0x12c(r1)
    stfs f13, 0x13c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883AB0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8028B75C_000015A4
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_8028B75C_00001594
    lfs f0, lbl_80883AB4
    b lbl_fn_8028B75C_00001598
lbl_fn_8028B75C_00001594:
    lfs f0, lbl_80883AB8
lbl_fn_8028B75C_00001598:
    fneg f0, f0
    stfs f0, 0x2c(r1)
    b lbl_fn_8028B75C_000015B8
lbl_fn_8028B75C_000015A4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x2c(r1)
lbl_fn_8028B75C_000015B8:
    addi r3, r1, 0x2c
    lfs f4, lbl_80883A98
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_807452F0@ha
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f4
    lfs f0, 0x538(r31)
    lfs f3, 0x18(r1)
    stfs f2, 0x1c(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_807452F0@l(r3)
    stfs f4, 0x34(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80883AC4
    fcmpo cr0, f3, f0
    ble lbl_fn_8028B75C_00001604
    lfs f0, lbl_80883AC8
    fsubs f3, f3, f0
lbl_fn_8028B75C_00001604:
    lfs f0, lbl_80883ACC
    fcmpo cr0, f3, f0
    bge lbl_fn_8028B75C_00001618
    lfs f0, lbl_80883AC8
    fadds f3, f3, f0
lbl_fn_8028B75C_00001618:
    li r0, 0x0
    stfs f3, 0x1528(r31)
    stw r0, 0x153c(r31)
    b lbl_fn_8028B75C_0000163C
lbl_fn_8028B75C_00001628:
    mr r3, r31
    bl fn_80290088
    b lbl_fn_8028B75C_0000163C
lbl_fn_8028B75C_00001634:
    mr r3, r31
    bl fn_80290088
lbl_fn_8028B75C_0000163C:
    lwz r0, 0x254(r1)
    psq_l f31, 0x248(r1), 0, 0
    lfd f31, 0x240(r1)
    psq_l f30, 0x238(r1), 0, 0
    lfd f30, 0x230(r1)
    lwz r31, 0x22c(r1)
    lwz r30, 0x228(r1)
    mtlr r0
    addi r1, r1, 0x250
    blr
}

asm void fn_8028BFE0(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    stfd f31, 0x200(r1)
    psq_st f31, 0x208(r1), 0, 0
    stfd f30, 0x1f0(r1)
    psq_st f30, 0x1f8(r1), 0, 0
    stw r31, 0x1ec(r1)
    mr r31, r3
    stw r30, 0x1e8(r1)
    stw r29, 0x1e4(r1)
    lwz r0, 0x14b4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8028BFE0_00001784
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    lfs f0, lbl_80883AD8
    lfs f3, 0x2e4(r31)
    fsubs f11, f1, f0
    fcmpo cr0, f3, f11
    cror eq, gt, eq
    bne lbl_fn_8028BFE0_0000171C
    lfs f0, lbl_80883AA8
    li r30, 0x1
    stw r30, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883A98
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x143
    lfs f2, lbl_80883AA0
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    stw r30, 0x14b4(r31)
    li r0, 0x0
    lwz r3, 0x152c(r31)
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x530(r31)
    psq_st f1, 0x528(r31), 0, 0
    stw r0, 0x14b8(r31)
    b lbl_fn_8028BFE0_00001E8C
lbl_fn_8028BFE0_0000171C:
    lfs f0, lbl_80883AA8
    lfs f3, 0x1528(r31)
    fdivs f10, f0, f11
    lfs f8, 0x1524(r31)
    lfs f0, 0x1520(r31)
    lfs f7, 0x151c(r31)
    lfs f6, 0x528(r31)
    lfs f5, 0x52c(r31)
    fmuls f9, f0, f10
    lfs f4, 0x530(r31)
    fmuls f8, f8, f10
    lfs f0, 0x538(r31)
    fmuls f7, f7, f10
    stfs f9, 0xf0(r1)
    fdivs f3, f3, f11
    stfs f7, 0xec(r1)
    stfs f8, 0xf4(r1)
    fadds f6, f6, f7
    fadds f5, f5, f9
    fadds f4, f4, f8
    stfs f6, 0x528(r31)
    fadds f0, f0, f3
    stfs f5, 0x52c(r31)
    stfs f4, 0x530(r31)
    stfs f0, 0x538(r31)
    b lbl_fn_8028BFE0_00001E8C
lbl_fn_8028BFE0_00001784:
    cmpwi r0, 0x1
    bne lbl_fn_8028BFE0_00001B20
    lwz r4, lbl_8087F430
    lwz r29, 0x10d8(r4)
    bl fn_80179D44
    lwz r4, 0x1530(r31)
    mr r5, r3
    lfs f1, lbl_80883AC0
    mr r3, r29
    addi r4, r4, 0x4
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    bl fn_803C1560
    lwz r0, 0x150c(r31)
    cmpw r0, r3
    bne lbl_fn_8028BFE0_00001B10
    lfs f3, 0x1514(r31)
    lfs f0, 0x1518(r31)
    fcmpo cr0, f3, f0
    ble lbl_fn_8028BFE0_00001B10
    lwz r0, 0x14c8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8028BFE0_0000180C
    lwz r3, lbl_8087F430
    li r4, 0x14
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8028BFE0_00001B10
    lwz r3, lbl_8087F430
    li r4, 0x14
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_8028BFE0_00001B10
lbl_fn_8028BFE0_0000180C:
    lfs f0, lbl_80883AA8
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883A98
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x144
    lfs f2, lbl_80883AA0
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80883A98
    li r0, 0x2
    stw r0, 0x14b4(r31)
    mr r3, r31
    stfs f0, 0x1514(r31)
    lwz r4, lbl_8087F430
    lwz r29, 0x10d8(r4)
    bl fn_80179D44
    lwz r4, 0x1530(r31)
    mr r5, r3
    lfs f1, lbl_80883AC0
    mr r3, r29
    addi r4, r4, 0x4
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_803C1560
    subi r0, r3, 0x1
    lwz r3, 0x9c(r29)
    mulli r0, r0, 0x30
    lfs f3, 0x530(r31)
    lfs f4, 0x52c(r31)
    addi r5, r1, 0xe0
    lfs f0, 0x528(r31)
    addi r4, r31, 0x151c
    add r7, r3, r0
    lwz r3, 0x1530(r31)
    lfs f6, 0xc(r7)
    addi r6, r1, 0xc8
    lfs f5, 0x8(r7)
    addi r30, r1, 0xd4
    fsubs f2, f6, f3
    lfs f3, 0x4(r7)
    fsubs f5, f5, f4
    lfs f7, 0x1980(r31)
    fsubs f0, f3, f0
    stfs f2, 0x1524(r31)
    stfs f0, 0xe0(r1)
    lfs f4, 0x1978(r31)
    stfs f5, 0xe4(r1)
    lfs f6, 0x197c(r31)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, lbl_80883AB0
    lfs f3, 0xc(r3)
    lfs f5, 0x8(r3)
    fsubs f7, f7, f3
    lfs f3, 0x4(r3)
    stfs f2, 0xe8(r1)
    fsubs f5, f6, f5
    fsubs f3, f4, f3
    fmr f2, f7
    stfs f3, 0xc8(r1)
    frsp f3, f2
    stfs f5, 0xcc(r1)
    psq_l f1, 0x0(r6), 0, 0
    fabs f4, f3
    stfs f7, 0xd0(r1)
    psq_st f1, 0x0(r30), 0, 0
    frsp f4, f4
    stfs f2, 0xdc(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_8028BFE0_00001964
    lfs f3, 0xd4(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_8028BFE0_00001958
    lfs f0, lbl_80883AB4
    b lbl_fn_8028BFE0_0000195C
lbl_fn_8028BFE0_00001958:
    lfs f0, lbl_80883AB8
lbl_fn_8028BFE0_0000195C:
    stfs f0, 0x90(r1)
    b lbl_fn_8028BFE0_00001978
lbl_fn_8028BFE0_00001964:
    fmr f2, f3
    lfs f1, 0xd4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_8028BFE0_00001978:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x168
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883A98
    addi r4, r1, 0x80
    lfs f30, 0x170(r1)
    mr r5, r4
    lfs f31, 0x16c(r1)
    addi r3, r1, 0x198
    lfs f13, 0x168(r1)
    lfs f12, 0x180(r1)
    lfs f11, 0x17c(r1)
    lfs f10, 0x178(r1)
    lfs f9, 0x190(r1)
    lfs f8, 0x18c(r1)
    lfs f7, 0x188(r1)
    lfs f6, 0x194(r1)
    lfs f5, 0x184(r1)
    lfs f4, 0x174(r1)
    lfs f0, lbl_80883AA8
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xdc(r1)
    stfs f3, 0x1c8(r1)
    stfs f3, 0x1cc(r1)
    stfs f3, 0x1d0(r1)
    stfs f0, 0x1d4(r1)
    stfs f13, 0x50(r1)
    stfs f31, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f13, 0x198(r1)
    stfs f31, 0x19c(r1)
    stfs f30, 0x1a0(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x1a8(r1)
    stfs f11, 0x1ac(r1)
    stfs f12, 0x1b0(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x1b8(r1)
    stfs f8, 0x1bc(r1)
    stfs f9, 0x1c0(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x1a4(r1)
    stfs f5, 0x1b4(r1)
    stfs f6, 0x1c4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80883AB0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8028BFE0_00001A94
    lfs f3, 0x84(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_8028BFE0_00001A84
    lfs f0, lbl_80883AB4
    b lbl_fn_8028BFE0_00001A88
lbl_fn_8028BFE0_00001A84:
    lfs f0, lbl_80883AB8
lbl_fn_8028BFE0_00001A88:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_8028BFE0_00001AA8
lbl_fn_8028BFE0_00001A94:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_8028BFE0_00001AA8:
    addi r3, r1, 0x8c
    lfs f4, lbl_80883A98
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_807452F0@ha
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f4
    lfs f0, 0x538(r31)
    lfs f3, 0xd8(r1)
    stfs f2, 0xdc(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_807452F0@l(r3)
    stfs f4, 0x94(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80883AC4
    fcmpo cr0, f3, f0
    ble lbl_fn_8028BFE0_00001AF4
    lfs f0, lbl_80883AC8
    fsubs f3, f3, f0
lbl_fn_8028BFE0_00001AF4:
    lfs f0, lbl_80883ACC
    fcmpo cr0, f3, f0
    bge lbl_fn_8028BFE0_00001B08
    lfs f0, lbl_80883AC8
    fadds f3, f3, f0
lbl_fn_8028BFE0_00001B08:
    stfs f3, 0x1528(r31)
    b lbl_fn_8028BFE0_00001E8C
lbl_fn_8028BFE0_00001B10:
    mr r3, r31
    li r4, 0x1
    bl fn_8028AFD8
    b lbl_fn_8028BFE0_00001E8C
lbl_fn_8028BFE0_00001B20:
    cmpwi r0, 0x2
    bne lbl_fn_8028BFE0_00001E8C
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    lfs f0, lbl_80883AD8
    lfs f3, 0x2e4(r31)
    fsubs f11, f1, f0
    fcmpo cr0, f3, f11
    cror eq, gt, eq
    bne lbl_fn_8028BFE0_00001E28
    li r30, 0x0
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883A98
    li r0, 0x6
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stfs f0, 0x1510(r31)
    stw r30, 0x15d4(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80883AA8
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883A98
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x2
    lfs f2, lbl_80883AA0
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, -0x2
    li r6, 0x1
    bl fn_80239DAC
    lfs f3, 0x1980(r31)
    addi r30, r1, 0xb0
    lfs f0, 0x530(r31)
    addi r5, r1, 0xa4
    lfs f5, 0x197c(r31)
    mr r3, r30
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x1978(r31)
    mr r4, r30
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xa8(r1)
    stfs f0, 0xa4(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0xac(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xb8(r1)
    bl fn_805F98D0
    lfs f2, 0xb8(r1)
    addi r29, r1, 0xbc
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883AB0
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0xc4(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8028BFE0_00001C6C
    lfs f3, 0xbc(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_8028BFE0_00001C60
    lfs f0, lbl_80883AB4
    b lbl_fn_8028BFE0_00001C64
lbl_fn_8028BFE0_00001C60:
    lfs f0, lbl_80883AB8
lbl_fn_8028BFE0_00001C64:
    stfs f0, 0x48(r1)
    b lbl_fn_8028BFE0_00001C80
lbl_fn_8028BFE0_00001C6C:
    frsp f2, f2
    lfs f1, 0xbc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8028BFE0_00001C80:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xf8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883A98
    addi r4, r1, 0x38
    lfs f31, 0x100(r1)
    mr r5, r4
    lfs f30, 0xfc(r1)
    addi r3, r1, 0x128
    lfs f13, 0xf8(r1)
    lfs f12, 0x110(r1)
    lfs f11, 0x10c(r1)
    lfs f10, 0x108(r1)
    lfs f9, 0x120(r1)
    lfs f8, 0x11c(r1)
    lfs f7, 0x118(r1)
    lfs f6, 0x124(r1)
    lfs f5, 0x114(r1)
    lfs f4, 0x104(r1)
    lfs f0, lbl_80883AA8
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xc4(r1)
    stfs f3, 0x158(r1)
    stfs f3, 0x15c(r1)
    stfs f3, 0x160(r1)
    stfs f0, 0x164(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0x128(r1)
    stfs f30, 0x12c(r1)
    stfs f31, 0x130(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x138(r1)
    stfs f11, 0x13c(r1)
    stfs f12, 0x140(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x148(r1)
    stfs f8, 0x14c(r1)
    stfs f9, 0x150(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x134(r1)
    stfs f5, 0x144(r1)
    stfs f6, 0x154(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883AB0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8028BFE0_00001D9C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_8028BFE0_00001D8C
    lfs f0, lbl_80883AB4
    b lbl_fn_8028BFE0_00001D90
lbl_fn_8028BFE0_00001D8C:
    lfs f0, lbl_80883AB8
lbl_fn_8028BFE0_00001D90:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8028BFE0_00001DB0
lbl_fn_8028BFE0_00001D9C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8028BFE0_00001DB0:
    addi r3, r1, 0x44
    lfs f2, lbl_80883A98
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, 0xc0(r1)
    stfs f0, 0x538(r31)
    lwz r4, lbl_8087F430
    stfs f2, 0x4c(r1)
    lwz r29, 0x10d8(r4)
    stfs f2, 0xc4(r1)
    bl fn_80179D44
    lwz r4, 0x1530(r31)
    mr r5, r3
    lfs f1, lbl_80883AC0
    mr r3, r29
    addi r4, r4, 0x4
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_803C1560
    subi r0, r3, 0x1
    lwz r3, 0x9c(r29)
    mulli r0, r0, 0x30
    add r3, r3, r0
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x530(r31)
    psq_st f1, 0x528(r31), 0, 0
    b lbl_fn_8028BFE0_00001E8C
lbl_fn_8028BFE0_00001E28:
    lfs f0, lbl_80883AA8
    lfs f3, 0x1528(r31)
    fdivs f10, f0, f11
    lfs f8, 0x1524(r31)
    lfs f0, 0x1520(r31)
    lfs f7, 0x151c(r31)
    lfs f6, 0x528(r31)
    lfs f5, 0x52c(r31)
    fmuls f9, f0, f10
    lfs f4, 0x530(r31)
    fmuls f8, f8, f10
    lfs f0, 0x538(r31)
    fmuls f7, f7, f10
    stfs f9, 0x9c(r1)
    fdivs f3, f3, f11
    stfs f7, 0x98(r1)
    stfs f8, 0xa0(r1)
    fadds f6, f6, f7
    fadds f5, f5, f9
    fadds f4, f4, f8
    stfs f6, 0x528(r31)
    fadds f0, f0, f3
    stfs f5, 0x52c(r31)
    stfs f4, 0x530(r31)
    stfs f0, 0x538(r31)
lbl_fn_8028BFE0_00001E8C:
    lwz r0, 0x214(r1)
    psq_l f31, 0x208(r1), 0, 0
    lfd f31, 0x200(r1)
    psq_l f30, 0x1f8(r1), 0, 0
    lfd f30, 0x1f0(r1)
    lwz r31, 0x1ec(r1)
    lwz r30, 0x1e8(r1)
    lwz r29, 0x1e4(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}
