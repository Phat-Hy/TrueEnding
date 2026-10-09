#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTime(void);
extern void __div2i(void);
extern void _restgpr_16(void);
extern void _savegpr_16(void);
extern void fn_806809C0(void);
extern void fn_806A420C(void);
extern void fn_806A4270(void);
extern void fn_806A7130(void);
extern void fn_806A76B0(void);
extern void fn_806AB920(void);
extern void fn_806AB980(void);
extern void fn_806ACCF0(void);
extern void fn_806ACE00(void);
extern void fn_806B0980(void);
extern void fn_806B1230(void);
extern void fn_806B12F0(void);
extern void fn_806B14D0(void);
extern void fn_806B1680(void);
extern void fn_806B1A00(void);
extern void fn_806BAC80(void);
extern void fn_806BBCA0(void);
extern void fn_806BC010(void);
extern void fn_806BC4C0(void);
extern void fn_806BC860(void);
extern void fn_806BFBA0(void);
extern void fn_806C03B0(void);
extern void fn_806C0980(void);
extern void fn_806C0C20(void);
extern void fn_806C10C0(void);
extern void fn_806C1430(void);
extern void fn_806C1AC0(void);
extern void fn_806C3ED0(void);
extern void fn_806C50A0(void);
extern void fn_806C5C10(void);
extern void fn_806C5EB0(void);
extern void fn_806CA040(void);
extern void fn_806CBB20(void);
extern void fn_806CD150(void);
extern void fn_806CE700(void);
extern void fn_806DB310(void);
extern void fn_806EAC30(void);
extern void fn_806EAD00(void);

/* External data declarations */
extern u8 jumptable_807C0448[];
extern u8 jumptable_807C046C[];
extern u8 lbl_807BE9D0[];
extern u8 lbl_807C16F0[];
extern u8 lbl_80860890[];
extern u8 lbl_80860898[];

/* Small data declarations */

/* Function declarations */
void pad_03_806BCD34_text(void);
void fn_806BCD40(void);

asm void pad_03_806BCD34_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
    opword 0x00000000
}

