#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_14(void);
extern void _restgpr_25(void);
extern void _savegpr_14(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_8007708C(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_8008937C(void);
extern void fn_800C41D0(void);
extern void fn_800C4A90(void);
extern void fn_800C4E38(void);
extern void fn_800C4ECC(void);
extern void fn_800C4F70(void);
extern void fn_800C6E60(void);
extern void fn_800C6ED8(void);
extern void fn_800C6F28(void);
extern void fn_800C6FB4(void);
extern void fn_800C7040(void);
extern void fn_800C70CC(void);
extern void fn_800C7158(void);
extern void fn_800C71D0(void);
extern void fn_800C7248(void);
extern void fn_800C72C0(void);
extern void fn_800C7338(void);
extern void fn_800C776C(void);
extern void fn_800C77D8(void);
extern void fn_800C79DC(void);
extern void fn_800C7A30(void);
extern void fn_800C7B78(void);
extern void fn_800C7CA8(void);
extern void fn_800DC6B4(void);
extern void fn_800DF154(void);
extern void fn_80473E74(void);
extern void fn_80473FCC(void);
extern void fn_80475DF8(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80733880[];
extern u8 lbl_80733FD8[];
extern u8 lbl_80766768[];
extern u8 lbl_80775A88[];
extern u8 lbl_80779348[];
extern u8 lbl_80779368[];
extern u8 lbl_80779498[];
extern u8 lbl_807794A8[];
extern u8 lbl_807794D8[];
extern u8 lbl_8078FE00[];
extern u8 lbl_807C75A0[];

/* Small data declarations */
extern u32 lbl_8087EEF0;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFE0;
extern u32 lbl_8087F018;
extern u32 lbl_80881150;
extern u32 lbl_80881158;

/* Function declarations */
void fn_800C507C(void);
void fn_800C5644(void);
void fn_800C5F5C(void);
void fn_800C5FF0(void);
void fn_800C607C(void);
void fn_800C6128(void);
void fn_800C6190(void);
void fn_800C61C0(void);
void fn_800C622C(void);
void fn_800C62B4(void);
void fn_800C63D8(void);
void fn_800C65F0(void);

asm void fn_800C507C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    lwz r0, 0x4(r3)
    mr r27, r3
    lwz r30, 0x8(r3)
    mr r29, r4
    mr r28, r5
    cmplw r0, r30
    blt lbl_fn_800C507C_00000090
    lis r3, 0x2000
    subi r0, r3, 0x1
    subf r0, r30, r0
    cmplwi r0, 0x1
    bge lbl_fn_800C507C_00000068
    lis r4, lbl_80733880@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80733880@l
    addi r3, r3, __files@l
    addi r4, r4, 0x30
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800C507C_00000068:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r30, r0
    bge lbl_fn_800C507C_0000007C
    b lbl_fn_800C507C_000001A8
lbl_fn_800C507C_0000007C:
    lis r3, 0x1555
    addi r0, r3, 0x5554
    cmplw r30, r0
    bge lbl_fn_800C507C_000001A8
    b lbl_fn_800C507C_000001A8
lbl_fn_800C507C_00000090:
    cmplw r4, r5
    lwz r6, 0x0(r3)
    slwi r0, r0, 3
    add r7, r6, r0
    bgt lbl_fn_800C507C_000000B0
    cmplw r5, r7
    bge lbl_fn_800C507C_000000B0
    addi r28, r5, 0x8
lbl_fn_800C507C_000000B0:
    lwz r6, 0x4(r3)
    addi r5, r7, 0x7
    cmplw r7, r4
    addi r0, r6, 0x1
    subf r5, r4, r5
    stw r0, 0x4(r3)
    addi r3, r7, 0x8
    srwi r5, r5, 3
    ble lbl_fn_800C507C_00000194
    srwi. r0, r5, 3
    mtctr r0
    beq lbl_fn_800C507C_00000174
lbl_fn_800C507C_000000E0:
    lwz r0, -0x8(r7)
    stw r0, -0x8(r3)
    lfs f0, -0x4(r7)
    stfs f0, -0x4(r3)
    lwz r0, -0x10(r7)
    stw r0, -0x10(r3)
    lfs f0, -0xc(r7)
    stfs f0, -0xc(r3)
    lwz r0, -0x18(r7)
    stw r0, -0x18(r3)
    lfs f0, -0x14(r7)
    stfs f0, -0x14(r3)
    lwz r0, -0x20(r7)
    stw r0, -0x20(r3)
    lfs f0, -0x1c(r7)
    stfs f0, -0x1c(r3)
    lwz r0, -0x28(r7)
    stw r0, -0x28(r3)
    lfs f0, -0x24(r7)
    stfs f0, -0x24(r3)
    lwz r0, -0x30(r7)
    stw r0, -0x30(r3)
    lfs f0, -0x2c(r7)
    stfs f0, -0x2c(r3)
    lwz r0, -0x38(r7)
    stw r0, -0x38(r3)
    lfs f0, -0x34(r7)
    stfs f0, -0x34(r3)
    lwz r0, -0x40(r7)
    stw r0, -0x40(r3)
    lfs f0, -0x3c(r7)
    subi r7, r7, 0x40
    stfs f0, -0x3c(r3)
    subi r3, r3, 0x40
    bdnz lbl_fn_800C507C_000000E0
    andi. r5, r5, 0x7
    beq lbl_fn_800C507C_00000194
lbl_fn_800C507C_00000174:
    mtctr r5
lbl_fn_800C507C_00000178:
    lwz r0, -0x8(r7)
    stw r0, -0x8(r3)
    lfs f0, -0x4(r7)
    subi r7, r7, 0x8
    stfs f0, -0x4(r3)
    subi r3, r3, 0x8
    bdnz lbl_fn_800C507C_00000178
lbl_fn_800C507C_00000194:
    lwz r0, 0x0(r28)
    stw r0, 0x0(r4)
    lfs f0, 0x4(r28)
    stfs f0, 0x4(r4)
    b lbl_fn_800C507C_000005AC
lbl_fn_800C507C_000001A8:
    lwz r30, 0x0(r27)
    li r0, 0x1
    lis r3, 0x2000
    stw r0, 0x10(r1)
    subf r0, r30, r29
    srawi r4, r0, 3
    lwz r31, 0x8(r27)
    subi r0, r3, 0x1
    addze r29, r4
    subf r0, r31, r0
    cmplwi r0, 0x1
    bge lbl_fn_800C507C_000001FC
    lis r4, lbl_80733880@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80733880@l
    addi r3, r3, __files@l
    addi r4, r4, 0x30
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800C507C_000001FC:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_800C507C_00000248
    addi r5, r31, 0x1
    lis r4, 0xcccd
    slwi r0, r5, 2
    addi r3, r1, 0x8
    subf r0, r5, r0
    subi r4, r4, 0x3333
    mulhwu r0, r4, r0
    srwi r0, r0, 2
    stw r0, 0x8(r1)
    cmplwi r0, 0x1
    bge lbl_fn_800C507C_0000023C
    addi r3, r1, 0x10
lbl_fn_800C507C_0000023C:
    lwz r0, 0x0(r3)
    add r26, r31, r0
    b lbl_fn_800C507C_00000288
lbl_fn_800C507C_00000248:
    lis r3, 0x1555
    addi r0, r3, 0x5554
    cmplw r31, r0
    bge lbl_fn_800C507C_00000280
    addi r0, r31, 0x1
    addi r3, r1, 0xc
    srwi r0, r0, 1
    stw r0, 0xc(r1)
    cmplwi r0, 0x1
    bge lbl_fn_800C507C_00000274
    addi r3, r1, 0x10
lbl_fn_800C507C_00000274:
    lwz r0, 0x0(r3)
    add r26, r31, r0
    b lbl_fn_800C507C_00000288
lbl_fn_800C507C_00000280:
    lis r3, 0x2000
    subi r26, r3, 0x1
lbl_fn_800C507C_00000288:
    lis r3, 0x2000
    subi r0, r3, 0x1
    cmplw r26, r0
    ble lbl_fn_800C507C_000002BC
    lis r4, lbl_80733880@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80733880@l
    addi r3, r3, __files@l
    addi r4, r4, 0x30
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800C507C_000002BC:
    slwi r3, r26, 3
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_800C507C_000002F0
    lis r3, __files@ha
    lis r4, lbl_80779348@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779348@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800C507C_000002F0:
    stw r25, 0x0(r27)
    slwi r31, r29, 3
    add r3, r25, r31
    cmpwi r30, 0x0
    stw r26, 0x8(r27)
    lwz r0, 0x0(r28)
    stwx r0, r25, r31
    lfs f0, 0x4(r28)
    stfs f0, 0x4(r3)
    beq lbl_fn_800C507C_00000598
    add r3, r30, r31
    lwz r5, 0x0(r27)
    cmplw cr1, r30, r3
    mr r4, r30
    bge cr1, lbl_fn_800C507C_00000450
    addi r9, r31, 0x7
    subi r6, r3, 0x40
    srawi r0, r9, 3
    addze r0, r0
    cmpwi r0, 0x8
    ble lbl_fn_800C507C_0000041C
    li r7, 0x0
    bgt cr1, lbl_fn_800C507C_00000370
    clrrwi. r0, r31, 31
    li r8, 0x1
    bne lbl_fn_800C507C_00000364
    clrrwi. r0, r9, 31
    beq lbl_fn_800C507C_00000364
    li r8, 0x0
lbl_fn_800C507C_00000364:
    cmpwi r8, 0x0
    beq lbl_fn_800C507C_00000370
    li r7, 0x1
lbl_fn_800C507C_00000370:
    cmpwi r7, 0x0
    beq lbl_fn_800C507C_0000041C
    addi r0, r6, 0x3f
    subf r0, r30, r0
    srwi r0, r0, 6
    mtctr r0
    cmplw r30, r6
    bge lbl_fn_800C507C_0000041C
lbl_fn_800C507C_00000390:
    lwz r0, 0x0(r4)
    stw r0, 0x0(r5)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r5)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r5)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r5)
    lwz r0, 0x10(r4)
    stw r0, 0x10(r5)
    lfs f0, 0x14(r4)
    stfs f0, 0x14(r5)
    lwz r0, 0x18(r4)
    stw r0, 0x18(r5)
    lfs f0, 0x1c(r4)
    stfs f0, 0x1c(r5)
    lwz r0, 0x20(r4)
    stw r0, 0x20(r5)
    lfs f0, 0x24(r4)
    stfs f0, 0x24(r5)
    lwz r0, 0x28(r4)
    stw r0, 0x28(r5)
    lfs f0, 0x2c(r4)
    stfs f0, 0x2c(r5)
    lwz r0, 0x30(r4)
    stw r0, 0x30(r5)
    lfs f0, 0x34(r4)
    stfs f0, 0x34(r5)
    lwz r0, 0x38(r4)
    stw r0, 0x38(r5)
    lfs f0, 0x3c(r4)
    addi r4, r4, 0x40
    stfs f0, 0x3c(r5)
    addi r5, r5, 0x40
    bdnz lbl_fn_800C507C_00000390
