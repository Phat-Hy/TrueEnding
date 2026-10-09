#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSCancelAlarm(void);
extern void OSGetAlarmUserData(void);
extern void OSSetAlarm(void);
extern void _restgpr_14(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_27(void);
extern void fn_805C0120(void);
extern void fn_805C20A0(void);
extern void fn_805C2250(void);
extern void fn_805C2270(void);
extern void fn_805C2290(void);
extern void fn_805C22A0(void);
extern void fn_805C22B0(void);
extern void fn_805C22C0(void);
extern void fn_805C2610(void);
extern void fn_805C2620(void);
extern void fn_805C2630(void);
extern void fn_805C26A0(void);
extern void fn_805C26D0(void);
extern void fn_805C27B0(void);
extern void fn_805C27E0(void);
extern void fn_805C3570(void);
extern void fn_805C3FE0(void);
extern void fn_805CF4C0(void);
extern void fn_805D7DD0(void);
extern void fn_805EC870(void);
extern void fn_80614790(void);
extern void fn_80616840(void);
extern void fn_806168C0(void);
extern void fn_80617520(void);
extern void fn_80617A10(void);
extern void fn_8065F500(void);
extern void fn_8065F510(void);
extern void fn_80660CF0(void);
extern void fn_80661B10(void);

/* External data declarations */
extern u8 lbl_80764198[];
extern u8 lbl_80764200[];
extern u8 lbl_807980D8[];
extern u8 lbl_80798A70[];
extern u8 lbl_80798BC8[];
extern u8 lbl_80798C4C[];
extern u8 lbl_807CA148[];
extern u8 lbl_807CA168[];

/* Small data declarations */

/* Function declarations */
void fn_805C7A10(void);
void fn_805C7C20(void);
void fn_805C7EC0(void);
void fn_805C7FB0(void);
void fn_805C7FE0(void);
void fn_805C80B0(void);
void fn_805C80F0(void);
void fn_805C8A30(void);
void fn_805C9310(void);

asm void fn_805C7A10(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mulli r7, r4, 0x18
    lis r6, lbl_80798BC8@ha
    lis r5, lbl_807CA168@ha
    slwi r0, r4, 4
    addi r6, r6, lbl_80798BC8@l
    addi r5, r5, lbl_807CA168@l
    mr r30, r3
    mr r31, r4
    add r29, r6, r0
    add r28, r5, r7
    li r27, 0x0
lbl_fn_805C7A10_00000040:
    lbz r0, 0x14(r28)
    cmpw r27, r0
    bge lbl_fn_805C7A10_00000080
    lwz r3, 0x1d8(r30)
    li r5, 0x1
    lwz r4, 0x0(r29)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    ori r0, r0, 0x1
    stb r0, 0xcf(r3)
    b lbl_fn_805C7A10_000000AC
lbl_fn_805C7A10_00000080:
    lwz r3, 0x1d8(r30)
    li r5, 0x1
    lwz r4, 0x0(r29)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
lbl_fn_805C7A10_000000AC:
    addi r27, r27, 0x1
    addi r29, r29, 0x4
    cmpwi r27, 0x4
    blt lbl_fn_805C7A10_00000040
    lbz r0, 0x14(r28)
    cmplwi r0, 0x2
    bge lbl_fn_805C7A10_0000014C
    lis r5, lbl_80764200@ha
    li r0, 0x25
    addi r5, r5, lbl_80764200@l
    addi r3, r31, 0x1f
    li r4, 0x0
    mtctr r0
lbl_fn_805C7A10_000000E0:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_fn_805C7A10_000000FC
    lwz r0, 0x4(r5)
    cmpwi r0, 0x15
    bne lbl_fn_805C7A10_000000FC
    b lbl_fn_805C7A10_0000012C
lbl_fn_805C7A10_000000FC:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_fn_805C7A10_0000011C
    lwz r0, 0xc(r5)
    cmpwi r0, 0x15
    bne lbl_fn_805C7A10_0000011C
    b lbl_fn_805C7A10_0000012C
lbl_fn_805C7A10_0000011C:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_805C7A10_000000E0
    li r4, -0x1
lbl_fn_805C7A10_0000012C:
    slwi r0, r4, 2
    add r3, r30, r0
    lwz r29, 0x290(r3)
    mr r3, r29
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r29)
    b lbl_fn_805C7A10_000001D0
lbl_fn_805C7A10_0000014C:
    lis r5, lbl_80764200@ha
    li r0, 0x25
    addi r5, r5, lbl_80764200@l
    addi r3, r31, 0x1f
    li r4, 0x0
    mtctr r0
    nop
lbl_fn_805C7A10_00000168:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_fn_805C7A10_00000184
    lwz r0, 0x4(r5)
    cmpwi r0, 0x11
    bne lbl_fn_805C7A10_00000184
    b lbl_fn_805C7A10_000001B4
lbl_fn_805C7A10_00000184:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_fn_805C7A10_000001A4
    lwz r0, 0xc(r5)
    cmpwi r0, 0x11
    bne lbl_fn_805C7A10_000001A4
    b lbl_fn_805C7A10_000001B4
lbl_fn_805C7A10_000001A4:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_805C7A10_00000168
    li r4, -0x1
lbl_fn_805C7A10_000001B4:
    slwi r0, r4, 2
    add r3, r30, r0
    lwz r29, 0x290(r3)
    mr r3, r29
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r29)
lbl_fn_805C7A10_000001D0:
    lwz r0, 0x7c(r30)
    cmpwi r0, 0x64
    bge lbl_fn_805C7A10_000001E4
    li r0, 0x0
    stw r0, 0x7c(r30)