asm void fn_806BCD40(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    addi r11, r1, 0x230
    bl _savegpr_16
    lis r19, lbl_80860898@ha
    lis r27, lbl_807BE9D0@ha
    lwz r9, lbl_80860898@l(r19)
    mr r24, r3
    mr r29, r4
    mr r22, r5
    cmpwi r9, 0x0
    mr r23, r6
    mr r30, r7
    mr r31, r8
    addi r27, r27, lbl_807BE9D0@l
    li r25, 0x0
    beq lbl_fn_806BCD40_00000060
    lwz r0, 0x744(r9)
    cmpwi r0, 0x0
    bne lbl_fn_806BCD40_00000068
lbl_fn_806BCD40_00000060:
    li r3, 0x1
    b lbl_fn_806BCD40_00002E48
lbl_fn_806BCD40_00000068:
    bl fn_806B1230
    cmpwi r3, 0x4
    bne lbl_fn_806BCD40_000000B4
    lwz r3, lbl_80860898@l(r19)
    lwz r0, 0x744(r3)
    cmpwi r0, 0x1
    bne lbl_fn_806BCD40_000000B4
    lwz r0, 0x58(r3)
    cmpwi r0, 0x1
    blt lbl_fn_806BCD40_000000B4
    lwz r0, 0x60(r3)
    cmpw r29, r0
    bne lbl_fn_806BCD40_000000B4
    li r0, 0x0
    stb r0, 0x756(r3)
    bl OSGetTime
    lwz r5, lbl_80860898@l(r19)
    stw r4, 0x7a4(r5)
    stw r3, 0x7a0(r5)
lbl_fn_806BCD40_000000B4:
    cmpwi r24, 0x10
    beq lbl_fn_806BCD40_000023A4
    bge lbl_fn_806BCD40_00000120
    cmpwi r24, 0x7
    beq lbl_fn_806BCD40_00001C34
    bge lbl_fn_806BCD40_000000F8
    cmpwi r24, 0x3
    beq lbl_fn_806BCD40_000011E8
    bge lbl_fn_806BCD40_000000E8
    cmpwi r24, 0x1
    beq lbl_fn_806BCD40_00000180
    bge lbl_fn_806BCD40_00000934
    b lbl_fn_806BCD40_00002E30
lbl_fn_806BCD40_000000E8:
    cmpwi r24, 0x5
    beq lbl_fn_806BCD40_000018BC
    bge lbl_fn_806BCD40_00001A40
    b lbl_fn_806BCD40_000015B8
lbl_fn_806BCD40_000000F8:
    cmpwi r24, 0xb
    beq lbl_fn_806BCD40_00002E30
    bge lbl_fn_806BCD40_00000114
    cmpwi r24, 0x9
    beq lbl_fn_806BCD40_00001E20
    bge lbl_fn_806BCD40_000021B8
    b lbl_fn_806BCD40_00001EC0
lbl_fn_806BCD40_00000114:
    cmpwi r24, 0xd
    bge lbl_fn_806BCD40_0000236C
    b lbl_fn_806BCD40_0000229C
lbl_fn_806BCD40_00000120:
    cmpwi r24, 0x55
    beq lbl_fn_806BCD40_00002AF8
    bge lbl_fn_806BCD40_0000015C
    cmpwi r24, 0x52
    beq lbl_fn_806BCD40_00002564
    bge lbl_fn_806BCD40_00000150
    cmpwi r24, 0x41
    beq lbl_fn_806BCD40_00002E44
    bge lbl_fn_806BCD40_00002E30
    cmpwi r24, 0x40
    bge lbl_fn_806BCD40_00002500
    b lbl_fn_806BCD40_00002E30
lbl_fn_806BCD40_00000150:
    cmpwi r24, 0x54
    bge lbl_fn_806BCD40_00002A90
    b lbl_fn_806BCD40_000028CC
lbl_fn_806BCD40_0000015C:
    cmpwi r24, 0x82
    beq lbl_fn_806BCD40_00002C18
    bge lbl_fn_806BCD40_00000174
    cmpwi r24, 0x70
    beq lbl_fn_806BCD40_00002B20
    b lbl_fn_806BCD40_00002E30
lbl_fn_806BCD40_00000174:
    cmpwi r24, 0x84
    bge lbl_fn_806BCD40_00002E30
    b lbl_fn_806BCD40_00002E24
lbl_fn_806BCD40_00000180:
    lwz r7, 0x0(r30)
    addi r3, r1, 0xb0
    li r4, 0x0
    li r5, 0x30
    rlwinm r6, r7, 24, 8, 15
    extlwi r0, r7, 8, 8
    rlwimi r6, r7, 24, 24, 31
    rlwimi r0, r7, 8, 16, 23
    or r0, r6, r0
    rotlwi r26, r0, 16
    bl memset
    lwz r18, 0x8(r30)
    li r19, 0xff
    lwz r17, 0x10(r30)
    addi r3, r1, 0xd8
    lwz r16, 0x14(r30)
    rlwinm r28, r18, 24, 8, 15
    lwz r4, 0x18(r30)
    extlwi r24, r18, 8, 8
    lwz r5, 0x1c(r30)
    rlwinm r20, r17, 24, 8, 15
    extlwi r12, r17, 8, 8
    rlwinm r11, r16, 24, 8, 15
    extlwi r10, r16, 8, 8
    rlwinm r9, r4, 24, 8, 15
    extlwi r8, r4, 8, 8
    rlwinm r7, r5, 24, 8, 15
    extlwi r6, r5, 8, 8
    lwz r0, 0x4(r30)
    lwz r21, 0xc(r30)
    rlwimi r28, r18, 24, 24, 31
    rlwimi r24, r18, 8, 16, 23
    rlwimi r20, r17, 24, 24, 31
    rlwimi r12, r17, 8, 16, 23
    rlwimi r11, r16, 24, 24, 31
    rlwimi r10, r16, 8, 16, 23
    or r18, r28, r24
    or r17, r20, r12
    rlwimi r9, r4, 24, 24, 31
    or r10, r11, r10
    rlwimi r8, r4, 8, 16, 23
    srwi r12, r18, 16
    srwi r11, r17, 16
    extrwi r10, r10, 8, 8
    or r4, r9, r8
    rotlwi r24, r4, 16
    rlwimi r7, r5, 24, 24, 31
    rlwimi r6, r5, 8, 16, 23
    stb r19, 0xc6(r1)
    or r5, r7, r6
    addi r4, r30, 0x20
    rotlwi r28, r5, 16
    stw r29, 0xb0(r1)
    li r5, 0x4
    stw r0, 0xb4(r1)
    sth r12, 0xbc(r1)
    stw r21, 0xb8(r1)
    sth r11, 0xbe(r1)
    stb r10, 0xc7(r1)
    bl memcpy
    lwz r4, 0x24(r30)
    cmpwi r31, 0xb
    li r10, 0x0
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r31, r0, 16
    blt lbl_fn_806BCD40_000002C0
    lwz r4, 0x28(r30)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r3, r0, 16
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r10, r0, 5
lbl_fn_806BCD40_000002C0:
    neg r0, r24
    lwz r3, 0xb0(r1)
    or r0, r0, r24
    lwz r4, 0xb4(r1)
    lhz r5, 0xbc(r1)
    mr r6, r26
    mr r8, r28
    srwi r7, r0, 31
    addi r9, r1, 0xd8
    bl fn_806BFBA0
    clrlwi r0, r3, 24
    mr r30, r3
    cmplwi r0, 0x2
    bne lbl_fn_806BCD40_00000810
    lis r28, lbl_80860898@ha
    li r4, 0x0
    lwz r3, lbl_80860898@l(r28)
    li r5, 0x30
    addi r3, r3, 0x660
    bl memset
    lwz r7, lbl_80860898@l(r28)
    mr r3, r29
    lwz r0, 0xb4(r1)
    mr r4, r22
    lwz r6, 0xb0(r1)
    mr r5, r23
    stw r6, 0x660(r7)
    stw r0, 0x664(r7)
    lwz r0, 0xbc(r1)
    lwz r6, 0xb8(r1)
    stw r6, 0x668(r7)
    stw r0, 0x66c(r7)
    lwz r0, 0xc4(r1)
    lwz r6, 0xc0(r1)
    stw r6, 0x670(r7)
    stw r0, 0x674(r7)
    lwz r0, 0xcc(r1)
    lwz r6, 0xc8(r1)
    stw r6, 0x678(r7)
    stw r0, 0x67c(r7)
    lwz r0, 0xd4(r1)
    lwz r6, 0xd0(r1)
    stw r6, 0x680(r7)
    stw r0, 0x684(r7)
    lwz r0, 0xdc(r1)
    lwz r6, 0xd8(r1)
    stw r6, 0x688(r7)
    stw r0, 0x68c(r7)
    bl fn_806C03B0
    lwz r4, lbl_80860898@l(r28)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806BCD40_0000039C
    bl fn_806C5EB0
    b lbl_fn_806BCD40_000003A0
lbl_fn_806BCD40_0000039C:
    bl fn_806C5C10
lbl_fn_806BCD40_000003A0:
    cmpwi r3, 0x0
    beq lbl_fn_806BCD40_000003B0
    li r3, 0x0
    b lbl_fn_806BCD40_00002E48
lbl_fn_806BCD40_000003B0:
    lis r3, lbl_80860898@ha
    lwz r6, lbl_80860898@l(r3)
    lwz r0, 0x6c0(r6)
    cmpwi r0, 0x0
    beq lbl_fn_806BCD40_00000418
    lwz r0, 0x58(r6)
    mr r5, r6
    lwz r3, 0x660(r6)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806BCD40_0000040C
    nop
lbl_fn_806BCD40_000003E4:
    lwz r0, 0x60(r5)
    cmpw r3, r0
    bne lbl_fn_806BCD40_00000400
    mulli r0, r4, 0x30
    add r3, r6, r0
    addi r3, r3, 0x60
    b lbl_fn_806BCD40_00000410
lbl_fn_806BCD40_00000400:
    addi r5, r5, 0x30
    addi r4, r4, 0x1
    bdnz lbl_fn_806BCD40_000003E4
lbl_fn_806BCD40_0000040C:
    li r3, 0x0
lbl_fn_806BCD40_00000410:
    lbz r0, 0x16(r3)
    stb r0, 0x676(r6)
lbl_fn_806BCD40_00000418:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r0, 0x6c0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806BCD40_00000494
    lbz r0, 0x14(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806BCD40_00000494
    lwz r0, 0x744(r3)
    cmpwi r0, 0xe
    beq lbl_fn_806BCD40_00000494
    lbz r0, 0x15(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806BCD40_0000045C
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    bne lbl_fn_806BCD40_00000468
lbl_fn_806BCD40_0000045C:
    lbz r0, 0xd(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806BCD40_00000494
lbl_fn_806BCD40_00000468:
    lwz r0, 0x8a8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806BCD40_00000494
    lis r4, lbl_80860898@ha
    mr r3, r29
    lwz r16, lbl_80860898@l(r4)
    bl fn_806ACCF0
    lwz r12, 0x8a8(r16)
    lwz r4, 0x8ac(r16)
    mtctr r12
    bctrl
lbl_fn_806BCD40_00000494:
    lis r3, lbl_80860898@ha
    li r4, 0x0
    lwz r6, lbl_80860898@l(r3)
    lwz r0, 0x58(r6)
    mr r5, r6
    lwz r3, 0x7a8(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806BCD40_000004E4
    nop
lbl_fn_806BCD40_000004BC:
    lwz r0, 0x60(r5)
    cmpw r3, r0
    bne lbl_fn_806BCD40_000004D8
    mulli r0, r4, 0x30
    add r3, r6, r0
    addi r29, r3, 0x60
    b lbl_fn_806BCD40_000004E8
lbl_fn_806BCD40_000004D8:
    addi r5, r5, 0x30
    addi r4, r4, 0x1
    bdnz lbl_fn_806BCD40_000004BC
lbl_fn_806BCD40_000004E4:
    li r29, 0x0
lbl_fn_806BCD40_000004E8:
    lis r28, lbl_80860898@ha
    lwz r7, lbl_80860898@l(r28)
    lbz r0, 0x17(r7)
    extrwi r5, r0, 8, 16
    rlwinm r4, r0, 24, 8, 15
    clrlslwi r3, r0, 24, 8
    extlwi r0, r0, 8, 8
    or r4, r5, r4
    or r0, r3, r0
    or r0, r4, r0
    srwi r3, r0, 16
    slwi r0, r0, 16
    or r0, r3, r0
    stw r0, 0xe0(r1)
    lbz r0, 0x16(r29)
    extrwi r5, r0, 8, 16
    rlwinm r4, r0, 24, 8, 15
    clrlslwi r3, r0, 24, 8
    extlwi r0, r0, 8, 8
    or r4, r5, r4
    or r0, r3, r0
    or r0, r4, r0
    srwi r3, r0, 16
    slwi r0, r0, 16
    or r0, r3, r0
    stw r0, 0xe4(r1)
    lwz r4, 0x0(r29)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0xe8(r1)
    lwz r0, 0x4(r29)
    stw r0, 0xec(r1)
    lhz r0, 0xc(r29)
    extrwi r5, r0, 8, 16
    rlwinm r4, r0, 24, 8, 15
    clrlslwi r3, r0, 24, 8
    extlwi r0, r0, 8, 8
    or r4, r5, r4
    or r0, r3, r0
    or r0, r4, r0
    srwi r3, r0, 16
    slwi r0, r0, 16
    or r0, r3, r0
    stw r0, 0xf0(r1)
    lwz r0, 0x8(r29)
    stw r0, 0xf4(r1)
    lhz r0, 0xe(r29)
    extrwi r5, r0, 8, 16
    rlwinm r4, r0, 24, 8, 15
    clrlslwi r3, r0, 24, 8
    extlwi r0, r0, 8, 8
    or r4, r5, r4
    or r0, r3, r0
    or r0, r4, r0
    srwi r3, r0, 16
    slwi r0, r0, 16
    or r0, r3, r0
    stw r0, 0xf8(r1)
    lbz r4, 0x17(r29)
    rlwinm r3, r31, 24, 8, 15
    extlwi r0, r31, 8, 8
    lwz r5, 0xb0(r1)
    extrwi r10, r4, 8, 16
    rlwinm r9, r4, 24, 8, 15
    clrlslwi r8, r4, 24, 8
    extlwi r4, r4, 8, 8
    or r9, r10, r9
    rlwimi r3, r31, 24, 24, 31
    or r4, r8, r4
    rlwimi r0, r31, 8, 16, 23
    or r9, r9, r4
    or r10, r3, r0
    addi r4, r27, 0x1044
    srwi r8, r9, 16
    slwi r0, r9, 16
    or r0, r8, r0
    stw r0, 0xfc(r1)
    rotlwi r0, r10, 16
    li r3, 0x1
    lwz r8, 0x28(r29)
    stw r8, 0x100(r1)
    lwz r10, 0x8c0(r7)
    rlwinm r9, r10, 24, 8, 15
    extlwi r8, r10, 8, 8
    rlwimi r9, r10, 24, 24, 31
    rlwimi r8, r10, 8, 16, 23
    or r8, r9, r8
    rotlwi r8, r8, 16
    stw r8, 0x104(r1)
    lbz r8, 0x676(r7)
    extrwi r11, r8, 8, 16
    rlwinm r10, r8, 24, 8, 15
    clrlslwi r9, r8, 24, 8
    extlwi r8, r8, 8, 8
    stw r0, 0x10c(r1)
    or r10, r11, r10
    or r0, r9, r8
    or r0, r10, r0
    srwi r8, r0, 16
    slwi r0, r0, 16
    or r0, r8, r0
    stw r0, 0x108(r1)
    lwz r8, 0x58(r6)
    rlwinm r6, r8, 24, 8, 15
    extlwi r0, r8, 8, 8
    rlwimi r6, r8, 24, 24, 31
    rlwimi r0, r8, 8, 16, 23
    or r0, r6, r0
    rotlwi r0, r0, 16
    stw r0, 0x110(r1)
    lwz r6, 0x6c0(r7)
    neg r0, r6
    or r6, r0, r6
    srwi r0, r6, 31
    extrwi r8, r0, 8, 16
    rlwinm r6, r6, 9, 23, 23
    rlwinm r7, r0, 24, 8, 15
    extlwi r0, r0, 8, 8
    or r7, r8, r7
    or r0, r6, r0
    or r0, r7, r0
    rotlwi r0, r0, 16
    stw r0, 0x114(r1)
    crclr 6
    li r25, 0xe
    bl fn_806A76B0
    lbz r5, 0x16(r29)
    addi r4, r27, 0x1070
    li r3, 0x1
    crclr 6
    bl fn_806A76B0
    lwz r5, lbl_80860898@l(r28)
    addi r4, r27, 0x1088
    li r3, 0x1
    lwz r5, 0x8c0(r5)
    crclr 6
    bl fn_806A76B0
    lwz r5, lbl_80860898@l(r28)
    addi r4, r27, 0x109c
    li r3, 0x1
    lbz r5, 0x17(r5)
    crclr 6
    bl fn_806A76B0
    lwz r5, lbl_80860898@l(r28)
    addi r4, r27, 0x10b0
    li r3, 0x1
    lbz r5, 0x676(r5)
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r28)
    lwz r22, 0x744(r3)
    cmpwi r22, 0xe
    beq lbl_fn_806BCD40_000007FC
    lis r21, lbl_80860890@ha
    addi r20, r21, lbl_80860890@l
    lwz r16, lbl_80860890@l(r21)
    lwz r17, 0x4(r20)
    bl OSGetTime
    stw r4, 0x4(r20)
    lis r20, 0x1062
    lis r6, 0x8000
    subfc r4, r17, r4
    stw r3, lbl_80860890@l(r21)
    addi r7, r20, 0x4dd3
    subfe r3, r16, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r20, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r22, 2
    lwz r8, 0x38(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r27, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806BCD40_000007FC:
    lis r3, lbl_80860898@ha
    li r0, 0xe
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
    b lbl_fn_806BCD40_000008E0
lbl_fn_806BCD40_00000810:
    cmplwi r0, 0x3
    bne lbl_fn_806BCD40_000008E0
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lbz r3, 0x8e4(r3)
    subi r0, r3, 0x10
    cmplwi r0, 0x8
    bgt lbl_fn_806BCD40_00000890
    lis r3, jumptable_807C046C@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807C046C@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    addi r5, r27, 0x10c8
    b lbl_fn_806BCD40_00000894
    addi r5, r27, 0x10e8
    b lbl_fn_806BCD40_00000894
    addi r5, r27, 0x1108
    b lbl_fn_806BCD40_00000894
    addi r5, r27, 0x112c
    b lbl_fn_806BCD40_00000894
    addi r5, r27, 0x114c
    b lbl_fn_806BCD40_00000894
    addi r5, r27, 0x1180
    b lbl_fn_806BCD40_00000894
    addi r5, r27, 0x11c4
    b lbl_fn_806BCD40_00000894
    addi r5, r27, 0x11f0
    b lbl_fn_806BCD40_00000894
    addi r5, r27, 0x1224
    b lbl_fn_806BCD40_00000894
lbl_fn_806BCD40_00000890:
    addi r5, r27, 0x958
lbl_fn_806BCD40_00000894:
    addi r4, r27, 0x1240
    li r3, 0x1
    crclr 6
    bl fn_806A76B0
    lis r3, lbl_80860898@ha
    li r25, 0x1
    lwz r3, lbl_80860898@l(r3)
    lbz r0, 0x8e4(r3)
    extrwi r5, r0, 8, 16
    rlwinm r4, r0, 24, 8, 15
    clrlslwi r3, r0, 24, 8
    extlwi r0, r0, 8, 8
    or r4, r5, r4
    or r0, r3, r0
    or r0, r4, r0
    srwi r3, r0, 16
    slwi r0, r0, 16
    or r0, r3, r0
    stw r0, 0xe0(r1)
lbl_fn_806BCD40_000008E0:
    clrlwi r3, r30, 24
    cmplwi r3, 0xff
    beq lbl_fn_806BCD40_00002E44
    lwz r4, 0xb0(r1)
    mr r8, r25
    lwz r5, 0xb4(r1)
    addi r7, r1, 0xe0
    lhz r6, 0xbc(r1)
    bl fn_806BC860
    lis r4, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r4)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806BCD40_00000920
    bl fn_806C5EB0
    b lbl_fn_806BCD40_00000924
lbl_fn_806BCD40_00000920:
    bl fn_806C5C10
lbl_fn_806BCD40_00000924:
    cmpwi r3, 0x0
    beq lbl_fn_806BCD40_00002E44
    li r3, 0x0
    b lbl_fn_806BCD40_00002E48
lbl_fn_806BCD40_00000934:
    lis r28, lbl_80860898@ha
    lwz r6, 0x0(r30)
    lwz r3, lbl_80860898@l(r28)
    li r24, 0x0
    rlwinm r5, r6, 24, 8, 15
    extlwi r4, r6, 8, 8
    lwz r0, 0x744(r3)
    rlwimi r5, r6, 24, 24, 31
    rlwimi r4, r6, 8, 16, 23
    cmpwi r0, 0x3
    or r0, r5, r4
    rotlwi r25, r0, 16
    beq lbl_fn_806BCD40_0000097C
    addi r4, r27, 0x1254
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_0000097C:
    addi r4, r27, 0x127c
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x7ac(r3)
    cmpw r29, r0
    beq lbl_fn_806BCD40_000009B0
    addi r4, r27, 0x1298
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_000009B0:
    lwz r5, 0x8(r30)
    rlwinm r4, r5, 24, 8, 15
    extlwi r0, r5, 8, 8
    rlwimi r4, r5, 24, 24, 31
    rlwimi r0, r5, 8, 16, 23
    or r0, r4, r0
    rotlwi r0, r0, 16
    cmplw r29, r0
    beq lbl_fn_806BCD40_000009E8
    addi r4, r27, 0x12d0
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_000009E8:
    lwz r6, 0x2c(r30)
    lwz r4, 0x75c(r3)
    rlwinm r5, r6, 24, 8, 15
    extlwi r0, r6, 8, 8
    rlwimi r5, r6, 24, 24, 31
    rlwimi r0, r6, 8, 16, 23
    or r0, r5, r0
    rotlwi r0, r0, 16
    cmplw r4, r0
    beq lbl_fn_806BCD40_00000A58
    addi r4, r27, 0x1304
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lwz r7, 0x2c(r30)
    addi r4, r27, 0x133c
    lwz r5, lbl_80860898@l(r28)
    li r3, 0x40
    rlwinm r6, r7, 24, 8, 15
    extlwi r0, r7, 8, 8
    rlwimi r6, r7, 24, 24, 31
    lwz r5, 0x75c(r5)
    rlwimi r0, r7, 8, 16, 23
    or r0, r6, r0
    rotlwi r6, r0, 16
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00000A58:
    cmpwi r31, 0xe
    blt lbl_fn_806BCD40_00000B04
    lwz r6, 0x34(r30)
    lwz r0, 0x6c0(r3)
    rlwinm r5, r6, 24, 8, 15
    extlwi r4, r6, 8, 8
    rlwimi r5, r6, 24, 24, 31
    rlwimi r4, r6, 8, 16, 23
    or r4, r5, r4
    rotlwi r4, r4, 16
    subi r4, r4, 0x1
    cntlzw r4, r4
    srwi r16, r4, 5
    cmpw r16, r0
    beq lbl_fn_806BCD40_00000B04
    addi r4, r27, 0x1368
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    cmpwi r16, 0x0
    addi r8, r27, 0x100
    beq lbl_fn_806BCD40_00000AB4
    addi r8, r27, 0xf8
lbl_fn_806BCD40_00000AB4:
    lis r3, lbl_80860898@ha
    lwz r5, 0x8(r30)
    lwz r9, lbl_80860898@l(r3)
    addi r6, r27, 0x100
    rlwinm r4, r5, 24, 8, 15
    extlwi r3, r5, 8, 8
    lwz r0, 0x6c0(r9)
    rlwimi r4, r5, 24, 24, 31
    rlwimi r3, r5, 8, 16, 23
    cmpwi r0, 0x0
    or r0, r4, r3
    rotlwi r7, r0, 16
    beq lbl_fn_806BCD40_00000AEC
    addi r6, r27, 0xf8
lbl_fn_806BCD40_00000AEC:
    lwz r5, 0x7a8(r9)
    addi r4, r27, 0x139c
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00000B04:
    li r0, 0x0
    stb r0, 0x750(r3)
    lis r31, lbl_80860898@ha
    addi r3, r1, 0x80
    lwz r6, lbl_80860898@l(r31)
    li r4, 0x0
    li r5, 0x30
    stw r0, 0x770(r6)
    lwz r6, lbl_80860898@l(r31)
    stw r0, 0x760(r6)
    bl memset
    lwz r16, 0x4(r30)
    addi r3, r1, 0xa8
    lwz r17, 0x8(r30)
    addi r4, r30, 0x20
    lwz r18, 0x10(r30)
    rlwinm r20, r16, 24, 8, 15
    lwz r0, 0x18(r30)
    extlwi r21, r16, 8, 8
    lwz r5, 0x1c(r30)
    rlwinm r28, r17, 24, 8, 15
    extlwi r23, r17, 8, 8
    rlwinm r12, r18, 24, 8, 15
    extlwi r11, r18, 8, 8
    rlwinm r9, r0, 24, 8, 15
    extlwi r8, r0, 8, 8
    rlwinm r7, r5, 24, 8, 15
    extlwi r6, r5, 8, 8
    lwz r22, 0xc(r30)
    lwz r10, 0x14(r30)
    rlwimi r20, r16, 24, 24, 31
    rlwimi r21, r16, 8, 16, 23
    rlwimi r28, r17, 24, 24, 31
    rlwimi r23, r17, 8, 16, 23
    rlwimi r12, r18, 24, 24, 31
    rlwimi r11, r18, 8, 16, 23
    or r16, r20, r21
    rlwimi r9, r0, 24, 24, 31
    rlwimi r8, r0, 8, 16, 23
    or r8, r9, r8
    or r12, r12, r11
    or r17, r28, r23
    extrwi r0, r16, 8, 8
    rotlwi r11, r17, 16
    srwi r9, r12, 16
    srwi r8, r8, 16
    rlwimi r7, r5, 24, 24, 31
    rlwimi r6, r5, 8, 16, 23
    stb r0, 0x96(r1)
    or r0, r7, r6
    li r5, 0x4
    extrwi r0, r0, 8, 8
    stw r11, 0x80(r1)
    stw r22, 0x84(r1)
    sth r9, 0x8c(r1)
    stw r10, 0x88(r1)
    sth r8, 0x8e(r1)
    stb r0, 0x97(r1)
    bl memcpy
    lwz r6, lbl_80860898@l(r31)
    lwz r5, 0x24(r30)
    lwz r0, 0x6c0(r6)
    rlwinm r4, r5, 24, 8, 15
    extlwi r3, r5, 8, 8
    cmpwi r0, 0x0
    rlwimi r4, r5, 24, 24, 31
    rlwimi r3, r5, 8, 16, 23
    or r0, r4, r3
    rotlwi r28, r0, 16
    bne lbl_fn_806BCD40_00000C88
    lwz r0, 0x58(r6)
    mr r5, r6
    lwz r4, 0x7a8(r6)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806BCD40_00000C64
    nop
lbl_fn_806BCD40_00000C3C:
    lwz r0, 0x60(r5)
    cmpw r4, r0
    bne lbl_fn_806BCD40_00000C58
    mulli r0, r3, 0x30
    add r3, r6, r0
    addi r24, r3, 0x60
    b lbl_fn_806BCD40_00000C68
lbl_fn_806BCD40_00000C58:
    addi r5, r5, 0x30
    addi r3, r3, 0x1
    bdnz lbl_fn_806BCD40_00000C3C
lbl_fn_806BCD40_00000C64:
    li r24, 0x0
lbl_fn_806BCD40_00000C68:
    lwz r4, 0x28(r30)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    extrwi r0, r0, 8, 8
    stb r0, 0x16(r24)
lbl_fn_806BCD40_00000C88:
    lis r30, lbl_80860898@ha
    lwz r0, 0x84(r1)
    lwz r6, lbl_80860898@l(r30)
    addi r4, r27, 0x13d8
    lwz r5, 0x80(r1)
    li r3, 0x4
    stw r5, 0x660(r6)
    stw r0, 0x664(r6)
    lwz r0, 0x8c(r1)
    lwz r5, 0x88(r1)
    stw r5, 0x668(r6)
    stw r0, 0x66c(r6)
    lwz r0, 0x94(r1)
    lwz r5, 0x90(r1)
    stw r5, 0x670(r6)
    stw r0, 0x674(r6)
    lwz r0, 0x9c(r1)
    lwz r5, 0x98(r1)
    stw r5, 0x678(r6)
    stw r0, 0x67c(r6)
    lwz r0, 0xa4(r1)
    lwz r5, 0xa0(r1)
    stw r5, 0x680(r6)
    stw r0, 0x684(r6)
    lwz r0, 0xac(r1)
    lwz r5, 0xa8(r1)
    stw r5, 0x688(r6)
    stw r0, 0x68c(r6)
    lwz r5, 0x84(r1)
    lhz r6, 0x8e(r1)
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r30)
    lbz r0, 0x14(r3)
    cmplwi r0, 0x3
    bne lbl_fn_806BCD40_00000DA8
    stw r28, 0x8c0(r3)
    addi r4, r27, 0x13f0
    li r3, 0x4
    lwz r5, lbl_80860898@l(r30)
    stb r25, 0x17(r5)
    lbz r5, 0x96(r1)
    crclr 6
    bl fn_806A76B0
    lwz r5, lbl_80860898@l(r30)
    addi r4, r27, 0x1404
    lis r3, 0x1
    lwz r5, 0x8c0(r5)
    crclr 6
    bl fn_806A76B0
    lwz r5, lbl_80860898@l(r30)
    addi r4, r27, 0x1418
    lis r3, 0x1
    lbz r5, 0x17(r5)
    crclr 6
    bl fn_806A76B0
    lwz r8, lbl_80860898@l(r30)
    addi r4, r27, 0x142c
    lis r3, 0x1
    lbz r5, 0x688(r8)
    lbz r6, 0x689(r8)
    lbz r7, 0x68a(r8)
    lbz r8, 0x68b(r8)
    crclr 6
    bl fn_806A76B0
    cmpwi r24, 0x0
    beq lbl_fn_806BCD40_00000DA8
    lbz r5, 0x16(r24)
    addi r4, r27, 0x1458
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
lbl_fn_806BCD40_00000DA8:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    bne lbl_fn_806BCD40_00000EB8
    lwz r0, 0x8b0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806BCD40_00000EB8
    lwz r0, 0x6c0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806BCD40_00000EB8
    lwz r0, 0x8c8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806BCD40_00000EB8
    lwz r24, 0x744(r3)
    cmpwi r24, 0x4
    beq lbl_fn_806BCD40_00000E8C
    lis r23, lbl_80860890@ha
    addi r22, r23, lbl_80860890@l
    lwz r16, lbl_80860890@l(r23)
    lwz r17, 0x4(r22)
    bl OSGetTime
    stw r4, 0x4(r22)
    lis r22, 0x1062
    lis r6, 0x8000
    subfc r4, r17, r4
    stw r3, lbl_80860890@l(r23)
    addi r7, r22, 0x4dd3
    subfe r3, r16, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r22, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r24, 2
    lwz r8, 0x10(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r27, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806BCD40_00000E8C:
    lis r3, lbl_80860898@ha
    li r0, 0x4
    lwz r4, lbl_80860898@l(r3)
    mr r3, r29
    stw r0, 0x744(r4)
    bl fn_806BC010
    bl fn_806C5EB0
    cmpwi r3, 0x0
    beq lbl_fn_806BCD40_00002E44
    li r3, 0x0
    b lbl_fn_806BCD40_00002E48
lbl_fn_806BCD40_00000EB8:
    lwz r24, 0x744(r3)
    cmpwi r24, 0x5
    beq lbl_fn_806BCD40_00000F64
    lis r23, lbl_80860890@ha
    addi r22, r23, lbl_80860890@l
    lwz r16, lbl_80860890@l(r23)
    lwz r17, 0x4(r22)
    bl OSGetTime
    stw r4, 0x4(r22)
    lis r22, 0x1062
    lis r6, 0x8000
    subfc r4, r17, r4
    stw r3, lbl_80860890@l(r23)
    addi r7, r22, 0x4dd3
    subfe r3, r16, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r22, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r24, 2
    lwz r8, 0x14(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r27, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806BCD40_00000F64:
    lis r6, lbl_80860898@ha
    li r0, 0x5
    lwz r5, lbl_80860898@l(r6)
    li r3, 0x0
    li r4, 0x0
    stw r0, 0x744(r5)
    lwz r5, lbl_80860898@l(r6)
    addi r5, r5, 0x660
    bl fn_806BC4C0
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_806BCD40_00000F9C
    li r25, 0x0
    b lbl_fn_806BCD40_000011D8
lbl_fn_806BCD40_00000F9C:
    mr r5, r25
    addi r4, r27, 0x1464
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
    cmpwi r25, 0x1
    beq lbl_fn_806BCD40_00000FCC
    cmpwi r25, 0x2
    beq lbl_fn_806BCD40_00000FD8
    cmpwi r25, 0x3
    beq lbl_fn_806BCD40_00000FE4
    b lbl_fn_806BCD40_00000FEC
lbl_fn_806BCD40_00000FCC:
    li r29, 0x9
    li r26, -0x1
    b lbl_fn_806BCD40_00000FEC
lbl_fn_806BCD40_00000FD8:
    li r29, 0x6
    li r26, -0x32
    b lbl_fn_806BCD40_00000FEC
lbl_fn_806BCD40_00000FE4:
    li r29, 0x6
    li r26, -0x1e
lbl_fn_806BCD40_00000FEC:
    lis r22, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r22)
    cmpwi r3, 0x0
    beq lbl_fn_806BCD40_000011D8
    cmpwi r29, 0x0
    beq lbl_fn_806BCD40_000011D8
    li r0, 0x1
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r22)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r22)
    subis r4, r26, 0x1
    li r0, 0x0
    mr r3, r29
    stb r0, 0x751(r5)
    subi r4, r4, 0x4ff0
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r22)
    addi r3, r1, 0x24
    addi r5, r27, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x60
    addi r4, r1, 0x24
    addi r5, r1, 0x58
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r22)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806BCD40_0000108C
    cmpwi r6, 0x0
    bne lbl_fn_806BCD40_0000108C
    li r6, 0x1
