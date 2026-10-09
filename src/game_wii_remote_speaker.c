#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_21(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void fn_80010374(void);
extern void fn_800112E0(void);
extern void fn_800119C0(void);
extern void fn_80011E98(void);
extern void fn_80012294(void);
extern void fn_80012540(void);
extern void fn_8001296C(void);
extern void fn_80012D34(void);
extern void fn_80013530(void);
extern void fn_80092814(void);
extern void fn_800928B0(void);
extern void fn_8048B3B8(void);
extern void fn_8048BD04(void);
extern void fn_8048C884(void);
extern void fn_805381A4(void);
extern void fn_805381CC(void);
extern void fn_805381F4(void);
extern void fn_80538DC8(void);
extern void fn_80541BDC(void);
extern void fn_80551198(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_8075E850[];
extern u8 lbl_8075EB60[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F540;
extern u32 lbl_80887E30;
extern u32 lbl_80887E34;
extern u32 lbl_80887E3C;
extern u32 lbl_80887E40;
extern u32 lbl_80887E44;
extern u32 lbl_80887E48;
extern u32 lbl_80887E58;
extern u32 lbl_80887E60;
extern u32 lbl_80887E64;

/* Function declarations */
void fn_805534A8(void);
void fn_8055353C(void);
void fn_80553924(void);
void fn_80553A78(void);
void fn_80553DCC(void);
void fn_8055408C(void);
void fn_805549EC(void);
void fn_80554DF0(void);

asm void fn_805534A8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    mr r3, r29
    lwz r31, 0x18(r4)
    lwz r30, 0x10(r4)
    bl fn_805381CC
    add r4, r30, r31
    lis r0, 0x4330
    xoris r4, r4, 0x8000
    stw r4, 0xc(r1)
    lis r5, lbl_8075E850@ha
    lwz r4, lbl_8087F540
    stw r0, 0x8(r1)
    lfd f1, lbl_8075E850@l(r5)
    lfd f0, 0x8(r1)
    lfs f2, 0x198(r3)
    fsubs f0, f0, f1
    lfs f3, 0xb4(r4)
    fsubs f1, f0, f2
    fcmpo cr0, f1, f3
    bge lbl_fn_805534A8_0000006C
    lfs f1, lbl_80887E30
lbl_fn_805534A8_0000006C:
    mr r3, r29
    bl fn_80551198
    lwz r31, 0x1c(r1)
    li r3, 0x0
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8055353C(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x50
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stfd f30, 0x70(r1)
    psq_st f30, 0x78(r1), 0, 0
    stfd f29, 0x60(r1)
    psq_st f29, 0x68(r1), 0, 0
    stfd f28, 0x50(r1)
    psq_st f28, 0x58(r1), 0, 0
    bl _savegpr_21
    subi r0, r5, 0x3
    mr r23, r4
    cmplwi r0, 0x1
    ble lbl_fn_8055353C_000003B8
    cmpwi r5, 0x0
    bne lbl_fn_8055353C_00000440
    mr r3, r23
    bl fn_805381A4
    mr r25, r3
    mr r3, r23
    bl fn_805381CC
    lwz r0, 0x168(r3)
    mr r24, r3
    lwz r5, 0x10(r25)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8055353C_00000130
lbl_fn_8055353C_00000110:
    lwz r0, 0x164(r3)
    add r25, r0, r4
    lwz r0, 0x14(r25)
    cmpw r5, r0
    bne lbl_fn_8055353C_00000128
    b lbl_fn_8055353C_00000134
lbl_fn_8055353C_00000128:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_8055353C_00000110
lbl_fn_8055353C_00000130:
    li r25, 0x0
lbl_fn_8055353C_00000134:
    lwz r0, 0x30(r23)
    cmpwi r0, 0x0
    ble lbl_fn_8055353C_00000148
    lwz r3, 0x2c(r23)
    b lbl_fn_8055353C_0000014C
lbl_fn_8055353C_00000148:
    li r3, 0x0
lbl_fn_8055353C_0000014C:
    cmpwi r0, 0x1
    lwz r31, 0x4(r3)
    ble lbl_fn_8055353C_00000164
    lwz r3, 0x2c(r23)
    addi r3, r3, 0x8
    b lbl_fn_8055353C_00000168
lbl_fn_8055353C_00000164:
    li r3, 0x0
lbl_fn_8055353C_00000168:
    cmpwi r0, 0x2
    lwz r30, 0x4(r3)
    ble lbl_fn_8055353C_00000180
    lwz r3, 0x2c(r23)
    addi r3, r3, 0x10
    b lbl_fn_8055353C_00000184
lbl_fn_8055353C_00000180:
    li r3, 0x0
lbl_fn_8055353C_00000184:
    cmpwi r0, 0x3
    lfs f31, 0x4(r3)
    ble lbl_fn_8055353C_0000019C
    lwz r3, 0x2c(r23)
    addi r3, r3, 0x18
    b lbl_fn_8055353C_000001A0
lbl_fn_8055353C_0000019C:
    li r3, 0x0
lbl_fn_8055353C_000001A0:
    lwz r5, 0x4(r3)
    lis r3, 0x4330
    stw r3, 0x8(r1)
    lis r4, lbl_8075E850@ha
    xoris r3, r5, 0x8000
    lfd f1, lbl_8075E850@l(r4)
    stw r3, 0xc(r1)
    cmpwi r0, 0x4
    lfd f0, 0x8(r1)
    fsubs f30, f0, f1
    ble lbl_fn_8055353C_000001D8
    lwz r3, 0x2c(r23)
    addi r3, r3, 0x20
    b lbl_fn_8055353C_000001DC
lbl_fn_8055353C_000001D8:
    li r3, 0x0
lbl_fn_8055353C_000001DC:
    cmpwi r0, 0x5
    lwz r29, 0x4(r3)
    ble lbl_fn_8055353C_000001F4
    lwz r3, 0x2c(r23)
    addi r3, r3, 0x28
    b lbl_fn_8055353C_000001F8
lbl_fn_8055353C_000001F4:
    li r3, 0x0
lbl_fn_8055353C_000001F8:
    cmpwi r0, 0x6
    lwz r28, 0x4(r3)
    ble lbl_fn_8055353C_00000210
    lwz r3, 0x2c(r23)
    addi r3, r3, 0x30
    b lbl_fn_8055353C_00000214
lbl_fn_8055353C_00000210:
    li r3, 0x0
lbl_fn_8055353C_00000214:
    cmpwi r0, 0x7
    lwz r27, 0x4(r3)
    ble lbl_fn_8055353C_0000022C
    lwz r3, 0x2c(r23)
    addi r3, r3, 0x38
    b lbl_fn_8055353C_00000230
lbl_fn_8055353C_0000022C:
    li r3, 0x0
lbl_fn_8055353C_00000230:
    cmpwi r0, 0x8
    lfs f29, 0x4(r3)
    ble lbl_fn_8055353C_00000248
    lwz r3, 0x2c(r23)
    addi r3, r3, 0x40
    b lbl_fn_8055353C_0000024C
lbl_fn_8055353C_00000248:
    li r3, 0x0
lbl_fn_8055353C_0000024C:
    lwz r5, 0x4(r3)
    lis r3, 0x4330
    stw r3, 0x10(r1)
    lis r4, lbl_8075E850@ha
    xoris r3, r5, 0x8000
    lfd f1, lbl_8075E850@l(r4)
    stw r3, 0x14(r1)
    cmpwi r0, 0x9
    lfd f0, 0x10(r1)
    fsubs f28, f0, f1
    ble lbl_fn_8055353C_00000284
    lwz r3, 0x2c(r23)
    addi r3, r3, 0x48
    b lbl_fn_8055353C_00000288
lbl_fn_8055353C_00000284:
    li r3, 0x0
lbl_fn_8055353C_00000288:
    cmpwi r0, 0xa
    lwz r26, 0x4(r3)
    ble lbl_fn_8055353C_000002A0
    lwz r3, 0x2c(r23)
    addi r3, r3, 0x50
    b lbl_fn_8055353C_000002A4
lbl_fn_8055353C_000002A0:
    li r3, 0x0
lbl_fn_8055353C_000002A4:
    cmpwi r0, 0xb
    lwz r4, 0x4(r3)
    ble lbl_fn_8055353C_000002BC
    lwz r3, 0x2c(r23)
    addi r3, r3, 0x58
    b lbl_fn_8055353C_000002C0
lbl_fn_8055353C_000002BC:
    li r3, 0x0
lbl_fn_8055353C_000002C0:
    lwz r21, 0x4(r3)
    mr r3, r25
    bl fn_80012540
    li r0, 0x3
    mr r3, r25
    li r22, 0x0
    mtctr r0
lbl_fn_8055353C_000002DC:
    lwz r0, 0xb8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8055353C_000002F8
    slwi r0, r22, 2
    add r3, r25, r0
    stw r23, 0xb8(r3)
    b lbl_fn_8055353C_00000308
lbl_fn_8055353C_000002F8:
    addi r3, r3, 0x4
    addi r22, r22, 0x1
    bdnz lbl_fn_8055353C_000002DC
    li r22, -0x1
lbl_fn_8055353C_00000308:
    cmpwi r22, -0x1
    beq lbl_fn_8055353C_00000440
    cmpwi r28, 0x0
    beq lbl_fn_8055353C_00000374
    fmr f1, f31
    mr r3, r25
    fmr f2, f30
    mr r5, r30
    mr r6, r29
    mr r7, r31
    mr r8, r24
    mr r9, r22
    mr r10, r21
    li r4, 0x1
    bl fn_800119C0
    fmr f1, f29
    mr r3, r25
    fmr f2, f28
    mr r5, r27
    mr r6, r26
    mr r7, r31
    mr r8, r24
    mr r9, r22
    mr r10, r21
    li r4, 0x2
    bl fn_800119C0
    b lbl_fn_8055353C_00000440
lbl_fn_8055353C_00000374:
    fmr f1, f31
    mr r3, r25
    fmr f2, f30
    mr r5, r30
    mr r6, r29
    mr r7, r31
    mr r8, r24
    mr r9, r22
    mr r10, r21
    li r4, 0x0
    bl fn_800119C0
    mr r3, r25
    li r4, 0x2
    li r5, 0x0
    li r6, 0x0
    bl fn_80012294
    b lbl_fn_8055353C_00000440
lbl_fn_8055353C_000003B8:
    mr r3, r23
    bl fn_805381A4
    mr r24, r3
    mr r3, r23
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r5, 0x10(r24)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8055353C_00000404
lbl_fn_8055353C_000003E4:
    lwz r0, 0x164(r3)
    add r6, r0, r4
    lwz r0, 0x14(r6)
    cmpw r5, r0
    bne lbl_fn_8055353C_000003FC
    b lbl_fn_8055353C_00000408
lbl_fn_8055353C_000003FC:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_8055353C_000003E4
lbl_fn_8055353C_00000404:
    li r6, 0x0
lbl_fn_8055353C_00000408:
    lwz r3, 0xb8(r6)
    li r0, 0x0
    cmplw r3, r23
    bne lbl_fn_8055353C_0000041C
    stw r0, 0xb8(r6)
lbl_fn_8055353C_0000041C:
    lwz r3, 0xbc(r6)
    cmplw r3, r23
    bne lbl_fn_8055353C_0000042C
    stw r0, 0xbc(r6)
lbl_fn_8055353C_0000042C:
    lwz r3, 0xc0(r6)
    addi r4, r6, 0x8
    cmplw r3, r23
    bne lbl_fn_8055353C_00000440
    stw r0, 0xb8(r4)
lbl_fn_8055353C_00000440:
    psq_l f31, 0x88(r1), 0, 0
    li r3, 0x0
    lfd f31, 0x80(r1)
    psq_l f30, 0x78(r1), 0, 0
    lfd f30, 0x70(r1)
    psq_l f29, 0x68(r1), 0, 0
    lfd f29, 0x60(r1)
    psq_l f28, 0x58(r1), 0, 0
    lfd f28, 0x50(r1)
    addi r11, r1, 0x50
    bl _restgpr_21
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80553924(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    bne lbl_fn_80553924_000005B4
    mr r3, r31
    bl fn_805381A4
    mr r30, r3
    mr r3, r31
    bl fn_805381CC
    lwz r0, 0x168(r3)
    mr r5, r3
    lwz r6, 0x10(r30)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80553924_000004EC
lbl_fn_80553924_000004CC:
    lwz r0, 0x164(r3)
    add r9, r0, r4
    lwz r0, 0x14(r9)
    cmpw r6, r0
    bne lbl_fn_80553924_000004E4
    b lbl_fn_80553924_000004F0
lbl_fn_80553924_000004E4:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80553924_000004CC
lbl_fn_80553924_000004EC:
    li r9, 0x0
lbl_fn_80553924_000004F0:
    lwz r8, 0x30(r31)
    cmpwi r8, 0x0
    ble lbl_fn_80553924_00000504
    lwz r3, 0x2c(r31)
    b lbl_fn_80553924_00000508
lbl_fn_80553924_00000504:
    li r3, 0x0
lbl_fn_80553924_00000508:
    cmpwi r8, 0x1
    lwz r4, 0x4(r3)
    cmpwi r8, 0x2
    ble lbl_fn_80553924_00000524
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x10
    b lbl_fn_80553924_00000528
lbl_fn_80553924_00000524:
    li r3, 0x0
lbl_fn_80553924_00000528:
    lwz r3, 0x4(r3)
    lis r0, 0x4330
    cmpwi r8, 0x4
    stw r0, 0x8(r1)
    xoris r0, r3, 0x8000
    stw r0, 0xc(r1)
    ble lbl_fn_80553924_00000550
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x20
    b lbl_fn_80553924_00000554
lbl_fn_80553924_00000550:
    li r3, 0x0
lbl_fn_80553924_00000554:
    cmpwi r8, 0x5
    lwz r6, 0x4(r3)
    ble lbl_fn_80553924_0000056C
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x28
    b lbl_fn_80553924_00000570
lbl_fn_80553924_0000056C:
    li r3, 0x0
lbl_fn_80553924_00000570:
    cmpwi r8, 0x6
    lwz r7, 0x4(r3)
    ble lbl_fn_80553924_00000588
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x30
    b lbl_fn_80553924_0000058C
lbl_fn_80553924_00000588:
    li r3, 0x0
lbl_fn_80553924_0000058C:
    cmpwi r8, 0x7
    lwz r8, 0x4(r3)
    ble lbl_fn_80553924_000005A4
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x38
    b lbl_fn_80553924_000005A8
lbl_fn_80553924_000005A4:
    li r3, 0x0
lbl_fn_80553924_000005A8:
    lfs f1, 0x4(r3)
    mr r3, r9
    bl fn_80011E98
lbl_fn_80553924_000005B4:
    lwz r31, 0x1c(r1)
    li r3, 0x0
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80553A78(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x50
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stfd f30, 0x70(r1)
    psq_st f30, 0x78(r1), 0, 0
    stfd f29, 0x60(r1)
    psq_st f29, 0x68(r1), 0, 0
    stfd f28, 0x50(r1)
    psq_st f28, 0x58(r1), 0, 0
    bl _savegpr_27
    fmr f28, f1
    lis r0, 0x4330
    stw r0, 0x20(r1)
    mr r28, r3
    stw r0, 0x28(r1)
    bl fn_805381A4
    mr r29, r3
    mr r3, r28
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r5, 0x10(r29)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80553A78_00000660
lbl_fn_80553A78_00000640:
    lwz r0, 0x164(r3)
    add r31, r0, r4
    lwz r0, 0x14(r31)
    cmpw r5, r0
    bne lbl_fn_80553A78_00000658
    b lbl_fn_80553A78_00000664
lbl_fn_80553A78_00000658:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80553A78_00000640
lbl_fn_80553A78_00000660:
    li r31, 0x0
lbl_fn_80553A78_00000664:
    lwz r0, 0x10(r28)
    lis r4, lbl_8075E850@ha
    lwz r6, 0x30(r28)
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lfd f3, lbl_8075E850@l(r4)
    cmpwi r6, 0x0
    lfd f0, 0x20(r1)
    lfs f29, lbl_80887E34
    fsubs f0, f0, f3
    fsubs f5, f28, f0
    ble lbl_fn_80553A78_0000069C
    lwz r4, 0x2c(r28)
    b lbl_fn_80553A78_000006A0
lbl_fn_80553A78_0000069C:
    li r4, 0x0
lbl_fn_80553A78_000006A0:
    lwz r0, 0x168(r3)
    lwz r5, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80553A78_000006D8
lbl_fn_80553A78_000006B8:
    lwz r0, 0x164(r3)
    add r30, r0, r4
    lwz r0, 0x14(r30)
    cmpw r5, r0
    bne lbl_fn_80553A78_000006D0
    b lbl_fn_80553A78_000006DC
lbl_fn_80553A78_000006D0:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80553A78_000006B8
lbl_fn_80553A78_000006D8:
    li r30, 0x0
lbl_fn_80553A78_000006DC:
    cmpwi r6, 0x1
    ble lbl_fn_80553A78_000006F0
    lwz r3, 0x2c(r28)
    addi r5, r3, 0x8
    b lbl_fn_80553A78_000006F4
lbl_fn_80553A78_000006F0:
    li r5, 0x0
lbl_fn_80553A78_000006F4:
    lwz r3, lbl_8087EFB4
    addi r4, r1, 0x14
    lwz r29, 0x4(r5)
    psq_l f1, 0x10c(r3), 0, 0
    lfs f2, 0x114(r3)
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r7, 0x30(r28)
    cmpwi r7, 0xe
    ble lbl_fn_80553A78_00000728
    lwz r3, 0x2c(r28)
    addi r4, r3, 0x70
    b lbl_fn_80553A78_0000072C
lbl_fn_80553A78_00000728:
    li r4, 0x0
lbl_fn_80553A78_0000072C:
    lwz r5, 0x18(r28)
    lis r3, lbl_8075E850@ha
    lfd f3, lbl_8075E850@l(r3)
    xoris r0, r5, 0x8000
    stw r0, 0x2c(r1)
    lfs f6, 0x4(r4)
    lfd f0, 0x28(r1)
    lwz r4, 0x10(r28)
    fsubs f0, f0, f3
    lwz r3, 0x14(r28)
    lwz r6, 0x1c(r28)
    subf r4, r4, r3
    fcmpo cr0, f0, f5
    ble lbl_fn_80553A78_00000784
    cmpwi r5, 0x1
    blt lbl_fn_80553A78_00000784
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f3
    fdivs f0, f5, f0
    fmuls f6, f6, f0
    b lbl_fn_80553A78_000007DC
lbl_fn_80553A78_00000784:
    subf r0, r6, r4
    lis r3, lbl_8075E850@ha
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lfd f4, lbl_8075E850@l(r3)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f4
    fcmpo cr0, f0, f5
    bge lbl_fn_80553A78_000007DC
    cmpwi r6, 0x1
    blt lbl_fn_80553A78_000007DC
    xoris r0, r4, 0x8000
    stw r0, 0x24(r1)
    xoris r0, r6, 0x8000
    lfd f0, 0x20(r1)
    stw r0, 0x2c(r1)
    fsubs f3, f0, f4
    lfd f0, 0x28(r1)
    fsubs f3, f3, f5
    fsubs f0, f0, f4
    fdivs f0, f3, f0
    fmuls f6, f6, f0
lbl_fn_80553A78_000007DC:
    lfs f0, lbl_80887E48
    cmpwi r7, 0xa
    fmuls f30, f0, f6
    ble lbl_fn_80553A78_000007F8
    lwz r3, 0x2c(r28)
    addi r3, r3, 0x50
    b lbl_fn_80553A78_000007FC
lbl_fn_80553A78_000007F8:
    li r3, 0x0
lbl_fn_80553A78_000007FC:
    lfs f3, 0x4(r3)
    cmpwi r7, 0xb
    lfs f0, lbl_80887E48
    fmuls f0, f0, f3
    fabs f0, f0
    frsp f28, f0
    ble lbl_fn_80553A78_00000824
    lwz r3, 0x2c(r28)
    addi r3, r3, 0x58
    b lbl_fn_80553A78_00000828
lbl_fn_80553A78_00000824:
    li r3, 0x0
lbl_fn_80553A78_00000828:
    lfs f3, 0x4(r3)
    lis r3, lbl_807C7030@ha
    lfs f0, lbl_80887E48
    addi r3, r3, lbl_807C7030@l
    lfs f2, 0x8(r3)
    addi r27, r1, 0x8
    fmuls f0, f0, f3
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    fabs f0, f0
    stfs f2, 0x10(r1)
    frsp f31, f0
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0x24(r1)
    lis r28, lbl_8075E850@ha
    lfs f0, lbl_80887E58
    lfd f5, lbl_8075E850@l(r28)
    lfd f4, 0x20(r1)
    fmuls f0, f0, f28
    lfs f3, lbl_80887E60
    fsubs f4, f4, f5
    fdivs f3, f4, f3
    fmuls f0, f0, f3
    fsubs f0, f0, f28
    stfs f0, 0x8(r1)
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0x2c(r1)
    lfs f0, lbl_80887E58
    fmr f1, f29
    lfd f5, lbl_8075E850@l(r28)
    fmr f2, f30
    lfd f4, 0x28(r1)
    fmuls f0, f0, f31
    lfs f3, lbl_80887E60
    fsubs f4, f4, f5
    mr r3, r31
    mr r4, r30
    mr r5, r29
    mr r8, r27
    addi r6, r1, 0x14
    fdivs f3, f4, f3
    li r7, 0x0
    li r9, 0x1
    fmuls f0, f0, f3
    fsubs f0, f0, f31
    stfs f0, 0xc(r1)
    bl fn_80012D34
    addi r11, r1, 0x50
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    psq_l f30, 0x78(r1), 0, 0
    lfd f30, 0x70(r1)
    psq_l f29, 0x68(r1), 0, 0
    lfd f29, 0x60(r1)
    psq_l f28, 0x58(r1), 0, 0
    lfd f28, 0x50(r1)
    bl _restgpr_27
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80553DCC(void)
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
    fmr f30, f1
    mr r25, r3
    mr r26, r4
    mr r28, r5
    mr r27, r6
    bl fn_805381A4
    mr r29, r3
    mr r3, r25
    bl fn_805381CC
    lwz r0, 0x168(r3)
    mr r31, r3
    lwz r5, 0x10(r29)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80553DCC_000009A8
lbl_fn_80553DCC_00000988:
    lwz r0, 0x164(r3)
    add r30, r0, r4
    lwz r0, 0x14(r30)
    cmpw r5, r0
    bne lbl_fn_80553DCC_000009A0
    b lbl_fn_80553DCC_000009AC
lbl_fn_80553DCC_000009A0:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80553DCC_00000988
lbl_fn_80553DCC_000009A8:
    li r30, 0x0
lbl_fn_80553DCC_000009AC:
    lwz r6, 0x30(r25)
    lfs f31, lbl_80887E34
    cmpwi r6, 0x0
    ble lbl_fn_80553DCC_000009C4
    lwz r4, 0x2c(r25)
    b lbl_fn_80553DCC_000009C8
lbl_fn_80553DCC_000009C4:
    li r4, 0x0
lbl_fn_80553DCC_000009C8:
    lwz r0, 0x168(r3)
    lwz r5, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80553DCC_00000A00
lbl_fn_80553DCC_000009E0:
    lwz r0, 0x164(r3)
    add r29, r0, r4
    lwz r0, 0x14(r29)
    cmpw r5, r0
    bne lbl_fn_80553DCC_000009F8
    b lbl_fn_80553DCC_00000A04
lbl_fn_80553DCC_000009F8:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80553DCC_000009E0
lbl_fn_80553DCC_00000A00:
    li r29, 0x0
lbl_fn_80553DCC_00000A04:
    cmpwi r6, 0x1
    ble lbl_fn_80553DCC_00000A18
    lwz r3, 0x2c(r25)
    addi r4, r3, 0x8
    b lbl_fn_80553DCC_00000A1C
lbl_fn_80553DCC_00000A18:
    li r4, 0x0
lbl_fn_80553DCC_00000A1C:
    lfs f0, lbl_80887E34
    addi r3, r1, 0x2c
    lfs f8, 0x8(r28)
    cmpwi r27, 0x0
    fdivs f0, f0, f30
    lfs f7, 0x8(r26)
    lfs f6, 0x4(r28)
    lfs f5, 0x4(r26)
    lfs f4, 0x0(r28)
    lfs f3, 0x0(r26)
    fsubs f8, f8, f7
    lwz r28, 0x4(r4)
    fsubs f10, f6, f5
    fsubs f4, f4, f3
    stfs f8, 0x1c(r1)
    fmuls f9, f8, f0
    fmuls f8, f10, f0
    stfs f4, 0x14(r1)
    fmuls f6, f4, f0
    fadds f2, f9, f7
    stfs f10, 0x18(r1)
    fadds f4, f8, f5
    fadds f0, f6, f3
    stfs f6, 0x8(r1)
    stfs f0, 0x2c(r1)
    stfs f4, 0x30(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f8, 0xc(r1)
    stfs f9, 0x10(r1)
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x8(r26)
    beq lbl_fn_80553DCC_00000B50
    lwz r0, 0x30(r25)
    cmpwi r0, 0x6
    ble lbl_fn_80553DCC_00000AB8
    lwz r3, 0x2c(r25)
    addi r3, r3, 0x30
    b lbl_fn_80553DCC_00000ABC
lbl_fn_80553DCC_00000AB8:
    li r3, 0x0
lbl_fn_80553DCC_00000ABC:
    lfs f3, 0x4(r3)
    lfs f0, lbl_80887E48
    fmuls f0, f0, f3
    stfs f0, 0x44(r1)
    lwz r0, 0x30(r25)
    cmpwi r0, 0x7
    ble lbl_fn_80553DCC_00000AE4
    lwz r3, 0x2c(r25)
    addi r3, r3, 0x38
    b lbl_fn_80553DCC_00000AE8
lbl_fn_80553DCC_00000AE4:
    li r3, 0x0
lbl_fn_80553DCC_00000AE8:
    lfs f3, 0x4(r3)
    lfs f0, lbl_80887E48
    fmuls f0, f0, f3
    stfs f0, 0x48(r1)
    lwz r0, 0x30(r25)
    cmpwi r0, 0x8
    ble lbl_fn_80553DCC_00000B10
    lwz r3, 0x2c(r25)
    addi r3, r3, 0x40
    b lbl_fn_80553DCC_00000B14
lbl_fn_80553DCC_00000B10:
    li r3, 0x0
lbl_fn_80553DCC_00000B14:
    lfs f3, 0x4(r3)
    fmr f1, f31
    lfs f0, lbl_80887E48
    mr r3, r30
    lfs f2, lbl_80887E30
    mr r4, r29
    fmuls f0, f0, f3
    mr r5, r28
    mr r7, r27
    stfs f0, 0x4c(r1)
    mr r8, r26
    addi r6, r1, 0x44
    li r9, 0x0
    bl fn_80012D34
    b lbl_fn_80553DCC_00000BBC
lbl_fn_80553DCC_00000B50:
    mr r4, r25
    addi r3, r1, 0x38
    li r5, 0x2
    bl fn_805381F4
    lwz r0, 0x20(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80553DCC_00000B94
    mr r4, r31
    addi r3, r1, 0x20
    addi r5, r1, 0x38
    bl fn_80541BDC
    addi r3, r1, 0x20
    lfs f2, 0x28(r1)
    addi r4, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
lbl_fn_80553DCC_00000B94:
    fmr f1, f31
    lfs f2, lbl_80887E30
    mr r3, r30
    mr r4, r29
    mr r5, r28
    mr r7, r27
    mr r8, r26
    addi r6, r1, 0x38
    li r9, 0x0
    bl fn_80012D34
lbl_fn_80553DCC_00000BBC:
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

asm void fn_8055408C(void)
{
    nofralloc
    stwu r1, -0x2b0(r1)
    mflr r0
    stw r0, 0x2b4(r1)
    addi r11, r1, 0x280
    stfd f31, 0x2a0(r1)
    psq_st f31, 0x2a8(r1), 0, 0
    stfd f30, 0x290(r1)
    psq_st f30, 0x298(r1), 0, 0
    stfd f29, 0x280(r1)
    psq_st f29, 0x288(r1), 0, 0
    bl _savegpr_27
    fmr f29, f1
    mr r27, r3
    mr r28, r6
    bl fn_805381A4
    mr r29, r3
    mr r3, r27
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r5, 0x10(r29)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8055408C_00000C64
lbl_fn_8055408C_00000C44:
    lwz r0, 0x164(r3)
    add r31, r0, r4
    lwz r0, 0x14(r31)
    cmpw r5, r0
    bne lbl_fn_8055408C_00000C5C
    b lbl_fn_8055408C_00000C68
lbl_fn_8055408C_00000C5C:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_8055408C_00000C44
lbl_fn_8055408C_00000C64:
    li r31, 0x0
lbl_fn_8055408C_00000C68:
    lwz r6, 0x30(r27)
    lfs f31, lbl_80887E34
    cmpwi r6, 0x0
    ble lbl_fn_8055408C_00000C80
    lwz r5, 0x2c(r27)
    b lbl_fn_8055408C_00000C84
lbl_fn_8055408C_00000C80:
    li r5, 0x0
lbl_fn_8055408C_00000C84:
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r5, 0x4(r5)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8055408C_00000CBC
lbl_fn_8055408C_00000C9C:
    lwz r0, 0x164(r3)
    add r30, r0, r4
    lwz r0, 0x14(r30)
    cmpw r5, r0
    bne lbl_fn_8055408C_00000CB4
    b lbl_fn_8055408C_00000CC0
lbl_fn_8055408C_00000CB4:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_8055408C_00000C9C
lbl_fn_8055408C_00000CBC:
    li r30, 0x0
lbl_fn_8055408C_00000CC0:
    cmpwi r6, 0x1
    ble lbl_fn_8055408C_00000CD4
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x8
    b lbl_fn_8055408C_00000CD8
lbl_fn_8055408C_00000CD4:
    li r3, 0x0
lbl_fn_8055408C_00000CD8:
    lfs f0, lbl_80887E30
    lwz r29, 0x4(r3)
    fcmpo cr0, f29, f0
    lwz r0, 0x18(r27)
    lfs f30, lbl_80887E34
    ble lbl_fn_8055408C_00000D2C
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    stw r3, 0x264(r1)
    lis r4, lbl_8075E850@ha
    lfd f3, lbl_8075E850@l(r4)
    stw r0, 0x260(r1)
    lwz r4, 0x138(r31)
    lfd f0, 0x260(r1)
    lwz r3, lbl_8087F540
    fsubs f0, f0, f3
    fdivs f0, f29, f0
    fsubs f30, f30, f0
    fmr f1, f30
    bl fn_8048BD04
    fmr f30, f1
lbl_fn_8055408C_00000D2C:
    cmpwi r28, 0x0
    beq lbl_fn_8055408C_00000EC8
    lwz r0, 0x30(r27)
    cmpwi r0, 0x6
    ble lbl_fn_8055408C_00000D4C
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x30
    b lbl_fn_8055408C_00000D50
lbl_fn_8055408C_00000D4C:
    li r3, 0x0
lbl_fn_8055408C_00000D50:
    lfs f3, 0x4(r3)
    lfs f0, lbl_80887E48
    lwz r0, 0x30(r27)
    fmuls f0, f0, f3
    cmpwi r0, 0x7
    stfs f0, 0x170(r1)
    ble lbl_fn_8055408C_00000D78
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x38
    b lbl_fn_8055408C_00000D7C
lbl_fn_8055408C_00000D78:
    li r3, 0x0
lbl_fn_8055408C_00000D7C:
    lfs f3, 0x4(r3)
    lfs f0, lbl_80887E48
    lwz r0, 0x30(r27)
    fmuls f0, f0, f3
    cmpwi r0, 0x8
    stfs f0, 0x174(r1)
    ble lbl_fn_8055408C_00000DA4
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x40
    b lbl_fn_8055408C_00000DA8
lbl_fn_8055408C_00000DA4:
    li r3, 0x0
lbl_fn_8055408C_00000DA8:
    lis r4, lbl_807C7030@ha
    lfs f4, 0x4(r3)
    addi r4, r4, lbl_807C7030@l
    lfs f3, lbl_80887E48
    addi r3, r1, 0x164
    psq_l f1, 0x0(r4), 0, 0
    lfs f0, lbl_80887E34
    fmuls f7, f3, f4
    psq_st f1, 0x0(r3), 0, 0
    fcmpu cr0, f0, f30
    lfs f2, 0x8(r4)
    lfs f6, 0x164(r1)
    lfs f5, 0x170(r1)
    fadds f4, f2, f7
    lfs f3, 0x168(r1)
    fadds f6, f6, f5
    lfs f0, 0x174(r1)
    stfs f7, 0x178(r1)
    fadds f5, f3, f0
    stfs f6, 0x164(r1)
    stfs f5, 0x168(r1)
    stfs f4, 0x16c(r1)
    bne lbl_fn_8055408C_00000E24
    fmr f2, f7
    addi r4, r1, 0x170
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x16c(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_st f1, 0xf4(r31), 0, 0
    stfs f2, 0xfc(r31)
    b lbl_fn_8055408C_00000E98
lbl_fn_8055408C_00000E24:
    addi r4, r1, 0x158
    psq_l f1, 0xf4(r31), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    addi r4, r1, 0xe0
    lfs f2, 0xfc(r31)
    lfs f3, 0x15c(r1)
    lfs f0, 0x158(r1)
    fsubs f4, f4, f2
    fsubs f5, f5, f3
    stfs f2, 0x160(r1)
    fsubs f6, f6, f0
    fmuls f8, f4, f30
    stfs f5, 0x150(r1)
    fmuls f7, f5, f30
    fmuls f5, f6, f30
    stfs f6, 0x14c(r1)
    fadds f2, f2, f8
    fadds f3, f3, f7
    stfs f4, 0x154(r1)
    fadds f0, f0, f5
    stfs f3, 0xe4(r1)
    stfs f0, 0xe0(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f5, 0xd4(r1)
    stfs f7, 0xd8(r1)
    stfs f8, 0xdc(r1)
    stfs f2, 0xe8(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x16c(r1)
lbl_fn_8055408C_00000E98:
    fmr f1, f31
    lis r8, lbl_807C7030@ha
    lfs f2, lbl_80887E30
    mr r3, r31
    mr r4, r30
    mr r5, r29
    mr r7, r28
    addi r6, r1, 0x164
    addi r8, r8, lbl_807C7030@l
    li r9, 0x0
    bl fn_80012D34
    b lbl_fn_8055408C_00001514
lbl_fn_8055408C_00000EC8:
    lwz r0, 0x30(r27)
    cmpwi r0, 0x2
    ble lbl_fn_8055408C_00000EE0
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x10
    b lbl_fn_8055408C_00000EE4
lbl_fn_8055408C_00000EE0:
    li r3, 0x0
lbl_fn_8055408C_00000EE4:
    lwz r0, 0x30(r27)
    lfs f0, 0x4(r3)
    cmpwi r0, 0x3
    stfs f0, 0x140(r1)
    ble lbl_fn_8055408C_00000F04
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x18
    b lbl_fn_8055408C_00000F08
lbl_fn_8055408C_00000F04:
    li r3, 0x0
lbl_fn_8055408C_00000F08:
    lwz r0, 0x30(r27)
    lfs f0, 0x4(r3)
    cmpwi r0, 0x4
    stfs f0, 0x144(r1)
    ble lbl_fn_8055408C_00000F28
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x20
    b lbl_fn_8055408C_00000F2C
lbl_fn_8055408C_00000F28:
    li r3, 0x0
lbl_fn_8055408C_00000F2C:
    lfs f0, 0x4(r3)
    addi r5, r1, 0x134
    psq_l f1, 0x100(r31), 0, 0
    mr r4, r30
    lfs f2, 0x108(r31)
    addi r3, r1, 0x128
    stfs f0, 0x148(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x13c(r1)
    bl fn_80010374
    mr r3, r30
    bl fn_8001296C
    cmpwi r3, 0x0
    beq lbl_fn_8055408C_00000FCC
    mr r3, r30
    bl fn_8001296C
    mr r27, r3
    mr r4, r29
    li r5, 0x0
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_8055408C_00000F8C
    li r5, 0x0
    b lbl_fn_8055408C_00000F98
lbl_fn_8055408C_00000F8C:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r27)
    add r5, r3, r0
lbl_fn_8055408C_00000F98:
    cmpwi r5, 0x0
    beq lbl_fn_8055408C_00000FCC
    lfs f0, 0x1c(r5)
    addi r4, r1, 0xc8
    lfs f3, 0xc(r5)
    addi r3, r1, 0x128
    lfs f2, 0x2c(r5)
    stfs f3, 0xc8(r1)
    stfs f0, 0xcc(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0xd0(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x130(r1)
lbl_fn_8055408C_00000FCC:
    lfs f0, lbl_80887E34
    lfs f4, 0x128(r1)
    lfs f3, 0x140(r1)
    fcmpu cr0, f0, f30
    lfs f5, 0x12c(r1)
    fadds f6, f4, f3
    lfs f4, 0x144(r1)
    lfs f3, 0x130(r1)
    fadds f5, f5, f4
    lfs f0, 0x148(r1)
    stfs f6, 0x128(r1)
    fadds f4, f3, f0
    stfs f5, 0x12c(r1)
    stfs f4, 0x130(r1)
    bne lbl_fn_8055408C_0000141C
    mr r4, r31
    addi r3, r1, 0xbc
    bl fn_80010374
    lfs f3, 0x130(r1)
    addi r3, r1, 0x11c
    lfs f0, 0xc4(r1)
    lfs f5, 0x12c(r1)
    fsubs f6, f3, f0
    lfs f4, 0xc0(r1)
    lfs f3, 0x128(r1)
    lfs f0, 0xbc(r1)
    fsubs f4, f5, f4
    stfs f6, 0x124(r1)
    fsubs f0, f3, f0
    stfs f4, 0x120(r1)
    stfs f0, 0x11c(r1)
    bl fn_805F9940
    lfs f0, lbl_80887E30
    fcmpo cr0, f1, f0
    ble lbl_fn_8055408C_000013F8
    addi r3, r1, 0x11c
    mr r4, r3
    bl fn_805F98D0
    lfs f2, 0x124(r1)
    addi r3, r1, 0x11c
    lfs f0, lbl_80887E3C
    addi r27, r1, 0x110
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    frsp f3, f3
    stfs f2, 0x118(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8055408C_000010B4
    lfs f3, 0x110(r1)
    lfs f0, lbl_80887E30
    fcmpo cr0, f3, f0
    ble lbl_fn_8055408C_000010A8
    lfs f0, lbl_80887E40
    b lbl_fn_8055408C_000010AC
lbl_fn_8055408C_000010A8:
    lfs f0, lbl_80887E44
lbl_fn_8055408C_000010AC:
    stfs f0, 0x90(r1)
    b lbl_fn_8055408C_000010C8
lbl_fn_8055408C_000010B4:
    frsp f2, f2
    lfs f1, 0x110(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_8055408C_000010C8:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x1f0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80887E30
    addi r4, r1, 0x80
    lfs f29, 0x1f8(r1)
    mr r5, r4
    lfs f30, 0x1f4(r1)
    addi r3, r1, 0x220
    lfs f13, 0x1f0(r1)
    lfs f12, 0x208(r1)
    lfs f11, 0x204(r1)
    lfs f10, 0x200(r1)
    lfs f9, 0x218(r1)
    lfs f8, 0x214(r1)
    lfs f7, 0x210(r1)
    lfs f6, 0x21c(r1)
    lfs f5, 0x20c(r1)
    lfs f4, 0x1fc(r1)
    lfs f0, lbl_80887E34
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x118(r1)
    stfs f3, 0x250(r1)
    stfs f3, 0x254(r1)
    stfs f3, 0x258(r1)
    stfs f0, 0x25c(r1)
    stfs f13, 0x50(r1)
    stfs f30, 0x54(r1)
    stfs f29, 0x58(r1)
    stfs f13, 0x220(r1)
    stfs f30, 0x224(r1)
    stfs f29, 0x228(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x230(r1)
    stfs f11, 0x234(r1)
    stfs f12, 0x238(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x240(r1)
    stfs f8, 0x244(r1)
    stfs f9, 0x248(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x22c(r1)
    stfs f5, 0x23c(r1)
    stfs f6, 0x24c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80887E3C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8055408C_000011E4
    lfs f3, 0x84(r1)
    lfs f0, lbl_80887E30
    fcmpo cr0, f3, f0
    ble lbl_fn_8055408C_000011D4
    lfs f0, lbl_80887E40
    b lbl_fn_8055408C_000011D8
lbl_fn_8055408C_000011D4:
    lfs f0, lbl_80887E44
lbl_fn_8055408C_000011D8:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_8055408C_000011F8
lbl_fn_8055408C_000011E4:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_8055408C_000011F8:
    addi r3, r1, 0x8c
    lfs f2, lbl_80887E30
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r31
    stfs f2, 0x94(r1)
    addi r3, r1, 0xb0
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x118(r1)
    bl fn_800112E0
    lfs f2, 0xb8(r1)
    addi r3, r1, 0xb0
    lfs f0, lbl_80887E3C
    addi r27, r1, 0x104
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    frsp f3, f3
    stfs f2, 0x10c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8055408C_0000126C
    lfs f3, 0x104(r1)
    lfs f0, lbl_80887E30
    fcmpo cr0, f3, f0
    ble lbl_fn_8055408C_00001260
    lfs f0, lbl_80887E40
    b lbl_fn_8055408C_00001264
lbl_fn_8055408C_00001260:
    lfs f0, lbl_80887E44
lbl_fn_8055408C_00001264:
    stfs f0, 0x48(r1)
    b lbl_fn_8055408C_00001280
lbl_fn_8055408C_0000126C:
    frsp f2, f2
    lfs f1, 0x104(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8055408C_00001280:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x180
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80887E30
    addi r4, r1, 0x38
    lfs f30, 0x188(r1)
    mr r5, r4
    lfs f29, 0x184(r1)
    addi r3, r1, 0x1b0
    lfs f13, 0x180(r1)
    lfs f12, 0x198(r1)
    lfs f11, 0x194(r1)
    lfs f10, 0x190(r1)
    lfs f9, 0x1a8(r1)
    lfs f8, 0x1a4(r1)
    lfs f7, 0x1a0(r1)
    lfs f6, 0x1ac(r1)
    lfs f5, 0x19c(r1)
    lfs f4, 0x18c(r1)
    lfs f0, lbl_80887E34
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x10c(r1)
    stfs f3, 0x1e0(r1)
    stfs f3, 0x1e4(r1)
    stfs f3, 0x1e8(r1)
    stfs f0, 0x1ec(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x1b0(r1)
    stfs f29, 0x1b4(r1)
    stfs f30, 0x1b8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x1c0(r1)
    stfs f11, 0x1c4(r1)
    stfs f12, 0x1c8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x1d0(r1)
    stfs f8, 0x1d4(r1)
    stfs f9, 0x1d8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x1bc(r1)
    stfs f5, 0x1cc(r1)
    stfs f6, 0x1dc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80887E3C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8055408C_0000139C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80887E30
    fcmpo cr0, f3, f0
    ble lbl_fn_8055408C_0000138C
    lfs f0, lbl_80887E40
    b lbl_fn_8055408C_00001390
lbl_fn_8055408C_0000138C:
    lfs f0, lbl_80887E44
lbl_fn_8055408C_00001390:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8055408C_000013B0
lbl_fn_8055408C_0000139C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8055408C_000013B0:
    addi r3, r1, 0x44
    lfs f2, lbl_80887E30
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    frsp f0, f2
    lfs f3, 0x118(r1)
    lfs f6, 0x110(r1)
    lfs f4, 0x104(r1)
    fsubs f0, f3, f0
    lfs f5, 0x114(r1)
    fsubs f6, f6, f4
    lfs f4, 0x108(r1)
    stfs f2, 0x4c(r1)
    fsubs f3, f5, f4
    stfs f2, 0x10c(r1)
    stfs f6, 0x110(r1)
    stfs f3, 0x114(r1)
    stfs f0, 0x118(r1)
lbl_fn_8055408C_000013F8:
    addi r4, r1, 0x140
    lfs f2, 0x148(r1)
    stfs f2, 0x130(r1)
    addi r3, r1, 0x128
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f1, 0x100(r31), 0, 0
    stfs f2, 0x108(r31)
    b lbl_fn_8055408C_000014E8
lbl_fn_8055408C_0000141C:
    addi r3, r1, 0xf8
    psq_l f1, 0x100(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0xec
    lfs f2, 0x108(r31)
    lfs f3, 0xfc(r1)
    lfs f0, 0xf8(r1)
    fsubs f4, f4, f2
    fsubs f3, f5, f3
    stfs f2, 0x100(r1)
    fsubs f0, f6, f0
    stfs f3, 0xf0(r1)
    stfs f0, 0xec(r1)
    stfs f4, 0xf4(r1)
    bl fn_805F9940
    lfs f0, lbl_80887E30
    fmr f29, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8055408C_00001478
    fmuls f29, f1, f30
    addi r3, r1, 0xec
    mr r4, r3
    bl fn_805F98D0
lbl_fn_8055408C_00001478:
    lfs f0, 0xf4(r1)
    addi r4, r1, 0xa4
    lfs f4, 0xf0(r1)
    addi r3, r1, 0x128
    fmuls f6, f0, f29
    lfs f0, 0x100(r1)
    lfs f3, 0xec(r1)
    fmuls f5, f4, f29
    addi r5, r1, 0x134
    stfs f6, 0xa0(r1)
    fadds f7, f0, f6
    lfs f0, 0xf8(r1)
    fmuls f4, f3, f29
    lfs f3, 0xfc(r1)
    stfs f5, 0x9c(r1)
    fadds f3, f3, f5
    fadds f0, f0, f4
    stfs f4, 0x98(r1)
    fmr f2, f7
    stfs f0, 0xa4(r1)
    stfs f3, 0xa8(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x130(r1)
    frsp f2, f2
    stfs f7, 0xac(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x13c(r1)
lbl_fn_8055408C_000014E8:
    fmr f1, f31
    lis r8, lbl_807C7030@ha
    lfs f2, lbl_80887E30
    mr r3, r31
    mr r4, r30
    mr r5, r29
    mr r7, r28
    addi r6, r1, 0x128
    addi r8, r8, lbl_807C7030@l
    li r9, 0x0
    bl fn_80012D34
lbl_fn_8055408C_00001514:
    addi r11, r1, 0x280
    psq_l f31, 0x2a8(r1), 0, 0
    lfd f31, 0x2a0(r1)
    psq_l f30, 0x298(r1), 0, 0
    lfd f30, 0x290(r1)
    psq_l f29, 0x288(r1), 0, 0
    lfd f29, 0x280(r1)
    bl _restgpr_27
    lwz r0, 0x2b4(r1)
    mtlr r0
    addi r1, r1, 0x2b0
    blr
}

asm void fn_805549EC(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x40
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    stfd f29, 0x40(r1)
    psq_st f29, 0x48(r1), 0, 0
    bl _savegpr_27
    lis r0, 0x4330
    mr r28, r4
    stw r0, 0x8(r1)
    mr r3, r28
    stw r0, 0x10(r1)
    bl fn_805381CC
    lwz r0, 0x30(r28)
    lfs f31, 0x198(r3)
    cmpwi r0, 0xc
    ble lbl_fn_805549EC_000015A4
    lwz r3, 0x2c(r28)
    addi r3, r3, 0x60
    b lbl_fn_805549EC_000015A8
lbl_fn_805549EC_000015A4:
    li r3, 0x0
lbl_fn_805549EC_000015A8:
    cmpwi r0, 0xd
    lfs f30, 0x4(r3)
    ble lbl_fn_805549EC_000015C0
    lwz r3, 0x2c(r28)
    addi r3, r3, 0x68
    b lbl_fn_805549EC_000015C4
lbl_fn_805549EC_000015C0:
    li r3, 0x0
lbl_fn_805549EC_000015C4:
    cmpwi r0, 0x9
    lwz r31, 0x4(r3)
    ble lbl_fn_805549EC_000015DC
    lwz r3, 0x2c(r28)
    addi r3, r3, 0x48
    b lbl_fn_805549EC_000015E0
lbl_fn_805549EC_000015DC:
    li r3, 0x0
lbl_fn_805549EC_000015E0:
    lwz r30, 0x4(r3)
    mr r3, r28
    bl fn_805381A4
    mr r29, r3
    mr r3, r28
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r5, 0x10(r29)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805549EC_00001630
lbl_fn_805549EC_00001610:
    lwz r0, 0x164(r3)
    add r29, r0, r4
    lwz r0, 0x14(r29)
    cmpw r5, r0
    bne lbl_fn_805549EC_00001628
    b lbl_fn_805549EC_00001634
lbl_fn_805549EC_00001628:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_805549EC_00001610
lbl_fn_805549EC_00001630:
    li r29, 0x0
lbl_fn_805549EC_00001634:
    lwz r0, 0x30(r28)
    lwz r7, 0x10(r28)
    cmpwi r0, 0x0
    ble lbl_fn_805549EC_0000164C
    lwz r4, 0x2c(r28)
    b lbl_fn_805549EC_00001650
lbl_fn_805549EC_0000164C:
    li r4, 0x0
lbl_fn_805549EC_00001650:
    lwz r5, 0x168(r3)
    lwz r6, 0x4(r4)
    li r4, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_805549EC_00001684
lbl_fn_805549EC_00001668:
    lwz r5, 0x164(r3)
    add r5, r5, r4
    lwz r5, 0x14(r5)
    cmpw r6, r5
    beq lbl_fn_805549EC_00001684
    addi r4, r4, 0x1c0
    bdnz lbl_fn_805549EC_00001668
lbl_fn_805549EC_00001684:
    lwz r8, 0x1c(r28)
    lwz r6, 0x14(r28)
    cmpwi r8, 0x0
    subf r27, r7, r6
    ble lbl_fn_805549EC_000016D8
    xoris r4, r6, 0x8000
    stw r4, 0x14(r1)
    lis r5, lbl_8075E850@ha
    lfs f3, 0x198(r3)
    lfd f2, lbl_8075E850@l(r5)
    xoris r4, r8, 0x8000
    lfd f0, 0x10(r1)
    stw r4, 0xc(r1)
    fsubs f1, f0, f2
    lfd f0, 0x8(r1)
    fsubs f1, f1, f3
    fsubs f0, f0, f2
    fcmpo cr0, f1, f0
    bge lbl_fn_805549EC_000016D8
    li r3, 0x0
    b lbl_fn_805549EC_00001918
lbl_fn_805549EC_000016D8:
    cmpwi r31, 0x0
    beq lbl_fn_805549EC_000016F4
    fmr f1, f31
    mr r3, r28
    bl fn_80553A78
    li r3, 0x0
    b lbl_fn_805549EC_00001918
lbl_fn_805549EC_000016F4:
    lfs f0, lbl_80887E30
    li r9, 0x1
    fcmpo cr0, f30, f0
    cror eq, lt, eq
    bne lbl_fn_805549EC_0000170C
    li r9, 0x0
lbl_fn_805549EC_0000170C:
    lwz r5, 0x18(r28)
    lis r4, lbl_8075E850@ha
    lfd f1, lbl_8075E850@l(r4)
    add r31, r7, r5
    xoris r4, r31, 0x8000
    stw r4, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f0, f31
    bgt lbl_fn_805549EC_00001750
    subf r4, r8, r6
    xoris r4, r4, 0x8000
    stw r4, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f0, f31
    bge lbl_fn_805549EC_00001754
lbl_fn_805549EC_00001750:
    li r9, 0x0
lbl_fn_805549EC_00001754:
    cmpwi r9, 0x0
    beq lbl_fn_805549EC_000018B8
    lwz r4, 0x18c(r29)
    cmpwi r4, 0x0
    bgt lbl_fn_805549EC_00001890
    cmpwi r0, 0x0
    ble lbl_fn_805549EC_00001778
    lwz r4, 0x2c(r28)
    b lbl_fn_805549EC_0000177C
lbl_fn_805549EC_00001778:
    li r4, 0x0
lbl_fn_805549EC_0000177C:
    lwz r5, 0x168(r3)
    lwz r6, 0x4(r4)
    li r4, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_805549EC_000017B0
lbl_fn_805549EC_00001794:
    lwz r5, 0x164(r3)
    add r5, r5, r4
    lwz r5, 0x14(r5)
    cmpw r6, r5
    beq lbl_fn_805549EC_000017B0
    addi r4, r4, 0x1c0
    bdnz lbl_fn_805549EC_00001794
lbl_fn_805549EC_000017B0:
    cmpwi r0, 0xa
    ble lbl_fn_805549EC_000017C4
    lwz r3, 0x2c(r28)
    addi r3, r3, 0x50
    b lbl_fn_805549EC_000017C8
lbl_fn_805549EC_000017C4:
    li r3, 0x0
lbl_fn_805549EC_000017C8:
    lfs f1, 0x4(r3)
    cmpwi r0, 0xb
    lfs f0, lbl_80887E48
    fmuls f0, f0, f1
    fabs f0, f0
    frsp f31, f0
    ble lbl_fn_805549EC_000017F0
    lwz r3, 0x2c(r28)
    addi r3, r3, 0x58
    b lbl_fn_805549EC_000017F4
lbl_fn_805549EC_000017F0:
    li r3, 0x0
lbl_fn_805549EC_000017F4:
    lfs f1, 0x4(r3)
    lfs f0, lbl_80887E48
    fmuls f0, f0, f1
    fabs f0, f0
    frsp f29, f0
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0x14(r1)
    lis r28, lbl_8075E850@ha
    lfs f0, lbl_80887E58
    lfd f3, lbl_8075E850@l(r28)
    lfd f2, 0x10(r1)
    fmuls f0, f0, f29
    lfs f1, lbl_80887E60
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmuls f0, f0, f1
    fsubs f29, f0, f29
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0xc(r1)
    lfs f1, lbl_80887E58
    fctiwz f0, f30
    lfd f3, lbl_8075E850@l(r28)
    lfd f2, 0x8(r1)
    fmuls f1, f1, f31
    stfd f0, 0x18(r1)
    fsubs f3, f2, f3
    lfs f2, lbl_80887E60
    lfs f0, lbl_80887E30
    lwz r0, 0x1c(r1)
    fdivs f2, f3, f2
    fmuls f1, f1, f2
    fsubs f1, f1, f31
    stfs f1, 0x190(r29)
    stfs f29, 0x194(r29)
    stfs f0, 0x198(r29)
    stw r0, 0x18c(r29)
    b lbl_fn_805549EC_00001914
lbl_fn_805549EC_00001890:
    fmr f1, f30
    mr r3, r28
    mr r6, r30
    addi r4, r29, 0x19c
    addi r5, r29, 0x190
    bl fn_80553DCC
    lwz r3, 0x18c(r29)
    subi r0, r3, 0x1
    stw r0, 0x18c(r29)
    b lbl_fn_805549EC_00001914
lbl_fn_805549EC_000018B8:
    mr r3, r28
    bl fn_805381CC
    xoris r0, r31, 0x8000
    stw r0, 0x14(r1)
    lis r5, lbl_8075E850@ha
    lwz r4, lbl_8087F540
    lfd f1, lbl_8075E850@l(r5)
    lfd f0, 0x10(r1)
    lfs f2, 0x198(r3)
    fsubs f0, f0, f1
    lfs f3, 0xb4(r4)
    fsubs f1, f0, f2
    fcmpo cr0, f1, f3
    bge lbl_fn_805549EC_000018F4
    lfs f1, lbl_80887E30
lbl_fn_805549EC_000018F4:
    fmr f2, f31
    mr r3, r28
    mr r4, r27
    mr r6, r30
    addi r5, r29, 0x1a8
    bl fn_8055408C
    li r3, 0x0
    b lbl_fn_805549EC_00001918
lbl_fn_805549EC_00001914:
    li r3, 0x0
lbl_fn_805549EC_00001918:
    addi r11, r1, 0x40
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    psq_l f29, 0x48(r1), 0, 0
    lfd f29, 0x40(r1)
    bl _restgpr_27
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80554DF0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    mr r30, r4
    stw r29, 0x84(r1)
    stw r28, 0x80(r1)
    beq lbl_fn_80554DF0_0000198C
    cmpwi r5, 0x2
    beq lbl_fn_80554DF0_00001C90
    cmpwi r5, 0x3
    beq lbl_fn_80554DF0_00001D68
    cmpwi r5, 0x6
    beq lbl_fn_80554DF0_00001E98
    b lbl_fn_80554DF0_00001F0C
lbl_fn_80554DF0_0000198C:
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
    ble lbl_fn_80554DF0_000019D8
lbl_fn_80554DF0_000019B8:
    lwz r0, 0x164(r3)
    add r31, r0, r4
    lwz r0, 0x14(r31)
    cmpw r5, r0
    bne lbl_fn_80554DF0_000019D0
    b lbl_fn_80554DF0_000019DC
lbl_fn_80554DF0_000019D0:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80554DF0_000019B8
lbl_fn_80554DF0_000019D8:
    li r31, 0x0
lbl_fn_80554DF0_000019DC:
    lwz r7, 0x18(r30)
    cmpwi r7, 0x0
    lwz r8, 0x30(r30)
    cmpwi r8, 0x0
    ble lbl_fn_80554DF0_000019F8
    lwz r4, 0x2c(r30)
    b lbl_fn_80554DF0_000019FC
lbl_fn_80554DF0_000019F8:
    li r4, 0x0
lbl_fn_80554DF0_000019FC:
    lwz r0, 0x168(r3)
    lwz r6, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80554DF0_00001A34
lbl_fn_80554DF0_00001A14:
    lwz r0, 0x164(r3)
    add r5, r0, r4
    lwz r0, 0x14(r5)
    cmpw r6, r0
    bne lbl_fn_80554DF0_00001A2C
    b lbl_fn_80554DF0_00001A34
lbl_fn_80554DF0_00001A2C:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80554DF0_00001A14
lbl_fn_80554DF0_00001A34:
    cmpwi r8, 0x1
    cmpwi r8, 0x9
    ble lbl_fn_80554DF0_00001A4C
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x48
    b lbl_fn_80554DF0_00001A50
lbl_fn_80554DF0_00001A4C:
    li r3, 0x0
lbl_fn_80554DF0_00001A50:
    cmpwi r7, 0x0
    lwz r29, 0x4(r3)
    ble lbl_fn_80554DF0_00001A84
    cmpwi r8, 0xf
    ble lbl_fn_80554DF0_00001A70
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x78
    b lbl_fn_80554DF0_00001A74
lbl_fn_80554DF0_00001A70:
    li r3, 0x0
lbl_fn_80554DF0_00001A74:
    lwz r4, 0x4(r3)
    lwz r3, lbl_8087F540
    bl fn_8048B3B8
    stw r3, 0x138(r31)
lbl_fn_80554DF0_00001A84:
    cmpwi r29, 0x0
    beq lbl_fn_80554DF0_00001AC4
    lbz r0, 0x145(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80554DF0_00001C84
    lfs f2, lbl_80887E30
    addi r3, r1, 0x68
    stfs f2, 0x68(r1)
    li r0, 0x0
    stfs f2, 0x6c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0xf4(r31), 0, 0
    stfs f2, 0xfc(r31)
    stfs f2, 0x70(r1)
    stb r0, 0x145(r31)
    b lbl_fn_80554DF0_00001C84
lbl_fn_80554DF0_00001AC4:
    lbz r0, 0x145(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80554DF0_00001C84
    mr r4, r31
    addi r3, r1, 0x5c
    bl fn_80010374
    mr r3, r31
    bl fn_8001296C
    cmpwi r3, 0x0
    beq lbl_fn_80554DF0_00001C04
    lis r4, lbl_8075EB60@ha
    mr r3, r31
    addi r4, r4, lbl_8075EB60@l
    addi r29, r4, 0x14
    bl fn_8001296C
    mr r30, r3
    mr r4, r29
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80554DF0_00001B20
    li r28, 0x0
    b lbl_fn_80554DF0_00001B2C
lbl_fn_80554DF0_00001B20:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r30)
    add r28, r3, r0
lbl_fn_80554DF0_00001B2C:
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
    bge lbl_fn_80554DF0_00001B60
    li r4, 0x0
    b lbl_fn_80554DF0_00001B6C
lbl_fn_80554DF0_00001B60:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r29)
    add r4, r3, r0
lbl_fn_80554DF0_00001B6C:
    cmpwi r28, 0x0
    beq lbl_fn_80554DF0_00001C04
    cmpwi r4, 0x0
    beq lbl_fn_80554DF0_00001C04
    lfs f9, 0x1c(r4)
    addi r3, r1, 0x20
    lfs f7, 0x1c(r28)
    lfs f8, 0x2c(r4)
    fsubs f3, f7, f9
    lfs f10, 0xc(r4)
    lfs f4, 0x64(r1)
    lfs f0, 0x5c(r1)
    fadds f5, f9, f3
    lfs f3, 0x60(r1)
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
    stfs f10, 0x50(r1)
    stfs f8, 0x58(r1)
    stfs f5, 0x54(r1)
    stfs f12, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f11, 0x28(r1)
    bl fn_805F9940
    addi r4, r1, 0x50
    lfs f2, 0x58(r1)
    addi r3, r1, 0x5c
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x64(r1)
lbl_fn_80554DF0_00001C04:
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_800112E0
    lfs f5, lbl_80887E64
    addi r3, r1, 0x5c
    lfs f3, 0xc(r1)
    li r0, 0x0
    lfs f0, 0x8(r1)
    fmuls f7, f3, f5
    lfs f6, 0x10(r1)
    fmuls f8, f0, f5
    lfs f4, 0x5c(r1)
    fmuls f5, f6, f5
    lfs f0, 0x64(r1)
    fadds f4, f4, f8
    lfs f3, 0x60(r1)
    fadds f2, f0, f5
    stfs f8, 0x14(r1)
    fadds f0, f3, f7
    stfs f4, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f2, 0x64(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x100(r31), 0, 0
    stfs f2, 0x108(r31)
    stb r0, 0x145(r31)
    lfs f2, 0x64(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x1b4(r31), 0, 0
    stfs f7, 0x18(r1)
    stfs f5, 0x1c(r1)
    stfs f2, 0x1bc(r31)
lbl_fn_80554DF0_00001C84:
    li r0, 0x0
    stw r0, 0x18c(r31)
    b lbl_fn_80554DF0_00001F0C
lbl_fn_80554DF0_00001C90:
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
    ble lbl_fn_80554DF0_00001CDC
lbl_fn_80554DF0_00001CBC:
    lwz r0, 0x164(r3)
    add r29, r0, r4
    lwz r0, 0x14(r29)
    cmpw r5, r0
    bne lbl_fn_80554DF0_00001CD4
    b lbl_fn_80554DF0_00001CE0
lbl_fn_80554DF0_00001CD4:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80554DF0_00001CBC
lbl_fn_80554DF0_00001CDC:
    li r29, 0x0
lbl_fn_80554DF0_00001CE0:
    lwz r0, 0x18(r30)
    cmpwi r0, 0x0
    ble lbl_fn_80554DF0_00001CF8
    lwz r3, lbl_8087F540
    lwz r4, 0x138(r29)
    bl fn_8048C884
lbl_fn_80554DF0_00001CF8:
    lwz r0, 0x30(r30)
    cmpwi r0, 0x5
    ble lbl_fn_80554DF0_00001D10
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x28
    b lbl_fn_80554DF0_00001D14
lbl_fn_80554DF0_00001D10:
    li r3, 0x0
lbl_fn_80554DF0_00001D14:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80554DF0_00001F0C
    lwz r0, 0x1c(r30)
    cmpwi r0, 0x0
    ble lbl_fn_80554DF0_00001D58
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    lis r4, lbl_8075E850@ha
    stw r3, 0x7c(r1)
    lfd f4, lbl_8075E850@l(r4)
    stw r0, 0x78(r1)
    lfs f0, lbl_80887E58
    lfd f3, 0x78(r1)
    fsubs f3, f3, f4
    fdivs f1, f0, f3
    b lbl_fn_80554DF0_00001D5C
lbl_fn_80554DF0_00001D58:
    lfs f1, lbl_80887E34
lbl_fn_80554DF0_00001D5C:
    mr r3, r29
    bl fn_80013530
    b lbl_fn_80554DF0_00001F0C
lbl_fn_80554DF0_00001D68:
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
    ble lbl_fn_80554DF0_00001DB4
lbl_fn_80554DF0_00001D94:
    lwz r0, 0x164(r3)
    add r29, r0, r4
    lwz r0, 0x14(r29)
    cmpw r5, r0
    bne lbl_fn_80554DF0_00001DAC
    b lbl_fn_80554DF0_00001DB8
lbl_fn_80554DF0_00001DAC:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80554DF0_00001D94
lbl_fn_80554DF0_00001DB4:
    li r29, 0x0
lbl_fn_80554DF0_00001DB8:
    lwz r4, 0x30(r30)
    cmpwi r4, 0x5
    ble lbl_fn_80554DF0_00001DD0
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x28
    b lbl_fn_80554DF0_00001DD4
lbl_fn_80554DF0_00001DD0:
    li r3, 0x0
lbl_fn_80554DF0_00001DD4:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80554DF0_00001E08
    lfs f1, lbl_80887E34
    mr r3, r29
    bl fn_80013530
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    lfs f2, 0x8(r3)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x1a8(r29), 0, 0
    stfs f2, 0x1b0(r29)
    b lbl_fn_80554DF0_00001E98
lbl_fn_80554DF0_00001E08:
    cmpwi r4, 0x6
    ble lbl_fn_80554DF0_00001E1C
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x30
    b lbl_fn_80554DF0_00001E20
lbl_fn_80554DF0_00001E1C:
    li r3, 0x0
lbl_fn_80554DF0_00001E20:
    lfs f3, 0x4(r3)
    lfs f0, lbl_80887E48
    lwz r0, 0x30(r30)
    fmuls f0, f0, f3
    cmpwi r0, 0x7
    stfs f0, 0x44(r1)
    ble lbl_fn_80554DF0_00001E48
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x38
    b lbl_fn_80554DF0_00001E4C
lbl_fn_80554DF0_00001E48:
    li r3, 0x0
lbl_fn_80554DF0_00001E4C:
    lfs f3, 0x4(r3)
    lfs f0, lbl_80887E48
    lwz r0, 0x30(r30)
    fmuls f0, f0, f3
    cmpwi r0, 0x8
    stfs f0, 0x48(r1)
    ble lbl_fn_80554DF0_00001E74
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x40
    b lbl_fn_80554DF0_00001E78
lbl_fn_80554DF0_00001E74:
    li r3, 0x0
lbl_fn_80554DF0_00001E78:
    lfs f3, 0x4(r3)
    addi r3, r1, 0x44
    lfs f0, lbl_80887E48
    psq_l f1, 0x0(r3), 0, 0
    fmuls f2, f0, f3
    psq_st f1, 0x1a8(r29), 0, 0
    stfs f2, 0x4c(r1)
    stfs f2, 0x1b0(r29)
lbl_fn_80554DF0_00001E98:
    mr r3, r30
    bl fn_805381CC
    lwz r0, 0x30(r30)
    cmpwi r0, 0x0
    ble lbl_fn_80554DF0_00001EB4
    lwz r4, 0x2c(r30)
    b lbl_fn_80554DF0_00001EB8
lbl_fn_80554DF0_00001EB4:
    li r4, 0x0
lbl_fn_80554DF0_00001EB8:
    lwz r0, 0x168(r3)
    lwz r6, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80554DF0_00001EF0
lbl_fn_80554DF0_00001ED0:
    lwz r0, 0x164(r3)
    add r5, r0, r4
    lwz r0, 0x14(r5)
    cmpw r6, r0
    bne lbl_fn_80554DF0_00001EE8
    b lbl_fn_80554DF0_00001EF4
lbl_fn_80554DF0_00001EE8:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80554DF0_00001ED0
lbl_fn_80554DF0_00001EF0:
    li r5, 0x0
lbl_fn_80554DF0_00001EF4:
    lwz r0, 0x20(r5)
    cmpwi r0, 0x6
    bne lbl_fn_80554DF0_00001F0C
    mr r3, r30
    li r4, 0x2
    bl fn_80538DC8
lbl_fn_80554DF0_00001F0C:
    lwz r31, 0x8c(r1)
    li r3, 0x0
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}
