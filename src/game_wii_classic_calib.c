#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_22(void);
extern void _savegpr_21(void);
extern void _savegpr_22(void);
extern void dtor_80084684(void);
extern void fn_8004B290(void);
extern void fn_8004B338(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8008B140(void);
extern void fn_8008BBD8(void);
extern void fn_80096218(void);
extern void fn_80096E94(void);
extern void fn_800971D4(void);
extern void fn_800C16B4(void);
extern void fn_800DBC1C(void);
extern void fn_800DC3C8(void);
extern void fn_8016E484(void);
extern void fn_8020ED84(void);
extern void fn_8020EF4C(void);
extern void fn_80219558(void);
extern void fn_80228AF4(void);
extern void fn_80228AF8(void);
extern void fn_80228CA0(void);
extern void fn_80239DAC(void);
extern void fn_803B3B38(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F34(void);
extern void fn_80473F50(void);
extern void fn_80491528(void);
extern void fn_805381A4(void);
extern void fn_805381CC(void);
extern void fn_8053B02C(void);
extern void fn_8054119C(void);
extern void fn_80541214(void);
extern void fn_80541524(void);
extern void fn_80564344(void);
extern void fn_80565068(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80686A48(void);
extern void fn_80686A64(void);
extern void fn_806959D8(void);
extern void fn_80695B00(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8075F060[];
extern u8 lbl_8075FB68[];
extern u8 lbl_8075FB78[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_80794F7C[];
extern u8 lbl_80794F88[];
extern u8 lbl_807C9248[];
extern u8 lbl_807C9550[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087D7DC;
extern u32 lbl_8087D7E0;
extern u32 lbl_8087D9F0;
extern u32 lbl_8087D9F4;
extern u32 lbl_8087E678;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F008;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F540;
extern u32 lbl_8087F558;
extern u32 lbl_8087F989;
extern u32 lbl_80887EB4;
extern u32 lbl_80887EB8;
extern u32 lbl_80887EC0;
extern u32 lbl_80887ED0;
extern u32 lbl_80887ED8;
extern u32 lbl_80887EDC;
extern u32 lbl_80887EE0;
extern u32 lbl_80887EE4;
extern u32 lbl_80887EE8;
extern u32 lbl_80887EEC;
extern u32 lbl_80887EF0;
extern u32 lbl_80887EF4;
extern u32 lbl_80887EF8;
extern u32 lbl_80887EFC;
extern u32 lbl_80887F00;
extern u32 lbl_80887F04;
extern u32 lbl_80887F08;
extern u32 lbl_80887F0C;
extern u32 lbl_80887F10;
extern u32 lbl_80887F14;
extern u32 lbl_80887F18;
extern u32 lbl_80887F1C;
extern u32 lbl_80887F20;
extern u32 lbl_80887F24;
extern u32 lbl_80887F28;
extern u32 lbl_80887F34;

/* Function declarations */
void fn_805628BC(void);
void fn_805628E0(void);
void fn_80562AA0(void);
void fn_80562ACC(void);
void fn_80562B84(void);
void fn_80562B8C(void);
void fn_80562BEC(void);
void fn_80562D50(void);
void fn_80562FB4(void);
void fn_8056309C(void);
void fn_805630A4(void);
void fn_805630AC(void);
void fn_805630B4(void);
void fn_805630BC(void);
void fn_805630C4(void);
void fn_805630CC(void);
void fn_805630D4(void);
void fn_805630DC(void);
void fn_805630E4(void);
void fn_805630EC(void);
void fn_805630F4(void);
void fn_805630FC(void);
void fn_80563104(void);
void fn_8056310C(void);
void fn_80563114(void);
void fn_8056311C(void);
void fn_80563124(void);
void fn_8056312C(void);
void fn_80563134(void);
void fn_8056313C(void);
void fn_805634D4(void);
void fn_80563800(void);
void fn_80563840(void);
void fn_80563880(void);
void fn_805638C0(void);
void fn_80563A20(void);
void fn_80563A64(void);
void fn_80564060(void);
void fn_80564194(void);

asm void fn_805628BC(void)
{
    nofralloc
    lwz r0, 0x30(r5)
    cmpwi r0, 0x0
    ble lbl_fn_805628BC_00000014
    lwz r3, 0x2c(r5)
    b lbl_fn_805628BC_00000018
lbl_fn_805628BC_00000014:
    li r3, 0x0
lbl_fn_805628BC_00000018:
    lwz r0, 0x4(r3)
    stw r0, 0x16c(r4)
    blr
}

asm void fn_805628E0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r4
    stw r30, 0x68(r1)
    mr r30, r3
    bne lbl_fn_805628E0_000001C8
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    lwz r0, 0x30(r31)
    cmpwi r0, 0x0
    ble lbl_fn_805628E0_00000064
    lwz r4, 0x2c(r31)
    b lbl_fn_805628E0_00000068
lbl_fn_805628E0_00000064:
    li r4, 0x0
lbl_fn_805628E0_00000068:
    lwz r0, 0x4(r4)
    lis r6, lbl_80794F7C@ha
    stw r0, 0x120(r3)
    li r3, 0x0
    lbz r0, lbl_8087F989
    lwzu r5, lbl_80794F7C@l(r6)
    extsb. r0, r0
    stw r5, 0x34(r1)
    lwz r4, 0x4(r6)
    lwz r0, 0x8(r6)
    stw r4, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r5, 0x28(r1)
    stw r4, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r5, 0x40(r1)
    stw r4, 0x44(r1)
    stw r0, 0x48(r1)
    stw r30, 0x4c(r1)
    stw r3, 0x50(r1)
    bne lbl_fn_805628E0_000000E4
    lis r6, lbl_807C9550@ha
    lis r4, fn_80562AA0@ha
    lis r3, fn_80562ACC@ha
    li r0, 0x1
    addi r3, r3, fn_80562ACC@l
    addi r5, r6, lbl_807C9550@l
    addi r4, r4, fn_80562AA0@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C9550@l(r6)
    stb r0, lbl_8087F989
lbl_fn_805628E0_000000E4:
    lwz r6, 0x40(r1)
    addi r3, r1, 0x18
    lwz r5, 0x44(r1)
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r6, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r0, 0x24(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_805628E0_00000158
    addic. r0, r1, 0x54
    lwz r5, 0x18(r1)
    lwz r4, 0x1c(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    beq lbl_fn_805628E0_00000150
    stw r5, 0x54(r1)
    stw r4, 0x58(r1)
    stw r3, 0x5c(r1)
    stw r0, 0x60(r1)
lbl_fn_805628E0_00000150:
    li r0, 0x1
    b lbl_fn_805628E0_0000015C
lbl_fn_805628E0_00000158:
    li r0, 0x0
lbl_fn_805628E0_0000015C:
    cmpwi r0, 0x0
    beq lbl_fn_805628E0_00000174
    lis r3, lbl_807C9550@ha
    addi r3, r3, lbl_807C9550@l
    stw r3, 0x50(r1)
    b lbl_fn_805628E0_0000017C
lbl_fn_805628E0_00000174:
    li r0, 0x0
    stw r0, 0x50(r1)
lbl_fn_805628E0_0000017C:
    lwz r3, lbl_8087F558
    mr r5, r31
    addi r4, r1, 0x50
    bl fn_80491528
    addic. r3, r1, 0x50
    beq lbl_fn_805628E0_000001C8
    lwz r4, 0x50(r1)
    cmpwi r4, 0x0
    beq lbl_fn_805628E0_000001C8
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805628E0_000001C0
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_805628E0_000001C0:
    li r0, 0x0
    stw r0, 0x50(r1)
lbl_fn_805628E0_000001C8:
    lwz r31, 0x6c(r1)
    li r3, 0x0
    lwz r30, 0x68(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80562AA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r12, r3
    stw r0, 0x14(r1)
    lwz r3, 0xc(r3)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80562ACC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_80562ACC_00000244
    lis r3, lbl_80794F88@ha
    addi r3, r3, lbl_80794F88@l
    stw r3, 0x0(r4)
    b lbl_fn_80562ACC_000002B0
lbl_fn_80562ACC_00000244:
    cmpwi r5, 0x0
    bne lbl_fn_80562ACC_00000278
    cmpwi r4, 0x0
    beq lbl_fn_80562ACC_000002B0
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_80562ACC_000002B0
lbl_fn_80562ACC_00000278:
    cmpwi r5, 0x1
    beq lbl_fn_80562ACC_000002B0
    lwz r5, 0x0(r4)
    lis r3, lbl_80794F88@ha
    lwz r4, lbl_80794F88@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_80562ACC_000002A8
    stw r30, 0x0(r31)
    b lbl_fn_80562ACC_000002B0
lbl_fn_80562ACC_000002A8:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80562ACC_000002B0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80562B84(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80562B8C(void)
{
    nofralloc
    subi r0, r5, 0x3
    cmplwi r0, 0x1
    ble lbl_fn_80562B8C_00000314
    cmpwi r5, 0x0
    bne lbl_fn_80562B8C_00000328
    lwz r0, 0x30(r4)
    cmpwi r0, 0x0
    ble lbl_fn_80562B8C_000002F8
    lwz r3, 0x2c(r4)
    b lbl_fn_80562B8C_000002FC
lbl_fn_80562B8C_000002F8:
    li r3, 0x0
lbl_fn_80562B8C_000002FC:
    lwz r4, lbl_8087EFA8
    lfs f0, 0x4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80562B8C_00000328
    stfs f0, 0x3a4(r4)
    b lbl_fn_80562B8C_00000328
lbl_fn_80562B8C_00000314:
    lwz r3, lbl_8087EFA8
    cmpwi r3, 0x0
    beq lbl_fn_80562B8C_00000328
    lfs f0, lbl_80887EB4
    stfs f0, 0x3a4(r3)
lbl_fn_80562B8C_00000328:
    li r3, 0x0
    blr
}

asm void fn_80562BEC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    bne lbl_fn_80562BEC_00000478
    mr r3, r31
    bl fn_805381A4
    mr r30, r3
    mr r3, r31
    bl fn_805381CC
    lwz r10, 0x280(r3)
    cmpwi r10, 0x0
    beq lbl_fn_80562BEC_00000478
    lwz r11, 0x30(r31)
    cmpwi r11, 0x0
    ble lbl_fn_80562BEC_00000384
    lwz r4, 0x2c(r31)
    b lbl_fn_80562BEC_00000388
lbl_fn_80562BEC_00000384:
    li r4, 0x0
lbl_fn_80562BEC_00000388:
    cmpwi r11, 0x1
    lwz r8, 0x4(r4)
    ble lbl_fn_80562BEC_000003A0
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x8
    b lbl_fn_80562BEC_000003A4
lbl_fn_80562BEC_000003A0:
    li r4, 0x0
lbl_fn_80562BEC_000003A4:
    cmpwi r11, 0x2
    lwz r6, 0x4(r4)
    ble lbl_fn_80562BEC_000003BC
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x10
    b lbl_fn_80562BEC_000003C0
lbl_fn_80562BEC_000003BC:
    li r4, 0x0
lbl_fn_80562BEC_000003C0:
    cmpwi r11, 0x3
    lwz r9, 0x4(r4)
    ble lbl_fn_80562BEC_000003D8
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x18
    b lbl_fn_80562BEC_000003DC
lbl_fn_80562BEC_000003D8:
    li r4, 0x0
lbl_fn_80562BEC_000003DC:
    lwz r0, 0x168(r3)
    lwz r7, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80562BEC_00000414
lbl_fn_80562BEC_000003F4:
    lwz r0, 0x164(r3)
    add r5, r0, r4
    lwz r0, 0x14(r5)
    cmpw r8, r0
    bne lbl_fn_80562BEC_0000040C
    b lbl_fn_80562BEC_00000418
lbl_fn_80562BEC_0000040C:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80562BEC_000003F4
lbl_fn_80562BEC_00000414:
    li r5, 0x0
lbl_fn_80562BEC_00000418:
    cmpwi r5, 0x0
    beq lbl_fn_80562BEC_00000478
    cmpwi r11, 0x4
    ble lbl_fn_80562BEC_00000434
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x20
    b lbl_fn_80562BEC_00000438
lbl_fn_80562BEC_00000434:
    li r3, 0x0
lbl_fn_80562BEC_00000438:
    cmpwi r9, 0x0
    lwz r9, 0x4(r3)
    beq lbl_fn_80562BEC_00000460
    lwz r8, 0x10(r31)
    mr r3, r10
    lwz r0, 0x14(r31)
    lwz r4, 0x10(r30)
    subf r8, r8, r0
    bl fn_80228AF8
    b lbl_fn_80562BEC_00000478
lbl_fn_80562BEC_00000460:
    lwz r8, 0x10(r31)
    mr r3, r10
    lwz r0, 0x14(r31)
    lwz r4, 0x10(r30)
    subf r8, r8, r0
    bl fn_80228AF4
lbl_fn_80562BEC_00000478:
    lwz r31, 0xc(r1)
    li r3, 0x0
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80562D50(void)
{
    nofralloc
    stwu r1, -0x470(r1)
    mflr r0
    stw r0, 0x474(r1)
    addi r11, r1, 0x450
    stfd f31, 0x460(r1)
    psq_st f31, 0x468(r1), 0, 0
    stfd f30, 0x450(r1)
    psq_st f30, 0x458(r1), 0, 0
    bl _savegpr_21
    cmpwi r5, 0x0
    mr r24, r4
    bne lbl_fn_80562D50_000006CC
    mr r3, r24
    bl fn_805381A4
    mr r31, r3
    mr r3, r24
    bl fn_805381CC
    lwz r30, 0x280(r3)
    cmpwi r30, 0x0
    beq lbl_fn_80562D50_000006CC
    lwz r0, 0x30(r24)
    cmpwi r0, 0x0
    ble lbl_fn_80562D50_000004F8
    lwz r4, 0x2c(r24)
    b lbl_fn_80562D50_000004FC
lbl_fn_80562D50_000004F8:
    li r4, 0x0
lbl_fn_80562D50_000004FC:
    cmpwi r0, 0x1
    lwz r4, 0x4(r4)
    ble lbl_fn_80562D50_00000514
    lwz r5, 0x2c(r24)
    addi r5, r5, 0x8
    b lbl_fn_80562D50_00000518
lbl_fn_80562D50_00000514:
    li r5, 0x0
lbl_fn_80562D50_00000518:
    cmpwi r0, 0x2
    lwz r29, 0x4(r5)
    ble lbl_fn_80562D50_00000530
    lwz r5, 0x2c(r24)
    addi r5, r5, 0x10
    b lbl_fn_80562D50_00000534
lbl_fn_80562D50_00000530:
    li r5, 0x0
lbl_fn_80562D50_00000534:
    cmpwi r0, 0x3
    lwz r28, 0x4(r5)
    ble lbl_fn_80562D50_0000054C
    lwz r5, 0x2c(r24)
    addi r5, r5, 0x18
    b lbl_fn_80562D50_00000550
lbl_fn_80562D50_0000054C:
    li r5, 0x0
lbl_fn_80562D50_00000550:
    cmpwi r0, 0x4
    lwz r27, 0x4(r5)
    ble lbl_fn_80562D50_00000568
    lwz r5, 0x2c(r24)
    addi r5, r5, 0x20
    b lbl_fn_80562D50_0000056C
lbl_fn_80562D50_00000568:
    li r5, 0x0
lbl_fn_80562D50_0000056C:
    cmpwi r0, 0x5
    lwz r26, 0x4(r5)
    ble lbl_fn_80562D50_00000584
    lwz r5, 0x2c(r24)
    addi r5, r5, 0x28
    b lbl_fn_80562D50_00000588
lbl_fn_80562D50_00000584:
    li r5, 0x0
lbl_fn_80562D50_00000588:
    cmpwi r0, 0x6
    lwz r25, 0x4(r5)
    ble lbl_fn_80562D50_000005A0
    lwz r5, 0x2c(r24)
    addi r5, r5, 0x30
    b lbl_fn_80562D50_000005A4
lbl_fn_80562D50_000005A0:
    li r5, 0x0
lbl_fn_80562D50_000005A4:
    lfs f1, 0x4(r5)
    addi r3, r3, 0x1d4
    lfs f0, lbl_80887ED8
    fmuls f30, f0, f1
    bl fn_803B3B38
    cmpwi r3, 0x0
    beq lbl_fn_80562D50_000006CC
    lwz r4, 0x8(r3)
    addi r3, r1, 0x218
    bl fn_80686A64
    addi r3, r1, 0x218
    bl fn_80686A48
    subic. r0, r3, 0x1
    addi r4, r1, 0x218
    li r3, 0xa
    mtctr r0
    ble lbl_fn_80562D50_00000610
lbl_fn_80562D50_000005E8:
    lhz r0, 0x0(r4)
    cmplwi r0, 0x5c
    bne lbl_fn_80562D50_00000608
    lhz r0, 0x2(r4)
    cmplwi r0, 0x6e
    bne lbl_fn_80562D50_00000608
    sth r3, 0x2(r4)
    sth r3, 0x0(r4)
lbl_fn_80562D50_00000608:
    addi r4, r4, 0x2
    bdnz lbl_fn_80562D50_000005E8
lbl_fn_80562D50_00000610:
    addi r3, r1, 0x218
    addi r5, r1, 0x10
    li r22, 0x0
    la r4, lbl_8087E678
    bl fn_800DC3C8
    lis r4, lbl_8075F060@ha
    mr r21, r3
    lfd f31, lbl_8075F060@l(r4)
    lis r23, 0x4330
    b lbl_fn_80562D50_000006AC
lbl_fn_80562D50_00000638:
    stw r22, 0x8(r1)
    fmr f2, f30
    mr r3, r30
    mr r5, r21
    lwz r4, 0x10(r24)
    mr r6, r29
    lwz r0, 0x14(r24)
    stw r23, 0x418(r1)
    mr r7, r28
    subf r0, r4, r0
    lwz r4, 0x10(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x41c(r1)
    mr r8, r27
    mr r9, r26
    lfd f0, 0x418(r1)
    mr r10, r25
    fsubs f1, f0, f31
    bl fn_80228CA0
    mr r4, r21
    addi r3, r1, 0x18
    li r25, 0x0
    bl fn_80686A64
    addi r5, r1, 0x10
    li r3, 0x0
    la r4, lbl_8087E678
    bl fn_800DC3C8
    mr r21, r3
    addi r22, r22, 0x1
lbl_fn_80562D50_000006AC:
    cmpwi r21, 0x0
    bne lbl_fn_80562D50_00000638
    lwz r3, lbl_8087F540
    lwz r0, 0x2390(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80562D50_000006CC
    lwz r3, lbl_8087F008
    bl fn_800DBC1C
lbl_fn_80562D50_000006CC:
    psq_l f31, 0x468(r1), 0, 0
    li r3, 0x0
    lfd f31, 0x460(r1)
    psq_l f30, 0x458(r1), 0, 0
    lfd f30, 0x450(r1)
    addi r11, r1, 0x450
    bl _restgpr_21
    lwz r0, 0x474(r1)
    mtlr r0
    addi r1, r1, 0x470
    blr
}

asm void fn_80562FB4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    bne lbl_fn_80562FB4_000007C4
    mr r3, r30
    bl fn_805381A4
    mr r3, r30
    bl fn_805381CC
    lwz r4, 0x10(r30)
    mr r31, r3
    lwz r0, 0x14(r30)
    subf. r0, r4, r0
    bne lbl_fn_80562FB4_0000079C
    bl fn_80541214
    bl fn_8053B02C
    lwz r0, 0xbc(r31)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80562FB4_00000778
lbl_fn_80562FB4_00000758:
    lwz r4, 0xb8(r31)
    lwzx r4, r4, r5
    lwz r0, 0xc(r4)
    cmpw r3, r0
    bne lbl_fn_80562FB4_00000770
    b lbl_fn_80562FB4_0000077C
lbl_fn_80562FB4_00000770:
    addi r5, r5, 0x8
    bdnz lbl_fn_80562FB4_00000758
lbl_fn_80562FB4_00000778:
    li r4, 0x0
lbl_fn_80562FB4_0000077C:
    mr r3, r31
    bl fn_8054119C
    mr r4, r3
    mr r3, r31
    li r5, 0x0
    bl fn_80541524
    li r3, 0x1
    b lbl_fn_80562FB4_000007C8
lbl_fn_80562FB4_0000079C:
    add r4, r4, r0
    lis r0, 0x4330
    xoris r4, r4, 0x8000
    stw r4, 0xc(r1)
    lis r4, lbl_8075F060@ha
    stw r0, 0x8(r1)
    lfd f1, lbl_8075F060@l(r4)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    stfs f0, 0x198(r3)
lbl_fn_80562FB4_000007C4:
    li r3, 0x0
lbl_fn_80562FB4_000007C8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8056309C(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_805630A4(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_805630AC(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_805630B4(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_805630BC(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_805630C4(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_805630CC(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_805630D4(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_805630DC(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_805630E4(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_805630EC(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_805630F4(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_805630FC(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80563104(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8056310C(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80563114(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8056311C(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80563124(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8056312C(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80563134(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8056313C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stfd f30, 0x10(r1)
    psq_st f30, 0x18(r1), 0, 0
    lis r4, lbl_807C9248@ha
    lfs f30, lbl_80887EB4
    addi r3, r4, lbl_807C9248@l
    lfs f31, lbl_80887EB8
    lfs f13, lbl_80887EDC
    lfs f12, lbl_80887EE0
    lfs f11, lbl_80887EE4
    lfs f0, lbl_80887F0C
    lfs f5, lbl_80887F10
    lfs f10, lbl_80887EE8
    lfs f9, lbl_80887EEC
    lfs f8, lbl_80887EF0
    lfs f7, lbl_80887EF4
    lfs f6, lbl_80887EF8
    lfs f4, lbl_80887EFC
    lfs f3, lbl_80887F00
    lfs f2, lbl_80887F04
    lfs f1, lbl_80887F08
    stfs f30, lbl_807C9248@l(r4)
    stfs f31, 0x4(r3)
    stfs f31, 0x8(r3)
    stfs f31, 0xc(r3)
    stfs f31, 0x10(r3)
    stfs f30, 0x14(r3)
    stfs f31, 0x18(r3)
    stfs f31, 0x1c(r3)
    stfs f31, 0x20(r3)
    stfs f31, 0x24(r3)
    stfs f30, 0x28(r3)
    stfs f31, 0x2c(r3)
    stfs f31, 0x30(r3)
    stfs f31, 0x34(r3)
    stfs f31, 0x38(r3)
    stfs f31, 0x3c(r3)
    stfs f13, 0x40(r3)
    stfs f13, 0x44(r3)
    stfs f13, 0x48(r3)
    stfs f31, 0x4c(r3)
    stfs f12, 0x50(r3)
    stfs f12, 0x54(r3)
    stfs f12, 0x58(r3)
    stfs f31, 0x5c(r3)
    stfs f11, 0x60(r3)
    stfs f11, 0x64(r3)
    stfs f11, 0x68(r3)
    stfs f31, 0x6c(r3)
    stfs f31, 0x70(r3)
    stfs f31, 0x74(r3)
    stfs f31, 0x78(r3)
    stfs f31, 0x7c(r3)
    stfs f10, 0x80(r3)
    stfs f9, 0x84(r3)
    stfs f8, 0x88(r3)
    stfs f31, 0x8c(r3)
    stfs f7, 0x90(r3)
    stfs f6, 0x94(r3)
    stfs f4, 0x98(r3)
    stfs f31, 0x9c(r3)
    stfs f3, 0xa0(r3)
    stfs f2, 0xa4(r3)
    stfs f1, 0xa8(r3)
    stfs f31, 0xac(r3)
    stfs f31, 0xb0(r3)
    stfs f31, 0xb4(r3)
    stfs f31, 0xb8(r3)
    stfs f31, 0xbc(r3)
    stfs f0, 0xc0(r3)
    stfs f31, 0xc4(r3)
    stfs f31, 0xc8(r3)
    stfs f31, 0xcc(r3)
    stfs f31, 0xd0(r3)
    stfs f0, 0xd4(r3)
    stfs f31, 0xd8(r3)
    stfs f31, 0xdc(r3)
    stfs f31, 0xe0(r3)
    stfs f31, 0xe4(r3)
    stfs f0, 0xe8(r3)
    stfs f31, 0xec(r3)
    stfs f31, 0xf0(r3)
    stfs f31, 0xf4(r3)
    stfs f31, 0xf8(r3)
    stfs f31, 0xfc(r3)
    stfs f30, 0x100(r3)
    stfs f31, 0x104(r3)
    stfs f31, 0x108(r3)
    stfs f31, 0x10c(r3)
    stfs f31, 0x110(r3)
    stfs f30, 0x114(r3)
    stfs f31, 0x118(r3)
    stfs f31, 0x11c(r3)
    stfs f31, 0x120(r3)
    stfs f31, 0x124(r3)
    stfs f30, 0x128(r3)
    stfs f31, 0x12c(r3)
    stfs f5, 0x130(r3)
    stfs f5, 0x134(r3)
    lfs f2, lbl_80887ED0
    lfs f4, lbl_80887F14
    lfs f3, lbl_80887F18
    lfs f1, lbl_80887F1C
    lfs f0, lbl_80887EC0
    stfs f5, 0x138(r3)
    stfs f30, 0x13c(r3)
    stfs f30, 0x140(r3)
    stfs f31, 0x144(r3)
    stfs f31, 0x148(r3)
    stfs f31, 0x14c(r3)
    stfs f31, 0x150(r3)
    stfs f30, 0x154(r3)
    stfs f31, 0x158(r3)
    stfs f31, 0x15c(r3)
    stfs f31, 0x160(r3)
    stfs f31, 0x164(r3)
    stfs f30, 0x168(r3)
    stfs f31, 0x16c(r3)
    stfs f4, 0x170(r3)
    stfs f4, 0x174(r3)
    stfs f4, 0x178(r3)
    stfs f30, 0x17c(r3)
    stfs f30, 0x180(r3)
    stfs f31, 0x184(r3)
    stfs f31, 0x188(r3)
    stfs f31, 0x18c(r3)
    stfs f31, 0x190(r3)
    stfs f30, 0x194(r3)
    stfs f31, 0x198(r3)
    stfs f31, 0x19c(r3)
    stfs f31, 0x1a0(r3)
    stfs f31, 0x1a4(r3)
    stfs f30, 0x1a8(r3)
    stfs f31, 0x1ac(r3)
    stfs f3, 0x1b0(r3)
    stfs f3, 0x1b4(r3)
    stfs f3, 0x1b8(r3)
    stfs f30, 0x1bc(r3)
    stfs f30, 0x1c0(r3)
    stfs f31, 0x1c4(r3)
    stfs f31, 0x1c8(r3)
    stfs f31, 0x1cc(r3)
    stfs f31, 0x1d0(r3)
    stfs f30, 0x1d4(r3)
    stfs f31, 0x1d8(r3)
    stfs f31, 0x1dc(r3)
    stfs f31, 0x1e0(r3)
    stfs f31, 0x1e4(r3)
    stfs f30, 0x1e8(r3)
    stfs f31, 0x1ec(r3)
    stfs f2, 0x1f0(r3)
    stfs f2, 0x1f4(r3)
    stfs f2, 0x1f8(r3)
    stfs f30, 0x1fc(r3)
    stfs f2, 0x200(r3)
    stfs f31, 0x204(r3)
    stfs f31, 0x208(r3)
    stfs f31, 0x20c(r3)
    stfs f31, 0x210(r3)
    stfs f2, 0x214(r3)
    stfs f31, 0x218(r3)
    stfs f31, 0x21c(r3)
    stfs f31, 0x220(r3)
    stfs f31, 0x224(r3)
    stfs f2, 0x228(r3)
    stfs f31, 0x22c(r3)
    stfs f1, 0x230(r3)
    stfs f1, 0x234(r3)
    stfs f1, 0x238(r3)
    stfs f31, 0x23c(r3)
    stfs f0, 0x240(r3)
    stfs f31, 0x244(r3)
    stfs f31, 0x248(r3)
    stfs f31, 0x24c(r3)
    stfs f31, 0x250(r3)
    stfs f0, 0x254(r3)
    stfs f31, 0x258(r3)
    stfs f31, 0x25c(r3)
    stfs f31, 0x260(r3)
    stfs f31, 0x264(r3)
    stfs f0, 0x268(r3)
    stfs f31, 0x26c(r3)
    lfs f3, lbl_80887F20
    lfs f2, lbl_80887ED8
    lfs f1, lbl_80887F24
    lfs f0, lbl_80887F28
    stfs f3, 0x270(r3)
    stfs f3, 0x274(r3)
    stfs f3, 0x278(r3)
    stfs f31, 0x27c(r3)
    stfs f2, 0x280(r3)
    stfs f31, 0x284(r3)
    stfs f31, 0x288(r3)
    stfs f31, 0x28c(r3)
    stfs f31, 0x290(r3)
    stfs f2, 0x294(r3)
    stfs f31, 0x298(r3)
    stfs f31, 0x29c(r3)
    stfs f31, 0x2a0(r3)
    stfs f31, 0x2a4(r3)
    stfs f2, 0x2a8(r3)
    stfs f31, 0x2ac(r3)
    stfs f1, 0x2b0(r3)
    stfs f1, 0x2b4(r3)
    stfs f1, 0x2b8(r3)
    stfs f31, 0x2bc(r3)
    stfs f0, 0x2c0(r3)
    stfs f31, 0x2c4(r3)
    stfs f31, 0x2c8(r3)
    stfs f31, 0x2cc(r3)
    stfs f31, 0x2d0(r3)
    stfs f0, 0x2d4(r3)
    stfs f31, 0x2d8(r3)
    stfs f31, 0x2dc(r3)
    stfs f31, 0x2e0(r3)
    stfs f31, 0x2e4(r3)
    stfs f0, 0x2e8(r3)
    stfs f31, 0x2ec(r3)
    stfs f5, 0x2f0(r3)
    stfs f5, 0x2f4(r3)
    stfs f5, 0x2f8(r3)
    stfs f31, 0x2fc(r3)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    psq_l f30, 0x18(r1), 0, 0
    lfd f30, 0x10(r1)
    addi r1, r1, 0x30
    blr
}

asm void fn_805634D4(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    addi r11, r1, 0x190
    bl _savegpr_22
    lwz r12, 0x198(r1)
    li r26, 0x0
    lwz r0, 0x19c(r1)
    lis r11, 0x81
    stw r4, 0x0(r3)
    mr r29, r4
    mr r28, r3
    mr r22, r5
    stw r5, 0x4(r3)
    mr r30, r7
    mr r23, r8
    mr r31, r9
    stw r6, 0x8(r3)
    addi r4, r11, 0x505
    li r5, 0x20
    stw r10, 0xc(r3)
    stw r26, 0x10(r3)
    stw r26, 0x14(r3)
    stw r12, 0x18(r3)
    stw r26, 0x1c(r3)
    stw r0, 0x20(r3)
    addi r3, r3, 0x24
    bl fn_80096E94
    lfs f0, lbl_80887F34
    addi r25, r28, 0x418
    stw r26, 0x3f4(r28)
    mr r3, r25
    stw r26, 0x3f8(r28)
    stw r26, 0x3fc(r28)
    stfs f0, 0x400(r28)
    stfs f0, 0x404(r28)
    stfs f0, 0x408(r28)
    stw r30, 0x40c(r28)
    stw r31, 0x410(r28)
    stw r26, 0x414(r28)
    bl fn_80473E74
    lis r27, lbl_8078FBB0@ha
    addi r24, r28, 0x428
    addi r27, r27, lbl_8078FBB0@l
    li r0, 0x3
    stw r27, 0x0(r25)
    mr r3, r24
    stw r0, 0x420(r28)
    stw r23, 0x424(r28)
    bl fn_80473E74
    cmpwi r22, -0x1
    li r0, -0x1
    stw r27, 0x0(r24)
    stw r26, 0x430(r28)
    stw r26, 0x434(r28)
    stw r0, 0x438(r28)
    bne lbl_fn_805634D4_00000D04
    mr r3, r28
    b lbl_fn_805634D4_00000F2C
lbl_fn_805634D4_00000D04:
    mr r3, r29
    mr r4, r22
    bl fn_8020ED84
    stw r3, 0x414(r28)
    lwz r4, 0x88(r3)
    lwz r0, 0x8c(r3)
    stw r0, 0xc(r1)
    stw r4, 0x8(r1)
    lwz r4, 0x90(r3)
    lwz r0, 0x94(r3)
    stw r0, 0x14(r1)
    stw r4, 0x10(r1)
    lwz r4, 0x98(r3)
    lwz r0, 0x9c(r3)
    stw r0, 0x1c(r1)
    stw r4, 0x18(r1)
    lwz r4, 0xa0(r3)
    lwz r0, 0xa4(r3)
    stw r0, 0x24(r1)
    stw r4, 0x20(r1)
    lwz r0, 0xc(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805634D4_00000DB4
    lwz r0, 0x0(r28)
    cmpwi r0, 0x0
    blt lbl_fn_805634D4_00000DB4
    cmpwi r0, 0x4
    bge lbl_fn_805634D4_00000DB4
    lis r3, lbl_8075FB68@ha
    slwi r0, r0, 2
    addi r3, r3, lbl_8075FB68@l
    addi r27, r1, 0x8
    lwzx r24, r3, r0
    cmplw r24, r27
    beq lbl_fn_805634D4_00000DAC
    mr r3, r24
    bl strlen
    mr r5, r3
    mr r3, r27
    mr r4, r24
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_805634D4_00000DAC:
    li r0, 0x0
    stw r0, 0x424(r28)
lbl_fn_805634D4_00000DB4:
    lwz r3, 0x414(r28)
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_805634D4_00000DE0
    cmpwi r29, 0x0
    beq lbl_fn_805634D4_00000DD8
    li r0, 0x1
    stw r0, 0x10(r28)
    b lbl_fn_805634D4_00000DE0
lbl_fn_805634D4_00000DD8:
    li r0, 0x1
    stw r0, 0x14(r28)
lbl_fn_805634D4_00000DE0:
    lwz r0, 0x10(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805634D4_00000E24
    lis r24, lbl_8075FB78@ha
    addi r27, r1, 0x8
    addi r24, r24, lbl_8075FB78@l
    cmplw r24, r27
    beq lbl_fn_805634D4_00000E1C
    mr r3, r24
    bl strlen
    mr r5, r3
    mr r3, r27
    mr r4, r24
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_805634D4_00000E1C:
    li r0, 0x0
    stw r0, 0x424(r28)
lbl_fn_805634D4_00000E24:
    addi r3, r1, 0x8
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_805634D4_00000EB8
    addi r3, r1, 0x28
    addi r4, r1, 0x8
    bl strcpy
    lwz r3, 0x50(r30)
    bl fn_80219558
    cmpwi r31, 0x0
    beq lbl_fn_805634D4_00000E58
    lwz r3, 0x50(r31)
    bl fn_80219558
lbl_fn_805634D4_00000E58:
    mr r3, r30
    bl fn_8016E484
    cmpwi r3, 0x0
    beq lbl_fn_805634D4_00000E7C
    lwz r0, 0x14(r28)
    cmpwi r0, 0x0
    bne lbl_fn_805634D4_00000E7C
    li r0, 0x31
    stb r0, 0x2c(r1)
lbl_fn_805634D4_00000E7C:
    lis r4, lbl_8075FB78@ha
    addi r3, r1, 0x68
    addi r4, r4, lbl_8075FB78@l
    addi r5, r1, 0x28
    addi r4, r4, 0x1
    crclr 6
    bl sprintf
    lwz r12, 0x418(r28)
    addi r3, r28, 0x418
    addi r4, r1, 0x68
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x420(r28)
lbl_fn_805634D4_00000EB8:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x18c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805634D4_00000F28
    cmpwi r29, 0x0
    bne lbl_fn_805634D4_00000F28
    lwz r3, 0x40c(r28)
    lwz r3, 0x50(r3)
    bl fn_80219558
    cmpwi r3, 0x7
    bge lbl_fn_805634D4_00000F28
    lwz r4, lbl_8087F4F0
    slwi r0, r3, 6
    li r25, 0x0
    addis r3, r4, 0x1
    add r3, r3, r0
    subi r24, r3, 0x2c80
lbl_fn_805634D4_00000EFC:
    bl fn_80680CF8
    slwi r0, r3, 26
    srwi r3, r3, 31
    subf r0, r3, r0
    addi r25, r25, 0x1
    rotlwi r0, r0, 6
    add r0, r0, r3
    stw r0, 0x0(r24)
    cmpwi r25, 0x8
    addi r24, r24, 0x4
    blt lbl_fn_805634D4_00000EFC
lbl_fn_805634D4_00000F28:
    mr r3, r28
lbl_fn_805634D4_00000F2C:
    addi r11, r1, 0x190
    bl _restgpr_22
    lwz r0, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_80563800(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80563800_00000F6C
    cmpwi r4, 0x0
    ble lbl_fn_80563800_00000F6C
    bl dtor_80084684
lbl_fn_80563800_00000F6C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80563840(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80563840_00000FAC
    cmpwi r4, 0x0
    ble lbl_fn_80563840_00000FAC
    bl dtor_80084684
lbl_fn_80563840_00000FAC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80563880(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80563880_00000FEC
    cmpwi r4, 0x0
    ble lbl_fn_80563880_00000FEC
    bl dtor_80084684
lbl_fn_80563880_00000FEC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805638C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_805638C0_00001140
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805638C0_00001058
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_805638C0_00001058
    mr r4, r28
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_805638C0_00001058:
    addic. r0, r28, 0x430
    li r3, 0x0
    li r0, 0x14
    stw r3, 0x1c(r28)
    stw r0, 0x434(r28)
    beq lbl_fn_805638C0_000010E0
    lwz r30, 0x430(r28)
    cmpwi r30, 0x0
    beq lbl_fn_805638C0_000010E0
    lis r31, fn_80563800@ha
    addi r3, r30, 0xf40
    addi r4, r31, fn_80563800@l
    li r5, 0x64
    li r6, 0x4
    bl fn_806959D8
    addi r3, r30, 0xc20
    addi r4, r31, fn_80563800@l
    li r5, 0x64
    li r6, 0x8
    bl fn_806959D8
    lis r4, fn_80563840@ha
    addi r3, r30, 0x440
    addi r4, r4, fn_80563840@l
    li r5, 0x54
    li r6, 0x18
    bl fn_806959D8
    lis r4, fn_80563880@ha
    mr r3, r30
    addi r4, r4, fn_80563880@l
    li r5, 0x44
    li r6, 0x10
    bl fn_806959D8
    mr r3, r30
    bl dtor_80084684
lbl_fn_805638C0_000010E0:
    addic. r3, r28, 0x428
    beq lbl_fn_805638C0_000010F0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_805638C0_000010F0:
    addic. r3, r28, 0x418
    beq lbl_fn_805638C0_00001100
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_805638C0_00001100:
    addic. r0, r28, 0x3f8
    beq lbl_fn_805638C0_00001124
    lwz r3, 0x3fc(r28)
    cmpwi r3, 0x0
    beq lbl_fn_805638C0_00001118
    bl fn_80084C24
lbl_fn_805638C0_00001118:
    li r0, 0x0
    stw r0, 0x3fc(r28)
    stw r0, 0x3f8(r28)
lbl_fn_805638C0_00001124:
    addi r3, r28, 0x24
    li r4, -0x1
    bl fn_800971D4
    cmpwi r29, 0x0
    ble lbl_fn_805638C0_00001140
    mr r3, r28
    bl dtor_80084684
lbl_fn_805638C0_00001140:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80563A20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r12, 0x418(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    addi r3, r3, 0x418
    bctrl
    li r0, 0x0
    stw r0, 0x420(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80563A64(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r31, r4
    addi r3, r3, 0x24
    bl fn_80096218
    addi r3, r27, 0x418
    bl fn_80473F34
    lwz r0, 0x8(r31)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_80563A64_000011EC
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80563A64_0000133C
lbl_fn_80563A64_000011EC:
    lwz r0, 0x4(r31)
    cmplwi r0, 0x8
    bgt lbl_fn_80563A64_00001490
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087D7E0
    la r6, lbl_8087D7DC
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r31)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_80563A64_0000132C
    lwz r0, 0x0(r31)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80563A64_00001234
    mr r4, r0
lbl_fn_80563A64_00001234:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_80563A64_00001324
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_80563A64_000012F4
    addi r0, r8, 0x7
    mr r7, r28
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_80563A64_000012F4
lbl_fn_80563A64_00001268:
    lwz r8, 0x8(r31)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_80563A64_00001268
lbl_fn_80563A64_000012F4:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80563A64_00001324
lbl_fn_80563A64_0000130C:
    lwz r3, 0x8(r31)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_80563A64_0000130C
lbl_fn_80563A64_00001324:
    lwz r3, 0x8(r31)
    bl fn_80084C24
lbl_fn_80563A64_0000132C:
    li r0, 0x8
    stw r28, 0x8(r31)
    stw r0, 0x4(r31)
    b lbl_fn_80563A64_00001490
lbl_fn_80563A64_0000133C:
    lwz r3, 0x0(r31)
    cmplw r3, r0
    blt lbl_fn_80563A64_00001490
    slwi r28, r3, 1
    cmplw r0, r28
    bgt lbl_fn_80563A64_00001490
    slwi r3, r28, 2
    li r4, 0x0
    la r5, lbl_8087D7E0
    la r6, lbl_8087D7DC
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_80563A64_00001488
    lwz r0, 0x0(r31)
    mr r4, r28
    cmplw r28, r0
    ble lbl_fn_80563A64_00001390
    mr r4, r0
lbl_fn_80563A64_00001390:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_80563A64_00001480
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_80563A64_00001450
    addi r0, r8, 0x7
    mr r7, r29
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_80563A64_00001450
lbl_fn_80563A64_000013C4:
    lwz r8, 0x8(r31)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_80563A64_000013C4
lbl_fn_80563A64_00001450:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80563A64_00001480
lbl_fn_80563A64_00001468:
    lwz r3, 0x8(r31)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_80563A64_00001468
lbl_fn_80563A64_00001480:
    lwz r3, 0x8(r31)
    bl fn_80084C24
lbl_fn_80563A64_00001488:
    stw r29, 0x8(r31)
    stw r28, 0x4(r31)
lbl_fn_80563A64_00001490:
    lwz r0, 0x0(r31)
    addi r3, r27, 0x428
    lwz r4, 0x8(r31)
    slwi r0, r0, 2
    stwx r30, r4, r0
    lwz r4, 0x0(r31)
    addi r0, r4, 0x1
    stw r0, 0x0(r31)
    bl fn_80473F34
    lwz r0, 0x8(r31)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_80563A64_000014D0
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80563A64_00001620
lbl_fn_80563A64_000014D0:
    lwz r0, 0x4(r31)
    cmplwi r0, 0x8
    bgt lbl_fn_80563A64_00001774
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087D7E0
    la r6, lbl_8087D7DC
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r31)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_80563A64_00001610
    lwz r0, 0x0(r31)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80563A64_00001518
    mr r4, r0
lbl_fn_80563A64_00001518:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_80563A64_00001608
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_80563A64_000015D8
    addi r0, r8, 0x7
    mr r7, r28
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_80563A64_000015D8
lbl_fn_80563A64_0000154C:
    lwz r8, 0x8(r31)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_80563A64_0000154C
lbl_fn_80563A64_000015D8:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80563A64_00001608
lbl_fn_80563A64_000015F0:
    lwz r3, 0x8(r31)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_80563A64_000015F0
lbl_fn_80563A64_00001608:
    lwz r3, 0x8(r31)
    bl fn_80084C24
lbl_fn_80563A64_00001610:
    li r0, 0x8
    stw r28, 0x8(r31)
    stw r0, 0x4(r31)
    b lbl_fn_80563A64_00001774
lbl_fn_80563A64_00001620:
    lwz r3, 0x0(r31)
    cmplw r3, r0
    blt lbl_fn_80563A64_00001774
    slwi r29, r3, 1
    cmplw r0, r29
    bgt lbl_fn_80563A64_00001774
    slwi r3, r29, 2
    li r4, 0x0
    la r5, lbl_8087D7E0
    la r6, lbl_8087D7DC
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r31)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_80563A64_0000176C
    lwz r0, 0x0(r31)
    mr r4, r29
    cmplw r29, r0
    ble lbl_fn_80563A64_00001674
    mr r4, r0
lbl_fn_80563A64_00001674:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_80563A64_00001764
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_80563A64_00001734
    addi r0, r8, 0x7
    mr r7, r28
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_80563A64_00001734
lbl_fn_80563A64_000016A8:
    lwz r8, 0x8(r31)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r31)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_80563A64_000016A8
lbl_fn_80563A64_00001734:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80563A64_00001764
lbl_fn_80563A64_0000174C:
    lwz r3, 0x8(r31)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_80563A64_0000174C
lbl_fn_80563A64_00001764:
    lwz r3, 0x8(r31)
    bl fn_80084C24
lbl_fn_80563A64_0000176C:
    stw r28, 0x8(r31)
    stw r29, 0x4(r31)
lbl_fn_80563A64_00001774:
    lwz r0, 0x0(r31)
    lwz r3, 0x8(r31)
    slwi r0, r0, 2
    stwx r30, r3, r0
    lwz r3, 0x0(r31)
    addi r0, r3, 0x1
    stw r0, 0x0(r31)
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80564060(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x420(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80564060_000017E0
    cmpwi r0, 0x1
    beq lbl_fn_80564060_00001808
    cmpwi r0, 0x2
    beq lbl_fn_80564060_00001830
    b lbl_fn_80564060_000018B8
lbl_fn_80564060_000017E0:
    addi r3, r3, 0x418
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_80564060_000017F8
    li r3, 0x1
    b lbl_fn_80564060_000018BC
lbl_fn_80564060_000017F8:
    mr r3, r29
    bl fn_80564194
    li r0, 0x1
    stw r0, 0x420(r29)
lbl_fn_80564060_00001808:
    addi r3, r29, 0x428
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_80564060_00001820
    li r3, 0x1
    b lbl_fn_80564060_000018BC
lbl_fn_80564060_00001820:
    mr r3, r29
    bl fn_80564344
    li r0, 0x2
    stw r0, 0x420(r29)
lbl_fn_80564060_00001830:
    addi r3, r29, 0x24
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_80564060_00001848
    li r3, 0x1
    b lbl_fn_80564060_000018BC
lbl_fn_80564060_00001848:
    mr r3, r29
    bl fn_80565068
    li r3, 0x1fc
    li r4, 0x6
    la r5, lbl_8087D9F4
    la r6, lbl_8087D9F0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80564060_0000188C
    li r0, 0x0
    stw r0, 0x0(r3)
    li r4, 0x0
    li r5, 0x0
    addi r3, r3, 0x8
    bl fn_8004B290
lbl_fn_80564060_0000188C:
    lwz r30, 0x22c(r29)
    cmpwi r30, 0x0
    stw r31, 0x22c(r29)
    beq lbl_fn_80564060_000018B0
    addi r3, r30, 0x8
    li r4, -0x1
    bl fn_8004B338
    mr r3, r30
    bl dtor_80084684
lbl_fn_80564060_000018B0:
    li r0, 0x3
    stw r0, 0x420(r29)
lbl_fn_80564060_000018B8:
    li r3, 0x0
lbl_fn_80564060_000018BC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80564194(void)
{
    nofralloc
    stwu r1, -0x850(r1)
    mflr r0
    stw r0, 0x854(r1)
    stw r31, 0x84c(r1)
    stw r30, 0x848(r1)
    stw r29, 0x844(r1)
    stw r28, 0x840(r1)
    mr r28, r3
    addi r3, r3, 0x418
    bl fn_8047059C
    mr r30, r3
    addi r3, r28, 0x418
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x208(r1)
    mr r29, r3
    addi r3, r1, 0x218
    stw r0, 0x20c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x210(r1)
    stw r0, 0x214(r1)
    stw r0, 0x838(r1)
    bl memset
    addi r3, r1, 0x818
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x208(r1)
    mr r4, r29
    mr r5, r30
    addi r3, r1, 0x208
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x208
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x208(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r3, lbl_8075FB78@ha
    li r31, 0x62
    li r30, 0x61
    addi r29, r3, lbl_8075FB78@l
lbl_fn_80564194_00001994:
    addi r3, r1, 0x208
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_80564194_00001A58
    addi r4, r29, 0x18
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80564194_00001A58
    addi r3, r1, 0x208
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    lwz r3, 0x40c(r28)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r0, 0x0(r28)
    cmplwi r0, 0x3
    bgt lbl_fn_80564194_00001A2C
    cmpwi r3, 0x0
    beq lbl_fn_80564194_00001A20
    cmpwi r3, 0x4
    beq lbl_fn_80564194_00001A20
    cmpwi r3, 0x2
    beq lbl_fn_80564194_00001A20
    cmpwi r3, 0x6
    beq lbl_fn_80564194_00001A20
    cmpwi r3, 0x3
    beq lbl_fn_80564194_00001A28
    cmpwi r3, 0x5
    beq lbl_fn_80564194_00001A28
    cmpwi r3, 0x1
    beq lbl_fn_80564194_00001A28
    b lbl_fn_80564194_00001A2C
lbl_fn_80564194_00001A20:
    stb r30, 0x15(r1)
    b lbl_fn_80564194_00001A2C
lbl_fn_80564194_00001A28:
    stb r31, 0x15(r1)
lbl_fn_80564194_00001A2C:
    addi r3, r1, 0x108
    addi r4, r29, 0x26
    addi r5, r1, 0x8
    crclr 6
    bl sprintf
    lwz r12, 0x428(r28)
    addi r3, r28, 0x428
    addi r4, r1, 0x108
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_80564194_00001A58:
    addi r3, r1, 0x208
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_80564194_00001994
    lwz r0, 0x854(r1)
    lwz r31, 0x84c(r1)
    lwz r30, 0x848(r1)
    lwz r29, 0x844(r1)
    lwz r28, 0x840(r1)
    mtlr r0
    addi r1, r1, 0x850
    blr
}