lbl_fn_806BCD40_0000108C:
    addi r3, r1, 0x24
    addi r5, r27, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x64
    addi r4, r1, 0x24
    addi r5, r1, 0x58
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x24
    addi r5, r27, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x68
    addi r4, r1, 0x24
    addi r5, r1, 0x58
    li r6, 0x2f
    bl fn_806AB980
    lis r22, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r22)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806BCD40_000010FC
    li r4, 0x0
    b lbl_fn_806BCD40_00001148
lbl_fn_806BCD40_000010FC:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806BCD40_00001144
    lwz r3, lbl_80860898@l(r22)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806BCD40_00001130
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806BCD40_00001130
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806BCD40_00001144
lbl_fn_806BCD40_00001130:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806BCD40_00001144
    li r4, 0x1
    b lbl_fn_806BCD40_00001148
lbl_fn_806BCD40_00001144:
    li r4, 0x0
lbl_fn_806BCD40_00001148:
    neg r0, r4
    addi r3, r1, 0x24
    or r0, r0, r4
    addi r5, r27, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x6c
    addi r4, r1, 0x24
    addi r5, r1, 0x58
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x58
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r17, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r17)
    cntlzw r0, r3
    srwi r16, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r17)
    mr r7, r3
    lwz r12, 0x8a0(r17)
    mr r3, r29
    subi r0, r4, 0x2
    mr r5, r16
    cntlzw r0, r0
    lwz r8, 0x8a4(r17)
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
lbl_fn_806BCD40_000011D8:
    cmpwi r25, 0x0
    beq lbl_fn_806BCD40_00002E44
    li r3, 0x0
    b lbl_fn_806BCD40_00002E48
