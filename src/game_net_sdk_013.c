#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTime(void);
extern void __div2i(void);
extern void _restgpr_16(void);
extern void _restgpr_17(void);
extern void _restgpr_20(void);
extern void _restgpr_21(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _savegpr_16(void);
extern void _savegpr_17(void);
extern void _savegpr_20(void);
extern void _savegpr_21(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void fn_806809C0(void);
extern void fn_806A7110(void);
extern void fn_806A7130(void);
extern void fn_806A72E0(void);
extern void fn_806A7400(void);
extern void fn_806A76B0(void);
extern void fn_806A9CA0(void);
extern void fn_806AB920(void);
extern void fn_806AB980(void);
extern void fn_806ABB70(void);
extern void fn_806ACCF0(void);
extern void fn_806ACE00(void);
extern void fn_806B0DE0(void);
extern void fn_806B0E30(void);
extern void fn_806B0F80(void);
extern void fn_806B1230(void);
extern void fn_806B12F0(void);
extern void fn_806B14D0(void);
extern void fn_806B1A00(void);
extern void fn_806BB6C0(void);
extern void fn_806BBBA0(void);
extern void fn_806BBCA0(void);
extern void fn_806BC010(void);
extern void fn_806BC860(void);
extern void fn_806C05F0(void);
extern void fn_806C0C20(void);
extern void fn_806C10C0(void);
extern void fn_806C1430(void);
extern void fn_806C3ED0(void);
extern void fn_806C4B30(void);
extern void fn_806C57F0(void);
extern void fn_806C5C10(void);
extern void fn_806C5EB0(void);
extern void fn_806C6180(void);
extern void fn_806C6750(void);
extern void fn_806C8DB0(void);
extern void fn_806C9670(void);
extern void fn_806C9680(void);
extern void fn_806C9690(void);
extern void fn_806C9790(void);
extern void fn_806C97A0(void);
extern void fn_806C9810(void);
extern void fn_806C9880(void);
extern void fn_806C9E60(void);
extern void fn_806CA040(void);
extern void fn_806CB3A0(void);
extern void fn_806CB550(void);
extern void fn_806CB8F0(void);
extern void fn_806CC550(void);
extern void fn_806CC6D0(void);
extern void fn_806CCFA0(void);
extern void fn_806CD150(void);
extern void fn_806CE700(void);
extern void fn_806EA8A0(void);
extern void fn_806EAC30(void);
extern void fn_806EACC0(void);
extern void fn_806EAD00(void);
extern void fn_806EF0C0(void);
extern void fn_806EF550(void);
extern void fn_806EF570(void);
extern void fn_806EF590(void);
extern void fn_806EF5B0(void);
extern void fn_806EF8B0(void);
extern void fn_806EF930(void);
extern void fn_806F1DF0(void);
extern void fn_806FBDB0(void);
extern void fn_806FCFE0(void);
extern void fn_806FEA20(void);
extern void fn_806FEAA0(void);
extern void fn_806FF920(void);
extern void fn_806FFA10(void);
extern void fn_806FFDD0(void);
extern void fn_806FFE50(void);
extern void fn_806FFEA0(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_807BF044[];
extern u8 lbl_807BE9D0[];
extern u8 lbl_807C16F0[];
extern u8 lbl_80860140[];
extern u8 lbl_80860158[];
extern u8 lbl_80860890[];
extern u8 lbl_80860898[];

/* Small data declarations */

/* Function declarations */
void fn_806B3AE0(void);
void fn_806B3B80(void);
void fn_806B3C20(void);
void fn_806B3C40(void);
void fn_806B3CC0(void);
void fn_806B3DF0(void);
void fn_806B40C0(void);
void fn_806B42B0(void);
void fn_806B4940(void);
void fn_806B4D20(void);
void fn_806B5860(void);

asm void fn_806B3AE0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80860898@ha
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, lbl_80860898@l(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806B3AE0_00000044
    bl fn_806A7110
    cmpwi r3, 0x0
    beq lbl_fn_806B3AE0_0000004C
lbl_fn_806B3AE0_00000044:
    mr r3, r30
    b lbl_fn_806B3AE0_00000078
lbl_fn_806B3AE0_0000004C:
    lwz r3, lbl_80860898@l(r31)
    mr r4, r28
    lwz r3, 0x704(r3)
    bl fn_806FFEA0
    cmpwi r3, 0x0
    beq lbl_fn_806B3AE0_00000074
    mr r4, r29
    mr r5, r30
    bl fn_806FEAA0
    b lbl_fn_806B3AE0_00000078
lbl_fn_806B3AE0_00000074:
    mr r3, r30
lbl_fn_806B3AE0_00000078:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806B3B80(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80860898@ha
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, lbl_80860898@l(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806B3B80_000000E4
    bl fn_806A7110
    cmpwi r3, 0x0
    beq lbl_fn_806B3B80_000000EC
lbl_fn_806B3B80_000000E4:
    mr r3, r30
    b lbl_fn_806B3B80_00000118
lbl_fn_806B3B80_000000EC:
    lwz r3, lbl_80860898@l(r31)
    mr r4, r28
    lwz r3, 0x704(r3)
    bl fn_806FFEA0
    cmpwi r3, 0x0
    beq lbl_fn_806B3B80_00000114
    mr r4, r29
    mr r5, r30
    bl fn_806FEA20
    b lbl_fn_806B3B80_00000118
lbl_fn_806B3B80_00000114:
    mr r3, r30
lbl_fn_806B3B80_00000118:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806B3C20(void)
{
    nofralloc
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    cmpwi r3, 0x0
    bne lbl_fn_806B3C20_00000158
    li r3, 0x0
    blr
lbl_fn_806B3C20_00000158:
    lwz r3, 0x8c0(r3)
    blr
}

asm void fn_806B3C40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_807BE9D0@ha
    stw r0, 0x24(r1)
    addi r6, r6, lbl_807BE9D0@l
    stw r31, 0x1c(r1)
    mr r31, r5
    addi r5, r6, 0x100
    stw r30, 0x18(r1)
    mr r30, r4
    addi r4, r6, 0xc4
    stw r29, 0x14(r1)
    mr. r29, r3
    li r3, 0x4
    beq lbl_fn_806B3C40_000001A0
    addi r5, r6, 0xf8
lbl_fn_806B3C40_000001A0:
    crclr 6
    bl fn_806A76B0
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_806CC550
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806B3CC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80860898@ha
    stw r30, 0x18(r1)
    li r30, -0x1
    stw r29, 0x14(r1)
    lwz r3, lbl_80860898@l(r31)
    cmpwi r3, 0x0
    bne lbl_fn_806B3CC0_00000214
    li r3, 0x0
    b lbl_fn_806B3CC0_000002F0
lbl_fn_806B3CC0_00000214:
    lbz r0, 0x16(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B3CC0_00000228
    li r3, 0x0
    b lbl_fn_806B3CC0_000002F0
lbl_fn_806B3CC0_00000228:
    bl fn_806B0DE0
    cmpwi r3, 0x0
    bne lbl_fn_806B3CC0_0000023C
    li r3, 0x0
    b lbl_fn_806B3CC0_000002F0
lbl_fn_806B3CC0_0000023C:
    lwz r3, lbl_80860898@l(r31)
    lwz r29, 0x1c(r3)
    bl fn_806B0F80
    and r29, r29, r3
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806B3CC0_00000280
    lwz r3, lbl_80860898@l(r31)
    lwz r0, 0x744(r3)
    cmpwi r0, 0xd
    beq lbl_fn_806B3CC0_00000270
    cmpwi r0, 0x16
    bne lbl_fn_806B3CC0_00000278
lbl_fn_806B3CC0_00000270:
    li r0, 0x1
    b lbl_fn_806B3CC0_00000284
lbl_fn_806B3CC0_00000278:
    li r0, 0x0
    b lbl_fn_806B3CC0_00000284
lbl_fn_806B3CC0_00000280:
    li r0, 0x1
lbl_fn_806B3CC0_00000284:
    cmpwi r0, 0x0
    bne lbl_fn_806B3CC0_000002A0
    bl fn_806B0E30
    clrlwi r3, r3, 24
    li r0, 0x1
    slw r0, r0, r3
    andc r29, r29, r0
lbl_fn_806B3CC0_000002A0:
    bl fn_806B0F80
    xor. r0, r29, r3
    bne lbl_fn_806B3CC0_000002B4
    li r30, 0x1
    b lbl_fn_806B3CC0_000002C4
lbl_fn_806B3CC0_000002B4:
    bl fn_806B0F80
    and. r0, r29, r3
    bne lbl_fn_806B3CC0_000002C4
    li r30, 0x0
lbl_fn_806B3CC0_000002C4:
    cmpwi r30, -0x1
    beq lbl_fn_806B3CC0_000002E4
    lis r3, lbl_80860898@ha
    subi r0, r30, 0x1
    lwz r3, lbl_80860898@l(r3)
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x28(r3)
lbl_fn_806B3CC0_000002E4:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r3, 0x28(r3)
lbl_fn_806B3CC0_000002F0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806B3DF0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    lis r24, lbl_80860898@ha
    lis r29, lbl_807BE9D0@ha
    stw r3, lbl_80860898@l(r24)
    mr r21, r4
    mr r23, r5
    mr r22, r6
    mr r25, r7
    mr r26, r8
    mr r27, r9
    mr r28, r10
    addi r29, r29, lbl_807BE9D0@l
    bl OSGetTime
    lis r30, lbl_80860890@ha
    lwz r5, lbl_80860898@l(r24)
    addi r31, r30, lbl_80860890@l
    stw r3, lbl_80860890@l(r30)
    li r0, 0x0
    stw r4, 0x4(r31)
    stw r21, 0x0(r5)
    lwz r3, lbl_80860898@l(r24)
    stw r23, 0x4(r3)
    lwz r3, lbl_80860898@l(r24)
    stw r22, 0x8(r3)
    lwz r3, lbl_80860898@l(r24)
    stw r0, 0x10(r3)
    lwz r3, lbl_80860898@l(r24)
    stw r0, 0x6fc(r3)
    lwz r3, lbl_80860898@l(r24)
    sth r0, 0x6f8(r3)
    lwz r3, lbl_80860898@l(r24)
    stw r0, 0x704(r3)
    lwz r3, lbl_80860898@l(r24)
    lwz r24, 0x744(r3)
    cmpwi r24, 0x0
    beq lbl_fn_806B3DF0_00000448
    lwz r23, lbl_80860890@l(r30)
    lwz r22, 0x4(r31)
    bl OSGetTime
    stw r4, 0x4(r31)
    lis r31, 0x1062
    lis r6, 0x8000
    subfc r4, r22, r4
    stw r3, lbl_80860890@l(r30)
    addi r7, r31, 0x4dd3
    subfe r3, r23, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r31, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    lwz r8, lbl_807C16F0@l(r3)
    slwi r0, r24, 2
    addi r3, r3, lbl_807C16F0@l
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r29, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806B3DF0_00000448:
    lis r31, lbl_80860898@ha
    li r30, 0x0
    lwz r3, lbl_80860898@l(r31)
    li r4, 0x0
    li r5, 0x40
    stw r30, 0x744(r3)
    lwz r3, lbl_80860898@l(r31)
    stb r30, 0x19(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r30, 0x7a8(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r25, 0x7b4(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r26, 0x7b8(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r27, 0x7bc(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r28, 0x7c0(r3)
    lwz r3, lbl_80860898@l(r31)
    addi r3, r3, 0x7c4
    bl memset
    lwz r3, lbl_80860898@l(r31)
    li r0, 0x1
    addi r4, r29, 0x13c
    addi r5, r29, 0x108
    stw r30, 0x804(r3)
    li r3, 0x4
    lwz r6, lbl_80860898@l(r31)
    stw r30, 0x8a0(r6)
    lwz r6, lbl_80860898@l(r31)
    stw r30, 0x8a4(r6)
    lwz r6, lbl_80860898@l(r31)
    stw r30, 0x8b0(r6)
    lwz r6, lbl_80860898@l(r31)
    stw r30, 0x8b4(r6)
    lwz r6, lbl_80860898@l(r31)
    stw r30, 0x8b8(r6)
    lwz r6, lbl_80860898@l(r31)
    stw r30, 0x8bc(r6)
    lwz r6, lbl_80860898@l(r31)
    stw r30, 0x8c0(r6)
    lwz r6, lbl_80860898@l(r31)
    stb r30, 0x8c4(r6)
    lwz r6, lbl_80860898@l(r31)
    stw r30, 0x8c8(r6)
    lwz r6, lbl_80860898@l(r31)
    stb r30, 0x15(r6)
    lwz r6, lbl_80860898@l(r31)
    stb r30, 0x16(r6)
    lwz r6, lbl_80860898@l(r31)
    stw r30, 0x71c(r6)
    stw r30, 0x718(r6)
    stw r30, 0x8f8(r6)
    lwz r6, lbl_80860898@l(r31)
    stw r0, 0x908(r6)
    lwz r6, lbl_80860898@l(r31)
    stb r30, 0x8e5(r6)
    lwz r6, lbl_80860898@l(r31)
    stb r30, 0x8e6(r6)
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r31)
    li r4, 0x0
    li r5, 0x608
    stw r30, 0x8e0(r3)
    lwz r3, lbl_80860898@l(r31)
    addi r3, r3, 0x58
    bl memset
    lwz r3, lbl_80860898@l(r31)
    li r4, 0x0
    li r5, 0x30
    addi r3, r3, 0x660
    bl memset
    lis r23, lbl_80860158@ha
    li r22, 0x0
    addi r23, r23, lbl_80860158@l
lbl_fn_806B3DF0_00000578:
    lwz r4, 0x4(r23)
    cmpwi r4, 0x0
    beq lbl_fn_806B3DF0_00000590
    li r3, 0x4
    li r5, 0x0
    bl fn_806A7400
lbl_fn_806B3DF0_00000590:
    addi r22, r22, 0x1
    addi r23, r23, 0xc
    cmpwi r22, 0x9a
    blt lbl_fn_806B3DF0_00000578
    lis r3, lbl_80860158@ha
    li r4, 0x0
    addi r3, r3, lbl_80860158@l
    li r5, 0x738
    bl memset
    li r3, 0x0
    bl fn_806BB6C0
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806B40C0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_20
    lis r21, lbl_80860898@ha
    lis r31, lbl_807BE9D0@ha
    lwz r22, lbl_80860898@l(r21)
    addi r31, r31, lbl_807BE9D0@l
    lwz r0, 0x10(r22)
    cmpwi r0, 0x0
    beq lbl_fn_806B40C0_00000628
    addi r4, r31, 0x170
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806B40C0_000007AC
lbl_fn_806B40C0_00000628:
    lwz r3, 0x4(r22)
    lis r24, fn_806C9670@ha
    lis r25, fn_806C9680@ha
    lis r26, fn_806C9690@ha
    lis r27, fn_806C9790@ha
    lis r28, fn_806C97A0@ha
    lwz r3, 0x0(r3)
    li r20, 0x0
    addi r24, r24, fn_806C9670@l
    addi r25, r25, fn_806C9680@l
    addi r26, r26, fn_806C9690@l
    addi r27, r27, fn_806C9790@l
    addi r28, r28, fn_806C97A0@l
    li r29, 0x0
    lis r30, fn_806C8DB0@ha
    bl fn_806EACC0
    lwz r4, 0x4(r22)
    clrlwi r23, r3, 16
    lwz r3, 0x0(r4)
    bl fn_806EAD00
    stw r24, 0x8(r1)
    mr r4, r3
    mr r5, r23
    addi r3, r22, 0x10
    stw r25, 0xc(r1)
    addi r10, r30, fn_806C8DB0@l
    li r8, 0x1
    li r9, 0x1
    stw r26, 0x10(r1)
    stw r27, 0x14(r1)
    stw r28, 0x18(r1)
    stw r29, 0x1c(r1)
    lwz r6, 0x7b4(r22)
    lwz r7, 0x7b8(r22)
    bl fn_806EF0C0
    cmpwi r3, 0x0
    mr r22, r3
    beq lbl_fn_806B40C0_000006F4
    lwz r3, lbl_80860898@l(r21)
    lwz r3, 0x10(r3)
    bl fn_806EF930
    lwz r3, lbl_80860898@l(r21)
    cmpwi r22, 0x3
    stw r29, 0x10(r3)
    bne lbl_fn_806B40C0_000006E4
    cmpwi r20, 0x0
    bne lbl_fn_806B40C0_000006F4
lbl_fn_806B40C0_000006E4:
    mr r3, r22
    bl fn_806C6180
    mr r3, r22
    b lbl_fn_806B40C0_000007AC
lbl_fn_806B40C0_000006F4:
    lis r30, lbl_80860898@ha
    lis r4, fn_806C9810@ha
    lwz r3, lbl_80860898@l(r30)
    li r0, 0x0
    addi r4, r4, fn_806C9810@l
    stw r0, 0x6fc(r3)
    lwz r3, lbl_80860898@l(r30)
    sth r0, 0x6f8(r3)
    lwz r3, lbl_80860898@l(r30)
    lwz r3, 0x10(r3)
    bl fn_806EF590
    lwz r3, lbl_80860898@l(r30)
    lis r4, fn_806C9880@ha
    addi r4, r4, fn_806C9880@l
    lwz r3, 0x10(r3)
    bl fn_806EF550
    lwz r3, lbl_80860898@l(r30)
    lis r4, fn_806C9E60@ha
    addi r4, r4, fn_806C9E60@l
    lwz r3, 0x10(r3)
    bl fn_806EF570
    addi r4, r31, 0x188
    li r3, 0x32
    bl fn_806F1DF0
    addi r4, r31, 0x190
    li r3, 0x33
    bl fn_806F1DF0
    addi r4, r31, 0x19c
    li r3, 0x34
    bl fn_806F1DF0
    addi r4, r31, 0x1a8
    li r3, 0x35
    bl fn_806F1DF0
    addi r4, r31, 0x1b4
    li r3, 0x36
    bl fn_806F1DF0
    addi r4, r31, 0x1c0
    li r3, 0x37
    bl fn_806F1DF0
    addi r4, r31, 0x1d0
    li r3, 0x38
    bl fn_806F1DF0
    lwz r3, lbl_80860898@l(r30)
    lwz r3, 0x10(r3)
    bl fn_806EF8B0
    mr r3, r22
lbl_fn_806B40C0_000007AC:
    addi r11, r1, 0x50
    bl _restgpr_20
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_806B42B0(void)
{
    nofralloc
    stwu r1, -0x4d0(r1)
    mflr r0
    stw r0, 0x4d4(r1)
    addi r11, r1, 0x4d0
    bl _savegpr_16
    lis r17, lbl_80860140@ha
    lis r30, lbl_807BE9D0@ha
    lwz r0, lbl_80860140@l(r17)
    mr r18, r3
    lwz r26, 0x4d8(r1)
    mr r19, r4
    cmpwi r0, 0x0
    lwz r27, 0x4dc(r1)
    lwz r28, 0x4e0(r1)
    mr r20, r5
    lwz r29, 0x4e4(r1)
    mr r21, r6
    mr r22, r7
    mr r23, r8
    mr r24, r9
    mr r25, r10
    addi r30, r30, lbl_807BE9D0@l
    beq lbl_fn_806B42B0_00000844
    mr r4, r0
    li r3, 0x4
    li r5, 0x0
    bl fn_806A7400
    li r0, 0x0
    stw r0, lbl_80860140@l(r17)
lbl_fn_806B42B0_00000844:
    cmpwi r20, 0x0
    beq lbl_fn_806B42B0_00000AFC
    addi r6, r30, 0x1c0
    addi r3, r1, 0x88
    mr r8, r6
    addi r5, r30, 0x1dc
    li r4, 0x1ff
    li r7, 0x0
    li r9, 0x2
    crclr 6
    bl fn_806809C0
    li r0, 0x20
    stw r0, 0x8(r1)
    addi r0, r30, 0x190
    li r3, 0x3
    stw r0, 0xc(r1)
    addi r4, r30, 0x1d0
    li r31, 0x0
    addi r0, r1, 0x88
    stw r3, 0x10(r1)
    addi r3, r1, 0x288
    addi r5, r30, 0x1f4
    addi r6, r30, 0x19c
    stw r4, 0x14(r1)
    addi r8, r30, 0x188
    li r4, 0x1ff
    li r7, 0x5a
    stw r31, 0x18(r1)
    li r9, -0x1
    li r10, 0x20
    stw r0, 0x1c(r1)
    crclr 6
    bl fn_806809C0
    addi r3, r1, 0x288
    bl strlen
    mr r17, r3
    addi r3, r30, 0x250
    bl strlen
    subfic r0, r17, 0x1ff
    subf r16, r3, r0
    li r3, 0x4
    mr r4, r16
    bl fn_806A72E0
    lis r17, lbl_80860140@ha
    cmpwi r3, 0x0
    stw r3, lbl_80860140@l(r17)
    bne lbl_fn_806B42B0_00000AE4
    lis r18, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r18)
    cmpwi r3, 0x0
    beq lbl_fn_806B42B0_00000E48
    li r0, 0x1
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r18)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r18)
    lis r4, 0xffff
    li r3, 0x9
    stb r31, 0x751(r5)
    subi r4, r4, 0x3881
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r18)
    addi r3, r1, 0x2c
    addi r5, r30, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x60
    addi r4, r1, 0x2c
    addi r5, r1, 0x60
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r18)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B42B0_00000994
    cmpwi r6, 0x0
    bne lbl_fn_806B42B0_00000994
    li r6, 0x1
lbl_fn_806B42B0_00000994:
    addi r3, r1, 0x2c
    addi r5, r30, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x64
    addi r4, r1, 0x2c
    addi r5, r1, 0x60
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x2c
    addi r5, r30, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x68
    addi r4, r1, 0x2c
    addi r5, r1, 0x60
    li r6, 0x2f
    bl fn_806AB980
    lis r18, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r18)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B42B0_00000A04
    li r4, 0x0
    b lbl_fn_806B42B0_00000A50
lbl_fn_806B42B0_00000A04:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806B42B0_00000A4C
    lwz r3, lbl_80860898@l(r18)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806B42B0_00000A38
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806B42B0_00000A38
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B42B0_00000A4C
lbl_fn_806B42B0_00000A38:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B42B0_00000A4C
    li r4, 0x1
    b lbl_fn_806B42B0_00000A50
lbl_fn_806B42B0_00000A4C:
    li r4, 0x0
lbl_fn_806B42B0_00000A50:
    neg r0, r4
    addi r3, r1, 0x2c
    or r0, r0, r4
    addi r5, r30, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x6c
    addi r4, r1, 0x2c
    addi r5, r1, 0x60
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x60
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r18, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r18)
    cntlzw r0, r3
    srwi r17, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r18)
    mr r7, r3
    lwz r12, 0x8a0(r18)
    mr r5, r17
    subi r0, r4, 0x2
    lwz r8, 0x8a4(r18)
    cntlzw r0, r0
    li r3, 0x9
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
    b lbl_fn_806B42B0_00000E48
lbl_fn_806B42B0_00000AE4:
    mr r4, r20
    mr r5, r16
    bl fn_806A9CA0
    lwz r0, lbl_80860140@l(r17)
    add r3, r0, r16
    stb r31, -0x1(r3)
lbl_fn_806B42B0_00000AFC:
    mr r4, r19
    mr r5, r21
    mr r6, r22
    li r3, 0x0
    bl fn_806BBBA0
    lis r4, lbl_80860898@ha
    cmpwi r28, 0x0
    lwz r3, lbl_80860898@l(r4)
    stw r23, 0x8a8(r3)
    lwz r3, lbl_80860898@l(r4)
    stw r24, 0x8ac(r3)
    lwz r3, lbl_80860898@l(r4)
    stw r25, 0x8b0(r3)
    lwz r3, lbl_80860898@l(r4)
    stw r26, 0x8b4(r3)
    lwz r3, lbl_80860898@l(r4)
    stw r18, 0x8e0(r3)
    lwz r3, lbl_80860898@l(r4)
    stw r27, 0x8e8(r3)
    beq lbl_fn_806B42B0_00000B64
    lwz r3, lbl_80860898@l(r4)
    mr r4, r28
    li r5, 0x4
    addi r3, r3, 0x8ec
    bl memcpy
    b lbl_fn_806B42B0_00000B78
lbl_fn_806B42B0_00000B64:
    lwz r3, lbl_80860898@l(r4)
    li r4, 0x0
    li r5, 0x4
    addi r3, r3, 0x8ec
    bl memset
lbl_fn_806B42B0_00000B78:
    lis r4, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r4)
    stw r29, 0x8f0(r3)
    lwz r3, lbl_80860898@l(r4)
    lwz r20, 0x744(r3)
    cmpwi r20, 0x16
    beq lbl_fn_806B42B0_00000C34
    lis r19, lbl_80860890@ha
    addi r18, r19, lbl_80860890@l
    lwz r17, lbl_80860890@l(r19)
    lwz r21, 0x4(r18)
    bl OSGetTime
    stw r4, 0x4(r18)
    lis r18, 0x1062
    lis r6, 0x8000
    subfc r4, r21, r4
    stw r3, lbl_80860890@l(r19)
    addi r7, r18, 0x4dd3
    subfe r3, r17, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r18, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r20, 2
    lwz r8, 0x58(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r30, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806B42B0_00000C34:
    lis r4, lbl_80860898@ha
    li r0, 0x16
    lwz r3, lbl_80860898@l(r4)
    stw r0, 0x744(r3)
    lwz r17, lbl_80860898@l(r4)
    lwz r0, 0x704(r17)
    cmpwi r0, 0x0
    bne lbl_fn_806B42B0_00000C88
    lwz r3, 0x7b4(r17)
    li r0, 0x0
    lis r10, fn_806C6750@ha
    li r6, 0x0
    stw r0, 0x8(r1)
    mr r4, r3
    addi r10, r10, fn_806C6750@l
    li r7, 0x14
    lwz r5, 0x7b8(r17)
    li r8, 0x1
    li r9, 0x0
    bl fn_806FF920
    stw r3, 0x704(r17)
lbl_fn_806B42B0_00000C88:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r0, 0x704(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B42B0_00000CAC
    li r3, 0x5
    bl fn_806C5EB0
    cmpwi r3, 0x0
    bne lbl_fn_806B42B0_00000E48
lbl_fn_806B42B0_00000CAC:
    lis r18, lbl_80860898@ha
    addi r3, r1, 0x20
    lwz r6, lbl_80860898@l(r18)
    addi r5, r30, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x60
    addi r4, r1, 0x20
    addi r5, r1, 0x38
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r18)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B42B0_00000D04
    cmpwi r6, 0x0
    bne lbl_fn_806B42B0_00000D04
    li r6, 0x1
lbl_fn_806B42B0_00000D04:
    addi r3, r1, 0x20
    addi r5, r30, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x64
    addi r4, r1, 0x20
    addi r5, r1, 0x38
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x20
    addi r5, r30, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x68
    addi r4, r1, 0x20
    addi r5, r1, 0x38
    li r6, 0x2f
    bl fn_806AB980
    lis r18, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r18)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B42B0_00000D74
    li r4, 0x0
    b lbl_fn_806B42B0_00000DC0
lbl_fn_806B42B0_00000D74:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806B42B0_00000DBC
    lwz r3, lbl_80860898@l(r18)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806B42B0_00000DA8
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806B42B0_00000DA8
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B42B0_00000DBC
lbl_fn_806B42B0_00000DA8:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B42B0_00000DBC
    li r4, 0x1
    b lbl_fn_806B42B0_00000DC0
lbl_fn_806B42B0_00000DBC:
    li r4, 0x0
lbl_fn_806B42B0_00000DC0:
    neg r0, r4
    addi r3, r1, 0x20
    or r0, r0, r4
    addi r5, r30, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x6c
    addi r4, r1, 0x20
    addi r5, r1, 0x38
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x38
    li r3, 0x3
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r3)
    lwz r3, 0x10(r4)
    cmpwi r3, 0x0
    bne lbl_fn_806B42B0_00000E2C
    lwz r3, 0x7a8(r4)
    bl fn_806B40C0
    cmpwi r3, 0x0
    beq lbl_fn_806B42B0_00000E30
    b lbl_fn_806B42B0_00000E48
lbl_fn_806B42B0_00000E2C:
    bl fn_806EF8B0
lbl_fn_806B42B0_00000E30:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r3, 0x7a8(r3)
    bl fn_806BC010
    bl fn_806C5EB0
    cmpwi r3, 0x0
lbl_fn_806B42B0_00000E48:
    addi r11, r1, 0x4d0
    bl _restgpr_16
    lwz r0, 0x4d4(r1)
    mtlr r0
    addi r1, r1, 0x4d0
    blr
}

asm void fn_806B4940(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_25
    lis r31, lbl_807BE9D0@ha
    lwz r26, 0x78(r1)
    mr r25, r3
    mr r30, r7
    mr r29, r8
    mr r28, r9
    mr r27, r10
    addi r31, r31, lbl_807BE9D0@l
    li r3, 0x2
    bl fn_806BBBA0
    lis r4, lbl_80860898@ha
    cmpwi r27, 0x0
    lwz r3, lbl_80860898@l(r4)
    stw r30, 0x8a8(r3)
    lwz r3, lbl_80860898@l(r4)
    stw r29, 0x8ac(r3)
    lwz r3, lbl_80860898@l(r4)
    stw r25, 0x8e0(r3)
    lwz r3, lbl_80860898@l(r4)
    stw r28, 0x8e8(r3)
    beq lbl_fn_806B4940_00000EE0
    lwz r3, lbl_80860898@l(r4)
    mr r4, r27
    li r5, 0x4
    addi r3, r3, 0x8ec
    bl memcpy
    b lbl_fn_806B4940_00000EF4
lbl_fn_806B4940_00000EE0:
    lwz r3, lbl_80860898@l(r4)
    li r4, 0x0
    li r5, 0x4
    addi r3, r3, 0x8ec
    bl memset
lbl_fn_806B4940_00000EF4:
    lis r4, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r4)
    stw r26, 0x8f0(r3)
    lwz r3, lbl_80860898@l(r4)
    lwz r28, 0x744(r3)
    cmpwi r28, 0x16
    beq lbl_fn_806B4940_00000FB0
    lis r29, lbl_80860890@ha
    addi r30, r29, lbl_80860890@l
    lwz r27, lbl_80860890@l(r29)
    lwz r26, 0x4(r30)
    bl OSGetTime
    stw r4, 0x4(r30)
    lis r30, 0x1062
    lis r6, 0x8000
    subfc r4, r26, r4
    stw r3, lbl_80860890@l(r29)
    addi r7, r30, 0x4dd3
    subfe r3, r27, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r30, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r28, 2
    lwz r8, 0x58(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r31, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806B4940_00000FB0:
    lis r30, lbl_80860898@ha
    li r0, 0x16
    lwz r6, lbl_80860898@l(r30)
    addi r3, r1, 0x10
    addi r5, r31, 0x5c
    li r4, 0xc
    stw r0, 0x744(r6)
    lwz r6, lbl_80860898@l(r30)
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x60
    addi r4, r1, 0x10
    addi r5, r1, 0x1c
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r30)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B4940_00001014
    cmpwi r6, 0x0
    bne lbl_fn_806B4940_00001014
    li r6, 0x1
lbl_fn_806B4940_00001014:
    addi r3, r1, 0x10
    addi r5, r31, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x64
    addi r4, r1, 0x10
    addi r5, r1, 0x1c
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x10
    addi r5, r31, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x68
    addi r4, r1, 0x10
    addi r5, r1, 0x1c
    li r6, 0x2f
    bl fn_806AB980
    lis r30, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r30)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B4940_00001084
    li r4, 0x0
    b lbl_fn_806B4940_000010D0
