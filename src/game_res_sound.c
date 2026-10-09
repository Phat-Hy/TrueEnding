#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _restgpr_23(void);
extern void _restgpr_27(void);
extern void _savegpr_20(void);
extern void _savegpr_23(void);
extern void _savegpr_27(void);
extern void fn_8022C9C8(void);
extern void fn_8022D790(void);
extern void fn_802301EC(void);
extern void fn_80230F3C(void);
extern void fn_8023329C(void);
extern void fn_80238560(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_805F99B0(void);

/* External data declarations */
extern u8 lbl_80742F78[];
extern u8 lbl_807C8290[];
extern u8 lbl_807C82C0[];

/* Small data declarations */
extern u32 lbl_8087DBE0;
extern u32 lbl_8087DBE4;
extern u32 lbl_8087DBE8;
extern u32 lbl_8087F360;
extern u32 lbl_8087F364;
extern u32 lbl_8087F368;
extern u32 lbl_8087F36C;
extern u32 lbl_808830D0;
extern u32 lbl_808830D4;
extern u32 lbl_808830D8;
extern u32 lbl_808830DC;
extern u32 lbl_80883104;
extern u32 lbl_80883108;
extern u32 lbl_8088310C;
extern u32 lbl_80883110;

/* Function declarations */
void fn_80231508(void);
void fn_80231754(void);
void fn_8023193C(void);
void fn_802328DC(void);
void fn_802328EC(void);
void fn_80232AC4(void);
void fn_80232ACC(void);
void fn_80232B7C(void);
void fn_80232B88(void);
void fn_80232B90(void);
void fn_80232B98(void);
void fn_80232BEC(void);
void fn_80232D04(void);
void fn_80232E48(void);

asm void fn_80231508(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    lfs f7, lbl_808830D0
    stw r0, 0x154(r1)
    stw r31, 0x14c(r1)
    mr r31, r3
    lfs f0, 0xcc(r3)
    fcmpu cr0, f7, f0
    beq lbl_fn_80231508_00000238
    lfs f0, 0xd0(r3)
    fcmpu cr0, f7, f0
    bne lbl_fn_80231508_00000048
    lfs f0, 0xd4(r3)
    fcmpu cr0, f7, f0
    bne lbl_fn_80231508_00000048
    lfs f0, 0xd8(r3)
    fcmpu cr0, f7, f0
    beq lbl_fn_80231508_000001A0
lbl_fn_80231508_00000048:
    lfs f7, lbl_808830D0
    lfs f0, 0xd0(r3)
    fcmpu cr0, f7, f0
    bne lbl_fn_80231508_00000064
    lfs f0, 0xd4(r3)
    fcmpu cr0, f7, f0
    beq lbl_fn_80231508_0000012C
lbl_fn_80231508_00000064:
    lfs f7, lbl_808830D0
    lfs f0, 0xd0(r3)
    fcmpu cr0, f7, f0
    beq lbl_fn_80231508_000000E0
    lfs f1, 0xd4(r3)
    addi r3, r1, 0x80
    li r4, 0x79
    bl fn_805F8E70
    lfs f1, 0xd0(r31)
    addi r3, r1, 0xb0
    li r4, 0x78
    bl fn_805F8E70
    addi r3, r1, 0x80
    addi r4, r1, 0xb0
    addi r5, r1, 0xe0
    bl fn_805F89F0
    addi r4, r1, 0xe0
    addi r3, r1, 0x110
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    b lbl_fn_80231508_00000160
lbl_fn_80231508_000000E0:
    lfs f1, 0xd4(r3)
    addi r3, r1, 0x50
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x50
    addi r3, r1, 0x110
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    b lbl_fn_80231508_00000160
lbl_fn_80231508_0000012C:
    lfs f0, lbl_808830D4
    stfs f7, 0x13c(r1)
    stfs f7, 0x134(r1)
    stfs f7, 0x130(r1)
    stfs f7, 0x12c(r1)
    stfs f7, 0x128(r1)
    stfs f7, 0x120(r1)
    stfs f7, 0x11c(r1)
    stfs f7, 0x118(r1)
    stfs f7, 0x114(r1)
    stfs f0, 0x138(r1)
    stfs f0, 0x124(r1)
    stfs f0, 0x110(r1)
lbl_fn_80231508_00000160:
    lfs f0, lbl_808830D0
    lfs f1, 0xd8(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80231508_0000018C
    addi r3, r1, 0x20
    li r4, 0x7a
    bl fn_805F8E70
    addi r4, r1, 0x110
    addi r3, r1, 0x20
    mr r5, r4
    bl fn_805F89F0
lbl_fn_80231508_0000018C:
    addi r4, r1, 0x110
    addi r3, r31, 0x38
    mr r5, r4
    bl fn_805F89F0
    b lbl_fn_80231508_000001D4
lbl_fn_80231508_000001A0:
    psq_l f1, 0x38(r3), 0, 0
    addi r4, r1, 0x110
    psq_l f2, 0x40(r3), 0, 0
    psq_l f3, 0x48(r3), 0, 0
    psq_l f4, 0x50(r3), 0, 0
    psq_l f5, 0x58(r3), 0, 0
    psq_l f6, 0x60(r3), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
lbl_fn_80231508_000001D4:
    lfs f0, lbl_808830D0
    addi r4, r1, 0x14
    stfs f0, 0x8(r1)
    addi r6, r1, 0x8
    lfs f2, 0xcc(r31)
    mr r5, r4
    stfs f0, 0xc(r1)
    addi r3, r1, 0x110
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F93C0
    lfs f7, 0x80(r31)
    lfs f0, 0x14(r1)
    lfs f8, 0x84(r31)
    fadds f0, f7, f0
    lfs f7, 0x88(r31)
    stfs f0, 0x80(r31)
    lfs f0, 0x18(r1)
    fadds f0, f8, f0
    stfs f0, 0x84(r31)
    lfs f0, 0x1c(r1)
    fadds f0, f7, f0
    stfs f0, 0x88(r31)
lbl_fn_80231508_00000238:
    lwz r0, 0x154(r1)
    lwz r31, 0x14c(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_80231754(void)
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
    bl _savegpr_23
    lis r6, lbl_80742F78@ha
    lwz r26, 0xc0(r3)
    lfs f31, lbl_808830D0
    mr r23, r3
    lfd f30, lbl_80742F78@l(r6)
    mr r24, r4
    mr r25, r5
    addi r29, r1, 0x20
    addi r28, r1, 0x14
    addi r27, r1, 0x8
    lis r31, lbl_807C82C0@ha
    lis r30, 0x4330
    b lbl_fn_80231754_00000404
lbl_fn_80231754_000002A4:
    psq_l f1, 0x80(r24), 0, 0
    lfs f2, 0x88(r24)
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r29), 0, 0
    lwz r0, 0x238(r26)
    cmpwi r0, 0x0
    blt lbl_fn_80231754_000002E0
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    lfs f3, 0x18(r24)
    stw r30, 0x30(r1)
    lfd f0, 0x30(r1)
    fsubs f0, f0, f30
    fcmpo cr0, f3, f0
    bge lbl_fn_80231754_0000038C
lbl_fn_80231754_000002E0:
    lwz r7, 0x4c(r26)
    addi r3, r31, lbl_807C82C0@l
    addi r5, r24, 0x38
    addi r6, r24, 0x74
    li r4, 0x0
    bl fn_8022C9C8
    stfs f31, 0x44(r24)
    mr r4, r28
    mr r5, r28
    addi r3, r24, 0x38
    stfs f31, 0x54(r24)
    stfs f31, 0x64(r24)
    psq_l f1, 0x68(r24), 0, 0
    lfs f2, 0x70(r24)
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r28), 0, 0
    bl fn_805F93C0
    lfs f3, 0x74(r24)
    mr r3, r24
    lfs f0, 0x14(r1)
    fadds f6, f3, f0
    stfs f6, 0x74(r24)
    lfs f3, 0x78(r24)
    lfs f0, 0x18(r1)
    fadds f5, f3, f0
    stfs f5, 0x78(r24)
    lfs f3, 0x7c(r24)
    lfs f0, 0x1c(r1)
    fadds f4, f3, f0
    stfs f4, 0x7c(r24)
    lfs f3, 0x90(r24)
    lfs f0, 0x8c(r24)
    fadds f5, f5, f3
    lfs f3, 0x94(r24)
    fadds f0, f6, f0
    fadds f2, f4, f3
    stfs f5, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x80(r24), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0x88(r24)
    bl fn_80231508
lbl_fn_80231754_0000038C:
    lwz r3, 0x190(r24)
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80231754_00000400
    ori r0, r3, 0x8
    stw r0, 0x190(r24)
    mr r3, r23
    mr r4, r26
    lfs f0, 0x18(r24)
    mr r5, r24
    mr r7, r25
    addi r6, r1, 0x20
    fcmpu cr0, f31, f0
    mfcr r8
    extrwi r8, r8, 1, 2
    bl fn_8023193C
    cmpwi r3, 0x0
    beq lbl_fn_80231754_000003E4
    lwz r0, 0x190(r24)
    ori r0, r0, 0x4
    stw r0, 0x190(r24)
    b lbl_fn_80231754_00000400
lbl_fn_80231754_000003E4:
    lfs f3, 0x18(r24)
    mr r3, r23
    lfs f0, lbl_8087DBE0
    mr r4, r24
    fadds f0, f3, f0
    stfs f0, 0x18(r24)
    bl fn_80230F3C
lbl_fn_80231754_00000400:
    lwz r24, 0x4(r24)
lbl_fn_80231754_00000404:
    cmpwi r24, 0x0
    bne lbl_fn_80231754_000002A4
    addi r11, r1, 0x60
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    bl _restgpr_23
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8023193C(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    addi r11, r1, 0xd0
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stfd f29, 0xd0(r1)
    psq_st f29, 0xd8(r1), 0, 0
    bl _savegpr_23
    lfs f3, 0x14(r5)
    mr r24, r3
    lfs f0, lbl_808830D0
    mr r25, r4
    mr r26, r5
    mr r27, r6
    fcmpo cr0, f3, f0
    mr r28, r7
    mr r23, r8
    ble lbl_fn_8023193C_000004AC
    lfs f0, 0x18(r5)
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8023193C_000004AC
    lwz r0, 0x50(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8023193C_000004AC
    li r3, 0x1
    b lbl_fn_8023193C_000013A4
lbl_fn_8023193C_000004AC:
    lfs f0, 0xc8(r5)
    lfs f3, lbl_80883104
    fcmpo cr0, f0, f3
    blt lbl_fn_8023193C_000004E0
    lfs f0, 0xbc(r5)
    fcmpo cr0, f0, f3
    bge lbl_fn_8023193C_000004E8
    lfs f0, 0xc0(r5)
    fcmpo cr0, f0, f3
    bge lbl_fn_8023193C_000004E8
    lfs f0, 0xc4(r5)
    fcmpo cr0, f0, f3
    bge lbl_fn_8023193C_000004E8
lbl_fn_8023193C_000004E0:
    li r3, 0x1
    b lbl_fn_8023193C_000013A4
lbl_fn_8023193C_000004E8:
    lwz r3, 0x1c(r5)
    lwz r0, 0x104(r3)
    cmplwi r0, 0x1
    beq lbl_fn_8023193C_00000538
    lfs f3, 0x23c(r4)
    mr r4, r3
    lfs f4, 0x18(r5)
    addi r3, r26, 0x28
    lfs f0, 0x14(r26)
    addi r7, r26, 0x20
    fmuls f3, f4, f3
    lwz r8, 0x24(r26)
    fctiwz f0, f0
    fctiwz f3, f3
    stfd f0, 0x98(r1)
    stfd f3, 0x90(r1)
    lwz r6, 0x9c(r1)
    lwz r5, 0x94(r1)
    bl fn_8022D790
    stw r3, 0x24(r26)
lbl_fn_8023193C_00000538:
    cmpwi r23, 0x0
    beq lbl_fn_8023193C_00000548
    li r3, 0x0
    b lbl_fn_8023193C_000013A4
lbl_fn_8023193C_00000548:
    lfs f3, 0x18(r26)
    lis r3, 0x1a6d
    lfs f0, 0x14(r26)
    addi r3, r3, 0x1a7
    lwz r29, 0xbc(r24)
    fdivs f30, f3, f0
    lwz r0, 0x4(r29)
    lwz r4, 0x30(r29)
    subf r0, r0, r25
    mulhw r0, r3, r0
    cmpwi r4, 0x0
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r30, r0, r3
    beq lbl_fn_8023193C_00000598
    slwi r0, r30, 2
    lwzx r0, r4, r0
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8023193C_000006B0
lbl_fn_8023193C_00000598:
    lwz r3, 0x18(r29)
    slwi r0, r30, 2
    lwzx r0, r3, r0
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8023193C_0000061C
    lwz r0, 0x74(r25)
    fmr f1, f30
    lfs f2, 0x120(r26)
    mr r4, r30
    clrlwi r31, r0, 31
    mr r5, r29
    mr r6, r31
    li r3, 0xf
    bl fn_8023329C
    stfs f1, 0xa4(r26)
    fmr f1, f30
    lfs f2, 0x124(r26)
    mr r4, r30
    mr r5, r29
    mr r6, r31
    li r3, 0x10
    bl fn_8023329C
    stfs f1, 0xa8(r26)
    fmr f1, f30
    lfs f2, 0x128(r26)
    mr r4, r30
    mr r5, r29
    mr r6, r31
    li r3, 0x11
    bl fn_8023329C
    stfs f1, 0xac(r26)
    b lbl_fn_8023193C_0000067C
lbl_fn_8023193C_0000061C:
    lwz r0, 0x4c(r25)
    clrlwi. r0, r0, 31
    bne lbl_fn_8023193C_00000640
    lfs f4, lbl_8087DBE0
    lfs f3, 0x100(r25)
    lfs f0, 0xac(r26)
    fmadds f0, f4, f3, f0
    stfs f0, 0xac(r26)
    b lbl_fn_8023193C_0000067C
lbl_fn_8023193C_00000640:
    lfs f5, lbl_8087DBE0
    lfs f4, 0xf8(r25)
    lfs f0, 0xa4(r26)
    lfs f3, 0xa8(r26)
    fmadds f4, f5, f4, f0
    lfs f0, 0xac(r26)
    stfs f4, 0xa4(r26)
    lfs f5, lbl_8087DBE0
    lfs f4, 0xfc(r25)
    fmadds f3, f5, f4, f3
    stfs f3, 0xa8(r26)
    lfs f4, lbl_8087DBE0
    lfs f3, 0x100(r25)
    fmadds f0, f4, f3, f0
    stfs f0, 0xac(r26)
lbl_fn_8023193C_0000067C:
    lwz r0, 0x4c(r25)
    clrlwi. r0, r0, 31
    beq lbl_fn_8023193C_000006B0
    lwz r0, 0x78(r25)
    cmpwi r0, 0x0
    beq lbl_fn_8023193C_000006B0
    lfs f3, 0x144(r26)
    lfs f4, 0xa4(r26)
    lfs f0, 0x148(r26)
    fmuls f3, f3, f4
    fmuls f0, f0, f4
    stfs f3, 0xa8(r26)
    stfs f0, 0xac(r26)
lbl_fn_8023193C_000006B0:
    lfs f3, lbl_808830D0
    lfs f0, 0x98(r26)
    fcmpu cr0, f3, f0
    bne lbl_fn_8023193C_000006D8
    lfs f0, 0x9c(r26)
    fcmpu cr0, f3, f0
    bne lbl_fn_8023193C_000006D8
    lfs f0, 0xa0(r26)
    fcmpu cr0, f3, f0
    beq lbl_fn_8023193C_00000714
lbl_fn_8023193C_000006D8:
    psq_l f1, 0x98(r26), 0, 0
    addi r31, r1, 0x50
    lfs f2, 0xa0(r26)
    mr r4, r31
    stfs f2, 0x58(r1)
    mr r5, r31
    addi r3, r26, 0x38
    psq_st f1, 0x0(r31), 0, 0
    bl fn_805F93C0
    lfs f2, 0x58(r1)
    addi r3, r1, 0x80
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x88(r1)
    b lbl_fn_8023193C_00000720
lbl_fn_8023193C_00000714:
    stfs f3, 0x88(r1)
    stfs f3, 0x84(r1)
    stfs f3, 0x80(r1)
lbl_fn_8023193C_00000720:
    lfs f5, 0x80(r1)
    mr r3, r26
    lfs f4, 0xd0(r24)
    lfs f3, 0x84(r1)
    fadds f10, f5, f4
    lfs f0, 0xd4(r24)
    lfs f5, lbl_8087DBE0
    fadds f9, f3, f0
    lfs f4, 0x88(r1)
    lfs f3, 0xd8(r24)
    fmuls f11, f10, f5
    lfs f0, 0x8c(r26)
    fadds f8, f4, f3
    fmuls f12, f9, f5
    lfs f3, 0x90(r26)
    fadds f7, f0, f11
    fmuls f13, f8, f5
    psq_l f1, 0x74(r26), 0, 0
    lfs f0, 0x94(r26)
    fadds f6, f3, f12
    psq_st f1, 0x80(r26), 0, 0
    fadds f5, f0, f13
    lfs f3, 0x80(r26)
    lfs f2, 0x7c(r26)
    fadds f4, f3, f7
    lfs f0, 0x84(r26)
    stfs f10, 0x80(r1)
    fadds f3, f0, f6
    fadds f0, f2, f5
    stfs f9, 0x84(r1)
    stfs f8, 0x88(r1)
    stfs f11, 0x44(r1)
    stfs f12, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f7, 0x8c(r26)
    stfs f6, 0x90(r26)
    stfs f5, 0x94(r26)
    stfs f4, 0x80(r26)
    stfs f3, 0x84(r26)
    stfs f0, 0x88(r26)
    bl fn_80231508
    lwz r3, 0x30(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8023193C_000007E4
    slwi r31, r30, 2
    lwzx r0, r3, r31
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8023193C_00000860
lbl_fn_8023193C_000007E4:
    lwz r3, 0x18(r29)
    slwi r31, r30, 2
    lwzx r0, r3, r31
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_8023193C_0000082C
    fmr f1, f30
    lfs f2, 0x12c(r26)
    mr r4, r30
    mr r5, r29
    li r3, 0x12
    li r6, 0x0
    bl fn_8023329C
    frsp f3, f1
    lfs f0, 0xa8(r24)
    fmuls f0, f3, f0
    stfs f0, 0xcc(r26)
    b lbl_fn_8023193C_00000860
lbl_fn_8023193C_0000082C:
    lfs f4, 0x1ec(r25)
    lfs f0, 0xa8(r24)
    lfs f3, lbl_8087DBE0
    fmuls f4, f4, f0
    lfs f0, 0xcc(r26)
    fmadds f3, f3, f4, f0
    stfs f3, 0xcc(r26)
    lwz r0, lbl_8087DBE4
    cmpwi r0, 0x0
    beq lbl_fn_8023193C_00000860
    lfs f0, 0x1f0(r25)
    fmuls f0, f3, f0
    stfs f0, 0xcc(r26)
lbl_fn_8023193C_00000860:
    lwz r3, 0x30(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8023193C_0000087C
    lwzx r0, r3, r31
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_8023193C_00000994
lbl_fn_8023193C_0000087C:
    lwz r3, 0x18(r29)
    slwi r0, r30, 2
    lwzx r0, r3, r0
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_8023193C_00000900
    lwz r0, 0x9c(r25)
    fmr f1, f30
    lfs f2, 0x130(r26)
    mr r4, r30
    clrlwi r23, r0, 31
    mr r5, r29
    mr r6, r23
    li r3, 0x13
    bl fn_8023329C
    stfs f1, 0xd0(r26)
    fmr f1, f30
    lfs f2, 0x134(r26)
    mr r4, r30
    mr r5, r29
    mr r6, r23
    li r3, 0x14
    bl fn_8023329C
    stfs f1, 0xd4(r26)
    fmr f1, f30
    lfs f2, 0x138(r26)
    mr r4, r30
    mr r5, r29
    mr r6, r23
    li r3, 0x15
    bl fn_8023329C
    stfs f1, 0xd8(r26)
    b lbl_fn_8023193C_0000096C
lbl_fn_8023193C_00000900:
    lfs f5, lbl_8087DBE0
    lfs f4, 0x210(r25)
    lfs f0, 0xd0(r26)
    lfs f3, 0xd4(r26)
    fmadds f6, f5, f4, f0
    lfs f0, 0xd8(r26)
    stfs f6, 0xd0(r26)
    lfs f5, lbl_8087DBE0
    lfs f4, 0x214(r25)
    fmadds f5, f5, f4, f3
    stfs f5, 0xd4(r26)
    lfs f4, lbl_8087DBE0
    lfs f3, 0x218(r25)
    fmadds f3, f4, f3, f0
    stfs f3, 0xd8(r26)
    lwz r0, lbl_8087DBE4
    cmpwi r0, 0x0
    beq lbl_fn_8023193C_0000096C
    lfs f0, 0x21c(r25)
    fmuls f0, f6, f0
    stfs f0, 0xd0(r26)
    lfs f0, 0x220(r25)
    fmuls f0, f5, f0
    stfs f0, 0xd4(r26)
    lfs f0, 0x224(r25)
    fmuls f0, f3, f0
    stfs f0, 0xd8(r26)
lbl_fn_8023193C_0000096C:
    lwz r0, 0xa0(r25)
    cmpwi r0, 0x0
    beq lbl_fn_8023193C_00000994
    lfs f3, 0x16c(r26)
    lfs f4, 0xd0(r26)
    lfs f0, 0x170(r26)
    fmuls f3, f3, f4
    fmuls f0, f0, f4
    stfs f3, 0xd4(r26)
    stfs f0, 0xd8(r26)
lbl_fn_8023193C_00000994:
    lwz r3, 0x30(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8023193C_000009B0
    lwzx r0, r3, r31
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_8023193C_00000E4C
lbl_fn_8023193C_000009B0:
    lwz r3, 0x18(r29)
    slwi r0, r30, 2
    lwzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_8023193C_00000A58
    lwz r0, 0x84(r25)
    fmr f1, f30
    lfs f2, 0x100(r26)
    mr r4, r30
    clrlwi r23, r0, 31
    mr r5, r29
    mr r6, r23
    li r3, 0x7
    bl fn_8023329C
    stfs f1, 0x98(r26)
    fmr f1, f30
    lfs f2, 0x104(r26)
    mr r4, r30
    mr r5, r29
    mr r6, r23
    li r3, 0x8
    bl fn_8023329C
    stfs f1, 0x9c(r26)
    fmr f1, f30
    lfs f2, 0x108(r26)
    mr r4, r30
    mr r5, r29
    mr r6, r23
    li r3, 0x9
    bl fn_8023329C
    frsp f0, f1
    lfs f5, 0xa8(r24)
    lfs f4, 0x98(r26)
    lfs f3, 0x9c(r26)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x98(r26)
    stfs f3, 0x9c(r26)
    stfs f0, 0xa0(r26)
    b lbl_fn_8023193C_00000AD4
lbl_fn_8023193C_00000A58:
    lfs f0, 0x170(r25)
    lfs f7, 0xa8(r24)
    lfs f5, lbl_8087DBE0
    fmuls f6, f0, f7
    lfs f4, 0x98(r26)
    lfs f3, 0x9c(r26)
    lfs f0, 0xa0(r26)
    fmadds f6, f5, f6, f4
    stfs f6, 0x98(r26)
    lfs f5, 0x174(r25)
    lfs f4, lbl_8087DBE0
    fmuls f5, f5, f7
    fmadds f5, f4, f5, f3
    stfs f5, 0x9c(r26)
    lfs f4, 0x178(r25)
    lfs f3, lbl_8087DBE0
    fmuls f4, f4, f7
    fmadds f3, f3, f4, f0
    stfs f3, 0xa0(r26)
    lwz r0, lbl_8087DBE4
    cmpwi r0, 0x0
    beq lbl_fn_8023193C_00000AD4
    lfs f0, 0x17c(r25)
    fmuls f0, f6, f0
    stfs f0, 0x98(r26)
    lfs f0, 0x180(r25)
    fmuls f0, f5, f0
    stfs f0, 0x9c(r26)
    lfs f0, 0x184(r25)
    fmuls f0, f3, f0
    stfs f0, 0xa0(r26)
lbl_fn_8023193C_00000AD4:
    lwz r0, 0x88(r25)
    cmpwi r0, 0x0
    beq lbl_fn_8023193C_00000AFC
    lfs f3, 0x154(r26)
    lfs f4, 0x98(r26)
    lfs f0, 0x158(r26)
    fmuls f3, f3, f4
    fmuls f0, f0, f4
    stfs f3, 0x9c(r26)
    stfs f0, 0xa0(r26)
lbl_fn_8023193C_00000AFC:
    lwz r0, 0x240(r25)
    cmpwi r0, 0x0
    beq lbl_fn_8023193C_00000E4C
    lwz r3, 0x18(r29)
    slwi r0, r30, 2
    lwzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_8023193C_00000E4C
    lfs f3, 0x248(r25)
    lfs f6, 0xa8(r24)
    lfs f5, lbl_8087DBE0
    fmuls f29, f3, f6
    lfs f4, 0x9c(r26)
    lfs f3, 0x84(r26)
    lwz r0, 0x10(r24)
    fmadds f3, f5, f4, f3
    lfs f0, 0x244(r25)
    rlwinm r0, r0, 0, 30, 30
    fmuls f6, f0, f6
    cmplwi r0, 0x2
    fsubs f7, f3, f29
    lfs f0, 0x258(r25)
    bne lbl_fn_8023193C_00000B78
    lfs f4, 0x1c(r28)
    lfs f3, 0x2c(r28)
    lfs f5, 0xc(r28)
    fadds f0, f0, f4
    stfs f5, 0x38(r1)
    stfs f4, 0x3c(r1)
    stfs f3, 0x40(r1)
lbl_fn_8023193C_00000B78:
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_8023193C_00000D74
    lfs f4, 0x24c(r25)
    lfs f3, 0x9c(r26)
    fneg f4, f4
    fmuls f5, f3, f4
    stfs f5, 0x9c(r26)
    lfs f4, lbl_8087DBE0
    fmuls f3, f4, f6
    fcmpo cr0, f5, f3
    bge lbl_fn_8023193C_00000C20
    lfs f4, 0x78(r26)
    lfs f3, 0x90(r26)
    lfs f31, lbl_808830D0
    fadds f8, f4, f3
    lfs f3, 0x84(r26)
    lfs f6, 0x7c(r26)
    fadds f4, f29, f31
    lfs f5, 0x94(r26)
    fsubs f10, f3, f8
    fadds f7, f6, f5
    lfs f3, 0x78(r26)
    lfs f6, 0x74(r26)
    fadds f4, f0, f4
    lfs f5, 0x8c(r26)
    fadds f3, f3, f10
    fadds f9, f6, f5
    lfs f6, 0x88(r26)
    lfs f5, 0x80(r26)
    fsubs f6, f6, f7
    stfs f31, 0x9c(r26)
    fsubs f5, f5, f9
    fsubs f3, f4, f3
    stfs f9, 0x2c(r1)
    stfs f8, 0x30(r1)
    stfs f7, 0x34(r1)
    stfs f5, 0x74(r1)
    stfs f10, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f3, 0x90(r26)
    b lbl_fn_8023193C_00000C38
lbl_fn_8023193C_00000C20:
    fnmsubs f4, f4, f6, f5
    fsubs f3, f7, f0
    stfs f4, 0x9c(r26)
    lfs f4, 0x24c(r25)
    fneg f4, f4
    fmuls f31, f4, f3
lbl_fn_8023193C_00000C38:
    fadds f4, f29, f31
    lfs f5, 0x98(r26)
    lfs f3, lbl_808830D0
    lfs f6, 0xa0(r26)
    fadds f0, f0, f4
    fcmpu cr0, f3, f5
    stfs f0, 0x84(r26)
    stfs f5, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f6, 0x70(r1)
    beq lbl_fn_8023193C_00000C80
    fcmpu cr0, f3, f3
    beq lbl_fn_8023193C_00000C80
    fcmpu cr0, f3, f6
    beq lbl_fn_8023193C_00000C80
    addi r3, r1, 0x68
    mr r4, r3
    bl fn_805F98D0
lbl_fn_8023193C_00000C80:
    lfs f0, lbl_808830D0
    fcmpu cr0, f0, f31
    bne lbl_fn_8023193C_00000CC8
    lfs f3, 0x68(r1)
    lfs f0, 0x250(r25)
    lfs f4, lbl_8087DBE0
    fmuls f5, f3, f0
    lfs f3, 0x98(r26)
    lfs f0, 0xa0(r26)
    fnmsubs f3, f4, f5, f3
    stfs f3, 0x98(r26)
    lfs f5, 0x70(r1)
    lfs f4, 0x250(r25)
    lfs f3, lbl_8087DBE0
    fmuls f4, f5, f4
    fnmsubs f0, f3, f4, f0
    stfs f0, 0xa0(r26)
    b lbl_fn_8023193C_00000CF0
lbl_fn_8023193C_00000CC8:
    lfs f5, 0x68(r1)
    lfs f4, 0x250(r25)
    lfs f3, 0x98(r26)
    lfs f0, 0xa0(r26)
    fnmsubs f3, f5, f4, f3
    stfs f3, 0x98(r26)
    lfs f4, 0x70(r1)
    lfs f3, 0x250(r25)
    fnmsubs f0, f4, f3, f0
    stfs f0, 0xa0(r26)
lbl_fn_8023193C_00000CF0:
    lfs f0, 0x98(r26)
    lfs f3, lbl_808830D0
    fcmpo cr0, f0, f3
    ble lbl_fn_8023193C_00000D0C
    lfs f0, 0x68(r1)
    fcmpo cr0, f0, f3
    blt lbl_fn_8023193C_00000D28
lbl_fn_8023193C_00000D0C:
    lfs f0, 0x98(r26)
    lfs f3, lbl_808830D0
    fcmpo cr0, f0, f3
    bge lbl_fn_8023193C_00000D30
    lfs f0, 0x68(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_8023193C_00000D30
lbl_fn_8023193C_00000D28:
    lfs f0, lbl_808830D0
    stfs f0, 0x98(r26)
lbl_fn_8023193C_00000D30:
    lfs f0, 0xa0(r26)
    lfs f3, lbl_808830D0
    fcmpo cr0, f0, f3
    ble lbl_fn_8023193C_00000D4C
    lfs f0, 0x70(r1)
    fcmpo cr0, f0, f3
    blt lbl_fn_8023193C_00000D68
lbl_fn_8023193C_00000D4C:
    lfs f0, 0xa0(r26)
    lfs f3, lbl_808830D0
    fcmpo cr0, f0, f3
    bge lbl_fn_8023193C_00000D84
    lfs f0, 0x70(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_8023193C_00000D84
lbl_fn_8023193C_00000D68:
    lfs f0, lbl_808830D0
    stfs f0, 0xa0(r26)
    b lbl_fn_8023193C_00000D84
lbl_fn_8023193C_00000D74:
    lfs f3, lbl_8087DBE0
    lfs f0, 0x9c(r26)
    fnmsubs f0, f3, f6, f0
    stfs f0, 0x9c(r26)
lbl_fn_8023193C_00000D84:
    lfs f3, lbl_808830D0
    lfs f0, 0x98(r26)
    fcmpu cr0, f3, f0
    bne lbl_fn_8023193C_00000DA0
    lfs f0, 0xa0(r26)
    fcmpu cr0, f3, f0
    beq lbl_fn_8023193C_00000E4C
lbl_fn_8023193C_00000DA0:
    lfs f4, lbl_8087DBE0
    lfs f0, 0x98(r26)
    lfs f3, 0xa0(r26)
    fmuls f5, f4, f0
    lfs f0, lbl_808830D0
    fmuls f3, f4, f3
    stfs f0, 0x60(r1)
    fcmpu cr0, f0, f5
    stfs f5, 0x5c(r1)
    stfs f3, 0x64(r1)
    bne lbl_fn_8023193C_00000DD4
    fcmpu cr0, f0, f3
    beq lbl_fn_8023193C_00000E4C
lbl_fn_8023193C_00000DD4:
    lfs f3, lbl_808830D8
    addi r3, r1, 0x5c
    lfs f0, lbl_808830DC
    fmuls f3, f3, f29
    fmuls f29, f0, f3
    bl fn_805F9940
    fdivs f3, f1, f29
    lfs f0, lbl_80883108
    lfs f5, 0x254(r25)
    addi r3, r1, 0x5c
    lfs f4, 0x180(r26)
    addi r4, r1, 0x14
    fmuls f6, f0, f3
    lfs f3, lbl_808830D0
    lfs f0, lbl_8088310C
    addi r5, r1, 0x20
    fmadds f4, f5, f6, f4
    stfs f4, 0x180(r26)
    stfs f3, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f3, 0x1c(r1)
    bl fn_805F99B0
    addi r4, r1, 0x20
    lfs f2, 0x28(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r26, 0x184
    psq_st f1, 0x0(r3), 0, 0
    mr r4, r3
    stfs f2, 0x18c(r26)
    bl fn_805F98D0
lbl_fn_8023193C_00000E4C:
    lwz r3, 0x30(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8023193C_00000E6C
    slwi r28, r30, 2
    lwzx r0, r3, r28
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8023193C_00000FB8
lbl_fn_8023193C_00000E6C:
    lwz r3, 0x18(r29)
    slwi r28, r30, 2
    lwzx r0, r3, r28
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8023193C_00000F14
    lwz r0, 0x7c(r25)
    fmr f1, f30
    lfs f2, 0xe4(r26)
    mr r4, r30
    clrlwi r23, r0, 31
    mr r5, r29
    mr r6, r23
    li r3, 0x0
    bl fn_8023329C
    stfs f1, 0xb0(r26)
    fmr f1, f30
    lfs f2, 0xe8(r26)
    mr r4, r30
    mr r5, r29
    mr r6, r23
    li r3, 0x1
    bl fn_8023329C
    stfs f1, 0xb4(r26)
    fmr f1, f30
    lfs f2, 0xec(r26)
    mr r4, r30
    mr r5, r29
    mr r6, r23
    li r3, 0x2
    bl fn_8023329C
    frsp f0, f1
    lfs f5, 0xa8(r24)
    lfs f4, 0xb0(r26)
    lfs f3, 0xb4(r26)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0xb0(r26)
    stfs f3, 0xb4(r26)
    stfs f0, 0xb8(r26)
    b lbl_fn_8023193C_00000F90
lbl_fn_8023193C_00000F14:
    lfs f0, 0x134(r25)
    lfs f7, 0xa8(r24)
    lfs f5, lbl_8087DBE0
    fmuls f6, f0, f7
    lfs f4, 0xb0(r26)
    lfs f3, 0xb4(r26)
    lfs f0, 0xb8(r26)
    fmadds f6, f5, f6, f4
    stfs f6, 0xb0(r26)
    lfs f5, 0x138(r25)
    lfs f4, lbl_8087DBE0
    fmuls f5, f5, f7
    fmadds f5, f4, f5, f3
    stfs f5, 0xb4(r26)
    lfs f4, 0x13c(r25)
    lfs f3, lbl_8087DBE0
    fmuls f4, f4, f7
    fmadds f3, f3, f4, f0
    stfs f3, 0xb8(r26)
    lwz r0, lbl_8087DBE4
    cmpwi r0, 0x0
    beq lbl_fn_8023193C_00000F90
    lfs f0, 0x140(r25)
    fmuls f0, f6, f0
    stfs f0, 0xb0(r26)
    lfs f0, 0x144(r25)
    fmuls f0, f5, f0
    stfs f0, 0xb4(r26)
    lfs f0, 0x148(r25)
    fmuls f0, f3, f0
    stfs f0, 0xb8(r26)
lbl_fn_8023193C_00000F90:
    lwz r0, 0x80(r25)
    cmpwi r0, 0x0
    beq lbl_fn_8023193C_00000FB8
    lfs f3, 0x14c(r26)
    lfs f4, 0xb0(r26)
    lfs f0, 0x150(r26)
    fmuls f3, f3, f4
    fmuls f0, f0, f4
    stfs f3, 0xb4(r26)
    stfs f0, 0xb8(r26)
lbl_fn_8023193C_00000FB8:
    lwz r3, 0x30(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8023193C_00000FD4
    lwzx r0, r3, r28
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    beq lbl_fn_8023193C_00001280
lbl_fn_8023193C_00000FD4:
    lwz r4, 0x18(r29)
    slwi r3, r30, 2
    lwz r0, 0x8c(r25)
    lwzx r3, r4, r3
    clrlwi r23, r0, 31
    extrwi r0, r3, 1, 27
    extrwi r3, r3, 1, 26
    add. r0, r0, r3
    beq lbl_fn_8023193C_0000100C
    cmpwi r0, 0x1
    beq lbl_fn_8023193C_0000109C
    cmpwi r0, 0x2
    beq lbl_fn_8023193C_0000112C
    b lbl_fn_8023193C_000011AC
lbl_fn_8023193C_0000100C:
    lfs f5, lbl_8087DBE0
    lfs f3, 0x1b4(r25)
    lfs f0, 0xbc(r26)
    lfs f4, 0xc0(r26)
    fmadds f7, f5, f3, f0
    lfs f3, 0xc4(r26)
    lfs f0, 0xc8(r26)
    stfs f7, 0xbc(r26)
    lfs f6, lbl_8087DBE0
    lfs f5, 0x1b8(r25)
    fmadds f6, f6, f5, f4
    stfs f6, 0xc0(r26)
    lfs f5, lbl_8087DBE0
    lfs f4, 0x1bc(r25)
    fmadds f5, f5, f4, f3
    stfs f5, 0xc4(r26)
    lfs f4, lbl_8087DBE0
    lfs f3, 0x1c0(r25)
    fmadds f3, f4, f3, f0
    stfs f3, 0xc8(r26)
    lwz r0, lbl_8087DBE4
    cmpwi r0, 0x0
    beq lbl_fn_8023193C_000011AC
    lfs f0, 0x1c4(r25)
    fmuls f0, f7, f0
    stfs f0, 0xbc(r26)
    lfs f0, 0x1c8(r25)
    fmuls f0, f6, f0
    stfs f0, 0xc0(r26)
    lfs f0, 0x1cc(r25)
    fmuls f0, f5, f0
    stfs f0, 0xc4(r26)
    lfs f0, 0x1d0(r25)
    fmuls f0, f3, f0
    stfs f0, 0xc8(r26)
    b lbl_fn_8023193C_000011AC
lbl_fn_8023193C_0000109C:
    lfs f5, lbl_8087DBE0
    lfs f4, 0x1b4(r25)
    lfs f0, 0xbc(r26)
    lfs f3, 0xc0(r26)
    fmadds f6, f5, f4, f0
    lfs f0, 0xc4(r26)
    stfs f6, 0xbc(r26)
    lfs f5, lbl_8087DBE0
    lfs f4, 0x1b8(r25)
    fmadds f5, f5, f4, f3
    stfs f5, 0xc0(r26)
    lfs f4, lbl_8087DBE0
    lfs f3, 0x1bc(r25)
    fmadds f3, f4, f3, f0
    stfs f3, 0xc4(r26)
    lwz r0, lbl_8087DBE4
    cmpwi r0, 0x0
    beq lbl_fn_8023193C_00001108
    lfs f0, 0x1c4(r25)
    fmuls f0, f6, f0
    stfs f0, 0xbc(r26)
    lfs f0, 0x1c8(r25)
    fmuls f0, f5, f0
    stfs f0, 0xc0(r26)
    lfs f0, 0x1cc(r25)
    fmuls f0, f3, f0
    stfs f0, 0xc4(r26)
lbl_fn_8023193C_00001108:
    fmr f1, f30
    lfs f2, 0xfc(r26)
    mr r4, r30
    mr r5, r29
    mr r6, r23
    li r3, 0x6
    bl fn_8023329C
    stfs f1, 0xc8(r26)
    b lbl_fn_8023193C_000011AC
lbl_fn_8023193C_0000112C:
    fmr f1, f30
    lfs f2, 0xfc(r26)
    mr r4, r30
    mr r5, r29
    mr r6, r23
    li r3, 0x6
    bl fn_8023329C
    stfs f1, 0xc8(r26)
    fmr f1, f30
    lfs f2, 0xf0(r26)
    mr r4, r30
    mr r5, r29
    mr r6, r23
    li r3, 0x3
    bl fn_8023329C
    stfs f1, 0xbc(r26)
    fmr f1, f30
    lfs f2, 0xf4(r26)
    mr r4, r30
    mr r5, r29
    mr r6, r23
    li r3, 0x4
    bl fn_8023329C
    stfs f1, 0xc0(r26)
    fmr f1, f30
    lfs f2, 0xf8(r26)
    mr r4, r30
    mr r5, r29
    mr r6, r23
    li r3, 0x5
    bl fn_8023329C
    stfs f1, 0xc4(r26)
lbl_fn_8023193C_000011AC:
    lwz r0, 0x90(r25)
    cmpwi r0, 0x0
    beq lbl_fn_8023193C_000011D4
    lfs f3, 0x15c(r26)
    lfs f4, 0xbc(r26)
    lfs f0, 0x160(r26)
    fmuls f3, f3, f4
    fmuls f0, f0, f4
    stfs f3, 0xc0(r26)
    stfs f0, 0xc4(r26)
lbl_fn_8023193C_000011D4:
    lwz r0, 0x4c(r25)
    rlwinm. r0, r0, 0, 30, 30
    bne lbl_fn_8023193C_00001280
    lfs f3, 0xbc(r26)
    lfs f0, lbl_808830D0
    fcmpo cr0, f3, f0
    bge lbl_fn_8023193C_000011F8
    stfs f0, 0xbc(r26)
    b lbl_fn_8023193C_00001208
lbl_fn_8023193C_000011F8:
    lfs f0, lbl_808830D4
    fcmpo cr0, f3, f0
    ble lbl_fn_8023193C_00001208
    stfs f0, 0xbc(r26)
lbl_fn_8023193C_00001208:
    lfs f3, 0xc0(r26)
    lfs f0, lbl_808830D0
    fcmpo cr0, f3, f0
    bge lbl_fn_8023193C_00001220
    stfs f0, 0xc0(r26)
    b lbl_fn_8023193C_00001230
lbl_fn_8023193C_00001220:
    lfs f0, lbl_808830D4
    fcmpo cr0, f3, f0
    ble lbl_fn_8023193C_00001230
    stfs f0, 0xc0(r26)
lbl_fn_8023193C_00001230:
    lfs f3, 0xc4(r26)
    lfs f0, lbl_808830D0
    fcmpo cr0, f3, f0
    bge lbl_fn_8023193C_00001248
    stfs f0, 0xc4(r26)
    b lbl_fn_8023193C_00001258
lbl_fn_8023193C_00001248:
    lfs f0, lbl_808830D4
    fcmpo cr0, f3, f0
    ble lbl_fn_8023193C_00001258
    stfs f0, 0xc4(r26)
lbl_fn_8023193C_00001258:
    lfs f3, 0xc8(r26)
    lfs f0, lbl_808830D0
    fcmpo cr0, f3, f0
    bge lbl_fn_8023193C_00001270
    stfs f0, 0xc8(r26)
    b lbl_fn_8023193C_00001280
lbl_fn_8023193C_00001270:
    lfs f0, lbl_808830D4
    fcmpo cr0, f3, f0
    ble lbl_fn_8023193C_00001280
    stfs f0, 0xc8(r26)
lbl_fn_8023193C_00001280:
    lwz r3, 0x18(r29)
    slwi r0, r30, 2
    lwzx r0, r3, r0
    rlwinm r0, r0, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_8023193C_000012D8
    fmr f1, f30
    lfs f2, lbl_808830D0
    mr r4, r30
    mr r5, r29
    li r3, 0xa
    li r6, 0x0
    bl fn_8023329C
    stfs f1, 0xdc(r26)
    fmr f1, f30
    lfs f2, lbl_808830D0
    mr r4, r30
    mr r5, r29
    li r3, 0xb
    li r6, 0x0
    bl fn_8023329C
    stfs f1, 0xe0(r26)
lbl_fn_8023193C_000012D8:
    lwz r0, 0x4c(r25)
    rlwinm. r0, r0, 0, 14, 14
    beq lbl_fn_8023193C_00001304
    lfs f3, 0xb0(r26)
    lfs f0, 0xa4(r26)
    psq_l f1, 0x80(r26), 0, 0
    lfs f2, 0x88(r26)
    psq_st f1, 0x194(r26), 0, 0
    stfs f2, 0x19c(r26)
    stfs f0, 0x1a0(r26)
    stfs f3, 0x1a4(r26)
lbl_fn_8023193C_00001304:
    lwz r0, 0x4c(r25)
    rlwinm. r0, r0, 0, 20, 20
    beq lbl_fn_8023193C_000013A0
    lfs f3, 0x80(r26)
    li r0, 0x0
    lfs f0, 0x0(r27)
    fcmpu cr0, f3, f0
    bne lbl_fn_8023193C_00001348
    lfs f3, 0x84(r26)
    lfs f0, 0x4(r27)
    fcmpu cr0, f3, f0
    bne lbl_fn_8023193C_00001348
    lfs f3, 0x88(r26)
    lfs f0, 0x8(r27)
    fcmpu cr0, f3, f0
    bne lbl_fn_8023193C_00001348
    li r0, 0x1
lbl_fn_8023193C_00001348:
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8023193C_000013A0
    lfs f3, 0x88(r26)
    addi r3, r26, 0x174
    lfs f0, 0x8(r27)
    addi r5, r1, 0x8
    lfs f5, 0x84(r26)
    mr r4, r3
    fsubs f2, f3, f0
    lfs f4, 0x4(r27)
    lfs f3, 0x80(r26)
    lfs f0, 0x0(r27)
    fsubs f4, f5, f4
    stfs f2, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x17c(r26)
    bl fn_805F98D0
lbl_fn_8023193C_000013A0:
    li r3, 0x0
lbl_fn_8023193C_000013A4:
    addi r11, r1, 0xd0
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    psq_l f29, 0xd8(r1), 0, 0
    lfd f29, 0xd0(r1)
    bl _restgpr_23
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_802328DC(void)
{
    nofralloc
    lwz r0, lbl_8087F36C
    add r0, r0, r3
    stw r0, lbl_8087F368
    blr
}

asm void fn_802328EC(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x60
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    bl _savegpr_20
    cmpwi r4, 0x0
    mr r28, r3
    mr r29, r4
    mr r30, r5
    beq lbl_fn_802328EC_0000159C
    lhz r0, 0x18(r4)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x2
    beq lbl_fn_802328EC_0000159C
    lbz r0, 0x1b(r4)
    cmpwi r0, 0x0
    beq lbl_fn_802328EC_00001434
    b lbl_fn_802328EC_0000159C
lbl_fn_802328EC_00001434:
    lis r3, lbl_80742F78@ha
    lis r24, lbl_807C8290@ha
    lfd f31, lbl_80742F78@l(r3)
    addi r22, r4, 0x9c
    addi r23, r1, 0x14
    addi r21, r1, 0x8
    addi r20, r24, lbl_807C8290@l
    li r31, 0x0
    li r26, 0x0
    li r27, -0x1
    lis r25, 0x4330
    b lbl_fn_802328EC_00001594
lbl_fn_802328EC_00001464:
    lwz r7, 0xc0(r29)
    mr r6, r22
    psq_l f1, 0x0(r22), 0, 0
    addi r3, r29, 0x8
    lfs f2, 0x8(r22)
    addi r4, r29, 0x3c
    psq_st f1, 0x0(r23), 0, 0
    addi r5, r24, lbl_807C8290@l
    lwz r7, 0x4c(r7)
    stfs f2, 0x1c(r1)
    bl fn_8022C9C8
    lfs f7, 0x1c(r1)
    mr r3, r28
    lfs f0, 0xa4(r29)
    mr r4, r29
    lfs f9, 0x18(r1)
    addi r6, r24, lbl_807C8290@l
    fsubs f2, f7, f0
    lfs f8, 0xa0(r29)
    lfs f7, 0x14(r1)
    lfs f0, 0x9c(r29)
    fsubs f8, f9, f8
    lwz r5, 0xc0(r29)
    fsubs f0, f7, f0
    stfs f8, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r21), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r23), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_802301EC
    lwz r4, 0xc4(r29)
    mr r3, r29
    addi r5, r24, lbl_807C8290@l
    bl fn_80231754
    lbz r0, 0x1a(r29)
    clrlwi. r0, r0, 25
    bne lbl_fn_802328EC_0000151C
    lwz r0, 0xc4(r29)
    cmpwi r0, 0x0
    bne lbl_fn_802328EC_0000151C
    cmpwi r29, 0x0
    beq lbl_fn_802328EC_0000159C
    li r0, 0x1
    stb r0, 0x1b(r29)
    b lbl_fn_802328EC_0000159C
lbl_fn_802328EC_0000151C:
    lwz r3, 0x14(r29)
    stw r25, 0x20(r1)
    xoris r0, r3, 0x8000
    lfs f8, 0x1c(r29)
    stw r0, 0x24(r1)
    lfs f7, lbl_8087DBE0
    lfd f0, 0x20(r1)
    fadds f7, f8, f7
    fsubs f0, f0, f31
    stfs f7, 0x1c(r29)
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_802328EC_00001590
    cmpwi r3, 0x0
    blt lbl_fn_802328EC_00001590
    stw r26, 0x8(r29)
    psq_l f1, 0x0(r20), 0, 0
    psq_l f2, 0x8(r20), 0, 0
    psq_l f3, 0x10(r20), 0, 0
    psq_l f4, 0x18(r20), 0, 0
    psq_l f5, 0x20(r20), 0, 0
    psq_l f6, 0x28(r20), 0, 0
    psq_st f6, 0x64(r29), 0, 0
    psq_st f1, 0x3c(r29), 0, 0
    psq_st f2, 0x44(r29), 0, 0
    psq_st f3, 0x4c(r29), 0, 0
    psq_st f4, 0x54(r29), 0, 0
    psq_st f5, 0x5c(r29), 0, 0
    stw r27, 0x14(r29)
lbl_fn_802328EC_00001590:
    addi r31, r31, 0x1
lbl_fn_802328EC_00001594:
    cmpw r31, r30
    blt lbl_fn_802328EC_00001464
lbl_fn_802328EC_0000159C:
    addi r11, r1, 0x60
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    bl _restgpr_20
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80232AC4(void)
{
    nofralloc
    stw r3, lbl_8087F360
    blr
}

asm void fn_80232ACC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x1
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r5, 0xc(r3)
    b lbl_fn_80232ACC_00001614
lbl_fn_80232ACC_000015F4:
    lwz r3, 0x20(r5)
    lwz r6, 0x4(r5)
    cmplw r3, r4
    bne lbl_fn_80232ACC_00001610
    cmpwi r5, 0x0
    beq lbl_fn_80232ACC_00001610
    stb r0, 0x1b(r5)
lbl_fn_80232ACC_00001610:
    mr r5, r6
lbl_fn_80232ACC_00001614:
    cmpwi r5, 0x0
    bne lbl_fn_80232ACC_000015F4
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_80232ACC_00001648
lbl_fn_80232ACC_00001628:
    lwz r0, 0x24(r28)
    add r3, r0, r31
    lwz r0, 0x24(r3)
    cmplw r0, r29
    bne lbl_fn_80232ACC_00001640
    bl fn_80238560
lbl_fn_80232ACC_00001640:
    addi r31, r31, 0x94
    addi r30, r30, 0x1
lbl_fn_80232ACC_00001648:
    lwz r0, 0x20(r28)
    cmpw r30, r0
    blt lbl_fn_80232ACC_00001628
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80232B7C(void)
{
    nofralloc
    stw r3, lbl_8087F364
    stw r4, lbl_8087DBE8
    blr
}

asm void fn_80232B88(void)
{
    nofralloc
    lwz r3, lbl_8087F364
    blr
}

asm void fn_80232B90(void)
{
    nofralloc
    lwz r3, lbl_8087DBE8
    blr
}

asm void fn_80232B98(void)
{
    nofralloc
    cmpwi r5, -0x1
    bne lbl_fn_80232B98_000016A0
    li r3, 0x0
    blr
lbl_fn_80232B98_000016A0:
    lwz r3, 0xc(r3)
    b lbl_fn_80232B98_000016D4
lbl_fn_80232B98_000016A8:
    lwz r0, 0x24(r3)
    cmplw r0, r4
    bne lbl_fn_80232B98_000016D0
    lwz r0, 0x28(r3)
    cmpw r0, r5
    beq lbl_fn_80232B98_000016C8
    cmpwi r5, -0x2
    bne lbl_fn_80232B98_000016D0
lbl_fn_80232B98_000016C8:
    li r3, 0x1
    blr
lbl_fn_80232B98_000016D0:
    lwz r3, 0x4(r3)
lbl_fn_80232B98_000016D4:
    cmpwi r3, 0x0
    bne lbl_fn_80232B98_000016A8
    li r3, 0x0
    blr
}

asm void fn_80232BEC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    cmpwi r5, -0x1
    mr r28, r3
    mr r29, r4
    mr r30, r5
    mr r31, r6
    bne lbl_fn_80232BEC_00001718
    li r3, 0x0
    b lbl_fn_80232BEC_000017E4
lbl_fn_80232BEC_00001718:
    lwz r4, 0xc(r3)
    b lbl_fn_80232BEC_00001754
lbl_fn_80232BEC_00001720:
    lwz r0, 0x24(r4)
    lwz r27, 0x4(r4)
    cmplw r0, r29
    bne lbl_fn_80232BEC_00001750
    lwz r0, 0x28(r4)
    cmpw r0, r30
    beq lbl_fn_80232BEC_00001744
    cmpwi r30, -0x2
    bne lbl_fn_80232BEC_00001750
lbl_fn_80232BEC_00001744:
    mr r3, r28
    mr r5, r31
    bl fn_802328EC
lbl_fn_80232BEC_00001750:
    mr r4, r27
lbl_fn_80232BEC_00001754:
    cmpwi r4, 0x0
    bne lbl_fn_80232BEC_00001720
    lis r3, lbl_80742F78@ha
    li r6, 0x0
    lfd f2, lbl_80742F78@l(r3)
    li r5, 0x0
    lis r3, 0x4330
    b lbl_fn_80232BEC_000017D4
lbl_fn_80232BEC_00001774:
    lwz r0, 0x24(r28)
    li r4, 0x0
    add r7, r0, r5
    lwz r0, 0x28(r7)
    cmplw r0, r29
    bne lbl_fn_80232BEC_000017A4
    lwz r0, 0x2c(r7)
    cmpw r0, r30
    beq lbl_fn_80232BEC_000017A0
    cmpwi r30, -0x2
    bne lbl_fn_80232BEC_000017A4
lbl_fn_80232BEC_000017A0:
    li r4, 0x1
lbl_fn_80232BEC_000017A4:
    cmpwi r4, 0x0
    beq lbl_fn_80232BEC_000017CC
    xoris r0, r31, 0x8000
    stw r0, 0xc(r1)
    lfs f0, 0x10(r7)
    stw r3, 0x8(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x10(r7)
lbl_fn_80232BEC_000017CC:
    addi r5, r5, 0x94
    addi r6, r6, 0x1
lbl_fn_80232BEC_000017D4:
    lwz r0, 0x20(r28)
    cmpw r6, r0
    blt lbl_fn_80232BEC_00001774
    li r3, 0x1
lbl_fn_80232BEC_000017E4:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80232D04(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x30
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    bl _savegpr_23
    lwz r7, 0xc(r3)
    mr r28, r3
    mr r29, r4
    mr r30, r5
    mr r31, r6
    li r24, 0x0
    li r3, 0x1
    b lbl_fn_80232D04_00001890
lbl_fn_80232D04_00001840:
    lwz r0, 0x24(r7)
    lwz r8, 0x4(r7)
    cmplw r0, r4
    bne lbl_fn_80232D04_0000188C
    lwz r0, 0x28(r7)
    cmpw r0, r5
    beq lbl_fn_80232D04_00001864
    cmpwi r5, -0x2
    bne lbl_fn_80232D04_0000188C
lbl_fn_80232D04_00001864:
    cmpwi r6, 0x0
    bne lbl_fn_80232D04_0000187C
    cmpwi r7, 0x0
    beq lbl_fn_80232D04_00001888
    stb r3, 0x1b(r7)
    b lbl_fn_80232D04_00001888
lbl_fn_80232D04_0000187C:
    lbz r0, 0x1a(r7)
    rlwinm r0, r0, 0, 24, 24
    stb r0, 0x1a(r7)
lbl_fn_80232D04_00001888:
    addi r24, r24, 0x1
lbl_fn_80232D04_0000188C:
    mr r7, r8
lbl_fn_80232D04_00001890:
    cmpwi r7, 0x0
    bne lbl_fn_80232D04_00001840
    lfs f30, lbl_80883110
    li r23, 0x0
    lfs f31, lbl_808830D0
    li r25, 0x0
    li r26, 0x1
    li r27, 0x0
    b lbl_fn_80232D04_00001908
lbl_fn_80232D04_000018B4:
    lwz r0, 0x24(r28)
    add r3, r0, r25
    lwz r0, 0x28(r3)
    cmplw r0, r29
    bne lbl_fn_80232D04_00001900
    lwz r0, 0x2c(r3)
    cmpw r30, r0
    beq lbl_fn_80232D04_000018DC
    cmpwi r30, -0x2
    bne lbl_fn_80232D04_00001900
lbl_fn_80232D04_000018DC:
    cmpwi r31, 0x0
    bne lbl_fn_80232D04_000018EC
    bl fn_80238560
    b lbl_fn_80232D04_000018FC
lbl_fn_80232D04_000018EC:
    stb r26, 0x14(r3)
    stw r27, 0x18(r3)
    stfs f30, 0x1c(r3)
    stfs f31, 0x20(r3)
lbl_fn_80232D04_000018FC:
    addi r24, r24, 0x1
lbl_fn_80232D04_00001900:
    addi r25, r25, 0x94
    addi r23, r23, 0x1
lbl_fn_80232D04_00001908:
    lwz r0, 0x20(r28)
    cmpw r23, r0
    blt lbl_fn_80232D04_000018B4
    psq_l f31, 0x48(r1), 0, 0
    mr r3, r24
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80232E48(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x1
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r4, 0xc(r3)
    b lbl_fn_80232E48_0000197C
lbl_fn_80232E48_00001968:
    cmpwi r4, 0x0
    lwz r3, 0x4(r4)
    beq lbl_fn_80232E48_00001978
    stb r0, 0x1b(r4)
lbl_fn_80232E48_00001978:
    mr r4, r3
lbl_fn_80232E48_0000197C:
    cmpwi r4, 0x0
    bne lbl_fn_80232E48_00001968
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_80232E48_000019A4
lbl_fn_80232E48_00001990:
    lwz r0, 0x24(r29)
    add r3, r0, r31
    bl fn_80238560
    addi r31, r31, 0x94
    addi r30, r30, 0x1
lbl_fn_80232E48_000019A4:
    lwz r0, 0x20(r29)
    cmpw r30, r0
    blt lbl_fn_80232E48_00001990
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
