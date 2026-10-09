#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800EB7A0(void);
extern void fn_800EE360(void);
extern void fn_800F8548(void);
extern void fn_801028E4(void);
extern void fn_8012D8B8(void);
extern void fn_8013A258(void);
extern void fn_8013CB68(void);
extern void fn_80148990(void);
extern void fn_8015495C(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_801765D8(void);
extern void fn_80178A6C(void);
extern void fn_8017A300(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);
extern void fn_80695720(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80746EE0[];
extern u8 lbl_80766768[];
extern u8 lbl_80786B00[];
extern u8 lbl_80786B0C[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C83C8[];

/* Small data declarations */
extern u32 lbl_8087D9E0;
extern u32 lbl_8087D9E4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_808844E8;
extern u32 lbl_808844EC;
extern u32 lbl_808844F4;
extern u32 lbl_80884500;
extern u32 lbl_8088451C;
extern u32 lbl_80884520;
extern u32 lbl_80884524;
extern u32 lbl_80884528;
extern u32 lbl_8088452C;

/* Function declarations */
void fn_802CE504(void);
void fn_802CE638(void);
void fn_802CE808(void);
void fn_802CE8EC(void);
void fn_802CED80(void);
void fn_802CEDFC(void);
void fn_802CEF0C(void);
void fn_802CEF60(void);
void fn_802CF054(void);
void fn_802CF3AC(void);
void fn_802CF728(void);
void fn_802CF9AC(void);
void fn_802CFAE4(void);
void fn_802CFB24(void);

asm void fn_802CE504(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_802CE504_00000038
    lwz r4, 0x560(r3)
    subi r0, r4, 0x16
    cmplwi r0, 0x1
    bgt lbl_fn_802CE504_00000038
    li r0, 0x0
    stw r0, 0x58c(r3)
lbl_fn_802CE504_00000038:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802CE504_00000120
    li r0, 0x0
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    lwz r12, 0x0(r31)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r31
    bl fn_80178A6C
    mr r3, r31
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r31
    bl fn_8016DA4C
    li r0, 0x2
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_808844EC
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808844E8
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x2e
    lfs f2, lbl_808844F4
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lis r5, lbl_807C7030@ha
    li r0, 0x1e
    addi r5, r5, lbl_807C7030@l
    mr r3, r31
    psq_l f1, 0x0(r5), 0, 0
    li r4, 0x1
    lfs f2, 0x8(r5)
    stfs f2, 0x57c(r31)
    psq_st f1, 0x574(r31), 0, 0
    stw r0, 0x1434(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
lbl_fn_802CE504_00000120:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802CE638(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r3
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 13
    bne lbl_fn_802CE638_000002F0
    lwz r0, 0x121c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802CE638_00000180
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x6c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x70(r1)
    stw r0, 0x74(r1)
    b lbl_fn_802CE638_0000019C
lbl_fn_802CE638_00000180:
    lis r5, lbl_80786B00@ha
    lwzu r4, lbl_80786B00@l(r5)
    stw r4, 0x6c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x70(r1)
    stw r0, 0x74(r1)
lbl_fn_802CE638_0000019C:
    lwz r5, 0x6c(r1)
    addi r3, r1, 0x60
    lwz r4, 0x70(r1)
    lwz r0, 0x74(r1)
    stw r5, 0x60(r1)
    stw r4, 0x64(r1)
    stw r0, 0x68(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_802CE638_0000024C
    lwz r3, 0x121c(r31)
    li r4, 0x0
    bl fn_80232B7C
    lwz r4, lbl_8087F3C0
    li r0, 0x2
    lfs f1, lbl_808844EC
    li r3, -0x1
    stw r0, 0xb8(r4)
    li r0, 0x1
    lfs f0, lbl_808844E8
    addi r5, r31, 0xb0
    lwz r4, 0x121c(r31)
    addi r7, r1, 0x38
    addi r8, r1, 0x44
    addi r9, r1, 0x50
    stfs f0, 0x44(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x5c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
lbl_fn_802CE638_0000024C:
    lwz r0, 0x648(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802CE638_000002E4
    addi r3, r31, 0x1534
    li r4, 0x0
    bl fn_80232B7C
    lwz r4, lbl_8087F3C0
    li r0, 0x2
    lfs f1, lbl_808844EC
    li r3, -0x1
    stw r0, 0xb8(r4)
    li r0, 0x1
    lfs f0, lbl_808844E8
    addi r4, r31, 0x1534
    lwz r5, 0x648(r31)
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    stfs f0, 0x1c(r1)
    addi r5, r5, 0x10
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
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
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
lbl_fn_802CE638_000002E4:
    lwz r0, 0x12a4(r31)
    oris r0, r0, 0x4
    stw r0, 0x12a4(r31)
lbl_fn_802CE638_000002F0:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_802CE808(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 13
    beq lbl_fn_802CE808_000003D0
    lwz r0, 0x121c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802CE808_00000358
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    b lbl_fn_802CE808_00000374
lbl_fn_802CE808_00000358:
    lis r5, lbl_80786B0C@ha
    lwzu r4, lbl_80786B0C@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
lbl_fn_802CE808_00000374:
    lwz r5, 0x14(r1)
    addi r3, r1, 0x8
    lwz r4, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_802CE808_000003B0
    lwz r3, lbl_8087F3C0
    mr r6, r31
    lwz r4, 0x121c(r30)
    li r5, 0x0
    bl fn_80239DAC
lbl_fn_802CE808_000003B0:
    lwz r3, lbl_8087F3C0
    mr r6, r31
    addi r4, r30, 0x1534
    li r5, 0x0
    bl fn_80239DAC
    lwz r0, 0x12a4(r30)
    rlwinm r0, r0, 0, 14, 12
    stw r0, 0x12a4(r30)
lbl_fn_802CE808_000003D0:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802CE8EC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    li r0, 0x0
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    lwz r4, 0x62c(r3)
    stw r0, 0x624(r3)
    cmpwi r4, 0x0
    stw r0, 0x628(r3)
    beq lbl_fn_802CE8EC_00000430
    beq lbl_fn_802CE8EC_00000428
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_802CE8EC_00000428:
    li r0, 0x0
    stw r0, 0x62c(r31)
lbl_fn_802CE8EC_00000430:
    lfs f3, 0x52c(r31)
    li r3, 0x0
    lfs f0, 0x5a8(r31)
    addi r4, r1, 0x8
    lfs f5, lbl_808844E8
    addi r5, r1, 0x24
    fadds f6, f3, f0
    lfs f3, 0x528(r31)
    lfs f0, 0x5a4(r31)
    fmr f2, f5
    stfs f5, 0x8(r1)
    addi r6, r1, 0x14
    fadds f7, f3, f0
    stfs f5, 0xc(r1)
    lfs f3, 0x530(r31)
    psq_l f1, 0x0(r4), 0, 0
    lfs f0, 0x5ac(r31)
    lfs f4, 0x5b0(r31)
    fadds f3, f3, f0
    lwz r0, 0x62c(r31)
    stfs f2, 0x2c(r1)
    cmpwi r0, 0x0
    fmr f2, f3
    stfs f7, 0x14(r1)
    stfs f6, 0x18(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f0, 0x28(r1)
    stw r3, 0x20(r1)
    fadds f0, f0, f4
    stfs f5, 0x10(r1)
    stfs f4, 0x30(r1)
    stfs f3, 0x1c(r1)
    stfs f2, 0x2c(r1)
    stfs f0, 0x28(r1)
    beq lbl_fn_802CE8EC_000004D0
    lwz r0, 0x628(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802CE8EC_00000670
lbl_fn_802CE8EC_000004D0:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_802CE8EC_00000818
    li r3, 0xb0
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    li r5, 0x0
    addi r4, r4, fn_80148990@l
    li r6, 0x14
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_802CE8EC_00000664
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_802CE8EC_00000534
    mr r5, r0
lbl_fn_802CE8EC_00000534:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802CE8EC_00000650
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802CE8EC_00000618
lbl_fn_802CE8EC_0000054C:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802CE8EC_0000054C
    andi. r5, r5, 0x3
    beq lbl_fn_802CE8EC_00000650
lbl_fn_802CE8EC_00000618:
    mtctr r5
lbl_fn_802CE8EC_0000061C:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802CE8EC_0000061C
lbl_fn_802CE8EC_00000650:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802CE8EC_00000664
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802CE8EC_00000664:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_802CE8EC_00000818
lbl_fn_802CE8EC_00000670:
    lwz r3, 0x624(r31)
    cmplw r3, r0
    blt lbl_fn_802CE8EC_00000818
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_802CE8EC_00000818
    mulli r3, r30, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    mr r7, r30
    addi r4, r4, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_802CE8EC_00000810
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_802CE8EC_000006E0
    mr r5, r0
lbl_fn_802CE8EC_000006E0:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802CE8EC_000007FC
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802CE8EC_000007C4
lbl_fn_802CE8EC_000006F8:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802CE8EC_000006F8
    andi. r5, r5, 0x3
    beq lbl_fn_802CE8EC_000007FC
lbl_fn_802CE8EC_000007C4:
    mtctr r5
lbl_fn_802CE8EC_000007C8:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802CE8EC_000007C8
lbl_fn_802CE8EC_000007FC:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802CE8EC_00000810
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802CE8EC_00000810:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_802CE8EC_00000818:
    lwz r0, 0x624(r31)
    addi r5, r1, 0x24
    lwz r4, 0x62c(r31)
    mulli r3, r0, 0x14
    lwz r0, 0x20(r1)
    stwux r0, r3, r4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x2c(r1)
    stfs f2, 0xc(r3)
    lfs f0, 0x30(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x624(r31)
    lwz r0, 0x12a8(r31)
    addi r3, r3, 0x1
    stw r3, 0x624(r31)
    oris r0, r0, 0x2000
    stw r0, 0x12a8(r31)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802CED80(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lwz r0, 0x624(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802CED80_000008F0
    lwz r5, 0x62c(r3)
    addi r4, r1, 0x8
    lfs f0, 0x5b0(r3)
    stfs f0, 0x10(r5)
    lfs f5, 0x52c(r3)
    lfs f4, 0x5a8(r3)
    lfs f3, 0x528(r3)
    fadds f5, f5, f4
    lfs f0, 0x5a4(r3)
    lfs f4, 0x530(r3)
    fadds f3, f3, f0
    lfs f0, 0x5ac(r3)
    stfs f5, 0xc(r1)
    fadds f2, f4, f0
    lwz r5, 0x62c(r3)
    stfs f3, 0x8(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    lwz r3, 0x62c(r3)
    stfs f2, 0x10(r1)
    lfs f3, 0x8(r3)
    lfs f0, 0x10(r3)
    fadds f0, f3, f0
    stfs f0, 0x8(r3)
lbl_fn_802CED80_000008F0:
    addi r1, r1, 0x20
    blr
}

asm void fn_802CEDFC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r31, 0x2c(r1)
    mr r31, r5
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    li r0, 0x9
    mr r3, r29
    li r4, 0x3
    stw r0, 0x58c(r29)
    bl fn_8016E970
    lfs f0, lbl_808844EC
    li r0, 0x1
    stw r0, 0x3fc(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_808844E8
    li r4, 0x0
    stfs f0, 0x2fc(r29)
    li r5, 0x14
    lfs f2, lbl_808844F4
    li r6, 0x1
    stfs f0, 0x2e8(r29)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f5, 0x8(r30)
    addi r5, r29, 0x14e4
    lfs f4, 0x8(r31)
    addi r3, r1, 0x8
    lfs f3, 0x4(r30)
    addi r4, r29, 0x14f0
    fadds f5, f5, f4
    lfs f0, 0x4(r31)
    lfs f2, 0x8(r30)
    fadds f4, f3, f0
    lfs f3, 0x0(r30)
    lfs f0, 0x0(r31)
    stfs f2, 0x14ec(r29)
    fmr f2, f5
    fadds f0, f3, f0
    psq_l f1, 0x0(r30), 0, 0
    stfs f2, 0x14f8(r29)
    lfs f2, 0x8(r30)
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x528(r29), 0, 0
    stfs f2, 0x530(r29)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x34(r1)
    stfs f5, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802CEF0C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xa
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802CEF60(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    lfs f4, 0x52c(r3)
    addi r4, r1, 0x14
    lfs f0, 0x5a8(r3)
    addi r6, r1, 0x8
    lfs f3, 0x528(r3)
    addi r5, r1, 0x2c
    fadds f8, f4, f0
    lfs f0, 0x5a4(r3)
    lfs f4, 0x530(r3)
    addi r7, r1, 0x20
    fadds f9, f3, f0
    lfs f0, 0x5ac(r3)
    fadds f7, f4, f0
    stfs f9, 0x14(r1)
    lfs f6, 0x5b0(r3)
    stfs f8, 0x18(r1)
    fmr f2, f7
    lfs f0, lbl_8088451C
    psq_l f1, 0x0(r4), 0, 0
    fmuls f5, f6, f0
    psq_st f1, 0x614(r3), 0, 0
    lfs f3, lbl_80884520
    lfs f0, 0x5b4(r3)
    lfs f4, 0x618(r3)
    fnmsubs f10, f3, f6, f0
    lfs f0, lbl_808844EC
    fadds f3, f4, f5
    stfs f9, 0x8(r1)
    stfs f8, 0xc(r1)
    fcmpo cr0, f10, f0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x61c(r3)
    stfs f2, 0x34(r1)
    frsp f2, f2
    stfs f5, 0x620(r3)
    stfs f7, 0x1c(r1)
    stfs f3, 0x618(r3)
    stfs f7, 0x10(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x28(r1)
    ble lbl_fn_802CEF60_00000B0C
    b lbl_fn_802CEF60_00000B10
lbl_fn_802CEF60_00000B0C:
    fmr f10, f0
lbl_fn_802CEF60_00000B10:
    lfs f0, 0x24(r1)
    addi r4, r1, 0x2c
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r1, 0x20
    fadds f0, f0, f10
    lfs f2, 0x34(r1)
    stfs f2, 0x5fc(r3)
    lfs f2, 0x28(r1)
    stfs f0, 0x24(r1)
    psq_st f1, 0x5f4(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x600(r3), 0, 0
    stfs f2, 0x608(r3)
    stfs f6, 0x60c(r3)
    addi r1, r1, 0x40
    blr
}

asm void fn_802CF054(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r4, r1, 0x74
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    lfs f31, lbl_808844E8
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    lfs f30, lbl_808844EC
    stfd f29, 0x110(r1)
    psq_st f29, 0x118(r1), 0, 0
    stfd f28, 0x100(r1)
    psq_st f28, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    mr r29, r3
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_802CF054_00000E00
    lwz r5, 0x14b8(r3)
    addi r31, r1, 0x5c
    lfs f0, 0x530(r3)
    addi r30, r1, 0x68
    lfs f3, 0x530(r5)
    mr r4, r31
    lfs f5, 0x52c(r5)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    mr r3, r31
    lfs f3, 0x528(r5)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r30), 0, 0
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F98D0
    lfs f0, lbl_808844E8
    mr r3, r30
    stfs f0, 0x6c(r1)
    bl fn_805F9940
    lfs f3, lbl_80884524
    lfs f0, 0x1518(r29)
    fmuls f0, f3, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_802CF054_00000C34
    lfs f31, lbl_808844E8
    b lbl_fn_802CF054_00000C40
lbl_fn_802CF054_00000C34:
    mr r3, r31
    bl fn_805F9940
    fmr f31, f1
lbl_fn_802CF054_00000C40:
    lfs f2, 0x64(r1)
    addi r3, r1, 0x5c
    lfs f0, lbl_80884500
    addi r30, r1, 0x50
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802CF054_00000C90
    lfs f3, 0x50(r1)
    lfs f0, lbl_808844E8
    fcmpo cr0, f3, f0
    ble lbl_fn_802CF054_00000C84
    lfs f0, lbl_80884528
    b lbl_fn_802CF054_00000C88
lbl_fn_802CF054_00000C84:
    lfs f0, lbl_8088452C
lbl_fn_802CF054_00000C88:
    stfs f0, 0x48(r1)
    b lbl_fn_802CF054_00000CA4
lbl_fn_802CF054_00000C90:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802CF054_00000CA4:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808844E8
    addi r4, r1, 0x38
    lfs f28, 0x88(r1)
    mr r5, r4
    lfs f29, 0x84(r1)
    addi r3, r1, 0xb0
    lfs f13, 0x80(r1)
    lfs f12, 0x98(r1)
    lfs f11, 0x94(r1)
    lfs f10, 0x90(r1)
    lfs f9, 0xa8(r1)
    lfs f8, 0xa4(r1)
    lfs f7, 0xa0(r1)
    lfs f6, 0xac(r1)
    lfs f5, 0x9c(r1)
    lfs f4, 0x8c(r1)
    lfs f0, lbl_808844EC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f3, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f28, 0x10(r1)
    stfs f13, 0xb0(r1)
    stfs f29, 0xb4(r1)
    stfs f28, 0xb8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xc0(r1)
    stfs f11, 0xc4(r1)
    stfs f12, 0xc8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xd0(r1)
    stfs f8, 0xd4(r1)
    stfs f9, 0xd8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xcc(r1)
    stfs f6, 0xdc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80884500
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802CF054_00000DC0
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808844E8
    fcmpo cr0, f3, f0
    ble lbl_fn_802CF054_00000DB0
    lfs f0, lbl_80884528
    b lbl_fn_802CF054_00000DB4
lbl_fn_802CF054_00000DB0:
    lfs f0, lbl_8088452C
lbl_fn_802CF054_00000DB4:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802CF054_00000DD4
lbl_fn_802CF054_00000DC0:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802CF054_00000DD4:
    lfs f2, lbl_808844E8
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x74
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x7c(r1)
    b lbl_fn_802CF054_00000E50
lbl_fn_802CF054_00000E00:
    cmpwi r0, 0x9
    bne lbl_fn_802CF054_00000E40
    fmr f1, f31
    li r0, 0x1
    stw r0, 0x3fc(r3)
    li r4, 0x0
    lfs f2, lbl_808844F4
    li r5, 0x2
    stfs f30, 0x2fc(r3)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    stfs f30, 0x2e8(r3)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_802CF054_00000E50
lbl_fn_802CF054_00000E40:
    cmpwi r0, 0x6
    bne lbl_fn_802CF054_00000E50
    bl fn_8013A258
    b lbl_fn_802CF054_00000E6C
lbl_fn_802CF054_00000E50:
    lfs f0, 0x568(r29)
    fmr f1, f31
    mr r3, r29
    addi r4, r1, 0x74
    fmuls f2, f0, f30
    li r5, 0x0
    bl fn_8013CB68
lbl_fn_802CF054_00000E6C:
    lwz r0, 0x144(r1)
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    psq_l f29, 0x118(r1), 0, 0
    lfd f29, 0x110(r1)
    psq_l f28, 0x108(r1), 0, 0
    lfd f28, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_802CF3AC(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    mr r29, r3
    lwz r5, 0x14b8(r3)
    cmpwi r5, 0x0
    beq lbl_fn_802CF3AC_000011F8
    lwz r0, 0x150c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802CF3AC_000011DC
    lwz r4, 0x14c0(r3)
    lwz r0, 0x1520(r3)
    cmpw r4, r0
    ble lbl_fn_802CF3AC_000011F8
    lfs f5, 0x530(r5)
    lfs f0, 0x530(r3)
    lfs f3, 0x528(r3)
    addi r3, r1, 0x68
    lfs f4, 0x528(r5)
    fsubs f5, f5, f0
    lfs f0, lbl_808844E8
    fsubs f3, f4, f3
    stfs f5, 0x70(r1)
    stfs f3, 0x68(r1)
    stfs f0, 0x6c(r1)
    bl fn_805F9940
    lfs f0, 0x1518(r29)
    fcmpo cr0, f1, f0
    bge lbl_fn_802CF3AC_000011B4
    li r30, 0x0
    stw r30, 0x14bc(r29)
    stw r30, 0x14c0(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    li r0, 0x8
    mr r3, r29
    li r4, 0x3
    stw r0, 0x58c(r29)
    bl fn_8016E970
    lfs f0, lbl_808844EC
    li r31, 0x1
    stw r31, 0x3fc(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_808844E8
    li r4, 0x0
    stfs f0, 0x2fc(r29)
    li r5, 0x13f
    lfs f2, lbl_808844F4
    li r6, 0x0
    stfs f0, 0x2e8(r29)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x14b8(r29)
    lfs f0, 0x528(r29)
    lfs f3, 0x528(r3)
    lfs f5, 0x530(r3)
    lfs f4, 0x530(r29)
    fsubs f3, f3, f0
    lfs f0, lbl_808844E8
    fsubs f4, f5, f4
    stfs f3, 0x8(r1)
    fcmpu cr0, f0, f3
    stfs f4, 0x10(r1)
    stfs f0, 0xc(r1)
    bne lbl_fn_802CF3AC_00000FE4
    fcmpu cr0, f0, f0
    bne lbl_fn_802CF3AC_00000FE4
    fcmpu cr0, f0, f4
    bne lbl_fn_802CF3AC_00000FE4
    mr r30, r31
lbl_fn_802CF3AC_00000FE4:
    cmpwi r30, 0x0
    bne lbl_fn_802CF3AC_00000FF8
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_805F98D0
lbl_fn_802CF3AC_00000FF8:
    lfs f2, 0x10(r1)
    addi r3, r1, 0x8
    lfs f0, lbl_80884500
    addi r30, r1, 0x14
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x1c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802CF3AC_00001048
    lfs f3, 0x14(r1)
    lfs f0, lbl_808844E8
    fcmpo cr0, f3, f0
    ble lbl_fn_802CF3AC_0000103C
    lfs f0, lbl_80884528
    b lbl_fn_802CF3AC_00001040
lbl_fn_802CF3AC_0000103C:
    lfs f0, lbl_8088452C
lbl_fn_802CF3AC_00001040:
    stfs f0, 0x24(r1)
    b lbl_fn_802CF3AC_0000105C
lbl_fn_802CF3AC_00001048:
    frsp f2, f2
    lfs f1, 0x14(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x24(r1)
lbl_fn_802CF3AC_0000105C:
    lfs f0, 0x24(r1)
    addi r3, r1, 0xb8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808844E8
    addi r4, r1, 0x2c
    lfs f4, 0xc0(r1)
    mr r5, r4
    lfs f5, 0xbc(r1)
    addi r3, r1, 0x78
    lfs f6, 0xb8(r1)
    lfs f7, 0xd0(r1)
    lfs f8, 0xcc(r1)
    lfs f9, 0xc8(r1)
    lfs f10, 0xe0(r1)
    lfs f11, 0xdc(r1)
    lfs f12, 0xd8(r1)
    lfs f13, 0xe4(r1)
    lfs f31, 0xd4(r1)
    lfs f30, 0xc4(r1)
    lfs f0, lbl_808844EC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x1c(r1)
    stfs f3, 0xa8(r1)
    stfs f3, 0xac(r1)
    stfs f3, 0xb0(r1)
    stfs f0, 0xb4(r1)
    stfs f6, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f4, 0x64(r1)
    stfs f6, 0x78(r1)
    stfs f5, 0x7c(r1)
    stfs f4, 0x80(r1)
    stfs f9, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f7, 0x58(r1)
    stfs f9, 0x88(r1)
    stfs f8, 0x8c(r1)
    stfs f7, 0x90(r1)
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f10, 0x4c(r1)
    stfs f12, 0x98(r1)
    stfs f11, 0x9c(r1)
    stfs f10, 0xa0(r1)
    stfs f30, 0x38(r1)
    stfs f31, 0x3c(r1)
    stfs f13, 0x40(r1)
    stfs f30, 0x84(r1)
    stfs f31, 0x94(r1)
    stfs f13, 0xa4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F9750
    lfs f2, 0x34(r1)
    lfs f0, lbl_80884500
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802CF3AC_00001178
    lfs f3, 0x30(r1)
    lfs f0, lbl_808844E8
    fcmpo cr0, f3, f0
    ble lbl_fn_802CF3AC_00001168
    lfs f0, lbl_80884528
    b lbl_fn_802CF3AC_0000116C
lbl_fn_802CF3AC_00001168:
    lfs f0, lbl_8088452C
lbl_fn_802CF3AC_0000116C:
    fneg f0, f0
    stfs f0, 0x20(r1)
    b lbl_fn_802CF3AC_0000118C
lbl_fn_802CF3AC_00001178:
    lfs f1, 0x30(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x20(r1)
lbl_fn_802CF3AC_0000118C:
    lfs f2, lbl_808844E8
    addi r3, r1, 0x20
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x28(r1)
    stfs f2, 0x1c(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x534(r29), 0, 0
    stfs f2, 0x53c(r29)
    b lbl_fn_802CF3AC_000011F8
lbl_fn_802CF3AC_000011B4:
    lfs f0, 0x151c(r29)
    fcmpo cr0, f1, f0
    ble lbl_fn_802CF3AC_000011F8
    lwz r3, 0x14c0(r29)
    lwz r0, 0x1524(r29)
    cmpw r3, r0
    ble lbl_fn_802CF3AC_000011F8
    mr r3, r29
    bl fn_802CFB24
    b lbl_fn_802CF3AC_000011F8
lbl_fn_802CF3AC_000011DC:
    cmpwi r0, 0x1
    bne lbl_fn_802CF3AC_000011F8
    lwz r4, 0x14c0(r3)
    lwz r0, 0x1524(r3)
    cmpw r4, r0
    ble lbl_fn_802CF3AC_000011F8
    bl fn_802CFB24
lbl_fn_802CF3AC_000011F8:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_802CF728(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stw r31, 0x7c(r1)
    lis r31, lbl_807C83C8@ha
    addi r31, r31, lbl_807C83C8@l
    stw r30, 0x78(r1)
    li r30, 0x1
    stw r29, 0x74(r1)
    mr r29, r3
    lwz r4, 0x154c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802CF728_00001270
    lwz r0, 0x48(r4)
    cmpwi r0, 0x2
    beq lbl_fn_802CF728_00001270
    li r30, 0x0
lbl_fn_802CF728_00001270:
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fdivs f0, f31, f1
    cmpwi r30, 0x0
    beq lbl_fn_802CF728_00001328
    addi r3, r31, 0x0
    addi r4, r31, 0x20
    lfs f1, 0xc(r4)
    lfs f5, 0xc(r3)
    lfs f3, 0x4(r3)
    fsubs f12, f1, f5
    lfs f1, 0x4(r4)
    lfs f2, 0x8(r4)
    fsubs f10, f1, f3
    lfs f4, 0x8(r3)
    lfs f1, 0x0(r31)
    fsubs f11, f2, f4
    lfs f2, 0x20(r31)
    fmuls f6, f10, f0
    fsubs f9, f2, f1
    stfs f10, 0x3c(r1)
    fmuls f8, f12, f0
    fadds f2, f6, f3
    stfs f9, 0x38(r1)
    fmuls f7, f11, f0
    fmuls f3, f9, f0
    stfs f11, 0x40(r1)
    fadds f5, f8, f5
    fadds f4, f7, f4
    stfs f12, 0x44(r1)
    fadds f0, f3, f1
    stfs f3, 0x28(r1)
    stfs f6, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    stfs f0, 0x58(r1)
    stfs f2, 0x5c(r1)
    stfs f4, 0x60(r1)
    stfs f5, 0x64(r1)
    stfs f0, 0x14fc(r29)
    stfs f2, 0x1500(r29)
    stfs f4, 0x1504(r29)
    stfs f5, 0x1508(r29)
    b lbl_fn_802CF728_000013C0
lbl_fn_802CF728_00001328:
    addi r3, r31, 0x0
    addi r4, r31, 0x10
    lfs f1, 0xc(r4)
    lfs f5, 0xc(r3)
    lfs f3, 0x4(r3)
    fsubs f12, f1, f5
    lfs f1, 0x4(r4)
    lfs f2, 0x8(r4)
    fsubs f10, f1, f3
    lfs f4, 0x8(r3)
    lfs f1, 0x0(r31)
    fsubs f11, f2, f4
    lfs f2, 0x10(r31)
    fmuls f6, f10, f0
    fsubs f9, f2, f1
    stfs f10, 0x1c(r1)
    fmuls f8, f12, f0
    fadds f2, f6, f3
    stfs f9, 0x18(r1)
    fmuls f7, f11, f0
    fmuls f3, f9, f0
    stfs f11, 0x20(r1)
    fadds f5, f8, f5
    fadds f4, f7, f4
    stfs f12, 0x24(r1)
    fadds f0, f3, f1
    stfs f3, 0x8(r1)
    stfs f6, 0xc(r1)
    stfs f7, 0x10(r1)
    stfs f8, 0x14(r1)
    stfs f0, 0x48(r1)
    stfs f2, 0x4c(r1)
    stfs f4, 0x50(r1)
    stfs f5, 0x54(r1)
    stfs f0, 0x14fc(r29)
    stfs f2, 0x1500(r29)
    stfs f4, 0x1504(r29)
    stfs f5, 0x1508(r29)
lbl_fn_802CF728_000013C0:
    lfs f31, 0x2e4(r29)
    addi r3, r29, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802CF728_00001484
    lwz r3, lbl_8087F048
    mr r5, r29
    li r4, 0x0
    li r6, 0x0
    bl fn_801028E4
    mr r3, r29
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    cmpwi r30, 0x0
    li r3, 0x0
    stw r3, 0xd1c(r29)
    beq lbl_fn_802CF728_0000142C
    lwz r3, 0xf14(r29)
    li r0, 0x1
    stw r3, 0xf18(r29)
    stw r0, 0xf14(r29)
    b lbl_fn_802CF728_0000144C
lbl_fn_802CF728_0000142C:
    lwz r4, 0x1544(r29)
    lwz r0, 0xf14(r29)
    cmpwi r4, 0x0
    stw r0, 0xf18(r29)
    stw r3, 0xf14(r29)
    beq lbl_fn_802CF728_0000144C
    mr r3, r29
    bl fn_8017A300
lbl_fn_802CF728_0000144C:
    addi r3, r29, 0x7d4
    bl fn_8012D8B8
    lwz r0, 0x954(r29)
    li r31, 0x0
    stw r0, 0x9f8(r29)
    stw r31, 0x14bc(r29)
    stw r31, 0x14c0(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    mr r3, r29
    li r4, 0x3
    stw r31, 0x58c(r29)
    bl fn_8016E970
lbl_fn_802CF728_00001484:
    lwz r0, 0x94(r1)
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_802CF9AC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802CF9AC_000015C4
    lwz r0, 0x1434(r31)
    cmpwi r0, 0x0
    ble lbl_fn_802CF9AC_000015A8
    cmpwi r0, 0x1e
    bne lbl_fn_802CF9AC_00001500
    mr r3, r31
    bl fn_800EB7A0
    b lbl_fn_802CF9AC_00001598
lbl_fn_802CF9AC_00001500:
    cmpwi r0, 0xf
    bne lbl_fn_802CF9AC_00001598
    lwz r3, lbl_8087F3C0
    li r11, 0x1
    lfs f1, lbl_808844EC
    li r0, -0x1
    stw r11, 0xc4(r3)
    addi r4, r31, 0x1528
    lfs f0, lbl_808844E8
    addi r5, r31, 0xb0
    stfs f0, 0x1c(r1)
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    stfs f0, 0x20(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x24(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r0, 0x8(r1)
    stw r11, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r5, lbl_8087F3C0
    li r0, 0x0
    mr r3, r31
    li r4, 0x1
    stw r0, 0xc4(r5)
    lwz r12, 0x0(r31)
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
lbl_fn_802CF9AC_00001598:
    lwz r3, 0x1434(r31)
    subi r0, r3, 0x1
    stw r0, 0x1434(r31)
    b lbl_fn_802CF9AC_000015C4
lbl_fn_802CF9AC_000015A8:
    lwz r0, 0x12a4(r31)
    mr r3, r31
    ori r0, r0, 0x8000
    stw r0, 0x12a4(r31)
    bl fn_801765D8
    mr r3, r31
    bl fn_800EE360
lbl_fn_802CF9AC_000015C4:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802CFAE4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802CFB24(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    li r30, 0x0
    stw r29, 0xf4(r1)
    mr r29, r3
    stw r30, 0x14bc(r3)
    stw r30, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    li r0, 0x6
    mr r3, r29
    li r4, 0x3
    stw r0, 0x58c(r29)
    bl fn_8016E970
    lfs f0, lbl_808844EC
    li r31, 0x1
    stw r31, 0x3fc(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_808844E8
    li r4, 0x0
    stfs f0, 0x2fc(r29)
    li r5, 0x145
    lfs f2, lbl_808844F4
    li r6, 0x0
    stfs f0, 0x2e8(r29)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x14b8(r29)
    lfs f0, 0x528(r29)
    lfs f3, 0x528(r3)
    lfs f5, 0x530(r3)
    fsubs f6, f3, f0
    lfs f4, 0x530(r29)
    lfs f0, lbl_808844E8
    fsubs f3, f5, f4
    stfs f6, 0x68(r1)
    fcmpu cr0, f0, f6
    stfs f3, 0x70(r1)
    stfs f0, 0x6c(r1)
    bne lbl_fn_802CFB24_000016F8
    fcmpu cr0, f0, f0
    bne lbl_fn_802CFB24_000016F8
    fcmpu cr0, f0, f3
    bne lbl_fn_802CFB24_000016F8
    mr r30, r31
lbl_fn_802CFB24_000016F8:
    cmpwi r30, 0x0
    bne lbl_fn_802CFB24_0000170C
    addi r3, r1, 0x68
    mr r4, r3
    bl fn_805F98D0
lbl_fn_802CFB24_0000170C:
    lfs f2, 0x70(r1)
    addi r3, r1, 0x68
    lfs f0, lbl_80884500
    addi r30, r1, 0x5c
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802CFB24_0000175C
    lfs f3, 0x5c(r1)
    lfs f0, lbl_808844E8
    fcmpo cr0, f3, f0
    ble lbl_fn_802CFB24_00001750
    lfs f0, lbl_80884528
    b lbl_fn_802CFB24_00001754
lbl_fn_802CFB24_00001750:
    lfs f0, lbl_8088452C
lbl_fn_802CFB24_00001754:
    stfs f0, 0x48(r1)
    b lbl_fn_802CFB24_00001770
lbl_fn_802CFB24_0000175C:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802CFB24_00001770:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808844E8
    addi r4, r1, 0x38
    lfs f30, 0x80(r1)
    mr r5, r4
    lfs f31, 0x7c(r1)
    addi r3, r1, 0xa8
    lfs f13, 0x78(r1)
    lfs f12, 0x90(r1)
    lfs f11, 0x8c(r1)
    lfs f10, 0x88(r1)
    lfs f9, 0xa0(r1)
    lfs f8, 0x9c(r1)
    lfs f7, 0x98(r1)
    lfs f6, 0xa4(r1)
    lfs f5, 0x94(r1)
    lfs f4, 0x84(r1)
    lfs f0, lbl_808844EC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xd8(r1)
    stfs f3, 0xdc(r1)
    stfs f3, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xa8(r1)
    stfs f31, 0xac(r1)
    stfs f30, 0xb0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xb8(r1)
    stfs f11, 0xbc(r1)
    stfs f12, 0xc0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xc8(r1)
    stfs f8, 0xcc(r1)
    stfs f9, 0xd0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xb4(r1)
    stfs f5, 0xc4(r1)
    stfs f6, 0xd4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80884500
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802CFB24_0000188C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808844E8
    fcmpo cr0, f3, f0
    ble lbl_fn_802CFB24_0000187C
    lfs f0, lbl_80884528
    b lbl_fn_802CFB24_00001880
lbl_fn_802CFB24_0000187C:
    lfs f0, lbl_8088452C
lbl_fn_802CFB24_00001880:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802CFB24_000018A0
lbl_fn_802CFB24_0000188C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802CFB24_000018A0:
    lfs f2, lbl_808844E8
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    lis r4, lbl_80746EE0@ha
    lwz r3, 0x14b8(r29)
    addi r4, r4, lbl_80746EE0@l
    stfs f2, 0x4c(r1)
    li r5, 0x0
    addi r31, r3, 0xb0
    addi r4, r4, 0x13c
    stfs f2, 0x64(r1)
    frsp f2, f2
    mr r3, r31
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x534(r29), 0, 0
    stfs f2, 0x53c(r29)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802CFB24_000018F4
    li r5, 0x0
    b lbl_fn_802CFB24_00001900
lbl_fn_802CFB24_000018F4:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r5, r3, r0
lbl_fn_802CFB24_00001900:
    lwz r4, 0x14b8(r29)
    cmpwi r5, 0x0
    addi r3, r29, 0x14d8
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x14e0(r29)
    psq_st f1, 0x0(r3), 0, 0
    beq lbl_fn_802CFB24_00001948
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x50
    lfs f3, 0xc(r5)
    lfs f2, 0x2c(r5)
    stfs f3, 0x50(r1)
    stfs f0, 0x54(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
lbl_fn_802CFB24_00001948:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}
