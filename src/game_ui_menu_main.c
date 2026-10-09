#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_8008BBD8(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_80145334(void);
extern void fn_801539E0(void);
extern void fn_80154344(void);
extern void fn_8015495C(void);
extern void fn_80155DAC(void);
extern void fn_80178208(void);
extern void fn_80192758(void);
extern void fn_801B2EDC(void);
extern void fn_801B618C(void);
extern void fn_803EA77C(void);
extern void fn_8054770C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_8073B188[];
extern u8 lbl_80780818[];
extern u8 lbl_80780910[];
extern u8 lbl_80780920[];
extern u8 lbl_80780928[];
extern u8 lbl_807809A0[];
extern u8 lbl_80780A18[];
extern u8 lbl_80780A90[];
extern u8 lbl_80780B08[];
extern u8 lbl_80780B80[];
extern u8 lbl_80780BA0[];
extern u8 lbl_80780BF8[];
extern u8 lbl_80780D68[];
extern u8 lbl_80780DE0[];
extern u8 lbl_80780EB4[];
extern u8 lbl_807C7C48[];
extern u8 lbl_807C7C50[];

/* Small data declarations */
extern u32 lbl_8087DA08;
extern u32 lbl_8087F0F0;
extern u32 lbl_8087F0F8;
extern u32 lbl_8087F498;
extern u32 lbl_80882420;
extern u32 lbl_80882428;
extern u32 lbl_80882474;
extern u32 lbl_80882478;
extern u32 lbl_80882480;
extern u32 lbl_80882484;
extern u32 lbl_80882488;
extern u32 lbl_8088248C;
extern u32 lbl_80882490;
extern u32 lbl_80882494;
extern u32 lbl_80882498;
extern u32 lbl_8088249C;
extern u32 lbl_808824A0;
extern u32 lbl_808824A4;
extern u32 lbl_808824A8;
extern u32 lbl_808824AC;
extern u32 lbl_808824B0;
extern u32 lbl_808824B4;
extern u32 lbl_808824B8;
extern u32 lbl_808824BC;
extern u32 lbl_808824C0;
extern u32 lbl_808824C4;
extern u32 lbl_808824C8;
extern u32 lbl_808824CC;

/* Function declarations */
void fn_801B3E70(void);
void fn_801B3EAC(void);
void fn_801B3EEC(void);
void fn_801B405C(void);
void fn_801B409C(void);
void fn_801B417C(void);
void fn_801B4238(void);
void fn_801B4344(void);
void fn_801B4394(void);
void fn_801B44E8(void);
void fn_801B46E8(void);
void fn_801B4788(void);
void fn_801B47EC(void);
void fn_801B4BC8(void);
void fn_801B4C00(void);
void fn_801B4D34(void);
void fn_801B507C(void);
void fn_801B515C(void);
void fn_801B519C(void);
void fn_801B51DC(void);
void fn_801B521C(void);
void fn_801B525C(void);
void fn_801B529C(void);
void fn_801B5370(void);
void fn_801B54E8(void);
void fn_801B5748(void);
void fn_801B5778(void);

asm void fn_801B3E70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_801B2EDC
    lis r4, lbl_80780818@ha
    mr r3, r31
    addi r4, r4, lbl_80780818@l
    stw r4, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B3EAC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B3EAC_00000064
    cmpwi r4, 0x0
    ble lbl_fn_801B3EAC_00000064
    bl dtor_80084684
