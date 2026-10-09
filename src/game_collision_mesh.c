#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_22(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800FFE68(void);
extern void fn_801055A8(void);
extern void fn_80232B7C(void);
extern void fn_8023A614(void);
extern void fn_8023A680(void);
extern void fn_8023A8B4(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_8068A850(void);

/* External data declarations */
extern u8 lbl_80736040[];

/* Small data declarations */
extern u32 lbl_8087EF10;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F490;
extern u32 lbl_8087F610;
extern u32 lbl_80881478;
extern u32 lbl_8088148C;
extern u32 lbl_80881494;
extern u32 lbl_8088149C;
extern u32 lbl_808814AC;
extern u32 lbl_808814B8;
extern u32 lbl_808814C4;
extern u32 lbl_808814CC;
extern u32 lbl_808814D4;
extern u32 lbl_80881500;
extern u32 lbl_80881510;
extern u32 lbl_8088152C;
extern u32 lbl_80881530;
extern u32 lbl_80881548;
extern u32 lbl_80881554;
extern u32 lbl_80881558;
extern u32 lbl_8088155C;
extern u32 lbl_80881560;
extern u32 lbl_80881564;
extern u32 lbl_80881568;

/* Function declarations */
void fn_801002DC(void);
void fn_801004FC(void);
void fn_8010089C(void);
void fn_80100BB8(void);
void fn_80100BC0(void);
void fn_80100BF0(void);
void fn_801010A0(void);
void fn_801010E8(void);
void fn_80101138(void);
void fn_801011B8(void);
void fn_8010129C(void);
void fn_80101330(void);
void fn_80101340(void);
void fn_80101434(void);
void fn_80101524(void);

asm void fn_801002DC(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0x50
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    stfd f28, 0x90(r1)
    psq_st f28, 0x98(r1), 0, 0
    stfd f27, 0x80(r1)
    psq_st f27, 0x88(r1), 0, 0
    stfd f26, 0x70(r1)
    psq_st f26, 0x78(r1), 0, 0
    stfd f25, 0x60(r1)
    psq_st f25, 0x68(r1), 0, 0
    stfd f24, 0x50(r1)
    psq_st f24, 0x58(r1), 0, 0
    bl _savegpr_25
    fmr f29, f1
    cmpwi r4, 0x0
    mr r25, r3
    mr r26, r5
    mr r27, r6
    mr r28, r7
    bne lbl_fn_801002DC_00000078
    li r3, 0x0
    b lbl_fn_801002DC_000001C8
lbl_fn_801002DC_00000078:
    lfs f0, lbl_80881500
    fmuls f1, f0, f2
    bl fn_8068A850
    frsp f31, f1
    lfs f30, lbl_808814B8
    lfs f25, lbl_80881500
    mr r31, r25
    lfs f27, lbl_80881494
    li r30, 0x0
    lfs f28, lbl_80881554
    li r29, 0x0
    lfs f26, lbl_8088148C
    b lbl_fn_801002DC_000001B8
lbl_fn_801002DC_000000AC:
    cmpwi r28, 0x0
    bne lbl_fn_801002DC_000000DC
    lwz r3, 0x4c(r31)
    li r0, 0x1
    lwz r3, 0x48(r3)
    cmpwi r3, 0x1
    beq lbl_fn_801002DC_000000D4
    cmpwi r3, 0x4
    beq lbl_fn_801002DC_000000D4
    li r0, 0x0
lbl_fn_801002DC_000000D4:
    cmpwi r0, 0x0
    bne lbl_fn_801002DC_000001B0
lbl_fn_801002DC_000000DC:
    lwz r4, 0x4c(r31)
    addi r3, r1, 0x14
    lfs f0, 0x8(r26)
    lfs f2, 0x5fc(r4)
    lfs f1, 0x608(r4)
    lfs f3, 0x5f8(r4)
    fadds f4, f2, f1
    lfs f1, 0x604(r4)
    lfs f2, 0x5f4(r4)
    fadds f3, f3, f1
    lfs f1, 0x600(r4)
    fmuls f5, f4, f25
    fadds f2, f2, f1
    lfs f1, 0x4(r26)
    fmuls f6, f3, f25
    fsubs f8, f5, f0
    lfs f0, 0x0(r26)
    fmuls f7, f2, f25
    fsubs f1, f6, f1
    stfs f2, 0x8(r1)
    fsubs f0, f7, f0
    stfs f3, 0xc(r1)
    stfs f4, 0x10(r1)
    stfs f7, 0x20(r1)
    stfs f6, 0x24(r1)
    stfs f5, 0x28(r1)
    stfs f0, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f8, 0x1c(r1)
    bl fn_805F9940
    fcmpo cr0, f1, f26
    blt lbl_fn_801002DC_000001B0
    fcmpo cr0, f1, f29
    bgt lbl_fn_801002DC_000001B0
    lwz r5, 0x4c(r31)
    addi r3, r1, 0x14
    mr r4, r3
    lfs f0, 0x5b0(r5)
    fsubs f24, f1, f0
    bl fn_805F98D0
    mr r3, r27
    addi r4, r1, 0x14
    bl fn_805F9990
    fcmpo cr0, f1, f31
    ble lbl_fn_801002DC_000001B0
    fmuls f0, f1, f1
    fmuls f0, f1, f0
    fnmsubs f0, f1, f0, f27
    fmadds f24, f28, f0, f24
    fcmpo cr0, f24, f30
    bge lbl_fn_801002DC_000001B0
    fmr f30, f24
    lwz r30, 0x4c(r31)
lbl_fn_801002DC_000001B0:
    addi r31, r31, 0x4
    addi r29, r29, 0x1
lbl_fn_801002DC_000001B8:
    lwz r0, 0x48(r25)
    cmplw r29, r0
    blt lbl_fn_801002DC_000000AC
    mr r3, r30
lbl_fn_801002DC_000001C8:
    addi r11, r1, 0x50
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    psq_l f28, 0x98(r1), 0, 0
    lfd f28, 0x90(r1)
    psq_l f27, 0x88(r1), 0, 0
    lfd f27, 0x80(r1)
    psq_l f26, 0x78(r1), 0, 0
    lfd f26, 0x70(r1)
    psq_l f25, 0x68(r1), 0, 0
    lfd f25, 0x60(r1)
    psq_l f24, 0x58(r1), 0, 0
    lfd f24, 0x50(r1)
    bl _restgpr_25
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_801004FC(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0x90
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stfd f29, 0xe0(r1)
    psq_st f29, 0xe8(r1), 0, 0
    stfd f28, 0xd0(r1)
    psq_st f28, 0xd8(r1), 0, 0
    stfd f27, 0xc0(r1)
    psq_st f27, 0xc8(r1), 0, 0
    stfd f26, 0xb0(r1)
    psq_st f26, 0xb8(r1), 0, 0
    stfd f25, 0xa0(r1)
    psq_st f25, 0xa8(r1), 0, 0
    stfd f24, 0x90(r1)
    psq_st f24, 0x98(r1), 0, 0
    bl _savegpr_26
    lfs f0, lbl_80881510
    fmr f29, f1
    fmr f30, f2
    mr r27, r6
    fmuls f1, f0, f1
    mr r29, r5
    lfs f2, lbl_80881530
    mr r28, r4
    mr r4, r29
    mr r5, r27
    li r6, 0x0
    li r7, 0x0
    bl fn_800FFE68
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_801004FC_000002BC
    li r3, 0x0
    b lbl_fn_801004FC_00000568
lbl_fn_801004FC_000002BC:
    addi r3, r1, 0x38
    psq_l f1, 0x528(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    li r31, -0x1
    lwz r0, 0x12a8(r29)
    lfs f3, 0x5b0(r29)
    lfs f0, 0x3c(r1)
    extrwi. r0, r0, 1, 22
    lfs f4, lbl_80881510
    fadds f3, f0, f3
    lfs f2, 0x530(r29)
    fmuls f31, f4, f29
    stfs f2, 0x40(r1)
    stfs f3, 0x3c(r1)
    beq lbl_fn_801004FC_00000304
    lfs f0, lbl_80881548
    fsubs f0, f3, f0
    stfs f0, 0x3c(r1)
lbl_fn_801004FC_00000304:
    lfs f3, lbl_80881478
    addi r3, r1, 0x48
    lfs f0, lbl_80881494
    li r4, 0x79
    stfs f3, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    lfs f1, 0x4(r27)
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x48
    mr r5, r4
    bl fn_805F93C0
    lfs f26, lbl_80881478
    li r30, 0x0
    lfs f28, lbl_808814AC
    li r27, 0x0
    lfs f27, lbl_808814D4
    b lbl_fn_801004FC_00000504
lbl_fn_801004FC_00000350:
    lwz r0, 0x62c(r26)
    add r3, r0, r27
    lwzx r0, r27, r0
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x8
    beq lbl_fn_801004FC_000004FC
    lfs f3, 0xc(r3)
    li r0, 0x0
    lfs f0, 0x40(r1)
    lfs f5, 0x8(r3)
    fsubs f6, f3, f0
    lfs f4, 0x3c(r1)
    lfs f3, 0x4(r3)
    lfs f0, 0x38(r1)
    fsubs f4, f5, f4
    lwz r4, lbl_8087F610
    fsubs f0, f3, f0
    stfs f6, 0x28(r1)
    cmpwi r4, 0x0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    beq lbl_fn_801004FC_000003D0
    lwz r4, 0x540(r4)
    li r3, 0x1
    cmpwi r4, 0x0
    beq lbl_fn_801004FC_000003C4
    cmpwi r4, 0x1
    beq lbl_fn_801004FC_000003C4
    li r3, 0x0
lbl_fn_801004FC_000003C4:
    cmpwi r3, 0x0
    beq lbl_fn_801004FC_000003D0
    li r0, 0x1
lbl_fn_801004FC_000003D0:
    cmpwi r0, 0x0
    beq lbl_fn_801004FC_00000434
    lfs f3, 0x28(r1)
    addi r3, r1, 0x14
    lfs f0, 0x20(r1)
    stfs f0, 0x14(r1)
    stfs f26, 0x18(r1)
    stfs f3, 0x1c(r1)
    bl fn_805F9940
    lwz r0, 0x62c(r26)
    li r4, 0x0
    lfs f3, 0x24(r1)
    add r3, r0, r27
    lfs f0, 0x8e4(r29)
    fabs f4, f3
    lfs f3, 0x10(r3)
    fsubs f24, f1, f3
    frsp f3, f4
    fcmpo cr0, f24, f29
    fsubs f0, f3, f0
    bge lbl_fn_801004FC_00000488
    fcmpo cr0, f0, f26
    bge lbl_fn_801004FC_00000488
    li r4, 0x1
    b lbl_fn_801004FC_00000488
lbl_fn_801004FC_00000434:
    lfs f0, 0x24(r1)
    lfs f3, 0x28(r1)
    fabs f0, f0
    frsp f0, f0
    fsubs f4, f0, f29
    fcmpo cr0, f26, f4
    ble lbl_fn_801004FC_00000454
    fmr f4, f26
lbl_fn_801004FC_00000454:
    lfs f0, 0x20(r1)
    addi r3, r1, 0x8
    stfs f0, 0x8(r1)
    stfs f4, 0xc(r1)
    stfs f3, 0x10(r1)
    bl fn_805F9940
    lwz r0, 0x62c(r26)
    add r3, r0, r27
    lfs f0, 0x10(r3)
    fsubs f24, f1, f0
    fcmpo cr0, f24, f29
    mfcr r4
    srwi r4, r4, 31
lbl_fn_801004FC_00000488:
    cmpwi r4, 0x0
    beq lbl_fn_801004FC_000004FC
    addi r3, r1, 0x20
    bl fn_805F9920
    fabs f0, f1
    frsp f0, f0
    fcmpo cr0, f0, f27
    bge lbl_fn_801004FC_000004B4
    stfs f26, 0x20(r1)
    stfs f26, 0x24(r1)
    stfs f28, 0x28(r1)
lbl_fn_801004FC_000004B4:
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_805F98D0
    lwz r0, 0x12a8(r29)
    extrwi. r0, r0, 1, 22
    bne lbl_fn_801004FC_000004EC
    fmr f1, f30
    bl fn_8068A850
    frsp f25, f1
    addi r3, r1, 0x20
    addi r4, r1, 0x2c
    bl fn_805F9990
    fcmpo cr0, f1, f25
    ble lbl_fn_801004FC_000004FC
lbl_fn_801004FC_000004EC:
    fcmpo cr0, f24, f31
    bge lbl_fn_801004FC_000004FC
    fmr f31, f24
    mr r31, r30
lbl_fn_801004FC_000004FC:
    addi r30, r30, 0x1
    addi r27, r27, 0x14
lbl_fn_801004FC_00000504:
    lwz r0, 0x624(r26)
    cmplw r30, r0
    blt lbl_fn_801004FC_00000350
    cmpwi r31, 0x0
    bge lbl_fn_801004FC_00000520
    li r3, 0x0
    b lbl_fn_801004FC_00000568
lbl_fn_801004FC_00000520:
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_801004FC_00000540
    lwz r0, 0x4fc(r3)
    cmpwi r0, 0x1e
    beq lbl_fn_801004FC_00000540
    li r3, 0x0
    b lbl_fn_801004FC_00000568
lbl_fn_801004FC_00000540:
    stw r26, 0x0(r28)
    mulli r0, r31, 0x14
    li r3, 0x1
    stw r31, 0x8(r28)
    lwz r4, 0x62c(r26)
    add r4, r4, r0
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x14(r28)
    psq_st f1, 0xc(r28), 0, 0
lbl_fn_801004FC_00000568:
    addi r11, r1, 0x90
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    psq_l f29, 0xe8(r1), 0, 0
    lfd f29, 0xe0(r1)
    psq_l f28, 0xd8(r1), 0, 0
    lfd f28, 0xd0(r1)
    psq_l f27, 0xc8(r1), 0, 0
    lfd f27, 0xc0(r1)
    psq_l f26, 0xb8(r1), 0, 0
    lfd f26, 0xb0(r1)
    psq_l f25, 0xa8(r1), 0, 0
    lfd f25, 0xa0(r1)
    psq_l f24, 0x98(r1), 0, 0
    lfd f24, 0x90(r1)
    bl _restgpr_26
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8010089C(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    addi r11, r1, 0xc0
    stfd f31, 0x170(r1)
    psq_st f31, 0x178(r1), 0, 0
    stfd f30, 0x160(r1)
    psq_st f30, 0x168(r1), 0, 0
    stfd f29, 0x150(r1)
    psq_st f29, 0x158(r1), 0, 0
    stfd f28, 0x140(r1)
    psq_st f28, 0x148(r1), 0, 0
    stfd f27, 0x130(r1)
    psq_st f27, 0x138(r1), 0, 0
    stfd f26, 0x120(r1)
    psq_st f26, 0x128(r1), 0, 0
    stfd f25, 0x110(r1)
    psq_st f25, 0x118(r1), 0, 0
    stfd f24, 0x100(r1)
    psq_st f24, 0x108(r1), 0, 0
    stfd f23, 0xf0(r1)
    psq_st f23, 0xf8(r1), 0, 0
    stfd f22, 0xe0(r1)
    psq_st f22, 0xe8(r1), 0, 0
    stfd f21, 0xd0(r1)
    psq_st f21, 0xd8(r1), 0, 0
    stfd f20, 0xc0(r1)
    psq_st f20, 0xc8(r1), 0, 0
    bl _savegpr_22
    lfs f3, lbl_80881510
    fmr f24, f1
    lfs f0, lbl_80881500
    mr r30, r4
    fmuls f26, f3, f1
    lwz r3, lbl_8087F490
    fmuls f1, f0, f2
    mr r31, r5
    mr r22, r6
    addi r26, r3, 0x85c
    li r25, -0x1
    bl fn_8068A850
    lfs f4, 0x4(r22)
    frsp f27, f1
    lfs f3, lbl_80881478
    addi r3, r1, 0x68
    lfs f0, lbl_80881494
    fmr f1, f4
    stfs f3, 0x2c(r1)
    li r24, 0x0
    li r4, 0x79
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x68
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x20
    psq_l f1, 0x528(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    mr r27, r26
    lfs f2, 0x530(r31)
    li r23, 0x0
    lfs f3, 0x5b0(r31)
    lfs f0, 0x24(r1)
    frsp f28, f2
    stfs f2, 0x28(r1)
    fadds f0, f0, f3
    lfs f30, 0x20(r1)
    lfs f31, lbl_80881478
    stfs f0, 0x24(r1)
    frsp f29, f0
    lfs f20, lbl_80881558
    lfs f22, lbl_80881494
    lfs f23, lbl_8088155C
    b lbl_fn_8010089C_00000820
lbl_fn_8010089C_000006F0:
    lwz r28, 0x4(r27)
    li r22, 0x0
    li r29, 0x0
    b lbl_fn_8010089C_0000080C
lbl_fn_8010089C_00000700:
    lwz r0, 0x62c(r28)
    addi r3, r1, 0x14
    add r4, r0, r29
    lfs f4, 0xc(r4)
    lfs f3, 0x8(r4)
    lfs f0, 0x4(r4)
    fsubs f4, f4, f28
    fsubs f3, f3, f29
    fsubs f0, f0, f30
    stfs f4, 0x1c(r1)
    stfs f0, 0x14(r1)
    stfs f3, 0x18(r1)
    bl fn_805F9940
    fcmpu cr0, f31, f1
    fmr f25, f1
    beq lbl_fn_8010089C_00000758
    lfs f3, 0x1c(r1)
    lfs f0, 0x14(r1)
    fmuls f3, f3, f3
    fmadds f0, f0, f0, f3
    fcmpo cr0, f0, f20
    bge lbl_fn_8010089C_00000768
lbl_fn_8010089C_00000758:
    fmr f26, f25
    lwz r24, 0x4(r27)
    mr r25, r22
    b lbl_fn_8010089C_00000804
lbl_fn_8010089C_00000768:
    lwz r0, 0x62c(r28)
    addi r3, r1, 0x14
    mr r4, r3
    add r5, r0, r29
    lfs f0, 0x10(r5)
    fsubs f25, f1, f0
    stfs f31, 0x18(r1)
    bl fn_805F98D0
    addi r3, r1, 0x14
    addi r4, r1, 0x2c
    bl fn_805F9990
    stfs f31, 0x8(r1)
    fmr f21, f1
    addi r3, r1, 0x38
    li r4, 0x79
    stfs f31, 0xc(r1)
    stfs f22, 0x10(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x38
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x2c
    addi r4, r1, 0x8
    bl fn_805F9990
    fsubs f0, f22, f1
    fcmpo cr0, f21, f27
    fmadds f25, f23, f0, f25
    ble lbl_fn_8010089C_00000804
    fcmpo cr0, f25, f24
    bge lbl_fn_8010089C_00000804
    fsubs f0, f22, f21
    fmadds f25, f25, f0, f25
    fcmpo cr0, f25, f26
    bge lbl_fn_8010089C_00000804
    fmr f26, f25
    lwz r24, 0x4(r27)
    mr r25, r22
lbl_fn_8010089C_00000804:
    addi r22, r22, 0x1
    addi r29, r29, 0x14
lbl_fn_8010089C_0000080C:
    lwz r0, 0x624(r28)
    cmplw r22, r0
    blt lbl_fn_8010089C_00000700
    addi r27, r27, 0x4
    addi r23, r23, 0x1
lbl_fn_8010089C_00000820:
    lwz r0, 0x0(r26)
    cmplw r23, r0
    blt lbl_fn_8010089C_000006F0
    cmpwi r24, 0x0
    bne lbl_fn_8010089C_0000083C
    li r3, 0x0
    b lbl_fn_8010089C_00000864
lbl_fn_8010089C_0000083C:
    stw r24, 0x0(r30)
    mulli r0, r25, 0x14
    li r3, 0x1
    stw r25, 0x8(r30)
    lwz r4, 0x62c(r24)
    add r4, r4, r0
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x14(r30)
    psq_st f1, 0xc(r30), 0, 0
lbl_fn_8010089C_00000864:
    addi r11, r1, 0xc0
    psq_l f31, 0x178(r1), 0, 0
    lfd f31, 0x170(r1)
    psq_l f30, 0x168(r1), 0, 0
    lfd f30, 0x160(r1)
    psq_l f29, 0x158(r1), 0, 0
    lfd f29, 0x150(r1)
    psq_l f28, 0x148(r1), 0, 0
    lfd f28, 0x140(r1)
    psq_l f27, 0x138(r1), 0, 0
    lfd f27, 0x130(r1)
    psq_l f26, 0x128(r1), 0, 0
    lfd f26, 0x120(r1)
    psq_l f25, 0x118(r1), 0, 0
    lfd f25, 0x110(r1)
    psq_l f24, 0x108(r1), 0, 0
    lfd f24, 0x100(r1)
    psq_l f23, 0xf8(r1), 0, 0
    lfd f23, 0xf0(r1)
    psq_l f22, 0xe8(r1), 0, 0
    lfd f22, 0xe0(r1)
    psq_l f21, 0xd8(r1), 0, 0
    lfd f21, 0xd0(r1)
    psq_l f20, 0xc8(r1), 0, 0
    lfd f20, 0xc0(r1)
    bl _restgpr_22
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_80100BB8(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80100BC0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    bl fn_801055A8
    lwz r3, lbl_8087F3C0
    li r4, 0x5
    bl fn_8023A614
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80100BF0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80736040@ha
    addis r4, r3, 0x4
    stw r0, 0x24(r1)
    addi r5, r5, lbl_80736040@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, -0x75a8(r4)
    addi r4, r5, 0x24b
    cmpwi r0, 0x0
    bne lbl_fn_80100BF0_00000974
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80100BF0_00000974
    addi r3, r3, 0x10
    bl fn_8008937C
    addis r4, r28, 0x4
    mr r30, r3
    stw r3, -0x75a8(r4)
    b lbl_fn_80100BF0_00000978
lbl_fn_80100BF0_00000974:
    li r30, 0x0
lbl_fn_80100BF0_00000978:
    lis r31, lbl_80736040@ha
    addis r5, r28, 0x3
    addi r31, r31, lbl_80736040@l
    lis r9, fn_80100BC0@ha
    mr r3, r30
    mr r10, r28
    addi r4, r31, 0x252
    addi r9, r9, fn_80100BC0@l
    li r6, 0x0
    li r7, 0x3
    li r8, 0x1
    addi r5, r5, 0x67b0
    bl fn_800874C8
    addis r5, r28, 0x3
    mr r3, r30
    addi r4, r31, 0x260
    li r6, 0x0
    li r7, 0x0
    addi r5, r5, 0x67b4
    bl fn_80087994
    lfs f1, lbl_80881494
    addis r5, r28, 0x4
    lfs f2, lbl_80881560
    mr r3, r30
    fmr f3, f1
    addi r4, r31, 0x26f
    li r6, 0x0
    li r7, 0x0
    subi r5, r5, 0x1c60
    bl fn_8008771C
    lfs f2, lbl_80881494
    addis r5, r28, 0x4
    lfs f1, lbl_80881478
    mr r3, r30
    fmr f3, f2
    addi r4, r31, 0x27b
    li r6, 0x0
    li r7, 0x0
    subi r5, r5, 0x1c5c
    bl fn_8008771C
    addis r5, r28, 0x4
    lfs f1, lbl_80881478
    lfs f2, lbl_80881560
    mr r3, r30
    lfs f3, lbl_80881494
    addi r4, r31, 0x28d
    li r6, 0x0
    li r7, 0x0
    subi r5, r5, 0x1c58
    bl fn_8008771C
    mr r3, r30
    addi r4, r31, 0x29e
    bl fn_8008937C
    addis r5, r28, 0x4
    mr r29, r3
    addi r4, r31, 0x2a5
    li r6, 0x0
    li r7, 0x0
    subi r5, r5, 0x75f8
    bl fn_80087994
    lfs f1, lbl_80881494
    addis r5, r28, 0x4
    lfs f2, lbl_80881560
    mr r3, r29
    fmr f3, f1
    addi r4, r31, 0x2af
    li r6, 0x0
    li r7, 0x0
    subi r5, r5, 0x75f4
    bl fn_8008771C
    addis r5, r28, 0x4
    lfs f1, lbl_80881564
    lfs f2, lbl_808814C4
    mr r3, r29
    lfs f3, lbl_8088149C
    addi r4, r31, 0x2b3
    li r6, 0x0
    li r7, 0x0
    subi r5, r5, 0x75f0
    bl fn_8008771C
    addis r5, r28, 0x4
    lfs f1, lbl_80881564
    lfs f2, lbl_808814C4
    mr r3, r29
    lfs f3, lbl_80881494
    addi r4, r31, 0x2bd
    li r6, 0x0
    li r7, 0x0
    subi r5, r5, 0x75ec
    bl fn_8008771C
    addis r5, r28, 0x4
    lfs f1, lbl_80881564
    lfs f2, lbl_808814C4
    mr r3, r29
    lfs f3, lbl_80881494
    addi r4, r31, 0x2c9
    li r6, 0x0
    li r7, 0x0
    subi r5, r5, 0x75e8
    bl fn_8008771C
    addis r5, r28, 0x4
    lfs f1, lbl_80881564
    lfs f2, lbl_808814C4
    mr r3, r29
    lfs f3, lbl_80881494
    addi r4, r31, 0x2d8
    li r6, 0x0
    li r7, 0x0
    subi r5, r5, 0x75e4
    bl fn_8008771C
    addis r5, r28, 0x4
    lfs f1, lbl_80881564
    lfs f2, lbl_808814C4
    mr r3, r29
    lfs f3, lbl_80881494
    addi r4, r31, 0x2e4
    li r6, 0x0
    li r7, 0x0
    subi r5, r5, 0x75e0
    bl fn_8008771C
    addis r5, r28, 0x4
    lfs f1, lbl_80881564
    lfs f2, lbl_808814C4
    mr r3, r29
    lfs f3, lbl_80881494
    addi r4, r31, 0x2eb
    li r6, 0x0
    li r7, 0x0
    subi r5, r5, 0x75dc
    bl fn_8008771C
    addis r5, r28, 0x4
    lfs f1, lbl_80881564
    lfs f2, lbl_808814C4
    mr r3, r29
    lfs f3, lbl_80881494
    addi r4, r31, 0x2f2
    li r6, 0x0
    li r7, 0x0
    subi r5, r5, 0x75d8
    bl fn_8008771C
    addis r5, r28, 0x4
    lfs f1, lbl_80881564
    lfs f2, lbl_808814C4
    mr r3, r29
    lfs f3, lbl_80881494
    addi r4, r31, 0x2f9
    li r6, 0x0
    li r7, 0x0
    subi r5, r5, 0x75d4
    bl fn_8008771C
    addis r5, r28, 0x4
    lfs f1, lbl_80881568
    lfs f2, lbl_8088152C
    mr r3, r29
    lfs f3, lbl_80881494
    addi r4, r31, 0x305
    li r6, 0x0
    li r7, 0x0
    subi r5, r5, 0x75d0
    bl fn_8008771C
    addis r5, r28, 0x4
    lfs f1, lbl_80881568
    lfs f2, lbl_8088152C
    mr r3, r29
    lfs f3, lbl_80881494
    addi r4, r31, 0x30d
    li r6, 0x0
    li r7, 0x0
    subi r5, r5, 0x75cc
    bl fn_8008771C
    addis r5, r28, 0x4
    lfs f1, lbl_80881568
    lfs f2, lbl_8088152C
    mr r3, r29
    lfs f3, lbl_80881494
    addi r4, r31, 0x315
    li r6, 0x0
    li r7, 0x0
    subi r5, r5, 0x75c8
    bl fn_8008771C
    addis r5, r28, 0x4
    lfs f1, lbl_80881568
    lfs f2, lbl_8088152C
    mr r3, r29
    lfs f3, lbl_80881494
    addi r4, r31, 0x321
    li r6, 0x0
    li r7, 0x0
    subi r5, r5, 0x75c4
    bl fn_8008771C
    addis r5, r28, 0x4
    lfs f1, lbl_80881568
    lfs f2, lbl_8088152C
    mr r3, r29
    lfs f3, lbl_80881494
    addi r4, r31, 0x32f
    li r6, 0x0
    li r7, 0x0
    subi r5, r5, 0x75c0
    bl fn_8008771C
    mr r3, r30
    addi r4, r31, 0x33a
    bl fn_8008937C
    addis r5, r28, 0x4
    lfs f1, lbl_808814CC
    lfs f2, lbl_80881494
    mr r29, r3
    lfs f3, lbl_8088149C
    addi r4, r31, 0x342
    li r6, 0x0
    li r7, 0x0
    subi r5, r5, 0x75bc
    bl fn_8008771C
    addis r5, r28, 0x4
    lfs f1, lbl_808814CC
    lfs f2, lbl_80881494
    mr r3, r29
    lfs f3, lbl_8088149C
    addi r4, r31, 0x2d8
    li r6, 0x0
    li r7, 0x0
    subi r5, r5, 0x75b8
    bl fn_8008771C
    addis r5, r28, 0x4
    lfs f1, lbl_808814CC
    lfs f2, lbl_80881494
    mr r3, r29
    lfs f3, lbl_8088149C
    addi r4, r31, 0x2e4
    li r6, 0x0
    li r7, 0x0
    subi r5, r5, 0x75b4
    bl fn_8008771C
    addis r5, r28, 0x4
    lfs f1, lbl_808814CC
    lfs f2, lbl_80881494
    mr r3, r29
    lfs f3, lbl_8088149C
    addi r4, r31, 0x2eb
    li r6, 0x0
    li r7, 0x0
    subi r5, r5, 0x75b0
    bl fn_8008771C
    addis r5, r28, 0x4
    lfs f1, lbl_808814CC
    lfs f2, lbl_80881494
    mr r3, r29
    lfs f3, lbl_8088149C
    addi r4, r31, 0x349
    li r6, 0x0
    li r7, 0x0
    subi r5, r5, 0x75ac
    bl fn_8008771C
    addis r5, r28, 0x4
    mr r3, r30
    addi r4, r31, 0x34e
    li r6, 0x0
    li r7, 0x0
    subi r5, r5, 0x6e24
    bl fn_80087994
    addis r5, r28, 0x4
    mr r3, r30
    addi r4, r31, 0x35c
    li r6, 0x0
    li r7, 0x0
    subi r5, r5, 0x1c70
    bl fn_80087994
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801010A0(void)
{
    nofralloc
    li r0, 0x100
    mr r5, r3
    li r6, 0x0
    mtctr r0
lbl_fn_801010A0_00000DD4:
    lwz r0, 0x154(r5)
    rlwinm r4, r0, 0, 15, 15
    subis r0, r4, 0x1
    cmplwi r0, 0x0
    beq lbl_fn_801010A0_00000DF8
    mulli r0, r6, 0xa0
    add r3, r3, r0
    addi r3, r3, 0x150
    blr
lbl_fn_801010A0_00000DF8:
    addi r5, r5, 0xa0
    addi r6, r6, 0x1
    bdnz lbl_fn_801010A0_00000DD4
    li r3, 0x0
    blr
}

asm void fn_801010E8(void)
{
    nofralloc
    li r0, 0x20
    mr r5, r3
    li r6, 0x0
    mtctr r0
lbl_fn_801010E8_00000E1C:
    addis r4, r5, 0x1
    lwz r0, -0x5eac(r4)
    rlwinm r4, r0, 0, 15, 15
    subis r0, r4, 0x1
    cmplwi r0, 0x0
    beq lbl_fn_801010E8_00000E48
    mulli r0, r6, 0xc8
    addis r3, r3, 0x1
    add r3, r3, r0
    subi r3, r3, 0x5eb0
    blr
lbl_fn_801010E8_00000E48:
    addi r5, r5, 0xc8
    addi r6, r6, 0x1
    bdnz lbl_fn_801010E8_00000E1C
    li r3, 0x0
    blr
}

asm void fn_80101138(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    addi r30, r3, 0x150
    stw r29, 0x14(r1)
    li r29, 0x0
lbl_fn_80101138_00000E80:
    lwz r0, 0x154(r31)
    rlwinm r3, r0, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_80101138_00000EAC
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x0
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
lbl_fn_80101138_00000EAC:
    addi r29, r29, 0x1
    addi r30, r30, 0xa0
    cmplwi r29, 0x100
    addi r31, r31, 0xa0
    blt lbl_fn_80101138_00000E80
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801011B8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    addi r30, r3, 0x150
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    mr r31, r28
lbl_fn_801011B8_00000F08:
    lwz r0, 0x154(r31)
    rlwinm r3, r0, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_801011B8_00000F38
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_801011B8_00000F38:
    addi r29, r29, 0x1
    addi r30, r30, 0xa0
    cmplwi r29, 0x100
    addi r31, r31, 0xa0
    blt lbl_fn_801011B8_00000F08
    addis r31, r28, 0x1
    li r29, 0x0
    subi r31, r31, 0x5eb0
lbl_fn_801011B8_00000F58:
    addis r3, r28, 0x1
    lwz r0, -0x5eac(r3)
    rlwinm r3, r0, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_801011B8_00000F8C
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x0
    li r5, 0x1
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_801011B8_00000F8C:
    addi r29, r29, 0x1
    addi r31, r31, 0xc8
    cmplwi r29, 0x20
    addi r28, r28, 0xc8
    blt lbl_fn_801011B8_00000F58
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8010129C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r3, 0x150
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
lbl_fn_8010129C_00000FE4:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    addi r30, r30, 0x1
    addi r31, r31, 0xa0
    cmplwi r30, 0x100
    blt lbl_fn_8010129C_00000FE4
    addis r31, r29, 0x1
    li r30, 0x0
    subi r31, r31, 0x5eb0
lbl_fn_8010129C_00001014:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    addi r30, r30, 0x1
    addi r31, r31, 0xc8
    cmplwi r30, 0x20
    blt lbl_fn_8010129C_00001014
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80101330(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 16, 14
    stw r0, 0x4(r3)
    blr
}

asm void fn_80101340(void)
{
    nofralloc
    li r0, 0x40
    li r7, 0x0
    li r8, 0x0
    mtctr r0
lbl_fn_80101340_00001074:
    lwz r6, 0x154(r3)
    rlwinm r5, r6, 0, 15, 15
    subis r0, r5, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_80101340_000010A8
    rlwinm r5, r6, 0, 14, 14
    subis r0, r5, 0x2
    cmplwi r0, 0x0
    bne lbl_fn_80101340_000010A8
    lwz r0, 0x1ec(r3)
    cmplw r0, r4
    bne lbl_fn_80101340_000010A8
    addi r7, r7, 0x1
lbl_fn_80101340_000010A8:
    lwz r6, 0x1f4(r3)
    rlwinm r5, r6, 0, 15, 15
    subis r0, r5, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_80101340_000010DC
    rlwinm r5, r6, 0, 14, 14
    subis r0, r5, 0x2
    cmplwi r0, 0x0
    bne lbl_fn_80101340_000010DC
    lwz r0, 0x28c(r3)
    cmplw r0, r4
    bne lbl_fn_80101340_000010DC
    addi r7, r7, 0x1
lbl_fn_80101340_000010DC:
    lwz r6, 0x294(r3)
    rlwinm r5, r6, 0, 15, 15
    subis r0, r5, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_80101340_00001110
    rlwinm r5, r6, 0, 14, 14
    subis r0, r5, 0x2
    cmplwi r0, 0x0
    bne lbl_fn_80101340_00001110
    lwz r0, 0x32c(r3)
    cmplw r0, r4
    bne lbl_fn_80101340_00001110
    addi r7, r7, 0x1
lbl_fn_80101340_00001110:
    lwz r6, 0x334(r3)
    rlwinm r5, r6, 0, 15, 15
    subis r0, r5, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_80101340_00001144
    rlwinm r5, r6, 0, 14, 14
    subis r0, r5, 0x2
    cmplwi r0, 0x0
    bne lbl_fn_80101340_00001144
    lwz r0, 0x3cc(r3)
    cmplw r0, r4
    bne lbl_fn_80101340_00001144
    addi r7, r7, 0x1
lbl_fn_80101340_00001144:
    addi r3, r3, 0x280
    addi r8, r8, 0x3
    bdnz lbl_fn_80101340_00001074
    mr r3, r7
    blr
}

asm void fn_80101434(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    cmpwi r6, 0x0
    mr r25, r3
    mr r30, r4
    mr r31, r5
    mr r26, r6
    mr r27, r7
    ble lbl_fn_80101434_00001230
    cmpwi r7, 0x0
    bge lbl_fn_80101434_00001194
    b lbl_fn_80101434_00001230
lbl_fn_80101434_00001194:
    subfic r0, r7, 0x2
    li r4, 0x2
    orc r5, r4, r7
    srwi r0, r0, 1
    li r4, 0x0
    subf r0, r0, r5
    srwi r28, r0, 31
    bl fn_80232B7C
    cmpwi r28, 0x0
    beq lbl_fn_80101434_000011C8
    lwz r3, lbl_8087F3C0
    li r0, 0x1
    stw r0, 0xc4(r3)
lbl_fn_80101434_000011C8:
    li r29, 0x0
    stw r29, 0x8(r1)
    li r3, -0x1
    subi r0, r26, 0x1
    stw r3, 0xc(r1)
    mulli r3, r0, 0x54
    li r0, 0x1
    lfs f1, lbl_80881494
    stw r0, 0x10(r1)
    addis r4, r25, 0x3
    mulli r0, r27, 0xc
    add r4, r4, r3
    lwz r3, lbl_8087F3C0
    mr r8, r30
    add r4, r4, r0
    mr r9, r31
    addi r4, r4, 0x63f0
    li r5, -0x1
    li r6, 0x0
    li r7, 0x0
    li r10, 0x0
    bl fn_8023A680
    cmpwi r28, 0x0
    beq lbl_fn_80101434_00001230
    lwz r3, lbl_8087F3C0
    stw r29, 0xc4(r3)
lbl_fn_80101434_00001230:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80101524(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_26
    rlwinm. r0, r7, 0, 26, 26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r8
    bne lbl_fn_80101524_000015F0
    xor r4, r6, r7
    lis r3, 0xffe0
    and r31, r7, r4
    subi r0, r3, 0x1821
    and r30, r6, r4
    and. r31, r31, r0
    and r30, r30, r0
    bne lbl_fn_80101524_0000129C
    cmpwi r30, 0x0
    beq lbl_fn_80101524_000015F0
lbl_fn_80101524_0000129C:
    clrlwi. r0, r31, 31
    beq lbl_fn_80101524_000012F4
    mr r3, r26
    li r4, 0x0
    bl fn_80232B7C
    li r0, 0x0
    stw r0, 0x8(r1)
    li r0, -0x1
    addis r4, r26, 0x3
    stw r0, 0xc(r1)
    li r0, 0x1
    lfs f1, lbl_80881494
    mr r8, r27
    stw r0, 0x10(r1)
    mr r9, r28
    li r5, -0x1
    li r6, 0x0
    lwz r3, lbl_8087F3C0
    li r7, 0x0
    li r10, 0x0
    addi r4, r4, 0x6594
    bl fn_8023A680
lbl_fn_80101524_000012F4:
    rlwinm. r0, r31, 0, 9, 9
    beq lbl_fn_80101524_0000134C
    mr r3, r26
    li r4, 0x0
    bl fn_80232B7C
    li r0, 0x0
    stw r0, 0x8(r1)
    li r0, -0x1
    addis r4, r26, 0x3
    stw r0, 0xc(r1)
    li r0, 0x1
    lfs f1, lbl_80881494
    mr r8, r27
    stw r0, 0x10(r1)
    mr r9, r28
    li r5, -0x1
    li r6, 0x0
    lwz r3, lbl_8087F3C0
    li r7, 0x0
    li r10, 0x0
    addi r4, r4, 0x65a0
    bl fn_8023A680
lbl_fn_80101524_0000134C:
    rlwinm. r0, r31, 0, 25, 25
    beq lbl_fn_80101524_000013A4
    mr r3, r26
    li r4, 0x0
    bl fn_80232B7C
    li r0, 0x0
    stw r0, 0x8(r1)
    li r0, -0x1
    addis r4, r26, 0x3
    stw r0, 0xc(r1)
    li r0, 0x1
    lfs f1, lbl_80881494
    mr r8, r27
    stw r0, 0x10(r1)
    mr r9, r28
    li r5, -0x1
    li r6, 0x0
    lwz r3, lbl_8087F3C0
    li r7, 0x0
    li r10, 0x0
    addi r4, r4, 0x65ac
    bl fn_8023A680
lbl_fn_80101524_000013A4:
    rlwinm. r0, r31, 0, 7, 8
    beq lbl_fn_80101524_00001440
    cmpwi r29, 0x0
    beq lbl_fn_80101524_00001440
    mr r3, r26
    li r4, 0x0
    bl fn_80232B7C
    lfs f1, lbl_80881478
    rlwinm. r0, r31, 0, 12, 12
    lfs f0, lbl_80881494
    li r4, -0x1
    stfs f1, 0x40(r1)
    li r0, 0x1
    lwz r3, lbl_8087F3C0
    addi r5, r29, 0xb0
    stfs f1, 0x44(r1)
    stfs f1, 0x48(r1)
    stfs f1, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stw r4, 0x8(r1)
    stw r0, 0xc(r1)
    beq lbl_fn_80101524_0000141C
    addis r4, r26, 0x3
    addi r4, r4, 0x65c4
    b lbl_fn_80101524_00001424
lbl_fn_80101524_0000141C:
    addis r4, r26, 0x3
    addi r4, r4, 0x65b8
lbl_fn_80101524_00001424:
    lfs f1, lbl_80881494
    addi r7, r1, 0x34
    addi r8, r1, 0x40
    addi r9, r1, 0x50
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
lbl_fn_80101524_00001440:
    lis r3, 0xfe60
    subi r3, r3, 0x1821
    and r31, r31, r3
    clrlwi. r0, r31, 31
    and r30, r30, r3
    beq lbl_fn_80101524_0000148C
    lis r4, lbl_80736040@ha
    lfs f1, lbl_80881494
    addi r4, r4, lbl_80736040@l
    mr r5, r27
    addi r3, r1, 0x30
    li r6, 0x0
    addi r4, r4, 0x365
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x30
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80101524_0000153C
lbl_fn_80101524_0000148C:
    rlwinm. r0, r31, 0, 9, 9
    beq lbl_fn_80101524_000014C8
    lis r4, lbl_80736040@ha
    lfs f1, lbl_80881494
    addi r4, r4, lbl_80736040@l
    mr r5, r27
    addi r3, r1, 0x2c
    li r6, 0x0
    addi r4, r4, 0x372
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x2c
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80101524_0000153C
lbl_fn_80101524_000014C8:
    rlwinm. r0, r31, 0, 16, 16
    beq lbl_fn_80101524_00001504
    lis r4, lbl_80736040@ha
    lfs f1, lbl_80881494
    addi r4, r4, lbl_80736040@l
    mr r5, r27
    addi r3, r1, 0x28
    li r6, 0x0
    addi r4, r4, 0x37f
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x28
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80101524_0000153C
lbl_fn_80101524_00001504:
    cmpwi r31, 0x0
    beq lbl_fn_80101524_0000153C
    lis r4, lbl_80736040@ha
    lfs f1, lbl_80881494
    addi r4, r4, lbl_80736040@l
    mr r5, r27
    addi r3, r1, 0x24
    li r6, 0x0
    addi r4, r4, 0x38c
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x24
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80101524_0000153C:
    rlwinm r0, r30, 0, 9, 9
    rlwimi. r0, r30, 0, 31, 31
    beq lbl_fn_80101524_0000157C
    lis r4, lbl_80736040@ha
    lfs f1, lbl_80881494
    addi r4, r4, lbl_80736040@l
    mr r5, r27
    addi r3, r1, 0x20
    li r6, 0x0
    addi r4, r4, 0x399
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80101524_000015F0
lbl_fn_80101524_0000157C:
    rlwinm. r0, r30, 0, 25, 25
    beq lbl_fn_80101524_000015B8
    lis r4, lbl_80736040@ha
    lfs f1, lbl_80881494
    addi r4, r4, lbl_80736040@l
    mr r5, r27
    addi r3, r1, 0x1c
    li r6, 0x0
    addi r4, r4, 0x3a6
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80101524_000015F0
lbl_fn_80101524_000015B8:
    cmpwi r30, 0x0
    beq lbl_fn_80101524_000015F0
    lis r4, lbl_80736040@ha
    lfs f1, lbl_80881494
    addi r4, r4, lbl_80736040@l
    mr r5, r27
    addi r3, r1, 0x18
    li r6, 0x0
    addi r4, r4, 0x3b3
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80101524_000015F0:
    addi r11, r1, 0x80
    bl _restgpr_26
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}
