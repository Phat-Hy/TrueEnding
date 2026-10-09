#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_21(void);
extern void _savegpr_21(void);
extern void dtor_80084684(void);
extern void fn_8004ED34(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_8008BBD8(void);
extern void fn_80097C08(void);
extern void fn_80097D40(void);
extern void fn_80097D7C(void);
extern void fn_8010653C(void);
extern void fn_801065E4(void);
extern void fn_8010A308(void);
extern void fn_801446F0(void);
extern void fn_801539E0(void);
extern void fn_8015495C(void);
extern void fn_80178078(void);
extern void fn_80179D44(void);
extern void fn_80370174(void);
extern void fn_803C11A4(void);
extern void fn_803C1560(void);
extern void fn_803EA77C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_8073AD2C[];
extern u8 lbl_8073AD30[];
extern u8 lbl_80780330[];
extern u8 lbl_80780678[];
extern u8 lbl_80780688[];
extern u8 lbl_80780690[];
extern u8 lbl_80780708[];
extern u8 lbl_80780780[];
extern u8 lbl_807807F8[];
extern u8 lbl_80780898[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C7C40[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0E8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_808823B0;
extern u32 lbl_808823B4;
extern u32 lbl_808823B8;
extern u32 lbl_808823CC;
extern u32 lbl_80882408;
extern u32 lbl_80882410;
extern u32 lbl_80882414;
extern u32 lbl_80882418;
extern u32 lbl_80882420;
extern u32 lbl_80882424;
extern u32 lbl_80882428;
extern u32 lbl_8088242C;
extern u32 lbl_80882430;
extern u32 lbl_80882434;
extern u32 lbl_80882438;
extern u32 lbl_8088243C;
extern u32 lbl_80882440;
extern u32 lbl_80882444;
extern u32 lbl_80882448;
extern u32 lbl_8088244C;
extern u32 lbl_80882450;
extern u32 lbl_80882454;
extern u32 lbl_80882458;
extern u32 lbl_8088245C;
extern u32 lbl_80882460;
extern u32 lbl_80882464;
extern u32 lbl_80882468;
extern u32 lbl_8088246C;
extern u32 lbl_80882470;

/* Function declarations */
void fn_801B22AC(void);
void fn_801B242C(void);
void fn_801B2480(void);
void fn_801B2560(void);
void fn_801B26A4(void);
void fn_801B26C0(void);
void fn_801B26C8(void);
void fn_801B2708(void);
void fn_801B2748(void);
void fn_801B2788(void);
void fn_801B27C8(void);
void fn_801B2808(void);
void fn_801B2848(void);
void fn_801B2888(void);
void fn_801B2934(void);
void fn_801B2984(void);
void fn_801B2A30(void);
void fn_801B2A80(void);
void fn_801B2CC8(void);
void fn_801B2CF8(void);
void fn_801B2E14(void);
void fn_801B2E1C(void);
void fn_801B2E5C(void);
void fn_801B2E9C(void);
void fn_801B2EDC(void);
void fn_801B3098(void);

asm void fn_801B22AC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lfs f0, lbl_80882408
    stw r0, 0x54(r1)
    lfs f8, lbl_808823B4
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    li r30, 0x0
    stw r29, 0x34(r1)
    mr r29, r3
    lwz r4, lbl_8087EFA8
    lfs f3, 0x20(r3)
    lfs f4, 0x3a4(r4)
    lwz r5, 0x4(r3)
    fsubs f3, f3, f4
    addi r6, r5, 0xb0
    stfs f3, 0x20(r3)
    fdivs f0, f3, f0
    fcmpo cr0, f8, f0
    ble lbl_fn_801B22AC_0000005C
    b lbl_fn_801B22AC_00000060
lbl_fn_801B22AC_0000005C:
    fmr f8, f0
lbl_fn_801B22AC_00000060:
    lfs f3, 0x18(r3)
    addi r4, r1, 0x20
    lfs f4, 0xc(r3)
    lfs f0, 0x14(r3)
    fsubs f10, f3, f4
    lfs f3, 0x8(r3)
    lfs f6, 0x1c(r3)
    fsubs f9, f0, f3
    lfs f5, 0x10(r3)
    fmuls f7, f10, f8
    fsubs f11, f6, f5
    lwz r5, 0x4(r3)
    fmuls f6, f9, f8
    fadds f4, f7, f4
    lfs f0, lbl_808823B4
    fmuls f8, f11, f8
    fadds f3, f6, f3
    stfs f4, 0x24(r1)
    stfs f3, 0x20(r1)
    fadds f2, f8, f5
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x530(r5)
    lfs f3, 0x20(r3)
    stfs f9, 0x14(r1)
    fcmpo cr0, f3, f0
    stfs f10, 0x18(r1)
    stfs f11, 0x1c(r1)
    stfs f6, 0x8(r1)
    stfs f7, 0xc(r1)
    stfs f8, 0x10(r1)
    stfs f2, 0x28(r1)
    cror eq, lt, eq
    bne lbl_fn_801B22AC_000000F0
    lfs f0, lbl_808823B0
    stfs f0, 0x238(r6)
lbl_fn_801B22AC_000000F0:
    lfs f31, 0x234(r6)
    mr r3, r6
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801B22AC_00000158
    lwz r30, 0x4(r29)
    lwz r0, 0x564(r30)
    cmpwi r0, 0x2
    bne lbl_fn_801B22AC_00000154
    lwz r4, lbl_8087F430
    mr r3, r30
    lwz r31, 0x10d8(r4)
    bl fn_80179D44
    lwz r6, 0xd0c(r30)
    mr r5, r3
    lwz r7, 0xd04(r30)
    mr r3, r31
    lfs f1, lbl_808823CC
    addi r4, r30, 0x528
    li r8, 0x1
    bl fn_803C1560
    lwz r4, 0x4(r29)
    stw r3, 0xc64(r4)
lbl_fn_801B22AC_00000154:
    li r30, 0x1
lbl_fn_801B22AC_00000158:
    psq_l f31, 0x48(r1), 0, 0
    mr r3, r30
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_801B242C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_801B242C_000001AC
    lwz r4, 0x4(r31)
    mr r3, r0
    bl fn_801065E4
lbl_fn_801B242C_000001AC:
    lwz r3, 0x4(r31)
    lfs f2, 0x10(r31)
    psq_l f1, 0x8(r31), 0, 0
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B2480(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, lbl_80780330@ha
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x14(r1)
    addi r7, r7, lbl_80780330@l
    lfs f2, 0x8(r5)
    li r5, 0x0
    stw r31, 0xc(r1)
    li r0, 0x2
    stw r30, 0x8(r1)
    mr r30, r3
    psq_st f1, 0x8(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x10(r3)
    lfs f2, 0x8(r6)
    stw r4, 0x4(r3)
    stw r7, 0x0(r3)
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    stw r5, 0x20(r3)
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    lwz r0, 0x12a4(r3)
    addi r31, r3, 0xb0
    srwi. r0, r0, 31
    beq lbl_fn_801B2480_00000244
    bl fn_801539E0
lbl_fn_801B2480_00000244:
    li r0, 0x1
    stw r0, 0x34c(r31)
    lfs f0, lbl_808823B0
    mr r3, r31
    stfs f0, 0x24c(r31)
    li r4, 0x0
    lfs f1, lbl_808823B4
    li r5, 0x1ea
    lfs f2, lbl_808823B8
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_808823B0
    stfs f0, 0x238(r31)
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_801B2480_00000298
    lwz r4, 0x4(r30)
    addi r5, r4, 0xb0
    bl fn_8010653C
lbl_fn_801B2480_00000298:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B2560(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x20(r3)
    lwz r3, 0x4(r3)
    cmpwi r0, 0x0
    addi r31, r3, 0xb0
    beq lbl_fn_801B2560_000002FC
    cmpwi r0, 0x1
    beq lbl_fn_801B2560_00000354
    b lbl_fn_801B2560_000003D0
lbl_fn_801B2560_000002FC:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801B2560_000003D0
    lfs f0, lbl_808823B4
    li r0, 0x1
    stfs f0, 0x234(r31)
    stw r0, 0x20(r29)
    lwz r3, 0x4(r29)
    lfs f2, 0x10(r29)
    psq_l f1, 0x8(r29), 0, 0
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
    lwz r3, 0x4(r29)
    lfs f2, 0x1c(r29)
    psq_l f1, 0x14(r29), 0, 0
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    b lbl_fn_801B2560_000003D0
lbl_fn_801B2560_00000354:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801B2560_000003D0
    lwz r30, 0x4(r29)
    lwz r0, 0x564(r30)
    cmpwi r0, 0x2
    bne lbl_fn_801B2560_000003B8
    lwz r4, lbl_8087F430
    mr r3, r30
    lwz r31, 0x10d8(r4)
    bl fn_80179D44
    lwz r6, 0xd0c(r30)
    mr r5, r3
    lwz r7, 0xd04(r30)
    mr r3, r31
    lfs f1, lbl_808823CC
    addi r4, r30, 0x528
    li r8, 0x1
    bl fn_803C1560
    lwz r4, 0x4(r29)
    stw r3, 0xc64(r4)
lbl_fn_801B2560_000003B8:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_801B2560_000003CC
    lwz r4, 0x4(r29)
    bl fn_801065E4
lbl_fn_801B2560_000003CC:
    li r30, 0x1
lbl_fn_801B2560_000003D0:
    psq_l f31, 0x28(r1), 0, 0
    mr r3, r30
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801B26A4(void)
{
    nofralloc
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beqlr
    lwz r4, 0x4(r3)
    mr r3, r0
    b fn_801065E4
    blr
}

asm void fn_801B26C0(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_801B26C8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B26C8_00000444
    cmpwi r4, 0x0
    ble lbl_fn_801B26C8_00000444
    bl dtor_80084684
lbl_fn_801B26C8_00000444:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B2708(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B2708_00000484
    cmpwi r4, 0x0
    ble lbl_fn_801B2708_00000484
    bl dtor_80084684
lbl_fn_801B2708_00000484:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B2748(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B2748_000004C4
    cmpwi r4, 0x0
    ble lbl_fn_801B2748_000004C4
    bl dtor_80084684
lbl_fn_801B2748_000004C4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B2788(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B2788_00000504
    cmpwi r4, 0x0
    ble lbl_fn_801B2788_00000504
    bl dtor_80084684
lbl_fn_801B2788_00000504:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B27C8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B27C8_00000544
    cmpwi r4, 0x0
    ble lbl_fn_801B27C8_00000544
    bl dtor_80084684
lbl_fn_801B27C8_00000544:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B2808(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B2808_00000584
    cmpwi r4, 0x0
    ble lbl_fn_801B2808_00000584
    bl dtor_80084684
lbl_fn_801B2808_00000584:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B2848(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B2848_000005C4
    cmpwi r4, 0x0
    ble lbl_fn_801B2848_000005C4
    bl dtor_80084684
lbl_fn_801B2848_000005C4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B2888(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_80780780@ha
    li r6, 0x57
    stw r0, 0x24(r1)
    addi r7, r7, lbl_80780780@l
    li r0, 0x1
    lfs f0, lbl_80882410
    stw r31, 0x1c(r1)
    li r8, 0x1
    lfs f1, lbl_80882414
    stw r30, 0x18(r1)
    mr r30, r5
    lfs f2, lbl_80882418
    li r5, 0x218
    stw r29, 0x14(r1)
    mr r29, r3
    stw r7, 0x0(r3)
    li r7, 0x0
    stw r4, 0x4(r3)
    stw r6, 0x560(r4)
    li r4, 0x0
    li r6, 0x0
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f0, lbl_80882410
    stfs f0, 0x238(r31)
    lwz r3, 0x4(r29)
    bl fn_801446F0
    lwz r4, 0x4(r29)
    mr r3, r29
    stw r30, 0xf54(r4)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801B2934(void)
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

asm void fn_801B2984(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_80780708@ha
    li r6, 0x58
    stw r0, 0x24(r1)
    addi r7, r7, lbl_80780708@l
    li r0, 0x1
    lfs f0, lbl_80882410
    stw r31, 0x1c(r1)
    li r8, 0x1
    lfs f1, lbl_80882414
    stw r30, 0x18(r1)
    mr r30, r5
    lfs f2, lbl_80882418
    li r5, 0x21a
    stw r29, 0x14(r1)
    mr r29, r3
    stw r7, 0x0(r3)
    li r7, 0x0
    stw r4, 0x4(r3)
    stw r6, 0x560(r4)
    li r4, 0x0
    li r6, 0x0
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f0, lbl_80882410
    stfs f0, 0x238(r31)
    lwz r3, 0x4(r29)
    bl fn_801446F0
    lwz r4, 0x4(r29)
    mr r3, r29
    stw r30, 0xf50(r4)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801B2A30(void)
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

asm void fn_801B2A80(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lis r5, lbl_8073AD2C@ha
    li r7, 0x0
    stw r0, 0x84(r1)
    addi r5, r5, lbl_8073AD2C@l
    mr r6, r5
    stw r31, 0x7c(r1)
    mr r31, r3
    li r3, 0x8
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    stw r28, 0x70(r1)
    mr r28, r4
    li r4, 0x1
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801B2A80_00000880
    lwz r7, 0x4(r28)
    lis r4, lbl_80780690@ha
    stw r7, 0x4(r3)
    addi r4, r4, lbl_80780690@l
    li r6, 0x59
    li r0, 0x1
    stw r4, 0x0(r3)
    li r4, 0x0
    lfs f0, lbl_80882410
    li r5, 0x21b
    stw r6, 0x560(r7)
    li r6, 0x1
    lfs f1, lbl_80882414
    li r7, 0x0
    lwz r3, 0x4(r3)
    li r8, 0x1
    lfs f2, lbl_80882418
    stw r0, 0x3fc(r3)
    addi r29, r3, 0xb0
    mr r3, r29
    stfs f0, 0x24c(r29)
    bl fn_80097C08
    lfs f0, lbl_80882410
    stfs f0, 0x238(r29)
lbl_fn_801B2A80_00000880:
    lis r3, lbl_80780678@ha
    lwzu r5, lbl_80780678@l(r3)
    lwz r6, 0x4(r28)
    li r0, 0x0
    lwz r4, 0x4(r3)
    lwz r3, 0x8(r3)
    stw r6, 0x8(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F0E8
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
    bne lbl_fn_801B2A80_00000904
    lis r6, lbl_807C7C40@ha
    lis r4, fn_801B2CC8@ha
    lis r3, fn_801B2CF8@ha
    li r0, 0x1
    addi r3, r3, fn_801B2CF8@l
    addi r5, r6, lbl_807C7C40@l
    addi r4, r4, fn_801B2CC8@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7C40@l(r6)
    stb r0, lbl_8087F0E8
lbl_fn_801B2A80_00000904:
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
    bne lbl_fn_801B2A80_000009D8
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
    bne lbl_fn_801B2A80_0000099C
    lis r3, __files@ha
    lis r4, lbl_807807F8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807807F8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801B2A80_0000099C:
    cmpwi r30, 0x0
    beq lbl_fn_801B2A80_000009CC
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
lbl_fn_801B2A80_000009CC:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801B2A80_000009DC
lbl_fn_801B2A80_000009D8:
    li r0, 0x0
lbl_fn_801B2A80_000009DC:
    cmpwi r0, 0x0
    beq lbl_fn_801B2A80_000009F4
    lis r3, lbl_807C7C40@ha
    addi r3, r3, lbl_807C7C40@l
    stw r3, 0x0(r31)
    b lbl_fn_801B2A80_000009FC
lbl_fn_801B2A80_000009F4:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_801B2A80_000009FC:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_801B2CC8(void)
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

asm void fn_801B2CF8(void)
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
    bne lbl_fn_801B2CF8_00000A84
    lis r3, lbl_80780688@ha
    addi r3, r3, lbl_80780688@l
    stw r3, 0x0(r4)
    b lbl_fn_801B2CF8_00000B4C
lbl_fn_801B2CF8_00000A84:
    cmpwi r5, 0x0
    bne lbl_fn_801B2CF8_00000AFC
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801B2CF8_00000AC4
    lis r3, __files@ha
    lis r4, lbl_807807F8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807807F8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801B2CF8_00000AC4:
    cmpwi r30, 0x0
    beq lbl_fn_801B2CF8_00000AF4
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
lbl_fn_801B2CF8_00000AF4:
    stw r30, 0x0(r29)
    b lbl_fn_801B2CF8_00000B4C
lbl_fn_801B2CF8_00000AFC:
    cmpwi r5, 0x1
    bne lbl_fn_801B2CF8_00000B18
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_801B2CF8_00000B4C
lbl_fn_801B2CF8_00000B18:
    lwz r5, 0x0(r4)
    lis r3, lbl_80780688@ha
    lwz r4, lbl_80780688@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_801B2CF8_00000B44
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_801B2CF8_00000B4C
lbl_fn_801B2CF8_00000B44:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801B2CF8_00000B4C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801B2E14(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_801B2E1C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B2E1C_00000B98
    cmpwi r4, 0x0
    ble lbl_fn_801B2E1C_00000B98
    bl dtor_80084684
lbl_fn_801B2E1C_00000B98:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B2E5C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B2E5C_00000BD8
    cmpwi r4, 0x0
    ble lbl_fn_801B2E5C_00000BD8
    bl dtor_80084684
lbl_fn_801B2E5C_00000BD8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B2E9C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B2E9C_00000C18
    cmpwi r4, 0x0
    ble lbl_fn_801B2E9C_00000C18
    bl dtor_80084684
lbl_fn_801B2E9C_00000C18:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B2EDC(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r6, lbl_80780898@ha
    lfs f4, lbl_80882420
    stw r0, 0x64(r1)
    li r10, 0x0
    psq_l f1, 0x0(r5), 0, 0
    addi r6, r6, lbl_80780898@l
    stw r31, 0x5c(r1)
    li r9, 0x5a
    lfs f2, 0x8(r5)
    mr r31, r5
    stw r30, 0x58(r1)
    li r0, 0x1
    lfs f3, lbl_80882424
    mr r30, r4
    stw r29, 0x54(r1)
    mr r29, r3
    lfs f0, lbl_80882428
    li r5, 0x68
    psq_st f1, 0xc(r3), 0, 0
    fmr f1, f4
    li r7, 0x0
    li r8, 0x1
    stfs f2, 0x14(r3)
    lfs f2, lbl_8088242C
    stw r6, 0x0(r3)
    li r6, 0x0
    stw r4, 0x4(r3)
    stw r10, 0x18(r3)
    stfs f4, 0x1c(r3)
    stfs f4, 0x20(r3)
    stfs f4, 0x24(r3)
    stfs f3, 0x28(r3)
    stb r10, 0x2c(r3)
    stb r10, 0x2d(r3)
    stw r10, 0x30(r3)
    stw r9, 0x560(r4)
    li r4, 0x0
    lwz r3, 0x4(r3)
    addi r3, r3, 0xb0
    stw r0, 0x34c(r3)
    stfs f0, 0x24c(r3)
    stfs f0, 0x238(r3)
    bl fn_80097C08
    lwz r6, 0x4(r29)
    addi r4, r1, 0x2c
    lfs f7, lbl_80882420
    addi r5, r1, 0x38
    lfs f6, 0x570(r6)
    mr r3, r29
    stfs f6, 0x8(r29)
    lfs f4, lbl_80882424
    lfs f3, 0x4(r31)
    lfs f5, 0x8(r31)
    lfs f0, 0x0(r31)
    fmuls f9, f3, f4
    stfs f7, 0x10(r29)
    fmuls f8, f5, f4
    fmuls f10, f0, f4
    lfs f6, lbl_80882430
    lfs f3, 0x578(r6)
    lfs f4, 0x57c(r6)
    fmuls f11, f3, f6
    lfs f5, 0x574(r6)
    fmuls f7, f4, f6
    lfs f4, 0x530(r30)
    fmuls f12, f5, f6
    lfs f3, 0x52c(r30)
    fsubs f5, f3, f9
    lfs f3, 0x528(r30)
    fsubs f4, f4, f8
    stfs f11, 0xc(r1)
    fsubs f6, f3, f10
    lfs f0, lbl_80882434
    fsubs f13, f4, f7
    stfs f12, 0x8(r1)
    fsubs f3, f5, f11
    fsubs f11, f6, f12
    stfs f7, 0x10(r1)
    fmr f2, f13
    stfs f11, 0x2c(r1)
    stfs f3, 0x30(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x1c(r29), 0, 0
    stfs f2, 0x24(r29)
    psq_l f1, 0x574(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f2, 0x57c(r6)
    lfs f3, 0x3c(r1)
    stfs f2, 0x40(r1)
    frsp f2, f2
    fadds f0, f3, f0
    stfs f10, 0x14(r1)
    stfs f0, 0x3c(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x574(r6), 0, 0
    stfs f2, 0x57c(r6)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r0, 0x64(r1)
    stfs f9, 0x18(r1)
    stfs f8, 0x1c(r1)
    stfs f6, 0x20(r1)
    stfs f5, 0x24(r1)
    stfs f4, 0x28(r1)
    stfs f13, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_801B3098(void)
{
    nofralloc
    stwu r1, -0x430(r1)
    mflr r0
    stw r0, 0x434(r1)
    addi r11, r1, 0x380
    stfd f31, 0x420(r1)
    psq_st f31, 0x428(r1), 0, 0
    stfd f30, 0x410(r1)
    psq_st f30, 0x418(r1), 0, 0
    stfd f29, 0x400(r1)
    psq_st f29, 0x408(r1), 0, 0
    stfd f28, 0x3f0(r1)
    psq_st f28, 0x3f8(r1), 0, 0
    stfd f27, 0x3e0(r1)
    psq_st f27, 0x3e8(r1), 0, 0
    stfd f26, 0x3d0(r1)
    psq_st f26, 0x3d8(r1), 0, 0
    stfd f25, 0x3c0(r1)
    psq_st f25, 0x3c8(r1), 0, 0
    stfd f24, 0x3b0(r1)
    psq_st f24, 0x3b8(r1), 0, 0
    stfd f23, 0x3a0(r1)
    psq_st f23, 0x3a8(r1), 0, 0
    stfd f22, 0x390(r1)
    psq_st f22, 0x398(r1), 0, 0
    stfd f21, 0x380(r1)
    psq_st f21, 0x388(r1), 0, 0
    bl _savegpr_21
    lwz r5, 0x4(r3)
    mr r29, r3
    lfs f27, lbl_80882420
    lwz r0, 0x2dc(r5)
    addi r31, r5, 0xb0
    lfs f26, lbl_80882428
    cmpwi r0, 0x68
    bne lbl_fn_801B3098_00001980
    lwz r4, 0x18(r3)
    lfs f0, lbl_80882438
    addi r0, r4, 0x1
    stw r0, 0x18(r3)
    lfs f3, 0x578(r5)
    fcmpo cr0, f3, f0
    ble lbl_fn_801B3098_00000F0C
    fmr f1, f27
    lfs f2, lbl_8088242C
    mr r3, r31
    li r4, 0x0
    li r5, 0x69
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x4(r29)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 28
    bne lbl_fn_801B3098_00000F54
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_801B3098_00000F54
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_801B3098_00000F54
    lwz r3, lbl_8087F498
    li r5, 0xe
    lwz r4, 0x4(r29)
    li r6, 0x0
    lfs f1, lbl_80882428
    lfs f2, lbl_8088243C
    bl fn_803EA77C
    b lbl_fn_801B3098_00000F54
lbl_fn_801B3098_00000F0C:
    addi r4, r1, 0x224
    psq_l f1, 0x574(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f4, 0xc(r3)
    lfs f5, 0x224(r1)
    lfs f3, 0x228(r1)
    lfs f0, 0x10(r3)
    fadds f4, f5, f4
    lfs f2, 0x57c(r5)
    fadds f3, f3, f0
    stfs f4, 0x224(r1)
    lfs f0, 0x14(r3)
    stfs f3, 0x228(r1)
    fadds f2, f2, f0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x574(r5), 0, 0
    stfs f2, 0x22c(r1)
    stfs f2, 0x57c(r5)
lbl_fn_801B3098_00000F54:
    lwz r4, 0x4(r29)
    lwz r0, 0x48(r4)
    cmpwi r0, 0x2
    beq lbl_fn_801B3098_00001A78
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801B3098_00001A78
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801B3098_00001A78
    lfs f4, 0x52c(r4)
    lfs f3, 0x20(r29)
    lfs f0, lbl_80882440
    fsubs f7, f4, f3
    lfs f6, 0x530(r4)
    lfs f5, 0x24(r29)
    lfs f4, 0x528(r4)
    fsubs f5, f6, f5
    lfs f3, 0x1c(r29)
    fcmpo cr0, f7, f0
    stfs f7, 0x21c(r1)
    fsubs f0, f4, f3
    stfs f5, 0x220(r1)
    stfs f0, 0x218(r1)
    mfcr r30
    lwz r4, lbl_8087F610
    srwi r30, r30, 31
    lwz r3, 0x30(r29)
    li r0, 0x2d
    cmpwi r4, 0x0
    beq lbl_fn_801B3098_00000FD8
    li r0, 0x19
lbl_fn_801B3098_00000FD8:
    cmpw r3, r0
    ble lbl_fn_801B3098_00001070
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_801B3098_0000106C
    lfs f1, lbl_80882420
    mr r3, r31
    lfs f2, lbl_8088242C
    li r4, 0x0
    li r5, 0x69
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x4(r29)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 28
    bne lbl_fn_801B3098_00001060
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_801B3098_00001060
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_801B3098_00001060
    lwz r3, lbl_8087F498
    li r5, 0xe
    lwz r4, 0x4(r29)
    li r6, 0x0
    lfs f1, lbl_80882428
    lfs f2, lbl_8088243C
    bl fn_803EA77C
lbl_fn_801B3098_00001060:
    li r0, 0x1
    stb r0, 0x2d(r29)
    b lbl_fn_801B3098_00001070
lbl_fn_801B3098_0000106C:
    li r30, 0x1
lbl_fn_801B3098_00001070:
    lwz r3, 0x4(r29)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801B3098_00001208
    cmpwi r30, 0x0
    bne lbl_fn_801B3098_00001208
    lfs f2, 0x530(r3)
    addi r23, r1, 0x200
    psq_l f1, 0x528(r3), 0, 0
    addi r25, r1, 0x20c
    psq_st f1, 0x0(r23), 0, 0
    lfs f0, lbl_80882444
    lfs f3, 0x204(r1)
    psq_st f1, 0x0(r25), 0, 0
    fsubs f0, f3, f0
    lwz r24, lbl_8087EE98
    stfs f2, 0x214(r1)
    stfs f2, 0x208(r1)
    stfs f0, 0x204(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r24
    mr r5, r25
    mr r6, r23
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_801B3098_00001208
    lis r3, lbl_8073AD30@ha
    lfs f31, lbl_80882448
    lfd f28, lbl_8073AD30@l(r3)
    addi r27, r1, 0x1a0
    lfs f30, lbl_80882420
    addi r26, r1, 0x194
    lfs f29, lbl_8088244C
    addi r24, r1, 0x1ac
    lfs f25, lbl_80882444
    li r30, 0x1
    li r21, 0x0
    lis r28, 0x4330
lbl_fn_801B3098_00001118:
    xoris r0, r21, 0x8000
    stw r0, 0x344(r1)
    addi r3, r1, 0x2c0
    li r4, 0x79
    stw r28, 0x340(r1)
    lfd f0, 0x340(r1)
    fsubs f0, f0, f28
    fmuls f1, f31, f0
    bl fn_805F8E70
    stfs f30, 0x194(r1)
    fmr f2, f29
    mr r4, r27
    mr r5, r27
    stfs f30, 0x198(r1)
    addi r3, r1, 0x2c0
    psq_l f1, 0x0(r26), 0, 0
    stfs f29, 0x19c(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x1a8(r1)
    bl fn_805F93C0
    lwz r3, 0x4(r29)
    lfs f4, 0x1a4(r1)
    lfs f5, 0x52c(r3)
    lfs f3, 0x528(r3)
    fadds f5, f5, f4
    lfs f0, 0x1a0(r1)
    lfs f4, 0x530(r3)
    fadds f6, f3, f0
    lfs f0, 0x1a8(r1)
    stfs f5, 0x1b0(r1)
    fadds f3, f4, f0
    lwz r22, lbl_8087EE98
    stfs f6, 0x1ac(r1)
    psq_l f1, 0x0(r24), 0, 0
    fmr f2, f3
    psq_st f1, 0x0(r23), 0, 0
    lfs f0, 0x204(r1)
    stfs f2, 0x214(r1)
    frsp f2, f2
    fsubs f0, f0, f25
    stfs f3, 0x1b4(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x208(r1)
    stfs f0, 0x204(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r22
    mr r5, r25
    mr r6, r23
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801B3098_000011FC
    li r30, 0x0
    b lbl_fn_801B3098_00001208
lbl_fn_801B3098_000011FC:
    addi r21, r21, 0x1
    cmpwi r21, 0x4
    blt lbl_fn_801B3098_00001118
lbl_fn_801B3098_00001208:
    cmpwi r30, 0x0
    beq lbl_fn_801B3098_00001A78
    lwz r3, lbl_8087F430
    li r4, 0x12b
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_801B3098_00001A78
    lwz r4, 0x4(r29)
    lis r3, lbl_807C7030@ha
    lfs f2, 0x24(r29)
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x1c(r29), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    stfs f2, 0x530(r4)
    lwz r4, 0x4(r29)
    lfs f2, 0x8(r3)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x574(r4), 0, 0
    stfs f2, 0x57c(r4)
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x14(r29)
    lwz r5, 0x4(r29)
    psq_st f1, 0xc(r29), 0, 0
    lwz r0, 0x48(r5)
    cmpwi r0, 0x0
    beq lbl_fn_801B3098_000013B4
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_801B3098_00001288
    lwz r22, 0x48(r3)
    b lbl_fn_801B3098_0000128C
lbl_fn_801B3098_00001288:
    li r22, 0x0
lbl_fn_801B3098_0000128C:
    cmpwi r22, 0x0
    beq lbl_fn_801B3098_00001A78
    bl fn_80680CF8
    lis r4, 0x4178
    lis r0, 0x4330
    addi r5, r4, 0x749f
    stw r0, 0x340(r1)
    mulhw r5, r5, r3
    lis r4, lbl_8073AD30@ha
    lfd f5, lbl_8073AD30@l(r4)
    lfs f3, lbl_80882454
    li r4, 0x79
    lfs f0, lbl_80882450
    srawi r0, r5, 8
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0x290
    xoris r0, r0, 0x8000
    stw r0, 0x344(r1)
    lfd f4, 0x340(r1)
    fsubs f4, f4, f5
    fdivs f3, f4, f3
    fmuls f1, f0, f3
    bl fn_805F8E70
    lfs f3, lbl_80882420
    addi r23, r1, 0x290
    lfs f0, lbl_80882428
    addi r3, r1, 0x260
    stfs f3, 0x164(r1)
    li r4, 0x79
    stfs f3, 0x168(r1)
    stfs f0, 0x16c(r1)
    lfs f1, 0x538(r22)
    bl fn_805F8E70
    addi r4, r1, 0x164
    addi r3, r1, 0x260
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x164
    addi r4, r1, 0x170
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r23
    lfs f2, 0x16c(r1)
    mr r5, r4
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x178(r1)
    bl fn_805F93C0
    lfs f4, lbl_80882424
    addi r3, r1, 0x188
    lfs f3, 0x174(r1)
    lfs f0, 0x170(r1)
    fmuls f6, f3, f4
    lfs f5, 0x178(r1)
    fmuls f7, f0, f4
    lfs f0, 0x528(r22)
    fmuls f4, f5, f4
    lfs f3, 0x52c(r22)
    fadds f5, f3, f6
    lfs f3, 0x530(r22)
    fadds f0, f0, f7
    lwz r4, 0x4(r29)
    stfs f5, 0x18c(r1)
    fadds f2, f3, f4
    stfs f0, 0x188(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    stfs f7, 0x17c(r1)
    stfs f6, 0x180(r1)
    stfs f4, 0x184(r1)
    stfs f2, 0x190(r1)
    stfs f2, 0x530(r4)
    b lbl_fn_801B3098_00001A78
lbl_fn_801B3098_000013B4:
    lwz r0, lbl_8087EE98
    cmpwi r0, 0x0
    beq lbl_fn_801B3098_00001908
    lfs f3, lbl_80882420
    addi r3, r1, 0x230
    lfs f0, lbl_80882428
    li r4, 0x79
    stfs f3, 0x1f4(r1)
    stfs f3, 0x1f8(r1)
    stfs f0, 0x1fc(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x1f4
    addi r3, r1, 0x230
    mr r5, r4
    bl fn_805F93C0
    lfs f3, lbl_80882420
    addi r3, r1, 0x1e8
    lfs f0, lbl_80882428
    addi r4, r1, 0x1f4
    stfs f3, 0x1e8(r1)
    addi r5, r1, 0x1dc
    stfs f0, 0x1ec(r1)
    stfs f3, 0x1f0(r1)
    bl fn_805F99B0
    addi r3, r1, 0x1dc
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80882458
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_801B3098_00001440
    addi r3, r1, 0x1dc
    mr r4, r3
    bl fn_805F98D0
lbl_fn_801B3098_00001440:
    lis r3, lbl_8073AD30@ha
    li r0, 0x0
    stw r0, 0x324(r1)
    li r21, 0x0
    lfd f28, lbl_8073AD30@l(r3)
    lis r30, 0x4330
    stw r0, 0x328(r1)
    lfs f29, lbl_8088245C
    stw r0, 0x32c(r1)
    lfs f30, lbl_8088244C
    stw r0, 0x330(r1)
    lfs f31, lbl_80882460
lbl_fn_801B3098_00001470:
    addi r0, r21, 0x1
    stw r30, 0x340(r1)
    xoris r0, r0, 0x8000
    lfs f10, 0x1f0(r1)
    stw r0, 0x344(r1)
    addi r4, r1, 0x2f0
    lfs f9, 0x1ec(r1)
    addi r5, r1, 0x158
    lfd f0, 0x340(r1)
    addi r6, r1, 0x140
    lfs f8, 0x1e8(r1)
    lis r7, 0x8000
    fsubs f0, f0, f28
    lfs f7, 0x1fc(r1)
    lfs f6, 0x1f8(r1)
    li r8, 0x0
    lfs f5, 0x1f4(r1)
    li r9, 0x0
    fmuls f25, f29, f0
    lfs f4, 0x24(r29)
    lfs f3, 0x20(r29)
    lfs f0, 0x1c(r29)
    fmuls f11, f10, f25
    lwz r3, lbl_8087EE98
    fmuls f12, f9, f25
    fmuls f13, f8, f25
    stfs f11, 0x118(r1)
    fmuls f7, f7, f25
    fmuls f6, f6, f25
    stfs f13, 0x110(r1)
    fmuls f5, f5, f25
    fadds f8, f4, f7
    stfs f12, 0x114(r1)
    fadds f9, f3, f6
    fadds f10, f0, f5
    stfs f5, 0x128(r1)
    fmuls f24, f11, f30
    fmuls f23, f12, f30
    stfs f6, 0x12c(r1)
    fmuls f22, f13, f30
    stfs f24, 0x124(r1)
    fsubs f24, f8, f24
    fadds f4, f4, f11
    stfs f23, 0x120(r1)
    fsubs f23, f9, f23
    fadds f3, f3, f12
    stfs f22, 0x11c(r1)
    fsubs f22, f10, f22
    fadds f0, f0, f13
    stfs f7, 0x130(r1)
    stfs f10, 0x134(r1)
    stfs f9, 0x138(r1)
    stfs f8, 0x13c(r1)
    stfs f22, 0x140(r1)
    stfs f23, 0x144(r1)
    stfs f24, 0x148(r1)
    stfs f13, 0x14c(r1)
    stfs f12, 0x150(r1)
    stfs f11, 0x154(r1)
    stfs f0, 0x158(r1)
    stfs f3, 0x15c(r1)
    stfs f4, 0x160(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801B3098_000015A8
    addi r3, r1, 0x318
    addi r4, r1, 0x1e8
    bl fn_805F9990
    fcmpo cr0, f1, f31
    cror eq, gt, eq
    bne lbl_fn_801B3098_000015A8
    addi r3, r1, 0x300
    lwz r4, 0x4(r29)
    lfs f2, 0x308(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    stfs f2, 0x530(r4)
    b lbl_fn_801B3098_00001908
lbl_fn_801B3098_000015A8:
    lfs f0, 0x1f0(r1)
    addi r4, r1, 0x2f0
    lfs f3, 0x1ec(r1)
    addi r5, r1, 0x104
    fmuls f11, f0, f25
    lfs f0, 0x1e8(r1)
    fmuls f12, f3, f25
    lfs f4, 0x1fc(r1)
    fmuls f13, f0, f25
    lfs f3, 0x1f8(r1)
    fmuls f5, f4, f25
    lfs f0, 0x1f4(r1)
    fmuls f6, f3, f25
    lfs f4, 0x24(r29)
    fmuls f7, f0, f25
    lfs f3, 0x20(r29)
    fsubs f8, f4, f5
    lfs f0, 0x1c(r29)
    fmuls f22, f11, f30
    stfs f13, 0xbc(r1)
    fsubs f9, f3, f6
    lwz r3, lbl_8087EE98
    fsubs f10, f0, f7
    stfs f12, 0xc0(r1)
    fmuls f23, f12, f30
    addi r6, r1, 0xec
    fmuls f24, f13, f30
    stfs f11, 0xc4(r1)
    stfs f23, 0xcc(r1)
    fsubs f21, f8, f22
    fsubs f23, f9, f23
    lis r7, 0x8000
    stfs f24, 0xc8(r1)
    fsubs f24, f10, f24
    fadds f4, f4, f11
    fadds f3, f3, f12
    fadds f0, f0, f13
    stfs f22, 0xd0(r1)
    li r8, 0x0
    li r9, 0x0
    stfs f7, 0xd4(r1)
    stfs f6, 0xd8(r1)
    stfs f5, 0xdc(r1)
    stfs f10, 0xe0(r1)
    stfs f9, 0xe4(r1)
    stfs f8, 0xe8(r1)
    stfs f24, 0xec(r1)
    stfs f23, 0xf0(r1)
    stfs f21, 0xf4(r1)
    stfs f13, 0xf8(r1)
    stfs f12, 0xfc(r1)
    stfs f11, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f3, 0x108(r1)
    stfs f4, 0x10c(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801B3098_000016C4
    addi r3, r1, 0x318
    addi r4, r1, 0x1e8
    bl fn_805F9990
    fcmpo cr0, f1, f31
    cror eq, gt, eq
    bne lbl_fn_801B3098_000016C4
    addi r3, r1, 0x300
    lwz r4, 0x4(r29)
    lfs f2, 0x308(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    stfs f2, 0x530(r4)
    b lbl_fn_801B3098_00001908
lbl_fn_801B3098_000016C4:
    lfs f0, 0x1f0(r1)
    addi r4, r1, 0x2f0
    lfs f3, 0x1ec(r1)
    addi r5, r1, 0xb0
    fmuls f11, f0, f25
    lfs f0, 0x1e8(r1)
    fmuls f12, f3, f25
    lfs f4, 0x1e4(r1)
    fmuls f13, f0, f25
    lfs f3, 0x1e0(r1)
    fmuls f5, f4, f25
    lfs f0, 0x1dc(r1)
    fmuls f6, f3, f25
    lfs f4, 0x24(r29)
    fmuls f7, f0, f25
    lfs f3, 0x20(r29)
    fadds f8, f4, f5
    lfs f0, 0x1c(r29)
    fmuls f21, f11, f30
    stfs f13, 0x68(r1)
    fadds f9, f3, f6
    lwz r3, lbl_8087EE98
    fadds f10, f0, f7
    stfs f12, 0x6c(r1)
    fmuls f22, f12, f30
    addi r6, r1, 0x98
    fmuls f23, f13, f30
    stfs f11, 0x70(r1)
    stfs f22, 0x78(r1)
    fsubs f24, f8, f21
    fsubs f22, f9, f22
    lis r7, 0x8000
    stfs f23, 0x74(r1)
    fsubs f23, f10, f23
    fadds f4, f4, f11
    fadds f3, f3, f12
    fadds f0, f0, f13
    stfs f21, 0x7c(r1)
    li r8, 0x0
    li r9, 0x0
    stfs f7, 0x80(r1)
    stfs f6, 0x84(r1)
    stfs f5, 0x88(r1)
    stfs f10, 0x8c(r1)
    stfs f9, 0x90(r1)
    stfs f8, 0x94(r1)
    stfs f23, 0x98(r1)
    stfs f22, 0x9c(r1)
    stfs f24, 0xa0(r1)
    stfs f13, 0xa4(r1)
    stfs f12, 0xa8(r1)
    stfs f11, 0xac(r1)
    stfs f0, 0xb0(r1)
    stfs f3, 0xb4(r1)
    stfs f4, 0xb8(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801B3098_000017E0
    addi r3, r1, 0x318
    addi r4, r1, 0x1e8
    bl fn_805F9990
    fcmpo cr0, f1, f31
    cror eq, gt, eq
    bne lbl_fn_801B3098_000017E0
    addi r3, r1, 0x300
    lwz r4, 0x4(r29)
    lfs f2, 0x308(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    stfs f2, 0x530(r4)
    b lbl_fn_801B3098_00001908
lbl_fn_801B3098_000017E0:
    lfs f0, 0x1f0(r1)
    addi r4, r1, 0x2f0
    lfs f3, 0x1ec(r1)
    addi r5, r1, 0x5c
    fmuls f11, f0, f25
    lfs f0, 0x1e8(r1)
    fmuls f12, f3, f25
    lfs f4, 0x1e4(r1)
    fmuls f13, f0, f25
    lfs f3, 0x1e0(r1)
    fmuls f5, f4, f25
    lfs f0, 0x1dc(r1)
    fmuls f6, f3, f25
    lfs f4, 0x24(r29)
    fmuls f7, f0, f25
    lfs f3, 0x20(r29)
    fsubs f8, f4, f5
    lfs f0, 0x1c(r29)
    fmuls f21, f11, f30
    stfs f13, 0x14(r1)
    fsubs f9, f3, f6
    lwz r3, lbl_8087EE98
    fsubs f10, f0, f7
    stfs f12, 0x18(r1)
    fmuls f22, f12, f30
    addi r6, r1, 0x44
    fmuls f23, f13, f30
    stfs f11, 0x1c(r1)
    stfs f22, 0x24(r1)
    fsubs f24, f8, f21
    fsubs f22, f9, f22
    lis r7, 0x8000
    stfs f23, 0x20(r1)
    fsubs f23, f10, f23
    fadds f4, f4, f11
    fadds f3, f3, f12
    fadds f0, f0, f13
    stfs f21, 0x28(r1)
    li r8, 0x0
    li r9, 0x0
    stfs f7, 0x2c(r1)
    stfs f6, 0x30(r1)
    stfs f5, 0x34(r1)
    stfs f10, 0x38(r1)
    stfs f9, 0x3c(r1)
    stfs f8, 0x40(r1)
    stfs f23, 0x44(r1)
    stfs f22, 0x48(r1)
    stfs f24, 0x4c(r1)
    stfs f13, 0x50(r1)
    stfs f12, 0x54(r1)
    stfs f11, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f3, 0x60(r1)
    stfs f4, 0x64(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801B3098_000018FC
    addi r3, r1, 0x318
    addi r4, r1, 0x1e8
    bl fn_805F9990
    fcmpo cr0, f1, f31
    cror eq, gt, eq
    bne lbl_fn_801B3098_000018FC
    addi r3, r1, 0x300
    lwz r4, 0x4(r29)
    lfs f2, 0x308(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    stfs f2, 0x530(r4)
    b lbl_fn_801B3098_00001908
lbl_fn_801B3098_000018FC:
    addi r21, r21, 0x1
    cmpwi r21, 0x4
    blt lbl_fn_801B3098_00001470
lbl_fn_801B3098_00001908:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801B3098_0000191C
    lwz r22, 0x10d8(r3)
    b lbl_fn_801B3098_00001920
lbl_fn_801B3098_0000191C:
    li r22, 0x0
lbl_fn_801B3098_00001920:
    cmpwi r22, 0x0
    beq lbl_fn_801B3098_00001A78
    lwz r4, 0x4(r29)
    mr r3, r22
    lfs f1, lbl_80882464
    li r5, 0x0
    addi r4, r4, 0x528
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_803C1560
    cmpwi r3, 0x0
    ble lbl_fn_801B3098_00001A78
    mr r5, r3
    mr r4, r22
    addi r3, r1, 0x8
    bl fn_803C11A4
    addi r3, r1, 0x8
    lwz r4, 0x4(r29)
    lfs f2, 0x10(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    stfs f2, 0x530(r4)
    b lbl_fn_801B3098_00001A78
lbl_fn_801B3098_00001980:
    lwz r0, 0x18(r3)
    mr r3, r31
    li r4, 0x69
    xori r0, r0, 0x8
    srawi r5, r0, 1
    rlwinm r0, r0, 0, 28, 28
    subf r0, r0, r5
    srwi r21, r0, 31
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_801B3098_000019D0
    lfs f21, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80882424
    fsubs f0, f1, f0
    fcmpo cr0, f21, f0
    cror eq, gt, eq
    bne lbl_fn_801B3098_000019D4
lbl_fn_801B3098_000019D0:
    li r21, 0x1
lbl_fn_801B3098_000019D4:
    lwz r3, 0x4(r29)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801B3098_00001A1C
    bl fn_80178078
    lfs f0, lbl_80882468
    fcmpo cr0, f1, f0
    ble lbl_fn_801B3098_00001A1C
    lfs f21, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80882424
    fsubs f0, f1, f0
    fcmpo cr0, f21, f0
    cror eq, gt, eq
    bne lbl_fn_801B3098_00001A1C
    li r21, 0x1
lbl_fn_801B3098_00001A1C:
    cmpwi r21, 0x0
    beq lbl_fn_801B3098_00001A68
    lwz r7, 0x4(r29)
    lwz r3, 0x48(r7)
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    bgt lbl_fn_801B3098_00001A60
    lwz r3, 0x638(r7)
    li r0, 0x0
    stw r3, 0x63c(r7)
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    stw r0, 0x638(r7)
    li r7, 0x1
    lwz r3, 0x4(r29)
    bl fn_8015495C
lbl_fn_801B3098_00001A60:
    li r3, 0x1
    b lbl_fn_801B3098_00001B54
lbl_fn_801B3098_00001A68:
    addi r3, r29, 0xc
    bl fn_805F9940
    lfs f0, lbl_8088246C
    fmuls f27, f0, f1
lbl_fn_801B3098_00001A78:
    lwz r3, 0x4(r29)
    addi r6, r1, 0x1d0
    lbz r5, 0x2c(r29)
    lwz r12, 0x0(r3)
    addi r4, r3, 0x534
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    psq_st f1, 0x0(r6), 0, 0
    fmr f1, f27
    lwz r12, 0x34(r12)
    stfs f2, 0x1d8(r1)
    fmr f2, f26
    mtctr r12
    bctrl
    lwz r3, 0x4(r29)
    lfs f3, 0x1d4(r1)
    lfs f0, 0x52c(r3)
    lfs f5, 0x28(r29)
    fsubs f4, f3, f0
    lfs f3, lbl_80882470
    lfs f0, lbl_8088246C
    fsubs f4, f4, f5
    fmadds f3, f3, f4, f5
    stfs f3, 0x28(r29)
    lwz r3, lbl_8087EFA8
    lfs f4, 0x3a4(r3)
    fmuls f0, f0, f4
    fcmpo cr0, f3, f0
    bge lbl_fn_801B3098_00001B00
    lwz r3, 0x30(r29)
    li r0, 0x1
    stb r0, 0x2c(r29)
    addi r0, r3, 0x1
    stw r0, 0x30(r29)
lbl_fn_801B3098_00001B00:
    lwz r0, 0x22c(r31)
    cmpwi r0, 0x68
    bne lbl_fn_801B3098_00001B50
    addi r3, r1, 0x1d0
    lfs f2, 0x1d8(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x1c4
    psq_st f1, 0x0(r4), 0, 0
    addi r5, r1, 0x1b8
    lwz r3, lbl_8087F048
    stfs f2, 0x1cc(r1)
    cmpwi r3, 0x0
    lwz r6, 0x4(r29)
    psq_l f1, 0x528(r6), 0, 0
    lfs f2, 0x530(r6)
    stfs f2, 0x1c0(r1)
    psq_st f1, 0x0(r5), 0, 0
    beq lbl_fn_801B3098_00001B50
    lfs f1, 0x5b0(r6)
    bl fn_8010A308
lbl_fn_801B3098_00001B50:
    li r3, 0x0
lbl_fn_801B3098_00001B54:
    addi r11, r1, 0x380
    psq_l f31, 0x428(r1), 0, 0
    lfd f31, 0x420(r1)
    psq_l f30, 0x418(r1), 0, 0
    lfd f30, 0x410(r1)
    psq_l f29, 0x408(r1), 0, 0
    lfd f29, 0x400(r1)
    psq_l f28, 0x3f8(r1), 0, 0
    lfd f28, 0x3f0(r1)
    psq_l f27, 0x3e8(r1), 0, 0
    lfd f27, 0x3e0(r1)
    psq_l f26, 0x3d8(r1), 0, 0
    lfd f26, 0x3d0(r1)
    psq_l f25, 0x3c8(r1), 0, 0
    lfd f25, 0x3c0(r1)
    psq_l f24, 0x3b8(r1), 0, 0
    lfd f24, 0x3b0(r1)
    psq_l f23, 0x3a8(r1), 0, 0
    lfd f23, 0x3a0(r1)
    psq_l f22, 0x398(r1), 0, 0
    lfd f22, 0x390(r1)
    psq_l f21, 0x388(r1), 0, 0
    lfd f21, 0x380(r1)
    bl _restgpr_21
    lwz r0, 0x434(r1)
    mtlr r0
    addi r1, r1, 0x430
    blr
}