lbl_fn_801B3EAC_00000064:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B3EEC(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    lfs f30, lbl_80882420
    stfd f29, 0x30(r1)
    psq_st f29, 0x38(r1), 0, 0
    lfs f29, lbl_80882474
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r5, 0x4(r3)
    addi r31, r5, 0xb0
    lfs f31, 0x2e4(r5)
    mr r3, r31
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801B3EEC_0000011C
    lwz r7, 0x4(r30)
    lwz r3, 0x48(r7)
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    bgt lbl_fn_801B3EEC_00000114
    lwz r3, 0x638(r7)
    li r0, 0x0
    stw r3, 0x63c(r7)
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    stw r0, 0x638(r7)
    li r7, 0x1
    lwz r3, 0x4(r30)
    bl fn_8015495C
lbl_fn_801B3EEC_00000114:
    li r3, 0x1
    b lbl_fn_801B3EEC_000001BC
lbl_fn_801B3EEC_0000011C:
    lfs f3, 0x234(r31)
    lfs f0, lbl_80882478
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_801B3EEC_00000180
    lwz r4, 0x4(r30)
    addi r3, r1, 0x14
    lfs f4, 0xc(r30)
    psq_l f1, 0x574(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x10(r30)
    lfs f5, 0x14(r1)
    lfs f3, 0x18(r1)
    fadds f4, f5, f4
    lfs f2, 0x57c(r4)
    fadds f3, f3, f0
    lfs f0, 0x14(r30)
    stfs f4, 0x14(r1)
    fadds f2, f2, f0
    stfs f3, 0x18(r1)
    lfs f30, lbl_80882428
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x574(r4), 0, 0
    stfs f2, 0x1c(r1)
    stfs f2, 0x57c(r4)
lbl_fn_801B3EEC_00000180:
    lwz r3, 0x4(r30)
    addi r6, r1, 0x8
    li r5, 0x0
    lwz r12, 0x0(r3)
    addi r4, r3, 0x534
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    psq_st f1, 0x0(r6), 0, 0
    fmr f1, f30
    lwz r12, 0x34(r12)
    stfs f2, 0x10(r1)
    fmr f2, f29
    mtctr r12
    bctrl
    li r3, 0x0
lbl_fn_801B3EEC_000001BC:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    psq_l f29, 0x38(r1), 0, 0
    lfd f29, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_801B405C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B405C_00000214
    cmpwi r4, 0x0
    ble lbl_fn_801B405C_00000214
    bl dtor_80084684
lbl_fn_801B405C_00000214:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B409C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    fmr f4, f1
    lfs f3, lbl_80882480
    stw r0, 0x24(r1)
    lis r7, lbl_80780B08@ha
    addi r7, r7, lbl_80780B08@l
    li r6, 0x0
    stw r31, 0x1c(r1)
    li r9, 0x5b
    psq_l f1, 0x0(r5), 0, 0
    addi r10, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    lfs f2, 0x8(r5)
    li r0, 0x1
    stw r7, 0x0(r3)
    li r5, 0x231
    lfs f0, lbl_80882484
    li r7, 0x0
    stw r4, 0x4(r3)
    li r8, 0x1
    stw r6, 0x8(r3)
    stw r6, 0x58c(r4)
    li r4, 0x0
    li r6, 0x0
    lwz r11, 0x4(r3)
    stfs f3, 0x8(r1)
    stw r9, 0x560(r11)
    lwz r9, 0x4(r3)
    stfs f4, 0xc(r1)
    psq_st f1, 0x528(r9), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    stfs f2, 0x530(r9)
    fmr f2, f3
    lwz r9, 0x4(r3)
    stfs f3, 0x10(r1)
    psq_st f1, 0x534(r9), 0, 0
    fmr f1, f3
    stfs f2, 0x53c(r9)
    lfs f2, lbl_80882488
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f0, lbl_80882484
    mr r3, r30
    stfs f0, 0x238(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801B417C(void)
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
    mr r29, r3
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801B417C_000003A0
    lwz r3, 0x4(r3)
    li r4, 0x0
    addi r30, r3, 0xb0
    lfs f31, 0x2e4(r3)
    mr r3, r30
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801B417C_000003A0
    li r31, 0x1
    stw r31, 0x34c(r30)
    lfs f0, lbl_80882484
    mr r3, r30
    stfs f0, 0x24c(r30)
    li r4, 0x0
    lfs f1, lbl_80882480
    li r5, 0x232
    lfs f2, lbl_80882488
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80882484
    stfs f0, 0x238(r30)
    stw r31, 0x8(r29)
lbl_fn_801B417C_000003A0:
    psq_l f31, 0x28(r1), 0, 0
    li r3, 0x0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801B4238(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    fmr f4, f1
    lfs f3, lbl_80882480
    stw r0, 0x24(r1)
    lis r7, lbl_80780A90@ha
    addi r7, r7, lbl_80780A90@l
    li r0, 0x0
    stw r31, 0x1c(r1)
    cmpwi r6, 0x0
    psq_l f1, 0x0(r5), 0, 0
    stw r30, 0x18(r1)
    mr r30, r3
    lfs f2, 0x8(r5)
    stw r7, 0x0(r3)
    li r7, 0x5c
    lfs f0, lbl_80882484
    stw r4, 0x4(r3)
    stw r0, 0x58c(r4)
    addi r4, r1, 0x8
    li r0, 0x1
    lwz r5, 0x4(r3)
    stfs f3, 0x8(r1)
    stw r7, 0x560(r5)
    lwz r5, 0x4(r3)
    stfs f4, 0xc(r1)
    psq_st f1, 0x528(r5), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x530(r5)
    fmr f2, f3
    lwz r4, 0x4(r3)
    stfs f3, 0x10(r1)
    psq_st f1, 0x534(r4), 0, 0
    stfs f2, 0x53c(r4)
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    stfs f0, 0x2fc(r3)
    beq lbl_fn_801B4238_0000048C
    fmr f1, f3
    lfs f2, lbl_80882488
    mr r3, r31
    li r4, 0x0
    li r5, 0x234
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801B4238_000004B0
lbl_fn_801B4238_0000048C:
    fmr f1, f3
    lfs f2, lbl_80882488
    mr r3, r31
    li r4, 0x0
    li r5, 0x233
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_801B4238_000004B0:
    lfs f0, lbl_80882484
    mr r3, r30
    stfs f0, 0x238(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801B4344(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    lwz r3, 0x4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    lfs f31, 0x234(r3)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    mfcr r3
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    extrwi r3, r3, 1, 2
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801B4394(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r10, lbl_80780A18@ha
    li r9, 0x3c
    stw r0, 0x24(r1)
    addi r10, r10, lbl_80780A18@l
    li r8, 0x0
    li r7, 0x5d
    stw r31, 0x1c(r1)
    li r0, 0x1
    lfs f1, lbl_80882484
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r3
    stw r4, 0x4(r3)
    stw r10, 0x0(r3)
    stw r9, 0x8(r3)
    stw r8, 0xc(r3)
    stw r8, 0x58c(r4)
    lwz r4, 0x4(r3)
    stw r7, 0x560(r4)
    lwz r5, 0x4(r3)
    lwz r4, 0x5c0(r5)
    clrrwi r4, r4, 1
    stw r4, 0x5c0(r5)
    lwz r4, 0x4(r3)
    stw r0, 0x3fc(r4)
    addi r31, r4, 0xb0
    stfs f1, 0x2fc(r4)
    lwz r3, 0x4(r3)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_801B4394_000005D8
    lfs f2, lbl_80882488
    mr r3, r31
    li r4, 0x0
    li r5, 0x230
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801B4394_000005F8
lbl_fn_801B4394_000005D8:
    lfs f2, lbl_80882488
    mr r3, r31
    li r4, 0x0
    li r5, 0x22f
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_801B4394_000005F8:
    lfs f0, lbl_80882480
    stfs f0, 0x238(r31)
    psq_l f1, 0x0(r29), 0, 0
    lwz r3, 0x4(r28)
    lfs f2, 0x8(r29)
    psq_st f1, 0x528(r3), 0, 0
    psq_l f1, 0x0(r30), 0, 0
    stfs f2, 0x530(r3)
    lfs f2, 0x8(r30)
    lwz r3, 0x4(r28)
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    lwz r3, 0x4(r28)
    bl fn_80145334
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_801B4394_00000654
    lwz r4, 0x4(r28)
    li r5, 0xe
    lfs f1, lbl_80882484
    li r6, 0x0
    lfs f2, lbl_8088248C
    bl fn_803EA77C
lbl_fn_801B4394_00000654:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801B44E8(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r3
    lwz r0, 0xc(r3)
    lwz r5, 0x4(r3)
    cmpwi r0, 0x0
    addi r31, r5, 0xb0
    bne lbl_fn_801B44E8_000006E8
    lwz r4, 0x8(r3)
    subic. r0, r4, 0x1
    stw r0, 0x8(r3)
    bge lbl_fn_801B44E8_00000854
    lwz r0, 0x48(r5)
    cmpwi r0, 0x2
    bne lbl_fn_801B44E8_000006D4
    lfs f0, lbl_80882484
    stfs f0, 0x238(r31)
    b lbl_fn_801B44E8_000006DC
lbl_fn_801B44E8_000006D4:
    lfs f0, lbl_80882490
    stfs f0, 0x238(r31)
lbl_fn_801B44E8_000006DC:
    li r0, 0x1
    stw r0, 0xc(r3)
    b lbl_fn_801B44E8_00000854
lbl_fn_801B44E8_000006E8:
    cmpwi r0, 0x1
    bne lbl_fn_801B44E8_00000854
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801B44E8_00000804
    lwz r3, 0x4(r30)
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    lwz r0, 0x5c0(r3)
    li r7, 0x1
    ori r0, r0, 0x1
    stw r0, 0x5c0(r3)
    lwz r3, 0x4(r30)
    bl fn_8015495C
    lwz r3, 0x4(r30)
    li r0, 0x1
    lfs f1, lbl_80882484
    li r4, 0x0
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    lfs f2, lbl_80882488
    mr r3, r31
    stfs f1, 0x24c(r31)
    li r5, 0x2
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80882484
    addi r3, r1, 0x30
    stfs f0, 0x238(r31)
    li r4, 0x79
    lfs f4, lbl_80882494
    lfs f3, lbl_80882480
    lfs f0, lbl_80882498
    stfs f4, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    lwz r5, 0x4(r30)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x30
    mr r5, r4
    bl fn_805F93C0
    lwz r4, 0x4(r30)
    addi r3, r1, 0x14
    lfs f4, 0x24(r1)
    lfs f5, 0x52c(r4)
    lfs f3, 0x528(r4)
    fadds f5, f5, f4
    lfs f0, 0x20(r1)
    lfs f4, 0x530(r4)
    fadds f3, f3, f0
    stfs f5, 0x18(r1)
    lfs f0, 0x28(r1)
    stfs f3, 0x14(r1)
    fadds f2, f4, f0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    stfs f2, 0x530(r4)
    stfs f2, 0x1c(r1)
    lwz r3, 0x4(r30)
    bl fn_80145334
    li r3, 0x1
    b lbl_fn_801B44E8_00000858
lbl_fn_801B44E8_00000804:
    lfs f3, 0x234(r31)
    lfs f0, lbl_8088249C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_801B44E8_00000854
    lwz r4, 0x4(r30)
    addi r3, r1, 0x8
    lfs f3, lbl_8087DA08
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x530(r4)
    lfs f4, 0xc(r1)
    lfs f0, lbl_808824A0
    fsubs f3, f3, f4
    stfs f2, 0x10(r1)
    fmadds f0, f0, f3, f4
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    stfs f2, 0x530(r4)
lbl_fn_801B44E8_00000854:
    li r3, 0x0
lbl_fn_801B44E8_00000858:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_801B46E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_807809A0@ha
    li r6, 0x0
    stw r0, 0x14(r1)
    addi r5, r5, lbl_807809A0@l
    li r10, 0x5e
    li r0, 0x1
    stw r31, 0xc(r1)
    li r7, 0x0
    lfs f0, lbl_80882484
    li r8, 0x1
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f2, lbl_80882488
    stfs f1, 0x8(r3)
    lfs f1, lbl_80882480
    stw r5, 0x0(r3)
    li r5, 0x236
    stw r4, 0x4(r3)
    stw r6, 0x58c(r4)
    li r4, 0x0
    li r6, 0x1
    lwz r9, 0x4(r3)
    stw r10, 0x560(r9)
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f0, lbl_80882484
    mr r3, r30
    stfs f0, 0x238(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B4788(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_808824A4
    stw r0, 0x14(r1)
    lwz r4, 0x4(r3)
    lfs f1, 0x8(r3)
    lfs f2, 0x948(r4)
    fsubs f1, f2, f1
    stfs f1, 0x948(r4)
    lwz r3, 0x4(r3)
    lfs f1, 0x7d8(r3)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_801B4788_00000968
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    li r3, 0x1
    b lbl_fn_801B4788_0000096C
lbl_fn_801B4788_00000968:
    li r3, 0x0
lbl_fn_801B4788_0000096C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B47EC(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    addi r11, r1, 0x240
    bl _savegpr_26
    lwz r5, 0x4(r4)
    mr r31, r3
    mr r26, r4
    lwz r0, 0x7e0(r5)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_801B47EC_00000D3C
    lfs f3, lbl_80882480
    addi r3, r1, 0x1f0
    lfs f0, lbl_808824A8
    li r4, 0x79
    stfs f3, 0x80(r1)
    stfs f3, 0x84(r1)
    stfs f0, 0x88(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x80
    addi r3, r1, 0x1f0
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0x88(r1)
    li r5, 0x0
    lwz r10, 0x4(r26)
    li r11, -0x1
    stfs f2, 0x70(r1)
    lis r3, lbl_80780910@ha
    lwzu r8, lbl_80780910@l(r3)
    addi r9, r1, 0x80
    stfs f2, 0x40(r1)
    frsp f2, f2
    lwz r7, 0x4(r3)
    addi r4, r1, 0x68
    lwz r6, 0x8(r3)
    addi r28, r1, 0x38
    psq_l f1, 0x0(r9), 0, 0
    stfs f2, 0x64(r1)
    addi r9, r1, 0x5c
    addi r29, r1, 0x44
    addi r12, r1, 0x50
    stfs f2, 0x4c(r1)
    frsp f2, f2
    addi r30, r1, 0x94
    addi r3, r1, 0x1d4
    stw r5, 0x0(r31)
    addi r26, r1, 0xb8
    addi r27, r1, 0x1b4
    stfs f2, 0x58(r1)
    frsp f2, f2
    lbz r0, lbl_8087F0F0
    stfs f2, 0x9c(r1)
    extsb. r0, r0
    stfs f2, 0x1e0(r1)
    frsp f2, f2
    psq_st f1, 0x0(r4), 0, 0
    stw r8, 0x74(r1)
    stw r7, 0x78(r1)
    stw r6, 0x7c(r1)
    psq_st f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r9), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r12), 0, 0
    stw r10, 0x90(r1)
    psq_st f1, 0x0(r30), 0, 0
    stw r11, 0xa0(r1)
    stb r5, 0xa4(r1)
    stw r8, 0x8(r1)
    stw r7, 0xc(r1)
    stw r6, 0x10(r1)
    stw r8, 0x2c(r1)
    stw r7, 0x30(r1)
    stw r6, 0x34(r1)
    stw r8, 0x20(r1)
    stw r7, 0x24(r1)
    stw r6, 0x28(r1)
    stw r8, 0x14(r1)
    stw r7, 0x18(r1)
    stw r6, 0x1c(r1)
    stw r8, 0x1c8(r1)
    stw r7, 0x1cc(r1)
    stw r6, 0x1d0(r1)
    stw r10, 0x1d4(r1)
    psq_st f1, 0x4(r3), 0, 0
    stw r11, 0x1e4(r1)
    stb r5, 0x1e8(r1)
    stw r8, 0xa8(r1)
    stw r7, 0xac(r1)
    stw r6, 0xb0(r1)
    stw r10, 0xb4(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0xc0(r1)
    stw r11, 0xc4(r1)
    stb r5, 0xc8(r1)
    stw r8, 0x1a4(r1)
    stw r7, 0x1a8(r1)
    stw r6, 0x1ac(r1)
    stw r10, 0x1b0(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x1bc(r1)
    stw r11, 0x1c0(r1)
    stb r5, 0x1c4(r1)
    bne lbl_fn_801B47EC_00000BC0
    frsp f2, f2
    lis r27, lbl_807C7C48@ha
    addi r28, r1, 0xdc
    addi r9, r1, 0x148
    addi r12, r1, 0x124
    lis r4, fn_801B4BC8@ha
    lis r3, fn_801B4C00@ha
    stfs f2, 0xe4(r1)
    li r0, 0x1
    addi r27, r27, lbl_807C7C48@l
    stfs f2, 0x150(r1)
    frsp f2, f2
    addi r4, r4, fn_801B4BC8@l
    addi r3, r3, fn_801B4C00@l
    stw r8, 0xcc(r1)
    stw r7, 0xd0(r1)
    stw r6, 0xd4(r1)
    stw r10, 0xd8(r1)
    psq_st f1, 0x0(r28), 0, 0
    stw r11, 0xe8(r1)
    stb r5, 0xec(r1)
    stw r8, 0x138(r1)
    stw r7, 0x13c(r1)
    stw r6, 0x140(r1)
    stw r10, 0x144(r1)
    psq_st f1, 0x0(r9), 0, 0
    stw r11, 0x154(r1)
    stb r5, 0x158(r1)
    stw r8, 0x114(r1)
    stw r7, 0x118(r1)
    stw r6, 0x11c(r1)
    stw r10, 0x120(r1)
    psq_st f1, 0x0(r12), 0, 0
    stfs f2, 0x12c(r1)
    stw r11, 0x130(r1)
    stb r5, 0x134(r1)
    stw r4, 0x4(r27)
    stw r3, 0x0(r27)
    stb r0, lbl_8087F0F0
lbl_fn_801B47EC_00000BC0:
    addi r3, r1, 0x1b4
    lwz r8, 0x1a4(r1)
    lwz r7, 0x1a8(r1)
    addi r10, r1, 0x100
    lwz r6, 0x1ac(r1)
    addi r9, r1, 0x190
    lwz r5, 0x1b0(r1)
    addi r27, r1, 0x180
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r27
    lfs f2, 0x1bc(r1)
    lwz r4, 0x1c0(r1)
    lbz r0, 0x1c4(r1)
    stw r8, 0xf0(r1)
    stw r7, 0xf4(r1)
    stw r6, 0xf8(r1)
    stw r5, 0xfc(r1)
    psq_st f1, 0x0(r10), 0, 0
    stfs f2, 0x108(r1)
    stw r4, 0x10c(r1)
    stb r0, 0x110(r1)
    stw r8, 0x180(r1)
    stw r7, 0x184(r1)
    stw r6, 0x188(r1)
    stw r5, 0x18c(r1)
    psq_st f1, 0x0(r9), 0, 0
    stfs f2, 0x198(r1)
    stw r4, 0x19c(r1)
    stb r0, 0x1a0(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801B47EC_00000D14
    lwz r8, 0x180(r1)
    addi r9, r1, 0x16c
    lwz r7, 0x184(r1)
    li r3, 0x24
    lwz r6, 0x188(r1)
    lwz r5, 0x18c(r1)
    psq_l f1, 0x10(r27), 0, 0
    lfs f2, 0x198(r1)
    lwz r4, 0x19c(r1)
    lbz r0, 0x1a0(r1)
    stw r8, 0x15c(r1)
    stw r7, 0x160(r1)
    stw r6, 0x164(r1)
    stw r5, 0x168(r1)
    psq_st f1, 0x0(r9), 0, 0
    stfs f2, 0x174(r1)
    stw r4, 0x178(r1)
    stb r0, 0x17c(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_801B47EC_00000CBC
    lis r3, __files@ha
    lis r4, lbl_80780B80@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80780B80@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801B47EC_00000CBC:
    cmpwi r27, 0x0
    beq lbl_fn_801B47EC_00000D08
    lwz r0, 0x15c(r1)
    addi r3, r1, 0x16c
    stw r0, 0x0(r27)
    lwz r0, 0x160(r1)
    stw r0, 0x4(r27)
    lwz r0, 0x164(r1)
    stw r0, 0x8(r27)
    lwz r0, 0x168(r1)
    stw r0, 0xc(r27)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x10(r27), 0, 0
    lfs f2, 0x174(r1)
    stfs f2, 0x18(r27)
    lwz r0, 0x178(r1)
    stw r0, 0x1c(r27)
    lbz r0, 0x17c(r1)
    stb r0, 0x20(r27)
lbl_fn_801B47EC_00000D08:
    stw r27, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801B47EC_00000D18
lbl_fn_801B47EC_00000D14:
    li r0, 0x0
lbl_fn_801B47EC_00000D18:
    cmpwi r0, 0x0
    beq lbl_fn_801B47EC_00000D30
    lis r3, lbl_807C7C48@ha
    addi r3, r3, lbl_807C7C48@l
    stw r3, 0x0(r31)
    b lbl_fn_801B47EC_00000D40
lbl_fn_801B47EC_00000D30:
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_801B47EC_00000D40
lbl_fn_801B47EC_00000D3C:
    bl fn_80192758
lbl_fn_801B47EC_00000D40:
    addi r11, r1, 0x240
    bl _restgpr_26
    lwz r0, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_801B4BC8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    addi r4, r12, 0x10
    lwz r5, 0x1c(r12)
    lbz r6, 0x20(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B4C00(void)
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
    bne lbl_fn_801B4C00_00000DC8
    lis r3, lbl_80780920@ha
    addi r3, r3, lbl_80780920@l
    stw r3, 0x0(r4)
    b lbl_fn_801B4C00_00000EA8
lbl_fn_801B4C00_00000DC8:
    cmpwi r5, 0x0
    bne lbl_fn_801B4C00_00000E58
    lwz r31, 0x0(r3)
    li r3, 0x24
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801B4C00_00000E08
    lis r3, __files@ha
    lis r4, lbl_80780B80@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80780B80@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801B4C00_00000E08:
    cmpwi r30, 0x0
    beq lbl_fn_801B4C00_00000E50
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lfs f2, 0x18(r31)
    psq_l f1, 0x10(r31), 0, 0
    psq_st f1, 0x10(r30), 0, 0
    stfs f2, 0x18(r30)
    lwz r0, 0x1c(r31)
    stw r0, 0x1c(r30)
    lbz r0, 0x20(r31)
    stb r0, 0x20(r30)
lbl_fn_801B4C00_00000E50:
    stw r30, 0x0(r29)
    b lbl_fn_801B4C00_00000EA8
lbl_fn_801B4C00_00000E58:
    cmpwi r5, 0x1
    bne lbl_fn_801B4C00_00000E74
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_801B4C00_00000EA8
lbl_fn_801B4C00_00000E74:
    lwz r5, 0x0(r4)
    lis r3, lbl_80780920@ha
    lwz r4, lbl_80780920@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_801B4C00_00000EA0
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_801B4C00_00000EA8
lbl_fn_801B4C00_00000EA0:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801B4C00_00000EA8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801B4D34(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    lis r8, lbl_80780928@ha
    li r7, 0x0
    stw r0, 0x114(r1)
    addi r8, r8, lbl_80780928@l
    li r0, 0x5f
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    mr r31, r3
    stw r30, 0xe8(r1)
    stw r4, 0x4(r3)
    stw r8, 0x0(r3)
    stw r5, 0x8(r3)
    stw r6, 0xc(r3)
    stw r7, 0x58c(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x560(r4)
    lwz r6, 0x8(r3)
    cmpwi r6, 0x0
    beq lbl_fn_801B4D34_00001140
    lwz r5, 0x4(r3)
    addi r3, r1, 0x5c
    lfs f3, 0x74(r6)
    addi r4, r1, 0x68
    lfs f0, 0x530(r5)
    addi r30, r1, 0x50
    lfs f2, 0x53c(r5)
    fsubs f6, f3, f0
    stfs f2, 0x64(r1)
    psq_l f1, 0x534(r5), 0, 0
    lfs f5, 0x70(r6)
    fmr f2, f6
    lfs f4, 0x52c(r5)
    lfs f3, 0x6c(r6)
    fsubs f4, f5, f4
    lfs f0, 0x528(r5)
    frsp f5, f2
    fsubs f3, f3, f0
    stfs f4, 0x6c(r1)
    lfs f0, lbl_808824AC
    fabs f4, f5
    stfs f3, 0x68(r1)
    psq_st f1, 0x0(r3), 0, 0
    frsp f3, f4
    psq_l f1, 0x0(r4), 0, 0
    stfs f6, 0x70(r1)
    fcmpo cr0, f3, f0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x58(r1)
    bge lbl_fn_801B4D34_00000FC0
    lfs f3, 0x50(r1)
    lfs f0, lbl_80882480
    fcmpo cr0, f3, f0
    ble lbl_fn_801B4D34_00000FB4
    lfs f0, lbl_808824B0
    b lbl_fn_801B4D34_00000FB8
lbl_fn_801B4D34_00000FB4:
    lfs f0, lbl_808824B4
lbl_fn_801B4D34_00000FB8:
    stfs f0, 0x48(r1)
    b lbl_fn_801B4D34_00000FD4
lbl_fn_801B4D34_00000FC0:
    fmr f2, f5
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801B4D34_00000FD4:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80882480
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
    lfs f0, lbl_80882484
    psq_l f1, 0x0(r30), 0, 0
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
    lfs f0, lbl_808824AC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801B4D34_000010F0
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80882480
    fcmpo cr0, f3, f0
    ble lbl_fn_801B4D34_000010E0
    lfs f0, lbl_808824B0
    b lbl_fn_801B4D34_000010E4
lbl_fn_801B4D34_000010E0:
    lfs f0, lbl_808824B4
lbl_fn_801B4D34_000010E4:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801B4D34_00001104
lbl_fn_801B4D34_000010F0:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801B4D34_00001104:
    addi r3, r1, 0x44
    lfs f3, lbl_80882480
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x5c
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f3
    lwz r4, 0x4(r31)
    lfs f0, 0x54(r1)
    stfs f0, 0x60(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r4), 0, 0
    stfs f2, 0x58(r1)
    lfs f2, 0x64(r1)
    stfs f3, 0x4c(r1)
    stfs f2, 0x53c(r4)
lbl_fn_801B4D34_00001140:
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801B4D34_00001154
    bl fn_801539E0
lbl_fn_801B4D34_00001154:
    lwz r3, 0x4(r31)
    li r4, 0x0
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801B4D34_00001178
    lwz r0, 0xc48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801B4D34_00001178
    li r4, 0x1
lbl_fn_801B4D34_00001178:
    cmpwi r4, 0x0
    beq lbl_fn_801B4D34_00001184
    bl fn_80154344
lbl_fn_801B4D34_00001184:
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_801B4D34_0000119C
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_801B4D34_0000119C:
    lwz r3, 0x4(r31)
    li r0, 0x1
    lfs f0, lbl_80882484
    li r4, 0x0
    stw r0, 0x3fc(r3)
    addi r30, r3, 0xb0
    lfs f1, lbl_80882480
    mr r3, r30
    lfs f2, lbl_80882488
    li r5, 0xb
    stfs f0, 0x24c(r30)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80882484
    mr r3, r31
    stfs f0, 0x238(r30)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_801B507C(void)
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
    lwz r5, 0x4(r3)
    addi r31, r5, 0xb0
    lfs f31, 0x2e4(r5)
    mr r3, r31
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801B507C_00001258
    li r3, 0x1
    b lbl_fn_801B507C_000012CC
lbl_fn_801B507C_00001258:
    lfs f2, 0x234(r31)
    lfs f0, lbl_808824B8
    lfs f1, lbl_808824AC
    fsubs f0, f2, f0
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f1
    bge lbl_fn_801B507C_00001290
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801B507C_000012C8
    lwz r4, 0x8(r30)
    bl fn_8054770C
    b lbl_fn_801B507C_000012C8
lbl_fn_801B507C_00001290:
    lfs f0, lbl_808824BC
    fsubs f0, f2, f0
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f1
    bge lbl_fn_801B507C_000012C8
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801B507C_000012C8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x70(r12)
    mtctr r12
    bctrl
lbl_fn_801B507C_000012C8:
    li r3, 0x0
lbl_fn_801B507C_000012CC:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801B515C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B515C_00001314
    cmpwi r4, 0x0
    ble lbl_fn_801B515C_00001314
    bl dtor_80084684
lbl_fn_801B515C_00001314:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B519C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B519C_00001354
    cmpwi r4, 0x0
    ble lbl_fn_801B519C_00001354
    bl dtor_80084684
lbl_fn_801B519C_00001354:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B51DC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B51DC_00001394
    cmpwi r4, 0x0
    ble lbl_fn_801B51DC_00001394
    bl dtor_80084684
lbl_fn_801B51DC_00001394:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B521C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B521C_000013D4
    cmpwi r4, 0x0
    ble lbl_fn_801B521C_000013D4
    bl dtor_80084684
lbl_fn_801B521C_000013D4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B525C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B525C_00001414
    cmpwi r4, 0x0
    ble lbl_fn_801B525C_00001414
    bl dtor_80084684
lbl_fn_801B525C_00001414:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B529C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r10, lbl_80780DE0@ha
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x24(r1)
    addi r10, r10, lbl_80780DE0@l
    lfs f2, 0x8(r5)
    li r9, 0x7b
    stw r31, 0x1c(r1)
    li r0, 0x1
    lfs f0, lbl_808824C0
    li r7, 0x0
    stw r30, 0x18(r1)
    mr r30, r5
    li r5, 0x146
    li r8, 0x1
    stw r29, 0x14(r1)
    mr r29, r3
    stfs f2, 0x10(r3)
    lfs f2, lbl_808824C4
    psq_st f1, 0x8(r3), 0, 0
    fmr f1, f0
    stw r6, 0x14(r3)
    li r6, 0x0
    stw r4, 0x4(r3)
    stw r10, 0x0(r3)
    stw r9, 0x560(r4)
    li r4, 0x0
    lwz r10, 0x4(r3)
    lwz r9, 0x5c0(r10)
    clrrwi r9, r9, 1
    stw r9, 0x5c0(r10)
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f0, lbl_808824C0
    mr r3, r29
    stfs f0, 0x238(r31)
    psq_l f1, 0x0(r30), 0, 0
    lwz r4, 0x4(r29)
    lfs f2, 0x8(r30)
    psq_st f1, 0x528(r4), 0, 0
    stfs f2, 0x530(r4)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801B5370(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    lwz r5, 0x4(r3)
    addi r31, r5, 0xb0
    lfs f31, 0x2e4(r5)
    mr r3, r31
    bl fn_80097D7C
    fdivs f11, f31, f1
    lwz r4, 0x14(r30)
    lfs f4, 0xc(r30)
    addi r5, r1, 0x2c
    lfs f0, 0x52c(r4)
    addi r6, r1, 0x20
    fsubs f9, f0, f4
    lfs f0, 0x528(r4)
    lfs f3, 0x8(r30)
    mr r3, r31
    lfs f6, 0x530(r4)
    li r4, 0x0
    fsubs f8, f0, f3
    lfs f5, 0x10(r30)
    fmuls f7, f9, f11
    lwz r7, 0x4(r30)
    fsubs f10, f6, f5
    stfs f8, 0x14(r1)
    fmuls f6, f8, f11
    lfs f0, lbl_808824C8
    fmuls f8, f10, f11
    stfs f9, 0x18(r1)
    fadds f4, f7, f4
    fadds f3, f6, f3
    fadds f5, f8, f5
    stfs f4, 0x30(r1)
    stfs f3, 0x2c(r1)
    fmr f2, f5
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x528(r7), 0, 0
    stfs f2, 0x530(r7)
    lwz r5, 0x14(r30)
    lwz r7, 0x4(r30)
    psq_l f1, 0x534(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f2, 0x53c(r5)
    lfs f3, 0x24(r1)
    stfs f10, 0x1c(r1)
    fadds f0, f3, f0
    stfs f6, 0x8(r1)
    stfs f0, 0x24(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x534(r7), 0, 0
    stfs f2, 0x53c(r7)
    stfs f7, 0xc(r1)
    lfs f31, 0x234(r31)
    stfs f8, 0x10(r1)
    stfs f5, 0x34(r1)
    stfs f2, 0x28(r1)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801B5370_00001654
    lis r5, lbl_8073B188@ha
    li r3, 0x10
    addi r5, r5, lbl_8073B188@l
    li r4, 0x0
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_801B5370_00001644
    lwz r4, 0x14(r30)
    lwz r5, 0x4(r30)
    bl fn_801B618C
    mr r4, r3
lbl_fn_801B5370_00001644:
    lwz r3, 0x14(r30)
    bl fn_80178208
    li r3, 0x1
    b lbl_fn_801B5370_00001658
lbl_fn_801B5370_00001654:
    li r3, 0x0
lbl_fn_801B5370_00001658:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_801B54E8(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lis r5, lbl_8073B188@ha
    li r7, 0x0
    stw r0, 0x84(r1)
    addi r5, r5, lbl_8073B188@l
    mr r6, r5
    stw r31, 0x7c(r1)
    mr r31, r3
    li r3, 0xc
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    stw r28, 0x70(r1)
    mr r28, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801B54E8_0000173C
    lwz r8, 0x4(r28)
    lis r4, lbl_80780D68@ha
    stw r8, 0x4(r3)
    addi r4, r4, lbl_80780D68@l
    lwz r5, 0x14(r28)
    li r7, 0x7c
    stw r4, 0x0(r3)
    li r0, 0x1
    lfs f0, lbl_808824C0
    li r4, 0x0
    stw r5, 0x8(r3)
    li r5, 0x147
    lfs f1, lbl_808824CC
    li r6, 0x1
    stw r7, 0x560(r8)
    li r7, 0x0
    lfs f2, lbl_808824C4
    li r8, 0x1
    lwz r10, 0x4(r3)
    lwz r9, 0x5c0(r10)
    ori r9, r9, 0x1
    stw r9, 0x5c0(r10)
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r29, r3, 0xb0
    mr r3, r29
    stfs f0, 0x24c(r29)
    bl fn_80097C08
    lfs f0, lbl_808824C0
    stfs f0, 0x238(r29)
lbl_fn_801B54E8_0000173C:
    lis r3, lbl_80780BA0@ha
    lwzu r5, lbl_80780BA0@l(r3)
    lwz r6, 0x4(r28)
    li r0, 0x0
    lwz r4, 0x4(r3)
    lwz r3, 0x8(r3)
    stw r6, 0x8(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F0F8
    stw r30, 0xc(r1)
    extsb. r0, r0
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r3, 0x24(r1)
    stw r5, 0x10(r1)
    stw r4, 0x14(r1)
    stw r3, 0x18(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r3, 0x58(r1)
    stw r6, 0x5c(r1)
    stw r30, 0x60(r1)
    bne lbl_fn_801B54E8_000017C0
    lis r6, lbl_807C7C50@ha
    lis r4, fn_801B5748@ha
    lis r3, fn_801B5778@ha
    li r0, 0x1
    addi r3, r3, fn_801B5778@l
    addi r5, r6, lbl_807C7C50@l
    addi r4, r4, fn_801B5748@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7C50@l(r6)
    stb r0, lbl_8087F0F8
lbl_fn_801B54E8_000017C0:
    lwz r7, 0x50(r1)
    addi r3, r1, 0x3c
    lwz r6, 0x54(r1)
    lwz r5, 0x58(r1)
    lwz r4, 0x5c(r1)
    lwz r0, 0x60(r1)
    stw r7, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801B54E8_00001894
    lwz r7, 0x3c(r1)
    li r3, 0x14
    lwz r6, 0x40(r1)
    lwz r5, 0x44(r1)
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r0, 0x38(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801B54E8_00001858
    lis r3, __files@ha
    lis r4, lbl_80780EB4@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80780EB4@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801B54E8_00001858:
    cmpwi r30, 0x0
    beq lbl_fn_801B54E8_00001888
    lwz r0, 0x28(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x30(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x34(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x38(r1)
    stw r0, 0x10(r30)
lbl_fn_801B54E8_00001888:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801B54E8_00001898
lbl_fn_801B54E8_00001894:
    li r0, 0x0
lbl_fn_801B54E8_00001898:
    cmpwi r0, 0x0
    beq lbl_fn_801B54E8_000018B0
    lis r3, lbl_807C7C50@ha
    addi r3, r3, lbl_807C7C50@l
    stw r3, 0x0(r31)
    b lbl_fn_801B54E8_000018B8
lbl_fn_801B54E8_000018B0:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_801B54E8_000018B8:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_801B5748(void)
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

asm void fn_801B5778(void)
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
    bne lbl_fn_801B5778_00001940
    lis r3, lbl_80780BF8@ha
    addi r3, r3, lbl_80780BF8@l
    stw r3, 0x0(r4)
    b lbl_fn_801B5778_00001A08
lbl_fn_801B5778_00001940:
    cmpwi r5, 0x0
    bne lbl_fn_801B5778_000019B8
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801B5778_00001980
    lis r3, __files@ha
    lis r4, lbl_80780EB4@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80780EB4@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801B5778_00001980:
    cmpwi r30, 0x0
    beq lbl_fn_801B5778_000019B0
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
lbl_fn_801B5778_000019B0:
    stw r30, 0x0(r29)
    b lbl_fn_801B5778_00001A08
lbl_fn_801B5778_000019B8:
    cmpwi r5, 0x1
    bne lbl_fn_801B5778_000019D4
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_801B5778_00001A08
lbl_fn_801B5778_000019D4:
    lwz r5, 0x0(r4)
    lis r3, lbl_80780BF8@ha
    lwz r4, lbl_80780BF8@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_801B5778_00001A00
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_801B5778_00001A08
lbl_fn_801B5778_00001A00:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801B5778_00001A08:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