lbl_fn_806BCD40_000011E8:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r0, 0x744(r3)
    cmpwi r0, 0x3
    bne lbl_fn_806BCD40_00002E44
    lwz r0, 0x7ac(r3)
    cmpw r29, r0
    bne lbl_fn_806BCD40_00002E44
    mr r5, r29
    addi r4, r27, 0x1478
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lwz r4, 0x0(r30)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r4, r3, r0
    extrwi r3, r4, 8, 8
    subi r0, r3, 0x10
    rotlwi r16, r4, 16
    cmplwi r0, 0x8
    bgt lbl_fn_806BCD40_000012A8
    lis r3, jumptable_807C0448@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807C0448@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    addi r5, r27, 0x10c8
    b lbl_fn_806BCD40_000012AC
    addi r5, r27, 0x10e8
    b lbl_fn_806BCD40_000012AC
    addi r5, r27, 0x1108
    b lbl_fn_806BCD40_000012AC
    addi r5, r27, 0x112c
    b lbl_fn_806BCD40_000012AC
    addi r5, r27, 0x114c
    b lbl_fn_806BCD40_000012AC
    addi r5, r27, 0x1180
    b lbl_fn_806BCD40_000012AC
    addi r5, r27, 0x11c4
    b lbl_fn_806BCD40_000012AC
    addi r5, r27, 0x11f0
    b lbl_fn_806BCD40_000012AC
    addi r5, r27, 0x1224
    b lbl_fn_806BCD40_000012AC
lbl_fn_806BCD40_000012A8:
    addi r5, r27, 0x958
lbl_fn_806BCD40_000012AC:
    addi r4, r27, 0x1498
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    bl fn_806CD150
    cmpwi r3, 0x1
    bne lbl_fn_806BCD40_00001390
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r24, 0x744(r3)
    cmpwi r24, 0x1
    beq lbl_fn_806BCD40_0000137C
    lis r23, lbl_80860890@ha
    addi r22, r23, lbl_80860890@l
    lwz r16, lbl_80860890@l(r23)
    lwz r17, 0x4(r22)
    bl OSGetTime
    stw r4, 0x4(r22)
    lis r22, 0x1062
    lis r6, 0x8000
    subfc r4, r17, r4
    stw r3, lbl_80860890@l(r23)
    addi r7, r22, 0x4dd3
    subfe r3, r16, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r22, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r24, 2
    lwz r8, 0x4(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r27, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806BCD40_0000137C:
    lis r3, lbl_80860898@ha
    li r0, 0x1
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00001390:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r0, 0x8c8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806BCD40_000013B0
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    bne lbl_fn_806BCD40_000015AC
lbl_fn_806BCD40_000013B0:
    cmplwi r16, 0x10
    li r24, 0x18
    bne lbl_fn_806BCD40_000013C0
    li r24, 0xc
lbl_fn_806BCD40_000013C0:
    cmpwi r3, 0x0
    beq lbl_fn_806BCD40_000015A4
    cmpwi r24, 0x0
    beq lbl_fn_806BCD40_000015A4
    li r0, 0x1
    stb r0, 0x751(r3)
    lis r22, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r22)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r22)
    li r0, 0x0
    mr r3, r24
    li r4, 0x0
    stb r0, 0x751(r5)
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r22)
    addi r3, r1, 0x18
    addi r5, r27, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x60
    addi r4, r1, 0x18
    addi r5, r1, 0x30
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r22)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806BCD40_00001458
    cmpwi r6, 0x0
    bne lbl_fn_806BCD40_00001458
    li r6, 0x1
lbl_fn_806BCD40_00001458:
    addi r3, r1, 0x18
    addi r5, r27, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x64
    addi r4, r1, 0x18
    addi r5, r1, 0x30
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x18
    addi r5, r27, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x68
    addi r4, r1, 0x18
    addi r5, r1, 0x30
    li r6, 0x2f
    bl fn_806AB980
    lis r22, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r22)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806BCD40_000014C8
    li r4, 0x0
    b lbl_fn_806BCD40_00001514
lbl_fn_806BCD40_000014C8:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806BCD40_00001510
    lwz r3, lbl_80860898@l(r22)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806BCD40_000014FC
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806BCD40_000014FC
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806BCD40_00001510
lbl_fn_806BCD40_000014FC:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806BCD40_00001510
    li r4, 0x1
    b lbl_fn_806BCD40_00001514
lbl_fn_806BCD40_00001510:
    li r4, 0x0
lbl_fn_806BCD40_00001514:
    neg r0, r4
    addi r3, r1, 0x18
    or r0, r0, r4
    addi r5, r27, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x6c
    addi r4, r1, 0x18
    addi r5, r1, 0x30
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x30
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r17, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r17)
    cntlzw r0, r3
    srwi r16, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r17)
    mr r7, r3
    lwz r12, 0x8a0(r17)
    mr r3, r24
    subi r0, r4, 0x2
    mr r5, r16
    cntlzw r0, r0
    lwz r8, 0x8a4(r17)
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
lbl_fn_806BCD40_000015A4:
    li r3, 0x0
    b lbl_fn_806BCD40_00002E48
lbl_fn_806BCD40_000015AC:
    lwz r3, 0x7ac(r3)
    bl fn_806C0C20
    b lbl_fn_806BCD40_00002E48