lbl_fn_806B4940_00001084:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806B4940_000010CC
    lwz r3, lbl_80860898@l(r30)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806B4940_000010B8
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806B4940_000010B8
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B4940_000010CC
lbl_fn_806B4940_000010B8:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B4940_000010CC
    li r4, 0x1
    b lbl_fn_806B4940_000010D0
lbl_fn_806B4940_000010CC:
    li r4, 0x0
lbl_fn_806B4940_000010D0:
    neg r0, r4
    addi r3, r1, 0x10
    or r0, r0, r4
    addi r5, r31, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x6c
    addi r4, r1, 0x10
    addi r5, r1, 0x1c
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x1c
    li r3, 0x6
    li r5, 0x0
    bl fn_806ACE00
    bl fn_806C5C10
    cmpwi r3, 0x0
    bne lbl_fn_806B4940_0000121C
    lis r4, lbl_80860898@ha
    li r0, 0x2
    lwz r3, lbl_80860898@l(r4)
    stb r0, 0x16(r3)
    lwz r3, lbl_80860898@l(r4)
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806B4940_00001144
    bl fn_806EF8B0
lbl_fn_806B4940_00001144:
    lis r4, lbl_80860898@ha
    li r0, 0x1
    lwz r3, lbl_80860898@l(r4)
    stw r0, 0x8f4(r3)
    lwz r3, lbl_80860898@l(r4)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B4940_00001174
    lwz r3, 0x7a8(r3)
    bl fn_806B40C0
    cmpwi r3, 0x0
    bne lbl_fn_806B4940_0000121C
