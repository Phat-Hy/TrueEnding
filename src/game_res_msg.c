#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_19(void);
extern void _restgpr_20(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_19(void);
extern void _savegpr_20(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80072914(void);
extern void fn_800761A8(void);
extern void fn_8022D078(void);
extern void fn_8022D478(void);
extern void fn_80234CD8(void);
extern void fn_80235BF8(void);
extern void fn_80238218(void);
extern void fn_802386FC(void);
extern void fn_8023A2A8(void);
extern void fn_8023A340(void);
extern void fn_804738C4(void);
extern void fn_80473C20(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_80614790(void);
extern void fn_80615C40(void);
extern void fn_8068B770(void);
extern void fn_8068BC30(void);
extern void fn_8068BD60(void);
extern void fn_8068C240(void);

/* External data declarations */
extern u8 lbl_80742F98[];
extern u8 lbl_80742FD8[];
extern u8 lbl_8078FCF8[];
extern u8 lbl_8078FD48[];
extern u8 lbl_807C82D0[];
extern u8 lbl_807C82DC[];

/* Small data declarations */
extern u32 lbl_8087DBF8;
extern u32 lbl_8087DBFC;
extern u32 lbl_8087DC04;
extern u32 lbl_8087DC08;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F378;
extern u32 lbl_8087F380;
extern u32 lbl_8087F384;
extern u32 lbl_8087F388;
extern u32 lbl_8087F38C;
extern u32 lbl_8087F390;
extern u32 lbl_8087F394;
extern u32 lbl_8087F398;
extern u32 lbl_8087F39C;
extern u32 lbl_8087F3B0;
extern u32 lbl_8087F3B8;
extern u32 lbl_8087F3BC;
extern u32 lbl_8087F3C0;
extern u32 lbl_8088311C;
extern u32 lbl_80883120;
extern u32 lbl_80883128;
extern u32 lbl_8088312C;
extern u32 lbl_80883130;
extern u32 lbl_8088313C;
extern u32 lbl_80883140;
extern u32 lbl_80883144;

/* Function declarations */
void fn_8023686C(void);
void fn_802368B0(void);
void fn_80236938(void);
void fn_80236B84(void);
void fn_80236FFC(void);
void fn_802371AC(void);
void fn_802371BC(void);
void fn_80237518(void);
void fn_8023756C(void);
void fn_802375C4(void);
void fn_80237654(void);
void fn_802376D0(void);
void fn_8023772C(void);
void fn_80237784(void);
void fn_8023779C(void);
void fn_802377B8(void);
void fn_8023780C(void);
void fn_8023781C(void);
void fn_80237874(void);
void fn_802378C4(void);
void fn_802378E0(void);
void fn_8023793C(void);
void fn_80237B20(void);
void fn_80237B8C(void);
void fn_80237C88(void);
void fn_80237CF0(void);
void fn_80237DA8(void);
void fn_802380D4(void);
void fn_80238148(void);

asm void fn_8023686C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f1
    stw r31, 0x14(r1)
    mr r31, r3
    bl fn_8022D078
    fmr f1, f31
    mr r3, r31
    bl fn_802380D4
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802368B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    li r4, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r3, lbl_8087EEE0
    bl fn_80072914
    lfs f1, lbl_80883128
    li r0, 0x0
    lfs f0, lbl_8088312C
    mr r3, r30
    stw r0, lbl_8087F38C
    mr r4, r31
    stw r0, lbl_8087F39C
    stw r0, lbl_8087F3B0
    stfs f1, lbl_8087F380
    stfs f0, lbl_8087F384
    stfs f1, lbl_8087F390
    stfs f0, lbl_8087F394
    bl fn_8022D478
    bl fn_80234CD8
    bl fn_80235BF8
    lwz r3, lbl_8087EEE0
    li r4, 0x0
    bl fn_80072914
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80236938(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xd0
    bl _savegpr_19
    cmpwi r7, 0x0
    mr r28, r3
    mr r29, r4
    mr r30, r6
    mr r31, r7
    beq lbl_fn_80236938_00000110
    lwz r3, lbl_8087EFB4
    addi r4, r1, 0x64
    psq_l f1, 0x10c(r3), 0, 0
    lfs f2, 0x114(r3)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x6c(r1)
lbl_fn_80236938_00000110:
    lfs f6, lbl_80883130
    addi r4, r1, 0xc
    lfs f0, 0x0(r5)
    li r3, 0x4
    lfs f4, 0x4(r5)
    fmuls f5, f6, f0
    lfs f3, 0x8(r5)
    lfs f0, 0xc(r5)
    fmuls f4, f6, f4
    fmuls f3, f6, f3
    fmuls f0, f6, f0
    fctiwz f5, f5
    fctiwz f4, f4
    fctiwz f3, f3
    stfd f5, 0x70(r1)
    fctiwz f0, f0
    stfd f4, 0x78(r1)
    lwz r7, 0x74(r1)
    stfd f3, 0x80(r1)
    lwz r6, 0x7c(r1)
    stfd f0, 0x88(r1)
    lwz r5, 0x84(r1)
    lwz r0, 0x8c(r1)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_80615C40
    lwz r3, lbl_8087EEE0
    bl fn_800761A8
    clrlwi r5, r28, 16
    li r3, 0x98
    li r4, 0x0
    bl fn_80614790
    addi r25, r1, 0x4c
    addi r24, r1, 0x28
    addi r23, r1, 0x40
    addi r22, r1, 0x1c
    addi r21, r1, 0x34
    addi r20, r1, 0x10
    li r19, 0x0
    li r27, 0x0
    lis r26, 0xcc01
    b lbl_fn_80236938_000002F8
lbl_fn_80236938_000001C8:
    lfsx f4, r29, r27
    add r3, r29, r27
    stfs f4, -0x8000(r26)
    cmpwi r31, 0x0
    lfs f5, 0x4(r3)
    stfs f5, -0x8000(r26)
    lfs f6, 0x8(r3)
    stfs f6, -0x8000(r26)
    beq lbl_fn_80236938_000002DC
    lfs f0, 0x8(r30)
    mr r3, r25
    lfs f3, 0x4(r30)
    mr r4, r25
    fsubs f2, f6, f0
    lfs f0, 0x0(r30)
    fsubs f3, f5, f3
    stfs f4, 0x58(r1)
    fsubs f0, f4, f0
    stfs f3, 0x2c(r1)
    stfs f0, 0x28(r1)
    psq_l f1, 0x0(r24), 0, 0
    stfs f5, 0x5c(r1)
    stfs f6, 0x60(r1)
    stfs f2, 0x30(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x54(r1)
    bl fn_805F98D0
    lfs f3, 0x6c(r1)
    mr r3, r23
    lfs f0, 0x60(r1)
    mr r4, r23
    lfs f5, 0x68(r1)
    fsubs f2, f3, f0
    lfs f4, 0x5c(r1)
    lfs f3, 0x64(r1)
    lfs f0, 0x58(r1)
    fsubs f4, f5, f4
    stfs f2, 0x24(r1)
    fsubs f0, f3, f0
    stfs f4, 0x20(r1)
    stfs f0, 0x1c(r1)
    psq_l f1, 0x0(r22), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    stfs f2, 0x48(r1)
    bl fn_805F98D0
    lfs f3, 0x54(r1)
    mr r3, r21
    lfs f0, 0x48(r1)
    mr r4, r21
    lfs f5, 0x50(r1)
    fadds f2, f3, f0
    lfs f4, 0x44(r1)
    lfs f3, 0x4c(r1)
    lfs f0, 0x40(r1)
    fadds f4, f5, f4
    stfs f2, 0x18(r1)
    fadds f0, f3, f0
    stfs f4, 0x14(r1)
    stfs f0, 0x10(r1)
    psq_l f1, 0x0(r20), 0, 0
    psq_st f1, 0x0(r21), 0, 0
    stfs f2, 0x3c(r1)
    bl fn_805F98D0
    lfs f4, 0x3c(r1)
    lfs f3, 0x38(r1)
    lfs f0, 0x34(r1)
    stfs f0, -0x8000(r26)
    stfs f3, -0x8000(r26)
    stfs f4, -0x8000(r26)
lbl_fn_80236938_000002DC:
    add r3, r29, r27
    addi r19, r19, 0x1
    lfs f0, 0xc(r3)
    addi r27, r27, 0x14
    stfs f0, -0x8000(r26)
    lfs f0, 0x10(r3)
    stfs f0, -0x8000(r26)
lbl_fn_80236938_000002F8:
    cmpw r19, r28
    blt lbl_fn_80236938_000001C8
    addi r11, r1, 0xd0
    bl _restgpr_19
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_80236B84(void)
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
    bl _savegpr_20
    lwz r11, lbl_8087F38C
    fmr f30, f1
    lwz r0, lbl_8087DBF8
    mr r24, r3
    lwz r31, 0xa8(r1)
    mr r25, r4
    cmpw r11, r0
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    mr r30, r10
    bge lbl_fn_80236B84_00000768
    lfs f0, lbl_8088311C
    cmpwi cr1, r3, 0x0
    stfs f0, 0x2c(r1)
    li r8, 0x0
    lfs f31, lbl_80883128
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    ble cr1, lbl_fn_80236B84_00000518
    cmpwi r3, 0x8
    subi r6, r3, 0x8
    ble lbl_fn_80236B84_000004C8
    li r7, 0x0
    blt cr1, lbl_fn_80236B84_000003C4
    lis r5, 0x8000
    subi r0, r5, 0x2
    cmpw r3, r0
    bgt lbl_fn_80236B84_000003C4
    li r7, 0x1
lbl_fn_80236B84_000003C4:
    cmpwi r7, 0x0
    beq lbl_fn_80236B84_000004C8
    addi r0, r6, 0x7
    mr r5, r25
    srwi r0, r0, 3
    mtctr r0
    cmpwi r6, 0x0
    ble lbl_fn_80236B84_000004C8
lbl_fn_80236B84_000003E4:
    lfs f9, 0x20(r1)
    addi r8, r8, 0x8
    lfs f0, 0x0(r5)
    lfs f8, 0x24(r1)
    lfs f7, 0x4(r5)
    fadds f9, f9, f0
    lfs f0, 0x14(r5)
    fadds f11, f8, f7
    lfs f10, 0x28(r1)
    lfs f8, 0x8(r5)
    fadds f9, f9, f0
    lfs f0, 0x18(r5)
    fadds f12, f10, f8
    lfs f8, 0x1c(r5)
    fadds f10, f11, f0
    lfs f7, 0x28(r5)
    fadds f12, f12, f8
    lfs f0, 0x2c(r5)
    fadds f11, f9, f7
    lfs f9, 0x30(r5)
    fadds f10, f10, f0
    lfs f7, 0x3c(r5)
    fadds f12, f12, f9
    lfs f0, 0x40(r5)
    lfs f8, 0x44(r5)
    fadds f11, f11, f7
    fadds f10, f10, f0
    lfs f7, 0x50(r5)
    fadds f12, f12, f8
    lfs f0, 0x54(r5)
    lfs f9, 0x58(r5)
    fadds f11, f11, f7
    fadds f10, f10, f0
    lfs f7, 0x64(r5)
    fadds f12, f12, f9
    lfs f0, 0x68(r5)
    lfs f8, 0x6c(r5)
    fadds f11, f11, f7
    fadds f10, f10, f0
    lfs f7, 0x78(r5)
    fadds f12, f12, f8
    lfs f0, 0x7c(r5)
    lfs f9, 0x80(r5)
    fadds f11, f11, f7
    fadds f10, f10, f0
    lfs f8, 0x8c(r5)
    lfs f7, 0x90(r5)
    fadds f8, f11, f8
    lfs f0, 0x94(r5)
    fadds f9, f12, f9
    fadds f7, f10, f7
    stfs f8, 0x20(r1)
    addi r5, r5, 0xa0
    fadds f0, f9, f0
    stfs f7, 0x24(r1)
    stfs f0, 0x28(r1)
    bdnz lbl_fn_80236B84_000003E4
lbl_fn_80236B84_000004C8:
    mulli r5, r8, 0x14
    subf r0, r8, r3
    add r4, r4, r5
    mtctr r0
    cmpw r8, r3
    bge lbl_fn_80236B84_00000518
lbl_fn_80236B84_000004E0:
    lfs f7, 0x20(r1)
    lfs f0, 0x0(r4)
    lfs f9, 0x24(r1)
    fadds f10, f7, f0
    lfs f8, 0x4(r4)
    lfs f0, 0x8(r4)
    addi r4, r4, 0x14
    lfs f7, 0x28(r1)
    fadds f8, f9, f8
    fadds f0, f7, f0
    stfs f10, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f0, 0x28(r1)
    bdnz lbl_fn_80236B84_000004E0
lbl_fn_80236B84_00000518:
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80742F98@ha
    stw r3, 0x3c(r1)
    lfd f11, lbl_80742F98@l(r4)
    cmpwi r9, 0x0
    stw r0, 0x38(r1)
    lfs f7, 0x20(r1)
    lfd f0, 0x38(r1)
    stw r3, 0x44(r1)
    fsubs f10, f0, f11
    lfs f8, 0x24(r1)
    stw r0, 0x40(r1)
    lfs f0, 0x28(r1)
    lfd f9, 0x40(r1)
    fdivs f10, f7, f10
    stw r3, 0x4c(r1)
    stw r0, 0x48(r1)
    lfd f7, 0x48(r1)
    stfs f10, 0x20(r1)
    fsubs f9, f9, f11
    fsubs f7, f7, f11
    fdivs f8, f8, f9
    stfs f8, 0x24(r1)
    fdivs f2, f0, f7
    stfs f2, 0x28(r1)
    beq lbl_fn_80236B84_000005C4
    addi r3, r1, 0x20
    addi r23, r1, 0x14
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    psq_st f1, 0x0(r23), 0, 0
    mr r4, r23
    mr r5, r23
    stfs f2, 0x1c(r1)
    bl fn_805F93C0
    lfs f2, 0x1c(r1)
    addi r3, r1, 0x2c
    psq_l f1, 0x0(r23), 0, 0
    fmr f31, f2
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x34(r1)
    b lbl_fn_80236B84_00000628
lbl_fn_80236B84_000005C4:
    addi r22, r1, 0x8
    addi r21, r1, 0x2c
    li r20, 0x0
    li r23, 0x0
    b lbl_fn_80236B84_00000620
lbl_fn_80236B84_000005D8:
    add r5, r25, r23
    mr r3, r30
    psq_l f1, 0x0(r5), 0, 0
    mr r4, r22
    lfs f2, 0x8(r5)
    mr r5, r22
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r22), 0, 0
    bl fn_805F93C0
    lfs f2, 0x10(r1)
    psq_l f1, 0x0(r22), 0, 0
    fcmpo cr0, f2, f31
    psq_st f1, 0x0(r21), 0, 0
    stfs f2, 0x34(r1)
    bge lbl_fn_80236B84_00000618
    frsp f31, f2
lbl_fn_80236B84_00000618:
    addi r20, r20, 0x1
    addi r23, r23, 0x14
lbl_fn_80236B84_00000620:
    cmpw r20, r24
    blt lbl_fn_80236B84_000005D8
lbl_fn_80236B84_00000628:
    rlwinm r3, r29, 0, 8, 8
    subis r0, r3, 0x80
    cmplwi r0, 0x0
    bne lbl_fn_80236B84_00000648
    lfs f7, lbl_8088313C
    lfs f0, lbl_8087DC04
    fmuls f10, f7, f0
    b lbl_fn_80236B84_0000064C
lbl_fn_80236B84_00000648:
    lfs f10, lbl_8087DC04
lbl_fn_80236B84_0000064C:
    rlwinm r3, r29, 0, 9, 9
    subis r0, r3, 0x40
    cmplwi r0, 0x0
    bne lbl_fn_80236B84_00000668
    fcmpo cr0, f31, f10
    cror eq, gt, eq
    beq lbl_fn_80236B84_00000768
lbl_fn_80236B84_00000668:
    lwz r4, lbl_8087F38C
    subis r0, r3, 0x40
    lwz r5, lbl_8087F388
    li r3, 0x0
    mulli r4, r4, 0x70
    lfs f9, 0x0(r28)
    stfsux f31, r4, r5
    cmplwi r0, 0x0
    lfs f8, 0x4(r28)
    stw r3, 0x4(r4)
    lfs f7, 0x8(r28)
    stw r26, 0xc(r4)
    lfs f0, 0xc(r28)
    stw r27, 0x10(r4)
    stw r25, 0x14(r4)
    stw r29, 0x8(r4)
    stw r24, 0x18(r4)
    stfs f9, 0x1c(r4)
    stfs f8, 0x20(r4)
    stfs f7, 0x24(r4)
    stfs f0, 0x28(r4)
    bne lbl_fn_80236B84_000006F0
    fsubs f7, f31, f10
    lfs f0, lbl_8087DC08
    lfs f8, lbl_80883120
    fneg f7, f7
    fdivs f0, f7, f0
    fcmpo cr0, f8, f0
    bge lbl_fn_80236B84_000006E0
    b lbl_fn_80236B84_000006E4
lbl_fn_80236B84_000006E0:
    fmr f8, f0
lbl_fn_80236B84_000006E4:
    lfs f0, 0xc(r28)
    fmuls f0, f0, f8
    stfs f0, 0x28(r4)
lbl_fn_80236B84_000006F0:
    addi r3, r1, 0x20
    lfs f2, 0x28(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x2c(r4), 0, 0
    stfs f2, 0x34(r4)
    stfs f30, 0x38(r4)
    psq_l f2, 0x8(r30), 0, 0
    psq_l f3, 0x10(r30), 0, 0
    psq_l f4, 0x18(r30), 0, 0
    psq_l f5, 0x20(r30), 0, 0
    psq_l f6, 0x28(r30), 0, 0
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x3c(r4), 0, 0
    psq_st f2, 0x44(r4), 0, 0
    psq_st f3, 0x4c(r4), 0, 0
    psq_st f4, 0x54(r4), 0, 0
    psq_st f5, 0x5c(r4), 0, 0
    psq_st f6, 0x64(r4), 0, 0
    stw r31, 0x6c(r4)
    lfs f0, lbl_8087F380
    fcmpo cr0, f0, f31
    ble lbl_fn_80236B84_0000074C
    stfs f31, lbl_8087F380
lbl_fn_80236B84_0000074C:
    lfs f0, lbl_8087F384
    fcmpo cr0, f0, f31
    bge lbl_fn_80236B84_0000075C
    stfs f31, lbl_8087F384
lbl_fn_80236B84_0000075C:
    lwz r3, lbl_8087F38C
    addi r0, r3, 0x1
    stw r0, lbl_8087F38C
lbl_fn_80236B84_00000768:
    addi r11, r1, 0x80
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    bl _restgpr_20
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80236FFC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r10, lbl_8087F39C
    mr r28, r3
    lwz r0, lbl_8087DBFC
    mr r29, r4
    mr r30, r5
    mr r31, r6
    cmpw r10, r0
    mr r26, r7
    mr r27, r9
    bge lbl_fn_80236FFC_00000928
    lfs f0, 0x2c(r3)
    addi r4, r1, 0x8
    lfs f7, 0x1c(r3)
    mr r5, r4
    lfs f8, 0xc(r3)
    mr r3, r8
    stfs f8, 0x8(r1)
    stfs f7, 0xc(r1)
    stfs f0, 0x10(r1)
    bl fn_805F93C0
    rlwinm r3, r31, 0, 8, 8
    lfs f11, 0x10(r1)
    subis r0, r3, 0x80
    cmplwi r0, 0x0
    bne lbl_fn_80236FFC_00000818
    lfs f7, lbl_8088313C
    lfs f0, lbl_8087DC04
    fmuls f10, f7, f0
    b lbl_fn_80236FFC_0000081C
lbl_fn_80236FFC_00000818:
    lfs f10, lbl_8087DC04
lbl_fn_80236FFC_0000081C:
    rlwinm r3, r31, 0, 9, 9
    subis r0, r3, 0x40
    cmplwi r0, 0x0
    bne lbl_fn_80236FFC_00000838
    fcmpo cr0, f11, f10
    cror eq, gt, eq
    beq lbl_fn_80236FFC_00000928
lbl_fn_80236FFC_00000838:
    lwz r4, lbl_8087F39C
    rlwinm r3, r31, 0, 9, 9
    lwz r5, lbl_8087F398
    subis r0, r3, 0x40
    mulli r4, r4, 0x5c
    li r3, 0x0
    stfsux f11, r4, r5
    cmplwi r0, 0x0
    psq_l f1, 0x0(r28), 0, 0
    stw r3, 0x4(r4)
    psq_l f2, 0x8(r28), 0, 0
    stw r29, 0xc(r4)
    psq_l f3, 0x10(r28), 0, 0
    psq_st f1, 0x10(r4), 0, 0
    psq_l f4, 0x18(r28), 0, 0
    psq_st f2, 0x18(r4), 0, 0
    psq_l f5, 0x20(r28), 0, 0
    psq_st f3, 0x20(r4), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_st f4, 0x28(r4), 0, 0
    lfs f9, 0x0(r30)
    psq_st f5, 0x30(r4), 0, 0
    lfs f8, 0x4(r30)
    psq_st f6, 0x38(r4), 0, 0
    lfs f7, 0x8(r30)
    stfs f9, 0x40(r4)
    lfs f0, 0xc(r30)
    stfs f8, 0x44(r4)
    stfs f7, 0x48(r4)
    stfs f0, 0x4c(r4)
    bne lbl_fn_80236FFC_000008E4
    fsubs f7, f11, f10
    lfs f0, lbl_8087DC08
    lfs f8, lbl_80883120
    fneg f7, f7
    fdivs f0, f7, f0
    fcmpo cr0, f8, f0
    bge lbl_fn_80236FFC_000008D4
    b lbl_fn_80236FFC_000008D8
lbl_fn_80236FFC_000008D4:
    fmr f8, f0
lbl_fn_80236FFC_000008D8:
    lfs f0, 0xc(r30)
    fmuls f0, f0, f8
    stfs f0, 0x4c(r4)
lbl_fn_80236FFC_000008E4:
    stw r31, 0x8(r4)
    lfs f0, 0x0(r26)
    stfs f0, 0x50(r4)
    lfs f0, 0x4(r26)
    stfs f0, 0x54(r4)
    stw r27, 0x58(r4)
    lfs f0, lbl_8087F390
    fcmpo cr0, f0, f11
    ble lbl_fn_80236FFC_0000090C
    stfs f11, lbl_8087F390
lbl_fn_80236FFC_0000090C:
    lfs f0, lbl_8087F394
    fcmpo cr0, f0, f11
    bge lbl_fn_80236FFC_0000091C
    stfs f11, lbl_8087F394
lbl_fn_80236FFC_0000091C:
    lwz r3, lbl_8087F39C
    addi r0, r3, 0x1
    stw r0, lbl_8087F39C
lbl_fn_80236FFC_00000928:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802371AC(void)
{
    nofralloc
    lwz r0, lbl_8087DBF8
    slwi r0, r0, 3
    stw r0, lbl_8087F378
    blr
}

asm void fn_802371BC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r27, r3
    mr r28, r4
    li r30, 0x0
    beq lbl_fn_802371BC_00000C94
    lis r31, 0x1
    lis r26, 0xff00
    b lbl_fn_802371BC_00000C88
lbl_fn_802371BC_00000980:
    cmpwi r0, 0x0
    lha r29, 0x2(r28)
    beq lbl_fn_802371BC_000009B0
    cmpwi r0, 0x1
    beq lbl_fn_802371BC_000009BC
    cmpwi r0, 0x2
    beq lbl_fn_802371BC_00000A5C
    cmpwi r0, 0x3
    beq lbl_fn_802371BC_00000ACC
    cmpwi r0, 0x4
    beq lbl_fn_802371BC_00000C5C
    b lbl_fn_802371BC_00000C84
lbl_fn_802371BC_000009B0:
    add r27, r27, r29
    add r30, r30, r29
    b lbl_fn_802371BC_00000C84
lbl_fn_802371BC_000009BC:
    cmpwi r29, 0x0
    ble lbl_fn_802371BC_00000C84
    srwi. r0, r29, 3
    mtctr r0
    beq lbl_fn_802371BC_00000A40
lbl_fn_802371BC_000009D0:
    lhz r3, 0x0(r27)
    addi r0, r27, 0x2
    sthbrx r3, r0, r27
    addi r30, r30, 0x10
    lhz r3, 0x2(r27)
    sthbrx r3, r0, r0
    addi r0, r27, 0x4
    lhz r3, 0x4(r27)
    sthbrx r3, r0, r0
    addi r0, r27, 0x6
    lhz r3, 0x6(r27)
    sthbrx r3, r0, r0
    addi r0, r27, 0x8
    lhz r3, 0x8(r27)
    sthbrx r3, r0, r0
    addi r0, r27, 0xa
    lhz r3, 0xa(r27)
    sthbrx r3, r0, r0
    addi r0, r27, 0xc
    lhz r3, 0xc(r27)
    sthbrx r3, r0, r0
    addi r0, r27, 0xe
    lhz r3, 0xe(r27)
    addi r27, r27, 0x10
    sthbrx r3, r0, r0
    bdnz lbl_fn_802371BC_000009D0
    andi. r29, r29, 0x7
    beq lbl_fn_802371BC_00000C84
lbl_fn_802371BC_00000A40:
    mtctr r29
lbl_fn_802371BC_00000A44:
    lhz r3, 0x0(r27)
    addi r30, r30, 0x2
    sthbrx r3, r0, r27
    addi r27, r27, 0x2
    bdnz lbl_fn_802371BC_00000A44
    b lbl_fn_802371BC_00000C84
lbl_fn_802371BC_00000A5C:
    cmpwi r29, 0x0
    ble lbl_fn_802371BC_00000C84
    srwi. r0, r29, 2
    mtctr r0
    beq lbl_fn_802371BC_00000AB0
lbl_fn_802371BC_00000A70:
    lwz r3, 0x0(r27)
    addi r0, r27, 0x4
    stwbrx r3, r0, r27
    addi r30, r30, 0x10
    lwz r3, 0x4(r27)
    stwbrx r3, r0, r0
    addi r0, r27, 0x8
    lwz r3, 0x8(r27)
    stwbrx r3, r0, r0
    addi r0, r27, 0xc
    lwz r3, 0xc(r27)
    addi r27, r27, 0x10
    stwbrx r3, r0, r0
    bdnz lbl_fn_802371BC_00000A70
    andi. r29, r29, 0x3
    beq lbl_fn_802371BC_00000C84
lbl_fn_802371BC_00000AB0:
    mtctr r29
lbl_fn_802371BC_00000AB4:
    lwz r3, 0x0(r27)
    addi r30, r30, 0x4
    stwbrx r3, r0, r27
    addi r27, r27, 0x4
    bdnz lbl_fn_802371BC_00000AB4
    b lbl_fn_802371BC_00000C84
lbl_fn_802371BC_00000ACC:
    cmpwi r29, 0x0
    subi r10, r31, 0x100
    ble lbl_fn_802371BC_00000C84
    srwi. r0, r29, 1
    mtctr r0
    beq lbl_fn_802371BC_00000BD8
lbl_fn_802371BC_00000AE4:
    lwz r11, 0x0(r27)
    addi r30, r30, 0x10
    lwz r12, 0x4(r27)
    srwi r9, r11, 8
    slwi r8, r11, 24
    rotrwi r4, r12, 8
    rotlwi r7, r12, 8
    rlwimi r4, r11, 24, 0, 7
    srwi r5, r11, 24
    rlwimi r7, r11, 8, 0, 23
    slwi r6, r11, 8
    and r4, r4, r26
    rlwimi r8, r12, 24, 8, 31
    rlwinm r7, r7, 0, 8, 15
    rlwimi r6, r12, 8, 24, 31
    or r5, r4, r5
    and r9, r9, r10
    clrlwi r4, r6, 24
    rlwinm r6, r12, 8, 8, 15
    or r5, r7, r5
    or r3, r9, r5
    stw r3, 0x4(r27)
    and r5, r8, r10
    rlwimi r4, r12, 24, 0, 7
    or r5, r6, r5
    stw r3, 0xc(r1)
    or r0, r5, r4
    stw r0, 0x0(r27)
    lwz r11, 0x8(r27)
    lwz r12, 0xc(r27)
    srwi r9, r11, 8
    slwi r8, r11, 24
    rotrwi r4, r12, 8
    rotlwi r7, r12, 8
    rlwimi r4, r11, 24, 0, 7
    slwi r6, r11, 8
    rlwimi r7, r11, 8, 0, 23
    srwi r5, r11, 24
    and r4, r4, r26
    rlwimi r8, r12, 24, 8, 31
    rlwinm r7, r7, 0, 8, 15
    rlwimi r6, r12, 8, 24, 31
    or r5, r4, r5
    and r9, r9, r10
    clrlwi r4, r6, 24
    rlwinm r6, r12, 8, 8, 15
    or r5, r7, r5
    stw r0, 0x8(r1)
    or r3, r9, r5
    rlwimi r4, r12, 24, 0, 7
    and r5, r8, r10
    stw r3, 0xc(r27)
    or r5, r6, r5
    or r0, r5, r4
    stw r0, 0x8(r27)
    addi r27, r27, 0x10
    stw r3, 0xc(r1)
    stw r0, 0x8(r1)
    bdnz lbl_fn_802371BC_00000AE4
    andi. r29, r29, 0x1
    beq lbl_fn_802371BC_00000C84
lbl_fn_802371BC_00000BD8:
    mtctr r29
lbl_fn_802371BC_00000BDC:
    lwz r11, 0x0(r27)
    addi r30, r30, 0x8
    lwz r12, 0x4(r27)
    srwi r9, r11, 8
    slwi r8, r11, 24
    rotrwi r4, r12, 8
    rotlwi r7, r12, 8
    rlwimi r4, r11, 24, 0, 7
    srwi r5, r11, 24
    rlwimi r7, r11, 8, 0, 23
    slwi r6, r11, 8
    and r4, r4, r26
    rlwimi r8, r12, 24, 8, 31
    rlwinm r7, r7, 0, 8, 15
    rlwimi r6, r12, 8, 24, 31
    or r5, r4, r5
    and r9, r9, r10
    clrlwi r4, r6, 24
    rlwinm r6, r12, 8, 8, 15
    or r5, r7, r5
    or r3, r9, r5
    stw r3, 0x4(r27)
    and r5, r8, r10
    rlwimi r4, r12, 24, 0, 7
    or r5, r6, r5
    stw r3, 0xc(r1)
    or r0, r5, r4
    stw r0, 0x0(r27)
    addi r27, r27, 0x8
    stw r0, 0x8(r1)
    bdnz lbl_fn_802371BC_00000BDC
    b lbl_fn_802371BC_00000C84
lbl_fn_802371BC_00000C5C:
    li r25, 0x0
    b lbl_fn_802371BC_00000C7C
lbl_fn_802371BC_00000C64:
    lwz r4, 0x4(r28)
    mr r3, r27
    bl fn_802371BC
    add r27, r27, r3
    add r30, r30, r3
    addi r25, r25, 0x1
lbl_fn_802371BC_00000C7C:
    cmpw r25, r29
    blt lbl_fn_802371BC_00000C64
lbl_fn_802371BC_00000C84:
    addi r28, r28, 0x8
lbl_fn_802371BC_00000C88:
    lha r0, 0x0(r28)
    cmpwi r0, -0x1
    bne lbl_fn_802371BC_00000980
lbl_fn_802371BC_00000C94:
    mr r3, r30
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80237518(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    addi r31, r3, 0x4
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0x0(r3)
    mr r3, r31
    bl fn_80473E74
    lis r4, lbl_8078FCF8@ha
    mr r3, r30
    addi r4, r4, lbl_8078FCF8@l
    stw r4, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8023756C(void)
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
    beq lbl_fn_8023756C_00000D3C
    li r4, 0x0
    bl fn_80473E8C
    cmpwi r31, 0x0
    ble lbl_fn_8023756C_00000D3C
    mr r3, r30
    bl dtor_80084684
lbl_fn_8023756C_00000D3C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802375C4(void)
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
    beq lbl_fn_802375C4_00000DCC
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802375C4_00000DAC
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_802375C4_00000D9C
    mr r4, r30
    bl fn_8023A2A8
lbl_fn_802375C4_00000D9C:
    addi r3, r30, 0x4
    bl fn_80473F88
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_802375C4_00000DAC:
    addic. r3, r30, 0x4
    beq lbl_fn_802375C4_00000DBC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802375C4_00000DBC:
    cmpwi r31, 0x0
    ble lbl_fn_802375C4_00000DCC
    mr r3, r30
    bl dtor_80084684
lbl_fn_802375C4_00000DCC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80237654(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80237654_00000E34
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_80237654_00000E24
    mr r4, r30
    bl fn_8023A2A8
lbl_fn_80237654_00000E24:
    addi r3, r30, 0x4
    bl fn_80473F88
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_80237654_00000E34:
    lwz r12, 0x4(r30)
    addi r3, r30, 0x4
    mr r4, r31
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802376D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x4
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_802376D0_00000E90
    li r3, 0x1
    b lbl_fn_802376D0_00000EAC
lbl_fn_802376D0_00000E90:
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802376D0_00000EA8
    addi r3, r31, 0x4
    bl fn_804738C4
    stw r3, 0x0(r31)
lbl_fn_802376D0_00000EA8:
    li r3, 0x0
lbl_fn_802376D0_00000EAC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8023772C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8023772C_00000F04
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_8023772C_00000EF4
    mr r4, r31
    bl fn_8023A2A8
lbl_fn_8023772C_00000EF4:
    addi r3, r31, 0x4
    bl fn_80473F88
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8023772C_00000F04:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80237784(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80237784_00000F28
    b fn_802386FC
lbl_fn_80237784_00000F28:
    li r3, 0x0
    blr
}

asm void fn_8023779C(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8023779C_00000F44
    lwz r3, 0x38(r3)
    blr
lbl_fn_8023779C_00000F44:
    li r3, 0x0
    blr
}

asm void fn_802377B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    addi r31, r3, 0x4
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0x0(r3)
    mr r3, r31
    bl fn_80473E74
    lis r4, lbl_8078FD48@ha
    mr r3, r30
    addi r4, r4, lbl_8078FD48@l
    stw r4, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8023780C(void)
{
    nofralloc
    lwzu r12, 0x4(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctr
}

asm void fn_8023781C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8023781C_00000FF4
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_8023781C_00000FE4
    mr r4, r31
    bl fn_8023A340
lbl_fn_8023781C_00000FE4:
    addi r3, r31, 0x4
    bl fn_80473F88
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8023781C_00000FF4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80237874(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x4
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_80237874_00001040
    addi r3, r31, 0x4
    bl fn_80473C20
    stw r3, 0x0(r31)
    li r3, 0x0
    b lbl_fn_80237874_00001044
lbl_fn_80237874_00001040:
    li r3, 0x1
lbl_fn_80237874_00001044:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802378C4(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_802378C4_0000106C
    lwz r3, 0xc(r3)
    blr
lbl_fn_802378C4_0000106C:
    li r3, 0x0
    blr
}

asm void fn_802378E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    la r3, lbl_8087F3B8
    stw r0, 0x14(r1)
    bl fn_8068B770
    lis r4, fn_8068BC30@ha
    lis r5, lbl_807C82D0@ha
    addi r4, r4, fn_8068BC30@l
    la r3, lbl_8087F3B8
    addi r5, r5, lbl_807C82D0@l
    bl __register_global_object
    la r3, lbl_8087F3BC
    bl fn_8068BD60
    lis r4, fn_8068C240@ha
    lis r5, lbl_807C82DC@ha
    addi r4, r4, fn_8068C240@l
    la r3, lbl_8087F3BC
    addi r5, r5, lbl_807C82DC@l
    bl __register_global_object
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8023793C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    subi r8, r7, 0x1
    li r9, 0x0
    add r0, r5, r6
    stmw r22, 0x8(r1)
    cmpwi cr1, r8, 0x1
    stw r9, 0x0(r3)
    li r3, 0x1
    stw r5, 0x0(r4)
    stw r9, 0x0(r5)
    stw r0, 0x4(r5)
    ble cr1, lbl_fn_8023793C_0000128C
    subi r0, r7, 0x2
    subi r9, r7, 0x9
    cmpwi r0, 0x8
    ble lbl_fn_8023793C_00001248
    li r10, 0x0
    li r11, 0x0
    blt cr1, lbl_fn_8023793C_00001130
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r8, r0
    bgt lbl_fn_8023793C_00001130
    li r11, 0x1
lbl_fn_8023793C_00001130:
    cmpwi r11, 0x0
    beq lbl_fn_8023793C_00001170
    subi r0, r7, 0x1
    li r4, 0x1
    clrrwi r8, r0, 31
    addis r0, r8, 0x8000
    cmplwi r0, 0x0
    bne lbl_fn_8023793C_00001164
    subi r0, r7, 0x2
    clrrwi r0, r0, 31
    cmpw r8, r0
    beq lbl_fn_8023793C_00001164
    li r4, 0x0
lbl_fn_8023793C_00001164:
    cmpwi r4, 0x0
    beq lbl_fn_8023793C_00001170
    li r10, 0x1
lbl_fn_8023793C_00001170:
    cmpwi r10, 0x0
    beq lbl_fn_8023793C_00001248
    addi r0, r9, 0x6
    slwi r12, r6, 2
    slwi r24, r6, 3
    mr r31, r6
    srwi r0, r0, 3
    neg r30, r6
    slwi r29, r6, 1
    subf r28, r6, r12
    add r27, r12, r6
    subf r25, r6, r24
    mulli r26, r6, 0x6
    mtctr r0
    cmpwi r9, 0x1
    ble lbl_fn_8023793C_00001248
lbl_fn_8023793C_000011B0:
    add r0, r31, r30
    add r4, r31, r6
    add r0, r5, r0
    stwx r0, r5, r31
    add r8, r5, r31
    add r23, r5, r4
    stw r23, 0x4(r8)
    add r0, r31, r29
    add r22, r5, r0
    add r11, r31, r28
    stwx r8, r5, r4
    add r10, r31, r12
    add r9, r31, r27
    add r8, r31, r26
    stw r22, 0x4(r23)
    add r4, r31, r25
    add r0, r31, r24
    add r11, r5, r11
    stw r23, 0x0(r22)
    add r10, r5, r10
    add r9, r5, r9
    add r8, r5, r8
    stw r11, 0x4(r22)
    add r4, r5, r4
    add r0, r5, r0
    add r31, r31, r24
    stw r22, 0x0(r11)
    addi r3, r3, 0x8
    stw r10, 0x4(r11)
    stw r11, 0x0(r10)
    stw r9, 0x4(r10)
    stw r10, 0x0(r9)
    stw r8, 0x4(r9)
    stw r9, 0x0(r8)
    stw r4, 0x4(r8)
    stw r8, 0x0(r4)
    stw r0, 0x4(r4)
    bdnz lbl_fn_8023793C_000011B0
lbl_fn_8023793C_00001248:
    subi r4, r7, 0x1
    neg r8, r6
    mullw r7, r3, r6
    subf r0, r3, r4
    mtctr r0
    cmpw r3, r4
    bge lbl_fn_8023793C_0000128C
lbl_fn_8023793C_00001264:
    add r0, r7, r8
    add r4, r5, r7
    add r0, r5, r0
    stwx r0, r5, r7
    add r0, r7, r6
    add r7, r7, r6
    add r0, r5, r0
    stw r0, 0x4(r4)
    addi r3, r3, 0x1
    bdnz lbl_fn_8023793C_00001264
lbl_fn_8023793C_0000128C:
    mullw r4, r3, r6
    subi r3, r3, 0x1
    li r0, 0x0
    mullw r3, r3, r6
    add r3, r5, r3
    stwux r3, r4, r5
    stw r0, 0x4(r4)
    lmw r22, 0x8(r1)
    addi r1, r1, 0x30
    blr
}

asm void fn_80237B20(void)
{
    nofralloc
    lwz r6, 0x0(r3)
    cmpwi r6, 0x0
    bne lbl_fn_80237B20_000012D4
    li r0, 0x0
    stw r0, 0x0(r4)
    stw r0, 0x4(r4)
    stw r4, 0x0(r3)
    b lbl_fn_80237B20_00001318
lbl_fn_80237B20_000012D4:
    cmpwi r5, 0x0
    bne lbl_fn_80237B20_000012FC
    stw r4, 0x0(r3)
    li r0, 0x0
    stw r0, 0x0(r4)
    stw r6, 0x4(r4)
    stw r4, 0x0(r6)
    b lbl_fn_80237B20_00001318
    b lbl_fn_80237B20_000012FC
lbl_fn_80237B20_000012F8:
    mr r6, r0
lbl_fn_80237B20_000012FC:
    lwz r0, 0x4(r6)
    cmpwi r0, 0x0
    bne lbl_fn_80237B20_000012F8
    li r0, 0x0
    stw r0, 0x4(r4)
    stw r6, 0x0(r4)
    stw r4, 0x4(r6)
lbl_fn_80237B20_00001318:
    mr r3, r4
    blr
}

asm void fn_80237B8C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, 0x0(r4)
    cmpwi r31, 0x0
    beq lbl_fn_80237B8C_00001398
    lwz r5, 0x0(r31)
    cmpwi r5, 0x0
    beq lbl_fn_80237B8C_00001350
    lwz r0, 0x4(r31)
    stw r0, 0x4(r5)
lbl_fn_80237B8C_00001350:
    lwz r5, 0x4(r31)
    cmpwi r5, 0x0
    beq lbl_fn_80237B8C_00001364
    lwz r0, 0x0(r31)
    stw r0, 0x0(r5)
lbl_fn_80237B8C_00001364:
    lwz r5, 0x4(r31)
    stw r5, 0x0(r4)
    cmpwi r5, 0x0
    beq lbl_fn_80237B8C_0000137C
    li r0, 0x0
    stw r0, 0x0(r5)
lbl_fn_80237B8C_0000137C:
    li r0, 0x0
    stw r0, 0x0(r31)
    mr r4, r31
    li r5, 0x1
    stw r0, 0x4(r31)
    bl fn_80237B20
    b lbl_fn_80237B8C_00001404
lbl_fn_80237B8C_00001398:
    cmpwi r5, 0x0
    beq lbl_fn_80237B8C_00001404
    lwz r31, 0x0(r3)
    cmpwi r31, 0x0
    beq lbl_fn_80237B8C_00001404
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80237B8C_000013C0
    lwz r0, 0x4(r31)
    stw r0, 0x4(r4)
lbl_fn_80237B8C_000013C0:
    lwz r4, 0x4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80237B8C_000013D4
    lwz r0, 0x0(r31)
    stw r0, 0x0(r4)
lbl_fn_80237B8C_000013D4:
    lwz r4, 0x4(r31)
    stw r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80237B8C_000013EC
    li r0, 0x0
    stw r0, 0x0(r4)
lbl_fn_80237B8C_000013EC:
    li r0, 0x0
    stw r0, 0x0(r31)
    mr r4, r31
    li r5, 0x1
    stw r0, 0x4(r31)
    bl fn_80237B20
lbl_fn_80237B8C_00001404:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80237C88(void)
{
    nofralloc
    lwz r7, 0x0(r5)
    lwz r6, 0x0(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80237C88_00001434
    lwz r0, 0x4(r5)
    stw r0, 0x4(r7)
lbl_fn_80237C88_00001434:
    lwz r7, 0x4(r5)
    cmpwi r7, 0x0
    beq lbl_fn_80237C88_00001448
    lwz r0, 0x0(r5)
    stw r0, 0x0(r7)
lbl_fn_80237C88_00001448:
    cmplw r6, r5
    bne lbl_fn_80237C88_00001468
    lwz r6, 0x4(r5)
    stw r6, 0x0(r3)
    cmpwi r6, 0x0
    beq lbl_fn_80237C88_00001468
    li r0, 0x0
    stw r0, 0x0(r6)
lbl_fn_80237C88_00001468:
    li r0, 0x0
    stw r0, 0x0(r5)
    mr r3, r4
    mr r4, r5
    stw r0, 0x4(r5)
    li r5, 0x0
    b fn_80237B20
}

asm void fn_80237CF0(void)
{
    nofralloc
    mulli r0, r4, 0x68
    lwz r5, 0x24(r5)
    slwi r4, r3, 3
    lfs f6, lbl_80883140
    lfs f0, lbl_80883144
    li r7, 0x0
    add r0, r5, r0
    add r3, r0, r4
    lwzx r5, r4, r0
    lwz r4, 0x4(r3)
    subi r0, r5, 0x1
    mr r3, r4
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80237CF0_00001518
lbl_fn_80237CF0_000014C0:
    addi r0, r7, 0x1
    lfs f5, 0x0(r3)
    slwi r0, r0, 3
    lfsx f3, r4, r0
    fsubs f4, f1, f5
    add r5, r4, r0
    fsubs f3, f3, f5
    fdivs f3, f4, f3
    fcmpo cr0, f3, f6
    cror eq, gt, eq
    bne lbl_fn_80237CF0_0000150C
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80237CF0_0000150C
    lfs f0, 0x4(r5)
    lfs f1, 0x4(r3)
    fsubs f0, f0, f1
    fmadds f6, f3, f0, f1
    b lbl_fn_80237CF0_00001518
lbl_fn_80237CF0_0000150C:
    addi r3, r3, 0x8
    addi r7, r7, 0x1
    bdnz lbl_fn_80237CF0_000014C0
lbl_fn_80237CF0_00001518:
    cmpwi r6, 0x0
    beq lbl_fn_80237CF0_00001530
    lfs f0, lbl_80883144
    fadds f0, f0, f2
    fmuls f6, f6, f0
    b lbl_fn_80237CF0_00001534
lbl_fn_80237CF0_00001530:
    fadds f6, f6, f2
lbl_fn_80237CF0_00001534:
    fmr f1, f6
    blr
}

asm void fn_80237DA8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_25
    lwz r9, 0x2c(r4)
    lis r8, 0x4330
    lwz r11, 0x9c(r4)
    lis r10, lbl_80742FD8@ha
    xoris r9, r9, 0x8000
    stw r8, 0x8(r1)
    xoris r0, r11, 0x8000
    lfd f2, lbl_80742FD8@l(r10)
    stw r9, 0xc(r1)
    cmpwi r11, 0x0
    mr r27, r3
    mr r28, r4
    lfd f0, 0x8(r1)
    mr r29, r5
    stw r0, 0x14(r1)
    mr r30, r6
    fsubs f3, f0, f2
    mr r31, r7
    stw r8, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f4, f0, f2
    bne lbl_fn_80237DA8_000015B8
    lfs f31, lbl_80883140
    b lbl_fn_80237DA8_000015FC
lbl_fn_80237DA8_000015B8:
    fcmpo cr0, f3, f4
    cror eq, gt, eq
    bne lbl_fn_80237DA8_000015CC
    li r3, 0x0
    b lbl_fn_80237DA8_00001848
lbl_fn_80237DA8_000015CC:
    fsubs f2, f1, f3
    lfs f0, lbl_80883140
    fsubs f1, f4, f3
    fdivs f31, f2, f1
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    beq lbl_fn_80237DA8_000015F4
    lfs f0, lbl_80883144
    fcmpo cr0, f31, f0
    ble lbl_fn_80237DA8_000015FC
lbl_fn_80237DA8_000015F4:
    li r3, 0x0
    b lbl_fn_80237DA8_00001848
lbl_fn_80237DA8_000015FC:
    lwz r0, 0x14(r3)
    lis r6, 0x7878
    addi r6, r6, 0x7879
    lwz r3, 0x20(r3)
    subf r0, r0, r4
    mulhw r0, r6, r0
    srawi r0, r0, 7
    srwi r6, r0, 31
    add r25, r0, r6
    slwi r26, r25, 2
    lwzx r0, r3, r26
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_80237DA8_00001674
    lfs f0, 0xa0(r4)
    lfs f1, 0x30(r4)
    fsubs f0, f0, f1
    fmadds f0, f31, f0, f1
    stfs f0, 0x0(r5)
    lfs f0, 0xa4(r4)
    lfs f1, 0x34(r4)
    fsubs f0, f0, f1
    fmadds f0, f31, f0, f1
    stfs f0, 0x4(r5)
    lfs f0, 0xa8(r4)
    lfs f1, 0x38(r4)
    fsubs f0, f0, f1
    fmadds f0, f31, f0, f1
    stfs f0, 0x8(r5)
    b lbl_fn_80237DA8_000016D4
lbl_fn_80237DA8_00001674:
    fmr f1, f31
    lfs f2, lbl_80883140
    mr r4, r25
    mr r5, r27
    li r3, 0x0
    li r6, 0x0
    bl fn_80237CF0
    stfs f1, 0x0(r29)
    fmr f1, f31
    lfs f2, lbl_80883140
    mr r4, r25
    mr r5, r27
    li r3, 0x1
    li r6, 0x0
    bl fn_80237CF0
    stfs f1, 0x4(r29)
    fmr f1, f31
    lfs f2, lbl_80883140
    mr r4, r25
    mr r5, r27
    li r3, 0x2
    li r6, 0x0
    bl fn_80237CF0
    stfs f1, 0x8(r29)
lbl_fn_80237DA8_000016D4:
    lwz r3, 0x20(r27)
    lwzx r0, r3, r26
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80237DA8_00001700
    lfs f1, 0x3c(r28)
    lfs f0, 0xac(r28)
    fsubs f0, f0, f1
    fmadds f0, f31, f0, f1
    stfs f0, 0x0(r30)
    b lbl_fn_80237DA8_00001720
lbl_fn_80237DA8_00001700:
    fmr f1, f31
    lfs f2, lbl_80883140
    mr r4, r25
    mr r5, r27
    li r3, 0x3
    li r6, 0x0
    bl fn_80237CF0
    stfs f1, 0x0(r30)
lbl_fn_80237DA8_00001720:
    lwz r3, 0x20(r27)
    lwzx r0, r3, r26
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80237DA8_00001788
    lfs f0, 0xc0(r28)
    lfs f1, 0x50(r28)
    fsubs f0, f0, f1
    fmadds f0, f31, f0, f1
    stfs f0, 0xc(r31)
    lfs f0, 0xb4(r28)
    lfs f1, 0x44(r28)
    fsubs f0, f0, f1
    fmadds f0, f31, f0, f1
    stfs f0, 0x0(r31)
    lfs f0, 0xb8(r28)
    lfs f1, 0x48(r28)
    fsubs f0, f0, f1
    fmadds f0, f31, f0, f1
    stfs f0, 0x4(r31)
    lfs f0, 0xbc(r28)
    lfs f1, 0x4c(r28)
    fsubs f0, f0, f1
    fmadds f0, f31, f0, f1
    stfs f0, 0x8(r31)
    b lbl_fn_80237DA8_00001808
lbl_fn_80237DA8_00001788:
    fmr f1, f31
    lfs f2, lbl_80883140
    mr r4, r25
    mr r5, r27
    li r3, 0x5
    li r6, 0x0
    bl fn_80237CF0
    stfs f1, 0x0(r31)
    fmr f1, f31
    lfs f2, lbl_80883140
    mr r4, r25
    mr r5, r27
    li r3, 0x6
    li r6, 0x0
    bl fn_80237CF0
    stfs f1, 0x4(r31)
    fmr f1, f31
    lfs f2, lbl_80883140
    mr r4, r25
    mr r5, r27
    li r3, 0x7
    li r6, 0x0
    bl fn_80237CF0
    stfs f1, 0x8(r31)
    fmr f1, f31
    lfs f2, lbl_80883140
    mr r4, r25
    mr r5, r27
    li r3, 0x8
    li r6, 0x0
    bl fn_80237CF0
    stfs f1, 0xc(r31)
lbl_fn_80237DA8_00001808:
    lwz r0, 0x24(r28)
    rlwinm. r0, r0, 0, 12, 12
    beq lbl_fn_80237DA8_00001844
    lfs f0, 0x0(r31)
    lfs f2, 0x4(r31)
    fneg f3, f0
    lfs f1, 0x8(r31)
    lfs f0, 0xc(r31)
    fneg f2, f2
    fneg f1, f1
    stfs f3, 0x0(r31)
    fneg f0, f0
    stfs f2, 0x4(r31)
    stfs f1, 0x8(r31)
    stfs f0, 0xc(r31)
lbl_fn_80237DA8_00001844:
    li r3, 0x1
lbl_fn_80237DA8_00001848:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_25
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802380D4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f1
    stw r31, 0x14(r1)
    li r31, 0x0
    stw r30, 0x10(r1)
    li r30, 0x0
    stw r29, 0xc(r1)
    mr r29, r3
    b lbl_fn_802380D4_000018B0
lbl_fn_802380D4_00001898:
    lwz r0, 0x24(r29)
    fmr f1, f31
    add r3, r0, r31
    bl fn_80238218
    addi r31, r31, 0x94
    addi r30, r30, 0x1
lbl_fn_802380D4_000018B0:
    lwz r0, 0x20(r29)
    cmpw r30, r0
    blt lbl_fn_802380D4_00001898
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    lwz r29, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80238148(void)
{
    nofralloc
    lfs f1, lbl_80883140
    li r4, 0x0
    lfs f0, lbl_80883144
    li r0, -0x1
    stw r4, 0x0(r3)
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    stw r4, 0xc(r3)
    stfs f1, 0x10(r3)
    stb r4, 0x14(r3)
    stw r4, 0x18(r3)
    stfs f1, 0x1c(r3)
    stfs f1, 0x20(r3)
    stw r4, 0x28(r3)
    stw r4, 0x2c(r3)
    stw r4, 0x30(r3)
    stw r4, 0x34(r3)
    stw r4, 0x38(r3)
    stw r4, 0x3c(r3)
    stw r4, 0x40(r3)
    stw r0, 0x44(r3)
    stw r4, 0x88(r3)
    stb r4, 0x8c(r3)
    stfs f1, 0x74(r3)
    stfs f1, 0x6c(r3)
    stfs f1, 0x68(r3)
    stfs f1, 0x64(r3)
    stfs f1, 0x60(r3)
    stfs f1, 0x58(r3)
    stfs f1, 0x54(r3)
    stfs f1, 0x50(r3)
    stfs f1, 0x4c(r3)
    stfs f0, 0x70(r3)
    stfs f0, 0x5c(r3)
    stfs f0, 0x48(r3)
    blr
}