lbl_fn_800C507C_0000041C:
    addi r0, r3, 0x7
    subf r0, r4, r0
    srwi r0, r0, 3
    mtctr r0
    cmplw r4, r3
    bge lbl_fn_800C507C_00000450
lbl_fn_800C507C_00000434:
    lwz r0, 0x0(r4)
    stw r0, 0x0(r5)
    lfs f0, 0x4(r4)
    addi r4, r4, 0x8
    stfs f0, 0x4(r5)
    addi r5, r5, 0x8
    bdnz lbl_fn_800C507C_00000434
lbl_fn_800C507C_00000450:
    lwz r0, 0x4(r27)
    addi r4, r5, 0x8
    slwi r0, r0, 3
    add r5, r30, r0
    cmplw cr1, r3, r5
    bge cr1, lbl_fn_800C507C_00000590
    subf r8, r3, r5
    subi r6, r5, 0x40
    addi r9, r8, 0x7
    srawi r0, r9, 3
    addze r0, r0
    cmpwi r0, 0x8
    ble lbl_fn_800C507C_0000055C
    li r7, 0x0
    bgt cr1, lbl_fn_800C507C_000004B0
    clrrwi. r0, r8, 31
    li r8, 0x1
    bne lbl_fn_800C507C_000004A4
    clrrwi. r0, r9, 31
    beq lbl_fn_800C507C_000004A4
    li r8, 0x0
lbl_fn_800C507C_000004A4:
    cmpwi r8, 0x0
    beq lbl_fn_800C507C_000004B0
    li r7, 0x1
lbl_fn_800C507C_000004B0:
    cmpwi r7, 0x0
    beq lbl_fn_800C507C_0000055C
    addi r0, r6, 0x3f
    subf r0, r3, r0
    srwi r0, r0, 6
    mtctr r0
    cmplw r3, r6
    bge lbl_fn_800C507C_0000055C
lbl_fn_800C507C_000004D0:
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    lfs f0, 0x4(r3)
    stfs f0, 0x4(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lfs f0, 0xc(r3)
    stfs f0, 0xc(r4)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r4)
    lfs f0, 0x14(r3)
    stfs f0, 0x14(r4)
    lwz r0, 0x18(r3)
    stw r0, 0x18(r4)
    lfs f0, 0x1c(r3)
    stfs f0, 0x1c(r4)
    lwz r0, 0x20(r3)
    stw r0, 0x20(r4)
    lfs f0, 0x24(r3)
    stfs f0, 0x24(r4)
    lwz r0, 0x28(r3)
    stw r0, 0x28(r4)
    lfs f0, 0x2c(r3)
    stfs f0, 0x2c(r4)
    lwz r0, 0x30(r3)
    stw r0, 0x30(r4)
    lfs f0, 0x34(r3)
    stfs f0, 0x34(r4)
    lwz r0, 0x38(r3)
    stw r0, 0x38(r4)
    lfs f0, 0x3c(r3)
    addi r3, r3, 0x40
    stfs f0, 0x3c(r4)
    addi r4, r4, 0x40
    bdnz lbl_fn_800C507C_000004D0
lbl_fn_800C507C_0000055C:
    addi r0, r5, 0x7
    subf r0, r3, r0
    srwi r0, r0, 3
    mtctr r0
    cmplw r3, r5
    bge lbl_fn_800C507C_00000590
lbl_fn_800C507C_00000574:
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    lfs f0, 0x4(r3)
    addi r3, r3, 0x8
    stfs f0, 0x4(r4)
    addi r4, r4, 0x8
    bdnz lbl_fn_800C507C_00000574
lbl_fn_800C507C_00000590:
    mr r3, r30
    bl dtor_80084684
lbl_fn_800C507C_00000598:
    lwz r3, 0x4(r27)
    lwz r0, 0x0(r27)
    addi r3, r3, 0x1
    stw r3, 0x4(r27)
    add r29, r0, r31
