#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8006BA30(void);
extern void fn_8006EF48(void);
extern void fn_8006F72C(void);
extern void fn_800A4450(void);
extern void fn_800A55AC(void);
extern void fn_800CB3A0(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_80116FC0(void);
extern void fn_80117228(void);
extern void fn_8011BBD0(void);
extern void fn_80124C6C(void);
extern void fn_801F4728(void);
extern void fn_801F48C8(void);
extern void fn_801F4C14(void);
extern void fn_801F4CB4(void);
extern void fn_801F4D80(void);
extern void fn_801F4E8C(void);
extern void fn_801F6D7C(void);
extern void fn_801F6E78(void);
extern void fn_801FEC74(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_801FEE08(void);
extern void fn_8021771C(void);
extern void fn_803BEAB4(void);
extern void fn_803BEB54(void);
extern void fn_80682428(void);
extern void fn_80686A48(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80736B10[];
extern u8 lbl_8077A0B0[];

/* Small data declarations */
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F1E4;
extern u32 lbl_808813D0;
extern u32 lbl_80881748;
extern u32 lbl_8088174C;
extern u32 lbl_80881750;
extern u32 lbl_80881758;
extern u32 lbl_8088175C;
extern u32 lbl_80881764;
extern u32 lbl_80881778;
extern u32 lbl_8088177C;
extern u32 lbl_80881780;
extern u32 lbl_80881784;
extern u32 lbl_80881788;
extern u32 lbl_8088178C;
extern u32 lbl_80881790;
extern u32 lbl_80881794;

/* Function declarations */
void fn_80119ECC(void);
void fn_80119F0C(void);
void fn_8011A4D0(void);
void fn_8011AD38(void);
void fn_8011B018(void);
void fn_8011B3D8(void);

asm void fn_80119ECC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80119ECC_00000028
    cmpwi r4, 0x0
    ble lbl_fn_80119ECC_00000028
    bl dtor_80084684
lbl_fn_80119ECC_00000028:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80119F0C(void)
{
    nofralloc
    stwu r1, -0x450(r1)
    mflr r0
    stw r0, 0x454(r1)
    addi r11, r1, 0x440
    stfd f31, 0x440(r1)
    psq_st f31, 0x448(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x5c(r3)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_80119F0C_000005E4
    lwz r0, 0x48(r3)
    lwz r4, 0x128(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80119F0C_00000084
    lwz r3, 0x4c(r3)
    b lbl_fn_80119F0C_00000088
lbl_fn_80119F0C_00000084:
    lwz r3, 0x50(r3)
lbl_fn_80119F0C_00000088:
    mulli r0, r4, 0xb8
    add r3, r3, r0
    addi r30, r3, 0x4c
    mr r3, r30
    bl fn_803BEAB4
    cmpwi r3, 0x0
    beq lbl_fn_80119F0C_000005D8
    mr r3, r30
    bl fn_803BEB54
    cmpwi r3, 0x0
    bne lbl_fn_80119F0C_00000454
    lwz r3, 0x5c(r29)
    lfs f0, lbl_8088175C
    stfs f0, 0x104(r3)
    lbz r3, 0x30(r30)
    lhz r4, 0x32(r30)
    lbz r5, 0x31(r30)
    bl fn_8021771C
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80119F0C_000001D4
    lwz r4, 0x5c(r29)
    lis r28, lbl_80736B10@ha
    addi r28, r28, lbl_80736B10@l
    addi r3, r28, 0x293
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    addi r5, r31, 0x4
    bl fn_801FEE08
    lis r3, 0x14f9
    lwz r0, 0x74(r30)
    subi r4, r3, 0x4a77
    lwz r3, 0x5c(r29)
    mulhw r0, r4, r0
    li r6, 0x0
    addi r4, r28, 0x29b
    srawi r0, r0, 13
    srwi r5, r0, 31
    add r5, r0, r5
    bl fn_801F4CB4
    lwz r3, 0x5c(r29)
    addi r4, r28, 0x29f
    addi r3, r3, 0x58
    bl fn_801FEC74
    cmpwi r3, 0x0
    beq lbl_fn_80119F0C_000001D4
    mr r4, r3
    addi r3, r1, 0x8
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x8(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, lbl_80881778
    bne lbl_fn_80119F0C_00000178
    addi r4, r1, 0xa
    b lbl_fn_80119F0C_0000017C
lbl_fn_80119F0C_00000178:
    lwz r4, 0x10(r1)
lbl_fn_80119F0C_0000017C:
    lfs f2, lbl_80881748
    li r5, 0x1
    li r6, 0x4
    bl fn_8006EF48
    lwz r0, 0x8(r1)
    fmr f31, f1
    srwi. r0, r0, 31
    beq lbl_fn_80119F0C_000001A4
    lwz r3, 0x10(r1)
    bl dtor_80084684
lbl_fn_80119F0C_000001A4:
    lwz r4, 0x5c(r29)
    lis r3, lbl_80736B10@ha
    addi r3, r3, lbl_80736B10@l
    addi r3, r3, 0x2b0
    addi r27, r4, 0x58
    bl fn_800DC6B4
    lfs f0, lbl_8088177C
    mr r4, r3
    mr r3, r27
    li r5, 0x0
    fadds f1, f0, f31
    bl fn_801FED24
lbl_fn_80119F0C_000001D4:
    li r0, 0x7
    mr r3, r30
    lwz r5, 0x3c(r30)
    li r4, 0x0
    mtctr r0
lbl_fn_80119F0C_000001E8:
    lwz r0, 0x38(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80119F0C_00000204
    slwi r0, r4, 3
    add r3, r30, r0
    lwz r5, 0x3c(r3)
    b lbl_fn_80119F0C_00000210
lbl_fn_80119F0C_00000204:
    addi r3, r3, 0x8
    addi r4, r4, 0x1
    bdnz lbl_fn_80119F0C_000001E8
lbl_fn_80119F0C_00000210:
    lis r28, lbl_80736B10@ha
    lwz r3, 0x5c(r29)
    addi r28, r28, lbl_80736B10@l
    li r6, 0x0
    addi r4, r28, 0x2b8
    bl fn_801F4CB4
    lwz r0, 0x48(r29)
    cmpwi r0, 0x1
    bne lbl_fn_80119F0C_00000268
    li r3, 0x0
    li r4, 0x2777
    bl fn_80116FC0
    lwz r4, 0x5c(r29)
    mr r31, r3
    addi r3, r28, 0x2be
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    mr r5, r31
    bl fn_801FEE08
    b lbl_fn_80119F0C_00000298
lbl_fn_80119F0C_00000268:
    li r3, 0x0
    li r4, 0x2776
    bl fn_80116FC0
    lwz r4, 0x5c(r29)
    mr r31, r3
    addi r3, r28, 0x2be
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    mr r5, r31
    bl fn_801FEE08
lbl_fn_80119F0C_00000298:
    bl fn_8006BA30
    cmpwi r3, 0x2
    beq lbl_fn_80119F0C_000002B0
    cmpwi r3, 0x4
    beq lbl_fn_80119F0C_000002DC
    b lbl_fn_80119F0C_00000308
lbl_fn_80119F0C_000002B0:
    lwz r6, 0x18(r30)
    lis r4, lbl_8077A0B0@ha
    addi r4, r4, lbl_8077A0B0@l
    lwz r5, 0x14(r30)
    lwz r7, 0x1c(r30)
    addi r3, r1, 0x18
    addi r4, r4, 0x28
    addi r6, r6, 0x1
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_80119F0C_00000330
lbl_fn_80119F0C_000002DC:
    lwz r6, 0x18(r30)
    lis r4, lbl_8077A0B0@ha
    addi r4, r4, lbl_8077A0B0@l
    lwz r5, 0x14(r30)
    lwz r7, 0x1c(r30)
    addi r3, r1, 0x18
    addi r4, r4, 0x3a
    addi r6, r6, 0x1
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_80119F0C_00000330
lbl_fn_80119F0C_00000308:
    lwz r6, 0x18(r30)
    lis r4, lbl_8077A0B0@ha
    addi r4, r4, lbl_8077A0B0@l
    lwz r5, 0x14(r30)
    lwz r7, 0x1c(r30)
    addi r3, r1, 0x18
    addi r4, r4, 0x4c
    addi r6, r6, 0x1
    crclr 6
    bl fn_800DD3FC
lbl_fn_80119F0C_00000330:
    lis r28, lbl_8077A0B0@ha
    lwz r6, 0x10(r30)
    addi r28, r28, lbl_8077A0B0@l
    lwz r7, 0xc(r30)
    addi r3, r1, 0x218
    addi r5, r1, 0x18
    addi r4, r28, 0x5e
    crclr 6
    bl fn_800DD3FC
    lwz r4, 0x5c(r29)
    lis r31, lbl_80736B10@ha
    addi r31, r31, lbl_80736B10@l
    addi r3, r31, 0x2cb
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    addi r5, r1, 0x218
    bl fn_801FEE08
    lwz r3, 0x5c(r29)
    mr r5, r31
    addi r4, r31, 0x2cf
    bl fn_801F4C14
    lwz r3, 0x10(r30)
    lis r0, 0x4330
    stw r0, 0x418(r1)
    mr r5, r31
    xoris r0, r3, 0x8000
    lwz r3, 0x5c(r29)
    stw r0, 0x41c(r1)
    addi r4, r31, 0x2d4
    bl fn_801F4C14
    lis r3, 0x8889
    lwz r0, 0x70(r30)
    subi r7, r3, 0x7777
    addi r4, r28, 0x76
    mulhw r5, r7, r0
    addi r3, r1, 0x218
    add r0, r5, r0
    srawi r0, r0, 4
    srwi r5, r0, 31
    add r10, r0, r5
    mulhw r0, r7, r10
    add r6, r0, r10
    srawi r0, r6, 5
    srwi r5, r0, 31
    add r11, r0, r5
    mulhw r0, r7, r11
    add r0, r0, r11
    srawi r5, r0, 5
    srawi r7, r0, 5
    srawi r0, r6, 5
    srwi r9, r5, 31
    srwi r8, r7, 31
    srwi r6, r0, 31
    add r5, r5, r9
    add r0, r0, r6
    add r7, r7, r8
    mulli r6, r7, 0x3c
    mulli r0, r0, 0x3c
    subf r6, r6, r11
    subf r7, r0, r10
    crclr 6
    bl fn_800DD3FC
    lwz r4, 0x5c(r29)
    addi r3, r31, 0x2d9
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    addi r5, r1, 0x218
    bl fn_801FEE08
    b lbl_fn_80119F0C_000005E4
lbl_fn_80119F0C_00000454:
    lwz r4, 0x5c(r29)
    lis r3, lbl_8077A0B0@ha
    lfs f0, lbl_8088175C
    lis r30, lbl_80736B10@ha
    stfs f0, 0x104(r4)
    addi r3, r3, lbl_8077A0B0@l
    addi r30, r30, lbl_80736B10@l
    lwz r4, 0x5c(r29)
    addi r28, r3, 0x90
    addi r3, r30, 0x293
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    mr r5, r28
    bl fn_801FEE08
    lwz r3, 0x5c(r29)
    addi r4, r30, 0x29b
    li r5, 0x0
    li r6, 0x0
    bl fn_801F4CB4
    lwz r3, 0x5c(r29)
    addi r4, r30, 0x2b8
    li r5, 0x0
    li r6, 0x0
    bl fn_801F4CB4
    lwz r0, 0x48(r29)
    cmpwi r0, 0x1
    bne lbl_fn_80119F0C_000004FC
    li r3, 0x0
    li r4, 0x2777
    bl fn_80116FC0
    lwz r4, 0x5c(r29)
    mr r28, r3
    addi r3, r30, 0x2be
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    mr r5, r28
    bl fn_801FEE08
    b lbl_fn_80119F0C_0000052C
lbl_fn_80119F0C_000004FC:
    li r3, 0x0
    li r4, 0x2776
    bl fn_80116FC0
    lwz r4, 0x5c(r29)
    mr r28, r3
    addi r3, r30, 0x2be
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    mr r5, r28
    bl fn_801FEE08
lbl_fn_80119F0C_0000052C:
    lwz r3, 0x5c(r29)
    lis r31, lbl_8077A0B0@ha
    lis r30, lbl_80736B10@ha
    addi r31, r31, lbl_8077A0B0@l
    addi r27, r3, 0x58
    addi r30, r30, lbl_80736B10@l
    addi r28, r31, 0x90
    addi r3, r30, 0x2cb
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    mr r5, r28
    bl fn_801FEE08
    lwz r4, 0x5c(r29)
    addi r28, r31, 0x92
    addi r3, r30, 0x2cf
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    mr r5, r28
    bl fn_801FEE08
    lwz r3, lbl_8087F1E4
    lwz r27, 0xe34(r3)
    cmpwi r27, 0x0
    beq lbl_fn_80119F0C_00000598
    b lbl_fn_80119F0C_0000059C
lbl_fn_80119F0C_00000598:
    la r27, lbl_808813D0
lbl_fn_80119F0C_0000059C:
    lwz r4, 0x5c(r29)
    lis r30, lbl_80736B10@ha
    addi r30, r30, lbl_80736B10@l
    addi r3, r30, 0x2d4
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r27
    bl fn_801FEE08
    lwz r3, 0x5c(r29)
    addi r4, r30, 0x2d9
    addi r5, r30, 0x2e2
    bl fn_801F4C14
    b lbl_fn_80119F0C_000005E4
lbl_fn_80119F0C_000005D8:
    lwz r3, 0x5c(r29)
    lfs f0, lbl_80881750
    stfs f0, 0x104(r3)
lbl_fn_80119F0C_000005E4:
    addi r11, r1, 0x440
    psq_l f31, 0x448(r1), 0, 0
    lfd f31, 0x440(r1)
    bl _restgpr_27
    lwz r0, 0x454(r1)
    mtlr r0
    addi r1, r1, 0x450
    blr
}

asm void fn_8011A4D0(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xc0
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    bl _savegpr_26
    lwz r0, 0x64(r3)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_8011A4D0_00000E4C
    lwz r4, 0x58(r3)
    cmpwi r4, 0x0
    bne lbl_fn_8011A4D0_00000640
    b lbl_fn_8011A4D0_00000E4C
lbl_fn_8011A4D0_00000640:
    lwz r0, 0x38(r4)
    lis r28, lbl_8077A0B0@ha
    lis r31, lbl_80736B10@ha
    li r30, 0x0
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    addi r28, r28, lbl_8077A0B0@l
    addi r31, r31, lbl_80736B10@l
    lwz r4, 0x6c(r3)
    addi r27, r28, 0x90
    addi r3, r31, 0x2ea
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x58(r29)
    addi r26, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r26
    mr r5, r27
    bl fn_801FEE08
    lwz r4, 0x58(r29)
    addi r3, r31, 0x2f8
    addi r26, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r26
    mr r5, r27
    bl fn_801FEE08
    lwz r4, lbl_8087F0A8
    addi r3, r1, 0x30
    li r5, 0x0
    addi r4, r4, 0x48c
    bl fn_80124C6C
    lwz r3, 0x58(r29)
    addi r4, r31, 0x306
    addi r5, r1, 0x30
    bl fn_801F48C8
    lwz r4, lbl_8087F0A8
    addi r3, r1, 0x20
    li r5, 0x0
    addi r4, r4, 0x48c
    bl fn_80124C6C
    lwz r3, 0x58(r29)
    addi r4, r31, 0x30c
    addi r5, r1, 0x20
    bl fn_801F48C8
    lwz r4, 0x58(r29)
    addi r3, r31, 0x316
    addi r26, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80881780
    mr r4, r3
    mr r3, r26
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0x58(r29)
    addi r3, r31, 0x321
    addi r26, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80881784
    mr r4, r3
    mr r3, r26
    li r5, 0x4
    bl fn_801FED24
    lwz r4, 0x58(r29)
    addi r3, r31, 0x321
    addi r26, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80881788
    mr r4, r3
    mr r3, r26
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x58(r29)
    addi r3, r31, 0x321
    addi r26, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088178C
    mr r4, r3
    mr r3, r26
    li r5, 0x1
    bl fn_801FED24
    lwz r0, 0x13c(r29)
    cmpwi r0, 0x3
    bne lbl_fn_8011A4D0_00000A94
    lwz r5, 0x48(r29)
    lwz r4, 0x128(r29)
    cmpwi r5, 0x0
    bne lbl_fn_8011A4D0_000007B0
    lwz r3, 0x4c(r29)
    b lbl_fn_8011A4D0_000007B4
lbl_fn_8011A4D0_000007B0:
    lwz r3, 0x50(r29)
lbl_fn_8011A4D0_000007B4:
    mulli r0, r4, 0xb8
    lwz r6, 0x16c(r29)
    cmpwi r6, 0x0
    add r3, r3, r0
    addi r3, r3, 0x4c
    bne lbl_fn_8011A4D0_000008A8
    cmpwi r5, 0x1
    bne lbl_fn_8011A4D0_00000824
    mr r3, r29
    bl fn_8011BBD0
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8011A4D0_00000924
    li r3, 0x1
    li r4, 0x11d
    bl fn_80116FC0
    lwz r4, 0x64(r29)
    lis r5, lbl_80736B10@ha
    addi r5, r5, lbl_80736B10@l
    mr r27, r3
    addi r3, r5, 0x289
    addi r26, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r26
    mr r5, r27
    bl fn_801FEE08
    b lbl_fn_8011A4D0_00000924
lbl_fn_8011A4D0_00000824:
    bl fn_803BEAB4
    cmpwi r3, 0x0
    beq lbl_fn_8011A4D0_0000086C
    li r3, 0x1
    li r4, 0x114
    bl fn_80116FC0
    lwz r4, 0x64(r29)
    lis r5, lbl_80736B10@ha
    addi r5, r5, lbl_80736B10@l
    mr r27, r3
    addi r3, r5, 0x289
    addi r26, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r26
    mr r5, r27
    bl fn_801FEE08
    b lbl_fn_8011A4D0_00000924
lbl_fn_8011A4D0_0000086C:
    li r3, 0x1
    li r4, 0x115
    bl fn_80116FC0
    lwz r4, 0x64(r29)
    lis r5, lbl_80736B10@ha
    addi r5, r5, lbl_80736B10@l
    mr r27, r3
    addi r3, r5, 0x289
    addi r26, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r26
    mr r5, r27
    bl fn_801FEE08
    b lbl_fn_8011A4D0_00000924
lbl_fn_8011A4D0_000008A8:
    cmpwi r6, 0x2
    bne lbl_fn_8011A4D0_000008EC
    li r3, 0x1
    li r4, 0x119
    bl fn_80116FC0
    lwz r4, 0x64(r29)
    lis r5, lbl_80736B10@ha
    addi r5, r5, lbl_80736B10@l
    mr r27, r3
    addi r3, r5, 0x289
    addi r26, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r26
    mr r5, r27
    bl fn_801FEE08
    b lbl_fn_8011A4D0_00000924
lbl_fn_8011A4D0_000008EC:
    li r3, 0x1
    li r4, 0x116
    bl fn_80116FC0
    lwz r4, 0x64(r29)
    lis r5, lbl_80736B10@ha
    addi r5, r5, lbl_80736B10@l
    mr r27, r3
    addi r3, r5, 0x289
    addi r26, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r26
    mr r5, r27
    bl fn_801FEE08
lbl_fn_8011A4D0_00000924:
    cmpwi r30, 0x0
    lwz r26, 0x64(r29)
    beq lbl_fn_8011A4D0_00000934
    lwz r26, 0x68(r29)
lbl_fn_8011A4D0_00000934:
    lis r30, lbl_80736B10@ha
    addi r30, r30, lbl_80736B10@l
    addi r3, r30, 0x277
    bl fn_800DC6B4
    lfs f1, lbl_8088174C
    mr r4, r3
    addi r3, r26, 0x58
    bl fn_801FECE0
    addi r3, r30, 0x27c
    bl fn_800DC6B4
    lfs f1, lbl_80881748
    mr r4, r3
    addi r3, r26, 0x58
    bl fn_801FECE0
    lfs f0, lbl_8088175C
    stfs f0, 0x104(r26)
    lfs f1, 0xa0(r26)
    lfs f0, 0x100(r26)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_8011A4D0_00000E4C
    lwz r5, 0x6c(r29)
    addi r3, r1, 0x60
    addi r4, r30, 0x32c
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x148(r29)
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    addi r3, r1, 0x60
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r26
    addi r3, r1, 0x4c
    bl fn_801F4E8C
    lwz r4, 0x6c(r29)
    addi r3, r30, 0x33b
    lfs f31, 0x4c(r1)
    addi r26, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r26
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x6c(r29)
    addi r3, r30, 0x33b
    lfs f31, 0x50(r1)
    addi r26, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r26
    li r5, 0x1
    bl fn_801FED24
    lwz r4, 0x6c(r29)
    addi r3, r30, 0x33b
    lfs f31, 0x5c(r1)
    addi r26, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r26
    li r5, 0x4
    bl fn_801FED24
    lwz r4, 0x6c(r29)
    addi r3, r30, 0x346
    lfs f31, 0x54(r1)
    addi r26, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r26
    bl fn_801FECE0
    lwz r4, 0x6c(r29)
    addi r3, r30, 0x34c
    lfs f31, 0x58(r1)
    addi r26, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r26
    bl fn_801FECE0
    b lbl_fn_8011A4D0_00000E4C
lbl_fn_8011A4D0_00000A94:
    cmpwi r0, 0x4
    bne lbl_fn_8011A4D0_00000ADC
    lwz r0, 0x170(r29)
    cmpwi r0, 0x2
    beq lbl_fn_8011A4D0_00000AC0
    lwz r3, 0x64(r29)
    lfs f0, lbl_80881750
    stfs f0, 0x104(r3)
    lwz r3, 0x68(r29)
    stfs f0, 0x104(r3)
    b lbl_fn_8011A4D0_00000E4C
lbl_fn_8011A4D0_00000AC0:
    lwz r3, 0x64(r29)
    lfs f0, lbl_8088175C
    stfs f0, 0x104(r3)
    lfs f0, lbl_80881750
    lwz r3, 0x68(r29)
    stfs f0, 0x104(r3)
    b lbl_fn_8011A4D0_00000E4C
lbl_fn_8011A4D0_00000ADC:
    cmpwi r0, 0x5
    bne lbl_fn_8011A4D0_00000CC8
    li r0, 0x0
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    stw r0, 0x48(r1)
    lwz r0, 0x16c(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8011A4D0_00000BCC
    lwz r0, 0x48(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8011A4D0_00000B6C
    li r3, 0x0
    li r4, 0xc8
    bl fn_80116FC0
    lwz r0, 0x40(r1)
    mr r27, r3
    srwi. r0, r0, 31
    bne lbl_fn_8011A4D0_00000B34
    lbz r0, 0x40(r1)
    clrlwi r26, r0, 25
    b lbl_fn_8011A4D0_00000B38
lbl_fn_8011A4D0_00000B34:
    lwz r26, 0x44(r1)
lbl_fn_8011A4D0_00000B38:
    lbz r0, 0x1c(r1)
    mr r3, r27
    stb r0, 0x18(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r5, r26
    mr r6, r27
    addi r3, r1, 0x40
    addi r8, r1, 0x18
    add r7, r27, r0
    li r4, 0x0
    bl fn_8006F72C
    b lbl_fn_8011A4D0_00000C28
lbl_fn_8011A4D0_00000B6C:
    li r3, 0x0
    li r4, 0xc9
    bl fn_80116FC0
    lwz r0, 0x40(r1)
    mr r27, r3
    srwi. r0, r0, 31
    bne lbl_fn_8011A4D0_00000B94
    lbz r0, 0x40(r1)
    clrlwi r26, r0, 25
    b lbl_fn_8011A4D0_00000B98
lbl_fn_8011A4D0_00000B94:
    lwz r26, 0x44(r1)
lbl_fn_8011A4D0_00000B98:
    lbz r0, 0x14(r1)
    mr r3, r27
    stb r0, 0x10(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r5, r26
    mr r6, r27
    addi r3, r1, 0x40
    addi r8, r1, 0x10
    add r7, r27, r0
    li r4, 0x0
    bl fn_8006F72C
    b lbl_fn_8011A4D0_00000C28
lbl_fn_8011A4D0_00000BCC:
    li r3, 0x0
    li r4, 0xca
    bl fn_80116FC0
    lwz r0, 0x40(r1)
    mr r27, r3
    srwi. r0, r0, 31
    bne lbl_fn_8011A4D0_00000BF4
    lbz r0, 0x40(r1)
    clrlwi r26, r0, 25
    b lbl_fn_8011A4D0_00000BF8
lbl_fn_8011A4D0_00000BF4:
    lwz r26, 0x44(r1)
lbl_fn_8011A4D0_00000BF8:
    lbz r0, 0xc(r1)
    mr r3, r27
    stb r0, 0x8(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r5, r26
    mr r6, r27
    addi r3, r1, 0x40
    addi r8, r1, 0x8
    add r7, r27, r0
    li r4, 0x0
    bl fn_8006F72C
lbl_fn_8011A4D0_00000C28:
    lwz r4, 0x64(r29)
    lis r30, lbl_80736B10@ha
    addi r30, r30, lbl_80736B10@l
    addi r3, r30, 0x277
    addi r26, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80881748
    mr r4, r3
    mr r3, r26
    bl fn_801FECE0
    lwz r4, 0x64(r29)
    addi r3, r30, 0x27c
    addi r26, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80881748
    mr r4, r3
    mr r3, r26
    bl fn_801FECE0
    lwz r0, 0x40(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8011A4D0_00000C84
    addi r26, r1, 0x42
    b lbl_fn_8011A4D0_00000C88
lbl_fn_8011A4D0_00000C84:
    lwz r26, 0x48(r1)
lbl_fn_8011A4D0_00000C88:
    lwz r4, 0x64(r29)
    lis r3, lbl_80736B10@ha
    addi r3, r3, lbl_80736B10@l
    addi r3, r3, 0x289
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    mr r5, r26
    bl fn_801FEE08
    lwz r0, 0x40(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8011A4D0_00000E4C
    lwz r3, 0x48(r1)
    bl dtor_80084684
    b lbl_fn_8011A4D0_00000E4C
lbl_fn_8011A4D0_00000CC8:
    cmpwi r0, 0x6
    bne lbl_fn_8011A4D0_00000D80
    li r3, 0x1
    li r4, 0x118
    bl fn_80116FC0
    lwz r4, 0x64(r29)
    mr r27, r3
    addi r3, r31, 0x289
    addi r26, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r26
    mr r5, r27
    bl fn_801FEE08
    lwz r4, 0x64(r29)
    addi r3, r31, 0x277
    lfs f0, lbl_8088175C
    stfs f0, 0x104(r4)
    lwz r4, 0x64(r29)
    addi r26, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80881748
    mr r4, r3
    mr r3, r26
    bl fn_801FECE0
    lwz r4, 0x64(r29)
    addi r3, r31, 0x27c
    addi r26, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80881748
    mr r4, r3
    mr r3, r26
    bl fn_801FECE0
    lwz r3, 0x64(r29)
    lfs f1, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_8011A4D0_00000E4C
    lwz r3, 0x58(r29)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_8011A4D0_00000E4C
lbl_fn_8011A4D0_00000D80:
    cmpwi r0, 0x9
    bne lbl_fn_8011A4D0_00000E38
    li r3, 0x1
    li r4, 0x11f
    bl fn_80116FC0
    lwz r4, 0x64(r29)
    mr r27, r3
    addi r3, r31, 0x289
    addi r26, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r26
    mr r5, r27
    bl fn_801FEE08
    lwz r4, 0x64(r29)
    addi r3, r31, 0x277
    lfs f0, lbl_8088175C
    stfs f0, 0x104(r4)
    lwz r4, 0x64(r29)
    addi r26, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80881748
    mr r4, r3
    mr r3, r26
    bl fn_801FECE0
    lwz r4, 0x64(r29)
    addi r3, r31, 0x27c
    addi r26, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80881748
    mr r4, r3
    mr r3, r26
    bl fn_801FECE0
    lwz r3, 0x64(r29)
    lfs f1, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_8011A4D0_00000E4C
    lwz r3, 0x58(r29)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_8011A4D0_00000E4C
lbl_fn_8011A4D0_00000E38:
    lwz r3, 0x64(r29)
    lfs f0, lbl_80881750
    stfs f0, 0x104(r3)
    lwz r3, 0x68(r29)
    stfs f0, 0x104(r3)
lbl_fn_8011A4D0_00000E4C:
    addi r11, r1, 0xc0
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    bl _restgpr_26
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_8011AD38(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x80
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stfd f30, 0x80(r1)
    psq_st f30, 0x88(r1), 0, 0
    bl _savegpr_26
    lis r4, lbl_80736B10@ha
    mr r28, r3
    lfs f30, lbl_80881758
    mr r31, r28
    lwz r30, 0x70(r3)
    addi r27, r4, lbl_80736B10@l
    lfs f31, lbl_8088174C
    li r29, 0x0
lbl_fn_8011AD38_00000EB0:
    mr r5, r29
    addi r3, r1, 0x20
    addi r4, r27, 0x352
    crclr 6
    bl sprintf
    addi r3, r1, 0x20
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x8
    bl fn_801F4E8C
    stfs f31, 0x10(r1)
    addi r4, r27, 0x360
    addi r5, r1, 0x8
    stfs f31, 0x14(r1)
    lwz r3, 0x74(r31)
    bl fn_801F4728
    lwz r3, 0xf4(r31)
    addi r4, r27, 0x360
    addi r5, r1, 0x8
    bl fn_801F6E78
    lwz r0, 0x13c(r28)
    lwz r4, 0x74(r31)
    cmpwi r0, 0x0
    lfs f2, 0xa0(r4)
    lfs f0, 0x100(r4)
    bne lbl_fn_8011AD38_00000F34
    fadds f0, f31, f0
    fcmpo cr0, f30, f0
    bge lbl_fn_8011AD38_00000F2C
    fmr f0, f30
lbl_fn_8011AD38_00000F2C:
    stfs f0, 0x100(r4)
    b lbl_fn_8011AD38_000010D4
lbl_fn_8011AD38_00000F34:
    lwz r5, 0x128(r28)
    subi r3, r5, 0x1
    slwi r0, r3, 29
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 3
    add r0, r0, r3
    cmpw r0, r29
    bne lbl_fn_8011AD38_00000F94
    fadds f1, f31, f0
    fcmpo cr0, f2, f1
    bge lbl_fn_8011AD38_00000F68
    fmr f1, f2
lbl_fn_8011AD38_00000F68:
    fcmpo cr0, f30, f1
    ble lbl_fn_8011AD38_00000F78
    fmr f2, f30
    b lbl_fn_8011AD38_00000F8C
lbl_fn_8011AD38_00000F78:
    fadds f0, f31, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_8011AD38_00000F88
    b lbl_fn_8011AD38_00000F8C
lbl_fn_8011AD38_00000F88:
    fmr f2, f0
lbl_fn_8011AD38_00000F8C:
    stfs f2, 0x100(r4)
    b lbl_fn_8011AD38_000010D4
lbl_fn_8011AD38_00000F94:
    cmpwi r5, 0x0
    bne lbl_fn_8011AD38_000010C0
    cmpwi r29, 0x0
    bne lbl_fn_8011AD38_000010C0
    fadds f1, f31, f0
    fcmpo cr0, f2, f1
    bge lbl_fn_8011AD38_00000FB4
    fmr f1, f2
lbl_fn_8011AD38_00000FB4:
    fcmpo cr0, f30, f1
    ble lbl_fn_8011AD38_00000FC4
    fmr f2, f30
    b lbl_fn_8011AD38_00000FD8
lbl_fn_8011AD38_00000FC4:
    fadds f0, f31, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_8011AD38_00000FD4
    b lbl_fn_8011AD38_00000FD8
lbl_fn_8011AD38_00000FD4:
    fmr f2, f0
lbl_fn_8011AD38_00000FD8:
    stfs f2, 0x100(r4)
    addi r3, r27, 0x360
    lwz r4, 0x74(r31)
    addi r26, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80881790
    mr r4, r3
    mr r3, r26
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x74(r31)
    addi r3, r27, 0x360
    addi r26, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80881794
    mr r4, r3
    mr r3, r26
    li r5, 0x1
    bl fn_801FED24
    lwz r4, 0x74(r31)
    addi r3, r27, 0x360
    addi r26, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80881764
    mr r4, r3
    mr r3, r26
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0x74(r31)
    addi r3, r27, 0x360
    addi r26, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80881764
    mr r4, r3
    mr r3, r26
    li r5, 0x3
    bl fn_801FED24
    lwz r3, 0xf4(r31)
    addi r4, r27, 0x360
    lfs f1, lbl_80881790
    li r5, 0x0
    bl fn_801F6D7C
    lwz r3, 0xf4(r31)
    addi r4, r27, 0x360
    lfs f1, lbl_80881794
    li r5, 0x1
    bl fn_801F6D7C
    lwz r3, 0xf4(r31)
    addi r4, r27, 0x360
    lfs f1, lbl_80881764
    li r5, 0x2
    bl fn_801F6D7C
    lwz r3, 0xf4(r31)
    addi r4, r27, 0x360
    lfs f1, lbl_80881764
    li r5, 0x3
    bl fn_801F6D7C
    b lbl_fn_8011AD38_000010D4
lbl_fn_8011AD38_000010C0:
    fsubs f0, f0, f31
    fcmpo cr0, f30, f0
    ble lbl_fn_8011AD38_000010D0
    fmr f0, f30
lbl_fn_8011AD38_000010D0:
    stfs f0, 0x100(r4)
lbl_fn_8011AD38_000010D4:
    lwz r3, 0xf4(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r0, 0xd4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8011AD38_00001114
    lwz r3, 0x74(r31)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f30
    cror eq, gt, eq
    bne lbl_fn_8011AD38_00001114
    lwz r3, 0xf4(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8011AD38_00001114:
    addi r29, r29, 0x1
    addi r31, r31, 0x4
    cmpwi r29, 0x8
    blt lbl_fn_8011AD38_00000EB0
    addi r11, r1, 0x80
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    bl _restgpr_26
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8011B018(void)
{
    nofralloc
    stwu r1, -0x260(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x264(r1)
    stmw r23, 0x23c(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    bne lbl_fn_8011B018_00001178
    li r30, 0x0
    b lbl_fn_8011B018_00001190
lbl_fn_8011B018_00001178:
    subi r3, r4, 0x1
    slwi r0, r3, 29
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 3
    add r30, r0, r3
lbl_fn_8011B018_00001190:
    mr r3, r28
    bl fn_803BEAB4
    cmpwi r3, 0x0
    beq lbl_fn_8011B018_0000145C
    cmpwi r27, 0x0
    bne lbl_fn_8011B018_000011B0
    lwz r29, 0x114(r26)
    b lbl_fn_8011B018_000011BC
lbl_fn_8011B018_000011B0:
    slwi r0, r30, 2
    add r3, r26, r0
    lwz r29, 0x94(r3)
lbl_fn_8011B018_000011BC:
    lis r31, lbl_80736B10@ha
    mr r3, r29
    addi r31, r31, lbl_80736B10@l
    mr r5, r27
    addi r4, r31, 0x36a
    li r6, -0x2
    bl fn_801F4CB4
    lis r3, 0x8889
    lwz r0, 0x70(r28)
    subi r7, r3, 0x7777
    lis r4, lbl_8077A0B0@ha
    mulhw r5, r7, r0
    addi r3, r1, 0x30
    addi r4, r4, lbl_8077A0B0@l
    addi r4, r4, 0x76
    add r0, r5, r0
    srawi r0, r0, 4
    srwi r5, r0, 31
    add r10, r0, r5
    mulhw r0, r7, r10
    add r6, r0, r10
    srawi r0, r6, 5
    srwi r5, r0, 31
    add r11, r0, r5
    mulhw r0, r7, r11
    add r0, r0, r11
    srawi r5, r0, 5
    srawi r7, r0, 5
    srawi r0, r6, 5
    srwi r9, r5, 31
    srwi r8, r7, 31
    srwi r6, r0, 31
    add r5, r5, r9
    add r0, r0, r6
    add r7, r7, r8
    mulli r6, r7, 0x3c
    mulli r0, r0, 0x3c
    subf r6, r6, r11
    subf r7, r0, r10
    crclr 6
    bl fn_800DD3FC
    addi r3, r31, 0x373
    bl fn_800DC6B4
    mr r4, r3
    addi r3, r29, 0x58
    addi r5, r1, 0x30
    bl fn_801FEE08
    lbz r3, 0x30(r28)
    lhz r4, 0x32(r28)
    lbz r5, 0x31(r28)
    bl fn_8021771C
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_8011B018_000013E4
    lwz r3, 0x70(r3)
    addi r4, r31, 0x3d
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8011B018_000013E4
    li r0, 0x0
    addi r31, r31, 0x20e
    stw r0, 0x20(r1)
    mr r3, r31
    addi r24, r1, 0x20
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    bl strlen
    mr r23, r3
    mr r3, r24
    mr r4, r23
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r24
    stb r0, 0x18(r1)
    mr r6, r31
    add r7, r31, r23
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x20(r1)
    lwz r24, 0x70(r25)
    srwi. r0, r0, 31
    bne lbl_fn_8011B018_00001318
    lbz r0, 0x20(r1)
    clrlwi r23, r0, 25
    b lbl_fn_8011B018_0000131C
lbl_fn_8011B018_00001318:
    lwz r23, 0x24(r1)
lbl_fn_8011B018_0000131C:
    lbz r0, 0x14(r1)
    mr r3, r24
    stb r0, 0x10(r1)
    bl strlen
    mr r0, r3
    mr r4, r23
    mr r6, r24
    addi r3, r1, 0x20
    add r7, r24, r0
    addi r8, r1, 0x10
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x20(r1)
    lis r3, lbl_80736B10@ha
    addi r3, r3, lbl_80736B10@l
    srwi. r0, r0, 31
    addi r24, r3, 0x21c
    bne lbl_fn_8011B018_00001370
    lbz r0, 0x20(r1)
    clrlwi r23, r0, 25
    b lbl_fn_8011B018_00001374
lbl_fn_8011B018_00001370:
    lwz r23, 0x24(r1)
lbl_fn_8011B018_00001374:
    lbz r0, 0xc(r1)
    mr r3, r24
    stb r0, 0x8(r1)
    bl strlen
    mr r0, r3
    mr r4, r23
    mr r6, r24
    addi r3, r1, 0x20
    add r7, r24, r0
    addi r8, r1, 0x8
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x20(r1)
    lis r4, lbl_80736B10@ha
    addi r4, r4, lbl_80736B10@l
    mr r3, r29
    srwi. r0, r0, 31
    addi r4, r4, 0x37a
    bne lbl_fn_8011B018_000013C8
    addi r5, r1, 0x21
    b lbl_fn_8011B018_000013CC
lbl_fn_8011B018_000013C8:
    lwz r5, 0x28(r1)
lbl_fn_8011B018_000013CC:
    bl fn_801F4D80
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8011B018_000013E4
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_8011B018_000013E4:
    slwi r0, r30, 2
    cmpwi r30, 0x0
    add r5, r26, r0
    stw r29, 0x74(r5)
    addi r3, r5, 0x74
    lwz r0, 0x38(r29)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r29)
    lwz r4, 0xb4(r5)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x78(r28)
    neg r0, r4
    or r0, r0, r4
    srwi r0, r0, 31
    stw r0, 0xd4(r5)
    bne lbl_fn_8011B018_000014CC
    cmpwi r27, 0x0
    bne lbl_fn_8011B018_00001448
    lwz r4, 0x94(r5)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    b lbl_fn_8011B018_000014CC
lbl_fn_8011B018_00001448:
    lwz r4, 0x114(r26)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    b lbl_fn_8011B018_000014CC
lbl_fn_8011B018_0000145C:
    slwi r23, r30, 2
    lis r4, lbl_80736B10@ha
    add r28, r26, r23
    mr r5, r27
    addi r4, r4, lbl_80736B10@l
    lwz r3, 0xb4(r28)
    addi r4, r4, 0x36a
    li r6, -0x2
    bl fn_801F4CB4
    lwz r0, 0xb4(r28)
    mr r3, r28
    stwu r0, 0x74(r3)
    cmpwi r30, 0x0
    li r0, 0x0
    lwz r5, 0x94(r28)
    lwz r4, 0x38(r5)
    ori r4, r4, 0x4
    stw r4, 0x38(r5)
    lwz r5, 0xb4(r28)
    lwz r4, 0x38(r5)
    rlwinm r4, r4, 0, 30, 28
    stw r4, 0x38(r5)
    stw r0, 0xd4(r28)
    bne lbl_fn_8011B018_000014CC
    lwz r4, 0x114(r26)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_8011B018_000014CC:
    cmpwi r27, 0x11
    blt lbl_fn_8011B018_000014E8
    lwz r3, 0x0(r3)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    b lbl_fn_8011B018_000014F8
lbl_fn_8011B018_000014E8:
    lwz r3, 0x0(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8011B018_000014F8:
    lmw r23, 0x23c(r1)
    lwz r0, 0x264(r1)
    mtlr r0
    addi r1, r1, 0x260
    blr
}

asm void fn_8011B3D8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, lbl_8087EF70
    cmpwi r0, 0x0
    beq lbl_fn_8011B3D8_00001548
    mr r3, r0
    li r4, 0x0
    li r5, 0x0
    bl fn_800A55AC
    b lbl_fn_8011B3D8_0000154C
lbl_fn_8011B3D8_00001548:
    li r3, 0x0
lbl_fn_8011B3D8_0000154C:
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_fn_8011B3D8_00001588
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_8011B3D8_00001578
    li r4, 0x0
    li r5, 0x1a
    bl fn_800A55AC
    b lbl_fn_8011B3D8_0000157C
lbl_fn_8011B3D8_00001578:
    li r3, 0x0
lbl_fn_8011B3D8_0000157C:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_8011B3D8_00001588:
    cmpwi r0, 0x0
    beq lbl_fn_8011B3D8_000015DC
    lwz r3, 0x154(r30)
    subic. r0, r3, 0x1
    stw r0, 0x154(r30)
    bge lbl_fn_8011B3D8_000015C0
    cmpwi r31, 0x0
    beq lbl_fn_8011B3D8_000015B8
    lwz r3, 0x158(r30)
    subi r0, r3, 0x1
    stw r0, 0x154(r30)
    b lbl_fn_8011B3D8_000015C0
lbl_fn_8011B3D8_000015B8:
    li r0, 0x0
    stw r0, 0x154(r30)
lbl_fn_8011B3D8_000015C0:
    addi r3, r1, 0xc
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8011B3D8_0000168C
lbl_fn_8011B3D8_000015DC:
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_8011B3D8_000015F8
    li r4, 0x0
    li r5, 0x1
    bl fn_800A55AC
    b lbl_fn_8011B3D8_000015FC
lbl_fn_8011B3D8_000015F8:
    li r3, 0x0
lbl_fn_8011B3D8_000015FC:
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_fn_8011B3D8_00001638
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_8011B3D8_00001628
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55AC
    b lbl_fn_8011B3D8_0000162C
lbl_fn_8011B3D8_00001628:
    li r3, 0x0
lbl_fn_8011B3D8_0000162C:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_8011B3D8_00001638:
    cmpwi r0, 0x0
    beq lbl_fn_8011B3D8_0000168C
    lwz r3, 0x154(r30)
    lwz r4, 0x158(r30)
    addi r0, r3, 0x1
    stw r0, 0x154(r30)
    cmpw r0, r4
    blt lbl_fn_8011B3D8_00001674
    cmpwi r31, 0x0
    beq lbl_fn_8011B3D8_0000166C
    li r0, 0x0
    stw r0, 0x154(r30)
    b lbl_fn_8011B3D8_00001674
lbl_fn_8011B3D8_0000166C:
    subi r0, r4, 0x1
    stw r0, 0x154(r30)
lbl_fn_8011B3D8_00001674:
    addi r3, r1, 0x8
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8011B3D8_0000168C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
