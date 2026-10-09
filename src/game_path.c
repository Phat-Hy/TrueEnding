#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_20(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80011410(void);
extern void fn_8004CB70(void);
extern void fn_8004CBB0(void);
extern void fn_800523A0(void);
extern void fn_8005256C(void);
extern void fn_8005361C(void);
extern void fn_80053BD0(void);
extern void fn_800551BC(void);
extern void fn_80055810(void);
extern void fn_80055C40(void);
extern void fn_80057A64(void);
extern void fn_80057A68(void);
extern void fn_80057A78(void);
extern void fn_80063D3C(void);
extern void fn_8006471C(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);

/* External data declarations */
extern u8 lbl_807776A0[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEB0;
extern u32 lbl_80880940;
extern u32 lbl_80880960;
extern u32 lbl_80880964;
extern u32 lbl_80880968;
extern u32 lbl_8088096C;
extern u32 lbl_80880970;

/* Function declarations */
void fn_8005691C(void);
void fn_80056AE8(void);
void fn_80056DB8(void);
void fn_80056E40(void);
void fn_80056EB0(void);
void fn_80056F30(void);
void fn_80056F9C(void);
void fn_80057008(void);
void fn_80057074(void);
void fn_80057094(void);
void fn_80057124(void);
void fn_80057280(void);
void fn_800573E4(void);
void fn_80057450(void);
void fn_80057474(void);
void fn_800575BC(void);
void fn_800577D8(void);

asm void fn_8005691C(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x70
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stfd f30, 0x70(r1)
    psq_st f30, 0x78(r1), 0, 0
    bl _savegpr_25
    cmpwi r3, 0x0
    mr r25, r3
    mr r26, r4
    mr r27, r5
    beq lbl_fn_8005691C_00000040
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_fn_8005691C_00000040:
    lfs f3, 0x14(r4)
    addi r31, r1, 0x34
    lfs f0, 0x8(r4)
    addi r30, r1, 0x40
    lfs f5, 0x10(r4)
    addi r29, r4, 0xc
    fsubs f2, f3, f0
    lfs f4, 0x4(r4)
    lfs f3, 0xc(r4)
    mr r3, r31
    lfs f0, 0x0(r4)
    fsubs f4, f5, f4
    lfs f31, 0x18(r4)
    fsubs f0, f3, f0
    lfs f30, 0x3c(r5)
    addi r28, r5, 0x30
    mr r4, r31
    stfs f0, 0x40(r1)
    stfs f4, 0x44(r1)
    psq_l f1, 0x0(r30), 0, 0
    stfs f2, 0x48(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x3c(r1)
    bl fn_805F98D0
    lfs f3, 0x8(r28)
    mr r3, r31
    lfs f0, 0x8(r26)
    addi r4, r1, 0x28
    lfs f5, 0x4(r28)
    fsubs f6, f3, f0
    lfs f4, 0x4(r26)
    lfs f3, 0x0(r28)
    lfs f0, 0x0(r26)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x2c(r1)
    stfs f0, 0x28(r1)
    stfs f6, 0x30(r1)
    bl fn_805F9990
    lfs f4, 0x3c(r1)
    addi r3, r1, 0x1c
    lfs f3, 0x38(r1)
    fmuls f5, f4, f1
    lfs f0, 0x34(r1)
    fmuls f6, f3, f1
    lfs f4, 0x30(r1)
    fmuls f7, f0, f1
    lfs f3, 0x2c(r1)
    lfs f0, 0x28(r1)
    fsubs f4, f4, f5
    fsubs f3, f3, f6
    stfs f7, 0x10(r1)
    fsubs f0, f0, f7
    stfs f6, 0x14(r1)
    stfs f5, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f3, 0x20(r1)
    stfs f4, 0x24(r1)
    bl fn_805F9920
    fadds f0, f31, f30
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    ble lbl_fn_8005691C_00000144
    li r3, 0x0
    b lbl_fn_8005691C_000001A4
lbl_fn_8005691C_00000144:
    addi r0, r27, 0x24
    stw r0, 0x8(r1)
    fmr f1, f31
    mr r3, r25
    stw r28, 0xc(r1)
    mr r4, r26
    mr r5, r29
    mr r6, r30
    mr r7, r31
    mr r8, r27
    addi r9, r27, 0xc
    addi r10, r27, 0x18
    bl fn_80055C40
    cmpwi r3, 0x0
    beq lbl_fn_8005691C_000001A0
    cmpwi r25, 0x0
    beq lbl_fn_8005691C_00000198
    psq_l f1, 0x24(r27), 0, 0
    lfs f2, 0x2c(r27)
    stfs f2, 0x30(r25)
    psq_st f1, 0x28(r25), 0, 0
lbl_fn_8005691C_00000198:
    li r3, 0x1
    b lbl_fn_8005691C_000001A4
lbl_fn_8005691C_000001A0:
    li r3, 0x0
lbl_fn_8005691C_000001A4:
    addi r11, r1, 0x70
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    psq_l f30, 0x78(r1), 0, 0
    lfd f30, 0x70(r1)
    bl _restgpr_25
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80056AE8(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0xf0
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    bl _savegpr_20
    fmr f30, f1
    cmpwi r3, 0x0
    mr r20, r3
    mr r21, r4
    mr r22, r5
    mr r23, r6
    beq lbl_fn_80056AE8_00000214
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_fn_80056AE8_00000214:
    lfs f31, 0x18(r4)
    addi r31, r1, 0x7c
    psq_l f1, 0x30(r5), 0, 0
    addi r24, r4, 0xc
    lfs f2, 0x38(r5)
    mr r3, r23
    psq_st f1, 0x0(r31), 0, 0
    mr r4, r31
    mr r5, r31
    stfs f2, 0x84(r1)
    bl fn_805F93C0
    lfs f9, 0x8(r24)
    addi r30, r1, 0x64
    lfs f7, 0x8(r21)
    addi r29, r1, 0x70
    lfs f8, 0x4(r24)
    mr r3, r30
    fsubs f2, f9, f7
    lfs f0, 0x4(r21)
    lfs f7, 0x0(r24)
    mr r4, r30
    fsubs f8, f8, f0
    lfs f0, 0x0(r21)
    fsubs f0, f7, f0
    lfs f9, 0x3c(r22)
    stfs f8, 0x74(r1)
    fmuls f30, f9, f30
    stfs f0, 0x70(r1)
    psq_l f1, 0x0(r29), 0, 0
    stfs f2, 0x78(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x6c(r1)
    bl fn_805F98D0
    lfs f7, 0x84(r1)
    mr r3, r30
    lfs f0, 0x8(r21)
    addi r4, r1, 0x58
    lfs f9, 0x80(r1)
    fsubs f10, f7, f0
    lfs f8, 0x4(r21)
    lfs f0, 0x0(r21)
    lfs f7, 0x7c(r1)
    fsubs f8, f9, f8
    stfs f10, 0x60(r1)
    fsubs f0, f7, f0
    stfs f8, 0x5c(r1)
    stfs f0, 0x58(r1)
    bl fn_805F9990
    lfs f8, 0x6c(r1)
    addi r3, r1, 0x4c
    lfs f7, 0x68(r1)
    fmuls f9, f8, f1
    lfs f0, 0x64(r1)
    fmuls f10, f7, f1
    lfs f8, 0x60(r1)
    fmuls f11, f0, f1
    lfs f7, 0x5c(r1)
    lfs f0, 0x58(r1)
    fsubs f8, f8, f9
    fsubs f7, f7, f10
    stfs f11, 0x10(r1)
    fsubs f0, f0, f11
    stfs f10, 0x14(r1)
    stfs f9, 0x18(r1)
    stfs f0, 0x4c(r1)
    stfs f7, 0x50(r1)
    stfs f8, 0x54(r1)
    bl fn_805F9920
    fadds f0, f31, f30
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    ble lbl_fn_80056AE8_0000033C
    li r3, 0x0
    b lbl_fn_80056AE8_00000474
lbl_fn_80056AE8_0000033C:
    psq_l f1, 0x0(r23), 0, 0
    addi r28, r1, 0x40
    psq_l f2, 0x8(r23), 0, 0
    addi r3, r1, 0x88
    psq_l f3, 0x10(r23), 0, 0
    mr r4, r28
    psq_l f4, 0x18(r23), 0, 0
    mr r5, r28
    psq_l f5, 0x20(r23), 0, 0
    psq_l f6, 0x28(r23), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    lfs f0, lbl_80880940
    psq_st f2, 0x8(r3), 0, 0
    lfs f2, 0x2c(r22)
    psq_st f4, 0x18(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x24(r22), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    stfs f0, 0x94(r1)
    stfs f0, 0xa4(r1)
    stfs f0, 0xb4(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x48(r1)
    bl fn_805F93C0
    mr r3, r28
    mr r4, r28
    bl fn_805F98D0
    addi r27, r1, 0x34
    psq_l f1, 0x0(r22), 0, 0
    lfs f2, 0x8(r22)
    mr r3, r23
    psq_st f1, 0x0(r27), 0, 0
    mr r4, r27
    mr r5, r27
    stfs f2, 0x3c(r1)
    bl fn_805F93C0
    addi r26, r1, 0x28
    psq_l f1, 0xc(r22), 0, 0
    lfs f2, 0x14(r22)
    mr r3, r23
    psq_st f1, 0x0(r26), 0, 0
    mr r4, r26
    mr r5, r26
    stfs f2, 0x30(r1)
    bl fn_805F93C0
    addi r25, r1, 0x1c
    psq_l f1, 0x18(r22), 0, 0
    lfs f2, 0x20(r22)
    mr r3, r23
    psq_st f1, 0x0(r25), 0, 0
    mr r4, r25
    mr r5, r25
    stfs f2, 0x24(r1)
    bl fn_805F93C0
    stw r28, 0x8(r1)
    fmr f1, f31
    mr r3, r20
    mr r4, r21
    stw r31, 0xc(r1)
    mr r5, r24
    mr r6, r29
    mr r7, r30
    mr r8, r27
    mr r9, r26
    mr r10, r25
    bl fn_80055C40
    cmpwi r3, 0x0
    beq lbl_fn_80056AE8_00000470
    cmpwi r20, 0x0
    beq lbl_fn_80056AE8_00000468
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x48(r1)
    stfs f2, 0x30(r20)
    psq_st f1, 0x28(r20), 0, 0
lbl_fn_80056AE8_00000468:
    li r3, 0x1
    b lbl_fn_80056AE8_00000474
lbl_fn_80056AE8_00000470:
    li r3, 0x0
lbl_fn_80056AE8_00000474:
    addi r11, r1, 0xf0
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    bl _restgpr_20
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80056DB8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_807776A0@ha
    li r6, 0x0
    stw r0, 0x14(r1)
    li r0, -0x1
    addi r5, r5, lbl_807776A0@l
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x4(r3)
    li r4, 0x0
    stw r5, 0x0(r3)
    li r5, 0x14
    stw r6, 0x8(r3)
    stw r6, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r6, 0x1c(r3)
    stw r6, 0x20(r3)
    stw r6, 0x24(r3)
    addi r3, r3, 0x28
    bl memset
    lwz r3, lbl_8087EE98
    cmpwi r3, 0x0
    beq lbl_fn_80056DB8_0000050C
    mr r4, r31
    bl fn_8004CB70
lbl_fn_80056DB8_0000050C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80056E40(void)
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
    beq lbl_fn_80056E40_00000578
    lis r4, lbl_807776A0@ha
    addi r4, r4, lbl_807776A0@l
    stw r4, 0x0(r3)
    lwz r3, lbl_8087EE98
    cmpwi r3, 0x0
    beq lbl_fn_80056E40_00000568
    mr r4, r30
    bl fn_8004CBB0
lbl_fn_80056E40_00000568:
    cmpwi r31, 0x0
    ble lbl_fn_80056E40_00000578
    mr r3, r30
    bl dtor_80084684
lbl_fn_80056E40_00000578:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80056EB0(void)
{
    nofralloc
    lwz r8, 0x10(r3)
    cmpwi r8, -0x1
    beq lbl_fn_80056EB0_000005AC
    lwz r7, 0x0(r4)
    cmpwi r7, -0x1
    bne lbl_fn_80056EB0_000005B4
lbl_fn_80056EB0_000005AC:
    li r3, 0x1
    blr
lbl_fn_80056EB0_000005B4:
    lwz r6, 0x18(r3)
    lwz r5, 0x8(r4)
    subi r6, r6, 0x1
    srawi r0, r6, 31
    andc r0, r6, r0
    add r5, r5, r0
    subf r0, r5, r7
    cmpw r0, r8
    bgt lbl_fn_80056EB0_0000060C
    add r0, r7, r5
    cmpw r8, r0
    bgt lbl_fn_80056EB0_0000060C
    lwz r4, 0x4(r4)
    lwz r3, 0x14(r3)
    subf r0, r5, r4
    cmpw r0, r3
    bgt lbl_fn_80056EB0_0000060C
    add r0, r4, r5
    cmpw r3, r0
    bgt lbl_fn_80056EB0_0000060C
    li r3, 0x1
    blr
lbl_fn_80056EB0_0000060C:
    li r3, 0x0
    blr
}

asm void fn_80056F30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    ble lbl_fn_80056F30_00000664
    mr r3, r31
    mr r4, r6
    addi r5, r30, 0x3c
    bl fn_800523A0
    cmpwi r3, 0x0
    beq lbl_fn_80056F30_00000664
    addi r0, r30, 0x1c
    stw r0, 0x34(r31)
    li r3, 0x1
    stw r30, 0x38(r31)
    b lbl_fn_80056F30_00000668
lbl_fn_80056F30_00000664:
    li r3, 0x0
lbl_fn_80056F30_00000668:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80056F9C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    ble lbl_fn_80056F9C_000006D0
    mr r3, r31
    mr r4, r6
    addi r5, r30, 0x3c
    bl fn_8005361C
    cmpwi r3, 0x0
    beq lbl_fn_80056F9C_000006D0
    addi r0, r30, 0x1c
    stw r0, 0x34(r31)
    li r3, 0x1
    stw r30, 0x38(r31)
    b lbl_fn_80056F9C_000006D4
lbl_fn_80056F9C_000006D0:
    li r3, 0x0
lbl_fn_80056F9C_000006D4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80057008(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    ble lbl_fn_80057008_0000073C
    mr r3, r31
    mr r4, r6
    addi r5, r30, 0x3c
    bl fn_800551BC
    cmpwi r3, 0x0
    beq lbl_fn_80057008_0000073C
    addi r0, r30, 0x1c
    stw r0, 0x34(r31)
    li r3, 0x1
    stw r30, 0x38(r31)
    b lbl_fn_80057008_00000740
lbl_fn_80057008_0000073C:
    li r3, 0x0
lbl_fn_80057008_00000740:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80057074(void)
{
    nofralloc
    mr r6, r3
    lis r5, 0xff01
    lwz r3, lbl_8087EEB0
    addi r4, r6, 0x3c
    lfs f1, 0x48(r6)
    subi r5, r5, 0x100
    lfs f2, lbl_80880960
    b fn_80063D3C
}

asm void fn_80057094(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    lfs f4, 0x1c(r4)
    lfs f1, lbl_80880964
    lfs f0, 0x48(r3)
    fdivs f7, f1, f4
    lfs f6, 0x44(r3)
    lfs f3, 0xc(r4)
    lfs f2, 0x3c(r3)
    lfs f1, 0x4(r4)
    lfs f5, 0x40(r3)
    fdivs f0, f0, f4
    lfs f4, 0x8(r4)
    fctiwz f0, f0
    fsubs f3, f6, f3
    fsubs f1, f2, f1
    stfd f0, 0x28(r1)
    fsubs f4, f5, f4
    fmuls f2, f3, f7
    lwz r4, 0x2c(r1)
    fmuls f3, f1, f7
    addi r0, r4, 0x1
    stfs f2, 0x10(r1)
    fctiwz f0, f2
    fctiwz f1, f3
    stfs f3, 0x8(r1)
    stfd f0, 0x20(r1)
    fmuls f0, f4, f7
    stfd f1, 0x18(r1)
    lwz r4, 0x24(r1)
    lwz r5, 0x1c(r1)
    stfs f0, 0xc(r1)
    stw r5, 0x10(r3)
    stw r4, 0x14(r3)
    stw r0, 0x18(r3)
    addi r1, r1, 0x30
    blr
}

asm void fn_80057124(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r6
    stw r29, 0x34(r1)
    mr r29, r4
    stw r28, 0x30(r1)
    mr r28, r3
    ble lbl_fn_80057124_00000940
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80057124_00000868
    lfs f4, lbl_80880968
    lfs f3, 0x54(r3)
    lfs f0, 0xc(r6)
    fmuls f3, f4, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80057124_00000868
    li r3, 0x0
    b lbl_fn_80057124_00000944
lbl_fn_80057124_00000868:
    psq_l f1, 0x3c(r3), 0, 0
    addi r31, r1, 0x14
    lfs f2, 0x44(r3)
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r31), 0, 0
    psq_l f1, 0x48(r3), 0, 0
    lfs f2, 0x50(r3)
    stfs f2, 0x28(r1)
    psq_st f1, 0xc(r31), 0, 0
    lfs f0, 0x54(r3)
    stfs f0, 0x2c(r1)
    lwz r0, 0x8(r3)
    clrrwi r3, r0, 31
    addis r0, r3, 0x8000
    cmplwi r0, 0x0
    bne lbl_fn_80057124_00000914
    frsp f5, f2
    lfs f4, 0x1c(r1)
    lfs f3, 0x24(r1)
    addi r3, r1, 0x8
    lfs f0, 0x18(r1)
    fsubs f4, f5, f4
    fsubs f5, f3, f0
    lfs f3, 0x20(r1)
    lfs f0, 0x14(r1)
    stfs f5, 0xc(r1)
    fsubs f0, f3, f0
    stfs f4, 0x10(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9940
    fmr f3, f1
    lfs f0, lbl_8088096C
    lfs f2, 0x1c(r1)
    addi r3, r1, 0x20
    psq_l f1, 0x0(r31), 0, 0
    fcmpo cr0, f3, f0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x28(r1)
    bge lbl_fn_80057124_00000908
    fmr f3, f0
lbl_fn_80057124_00000908:
    lfs f0, 0x24(r1)
    fadds f0, f0, f3
    stfs f0, 0x24(r1)
lbl_fn_80057124_00000914:
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x14
    bl fn_8005256C
    cmpwi r3, 0x0
    beq lbl_fn_80057124_00000940
    addi r0, r28, 0x1c
    stw r0, 0x34(r29)
    li r3, 0x1
    stw r28, 0x38(r29)
    b lbl_fn_80057124_00000944
lbl_fn_80057124_00000940:
    li r3, 0x0
lbl_fn_80057124_00000944:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80057280(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r6
    stw r29, 0x34(r1)
    mr r29, r4
    stw r28, 0x30(r1)
    mr r28, r3
    ble lbl_fn_80057280_00000AA4
    rlwinm r4, r7, 0, 8, 8
    subis r0, r4, 0x80
    cmplwi r0, 0x0
    bne lbl_fn_80057280_00000A78
    lwz r0, 0x8(r3)
    clrrwi r4, r0, 31
    addis r0, r4, 0x8000
    cmplwi r0, 0x0
    bne lbl_fn_80057280_00000A78
    lfs f2, 0x44(r3)
    addi r31, r1, 0x14
    psq_l f1, 0x3c(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f0, f2
    stfs f2, 0x1c(r1)
    lfs f2, 0x50(r3)
    psq_l f1, 0x48(r3), 0, 0
    psq_st f1, 0xc(r31), 0, 0
    fsubs f5, f2, f0
    lfs f0, 0x18(r1)
    lfs f3, 0x24(r1)
    stfs f2, 0x28(r1)
    fsubs f6, f3, f0
    lfs f3, 0x20(r1)
    lfs f4, 0x54(r3)
    addi r3, r1, 0x8
    lfs f0, 0x14(r1)
    stfs f4, 0x2c(r1)
    fsubs f0, f3, f0
    stfs f6, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f5, 0x10(r1)
    bl fn_805F9940
    fmr f3, f1
    lfs f0, lbl_8088096C
    lfs f2, 0x1c(r1)
    addi r3, r1, 0x20
    psq_l f1, 0x0(r31), 0, 0
    fcmpo cr0, f3, f0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x28(r1)
    bge lbl_fn_80057280_00000A40
    fmr f3, f0
lbl_fn_80057280_00000A40:
    lfs f0, 0x24(r1)
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x14
    fadds f0, f0, f3
    stfs f0, 0x24(r1)
    bl fn_80053BD0
    cmpwi r3, 0x0
    beq lbl_fn_80057280_00000AA4
    addi r0, r28, 0x1c
    stw r0, 0x34(r29)
    li r3, 0x1
    stw r28, 0x38(r29)
    b lbl_fn_80057280_00000AA8
lbl_fn_80057280_00000A78:
    mr r3, r29
    mr r4, r30
    addi r5, r28, 0x3c
    bl fn_80053BD0
    cmpwi r3, 0x0
    beq lbl_fn_80057280_00000AA4
    addi r0, r28, 0x1c
    stw r0, 0x34(r29)
    li r3, 0x1
    stw r28, 0x38(r29)
    b lbl_fn_80057280_00000AA8
lbl_fn_80057280_00000AA4:
    li r3, 0x0
lbl_fn_80057280_00000AA8:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800573E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    ble lbl_fn_800573E4_00000B18
    mr r3, r31
    mr r4, r6
    addi r5, r30, 0x3c
    bl fn_80055810
    cmpwi r3, 0x0
    beq lbl_fn_800573E4_00000B18
    addi r0, r30, 0x1c
    stw r0, 0x34(r31)
    li r3, 0x1
    stw r30, 0x38(r31)
    b lbl_fn_800573E4_00000B1C
lbl_fn_800573E4_00000B18:
    li r3, 0x0
lbl_fn_800573E4_00000B1C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80057450(void)
{
    nofralloc
    mr r5, r3
    lis r6, 0xff01
    lwz r3, lbl_8087EEB0
    addi r4, r5, 0x3c
    lfs f1, 0x54(r5)
    addi r5, r5, 0x48
    lfs f2, lbl_80880960
    subi r6, r6, 0x100
    b fn_8006471C
}

asm void fn_80057474(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lfs f1, 0x1c(r4)
    stw r0, 0x84(r1)
    lfs f0, lbl_80880964
    stfd f31, 0x70(r1)
    lfs f5, 0xc(r4)
    psq_st f31, 0x78(r1), 0, 0
    fdivs f31, f0, f1
    lfs f3, 0x4(r4)
    stw r31, 0x6c(r1)
    mr r31, r4
    lfs f0, lbl_80880970
    stw r30, 0x68(r1)
    lfs f6, 0x44(r3)
    mr r30, r3
    lfs f2, 0x50(r3)
    lfs f4, 0x3c(r3)
    fsubs f6, f6, f5
    fsubs f8, f2, f5
    lfs f1, 0x48(r3)
    fsubs f7, f4, f3
    lfs f5, 0x40(r3)
    fsubs f10, f1, f3
    lfs f2, 0x8(r4)
    lfs f1, 0x4c(r3)
    fadds f11, f6, f8
    fadds f13, f7, f10
    stfs f7, 0x38(r1)
    fsubs f9, f1, f2
    fsubs f5, f5, f2
    stfs f6, 0x40(r1)
    fmuls f1, f11, f0
    fmuls f3, f13, f0
    stfs f5, 0x3c(r1)
    fadds f12, f5, f9
    fmuls f2, f1, f31
    stfs f10, 0x2c(r1)
    fmuls f4, f3, f31
    fmuls f1, f12, f0
    stfs f9, 0x30(r1)
    fctiwz f0, f2
    fsubs f5, f9, f5
    stfs f8, 0x34(r1)
    fmuls f3, f1, f31
    stfd f0, 0x50(r1)
    fctiwz f1, f4
    fsubs f0, f8, f6
    stfd f1, 0x48(r1)
    fsubs f1, f10, f7
    lwz r0, 0x54(r1)
    lwz r4, 0x4c(r1)
    stw r4, 0x10(r3)
    stw r0, 0x14(r3)
    addi r3, r1, 0x8
    stfs f13, 0x14(r1)
    stfs f12, 0x18(r1)
    stfs f11, 0x1c(r1)
    stfs f4, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f2, 0x28(r1)
    stfs f1, 0x8(r1)
    stfs f5, 0xc(r1)
    stfs f0, 0x10(r1)
    bl fn_805F9940
    lfs f2, 0x54(r30)
    lfs f0, 0x1c(r31)
    fadds f1, f2, f1
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r3, 0x5c(r1)
    addi r0, r3, 0x1
    stw r0, 0x18(r30)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_800575BC(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    stw r0, 0x1d4(r1)
    addi r11, r1, 0x1d0
    bl _savegpr_27
    lfs f1, 0x0(r4)
    mr r27, r3
    lfs f2, 0x4(r4)
    mr r28, r5
    lfs f3, 0x8(r4)
    mr r29, r6
    addi r3, r1, 0x188
    bl fn_805F90D0
    lfs f7, lbl_80880960
    addi r31, r1, 0x188
    lfs f1, 0x8(r28)
    addi r30, r1, 0x38
    lfs f0, lbl_80880964
    fcmpu cr0, f7, f1
    stfs f7, 0x64(r1)
    stfs f7, 0x5c(r1)
    stfs f7, 0x58(r1)
    stfs f7, 0x54(r1)
    stfs f7, 0x50(r1)
    stfs f7, 0x48(r1)
    stfs f7, 0x44(r1)
    stfs f7, 0x40(r1)
    stfs f7, 0x3c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x38(r1)
    beq lbl_fn_800575BC_00000D70
    addi r3, r1, 0x128
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x128
    addi r5, r1, 0x158
    bl fn_805F89F0
    addi r3, r1, 0x158
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_800575BC_00000D70:
    lfs f0, lbl_80880960
    lfs f1, 0x4(r28)
    fcmpu cr0, f0, f1
    beq lbl_fn_800575BC_00000DD0
    addi r3, r1, 0xc8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xc8
    addi r5, r1, 0xf8
    bl fn_805F89F0
    addi r3, r1, 0xf8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_800575BC_00000DD0:
    lfs f0, lbl_80880960
    lfs f1, 0x0(r28)
    fcmpu cr0, f0, f1
    beq lbl_fn_800575BC_00000E30
    addi r3, r1, 0x68
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x68
    addi r5, r1, 0x98
    bl fn_805F89F0
    addi r3, r1, 0x98
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_800575BC_00000E30:
    mr r3, r31
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_805F89F0
    addi r4, r1, 0x8
    mr r3, r27
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    psq_st f1, 0x48(r27), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    psq_st f2, 0x50(r27), 0, 0
    lfs f2, 0x8(r29)
    psq_st f3, 0x58(r27), 0, 0
    psq_st f4, 0x60(r27), 0, 0
    psq_st f5, 0x68(r27), 0, 0
    psq_st f6, 0x70(r27), 0, 0
    psq_st f1, 0x3c(r27), 0, 0
    stfs f2, 0x44(r27)
    bl fn_800577D8
    addi r11, r1, 0x1d0
    bl _restgpr_27
    lwz r0, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}

asm void fn_800577D8(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    mr r29, r3
    addi r3, r1, 0x8
    bl fn_80057A64
    addi r3, r1, 0x14
    bl fn_80057A64
    addi r3, r1, 0x20
    bl fn_80057A64
    addi r3, r1, 0x2c
    bl fn_80057A64
    addi r3, r1, 0x38
    bl fn_80057A64
    addi r3, r1, 0x44
    bl fn_80057A64
    addi r3, r1, 0x50
    bl fn_80057A64
    addi r3, r1, 0x5c
    bl fn_80057A64
    lfs f1, 0x3c(r29)
    addi r3, r1, 0x8
    lfs f2, 0x40(r29)
    lfs f0, 0x44(r29)
    fneg f1, f1
    fneg f2, f2
    fneg f3, f0
    bl fn_80057A68
    lfs f1, 0x3c(r29)
    addi r3, r1, 0x14
    lfs f0, 0x44(r29)
    fneg f1, f1
    lfs f2, 0x40(r29)
    fneg f3, f0
    bl fn_80057A68
    lfs f1, 0x40(r29)
    addi r3, r1, 0x20
    lfs f0, 0x44(r29)
    fneg f2, f1
    lfs f1, 0x3c(r29)
    fneg f3, f0
    bl fn_80057A68
    lfs f0, 0x44(r29)
    addi r3, r1, 0x2c
    lfs f1, 0x3c(r29)
    fneg f3, f0
    lfs f2, 0x40(r29)
    bl fn_80057A68
    lfs f1, 0x3c(r29)
    addi r3, r1, 0x38
    lfs f0, 0x40(r29)
    fneg f1, f1
    lfs f3, 0x44(r29)
    fneg f2, f0
    bl fn_80057A68
    lfs f0, 0x3c(r29)
    addi r3, r1, 0x44
    lfs f2, 0x40(r29)
    fneg f1, f0
    lfs f3, 0x44(r29)
    bl fn_80057A68
    lfs f0, 0x40(r29)
    addi r3, r1, 0x50
    lfs f1, 0x3c(r29)
    fneg f2, f0
    lfs f3, 0x44(r29)
    bl fn_80057A68
    lfs f1, 0x3c(r29)
    addi r3, r1, 0x5c
    lfs f2, 0x40(r29)
    lfs f3, 0x44(r29)
    bl fn_80057A68
    addi r31, r1, 0x8
    li r30, 0x0
lbl_fn_800577D8_00000FF0:
    mr r3, r31
    addi r4, r29, 0x48
    bl fn_80011410
    addi r30, r30, 0x1
    addi r31, r31, 0xc
    cmpwi r30, 0x8
    blt lbl_fn_800577D8_00000FF0
    mr r3, r29
    addi r4, r29, 0x78
    addi r5, r1, 0x8
    addi r6, r1, 0x14
    addi r7, r1, 0x20
    bl fn_80057A78
    mr r3, r29
    addi r4, r29, 0xb8
    addi r5, r1, 0x2c
    addi r6, r1, 0x20
    addi r7, r1, 0x14
    bl fn_80057A78
    mr r3, r29
    addi r4, r29, 0xf8
    addi r5, r1, 0x20
    addi r6, r1, 0x2c
    addi r7, r1, 0x50
    bl fn_80057A78
    mr r3, r29
    addi r4, r29, 0x138
    addi r5, r1, 0x5c
    addi r6, r1, 0x50
    addi r7, r1, 0x2c
    bl fn_80057A78
    mr r3, r29
    addi r4, r29, 0x178
    addi r5, r1, 0x14
    addi r6, r1, 0x8
    addi r7, r1, 0x44
    bl fn_80057A78
    mr r3, r29
    addi r4, r29, 0x1b8
    addi r5, r1, 0x38
    addi r6, r1, 0x44
    addi r7, r1, 0x8
    bl fn_80057A78
    mr r3, r29
    addi r4, r29, 0x1f8
    addi r5, r1, 0x44
    addi r6, r1, 0x38
    addi r7, r1, 0x5c
    bl fn_80057A78
    mr r3, r29
    addi r4, r29, 0x238
    addi r5, r1, 0x50
    addi r6, r1, 0x5c
    addi r7, r1, 0x38
    bl fn_80057A78
    mr r3, r29
    addi r4, r29, 0x278
    addi r5, r1, 0x38
    addi r6, r1, 0x8
    addi r7, r1, 0x50
    bl fn_80057A78
    mr r3, r29
    addi r4, r29, 0x2b8
    addi r5, r1, 0x20
    addi r6, r1, 0x50
    addi r7, r1, 0x8
    bl fn_80057A78
    mr r3, r29
    addi r4, r29, 0x2f8
    addi r5, r1, 0x5c
    addi r6, r1, 0x2c
    addi r7, r1, 0x44
    bl fn_80057A78
    mr r3, r29
    addi r4, r29, 0x338
    addi r5, r1, 0x14
    addi r6, r1, 0x44
    addi r7, r1, 0x2c
    bl fn_80057A78
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}