lbl_fn_806BCD40_000015B8:
    lis r30, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r30)
    lwz r0, 0x744(r3)
    cmpwi r0, 0x3
    bne lbl_fn_806BCD40_00002E44
    bl fn_806CD150
    cmpwi r3, 0x1
    bne lbl_fn_806BCD40_0000169C
    lwz r3, lbl_80860898@l(r30)
    lwz r24, 0x744(r3)
    cmpwi r24, 0x1
    beq lbl_fn_806BCD40_00001688
    lis r23, lbl_80860890@ha
    addi r22, r23, lbl_80860890@l
    lwz r16, lbl_80860890@l(r23)
    lwz r17, 0x4(r22)
    bl OSGetTime
    stw r4, 0x4(r22)
    lis r22, 0x1062
    lis r6, 0x8000
    subfc r4, r17, r4
    stw r3, lbl_80860890@l(r23)
    addi r7, r22, 0x4dd3
    subfe r3, r16, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r22, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r24, 2
    lwz r8, 0x4(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r27, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806BCD40_00001688:
    lis r3, lbl_80860898@ha
    li r0, 0x1
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_0000169C:
    lwz r3, lbl_80860898@l(r30)
    lwz r0, 0x8c8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806BCD40_00001704
    lwz r0, 0x7ac(r3)
    cmpw r29, r0
    bne lbl_fn_806BCD40_00002E44
    lwz r3, 0x0(r3)
    mr r4, r29
    bl fn_806DB310
    cmpwi r3, 0x0
    beq lbl_fn_806BCD40_00002E44
    lwz r3, lbl_80860898@l(r30)
    li r5, 0x1
    li r4, 0x0
    li r0, 0x2ee0
    stb r5, 0x8e6(r3)
    lwz r3, lbl_80860898@l(r30)
    stb r4, 0x753(r3)
    lwz r3, lbl_80860898@l(r30)
    stw r0, 0x770(r3)
    bl OSGetTime
    lwz r5, lbl_80860898@l(r30)
    stw r4, 0x77c(r5)
    stw r3, 0x778(r5)
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00001704:
    lwz r0, 0x7ac(r3)
    cmpw r29, r0
    bne lbl_fn_806BCD40_00002E44
    bl OSGetTime
    lwz r6, lbl_80860898@l(r30)
    li r5, 0x0
    stw r4, 0x77c(r6)
    stw r3, 0x778(r6)
    stb r5, 0x750(r6)
    lwz r3, lbl_80860898@l(r30)
    lbz r0, 0x15(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806BCD40_0000183C
    addi r4, r27, 0x149c
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r30)
    li r4, 0x0
    li r5, 0x30
    addi r3, r3, 0x660
    bl memset
    lwz r3, lbl_80860898@l(r30)
    lwz r24, 0x744(r3)
    cmpwi r24, 0x2
    beq lbl_fn_806BCD40_0000180C
    lis r23, lbl_80860890@ha
    addi r22, r23, lbl_80860890@l
    lwz r16, lbl_80860890@l(r23)
    lwz r17, 0x4(r22)
    bl OSGetTime
    stw r4, 0x4(r22)
    lis r22, 0x1062
    lis r6, 0x8000
    subfc r4, r17, r4
    stw r3, lbl_80860890@l(r23)
    addi r7, r22, 0x4dd3
    subfe r3, r16, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r22, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r24, 2
    lwz r8, 0x8(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r27, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806BCD40_0000180C:
    lis r22, lbl_80860898@ha
    li r4, 0x2
    lwz r3, lbl_80860898@l(r22)
    li r0, 0x1
    stw r4, 0x744(r3)
    lwz r3, lbl_80860898@l(r22)
    stw r0, 0x708(r3)
    bl OSGetTime
    lwz r5, lbl_80860898@l(r22)
    stw r4, 0x714(r5)
    stw r3, 0x710(r5)
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_0000183C:
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    bne lbl_fn_806BCD40_00001880
    addi r4, r27, 0x149c
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r30)
    li r4, 0x0
    li r5, 0x30
    addi r3, r3, 0x660
    bl memset
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_806C0980
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00001880:
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    bne lbl_fn_806BCD40_00002E44
    li r0, 0x1
    stb r0, 0x8e6(r3)
    li r0, 0x2ee0
    lwz r3, lbl_80860898@l(r30)
    stb r5, 0x753(r3)
    lwz r3, lbl_80860898@l(r30)
    stw r0, 0x770(r3)
    bl OSGetTime
    lwz r5, lbl_80860898@l(r30)
    stw r4, 0x77c(r5)
    stw r3, 0x778(r5)
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_000018BC:
    lis r22, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r22)
    lbz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806BCD40_00002E44
    lwz r0, 0x700(r3)
    cmpw r29, r0
    bne lbl_fn_806BCD40_00002E44
    bl fn_806CD150
    cmpwi r3, 0x1
    bne lbl_fn_806BCD40_000019AC
    lwz r3, lbl_80860898@l(r22)
    lwz r24, 0x744(r3)
    cmpwi r24, 0x1
    beq lbl_fn_806BCD40_00001998
    lis r23, lbl_80860890@ha
    addi r22, r23, lbl_80860890@l
    lwz r16, lbl_80860890@l(r23)
    lwz r17, 0x4(r22)
    bl OSGetTime
    stw r4, 0x4(r22)
    lis r22, 0x1062
    lis r6, 0x8000
    subfc r4, r17, r4
    stw r3, lbl_80860890@l(r23)
    addi r7, r22, 0x4dd3
    subfe r3, r16, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r22, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r24, 2
    lwz r8, 0x4(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r27, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806BCD40_00001998:
    lis r3, lbl_80860898@ha
    li r0, 0x1
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_000019AC:
    lwz r3, lbl_80860898@l(r22)
    lbz r0, 0x14(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806BCD40_000019F4
    lwz r3, 0x660(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806BCD40_000019F4
    li r4, 0x0
    bl fn_806B1680
    cmpwi r3, 0x0
    beq lbl_fn_806BCD40_000019F4
    lwz r3, lbl_80860898@l(r22)
    lwz r0, 0x660(r3)
    cmpw r29, r0
    bne lbl_fn_806BCD40_000019F4
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
lbl_fn_806BCD40_000019F4:
    lis r3, lbl_80860898@ha
    li r4, 0x2
    lwz r3, lbl_80860898@l(r3)
    lbz r0, 0x15(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806BCD40_00001A18
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    bne lbl_fn_806BCD40_00001A28
lbl_fn_806BCD40_00001A18:
    lbz r0, 0xd(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806BCD40_00001A28
    li r4, 0x1
lbl_fn_806BCD40_00001A28:
    mr r3, r29
    bl fn_806C10C0
    cmpwi r3, 0x0
    bne lbl_fn_806BCD40_00002E44
    li r3, 0x0
    b lbl_fn_806BCD40_00002E48
lbl_fn_806BCD40_00001A40:
    lis r22, lbl_80860898@ha
    lwz r6, 0x4(r30)
    lwz r3, lbl_80860898@l(r22)
    rlwinm r5, r6, 24, 8, 15
    extlwi r4, r6, 8, 8
    lwz r0, 0x660(r3)
    rlwimi r5, r6, 24, 24, 31
    rlwimi r4, r6, 8, 16, 23
    lwz r28, 0x0(r30)
    cmpwi r0, 0x0
    or r0, r5, r4
    srwi r26, r0, 16
    bne lbl_fn_806BCD40_00001A88
    addi r4, r27, 0x14bc
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00001A88:
    mr r5, r28
    mr r6, r26
    addi r4, r27, 0x14e0
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r22)
    lwz r0, 0x8e0(r3)
    cmpwi r0, 0x2
    beq lbl_fn_806BCD40_00001ADC
    lbz r0, 0x14(r3)
    cmplwi r0, 0x3
    bne lbl_fn_806BCD40_00001ADC
    lwz r0, 0x6c0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806BCD40_00001ADC
    addi r4, r27, 0x1520
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00001ADC:
    lwz r25, 0x744(r3)
    cmpwi r25, 0x1
    beq lbl_fn_806BCD40_00001AFC
    cmpwi r25, 0x5
    beq lbl_fn_806BCD40_00001BB0
    cmpwi r25, 0xe
    beq lbl_fn_806BCD40_00001BB0
    b lbl_fn_806BCD40_00001BBC
lbl_fn_806BCD40_00001AFC:
    lis r23, lbl_80860890@ha
    addi r22, r23, lbl_80860890@l
    lwz r16, lbl_80860890@l(r23)
    lwz r17, 0x4(r22)
    bl OSGetTime
    stw r4, 0x4(r22)
    lis r22, 0x1062
    lis r6, 0x8000
    subfc r4, r17, r4
    stw r3, lbl_80860890@l(r23)
    addi r7, r22, 0x4dd3
    subfe r3, r16, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r22, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r25, 2
    lwz r8, 0x14(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r27, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
    lis r3, lbl_80860898@ha
    li r0, 0x5
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
    b lbl_fn_806BCD40_00001BD0
lbl_fn_806BCD40_00001BB0:
    lwz r0, 0x700(r3)
    cmpw r29, r0
    beq lbl_fn_806BCD40_00001BD0
lbl_fn_806BCD40_00001BBC:
    addi r4, r27, 0x154c
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00001BD0:
    lis r22, lbl_80860898@ha
    li r0, 0xff
    lwz r4, lbl_80860898@l(r22)
    mr r3, r26
    stb r0, 0x808(r4)
    stw r28, 0x14(r1)
    bl fn_806A4270
    sth r3, 0x12(r1)
    li r0, 0x1
    lwz r3, lbl_80860898@l(r22)
    stb r0, 0x738(r3)
    lwz r16, lbl_80860898@l(r22)
    lwz r3, 0x4(r16)
    lwz r3, 0x0(r3)
    bl fn_806EAD00
    mr r4, r3
    addi r5, r1, 0x10
    addi r6, r16, 0x738
    li r3, 0x0
    bl fn_806CA040
    lwz r3, lbl_80860898@l(r22)
    li r0, 0x0
    stw r0, 0x734(r3)
    stw r0, 0x730(r3)
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00001C34:
    bl fn_806CD150
    cmpwi r3, 0x1
    bne lbl_fn_806BCD40_00001D04
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r24, 0x744(r3)
    cmpwi r24, 0x1
    beq lbl_fn_806BCD40_00001CF4
    lis r23, lbl_80860890@ha
    addi r22, r23, lbl_80860890@l
    lwz r16, lbl_80860890@l(r23)
    lwz r17, 0x4(r22)
    bl OSGetTime
    stw r4, 0x4(r22)
    lis r22, 0x1062
    lis r6, 0x8000
    subfc r4, r17, r4
    stw r3, lbl_80860890@l(r23)
    addi r7, r22, 0x4dd3
    subfe r3, r16, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r22, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r24, 2
    lwz r8, 0x4(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r27, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806BCD40_00001CF4:
    lis r3, lbl_80860898@ha
    li r0, 0x1
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
lbl_fn_806BCD40_00001D04:
    lis r3, lbl_80860898@ha
    lwz r9, lbl_80860898@l(r3)
    lwz r0, 0x744(r9)
    cmpwi r0, 0x1
    bne lbl_fn_806BCD40_00001D3C
    lwz r0, 0x58(r9)
    cmpwi r0, 0x0
    ble lbl_fn_806BCD40_00001D2C
    addi r3, r9, 0x60
    b lbl_fn_806BCD40_00001D30
lbl_fn_806BCD40_00001D2C:
    li r3, 0x0
lbl_fn_806BCD40_00001D30:
    lwz r0, 0x0(r3)
    cmpw r29, r0
    beq lbl_fn_806BCD40_00001D50
lbl_fn_806BCD40_00001D3C:
    addi r4, r27, 0x1570
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00001D50:
    lwz r7, 0x0(r30)
    lwz r8, 0x4(r30)
    lwz r5, 0x690(r9)
    rlwinm r6, r7, 24, 8, 15
    extlwi r4, r7, 8, 8
    rlwinm r3, r8, 24, 8, 15
    extlwi r0, r8, 8, 8
    cmpwi r5, 0x0
    rlwimi r6, r7, 24, 24, 31
    rlwimi r4, r7, 8, 16, 23
    or r4, r6, r4
    rlwimi r3, r8, 24, 24, 31
    rlwimi r0, r8, 8, 16, 23
    or r0, r3, r0
    rotlwi r18, r4, 16
    extrwi r17, r0, 8, 8
    beq lbl_fn_806BCD40_00001DA8
    addi r4, r27, 0x1598
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00001DA8:
    li r0, 0x0
    stw r0, 0x8b8(r9)
    lis r3, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r3)
    lwz r0, 0x8e0(r4)
    cmpwi r0, 0x2
    bne lbl_fn_806BCD40_00001DD4
    stw r18, 0x660(r4)
    lwz r3, lbl_80860898@l(r3)
    stb r17, 0x676(r3)
    b lbl_fn_806BCD40_00001DD8
lbl_fn_806BCD40_00001DD4:
    stw r18, 0x690(r4)
lbl_fn_806BCD40_00001DD8:
    lis r3, lbl_80860898@ha
    lwz r16, lbl_80860898@l(r3)
    lwz r0, 0x8a8(r16)
    cmpwi r0, 0x0
    beq lbl_fn_806BCD40_00001E04
    mr r3, r18
    bl fn_806ACCF0
    lwz r12, 0x8a8(r16)
    lwz r4, 0x8ac(r16)
    mtctr r12
    bctrl
lbl_fn_806BCD40_00001E04:
    mr r5, r18
    mr r6, r17
    addi r4, r27, 0x15d0
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00001E20:
    lis r3, lbl_80860898@ha
    lwz r6, lbl_80860898@l(r3)
    lwz r4, 0x58(r6)
    lbz r3, 0x748(r6)
    subi r0, r4, 0x1
    subf r0, r3, r0
    cmpw r0, r4
    bge lbl_fn_806BCD40_00001E50
    mulli r0, r0, 0x30
    add r3, r6, r0
    addi r3, r3, 0x60
    b lbl_fn_806BCD40_00001E54
lbl_fn_806BCD40_00001E50:
    li r3, 0x0
lbl_fn_806BCD40_00001E54:
    lwz r0, 0x744(r6)
    cmpwi r0, 0x10
    bne lbl_fn_806BCD40_00001EA8
    cmpwi r3, 0x0
    beq lbl_fn_806BCD40_00001EA8
    lwz r5, 0x0(r30)
    lwz r3, 0x0(r3)
    rlwinm r4, r5, 24, 8, 15
    extlwi r0, r5, 8, 8
    rlwimi r4, r5, 24, 24, 31
    rlwimi r0, r5, 8, 16, 23
    or r0, r4, r0
    rotlwi r0, r0, 16
    cmplw r3, r0
    bne lbl_fn_806BCD40_00001EA8
    lbz r4, 0x748(r6)
    li r3, 0x0
    addi r0, r4, 0x1
    stb r0, 0x748(r6)
    bl fn_806C1AC0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00001EA8:
    addi r4, r27, 0x1604
    li r3, 0x40
    li r5, 0x9
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00001EC0:
    lis r31, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r31)
    lwz r0, 0x744(r3)
    cmpwi r0, 0x1
    bne lbl_fn_806BCD40_00001EE4
    lwz r0, 0x660(r3)
    addi r25, r3, 0x660
    cmpw r29, r0
    beq lbl_fn_806BCD40_00001EF8
lbl_fn_806BCD40_00001EE4:
    addi r4, r27, 0x1630
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00001EF8:
    lwz r7, 0x8(r30)
    lwz r6, 0x0(r30)
    rlwinm r3, r7, 24, 8, 15
    extlwi r0, r7, 8, 8
    rlwinm r5, r6, 24, 8, 15
    extlwi r4, r6, 8, 8
    rlwimi r3, r7, 24, 24, 31
    rlwimi r0, r7, 8, 16, 23
    or r3, r3, r0
    rlwimi r5, r6, 24, 24, 31
    rlwimi r4, r6, 8, 16, 23
    or r0, r5, r4
    extrwi r28, r3, 8, 8
    mr r3, r28
    rotlwi r26, r0, 16
    bl fn_806B14D0
    cmpwi r3, 0x0
    beq lbl_fn_806BCD40_00001FBC
    rlwinm r5, r26, 24, 8, 15
    extlwi r0, r26, 8, 8
    rlwimi r5, r26, 24, 24, 31
    addi r4, r27, 0x1658
    rlwimi r0, r26, 8, 16, 23
    li r3, 0x40
    or r0, r5, r0
    li r5, 0x9
    rotlwi r0, r0, 16
    stw r0, 0xc(r1)
    li r6, 0x8
    crclr 6
    bl fn_806A76B0
    lwz r5, 0x4(r25)
    mr r4, r29
    lhz r6, 0xc(r25)
    addi r7, r1, 0xc
    li r3, 0x9
    li r8, 0x1
    bl fn_806BC860
    lwz r4, lbl_80860898@l(r31)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806BCD40_00001FA8
    bl fn_806C5EB0
    b lbl_fn_806BCD40_00001FAC
lbl_fn_806BCD40_00001FA8:
    bl fn_806C5C10
lbl_fn_806BCD40_00001FAC:
    cmpwi r3, 0x0
    beq lbl_fn_806BCD40_00002E44
    li r3, 0x0
    b lbl_fn_806BCD40_00002E48
lbl_fn_806BCD40_00001FBC:
    lwz r6, lbl_80860898@l(r31)
    addi r3, r25, 0x28
    lwz r9, 0x10(r30)
    addi r4, r30, 0x20
    lwz r8, 0x664(r6)
    li r5, 0x4
    lwz r0, 0x660(r6)
    rlwinm r7, r9, 24, 8, 15
    stw r0, 0x690(r6)
    extlwi r0, r9, 8, 8
    rlwimi r7, r9, 24, 24, 31
    lwz r17, 0x1c(r30)
    stw r8, 0x694(r6)
    rlwimi r0, r9, 8, 16, 23
    or r11, r7, r0
    lwz r16, 0x18(r30)
    lwz r10, 0x66c(r6)
    rlwinm r7, r17, 24, 8, 15
    lwz r0, 0x668(r6)
    rlwinm r9, r16, 24, 8, 15
    stw r0, 0x698(r6)
    extlwi r0, r17, 8, 8
    extlwi r8, r16, 8, 8
    rlwimi r7, r17, 24, 24, 31
    stw r10, 0x69c(r6)
    rlwimi r0, r17, 8, 16, 23
    or r0, r7, r0
    rlwimi r9, r16, 24, 24, 31
    lwz r22, 0x674(r6)
    rlwimi r8, r16, 8, 16, 23
    lwz r23, 0x670(r6)
    or r8, r9, r8
    stw r23, 0x6a0(r6)
    srwi r11, r11, 16
    lwz r12, 0xc(r30)
    srwi r8, r8, 16
    stw r22, 0x6a4(r6)
    extrwi r0, r0, 8, 8
    lwz r10, 0x14(r30)
    lwz r7, 0x67c(r6)
    lwz r9, 0x678(r6)
    stw r9, 0x6a8(r6)
    stw r7, 0x6ac(r6)
    lwz r7, 0x684(r6)
    lwz r9, 0x680(r6)
    stw r9, 0x6b0(r6)
    stw r7, 0x6b4(r6)
    lwz r7, 0x68c(r6)
    lwz r9, 0x688(r6)
    stw r9, 0x6b8(r6)
    stw r7, 0x6bc(r6)
    stw r26, 0x0(r25)
    stb r28, 0x16(r25)
    stw r12, 0x4(r25)
    sth r11, 0xc(r25)
    stw r10, 0x8(r25)
    sth r8, 0xe(r25)
    stb r0, 0x17(r25)
    bl memcpy
    lwz r0, 0x4(r25)
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_806A420C
    lhz r6, 0xc(r25)
    mr r5, r3
    addi r4, r27, 0x1684
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r31)
    lwz r24, 0x744(r3)
    cmpwi r24, 0x5
    beq lbl_fn_806BCD40_00002180
    lis r23, lbl_80860890@ha
    addi r22, r23, lbl_80860890@l
    lwz r16, lbl_80860890@l(r23)
    lwz r17, 0x4(r22)
    bl OSGetTime
    stw r4, 0x4(r22)
    lis r22, 0x1062
    lis r6, 0x8000
    subfc r4, r17, r4
    stw r3, lbl_80860890@l(r23)
    addi r7, r22, 0x4dd3
    subfe r3, r16, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r22, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r24, 2
    lwz r8, 0x14(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r27, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806BCD40_00002180:
    lis r7, lbl_80860898@ha
    li r6, 0x5
    lwz r4, lbl_80860898@l(r7)
    li r0, 0x0
    mr r5, r25
    li r3, 0x0
    stw r6, 0x744(r4)
    li r4, 0x0
    lwz r6, lbl_80860898@l(r7)
    stw r0, 0x770(r6)
    lwz r6, lbl_80860898@l(r7)
    stw r0, 0x760(r6)
    bl fn_806BC4C0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_000021B8:
    lis r3, lbl_80860898@ha
    lwz r6, lbl_80860898@l(r3)
    lwz r0, 0x744(r6)
    cmpwi r0, 0x1
    bne lbl_fn_806BCD40_000021F0
    lwz r0, 0x58(r6)
    cmpwi r0, 0x1
    blt lbl_fn_806BCD40_000021E0
    addi r3, r6, 0x60
    b lbl_fn_806BCD40_000021E4
lbl_fn_806BCD40_000021E0:
    li r3, 0x0
lbl_fn_806BCD40_000021E4:
    lwz r0, 0x0(r3)
    cmpw r29, r0
    beq lbl_fn_806BCD40_00002204
lbl_fn_806BCD40_000021F0:
    addi r4, r27, 0x169c
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00002204:
    lwz r3, 0x0(r30)
    lwz r5, 0x4(r30)
    rlwinm r4, r3, 24, 8, 15
    extlwi r0, r3, 8, 8
    rlwimi r4, r3, 24, 24, 31
    lwz r7, 0x660(r6)
    rlwimi r0, r3, 8, 16, 23
    rlwinm r3, r5, 24, 8, 15
    or r4, r4, r0
    rotlwi r16, r4, 16
    extlwi r0, r5, 8, 8
    rlwimi r3, r5, 24, 24, 31
    rlwimi r0, r5, 8, 16, 23
    cmpw r16, r7
    or r0, r3, r0
    extrwi r17, r0, 8, 8
    bne lbl_fn_806BCD40_00002254
    lbz r0, 0x676(r6)
    cmplw r17, r0
    beq lbl_fn_806BCD40_00002288
lbl_fn_806BCD40_00002254:
    lbz r5, 0x676(r6)
    mr r6, r17
    mr r8, r16
    addi r4, r27, 0x16c4
    li r3, 0x1
    crclr 6
    bl fn_806A76B0
    lis r4, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r4)
    stb r17, 0x676(r3)
    lwz r3, lbl_80860898@l(r4)
    stw r16, 0x660(r3)
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00002288:
    addi r4, r27, 0x1700
    li r3, 0x1
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_0000229C:
    lis r22, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r22)
    lwz r0, 0x660(r3)
    cmpw r29, r0
    beq lbl_fn_806BCD40_000022C4
    addi r4, r27, 0x1728
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_000022C4:
    lwz r7, 0x0(r30)
    mr r5, r29
    addi r4, r27, 0x1748
    li r3, 0x40
    rlwinm r6, r7, 24, 8, 15
    extlwi r0, r7, 8, 8
    rlwimi r6, r7, 24, 24, 31
    rlwimi r0, r7, 8, 16, 23
    or r0, r6, r0
    rotlwi r6, r0, 16
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r22)
    lbz r0, 0x15(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806BCD40_00002310
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    bne lbl_fn_806BCD40_00002328
lbl_fn_806BCD40_00002310:
    mr r3, r29
    bl fn_806C1430
    cmpwi r3, 0x0
    bne lbl_fn_806BCD40_00002E44
    li r3, 0x0
    b lbl_fn_806BCD40_00002E48
lbl_fn_806BCD40_00002328:
    lbz r0, 0x14(r3)
    cmplwi r0, 0x3
    bne lbl_fn_806BCD40_00002E44
    stw r29, 0x7b0(r3)
    li r0, 0x1
    lwz r3, lbl_80860898@l(r22)
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r22)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r4, lbl_80860898@l(r22)
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x751(r4)
    bl fn_806C3ED0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_0000236C:
    lwz r6, 0x0(r30)
    mr r3, r29
    mr r4, r24
    rlwinm r5, r6, 24, 8, 15
    extlwi r0, r6, 8, 8
    rlwimi r5, r6, 24, 24, 31
    rlwimi r0, r6, 8, 16, 23
    or r0, r5, r0
    rotlwi r5, r0, 16
    bl fn_806C50A0
    cmpwi r3, 0x0
    bne lbl_fn_806BCD40_00002E44
    li r3, 0x0
    b lbl_fn_806BCD40_00002E48
lbl_fn_806BCD40_000023A4:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r0, 0x58(r3)
    cmpwi r0, 0x1
    blt lbl_fn_806BCD40_000023C0
    addi r3, r3, 0x60
    b lbl_fn_806BCD40_000023C4
lbl_fn_806BCD40_000023C0:
    li r3, 0x0
lbl_fn_806BCD40_000023C4:
    cmpwi r3, 0x0
    bne lbl_fn_806BCD40_000023E4
    addi r4, r27, 0x1778
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    li r3, 0x1
    b lbl_fn_806BCD40_00002E48
lbl_fn_806BCD40_000023E4:
    lwz r0, 0x0(r3)
    cmpw r29, r0
    beq lbl_fn_806BCD40_000023F8
    li r3, 0x1
    b lbl_fn_806BCD40_00002E48
lbl_fn_806BCD40_000023F8:
    addi r4, r27, 0x1790
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    lis r29, lbl_80860898@ha
    li r0, 0x1
    lwz r3, lbl_80860898@l(r29)
    li r25, 0x0
    li r22, 0x0
    lbz r24, 0x751(r3)
    stb r0, 0x751(r3)
    b lbl_fn_806BCD40_000024E8
lbl_fn_806BCD40_00002428:
    lwz r7, 0x0(r30)
    li r4, 0x0
    lwz r8, lbl_80860898@l(r29)
    rlwinm r3, r7, 24, 8, 15
    extlwi r0, r7, 8, 8
    rlwimi r3, r7, 24, 24, 31
    lwz r6, 0x58(r8)
    rlwimi r0, r7, 8, 16, 23
    mr r5, r8
    or r0, r3, r0
    rotlwi r3, r0, 16
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_fn_806BCD40_0000248C
    nop
lbl_fn_806BCD40_00002464:
    lwz r0, 0x60(r5)
    cmpw r3, r0
    bne lbl_fn_806BCD40_00002480
    mulli r0, r4, 0x30
    add r3, r8, r0
    addi r5, r3, 0x60
    b lbl_fn_806BCD40_00002490
lbl_fn_806BCD40_00002480:
    addi r5, r5, 0x30
    addi r4, r4, 0x1
    bdnz lbl_fn_806BCD40_00002464
lbl_fn_806BCD40_0000248C:
    li r5, 0x0
lbl_fn_806BCD40_00002490:
    cmpwi r5, 0x0
    bne lbl_fn_806BCD40_000024D0
    rlwinm r4, r7, 24, 8, 15
    extlwi r0, r7, 8, 8
    rlwimi r4, r7, 24, 24, 31
    lwz r3, 0x690(r8)
    rlwimi r0, r7, 8, 16, 23
    or r0, r4, r0
    rotlwi r0, r0, 16
    cmpw r3, r0
    bne lbl_fn_806BCD40_000024D0
    lbz r3, 0x6a6(r8)
    bl fn_806B1A00
    lwz r3, lbl_80860898@l(r29)
    stw r22, 0x690(r3)
    b lbl_fn_806BCD40_000024E0
lbl_fn_806BCD40_000024D0:
    cmpwi r5, 0x0
    beq lbl_fn_806BCD40_000024E0
    lbz r3, 0x16(r5)
    bl fn_806B1A00
lbl_fn_806BCD40_000024E0:
    addi r30, r30, 0x4
    addi r25, r25, 0x1
lbl_fn_806BCD40_000024E8:
    cmpw r25, r31
    blt lbl_fn_806BCD40_00002428
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    stb r24, 0x751(r3)
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00002500:
    lis r24, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r24)
    lwz r0, 0x660(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806BCD40_00002E44
    cmpw r29, r0
    bne lbl_fn_806BCD40_00002E44
    mr r4, r29
    mr r5, r22
    mr r6, r23
    li r3, 0x41
    li r7, 0x0
    li r8, 0x0
    bl fn_806BC860
    lwz r4, lbl_80860898@l(r24)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806BCD40_00002550
    bl fn_806C5EB0
    b lbl_fn_806BCD40_00002554
lbl_fn_806BCD40_00002550:
    bl fn_806C5C10
lbl_fn_806BCD40_00002554:
    cmpwi r3, 0x0
    beq lbl_fn_806BCD40_00002E44
    li r3, 0x0
    b lbl_fn_806BCD40_00002E48
lbl_fn_806BCD40_00002564:
    lis r3, lbl_80860898@ha
    lwz r5, lbl_80860898@l(r3)
    lbz r0, 0xd(r5)
    cmpwi r0, 0x0
    beq lbl_fn_806BCD40_00002E44
    lwz r0, 0x58(r5)
    cmpwi r0, 0x0
    ble lbl_fn_806BCD40_0000258C
    addi r3, r5, 0x60
    b lbl_fn_806BCD40_00002590
lbl_fn_806BCD40_0000258C:
    li r3, 0x0
lbl_fn_806BCD40_00002590:
    cmpwi r3, 0x0
    bne lbl_fn_806BCD40_000025C4
    cmpwi r5, 0x0
    addi r4, r27, 0x450
    li r3, 0x1
    beq lbl_fn_806BCD40_000025B0
    lwz r5, 0x744(r5)
    b lbl_fn_806BCD40_000025B4
lbl_fn_806BCD40_000025B0:
    li r5, 0x0
lbl_fn_806BCD40_000025B4:
    crclr 6
    bl fn_806A76B0
    li r0, 0x0
    b lbl_fn_806BCD40_000025D8
lbl_fn_806BCD40_000025C4:
    lwz r3, 0x0(r3)
    lwz r0, 0x7a8(r5)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_806BCD40_000025D8:
    cmpwi r0, 0x0
    beq lbl_fn_806BCD40_000025F8
    addi r4, r27, 0x17a8
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806BCD40_00002E48
lbl_fn_806BCD40_000025F8:
    lis r3, lbl_80860898@ha
    li r4, 0x0
    lwz r6, lbl_80860898@l(r3)
    lwz r7, 0x58(r6)
    mr r5, r6
    lwz r3, 0x7a8(r6)
    mtctr r7
    cmpwi r7, 0x0
    ble lbl_fn_806BCD40_00002644
lbl_fn_806BCD40_0000261C:
    lwz r0, 0x60(r5)
    cmpw r3, r0
    bne lbl_fn_806BCD40_00002638
    mulli r0, r4, 0x30
    add r3, r6, r0
    addi r3, r3, 0x60
    b lbl_fn_806BCD40_00002648
lbl_fn_806BCD40_00002638:
    addi r5, r5, 0x30
    addi r4, r4, 0x1
    bdnz lbl_fn_806BCD40_0000261C
lbl_fn_806BCD40_00002644:
    li r3, 0x0
lbl_fn_806BCD40_00002648:
    cmpwi r3, 0x0
    bne lbl_fn_806BCD40_00002658
    li r4, 0xff
    b lbl_fn_806BCD40_0000265C
lbl_fn_806BCD40_00002658:
    lbz r4, 0x16(r3)
lbl_fn_806BCD40_0000265C:
    cmplwi r4, 0xff
    bne lbl_fn_806BCD40_0000266C
    li r3, 0x0
    b lbl_fn_806BCD40_00002E48
lbl_fn_806BCD40_0000266C:
    mr r5, r6
    li r3, 0x0
    mtctr r7
    cmpwi r7, 0x0
    ble lbl_fn_806BCD40_000026AC
    nop
lbl_fn_806BCD40_00002684:
    lwz r0, 0x60(r5)
    cmpw r29, r0
    bne lbl_fn_806BCD40_000026A0
    mulli r0, r3, 0x30
    add r3, r6, r0
    addi r3, r3, 0x60
    b lbl_fn_806BCD40_000026B0
lbl_fn_806BCD40_000026A0:
    addi r5, r5, 0x30
    addi r3, r3, 0x1
    bdnz lbl_fn_806BCD40_00002684
lbl_fn_806BCD40_000026AC:
    li r3, 0x0
lbl_fn_806BCD40_000026B0:
    cmpwi r3, 0x0
    bne lbl_fn_806BCD40_000026C0
    li r0, 0xff
    b lbl_fn_806BCD40_000026C4
lbl_fn_806BCD40_000026C0:
    lbz r0, 0x16(r3)
lbl_fn_806BCD40_000026C4:
    cmplwi r0, 0xff
    bne lbl_fn_806BCD40_000026E8
    mr r5, r29
    addi r4, r27, 0x17d0
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806BCD40_00002E48
lbl_fn_806BCD40_000026E8:
    lwz r0, 0x58(r6)
    cmpwi r0, 0x0
    ble lbl_fn_806BCD40_000026FC
    addi r3, r6, 0x60
    b lbl_fn_806BCD40_00002700
lbl_fn_806BCD40_000026FC:
    li r3, 0x0
lbl_fn_806BCD40_00002700:
    lwz r0, 0x0(r3)
    cmpw r29, r0
    beq lbl_fn_806BCD40_00002714
    li r16, 0x0
    b lbl_fn_806BCD40_00002730
lbl_fn_806BCD40_00002714:
    li r3, 0x1
    lwz r0, 0x8b8(r6)
    slw r3, r3, r4
    and r3, r3, r0
    neg r0, r3
    or r0, r0, r3
    srwi r16, r0, 31
lbl_fn_806BCD40_00002730:
    neg r0, r16
    mr r4, r29
    or r0, r0, r16
    mr r5, r22
    srawi r3, r0, 31
    mr r6, r23
    addi r0, r3, 0x54
    li r7, 0x0
    clrlwi r3, r0, 24
    li r8, 0x0
    bl fn_806BC860
    lis r4, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r4)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806BCD40_00002778
    bl fn_806C5EB0
    b lbl_fn_806BCD40_0000277C
