#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_80041A28(void);
extern void fn_80097D7C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB58C(void);
extern void fn_800CB5C8(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_80144710(void);
extern void fn_80155A88(void);
extern void fn_801562A0(void);
extern void fn_8015783C(void);
extern void fn_8015802C(void);
extern void fn_80158BB4(void);
extern void fn_80158CA4(void);
extern void fn_8016ADF4(void);
extern void fn_8016E970(void);
extern void fn_8032F0EC(void);
extern void fn_8032F314(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_803EA09C(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80749F58[];
extern u8 lbl_80749F68[];
extern u8 lbl_80766768[];
extern u8 lbl_80788E80[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F498;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885078;
extern u32 lbl_8088507C;
extern u32 lbl_80885088;
extern u32 lbl_8088508C;
extern u32 lbl_808850A0;
extern u32 lbl_808850A4;
extern u32 lbl_808850AC;
extern u32 lbl_808850B8;
extern u32 lbl_808850BC;
extern u32 lbl_808850C0;
extern u32 lbl_808850C4;
extern u32 lbl_808850CC;
extern u32 lbl_808850D0;
extern u32 lbl_808850D4;
extern u32 lbl_808850D8;
extern u32 lbl_808850DC;
extern u32 lbl_808850E0;
extern u32 lbl_808850E4;
extern u32 lbl_808850E8;
extern u32 lbl_808850EC;
extern u32 lbl_808850F0;
extern u32 lbl_808850F4;

/* Function declarations */
void fn_8032F608(void);
void fn_8032F6A8(void);
void fn_8032F828(void);
void fn_8032FBF4(void);
void fn_8032FD30(void);
void fn_8032FDE8(void);
void fn_8032FFF8(void);
void fn_80330218(void);
void fn_80330D74(void);

asm void fn_8032F608(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r4, 0xd1c(r3)
    lfs f0, 0x530(r3)
    lfs f1, 0x530(r4)
    lfs f3, 0x52c(r4)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x8
    lfs f1, 0x528(r4)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9940
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_8032F608_00000064
    li r3, 0x0
    b lbl_fn_8032F608_0000008C
lbl_fn_8032F608_00000064:
    lwz r3, 0xd1c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8032F608_00000088
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8032F608_00000088
    li r3, 0x1
    b lbl_fn_8032F608_0000008C
lbl_fn_8032F608_00000088:
    li r3, 0x0
lbl_fn_8032F608_0000008C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8032F6A8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0x15b4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8032F6A8_000000C4
    bl fn_8032F828
lbl_fn_8032F6A8_000000C4:
    lwz r0, 0x15ac(r31)
    li r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8032F6A8_000000D8
    li r5, 0x0
lbl_fn_8032F6A8_000000D8:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8032F6A8_000000F4
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8032F6A8_000000F4
    li r5, 0x0
lbl_fn_8032F6A8_000000F4:
    lwz r4, lbl_8087F490
    cmpwi r4, 0x0
    beq lbl_fn_8032F6A8_00000138
    lwz r3, 0x263c(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8032F6A8_0000011C
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8032F6A8_0000011C
    li r5, 0x0
lbl_fn_8032F6A8_0000011C:
    lwz r3, 0x2640(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8032F6A8_00000138
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8032F6A8_00000138
    li r5, 0x0
lbl_fn_8032F6A8_00000138:
    cmpwi r5, 0x0
    beq lbl_fn_8032F6A8_0000020C
    lwz r0, 0x15b0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8032F6A8_0000015C
    addi r3, r31, 0x15b0
    bl fn_800CB58C
    cmpwi r3, 0x0
    bne lbl_fn_8032F6A8_0000020C
lbl_fn_8032F6A8_0000015C:
    lis r3, 0xcccd
    lwz r6, 0x15e0(r31)
    subi r0, r3, 0x3333
    lwz r4, lbl_8087F498
    mulhwu r0, r0, r6
    mr r5, r31
    addi r3, r1, 0x8
    srwi r0, r0, 3
    mulli r0, r0, 0xa
    subf r0, r0, r6
    slwi r0, r0, 2
    add r6, r31, r0
    lwz r0, 0x15b8(r6)
    mulli r0, r0, 0xc
    add r6, r31, r0
    lwz r0, 0x1618(r6)
    srwi. r0, r0, 31
    bne lbl_fn_8032F6A8_000001AC
    addi r6, r6, 0x1619
    b lbl_fn_8032F6A8_000001B0
lbl_fn_8032F6A8_000001AC:
    lwz r6, 0x1620(r6)
lbl_fn_8032F6A8_000001B0:
    lfs f1, lbl_8088507C
    li r7, 0x0
    li r8, 0x1
    li r9, 0x0
    bl fn_803EA09C
    addi r3, r31, 0x15b0
    addi r4, r1, 0x8
    bl fn_800CB440
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r5, 0x15e0(r31)
    lis r4, 0xcccd
    subi r0, r4, 0x3333
    lwz r3, 0x15b4(r31)
    addi r5, r5, 0x1
    mulhwu r4, r0, r5
    subi r0, r3, 0x1
    stw r0, 0x15b4(r31)
    srwi r4, r4, 3
    mulli r0, r4, 0xa
    subf r0, r0, r5
    stw r0, 0x15e0(r31)
lbl_fn_8032F6A8_0000020C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8032F828(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x40
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x15e4(r3)
    mr r30, r3
    lfs f1, lbl_8088507C
    cmpwi r0, 0x0
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    bne lbl_fn_8032F828_0000028C
    lfs f0, lbl_808850CC
    fmuls f0, f1, f0
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    b lbl_fn_8032F828_0000033C
lbl_fn_8032F828_0000028C:
    lis r4, 0xcccd
    lfs f2, lbl_808850D0
    subi r6, r4, 0x3333
    lfs f0, lbl_808850D4
    addi r4, r1, 0x8
    li r7, 0x0
    b lbl_fn_8032F828_000002E4
lbl_fn_8032F828_000002A8:
    lwz r0, 0x1610(r3)
    add r5, r0, r7
    addi r7, r7, 0x1
    mulhwu r0, r6, r5
    srwi r0, r0, 3
    mulli r0, r0, 0xa
    subf r0, r0, r5
    slwi r0, r0, 2
    add r5, r3, r0
    lwz r0, 0x15e8(r5)
    slwi r0, r0, 2
    lfsx f1, r4, r0
    fmuls f1, f1, f2
    fmuls f2, f2, f0
    stfsx f1, r4, r0
lbl_fn_8032F828_000002E4:
    lwz r0, 0x15e4(r3)
    cmplw r7, r0
    blt lbl_fn_8032F828_000002A8
    lwz r6, 0x1610(r3)
    lis r4, 0xcccd
    lwz r5, 0x15e4(r3)
    subi r0, r4, 0x3333
    addi r4, r1, 0x8
    lfs f0, lbl_808850D8
    add r5, r6, r5
    subi r5, r5, 0x1
    mulhwu r0, r0, r5
    srwi r0, r0, 3
    mulli r0, r0, 0xa
    subf r0, r0, r5
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r0, 0x15e8(r3)
    slwi r0, r0, 2
    lfsx f1, r4, r0
    fmuls f0, f1, f0
    stfsx f0, r4, r0
lbl_fn_8032F828_0000033C:
    lis r3, lbl_80749F58@ha
    lis r4, 0x4178
    lfd f30, lbl_80749F58@l(r3)
    addi r27, r1, 0x8
    lfs f31, lbl_80885088
    addi r28, r4, 0x749f
    li r31, 0x0
    lis r29, 0x4330
lbl_fn_8032F828_0000035C:
    bl fn_80680CF8
    mulhw r0, r28, r3
    stw r29, 0x20(r1)
    lfs f0, 0x0(r27)
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lfd f1, 0x20(r1)
    fsubs f1, f1, f30
    fdivs f1, f1, f31
    fcmpo cr0, f1, f0
    bge lbl_fn_8032F828_0000044C
    lwz r4, 0x15e0(r30)
    lis r3, 0xcccd
    lwz r0, 0x15b4(r30)
    subi r6, r3, 0x3333
    add r3, r4, r0
    mulhwu r0, r6, r3
    srwi r0, r0, 3
    mulli r0, r0, 0xa
    subf r0, r0, r3
    slwi r0, r0, 2
    add r3, r30, r0
    stw r31, 0x15b8(r3)
    lwz r0, 0x15e4(r30)
    lwz r3, 0x15b4(r30)
    cmplwi r0, 0xa
    addi r0, r3, 0x1
    stw r0, 0x15b4(r30)
    blt lbl_fn_8032F828_0000040C
    lwz r4, 0x1610(r30)
    lwz r3, 0x15e4(r30)
    addi r5, r4, 0x1
    mulhwu r4, r6, r5
    subi r0, r3, 0x1
    stw r0, 0x15e4(r30)
    srwi r4, r4, 3
    mulli r0, r4, 0xa
    subf r0, r0, r5
    stw r0, 0x1610(r30)
lbl_fn_8032F828_0000040C:
    lwz r5, 0x1610(r30)
    lis r3, 0xcccd
    lwz r4, 0x15e4(r30)
    subi r0, r3, 0x3333
    add r3, r5, r4
    mulhwu r0, r0, r3
    srwi r0, r0, 3
    mulli r0, r0, 0xa
    subf r0, r0, r3
    slwi r0, r0, 2
    add r3, r30, r0
    stw r31, 0x15e8(r3)
    lwz r3, 0x15e4(r30)
    addi r0, r3, 0x1
    stw r0, 0x15e4(r30)
    b lbl_fn_8032F828_0000045C
lbl_fn_8032F828_0000044C:
    addi r31, r31, 0x1
    addi r27, r27, 0x4
    cmpwi r31, 0x5
    blt lbl_fn_8032F828_0000035C
lbl_fn_8032F828_0000045C:
    cmpwi r31, 0x5
    bne lbl_fn_8032F828_000005C4
    li r0, 0x0
    addi r3, r1, 0x8
    cmpw r0, r0
    beq lbl_fn_8032F828_00000488
    lfs f1, 0x8(r1)
    lfs f0, 0x8(r1)
    fcmpo cr0, f1, f0
    ble lbl_fn_8032F828_00000488
    li r0, 0x0
lbl_fn_8032F828_00000488:
    li r4, 0x1
    cmpw r4, r0
    beq lbl_fn_8032F828_000004AC
    slwi r4, r0, 2
    lfs f1, 0xc(r1)
    lfsx f0, r3, r4
    fcmpo cr0, f1, f0
    ble lbl_fn_8032F828_000004AC
    li r0, 0x1
lbl_fn_8032F828_000004AC:
    li r4, 0x2
    cmpw r4, r0
    beq lbl_fn_8032F828_000004D0
    slwi r4, r0, 2
    lfs f1, 0x10(r1)
    lfsx f0, r3, r4
    fcmpo cr0, f1, f0
    ble lbl_fn_8032F828_000004D0
    li r0, 0x2
lbl_fn_8032F828_000004D0:
    li r4, 0x3
    cmpw r4, r0
    beq lbl_fn_8032F828_000004F4
    slwi r4, r0, 2
    lfs f1, 0x14(r1)
    lfsx f0, r3, r4
    fcmpo cr0, f1, f0
    ble lbl_fn_8032F828_000004F4
    li r0, 0x3
lbl_fn_8032F828_000004F4:
    li r4, 0x4
    cmpw r4, r0
    beq lbl_fn_8032F828_00000518
    slwi r4, r0, 2
    lfs f1, 0x18(r1)
    lfsx f0, r3, r4
    fcmpo cr0, f1, f0
    ble lbl_fn_8032F828_00000518
    li r0, 0x4
lbl_fn_8032F828_00000518:
    lwz r5, 0x15e0(r30)
    lis r3, 0xcccd
    lwz r4, 0x15b4(r30)
    subi r6, r3, 0x3333
    add r4, r5, r4
    mulhwu r3, r6, r4
    srwi r3, r3, 3
    mulli r3, r3, 0xa
    subf r3, r3, r4
    slwi r3, r3, 2
    add r3, r30, r3
    stw r0, 0x15b8(r3)
    lwz r3, 0x15e4(r30)
    lwz r4, 0x15b4(r30)
    cmplwi r3, 0xa
    addi r3, r4, 0x1
    stw r3, 0x15b4(r30)
    blt lbl_fn_8032F828_00000588
    lwz r4, 0x1610(r30)
    lwz r3, 0x15e4(r30)
    addi r5, r4, 0x1
    mulhwu r4, r6, r5
    subi r3, r3, 0x1
    stw r3, 0x15e4(r30)
    srwi r4, r4, 3
    mulli r3, r4, 0xa
    subf r3, r3, r5
    stw r3, 0x1610(r30)
lbl_fn_8032F828_00000588:
    lwz r5, 0x1610(r30)
    lis r3, 0xcccd
    lwz r4, 0x15e4(r30)
    subi r3, r3, 0x3333
    add r4, r5, r4
    mulhwu r3, r3, r4
    srwi r3, r3, 3
    mulli r3, r3, 0xa
    subf r3, r3, r4
    slwi r3, r3, 2
    add r3, r30, r3
    stw r0, 0x15e8(r3)
    lwz r3, 0x15e4(r30)
    addi r0, r3, 0x1
    stw r0, 0x15e4(r30)
lbl_fn_8032F828_000005C4:
    addi r11, r1, 0x40
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8032FBF4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x1570(r3)
    cmpwi r0, 0x0
    blt lbl_fn_8032FBF4_00000628
    li r3, 0x0
    b lbl_fn_8032FBF4_00000700
lbl_fn_8032FBF4_00000628:
    lwz r3, 0xd1c(r3)
    cmpwi r3, 0x0
    bne lbl_fn_8032FBF4_0000063C
    li r3, 0x0
    b lbl_fn_8032FBF4_00000700
lbl_fn_8032FBF4_0000063C:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8032FBF4_00000660
    lwz r12, 0x0(r3)
    lwz r12, 0x78(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_8032FBF4_00000668
lbl_fn_8032FBF4_00000660:
    li r3, 0x0
    b lbl_fn_8032FBF4_00000700
lbl_fn_8032FBF4_00000668:
    lwz r3, 0xd1c(r28)
    lwz r0, 0x638(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8032FBF4_00000680
    li r3, 0x0
    b lbl_fn_8032FBF4_00000700
lbl_fn_8032FBF4_00000680:
    lwz r4, 0x940(r28)
    lis r0, 0x4330
    lis r5, lbl_80749F58@ha
    lwz r3, 0x14ec(r28)
    xoris r4, r4, 0x8000
    stw r4, 0xc(r1)
    subi r29, r3, 0x1
    lfd f2, lbl_80749F58@l(r5)
    stw r0, 0x8(r1)
    slwi r31, r29, 4
    lfs f0, 0x7d8(r28)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fdivs f31, f0, f1
    b lbl_fn_8032FBF4_000006F4
lbl_fn_8032FBF4_000006BC:
    add r30, r28, r31
    lwz r3, lbl_8087F430
    lwz r4, 0x14f0(r30)
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8032FBF4_000006EC
    lfs f0, 0x14f8(r30)
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_8032FBF4_000006EC
    li r3, 0x1
    b lbl_fn_8032FBF4_00000700
lbl_fn_8032FBF4_000006EC:
    subi r29, r29, 0x1
    subi r31, r31, 0x10
lbl_fn_8032FBF4_000006F4:
    cmpwi r29, 0x0
    bge lbl_fn_8032FBF4_000006BC
    li r3, 0x0
lbl_fn_8032FBF4_00000700:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8032FD30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r3, 0x14f0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    b lbl_fn_8032FD30_000007B8
lbl_fn_8032FD30_00000750:
    lwz r3, lbl_8087F430
    lwz r4, 0x0(r31)
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8032FD30_000007B0
    lwz r3, lbl_8087F430
    li r5, 0x1
    lwz r4, 0x0(r31)
    bl fn_80370AE4
    stw r30, 0x1570(r29)
    addi r3, r29, 0x15b0
    li r4, 0x14
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, 0x1570(r29)
    li r4, 0x0
    lwz r0, 0x14ec(r29)
    addi r3, r3, 0x1
    stw r4, 0x15b4(r29)
    cmplw r3, r0
    bne lbl_fn_8032FD30_000007C4
    li r0, 0x1
    stw r0, 0x1578(r29)
    b lbl_fn_8032FD30_000007C4
lbl_fn_8032FD30_000007B0:
    addi r31, r31, 0x10
    addi r30, r30, 0x1
lbl_fn_8032FD30_000007B8:
    lwz r0, 0x14ec(r29)
    cmplw r30, r0
    blt lbl_fn_8032FD30_00000750
lbl_fn_8032FD30_000007C4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8032FDE8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_8032FDE8_00000810
    cmpwi r0, 0x7
    beq lbl_fn_8032FDE8_000008AC
    b lbl_fn_8032FDE8_000008B8
lbl_fn_8032FDE8_00000810:
    lwz r0, 0x560(r3)
    cmpwi r0, 0xa
    bne lbl_fn_8032FDE8_00000898
    li r30, 0x0
    stw r30, 0x14b8(r3)
    stw r30, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r31)
    li r0, 0x1
    stw r3, 0x590(r31)
    cmpwi r4, 0x6
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    beq lbl_fn_8032FDE8_00000860
    cmpwi r4, 0x7
    beq lbl_fn_8032FDE8_00000860
    cmpwi r4, 0xe
    beq lbl_fn_8032FDE8_00000860
    stw r4, 0x15a8(r31)
lbl_fn_8032FDE8_00000860:
    lwz r0, 0x638(r31)
    li r5, 0x0
    lwz r6, 0x14d4(r31)
    li r3, 0x8
    stw r3, 0x58c(r31)
    li r4, 0x1
    lwz r3, 0xf80(r31)
    stb r5, 0x59d(r31)
    stb r5, 0x59c(r31)
    stw r0, 0x63c(r31)
    stw r6, 0x638(r31)
    stb r4, 0x59f(r31)
    stw r4, 0x1c(r3)
    b lbl_fn_8032FDE8_000009D8
lbl_fn_8032FDE8_00000898:
    cmpwi r0, 0x27
    bne lbl_fn_8032FDE8_000009D8
    li r0, 0x0
    stw r0, 0x14bc(r3)
    b lbl_fn_8032FDE8_000009D8
lbl_fn_8032FDE8_000008AC:
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_8032FDE8_000009D8
lbl_fn_8032FDE8_000008B8:
    lwz r0, 0x1590(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8032FDE8_000008D0
    lwz r0, 0x12a4(r3)
    ori r0, r0, 0x20
    stw r0, 0x12a4(r3)
lbl_fn_8032FDE8_000008D0:
    lwz r0, 0xd1c(r3)
    li r4, 0x3
    stw r0, 0xfc0(r3)
    mr r3, r31
    bl fn_8016E970
    lwz r0, 0x17bc(r31)
    cmpwi r0, 0x5
    ble lbl_fn_8032FDE8_000009D8
    lwz r0, 0x7e0(r31)
    rlwinm r3, r0, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_8032FDE8_000009D8
    bl fn_80680CF8
    lis r4, 0x5555
    addi r0, r4, 0x5556
    mulhw r4, r0, r3
    srwi r0, r4, 31
    add r0, r4, r0
    mulli r0, r0, 0x3
    subf r0, r0, r3
    cmpwi r0, 0x2
    bge lbl_fn_8032FDE8_000009AC
    mr r3, r31
    bl fn_8032F314
    cmpwi r3, 0x0
    beq lbl_fn_8032FDE8_000009AC
    li r30, 0x0
    stw r30, 0x15a0(r31)
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r31)
    li r0, 0x1
    stw r3, 0x590(r31)
    cmpwi r4, 0x6
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    beq lbl_fn_8032FDE8_00000984
    cmpwi r4, 0x7
    beq lbl_fn_8032FDE8_00000984
    cmpwi r4, 0xe
    beq lbl_fn_8032FDE8_00000984
    stw r4, 0x15a8(r31)
lbl_fn_8032FDE8_00000984:
    lwz r0, 0x12a4(r31)
    li r3, 0xb
    stw r3, 0x58c(r31)
    mr r3, r31
    rlwinm r0, r0, 0, 27, 25
    addi r4, r31, 0x14c0
    stw r0, 0x12a4(r31)
    li r5, 0x0
    bl fn_80155A88
    b lbl_fn_8032FDE8_000009D0
lbl_fn_8032FDE8_000009AC:
    lwz r3, 0x157c(r31)
    lwz r0, 0x15a0(r31)
    addi r3, r3, 0x1
    cmpw r0, r3
    ble lbl_fn_8032FDE8_000009C4
    mr r3, r0
lbl_fn_8032FDE8_000009C4:
    li r0, 0x1
    stw r3, 0x15a0(r31)
    stw r0, 0x17c0(r31)
lbl_fn_8032FDE8_000009D0:
    li r0, 0x0
    stw r0, 0x17bc(r31)
lbl_fn_8032FDE8_000009D8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8032FFF8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_8032FFF8_00000B90
    lwz r4, 0xd1c(r3)
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8032FFF8_00000A90
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_8032FFF8_00000A44
    cmpwi r0, 0x7
    beq lbl_fn_8032FFF8_00000A44
    li r0, 0x0
    stw r0, 0x15a0(r3)
lbl_fn_8032FFF8_00000A44:
    li r30, 0x0
    stw r30, 0x14b8(r3)
    stw r30, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r31)
    li r0, 0x1
    stw r3, 0x590(r31)
    cmpwi r4, 0x6
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    beq lbl_fn_8032FFF8_00000A88
    cmpwi r4, 0x7
    beq lbl_fn_8032FFF8_00000A88
    cmpwi r4, 0xe
    beq lbl_fn_8032FFF8_00000A88
    stw r4, 0x15a8(r31)
lbl_fn_8032FFF8_00000A88:
    li r0, 0x6
    stw r0, 0x58c(r31)
lbl_fn_8032FFF8_00000A90:
    lwz r0, 0x105c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8032FFF8_00000B18
    mr r3, r31
    bl fn_8032F0EC
    cmpwi r3, 0x0
    bne lbl_fn_8032FFF8_00000BF8
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_8032FFF8_00000AC8
    cmpwi r0, 0x7
    beq lbl_fn_8032FFF8_00000AC8
    li r0, 0x0
    stw r0, 0x15a0(r31)
lbl_fn_8032FFF8_00000AC8:
    li r30, 0x0
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r31)
    li r0, 0x1
    stw r3, 0x590(r31)
    cmpwi r4, 0x6
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    beq lbl_fn_8032FFF8_00000B0C
    cmpwi r4, 0x7
    beq lbl_fn_8032FFF8_00000B0C
    cmpwi r4, 0xe
    beq lbl_fn_8032FFF8_00000B0C
    stw r4, 0x15a8(r31)
lbl_fn_8032FFF8_00000B0C:
    li r0, 0x6
    stw r0, 0x58c(r31)
    b lbl_fn_8032FFF8_00000BF8
lbl_fn_8032FFF8_00000B18:
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x78
    ble lbl_fn_8032FFF8_00000BF8
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_8032FFF8_00000B40
    cmpwi r0, 0x7
    beq lbl_fn_8032FFF8_00000B40
    li r0, 0x0
    stw r0, 0x15a0(r31)
lbl_fn_8032FFF8_00000B40:
    li r30, 0x0
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r31)
    li r0, 0x1
    stw r3, 0x590(r31)
    cmpwi r4, 0x6
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    beq lbl_fn_8032FFF8_00000B84
    cmpwi r4, 0x7
    beq lbl_fn_8032FFF8_00000B84
    cmpwi r4, 0xe
    beq lbl_fn_8032FFF8_00000B84
    stw r4, 0x15a8(r31)
lbl_fn_8032FFF8_00000B84:
    li r0, 0x6
    stw r0, 0x58c(r31)
    b lbl_fn_8032FFF8_00000BF8
lbl_fn_8032FFF8_00000B90:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_8032FFF8_00000BAC
    cmpwi r0, 0x7
    beq lbl_fn_8032FFF8_00000BAC
    li r0, 0x0
    stw r0, 0x15a0(r3)
lbl_fn_8032FFF8_00000BAC:
    li r30, 0x0
    stw r30, 0x14b8(r3)
    stw r30, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r31)
    li r0, 0x1
    stw r3, 0x590(r31)
    cmpwi r4, 0x6
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    beq lbl_fn_8032FFF8_00000BF0
    cmpwi r4, 0x7
    beq lbl_fn_8032FFF8_00000BF0
    cmpwi r4, 0xe
    beq lbl_fn_8032FFF8_00000BF0
    stw r4, 0x15a8(r31)
lbl_fn_8032FFF8_00000BF0:
    li r0, 0x6
    stw r0, 0x58c(r31)
lbl_fn_8032FFF8_00000BF8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80330218(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    stfd f31, 0x200(r1)
    psq_st f31, 0x208(r1), 0, 0
    stfd f30, 0x1f0(r1)
    psq_st f30, 0x1f8(r1), 0, 0
    stfd f29, 0x1e0(r1)
    psq_st f29, 0x1e8(r1), 0, 0
    stw r31, 0x1dc(r1)
    mr r31, r3
    stw r30, 0x1d8(r1)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80330218_00000C58
    cmpwi r0, 0x7
    beq lbl_fn_80330218_00000EAC
    b lbl_fn_80330218_000016D4
lbl_fn_80330218_00000C58:
    bl fn_80158BB4
    cmpwi r3, 0x0
    bne lbl_fn_80330218_00000E1C
    lwz r0, 0x560(r31)
    cmpwi r0, 0x4
    beq lbl_fn_80330218_00000C78
    cmpwi r0, 0x9
    bne lbl_fn_80330218_00000CB0
lbl_fn_80330218_00000C78:
    lfs f29, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_808850DC
    fsubs f0, f1, f0
    fcmpo cr0, f29, f0
    cror eq, gt, eq
    bne lbl_fn_80330218_00000CB0
    lfs f3, lbl_808850E0
    lfs f0, 0x1580(r31)
    fadds f0, f3, f0
    fdivs f0, f3, f0
    stfs f0, 0x2e8(r31)
lbl_fn_80330218_00000CB0:
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_80330218_0000173C
    mr r3, r31
    bl fn_80158CA4
    cmpwi r3, 0x0
    beq lbl_fn_80330218_0000173C
    lwz r0, 0xf80(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80330218_00000CF8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x1c0(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x1c4(r1)
    stw r0, 0x1c8(r1)
    b lbl_fn_80330218_00000D14
lbl_fn_80330218_00000CF8:
    lis r5, lbl_80788E80@ha
    lwzu r4, lbl_80788E80@l(r5)
    stw r4, 0x1c0(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x1c4(r1)
    stw r0, 0x1c8(r1)
lbl_fn_80330218_00000D14:
    lwz r5, 0x1c0(r1)
    addi r3, r1, 0xc8
    lwz r4, 0x1c4(r1)
    lwz r0, 0x1c8(r1)
    stw r5, 0xc8(r1)
    stw r4, 0xcc(r1)
    stw r0, 0xd0(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80330218_00000D88
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    lwz r0, 0x598(r31)
    cmpw r3, r0
    ble lbl_fn_80330218_00000D88
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    li r0, 0x1
    stw r3, 0x598(r31)
    stw r0, 0x594(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
lbl_fn_80330218_00000D88:
    lwz r0, 0x594(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80330218_0000173C
    mr r3, r31
    bl fn_80144710
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r7, 0x638(r31)
    li r4, 0x0
    lwz r8, 0x590(r31)
    li r5, 0x0
    lfs f1, lbl_80885078
    li r9, 0x1e
    lwz r10, 0x594(r31)
    bl fn_800F8C6C
    cmpwi r3, 0x0
    beq lbl_fn_80330218_00000E04
    lwz r4, lbl_8087F8A0
    lwz r4, 0x48(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80330218_00000DFC
    lwz r0, 0x12a4(r4)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_80330218_00000DFC
    li r4, 0x1
    li r0, 0x1e
    stw r4, 0x1590(r31)
    stw r0, 0x1594(r31)
    b lbl_fn_80330218_00000E04
lbl_fn_80330218_00000DFC:
    li r0, 0x0
    stw r0, 0x1590(r31)
lbl_fn_80330218_00000E04:
    lwz r0, 0x594(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80330218_0000173C
    subf r0, r3, r0
    stw r0, 0x594(r31)
    b lbl_fn_80330218_0000173C
lbl_fn_80330218_00000E1C:
    lwz r3, 0x560(r31)
    cmpwi r3, 0x4
    beq lbl_fn_80330218_00000E34
    subi r0, r3, 0x9
    cmplwi r0, 0x1
    bgt lbl_fn_80330218_00000E40
lbl_fn_80330218_00000E34:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
lbl_fn_80330218_00000E40:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_80330218_00000E5C
    cmpwi r0, 0x7
    beq lbl_fn_80330218_00000E5C
    li r0, 0x0
    stw r0, 0x15a0(r31)
lbl_fn_80330218_00000E5C:
    li r30, 0x0
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r31)
    li r0, 0x1
    stw r3, 0x590(r31)
    cmpwi r4, 0x6
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    beq lbl_fn_80330218_00000EA0
    cmpwi r4, 0x7
    beq lbl_fn_80330218_00000EA0
    cmpwi r4, 0xe
    beq lbl_fn_80330218_00000EA0
    stw r4, 0x15a8(r31)
lbl_fn_80330218_00000EA0:
    li r0, 0x6
    stw r0, 0x58c(r31)
    b lbl_fn_80330218_0000173C
lbl_fn_80330218_00000EAC:
    lwz r4, 0xd1c(r3)
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80330218_00000F28
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80330218_00000EDC
    cmpwi r0, 0x7
    beq lbl_fn_80330218_00000EDC
    li r0, 0x0
    stw r0, 0x15a0(r3)
lbl_fn_80330218_00000EDC:
    li r30, 0x0
    stw r30, 0x14b8(r3)
    stw r30, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r31)
    li r0, 0x1
    stw r3, 0x590(r31)
    cmpwi r4, 0x6
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    beq lbl_fn_80330218_00000F20
    cmpwi r4, 0x7
    beq lbl_fn_80330218_00000F20
    cmpwi r4, 0xe
    beq lbl_fn_80330218_00000F20
    stw r4, 0x15a8(r31)
lbl_fn_80330218_00000F20:
    li r0, 0x6
    stw r0, 0x58c(r31)
lbl_fn_80330218_00000F28:
    lwz r0, 0x105c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80330218_000012A4
    lwz r4, 0xd1c(r31)
    lfs f31, lbl_8088507C
    cmpwi r4, 0x0
    beq lbl_fn_80330218_000011F8
    lfs f3, 0x530(r4)
    addi r3, r1, 0xbc
    lfs f0, 0x530(r31)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc0(r1)
    stfs f0, 0xbc(r1)
    stfs f6, 0xc4(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_808850BC
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_80330218_00000F9C
    addi r3, r1, 0xbc
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80330218_00000F9C:
    lfs f2, 0xc4(r1)
    addi r3, r1, 0xbc
    lfs f0, lbl_808850BC
    addi r30, r1, 0xb0
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0xb8(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80330218_00000FEC
    lfs f3, 0xb0(r1)
    lfs f0, lbl_80885078
    fcmpo cr0, f3, f0
    ble lbl_fn_80330218_00000FE0
    lfs f0, lbl_808850C0
    b lbl_fn_80330218_00000FE4
lbl_fn_80330218_00000FE0:
    lfs f0, lbl_808850C4
lbl_fn_80330218_00000FE4:
    stfs f0, 0xa8(r1)
    b lbl_fn_80330218_00001000
lbl_fn_80330218_00000FEC:
    frsp f2, f2
    lfs f1, 0xb0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xa8(r1)
lbl_fn_80330218_00001000:
    lfs f0, 0xa8(r1)
    addi r3, r1, 0x150
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885078
    addi r4, r1, 0x98
    lfs f29, 0x158(r1)
    mr r5, r4
    lfs f30, 0x154(r1)
    addi r3, r1, 0x180
    lfs f13, 0x150(r1)
    lfs f12, 0x168(r1)
    lfs f11, 0x164(r1)
    lfs f10, 0x160(r1)
    lfs f9, 0x178(r1)
    lfs f8, 0x174(r1)
    lfs f7, 0x170(r1)
    lfs f6, 0x17c(r1)
    lfs f5, 0x16c(r1)
    lfs f4, 0x15c(r1)
    lfs f0, lbl_8088507C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xb8(r1)
    stfs f3, 0x1b0(r1)
    stfs f3, 0x1b4(r1)
    stfs f3, 0x1b8(r1)
    stfs f0, 0x1bc(r1)
    stfs f13, 0x68(r1)
    stfs f30, 0x6c(r1)
    stfs f29, 0x70(r1)
    stfs f13, 0x180(r1)
    stfs f30, 0x184(r1)
    stfs f29, 0x188(r1)
    stfs f10, 0x74(r1)
    stfs f11, 0x78(r1)
    stfs f12, 0x7c(r1)
    stfs f10, 0x190(r1)
    stfs f11, 0x194(r1)
    stfs f12, 0x198(r1)
    stfs f7, 0x80(r1)
    stfs f8, 0x84(r1)
    stfs f9, 0x88(r1)
    stfs f7, 0x1a0(r1)
    stfs f8, 0x1a4(r1)
    stfs f9, 0x1a8(r1)
    stfs f4, 0x8c(r1)
    stfs f5, 0x90(r1)
    stfs f6, 0x94(r1)
    stfs f4, 0x18c(r1)
    stfs f5, 0x19c(r1)
    stfs f6, 0x1ac(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xa0(r1)
    bl fn_805F9750
    lfs f2, 0xa0(r1)
    lfs f0, lbl_808850BC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80330218_0000111C
    lfs f3, 0x9c(r1)
    lfs f0, lbl_80885078
    fcmpo cr0, f3, f0
    ble lbl_fn_80330218_0000110C
    lfs f0, lbl_808850C0
    b lbl_fn_80330218_00001110
lbl_fn_80330218_0000110C:
    lfs f0, lbl_808850C4
lbl_fn_80330218_00001110:
    fneg f0, f0
    stfs f0, 0xa4(r1)
    b lbl_fn_80330218_00001130
lbl_fn_80330218_0000111C:
    lfs f1, 0x9c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xa4(r1)
lbl_fn_80330218_00001130:
    addi r3, r1, 0xa4
    lfs f2, lbl_80885078
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f4, 0x538(r31)
    lfs f3, 0xb4(r1)
    lfs f0, lbl_808850B8
    fsubs f3, f3, f4
    stfs f2, 0xac(r1)
    stfs f2, 0xb8(r1)
    fcmpo cr0, f3, f0
    ble lbl_fn_80330218_00001170
    lfs f0, lbl_808850A4
    fsubs f0, f3, f0
    fmadds f29, f31, f0, f4
    b lbl_fn_80330218_00001190
lbl_fn_80330218_00001170:
    lfs f0, lbl_808850A0
    fcmpo cr0, f3, f0
    bge lbl_fn_80330218_0000118C
    lfs f0, lbl_808850A4
    fadds f0, f0, f3
    fmadds f29, f31, f0, f4
    b lbl_fn_80330218_00001190
lbl_fn_80330218_0000118C:
    fmadds f29, f31, f3, f4
lbl_fn_80330218_00001190:
    lfs f0, 0x538(r31)
    lis r3, lbl_80749F68@ha
    lfd f2, lbl_80749F68@l(r3)
    fsubs f1, f29, f0
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808850B8
    fcmpo cr0, f3, f0
    ble lbl_fn_80330218_000011BC
    lfs f0, lbl_808850A4
    fsubs f3, f3, f0
lbl_fn_80330218_000011BC:
    lfs f0, lbl_808850A0
    fcmpo cr0, f3, f0
    lis r3, lbl_80749F68@ha
    frsp f1, f29
    stfs f29, 0x538(r31)
    lfd f2, lbl_80749F68@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808850B8
    fcmpo cr0, f3, f0
    ble lbl_fn_80330218_000011F0
    lfs f0, lbl_808850A4
    fsubs f3, f3, f0
lbl_fn_80330218_000011F0:
    lfs f0, lbl_808850A0
    fcmpo cr0, f3, f0
lbl_fn_80330218_000011F8:
    lwz r5, 0xd1c(r31)
    mr r4, r31
    li r3, 0x0
    bl fn_80041A28
    lwz r0, 0x17c0(r31)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_80330218_00001230
    lwz r3, 0xd1c(r31)
    mr r4, r31
    bl fn_8016ADF4
    cmpwi r3, 0x0
    beq lbl_fn_80330218_00001230
    li r30, 0x5
lbl_fn_80330218_00001230:
    cmpwi r30, 0x2
    li r0, 0x0
    stw r0, 0x17c0(r31)
    bne lbl_fn_80330218_0000125C
    lwz r5, 0xd1c(r31)
    mr r3, r31
    lwz r4, 0x14d0(r31)
    lfs f1, lbl_808850E4
    addi r5, r5, 0x528
    bl fn_8015783C
    b lbl_fn_80330218_0000173C
lbl_fn_80330218_0000125C:
    cmpwi r30, 0x5
    bne lbl_fn_80330218_00001278
    lwz r4, 0x14d0(r31)
    mr r3, r31
    lwz r5, 0xd1c(r31)
    bl fn_8015802C
    b lbl_fn_80330218_0000173C
lbl_fn_80330218_00001278:
    lwz r5, 0xd1c(r31)
    mr r3, r31
    lwz r4, 0x14d0(r31)
    li r6, 0x0
    lfs f1, lbl_808850E4
    addi r5, r5, 0x528
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_801562A0
    b lbl_fn_80330218_0000173C
lbl_fn_80330218_000012A4:
    lwz r4, 0xd1c(r31)
    addi r3, r1, 0xd4
    lfs f0, 0x530(r31)
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xd8(r1)
    stfs f0, 0xd4(r1)
    stfs f6, 0xdc(r1)
    bl fn_805F9940
    lfs f0, lbl_808850E8
    fcmpo cr0, f1, f0
    bge lbl_fn_80330218_0000165C
    lwz r4, 0xd1c(r31)
    lfs f31, lbl_8088507C
    cmpwi r4, 0x0
    beq lbl_fn_80330218_000015B0
    lfs f3, 0x530(r4)
    addi r3, r1, 0x5c
    lfs f0, 0x530(r31)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x60(r1)
    stfs f0, 0x5c(r1)
    stfs f6, 0x64(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_808850BC
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_80330218_00001354
    addi r3, r1, 0x5c
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80330218_00001354:
    lfs f2, 0x64(r1)
    addi r3, r1, 0x5c
    lfs f0, lbl_808850BC
    addi r30, r1, 0x50
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80330218_000013A4
    lfs f3, 0x50(r1)
    lfs f0, lbl_80885078
    fcmpo cr0, f3, f0
    ble lbl_fn_80330218_00001398
    lfs f0, lbl_808850C0
    b lbl_fn_80330218_0000139C
lbl_fn_80330218_00001398:
    lfs f0, lbl_808850C4
lbl_fn_80330218_0000139C:
    stfs f0, 0x48(r1)
    b lbl_fn_80330218_000013B8
lbl_fn_80330218_000013A4:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80330218_000013B8:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xe0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885078
    addi r4, r1, 0x38
    lfs f30, 0xe8(r1)
    mr r5, r4
    lfs f29, 0xe4(r1)
    addi r3, r1, 0x110
    lfs f13, 0xe0(r1)
    lfs f12, 0xf8(r1)
    lfs f11, 0xf4(r1)
    lfs f10, 0xf0(r1)
    lfs f9, 0x108(r1)
    lfs f8, 0x104(r1)
    lfs f7, 0x100(r1)
    lfs f6, 0x10c(r1)
    lfs f5, 0xfc(r1)
    lfs f4, 0xec(r1)
    lfs f0, lbl_8088507C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0x140(r1)
    stfs f3, 0x144(r1)
    stfs f3, 0x148(r1)
    stfs f0, 0x14c(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x110(r1)
    stfs f29, 0x114(r1)
    stfs f30, 0x118(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x120(r1)
    stfs f11, 0x124(r1)
    stfs f12, 0x128(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x130(r1)
    stfs f8, 0x134(r1)
    stfs f9, 0x138(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x11c(r1)
    stfs f5, 0x12c(r1)
    stfs f6, 0x13c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808850BC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80330218_000014D4
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80885078
    fcmpo cr0, f3, f0
    ble lbl_fn_80330218_000014C4
    lfs f0, lbl_808850C0
    b lbl_fn_80330218_000014C8
lbl_fn_80330218_000014C4:
    lfs f0, lbl_808850C4
lbl_fn_80330218_000014C8:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80330218_000014E8
lbl_fn_80330218_000014D4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80330218_000014E8:
    addi r3, r1, 0x44
    lfs f2, lbl_80885078
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f4, 0x538(r31)
    lfs f3, 0x54(r1)
    lfs f0, lbl_808850B8
    fsubs f3, f3, f4
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    ble lbl_fn_80330218_00001528
    lfs f0, lbl_808850A4
    fsubs f0, f3, f0
    fmadds f29, f31, f0, f4
    b lbl_fn_80330218_00001548
lbl_fn_80330218_00001528:
    lfs f0, lbl_808850A0
    fcmpo cr0, f3, f0
    bge lbl_fn_80330218_00001544
    lfs f0, lbl_808850A4
    fadds f0, f0, f3
    fmadds f29, f31, f0, f4
    b lbl_fn_80330218_00001548
lbl_fn_80330218_00001544:
    fmadds f29, f31, f3, f4
lbl_fn_80330218_00001548:
    lfs f0, 0x538(r31)
    lis r3, lbl_80749F68@ha
    lfd f2, lbl_80749F68@l(r3)
    fsubs f1, f29, f0
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808850B8
    fcmpo cr0, f3, f0
    ble lbl_fn_80330218_00001574
    lfs f0, lbl_808850A4
    fsubs f3, f3, f0
lbl_fn_80330218_00001574:
    lfs f0, lbl_808850A0
    fcmpo cr0, f3, f0
    lis r3, lbl_80749F68@ha
    frsp f1, f29
    stfs f29, 0x538(r31)
    lfd f2, lbl_80749F68@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808850B8
    fcmpo cr0, f3, f0
    ble lbl_fn_80330218_000015A8
    lfs f0, lbl_808850A4
    fsubs f3, f3, f0
lbl_fn_80330218_000015A8:
    lfs f0, lbl_808850A0
    fcmpo cr0, f3, f0
lbl_fn_80330218_000015B0:
    lwz r5, 0xd1c(r31)
    mr r4, r31
    li r3, 0x0
    bl fn_80041A28
    lwz r0, 0x17c0(r31)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_80330218_000015E8
    lwz r3, 0xd1c(r31)
    mr r4, r31
    bl fn_8016ADF4
    cmpwi r3, 0x0
    beq lbl_fn_80330218_000015E8
    li r30, 0x5
lbl_fn_80330218_000015E8:
    cmpwi r30, 0x2
    li r0, 0x0
    stw r0, 0x17c0(r31)
    bne lbl_fn_80330218_00001614
    lwz r5, 0xd1c(r31)
    mr r3, r31
    lwz r4, 0x14d0(r31)
    lfs f1, lbl_808850E4
    addi r5, r5, 0x528
    bl fn_8015783C
    b lbl_fn_80330218_0000173C
lbl_fn_80330218_00001614:
    cmpwi r30, 0x5
    bne lbl_fn_80330218_00001630
    lwz r4, 0x14d0(r31)
    mr r3, r31
    lwz r5, 0xd1c(r31)
    bl fn_8015802C
    b lbl_fn_80330218_0000173C
lbl_fn_80330218_00001630:
    lwz r5, 0xd1c(r31)
    mr r3, r31
    lwz r4, 0x14d0(r31)
    li r6, 0x0
    lfs f1, lbl_808850E4
    addi r5, r5, 0x528
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_801562A0
    b lbl_fn_80330218_0000173C
lbl_fn_80330218_0000165C:
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x78
    ble lbl_fn_80330218_0000173C
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_80330218_00001684
    cmpwi r0, 0x7
    beq lbl_fn_80330218_00001684
    li r0, 0x0
    stw r0, 0x15a0(r31)
lbl_fn_80330218_00001684:
    li r30, 0x0
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r31)
    li r0, 0x1
    stw r3, 0x590(r31)
    cmpwi r4, 0x6
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    beq lbl_fn_80330218_000016C8
    cmpwi r4, 0x7
    beq lbl_fn_80330218_000016C8
    cmpwi r4, 0xe
    beq lbl_fn_80330218_000016C8
    stw r4, 0x15a8(r31)
lbl_fn_80330218_000016C8:
    li r0, 0x6
    stw r0, 0x58c(r31)
    b lbl_fn_80330218_0000173C
lbl_fn_80330218_000016D4:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80330218_000016F0
    cmpwi r0, 0x7
    beq lbl_fn_80330218_000016F0
    li r0, 0x0
    stw r0, 0x15a0(r3)
lbl_fn_80330218_000016F0:
    li r30, 0x0
    stw r30, 0x14b8(r3)
    stw r30, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r31)
    li r0, 0x1
    stw r3, 0x590(r31)
    cmpwi r4, 0x6
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    beq lbl_fn_80330218_00001734
    cmpwi r4, 0x7
    beq lbl_fn_80330218_00001734
    cmpwi r4, 0xe
    beq lbl_fn_80330218_00001734
    stw r4, 0x15a8(r31)
lbl_fn_80330218_00001734:
    li r0, 0x6
    stw r0, 0x58c(r31)
lbl_fn_80330218_0000173C:
    lwz r0, 0x214(r1)
    psq_l f31, 0x208(r1), 0, 0
    lfd f31, 0x200(r1)
    psq_l f30, 0x1f8(r1), 0, 0
    lfd f30, 0x1f0(r1)
    psq_l f29, 0x1e8(r1), 0, 0
    lfd f29, 0x1e0(r1)
    lwz r31, 0x1dc(r1)
    lwz r30, 0x1d8(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_80330D74(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    stfd f30, 0x90(r1)
    psq_st f30, 0x98(r1), 0, 0
    stfd f29, 0x80(r1)
    psq_st f29, 0x88(r1), 0, 0
    stfd f28, 0x70(r1)
    psq_st f28, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    lwz r0, 0x55c(r3)
    lwz r6, lbl_8087F430
    cmpwi r0, 0x6
    beq lbl_fn_80330D74_000017C0
    cmpwi r0, 0x7
    beq lbl_fn_80330D74_00001A54
    b lbl_fn_80330D74_000019EC
lbl_fn_80330D74_000017C0:
    lwz r0, 0x560(r3)
    cmpwi r0, 0xd
    beq lbl_fn_80330D74_00001A54
    cmpwi r0, 0xe
    bne lbl_fn_80330D74_00001960
    addi r4, r1, 0x14
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x14cc(r3)
    lfs f0, 0x18(r1)
    lfs f28, lbl_808850EC
    cmpwi r0, 0x0
    lfs f2, 0x530(r3)
    fadds f0, f0, f28
    stfs f2, 0x1c(r1)
    stfs f0, 0x18(r1)
    bne lbl_fn_80330D74_00001944
    lfs f29, 0x594(r6)
    addi r5, r6, 0x4d8
    lfs f30, 0x59c(r6)
    lfs f31, 0x5a0(r6)
    lfs f13, 0x5a4(r6)
    lfs f12, 0x5a8(r6)
    lfs f11, 0x5ac(r6)
    lfs f10, 0x5b0(r6)
    lfs f9, 0x5b4(r6)
    lfs f8, 0x5b8(r6)
    lfs f7, 0x5bc(r6)
    lwz r4, 0x5c0(r6)
    lfs f6, lbl_808850F0
    stw r3, 0x8a0(r6)
    lfs f5, lbl_808850AC
    lwz r0, 0x4d8(r6)
    lfs f4, lbl_808850F4
    cmpwi r0, 0x4
    stfs f29, 0x2c(r1)
    stfs f30, 0x34(r1)
    stfs f31, 0x38(r1)
    stfs f13, 0x3c(r1)
    stfs f12, 0x40(r1)
    stfs f11, 0x44(r1)
    stfs f10, 0x48(r1)
    stfs f9, 0x4c(r1)
    stfs f8, 0x50(r1)
    stfs f7, 0x54(r1)
    stw r4, 0x58(r1)
    stfs f6, 0x28(r1)
    stfs f5, 0x24(r1)
    stfs f28, 0x20(r1)
    stfs f4, 0x30(r1)
    beq lbl_fn_80330D74_000018E0
    li r0, 0x4
    stw r0, 0x0(r5)
    lfs f3, lbl_8088508C
    stfs f28, 0xc(r5)
    lfs f0, lbl_8088507C
    stfs f5, 0x10(r5)
    stfs f6, 0x14(r5)
    stfs f29, 0x18(r5)
    stfs f4, 0x1c(r5)
    stfs f30, 0x20(r5)
    stfs f31, 0x24(r5)
    stfs f13, 0x28(r5)
    stfs f12, 0x2c(r5)
    stfs f11, 0x30(r5)
    stfs f10, 0x34(r5)
    stfs f9, 0x38(r5)
    stfs f8, 0x3c(r5)
    stfs f7, 0x40(r5)
    stw r4, 0x44(r5)
    stfs f3, 0x8(r5)
    stfs f0, 0x4(r5)
lbl_fn_80330D74_000018E0:
    addi r5, r1, 0x8
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    li r0, 0x1
    lfs f2, 0x530(r3)
    lfs f3, 0xc(r1)
    lfs f0, lbl_808850E8
    lbzu r4, 0x97c(r6)
    fadds f0, f3, f0
    stb r4, 0x1(r6)
    lfs f3, lbl_80885078
    stfs f0, 0xc(r1)
    stb r0, 0x0(r6)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0xc(r6), 0, 0
    stfs f2, 0x14(r6)
    stfs f2, 0x10(r1)
    stfs f3, 0x24(r6)
    b lbl_fn_80330D74_00001930
    b lbl_fn_80330D74_00001934
lbl_fn_80330D74_00001930:
    li r0, 0x0
lbl_fn_80330D74_00001934:
    stw r0, 0x4(r6)
    li r0, 0x1
    stw r0, 0x14cc(r3)
    b lbl_fn_80330D74_00001A54
lbl_fn_80330D74_00001944:
    stw r3, 0x8a0(r6)
    addi r3, r6, 0x988
    psq_l f1, 0x0(r4), 0, 0
    frsp f2, f2
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x990(r6)
    b lbl_fn_80330D74_00001A54
lbl_fn_80330D74_00001960:
    lwz r0, 0x14cc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80330D74_00001980
    li r0, 0x0
    stw r0, 0x8a0(r6)
    stw r0, 0x4d8(r6)
    stb r0, 0x97c(r6)
    stw r0, 0x14cc(r3)
lbl_fn_80330D74_00001980:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80330D74_0000199C
    cmpwi r0, 0x7
    beq lbl_fn_80330D74_0000199C
    li r0, 0x0
    stw r0, 0x15a0(r3)
lbl_fn_80330D74_0000199C:
    li r30, 0x0
    stw r30, 0x14b8(r3)
    stw r30, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r31)
    li r0, 0x1
    stw r3, 0x590(r31)
    cmpwi r4, 0x6
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    beq lbl_fn_80330D74_000019E0
    cmpwi r4, 0x7
    beq lbl_fn_80330D74_000019E0
    cmpwi r4, 0xe
    beq lbl_fn_80330D74_000019E0
    stw r4, 0x15a8(r31)
lbl_fn_80330D74_000019E0:
    li r0, 0x6
    stw r0, 0x58c(r31)
    b lbl_fn_80330D74_00001A54
lbl_fn_80330D74_000019EC:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80330D74_00001A08
    cmpwi r0, 0x7
    beq lbl_fn_80330D74_00001A08
    li r0, 0x0
    stw r0, 0x15a0(r3)
lbl_fn_80330D74_00001A08:
    li r30, 0x0
    stw r30, 0x14b8(r3)
    stw r30, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r31)
    li r0, 0x1
    stw r3, 0x590(r31)
    cmpwi r4, 0x6
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    beq lbl_fn_80330D74_00001A4C
    cmpwi r4, 0x7
    beq lbl_fn_80330D74_00001A4C
    cmpwi r4, 0xe
    beq lbl_fn_80330D74_00001A4C
    stw r4, 0x15a8(r31)
lbl_fn_80330D74_00001A4C:
    li r0, 0x6
    stw r0, 0x58c(r31)
lbl_fn_80330D74_00001A54:
    lwz r0, 0xb4(r1)
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    psq_l f30, 0x98(r1), 0, 0
    lfd f30, 0x90(r1)
    psq_l f29, 0x88(r1), 0, 0
    lfd f29, 0x80(r1)
    psq_l f28, 0x78(r1), 0, 0
    lfd f28, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}
