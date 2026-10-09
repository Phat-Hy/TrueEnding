#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_16(void);
extern void _restgpr_19(void);
extern void _restgpr_20(void);
extern void _restgpr_21(void);
extern void _savegpr_14(void);
extern void _savegpr_16(void);
extern void _savegpr_19(void);
extern void _savegpr_20(void);
extern void _savegpr_21(void);
extern void fn_8004ECC0(void);
extern void fn_80092814(void);
extern void fn_800BFAC8(void);
extern void fn_800CB3A0(void);
extern void fn_8011F8F4(void);
extern void fn_8011F91C(void);
extern void fn_8011FC10(void);
extern void fn_8011FE3C(void);
extern void fn_801231D0(void);
extern void fn_8013655C(void);
extern void fn_8036554C(void);
extern void fn_80370174(void);
extern void fn_8037F690(void);
extern void fn_803935FC(void);
extern void fn_8039BC0C(void);
extern void fn_8039CF8C(void);
extern void fn_803AC3D8(void);
extern void fn_803AD148(void);
extern void fn_803E3050(void);
extern void fn_803E3384(void);
extern void fn_803E3C78(void);
extern void fn_803E6ADC(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);

/* External data declarations */
extern u8 jumptable_8078B1C0[];
extern u8 jumptable_8078B1F0[];
extern u8 lbl_8074EEE0[];
extern u8 lbl_8074F8CC[];

/* Small data declarations */
extern u32 lbl_8087DD38;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087FA20;
extern u32 lbl_80885B10;
extern u32 lbl_80885B18;
extern u32 lbl_80885B20;
extern u32 lbl_80885B24;
extern u32 lbl_80885B28;
extern u32 lbl_80885B2C;
extern u32 lbl_80885B30;
extern u32 lbl_80885B34;
extern u32 lbl_80885B38;
extern u32 lbl_80885B48;
extern u32 lbl_80885B50;
extern u32 lbl_80885B54;
extern u32 lbl_80885B78;
extern u32 lbl_80885B9C;
extern u32 lbl_80885BA0;
extern u32 lbl_80885BE8;
extern u32 lbl_80885BEC;
extern u32 lbl_80885BF0;
extern u32 lbl_80885BF4;
extern u32 lbl_80885BF8;

/* Function declarations */
void fn_803AE1D4(void);
void fn_803AE718(void);
void fn_803AEA24(void);
void fn_803AED54(void);
void fn_803AF0FC(void);
void fn_803AF49C(void);
void fn_803AF83C(void);

asm void fn_803AE1D4(void)
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
    b lbl_fn_803AE1D4_000004D8
lbl_fn_803AE1D4_000000B8:
    lwz r4, 0x4(r23)
    lwz r3, 0x4(r22)
    lwzx r0, r4, r18
    add r27, r3, r19
    cmpwi r0, 0x0
    blt lbl_fn_803AE1D4_000004CC
    lwz r4, 0x0(r27)
    mr r3, r21
    bl fn_8011FE3C
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_803AE1D4_000004CC
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803AE1D4_000004CC
    lwz r4, 0x4(r23)
    addi r6, r20, 0x80
    lwz r5, 0x144(r27)
    lwzx r0, r4, r18
    lwz r4, 0x80(r20)
    slwi r0, r0, 2
    lwzx r5, r5, r0
    b lbl_fn_803AE1D4_00000134
lbl_fn_803AE1D4_00000118:
    lwz r0, 0xc(r4)
    cmpw r0, r5
    blt lbl_fn_803AE1D4_00000130
    mr r6, r4
    lwz r4, 0x0(r4)
    b lbl_fn_803AE1D4_00000134
lbl_fn_803AE1D4_00000130:
    lwz r4, 0x4(r4)
lbl_fn_803AE1D4_00000134:
    cmpwi r4, 0x0
    bne lbl_fn_803AE1D4_00000118
    addi r0, r20, 0x80
    cmplw r6, r0
    beq lbl_fn_803AE1D4_00000154
    lwz r0, 0xc(r6)
    cmpw r5, r0
    bge lbl_fn_803AE1D4_00000158
lbl_fn_803AE1D4_00000154:
    addi r6, r20, 0x80
lbl_fn_803AE1D4_00000158:
    addi r0, r20, 0x80
    cmplw r6, r0
    beq lbl_fn_803AE1D4_00000190
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
    b lbl_fn_803AE1D4_00000194
lbl_fn_803AE1D4_00000190:
    li r27, 0x0
lbl_fn_803AE1D4_00000194:
    cmpwi r27, 0x0
    beq lbl_fn_803AE1D4_000004CC
    lwz r0, 0x8c(r20)
    cmpwi r0, 0x0
    beq lbl_fn_803AE1D4_000001B4
    lwz r0, 0xc(r27)
    cmpwi r0, 0x0
    beq lbl_fn_803AE1D4_000004CC
lbl_fn_803AE1D4_000001B4:
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
    ble lbl_fn_803AE1D4_00000204
    addi r3, r1, 0x50
    mr r4, r3
    bl fn_805F98D0
lbl_fn_803AE1D4_00000204:
    fcmpo cr0, f23, f29
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_803AE1D4_000004CC
    lwz r0, 0xe0(r20)
    li r17, 0x1
    cmpwi r0, 0x0
    bgt lbl_fn_803AE1D4_00000254
    lwz r3, lbl_8087F430
    li r16, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_803AE1D4_00000248
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_803AE1D4_00000248
    li r16, 0x1
lbl_fn_803AE1D4_00000248:
    cmpwi r16, 0x0
    bne lbl_fn_803AE1D4_00000254
    li r17, 0x0
lbl_fn_803AE1D4_00000254:
    cmpwi r17, 0x0
    bne lbl_fn_803AE1D4_000004CC
    lwz r3, 0x55c(r25)
    cmplwi r3, 0x1
    ble lbl_fn_803AE1D4_00000280
    subi r0, r3, 0x9
    cmplwi r0, 0x1
    ble lbl_fn_803AE1D4_00000280
    cmpwi r3, 0x6
    beq lbl_fn_803AE1D4_000002B4
    b lbl_fn_803AE1D4_000002CC
lbl_fn_803AE1D4_00000280:
    lwz r0, 0x12a4(r25)
    srwi. r3, r0, 31
    bne lbl_fn_803AE1D4_000002CC
    extrwi. r0, r0, 1, 25
    bne lbl_fn_803AE1D4_000002CC
    lwz r0, 0x14a0(r25)
    cmpwi r0, 0x0
    bgt lbl_fn_803AE1D4_000002CC
    lwz r0, 0x1208(r25)
    cmpwi r0, 0x0
    bne lbl_fn_803AE1D4_000002CC
    li r0, 0x1
    b lbl_fn_803AE1D4_000002D0
lbl_fn_803AE1D4_000002B4:
    lwz r3, 0x560(r25)
    subi r0, r3, 0x3c
    cmplwi r0, 0x1
    bgt lbl_fn_803AE1D4_000002CC
    li r0, 0x1
    b lbl_fn_803AE1D4_000002D0
lbl_fn_803AE1D4_000002CC:
    li r0, 0x0
lbl_fn_803AE1D4_000002D0:
    cmpwi r0, 0x0
    bne lbl_fn_803AE1D4_000002E4
    lwz r0, 0xc(r27)
    cmpwi r0, 0x0
    beq lbl_fn_803AE1D4_000004CC
lbl_fn_803AE1D4_000002E4:
    stw r30, 0x60(r1)
    stfs f28, 0x64(r1)
    stfs f28, 0x68(r1)
    stfs f28, 0x6c(r1)
    stw r30, 0x74(r1)
    stw r30, 0x78(r1)
    stfs f28, 0x7c(r1)
    lwz r0, 0xc8(r27)
    cmpwi r0, 0x0
    bgt lbl_fn_803AE1D4_00000320
    lwz r0, 0xc(r27)
    cmpwi r0, 0x0
    bne lbl_fn_803AE1D4_000004CC
    stw r30, 0x60(r1)
    b lbl_fn_803AE1D4_00000324
lbl_fn_803AE1D4_00000320:
    stw r0, 0x60(r1)
lbl_fn_803AE1D4_00000324:
    addi r16, r28, 0xb0
    addi r4, r31, 0x6e
    mr r3, r16
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803AE1D4_00000348
    li r3, 0x0
    b lbl_fn_803AE1D4_00000354
lbl_fn_803AE1D4_00000348:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r16)
    add r3, r3, r0
lbl_fn_803AE1D4_00000354:
    cmpwi r3, 0x0
    beq lbl_fn_803AE1D4_000003A0
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
    b lbl_fn_803AE1D4_000003D4
lbl_fn_803AE1D4_000003A0:
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
lbl_fn_803AE1D4_000003D4:
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x6c(r1)
    psq_st f1, 0x0(r26), 0, 0
    lwz r0, 0xc8(r27)
    cmpwi r0, 0x2
    bne lbl_fn_803AE1D4_00000408
    lfs f0, 0x7d8(r28)
    fcmpu cr0, f28, f0
    mfcr r0
    extrwi r0, r0, 1, 2
    stw r0, 0x74(r1)
    b lbl_fn_803AE1D4_00000424
lbl_fn_803AE1D4_00000408:
    lwz r3, 0x4(r23)
    lwz r0, 0xf4(r20)
    add r3, r3, r18
    subf r0, r0, r3
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x74(r1)
lbl_fn_803AE1D4_00000424:
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
    ble lbl_fn_803AE1D4_0000048C
    b lbl_fn_803AE1D4_00000490
lbl_fn_803AE1D4_0000048C:
    fmr f0, f28
lbl_fn_803AE1D4_00000490:
    fcmpo cr0, f0, f27
    bge lbl_fn_803AE1D4_000004B0
    lfs f0, 0x7c(r1)
    fcmpo cr0, f0, f28
    ble lbl_fn_803AE1D4_000004A8
    b lbl_fn_803AE1D4_000004B4
lbl_fn_803AE1D4_000004A8:
    fmr f0, f28
    b lbl_fn_803AE1D4_000004B4
lbl_fn_803AE1D4_000004B0:
    fmr f0, f27
lbl_fn_803AE1D4_000004B4:
    fsubs f0, f27, f0
    stw r28, 0x70(r1)
    lwz r3, lbl_8087F490
    addi r4, r1, 0x60
    stfs f0, 0x7c(r1)
    bl fn_803E3C78
lbl_fn_803AE1D4_000004CC:
    addi r24, r24, 0x1
    addi r19, r19, 0x148
    addi r18, r18, 0xc
lbl_fn_803AE1D4_000004D8:
    lwz r0, 0x0(r22)
    cmplw r24, r0
    blt lbl_fn_803AE1D4_000000B8
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

