#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _savegpr_21(void);
extern void dtor_80084684(void);
extern void fn_8000D7DC(void);
extern void fn_80084C24(void);
extern void fn_8008BBD8(void);
extern void fn_80099010(void);
extern void fn_8011C074(void);
extern void fn_8011E200(void);
extern void fn_801656A4(void);
extern void fn_80167C34(void);
extern void fn_8016EB48(void);
extern void fn_8017039C(void);
extern void fn_80170F20(void);
extern void fn_80171DB0(void);
extern void fn_8017B3C0(void);
extern void fn_8017B434(void);
extern void fn_8017BC4C(void);
extern void fn_805F9940(void);
extern void fn_805F99F0(void);
extern void fn_80682428(void);
extern void fn_806958E0(void);
extern void fn_80695A50(void);
extern void fn_80695B00(void);
extern void fn_8072D210(void);

/* External data declarations */
extern u8 lbl_8077A150[];
extern u8 lbl_8077A160[];
extern u8 lbl_807C7AF0[];

/* Small data declarations */
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F070;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80881798;
extern u32 lbl_808817A4;
extern u32 lbl_808817A8;
extern u32 lbl_808817AC;
extern u32 lbl_808817B0;
extern u32 lbl_808817B4;
extern u32 lbl_808817B8;
extern u32 lbl_808817BC;
extern u32 lbl_808817C0;
extern u32 lbl_808817C4;
extern u32 lbl_808817C8;
extern u32 lbl_808817CC;
extern u32 lbl_808817D0;
extern u32 lbl_808817D4;
extern u32 lbl_808817D8;
extern u32 lbl_808817DC;

/* Function declarations */
void fn_8011CC30(void);
void fn_8011CCA0(void);
void fn_8011CD1C(void);
void fn_8011CD84(void);
void fn_8011D1FC(void);
void fn_8011D21C(void);
void fn_8011D24C(void);
void fn_8011D2E0(void);
void fn_8011D320(void);
void fn_8011D394(void);
void fn_8011D410(void);
void fn_8011D424(void);
void fn_8011D760(void);
void fn_8011D78C(void);
void fn_8011D844(void);

