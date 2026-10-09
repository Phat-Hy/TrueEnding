#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_80084320(void);
extern void fn_80097D40(void);
extern void fn_8016E970(void);
extern void fn_80192908(void);
extern void fn_8019356C(void);
extern void fn_80193EF8(void);
extern void fn_80194550(void);
extern void fn_80196974(void);
extern void fn_801C48B4(void);
extern void fn_801C5A04(void);
extern void fn_801C82F8(void);
extern void fn_801C8938(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077A720[];

/* Small data declarations */
extern u32 lbl_8088196C;

/* Function declarations */
void fn_8016B8D4(void);
void fn_8016BBCC(void);
void fn_8016BEDC(void);
void fn_8016C1E0(void);
void fn_8016C4D8(void);
void fn_8016C7D8(void);
void fn_8016CAD0(void);
void fn_8016CDB8(void);
void fn_8016D0A0(void);

asm void fn_8016B8D4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r8, lbl_80737A9C@ha
    stw r0, 0x74(r1)
    addi r8, r8, lbl_80737A9C@l
    stmw r25, 0x54(r1)
    lis r31, lbl_8077A720@ha
    mr r26, r5
    mr r29, r3
    mr r25, r4
    mr r28, r7
    addi r5, r8, 0x24
    mr r27, r6
    mr r6, r5
    addi r31, r31, lbl_8077A720@l
    li r3, 0x3c
    li r4, 0x0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8016B8D4_00000074
    mr r4, r29
    mr r5, r25
    mr r6, r26
    mr r7, r27
    mr r8, r28
    bl fn_801C48B4
    mr r30, r3
lbl_fn_8016B8D4_00000074:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016B8D4_00000104
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016B8D4_000000AC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8016B8D4_000000C8
lbl_fn_8016B8D4_000000AC:
    addi r3, r31, 0x17a0
    lwz r5, 0x17a0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8016B8D4_000000C8:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016B8D4_00000104
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016B8D4_00000104:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016B8D4_000002B8
    cmpwi r0, 0x8
    beq lbl_fn_8016B8D4_0000011C
    stw r0, 0x564(r29)
lbl_fn_8016B8D4_0000011C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016B8D4_000002B8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016B8D4_00000154
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8016B8D4_00000170
lbl_fn_8016B8D4_00000154:
    addi r3, r31, 0x17ac
    lwz r5, 0x17ac(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8016B8D4_00000170:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016B8D4_000001AC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016B8D4_000001AC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016B8D4_00000288
    cmpwi r0, 0x8
    beq lbl_fn_8016B8D4_000001C4
    stw r0, 0x564(r29)
lbl_fn_8016B8D4_000001C4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016B8D4_00000288
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016B8D4_000001FC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8016B8D4_00000218
lbl_fn_8016B8D4_000001FC:
    addi r3, r31, 0x17b8
    lwz r5, 0x17b8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8016B8D4_00000218:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016B8D4_00000254
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016B8D4_00000254:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016B8D4_00000288
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016B8D4_00000288:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016B8D4_000002B8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016B8D4_000002B8:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8016B8D4_000002E4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016B8D4_000002E4:
    lmw r25, 0x54(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8016BBCC(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stmw r26, 0x58(r1)
    lis r31, lbl_8077A720@ha
    mr r29, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    addi r31, r31, lbl_8077A720@l
    li r4, 0x52
    addi r3, r3, 0xb0
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_8016BBCC_000005F4
    lwz r0, 0x139c(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016BBCC_000005F4
    lis r5, lbl_80737A9C@ha
    li r3, 0x18
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8016BBCC_00000384
    mr r4, r29
    mr r5, r26
    mr r6, r27
    mr r7, r28
    bl fn_801C5A04
    mr r30, r3
lbl_fn_8016BBCC_00000384:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016BBCC_00000414
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016BBCC_000003BC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8016BBCC_000003D8
lbl_fn_8016BBCC_000003BC:
    addi r3, r31, 0x17e8
    lwz r5, 0x17e8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8016BBCC_000003D8:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016BBCC_00000414
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016BBCC_00000414:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016BBCC_000005C8
    cmpwi r0, 0x8
    beq lbl_fn_8016BBCC_0000042C
    stw r0, 0x564(r29)
lbl_fn_8016BBCC_0000042C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016BBCC_000005C8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016BBCC_00000464
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8016BBCC_00000480
lbl_fn_8016BBCC_00000464:
    addi r3, r31, 0x17f4
    lwz r5, 0x17f4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8016BBCC_00000480:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016BBCC_000004BC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016BBCC_000004BC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016BBCC_00000598
    cmpwi r0, 0x8
    beq lbl_fn_8016BBCC_000004D4
    stw r0, 0x564(r29)
lbl_fn_8016BBCC_000004D4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016BBCC_00000598
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016BBCC_0000050C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8016BBCC_00000528
lbl_fn_8016BBCC_0000050C:
    addi r3, r31, 0x1800
    lwz r5, 0x1800(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8016BBCC_00000528:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016BBCC_00000564
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016BBCC_00000564:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016BBCC_00000598
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016BBCC_00000598:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016BBCC_000005C8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016BBCC_000005C8:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8016BBCC_000005F4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016BBCC_000005F4:
    lmw r26, 0x58(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8016BEDC(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_27
    lis r6, lbl_80737A9C@ha
    lis r31, lbl_8077A720@ha
    addi r6, r6, lbl_80737A9C@l
    mr r28, r5
    addi r5, r6, 0x24
    mr r29, r3
    mr r27, r4
    addi r31, r31, lbl_8077A720@l
    mr r6, r5
    li r3, 0x28
    li r4, 0x0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8016BEDC_00000684
    psq_l f1, 0x0(r28), 0, 0
    addi r6, r1, 0x2c
    lfs f2, 0x8(r28)
    mr r4, r29
    stfs f2, 0x34(r1)
    mr r5, r27
    li r7, 0x1
    psq_st f1, 0x0(r6), 0, 0
    bl fn_8019356C
    mr r30, r3
lbl_fn_8016BEDC_00000684:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016BEDC_00000714
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016BEDC_000006BC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8016BEDC_000006D8
lbl_fn_8016BEDC_000006BC:
    addi r3, r31, 0x1830
    lwz r5, 0x1830(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8016BEDC_000006D8:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x8
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016BEDC_00000714
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016BEDC_00000714:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016BEDC_000008C8
    cmpwi r0, 0x8
    beq lbl_fn_8016BEDC_0000072C
    stw r0, 0x564(r29)
lbl_fn_8016BEDC_0000072C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016BEDC_000008C8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016BEDC_00000764
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8016BEDC_00000780
lbl_fn_8016BEDC_00000764:
    addi r3, r31, 0x183c
    lwz r5, 0x183c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8016BEDC_00000780:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x20
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016BEDC_000007BC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016BEDC_000007BC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016BEDC_00000898
    cmpwi r0, 0x8
    beq lbl_fn_8016BEDC_000007D4
    stw r0, 0x564(r29)
lbl_fn_8016BEDC_000007D4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016BEDC_00000898
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016BEDC_0000080C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x50(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x54(r1)
    stw r0, 0x58(r1)
    b lbl_fn_8016BEDC_00000828
lbl_fn_8016BEDC_0000080C:
    addi r3, r31, 0x1848
    lwz r5, 0x1848(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r0, 0x58(r1)
lbl_fn_8016BEDC_00000828:
    lwz r5, 0x50(r1)
    addi r3, r1, 0x14
    lwz r4, 0x54(r1)
    lwz r0, 0x58(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016BEDC_00000864
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016BEDC_00000864:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016BEDC_00000898
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016BEDC_00000898:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016BEDC_000008C8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016BEDC_000008C8:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8016BEDC_000008F4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016BEDC_000008F4:
    addi r11, r1, 0x80
    bl _restgpr_27
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8016C1E0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r5, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x64(r1)
    addi r5, r5, lbl_80737A9C@l
    addi r5, r5, 0x24
    stw r31, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    mr r6, r5
    stw r30, 0x58(r1)
    addi r31, r31, lbl_8077A720@l
    stw r29, 0x54(r1)
    mr r29, r3
    li r3, 0x24
    stw r28, 0x50(r1)
    mr r28, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8016C1E0_00000974
    mr r4, r29
    mr r5, r28
    bl fn_80193EF8
    mr r30, r3
lbl_fn_8016C1E0_00000974:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016C1E0_00000A04
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016C1E0_000009AC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8016C1E0_000009C8
lbl_fn_8016C1E0_000009AC:
    addi r3, r31, 0x1878
    lwz r5, 0x1878(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8016C1E0_000009C8:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016C1E0_00000A04
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016C1E0_00000A04:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016C1E0_00000BB8
    cmpwi r0, 0x8
    beq lbl_fn_8016C1E0_00000A1C
    stw r0, 0x564(r29)
lbl_fn_8016C1E0_00000A1C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016C1E0_00000BB8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016C1E0_00000A54
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8016C1E0_00000A70
lbl_fn_8016C1E0_00000A54:
    addi r3, r31, 0x1884
    lwz r5, 0x1884(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8016C1E0_00000A70:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016C1E0_00000AAC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016C1E0_00000AAC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016C1E0_00000B88
    cmpwi r0, 0x8
    beq lbl_fn_8016C1E0_00000AC4
    stw r0, 0x564(r29)
lbl_fn_8016C1E0_00000AC4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016C1E0_00000B88
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016C1E0_00000AFC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8016C1E0_00000B18
lbl_fn_8016C1E0_00000AFC:
    addi r3, r31, 0x1890
    lwz r5, 0x1890(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8016C1E0_00000B18:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016C1E0_00000B54
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016C1E0_00000B54:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016C1E0_00000B88
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016C1E0_00000B88:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016C1E0_00000BB8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016C1E0_00000BB8:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8016C1E0_00000BE4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016C1E0_00000BE4:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8016C4D8(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_27
    lis r6, lbl_80737A9C@ha
    lis r31, lbl_8077A720@ha
    addi r6, r6, lbl_80737A9C@l
    mr r28, r5
    addi r5, r6, 0x24
    mr r29, r3
    mr r27, r4
    addi r31, r31, lbl_8077A720@l
    mr r6, r5
    li r3, 0x44
    li r4, 0x0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8016C4D8_00000C7C
    lfs f2, 0x8(r28)
    addi r6, r1, 0x2c
    psq_l f1, 0x0(r28), 0, 0
    mr r4, r29
    psq_st f1, 0x0(r6), 0, 0
    mr r5, r27
    stfs f2, 0x34(r1)
    bl fn_80194550
    mr r30, r3
lbl_fn_8016C4D8_00000C7C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016C4D8_00000D0C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016C4D8_00000CB4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8016C4D8_00000CD0
lbl_fn_8016C4D8_00000CB4:
    addi r3, r31, 0x189c
    lwz r5, 0x189c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8016C4D8_00000CD0:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x8
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016C4D8_00000D0C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016C4D8_00000D0C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016C4D8_00000EC0
    cmpwi r0, 0x8
    beq lbl_fn_8016C4D8_00000D24
    stw r0, 0x564(r29)
lbl_fn_8016C4D8_00000D24:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016C4D8_00000EC0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016C4D8_00000D5C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8016C4D8_00000D78
lbl_fn_8016C4D8_00000D5C:
    addi r3, r31, 0x18a8
    lwz r5, 0x18a8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8016C4D8_00000D78:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x20
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016C4D8_00000DB4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016C4D8_00000DB4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016C4D8_00000E90
    cmpwi r0, 0x8
    beq lbl_fn_8016C4D8_00000DCC
    stw r0, 0x564(r29)
lbl_fn_8016C4D8_00000DCC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016C4D8_00000E90
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016C4D8_00000E04
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x50(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x54(r1)
    stw r0, 0x58(r1)
    b lbl_fn_8016C4D8_00000E20
lbl_fn_8016C4D8_00000E04:
    addi r3, r31, 0x18b4
    lwz r5, 0x18b4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r0, 0x58(r1)
lbl_fn_8016C4D8_00000E20:
    lwz r5, 0x50(r1)
    addi r3, r1, 0x14
    lwz r4, 0x54(r1)
    lwz r0, 0x58(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016C4D8_00000E5C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016C4D8_00000E5C:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016C4D8_00000E90
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016C4D8_00000E90:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016C4D8_00000EC0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016C4D8_00000EC0:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8016C4D8_00000EEC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016C4D8_00000EEC:
    addi r11, r1, 0x80
    bl _restgpr_27
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8016C7D8(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r5, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x64(r1)
    addi r5, r5, lbl_80737A9C@l
    addi r5, r5, 0x24
    stw r31, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    mr r6, r5
    stw r30, 0x58(r1)
    addi r31, r31, lbl_8077A720@l
    stw r29, 0x54(r1)
    mr r29, r3
    li r3, 0x14
    stw r28, 0x50(r1)
    mr r28, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8016C7D8_00000F6C
    mr r4, r29
    mr r5, r28
    bl fn_80192908
    mr r30, r3
lbl_fn_8016C7D8_00000F6C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016C7D8_00000FFC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016C7D8_00000FA4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8016C7D8_00000FC0
lbl_fn_8016C7D8_00000FA4:
    addi r3, r31, 0x18c0
    lwz r5, 0x18c0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8016C7D8_00000FC0:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016C7D8_00000FFC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016C7D8_00000FFC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016C7D8_000011B0
    cmpwi r0, 0x8
    beq lbl_fn_8016C7D8_00001014
    stw r0, 0x564(r29)
lbl_fn_8016C7D8_00001014:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016C7D8_000011B0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016C7D8_0000104C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8016C7D8_00001068
lbl_fn_8016C7D8_0000104C:
    addi r3, r31, 0x18cc
    lwz r5, 0x18cc(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8016C7D8_00001068:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016C7D8_000010A4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016C7D8_000010A4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016C7D8_00001180
    cmpwi r0, 0x8
    beq lbl_fn_8016C7D8_000010BC
    stw r0, 0x564(r29)
lbl_fn_8016C7D8_000010BC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016C7D8_00001180
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016C7D8_000010F4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8016C7D8_00001110
lbl_fn_8016C7D8_000010F4:
    addi r3, r31, 0x18d8
    lwz r5, 0x18d8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8016C7D8_00001110:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016C7D8_0000114C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016C7D8_0000114C:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016C7D8_00001180
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016C7D8_00001180:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016C7D8_000011B0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016C7D8_000011B0:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8016C7D8_000011DC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016C7D8_000011DC:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8016CAD0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r4, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x64(r1)
    addi r4, r4, lbl_80737A9C@l
    addi r5, r4, 0x24
    stw r31, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    mr r6, r5
    stw r30, 0x58(r1)
    li r4, 0x0
    stw r29, 0x54(r1)
    mr r29, r3
    li r3, 0x8
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8016CAD0_00001258
    mr r4, r29
    bl fn_80196974
    mr r30, r3
lbl_fn_8016CAD0_00001258:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016CAD0_000012E8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016CAD0_00001290
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8016CAD0_000012AC
lbl_fn_8016CAD0_00001290:
    addi r3, r31, 0x18e4
    lwz r5, 0x18e4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8016CAD0_000012AC:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016CAD0_000012E8
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016CAD0_000012E8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016CAD0_0000149C
    cmpwi r0, 0x8
    beq lbl_fn_8016CAD0_00001300
    stw r0, 0x564(r29)
lbl_fn_8016CAD0_00001300:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016CAD0_0000149C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016CAD0_00001338
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8016CAD0_00001354
lbl_fn_8016CAD0_00001338:
    addi r3, r31, 0x18f0
    lwz r5, 0x18f0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8016CAD0_00001354:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016CAD0_00001390
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016CAD0_00001390:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016CAD0_0000146C
    cmpwi r0, 0x8
    beq lbl_fn_8016CAD0_000013A8
    stw r0, 0x564(r29)
lbl_fn_8016CAD0_000013A8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016CAD0_0000146C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016CAD0_000013E0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8016CAD0_000013FC
lbl_fn_8016CAD0_000013E0:
    addi r3, r31, 0x18fc
    lwz r5, 0x18fc(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8016CAD0_000013FC:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016CAD0_00001438
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016CAD0_00001438:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016CAD0_0000146C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016CAD0_0000146C:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016CAD0_0000149C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016CAD0_0000149C:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8016CAD0_000014C8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016CAD0_000014C8:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8016CDB8(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r6, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x74(r1)
    addi r6, r6, lbl_80737A9C@l
    stmw r27, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    mr r28, r5
    addi r5, r6, 0x24
    mr r29, r3
    mr r27, r4
    addi r31, r31, lbl_8077A720@l
    mr r6, r5
    li r3, 0x1c
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8016CDB8_00001548
    mr r4, r29
    mr r5, r27
    mr r6, r28
    bl fn_801C82F8
    mr r30, r3
lbl_fn_8016CDB8_00001548:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016CDB8_000015D8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016CDB8_00001580
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8016CDB8_0000159C
lbl_fn_8016CDB8_00001580:
    addi r3, r31, 0x1908
    lwz r5, 0x1908(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8016CDB8_0000159C:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016CDB8_000015D8
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016CDB8_000015D8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016CDB8_0000178C
    cmpwi r0, 0x8
    beq lbl_fn_8016CDB8_000015F0
    stw r0, 0x564(r29)
lbl_fn_8016CDB8_000015F0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016CDB8_0000178C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016CDB8_00001628
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8016CDB8_00001644
lbl_fn_8016CDB8_00001628:
    addi r3, r31, 0x1914
    lwz r5, 0x1914(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8016CDB8_00001644:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016CDB8_00001680
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016CDB8_00001680:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016CDB8_0000175C
    cmpwi r0, 0x8
    beq lbl_fn_8016CDB8_00001698
    stw r0, 0x564(r29)
lbl_fn_8016CDB8_00001698:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016CDB8_0000175C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016CDB8_000016D0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8016CDB8_000016EC
lbl_fn_8016CDB8_000016D0:
    addi r3, r31, 0x1920
    lwz r5, 0x1920(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8016CDB8_000016EC:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016CDB8_00001728
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016CDB8_00001728:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016CDB8_0000175C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016CDB8_0000175C:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016CDB8_0000178C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016CDB8_0000178C:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8016CDB8_000017B8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016CDB8_000017B8:
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8016D0A0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    stw r30, 0x88(r1)
    stw r29, 0x84(r1)
    mr r29, r3
    stw r28, 0x80(r1)
    mr r28, r4
    lwz r5, 0x1208(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8016D0A0_00001858
    lfs f0, lbl_8088196C
    li r30, 0x0
    stw r3, 0x40(r1)
    li r0, 0x3
    mr r3, r5
    addi r4, r1, 0x30
    stw r30, 0x34(r1)
    stw r30, 0x38(r1)
    stw r30, 0x3c(r1)
    stfs f0, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
    stw r0, 0x30(r1)
    lwz r12, 0x0(r5)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1208(r29)
    li r0, 0xff
    stb r0, 0x520(r3)
    stw r30, 0x1208(r29)
lbl_fn_8016D0A0_00001858:
    lis r5, lbl_80737A9C@ha
    li r3, 0x18
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8016D0A0_00001894
    mr r4, r29
    mr r5, r28
    bl fn_801C8938
    mr r30, r3
lbl_fn_8016D0A0_00001894:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016D0A0_00001924
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016D0A0_000018CC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x50(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x54(r1)
    stw r0, 0x58(r1)
    b lbl_fn_8016D0A0_000018E8
lbl_fn_8016D0A0_000018CC:
    addi r3, r31, 0x192c
    lwz r5, 0x192c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r0, 0x58(r1)
lbl_fn_8016D0A0_000018E8:
    lwz r5, 0x50(r1)
    addi r3, r1, 0x8
    lwz r4, 0x54(r1)
    lwz r0, 0x58(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016D0A0_00001924
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016D0A0_00001924:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016D0A0_00001AD8
    cmpwi r0, 0x8
    beq lbl_fn_8016D0A0_0000193C
    stw r0, 0x564(r29)
lbl_fn_8016D0A0_0000193C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016D0A0_00001AD8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016D0A0_00001974
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x5c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    b lbl_fn_8016D0A0_00001990
lbl_fn_8016D0A0_00001974:
    addi r3, r31, 0x1938
    lwz r5, 0x1938(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r0, 0x64(r1)
lbl_fn_8016D0A0_00001990:
    lwz r5, 0x5c(r1)
    addi r3, r1, 0x20
    lwz r4, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016D0A0_000019CC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016D0A0_000019CC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016D0A0_00001AA8
    cmpwi r0, 0x8
    beq lbl_fn_8016D0A0_000019E4
    stw r0, 0x564(r29)
lbl_fn_8016D0A0_000019E4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016D0A0_00001AA8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016D0A0_00001A1C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x68(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x6c(r1)
    stw r0, 0x70(r1)
    b lbl_fn_8016D0A0_00001A38
lbl_fn_8016D0A0_00001A1C:
    addi r3, r31, 0x1944
    lwz r5, 0x1944(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    stw r0, 0x70(r1)
lbl_fn_8016D0A0_00001A38:
    lwz r5, 0x68(r1)
    addi r3, r1, 0x14
    lwz r4, 0x6c(r1)
    lwz r0, 0x70(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016D0A0_00001A74
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016D0A0_00001A74:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016D0A0_00001AA8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016D0A0_00001AA8:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016D0A0_00001AD8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016D0A0_00001AD8:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8016D0A0_00001B04
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016D0A0_00001B04:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}