asm void fn_803AE718(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0x80
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stfd f29, 0x90(r1)
    psq_st f29, 0x98(r1), 0, 0
    stfd f28, 0x80(r1)
    psq_st f28, 0x88(r1), 0, 0
    bl _savegpr_20
    fmr f31, f1
    lfs f29, lbl_80885B10
    lfs f30, lbl_80885BF0
    mr r21, r3
    mr r22, r4
    mr r23, r5
    mr r24, r6
    mr r25, r7
    mr r26, r8
    li r28, 0x0
    li r27, 0x0
    li r29, 0x0
    lis r31, 0x68dc
    lis r20, 0x8000
    b lbl_fn_803AE718_00000808
lbl_fn_803AE718_000005B4:
    lwz r6, 0x4(r22)
    mr r4, r27
    add r30, r6, r29
    lwz r0, 0x20(r30)
    cmpwi r0, 0x0
    blt lbl_fn_803AE718_000005D0
    mr r4, r0
lbl_fn_803AE718_000005D0:
    mulli r0, r4, 0xc
    lwz r3, 0x4(r23)
    lwzx r0, r3, r0
    cmpwi r0, 0x0
    blt lbl_fn_803AE718_00000800
    mulli r3, r4, 0x28
    slwi r0, r0, 2
    lwz r5, 0x80(r21)
    addi r7, r21, 0x80
    add r3, r6, r3
    lwz r3, 0x1c(r3)
    lwzx r4, r3, r0
    b lbl_fn_803AE718_00000620
lbl_fn_803AE718_00000604:
    lwz r0, 0xc(r5)
    cmpw r0, r4
    blt lbl_fn_803AE718_0000061C
    mr r7, r5
    lwz r5, 0x0(r5)
    b lbl_fn_803AE718_00000620
lbl_fn_803AE718_0000061C:
    lwz r5, 0x4(r5)
lbl_fn_803AE718_00000620:
    cmpwi r5, 0x0
    bne lbl_fn_803AE718_00000604
    addi r0, r21, 0x80
    cmplw r7, r0
    beq lbl_fn_803AE718_00000640
    lwz r0, 0xc(r7)
    cmpw r4, r0
    bge lbl_fn_803AE718_00000644
lbl_fn_803AE718_00000640:
    addi r7, r21, 0x80
lbl_fn_803AE718_00000644:
    addi r0, r21, 0x80
    cmplw r7, r0
    beq lbl_fn_803AE718_0000067C
    subi r3, r31, 0x7453
    lwz r0, 0x10(r7)
    mulhw r3, r3, r4
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r21, r3
    lwz r3, 0x64(r3)
    add r3, r3, r0
    b lbl_fn_803AE718_00000680
lbl_fn_803AE718_0000067C:
    li r3, 0x0
lbl_fn_803AE718_00000680:
    cmpwi r3, 0x0
    beq lbl_fn_803AE718_00000800
    lwz r0, 0xc(r3)
    cmpwi r0, 0x4
    bne lbl_fn_803AE718_00000800
    lwz r0, 0xb8(r3)
    and. r0, r0, r26
    bne lbl_fn_803AE718_00000800
    lfs f1, 0xc(r30)
    addi r3, r1, 0x44
    lfs f0, 0x8(r25)
    lfs f3, 0x8(r30)
    fsubs f4, f1, f0
    lfs f2, 0x4(r25)
    lfs f1, 0x4(r30)
    lfs f0, 0x0(r25)
    fsubs f2, f3, f2
    stfs f4, 0x4c(r1)
    fsubs f0, f1, f0
    stfs f2, 0x48(r1)
    stfs f0, 0x44(r1)
    bl fn_805F9920
    fmr f28, f1
    fcmpo cr0, f1, f29
    ble lbl_fn_803AE718_000006F0
    addi r3, r1, 0x44
    mr r4, r3
    bl fn_805F98D0
lbl_fn_803AE718_000006F0:
    fmuls f0, f31, f31
    fcmpo cr0, f28, f0
    bge lbl_fn_803AE718_00000800
    cmpwi r24, 0x0
    lfs f8, lbl_80885B9C
    beq lbl_fn_803AE718_00000718
    lwz r0, 0x12a4(r24)
    srwi. r0, r0, 31
    bne lbl_fn_803AE718_00000718
    lfs f8, lbl_80885B18
lbl_fn_803AE718_00000718:
    lfs f2, 0x4c(r1)
    addi r5, r1, 0x38
    lfs f3, 0x14(r30)
    addi r6, r1, 0x20
    lfs f1, 0x48(r1)
    fmuls f6, f2, f8
    fmuls f9, f2, f3
    lfs f0, 0x44(r1)
    fmuls f10, f1, f3
    lfs f2, 0x8(r25)
    fmuls f11, f0, f3
    fmuls f7, f1, f8
    fmuls f8, f0, f8
    lfs f1, 0x4(r25)
    fmuls f12, f9, f30
    lfs f5, 0xc(r30)
    fmuls f13, f10, f30
    fmuls f28, f11, f30
    lfs f4, 0x8(r30)
    fsubs f5, f5, f12
    lfs f3, 0x4(r30)
    fadds f2, f2, f6
    lfs f0, 0x0(r25)
    fsubs f4, f4, f13
    stfs f11, 0x8(r1)
    fsubs f3, f3, f28
    lwz r3, lbl_8087EE98
    fadds f1, f1, f7
    stfs f10, 0xc(r1)
    fadds f0, f0, f8
    stfs f9, 0x10(r1)
    addi r7, r20, 0x10
    li r4, 0x0
    stfs f28, 0x14(r1)
    li r8, 0x0
    stfs f13, 0x18(r1)
    li r9, 0x0
    stfs f12, 0x1c(r1)
    stfs f3, 0x20(r1)
    stfs f4, 0x24(r1)
    stfs f5, 0x28(r1)
    stfs f8, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f2, 0x40(r1)
    bl fn_8004ECC0
    cmpwi r3, 0x0
    beq lbl_fn_803AE718_000007FC
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803AE718_00000800
    li r4, 0xce
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_803AE718_00000800
lbl_fn_803AE718_000007FC:
    addi r28, r28, 0x1
lbl_fn_803AE718_00000800:
    addi r29, r29, 0x28
    addi r27, r27, 0x1
lbl_fn_803AE718_00000808:
    lwz r0, 0x0(r22)
    cmplw r27, r0
    blt lbl_fn_803AE718_000005B4
    psq_l f31, 0xb8(r1), 0, 0
    mr r3, r28
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    psq_l f29, 0x98(r1), 0, 0
    lfd f29, 0x90(r1)
    psq_l f28, 0x88(r1), 0, 0
    lfd f28, 0x80(r1)
    addi r11, r1, 0x80
    bl _restgpr_20
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_803AEA24(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x60
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    bl _savegpr_19
    fmr f31, f1
    mr r22, r3
    mr r23, r4
    mr r24, r5
    mr r25, r6
    mr r26, r8
    mr r27, r9
    addi r30, r1, 0x14
    li r29, 0x0
    li r28, 0x0
    li r21, 0x0
    li r20, 0x0
    lis r31, 0x68dc
    lis r19, 0x8000
    b lbl_fn_803AEA24_00000B50
lbl_fn_803AEA24_000008A8:
    lwz r3, 0x4(r24)
    lwz r0, 0x4(r23)
    lwzx r5, r3, r20
    add r3, r0, r21
    cmpwi r5, 0x0
    blt lbl_fn_803AEA24_00000B44
    lwz r4, 0x144(r3)
    slwi r0, r5, 2
    lwz r6, 0x80(r22)
    addi r7, r22, 0x80
    lwzx r5, r4, r0
    b lbl_fn_803AEA24_000008F4
lbl_fn_803AEA24_000008D8:
    lwz r0, 0xc(r6)
    cmpw r0, r5
    blt lbl_fn_803AEA24_000008F0
    mr r7, r6
    lwz r6, 0x0(r6)
    b lbl_fn_803AEA24_000008F4
lbl_fn_803AEA24_000008F0:
    lwz r6, 0x4(r6)
lbl_fn_803AEA24_000008F4:
    cmpwi r6, 0x0
    bne lbl_fn_803AEA24_000008D8
    addi r0, r22, 0x80
    cmplw r7, r0
    beq lbl_fn_803AEA24_00000914
    lwz r0, 0xc(r7)
    cmpw r5, r0
    bge lbl_fn_803AEA24_00000918
lbl_fn_803AEA24_00000914:
    addi r7, r22, 0x80
lbl_fn_803AEA24_00000918:
    addi r0, r22, 0x80
    cmplw r7, r0
    beq lbl_fn_803AEA24_00000950
    subi r4, r31, 0x7453
    lwz r0, 0x10(r7)
    mulhw r4, r4, r5
    srawi r4, r4, 12
    srwi r5, r4, 31
    add r4, r4, r5
    slwi r4, r4, 2
    add r4, r22, r4
    lwz r4, 0x64(r4)
    add r4, r4, r0
    b lbl_fn_803AEA24_00000954
lbl_fn_803AEA24_00000950:
    li r4, 0x0
lbl_fn_803AEA24_00000954:
    cmpwi r4, 0x0
    beq lbl_fn_803AEA24_00000B44
    lwz r0, 0xc(r4)
    cmpwi r0, 0x4
    bne lbl_fn_803AEA24_00000B44
    lwz r0, 0xb8(r4)
    and. r0, r0, r27
    bne lbl_fn_803AEA24_00000B44
    cmpwi r25, 0x0
    lwz r4, 0x0(r3)
    li r5, 0x0
    beq lbl_fn_803AEA24_000009A0
    cmpwi r25, 0x1
    beq lbl_fn_803AEA24_000009CC
    cmpwi r25, 0x2
    beq lbl_fn_803AEA24_00000A04
    cmpwi r25, 0x3
    beq lbl_fn_803AEA24_00000A14
    b lbl_fn_803AEA24_00000A20
lbl_fn_803AEA24_000009A0:
    lwz r0, 0xdc(r22)
    cmpwi r0, 0x0
    beq lbl_fn_803AEA24_000009B8
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803AEA24_000009C4
lbl_fn_803AEA24_000009B8:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803AEA24_000009C4:
    mr r5, r3
    b lbl_fn_803AEA24_00000A20
lbl_fn_803AEA24_000009CC:
    lwz r3, lbl_8087F890
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r5, r3
    cmpwi r0, 0x0
    beq lbl_fn_803AEA24_00000A20
    cmpwi r3, 0x0
    beq lbl_fn_803AEA24_00000A20
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803AEA24_00000A20
    li r5, 0x0
    b lbl_fn_803AEA24_00000A20
lbl_fn_803AEA24_00000A04:
    lwz r3, lbl_8087F408
    bl fn_8011FC10
    mr r5, r3
    b lbl_fn_803AEA24_00000A20
lbl_fn_803AEA24_00000A14:
    lwz r3, lbl_8087F8A0
    bl fn_8011F91C
    mr r5, r3
lbl_fn_803AEA24_00000A20:
    cmpwi r5, 0x0
    beq lbl_fn_803AEA24_00000B44
    lwz r7, 0x38(r5)
    li r4, 0x0
    li r3, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803AEA24_00000A54
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_803AEA24_00000A54
    li r6, 0x1
lbl_fn_803AEA24_00000A54:
    cmpwi r6, 0x0
    beq lbl_fn_803AEA24_00000A70
    lwz r0, 0x7e0(r5)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_803AEA24_00000A70
    li r3, 0x1
lbl_fn_803AEA24_00000A70:
    cmpwi r3, 0x0
    beq lbl_fn_803AEA24_00000AA4
    lwz r0, 0x55c(r5)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_803AEA24_00000A98
    lwz r0, 0x560(r5)
    cmpwi r0, 0x1c
    bne lbl_fn_803AEA24_00000A98
    li r3, 0x1
lbl_fn_803AEA24_00000A98:
    cmpwi r3, 0x0
    bne lbl_fn_803AEA24_00000AA4
    li r4, 0x1
lbl_fn_803AEA24_00000AA4:
    cmpwi r4, 0x0
    beq lbl_fn_803AEA24_00000B44
    psq_l f1, 0x600(r5), 0, 0
    addi r3, r1, 0x8
    lfs f2, 0x608(r5)
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0x8(r26)
    lfs f5, 0x18(r1)
    lfs f4, 0x4(r26)
    fsubs f6, f2, f0
    lfs f0, 0x0(r26)
    lfs f3, 0x14(r1)
    fsubs f4, f5, f4
    stfs f6, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9920
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    bge lbl_fn_803AEA24_00000B44
    lwz r3, lbl_8087EE98
    mr r5, r26
    mr r6, r30
    addi r7, r19, 0x10
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ECC0
    cmpwi r3, 0x0
    beq lbl_fn_803AEA24_00000B40
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803AEA24_00000B44
    li r4, 0xce
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_803AEA24_00000B44
lbl_fn_803AEA24_00000B40:
    addi r29, r29, 0x1
lbl_fn_803AEA24_00000B44:
    addi r28, r28, 0x1
    addi r21, r21, 0x148
    addi r20, r20, 0xc
lbl_fn_803AEA24_00000B50:
    lwz r0, 0x0(r23)
    cmplw r28, r0
    blt lbl_fn_803AEA24_000008A8
    psq_l f31, 0x68(r1), 0, 0
    mr r3, r29
    lfd f31, 0x60(r1)
    addi r11, r1, 0x60
    bl _restgpr_19
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_803AED54(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0x80
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stfd f29, 0x90(r1)
    psq_st f29, 0x98(r1), 0, 0
    stfd f28, 0x80(r1)
    psq_st f28, 0x88(r1), 0, 0
    bl _savegpr_21
    lwz r7, lbl_8087F8A0
    mr r21, r3
    mr r22, r4
    lfs f1, lbl_80885B10
    lwz r30, 0x48(r7)
    mr r23, r5
    lfs f0, lbl_80885B30
    mr r24, r6
    stfs f1, 0x14(r1)
    addi r3, r1, 0x20
    li r4, 0x79
    stfs f1, 0x18(r1)
    stfs f0, 0x1c(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x20
    mr r5, r4
    bl fn_805F93C0
    lfs f29, lbl_80885B24
    li r26, 0x0
    lfs f31, lbl_80885BA0
    li r28, 0x0
    lfs f30, lbl_80885BF4
    li r27, 0x0
    lis r31, 0x68dc
    b lbl_fn_803AED54_00000EE4
lbl_fn_803AED54_00000C20:
    lwz r0, 0x4(r24)
    lwz r3, 0x4(r23)
    add r4, r0, r27
    lwzx r0, r27, r0
    add r29, r3, r28
    cmpwi r0, 0x0
    blt lbl_fn_803AED54_00000ED8
    lwz r0, 0x4(r4)
    mr r3, r22
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x4(r4)
    bl fn_8036554C
    mr r25, r3
    b lbl_fn_803AED54_00000C6C
lbl_fn_803AED54_00000C58:
    lwz r3, 0x0(r29)
    lwz r0, 0x58(r25)
    cmpw r3, r0
    beq lbl_fn_803AED54_00000C74
    lwz r25, 0x14ac(r25)
lbl_fn_803AED54_00000C6C:
    cmpwi r25, 0x0
    bne lbl_fn_803AED54_00000C58
lbl_fn_803AED54_00000C74:
    cmpwi r25, 0x0
    beq lbl_fn_803AED54_00000ED8
    mr r3, r25
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_803AED54_00000ED8
    lwz r0, 0x38(r25)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803AED54_00000ED8
    lwz r3, 0x4(r24)
    addi r5, r21, 0x80
    lwz r4, 0x144(r29)
    lwzx r0, r3, r27
    lwz r3, 0x80(r21)
    slwi r0, r0, 2
    lwzx r4, r4, r0
    b lbl_fn_803AED54_00000CD8
lbl_fn_803AED54_00000CBC:
    lwz r0, 0xc(r3)
    cmpw r0, r4
    blt lbl_fn_803AED54_00000CD4
    mr r5, r3
    lwz r3, 0x0(r3)
    b lbl_fn_803AED54_00000CD8
lbl_fn_803AED54_00000CD4:
    lwz r3, 0x4(r3)
lbl_fn_803AED54_00000CD8:
    cmpwi r3, 0x0
    bne lbl_fn_803AED54_00000CBC
    addi r0, r21, 0x80
    cmplw r5, r0
    beq lbl_fn_803AED54_00000CF8
    lwz r0, 0xc(r5)
    cmpw r4, r0
    bge lbl_fn_803AED54_00000CFC
lbl_fn_803AED54_00000CF8:
    addi r5, r21, 0x80
lbl_fn_803AED54_00000CFC:
    addi r0, r21, 0x80
    cmplw r5, r0
    beq lbl_fn_803AED54_00000D34
    subi r3, r31, 0x7453
    lwz r0, 0x10(r5)
    mulhw r3, r3, r4
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r21, r3
    lwz r3, 0x64(r3)
    add r3, r3, r0
    b lbl_fn_803AED54_00000D38
lbl_fn_803AED54_00000D34:
    li r3, 0x0
lbl_fn_803AED54_00000D38:
    cmpwi r3, 0x0
    beq lbl_fn_803AED54_00000ED8
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803AED54_00000ED8
    lfs f1, 0x530(r25)
    addi r3, r1, 0x8
    lfs f0, 0x530(r30)
    lfs f3, 0x52c(r25)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r30)
    lfs f1, 0x528(r25)
    lfs f0, 0x528(r30)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    fabs f0, f1
    fmr f28, f1
    frsp f0, f0
    fcmpo cr0, f0, f29
    blt lbl_fn_803AED54_00000DA4
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_805F98D0
lbl_fn_803AED54_00000DA4:
    fcmpo cr0, f28, f30
    li r25, 0x0
    bge lbl_fn_803AED54_00000DC8
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    bl fn_805F9990
    fcmpo cr0, f1, f31
    ble lbl_fn_803AED54_00000DC8
    li r25, 0x1
lbl_fn_803AED54_00000DC8:
    cmpwi r25, 0x0
    beq lbl_fn_803AED54_00000ED8
    lwz r3, 0x55c(r30)
    cmplwi r3, 0x1
    ble lbl_fn_803AED54_00000DF4
    subi r0, r3, 0x9
    cmplwi r0, 0x1
    ble lbl_fn_803AED54_00000DF4
    cmpwi r3, 0x6
    beq lbl_fn_803AED54_00000E28
    b lbl_fn_803AED54_00000E40
lbl_fn_803AED54_00000DF4:
    lwz r3, 0x12a4(r30)
    srwi. r0, r3, 31
    bne lbl_fn_803AED54_00000E40
    extrwi. r0, r3, 1, 25
    bne lbl_fn_803AED54_00000E40
    lwz r0, 0x14a0(r30)
    cmpwi r0, 0x0
    bgt lbl_fn_803AED54_00000E40
    lwz r0, 0x1208(r30)
    cmpwi r0, 0x0
    bne lbl_fn_803AED54_00000E40
    li r0, 0x1
    b lbl_fn_803AED54_00000E44
lbl_fn_803AED54_00000E28:
    lwz r3, 0x560(r30)
    subi r0, r3, 0x3c
    cmplwi r0, 0x1
    bgt lbl_fn_803AED54_00000E40
    li r0, 0x1
    b lbl_fn_803AED54_00000E44
lbl_fn_803AED54_00000E40:
    li r0, 0x0
lbl_fn_803AED54_00000E44:
    cmpwi r0, 0x0
    beq lbl_fn_803AED54_00000ED8
    lwz r0, 0xe0(r21)
    li r25, 0x1
    cmpwi r0, 0x0
    bgt lbl_fn_803AED54_00000E8C
    lwz r3, lbl_8087F430
    li r29, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_803AED54_00000E80
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_803AED54_00000E80
    li r29, 0x1
lbl_fn_803AED54_00000E80:
    cmpwi r29, 0x0
    bne lbl_fn_803AED54_00000E8C
    li r25, 0x0
lbl_fn_803AED54_00000E8C:
    cmpwi r25, 0x0
    bne lbl_fn_803AED54_00000ED8
    lwz r0, 0x4(r24)
    add r3, r0, r27
    lwz r0, 0x4(r3)
    ori r0, r0, 0x20
    stw r0, 0x4(r3)
    lwz r0, 0x4(r24)
    add r3, r0, r27
    stfs f28, 0x8(r3)
    lwz r3, 0xf4(r21)
    cmpwi r3, 0x0
    beq lbl_fn_803AED54_00000ECC
    lfs f0, 0x8(r3)
    fcmpo cr0, f28, f0
    bge lbl_fn_803AED54_00000ED8
lbl_fn_803AED54_00000ECC:
    lwz r0, 0x4(r24)
    add r0, r0, r27
    stw r0, 0xf4(r21)
lbl_fn_803AED54_00000ED8:
    addi r28, r28, 0x148
    addi r27, r27, 0xc
    addi r26, r26, 0x1
lbl_fn_803AED54_00000EE4:
    lwz r0, 0x0(r23)
    cmplw r26, r0
    blt lbl_fn_803AED54_00000C20
    addi r11, r1, 0x80
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    psq_l f29, 0x98(r1), 0, 0
    lfd f29, 0x90(r1)
    psq_l f28, 0x88(r1), 0, 0
    lfd f28, 0x80(r1)
    bl _restgpr_21
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_803AF0FC(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0x80
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stfd f29, 0x90(r1)
    psq_st f29, 0x98(r1), 0, 0
    stfd f28, 0x80(r1)
    psq_st f28, 0x88(r1), 0, 0
    bl _savegpr_21
    lwz r7, lbl_8087F8A0
    mr r21, r3
    mr r22, r4
    lfs f1, lbl_80885B10
    lwz r30, 0x48(r7)
    mr r23, r5
    lfs f0, lbl_80885B30
    mr r24, r6
    stfs f1, 0x14(r1)
    addi r3, r1, 0x20
    li r4, 0x79
    stfs f1, 0x18(r1)
    stfs f0, 0x1c(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x20
    mr r5, r4
    bl fn_805F93C0
    lfs f29, lbl_80885B24
    li r26, 0x0
    lfs f31, lbl_80885BA0
    li r28, 0x0
    lfs f30, lbl_80885BF4
    li r27, 0x0
    lis r31, 0x68dc
    b lbl_fn_803AF0FC_00001284
lbl_fn_803AF0FC_00000FC8:
    lwz r0, 0x4(r24)
    lwz r3, 0x4(r23)
    add r4, r0, r27
    lwzx r0, r27, r0
    add r29, r3, r28
    cmpwi r0, 0x0
    blt lbl_fn_803AF0FC_00001278
    lwz r0, 0x4(r4)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x4(r4)
    lwz r25, 0x48(r22)
    b lbl_fn_803AF0FC_0000100C
lbl_fn_803AF0FC_00000FF8:
    lwz r3, 0x0(r29)
    lwz r0, 0x58(r25)
    cmpw r3, r0
    beq lbl_fn_803AF0FC_00001014
    lwz r25, 0x14ac(r25)
lbl_fn_803AF0FC_0000100C:
    cmpwi r25, 0x0
    bne lbl_fn_803AF0FC_00000FF8
lbl_fn_803AF0FC_00001014:
    cmpwi r25, 0x0
    beq lbl_fn_803AF0FC_00001278
    mr r3, r25
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_803AF0FC_00001278
    lwz r0, 0x38(r25)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803AF0FC_00001278
    lwz r3, 0x4(r24)
    addi r5, r21, 0x80
    lwz r4, 0x144(r29)
    lwzx r0, r3, r27
    lwz r3, 0x80(r21)
    slwi r0, r0, 2
    lwzx r4, r4, r0
    b lbl_fn_803AF0FC_00001078
lbl_fn_803AF0FC_0000105C:
    lwz r0, 0xc(r3)
    cmpw r0, r4
    blt lbl_fn_803AF0FC_00001074
    mr r5, r3
    lwz r3, 0x0(r3)
    b lbl_fn_803AF0FC_00001078
lbl_fn_803AF0FC_00001074:
    lwz r3, 0x4(r3)
lbl_fn_803AF0FC_00001078:
    cmpwi r3, 0x0
    bne lbl_fn_803AF0FC_0000105C
    addi r0, r21, 0x80
    cmplw r5, r0
    beq lbl_fn_803AF0FC_00001098
    lwz r0, 0xc(r5)
    cmpw r4, r0
    bge lbl_fn_803AF0FC_0000109C
lbl_fn_803AF0FC_00001098:
    addi r5, r21, 0x80
lbl_fn_803AF0FC_0000109C:
    addi r0, r21, 0x80
    cmplw r5, r0
    beq lbl_fn_803AF0FC_000010D4
    subi r3, r31, 0x7453
    lwz r0, 0x10(r5)
    mulhw r3, r3, r4
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r21, r3
    lwz r3, 0x64(r3)
    add r3, r3, r0
    b lbl_fn_803AF0FC_000010D8
lbl_fn_803AF0FC_000010D4:
    li r3, 0x0
lbl_fn_803AF0FC_000010D8:
    cmpwi r3, 0x0
    beq lbl_fn_803AF0FC_00001278
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803AF0FC_00001278
    lfs f1, 0x530(r25)
    addi r3, r1, 0x8
    lfs f0, 0x530(r30)
    lfs f3, 0x52c(r25)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r30)
    lfs f1, 0x528(r25)
    lfs f0, 0x528(r30)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    fabs f0, f1
    fmr f28, f1
    frsp f0, f0
    fcmpo cr0, f0, f29
    blt lbl_fn_803AF0FC_00001144
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_805F98D0
lbl_fn_803AF0FC_00001144:
    fcmpo cr0, f28, f30
    li r25, 0x0
    bge lbl_fn_803AF0FC_00001168
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    bl fn_805F9990
    fcmpo cr0, f1, f31
    ble lbl_fn_803AF0FC_00001168
    li r25, 0x1
lbl_fn_803AF0FC_00001168:
    cmpwi r25, 0x0
    beq lbl_fn_803AF0FC_00001278
    lwz r3, 0x55c(r30)
    cmplwi r3, 0x1
    ble lbl_fn_803AF0FC_00001194
    subi r0, r3, 0x9
    cmplwi r0, 0x1
    ble lbl_fn_803AF0FC_00001194
    cmpwi r3, 0x6
    beq lbl_fn_803AF0FC_000011C8
    b lbl_fn_803AF0FC_000011E0
lbl_fn_803AF0FC_00001194:
    lwz r3, 0x12a4(r30)
    srwi. r0, r3, 31
    bne lbl_fn_803AF0FC_000011E0
    extrwi. r0, r3, 1, 25
    bne lbl_fn_803AF0FC_000011E0
    lwz r0, 0x14a0(r30)
    cmpwi r0, 0x0
    bgt lbl_fn_803AF0FC_000011E0
    lwz r0, 0x1208(r30)
    cmpwi r0, 0x0
    bne lbl_fn_803AF0FC_000011E0
    li r0, 0x1
    b lbl_fn_803AF0FC_000011E4
lbl_fn_803AF0FC_000011C8:
    lwz r3, 0x560(r30)
    subi r0, r3, 0x3c
    cmplwi r0, 0x1
    bgt lbl_fn_803AF0FC_000011E0
    li r0, 0x1
    b lbl_fn_803AF0FC_000011E4
lbl_fn_803AF0FC_000011E0:
    li r0, 0x0
lbl_fn_803AF0FC_000011E4:
    cmpwi r0, 0x0
    beq lbl_fn_803AF0FC_00001278
    lwz r0, 0xe0(r21)
    li r25, 0x1
    cmpwi r0, 0x0
    bgt lbl_fn_803AF0FC_0000122C
    lwz r3, lbl_8087F430
    li r29, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_803AF0FC_00001220
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_803AF0FC_00001220
    li r29, 0x1
lbl_fn_803AF0FC_00001220:
    cmpwi r29, 0x0
    bne lbl_fn_803AF0FC_0000122C
    li r25, 0x0
lbl_fn_803AF0FC_0000122C:
    cmpwi r25, 0x0
    bne lbl_fn_803AF0FC_00001278
    lwz r0, 0x4(r24)
    add r3, r0, r27
    lwz r0, 0x4(r3)
    ori r0, r0, 0x20
    stw r0, 0x4(r3)
    lwz r0, 0x4(r24)
    add r3, r0, r27
    stfs f28, 0x8(r3)
    lwz r3, 0xf4(r21)
    cmpwi r3, 0x0
    beq lbl_fn_803AF0FC_0000126C
    lfs f0, 0x8(r3)
    fcmpo cr0, f28, f0
    bge lbl_fn_803AF0FC_00001278
lbl_fn_803AF0FC_0000126C:
    lwz r0, 0x4(r24)
    add r0, r0, r27
    stw r0, 0xf4(r21)
lbl_fn_803AF0FC_00001278:
    addi r28, r28, 0x148
    addi r27, r27, 0xc
    addi r26, r26, 0x1
lbl_fn_803AF0FC_00001284:
    lwz r0, 0x0(r23)
    cmplw r26, r0
    blt lbl_fn_803AF0FC_00000FC8
    addi r11, r1, 0x80
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    psq_l f29, 0x98(r1), 0, 0
    lfd f29, 0x90(r1)
    psq_l f28, 0x88(r1), 0, 0
    lfd f28, 0x80(r1)
    bl _restgpr_21
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_803AF49C(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0x80
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stfd f29, 0x90(r1)
    psq_st f29, 0x98(r1), 0, 0
    stfd f28, 0x80(r1)
    psq_st f28, 0x88(r1), 0, 0
    bl _savegpr_21
    lwz r7, lbl_8087F8A0
    mr r21, r3
    mr r22, r4
    lfs f1, lbl_80885B10
    lwz r30, 0x48(r7)
    mr r23, r5
    lfs f0, lbl_80885B30
    mr r24, r6
    stfs f1, 0x14(r1)
    addi r3, r1, 0x20
    li r4, 0x79
    stfs f1, 0x18(r1)
    stfs f0, 0x1c(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x20
    mr r5, r4
    bl fn_805F93C0
    lfs f29, lbl_80885B24
    li r26, 0x0
    lfs f31, lbl_80885BA0
    li r28, 0x0
    lfs f30, lbl_80885BF4
    li r27, 0x0
    lis r31, 0x68dc
    b lbl_fn_803AF49C_00001624
lbl_fn_803AF49C_00001368:
    lwz r0, 0x4(r24)
    lwz r3, 0x4(r23)
    add r4, r0, r27
    lwzx r0, r27, r0
    add r29, r3, r28
    cmpwi r0, 0x0
    blt lbl_fn_803AF49C_00001618
    lwz r0, 0x4(r4)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x4(r4)
    lwz r25, 0x48(r22)
    b lbl_fn_803AF49C_000013AC
lbl_fn_803AF49C_00001398:
    lwz r3, 0x0(r29)
    lwz r0, 0x58(r25)
    cmpw r3, r0
    beq lbl_fn_803AF49C_000013B4
    lwz r25, 0x1424(r25)
lbl_fn_803AF49C_000013AC:
    cmpwi r25, 0x0
    bne lbl_fn_803AF49C_00001398
lbl_fn_803AF49C_000013B4:
    cmpwi r25, 0x0
    beq lbl_fn_803AF49C_00001618
    mr r3, r25
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_803AF49C_00001618
    lwz r0, 0x38(r25)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803AF49C_00001618
    lwz r3, 0x4(r24)
    addi r5, r21, 0x80
    lwz r4, 0x144(r29)
    lwzx r0, r3, r27
    lwz r3, 0x80(r21)
    slwi r0, r0, 2
    lwzx r4, r4, r0
    b lbl_fn_803AF49C_00001418
lbl_fn_803AF49C_000013FC:
    lwz r0, 0xc(r3)
    cmpw r0, r4
    blt lbl_fn_803AF49C_00001414
    mr r5, r3
    lwz r3, 0x0(r3)
    b lbl_fn_803AF49C_00001418
lbl_fn_803AF49C_00001414:
    lwz r3, 0x4(r3)
lbl_fn_803AF49C_00001418:
    cmpwi r3, 0x0
    bne lbl_fn_803AF49C_000013FC
    addi r0, r21, 0x80
    cmplw r5, r0
    beq lbl_fn_803AF49C_00001438
    lwz r0, 0xc(r5)
    cmpw r4, r0
    bge lbl_fn_803AF49C_0000143C
lbl_fn_803AF49C_00001438:
    addi r5, r21, 0x80
lbl_fn_803AF49C_0000143C:
    addi r0, r21, 0x80
    cmplw r5, r0
    beq lbl_fn_803AF49C_00001474
    subi r3, r31, 0x7453
    lwz r0, 0x10(r5)
    mulhw r3, r3, r4
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r21, r3
    lwz r3, 0x64(r3)
    add r3, r3, r0
    b lbl_fn_803AF49C_00001478
lbl_fn_803AF49C_00001474:
    li r3, 0x0
lbl_fn_803AF49C_00001478:
    cmpwi r3, 0x0
    beq lbl_fn_803AF49C_00001618
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803AF49C_00001618
    lfs f1, 0x530(r25)
    addi r3, r1, 0x8
    lfs f0, 0x530(r30)
    lfs f3, 0x52c(r25)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r30)
    lfs f1, 0x528(r25)
    lfs f0, 0x528(r30)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    fabs f0, f1
    fmr f28, f1
    frsp f0, f0
    fcmpo cr0, f0, f29
    blt lbl_fn_803AF49C_000014E4
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_805F98D0
lbl_fn_803AF49C_000014E4:
    fcmpo cr0, f28, f30
    li r25, 0x0
    bge lbl_fn_803AF49C_00001508
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    bl fn_805F9990
    fcmpo cr0, f1, f31
    ble lbl_fn_803AF49C_00001508
    li r25, 0x1
lbl_fn_803AF49C_00001508:
    cmpwi r25, 0x0
    beq lbl_fn_803AF49C_00001618
    lwz r3, 0x55c(r30)
    cmplwi r3, 0x1
    ble lbl_fn_803AF49C_00001534
    subi r0, r3, 0x9
    cmplwi r0, 0x1
    ble lbl_fn_803AF49C_00001534
    cmpwi r3, 0x6
    beq lbl_fn_803AF49C_00001568
    b lbl_fn_803AF49C_00001580
lbl_fn_803AF49C_00001534:
    lwz r3, 0x12a4(r30)
    srwi. r0, r3, 31
    bne lbl_fn_803AF49C_00001580
    extrwi. r0, r3, 1, 25
    bne lbl_fn_803AF49C_00001580
    lwz r0, 0x14a0(r30)
    cmpwi r0, 0x0
    bgt lbl_fn_803AF49C_00001580
    lwz r0, 0x1208(r30)
    cmpwi r0, 0x0
    bne lbl_fn_803AF49C_00001580
    li r0, 0x1
    b lbl_fn_803AF49C_00001584
lbl_fn_803AF49C_00001568:
    lwz r3, 0x560(r30)
    subi r0, r3, 0x3c
    cmplwi r0, 0x1
    bgt lbl_fn_803AF49C_00001580
    li r0, 0x1
    b lbl_fn_803AF49C_00001584
lbl_fn_803AF49C_00001580:
    li r0, 0x0
lbl_fn_803AF49C_00001584:
    cmpwi r0, 0x0
    beq lbl_fn_803AF49C_00001618
    lwz r0, 0xe0(r21)
    li r25, 0x1
    cmpwi r0, 0x0
    bgt lbl_fn_803AF49C_000015CC
    lwz r3, lbl_8087F430
    li r29, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_803AF49C_000015C0
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_803AF49C_000015C0
    li r29, 0x1
lbl_fn_803AF49C_000015C0:
    cmpwi r29, 0x0
    bne lbl_fn_803AF49C_000015CC
    li r25, 0x0
lbl_fn_803AF49C_000015CC:
    cmpwi r25, 0x0
    bne lbl_fn_803AF49C_00001618
    lwz r0, 0x4(r24)
    add r3, r0, r27
    lwz r0, 0x4(r3)
    ori r0, r0, 0x20
    stw r0, 0x4(r3)
    lwz r0, 0x4(r24)
    add r3, r0, r27
    stfs f28, 0x8(r3)
    lwz r3, 0xf4(r21)
    cmpwi r3, 0x0
    beq lbl_fn_803AF49C_0000160C
    lfs f0, 0x8(r3)
    fcmpo cr0, f28, f0
    bge lbl_fn_803AF49C_00001618
lbl_fn_803AF49C_0000160C:
    lwz r0, 0x4(r24)
    add r0, r0, r27
    stw r0, 0xf4(r21)
lbl_fn_803AF49C_00001618:
    addi r28, r28, 0x148
    addi r27, r27, 0xc
    addi r26, r26, 0x1
lbl_fn_803AF49C_00001624:
    lwz r0, 0x0(r23)
    cmplw r26, r0
    blt lbl_fn_803AF49C_00001368
    addi r11, r1, 0x80
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    psq_l f29, 0x98(r1), 0, 0
    lfd f29, 0x90(r1)
    psq_l f28, 0x88(r1), 0, 0
    lfd f28, 0x80(r1)
    bl _restgpr_21
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_803AF83C(void)
{
    nofralloc
    stwu r1, -0x350(r1)
    mflr r0
    stw r0, 0x354(r1)
    addi r11, r1, 0x2b0
    stfd f31, 0x340(r1)
    psq_st f31, 0x348(r1), 0, 0
    stfd f30, 0x330(r1)
    psq_st f30, 0x338(r1), 0, 0
    stfd f29, 0x320(r1)
    psq_st f29, 0x328(r1), 0, 0
    stfd f28, 0x310(r1)
    psq_st f28, 0x318(r1), 0, 0
    stfd f27, 0x300(r1)
    psq_st f27, 0x308(r1), 0, 0
    stfd f26, 0x2f0(r1)
    psq_st f26, 0x2f8(r1), 0, 0
    stfd f25, 0x2e0(r1)
    psq_st f25, 0x2e8(r1), 0, 0
    stfd f24, 0x2d0(r1)
    psq_st f24, 0x2d8(r1), 0, 0
    stfd f23, 0x2c0(r1)
    psq_st f23, 0x2c8(r1), 0, 0
    stfd f22, 0x2b0(r1)
    psq_st f22, 0x2b8(r1), 0, 0
    bl _savegpr_14
    li r14, 0x0
    stw r14, 0x98(r3)
    mr r24, r4
    mr r25, r5
    stw r7, 0x9c(r3)
    mr r23, r3
    lfs f7, lbl_80885B10
    mr r26, r6
    lwz r5, lbl_8087F8A0
    addi r3, r1, 0x1c0
    lfs f0, lbl_80885B30
    li r4, 0x79
    lwz r16, 0x48(r5)
    stfs f7, 0x110(r1)
    stfs f7, 0x114(r1)
    stfs f0, 0x118(r1)
    lfs f1, 0x538(r16)
    bl fn_805F8E70
    addi r4, r1, 0x110
    addi r3, r1, 0x1c0
    mr r5, r4
    bl fn_805F93C0
    lwz r0, 0xf8(r23)
    li r3, -0x1
    stw r3, 0x1a0(r1)
    cmpwi r0, 0x0
    stw r3, 0x1a4(r1)
    stw r3, 0x1a8(r1)
    stw r14, 0x1ac(r1)
    stw r14, 0x1b0(r1)
    stw r14, 0x1b4(r1)
    stw r14, 0x1b8(r1)
    bgt lbl_fn_803AF83C_00001A2C
    addi r4, r1, 0x22c
    addi r3, r1, 0x264
    cmplw r4, r3
    stw r14, 0x220(r1)
    stw r14, 0x224(r1)
    stw r14, 0x228(r1)
    bge lbl_fn_803AF83C_00001790
    addi r0, r3, 0x7
    subf r0, r4, r0
    srwi r0, r0, 3
    mtctr r0
    bge lbl_fn_803AF83C_00001790
lbl_fn_803AF83C_00001780:
    stw r14, 0x0(r4)
    stw r14, 0x4(r4)
    addi r4, r4, 0x8
    bdnz lbl_fn_803AF83C_00001780
lbl_fn_803AF83C_00001790:
    li r18, 0x0
    li r15, 0x0
    li r17, 0x0
    lis r14, 0x68dc
    b lbl_fn_803AF83C_0000197C
lbl_fn_803AF83C_000017A4:
    lwz r4, 0x4(r26)
    lwz r3, 0x4(r25)
    lwzx r0, r4, r17
    add r20, r3, r15
    cmpwi r0, 0x0
    blt lbl_fn_803AF83C_00001970
    mr r3, r24
    bl fn_8036554C
    mr r19, r3
    b lbl_fn_803AF83C_000017E0
lbl_fn_803AF83C_000017CC:
    lwz r3, 0x58(r19)
    lwz r0, 0x0(r20)
    cmpw r0, r3
    beq lbl_fn_803AF83C_000017E8
    lwz r19, 0x14ac(r19)
lbl_fn_803AF83C_000017E0:
    cmpwi r19, 0x0
    bne lbl_fn_803AF83C_000017CC
lbl_fn_803AF83C_000017E8:
    cmpwi r19, 0x0
    beq lbl_fn_803AF83C_00001970
    mr r3, r19
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_803AF83C_00001970
    lwz r0, 0x38(r19)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803AF83C_00001970
    lwz r4, 0x4(r26)
    addi r6, r23, 0x80
    lwz r3, 0x144(r20)
    lwzx r0, r4, r17
    lwz r5, 0x80(r23)
    slwi r0, r0, 2
    lwzx r4, r3, r0
    b lbl_fn_803AF83C_0000184C
lbl_fn_803AF83C_00001830:
    lwz r0, 0xc(r5)
    cmpw r0, r4
    blt lbl_fn_803AF83C_00001848
    mr r6, r5
    lwz r5, 0x0(r5)
    b lbl_fn_803AF83C_0000184C
lbl_fn_803AF83C_00001848:
    lwz r5, 0x4(r5)
lbl_fn_803AF83C_0000184C:
    cmpwi r5, 0x0
    bne lbl_fn_803AF83C_00001830
    addi r0, r23, 0x80
    cmplw r6, r0
    beq lbl_fn_803AF83C_0000186C
    lwz r0, 0xc(r6)
    cmpw r4, r0
    bge lbl_fn_803AF83C_00001870
lbl_fn_803AF83C_0000186C:
    addi r6, r23, 0x80
lbl_fn_803AF83C_00001870:
    addi r0, r23, 0x80
    cmplw r6, r0
    beq lbl_fn_803AF83C_000018A8
    subi r3, r14, 0x7453
    lwz r0, 0x10(r6)
    mulhw r3, r3, r4
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r23, r3
    lwz r3, 0x64(r3)
    add r20, r3, r0
    b lbl_fn_803AF83C_000018AC
lbl_fn_803AF83C_000018A8:
    li r20, 0x0
lbl_fn_803AF83C_000018AC:
    cmpwi r20, 0x0
    beq lbl_fn_803AF83C_00001970
    lwz r0, 0xc(r20)
    cmpwi r0, 0x7
    bne lbl_fn_803AF83C_00001970
    lwz r3, lbl_8087F430
    lwz r0, 0x868(r3)
    cmpwi r0, 0x3
    beq lbl_fn_803AF83C_000018E0
    cmpwi r0, 0x1
    beq lbl_fn_803AF83C_000018E0
    cmpwi r0, 0x4
    bne lbl_fn_803AF83C_00001904
lbl_fn_803AF83C_000018E0:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803AF83C_000018FC
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    bgt lbl_fn_803AF83C_00001904
lbl_fn_803AF83C_000018FC:
    li r0, 0x1
    b lbl_fn_803AF83C_00001908
lbl_fn_803AF83C_00001904:
    li r0, 0x0
lbl_fn_803AF83C_00001908:
    cmpwi r0, 0x0
    beq lbl_fn_803AF83C_00001970
    lfs f1, lbl_80885B2C
    mr r3, r23
    mr r4, r19
    addi r5, r1, 0x188
    li r6, 0x1
    bl fn_803AC3D8
    cmpwi r3, 0x0
    beq lbl_fn_803AF83C_00001964
    lwz r0, 0x220(r1)
    addi r4, r1, 0x224
    lwz r3, 0x0(r20)
    slwi r0, r0, 3
    stw r3, 0x20(r1)
    add. r4, r4, r0
    stw r19, 0x24(r1)
    beq lbl_fn_803AF83C_00001958
    stw r3, 0x0(r4)
    stw r19, 0x4(r4)
lbl_fn_803AF83C_00001958:
    lwz r3, 0x220(r1)
    addi r0, r3, 0x1
    stw r0, 0x220(r1)
lbl_fn_803AF83C_00001964:
    lwz r0, 0x220(r1)
    cmplwi r0, 0x8
    bge lbl_fn_803AF83C_00001988
lbl_fn_803AF83C_00001970:
    addi r15, r15, 0x148
    addi r17, r17, 0xc
    addi r18, r18, 0x1
lbl_fn_803AF83C_0000197C:
    lwz r0, 0x0(r25)
    cmplw r18, r0
    blt lbl_fn_803AF83C_000017A4
lbl_fn_803AF83C_00001988:
    lwz r0, 0x220(r1)
    lwz r3, 0x220(r1)
    cmpwi r0, 0x0
    beq lbl_fn_803AF83C_00001A2C
    cmplwi r0, 0x1
    ble lbl_fn_803AF83C_00001A24
    cmpwi r3, 0x0
    lwz r15, lbl_8087F430
    lfs f22, lbl_80885BF8
    li r17, 0x0
    beq lbl_fn_803AF83C_00001A2C
    addi r14, r1, 0x220
    b lbl_fn_803AF83C_00001A14
lbl_fn_803AF83C_000019BC:
    lwz r4, 0x8(r14)
    addi r3, r1, 0xbc
    lfs f7, 0x7c(r15)
    lfs f0, 0x530(r4)
    lfs f9, 0x78(r15)
    fsubs f10, f7, f0
    lfs f8, 0x52c(r4)
    lfs f7, 0x74(r15)
    lfs f0, 0x528(r4)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0xc0(r1)
    stfs f0, 0xbc(r1)
    stfs f10, 0xc4(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f22
    bge lbl_fn_803AF83C_00001A0C
    lwz r0, 0x4(r14)
    fmr f22, f1
    stw r0, 0xf8(r23)
lbl_fn_803AF83C_00001A0C:
    addi r14, r14, 0x8
    addi r17, r17, 0x1
lbl_fn_803AF83C_00001A14:
    lwz r0, 0x220(r1)
    cmplw r17, r0
    blt lbl_fn_803AF83C_000019BC
    b lbl_fn_803AF83C_00001A2C
lbl_fn_803AF83C_00001A24:
    lwz r0, 0x224(r1)
    stw r0, 0xf8(r23)
lbl_fn_803AF83C_00001A2C:
    lis r14, lbl_8074EEE0@ha
    lfs f24, lbl_80885B24
    lfs f25, lbl_80885B78
    addi r18, r1, 0x1f0
    lfs f26, lbl_80885B10
    addi r17, r1, 0x12c
    lfs f28, lbl_80885B34
    addi r14, r14, lbl_8074EEE0@l
    lfs f27, lbl_80885B38
    li r31, 0x0
    lfs f31, lbl_80885B28
    li r22, 0x0
    lfs f29, lbl_80885B20
    li r21, 0x0
    li r19, 0x1
    b lbl_fn_803AF83C_000025C0
lbl_fn_803AF83C_00001A6C:
    lwz r0, 0x4(r25)
    li r30, 0x0
    add r15, r0, r22
    lwzx r0, r22, r0
    stw r0, 0xa0(r23)
    lwz r3, 0x4(r26)
    lwzx r0, r3, r21
    cmpwi r0, 0x0
    blt lbl_fn_803AF83C_000025AC
    stw r0, 0xa4(r23)
    mr r3, r24
    bl fn_8036554C
    mr r28, r3
    b lbl_fn_803AF83C_00001AB8
lbl_fn_803AF83C_00001AA4:
    lwz r3, 0x0(r15)
    lwz r0, 0x58(r28)
    cmpw r3, r0
    beq lbl_fn_803AF83C_00001AC0
    lwz r28, 0x14ac(r28)
lbl_fn_803AF83C_00001AB8:
    cmpwi r28, 0x0
    bne lbl_fn_803AF83C_00001AA4
lbl_fn_803AF83C_00001AC0:
    cmpwi r28, 0x0
    bne lbl_fn_803AF83C_00001AE0
    lwz r0, 0x4(r26)
    add r3, r0, r21
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x4(r3)
    b lbl_fn_803AF83C_000025B4
lbl_fn_803AF83C_00001AE0:
    mr r3, r28
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_803AF83C_000025AC
    lwz r0, 0x38(r28)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803AF83C_000025AC
    lwz r4, 0x4(r26)
    addi r6, r23, 0x80
    lwz r3, 0x144(r15)
    lwzx r0, r4, r21
    lwz r5, 0x80(r23)
    slwi r0, r0, 2
    lwzx r4, r3, r0
    b lbl_fn_803AF83C_00001B3C
lbl_fn_803AF83C_00001B20:
    lwz r0, 0xc(r5)
    cmpw r0, r4
    blt lbl_fn_803AF83C_00001B38
    mr r6, r5
    lwz r5, 0x0(r5)
    b lbl_fn_803AF83C_00001B3C
lbl_fn_803AF83C_00001B38:
    lwz r5, 0x4(r5)
lbl_fn_803AF83C_00001B3C:
    cmpwi r5, 0x0
    bne lbl_fn_803AF83C_00001B20
    addi r0, r23, 0x80
    cmplw r6, r0
    beq lbl_fn_803AF83C_00001B5C
    lwz r0, 0xc(r6)
    cmpw r4, r0
    bge lbl_fn_803AF83C_00001B60
lbl_fn_803AF83C_00001B5C:
    addi r6, r23, 0x80
lbl_fn_803AF83C_00001B60:
    addi r0, r23, 0x80
    cmplw r6, r0
    beq lbl_fn_803AF83C_00001B9C
    lis r3, 0x68dc
    lwz r0, 0x10(r6)
    subi r3, r3, 0x7453
    mulhw r3, r3, r4
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r23, r3
    lwz r3, 0x64(r3)
    add r29, r3, r0
    b lbl_fn_803AF83C_00001BA0
lbl_fn_803AF83C_00001B9C:
    li r29, 0x0
lbl_fn_803AF83C_00001BA0:
    cmpwi r29, 0x0
    beq lbl_fn_803AF83C_0000259C
    lfs f7, 0x530(r28)
    addi r3, r1, 0x104
    lfs f0, 0x530(r16)
    lfs f9, 0x52c(r28)
    fsubs f10, f7, f0
    lfs f8, 0x52c(r16)
    lfs f7, 0x528(r28)
    lfs f0, 0x528(r16)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x108(r1)
    stfs f0, 0x104(r1)
    stfs f10, 0x10c(r1)
    bl fn_805F9920
    fabs f0, f1
    fmr f22, f1
    frsp f0, f0
    fcmpo cr0, f0, f24
    blt lbl_fn_803AF83C_00001C00
    addi r3, r1, 0x104
    mr r4, r3
    bl fn_805F98D0
lbl_fn_803AF83C_00001C00:
    lwz r0, 0xc(r29)
    li r27, 0x0
    cmplwi r0, 0x8
    bgt lbl_fn_803AF83C_000024E0
    lis r3, jumptable_8078B1F0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8078B1F0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r0, 0x4(r26)
    add r3, r0, r21
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_803AF83C_000024E0
    lwz r0, 0xf4(r23)
    cmplw r0, r3
    bne lbl_fn_803AF83C_000024E0
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_803AF83C_00001C64
    lwz r0, 0x560(r28)
    cmpwi r0, 0x44
    beq lbl_fn_803AF83C_000024E0
lbl_fn_803AF83C_00001C64:
    lwz r4, 0xc4(r29)
    li r0, 0x6
    stw r19, 0x1b4(r1)
    cmplwi r4, 0xb
    stw r0, 0x1a0(r1)
    bgt lbl_fn_803AF83C_00001D14
    lis r3, jumptable_8078B1C0@ha
    slwi r0, r4, 2
    addi r3, r3, jumptable_8078B1C0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    stw r19, 0x1a4(r1)
    b lbl_fn_803AF83C_00001D1C
    li r0, 0x6
    stw r0, 0x1a4(r1)
    b lbl_fn_803AF83C_00001D1C
    li r0, 0x7
    stw r0, 0x1a4(r1)
    b lbl_fn_803AF83C_00001D1C
    li r0, 0x8
    stw r0, 0x1a4(r1)
    b lbl_fn_803AF83C_00001D1C
    li r0, 0x9
    stw r0, 0x1a4(r1)
    b lbl_fn_803AF83C_00001D1C
    li r0, 0x2
    stw r0, 0x1a4(r1)
    b lbl_fn_803AF83C_00001D1C
    li r0, 0xa
    stw r0, 0x1a4(r1)
    b lbl_fn_803AF83C_00001D1C
    li r0, 0xb
    stw r0, 0x1a4(r1)
    b lbl_fn_803AF83C_00001D1C
    li r0, 0x12
    stw r0, 0x1a4(r1)
    b lbl_fn_803AF83C_00001D1C
    li r0, 0x15
    stw r0, 0x1a4(r1)
    b lbl_fn_803AF83C_00001D1C
    li r0, 0x16
    stw r0, 0x1a4(r1)
    b lbl_fn_803AF83C_00001D1C
lbl_fn_803AF83C_00001D14:
    li r0, 0x2
    stw r0, 0x1a4(r1)
lbl_fn_803AF83C_00001D1C:
    lwz r3, lbl_8087F490
    li r20, 0x1
    lwz r0, 0x1a0(r1)
    stw r0, 0x764(r3)
    lwz r0, 0x1a4(r1)
    stw r0, 0x768(r3)
    lwz r0, 0x1a8(r1)
    stw r0, 0x76c(r3)
    lwz r0, 0x1ac(r1)
    stw r0, 0x770(r3)
    lwz r0, 0x1b0(r1)
    stw r0, 0x774(r3)
    lwz r0, 0x1b4(r1)
    stw r0, 0x778(r3)
    lwz r0, 0x1b8(r1)
    stw r0, 0x77c(r3)
    lwz r0, 0xe0(r23)
    cmpwi r0, 0x0
    bgt lbl_fn_803AF83C_00001D98
    lwz r3, lbl_8087F430
    li r15, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_803AF83C_00001D8C
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_803AF83C_00001D8C
    li r15, 0x1
lbl_fn_803AF83C_00001D8C:
    cmpwi r15, 0x0
    bne lbl_fn_803AF83C_00001D98
    li r20, 0x0
lbl_fn_803AF83C_00001D98:
    cmpwi r20, 0x0
    beq lbl_fn_803AF83C_00001DA8
    li r3, 0x0
    b lbl_fn_803AF83C_00001DB8
lbl_fn_803AF83C_00001DA8:
    lwz r3, lbl_8087F0A8
    li r4, 0x0
    addi r3, r3, 0x48c
    bl fn_801231D0
lbl_fn_803AF83C_00001DB8:
    cmpwi r3, 0x0
    beq lbl_fn_803AF83C_000024E0
    li r0, 0x24
    stw r0, 0xe0(r23)
    li r27, 0x1
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_803AF83C_000024E0
    bl fn_803E3384
    b lbl_fn_803AF83C_000024E0
    fcmpo cr0, f22, f25
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_803AF83C_00001E1C
    lwz r0, 0x4(r26)
    add r3, r0, r21
    lwz r0, 0x4(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_803AF83C_00001E0C
    li r27, 0x1
lbl_fn_803AF83C_00001E0C:
    lwz r0, 0x4(r3)
    ori r0, r0, 0x1
    stw r0, 0x4(r3)
    b lbl_fn_803AF83C_000024E0
lbl_fn_803AF83C_00001E1C:
    lwz r0, 0x4(r26)
    add r3, r0, r21
    lwz r0, 0x4(r3)
    clrrwi r0, r0, 1
    stw r0, 0x4(r3)
    b lbl_fn_803AF83C_000024E0
    fcmpo cr0, f22, f25
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_803AF83C_00001E5C
    lwz r0, 0x4(r26)
    add r3, r0, r21
    lwz r0, 0x4(r3)
    ori r0, r0, 0x8
    stw r0, 0x4(r3)
    b lbl_fn_803AF83C_000024E0
lbl_fn_803AF83C_00001E5C:
    lwz r0, 0x4(r26)
    add r3, r0, r21
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_803AF83C_00001E78
    li r27, 0x1
lbl_fn_803AF83C_00001E78:
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x4(r3)
    b lbl_fn_803AF83C_000024E0
    fcmpo cr0, f22, f25
    mfcr r0
    srwi. r0, r0, 31
    bne lbl_fn_803AF83C_000024E0
    li r27, 0x1
    b lbl_fn_803AF83C_000024E0
    li r27, 0x1
    b lbl_fn_803AF83C_000024E0
    lwz r3, lbl_8087F430
    lwz r0, 0x868(r3)
    cmpwi r0, 0x3
    beq lbl_fn_803AF83C_00001EC8
    cmpwi r0, 0x1
    beq lbl_fn_803AF83C_00001EC8
    cmpwi r0, 0x4
    bne lbl_fn_803AF83C_00001EEC
lbl_fn_803AF83C_00001EC8:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803AF83C_00001EE4
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    bgt lbl_fn_803AF83C_00001EEC
lbl_fn_803AF83C_00001EE4:
    li r0, 0x1
    b lbl_fn_803AF83C_00001EF0
lbl_fn_803AF83C_00001EEC:
    li r0, 0x0
lbl_fn_803AF83C_00001EF0:
    cmpwi r0, 0x0
    beq lbl_fn_803AF83C_000024E0
    lfs f1, lbl_80885B2C
    mr r3, r23
    mr r4, r28
    addi r5, r1, 0x170
    li r6, 0x1
    bl fn_803AC3D8
    cmpwi r3, 0x0
    beq lbl_fn_803AF83C_000024E0
    li r27, 0x1
    b lbl_fn_803AF83C_000024E0
    lwz r3, 0x0(r29)
    lwz r0, 0xf8(r23)
    cmpw r0, r3
    bne lbl_fn_803AF83C_000024E0
    lwz r0, 0xd4(r23)
    cmpw r0, r3
    beq lbl_fn_803AF83C_00001F44
    li r0, 0x0
    stw r0, 0xd8(r23)
lbl_fn_803AF83C_00001F44:
    lwz r3, 0xd8(r23)
    li r4, 0x121
    lwz r0, 0x0(r29)
    stw r0, 0xd4(r23)
    addi r0, r3, 0x1
    stw r0, 0xd8(r23)
    lwz r3, lbl_8087F430
    bl fn_80370174
    slwi r0, r3, 2
    lwz r3, 0xd8(r23)
    lwzx r0, r14, r0
    cmpw r3, r0
    ble lbl_fn_803AF83C_000024E0
    li r0, 0x0
    stw r0, 0xd8(r23)
    lfs f1, lbl_80885B30
    addi r3, r1, 0x14
    li r27, 0x1
    li r4, 0x5
    bl fn_803935FC
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803AF83C_000024E0
    lwz r3, lbl_8087F430
    lwz r0, 0x868(r3)
    addi r15, r3, 0x6c
    cmpwi r0, 0x3
    beq lbl_fn_803AF83C_00001FC8
    cmpwi r0, 0x1
    beq lbl_fn_803AF83C_00001FC8
    cmpwi r0, 0x4
    bne lbl_fn_803AF83C_00001FEC
lbl_fn_803AF83C_00001FC8:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803AF83C_00001FE4
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    bgt lbl_fn_803AF83C_00001FEC
lbl_fn_803AF83C_00001FE4:
    li r0, 0x1
    b lbl_fn_803AF83C_00001FF0
lbl_fn_803AF83C_00001FEC:
    li r0, 0x0
lbl_fn_803AF83C_00001FF0:
    cmpwi r0, 0x0
    beq lbl_fn_803AF83C_000024E0
    lfs f1, lbl_80885B20
    mr r3, r23
    mr r4, r28
    addi r5, r1, 0x158
    li r6, 0x1
    bl fn_803AC3D8
    mr r20, r3
    psq_l f1, 0x5f4(r28), 0, 0
    addi r3, r1, 0x138
    lfs f2, 0x5fc(r28)
    psq_st f1, 0x0(r3), 0, 0
    addi r4, r1, 0x138
    psq_l f1, 0x600(r28), 0, 0
    addi r3, r1, 0x44
    psq_st f1, 0xc(r4), 0, 0
    lfs f0, 0x10(r15)
    stfs f2, 0x140(r1)
    lfs f2, 0x608(r28)
    lfs f10, 0x60c(r28)
    fsubs f11, f2, f0
    lfs f9, 0x148(r1)
    lfs f8, 0xc(r15)
    lfs f0, 0x8(r15)
    lfs f7, 0x144(r1)
    fsubs f8, f9, f8
    stfs f2, 0x14c(r1)
    fsubs f0, f7, f0
    stfs f10, 0x150(r1)
    stfs f0, 0x44(r1)
    stfs f8, 0x48(r1)
    stfs f11, 0x4c(r1)
    bl fn_805F9940
    lfs f0, 0x150(r1)
    addi r4, r1, 0xf8
    stfs f26, 0x100(r1)
    fmr f22, f1
    fneg f7, f0
    mr r3, r18
    stfs f0, 0xec(r1)
    mr r5, r4
    stfs f7, 0xf8(r1)
    stfs f7, 0xfc(r1)
    stfs f0, 0xf0(r1)
    stfs f26, 0xf4(r1)
    psq_l f1, 0xd0(r15), 0, 0
    psq_l f2, 0xd8(r15), 0, 0
    psq_l f3, 0xe0(r15), 0, 0
    psq_l f4, 0xe8(r15), 0, 0
    psq_l f5, 0xf0(r15), 0, 0
    psq_l f6, 0xf8(r15), 0, 0
    psq_st f6, 0x28(r18), 0, 0
    psq_st f2, 0x8(r18), 0, 0
    psq_st f4, 0x18(r18), 0, 0
    psq_st f1, 0x0(r18), 0, 0
    psq_st f3, 0x10(r18), 0, 0
    psq_st f5, 0x20(r18), 0, 0
    stfs f26, 0x1fc(r1)
    stfs f26, 0x20c(r1)
    stfs f26, 0x21c(r1)
    bl fn_805F93C0
    addi r4, r1, 0xec
    mr r3, r18
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x140(r1)
    addi r3, r1, 0xb0
    lfs f0, 0x100(r1)
    addi r5, r1, 0xe0
    lfs f9, 0x13c(r1)
    fadds f10, f7, f0
    lfs f8, 0xfc(r1)
    lfs f7, 0x138(r1)
    lfs f0, 0xf8(r1)
    fadds f8, f9, f8
    stfs f10, 0xe8(r1)
    fadds f0, f7, f0
    lwz r4, lbl_8087EFB4
    stfs f8, 0xe4(r1)
    stfs f0, 0xe0(r1)
    bl fn_800BFAC8
    lfs f9, 0x14c(r1)
    addi r4, r1, 0xb0
    lfs f8, 0xf4(r1)
    addi r3, r1, 0xa4
    lfs f7, 0x148(r1)
    addi r5, r1, 0xd4
    fadds f8, f9, f8
    lfs f0, 0xf0(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r1, 0xe0
    fadds f9, f7, f0
    lfs f2, 0xb8(r1)
    psq_st f1, 0x0(r4), 0, 0
    lfs f7, 0x144(r1)
    lfs f0, 0xec(r1)
    lwz r4, lbl_8087EFB4
    fadds f0, f7, f0
    stfs f2, 0xe8(r1)
    stfs f0, 0xd4(r1)
    stfs f9, 0xd8(r1)
    stfs f8, 0xdc(r1)
    bl fn_800BFAC8
    addi r3, r1, 0xa4
    lfs f2, 0xac(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xd4
    psq_st f1, 0x0(r3), 0, 0
    cmpwi r20, 0x0
    lfs f9, 0xe4(r1)
    lfs f8, 0xd8(r1)
    lfs f7, 0xe0(r1)
    fsubs f10, f9, f8
    lfs f0, 0xd4(r1)
    fadds f8, f9, f8
    stfs f2, 0xdc(r1)
    fsubs f9, f7, f0
    fabs f10, f10
    fadds f0, f7, f0
    fabs f11, f9
    fmuls f7, f28, f8
    frsp f9, f10
    frsp f8, f11
    stfs f7, 0x34(r1)
    fmuls f7, f28, f0
    fmuls f9, f28, f9
    fmuls f8, f28, f8
    stfs f7, 0x30(r1)
    fadds f0, f9, f27
    fadds f7, f8, f27
    stfs f0, 0x2c(r1)
    stfs f7, 0x28(r1)
    beq lbl_fn_803AF83C_000022EC
    lfs f9, 0x14c(r1)
    addi r4, r1, 0x98
    lfs f8, 0xf4(r1)
    addi r5, r1, 0x8c
    lfs f7, 0x148(r1)
    fadds f11, f9, f8
    lfs f0, 0xf0(r1)
    lfs f9, 0x144(r1)
    fadds f12, f7, f0
    lfs f8, 0xec(r1)
    lfs f7, 0x140(r1)
    fadds f13, f9, f8
    lfs f0, 0x100(r1)
    lfs f9, 0x13c(r1)
    fadds f10, f7, f0
    lfs f8, 0xfc(r1)
    lfs f7, 0x138(r1)
    lfs f0, 0xf8(r1)
    fadds f8, f9, f8
    stfs f13, 0x8c(r1)
    fadds f0, f7, f0
    lwz r3, lbl_8087F490
    stfs f12, 0x90(r1)
    stfs f11, 0x94(r1)
    stfs f0, 0x98(r1)
    stfs f8, 0x9c(r1)
    stfs f10, 0xa0(r1)
    bl fn_803E6ADC
    lfs f7, 0x140(r1)
    mr r3, r15
    lfs f0, 0x14c(r1)
    addi r4, r1, 0x80
    lfs f8, 0x13c(r1)
    li r27, 0x1
    fadds f9, f7, f0
    lfs f0, 0x148(r1)
    lfs f7, 0x138(r1)
    fadds f8, f8, f0
    lfs f0, 0x144(r1)
    fmuls f10, f9, f28
    fadds f0, f7, f0
    stfs f8, 0x78(r1)
    fmuls f7, f8, f28
    stfs f0, 0x74(r1)
    fmuls f0, f0, f28
    stfs f9, 0x7c(r1)
    stfs f0, 0x80(r1)
    stfs f7, 0x84(r1)
    stfs f10, 0x88(r1)
    bl fn_8037F690
    lfs f1, lbl_80885B30
    addi r3, r1, 0x10
    li r4, 0x5
    bl fn_803935FC
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_803AF83C_000022EC:
    cmpwi r20, 0x0
    bne lbl_fn_803AF83C_000024E0
    fcmpo cr0, f22, f29
    bge lbl_fn_803AF83C_000024E0
    addi r3, r1, 0x158
    lfs f2, 0x160(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x120
    psq_st f1, 0x0(r4), 0, 0
    addi r4, r1, 0x144
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x38
    stfs f2, 0x128(r1)
    lfs f2, 0x14c(r1)
    psq_st f1, 0x0(r17), 0, 0
    lfs f0, 0x128(r1)
    lfs f9, 0x130(r1)
    fsubs f10, f2, f0
    lfs f8, 0x124(r1)
    lfs f7, 0x12c(r1)
    lfs f0, 0x120(r1)
    fsubs f8, f9, f8
    stfs f2, 0x134(r1)
    fsubs f0, f7, f0
    lfs f23, 0x150(r1)
    stfs f8, 0x3c(r1)
    stfs f0, 0x38(r1)
    stfs f10, 0x40(r1)
    bl fn_805F9940
    fabs f0, f1
    fmr f30, f1
    frsp f0, f0
    fcmpo cr0, f0, f24
    blt lbl_fn_803AF83C_000023F0
    lfs f7, 0x12c(r1)
    mr r3, r17
    lfs f0, 0x120(r1)
    mr r4, r17
    lfs f9, 0x130(r1)
    fsubs f10, f7, f0
    lfs f8, 0x124(r1)
    lfs f7, 0x134(r1)
    lfs f0, 0x128(r1)
    fsubs f8, f9, f8
    stfs f10, 0x12c(r1)
    fsubs f0, f7, f0
    stfs f8, 0x130(r1)
    stfs f0, 0x134(r1)
    bl fn_805F98D0
    fsubs f9, f30, f23
    lfs f8, 0x12c(r1)
    lfs f7, 0x130(r1)
    lfs f0, 0x134(r1)
    fmuls f11, f8, f9
    lfs f8, 0x120(r1)
    fmuls f10, f7, f9
    lfs f7, 0x124(r1)
    fmuls f9, f0, f9
    lfs f0, 0x128(r1)
    fadds f8, f11, f8
    fadds f7, f10, f7
    fadds f0, f9, f0
    stfs f8, 0x12c(r1)
    stfs f7, 0x130(r1)
    stfs f0, 0x134(r1)
lbl_fn_803AF83C_000023F0:
    fmuls f0, f31, f23
    fcmpo cr0, f30, f0
    ble lbl_fn_803AF83C_00002430
    lis r4, 0x8000
    lwz r3, lbl_8087EE98
    addi r7, r4, 0x10
    addi r5, r1, 0x120
    addi r6, r1, 0x12c
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ECC0
    cmpwi r3, 0x0
    bne lbl_fn_803AF83C_00002430
    li r0, 0x1
    b lbl_fn_803AF83C_00002434
lbl_fn_803AF83C_00002430:
    li r0, 0x0
lbl_fn_803AF83C_00002434:
    cmpwi r0, 0x0
    bne lbl_fn_803AF83C_00002458
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803AF83C_000024E0
    li r4, 0xce
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_803AF83C_000024E0
lbl_fn_803AF83C_00002458:
    lfs f7, 0x140(r1)
    addi r7, r1, 0xc8
    lfs f0, 0x14c(r1)
    addi r5, r1, 0x50
    lfs f8, 0x13c(r1)
    addi r4, r1, 0x68
    fadds f11, f7, f0
    lfs f0, 0x148(r1)
    lfs f7, 0x138(r1)
    addi r6, r1, 0x28
    fadds f8, f8, f0
    lfs f0, 0x144(r1)
    fadds f0, f7, f0
    lfs f10, 0x34(r1)
    lfs f9, 0x30(r1)
    fmuls f12, f11, f28
    stfs f9, 0xc8(r1)
    fmuls f7, f8, f28
    lfs f2, 0xe8(r1)
    fmuls f9, f0, f28
    stfs f10, 0xcc(r1)
    lwz r3, lbl_8087F490
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f22
    stfs f2, 0xd0(r1)
    stfs f2, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f11, 0x64(r1)
    stfs f9, 0x68(r1)
    stfs f7, 0x6c(r1)
    stfs f12, 0x70(r1)
    bl fn_803E3050
lbl_fn_803AF83C_000024E0:
    cmpwi r27, 0x0
    beq lbl_fn_803AF83C_0000259C
    stw r28, 0x98(r23)
    mr r3, r29
    lwz r0, 0xb0(r29)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_803AF83C_0000257C
lbl_fn_803AF83C_00002500:
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    bge lbl_fn_803AF83C_00002574
    mr r4, r29
    addi r3, r23, 0x138
    addi r5, r1, 0xc
    addi r6, r1, 0x9
    addi r7, r1, 0x8
    bl fn_8039BC0C
    lwz r4, 0xc(r1)
    cmpwi r4, 0x0
    beq lbl_fn_803AF83C_00002540
    lwz r0, 0x0(r29)
    lwzu r5, 0xc(r4)
    cmpw r5, r0
    bge lbl_fn_803AF83C_0000256C
lbl_fn_803AF83C_00002540:
    lwz r5, 0x0(r29)
    mr r4, r3
    lbz r0, lbl_8087DD38
    addi r3, r23, 0x138
    stw r5, 0x18(r1)
    addi r7, r1, 0x18
    lbz r5, 0x9(r1)
    stb r0, 0x1c(r1)
    lbz r6, 0x8(r1)
    bl fn_803AD148
    addi r4, r3, 0xc
lbl_fn_803AF83C_0000256C:
    stb r19, 0x4(r4)
    b lbl_fn_803AF83C_0000257C
lbl_fn_803AF83C_00002574:
    addi r3, r3, 0x14
    bdnz lbl_fn_803AF83C_00002500
lbl_fn_803AF83C_0000257C:
    mr r3, r23
    mr r4, r29
    addi r5, r29, 0xd0
    bl fn_8039CF8C
    cmpwi r3, 0x0
    bne lbl_fn_803AF83C_0000259C
    stw r19, 0x8c(r23)
    li r30, 0x1
lbl_fn_803AF83C_0000259C:
    lwz r0, 0x8c(r23)
    cmpwi r0, 0x0
    beq lbl_fn_803AF83C_000025AC
    li r30, 0x1
lbl_fn_803AF83C_000025AC:
    cmpwi r30, 0x0
    bne lbl_fn_803AF83C_000025CC
lbl_fn_803AF83C_000025B4:
    addi r31, r31, 0x1
    addi r22, r22, 0x148
    addi r21, r21, 0xc
lbl_fn_803AF83C_000025C0:
    lwz r0, 0x0(r25)
    cmplw r31, r0
    blt lbl_fn_803AF83C_00001A6C
lbl_fn_803AF83C_000025CC:
    addi r11, r1, 0x2b0
    psq_l f31, 0x348(r1), 0, 0
    lfd f31, 0x340(r1)
    psq_l f30, 0x338(r1), 0, 0
    lfd f30, 0x330(r1)
    psq_l f29, 0x328(r1), 0, 0
    lfd f29, 0x320(r1)
    psq_l f28, 0x318(r1), 0, 0
    lfd f28, 0x310(r1)
    psq_l f27, 0x308(r1), 0, 0
    lfd f27, 0x300(r1)
    psq_l f26, 0x2f8(r1), 0, 0
    lfd f26, 0x2f0(r1)
    psq_l f25, 0x2e8(r1), 0, 0
    lfd f25, 0x2e0(r1)
    psq_l f24, 0x2d8(r1), 0, 0
    lfd f24, 0x2d0(r1)
    psq_l f23, 0x2c8(r1), 0, 0
    lfd f23, 0x2c0(r1)
    psq_l f22, 0x2b8(r1), 0, 0
    lfd f22, 0x2b0(r1)
    bl _restgpr_14
    lwz r0, 0x354(r1)
    mtlr r0
    addi r1, r1, 0x350
    blr
}
