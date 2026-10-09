#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_16(void);
extern void _restgpr_17(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_16(void);
extern void _savegpr_17(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8003E120(void);
extern void fn_8004ECC0(void);
extern void fn_80051A88(void);
extern void fn_80051B70(void);
extern void fn_80051BC4(void);
extern void fn_80051CD8(void);
extern void fn_800844D8(void);
extern void fn_80092814(void);
extern void fn_8011F8F4(void);
extern void fn_8011F91C(void);
extern void fn_8011FC10(void);
extern void fn_8011FE3C(void);
extern void fn_801240B4(void);
extern void fn_80370174(void);
extern void fn_803E3C78(void);
extern void fn_8047F580(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);

/* External data declarations */
extern u8 lbl_8074F8CC[];
extern u8 lbl_8078B314[];
extern u8 lbl_8078B330[];
extern u8 lbl_8078B34C[];
extern u8 lbl_8078B394[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F540;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087FA20;
extern u32 lbl_80885B10;
extern u32 lbl_80885B24;
extern u32 lbl_80885B28;
extern u32 lbl_80885B2C;
extern u32 lbl_80885B30;
extern u32 lbl_80885B48;
extern u32 lbl_80885B50;
extern u32 lbl_80885B54;
extern u32 lbl_80885B9C;
extern u32 lbl_80885BE8;
extern u32 lbl_80885BEC;

/* Function declarations */
void fn_803AC3D8(void);
void fn_803AC708(void);
void fn_803AC978(void);
void fn_803ACD08(void);
void fn_803ACD50(void);
void fn_803ACE18(void);
void fn_803ACF88(void);
void fn_803AD05C(void);
void fn_803AD130(void);
void fn_803AD13C(void);
void fn_803AD148(void);
void fn_803AD278(void);
void fn_803AD3D8(void);
void fn_803AD508(void);
void fn_803AD668(void);
void fn_803AD750(void);
void fn_803ADC90(void);

asm void fn_803AC3D8(void)
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
    bl _savegpr_27
    lwz r8, lbl_8087F430
    fmr f30, f1
    addi r30, r1, 0x5c
    addi r7, r1, 0x50
    lfs f2, 0x7c(r8)
    mr r27, r4
    psq_l f1, 0x74(r8), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    frsp f0, f2
    mr r31, r5
    mr r28, r6
    stfs f2, 0x58(r1)
    mr r3, r30
    lfs f5, 0x50(r1)
    lfs f2, 0x88(r8)
    psq_l f1, 0x80(r8), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    fsubs f0, f2, f0
    lfs f3, 0x54(r1)
    lfs f6, 0x5c(r1)
    lfs f4, 0x60(r1)
    fsubs f5, f6, f5
    stfs f0, 0x64(r1)
    fsubs f0, f4, f3
    stfs f5, 0x5c(r1)
    stfs f0, 0x60(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80885B24
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_803AC3D8_000000B0
    mr r3, r30
    mr r4, r30
    bl fn_805F98D0
lbl_fn_803AC3D8_000000B0:
    lfs f4, 0x5c(r1)
    addi r4, r1, 0x30
    lfs f3, 0x60(r1)
    addi r3, r1, 0x50
    lfs f0, 0x64(r1)
    fmuls f7, f4, f30
    fmuls f6, f3, f30
    lfs f4, 0x50(r1)
    fmuls f5, f0, f30
    lfs f3, 0x54(r1)
    lfs f0, 0x58(r1)
    fadds f4, f7, f4
    fadds f3, f6, f3
    li r29, 0x0
    fadds f0, f5, f0
    stfs f4, 0x5c(r1)
    stfs f3, 0x60(r1)
    stfs f0, 0x64(r1)
    psq_l f1, 0x5f4(r27), 0, 0
    lfs f2, 0x5fc(r27)
    stfs f2, 0x38(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x600(r27), 0, 0
    lfs f2, 0x608(r27)
    stfs f2, 0x44(r1)
    psq_st f1, 0xc(r4), 0, 0
    lfs f0, 0x60c(r27)
    stfs f0, 0x48(r1)
    bl fn_80051BC4
    cmpwi r3, 0x0
    beq lbl_fn_803AC3D8_000002D8
    addi r3, r1, 0x50
    lfs f2, 0x58(r1)
    stfs f2, 0x20(r1)
    addi r4, r1, 0x3c
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x18
    psq_st f1, 0x0(r5), 0, 0
    addi r30, r1, 0x24
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x8
    psq_st f1, 0x0(r30), 0, 0
    lfs f2, 0x44(r1)
    lfs f0, 0x20(r1)
    lfs f5, 0x28(r1)
    fsubs f6, f2, f0
    lfs f4, 0x1c(r1)
    lfs f3, 0x24(r1)
    lfs f0, 0x18(r1)
    fsubs f4, f5, f4
    stfs f2, 0x2c(r1)
    fsubs f0, f3, f0
    lfs f30, 0x48(r1)
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9940
    fabs f3, f1
    lfs f0, lbl_80885B24
    fmr f31, f1
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_803AC3D8_00000228
    lfs f3, 0x24(r1)
    mr r3, r30
    lfs f0, 0x18(r1)
    mr r4, r30
    lfs f5, 0x28(r1)
    fsubs f6, f3, f0
    lfs f4, 0x1c(r1)
    lfs f3, 0x2c(r1)
    lfs f0, 0x20(r1)
    fsubs f4, f5, f4
    stfs f6, 0x24(r1)
    fsubs f0, f3, f0
    stfs f4, 0x28(r1)
    stfs f0, 0x2c(r1)
    bl fn_805F98D0
    fsubs f5, f31, f30
    lfs f4, 0x24(r1)
    lfs f3, 0x28(r1)
    lfs f0, 0x2c(r1)
    fmuls f7, f4, f5
    lfs f4, 0x18(r1)
    fmuls f6, f3, f5
    lfs f3, 0x1c(r1)
    fmuls f5, f0, f5
    lfs f0, 0x20(r1)
    fadds f4, f7, f4
    fadds f3, f6, f3
    fadds f0, f5, f0
    stfs f4, 0x24(r1)
    stfs f3, 0x28(r1)
    stfs f0, 0x2c(r1)
lbl_fn_803AC3D8_00000228:
    lfs f0, lbl_80885B28
    fmuls f0, f0, f30
    fcmpo cr0, f31, f0
    ble lbl_fn_803AC3D8_0000026C
    lis r4, 0x8000
    lwz r3, lbl_8087EE98
    addi r7, r4, 0x10
    addi r5, r1, 0x18
    addi r6, r1, 0x24
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ECC0
    cmpwi r3, 0x0
    bne lbl_fn_803AC3D8_0000026C
    li r0, 0x1
    b lbl_fn_803AC3D8_00000270
lbl_fn_803AC3D8_0000026C:
    li r0, 0x0
lbl_fn_803AC3D8_00000270:
    cmpwi r0, 0x0
    beq lbl_fn_803AC3D8_000002D8
    lwz r3, lbl_8087F0A8
    lwz r0, 0xb0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803AC3D8_00000298
    addi r3, r3, 0x48c
    li r4, 0x24
    bl fn_801240B4
    b lbl_fn_803AC3D8_000002CC
lbl_fn_803AC3D8_00000298:
    lwz r4, lbl_8087F430
    lwz r0, 0x86c(r4)
    lwz r3, 0x868(r4)
    cmpw r3, r0
    bne lbl_fn_803AC3D8_000002C0
    cmpwi r28, 0x0
    beq lbl_fn_803AC3D8_000002C8
    lwz r0, 0x874(r4)
    cmpwi r0, 0xf
    bge lbl_fn_803AC3D8_000002C8
lbl_fn_803AC3D8_000002C0:
    li r3, 0x0
    b lbl_fn_803AC3D8_000002CC
lbl_fn_803AC3D8_000002C8:
    li r3, 0x1
lbl_fn_803AC3D8_000002CC:
    cmpwi r3, 0x0
    beq lbl_fn_803AC3D8_000002D8
    li r29, 0x1
lbl_fn_803AC3D8_000002D8:
    cmpwi r31, 0x0
    beq lbl_fn_803AC3D8_00000304
    addi r3, r1, 0x50
    lfs f2, 0x58(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
    psq_l f1, 0xc(r3), 0, 0
    lfs f2, 0x64(r1)
    stfs f2, 0x14(r31)
    psq_st f1, 0xc(r31), 0, 0
lbl_fn_803AC3D8_00000304:
    psq_l f31, 0x98(r1), 0, 0
    mr r3, r29
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    addi r11, r1, 0x80
    bl _restgpr_27
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_803AC708(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_26
    lwz r5, lbl_8087EFB4
    addi r26, r1, 0x54
    addi r6, r1, 0x8
    addi r4, r1, 0x48
    lfs f5, 0x120(r5)
    mr r28, r3
    lfs f4, 0x114(r5)
    mr r3, r4
    lfs f3, 0x11c(r5)
    fsubs f5, f5, f4
    lfs f0, 0x110(r5)
    lfs f2, 0x114(r5)
    fsubs f4, f3, f0
    lfs f3, 0x118(r5)
    lfs f0, 0x10c(r5)
    stfs f2, 0x5c(r1)
    fmr f2, f5
    psq_l f1, 0x10c(r5), 0, 0
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_st f1, 0x0(r26), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f5, 0x10(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x50(r1)
    bl fn_805F98D0
    lfs f7, lbl_80885B2C
    addi r3, r1, 0x3c
    lfs f4, 0x50(r1)
    addi r4, r1, 0x60
    lfs f3, 0x4c(r1)
    addi r6, r1, 0x30
    fmuls f5, f4, f7
    lfs f4, 0x5c(r1)
    fmuls f6, f3, f7
    lfs f0, 0x48(r1)
    lfs f3, 0x58(r1)
    addi r5, r1, 0x6c
    fmuls f7, f0, f7
    lfs f2, 0x5c(r1)
    psq_l f1, 0x0(r26), 0, 0
    fadds f4, f4, f5
    lfs f0, 0x54(r1)
    fadds f3, f3, f6
    fadds f0, f0, f7
    stfs f3, 0x34(r1)
    addi r31, r1, 0x20
    li r29, 0x0
    stfs f0, 0x30(r1)
    li r27, 0x0
    stfs f2, 0x44(r1)
    lis r26, 0x68dc
    stfs f2, 0x68(r1)
    fmr f2, f4
    psq_st f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x74(r1)
    stfs f7, 0x14(r1)
    lwz r30, 0x88(r28)
    stfs f6, 0x18(r1)
    stfs f5, 0x1c(r1)
    stfs f4, 0x38(r1)
    b lbl_fn_803AC708_00000578
lbl_fn_803AC708_0000044C:
    lwz r8, 0xf0(r30)
    mr r4, r29
    add r5, r8, r27
    lwz r0, 0x20(r5)
    cmpwi r0, 0x0
    blt lbl_fn_803AC708_00000468
    mr r4, r0
lbl_fn_803AC708_00000468:
    mulli r0, r4, 0xc
    lwz r3, 0x110(r28)
    lwzx r0, r3, r0
    cmpwi r0, 0x0
    blt lbl_fn_803AC708_00000570
    mulli r3, r4, 0x28
    slwi r0, r0, 2
    lwz r6, 0x80(r28)
    addi r7, r28, 0x80
    add r3, r8, r3
    lwz r3, 0x1c(r3)
    lwzx r4, r3, r0
    b lbl_fn_803AC708_000004B8
lbl_fn_803AC708_0000049C:
    lwz r0, 0xc(r6)
    cmpw r0, r4
    blt lbl_fn_803AC708_000004B4
    mr r7, r6
    lwz r6, 0x0(r6)
    b lbl_fn_803AC708_000004B8
lbl_fn_803AC708_000004B4:
    lwz r6, 0x4(r6)
lbl_fn_803AC708_000004B8:
    cmpwi r6, 0x0
    bne lbl_fn_803AC708_0000049C
    addi r0, r28, 0x80
    cmplw r7, r0
    beq lbl_fn_803AC708_000004D8
    lwz r0, 0xc(r7)
    cmpw r4, r0
    bge lbl_fn_803AC708_000004DC
lbl_fn_803AC708_000004D8:
    addi r7, r28, 0x80
lbl_fn_803AC708_000004DC:
    addi r0, r28, 0x80
    cmplw r7, r0
    beq lbl_fn_803AC708_00000514
    subi r3, r26, 0x7453
    lwz r0, 0x10(r7)
    mulhw r3, r3, r4
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r28, r3
    lwz r3, 0x64(r3)
    add r3, r3, r0
    b lbl_fn_803AC708_00000518
lbl_fn_803AC708_00000514:
    li r3, 0x0
lbl_fn_803AC708_00000518:
    cmpwi r3, 0x0
    beq lbl_fn_803AC708_00000570
    lwz r0, 0xc(r3)
    cmpwi r0, 0x7
    bne lbl_fn_803AC708_00000570
    lwz r0, 0xb8(r3)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x8
    bne lbl_fn_803AC708_00000570
    psq_l f1, 0x4(r5), 0, 0
    mr r4, r31
    lfs f2, 0xc(r5)
    addi r3, r1, 0x60
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, 0x14(r5)
    stfs f0, 0x2c(r1)
    bl fn_80051B70
    cmpwi r3, 0x0
    beq lbl_fn_803AC708_00000570
    li r3, 0x1
    b lbl_fn_803AC708_00000588
lbl_fn_803AC708_00000570:
    addi r29, r29, 0x1
    addi r27, r27, 0x28
lbl_fn_803AC708_00000578:
    lwz r0, 0xec(r30)
    cmplw r29, r0
    blt lbl_fn_803AC708_0000044C
    li r3, 0x0
lbl_fn_803AC708_00000588:
    addi r11, r1, 0x90
    bl _restgpr_26
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_803AC978(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_803AC978_000005B0
    li r3, 0x0
    blr
lbl_fn_803AC978_000005B0:
    lwz r5, 0x48(r4)
    li r0, 0x1
    cmpwi r5, 0x1
    beq lbl_fn_803AC978_000005CC
    cmpwi r5, 0x4
    beq lbl_fn_803AC978_000005CC
    li r0, 0x0
lbl_fn_803AC978_000005CC:
    cmpwi r0, 0x0
    beq lbl_fn_803AC978_000006E8
    lwz r6, 0x88(r3)
    li r9, 0x0
    li r8, 0x0
    lwz r0, 0x80(r6)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803AC978_000006E8
lbl_fn_803AC978_000005F0:
    lwz r5, 0x84(r6)
    lwz r0, 0x58(r4)
    add r7, r5, r8
    lwzx r5, r5, r8
    cmpw r5, r0
    bne lbl_fn_803AC978_000006DC
    mulli r0, r9, 0xc
    lwz r5, 0x118(r3)
    lwzx r6, r5, r0
    cmpwi r6, 0x0
    blt lbl_fn_803AC978_000006E8
    lwz r0, 0x140(r7)
    cmpw r6, r0
    bge lbl_fn_803AC978_000006E8
    lwz r5, 0x144(r7)
    slwi r0, r6, 2
    lwz r7, 0x80(r3)
    addi r8, r3, 0x80
    lwzx r6, r5, r0
    b lbl_fn_803AC978_0000065C
lbl_fn_803AC978_00000640:
    lwz r0, 0xc(r7)
    cmpw r0, r6
    blt lbl_fn_803AC978_00000658
    mr r8, r7
    lwz r7, 0x0(r7)
    b lbl_fn_803AC978_0000065C
lbl_fn_803AC978_00000658:
    lwz r7, 0x4(r7)
lbl_fn_803AC978_0000065C:
    cmpwi r7, 0x0
    bne lbl_fn_803AC978_00000640
    addi r0, r3, 0x80
    cmplw r8, r0
    beq lbl_fn_803AC978_0000067C
    lwz r0, 0xc(r8)
    cmpw r6, r0
    bge lbl_fn_803AC978_00000680
lbl_fn_803AC978_0000067C:
    addi r8, r3, 0x80
lbl_fn_803AC978_00000680:
    addi r0, r3, 0x80
    cmplw r8, r0
    beq lbl_fn_803AC978_000006BC
    lis r5, 0x68dc
    lwz r0, 0x10(r8)
    subi r5, r5, 0x7453
    mulhw r5, r5, r6
    srawi r5, r5, 12
    srwi r6, r5, 31
    add r5, r5, r6
    slwi r5, r5, 2
    add r5, r3, r5
    lwz r5, 0x64(r5)
    add r5, r5, r0
    b lbl_fn_803AC978_000006C0
lbl_fn_803AC978_000006BC:
    li r5, 0x0
lbl_fn_803AC978_000006C0:
    cmpwi r5, 0x0
    beq lbl_fn_803AC978_000006E8
    lwz r0, 0xc(r5)
    cmpwi r0, 0x7
    bne lbl_fn_803AC978_000006E8
    li r3, 0x1
    blr
lbl_fn_803AC978_000006DC:
    addi r8, r8, 0x148
    addi r9, r9, 0x1
    bdnz lbl_fn_803AC978_000005F0
lbl_fn_803AC978_000006E8:
    lwz r0, 0x48(r4)
    cmpwi r0, 0x2
    bne lbl_fn_803AC978_00000808
    lwz r6, 0x88(r3)
    li r9, 0x0
    li r8, 0x0
    lwz r0, 0x88(r6)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803AC978_00000808
lbl_fn_803AC978_00000710:
    lwz r5, 0x8c(r6)
    lwz r0, 0x58(r4)
    add r7, r5, r8
    lwzx r5, r5, r8
    cmpw r5, r0
    bne lbl_fn_803AC978_000007FC
    mulli r0, r9, 0xc
    lwz r5, 0x120(r3)
    lwzx r6, r5, r0
    cmpwi r6, 0x0
    blt lbl_fn_803AC978_00000808
    lwz r0, 0x140(r7)
    cmpw r6, r0
    bge lbl_fn_803AC978_00000808
    lwz r5, 0x144(r7)
    slwi r0, r6, 2
    lwz r7, 0x80(r3)
    addi r8, r3, 0x80
    lwzx r6, r5, r0
    b lbl_fn_803AC978_0000077C
lbl_fn_803AC978_00000760:
    lwz r0, 0xc(r7)
    cmpw r0, r6
    blt lbl_fn_803AC978_00000778
    mr r8, r7
    lwz r7, 0x0(r7)
    b lbl_fn_803AC978_0000077C
lbl_fn_803AC978_00000778:
    lwz r7, 0x4(r7)
lbl_fn_803AC978_0000077C:
    cmpwi r7, 0x0
    bne lbl_fn_803AC978_00000760
    addi r0, r3, 0x80
    cmplw r8, r0
    beq lbl_fn_803AC978_0000079C
    lwz r0, 0xc(r8)
    cmpw r6, r0
    bge lbl_fn_803AC978_000007A0
lbl_fn_803AC978_0000079C:
    addi r8, r3, 0x80
lbl_fn_803AC978_000007A0:
    addi r0, r3, 0x80
    cmplw r8, r0
    beq lbl_fn_803AC978_000007DC
    lis r5, 0x68dc
    lwz r0, 0x10(r8)
    subi r5, r5, 0x7453
    mulhw r5, r5, r6
    srawi r5, r5, 12
    srwi r6, r5, 31
    add r5, r5, r6
    slwi r5, r5, 2
    add r5, r3, r5
    lwz r5, 0x64(r5)
    add r5, r5, r0
    b lbl_fn_803AC978_000007E0
lbl_fn_803AC978_000007DC:
    li r5, 0x0
lbl_fn_803AC978_000007E0:
    cmpwi r5, 0x0
    beq lbl_fn_803AC978_00000808
    lwz r0, 0xc(r5)
    cmpwi r0, 0x7
    bne lbl_fn_803AC978_00000808
    li r3, 0x1
    blr
lbl_fn_803AC978_000007FC:
    addi r8, r8, 0x148
    addi r9, r9, 0x1
    bdnz lbl_fn_803AC978_00000710
lbl_fn_803AC978_00000808:
    lwz r0, 0x48(r4)
    cmpwi r0, 0x3
    bne lbl_fn_803AC978_00000928
    lwz r6, 0x88(r3)
    li r9, 0x0
    li r8, 0x0
    lwz r0, 0x90(r6)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803AC978_00000928
lbl_fn_803AC978_00000830:
    lwz r5, 0x94(r6)
    lwz r0, 0x58(r4)
    add r7, r5, r8
    lwzx r5, r5, r8
    cmpw r5, r0
    bne lbl_fn_803AC978_0000091C
    mulli r0, r9, 0xc
    lwz r4, 0x128(r3)
    lwzx r5, r4, r0
    cmpwi r5, 0x0
    blt lbl_fn_803AC978_00000928
    lwz r0, 0x140(r7)
    cmpw r5, r0
    bge lbl_fn_803AC978_00000928
    lwz r4, 0x144(r7)
    slwi r0, r5, 2
    lwz r6, 0x80(r3)
    addi r7, r3, 0x80
    lwzx r5, r4, r0
    b lbl_fn_803AC978_0000089C
lbl_fn_803AC978_00000880:
    lwz r0, 0xc(r6)
    cmpw r0, r5
    blt lbl_fn_803AC978_00000898
    mr r7, r6
    lwz r6, 0x0(r6)
    b lbl_fn_803AC978_0000089C
lbl_fn_803AC978_00000898:
    lwz r6, 0x4(r6)
lbl_fn_803AC978_0000089C:
    cmpwi r6, 0x0
    bne lbl_fn_803AC978_00000880
    addi r0, r3, 0x80
    cmplw r7, r0
    beq lbl_fn_803AC978_000008BC
    lwz r0, 0xc(r7)
    cmpw r5, r0
    bge lbl_fn_803AC978_000008C0
lbl_fn_803AC978_000008BC:
    addi r7, r3, 0x80
lbl_fn_803AC978_000008C0:
    addi r0, r3, 0x80
    cmplw r7, r0
    beq lbl_fn_803AC978_000008FC
    lis r4, 0x68dc
    lwz r0, 0x10(r7)
    subi r4, r4, 0x7453
    mulhw r4, r4, r5
    srawi r4, r4, 12
    srwi r5, r4, 31
    add r4, r4, r5
    slwi r4, r4, 2
    add r3, r3, r4
    lwz r3, 0x64(r3)
    add r3, r3, r0
    b lbl_fn_803AC978_00000900
lbl_fn_803AC978_000008FC:
    li r3, 0x0
lbl_fn_803AC978_00000900:
    cmpwi r3, 0x0
    beq lbl_fn_803AC978_00000928
    lwz r0, 0xc(r3)
    cmpwi r0, 0x7
    bne lbl_fn_803AC978_00000928
    li r3, 0x1
    blr
lbl_fn_803AC978_0000091C:
    addi r8, r8, 0x148
    addi r9, r9, 0x1
    bdnz lbl_fn_803AC978_00000830
lbl_fn_803AC978_00000928:
    li r3, 0x0
    blr
}

asm void fn_803ACD08(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0xe8(r3)
    cmpwi r0, 0x0
    ble lbl_fn_803ACD08_00000964
    lwz r3, lbl_8087F540
    bl fn_8047F580
    li r0, 0x0
    stw r0, 0xe8(r31)
    stw r0, 0xec(r31)
lbl_fn_803ACD08_00000964:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803ACD50(void)
{
    nofralloc
    lwz r5, 0x80(r3)
    addi r6, r3, 0x80
    b lbl_fn_803ACD50_000009A0
lbl_fn_803ACD50_00000984:
    lwz r0, 0xc(r5)
    cmpw r0, r4
    blt lbl_fn_803ACD50_0000099C
    mr r6, r5
    lwz r5, 0x0(r5)
    b lbl_fn_803ACD50_000009A0
lbl_fn_803ACD50_0000099C:
    lwz r5, 0x4(r5)
lbl_fn_803ACD50_000009A0:
    cmpwi r5, 0x0
    bne lbl_fn_803ACD50_00000984
    addi r0, r3, 0x80
    cmplw r6, r0
    beq lbl_fn_803ACD50_000009C0
    lwz r0, 0xc(r6)
    cmpw r4, r0
    bge lbl_fn_803ACD50_000009C4
lbl_fn_803ACD50_000009C0:
    addi r6, r3, 0x80
lbl_fn_803ACD50_000009C4:
    addi r0, r3, 0x80
    cmplw r6, r0
    beq lbl_fn_803ACD50_00000A00
    lis r5, 0x68dc
    lwz r0, 0x10(r6)
    subi r5, r5, 0x7453
    mulhw r4, r5, r4
    srawi r4, r4, 12
    srwi r5, r4, 31
    add r4, r4, r5
    slwi r4, r4, 2
    add r3, r3, r4
    lwz r3, 0x64(r3)
    add r3, r3, r0
    b lbl_fn_803ACD50_00000A04
lbl_fn_803ACD50_00000A00:
    li r3, 0x0
lbl_fn_803ACD50_00000A04:
    cmpwi r3, 0x0
    beq lbl_fn_803ACD50_00000A38
    lwz r0, 0xb0(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_803ACD50_00000A38
lbl_fn_803ACD50_00000A1C:
    lwz r0, 0x10(r3)
    cmpwi r0, -0x2
    bne lbl_fn_803ACD50_00000A30
    li r3, 0x1
    blr
lbl_fn_803ACD50_00000A30:
    addi r3, r3, 0x14
    bdnz lbl_fn_803ACD50_00000A1C
lbl_fn_803ACD50_00000A38:
    li r3, 0x0
    blr
}

asm void fn_803ACE18(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xf0
    bl _savegpr_27
    lwz r7, 0x88(r3)
    cmpwi r6, 0x0
    mulli r0, r4, 0x48
    mr r27, r3
    lwz r6, 0xe8(r7)
    mr r28, r5
    li r3, 0x0
    add r29, r6, r0
    beq lbl_fn_803ACE18_00000AD8
    lwz r0, 0x2c(r29)
    cmpwi r0, 0x0
    blt lbl_fn_803ACE18_00000A88
    mr r4, r0
lbl_fn_803ACE18_00000A88:
    mulli r29, r4, 0xc
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_803ACE18_00000AB8
lbl_fn_803ACE18_00000A98:
    lwz r4, 0x8(r4)
    mr r3, r27
    mr r5, r28
    li r6, 0x0
    lwzx r4, r4, r31
    bl fn_803ACE18
    addi r30, r30, 0x1
    addi r31, r31, 0x4
lbl_fn_803ACE18_00000AB8:
    lwz r0, 0x148(r27)
    add r4, r0, r29
    lwzx r0, r29, r0
    cmplw r30, r0
    bge lbl_fn_803ACE18_00000B98
    cmpwi r3, 0x0
    beq lbl_fn_803ACE18_00000A98
    b lbl_fn_803ACE18_00000B98
lbl_fn_803ACE18_00000AD8:
    psq_l f1, 0x18(r29), 0, 0
    addi r31, r1, 0x98
    lfs f2, 0x20(r29)
    addi r3, r1, 0x68
    stfs f2, 0xa0(r1)
    psq_st f1, 0x0(r31), 0, 0
    lfs f1, 0x4(r29)
    lfs f2, 0x8(r29)
    lfs f3, 0xc(r29)
    bl fn_805F90D0
    addi r5, r1, 0x68
    addi r30, r1, 0xa4
    psq_l f1, 0x0(r5), 0, 0
    addi r3, r1, 0x38
    psq_l f2, 0x8(r5), 0, 0
    li r4, 0x79
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    lfs f1, 0x14(r29)
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x38
    addi r5, r1, 0x8
    bl fn_805F89F0
    addi r5, r1, 0x8
    mr r3, r28
    psq_l f1, 0x0(r5), 0, 0
    mr r4, r31
    psq_l f2, 0x8(r5), 0, 0
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    bl fn_80051CD8
lbl_fn_803ACE18_00000B98:
    addi r11, r1, 0xf0
    bl _restgpr_27
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_803ACF88(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lwz r7, 0x88(r3)
    cmpwi r6, 0x0
    mulli r0, r4, 0x28
    mr r27, r3
    lwz r6, 0xf0(r7)
    mr r28, r5
    li r3, 0x0
    add r5, r6, r0
    beq lbl_fn_803ACF88_00000C48
    lwz r0, 0x20(r5)
    cmpwi r0, 0x0
    blt lbl_fn_803ACF88_00000BF8
    mr r4, r0
lbl_fn_803ACF88_00000BF8:
    mulli r30, r4, 0xc
    li r29, 0x0
    li r31, 0x0
    b lbl_fn_803ACF88_00000C28
lbl_fn_803ACF88_00000C08:
    lwz r4, 0x8(r4)
    mr r3, r27
    mr r5, r28
    li r6, 0x0
    lwzx r4, r4, r31
    bl fn_803ACF88
    addi r29, r29, 0x1
    addi r31, r31, 0x4
lbl_fn_803ACF88_00000C28:
    lwz r0, 0x150(r27)
    add r4, r0, r30
    lwzx r0, r30, r0
    cmplw r29, r0
    bge lbl_fn_803ACF88_00000C6C
    cmpwi r3, 0x0
    beq lbl_fn_803ACF88_00000C08
    b lbl_fn_803ACF88_00000C6C
lbl_fn_803ACF88_00000C48:
    psq_l f1, 0x4(r5), 0, 0
    addi r4, r1, 0x8
    lfs f2, 0xc(r5)
    mr r3, r28
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, 0x14(r5)
    stfs f0, 0x14(r1)
    bl fn_80051A88
lbl_fn_803ACF88_00000C6C:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803AD05C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    li r6, 0x0
    stw r0, 0x14(r1)
    beq lbl_fn_803AD05C_00000CB8
    cmpwi r4, 0x1
    beq lbl_fn_803AD05C_00000CE4
    cmpwi r4, 0x2
    beq lbl_fn_803AD05C_00000D20
    cmpwi r4, 0x3
    beq lbl_fn_803AD05C_00000D34
    b lbl_fn_803AD05C_00000D44
lbl_fn_803AD05C_00000CB8:
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803AD05C_00000CD0
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803AD05C_00000CDC
lbl_fn_803AD05C_00000CD0:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803AD05C_00000CDC:
    mr r6, r3
    b lbl_fn_803AD05C_00000D44
lbl_fn_803AD05C_00000CE4:
    lwz r3, lbl_8087F890
    mr r4, r5
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r6, r3
    cmpwi r0, 0x0
    beq lbl_fn_803AD05C_00000D44
    cmpwi r3, 0x0
    beq lbl_fn_803AD05C_00000D44
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803AD05C_00000D44
    li r6, 0x0
    b lbl_fn_803AD05C_00000D44
lbl_fn_803AD05C_00000D20:
    lwz r3, lbl_8087F408
    mr r4, r5
    bl fn_8011FC10
    mr r6, r3
    b lbl_fn_803AD05C_00000D44
lbl_fn_803AD05C_00000D34:
    lwz r3, lbl_8087F8A0
    mr r4, r5
    bl fn_8011F91C
    mr r6, r3
lbl_fn_803AD05C_00000D44:
    lwz r0, 0x14(r1)
    mr r3, r6
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803AD130(void)
{
    nofralloc
    lis r3, lbl_8078B34C@ha
    addi r3, r3, lbl_8078B34C@l
    blr
}

asm void fn_803AD13C(void)
{
    nofralloc
    lis r3, lbl_8078B394@ha
    addi r3, r3, lbl_8078B394@l
    blr
}

asm void fn_803AD148(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r26, 0x18(r1)
    mr r28, r3
    mr r29, r4
    mr r30, r5
    mr r31, r6
    mr r26, r7
    lwz r8, 0x0(r3)
    addis r0, r8, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_803AD148_00000DC8
    lis r4, lbl_8074F8CC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8074F8CC@l
    addi r3, r3, __files@l
    addi r4, r4, 0x239
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803AD148_00000DC8:
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_803AD148_00000DFC
    lis r3, __files@ha
    lis r4, lbl_8078B330@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8078B330@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803AD148_00000DFC:
    addic. r3, r27, 0xc
    addi r0, r28, 0x4
    stw r0, 0x8(r1)
    stw r27, 0xc(r1)
    beq lbl_fn_803AD148_00000E20
    lwz r0, 0x0(r26)
    stw r0, 0x0(r3)
    lbz r0, 0x4(r26)
    stb r0, 0x4(r3)
lbl_fn_803AD148_00000E20:
    lwz r27, 0xc(r1)
    li r0, 0x0
    stw r0, 0x4(r27)
    addic. r3, r27, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x0(r27)
    beq lbl_fn_803AD148_00000E40
    stw r29, 0x0(r3)
lbl_fn_803AD148_00000E40:
    cmpwi r30, 0x0
    beq lbl_fn_803AD148_00000E50
    stw r27, 0x0(r29)
    b lbl_fn_803AD148_00000E54
lbl_fn_803AD148_00000E50:
    stw r27, 0x4(r29)
lbl_fn_803AD148_00000E54:
    lwz r5, 0x0(r28)
    mr r3, r27
    lwz r4, 0x4(r28)
    addi r0, r5, 0x1
    stw r0, 0x0(r28)
    bl fn_8003E120
    cmpwi r31, 0x0
    beq lbl_fn_803AD148_00000E78
    stw r27, 0x8(r28)
lbl_fn_803AD148_00000E78:
    lwz r3, 0xc(r1)
    cmpwi r3, 0x0
    beq lbl_fn_803AD148_00000E88
    bl dtor_80084684
lbl_fn_803AD148_00000E88:
    mr r3, r27
    lmw r26, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803AD278(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r31, 0x0(r4)
    cmpwi r31, 0x0
    beq lbl_fn_803AD278_00000F4C
    lwz r30, 0x0(r31)
    cmpwi r30, 0x0
    beq lbl_fn_803AD278_00000F08
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_803AD278_00000EEC
    bl fn_803AD278
lbl_fn_803AD278_00000EEC:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_803AD278_00000F00
    mr r3, r28
    bl fn_803AD278
lbl_fn_803AD278_00000F00:
    mr r3, r30
    bl dtor_80084684
lbl_fn_803AD278_00000F08:
    lwz r30, 0x4(r31)
    cmpwi r30, 0x0
    beq lbl_fn_803AD278_00000F44
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_803AD278_00000F28
    mr r3, r28
    bl fn_803AD278
lbl_fn_803AD278_00000F28:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_803AD278_00000F3C
    mr r3, r28
    bl fn_803AD278
lbl_fn_803AD278_00000F3C:
    mr r3, r30
    bl dtor_80084684
lbl_fn_803AD278_00000F44:
    mr r3, r31
    bl dtor_80084684
lbl_fn_803AD278_00000F4C:
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_803AD278_00000FD8
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_803AD278_00000F94
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_803AD278_00000F78
    mr r3, r28
    bl fn_803AD278
lbl_fn_803AD278_00000F78:
    lwz r4, 0x4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_803AD278_00000F8C
    mr r3, r28
    bl fn_803AD278
lbl_fn_803AD278_00000F8C:
    mr r3, r31
    bl dtor_80084684
lbl_fn_803AD278_00000F94:
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_803AD278_00000FD0
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_803AD278_00000FB4
    mr r3, r28
    bl fn_803AD278
lbl_fn_803AD278_00000FB4:
    lwz r4, 0x4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_803AD278_00000FC8
    mr r3, r28
    bl fn_803AD278
lbl_fn_803AD278_00000FC8:
    mr r3, r31
    bl dtor_80084684
lbl_fn_803AD278_00000FD0:
    mr r3, r30
    bl dtor_80084684
lbl_fn_803AD278_00000FD8:
    mr r3, r29
    bl dtor_80084684
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803AD3D8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r26, 0x18(r1)
    mr r28, r3
    mr r29, r4
    mr r30, r5
    mr r31, r6
    mr r26, r7
    lwz r8, 0x0(r3)
    addis r0, r8, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_803AD3D8_00001058
    lis r4, lbl_8074F8CC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8074F8CC@l
    addi r3, r3, __files@l
    addi r4, r4, 0x239
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803AD3D8_00001058:
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_803AD3D8_0000108C
    lis r3, __files@ha
    lis r4, lbl_8078B314@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8078B314@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803AD3D8_0000108C:
    addic. r3, r27, 0xc
    addi r0, r28, 0x4
    stw r0, 0x8(r1)
    stw r27, 0xc(r1)
    beq lbl_fn_803AD3D8_000010B0
    lwz r0, 0x0(r26)
    stw r0, 0x0(r3)
    lwz r0, 0x4(r26)
    stw r0, 0x4(r3)
lbl_fn_803AD3D8_000010B0:
    lwz r27, 0xc(r1)
    li r0, 0x0
    stw r0, 0x4(r27)
    addic. r3, r27, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x0(r27)
    beq lbl_fn_803AD3D8_000010D0
    stw r29, 0x0(r3)
lbl_fn_803AD3D8_000010D0:
    cmpwi r30, 0x0
    beq lbl_fn_803AD3D8_000010E0
    stw r27, 0x0(r29)
    b lbl_fn_803AD3D8_000010E4
lbl_fn_803AD3D8_000010E0:
    stw r27, 0x4(r29)
lbl_fn_803AD3D8_000010E4:
    lwz r5, 0x0(r28)
    mr r3, r27
    lwz r4, 0x4(r28)
    addi r0, r5, 0x1
    stw r0, 0x0(r28)
    bl fn_8003E120
    cmpwi r31, 0x0
    beq lbl_fn_803AD3D8_00001108
    stw r27, 0x8(r28)
lbl_fn_803AD3D8_00001108:
    lwz r3, 0xc(r1)
    cmpwi r3, 0x0
    beq lbl_fn_803AD3D8_00001118
    bl dtor_80084684
lbl_fn_803AD3D8_00001118:
    mr r3, r27
    lmw r26, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803AD508(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r31, 0x0(r4)
    cmpwi r31, 0x0
    beq lbl_fn_803AD508_000011DC
    lwz r30, 0x0(r31)
    cmpwi r30, 0x0
    beq lbl_fn_803AD508_00001198
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_803AD508_0000117C
    bl fn_803AD508
lbl_fn_803AD508_0000117C:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_803AD508_00001190
    mr r3, r28
    bl fn_803AD508
lbl_fn_803AD508_00001190:
    mr r3, r30
    bl dtor_80084684
lbl_fn_803AD508_00001198:
    lwz r30, 0x4(r31)
    cmpwi r30, 0x0
    beq lbl_fn_803AD508_000011D4
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_803AD508_000011B8
    mr r3, r28
    bl fn_803AD508
lbl_fn_803AD508_000011B8:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_803AD508_000011CC
    mr r3, r28
    bl fn_803AD508
lbl_fn_803AD508_000011CC:
    mr r3, r30
    bl dtor_80084684
lbl_fn_803AD508_000011D4:
    mr r3, r31
    bl dtor_80084684
lbl_fn_803AD508_000011DC:
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_803AD508_00001268
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_803AD508_00001224
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_803AD508_00001208
    mr r3, r28
    bl fn_803AD508
lbl_fn_803AD508_00001208:
    lwz r4, 0x4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_803AD508_0000121C
    mr r3, r28
    bl fn_803AD508
lbl_fn_803AD508_0000121C:
    mr r3, r31
    bl dtor_80084684
lbl_fn_803AD508_00001224:
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_803AD508_00001260
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_803AD508_00001244
    mr r3, r28
    bl fn_803AD508
lbl_fn_803AD508_00001244:
    lwz r4, 0x4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_803AD508_00001258
    mr r3, r28
    bl fn_803AD508
lbl_fn_803AD508_00001258:
    mr r3, r31
    bl dtor_80084684
lbl_fn_803AD508_00001260:
    mr r3, r30
    bl dtor_80084684
lbl_fn_803AD508_00001268:
    mr r3, r29
    bl dtor_80084684
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803AD668(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    lbz r0, 0x24(r4)
    stw r31, 0x2c(r1)
    rlwinm. r0, r0, 0, 27, 27
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r3
    beq lbl_fn_803AD668_00001318
    lwz r5, 0x14(r4)
    lwz r0, 0x28(r4)
    cmplw r0, r5
    bge lbl_fn_803AD668_000012CC
    stw r5, 0x28(r4)
lbl_fn_803AD668_000012CC:
    lwz r31, 0x28(r4)
    li r0, 0x0
    lwz r30, 0x10(r4)
    stw r0, 0x0(r3)
    subf r4, r30, r31
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    mr r3, r29
    bl fn_80013DC4
    lbz r0, 0x10(r1)
    mr r3, r29
    stb r0, 0x14(r1)
    mr r6, r30
    mr r7, r31
    addi r8, r1, 0x14
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    b lbl_fn_803AD668_0000135C
lbl_fn_803AD668_00001318:
    lwz r30, 0xc(r4)
    li r0, 0x0
    lwz r31, 0x4(r4)
    stw r0, 0x0(r3)
    subf r4, r31, r30
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    bl fn_80013DC4
    lbz r0, 0x8(r1)
    mr r3, r29
    stb r0, 0xc(r1)
    mr r6, r31
    mr r7, r30
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
lbl_fn_803AD668_0000135C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803AD750(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r11, r1, 0xc0
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    stfd f29, 0x120(r1)
    psq_st f29, 0x128(r1), 0, 0
    stfd f28, 0x110(r1)
    psq_st f28, 0x118(r1), 0, 0
    stfd f27, 0x100(r1)
    psq_st f27, 0x108(r1), 0, 0
    stfd f26, 0xf0(r1)
    psq_st f26, 0xf8(r1), 0, 0
    stfd f25, 0xe0(r1)
    psq_st f25, 0xe8(r1), 0, 0
    stfd f24, 0xd0(r1)
    psq_st f24, 0xd8(r1), 0, 0
    stfd f23, 0xc0(r1)
    psq_st f23, 0xc8(r1), 0, 0
    bl _savegpr_17
    lwz r4, lbl_8087F8A0
    lis r31, lbl_8074F8CC@ha
    lfs f28, lbl_80885B10
    mr r21, r3
    lfs f31, lbl_80885B50
    mr r22, r5
    lwz r26, 0x48(r4)
    mr r23, r6
    lfs f30, lbl_80885B9C
    addi r31, r31, lbl_8074F8CC@l
    lfs f24, lbl_80885BEC
    addi r27, r1, 0x64
    lfs f25, lbl_80885B48
    li r24, 0x0
    lfs f26, lbl_80885B54
    li r20, 0x0
    lfs f27, lbl_80885B30
    li r19, 0x0
    lfs f29, lbl_80885BE8
    lis r29, 0x68dc
    li r30, 0x0
    b lbl_fn_803AD750_0000184C
lbl_fn_803AD750_0000142C:
    lwz r4, 0x4(r23)
    lwz r3, 0x4(r22)
    lwzx r0, r4, r19
    add r28, r3, r20
    cmpwi r0, 0x0
    blt lbl_fn_803AD750_00001840
    lwz r4, 0x0(r28)
    lwz r3, lbl_8087F8A0
    bl fn_8011F91C
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_803AD750_00001840
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803AD750_00001840
    lwz r4, 0x4(r23)
    addi r6, r21, 0x80
    lwz r5, 0x144(r28)
    lwzx r0, r4, r19
    lwz r4, 0x80(r21)
    slwi r0, r0, 2
    lwzx r5, r5, r0
    b lbl_fn_803AD750_000014A8
lbl_fn_803AD750_0000148C:
    lwz r0, 0xc(r4)
    cmpw r0, r5
    blt lbl_fn_803AD750_000014A4
    mr r6, r4
    lwz r4, 0x0(r4)
    b lbl_fn_803AD750_000014A8
lbl_fn_803AD750_000014A4:
    lwz r4, 0x4(r4)
lbl_fn_803AD750_000014A8:
    cmpwi r4, 0x0
    bne lbl_fn_803AD750_0000148C
    addi r0, r21, 0x80
    cmplw r6, r0
    beq lbl_fn_803AD750_000014C8
    lwz r0, 0xc(r6)
    cmpw r5, r0
    bge lbl_fn_803AD750_000014CC
lbl_fn_803AD750_000014C8:
    addi r6, r21, 0x80
lbl_fn_803AD750_000014CC:
    addi r0, r21, 0x80
    cmplw r6, r0
    beq lbl_fn_803AD750_00001504
    subi r4, r29, 0x7453
    lwz r0, 0x10(r6)
    mulhw r4, r4, r5
    srawi r4, r4, 12
    srwi r5, r4, 31
    add r4, r4, r5
    slwi r4, r4, 2
    add r4, r21, r4
    lwz r4, 0x64(r4)
    add r28, r4, r0
    b lbl_fn_803AD750_00001508
lbl_fn_803AD750_00001504:
    li r28, 0x0
lbl_fn_803AD750_00001508:
    cmpwi r28, 0x0
    beq lbl_fn_803AD750_00001840
    lwz r0, 0x8c(r21)
    cmpwi r0, 0x0
    beq lbl_fn_803AD750_00001528
    lwz r0, 0xc(r28)
    cmpwi r0, 0x0
    beq lbl_fn_803AD750_00001840
lbl_fn_803AD750_00001528:
    lfs f3, 0x530(r3)
    lfs f0, 0x530(r26)
    lfs f5, 0x52c(r3)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r26)
    lfs f3, 0x528(r3)
    addi r3, r1, 0x50
    lfs f0, 0x528(r26)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    stfs f6, 0x58(r1)
    bl fn_805F9920
    fmr f23, f1
    fcmpo cr0, f1, f28
    ble lbl_fn_803AD750_00001578
    addi r3, r1, 0x50
    mr r4, r3
    bl fn_805F98D0
lbl_fn_803AD750_00001578:
    fcmpo cr0, f23, f29
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_803AD750_00001840
    lwz r0, 0xe0(r21)
    li r18, 0x1
    cmpwi r0, 0x0
    bgt lbl_fn_803AD750_000015C8
    lwz r3, lbl_8087F430
    li r17, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_803AD750_000015BC
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_803AD750_000015BC
    li r17, 0x1
lbl_fn_803AD750_000015BC:
    cmpwi r17, 0x0
    bne lbl_fn_803AD750_000015C8
    li r18, 0x0
lbl_fn_803AD750_000015C8:
    cmpwi r18, 0x0
    bne lbl_fn_803AD750_00001840
    lwz r3, 0x55c(r26)
    cmplwi r3, 0x1
    ble lbl_fn_803AD750_000015F4
    subi r0, r3, 0x9
    cmplwi r0, 0x1
    ble lbl_fn_803AD750_000015F4
    cmpwi r3, 0x6
    beq lbl_fn_803AD750_00001628
    b lbl_fn_803AD750_00001640
lbl_fn_803AD750_000015F4:
    lwz r0, 0x12a4(r26)
    srwi. r3, r0, 31
    bne lbl_fn_803AD750_00001640
    extrwi. r0, r0, 1, 25
    bne lbl_fn_803AD750_00001640
    lwz r0, 0x14a0(r26)
    cmpwi r0, 0x0
    bgt lbl_fn_803AD750_00001640
    lwz r0, 0x1208(r26)
    cmpwi r0, 0x0
    bne lbl_fn_803AD750_00001640
    li r0, 0x1
    b lbl_fn_803AD750_00001644
lbl_fn_803AD750_00001628:
    lwz r3, 0x560(r26)
    subi r0, r3, 0x3c
    cmplwi r0, 0x1
    bgt lbl_fn_803AD750_00001640
    li r0, 0x1
    b lbl_fn_803AD750_00001644
lbl_fn_803AD750_00001640:
    li r0, 0x0
lbl_fn_803AD750_00001644:
    cmpwi r0, 0x0
    bne lbl_fn_803AD750_00001658
    lwz r0, 0xc(r28)
    cmpwi r0, 0x0
    beq lbl_fn_803AD750_00001840
lbl_fn_803AD750_00001658:
    stw r30, 0x60(r1)
    stfs f28, 0x64(r1)
    stfs f28, 0x68(r1)
    stfs f28, 0x6c(r1)
    stw r30, 0x74(r1)
    stw r30, 0x78(r1)
    stfs f28, 0x7c(r1)
    lwz r0, 0xc8(r28)
    cmpwi r0, 0x0
    bgt lbl_fn_803AD750_00001694
    lwz r0, 0xc(r28)
    cmpwi r0, 0x0
    bne lbl_fn_803AD750_00001840
    stw r30, 0x60(r1)
    b lbl_fn_803AD750_00001698
lbl_fn_803AD750_00001694:
    stw r0, 0x60(r1)
lbl_fn_803AD750_00001698:
    addi r17, r25, 0xb0
    addi r4, r31, 0x6e
    mr r3, r17
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803AD750_000016BC
    li r3, 0x0
    b lbl_fn_803AD750_000016C8
lbl_fn_803AD750_000016BC:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r17)
    add r3, r3, r0
lbl_fn_803AD750_000016C8:
    cmpwi r3, 0x0
    beq lbl_fn_803AD750_00001714
    lfs f0, 0x2c(r3)
    addi r4, r1, 0x2c
    lfs f3, 0x1c(r3)
    lfs f4, 0xc(r3)
    fadds f5, f0, f28
    fadds f6, f3, f30
    stfs f28, 0x44(r1)
    fadds f7, f4, f28
    stfs f30, 0x48(r1)
    stfs f28, 0x4c(r1)
    stfs f4, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f7, 0x2c(r1)
    stfs f6, 0x30(r1)
    stfs f5, 0x34(r1)
    b lbl_fn_803AD750_00001748
lbl_fn_803AD750_00001714:
    lfs f4, 0x530(r25)
    addi r4, r1, 0x14
    lfs f3, 0x52c(r25)
    lfs f0, 0x528(r25)
    fadds f4, f4, f28
    fadds f3, f3, f31
    stfs f28, 0x20(r1)
    fadds f0, f0, f28
    stfs f31, 0x24(r1)
    stfs f28, 0x28(r1)
    stfs f0, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f4, 0x1c(r1)
lbl_fn_803AD750_00001748:
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x6c(r1)
    psq_st f1, 0x0(r27), 0, 0
    lwz r0, 0xc8(r28)
    cmpwi r0, 0x2
    bne lbl_fn_803AD750_0000177C
    lfs f0, 0x7d8(r25)
    fcmpu cr0, f28, f0
    mfcr r0
    extrwi r0, r0, 1, 2
    stw r0, 0x74(r1)
    b lbl_fn_803AD750_00001798
lbl_fn_803AD750_0000177C:
    lwz r3, 0x4(r23)
    lwz r0, 0xf4(r21)
    add r3, r3, r19
    subf r0, r0, r3
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x74(r1)
lbl_fn_803AD750_00001798:
    fcmpo cr0, f23, f24
    mfcr r0
    lfs f6, 0x6c(r1)
    srwi r0, r0, 31
    lfs f4, 0x68(r1)
    cntlzw r0, r0
    lfs f0, 0x64(r1)
    srwi r0, r0, 5
    stw r0, 0x78(r1)
    addi r3, r1, 0x8
    lfs f7, 0x530(r26)
    lfs f5, 0x52c(r26)
    lfs f3, 0x528(r26)
    fsubs f6, f7, f6
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f6, 0x10(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0xc(r1)
    bl fn_805F9940
    fsubs f0, f1, f25
    fdivs f0, f0, f26
    stfs f0, 0x7c(r1)
    fcmpo cr0, f0, f28
    ble lbl_fn_803AD750_00001800
    b lbl_fn_803AD750_00001804
lbl_fn_803AD750_00001800:
    fmr f0, f28
lbl_fn_803AD750_00001804:
    fcmpo cr0, f0, f27
    bge lbl_fn_803AD750_00001824
    lfs f0, 0x7c(r1)
    fcmpo cr0, f0, f28
    ble lbl_fn_803AD750_0000181C
    b lbl_fn_803AD750_00001828
lbl_fn_803AD750_0000181C:
    fmr f0, f28
    b lbl_fn_803AD750_00001828
lbl_fn_803AD750_00001824:
    fmr f0, f27
lbl_fn_803AD750_00001828:
    fsubs f0, f27, f0
    stw r25, 0x70(r1)
    lwz r3, lbl_8087F490
    addi r4, r1, 0x60
    stfs f0, 0x7c(r1)
    bl fn_803E3C78
lbl_fn_803AD750_00001840:
    addi r24, r24, 0x1
    addi r20, r20, 0x148
    addi r19, r19, 0xc
lbl_fn_803AD750_0000184C:
    lwz r0, 0x0(r22)
    cmplw r24, r0
    blt lbl_fn_803AD750_0000142C
    addi r11, r1, 0xc0
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    psq_l f29, 0x128(r1), 0, 0
    lfd f29, 0x120(r1)
    psq_l f28, 0x118(r1), 0, 0
    lfd f28, 0x110(r1)
    psq_l f27, 0x108(r1), 0, 0
    lfd f27, 0x100(r1)
    psq_l f26, 0xf8(r1), 0, 0
    lfd f26, 0xf0(r1)
    psq_l f25, 0xe8(r1), 0, 0
    lfd f25, 0xe0(r1)
    psq_l f24, 0xd8(r1), 0, 0
    lfd f24, 0xd0(r1)
    psq_l f23, 0xc8(r1), 0, 0
    lfd f23, 0xc0(r1)
    bl _restgpr_17
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_803ADC90(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r11, r1, 0xc0
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    stfd f29, 0x120(r1)
    psq_st f29, 0x128(r1), 0, 0
    stfd f28, 0x110(r1)
    psq_st f28, 0x118(r1), 0, 0
    stfd f27, 0x100(r1)
    psq_st f27, 0x108(r1), 0, 0
    stfd f26, 0xf0(r1)
    psq_st f26, 0xf8(r1), 0, 0
    stfd f25, 0xe0(r1)
    psq_st f25, 0xe8(r1), 0, 0
    stfd f24, 0xd0(r1)
    psq_st f24, 0xd8(r1), 0, 0
    stfd f23, 0xc0(r1)
    psq_st f23, 0xc8(r1), 0, 0
    bl _savegpr_16
    lwz r7, lbl_8087F8A0
    lis r31, lbl_8074F8CC@ha
    lfs f28, lbl_80885B10
    mr r20, r3
    lfs f31, lbl_80885B50
    mr r21, r4
    lwz r25, 0x48(r7)
    mr r22, r5
    lfs f30, lbl_80885B9C
    mr r23, r6
    lfs f24, lbl_80885BEC
    addi r31, r31, lbl_8074F8CC@l
    lfs f25, lbl_80885B48
    addi r26, r1, 0x64
    lfs f26, lbl_80885B54
    li r24, 0x0
    lfs f27, lbl_80885B30
    li r19, 0x0
    lfs f29, lbl_80885BE8
    li r18, 0x0
    lis r29, 0x68dc
    li r30, 0x0
    b lbl_fn_803ADC90_00001D90
lbl_fn_803ADC90_00001970:
    lwz r4, 0x4(r23)
    lwz r3, 0x4(r22)
    lwzx r0, r4, r18
    add r27, r3, r19
    cmpwi r0, 0x0
    blt lbl_fn_803ADC90_00001D84
    lwz r4, 0x0(r27)
    mr r3, r21
    bl fn_8011FC10
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_803ADC90_00001D84
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803ADC90_00001D84
    lwz r4, 0x4(r23)
    addi r6, r20, 0x80
    lwz r5, 0x144(r27)
    lwzx r0, r4, r18
    lwz r4, 0x80(r20)
    slwi r0, r0, 2
    lwzx r5, r5, r0
    b lbl_fn_803ADC90_000019EC
lbl_fn_803ADC90_000019D0:
    lwz r0, 0xc(r4)
    cmpw r0, r5
    blt lbl_fn_803ADC90_000019E8
    mr r6, r4
    lwz r4, 0x0(r4)
    b lbl_fn_803ADC90_000019EC
lbl_fn_803ADC90_000019E8:
    lwz r4, 0x4(r4)
lbl_fn_803ADC90_000019EC:
    cmpwi r4, 0x0
    bne lbl_fn_803ADC90_000019D0
    addi r0, r20, 0x80
    cmplw r6, r0
    beq lbl_fn_803ADC90_00001A0C
    lwz r0, 0xc(r6)
    cmpw r5, r0
    bge lbl_fn_803ADC90_00001A10
lbl_fn_803ADC90_00001A0C:
    addi r6, r20, 0x80
lbl_fn_803ADC90_00001A10:
    addi r0, r20, 0x80
    cmplw r6, r0
    beq lbl_fn_803ADC90_00001A48
    subi r4, r29, 0x7453
    lwz r0, 0x10(r6)
    mulhw r4, r4, r5
    srawi r4, r4, 12
    srwi r5, r4, 31
    add r4, r4, r5
    slwi r4, r4, 2
    add r4, r20, r4
    lwz r4, 0x64(r4)
    add r27, r4, r0
    b lbl_fn_803ADC90_00001A4C
lbl_fn_803ADC90_00001A48:
    li r27, 0x0
lbl_fn_803ADC90_00001A4C:
    cmpwi r27, 0x0
    beq lbl_fn_803ADC90_00001D84
    lwz r0, 0x8c(r20)
    cmpwi r0, 0x0
    beq lbl_fn_803ADC90_00001A6C
    lwz r0, 0xc(r27)
    cmpwi r0, 0x0
    beq lbl_fn_803ADC90_00001D84
lbl_fn_803ADC90_00001A6C:
    lfs f3, 0x530(r3)
    lfs f0, 0x530(r25)
    lfs f5, 0x52c(r3)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r25)
    lfs f3, 0x528(r3)
    addi r3, r1, 0x50
    lfs f0, 0x528(r25)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    stfs f6, 0x58(r1)
    bl fn_805F9920
    fmr f23, f1
    fcmpo cr0, f1, f28
    ble lbl_fn_803ADC90_00001ABC
    addi r3, r1, 0x50
    mr r4, r3
    bl fn_805F98D0
lbl_fn_803ADC90_00001ABC:
    fcmpo cr0, f23, f29
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_803ADC90_00001D84
    lwz r0, 0xe0(r20)
    li r17, 0x1
    cmpwi r0, 0x0
    bgt lbl_fn_803ADC90_00001B0C
    lwz r3, lbl_8087F430
    li r16, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_803ADC90_00001B00
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_803ADC90_00001B00
    li r16, 0x1
lbl_fn_803ADC90_00001B00:
    cmpwi r16, 0x0
    bne lbl_fn_803ADC90_00001B0C
    li r17, 0x0
lbl_fn_803ADC90_00001B0C:
    cmpwi r17, 0x0
    bne lbl_fn_803ADC90_00001D84
    lwz r3, 0x55c(r25)
    cmplwi r3, 0x1
    ble lbl_fn_803ADC90_00001B38
    subi r0, r3, 0x9
    cmplwi r0, 0x1
    ble lbl_fn_803ADC90_00001B38
    cmpwi r3, 0x6
    beq lbl_fn_803ADC90_00001B6C
    b lbl_fn_803ADC90_00001B84
lbl_fn_803ADC90_00001B38:
    lwz r0, 0x12a4(r25)
    srwi. r3, r0, 31
    bne lbl_fn_803ADC90_00001B84
    extrwi. r0, r0, 1, 25
    bne lbl_fn_803ADC90_00001B84
    lwz r0, 0x14a0(r25)
    cmpwi r0, 0x0
    bgt lbl_fn_803ADC90_00001B84
    lwz r0, 0x1208(r25)
    cmpwi r0, 0x0
    bne lbl_fn_803ADC90_00001B84
    li r0, 0x1
    b lbl_fn_803ADC90_00001B88
lbl_fn_803ADC90_00001B6C:
    lwz r3, 0x560(r25)
    subi r0, r3, 0x3c
    cmplwi r0, 0x1
    bgt lbl_fn_803ADC90_00001B84
    li r0, 0x1
    b lbl_fn_803ADC90_00001B88
lbl_fn_803ADC90_00001B84:
    li r0, 0x0
lbl_fn_803ADC90_00001B88:
    cmpwi r0, 0x0
    bne lbl_fn_803ADC90_00001B9C
    lwz r0, 0xc(r27)
    cmpwi r0, 0x0
    beq lbl_fn_803ADC90_00001D84
lbl_fn_803ADC90_00001B9C:
    stw r30, 0x60(r1)
    stfs f28, 0x64(r1)
    stfs f28, 0x68(r1)
    stfs f28, 0x6c(r1)
    stw r30, 0x74(r1)
    stw r30, 0x78(r1)
    stfs f28, 0x7c(r1)
    lwz r0, 0xc8(r27)
    cmpwi r0, 0x0
    bgt lbl_fn_803ADC90_00001BD8
    lwz r0, 0xc(r27)
    cmpwi r0, 0x0
    bne lbl_fn_803ADC90_00001D84
    stw r30, 0x60(r1)
    b lbl_fn_803ADC90_00001BDC
lbl_fn_803ADC90_00001BD8:
    stw r0, 0x60(r1)
lbl_fn_803ADC90_00001BDC:
    addi r16, r28, 0xb0
    addi r4, r31, 0x6e
    mr r3, r16
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803ADC90_00001C00
    li r3, 0x0
    b lbl_fn_803ADC90_00001C0C
lbl_fn_803ADC90_00001C00:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r16)
    add r3, r3, r0
lbl_fn_803ADC90_00001C0C:
    cmpwi r3, 0x0
    beq lbl_fn_803ADC90_00001C58
    lfs f0, 0x2c(r3)
    addi r4, r1, 0x2c
    lfs f3, 0x1c(r3)
    lfs f4, 0xc(r3)
    fadds f5, f0, f28
    fadds f6, f3, f30
    stfs f28, 0x44(r1)
    fadds f7, f4, f28
    stfs f30, 0x48(r1)
    stfs f28, 0x4c(r1)
    stfs f4, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f7, 0x2c(r1)
    stfs f6, 0x30(r1)
    stfs f5, 0x34(r1)
    b lbl_fn_803ADC90_00001C8C
lbl_fn_803ADC90_00001C58:
    lfs f4, 0x530(r28)
    addi r4, r1, 0x14
    lfs f3, 0x52c(r28)
    lfs f0, 0x528(r28)
    fadds f4, f4, f28
    fadds f3, f3, f31
    stfs f28, 0x20(r1)
    fadds f0, f0, f28
    stfs f31, 0x24(r1)
    stfs f28, 0x28(r1)
    stfs f0, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f4, 0x1c(r1)
lbl_fn_803ADC90_00001C8C:
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x6c(r1)
    psq_st f1, 0x0(r26), 0, 0
    lwz r0, 0xc8(r27)
    cmpwi r0, 0x2
    bne lbl_fn_803ADC90_00001CC0
    lfs f0, 0x7d8(r28)
    fcmpu cr0, f28, f0
    mfcr r0
    extrwi r0, r0, 1, 2
    stw r0, 0x74(r1)
    b lbl_fn_803ADC90_00001CDC
lbl_fn_803ADC90_00001CC0:
    lwz r3, 0x4(r23)
    lwz r0, 0xf4(r20)
    add r3, r3, r18
    subf r0, r0, r3
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x74(r1)
lbl_fn_803ADC90_00001CDC:
    fcmpo cr0, f23, f24
    mfcr r0
    lfs f6, 0x6c(r1)
    srwi r0, r0, 31
    lfs f4, 0x68(r1)
    cntlzw r0, r0
    lfs f0, 0x64(r1)
    srwi r0, r0, 5
    stw r0, 0x78(r1)
    addi r3, r1, 0x8
    lfs f7, 0x530(r25)
    lfs f5, 0x52c(r25)
    lfs f3, 0x528(r25)
    fsubs f6, f7, f6
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f6, 0x10(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0xc(r1)
    bl fn_805F9940
    fsubs f0, f1, f25
    fdivs f0, f0, f26
    stfs f0, 0x7c(r1)
    fcmpo cr0, f0, f28
    ble lbl_fn_803ADC90_00001D44
    b lbl_fn_803ADC90_00001D48
lbl_fn_803ADC90_00001D44:
    fmr f0, f28
lbl_fn_803ADC90_00001D48:
    fcmpo cr0, f0, f27
    bge lbl_fn_803ADC90_00001D68
    lfs f0, 0x7c(r1)
    fcmpo cr0, f0, f28
    ble lbl_fn_803ADC90_00001D60
    b lbl_fn_803ADC90_00001D6C
lbl_fn_803ADC90_00001D60:
    fmr f0, f28
    b lbl_fn_803ADC90_00001D6C
lbl_fn_803ADC90_00001D68:
    fmr f0, f27
lbl_fn_803ADC90_00001D6C:
    fsubs f0, f27, f0
    stw r28, 0x70(r1)
    lwz r3, lbl_8087F490
    addi r4, r1, 0x60
    stfs f0, 0x7c(r1)
    bl fn_803E3C78
lbl_fn_803ADC90_00001D84:
    addi r24, r24, 0x1
    addi r19, r19, 0x148
    addi r18, r18, 0xc
lbl_fn_803ADC90_00001D90:
    lwz r0, 0x0(r22)
    cmplw r24, r0
    blt lbl_fn_803ADC90_00001970
    addi r11, r1, 0xc0
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    psq_l f29, 0x128(r1), 0, 0
    lfd f29, 0x120(r1)
    psq_l f28, 0x118(r1), 0, 0
    lfd f28, 0x110(r1)
    psq_l f27, 0x108(r1), 0, 0
    lfd f27, 0x100(r1)
    psq_l f26, 0xf8(r1), 0, 0
    lfd f26, 0xf0(r1)
    psq_l f25, 0xe8(r1), 0, 0
    lfd f25, 0xe0(r1)
    psq_l f24, 0xd8(r1), 0, 0
    lfd f24, 0xd0(r1)
    psq_l f23, 0xc8(r1), 0, 0
    lfd f23, 0xc0(r1)
    bl _restgpr_16
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}
