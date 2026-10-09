#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _savegpr_25(void);
extern void fn_8008BBD8(void);
extern void fn_800C16B4(void);
extern void fn_800CF45C(void);
extern void fn_800CF7DC(void);
extern void fn_80112840(void);
extern void fn_801129C0(void);
extern void fn_8011462C(void);
extern void fn_8047F850(void);
extern void fn_8047F8A4(void);
extern void fn_80481818(void);
extern void fn_80491528(void);
extern void fn_805381A4(void);
extern void fn_805381CC(void);
extern void fn_80541214(void);
extern void fn_8055D004(void);
extern void fn_80682428(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_8075EC98[];
extern u8 lbl_8075ECA0[];
extern u8 lbl_80794D78[];
extern u8 lbl_80794D84[];
extern u8 lbl_80794DB8[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C9238[];
extern u8 lbl_807C9240[];

/* Small data declarations */
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F540;
extern u32 lbl_8087F558;
extern u32 lbl_8087F980;
extern u32 lbl_8087F981;
extern u32 lbl_80887E70;
extern u32 lbl_80887E78;
extern u32 lbl_80887E7C;
extern u32 lbl_80887E80;
extern u32 lbl_80887E84;
extern u32 lbl_80887E88;
extern u32 lbl_80887E8C;
extern u32 lbl_80887E90;
extern u32 lbl_80887E94;
extern u32 lbl_80887E98;
extern u32 lbl_80887E9C;
extern u32 lbl_80887EA0;
extern u32 lbl_80887EA4;

/* Function declarations */
void fn_8055B5E8(void);
void fn_8055B72C(void);
void fn_8055B900(void);
void fn_8055B980(void);
void fn_8055BB0C(void);
void fn_8055BC60(void);
void fn_8055BCAC(void);
void fn_8055CEF4(void);
void fn_8055CF20(void);
void fn_8055CFD8(void);

asm void fn_8055B5E8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lis r0, 0x4330
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    mr r3, r30
    stw r0, 0x8(r1)
    stw r0, 0x10(r1)
    bl fn_805381CC
    mr r31, r3
    mr r3, r30
    bl fn_805381A4
    lwz r0, 0x30(r30)
    lfs f3, 0x198(r31)
    cmpwi r0, 0x0
    lwz r6, 0x10(r30)
    ble lbl_fn_8055B5E8_00000054
    lwz r4, 0x2c(r30)
    b lbl_fn_8055B5E8_00000058
lbl_fn_8055B5E8_00000054:
    li r4, 0x0
lbl_fn_8055B5E8_00000058:
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8055B5E8_000000C4
    lwz r5, 0x18(r30)
    cmpwi r5, 0x0
    bgt lbl_fn_8055B5E8_00000078
    li r3, 0x0
    b lbl_fn_8055B5E8_0000012C
lbl_fn_8055B5E8_00000078:
    xoris r0, r6, 0x8000
    stw r0, 0xc(r1)
    lis r4, lbl_8075EC98@ha
    lfd f2, lbl_8075EC98@l(r4)
    xoris r0, r5, 0x8000
    lfd f0, 0x8(r1)
    stw r0, 0x14(r1)
    fsubs f1, f0, f2
    lwz r0, 0x10(r3)
    lfd f0, 0x10(r1)
    mulli r0, r0, 0x65c
    lwz r3, lbl_8087F540
    fsubs f1, f3, f1
    fsubs f0, f0, f2
    add r3, r3, r0
    addi r3, r3, 0xc8
    fdivs f1, f1, f0
    bl fn_801129C0
    b lbl_fn_8055B5E8_00000128
lbl_fn_8055B5E8_000000C4:
    cmpwi r0, 0x4
    bne lbl_fn_8055B5E8_00000128
    lwz r0, 0x14(r30)
    subf. r5, r6, r0
    bgt lbl_fn_8055B5E8_000000E0
    li r3, 0x0
    b lbl_fn_8055B5E8_0000012C
lbl_fn_8055B5E8_000000E0:
    xoris r0, r6, 0x8000
    stw r0, 0xc(r1)
    lis r4, lbl_8075EC98@ha
    lfd f2, lbl_8075EC98@l(r4)
    xoris r0, r5, 0x8000
    lfd f0, 0x8(r1)
    stw r0, 0x14(r1)
    fsubs f1, f0, f2
    lwz r0, 0x10(r3)
    lfd f0, 0x10(r1)
    mulli r0, r0, 0x65c
    lwz r3, lbl_8087F540
    fsubs f1, f3, f1
    fsubs f0, f0, f2
    add r3, r3, r0
    addi r3, r3, 0xc8
    fdivs f1, f1, f0
    bl fn_801129C0
lbl_fn_8055B5E8_00000128:
    li r3, 0x0
lbl_fn_8055B5E8_0000012C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8055B72C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    subi r0, r5, 0x3
    cmplwi r0, 0x1
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    ble lbl_fn_8055B72C_000002C4
    cmpwi r5, 0x0
    bne lbl_fn_8055B72C_000002FC
    lwz r3, lbl_8087F540
    bl fn_80481818
    mr r3, r30
    bl fn_805381A4
    mr r31, r3
    mr r3, r30
    bl fn_805381CC
    lwz r0, 0x30(r30)
    cmpwi r0, 0x0
    ble lbl_fn_8055B72C_000001A0
    lwz r3, 0x2c(r30)
    b lbl_fn_8055B72C_000001A4
lbl_fn_8055B72C_000001A0:
    li r3, 0x0
lbl_fn_8055B72C_000001A4:
    lfs f0, 0x4(r3)
    stfs f0, 0x14(r1)
    lwz r0, 0x30(r30)
    cmpwi r0, 0x1
    ble lbl_fn_8055B72C_000001C4
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x8
    b lbl_fn_8055B72C_000001C8
lbl_fn_8055B72C_000001C4:
    li r3, 0x0
lbl_fn_8055B72C_000001C8:
    lfs f0, 0x4(r3)
    stfs f0, 0x18(r1)
    lwz r0, 0x30(r30)
    cmpwi r0, 0x2
    ble lbl_fn_8055B72C_000001E8
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x10
    b lbl_fn_8055B72C_000001EC
lbl_fn_8055B72C_000001E8:
    li r3, 0x0
lbl_fn_8055B72C_000001EC:
    lfs f0, 0x4(r3)
    stfs f0, 0x1c(r1)
    lwz r0, 0x30(r30)
    cmpwi r0, 0x3
    ble lbl_fn_8055B72C_0000020C
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x18
    b lbl_fn_8055B72C_00000210
lbl_fn_8055B72C_0000020C:
    li r3, 0x0
lbl_fn_8055B72C_00000210:
    cmpwi r0, 0x4
    lfs f1, 0x4(r3)
    ble lbl_fn_8055B72C_00000228
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x20
    b lbl_fn_8055B72C_0000022C
lbl_fn_8055B72C_00000228:
    li r3, 0x0
lbl_fn_8055B72C_0000022C:
    lfs f0, 0x4(r3)
    stfs f0, 0x8(r1)
    lwz r0, 0x30(r30)
    cmpwi r0, 0x5
    ble lbl_fn_8055B72C_0000024C
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x28
    b lbl_fn_8055B72C_00000250
lbl_fn_8055B72C_0000024C:
    li r3, 0x0
lbl_fn_8055B72C_00000250:
    lfs f0, 0x4(r3)
    stfs f0, 0xc(r1)
    lwz r0, 0x30(r30)
    cmpwi r0, 0x6
    ble lbl_fn_8055B72C_00000270
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x30
    b lbl_fn_8055B72C_00000274
lbl_fn_8055B72C_00000270:
    li r3, 0x0
lbl_fn_8055B72C_00000274:
    lfs f0, 0x4(r3)
    stfs f0, 0x10(r1)
    lwz r0, 0x30(r30)
    cmpwi r0, 0x7
    ble lbl_fn_8055B72C_00000294
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x38
    b lbl_fn_8055B72C_00000298
lbl_fn_8055B72C_00000294:
    li r3, 0x0
lbl_fn_8055B72C_00000298:
    lwz r0, 0x10(r31)
    addi r5, r1, 0x14
    lfs f2, 0x4(r3)
    addi r6, r1, 0x8
    mulli r0, r0, 0x65c
    lwz r3, lbl_8087F540
    li r4, 0x1
    add r3, r3, r0
    addi r3, r3, 0xc8
    bl fn_8011462C
    b lbl_fn_8055B72C_000002FC
lbl_fn_8055B72C_000002C4:
    mr r3, r30
    bl fn_805381A4
    lwz r0, 0x10(r3)
    lis r5, lbl_807C7030@ha
    lfs f1, lbl_80887E78
    addi r5, r5, lbl_807C7030@l
    mulli r0, r0, 0x65c
    lwz r3, lbl_8087F540
    fmr f2, f1
    mr r6, r5
    li r4, 0x0
    add r3, r3, r0
    addi r3, r3, 0xc8
    bl fn_8011462C
lbl_fn_8055B72C_000002FC:
    lwz r31, 0x2c(r1)
    li r3, 0x0
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8055B900(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bne lbl_fn_8055B900_00000380
    lwz r3, lbl_8087F540
    bl fn_80481818
    mr r3, r31
    bl fn_805381A4
    lwz r0, 0x30(r31)
    cmpwi r0, 0x0
    ble lbl_fn_8055B900_00000358
    lwz r4, 0x2c(r31)
    b lbl_fn_8055B900_0000035C
lbl_fn_8055B900_00000358:
    li r4, 0x0
lbl_fn_8055B900_0000035C:
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8055B900_00000380
    lwz r0, 0x10(r3)
    lwz r3, lbl_8087F540
    mulli r0, r0, 0x65c
    add r3, r3, r0
    addi r3, r3, 0xc8
    bl fn_80112840
lbl_fn_8055B900_00000380:
    lwz r31, 0xc(r1)
    li r3, 0x0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8055B980(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    mr r3, r31
    stw r30, 0x18(r1)
    bl fn_805381A4
    mr r30, r3
    mr r3, r31
    bl fn_805381CC
    lwz r6, 0x10(r31)
    lis r0, 0x4330
    lwz r5, 0x18(r31)
    lis r4, lbl_8075EC98@ha
    stw r0, 0x8(r1)
    add r0, r6, r5
    lfd f2, lbl_8075EC98@l(r4)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfs f3, 0x198(r3)
    lfd f1, 0x8(r1)
    lfs f0, lbl_80887E78
    fsubs f1, f1, f2
    fsubs f2, f1, f3
    fcmpo cr0, f2, f0
    ble lbl_fn_8055B980_00000424
    lwz r3, lbl_8087F540
    lfs f0, lbl_80887E7C
    lfs f1, 0xb4(r3)
    fdivs f3, f1, f2
    fcmpo cr0, f3, f0
    ble lbl_fn_8055B980_00000428
    fmr f3, f0
    b lbl_fn_8055B980_00000428
lbl_fn_8055B980_00000424:
    lfs f3, lbl_80887E7C
lbl_fn_8055B980_00000428:
    lwz r3, 0x10(r30)
    lwz r0, 0x30(r31)
    mulli r3, r3, 0x65c
    lwz r4, lbl_8087F540
    cmpwi r0, 0x1
    add r4, r4, r3
    ble lbl_fn_8055B980_00000450
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x8
    b lbl_fn_8055B980_00000454
lbl_fn_8055B980_00000450:
    li r3, 0x0
lbl_fn_8055B980_00000454:
    lfs f1, 0x4(r3)
    lfs f0, lbl_80887E78
    fcmpu cr0, f0, f1
    beq lbl_fn_8055B980_00000480
    lfs f0, lbl_80887E70
    lfs f2, 0x118(r4)
    fmuls f0, f0, f1
    fsubs f0, f0, f2
    fmadds f0, f3, f0, f2
    stfs f0, 0x2c4(r4)
    stfs f0, 0x118(r4)
lbl_fn_8055B980_00000480:
    lwz r0, 0x30(r31)
    cmpwi r0, 0x2
    ble lbl_fn_8055B980_00000498
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x10
    b lbl_fn_8055B980_0000049C
lbl_fn_8055B980_00000498:
    li r3, 0x0
lbl_fn_8055B980_0000049C:
    lfs f1, 0x4(r3)
    lfs f0, lbl_80887E78
    fcmpu cr0, f0, f1
    beq lbl_fn_8055B980_000004BC
    lfs f2, 0x11c(r4)
    fsubs f0, f1, f2
    fmadds f0, f3, f0, f2
    stfs f0, 0x11c(r4)
lbl_fn_8055B980_000004BC:
    lwz r0, 0x30(r31)
    cmpwi r0, 0x3
    ble lbl_fn_8055B980_000004D4
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x18
    b lbl_fn_8055B980_000004D8
lbl_fn_8055B980_000004D4:
    li r3, 0x0
lbl_fn_8055B980_000004D8:
    lfs f1, 0x4(r3)
    lfs f0, lbl_80887E78
    fcmpu cr0, f0, f1
    cmpwi r0, 0x4
    ble lbl_fn_8055B980_000004F8
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x20
    b lbl_fn_8055B980_000004FC
lbl_fn_8055B980_000004F8:
    li r3, 0x0
lbl_fn_8055B980_000004FC:
    lfs f1, 0x4(r3)
    lfs f0, lbl_80887E78
    fcmpu cr0, f0, f1
    lwz r31, 0x1c(r1)
    li r3, 0x0
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8055BB0C(void)
{
    nofralloc
    lwz r6, 0x30(r5)
    lis r0, 0x4330
    stwu r1, -0x30(r1)
    cmpwi r6, 0x1
    stw r0, 0x18(r1)
    stw r0, 0x20(r1)
    ble lbl_fn_8055BB0C_0000054C
    lwz r3, 0x2c(r5)
    addi r3, r3, 0x8
    b lbl_fn_8055BB0C_00000550
lbl_fn_8055BB0C_0000054C:
    li r3, 0x0
lbl_fn_8055BB0C_00000550:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8055BB0C_00000668
    cmpwi r6, 0x2
    ble lbl_fn_8055BB0C_00000570
    lwz r3, 0x2c(r5)
    addi r3, r3, 0x10
    b lbl_fn_8055BB0C_00000574
lbl_fn_8055BB0C_00000570:
    li r3, 0x0
lbl_fn_8055BB0C_00000574:
    lwz r0, 0x30(r5)
    lwz r3, 0x4(r3)
    cmpwi r0, 0x3
    addi r0, r3, 0x1
    stw r0, 0x88(r4)
    ble lbl_fn_8055BB0C_00000598
    lwz r3, 0x2c(r5)
    addi r3, r3, 0x18
    b lbl_fn_8055BB0C_0000059C
lbl_fn_8055BB0C_00000598:
    li r3, 0x0
lbl_fn_8055BB0C_0000059C:
    lwz r0, 0x30(r5)
    lfs f0, 0x4(r3)
    cmpwi r0, 0x4
    stfs f0, 0x8c(r4)
    ble lbl_fn_8055BB0C_000005BC
    lwz r3, 0x2c(r5)
    addi r3, r3, 0x20
    b lbl_fn_8055BB0C_000005C0
lbl_fn_8055BB0C_000005BC:
    li r3, 0x0
lbl_fn_8055BB0C_000005C0:
    lwz r0, 0x30(r5)
    lfs f0, 0x4(r3)
    cmpwi r0, 0x5
    stfs f0, 0x90(r4)
    ble lbl_fn_8055BB0C_000005E0
    lwz r3, 0x2c(r5)
    addi r3, r3, 0x28
    b lbl_fn_8055BB0C_000005E4
lbl_fn_8055BB0C_000005E0:
    li r3, 0x0
lbl_fn_8055BB0C_000005E4:
    lwz r6, 0x4(r3)
    lis r3, lbl_8075ECA0@ha
    lfd f5, lbl_8075ECA0@l(r3)
    extrwi r0, r6, 8, 8
    stw r0, 0x1c(r1)
    extrwi r5, r6, 8, 16
    clrlwi r3, r6, 24
    lfd f0, 0x18(r1)
    srwi r0, r6, 24
    stw r5, 0x24(r1)
    fsubs f1, f0, f5
    lfs f4, lbl_80887E84
    lfd f0, 0x20(r1)
    stw r3, 0x1c(r1)
    fmuls f3, f4, f1
    fsubs f2, f0, f5
    stw r0, 0x24(r1)
    lfd f1, 0x18(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f1, f5
    stfs f3, 0x8(r1)
    fsubs f0, f0, f5
    fmuls f2, f4, f2
    stfs f3, 0x94(r4)
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    stfs f2, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f2, 0x98(r4)
    stfs f1, 0x9c(r4)
    stfs f0, 0xa0(r4)
    b lbl_fn_8055BB0C_00000670
lbl_fn_8055BB0C_00000668:
    li r0, 0x0
    stw r0, 0x88(r4)
lbl_fn_8055BB0C_00000670:
    addi r1, r1, 0x30
    blr
}

asm void fn_8055BC60(void)
{
    nofralloc
    lwz r0, 0x0(r5)
    stw r0, 0x244(r4)
    lwz r0, 0x4(r5)
    stw r0, 0x248(r4)
    lfs f0, 0x8(r5)
    stfs f0, 0x24c(r4)
    psq_l f1, 0xc(r5), 0, 0
    psq_st f1, 0x250(r4), 0, 0
    psq_l f1, 0x14(r5), 0, 0
    psq_st f1, 0x258(r4), 0, 0
    psq_l f1, 0x1c(r5), 0, 0
    psq_st f1, 0x260(r4), 0, 0
    psq_l f1, 0x24(r5), 0, 0
    psq_st f1, 0x268(r4), 0, 0
    psq_l f1, 0x2c(r5), 0, 0
    psq_l f2, 0x34(r5), 0, 0
    psq_st f2, 0x278(r4), 0, 0
    psq_st f1, 0x270(r4), 0, 0
    blr
}

asm void fn_8055BCAC(void)
{
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    addi r11, r1, 0x2a0
    stfd f31, 0x2d0(r1)
    psq_st f31, 0x2d8(r1), 0, 0
    stfd f30, 0x2c0(r1)
    psq_st f30, 0x2c8(r1), 0, 0
    stfd f29, 0x2b0(r1)
    psq_st f29, 0x2b8(r1), 0, 0
    stfd f28, 0x2a0(r1)
    psq_st f28, 0x2a8(r1), 0, 0
    bl _savegpr_25
    cmpwi r5, 0x0
    lis r0, 0x4330
    stw r0, 0x268(r1)
    mr r30, r3
    mr r31, r4
    stw r0, 0x270(r1)
    beq lbl_fn_8055BCAC_00000728
    cmpwi r5, 0x2
    beq lbl_fn_8055BCAC_000016C4
    cmpwi r5, 0x3
    beq lbl_fn_8055BCAC_00001728
    b lbl_fn_8055BCAC_000018D0
lbl_fn_8055BCAC_00000728:
    lwz r3, lbl_8087F540
    bl fn_80481818
    mr r3, r31
    bl fn_805381A4
    lwz r4, 0x30(r31)
    cmpwi r4, 0x0
    ble lbl_fn_8055BCAC_0000074C
    lwz r3, 0x2c(r31)
    b lbl_fn_8055BCAC_00000750
lbl_fn_8055BCAC_0000074C:
    li r3, 0x0
lbl_fn_8055BCAC_00000750:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1
    beq lbl_fn_8055BCAC_00000790
    cmpwi r0, 0x2
    beq lbl_fn_8055BCAC_00000C2C
    cmpwi r0, 0x3
    beq lbl_fn_8055BCAC_00000ECC
    cmpwi r0, 0x4
    beq lbl_fn_8055BCAC_00000ED8
    cmpwi r0, 0x5
    beq lbl_fn_8055BCAC_00001108
    cmpwi r0, 0x6
    beq lbl_fn_8055BCAC_000011A0
    cmpwi r0, 0x7
    beq lbl_fn_8055BCAC_00001644
    b lbl_fn_8055BCAC_000018D0
lbl_fn_8055BCAC_00000790:
    cmpwi r4, 0x1
    ble lbl_fn_8055BCAC_000007A4
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x8
    b lbl_fn_8055BCAC_000007A8
lbl_fn_8055BCAC_000007A4:
    li r3, 0x0
lbl_fn_8055BCAC_000007A8:
    lwz r25, 0x4(r3)
    cmpwi r25, 0x0
    beq lbl_fn_8055BCAC_00000C20
    lwz r26, lbl_8087EFA8
    lwz r0, 0x30(r31)
    lwz r27, 0x58(r26)
    lwz r28, 0x5c(r26)
    cmpwi r0, 0x2
    lwz r29, 0x60(r26)
    lwz r30, 0x64(r26)
    lfs f28, 0x68(r26)
    lfs f29, 0x6c(r26)
    lfs f30, 0x70(r26)
    lfs f31, 0x74(r26)
    lwz r12, 0x78(r26)
    lwz r11, 0x7c(r26)
    lwz r10, 0x80(r26)
    lwz r9, 0x84(r26)
    lwz r8, 0x88(r26)
    lfs f13, 0x8c(r26)
    lfs f12, 0x90(r26)
    lfs f11, 0x94(r26)
    lfs f10, 0x98(r26)
    lfs f9, 0x9c(r26)
    lfs f8, 0xa0(r26)
    lfs f7, 0xa4(r26)
    lfs f6, 0xa8(r26)
    lfs f5, 0xac(r26)
    lfs f4, 0xb0(r26)
    lfs f3, 0xb4(r26)
    lfs f0, 0xb8(r26)
    lwz r7, 0xbc(r26)
    lwz r6, 0xc0(r26)
    lwz r5, 0xc4(r26)
    lwz r4, 0xc8(r26)
    lwz r3, 0xcc(r26)
    lwz r0, 0xd0(r26)
    stw r27, 0x1ec(r1)
    stw r28, 0x1f0(r1)
    stw r29, 0x1f4(r1)
    stw r30, 0x1f8(r1)
    stfs f28, 0x1fc(r1)
    stfs f29, 0x200(r1)
    stfs f30, 0x204(r1)
    stfs f31, 0x208(r1)
    stw r12, 0x20c(r1)
    stw r11, 0x210(r1)
    stw r10, 0x214(r1)
    stw r9, 0x218(r1)
    stw r8, 0x21c(r1)
    stfs f13, 0x220(r1)
    stfs f12, 0x224(r1)
    stfs f11, 0x228(r1)
    stfs f10, 0x22c(r1)
    stfs f9, 0x230(r1)
    stfs f8, 0x234(r1)
    stfs f7, 0x238(r1)
    stfs f6, 0x23c(r1)
    stfs f5, 0x240(r1)
    stfs f4, 0x244(r1)
    stfs f3, 0x248(r1)
    stfs f0, 0x24c(r1)
    stw r7, 0x250(r1)
    stw r6, 0x254(r1)
    stw r5, 0x258(r1)
    stw r4, 0x25c(r1)
    stw r3, 0x260(r1)
    stw r0, 0x264(r1)
    stw r25, 0x1e8(r1)
    ble lbl_fn_8055BCAC_000008CC
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x10
    b lbl_fn_8055BCAC_000008D0
lbl_fn_8055BCAC_000008CC:
    li r3, 0x0
lbl_fn_8055BCAC_000008D0:
    lwz r6, 0x4(r3)
    lis r3, lbl_8075ECA0@ha
    lfd f7, lbl_8075ECA0@l(r3)
    li r4, 0x3
    extrwi r0, r6, 8, 8
    stw r0, 0x26c(r1)
    extrwi r3, r6, 8, 16
    clrlwi r5, r6, 24
    lfd f0, 0x268(r1)
    srwi r0, r6, 24
    stw r3, 0x274(r1)
    cmpwi r4, 0x0
    fsubs f3, f0, f7
    lfs f6, lbl_80887E84
    lfd f0, 0x270(r1)
    li r3, 0x0
    stw r5, 0x26c(r1)
    fmuls f5, f6, f3
    fsubs f4, f0, f7
    stw r0, 0x274(r1)
    lfd f3, 0x268(r1)
    lfd f0, 0x270(r1)
    fsubs f3, f3, f7
    stfs f5, 0xc0(r1)
    fsubs f0, f0, f7
    fmuls f4, f6, f4
    stfs f5, 0x220(r1)
    fmuls f3, f6, f3
    fmuls f0, f6, f0
    stfs f4, 0xc4(r1)
    stfs f3, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f4, 0x224(r1)
    stfs f3, 0x228(r1)
    stfs f0, 0x22c(r1)
    blt lbl_fn_8055BCAC_00000970
    lwz r0, 0x30(r31)
    cmpw r4, r0
    bge lbl_fn_8055BCAC_00000970
    li r3, 0x1
lbl_fn_8055BCAC_00000970:
    cmpwi r3, 0x0
    beq lbl_fn_8055BCAC_00000984
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x18
    b lbl_fn_8055BCAC_00000988
lbl_fn_8055BCAC_00000984:
    li r3, 0x0
lbl_fn_8055BCAC_00000988:
    li r4, 0x4
    lwz r0, 0x4(r3)
    cmpwi r4, 0x0
    stw r0, 0x250(r1)
    li r3, 0x0
    blt lbl_fn_8055BCAC_000009B0
    lwz r0, 0x30(r31)
    cmpw r4, r0
    bge lbl_fn_8055BCAC_000009B0
    li r3, 0x1
lbl_fn_8055BCAC_000009B0:
    cmpwi r3, 0x0
    beq lbl_fn_8055BCAC_000009C4
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x20
    b lbl_fn_8055BCAC_000009C8
lbl_fn_8055BCAC_000009C4:
    li r3, 0x0
lbl_fn_8055BCAC_000009C8:
    li r4, 0x5
    lwz r0, 0x4(r3)
    cmpwi r4, 0x0
    stw r0, 0x254(r1)
    li r3, 0x0
    blt lbl_fn_8055BCAC_000009F0
    lwz r0, 0x30(r31)
    cmpw r4, r0
    bge lbl_fn_8055BCAC_000009F0
    li r3, 0x1
lbl_fn_8055BCAC_000009F0:
    cmpwi r3, 0x0
    beq lbl_fn_8055BCAC_00000A04
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x28
    b lbl_fn_8055BCAC_00000A08
lbl_fn_8055BCAC_00000A04:
    li r3, 0x0
lbl_fn_8055BCAC_00000A08:
    li r4, 0x6
    lwz r0, 0x4(r3)
    cmpwi r4, 0x0
    stw r0, 0x258(r1)
    li r3, 0x0
    blt lbl_fn_8055BCAC_00000A30
    lwz r0, 0x30(r31)
    cmpw r4, r0
    bge lbl_fn_8055BCAC_00000A30
    li r3, 0x1
lbl_fn_8055BCAC_00000A30:
    cmpwi r3, 0x0
    beq lbl_fn_8055BCAC_00000A44
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x30
    b lbl_fn_8055BCAC_00000A48
lbl_fn_8055BCAC_00000A44:
    li r3, 0x0
lbl_fn_8055BCAC_00000A48:
    li r4, 0x7
    lwz r3, 0x4(r3)
    cmpwi r4, 0x0
    stw r3, 0x25c(r1)
    li r3, 0x0
    blt lbl_fn_8055BCAC_00000A70
    lwz r0, 0x30(r31)
    cmpw r4, r0
    bge lbl_fn_8055BCAC_00000A70
    li r3, 0x1
lbl_fn_8055BCAC_00000A70:
    cmpwi r3, 0x0
    beq lbl_fn_8055BCAC_00000A84
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x38
    b lbl_fn_8055BCAC_00000A88
lbl_fn_8055BCAC_00000A84:
    li r3, 0x0
lbl_fn_8055BCAC_00000A88:
    li r4, 0x8
    lwz r3, 0x4(r3)
    cmpwi r4, 0x0
    stw r3, 0x260(r1)
    li r3, 0x0
    blt lbl_fn_8055BCAC_00000AB0
    lwz r0, 0x30(r31)
    cmpw r4, r0
    bge lbl_fn_8055BCAC_00000AB0
    li r3, 0x1
lbl_fn_8055BCAC_00000AB0:
    cmpwi r3, 0x0
    beq lbl_fn_8055BCAC_00000AC4
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x40
    b lbl_fn_8055BCAC_00000AC8
lbl_fn_8055BCAC_00000AC4:
    li r3, 0x0
lbl_fn_8055BCAC_00000AC8:
    lwz r0, 0x30(r31)
    lwz r3, 0x4(r3)
    cmpwi r0, 0x9
    stw r3, 0x264(r1)
    ble lbl_fn_8055BCAC_00000AE8
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x48
    b lbl_fn_8055BCAC_00000AEC
lbl_fn_8055BCAC_00000AE8:
    li r3, 0x0
lbl_fn_8055BCAC_00000AEC:
    lwz r0, 0x4(r3)
    stw r0, 0x1f8(r1)
    cmpwi r0, 0x0
    bge lbl_fn_8055BCAC_00000B04
    li r0, 0x0
    stw r0, 0x1f8(r1)
lbl_fn_8055BCAC_00000B04:
    lwz r0, 0x1f8(r1)
    cmpwi r0, 0x80
    ble lbl_fn_8055BCAC_00000B18
    li r0, 0x80
    stw r0, 0x1f8(r1)
lbl_fn_8055BCAC_00000B18:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x1e8(r1)
    stw r0, 0x54(r3)
    lwz r0, 0x1ec(r1)
    stw r0, 0x58(r3)
    lwz r0, 0x1f0(r1)
    stw r0, 0x5c(r3)
    lwz r0, 0x1f4(r1)
    stw r0, 0x60(r3)
    lwz r0, 0x1f8(r1)
    stw r0, 0x64(r3)
    lfs f0, 0x1fc(r1)
    stfs f0, 0x68(r3)
    lfs f0, 0x200(r1)
    stfs f0, 0x6c(r3)
    lfs f0, 0x204(r1)
    stfs f0, 0x70(r3)
    lfs f0, 0x208(r1)
    stfs f0, 0x74(r3)
    lwz r0, 0x20c(r1)
    stw r0, 0x78(r3)
    lwz r0, 0x210(r1)
    stw r0, 0x7c(r3)
    lwz r0, 0x214(r1)
    stw r0, 0x80(r3)
    lwz r0, 0x218(r1)
    stw r0, 0x84(r3)
    lwz r0, 0x21c(r1)
    stw r0, 0x88(r3)
    lwz r0, 0x220(r1)
    stw r0, 0x8c(r3)
    lwz r0, 0x224(r1)
    stw r0, 0x90(r3)
    lwz r0, 0x228(r1)
    stw r0, 0x94(r3)
    lwz r0, 0x22c(r1)
    stw r0, 0x98(r3)
    lwz r0, 0x230(r1)
    stw r0, 0x9c(r3)
    lwz r0, 0x234(r1)
    stw r0, 0xa0(r3)
    lwz r0, 0x238(r1)
    stw r0, 0xa4(r3)
    lwz r0, 0x23c(r1)
    stw r0, 0xa8(r3)
    lwz r0, 0x240(r1)
    stw r0, 0xac(r3)
    lwz r0, 0x244(r1)
    stw r0, 0xb0(r3)
    lwz r0, 0x248(r1)
    stw r0, 0xb4(r3)
    lwz r0, 0x24c(r1)
    stw r0, 0xb8(r3)
    lwz r0, 0x250(r1)
    stw r0, 0xbc(r3)
    lwz r0, 0x254(r1)
    stw r0, 0xc0(r3)
    lwz r0, 0x258(r1)
    stw r0, 0xc4(r3)
    lwz r0, 0x25c(r1)
    stw r0, 0xc8(r3)
    lwz r0, 0x260(r1)
    stw r0, 0xcc(r3)
    lwz r0, 0x264(r1)
    stw r0, 0xd0(r3)
    b lbl_fn_8055BCAC_000018D0
lbl_fn_8055BCAC_00000C20:
    lwz r3, lbl_8087EFA8
    stw r25, 0x54(r3)
    b lbl_fn_8055BCAC_000018D0
lbl_fn_8055BCAC_00000C2C:
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    lwz r5, 0x30(r31)
    cmpwi r5, 0x1
    ble lbl_fn_8055BCAC_00000C4C
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x8
    b lbl_fn_8055BCAC_00000C50
lbl_fn_8055BCAC_00000C4C:
    li r4, 0x0
lbl_fn_8055BCAC_00000C50:
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8055BCAC_00000D68
    cmpwi r5, 0x2
    ble lbl_fn_8055BCAC_00000C70
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x10
    b lbl_fn_8055BCAC_00000C74
lbl_fn_8055BCAC_00000C70:
    li r4, 0x0
lbl_fn_8055BCAC_00000C74:
    lwz r4, 0x4(r4)
    addi r0, r4, 0x1
    stw r0, 0x3c(r3)
    lwz r0, 0x30(r31)
    cmpwi r0, 0x3
    ble lbl_fn_8055BCAC_00000C98
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x18
    b lbl_fn_8055BCAC_00000C9C
lbl_fn_8055BCAC_00000C98:
    li r4, 0x0
lbl_fn_8055BCAC_00000C9C:
    lfs f0, 0x4(r4)
    stfs f0, 0x40(r3)
    lwz r0, 0x30(r31)
    cmpwi r0, 0x4
    ble lbl_fn_8055BCAC_00000CBC
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x20
    b lbl_fn_8055BCAC_00000CC0
lbl_fn_8055BCAC_00000CBC:
    li r4, 0x0
lbl_fn_8055BCAC_00000CC0:
    lfs f0, 0x4(r4)
    stfs f0, 0x44(r3)
    lwz r0, 0x30(r31)
    cmpwi r0, 0x5
    ble lbl_fn_8055BCAC_00000CE0
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x28
    b lbl_fn_8055BCAC_00000CE4
lbl_fn_8055BCAC_00000CE0:
    li r4, 0x0
lbl_fn_8055BCAC_00000CE4:
    lwz r6, 0x4(r4)
    lis r4, lbl_8075ECA0@ha
    lfd f7, lbl_8075ECA0@l(r4)
    extrwi r0, r6, 8, 8
    stw r0, 0x26c(r1)
    extrwi r5, r6, 8, 16
    clrlwi r4, r6, 24
    lfd f0, 0x268(r1)
    srwi r0, r6, 24
    stw r5, 0x274(r1)
    fsubs f3, f0, f7
    lfs f6, lbl_80887E84
    lfd f0, 0x270(r1)
    stw r4, 0x26c(r1)
    fmuls f5, f6, f3
    fsubs f4, f0, f7
    stw r0, 0x274(r1)
    lfd f3, 0x268(r1)
    lfd f0, 0x270(r1)
    fsubs f3, f3, f7
    stfs f5, 0x48(r3)
    fmuls f4, f6, f4
    fsubs f0, f0, f7
    stfs f5, 0x80(r1)
    fmuls f3, f6, f3
    stfs f4, 0x4c(r3)
    fmuls f0, f6, f0
    stfs f3, 0x50(r3)
    stfs f4, 0x84(r1)
    stfs f3, 0x88(r1)
    stfs f0, 0x8c(r1)
    stfs f0, 0x54(r3)
    b lbl_fn_8055BCAC_00000D70
lbl_fn_8055BCAC_00000D68:
    li r0, 0x0
    stw r0, 0x3c(r3)
lbl_fn_8055BCAC_00000D70:
    lbz r0, lbl_8087F981
    lis r6, lbl_80794D78@ha
    lwzu r5, lbl_80794D78@l(r6)
    li r3, 0x0
    extsb. r0, r0
    stw r5, 0x74(r1)
    lwz r4, 0x4(r6)
    lwz r0, 0x8(r6)
    stw r4, 0x78(r1)
    stw r0, 0x7c(r1)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    stw r0, 0x70(r1)
    stw r5, 0xb0(r1)
    stw r4, 0xb4(r1)
    stw r0, 0xb8(r1)
    stw r30, 0xbc(r1)
    stw r3, 0x104(r1)
    bne lbl_fn_8055BCAC_00000DE4
    lis r6, lbl_807C9240@ha
    lis r4, fn_8055CFD8@ha
    lis r3, fn_8055D004@ha
    li r0, 0x1
    addi r3, r3, fn_8055D004@l
    addi r5, r6, lbl_807C9240@l
    addi r4, r4, fn_8055CFD8@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C9240@l(r6)
    stb r0, lbl_8087F981
lbl_fn_8055BCAC_00000DE4:
    lwz r6, 0xb0(r1)
    addi r3, r1, 0x58
    lwz r5, 0xb4(r1)
    lwz r4, 0xb8(r1)
    lwz r0, 0xbc(r1)
    stw r6, 0x58(r1)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r0, 0x64(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8055BCAC_00000E58
    addic. r0, r1, 0x108
    lwz r5, 0x58(r1)
    lwz r4, 0x5c(r1)
    lwz r3, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r5, 0x48(r1)
    stw r4, 0x4c(r1)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    beq lbl_fn_8055BCAC_00000E50
    stw r5, 0x108(r1)
    stw r4, 0x10c(r1)
    stw r3, 0x110(r1)
    stw r0, 0x114(r1)
lbl_fn_8055BCAC_00000E50:
    li r0, 0x1
    b lbl_fn_8055BCAC_00000E5C
lbl_fn_8055BCAC_00000E58:
    li r0, 0x0
lbl_fn_8055BCAC_00000E5C:
    cmpwi r0, 0x0
    beq lbl_fn_8055BCAC_00000E74
    lis r3, lbl_807C9240@ha
    addi r3, r3, lbl_807C9240@l
    stw r3, 0x104(r1)
    b lbl_fn_8055BCAC_00000E7C
lbl_fn_8055BCAC_00000E74:
    li r0, 0x0
    stw r0, 0x104(r1)
lbl_fn_8055BCAC_00000E7C:
    lwz r3, lbl_8087F558
    mr r5, r31
    addi r4, r1, 0x104
    bl fn_80491528
    addic. r3, r1, 0x104
    beq lbl_fn_8055BCAC_000018D0
    lwz r4, 0x104(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8055BCAC_000018D0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8055BCAC_00000EC0
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8055BCAC_00000EC0:
    li r0, 0x0
    stw r0, 0x104(r1)
    b lbl_fn_8055BCAC_000018D0
lbl_fn_8055BCAC_00000ECC:
    li r0, 0x0
    stw r0, 0x38(r31)
    b lbl_fn_8055BCAC_000018D0
lbl_fn_8055BCAC_00000ED8:
    lwz r0, 0x30(r31)
    li r4, 0x0
    lfs f3, lbl_80887E7C
    li r3, 0x1
    lfs f0, lbl_80887E78
    cmpwi r0, 0x1
    stw r4, 0x1c4(r1)
    stfs f3, 0x1c8(r1)
    stfs f3, 0x1cc(r1)
    stfs f3, 0x1d0(r1)
    stfs f3, 0x1d4(r1)
    stfs f0, 0x1d8(r1)
    stfs f0, 0x1dc(r1)
    stfs f0, 0x1e0(r1)
    stw r3, 0x1c0(r1)
    ble lbl_fn_8055BCAC_00000F20
    lwz r3, 0x2c(r31)
    addi r4, r3, 0x8
lbl_fn_8055BCAC_00000F20:
    lwz r6, 0x4(r4)
    lis r5, lbl_8075ECA0@ha
    lwz r0, 0x30(r31)
    extrwi r3, r6, 8, 8
    stw r3, 0x26c(r1)
    extrwi r3, r6, 8, 16
    clrlwi r4, r6, 24
    stw r3, 0x274(r1)
    srwi r3, r6, 24
    lfd f0, 0x268(r1)
    cmpwi r0, 0x2
    lfd f4, 0x270(r1)
    lfd f7, lbl_8075ECA0@l(r5)
    stw r4, 0x26c(r1)
    fsubs f5, f0, f7
    lfs f6, lbl_80887E84
    stw r3, 0x274(r1)
    fsubs f4, f4, f7
    lfd f3, 0x268(r1)
    lfd f0, 0x270(r1)
    fmuls f5, f6, f5
    fmuls f4, f6, f4
    fsubs f3, f3, f7
    stfs f5, 0xa0(r1)
    fsubs f0, f0, f7
    stfs f4, 0xa4(r1)
    fmuls f3, f6, f3
    fmuls f0, f6, f0
    stfs f5, 0x1c8(r1)
    stfs f3, 0xa8(r1)
    stfs f0, 0xac(r1)
    stfs f4, 0x1cc(r1)
    stfs f3, 0x1d0(r1)
    stfs f0, 0x1d4(r1)
    ble lbl_fn_8055BCAC_00000FB8
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x10
    b lbl_fn_8055BCAC_00000FBC
lbl_fn_8055BCAC_00000FB8:
    li r3, 0x0
lbl_fn_8055BCAC_00000FBC:
    lwz r0, 0x30(r31)
    lfs f0, 0x4(r3)
    cmpwi r0, 0x3
    stfs f0, 0x1d8(r1)
    ble lbl_fn_8055BCAC_00000FDC
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x18
    b lbl_fn_8055BCAC_00000FE0
lbl_fn_8055BCAC_00000FDC:
    li r3, 0x0
lbl_fn_8055BCAC_00000FE0:
    lwz r0, 0x30(r31)
    lfs f0, 0x4(r3)
    cmpwi r0, 0x4
    stfs f0, 0x1dc(r1)
    ble lbl_fn_8055BCAC_00001000
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x20
    b lbl_fn_8055BCAC_00001004
lbl_fn_8055BCAC_00001000:
    li r3, 0x0
lbl_fn_8055BCAC_00001004:
    lfs f0, 0x4(r3)
    lfs f3, lbl_80887E88
    fcmpo cr0, f0, f3
    ble lbl_fn_8055BCAC_00001030
    cmpwi r0, 0x4
    ble lbl_fn_8055BCAC_00001028
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x20
    b lbl_fn_8055BCAC_0000102C
lbl_fn_8055BCAC_00001028:
    li r3, 0x0
lbl_fn_8055BCAC_0000102C:
    lfs f3, 0x4(r3)
lbl_fn_8055BCAC_00001030:
    lfs f5, lbl_80887E8C
    fcmpo cr0, f3, f5
    bge lbl_fn_8055BCAC_00001080
    cmpwi r0, 0x4
    ble lbl_fn_8055BCAC_00001050
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x20
    b lbl_fn_8055BCAC_00001054
lbl_fn_8055BCAC_00001050:
    li r3, 0x0
lbl_fn_8055BCAC_00001054:
    lfs f0, 0x4(r3)
    lfs f5, lbl_80887E88
    fcmpo cr0, f0, f5
    ble lbl_fn_8055BCAC_00001080
    cmpwi r0, 0x4
    ble lbl_fn_8055BCAC_00001078
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x20
    b lbl_fn_8055BCAC_0000107C
lbl_fn_8055BCAC_00001078:
    li r3, 0x0
lbl_fn_8055BCAC_0000107C:
    lfs f5, 0x4(r3)
lbl_fn_8055BCAC_00001080:
    lwz r5, lbl_8087EFA8
    frsp f0, f5
    lwz r4, 0x1c0(r1)
    lfs f3, 0x1c8(r1)
    stfs f3, 0x144(r1)
    lwz r3, 0x1c4(r1)
    stw r4, 0x374(r5)
    lfs f3, 0x1cc(r1)
    stfs f3, 0x148(r1)
    lfs f3, 0x1d0(r1)
    stfs f3, 0x14c(r1)
    lfs f3, 0x1d4(r1)
    stfs f3, 0x150(r1)
    lfs f4, 0x1d8(r1)
    lfs f3, 0x1dc(r1)
    stw r3, 0x378(r5)
    lwz r0, 0x144(r1)
    stw r0, 0x37c(r5)
    lwz r0, 0x148(r1)
    stw r0, 0x380(r5)
    lwz r0, 0x14c(r1)
    stw r0, 0x384(r5)
    lwz r0, 0x150(r1)
    stw r0, 0x388(r5)
    stfs f4, 0x38c(r5)
    stfs f3, 0x390(r5)
    stfs f5, 0x1e0(r1)
    stw r4, 0x13c(r1)
    stw r3, 0x140(r1)
    stfs f4, 0x154(r1)
    stfs f3, 0x158(r1)
    stfs f0, 0x15c(r1)
    stfs f0, 0x394(r5)
    b lbl_fn_8055BCAC_000018D0
lbl_fn_8055BCAC_00001108:
    lfs f3, lbl_80887E7C
    cmpwi r4, 0x1
    li r3, 0x0
    lfs f0, lbl_80887E8C
    stw r3, 0xe0(r1)
    stw r3, 0xe4(r1)
    stfs f3, 0xe8(r1)
    stfs f0, 0xec(r1)
    ble lbl_fn_8055BCAC_00001134
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x8
lbl_fn_8055BCAC_00001134:
    lwz r0, 0x4(r3)
    cmpwi r4, 0x2
    stw r0, 0xe0(r1)
    ble lbl_fn_8055BCAC_00001150
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x10
    b lbl_fn_8055BCAC_00001154
lbl_fn_8055BCAC_00001150:
    li r3, 0x0
lbl_fn_8055BCAC_00001154:
    lfs f0, 0x4(r3)
    cmpwi r4, 0x3
    stfs f0, 0xec(r1)
    ble lbl_fn_8055BCAC_00001170
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x18
    b lbl_fn_8055BCAC_00001174
lbl_fn_8055BCAC_00001170:
    li r3, 0x0
lbl_fn_8055BCAC_00001174:
    lfs f3, 0x4(r3)
    lwz r3, lbl_8087EFA8
    lwz r0, 0xe0(r1)
    stw r0, 0x2ac(r3)
    lwz r0, 0xe4(r1)
    stw r0, 0x2b0(r3)
    lfs f0, 0xec(r1)
    stfs f3, 0x2b4(r3)
    stfs f3, 0xe8(r1)
    stfs f0, 0x2b8(r3)
    b lbl_fn_8055BCAC_000018D0
lbl_fn_8055BCAC_000011A0:
    lfs f8, lbl_80887E78
    li r0, 0x0
    lfs f4, lbl_80887E9C
    lfs f0, lbl_80887E7C
    lfs f9, lbl_80887E90
    lfs f7, lbl_80887E80
    lfs f6, lbl_80887E94
    lfs f5, lbl_80887E98
    lfs f3, lbl_80887EA0
    stw r0, 0x184(r1)
    stw r0, 0x188(r1)
    stfs f9, 0x18c(r1)
    stfs f8, 0x190(r1)
    stfs f7, 0x194(r1)
    stfs f6, 0x198(r1)
    stfs f5, 0x19c(r1)
    stfs f8, 0x1a0(r1)
    stfs f4, 0x1a4(r1)
    stfs f3, 0x1a8(r1)
    stfs f4, 0x1ac(r1)
    stfs f8, 0x1b0(r1)
    stfs f8, 0x1b4(r1)
    stfs f0, 0x1b8(r1)
    stfs f0, 0x1bc(r1)
    lwz r0, 0x30(r31)
    cmpwi r0, 0x1
    ble lbl_fn_8055BCAC_00001218
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x8
    b lbl_fn_8055BCAC_0000121C
lbl_fn_8055BCAC_00001218:
    li r3, 0x0
lbl_fn_8055BCAC_0000121C:
    lwz r0, 0x4(r3)
    stw r0, 0x184(r1)
    lwz r0, 0x30(r31)
    cmpwi r0, 0x2
    ble lbl_fn_8055BCAC_0000123C
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x10
    b lbl_fn_8055BCAC_00001240
lbl_fn_8055BCAC_0000123C:
    li r3, 0x0
lbl_fn_8055BCAC_00001240:
    lfs f0, 0x4(r3)
    stfs f0, 0x18c(r1)
    lwz r0, 0x30(r31)
    cmpwi r0, 0x3
    ble lbl_fn_8055BCAC_00001260
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x18
    b lbl_fn_8055BCAC_00001264
lbl_fn_8055BCAC_00001260:
    li r3, 0x0
lbl_fn_8055BCAC_00001264:
    lwz r0, 0x30(r31)
    lfs f0, 0x4(r3)
    cmpwi r0, 0x4
    stfs f0, 0x8(r1)
    ble lbl_fn_8055BCAC_00001284
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x20
    b lbl_fn_8055BCAC_00001288
lbl_fn_8055BCAC_00001284:
    li r3, 0x0
lbl_fn_8055BCAC_00001288:
    lfs f3, 0x8(r1)
    lfs f0, lbl_80887E78
    lfs f4, 0x4(r3)
    fcmpo cr0, f3, f0
    stfs f4, 0xc(r1)
    cror eq, lt, eq
    bne lbl_fn_8055BCAC_000012AC
    lfs f0, lbl_80887E80
    stfs f0, 0x8(r1)
lbl_fn_8055BCAC_000012AC:
    lfs f3, 0xc(r1)
    lfs f0, lbl_80887E78
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8055BCAC_000012C8
    lfs f0, lbl_80887E80
    stfs f0, 0xc(r1)
lbl_fn_8055BCAC_000012C8:
    addi r4, r1, 0x8
    addi r3, r1, 0x198
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lwz r0, 0x30(r31)
    cmpwi r0, 0x5
    ble lbl_fn_8055BCAC_000012F0
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x28
    b lbl_fn_8055BCAC_000012F4
lbl_fn_8055BCAC_000012F0:
    li r3, 0x0
lbl_fn_8055BCAC_000012F4:
    lwz r0, 0x30(r31)
    lfs f0, 0x4(r3)
    cmpwi r0, 0x6
    stfs f0, 0x8(r1)
    ble lbl_fn_8055BCAC_00001314
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x30
    b lbl_fn_8055BCAC_00001318
lbl_fn_8055BCAC_00001314:
    li r3, 0x0
lbl_fn_8055BCAC_00001318:
    lfs f0, 0x4(r3)
    addi r4, r1, 0x8
    stfs f0, 0xc(r1)
    addi r3, r1, 0x190
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lwz r0, 0x30(r31)
    cmpwi r0, 0x7
    ble lbl_fn_8055BCAC_00001348
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x38
    b lbl_fn_8055BCAC_0000134C
lbl_fn_8055BCAC_00001348:
    li r3, 0x0
lbl_fn_8055BCAC_0000134C:
    lwz r0, 0x30(r31)
    lfs f0, 0x4(r3)
    cmpwi r0, 0x8
    stfs f0, 0x8(r1)
    ble lbl_fn_8055BCAC_0000136C
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x40
    b lbl_fn_8055BCAC_00001370
lbl_fn_8055BCAC_0000136C:
    li r3, 0x0
lbl_fn_8055BCAC_00001370:
    lfs f0, 0x4(r3)
    addi r4, r1, 0x8
    stfs f0, 0xc(r1)
    addi r3, r1, 0x1a0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lwz r0, 0x30(r31)
    cmpwi r0, 0x9
    ble lbl_fn_8055BCAC_000013A0
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x48
    b lbl_fn_8055BCAC_000013A4
lbl_fn_8055BCAC_000013A0:
    li r3, 0x0
lbl_fn_8055BCAC_000013A4:
    lwz r0, 0x30(r31)
    lfs f0, 0x4(r3)
    cmpwi r0, 0xa
    stfs f0, 0x8(r1)
    ble lbl_fn_8055BCAC_000013C4
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x50
    b lbl_fn_8055BCAC_000013C8
lbl_fn_8055BCAC_000013C4:
    li r3, 0x0
lbl_fn_8055BCAC_000013C8:
    lfs f0, 0x4(r3)
    addi r4, r1, 0x8
    stfs f0, 0xc(r1)
    addi r3, r1, 0x1a8
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lwz r0, 0x30(r31)
    cmpwi r0, 0xb
    ble lbl_fn_8055BCAC_000013F8
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x58
    b lbl_fn_8055BCAC_000013FC
lbl_fn_8055BCAC_000013F8:
    li r3, 0x0
lbl_fn_8055BCAC_000013FC:
    lwz r0, 0x30(r31)
    lfs f0, 0x4(r3)
    cmpwi r0, 0xc
    stfs f0, 0xd0(r1)
    ble lbl_fn_8055BCAC_0000141C
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x60
    b lbl_fn_8055BCAC_00001420
lbl_fn_8055BCAC_0000141C:
    li r3, 0x0
lbl_fn_8055BCAC_00001420:
    lwz r0, 0x30(r31)
    lfs f0, 0x4(r3)
    cmpwi r0, 0xd
    stfs f0, 0xd4(r1)
    ble lbl_fn_8055BCAC_00001440
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x68
    b lbl_fn_8055BCAC_00001444
lbl_fn_8055BCAC_00001440:
    li r3, 0x0
lbl_fn_8055BCAC_00001444:
    lwz r0, 0x30(r31)
    lfs f0, 0x4(r3)
    cmpwi r0, 0xe
    stfs f0, 0xd8(r1)
    ble lbl_fn_8055BCAC_00001464
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x70
    b lbl_fn_8055BCAC_00001468
lbl_fn_8055BCAC_00001464:
    li r3, 0x0
lbl_fn_8055BCAC_00001468:
    lfs f0, 0x4(r3)
    addi r3, r1, 0xd0
    stfs f0, 0xdc(r1)
    addi r26, r1, 0x1b0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    lwz r3, lbl_8087EFB4
    psq_st f2, 0x8(r26), 0, 0
    bl fn_800C16B4
    lwz r0, 0x184(r1)
    addi r5, r1, 0x190
    stw r0, 0x1f8(r3)
    addi r7, r1, 0x198
    addi r8, r1, 0x1a0
    addi r9, r1, 0x1a8
    lwz r0, 0x188(r1)
    lis r6, lbl_80794D84@ha
    stw r0, 0x1fc(r3)
    li r4, 0x0
    lfs f0, 0x18c(r1)
    stfs f0, 0x200(r3)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x204(r3), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x20c(r3), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    psq_st f1, 0x214(r3), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    psq_st f1, 0x21c(r3), 0, 0
    psq_l f2, 0x8(r26), 0, 0
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x224(r3), 0, 0
    psq_st f2, 0x22c(r3), 0, 0
    lbz r0, lbl_8087F980
    lwzu r5, lbl_80794D84@l(r6)
    extsb. r0, r0
    stw r5, 0x3c(r1)
    lwz r3, 0x4(r6)
    lwz r0, 0x8(r6)
    stw r3, 0x40(r1)
    stw r0, 0x44(r1)
    stw r5, 0x30(r1)
    stw r3, 0x34(r1)
    stw r0, 0x38(r1)
    stw r5, 0x90(r1)
    stw r3, 0x94(r1)
    stw r0, 0x98(r1)
    stw r30, 0x9c(r1)
    stw r4, 0xf0(r1)
    bne lbl_fn_8055BCAC_0000155C
    lis r6, lbl_807C9238@ha
    lis r4, fn_8055CEF4@ha
    lis r3, fn_8055CF20@ha
    li r0, 0x1
    addi r3, r3, fn_8055CF20@l
    addi r5, r6, lbl_807C9238@l
    addi r4, r4, fn_8055CEF4@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C9238@l(r6)
    stb r0, lbl_8087F980
lbl_fn_8055BCAC_0000155C:
    lwz r6, 0x90(r1)
    addi r3, r1, 0x20
    lwz r5, 0x94(r1)
    lwz r4, 0x98(r1)
    lwz r0, 0x9c(r1)
    stw r6, 0x20(r1)
    stw r5, 0x24(r1)
    stw r4, 0x28(r1)
    stw r0, 0x2c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8055BCAC_000015D0
    addic. r0, r1, 0xf4
    lwz r5, 0x20(r1)
    lwz r4, 0x24(r1)
    lwz r3, 0x28(r1)
    lwz r0, 0x2c(r1)
    stw r5, 0x10(r1)
    stw r4, 0x14(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    beq lbl_fn_8055BCAC_000015C8
    stw r5, 0xf4(r1)
    stw r4, 0xf8(r1)
    stw r3, 0xfc(r1)
    stw r0, 0x100(r1)
lbl_fn_8055BCAC_000015C8:
    li r0, 0x1
    b lbl_fn_8055BCAC_000015D4
lbl_fn_8055BCAC_000015D0:
    li r0, 0x0
lbl_fn_8055BCAC_000015D4:
    cmpwi r0, 0x0
    beq lbl_fn_8055BCAC_000015EC
    lis r3, lbl_807C9238@ha
    addi r3, r3, lbl_807C9238@l
    stw r3, 0xf0(r1)
    b lbl_fn_8055BCAC_000015F4
lbl_fn_8055BCAC_000015EC:
    li r0, 0x0
    stw r0, 0xf0(r1)
lbl_fn_8055BCAC_000015F4:
    lwz r3, lbl_8087F558
    addi r4, r1, 0xf0
    addi r5, r1, 0x184
    bl fn_80491528
    addic. r3, r1, 0xf0
    beq lbl_fn_8055BCAC_000018D0
    lwz r4, 0xf0(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8055BCAC_000018D0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8055BCAC_00001638
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8055BCAC_00001638:
    li r0, 0x0
    stw r0, 0xf0(r1)
    b lbl_fn_8055BCAC_000018D0
lbl_fn_8055BCAC_00001644:
    lwz r0, 0x30(r31)
    li r3, 0x0
    stw r3, 0x38(r31)
    cmpwi r0, 0x1
    ble lbl_fn_8055BCAC_00001660
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x8
lbl_fn_8055BCAC_00001660:
    lwz r25, 0x4(r3)
    lwz r3, lbl_8087F540
    lfs f1, lbl_80887E88
    bl fn_8047F8A4
    lwz r3, lbl_8087F540
    clrlwi r5, r25, 8
    lwz r4, 0x18(r31)
    oris r6, r25, 0xff00
    bl fn_8047F850
    mr r3, r31
    bl fn_805381CC
    lwz r0, 0x190(r3)
    cmpwi r0, 0x151e
    bne lbl_fn_8055BCAC_000018D0
    lwz r4, 0x18(r31)
    cmpwi r4, 0x0
    ble lbl_fn_8055BCAC_000018D0
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_8055BCAC_000018D0
    subi r6, r4, 0x1e
    li r4, 0x1
    li r5, 0x4
    bl fn_800CF7DC
    b lbl_fn_8055BCAC_000018D0
lbl_fn_8055BCAC_000016C4:
    lwz r5, 0x30(r4)
    cmpwi r5, 0x0
    ble lbl_fn_8055BCAC_000016D8
    lwz r3, 0x2c(r4)
    b lbl_fn_8055BCAC_000016DC
lbl_fn_8055BCAC_000016D8:
    li r3, 0x0
lbl_fn_8055BCAC_000016DC:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x7
    bne lbl_fn_8055BCAC_000018D0
    cmpwi r5, 0x1
    ble lbl_fn_8055BCAC_000016FC
    lwz r3, 0x2c(r4)
    addi r3, r3, 0x8
    b lbl_fn_8055BCAC_00001700
lbl_fn_8055BCAC_000016FC:
    li r3, 0x0
lbl_fn_8055BCAC_00001700:
    lwz r25, 0x4(r3)
    lwz r3, lbl_8087F540
    lfs f1, lbl_80887E88
    bl fn_8047F8A4
    lwz r3, lbl_8087F540
    oris r5, r25, 0xff00
    lwz r4, 0x1c(r31)
    clrlwi r6, r25, 8
    bl fn_8047F850
    b lbl_fn_8055BCAC_000018D0
lbl_fn_8055BCAC_00001728:
    lwz r0, 0x30(r4)
    cmpwi r0, 0x0
    ble lbl_fn_8055BCAC_0000173C
    lwz r3, 0x2c(r4)
    b lbl_fn_8055BCAC_00001740
lbl_fn_8055BCAC_0000173C:
    li r3, 0x0
lbl_fn_8055BCAC_00001740:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8055BCAC_00001760
    cmpwi r0, 0x4
    beq lbl_fn_8055BCAC_000017B4
    cmpwi r0, 0x7
    beq lbl_fn_8055BCAC_00001844
    b lbl_fn_8055BCAC_000018D0
lbl_fn_8055BCAC_00001760:
    lwz r3, lbl_8087EFA8
    lwz r4, lbl_8087F540
    lwz r0, 0x240(r3)
    stw r0, 0x1dc0(r4)
    lwz r0, 0x244(r3)
    stw r0, 0x1dc4(r4)
    lwz r0, 0x248(r3)
    stw r0, 0x1dc8(r4)
    lfs f0, 0x24c(r3)
    stfs f0, 0x1dcc(r4)
    lfs f0, 0x250(r3)
    stfs f0, 0x1dd0(r4)
    lwz r0, 0x254(r3)
    stw r0, 0x1dd4(r4)
    lwz r0, 0x258(r3)
    stw r0, 0x1dd8(r4)
    lfs f0, 0x25c(r3)
    stfs f0, 0x1ddc(r4)
    lfs f0, 0x260(r3)
    stfs f0, 0x1de0(r4)
    b lbl_fn_8055BCAC_000018D0
lbl_fn_8055BCAC_000017B4:
    lwz r5, lbl_8087EFA8
    li r4, 0x0
    lfs f3, lbl_80887E7C
    stfs f3, 0x120(r1)
    lfs f0, lbl_80887E78
    stw r4, 0x374(r5)
    lwz r0, 0x120(r1)
    stw r4, 0x378(r5)
    stfs f3, 0x124(r1)
    stw r0, 0x37c(r5)
    lwz r3, 0x124(r1)
    stfs f3, 0x128(r1)
    stw r3, 0x380(r5)
    lwz r0, 0x128(r1)
    stfs f3, 0x12c(r1)
    stw r0, 0x384(r5)
    lwz r0, 0x12c(r1)
    stw r0, 0x388(r5)
    stfs f0, 0x38c(r5)
    stfs f0, 0x390(r5)
    stw r4, 0x164(r1)
    stfs f3, 0x168(r1)
    stfs f3, 0x16c(r1)
    stfs f3, 0x170(r1)
    stfs f3, 0x174(r1)
    stfs f0, 0x178(r1)
    stfs f0, 0x17c(r1)
    stfs f0, 0x180(r1)
    stw r4, 0x160(r1)
    stw r4, 0x118(r1)
    stw r4, 0x11c(r1)
    stfs f0, 0x130(r1)
    stfs f0, 0x134(r1)
    stfs f0, 0x138(r1)
    stfs f0, 0x394(r5)
    b lbl_fn_8055BCAC_000018D0
lbl_fn_8055BCAC_00001844:
    mr r3, r31
    bl fn_805381CC
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_8055BCAC_0000188C
    lwz r0, 0x190(r3)
    cmpwi r0, 0xc87
    beq lbl_fn_8055BCAC_00001898
    cmpwi r0, 0xfb5
    bne lbl_fn_8055BCAC_0000188C
    bl fn_80541214
    cmpwi r3, 0x0
    beq lbl_fn_8055BCAC_0000188C
    mr r3, r25
    bl fn_80541214
    lwz r0, 0xc(r3)
    cmpwi r0, 0xe
    beq lbl_fn_8055BCAC_00001898
lbl_fn_8055BCAC_0000188C:
    lwz r3, lbl_8087F540
    lfs f1, lbl_80887EA4
    bl fn_8047F8A4
lbl_fn_8055BCAC_00001898:
    mr r3, r31
    bl fn_805381CC
    lwz r0, 0x190(r3)
    cmpwi r0, 0x151e
    bne lbl_fn_8055BCAC_000018D0
    lwz r0, 0x18(r31)
    cmpwi r0, 0x0
    ble lbl_fn_8055BCAC_000018D0
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_8055BCAC_000018D0
    li r4, 0x0
    li r5, 0x0
    bl fn_800CF45C
lbl_fn_8055BCAC_000018D0:
    psq_l f31, 0x2d8(r1), 0, 0
    li r3, 0x0
    lfd f31, 0x2d0(r1)
    psq_l f30, 0x2c8(r1), 0, 0
    lfd f30, 0x2c0(r1)
    psq_l f29, 0x2b8(r1), 0, 0
    lfd f29, 0x2b0(r1)
    psq_l f28, 0x2a8(r1), 0, 0
    lfd f28, 0x2a0(r1)
    addi r11, r1, 0x2a0
    bl _restgpr_25
    lwz r0, 0x2e4(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

asm void fn_8055CEF4(void)
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

asm void fn_8055CF20(void)
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
    bne lbl_fn_8055CF20_0000196C
    lis r3, lbl_80794DB8@ha
    addi r3, r3, lbl_80794DB8@l
    stw r3, 0x0(r4)
    b lbl_fn_8055CF20_000019D8
lbl_fn_8055CF20_0000196C:
    cmpwi r5, 0x0
    bne lbl_fn_8055CF20_000019A0
    cmpwi r4, 0x0
    beq lbl_fn_8055CF20_000019D8
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_8055CF20_000019D8
lbl_fn_8055CF20_000019A0:
    cmpwi r5, 0x1
    beq lbl_fn_8055CF20_000019D8
    lwz r5, 0x0(r4)
    lis r3, lbl_80794DB8@ha
    lwz r4, lbl_80794DB8@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8055CF20_000019D0
    stw r30, 0x0(r31)
    b lbl_fn_8055CF20_000019D8
lbl_fn_8055CF20_000019D0:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8055CF20_000019D8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8055CFD8(void)
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