lbl_fn_806BCD40_00002778:
    bl fn_806C5C10
lbl_fn_806BCD40_0000277C:
    cmpwi r3, 0x0
    beq lbl_fn_806BCD40_0000278C
    li r3, 0x0
    b lbl_fn_806BCD40_00002E48
lbl_fn_806BCD40_0000278C:
    cmpwi r16, 0x0
    addi r4, r27, 0x17f4
    addi r5, r27, 0x1818
    lis r3, 0x1
    beq lbl_fn_806BCD40_000027A4
    addi r5, r27, 0x1810
lbl_fn_806BCD40_000027A4:
    mr r6, r29
    crclr 6
    bl fn_806A76B0
    bl OSGetTime
    lis r29, lbl_80860898@ha
    cmpwi r16, 0x0
    lwz r5, lbl_80860898@l(r29)
    stw r4, 0x7a4(r5)
    stw r3, 0x7a0(r5)
    beq lbl_fn_806BCD40_00002E44
    lwz r24, 0x744(r5)
    cmpwi r24, 0xa
    bne lbl_fn_806BCD40_00002E44
    lis r23, lbl_80860890@ha
    addi r22, r23, lbl_80860890@l
    lwz r16, lbl_80860890@l(r23)
    lwz r17, 0x4(r22)
    bl OSGetTime
    stw r4, 0x4(r22)
    lis r22, 0x1062
    lis r6, 0x8000
    subfc r4, r17, r4
    stw r3, lbl_80860890@l(r23)
    addi r7, r22, 0x4dd3
    subfe r3, r16, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r22, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r24, 2
    lwz r8, 0x4(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r27, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r29)
    li r0, 0x1
    li r16, 0x0
    li r17, 0x0
    stw r0, 0x744(r3)
    b lbl_fn_806BCD40_000028B8
