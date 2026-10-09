#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80148990(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F9160(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_80695720(void);

/* External data declarations */
extern u8 lbl_8074A8E0[];
extern u8 lbl_8074AA58[];

/* Small data declarations */
extern u32 lbl_8087D9E0;
extern u32 lbl_8087D9E4;
extern u32 lbl_8087DC80;
extern u32 lbl_8087DC84;
extern u32 lbl_80885378;
extern u32 lbl_80885398;
extern u32 lbl_808853B0;
extern u32 lbl_808853B8;
extern u32 lbl_808853BC;
extern u32 lbl_808853C4;
extern u32 lbl_808853CC;
extern u32 lbl_808853D0;
extern u32 lbl_808853D4;
extern u32 lbl_808853D8;
extern u32 lbl_808853DC;
extern u32 lbl_808853E0;
extern u32 lbl_808853E4;
extern u32 lbl_808853E8;
extern u32 lbl_808853EC;
extern u32 lbl_808853F0;
extern u32 lbl_808853F4;
extern u32 lbl_808853F8;
extern u32 lbl_808853FC;

/* Function declarations */
void fn_80347218(void);
void fn_803482DC(void);
void fn_80348550(void);
void fn_80348568(void);
void fn_803489F4(void);

asm void fn_80347218(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    lfs f2, lbl_80885378
    li r4, 0x79
    stw r0, 0xb4(r1)
    li r0, 0x0
    lfs f3, lbl_808853CC
    addi r5, r1, 0x8
    stw r31, 0xac(r1)
    mr r31, r3
    lfs f0, lbl_80885398
    stw r30, 0xa8(r1)
    addi r30, r1, 0x60
    stw r29, 0xa4(r1)
    stfs f2, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f0, 0x40(r1)
    lfs f0, 0x538(r3)
    addi r3, r1, 0x70
    stfs f2, 0x8(r1)
    stfs f2, 0xc(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    fmr f1, f0
    stw r0, 0x5c(r1)
    stfs f2, 0x10(r1)
    stfs f2, 0x68(r1)
    stfs f3, 0x6c(r1)
    bl fn_805F8E70
    addi r4, r1, 0x38
    addi r3, r1, 0x70
    mr r5, r4
    bl fn_805F93C0
    lfs f4, lbl_808853BC
    addi r3, r1, 0x50
    lfs f3, 0x3c(r1)
    lfs f0, 0x38(r1)
    fmuls f6, f3, f4
    lfs f3, 0x618(r31)
    fmuls f7, f0, f4
    lfs f0, 0x614(r31)
    lfs f5, 0x40(r1)
    fadds f3, f3, f6
    fadds f8, f0, f7
    lwz r0, 0x62c(r31)
    stfs f3, 0x54(r1)
    fmuls f5, f5, f4
    lfs f0, 0x61c(r31)
    stfs f8, 0x50(r1)
    fadds f2, f0, f5
    lfs f3, 0x620(r31)
    psq_l f1, 0x0(r3), 0, 0
    cmpwi r0, 0x0
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0x64(r1)
    stfs f7, 0x44(r1)
    fsubs f0, f0, f4
    stfs f6, 0x48(r1)
    stfs f5, 0x4c(r1)
    stfs f2, 0x58(r1)
    stfs f2, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f0, 0x64(r1)
    beq lbl_fn_80347218_0000010C
    lwz r0, 0x628(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80347218_000002AC
lbl_fn_80347218_0000010C:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_80347218_00000454
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
    beq lbl_fn_80347218_000002A0
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80347218_00000170
    mr r5, r0
lbl_fn_80347218_00000170:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80347218_0000028C
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80347218_00000254
lbl_fn_80347218_00000188:
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
    bdnz lbl_fn_80347218_00000188
    andi. r5, r5, 0x3
    beq lbl_fn_80347218_0000028C
lbl_fn_80347218_00000254:
    mtctr r5
lbl_fn_80347218_00000258:
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
    bdnz lbl_fn_80347218_00000258
lbl_fn_80347218_0000028C:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80347218_000002A0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80347218_000002A0:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_80347218_00000454
lbl_fn_80347218_000002AC:
    lwz r3, 0x624(r31)
    cmplw r3, r0
    blt lbl_fn_80347218_00000454
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_80347218_00000454
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
    beq lbl_fn_80347218_0000044C
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_80347218_0000031C
    mr r5, r0
lbl_fn_80347218_0000031C:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80347218_00000438
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80347218_00000400
lbl_fn_80347218_00000334:
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
    bdnz lbl_fn_80347218_00000334
    andi. r5, r5, 0x3
    beq lbl_fn_80347218_00000438
lbl_fn_80347218_00000400:
    mtctr r5
lbl_fn_80347218_00000404:
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
    bdnz lbl_fn_80347218_00000404
lbl_fn_80347218_00000438:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80347218_0000044C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80347218_0000044C:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_80347218_00000454:
    lwz r0, 0x624(r31)
    addi r3, r1, 0x60
    psq_l f1, 0x0(r3), 0, 0
    lis r4, lbl_8074AA58@ha
    mulli r5, r0, 0x14
    lwz r6, 0x62c(r31)
    lwz r0, 0x5c(r1)
    addi r4, r4, lbl_8074AA58@l
    lfs f2, 0x68(r1)
    addi r3, r31, 0xb0
    stwux r0, r6, r5
    addi r4, r4, 0x3aa
    lfs f3, 0x6c(r1)
    li r5, 0x0
    psq_st f1, 0x4(r6), 0, 0
    lfs f0, lbl_808853BC
    stfs f2, 0xc(r6)
    stfs f3, 0x10(r6)
    lwz r6, 0x624(r31)
    stfs f0, 0x6c(r1)
    addi r0, r6, 0x1
    stw r0, 0x624(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80347218_000004C0
    li r5, 0x0
    b lbl_fn_80347218_000004CC
lbl_fn_80347218_000004C0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_80347218_000004CC:
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x2c
    lfs f3, 0xc(r5)
    addi r3, r1, 0x60
    lwz r0, 0x62c(r31)
    lfs f2, 0x2c(r5)
    stfs f3, 0x2c(r1)
    cmpwi r0, 0x0
    stfs f0, 0x30(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x68(r1)
    beq lbl_fn_80347218_00000510
    lwz r0, 0x628(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80347218_000006B0
lbl_fn_80347218_00000510:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_80347218_00000858
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
    beq lbl_fn_80347218_000006A4
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80347218_00000574
    mr r5, r0
lbl_fn_80347218_00000574:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80347218_00000690
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80347218_00000658
lbl_fn_80347218_0000058C:
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
    bdnz lbl_fn_80347218_0000058C
    andi. r5, r5, 0x3
    beq lbl_fn_80347218_00000690
lbl_fn_80347218_00000658:
    mtctr r5
lbl_fn_80347218_0000065C:
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
    bdnz lbl_fn_80347218_0000065C
lbl_fn_80347218_00000690:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80347218_000006A4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80347218_000006A4:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_80347218_00000858
lbl_fn_80347218_000006B0:
    lwz r3, 0x624(r31)
    cmplw r3, r0
    blt lbl_fn_80347218_00000858
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_80347218_00000858
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
    beq lbl_fn_80347218_00000850
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_80347218_00000720
    mr r5, r0
lbl_fn_80347218_00000720:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80347218_0000083C
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80347218_00000804
lbl_fn_80347218_00000738:
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
    bdnz lbl_fn_80347218_00000738
    andi. r5, r5, 0x3
    beq lbl_fn_80347218_0000083C
lbl_fn_80347218_00000804:
    mtctr r5
lbl_fn_80347218_00000808:
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
    bdnz lbl_fn_80347218_00000808
lbl_fn_80347218_0000083C:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80347218_00000850
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80347218_00000850:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_80347218_00000858:
    lwz r0, 0x624(r31)
    addi r3, r1, 0x60
    psq_l f1, 0x0(r3), 0, 0
    lis r4, lbl_8074AA58@ha
    mulli r5, r0, 0x14
    lwz r6, 0x62c(r31)
    lwz r0, 0x5c(r1)
    addi r4, r4, lbl_8074AA58@l
    lfs f2, 0x68(r1)
    addi r3, r31, 0xb0
    stwux r0, r6, r5
    addi r4, r4, 0x3af
    lfs f3, 0x6c(r1)
    li r5, 0x0
    psq_st f1, 0x4(r6), 0, 0
    lfs f0, lbl_808853D0
    stfs f2, 0xc(r6)
    stfs f3, 0x10(r6)
    lwz r6, 0x624(r31)
    stfs f0, 0x6c(r1)
    addi r0, r6, 0x1
    stw r0, 0x624(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80347218_000008C4
    li r5, 0x0
    b lbl_fn_80347218_000008D0
lbl_fn_80347218_000008C4:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_80347218_000008D0:
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x20
    lfs f3, 0xc(r5)
    addi r3, r1, 0x60
    lwz r0, 0x62c(r31)
    lfs f2, 0x2c(r5)
    stfs f3, 0x20(r1)
    cmpwi r0, 0x0
    stfs f0, 0x24(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x68(r1)
    beq lbl_fn_80347218_00000914
    lwz r0, 0x628(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80347218_00000AB4
lbl_fn_80347218_00000914:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_80347218_00000C5C
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
    beq lbl_fn_80347218_00000AA8
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80347218_00000978
    mr r5, r0
lbl_fn_80347218_00000978:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80347218_00000A94
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80347218_00000A5C
lbl_fn_80347218_00000990:
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
    bdnz lbl_fn_80347218_00000990
    andi. r5, r5, 0x3
    beq lbl_fn_80347218_00000A94
lbl_fn_80347218_00000A5C:
    mtctr r5
lbl_fn_80347218_00000A60:
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
    bdnz lbl_fn_80347218_00000A60
lbl_fn_80347218_00000A94:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80347218_00000AA8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80347218_00000AA8:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_80347218_00000C5C
lbl_fn_80347218_00000AB4:
    lwz r3, 0x624(r31)
    cmplw r3, r0
    blt lbl_fn_80347218_00000C5C
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_80347218_00000C5C
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
    beq lbl_fn_80347218_00000C54
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_80347218_00000B24
    mr r5, r0
lbl_fn_80347218_00000B24:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80347218_00000C40
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80347218_00000C08
lbl_fn_80347218_00000B3C:
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
    bdnz lbl_fn_80347218_00000B3C
    andi. r5, r5, 0x3
    beq lbl_fn_80347218_00000C40
lbl_fn_80347218_00000C08:
    mtctr r5
lbl_fn_80347218_00000C0C:
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
    bdnz lbl_fn_80347218_00000C0C
lbl_fn_80347218_00000C40:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80347218_00000C54
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80347218_00000C54:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_80347218_00000C5C:
    lwz r0, 0x624(r31)
    addi r3, r1, 0x60
    psq_l f1, 0x0(r3), 0, 0
    lis r4, lbl_8074AA58@ha
    mulli r5, r0, 0x14
    lwz r6, 0x62c(r31)
    lwz r0, 0x5c(r1)
    addi r4, r4, lbl_8074AA58@l
    lfs f2, 0x68(r1)
    addi r3, r31, 0xb0
    stwux r0, r6, r5
    addi r4, r4, 0x3b5
    lfs f3, 0x6c(r1)
    li r5, 0x0
    psq_st f1, 0x4(r6), 0, 0
    lfs f0, lbl_808853D0
    stfs f2, 0xc(r6)
    stfs f3, 0x10(r6)
    lwz r6, 0x624(r31)
    stfs f0, 0x6c(r1)
    addi r0, r6, 0x1
    stw r0, 0x624(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80347218_00000CC8
    li r5, 0x0
    b lbl_fn_80347218_00000CD4
lbl_fn_80347218_00000CC8:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_80347218_00000CD4:
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x14
    lfs f3, 0xc(r5)
    addi r3, r1, 0x60
    lwz r0, 0x62c(r31)
    lfs f2, 0x2c(r5)
    stfs f3, 0x14(r1)
    cmpwi r0, 0x0
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x68(r1)
    beq lbl_fn_80347218_00000D18
    lwz r0, 0x628(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80347218_00000EB8
lbl_fn_80347218_00000D18:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_80347218_00001060
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
    beq lbl_fn_80347218_00000EAC
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80347218_00000D7C
    mr r5, r0
lbl_fn_80347218_00000D7C:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80347218_00000E98
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80347218_00000E60
lbl_fn_80347218_00000D94:
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
    bdnz lbl_fn_80347218_00000D94
    andi. r5, r5, 0x3
    beq lbl_fn_80347218_00000E98
lbl_fn_80347218_00000E60:
    mtctr r5
lbl_fn_80347218_00000E64:
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
    bdnz lbl_fn_80347218_00000E64
lbl_fn_80347218_00000E98:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80347218_00000EAC
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80347218_00000EAC:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_80347218_00001060
lbl_fn_80347218_00000EB8:
    lwz r3, 0x624(r31)
    cmplw r3, r0
    blt lbl_fn_80347218_00001060
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_80347218_00001060
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
    beq lbl_fn_80347218_00001058
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_80347218_00000F28
    mr r5, r0
lbl_fn_80347218_00000F28:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80347218_00001044
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80347218_0000100C
lbl_fn_80347218_00000F40:
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
    bdnz lbl_fn_80347218_00000F40
    andi. r5, r5, 0x3
    beq lbl_fn_80347218_00001044
lbl_fn_80347218_0000100C:
    mtctr r5
lbl_fn_80347218_00001010:
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
    bdnz lbl_fn_80347218_00001010
lbl_fn_80347218_00001044:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80347218_00001058
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80347218_00001058:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_80347218_00001060:
    lwz r0, 0x624(r31)
    addi r5, r1, 0x60
    lwz r4, 0x62c(r31)
    mulli r3, r0, 0x14
    lwz r0, 0x5c(r1)
    stwux r0, r3, r4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x68(r1)
    stfs f2, 0xc(r3)
    lfs f0, 0x6c(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x624(r31)
    lwz r0, 0x12a8(r31)
    addi r3, r3, 0x1
    stw r3, 0x624(r31)
    oris r0, r0, 0x2000
    stw r0, 0x12a8(r31)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_803482DC(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    mr r30, r3
    lwz r0, 0x624(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803482DC_00001320
    lwz r5, 0x62c(r3)
    li r31, 0x0
    lfs f0, 0x620(r3)
    li r4, 0x79
    stfs f0, 0x10(r5)
    lfs f3, lbl_80885378
    lfs f0, lbl_80885398
    stfs f3, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x50
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x50
    mr r5, r4
    bl fn_805F93C0
    lfs f4, lbl_808853BC
    mulli r0, r31, 0x14
    lfs f3, 0x30(r1)
    li r31, 0x1
    lfs f0, 0x2c(r1)
    lis r3, lbl_8074AA58@ha
    fmuls f6, f3, f4
    fmuls f7, f0, f4
    lfs f3, 0x618(r30)
    lfs f0, 0x614(r30)
    addi r3, r3, lbl_8074AA58@l
    fadds f8, f3, f6
    lfs f5, 0x34(r1)
    fadds f0, f0, f7
    stfs f8, 0x48(r1)
    fmuls f5, f5, f4
    lfs f3, 0x61c(r30)
    stfs f0, 0x44(r1)
    addi r5, r1, 0x44
    psq_l f1, 0x0(r5), 0, 0
    fadds f2, f3, f5
    lwz r6, 0x62c(r30)
    addi r4, r3, 0x3aa
    mulli r7, r31, 0x14
    stfs f7, 0x38(r1)
    addi r3, r30, 0xb0
    psq_st f1, 0x4(r6), 0, 0
    li r5, 0x0
    stfs f2, 0xc(r6)
    lwz r6, 0x62c(r30)
    stfs f6, 0x3c(r1)
    add r6, r6, r0
    lfs f0, 0x8(r6)
    stfs f5, 0x40(r1)
    fsubs f0, f0, f4
    stfs f2, 0x4c(r1)
    stfs f0, 0x8(r6)
    lwz r0, 0x62c(r30)
    add r6, r0, r7
    stfs f4, 0x10(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803482DC_000011E0
    li r3, 0x0
    b lbl_fn_803482DC_000011EC
lbl_fn_803482DC_000011E0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_803482DC_000011EC:
    mulli r0, r31, 0x14
    lfs f3, 0x1c(r3)
    lfs f0, 0xc(r3)
    lis r4, lbl_8074AA58@ha
    lfs f2, 0x2c(r3)
    addi r3, r1, 0x20
    lwz r5, 0x62c(r30)
    addi r4, r4, lbl_8074AA58@l
    stfs f0, 0x20(r1)
    li r31, 0x2
    add r5, r5, r0
    lfs f0, lbl_808853D0
    stfs f3, 0x24(r1)
    mulli r0, r31, 0x14
    addi r4, r4, 0x3af
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0xb0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    li r5, 0x0
    lwz r6, 0x62c(r30)
    stfs f2, 0x28(r1)
    add r6, r6, r0
    stfs f0, 0x10(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803482DC_00001260
    li r3, 0x0
    b lbl_fn_803482DC_0000126C
lbl_fn_803482DC_00001260:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_803482DC_0000126C:
    mulli r0, r31, 0x14
    lfs f3, 0x1c(r3)
    lfs f0, 0xc(r3)
    lis r4, lbl_8074AA58@ha
    lfs f2, 0x2c(r3)
    addi r3, r1, 0x14
    lwz r5, 0x62c(r30)
    addi r4, r4, lbl_8074AA58@l
    stfs f0, 0x14(r1)
    li r31, 0x3
    add r5, r5, r0
    lfs f0, lbl_808853D0
    stfs f3, 0x18(r1)
    mulli r0, r31, 0x14
    addi r4, r4, 0x3b5
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0xb0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    li r5, 0x0
    lwz r6, 0x62c(r30)
    stfs f2, 0x1c(r1)
    add r6, r6, r0
    stfs f0, 0x10(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803482DC_000012E0
    li r4, 0x0
    b lbl_fn_803482DC_000012EC
lbl_fn_803482DC_000012E0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_803482DC_000012EC:
    lfs f0, 0x1c(r4)
    mulli r0, r31, 0x14
    lfs f3, 0xc(r4)
    addi r3, r1, 0x8
    lfs f2, 0x2c(r4)
    lwz r4, 0x62c(r30)
    stfs f3, 0x8(r1)
    add r4, r4, r0
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x4(r4), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0xc(r4)
lbl_fn_803482DC_00001320:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80348550(void)
{
    nofralloc
    lwz r4, 0x62c(r4)
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_80348568(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    stfd f31, 0x190(r1)
    psq_st f31, 0x198(r1), 0, 0
    stfd f30, 0x180(r1)
    psq_st f30, 0x188(r1), 0, 0
    stfd f29, 0x170(r1)
    psq_st f29, 0x178(r1), 0, 0
    stw r31, 0x16c(r1)
    stw r30, 0x168(r1)
    mr r30, r3
    lwz r4, 0x14b0(r3)
    lfs f0, 0x530(r3)
    lfs f5, 0x530(r4)
    lfs f3, 0x528(r3)
    addi r3, r1, 0x8c
    lfs f4, 0x528(r4)
    fsubs f5, f5, f0
    lfs f0, lbl_80885378
    fsubs f3, f4, f3
    stfs f5, 0x94(r1)
    stfs f3, 0x8c(r1)
    stfs f0, 0x90(r1)
    bl fn_805F9940
    lfs f0, 0x1ce0(r30)
    li r31, 0x1
    fcmpo cr0, f1, f0
    bge lbl_fn_80348568_0000142C
    lfs f0, lbl_80885378
    fcmpo cr0, f1, f0
    ble lbl_fn_80348568_0000142C
    addi r3, r1, 0x8c
    mr r4, r3
    bl fn_805F98D0
    lfs f3, lbl_80885378
    addi r3, r1, 0x138
    lfs f0, lbl_80885398
    li r4, 0x79
    stfs f3, 0x80(r1)
    stfs f3, 0x84(r1)
    stfs f0, 0x88(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x80
    addi r3, r1, 0x138
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x8c
    addi r4, r1, 0x80
    bl fn_805F9990
    lfs f0, lbl_808853D4
    fcmpo cr0, f1, f0
    ble lbl_fn_80348568_0000142C
    li r31, 0x0
lbl_fn_80348568_0000142C:
    cmpwi r31, 0x0
    bne lbl_fn_80348568_00001440
    lwz r0, 0x2dc(r30)
    cmpwi r0, 0x14
    bne lbl_fn_80348568_000017A0
lbl_fn_80348568_00001440:
    lwz r4, 0x14b0(r30)
    addi r3, r1, 0x14
    lfs f0, 0x530(r30)
    addi r31, r1, 0x8
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r30)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r30)
    fsubs f5, f5, f4
    lfs f31, lbl_808853C4
    fsubs f4, f3, f0
    stfs f5, 0x18(r1)
    frsp f3, f2
    lfs f0, lbl_808853D8
    stfs f4, 0x14(r1)
    fabs f4, f3
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x1c(r1)
    frsp f4, f4
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x10(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_80348568_000014C8
    lfs f3, 0x8(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_80348568_000014BC
    lfs f0, lbl_808853DC
    b lbl_fn_80348568_000014C0
lbl_fn_80348568_000014BC:
    lfs f0, lbl_808853E0
lbl_fn_80348568_000014C0:
    stfs f0, 0x24(r1)
    b lbl_fn_80348568_000014DC
lbl_fn_80348568_000014C8:
    fmr f2, f3
    lfs f1, 0x8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x24(r1)
lbl_fn_80348568_000014DC:
    lfs f0, 0x24(r1)
    addi r3, r1, 0x108
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885378
    addi r4, r1, 0x2c
    lfs f4, 0x110(r1)
    mr r5, r4
    lfs f5, 0x10c(r1)
    addi r3, r1, 0xc8
    lfs f6, 0x108(r1)
    lfs f7, 0x120(r1)
    lfs f8, 0x11c(r1)
    lfs f9, 0x118(r1)
    lfs f10, 0x130(r1)
    lfs f11, 0x12c(r1)
    lfs f12, 0x128(r1)
    lfs f13, 0x134(r1)
    lfs f30, 0x124(r1)
    lfs f29, 0x114(r1)
    lfs f0, lbl_80885398
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x10(r1)
    stfs f3, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f3, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f6, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f4, 0x64(r1)
    stfs f6, 0xc8(r1)
    stfs f5, 0xcc(r1)
    stfs f4, 0xd0(r1)
    stfs f9, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f7, 0x58(r1)
    stfs f9, 0xd8(r1)
    stfs f8, 0xdc(r1)
    stfs f7, 0xe0(r1)
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f10, 0x4c(r1)
    stfs f12, 0xe8(r1)
    stfs f11, 0xec(r1)
    stfs f10, 0xf0(r1)
    stfs f29, 0x38(r1)
    stfs f30, 0x3c(r1)
    stfs f13, 0x40(r1)
    stfs f29, 0xd4(r1)
    stfs f30, 0xe4(r1)
    stfs f13, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F9750
    lfs f2, 0x34(r1)
    lfs f0, lbl_808853D8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80348568_000015F8
    lfs f3, 0x30(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_80348568_000015E8
    lfs f0, lbl_808853DC
    b lbl_fn_80348568_000015EC
lbl_fn_80348568_000015E8:
    lfs f0, lbl_808853E0
lbl_fn_80348568_000015EC:
    fneg f0, f0
    stfs f0, 0x20(r1)
    b lbl_fn_80348568_0000160C
lbl_fn_80348568_000015F8:
    lfs f1, 0x30(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x20(r1)
lbl_fn_80348568_0000160C:
    addi r3, r1, 0x20
    lfs f3, lbl_80885378
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8074A8E0@ha
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f3
    lfs f0, 0x538(r30)
    lfs f29, 0xc(r1)
    stfs f2, 0x10(r1)
    fsubs f1, f29, f0
    lfd f2, lbl_8074A8E0@l(r3)
    stfs f3, 0x28(r1)
    bl fn_8068AEA8
    frsp f5, f1
    lfs f0, lbl_808853E4
    fcmpo cr0, f5, f0
    ble lbl_fn_80348568_00001658
    lfs f0, lbl_808853B8
    fsubs f5, f5, f0
lbl_fn_80348568_00001658:
    lfs f0, lbl_808853E8
    fcmpo cr0, f5, f0
    bge lbl_fn_80348568_0000166C
    lfs f0, lbl_808853B8
    fadds f5, f5, f0
lbl_fn_80348568_0000166C:
    lfs f3, lbl_808853EC
    lfs f0, lbl_80885378
    fmuls f3, f3, f31
    fcmpo cr0, f5, f0
    bge lbl_fn_80348568_00001688
    fneg f4, f5
    b lbl_fn_80348568_0000168C
lbl_fn_80348568_00001688:
    fmr f4, f5
lbl_fn_80348568_0000168C:
    lfs f0, lbl_808853F0
    fmuls f3, f0, f3
    fcmpo cr0, f4, f3
    cror eq, lt, eq
    bne lbl_fn_80348568_000016B8
    lfs f1, lbl_80885378
    addi r3, r30, 0xb0
    li r4, 0x1
    bl fn_80097CCC
    stfs f29, 0x538(r30)
    b lbl_fn_80348568_000016E4
lbl_fn_80348568_000016B8:
    lfs f0, lbl_80885378
    fcmpo cr0, f5, f0
    cror eq, lt, eq
    bne lbl_fn_80348568_000016D8
    lfs f0, 0x538(r30)
    fsubs f0, f0, f3
    stfs f0, 0x538(r30)
    b lbl_fn_80348568_000016E4
lbl_fn_80348568_000016D8:
    lfs f0, 0x538(r30)
    fadds f0, f0, f3
    stfs f0, 0x538(r30)
lbl_fn_80348568_000016E4:
    lfs f0, lbl_80885398
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80885378
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x14
    lfs f2, lbl_808853C4
    li r6, 0x1
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f3, lbl_80885378
    addi r3, r1, 0x98
    lfs f0, lbl_80885398
    li r4, 0x79
    stfs f3, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f0, 0x70(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x68
    addi r3, r1, 0x98
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x70(r1)
    lfs f4, lbl_808853F4
    lfs f3, 0x6c(r1)
    lfs f0, 0x68(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0x52c(r30)
    fmuls f7, f0, f4
    lfs f4, 0x528(r30)
    lfs f0, 0x530(r30)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x74(r1)
    fadds f0, f0, f5
    stfs f6, 0x78(r1)
    stfs f5, 0x7c(r1)
    stfs f4, 0x528(r30)
    stfs f3, 0x52c(r30)
    stfs f0, 0x530(r30)
    b lbl_fn_80348568_000017AC
lbl_fn_80348568_000017A0:
    lwz r3, 0x14c0(r30)
    addi r0, r3, 0x1
    stw r0, 0x14c0(r30)
lbl_fn_80348568_000017AC:
    lwz r0, 0x1a4(r1)
    psq_l f31, 0x198(r1), 0, 0
    lfd f31, 0x190(r1)
    psq_l f30, 0x188(r1), 0, 0
    lfd f30, 0x180(r1)
    psq_l f29, 0x178(r1), 0, 0
    lfd f29, 0x170(r1)
    lwz r31, 0x16c(r1)
    lwz r30, 0x168(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_803489F4(void)
{
    nofralloc
    stwu r1, -0x3a0(r1)
    mflr r0
    stw r0, 0x3a4(r1)
    addi r11, r1, 0x330
    stfd f31, 0x390(r1)
    psq_st f31, 0x398(r1), 0, 0
    stfd f30, 0x380(r1)
    psq_st f30, 0x388(r1), 0, 0
    stfd f29, 0x370(r1)
    psq_st f29, 0x378(r1), 0, 0
    stfd f28, 0x360(r1)
    psq_st f28, 0x368(r1), 0, 0
    stfd f27, 0x350(r1)
    psq_st f27, 0x358(r1), 0, 0
    stfd f26, 0x340(r1)
    psq_st f26, 0x348(r1), 0, 0
    stfd f25, 0x330(r1)
    psq_st f25, 0x338(r1), 0, 0
    bl _savegpr_27
    lfs f8, 0x2e4(r3)
    mr r27, r3
    lfs f7, lbl_808853F8
    mr r28, r4
    lfs f0, lbl_808853B0
    fsubs f7, f8, f7
    lfs f8, lbl_80885398
    fdivs f0, f7, f0
    fcmpo cr0, f8, f0
    bge lbl_fn_803489F4_00001854
    b lbl_fn_803489F4_00001858
lbl_fn_803489F4_00001854:
    fmr f8, f0
lbl_fn_803489F4_00001858:
    lfs f10, lbl_80885378
    fcmpo cr0, f10, f8
    ble lbl_fn_803489F4_00001868
    b lbl_fn_803489F4_00001890
lbl_fn_803489F4_00001868:
    lfs f8, 0x2e4(r3)
    lfs f7, lbl_808853F8
    lfs f0, lbl_808853B0
    fsubs f7, f8, f7
    lfs f10, lbl_80885398
    fdivs f0, f7, f0
    fcmpo cr0, f10, f0
    bge lbl_fn_803489F4_0000188C
    b lbl_fn_803489F4_00001890
lbl_fn_803489F4_0000188C:
    fmr f10, f0
lbl_fn_803489F4_00001890:
    lfs f8, lbl_8087DC84
    li r4, 0x79
    lfs f9, lbl_8087DC80
    lfs f7, lbl_80885378
    fsubs f8, f8, f9
    lfs f0, lbl_80885398
    stfs f7, 0x74(r1)
    stfs f7, 0x78(r1)
    fmadds f25, f10, f8, f9
    stfs f0, 0x7c(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x2e8
    bl fn_805F8E70
    addi r4, r1, 0x74
    addi r3, r1, 0x2e8
    mr r5, r4
    bl fn_805F93C0
    lfs f8, 0x7c(r1)
    addi r4, r1, 0x68
    lfs f7, 0x78(r1)
    addi r3, r27, 0x1654
    fmuls f9, f8, f25
    lfs f0, 0x74(r1)
    fmuls f10, f7, f25
    lfs f8, 0x530(r27)
    fmuls f11, f0, f25
    lfs f0, 0x52c(r27)
    fadds f12, f0, f10
    lfs f7, 0x528(r27)
    fadds f8, f8, f9
    lfs f0, 0x8(r28)
    fadds f13, f7, f11
    lfs f7, 0x4(r28)
    fsubs f2, f8, f0
    lfs f0, 0x0(r28)
    fsubs f7, f12, f7
    stfs f11, 0x80(r1)
    fsubs f0, f13, f0
    stfs f7, 0x6c(r1)
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f10, 0x84(r1)
    stfs f9, 0x88(r1)
    stfs f13, 0x8c(r1)
    stfs f12, 0x90(r1)
    stfs f8, 0x94(r1)
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x165c(r27)
    bl fn_805F9940
    lfs f0, lbl_808853FC
    lfs f31, lbl_80885398
    fdivs f0, f1, f0
    fcmpo cr0, f31, f0
    ble lbl_fn_803489F4_00001970
    b lbl_fn_803489F4_00001980
lbl_fn_803489F4_00001970:
    addi r3, r27, 0x1654
    bl fn_805F9940
    lfs f0, lbl_808853FC
    fdivs f31, f1, f0
lbl_fn_803489F4_00001980:
    addi r3, r27, 0x1654
    mr r4, r3
    bl fn_805F98D0
    lfs f2, 0x165c(r27)
    addi r3, r27, 0x1654
    lfs f8, lbl_80885378
    addi r31, r1, 0x5c
    fabs f9, f2
    lfs f7, lbl_80885398
    psq_l f1, 0x0(r3), 0, 0
    lfs f0, lbl_808853D8
    frsp f9, f9
    stfs f8, 0x168c(r27)
    stfs f8, 0x1684(r27)
    fcmpo cr0, f9, f0
    stfs f8, 0x1680(r27)
    stfs f8, 0x167c(r27)
    stfs f8, 0x1678(r27)
    stfs f8, 0x1670(r27)
    stfs f8, 0x166c(r27)
    stfs f8, 0x1668(r27)
    stfs f8, 0x1664(r27)
    stfs f7, 0x1688(r27)
    stfs f7, 0x1674(r27)
    stfs f7, 0x1660(r27)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x64(r1)
    bge lbl_fn_803489F4_00001A10
    lfs f0, 0x5c(r1)
    fcmpo cr0, f0, f8
    ble lbl_fn_803489F4_00001A04
    lfs f0, lbl_808853DC
    b lbl_fn_803489F4_00001A08
lbl_fn_803489F4_00001A04:
    lfs f0, lbl_808853E0
lbl_fn_803489F4_00001A08:
    stfs f0, 0x54(r1)
    b lbl_fn_803489F4_00001A24
lbl_fn_803489F4_00001A10:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x54(r1)
lbl_fn_803489F4_00001A24:
    lfs f0, 0x54(r1)
    addi r3, r1, 0x278
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80885378
    addi r4, r1, 0x44
    lfs f25, 0x280(r1)
    mr r5, r4
    lfs f26, 0x27c(r1)
    addi r3, r1, 0x2a8
    lfs f27, 0x278(r1)
    lfs f28, 0x290(r1)
    lfs f29, 0x28c(r1)
    lfs f30, 0x288(r1)
    lfs f13, 0x2a0(r1)
    lfs f12, 0x29c(r1)
    lfs f11, 0x298(r1)
    lfs f10, 0x2a4(r1)
    lfs f9, 0x294(r1)
    lfs f8, 0x284(r1)
    lfs f0, lbl_80885398
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x64(r1)
    stfs f7, 0x2d8(r1)
    stfs f7, 0x2dc(r1)
    stfs f7, 0x2e0(r1)
    stfs f0, 0x2e4(r1)
    stfs f27, 0x14(r1)
    stfs f26, 0x18(r1)
    stfs f25, 0x1c(r1)
    stfs f27, 0x2a8(r1)
    stfs f26, 0x2ac(r1)
    stfs f25, 0x2b0(r1)
    stfs f30, 0x20(r1)
    stfs f29, 0x24(r1)
    stfs f28, 0x28(r1)
    stfs f30, 0x2b8(r1)
    stfs f29, 0x2bc(r1)
    stfs f28, 0x2c0(r1)
    stfs f11, 0x2c(r1)
    stfs f12, 0x30(r1)
    stfs f13, 0x34(r1)
    stfs f11, 0x2c8(r1)
    stfs f12, 0x2cc(r1)
    stfs f13, 0x2d0(r1)
    stfs f8, 0x38(r1)
    stfs f9, 0x3c(r1)
    stfs f10, 0x40(r1)
    stfs f8, 0x2b4(r1)
    stfs f9, 0x2c4(r1)
    stfs f10, 0x2d4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F9750
    lfs f2, 0x4c(r1)
    lfs f0, lbl_808853D8
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_803489F4_00001B40
    lfs f7, 0x48(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f7, f0
    ble lbl_fn_803489F4_00001B30
    lfs f0, lbl_808853DC
    b lbl_fn_803489F4_00001B34
lbl_fn_803489F4_00001B30:
    lfs f0, lbl_808853E0
lbl_fn_803489F4_00001B34:
    fneg f0, f0
    stfs f0, 0x50(r1)
    b lbl_fn_803489F4_00001B54
lbl_fn_803489F4_00001B40:
    lfs f1, 0x48(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x50(r1)
lbl_fn_803489F4_00001B54:
    lfs f2, lbl_80885378
    addi r3, r1, 0x50
    lfs f7, lbl_80885398
    addi r30, r27, 0x1660
    frsp f0, f2
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x58(r1)
    addi r29, r1, 0x128
    fcmpu cr0, f2, f0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x64(r1)
    stfs f2, 0x154(r1)
    stfs f2, 0x14c(r1)
    stfs f2, 0x148(r1)
    stfs f2, 0x144(r1)
    stfs f2, 0x140(r1)
    stfs f2, 0x138(r1)
    stfs f2, 0x134(r1)
    stfs f2, 0x130(r1)
    stfs f2, 0x12c(r1)
    stfs f7, 0x150(r1)
    stfs f7, 0x13c(r1)
    stfs f7, 0x128(r1)
    beq lbl_fn_803489F4_00001C08
    fmr f1, f0
    addi r3, r1, 0x218
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x218
    addi r5, r1, 0x248
    bl fn_805F89F0
    addi r3, r1, 0x248
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_803489F4_00001C08:
    lfs f0, lbl_80885378
    lfs f1, 0x60(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_803489F4_00001C68
    addi r3, r1, 0x1b8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x1b8
    addi r5, r1, 0x1e8
    bl fn_805F89F0
    addi r3, r1, 0x1e8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_803489F4_00001C68:
    lfs f0, lbl_80885378
    lfs f1, 0x5c(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_803489F4_00001CC8
    addi r3, r1, 0x158
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x158
    addi r5, r1, 0x188
    bl fn_805F89F0
    addi r3, r1, 0x188
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_803489F4_00001CC8:
    mr r3, r30
    mr r4, r29
    addi r5, r1, 0xf8
    bl fn_805F89F0
    addi r4, r1, 0xf8
    stfs f31, 0x8(r1)
    psq_l f2, 0x8(r4), 0, 0
    addi r29, r27, 0x1660
    psq_l f3, 0x10(r4), 0, 0
    addi r3, r1, 0x98
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f1, f31
    psq_st f2, 0x8(r30), 0, 0
    fmr f2, f1
    psq_st f3, 0x10(r30), 0, 0
    fmr f3, f1
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    stfs f31, 0xc(r1)
    stfs f31, 0x10(r1)
    bl fn_805F9160
    mr r3, r29
    addi r4, r1, 0x98
    addi r5, r1, 0xc8
    bl fn_805F89F0
    addi r3, r1, 0xc8
    lfs f8, 0x0(r28)
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    lfs f0, 0x8(r28)
    psq_st f2, 0x8(r29), 0, 0
    lfs f7, 0x4(r28)
    psq_st f4, 0x18(r29), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    stfs f8, 0x166c(r27)
    stfs f7, 0x167c(r27)
    stfs f0, 0x168c(r27)
    psq_l f31, 0x398(r1), 0, 0
    lfd f31, 0x390(r1)
    psq_l f30, 0x388(r1), 0, 0
    lfd f30, 0x380(r1)
    psq_l f29, 0x378(r1), 0, 0
    lfd f29, 0x370(r1)
    psq_l f28, 0x368(r1), 0, 0
    lfd f28, 0x360(r1)
    psq_l f27, 0x358(r1), 0, 0
    lfd f27, 0x350(r1)
    psq_l f26, 0x348(r1), 0, 0
    lfd f26, 0x340(r1)
    psq_l f25, 0x338(r1), 0, 0
    lfd f25, 0x330(r1)
    addi r11, r1, 0x330
    bl _restgpr_27
    lwz r0, 0x3a4(r1)
    mtlr r0
    addi r1, r1, 0x3a0
    blr
}