lbl_fn_805C7A10_000001E4:
    slwi r0, r31, 2
    add r3, r30, r0
    lwz r3, 0x24c(r3)
    bl fn_805C27E0
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C7C20(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r4, r1, 0x1c
    stw r31, 0x2c(r1)
    lis r31, lbl_80764198@ha
    addi r31, r31, lbl_80764198@l
    stw r30, 0x28(r1)
    mr r30, r3
    lfs f1, 0x2e4(r31)
    li r3, 0x0
    stw r29, 0x24(r1)
    lwz r0, 0x330(r31)
    fmr f2, f1
    stw r28, 0x20(r1)
    fmr f3, f1
    fmr f4, f1
    stw r0, 0x1c(r1)
    bl fn_80617A10
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_80616840
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806168C0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_80616840
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_806168C0
    bl fn_805C3FE0
    lwz r0, 0x334(r31)
    addi r4, r1, 0x18
    stw r0, 0x18(r1)
    li r3, 0x1
    bl fn_80617520
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl fn_80614790
    lis r29, 0xcc01
    lfs f0, 0x33c(r31)
    stfs f0, -0x8000(r29)
    addi r4, r1, 0x14
    lfs f0, 0x340(r31)
    li r3, 0x1
    stfs f0, -0x8000(r29)
    lfs f0, 0x33c(r31)
    stfs f0, -0x8000(r29)
    lfs f0, 0x344(r31)
    stfs f0, -0x8000(r29)
    lfs f0, 0x344(r31)
    stfs f0, -0x8000(r29)
    lfs f0, 0x344(r31)
    stfs f0, -0x8000(r29)
    lfs f0, 0x344(r31)
    stfs f0, -0x8000(r29)
    lfs f0, 0x340(r31)
    stfs f0, -0x8000(r29)
    lwz r0, 0x338(r31)
    stw r0, 0x14(r1)
    bl fn_80617520
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl fn_80614790
    lfs f0, 0x33c(r31)
    stfs f0, -0x8000(r29)
    lfs f0, 0x33c(r31)
    stfs f0, -0x8000(r29)
    lfs f0, 0x33c(r31)
    stfs f0, -0x8000(r29)
    lfs f0, 0x348(r31)
    stfs f0, -0x8000(r29)
    lfs f0, 0x344(r31)
    stfs f0, -0x8000(r29)
    lfs f0, 0x348(r31)
    stfs f0, -0x8000(r29)
    lfs f0, 0x344(r31)
    stfs f0, -0x8000(r29)
    lfs f0, 0x33c(r31)
    stfs f0, -0x8000(r29)
    bl fn_805C3FE0
    lwz r3, 0x1d8(r30)
    addi r4, r30, 0x1f8
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    lwz r3, 0x4(r30)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805C7C20_000003CC
    addi r29, r30, 0xc
    li r28, 0x3
lbl_fn_805C7C20_000003A8:
    lwz r3, 0x1dc(r29)
    addi r4, r30, 0x1f8
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    subic. r28, r28, 0x1
    subi r29, r29, 0x4
    bge lbl_fn_805C7C20_000003A8
lbl_fn_805C7C20_000003CC:
    lwz r4, 0x3f4(r30)
    lwz r0, 0x3f8(r30)
    slwi r3, r4, 8
    subf r3, r4, r3
    divw r0, r3, r0
    clrlwi r29, r0, 24
    bl fn_805C3FE0
    lbz r0, 0x400(r30)
    cmpwi r0, 0x0
    beq lbl_fn_805C7C20_00000418
    lbz r4, 0x401(r30)
    lbz r3, 0x402(r30)
    lbz r0, 0x403(r30)
    stb r4, 0x8(r1)
    stb r3, 0x9(r1)
    stb r0, 0xa(r1)
    stb r29, 0xb(r1)
    lwz r0, 0x8(r1)
    b lbl_fn_805C7C20_00000428
lbl_fn_805C7C20_00000418:
    li r0, 0x0
    stw r0, 0xc(r1)
    stb r29, 0xf(r1)
    lwz r0, 0xc(r1)
lbl_fn_805C7C20_00000428:
    stw r0, 0x10(r1)
    addi r4, r1, 0x10
    li r3, 0x1
    bl fn_80617520
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl fn_80614790
    lis r3, 0xcc01
    lfs f0, 0x2f8(r31)
    stfs f0, -0x8000(r3)
    lfs f0, 0x2f8(r31)
    stfs f0, -0x8000(r3)
    lfs f0, 0x2f8(r31)
    stfs f0, -0x8000(r3)
    lfs f0, 0x34c(r31)
    stfs f0, -0x8000(r3)
    lfs f0, 0x34c(r31)
    stfs f0, -0x8000(r3)
    lfs f0, 0x34c(r31)
    stfs f0, -0x8000(r3)
    lfs f0, 0x34c(r31)
    stfs f0, -0x8000(r3)
    lfs f0, 0x2f8(r31)
    stfs f0, -0x8000(r3)
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805C7EC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    bl OSGetAlarmUserData
    lis r4, lbl_807CA148@ha
    srwi r29, r3, 16
    lwz r30, lbl_807CA148@l(r4)
    clrlwi r28, r3, 16
    mr r3, r29
    bl fn_80661B10
    cmpwi r3, 0x0
    beq lbl_fn_805C7EC0_00000508
    slwi r0, r29, 2
    add r31, r30, r0
    lwz r3, 0x24c(r31)
    bl fn_805C2610
    cmpwi r3, 0x0
    bne lbl_fn_805C7EC0_00000568
lbl_fn_805C7EC0_00000508:
    mulli r4, r29, 0x30
    slwi r3, r29, 16
    addi r0, r29, 0x2
    add r5, r30, r4
    addi r30, r5, 0x4c8
    or r4, r3, r0
    mr r3, r30
    bl fn_805EC870
    mr r3, r30
    bl OSCancelAlarm
    lis r4, 0x8000
    lis r7, fn_805C7EC0@ha
    lwz r0, 0xf8(r4)
    lis r3, 0x1062
    addi r4, r3, 0x4dd3
    addi r7, r7, fn_805C7EC0@l
    srwi r0, r0, 2
    mr r3, r30
    mulhwu r0, r4, r0
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x32
    bl OSSetAlarm
    b lbl_fn_805C7EC0_00000574
lbl_fn_805C7EC0_00000568:
    lwz r3, 0x24c(r31)
    mr r4, r28
    bl fn_805C22C0
lbl_fn_805C7EC0_00000574:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C7FB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl OSGetAlarmUserData
    bl fn_805C26A0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C7FE0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807CA148@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r31, lbl_807CA148@l(r4)
    bl OSGetAlarmUserData
    cmpwi r3, 0x0
    mr r30, r3
    li r29, 0x0
    bne lbl_fn_805C7FE0_00000620
    bl fn_8065F500
    cmpwi r3, 0x0
    beq lbl_fn_805C7FE0_00000630
    li r0, 0x1
    stb r0, 0x91(r31)
    li r29, 0x1
    b lbl_fn_805C7FE0_00000630
lbl_fn_805C7FE0_00000620:
    bl fn_8065F510
    cmpwi r3, 0x0
    beq lbl_fn_805C7FE0_00000630
    li r29, 0x1
lbl_fn_805C7FE0_00000630:
    cmpwi r29, 0x0
    bne lbl_fn_805C7FE0_00000680
    addi r3, r31, 0x588
    bl OSCancelAlarm
    mr r4, r30
    addi r3, r31, 0x588
    bl fn_805EC870
    lis r4, 0x8000
    lis r7, fn_805C7FE0@ha
    lwz r0, 0xf8(r4)
    lis r3, 0x1062
    addi r4, r3, 0x4dd3
    addi r7, r7, fn_805C7FE0@l
    srwi r0, r0, 2
    addi r3, r31, 0x588
    mulhwu r0, r4, r0
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x64
    bl OSSetAlarm
lbl_fn_805C7FE0_00000680:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C80B0(void)
{
    nofralloc
    cmpwi r3, 0x1
    bne lbl_fn_805C80B0_000006B8
    lis r5, lbl_807CA148@ha
    li r0, 0x1
    lwz r5, lbl_807CA148@l(r5)
    stb r0, 0x92(r5)
lbl_fn_805C80B0_000006B8:
    lis r5, lbl_807CA148@ha
    lwz r5, lbl_807CA148@l(r5)
    lwz r12, 0x1ac(r5)
    cmpwi r12, 0x0
    beqlr
    mtctr r12
    bctr
    blr
}

asm void fn_805C80F0(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    addi r11, r1, 0xb0
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stfd f29, 0xd0(r1)
    psq_st f29, 0xd8(r1), 0, 0
    stfd f28, 0xc0(r1)
    psq_st f28, 0xc8(r1), 0, 0
    stfd f27, 0xb0(r1)
    psq_st f27, 0xb8(r1), 0, 0
    bl _savegpr_14
    lis r28, lbl_80764198@ha
    lis r29, lbl_807980D8@ha
    addi r28, r28, lbl_80764198@l
    mr r15, r3
    lis r24, lbl_807CA168@ha
    addi r29, r29, lbl_807980D8@l
    lfs f31, 0x350(r28)
    mr r27, r4
    lfs f27, 0x31c(r28)
    mr r26, r15
    lfs f29, 0x358(r28)
    mr r25, r4
    lfs f30, 0x2e4(r28)
    addi r24, r24, lbl_807CA168@l
    lfs f28, 0x354(r28)
    addi r23, r3, 0x408
    addi r21, r3, 0x4c8
    addi r20, r29, 0xaf0
    li r17, 0x0
    li r22, 0x0
    li r30, 0x1
    li r31, 0x0
    lis r14, 0x8000
lbl_fn_805C80F0_00000778:
    lwz r6, 0x0(r27)
    cmpwi r6, 0x0
    beq lbl_fn_805C80F0_00000D74
    lbz r0, 0x5d(r6)
    extsb r5, r0
    cmpwi r5, -0x1
    beq lbl_fn_805C80F0_000008F0
    lis r3, lbl_807CA148@ha
    lwz r4, 0x58(r26)
    lwz r3, lbl_807CA148@l(r3)
    lwz r3, 0x4(r3)
    lfs f0, 0x30(r3)
    fdivs f0, f31, f0
    fadds f0, f27, f0
    fctiwz f0, f0
    stfd f0, 0x60(r1)
    lwz r0, 0x64(r1)
    cmpw r4, r0
    ble lbl_fn_805C80F0_00000870
    cmpwi r5, 0x0
    beq lbl_fn_805C80F0_000007D4
    cmpwi r5, -0x7
    bne lbl_fn_805C80F0_00000878
lbl_fn_805C80F0_000007D4:
    lwz r3, 0xc(r27)
    cmplwi r3, 0x2
    bne lbl_fn_805C80F0_000007EC
    lbz r0, 0x5c(r6)
    cmplwi r0, 0x2
    beq lbl_fn_805C80F0_0000081C
lbl_fn_805C80F0_000007EC:
    cmplwi r3, 0x7
    bne lbl_fn_805C80F0_00000800
    lbz r0, 0x5c(r6)
    cmplwi r0, 0x7
    beq lbl_fn_805C80F0_0000081C
lbl_fn_805C80F0_00000800:
    lbz r0, 0x5e(r6)
    extsb. r0, r0
    ble lbl_fn_805C80F0_00000814
    li r5, 0x1
    b lbl_fn_805C80F0_00000820
lbl_fn_805C80F0_00000814:
    li r5, 0x0
    b lbl_fn_805C80F0_00000820
lbl_fn_805C80F0_0000081C:
    li r5, 0x1
lbl_fn_805C80F0_00000820:
    lwz r3, 0x24c(r26)
    mr r4, r25
    bl fn_805C20A0
    lwz r3, 0x4(r15)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805C80F0_00000878
    lwz r3, 0x1dc(r26)
    li r5, 0x1
    lwz r4, 0x58(r29)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    ori r0, r0, 0x1
    stb r0, 0xcf(r3)
    b lbl_fn_805C80F0_00000878
lbl_fn_805C80F0_00000870:
    addi r0, r4, 0x1
    stw r0, 0x58(r26)
lbl_fn_805C80F0_00000878:
    lwz r4, 0xc(r27)
    cmplwi r4, 0x2
    bne lbl_fn_805C80F0_00000894
    lwz r3, 0x0(r27)
    lbz r0, 0x5c(r3)
    cmplwi r0, 0x2
    beq lbl_fn_805C80F0_00000934
lbl_fn_805C80F0_00000894:
    cmplwi r4, 0x7
    bne lbl_fn_805C80F0_000008AC
    lwz r3, 0x0(r27)
    lbz r0, 0x5c(r3)
    cmplwi r0, 0x7
    beq lbl_fn_805C80F0_00000934
lbl_fn_805C80F0_000008AC:
    lwz r3, 0x0(r27)
    lbz r0, 0x5e(r3)
    extsb. r0, r0
    bgt lbl_fn_805C80F0_00000934
    mr r3, r17
    addi r4, r1, 0x8
    bl fn_80660CF0
    lwz r4, 0x0(r27)
    lbz r0, 0x5d(r4)
    extsb r0, r0
    cmpwi r0, -0x2
    beq lbl_fn_805C80F0_00000934
    cmpwi r3, -0x2
    beq lbl_fn_805C80F0_00000934
    lwz r3, 0x24c(r26)
    bl fn_805C2270
    b lbl_fn_805C80F0_00000934
lbl_fn_805C80F0_000008F0:
    lwz r3, 0x24c(r26)
    bl fn_805C2270
    lwz r3, 0x4(r15)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805C80F0_00000934
    lwz r3, 0x1dc(r26)
    li r5, 0x1
    lwz r4, 0x58(r29)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
lbl_fn_805C80F0_00000934:
    add r3, r15, r17
    lbz r0, 0x80(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805C80F0_00000B8C
    stw r17, 0x88(r15)
    mr r4, r24
    stb r30, 0x80(r3)
    lwz r3, 0x24c(r26)
    bl fn_805C26D0
    li r0, 0x25
    addi r5, r28, 0x68
    addi r3, r17, 0x1f
    li r4, 0x0
    mtctr r0
    nop
lbl_fn_805C80F0_00000970:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_fn_805C80F0_0000098C
    lwz r0, 0x4(r5)
    cmpwi r0, 0x11
    bne lbl_fn_805C80F0_0000098C
    b lbl_fn_805C80F0_000009BC
lbl_fn_805C80F0_0000098C:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_fn_805C80F0_000009AC
    lwz r0, 0xc(r5)
    cmpwi r0, 0x11
    bne lbl_fn_805C80F0_000009AC
    b lbl_fn_805C80F0_000009BC
lbl_fn_805C80F0_000009AC:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_805C80F0_00000970
    li r4, -0x1
lbl_fn_805C80F0_000009BC:
    slwi r0, r4, 2
    add r3, r15, r0
    lwz r16, 0x290(r3)
    mr r3, r16
    bl fn_805C0120
    li r0, 0x25
    stw r30, 0x14(r16)
    addi r5, r28, 0x68
    addi r3, r17, 0x1f
    li r4, 0x0
    mtctr r0
lbl_fn_805C80F0_000009E8:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_fn_805C80F0_00000A04
    lwz r0, 0x4(r5)
    cmpwi r0, 0x12
    bne lbl_fn_805C80F0_00000A04
    b lbl_fn_805C80F0_00000A34
lbl_fn_805C80F0_00000A04:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_fn_805C80F0_00000A24
    lwz r0, 0xc(r5)
    cmpwi r0, 0x12
    bne lbl_fn_805C80F0_00000A24
    b lbl_fn_805C80F0_00000A34
lbl_fn_805C80F0_00000A24:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_805C80F0_000009E8
    li r4, -0x1
lbl_fn_805C80F0_00000A34:
    slwi r0, r4, 2
    addi r6, r28, 0x68
    add r4, r15, r0
    addi r3, r17, 0x1f
    lwz r4, 0x290(r4)
    li r0, 0x25
    li r5, 0x0
    stw r31, 0x14(r4)
    mtctr r0
lbl_fn_805C80F0_00000A58:
    lwz r0, 0x0(r6)
    cmpw r3, r0
    bne lbl_fn_805C80F0_00000A74
    lwz r0, 0x4(r6)
    cmpwi r0, 0xf
    bne lbl_fn_805C80F0_00000A74
    b lbl_fn_805C80F0_00000AA4
lbl_fn_805C80F0_00000A74:
    lwz r0, 0x8(r6)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_805C80F0_00000A94
    lwz r0, 0xc(r6)
    cmpwi r0, 0xf
    bne lbl_fn_805C80F0_00000A94
    b lbl_fn_805C80F0_00000AA4
lbl_fn_805C80F0_00000A94:
    addi r6, r6, 0x10
    addi r5, r5, 0x1
    bdnz lbl_fn_805C80F0_00000A58
    li r5, -0x1
lbl_fn_805C80F0_00000AA4:
    slwi r0, r5, 2
    add r3, r15, r0
    lwz r16, 0x290(r3)
    mr r3, r16
    bl fn_805C0120
    stw r30, 0x14(r16)
    li r3, 0x0
    lwz r4, 0x4(r15)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805C80F0_00000AE0
    addi r4, r17, 0x11
    li r3, 0x5
    mtctr r12
    bctrl
lbl_fn_805C80F0_00000AE0:
    cmpwi r3, 0x0
    bne lbl_fn_805C80F0_00000AF0
    addi r3, r17, 0x11
    bl fn_805C3570
lbl_fn_805C80F0_00000AF0:
    lwz r3, 0x24c(r26)
    bl fn_805C2290
    lwz r3, 0x24c(r26)
    bl fn_805C2630
    lwz r4, 0x24c(r26)
    mr r3, r23
    bl fn_805EC870
    mr r3, r23
    bl OSCancelAlarm
    lwz r0, 0xf8(r14)
    lis r3, 0x1062
    addi r6, r3, 0x4dd3
    lis r4, fn_805C7FB0@ha
    srwi r0, r0, 2
    mr r3, r23
    mulhwu r0, r6, r0
    addi r7, r4, fn_805C7FB0@l
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x12c
    bl OSSetAlarm
    addi r0, r17, 0x2
    mr r3, r21
    or r4, r22, r0
    bl fn_805EC870
    mr r3, r21
    bl OSCancelAlarm
    lwz r0, 0xf8(r14)
    lis r3, 0x1062
    addi r6, r3, 0x4dd3
    lis r4, fn_805C7EC0@ha
    srwi r0, r0, 2
    mr r3, r21
    mulhwu r0, r6, r0
    addi r7, r4, fn_805C7EC0@l
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x190
    bl OSSetAlarm
lbl_fn_805C80F0_00000B8C:
    lwz r3, 0x0(r27)
    lbz r0, 0x5d(r3)
    extsb. r0, r0
    beq lbl_fn_805C80F0_00000BA4
    cmpwi r0, -0x7
    bne lbl_fn_805C80F0_00000D54
lbl_fn_805C80F0_00000BA4:
    lwz r4, 0xc(r27)
    cmplwi r4, 0x2
    bne lbl_fn_805C80F0_00000BBC
    lbz r0, 0x5c(r3)
    cmplwi r0, 0x2
    beq lbl_fn_805C80F0_00000BD0
lbl_fn_805C80F0_00000BBC:
    cmplwi r4, 0x7
    bne lbl_fn_805C80F0_00000BEC
    lbz r0, 0x5c(r3)
    cmplwi r0, 0x7
    bne lbl_fn_805C80F0_00000BEC
lbl_fn_805C80F0_00000BD0:
    stfs f30, 0x48(r1)
    stfs f30, 0x4c(r1)
    stfs f28, 0x50(r1)
    stfs f30, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f28, 0x5c(r1)
    b lbl_fn_805C80F0_00000C28
lbl_fn_805C80F0_00000BEC:
    lwz r0, 0x38(r3)
    stw r0, 0x1c(r1)
    lwz r0, 0x34(r3)
    lfs f0, 0x1c(r1)
    stw r0, 0x18(r1)
    fneg f1, f0
    lfs f2, 0x18(r1)
    bl fn_805D7DD0
    fmuls f0, f29, f1
    stfs f30, 0x3c(r1)
    stfs f30, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f30, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f0, 0x5c(r1)
lbl_fn_805C80F0_00000C28:
    lwz r3, 0x4(r15)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805C80F0_00000CA8
    lwz r3, 0x1dc(r26)
    li r5, 0x1
    lwz r4, 0x64(r29)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lfs f0, 0x54(r1)
    li r5, 0x1
    stfs f0, 0x38(r3)
    lfs f0, 0x58(r1)
    stfs f0, 0x3c(r3)
    lfs f0, 0x5c(r1)
    stfs f0, 0x40(r3)
    lwz r3, 0x1dc(r26)
    lwz r4, 0x70(r29)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lfs f0, 0x54(r1)
    stfs f0, 0x38(r3)
    lfs f0, 0x58(r1)
    stfs f0, 0x3c(r3)
    lfs f0, 0x5c(r1)
    stfs f0, 0x40(r3)
lbl_fn_805C80F0_00000CA8:
    lwz r0, 0x7c(r15)
    cmpwi r0, 0x64
    ble lbl_fn_805C80F0_00000CC0
    lwz r3, 0x24c(r26)
    mr r4, r24
    bl fn_805C26D0
lbl_fn_805C80F0_00000CC0:
    mr r3, r15
    mr r4, r17
    bl fn_805C8A30
    lwz r3, 0x4(r15)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805C80F0_00000D54
    lwz r3, 0x24c(r26)
    bl fn_805C2620
    lwz r4, 0x1d8(r15)
    mr r16, r3
    addi r3, r1, 0x20
    bl fn_805CF4C0
    lwz r3, 0x1dc(r26)
    li r5, 0x1
    lfs f2, 0x8(r16)
    lwz r3, 0x10(r3)
    lfs f0, 0x28(r1)
    lwz r12, 0x0(r3)
    fmuls f2, f2, f0
    lfs f1, 0xc(r16)
    lfs f0, 0x2c(r1)
    lwz r12, 0x3c(r12)
    fmuls f0, f1, f0
    stfs f2, 0x10(r1)
    lwz r4, 0x58(r29)
    stfs f0, 0x14(r1)
    mtctr r12
    bctrl
    lfs f0, 0x10(r1)
    stfs f0, 0x2c(r3)
    lfs f1, 0x14(r1)
    stfs f1, 0x30(r3)
    stfs f0, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f30, 0x38(r1)
    stfs f30, 0x34(r3)
lbl_fn_805C80F0_00000D54:
    lwz r3, 0x24c(r26)
    bl fn_805C27B0
    cmpwi r3, 0x0
    beq lbl_fn_805C80F0_00000F90
    mr r3, r15
    mr r4, r17
    bl fn_805C7A10
    b lbl_fn_805C80F0_00000F90
lbl_fn_805C80F0_00000D74:
    add r18, r15, r17
    lbz r0, 0x80(r18)
    cmpwi r0, 0x0
    beq lbl_fn_805C80F0_00000F14
    li r0, 0x25
    addi r5, r28, 0x68
    addi r3, r17, 0x1f
    li r4, 0x0
    mtctr r0
lbl_fn_805C80F0_00000D98:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_fn_805C80F0_00000DB4
    lwz r0, 0x4(r5)
    cmpwi r0, 0x11
    bne lbl_fn_805C80F0_00000DB4
    b lbl_fn_805C80F0_00000DE4
lbl_fn_805C80F0_00000DB4:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_fn_805C80F0_00000DD4
    lwz r0, 0xc(r5)
    cmpwi r0, 0x11
    bne lbl_fn_805C80F0_00000DD4
    b lbl_fn_805C80F0_00000DE4
lbl_fn_805C80F0_00000DD4:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_805C80F0_00000D98
    li r4, -0x1
lbl_fn_805C80F0_00000DE4:
    slwi r0, r4, 2
    add r3, r15, r0
    lwz r16, 0x290(r3)
    mr r3, r16
    bl fn_805C0120
    li r0, 0x25
    stw r30, 0x14(r16)
    addi r5, r28, 0x68
    addi r3, r17, 0x1f
    li r4, 0x0
    mtctr r0
lbl_fn_805C80F0_00000E10:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_fn_805C80F0_00000E2C
    lwz r0, 0x4(r5)
    cmpwi r0, 0x12
    bne lbl_fn_805C80F0_00000E2C
    b lbl_fn_805C80F0_00000E5C
lbl_fn_805C80F0_00000E2C:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_fn_805C80F0_00000E4C
    lwz r0, 0xc(r5)
    cmpwi r0, 0x12
    bne lbl_fn_805C80F0_00000E4C
    b lbl_fn_805C80F0_00000E5C
lbl_fn_805C80F0_00000E4C:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_805C80F0_00000E10
    li r4, -0x1
lbl_fn_805C80F0_00000E5C:
    slwi r0, r4, 2
    add r3, r15, r0
    lwz r16, 0x290(r3)
    mr r3, r16
    bl fn_805C0120
    stw r30, 0x14(r16)
    mr r19, r20
    li r16, 0x0
lbl_fn_805C80F0_00000E7C:
    lwz r3, 0x1d8(r15)
    li r5, 0x1
    lwz r4, 0x0(r19)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r16, r16, 0x1
    cmpwi r16, 0x4
    addi r19, r19, 0x4
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
    blt lbl_fn_805C80F0_00000E7C
    lwz r3, 0x4(r15)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805C80F0_00000EF4
    lwz r3, 0x1dc(r26)
    li r5, 0x1
    lwz r4, 0x58(r29)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
lbl_fn_805C80F0_00000EF4:
    stw r31, 0x58(r26)
    stb r31, 0x80(r18)
    lwz r3, 0x24c(r26)
    bl fn_805C2270
    lwz r3, 0x24c(r26)
    bl fn_805C2250
    lwz r3, 0x24c(r26)
    bl fn_805C22A0
lbl_fn_805C80F0_00000F14:
    cmpwi r17, 0x0
    bge lbl_fn_805C80F0_00000F60
    li r16, 0x0
lbl_fn_805C80F0_00000F20:
    lwz r3, 0x1f0(r15)
    mr r4, r16
    lfs f1, 0x2fc(r28)
    li r5, 0x0
    lwz r12, 0x0(r3)
    li r6, 0x0
    fmr f2, f1
    li r7, 0x0
    lwz r12, 0x30(r12)
    li r8, 0x0
    mtctr r12
    bctrl
    addi r16, r16, 0x1
    cmpwi r16, 0x8
    blt lbl_fn_805C80F0_00000F20
    b lbl_fn_805C80F0_00000F90
lbl_fn_805C80F0_00000F60:
    lwz r3, 0x1f0(r15)
    mr r4, r17
    lfs f1, 0x2fc(r28)
    li r5, 0x0
    lwz r12, 0x0(r3)
    li r6, 0x0
    fmr f2, f1
    li r7, 0x0
    lwz r12, 0x30(r12)
    li r8, 0x0
    mtctr r12
    bctrl
lbl_fn_805C80F0_00000F90:
    addi r17, r17, 0x1
    addis r22, r22, 0x1
    cmpwi r17, 0x4
    addi r21, r21, 0x30
    addi r20, r20, 0x10
    addi r27, r27, 0x10
    addi r26, r26, 0x4
    addi r25, r25, 0x10
    addi r24, r24, 0x18
    addi r23, r23, 0x30
    blt lbl_fn_805C80F0_00000778
    lwz r3, 0x7c(r15)
    cmpwi r3, 0x64
    ble lbl_fn_805C80F0_00000FD4
    li r0, 0x0
    stw r0, 0x7c(r15)
    b lbl_fn_805C80F0_00000FDC
lbl_fn_805C80F0_00000FD4:
    addi r0, r3, 0x1
    stw r0, 0x7c(r15)
lbl_fn_805C80F0_00000FDC:
    addi r11, r1, 0xb0
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    psq_l f29, 0xd8(r1), 0, 0
    lfd f29, 0xd0(r1)
    psq_l f28, 0xc8(r1), 0, 0
    lfd f28, 0xc0(r1)
    psq_l f27, 0xb8(r1), 0, 0
    lfd f27, 0xb0(r1)
    bl _restgpr_14
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_805C8A30(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lis r5, 0x4330
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    lis r31, lbl_80764198@ha
    addi r31, r31, lbl_80764198@l
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r4
    lwz r0, 0x14(r3)
    stw r5, 0x8(r1)
    cmpwi r0, 0x2
    stw r5, 0x10(r1)
    bne lbl_fn_805C8A30_0000186C
    slwi r0, r4, 2
    add r3, r3, r0
    lwz r3, 0x24c(r3)
    bl fn_805C2620
    lfs f3, 0x35c(r31)
    mr r29, r3
    lfs f2, 0x8(r3)
    lfs f1, 0x360(r31)
    lfs f0, 0xc(r3)
    fmuls f3, f3, f2
    lbz r0, 0x8f(r30)
    fmuls f0, f1, f0
    lfs f2, 0x31c(r31)
    cmpwi r0, 0x0
    fmuls f1, f3, f2
    fmuls f3, f0, f2
    beq lbl_fn_805C8A30_000010CC
    lwz r3, 0x4(r30)
    lfs f2, 0x34(r3)
    lfs f0, 0x38(r3)
    fmuls f1, f1, f2
    fmuls f3, f3, f0
lbl_fn_805C8A30_000010CC:
    lwz r3, 0x1f0(r30)
    fneg f2, f3
    mr r4, r28
    mr r8, r29
    lwz r12, 0x0(r3)
    lwz r5, 0x10(r29)
    lwz r12, 0x30(r12)
    lwz r6, 0x14(r29)
    lwz r7, 0x18(r29)
    mtctr r12
    bctrl
    lwz r3, 0x10(r29)
    rlwinm. r0, r3, 0, 16, 16
    beq lbl_fn_805C8A30_000012A0
    lwz r0, 0x14(r30)
    cmpwi r0, 0x2
    bne lbl_fn_805C8A30_000012A0
    lwz r0, 0x0(r30)
    cmpwi r0, 0x1
    bne lbl_fn_805C8A30_00001204
    lwz r3, 0x1d8(r30)
    lis r4, lbl_80798C4C@ha
    addi r4, r4, lbl_80798C4C@l
    li r5, 0x1
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    mr r4, r28
    lfs f1, 0x2e4(r31)
    li r5, 0x0
    rlwinm r0, r0, 0, 24, 30
    lfs f2, 0x364(r31)
    ori r0, r0, 0x1
    stb r0, 0xcf(r3)
    li r6, 0x0
    li r7, 0x0
    lwz r3, 0x1f0(r30)
    li r8, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    lwz r29, 0x3c8(r30)
    mr r3, r29
    bl fn_805C0120
    li r31, 0x1
    stw r31, 0x14(r29)
    li r0, 0x2
    stw r0, 0x18(r30)
    lwz r29, 0x3c0(r30)
    mr r3, r29
    bl fn_805C0120
    stw r31, 0x14(r29)
    lwz r29, 0x3e4(r30)
    mr r3, r29
    bl fn_805C0120
    stw r31, 0x14(r29)
    li r3, 0xa
    li r0, 0x0
    stw r3, 0x14(r30)
    li r3, 0x0
    lwz r4, 0x4(r30)
    stw r0, 0x0(r30)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805C8A30_000011F0
    li r3, 0x5
    li r4, 0x8
    mtctr r12
    bctrl
lbl_fn_805C8A30_000011F0:
    cmpwi r3, 0x0
    bne lbl_fn_805C8A30_000018C4
    li r3, 0x8
    bl fn_805C3570
    b lbl_fn_805C8A30_000018C4
lbl_fn_805C8A30_00001204:
    cmpwi r0, 0x0
    bne lbl_fn_805C8A30_000018C4
    lwz r3, 0x3c4(r30)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    bne lbl_fn_805C8A30_00001224
    li r0, 0x0
    stw r0, 0x14(r3)
lbl_fn_805C8A30_00001224:
    lwz r3, 0x3e8(r30)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    bne lbl_fn_805C8A30_0000123C
    li r0, 0x0
    stw r0, 0x14(r3)
lbl_fn_805C8A30_0000123C:
    li r3, 0x0
    li r0, 0x4
    stw r3, 0xb8(r30)
    stw r0, 0x18(r30)
    lwz r29, 0x3c8(r30)
    mr r3, r29
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r29)
    li r0, 0xe
    li r3, 0x0
    stw r0, 0x14(r30)
    lwz r4, 0x4(r30)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805C8A30_0000128C
    li r3, 0x5
    li r4, 0x1
    mtctr r12
    bctrl
lbl_fn_805C8A30_0000128C:
    cmpwi r3, 0x0
    bne lbl_fn_805C8A30_000018C4
    li r3, 0x1
    bl fn_805C3570
    b lbl_fn_805C8A30_000018C4
lbl_fn_805C8A30_000012A0:
    lwz r0, 0x0(r30)
    cmpwi r0, 0x1
    bne lbl_fn_805C8A30_000018C4
    lwz r0, 0x14(r30)
    cmpwi r0, 0x2
    bne lbl_fn_805C8A30_000018C4
    rlwinm. r0, r3, 0, 19, 19
    beq lbl_fn_805C8A30_0000158C
    lwz r3, 0x84(r30)
    cmpwi r3, 0x0
    ble lbl_fn_805C8A30_00001554
    subi r3, r3, 0x1
    li r0, 0x25
    stw r3, 0x84(r30)
    addi r3, r3, 0x15
    addi r5, r31, 0x68
    li r4, 0x0
    mtctr r0
lbl_fn_805C8A30_000012E8:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_fn_805C8A30_00001304
    lwz r0, 0x4(r5)
    cmpwi r0, 0xa
    bne lbl_fn_805C8A30_00001304
    b lbl_fn_805C8A30_00001334
lbl_fn_805C8A30_00001304:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_fn_805C8A30_00001324
    lwz r0, 0xc(r5)
    cmpwi r0, 0xa
    bne lbl_fn_805C8A30_00001324
    b lbl_fn_805C8A30_00001334
lbl_fn_805C8A30_00001324:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_805C8A30_000012E8
    li r4, -0x1
lbl_fn_805C8A30_00001334:
    slwi r0, r4, 2
    li r4, 0x0
    add r3, r30, r0
    addi r6, r31, 0x68
    lwz r3, 0x290(r3)
    li r0, 0x25
    li r5, 0x0
    stw r4, 0x14(r3)
    lwz r3, 0x84(r30)
    addi r3, r3, 0x15
    mtctr r0
lbl_fn_805C8A30_00001360:
    lwz r0, 0x0(r6)
    cmpw r3, r0
    bne lbl_fn_805C8A30_0000137C
    lwz r0, 0x4(r6)
    cmpwi r0, 0x9
    bne lbl_fn_805C8A30_0000137C
    b lbl_fn_805C8A30_000013AC
lbl_fn_805C8A30_0000137C:
    lwz r0, 0x8(r6)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_805C8A30_0000139C
    lwz r0, 0xc(r6)
    cmpwi r0, 0x9
    bne lbl_fn_805C8A30_0000139C
    b lbl_fn_805C8A30_000013AC
lbl_fn_805C8A30_0000139C:
    addi r6, r6, 0x10
    addi r5, r5, 0x1
    bdnz lbl_fn_805C8A30_00001360
    li r5, -0x1
lbl_fn_805C8A30_000013AC:
    slwi r0, r5, 2
    add r3, r30, r0
    lwz r29, 0x290(r3)
    mr r3, r29
    bl fn_805C0120
    li r0, 0x25
    li r3, 0x1
    stw r3, 0x14(r29)
    addi r4, r31, 0x68
    li r3, 0x0
    mtctr r0
lbl_fn_805C8A30_000013D8:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xb
    bne lbl_fn_805C8A30_000013F4
    lwz r0, 0x4(r4)
    cmpwi r0, 0x5
    bne lbl_fn_805C8A30_000013F4
    b lbl_fn_805C8A30_00001424
lbl_fn_805C8A30_000013F4:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xb
    bne lbl_fn_805C8A30_00001414
    lwz r0, 0xc(r4)
    cmpwi r0, 0x5
    bne lbl_fn_805C8A30_00001414
    b lbl_fn_805C8A30_00001424
lbl_fn_805C8A30_00001414:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805C8A30_000013D8
    li r3, -0x1
lbl_fn_805C8A30_00001424:
    slwi r0, r3, 2
    add r3, r30, r0
    lwz r29, 0x290(r3)
    mr r3, r29
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r29)
    lwz r0, 0x84(r30)
    cmpwi r0, 0x0
    bne lbl_fn_805C8A30_000014D0
    lwz r4, 0x4(r30)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805C8A30_00001470
    li r3, 0x5
    li r4, 0xc
    mtctr r12
    bctrl
lbl_fn_805C8A30_00001470:
    cmpwi r3, 0x0
    bne lbl_fn_805C8A30_00001480
    li r3, 0xc
    bl fn_805C3570
lbl_fn_805C8A30_00001480:
    lfd f31, 0x310(r31)
    mr r29, r30
    lfs f30, 0x30c(r31)
    li r31, 0x0
lbl_fn_805C8A30_00001490:
    lwz r0, 0x84(r30)
    lwz r3, 0x24c(r29)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f31
    fdivs f1, f0, f30
    bl fn_805C22B0
    lwz r3, 0x24c(r29)
    li r4, 0x1
    bl fn_805C22C0
    addi r31, r31, 0x1
    addi r29, r29, 0x4
    cmpwi r31, 0x4
    blt lbl_fn_805C8A30_00001490
    b lbl_fn_805C8A30_000018C4
lbl_fn_805C8A30_000014D0:
    lwz r4, 0x4(r30)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805C8A30_000014F4
    li r3, 0x5
    li r4, 0xa
    mtctr r12
    bctrl
lbl_fn_805C8A30_000014F4:
    cmpwi r3, 0x0
    bne lbl_fn_805C8A30_00001504
    li r3, 0xa
    bl fn_805C3570
lbl_fn_805C8A30_00001504:
    lfd f31, 0x310(r31)
    mr r29, r30
    lfs f30, 0x30c(r31)
    li r31, 0x0
lbl_fn_805C8A30_00001514:
    lwz r0, 0x84(r30)
    lwz r3, 0x24c(r29)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f31
    fdivs f1, f0, f30
    bl fn_805C22B0
    lwz r3, 0x24c(r29)
    li r4, 0x1
    bl fn_805C22C0
    addi r31, r31, 0x1
    addi r29, r29, 0x4
    cmpwi r31, 0x4
    blt lbl_fn_805C8A30_00001514
    b lbl_fn_805C8A30_000018C4
lbl_fn_805C8A30_00001554:
    lwz r4, 0x4(r30)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805C8A30_00001578
    li r3, 0x5
    li r4, 0xd
    mtctr r12
    bctrl
lbl_fn_805C8A30_00001578:
    cmpwi r3, 0x0
    bne lbl_fn_805C8A30_000018C4
    li r3, 0xd
    bl fn_805C3570
    b lbl_fn_805C8A30_000018C4
lbl_fn_805C8A30_0000158C:
    rlwinm. r0, r3, 0, 27, 27
    beq lbl_fn_805C8A30_000018C4
    lwz r3, 0x84(r30)
    cmpwi r3, 0xa
    bge lbl_fn_805C8A30_00001834
    li r0, 0x25
    addi r3, r3, 0x15
    addi r5, r31, 0x68
    li r4, 0x0
    mtctr r0
    nop
lbl_fn_805C8A30_000015B8:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_fn_805C8A30_000015D4
    lwz r0, 0x4(r5)
    cmpwi r0, 0x9
    bne lbl_fn_805C8A30_000015D4
    b lbl_fn_805C8A30_00001604
lbl_fn_805C8A30_000015D4:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_fn_805C8A30_000015F4
    lwz r0, 0xc(r5)
    cmpwi r0, 0x9
    bne lbl_fn_805C8A30_000015F4
    b lbl_fn_805C8A30_00001604
lbl_fn_805C8A30_000015F4:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_805C8A30_000015B8
    li r4, -0x1
lbl_fn_805C8A30_00001604:
    slwi r0, r4, 2
    li r4, 0x0
    add r3, r30, r0
    addi r6, r31, 0x68
    lwz r3, 0x290(r3)
    li r0, 0x25
    li r5, 0x0
    stw r4, 0x14(r3)
    lwz r3, 0x84(r30)
    addi r3, r3, 0x15
    mtctr r0
lbl_fn_805C8A30_00001630:
    lwz r0, 0x0(r6)
    cmpw r3, r0
    bne lbl_fn_805C8A30_0000164C
    lwz r0, 0x4(r6)
    cmpwi r0, 0xa
    bne lbl_fn_805C8A30_0000164C
    b lbl_fn_805C8A30_0000167C
lbl_fn_805C8A30_0000164C:
    lwz r0, 0x8(r6)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_805C8A30_0000166C
    lwz r0, 0xc(r6)
    cmpwi r0, 0xa
    bne lbl_fn_805C8A30_0000166C
    b lbl_fn_805C8A30_0000167C
lbl_fn_805C8A30_0000166C:
    addi r6, r6, 0x10
    addi r5, r5, 0x1
    bdnz lbl_fn_805C8A30_00001630
    li r5, -0x1
lbl_fn_805C8A30_0000167C:
    slwi r0, r5, 2
    add r3, r30, r0
    lwz r29, 0x290(r3)
    mr r3, r29
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r29)
    li r0, 0x25
    addi r5, r31, 0x68
    lwz r3, 0x84(r30)
    li r4, 0x0
    addi r3, r3, 0x1
    stw r3, 0x84(r30)
    mtctr r0
    nop
lbl_fn_805C8A30_000016B8:
    lwz r0, 0x0(r5)
    cmpwi r0, 0xc
    bne lbl_fn_805C8A30_000016D4
    lwz r0, 0x4(r5)
    cmpwi r0, 0x5
    bne lbl_fn_805C8A30_000016D4
    b lbl_fn_805C8A30_00001704
lbl_fn_805C8A30_000016D4:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0xc
    bne lbl_fn_805C8A30_000016F4
    lwz r0, 0xc(r5)
    cmpwi r0, 0x5
    bne lbl_fn_805C8A30_000016F4
    b lbl_fn_805C8A30_00001704
lbl_fn_805C8A30_000016F4:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_805C8A30_000016B8
    li r4, -0x1
lbl_fn_805C8A30_00001704:
    slwi r0, r4, 2
    add r3, r30, r0
    lwz r29, 0x290(r3)
    mr r3, r29
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r29)
    lwz r0, 0x84(r30)
    cmpwi r0, 0xa
    bne lbl_fn_805C8A30_000017B0
    lwz r4, 0x4(r30)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805C8A30_00001750
    li r3, 0x5
    li r4, 0xb
    mtctr r12
    bctrl
