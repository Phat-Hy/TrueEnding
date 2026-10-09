#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8006F72C(void);
extern void fn_80092814(void);
extern void fn_800BFAC8(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800DC6B4(void);
extern void fn_80134250(void);
extern void fn_80134270(void);
extern void fn_801F6D7C(void);
extern void fn_801F80A8(void);
extern void fn_801FED24(void);
extern void fn_80202D00(void);
extern void fn_803B57B0(void);
extern void fn_803B6970(void);
extern void fn_803B6C88(void);
extern void fn_803B78E8(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80686A48(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_80750618[];
extern u8 lbl_80750690[];
extern u8 lbl_807506A0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885D58;
extern u32 lbl_80885D5C;
extern u32 lbl_80885D60;
extern u32 lbl_80885D68;
extern u32 lbl_80885DDC;
extern u32 lbl_80885DFC;
extern u32 lbl_80885E58;
extern u32 lbl_80885E5C;
extern u32 lbl_80885E68;
extern u32 lbl_80885E80;
extern u32 lbl_80885E84;
extern u32 lbl_80885E8C;
extern u32 lbl_80885EFC;
extern u32 lbl_80885F00;

/* Function declarations */
void fn_803E3BE8(void);
void fn_803E3C78(void);
void fn_803E4100(void);
void fn_803E41AC(void);
void fn_803E43A4(void);
void fn_803E43B8(void);
void fn_803E4434(void);
void fn_803E4478(void);
void fn_803E44C4(void);
void fn_803E4510(void);
void fn_803E454C(void);
void fn_803E4950(void);
void fn_803E4978(void);
void fn_803E4A20(void);
void fn_803E4A48(void);
void fn_803E4A5C(void);
void fn_803E4DD4(void);
void fn_803E4E58(void);
void fn_803E5200(void);

asm void fn_803E3BE8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f1
    stw r31, 0x14(r1)
    stw r30, 0x10(r1)
    mr r30, r5
    stw r29, 0xc(r1)
    mr r29, r4
    stw r28, 0x8(r1)
    mr r28, r3
    beq lbl_fn_803E3BE8_0000006C
    lwz r4, 0x2640(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803E3BE8_0000006C
    li r31, 0x0
    stw r31, 0xb4(r4)
    lwz r3, 0x2640(r3)
    bl fn_803B78E8
    fmr f1, f31
    lwz r3, 0x2640(r28)
    mr r4, r29
    mr r5, r30
    bl fn_803B6970
    stw r31, 0x2658(r28)
lbl_fn_803E3BE8_0000006C:
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    lwz r29, 0xc(r1)
    lwz r28, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803E3C78(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_26
    lwz r0, 0x0(r4)
    mr r28, r3
    mr r29, r4
    cmpwi r0, 0x0
    bne lbl_fn_803E3C78_0000010C
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803E3C78_000004F8
    li r0, 0x0
    lis r5, lbl_807C7030@ha
    stw r0, 0xd40(r3)
    addi r5, r5, lbl_807C7030@l
    addi r4, r3, 0xd44
    lfs f0, lbl_80885D58
    stw r0, 0xd50(r3)
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0xd4c(r3)
    psq_st f1, 0x0(r4), 0, 0
    stw r0, 0xd54(r3)
    stw r0, 0xd58(r3)
    stfs f0, 0xd5c(r3)
    stw r0, 0xd3c(r3)
    b lbl_fn_803E3C78_000004F8
lbl_fn_803E3C78_0000010C:
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_803E3C78_00000120
    lwz r27, 0x48(r3)
    b lbl_fn_803E3C78_00000124
lbl_fn_803E3C78_00000120:
    li r27, 0x0
lbl_fn_803E3C78_00000124:
    cmpwi r27, 0x0
    beq lbl_fn_803E3C78_000004F8
    lfs f3, 0xc(r4)
    addi r3, r1, 0x14
    lfs f0, 0x530(r27)
    li r31, -0x1
    lfs f5, 0x8(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r27)
    lfs f0, 0x528(r27)
    lfs f3, 0x4(r4)
    fsubs f4, f5, f4
    stfs f6, 0x1c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    bl fn_805F9920
    fmr f31, f1
    addi r26, r28, 0xc3c
    li r30, 0x0
    b lbl_fn_803E3C78_0000036C
lbl_fn_803E3C78_00000178:
    lfs f3, 0xc(r26)
    addi r3, r1, 0x8
    lfs f0, 0x530(r27)
    lfs f5, 0x8(r26)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r27)
    lfs f3, 0x4(r26)
    lfs f0, 0x528(r27)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9920
    fcmpo cr0, f31, f1
    bge lbl_fn_803E3C78_00000364
    lwz r0, 0xc38(r28)
    cmplwi r0, 0x8
    blt lbl_fn_803E3C78_000001D0
    lwz r3, 0xc38(r28)
    subi r0, r3, 0x1
    stw r0, 0xc38(r28)
lbl_fn_803E3C78_000001D0:
    slwi r0, r30, 5
    lwz r9, 0xc38(r28)
    add r4, r28, r0
    addi r3, r28, 0xc38
    addi r4, r4, 0xc3c
    slwi r5, r9, 5
    addi r0, r3, 0x4
    subf r0, r0, r4
    srawi r0, r0, 5
    addze r10, r0
    cmplw r9, r10
    subf r4, r10, r9
    ble lbl_fn_803E3C78_00000310
    srwi. r0, r4, 1
    mtctr r0
    beq lbl_fn_803E3C78_000002B8
lbl_fn_803E3C78_00000210:
    subi r8, r9, 0x1
    add r6, r3, r5
    slwi r8, r8, 5
    subi r5, r5, 0x20
    add r7, r3, r8
    lwz r0, 0x4(r7)
    subi r8, r9, 0x2
    stw r0, 0x4(r6)
    slwi r8, r8, 5
    subi r9, r9, 0x2
    lfs f2, 0x10(r7)
    psq_l f1, 0x8(r7), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lwz r0, 0x14(r7)
    stw r0, 0x14(r6)
    lwz r0, 0x18(r7)
    stw r0, 0x18(r6)
    lwz r0, 0x1c(r7)
    stw r0, 0x1c(r6)
    lfs f0, 0x20(r7)
    add r7, r3, r8
    stfs f0, 0x20(r6)
    add r6, r3, r5
    subi r5, r5, 0x20
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r7)
    psq_l f1, 0x8(r7), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lwz r0, 0x14(r7)
    stw r0, 0x14(r6)
    lwz r0, 0x18(r7)
    stw r0, 0x18(r6)
    lwz r0, 0x1c(r7)
    stw r0, 0x1c(r6)
    lfs f0, 0x20(r7)
    stfs f0, 0x20(r6)
    bdnz lbl_fn_803E3C78_00000210
    andi. r4, r4, 0x1
    beq lbl_fn_803E3C78_00000310
lbl_fn_803E3C78_000002B8:
    mtctr r4
lbl_fn_803E3C78_000002BC:
    subi r8, r9, 0x1
    add r6, r3, r5
    slwi r8, r8, 5
    subi r9, r9, 0x1
    add r7, r3, r8
    subi r5, r5, 0x20
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r7)
    psq_l f1, 0x8(r7), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lwz r0, 0x14(r7)
    stw r0, 0x14(r6)
    lwz r0, 0x18(r7)
    stw r0, 0x18(r6)
    lwz r0, 0x1c(r7)
    stw r0, 0x1c(r6)
    lfs f0, 0x20(r7)
    stfs f0, 0x20(r6)
    bdnz lbl_fn_803E3C78_000002BC
lbl_fn_803E3C78_00000310:
    slwi r4, r10, 5
    lwz r0, 0x0(r29)
    add r5, r3, r4
    psq_l f1, 0x4(r29), 0, 0
    stw r0, 0x4(r5)
    mr r31, r30
    lfs f2, 0xc(r29)
    psq_st f1, 0x8(r5), 0, 0
    lwz r0, 0x10(r29)
    stfs f2, 0x10(r5)
    lwz r4, 0x14(r29)
    stw r0, 0x14(r5)
    lwz r0, 0x18(r29)
    stw r4, 0x18(r5)
    lfs f0, 0x1c(r29)
    stw r0, 0x1c(r5)
    stfs f0, 0x20(r5)
    lwz r4, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
    b lbl_fn_803E3C78_00000378
lbl_fn_803E3C78_00000364:
    addi r26, r26, 0x20
    addi r30, r30, 0x1
lbl_fn_803E3C78_0000036C:
    lwz r0, 0xc38(r28)
    cmplw r30, r0
    blt lbl_fn_803E3C78_00000178
lbl_fn_803E3C78_00000378:
    cmpwi r31, 0x0
    bge lbl_fn_803E3C78_000003EC
    lwz r0, 0xc38(r28)
    cmplwi r0, 0x8
    bge lbl_fn_803E3C78_000003EC
    lwz r0, 0xc38(r28)
    addi r4, r28, 0xc38
    slwi r0, r0, 5
    add r0, r4, r0
    addic. r3, r0, 0x4
    beq lbl_fn_803E3C78_000003DC
    lwz r0, 0x0(r29)
    stw r0, 0x0(r3)
    psq_l f1, 0x4(r29), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r29)
    stfs f2, 0xc(r3)
    lwz r0, 0x10(r29)
    stw r0, 0x10(r3)
    lwz r0, 0x14(r29)
    stw r0, 0x14(r3)
    lwz r0, 0x18(r29)
    stw r0, 0x18(r3)
    lfs f0, 0x1c(r29)
    stfs f0, 0x1c(r3)
lbl_fn_803E3C78_000003DC:
    lwz r3, 0x0(r4)
    addi r3, r3, 0x1
    stw r3, 0x0(r4)
    subi r31, r3, 0x1
lbl_fn_803E3C78_000003EC:
    cmpwi cr1, r31, 0x0
    blt cr1, lbl_fn_803E3C78_00000474
    lwz r0, 0x14(r29)
    cmpwi r0, 0x0
    beq lbl_fn_803E3C78_00000474
    li r3, 0x0
    mtctr r31
    ble cr1, lbl_fn_803E3C78_00000438
lbl_fn_803E3C78_0000040C:
    add r4, r28, r3
    lwz r0, 0xc50(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803E3C78_00000430
    slwi r3, r31, 5
    li r0, 0x0
    add r3, r28, r3
    stw r0, 0xc50(r3)
    b lbl_fn_803E3C78_00000438
lbl_fn_803E3C78_00000430:
    addi r3, r3, 0x20
    bdnz lbl_fn_803E3C78_0000040C
lbl_fn_803E3C78_00000438:
    addi r5, r31, 0x1
    li r3, 0x0
    slwi r0, r5, 5
    add r4, r28, r0
    addi r4, r4, 0xc3c
    b lbl_fn_803E3C78_00000468
lbl_fn_803E3C78_00000450:
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803E3C78_00000460
    stw r3, 0x14(r4)
lbl_fn_803E3C78_00000460:
    addi r4, r4, 0x20
    addi r5, r5, 0x1
lbl_fn_803E3C78_00000468:
    lwz r0, 0xc38(r28)
    cmplw r5, r0
    blt lbl_fn_803E3C78_00000450
lbl_fn_803E3C78_00000474:
    lwz r0, 0xc38(r28)
    mr r3, r28
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803E3C78_000004F8
lbl_fn_803E3C78_0000048C:
    lwz r0, 0xc50(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803E3C78_000004EC
    slwi r0, r4, 5
    addi r5, r28, 0xd44
    add r4, r28, r0
    lwz r3, 0xc3c(r4)
    addi r6, r4, 0xc40
    stw r3, 0xd40(r28)
    li r0, 0x1
    psq_l f1, 0x0(r6), 0, 0
    lfs f2, 0xc48(r4)
    stfs f2, 0xd4c(r28)
    psq_st f1, 0x0(r5), 0, 0
    lwz r3, 0xc4c(r4)
    stw r3, 0xd50(r28)
    lwz r3, 0xc50(r4)
    stw r3, 0xd54(r28)
    lwz r3, 0xc54(r4)
    stw r3, 0xd58(r28)
    lfs f0, 0xc58(r4)
    stfs f0, 0xd5c(r28)
    stw r0, 0xd3c(r28)
    b lbl_fn_803E3C78_000004F8
lbl_fn_803E3C78_000004EC:
    addi r3, r3, 0x20
    addi r4, r4, 0x1
    bdnz lbl_fn_803E3C78_0000048C
lbl_fn_803E3C78_000004F8:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_803E4100(void)
{
    nofralloc
    li r0, 0x0
    li r4, -0x1
    stw r4, 0x748(r3)
    lwz r5, 0x814(r3)
    stw r4, 0x74c(r3)
    stw r4, 0x750(r3)
    stw r0, 0x754(r3)
    stw r0, 0x758(r3)
    stw r0, 0x75c(r3)
    stw r0, 0x760(r3)
    stw r4, 0x764(r3)
    stw r4, 0x768(r3)
    stw r4, 0x76c(r3)
    stw r0, 0x770(r3)
    stw r0, 0x774(r3)
    stw r0, 0x778(r3)
    stw r0, 0x77c(r3)
    stw r4, 0x780(r3)
    stw r4, 0x784(r3)
    stw r4, 0x788(r3)
    stw r0, 0x78c(r3)
    stw r0, 0x790(r3)
    stw r0, 0x794(r3)
    stw r0, 0x798(r3)
    lfs f0, 0xa0(r5)
    stfs f0, 0x100(r5)
    lwz r4, 0x81c(r3)
    lfs f0, 0xa0(r4)
    stfs f0, 0x100(r4)
    lwz r4, 0x824(r3)
    lfs f0, 0xa0(r4)
    stfs f0, 0x100(r4)
    lwz r4, 0x818(r3)
    lfs f0, 0xa0(r4)
    stfs f0, 0x100(r4)
    lwz r4, 0x820(r3)
    lfs f0, 0xa0(r4)
    stfs f0, 0x100(r4)
    lwz r4, 0x828(r3)
    lfs f0, 0xa0(r4)
    stfs f0, 0x100(r4)
    stw r0, 0x834(r3)
    blr
}

asm void fn_803E41AC(void)
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
    stw r29, 0x34(r1)
    lwz r5, 0x1104(r3)
    cmpwi r5, 0x0
    beq lbl_fn_803E41AC_00000798
    lfs f0, lbl_80885D58
    cmpwi r4, 0x0
    stfs f0, 0x100(r5)
    li r0, 0x0
    lfs f1, lbl_80885D60
    lwz r5, 0x1104(r3)
    stfs f1, 0x104(r5)
    lwz r5, 0x1108(r3)
    stfs f0, 0x100(r5)
    lwz r5, 0x1108(r3)
    stfs f1, 0x104(r5)
    lwz r5, 0x1110(r3)
    stfs f0, 0x100(r5)
    lwz r5, 0x1110(r3)
    stfs f1, 0x104(r5)
    lwz r5, 0x1114(r3)
    stfs f0, 0x100(r5)
    lwz r5, 0x1114(r3)
    stfs f1, 0x104(r5)
    stw r4, 0x110c(r3)
    stw r0, 0x1118(r3)
    stw r0, 0x111c(r3)
    stw r0, 0x112c(r3)
    stw r0, 0x1120(r3)
    stw r0, 0x1124(r3)
    stw r0, 0x1128(r3)
    stw r0, 0x1130(r3)
    beq lbl_fn_803E41AC_00000798
    lis r30, lbl_807506A0@ha
    addi r3, r1, 0x8
    addi r30, r30, lbl_807506A0@l
    li r5, 0x0
    addi r4, r30, 0x1551
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, 0x110c(r31)
    addi r4, r30, 0x10c1
    li r5, 0x0
    addi r30, r3, 0xb0
    mr r3, r30
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803E41AC_000006B4
    li r4, 0x0
    b lbl_fn_803E41AC_000006C0
lbl_fn_803E41AC_000006B4:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r30)
    add r4, r3, r0
lbl_fn_803E41AC_000006C0:
    lfs f2, 0x1c(r4)
    addi r3, r1, 0xc
    lfs f0, lbl_80885DDC
    addi r5, r1, 0x18
    lfs f1, 0x2c(r4)
    lfs f3, 0xc(r4)
    fadds f0, f2, f0
    stfs f3, 0x18(r1)
    lwz r4, lbl_8087EFB4
    stfs f1, 0x20(r1)
    stfs f0, 0x1c(r1)
    bl fn_800BFAC8
    lwz r4, 0x1104(r31)
    lis r30, lbl_807506A0@ha
    addi r30, r30, lbl_807506A0@l
    lfs f31, 0xc(r1)
    addi r3, r30, 0x10a2
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x1104(r31)
    addi r3, r30, 0x10a2
    lfs f31, 0x10(r1)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x1
    bl fn_801FED24
    lwz r4, 0x1108(r31)
    addi r3, r30, 0x10a2
    lfs f31, 0xc(r1)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x1108(r31)
    addi r3, r30, 0x10a2
    lfs f31, 0x10(r1)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x1
    bl fn_801FED24
lbl_fn_803E41AC_00000798:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_803E43A4(void)
{
    nofralloc
    lwz r3, 0x1130(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_803E43B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    beq lbl_fn_803E43B8_0000082C
    lis r4, lbl_80750618@ha
    li r5, 0x1
    addi r4, r4, lbl_80750618@l
    li r6, 0x0
    li r0, 0x8
    stw r5, 0xd8c(r3)
    lwz r4, 0xc(r4)
    li r5, 0x0
    stw r6, 0xd84(r3)
    li r6, -0x1
    lfs f1, lbl_80885DFC
    stw r0, 0xd7c(r3)
    addi r3, r1, 0x8
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803E43B8_0000083C
lbl_fn_803E43B8_0000082C:
    li r0, 0x0
    stw r0, 0xd8c(r3)
    stw r0, 0xd88(r3)
    stw r0, 0xd84(r3)
lbl_fn_803E43B8_0000083C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803E4434(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_803E4434_00000878
    li r6, 0x2
    li r5, 0x0
    li r4, 0x1
    li r0, 0x5
    stw r6, 0xd8c(r3)
    stw r5, 0xd84(r3)
    stw r4, 0xd80(r3)
    stw r0, 0xd7c(r3)
    blr
lbl_fn_803E4434_00000878:
    li r0, 0x0
    stw r0, 0xd8c(r3)
    stw r0, 0xd88(r3)
    stw r0, 0xd80(r3)
    stw r0, 0xd84(r3)
    blr
}

asm void fn_803E4478(void)
{
    nofralloc
    lwz r4, 0xd70(r3)
    li r0, 0x0
    stw r0, 0xd78(r3)
    cmpwi r4, 0x0
    stw r0, 0xd8c(r3)
    stw r0, 0xd88(r3)
    stw r0, 0xd84(r3)
    stw r0, 0xd80(r3)
    beq lbl_fn_803E4478_000008C0
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_803E4478_000008C0:
    lwz r3, 0xd74(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blr
}

asm void fn_803E44C4(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_803E44C4_00000900
    li r4, 0x1
    li r0, 0x0
    stw r4, 0x2644(r3)
    stw r5, 0x2648(r3)
    stw r6, 0x264c(r3)
    stw r0, 0x2650(r3)
    blr
lbl_fn_803E44C4_00000900:
    lwz r0, 0x2644(r3)
    cmpwi r0, 0x0
    beqlr
    lwz r0, 0x2648(r3)
    cmpw r0, r5
    bnelr
    lwz r4, 0x264c(r3)
    addi r0, r4, 0x1
    stw r0, 0x2650(r3)
    blr
}

asm void fn_803E4510(void)
{
    nofralloc
    lwz r5, 0x2654(r3)
    li r4, 0x0
    li r0, 0x2d
    stw r4, 0x2644(r3)
    cmpwi r5, 0x0
    stw r4, 0x2648(r3)
    stw r0, 0x264c(r3)
    stw r4, 0x2650(r3)
    beqlr
    lfs f0, lbl_80885D5C
    stfs f0, 0x104(r5)
    lfs f0, lbl_80885D58
    lwz r3, 0x2654(r3)
    stfs f0, 0x100(r3)
    blr
}

asm void fn_803E454C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl fn_803E41AC
    lwz r3, 0x263c(r31)
    li r4, 0x1
    bl fn_803B57B0
    lwz r3, 0x2640(r31)
    li r4, 0x1
    bl fn_803B6C88
    li r4, 0x0
    li r3, -0x1
    stw r4, 0x114c(r31)
    li r0, 0x2
    lwz r5, 0x814(r31)
    mr r6, r31
    stw r4, 0x110c(r31)
    lfs f0, lbl_80885D58
    stw r4, 0x1170(r31)
    stw r4, 0x15b4(r31)
    stw r4, 0x2658(r31)
    stw r3, 0x748(r31)
    stw r3, 0x74c(r31)
    stw r3, 0x750(r31)
    stw r4, 0x754(r31)
    stw r4, 0x758(r31)
    stw r4, 0x75c(r31)
    stw r4, 0x760(r31)
    stw r3, 0x764(r31)
    stw r3, 0x768(r31)
    stw r3, 0x76c(r31)
    stw r4, 0x770(r31)
    stw r4, 0x774(r31)
    stw r4, 0x778(r31)
    stw r4, 0x77c(r31)
    stw r3, 0x780(r31)
    stw r3, 0x784(r31)
    stw r3, 0x788(r31)
    stw r4, 0x78c(r31)
    stw r4, 0x790(r31)
    stw r4, 0x794(r31)
    stw r4, 0x798(r31)
    lfs f3, 0xa0(r5)
    stfs f3, 0x100(r5)
    lwz r3, 0x81c(r31)
    lfs f3, 0xa0(r3)
    stfs f3, 0x100(r3)
    lwz r3, 0x824(r31)
    lfs f3, 0xa0(r3)
    stfs f3, 0x100(r3)
    lwz r3, 0x818(r31)
    lfs f3, 0xa0(r3)
    stfs f3, 0x100(r3)
    lwz r3, 0x820(r31)
    lfs f3, 0xa0(r3)
    stfs f3, 0x100(r3)
    lwz r3, 0x828(r31)
    lfs f3, 0xa0(r3)
    stfs f3, 0x100(r3)
    stw r4, 0x834(r31)
    stw r4, 0x80(r31)
    stw r4, 0x84(r31)
    stw r4, 0x88(r31)
    stfs f0, 0x8c(r31)
    stw r4, 0x90(r31)
    stfs f0, 0x94(r31)
    stw r4, 0x98(r31)
    stw r4, 0x9c(r31)
    stw r4, 0xa4(r31)
    stw r4, 0xa8(r31)
    stw r4, 0xac(r31)
    mtctr r0
lbl_fn_803E454C_00000A98:
    stw r4, 0xe0(r6)
    stw r4, 0xe4(r6)
    stw r4, 0xe8(r6)
    stfs f0, 0xec(r6)
    stw r4, 0xf0(r6)
    stfs f0, 0xf4(r6)
    stw r4, 0xf8(r6)
    stw r4, 0xfc(r6)
    stw r4, 0x104(r6)
    stw r4, 0x108(r6)
    stw r4, 0x10c(r6)
    stw r4, 0x140(r6)
    stw r4, 0x144(r6)
    stw r4, 0x148(r6)
    stfs f0, 0x14c(r6)
    stw r4, 0x150(r6)
    stfs f0, 0x154(r6)
    stw r4, 0x158(r6)
    stw r4, 0x15c(r6)
    stw r4, 0x164(r6)
    stw r4, 0x168(r6)
    stw r4, 0x16c(r6)
    stw r4, 0x1a0(r6)
    stw r4, 0x1a4(r6)
    stw r4, 0x1a8(r6)
    stfs f0, 0x1ac(r6)
    stw r4, 0x1b0(r6)
    stfs f0, 0x1b4(r6)
    stw r4, 0x1b8(r6)
    stw r4, 0x1bc(r6)
    stw r4, 0x1c4(r6)
    stw r4, 0x1c8(r6)
    stw r4, 0x1cc(r6)
    addi r6, r6, 0x120
    bdnz lbl_fn_803E454C_00000A98
    li r29, 0x0
    stw r29, 0xd90(r31)
    addi r3, r31, 0x748
    addi r4, r31, 0x764
    stw r29, 0xda4(r31)
    li r5, 0x1c
    stw r29, 0xda8(r31)
    stw r29, 0xdac(r31)
    stw r29, 0x25cc(r31)
    stw r29, 0x2568(r31)
    bl memcpy
    li r30, -0x1
    stw r30, 0x764(r31)
    addi r3, r31, 0x7f8
    addi r4, r31, 0x7c0
    stw r30, 0x768(r31)
    li r5, 0x1c
    stw r30, 0x76c(r31)
    stw r29, 0x770(r31)
    stw r29, 0x774(r31)
    stw r29, 0x778(r31)
    stw r29, 0x77c(r31)
    bl memcpy
    lwz r3, 0x1140(r31)
    lwz r0, 0x310(r31)
    cmpwi r3, 0x0
    stw r30, 0x7c0(r31)
    subf r0, r0, r0
    stw r30, 0x7c4(r31)
    stw r30, 0x7c8(r31)
    stw r29, 0x7cc(r31)
    stw r29, 0x7d0(r31)
    stw r29, 0x7d4(r31)
    stw r29, 0x7d8(r31)
    stw r0, 0x310(r31)
    stw r29, 0x85c(r31)
    stw r29, 0x1150(r31)
    beq lbl_fn_803E454C_00000BC4
    lfs f0, lbl_80885D58
    stfs f0, 0x100(r3)
lbl_fn_803E454C_00000BC4:
    lwz r3, 0x1144(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803E454C_00000BD8
    lfs f0, lbl_80885D58
    stfs f0, 0x100(r3)
lbl_fn_803E454C_00000BD8:
    li r0, 0x2
    mr r5, r31
    li r4, 0x0
    li r3, -0x1
    mtctr r0
lbl_fn_803E454C_00000BEC:
    stw r4, 0xf94(r5)
    stw r3, 0x1014(r5)
    stw r4, 0xf98(r5)
    stw r3, 0x1018(r5)
    stw r4, 0xf9c(r5)
    stw r3, 0x101c(r5)
    stw r4, 0xfa0(r5)
    stw r3, 0x1020(r5)
    stw r4, 0xfa4(r5)
    stw r3, 0x1024(r5)
    stw r4, 0xfa8(r5)
    stw r3, 0x1028(r5)
    stw r4, 0xfac(r5)
    stw r3, 0x102c(r5)
    stw r4, 0xfb0(r5)
    stw r3, 0x1030(r5)
    stw r4, 0xfb4(r5)
    stw r3, 0x1034(r5)
    stw r4, 0xfb8(r5)
    stw r3, 0x1038(r5)
    stw r4, 0xfbc(r5)
    stw r3, 0x103c(r5)
    stw r4, 0xfc0(r5)
    stw r3, 0x1040(r5)
    stw r4, 0xfc4(r5)
    stw r3, 0x1044(r5)
    stw r4, 0xfc8(r5)
    stw r3, 0x1048(r5)
    stw r4, 0xfcc(r5)
    stw r3, 0x104c(r5)
    stw r4, 0xfd0(r5)
    stw r3, 0x1050(r5)
    addi r5, r5, 0x40
    bdnz lbl_fn_803E454C_00000BEC
    li r6, 0x0
    lis r4, lbl_807C7030@ha
    lwz r5, 0x2654(r31)
    addi r4, r4, lbl_807C7030@l
    stw r6, 0x10d4(r31)
    addi r3, r31, 0xd44
    cmpwi r5, 0x0
    lfs f3, lbl_80885D58
    stw r6, 0x10d8(r31)
    li r0, 0x2d
    stw r6, 0x10dc(r31)
    stw r6, 0x10e0(r31)
    stw r6, 0x10e4(r31)
    stw r6, 0x10e8(r31)
    stw r6, 0x10ec(r31)
    stw r6, 0x10f0(r31)
    stw r6, 0x2620(r31)
    stw r6, 0x2624(r31)
    stw r6, 0x3f0(r31)
    stw r6, 0xc38(r31)
    stw r6, 0xd40(r31)
    stw r6, 0xd50(r31)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0xd4c(r31)
    psq_st f1, 0x0(r3), 0, 0
    stw r6, 0xd54(r31)
    stw r6, 0xd58(r31)
    stfs f3, 0xd5c(r31)
    stw r6, 0xd3c(r31)
    stw r6, 0x2644(r31)
    stw r6, 0x2648(r31)
    stw r0, 0x264c(r31)
    stw r6, 0x2650(r31)
    beq lbl_fn_803E454C_00000D10
    lfs f0, lbl_80885D5C
    stfs f0, 0x104(r5)
    lwz r3, 0x2654(r31)
    stfs f3, 0x100(r3)
lbl_fn_803E454C_00000D10:
    lwz r0, 0xd8c(r31)
    cmpwi r0, 0x1
    bne lbl_fn_803E454C_00000D2C
    li r0, 0x0
    stw r0, 0xd8c(r31)
    stw r0, 0xd88(r31)
    stw r0, 0xd84(r31)
lbl_fn_803E454C_00000D2C:
    lwz r0, 0xd8c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_803E454C_00000D4C
    li r0, 0x0
    stw r0, 0xd8c(r31)
    stw r0, 0xd88(r31)
    stw r0, 0xd80(r31)
    stw r0, 0xd84(r31)
lbl_fn_803E454C_00000D4C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803E4950(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0xd90(r3)
    lwz r4, 0xdb4(r3)
    stw r0, 0xdb0(r3)
    lfs f0, lbl_80885D58
    stfs f0, 0x100(r4)
    lfs f0, lbl_80885D5C
    lwz r3, 0xdb4(r3)
    stfs f0, 0x104(r3)
    blr
}

asm void fn_803E4978(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_803E4978_00000E1C
    lwz r0, 0xd98(r3)
    li r5, 0x1
    li r4, 0x0
    stw r5, 0xd90(r3)
    srwi. r0, r0, 31
    stw r4, 0xd94(r3)
    bne lbl_fn_803E4978_00000DE0
    lbz r0, 0xd98(r3)
    clrlwi r31, r0, 25
    b lbl_fn_803E4978_00000DE4
lbl_fn_803E4978_00000DE0:
    lwz r31, 0xd9c(r3)
lbl_fn_803E4978_00000DE4:
    lbz r0, 0xc(r1)
    mr r3, r30
    stb r0, 0x8(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r5, r31
    mr r6, r30
    addi r3, r29, 0xd98
    addi r8, r1, 0x8
    add r7, r30, r0
    li r4, 0x0
    bl fn_8006F72C
    li r0, 0x2
    stw r0, 0xdb0(r29)
lbl_fn_803E4978_00000E1C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803E4A20(void)
{
    nofralloc
    cmpwi r4, 0x0
    beqlr
    li r6, 0x1
    li r0, 0x2
    stw r6, 0xd90(r3)
    stw r6, 0xd94(r3)
    stw r4, 0xda4(r3)
    stw r5, 0xda8(r3)
    stw r0, 0xdb0(r3)
    blr
}

asm void fn_803E4A48(void)
{
    nofralloc
    lwz r3, 0xdb4(r3)
    lfs f0, lbl_80885E68
    lfs f1, 0x100(r3)
    fdivs f1, f1, f0
    blr
}

asm void fn_803E4A5C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_27
    lwz r6, lbl_8087F8A0
    mr r30, r5
    mr r28, r3
    mr r29, r4
    lwz r5, 0x48(r6)
    cmpwi r5, 0x0
    beq lbl_fn_803E4A5C_00000EC0
    lfs f2, 0x530(r5)
    addi r3, r1, 0x1c
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x24(r1)
lbl_fn_803E4A5C_00000EC0:
    li r0, 0x0
    stw r0, 0x0(r4)
    lwz r3, lbl_8087F408
    lwz r31, 0x48(r3)
    b lbl_fn_803E4A5C_000011C4
lbl_fn_803E4A5C_00000ED4:
    lwz r6, 0x38(r31)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803E4A5C_00000F00
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_803E4A5C_00000F00
    li r5, 0x1
lbl_fn_803E4A5C_00000F00:
    cmpwi r5, 0x0
    beq lbl_fn_803E4A5C_00000F1C
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_803E4A5C_00000F1C
    li r3, 0x1
lbl_fn_803E4A5C_00000F1C:
    cmpwi r3, 0x0
    beq lbl_fn_803E4A5C_00000F50
    lwz r0, 0x55c(r31)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_803E4A5C_00000F44
    lwz r0, 0x560(r31)
    cmpwi r0, 0x1c
    bne lbl_fn_803E4A5C_00000F44
    li r3, 0x1
lbl_fn_803E4A5C_00000F44:
    cmpwi r3, 0x0
    bne lbl_fn_803E4A5C_00000F50
    li r4, 0x1
lbl_fn_803E4A5C_00000F50:
    cmpwi r4, 0x0
    beq lbl_fn_803E4A5C_000011C0
    lwz r0, 0x54c(r31)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_803E4A5C_000011C0
    lwz r0, 0xd18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803E4A5C_000011C0
    lwz r0, 0x12a4(r31)
    extrwi r0, r0, 1, 5
    cmplwi r0, 0x1
    bne lbl_fn_803E4A5C_000011C0
    lfs f3, 0x24(r1)
    addi r3, r1, 0x10
    lfs f0, 0x530(r31)
    lfs f5, 0x20(r1)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f0, 0x528(r31)
    lfs f3, 0x1c(r1)
    fsubs f4, f5, f4
    stfs f6, 0x18(r1)
    fsubs f0, f3, f0
    stfs f4, 0x14(r1)
    stfs f0, 0x10(r1)
    bl fn_805F9920
    fmr f31, f1
    cmpwi r30, 0x0
    li r27, 0x0
    beq lbl_fn_803E4A5C_00000FE8
    mr r12, r30
    mr r3, r31
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803E4A5C_00000FE8
    li r27, 0x1
lbl_fn_803E4A5C_00000FE8:
    cmpwi r27, 0x0
    beq lbl_fn_803E4A5C_000011C0
    lwz r0, 0x2788(r28)
    mr r3, r29
    stfs f31, 0x8(r1)
    li r4, 0x0
    li r5, 0x0
    stw r31, 0xc(r1)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803E4A5C_0000117C
lbl_fn_803E4A5C_00001014:
    lfs f0, 0x4(r3)
    fcmpo cr0, f0, f31
    bge lbl_fn_803E4A5C_00001170
    lwz r0, 0x0(r29)
    cmplwi r0, 0x20
    blt lbl_fn_803E4A5C_00001038
    lwz r3, 0x0(r29)
    subi r0, r3, 0x1
    stw r0, 0x0(r29)
lbl_fn_803E4A5C_00001038:
    slwi r0, r5, 3
    lwz r6, 0x0(r29)
    srawi r0, r0, 3
    addze r4, r0
    cmplw cr1, r6, r4
    ble cr1, lbl_fn_803E4A5C_00001144
    subf r0, r4, r6
    addi r5, r4, 0x8
    cmplwi r0, 0x8
    ble lbl_fn_803E4A5C_00001110
    blt cr1, lbl_fn_803E4A5C_00001110
    addi r0, r6, 0x7
    slwi r3, r6, 3
    subf r0, r5, r0
    srwi r0, r0, 3
    add r3, r29, r3
    mtctr r0
    cmplw r6, r5
    ble lbl_fn_803E4A5C_00001110
lbl_fn_803E4A5C_00001084:
    lfs f0, -0x4(r3)
    subi r6, r6, 0x8
    stfs f0, 0x4(r3)
    lwz r0, 0x0(r3)
    stw r0, 0x8(r3)
    lfs f0, -0xc(r3)
    stfs f0, -0x4(r3)
    lwz r0, -0x8(r3)
    stw r0, 0x0(r3)
    lfs f0, -0x14(r3)
    stfs f0, -0xc(r3)
    lwz r0, -0x10(r3)
    stw r0, -0x8(r3)
    lfs f0, -0x1c(r3)
    stfs f0, -0x14(r3)
    lwz r0, -0x18(r3)
    stw r0, -0x10(r3)
    lfs f0, -0x24(r3)
    stfs f0, -0x1c(r3)
    lwz r0, -0x20(r3)
    stw r0, -0x18(r3)
    lfs f0, -0x2c(r3)
    stfs f0, -0x24(r3)
    lwz r0, -0x28(r3)
    stw r0, -0x20(r3)
    lfs f0, -0x34(r3)
    stfs f0, -0x2c(r3)
    lwz r0, -0x30(r3)
    stw r0, -0x28(r3)
    lfs f0, -0x3c(r3)
    stfs f0, -0x34(r3)
    lwz r0, -0x38(r3)
    stw r0, -0x30(r3)
    subi r3, r3, 0x40
    bdnz lbl_fn_803E4A5C_00001084
lbl_fn_803E4A5C_00001110:
    slwi r3, r6, 3
    subf r0, r4, r6
    add r3, r29, r3
    mtctr r0
    cmplw r6, r4
    ble lbl_fn_803E4A5C_00001144
lbl_fn_803E4A5C_00001128:
    lfs f0, -0x4(r3)
    subi r6, r6, 0x1
    stfs f0, 0x4(r3)
    lwz r0, 0x0(r3)
    stw r0, 0x8(r3)
    subi r3, r3, 0x8
    bdnz lbl_fn_803E4A5C_00001128
lbl_fn_803E4A5C_00001144:
    slwi r0, r4, 3
    lfs f0, 0x8(r1)
    add r3, r29, r0
    lwz r0, 0xc(r1)
    stfs f0, 0x4(r3)
    li r4, 0x1
    stw r0, 0x8(r3)
    lwz r3, 0x0(r29)
    addi r0, r3, 0x1
    stw r0, 0x0(r29)
    b lbl_fn_803E4A5C_0000117C
lbl_fn_803E4A5C_00001170:
    addi r3, r3, 0x8
    addi r5, r5, 0x1
    bdnz lbl_fn_803E4A5C_00001014
lbl_fn_803E4A5C_0000117C:
    cmpwi r4, 0x0
    bne lbl_fn_803E4A5C_000011C0
    lwz r0, 0x0(r29)
    cmplwi r0, 0x20
    bge lbl_fn_803E4A5C_000011C0
    lwz r0, 0x0(r29)
    slwi r0, r0, 3
    add r0, r29, r0
    addic. r3, r0, 0x4
    beq lbl_fn_803E4A5C_000011B4
    lwz r0, 0x8(r1)
    stw r0, 0x0(r3)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r3)
lbl_fn_803E4A5C_000011B4:
    lwz r3, 0x0(r29)
    addi r0, r3, 0x1
    stw r0, 0x0(r29)
lbl_fn_803E4A5C_000011C0:
    lwz r31, 0x14ac(r31)
lbl_fn_803E4A5C_000011C4:
    cmpwi r31, 0x0
    bne lbl_fn_803E4A5C_00000ED4
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_803E4DD4(void)
{
    nofralloc
    cmpwi r3, 0x0
    beq lbl_fn_803E4DD4_00001228
    lwz r5, 0x7e0(r3)
    li r4, 0x1
    rlwinm r0, r5, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_803E4DD4_00001218
    rlwinm r0, r5, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_803E4DD4_00001218
    li r4, 0x0
lbl_fn_803E4DD4_00001218:
    cmpwi r4, 0x0
    beq lbl_fn_803E4DD4_00001228
    li r3, 0x1
    blr
lbl_fn_803E4DD4_00001228:
    cmpwi r3, 0x0
    beq lbl_fn_803E4DD4_00001244
    lwz r0, 0xc04(r3)
    cmpwi r0, 0x0
    ble lbl_fn_803E4DD4_00001244
    li r3, 0x1
    blr
lbl_fn_803E4DD4_00001244:
    cmpwi r3, 0x0
    beq lbl_fn_803E4DD4_00001268
    lwz r0, 0x7e0(r3)
    rlwinm r3, r0, 0, 8, 8
    subis r0, r3, 0x80
    cmplwi r0, 0x0
    bne lbl_fn_803E4DD4_00001268
    li r3, 0x1
    blr
lbl_fn_803E4DD4_00001268:
    li r3, 0x0
    blr
}

asm void fn_803E4E58(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0xe4(r1)
    lis r0, 0x4330
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    stfd f30, 0xc0(r1)
    psq_st f30, 0xc8(r1), 0, 0
    stw r31, 0xbc(r1)
    mr r31, r6
    stw r30, 0xb8(r1)
    mr r30, r4
    stw r29, 0xb4(r1)
    mr r29, r7
    stw r28, 0xb0(r1)
    mr r28, r5
    stw r0, 0x98(r1)
    stw r0, 0xa0(r1)
    beq lbl_fn_803E4E58_000015E8
    cmpwi r5, 0x0
    bne lbl_fn_803E4E58_000012CC
    b lbl_fn_803E4E58_000015E8
lbl_fn_803E4E58_000012CC:
    bl fn_803E5200
    cmpwi r29, 0x0
    beq lbl_fn_803E4E58_00001300
    lfs f0, lbl_80885D60
    stfs f0, 0x78(r1)
    stfs f0, 0x7c(r1)
    stfs f0, 0x80(r1)
    stfs f0, 0x84(r1)
    stfs f0, 0x88(r1)
    stfs f0, 0x8c(r1)
    stfs f0, 0x90(r1)
    stfs f0, 0x94(r1)
    b lbl_fn_803E4E58_000014B4
lbl_fn_803E4E58_00001300:
    addi r3, r28, 0x7d4
    bl fn_80134270
    cmpwi r3, 0x0
    beq lbl_fn_803E4E58_00001398
    lwz r4, lbl_8087F0A8
    lis r3, lbl_80750690@ha
    lfd f5, lbl_80750690@l(r3)
    lwz r5, 0x370(r4)
    lfs f4, lbl_80885EFC
    extrwi r0, r5, 8, 8
    stw r0, 0x9c(r1)
    extrwi r4, r5, 8, 16
    clrlwi r3, r5, 24
    lfd f0, 0x98(r1)
    srwi r0, r5, 24
    stw r4, 0xa4(r1)
    fsubs f1, f0, f5
    lfd f0, 0xa0(r1)
    stw r3, 0x9c(r1)
    fmuls f3, f4, f1
    fsubs f2, f0, f5
    stw r0, 0xa4(r1)
    lfd f1, 0x98(r1)
    lfd f0, 0xa0(r1)
    fsubs f1, f1, f5
    stfs f3, 0x68(r1)
    fsubs f0, f0, f5
    fmuls f2, f4, f2
    stfs f3, 0x88(r1)
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    stfs f2, 0x6c(r1)
    stfs f1, 0x70(r1)
    stfs f0, 0x74(r1)
    stfs f2, 0x8c(r1)
    stfs f1, 0x90(r1)
    stfs f0, 0x94(r1)
    b lbl_fn_803E4E58_000014B4
lbl_fn_803E4E58_00001398:
    addi r3, r28, 0x7d4
    bl fn_80134250
    cmpwi r3, 0x0
    beq lbl_fn_803E4E58_00001430
    lwz r4, lbl_8087F0A8
    lis r3, lbl_80750690@ha
    lfd f5, lbl_80750690@l(r3)
    lwz r5, 0x36c(r4)
    lfs f4, lbl_80885EFC
    extrwi r0, r5, 8, 8
    stw r0, 0x9c(r1)
    extrwi r4, r5, 8, 16
    clrlwi r3, r5, 24
    lfd f0, 0x98(r1)
    srwi r0, r5, 24
    stw r4, 0xa4(r1)
    fsubs f1, f0, f5
    lfd f0, 0xa0(r1)
    stw r3, 0x9c(r1)
    fmuls f3, f4, f1
    fsubs f2, f0, f5
    stw r0, 0xa4(r1)
    lfd f1, 0x98(r1)
    lfd f0, 0xa0(r1)
    fsubs f1, f1, f5
    stfs f3, 0x58(r1)
    fsubs f0, f0, f5
    fmuls f2, f4, f2
    stfs f3, 0x88(r1)
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    stfs f2, 0x5c(r1)
    stfs f1, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f2, 0x8c(r1)
    stfs f1, 0x90(r1)
    stfs f0, 0x94(r1)
    b lbl_fn_803E4E58_000014B4
lbl_fn_803E4E58_00001430:
    lwz r4, lbl_8087F0A8
    lis r3, lbl_80750690@ha
    lfd f5, lbl_80750690@l(r3)
    lwz r5, 0x368(r4)
    lfs f4, lbl_80885EFC
    extrwi r0, r5, 8, 8
    stw r0, 0x9c(r1)
    extrwi r4, r5, 8, 16
    clrlwi r3, r5, 24
    lfd f0, 0x98(r1)
    srwi r0, r5, 24
    stw r4, 0xa4(r1)
    fsubs f1, f0, f5
    lfd f0, 0xa0(r1)
    stw r3, 0x9c(r1)
    fmuls f3, f4, f1
    fsubs f2, f0, f5
    stw r0, 0xa4(r1)
    lfd f1, 0x98(r1)
    lfd f0, 0xa0(r1)
    fsubs f1, f1, f5
    stfs f3, 0x48(r1)
    fsubs f0, f0, f5
    fmuls f2, f4, f2
    stfs f3, 0x88(r1)
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    stfs f2, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f2, 0x8c(r1)
    stfs f1, 0x90(r1)
    stfs f0, 0x94(r1)
lbl_fn_803E4E58_000014B4:
    lfs f3, 0x88(r1)
    mr r3, r30
    lfs f2, 0x8c(r1)
    lfs f1, 0x90(r1)
    lfs f0, 0x94(r1)
    stfs f3, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
    bl fn_80202D00
    lis r29, lbl_807506A0@ha
    addi r5, r1, 0x38
    addi r29, r29, lbl_807506A0@l
    addi r4, r29, 0x155e
    bl fn_801F80A8
    lfs f3, 0x88(r1)
    mr r3, r30
    lfs f2, 0x8c(r1)
    lfs f1, 0x90(r1)
    lfs f0, 0x94(r1)
    stfs f3, 0x28(r1)
    stfs f2, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f0, 0x34(r1)
    bl fn_80202D00
    addi r4, r29, 0x156a
    addi r5, r1, 0x28
    bl fn_801F80A8
    lfs f3, 0x88(r1)
    mr r3, r30
    lfs f2, 0x8c(r1)
    lfs f1, 0x90(r1)
    lfs f0, 0x94(r1)
    stfs f3, 0x18(r1)
    stfs f2, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f0, 0x24(r1)
    bl fn_80202D00
    addi r4, r29, 0x1576
    addi r5, r1, 0x18
    bl fn_801F80A8
    lfs f3, 0x88(r1)
    mr r3, r30
    lfs f2, 0x8c(r1)
    lfs f1, 0x90(r1)
    lfs f0, 0x94(r1)
    stfs f3, 0x8(r1)
    stfs f2, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    bl fn_80202D00
    addi r4, r29, 0x1582
    addi r5, r1, 0x8
    bl fn_801F80A8
    lfs f31, lbl_80885D58
    mr r3, r30
    lfs f30, lbl_80885F00
    bl fn_80202D00
    lfs f0, 0x50(r3)
    fcmpo cr0, f31, f0
    ble lbl_fn_803E4E58_000015B4
    mr r3, r30
    bl fn_80202D00
    stfs f31, 0x50(r3)
lbl_fn_803E4E58_000015B4:
    mr r3, r30
    bl fn_80202D00
    lfs f0, 0x50(r3)
    fcmpo cr0, f30, f0
    cror eq, lt, eq
    bne lbl_fn_803E4E58_000015D8
    mr r3, r30
    bl fn_80202D00
    stfs f31, 0x50(r3)
lbl_fn_803E4E58_000015D8:
    lfs f1, 0x4(r31)
    lfs f0, lbl_80885E8C
    fadds f0, f1, f0
    stfs f0, 0x4(r31)
lbl_fn_803E4E58_000015E8:
    lwz r0, 0xe4(r1)
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    psq_l f30, 0xc8(r1), 0, 0
    lfd f30, 0xc0(r1)
    lwz r31, 0xbc(r1)
    lwz r30, 0xb8(r1)
    lwz r29, 0xb4(r1)
    lwz r28, 0xb0(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_803E5200(void)
{
    nofralloc
    stwu r1, -0x290(r1)
    mflr r0
    stw r0, 0x294(r1)
    addi r11, r1, 0x1f0
    stfd f31, 0x280(r1)
    psq_st f31, 0x288(r1), 0, 0
    stfd f30, 0x270(r1)
    psq_st f30, 0x278(r1), 0, 0
    stfd f29, 0x260(r1)
    psq_st f29, 0x268(r1), 0, 0
    stfd f28, 0x250(r1)
    psq_st f28, 0x258(r1), 0, 0
    stfd f27, 0x240(r1)
    psq_st f27, 0x248(r1), 0, 0
    stfd f26, 0x230(r1)
    psq_st f26, 0x238(r1), 0, 0
    stfd f25, 0x220(r1)
    psq_st f25, 0x228(r1), 0, 0
    stfd f24, 0x210(r1)
    psq_st f24, 0x218(r1), 0, 0
    stfd f23, 0x200(r1)
    psq_st f23, 0x208(r1), 0, 0
    stfd f22, 0x1f0(r1)
    psq_st f22, 0x1f8(r1), 0, 0
    bl _savegpr_25
    lis r7, lbl_807506A0@ha
    addi r27, r5, 0xb0
    addi r7, r7, lbl_807506A0@l
    lwz r26, lbl_8087F430
    mr r29, r3
    mr r30, r4
    mr r25, r5
    mr r31, r6
    mr r3, r27
    addi r4, r7, 0x10c1
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803E5200_000016BC
    li r27, 0x0
    b lbl_fn_803E5200_000016C8
lbl_fn_803E5200_000016BC:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r27)
    add r27, r3, r0
lbl_fn_803E5200_000016C8:
    lis r4, lbl_807506A0@ha
    addi r28, r25, 0xb0
    addi r4, r4, lbl_807506A0@l
    li r5, 0x0
    mr r3, r28
    addi r4, r4, 0x1591
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803E5200_000016F4
    li r3, 0x0
    b lbl_fn_803E5200_00001700
lbl_fn_803E5200_000016F4:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r28)
    add r3, r3, r0
lbl_fn_803E5200_00001700:
    cmpwi r27, 0x0
    beq lbl_fn_803E5200_00001728
    lfs f0, 0x2c(r27)
    addi r4, r1, 0xbc
    lfs f7, 0x1c(r27)
    lfs f8, 0xc(r27)
    stfs f8, 0xbc(r1)
    stfs f7, 0xc0(r1)
    stfs f0, 0xc4(r1)
    b lbl_fn_803E5200_00001754
lbl_fn_803E5200_00001728:
    cmpwi r3, 0x0
    beq lbl_fn_803E5200_00001750
    lfs f0, 0x2c(r3)
    addi r4, r1, 0xb0
    lfs f7, 0x1c(r3)
    lfs f8, 0xc(r3)
    stfs f8, 0xb0(r1)
    stfs f7, 0xb4(r1)
    stfs f0, 0xb8(r1)
    b lbl_fn_803E5200_00001754
lbl_fn_803E5200_00001750:
    addi r4, r25, 0x600
lbl_fn_803E5200_00001754:
    addi r3, r1, 0x11c
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x110
    lfs f2, 0x8(r4)
    lfs f8, 0x120(r1)
    lfs f7, lbl_80885D68
    lfs f0, 0x7c(r26)
    fadds f9, f8, f7
    lfs f11, 0x149c(r25)
    fsubs f10, f0, f2
    lfs f8, 0x78(r26)
    lfs f7, 0x74(r26)
    fadds f9, f9, f11
    lfs f0, 0x11c(r1)
    stfs f2, 0x124(r1)
    fsubs f8, f8, f9
    fsubs f0, f7, f0
    stfs f9, 0x120(r1)
    stfs f0, 0x110(r1)
    stfs f8, 0x114(r1)
    stfs f10, 0x118(r1)
    bl fn_805F9940
    fmr f30, f1
    addi r3, r1, 0x110
    mr r4, r3
    bl fn_805F98D0
    lfs f8, 0x118(r1)
    addi r3, r1, 0x110
    lfs f9, lbl_80885E58
    mr r4, r3
    lfs f7, 0x114(r1)
    fmuls f10, f8, f9
    lfs f8, 0x124(r1)
    fmuls f11, f7, f9
    lfs f0, 0x110(r1)
    lfs f7, 0x11c(r1)
    fmuls f9, f0, f9
    lfs f0, 0x120(r1)
    fadds f8, f8, f10
    stfs f9, 0xa4(r1)
    fadds f12, f0, f11
    lfs f0, lbl_80885D58
    fadds f7, f7, f9
    stfs f11, 0xa8(r1)
    stfs f10, 0xac(r1)
    stfs f7, 0x104(r1)
    stfs f12, 0x108(r1)
    stfs f8, 0x10c(r1)
    stfs f0, 0x114(r1)
    bl fn_805F98D0
    lfs f0, lbl_80885D58
    addi r4, r1, 0xf8
    stfs f0, 0x98(r1)
    addi r6, r1, 0x98
    lfs f2, lbl_80885D60
    mr r5, r4
    stfs f0, 0x9c(r1)
    addi r3, r30, 0xc8
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0xa0(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x100(r1)
    bl fn_805F93C0
    lfs f7, 0x100(r1)
    addi r28, r1, 0x110
    lfs f0, 0x118(r1)
    addi r5, r1, 0x8c
    lfs f9, 0xfc(r1)
    mr r3, r28
    fadds f2, f7, f0
    lfs f8, 0x114(r1)
    lfs f7, 0xf8(r1)
    mr r4, r28
    lfs f0, 0x110(r1)
    fadds f8, f9, f8
    fadds f0, f7, f0
    stfs f8, 0x90(r1)
    stfs f0, 0x8c(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x94(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x118(r1)
    bl fn_805F98D0
    lfs f7, 0x100(r1)
    addi r5, r1, 0x80
    lfs f0, 0x118(r1)
    mr r3, r28
    lfs f9, 0xfc(r1)
    mr r4, r28
    fadds f2, f7, f0
    lfs f8, 0x114(r1)
    lfs f7, 0xf8(r1)
    lfs f0, 0x110(r1)
    fadds f8, f9, f8
    stfs f2, 0x88(r1)
    fadds f0, f7, f0
    stfs f8, 0x84(r1)
    stfs f0, 0x80(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x118(r1)
    bl fn_805F98D0
    lfs f2, 0x118(r1)
    addi r27, r1, 0xec
    psq_l f1, 0x0(r28), 0, 0
    fabs f7, f2
    lfs f0, lbl_80885E80
    psq_st f1, 0x0(r27), 0, 0
    frsp f7, f7
    stfs f2, 0xf4(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_803E5200_0000193C
    lfs f7, 0xec(r1)
    lfs f0, lbl_80885D58
    fcmpo cr0, f7, f0
    ble lbl_fn_803E5200_00001930
    lfs f0, lbl_80885E5C
    b lbl_fn_803E5200_00001934
lbl_fn_803E5200_00001930:
    lfs f0, lbl_80885E84
lbl_fn_803E5200_00001934:
    stfs f0, 0x60(r1)
    b lbl_fn_803E5200_00001950
lbl_fn_803E5200_0000193C:
    frsp f2, f2
    lfs f1, 0xec(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x60(r1)
lbl_fn_803E5200_00001950:
    lfs f0, 0x60(r1)
    addi r3, r1, 0x128
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80885D58
    addi r4, r1, 0x50
    lfs f25, 0x130(r1)
    mr r5, r4
    lfs f26, 0x12c(r1)
    addi r3, r1, 0x158
    lfs f27, 0x128(r1)
    lfs f28, 0x140(r1)
    lfs f31, 0x13c(r1)
    lfs f29, 0x138(r1)
    lfs f13, 0x150(r1)
    lfs f12, 0x14c(r1)
    lfs f11, 0x148(r1)
    lfs f10, 0x154(r1)
    lfs f9, 0x144(r1)
    lfs f8, 0x134(r1)
    lfs f0, lbl_80885D60
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0xf4(r1)
    stfs f7, 0x188(r1)
    stfs f7, 0x18c(r1)
    stfs f7, 0x190(r1)
    stfs f0, 0x194(r1)
    stfs f27, 0x20(r1)
    stfs f26, 0x24(r1)
    stfs f25, 0x28(r1)
    stfs f27, 0x158(r1)
    stfs f26, 0x15c(r1)
    stfs f25, 0x160(r1)
    stfs f29, 0x2c(r1)
    stfs f31, 0x30(r1)
    stfs f28, 0x34(r1)
    stfs f29, 0x168(r1)
    stfs f31, 0x16c(r1)
    stfs f28, 0x170(r1)
    stfs f11, 0x38(r1)
    stfs f12, 0x3c(r1)
    stfs f13, 0x40(r1)
    stfs f11, 0x178(r1)
    stfs f12, 0x17c(r1)
    stfs f13, 0x180(r1)
    stfs f8, 0x44(r1)
    stfs f9, 0x48(r1)
    stfs f10, 0x4c(r1)
    stfs f8, 0x164(r1)
    stfs f9, 0x174(r1)
    stfs f10, 0x184(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F9750
    lfs f2, 0x58(r1)
    lfs f0, lbl_80885E80
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_803E5200_00001A6C
    lfs f7, 0x54(r1)
    lfs f0, lbl_80885D58
    fcmpo cr0, f7, f0
    ble lbl_fn_803E5200_00001A5C
    lfs f0, lbl_80885E5C
    b lbl_fn_803E5200_00001A60
lbl_fn_803E5200_00001A5C:
    lfs f0, lbl_80885E84
lbl_fn_803E5200_00001A60:
    fneg f0, f0
    stfs f0, 0x5c(r1)
    b lbl_fn_803E5200_00001A80
lbl_fn_803E5200_00001A6C:
    lfs f1, 0x54(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x5c(r1)
lbl_fn_803E5200_00001A80:
    lfs f8, 0x2674(r29)
    addi r3, r1, 0x5c
    lfs f0, 0x2668(r29)
    lfs f7, 0x266c(r29)
    fcmpo cr0, f8, f30
    lfs f2, lbl_80885D58
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x64(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0xf4(r1)
    stfs f0, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f0, 0xe8(r1)
    stfs f7, 0xd4(r1)
    stfs f7, 0xd8(r1)
    stfs f7, 0xdc(r1)
    bge lbl_fn_803E5200_00001AC8
    b lbl_fn_803E5200_00001ACC
lbl_fn_803E5200_00001AC8:
    fmr f8, f30
lbl_fn_803E5200_00001ACC:
    lfs f31, 0x2670(r29)
    fcmpo cr0, f31, f8
    ble lbl_fn_803E5200_00001ADC
    b lbl_fn_803E5200_00001AF0
lbl_fn_803E5200_00001ADC:
    lfs f31, 0x2674(r29)
    fcmpo cr0, f31, f30
    bge lbl_fn_803E5200_00001AEC
    b lbl_fn_803E5200_00001AF0
lbl_fn_803E5200_00001AEC:
    fmr f31, f30
lbl_fn_803E5200_00001AF0:
    lfs f7, 0x2674(r29)
    addi r5, r1, 0x74
    lfs f0, 0x2670(r29)
    addi r27, r1, 0xc8
    lfs f29, lbl_80885D60
    addi r6, r1, 0x68
    fsubs f0, f7, f0
    lwz r0, 0x38(r30)
    lfs f8, 0xe8(r1)
    addi r3, r1, 0x198
    lfs f30, 0xdc(r1)
    rlwinm r0, r0, 0, 30, 28
    fdivs f10, f31, f0
    lfs f7, 0xe4(r1)
    lfs f13, 0xd8(r1)
    li r4, 0x79
    lfs f0, 0xe0(r1)
    lfs f12, 0xd4(r1)
    fsubs f22, f8, f30
    lfs f9, 0x108(r1)
    fsubs f23, f7, f13
    lfs f8, 0x4(r31)
    fsubs f24, f0, f12
    lfs f7, 0x104(r1)
    fmuls f28, f22, f10
    lfs f0, 0x0(r31)
    fmuls f27, f23, f10
    lfs f11, 0x10c(r1)
    fmuls f26, f24, f10
    lfs f10, 0x8(r31)
    fadds f25, f28, f30
    stfs f29, 0xc8(r1)
    fadds f7, f7, f0
    lfs f30, 0xf0(r1)
    fadds f13, f27, f13
    stfs f29, 0xcc(r1)
    fadds f12, f26, f12
    stfs f13, 0x78(r1)
    fadds f8, f9, f8
    stfs f12, 0x74(r1)
    fadds f0, f11, f10
    fmr f2, f25
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0xd0(r1)
    fmr f2, f0
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    psq_st f1, 0x0(r27), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0xbc(r30), 0, 0
    fmr f1, f30
    stfs f24, 0x14(r1)
    stfs f23, 0x18(r1)
    stfs f22, 0x1c(r1)
    stfs f26, 0x8(r1)
    stfs f27, 0xc(r1)
    stfs f28, 0x10(r1)
    stfs f25, 0x7c(r1)
    stw r0, 0x38(r30)
    stfs f0, 0x70(r1)
    stfs f2, 0xc4(r30)
    bl fn_805F8E70
    addi r4, r1, 0x198
    mr r3, r30
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0xf0(r30), 0, 0
    psq_st f1, 0xc8(r30), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    psq_st f2, 0xd0(r30), 0, 0
    lfs f2, 0xd0(r1)
    psq_st f3, 0xd8(r30), 0, 0
    psq_st f4, 0xe0(r30), 0, 0
    psq_st f5, 0xe8(r30), 0, 0
    psq_st f1, 0xf8(r30), 0, 0
    stfs f2, 0x100(r30)
    bl fn_80202D00
    lis r29, lbl_807506A0@ha
    lfs f1, lbl_80885D58
    addi r29, r29, lbl_807506A0@l
    li r5, 0x0
    addi r4, r29, 0x1596
    bl fn_801F6D7C
    mr r3, r30
    bl fn_80202D00
    lfs f1, lbl_80885D58
    addi r4, r29, 0x1596
    li r5, 0x1
    bl fn_801F6D7C
    mr r3, r30
    bl fn_80202D00
    fmr f1, f31
    addi r4, r29, 0x1596
    li r5, 0x4
    bl fn_801F6D7C
    addi r11, r1, 0x1f0
    psq_l f31, 0x288(r1), 0, 0
    lfd f31, 0x280(r1)
    psq_l f30, 0x278(r1), 0, 0
    lfd f30, 0x270(r1)
    psq_l f29, 0x268(r1), 0, 0
    lfd f29, 0x260(r1)
    psq_l f28, 0x258(r1), 0, 0
    lfd f28, 0x250(r1)
    psq_l f27, 0x248(r1), 0, 0
    lfd f27, 0x240(r1)
    psq_l f26, 0x238(r1), 0, 0
    lfd f26, 0x230(r1)
    psq_l f25, 0x228(r1), 0, 0
    lfd f25, 0x220(r1)
    psq_l f24, 0x218(r1), 0, 0
    lfd f24, 0x210(r1)
    psq_l f23, 0x208(r1), 0, 0
    lfd f23, 0x200(r1)
    psq_l f22, 0x1f8(r1), 0, 0
    lfd f22, 0x1f0(r1)
    bl _restgpr_25
    lwz r0, 0x294(r1)
    mtlr r0
    addi r1, r1, 0x290
    blr
}
