#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8004ED34(void);
extern void fn_80084320(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_800FAB80(void);
extern void fn_80144710(void);
extern void fn_8016E970(void);
extern void fn_80170A20(void);
extern void fn_80178208(void);
extern void fn_80197528(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_8023A8B4(void);
extern void fn_803241E8(void);
extern void fn_80324A38(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_8059C330(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_80749B88[];
extern u8 lbl_80749D10[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F9E8;
extern u32 lbl_80884F10;
extern u32 lbl_80884F1C;
extern u32 lbl_80884F30;
extern u32 lbl_80884F38;
extern u32 lbl_80884F3C;
extern u32 lbl_80884F40;
extern u32 lbl_80884F50;
extern u32 lbl_80884F90;
extern u32 lbl_80884F9C;
extern u32 lbl_80884FB8;
extern u32 lbl_80884FD4;
extern u32 lbl_80884FDC;
extern u32 lbl_80884FE0;
extern u32 lbl_80884FE4;
extern u32 lbl_80884FE8;
extern u32 lbl_80884FEC;
extern u32 lbl_80884FF0;
extern u32 lbl_80884FF4;
extern u32 lbl_80884FF8;
extern u32 lbl_80884FFC;
extern u32 lbl_80885000;
extern u32 lbl_80885004;
extern u32 lbl_80885008;
extern u32 lbl_8088500C;
extern u32 lbl_80885010;
extern u32 lbl_80885014;

/* Function declarations */
void fn_80326E60(void);
void fn_80326F0C(void);
void fn_80327018(void);
void fn_80327118(void);
void fn_803271A4(void);
void fn_803272A8(void);
void fn_803278B4(void);
void fn_803279D4(void);
void fn_80327A64(void);
void fn_80327E1C(void);
void fn_80327E78(void);
void fn_80327EF0(void);
void fn_80328270(void);
void fn_8032853C(void);

asm void fn_80326E60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0x14c4(r3)
    stw r0, 0x14c8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0x8
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f0, lbl_80884F1C
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80884F10
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x156
    lfs f2, lbl_80884F50
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    cmpwi r31, 0x0
    beq lbl_fn_80326E60_0000008C
    lfs f0, lbl_80884F9C
    b lbl_fn_80326E60_00000090
lbl_fn_80326E60_0000008C:
    lfs f0, lbl_80884F1C
lbl_fn_80326E60_00000090:
    stfs f0, 0x2e8(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80326F0C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    li r30, 0x0
    stw r29, 0x44(r1)
    mr r29, r3
    stw r30, 0x14c4(r3)
    stw r30, 0x14c8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    li r0, 0x9
    mr r3, r29
    li r4, 0x3
    stw r0, 0x58c(r29)
    bl fn_8016E970
    lfs f0, lbl_80884F1C
    li r31, 0x1
    stw r31, 0x3fc(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_80884F10
    li r4, 0x0
    stfs f0, 0x2fc(r29)
    li r5, 0x13f
    lfs f2, lbl_80884F50
    li r6, 0x0
    stfs f0, 0x2e8(r29)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r29
    li r4, 0x65
    bl fn_80232B7C
    lfs f0, lbl_80884F10
    li r0, -0x1
    lfs f1, lbl_80884F1C
    addi r4, r29, 0x15fc
    stfs f0, 0x1c(r1)
    addi r5, r29, 0xb0
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    stfs f0, 0x20(r1)
    addi r9, r1, 0x28
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
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    stw r30, 0x15dc(r29)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80327018(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    stw r0, 0x14c4(r3)
    stw r0, 0x14c8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0xa
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f0, lbl_80884F1C
    li r31, 0x1
    stw r31, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80884F10
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x13f
    lfs f2, lbl_80884F50
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r30
    li r4, 0x65
    bl fn_80232B7C
    lfs f0, lbl_80884F10
    li r0, -0x1
    lfs f1, lbl_80884F1C
    addi r4, r30, 0x15fc
    stfs f0, 0x1c(r1)
    addi r5, r30, 0xb0
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    stfs f0, 0x20(r1)
    addi r9, r1, 0x28
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
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80327118(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x14c4(r3)
    stw r0, 0x14c8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x15
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80884F1C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884F10
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14d
    lfs f2, lbl_80884F50
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803271A4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    stw r0, 0x14c4(r3)
    stw r0, 0x14c8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0xb
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f2, lbl_80884F1C
    li r31, 0x1
    lfs f0, lbl_80884F90
    addi r3, r30, 0xb0
    stfs f2, 0x2fc(r30)
    li r4, 0x0
    lfs f1, lbl_80884F10
    li r5, 0x13f
    stw r31, 0x3fc(r30)
    li r6, 0x0
    lfs f2, lbl_80884F50
    li r7, 0x0
    stfs f0, 0x2e8(r30)
    li r8, 0x1
    bl fn_80097C08
    mr r3, r30
    li r4, 0x65
    bl fn_80232B7C
    lfs f0, lbl_80884F10
    li r0, -0x1
    lfs f1, lbl_80884F1C
    addi r4, r30, 0x15fc
    stfs f0, 0x1c(r1)
    addi r5, r30, 0xb0
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    stfs f0, 0x20(r1)
    addi r9, r1, 0x28
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
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803272A8(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    mr r31, r3
    stw r30, 0x108(r1)
    li r30, 0x0
    stw r30, 0x14c4(r3)
    stw r30, 0x14c8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xd
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80884F1C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884F10
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x142
    lfs f2, lbl_80884F50
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f3, lbl_80884FF0
    addi r5, r1, 0x74
    lfs f0, lbl_80884F10
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_803272A8_00000504
    addi r3, r31, 0x152c
    lfs f2, 0x1534(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x7c(r1)
    b lbl_fn_803272A8_0000068C
lbl_fn_803272A8_00000504:
    lfs f0, lbl_80884F1C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_803272A8_0000052C
    addi r3, r31, 0x1538
    lfs f2, 0x1540(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x7c(r1)
    b lbl_fn_803272A8_0000068C
lbl_fn_803272A8_0000052C:
    lwz r6, 0x1524(r31)
    li r4, 0x0
    lfs f0, 0x1528(r31)
    subic. r0, r6, 0x1
    fmuls f3, f0, f3
    mtctr r0
    ble lbl_fn_803272A8_00000678
lbl_fn_803272A8_00000548:
    lwz r3, 0x1568(r31)
    lfsx f0, r3, r30
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_803272A8_00000668
    lfs f8, lbl_80884F10
    fcmpu cr0, f8, f3
    bne lbl_fn_803272A8_0000056C
    b lbl_fn_803272A8_00000570
lbl_fn_803272A8_0000056C:
    fdivs f8, f3, f0
lbl_fn_803272A8_00000570:
    cmpwi r4, 0x0
    bge lbl_fn_803272A8_00000590
    addi r3, r31, 0x152c
    lfs f2, 0x1534(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x7c(r1)
    b lbl_fn_803272A8_0000068C
lbl_fn_803272A8_00000590:
    subi r0, r6, 0x1
    cmpw r4, r0
    blt lbl_fn_803272A8_000005B4
    addi r3, r31, 0x1538
    lfs f2, 0x1540(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x7c(r1)
    b lbl_fn_803272A8_0000068C
lbl_fn_803272A8_000005B4:
    cmpwi r6, 0x2
    bge lbl_fn_803272A8_000005D8
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x7c(r1)
    b lbl_fn_803272A8_0000068C
lbl_fn_803272A8_000005D8:
    lwz r0, 0x1544(r31)
    slwi r7, r4, 4
    lwz r3, 0x1550(r31)
    addi r4, r1, 0x5c
    add r6, r0, r7
    lwz r0, 0x155c(r31)
    add r3, r3, r7
    lfs f5, 0xc(r6)
    lfs f3, 0x8(r6)
    add r7, r0, r7
    lfs f4, 0xc(r3)
    fmadds f7, f5, f8, f3
    lfs f0, 0x8(r3)
    lfs f6, 0x4(r6)
    fmadds f5, f4, f8, f0
    lfs f4, 0x4(r3)
    fmadds f7, f8, f7, f6
    lfs f6, 0x0(r6)
    fmadds f5, f8, f5, f4
    lfs f4, 0x0(r3)
    fmadds f6, f8, f7, f6
    lfs f3, 0xc(r7)
    lfs f0, 0x8(r7)
    fmadds f4, f8, f5, f4
    fmadds f3, f3, f8, f0
    lfs f0, 0x4(r7)
    stfs f6, 0x5c(r1)
    fmadds f3, f8, f3, f0
    lfs f0, 0x0(r7)
    stfs f4, 0x60(r1)
    fmadds f2, f8, f3, f0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x64(r1)
    stfs f2, 0x7c(r1)
    b lbl_fn_803272A8_0000068C
lbl_fn_803272A8_00000668:
    fsubs f3, f3, f0
    addi r4, r4, 0x1
    addi r30, r30, 0x4
    bdnz lbl_fn_803272A8_00000548
lbl_fn_803272A8_00000678:
    addi r3, r31, 0x152c
    lfs f2, 0x1534(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x7c(r1)
lbl_fn_803272A8_0000068C:
    lfs f3, lbl_80884F10
    addi r6, r1, 0x68
    fcmpo cr0, f3, f3
    cror eq, lt, eq
    bne lbl_fn_803272A8_000006B8
    addi r3, r31, 0x152c
    lfs f2, 0x1534(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x70(r1)
    b lbl_fn_803272A8_00000844
lbl_fn_803272A8_000006B8:
    lfs f0, lbl_80884F1C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_803272A8_000006E0
    addi r3, r31, 0x1538
    lfs f2, 0x1540(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x70(r1)
    b lbl_fn_803272A8_00000844
lbl_fn_803272A8_000006E0:
    lwz r8, 0x1524(r31)
    li r7, 0x0
    lfs f0, 0x1528(r31)
    li r3, 0x0
    subic. r0, r8, 0x1
    fmuls f3, f0, f3
    mtctr r0
    ble lbl_fn_803272A8_00000830
lbl_fn_803272A8_00000700:
    lwz r4, 0x1568(r31)
    lfsx f0, r4, r3
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_803272A8_00000820
    lfs f8, lbl_80884F10
    fcmpu cr0, f8, f3
    bne lbl_fn_803272A8_00000724
    b lbl_fn_803272A8_00000728
lbl_fn_803272A8_00000724:
    fdivs f8, f3, f0
lbl_fn_803272A8_00000728:
    cmpwi r7, 0x0
    bge lbl_fn_803272A8_00000748
    addi r3, r31, 0x152c
    lfs f2, 0x1534(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x70(r1)
    b lbl_fn_803272A8_00000844
lbl_fn_803272A8_00000748:
    subi r0, r8, 0x1
    cmpw r7, r0
    blt lbl_fn_803272A8_0000076C
    addi r3, r31, 0x1538
    lfs f2, 0x1540(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x70(r1)
    b lbl_fn_803272A8_00000844
lbl_fn_803272A8_0000076C:
    cmpwi r8, 0x2
    bge lbl_fn_803272A8_00000790
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x70(r1)
    b lbl_fn_803272A8_00000844
lbl_fn_803272A8_00000790:
    lwz r0, 0x1544(r31)
    slwi r8, r7, 4
    lwz r3, 0x1550(r31)
    addi r4, r1, 0x50
    add r7, r0, r8
    lwz r0, 0x155c(r31)
    add r3, r3, r8
    lfs f5, 0xc(r7)
    lfs f3, 0x8(r7)
    add r8, r0, r8
    lfs f4, 0xc(r3)
    fmadds f7, f5, f8, f3
    lfs f0, 0x8(r3)
    lfs f6, 0x4(r7)
    fmadds f5, f4, f8, f0
    lfs f4, 0x4(r3)
    fmadds f7, f8, f7, f6
    lfs f6, 0x0(r7)
    fmadds f5, f8, f5, f4
    lfs f4, 0x0(r3)
    fmadds f6, f8, f7, f6
    lfs f3, 0xc(r8)
    lfs f0, 0x8(r8)
    fmadds f4, f8, f5, f4
    fmadds f3, f3, f8, f0
    lfs f0, 0x4(r8)
    stfs f6, 0x50(r1)
    fmadds f3, f8, f3, f0
    lfs f0, 0x0(r8)
    stfs f4, 0x54(r1)
    fmadds f2, f8, f3, f0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x58(r1)
    stfs f2, 0x70(r1)
    b lbl_fn_803272A8_00000844
lbl_fn_803272A8_00000820:
    fsubs f3, f3, f0
    addi r7, r7, 0x1
    addi r3, r3, 0x4
    bdnz lbl_fn_803272A8_00000700
lbl_fn_803272A8_00000830:
    addi r3, r31, 0x152c
    lfs f2, 0x1534(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x70(r1)
lbl_fn_803272A8_00000844:
    lfs f3, 0x8(r5)
    addi r3, r1, 0x80
    lfs f0, 0x70(r1)
    addi r30, r1, 0x8c
    lfs f5, 0x4(r5)
    fsubs f2, f3, f0
    lfs f4, 0x6c(r1)
    lfs f3, 0x0(r5)
    fsubs f4, f5, f4
    lfs f0, 0x68(r1)
    stfs f2, 0x88(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80884F38
    stfs f4, 0x84(r1)
    frsp f4, f2
    stfs f3, 0x80(r1)
    fabs f3, f4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x94(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_803272A8_000008C4
    lfs f3, 0x8c(r1)
    lfs f0, lbl_80884F10
    fcmpo cr0, f3, f0
    ble lbl_fn_803272A8_000008B8
    lfs f0, lbl_80884F3C
    b lbl_fn_803272A8_000008BC
lbl_fn_803272A8_000008B8:
    lfs f0, lbl_80884F40
lbl_fn_803272A8_000008BC:
    stfs f0, 0x48(r1)
    b lbl_fn_803272A8_000008D8
lbl_fn_803272A8_000008C4:
    fmr f2, f4
    lfs f1, 0x8c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_803272A8_000008D8:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x98
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884F10
    addi r4, r1, 0x38
    lfs f30, 0xa0(r1)
    mr r5, r4
    lfs f31, 0x9c(r1)
    addi r3, r1, 0xc8
    lfs f13, 0x98(r1)
    lfs f12, 0xb0(r1)
    lfs f11, 0xac(r1)
    lfs f10, 0xa8(r1)
    lfs f9, 0xc0(r1)
    lfs f8, 0xbc(r1)
    lfs f7, 0xb8(r1)
    lfs f6, 0xc4(r1)
    lfs f5, 0xb4(r1)
    lfs f4, 0xa4(r1)
    lfs f0, lbl_80884F1C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x94(r1)
    stfs f3, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f3, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xc8(r1)
    stfs f31, 0xcc(r1)
    stfs f30, 0xd0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xd8(r1)
    stfs f11, 0xdc(r1)
    stfs f12, 0xe0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f9, 0xf0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xd4(r1)
    stfs f5, 0xe4(r1)
    stfs f6, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80884F38
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_803272A8_000009F4
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884F10
    fcmpo cr0, f3, f0
    ble lbl_fn_803272A8_000009E4
    lfs f0, lbl_80884F3C
    b lbl_fn_803272A8_000009E8
lbl_fn_803272A8_000009E4:
    lfs f0, lbl_80884F40
lbl_fn_803272A8_000009E8:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_803272A8_00000A08
lbl_fn_803272A8_000009F4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_803272A8_00000A08:
    lfs f2, lbl_80884F10
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x4c(r1)
    stfs f2, 0x94(r1)
    frsp f2, f2
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    psq_st f1, 0x0(r30), 0, 0
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_803278B4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r0, 0x14c4(r3)
    stw r0, 0x14c8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xe
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80884F1C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884F10
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x143
    lfs f2, lbl_80884F50
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f5, 0x1508(r31)
    addi r4, r31, 0x1518
    lfs f4, 0x530(r31)
    addi r6, r1, 0x8
    lfs f3, 0x1504(r31)
    addi r5, r31, 0x150c
    fsubs f4, f5, f4
    lfs f0, 0x52c(r31)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r31, 0xb0
    fsubs f5, f3, f0
    lfs f3, 0x1500(r31)
    lfs f0, 0x528(r31)
    li r4, 0x0
    lfs f2, 0x1520(r31)
    fsubs f0, f3, f0
    stfs f2, 0x53c(r31)
    fmr f2, f4
    stfs f5, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_st f1, 0x534(r31), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f4, 0x10(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1514(r31)
    bl fn_80097D7C
    lfs f0, lbl_80884F1C
    lfs f4, 0x150c(r31)
    fdivs f5, f0, f1
    lfs f3, 0x1510(r31)
    lfs f0, 0x1514(r31)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x150c(r31)
    stfs f3, 0x1510(r31)
    stfs f0, 0x1514(r31)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803279D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x14c4(r3)
    stw r0, 0x14c8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xf
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80884F1C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884F10
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x145
    lfs f2, lbl_80884F50
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80884F90
    stfs f0, 0x2e8(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80327A64(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    li r0, 0x0
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    stw r29, 0x104(r1)
    mr r29, r3
    stw r0, 0x14c4(r3)
    stw r0, 0x14c8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    li r0, 0x10
    mr r3, r29
    li r4, 0x3
    stw r0, 0x58c(r29)
    bl fn_8016E970
    lfs f0, lbl_80884F1C
    li r0, 0x1
    stw r0, 0x3fc(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_80884F10
    li r4, 0x0
    stfs f0, 0x2fc(r29)
    li r5, 0x145
    lfs f2, lbl_80884F50
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80884F90
    addi r5, r29, 0x1574
    psq_l f1, 0x528(r29), 0, 0
    addi r3, r1, 0x68
    lfs f2, 0x530(r29)
    addi r6, r29, 0x1580
    stfs f0, 0x2e8(r29)
    addi r31, r1, 0x80
    lwz r7, 0x14bc(r29)
    mr r4, r3
    psq_st f1, 0x0(r5), 0, 0
    lfs f3, 0x530(r29)
    stfs f2, 0x157c(r29)
    lfs f0, lbl_80884F10
    lfs f2, 0x530(r7)
    psq_l f1, 0x528(r7), 0, 0
    fsubs f5, f2, f3
    psq_st f1, 0x0(r6), 0, 0
    lfs f3, 0x528(r29)
    lfs f4, 0x1580(r29)
    stfs f2, 0x1588(r29)
    fmr f2, f5
    fsubs f3, f4, f3
    stfs f0, 0x84(r1)
    stfs f3, 0x80(r1)
    psq_l f1, 0x0(r31), 0, 0
    stfs f5, 0x88(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F98D0
    lfs f5, 0x70(r1)
    addi r30, r1, 0x50
    lfs f4, lbl_80884F30
    mr r3, r30
    lfs f3, 0x6c(r1)
    mr r4, r30
    lfs f0, 0x68(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0x1584(r29)
    fmuls f7, f0, f4
    lfs f4, 0x1580(r29)
    lfs f0, 0x1588(r29)
    fsubs f3, f3, f6
    fsubs f4, f4, f7
    psq_l f1, 0x0(r31), 0, 0
    fsubs f0, f0, f5
    stfs f3, 0x1584(r29)
    lfs f2, 0x88(r1)
    stfs f4, 0x1580(r29)
    stfs f0, 0x1588(r29)
    stfs f7, 0x74(r1)
    stfs f6, 0x78(r1)
    stfs f5, 0x7c(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r31, r1, 0x5c
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884F38
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80327A64_00000DC0
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80884F10
    fcmpo cr0, f3, f0
    ble lbl_fn_80327A64_00000DB4
    lfs f0, lbl_80884F3C
    b lbl_fn_80327A64_00000DB8
lbl_fn_80327A64_00000DB4:
    lfs f0, lbl_80884F40
lbl_fn_80327A64_00000DB8:
    stfs f0, 0x48(r1)
    b lbl_fn_80327A64_00000DD4
lbl_fn_80327A64_00000DC0:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80327A64_00000DD4:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x90
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884F10
    addi r4, r1, 0x38
    lfs f30, 0x98(r1)
    mr r5, r4
    lfs f31, 0x94(r1)
    addi r3, r1, 0xc0
    lfs f13, 0x90(r1)
    lfs f12, 0xa8(r1)
    lfs f11, 0xa4(r1)
    lfs f10, 0xa0(r1)
    lfs f9, 0xb8(r1)
    lfs f8, 0xb4(r1)
    lfs f7, 0xb0(r1)
    lfs f6, 0xbc(r1)
    lfs f5, 0xac(r1)
    lfs f4, 0x9c(r1)
    lfs f0, lbl_80884F1C
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xf0(r1)
    stfs f3, 0xf4(r1)
    stfs f3, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xc0(r1)
    stfs f31, 0xc4(r1)
    stfs f30, 0xc8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xd0(r1)
    stfs f11, 0xd4(r1)
    stfs f12, 0xd8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xe0(r1)
    stfs f8, 0xe4(r1)
    stfs f9, 0xe8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xcc(r1)
    stfs f5, 0xdc(r1)
    stfs f6, 0xec(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80884F38
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80327A64_00000EF0
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884F10
    fcmpo cr0, f3, f0
    ble lbl_fn_80327A64_00000EE0
    lfs f0, lbl_80884F3C
    b lbl_fn_80327A64_00000EE4
lbl_fn_80327A64_00000EE0:
    lfs f0, lbl_80884F40
lbl_fn_80327A64_00000EE4:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80327A64_00000F04
lbl_fn_80327A64_00000EF0:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80327A64_00000F04:
    lfs f0, lbl_80884F10
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    li r4, 0x5d
    fmr f2, f0
    psq_st f1, 0x534(r29), 0, 0
    li r5, 0x2
    stfs f2, 0x64(r1)
    frsp f2, f2
    stfs f0, 0x4c(r1)
    stfs f2, 0x53c(r29)
    psq_st f1, 0x0(r31), 0, 0
    lwz r3, lbl_8087F430
    bl fn_80370AE4
    lwz r0, 0x14bc(r29)
    stw r0, 0x1598(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80327A64_00000F90
    lis r5, lbl_80749D10@ha
    li r3, 0xc
    addi r5, r5, lbl_80749D10@l
    li r4, 0x3
    addi r5, r5, 0x45
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80327A64_00000F88
    lwz r4, 0x1598(r29)
    mr r5, r29
    bl fn_80197528
    mr r4, r3
lbl_fn_80327A64_00000F88:
    lwz r3, 0x1598(r29)
    bl fn_80178208
lbl_fn_80327A64_00000F90:
    lwz r0, 0x134(r1)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r29, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_80327E1C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x14cc(r3)
    cmpwi r0, 0x3
    bne lbl_fn_80327E1C_00000FFC
    lwz r4, 0x55c(r3)
    subi r0, r4, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_80327E1C_00000FFC
    lwz r4, 0x14bc(r3)
    li r5, 0x0
    lfs f1, lbl_80884FF4
    bl fn_80170A20
lbl_fn_80327E1C_00000FFC:
    mr r3, r31
    bl fn_803241E8
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80327E78(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x14c8(r3)
    cmpwi r0, 0x3c
    ble lbl_fn_80327E78_00001068
    li r0, 0x0
    stw r0, 0x14c4(r3)
    stw r0, 0x14c8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_80327E78_0000107C
lbl_fn_80327E78_00001068:
    lfs f1, lbl_80884F10
    addi r4, r3, 0x534
    li r5, 0x0
    fmr f2, f1
    bl fn_80324A38
lbl_fn_80327E78_0000107C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80327EF0(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    mr r29, r3
    lfs f30, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_80327EF0_00001108
    li r0, 0x0
    stw r0, 0x14c4(r29)
    stw r0, 0x14c8(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    li r0, 0x6
    mr r3, r29
    li r4, 0x3
    stw r0, 0x58c(r29)
    bl fn_8016E970
    b lbl_fn_80327EF0_000013E4
lbl_fn_80327EF0_00001108:
    lfs f3, 0x2e4(r29)
    lfs f0, lbl_80884FD4
    fcmpo cr0, f3, f0
    bge lbl_fn_80327EF0_00001388
    lwz r6, 0x14bc(r29)
    addi r31, r1, 0x50
    lfs f0, 0x530(r29)
    addi r5, r1, 0x68
    lfs f3, 0x530(r6)
    mr r3, r31
    lfs f5, 0x52c(r6)
    mr r4, r31
    fsubs f2, f3, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x528(r6)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    stfs f2, 0x70(r1)
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r30, r1, 0x5c
    psq_l f1, 0x0(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884F38
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80327EF0_000011B8
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80884F10
    fcmpo cr0, f3, f0
    ble lbl_fn_80327EF0_000011AC
    lfs f0, lbl_80884F3C
    b lbl_fn_80327EF0_000011B0
lbl_fn_80327EF0_000011AC:
    lfs f0, lbl_80884F40
lbl_fn_80327EF0_000011B0:
    stfs f0, 0x48(r1)
    b lbl_fn_80327EF0_000011CC
lbl_fn_80327EF0_000011B8:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80327EF0_000011CC:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884F10
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
    lfs f0, lbl_80884F1C
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
    lfs f0, lbl_80884F38
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80327EF0_000012E8
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884F10
    fcmpo cr0, f3, f0
    ble lbl_fn_80327EF0_000012D8
    lfs f0, lbl_80884F3C
    b lbl_fn_80327EF0_000012DC
lbl_fn_80327EF0_000012D8:
    lfs f0, lbl_80884F40
lbl_fn_80327EF0_000012DC:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80327EF0_000012FC
lbl_fn_80327EF0_000012E8:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80327EF0_000012FC:
    addi r3, r1, 0x44
    lfs f2, lbl_80884F10
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80749B88@ha
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0x538(r29)
    lfs f3, 0x60(r1)
    stfs f2, 0x64(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80884FE8
    stfs f2, 0x4c(r1)
    lfd f2, lbl_80749B88@l(r3)
    fmuls f1, f0, f3
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_80884FDC
    fcmpo cr0, f4, f0
    ble lbl_fn_80327EF0_0000134C
    lfs f0, lbl_80884FE0
    fsubs f4, f4, f0
lbl_fn_80327EF0_0000134C:
    lfs f0, lbl_80884FE4
    fcmpo cr0, f4, f0
    bge lbl_fn_80327EF0_00001360
    lfs f0, lbl_80884FE0
    fadds f4, f4, f0
lbl_fn_80327EF0_00001360:
    fabs f0, f4
    lfs f3, lbl_80884FF8
    frsp f0, f0
    fcmpo cr0, f0, f3
    ble lbl_fn_80327EF0_0000137C
    fdivs f0, f4, f0
    fmuls f4, f0, f3
lbl_fn_80327EF0_0000137C:
    lfs f0, 0x538(r29)
    fadds f0, f0, f4
    stfs f0, 0x538(r29)
lbl_fn_80327EF0_00001388:
    lfs f3, 0x2e4(r29)
    lfs f0, lbl_80884FFC
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80327EF0_000013E4
    lfs f0, lbl_80885000
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80327EF0_000013E4
    mr r3, r29
    bl fn_80144710
    li r3, 0x672
    bl fn_80219E6C
    mr r7, r3
    lwz r3, lbl_8087F048
    lwz r8, 0x590(r29)
    mr r6, r29
    lfs f1, lbl_80884F10
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
lbl_fn_80327EF0_000013E4:
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

asm void fn_80328270(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stw r31, 0x8c(r1)
    mr r31, r3
    lwz r0, 0x14c4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80328270_000015A0
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_80885004
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80328270_000016C0
    lfs f1, lbl_80884F1C
    li r0, 0x1
    stw r0, 0x14c4(r3)
    li r4, 0x0
    lfs f2, lbl_80884F50
    li r5, 0x140
    stw r0, 0x3fc(r3)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f1, 0x2fc(r3)
    stfs f1, 0x2e8(r3)
    addi r3, r3, 0xb0
    bl fn_80097C08
    lfs f4, lbl_80885008
    li r0, 0x0
    lfs f3, lbl_80884FB8
    li r4, 0x0
    lfs f0, lbl_8088500C
    li r6, 0x0
    stw r0, 0x6c(r1)
    lwz r3, lbl_8087F430
    stw r0, 0x70(r1)
    stw r0, 0x74(r1)
    stw r0, 0x78(r1)
    stfs f4, 0x28(r1)
    stfs f3, 0x2c(r1)
    stfs f0, 0x30(r1)
    lwz r5, 0x10d8(r3)
    lwz r0, 0x78(r5)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80328270_000014F8
lbl_fn_80328270_000014D0:
    lwz r3, 0x7c(r5)
    lwzx r0, r3, r6
    cmpwi r0, 0x262
    bne lbl_fn_80328270_000014EC
    mulli r0, r4, 0x28
    add r3, r3, r0
    b lbl_fn_80328270_000014FC
lbl_fn_80328270_000014EC:
    addi r6, r6, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_80328270_000014D0
lbl_fn_80328270_000014F8:
    li r3, 0x0
lbl_fn_80328270_000014FC:
    cmpwi r3, 0x0
    beq lbl_fn_80328270_00001518
    psq_l f1, 0x4(r3), 0, 0
    addi r4, r1, 0x28
    lfs f2, 0xc(r3)
    stfs f2, 0x30(r1)
    psq_st f1, 0x0(r4), 0, 0
lbl_fn_80328270_00001518:
    addi r5, r1, 0x28
    lfs f6, lbl_80884F10
    psq_l f1, 0x0(r5), 0, 0
    addi r4, r1, 0x38
    lfs f2, 0x30(r1)
    addi r6, r1, 0x1c
    stfs f2, 0x530(r31)
    addi r8, r31, 0x5b8
    lfs f5, lbl_80884FEC
    lis r7, 0x8000
    psq_st f1, 0x528(r31), 0, 0
    li r9, 0x0
    lfs f4, 0x30(r1)
    lfs f3, 0x2c(r1)
    lfs f0, 0x28(r1)
    fadds f4, f6, f4
    fadds f3, f5, f3
    stfs f6, 0x10(r1)
    fadds f0, f6, f0
    lwz r3, lbl_8087EE98
    stfs f5, 0x14(r1)
    stfs f6, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f3, 0x20(r1)
    stfs f4, 0x24(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80328270_000016C0
    addi r3, r1, 0x48
    lfs f2, 0x50(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
    b lbl_fn_80328270_000016C0
lbl_fn_80328270_000015A0:
    cmpwi r0, 0x1
    bne lbl_fn_80328270_00001668
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80328270_00001608
    lfs f0, lbl_80884F1C
    li r3, 0x2
    li r0, 0x1
    stw r3, 0x14c4(r31)
    lfs f1, lbl_80884F10
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_80884F50
    li r5, 0x14a
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_80328270_000016C0
lbl_fn_80328270_00001608:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80884F30
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80328270_000016C0
    mr r3, r31
    bl fn_80144710
    li r3, 0x673
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_80884F10
    stw r0, 0xc(r1)
    mr r4, r31
    lfs f2, lbl_80884F1C
    addi r7, r31, 0x528
    lwz r3, lbl_8087F048
    addi r8, r31, 0x534
    lwz r6, 0x590(r31)
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    b lbl_fn_80328270_000016C0
lbl_fn_80328270_00001668:
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80328270_000016C0
    lwz r3, lbl_8087F430
    li r4, 0xcd
    li r5, 0x1
    bl fn_80370AE4
    li r0, 0x0
    stw r0, 0x14c4(r31)
    stw r0, 0x14c8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
lbl_fn_80328270_000016C0:
    lwz r0, 0xa4(r1)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    lwz r31, 0x8c(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8032853C(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stw r31, 0xac(r1)
    mr r31, r3
    lwz r0, 0x14c4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8032853C_0000186C
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_80885004
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8032853C_00001A48
    lfs f1, lbl_80884F1C
    li r0, 0x1
    stw r0, 0x14c4(r3)
    li r4, 0x0
    lfs f2, lbl_80884F50
    li r5, 0x140
    stw r0, 0x3fc(r3)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f1, 0x2fc(r3)
    stfs f1, 0x2e8(r3)
    addi r3, r3, 0xb0
    bl fn_80097C08
    lfs f4, lbl_80885008
    li r0, 0x0
    lfs f3, lbl_80884FB8
    li r4, 0x0
    lfs f0, lbl_8088500C
    li r6, 0x0
    stw r0, 0x8c(r1)
    lwz r3, lbl_8087F430
    stw r0, 0x90(r1)
    stw r0, 0x94(r1)
    stw r0, 0x98(r1)
    stfs f4, 0x28(r1)
    stfs f3, 0x2c(r1)
    stfs f0, 0x30(r1)
    lwz r5, 0x10d8(r3)
    lwz r0, 0x78(r5)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8032853C_000017C4
lbl_fn_8032853C_0000179C:
    lwz r3, 0x7c(r5)
    lwzx r0, r3, r6
    cmpwi r0, 0x262
    bne lbl_fn_8032853C_000017B8
    mulli r0, r4, 0x28
    add r3, r3, r0
    b lbl_fn_8032853C_000017C8
lbl_fn_8032853C_000017B8:
    addi r6, r6, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_8032853C_0000179C
lbl_fn_8032853C_000017C4:
    li r3, 0x0
lbl_fn_8032853C_000017C8:
    cmpwi r3, 0x0
    beq lbl_fn_8032853C_000017E4
    psq_l f1, 0x4(r3), 0, 0
    addi r4, r1, 0x28
    lfs f2, 0xc(r3)
    stfs f2, 0x30(r1)
    psq_st f1, 0x0(r4), 0, 0
lbl_fn_8032853C_000017E4:
    addi r5, r1, 0x28
    lfs f6, lbl_80884F10
    psq_l f1, 0x0(r5), 0, 0
    addi r4, r1, 0x58
    lfs f2, 0x30(r1)
    addi r6, r1, 0x1c
    stfs f2, 0x530(r31)
    addi r8, r31, 0x5b8
    lfs f5, lbl_80884FEC
    lis r7, 0x8000
    psq_st f1, 0x528(r31), 0, 0
    li r9, 0x0
    lfs f4, 0x30(r1)
    lfs f3, 0x2c(r1)
    lfs f0, 0x28(r1)
    fadds f4, f6, f4
    fadds f3, f5, f3
    stfs f6, 0x10(r1)
    fadds f0, f6, f0
    lwz r3, lbl_8087EE98
    stfs f5, 0x14(r1)
    stfs f6, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f3, 0x20(r1)
    stfs f4, 0x24(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8032853C_00001A48
    addi r3, r1, 0x68
    lfs f2, 0x70(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
    b lbl_fn_8032853C_00001A48
lbl_fn_8032853C_0000186C:
    cmpwi r0, 0x1
    bne lbl_fn_8032853C_00001934
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8032853C_000018D4
    lfs f0, lbl_80884F1C
    li r3, 0x2
    li r0, 0x1
    stw r3, 0x14c4(r31)
    lfs f1, lbl_80884F10
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_80884F50
    li r5, 0x14d
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_8032853C_00001A48
lbl_fn_8032853C_000018D4:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80884F30
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8032853C_00001A48
    mr r3, r31
    bl fn_80144710
    li r3, 0x673
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_80884F10
    stw r0, 0xc(r1)
    mr r4, r31
    lfs f2, lbl_80884F1C
    addi r7, r31, 0x528
    lwz r3, lbl_8087F048
    addi r8, r31, 0x534
    lwz r6, 0x590(r31)
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    b lbl_fn_8032853C_00001A48
lbl_fn_8032853C_00001934:
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8032853C_00001980
    li r0, 0x0
    stw r0, 0x14c4(r31)
    stw r0, 0x14c8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_8032853C_00001A48
lbl_fn_8032853C_00001980:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80885010
    fcmpo cr0, f0, f3
    cror eq, lt, eq
    bne lbl_fn_8032853C_00001A48
    lfs f0, lbl_80885014
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8032853C_00001A48
    lwz r3, lbl_8087F430
    li r4, 0x5c
    bl fn_80370A78
    cmpwi r3, 0x1
    bge lbl_fn_8032853C_00001A48
    lwz r3, lbl_8087F430
    li r4, 0x5c
    li r5, 0x1
    bl fn_80370AE4
    lwz r3, lbl_8087F9E8
    li r4, 0x0
    bl fn_8059C330
    lwz r3, lbl_8087F4A0
    lwz r3, 0x48(r3)
    b lbl_fn_8032853C_00001A40
lbl_fn_8032853C_000019E0:
    lwz r0, 0x50(r3)
    cmpwi r0, 0x28
    bne lbl_fn_8032853C_00001A3C
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8032853C_00001A3C
    lfs f0, lbl_80884F10
    li r0, 0x0
    li r4, 0x2
    stw r4, 0x38(r1)
    addi r4, r1, 0x38
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    stw r0, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_8032853C_00001A48
lbl_fn_8032853C_00001A3C:
    lwz r3, 0x5c(r3)
lbl_fn_8032853C_00001A40:
    cmpwi r3, 0x0
    bne lbl_fn_8032853C_000019E0
lbl_fn_8032853C_00001A48:
    lwz r0, 0xc4(r1)
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    lwz r31, 0xac(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}