lbl_fn_806BCD40_00002890:
    cmpw r16, r0
    bge lbl_fn_806BCD40_000028A4
    add r3, r3, r17
    addi r3, r3, 0x60
    b lbl_fn_806BCD40_000028A8
lbl_fn_806BCD40_000028A4:
    li r3, 0x0
lbl_fn_806BCD40_000028A8:
    lbz r3, 0x16(r3)
    bl fn_806CE700
    addi r17, r17, 0x30
    addi r16, r16, 0x1
lbl_fn_806BCD40_000028B8:
    lwz r3, lbl_80860898@l(r29)
    lwz r0, 0x58(r3)
    cmpw r16, r0
    blt lbl_fn_806BCD40_00002890
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_000028CC:
    lis r3, lbl_80860898@ha
    lwz r5, lbl_80860898@l(r3)
    lbz r0, 0xd(r5)
    cmpwi r0, 0x0
    beq lbl_fn_806BCD40_00002E44
    lwz r0, 0x58(r5)
    cmpwi r0, 0x0
    ble lbl_fn_806BCD40_000028F4
    addi r3, r5, 0x60
    b lbl_fn_806BCD40_000028F8
lbl_fn_806BCD40_000028F4:
    li r3, 0x0
lbl_fn_806BCD40_000028F8:
    cmpwi r3, 0x0
    bne lbl_fn_806BCD40_0000292C
    cmpwi r5, 0x0
    addi r4, r27, 0x450
    li r3, 0x1
    beq lbl_fn_806BCD40_00002918
    lwz r5, 0x744(r5)
    b lbl_fn_806BCD40_0000291C
