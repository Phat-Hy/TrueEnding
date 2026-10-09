#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80060D58(void);
extern void fn_80061AE4(void);
extern void fn_8006EF48(void);
extern void fn_800A4450(void);
extern void fn_800A555C(void);
extern void fn_800A55D4(void);
extern void fn_800A58D0(void);
extern void fn_800CB3A0(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800DC6B4(void);
extern void fn_80116FC0(void);
extern void fn_80117228(void);
extern void fn_80119ECC(void);
extern void fn_80119F0C(void);
extern void fn_8011A4D0(void);
extern void fn_8011AD38(void);
extern void fn_8011B018(void);
extern void fn_8011B3D8(void);
extern void fn_8011B570(void);
extern void fn_8011BBD0(void);
extern void fn_8012AFE8(void);
extern void fn_801F4F84(void);
extern void fn_801FEC74(void);
extern void fn_801FECE0(void);
extern void fn_801FEDBC(void);
extern void fn_801FEE08(void);
extern void fn_8036E964(void);
extern void fn_80370174(void);
extern void fn_803B2FBC(void);
extern void fn_803B3270(void);
extern void fn_803B3310(void);
extern void fn_803B7FC8(void);
extern void fn_803B807C(void);
extern void fn_803B8144(void);
extern void fn_803BE854(void);
extern void fn_803BE8B4(void);
extern void fn_803BEAB4(void);
extern void fn_803BEB54(void);
extern void fn_805BC6CC(void);
extern void fn_806959D8(void);
extern void fn_80695D84(void);

/* External data declarations */
extern u8 lbl_80736AA8[];
extern u8 lbl_80736B10[];
extern u8 lbl_8077A0B0[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F460;
extern u32 lbl_80881748;
extern u32 lbl_8088174C;
extern u32 lbl_80881750;
extern u32 lbl_80881754;
extern u32 lbl_80881758;
extern u32 lbl_8088175C;
extern u32 lbl_80881760;
extern u32 lbl_80881764;
extern u32 lbl_80881768;
extern u32 lbl_8088176C;
extern u32 lbl_80881770;
extern u32 lbl_80881774;

/* Function declarations */
void fn_801185E0(void);
void fn_801189B4(void);
void fn_80119030(void);
void fn_801191A0(void);
void fn_801191A4(void);
void fn_801191A8(void);
void fn_8011968C(void);
void fn_8011979C(void);
void fn_8011999C(void);

asm void fn_801185E0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r6, 0x134(r3)
    lwz r0, 0x130(r3)
    slwi r5, r6, 3
    lwz r4, 0x12c(r3)
    slwi r0, r0, 2
    lwz r7, 0x128(r3)
    add r0, r5, r0
    cmpwi r6, 0x2
    add r4, r0, r4
    addi r0, r4, 0x1
    stw r0, 0x128(r3)
    bne lbl_fn_801185E0_0000005C
    li r0, 0x0
    stw r0, 0x128(r3)
lbl_fn_801185E0_0000005C:
    lwz r0, 0x128(r3)
    cmpw r7, r0
    beq lbl_fn_801185E0_00000070
    lfs f0, lbl_80881748
    stfs f0, 0x4c8(r3)
lbl_fn_801185E0_00000070:
    lwz r0, lbl_8087EF70
    cmpwi r0, 0x0
    beq lbl_fn_801185E0_000003B0
    lwz r0, 0x164(r3)
    lfs f31, lbl_80881748
    cmpwi r0, 0x0
    ble lbl_fn_801185E0_000000A4
    cmpwi r0, 0x2d
    beq lbl_fn_801185E0_00000098
    lfs f31, lbl_8088174C
lbl_fn_801185E0_00000098:
    lwz r4, 0x164(r3)
    subi r0, r4, 0x1
    stw r0, 0x164(r3)
lbl_fn_801185E0_000000A4:
    lwz r30, 0x70(r3)
    cmpwi r30, 0x0
    beq lbl_fn_801185E0_000000D0
    lis r3, lbl_80736B10@ha
    addi r3, r3, lbl_80736B10@l
    addi r3, r3, 0x23b
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r30, 0x58
    bl fn_801FECE0
lbl_fn_801185E0_000000D0:
    lwz r4, 0x118(r31)
    li r0, 0x0
    lfs f3, lbl_80881758
    lfs f1, 0x100(r4)
    lfs f0, lbl_80881748
    fcmpo cr0, f1, f3
    lfs f2, lbl_8088174C
    cror eq, gt, eq
    bne lbl_fn_801185E0_00000130
    lwz r3, 0x11c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801185E0_00000128
    stfs f2, 0x104(r4)
    lfs f4, 0xa0(r4)
    lfs f1, 0x100(r4)
    fcmpo cr0, f1, f4
    cror eq, gt, eq
    mfcr r3
    extrwi. r3, r3, 1, 2
    beq lbl_fn_801185E0_00000130
    stw r0, 0x11c(r31)
    b lbl_fn_801185E0_00000130
lbl_fn_801185E0_00000128:
    stfs f3, 0x100(r4)
    stfs f0, 0x104(r4)
lbl_fn_801185E0_00000130:
    lwz r4, 0x120(r31)
    lfs f1, 0x100(r4)
    fcmpo cr0, f1, f3
    cror eq, gt, eq
    bne lbl_fn_801185E0_00000180
    lwz r3, 0x124(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801185E0_00000178
    stfs f2, 0x104(r4)
    lfs f4, 0xa0(r4)
    lfs f1, 0x100(r4)
    fcmpo cr0, f1, f4
    cror eq, gt, eq
    mfcr r3
    extrwi. r3, r3, 1, 2
    beq lbl_fn_801185E0_00000180
    stw r0, 0x124(r31)
    b lbl_fn_801185E0_00000180
lbl_fn_801185E0_00000178:
    stfs f3, 0x100(r4)
    stfs f0, 0x104(r4)
lbl_fn_801185E0_00000180:
    lwz r0, 0x13c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801185E0_000001C0
    cmpwi r0, 0x1
    beq lbl_fn_801185E0_000001EC
    cmpwi r0, 0x3
    beq lbl_fn_801185E0_000001F8
    cmpwi r0, 0x4
    beq lbl_fn_801185E0_00000204
    cmpwi r0, 0x5
    beq lbl_fn_801185E0_00000210
    cmpwi r0, 0x6
    beq lbl_fn_801185E0_0000021C
    cmpwi r0, 0x9
    beq lbl_fn_801185E0_00000280
    b lbl_fn_801185E0_000002F8
lbl_fn_801185E0_000001C0:
    lwz r3, 0x70(r31)
    lfs f0, lbl_80881758
    lfs f1, 0x100(r3)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_801185E0_000002F8
    mr r3, r31
    li r4, 0x1
    li r5, 0x0
    bl fn_80119030
    b lbl_fn_801185E0_000002F8
lbl_fn_801185E0_000001EC:
    mr r3, r31
    bl fn_801191A8
    b lbl_fn_801185E0_000002F8
lbl_fn_801185E0_000001F8:
    mr r3, r31
    bl fn_8011979C
    b lbl_fn_801185E0_000002F8
lbl_fn_801185E0_00000204:
    mr r3, r31
    bl fn_8011968C
    b lbl_fn_801185E0_000002F8
lbl_fn_801185E0_00000210:
    mr r3, r31
    bl fn_8011999C
    b lbl_fn_801185E0_000002F8
lbl_fn_801185E0_0000021C:
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_801185E0_00000238
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    b lbl_fn_801185E0_0000023C
lbl_fn_801185E0_00000238:
    li r3, 0x0
lbl_fn_801185E0_0000023C:
    cmpwi r3, 0x0
    bne lbl_fn_801185E0_0000026C
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_801185E0_00000260
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    b lbl_fn_801185E0_00000264
lbl_fn_801185E0_00000260:
    li r3, 0x0
lbl_fn_801185E0_00000264:
    cmpwi r3, 0x0
    beq lbl_fn_801185E0_000002F8
lbl_fn_801185E0_0000026C:
    mr r3, r31
    li r4, 0x7
    li r5, 0x0
    bl fn_80119030
    b lbl_fn_801185E0_000002F8
lbl_fn_801185E0_00000280:
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_801185E0_0000029C
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    b lbl_fn_801185E0_000002A0
lbl_fn_801185E0_0000029C:
    li r3, 0x0
lbl_fn_801185E0_000002A0:
    cmpwi r3, 0x0
    bne lbl_fn_801185E0_000002D0
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_801185E0_000002C4
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    b lbl_fn_801185E0_000002C8
lbl_fn_801185E0_000002C4:
    li r3, 0x0
lbl_fn_801185E0_000002C8:
    cmpwi r3, 0x0
    beq lbl_fn_801185E0_000002F8
lbl_fn_801185E0_000002D0:
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x1
    li r5, 0x0
    bl fn_80119030
lbl_fn_801185E0_000002F8:
    lwz r29, 0x70(r31)
    cmpwi r29, 0x0
    beq lbl_fn_801185E0_00000368
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    bne lbl_fn_801185E0_0000033C
    lis r3, lbl_80736B10@ha
    lis r30, lbl_8077A0B0@ha
    addi r3, r3, lbl_80736B10@l
    addi r30, r30, lbl_8077A0B0@l
    addi r3, r3, 0x247
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r30
    addi r3, r29, 0x58
    bl fn_801FEE08
    b lbl_fn_801185E0_00000368
lbl_fn_801185E0_0000033C:
    lis r4, lbl_8077A0B0@ha
    lis r3, lbl_80736B10@ha
    addi r4, r4, lbl_8077A0B0@l
    addi r3, r3, lbl_80736B10@l
    addi r30, r4, 0x14
    addi r3, r3, 0x247
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r30
    addi r3, r29, 0x58
    bl fn_801FEE08
lbl_fn_801185E0_00000368:
    mr r3, r31
    bl fn_8011AD38
    lwz r3, 0x178(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801185E0_000003B0
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801185E0_000003B0
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x178(r31)
    lwz r0, 0x58(r3)
    cmpwi r0, 0x4
    bne lbl_fn_801185E0_000003B0
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x178(r31)
lbl_fn_801185E0_000003B0:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801189B4(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xa0
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    bl _savegpr_26
    mr r30, r3
    bl fn_80119F0C
    mr r3, r30
    bl fn_8011A4D0
    lwz r3, 0x60(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801189B4_00000448
    lwz r0, 0x13c(r30)
    cmpwi r0, 0x4
    bne lbl_fn_801189B4_00000440
    lwz r0, 0x170(r30)
    cmpwi r0, 0x2
    beq lbl_fn_801189B4_00000440
    lfs f0, lbl_8088175C
    stfs f0, 0x104(r3)
    b lbl_fn_801189B4_00000448
lbl_fn_801189B4_00000440:
    lfs f0, lbl_80881750
    stfs f0, 0x104(r3)
lbl_fn_801189B4_00000448:
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_801189B4_00000464
    li r4, 0x0
    li r5, 0x9
    bl fn_800A55D4
    b lbl_fn_801189B4_00000468
lbl_fn_801189B4_00000464:
    li r3, 0x0
lbl_fn_801189B4_00000468:
    cmpwi r3, 0x0
    beq lbl_fn_801189B4_00000478
    lfs f2, lbl_80881760
    b lbl_fn_801189B4_0000047C
lbl_fn_801189B4_00000478:
    lfs f2, lbl_80881764
lbl_fn_801189B4_0000047C:
    lfs f1, 0x4c8(r30)
    lfs f0, lbl_80881768
    fadds f1, f1, f2
    stfs f1, 0x4c8(r30)
    fcmpo cr0, f1, f0
    bge lbl_fn_801189B4_0000049C
    lfs f30, lbl_80881748
    b lbl_fn_801189B4_000004A0
lbl_fn_801189B4_0000049C:
    fsubs f30, f1, f0
lbl_fn_801189B4_000004A0:
    lwz r0, 0x48(r30)
    lwz r4, 0x128(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801189B4_000004B8
    lwz r3, 0x4c(r30)
    b lbl_fn_801189B4_000004BC
lbl_fn_801189B4_000004B8:
    lwz r3, 0x50(r30)
lbl_fn_801189B4_000004BC:
    mulli r0, r4, 0xb8
    add r3, r3, r0
    addi r27, r3, 0x4c
    mr r3, r27
    bl fn_803BEAB4
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_fn_801189B4_000004F0
    mr r3, r27
    bl fn_803BEB54
    cntlzw r0, r3
    srwi r0, r0, 5
lbl_fn_801189B4_000004F0:
    cmpwi r0, 0x0
    beq lbl_fn_801189B4_00000594
    lwz r0, 0x4c0(r30)
    li r31, 0x0
    lwz r3, 0x74(r27)
    li r6, 0x0
    lwz r4, 0x7c(r27)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_801189B4_00000598
lbl_fn_801189B4_00000518:
    lwz r0, 0x4c4(r30)
    add r5, r0, r6
    lwzx r0, r6, r0
    cmpw r0, r3
    bgt lbl_fn_801189B4_00000588
    lwz r0, 0x4(r5)
    cmpw r3, r0
    bge lbl_fn_801189B4_00000588
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    bgt lbl_fn_801189B4_00000568
    cmpwi r31, 0x0
    bne lbl_fn_801189B4_00000568
    lwz r0, 0xc(r5)
    srwi. r0, r0, 31
    bne lbl_fn_801189B4_00000560
    addi r31, r5, 0xe
    b lbl_fn_801189B4_00000588
lbl_fn_801189B4_00000560:
    lwz r31, 0x14(r5)
    b lbl_fn_801189B4_00000588
lbl_fn_801189B4_00000568:
    cmpw r0, r4
    bne lbl_fn_801189B4_00000588
    lwz r0, 0xc(r5)
    srwi. r0, r0, 31
    bne lbl_fn_801189B4_00000584
    addi r31, r5, 0xe
    b lbl_fn_801189B4_00000588
lbl_fn_801189B4_00000584:
    lwz r31, 0x14(r5)
lbl_fn_801189B4_00000588:
    addi r6, r6, 0x18
    bdnz lbl_fn_801189B4_00000518
    b lbl_fn_801189B4_00000598
lbl_fn_801189B4_00000594:
    li r31, 0x0
lbl_fn_801189B4_00000598:
    cmpwi r31, 0x0
    beq lbl_fn_801189B4_00000980
    lfs f0, lbl_80881748
    li r0, 0x0
    stfs f0, 0x58(r1)
    lis r27, lbl_80736B10@ha
    addi r27, r27, lbl_80736B10@l
    stfs f0, 0x5c(r1)
    addi r3, r27, 0x251
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x68(r1)
    stfs f0, 0x18(r1)
    stw r0, 0x1c(r1)
    lwz r28, 0x5c(r30)
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    addi r5, r1, 0x58
    addi r6, r1, 0x30
    addi r7, r1, 0x18
    addi r8, r1, 0x40
    bl fn_801F4F84
    lwz r3, 0x5c(r30)
    addi r4, r27, 0x25a
    lfs f29, lbl_8088176C
    addi r3, r3, 0x58
    bl fn_801FEC74
    mr r4, r3
    addi r3, r1, 0x20
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x20(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, 0x60(r1)
    bne lbl_fn_801189B4_00000638
    addi r4, r1, 0x22
    b lbl_fn_801189B4_0000063C
lbl_fn_801189B4_00000638:
    lwz r4, 0x28(r1)
lbl_fn_801189B4_0000063C:
    lfs f2, lbl_80881748
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r0, 0x20(r1)
    fmr f31, f1
    srwi. r0, r0, 31
    beq lbl_fn_801189B4_00000664
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_801189B4_00000664:
    lwz r4, 0x5c(r30)
    lis r3, lbl_80736B10@ha
    addi r3, r3, lbl_80736B10@l
    addi r3, r3, 0x262
    addi r27, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80881748
    mr r4, r3
    mr r3, r27
    li r5, 0x0
    bl fn_801FEDBC
    lfs f2, 0x48(r1)
    lfs f0, lbl_8088174C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_801189B4_000006AC
    li r29, 0xff
    b lbl_fn_801189B4_000006D8
lbl_fn_801189B4_000006AC:
    lfs f0, lbl_80881748
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801189B4_000006C4
    li r3, 0x0
    b lbl_fn_801189B4_000006D4
lbl_fn_801189B4_000006C4:
    lfs f1, lbl_80881774
    lfs f0, lbl_80881770
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801189B4_000006D4:
    mr r29, r3
lbl_fn_801189B4_000006D8:
    lfs f2, 0x4c(r1)
    lfs f0, lbl_8088174C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_801189B4_000006F4
    li r28, 0xff
    b lbl_fn_801189B4_00000720
lbl_fn_801189B4_000006F4:
    lfs f0, lbl_80881748
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801189B4_0000070C
    li r3, 0x0
    b lbl_fn_801189B4_0000071C
lbl_fn_801189B4_0000070C:
    lfs f1, lbl_80881774
    lfs f0, lbl_80881770
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801189B4_0000071C:
    mr r28, r3
lbl_fn_801189B4_00000720:
    lfs f2, 0x50(r1)
    lfs f0, lbl_8088174C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_801189B4_0000073C
    li r27, 0xff
    b lbl_fn_801189B4_00000768
lbl_fn_801189B4_0000073C:
    lfs f0, lbl_80881748
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801189B4_00000754
    li r3, 0x0
    b lbl_fn_801189B4_00000764
lbl_fn_801189B4_00000754:
    lfs f1, lbl_80881774
    lfs f0, lbl_80881770
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801189B4_00000764:
    mr r27, r3
lbl_fn_801189B4_00000768:
    lfs f2, 0x54(r1)
    lfs f0, lbl_8088174C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_801189B4_00000784
    li r3, 0xff
    b lbl_fn_801189B4_000007AC
lbl_fn_801189B4_00000784:
    lfs f0, lbl_80881748
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801189B4_0000079C
    li r3, 0x0
    b lbl_fn_801189B4_000007AC
lbl_fn_801189B4_0000079C:
    lfs f1, lbl_80881774
    lfs f0, lbl_80881770
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801189B4_000007AC:
    lfs f2, 0x30(r1)
    slwi r3, r3, 24
    lfs f0, lbl_8088174C
    slwi r0, r29, 16
    or r3, r3, r0
    slwi r0, r28, 8
    fcmpo cr0, f2, f0
    or r0, r0, r3
    or r26, r27, r0
    cror eq, gt, eq
    bne lbl_fn_801189B4_000007E0
    li r27, 0xff
    b lbl_fn_801189B4_0000080C
lbl_fn_801189B4_000007E0:
    lfs f0, lbl_80881748
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801189B4_000007F8
    li r3, 0x0
    b lbl_fn_801189B4_00000808
lbl_fn_801189B4_000007F8:
    lfs f1, lbl_80881774
    lfs f0, lbl_80881770
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801189B4_00000808:
    mr r27, r3
lbl_fn_801189B4_0000080C:
    lfs f2, 0x34(r1)
    lfs f0, lbl_8088174C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_801189B4_00000828
    li r28, 0xff
    b lbl_fn_801189B4_00000854
lbl_fn_801189B4_00000828:
    lfs f0, lbl_80881748
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801189B4_00000840
    li r3, 0x0
    b lbl_fn_801189B4_00000850
lbl_fn_801189B4_00000840:
    lfs f1, lbl_80881774
    lfs f0, lbl_80881770
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801189B4_00000850:
    mr r28, r3
lbl_fn_801189B4_00000854:
    lfs f2, 0x38(r1)
    lfs f0, lbl_8088174C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_801189B4_00000870
    li r29, 0xff
    b lbl_fn_801189B4_0000089C
lbl_fn_801189B4_00000870:
    lfs f0, lbl_80881748
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801189B4_00000888
    li r3, 0x0
    b lbl_fn_801189B4_00000898
lbl_fn_801189B4_00000888:
    lfs f1, lbl_80881774
    lfs f0, lbl_80881770
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801189B4_00000898:
    mr r29, r3
lbl_fn_801189B4_0000089C:
    lfs f2, 0x3c(r1)
    lfs f0, lbl_8088174C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_801189B4_000008B8
    li r3, 0xff
    b lbl_fn_801189B4_000008E0
lbl_fn_801189B4_000008B8:
    lfs f0, lbl_80881748
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801189B4_000008D0
    li r3, 0x0
    b lbl_fn_801189B4_000008E0
lbl_fn_801189B4_000008D0:
    lfs f1, lbl_80881774
    lfs f0, lbl_80881770
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801189B4_000008E0:
    lfs f0, 0x58(r1)
    slwi r4, r28, 8
    or r5, r29, r4
    slwi r3, r3, 24
    fnmsubs f0, f31, f29, f0
    slwi r0, r27, 16
    or r0, r3, r0
    lfs f6, lbl_80881748
    stfs f0, 0x8(r1)
    mr r4, r31
    stfs f31, 0xc(r1)
    mr r10, r26
    or r5, r5, r0
    li r6, 0x1
    stfs f29, 0x10(r1)
    li r7, 0x1
    li r8, 0x0
    li r9, 0x1
    lfs f0, 0x58(r1)
    lwz r3, lbl_8087EEB0
    fsubs f1, f0, f30
    lfs f2, 0x5c(r1)
    lfs f3, 0x68(r1)
    lfs f4, 0x60(r1)
    lfs f5, 0x64(r1)
    lfs f7, 0x40(r1)
    lfs f8, 0x44(r1)
    bl fn_80061AE4
    lwz r3, lbl_8087EEC8
    mr r4, r31
    lfs f1, 0x60(r1)
    li r5, 0x1
    lfs f2, lbl_80881748
    li r6, 0x1
    bl fn_8006EF48
    fcmpo cr0, f30, f1
    ble lbl_fn_801189B4_000009AC
    lfs f0, lbl_80881748
    stfs f0, 0x4c8(r30)
    b lbl_fn_801189B4_000009AC
lbl_fn_801189B4_00000980:
    lwz r4, 0x5c(r30)
    lis r3, lbl_80736B10@ha
    addi r3, r3, lbl_80736B10@l
    addi r3, r3, 0x262
    addi r26, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80881748
    mr r4, r3
    mr r3, r26
    li r5, 0x0
    bl fn_801FEDBC
lbl_fn_801189B4_000009AC:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801189B4_00000A20
    li r4, 0x391
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_801189B4_00000A20
    lwz r7, lbl_8087EEE0
    lis r5, 0x4330
    lis r6, lbl_80736AA8@ha
    lfs f1, lbl_80881748
    lwz r3, 0x3c(r7)
    lis r4, 0xff00
    lwz r0, 0x40(r7)
    fmr f2, f1
    xoris r3, r3, 0x8000
    stw r3, 0x74(r1)
    xoris r0, r0, 0x8000
    lfd f5, lbl_80736AA8@l(r6)
    stw r5, 0x70(r1)
    lwz r3, lbl_8087EEB0
    lfd f0, 0x70(r1)
    stw r0, 0x7c(r1)
    fsubs f4, f0, f5
    lfs f3, lbl_80881754
    stw r5, 0x78(r1)
    lfd f0, 0x78(r1)
    fsubs f5, f0, f5
    bl fn_80060D58
lbl_fn_801189B4_00000A20:
    addi r11, r1, 0xa0
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    bl _restgpr_26
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_80119030(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0x13c(r3)
    stw r0, 0x140(r3)
    stw r4, 0x13c(r3)
    stw r5, 0x144(r3)
    beq lbl_fn_80119030_00000AA8
    cmpwi r4, 0x3
    beq lbl_fn_80119030_00000AD8
    cmpwi r4, 0x5
    beq lbl_fn_80119030_00000B5C
    cmpwi r4, 0x7
    beq lbl_fn_80119030_00000B68
    cmpwi r4, 0x6
    beq lbl_fn_80119030_00000BA4
    cmpwi r4, 0x8
    beq lbl_fn_80119030_00000BA4
    b lbl_fn_80119030_00000BAC
lbl_fn_80119030_00000AA8:
    addi r3, r1, 0x8
    li r4, 0x1f
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80119030_00000BAC
lbl_fn_80119030_00000AD8:
    lwz r0, 0x16c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80119030_00000B50
    lwz r0, 0x48(r3)
    li r4, 0x0
    stw r4, 0x148(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80119030_00000BAC
    lwz r0, 0x174(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80119030_00000BAC
    lwz r4, 0x128(r3)
    bl fn_8011BBD0
    cmpwi r3, 0x0
    beq lbl_fn_80119030_00000BAC
    mr r3, r31
    li r4, 0x1b5
    li r5, 0x0
    bl fn_805BC6CC
    stw r3, 0x178(r31)
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F0A8
    cmpwi r3, 0x0
    beq lbl_fn_80119030_00000B44
    li r0, 0x1
    stb r0, 0x1140(r3)
lbl_fn_80119030_00000B44:
    li r0, 0x1
    stw r0, 0x174(r31)
    b lbl_fn_80119030_00000BAC
lbl_fn_80119030_00000B50:
    li r0, 0x1
    stw r0, 0x148(r3)
    b lbl_fn_80119030_00000BAC
lbl_fn_80119030_00000B5C:
    li r0, 0x0
    stw r0, 0x14c(r3)
    b lbl_fn_80119030_00000BAC
lbl_fn_80119030_00000B68:
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80119030_00000BAC
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80119030_00000BAC
    lwz r0, 0x4b0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80119030_00000BAC
    bl fn_8036E964
    b lbl_fn_80119030_00000BAC
lbl_fn_80119030_00000BA4:
    li r0, 0x1
    stw r0, 0x150(r3)
lbl_fn_80119030_00000BAC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801191A0(void)
{
    nofralloc
    blr
}

asm void fn_801191A4(void)
{
    nofralloc
    blr
}

asm void fn_801191A8(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    mr r31, r3
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    lwz r0, lbl_8087EF70
    cmpwi r0, 0x0
    beq lbl_fn_801191A8_00000C0C
    mr r3, r0
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    b lbl_fn_801191A8_00000C10
lbl_fn_801191A8_00000C0C:
    li r3, 0x0
lbl_fn_801191A8_00000C10:
    cmpwi r3, 0x0
    beq lbl_fn_801191A8_00000CC8
    lwz r0, 0x48(r31)
    cmpwi r0, 0x1
    bne lbl_fn_801191A8_00000C94
    lwz r0, 0x128(r31)
    lwz r3, 0x50(r31)
    mulli r0, r0, 0xb8
    add r3, r3, r0
    addi r3, r3, 0x4c
    bl fn_803BEAB4
    cmpwi r3, 0x0
    bne lbl_fn_801191A8_00000C60
    addi r3, r1, 0x28
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x28
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801191A8_00001088
lbl_fn_801191A8_00000C60:
    li r0, 0x0
    stw r0, 0x16c(r31)
    addi r3, r1, 0x24
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x24
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x3
    li r5, 0x0
    bl fn_80119030
    b lbl_fn_801191A8_00001088
lbl_fn_801191A8_00000C94:
    li r0, 0x0
    stw r0, 0x16c(r31)
    addi r3, r1, 0x20
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x3
    li r5, 0x0
    bl fn_80119030
    b lbl_fn_801191A8_00001088
lbl_fn_801191A8_00000CC8:
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_801191A8_00000CE4
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    b lbl_fn_801191A8_00000CE8
lbl_fn_801191A8_00000CE4:
    li r3, 0x0
lbl_fn_801191A8_00000CE8:
    cmpwi r3, 0x0
    beq lbl_fn_801191A8_00000D98
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801191A8_00000D6C
    li r4, 0x391
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_801191A8_00000D40
    li r0, 0x2
    stw r0, 0x16c(r31)
    addi r3, r1, 0x1c
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x3
    li r5, 0x0
    bl fn_80119030
    b lbl_fn_801191A8_00001088
lbl_fn_801191A8_00000D40:
    addi r3, r1, 0x18
    li r4, 0x20
    bl fn_80117228
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x7
    li r5, 0x0
    bl fn_80119030
    b lbl_fn_801191A8_00001088
lbl_fn_801191A8_00000D6C:
    addi r3, r1, 0x14
    li r4, 0x20
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x7
    li r5, 0x0
    bl fn_80119030
    b lbl_fn_801191A8_00001088
lbl_fn_801191A8_00000D98:
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    bne lbl_fn_801191A8_00000DAC
    li r3, 0x0
    b lbl_fn_801191A8_00000E00
lbl_fn_801191A8_00000DAC:
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_801191A8_00000DE0
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_801191A8_00000DD8
    li r4, 0x0
    li r5, 0xe
    bl fn_800A555C
    b lbl_fn_801191A8_00000E00
lbl_fn_801191A8_00000DD8:
    li r3, 0x0
    b lbl_fn_801191A8_00000E00
lbl_fn_801191A8_00000DE0:
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_801191A8_00000DFC
    li r4, 0x0
    li r5, 0xf
    bl fn_800A555C
    b lbl_fn_801191A8_00000E00
lbl_fn_801191A8_00000DFC:
    li r3, 0x0
lbl_fn_801191A8_00000E00:
    cmpwi r3, 0x0
    beq lbl_fn_801191A8_00000F10
    lwz r0, 0x48(r31)
    lwz r4, 0x128(r31)
    cmpwi r0, 0x0
    bne lbl_fn_801191A8_00000E20
    lwz r3, 0x4c(r31)
    b lbl_fn_801191A8_00000E24
lbl_fn_801191A8_00000E20:
    lwz r3, 0x50(r31)
lbl_fn_801191A8_00000E24:
    mulli r0, r4, 0xb8
    add r3, r3, r0
    addi r3, r3, 0x4c
    bl fn_803BEAB4
    cmpwi r3, 0x0
    bne lbl_fn_801191A8_00000E58
    addi r3, r1, 0x10
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801191A8_00001088
lbl_fn_801191A8_00000E58:
    lwz r0, 0x128(r31)
    cmpwi r0, 0x0
    bne lbl_fn_801191A8_00000EDC
    mr r3, r31
    li r4, 0x4
    li r5, 0x1
    bl fn_80119030
    addi r3, r1, 0xc
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x60(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801191A8_00000ED0
    li r3, 0x1
    li r4, 0x11a
    bl fn_80116FC0
    lwz r4, 0x60(r31)
    lis r5, lbl_80736B10@ha
    addi r5, r5, lbl_80736B10@l
    mr r30, r3
    addi r3, r5, 0x26b
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801FEE08
lbl_fn_801191A8_00000ED0:
    li r0, 0x1
    stw r0, 0x170(r31)
    b lbl_fn_801191A8_00001088
lbl_fn_801191A8_00000EDC:
    li r0, 0x1
    stw r0, 0x16c(r31)
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x3
    li r5, 0x0
    bl fn_80119030
    b lbl_fn_801191A8_00001088
lbl_fn_801191A8_00000F10:
    lwz r29, 0x134(r31)
    mr r3, r31
    bl fn_8011B570
    lwz r3, 0x134(r31)
    cmpw r29, r3
    beq lbl_fn_801191A8_00001088
    lwz r0, 0x130(r31)
    slwi r4, r3, 3
    lwz r5, 0x12c(r31)
    cmpwi r3, 0x2
    slwi r3, r0, 2
    lwz r6, 0x128(r31)
    add r0, r5, r4
    add r3, r0, r3
    addi r0, r3, 0x1
    stw r0, 0x128(r31)
    bne lbl_fn_801191A8_00000F5C
    li r0, 0x0
    stw r0, 0x128(r31)
lbl_fn_801191A8_00000F5C:
    lwz r0, 0x128(r31)
    cmpw r6, r0
    beq lbl_fn_801191A8_00000F70
    lfs f0, lbl_80881748
    stfs f0, 0x4c8(r31)
lbl_fn_801191A8_00000F70:
    lwz r0, 0x134(r31)
    subf r4, r29, r0
    srawi r3, r4, 31
    xor r0, r3, r4
    subf r0, r3, r0
    cmpwi r0, 0x1
    ble lbl_fn_801191A8_00000F90
    neg r4, r4
lbl_fn_801191A8_00000F90:
    cmpwi r4, 0x0
    ble lbl_fn_801191A8_00000FB0
    lwz r3, 0x120(r31)
    li r0, 0x1
    lfs f0, lbl_80881758
    stfs f0, 0x100(r3)
    stw r0, 0x124(r31)
    b lbl_fn_801191A8_00000FC4
lbl_fn_801191A8_00000FB0:
    lwz r3, 0x118(r31)
    li r0, 0x1
    lfs f0, lbl_80881758
    stfs f0, 0x100(r3)
    stw r0, 0x11c(r31)
lbl_fn_801191A8_00000FC4:
    lwz r0, 0x134(r31)
    cmpwi r0, 0x2
    bne lbl_fn_801191A8_0000102C
    lwz r0, 0x48(r31)
    mr r3, r31
    li r4, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_801191A8_00000FEC
    lwz r5, 0x4c(r31)
    b lbl_fn_801191A8_00000FF0
lbl_fn_801191A8_00000FEC:
    lwz r5, 0x50(r31)
lbl_fn_801191A8_00000FF0:
    addi r5, r5, 0x4c
    bl fn_8011B018
    addi r3, r1, 0x30
    bl fn_803BE8B4
    li r29, 0x2
lbl_fn_801191A8_00001004:
    lwz r0, 0x134(r31)
    mr r3, r31
    addi r5, r1, 0x30
    slwi r0, r0, 3
    add r4, r29, r0
    bl fn_8011B018
    addi r29, r29, 0x1
    cmpwi r29, 0x9
    blt lbl_fn_801191A8_00001004
    b lbl_fn_801191A8_00001088
lbl_fn_801191A8_0000102C:
    lfs f31, lbl_80881758
    addi r29, r31, 0x4
    li r30, 0x1
lbl_fn_801191A8_00001038:
    lwz r0, 0x48(r31)
    mr r3, r31
    lwz r4, 0x134(r31)
    cmpwi r0, 0x0
    slwi r4, r4, 3
    add r4, r30, r4
    bne lbl_fn_801191A8_0000105C
    lwz r5, 0x4c(r31)
    b lbl_fn_801191A8_00001060
lbl_fn_801191A8_0000105C:
    lwz r5, 0x50(r31)
lbl_fn_801191A8_00001060:
    mulli r0, r4, 0xb8
    add r5, r5, r0
    addi r5, r5, 0x4c
    bl fn_8011B018
    lwz r3, 0x70(r29)
    addi r30, r30, 0x1
    cmpwi r30, 0x9
    addi r29, r29, 0x4
    stfs f31, 0x100(r3)
    blt lbl_fn_801191A8_00001038
lbl_fn_801191A8_00001088:
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8011968C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, lbl_8087EF70
    cmpwi r0, 0x0
    beq lbl_fn_8011968C_000010E0
    mr r3, r0
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    b lbl_fn_8011968C_000010E4
lbl_fn_8011968C_000010E0:
    li r3, 0x0
lbl_fn_8011968C_000010E4:
    cmpwi r3, 0x0
    bne lbl_fn_8011968C_00001114
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_8011968C_00001108
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    b lbl_fn_8011968C_0000110C
lbl_fn_8011968C_00001108:
    li r3, 0x0
lbl_fn_8011968C_0000110C:
    cmpwi r3, 0x0
    beq lbl_fn_8011968C_000011A8
lbl_fn_8011968C_00001114:
    lwz r0, 0x128(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8011968C_00001144
    lwz r0, 0x48(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8011968C_00001144
    lwz r0, 0x16c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8011968C_00001144
    lwz r0, 0x170(r31)
    cmpwi r0, 0x2
    beq lbl_fn_8011968C_00001170
lbl_fn_8011968C_00001144:
    mr r3, r31
    li r4, 0x1
    li r5, 0x0
    bl fn_80119030
    addi r3, r1, 0xc
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8011968C_000011A0
lbl_fn_8011968C_00001170:
    li r0, 0x1
    stw r0, 0x16c(r31)
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x3
    li r5, 0x0
    bl fn_80119030
lbl_fn_8011968C_000011A0:
    li r0, 0x0
    stw r0, 0x170(r31)
lbl_fn_8011968C_000011A8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8011979C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r0, lbl_8087EF70
    cmpwi r0, 0x0
    beq lbl_fn_8011979C_000011F0
    mr r3, r0
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    b lbl_fn_8011979C_000011F4
lbl_fn_8011979C_000011F0:
    li r3, 0x0
lbl_fn_8011979C_000011F4:
    cmpwi r3, 0x0
    beq lbl_fn_8011979C_00001330
    lwz r0, 0x148(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8011979C_00001304
    lwz r0, 0x16c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8011979C_0000127C
    lwz r3, lbl_8087F0A8
    cmpwi r3, 0x0
    beq lbl_fn_8011979C_00001228
    lwz r0, 0x128(r31)
    stw r0, 0x113c(r3)
lbl_fn_8011979C_00001228:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8011979C_00001244
    lwz r3, 0x4c(r31)
    lwz r4, 0x128(r31)
    bl fn_803B7FC8
    b lbl_fn_8011979C_00001250
lbl_fn_8011979C_00001244:
    lwz r3, 0x50(r31)
    lwz r4, 0x128(r31)
    bl fn_803B3270
lbl_fn_8011979C_00001250:
    mr r3, r31
    li r4, 0x5
    li r5, 0x0
    bl fn_80119030
    addi r3, r1, 0x18
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8011979C_000013A8
lbl_fn_8011979C_0000127C:
    cmpwi r0, 0x2
    bne lbl_fn_8011979C_000012B0
    mr r3, r31
    li r4, 0x7
    li r5, 0x0
    bl fn_80119030
    addi r3, r1, 0x14
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8011979C_000013A8
lbl_fn_8011979C_000012B0:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8011979C_000012CC
    lwz r3, 0x4c(r31)
    lwz r4, 0x128(r31)
    bl fn_803B807C
    b lbl_fn_8011979C_000012D8
lbl_fn_8011979C_000012CC:
    lwz r3, 0x50(r31)
    lwz r4, 0x128(r31)
    bl fn_803B3310
lbl_fn_8011979C_000012D8:
    mr r3, r31
    li r4, 0x5
    li r5, 0x0
    bl fn_80119030
    addi r3, r1, 0x10
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8011979C_000013A8
lbl_fn_8011979C_00001304:
    mr r3, r31
    li r4, 0x1
    li r5, 0x0
    bl fn_80119030
    addi r3, r1, 0xc
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8011979C_000013A8
lbl_fn_8011979C_00001330:
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_8011979C_0000134C
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    b lbl_fn_8011979C_00001350
lbl_fn_8011979C_0000134C:
    li r3, 0x0
lbl_fn_8011979C_00001350:
    cmpwi r3, 0x0
    beq lbl_fn_8011979C_00001384
    mr r3, r31
    li r4, 0x1
    li r5, 0x0
    bl fn_80119030
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8011979C_000013A8
lbl_fn_8011979C_00001384:
    lwz r3, 0x148(r31)
    li r0, 0x2
    stw r3, 0x154(r31)
    mr r3, r31
    li r4, 0x1
    stw r0, 0x158(r31)
    bl fn_8011B3D8
    lwz r0, 0x154(r31)
    stw r0, 0x148(r31)
lbl_fn_8011979C_000013A8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8011999C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    lwz r0, 0x16c(r3)
    lwz r4, 0x14c(r3)
    cmpwi r0, 0x0
    addi r0, r4, 0x1
    stw r0, 0x14c(r3)
    bne lbl_fn_8011999C_00001704
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8011999C_000014DC
    lwz r3, 0x4c(r3)
    lwz r3, 0xd70(r3)
    lbz r0, 0x154(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8011999C_000018D0
    bl fn_803B8144
    cmpwi r3, 0x0
    bne lbl_fn_8011999C_00001464
    lwz r4, 0x128(r31)
    mr r3, r31
    lwz r5, 0x4c(r31)
    mulli r0, r4, 0xb8
    add r5, r5, r0
    addi r5, r5, 0x4c
    bl fn_8011B018
    mr r3, r31
    li r4, 0x6
    li r5, 0x0
    bl fn_80119030
    addi r3, r1, 0x28
    li r4, 0xc
    bl fn_80117228
    addi r3, r1, 0x28
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8011999C_000018D0
lbl_fn_8011999C_00001464:
    mr r3, r31
    li r4, 0x4
    li r5, 0x1
    bl fn_80119030
    addi r3, r1, 0x24
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x24
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x60(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8011999C_000014D0
    li r3, 0x1
    li r4, 0x11c
    bl fn_80116FC0
    lwz r4, 0x60(r31)
    lis r5, lbl_80736B10@ha
    addi r5, r5, lbl_80736B10@l
    mr r30, r3
    addi r3, r5, 0x26b
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801FEE08
lbl_fn_8011999C_000014D0:
    li r0, 0x1
    stw r0, 0x170(r31)
    b lbl_fn_8011999C_000018D0
lbl_fn_8011999C_000014DC:
    lwz r3, 0x50(r3)
    addis r3, r3, 0x1
    lwz r3, 0x4f60(r3)
    lbz r0, 0x154(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8011999C_000018D0
    bl fn_803B8144
    cmpwi r3, 0x0
    beq lbl_fn_8011999C_00001578
    mr r3, r31
    li r4, 0x4
    li r5, 0x1
    bl fn_80119030
    addi r3, r1, 0x20
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x60(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8011999C_0000156C
    li r3, 0x1
    li r4, 0x11e
    bl fn_80116FC0
    lwz r4, 0x60(r31)
    lis r5, lbl_80736B10@ha
    addi r5, r5, lbl_80736B10@l
    mr r30, r3
    addi r3, r5, 0x26b
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801FEE08
lbl_fn_8011999C_0000156C:
    li r0, 0x1
    stw r0, 0x170(r31)
    b lbl_fn_8011999C_000018D0
lbl_fn_8011999C_00001578:
    lwz r3, 0x50(r31)
    lwz r4, 0x128(r31)
    bl fn_803B2FBC
    lwz r0, 0x48(r31)
    lwz r4, 0x128(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8011999C_0000159C
    lwz r3, 0x4c(r31)
    b lbl_fn_8011999C_000015A0
lbl_fn_8011999C_0000159C:
    lwz r3, 0x50(r31)
lbl_fn_8011999C_000015A0:
    mulli r0, r4, 0xb8
    add r3, r3, r0
    addi r3, r3, 0x4c
    bl fn_803BEB54
    cmpwi r3, 0x0
    bne lbl_fn_8011999C_000015C8
    lwz r3, lbl_8087F460
    bl fn_803BE854
    cmpwi r3, 0x0
    beq lbl_fn_8011999C_000016D8
lbl_fn_8011999C_000015C8:
    mr r3, r31
    li r4, 0x4
    li r5, 0x1
    bl fn_80119030
    addi r3, r1, 0x1c
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
    lwz r29, 0x64(r31)
    cmpwi r29, 0x0
    beq lbl_fn_8011999C_0000166C
    lis r30, lbl_80736B10@ha
    addi r30, r30, lbl_80736B10@l
    addi r3, r30, 0x277
    bl fn_800DC6B4
    lfs f1, lbl_80881748
    mr r4, r3
    addi r3, r29, 0x58
    bl fn_801FECE0
    lwz r4, 0x64(r31)
    addi r3, r30, 0x27c
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80881748
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    li r3, 0x1
    li r4, 0x11b
    bl fn_80116FC0
    lwz r4, 0x64(r31)
    mr r29, r3
    addi r3, r30, 0x289
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r29
    bl fn_801FEE08
lbl_fn_8011999C_0000166C:
    lwz r29, lbl_8087F460
    cmpwi r29, 0x0
    beq lbl_fn_8011999C_000016CC
    beq lbl_fn_8011999C_000016C4
    addis r3, r29, 0x1
    subic. r3, r3, 0x61a0
    beq lbl_fn_8011999C_000016A0
    lis r4, fn_80119ECC@ha
    addi r3, r3, 0x11c4
    addi r4, r4, fn_80119ECC@l
    li r5, 0x2d4
    li r6, 0x1c
    bl fn_806959D8
lbl_fn_8011999C_000016A0:
    addic. r3, r29, 0x539c
    beq lbl_fn_8011999C_000016BC
    lis r4, fn_8012AFE8@ha
    li r5, 0x240
    addi r4, r4, fn_8012AFE8@l
    li r6, 0x7
    bl fn_806959D8
lbl_fn_8011999C_000016BC:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8011999C_000016C4:
    li r0, 0x0
    stw r0, lbl_8087F460
lbl_fn_8011999C_000016CC:
    li r0, 0x2
    stw r0, 0x170(r31)
    b lbl_fn_8011999C_000018D0
lbl_fn_8011999C_000016D8:
    mr r3, r31
    li r4, 0x8
    li r5, 0x0
    bl fn_80119030
    addi r3, r1, 0x18
    li r4, 0xc
    bl fn_80117228
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8011999C_000018D0
lbl_fn_8011999C_00001704:
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8011999C_000017F0
    lwz r3, 0x4c(r3)
    lwz r3, 0xd70(r3)
    lbz r0, 0x154(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8011999C_000018D0
    bl fn_803B8144
    cmpwi r3, 0x0
    bne lbl_fn_8011999C_00001778
    lwz r4, 0x128(r31)
    mr r3, r31
    lwz r5, 0x4c(r31)
    mulli r0, r4, 0xb8
    add r5, r5, r0
    addi r5, r5, 0x4c
    bl fn_8011B018
    mr r3, r31
    li r4, 0x9
    li r5, 0x0
    bl fn_80119030
    addi r3, r1, 0x14
    li r4, 0xc
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8011999C_000018D0
lbl_fn_8011999C_00001778:
    mr r3, r31
    li r4, 0x4
    li r5, 0x1
    bl fn_80119030
    addi r3, r1, 0x10
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x60(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8011999C_000017E4
    li r3, 0x1
    li r4, 0x120
    bl fn_80116FC0
    lwz r4, 0x60(r31)
    lis r5, lbl_80736B10@ha
    addi r5, r5, lbl_80736B10@l
    mr r29, r3
    addi r3, r5, 0x26b
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r29
    bl fn_801FEE08
lbl_fn_8011999C_000017E4:
    li r0, 0x1
    stw r0, 0x170(r31)
    b lbl_fn_8011999C_000018D0
lbl_fn_8011999C_000017F0:
    lwz r3, 0x50(r3)
    addis r3, r3, 0x1
    lwz r3, 0x4f60(r3)
    lbz r0, 0x154(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8011999C_000018D0
    bl fn_803B8144
    cmpwi r3, 0x0
    bne lbl_fn_8011999C_0000185C
    lwz r4, 0x128(r31)
    mr r3, r31
    lwz r5, 0x50(r31)
    mulli r0, r4, 0xb8
    add r5, r5, r0
    addi r5, r5, 0x4c
    bl fn_8011B018
    mr r3, r31
    li r4, 0x9
    li r5, 0x0
    bl fn_80119030
    addi r3, r1, 0xc
    li r4, 0xc
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8011999C_000018D0
lbl_fn_8011999C_0000185C:
    mr r3, r31
    li r4, 0x4
    li r5, 0x1
    bl fn_80119030
    addi r3, r1, 0x8
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x60(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8011999C_000018C8
    li r3, 0x1
    li r4, 0x120
    bl fn_80116FC0
    lwz r4, 0x60(r31)
    lis r5, lbl_80736B10@ha
    addi r5, r5, lbl_80736B10@l
    mr r29, r3
    addi r3, r5, 0x26b
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r29
    bl fn_801FEE08
lbl_fn_8011999C_000018C8:
    li r0, 0x1
    stw r0, 0x170(r31)
lbl_fn_8011999C_000018D0:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