lbl_fn_806B4940_00001174:
    lis r30, lbl_80860898@ha
    lis r3, 0x99
    lwz r26, lbl_80860898@l(r30)
    subi r3, r3, 0x6980
    bl fn_806ABB70
    addis r3, r3, 0x5f6
    lwz r0, 0x7a8(r26)
    subi r26, r3, 0x1f00
    addi r4, r31, 0x258
    add r26, r0, r26
    li r3, 0x1
    mr r5, r26
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r30)
    stw r26, 0x8c0(r3)
    lwz r26, lbl_80860898@l(r30)
    lwz r0, 0x704(r26)
    cmpwi r0, 0x0
    bne lbl_fn_806B4940_000011F8
    lwz r3, 0x7b4(r26)
    li r0, 0x0
    lis r10, fn_806C6750@ha
    li r6, 0x0
    stw r0, 0x8(r1)
    mr r4, r3
    addi r10, r10, fn_806C6750@l
    li r7, 0x14
    lwz r5, 0x7b8(r26)
    li r8, 0x1
    li r9, 0x0
    bl fn_806FF920
    stw r3, 0x704(r26)
lbl_fn_806B4940_000011F8:
    lis r31, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r31)
    lwz r3, 0x10(r3)
    bl fn_806EF8B0
    lwz r3, lbl_80860898@l(r31)
    lwz r3, 0x7a8(r3)
    bl fn_806BC010
    bl fn_806C5EB0
    cmpwi r3, 0x0
lbl_fn_806B4940_0000121C:
    addi r11, r1, 0x70
    bl _restgpr_25
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_806B4D20(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x120
    bl _savegpr_17
    lis r11, lbl_80860898@ha
    lis r30, lbl_807BE9D0@ha
    lwz r11, lbl_80860898@l(r11)
    mr r22, r3
    lwz r28, 0x128(r1)
    mr r23, r4
    lwz r0, 0x8c8(r11)
    mr r24, r7
    mr r25, r8
    mr r26, r9
    cmpwi r0, 0x0
    mr r27, r10
    addi r30, r30, lbl_807BE9D0@l
    beq lbl_fn_806B4D20_00001398
    lwz r17, 0x58(r11)
    mr r18, r11
    lwz r20, 0x660(r11)
    li r19, 0x0
    lwz r21, 0x664(r11)
    lwz r31, 0x668(r11)
    lwz r29, 0x66c(r11)
    lwz r12, 0x670(r11)
    lwz r10, 0x674(r11)
    lwz r9, 0x678(r11)
    lwz r8, 0x67c(r11)
    lwz r7, 0x680(r11)
    lwz r4, 0x684(r11)
    lwz r3, 0x688(r11)
    lwz r0, 0x68c(r11)
    stw r20, 0xa8(r1)
    lwz r20, 0x7a8(r11)
    stw r21, 0xac(r1)
    stw r31, 0xb0(r1)
    stw r29, 0xb4(r1)
    stw r12, 0xb8(r1)
    stw r10, 0xbc(r1)
    stw r9, 0xc0(r1)
    stw r8, 0xc4(r1)
    stw r7, 0xc8(r1)
    stw r4, 0xcc(r1)
    stw r3, 0xd0(r1)
    stw r0, 0xd4(r1)
    mtctr r17
    cmpwi r17, 0x0
    ble lbl_fn_806B4D20_00001330
lbl_fn_806B4D20_00001308:
    lwz r0, 0x60(r18)
    cmpw r20, r0
    bne lbl_fn_806B4D20_00001324
    mulli r0, r19, 0x30
    add r3, r11, r0
    addi r4, r3, 0x60
    b lbl_fn_806B4D20_00001334
lbl_fn_806B4D20_00001324:
    addi r18, r18, 0x30
    addi r19, r19, 0x1
    bdnz lbl_fn_806B4D20_00001308
lbl_fn_806B4D20_00001330:
    li r4, 0x0
lbl_fn_806B4D20_00001334:
    lwz r3, 0x0(r4)
    lwz r0, 0x4(r4)
    stw r0, 0x7c(r1)
    stw r3, 0x78(r1)
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    stw r0, 0x84(r1)
    stw r3, 0x80(r1)
    lwz r3, 0x10(r4)
    lwz r0, 0x14(r4)
    stw r0, 0x8c(r1)
    stw r3, 0x88(r1)
    lwz r3, 0x18(r4)
    lwz r0, 0x1c(r4)
    stw r0, 0x94(r1)
    stw r3, 0x90(r1)
    lwz r3, 0x20(r4)
    lwz r0, 0x24(r4)
    stw r0, 0x9c(r1)
    stw r3, 0x98(r1)
    lwz r3, 0x28(r4)
    lwz r0, 0x2c(r4)
    stw r0, 0xa4(r1)
    stw r3, 0xa0(r1)
    lbz r29, 0x753(r11)
lbl_fn_806B4D20_00001398:
    li r3, 0x3
    li r4, 0x0
    bl fn_806BBBA0
    lis r31, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r31)
    stw r22, 0x8e0(r3)
    lwz r3, lbl_80860898@l(r31)
    lwz r0, 0x8c8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B4D20_000013FC
    addi r3, r1, 0x48
    li r4, 0x0
    li r5, 0x30
    bl memset
    lwz r3, lbl_80860898@l(r31)
    li r4, 0x0
    li r5, 0x30
    addi r3, r3, 0x660
    bl memset
    lwz r3, lbl_80860898@l(r31)
    li r0, 0xff
    stb r0, 0x676(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r23, 0x660(r3)
    b lbl_fn_806B4D20_000018E0
lbl_fn_806B4D20_000013FC:
    lwz r0, 0xa8(r1)
    stw r0, 0x660(r3)
    lwz r0, 0xac(r1)
    stw r0, 0x664(r3)
    lwz r0, 0xb0(r1)
    stw r0, 0x668(r3)
    lwz r0, 0xb4(r1)
    stw r0, 0x66c(r3)
    lwz r0, 0xb8(r1)
    stw r0, 0x670(r3)
    lwz r0, 0xbc(r1)
    stw r0, 0x674(r3)
    lwz r0, 0xc0(r1)
    stw r0, 0x678(r3)
    lwz r0, 0xc4(r1)
    stw r0, 0x67c(r3)
    lwz r0, 0xc8(r1)
    stw r0, 0x680(r3)
    lwz r0, 0xcc(r1)
    stw r0, 0x684(r3)
    lwz r0, 0xd0(r1)
    stw r0, 0x688(r3)
    lwz r0, 0xd4(r1)
    stw r0, 0x68c(r3)
    lwz r4, 0x58(r3)
    cmpwi r4, 0x20
    beq lbl_fn_806B4D20_000018C0
    cmpwi r4, 0x0
    ble lbl_fn_806B4D20_0000184C
    cmpwi r4, 0x8
    ble lbl_fn_806B4D20_000017C8
    lwz r3, lbl_80860898@l(r31)
    li r0, 0x0
    lwz r3, 0x58(r3)
    cmpwi r3, -0x1
    ble lbl_fn_806B4D20_00001490
    li r0, 0x1
lbl_fn_806B4D20_00001490:
    cmpwi r0, 0x0
    beq lbl_fn_806B4D20_000017C8
    lis r5, lbl_80860898@ha
    subi r0, r4, 0x1
    mulli r3, r4, 0x30
    lwz r5, lbl_80860898@l(r5)
    srwi r0, r0, 3
    add r3, r5, r3
    mtctr r0
    cmpwi r4, 0x8
    ble lbl_fn_806B4D20_000017C8
lbl_fn_806B4D20_000014BC:
    lwz r0, 0x34(r3)
    lwz r5, 0x30(r3)
    stw r5, 0x60(r3)
    stw r0, 0x64(r3)
    lwz r0, 0x3c(r3)
    lwz r5, 0x38(r3)
    stw r5, 0x68(r3)
    stw r0, 0x6c(r3)
    lwz r0, 0x44(r3)
    lwz r5, 0x40(r3)
    stw r5, 0x70(r3)
    stw r0, 0x74(r3)
    lwz r0, 0x4c(r3)
    lwz r5, 0x48(r3)
    stw r5, 0x78(r3)
    stw r0, 0x7c(r3)
    lwz r0, 0x54(r3)
    lwz r5, 0x50(r3)
    stw r5, 0x80(r3)
    stw r0, 0x84(r3)
    lwz r0, 0x5c(r3)
    lwz r5, 0x58(r3)
    stw r5, 0x88(r3)
    stw r0, 0x8c(r3)
    lwz r0, 0x4(r3)
    lwz r5, 0x0(r3)
    stw r5, 0x30(r3)
    stw r0, 0x34(r3)
    lwz r0, 0xc(r3)
    lwz r5, 0x8(r3)
    stw r5, 0x38(r3)
    stw r0, 0x3c(r3)
    lwz r0, 0x14(r3)
    lwz r5, 0x10(r3)
    stw r5, 0x40(r3)
    stw r0, 0x44(r3)
    lwz r0, 0x1c(r3)
    lwz r5, 0x18(r3)
    stw r5, 0x48(r3)
    stw r0, 0x4c(r3)
    lwz r0, 0x24(r3)
    lwz r5, 0x20(r3)
    stw r5, 0x50(r3)
    stw r0, 0x54(r3)
    lwz r0, 0x2c(r3)
    lwz r5, 0x28(r3)
    stw r5, 0x58(r3)
    stw r0, 0x5c(r3)
    lwz r0, -0x2c(r3)
    lwz r5, -0x30(r3)
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, -0x24(r3)
    lwz r5, -0x28(r3)
    stw r5, 0x8(r3)
    stw r0, 0xc(r3)
    lwz r0, -0x1c(r3)
    lwz r5, -0x20(r3)
    stw r5, 0x10(r3)
    stw r0, 0x14(r3)
    lwz r0, -0x14(r3)
    lwz r5, -0x18(r3)
    stw r5, 0x18(r3)
    stw r0, 0x1c(r3)
    lwz r0, -0xc(r3)
    lwz r5, -0x10(r3)
    stw r5, 0x20(r3)
    stw r0, 0x24(r3)
    lwz r0, -0x4(r3)
    lwz r5, -0x8(r3)
    stw r5, 0x28(r3)
    stw r0, 0x2c(r3)
    lwz r0, -0x5c(r3)
    lwz r5, -0x60(r3)
    stw r5, -0x30(r3)
    stw r0, -0x2c(r3)
    lwz r0, -0x54(r3)
    lwz r5, -0x58(r3)
    stw r5, -0x28(r3)
    stw r0, -0x24(r3)
    lwz r0, -0x4c(r3)
    lwz r5, -0x50(r3)
    stw r5, -0x20(r3)
    stw r0, -0x1c(r3)
    lwz r0, -0x44(r3)
    lwz r5, -0x48(r3)
    stw r5, -0x18(r3)
    stw r0, -0x14(r3)
    lwz r0, -0x3c(r3)
    lwz r5, -0x40(r3)
    stw r5, -0x10(r3)
    stw r0, -0xc(r3)
    lwz r0, -0x34(r3)
    lwz r5, -0x38(r3)
    stw r5, -0x8(r3)
    stw r0, -0x4(r3)
    lwz r0, -0x8c(r3)
    lwz r5, -0x90(r3)
    stw r5, -0x60(r3)
    stw r0, -0x5c(r3)
    lwz r0, -0x84(r3)
    lwz r5, -0x88(r3)
    stw r5, -0x58(r3)
    stw r0, -0x54(r3)
    lwz r0, -0x7c(r3)
    lwz r5, -0x80(r3)
    stw r5, -0x50(r3)
    stw r0, -0x4c(r3)
    lwz r0, -0x74(r3)
    lwz r5, -0x78(r3)
    stw r5, -0x48(r3)
    stw r0, -0x44(r3)
    lwz r0, -0x6c(r3)
    lwz r5, -0x70(r3)
    stw r5, -0x40(r3)
    stw r0, -0x3c(r3)
    lwz r0, -0x64(r3)
    lwz r5, -0x68(r3)
    stw r5, -0x38(r3)
    stw r0, -0x34(r3)
    lwz r0, -0xbc(r3)
    subi r4, r4, 0x8
    lwz r5, -0xc0(r3)
    stw r5, -0x90(r3)
    stw r0, -0x8c(r3)
    lwz r0, -0xb4(r3)
    lwz r5, -0xb8(r3)
    stw r5, -0x88(r3)
    stw r0, -0x84(r3)
    lwz r0, -0xac(r3)
    lwz r5, -0xb0(r3)
    stw r5, -0x80(r3)
    stw r0, -0x7c(r3)
    lwz r0, -0xa4(r3)
    lwz r5, -0xa8(r3)
    stw r5, -0x78(r3)
    stw r0, -0x74(r3)
    lwz r0, -0x9c(r3)
    lwz r5, -0xa0(r3)
    stw r5, -0x70(r3)
    stw r0, -0x6c(r3)
    lwz r0, -0x94(r3)
    lwz r5, -0x98(r3)
    stw r5, -0x68(r3)
    stw r0, -0x64(r3)
    lwz r0, -0xec(r3)
    lwz r5, -0xf0(r3)
    stw r5, -0xc0(r3)
    stw r0, -0xbc(r3)
    lwz r0, -0xe4(r3)
    lwz r5, -0xe8(r3)
    stw r5, -0xb8(r3)
    stw r0, -0xb4(r3)
    lwz r0, -0xdc(r3)
    lwz r5, -0xe0(r3)
    stw r5, -0xb0(r3)
    stw r0, -0xac(r3)
    lwz r0, -0xd4(r3)
    lwz r5, -0xd8(r3)
    stw r5, -0xa8(r3)
    stw r0, -0xa4(r3)
    lwz r0, -0xcc(r3)
    lwz r5, -0xd0(r3)
    stw r5, -0xa0(r3)
    stw r0, -0x9c(r3)
    lwz r0, -0xc4(r3)
    lwz r5, -0xc8(r3)
    stw r5, -0x98(r3)
    stw r0, -0x94(r3)
    lwz r0, -0x11c(r3)
    lwz r5, -0x120(r3)
    stw r5, -0xf0(r3)
    stw r0, -0xec(r3)
    lwz r0, -0x114(r3)
    lwz r5, -0x118(r3)
    stw r5, -0xe8(r3)
    stw r0, -0xe4(r3)
    lwz r0, -0x10c(r3)
    lwz r5, -0x110(r3)
    stw r5, -0xe0(r3)
    stw r0, -0xdc(r3)
    lwz r0, -0x104(r3)
    lwz r5, -0x108(r3)
    stw r5, -0xd8(r3)
    stw r0, -0xd4(r3)
    lwz r0, -0xfc(r3)
    lwz r5, -0x100(r3)
    stw r5, -0xd0(r3)
    stw r0, -0xcc(r3)
    lwz r0, -0xf4(r3)
    lwz r5, -0xf8(r3)
    stw r5, -0xc8(r3)
    stw r0, -0xc4(r3)
    subi r3, r3, 0x180
    bdnz lbl_fn_806B4D20_000014BC
lbl_fn_806B4D20_000017C8:
    lis r3, lbl_80860898@ha
    mulli r0, r4, 0x30
    lwz r3, lbl_80860898@l(r3)
    add r5, r3, r0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_806B4D20_0000184C
lbl_fn_806B4D20_000017E4:
    lwz r0, 0x34(r5)
    lwz r3, 0x30(r5)
    stw r3, 0x60(r5)
    stw r0, 0x64(r5)
    lwz r0, 0x3c(r5)
    lwz r3, 0x38(r5)
    stw r3, 0x68(r5)
    stw r0, 0x6c(r5)
    lwz r0, 0x44(r5)
    lwz r3, 0x40(r5)
    stw r3, 0x70(r5)
    stw r0, 0x74(r5)
    lwz r0, 0x4c(r5)
    lwz r3, 0x48(r5)
    stw r3, 0x78(r5)
    stw r0, 0x7c(r5)
    lwz r0, 0x54(r5)
    lwz r3, 0x50(r5)
    stw r3, 0x80(r5)
    stw r0, 0x84(r5)
    lwz r0, 0x5c(r5)
    lwz r3, 0x58(r5)
    stw r3, 0x88(r5)
    stw r0, 0x8c(r5)
    subi r5, r5, 0x30
    bdnz lbl_fn_806B4D20_000017E4
lbl_fn_806B4D20_0000184C:
    lis r3, lbl_80860898@ha
    lwz r0, 0x7c(r1)
    lwz r4, lbl_80860898@l(r3)
    lwz r3, 0x78(r1)
    stw r3, 0x60(r4)
    stw r0, 0x64(r4)
    lwz r0, 0x84(r1)
    lwz r3, 0x80(r1)
    stw r3, 0x68(r4)
    stw r0, 0x6c(r4)
    lwz r0, 0x8c(r1)
    lwz r3, 0x88(r1)
    stw r3, 0x70(r4)
    stw r0, 0x74(r4)
    lwz r0, 0x94(r1)
    lwz r3, 0x90(r1)
    stw r3, 0x78(r4)
    stw r0, 0x7c(r4)
    lwz r0, 0x9c(r1)
    lwz r3, 0x98(r1)
    stw r3, 0x80(r4)
    stw r0, 0x84(r4)
    lwz r0, 0xa4(r1)
    lwz r3, 0xa0(r1)
    stw r3, 0x88(r4)
    stw r0, 0x8c(r4)
    lwz r3, 0x58(r4)
    addi r0, r3, 0x1
    stw r0, 0x58(r4)
lbl_fn_806B4D20_000018C0:
    lis r22, lbl_80860898@ha
    addi r4, r1, 0xa0
    lwz r3, lbl_80860898@l(r22)
    li r5, 0x4
    addi r3, r3, 0x8ec
    bl fn_806A9CA0
    lwz r3, lbl_80860898@l(r22)
    stb r29, 0x753(r3)
lbl_fn_806B4D20_000018E0:
    lis r4, lbl_80860898@ha
    cmpwi r27, 0x0
    lwz r3, lbl_80860898@l(r4)
    stw r24, 0x8a8(r3)
    lwz r3, lbl_80860898@l(r4)
    stw r25, 0x8ac(r3)
    lwz r3, lbl_80860898@l(r4)
    stw r26, 0x8e8(r3)
    beq lbl_fn_806B4D20_0000191C
    lwz r3, lbl_80860898@l(r4)
    mr r4, r27
    li r5, 0x4
    addi r3, r3, 0x8ec
    bl memcpy
    b lbl_fn_806B4D20_00001930
lbl_fn_806B4D20_0000191C:
    lwz r3, lbl_80860898@l(r4)
    li r4, 0x0
    li r5, 0x4
    addi r3, r3, 0x8ec
    bl memset
lbl_fn_806B4D20_00001930:
    lis r5, lbl_80860898@ha
    li r4, 0x1
    lwz r3, lbl_80860898@l(r5)
    stw r28, 0x8f0(r3)
    lwz r3, lbl_80860898@l(r5)
    stb r4, 0x18(r3)
    lwz r3, lbl_80860898@l(r5)
    lwz r0, 0x7a8(r3)
    stw r0, 0x700(r3)
    lwz r3, lbl_80860898@l(r5)
    stb r4, 0x16(r3)
    lwz r3, lbl_80860898@l(r5)
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806B4D20_00001970
    bl fn_806EF8B0
lbl_fn_806B4D20_00001970:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r0, 0x8c8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B4D20_00001A40
    lwz r25, 0x744(r3)
    cmpwi r25, 0x16
    beq lbl_fn_806B4D20_00001A30
    lis r24, lbl_80860890@ha
    addi r22, r24, lbl_80860890@l
    lwz r19, lbl_80860890@l(r24)
    lwz r20, 0x4(r22)
    bl OSGetTime
    stw r4, 0x4(r22)
    lis r22, 0x1062
    lis r6, 0x8000
    subfc r4, r20, r4
    stw r3, lbl_80860890@l(r24)
    addi r7, r22, 0x4dd3
    subfe r3, r19, r3
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
    lwz r8, 0x58(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r30, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806B4D20_00001A30:
    lis r3, lbl_80860898@ha
    li r0, 0x16
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
lbl_fn_806B4D20_00001A40:
    lis r3, lbl_80860898@ha
    lwz r17, lbl_80860898@l(r3)
    lwz r0, 0x704(r17)
    cmpwi r0, 0x0
    bne lbl_fn_806B4D20_00001A88
    lwz r3, 0x7b4(r17)
    li r0, 0x0
    lis r10, fn_806C6750@ha
    li r6, 0x0
    stw r0, 0x8(r1)
    mr r4, r3
    addi r10, r10, fn_806C6750@l
    li r7, 0x14
    lwz r5, 0x7b8(r17)
    li r8, 0x1
    li r9, 0x0
    bl fn_806FF920
    stw r3, 0x704(r17)
lbl_fn_806B4D20_00001A88:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r0, 0x704(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B4D20_00001AAC
    li r3, 0x5
    bl fn_806C5EB0
    cmpwi r3, 0x0
    bne lbl_fn_806B4D20_00001D5C
lbl_fn_806B4D20_00001AAC:
    lis r22, lbl_80860898@ha
    addi r3, r1, 0x10
    lwz r6, lbl_80860898@l(r22)
    addi r5, r30, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x60
    addi r4, r1, 0x10
    addi r5, r1, 0x1c
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r22)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B4D20_00001B04
    cmpwi r6, 0x0
    bne lbl_fn_806B4D20_00001B04
    li r6, 0x1
lbl_fn_806B4D20_00001B04:
    addi r3, r1, 0x10
    addi r5, r30, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x64
    addi r4, r1, 0x10
    addi r5, r1, 0x1c
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x10
    addi r5, r30, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x68
    addi r4, r1, 0x10
    addi r5, r1, 0x1c
    li r6, 0x2f
    bl fn_806AB980
    lis r22, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r22)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B4D20_00001B74
    li r4, 0x0
    b lbl_fn_806B4D20_00001BC0
lbl_fn_806B4D20_00001B74:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806B4D20_00001BBC
    lwz r3, lbl_80860898@l(r22)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806B4D20_00001BA8
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806B4D20_00001BA8
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B4D20_00001BBC
lbl_fn_806B4D20_00001BA8:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B4D20_00001BBC
    li r4, 0x1
    b lbl_fn_806B4D20_00001BC0
lbl_fn_806B4D20_00001BBC:
    li r4, 0x0
lbl_fn_806B4D20_00001BC0:
    neg r0, r4
    addi r3, r1, 0x10
    or r0, r0, r4
    addi r5, r30, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x6c
    addi r4, r1, 0x10
    addi r5, r1, 0x1c
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x1c
    li r3, 0x5
    li r5, 0x0
    bl fn_806ACE00
    bl fn_806C5C10
    cmpwi r3, 0x0
    bne lbl_fn_806B4D20_00001D5C
    lis r3, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r3)
    lwz r3, 0x10(r4)
    cmpwi r3, 0x0
    bne lbl_fn_806B4D20_00001C38
    lwz r3, 0x7a8(r4)
    bl fn_806B40C0
    cmpwi r3, 0x0
    beq lbl_fn_806B4D20_00001C3C
    b lbl_fn_806B4D20_00001D5C
