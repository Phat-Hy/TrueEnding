#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_27(void);
extern void fn_8000FAE4(void);
extern void fn_80010374(void);
extern void fn_800112E0(void);
extern void fn_8001296C(void);
extern void fn_80012CBC(void);
extern void fn_80012CE4(void);
extern void fn_80012D0C(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80092814(void);
extern void fn_800928B0(void);
extern void fn_80093F1C(void);
extern void fn_80094420(void);
extern void fn_800948F0(void);
extern void fn_800DC6B4(void);
extern void fn_8048B3B8(void);
extern void fn_8048BD04(void);
extern void fn_8048C884(void);
extern void fn_805381A4(void);
extern void fn_805381CC(void);
extern void fn_80538C18(void);
extern void fn_80538DC8(void);
extern void fn_80541BDC(void);
extern void fn_80544294(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);
extern void fn_80695720(void);

/* External data declarations */
extern u8 lbl_8075E850[];
extern u8 lbl_8075EB60[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D6DC;
extern u32 lbl_8087D6E0;
extern u32 lbl_8087D80C;
extern u32 lbl_8087D810;
extern u32 lbl_8087E670;
extern u32 lbl_8087E674;
extern u32 lbl_8087F540;
extern u32 lbl_80887E30;
extern u32 lbl_80887E34;
extern u32 lbl_80887E3C;
extern u32 lbl_80887E40;
extern u32 lbl_80887E44;
extern u32 lbl_80887E48;
extern u32 lbl_80887E64;

/* Function declarations */
void fn_805553D8(void);
void fn_80555B88(void);
void fn_805567A8(void);
void fn_80556C08(void);

asm void fn_805553D8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    cmpwi r5, 0x0
    mr r24, r4
    bne lbl_fn_805553D8_00000794
    mr r3, r24
    bl fn_805381A4
    mr r23, r3
    mr r3, r24
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r5, 0x10(r23)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805553D8_0000006C
lbl_fn_805553D8_0000004C:
    lwz r0, 0x164(r3)
    add r27, r0, r4
    lwz r0, 0x14(r27)
    cmpw r5, r0
    bne lbl_fn_805553D8_00000064
    b lbl_fn_805553D8_00000070
lbl_fn_805553D8_00000064:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_805553D8_0000004C
lbl_fn_805553D8_0000006C:
    li r27, 0x0
lbl_fn_805553D8_00000070:
    lwz r0, 0x30(r24)
    cmpwi r0, 0x0
    ble lbl_fn_805553D8_00000084
    lwz r4, 0x2c(r24)
    b lbl_fn_805553D8_00000088
lbl_fn_805553D8_00000084:
    li r4, 0x0
lbl_fn_805553D8_00000088:
    lwz r5, 0x138(r3)
    lwz r0, 0x4(r4)
    li r4, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_805553D8_000000C0
lbl_fn_805553D8_000000A0:
    lwz r5, 0x134(r3)
    add r26, r5, r4
    lwz r5, 0x14(r26)
    cmpw r0, r5
    bne lbl_fn_805553D8_000000B8
    b lbl_fn_805553D8_000000C4
lbl_fn_805553D8_000000B8:
    addi r4, r4, 0x20
    bdnz lbl_fn_805553D8_000000A0
lbl_fn_805553D8_000000C0:
    li r26, 0x0
lbl_fn_805553D8_000000C4:
    mr r3, r27
    bl fn_8001296C
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_805553D8_00000794
    li r0, 0x0
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    lwz r23, 0x24(r27)
    cmpwi r23, 0x0
    beq lbl_fn_805553D8_00000130
    mulli r3, r23, 0x2c
    li r4, 0x0
    la r5, lbl_8087D6E0
    la r6, lbl_8087D6DC
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8000FAE4@ha
    mr r7, r23
    addi r4, r4, fn_8000FAE4@l
    li r5, 0x0
    li r6, 0x2c
    bl fn_80695720
    mr r24, r3
    b lbl_fn_805553D8_00000134
lbl_fn_805553D8_00000130:
    li r24, 0x0
lbl_fn_805553D8_00000134:
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    beq lbl_fn_805553D8_00000284
    lwz r0, 0x8(r1)
    mr r4, r23
    cmplw r23, r0
    ble lbl_fn_805553D8_00000154
    mr r4, r0
lbl_fn_805553D8_00000154:
    cmplwi r4, 0x0
    li r3, 0x0
    ble lbl_fn_805553D8_00000270
    srwi. r0, r4, 1
    mtctr r0
    beq lbl_fn_805553D8_00000218
lbl_fn_805553D8_0000016C:
    lwz r0, 0x10(r1)
    add r5, r24, r3
    add r6, r0, r3
    lwzx r0, r3, r0
    stwx r0, r24, r3
    addi r3, r3, 0x2c
    lwz r0, 0x4(r6)
    stw r0, 0x4(r5)
    lfs f2, 0x10(r6)
    psq_l f1, 0x8(r6), 0, 0
    psq_st f1, 0x8(r5), 0, 0
    stfs f2, 0x10(r5)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r5), 0, 0
    stfs f2, 0x1c(r5)
    lfs f2, 0x28(r6)
    psq_l f1, 0x20(r6), 0, 0
    psq_st f1, 0x20(r5), 0, 0
    stfs f2, 0x28(r5)
    add r5, r24, r3
    lwz r0, 0x10(r1)
    add r6, r0, r3
    lwzx r0, r3, r0
    stwx r0, r24, r3
    addi r3, r3, 0x2c
    lwz r0, 0x4(r6)
    stw r0, 0x4(r5)
    lfs f2, 0x10(r6)
    psq_l f1, 0x8(r6), 0, 0
    psq_st f1, 0x8(r5), 0, 0
    stfs f2, 0x10(r5)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r5), 0, 0
    stfs f2, 0x1c(r5)
    lfs f2, 0x28(r6)
    psq_l f1, 0x20(r6), 0, 0
    psq_st f1, 0x20(r5), 0, 0
    stfs f2, 0x28(r5)
    bdnz lbl_fn_805553D8_0000016C
    andi. r4, r4, 0x1
    beq lbl_fn_805553D8_00000270
lbl_fn_805553D8_00000218:
    mtctr r4
lbl_fn_805553D8_0000021C:
    lwz r0, 0x10(r1)
    add r5, r24, r3
    add r6, r0, r3
    lwzx r0, r3, r0
    stwx r0, r24, r3
    addi r3, r3, 0x2c
    lwz r0, 0x4(r6)
    stw r0, 0x4(r5)
    lfs f2, 0x10(r6)
    psq_l f1, 0x8(r6), 0, 0
    psq_st f1, 0x8(r5), 0, 0
    stfs f2, 0x10(r5)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r5), 0, 0
    stfs f2, 0x1c(r5)
    lfs f2, 0x28(r6)
    psq_l f1, 0x20(r6), 0, 0
    psq_st f1, 0x20(r5), 0, 0
    stfs f2, 0x28(r5)
    bdnz lbl_fn_805553D8_0000021C
lbl_fn_805553D8_00000270:
    lwz r3, 0x10(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805553D8_00000284
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_805553D8_00000284:
    stw r24, 0x10(r1)
    li r5, 0x0
    li r3, 0x0
    stw r23, 0x8(r1)
    stw r23, 0xc(r1)
    b lbl_fn_805553D8_000002F4
lbl_fn_805553D8_0000029C:
    lwz r4, 0x2c(r27)
    addi r5, r5, 0x1
    lwz r0, 0x10(r1)
    add r6, r4, r3
    add r4, r0, r3
    lwz r0, 0x0(r6)
    stw r0, 0x0(r4)
    addi r3, r3, 0x2c
    lwz r0, 0x4(r6)
    stw r0, 0x4(r4)
    lfs f2, 0x10(r6)
    psq_l f1, 0x8(r6), 0, 0
    psq_st f1, 0x8(r4), 0, 0
    stfs f2, 0x10(r4)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r4), 0, 0
    stfs f2, 0x1c(r4)
    lfs f2, 0x28(r6)
    psq_l f1, 0x20(r6), 0, 0
    psq_st f1, 0x20(r4), 0, 0
    stfs f2, 0x28(r4)
lbl_fn_805553D8_000002F4:
    lwz r0, 0x8(r1)
    cmplw r5, r0
    blt lbl_fn_805553D8_0000029C
    li r24, 0x0
    li r23, 0x0
    lis r31, fn_8000FAE4@ha
    li r29, 0x8
    b lbl_fn_805553D8_00000760
lbl_fn_805553D8_00000314:
    lwz r0, 0x8(r3)
    li r6, -0x1
    lwz r5, 0x10(r1)
    li r7, 0x0
    lwz r3, 0x8(r1)
    add r28, r0, r23
    mr r4, r5
    mtctr r3
    cmpwi r3, 0x0
    ble lbl_fn_805553D8_00000360
lbl_fn_805553D8_0000033C:
    lwz r3, 0x0(r28)
    lwz r0, 0x0(r4)
    cmplw r3, r0
    bne lbl_fn_805553D8_00000354
    mr r6, r7
    b lbl_fn_805553D8_00000360
lbl_fn_805553D8_00000354:
    addi r4, r4, 0x2c
    addi r7, r7, 0x1
    bdnz lbl_fn_805553D8_0000033C