lbl_fn_806BCD40_00002918:
    li r5, 0x0
lbl_fn_806BCD40_0000291C:
    crclr 6
    bl fn_806A76B0
    li r0, 0x0
    b lbl_fn_806BCD40_00002940
lbl_fn_806BCD40_0000292C:
    lwz r3, 0x0(r3)
    lwz r0, 0x7a8(r5)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_806BCD40_00002940:
    cmpwi r0, 0x0
    beq lbl_fn_806BCD40_00002A7C
    lis r3, lbl_80860898@ha
    li r4, 0x0
    lwz r6, lbl_80860898@l(r3)
    lwz r0, 0x58(r6)
    mr r3, r6
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806BCD40_00002994
    nop
lbl_fn_806BCD40_0000296C:
    lwz r0, 0x60(r3)
    cmpw r29, r0
    bne lbl_fn_806BCD40_00002988
    mulli r0, r4, 0x30
    add r3, r6, r0
    addi r3, r3, 0x60
    b lbl_fn_806BCD40_00002998
lbl_fn_806BCD40_00002988:
    addi r3, r3, 0x30
    addi r4, r4, 0x1
    bdnz lbl_fn_806BCD40_0000296C
lbl_fn_806BCD40_00002994:
    li r3, 0x0
lbl_fn_806BCD40_00002998:
    cmpwi r3, 0x0
    bne lbl_fn_806BCD40_000029A8
    li r4, 0xff
    b lbl_fn_806BCD40_000029AC
lbl_fn_806BCD40_000029A8:
    lbz r4, 0x16(r3)
lbl_fn_806BCD40_000029AC:
    cmplwi r4, 0xff
    bne lbl_fn_806BCD40_000029D0
    mr r5, r29
    addi r4, r27, 0x1820
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806BCD40_00002E48
lbl_fn_806BCD40_000029D0:
    li r0, 0x1
    lwz r3, 0x8b8(r6)
    slw r0, r0, r4
    mr r5, r29
    or r0, r3, r0
    stw r0, 0x8b8(r6)
    addi r4, r27, 0x1840
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
    mr r4, r29
    mr r5, r22
    mr r6, r23
    li r3, 0x53
    li r7, 0x0
    li r8, 0x0
    bl fn_806BC860
    mr r16, r3
    mr r5, r29
    mr r6, r22
    mr r7, r23
    addi r4, r27, 0x1860
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lbz r0, 0x15(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806BCD40_00002A54
    mr r3, r16
    bl fn_806C5EB0
    b lbl_fn_806BCD40_00002A5C
lbl_fn_806BCD40_00002A54:
    mr r3, r16
    bl fn_806C5C10
lbl_fn_806BCD40_00002A5C:
    cmpwi r3, 0x0
    beq lbl_fn_806BCD40_00002E44
    addi r4, r27, 0x1884
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806BCD40_00002E48
lbl_fn_806BCD40_00002A7C:
    addi r4, r27, 0x1894
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00002A90:
    lis r22, lbl_80860898@ha
    lwz r5, lbl_80860898@l(r22)
    lbz r0, 0xd(r5)
    cmpwi r0, 0x0
    beq lbl_fn_806BCD40_00002E44
    lwz r4, 0x58(r5)
    lbz r3, 0x8cd(r5)
    slwi r0, r4, 2
    addi r3, r3, 0x1
    stb r3, 0x8cd(r5)
    clrlwi r3, r3, 24
    add r0, r0, r4
    cmpw r3, r0
    ble lbl_fn_806BCD40_00002AD0
    bl fn_806B0980
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00002AD0:
    mr r5, r29
    addi r4, r27, 0x18b0
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
    bl OSGetTime
    lwz r5, lbl_80860898@l(r22)
    stw r4, 0x7a4(r5)
    stw r3, 0x7a0(r5)
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00002AF8:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lbz r0, 0xd(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806BCD40_00002E44
    addi r4, r27, 0x18d0
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00002B20:
    li r3, 0x0
    bl fn_806BC010
    lis r22, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r22)
    stb r0, 0x756(r3)
    bl OSGetTime
    lwz r5, lbl_80860898@l(r22)
    stw r4, 0x7a4(r5)
    stw r3, 0x7a0(r5)
    lwz r24, 0x744(r5)
    cmpwi r24, 0xc
    beq lbl_fn_806BCD40_00002BF4
    lis r23, lbl_80860890@ha
    addi r22, r23, lbl_80860890@l
    lwz r16, lbl_80860890@l(r23)
    lwz r17, 0x4(r22)
    bl OSGetTime
    stw r4, 0x4(r22)
    lis r22, 0x1062
    lis r6, 0x8000
    subfc r4, r17, r4
    stw r3, lbl_80860890@l(r23)
    addi r7, r22, 0x4dd3
    subfe r3, r16, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r22, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r24, 2
    lwz r8, 0x30(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r27, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806BCD40_00002BF4:
    lis r3, lbl_80860898@ha
    li r0, 0xc
    lwz r5, lbl_80860898@l(r3)
    addi r4, r27, 0x18e4
    lis r3, 0x1
    stw r0, 0x744(r5)
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00002C18:
    lis r3, lbl_80860898@ha
    lwz r9, 0x0(r30)
    lwz r10, 0x4(r30)
    li r12, 0x0
    lwz r11, 0x8(r30)
    rlwinm r8, r9, 24, 8, 15
    extlwi r7, r9, 8, 8
    rlwinm r6, r10, 24, 8, 15
    extlwi r5, r10, 8, 8
    rlwinm r4, r11, 24, 8, 15
    extlwi r0, r11, 8, 8
    lwz r3, lbl_80860898@l(r3)
    rlwimi r8, r9, 24, 24, 31
    rlwimi r7, r9, 8, 16, 23
    or r7, r8, r7
    rlwimi r6, r10, 24, 24, 31
    rlwimi r5, r10, 8, 16, 23
    rlwimi r4, r11, 24, 24, 31
    or r6, r6, r5
    rlwimi r0, r11, 8, 16, 23
    or r0, r4, r0
    lwz r9, 0x58(r3)
    mr r8, r3
    rotlwi r5, r7, 16
    extrwi r6, r6, 8, 8
    extrwi r24, r0, 8, 8
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_fn_806BCD40_00002CB4
lbl_fn_806BCD40_00002C8C:
    lwz r0, 0x60(r8)
    cmpw r5, r0
    bne lbl_fn_806BCD40_00002CA8
    mulli r0, r12, 0x30
    add r4, r3, r0
    addi r0, r4, 0x60
    b lbl_fn_806BCD40_00002CB8
lbl_fn_806BCD40_00002CA8:
    addi r8, r8, 0x30
    addi r12, r12, 0x1
    bdnz lbl_fn_806BCD40_00002C8C
lbl_fn_806BCD40_00002CB4:
    li r0, 0x0
lbl_fn_806BCD40_00002CB8:
    cmpwi r0, 0x0
    bne lbl_fn_806BCD40_00002CD4
    addi r4, r27, 0x18f8
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00002CD4:
    lbz r0, 0x16(r3)
    cmpwi r0, 0x2
    bne lbl_fn_806BCD40_00002D44
    lwz r4, 0xc(r30)
    cmplwi r6, 0x1
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    extrwi r16, r0, 8, 8
    bne lbl_fn_806BCD40_00002D18
    addi r4, r27, 0x192c
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00002D18:
    mr r5, r16
    mr r6, r24
    addi r4, r27, 0x1958
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
    mr r3, r16
    mr r4, r24
    li r5, 0x1
    bl fn_806CBB20
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00002D44:
    lbz r0, 0x16(r3)
    cmpwi r0, 0x1
    bne lbl_fn_806BCD40_00002E44
    cmpwi r6, 0x0
    bne lbl_fn_806BCD40_00002D6C
    addi r4, r27, 0x1978
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00002D6C:
    cmpwi r31, 0x2
    bne lbl_fn_806BCD40_00002DD8
    lbz r0, 0x30(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806BCD40_00002DC4
    li r0, 0x1
    stb r0, 0x30(r3)
    lis r22, lbl_80860898@ha
    li r4, 0x1f40
    lwz r3, lbl_80860898@l(r22)
    li r0, 0x0
    stw r4, 0x904(r3)
    stw r0, 0x900(r3)
    bl OSGetTime
    lwz r5, lbl_80860898@l(r22)
    stw r4, 0x24(r5)
    addi r4, r27, 0x19a4
    stw r3, 0x20(r5)
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00002DC4:
    addi r4, r27, 0x19e0
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00002DD8:
    lwz r7, 0xc(r30)
    li r0, 0x1
    stb r0, 0x30(r3)
    mr r5, r24
    rlwinm r6, r7, 24, 8, 15
    extlwi r0, r7, 8, 8
    rlwimi r6, r7, 24, 24, 31
    addi r4, r27, 0x1a24
    rlwimi r0, r7, 8, 16, 23
    lis r3, 0x1
    or r0, r6, r0
    rotlwi r16, r0, 16
    mr r6, r16
    crclr 6
    bl fn_806A76B0
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    stw r16, 0x1c(r3)
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00002E24:
    mr r3, r30
    bl fn_806BAC80
    b lbl_fn_806BCD40_00002E44
lbl_fn_806BCD40_00002E30:
    mr r5, r24
    addi r4, r27, 0x1a48
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
lbl_fn_806BCD40_00002E44:
    li r3, 0x1
lbl_fn_806BCD40_00002E48:
    addi r11, r1, 0x230
    bl _restgpr_16
    lwz r0, 0x234(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}