lbl_fn_806B4D20_00001C38:
    bl fn_806EF8B0
lbl_fn_806B4D20_00001C3C:
    lis r22, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r22)
    lwz r0, 0x8c8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B4D20_00001C68
    lwz r3, 0x7a8(r3)
    bl fn_806BC010
    bl fn_806C5EB0
    cmpwi r3, 0x0
    beq lbl_fn_806B4D20_00001D5C
    b lbl_fn_806B4D20_00001D5C
lbl_fn_806B4D20_00001C68:
    lwz r3, 0x10(r3)
    bl fn_806EF8B0
    lwz r3, lbl_80860898@l(r22)
    lwz r25, 0x744(r3)
    cmpwi r25, 0x3
    beq lbl_fn_806B4D20_00001D20
    lis r24, lbl_80860890@ha
    addi r22, r24, lbl_80860890@l
    lwz r19, lbl_80860890@l(r24)
    lwz r20, 0x4(r22)
    bl OSGetTime
    stw r4, 0x4(r22)
    lis r22, 0x1062
    lis r6, 0x8000
    subfc r4, r20, r4
    stw r3, lbl_80860890@l(r24)
    addi r7, r22, 0x4dd3
    subfe r3, r19, r3
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
    lwz r8, 0xc(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r30, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806B4D20_00001D20:
    lis r22, lbl_80860898@ha
    li r0, 0x3
    lwz r5, lbl_80860898@l(r22)
    mr r3, r23
    li r4, 0x0
    stw r0, 0x744(r5)
    bl fn_806C05F0
    lwz r4, lbl_80860898@l(r22)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806B4D20_00001D54
    bl fn_806C5EB0
    b lbl_fn_806B4D20_00001D58
lbl_fn_806B4D20_00001D54:
    bl fn_806C5C10
lbl_fn_806B4D20_00001D58:
    cmpwi r3, 0x0
lbl_fn_806B4D20_00001D5C:
    addi r11, r1, 0x120
    bl _restgpr_17
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_806B5860(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    stw r0, 0x1d4(r1)
    addi r11, r1, 0x1d0
    bl _savegpr_24
    lis r28, lbl_80860898@ha
    lis r26, lbl_80860140@ha
    lwz r0, lbl_80860898@l(r28)
    lis r27, lbl_807BE9D0@ha
    mr r24, r3
    addi r26, r26, lbl_80860140@l
    cmpwi r0, 0x0
    addi r27, r27, lbl_807BE9D0@l
    beq lbl_fn_806B5860_00004934
    bl fn_806A7110
    cmpwi r3, 0x0
    beq lbl_fn_806B5860_00001DC8
    b lbl_fn_806B5860_00004934
lbl_fn_806B5860_00001DC8:
    cmpwi r24, 0x0
    bne lbl_fn_806B5860_00001E04
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806B5860_00001DE4
    bl fn_806EF5B0
lbl_fn_806B5860_00001DE4:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806B5860_00004934
    lwz r3, 0x0(r3)
    bl fn_806EA8A0
    b lbl_fn_806B5860_00004934
lbl_fn_806B5860_00001E04:
    lwz r31, lbl_80860898@l(r28)
    lwz r4, 0x744(r31)
    cmpwi r4, 0x0
    beq lbl_fn_806B5860_00004934
    cmplwi r4, 0x16
    bgt lbl_fn_806B5860_0000419C
    lis r3, jumptable_807BF044@ha
    slwi r0, r4, 2
    addi r3, r3, jumptable_807BF044@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r0, 0x770(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806B5860_000024A8
    bl OSGetTime
    lis r30, 0x8000
    lis r29, 0x1062
    lwz r0, 0xf8(r30)
    addi r6, r29, 0x4dd3
    lwz r8, 0x77c(r31)
    li r5, 0x0
    srwi r0, r0, 2
    lwz r7, 0x778(r31)
    mulhwu r0, r6, r0
    subfc r4, r8, r4
    lwz r31, lbl_80860898@l(r28)
    subfe r3, r7, r3
    srwi r6, r0, 6
    bl __div2i
    lwz r7, 0x770(r31)
    li r6, 0x0
    xoris r5, r3, 0x8000
    xoris r0, r6, 0x8000
    subfc r3, r4, r7
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_806B5860_000024A8
    stw r6, 0x770(r31)
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x8c8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806B5860_000020E8
    lbz r6, 0x8e6(r3)
    cmpwi r6, 0x0
    beq lbl_fn_806B5860_00001ED4
    lbz r5, 0x753(r3)
    addi r4, r27, 0x270
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
lbl_fn_806B5860_00001ED4:
    lis r26, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r26)
    lbz r3, 0x753(r4)
    addi r0, r3, 0x1
    stb r0, 0x753(r4)
    lwz r4, lbl_80860898@l(r26)
    lbz r3, 0x753(r4)
    lbz r0, 0x8e6(r4)
    cmplw r3, r0
    ble lbl_fn_806B5860_000020DC
    cmpwi r4, 0x0
    beq lbl_fn_806B5860_00004934
    li r0, 0x1
    stb r0, 0x751(r4)
    lwz r3, lbl_80860898@l(r26)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r26)
    li r0, 0x0
    lis r4, 0xffff
    li r3, 0x19
    stb r0, 0x751(r5)
    subi r4, r4, 0x3a30
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r26)
    addi r3, r1, 0x5c
    addi r5, r27, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x60
    addi r4, r1, 0x5c
    addi r5, r1, 0x180
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r26)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B5860_00001F8C
    cmpwi r6, 0x0
    bne lbl_fn_806B5860_00001F8C
    li r6, 0x1
lbl_fn_806B5860_00001F8C:
    addi r3, r1, 0x5c
    addi r5, r27, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x64
    addi r4, r1, 0x5c
    addi r5, r1, 0x180
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x5c
    addi r5, r27, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x68
    addi r4, r1, 0x5c
    addi r5, r1, 0x180
    li r6, 0x2f
    bl fn_806AB980
    lis r26, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r26)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_00001FFC
    li r4, 0x0
    b lbl_fn_806B5860_00002048
lbl_fn_806B5860_00001FFC:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806B5860_00002044
    lwz r3, lbl_80860898@l(r26)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806B5860_00002030
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806B5860_00002030
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B5860_00002044
lbl_fn_806B5860_00002030:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_00002044
    li r4, 0x1
    b lbl_fn_806B5860_00002048
lbl_fn_806B5860_00002044:
    li r4, 0x0
lbl_fn_806B5860_00002048:
    neg r0, r4
    addi r3, r1, 0x5c
    or r0, r0, r4
    addi r5, r27, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x6c
    addi r4, r1, 0x5c
    addi r5, r1, 0x180
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x180
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r25, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r25)
    cntlzw r0, r3
    srwi r24, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r25)
    mr r7, r3
    lwz r12, 0x8a0(r25)
    mr r5, r24
    subi r0, r4, 0x2
    lwz r8, 0x8a4(r25)
    cntlzw r0, r0
    li r3, 0x19
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
    b lbl_fn_806B5860_00004934
lbl_fn_806B5860_000020DC:
    li r3, 0x0
    bl fn_806C0C20
    b lbl_fn_806B5860_00004934
lbl_fn_806B5860_000020E8:
    bl fn_806CD150
    cmpwi r3, 0x1
    bne lbl_fn_806B5860_000021BC
    addi r4, r27, 0x2a0
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r28)
    lwz r31, 0x744(r3)
    cmpwi r31, 0x1
    beq lbl_fn_806B5860_000021A8
    addi r28, r26, 0x750
    lwz r25, 0x750(r26)
    lwz r24, 0x4(r28)
    bl OSGetTime
    stw r4, 0x4(r28)
    addi r6, r29, 0x4dd3
    subfc r4, r24, r4
    li r5, 0x0
    stw r3, 0x750(r26)
    subfe r3, r25, r3
    lwz r0, 0xf8(r30)
    srwi r0, r0, 2
    mulhwu r0, r6, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r29, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r31, 2
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
lbl_fn_806B5860_000021A8:
    lis r3, lbl_80860898@ha
    li r0, 0x1
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
    b lbl_fn_806B5860_0000419C
