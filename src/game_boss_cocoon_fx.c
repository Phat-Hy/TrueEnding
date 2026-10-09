#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_23(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_23(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8005B710(void);
extern void fn_8005B8F8(void);
extern void fn_8005B9AC(void);
extern void fn_8006EF48(void);
extern void fn_8006F420(void);
extern void fn_8006F72C(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800A555C(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800D5808(void);
extern void fn_800D59B8(void);
extern void fn_800DC1DC(void);
extern void fn_800DC6B4(void);
extern void fn_800DFB40(void);
extern void fn_800E0908(void);
extern void fn_801F3FF8(void);
extern void fn_801F4728(void);
extern void fn_801F4CB4(void);
extern void fn_801F4DDC(void);
extern void fn_801F4E30(void);
extern void fn_801F4E8C(void);
extern void fn_801F6C80(void);
extern void fn_801F6E78(void);
extern void fn_801F837C(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_801FEE08(void);
extern void fn_8036EA3C(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_8046B798(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F18(void);
extern void fn_80473F50(void);
extern void fn_804A39EC(void);
extern void fn_804A4930(void);
extern void fn_804A55FC(void);
extern void fn_80680770(void);
extern void fn_80686A48(void);
extern void fn_80686A64(void);
extern void fn_80686EA4(void);
extern void fn_80695A50(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80755310[];
extern u8 lbl_80755370[];
extern u8 lbl_80755394[];
extern u8 lbl_8077A070[];
extern u8 lbl_8077A090[];
extern u8 lbl_8077A0A8[];
extern u8 lbl_8078FAB0[];
extern u8 lbl_8078FB30[];
extern u8 lbl_8078FBB0[];

/* Small data declarations */
extern u32 lbl_8087E030;
extern u32 lbl_8087E034;
extern u32 lbl_8087E038;
extern u32 lbl_8087E03C;
extern u32 lbl_8087E040;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F430;
extern u32 lbl_8087F580;
extern u32 lbl_80886E88;
extern u32 lbl_80886E8C;
extern u32 lbl_80886E90;
extern u32 lbl_80886E9C;
extern u32 lbl_80886EA0;
extern u32 lbl_80886EA8;
extern u32 lbl_80886EAC;
extern u32 lbl_80886EB0;
extern u32 lbl_80886EB4;
extern u32 lbl_80886EB8;
extern u32 lbl_80886EBC;

/* Function declarations */
void fn_804699A4(void);
void fn_80469AB8(void);
void fn_80469C64(void);
void fn_80469D60(void);
void fn_8046A20C(void);
void fn_8046A370(void);
void fn_8046A514(void);
void fn_8046A5A8(void);
void fn_8046A690(void);
void fn_8046A8A4(void);
void fn_8046A90C(void);
void fn_8046A980(void);
void fn_8046A9D0(void);
void fn_8046ACDC(void);
void fn_8046AE7C(void);

asm void fn_804699A4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x90(r3)
    stw r0, 0x8c(r3)
    stw r4, 0x90(r3)
    beq lbl_fn_804699A4_00000038
    cmpwi r4, 0x3
    beq lbl_fn_804699A4_0000004C
    b lbl_fn_804699A4_000000FC
lbl_fn_804699A4_00000038:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804699A4_000000FC
    bl fn_8036EA3C
    b lbl_fn_804699A4_000000FC
lbl_fn_804699A4_0000004C:
    lwz r4, 0x94(r3)
    lwz r0, 0xa0(r3)
    cmpw r4, r0
    bge lbl_fn_804699A4_000000E8
    lwz r5, 0xa8(r3)
    mulli r0, r4, 0x98
    lwz r3, 0x9c(r3)
    cmpwi r5, 0x0
    add r31, r3, r0
    beq lbl_fn_804699A4_00000084
    mr r3, r5
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0xa8(r30)
lbl_fn_804699A4_00000084:
    lis r5, lbl_80755394@ha
    li r3, 0xa0
    addi r5, r5, lbl_80755394@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_804699A4_000000B8
    mr r4, r30
    addi r5, r31, 0x4
    addi r6, r31, 0x14
    bl fn_8046A370
lbl_fn_804699A4_000000B8:
    stw r3, 0xa8(r30)
    lwz r3, lbl_8087F430
    lwz r4, 0x0(r31)
    bl fn_80370174
    cmpwi r3, 0x1
    bne lbl_fn_804699A4_000000FC
    lwz r3, lbl_8087F430
    li r5, 0x2
    lwz r4, 0x0(r31)
    li r6, 0x0
    bl fn_80370320
    b lbl_fn_804699A4_000000FC
lbl_fn_804699A4_000000E8:
    lwz r12, 0x0(r3)
    li r4, 0x2
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_804699A4_000000FC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80469AB8(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r3
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    lwz r4, 0x50(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    bl fn_8046A20C
    lwz r0, 0xa0(r31)
    lwz r5, 0x94(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80469AB8_00000248
    lwz r3, 0x50(r31)
    lfs f1, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_80469AB8_000001E0
    lwz r0, 0x98(r31)
    lis r4, lbl_80755394@ha
    addi r4, r4, lbl_80755394@l
    addi r3, r1, 0x30
    subf r5, r0, r5
    addi r4, r4, 0x11e
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    lwz r30, 0x54(r31)
    addi r3, r1, 0x30
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x1c
    bl fn_801F4E8C
    lwz r4, 0x98(r31)
    addi r6, r1, 0x1c
    lwz r0, 0x94(r31)
    li r5, 0x0
    lwz r3, lbl_8087F580
    li r7, 0x0
    subf r0, r4, r0
    slwi r0, r0, 2
    add r4, r31, r0
    lwz r4, 0x58(r4)
    bl fn_804A55FC
lbl_fn_80469AB8_000001E0:
    lis r30, lbl_80755394@ha
    lwz r29, 0x54(r31)
    addi r30, r30, lbl_80755394@l
    addi r3, r30, 0x12c
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r29
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lwz r3, 0x80(r31)
    addi r4, r30, 0x134
    addi r5, r1, 0x8
    bl fn_801F6E78
    lwz r3, 0x80(r31)
    addi r4, r30, 0x13c
    lfs f1, lbl_80886EA8
    bl fn_801F6C80
    lwz r3, 0x80(r31)
    li r6, 0xa
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x80(r31)
    lwz r4, 0x98(r31)
    lwz r5, 0xa0(r31)
    bl fn_804A4930
lbl_fn_80469AB8_00000248:
    lwz r3, 0x50(r31)
    lfs f0, lbl_80886E8C
    stfs f0, 0x104(r3)
    lwz r3, 0x58(r31)
    stfs f0, 0x54(r3)
    lwz r3, 0x5c(r31)
    stfs f0, 0x54(r3)
    lwz r3, 0x60(r31)
    stfs f0, 0x54(r3)
    lwz r3, 0x64(r31)
    stfs f0, 0x54(r3)
    lwz r3, 0x68(r31)
    stfs f0, 0x54(r3)
    lwz r3, 0x6c(r31)
    stfs f0, 0x54(r3)
    lwz r3, 0x70(r31)
    stfs f0, 0x54(r3)
    lwz r3, 0x74(r31)
    stfs f0, 0x54(r3)
    lwz r3, 0x78(r31)
    stfs f0, 0x54(r3)
    lwz r3, 0x7c(r31)
    stfs f0, 0x54(r3)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80469C64(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x50(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    bl fn_8046A20C
    lwz r3, 0x50(r31)
    lfs f0, lbl_80886E90
    stfs f0, 0x104(r3)
    lwz r3, 0x58(r31)
    stfs f0, 0x54(r3)
    lwz r3, 0x5c(r31)
    stfs f0, 0x54(r3)
    lwz r3, 0x60(r31)
    stfs f0, 0x54(r3)
    lwz r3, 0x64(r31)
    stfs f0, 0x54(r3)
    lwz r3, 0x68(r31)
    stfs f0, 0x54(r3)
    lwz r3, 0x6c(r31)
    stfs f0, 0x54(r3)
    lwz r3, 0x70(r31)
    stfs f0, 0x54(r3)
    lwz r3, 0x74(r31)
    stfs f0, 0x54(r3)
    lwz r3, 0x78(r31)
    stfs f0, 0x54(r3)
    lwz r3, 0x7c(r31)
    stfs f0, 0x54(r3)
    lwz r4, 0xa8(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80469C64_000003A8
    lwz r3, 0x70(r4)
    li r0, 0x1
    cmpwi r3, 0x2
    beq lbl_fn_80469C64_0000036C
    cmpwi r3, 0x5
    beq lbl_fn_80469C64_0000036C
    li r0, 0x0
lbl_fn_80469C64_0000036C:
    cmpwi r0, 0x0
    bne lbl_fn_80469C64_000003A8
    lwz r3, 0x98(r4)
    lwz r4, 0x94(r4)
    subi r0, r3, 0x1
    cmpw r4, r0
    bge lbl_fn_80469C64_00000394
    lwz r3, 0x88(r31)
    lfs f0, lbl_80886EAC
    stfs f0, 0x104(r3)
lbl_fn_80469C64_00000394:
    cmpwi r4, 0x0
    ble lbl_fn_80469C64_000003A8
    lwz r3, 0x84(r31)
    lfs f0, lbl_80886EAC
    stfs f0, 0x104(r3)
lbl_fn_80469C64_000003A8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80469D60(void)
{
    nofralloc
    stwu r1, -0xd60(r1)
    mflr r0
    lis r7, lbl_8077A090@ha
    stw r0, 0xd64(r1)
    addi r7, r7, lbl_8077A090@l
    stmw r17, 0xd24(r1)
    mr r21, r4
    mr r20, r5
    mr r17, r3
    mr r18, r6
    addi r19, r1, 0xc0
    li r4, 0x0
    li r5, 0x800
    lwz r0, 0xa0(r3)
    subf r0, r0, r0
    stw r0, 0xa0(r3)
    li r0, 0x0
    addi r3, r1, 0xd0
    stw r7, 0xc0(r1)
    stw r0, 0xc4(r1)
    stw r0, 0xc8(r1)
    stw r0, 0xcc(r1)
    stw r0, 0xd10(r1)
    bl memset
    addi r3, r1, 0xcd0
    li r4, 0x0
    li r5, 0x40
    bl memset
    srwi. r3, r20, 1
    mr r5, r3
    beq lbl_fn_80469D60_0000043C
    subi r5, r3, 0x1
lbl_fn_80469D60_0000043C:
    cmpwi r3, 0x0
    mr r3, r19
    beq lbl_fn_80469D60_00000450
    addi r4, r21, 0x2
    b lbl_fn_80469D60_00000454
lbl_fn_80469D60_00000450:
    mr r4, r21
lbl_fn_80469D60_00000454:
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_8077A070@ha
    lis r4, lbl_8077A0A8@ha
    addi r3, r3, lbl_8077A070@l
    stw r3, 0xc0(r1)
    mr r3, r19
    addi r4, r4, lbl_8077A0A8@l
    bl fn_8005B9AC
    lis r3, __files@ha
    lis r4, lbl_80755394@ha
    addi r19, r1, 0x14
    li r31, 0x13
    addi r23, r4, lbl_80755394@l
    addi r24, r3, __files@l
    li r21, 0x10
    lis r28, 0xcccd
    lis r22, 0x1af
    li r25, 0x0
    lis r27, 0x90
    lis r29, 0x11f
    lis r30, lbl_8078FB30@ha
lbl_fn_80469D60_000004B4:
    addi r3, r1, 0xc0
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmplwi r0, 0x3b
    beq lbl_fn_80469D60_00000844
    cmplwi r0, 0x23
    beq lbl_fn_80469D60_00000844
    bl fn_800DC1DC
    cmpwi r3, 0x0
    stw r3, 0x28(r1)
    mr r4, r3
    beq lbl_fn_80469D60_00000518
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80469D60_00000518
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_80469D60_00000518
    cmpwi r18, 0x0
    beq lbl_fn_80469D60_00000844
    lwz r3, lbl_8087F430
    li r5, 0x1
    lwz r4, 0x28(r1)
    li r6, 0x0
    bl fn_80370320
lbl_fn_80469D60_00000518:
    lwz r20, lbl_8087EEC8
    addi r3, r1, 0xc0
    bl fn_8005B710
    mr r5, r3
    mr r3, r20
    addi r4, r1, 0x2c
    li r6, 0x10
    bl fn_8006F420
    addi r3, r1, 0xc0
    bl fn_8005B710
    mr r4, r3
    addi r3, r1, 0x3c
    bl fn_80686A64
    lwz r4, 0xa0(r17)
    lwz r3, 0xa4(r17)
    cmplw r4, r3
    bge lbl_fn_80469D60_000005C8
    addi r3, r4, 0x1
    stw r3, 0xa0(r17)
    subi r0, r3, 0x1
    lwz r5, 0x9c(r17)
    mulli r3, r0, 0x98
    lwz r0, 0x28(r1)
    addi r4, r1, 0x38
    stwx r0, r5, r3
    add r6, r5, r3
    addi r5, r6, 0x10
    lwz r0, 0x30(r1)
    lwz r3, 0x2c(r1)
    stw r3, 0x4(r6)
    stw r0, 0x8(r6)
    lwz r0, 0x38(r1)
    lwz r3, 0x34(r1)
    stw r3, 0xc(r6)
    stw r0, 0x10(r6)
    mtctr r21
lbl_fn_80469D60_000005A8:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_80469D60_000005A8
    lwz r0, 0xbc(r1)
    stw r0, 0x94(r6)
    b lbl_fn_80469D60_00000844
lbl_fn_80469D60_000005C8:
    addi r0, r22, 0x286b
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_80469D60_000005EC
    addi r4, r23, 0x147
    addi r3, r24, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80469D60_000005EC:
    addi r3, r17, 0xa4
    stw r25, 0x14(r1)
    addi r0, r22, 0x286b
    stw r25, 0x18(r1)
    stw r25, 0x1c(r1)
    stw r3, 0x20(r1)
    stw r25, 0x24(r1)
    lwz r3, 0xa0(r17)
    lwz r26, 0xa4(r17)
    addi r3, r3, 0x1
    subf r3, r26, r3
    subf r0, r26, r0
    cmplw r3, r0
    stw r3, 0x10(r1)
    ble lbl_fn_80469D60_0000063C
    addi r4, r23, 0x147
    addi r3, r24, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80469D60_0000063C:
    subi r0, r27, 0x47dd
    cmplw r26, r0
    bge lbl_fn_80469D60_00000684
    addi r4, r26, 0x1
    subi r5, r28, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x10(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_80469D60_00000678
    addi r3, r1, 0x10
lbl_fn_80469D60_00000678:
    lwz r0, 0x0(r3)
    add r26, r26, r0
    b lbl_fn_80469D60_000006C0
lbl_fn_80469D60_00000684:
    addi r0, r29, 0x7046
    cmplw r26, r0
    bge lbl_fn_80469D60_000006BC
    addi r3, r26, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80469D60_000006B0
    addi r3, r1, 0x10
lbl_fn_80469D60_000006B0:
    lwz r0, 0x0(r3)
    add r26, r26, r0
    b lbl_fn_80469D60_000006C0
lbl_fn_80469D60_000006BC:
    addi r26, r22, 0x286b
lbl_fn_80469D60_000006C0:
    addi r0, r22, 0x286b
    cmplw r26, r0
    ble lbl_fn_80469D60_000006E0
    addi r4, r23, 0x147
    addi r3, r24, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80469D60_000006E0:
    mulli r3, r26, 0x98
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r20, r3
    bne lbl_fn_80469D60_00000708
    addi r3, r24, 0xa0
    addi r4, r30, lbl_8078FB30@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80469D60_00000708:
    stw r20, 0x14(r1)
    addi r4, r1, 0x38
    lwz r0, 0x18(r1)
    stw r26, 0x1c(r1)
    mulli r5, r0, 0x98
    lwz r0, 0x28(r1)
    lwz r3, 0xa0(r17)
    stw r3, 0x24(r1)
    mulli r3, r3, 0x98
    add r3, r20, r3
    stwx r0, r5, r3
    add r6, r5, r3
    addi r5, r6, 0x10
    lwz r0, 0x30(r1)
    lwz r3, 0x2c(r1)
    stw r3, 0x4(r6)
    stw r0, 0x8(r6)
    lwz r0, 0x38(r1)
    lwz r3, 0x34(r1)
    stw r3, 0xc(r6)
    stw r0, 0x10(r6)
    mtctr r21
lbl_fn_80469D60_00000760:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_80469D60_00000760
    lwz r0, 0xbc(r1)
    stw r0, 0x94(r6)
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    mulli r0, r0, 0x98
    lwz r3, 0x14(r1)
    lwz r4, 0xa0(r17)
    lwz r8, 0x9c(r17)
    mulli r4, r4, 0x98
    add r6, r3, r0
    add r7, r8, r4
    b lbl_fn_80469D60_000007F0
lbl_fn_80469D60_000007AC:
    subic. r6, r6, 0x98
    subi r7, r7, 0x98
    beq lbl_fn_80469D60_000007D8
    subi r5, r6, 0x4
    subi r4, r7, 0x4
    mtctr r31
lbl_fn_80469D60_000007C4:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_80469D60_000007C4
lbl_fn_80469D60_000007D8:
    lwz r4, 0x24(r1)
    lwz r3, 0x18(r1)
    subi r0, r4, 0x1
    stw r0, 0x24(r1)
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
lbl_fn_80469D60_000007F0:
    cmplw r7, r8
    bgt lbl_fn_80469D60_000007AC
    stw r25, 0xa0(r17)
    cmpwi r19, 0x0
    lwz r3, 0xa4(r17)
    lwz r0, 0x1c(r1)
    stw r0, 0xa4(r17)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x9c(r17)
    stw r0, 0x9c(r17)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0xa0(r17)
    stw r25, 0x18(r1)
    beq lbl_fn_80469D60_00000844
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80469D60_00000844
    stw r25, 0x18(r1)
    bl dtor_80084684
lbl_fn_80469D60_00000844:
    addi r3, r1, 0xc0
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_80469D60_000004B4
    lmw r17, 0xd24(r1)
    lwz r0, 0xd64(r1)
    mtlr r0
    addi r1, r1, 0xd60
    blr
}

asm void fn_8046A20C(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_26
    lwz r5, 0x54(r3)
    lis r4, lbl_80755394@ha
    mr r31, r3
    lfs f0, lbl_80886E88
    lwz r0, 0x38(r5)
    mr r27, r31
    addi r30, r4, lbl_80755394@l
    li r26, 0x0
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
lbl_fn_8046A20C_000008B8:
    addi r3, r1, 0x30
    addi r4, r30, 0x15b
    addi r5, r26, 0x1
    crclr 6
    bl sprintf
    lwz r29, 0x54(r31)
    addi r3, r1, 0x30
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r29
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lfs f4, 0x8(r1)
    addi r4, r30, 0x134
    lfs f3, 0xc(r1)
    addi r5, r1, 0x1c
    lfs f2, 0x10(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x18(r1)
    stfs f4, 0x1c(r1)
    stfs f3, 0x20(r1)
    stfs f2, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f0, 0x2c(r1)
    lwz r3, 0x58(r27)
    bl fn_801F6E78
    lwz r3, 0x98(r31)
    lwz r0, 0xa0(r31)
    add r3, r26, r3
    cmpw r3, r0
    bge lbl_fn_8046A20C_000009A4
    mulli r0, r3, 0x98
    lwz r3, 0x9c(r31)
    li r28, 0x0
    lwzx r4, r3, r0
    add r29, r3, r0
    cmpwi r4, 0x0
    ble lbl_fn_8046A20C_00000964
    lwz r3, lbl_8087F430
    bl fn_80370174
    cmpwi r3, 0x1
    bne lbl_fn_8046A20C_00000964
    li r28, 0x1
lbl_fn_8046A20C_00000964:
    lwz r3, 0x58(r27)
    addi r4, r30, 0x168
    addi r5, r29, 0x14
    bl fn_801F837C
    cmpwi r28, 0x0
    lwz r3, 0x58(r27)
    addi r4, r30, 0x171
    beq lbl_fn_8046A20C_0000098C
    lfs f1, lbl_80886E8C
    b lbl_fn_8046A20C_00000990
lbl_fn_8046A20C_0000098C:
    lfs f1, lbl_80886E88
lbl_fn_8046A20C_00000990:
    bl fn_801F6C80
    lwz r3, 0x58(r27)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8046A20C_000009A4:
    addi r26, r26, 0x1
    addi r27, r27, 0x4
    cmpwi r26, 0xa
    blt lbl_fn_8046A20C_000008B8
    addi r11, r1, 0x90
    bl _restgpr_26
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8046A370(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x130
    bl _savegpr_25
    mr r29, r3
    mr r30, r5
    mr r31, r6
    bl fn_800D1D3C
    lis r3, lbl_8078FAB0@ha
    addi r28, r29, 0x48
    addi r3, r3, lbl_8078FAB0@l
    stw r3, 0x0(r29)
    mr r3, r28
    bl fn_80473E74
    lfs f0, lbl_80886E88
    lis r3, lbl_8078FBB0@ha
    li r0, 0x0
    lis r4, lbl_80755394@ha
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x0(r28)
    addi r4, r4, lbl_80755394@l
    li r5, 0x0
    stw r0, 0x6c(r29)
    mr r3, r29
    addi r4, r4, 0x179
    stw r0, 0x70(r29)
    stw r0, 0x74(r29)
    stfs f0, 0x78(r29)
    stfs f0, 0x7c(r29)
    stw r0, 0x80(r29)
    stw r0, 0x84(r29)
    stw r0, 0x88(r29)
    stw r0, 0x8c(r29)
    stw r0, 0x90(r29)
    stw r0, 0x94(r29)
    stw r0, 0x98(r29)
    stw r0, 0x9c(r29)
    bl fn_801F3FF8
    stw r3, 0x50(r29)
    li r4, 0x1
    bl fn_800D246C
    lis r28, lbl_80755370@ha
    li r25, 0x0
    addi r28, r28, lbl_80755370@l
    li r27, 0x0
lbl_fn_8046A370_00000A84:
    lwz r4, 0x0(r28)
    mr r3, r29
    add r26, r29, r27
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x54(r26)
    li r4, 0x1
    bl fn_800D246C
    lwz r4, 0x0(r28)
    mr r3, r29
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x60(r26)
    li r4, 0x1
    bl fn_800D246C
    addi r25, r25, 0x1
    addi r27, r27, 0x4
    cmpwi r25, 0x3
    addi r28, r28, 0x4
    blt lbl_fn_8046A370_00000A84
    lwz r0, 0x88(r29)
    srwi. r0, r0, 31
    bne lbl_fn_8046A370_00000AEC
    lbz r0, 0x88(r29)
    clrlwi r28, r0, 25
    b lbl_fn_8046A370_00000AF0
lbl_fn_8046A370_00000AEC:
    lwz r28, 0x8c(r29)
lbl_fn_8046A370_00000AF0:
    lbz r0, 0xc(r1)
    mr r3, r31
    stb r0, 0x8(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r5, r28
    mr r6, r31
    addi r3, r29, 0x88
    addi r8, r1, 0x8
    add r7, r31, r0
    li r4, 0x0
    bl fn_8006F72C
    lis r4, lbl_80755394@ha
    mr r5, r30
    addi r4, r4, lbl_80755394@l
    addi r3, r1, 0x10
    addi r4, r4, 0x19d
    crclr 6
    bl sprintf
    lwz r12, 0x48(r29)
    addi r3, r29, 0x48
    addi r4, r1, 0x10
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r11, r1, 0x130
    mr r3, r29
    bl _restgpr_25
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_8046A514(void)
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
    beq lbl_fn_8046A514_00000BE8
    addic. r0, r3, 0x48
    beq lbl_fn_8046A514_00000BB0
    lwz r0, 0x48(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8046A514_00000BB0
    lwz r3, 0x50(r3)
    bl dtor_80084684
lbl_fn_8046A514_00000BB0:
    addic. r0, r30, 0x3c
    beq lbl_fn_8046A514_00000BCC
    lwz r0, 0x3c(r30)
    srwi. r0, r0, 31
    beq lbl_fn_8046A514_00000BCC
    lwz r3, 0x44(r30)
    bl dtor_80084684
lbl_fn_8046A514_00000BCC:
    addi r3, r30, 0xc
    li r4, -0x1
    bl fn_800D5808
    cmpwi r31, 0x0
    ble lbl_fn_8046A514_00000BE8
    mr r3, r30
    bl dtor_80084684
lbl_fn_8046A514_00000BE8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8046A5A8(void)
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
    beq lbl_fn_8046A5A8_00000CD0
    lwz r0, 0x9c(r3)
    lis r4, lbl_8078FAB0@ha
    addi r4, r4, lbl_8078FAB0@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8046A5A8_00000C50
    lis r4, fn_8046A514@ha
    mr r3, r0
    addi r4, r4, fn_8046A514@l
    bl fn_80695A50
lbl_fn_8046A5A8_00000C50:
    addic. r0, r30, 0x98
    li r0, 0x0
    stw r0, 0x9c(r30)
    stw r0, 0x98(r30)
    beq lbl_fn_8046A5A8_00000C88
    cmpwi r0, 0x0
    beq lbl_fn_8046A5A8_00000C7C
    lis r4, fn_8046A514@ha
    li r3, 0x0
    addi r4, r4, fn_8046A514@l
    bl fn_80695A50
lbl_fn_8046A5A8_00000C7C:
    li r0, 0x0
    stw r0, 0x9c(r30)
    stw r0, 0x98(r30)
lbl_fn_8046A5A8_00000C88:
    addic. r0, r30, 0x88
    beq lbl_fn_8046A5A8_00000CA4
    lwz r0, 0x88(r30)
    srwi. r0, r0, 31
    beq lbl_fn_8046A5A8_00000CA4
    lwz r3, 0x90(r30)
    bl dtor_80084684
lbl_fn_8046A5A8_00000CA4:
    addic. r3, r30, 0x48
    beq lbl_fn_8046A5A8_00000CB4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8046A5A8_00000CB4:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_8046A5A8_00000CD0
    mr r3, r30
    bl dtor_80084684
lbl_fn_8046A5A8_00000CD0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8046A690(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r0, 0x74(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8046A690_00000E2C
    addi r3, r3, 0x48
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_8046A690_00000D2C
    li r3, 0x0
    b lbl_fn_8046A690_00000EE4
lbl_fn_8046A690_00000D2C:
    mr r3, r31
    bl fn_800D3FA4
    cmpwi r3, 0x0
    bne lbl_fn_8046A690_00000D44
    li r3, 0x0
    b lbl_fn_8046A690_00000EE4
lbl_fn_8046A690_00000D44:
    addi r3, r31, 0x48
    bl fn_8047059C
    mr r30, r3
    addi r3, r31, 0x48
    bl fn_80470580
    mr r4, r3
    mr r3, r31
    mr r5, r30
    bl fn_8046B798
    lwz r3, 0x50(r31)
    li r4, 0x1
    lfs f1, lbl_80886E88
    li r5, 0x0
    lfs f2, lbl_80886E8C
    bl fn_804A39EC
    lwz r4, 0x50(r31)
    lis r3, lbl_80755394@ha
    addi r3, r3, lbl_80755394@l
    addi r3, r3, 0x1b8
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80886E88
    mr r4, r3
    mr r3, r30
    bl fn_801FECE0
    lwz r3, 0x50(r31)
    mr r30, r31
    li r29, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8046A690_00000DC0:
    lwz r3, 0x54(r30)
    li r4, 0x1
    lfs f1, lbl_80886E88
    li r5, 0x0
    lfs f2, lbl_80886E8C
    bl fn_804A39EC
    lwz r3, 0x54(r30)
    li r4, 0x1
    lfs f1, lbl_80886E88
    li r5, 0x0
    lwz r0, 0x38(r3)
    lfs f2, lbl_80886E8C
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x60(r30)
    bl fn_804A39EC
    lwz r3, 0x60(r30)
    addi r29, r29, 0x1
    cmpwi r29, 0x3
    addi r30, r30, 0x4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_8046A690_00000DC0
    li r0, 0x1
    stw r0, 0x74(r31)
    b lbl_fn_8046A690_00000EE0
lbl_fn_8046A690_00000E2C:
    cmpwi r0, 0x1
    bne lbl_fn_8046A690_00000EE0
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_8046A690_00000E68
lbl_fn_8046A690_00000E40:
    lwz r0, 0x9c(r31)
    add r3, r0, r30
    addi r3, r3, 0xc
    bl fn_800D59B8
    cmpwi r3, 0x0
    beq lbl_fn_8046A690_00000E60
    li r3, 0x0
    b lbl_fn_8046A690_00000EE4
lbl_fn_8046A690_00000E60:
    addi r30, r30, 0x54
    addi r29, r29, 0x1
lbl_fn_8046A690_00000E68:
    lwz r0, 0x98(r31)
    cmplw r29, r0
    blt lbl_fn_8046A690_00000E40
    lwz r30, 0x9c(r31)
    lwz r0, 0x4(r30)
    cmpwi r0, 0x2
    bne lbl_fn_8046A690_00000EA4
    addi r3, r30, 0x2c
    bl fn_80473F18
    lis r4, lbl_80755394@ha
    mr r5, r3
    addi r4, r4, lbl_80755394@l
    lwz r3, 0x5c(r31)
    addi r4, r4, 0x1bd
    bl fn_801F4E30
lbl_fn_8046A690_00000EA4:
    lwz r0, 0x8(r30)
    cmpwi r0, 0x2
    bne lbl_fn_8046A690_00000ED0
    addi r3, r30, 0x2c
    bl fn_80473F18
    lis r4, lbl_80755394@ha
    mr r5, r3
    addi r4, r4, lbl_80755394@l
    lwz r3, 0x68(r31)
    addi r4, r4, 0x1bd
    bl fn_801F4E30
lbl_fn_8046A690_00000ED0:
    li r0, 0x2
    stw r0, 0x74(r31)
    li r3, 0x1
    b lbl_fn_8046A690_00000EE4
lbl_fn_8046A690_00000EE0:
    li r3, 0x0
lbl_fn_8046A690_00000EE4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8046A8A4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r5, 0x80(r3)
    lwz r4, 0x84(r3)
    subi r6, r5, 0x1
    lwz r0, 0x70(r3)
    srawi r5, r6, 31
    subi r7, r4, 0x1
    cmpwi r0, 0x1
    andc r0, r6, r5
    srawi r4, r7, 31
    stw r0, 0x80(r3)
    andc r0, r7, r4
    stw r0, 0x84(r3)
    bne lbl_fn_8046A8A4_00000F4C
    bl fn_8046ACDC
lbl_fn_8046A8A4_00000F4C:
    mr r3, r31
    bl fn_8046A9D0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8046A90C(void)
{
    nofralloc
    lwz r4, 0x50(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x54(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x60(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x58(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x64(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x5c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x68(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    b fn_8046AE7C
}

asm void fn_8046A980(void)
{
    nofralloc
    lwz r0, 0x70(r3)
    cmpwi r4, 0x3
    stw r0, 0x6c(r3)
    stw r4, 0x70(r3)
    beq lbl_fn_8046A980_00000FFC
    cmpwi r4, 0x4
    beq lbl_fn_8046A980_00001014
    blr
lbl_fn_8046A980_00000FFC:
    li r0, 0xa
    stw r0, 0x84(r3)
    lwz r3, 0x50(r3)
    lfs f0, lbl_80886E88
    stfs f0, 0x100(r3)
    blr
lbl_fn_8046A980_00001014:
    li r0, 0xa
    stw r0, 0x80(r3)
    lwz r3, 0x50(r3)
    lfs f0, 0xa0(r3)
    stfs f0, 0x100(r3)
    blr
}

asm void fn_8046A9D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r0, 0x70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8046A9D0_00001074
    cmpwi r0, 0x2
    beq lbl_fn_8046A9D0_000010E0
    cmpwi r0, 0x1
    beq lbl_fn_8046A9D0_00001148
    cmpwi r0, 0x3
    beq lbl_fn_8046A9D0_0000116C
    cmpwi r0, 0x4
    beq lbl_fn_8046A9D0_000011B0
    b lbl_fn_8046A9D0_000011E8
lbl_fn_8046A9D0_00001074:
    lwz r4, 0x50(r3)
    lfs f0, lbl_80886E88
    lfs f1, 0xa0(r4)
    stfs f1, 0x100(r4)
    lfs f1, lbl_80886E9C
    lwz r4, 0x50(r3)
    lfs f2, lbl_80886E8C
    stfs f0, 0x104(r4)
    lfs f0, 0x78(r3)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_8046A9D0_000010A8
    b lbl_fn_8046A9D0_000010AC
lbl_fn_8046A9D0_000010A8:
    fmr f2, f0
lbl_fn_8046A9D0_000010AC:
    frsp f1, f2
    lfs f0, lbl_80886E8C
    stfs f2, 0x78(r3)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8046A9D0_000011E8
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8046A9D0_000011E8
lbl_fn_8046A9D0_000010E0:
    lwz r4, 0x50(r3)
    lfs f2, lbl_80886E88
    lfs f0, 0xa0(r4)
    stfs f0, 0x100(r4)
    lfs f0, lbl_80886E9C
    lwz r4, 0x50(r3)
    stfs f2, 0x104(r4)
    lfs f1, 0x78(r3)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_fn_8046A9D0_00001110
    b lbl_fn_8046A9D0_00001114
lbl_fn_8046A9D0_00001110:
    fmr f2, f0
lbl_fn_8046A9D0_00001114:
    frsp f1, f2
    lfs f0, lbl_80886E88
    stfs f2, 0x78(r3)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8046A9D0_000011E8
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x5
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8046A9D0_000011E8
lbl_fn_8046A9D0_00001148:
    lwz r4, 0x50(r3)
    lfs f1, lbl_80886E88
    lfs f0, 0xa0(r4)
    stfs f0, 0x100(r4)
    lfs f0, lbl_80886E8C
    lwz r4, 0x50(r3)
    stfs f1, 0x104(r4)
    stfs f0, 0x78(r3)
    b lbl_fn_8046A9D0_000011E8
lbl_fn_8046A9D0_0000116C:
    lwz r4, 0x50(r3)
    lfs f0, lbl_80886EAC
    stfs f0, 0x104(r4)
    lwz r4, 0x50(r3)
    lfs f1, 0xa0(r4)
    lfs f0, 0x100(r4)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_8046A9D0_000011E8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8046A9D0_000011E8
lbl_fn_8046A9D0_000011B0:
    lwz r4, 0x50(r3)
    lfs f0, lbl_80886EA0
    stfs f0, 0x104(r4)
    lfs f0, lbl_80886E88
    lwz r4, 0x50(r3)
    lfs f1, 0x100(r4)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8046A9D0_000011E8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8046A9D0_000011E8:
    lwz r0, 0x70(r31)
    cmplwi r0, 0x2
    ble lbl_fn_8046A9D0_00001208
    cmpwi cr6, r0, 0x3
    blt cr6, lbl_fn_8046A9D0_00001320
    cmpwi cr1, r0, 0x4
    ble cr1, lbl_fn_8046A9D0_00001214
    b lbl_fn_8046A9D0_00001320
lbl_fn_8046A9D0_00001208:
    lfs f0, 0x78(r31)
    stfs f0, 0x7c(r31)
    b lbl_fn_8046A9D0_00001320
lbl_fn_8046A9D0_00001214:
    lwz r3, 0x50(r31)
    lfs f2, lbl_80886EB0
    lfs f3, 0x100(r3)
    fcmpo cr0, f3, f2
    bge lbl_fn_8046A9D0_0000123C
    fdivs f1, f3, f2
    lfs f0, lbl_80886E8C
    fsubs f0, f0, f1
    stfs f0, 0x7c(r31)
    b lbl_fn_8046A9D0_00001320
lbl_fn_8046A9D0_0000123C:
    lfs f1, lbl_80886EB4
    lfs f0, lbl_80886EB8
    fsubs f1, f3, f1
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_8046A9D0_000012F0
    lfs f0, lbl_80886E88
    stfs f0, 0x7c(r31)
    bne cr6, lbl_fn_8046A9D0_00001274
    lwz r3, 0x94(r31)
    addi r0, r3, 0x1
    stw r0, 0x94(r31)
    b lbl_fn_8046A9D0_00001284
lbl_fn_8046A9D0_00001274:
    bne cr1, lbl_fn_8046A9D0_00001284
    lwz r3, 0x94(r31)
    subi r0, r3, 0x1
    stw r0, 0x94(r31)
lbl_fn_8046A9D0_00001284:
    lwz r0, 0x94(r31)
    lwz r3, 0x9c(r31)
    mulli r0, r0, 0x54
    add r30, r3, r0
    lwz r0, 0x4(r30)
    cmpwi r0, 0x2
    bne lbl_fn_8046A9D0_000012C0
    addi r3, r30, 0x2c
    bl fn_80473F18
    lis r4, lbl_80755394@ha
    mr r5, r3
    addi r4, r4, lbl_80755394@l
    lwz r3, 0x5c(r31)
    addi r4, r4, 0x1bd
    bl fn_801F4E30
lbl_fn_8046A9D0_000012C0:
    lwz r0, 0x8(r30)
    cmpwi r0, 0x2
    bne lbl_fn_8046A9D0_00001320
    addi r3, r30, 0x2c
    bl fn_80473F18
    lis r4, lbl_80755394@ha
    mr r5, r3
    addi r4, r4, lbl_80755394@l
    lwz r3, 0x68(r31)
    addi r4, r4, 0x1bd
    bl fn_801F4E30
    b lbl_fn_8046A9D0_00001320
lbl_fn_8046A9D0_000012F0:
    lfs f1, 0xa0(r3)
    fsubs f0, f1, f2
    fcmpo cr0, f3, f0
    ble lbl_fn_8046A9D0_00001318
    fsubs f1, f1, f3
    lfs f0, lbl_80886E8C
    fdivs f1, f1, f2
    fsubs f0, f0, f1
    stfs f0, 0x7c(r31)
    b lbl_fn_8046A9D0_00001320
lbl_fn_8046A9D0_00001318:
    lfs f0, lbl_80886E88
    stfs f0, 0x7c(r31)
lbl_fn_8046A9D0_00001320:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8046ACDC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x5
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r31, lbl_8087EF70
    mr r3, r31
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8046ACDC_000013B4
    lis r4, lbl_80755310@ha
    lfs f1, lbl_80886E8C
    addi r4, r4, lbl_80755310@l
    addi r3, r1, 0x10
    lwz r4, 0x4(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x2
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8046ACDC_000014C0
lbl_fn_8046ACDC_000013B4:
    mr r3, r31
    li r4, 0x0
    li r5, 0x18
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_8046ACDC_000013E4
    mr r3, r31
    li r4, 0x0
    li r5, 0x3
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8046ACDC_00001440
lbl_fn_8046ACDC_000013E4:
    lwz r3, 0x94(r30)
    lwz r0, 0x98(r30)
    addi r3, r3, 0x1
    cmpw r3, r0
    bge lbl_fn_8046ACDC_000014C0
    lis r4, lbl_80755310@ha
    lfs f1, lbl_80886E8C
    addi r4, r4, lbl_80755310@l
    addi r3, r1, 0xc
    lwz r4, 0x8(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x3
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8046ACDC_000014C0
lbl_fn_8046ACDC_00001440:
    mr r3, r31
    li r4, 0x0
    li r5, 0x17
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_8046ACDC_00001470
    mr r3, r31
    li r4, 0x0
    li r5, 0x2
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8046ACDC_000014C0
lbl_fn_8046ACDC_00001470:
    lwz r3, 0x94(r30)
    subic. r0, r3, 0x1
    blt lbl_fn_8046ACDC_000014C0
    lis r4, lbl_80755310@ha
    lfs f1, lbl_80886E8C
    addi r4, r4, lbl_80755310@l
    addi r3, r1, 0x8
    lwz r4, 0x8(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x4
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8046ACDC_000014C0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8046AE7C(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xe0
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    bl _savegpr_23
    lwz r4, 0x50(r3)
    mr r24, r3
    lfs f1, lbl_80886EBC
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r0, 0x88(r3)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    bne lbl_fn_8046AE7C_00001524
    addi r4, r24, 0x8a
    b lbl_fn_8046AE7C_00001528
lbl_fn_8046AE7C_00001524:
    lwz r4, 0x90(r24)
lbl_fn_8046AE7C_00001528:
    lfs f2, lbl_80886E88
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r3, 0x50(r24)
    lis r23, lbl_80755394@ha
    fmr f31, f1
    addi r23, r23, lbl_80755394@l
    addi r25, r3, 0x58
    addi r3, r23, 0x1c5
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r25
    bl fn_801FECE0
    lwz r4, 0x50(r24)
    addi r3, r23, 0x1b8
    lfs f31, 0x78(r24)
    addi r23, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r23
    bl fn_801FECE0
    lwz r0, 0x88(r24)
    srwi. r0, r0, 31
    bne lbl_fn_8046AE7C_0000159C
    addi r25, r24, 0x8a
    b lbl_fn_8046AE7C_000015A0
lbl_fn_8046AE7C_0000159C:
    lwz r25, 0x90(r24)
lbl_fn_8046AE7C_000015A0:
    lwz r4, 0x50(r24)
    lis r3, lbl_80755394@ha
    addi r23, r3, lbl_80755394@l
    addi r3, r23, 0x168
    addi r26, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r26
    mr r5, r25
    bl fn_801FEE08
    lwz r5, 0x94(r24)
    addi r4, r23, 0x1cf
    lwz r3, 0x50(r24)
    li r6, 0x0
    addi r5, r5, 0x1
    bl fn_801F4CB4
    lwz r5, 0x94(r24)
    addi r4, r23, 0x1d4
    lwz r3, 0x50(r24)
    li r6, 0x0
    addi r5, r5, 0x1
    bl fn_801F4CB4
    lwz r3, 0x50(r24)
    addi r4, r23, 0x1dc
    lwz r5, 0x98(r24)
    li r6, 0x0
    bl fn_801F4CB4
    lwz r3, 0x50(r24)
    addi r4, r23, 0x1e4
    lwz r5, 0x98(r24)
    li r6, 0x0
    bl fn_801F4CB4
    lfs f0, lbl_80886E88
    addi r3, r23, 0x1ef
    stfs f0, 0x78(r1)
    stfs f0, 0x7c(r1)
    stfs f0, 0x80(r1)
    stfs f0, 0x84(r1)
    stfs f0, 0x88(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x68(r1)
    stfs f0, 0x6c(r1)
    stfs f0, 0x70(r1)
    stfs f0, 0x74(r1)
    lwz r25, 0x50(r24)
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r25
    addi r3, r1, 0x50
    bl fn_801F4E8C
    lfs f4, 0x50(r1)
    addi r3, r23, 0x1f6
    lfs f3, 0x54(r1)
    lfs f2, 0x58(r1)
    lfs f1, 0x5c(r1)
    lfs f0, 0x60(r1)
    stfs f4, 0x78(r1)
    stfs f3, 0x7c(r1)
    stfs f2, 0x80(r1)
    stfs f1, 0x84(r1)
    stfs f0, 0x88(r1)
    lwz r25, 0x50(r24)
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r25
    addi r3, r1, 0x3c
    bl fn_801F4E8C
    lfs f4, 0x3c(r1)
    addi r25, r23, 0x1b8
    lfs f3, 0x40(r1)
    mr r27, r24
    lfs f2, 0x44(r1)
    li r28, 0x0
    lfs f1, 0x48(r1)
    lfs f0, 0x4c(r1)
    stfs f4, 0x64(r1)
    stfs f3, 0x68(r1)
    stfs f2, 0x6c(r1)
    stfs f1, 0x70(r1)
    stfs f0, 0x74(r1)
lbl_fn_8046AE7C_000016E0:
    lwz r4, 0x54(r27)
    mr r3, r25
    lfs f31, 0x7c(r24)
    addi r26, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r26
    bl fn_801FECE0
    lwz r3, 0x54(r27)
    addi r4, r23, 0x134
    addi r5, r1, 0x78
    bl fn_801F4728
    lwz r4, 0x60(r27)
    mr r3, r25
    lfs f31, 0x7c(r24)
    addi r26, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r26
    bl fn_801FECE0
    lwz r3, 0x60(r27)
    addi r4, r23, 0x134
    addi r5, r1, 0x64
    bl fn_801F4728
    addi r28, r28, 0x1
    addi r27, r27, 0x4
    cmpwi r28, 0x3
    blt lbl_fn_8046AE7C_000016E0
    lwz r0, 0x94(r24)
    addi r3, r1, 0x30
    lwz r4, 0x9c(r24)
    mulli r0, r0, 0x54
    add r30, r4, r0
    lwz r0, 0x4(r30)
    slwi r0, r0, 2
    add r4, r24, r0
    lwz r4, 0x54(r4)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r0, 0x8(r30)
    slwi r0, r0, 2
    add r4, r24, r0
    lwz r4, 0x60(r4)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r0, 0x48(r30)
    srwi. r0, r0, 31
    bne lbl_fn_8046AE7C_000017B8
    addi r4, r30, 0x4a
    b lbl_fn_8046AE7C_000017BC
lbl_fn_8046AE7C_000017B8:
    lwz r4, 0x50(r30)
lbl_fn_8046AE7C_000017BC:
    lfs f1, lbl_8087E038
    li r5, 0x1
    lfs f2, lbl_8087E030
    li r6, 0x1
    lfs f3, lbl_80886E88
    li r7, 0x0
    li r8, 0x1
    bl fn_800DFB40
    li r0, 0x0
    stw r0, 0x8c(r1)
    lbz r23, 0x14(r1)
    addi r29, r1, 0x8c
    stw r0, 0x90(r1)
    addi r28, r1, 0x32
    addi r27, r1, 0x26
    li r26, 0x0
    stw r0, 0x94(r1)
    li r25, 0x0
    li r5, 0x0
    stw r0, 0x98(r1)
    stw r0, 0x9c(r1)
    stw r0, 0xa0(r1)
    stw r0, 0xa4(r1)
    stw r0, 0xa8(r1)
    stw r0, 0xac(r1)
    b lbl_fn_8046AE7C_000019E4
lbl_fn_8046AE7C_00001824:
    lwz r0, 0x30(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8046AE7C_00001840
    lbz r0, 0x30(r1)
    mr r6, r28
    clrlwi r0, r0, 25
    b lbl_fn_8046AE7C_00001848
lbl_fn_8046AE7C_00001840:
    lwz r6, 0x38(r1)
    lwz r0, 0x34(r1)
lbl_fn_8046AE7C_00001848:
    cmplw r5, r0
    bge lbl_fn_8046AE7C_000018A0
    slwi r3, r0, 1
    slwi r0, r5, 1
    add r4, r6, r3
    add r3, r6, r0
    addi r0, r4, 0x1
    subf r0, r3, r0
    srwi r0, r0, 1
    mtctr r0
    cmplw r3, r4
    bge lbl_fn_8046AE7C_000018A0
lbl_fn_8046AE7C_00001878:
    lhz r0, 0x0(r3)
    cmplwi r0, 0xa
    bne lbl_fn_8046AE7C_00001898
    subf r3, r6, r3
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r31, r0, 1
    b lbl_fn_8046AE7C_000018A4
lbl_fn_8046AE7C_00001898:
    addi r3, r3, 0x2
    bdnz lbl_fn_8046AE7C_00001878
lbl_fn_8046AE7C_000018A0:
    li r31, -0x1
lbl_fn_8046AE7C_000018A4:
    addis r0, r31, 0x1
    cmplwi r0, 0xffff
    beq lbl_fn_8046AE7C_00001958
    addi r0, r31, 0x1
    addi r3, r1, 0x24
    addi r4, r1, 0x30
    subf r6, r5, r0
    bl fn_800E0908
    lwz r0, 0x0(r29)
    srwi. r0, r0, 31
    bne lbl_fn_8046AE7C_000018DC
    lbz r0, 0x0(r29)
    clrlwi r4, r0, 25
    b lbl_fn_8046AE7C_000018E0
lbl_fn_8046AE7C_000018DC:
    lwz r4, 0x4(r29)
lbl_fn_8046AE7C_000018E0:
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8046AE7C_000018FC
    lbz r0, 0x24(r1)
    mr r6, r27
    clrlwi r0, r0, 25
    b lbl_fn_8046AE7C_00001904
lbl_fn_8046AE7C_000018FC:
    lwz r6, 0x2c(r1)
    lwz r0, 0x28(r1)
lbl_fn_8046AE7C_00001904:
    slwi r0, r0, 1
    stb r23, 0x10(r1)
    mr r3, r29
    addi r8, r1, 0x10
    add r7, r6, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8046AE7C_00001934
    lwz r3, 0x2c(r1)
    bl dtor_80084684
lbl_fn_8046AE7C_00001934:
    lwz r0, lbl_8087E03C
    addi r26, r26, 0x1
    addi r5, r31, 0x1
    cmpw r26, r0
    blt lbl_fn_8046AE7C_000019E4
    li r26, 0x0
    addi r29, r29, 0xc
    addi r25, r25, 0x1
    b lbl_fn_8046AE7C_000019E4
lbl_fn_8046AE7C_00001958:
    addi r3, r1, 0x18
    addi r4, r1, 0x30
    li r6, -0x1
    bl fn_800E0908
    mulli r0, r25, 0xc
    addi r3, r1, 0x8c
    lwzux r0, r3, r0
    srwi. r0, r0, 31
    bne lbl_fn_8046AE7C_00001988
    lbz r0, 0x0(r3)
    clrlwi r4, r0, 25
    b lbl_fn_8046AE7C_0000198C
lbl_fn_8046AE7C_00001988:
    lwz r4, 0x4(r3)
lbl_fn_8046AE7C_0000198C:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8046AE7C_000019A8
    lbz r0, 0x18(r1)
    addi r6, r1, 0x1a
    clrlwi r0, r0, 25
    b lbl_fn_8046AE7C_000019B0
lbl_fn_8046AE7C_000019A8:
    lwz r6, 0x20(r1)
    lwz r0, 0x1c(r1)
lbl_fn_8046AE7C_000019B0:
    lbz r5, 0xc(r1)
    slwi r0, r0, 1
    stb r5, 0x8(r1)
    add r7, r6, r0
    addi r8, r1, 0x8
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8046AE7C_000019EC
    lwz r3, 0x20(r1)
    bl dtor_80084684
    b lbl_fn_8046AE7C_000019EC
lbl_fn_8046AE7C_000019E4:
    cmpwi r25, 0x2
    blt lbl_fn_8046AE7C_00001824
lbl_fn_8046AE7C_000019EC:
    lwz r0, 0x4(r30)
    cmpwi r0, 0x2
    beq lbl_fn_8046AE7C_00001AFC
    lwz r0, 0x8c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8046AE7C_00001A0C
    addi r23, r1, 0x8e
    b lbl_fn_8046AE7C_00001A10
lbl_fn_8046AE7C_00001A0C:
    lwz r23, 0x94(r1)
lbl_fn_8046AE7C_00001A10:
    lwz r4, 0x54(r24)
    lis r3, lbl_80755394@ha
    addi r3, r3, lbl_80755394@l
    addi r3, r3, 0x1fd
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r23
    bl fn_801FEE08
    lwz r0, 0x8c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8046AE7C_00001A4C
    addi r23, r1, 0x8e
    b lbl_fn_8046AE7C_00001A50
lbl_fn_8046AE7C_00001A4C:
    lwz r23, 0x94(r1)
lbl_fn_8046AE7C_00001A50:
    lwz r4, 0x58(r24)
    lis r3, lbl_80755394@ha
    addi r3, r3, lbl_80755394@l
    addi r3, r3, 0x1fd
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r23
    bl fn_801FEE08
    lwz r0, 0x98(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8046AE7C_00001A8C
    addi r23, r1, 0x9a
    b lbl_fn_8046AE7C_00001A90
lbl_fn_8046AE7C_00001A8C:
    lwz r23, 0xa0(r1)
lbl_fn_8046AE7C_00001A90:
    lwz r4, 0x60(r24)
    lis r3, lbl_80755394@ha
    addi r3, r3, lbl_80755394@l
    addi r3, r3, 0x1fd
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r23
    bl fn_801FEE08
    lwz r0, 0x98(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8046AE7C_00001ACC
    addi r23, r1, 0x9a
    b lbl_fn_8046AE7C_00001AD0
lbl_fn_8046AE7C_00001ACC:
    lwz r23, 0xa0(r1)
lbl_fn_8046AE7C_00001AD0:
    lwz r4, 0x64(r24)
    lis r3, lbl_80755394@ha
    addi r3, r3, lbl_80755394@l
    addi r3, r3, 0x1fd
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r23
    bl fn_801FEE08
    b lbl_fn_8046AE7C_00001BFC
lbl_fn_8046AE7C_00001AFC:
    lwz r0, 0x8c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8046AE7C_00001B10
    addi r23, r1, 0x8e
    b lbl_fn_8046AE7C_00001B14
lbl_fn_8046AE7C_00001B10:
    lwz r23, 0x94(r1)
lbl_fn_8046AE7C_00001B14:
    lwz r4, 0x54(r24)
    lis r3, lbl_80755394@ha
    addi r3, r3, lbl_80755394@l
    addi r3, r3, 0x1fd
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r23
    bl fn_801FEE08
    lwz r0, 0x8c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8046AE7C_00001B50
    addi r23, r1, 0x8e
    b lbl_fn_8046AE7C_00001B54
lbl_fn_8046AE7C_00001B50:
    lwz r23, 0x94(r1)
lbl_fn_8046AE7C_00001B54:
    lwz r4, 0x58(r24)
    lis r3, lbl_80755394@ha
    addi r3, r3, lbl_80755394@l
    addi r3, r3, 0x1fd
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r23
    bl fn_801FEE08
    lwz r0, 0x8c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8046AE7C_00001B90
    addi r23, r1, 0x8e
    b lbl_fn_8046AE7C_00001B94
lbl_fn_8046AE7C_00001B90:
    lwz r23, 0x94(r1)
lbl_fn_8046AE7C_00001B94:
    lwz r4, 0x60(r24)
    lis r3, lbl_80755394@ha
    addi r3, r3, lbl_80755394@l
    addi r3, r3, 0x1fd
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r23
    bl fn_801FEE08
    lwz r0, 0x8c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8046AE7C_00001BD0
    addi r23, r1, 0x8e
    b lbl_fn_8046AE7C_00001BD4
lbl_fn_8046AE7C_00001BD0:
    lwz r23, 0x94(r1)
lbl_fn_8046AE7C_00001BD4:
    lwz r4, 0x64(r24)
    lis r3, lbl_80755394@ha
    addi r3, r3, lbl_80755394@l
    addi r3, r3, 0x1fd
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r23
    bl fn_801FEE08
lbl_fn_8046AE7C_00001BFC:
    lwz r4, 0x54(r24)
    lis r25, lbl_80755394@ha
    addi r25, r25, lbl_80755394@l
    lfs f31, lbl_8087E030
    addi r3, r25, 0x202
    addi r23, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r23
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0x54(r24)
    addi r3, r25, 0x202
    lfs f31, lbl_8087E034
    addi r23, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r23
    li r5, 0x3
    bl fn_801FED24
    lwz r4, 0x58(r24)
    addi r3, r25, 0x202
    lfs f31, lbl_8087E030
    addi r23, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r23
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0x58(r24)
    addi r3, r25, 0x202
    lfs f31, lbl_8087E034
    addi r23, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r23
    li r5, 0x3
    bl fn_801FED24
    lwz r4, 0x60(r24)
    addi r3, r25, 0x202
    lfs f31, lbl_8087E030
    addi r23, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r23
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0x60(r24)
    addi r3, r25, 0x202
    lfs f31, lbl_8087E034
    addi r23, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r23
    li r5, 0x3
    bl fn_801FED24
    lwz r4, 0x64(r24)
    addi r3, r25, 0x202
    lfs f31, lbl_8087E030
    addi r23, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r23
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0x64(r24)
    addi r3, r25, 0x202
    lfs f31, lbl_8087E034
    addi r23, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r23
    li r5, 0x3
    bl fn_801FED24
    lwz r3, 0x54(r24)
    addi r4, r25, 0x20a
    lfs f1, lbl_8087E040
    bl fn_801F4DDC
    lwz r3, 0x58(r24)
    addi r4, r25, 0x20a
    lfs f1, lbl_8087E040
    bl fn_801F4DDC
    lwz r3, 0x60(r24)
    addi r4, r25, 0x20a
    lfs f1, lbl_8087E040
    bl fn_801F4DDC
    lwz r3, 0x64(r24)
    addi r4, r25, 0x20a
    lfs f1, lbl_8087E040
    bl fn_801F4DDC
    lwz r0, 0xa4(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8046AE7C_00001D98
    lwz r3, 0xac(r1)
    bl dtor_80084684
lbl_fn_8046AE7C_00001D98:
    lwz r0, 0x98(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8046AE7C_00001DAC
    lwz r3, 0xa0(r1)
    bl dtor_80084684
lbl_fn_8046AE7C_00001DAC:
    lwz r0, 0x8c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8046AE7C_00001DC0
    lwz r3, 0x94(r1)
    bl dtor_80084684
lbl_fn_8046AE7C_00001DC0:
    lwz r0, 0x30(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8046AE7C_00001DD4
    lwz r3, 0x38(r1)
    bl dtor_80084684
lbl_fn_8046AE7C_00001DD4:
    addi r11, r1, 0xe0
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    bl _restgpr_23
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}