lbl_fn_805C8A30_00001750:
    cmpwi r3, 0x0
    bne lbl_fn_805C8A30_00001760
    li r3, 0xb
    bl fn_805C3570
lbl_fn_805C8A30_00001760:
    lfd f31, 0x310(r31)
    mr r29, r30
    lfs f30, 0x30c(r31)
    li r31, 0x0
lbl_fn_805C8A30_00001770:
    lwz r0, 0x84(r30)
    lwz r3, 0x24c(r29)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f31
    fdivs f1, f0, f30
    bl fn_805C22B0
    lwz r3, 0x24c(r29)
    li r4, 0x1
    bl fn_805C22C0
    addi r31, r31, 0x1
    addi r29, r29, 0x4
    cmpwi r31, 0x4
    blt lbl_fn_805C8A30_00001770
    b lbl_fn_805C8A30_000018C4
lbl_fn_805C8A30_000017B0:
    lwz r4, 0x4(r30)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805C8A30_000017D4
    li r3, 0x5
    li r4, 0x9
    mtctr r12
    bctrl
lbl_fn_805C8A30_000017D4:
    cmpwi r3, 0x0
    bne lbl_fn_805C8A30_000017E4
    li r3, 0x9
    bl fn_805C3570
lbl_fn_805C8A30_000017E4:
    lfd f30, 0x310(r31)
    mr r29, r30
    lfs f31, 0x30c(r31)
    li r31, 0x0