lbl_fn_806B5860_000021BC:
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    bne lbl_fn_806B5860_00002428
    lbz r6, 0x8e6(r3)
    cmpwi r6, 0x0
    beq lbl_fn_806B5860_000021EC
    lbz r5, 0x753(r3)
    addi r4, r27, 0x2bc
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
lbl_fn_806B5860_000021EC:
    lis r28, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r28)
    lbz r3, 0x753(r4)
    addi r0, r3, 0x1
    stb r0, 0x753(r4)
    lwz r4, lbl_80860898@l(r28)
    lbz r3, 0x753(r4)
    lbz r0, 0x8e6(r4)
    cmplw r3, r0
    ble lbl_fn_806B5860_000023F4
    cmpwi r4, 0x0
    beq lbl_fn_806B5860_00004934
    li r0, 0x1
    stb r0, 0x751(r4)
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r28)
    li r0, 0x0
    lis r4, 0xffff
    li r3, 0x19
    stb r0, 0x751(r5)
    subi r4, r4, 0x3a2e
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r28)
    addi r3, r1, 0x50
    addi r5, r27, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x60
    addi r4, r1, 0x50
    addi r5, r1, 0x158
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B5860_000022A4
    cmpwi r6, 0x0
    bne lbl_fn_806B5860_000022A4
    li r6, 0x1
lbl_fn_806B5860_000022A4:
    addi r3, r1, 0x50
    addi r5, r27, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x64
    addi r4, r1, 0x50
    addi r5, r1, 0x158
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x50
    addi r5, r27, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x68
    addi r4, r1, 0x50
    addi r5, r1, 0x158
    li r6, 0x2f
    bl fn_806AB980
    lis r26, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r26)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_00002314
    li r4, 0x0
    b lbl_fn_806B5860_00002360
lbl_fn_806B5860_00002314:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806B5860_0000235C
    lwz r3, lbl_80860898@l(r26)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806B5860_00002348
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806B5860_00002348
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B5860_0000235C
lbl_fn_806B5860_00002348:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_0000235C
    li r4, 0x1
    b lbl_fn_806B5860_00002360
lbl_fn_806B5860_0000235C:
    li r4, 0x0
lbl_fn_806B5860_00002360:
    neg r0, r4
    addi r3, r1, 0x50
    or r0, r0, r4
    addi r5, r27, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x6c
    addi r4, r1, 0x50
    addi r5, r1, 0x158
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x158
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r25, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r25)
    cntlzw r0, r3
    srwi r24, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r25)
    mr r7, r3
    lwz r12, 0x8a0(r25)
    mr r5, r24
    subi r0, r4, 0x2
    lwz r8, 0x8a4(r25)
    cntlzw r0, r0
    li r3, 0x19
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
    b lbl_fn_806B5860_00004934
lbl_fn_806B5860_000023F4:
    lwz r3, 0x660(r4)
    li r4, 0x0
    bl fn_806C05F0
    lwz r4, lbl_80860898@l(r28)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_00002418
    bl fn_806C5EB0
    b lbl_fn_806B5860_0000241C
lbl_fn_806B5860_00002418:
    bl fn_806C5C10
lbl_fn_806B5860_0000241C:
    cmpwi r3, 0x0
    beq lbl_fn_806B5860_000024A8
    b lbl_fn_806B5860_00004934
lbl_fn_806B5860_00002428:
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    bne lbl_fn_806B5860_00002470
    lwz r5, 0x660(r3)
    addi r4, r27, 0x2e4
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r28)
    li r4, 0x0
    li r5, 0x30
    addi r3, r3, 0x660
    bl memset
    li r3, 0x0
    bl fn_806C0C20
    cmpwi r3, 0x0
    bne lbl_fn_806B5860_000024A8
    b lbl_fn_806B5860_00004934
lbl_fn_806B5860_00002470:
    lwz r5, 0x660(r3)
    addi r4, r27, 0x31c
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r28)
    li r4, 0x0
    li r5, 0x30
    addi r3, r3, 0x660
    bl memset
    li r3, 0x0
    bl fn_806C0C20
    cmpwi r3, 0x0
    beq lbl_fn_806B5860_00004934
lbl_fn_806B5860_000024A8:
    lis r29, lbl_80860898@ha
    lwz r24, lbl_80860898@l(r29)
    lwz r0, 0x760(r24)
    cmpwi r0, 0x0
    beq lbl_fn_806B5860_0000419C
    bl OSGetTime
    lis r6, 0x8000
    lwz r8, 0x76c(r24)
    lwz r0, 0xf8(r6)
    lis r5, 0x1062
    addi r6, r5, 0x4dd3
    lwz r7, 0x768(r24)
    srwi r0, r0, 2
    subfc r4, r8, r4
    mulhwu r0, r6, r0
    li r5, 0x0
    subfe r3, r7, r3
    srwi r6, r0, 6
    bl __div2i
    li r5, 0x0
    li r6, 0xbb8
    xoris r0, r3, 0x8000
    xoris r5, r5, 0x8000
    subfc r3, r6, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_fn_806B5860_0000419C
    lwz r3, lbl_80860898@l(r29)
    li r4, 0x0
    lwz r3, 0x660(r3)
    bl fn_806C05F0
    lwz r4, lbl_80860898@l(r29)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_00002540
    bl fn_806C5EB0
    b lbl_fn_806B5860_00002544
lbl_fn_806B5860_00002540:
    bl fn_806C5C10
lbl_fn_806B5860_00002544:
    cmpwi r3, 0x0
    beq lbl_fn_806B5860_0000419C
    b lbl_fn_806B5860_00004934
    lwz r0, 0x708(r31)
    cmpwi r0, 0x0
    ble lbl_fn_806B5860_0000419C
    cmpwi r4, 0x2
    bne lbl_fn_806B5860_00002588
    cmpwi r0, 0x1
    beq lbl_fn_806B5860_00002578
    lwz r0, 0x8dc(r31)
    cmplwi r0, 0x1
    bgt lbl_fn_806B5860_00002580
lbl_fn_806B5860_00002578:
    li r24, 0xfa0
    b lbl_fn_806B5860_000025A8
lbl_fn_806B5860_00002580:
    li r24, 0x2ee0
    b lbl_fn_806B5860_000025A8
lbl_fn_806B5860_00002588:
    cmpwi r4, 0x16
    bne lbl_fn_806B5860_00002598
    li r24, 0xfa0
    b lbl_fn_806B5860_000025A8
lbl_fn_806B5860_00002598:
    cmpwi r0, 0x1
    li r24, 0x2ee0
    bne lbl_fn_806B5860_000025A8
    li r24, 0xfa0
lbl_fn_806B5860_000025A8:
    bl OSGetTime
    lis r6, 0x8000
    lwz r8, 0x714(r31)
    lwz r0, 0xf8(r6)
    lis r5, 0x1062
    addi r6, r5, 0x4dd3
    lwz r7, 0x710(r31)
    srwi r0, r0, 2
    subfc r4, r8, r4
    mulhwu r0, r6, r0
    li r5, 0x0
    subfe r3, r7, r3
    srwi r6, r0, 6
    bl __div2i
    li r29, 0x0
    xoris r5, r3, 0x8000
    xoris r0, r29, 0x8000
    subfc r3, r4, r24
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_806B5860_0000419C
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x7ac(r3)
    bl fn_806BC010
    bl fn_806C5EB0
    cmpwi r3, 0x0
    bne lbl_fn_806B5860_00004934
    lwz r3, lbl_80860898@l(r28)
    stw r29, 0x708(r3)
    b lbl_fn_806B5860_0000419C
    lwz r0, 0x730(r31)
    lwz r3, 0x734(r31)
    or. r0, r3, r0
    beq lbl_fn_806B5860_000027B0
    bl OSGetTime
    lis r30, 0x8000
    lis r29, 0x1062
    lwz r0, 0xf8(r30)
    addi r6, r29, 0x4dd3
    lwz r8, 0x734(r31)
    li r5, 0x0
    srwi r0, r0, 2
    lwz r7, 0x730(r31)
    mulhwu r0, r6, r0
    subfc r4, r8, r4
    subfe r3, r7, r3
    srwi r6, r0, 6
    bl __div2i
    li r31, 0x0
    li r6, 0x61a8
    xoris r5, r3, 0x8000
    xoris r0, r31, 0x8000
    subfc r3, r4, r6
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_806B5860_0000419C
    addi r4, r27, 0x34c
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r28)
    stw r31, 0x734(r3)
    stw r31, 0x730(r3)
    bl fn_806CD150
    cmpwi r3, 0x1
    bne lbl_fn_806B5860_00002784
    addi r4, r27, 0x2a0
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r28)
    lwz r31, 0x744(r3)
    cmpwi r31, 0x1
    beq lbl_fn_806B5860_00002770
    addi r28, r26, 0x750
    lwz r24, 0x750(r26)
    lwz r25, 0x4(r28)
    bl OSGetTime
    stw r4, 0x4(r28)
    addi r6, r29, 0x4dd3
    subfc r4, r25, r4
    li r5, 0x0
    stw r3, 0x750(r26)
    subfe r3, r24, r3
    lwz r0, 0xf8(r30)
    srwi r0, r0, 2
    mulhwu r0, r6, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r29, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r31, 2
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
lbl_fn_806B5860_00002770:
    lis r3, lbl_80860898@ha
    li r0, 0x1
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
    b lbl_fn_806B5860_0000419C
lbl_fn_806B5860_00002784:
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x660(r3)
    bl fn_806C1430
    cmpwi r3, 0x0
    bne lbl_fn_806B5860_0000419C
    lwz r3, lbl_80860898@l(r28)
    li r4, 0x0
    li r5, 0x30
    addi r3, r3, 0x660
    bl memset
    b lbl_fn_806B5860_00004934
lbl_fn_806B5860_000027B0:
    lbz r0, 0x808(r31)
    cmplwi r0, 0x6
    bne lbl_fn_806B5860_0000419C
    bl OSGetTime
    lis r29, 0x8000
    lis r30, 0x1062
    lwz r0, 0xf8(r29)
    addi r6, r30, 0x4dd3
    lwz r8, 0x89c(r31)
    li r5, 0x0
    srwi r0, r0, 2
    lwz r7, 0x898(r31)
    mulhwu r0, r6, r0
    subfc r4, r8, r4
    subfe r3, r7, r3
    srwi r6, r0, 6
    bl __div2i
    li r31, 0x0
    li r6, 0x1770
    xoris r5, r3, 0x8000
    xoris r0, r31, 0x8000
    subfc r3, r4, r6
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_806B5860_0000419C
    addi r4, r27, 0x36c
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    bl fn_806CD150
    cmpwi r3, 0x1
    bne lbl_fn_806B5860_00002924
    lwz r3, lbl_80860898@l(r28)
    li r0, 0xff
    addi r4, r27, 0x398
    li r5, 0x6
    stb r0, 0x808(r3)
    li r3, 0x40
    lwz r6, lbl_80860898@l(r28)
    stb r31, 0x809(r6)
    crclr 6
    bl fn_806A76B0
    addi r4, r27, 0x2a0
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r28)
    lwz r31, 0x744(r3)
    cmpwi r31, 0x1
    beq lbl_fn_806B5860_00002910
    addi r28, r26, 0x750
    lwz r24, 0x750(r26)
    lwz r25, 0x4(r28)
    bl OSGetTime
    stw r4, 0x4(r28)
    addi r6, r30, 0x4dd3
    subfc r4, r25, r4
    li r5, 0x0
    stw r3, 0x750(r26)
    subfe r3, r24, r3
    lwz r0, 0xf8(r29)
    srwi r0, r0, 2
    mulhwu r0, r6, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r30, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r31, 2
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
lbl_fn_806B5860_00002910:
    lis r3, lbl_80860898@ha
    li r0, 0x1
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
    b lbl_fn_806B5860_0000419C
lbl_fn_806B5860_00002924:
    lwz r4, lbl_80860898@l(r28)
    lbz r3, 0x809(r4)
    addi r0, r3, 0x1
    stb r0, 0x809(r4)
    lwz r8, lbl_80860898@l(r28)
    lbz r0, 0x809(r8)
    cmplwi r0, 0x5
    ble lbl_fn_806B5860_00002994
    li r0, 0xff
    stb r0, 0x808(r8)
    addi r4, r27, 0x398
    li r3, 0x40
    lwz r6, lbl_80860898@l(r28)
    li r5, 0x6
    stb r31, 0x809(r6)
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x660(r3)
    bl fn_806C1430
    cmpwi r3, 0x0
    bne lbl_fn_806B5860_0000419C
    lwz r3, lbl_80860898@l(r28)
    li r4, 0x0
    li r5, 0x30
    addi r3, r3, 0x660
    bl memset
    b lbl_fn_806B5860_00004934
lbl_fn_806B5860_00002994:
    lwz r4, 0x890(r8)
    addi r7, r8, 0x810
    lwz r5, 0x80c(r8)
    li r3, 0x6
    lhz r6, 0x80a(r8)
    lwz r8, 0x894(r8)
    bl fn_806BC860
    lwz r4, lbl_80860898@l(r28)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_000029C8
    bl fn_806C5EB0
    b lbl_fn_806B5860_000029CC
lbl_fn_806B5860_000029C8:
    bl fn_806C5C10
