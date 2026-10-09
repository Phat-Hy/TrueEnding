#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_23(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_23(void);
extern void _savegpr_27(void);
extern void fn_8022C9C8(void);
extern void fn_8022DA70(void);
extern void fn_802328EC(void);
extern void fn_8023329C(void);
extern void fn_80233348(void);
extern void fn_802334E0(void);
extern void fn_80233678(void);
extern void fn_80233810(void);
extern void fn_802339A8(void);
extern void fn_80233B40(void);
extern void fn_80233D74(void);
extern void fn_80237B8C(void);
extern void fn_802383D8(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F93C0(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);

/* External data declarations */
extern u8 lbl_80742F68[];
extern u8 lbl_80742F78[];

/* Small data declarations */
extern u32 lbl_8087DBE0;
extern u32 lbl_8087DBE4;
extern u32 lbl_8087DBE8;
extern u32 lbl_8087DBEC;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F360;
extern u32 lbl_8087F364;
extern u32 lbl_8087F368;
extern u32 lbl_8087F370;
extern u32 lbl_808830D0;
extern u32 lbl_808830D4;
extern u32 lbl_80883100;

/* Function declarations */
void fn_8022FAC4(void);
void fn_80230034(void);
void fn_802301EC(void);
void fn_80230780(void);
void fn_80230F3C(void);

asm void fn_8022FAC4(void)
{
    nofralloc
    stwu r1, -0x260(r1)
    mflr r0
    stw r0, 0x264(r1)
    addi r11, r1, 0x230
    stfd f31, 0x250(r1)
    psq_st f31, 0x258(r1), 0, 0
    stfd f30, 0x240(r1)
    psq_st f30, 0x248(r1), 0, 0
    stfd f29, 0x230(r1)
    psq_st f29, 0x238(r1), 0, 0
    bl _savegpr_14
    fmr f29, f1
    cmpwi r4, 0x0
    mr r15, r3
    mr r16, r4
    mr r17, r6
    mr r14, r7
    mr r18, r8
    mr r19, r9
    mr r20, r10
    bne lbl_fn_8022FAC4_0000005C
    li r3, 0x0
    b lbl_fn_8022FAC4_00000540
lbl_fn_8022FAC4_0000005C:
    lfs f0, lbl_808830D4
    cmpwi r8, 0x0
    lfs f7, lbl_808830D0
    stfs f7, 0x28(r1)
    stfs f7, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    bne lbl_fn_8022FAC4_0000008C
    addi r18, r1, 0x28
lbl_fn_8022FAC4_0000008C:
    cmpwi r9, 0x0
    bne lbl_fn_8022FAC4_00000098
    addi r19, r1, 0x28
lbl_fn_8022FAC4_00000098:
    cmpwi r10, 0x0
    bne lbl_fn_8022FAC4_000000A4
    addi r20, r1, 0x18
lbl_fn_8022FAC4_000000A4:
    cmpwi r5, 0x0
    bge lbl_fn_8022FAC4_000000B8
    lwz r24, 0x0(r4)
    li r22, 0x0
    b lbl_fn_8022FAC4_000000C0
lbl_fn_8022FAC4_000000B8:
    mr r22, r5
    addi r24, r5, 0x1
lbl_fn_8022FAC4_000000C0:
    lwz r0, 0x0(r4)
    cmplw r0, r24
    bge lbl_fn_8022FAC4_000000D4
    li r3, 0x0
    b lbl_fn_8022FAC4_00000540
lbl_fn_8022FAC4_000000D4:
    lwz r4, lbl_8087DBEC
    lis r3, 0x2
    subi r0, r3, 0x7960
    addi r3, r4, 0x1
    stw r3, lbl_8087DBEC
    cmplw r3, r0
    ble lbl_fn_8022FAC4_000000F8
    li r0, 0x1
    stw r0, lbl_8087DBEC
lbl_fn_8022FAC4_000000F8:
    mulli r31, r22, 0x26c
    lfs f30, lbl_808830D0
    lfs f31, lbl_808830D4
    addi r28, r1, 0x1b8
    addi r25, r1, 0x68
    addi r27, r1, 0x158
    addi r26, r1, 0xf8
    addi r29, r1, 0x38
    slwi r30, r22, 2
    li r23, 0x0
    b lbl_fn_8022FAC4_00000464
lbl_fn_8022FAC4_00000124:
    lwz r3, 0x28(r16)
    lwzx r0, r3, r30
    cmpwi r0, 0x0
    beq lbl_fn_8022FAC4_00000458
    addi r3, r15, 0xc
    addi r4, r15, 0x8
    li r5, 0x0
    bl fn_80237B8C
    cmpwi r3, 0x0
    mr r21, r3
    beq lbl_fn_8022FAC4_00000458
    cmpwi r23, 0x0
    bne lbl_fn_8022FAC4_0000015C
    mr r23, r21
lbl_fn_8022FAC4_0000015C:
    li r0, 0x1
    sth r0, 0x18(r3)
    lwz r0, 0x78(r15)
    cmpwi r0, 0x0
    beq lbl_fn_8022FAC4_0000017C
    lhz r0, 0x18(r3)
    ori r0, r0, 0x20
    sth r0, 0x18(r3)
lbl_fn_8022FAC4_0000017C:
    lwz r0, 0x7c(r15)
    cmpwi r0, 0x0
    beq lbl_fn_8022FAC4_00000194
    lhz r0, 0x18(r3)
    ori r0, r0, 0x100
    sth r0, 0x18(r3)
lbl_fn_8022FAC4_00000194:
    stfs f30, 0x1c(r3)
    lwz r0, 0x4(r16)
    stw r16, 0xbc(r3)
    add r4, r0, r31
    li r0, 0x0
    stw r4, 0xc0(r3)
    stw r0, 0xc4(r3)
    li r0, 0x1
    stb r0, 0x1a(r3)
    lwz r0, lbl_8087F360
    stw r0, 0x20(r3)
    lwz r0, lbl_8087F364
    stw r0, 0x24(r3)
    lwz r0, lbl_8087DBE8
    stw r0, 0x28(r3)
    lwz r0, lbl_8087F370
    stw r0, 0x2c(r3)
    lwz r0, lbl_8087DBEC
    stw r0, 0x30(r3)
    lwz r0, 0x6c(r15)
    stw r0, 0x34(r3)
    lwz r0, 0x70(r15)
    stw r0, 0x38(r3)
    lwz r0, 0x268(r1)
    lfs f0, 0x64(r4)
    fmuls f0, f29, f0
    stfs f0, 0xa8(r3)
    lfs f0, 0x0(r20)
    stfs f0, 0xac(r3)
    lfs f0, 0x4(r20)
    stfs f0, 0xb0(r3)
    lfs f0, 0x8(r20)
    stfs f0, 0xb4(r3)
    lfs f0, 0xc(r20)
    stfs f0, 0xb8(r3)
    stw r17, 0x8(r3)
    stw r14, 0xc(r3)
    stw r0, 0x10(r3)
    lwz r0, 0x26c(r1)
    stw r0, 0x14(r3)
    stfs f30, 0x94(r1)
    stfs f30, 0x8c(r1)
    stfs f30, 0x88(r1)
    stfs f30, 0x84(r1)
    stfs f30, 0x80(r1)
    stfs f30, 0x78(r1)
    stfs f30, 0x74(r1)
    stfs f30, 0x70(r1)
    stfs f30, 0x6c(r1)
    stfs f31, 0x90(r1)
    stfs f31, 0x7c(r1)
    stfs f31, 0x68(r1)
    lfs f1, 0x4(r19)
    fcmpu cr0, f30, f1
    beq lbl_fn_8022FAC4_000002BC
    addi r3, r1, 0x188
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r25
    addi r4, r1, 0x188
    addi r5, r1, 0x1b8
    bl fn_805F89F0
    psq_l f1, 0x0(r28), 0, 0
    psq_l f2, 0x8(r28), 0, 0
    psq_l f3, 0x10(r28), 0, 0
    psq_l f4, 0x18(r28), 0, 0
    psq_l f5, 0x20(r28), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
    psq_st f3, 0x10(r25), 0, 0
    psq_st f4, 0x18(r25), 0, 0
    psq_st f5, 0x20(r25), 0, 0
    psq_st f6, 0x28(r25), 0, 0
lbl_fn_8022FAC4_000002BC:
    lfs f1, 0x0(r19)
    fcmpu cr0, f30, f1
    beq lbl_fn_8022FAC4_00000314
    addi r3, r1, 0x128
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r25
    addi r4, r1, 0x128
    addi r5, r1, 0x158
    bl fn_805F89F0
    psq_l f1, 0x0(r27), 0, 0
    psq_l f2, 0x8(r27), 0, 0
    psq_l f3, 0x10(r27), 0, 0
    psq_l f4, 0x18(r27), 0, 0
    psq_l f5, 0x20(r27), 0, 0
    psq_l f6, 0x28(r27), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
    psq_st f3, 0x10(r25), 0, 0
    psq_st f4, 0x18(r25), 0, 0
    psq_st f5, 0x20(r25), 0, 0
    psq_st f6, 0x28(r25), 0, 0
lbl_fn_8022FAC4_00000314:
    lfs f1, 0x8(r19)
    fcmpu cr0, f30, f1
    beq lbl_fn_8022FAC4_0000036C
    addi r3, r1, 0xc8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r25
    addi r4, r1, 0xc8
    addi r5, r1, 0xf8
    bl fn_805F89F0
    psq_l f1, 0x0(r26), 0, 0
    psq_l f2, 0x8(r26), 0, 0
    psq_l f3, 0x10(r26), 0, 0
    psq_l f4, 0x18(r26), 0, 0
    psq_l f5, 0x20(r26), 0, 0
    psq_l f6, 0x28(r26), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
    psq_st f3, 0x10(r25), 0, 0
    psq_st f4, 0x18(r25), 0, 0
    psq_st f5, 0x20(r25), 0, 0
    psq_st f6, 0x28(r25), 0, 0
lbl_fn_8022FAC4_0000036C:
    lfs f1, 0x0(r18)
    addi r3, r1, 0x98
    lfs f2, 0x4(r18)
    lfs f3, 0x8(r18)
    bl fn_805F90D0
    mr r4, r25
    addi r3, r1, 0x98
    addi r5, r1, 0x38
    bl fn_805F89F0
    psq_l f2, 0x8(r29), 0, 0
    addi r4, r21, 0x3c
    psq_l f3, 0x10(r29), 0, 0
    addi r3, r21, 0x8
    psq_l f4, 0x18(r29), 0, 0
    addi r6, r21, 0x9c
    psq_l f5, 0x20(r29), 0, 0
    li r5, 0x0
    psq_l f6, 0x28(r29), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x3c(r21), 0, 0
    psq_st f2, 0x44(r21), 0, 0
    psq_st f3, 0x4c(r21), 0, 0
    psq_st f4, 0x54(r21), 0, 0
    psq_st f5, 0x5c(r21), 0, 0
    psq_st f6, 0x64(r21), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x6c(r21), 0, 0
    psq_st f2, 0x74(r21), 0, 0
    psq_st f3, 0x7c(r21), 0, 0
    psq_st f4, 0x84(r21), 0, 0
    psq_st f5, 0x8c(r21), 0, 0
    psq_st f6, 0x94(r21), 0, 0
    lwz r7, 0xc0(r21)
    lwz r7, 0x4c(r7)
    bl fn_8022C9C8
    li r0, 0x0
    stb r0, 0x1b(r21)
    addi r3, r1, 0x8
    fmr f2, f30
    stfs f30, 0xc8(r21)
    stfs f30, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f30, 0xcc(r21)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0xd0(r21), 0, 0
    stfs f2, 0xd8(r21)
    stfs f31, 0xdc(r21)
    lwz r5, lbl_8087F368
    stfs f30, 0x10(r1)
    cmpwi r5, 0x0
    ble lbl_fn_8022FAC4_00000458
    mr r3, r15
    mr r4, r21
    bl fn_802328EC
lbl_fn_8022FAC4_00000458:
    addi r22, r22, 0x1
    addi r31, r31, 0x26c
    addi r30, r30, 0x4
lbl_fn_8022FAC4_00000464:
    cmpw r22, r24
    blt lbl_fn_8022FAC4_00000124
    cmpwi r23, 0x0
    beq lbl_fn_8022FAC4_0000052C
    li r17, 0x0
    li r14, 0x0
    b lbl_fn_8022FAC4_00000520
lbl_fn_8022FAC4_00000480:
    lwz r3, 0x2c(r16)
    lwzx r0, r3, r14
    cmpwi r0, 0x0
    beq lbl_fn_8022FAC4_00000518
    lwz r0, 0x20(r15)
    li r4, 0x0
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8022FAC4_00000518
lbl_fn_8022FAC4_000004A8:
    lwz r7, 0x24(r15)
    lwzx r0, r7, r3
    cmpwi r0, 0x0
    bne lbl_fn_8022FAC4_0000050C
    mulli r18, r4, 0x94
    mr r4, r15
    mr r5, r23
    mr r6, r17
    add r3, r7, r18
    bl fn_802383D8
    lwz r0, 0x24(r15)
    lwz r4, lbl_8087F360
    add r3, r0, r18
    stw r4, 0x24(r3)
    lwz r0, 0x24(r15)
    lwz r4, lbl_8087DBE8
    add r3, r0, r18
    lwz r0, lbl_8087F364
    stw r0, 0x28(r3)
    stw r4, 0x2c(r3)
    lwz r0, 0x24(r15)
    lwz r4, lbl_8087F370
    add r3, r0, r18
    stw r4, 0x30(r3)
    b lbl_fn_8022FAC4_00000518
lbl_fn_8022FAC4_0000050C:
    addi r3, r3, 0x94
    addi r4, r4, 0x1
    bdnz lbl_fn_8022FAC4_000004A8
lbl_fn_8022FAC4_00000518:
    addi r14, r14, 0x4
    addi r17, r17, 0x1
lbl_fn_8022FAC4_00000520:
    lwz r0, 0x10(r16)
    cmplw r17, r0
    blt lbl_fn_8022FAC4_00000480
lbl_fn_8022FAC4_0000052C:
    neg r3, r23
    lwz r0, lbl_8087DBEC
    or r3, r3, r23
    srawi r3, r3, 31
    and r3, r0, r3
lbl_fn_8022FAC4_00000540:
    addi r11, r1, 0x230
    psq_l f31, 0x258(r1), 0, 0
    lfd f31, 0x250(r1)
    psq_l f30, 0x248(r1), 0, 0
    lfd f30, 0x240(r1)
    psq_l f29, 0x238(r1), 0, 0
    lfd f29, 0x230(r1)
    bl _restgpr_14
    lwz r0, 0x264(r1)
    mtlr r0
    addi r1, r1, 0x260
    blr
}

asm void fn_80230034(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x60
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    bl _savegpr_23
    lwz r0, 0x25c(r5)
    mr r23, r3
    lwz r31, 0x0(r7)
    mr r26, r4
    clrlwi. r0, r0, 31
    lwz r25, 0x0(r8)
    lwz r30, 0x0(r9)
    mr r24, r5
    mr r27, r7
    mr r28, r8
    mr r29, r9
    beq lbl_fn_80230034_000006FC
    lfs f1, 0x260(r5)
    lfs f0, lbl_808830D0
    fcmpo cr0, f1, f0
    ble lbl_fn_80230034_000006FC
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x14
    lfs f3, 0x2c(r6)
    lfs f4, 0x1c(r6)
    lfs f5, 0xc(r6)
    lfs f2, 0x114(r4)
    lfs f1, 0x110(r4)
    lfs f0, 0x10c(r4)
    fsubs f2, f2, f3
    fsubs f1, f1, f4
    stfs f5, 0x8(r1)
    fsubs f0, f0, f5
    lfs f31, lbl_808830D4
    stfs f4, 0xc(r1)
    stfs f3, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f2, 0x1c(r1)
    bl fn_805F9940
    lfs f0, 0x260(r24)
    fcmpo cr0, f1, f0
    ble lbl_fn_80230034_00000650
    fsubs f2, f1, f0
    lfs f1, 0x264(r24)
    lfs f0, lbl_808830D4
    fdivs f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80230034_00000640
    fmr f1, f0
lbl_fn_80230034_00000640:
    fcmpo cr0, f1, f31
    bge lbl_fn_80230034_00000654
    fmr f31, f1
    b lbl_fn_80230034_00000654
lbl_fn_80230034_00000650:
    lfs f31, lbl_808830D0
lbl_fn_80230034_00000654:
    lfs f0, lbl_808830D0
    fcmpo cr0, f31, f0
    ble lbl_fn_80230034_000006FC
    lfs f0, 0x268(r24)
    lis r3, 0x4330
    lfs f3, lbl_808830D4
    xoris r0, r25, 0x8000
    stw r0, 0x24(r1)
    lis r4, lbl_80742F78@ha
    fsubs f1, f0, f3
    lfd f2, lbl_80742F78@l(r4)
    stw r3, 0x20(r1)
    xoris r0, r30, 0x8000
    lfd f0, 0x20(r1)
    fmadds f3, f31, f1, f3
    stw r0, 0x2c(r1)
    fsubs f1, f0, f2
    stw r3, 0x28(r1)
    lfd f0, 0x28(r1)
    fmuls f3, f3, f1
    fsubs f0, f0, f2
    fcmpo cr0, f3, f0
    ble lbl_fn_80230034_000006C8
    stw r0, 0x2c(r1)
    li r30, 0x1
    stw r3, 0x28(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f2
    fdivs f3, f3, f0
lbl_fn_80230034_000006C8:
    lwz r0, 0x4(r23)
    lis r3, 0x9249
    fctiwz f0, f3
    addi r3, r3, 0x2493
    subf r0, r0, r26
    mulhw r3, r3, r0
    stfd f0, 0x28(r1)
    lwz r25, 0x2c(r1)
    add r0, r3, r0
    srawi r0, r0, 7
    srwi r3, r0, 31
    add r0, r0, r3
    add r31, r31, r0
lbl_fn_80230034_000006FC:
    stw r31, 0x0(r27)
    stw r25, 0x0(r28)
    stw r30, 0x0(r29)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    addi r11, r1, 0x60
    bl _restgpr_23
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_802301EC(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x110
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    bl _savegpr_27
    lbz r7, 0x1a(r4)
    lis r8, 0x4330
    stw r8, 0xe0(r1)
    mr r29, r3
    clrlwi. r0, r7, 25
    mr r30, r4
    stw r8, 0xe8(r1)
    mr r31, r5
    beq lbl_fn_802301EC_00000C94
    lwz r0, lbl_8087DBE4
    cmpwi r0, 0x0
    beq lbl_fn_802301EC_00000C94
    lwz r8, 0x48(r5)
    lis r3, lbl_80742F68@ha
    stw r8, 0xe4(r1)
    lfd f7, lbl_80742F68@l(r3)
    lfd f0, 0xe0(r1)
    lfs f8, 0x1c(r4)
    fsubs f0, f0, f7
    fcmpo cr0, f8, f0
    cror eq, gt, eq
    bne lbl_fn_802301EC_00000C94
    fctiwz f0, f8
    stfd f0, 0xf0(r1)
    lwz r0, 0xf4(r1)
    subf r0, r8, r0
    stw r0, 0x10(r1)
    lwz r3, 0x54(r5)
    cmpwi r3, 0x0
    ble lbl_fn_802301EC_000007D4
    cmpw r3, r0
    bgt lbl_fn_802301EC_000007D4
    rlwinm r0, r7, 0, 24, 24
    stb r0, 0x1a(r4)
lbl_fn_802301EC_000007D4:
    lbz r0, 0x1a(r4)
    clrlwi. r0, r0, 25
    beq lbl_fn_802301EC_00000C94
    lwz r3, 0x58(r5)
    li r0, 0x1
    cmpwi r3, 0x1
    blt lbl_fn_802301EC_000007F4
    mr r0, r3
lbl_fn_802301EC_000007F4:
    stw r0, 0xc(r1)
    li r0, 0x1
    lwz r3, 0x5c(r5)
    cmpwi r3, 0x1
    blt lbl_fn_802301EC_0000080C
    mr r0, r3
lbl_fn_802301EC_0000080C:
    stw r0, 0x8(r1)
    mr r3, r29
    mr r4, r30
    mr r5, r31
    addi r7, r1, 0x10
    addi r8, r1, 0xc
    addi r9, r1, 0x8
    bl fn_80230034
    lwz r5, 0xbc(r30)
    lis r3, 0x1a6d
    addi r3, r3, 0x1a7
    lwz r0, 0x4(r5)
    lwz r4, 0x18(r5)
    subf r0, r0, r31
    mulhw r0, r3, r0
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r27, r0, r3
    slwi r0, r27, 2
    lwzx r0, r4, r0
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_802301EC_00000A58
    lwz r0, 0x54(r31)
    cmpwi r0, 0x0
    ble lbl_fn_802301EC_00000A58
    psq_l f1, 0x6c(r30), 0, 0
    lis r8, lbl_80742F68@ha
    psq_l f2, 0x74(r30), 0, 0
    addi r28, r1, 0xb0
    psq_l f3, 0x7c(r30), 0, 0
    lis r7, lbl_80742F78@ha
    psq_l f4, 0x84(r30), 0, 0
    mr r4, r27
    psq_l f5, 0x8c(r30), 0, 0
    li r3, 0xc
    psq_l f6, 0x94(r30), 0, 0
    li r6, 0x0
    psq_st f6, 0x28(r28), 0, 0
    lfs f0, lbl_808830D0
    psq_st f2, 0x8(r28), 0, 0
    lfd f9, lbl_80742F68@l(r8)
    psq_st f4, 0x18(r28), 0, 0
    lfd f7, lbl_80742F78@l(r7)
    psq_st f1, 0x0(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    stfs f0, 0xbc(r1)
    stfs f0, 0xcc(r1)
    stfs f0, 0xdc(r1)
    psq_st f1, 0x3c(r30), 0, 0
    fmr f1, f0
    lfs f8, 0x1c(r30)
    psq_st f2, 0x44(r30), 0, 0
    fmr f2, f0
    psq_st f3, 0x4c(r30), 0, 0
    psq_st f4, 0x54(r30), 0, 0
    psq_st f5, 0x5c(r30), 0, 0
    psq_st f6, 0x64(r30), 0, 0
    lwz r0, 0x48(r31)
    stw r0, 0xec(r1)
    lwz r0, 0x54(r31)
    lfd f0, 0xe8(r1)
    xoris r0, r0, 0x8000
    stw r0, 0xe4(r1)
    fsubs f9, f0, f9
    lfd f0, 0xe0(r1)
    fsubs f8, f8, f9
    fsubs f0, f0, f7
    fdivs f30, f8, f0
    bl fn_8023329C
    fmr f31, f1
    lwz r5, 0xbc(r30)
    fmr f1, f30
    lfs f2, lbl_808830D0
    mr r4, r27
    li r3, 0xc
    li r6, 0x0
    bl fn_8023329C
    fsubs f0, f1, f31
    lfs f1, lbl_808830D0
    mr r4, r27
    li r3, 0xd
    stfs f0, 0x74(r1)
    fmr f2, f1
    lwz r5, 0xbc(r30)
    li r6, 0x0
    bl fn_8023329C
    fmr f31, f1
    lwz r5, 0xbc(r30)
    fmr f1, f30
    lfs f2, lbl_808830D0
    mr r4, r27
    li r3, 0xd
    li r6, 0x0
    bl fn_8023329C
    fsubs f0, f1, f31
    lfs f1, lbl_808830D0
    mr r4, r27
    li r3, 0xe
    stfs f0, 0x78(r1)
    fmr f2, f1
    lwz r5, 0xbc(r30)
    li r6, 0x0
    bl fn_8023329C
    fmr f31, f1
    lwz r5, 0xbc(r30)
    fmr f1, f30
    lfs f2, lbl_808830D0
    mr r4, r27
    li r3, 0xe
    li r6, 0x0
    bl fn_8023329C
    fsubs f9, f1, f31
    addi r4, r1, 0x74
    lfs f7, 0x74(r1)
    mr r3, r28
    stfs f9, 0x7c(r1)
    mr r5, r4
    lfs f10, 0xa8(r30)
    lfs f0, 0x78(r1)
    fmuls f8, f7, f10
    fmuls f7, f0, f10
    fmuls f0, f9, f10
    stfs f8, 0x74(r1)
    stfs f7, 0x78(r1)
    stfs f0, 0x7c(r1)
    bl fn_805F93C0
    lfs f9, 0x68(r30)
    lfs f10, 0x58(r30)
    lfs f11, 0x48(r30)
    lfs f8, 0x74(r1)
    lfs f7, 0x78(r1)
    lfs f0, 0x7c(r1)
    fadds f8, f8, f11
    fadds f7, f7, f10
    stfs f11, 0x50(r1)
    fadds f0, f0, f9
    stfs f8, 0x74(r1)
    stfs f7, 0x78(r1)
    stfs f0, 0x7c(r1)
    stfs f10, 0x54(r1)
    stfs f9, 0x58(r1)
    stfs f8, 0x48(r30)
    stfs f7, 0x58(r30)
    stfs f0, 0x68(r30)
    b lbl_fn_802301EC_00000BC4
lbl_fn_802301EC_00000A58:
    psq_l f1, 0x6c(r30), 0, 0
    addi r28, r1, 0x68
    psq_l f2, 0x74(r30), 0, 0
    addi r3, r1, 0x80
    psq_l f3, 0x7c(r30), 0, 0
    mr r4, r28
    psq_l f4, 0x84(r30), 0, 0
    mr r5, r28
    psq_l f5, 0x8c(r30), 0, 0
    psq_l f6, 0x94(r30), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    lfs f0, lbl_808830D0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_l f1, 0xbc(r31), 0, 0
    lfs f2, 0xc4(r31)
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r28), 0, 0
    lfs f10, 0xa8(r30)
    lfs f9, 0x68(r1)
    lfs f8, 0x6c(r1)
    fmuls f7, f2, f10
    fmuls f9, f9, f10
    stfs f0, 0x8c(r1)
    fmuls f8, f8, f10
    stfs f9, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f7, 0x70(r1)
    stfs f0, 0x9c(r1)
    stfs f0, 0xac(r1)
    bl fn_805F93C0
    lfs f8, lbl_8087DBE0
    addi r3, r1, 0x44
    lfs f0, 0x70(r1)
    lfs f7, 0x6c(r1)
    fmuls f2, f0, f8
    lfs f0, 0x68(r1)
    fmuls f7, f7, f8
    fmuls f0, f0, f8
    stfs f2, 0x70(r1)
    stfs f0, 0x44(r1)
    frsp f0, f2
    stfs f7, 0x48(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    lfs f8, 0x68(r30)
    lfs f13, 0x48(r30)
    lfs f7, 0x68(r1)
    fadds f9, f0, f8
    lfs f12, 0x58(r30)
    lfs f0, 0x6c(r1)
    fadds f11, f7, f13
    stfs f9, 0x70(r1)
    fadds f10, f0, f12
    stfs f11, 0x68(r1)
    stfs f10, 0x6c(r1)
    stfs f11, 0x48(r30)
    stfs f10, 0x58(r30)
    stfs f9, 0x68(r30)
    lwz r0, lbl_8087DBE4
    stfs f2, 0x4c(r1)
    cmpwi r0, 0x0
    stfs f13, 0x38(r1)
    stfs f12, 0x3c(r1)
    stfs f8, 0x40(r1)
    beq lbl_fn_802301EC_00000BC4
    lfs f7, 0xcc(r31)
    addi r3, r1, 0x2c
    lfs f0, 0xc8(r31)
    fmuls f7, f10, f7
    lfs f8, 0xd0(r31)
    fmuls f0, f11, f0
    stfs f11, 0x20(r1)
    fmuls f2, f9, f8
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    frsp f8, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x70(r1)
    lfs f7, 0x6c(r1)
    lfs f0, 0x68(r1)
    stfs f10, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f2, 0x34(r1)
    stfs f0, 0x48(r30)
    stfs f7, 0x58(r30)
    stfs f8, 0x68(r30)
lbl_fn_802301EC_00000BC4:
    lfs f9, lbl_8087DBE0
    lfs f8, 0xd8(r30)
    lfs f7, 0xd4(r30)
    lfs f11, 0x68(r30)
    fmuls f10, f8, f9
    lfs f0, 0xd0(r30)
    fmuls f7, f7, f9
    lfs f12, 0x58(r30)
    fmuls f8, f0, f9
    lfs f9, 0x48(r30)
    fadds f7, f7, f12
    lfs f0, lbl_808830D0
    stfs f0, 0xc8(r30)
    fadds f0, f10, f11
    fadds f8, f8, f9
    stfs f7, 0x58(r30)
    stfs f8, 0x48(r30)
    stfs f0, 0x68(r30)
    lwz r4, 0x10(r1)
    lwz r3, 0xc(r1)
    stfs f9, 0x14(r1)
    divw r0, r4, r3
    stfs f12, 0x18(r1)
    stfs f11, 0x1c(r1)
    stfs f8, 0x5c(r1)
    stfs f7, 0x60(r1)
    stfs f0, 0x64(r1)
    mullw r0, r0, r3
    subf. r0, r0, r4
    bne lbl_fn_802301EC_00000C94
    lis r3, lbl_80742F78@ha
    li r27, 0x0
    lfd f31, lbl_80742F78@l(r3)
    b lbl_fn_802301EC_00000C88
lbl_fn_802301EC_00000C4C:
    xoris r0, r27, 0x8000
    stw r0, 0xec(r1)
    xoris r0, r3, 0x8000
    lwz r4, 0xbc(r30)
    stw r0, 0xe4(r1)
    mr r3, r29
    lfd f7, 0xe8(r1)
    mr r5, r30
    lfd f0, 0xe0(r1)
    mr r6, r31
    fsubs f7, f7, f31
    fsubs f0, f0, f31
    fdivs f1, f7, f0
    bl fn_8022DA70
    addi r27, r27, 0x1
lbl_fn_802301EC_00000C88:
    lwz r3, 0x8(r1)
    cmpw r27, r3
    blt lbl_fn_802301EC_00000C4C
lbl_fn_802301EC_00000C94:
    addi r11, r1, 0x110
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    bl _restgpr_27
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_80230780(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    lwz r8, 0x40(r5)
    mr r27, r3
    lwz r9, 0xc(r3)
    mr r28, r4
    mulli r0, r8, 0x138
    mr r29, r5
    mr r30, r6
    add r31, r9, r0
    lwz r0, 0x104(r31)
    cmplwi r0, 0x1
    bne lbl_fn_80230780_00000D44
    lwz r7, 0x34(r3)
    slwi r4, r8, 2
    lis r3, lbl_80742F68@ha
    lis r0, 0x4330
    lwzx r4, r7, r4
    stw r4, 0x8(r6)
    lfd f3, lbl_80742F68@l(r3)
    lwz r3, 0x50(r5)
    stw r3, 0x34(r1)
    stw r0, 0x30(r1)
    lfd f0, 0x30(r1)
    fsubs f0, f0, f3
    stfs f0, 0x14(r6)
    lwz r0, 0x40(r5)
    mulli r0, r0, 0x138
    add r0, r9, r0
    stw r0, 0x1c(r6)
    b lbl_fn_80230780_00000E6C
lbl_fn_80230780_00000D44:
    stw r31, 0x1c(r6)
    lwz r0, 0x128(r31)
    cmplwi r0, 0x1
    bne lbl_fn_80230780_00000D84
    lwz r0, 0x108(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80230780_00000D78
    bl fn_80680CF8
    lwz r4, 0x108(r31)
    divw r0, r3, r4
    mullw r0, r0, r4
    subf r0, r0, r3
    b lbl_fn_80230780_00000D7C
lbl_fn_80230780_00000D78:
    li r0, 0x0
lbl_fn_80230780_00000D7C:
    stw r0, 0x20(r30)
    b lbl_fn_80230780_00000D8C
lbl_fn_80230780_00000D84:
    li r0, 0x0
    stw r0, 0x20(r6)
lbl_fn_80230780_00000D8C:
    lwz r0, 0x20(r30)
    stw r0, 0x24(r30)
    lwz r3, 0xc(r27)
    lwz r5, 0x40(r29)
    mulli r0, r5, 0x138
    add r3, r3, r0
    lwz r0, 0x104(r3)
    cmplwi r0, 0x2
    bne lbl_fn_80230780_00000DF0
    lwz r3, 0x34(r27)
    slwi r0, r5, 2
    lwzx r0, r3, r0
    stw r0, 0x8(r30)
    lwz r0, 0x40(r29)
    slwi r0, r0, 2
    lwzx r3, r3, r0
    addi r4, r3, 0x30
    stw r4, 0xc(r30)
    lwz r0, 0x4c(r29)
    clrrwi r3, r0, 30
    addis r0, r3, 0x8000
    cmplwi r0, 0x0
    bne lbl_fn_80230780_00000E08
    stw r4, 0x8(r30)
    b lbl_fn_80230780_00000E08
lbl_fn_80230780_00000DF0:
    lwz r4, 0x34(r27)
    slwi r3, r5, 2
    li r0, 0x0
    lwzx r3, r4, r3
    stw r3, 0x8(r30)
    stw r0, 0xc(r30)
lbl_fn_80230780_00000E08:
    lwz r3, 0x50(r29)
    cmpwi r3, 0x0
    bne lbl_fn_80230780_00000E4C
    lwz r4, 0x1c(r30)
    lis r0, 0x4330
    stw r0, 0x30(r1)
    lis r3, lbl_80742F78@ha
    lwz r0, 0x108(r4)
    lfd f4, lbl_80742F78@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    lfs f0, 0x23c(r29)
    lfd f3, 0x30(r1)
    fsubs f3, f3, f4
    fmuls f0, f3, f0
    stfs f0, 0x14(r30)
    b lbl_fn_80230780_00000E6C
lbl_fn_80230780_00000E4C:
    lis r0, 0x4330
    stw r3, 0x34(r1)
    lis r3, lbl_80742F68@ha
    stw r0, 0x30(r1)
    lfd f3, lbl_80742F68@l(r3)
    lfd f0, 0x30(r1)
    fsubs f0, f0, f3
    stfs f0, 0x14(r30)
lbl_fn_80230780_00000E6C:
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80230780_00000E80
    li r3, 0x0
    b lbl_fn_80230780_00001460
lbl_fn_80230780_00000E80:
    mr r3, r30
    mr r4, r29
    bl fn_80233D74
    lwz r6, 0xbc(r28)
    lis r3, 0x1a6d
    addi r5, r3, 0x1a7
    mr r4, r30
    lwz r0, 0x4(r6)
    mr r6, r28
    addi r3, r1, 0x20
    subf r0, r0, r29
    mulhw r0, r5, r0
    srawi r0, r0, 6
    srwi r5, r0, 31
    add r31, r0, r5
    mr r5, r31
    bl fn_80233348
    lfs f4, 0x20(r1)
    lfs f5, 0xa8(r28)
    lfs f3, 0x24(r1)
    lfs f0, 0x28(r1)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    lwz r0, 0x70(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80230780_00000F10
    lfs f0, 0x13c(r30)
    fmuls f0, f0, f4
    stfs f0, 0x24(r1)
    lfs f0, 0x140(r30)
    fmuls f0, f0, f4
    stfs f0, 0x28(r1)
lbl_fn_80230780_00000F10:
    mr r4, r30
    mr r5, r31
    mr r6, r28
    addi r3, r30, 0xa4
    bl fn_802334E0
    lwz r0, 0x4c(r29)
    clrlwi. r0, r0, 31
    beq lbl_fn_80230780_00000F5C
    lwz r0, 0x78(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80230780_00000F94
    lfs f3, 0x144(r30)
    lfs f4, 0xa4(r30)
    lfs f0, 0x148(r30)
    fmuls f3, f3, f4
    fmuls f0, f0, f4
    stfs f3, 0xa8(r30)
    stfs f0, 0xac(r30)
    b lbl_fn_80230780_00000F94
lbl_fn_80230780_00000F5C:
    lwz r3, 0xbc(r28)
    slwi r0, r31, 2
    lwz r3, 0x18(r3)
    lwzx r0, r3, r0
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80230780_00000F94
    lfs f3, lbl_808830D0
    stfs f3, 0xa4(r30)
    lfs f0, 0x128(r30)
    stfs f3, 0xa8(r30)
    lfs f3, 0xe8(r29)
    fadds f0, f3, f0
    stfs f0, 0xac(r30)
lbl_fn_80230780_00000F94:
    mr r4, r30
    mr r5, r31
    mr r6, r28
    addi r3, r30, 0xb0
    bl fn_80233678
    lfs f3, 0xb0(r30)
    lfs f0, 0xa8(r28)
    lfs f4, 0xb4(r30)
    fmuls f5, f3, f0
    lfs f3, 0xb8(r30)
    stfs f5, 0xb0(r30)
    lfs f0, 0xa8(r28)
    fmuls f0, f4, f0
    stfs f0, 0xb4(r30)
    lfs f0, 0xa8(r28)
    fmuls f0, f3, f0
    stfs f0, 0xb8(r30)
    lwz r0, 0x80(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80230780_00000FFC
    lfs f3, 0x14c(r30)
    lfs f0, 0x150(r30)
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f3, 0xb4(r30)
    stfs f0, 0xb8(r30)
lbl_fn_80230780_00000FFC:
    lwz r5, 0xbc(r28)
    slwi r0, r31, 2
    lwz r3, 0x18(r5)
    lwzx r0, r3, r0
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_80230780_00001048
    lfs f1, lbl_808830D0
    mr r4, r31
    lfs f2, 0x12c(r30)
    li r3, 0x12
    li r6, 0x0
    bl fn_8023329C
    stfs f1, 0xcc(r30)
    frsp f3, f1
    lfs f0, 0xa8(r28)
    fmuls f0, f3, f0
    stfs f0, 0xcc(r30)
    b lbl_fn_80230780_00001064
lbl_fn_80230780_00001048:
    lfs f3, 0x1e4(r29)
    lfs f0, 0x12c(r30)
    fadds f3, f3, f0
    stfs f3, 0xcc(r30)
    lfs f0, 0xa8(r28)
    fmuls f0, f3, f0
    stfs f0, 0xcc(r30)
lbl_fn_80230780_00001064:
    mr r4, r30
    mr r5, r31
    mr r6, r28
    addi r3, r30, 0xd0
    bl fn_80233810
    lwz r0, 0xa0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80230780_000010A0
    lfs f3, 0x16c(r30)
    lfs f4, 0xd0(r30)
    lfs f0, 0x170(r30)
    fmuls f3, f3, f4
    fmuls f0, f0, f4
    stfs f3, 0xd4(r30)
    stfs f0, 0xd8(r30)
lbl_fn_80230780_000010A0:
    mr r4, r30
    mr r5, r31
    mr r6, r28
    addi r3, r30, 0x98
    bl fn_802339A8
    lfs f3, 0x98(r30)
    lfs f0, 0xa8(r28)
    lfs f4, 0x9c(r30)
    fmuls f5, f3, f0
    lfs f3, 0xa0(r30)
    stfs f5, 0x98(r30)
    lfs f0, 0xa8(r28)
    fmuls f0, f4, f0
    stfs f0, 0x9c(r30)
    lfs f0, 0xa8(r28)
    fmuls f0, f3, f0
    stfs f0, 0xa0(r30)
    lwz r0, 0x88(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80230780_00001108
    lfs f3, 0x154(r30)
    lfs f0, 0x158(r30)
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f3, 0x9c(r30)
    stfs f0, 0xa0(r30)
lbl_fn_80230780_00001108:
    mr r4, r30
    mr r5, r31
    mr r6, r28
    addi r3, r30, 0xbc
    bl fn_80233B40
    lwz r0, 0x90(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80230780_00001144
    lfs f3, 0x15c(r30)
    lfs f4, 0xbc(r30)
    lfs f0, 0x160(r30)
    fmuls f3, f3, f4
    fmuls f0, f0, f4
    stfs f3, 0xc0(r30)
    stfs f0, 0xc4(r30)
lbl_fn_80230780_00001144:
    lwz r0, 0x4c(r29)
    rlwinm. r0, r0, 0, 30, 30
    bne lbl_fn_80230780_000011F0
    lfs f3, 0xbc(r30)
    lfs f0, lbl_808830D0
    fcmpo cr0, f3, f0
    bge lbl_fn_80230780_00001168
    stfs f0, 0xbc(r30)
    b lbl_fn_80230780_00001178
lbl_fn_80230780_00001168:
    lfs f0, lbl_808830D4
    fcmpo cr0, f3, f0
    ble lbl_fn_80230780_00001178
    stfs f0, 0xbc(r30)
lbl_fn_80230780_00001178:
    lfs f3, 0xc0(r30)
    lfs f0, lbl_808830D0
    fcmpo cr0, f3, f0
    bge lbl_fn_80230780_00001190
    stfs f0, 0xc0(r30)
    b lbl_fn_80230780_000011A0
lbl_fn_80230780_00001190:
    lfs f0, lbl_808830D4
    fcmpo cr0, f3, f0
    ble lbl_fn_80230780_000011A0
    stfs f0, 0xc0(r30)
lbl_fn_80230780_000011A0:
    lfs f3, 0xc4(r30)
    lfs f0, lbl_808830D0
    fcmpo cr0, f3, f0
    bge lbl_fn_80230780_000011B8
    stfs f0, 0xc4(r30)
    b lbl_fn_80230780_000011C8
lbl_fn_80230780_000011B8:
    lfs f0, lbl_808830D4
    fcmpo cr0, f3, f0
    ble lbl_fn_80230780_000011C8
    stfs f0, 0xc4(r30)
lbl_fn_80230780_000011C8:
    lfs f3, 0xc8(r30)
    lfs f0, lbl_808830D0
    fcmpo cr0, f3, f0
    bge lbl_fn_80230780_000011E0
    stfs f0, 0xc8(r30)
    b lbl_fn_80230780_000011F0
lbl_fn_80230780_000011E0:
    lfs f0, lbl_808830D4
    fcmpo cr0, f3, f0
    ble lbl_fn_80230780_000011F0
    stfs f0, 0xc8(r30)
lbl_fn_80230780_000011F0:
    lwz r28, 0xbc(r28)
    slwi r0, r31, 2
    lwz r3, 0x18(r28)
    lwzx r0, r3, r0
    rlwinm r0, r0, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_80230780_00001250
    lfs f1, lbl_808830D0
    mr r4, r31
    mr r5, r28
    li r3, 0xa
    fmr f2, f1
    li r6, 0x0
    bl fn_8023329C
    stfs f1, 0xdc(r30)
    mr r4, r31
    lfs f1, lbl_808830D0
    mr r5, r28
    li r3, 0xb
    li r6, 0x0
    fmr f2, f1
    bl fn_8023329C
    stfs f1, 0xe0(r30)
    b lbl_fn_80230780_0000125C
lbl_fn_80230780_00001250:
    lfs f0, lbl_808830D0
    stfs f0, 0xdc(r30)
    stfs f0, 0xe0(r30)
lbl_fn_80230780_0000125C:
    lwz r0, 0x4c(r29)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_fn_80230780_00001274
    li r0, 0x2
    stw r0, 0x10(r30)
    b lbl_fn_80230780_0000127C
lbl_fn_80230780_00001274:
    li r0, 0x6
    stw r0, 0x10(r30)
lbl_fn_80230780_0000127C:
    lwz r0, 0x4c(r29)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_80230780_00001294
    lwz r0, 0x10(r30)
    ori r0, r0, 0x10
    stw r0, 0x10(r30)
lbl_fn_80230780_00001294:
    lwz r0, 0x4c(r29)
    rlwinm. r0, r0, 0, 6, 6
    bne lbl_fn_80230780_000012AC
    lwz r0, 0x10(r30)
    ori r0, r0, 0x8
    stw r0, 0x10(r30)
lbl_fn_80230780_000012AC:
    lwz r3, 0x4c(r29)
    rlwinm. r0, r3, 0, 5, 5
    beq lbl_fn_80230780_000012C8
    lwz r0, 0x10(r30)
    oris r0, r0, 0x1
    stw r0, 0x10(r30)
    b lbl_fn_80230780_000012DC
lbl_fn_80230780_000012C8:
    rlwinm. r0, r3, 0, 4, 4
    beq lbl_fn_80230780_000012DC
    lwz r0, 0x10(r30)
    oris r0, r0, 0x2
    stw r0, 0x10(r30)
lbl_fn_80230780_000012DC:
    lwz r0, 0x4c(r29)
    rlwinm. r0, r0, 0, 23, 23
    beq lbl_fn_80230780_000012F4
    lwz r0, 0x10(r30)
    ori r0, r0, 0x80
    stw r0, 0x10(r30)
lbl_fn_80230780_000012F4:
    lwz r0, 0x10(r30)
    ori r3, r0, 0x1
    stw r3, 0x10(r30)
    lwz r0, 0x4c(r29)
    clrrwi r4, r0, 30
    subis r0, r4, 0x4000
    cmplwi r0, 0x0
    beq lbl_fn_80230780_00001324
    addis r0, r4, 0x8000
    cmplwi r0, 0x0
    beq lbl_fn_80230780_00001330
    b lbl_fn_80230780_00001338
lbl_fn_80230780_00001324:
    oris r0, r3, 0x4
    stw r0, 0x10(r30)
    b lbl_fn_80230780_00001338
lbl_fn_80230780_00001330:
    oris r0, r3, 0x8
    stw r0, 0x10(r30)
lbl_fn_80230780_00001338:
    lwz r0, 0x234(r29)
    cmplwi r0, 0x1
    beq lbl_fn_80230780_00001368
    cmplwi r0, 0x2
    beq lbl_fn_80230780_00001378
    cmplwi r0, 0x3
    beq lbl_fn_80230780_00001388
    cmplwi r0, 0x4
    beq lbl_fn_80230780_00001398
    cmplwi r0, 0x5
    beq lbl_fn_80230780_000013A8
    b lbl_fn_80230780_000013B4
lbl_fn_80230780_00001368:
    lwz r0, 0x10(r30)
    ori r0, r0, 0x100
    stw r0, 0x10(r30)
    b lbl_fn_80230780_000013B4
lbl_fn_80230780_00001378:
    lwz r0, 0x10(r30)
    ori r0, r0, 0x400
    stw r0, 0x10(r30)
    b lbl_fn_80230780_000013B4
lbl_fn_80230780_00001388:
    lwz r0, 0x10(r30)
    ori r0, r0, 0x200
    stw r0, 0x10(r30)
    b lbl_fn_80230780_000013B4
lbl_fn_80230780_00001398:
    lwz r0, 0x10(r30)
    ori r0, r0, 0x800
    stw r0, 0x10(r30)
    b lbl_fn_80230780_000013B4
lbl_fn_80230780_000013A8:
    lwz r0, 0x10(r30)
    ori r0, r0, 0x1000
    stw r0, 0x10(r30)
lbl_fn_80230780_000013B4:
    lwz r0, 0x40(r29)
    lwz r3, 0xc(r27)
    mulli r0, r0, 0x138
    add r3, r3, r0
    lwz r0, 0x104(r3)
    cmplwi r0, 0x2
    bne lbl_fn_80230780_000013DC
    lwz r0, 0x10(r30)
    oris r0, r0, 0x20
    stw r0, 0x10(r30)
lbl_fn_80230780_000013DC:
    lfs f3, 0x68(r30)
    addi r4, r1, 0x14
    lfs f0, 0x20(r1)
    addi r5, r1, 0x8
    lfs f2, lbl_808830D0
    li r0, 0x0
    fadds f3, f3, f0
    lfs f0, lbl_808830D4
    lfs f4, 0x6c(r30)
    li r3, 0x1
    stfs f3, 0x68(r30)
    lfs f3, 0x24(r1)
    stfs f2, 0x14(r1)
    fadds f3, f4, f3
    lfs f4, 0x70(r30)
    stfs f2, 0x18(r1)
    stfs f3, 0x6c(r30)
    psq_l f1, 0x0(r4), 0, 0
    lfs f3, 0x28(r1)
    stfs f0, 0x8(r1)
    fadds f0, f4, f3
    stfs f2, 0xc(r1)
    psq_st f1, 0x174(r30), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f0, 0x70(r30)
    stw r0, 0x1b0(r30)
    stw r0, 0x1ac(r30)
    stfs f2, 0x1c(r1)
    stfs f2, 0x17c(r30)
    stfs f2, 0x180(r30)
    stfs f2, 0x10(r1)
    psq_st f1, 0x184(r30), 0, 0
    stfs f2, 0x18c(r30)
lbl_fn_80230780_00001460:
    addi r11, r1, 0x50
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80230F3C(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    lwz r5, 0x1c(r4)
    stw r0, 0xd4(r1)
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    stw r31, 0x9c(r1)
    mr r31, r4
    stw r30, 0x98(r1)
    mr r30, r3
    stw r29, 0x94(r1)
    lwz r0, 0x104(r5)
    lwz r6, 0xc0(r3)
    cmplwi r0, 0x1
    bne lbl_fn_80230F3C_00001888
    lfs f1, 0xb8(r4)
    lfs f0, 0xb4(r4)
    fabs f1, f1
    lwz r6, 0x8(r4)
    fabs f2, f0
    frsp f0, f1
    frsp f1, f2
    fcmpo cr0, f1, f0
    ble lbl_fn_80230F3C_000014EC
    b lbl_fn_80230F3C_000014F0
lbl_fn_80230F3C_000014EC:
    fmr f1, f0
lbl_fn_80230F3C_000014F0:
    lfs f0, 0xb0(r4)
    fabs f0, f0
    frsp f2, f0
    fcmpo cr0, f2, f1
    ble lbl_fn_80230F3C_00001508
    b lbl_fn_80230F3C_00001530
lbl_fn_80230F3C_00001508:
    lfs f1, 0xb8(r4)
    lfs f0, 0xb4(r4)
    fabs f1, f1
    fabs f2, f0
    frsp f0, f1
    frsp f2, f2
    fcmpo cr0, f2, f0
    ble lbl_fn_80230F3C_0000152C
    b lbl_fn_80230F3C_00001530
lbl_fn_80230F3C_0000152C:
    fmr f2, f0
lbl_fn_80230F3C_00001530:
    lfs f1, 0x134(r5)
    addi r3, r6, 0x9c
    lfs f0, 0xa8(r6)
    fmuls f29, f2, f1
    fmuls f31, f29, f0
    bl fn_805F9940
    lwz r0, 0x8(r30)
    fmadds f31, f29, f1, f31
    cmplwi r0, 0x3
    beq lbl_fn_80230F3C_00001564
    cmplwi r0, 0x5
    beq lbl_fn_80230F3C_000016D4
    b lbl_fn_80230F3C_00001840
lbl_fn_80230F3C_00001564:
    lwz r0, 0x10(r30)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_80230F3C_00001840
    lwz r29, 0xc(r30)
    addi r3, r1, 0x44
    lfs f0, 0x30(r29)
    lfs f1, 0x20(r29)
    lfs f2, 0x10(r29)
    stfs f2, 0x44(r1)
    stfs f1, 0x48(r1)
    stfs f0, 0x4c(r1)
    bl fn_805F9940
    fmr f30, f1
    lfs f0, 0x2c(r29)
    lfs f1, 0x1c(r29)
    addi r3, r1, 0x38
    lfs f2, 0xc(r29)
    stfs f2, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f0, 0x40(r1)
    bl fn_805F9940
    fmr f29, f1
    lfs f0, 0x28(r29)
    lfs f1, 0x18(r29)
    addi r3, r1, 0x2c
    lfs f2, 0x8(r29)
    stfs f2, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f0, 0x34(r1)
    bl fn_805F9940
    frsp f2, f30
    stfs f1, 0x80(r1)
    frsp f0, f29
    stfs f29, 0x84(r1)
    fabs f1, f2
    fabs f2, f0
    stfs f30, 0x88(r1)
    frsp f0, f1
    frsp f1, f2
    fcmpo cr0, f1, f0
    ble lbl_fn_80230F3C_00001610
    b lbl_fn_80230F3C_00001614
lbl_fn_80230F3C_00001610:
    fmr f1, f0
lbl_fn_80230F3C_00001614:
    lfs f0, 0x80(r1)
    fabs f0, f0
    frsp f2, f0
    fcmpo cr0, f2, f1
    ble lbl_fn_80230F3C_0000162C
    b lbl_fn_80230F3C_00001654
lbl_fn_80230F3C_0000162C:
    lfs f1, 0x88(r1)
    lfs f0, 0x84(r1)
    fabs f1, f1
    fabs f2, f0
    frsp f0, f1
    frsp f2, f2
    fcmpo cr0, f2, f0
    ble lbl_fn_80230F3C_00001650
    b lbl_fn_80230F3C_00001654
lbl_fn_80230F3C_00001650:
    fmr f2, f0
lbl_fn_80230F3C_00001654:
    lfs f3, lbl_808830D4
    fcmpo cr0, f3, f2
    ble lbl_fn_80230F3C_00001664
    b lbl_fn_80230F3C_000016CC
lbl_fn_80230F3C_00001664:
    lfs f1, 0x88(r1)
    lfs f0, 0x84(r1)
    fabs f1, f1
    fabs f2, f0
    frsp f0, f1
    frsp f1, f2
    fcmpo cr0, f1, f0
    ble lbl_fn_80230F3C_00001688
    b lbl_fn_80230F3C_0000168C
lbl_fn_80230F3C_00001688:
    fmr f1, f0
lbl_fn_80230F3C_0000168C:
    lfs f0, 0x80(r1)
    fabs f0, f0
    frsp f3, f0
    fcmpo cr0, f3, f1
    ble lbl_fn_80230F3C_000016A4
    b lbl_fn_80230F3C_000016CC
lbl_fn_80230F3C_000016A4:
    lfs f1, 0x88(r1)
    lfs f0, 0x84(r1)
    fabs f1, f1
    fabs f2, f0
    frsp f0, f1
    frsp f3, f2
    fcmpo cr0, f3, f0
    ble lbl_fn_80230F3C_000016C8
    b lbl_fn_80230F3C_000016CC
lbl_fn_80230F3C_000016C8:
    fmr f3, f0
lbl_fn_80230F3C_000016CC:
    fmuls f31, f31, f3
    b lbl_fn_80230F3C_00001840
lbl_fn_80230F3C_000016D4:
    lwz r0, 0x10(r30)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_80230F3C_00001840
    lwz r29, 0xc(r30)
    addi r3, r1, 0x20
    lfs f0, 0x28(r29)
    lfs f1, 0x18(r29)
    lfs f2, 0x8(r29)
    stfs f2, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f0, 0x28(r1)
    bl fn_805F9940
    fmr f29, f1
    lfs f0, 0x24(r29)
    lfs f1, 0x14(r29)
    addi r3, r1, 0x14
    lfs f2, 0x4(r29)
    stfs f2, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_805F9940
    fmr f30, f1
    lfs f0, 0x20(r29)
    lfs f1, 0x10(r29)
    addi r3, r1, 0x8
    lfs f2, 0x0(r29)
    stfs f2, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    bl fn_805F9940
    frsp f2, f29
    stfs f1, 0x74(r1)
    frsp f0, f30
    stfs f30, 0x78(r1)
    fabs f1, f2
    fabs f2, f0
    stfs f29, 0x7c(r1)
    frsp f0, f1
    frsp f1, f2
    fcmpo cr0, f1, f0
    ble lbl_fn_80230F3C_00001780
    b lbl_fn_80230F3C_00001784
lbl_fn_80230F3C_00001780:
    fmr f1, f0
lbl_fn_80230F3C_00001784:
    lfs f0, 0x74(r1)
    fabs f0, f0
    frsp f2, f0
    fcmpo cr0, f2, f1
    ble lbl_fn_80230F3C_0000179C
    b lbl_fn_80230F3C_000017C4
lbl_fn_80230F3C_0000179C:
    lfs f1, 0x7c(r1)
    lfs f0, 0x78(r1)
    fabs f1, f1
    fabs f2, f0
    frsp f0, f1
    frsp f2, f2
    fcmpo cr0, f2, f0
    ble lbl_fn_80230F3C_000017C0
    b lbl_fn_80230F3C_000017C4
lbl_fn_80230F3C_000017C0:
    fmr f2, f0
lbl_fn_80230F3C_000017C4:
    lfs f3, lbl_808830D4
    fcmpo cr0, f3, f2
    ble lbl_fn_80230F3C_000017D4
    b lbl_fn_80230F3C_0000183C
lbl_fn_80230F3C_000017D4:
    lfs f1, 0x7c(r1)
    lfs f0, 0x78(r1)
    fabs f1, f1
    fabs f2, f0
    frsp f0, f1
    frsp f1, f2
    fcmpo cr0, f1, f0
    ble lbl_fn_80230F3C_000017F8
    b lbl_fn_80230F3C_000017FC
lbl_fn_80230F3C_000017F8:
    fmr f1, f0
lbl_fn_80230F3C_000017FC:
    lfs f0, 0x74(r1)
    fabs f0, f0
    frsp f3, f0
    fcmpo cr0, f3, f1
    ble lbl_fn_80230F3C_00001814
    b lbl_fn_80230F3C_0000183C
lbl_fn_80230F3C_00001814:
    lfs f1, 0x7c(r1)
    lfs f0, 0x78(r1)
    fabs f1, f1
    fabs f2, f0
    frsp f0, f1
    frsp f3, f2
    fcmpo cr0, f3, f0
    ble lbl_fn_80230F3C_00001838
    b lbl_fn_80230F3C_0000183C
lbl_fn_80230F3C_00001838:
    fmr f3, f0
lbl_fn_80230F3C_0000183C:
    fmuls f31, f31, f3
lbl_fn_80230F3C_00001840:
    lfs f1, 0x88(r31)
    addi r3, r1, 0x68
    lfs f0, 0xa4(r30)
    lfs f3, 0x84(r31)
    fsubs f4, f1, f0
    lfs f2, 0xa0(r30)
    lfs f0, 0x9c(r30)
    lfs f1, 0x80(r31)
    fsubs f2, f3, f2
    stfs f4, 0x70(r1)
    fsubs f0, f1, f0
    stfs f2, 0x6c(r1)
    stfs f0, 0x68(r1)
    bl fn_805F9940
    fabs f0, f31
    frsp f0, f0
    fadds f29, f1, f0
    b lbl_fn_80230F3C_000019EC
lbl_fn_80230F3C_00001888:
    lwz r0, 0x4c(r6)
    rlwinm. r0, r0, 0, 14, 14
    beq lbl_fn_80230F3C_00001938
    lfs f29, lbl_808830D0
    li r29, 0x0
    b lbl_fn_80230F3C_00001928
lbl_fn_80230F3C_000018A0:
    lwz r0, 0x1b0(r31)
    addi r3, r1, 0x5c
    lwz r5, 0x1b4(r31)
    add r6, r29, r0
    lwz r4, 0x1c(r31)
    divwu r0, r6, r5
    lwz r7, 0x1a8(r31)
    lfs f6, 0x134(r4)
    lfs f4, 0xa4(r30)
    lfs f2, 0xa0(r30)
    lfs f0, 0x9c(r30)
    mullw r0, r0, r5
    subf r0, r0, r6
    mulli r0, r0, 0x14
    add r4, r7, r0
    lfsx f1, r7, r0
    lfs f5, 0x8(r4)
    lfs f3, 0x4(r4)
    fsubs f0, f1, f0
    lfs f30, 0x10(r4)
    fsubs f4, f5, f4
    fsubs f2, f3, f2
    fmuls f30, f30, f6
    stfs f0, 0x5c(r1)
    stfs f2, 0x60(r1)
    stfs f4, 0x64(r1)
    bl fn_805F9940
    fabs f0, f30
    frsp f0, f0
    fadds f0, f1, f0
    fcmpo cr0, f0, f29
    ble lbl_fn_80230F3C_00001924
    fmr f29, f0
lbl_fn_80230F3C_00001924:
    addi r29, r29, 0x1
lbl_fn_80230F3C_00001928:
    lwz r0, 0x1ac(r31)
    cmplw r29, r0
    blt lbl_fn_80230F3C_000018A0
    b lbl_fn_80230F3C_000019EC
lbl_fn_80230F3C_00001938:
    lfs f1, 0xb8(r4)
    lfs f0, 0xb4(r4)
    fabs f1, f1
    fabs f2, f0
    frsp f0, f1
    frsp f1, f2
    fcmpo cr0, f1, f0
    ble lbl_fn_80230F3C_0000195C
    b lbl_fn_80230F3C_00001960
lbl_fn_80230F3C_0000195C:
    fmr f1, f0
lbl_fn_80230F3C_00001960:
    lfs f0, 0xb0(r4)
    fabs f0, f0
    frsp f6, f0
    fcmpo cr0, f6, f1
    ble lbl_fn_80230F3C_00001978
    b lbl_fn_80230F3C_000019A0
lbl_fn_80230F3C_00001978:
    lfs f1, 0xb8(r4)
    lfs f0, 0xb4(r4)
    fabs f1, f1
    fabs f2, f0
    frsp f0, f1
    frsp f6, f2
    fcmpo cr0, f6, f0
    ble lbl_fn_80230F3C_0000199C
    b lbl_fn_80230F3C_000019A0
lbl_fn_80230F3C_0000199C:
    fmr f6, f0
lbl_fn_80230F3C_000019A0:
    lfs f1, 0x88(r4)
    lfs f0, 0xa4(r3)
    lfs f3, 0x84(r4)
    fsubs f5, f1, f0
    lfs f2, 0xa0(r3)
    lfs f0, 0x9c(r3)
    addi r3, r1, 0x50
    lfs f4, 0x134(r5)
    fsubs f2, f3, f2
    lfs f1, 0x80(r4)
    fmuls f29, f6, f4
    stfs f5, 0x58(r1)
    fsubs f0, f1, f0
    stfs f2, 0x54(r1)
    stfs f0, 0x50(r1)
    bl fn_805F9940
    fabs f0, f29
    frsp f0, f0
    fadds f29, f1, f0
lbl_fn_80230F3C_000019EC:
    lfs f1, lbl_80883100
    fcmpo cr0, f1, f29
    ble lbl_fn_80230F3C_000019FC
    b lbl_fn_80230F3C_00001A00
lbl_fn_80230F3C_000019FC:
    fmr f1, f29
lbl_fn_80230F3C_00001A00:
    lfs f0, 0xc8(r30)
    fcmpo cr0, f1, f0
    ble lbl_fn_80230F3C_00001A10
    stfs f1, 0xc8(r30)
lbl_fn_80230F3C_00001A10:
    lwz r0, 0xd4(r1)
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}
