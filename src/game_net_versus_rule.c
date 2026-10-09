#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_14(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8006EF48(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800A4450(void);
extern void fn_800A555C(void);
extern void fn_800A55AC(void);
extern void fn_800CB3A0(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_80117228(void);
extern void fn_801F3FF8(void);
extern void fn_801F4728(void);
extern void fn_801F4C14(void);
extern void fn_801F4E8C(void);
extern void fn_801FEC74(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_801FEDBC(void);
extern void fn_801FEE08(void);
extern void fn_804A436C(void);
extern void fn_804A4738(void);
extern void fn_804A53D4(void);
extern void fn_804AC734(void);
extern void fn_804ACAF8(void);
extern void fn_804ACDBC(void);
extern void fn_804B4150(void);
extern void fn_804BBBA0(void);
extern void fn_804C2FF8(void);
extern void fn_804DB478(void);
extern void fn_804DC118(void);
extern void fn_804DC454(void);
extern void fn_804DC7C4(void);
extern void fn_804DC810(void);
extern void fn_804DC85C(void);
extern void fn_804F7EF4(void);
extern void fn_8050EAEC(void);
extern void fn_8050EF18(void);
extern void fn_8050F474(void);
extern void fn_8050F5AC(void);
extern void fn_8050F668(void);
extern void fn_8050F728(void);
extern void fn_8050F768(void);
extern void fn_8050F86C(void);
extern void fn_80680770(void);
extern void fn_80686AF0(void);
extern void fn_80686EA4(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80758600[];
extern u8 lbl_80758640[];
extern u8 lbl_80775A88[];
extern u8 lbl_80790C08[];

/* Small data declarations */
extern u32 lbl_8087E108;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F580;
extern u32 lbl_8087F588;
extern u32 lbl_8087F59C;
extern u32 lbl_8087F5B8;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_8087F86C;
extern u32 lbl_808813D0;
extern u32 lbl_808873D0;
extern u32 lbl_808873D4;
extern u32 lbl_808873D8;
extern u32 lbl_808873DC;
extern u32 lbl_808873E0;
extern u32 lbl_808873E4;
extern u32 lbl_808873E8;
extern u32 lbl_808873EC;
extern u32 lbl_808873F0;
extern u32 lbl_808873F4;

/* Function declarations */
void fn_804B9B68(void);
void fn_804B9D40(void);
void fn_804B9D44(void);
void fn_804B9DAC(void);
void fn_804BA088(void);
void fn_804BA138(void);
void fn_804BA350(void);
void fn_804BA824(void);
void fn_804BA828(void);
void fn_804BA82C(void);
void fn_804BA970(void);
void fn_804BAFAC(void);
void fn_804BB10C(void);
void fn_804BB2CC(void);

asm void fn_804B9B68(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stmw r25, 0x24(r1)
    mr r30, r3
    mr r31, r4
    sth r0, 0x0(r4)
    lwz r5, 0x3ac(r3)
    cmpwi r5, 0x0
    bne lbl_fn_804B9B68_00000034
    li r3, 0x0
    b lbl_fn_804B9B68_000001C4
lbl_fn_804B9B68_00000034:
    lwz r4, 0x318(r3)
    cmpwi r4, -0x1
    bne lbl_fn_804B9B68_00000048
    li r3, 0x0
    b lbl_fn_804B9B68_000001C4
lbl_fn_804B9B68_00000048:
    lwz r0, 0x2c8(r3)
    add r3, r4, r0
    subi r0, r3, 0x1
    cmplw r5, r0
    bge lbl_fn_804B9B68_00000064
    li r3, 0x0
    b lbl_fn_804B9B68_000001C4
lbl_fn_804B9B68_00000064:
    lwz r4, lbl_8087F628
    slwi r29, r0, 2
    lwz r3, 0x3a8(r30)
    addi r27, r4, 0x430
    lwzx r4, r3, r29
    mr r3, r27
    bl fn_8050F768
    lwz r5, 0x3a8(r30)
    mr r25, r4
    mr r26, r3
    mr r3, r27
    lwzx r4, r5, r29
    bl fn_8050F86C
    cmpwi r3, 0x0
    beq lbl_fn_804B9B68_000000DC
    lwz r4, 0x3a8(r30)
    mr r3, r27
    lwzx r4, r4, r29
    bl fn_8050F728
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804B9B68_000000D4
    lwz r3, lbl_8087F86C
    lwz r3, 0x95c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804B9B68_000000D0
    b lbl_fn_804B9B68_000000D4
lbl_fn_804B9B68_000000D0:
    la r3, lbl_808813D0
lbl_fn_804B9B68_000000D4:
    mr r28, r3
    b lbl_fn_804B9B68_000000F4
lbl_fn_804B9B68_000000DC:
    lwz r3, lbl_8087F86C
    lwz r28, 0x94c(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804B9B68_000000F0
    b lbl_fn_804B9B68_000000F4
lbl_fn_804B9B68_000000F0:
    la r28, lbl_808813D0
lbl_fn_804B9B68_000000F4:
    lwz r4, 0x3a8(r30)
    mr r3, r27
    li r5, 0x0
    lwzx r4, r4, r29
    bl fn_8050EF18
    mr r29, r3
    mr r3, r27
    bl fn_8050EAEC
    mr r3, r27
    li r4, 0x9f0
    bl fn_804F7EF4
    mr r6, r25
    mr r5, r26
    addi r3, r1, 0x8
    bl fn_8050F474
    lwz r0, 0x8(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804B9B68_00000144
    addi r5, r1, 0xa
    b lbl_fn_804B9B68_00000148
lbl_fn_804B9B68_00000144:
    lwz r5, 0x10(r1)
lbl_fn_804B9B68_00000148:
    cmpwi r29, 0x0
    beq lbl_fn_804B9B68_0000017C
    lwz r4, lbl_8087F86C
    mr r3, r31
    lwz r4, 0x7c4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804B9B68_00000168
    b lbl_fn_804B9B68_0000016C
lbl_fn_804B9B68_00000168:
    la r4, lbl_808813D0
lbl_fn_804B9B68_0000016C:
    mr r6, r28
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_804B9B68_000001A4
lbl_fn_804B9B68_0000017C:
    lwz r4, lbl_8087F86C
    mr r3, r31
    lwz r4, 0x7cc(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804B9B68_00000194
    b lbl_fn_804B9B68_00000198
lbl_fn_804B9B68_00000194:
    la r4, lbl_808813D0
lbl_fn_804B9B68_00000198:
    mr r6, r28
    crclr 6
    bl fn_800DD3FC
lbl_fn_804B9B68_000001A4:
    lwz r0, 0x8(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804B9B68_000001B8
    lwz r3, 0x10(r1)
    bl dtor_80084684
lbl_fn_804B9B68_000001B8:
    li r0, -0x1
    stw r0, 0x318(r30)
    li r3, 0x1
lbl_fn_804B9B68_000001C4:
    lmw r25, 0x24(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_804B9D40(void)
{
    nofralloc
    b fn_800D2338
}

asm void fn_804B9D44(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F5B8
    cmpwi r0, 0x0
    bne lbl_fn_804B9D44_0000022C
    lis r5, lbl_80758640@ha
    li r3, 0x110
    addi r5, r5, lbl_80758640@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_804B9D44_00000228
    mr r4, r31
    bl fn_804B9DAC
lbl_fn_804B9D44_00000228:
    stw r3, lbl_8087F5B8
lbl_fn_804B9D44_0000022C:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F5B8
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804B9DAC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r31, r3
    bl fn_800D1D3C
    lis r3, lbl_80790C08@ha
    lis r4, lbl_80758640@ha
    li r0, 0x0
    stw r0, 0x88(r31)
    addi r3, r3, lbl_80790C08@l
    addi r4, r4, lbl_80758640@l
    stw r3, 0x0(r31)
    mr r3, r31
    addi r4, r4, 0x1
    li r5, 0x0
    stw r0, 0x8c(r31)
    stw r0, 0x94(r31)
    stw r0, 0xa0(r31)
    stw r0, 0xa4(r31)
    stw r0, 0xa8(r31)
    stw r0, 0xac(r31)
    stw r0, 0xb4(r31)
    stw r0, 0xb8(r31)
    stw r0, 0xfc(r31)
    stw r0, 0x100(r31)
    stw r0, 0x104(r31)
    stw r0, 0x108(r31)
    bl fn_801F3FF8
    lwz r0, 0xb8(r31)
    stw r3, 0x48(r31)
    cmplwi r0, 0x10
    bge lbl_fn_804B9DAC_000002EC
    lwz r0, 0xb8(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0xbc
    beq lbl_fn_804B9DAC_000002E0
    stw r3, 0x0(r4)
lbl_fn_804B9DAC_000002E0:
    lwz r3, 0xb8(r31)
    addi r0, r3, 0x1
    stw r0, 0xb8(r31)
lbl_fn_804B9DAC_000002EC:
    lis r4, lbl_80758640@ha
    mr r3, r31
    addi r4, r4, lbl_80758640@l
    li r5, 0x0
    addi r4, r4, 0x2b
    bl fn_801F3FF8
    lwz r0, 0xb8(r31)
    stw r3, 0x4c(r31)
    cmplwi r0, 0x10
    bge lbl_fn_804B9DAC_00000338
    lwz r0, 0xb8(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0xbc
    beq lbl_fn_804B9DAC_0000032C
    stw r3, 0x0(r4)
lbl_fn_804B9DAC_0000032C:
    lwz r3, 0xb8(r31)
    addi r0, r3, 0x1
    stw r0, 0xb8(r31)
lbl_fn_804B9DAC_00000338:
    lis r4, lbl_80758640@ha
    mr r3, r31
    addi r4, r4, lbl_80758640@l
    li r5, 0x0
    addi r4, r4, 0x55
    bl fn_801F3FF8
    lwz r0, 0xb8(r31)
    stw r3, 0x84(r31)
    cmplwi r0, 0x10
    bge lbl_fn_804B9DAC_00000384
    lwz r0, 0xb8(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0xbc
    beq lbl_fn_804B9DAC_00000378
    stw r3, 0x0(r4)
lbl_fn_804B9DAC_00000378:
    lwz r3, 0xb8(r31)
    addi r0, r3, 0x1
    stw r0, 0xb8(r31)
lbl_fn_804B9DAC_00000384:
    lis r4, lbl_80758640@ha
    mr r3, r31
    addi r4, r4, lbl_80758640@l
    li r5, 0x0
    addi r4, r4, 0x7b
    bl fn_801F3FF8
    lwz r0, 0xb8(r31)
    stw r3, 0x78(r31)
    cmplwi r0, 0x10
    bge lbl_fn_804B9DAC_000003D0
    lwz r0, 0xb8(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0xbc
    beq lbl_fn_804B9DAC_000003C4
    stw r3, 0x0(r4)
lbl_fn_804B9DAC_000003C4:
    lwz r3, 0xb8(r31)
    addi r0, r3, 0x1
    stw r0, 0xb8(r31)
lbl_fn_804B9DAC_000003D0:
    lis r4, lbl_80758640@ha
    mr r3, r31
    addi r4, r4, lbl_80758640@l
    li r5, 0x0
    addi r4, r4, 0x9e
    bl fn_801F3FF8
    lwz r0, 0xb8(r31)
    stw r3, 0x7c(r31)
    cmplwi r0, 0x10
    bge lbl_fn_804B9DAC_0000041C
    lwz r0, 0xb8(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0xbc
    beq lbl_fn_804B9DAC_00000410
    stw r3, 0x0(r4)
lbl_fn_804B9DAC_00000410:
    lwz r3, 0xb8(r31)
    addi r0, r3, 0x1
    stw r0, 0xb8(r31)
lbl_fn_804B9DAC_0000041C:
    lis r30, lbl_80758640@ha
    li r27, 0x0
    addi r30, r30, lbl_80758640@l
    li r29, 0x0
lbl_fn_804B9DAC_0000042C:
    mr r3, r31
    add r28, r31, r29
    addi r4, r30, 0xc3
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x50(r28)
    lwz r0, 0xb8(r31)
    cmplwi r0, 0x10
    bge lbl_fn_804B9DAC_00000474
    lwz r0, 0xb8(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0xbc
    beq lbl_fn_804B9DAC_00000468
    stw r3, 0x0(r4)
lbl_fn_804B9DAC_00000468:
    lwz r3, 0xb8(r31)
    addi r0, r3, 0x1
    stw r0, 0xb8(r31)
lbl_fn_804B9DAC_00000474:
    addi r27, r27, 0x1
    addi r29, r29, 0x4
    cmpwi r27, 0xa
    blt lbl_fn_804B9DAC_0000042C
    lis r4, lbl_80758640@ha
    mr r3, r31
    addi r4, r4, lbl_80758640@l
    li r5, 0x0
    addi r4, r4, 0xed
    bl fn_801F3FF8
    lwz r0, 0xb8(r31)
    stw r3, 0x80(r31)
    cmplwi r0, 0x10
    bge lbl_fn_804B9DAC_000004D0
    lwz r0, 0xb8(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0xbc
    beq lbl_fn_804B9DAC_000004C4
    stw r3, 0x0(r4)
lbl_fn_804B9DAC_000004C4:
    lwz r3, 0xb8(r31)
    addi r0, r3, 0x1
    stw r0, 0xb8(r31)
lbl_fn_804B9DAC_000004D0:
    addi r30, r31, 0xbc
    b lbl_fn_804B9DAC_000004F0
lbl_fn_804B9DAC_000004D8:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_804B9DAC_000004EC
    li r4, 0x1
    bl fn_800D246C
lbl_fn_804B9DAC_000004EC:
    addi r30, r30, 0x4
lbl_fn_804B9DAC_000004F0:
    lwz r0, 0xb8(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    addi r0, r3, 0xbc
    cmplw r30, r0
    bne lbl_fn_804B9DAC_000004D8
    mr r3, r31
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804BA088(void)
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
    beq lbl_fn_804BA088_000005B4
    lis r5, lbl_80790C08@ha
    li r4, 0x0
    addi r5, r5, lbl_80790C08@l
    stw r5, 0x0(r3)
    stw r4, 0xb8(r3)
    lwz r0, lbl_8087F5B8
    cmpwi r0, 0x0
    beq lbl_fn_804BA088_00000568
    stw r4, lbl_8087F5B8
lbl_fn_804BA088_00000568:
    addic. r4, r3, 0xfc
    beq lbl_fn_804BA088_00000598
    beq lbl_fn_804BA088_00000598
    beq lbl_fn_804BA088_00000598
    beq lbl_fn_804BA088_00000598
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_804BA088_00000598
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_804BA088_00000598:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_804BA088_000005B4
    mr r3, r30
    bl dtor_80084684
lbl_fn_804BA088_000005B4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804BA138(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_804BA138_000007BC
    li r0, 0x0
    stw r0, 0xa0(r31)
    mr r3, r31
    li r4, 0x6
    bl fn_804BA350
    addi r30, r31, 0xbc
    b lbl_fn_804BA138_00000638
lbl_fn_804BA138_00000620:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_804BA138_00000634
    li r4, 0x0
    bl fn_800D246C
lbl_fn_804BA138_00000634:
    addi r30, r30, 0x4
lbl_fn_804BA138_00000638:
    lwz r0, 0xb8(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    addi r0, r3, 0xbc
    cmplw r30, r0
    bne lbl_fn_804BA138_00000620
    lwz r4, 0x80(r31)
    lis r30, lbl_80758640@ha
    addi r30, r30, lbl_80758640@l
    lwz r0, 0x38(r4)
    addi r3, r30, 0x10a
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x78(r31)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x78(r31)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873D0
    mr r4, r3
    mr r3, r29
    li r5, 0x4
    bl fn_801FED24
    lwz r4, 0x78(r31)
    addi r3, r30, 0x112
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873D0
    mr r4, r3
    mr r3, r29
    li r5, 0x4
    bl fn_801FED24
    lwz r3, 0x78(r31)
    addi r4, r30, 0x11a
    addi r3, r3, 0x58
    bl fn_801FEC74
    cmpwi r3, 0x0
    beq lbl_fn_804BA138_00000764
    mr r4, r3
    addi r3, r1, 0x8
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x8(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, lbl_808873D4
    bne lbl_fn_804BA138_00000708
    addi r4, r1, 0xa
    b lbl_fn_804BA138_0000070C
lbl_fn_804BA138_00000708:
    lwz r4, 0x10(r1)
lbl_fn_804BA138_0000070C:
    lfs f2, lbl_808873D8
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r0, 0x8(r1)
    fmr f31, f1
    srwi. r0, r0, 31
    beq lbl_fn_804BA138_00000734
    lwz r3, 0x10(r1)
    bl dtor_80084684
lbl_fn_804BA138_00000734:
    lwz r4, 0x78(r31)
    lis r3, lbl_80758640@ha
    addi r3, r3, lbl_80758640@l
    addi r3, r3, 0x112
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f0, lbl_808873DC
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    fsubs f1, f0, f31
    bl fn_801FED24
lbl_fn_804BA138_00000764:
    lwz r4, 0x4c(r31)
    lis r30, lbl_80758640@ha
    addi r30, r30, lbl_80758640@l
    la r29, lbl_8087E108
    addi r3, r30, 0x128
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x136
    la r29, lbl_8087E108
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    li r3, 0x1
    b lbl_fn_804BA138_000007C0
lbl_fn_804BA138_000007BC:
    li r3, 0x0
lbl_fn_804BA138_000007C0:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_804BA350(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r5, 0x88(r3)
    cmpw r5, r4
    beq lbl_fn_804BA350_00000C94
    cmpwi r4, 0x0
    blt lbl_fn_804BA350_00000C94
    cmpwi r5, 0x8
    li r0, 0x0
    stw r0, 0xac(r3)
    stw r5, 0x8c(r3)
    stw r4, 0x88(r3)
    beq lbl_fn_804BA350_00000844
    cmpwi r5, 0x2
    bne lbl_fn_804BA350_0000090C
lbl_fn_804BA350_00000844:
    lwz r30, 0x48(r3)
    cmpwi r30, 0x0
    beq lbl_fn_804BA350_00000870
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808873E0
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804BA350_00000870:
    lwz r30, 0x4c(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804BA350_0000089C
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808873E0
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804BA350_0000089C:
    lfs f31, lbl_808873E0
    mr r28, r31
    li r29, 0x0
lbl_fn_804BA350_000008A8:
    lwz r30, 0x50(r28)
    cmpwi r30, 0x0
    beq lbl_fn_804BA350_000008D0
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804BA350_000008D0:
    addi r29, r29, 0x1
    addi r28, r28, 0x4
    cmpwi r29, 0xa
    blt lbl_fn_804BA350_000008A8
    lwz r30, 0x80(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804BA350_0000090C
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808873E0
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804BA350_0000090C:
    lwz r0, 0x88(r31)
    cmpwi r0, 0x1
    beq lbl_fn_804BA350_00000944
    cmpwi r0, 0x2
    beq lbl_fn_804BA350_00000A30
    cmpwi r0, 0x4
    beq lbl_fn_804BA350_00000A60
    cmpwi r0, 0x7
    beq lbl_fn_804BA350_00000AA0
    cmpwi r0, 0x8
    beq lbl_fn_804BA350_00000AE8
    cmpwi r0, 0x9
    beq lbl_fn_804BA350_00000C10
    b lbl_fn_804BA350_00000C94
lbl_fn_804BA350_00000944:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    mr r3, r31
    li r4, 0x1
    bl fn_804BB2CC
    lwz r29, 0x48(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804BA350_00000990
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808873E4
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804BA350_00000990:
    lwz r29, 0x4c(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804BA350_000009BC
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808873E4
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804BA350_000009BC:
    lfs f31, lbl_808873E4
    mr r30, r31
    li r28, 0x0
lbl_fn_804BA350_000009C8:
    lwz r29, 0x50(r30)
    cmpwi r29, 0x0
    beq lbl_fn_804BA350_000009F0
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804BA350_000009F0:
    addi r28, r28, 0x1
    addi r30, r30, 0x4
    cmpwi r28, 0xa
    blt lbl_fn_804BA350_000009C8
    lwz r29, 0x78(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804BA350_00000C94
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808873E4
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
    b lbl_fn_804BA350_00000C94
lbl_fn_804BA350_00000A30:
    lwz r29, 0x80(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804BA350_00000C94
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808873E4
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
    b lbl_fn_804BA350_00000C94
lbl_fn_804BA350_00000A60:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r29, 0x78(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804BA350_00000C94
    mr r3, r29
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_808873E0
    stfs f0, 0x104(r29)
    lfs f0, lbl_808873D8
    stfs f0, 0x100(r29)
    b lbl_fn_804BA350_00000C94
lbl_fn_804BA350_00000AA0:
    lwz r5, lbl_8087F610
    mr r3, r31
    li r4, 0x1
    lwz r5, 0x544(r5)
    bl fn_804BBBA0
    mr r3, r31
    bl fn_804C2FF8
    lwz r29, 0x78(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804BA350_00000C94
    mr r3, r29
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_808873E0
    stfs f0, 0x104(r29)
    lfs f0, lbl_808873D8
    stfs f0, 0x100(r29)
    b lbl_fn_804BA350_00000C94
lbl_fn_804BA350_00000AE8:
    lwz r3, lbl_8087F628
    li r30, 0x101
    lbz r0, 0x90(r3)
    cmplwi r0, 0x1
    bne lbl_fn_804BA350_00000B00
    li r30, 0x100
lbl_fn_804BA350_00000B00:
    lwz r29, 0x84(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804BA350_00000B2C
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808873E4
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    oris r0, r0, 0x1000
    stw r0, 0xfc(r29)
lbl_fn_804BA350_00000B2C:
    lwz r0, lbl_8087F86C
    slwi r28, r30, 3
    add r3, r0, r28
    lwz r29, 0x4c(r3)
    cmpwi r29, 0x0
    beq lbl_fn_804BA350_00000B48
    b lbl_fn_804BA350_00000B4C
lbl_fn_804BA350_00000B48:
    la r29, lbl_808813D0
lbl_fn_804BA350_00000B4C:
    lwz r4, 0x84(r31)
    lis r3, lbl_80758640@ha
    addi r3, r3, lbl_80758640@l
    addi r3, r3, 0x144
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r29
    bl fn_801FEE08
    lwz r0, lbl_8087F86C
    add r3, r0, r28
    lwz r29, 0x4c(r3)
    cmpwi r29, 0x0
    beq lbl_fn_804BA350_00000B8C
    b lbl_fn_804BA350_00000B90
lbl_fn_804BA350_00000B8C:
    la r29, lbl_808813D0
lbl_fn_804BA350_00000B90:
    lwz r4, 0x84(r31)
    lis r3, lbl_80758640@ha
    addi r3, r3, lbl_80758640@l
    addi r3, r3, 0x14a
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r29
    bl fn_801FEE08
    lwz r29, 0x78(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804BA350_00000BE0
    mr r3, r29
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_808873E0
    stfs f0, 0x104(r29)
    lfs f0, lbl_808873D8
    stfs f0, 0x100(r29)
lbl_fn_804BA350_00000BE0:
    lwz r29, 0x7c(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804BA350_00000C94
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808873E4
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
    b lbl_fn_804BA350_00000C94
lbl_fn_804BA350_00000C10:
    lwz r29, 0x84(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804BA350_00000C38
    mr r3, r29
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_808873E0
    stfs f0, 0x104(r29)
    lfs f0, lbl_808873D8
    stfs f0, 0x100(r29)
lbl_fn_804BA350_00000C38:
    lwz r3, 0x84(r31)
    li r4, 0x1
    bl fn_800D246C
    lwz r29, 0x78(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804BA350_00000C6C
    mr r3, r29
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_808873E0
    stfs f0, 0x104(r29)
    lfs f0, lbl_808873D8
    stfs f0, 0x100(r29)
lbl_fn_804BA350_00000C6C:
    lwz r29, 0x7c(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804BA350_00000C94
    mr r3, r29
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_808873E0
    stfs f0, 0x104(r29)
    lfs f0, lbl_808873D8
    stfs f0, 0x100(r29)
lbl_fn_804BA350_00000C94:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804BA824(void)
{
    nofralloc
    blr
}

asm void fn_804BA828(void)
{
    nofralloc
    blr
}

asm void fn_804BA82C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r3
    lwz r0, 0x88(r3)
    cmpwi r0, 0x1
    beq lbl_fn_804BA82C_00000D00
    cmpwi r0, 0x2
    beq lbl_fn_804BA82C_00000DC4
    cmpwi r0, 0x4
    beq lbl_fn_804BA82C_00000DCC
    b lbl_fn_804BA82C_00000DEC
lbl_fn_804BA82C_00000D00:
    li r4, 0x1
    bl fn_804BB2CC
    lwz r3, 0x4c(r29)
    lfs f0, lbl_808873E8
    lfs f1, 0x100(r3)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_804BA82C_00000D2C
    mr r3, r29
    li r4, 0x2
    bl fn_804BA350
lbl_fn_804BA82C_00000D2C:
    lfs f0, lbl_808873D8
    lis r31, lbl_80758640@ha
    stfs f0, 0x8(r1)
    addi r31, r31, lbl_80758640@l
    addi r3, r31, 0x158
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    lwz r30, 0x4c(r29)
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x1c
    bl fn_801F4E8C
    lfs f4, 0x1c(r1)
    addi r4, r31, 0x165
    lfs f3, 0x20(r1)
    addi r5, r1, 0x8
    lfs f2, 0x24(r1)
    lfs f1, 0x2c(r1)
    lfs f0, lbl_808873E4
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f2, 0x10(r1)
    stfs f1, 0x18(r1)
    stfs f0, 0x14(r1)
    lwz r3, 0x80(r29)
    bl fn_801F4728
    lwz r4, 0x80(r29)
    addi r3, r31, 0x16d
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873EC
    mr r4, r3
    mr r3, r30
    bl fn_801FECE0
    b lbl_fn_804BA82C_00000DEC
lbl_fn_804BA82C_00000DC4:
    bl fn_804BA970
    b lbl_fn_804BA82C_00000DEC
lbl_fn_804BA82C_00000DCC:
    lwz r4, 0x4c(r3)
    lfs f0, lbl_808873D8
    lfs f1, 0x100(r4)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_804BA82C_00000DEC
    li r4, 0x5
    bl fn_804BA350
lbl_fn_804BA82C_00000DEC:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_804BA970(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_27
    lwz r4, 0x108(r3)
    mr r27, r3
    cmpwi r4, 0x0
    ble lbl_fn_804BA970_00000E38
    subi r0, r4, 0x1
    stw r0, 0x108(r3)
    b lbl_fn_804BA970_00000E54
lbl_fn_804BA970_00000E38:
    lwz r3, lbl_8087F610
    bl fn_804DC85C
    mr r3, r27
    li r4, 0x1
    bl fn_804BB2CC
    li r0, 0x96
    stw r0, 0x108(r27)
lbl_fn_804BA970_00000E54:
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804BA970_00000E84
    bl fn_804AC734
    cmpwi r3, 0x0
    beq lbl_fn_804BA970_0000142C
    lwz r3, lbl_8087F588
    bl fn_804ACAF8
    lwz r3, lbl_8087F588
    bl fn_804ACDBC
    b lbl_fn_804BA970_0000142C
lbl_fn_804BA970_00000E84:
    lwz r29, 0xac(r27)
    addi r3, r27, 0xac
    lwz r28, 0x94(r27)
    li r31, 0x0
    lwz r30, lbl_8087EF70
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x3
    bl fn_804A436C
    mr r3, r30
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804BA970_00000EE4
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    li r31, 0x1
    b lbl_fn_804BA970_00000F18
lbl_fn_804BA970_00000EE4:
    mr r3, r30
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804BA970_00000F18
    addi r3, r1, 0xc
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    li r31, 0x2
lbl_fn_804BA970_00000F18:
    lwz r30, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1a
    mr r3, r30
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804BA970_00000F4C
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804BA970_00000F9C
lbl_fn_804BA970_00000F4C:
    lwz r3, 0x94(r27)
    lwz r4, 0xac(r27)
    cmpwi r3, 0x0
    subi r0, r4, 0x1
    stw r0, 0xac(r27)
    beq lbl_fn_804BA970_00000F8C
    cmpwi r0, 0x1
    bge lbl_fn_804BA970_00000F9C
    subi r0, r3, 0x1
    li r3, 0x1
    stw r3, 0xac(r27)
    mr r3, r27
    li r4, 0x0
    stw r0, 0x94(r27)
    bl fn_804BB2CC
    b lbl_fn_804BA970_00000F9C
lbl_fn_804BA970_00000F8C:
    cmpwi r0, 0x0
    bge lbl_fn_804BA970_00000F9C
    li r0, 0x0
    stw r0, 0xac(r27)
lbl_fn_804BA970_00000F9C:
    mr r3, r30
    li r4, 0x0
    li r5, 0x17
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804BA970_00000FCC
    mr r3, r30
    li r4, 0x0
    li r5, 0x2
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804BA970_00001038
lbl_fn_804BA970_00000FCC:
    lwz r4, 0xac(r27)
    cmpwi r4, 0x0
    ble lbl_fn_804BA970_000010D0
    lwz r3, 0x94(r27)
    subi r5, r3, 0xa
    neg r0, r5
    andc r0, r0, r5
    srawi r0, r0, 31
    and r0, r5, r0
    stw r0, 0x94(r27)
    cmpw r0, r3
    beq lbl_fn_804BA970_00001020
    subf r3, r0, r3
    li r0, 0x1
    subfic r3, r3, 0xa
    subf r3, r3, r4
    cmpwi r3, 0x1
    ble lbl_fn_804BA970_00001018
    mr r0, r3
lbl_fn_804BA970_00001018:
    stw r0, 0xac(r27)
    b lbl_fn_804BA970_00001028
lbl_fn_804BA970_00001020:
    li r0, 0x1
    stw r0, 0xac(r27)
lbl_fn_804BA970_00001028:
    mr r3, r27
    li r4, 0x0
    bl fn_804BB2CC
    b lbl_fn_804BA970_000010D0
lbl_fn_804BA970_00001038:
    mr r3, r30
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804BA970_00001068
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804BA970_000010D0
lbl_fn_804BA970_00001068:
    lwz r3, 0xac(r27)
    addi r3, r3, 0x1
    stw r3, 0xac(r27)
    cmpwi r3, 0xa
    ble lbl_fn_804BA970_000010C0
    lwz r4, 0x94(r27)
    lwz r0, 0xb4(r27)
    add r3, r4, r3
    cmpw r3, r0
    bgt lbl_fn_804BA970_000010A4
    addi r0, r4, 0x1
    stw r0, 0x94(r27)
    mr r3, r27
    li r4, 0x0
    bl fn_804BB2CC
lbl_fn_804BA970_000010A4:
    lwz r3, 0xb4(r27)
    li r0, 0xa
    cmpwi r3, 0xa
    bgt lbl_fn_804BA970_000010B8
    mr r0, r3
lbl_fn_804BA970_000010B8:
    stw r0, 0xac(r27)
    b lbl_fn_804BA970_000010D0
lbl_fn_804BA970_000010C0:
    lwz r0, 0xb4(r27)
    cmpw r3, r0
    blt lbl_fn_804BA970_000010D0
    stw r0, 0xac(r27)
lbl_fn_804BA970_000010D0:
    mr r3, r30
    li r4, 0x0
    li r5, 0x18
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804BA970_00001100
    mr r3, r30
    li r4, 0x0
    li r5, 0x3
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804BA970_000011A0
lbl_fn_804BA970_00001100:
    lwz r0, 0xac(r27)
    cmpwi r0, 0x0
    ble lbl_fn_804BA970_000011A0
    lwz r4, 0xb4(r27)
    lwz r3, 0x94(r27)
    subi r0, r4, 0xa
    cmpw r3, r0
    blt lbl_fn_804BA970_00001134
    cmpwi r4, 0xa
    li r0, 0xa
    bge lbl_fn_804BA970_00001130
    mr r0, r4
lbl_fn_804BA970_00001130:
    stw r0, 0xac(r27)
lbl_fn_804BA970_00001134:
    lwz r3, 0xb4(r27)
    cmpwi r3, 0xa
    ble lbl_fn_804BA970_00001194
    lwz r4, 0x94(r27)
    subi r5, r3, 0xa
    addi r0, r4, 0xa
    cmpw r0, r5
    bge lbl_fn_804BA970_00001158
    mr r5, r0
lbl_fn_804BA970_00001158:
    cmpw r5, r4
    stw r5, 0x94(r27)
    beq lbl_fn_804BA970_0000118C
    lwz r3, 0xac(r27)
    subf r4, r4, r5
    li r0, 0xa
    addi r3, r3, 0xa
    subf r3, r4, r3
    cmpwi r3, 0xa
    bge lbl_fn_804BA970_00001184
    mr r0, r3
lbl_fn_804BA970_00001184:
    stw r0, 0xac(r27)
    b lbl_fn_804BA970_00001194
lbl_fn_804BA970_0000118C:
    li r0, 0xa
    stw r0, 0xac(r27)
lbl_fn_804BA970_00001194:
    mr r3, r27
    li r4, 0x0
    bl fn_804BB2CC
lbl_fn_804BA970_000011A0:
    lwz r0, 0xac(r27)
    cmpw r0, r29
    bne lbl_fn_804BA970_000011B8
    lwz r0, 0x94(r27)
    cmpw r28, r0
    beq lbl_fn_804BA970_000011D0
lbl_fn_804BA970_000011B8:
    addi r3, r1, 0x10
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_804BA970_000011D0:
    cmpwi r31, 0x1
    bne lbl_fn_804BA970_00001370
    lwz r3, 0xac(r27)
    li r28, 0x0
    cmpwi r3, 0x0
    bne lbl_fn_804BA970_00001218
    lwz r3, lbl_8087F628
    li r0, 0x1
    li r28, 0x1
    stb r0, 0x90(r3)
    lwz r3, lbl_8087F610
    lwz r0, 0x540(r3)
    cmpwi r0, 0x2
    beq lbl_fn_804BA970_00001344
    lwz r3, lbl_8087F59C
    li r0, 0x3
    stw r0, 0xc4(r3)
    b lbl_fn_804BA970_00001344
lbl_fn_804BA970_00001218:
    lwz r0, 0x100(r27)
    cmplw r3, r0
    bgt lbl_fn_804BA970_00001344
    subi r0, r3, 0x1
    lis r4, lbl_80758640@ha
    slwi r0, r0, 2
    add r3, r27, r0
    addi r4, r4, lbl_80758640@l
    lwz r3, 0x50(r3)
    addi r4, r4, 0x178
    addi r3, r3, 0x58
    bl fn_801FEC74
    mr r4, r3
    addi r3, r1, 0x14
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x14(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804BA970_00001270
    addi r31, r1, 0x16
    b lbl_fn_804BA970_00001274
lbl_fn_804BA970_00001270:
    lwz r31, 0x1c(r1)
lbl_fn_804BA970_00001274:
    cmpwi r0, 0x0
    beq lbl_fn_804BA970_00001284
    lwz r3, 0x1c(r1)
    bl dtor_80084684
lbl_fn_804BA970_00001284:
    lwz r3, 0x94(r27)
    lwz r0, 0xac(r27)
    lwz r5, 0xfc(r27)
    add r4, r3, r0
    lwz r3, lbl_8087F610
    subi r0, r4, 0x1
    slwi r0, r0, 2
    lwzx r4, r5, r0
    bl fn_804DC7C4
    lwz r4, 0x94(r27)
    mr r30, r3
    lwz r0, 0xac(r27)
    lwz r5, 0xfc(r27)
    add r4, r4, r0
    lwz r3, lbl_8087F610
    subi r0, r4, 0x1
    slwi r0, r0, 2
    lwzx r4, r5, r0
    bl fn_804DC810
    mr r29, r3
    mr r3, r31
    la r4, lbl_8087E108
    bl fn_80686AF0
    cmpwi r3, 0x0
    beq lbl_fn_804BA970_00001344
    cmpw r30, r29
    bge lbl_fn_804BA970_00001344
    lwz r3, lbl_8087F628
    li r0, 0x0
    li r28, 0x1
    stb r0, 0x90(r3)
    lwz r4, 0x94(r27)
    lwz r0, 0xac(r27)
    lwz r3, lbl_8087F628
    add r4, r4, r0
    lwz r5, 0xfc(r27)
    subi r0, r4, 0x1
    addis r3, r3, 0x1
    slwi r0, r0, 2
    lwzx r0, r5, r0
    stb r0, -0x3dec(r3)
    lwz r3, lbl_8087F610
    lwz r0, 0x540(r3)
    cmpwi r0, 0x2
    beq lbl_fn_804BA970_00001344
    lwz r3, lbl_8087F59C
    li r0, 0x3
    stw r0, 0xc4(r3)
lbl_fn_804BA970_00001344:
    cmplwi r28, 0x1
    bne lbl_fn_804BA970_00001398
    lwz r3, lbl_8087F59C
    lwz r4, 0xc4(r3)
    bl fn_804B4150
    lwz r3, lbl_8087F610
    bl fn_804DB478
    mr r3, r27
    li r4, 0x8
    bl fn_804BA350
    b lbl_fn_804BA970_00001398
lbl_fn_804BA970_00001370:
    cmpwi r31, 0x2
    bne lbl_fn_804BA970_00001398
    li r0, 0x1
    stw r0, 0xa0(r27)
    mr r3, r27
    li r4, 0x4
    bl fn_804BA350
    lwz r3, lbl_8087F610
    li r4, 0x0
    bl fn_804DC454
lbl_fn_804BA970_00001398:
    lfs f0, lbl_808873D8
    lis r28, lbl_80758640@ha
    stfs f0, 0x34(r1)
    addi r28, r28, lbl_80758640@l
    addi r3, r28, 0x158
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    lwz r29, 0x4c(r27)
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r29
    addi r3, r1, 0x20
    bl fn_801F4E8C
    lfs f4, 0x20(r1)
    addi r4, r28, 0x165
    lfs f3, 0x24(r1)
    addi r5, r1, 0x34
    lfs f2, 0x28(r1)
    lfs f1, 0x30(r1)
    lfs f0, lbl_808873E4
    stfs f4, 0x34(r1)
    stfs f3, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f1, 0x44(r1)
    stfs f0, 0x40(r1)
    lwz r3, 0x80(r27)
    bl fn_801F4728
    lwz r4, 0x80(r27)
    addi r3, r28, 0x16d
    addi r27, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873EC
    mr r4, r3
    mr r3, r27
    bl fn_801FECE0
lbl_fn_804BA970_0000142C:
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_804BAFAC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r5, r3, 0xbc
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    b lbl_fn_804BAFAC_0000147C
lbl_fn_804BAFAC_00001460:
    lwz r4, 0x0(r5)
    cmpwi r4, 0x0
    beq lbl_fn_804BAFAC_00001478
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_804BAFAC_00001478:
    addi r5, r5, 0x4
lbl_fn_804BAFAC_0000147C:
    lwz r0, 0xb8(r3)
    slwi r0, r0, 2
    add r4, r3, r0
    addi r0, r4, 0xbc
    cmplw r5, r0
    bne lbl_fn_804BAFAC_00001460
    lwz r4, 0x88(r3)
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    ble lbl_fn_804BAFAC_000014BC
    subi r0, r4, 0x4
    cmplwi r0, 0x1
    ble lbl_fn_804BAFAC_000014C8
    cmpwi r4, 0x8
    beq lbl_fn_804BAFAC_0000153C
    b lbl_fn_804BAFAC_00001590
lbl_fn_804BAFAC_000014BC:
    mr r3, r31
    bl fn_804BB10C
    b lbl_fn_804BAFAC_00001590
lbl_fn_804BAFAC_000014C8:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r4, 0x48(r31)
    lis r3, lbl_80758640@ha
    addi r3, r3, lbl_80758640@l
    lwz r0, 0x38(r4)
    addi r3, r3, 0x186
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x4c(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x80(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x4c(r31)
    addi r31, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873F0
    mr r4, r3
    mr r3, r31
    li r5, 0x0
    bl fn_801FEDBC
    b lbl_fn_804BAFAC_00001590
lbl_fn_804BAFAC_0000153C:
    lwz r4, 0x84(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, lbl_8087F628
    addis r4, r4, 0x1
    lwz r0, -0x3e08(r4)
    cmpwi r0, 0x8
    beq lbl_fn_804BAFAC_0000156C
    lwz r0, -0x3e0c(r4)
    cmpwi r0, 0x1
    bne lbl_fn_804BAFAC_00001590
lbl_fn_804BAFAC_0000156C:
    lwz r4, lbl_8087F610
    addis r4, r4, 0x1
    lwz r0, -0x6614(r4)
    cmpwi r0, 0x0
    bgt lbl_fn_804BAFAC_00001590
    lwz r3, 0x7c(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_804BAFAC_00001590:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804BB10C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    lwz r0, lbl_8087F580
    cmpwi r0, 0x0
    beq lbl_fn_804BB10C_0000174C
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804BB10C_0000162C
    lwz r5, 0xac(r31)
    lis r4, lbl_80758640@ha
    addi r4, r4, lbl_80758640@l
    addi r3, r1, 0x20
    addi r4, r4, 0x18e
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    lwz r30, 0x4c(r31)
    addi r3, r1, 0x20
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lwz r3, lbl_8087F580
    addi r6, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    li r7, 0x0
    bl fn_804A53D4
lbl_fn_804BB10C_0000162C:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758640@ha
    addi r3, r3, lbl_80758640@l
    lwz r0, 0x38(r4)
    addi r3, r3, 0x186
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x4c(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x50(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x54(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x58(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x5c(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x60(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x64(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x68(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x6c(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x70(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x74(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x80(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x78(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x4c(r31)
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873F0
    mr r4, r3
    mr r3, r30
    li r5, 0x0
    bl fn_801FEDBC
    lwz r3, 0x80(r31)
    li r6, 0xa
    lwz r4, 0x94(r31)
    lwz r5, 0x100(r31)
    bl fn_804A4738
lbl_fn_804BB10C_0000174C:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_804BB2CC(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r11, r1, 0x130
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    bl _savegpr_14
    cmpwi r4, 0x0
    mr r27, r3
    beq lbl_fn_804BB2CC_00001B38
    lwz r0, 0x100(r3)
    li r4, 0x0
    subf r0, r0, r0
    stw r0, 0x100(r3)
    lwz r3, lbl_8087F628
    addi r24, r3, 0x430
    mr r3, r24
    bl fn_8050F5AC
    lis r4, __files@ha
    lis r5, lbl_80758640@ha
    mr r25, r3
    addi r23, r1, 0x14
    addi r21, r5, lbl_80758640@l
    addi r20, r4, __files@l
    lis r16, 0xcccd
    lis r22, 0x4000
    li r19, 0x0
    lis r17, 0x1555
    lis r15, 0x2aab
    lis r14, lbl_80775A88@ha
    b lbl_fn_804BB2CC_00001A64
lbl_fn_804BB2CC_000017E8:
    mr r3, r24
    bl fn_8050F86C
    cmpwi r3, 0x0
    beq lbl_fn_804BB2CC_00001A54
    lwz r3, lbl_8087F610
    mr r4, r25
    bl fn_804DC118
    cmpwi r3, -0x1
    beq lbl_fn_804BB2CC_00001A54
    lwz r4, 0x100(r27)
    lwz r3, 0x104(r27)
    cmplw r4, r3
    bge lbl_fn_804BB2CC_00001838
    addi r4, r4, 0x1
    lwz r3, 0xfc(r27)
    slwi r0, r4, 2
    stw r4, 0x100(r27)
    add r3, r3, r0
    stw r25, -0x4(r3)
    b lbl_fn_804BB2CC_00001A54
lbl_fn_804BB2CC_00001838:
    subi r0, r22, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_804BB2CC_0000185C
    addi r4, r21, 0x19a
    addi r3, r20, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804BB2CC_0000185C:
    addi r3, r27, 0x104
    stw r19, 0x14(r1)
    subi r0, r22, 0x1
    stw r19, 0x18(r1)
    stw r19, 0x1c(r1)
    stw r3, 0x20(r1)
    stw r19, 0x24(r1)
    lwz r3, 0x100(r27)
    lwz r18, 0x104(r27)
    addi r3, r3, 0x1
    subf r3, r18, r3
    subf r0, r18, r0
    cmplw r3, r0
    stw r3, 0x10(r1)
    ble lbl_fn_804BB2CC_000018AC
    addi r4, r21, 0x19a
    addi r3, r20, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804BB2CC_000018AC:
    addi r0, r17, 0x5555
    cmplw r18, r0
    bge lbl_fn_804BB2CC_000018F4
    addi r4, r18, 0x1
    subi r5, r16, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x10(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_804BB2CC_000018E8
    addi r3, r1, 0x10
lbl_fn_804BB2CC_000018E8:
    lwz r0, 0x0(r3)
    add r26, r18, r0
    b lbl_fn_804BB2CC_00001930
lbl_fn_804BB2CC_000018F4:
    subi r0, r15, 0x5556
    cmplw r18, r0
    bge lbl_fn_804BB2CC_0000192C
    addi r3, r18, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_804BB2CC_00001920
    addi r3, r1, 0x10
lbl_fn_804BB2CC_00001920:
    lwz r0, 0x0(r3)
    add r26, r18, r0
    b lbl_fn_804BB2CC_00001930
lbl_fn_804BB2CC_0000192C:
    subi r26, r22, 0x1
lbl_fn_804BB2CC_00001930:
    subi r0, r22, 0x1
    cmplw r26, r0
    ble lbl_fn_804BB2CC_00001950
    addi r4, r21, 0x19a
    addi r3, r20, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804BB2CC_00001950:
    slwi r3, r26, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r18, r3
    bne lbl_fn_804BB2CC_00001978
    addi r3, r20, 0xa0
    addi r4, r14, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804BB2CC_00001978:
    lwz r0, 0x18(r1)
    stw r18, 0x14(r1)
    slwi r3, r0, 2
    stw r26, 0x1c(r1)
    lwz r0, 0x100(r27)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r18, r0
    stwx r25, r3, r0
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x100(r27)
    lwz r25, 0xfc(r27)
    slwi r4, r4, 2
    add r5, r25, r4
    subf r5, r25, r5
    mr r4, r25
    srawi r5, r5, 2
    addze r18, r5
    subf r0, r18, r0
    stw r0, 0x24(r1)
    slwi r26, r18, 2
    slwi r0, r0, 2
    mr r5, r26
    add r3, r3, r0
    bl memcpy
    mr r3, r25
    mr r5, r26
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    cmpwi r23, 0x0
    add r0, r0, r18
    stw r0, 0x18(r1)
    stw r19, 0x100(r27)
    lwz r3, 0x104(r27)
    lwz r0, 0x1c(r1)
    stw r0, 0x104(r27)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0xfc(r27)
    stw r0, 0xfc(r27)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x100(r27)
    stw r19, 0x18(r1)
    beq lbl_fn_804BB2CC_00001A54
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_804BB2CC_00001A54
    stw r19, 0x18(r1)
    bl dtor_80084684
lbl_fn_804BB2CC_00001A54:
    mr r3, r24
    li r4, 0x0
    bl fn_8050F668
    mr r25, r3
lbl_fn_804BB2CC_00001A64:
    cmpwi r25, -0x1
    mr r4, r25
    bne lbl_fn_804BB2CC_000017E8
    li r0, 0x0
    stw r0, 0xb4(r27)
    li r15, 0x0
    li r14, 0x0
    b lbl_fn_804BB2CC_00001AB0
lbl_fn_804BB2CC_00001A84:
    lwz r4, 0xfc(r27)
    lwz r3, lbl_8087F610
    lwzx r4, r4, r14
    bl fn_804DC118
    cmpwi r3, 0x0
    blt lbl_fn_804BB2CC_00001AA8
    lwz r3, 0xb4(r27)
    addi r0, r3, 0x1
    stw r0, 0xb4(r27)
lbl_fn_804BB2CC_00001AA8:
    addi r15, r15, 0x1
    addi r14, r14, 0x4
lbl_fn_804BB2CC_00001AB0:
    lwz r0, 0x100(r27)
    cmplw r15, r0
    blt lbl_fn_804BB2CC_00001A84
    lwz r4, 0xb4(r27)
    cmpwi r4, 0xa
    ble lbl_fn_804BB2CC_00001AF4
    lwz r3, 0x94(r27)
    addi r0, r3, 0xa
    cmpw r0, r4
    ble lbl_fn_804BB2CC_00001AFC
    subi r3, r4, 0xa
    neg r0, r3
    andc r0, r0, r3
    srawi r0, r0, 31
    and r0, r3, r0
    stw r0, 0x94(r27)
    b lbl_fn_804BB2CC_00001AFC
lbl_fn_804BB2CC_00001AF4:
    li r0, 0x0
    stw r0, 0x94(r27)
lbl_fn_804BB2CC_00001AFC:
    lwz r0, 0xac(r27)
    cmpwi r0, 0x0
    ble lbl_fn_804BB2CC_00001B38
    lwz r4, 0x94(r27)
    lwz r5, 0xb4(r27)
    add r3, r4, r0
    subi r0, r3, 0x1
    cmpw r0, r5
    blt lbl_fn_804BB2CC_00001B38
    subf r3, r4, r5
    neg r0, r3
    andc r0, r0, r3
    srawi r0, r0, 31
    and r0, r3, r0
    stw r0, 0xac(r27)
lbl_fn_804BB2CC_00001B38:
    lis r3, lbl_80758600@ha
    lwzu r12, lbl_80758600@l(r3)
    li r15, 0x0
    lfs f31, lbl_808873D8
    lwz r11, 0x4(r3)
    lis r24, lbl_80758640@ha
    lwz r10, 0x8(r3)
    addi r24, r24, lbl_80758640@l
    lwz r9, 0xc(r3)
    mr r30, r27
    lwz r8, 0x10(r3)
    addi r31, r1, 0x78
    lwz r7, 0x14(r3)
    li r28, 0x0
    lwz r6, 0x18(r3)
    la r26, lbl_8087E108
    lwz r5, 0x1c(r3)
    la r14, lbl_8087E108
    lwz r4, 0x20(r3)
    la r22, lbl_8087E108
    lwz r0, 0x24(r3)
    la r21, lbl_8087E108
    lwz r3, lbl_8087F628
    la r20, lbl_8087E108
    stw r15, 0xa0(r1)
    la r19, lbl_8087E108
    addi r16, r3, 0x430
    la r18, lbl_8087E108
    stw r15, 0xa4(r1)
    la r17, lbl_8087E108
    stw r15, 0xa8(r1)
    stw r15, 0xac(r1)
    stw r15, 0xb0(r1)
    stw r15, 0xb4(r1)
    stw r15, 0xb8(r1)
    stw r15, 0xbc(r1)
    stw r15, 0xc0(r1)
    stw r15, 0xc4(r1)
    stw r15, 0xc8(r1)
    stw r15, 0xcc(r1)
    stw r15, 0xd0(r1)
    stw r15, 0xd4(r1)
    stw r15, 0xd8(r1)
    stw r15, 0xdc(r1)
    stfs f31, 0x60(r1)
    stfs f31, 0x64(r1)
    stfs f31, 0x68(r1)
    stfs f31, 0x6c(r1)
    stfs f31, 0x70(r1)
    stw r12, 0x78(r1)
    stw r11, 0x7c(r1)
    stw r10, 0x80(r1)
    stw r9, 0x84(r1)
    stw r8, 0x88(r1)
    stw r7, 0x8c(r1)
    stw r6, 0x90(r1)
    stw r5, 0x94(r1)
    stw r4, 0x98(r1)
    stw r0, 0x9c(r1)
lbl_fn_804BB2CC_00001C24:
    lwz r0, 0x94(r27)
    addi r3, r1, 0xa0
    lwz r5, 0x0(r31)
    addi r4, r24, 0x1ae
    add r15, r28, r0
    crclr 6
    bl sprintf
    lwz r23, 0x4c(r27)
    addi r3, r1, 0xa0
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r23
    addi r3, r1, 0x28
    bl fn_801F4E8C
    lfs f4, 0x28(r1)
    addi r4, r24, 0x1bd
    lfs f3, 0x2c(r1)
    addi r5, r1, 0x60
    lfs f2, 0x30(r1)
    lfs f1, 0x34(r1)
    lfs f0, 0x38(r1)
    stfs f4, 0x60(r1)
    stfs f3, 0x64(r1)
    stfs f2, 0x68(r1)
    stfs f1, 0x6c(r1)
    stfs f0, 0x70(r1)
    lwz r3, 0x50(r30)
    bl fn_801F4728
    lwz r0, 0x100(r27)
    cmplw r15, r0
    bge lbl_fn_804BB2CC_00001F1C
    lwz r4, 0xfc(r27)
    slwi r29, r15, 2
    lwz r3, lbl_8087F610
    lwzx r4, r4, r29
    bl fn_804DC118
    cmpwi r3, 0x0
    lfs f30, lbl_808873E8
    mr r25, r3
    blt lbl_fn_804BB2CC_00001DA4
    lwz r4, 0xfc(r27)
    mr r3, r16
    lwzx r4, r4, r29
    bl fn_8050F768
    lwz r4, 0xfc(r27)
    mr r3, r16
    lwzx r4, r4, r29
    bl fn_8050F728
    lwz r4, 0x50(r30)
    mr r23, r3
    addi r3, r24, 0x1cb
    addi r15, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r15
    mr r5, r23
    bl fn_801FEE08
    cmpwi r25, 0x1
    bne lbl_fn_804BB2CC_00001D50
    lwz r4, 0xfc(r27)
    lwz r3, lbl_8087F610
    lwzx r4, r4, r29
    bl fn_804DC7C4
    lwz r4, 0xfc(r27)
    mr r15, r3
    lwz r3, lbl_8087F610
    lwzx r4, r4, r29
    bl fn_804DC810
    cmpw r15, r3
    blt lbl_fn_804BB2CC_00001D44
    li r0, 0x123
    b lbl_fn_804BB2CC_00001D60
lbl_fn_804BB2CC_00001D44:
    lfs f30, lbl_808873F4
    li r0, 0x11c
    b lbl_fn_804BB2CC_00001D60
lbl_fn_804BB2CC_00001D50:
    cmpwi r25, 0x5
    li r0, 0x123
    beq lbl_fn_804BB2CC_00001D60
    addi r0, r25, 0x11b
lbl_fn_804BB2CC_00001D60:
    lwz r3, lbl_8087F86C
    slwi r0, r0, 3
    add r3, r3, r0
    lwz r15, 0x4c(r3)
    cmpwi r15, 0x0
    beq lbl_fn_804BB2CC_00001D7C
    b lbl_fn_804BB2CC_00001D80
lbl_fn_804BB2CC_00001D7C:
    la r15, lbl_808813D0
lbl_fn_804BB2CC_00001D80:
    lwz r4, 0x50(r30)
    addi r3, r24, 0x1d9
    addi r23, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r23
    mr r5, r15
    bl fn_801FEE08
    b lbl_fn_804BB2CC_00001DE4
lbl_fn_804BB2CC_00001DA4:
    lwz r4, 0x50(r30)
    addi r3, r24, 0x1cb
    addi r15, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r15
    la r5, lbl_8087E108
    bl fn_801FEE08
    lwz r4, 0x50(r30)
    addi r3, r24, 0x1d9
    addi r15, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r15
    la r5, lbl_8087E108
    bl fn_801FEE08
lbl_fn_804BB2CC_00001DE4:
    lwz r3, 0x50(r30)
    cmpwi r25, 0x1
    stfs f31, 0x104(r3)
    lwz r3, 0x50(r30)
    stfs f30, 0x100(r3)
    bne lbl_fn_804BB2CC_00001EB8
    lwz r4, 0xfc(r27)
    lwz r3, lbl_8087F610
    lwzx r4, r4, r29
    bl fn_804DC7C4
    mr r5, r3
    addi r3, r1, 0x40
    addi r4, r26, 0x2
    crclr 6
    bl fn_800DD3FC
    lwz r4, 0x50(r30)
    addi r3, r24, 0x178
    addi r15, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r15
    addi r5, r1, 0x40
    bl fn_801FEE08
    addi r3, r1, 0x40
    addi r4, r26, 0x8
    crclr 6
    bl fn_800DD3FC
    lwz r4, 0x50(r30)
    addi r3, r24, 0x1e7
    addi r15, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r15
    addi r5, r1, 0x40
    bl fn_801FEE08
    lwz r4, 0xfc(r27)
    lwz r3, lbl_8087F610
    lwzx r4, r4, r29
    bl fn_804DC810
    mr r5, r3
    addi r3, r1, 0x40
    addi r4, r26, 0x2
    crclr 6
    bl fn_800DD3FC
    lwz r4, 0x50(r30)
    addi r3, r24, 0x1f5
    addi r15, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r15
    addi r5, r1, 0x40
    bl fn_801FEE08
    b lbl_fn_804BB2CC_00001FBC
lbl_fn_804BB2CC_00001EB8:
    lwz r4, 0x50(r30)
    addi r3, r24, 0x178
    addi r15, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r15
    mr r5, r14
    bl fn_801FEE08
    lwz r4, 0x50(r30)
    addi r3, r24, 0x1e7
    addi r15, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r15
    mr r5, r22
    bl fn_801FEE08
    lwz r4, 0x50(r30)
    addi r3, r24, 0x1f5
    addi r15, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r15
    mr r5, r21
    bl fn_801FEE08
    b lbl_fn_804BB2CC_00001FBC
lbl_fn_804BB2CC_00001F1C:
    lwz r4, 0x50(r30)
    addi r3, r24, 0x1cb
    addi r15, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r15
    mr r5, r20
    bl fn_801FEE08
    lwz r3, 0x50(r30)
    mr r5, r24
    addi r4, r24, 0x1d9
    bl fn_801F4C14
    lwz r4, 0x50(r30)
    addi r3, r24, 0x178
    addi r15, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r15
    mr r5, r19
    bl fn_801FEE08
    lwz r4, 0x50(r30)
    addi r3, r24, 0x1e7
    addi r15, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r15
    mr r5, r18
    bl fn_801FEE08
    lwz r4, 0x50(r30)
    addi r3, r24, 0x1f5
    addi r15, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r15
    mr r5, r17
    bl fn_801FEE08
    lwz r3, 0x50(r30)
    stfs f31, 0x104(r3)
    lwz r3, 0x50(r30)
    stfs f31, 0x100(r3)
lbl_fn_804BB2CC_00001FBC:
    addi r28, r28, 0x1
    addi r30, r30, 0x4
    cmpwi r28, 0xa
    addi r31, r31, 0x4
    blt lbl_fn_804BB2CC_00001C24
    addi r11, r1, 0x130
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    bl _restgpr_14
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}