lbl_fn_806B5860_000029CC:
    cmpwi r3, 0x0
    beq lbl_fn_806B5860_0000419C
    b lbl_fn_806B5860_00004934
    lbz r0, 0x808(r31)
    cmplwi r0, 0x2
    bne lbl_fn_806B5860_0000419C
    lbz r0, 0x15(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_00002A4C
    bl OSGetTime
    lis r6, 0x8000
    lwz r8, 0x89c(r31)
    lwz r0, 0xf8(r6)
    lis r5, 0x1062
    addi r6, r5, 0x4dd3
    lwz r7, 0x898(r31)
    srwi r0, r0, 2
    subfc r4, r8, r4
    mulhwu r0, r6, r0
    li r5, 0x0
    subfe r3, r7, r3
    srwi r6, r0, 6
    bl __div2i
    li r0, 0x0
    li r6, 0x1770
    xoris r5, r3, 0x8000
    xoris r0, r0, 0x8000
    subfc r3, r4, r6
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_fn_806B5860_00002ABC
lbl_fn_806B5860_00002A4C:
    lis r3, lbl_80860898@ha
    lwz r24, lbl_80860898@l(r3)
    lbz r0, 0x15(r24)
    cmpwi r0, 0x0
    beq lbl_fn_806B5860_0000419C
    bl OSGetTime
    lis r6, 0x8000
    lwz r8, 0x89c(r24)
    lwz r0, 0xf8(r6)
    lis r5, 0x1062
    addi r6, r5, 0x4dd3
    lwz r7, 0x898(r24)
    srwi r0, r0, 2
    subfc r4, r8, r4
    mulhwu r0, r6, r0
    li r5, 0x0
    subfe r3, r7, r3
    srwi r6, r0, 6
    bl __div2i
    li r0, 0x0
    li r6, 0x4a38
    xoris r5, r3, 0x8000
    xoris r0, r0, 0x8000
    subfc r3, r4, r6
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_806B5860_0000419C
lbl_fn_806B5860_00002ABC:
    addi r4, r27, 0x3b4
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lis r28, lbl_80860898@ha
    li r4, 0xff
    lwz r3, lbl_80860898@l(r28)
    li r0, 0x0
    stb r4, 0x808(r3)
    lwz r3, lbl_80860898@l(r28)
    stb r0, 0x809(r3)
    bl fn_806CD150
    cmpwi r3, 0x1
    bne lbl_fn_806B5860_00002BB4
    lwz r3, lbl_80860898@l(r28)
    lwz r29, 0x744(r3)
    cmpwi r29, 0x1
    beq lbl_fn_806B5860_00002BA0
    addi r28, r26, 0x750
    lwz r24, 0x750(r26)
    lwz r25, 0x4(r28)
    bl OSGetTime
    stw r4, 0x4(r28)
    lis r28, 0x1062
    lis r6, 0x8000
    subfc r4, r25, r4
    stw r3, 0x750(r26)
    addi r7, r28, 0x4dd3
    subfe r3, r24, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r28, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r29, 2
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
lbl_fn_806B5860_00002BA0:
    lis r3, lbl_80860898@ha
    li r0, 0x1
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
    b lbl_fn_806B5860_0000419C
lbl_fn_806B5860_00002BB4:
    lwz r5, lbl_80860898@l(r28)
    li r4, 0x2
    lbz r0, 0x15(r5)
    lwz r3, 0x660(r5)
    cmpwi r0, 0x0
    beq lbl_fn_806B5860_00002BD8
    lbz r0, 0x15(r5)
    cmplwi r0, 0x1
    bne lbl_fn_806B5860_00002BE8
lbl_fn_806B5860_00002BD8:
    lbz r0, 0xd(r5)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_00002BE8
    li r4, 0x1
lbl_fn_806B5860_00002BE8:
    bl fn_806C10C0
    cmpwi r3, 0x0
    bne lbl_fn_806B5860_0000419C
    b lbl_fn_806B5860_00004934
    lbz r0, 0x808(r31)
    cmplwi r0, 0x8
    bne lbl_fn_806B5860_0000419C
    bl OSGetTime
    lis r6, 0x8000
    lwz r8, 0x89c(r31)
    lwz r0, 0xf8(r6)
    lis r5, 0x1062
    addi r6, r5, 0x4dd3
    lwz r7, 0x898(r31)
    srwi r0, r0, 2
    subfc r4, r8, r4
    mulhwu r0, r6, r0
    li r5, 0x0
    subfe r3, r7, r3
    srwi r6, r0, 6
    bl __div2i
    li r6, 0x0
    li r7, 0x7530
    xoris r5, r3, 0x8000
    xoris r0, r6, 0x8000
    subfc r3, r4, r7
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_806B5860_0000419C
    lwz r4, lbl_80860898@l(r28)
    lbz r3, 0x809(r4)
    addi r0, r3, 0x1
    stb r0, 0x809(r4)
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x809(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806B5860_0000419C
    li r0, 0xff
    stb r0, 0x808(r3)
    addi r4, r27, 0x3e0
    li r3, 0x40
    lwz r5, lbl_80860898@l(r28)
    stb r6, 0x809(r5)
    crclr 6
    bl fn_806A76B0
    lwz r5, lbl_80860898@l(r28)
    li r4, 0x2
    lbz r0, 0x15(r5)
    lwz r3, 0x660(r5)
    cmpwi r0, 0x0
    beq lbl_fn_806B5860_00002CC4
    lbz r0, 0x15(r5)
    cmplwi r0, 0x1
    bne lbl_fn_806B5860_00002CD4
lbl_fn_806B5860_00002CC4:
    lbz r0, 0xd(r5)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_00002CD4
    li r4, 0x1
lbl_fn_806B5860_00002CD4:
    bl fn_806C10C0
    cmpwi r3, 0x0
    bne lbl_fn_806B5860_0000419C
    b lbl_fn_806B5860_00004934
    bl fn_806B1230
    cmpwi r3, 0x4
    bne lbl_fn_806B5860_0000419C
    lwz r24, lbl_80860898@l(r28)
    lbz r0, 0x757(r24)
    cmpwi r0, 0x0
    beq lbl_fn_806B5860_0000419C
    bl OSGetTime
    lis r6, 0x8000
    lwz r8, 0x7a4(r24)
    lwz r0, 0xf8(r6)
    lis r5, 0x1062
    addi r6, r5, 0x4dd3
    lwz r7, 0x7a0(r24)
    srwi r0, r0, 2
    subfc r4, r8, r4
    mulhwu r0, r6, r0
    li r5, 0x0
    subfe r3, r7, r3
    srwi r6, r0, 6
    bl __div2i
    li r0, 0x0
    li r6, 0x7530
    xoris r5, r3, 0x8000
    xoris r0, r0, 0x8000
    subfc r3, r4, r6
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_806B5860_0000419C
    lwz r24, lbl_80860898@l(r28)
    addi r4, r27, 0x404
    li r3, 0x40
    li r6, 0x5
    lbz r5, 0x756(r24)
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x756(r3)
    cmplwi r0, 0x5
    blt lbl_fn_806B5860_00002DAC
    addi r4, r27, 0x420
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lwz r3, 0x660(r24)
    bl fn_806C1430
    cmpwi r3, 0x0
    bne lbl_fn_806B5860_0000419C
    b lbl_fn_806B5860_00004934
lbl_fn_806B5860_00002DAC:
    lwz r4, 0x660(r24)
    li r3, 0x40
    lwz r5, 0x664(r24)
    li r7, 0x0
    lhz r6, 0x66c(r24)
    li r8, 0x0
    bl fn_806BC860
    lwz r4, lbl_80860898@l(r28)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_00002DE0
    bl fn_806C5EB0
    b lbl_fn_806B5860_00002DE4
lbl_fn_806B5860_00002DE0:
    bl fn_806C5C10
lbl_fn_806B5860_00002DE4:
    cmpwi r3, 0x0
    bne lbl_fn_806B5860_00004934
    lis r28, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r28)
    lbz r3, 0x756(r4)
    addi r0, r3, 0x1
    stb r0, 0x756(r4)
    bl OSGetTime
    lis r6, 0x8000
    lis r5, 0x1062
    lwz r6, 0xf8(r6)
    addi r7, r5, 0x4dd3
    li r0, 0x5dc0
    lwz r5, lbl_80860898@l(r28)
    srwi r6, r6, 2
    mulhwu r6, r7, r6
    srwi r7, r6, 6
    mulhwu r6, r7, r0
    mulli r0, r7, 0x5dc0
    subfc r0, r0, r4
    stw r0, 0x7a4(r5)
    subfe r0, r6, r3
    stw r0, 0x7a0(r5)
    b lbl_fn_806B5860_0000419C
    bl fn_806CD150
    lwz r29, lbl_80860898@l(r28)
    li r0, 0x0
    stw r0, 0x8b8(r29)
    stb r0, 0x8cc(r29)
    stb r0, 0x8cd(r29)
    lwz r5, lbl_80860898@l(r28)
    lwz r0, 0x58(r5)
    cmpwi r0, 0x0
    ble lbl_fn_806B5860_00002E74
    addi r3, r5, 0x60
    b lbl_fn_806B5860_00002E78
lbl_fn_806B5860_00002E74:
    li r3, 0x0
lbl_fn_806B5860_00002E78:
    cmpwi r3, 0x0
    bne lbl_fn_806B5860_00002EAC
    cmpwi r5, 0x0
    addi r4, r27, 0x450
    li r3, 0x1
    beq lbl_fn_806B5860_00002E98
    lwz r5, 0x744(r5)
    b lbl_fn_806B5860_00002E9C
lbl_fn_806B5860_00002E98:
    li r5, 0x0
lbl_fn_806B5860_00002E9C:
    crclr 6
    bl fn_806A76B0
    li r0, 0x0
    b lbl_fn_806B5860_00002EC0
lbl_fn_806B5860_00002EAC:
    lwz r3, 0x0(r3)
    lwz r0, 0x7a8(r5)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_806B5860_00002EC0:
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_000030F0
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r0, 0x58(r3)
    cmpwi r0, 0x0
    ble lbl_fn_806B5860_00002EE4
    addi r3, r3, 0x60
    b lbl_fn_806B5860_00002EE8
lbl_fn_806B5860_00002EE4:
    li r3, 0x0
lbl_fn_806B5860_00002EE8:
    lbz r3, 0x16(r3)
    bl fn_806B14D0
    cmpwi r3, 0x0
    bne lbl_fn_806B5860_000030F0
    addi r4, r27, 0x480
    li r3, 0x1
    crclr 6
    bl fn_806A76B0
    lis r26, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r26)
    cmpwi r3, 0x0
    beq lbl_fn_806B5860_00004934
    li r0, 0x1
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r26)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r26)
    li r0, 0x0
    lis r4, 0xffff
    li r3, 0x19
    stb r0, 0x751(r5)
    subi r4, r4, 0x3a2f
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r26)
    addi r3, r1, 0x44
    addi r5, r27, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x60
    addi r4, r1, 0x44
    addi r5, r1, 0x130
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r26)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B5860_00002FA0
    cmpwi r6, 0x0
    bne lbl_fn_806B5860_00002FA0
    li r6, 0x1
lbl_fn_806B5860_00002FA0:
    addi r3, r1, 0x44
    addi r5, r27, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x64
    addi r4, r1, 0x44
    addi r5, r1, 0x130
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x44
    addi r5, r27, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x68
    addi r4, r1, 0x44
    addi r5, r1, 0x130
    li r6, 0x2f
    bl fn_806AB980
    lis r26, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r26)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_00003010
    li r4, 0x0
    b lbl_fn_806B5860_0000305C
lbl_fn_806B5860_00003010:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806B5860_00003058
    lwz r3, lbl_80860898@l(r26)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806B5860_00003044
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806B5860_00003044
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B5860_00003058
lbl_fn_806B5860_00003044:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_00003058
    li r4, 0x1
    b lbl_fn_806B5860_0000305C
lbl_fn_806B5860_00003058:
    li r4, 0x0
lbl_fn_806B5860_0000305C:
    neg r0, r4
    addi r3, r1, 0x44
    or r0, r0, r4
    addi r5, r27, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x6c
    addi r4, r1, 0x44
    addi r5, r1, 0x130
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x130
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r25, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r25)
    cntlzw r0, r3
    srwi r24, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r25)
    mr r7, r3
    lwz r12, 0x8a0(r25)
    mr r5, r24
    subi r0, r4, 0x2
    lwz r8, 0x8a4(r25)
    cntlzw r0, r0
    li r3, 0x19
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
    b lbl_fn_806B5860_00004934
lbl_fn_806B5860_000030F0:
    lis r3, lbl_80860898@ha
    lwz r4, 0x7a8(r29)
    lwz r6, lbl_80860898@l(r3)
    li r3, 0x0
    lwz r0, 0x58(r6)
    mr r5, r6
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806B5860_00003140
    nop
lbl_fn_806B5860_00003118:
    lwz r0, 0x60(r5)
    cmpw r4, r0
    bne lbl_fn_806B5860_00003134
    mulli r0, r3, 0x30
    add r3, r6, r0
    addi r5, r3, 0x60
    b lbl_fn_806B5860_00003144
lbl_fn_806B5860_00003134:
    addi r5, r5, 0x30
    addi r3, r3, 0x1
    bdnz lbl_fn_806B5860_00003118
lbl_fn_806B5860_00003140:
    li r5, 0x0
lbl_fn_806B5860_00003144:
    cmpwi r5, 0x0
    lwz r4, 0x8b8(r29)
    li r3, 0x1
    bne lbl_fn_806B5860_0000315C
    li r0, 0xff
    b lbl_fn_806B5860_00003160
lbl_fn_806B5860_0000315C:
    lbz r0, 0x16(r5)
lbl_fn_806B5860_00003160:
    slw r0, r3, r0
    lis r3, lbl_80860898@ha
    or r0, r4, r0
    stw r0, 0x8b8(r29)
    lwz r5, lbl_80860898@l(r3)
    lwz r0, 0x58(r5)
    cmpwi r0, 0x0
    ble lbl_fn_806B5860_00003188
    addi r3, r5, 0x60
    b lbl_fn_806B5860_0000318C
lbl_fn_806B5860_00003188:
    li r3, 0x0
lbl_fn_806B5860_0000318C:
    cmpwi r3, 0x0
    bne lbl_fn_806B5860_000031C0
    cmpwi r5, 0x0
    addi r4, r27, 0x450
    li r3, 0x1
    beq lbl_fn_806B5860_000031AC
    lwz r5, 0x744(r5)
    b lbl_fn_806B5860_000031B0
lbl_fn_806B5860_000031AC:
    li r5, 0x0
lbl_fn_806B5860_000031B0:
    crclr 6
    bl fn_806A76B0
    li r0, 0x0
    b lbl_fn_806B5860_000031D4
lbl_fn_806B5860_000031C0:
    lwz r3, 0x0(r3)
    lwz r0, 0x7a8(r5)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_806B5860_000031D4:
    cmpwi r0, 0x0
    beq lbl_fn_806B5860_000034CC
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x8e0(r3)
    cmpwi r0, 0x1
    bne lbl_fn_806B5860_000033D0
    cmpwi r3, 0x0
    beq lbl_fn_806B5860_0000419C
    li r0, 0x1
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r28)
    li r0, 0x0
    lis r4, 0xffff
    li r3, 0x19
    stb r0, 0x751(r5)
    subi r4, r4, 0x3a2f
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r28)
    addi r3, r1, 0x38
    addi r5, r27, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x60
    addi r4, r1, 0x38
    addi r5, r1, 0x108
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B5860_00003280
    cmpwi r6, 0x0
    bne lbl_fn_806B5860_00003280
    li r6, 0x1
lbl_fn_806B5860_00003280:
    addi r3, r1, 0x38
    addi r5, r27, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x64
    addi r4, r1, 0x38
    addi r5, r1, 0x108
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x38
    addi r5, r27, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x68
    addi r4, r1, 0x38
    addi r5, r1, 0x108
    li r6, 0x2f
    bl fn_806AB980
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_000032F0
    li r4, 0x0
    b lbl_fn_806B5860_0000333C
lbl_fn_806B5860_000032F0:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806B5860_00003338
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806B5860_00003324
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806B5860_00003324
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B5860_00003338
lbl_fn_806B5860_00003324:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_00003338
    li r4, 0x1
    b lbl_fn_806B5860_0000333C
lbl_fn_806B5860_00003338:
    li r4, 0x0
lbl_fn_806B5860_0000333C:
    neg r0, r4
    addi r3, r1, 0x38
    or r0, r0, r4
    addi r5, r27, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x6c
    addi r4, r1, 0x38
    addi r5, r1, 0x108
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x108
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r25, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r25)
    cntlzw r0, r3
    srwi r24, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r25)
    mr r7, r3
    lwz r12, 0x8a0(r25)
    mr r5, r24
    subi r0, r4, 0x2
    lwz r8, 0x8a4(r25)
    cntlzw r0, r0
    li r3, 0x19
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
    b lbl_fn_806B5860_0000419C
lbl_fn_806B5860_000033D0:
    addi r4, r27, 0x4c8
    li r3, 0x1
    crclr 6
    bl fn_806A76B0
    bl fn_806CB3A0
    lwz r3, lbl_80860898@l(r28)
    lwz r29, 0x744(r3)
    cmpwi r29, 0xa
    beq lbl_fn_806B5860_00003490
    addi r28, r26, 0x750
    lwz r24, 0x750(r26)
    lwz r25, 0x4(r28)
    bl OSGetTime
    stw r4, 0x4(r28)
    lis r28, 0x1062
    lis r6, 0x8000
    subfc r4, r25, r4
    stw r3, 0x750(r26)
    addi r7, r28, 0x4dd3
    subfe r3, r24, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r28, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r29, 2
    lwz r8, 0x28(r3)
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
lbl_fn_806B5860_00003490:
    lis r28, lbl_80860898@ha
    li r0, 0xa
    lwz r3, lbl_80860898@l(r28)
    stw r0, 0x744(r3)
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x10(r3)
    bl fn_806EF8B0
    lwz r3, lbl_80860898@l(r28)
    li r0, 0x0
    stb r0, 0x756(r3)
    bl OSGetTime
    lwz r5, lbl_80860898@l(r28)
    stw r4, 0x7a4(r5)
    stw r3, 0x7a0(r5)
    b lbl_fn_806B5860_0000419C