lbl_fn_805C8A30_000017F4:
    lwz r0, 0x84(r30)
    lwz r3, 0x24c(r29)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f30
    fdivs f1, f0, f31
    bl fn_805C22B0
    lwz r3, 0x24c(r29)
    li r4, 0x1
    bl fn_805C22C0
    addi r31, r31, 0x1
    addi r29, r29, 0x4
    cmpwi r31, 0x4
    blt lbl_fn_805C8A30_000017F4
    b lbl_fn_805C8A30_000018C4
lbl_fn_805C8A30_00001834:
    lwz r4, 0x4(r30)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805C8A30_00001858
    li r3, 0x5
    li r4, 0xd
    mtctr r12
    bctrl
lbl_fn_805C8A30_00001858:
    cmpwi r3, 0x0
    bne lbl_fn_805C8A30_000018C4
    li r3, 0xd
    bl fn_805C3570
    b lbl_fn_805C8A30_000018C4
lbl_fn_805C8A30_0000186C:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x1
    bne lbl_fn_805C8A30_000018C4
    lwz r0, 0x14(r3)
    cmpwi r0, 0x5
    bne lbl_fn_805C8A30_000018C4
    lwz r0, 0x18(r3)
    slwi r0, r0, 2
    add r5, r3, r0
    lwz r5, 0x3b8(r5)
    lwz r0, 0x14(r5)
    cmpwi r0, 0x1
    beq lbl_fn_805C8A30_000018C4
    slwi r0, r4, 2
    add r3, r3, r0
    lwz r3, 0x24c(r3)
    bl fn_805C2620
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805C8A30_000018C4
    lwz r0, 0x5bc(r30)
    stw r0, 0x1c(r30)