asm void fn_8011CC30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    li r5, 0x14
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_8011C074
    lhz r3, 0xe0(r29)
    li r4, -0x1
    rlwimi r3, r31, 13, 18, 18
    li r0, 0x1
    sth r30, 0xf0(r29)
    sth r4, 0xf6(r29)
    sth r4, 0xf4(r29)
    sth r4, 0xf2(r29)
    sth r3, 0xe0(r29)
    stw r0, 0xec(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8011CCA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r7
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r5
    li r5, 0x15
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_8011C074
    lhz r3, 0xe0(r28)
    li r4, -0x1
    rlwimi r3, r31, 13, 18, 18
    li r0, 0x2
    sth r29, 0xf0(r28)
    sth r30, 0xf2(r28)
    sth r4, 0xf6(r28)
    sth r4, 0xf4(r28)
    sth r3, 0xe0(r28)
    stw r0, 0xec(r28)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8011CD1C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r28, r5
    mr r27, r3
    mr r29, r6
    mr r30, r7
    mr r31, r8
    li r5, 0x16
    bl fn_8011C074
    lhz r3, 0xe0(r27)
    rlwimi r3, r31, 13, 18, 18
    li r4, -0x1
    li r0, 0x3
    sth r28, 0xf0(r27)
    sth r29, 0xf2(r27)
    sth r30, 0xf4(r27)
    sth r4, 0xf6(r27)
    sth r3, 0xe0(r27)
    stw r0, 0xec(r27)
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8011CD84(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r3
    stw r29, 0x34(r1)
    beq lbl_fn_8011CD84_000001E8
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_8011CD84_000001E8
    lfs f2, lbl_80881798
    li r3, 0x0
    stfs f2, 0x20(r1)
    li r6, 0xc
    addi r8, r1, 0x20
    li r0, 0x96
    stfs f2, 0x24(r1)
    addi r7, r4, 0x147c
    psq_l f1, 0x0(r8), 0, 0
    sth r6, 0x14(r1)
    sth r3, 0x16(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    stfs f2, 0x28(r1)
    stw r5, 0x2c(r1)
    sth r6, 0x1470(r4)
    sth r3, 0x1472(r4)
    stw r3, 0x1474(r4)
    stw r0, 0x1478(r4)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x1484(r4)
    stw r5, 0x1488(r4)
    b lbl_fn_8011CD84_000005B0
lbl_fn_8011CD84_000001E8:
    lbz r29, 0x0(r3)
    li r6, 0x0
    lwz r0, 0x20(r3)
    stb r5, 0x0(r3)
    extsb r29, r29
    clrrwi r0, r0, 1
    sth r6, 0x2(r3)
    sth r6, 0x4(r3)
    stw r0, 0x20(r3)
    lwz r0, 0x140c(r4)
    cmpwi r0, 0x0
    blt lbl_fn_8011CD84_00000228
    lwz r0, 0x12a8(r4)
    extrwi. r0, r0, 1, 17
    beq lbl_fn_8011CD84_00000228
    li r6, 0x1
lbl_fn_8011CD84_00000228:
    cmpwi r6, 0x0
    beq lbl_fn_8011CD84_00000240
    mr r3, r31
    bl fn_80171DB0
    mr r3, r31
    bl fn_8017BC4C
lbl_fn_8011CD84_00000240:
    lbz r0, 0x0(r30)
    extsb. r0, r0
    beq lbl_fn_8011CD84_00000280
    cmpwi r0, 0x2
    beq lbl_fn_8011CD84_00000298
    cmpwi r0, 0x3
    beq lbl_fn_8011CD84_000002B8
    cmpwi r0, 0x4
    beq lbl_fn_8011CD84_000002D0
    cmpwi r0, 0x5
    beq lbl_fn_8011CD84_00000440
    cmpwi r0, 0x6
    beq lbl_fn_8011CD84_00000450
    cmpwi r0, 0x1
    beq lbl_fn_8011CD84_00000508
    b lbl_fn_8011CD84_000005B0
lbl_fn_8011CD84_00000280:
    lwz r0, 0x14a8(r31)
    oris r0, r0, 0x400
    stw r0, 0x14a8(r31)
    lbz r0, 0x0(r30)
    stb r0, 0x1(r30)
    b lbl_fn_8011CD84_000005B0
lbl_fn_8011CD84_00000298:
    cmpwi r29, 0x3
    beq lbl_fn_8011CD84_000002AC
    mr r3, r31
    li r4, 0x3c
    bl fn_801656A4
lbl_fn_8011CD84_000002AC:
    li r0, 0x0
    sth r0, 0x6(r30)
    b lbl_fn_8011CD84_000005B0
lbl_fn_8011CD84_000002B8:
    mr r3, r31
    li r4, 0x3c
    bl fn_801656A4
    li r0, 0xa
    stw r0, 0x12c8(r31)
    b lbl_fn_8011CD84_000005B0
lbl_fn_8011CD84_000002D0:
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8011CD84_000002E4
    lwz r29, 0x48(r3)
    b lbl_fn_8011CD84_000002E8
lbl_fn_8011CD84_000002E4:
    li r29, 0x0
lbl_fn_8011CD84_000002E8:
    cmpwi r29, 0x0
    beq lbl_fn_8011CD84_0000042C
    lwz r4, 0x8(r30)
    cmpwi r4, 0x0
    ble lbl_fn_8011CD84_0000030C
    mr r3, r31
    li r5, 0x0
    bl fn_8017039C
    b lbl_fn_8011CD84_00000414
lbl_fn_8011CD84_0000030C:
    lfs f3, 0x530(r29)
    addi r3, r1, 0x8
    lfs f0, 0x530(r31)
    lfs f5, 0x52c(r29)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r29)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9940
    lfs f0, 0x5b0(r31)
    lfs f3, 0x5b0(r29)
    lfs f4, lbl_808817A4
    fadds f5, f3, f0
    lfs f3, 0xd90(r31)
    lfs f0, lbl_80881798
    fcmpo cr0, f3, f0
    fadds f2, f4, f5
    ble lbl_fn_8011CD84_00000398
    lha r0, 0x6(r30)
    cmpwi r0, 0x1
    bge lbl_fn_8011CD84_000003E8
    lfs f3, lbl_808817A8
    lfs f0, lbl_808817AC
    fmuls f2, f3, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_8011CD84_0000038C
    b lbl_fn_8011CD84_000003E8
lbl_fn_8011CD84_0000038C:
    fmr f2, f0
    b lbl_fn_8011CD84_000003E8
    b lbl_fn_8011CD84_000003E8
lbl_fn_8011CD84_00000398:
    lha r0, 0x6(r30)
    cmpwi r0, 0x1
    bge lbl_fn_8011CD84_000003E8
    lfs f0, lbl_808817B0
    fcmpo cr0, f1, f0
    bge lbl_fn_8011CD84_000003CC
    lfs f0, lbl_808817AC
    fcmpo cr0, f0, f2
    ble lbl_fn_8011CD84_000003C0
    b lbl_fn_8011CD84_000003C4
lbl_fn_8011CD84_000003C0:
    fmr f0, f2
lbl_fn_8011CD84_000003C4:
    fmr f2, f0
    b lbl_fn_8011CD84_000003E8
lbl_fn_8011CD84_000003CC:
    lfs f0, lbl_808817B4
    fmuls f0, f0, f1
    fcmpo cr0, f0, f2
    ble lbl_fn_8011CD84_000003E0
    b lbl_fn_8011CD84_000003E4
lbl_fn_8011CD84_000003E0:
    fmr f0, f2
lbl_fn_8011CD84_000003E4:
    fmr f2, f0
lbl_fn_8011CD84_000003E8:
    lfs f0, lbl_808817B8
    fcmpo cr0, f1, f0
    bge lbl_fn_8011CD84_00000400
    lwz r0, 0x20(r30)
    ori r0, r0, 0x1
    stw r0, 0x20(r30)
lbl_fn_8011CD84_00000400:
    lfs f1, lbl_80881798
    mr r3, r31
    addi r4, r29, 0x528
    li r5, 0x8
    bl fn_80170F20
lbl_fn_8011CD84_00000414:
    li r0, 0xa
    stw r0, 0x12c8(r31)
    lha r3, 0x6(r30)
    addi r0, r3, 0x1
    sth r0, 0x6(r30)
    b lbl_fn_8011CD84_000005B0
lbl_fn_8011CD84_0000042C:
    mr r3, r30
    mr r4, r31
    li r5, 0x3
    bl fn_8011CD84
    b lbl_fn_8011CD84_000005B0
lbl_fn_8011CD84_00000440:
    mr r3, r31
    li r4, 0x5a
    bl fn_801656A4
    b lbl_fn_8011CD84_000005B0
lbl_fn_8011CD84_00000450:
    lwz r0, 0x1400(r31)
    cmplwi r0, 0x2
    blt lbl_fn_8011CD84_00000488
    mr r3, r31
    bl fn_8017B3C0
    cmpwi r3, 0x0
    beq lbl_fn_8011CD84_00000488
    mr r3, r31
    bl fn_8017B434
    li r3, 0x2
    li r0, 0x0
    stb r3, 0x0(r30)
    sth r0, 0x6(r30)
    b lbl_fn_8011CD84_000005B0
lbl_fn_8011CD84_00000488:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8011CD84_0000049C
    lwz r4, 0x10d8(r3)
    b lbl_fn_8011CD84_000004A0
lbl_fn_8011CD84_0000049C:
    li r4, 0x0
lbl_fn_8011CD84_000004A0:
    cmpwi r4, 0x0
    beq lbl_fn_8011CD84_000005B0
    lwz r0, 0x88(r4)
    li r6, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8011CD84_000005B0
lbl_fn_8011CD84_000004BC:
    lwz r3, 0x8c(r4)
    lwz r0, 0x58(r31)
    add r5, r3, r6
    lwzx r3, r3, r6
    cmpw r3, r0
    bne lbl_fn_8011CD84_000004FC
    lfs f1, 0x14(r5)
    addi r4, r5, 0x4
    lfs f2, lbl_808817BC
    mr r3, r31
    li r5, 0x0
    bl fn_80170F20
    lwz r0, 0x20(r30)
    ori r0, r0, 0x1
    stw r0, 0x20(r30)
    b lbl_fn_8011CD84_000005B0
lbl_fn_8011CD84_000004FC:
    addi r6, r6, 0x148
    bdnz lbl_fn_8011CD84_000004BC
    b lbl_fn_8011CD84_000005B0
lbl_fn_8011CD84_00000508:
    mr r3, r31
    bl fn_80171DB0
    lwz r3, 0x7e0(r31)
    rlwinm r0, r3, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_8011CD84_00000540
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
    mr r3, r31
    bl fn_80167C34
    b lbl_fn_8011CD84_00000560
lbl_fn_8011CD84_00000540:
    rlwinm r0, r3, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_8011CD84_00000560
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
lbl_fn_8011CD84_00000560:
    lwz r0, 0x14a8(r31)
    oris r0, r0, 0x400
    stw r0, 0x14a8(r31)
    lwz r0, 0x20(r30)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8011CD84_0000058C
    lwz r0, 0x20(r30)
    ori r0, r0, 0x4
    stw r0, 0x20(r30)
    b lbl_fn_8011CD84_00000598
lbl_fn_8011CD84_0000058C:
    lwz r0, 0x20(r30)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x20(r30)
lbl_fn_8011CD84_00000598:
    lwz r0, 0x20(r30)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8011CD84_000005B0
    li r0, 0xa
    stw r0, 0x12c8(r31)
lbl_fn_8011CD84_000005B0:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8011D1FC(void)
{
    nofralloc
    lbz r4, 0x0(r3)
    li r0, 0x1
    li r3, 0x0
    extsb r5, r4
    srawi r4, r5, 31
    subfc r0, r0, r5
    adde r3, r4, r3
    blr
}

asm void fn_8011D21C(void)
{
    nofralloc
    lbz r0, 0x0(r3)
    li r3, 0x1
    li r4, 0x0
    extsb r6, r0
    srawi r5, r6, 31
    subfc r0, r3, r6
    adde. r0, r5, r4
    beqlr
    cmpwi r6, 0x1
    beqlr
    li r3, 0x0
    blr
}

asm void fn_8011D24C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, fn_8011D2E0@ha
    lis r5, fn_8011D394@ha
    stw r0, 0x14(r1)
    addi r4, r4, fn_8011D2E0@l
    addi r5, r5, fn_8011D394@l
    li r6, 0x20
    stw r31, 0xc(r1)
    li r31, 0x0
    li r7, 0x2
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x0(r3)
    addi r3, r3, 0x4
    bl fn_806958E0
    lis r4, fn_8011D410@ha
    lis r5, fn_8000D7DC@ha
    addi r3, r30, 0x44
    li r6, 0xc
    addi r4, r4, fn_8011D410@l
    addi r5, r5, fn_8000D7DC@l
    li r7, 0x2
    bl fn_806958E0
    lfs f1, lbl_808817C0
    mr r3, r30
    lfs f0, lbl_808817C4
    stw r31, 0x5c(r30)
    stfs f1, 0x60(r30)
    stb r31, 0x78(r30)
    stfs f0, 0x7c(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011D2E0(void)
{
    nofralloc
    lfs f2, lbl_808817C8
    li r4, 0x0
    lfs f1, lbl_808817C4
    li r0, 0x1
    lfs f0, lbl_808817CC
    stfs f2, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f2, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f1, 0x10(r3)
    stw r4, 0x14(r3)
    stw r4, 0x18(r3)
    stb r4, 0x1c(r3)
    stb r0, 0x1d(r3)
    stb r0, 0x1e(r3)
    blr
}

asm void fn_8011D320(void)
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
    beq lbl_fn_8011D320_00000748
    addic. r0, r3, 0x8
    beq lbl_fn_8011D320_00000738
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8011D320_0000072C
    bl fn_80084C24
lbl_fn_8011D320_0000072C:
    li r0, 0x0
    stw r0, 0xc(r30)
    stw r0, 0x8(r30)
lbl_fn_8011D320_00000738:
    cmpwi r31, 0x0
    ble lbl_fn_8011D320_00000748
    mr r3, r30
    bl dtor_80084684
lbl_fn_8011D320_00000748:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011D394(void)
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
    beq lbl_fn_8011D394_000007C4
    addic. r0, r3, 0x14
    beq lbl_fn_8011D394_000007B4
    lwz r3, 0x18(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8011D394_000007A8
    lis r4, fn_8011D320@ha
    addi r4, r4, fn_8011D320@l
    bl fn_80695A50
lbl_fn_8011D394_000007A8:
    li r0, 0x0
    stw r0, 0x18(r30)
    stw r0, 0x14(r30)
lbl_fn_8011D394_000007B4:
    cmpwi r31, 0x0
    ble lbl_fn_8011D394_000007C4
    mr r3, r30
    bl dtor_80084684
lbl_fn_8011D394_000007C4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011D410(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_8011D424(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    lis r7, lbl_8077A150@ha
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    mr r31, r3
    stw r4, 0x0(r3)
    li r4, 0x0
    lbz r0, lbl_8087F070
    lwzu r6, lbl_8077A150@l(r7)
    extsb. r0, r0
    stw r6, 0x34(r1)
    lwz r5, 0x4(r7)
    lwz r0, 0x8(r7)
    stw r5, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r6, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r0, 0x48(r1)
    stw r3, 0x4c(r1)
    stw r4, 0x78(r1)
    bne lbl_fn_8011D424_00000880
    lis r6, lbl_807C7AF0@ha
    lis r4, fn_8011D760@ha
    lis r3, fn_8011D78C@ha
    li r0, 0x1
    addi r3, r3, fn_8011D78C@l
    addi r5, r6, lbl_807C7AF0@l
    addi r4, r4, fn_8011D760@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7AF0@l(r6)
    stb r0, lbl_8087F070
lbl_fn_8011D424_00000880:
    lwz r6, 0x40(r1)
    addi r3, r1, 0x18
    lwz r5, 0x44(r1)
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r6, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r0, 0x24(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8011D424_000008F4
    addic. r0, r1, 0x7c
    lwz r5, 0x18(r1)
    lwz r4, 0x1c(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    beq lbl_fn_8011D424_000008EC
    stw r5, 0x7c(r1)
    stw r4, 0x80(r1)
    stw r3, 0x84(r1)
    stw r0, 0x88(r1)
lbl_fn_8011D424_000008EC:
    li r0, 0x1
    b lbl_fn_8011D424_000008F8
lbl_fn_8011D424_000008F4:
    li r0, 0x0
lbl_fn_8011D424_000008F8:
    cmpwi r0, 0x0
    beq lbl_fn_8011D424_00000910
    lis r3, lbl_807C7AF0@ha
    addi r3, r3, lbl_807C7AF0@l
    stw r3, 0x78(r1)
    b lbl_fn_8011D424_00000918
lbl_fn_8011D424_00000910:
    li r0, 0x0
    stw r0, 0x78(r1)
lbl_fn_8011D424_00000918:
    lwz r6, 0x78(r1)
    li r0, 0x0
    lwz r31, 0x0(r31)
    cmpwi r6, 0x0
    stw r0, 0x64(r1)
    beq lbl_fn_8011D424_0000094C
    stw r6, 0x64(r1)
    addi r3, r1, 0x7c
    addi r4, r1, 0x68
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8011D424_0000094C:
    addi r3, r31, 0x370
    addi r0, r1, 0x64
    cmplw r3, r0
    beq lbl_fn_8011D424_00000AA4
    lwz r3, 0x64(r1)
    li r0, 0x0
    stw r0, 0x50(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8011D424_00000990
    lwz r6, 0x64(r1)
    addi r3, r1, 0x68
    stw r6, 0x50(r1)
    addi r4, r1, 0x54
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8011D424_00000990:
    addi r3, r31, 0x370
    addi r0, r1, 0x64
    cmplw r3, r0
    beq lbl_fn_8011D424_00000A00
    lwz r3, 0x64(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8011D424_000009D4
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8011D424_000009CC
    addi r3, r1, 0x68
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8011D424_000009CC:
    li r0, 0x0
    stw r0, 0x64(r1)
lbl_fn_8011D424_000009D4:
    lwz r0, 0x370(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8011D424_00000A00
    stw r0, 0x64(r1)
    addi r3, r31, 0x374
    addi r4, r1, 0x68
    li r5, 0x0
    lwz r6, 0x370(r31)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8011D424_00000A00:
    addi r3, r1, 0x50
    addi r0, r31, 0x370
    cmplw r3, r0
    beq lbl_fn_8011D424_00000A70
    lwz r3, 0x370(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8011D424_00000A44
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8011D424_00000A3C
    addi r3, r31, 0x374
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8011D424_00000A3C:
    li r0, 0x0
    stw r0, 0x370(r31)
lbl_fn_8011D424_00000A44:
    lwz r0, 0x50(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8011D424_00000A70
    stw r0, 0x370(r31)
    addi r3, r1, 0x54
    addi r4, r31, 0x374
    li r5, 0x0
    lwz r6, 0x50(r1)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8011D424_00000A70:
    lwz r3, 0x50(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8011D424_00000AA4
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8011D424_00000A9C
    addi r3, r1, 0x54
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8011D424_00000A9C:
    li r0, 0x0
    stw r0, 0x50(r1)
lbl_fn_8011D424_00000AA4:
    addic. r3, r1, 0x64
    beq lbl_fn_8011D424_00000AE0
    lwz r4, 0x64(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8011D424_00000AE0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8011D424_00000AD8
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8011D424_00000AD8:
    li r0, 0x0
    stw r0, 0x64(r1)
lbl_fn_8011D424_00000AE0:
    addic. r3, r1, 0x78
    beq lbl_fn_8011D424_00000B1C
    lwz r4, 0x78(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8011D424_00000B1C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8011D424_00000B14
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8011D424_00000B14:
    li r0, 0x0
    stw r0, 0x78(r1)
lbl_fn_8011D424_00000B1C:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8011D760(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r12, r3
    stw r0, 0x14(r1)
    lwz r3, 0xc(r3)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011D78C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_8011D78C_00000B90
    lis r3, lbl_8077A160@ha
    addi r3, r3, lbl_8077A160@l
    stw r3, 0x0(r4)
    b lbl_fn_8011D78C_00000BFC
lbl_fn_8011D78C_00000B90:
    cmpwi r5, 0x0
    bne lbl_fn_8011D78C_00000BC4
    cmpwi r4, 0x0
    beq lbl_fn_8011D78C_00000BFC
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_8011D78C_00000BFC
lbl_fn_8011D78C_00000BC4:
    cmpwi r5, 0x1
    beq lbl_fn_8011D78C_00000BFC
    lwz r5, 0x0(r4)
    lis r3, lbl_8077A160@ha
    lwz r4, lbl_8077A160@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8011D78C_00000BF4
    stw r30, 0x0(r31)
    b lbl_fn_8011D78C_00000BFC
lbl_fn_8011D78C_00000BF4:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8011D78C_00000BFC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011D844(void)
{
    nofralloc
    stwu r1, -0x7a0(r1)
    mflr r0
    stw r0, 0x7a4(r1)
    addi r11, r1, 0x720
    stfd f31, 0x790(r1)
    psq_st f31, 0x798(r1), 0, 0
    stfd f30, 0x780(r1)
    psq_st f30, 0x788(r1), 0, 0
    stfd f29, 0x770(r1)
    psq_st f29, 0x778(r1), 0, 0
    stfd f28, 0x760(r1)
    psq_st f28, 0x768(r1), 0, 0
    stfd f27, 0x750(r1)
    psq_st f27, 0x758(r1), 0, 0
    stfd f26, 0x740(r1)
    psq_st f26, 0x748(r1), 0, 0
    stfd f25, 0x730(r1)
    psq_st f25, 0x738(r1), 0, 0
    stfd f24, 0x720(r1)
    psq_st f24, 0x728(r1), 0, 0
    bl _savegpr_21
    lwz r0, 0x5c(r3)
    mr r27, r4
    lfs f1, lbl_808817C0
    mr r28, r3
    cntlzw r4, r0
    srwi r0, r4, 5
    mulli r0, r0, 0xc
    clrrwi r4, r4, 5
    add r4, r3, r4
    add r5, r3, r0
    addi r4, r4, 0x4
    addi r5, r5, 0x44
    bl fn_8011E200
    lwz r4, 0x5c(r28)
    mr r3, r28
    lfs f1, lbl_808817C0
    mulli r0, r4, 0xc
    slwi r4, r4, 5
    add r4, r28, r4
    add r5, r28, r0
    addi r4, r4, 0x4
    addi r5, r5, 0x44
    bl fn_8011E200
    lwz r5, 0x5c(r28)
    li r4, 0x0
    cntlzw r0, r5
    clrrwi r6, r0, 5
    add r3, r28, r6
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8011D844_00000CF4
    lbz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8011D844_00000CF4
    li r4, 0x1
lbl_fn_8011D844_00000CF4:
    cmpwi r4, 0x0
    beq lbl_fn_8011D844_00000D30
    slwi r0, r5, 5
    lfs f3, lbl_808817C4
    add r3, r28, r0
    lfs f0, lbl_808817D0
    lfs f4, 0xc(r3)
    fsubs f3, f4, f3
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8011D844_00000D30
    add r3, r28, r6
    li r0, 0x0
    stb r0, 0x20(r3)
lbl_fn_8011D844_00000D30:
    lfs f4, 0x60(r28)
    lfs f0, lbl_808817C8
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8011D844_00000DFC
    lfs f0, 0x64(r28)
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8011D844_00000D64
    fdivs f3, f4, f0
    lfs f0, 0x70(r28)
    fmuls f1, f0, f3
    b lbl_fn_8011D844_00000D7C
lbl_fn_8011D844_00000D64:
    lfs f0, 0x6c(r28)
    lfs f3, 0x68(r28)
    fsubs f4, f0, f4
    lfs f0, 0x70(r28)
    fdivs f3, f4, f3
    fmuls f1, f0, f3
lbl_fn_8011D844_00000D7C:
    lbz r0, 0x78(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8011D844_00000DB8
    lfs f3, 0x6c(r28)
    lfs f0, 0x68(r28)
    lfs f4, 0x60(r28)
    fsubs f0, f3, f0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8011D844_00000DB8
    lfs f0, 0x64(r28)
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8011D844_00000DB8
    lfs f1, 0x70(r28)
lbl_fn_8011D844_00000DB8:
    lfs f0, lbl_808817D4
    fcmpo cr0, f1, f0
    ble lbl_fn_8011D844_00000DE8
    lwz r4, 0x5c(r28)
    mr r3, r28
    mulli r0, r4, 0xc
    slwi r4, r4, 5
    add r4, r28, r4
    add r5, r28, r0
    addi r4, r4, 0x4
    addi r5, r5, 0x44
    bl fn_8011E200
lbl_fn_8011D844_00000DE8:
    lwz r3, lbl_8087EFA8
    lfs f0, 0x60(r28)
    lfs f3, 0x3a4(r3)
    fsubs f0, f0, f3
    stfs f0, 0x60(r28)
lbl_fn_8011D844_00000DFC:
    lwz r4, 0x5c(r28)
    cntlzw r0, r4
    srwi r0, r0, 5
    mulli r0, r0, 0xc
    add r3, r28, r0
    lwz r0, 0x44(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8011D844_00000E30
    mulli r0, r4, 0xc
    add r3, r28, r0
    lwz r0, 0x44(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8011D844_00001578
lbl_fn_8011D844_00000E30:
    lwz r3, 0x0(r28)
    li r5, 0x0
    lfs f4, lbl_808817C4
    addi r8, r1, 0x140
    lwz r31, 0x16c(r3)
    addi r7, r1, 0x14c
    addi r6, r1, 0x158
    addi r9, r1, 0x100
    stw r5, 0x164(r1)
    li r3, 0x0
    b lbl_fn_8011D844_00000FCC
lbl_fn_8011D844_00000E5C:
    lwz r0, 0x4c(r4)
    addi r10, r1, 0x168
    lwz r4, 0x5c(r28)
    add r11, r0, r5
    lwz r0, 0x164(r1)
    psq_l f1, 0x8(r11), 0, 0
    cntlzw r4, r4
    psq_st f1, 0x0(r8), 0, 0
    clrrwi r4, r4, 5
    psq_l f1, 0x14(r11), 0, 0
    add r4, r28, r4
    psq_st f1, 0x0(r7), 0, 0
    mulli r0, r0, 0x2c
    psq_l f1, 0x20(r11), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f2, 0x10(r11)
    add. r10, r10, r0
    stfs f2, 0x148(r1)
    lfs f2, 0x1c(r11)
    stfs f2, 0x154(r1)
    lfs f2, 0x28(r11)
    lfs f3, 0x15c(r1)
    lfs f0, 0x158(r1)
    fsubs f27, f2, f4
    fsubs f28, f3, f4
    lfs f9, 0xc(r4)
    fsubs f29, f0, f4
    lfs f3, 0x140(r1)
    fmuls f31, f27, f9
    fmuls f30, f28, f9
    fmuls f13, f29, f9
    lfs f0, 0x144(r1)
    fmuls f8, f3, f9
    lfs f6, 0x148(r1)
    fmuls f7, f0, f9
    fadds f12, f31, f4
    fadds f11, f30, f4
    lfs f5, 0x14c(r1)
    fadds f10, f13, f4
    lfs f3, 0x150(r1)
    lfs f0, 0x154(r1)
    stfs f2, 0x160(r1)
    fmr f2, f12
    lwz r4, 0x0(r11)
    fmuls f6, f6, f9
    lwz r0, 0x4(r11)
    fmuls f5, f5, f9
    stfs f10, 0x100(r1)
    stfs f11, 0x104(r1)
    fmuls f3, f3, f9
    fmuls f0, f0, f9
    psq_l f1, 0x0(r9), 0, 0
    stw r4, 0x138(r1)
    stw r0, 0x13c(r1)
    stfs f8, 0x140(r1)
    stfs f7, 0x144(r1)
    stfs f6, 0x148(r1)
    stfs f5, 0x14c(r1)
    stfs f3, 0x150(r1)
    stfs f0, 0x154(r1)
    stfs f4, 0xf4(r1)
    stfs f4, 0xf8(r1)
    stfs f4, 0xfc(r1)
    stfs f29, 0xac(r1)
    stfs f28, 0xb0(r1)
    stfs f27, 0xb4(r1)
    stfs f13, 0xa0(r1)
    stfs f30, 0xa4(r1)
    stfs f31, 0xa8(r1)
    stfs f12, 0x108(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x160(r1)
    beq lbl_fn_8011D844_00000FB8
    stw r4, 0x0(r10)
    fmr f2, f6
    psq_l f1, 0x0(r8), 0, 0
    stw r0, 0x4(r10)
    psq_st f1, 0x8(r10), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x10(r10)
    fmr f2, f0
    psq_st f1, 0x14(r10), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x1c(r10)
    lfs f2, 0x160(r1)
    psq_st f1, 0x20(r10), 0, 0
    stfs f2, 0x28(r10)
lbl_fn_8011D844_00000FB8:
    lwz r4, 0x164(r1)
    addi r3, r3, 0x1
    addi r5, r5, 0x2c
    addi r0, r4, 0x1
    stw r0, 0x164(r1)
lbl_fn_8011D844_00000FCC:
    lwz r0, 0x5c(r28)
    cntlzw r0, r0
    srwi r0, r0, 5
    mulli r0, r0, 0xc
    add r4, r28, r0
    lwz r0, 0x44(r4)
    cmplw r3, r0
    blt lbl_fn_8011D844_00000E5C
    lfs f5, lbl_808817C4
    addi r24, r1, 0x168
    addi r5, r1, 0xe8
    addi r4, r1, 0x114
    addi r7, r1, 0xdc
    addi r6, r1, 0x120
    addi r3, r1, 0x12c
    addi r8, r1, 0xd0
    addi r9, r1, 0xc4
    li r10, 0x0
    li r11, 0x0
    b lbl_fn_8011D844_0000138C
lbl_fn_8011D844_0000101C:
    lwz r12, 0x4c(r12)
    addi r23, r1, 0x164
    lwz r26, 0x164(r1)
    li r0, 0x0
    add r22, r12, r11
    lwzx r25, r12, r11
    psq_l f1, 0x8(r22), 0, 0
    li r21, 0x0
    lfs f2, 0x10(r22)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x14(r22), 0, 0
    stfs f2, 0x11c(r1)
    lfs f2, 0x1c(r22)
    psq_st f1, 0x0(r6), 0, 0
    lwz r12, 0x4(r22)
    stfs f2, 0x128(r1)
    psq_l f1, 0x20(r22), 0, 0
    lfs f2, 0x28(r22)
    stw r25, 0x10c(r1)
    stw r12, 0x110(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x134(r1)
    mtctr r26
    cmplwi r26, 0x0
    ble lbl_fn_8011D844_00001258
lbl_fn_8011D844_00001080:
    lwz r22, 0x5c(r28)
    lwz r25, 0x4(r23)
    mulli r12, r22, 0xc
    add r12, r28, r12
    lwz r12, 0x4c(r12)
    lwzx r12, r12, r11
    cmplw r25, r12
    bne lbl_fn_8011D844_0000124C
    mulli r0, r21, 0x2c
    slwi r12, r22, 5
    lfs f0, 0x11c(r1)
    add r12, r28, r12
    lfs f4, 0x118(r1)
    add r25, r24, r0
    lfs f8, 0x10(r25)
    lfs f7, 0xc(r25)
    fsubs f29, f0, f8
    lfs f0, 0x114(r1)
    lfs f3, 0x8(r25)
    fsubs f28, f4, f7
    lfs f9, 0xc(r12)
    fsubs f27, f0, f3
    lfs f0, 0x128(r1)
    fmuls f13, f29, f9
    lfs f6, 0x1c(r25)
    fmuls f12, f28, f9
    fmuls f11, f27, f9
    fsubs f24, f0, f6
    lfs f0, 0x124(r1)
    fadds f10, f13, f8
    lfs f4, 0x18(r25)
    fadds f8, f12, f7
    fsubs f25, f0, f4
    fadds f7, f11, f3
    lfs f3, 0x120(r1)
    lfs f0, 0x14(r25)
    fmuls f31, f24, f9
    fmuls f30, f25, f9
    fsubs f26, f3, f0
    fadds f6, f31, f6
    stfs f7, 0xe8(r1)
    fadds f3, f30, f4
    fmuls f4, f26, f9
    stfs f8, 0xec(r1)
    fmr f2, f10
    psq_l f1, 0x0(r5), 0, 0
    fadds f0, f4, f0
    stfs f2, 0x11c(r1)
    fmr f2, f6
    stfs f3, 0xe0(r1)
    stfs f0, 0xdc(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f27, 0x94(r1)
    stfs f28, 0x98(r1)
    stfs f29, 0x9c(r1)
    stfs f11, 0x88(r1)
    stfs f12, 0x8c(r1)
    stfs f13, 0x90(r1)
    stfs f10, 0xf0(r1)
    stfs f26, 0x7c(r1)
    stfs f25, 0x80(r1)
    stfs f24, 0x84(r1)
    stfs f4, 0x70(r1)
    stfs f30, 0x74(r1)
    stfs f31, 0x78(r1)
    stfs f6, 0xe4(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x128(r1)
    lfs f0, 0x130(r1)
    li r0, 0x1
    lfs f4, 0x24(r25)
    lfs f3, 0x12c(r1)
    fsubs f11, f0, f4
    lfs f0, 0x20(r25)
    lfs f6, 0x134(r1)
    fsubs f10, f3, f0
    lfs f3, 0x28(r25)
    fmuls f7, f11, f9
    fsubs f12, f6, f3
    lwz r12, 0x10c(r1)
    fmuls f6, f10, f9
    fadds f4, f7, f4
    stw r12, 0x0(r25)
    fmuls f8, f12, f9
    fadds f0, f6, f0
    lwz r12, 0x110(r1)
    stfs f4, 0xd4(r1)
    fadds f3, f8, f3
    stfs f0, 0xd0(r1)
    psq_l f1, 0x0(r8), 0, 0
    fmr f2, f3
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stw r12, 0x4(r25)
    psq_st f1, 0x8(r25), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x134(r1)
    lfs f2, 0x11c(r1)
    stfs f2, 0x10(r25)
    lfs f2, 0x128(r1)
    psq_st f1, 0x14(r25), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x1c(r25)
    lfs f2, 0x134(r1)
    psq_st f1, 0x20(r25), 0, 0
    stfs f10, 0x64(r1)
    stfs f11, 0x68(r1)
    stfs f12, 0x6c(r1)
    stfs f6, 0x58(r1)
    stfs f7, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f3, 0xd8(r1)
    stfs f2, 0x28(r25)
    b lbl_fn_8011D844_00001258
lbl_fn_8011D844_0000124C:
    addi r23, r23, 0x2c
    addi r21, r21, 0x1
    bdnz lbl_fn_8011D844_00001080
lbl_fn_8011D844_00001258:
    cmpwi r0, 0x0
    bne lbl_fn_8011D844_00001384
    lwz r0, 0x5c(r28)
    addi r25, r1, 0x168
    lfs f3, 0x130(r1)
    lfs f0, 0x12c(r1)
    slwi r0, r0, 5
    add r12, r28, r0
    fsubs f26, f3, f5
    fsubs f25, f0, f5
    lfs f9, 0xc(r12)
    lfs f4, 0x134(r1)
    fmuls f13, f26, f9
    lwz r0, 0x164(r1)
    fsubs f27, f4, f5
    fmuls f12, f25, f9
    lfs f8, 0x114(r1)
    fadds f11, f13, f5
    fmuls f24, f27, f9
    mulli r0, r0, 0x2c
    fadds f10, f12, f5
    lfs f7, 0x118(r1)
    fmuls f8, f8, f9
    fadds f2, f24, f5
    lfs f6, 0x11c(r1)
    fmuls f7, f7, f9
    lfs f4, 0x120(r1)
    add. r25, r25, r0
    lfs f3, 0x124(r1)
    lfs f0, 0x128(r1)
    fmuls f6, f6, f9
    fmuls f4, f4, f9
    stfs f10, 0xc4(r1)
    fmuls f3, f3, f9
    stfs f11, 0xc8(r1)
    fmuls f0, f0, f9
    psq_l f1, 0x0(r9), 0, 0
    stfs f8, 0x114(r1)
    stfs f7, 0x118(r1)
    stfs f6, 0x11c(r1)
    stfs f4, 0x120(r1)
    stfs f3, 0x124(r1)
    stfs f0, 0x128(r1)
    stfs f5, 0xb8(r1)
    stfs f5, 0xbc(r1)
    stfs f5, 0xc0(r1)
    stfs f25, 0x4c(r1)
    stfs f26, 0x50(r1)
    stfs f27, 0x54(r1)
    stfs f12, 0x40(r1)
    stfs f13, 0x44(r1)
    stfs f24, 0x48(r1)
    stfs f2, 0xcc(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x134(r1)
    beq lbl_fn_8011D844_00001378
    lwz r0, 0x10c(r1)
    fmr f2, f6
    stw r0, 0x0(r25)
    lwz r0, 0x110(r1)
    stw r0, 0x4(r25)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x8(r25), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x10(r25)
    fmr f2, f0
    psq_st f1, 0x14(r25), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x1c(r25)
    lfs f2, 0x134(r1)
    psq_st f1, 0x20(r25), 0, 0
    stfs f2, 0x28(r25)
lbl_fn_8011D844_00001378:
    lwz r12, 0x164(r1)
    addi r0, r12, 0x1
    stw r0, 0x164(r1)
lbl_fn_8011D844_00001384:
    addi r10, r10, 0x1
    addi r11, r11, 0x2c
lbl_fn_8011D844_0000138C:
    lwz r0, 0x5c(r28)
    mulli r0, r0, 0xc
    add r12, r28, r0
    lwz r0, 0x44(r12)
    cmplw r10, r0
    blt lbl_fn_8011D844_0000101C
    lfs f30, lbl_808817DC
    addi r22, r1, 0x20
    lfs f31, lbl_808817D8
    addi r25, r1, 0x168
    li r30, 0x0
    li r26, 0x0
    li r24, 0x0
    b lbl_fn_8011D844_0000156C
lbl_fn_8011D844_000013C4:
    lwz r3, 0x48(r31)
    addi r5, r1, 0x164
    lwz r0, 0x164(r1)
    li r28, 0x0
    lwzx r4, r3, r26
    lwz r29, 0x18(r4)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8011D844_00001564
lbl_fn_8011D844_000013E8:
    lwz r3, 0x14(r4)
    lwz r0, 0x4(r5)
    cmplw r3, r0
    bne lbl_fn_8011D844_00001558
    mulli r0, r29, 0x2c
    add r21, r27, r0
    stwx r24, r27, r0
    mr r3, r21
    bl fn_80099010
    mulli r0, r28, 0x2c
    addi r5, r1, 0x168
    lfs f3, 0x4(r21)
    addi r23, r21, 0x10
    addi r3, r1, 0x10
    add r5, r5, r0
    lfs f0, 0x8(r5)
    addi r4, r1, 0x1c
    fadds f0, f3, f0
    stfs f0, 0x4(r21)
    lfs f3, 0x8(r21)
    lfs f0, 0xc(r5)
    fadds f0, f3, f0
    stfs f0, 0x8(r21)
    lfs f3, 0xc(r21)
    lfs f0, 0x10(r5)
    fadds f0, f3, f0
    stfs f0, 0xc(r21)
    lfs f0, 0x14(r5)
    lfs f24, 0x18(r5)
    fmuls f0, f0, f30
    lfs f25, 0x1c(r5)
    fmuls f1, f31, f0
    bl fn_8072D210
    fmuls f0, f24, f30
    addi r3, r1, 0xc
    addi r4, r1, 0x18
    fmuls f1, f31, f0
    bl fn_8072D210
    fmuls f0, f25, f30
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    fmuls f1, f31, f0
    bl fn_8072D210
    lfs f11, 0x18(r1)
    mr r3, r23
    lfs f8, 0x10(r1)
    addi r4, r1, 0x30
    lfs f5, 0xc(r1)
    addi r5, r1, 0x20
    lfs f7, 0x1c(r1)
    fmuls f3, f8, f11
    lfs f9, 0x8(r1)
    fmuls f0, f8, f5
    fmuls f4, f7, f5
    lfs f10, 0x14(r1)
    fmuls f3, f9, f3
    fmuls f5, f5, f9
    fmuls f12, f11, f10
    fmadds f3, f10, f4, f3
    fmuls f6, f8, f5
    fmuls f5, f7, f5
    stfs f3, 0x34(r1)
    fmuls f3, f7, f11
    fmuls f0, f10, f0
    fmadds f6, f7, f12, f6
    fmsubs f4, f8, f12, f5
    fmsubs f0, f9, f3, f0
    stfs f6, 0x3c(r1)
    stfs f4, 0x30(r1)
    stfs f0, 0x38(r1)
    bl fn_805F99F0
    psq_l f2, 0x8(r22), 0, 0
    mulli r0, r28, 0x2c
    psq_l f1, 0x0(r22), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    mulli r4, r29, 0x2c
    psq_st f2, 0x8(r23), 0, 0
    add r3, r25, r0
    add r4, r27, r4
    lfs f0, 0x20(r3)
    lfs f3, 0x20(r4)
    fmuls f0, f3, f0
    stfs f0, 0x20(r4)
    lfs f3, 0x24(r4)
    lfs f0, 0x24(r3)
    fmuls f0, f3, f0
    stfs f0, 0x24(r4)
    lfs f3, 0x28(r4)
    lfs f0, 0x28(r3)
    fmuls f0, f3, f0
    stfs f0, 0x28(r4)
    b lbl_fn_8011D844_00001564
lbl_fn_8011D844_00001558:
    addi r5, r5, 0x2c
    addi r28, r28, 0x1
    bdnz lbl_fn_8011D844_000013E8
lbl_fn_8011D844_00001564:
    addi r30, r30, 0x1
    addi r26, r26, 0x4
lbl_fn_8011D844_0000156C:
    lwz r0, 0x44(r31)
    cmpw r30, r0
    blt lbl_fn_8011D844_000013C4
lbl_fn_8011D844_00001578:
    addi r11, r1, 0x720
    psq_l f31, 0x798(r1), 0, 0
    lfd f31, 0x790(r1)
    psq_l f30, 0x788(r1), 0, 0
    lfd f30, 0x780(r1)
    psq_l f29, 0x778(r1), 0, 0
    lfd f29, 0x770(r1)
    psq_l f28, 0x768(r1), 0, 0
    lfd f28, 0x760(r1)
    psq_l f27, 0x758(r1), 0, 0
    lfd f27, 0x750(r1)
    psq_l f26, 0x748(r1), 0, 0
    lfd f26, 0x740(r1)
    psq_l f25, 0x738(r1), 0, 0
    lfd f25, 0x730(r1)
    psq_l f24, 0x728(r1), 0, 0
    lfd f24, 0x720(r1)
    bl _restgpr_21
    lwz r0, 0x7a4(r1)
    mtlr r0
    addi r1, r1, 0x7a0
    blr
}