lbl_fn_806B5860_000034CC:
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x10(r3)
    bl fn_806EF8B0
    lwz r3, lbl_80860898@l(r28)
    lwz r29, 0x744(r3)
    cmpwi r29, 0xa
    beq lbl_fn_806B5860_00003588
    addi r28, r26, 0x750
    lwz r24, 0x750(r26)
    lwz r25, 0x4(r28)
    bl OSGetTime
    stw r4, 0x4(r28)
    lis r28, 0x1062
    lis r6, 0x8000
    subfc r4, r25, r4
    stw r3, 0x750(r26)
    addi r7, r28, 0x4dd3
    subfe r3, r24, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r28, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r29, 2
    lwz r8, 0x28(r3)
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
lbl_fn_806B5860_00003588:
    lis r28, lbl_80860898@ha
    li r4, 0xa
    lwz r3, lbl_80860898@l(r28)
    li r0, 0x0
    stw r4, 0x744(r3)
    lwz r3, lbl_80860898@l(r28)
    stb r0, 0x756(r3)
    bl OSGetTime
    lwz r5, lbl_80860898@l(r28)
    stw r4, 0x7a4(r5)
    stw r3, 0x7a0(r5)
    b lbl_fn_806B5860_0000419C
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    ble lbl_fn_806B5860_000035CC
    addi r3, r31, 0x60
    b lbl_fn_806B5860_000035D0
lbl_fn_806B5860_000035CC:
    li r3, 0x0
lbl_fn_806B5860_000035D0:
    cmpwi r3, 0x0
    bne lbl_fn_806B5860_00003604
    cmpwi r31, 0x0
    addi r4, r27, 0x450
    li r3, 0x1
    beq lbl_fn_806B5860_000035F0
    lwz r5, 0x744(r31)
    b lbl_fn_806B5860_000035F4
lbl_fn_806B5860_000035F0:
    li r5, 0x0
lbl_fn_806B5860_000035F4:
    crclr 6
    bl fn_806A76B0
    li r0, 0x0
    b lbl_fn_806B5860_00003618
lbl_fn_806B5860_00003604:
    lwz r3, 0x0(r3)
    lwz r0, 0x7a8(r31)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_806B5860_00003618:
    cmpwi r0, 0x0
    beq lbl_fn_806B5860_000037FC
    lis r31, lbl_80860898@ha
    lwz r24, lbl_80860898@l(r31)
    bl OSGetTime
    lis r6, 0x8000
    lwz r8, 0x7a4(r24)
    lwz r0, 0xf8(r6)
    lis r5, 0x1062
    addi r6, r5, 0x4dd3
    lwz r7, 0x7a0(r24)
    srwi r0, r0, 2
    subfc r4, r8, r4
    mulhwu r0, r6, r0
    li r5, 0x0
    subfe r3, r7, r3
    srwi r6, r0, 6
    bl __div2i
    li r0, 0x0
    li r6, 0x1388
    xoris r5, r3, 0x8000
    xoris r0, r0, 0x8000
    subfc r3, r4, r6
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_806B5860_00003728
    bl fn_806CB3A0
    lwz r4, lbl_80860898@l(r31)
    lbz r3, 0x8cc(r4)
    addi r0, r3, 0x1
    stb r0, 0x8cc(r4)
    clrlwi r0, r0, 24
    cmplwi r0, 0x5
    ble lbl_fn_806B5860_00003728
    lwz r4, lbl_80860898@l(r31)
    li r30, 0x0
    li r25, 0x0
    li r28, 0x1
    lwz r3, 0x8b8(r4)
    lwz r0, 0x8bc(r4)
    nand r29, r3, r0
    b lbl_fn_806B5860_00003710
lbl_fn_806B5860_000036C4:
    cmpw r30, r0
    bge lbl_fn_806B5860_000036D8
    add r3, r3, r25
    addi r24, r3, 0x60
    b lbl_fn_806B5860_000036DC
lbl_fn_806B5860_000036D8:
    li r24, 0x0
lbl_fn_806B5860_000036DC:
    lbz r6, 0x16(r24)
    slw r0, r28, r6
    and. r0, r29, r0
    beq lbl_fn_806B5860_00003708
    lwz r5, 0x0(r24)
    addi r4, r27, 0x4e8
    li r3, 0x1
    crclr 6
    bl fn_806A76B0
    lbz r3, 0x16(r24)
    bl fn_806B1A00
lbl_fn_806B5860_00003708:
    addi r25, r25, 0x30
    addi r30, r30, 0x1
lbl_fn_806B5860_00003710:
    lwz r3, lbl_80860898@l(r31)
    lwz r0, 0x58(r3)
    cmpw r30, r0
    blt lbl_fn_806B5860_000036C4
    lwz r0, 0x8bc(r3)
    stw r0, 0x8b8(r3)
lbl_fn_806B5860_00003728:
    lis r3, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r3)
    lwz r3, 0x8b8(r4)
    lwz r0, 0x8bc(r4)
    xor. r0, r3, r0
    bne lbl_fn_806B5860_0000419C
    lwz r29, 0x744(r4)
    cmpwi r29, 0xb
    beq lbl_fn_806B5860_000037E8
    addi r28, r26, 0x750
    lwz r24, 0x750(r26)
    lwz r25, 0x4(r28)
    bl OSGetTime
    stw r4, 0x4(r28)
    lis r28, 0x1062
    lis r6, 0x8000
    subfc r4, r25, r4
    stw r3, 0x750(r26)
    addi r7, r28, 0x4dd3
    subfe r3, r24, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r28, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r29, 2
    lwz r8, 0x2c(r3)
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
lbl_fn_806B5860_000037E8:
    lis r3, lbl_80860898@ha
    li r0, 0xb
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
    b lbl_fn_806B5860_0000419C
lbl_fn_806B5860_000037FC:
    lis r31, lbl_80860898@ha
    lwz r24, lbl_80860898@l(r31)
    bl OSGetTime
    lis r6, 0x8000
    lwz r8, 0x7a4(r24)
    lwz r0, 0xf8(r6)
    lis r5, 0x1062
    addi r6, r5, 0x4dd3
    lwz r7, 0x7a0(r24)
    srwi r0, r0, 2
    subfc r4, r8, r4
    mulhwu r0, r6, r0
    li r5, 0x0
    subfe r3, r7, r3
    srwi r6, r0, 6
    bl __div2i
    lis r5, 0x1
    li r28, 0x0
    subi r6, r5, 0x15a0
    xoris r5, r3, 0x8000
    xoris r0, r28, 0x8000
    subfc r3, r4, r6
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_806B5860_0000419C
    addi r4, r27, 0x528
    li r3, 0x1
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806B5860_0000419C
    li r0, 0x1
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r31)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r31)
    lis r4, 0xffff
    li r3, 0x19
    stb r28, 0x751(r5)
    subi r4, r4, 0x3a2f
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r31)
    addi r3, r1, 0x2c
    addi r5, r27, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x60
    addi r4, r1, 0x2c
    addi r5, r1, 0xe0
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r31)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B5860_00003904
    cmpwi r6, 0x0
    bne lbl_fn_806B5860_00003904
    li r6, 0x1
lbl_fn_806B5860_00003904:
    addi r3, r1, 0x2c
    addi r5, r27, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x64
    addi r4, r1, 0x2c
    addi r5, r1, 0xe0
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x2c
    addi r5, r27, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x68
    addi r4, r1, 0x2c
    addi r5, r1, 0xe0
    li r6, 0x2f
    bl fn_806AB980
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_00003974
    li r4, 0x0
    b lbl_fn_806B5860_000039C0
lbl_fn_806B5860_00003974:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806B5860_000039BC
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806B5860_000039A8
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806B5860_000039A8
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B5860_000039BC
lbl_fn_806B5860_000039A8:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_000039BC
    li r4, 0x1
    b lbl_fn_806B5860_000039C0
lbl_fn_806B5860_000039BC:
    li r4, 0x0
lbl_fn_806B5860_000039C0:
    neg r0, r4
    addi r3, r1, 0x2c
    or r0, r0, r4
    addi r5, r27, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x6c
    addi r4, r1, 0x2c
    addi r5, r1, 0xe0
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0xe0
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r25, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r25)
    cntlzw r0, r3
    srwi r24, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r25)
    mr r7, r3
    lwz r12, 0x8a0(r25)
    mr r5, r24
    subi r0, r4, 0x2
    lwz r8, 0x8a4(r25)
    cntlzw r0, r0
    li r3, 0x19
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
    b lbl_fn_806B5860_0000419C
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    ble lbl_fn_806B5860_00003A68
    addi r3, r31, 0x60
    b lbl_fn_806B5860_00003A6C
lbl_fn_806B5860_00003A68:
    li r3, 0x0
lbl_fn_806B5860_00003A6C:
    cmpwi r3, 0x0
    bne lbl_fn_806B5860_00003AA0
    cmpwi r31, 0x0
    addi r4, r27, 0x450
    li r3, 0x1
    beq lbl_fn_806B5860_00003A8C
    lwz r5, 0x744(r31)
    b lbl_fn_806B5860_00003A90
lbl_fn_806B5860_00003A8C:
    li r5, 0x0
lbl_fn_806B5860_00003A90:
    crclr 6
    bl fn_806A76B0
    li r0, 0x0
    b lbl_fn_806B5860_00003AB4
lbl_fn_806B5860_00003AA0:
    lwz r3, 0x0(r3)
    lwz r0, 0x7a8(r31)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_806B5860_00003AB4:
    cmpwi r0, 0x0
    beq lbl_fn_806B5860_00003DE4
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x8e0(r3)
    cmpwi r0, 0x1
    bne lbl_fn_806B5860_00003CB0
    cmpwi r3, 0x0
    beq lbl_fn_806B5860_0000419C
    li r0, 0x1
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r28)
    li r0, 0x0
    lis r4, 0xffff
    li r3, 0x19
    stb r0, 0x751(r5)
    subi r4, r4, 0x3a2f
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r28)
    addi r3, r1, 0x20
    addi r5, r27, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x60
    addi r4, r1, 0x20
    addi r5, r1, 0xb8
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B5860_00003B60
    cmpwi r6, 0x0
    bne lbl_fn_806B5860_00003B60
    li r6, 0x1
lbl_fn_806B5860_00003B60:
    addi r3, r1, 0x20
    addi r5, r27, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x64
    addi r4, r1, 0x20
    addi r5, r1, 0xb8
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x20
    addi r5, r27, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x68
    addi r4, r1, 0x20
    addi r5, r1, 0xb8
    li r6, 0x2f
    bl fn_806AB980
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_00003BD0
    li r4, 0x0
    b lbl_fn_806B5860_00003C1C
lbl_fn_806B5860_00003BD0:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806B5860_00003C18
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806B5860_00003C04
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806B5860_00003C04
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B5860_00003C18
lbl_fn_806B5860_00003C04:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_00003C18
    li r4, 0x1
    b lbl_fn_806B5860_00003C1C
lbl_fn_806B5860_00003C18:
    li r4, 0x0
lbl_fn_806B5860_00003C1C:
    neg r0, r4
    addi r3, r1, 0x20
    or r0, r0, r4
    addi r5, r27, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x6c
    addi r4, r1, 0x20
    addi r5, r1, 0xb8
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0xb8
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r25, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r25)
    cntlzw r0, r3
    srwi r24, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r25)
    mr r7, r3
    lwz r12, 0x8a0(r25)
    mr r5, r24
    subi r0, r4, 0x2
    lwz r8, 0x8a4(r25)
    cntlzw r0, r0
    li r3, 0x19
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
    b lbl_fn_806B5860_0000419C
lbl_fn_806B5860_00003CB0:
    addi r4, r27, 0x548
    li r3, 0x1
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    bl fn_806CB550
    addi r4, r27, 0x560
    li r3, 0x1
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r28)
    li r0, 0x0
    li r24, 0x0
    li r25, 0x0
    stw r0, 0x8d4(r3)
    stw r0, 0x8d0(r3)
    b lbl_fn_806B5860_00003D1C
lbl_fn_806B5860_00003CF4:
    cmpw r24, r0
    bge lbl_fn_806B5860_00003D08
    add r3, r29, r25
    addi r3, r3, 0x60
    b lbl_fn_806B5860_00003D0C
lbl_fn_806B5860_00003D08:
    li r3, 0x0
lbl_fn_806B5860_00003D0C:
    lbz r3, 0x16(r3)
    bl fn_806CE700
    addi r25, r25, 0x30
    addi r24, r24, 0x1
lbl_fn_806B5860_00003D1C:
    lwz r29, lbl_80860898@l(r28)
    lwz r0, 0x58(r29)
    cmpw r24, r0
    blt lbl_fn_806B5860_00003CF4
    lwz r0, 0x2c(r29)
    cmpwi r0, 0xff
    beq lbl_fn_806B5860_00003DD0
    cmpwi r0, 0x1
    bne lbl_fn_806B5860_00003D4C
    bl fn_806B0F80
    stw r3, 0x1c(r29)
    b lbl_fn_806B5860_00003D54
lbl_fn_806B5860_00003D4C:
    li r0, 0x0
    stw r0, 0x1c(r29)
lbl_fn_806B5860_00003D54:
    lis r3, lbl_80860898@ha
    addi r4, r27, 0x574
    lwz r6, lbl_80860898@l(r3)
    addi r5, r27, 0x100
    li r3, 0x1
    lwz r0, 0x2c(r6)
    cmpwi r0, 0x0
    beq lbl_fn_806B5860_00003D78
    addi r5, r27, 0xf8
lbl_fn_806B5860_00003D78:
    crclr 6
    bl fn_806A76B0
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r12, 0x34(r3)
    cmpwi r12, 0x0
    beq lbl_fn_806B5860_00003DA8
    lwz r4, 0x2c(r3)
    lwz r5, 0x38(r3)
    li r3, 0x0
    mtctr r12
    bctrl
lbl_fn_806B5860_00003DA8:
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x10(r3)
    bl fn_806EF8B0
    lwz r3, lbl_80860898@l(r28)
    li r4, 0xff
    li r0, 0x0
    stw r4, 0x2c(r3)
    lwz r3, lbl_80860898@l(r28)
    stw r0, 0x4c(r3)
lbl_fn_806B5860_00003DD0:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r3, 0x10(r3)
    bl fn_806EF8B0
    b lbl_fn_806B5860_0000419C
lbl_fn_806B5860_00003DE4:
    lis r28, lbl_80860898@ha
    lwz r24, lbl_80860898@l(r28)
    bl OSGetTime
    lis r31, 0x8000
    lis r30, 0x1062
    lwz r0, 0xf8(r31)
    addi r6, r30, 0x4dd3
    lwz r8, 0x7a4(r24)
    li r5, 0x0
    srwi r0, r0, 2
    lwz r7, 0x7a0(r24)
    mulhwu r0, r6, r0
    subfc r4, r8, r4
    subfe r3, r7, r3
    srwi r6, r0, 6
    bl __div2i
    li r0, 0x0
    li r6, 0x4e20
    xoris r5, r3, 0x8000
    xoris r0, r0, 0x8000
    subfc r3, r4, r6
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_806B5860_0000419C
    lwz r3, lbl_80860898@l(r28)
    lwz r29, 0x744(r3)
    cmpwi r29, 0x1
    beq lbl_fn_806B5860_00003EEC
    addi r28, r26, 0x750
    lwz r24, 0x750(r26)
    lwz r25, 0x4(r28)
    bl OSGetTime
    stw r4, 0x4(r28)
    addi r6, r30, 0x4dd3
    subfc r4, r25, r4
    li r5, 0x0
    stw r3, 0x750(r26)
    subfe r3, r24, r3
    lwz r0, 0xf8(r31)
    srwi r0, r0, 2
    mulhwu r0, r6, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r30, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r29, 2
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
lbl_fn_806B5860_00003EEC:
    lis r3, lbl_80860898@ha
    li r0, 0x1
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
    b lbl_fn_806B5860_0000419C
    lwz r0, 0x708(r31)
    cmpwi r0, 0x0
    ble lbl_fn_806B5860_0000419C
    bl OSGetTime
    lis r6, 0x8000
    lwz r8, 0x714(r31)
    lwz r0, 0xf8(r6)
    lis r5, 0x1062
    addi r6, r5, 0x4dd3
    lwz r7, 0x710(r31)
    srwi r0, r0, 2
    subfc r4, r8, r4
    mulhwu r0, r6, r0
    li r5, 0x0
    subfe r3, r7, r3
    srwi r6, r0, 6
    bl __div2i
    li r31, 0x0
    li r6, 0x1f40
    xoris r5, r3, 0x8000
    xoris r0, r31, 0x8000
    subfc r3, r4, r6
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_806B5860_0000419C
    lwz r4, lbl_80860898@l(r28)
    lbz r3, 0x8c4(r4)
    addi r0, r3, 0x1
    stb r0, 0x8c4(r4)
    clrlwi r0, r0, 24
    cmplwi r0, 0xf
    ble lbl_fn_806B5860_00004164
    lwz r3, lbl_80860898@l(r28)
    cmpwi r3, 0x0
    beq lbl_fn_806B5860_0000419C
    li r0, 0x1
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r28)
    lis r4, 0xffff
    li r3, 0x19
    stb r31, 0x751(r5)
    subi r4, r4, 0x3a30
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r28)
    addi r3, r1, 0x14
    addi r5, r27, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x60
    addi r4, r1, 0x14
    addi r5, r1, 0x90
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B5860_00004014
    cmpwi r6, 0x0
    bne lbl_fn_806B5860_00004014
    li r6, 0x1