lbl_fn_800C507C_000005AC:
    addi r11, r1, 0x40
    mr r3, r29
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800C5644(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_14
    lis r23, lbl_80733FD8@ha
    li r3, 0x24
    addi r5, r23, lbl_80733FD8@l
    li r4, 0x6
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r22, r3
    beq lbl_fn_800C5644_00000EC4
    li r24, 0x0
    stw r24, 0x0(r3)
    lis r4, __files@ha
    lis r31, lbl_80779368@ha
    stw r24, 0x4(r3)
    lis r14, lbl_8078FE00@ha
    addi r4, r4, __files@l
    addi r31, r31, lbl_80779368@l
    stw r24, 0x8(r3)
    addi r19, r1, 0x2c
    addi r14, r14, lbl_8078FE00@l
    li r16, 0x0
    stw r24, 0xc(r3)
    lis r28, 0xcccd
    lis r26, 0x4000
    lis r27, 0x1555
    stw r24, 0x10(r3)
    lis r29, 0x2aab
    stw r24, 0x14(r3)
    stw r24, 0x18(r3)
    stw r24, 0x1c(r3)
    stw r4, 0x68(r1)
    stw r24, 0x20(r3)
lbl_fn_800C5644_00000660:
    addi r5, r23, lbl_80733FD8@l
    lwz r15, 0x0(r31)
    mr r6, r5
    li r3, 0x8
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r20, r3
    beq lbl_fn_800C5644_00000690
    bl fn_80473E74
    stw r14, 0x0(r20)
lbl_fn_800C5644_00000690:
    mr r3, r20
    mr r4, r15
    bl fn_80473FCC
    lwz r4, 0x10(r22)
    lwz r3, 0x14(r22)
    cmplw r4, r3
    bge lbl_fn_800C5644_000006C8
    addi r0, r4, 0x1
    stw r0, 0x10(r22)
    slwi r0, r0, 2
    lwz r3, 0xc(r22)
    add r3, r3, r0
    stw r20, -0x4(r3)
    b lbl_fn_800C5644_00000908
lbl_fn_800C5644_000006C8:
    subi r0, r26, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_800C5644_000006F4
    addi r3, r23, lbl_80733FD8@l
    addi r4, r3, 0x1
    lwz r3, 0x68(r1)
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800C5644_000006F4:
    addi r3, r22, 0x14
    stw r24, 0x40(r1)
    subi r0, r26, 0x1
    stw r24, 0x44(r1)
    stw r24, 0x48(r1)
    stw r3, 0x4c(r1)
    stw r24, 0x50(r1)
    lwz r3, 0x10(r22)
    lwz r4, 0x14(r22)
    addi r3, r3, 0x1
    subf r3, r4, r3
    stw r3, 0x14(r1)
    lwz r15, 0x14(r22)
    subf r0, r15, r0
    cmplw r3, r0
    ble lbl_fn_800C5644_00000750
    addi r3, r23, lbl_80733FD8@l
    addi r4, r3, 0x1
    lwz r3, 0x68(r1)
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800C5644_00000750:
    addi r0, r27, 0x5555
    cmplw r15, r0
    bge lbl_fn_800C5644_00000798
    addi r4, r15, 0x1
    subi r5, r28, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x14(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x1c
    srwi r4, r4, 2
    stw r4, 0x1c(r1)
    cmplw r4, r0
    bge lbl_fn_800C5644_0000078C
    addi r3, r1, 0x14
lbl_fn_800C5644_0000078C:
    lwz r0, 0x0(r3)
    add r17, r15, r0
    b lbl_fn_800C5644_000007D4
lbl_fn_800C5644_00000798:
    subi r0, r29, 0x5556
    cmplw r15, r0
    bge lbl_fn_800C5644_000007D0
    addi r3, r15, 0x1
    lwz r0, 0x14(r1)
    srwi r3, r3, 1
    stw r3, 0x18(r1)
    cmplw r3, r0
    addi r3, r1, 0x18
    bge lbl_fn_800C5644_000007C4
    addi r3, r1, 0x14
lbl_fn_800C5644_000007C4:
    lwz r0, 0x0(r3)
    add r17, r15, r0
    b lbl_fn_800C5644_000007D4
lbl_fn_800C5644_000007D0:
    subi r17, r26, 0x1
lbl_fn_800C5644_000007D4:
    subi r0, r26, 0x1
    cmplw r17, r0
    ble lbl_fn_800C5644_000007FC
    addi r3, r23, lbl_80733FD8@l
    addi r4, r3, 0x1
    lwz r3, 0x68(r1)
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800C5644_000007FC:
    slwi r3, r17, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r15, r3
    bne lbl_fn_800C5644_0000082C
    lwz r3, 0x68(r1)
    lis r4, lbl_80775A88@ha
    addi r4, r4, lbl_80775A88@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800C5644_0000082C:
    lwz r0, 0x44(r1)
    stw r15, 0x40(r1)
    slwi r3, r0, 2
    stw r17, 0x48(r1)
    lwz r0, 0x10(r22)
    stw r0, 0x50(r1)
    slwi r0, r0, 2
    add r0, r15, r0
    stwx r20, r3, r0
    lwz r3, 0x44(r1)
    lwz r0, 0x50(r1)
    addi r3, r3, 0x1
    stw r3, 0x44(r1)
    lwz r3, 0x40(r1)
    lwz r4, 0x10(r22)
    lwz r17, 0xc(r22)
    slwi r4, r4, 2
    add r5, r17, r4
    subf r5, r17, r5
    mr r4, r17
    srawi r5, r5, 2
    addze r15, r5
    subf r0, r15, r0
    stw r0, 0x50(r1)
    slwi r18, r15, 2
    slwi r0, r0, 2
    mr r5, r18
    add r3, r3, r0
    bl memcpy
    mr r3, r17
    mr r5, r18
    li r4, 0x0
    bl memset
    lwz r3, 0x44(r1)
    addic. r0, r1, 0x40
    add r0, r3, r15
    stw r0, 0x44(r1)
    stw r24, 0x10(r22)
    lwz r3, 0x14(r22)
    lwz r0, 0x48(r1)
    stw r0, 0x14(r22)
    stw r3, 0x48(r1)
    lwz r0, 0x40(r1)
    lwz r3, 0xc(r22)
    stw r0, 0xc(r22)
    stw r3, 0x40(r1)
    lwz r0, 0x44(r1)
    stw r0, 0x10(r22)
    stw r24, 0x44(r1)
    beq lbl_fn_800C5644_00000908
    lwz r3, 0x40(r1)
    cmpwi r3, 0x0
    beq lbl_fn_800C5644_00000908
    stw r24, 0x44(r1)
    bl dtor_80084684
lbl_fn_800C5644_00000908:
    mr r3, r20
    bl fn_80475DF8
    mr r25, r3
    li r21, 0x0
    li r30, 0x0
    b lbl_fn_800C5644_00000BD0
lbl_fn_800C5644_00000920:
    lwz r4, 0x34(r25)
    addi r5, r23, lbl_80733FD8@l
    mr r6, r5
    li r3, 0x14
    lwzx r17, r4, r30
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r15, r3
    beq lbl_fn_800C5644_0000095C
    mr r4, r20
    mr r5, r17
    bl fn_800C41D0
    mr r15, r3
lbl_fn_800C5644_0000095C:
    lwz r4, 0x4(r22)
    lwz r3, 0x8(r22)
    cmplw r4, r3
    bge lbl_fn_800C5644_00000988
    addi r0, r4, 0x1
    stw r0, 0x4(r22)
    slwi r0, r0, 2
    lwz r3, 0x0(r22)
    add r3, r3, r0
    stw r15, -0x4(r3)
    b lbl_fn_800C5644_00000BC8
lbl_fn_800C5644_00000988:
    subi r0, r26, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_800C5644_000009B4
    addi r3, r23, lbl_80733FD8@l
    addi r4, r3, 0x1
    lwz r3, 0x68(r1)
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800C5644_000009B4:
    addi r3, r22, 0x8
    stw r24, 0x2c(r1)
    subi r0, r26, 0x1
    stw r24, 0x30(r1)
    stw r24, 0x34(r1)
    stw r3, 0x38(r1)
    stw r24, 0x3c(r1)
    lwz r3, 0x4(r22)
    lwz r4, 0x8(r22)
    addi r3, r3, 0x1
    subf r3, r4, r3
    stw r3, 0x8(r1)
    lwz r17, 0x8(r22)
    subf r0, r17, r0
    cmplw r3, r0
    ble lbl_fn_800C5644_00000A10
    addi r3, r23, lbl_80733FD8@l
    addi r4, r3, 0x1
    lwz r3, 0x68(r1)
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800C5644_00000A10:
    addi r0, r27, 0x5555
    cmplw r17, r0
    bge lbl_fn_800C5644_00000A58
    addi r4, r17, 0x1
    subi r5, r28, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x8(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_800C5644_00000A4C
    addi r3, r1, 0x8
lbl_fn_800C5644_00000A4C:
    lwz r0, 0x0(r3)
    add r17, r17, r0
    b lbl_fn_800C5644_00000A94
lbl_fn_800C5644_00000A58:
    subi r0, r29, 0x5556
    cmplw r17, r0
    bge lbl_fn_800C5644_00000A90
    addi r3, r17, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_800C5644_00000A84
    addi r3, r1, 0x8
lbl_fn_800C5644_00000A84:
    lwz r0, 0x0(r3)
    add r17, r17, r0
    b lbl_fn_800C5644_00000A94
lbl_fn_800C5644_00000A90:
    subi r17, r26, 0x1
lbl_fn_800C5644_00000A94:
    subi r0, r26, 0x1
    cmplw r17, r0
    ble lbl_fn_800C5644_00000ABC
    addi r3, r23, lbl_80733FD8@l
    addi r4, r3, 0x1
    lwz r3, 0x68(r1)
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800C5644_00000ABC:
    slwi r3, r17, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r18, r3
    bne lbl_fn_800C5644_00000AEC
    lwz r3, 0x68(r1)
    lis r4, lbl_80775A88@ha
    addi r4, r4, lbl_80775A88@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800C5644_00000AEC:
    lwz r0, 0x30(r1)
    stw r18, 0x2c(r1)
    slwi r3, r0, 2
    stw r17, 0x34(r1)
    lwz r0, 0x4(r22)
    stw r0, 0x3c(r1)
    slwi r0, r0, 2
    add r0, r18, r0
    stwx r15, r3, r0
    lwz r3, 0x30(r1)
    lwz r0, 0x3c(r1)
    addi r3, r3, 0x1
    stw r3, 0x30(r1)
    lwz r3, 0x2c(r1)
    lwz r4, 0x4(r22)
    lwz r15, 0x0(r22)
    slwi r4, r4, 2
    add r5, r15, r4
    subf r5, r15, r5
    mr r4, r15
    srawi r5, r5, 2
    addze r18, r5
    subf r0, r18, r0
    stw r0, 0x3c(r1)
    slwi r17, r18, 2
    slwi r0, r0, 2
    mr r5, r17
    add r3, r3, r0
    bl memcpy
    mr r3, r15
    mr r5, r17
    li r4, 0x0
    bl memset
    lwz r0, 0x30(r1)
    cmpwi r19, 0x0
    add r0, r0, r18
    stw r0, 0x30(r1)
    stw r24, 0x4(r22)
    lwz r3, 0x8(r22)
    lwz r0, 0x34(r1)
    stw r0, 0x8(r22)
    stw r3, 0x34(r1)
    lwz r0, 0x2c(r1)
    lwz r3, 0x0(r22)
    stw r0, 0x0(r22)
    stw r3, 0x2c(r1)
    lwz r0, 0x30(r1)
    stw r0, 0x4(r22)
    stw r24, 0x30(r1)
    beq lbl_fn_800C5644_00000BC8
    lwz r3, 0x2c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_800C5644_00000BC8
    stw r24, 0x30(r1)
    bl dtor_80084684
lbl_fn_800C5644_00000BC8:
    addi r30, r30, 0x4
    addi r21, r21, 0x1
lbl_fn_800C5644_00000BD0:
    lwz r0, 0x30(r25)
    cmpw r21, r0
    blt lbl_fn_800C5644_00000920
    addi r16, r16, 0x1
    addi r31, r31, 0x4
    cmplwi r16, 0x4c
    blt lbl_fn_800C5644_00000660
    lwz r3, lbl_8087EFA8
    lis r21, lbl_80733FD8@ha
    addi r20, r21, lbl_80733FD8@l
    lwz r3, 0x4c(r3)
    addi r4, r20, 0x15
    bl fn_8008937C
    lis r18, __files@ha
    lwz r30, 0x0(r22)
    mr r23, r3
    addi r24, r1, 0x54
    addi r18, r18, __files@l
    lis r15, 0xcccd
    lis r19, 0x4000
    li r17, 0x0
    lis r16, 0x1555
    lis r14, 0x2aab
    lis r31, lbl_80775A88@ha
    b lbl_fn_800C5644_00000EAC
lbl_fn_800C5644_00000C34:
    addi r5, r21, lbl_80733FD8@l
    li r3, 0x10
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_800C5644_00000C60
    bl fn_800C4E38
    mr r27, r3
lbl_fn_800C5644_00000C60:
    lwz r4, 0x0(r30)
    mr r3, r27
    lfs f1, lbl_80881150
    bl fn_800C4ECC
    lwz r4, 0x1c(r22)
    lwz r3, 0x20(r22)
    cmplw r4, r3
    bge lbl_fn_800C5644_00000C9C
    addi r0, r4, 0x1
    stw r0, 0x1c(r22)
    slwi r0, r0, 2
    lwz r3, 0x18(r22)
    add r3, r3, r0
    stw r27, -0x4(r3)
    b lbl_fn_800C5644_00000E9C
lbl_fn_800C5644_00000C9C:
    subi r0, r19, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_800C5644_00000CC0
    addi r4, r20, 0x1
    addi r3, r18, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800C5644_00000CC0:
    lwz r3, 0x1c(r22)
    addi r5, r22, 0x20
    lwz r4, 0x20(r22)
    subi r0, r19, 0x1
    addi r3, r3, 0x1
    stw r17, 0x54(r1)
    subf r3, r4, r3
    stw r3, 0x20(r1)
    lwz r25, 0x20(r22)
    stw r17, 0x58(r1)
    subf r0, r25, r0
    cmplw r3, r0
    stw r17, 0x5c(r1)
    stw r5, 0x60(r1)
    stw r17, 0x64(r1)
    ble lbl_fn_800C5644_00000D14
    addi r4, r20, 0x1
    addi r3, r18, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800C5644_00000D14:
    addi r0, r16, 0x5555
    cmplw r25, r0
    bge lbl_fn_800C5644_00000D5C
    addi r4, r25, 0x1
    subi r5, r15, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x20(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x28
    srwi r4, r4, 2
    stw r4, 0x28(r1)
    cmplw r4, r0
    bge lbl_fn_800C5644_00000D50
    addi r3, r1, 0x20
lbl_fn_800C5644_00000D50:
    lwz r0, 0x0(r3)
    add r25, r25, r0
    b lbl_fn_800C5644_00000D98
lbl_fn_800C5644_00000D5C:
    subi r0, r14, 0x5556
    cmplw r25, r0
    bge lbl_fn_800C5644_00000D94
    addi r3, r25, 0x1
    lwz r0, 0x20(r1)
    srwi r3, r3, 1
    stw r3, 0x24(r1)
    cmplw r3, r0
    addi r3, r1, 0x24
    bge lbl_fn_800C5644_00000D88
    addi r3, r1, 0x20
lbl_fn_800C5644_00000D88:
    lwz r0, 0x0(r3)
    add r25, r25, r0
    b lbl_fn_800C5644_00000D98
lbl_fn_800C5644_00000D94:
    subi r25, r19, 0x1
lbl_fn_800C5644_00000D98:
    subi r0, r19, 0x1
    cmplw r25, r0
    ble lbl_fn_800C5644_00000DB8
    addi r4, r20, 0x1
    addi r3, r18, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800C5644_00000DB8:
    slwi r3, r25, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_800C5644_00000DE0
    addi r3, r18, 0xa0
    addi r4, r31, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800C5644_00000DE0:
    lwz r0, 0x1c(r22)
    lwz r3, 0x58(r1)
    slwi r6, r0, 2
    stw r25, 0x5c(r1)
    addi r4, r3, 0x1
    slwi r5, r3, 2
    add r3, r26, r6
    stw r4, 0x58(r1)
    stwx r27, r5, r3
    lwz r3, 0x1c(r22)
    lwz r28, 0x18(r22)
    slwi r3, r3, 2
    add r3, r28, r3
    mr r4, r28
    subf r3, r28, r3
    srawi r3, r3, 2
    addze r25, r3
    subf r0, r25, r0
    stw r0, 0x64(r1)
    slwi r29, r25, 2
    slwi r0, r0, 2
    mr r5, r29
    add r3, r26, r0
    bl memcpy
    mr r3, r28
    mr r5, r29
    li r4, 0x0
    bl memset
    stw r17, 0x1c(r22)
    cmpwi r24, 0x0
    lwz r3, 0x58(r1)
    lwz r5, 0x20(r22)
    lwz r0, 0x5c(r1)
    add r4, r3, r25
    stw r0, 0x20(r22)
    mr r0, r26
    lwz r3, 0x18(r22)
    stw r5, 0x5c(r1)
    stw r0, 0x18(r22)
    stw r3, 0x54(r1)
    stw r4, 0x1c(r22)
    stw r17, 0x58(r1)
    beq lbl_fn_800C5644_00000E9C
    cmpwi r3, 0x0
    beq lbl_fn_800C5644_00000E9C
    stw r17, 0x58(r1)
    bl dtor_80084684
lbl_fn_800C5644_00000E9C:
    mr r3, r27
    mr r4, r23
    bl fn_800C4F70
    addi r30, r30, 0x4
lbl_fn_800C5644_00000EAC:
    lwz r0, 0x4(r22)
    lwz r3, 0x0(r22)
    slwi r0, r0, 2
    add r0, r3, r0
    cmplw r30, r0
    bne lbl_fn_800C5644_00000C34
lbl_fn_800C5644_00000EC4:
    stw r22, lbl_8087EFE0
    addi r11, r1, 0xc0
    bl _restgpr_14
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_800C5F5C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r4
    bl fn_800DC6B4
    lwz r30, 0x18(r29)
    mr r31, r3
    b lbl_fn_800C5F5C_00000F3C
lbl_fn_800C5F5C_00000F10:
    lwz r3, 0x0(r30)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    lwz r3, 0x10(r3)
    lwz r3, 0x10(r3)
    bl fn_800DC6B4
    cmplw r31, r3
    bne lbl_fn_800C5F5C_00000F38
    lwz r3, 0x0(r30)
    b lbl_fn_800C5F5C_00000F58
lbl_fn_800C5F5C_00000F38:
    addi r30, r30, 0x4
lbl_fn_800C5F5C_00000F3C:
    lwz r0, 0x1c(r29)
    lwz r3, 0x18(r29)
    slwi r0, r0, 2
    add r0, r3, r0
    cmplw r30, r0
    bne lbl_fn_800C5F5C_00000F10
    li r3, 0x0
lbl_fn_800C5F5C_00000F58:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800C5FF0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lwz r31, 0x18(r3)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    b lbl_fn_800C5FF0_00000FC8
lbl_fn_800C5FF0_00000F9C:
    lwz r3, 0x0(r31)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    lwz r3, 0x10(r3)
    lwz r3, 0x10(r3)
    bl fn_800DC6B4
    cmplw r30, r3
    bne lbl_fn_800C5FF0_00000FC4
    lwz r3, 0x0(r31)
    b lbl_fn_800C5FF0_00000FE4
lbl_fn_800C5FF0_00000FC4:
    addi r31, r31, 0x4
lbl_fn_800C5FF0_00000FC8:
    lwz r0, 0x1c(r29)
    lwz r3, 0x18(r29)
    slwi r0, r0, 2
    add r0, r3, r0
    cmplw r31, r0
    bne lbl_fn_800C5FF0_00000F9C
    li r3, 0x0
lbl_fn_800C5FF0_00000FE4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800C607C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    subfic r0, r4, -0x1
    stmw r27, 0xc(r1)
    lis r30, lbl_807C75A0@ha
    slwi r29, r0, 2
    mr r27, r3
    addi r30, r30, lbl_807C75A0@l
    lwzx r0, r30, r29
    cmpwi r0, 0x0
    bne lbl_fn_800C607C_00001094
    lis r3, lbl_80779498@ha
    addi r3, r3, lbl_80779498@l
    lwzx r3, r3, r29
    bl fn_800DC6B4
    lwz r28, 0x0(r27)
    mr r31, r3
    b lbl_fn_800C607C_00001070
lbl_fn_800C607C_0000104C:
    lwz r3, 0x0(r28)
    lwz r3, 0x10(r3)
    lwz r3, 0x10(r3)
    bl fn_800DC6B4
    cmplw r31, r3
    bne lbl_fn_800C607C_0000106C
    lwz r3, 0x0(r28)
    b lbl_fn_800C607C_0000108C
lbl_fn_800C607C_0000106C:
    addi r28, r28, 0x4
lbl_fn_800C607C_00001070:
    lwz r0, 0x4(r27)
    lwz r3, 0x0(r27)
    slwi r0, r0, 2
    add r0, r3, r0
    cmplw r28, r0
    bne lbl_fn_800C607C_0000104C
    li r3, 0x0
lbl_fn_800C607C_0000108C:
    bl fn_800C4A90
    stwx r3, r30, r29
lbl_fn_800C607C_00001094:
    lwzx r3, r30, r29
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800C6128(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r5, r3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r4, lbl_8087EEF0
    cmpwi r4, 0x0
    beq lbl_fn_800C6128_000010F8
    lwz r0, 0xd90(r4)
    li r31, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_800C6128_000010FC
    mr r3, r4
    addi r4, r4, 0x34
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_800C6128_000010FC
    li r31, 0x1
    b lbl_fn_800C6128_000010FC
lbl_fn_800C6128_000010F8:
    li r31, 0x0
lbl_fn_800C6128_000010FC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C6190(void)
{
    nofralloc
    lwz r4, lbl_8087F018
    cmpwi r4, 0x0
    beq lbl_fn_800C6190_00001134
    lwz r0, 0x40a8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800C6190_00001134
    li r5, 0x0
    b fn_800DF154
lbl_fn_800C6190_00001134:
    lfs f0, lbl_80881158
    stfs f0, 0x0(r3)
    stfs f0, 0x4(r3)
    blr
}

asm void fn_800C61C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_fn_800C61C0_00001174
    lis r6, lbl_80766768@ha
    lwzu r5, lbl_80766768@l(r6)
    stw r5, 0x8(r1)
    lwz r4, 0x4(r6)
    lwz r0, 0x8(r6)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    b lbl_fn_800C61C0_00001190
lbl_fn_800C61C0_00001174:
    lis r6, lbl_807794A8@ha
    lwzu r5, lbl_807794A8@l(r6)
    stw r5, 0x8(r1)
    lwz r4, 0x4(r6)
    lwz r0, 0x8(r6)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
lbl_fn_800C61C0_00001190:
    lwz r5, 0x8(r1)
    lwz r4, 0xc(r1)
    lwz r0, 0x10(r1)
    stw r5, 0x0(r3)
    stw r4, 0x4(r3)
    stw r0, 0x8(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_800C622C(void)
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
    beq lbl_fn_800C622C_0000121C
    beq lbl_fn_800C622C_0000120C
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_800C622C_0000120C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800C622C_00001204
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800C622C_00001204:
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_800C622C_0000120C:
    cmpwi r31, 0x0
    ble lbl_fn_800C622C_0000121C
    mr r3, r30
    bl dtor_80084684
lbl_fn_800C622C_0000121C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C62B4(void)
{
    nofralloc
    addi r7, r3, 0x820
    addi r4, r3, 0x2404
    lis r5, lbl_807794D8@ha
    li r0, 0x0
    addi r5, r5, lbl_807794D8@l
    cmplw r7, r4
    stw r5, 0x0(r3)
    sth r0, 0x4(r3)
    stw r0, 0x804(r3)
    bge lbl_fn_800C62B4_00001308
    addi r0, r3, 0x820
    addi r6, r3, 0x2324
    cmplw r0, r4
    li r4, 0x0
    li r0, 0x0
    bgt lbl_fn_800C62B4_0000127C
    li r4, 0x1
lbl_fn_800C62B4_0000127C:
    cmpwi r4, 0x0
    beq lbl_fn_800C62B4_00001288
    li r0, 0x1
lbl_fn_800C62B4_00001288:
    cmpwi r0, 0x0
    beq lbl_fn_800C62B4_000012D8
    addi r4, r6, 0xdf
    li r0, 0xe0
    subf r4, r7, r4
    li r5, 0x0
    divwu r4, r4, r0
    mtctr r4
    cmplw r7, r6
    bge lbl_fn_800C62B4_000012D8
lbl_fn_800C62B4_000012B0:
    stw r5, 0x0(r7)
    stw r5, 0x1c(r7)
    stw r5, 0x38(r7)
    stw r5, 0x54(r7)
    stw r5, 0x70(r7)
    stw r5, 0x8c(r7)
    stw r5, 0xa8(r7)
    stw r5, 0xc4(r7)
    addi r7, r7, 0xe0
    bdnz lbl_fn_800C62B4_000012B0
lbl_fn_800C62B4_000012D8:
    addi r5, r3, 0x2404
    li r0, 0x1c
    addi r4, r5, 0x1b
    li r6, 0x0
    subf r4, r7, r4
    divwu r4, r4, r0
    mtctr r4
    cmplw r7, r5
    bge lbl_fn_800C62B4_00001308
lbl_fn_800C62B4_000012FC:
    stw r6, 0x0(r7)
    addi r7, r7, 0x1c
    bdnz lbl_fn_800C62B4_000012FC
lbl_fn_800C62B4_00001308:
    li r5, 0x0
    li r6, 0x1
    li r4, -0x1
    li r0, 0x400
    stw r6, 0x2404(r3)
    stw r6, 0x2408(r3)
    stw r6, 0x240c(r3)
    stw r5, 0x2410(r3)
    stw r5, 0x2414(r3)
    stw r4, 0x2418(r3)
    stw r4, 0x241c(r3)
    stw r0, 0x2420(r3)
    stw r5, 0x2424(r3)
    stw r5, 0x2428(r3)
    stw r5, 0x243c(r3)
    stw r5, 0x2450(r3)
    stw r5, 0x2464(r3)
    stw r5, 0x2478(r3)
    stw r5, 0x248c(r3)
    stw r5, 0x24a0(r3)
    blr
}

asm void fn_800C63D8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    beq lbl_fn_800C63D8_00001554
    addic. r29, r3, 0x24a0
    beq lbl_fn_800C63D8_000013C4
    beq lbl_fn_800C63D8_000013C4
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800C63D8_000013C4
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_800C63D8_000013BC
    addi r3, r29, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800C63D8_000013BC:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_800C63D8_000013C4:
    addic. r29, r30, 0x248c
    beq lbl_fn_800C63D8_00001404
    beq lbl_fn_800C63D8_00001404
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800C63D8_00001404
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_800C63D8_000013FC
    addi r3, r29, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800C63D8_000013FC:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_800C63D8_00001404:
    addic. r29, r30, 0x2478
    beq lbl_fn_800C63D8_00001444
    beq lbl_fn_800C63D8_00001444
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800C63D8_00001444
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_800C63D8_0000143C
    addi r3, r29, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800C63D8_0000143C:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_800C63D8_00001444:
    addic. r29, r30, 0x2464
    beq lbl_fn_800C63D8_00001484
    beq lbl_fn_800C63D8_00001484
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800C63D8_00001484
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_800C63D8_0000147C
    addi r3, r29, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800C63D8_0000147C:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_800C63D8_00001484:
    addic. r29, r30, 0x2450
    beq lbl_fn_800C63D8_000014C4
    beq lbl_fn_800C63D8_000014C4
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800C63D8_000014C4
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_800C63D8_000014BC
    addi r3, r29, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800C63D8_000014BC:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_800C63D8_000014C4:
    addic. r29, r30, 0x243c
    beq lbl_fn_800C63D8_00001504
    beq lbl_fn_800C63D8_00001504
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800C63D8_00001504
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_800C63D8_000014FC
    addi r3, r29, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800C63D8_000014FC:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_800C63D8_00001504:
    addic. r29, r30, 0x2428
    beq lbl_fn_800C63D8_00001544
    beq lbl_fn_800C63D8_00001544
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800C63D8_00001544
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_800C63D8_0000153C
    addi r3, r29, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800C63D8_0000153C:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_800C63D8_00001544:
    cmpwi r31, 0x0
    ble lbl_fn_800C63D8_00001554
    mr r3, r30
    bl dtor_80084684
lbl_fn_800C63D8_00001554:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800C65F0(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stmw r26, 0x98(r1)
    mr r30, r3
    lwz r0, 0x2414(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800C65F0_00001C44
    bl fn_800C6F28
    cmpwi r3, 0x0
    beq lbl_fn_800C65F0_00001668
    lwz r29, 0x2418(r30)
    li r5, 0x7
    lwz r0, 0x241c(r30)
    mulli r31, r29, 0x380
    mulli r0, r0, 0x1c
    add r3, r30, r31
    add r3, r3, r0
    lhz r6, 0x808(r3)
lbl_fn_800C65F0_000015C0:
    lwz r3, 0x2418(r30)
    subic. r0, r3, 0x1
    stw r0, 0x2418(r30)
    bge lbl_fn_800C65F0_000015D4
    stw r5, 0x2418(r30)
lbl_fn_800C65F0_000015D4:
    lwz r3, 0x2418(r30)
    cmpw r3, r29
    beq lbl_fn_800C65F0_00001614
    lwz r0, 0x241c(r30)
    mulli r4, r3, 0x380
    mulli r3, r0, 0x1c
    add r0, r30, r4
    add r3, r3, r0
    lwz r0, 0x804(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800C65F0_000015C0
    lhz r0, 0x808(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800C65F0_000015C0
    cmplw r6, r0
    beq lbl_fn_800C65F0_000015C0
lbl_fn_800C65F0_00001614:
    addi r3, r1, 0x88
    addi r4, r30, 0x2428
    bl fn_800C776C
    addi r3, r1, 0x88
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_800C65F0_00001668
    lwz r7, 0x2418(r30)
    add r6, r30, r31
    lwz r5, 0x241c(r30)
    mr r4, r29
    mulli r0, r7, 0x380
    addi r3, r30, 0x2428
    mr r8, r5
    mulli r9, r5, 0x1c
    add r0, r30, r0
    add r6, r6, r9
    add r9, r0, r9
    addi r6, r6, 0x804
    addi r9, r9, 0x804
    bl fn_800C7A30
lbl_fn_800C65F0_00001668:
    mr r3, r30
    bl fn_800C6FB4
    cmpwi r3, 0x0
    beq lbl_fn_800C65F0_00001744
    lwz r29, 0x2418(r30)
    li r5, 0x0
    lwz r0, 0x241c(r30)
    mulli r31, r29, 0x380
    mulli r0, r0, 0x1c
    add r3, r30, r31
    add r3, r3, r0
    lhz r6, 0x808(r3)
lbl_fn_800C65F0_00001698:
    lwz r3, 0x2418(r30)
    addi r0, r3, 0x1
    stw r0, 0x2418(r30)
    cmpwi r0, 0x8
    blt lbl_fn_800C65F0_000016B0
    stw r5, 0x2418(r30)
lbl_fn_800C65F0_000016B0:
    lwz r3, 0x2418(r30)
    cmpw r3, r29
    beq lbl_fn_800C65F0_000016F0
    lwz r0, 0x241c(r30)
    mulli r4, r3, 0x380
    mulli r3, r0, 0x1c
    add r0, r30, r4
    add r3, r3, r0
    lwz r0, 0x804(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800C65F0_00001698
    lhz r0, 0x808(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800C65F0_00001698
    cmplw r6, r0
    beq lbl_fn_800C65F0_00001698
lbl_fn_800C65F0_000016F0:
    addi r3, r1, 0x7c
    addi r4, r30, 0x2428
    bl fn_800C776C
    addi r3, r1, 0x7c
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_800C65F0_00001744
    lwz r7, 0x2418(r30)
    add r6, r30, r31
    lwz r5, 0x241c(r30)
    mr r4, r29
    mulli r0, r7, 0x380
    addi r3, r30, 0x2428
    mr r8, r5
    mulli r9, r5, 0x1c
    add r0, r30, r0
    add r6, r6, r9
    add r9, r0, r9
    addi r6, r6, 0x804
    addi r9, r9, 0x804
    bl fn_800C7A30
lbl_fn_800C65F0_00001744:
    mr r3, r30
    bl fn_800C7040
    cmpwi r3, 0x0
    beq lbl_fn_800C65F0_00001814
    lwz r0, 0x2418(r30)
    li r4, 0x1f
    lwz r29, 0x241c(r30)
    mulli r0, r0, 0x380
    mulli r31, r29, 0x1c
    add r0, r30, r0
    add r3, r0, r31
    lhz r5, 0x808(r3)
lbl_fn_800C65F0_00001774:
    lwz r3, 0x241c(r30)
    subic. r0, r3, 0x1
    stw r0, 0x241c(r30)
    bge lbl_fn_800C65F0_00001788
    stw r4, 0x241c(r30)
lbl_fn_800C65F0_00001788:
    lwz r3, 0x241c(r30)
    cmpw r3, r29
    beq lbl_fn_800C65F0_000017C8
    lwz r0, 0x2418(r30)
    mulli r3, r3, 0x1c
    mulli r0, r0, 0x380
    add r0, r30, r0
    add r3, r3, r0
    lwz r0, 0x804(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800C65F0_00001774
    lhz r0, 0x808(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800C65F0_00001774
    cmplw r5, r0
    beq lbl_fn_800C65F0_00001774
lbl_fn_800C65F0_000017C8:
    addi r3, r1, 0x70
    addi r4, r30, 0x2428
    bl fn_800C776C
    addi r3, r1, 0x70
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_800C65F0_00001814
    lwz r4, 0x2418(r30)
    mr r5, r29
    lwz r8, 0x241c(r30)
    addi r3, r30, 0x2428
    mulli r0, r4, 0x380
    mr r7, r4
    add r6, r30, r0
    mulli r0, r8, 0x1c
    addi r9, r6, 0x804
    add r6, r9, r31
    add r9, r9, r0
    bl fn_800C7A30
lbl_fn_800C65F0_00001814:
    mr r3, r30
    bl fn_800C70CC
    cmpwi r3, 0x0
    beq lbl_fn_800C65F0_000018E8
    lwz r0, 0x2418(r30)
    li r4, 0x0
    lwz r29, 0x241c(r30)
    mulli r0, r0, 0x380
    mulli r31, r29, 0x1c
    add r0, r30, r0
    add r3, r0, r31
    lhz r5, 0x808(r3)
lbl_fn_800C65F0_00001844:
    lwz r3, 0x241c(r30)
    addi r0, r3, 0x1
    stw r0, 0x241c(r30)
    cmpwi r0, 0x20
    blt lbl_fn_800C65F0_0000185C
    stw r4, 0x241c(r30)
lbl_fn_800C65F0_0000185C:
    lwz r3, 0x241c(r30)
    cmpw r3, r29
    beq lbl_fn_800C65F0_0000189C
    lwz r0, 0x2418(r30)
    mulli r3, r3, 0x1c
    mulli r0, r0, 0x380
    add r0, r30, r0
    add r3, r3, r0
    lwz r0, 0x804(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800C65F0_00001844
    lhz r0, 0x808(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800C65F0_00001844
    cmplw r5, r0
    beq lbl_fn_800C65F0_00001844
lbl_fn_800C65F0_0000189C:
    addi r3, r1, 0x64
    addi r4, r30, 0x2428
    bl fn_800C776C
    addi r3, r1, 0x64
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_800C65F0_000018E8
    lwz r4, 0x2418(r30)
    mr r5, r29
    lwz r8, 0x241c(r30)
    addi r3, r30, 0x2428
    mulli r0, r4, 0x380
    mr r7, r4
    add r6, r30, r0
    mulli r0, r8, 0x1c
    addi r9, r6, 0x804
    add r6, r9, r31
    add r9, r9, r0
    bl fn_800C7A30
lbl_fn_800C65F0_000018E8:
    lwz r0, 0x240c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_800C65F0_000019AC
    addi r29, r30, 0x804
    li r28, 0x0
    li r27, 0x0
lbl_fn_800C65F0_00001900:
    mr r31, r29
    li r26, 0x0
lbl_fn_800C65F0_00001908:
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800C65F0_00001984
    lhz r3, 0x4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_800C65F0_00001984
    bl fn_800C6128
    cmpwi r3, 0x0
    beq lbl_fn_800C65F0_00001984
    addi r3, r1, 0x58
    addi r4, r30, 0x2428
    bl fn_800C776C
    addi r3, r1, 0x58
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_800C65F0_00001978
    lwz r4, 0x2418(r30)
    mr r7, r27
    lwz r5, 0x241c(r30)
    mr r8, r26
    mulli r6, r4, 0x380
    mr r9, r31
    addi r3, r30, 0x2428
    mulli r0, r5, 0x1c
    add r6, r30, r6
    add r6, r6, r0
    addi r6, r6, 0x804
    bl fn_800C7A30
lbl_fn_800C65F0_00001978:
    stw r27, 0x2418(r30)
    li r28, 0x1
    stw r26, 0x241c(r30)
lbl_fn_800C65F0_00001984:
    addi r26, r26, 0x1
    addi r31, r31, 0x1c
    cmpwi r26, 0x20
    blt lbl_fn_800C65F0_00001908
    cmpwi r28, 0x0
    bne lbl_fn_800C65F0_000019AC
    addi r27, r27, 0x1
    addi r29, r29, 0x380
    cmpwi r27, 0x8
    blt lbl_fn_800C65F0_00001900
lbl_fn_800C65F0_000019AC:
    lwz r0, 0x2408(r30)
    cmpwi r0, 0x0
    beq lbl_fn_800C65F0_00001AA0
    addi r3, r1, 0x8
    li r26, 0x0
    bl fn_800C6190
    addi r31, r30, 0x804
    li r27, 0x0
lbl_fn_800C65F0_000019CC:
    mr r29, r31
    li r28, 0x0
lbl_fn_800C65F0_000019D4:
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_800C65F0_00001A78
    lhz r0, 0x4(r29)
    cmpwi r0, 0x0
    beq lbl_fn_800C65F0_00001A78
    mr r3, r29
    addi r4, r1, 0x8
    bl fn_800C79DC
    cmpwi r3, 0x0
    beq lbl_fn_800C65F0_00001A78
    lwz r0, 0x2418(r30)
    cmpw r0, r27
    bne lbl_fn_800C65F0_00001A18
    lwz r0, 0x241c(r30)
    cmpw r0, r28
    beq lbl_fn_800C65F0_00001A70
lbl_fn_800C65F0_00001A18:
    addi r3, r1, 0x4c
    addi r4, r30, 0x2428
    bl fn_800C776C
    addi r3, r1, 0x4c
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_800C65F0_00001A68
    lwz r4, 0x2418(r30)
    mulli r0, r28, 0x1c
    lwz r5, 0x241c(r30)
    mr r7, r27
    mr r8, r28
    mulli r10, r4, 0x380
    addi r3, r30, 0x2428
    add r9, r31, r0
    mulli r6, r5, 0x1c
    add r0, r30, r10
    add r6, r0, r6
    addi r6, r6, 0x804
    bl fn_800C7A30
lbl_fn_800C65F0_00001A68:
    stw r27, 0x2418(r30)
    stw r28, 0x241c(r30)
lbl_fn_800C65F0_00001A70:
    li r26, 0x1
    b lbl_fn_800C65F0_00001A88
lbl_fn_800C65F0_00001A78:
    addi r28, r28, 0x1
    addi r29, r29, 0x1c
    cmpwi r28, 0x20
    blt lbl_fn_800C65F0_000019D4
lbl_fn_800C65F0_00001A88:
    cmpwi r26, 0x0
    bne lbl_fn_800C65F0_00001AA0
    addi r27, r27, 0x1
    addi r31, r31, 0x380
    cmpwi r27, 0x8
    blt lbl_fn_800C65F0_000019CC
lbl_fn_800C65F0_00001AA0:
    mr r3, r30
    bl fn_800C7158
    cmpwi r3, 0x0
    beq lbl_fn_800C65F0_00001B20
    lwz r5, 0x2418(r30)
    addi r3, r1, 0x40
    lwz r0, 0x241c(r30)
    addi r4, r30, 0x243c
    mulli r5, r5, 0x380
    mulli r0, r0, 0x1c
    add r5, r30, r5
    add r5, r5, r0
    lhz r26, 0x808(r5)
    bl fn_800C77D8
    addi r3, r1, 0x40
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_800C65F0_00001B10
    lwz r4, 0x2418(r30)
    addi r3, r30, 0x243c
    lwz r5, 0x241c(r30)
    mulli r6, r4, 0x380
    mulli r0, r5, 0x1c
    add r6, r30, r6
    add r6, r6, r0
    addi r6, r6, 0x804
    bl fn_800C7B78
    b lbl_fn_800C65F0_00001C24
lbl_fn_800C65F0_00001B10:
    mr r3, r30
    mr r4, r26
    bl fn_800C6E60
    b lbl_fn_800C65F0_00001C24
lbl_fn_800C65F0_00001B20:
    mr r3, r30
    bl fn_800C71D0
    cmpwi r3, 0x0
    beq lbl_fn_800C65F0_00001B74
    addi r3, r1, 0x34
    addi r4, r30, 0x2450
    bl fn_800C77D8
    addi r3, r1, 0x34
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_800C65F0_00001C24
    lwz r4, 0x2418(r30)
    addi r3, r30, 0x2450
    lwz r5, 0x241c(r30)
    mulli r6, r4, 0x380
    mulli r0, r5, 0x1c
    add r6, r30, r6
    add r6, r6, r0
    addi r6, r6, 0x804
    bl fn_800C7B78
    b lbl_fn_800C65F0_00001C24
lbl_fn_800C65F0_00001B74:
    mr r3, r30
    bl fn_800C7248
    cmpwi r3, 0x0
    beq lbl_fn_800C65F0_00001BAC
    addi r3, r1, 0x28
    addi r4, r30, 0x2464
    bl fn_800C61C0
    addi r3, r1, 0x28
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_800C65F0_00001C24
    addi r3, r30, 0x2464
    bl fn_800C7CA8
    b lbl_fn_800C65F0_00001C24
lbl_fn_800C65F0_00001BAC:
    mr r3, r30
    bl fn_800C72C0
    cmpwi r3, 0x0
    beq lbl_fn_800C65F0_00001BF0
    addi r3, r1, 0x1c
    addi r4, r30, 0x2478
    bl fn_800C61C0
    addi r3, r1, 0x1c
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_800C65F0_00001BE4
    addi r3, r30, 0x2478
    bl fn_800C7CA8
    b lbl_fn_800C65F0_00001C24
lbl_fn_800C65F0_00001BE4:
    mr r3, r30
    bl fn_800C6ED8
    b lbl_fn_800C65F0_00001C24
lbl_fn_800C65F0_00001BF0:
    mr r3, r30
    bl fn_800C7338
    cmpwi r3, 0x0
    beq lbl_fn_800C65F0_00001C24
    addi r3, r1, 0x10
    addi r4, r30, 0x248c
    bl fn_800C61C0
    addi r3, r1, 0x10
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_800C65F0_00001C24
    addi r3, r30, 0x248c
    bl fn_800C7CA8
lbl_fn_800C65F0_00001C24:
    lwz r3, 0x2418(r30)
    lwz r0, 0x241c(r30)
    mulli r3, r3, 0x380
    mulli r0, r0, 0x1c
    add r3, r30, r3
    add r3, r3, r0
    addi r0, r3, 0x804
    stw r0, 0x2424(r30)
lbl_fn_800C65F0_00001C44:
    lmw r26, 0x98(r1)
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}