lbl_fn_805553D8_00000360:
    cmpwi r6, 0x0
    blt lbl_fn_805553D8_000003B0
    lwz r0, 0x0(r28)
    mulli r3, r6, 0x2c
    stwux r0, r3, r5
    lwz r0, 0x4(r28)
    stw r0, 0x4(r3)
    lfs f2, 0x10(r28)
    psq_l f1, 0x8(r28), 0, 0
    psq_st f1, 0x8(r3), 0, 0
    stfs f2, 0x10(r3)
    lfs f2, 0x1c(r28)
    psq_l f1, 0x14(r28), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    lfs f2, 0x28(r28)
    psq_l f1, 0x20(r28), 0, 0
    psq_st f1, 0x20(r3), 0, 0
    stfs f2, 0x28(r3)
    b lbl_fn_805553D8_00000758
lbl_fn_805553D8_000003B0:
    cmpwi r5, 0x0
    beq lbl_fn_805553D8_000003C4
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    bne lbl_fn_805553D8_0000055C
lbl_fn_805553D8_000003C4:
    lwz r0, 0xc(r1)
    cmplwi r0, 0x8
    bgt lbl_fn_805553D8_00000700
    li r3, 0x170
    li r4, 0x0
    la r5, lbl_8087D810
    la r6, lbl_8087D80C
    li r7, 0x0
    bl fn_800846FC
    addi r4, r31, fn_8000FAE4@l
    li r5, 0x0
    li r6, 0x2c
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x10(r1)
    mr r27, r3
    cmpwi r0, 0x0
    beq lbl_fn_805553D8_00000550
    lwz r0, 0x8(r1)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_805553D8_00000420
    mr r5, r0
lbl_fn_805553D8_00000420:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_805553D8_0000053C
    srwi. r0, r5, 1
    mtctr r0
    beq lbl_fn_805553D8_000004E4
lbl_fn_805553D8_00000438:
    lwz r0, 0x10(r1)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x2c
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r7)
    psq_l f1, 0x8(r7), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r7)
    psq_l f1, 0x14(r7), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r7)
    psq_l f1, 0x20(r7), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    add r6, r3, r4
    lwz r0, 0x10(r1)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x2c
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r7)
    psq_l f1, 0x8(r7), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r7)
    psq_l f1, 0x14(r7), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r7)
    psq_l f1, 0x20(r7), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    bdnz lbl_fn_805553D8_00000438
    andi. r5, r5, 0x1
    beq lbl_fn_805553D8_0000053C
lbl_fn_805553D8_000004E4:
    mtctr r5
lbl_fn_805553D8_000004E8:
    lwz r0, 0x10(r1)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x2c
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r7)
    psq_l f1, 0x8(r7), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r7)
    psq_l f1, 0x14(r7), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r7)
    psq_l f1, 0x20(r7), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    bdnz lbl_fn_805553D8_000004E8
lbl_fn_805553D8_0000053C:
    lwz r3, 0x10(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805553D8_00000550
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_805553D8_00000550:
    stw r27, 0x10(r1)
    stw r29, 0xc(r1)
    b lbl_fn_805553D8_00000700
lbl_fn_805553D8_0000055C:
    lwz r3, 0x8(r1)
    cmplw r3, r0
    blt lbl_fn_805553D8_00000700
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_805553D8_00000700
    mulli r3, r30, 0x2c
    li r4, 0x0
    la r5, lbl_8087D810
    la r6, lbl_8087D80C
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r30
    addi r4, r31, fn_8000FAE4@l
    li r5, 0x0
    li r6, 0x2c
    bl fn_80695720
    lwz r0, 0x10(r1)
    mr r27, r3
    cmpwi r0, 0x0
    beq lbl_fn_805553D8_000006F8
    lwz r0, 0x8(r1)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_805553D8_000005C8
    mr r5, r0
lbl_fn_805553D8_000005C8:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_805553D8_000006E4
    srwi. r0, r5, 1
    mtctr r0
    beq lbl_fn_805553D8_0000068C
lbl_fn_805553D8_000005E0:
    lwz r0, 0x10(r1)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x2c
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r7)
    psq_l f1, 0x8(r7), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r7)
    psq_l f1, 0x14(r7), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r7)
    psq_l f1, 0x20(r7), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    add r6, r3, r4
    lwz r0, 0x10(r1)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x2c
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r7)
    psq_l f1, 0x8(r7), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r7)
    psq_l f1, 0x14(r7), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r7)
    psq_l f1, 0x20(r7), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    bdnz lbl_fn_805553D8_000005E0
    andi. r5, r5, 0x1
    beq lbl_fn_805553D8_000006E4
lbl_fn_805553D8_0000068C:
    mtctr r5
lbl_fn_805553D8_00000690:
    lwz r0, 0x10(r1)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x2c
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r7)
    psq_l f1, 0x8(r7), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r7)
    psq_l f1, 0x14(r7), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r7)
    psq_l f1, 0x20(r7), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    bdnz lbl_fn_805553D8_00000690