lbl_fn_806B5860_00004014:
    addi r3, r1, 0x14
    addi r5, r27, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x64
    addi r4, r1, 0x14
    addi r5, r1, 0x90
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x14
    addi r5, r27, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x68
    addi r4, r1, 0x14
    addi r5, r1, 0x90
    li r6, 0x2f
    bl fn_806AB980
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_00004084
    li r4, 0x0
    b lbl_fn_806B5860_000040D0
lbl_fn_806B5860_00004084:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806B5860_000040CC
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806B5860_000040B8
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806B5860_000040B8
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B5860_000040CC
lbl_fn_806B5860_000040B8:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_000040CC
    li r4, 0x1
    b lbl_fn_806B5860_000040D0
lbl_fn_806B5860_000040CC:
    li r4, 0x0
lbl_fn_806B5860_000040D0:
    neg r0, r4
    addi r3, r1, 0x14
    or r0, r0, r4
    addi r5, r27, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x6c
    addi r4, r1, 0x14
    addi r5, r1, 0x90
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x90
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r25, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r25)
    cntlzw r0, r3
    srwi r24, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r25)
    mr r7, r3
    lwz r12, 0x8a0(r25)
    mr r5, r24
    subi r0, r4, 0x2
    lwz r8, 0x8a4(r25)
    cntlzw r0, r0
    li r3, 0x19
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
    b lbl_fn_806B5860_0000419C
lbl_fn_806B5860_00004164:
    lwz r5, lbl_80860898@l(r28)
    addi r4, r27, 0x5a0
    li r3, 0x400
    li r6, 0xf
    lbz r5, 0x8c4(r5)
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    bl fn_806BC010
    bl fn_806C5EB0
    cmpwi r3, 0x0
    bne lbl_fn_806B5860_00004934
    lwz r3, lbl_80860898@l(r28)
    stw r31, 0x708(r3)
lbl_fn_806B5860_0000419C:
    lis r3, lbl_80860898@ha
    lwz r24, lbl_80860898@l(r3)
    lwz r0, 0x744(r24)
    cmpwi r0, 0xe
    beq lbl_fn_806B5860_000041B8
    cmpwi r0, 0x5
    bne lbl_fn_806B5860_00004250
lbl_fn_806B5860_000041B8:
    lwz r0, 0x728(r24)
    lwz r3, 0x72c(r24)
    or. r0, r3, r0
    beq lbl_fn_806B5860_00004250
    bl OSGetTime
    lis r6, 0x8000
    lwz r8, 0x72c(r24)
    lwz r0, 0xf8(r6)
    lis r5, 0x1062
    addi r6, r5, 0x4dd3
    lwz r7, 0x728(r24)
    srwi r0, r0, 2
    subfc r4, r8, r4
    mulhwu r0, r6, r0
    li r5, 0x0
    subfe r3, r7, r3
    srwi r6, r0, 6
    bl __div2i
    li r0, 0x0
    li r6, 0x2710
    xoris r5, r3, 0x8000
    xoris r0, r0, 0x8000
    subfc r3, r4, r6
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_806B5860_00004250
    addi r4, r27, 0x5c8
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lis r4, lbl_80860898@ha
    li r3, 0x1
    lwz r6, lbl_80860898@l(r4)
    li r4, 0x0
    li r5, 0x0
    addi r6, r6, 0x738
    bl fn_806CA040
lbl_fn_806B5860_00004250:
    lis r31, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r31)
    lwz r0, 0x8e0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_0000454C
    lwz r0, 0x6c0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_0000454C
    lwz r0, 0x744(r3)
    cmpwi r0, 0x1
    bne lbl_fn_806B5860_0000454C
    lwz r0, 0x690(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_0000454C
    lwz r0, 0x58(r3)
    cmpwi r0, 0x2
    ble lbl_fn_806B5860_0000454C
    li r30, 0x1
    li r29, 0x30
    b lbl_fn_806B5860_0000453C
lbl_fn_806B5860_000042A0:
    cmpw r30, r0
    bge lbl_fn_806B5860_000042B4
    add r3, r5, r29
    addi r28, r3, 0x60
    b lbl_fn_806B5860_000042B8
lbl_fn_806B5860_000042B4:
    li r28, 0x0
lbl_fn_806B5860_000042B8:
    lwz r6, lbl_80860898@l(r31)
    li r3, 0x0
    lwz r4, 0x7a8(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806B5860_000042F8
lbl_fn_806B5860_000042D0:
    lwz r0, 0x60(r6)
    cmpw r4, r0
    bne lbl_fn_806B5860_000042EC
    mulli r0, r3, 0x30
    add r3, r5, r0
    addi r0, r3, 0x60
    b lbl_fn_806B5860_000042FC
lbl_fn_806B5860_000042EC:
    addi r6, r6, 0x30
    addi r3, r3, 0x1
    bdnz lbl_fn_806B5860_000042D0
lbl_fn_806B5860_000042F8:
    li r0, 0x0
lbl_fn_806B5860_000042FC:
    cmplw r0, r28
    beq lbl_fn_806B5860_00004534
    lbz r3, 0x16(r28)
    bl fn_806B14D0
    cmpwi r3, 0x0
    bne lbl_fn_806B5860_00004534
    lwz r0, 0x20(r28)
    lwz r3, 0x24(r28)
    or. r0, r3, r0
    bne lbl_fn_806B5860_00004330
    bl fn_806CCFA0
    stw r4, 0x24(r28)
    stw r3, 0x20(r28)
lbl_fn_806B5860_00004330:
    bl OSGetTime
    lwz r0, 0x20(r28)
    xoris r5, r3, 0x8000
    lwz r3, 0x24(r28)
    xoris r0, r0, 0x8000
    subfc r3, r4, r3
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_806B5860_00004534
    lwz r3, 0x18(r28)
    lwz r0, 0x0(r27)
    cmpw r3, r0
    bgt lbl_fn_806B5860_00004534
    lbz r5, 0x16(r28)
    addi r4, r27, 0x5e4
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    bl fn_806CCFA0
    stw r4, 0x24(r28)
    lis r29, lbl_80860898@ha
    li r0, 0x1
    li r4, 0x0
    stw r3, 0x20(r28)
    lwz r6, lbl_80860898@l(r29)
    lwz r3, 0x4(r28)
    lwz r5, 0x0(r28)
    stw r5, 0x660(r6)
    stw r3, 0x664(r6)
    lwz r3, 0xc(r28)
    lwz r5, 0x8(r28)
    stw r5, 0x668(r6)
    stw r3, 0x66c(r6)
    lwz r3, 0x14(r28)
    lwz r5, 0x10(r28)
    stw r5, 0x670(r6)
    stw r3, 0x674(r6)
    lwz r3, 0x1c(r28)
    lwz r5, 0x18(r28)
    stw r5, 0x678(r6)
    stw r3, 0x67c(r6)
    lwz r3, 0x24(r28)
    lwz r5, 0x20(r28)
    stw r5, 0x680(r6)
    stw r3, 0x684(r6)
    lwz r3, 0x2c(r28)
    lwz r5, 0x28(r28)
    stw r5, 0x688(r6)
    stw r3, 0x68c(r6)
    stw r0, 0x6c0(r6)
    lwz r3, 0x0(r28)
    bl fn_806C05F0
    lwz r4, lbl_80860898@l(r29)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_0000441C
    bl fn_806C5EB0
    b lbl_fn_806B5860_00004420
lbl_fn_806B5860_0000441C:
    bl fn_806C5C10
lbl_fn_806B5860_00004420:
    cmpwi r3, 0x0
    beq lbl_fn_806B5860_00004450
    lis r6, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r6)
    li r4, 0x0
    li r5, 0x30
    stw r0, 0x6c0(r3)
    lwz r3, lbl_80860898@l(r6)
    addi r3, r3, 0x660
    bl memset
    b lbl_fn_806B5860_0000454C
lbl_fn_806B5860_00004450:
    lis r28, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r28)
    li r4, 0x0
    li r5, 0x30
    stw r0, 0x6c4(r3)
    lwz r3, lbl_80860898@l(r28)
    addi r3, r3, 0x6c8
    bl memset
    lwz r3, lbl_80860898@l(r28)
    lwz r29, 0x744(r3)
    cmpwi r29, 0x3
    beq lbl_fn_806B5860_00004520
    addi r28, r26, 0x750
    lwz r24, 0x750(r26)
    lwz r25, 0x4(r28)
    bl OSGetTime
    stw r4, 0x4(r28)
    lis r28, 0x1062
    lis r6, 0x8000
    subfc r4, r25, r4
    stw r3, 0x750(r26)
    addi r7, r28, 0x4dd3
    subfe r3, r24, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r28, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r29, 2
    lwz r8, 0xc(r3)
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
lbl_fn_806B5860_00004520:
    lis r3, lbl_80860898@ha
    li r0, 0x3
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
    b lbl_fn_806B5860_0000454C
lbl_fn_806B5860_00004534:
    addi r29, r29, 0x30
    addi r30, r30, 0x1
lbl_fn_806B5860_0000453C:
    lwz r5, lbl_80860898@l(r31)
    lwz r0, 0x58(r5)
    cmpw r30, r0
    blt lbl_fn_806B5860_000042A0
lbl_fn_806B5860_0000454C:
    lis r29, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r29)
    lwz r0, 0x704(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806B5860_000047E8
    li r28, 0x0
    li r0, 0x1
    stw r28, 0x4(r26)
    stw r28, 0x8(r26)
    stw r0, 0xc(r26)
    lwz r3, 0x704(r3)
    bl fn_806FFDD0
    lwz r0, 0x8(r26)
    cmpwi r0, 0x0
    beq lbl_fn_806B5860_0000459C
    lwz r3, lbl_80860898@l(r29)
    lwz r3, 0x704(r3)
    bl fn_806FFA10
    lwz r3, lbl_80860898@l(r29)
    stw r28, 0x704(r3)
lbl_fn_806B5860_0000459C:
    lis r31, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r31)
    lwz r3, 0x704(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806B5860_000047E8
    bl fn_806FFE50
    cmpwi r3, 0x0
    beq lbl_fn_806B5860_000047E8
    lwz r24, lbl_80860898@l(r31)
    lwz r0, 0x718(r24)
    lwz r3, 0x71c(r24)
    or. r0, r3, r0
    beq lbl_fn_806B5860_000047E8
    bl OSGetTime
    lwz r0, 0x718(r24)
    xoris r5, r3, 0x8000
    lwz r3, 0x71c(r24)
    xoris r0, r0, 0x8000
    subfc r3, r4, r3
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_806B5860_000047E8
    lwz r3, lbl_80860898@l(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806B5860_000047D8
    li r0, 0x1
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r31)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r31)
    li r0, 0x0
    lis r4, 0xffff
    li r3, 0x6
    stb r0, 0x751(r5)
    subi r4, r4, 0x4c12
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r31)
    addi r3, r1, 0x8
    addi r5, r27, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x60
    addi r4, r1, 0x8
    addi r5, r1, 0x68
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r31)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B5860_0000468C
    cmpwi r6, 0x0
    bne lbl_fn_806B5860_0000468C
    li r6, 0x1
lbl_fn_806B5860_0000468C:
    addi r3, r1, 0x8
    addi r5, r27, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x64
    addi r4, r1, 0x8
    addi r5, r1, 0x68
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x8
    addi r5, r27, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x68
    addi r4, r1, 0x8
    addi r5, r1, 0x68
    li r6, 0x2f
    bl fn_806AB980
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_000046FC
    li r4, 0x0
    b lbl_fn_806B5860_00004748
lbl_fn_806B5860_000046FC:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806B5860_00004744
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806B5860_00004730
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806B5860_00004730
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B5860_00004744
lbl_fn_806B5860_00004730:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_00004744
    li r4, 0x1
    b lbl_fn_806B5860_00004748
lbl_fn_806B5860_00004744:
    li r4, 0x0
lbl_fn_806B5860_00004748:
    neg r0, r4
    addi r3, r1, 0x8
    or r0, r0, r4
    addi r5, r27, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r27, 0x6c
    addi r4, r1, 0x8
    addi r5, r1, 0x68
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x68
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r25, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r25)
    cntlzw r0, r3
    srwi r24, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r25)
    mr r7, r3
    lwz r12, 0x8a0(r25)
    mr r5, r24
    subi r0, r4, 0x2
    lwz r8, 0x8a4(r25)
    cntlzw r0, r0
    li r3, 0x6
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
lbl_fn_806B5860_000047D8:
    addi r4, r27, 0x604
    li r3, 0x400
    crclr 6
    bl fn_806A76B0
lbl_fn_806B5860_000047E8:
    lis r28, lbl_80860898@ha
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x10(r26)
    lwz r3, lbl_80860898@l(r28)
    stw r0, 0xc(r26)
    lwz r24, 0x10(r3)
    cmpwi r24, 0x0
    beq lbl_fn_806B5860_00004828
    mr r3, r24
    bl fn_806EF5B0
    lwz r0, 0xbc(r24)
    cmpwi r0, 0x0
    bne lbl_fn_806B5860_00004828
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x14(r3)
lbl_fn_806B5860_00004828:
    bl fn_806FCFE0
    lwz r0, 0x10(r26)
    li r3, 0x0
    stw r3, 0xc(r26)
    cmpwi r0, 0x1
    bne lbl_fn_806B5860_00004848
    stw r3, 0x10(r26)
    bl fn_806FBDB0
lbl_fn_806B5860_00004848:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806B5860_00004864
    lwz r3, 0x0(r3)
    bl fn_806EA8A0
lbl_fn_806B5860_00004864:
    lis r31, lbl_80860898@ha
    lwz r24, lbl_80860898@l(r31)
    lwz r0, 0x744(r24)
    cmpwi r0, 0x15
    bne lbl_fn_806B5860_00004914
    bl OSGetTime
    lis r6, 0x8000
    lwz r8, 0x79c(r24)
    lwz r0, 0xf8(r6)
    lis r5, 0x1062
    addi r6, r5, 0x4dd3
    lwz r7, 0x798(r24)
    srwi r0, r0, 2
    subfc r4, r8, r4
    mulhwu r0, r6, r0
    li r5, 0x0
    subfe r3, r7, r3
    srwi r6, r0, 6
    bl __div2i
    li r26, 0x0
    li r6, 0xbb8
    xoris r5, r3, 0x8000
    xoris r0, r26, 0x8000
    subfc r3, r4, r6
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_806B5860_00004914
    addi r4, r27, 0x628
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    addi r4, r27, 0x650
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r31)
    stb r26, 0x18(r3)
    li r3, 0x1
    lwz r4, lbl_80860898@l(r31)
    stw r26, 0x700(r4)
    lwz r4, lbl_80860898@l(r31)
    stb r26, 0x751(r4)
    bl fn_806C3ED0
lbl_fn_806B5860_00004914:
    bl fn_806CC6D0
    li r3, 0x0
    bl fn_806CB8F0
    bl fn_806C4B30
    cmpwi r3, 0x0
    beq lbl_fn_806B5860_00004934
    bl fn_806C57F0
    cmpwi r3, 0x0
lbl_fn_806B5860_00004934:
    addi r11, r1, 0x1d0
    bl _restgpr_24
    lwz r0, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}
