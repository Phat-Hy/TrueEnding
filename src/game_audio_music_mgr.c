#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8005B3CC(void);
extern void fn_8005B6E8(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_8008BBD8(void);
extern void fn_80092814(void);
extern void fn_800DC12C(void);
extern void fn_80148990(void);
extern void fn_801957F0(void);
extern void fn_80219E6C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_80473E8C(void);
extern void fn_805A3D00(void);
extern void fn_805A49E8(void);
extern void fn_805A5224(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_80695720(void);
extern void fn_80695B00(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80748DC0[];
extern u8 lbl_80748FE8[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80787DD8[];
extern u8 lbl_80787DE8[];
extern u8 lbl_80787F48[];
extern u8 lbl_80787F68[];
extern u8 lbl_807880D0[];
extern u8 lbl_807C8420[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087D9E0;
extern u32 lbl_8087D9E4;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F3E8;
extern u32 lbl_8087F430;
extern u32 lbl_80884B20;
extern u32 lbl_80884B28;
extern u32 lbl_80884B38;
extern u32 lbl_80884B40;
extern u32 lbl_80884B44;
extern u32 lbl_80884B48;
extern u32 lbl_80884B5C;
extern u32 lbl_80884B60;
extern u32 lbl_80884B7C;
extern u32 lbl_80884B9C;
extern u32 lbl_80884BA0;
extern u32 lbl_80884BA8;
extern u32 lbl_80884BAC;
extern u32 lbl_80884BB0;
extern u32 lbl_80884BB4;

/* Function declarations */
void fn_80308D14(void);
void fn_80308E6C(void);
void fn_80309698(void);
void fn_80309704(void);
void fn_803097AC(void);
void fn_803098D0(void);
void fn_80309D20(void);
void fn_80309D50(void);
void fn_80309E6C(void);
void fn_8030A074(void);
void fn_8030A07C(void);
void fn_8030A144(void);
void fn_8030A5D8(void);

asm void fn_80308D14(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r4, lbl_80748DC0@ha
    stw r0, 0x44(r1)
    addi r4, r4, lbl_80748DC0@l
    addi r5, r1, 0x14
    stw r31, 0x3c(r1)
    addi r31, r1, 0x2c
    addi r4, r4, 0x1a8
    stw r30, 0x38(r1)
    mr r30, r3
    lfs f5, 0x52c(r3)
    lfs f4, 0x5a8(r3)
    lfs f3, 0x528(r3)
    fadds f5, f5, f4
    lfs f0, 0x5a4(r3)
    lfs f4, 0x5b0(r3)
    fadds f0, f3, f0
    stfs f5, 0x18(r1)
    lfs f3, 0x530(r3)
    stfs f0, 0x14(r1)
    lfs f0, 0x5ac(r3)
    psq_l f1, 0x0(r5), 0, 0
    li r5, 0x0
    fadds f3, f3, f0
    psq_st f1, 0x614(r3), 0, 0
    lfs f0, 0x618(r3)
    fmr f2, f3
    stfs f4, 0x620(r3)
    fadds f0, f0, f4
    stfs f2, 0x61c(r3)
    frsp f2, f2
    stfs f0, 0x618(r3)
    psq_l f1, 0x614(r3), 0, 0
    addi r3, r3, 0xb0
    stfs f3, 0x1c(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x34(r1)
    bl fn_80092814
    cmpwi r3, -0x1
    ble lbl_fn_80308D14_000000E0
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    addi r5, r1, 0x8
    addi r4, r1, 0x20
    add r3, r3, r0
    lfs f0, 0x1c(r3)
    lfs f3, 0xc(r3)
    stfs f3, 0x8(r1)
    lfs f2, 0x2c(r3)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x28(r1)
    b lbl_fn_80308D14_00000110
lbl_fn_80308D14_000000E0:
    addi r3, r1, 0x20
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f5, lbl_80884B60
    lfs f4, 0x620(r30)
    lfs f3, 0x5b4(r30)
    lfs f0, 0x24(r1)
    fnmsubs f3, f5, f4, f3
    lfs f2, 0x34(r1)
    stfs f2, 0x28(r1)
    fadds f0, f0, f3
    stfs f0, 0x24(r1)
lbl_fn_80308D14_00000110:
    addi r3, r1, 0x2c
    lfs f2, 0x34(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x20
    psq_st f1, 0x5f4(r30), 0, 0
    lfs f0, 0x620(r30)
    stfs f2, 0x5fc(r30)
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x28(r1)
    psq_st f1, 0x600(r30), 0, 0
    stfs f2, 0x608(r30)
    stfs f0, 0x60c(r30)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80308E6C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lfs f2, lbl_80884B20
    stw r0, 0x54(r1)
    li r0, 0x0
    lfs f0, lbl_80884B9C
    addi r4, r1, 0x8
    stw r31, 0x4c(r1)
    addi r5, r1, 0x24
    mr r31, r3
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    lwz r6, 0x62c(r3)
    stfs f2, 0x8(r1)
    cmpwi r6, 0x0
    stfs f2, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    stw r0, 0x20(r1)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x2c(r1)
    stfs f0, 0x30(r1)
    stw r0, 0x624(r3)
    stw r0, 0x628(r3)
    beq lbl_fn_80308E6C_000001D0
    beq lbl_fn_80308E6C_000001C8
    subi r3, r6, 0x10
    bl fn_80084C24
lbl_fn_80308E6C_000001C8:
    li r0, 0x0
    stw r0, 0x62c(r31)
lbl_fn_80308E6C_000001D0:
    lfs f5, 0x52c(r31)
    addi r4, r1, 0x14
    lfs f4, 0x5a8(r31)
    addi r3, r1, 0x24
    lfs f3, 0x528(r31)
    fadds f5, f5, f4
    lfs f0, 0x5a4(r31)
    lfs f4, 0x5b0(r31)
    fadds f0, f3, f0
    stfs f5, 0x18(r1)
    lwz r0, 0x62c(r31)
    stfs f0, 0x14(r1)
    lfs f3, 0x530(r31)
    cmpwi r0, 0x0
    psq_l f1, 0x0(r4), 0, 0
    lfs f0, 0x5ac(r31)
    psq_st f1, 0x0(r3), 0, 0
    fadds f2, f3, f0
    lfs f0, 0x28(r1)
    stfs f4, 0x30(r1)
    fadds f0, f0, f4
    stfs f2, 0x1c(r1)
    stfs f2, 0x2c(r1)
    stfs f0, 0x28(r1)
    beq lbl_fn_80308E6C_00000240
    lwz r0, 0x628(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80308E6C_000003E0
lbl_fn_80308E6C_00000240:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_80308E6C_00000588
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
    beq lbl_fn_80308E6C_000003D4
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80308E6C_000002A4
    mr r5, r0
lbl_fn_80308E6C_000002A4:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80308E6C_000003C0
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80308E6C_00000388
lbl_fn_80308E6C_000002BC:
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
    bdnz lbl_fn_80308E6C_000002BC
    andi. r5, r5, 0x3
    beq lbl_fn_80308E6C_000003C0
lbl_fn_80308E6C_00000388:
    mtctr r5
lbl_fn_80308E6C_0000038C:
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
    bdnz lbl_fn_80308E6C_0000038C
lbl_fn_80308E6C_000003C0:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80308E6C_000003D4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80308E6C_000003D4:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_80308E6C_00000588
lbl_fn_80308E6C_000003E0:
    lwz r3, 0x624(r31)
    cmplw r3, r0
    blt lbl_fn_80308E6C_00000588
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_80308E6C_00000588
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
    beq lbl_fn_80308E6C_00000580
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_80308E6C_00000450
    mr r5, r0
lbl_fn_80308E6C_00000450:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80308E6C_0000056C
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80308E6C_00000534
lbl_fn_80308E6C_00000468:
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
    bdnz lbl_fn_80308E6C_00000468
    andi. r5, r5, 0x3
    beq lbl_fn_80308E6C_0000056C
lbl_fn_80308E6C_00000534:
    mtctr r5
lbl_fn_80308E6C_00000538:
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
    bdnz lbl_fn_80308E6C_00000538
lbl_fn_80308E6C_0000056C:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80308E6C_00000580
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80308E6C_00000580:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_80308E6C_00000588:
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
    lwz r0, 0x62c(r31)
    lwz r3, 0x624(r31)
    cmpwi r0, 0x0
    addi r0, r3, 0x1
    stw r0, 0x624(r31)
    beq lbl_fn_80308E6C_000005DC
    lwz r3, 0x628(r31)
    cmpwi r3, 0x0
    bne lbl_fn_80308E6C_0000077C
lbl_fn_80308E6C_000005DC:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_80308E6C_00000920
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
    beq lbl_fn_80308E6C_00000770
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80308E6C_00000640
    mr r5, r0
lbl_fn_80308E6C_00000640:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80308E6C_0000075C
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80308E6C_00000724
lbl_fn_80308E6C_00000658:
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
    bdnz lbl_fn_80308E6C_00000658
    andi. r5, r5, 0x3
    beq lbl_fn_80308E6C_0000075C
lbl_fn_80308E6C_00000724:
    mtctr r5
lbl_fn_80308E6C_00000728:
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
    bdnz lbl_fn_80308E6C_00000728
lbl_fn_80308E6C_0000075C:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80308E6C_00000770
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80308E6C_00000770:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_80308E6C_00000920
lbl_fn_80308E6C_0000077C:
    cmplw r0, r3
    blt lbl_fn_80308E6C_00000920
    slwi r30, r0, 1
    cmplw r3, r30
    bgt lbl_fn_80308E6C_00000920
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
    beq lbl_fn_80308E6C_00000918
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_80308E6C_000007E8
    mr r5, r0
lbl_fn_80308E6C_000007E8:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80308E6C_00000904
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80308E6C_000008CC
lbl_fn_80308E6C_00000800:
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
    bdnz lbl_fn_80308E6C_00000800
    andi. r5, r5, 0x3
    beq lbl_fn_80308E6C_00000904
lbl_fn_80308E6C_000008CC:
    mtctr r5
lbl_fn_80308E6C_000008D0:
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
    bdnz lbl_fn_80308E6C_000008D0
lbl_fn_80308E6C_00000904:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80308E6C_00000918
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80308E6C_00000918:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_80308E6C_00000920:
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
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x12a8(r31)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80309698(void)
{
    nofralloc
    lwz r0, 0x624(r3)
    cmplwi r0, 0x2
    bltlr
    lwz r4, 0x62c(r3)
    lfs f0, 0x60c(r3)
    stfs f0, 0x10(r4)
    lfs f4, lbl_80884B7C
    lwz r4, 0x62c(r3)
    lfs f2, 0x5fc(r3)
    psq_l f1, 0x5f4(r3), 0, 0
    psq_st f1, 0x4(r4), 0, 0
    stfs f2, 0xc(r4)
    lfs f0, 0x60c(r3)
    lwz r4, 0x62c(r3)
    fmuls f0, f4, f0
    stfs f0, 0x24(r4)
    lwz r4, 0x62c(r3)
    lfs f2, 0x608(r3)
    psq_l f1, 0x600(r3), 0, 0
    psq_st f1, 0x18(r4), 0, 0
    stfs f2, 0x20(r4)
    lwz r4, 0x62c(r3)
    lfs f3, 0x60c(r3)
    lfs f0, 0x1c(r4)
    fmadds f0, f4, f3, f0
    stfs f0, 0x1c(r4)
    blr
}

asm void fn_80309704(void)
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
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    bne lbl_fn_80309704_00000A38
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_80309704_00000A80
lbl_fn_80309704_00000A38:
    mr r3, r31
    addi r4, r4, 0x1558
    bl fn_805A49E8
    cmpwi r3, 0x0
    ble lbl_fn_80309704_00000A70
    lwz r0, 0x624(r31)
    cmplwi r0, 0x2
    blt lbl_fn_80309704_00000A70
    lwz r3, 0x62c(r31)
    psq_l f1, 0x18(r3), 0, 0
    lfs f2, 0x20(r3)
    stfs f2, 0x8(r30)
    psq_st f1, 0x0(r30), 0, 0
    b lbl_fn_80309704_00000A80
lbl_fn_80309704_00000A70:
    psq_l f1, 0x528(r31), 0, 0
    lfs f2, 0x530(r31)
    stfs f2, 0x8(r30)
    psq_st f1, 0x0(r30), 0, 0
lbl_fn_80309704_00000A80:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803097AC(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r4
    stw r30, 0x68(r1)
    mr r30, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_803097AC_00000AE0
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xc
    beq lbl_fn_803097AC_00000AE0
    lwz r0, 0x624(r3)
    cmplwi r0, 0x2
    bge lbl_fn_803097AC_00000AE8
lbl_fn_803097AC_00000AE0:
    li r3, 0x0
    b lbl_fn_803097AC_00000B9C
lbl_fn_803097AC_00000AE8:
    lfs f31, 0x60c(r3)
    li r4, 0x79
    lfs f3, lbl_80884B20
    lfs f0, lbl_80884B38
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x38
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x38
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x10(r1)
    addi r4, r1, 0x2c
    lfs f0, 0xc(r1)
    li r3, 0x1
    lfs f3, 0x8(r1)
    fmuls f4, f4, f31
    fmuls f5, f0, f31
    lfs f0, lbl_80884B5C
    fmuls f6, f3, f31
    lwz r5, 0x62c(r30)
    fmuls f7, f4, f0
    fmuls f8, f5, f0
    fmuls f9, f6, f0
    lfs f0, 0x20(r5)
    lfs f3, 0x1c(r5)
    fadds f2, f0, f7
    lfs f0, 0x18(r5)
    fadds f3, f3, f8
    fadds f0, f0, f9
    stfs f6, 0x14(r1)
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f5, 0x18(r1)
    stfs f4, 0x1c(r1)
    stfs f9, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f7, 0x28(r1)
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
lbl_fn_803097AC_00000B9C:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_803098D0(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    stw r31, 0x14c(r1)
    mr r31, r3
    stw r30, 0x148(r1)
    stw r29, 0x144(r1)
    mr r29, r5
    stw r28, 0x140(r1)
    mr r28, r4
    mr r3, r28
    lwz r12, 0x0(r28)
    lwz r12, 0xfc(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r3, r28
    li r4, 0xd
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    lfs f3, 0x530(r29)
    addi r3, r1, 0x70
    lfs f0, 0x530(r28)
    addi r30, r28, 0x154c
    lfs f5, 0x52c(r29)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r28)
    lfs f3, 0x528(r29)
    fsubs f4, f5, f4
    lfs f0, 0x528(r28)
    stfs f2, 0x78(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80884B40
    stfs f4, 0x74(r1)
    frsp f4, f2
    stfs f3, 0x70(r1)
    lfs f3, lbl_80884B20
    fabs f5, f4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f5, f5
    stfs f2, 0x1554(r28)
    stfs f3, 0x1550(r28)
    fcmpo cr0, f5, f0
    bge lbl_fn_803098D0_00000CA4
    lfs f0, 0x0(r30)
    fcmpo cr0, f0, f3
    ble lbl_fn_803098D0_00000C98
    lfs f0, lbl_80884B44
    b lbl_fn_803098D0_00000C9C
lbl_fn_803098D0_00000C98:
    lfs f0, lbl_80884B48
lbl_fn_803098D0_00000C9C:
    stfs f0, 0x2c(r1)
    b lbl_fn_803098D0_00000CB8
lbl_fn_803098D0_00000CA4:
    fmr f2, f4
    lfs f1, 0x0(r30)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x2c(r1)
lbl_fn_803098D0_00000CB8:
    lfs f0, 0x2c(r1)
    addi r3, r1, 0x108
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884B20
    addi r4, r1, 0x34
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
    lfs f31, 0x124(r1)
    lfs f30, 0x114(r1)
    lfs f0, lbl_80884B38
    stfs f3, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f3, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f6, 0xc8(r1)
    stfs f5, 0xcc(r1)
    stfs f4, 0xd0(r1)
    stfs f9, 0xd8(r1)
    stfs f8, 0xdc(r1)
    stfs f7, 0xe0(r1)
    stfs f12, 0xe8(r1)
    stfs f11, 0xec(r1)
    stfs f10, 0xf0(r1)
    stfs f30, 0xd4(r1)
    stfs f31, 0xe4(r1)
    stfs f13, 0xf4(r1)
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x8(r30)
    stfs f6, 0x64(r1)
    stfs f5, 0x68(r1)
    stfs f4, 0x6c(r1)
    stfs f9, 0x58(r1)
    stfs f8, 0x5c(r1)
    stfs f7, 0x60(r1)
    stfs f12, 0x4c(r1)
    stfs f11, 0x50(r1)
    stfs f10, 0x54(r1)
    stfs f30, 0x40(r1)
    stfs f31, 0x44(r1)
    stfs f13, 0x48(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x3c(r1)
    bl fn_805F9750
    lfs f2, 0x3c(r1)
    lfs f0, lbl_80884B40
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_803098D0_00000DD4
    lfs f3, 0x38(r1)
    lfs f0, lbl_80884B20
    fcmpo cr0, f3, f0
    ble lbl_fn_803098D0_00000DC4
    lfs f0, lbl_80884B44
    b lbl_fn_803098D0_00000DC8
lbl_fn_803098D0_00000DC4:
    lfs f0, lbl_80884B48
lbl_fn_803098D0_00000DC8:
    fneg f0, f0
    stfs f0, 0x28(r1)
    b lbl_fn_803098D0_00000DE8
lbl_fn_803098D0_00000DD4:
    lfs f1, 0x38(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x28(r1)
lbl_fn_803098D0_00000DE8:
    addi r3, r1, 0x28
    lfs f2, lbl_80884B20
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r28
    psq_st f1, 0x0(r30), 0, 0
    addi r4, r1, 0x7c
    stfs f2, 0x8(r30)
    lwz r12, 0x0(r28)
    stfs f2, 0x30(r1)
    lwz r12, 0xb0(r12)
    mtctr r12
    bctrl
    li r3, 0x658
    bl fn_80219E6C
    lwz r0, 0x638(r29)
    lis r30, lbl_80748DC0@ha
    addi r30, r30, lbl_80748DC0@l
    stw r0, 0x63c(r29)
    addi r5, r30, 0x1af
    li r4, 0x0
    stw r3, 0x638(r29)
    mr r6, r5
    li r3, 0x3c
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_803098D0_00000E64
    mr r4, r29
    mr r5, r28
    addi r6, r30, 0x1b0
    bl fn_801957F0
lbl_fn_803098D0_00000E64:
    lis r4, lbl_80787DD8@ha
    lwzu r6, lbl_80787DD8@l(r4)
    li r0, 0x0
    stw r29, 0x8(r1)
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stw r3, 0xc(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F3E8
    stw r6, 0x1c(r1)
    extsb. r0, r0
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r6, 0x10(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r6, 0xb0(r1)
    stw r5, 0xb4(r1)
    stw r4, 0xb8(r1)
    stw r29, 0xbc(r1)
    stw r3, 0xc0(r1)
    bne lbl_fn_803098D0_00000EE4
    lis r6, lbl_807C8420@ha
    lis r4, fn_80309D20@ha
    lis r3, fn_80309D50@ha
    li r0, 0x1
    addi r3, r3, fn_80309D50@l
    addi r5, r6, lbl_807C8420@l
    addi r4, r4, fn_80309D20@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C8420@l(r6)
    stb r0, lbl_8087F3E8
lbl_fn_803098D0_00000EE4:
    lwz r7, 0xb0(r1)
    addi r3, r1, 0x9c
    lwz r6, 0xb4(r1)
    lwz r5, 0xb8(r1)
    lwz r4, 0xbc(r1)
    lwz r0, 0xc0(r1)
    stw r7, 0x9c(r1)
    stw r6, 0xa0(r1)
    stw r5, 0xa4(r1)
    stw r4, 0xa8(r1)
    stw r0, 0xac(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_803098D0_00000FB8
    lwz r7, 0x9c(r1)
    li r3, 0x14
    lwz r6, 0xa0(r1)
    lwz r5, 0xa4(r1)
    lwz r4, 0xa8(r1)
    lwz r0, 0xac(r1)
    stw r7, 0x88(r1)
    stw r6, 0x8c(r1)
    stw r5, 0x90(r1)
    stw r4, 0x94(r1)
    stw r0, 0x98(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_803098D0_00000F7C
    lis r3, __files@ha
    lis r4, lbl_80787F48@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80787F48@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803098D0_00000F7C:
    cmpwi r30, 0x0
    beq lbl_fn_803098D0_00000FAC
    lwz r0, 0x88(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x8c(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x90(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x94(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x98(r1)
    stw r0, 0x10(r30)
lbl_fn_803098D0_00000FAC:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_803098D0_00000FBC
lbl_fn_803098D0_00000FB8:
    li r0, 0x0
lbl_fn_803098D0_00000FBC:
    cmpwi r0, 0x0
    beq lbl_fn_803098D0_00000FD4
    lis r3, lbl_807C8420@ha
    addi r3, r3, lbl_807C8420@l
    stw r3, 0x0(r31)
    b lbl_fn_803098D0_00000FDC
lbl_fn_803098D0_00000FD4:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_803098D0_00000FDC:
    lwz r0, 0x174(r1)
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    lwz r31, 0x14c(r1)
    lwz r30, 0x148(r1)
    lwz r29, 0x144(r1)
    lwz r28, 0x140(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_80309D20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    lwz r4, 0x10(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80309D50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_80309D50_00001074
    lis r3, lbl_80787DE8@ha
    addi r3, r3, lbl_80787DE8@l
    stw r3, 0x0(r4)
    b lbl_fn_80309D50_0000113C
lbl_fn_80309D50_00001074:
    cmpwi r5, 0x0
    bne lbl_fn_80309D50_000010EC
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80309D50_000010B4
    lis r3, __files@ha
    lis r4, lbl_80787F48@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80787F48@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80309D50_000010B4:
    cmpwi r30, 0x0
    beq lbl_fn_80309D50_000010E4
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lwz r0, 0x10(r31)
    stw r0, 0x10(r30)
lbl_fn_80309D50_000010E4:
    stw r30, 0x0(r29)
    b lbl_fn_80309D50_0000113C
lbl_fn_80309D50_000010EC:
    cmpwi r5, 0x1
    bne lbl_fn_80309D50_00001108
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_80309D50_0000113C
lbl_fn_80309D50_00001108:
    lwz r5, 0x0(r4)
    lis r3, lbl_80787DE8@ha
    lwz r4, lbl_80787DE8@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_80309D50_00001134
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_80309D50_0000113C
lbl_fn_80309D50_00001134:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_80309D50_0000113C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80309E6C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x120
    bl _savegpr_27
    lis r6, lbl_80748DC0@ha
    lwz r5, 0x58(r3)
    addi r6, r6, lbl_80748DC0@l
    mr r27, r3
    mr r28, r4
    addi r3, r1, 0x8
    addi r4, r6, 0x1b5
    crclr 6
    bl sprintf
    lwz r0, 0x1650(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80309E6C_000011C8
    cmpwi r28, 0x0
    beq lbl_fn_80309E6C_000011C8
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_80309E6C_000011C8
    mr r3, r28
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0x1650(r27)
    mr r29, r3
    b lbl_fn_80309E6C_000011CC
lbl_fn_80309E6C_000011C8:
    li r29, 0x0
lbl_fn_80309E6C_000011CC:
    mr r3, r27
    mr r4, r29
    bl fn_805A5224
    lis r30, lbl_80748DC0@ha
    mr r3, r29
    addi r30, r30, lbl_80748DC0@l
    addi r4, r30, 0x1cb
    bl fn_8008937C
    lis r31, 0xf
    mr r28, r3
    addi r4, r30, 0x1d8
    addi r5, r27, 0x14e8
    addi r7, r31, 0x423f
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r30, 0x1e0
    addi r5, r27, 0x14f0
    addi r7, r31, 0x423f
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x1e9
    bl fn_8008937C
    mr r28, r3
    addi r4, r30, 0x1d8
    addi r5, r27, 0x14e8
    addi r7, r31, 0x423f
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r30, 0x1f4
    addi r5, r27, 0x14ec
    addi r7, r31, 0x423f
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r30, 0x1e0
    addi r5, r27, 0x14f0
    addi r7, r31, 0x423f
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x1ff
    bl fn_8008937C
    addi r4, r30, 0x1d8
    addi r5, r27, 0x14e8
    addi r7, r31, 0x423f
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80884B20
    mr r3, r29
    lfs f2, lbl_80884BA0
    addi r4, r30, 0xed
    lfs f3, lbl_80884B38
    addi r5, r27, 0x14e4
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r29
    addi r4, r30, 0xfc
    addi r5, r27, 0x1528
    li r6, 0x0
    li r7, 0x3e7
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x106
    addi r5, r27, 0x1538
    li r6, 0x0
    li r7, 0x3e7
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    addi r11, r1, 0x120
    bl _restgpr_27
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8030A074(void)
{
    nofralloc
    lfs f1, lbl_80884B28
    blr
}

asm void fn_8030A07C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_8030A07C_00001410
    addic. r0, r3, 0x1650
    beq lbl_fn_8030A07C_000013B4
    lwz r4, 0x1650(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8030A07C_000013B4
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8030A07C_000013B4
    bl fn_800897D8
lbl_fn_8030A07C_000013B4:
    addic. r31, r29, 0x163c
    beq lbl_fn_8030A07C_000013D4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8030A07C_000013D4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8030A07C_000013D4:
    addic. r31, r29, 0x152c
    beq lbl_fn_8030A07C_000013F4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8030A07C_000013F4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8030A07C_000013F4:
    mr r3, r29
    li r4, 0x0
    bl fn_805A3D00
    cmpwi r30, 0x0
    ble lbl_fn_8030A07C_00001410
    mr r3, r29
    bl dtor_80084684
lbl_fn_8030A07C_00001410:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8030A144(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    stw r0, 0x664(r1)
    stw r31, 0x65c(r1)
    stw r30, 0x658(r1)
    mr r30, r5
    stw r29, 0x654(r1)
    mr r29, r3
    stw r28, 0x650(r1)
    lwz r5, 0x20(r5)
    bl fn_8035B694
    lfs f0, lbl_80884BAC
    lis r3, lbl_807880D0@ha
    li r31, 0x0
    lfs f3, lbl_80884BA8
    addi r3, r3, lbl_807880D0@l
    li r0, 0x1
    stw r3, 0x0(r29)
    addi r3, r29, 0x15d4
    stw r31, 0x14b0(r29)
    stw r31, 0x14b4(r29)
    stw r31, 0x14b8(r29)
    stfs f3, 0x14c4(r29)
    stw r31, 0x14c8(r29)
    stfs f0, 0x14cc(r29)
    stw r31, 0x14d0(r29)
    stw r31, 0x14d4(r29)
    stw r31, 0x14dc(r29)
    stw r31, 0x14e0(r29)
    stb r31, 0x14e4(r29)
    stw r31, 0x14ec(r29)
    stb r31, 0x14f0(r29)
    stb r31, 0x14f1(r29)
    stb r0, 0x150d(r29)
    stw r31, 0x1588(r29)
    stw r31, 0x158c(r29)
    stfs f0, 0x15d0(r29)
    bl fn_802377B8
    li r0, 0x2
    stw r0, 0x15e0(r29)
    addi r3, r29, 0x15f4
    stb r31, 0x15f0(r29)
    stb r31, 0x15f1(r29)
    bl fn_802377B8
    lfs f3, lbl_80884BB0
    lis r3, lbl_80787F68@ha
    lfs f0, lbl_80884BB4
    addi r3, r3, lbl_80787F68@l
    stw r31, 0x1600(r29)
    addi r7, r29, 0x1558
    addi r6, r29, 0x1564
    addi r5, r29, 0x1570
    stw r31, 0x1604(r29)
    addi r4, r29, 0x157c
    addi r8, r1, 0x8
    li r10, 0x0
    stfs f3, 0x1608(r29)
    li r11, 0x0
    stfs f0, 0x160c(r29)
    lwz r9, 0x0(r30)
    lwz r28, lbl_8087F430
    subi r12, r9, 0x385
    lwz r9, 0x10d8(r28)
    mulli r0, r12, 0x78
    stw r12, 0x14c0(r29)
    lwzux r0, r3, r0
    stw r0, 0x1510(r29)
    lwz r0, 0x4(r3)
    stw r0, 0x1514(r29)
    lwz r0, 0x8(r3)
    stw r0, 0x1518(r29)
    lwz r0, 0xc(r3)
    stw r0, 0x151c(r29)
    lwz r0, 0x10(r3)
    stw r0, 0x1520(r29)
    lwz r0, 0x14(r3)
    stw r0, 0x1524(r29)
    lwz r0, 0x18(r3)
    stw r0, 0x1528(r29)
    lwz r0, 0x1c(r3)
    stw r0, 0x152c(r29)
    lwz r0, 0x20(r3)
    stw r0, 0x1530(r29)
    lwz r0, 0x24(r3)
    stw r0, 0x1534(r29)
    lwz r12, 0x28(r3)
    lwz r0, 0x2c(r3)
    stw r0, 0x153c(r29)
    stw r12, 0x1538(r29)
    lwz r12, 0x30(r3)
    lwz r0, 0x34(r3)
    stw r0, 0x1544(r29)
    stw r12, 0x1540(r29)
    lwz r12, 0x38(r3)
    lwz r0, 0x3c(r3)
    stw r0, 0x154c(r29)
    stw r12, 0x1548(r29)
    lwz r12, 0x40(r3)
    lwz r0, 0x44(r3)
    stw r0, 0x1554(r29)
    stw r12, 0x1550(r29)
    psq_l f1, 0x48(r3), 0, 0
    lfs f2, 0x50(r3)
    stfs f2, 0x1560(r29)
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x54(r3), 0, 0
    lfs f2, 0x5c(r3)
    stfs f2, 0x156c(r29)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x60(r3), 0, 0
    lfs f2, 0x68(r3)
    stfs f2, 0x1578(r29)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x6c(r3), 0, 0
    lfs f2, 0x74(r3)
    stfs f2, 0x1584(r29)
    psq_st f1, 0x0(r4), 0, 0
lbl_fn_8030A144_00001604:
    lwz r12, 0x78(r9)
    add r7, r29, r31
    lwz r3, 0x153c(r7)
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    cmplwi r12, 0x0
    ble lbl_fn_8030A144_0000164C
lbl_fn_8030A144_00001624:
    lwz r6, 0x7c(r9)
    lwzx r0, r6, r5
    cmpw r3, r0
    bne lbl_fn_8030A144_00001640
    mulli r0, r4, 0x28
    add r4, r6, r0
    b lbl_fn_8030A144_00001650
lbl_fn_8030A144_00001640:
    addi r5, r5, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_8030A144_00001624
lbl_fn_8030A144_0000164C:
    li r4, 0x0
lbl_fn_8030A144_00001650:
    lwz r3, 0x1538(r7)
    li r5, 0x0
    li r6, 0x0
    mtctr r12
    cmplwi r12, 0x0
    ble lbl_fn_8030A144_00001690
lbl_fn_8030A144_00001668:
    lwz r7, 0x7c(r9)
    lwzx r0, r7, r6
    cmpw r3, r0
    bne lbl_fn_8030A144_00001684
    mulli r0, r5, 0x28
    add r5, r7, r0
    b lbl_fn_8030A144_00001694
lbl_fn_8030A144_00001684:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_8030A144_00001668
lbl_fn_8030A144_00001690:
    li r5, 0x0
lbl_fn_8030A144_00001694:
    lfs f5, 0x8(r4)
    add r3, r29, r11
    lfs f4, 0x8(r5)
    addi r10, r10, 0x1
    lfs f3, 0x4(r4)
    addi r3, r3, 0x1558
    fsubs f5, f5, f4
    lfs f0, 0x4(r5)
    lfs f4, 0xc(r4)
    cmpwi r10, 0x4
    fsubs f3, f3, f0
    lfs f0, 0xc(r5)
    fsubs f2, f4, f0
    stfs f5, 0xc(r1)
    addi r11, r11, 0xc
    addi r31, r31, 0x8
    stfs f3, 0x8(r1)
    psq_l f1, 0x0(r8), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0x8(r3)
    blt lbl_fn_8030A144_00001604
    li r31, 0x0
    stw r31, 0x1500(r29)
    addi r3, r30, 0x2c
    stw r31, 0x14f4(r29)
    stw r31, 0x1504(r29)
    stw r31, 0x14f8(r29)
    stw r31, 0x1508(r29)
    stw r31, 0x14fc(r29)
    bl strlen
    lis r4, lbl_807772D0@ha
    mr r28, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x14(r1)
    addi r3, r1, 0x24
    li r5, 0x400
    stw r31, 0x18(r1)
    li r4, 0x0
    stw r31, 0x1c(r1)
    stw r31, 0x20(r1)
    stw r31, 0x644(r1)
    bl memset
    addi r3, r1, 0x624
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x14(r1)
    mr r5, r28
    addi r3, r1, 0x14
    addi r4, r30, 0x2c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x14
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x14(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r31, lbl_80748FE8@ha
    addi r30, r31, lbl_80748FE8@l
lbl_fn_8030A144_0000178C:
    addi r3, r1, 0x14
    bl fn_8005B3CC
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_8030A144_00001878
    addi r4, r31, lbl_80748FE8@l
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8030A144_00001878
    mr r3, r28
    addi r4, r30, 0x1
    li r5, 0x5
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8030A144_000017D8
    addi r3, r28, 0x6
    bl fn_800DC12C
    stw r3, 0x14f4(r29)
    b lbl_fn_8030A144_0000178C
lbl_fn_8030A144_000017D8:
    mr r3, r28
    addi r4, r30, 0x7
    li r5, 0x5
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8030A144_00001800
    addi r3, r28, 0x6
    bl fn_800DC12C
    stw r3, 0x14f8(r29)
    b lbl_fn_8030A144_0000178C
lbl_fn_8030A144_00001800:
    mr r3, r28
    addi r4, r30, 0xd
    li r5, 0x5
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8030A144_00001828
    addi r3, r28, 0x6
    bl fn_800DC12C
    stw r3, 0x14fc(r29)
    b lbl_fn_8030A144_0000178C
lbl_fn_8030A144_00001828:
    mr r3, r28
    addi r4, r30, 0x13
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8030A144_00001850
    addi r3, r28, 0x3
    bl fn_800DC12C
    stw r3, 0x1524(r29)
    b lbl_fn_8030A144_0000178C
lbl_fn_8030A144_00001850:
    mr r3, r28
    addi r4, r30, 0x16
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8030A144_0000178C
    addi r3, r28, 0x3
    bl fn_800DC12C
    stw r3, 0x1528(r29)
    b lbl_fn_8030A144_0000178C
lbl_fn_8030A144_00001878:
    lis r30, lbl_80748FE8@ha
    li r0, 0x0
    addi r30, r30, lbl_80748FE8@l
    stb r0, 0x150c(r29)
    addi r3, r29, 0x15d4
    addi r4, r30, 0x19
    bl fn_8023780C
    addi r3, r29, 0x15f4
    addi r4, r30, 0x26
    bl fn_8023780C
    lwz r31, 0x65c(r1)
    mr r3, r29
    lwz r30, 0x658(r1)
    lwz r29, 0x654(r1)
    lwz r28, 0x650(r1)
    lwz r0, 0x664(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}

asm void fn_8030A5D8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_8030A5D8_0000196C
    addic. r0, r3, 0x1600
    beq lbl_fn_8030A5D8_00001910
    lwz r4, 0x1600(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8030A5D8_00001910
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8030A5D8_00001910
    bl fn_800897D8
lbl_fn_8030A5D8_00001910:
    addic. r31, r29, 0x15f4
    beq lbl_fn_8030A5D8_00001930
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8030A5D8_00001930
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8030A5D8_00001930:
    addic. r31, r29, 0x15d4
    beq lbl_fn_8030A5D8_00001950
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8030A5D8_00001950
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8030A5D8_00001950:
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_8030A5D8_0000196C
    mr r3, r29
    bl dtor_80084684
lbl_fn_8030A5D8_0000196C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