lbl_fn_805553D8_000006E4:
    lwz r3, 0x10(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805553D8_000006F8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_805553D8_000006F8:
    stw r27, 0x10(r1)
    stw r30, 0xc(r1)
lbl_fn_805553D8_00000700:
    lwz r0, 0x8(r1)
    lwz r4, 0x10(r1)
    mulli r3, r0, 0x2c
    lwz r0, 0x0(r28)
    stwux r0, r3, r4
    lwz r0, 0x4(r28)
    stw r0, 0x4(r3)
    lfs f2, 0x10(r28)
    psq_l f1, 0x8(r28), 0, 0
    psq_st f1, 0x8(r3), 0, 0
    stfs f2, 0x10(r3)
    lfs f2, 0x1c(r28)
    psq_l f1, 0x14(r28), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    lfs f2, 0x28(r28)
    psq_l f1, 0x20(r28), 0, 0
    psq_st f1, 0x20(r3), 0, 0
    stfs f2, 0x28(r3)
    lwz r3, 0x8(r1)
    addi r0, r3, 0x1
    stw r0, 0x8(r1)
lbl_fn_805553D8_00000758:
    addi r24, r24, 0x1
    addi r23, r23, 0x2c
lbl_fn_805553D8_00000760:
    lwz r3, 0x1c(r26)
    lwz r0, 0x0(r3)
    cmpw r24, r0
    blt lbl_fn_805553D8_00000314
    mr r3, r25
    addi r4, r1, 0x8
    bl fn_80094420
    lwz r3, 0x10(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805553D8_00000794
    beq lbl_fn_805553D8_00000794
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_805553D8_00000794:
    addi r11, r1, 0x40
    li r3, 0x0
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80555B88(void)
{
    nofralloc
    stwu r1, -0x440(r1)
    mflr r0
    stw r0, 0x444(r1)
    addi r11, r1, 0x3e0
    stfd f31, 0x430(r1)
    psq_st f31, 0x438(r1), 0, 0
    stfd f30, 0x420(r1)
    psq_st f30, 0x428(r1), 0, 0
    stfd f29, 0x410(r1)
    psq_st f29, 0x418(r1), 0, 0
    stfd f28, 0x400(r1)
    psq_st f28, 0x408(r1), 0, 0
    stfd f27, 0x3f0(r1)
    psq_st f27, 0x3f8(r1), 0, 0
    stfd f26, 0x3e0(r1)
    psq_st f26, 0x3e8(r1), 0, 0
    bl _savegpr_27
    lis r0, 0x4330
    mr r27, r4
    stw r0, 0x3b8(r1)
    mr r3, r27
    stw r0, 0x3c0(r1)
    bl fn_805381CC
    lfs f7, 0x198(r3)
    lfs f0, lbl_80887E34
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    beq lbl_fn_80555B88_00000828
    li r3, 0x0
    b lbl_fn_80555B88_00001388
lbl_fn_80555B88_00000828:
    mr r3, r27
    bl fn_805381A4
    mr r28, r3
    mr r3, r27
    bl fn_805381CC
    lwz r0, 0x168(r3)
    mr r31, r3
    lwz r5, 0x10(r28)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80555B88_00000878
lbl_fn_80555B88_00000858:
    lwz r0, 0x164(r3)
    add r30, r0, r4
    lwz r0, 0x14(r30)
    cmpw r5, r0
    bne lbl_fn_80555B88_00000870
    b lbl_fn_80555B88_0000087C
lbl_fn_80555B88_00000870:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80555B88_00000858
lbl_fn_80555B88_00000878:
    li r30, 0x0
lbl_fn_80555B88_0000087C:
    lwz r6, 0x30(r27)
    cmpwi r6, 0x0
    ble lbl_fn_80555B88_00000890
    lwz r5, 0x2c(r27)
    b lbl_fn_80555B88_00000894
lbl_fn_80555B88_00000890:
    li r5, 0x0
lbl_fn_80555B88_00000894:
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r5, 0x4(r5)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80555B88_000008CC
lbl_fn_80555B88_000008AC:
    lwz r0, 0x164(r3)
    add r29, r0, r4
    lwz r0, 0x14(r29)
    cmpw r5, r0
    bne lbl_fn_80555B88_000008C4
    b lbl_fn_80555B88_000008D0
lbl_fn_80555B88_000008C4:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80555B88_000008AC
lbl_fn_80555B88_000008CC:
    li r29, 0x0
lbl_fn_80555B88_000008D0:
    cmpwi r6, 0x1
    ble lbl_fn_80555B88_000008E4
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x8
    b lbl_fn_80555B88_000008E8
lbl_fn_80555B88_000008E4:
    li r3, 0x0
lbl_fn_80555B88_000008E8:
    cmpwi r6, 0x2
    lwz r28, 0x4(r3)
    ble lbl_fn_80555B88_00000900
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x10
    b lbl_fn_80555B88_00000904
lbl_fn_80555B88_00000900:
    li r3, 0x0
lbl_fn_80555B88_00000904:
    lfs f0, 0x4(r3)
    stfs f0, 0x17c(r1)
    lwz r0, 0x30(r27)
    cmpwi r0, 0x3
    ble lbl_fn_80555B88_00000924
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x18
    b lbl_fn_80555B88_00000928
lbl_fn_80555B88_00000924:
    li r3, 0x0
lbl_fn_80555B88_00000928:
    lfs f0, 0x4(r3)
    stfs f0, 0x180(r1)
    lwz r0, 0x30(r27)
    cmpwi r0, 0x4
    ble lbl_fn_80555B88_00000948
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x20
    b lbl_fn_80555B88_0000094C
lbl_fn_80555B88_00000948:
    li r3, 0x0
lbl_fn_80555B88_0000094C:
    lfs f0, 0x4(r3)
    stfs f0, 0x184(r1)
    lwz r0, 0x30(r27)
    cmpwi r0, 0x5
    ble lbl_fn_80555B88_0000096C
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x28
    b lbl_fn_80555B88_00000970
lbl_fn_80555B88_0000096C:
    li r3, 0x0
lbl_fn_80555B88_00000970:
    lfs f7, 0x4(r3)
    lfs f0, lbl_80887E48
    fmuls f0, f0, f7
    stfs f0, 0x170(r1)
    lwz r0, 0x30(r27)
    cmpwi r0, 0x6
    ble lbl_fn_80555B88_00000998
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x30
    b lbl_fn_80555B88_0000099C
lbl_fn_80555B88_00000998:
    li r3, 0x0
lbl_fn_80555B88_0000099C:
    lfs f7, 0x4(r3)
    lfs f0, lbl_80887E48
    fmuls f0, f0, f7
    stfs f0, 0x174(r1)
    lwz r0, 0x30(r27)
    cmpwi r0, 0x7
    ble lbl_fn_80555B88_000009C4
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x38
    b lbl_fn_80555B88_000009C8
lbl_fn_80555B88_000009C4:
    li r3, 0x0
lbl_fn_80555B88_000009C8:
    lfs f7, 0x4(r3)
    lfs f0, lbl_80887E48
    fmuls f0, f0, f7
    stfs f0, 0x178(r1)
    lwz r0, 0x20(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80555B88_00000A0C
    mr r4, r31
    addi r3, r1, 0xec
    addi r5, r1, 0x17c
    bl fn_80541BDC
    addi r3, r1, 0xec
    lfs f2, 0xf4(r1)
    addi r4, r1, 0x17c
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x184(r1)
lbl_fn_80555B88_00000A0C:
    lwz r4, 0x18(r27)
    lfs f31, lbl_80887E34
    cmpwi r4, 0x0
    ble lbl_fn_80555B88_00000A78
    lwz r0, 0x10(r27)
    lis r3, lbl_8075E850@ha
    lfd f8, lbl_8075E850@l(r3)
    add r0, r4, r0
    lfs f9, 0x198(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x3bc(r1)
    lfs f0, lbl_80887E30
    lfd f7, 0x3b8(r1)
    fsubs f7, f7, f8
    fsubs f7, f7, f9
    fcmpo cr0, f7, f0
    ble lbl_fn_80555B88_00000A78
    xoris r0, r4, 0x8000
    stw r0, 0x3c4(r1)
    lwz r4, 0x134(r30)
    lfd f0, 0x3c0(r1)
    lwz r3, lbl_8087F540
    fsubs f0, f0, f8
    fdivs f0, f7, f0
    fsubs f1, f31, f0
    bl fn_8048BD04
    fmr f31, f1
lbl_fn_80555B88_00000A78:
    lwz r0, 0x1c(r27)
    cmpwi r0, 0x0
    ble lbl_fn_80555B88_00000AC8
    lwz r4, 0x14(r27)
    xoris r0, r0, 0x8000
    stw r0, 0x3c4(r1)
    lis r3, lbl_8075E850@ha
    xoris r0, r4, 0x8000
    lfd f8, lbl_8075E850@l(r3)
    stw r0, 0x3bc(r1)
    lfd f0, 0x3c0(r1)
    lfd f7, 0x3b8(r1)
    lfs f9, 0x198(r31)
    fsubs f0, f0, f8
    fsubs f7, f7, f8
    fsubs f7, f7, f9
    fcmpo cr0, f7, f0
    bge lbl_fn_80555B88_00000AC8
    li r3, 0x0
    b lbl_fn_80555B88_00001388
lbl_fn_80555B88_00000AC8:
    mr r4, r30
    addi r3, r1, 0x164
    bl fn_80010374
    mr r3, r30
    bl fn_8001296C
    cmpwi r3, 0x0
    beq lbl_fn_80555B88_00000B60
    lis r3, lbl_8075EB60@ha
    addi r3, r3, lbl_8075EB60@l
    addi r3, r3, 0x24
    bl fn_800DC6B4
    mr r31, r3
    mr r3, r30
    bl fn_8001296C
    mr r27, r3
    mr r4, r31
    li r5, 0x0
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_80555B88_00000B20
    li r5, 0x0
    b lbl_fn_80555B88_00000B2C
lbl_fn_80555B88_00000B20:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r27)
    add r5, r3, r0
lbl_fn_80555B88_00000B2C:
    cmpwi r5, 0x0
    beq lbl_fn_80555B88_00000B60
    lfs f0, 0x1c(r5)
    addi r4, r1, 0xe0
    lfs f7, 0xc(r5)
    addi r3, r1, 0x164
    lfs f2, 0x2c(r5)
    stfs f7, 0xe0(r1)
    stfs f0, 0xe4(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0xe8(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x16c(r1)
lbl_fn_80555B88_00000B60:
    addi r3, r1, 0x170
    bl fn_805F9920
    lfs f0, lbl_80887E30
    fcmpu cr0, f0, f1
    beq lbl_fn_80555B88_00000DF4
    lfs f0, lbl_80887E34
    fcmpu cr0, f0, f31
    bne lbl_fn_80555B88_00000D68
    mr r4, r30
    addi r3, r1, 0x158
    bl fn_800112E0
    lfs f7, lbl_80887E30
    addi r27, r1, 0x388
    lfs f1, 0x178(r1)
    lfs f0, lbl_80887E34
    fcmpu cr0, f7, f1
    stfs f7, 0x3b4(r1)
    stfs f7, 0x3ac(r1)
    stfs f7, 0x3a8(r1)
    stfs f7, 0x3a4(r1)
    stfs f7, 0x3a0(r1)
    stfs f7, 0x398(r1)
    stfs f7, 0x394(r1)
    stfs f7, 0x390(r1)
    stfs f7, 0x38c(r1)
    stfs f0, 0x3b0(r1)
    stfs f0, 0x39c(r1)
    stfs f0, 0x388(r1)
    beq lbl_fn_80555B88_00000C24
    addi r3, r1, 0x298
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x298
    addi r5, r1, 0x268
    bl fn_805F89F0
    addi r3, r1, 0x268
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80555B88_00000C24:
    lfs f0, lbl_80887E30
    lfs f1, 0x174(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80555B88_00000C84
    addi r3, r1, 0x2f8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x2f8
    addi r5, r1, 0x2c8
    bl fn_805F89F0
    addi r3, r1, 0x2c8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80555B88_00000C84:
    lfs f0, lbl_80887E30
    lfs f1, 0x170(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80555B88_00000CE4
    addi r3, r1, 0x358
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x358
    addi r5, r1, 0x328
    bl fn_805F89F0
    addi r3, r1, 0x328
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80555B88_00000CE4:
    addi r4, r1, 0x158
    addi r3, r1, 0x388
    mr r5, r4
    bl fn_805F93C0
    lfs f9, lbl_80887E64
    addi r3, r1, 0x164
    lfs f7, 0x15c(r1)
    addi r4, r1, 0x170
    lfs f0, 0x158(r1)
    fmuls f11, f7, f9
    lfs f10, 0x160(r1)
    fmuls f12, f0, f9
    lfs f8, 0x164(r1)
    fmuls f9, f10, f9
    lfs f0, 0x16c(r1)
    fadds f8, f8, f12
    lfs f7, 0x168(r1)
    fadds f2, f0, f9
    stfs f12, 0xd4(r1)
    fadds f0, f7, f11
    stfs f8, 0x164(r1)
    stfs f0, 0x168(r1)
    stfs f2, 0x16c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0xe8(r30), 0, 0
    stfs f2, 0xf0(r30)
    lfs f2, 0x178(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0xdc(r30), 0, 0
    stfs f11, 0xd8(r1)
    stfs f9, 0xdc(r1)
    stfs f2, 0xe4(r30)
    b lbl_fn_80555B88_00000DE0
lbl_fn_80555B88_00000D68:
    lfs f2, 0xe4(r30)
    addi r3, r1, 0x14c
    psq_l f1, 0xdc(r30), 0, 0
    addi r4, r1, 0xc8
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x170
    lfs f7, 0x178(r1)
    lfs f0, 0x174(r1)
    fsubs f10, f7, f2
    lfs f9, 0x150(r1)
    lfs f7, 0x170(r1)
    fsubs f11, f0, f9
    lfs f8, 0x14c(r1)
    fmuls f0, f10, f31
    fsubs f10, f7, f8
    stfs f2, 0x154(r1)
    fmuls f7, f11, f31
    fadds f2, f2, f0
    stfs f0, 0x148(r1)
    fmuls f0, f10, f31
    stfs f7, 0x144(r1)
    fadds f7, f9, f7
    stfs f0, 0x140(r1)
    fadds f0, f8, f0
    stfs f7, 0xcc(r1)
    stfs f0, 0xc8(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0xd0(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x178(r1)
lbl_fn_80555B88_00000DE0:
    lfs f1, lbl_80887E34
    mr r3, r30
    addi r4, r1, 0x170
    bl fn_80012CBC
    b lbl_fn_80555B88_00001384
lbl_fn_80555B88_00000DF4:
    mr r4, r29
    addi r3, r1, 0x134
    bl fn_80010374
    mr r3, r29
    bl fn_8001296C
    cmpwi r3, 0x0
    beq lbl_fn_80555B88_00000E78
    mr r3, r29
    bl fn_8001296C
    mr r27, r3
    mr r4, r28
    li r5, 0x0
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_80555B88_00000E38
    li r5, 0x0
    b lbl_fn_80555B88_00000E44
lbl_fn_80555B88_00000E38:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r27)
    add r5, r3, r0
lbl_fn_80555B88_00000E44:
    cmpwi r5, 0x0
    beq lbl_fn_80555B88_00000E78
    lfs f0, 0x1c(r5)
    addi r4, r1, 0xbc
    lfs f7, 0xc(r5)
    addi r3, r1, 0x134
    lfs f2, 0x2c(r5)
    stfs f7, 0xbc(r1)
    stfs f0, 0xc0(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0xc4(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x13c(r1)
lbl_fn_80555B88_00000E78:
    lfs f0, lbl_80887E34
    lfs f8, 0x134(r1)
    lfs f7, 0x17c(r1)
    fcmpu cr0, f0, f31
    lfs f9, 0x138(r1)
    fadds f11, f8, f7
    lfs f8, 0x180(r1)
    lfs f7, 0x13c(r1)
    fadds f10, f9, f8
    lfs f0, 0x184(r1)
    stfs f11, 0x134(r1)
    fadds f9, f7, f0
    stfs f10, 0x138(r1)
    stfs f9, 0x13c(r1)
    bne lbl_fn_80555B88_000012BC
    lfs f8, 0x16c(r1)
    addi r3, r1, 0x128
    lfs f7, 0x168(r1)
    lfs f0, 0x164(r1)
    fsubs f8, f9, f8
    fsubs f7, f10, f7
    fsubs f0, f11, f0
    stfs f8, 0x130(r1)
    stfs f0, 0x128(r1)
    stfs f7, 0x12c(r1)
    bl fn_805F9940
    lfs f0, lbl_80887E30
    fcmpo cr0, f1, f0
    ble lbl_fn_80555B88_000012A4
    addi r3, r1, 0x128
    mr r4, r3
    bl fn_805F98D0
    lfs f2, 0x130(r1)
    addi r3, r1, 0x128
    lfs f0, lbl_80887E3C
    addi r27, r1, 0x11c
    fabs f7, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    frsp f7, f7
    stfs f2, 0x124(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_80555B88_00000F48
    lfs f7, 0x11c(r1)
    lfs f0, lbl_80887E30
    fcmpo cr0, f7, f0
    ble lbl_fn_80555B88_00000F3C
    lfs f0, lbl_80887E40
    b lbl_fn_80555B88_00000F40
lbl_fn_80555B88_00000F3C:
    lfs f0, lbl_80887E44
lbl_fn_80555B88_00000F40:
    stfs f0, 0x90(r1)
    b lbl_fn_80555B88_00000F5C
lbl_fn_80555B88_00000F48:
    frsp f2, f2
    lfs f1, 0x11c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_80555B88_00000F5C:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x1f8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80887E30
    addi r4, r1, 0x80
    lfs f26, 0x200(r1)
    mr r5, r4
    lfs f27, 0x1fc(r1)
    addi r3, r1, 0x228
    lfs f28, 0x1f8(r1)
    lfs f29, 0x210(r1)
    lfs f30, 0x20c(r1)
    lfs f31, 0x208(r1)
    lfs f13, 0x220(r1)
    lfs f12, 0x21c(r1)
    lfs f11, 0x218(r1)
    lfs f10, 0x224(r1)
    lfs f9, 0x214(r1)
    lfs f8, 0x204(r1)
    lfs f0, lbl_80887E34
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x124(r1)
    stfs f7, 0x258(r1)
    stfs f7, 0x25c(r1)
    stfs f7, 0x260(r1)
    stfs f0, 0x264(r1)
    stfs f28, 0x50(r1)
    stfs f27, 0x54(r1)
    stfs f26, 0x58(r1)
    stfs f28, 0x228(r1)
    stfs f27, 0x22c(r1)
    stfs f26, 0x230(r1)
    stfs f31, 0x5c(r1)
    stfs f30, 0x60(r1)
    stfs f29, 0x64(r1)
    stfs f31, 0x238(r1)
    stfs f30, 0x23c(r1)
    stfs f29, 0x240(r1)
    stfs f11, 0x68(r1)
    stfs f12, 0x6c(r1)
    stfs f13, 0x70(r1)
    stfs f11, 0x248(r1)
    stfs f12, 0x24c(r1)
    stfs f13, 0x250(r1)
    stfs f8, 0x74(r1)
    stfs f9, 0x78(r1)
    stfs f10, 0x7c(r1)
    stfs f8, 0x234(r1)
    stfs f9, 0x244(r1)
    stfs f10, 0x254(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80887E3C
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80555B88_00001078
    lfs f7, 0x84(r1)
    lfs f0, lbl_80887E30
    fcmpo cr0, f7, f0
    ble lbl_fn_80555B88_00001068
    lfs f0, lbl_80887E40
    b lbl_fn_80555B88_0000106C
lbl_fn_80555B88_00001068:
    lfs f0, lbl_80887E44
lbl_fn_80555B88_0000106C:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_80555B88_0000108C
lbl_fn_80555B88_00001078:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_80555B88_0000108C:
    addi r3, r1, 0x8c
    lfs f2, lbl_80887E30
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r30
    stfs f2, 0x94(r1)
    addi r3, r1, 0xb0
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x124(r1)
    bl fn_800112E0
    lfs f2, 0xb8(r1)
    addi r3, r1, 0xb0
    lfs f0, lbl_80887E3C
    addi r27, r1, 0x110
    fabs f7, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    frsp f7, f7
    stfs f2, 0x118(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_80555B88_00001100
    lfs f7, 0x110(r1)
    lfs f0, lbl_80887E30
    fcmpo cr0, f7, f0
    ble lbl_fn_80555B88_000010F4
    lfs f0, lbl_80887E40
    b lbl_fn_80555B88_000010F8
lbl_fn_80555B88_000010F4:
    lfs f0, lbl_80887E44
lbl_fn_80555B88_000010F8:
    stfs f0, 0x48(r1)
    b lbl_fn_80555B88_00001114
lbl_fn_80555B88_00001100:
    frsp f2, f2
    lfs f1, 0x110(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80555B88_00001114:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x188
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80887E30
    addi r4, r1, 0x38
    lfs f31, 0x190(r1)
    mr r5, r4
    lfs f30, 0x18c(r1)
    addi r3, r1, 0x1b8
    lfs f29, 0x188(r1)
    lfs f28, 0x1a0(r1)
    lfs f27, 0x19c(r1)
    lfs f26, 0x198(r1)
    lfs f13, 0x1b0(r1)
    lfs f12, 0x1ac(r1)
    lfs f11, 0x1a8(r1)
    lfs f10, 0x1b4(r1)
    lfs f9, 0x1a4(r1)
    lfs f8, 0x194(r1)
    lfs f0, lbl_80887E34
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x118(r1)
    stfs f7, 0x1e8(r1)
    stfs f7, 0x1ec(r1)
    stfs f7, 0x1f0(r1)
    stfs f0, 0x1f4(r1)
    stfs f29, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f29, 0x1b8(r1)
    stfs f30, 0x1bc(r1)
    stfs f31, 0x1c0(r1)
    stfs f26, 0x14(r1)
    stfs f27, 0x18(r1)
    stfs f28, 0x1c(r1)
    stfs f26, 0x1c8(r1)
    stfs f27, 0x1cc(r1)
    stfs f28, 0x1d0(r1)
    stfs f11, 0x20(r1)
    stfs f12, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f11, 0x1d8(r1)
    stfs f12, 0x1dc(r1)
    stfs f13, 0x1e0(r1)
    stfs f8, 0x2c(r1)
    stfs f9, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f8, 0x1c4(r1)
    stfs f9, 0x1d4(r1)
    stfs f10, 0x1e4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80887E3C
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80555B88_00001230
    lfs f7, 0x3c(r1)
    lfs f0, lbl_80887E30
    fcmpo cr0, f7, f0
    ble lbl_fn_80555B88_00001220
    lfs f0, lbl_80887E40
    b lbl_fn_80555B88_00001224
lbl_fn_80555B88_00001220:
    lfs f0, lbl_80887E44
lbl_fn_80555B88_00001224:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80555B88_00001244
lbl_fn_80555B88_00001230:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80555B88_00001244:
    lfs f11, lbl_80887E30
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x11c
    fmr f2, f11
    psq_st f1, 0x0(r27), 0, 0
    lfs f10, 0x11c(r1)
    lfs f7, 0x110(r1)
    lfs f9, 0x120(r1)
    frsp f0, f2
    fsubs f10, f10, f7
    lfs f8, 0x114(r1)
    lfs f7, 0x124(r1)
    fsubs f8, f9, f8
    stfs f10, 0x11c(r1)
    fsubs f0, f7, f0
    stfs f8, 0x120(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x118(r1)
    fmr f2, f0
    psq_st f1, 0xdc(r30), 0, 0
    stfs f11, 0x4c(r1)
    stfs f0, 0x124(r1)
    stfs f2, 0xe4(r30)
lbl_fn_80555B88_000012A4:
    addi r3, r1, 0x134
    lfs f2, 0x13c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0xe8(r30), 0, 0
    stfs f2, 0xf0(r30)
    b lbl_fn_80555B88_00001374
lbl_fn_80555B88_000012BC:
    addi r3, r1, 0x104
    psq_l f1, 0xe8(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0xf8
    lfs f2, 0xf0(r30)
    lfs f7, 0x108(r1)
    lfs f0, 0x104(r1)
    fsubs f8, f9, f2
    fsubs f7, f10, f7
    stfs f2, 0x10c(r1)
    fsubs f0, f11, f0
    stfs f7, 0xfc(r1)
    stfs f0, 0xf8(r1)
    stfs f8, 0x100(r1)
    bl fn_805F9940
    lfs f0, lbl_80887E30
    fmr f26, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80555B88_00001318
    fmuls f26, f1, f31
    addi r3, r1, 0xf8
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80555B88_00001318:
    lfs f8, 0x100(r1)
    addi r4, r1, 0xa4
    lfs f0, 0xfc(r1)
    addi r3, r1, 0x134
    fmuls f10, f8, f26
    lfs f7, 0xf8(r1)
    fmuls f9, f0, f26
    lfs f0, 0x10c(r1)
    fmuls f8, f7, f26
    lfs f7, 0x108(r1)
    fadds f2, f0, f10
    lfs f0, 0x104(r1)
    fadds f7, f7, f9
    stfs f8, 0x98(r1)
    fadds f0, f0, f8
    stfs f7, 0xa8(r1)
    stfs f0, 0xa4(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f9, 0x9c(r1)
    stfs f10, 0xa0(r1)
    stfs f2, 0xac(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x13c(r1)
lbl_fn_80555B88_00001374:
    lfs f1, lbl_80887E34
    mr r3, r30
    addi r4, r1, 0x134
    bl fn_80012CE4
lbl_fn_80555B88_00001384:
    li r3, 0x0
lbl_fn_80555B88_00001388:
    addi r11, r1, 0x3e0
    psq_l f31, 0x438(r1), 0, 0
    lfd f31, 0x430(r1)
    psq_l f30, 0x428(r1), 0, 0
    lfd f30, 0x420(r1)
    psq_l f29, 0x418(r1), 0, 0
    lfd f29, 0x410(r1)
    psq_l f28, 0x408(r1), 0, 0
    lfd f28, 0x400(r1)
    psq_l f27, 0x3f8(r1), 0, 0
    lfd f27, 0x3f0(r1)
    psq_l f26, 0x3e8(r1), 0, 0
    lfd f26, 0x3e0(r1)
    bl _restgpr_27
    lwz r0, 0x444(r1)
    mtlr r0
    addi r1, r1, 0x440
    blr
}

asm void fn_805567A8(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    mr r30, r4
    stw r29, 0x74(r1)
    stw r28, 0x70(r1)
    beq lbl_fn_805567A8_0000141C
    cmpwi r5, 0x3
    beq lbl_fn_805567A8_00001664
    cmpwi r5, 0x2
    beq lbl_fn_805567A8_000016D0
    cmpwi r5, 0x6
    beq lbl_fn_805567A8_00001790
    b lbl_fn_805567A8_00001804
lbl_fn_805567A8_0000141C:
    mr r3, r30
    bl fn_805381A4
    mr r31, r3
    mr r3, r30
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r5, 0x10(r31)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805567A8_00001468
lbl_fn_805567A8_00001448:
    lwz r0, 0x164(r3)
    add r31, r0, r4
    lwz r0, 0x14(r31)
    cmpw r5, r0
    bne lbl_fn_805567A8_00001460
    b lbl_fn_805567A8_0000146C
lbl_fn_805567A8_00001460:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_805567A8_00001448
lbl_fn_805567A8_00001468:
    li r31, 0x0
lbl_fn_805567A8_0000146C:
    lwz r0, 0x18(r30)
    cmpwi r0, 0x0
    ble lbl_fn_805567A8_000014A4
    lwz r0, 0x30(r30)
    cmpwi r0, 0x9
    ble lbl_fn_805567A8_00001490
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x48
    b lbl_fn_805567A8_00001494
lbl_fn_805567A8_00001490:
    li r3, 0x0
lbl_fn_805567A8_00001494:
    lwz r4, 0x4(r3)
    lwz r3, lbl_8087F540
    bl fn_8048B3B8
    stw r3, 0x134(r31)
lbl_fn_805567A8_000014A4:
    lbz r0, 0x144(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805567A8_00001804
    mr r4, r31
    addi r3, r1, 0x50
    bl fn_80010374
    mr r3, r31
    bl fn_8001296C
    cmpwi r3, 0x0
    beq lbl_fn_805567A8_000015F0
    lis r4, lbl_8075EB60@ha
    mr r3, r31
    addi r4, r4, lbl_8075EB60@l
    addi r29, r4, 0x24
    bl fn_8001296C
    mr r30, r3
    mr r4, r29
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_805567A8_00001500
    li r28, 0x0
    b lbl_fn_805567A8_0000150C
lbl_fn_805567A8_00001500:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r30)
    add r28, r3, r0
lbl_fn_805567A8_0000150C:
    lis r4, lbl_8075EB60@ha
    mr r3, r31
    addi r4, r4, lbl_8075EB60@l
    addi r30, r4, 0x1a
    bl fn_8001296C
    mr r29, r3
    mr r4, r30
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_805567A8_00001540
    li r4, 0x0
    b lbl_fn_805567A8_0000154C
lbl_fn_805567A8_00001540:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r29)
    add r4, r3, r0
lbl_fn_805567A8_0000154C:
    cmpwi r28, 0x0
    beq lbl_fn_805567A8_000015F0
    cmpwi r4, 0x0
    beq lbl_fn_805567A8_000015F0
    lfs f9, 0x1c(r4)
    addi r3, r1, 0x20
    lfs f7, 0x1c(r28)
    lfs f8, 0x2c(r4)
    fsubs f31, f7, f9
    lfs f10, 0xc(r4)
    lfs f4, 0x58(r1)
    lfs f0, 0x50(r1)
    fadds f5, f9, f31
    lfs f3, 0x54(r1)
    lfs f6, 0x2c(r28)
    fsubs f11, f8, f4
    lfs f4, 0xc(r28)
    fsubs f12, f10, f0
    fsubs f0, f5, f3
    stfs f10, 0x2c(r1)
    stfs f9, 0x30(r1)
    stfs f8, 0x34(r1)
    stfs f4, 0x38(r1)
    stfs f7, 0x3c(r1)
    stfs f6, 0x40(r1)
    stfs f10, 0x44(r1)
    stfs f8, 0x4c(r1)
    stfs f5, 0x48(r1)
    stfs f12, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f11, 0x28(r1)
    bl fn_805F9940
    fcmpo cr0, f1, f31
    cror eq, lt, eq
    bne lbl_fn_805567A8_000015F0
    addi r4, r1, 0x44
    lfs f2, 0x4c(r1)
    addi r3, r1, 0x50
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x58(r1)
lbl_fn_805567A8_000015F0:
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_800112E0
    lfs f5, lbl_80887E64
    addi r3, r1, 0x50
    lfs f3, 0xc(r1)
    li r0, 0x0
    lfs f0, 0x8(r1)
    fmuls f7, f3, f5
    lfs f6, 0x10(r1)
    fmuls f8, f0, f5
    lfs f4, 0x50(r1)
    fmuls f5, f6, f5
    lfs f0, 0x58(r1)
    fadds f4, f4, f8
    lfs f3, 0x54(r1)
    fadds f2, f0, f5
    stfs f8, 0x14(r1)
    fadds f0, f3, f7
    stfs f4, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f2, 0x58(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0xe8(r31), 0, 0
    stfs f2, 0xf0(r31)
    stfs f7, 0x18(r1)
    stfs f5, 0x1c(r1)
    stb r0, 0x144(r31)
    b lbl_fn_805567A8_00001804
lbl_fn_805567A8_00001664:
    lwz r0, 0x18(r4)
    cmpwi r0, 0x0
    ble lbl_fn_805567A8_00001804
    mr r3, r30
    bl fn_805381A4
    mr r31, r3
    mr r3, r30
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r6, 0x10(r31)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805567A8_000016BC
lbl_fn_805567A8_0000169C:
    lwz r0, 0x164(r3)
    add r5, r0, r4
    lwz r0, 0x14(r5)
    cmpw r6, r0
    bne lbl_fn_805567A8_000016B4
    b lbl_fn_805567A8_000016C0
lbl_fn_805567A8_000016B4:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_805567A8_0000169C
lbl_fn_805567A8_000016BC:
    li r5, 0x0
lbl_fn_805567A8_000016C0:
    lwz r3, lbl_8087F540
    lwz r4, 0x134(r5)
    bl fn_8048C884
    b lbl_fn_805567A8_00001804
lbl_fn_805567A8_000016D0:
    lwz r0, 0x30(r4)
    cmpwi r0, 0x8
    ble lbl_fn_805567A8_000016E8
    lwz r3, 0x2c(r4)
    addi r3, r3, 0x40
    b lbl_fn_805567A8_000016EC
lbl_fn_805567A8_000016E8:
    li r3, 0x0
lbl_fn_805567A8_000016EC:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805567A8_00001804
    mr r3, r30
    bl fn_805381A4
    mr r31, r3
    mr r3, r30
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r6, 0x10(r31)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805567A8_00001744
lbl_fn_805567A8_00001724:
    lwz r0, 0x164(r3)
    add r5, r0, r4
    lwz r0, 0x14(r5)
    cmpw r6, r0
    bne lbl_fn_805567A8_0000173C
    b lbl_fn_805567A8_00001748
lbl_fn_805567A8_0000173C:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_805567A8_00001724
lbl_fn_805567A8_00001744:
    li r5, 0x0
lbl_fn_805567A8_00001748:
    lwz r0, 0x1c(r30)
    cmpwi r0, 0x0
    ble lbl_fn_805567A8_00001780
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    lis r4, lbl_8075E850@ha
    stw r3, 0x64(r1)
    lfd f4, lbl_8075E850@l(r4)
    stw r0, 0x60(r1)
    lfs f0, lbl_80887E34
    lfd f3, 0x60(r1)
    fsubs f3, f3, f4
    fdivs f1, f0, f3
    b lbl_fn_805567A8_00001784
lbl_fn_805567A8_00001780:
    lfs f1, lbl_80887E34
lbl_fn_805567A8_00001784:
    mr r3, r5
    bl fn_80012D0C
    b lbl_fn_805567A8_00001804
lbl_fn_805567A8_00001790:
    mr r3, r30
    bl fn_805381CC
    lwz r0, 0x30(r30)
    cmpwi r0, 0x0
    ble lbl_fn_805567A8_000017AC
    lwz r4, 0x2c(r30)
    b lbl_fn_805567A8_000017B0
lbl_fn_805567A8_000017AC:
    li r4, 0x0
lbl_fn_805567A8_000017B0:
    lwz r0, 0x168(r3)
    lwz r6, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805567A8_000017E8
lbl_fn_805567A8_000017C8:
    lwz r0, 0x164(r3)
    add r5, r0, r4
    lwz r0, 0x14(r5)
    cmpw r6, r0
    bne lbl_fn_805567A8_000017E0
    b lbl_fn_805567A8_000017EC
lbl_fn_805567A8_000017E0:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_805567A8_000017C8
lbl_fn_805567A8_000017E8:
    li r5, 0x0
lbl_fn_805567A8_000017EC:
    lwz r0, 0x20(r5)
    cmpwi r0, 0x6
    bne lbl_fn_805567A8_00001804
    mr r3, r30
    li r4, 0x2
    bl fn_80538DC8
lbl_fn_805567A8_00001804:
    psq_l f31, 0x88(r1), 0, 0
    li r3, 0x0
    lfd f31, 0x80(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80556C08(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    addi r11, r1, 0x140
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    bl _savegpr_23
    lis r0, 0x4330
    mr r26, r4
    stw r0, 0x100(r1)
    mr r3, r26
    stw r0, 0x108(r1)
    bl fn_805381CC
    lfs f31, 0x198(r3)
    mr r3, r26
    bl fn_805381A4
    mr r25, r3
    mr r3, r26
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r6, 0x10(r25)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80556C08_000018BC
lbl_fn_80556C08_0000189C:
    lwz r0, 0x164(r3)
    add r5, r0, r4
    lwz r0, 0x14(r5)
    cmpw r6, r0
    bne lbl_fn_80556C08_000018B4
    b lbl_fn_80556C08_000018C0
lbl_fn_80556C08_000018B4:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80556C08_0000189C
lbl_fn_80556C08_000018BC:
    li r5, 0x0
lbl_fn_80556C08_000018C0:
    lwz r0, 0x168(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80556C08_000018F4
lbl_fn_80556C08_000018D4:
    lwz r0, 0x164(r3)
    add r30, r0, r4
    lwz r0, 0x14(r30)
    cmpw r6, r0
    bne lbl_fn_80556C08_000018EC
    b lbl_fn_80556C08_000018F8
lbl_fn_80556C08_000018EC:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80556C08_000018D4
lbl_fn_80556C08_000018F4:
    li r30, 0x0
lbl_fn_80556C08_000018F8:
    mr r3, r5
    bl fn_8001296C
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_80556C08_00001914
    li r3, 0x0
    b lbl_fn_80556C08_000026BC
lbl_fn_80556C08_00001914:
    lwz r29, 0x16c(r3)
    cmpwi r29, 0x0
    bne lbl_fn_80556C08_00001928
    li r3, 0x0
    b lbl_fn_80556C08_000026BC
lbl_fn_80556C08_00001928:
    lwz r0, 0x30(r26)
    cmpwi r0, 0x0
    ble lbl_fn_80556C08_0000193C
    lwz r3, 0x2c(r26)
    b lbl_fn_80556C08_00001940
lbl_fn_80556C08_0000193C:
    li r3, 0x0
lbl_fn_80556C08_00001940:
    lwz r25, 0x4(r3)
    cmpwi r25, 0x0
    bne lbl_fn_80556C08_00001954
    li r3, 0x0
    b lbl_fn_80556C08_000026BC
lbl_fn_80556C08_00001954:
    cmpwi r0, 0x1
    ble lbl_fn_80556C08_00001968
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x8
    b lbl_fn_80556C08_0000196C
lbl_fn_80556C08_00001968:
    li r3, 0x0
lbl_fn_80556C08_0000196C:
    lwz r0, 0x30(r26)
    lfs f0, 0x4(r3)
    cmpwi r0, 0x2
    stfs f0, 0xf4(r1)
    ble lbl_fn_80556C08_0000198C
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x10
    b lbl_fn_80556C08_00001990
lbl_fn_80556C08_0000198C:
    li r3, 0x0
lbl_fn_80556C08_00001990:
    lwz r0, 0x30(r26)
    lfs f0, 0x4(r3)
    cmpwi r0, 0x3
    stfs f0, 0xf8(r1)
    ble lbl_fn_80556C08_000019B0
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x18
    b lbl_fn_80556C08_000019B4
lbl_fn_80556C08_000019B0:
    li r3, 0x0
lbl_fn_80556C08_000019B4:
    lfs f0, 0x4(r3)
    mr r4, r26
    stfs f0, 0xfc(r1)
    addi r3, r1, 0xe8
    li r5, 0x4
    bl fn_80538C18
    lfs f5, 0xe8(r1)
    mr r3, r28
    lfs f0, lbl_80887E48
    mr r4, r25
    lfs f4, 0xec(r1)
    li r5, 0x0
    fmuls f5, f0, f5
    lfs f3, 0xf0(r1)
    fmuls f4, f0, f4
    fmuls f0, f0, f3
    stfs f5, 0xe8(r1)
    stfs f4, 0xec(r1)
    stfs f0, 0xf0(r1)
    bl fn_800928B0
    lwz r4, 0x48(r29)
    slwi r0, r3, 2
    mr r31, r3
    mr r3, r28
    lwzx r4, r4, r0
    lwz r4, 0x10(r4)
    bl fn_800948F0
    addi r5, r1, 0xf4
    lfs f2, 0xfc(r1)
    psq_l f1, 0x0(r5), 0, 0
    addi r4, r1, 0xdc
    stfs f2, 0xe4(r1)
    addi r5, r1, 0xe8
    lfs f2, 0xf0(r1)
    cmpwi r3, 0x0
    psq_st f1, 0x0(r4), 0, 0
    addi r4, r1, 0xd0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xd8(r1)
    beq lbl_fn_80556C08_00001A60
    addi r4, r3, 0x20
    b lbl_fn_80556C08_00001A74
lbl_fn_80556C08_00001A60:
    lfs f0, lbl_80887E34
    addi r4, r1, 0x70
    stfs f0, 0x70(r1)
    stfs f0, 0x74(r1)
    stfs f0, 0x78(r1)
lbl_fn_80556C08_00001A74:
    psq_l f1, 0x0(r4), 0, 0
    cmpwi r3, 0x0
    lfs f2, 0x8(r4)
    addi r4, r1, 0xc4
    stfs f2, 0xcc(r1)
    psq_st f1, 0x0(r4), 0, 0
    beq lbl_fn_80556C08_00001A98
    lwz r27, 0x4(r3)
    b lbl_fn_80556C08_00001A9C
lbl_fn_80556C08_00001A98:
    li r27, 0x0
lbl_fn_80556C08_00001A9C:
    lwz r23, 0x18(r26)
    lis r25, lbl_8075E850@ha
    lwz r24, 0x10(r26)
    lfd f3, lbl_8075E850@l(r25)
    add r0, r24, r23
    lwz r4, 0x14(r26)
    xoris r0, r0, 0x8000
    stw r0, 0x104(r1)
    lwz r5, 0x1c(r26)
    subf r0, r24, r4
    lfd f0, 0x100(r1)
    lfs f30, lbl_80887E34
    fsubs f0, f0, f3
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_80556C08_000025E4
    cmpwi r23, 0x1
    blt lbl_fn_80556C08_000025E4
    mr r3, r26
    bl fn_805381CC
    add r0, r24, r23
    lfd f3, lbl_8075E850@l(r25)
    xoris r0, r0, 0x8000
    stw r0, 0x10c(r1)
    lfs f4, 0x198(r3)
    lfd f0, 0x108(r1)
    lwz r4, lbl_8087F540
    fsubs f0, f0, f3
    lfs f3, 0xb4(r4)
    fsubs f4, f0, f4
    fcmpo cr0, f4, f3
    bge lbl_fn_80556C08_00001B20
    lfs f4, lbl_80887E30
lbl_fn_80556C08_00001B20:
    lfs f0, lbl_80887E30
    fcmpo cr0, f4, f0
    ble lbl_fn_80556C08_00001B4C
    xoris r0, r23, 0x8000
    stw r0, 0x104(r1)
    lis r3, lbl_8075E850@ha
    lfd f3, lbl_8075E850@l(r3)
    lfd f0, 0x100(r1)
    fsubs f0, f0, f3
    fdivs f0, f4, f0
    fsubs f30, f30, f0
lbl_fn_80556C08_00001B4C:
    fmr f1, f30
    lwz r4, 0x13c(r30)
    lwz r3, lbl_8087F540
    bl fn_8048BD04
    lfs f0, lbl_80887E34
    fmr f31, f1
    fcmpu cr0, f0, f1
    bne lbl_fn_80556C08_000023D8
    lwz r0, 0x118(r30)
    addi r5, r1, 0x64
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80556C08_00001BB4
lbl_fn_80556C08_00001B84:
    lwz r4, 0x120(r30)
    lwzx r0, r4, r3
    cmpw r31, r0
    bne lbl_fn_80556C08_00001BAC
    add r3, r4, r3
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x6c(r1)
    b lbl_fn_80556C08_00001BCC
lbl_fn_80556C08_00001BAC:
    addi r3, r3, 0x10
    bdnz lbl_fn_80556C08_00001B84
lbl_fn_80556C08_00001BB4:
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x6c(r1)
lbl_fn_80556C08_00001BCC:
    lfs f3, 0x8(r5)
    addi r6, r1, 0x58
    lfs f0, 0xfc(r1)
    li r3, 0x0
    lfs f5, 0x4(r5)
    fadds f6, f3, f0
    lfs f4, 0xf8(r1)
    lfs f3, 0x0(r5)
    lfs f0, 0xf4(r1)
    fadds f4, f5, f4
    lwz r0, 0x124(r30)
    fadds f0, f3, f0
    stfs f4, 0xbc(r1)
    stfs f0, 0xb8(r1)
    stfs f6, 0xc0(r1)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80556C08_00001C44
lbl_fn_80556C08_00001C14:
    lwz r4, 0x12c(r30)
    lwzx r0, r4, r3
    cmpw r31, r0
    bne lbl_fn_80556C08_00001C3C
    add r3, r4, r3
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x60(r1)
    b lbl_fn_80556C08_00001C5C
lbl_fn_80556C08_00001C3C:
    addi r3, r3, 0x10
    bdnz lbl_fn_80556C08_00001C14
lbl_fn_80556C08_00001C44:
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x60(r1)
lbl_fn_80556C08_00001C5C:
    lfs f3, 0x8(r6)
    addi r5, r1, 0xb8
    lfs f0, 0xf0(r1)
    li r3, 0x0
    lfs f5, 0x4(r6)
    fadds f6, f3, f0
    lfs f4, 0xec(r1)
    lfs f3, 0x0(r6)
    lfs f0, 0xe8(r1)
    fadds f4, f5, f4
    lwz r0, 0x118(r30)
    fadds f0, f3, f0
    stfs f4, 0xb0(r1)
    stfs f0, 0xac(r1)
    stfs f6, 0xb4(r1)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80556C08_00001CD4
lbl_fn_80556C08_00001CA4:
    lwz r4, 0x120(r30)
    lwzx r0, r4, r3
    cmpw r31, r0
    bne lbl_fn_80556C08_00001CCC
    add r3, r4, r3
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0xc0(r1)
    stfs f2, 0xc(r3)
    b lbl_fn_80556C08_00002030
lbl_fn_80556C08_00001CCC:
    addi r3, r3, 0x10
    bdnz lbl_fn_80556C08_00001CA4
lbl_fn_80556C08_00001CD4:
    lwz r0, 0x120(r30)
    addi r3, r1, 0x1c
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0xc0(r1)
    cmpwi r0, 0x0
    stw r31, 0x18(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x24(r1)
    beq lbl_fn_80556C08_00001D04
    lwz r0, 0x11c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80556C08_00001E7C
lbl_fn_80556C08_00001D04:
    lwz r0, 0x11c(r30)
    li r25, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_80556C08_00001FFC
    li r3, 0x90
    li r4, 0x0
    la r5, lbl_8087E674
    la r6, lbl_8087E670
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80544294@ha
    li r5, 0x0
    addi r4, r4, fn_80544294@l
    li r6, 0x10
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x120(r30)
    mr r26, r3
    cmpwi r0, 0x0
    beq lbl_fn_80556C08_00001E70
    lwz r0, 0x118(r30)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80556C08_00001D68
    mr r5, r0
lbl_fn_80556C08_00001D68:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80556C08_00001E5C
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80556C08_00001E2C
lbl_fn_80556C08_00001D80:
    lwz r0, 0x120(r30)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x10
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    add r7, r3, r4
    lwz r0, 0x120(r30)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x10
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    add r7, r3, r4
    lwz r0, 0x120(r30)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x10
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    add r7, r3, r4
    lwz r0, 0x120(r30)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x10
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    bdnz lbl_fn_80556C08_00001D80
    andi. r5, r5, 0x3
    beq lbl_fn_80556C08_00001E5C
lbl_fn_80556C08_00001E2C:
    mtctr r5
lbl_fn_80556C08_00001E30:
    lwz r0, 0x120(r30)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x10
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    bdnz lbl_fn_80556C08_00001E30
lbl_fn_80556C08_00001E5C:
    lwz r3, 0x120(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80556C08_00001E70
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80556C08_00001E70:
    stw r26, 0x120(r30)
    stw r25, 0x11c(r30)
    b lbl_fn_80556C08_00001FFC
lbl_fn_80556C08_00001E7C:
    lwz r3, 0x118(r30)
    cmplw r3, r0
    blt lbl_fn_80556C08_00001FFC
    slwi r25, r3, 1
    cmplw r0, r25
    bgt lbl_fn_80556C08_00001FFC
    slwi r3, r25, 4
    li r4, 0x0
    addi r3, r3, 0x10
    la r5, lbl_8087E674
    la r6, lbl_8087E670
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80544294@ha
    mr r7, r25
    addi r4, r4, fn_80544294@l
    li r5, 0x0
    li r6, 0x10
    bl fn_80695720
    lwz r0, 0x120(r30)
    mr r26, r3
    cmpwi r0, 0x0
    beq lbl_fn_80556C08_00001FF4
    lwz r0, 0x118(r30)
    mr r5, r25
    cmplw r25, r0
    ble lbl_fn_80556C08_00001EEC
    mr r5, r0
lbl_fn_80556C08_00001EEC:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80556C08_00001FE0
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80556C08_00001FB0
lbl_fn_80556C08_00001F04:
    lwz r0, 0x120(r30)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x10
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    add r7, r3, r4
    lwz r0, 0x120(r30)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x10
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    add r7, r3, r4
    lwz r0, 0x120(r30)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x10
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    add r7, r3, r4
    lwz r0, 0x120(r30)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x10
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    bdnz lbl_fn_80556C08_00001F04
    andi. r5, r5, 0x3
    beq lbl_fn_80556C08_00001FE0
lbl_fn_80556C08_00001FB0:
    mtctr r5
lbl_fn_80556C08_00001FB4:
    lwz r0, 0x120(r30)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x10
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    bdnz lbl_fn_80556C08_00001FB4
lbl_fn_80556C08_00001FE0:
    lwz r3, 0x120(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80556C08_00001FF4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80556C08_00001FF4:
    stw r26, 0x120(r30)
    stw r25, 0x11c(r30)
lbl_fn_80556C08_00001FFC:
    lwz r0, 0x118(r30)
    addi r5, r1, 0x1c
    lwz r4, 0x120(r30)
    slwi r3, r0, 4
    lwz r0, 0x18(r1)
    stwux r0, r3, r4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x24(r1)
    stfs f2, 0xc(r3)
    lwz r3, 0x118(r30)
    addi r0, r3, 0x1
    stw r0, 0x118(r30)
lbl_fn_80556C08_00002030:
    lwz r0, 0x124(r30)
    addi r5, r1, 0xac
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80556C08_00002078
lbl_fn_80556C08_00002048:
    lwz r4, 0x12c(r30)
    lwzx r0, r4, r3
    cmpw r31, r0
    bne lbl_fn_80556C08_00002070
    add r3, r4, r3
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0xb4(r1)
    stfs f2, 0xc(r3)
    b lbl_fn_80556C08_00002690
lbl_fn_80556C08_00002070:
    addi r3, r3, 0x10
    bdnz lbl_fn_80556C08_00002048
lbl_fn_80556C08_00002078:
    lwz r0, 0x12c(r30)
    addi r3, r1, 0xc
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0xb4(r1)
    cmpwi r0, 0x0
    stw r31, 0x8(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x14(r1)
    beq lbl_fn_80556C08_000020A8
    lwz r0, 0x128(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80556C08_00002220
lbl_fn_80556C08_000020A8:
    lwz r0, 0x128(r30)
    li r25, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_80556C08_000023A0
    li r3, 0x90
    li r4, 0x0
    la r5, lbl_8087E674
    la r6, lbl_8087E670
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80544294@ha
    li r5, 0x0
    addi r4, r4, fn_80544294@l
    li r6, 0x10
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x12c(r30)
    mr r26, r3
    cmpwi r0, 0x0
    beq lbl_fn_80556C08_00002214
    lwz r0, 0x124(r30)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80556C08_0000210C
    mr r5, r0
lbl_fn_80556C08_0000210C:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80556C08_00002200
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80556C08_000021D0
lbl_fn_80556C08_00002124:
    lwz r0, 0x12c(r30)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x10
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    add r7, r3, r4
    lwz r0, 0x12c(r30)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x10
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    add r7, r3, r4
    lwz r0, 0x12c(r30)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x10
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    add r7, r3, r4
    lwz r0, 0x12c(r30)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x10
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    bdnz lbl_fn_80556C08_00002124
    andi. r5, r5, 0x3
    beq lbl_fn_80556C08_00002200
lbl_fn_80556C08_000021D0:
    mtctr r5
lbl_fn_80556C08_000021D4:
    lwz r0, 0x12c(r30)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x10
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    bdnz lbl_fn_80556C08_000021D4
lbl_fn_80556C08_00002200:
    lwz r3, 0x12c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80556C08_00002214
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80556C08_00002214:
    stw r26, 0x12c(r30)
    stw r25, 0x128(r30)
    b lbl_fn_80556C08_000023A0
lbl_fn_80556C08_00002220:
    lwz r3, 0x124(r30)
    cmplw r3, r0
    blt lbl_fn_80556C08_000023A0
    slwi r25, r3, 1
    cmplw r0, r25
    bgt lbl_fn_80556C08_000023A0
    slwi r3, r25, 4
    li r4, 0x0
    addi r3, r3, 0x10
    la r5, lbl_8087E674
    la r6, lbl_8087E670
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80544294@ha
    mr r7, r25
    addi r4, r4, fn_80544294@l
    li r5, 0x0
    li r6, 0x10
    bl fn_80695720
    lwz r0, 0x12c(r30)
    mr r26, r3
    cmpwi r0, 0x0
    beq lbl_fn_80556C08_00002398
    lwz r0, 0x124(r30)
    mr r5, r25
    cmplw r25, r0
    ble lbl_fn_80556C08_00002290
    mr r5, r0
lbl_fn_80556C08_00002290:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80556C08_00002384
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80556C08_00002354
lbl_fn_80556C08_000022A8:
    lwz r0, 0x12c(r30)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x10
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    add r7, r3, r4
    lwz r0, 0x12c(r30)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x10
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    add r7, r3, r4
    lwz r0, 0x12c(r30)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x10
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    add r7, r3, r4
    lwz r0, 0x12c(r30)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x10
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    bdnz lbl_fn_80556C08_000022A8
    andi. r5, r5, 0x3
    beq lbl_fn_80556C08_00002384
lbl_fn_80556C08_00002354:
    mtctr r5
lbl_fn_80556C08_00002358:
    lwz r0, 0x12c(r30)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x10
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    bdnz lbl_fn_80556C08_00002358
lbl_fn_80556C08_00002384:
    lwz r3, 0x12c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80556C08_00002398
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80556C08_00002398:
    stw r26, 0x12c(r30)
    stw r25, 0x128(r30)
lbl_fn_80556C08_000023A0:
    lwz r0, 0x124(r30)
    addi r5, r1, 0xc
    lwz r4, 0x12c(r30)
    slwi r3, r0, 4
    lwz r0, 0x8(r1)
    stwux r0, r3, r4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x14(r1)
    stfs f2, 0xc(r3)
    lwz r3, 0x124(r30)
    addi r0, r3, 0x1
    stw r0, 0x124(r30)
    b lbl_fn_80556C08_00002690
lbl_fn_80556C08_000023D8:
    lwz r0, 0x118(r30)
    addi r5, r1, 0xa0
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80556C08_00002420
lbl_fn_80556C08_000023F0:
    lwz r4, 0x120(r30)
    lwzx r0, r4, r3
    cmpw r31, r0
    bne lbl_fn_80556C08_00002418
    add r3, r4, r3
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0xa8(r1)
    b lbl_fn_80556C08_00002438
lbl_fn_80556C08_00002418:
    addi r3, r3, 0x10
    bdnz lbl_fn_80556C08_000023F0
lbl_fn_80556C08_00002420:
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0xa8(r1)
lbl_fn_80556C08_00002438:
    lwz r0, 0x124(r30)
    addi r5, r1, 0x94
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80556C08_00002480
lbl_fn_80556C08_00002450:
    lwz r4, 0x12c(r30)
    lwzx r0, r4, r3
    cmpw r31, r0
    bne lbl_fn_80556C08_00002478
    add r3, r4, r3
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x9c(r1)
    b lbl_fn_80556C08_00002498
lbl_fn_80556C08_00002478:
    addi r3, r3, 0x10
    bdnz lbl_fn_80556C08_00002450
lbl_fn_80556C08_00002480:
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x9c(r1)
lbl_fn_80556C08_00002498:
    lfs f5, 0xe4(r1)
    addi r3, r1, 0x88
    lfs f4, 0xa8(r1)
    lfs f3, 0xe0(r1)
    fsubs f6, f5, f4
    lfs f0, 0xa4(r1)
    lfs f5, 0xdc(r1)
    fsubs f7, f3, f0
    lfs f4, 0xa0(r1)
    lfs f3, 0xd8(r1)
    fsubs f8, f5, f4
    lfs f0, 0x9c(r1)
    lfs f5, 0xd4(r1)
    fsubs f9, f3, f0
    lfs f4, 0x98(r1)
    lfs f3, 0xd0(r1)
    lfs f0, 0x94(r1)
    fsubs f4, f5, f4
    stfs f8, 0x88(r1)
    fsubs f0, f3, f0
    stfs f7, 0x8c(r1)
    stfs f6, 0x90(r1)
    stfs f0, 0x7c(r1)
    stfs f4, 0x80(r1)
    stfs f9, 0x84(r1)
    bl fn_805F9940
    lfs f0, lbl_80887E30
    fmr f30, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80556C08_00002520
    fmuls f30, f1, f31
    addi r3, r1, 0x88
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80556C08_00002520:
    lfs f4, 0x90(r1)
    addi r4, r1, 0x4c
    lfs f3, 0x8c(r1)
    addi r3, r1, 0xdc
    fmuls f9, f4, f30
    lfs f0, 0x88(r1)
    fmuls f8, f3, f30
    lfs f4, 0x84(r1)
    fmuls f7, f0, f30
    lfs f3, 0x80(r1)
    fmuls f13, f4, f31
    lfs f0, 0x7c(r1)
    fmuls f12, f3, f31
    lfs f5, 0xa8(r1)
    fmuls f11, f0, f31
    lfs f6, 0xa4(r1)
    fadds f10, f5, f9
    lfs f5, 0xa0(r1)
    lfs f4, 0x9c(r1)
    fadds f6, f6, f8
    lfs f3, 0x98(r1)
    fadds f5, f5, f7
    lfs f0, 0x94(r1)
    fadds f4, f4, f13
    fadds f3, f3, f12
    stfs f6, 0x50(r1)
    fadds f0, f0, f11
    addi r5, r1, 0x34
    stfs f5, 0x4c(r1)
    fmr f2, f10
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r1, 0xd0
    stfs f2, 0xe4(r1)
    fmr f2, f4
    stfs f0, 0x34(r1)
    stfs f3, 0x38(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f7, 0x40(r1)
    stfs f8, 0x44(r1)
    stfs f9, 0x48(r1)
    stfs f10, 0x54(r1)
    stfs f11, 0x28(r1)
    stfs f12, 0x2c(r1)
    stfs f13, 0x30(r1)
    stfs f4, 0x3c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xd8(r1)
    b lbl_fn_80556C08_00002690
lbl_fn_80556C08_000025E4:
    subf r0, r5, r0
    lis r3, lbl_8075E850@ha
    xoris r0, r0, 0x8000
    stw r0, 0x10c(r1)
    lfd f4, lbl_8075E850@l(r3)
    lfd f0, 0x108(r1)
    fsubs f0, f0, f4
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_80556C08_00002690
    cmpwi r5, 0x1
    blt lbl_fn_80556C08_00002690
    subf r3, r5, r4
    xoris r0, r5, 0x8000
    xoris r3, r3, 0x8000
    stw r3, 0x104(r1)
    lfs f8, lbl_80887E34
    lfd f0, 0x100(r1)
    stw r0, 0x10c(r1)
    fsubs f3, f0, f4
    lfs f7, 0xdc(r1)
    lfd f0, 0x108(r1)
    lfs f6, 0xe0(r1)
    fsubs f9, f0, f4
    lfs f5, 0xe4(r1)
    fsubs f10, f31, f3
    lfs f4, 0xd0(r1)
    lfs f3, 0xd4(r1)
    lfs f0, 0xd8(r1)
    fdivs f9, f10, f9
    fsubs f8, f8, f9
    fmuls f7, f7, f8
    fmuls f6, f6, f8
    fmuls f5, f5, f8
    stfs f7, 0xdc(r1)
    fmuls f4, f4, f8
    fmuls f3, f3, f8
    stfs f6, 0xe0(r1)
    fmuls f0, f0, f8
    stfs f5, 0xe4(r1)
    stfs f4, 0xd0(r1)
    stfs f3, 0xd4(r1)
    stfs f0, 0xd8(r1)
lbl_fn_80556C08_00002690:
    lwz r4, 0x48(r29)
    slwi r0, r31, 2
    mr r3, r28
    mr r8, r27
    lwzx r4, r4, r0
    addi r5, r1, 0xdc
    addi r6, r1, 0xd0
    addi r7, r1, 0xc4
    lwz r4, 0x10(r4)
    bl fn_80093F1C
    li r3, 0x0
lbl_fn_80556C08_000026BC:
    addi r11, r1, 0x140
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    bl _restgpr_23
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}
