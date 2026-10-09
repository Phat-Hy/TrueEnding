#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013F78(void);
extern void fn_80057F28(void);
extern void fn_80058078(void);
extern void fn_800580BC(void);
extern void fn_800588FC(void);
extern void fn_80059550(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AF38(void);
extern void fn_800844D8(void);
extern void fn_80097A88(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800CFD18(void);
extern void fn_800E2DD4(void);
extern void fn_800E2FE0(void);
extern void fn_800EF73C(void);
extern void fn_80145334(void);
extern void fn_8014C540(void);
extern void fn_80151448(void);
extern void fn_80232B7C(void);
extern void fn_80237518(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_8023A8B4(void);
extern void fn_8035B694(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_803750E4(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473F50(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_806827C4(void);
extern void fn_80684600(void);
extern void fn_80686EA4(void);
extern void fn_806958E0(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80749B00[];
extern u8 lbl_80749B80[];
extern u8 lbl_80749D10[];
extern u8 lbl_80749DA0[];
extern u8 lbl_80749DC0[];
extern u8 lbl_80775A88[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80788D20[];
extern u8 lbl_8078FBB0[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_80884F10;
extern u32 lbl_80885034;
extern u32 lbl_80885038;
extern u32 lbl_8088503C;
extern u32 lbl_80885040;
extern u32 lbl_80885044;
extern u32 lbl_80885048;
extern u32 lbl_8088504C;
extern u32 lbl_80885050;
extern u32 lbl_80885054;
extern u32 lbl_80885058;
extern u32 lbl_8088505C;
extern u32 lbl_80885060;

/* Function declarations */
void fn_8032BE88(void);
void fn_8032C1EC(void);
void fn_8032C3CC(void);
void fn_8032C4F8(void);
void fn_8032C524(void);
void fn_8032C52C(void);
void fn_8032C850(void);
void fn_8032C964(void);
void fn_8032CBFC(void);
void fn_8032CF10(void);
void fn_8032D1F4(void);
void fn_8032D48C(void);
void fn_8032D5EC(void);

asm void fn_8032BE88(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r3
    stw r28, 0x30(r1)
    lwz r5, 0x4(r3)
    cmplw r4, r5
    ble lbl_fn_8032BE88_00000334
    lwz r6, 0x8(r3)
    subf r30, r5, r4
    cmplw r30, r6
    bgt lbl_fn_8032BE88_00000048
    subf r0, r30, r6
    cmplw r5, r0
    ble lbl_fn_8032BE88_000000B8
lbl_fn_8032BE88_00000048:
    lwz r5, 0x4(r3)
    lis r4, 0x4000
    lwz r31, 0x8(r3)
    subi r0, r4, 0x1
    add r3, r5, r30
    subf r3, r6, r3
    subf r0, r31, r0
    cmplw r3, r0
    ble lbl_fn_8032BE88_00000090
    lis r4, lbl_80749D10@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80749D10@l
    addi r3, r3, __files@l
    addi r4, r4, 0x46
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8032BE88_00000090:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_8032BE88_000000A4
    b lbl_fn_8032BE88_000000E0
lbl_fn_8032BE88_000000A4:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_8032BE88_000000E0
    b lbl_fn_8032BE88_000000E0
lbl_fn_8032BE88_000000B8:
    lwz r3, 0x0(r3)
    slwi r0, r5, 2
    slwi r5, r30, 2
    li r4, 0x0
    add r3, r3, r0
    bl memset
    lwz r0, 0x4(r29)
    add r0, r0, r30
    stw r0, 0x4(r29)
    b lbl_fn_8032BE88_00000344
lbl_fn_8032BE88_000000E0:
    li r5, 0x0
    addi r4, r29, 0x8
    lis r3, 0x4000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    add r3, r3, r30
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_8032BE88_00000148
    lis r4, lbl_80749D10@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80749D10@l
    addi r3, r3, __files@l
    addi r4, r4, 0x46
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8032BE88_00000148:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_8032BE88_00000198
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_8032BE88_0000018C
    addi r3, r1, 0x8
lbl_fn_8032BE88_0000018C:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_8032BE88_000001DC
lbl_fn_8032BE88_00000198:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_8032BE88_000001D4
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_8032BE88_000001C8
    addi r3, r1, 0x8
lbl_fn_8032BE88_000001C8:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_8032BE88_000001DC
lbl_fn_8032BE88_000001D4:
    lis r3, 0x4000
    subi r28, r3, 0x1
lbl_fn_8032BE88_000001DC:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r28, r0
    ble lbl_fn_8032BE88_00000210
    lis r4, lbl_80749D10@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80749D10@l
    addi r3, r3, __files@l
    addi r4, r4, 0x46
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8032BE88_00000210:
    slwi r3, r28, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8032BE88_00000244
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8032BE88_00000244:
    lwz r0, 0x18(r1)
    slwi r5, r30, 2
    stw r31, 0x14(r1)
    li r4, 0x0
    slwi r3, r0, 2
    stw r28, 0x1c(r1)
    lwz r0, 0x4(r29)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r31, r0
    add r3, r3, r0
    bl memset
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    add r3, r3, r30
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x4(r29)
    lwz r28, 0x0(r29)
    slwi r4, r4, 2
    add r5, r28, r4
    subf r5, r28, r5
    mr r4, r28
    srawi r5, r5, 2
    addze r30, r5
    subf r0, r30, r0
    stw r0, 0x24(r1)
    slwi r31, r30, 2
    slwi r0, r0, 2
    mr r5, r31
    add r3, r3, r0
    bl memcpy
    mr r3, r28
    mr r5, r31
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    li r4, 0x0
    addic. r3, r1, 0x14
    add r0, r0, r30
    stw r0, 0x18(r1)
    stw r4, 0x4(r29)
    lwz r3, 0x8(r29)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r29)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r29)
    stw r4, 0x18(r1)
    beq lbl_fn_8032BE88_00000344
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8032BE88_00000344
    stw r4, 0x18(r1)
    bl dtor_80084684
    b lbl_fn_8032BE88_00000344
lbl_fn_8032BE88_00000334:
    bge lbl_fn_8032BE88_00000344
    subf r0, r4, r5
    subf r0, r0, r5
    stw r0, 0x4(r3)
lbl_fn_8032BE88_00000344:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8032C1EC(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x50
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    stfd f29, 0x50(r1)
    psq_st f29, 0x58(r1), 0, 0
    bl _savegpr_26
    lwz r0, 0x20(r3)
    slwi r31, r4, 4
    lwz r5, 0x2c(r3)
    lis r4, lbl_80749B80@ha
    add r6, r0, r31
    lwz r0, 0x38(r3)
    add r5, r5, r31
    lfs f29, lbl_80884F10
    lfs f5, 0xc(r6)
    add r7, r0, r31
    lfs f3, 0x8(r6)
    mr r30, r3
    lfs f4, 0xc(r5)
    addi r27, r1, 0x14
    fmadds f8, f5, f29, f3
    lfs f0, 0x8(r5)
    lfs f7, 0x4(r6)
    addi r28, r1, 0x20
    fmadds f6, f4, f29, f0
    lfs f5, 0x4(r5)
    fmadds f8, f29, f8, f7
    lfs f7, 0x0(r6)
    fmadds f6, f29, f6, f5
    lfs f3, 0xc(r7)
    lfs f0, 0x8(r7)
    li r26, 0x0
    fmadds f4, f3, f29, f0
    lfs f3, 0x4(r7)
    fmadds f7, f29, f8, f7
    lfs f5, 0x0(r5)
    lfsx f0, r31, r0
    lis r29, 0x4330
    fmadds f3, f29, f4, f3
    lfd f30, lbl_80749B80@l(r4)
    fmadds f4, f29, f6, f5
    stfs f7, 0x20(r1)
    lfs f31, lbl_80885034
    fmadds f0, f29, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x28(r1)
lbl_fn_8032C1EC_00000430:
    addi r3, r26, 0x1
    lwz r0, 0x20(r30)
    xoris r3, r3, 0x8000
    stw r3, 0x34(r1)
    add r4, r0, r31
    lwz r0, 0x2c(r30)
    stw r29, 0x30(r1)
    addi r3, r1, 0x8
    add r5, r0, r31
    lwz r0, 0x38(r30)
    lfd f0, 0x30(r1)
    add r6, r0, r31
    lfs f7, 0xc(r4)
    fsubs f3, f0, f30
    lfs f5, 0x8(r4)
    lfs f6, 0xc(r5)
    lfs f0, 0x8(r5)
    fmuls f11, f3, f31
    lfs f4, 0xc(r6)
    lfs f3, 0x8(r6)
    lfs f9, 0x4(r4)
    fmadds f10, f7, f11, f5
    lfs f5, 0x4(r5)
    fmadds f7, f6, f11, f0
    lfs f0, 0x4(r6)
    fmadds f4, f4, f11, f3
    lfs f8, 0x0(r4)
    fmadds f9, f11, f10, f9
    lfs f6, 0x0(r5)
    fmadds f7, f11, f7, f5
    lfsx f3, r31, r0
    fmadds f5, f11, f4, f0
    lfs f4, 0x28(r1)
    fmadds f8, f11, f9, f8
    lfs f0, 0x20(r1)
    fmadds f9, f11, f5, f3
    lfs f3, 0x24(r1)
    fmadds f5, f11, f7, f6
    stfs f8, 0x14(r1)
    fsubs f4, f9, f4
    stfs f5, 0x18(r1)
    fsubs f3, f5, f3
    fsubs f0, f8, f0
    stfs f9, 0x1c(r1)
    stfs f0, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9940
    addi r26, r26, 0x1
    fadds f29, f29, f1
    psq_l f1, 0x0(r27), 0, 0
    cmpwi r26, 0x40
    lfs f2, 0x1c(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x28(r1)
    blt lbl_fn_8032C1EC_00000430
    psq_l f31, 0x78(r1), 0, 0
    fmr f1, f29
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    psq_l f29, 0x58(r1), 0, 0
    lfd f29, 0x50(r1)
    addi r11, r1, 0x50
    bl _restgpr_26
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8032C3CC(void)
{
    nofralloc
    lis r3, lbl_80749B00@ha
    li r8, 0x0
    addi r3, r3, lbl_80749B00@l
    lwz r0, 0x0(r3)
    cmpw r5, r0
    beq lbl_fn_8032C3CC_000005F0
    lwz r0, 0xc(r3)
    li r8, 0x1
    cmpw r5, r0
    beq lbl_fn_8032C3CC_000005F0
    lwz r0, 0x18(r3)
    li r8, 0x2
    cmpw r5, r0
    beq lbl_fn_8032C3CC_000005F0
    lwz r0, 0x24(r3)
    li r8, 0x3
    cmpw r5, r0
    beq lbl_fn_8032C3CC_000005F0
    lwz r0, 0x30(r3)
    li r8, 0x4
    cmpw r5, r0
    beq lbl_fn_8032C3CC_000005F0
    lwz r0, 0x3c(r3)
    li r8, 0x5
    cmpw r5, r0
    beq lbl_fn_8032C3CC_000005F0
    lwz r0, 0x48(r3)
    li r8, 0x6
    cmpw r5, r0
    beq lbl_fn_8032C3CC_000005F0
    lwz r0, 0x54(r3)
    li r8, 0x7
    cmpw r5, r0
    beq lbl_fn_8032C3CC_000005F0
    lwz r0, 0x60(r3)
    li r8, 0x8
    cmpw r5, r0
    beq lbl_fn_8032C3CC_000005F0
    lwz r0, 0x6c(r3)
    li r8, 0x9
    cmpw r5, r0
    beq lbl_fn_8032C3CC_000005F0
    li r8, 0xa
lbl_fn_8032C3CC_000005F0:
    lwz r0, 0x0(r4)
    lis r3, 0x6666
    lis r5, lbl_80749B00@ha
    slwi r0, r0, 1
    addi r7, r3, 0x6667
    add r6, r8, r0
    addi r5, r5, lbl_80749B00@l
    mulhw r0, r7, r6
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0xa
    subf r0, r0, r6
    b lbl_fn_8032C3CC_00000654
lbl_fn_8032C3CC_00000628:
    lwz r3, 0x0(r4)
    addi r0, r3, 0x1
    stw r0, 0x0(r4)
    slwi r0, r0, 1
    add r6, r8, r0
    mulhw r0, r7, r6
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0xa
    subf r0, r0, r6
lbl_fn_8032C3CC_00000654:
    mulli r0, r0, 0xc
    add r3, r5, r0
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8032C3CC_00000628
    li r3, 0x1
    blr
}

asm void fn_8032C4F8(void)
{
    nofralloc
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x10
    bne lbl_fn_8032C4F8_00000694
    lfs f1, 0x2e4(r3)
    lfs f0, lbl_80885038
    fcmpo cr0, f1, f0
    bge lbl_fn_8032C4F8_00000694
    li r3, 0x1
    blr
lbl_fn_8032C4F8_00000694:
    li r3, 0x0
    blr
}

asm void fn_8032C524(void)
{
    nofralloc
    lfs f1, lbl_8088503C
    blr
}

asm void fn_8032C52C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stmw r27, 0x3c(r1)
    mr r27, r5
    mr r31, r3
    lwz r5, 0x20(r5)
    bl fn_8035B694
    lis r3, lbl_80788D20@ha
    lis r4, fn_80057F28@ha
    addi r3, r3, lbl_80788D20@l
    lis r5, fn_80059550@ha
    stw r3, 0x0(r31)
    addi r3, r31, 0x14b0
    addi r4, r4, fn_80057F28@l
    addi r5, r5, fn_80059550@l
    li r6, 0x88
    li r7, 0x2
    bl fn_806958E0
    lis r4, fn_802377B8@ha
    lis r5, fn_800EF73C@ha
    addi r3, r31, 0x15c0
    li r6, 0xc
    addi r4, r4, fn_802377B8@l
    addi r5, r5, fn_800EF73C@l
    li r7, 0x4
    bl fn_806958E0
    addi r3, r31, 0x15f0
    bl fn_802377B8
    addi r3, r31, 0x15fc
    bl fn_80237518
    li r29, 0x0
    addi r28, r31, 0x161c
    stw r29, 0x1608(r31)
    mr r3, r28
    stw r29, 0x160c(r31)
    stw r29, 0x1610(r31)
    stw r29, 0x1614(r31)
    stw r29, 0x1618(r31)
    bl fn_80473E74
    lwz r0, 0x54c(r31)
    li r5, -0x1
    lis r3, lbl_8078FBB0@ha
    li r6, 0x5a
    addi r3, r3, lbl_8078FBB0@l
    oris r0, r0, 0x200
    lis r30, lbl_80749DC0@ha
    stw r3, 0x0(r28)
    addi r3, r31, 0x15c0
    stw r27, 0x1624(r31)
    addi r4, r30, lbl_80749DC0@l
    stw r6, 0x1628(r31)
    stw r29, 0x162c(r31)
    stw r29, 0x1650(r31)
    stw r5, 0x1654(r31)
    stw r5, 0x1658(r31)
    stw r5, 0x165c(r31)
    stw r5, 0x1660(r31)
    stw r0, 0x54c(r31)
    bl fn_8023780C
    addi r30, r30, lbl_80749DC0@l
    addi r3, r31, 0x15cc
    addi r4, r30, 0xe
    bl fn_8023780C
    addi r3, r31, 0x15d8
    addi r4, r30, 0x1c
    bl fn_8023780C
    addi r3, r31, 0x15e4
    addi r4, r30, 0x2a
    bl fn_8023780C
    addi r3, r31, 0x15f0
    addi r4, r30, 0x38
    bl fn_8023780C
    addi r3, r31, 0x14b0
    addi r4, r30, 0x46
    bl fn_80058078
    lwz r0, 0x14b8(r31)
    addi r3, r31, 0x1538
    addi r4, r30, 0x54
    clrrwi r0, r0, 1
    stw r0, 0x14b8(r31)
    bl fn_80058078
    lwz r0, 0x1540(r31)
    addi r3, r31, 0xb0
    addi r5, r30, 0x62
    li r4, 0x13f
    clrrwi r0, r0, 1
    stw r0, 0x1540(r31)
    bl fn_80097A88
    addi r3, r31, 0xb0
    addi r5, r30, 0x79
    li r4, 0x140
    bl fn_80097A88
    addi r3, r31, 0x15fc
    addi r4, r30, 0x90
    bl fn_80237654
    stw r29, 0x24(r1)
    addi r3, r27, 0x2c
    addi r4, r30, 0xa1
    stw r29, 0x28(r1)
    stw r29, 0x2c(r1)
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8032C52C_00000948
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8032C52C_00000860
    lbz r0, 0x24(r1)
    clrlwi r28, r0, 25
    b lbl_fn_8032C52C_00000864
lbl_fn_8032C52C_00000860:
    lwz r28, 0x28(r1)
lbl_fn_8032C52C_00000864:
    lbz r0, 0x14(r1)
    addi r3, r3, 0x8
    stb r0, 0x10(r1)
    bl strlen
    add r4, r30, r3
    mr r5, r28
    addi r7, r4, 0x8
    addi r3, r1, 0x24
    addi r6, r30, 0x8
    addi r8, r1, 0x10
    li r4, 0x0
    bl fn_80013F78
    lis r4, lbl_80749DC0@ha
    addi r3, r1, 0x18
    addi r4, r4, lbl_80749DC0@l
    addi r5, r1, 0x24
    addi r4, r4, 0xaa
    bl fn_8006AF38
    lwz r0, 0x24(r1)
    srwi. r3, r0, 31
    bne lbl_fn_8032C52C_000008DC
    lwz r4, 0x18(r1)
    srwi. r0, r4, 31
    bne lbl_fn_8032C52C_000008DC
    lwz r3, 0x1c(r1)
    lwz r0, 0x20(r1)
    stw r4, 0x24(r1)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    b lbl_fn_8032C52C_00000934
lbl_fn_8032C52C_000008DC:
    cmpwi r3, 0x0
    beq lbl_fn_8032C52C_000008EC
    lwz r5, 0x28(r1)
    b lbl_fn_8032C52C_000008F4
lbl_fn_8032C52C_000008EC:
    lbz r0, 0x24(r1)
    clrlwi r5, r0, 25
lbl_fn_8032C52C_000008F4:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8032C52C_00000910
    lbz r0, 0x18(r1)
    addi r6, r1, 0x19
    clrlwi r4, r0, 25
    b lbl_fn_8032C52C_00000918
lbl_fn_8032C52C_00000910:
    lwz r6, 0x20(r1)
    lwz r4, 0x1c(r1)
lbl_fn_8032C52C_00000918:
    lbz r0, 0xc(r1)
    add r7, r6, r4
    stb r0, 0x8(r1)
    addi r3, r1, 0x24
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_8032C52C_00000934:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8032C52C_00000948
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_8032C52C_00000948:
    lwz r0, 0x24(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi. r3, r0, 5
    beq lbl_fn_8032C52C_00000968
    lbz r0, 0x24(r1)
    clrlwi r0, r0, 25
    b lbl_fn_8032C52C_0000096C
lbl_fn_8032C52C_00000968:
    lwz r0, 0x28(r1)
lbl_fn_8032C52C_0000096C:
    cmpwi r0, 0x0
    beq lbl_fn_8032C52C_0000099C
    cmpwi r3, 0x0
    addi r3, r31, 0x161c
    beq lbl_fn_8032C52C_00000988
    addi r4, r1, 0x25
    b lbl_fn_8032C52C_0000098C
lbl_fn_8032C52C_00000988:
    lwz r4, 0x2c(r1)
lbl_fn_8032C52C_0000098C:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_8032C52C_0000099C:
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8032C52C_000009B0
    lwz r3, 0x2c(r1)
    bl dtor_80084684
lbl_fn_8032C52C_000009B0:
    mr r3, r31
    lmw r27, 0x3c(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8032C850(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r3, 0x15c0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
lbl_fn_8032C850_000009EC:
    mr r3, r31
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_8032C850_00000A04
    li r3, 0x0
    b lbl_fn_8032C850_00000AC0
lbl_fn_8032C850_00000A04:
    addi r30, r30, 0x1
    addi r31, r31, 0xc
    cmpwi r30, 0x4
    blt lbl_fn_8032C850_000009EC
    addi r31, r29, 0x14b0
    li r30, 0x0
lbl_fn_8032C850_00000A1C:
    mr r3, r31
    bl fn_800580BC
    cmpwi r3, 0x0
    beq lbl_fn_8032C850_00000A34
    li r3, 0x0
    b lbl_fn_8032C850_00000AC0
lbl_fn_8032C850_00000A34:
    addi r30, r30, 0x1
    addi r31, r31, 0x88
    cmpwi r30, 0x2
    blt lbl_fn_8032C850_00000A1C
    addi r3, r29, 0x161c
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_8032C850_00000A5C
    li r3, 0x0
    b lbl_fn_8032C850_00000AC0
lbl_fn_8032C850_00000A5C:
    addi r3, r29, 0x15f0
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8032C850_00000A7C
    addi r3, r29, 0x15fc
    bl fn_802376D0
    cmpwi r3, 0x0
    beq lbl_fn_8032C850_00000A84
lbl_fn_8032C850_00000A7C:
    li r3, 0x0
    b lbl_fn_8032C850_00000AC0
lbl_fn_8032C850_00000A84:
    mr r3, r29
    bl fn_800E2DD4
    cmpwi r3, 0x0
    beq lbl_fn_8032C850_00000ABC
    mr r3, r29
    bl fn_8032C964
    lwz r0, 0x7ec(r29)
    li r3, 0x1
    ori r0, r0, 0x140
    oris r0, r0, 0x1
    ori r0, r0, 0x5
    oris r0, r0, 0x40
    stw r0, 0x7ec(r29)
    b lbl_fn_8032C850_00000AC0
lbl_fn_8032C850_00000ABC:
    li r3, 0x0
lbl_fn_8032C850_00000AC0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8032C964(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    stw r0, 0x654(r1)
    stw r31, 0x64c(r1)
    stw r30, 0x648(r1)
    mr r30, r3
    addi r3, r3, 0x161c
    stw r29, 0x644(r1)
    bl fn_8047059C
    mr r31, r3
    addi r3, r30, 0x161c
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x8(r1)
    mr r29, r3
    addi r3, r1, 0x18
    stw r0, 0xc(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r29
    mr r5, r31
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r29, lbl_80749DC0@ha
    addi r29, r29, lbl_80749DC0@l
lbl_fn_8032C964_00000B8C:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r31, r3
    extsb. r0, r0
    beq lbl_fn_8032C964_00000D48
    cmpwi r0, 0x3b
    beq lbl_fn_8032C964_00000D48
    addi r4, r29, 0xc3
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8032C964_00000BD0
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1628(r30)
    b lbl_fn_8032C964_00000D48
lbl_fn_8032C964_00000BD0:
    mr r3, r31
    addi r4, r29, 0xd1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8032C964_00000C84
    li r31, 0x0
lbl_fn_8032C964_00000BE8:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    cmpwi r3, 0x0
    ble lbl_fn_8032C964_00000C74
    lwz r4, lbl_8087F430
    li r5, 0x0
    li r6, 0x0
    lwz r4, 0x10d8(r4)
    lwz r0, 0x78(r4)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8032C964_00000C44
lbl_fn_8032C964_00000C1C:
    lwz r7, 0x7c(r4)
    lwzx r0, r7, r6
    cmpw r3, r0
    bne lbl_fn_8032C964_00000C38
    mulli r0, r5, 0x28
    add r3, r7, r0
    b lbl_fn_8032C964_00000C48
lbl_fn_8032C964_00000C38:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_8032C964_00000C1C
lbl_fn_8032C964_00000C44:
    li r3, 0x0
lbl_fn_8032C964_00000C48:
    cmpwi r3, 0x0
    beq lbl_fn_8032C964_00000C74
    lwz r0, 0x162c(r30)
    slwi r0, r0, 2
    add r0, r30, r0
    addic. r4, r0, 0x1630
    beq lbl_fn_8032C964_00000C68
    stw r3, 0x0(r4)
lbl_fn_8032C964_00000C68:
    lwz r3, 0x162c(r30)
    addi r0, r3, 0x1
    stw r0, 0x162c(r30)
lbl_fn_8032C964_00000C74:
    addi r31, r31, 0x1
    cmplwi r31, 0x8
    blt lbl_fn_8032C964_00000BE8
    b lbl_fn_8032C964_00000D48
lbl_fn_8032C964_00000C84:
    mr r3, r31
    addi r4, r29, 0xdb
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8032C964_00000CAC
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1650(r30)
    b lbl_fn_8032C964_00000D48
lbl_fn_8032C964_00000CAC:
    mr r3, r31
    addi r4, r29, 0xe9
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8032C964_00000CD4
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1654(r30)
    b lbl_fn_8032C964_00000D48
lbl_fn_8032C964_00000CD4:
    mr r3, r31
    addi r4, r29, 0xff
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8032C964_00000CFC
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1658(r30)
    b lbl_fn_8032C964_00000D48
lbl_fn_8032C964_00000CFC:
    mr r3, r31
    addi r4, r29, 0x112
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8032C964_00000D24
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x165c(r30)
    b lbl_fn_8032C964_00000D48
lbl_fn_8032C964_00000D24:
    mr r3, r31
    addi r4, r29, 0x126
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8032C964_00000D48
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1660(r30)
lbl_fn_8032C964_00000D48:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8032C964_00000B8C
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_8032CBFC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    li r30, 0x0
    lwz r4, 0x1660(r3)
    cmpwi r4, 0x0
    blt lbl_fn_8032CBFC_00000DC0
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8032CBFC_00000DC0
    bl fn_80370A78
    cmpwi r3, 0x1
    bne lbl_fn_8032CBFC_00000DC0
    li r30, 0x1
lbl_fn_8032CBFC_00000DC0:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x7
    beq lbl_fn_8032CBFC_00000DD4
    cmpwi r30, 0x0
    beq lbl_fn_8032CBFC_00000E48
lbl_fn_8032CBFC_00000DD4:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    blt lbl_fn_8032CBFC_00000DE8
    li r0, 0x0
    stw r0, 0x58c(r31)
lbl_fn_8032CBFC_00000DE8:
    lwz r0, 0x1608(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8032CBFC_00000E40
    lwz r3, lbl_8087F3C0
    addi r4, r31, 0x15c0
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_8032CBFC_00000E20
    mr r4, r31
    li r5, 0xf
    bl fn_800CFD18
lbl_fn_8032CBFC_00000E20:
    lwz r4, 0x14b8(r31)
    li r0, 0x0
    lwz r3, 0x1540(r31)
    clrrwi r4, r4, 1
    stw r4, 0x14b8(r31)
    clrrwi r3, r3, 1
    stw r3, 0x1540(r31)
    stw r0, 0x1608(r31)
lbl_fn_8032CBFC_00000E40:
    li r0, 0x0
    stw r0, 0x1618(r31)
lbl_fn_8032CBFC_00000E48:
    lwz r3, 0x58c(r31)
    subi r0, r3, 0x8
    cmplwi r0, 0x1
    ble lbl_fn_8032CBFC_00000EBC
    cmpwi r3, 0x6
    beq lbl_fn_8032CBFC_00000E6C
    cmpwi r3, 0x7
    beq lbl_fn_8032CBFC_00000E88
    b lbl_fn_8032CBFC_00000F0C
lbl_fn_8032CBFC_00000E6C:
    mr r3, r31
    bl fn_8032D1F4
    mr r3, r31
    bl fn_80145334
    mr r3, r31
    bl fn_8014C540
    b lbl_fn_8032CBFC_00001060
lbl_fn_8032CBFC_00000E88:
    lwz r3, 0x1610(r31)
    addi r0, r3, 0x1
    stw r0, 0x1610(r31)
    cmpwi r0, 0x258
    blt lbl_fn_8032CBFC_00000EA8
    lwz r3, lbl_8087F430
    li r4, 0xf7
    bl fn_803750E4
lbl_fn_8032CBFC_00000EA8:
    mr r3, r31
    bl fn_80145334
    mr r3, r31
    bl fn_8014C540
    b lbl_fn_8032CBFC_00001060
lbl_fn_8032CBFC_00000EBC:
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8032CBFC_00000EF8
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x8
    bne lbl_fn_8032CBFC_00000EF0
    mr r3, r31
    bl fn_8032D48C
    b lbl_fn_8032CBFC_00000EF8
lbl_fn_8032CBFC_00000EF0:
    li r0, 0x0
    stw r0, 0x58c(r31)
lbl_fn_8032CBFC_00000EF8:
    mr r3, r31
    bl fn_80145334
    mr r3, r31
    bl fn_8014C540
    b lbl_fn_8032CBFC_00001060
lbl_fn_8032CBFC_00000F0C:
    lwz r0, 0x1608(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8032CBFC_00001058
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_8032CBFC_00001058
    lwz r0, 0xd18(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8032CBFC_00001058
    cmpwi r30, 0x0
    bne lbl_fn_8032CBFC_00001058
    lwz r0, 0x1618(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8032CBFC_00000FFC
    li r0, 0x8
    stw r0, 0x58c(r31)
    lfs f1, lbl_80885040
    addi r3, r31, 0xb0
    lfs f2, lbl_80885044
    li r4, 0x0
    li r5, 0x1ea
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80885048
    li r30, 0x1
    stw r30, 0x3fc(r31)
    addi r3, r31, 0x15f0
    li r4, 0x0
    stfs f0, 0x2e8(r31)
    stfs f0, 0x2fc(r31)
    bl fn_80232B7C
    lfs f0, lbl_80885040
    li r0, -0x1
    lfs f1, lbl_80885048
    addi r4, r31, 0x15f0
    stfs f0, 0x20(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x2c
    addi r8, r1, 0x20
    stfs f0, 0x24(r1)
    addi r9, r1, 0x10
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    li r0, 0x0
    stw r0, 0x1618(r31)
    b lbl_fn_8032CBFC_00001044
lbl_fn_8032CBFC_00000FFC:
    li r0, 0x6
    stw r0, 0x58c(r31)
    lfs f1, lbl_80885040
    addi r3, r31, 0xb0
    lfs f2, lbl_8088504C
    li r4, 0x0
    li r5, 0x13f
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80885048
    li r3, 0x1
    li r0, 0x0
    stw r3, 0x3fc(r31)
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    stw r0, 0x1608(r31)
lbl_fn_8032CBFC_00001044:
    mr r3, r31
    bl fn_80145334
    mr r3, r31
    bl fn_8014C540
    b lbl_fn_8032CBFC_00001060
lbl_fn_8032CBFC_00001058:
    mr r3, r31
    bl fn_800E2FE0
lbl_fn_8032CBFC_00001060:
    mr r3, r31
    bl fn_8032CF10
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8032CF10(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    addi r11, r1, 0x130
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    stfd f29, 0x130(r1)
    psq_st f29, 0x138(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x1608(r3)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_8032CF10_00001248
    lwz r0, 0x160c(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8032CF10_00001248
    subic. r0, r0, 0x1
    stw r0, 0x160c(r3)
    bne lbl_fn_8032CF10_00001248
    lwz r6, 0x14b8(r3)
    addi r4, r31, 0x15c0
    lwz r0, 0x1540(r3)
    li r5, 0x0
    ori r6, r6, 0x1
    stw r6, 0x14b8(r3)
    clrrwi r0, r0, 1
    stw r0, 0x1540(r3)
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    psq_l f1, 0x528(r31), 0, 0
    addi r29, r1, 0x20
    lfs f2, 0x530(r31)
    addi r3, r1, 0xb8
    lfs f7, lbl_80885040
    li r30, 0x3
    lfs f0, lbl_80885048
    li r4, 0x79
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x28(r1)
    stfs f7, 0x38(r1)
    stfs f7, 0x3c(r1)
    stfs f0, 0x40(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x38
    addi r3, r1, 0xb8
    mr r5, r4
    bl fn_805F93C0
    lfs f8, lbl_80885050
    addi r3, r31, 0x15c0
    lfs f0, 0x3c(r1)
    li r4, 0x0
    lfs f9, 0x40(r1)
    fmuls f11, f0, f8
    lfs f7, 0x38(r1)
    lfs f0, 0x24(r1)
    fmuls f12, f9, f8
    fmuls f10, f7, f8
    lfs f9, 0x20(r1)
    fadds f8, f0, f11
    lfs f7, 0x28(r1)
    lfs f0, lbl_80885054
    fadds f9, f9, f10
    fadds f7, f7, f12
    stfs f10, 0x2c(r1)
    fadds f0, f8, f0
    stfs f11, 0x30(r1)
    stfs f12, 0x34(r1)
    stfs f9, 0x20(r1)
    stfs f7, 0x28(r1)
    stfs f0, 0x24(r1)
    bl fn_80232B7C
    lfs f1, lbl_80885048
    mulli r0, r30, 0xc
    stfs f1, 0x48(r1)
    li r10, -0x1
    lwz r3, lbl_8087F3C0
    mr r7, r29
    stfs f1, 0x4c(r1)
    add r4, r31, r0
    li r0, 0x1
    stfs f1, 0x50(r1)
    addi r4, r4, 0x15c0
    addi r8, r31, 0x534
    addi r9, r1, 0x48
    stfs f1, 0x54(r1)
    li r5, 0x0
    li r6, 0x0
    stw r10, 0x8(r1)
    li r10, -0x1
    stw r0, 0xc(r1)
    bl fn_8023A8B4
    lis r3, lbl_80749DA0@ha
    lfs f1, lbl_80885048
    lwz r4, lbl_80749DA0@l(r3)
    addi r3, r1, 0x10
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_8032CF10_00001248
    mr r4, r31
    li r5, 0xf
    bl fn_800CFD18
lbl_fn_8032CF10_00001248:
    lfs f29, lbl_80885050
    addi r29, r1, 0xe8
    lfs f30, lbl_80885054
    addi r28, r1, 0x88
    lfs f31, lbl_80885040
    li r27, 0x0
    li r30, 0x0
lbl_fn_8032CF10_00001264:
    add r3, r31, r30
    lwz r0, 0x14b8(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_8032CF10_0000132C
    psq_l f1, 0xb8(r31), 0, 0
    addi r3, r1, 0x58
    psq_l f2, 0xc0(r31), 0, 0
    psq_l f3, 0xc8(r31), 0, 0
    psq_l f4, 0xd0(r31), 0, 0
    psq_l f5, 0xd8(r31), 0, 0
    psq_l f6, 0xe0(r31), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    fmr f1, f31
    psq_st f2, 0x8(r29), 0, 0
    fmr f2, f30
    psq_st f3, 0x10(r29), 0, 0
    fmr f3, f29
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    stfs f31, 0x14(r1)
    stfs f30, 0x18(r1)
    stfs f29, 0x1c(r1)
    bl fn_805F90D0
    mr r3, r29
    addi r4, r1, 0x58
    addi r5, r1, 0x88
    bl fn_805F89F0
    psq_l f2, 0x8(r28), 0, 0
    add r3, r31, r30
    psq_l f3, 0x10(r28), 0, 0
    addi r3, r3, 0x14b0
    psq_l f4, 0x18(r28), 0, 0
    psq_l f5, 0x20(r28), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
lbl_fn_8032CF10_0000132C:
    addi r27, r27, 0x1
    addi r30, r30, 0x88
    cmpwi r27, 0x2
    blt lbl_fn_8032CF10_00001264
    addi r11, r1, 0x130
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    psq_l f29, 0x138(r1), 0, 0
    lfd f29, 0x130(r1)
    bl _restgpr_27
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_8032D1F4(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    lfs f0, lbl_80885058
    stw r0, 0xa4(r1)
    li r0, 0x0
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stw r31, 0x8c(r1)
    mr r31, r3
    stw r30, 0x88(r1)
    stw r29, 0x84(r1)
    lfs f3, 0x2e4(r3)
    stw r0, 0x1610(r3)
    fcmpo cr0, f3, f0
    ble lbl_fn_8032D1F4_000013CC
    lfs f0, lbl_8088505C
    fcmpo cr0, f3, f0
    bge lbl_fn_8032D1F4_000013CC
    lwz r4, lbl_8087EFA8
    lfs f3, lbl_80885060
    lfs f4, 0x3a4(r4)
    lfs f0, 0x52c(r3)
    fmadds f0, f3, f4, f0
    stfs f0, 0x52c(r3)
lbl_fn_8032D1F4_000013CC:
    lwz r0, 0x1608(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8032D1F4_00001584
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_8088505C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8032D1F4_00001584
    lwz r4, 0x14b8(r3)
    addi r29, r1, 0x14
    lwz r0, 0x1540(r3)
    li r30, 0x0
    ori r4, r4, 0x1
    stw r4, 0x14b8(r3)
    clrrwi r0, r0, 1
    psq_l f1, 0x528(r3), 0, 0
    stw r0, 0x1540(r3)
    li r4, 0x79
    lfs f2, 0x530(r3)
    lfs f3, lbl_80885040
    lfs f0, lbl_80885048
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x1c(r1)
    stfs f3, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x48
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x48
    mr r5, r4
    bl fn_805F93C0
    lfs f4, lbl_80885050
    addi r3, r31, 0x15c0
    lfs f0, 0x30(r1)
    li r4, 0x0
    lfs f5, 0x34(r1)
    fmuls f7, f0, f4
    lfs f3, 0x2c(r1)
    lfs f0, 0x18(r1)
    fmuls f8, f5, f4
    fmuls f6, f3, f4
    lfs f5, 0x14(r1)
    fadds f4, f0, f7
    lfs f3, 0x1c(r1)
    lfs f0, lbl_80885054
    fadds f5, f5, f6
    fadds f3, f3, f8
    stfs f6, 0x20(r1)
    fadds f0, f4, f0
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    stfs f5, 0x14(r1)
    stfs f3, 0x1c(r1)
    stfs f0, 0x18(r1)
    bl fn_80232B7C
    lfs f1, lbl_80885048
    mulli r0, r30, 0xc
    stfs f1, 0x38(r1)
    li r12, -0x1
    li r11, 0x1
    stfs f1, 0x3c(r1)
    add r3, r31, r0
    addi r4, r3, 0x15c0
    mr r7, r29
    stfs f1, 0x40(r1)
    addi r8, r31, 0x534
    addi r9, r1, 0x38
    li r5, 0x0
    stfs f1, 0x44(r1)
    li r6, 0x0
    li r10, -0x1
    stw r12, 0x8(r1)
    stw r11, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lis r3, lbl_80749DA0@ha
    lfs f1, lbl_80885048
    lwz r4, lbl_80749DA0@l(r3)
    addi r3, r1, 0x10
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_8032D1F4_00001544
    mr r4, r31
    li r5, 0xf
    bl fn_800CFD18
lbl_fn_8032D1F4_00001544:
    lwz r29, 0x1654(r31)
    li r3, 0x1
    li r0, 0x0
    stw r3, 0x1608(r31)
    cmpwi r29, 0x0
    stw r0, 0x160c(r31)
    blt lbl_fn_8032D1F4_00001584
    lwz r3, lbl_8087F430
    mr r4, r29
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8032D1F4_00001584
    lwz r3, lbl_8087F430
    mr r4, r29
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_8032D1F4_00001584:
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8032D1F4_000015E0
    li r0, 0x7
    stw r0, 0x58c(r31)
    lfs f1, lbl_80885048
    addi r3, r31, 0xb0
    lfs f2, lbl_80885044
    li r4, 0x0
    li r5, 0x140
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80885048
    li r0, 0x1
    stw r0, 0x3fc(r31)
    stfs f0, 0x2e8(r31)
    stfs f0, 0x2fc(r31)
lbl_fn_8032D1F4_000015E0:
    lwz r0, 0xa4(r1)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8032D48C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lfs f1, lbl_80885040
    li r4, 0x0
    stw r0, 0x44(r1)
    li r0, 0x9
    lfs f2, lbl_80885044
    li r5, 0x1ea
    stw r31, 0x3c(r1)
    mr r31, r3
    li r6, 0x0
    li r7, 0x0
    stw r0, 0x58c(r3)
    li r8, 0x1
    addi r3, r3, 0xb0
    bl fn_80097C08
    lwz r4, 0x162c(r31)
    li r0, 0x1
    lfs f0, lbl_80885048
    cmpwi r4, 0x0
    stw r0, 0x3fc(r31)
    stfs f0, 0x2e8(r31)
    stfs f0, 0x2fc(r31)
    bne lbl_fn_8032D48C_00001684
    lwz r3, 0x1624(r31)
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x530(r31)
    psq_st f1, 0x528(r31), 0, 0
    lfs f0, 0x14(r3)
    stfs f0, 0x538(r31)
    b lbl_fn_8032D48C_000016E0
lbl_fn_8032D48C_00001684:
    lwz r5, 0x1614(r31)
    lwz r0, 0x1650(r31)
    slwi r3, r5, 2
    add r3, r31, r3
    cmpwi r0, 0x0
    lwz r3, 0x1630(r3)
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x530(r31)
    psq_st f1, 0x528(r31), 0, 0
    lfs f0, 0x14(r3)
    stfs f0, 0x538(r31)
    beq lbl_fn_8032D48C_000016D0
    addi r3, r5, 0x1
    divwu r0, r3, r4
    mullw r0, r0, r4
    subf r0, r0, r3
    stw r0, 0x1614(r31)
    b lbl_fn_8032D48C_000016E0
lbl_fn_8032D48C_000016D0:
    addi r0, r5, 0x1
    cmpw r0, r4
    bge lbl_fn_8032D48C_000016E0
    stw r0, 0x1614(r31)
lbl_fn_8032D48C_000016E0:
    addi r3, r31, 0x15f0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80885040
    li r3, -0x1
    lfs f1, lbl_80885048
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r31, 0x15f0
    addi r5, r31, 0xb0
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8032D5EC(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x130
    bl _savegpr_25
    lwz r5, 0x58c(r3)
    mr r28, r3
    mr r29, r4
    subi r0, r5, 0x8
    cmplwi r0, 0x1
    bgt lbl_fn_8032D5EC_000017B4
    li r6, -0x1
    li r5, 0x3
    li r3, 0x0
    li r0, 0x2
    stw r6, 0x88(r4)
    stw r5, 0x64(r4)
    stw r3, 0x90(r4)
    stw r0, 0x84(r4)
    b lbl_fn_8032D5EC_00001C00
lbl_fn_8032D5EC_000017B4:
    lwz r5, 0x8(r4)
    lwz r5, 0x4(r5)
    subi r0, r5, 0x1fa
    cmplwi r0, 0x2
    ble lbl_fn_8032D5EC_00001C00
    lwz r0, 0x1608(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8032D5EC_00001BDC
    lwz r8, 0x0(r4)
    cmpwi r8, 0x0
    beq lbl_fn_8032D5EC_00001BDC
    lwz r0, 0x44(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8032D5EC_0000192C
    addi r4, r1, 0x80
    psq_l f1, 0x528(r8), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    addi r9, r1, 0x74
    psq_l f1, 0x528(r3), 0, 0
    addi r6, r1, 0x90
    psq_st f1, 0x0(r9), 0, 0
    addi r10, r1, 0x9c
    lfs f3, 0x84(r1)
    li r5, 0x100
    lfs f4, lbl_80885050
    li r7, 0x0
    lfs f2, 0x530(r8)
    li r8, 0x0
    lfs f0, 0x78(r1)
    fadds f3, f3, f4
    stfs f2, 0x88(r1)
    fadds f0, f0, f4
    lfs f2, 0x530(r3)
    stfs f3, 0x84(r1)
    lwz r11, lbl_8087EE98
    stfs f2, 0x7c(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r25, r11, 0x4008
    lfs f2, 0x88(r1)
    mr r4, r25
    stfs f2, 0x98(r1)
    lfs f2, 0x7c(r1)
    stfs f0, 0x78(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    psq_st f1, 0x0(r10), 0, 0
    stfs f2, 0xa4(r1)
    lwzu r12, 0x14b0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8032D5EC_00001BDC
    lwz r3, 0x0(r29)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8032D5EC_000018C4
    lwz r4, 0x560(r3)
    subi r0, r4, 0x4
    cmplwi r0, 0x1
    ble lbl_fn_8032D5EC_000018B0
    cmpwi r4, 0x9
    bne lbl_fn_8032D5EC_000018C4
lbl_fn_8032D5EC_000018B0:
    lwz r12, 0x0(r3)
    li r4, 0x0
    lwz r12, 0x7c(r12)
    mtctr r12
    bctrl
lbl_fn_8032D5EC_000018C4:
    li r30, -0x1
    li r5, 0x3
    li r27, 0x0
    li r0, 0x2
    stw r30, 0x88(r29)
    li r3, 0x0
    li r4, 0x0
    stw r5, 0x64(r29)
    stw r27, 0x90(r29)
    stw r0, 0x84(r29)
    bl fn_80232B7C
    stw r27, 0x8(r1)
    li r0, 0x1
    lfs f1, lbl_80885048
    addi r4, r28, 0x15fc
    stw r30, 0xc(r1)
    addi r8, r25, 0x4
    addi r9, r28, 0x534
    li r5, -0x1
    stw r0, 0x10(r1)
    li r6, 0x0
    li r7, 0x0
    li r10, 0x0
    lwz r3, lbl_8087F3C0
    bl fn_8023A680
    b lbl_fn_8032D5EC_00001C00
lbl_fn_8032D5EC_0000192C:
    cmpwi r0, 0x2
    bne lbl_fn_8032D5EC_00001BDC
    lfs f2, 0x30(r4)
    addi r27, r1, 0x68
    psq_l f1, 0x28(r4), 0, 0
    mr r3, r27
    psq_st f1, 0x0(r27), 0, 0
    mr r4, r27
    lfs f0, lbl_80885040
    stfs f2, 0x70(r1)
    stfs f0, 0x6c(r1)
    bl fn_805F98D0
    lfs f3, lbl_80885040
    addi r3, r1, 0xd8
    lfs f0, lbl_80885048
    li r4, 0x79
    stfs f3, 0x50(r1)
    stfs f3, 0x54(r1)
    stfs f0, 0x58(r1)
    lfs f1, 0x538(r28)
    bl fn_805F8E70
    addi r4, r1, 0x50
    addi r3, r1, 0xd8
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x58(r1)
    mr r3, r27
    lfs f3, 0x54(r1)
    addi r4, r1, 0x5c
    lfs f0, 0x50(r1)
    fneg f4, f4
    fneg f3, f3
    fneg f0, f0
    stfs f4, 0x64(r1)
    stfs f0, 0x5c(r1)
    stfs f3, 0x60(r1)
    bl fn_805F9990
    lfs f0, lbl_80885040
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8032D5EC_00001BDC
    lwz r5, 0x8(r29)
    li r30, 0x0
    lwz r4, 0x160c(r28)
    lbz r0, 0x1(r5)
    neg r3, r4
    extsb r0, r0
    cmpwi r0, 0x1
    andc r0, r3, r4
    srwi r31, r0, 31
    bne lbl_fn_8032D5EC_00001BB8
    lfs f3, 0x7c(r5)
    lfs f0, lbl_80885044
    fcmpo cr0, f3, f0
    bge lbl_fn_8032D5EC_00001BB8
    lwz r5, 0x14b8(r28)
    li r27, 0x0
    lwz r3, 0x1540(r28)
    addi r4, r28, 0x15c0
    lwz r0, 0x1628(r28)
    clrrwi r5, r5, 1
    ori r3, r3, 0x1
    stw r5, 0x14b8(r28)
    li r5, 0x0
    li r6, 0x1
    stw r3, 0x1540(r28)
    stw r0, 0x160c(r28)
    stw r27, 0x90(r29)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    psq_l f1, 0x528(r28), 0, 0
    addi r25, r1, 0x1c
    lfs f2, 0x530(r28)
    addi r3, r1, 0xa8
    lfs f3, lbl_80885040
    li r26, 0x1
    lfs f0, lbl_80885048
    li r4, 0x79
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x24(r1)
    stfs f3, 0x34(r1)
    stfs f3, 0x38(r1)
    stfs f0, 0x3c(r1)
    lfs f1, 0x538(r28)
    bl fn_805F8E70
    addi r4, r1, 0x34
    addi r3, r1, 0xa8
    mr r5, r4
    bl fn_805F93C0
    lfs f4, lbl_80885050
    addi r3, r28, 0x15c0
    lfs f0, 0x38(r1)
    li r4, 0x0
    lfs f5, 0x3c(r1)
    fmuls f7, f0, f4
    lfs f3, 0x34(r1)
    lfs f0, 0x20(r1)
    fmuls f8, f5, f4
    fmuls f6, f3, f4
    lfs f5, 0x1c(r1)
    fadds f4, f0, f7
    lfs f3, 0x24(r1)
    lfs f0, lbl_80885054
    fadds f5, f5, f6
    fadds f3, f3, f8
    stfs f6, 0x28(r1)
    fadds f0, f4, f0
    stfs f7, 0x2c(r1)
    stfs f8, 0x30(r1)
    stfs f5, 0x1c(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x20(r1)
    bl fn_80232B7C
    lfs f1, lbl_80885048
    mulli r0, r26, 0xc
    stfs f1, 0x40(r1)
    li r12, -0x1
    li r11, 0x1
    stfs f1, 0x44(r1)
    add r3, r28, r0
    addi r4, r3, 0x15c0
    mr r7, r25
    stfs f1, 0x48(r1)
    addi r8, r28, 0x534
    addi r9, r1, 0x40
    li r5, 0x0
    stfs f1, 0x4c(r1)
    li r6, 0x0
    li r10, -0x1
    stw r12, 0x8(r1)
    stw r11, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r4, lbl_8087EFE8
    cmpwi r4, 0x0
    beq lbl_fn_8032D5EC_00001B88
    lis r3, lbl_80749DA0@ha
    stw r28, 0x34d8(r4)
    addi r3, r3, lbl_80749DA0@l
    lfs f1, lbl_80885048
    lwz r4, 0x4(r3)
    addi r3, r1, 0x18
    addi r5, r28, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087EFE8
    stw r27, 0x34d8(r3)
lbl_fn_8032D5EC_00001B88:
    lwz r25, 0x1658(r28)
    cmpwi r25, 0x0
    blt lbl_fn_8032D5EC_00001BB8
    lwz r3, lbl_8087F430
    mr r4, r25
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8032D5EC_00001BB8
    lwz r3, lbl_8087F430
    mr r4, r25
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_8032D5EC_00001BB8:
    cmpwi r31, 0x0
    beq lbl_fn_8032D5EC_00001BD4
    lwz r3, 0x8(r29)
    lbz r0, 0x1(r3)
    extsb. r0, r0
    bne lbl_fn_8032D5EC_00001BD4
    li r30, 0x1
lbl_fn_8032D5EC_00001BD4:
    cmpwi r30, 0x0
    beq lbl_fn_8032D5EC_00001C00
lbl_fn_8032D5EC_00001BDC:
    mr r3, r28
    mr r4, r29
    bl fn_80151448
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r4, r29
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_8032D5EC_00001C00:
    addi r11, r1, 0x130
    bl _restgpr_25
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}