lbl_fn_805C8A30_000018C4:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_805C9310(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805C9310_0000193C
    cmpwi r0, 0x1
    beq lbl_fn_805C9310_00001A08
    cmpwi r0, 0x2
    beq lbl_fn_805C9310_00001AD8
    b lbl_fn_805C9310_00001BA0
lbl_fn_805C9310_0000193C:
    lis r31, lbl_80798A70@ha
    li r30, 0x0
    addi r31, r31, lbl_80798A70@l
lbl_fn_805C9310_00001948:
    cmpwi r30, 0x2
    blt lbl_fn_805C9310_00001958
    cmpwi r30, 0x9
    bne lbl_fn_805C9310_000019A8
lbl_fn_805C9310_00001958:
    lwz r3, 0x1d8(r29)
    li r5, 0x1
    lwz r4, 0x0(r31)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    mr r4, r3
    lwz r3, 0x1f0(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    b lbl_fn_805C9310_000019F4
lbl_fn_805C9310_000019A8:
    lwz r3, 0x1d8(r29)
    li r5, 0x1
    lwz r4, 0x0(r31)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    mr r4, r3
    lwz r3, 0x1f0(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r3)
    li r4, 0x0
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
lbl_fn_805C9310_000019F4:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0xa
    blt lbl_fn_805C9310_00001948
    b lbl_fn_805C9310_00001BA0
lbl_fn_805C9310_00001A08:
    lis r31, lbl_80798A70@ha
    li r30, 0x0
    addi r31, r31, lbl_80798A70@l
lbl_fn_805C9310_00001A14:
    subi r0, r30, 0x1
    cmplwi r0, 0x5
    ble lbl_fn_805C9310_00001A28
    cmpwi r30, 0x9
    bne lbl_fn_805C9310_00001A78
lbl_fn_805C9310_00001A28:
    lwz r3, 0x1d8(r29)
    li r5, 0x1
    lwz r4, 0x0(r31)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    mr r4, r3
    lwz r3, 0x1f0(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    b lbl_fn_805C9310_00001AC4
lbl_fn_805C9310_00001A78:
    lwz r3, 0x1d8(r29)
    li r5, 0x1
    lwz r4, 0x0(r31)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    mr r4, r3
    lwz r3, 0x1f0(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r3)
    li r4, 0x0
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
lbl_fn_805C9310_00001AC4:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0xa
    blt lbl_fn_805C9310_00001A14
    b lbl_fn_805C9310_00001BA0
lbl_fn_805C9310_00001AD8:
    lis r31, lbl_80798A70@ha
    li r30, 0x0
    addi r31, r31, lbl_80798A70@l
lbl_fn_805C9310_00001AE4:
    cmpwi r30, 0x7
    blt lbl_fn_805C9310_00001AF4
    cmpwi r30, 0x9
    bne lbl_fn_805C9310_00001B44
lbl_fn_805C9310_00001AF4:
    lwz r3, 0x1d8(r29)
    li r5, 0x1
    lwz r4, 0x0(r31)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    mr r4, r3
    lwz r3, 0x1f0(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r3)
    li r4, 0x0
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    b lbl_fn_805C9310_00001B90
lbl_fn_805C9310_00001B44:
    lwz r3, 0x1d8(r29)
    li r5, 0x1
    lwz r4, 0x0(r31)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    mr r4, r3
    lwz r3, 0x1f0(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
lbl_fn_805C9310_00001B90:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0xa
    blt lbl_fn_805C9310_00001AE4
lbl_fn_805C9310_00001BA0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
