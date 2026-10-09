#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_15(void);
extern void _restgpr_22(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_15(void);
extern void _savegpr_22(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void fn_8067E23C(void);
extern void fn_806809C0(void);
extern void fn_8068236C(void);
extern void fn_80682428(void);
extern void fn_8068446C(void);
extern void fn_806A7110(void);
extern void fn_806A7130(void);
extern void fn_806A72E0(void);
extern void fn_806A7400(void);
extern void fn_806A76B0(void);
extern void fn_806AB920(void);
extern void fn_806AB980(void);
extern void fn_806ACCF0(void);
extern void fn_806ACDB0(void);
extern void fn_806ACE00(void);
extern void fn_806B1230(void);
extern void fn_806B12F0(void);
extern void fn_806B17B0(void);
extern void fn_806B9410(void);
extern void fn_806B9740(void);
extern void fn_806BAE10(void);
extern void fn_806BB3F0(void);
extern void fn_806BB440(void);
extern void fn_806BB6A0(void);
extern void fn_806BBCA0(void);
extern void fn_806C3670(void);
extern void fn_806CB4C0(void);
extern void fn_806CCB70(void);
extern void fn_806CCC70(void);
extern void fn_806CCCB0(void);
extern void fn_806CCCC0(void);
extern void fn_806CCEA0(void);
extern void fn_806CCED0(void);
extern void fn_806CCF50(void);
extern void fn_806CD150(void);
extern void fn_806CD3C0(void);
extern void fn_806CD4E0(void);
extern void fn_806CE0F0(void);
extern void fn_806CE1E0(void);
extern void fn_806CE660(void);
extern void fn_806D7F20(void);
extern void fn_806EABE0(void);
extern void fn_806EAC30(void);
extern void fn_806EAD00(void);
extern void fn_806EAD30(void);
extern void fn_806EEDC0(void);
extern void fn_806EF8B0(void);
extern void fn_806F1DF0(void);
extern void strchr(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8076B608[];
extern u8 lbl_807BDCD0[];
extern u8 lbl_807BDD60[];
extern u8 lbl_807BE128[];
extern u8 lbl_807BE9A8[];
extern u8 lbl_807BE9B4[];
extern u8 lbl_807BE9D0[];
extern u8 lbl_807BEA14[];
extern u8 lbl_8085FF98[];
extern u8 lbl_8085FF9C[];
extern u8 lbl_8085FFA0[];
extern u8 lbl_80860158[];
extern u8 lbl_80860898[];

/* Small data declarations */

/* Function declarations */
void pad_03_806B19FC_text(void);
void fn_806B1A00(void);
void fn_806B1B60(void);
void fn_806B1CD0(void);
void fn_806B1CF0(void);
void fn_806B2000(void);
void fn_806B2470(void);
void fn_806B25F0(void);
void fn_806B2600(void);
void fn_806B2FC0(void);
void fn_806B2FD0(void);
void fn_806B3030(void);
void fn_806B30A0(void);
void fn_806B3160(void);
void fn_806B3220(void);
void fn_806B3680(void);

asm void pad_03_806B19FC_text(void)
{
    nofralloc
    opword 0x00000000
}

asm void fn_806B1A00(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_807BDCD0@ha
    addi r30, r30, lbl_807BDCD0@l
    stw r29, 0x14(r1)
    addi r4, r30, 0x580
    stw r28, 0x10(r1)
    mr r28, r3
    li r3, 0x4
    mr r5, r28
    crclr 6
    bl fn_806A76B0
    lis r31, lbl_8085FF98@ha
    lwz r0, lbl_8085FF98@l(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806B1A00_00000074
    bl fn_806A7110
    cmpwi r3, 0x0
    bne lbl_fn_806B1A00_00000074
    lwz r3, lbl_8085FF98@l(r31)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x4
    beq lbl_fn_806B1A00_0000008C
    cmpwi r0, 0x5
    beq lbl_fn_806B1A00_0000008C
lbl_fn_806B1A00_00000074:
    addi r4, r30, 0xe4
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    li r3, -0x1
    b lbl_fn_806B1A00_00000140
lbl_fn_806B1A00_0000008C:
    cmpwi r3, 0x0
    bne lbl_fn_806B1A00_0000009C
    li r3, 0x0
    b lbl_fn_806B1A00_000000EC
lbl_fn_806B1A00_0000009C:
    lis r29, lbl_8085FFA0@ha
    li r31, 0x0
    addi r29, r29, lbl_8085FFA0@l
lbl_fn_806B1A00_000000A8:
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_806B1A00_000000D8
    bl fn_806EAD30
    lbz r0, 0x1(r3)
    cmplw r28, r0
    bne lbl_fn_806B1A00_000000D8
    lis r3, lbl_8085FFA0@ha
    slwi r0, r31, 2
    addi r3, r3, lbl_8085FFA0@l
    lwzx r3, r3, r0
    b lbl_fn_806B1A00_000000EC
lbl_fn_806B1A00_000000D8:
    addi r31, r31, 0x1
    addi r29, r29, 0x4
    cmpwi r31, 0x20
    blt lbl_fn_806B1A00_000000A8
    li r3, 0x0
lbl_fn_806B1A00_000000EC:
    cmpwi r3, 0x0
    bne lbl_fn_806B1A00_00000138
    mr r3, r28
    bl fn_806CCF50
    cmpwi r3, 0x0
    bne lbl_fn_806B1A00_0000011C
    addi r4, r30, 0x5b8
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    li r3, -0x2
    b lbl_fn_806B1A00_00000140
lbl_fn_806B1A00_0000011C:
    lbz r6, 0x16(r3)
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    bl fn_806B2600
    li r3, 0x0
    b lbl_fn_806B1A00_00000140
lbl_fn_806B1A00_00000138:
    bl fn_806EABE0
    li r3, 0x0
lbl_fn_806B1A00_00000140:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806B1B60(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r4
    stw r30, 0x48(r1)
    mr r30, r3
    stw r29, 0x44(r1)
    bne lbl_fn_806B1B60_00000218
    lis r29, lbl_8085FF98@ha
    lis r8, lbl_8076B608@ha
    lwz r6, lbl_8085FF98@l(r29)
    addi r8, r8, lbl_8076B608@l
    addi r5, r1, 0x20
    lis r3, lbl_807BDD60@ha
    stw r4, 0x64(r6)
    addi r4, r3, lbl_807BDD60@l
    li r3, 0x4
    lwz r7, lbl_8085FF98@l(r29)
    lwz r6, 0xc(r8)
    lwz r12, 0x0(r8)
    lwz r11, 0x4(r8)
    lwz r10, 0x8(r8)
    lwz r9, 0x10(r8)
    lwz r8, 0x14(r8)
    lwz r0, 0x24(r7)
    stw r12, 0x20(r1)
    slwi r0, r0, 2
    stw r11, 0x24(r1)
    stw r10, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r9, 0x30(r1)
    stw r8, 0x34(r1)
    lwzx r5, r5, r0
    crclr 6
    bl fn_806A76B0
    lwz r4, lbl_8085FF98@l(r29)
    li r0, 0x3
    lwz r3, 0x24(r4)
    stw r3, 0x28(r4)
    lwz r3, lbl_8085FF98@l(r29)
    stw r0, 0x24(r3)
    bl fn_806ACDB0
    b lbl_fn_806B1B60_00000290
lbl_fn_806B1B60_00000218:
    lis r29, lbl_8085FF98@ha
    lis r8, lbl_8076B608@ha
    lwzu r6, lbl_8076B608@l(r8)
    lis r4, lbl_807BDD60@ha
    lwz r7, lbl_8085FF98@l(r29)
    addi r5, r1, 0x8
    lwz r12, 0x4(r8)
    addi r4, r4, lbl_807BDD60@l
    lwz r11, 0x8(r8)
    li r3, 0x4
    lwz r10, 0xc(r8)
    lwz r9, 0x10(r8)
    lwz r8, 0x14(r8)
    lwz r0, 0x24(r7)
    stw r6, 0x8(r1)
    slwi r0, r0, 2
    stw r12, 0xc(r1)
    stw r11, 0x10(r1)
    stw r10, 0x14(r1)
    stw r9, 0x18(r1)
    stw r8, 0x1c(r1)
    lwzx r5, r5, r0
    crclr 6
    bl fn_806A76B0
    lwz r4, lbl_8085FF98@l(r29)
    li r0, 0x0
    lwz r3, 0x24(r4)
    stw r3, 0x28(r4)
    lwz r3, lbl_8085FF98@l(r29)
    stw r0, 0x24(r3)
lbl_fn_806B1B60_00000290:
    lis r3, lbl_8085FF98@ha
    lwz r5, lbl_8085FF98@l(r3)
    lwz r12, 0x70(r5)
    cmpwi r12, 0x0
    beq lbl_fn_806B1B60_000002B8
    mr r3, r30
    mr r4, r31
    lwz r5, 0x74(r5)
    mtctr r12
    bctrl
lbl_fn_806B1B60_000002B8:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_806B1CD0(void)
{
    nofralloc
    lis r5, lbl_8085FF98@ha
    lwz r5, lbl_8085FF98@l(r5)
    lwz r12, 0x78(r5)
    lwz r5, 0x7c(r5)
    mtctr r12
    bctr
}

asm void fn_806B1CF0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_22
    cmpwi r3, 0x0
    lis r30, lbl_807BDCD0@ha
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    addi r30, r30, lbl_807BDCD0@l
    bne lbl_fn_806B1CF0_000003C0
    cmpwi r4, 0x0
    beq lbl_fn_806B1CF0_000003C0
    lis r31, lbl_8085FF98@ha
    lwz r3, lbl_8085FF98@l(r31)
    lwz r0, 0xaa4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B1CF0_00000440
    lis r7, lbl_8076B608@ha
    lwz r0, 0x24(r3)
    addi r7, r7, lbl_8076B608@l
    addi r5, r1, 0x38
    lwz r6, 0xc(r7)
    slwi r0, r0, 2
    lwz r11, 0x0(r7)
    addi r4, r30, 0x90
    lwz r10, 0x4(r7)
    li r3, 0x4
    lwz r9, 0x8(r7)
    lwz r8, 0x10(r7)
    lwz r7, 0x14(r7)
    stw r11, 0x38(r1)
    stw r10, 0x3c(r1)
    stw r9, 0x40(r1)
    stw r6, 0x44(r1)
    stw r8, 0x48(r1)
    stw r7, 0x4c(r1)
    lwzx r5, r5, r0
    crclr 6
    bl fn_806A76B0
    lwz r4, lbl_8085FF98@l(r31)
    li r0, 0x3
    lwz r3, 0x24(r4)
    stw r3, 0x28(r4)
    lwz r3, lbl_8085FF98@l(r31)
    stw r0, 0x24(r3)
    bl fn_806B9740
    b lbl_fn_806B1CF0_00000440
lbl_fn_806B1CF0_000003C0:
    cmpwi r3, 0x0
    bne lbl_fn_806B1CF0_00000440
    lis r31, lbl_8085FF98@ha
    lis r8, lbl_8076B608@ha
    lwz r7, lbl_8085FF98@l(r31)
    addi r8, r8, lbl_8076B608@l
    lwz r6, 0x14(r8)
    addi r5, r1, 0x20
    lwz r12, 0x0(r8)
    addi r4, r30, 0x90
    lwz r11, 0x4(r8)
    li r3, 0x4
    lwz r10, 0x8(r8)
    lwz r9, 0xc(r8)
    lwz r8, 0x10(r8)
    lwz r0, 0x24(r7)
    stw r12, 0x20(r1)
    slwi r0, r0, 2
    stw r11, 0x24(r1)
    stw r10, 0x28(r1)
    stw r9, 0x2c(r1)
    stw r8, 0x30(r1)
    stw r6, 0x34(r1)
    lwzx r5, r5, r0
    crclr 6
    bl fn_806A76B0
    lwz r4, lbl_8085FF98@l(r31)
    li r0, 0x5
    lwz r3, 0x24(r4)
    stw r3, 0x28(r4)
    lwz r3, lbl_8085FF98@l(r31)
    stw r0, 0x24(r3)
lbl_fn_806B1CF0_00000440:
    cmpwi r25, 0x0
    bne lbl_fn_806B1CF0_00000520
    addi r4, r30, 0x60c
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    li r22, 0x0
    li r24, 0x0
    lis r31, lbl_8085FF98@ha
    b lbl_fn_806B1CF0_000004A8
lbl_fn_806B1CF0_00000468:
    lwz r0, lbl_8085FF98@l(r31)
    li r5, 0x0
    add r23, r0, r24
    lwz r3, 0x3c4(r23)
    lhz r4, 0x3cc(r23)
    bl fn_806EEDC0
    lbz r6, 0x3d6(r23)
    mr r8, r3
    lwz r7, 0x3c0(r23)
    mr r5, r22
    addi r4, r30, 0x61c
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    addi r24, r24, 0x30
    addi r22, r22, 0x1
lbl_fn_806B1CF0_000004A8:
    lwz r3, lbl_8085FF98@l(r31)
    lwz r0, 0x3b8(r3)
    cmpw r22, r0
    blt lbl_fn_806B1CF0_00000468
    addi r4, r30, 0x648
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    li r23, 0x0
    li r24, 0x0
    lis r31, lbl_8085FF98@ha
    b lbl_fn_806B1CF0_00000510
lbl_fn_806B1CF0_000004D8:
    lwz r0, lbl_8085FF98@l(r31)
    mr r5, r23
    addi r4, r30, 0x658
    li r3, 0x4
    add r10, r0, r24
    lbz r6, 0x3d6(r10)
    lbz r7, 0x3e8(r10)
    lbz r8, 0x3e9(r10)
    lbz r9, 0x3ea(r10)
    lbz r10, 0x3eb(r10)
    crclr 6
    bl fn_806A76B0
    addi r24, r24, 0x30
    addi r23, r23, 0x1
lbl_fn_806B1CF0_00000510:
    lwz r3, lbl_8085FF98@l(r31)
    lwz r0, 0x3b8(r3)
    cmpw r23, r0
    blt lbl_fn_806B1CF0_000004D8
lbl_fn_806B1CF0_00000520:
    lis r3, lbl_8085FF98@ha
    lwz r8, lbl_8085FF98@l(r3)
    lbz r0, 0xc45(r8)
    cmpwi r0, 0x0
    bne lbl_fn_806B1CF0_00000558
    lwz r12, 0x80(r8)
    mr r3, r25
    mr r4, r26
    mr r5, r27
    mr r6, r28
    mr r7, r29
    lwz r8, 0x84(r8)
    mtctr r12
    bctrl
lbl_fn_806B1CF0_00000558:
    cmpwi r25, 0x0
    beq lbl_fn_806B1CF0_000005EC
    lis r25, lbl_8085FF98@ha
    lwz r3, lbl_8085FF98@l(r25)
    cmpwi r3, 0x0
    beq lbl_fn_806B1CF0_000005EC
    lwz r3, 0x24(r3)
    subi r0, r3, 0x4
    cmplwi r0, 0x1
    bgt lbl_fn_806B1CF0_000005EC
    lis r7, lbl_8076B608@ha
    slwi r0, r3, 2
    addi r7, r7, lbl_8076B608@l
    addi r5, r1, 0x8
    lwz r6, 0xc(r7)
    addi r4, r30, 0x90
    lwz r11, 0x0(r7)
    li r3, 0x4
    lwz r10, 0x4(r7)
    lwz r9, 0x8(r7)
    lwz r8, 0x10(r7)
    lwz r7, 0x14(r7)
    stw r11, 0x8(r1)
    stw r10, 0xc(r1)
    stw r9, 0x10(r1)
    stw r6, 0x14(r1)
    stw r8, 0x18(r1)
    stw r7, 0x1c(r1)
    lwzx r5, r5, r0
    crclr 6
    bl fn_806A76B0
    lwz r4, lbl_8085FF98@l(r25)
    li r0, 0x3
    lwz r3, 0x24(r4)
    stw r3, 0x28(r4)
    lwz r3, lbl_8085FF98@l(r25)
    stw r0, 0x24(r3)
lbl_fn_806B1CF0_000005EC:
    addi r11, r1, 0x80
    bl _restgpr_22
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_806B2000(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807BDCD0@ha
    addi r31, r31, lbl_807BDCD0@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r5, 0x4(r4)
    cmpwi r5, 0x603
    beq lbl_fn_806B2000_00000648
    cmpwi r5, 0x901
    beq lbl_fn_806B2000_00000648
    cmpwi r5, 0xb01
    bne lbl_fn_806B2000_0000065C
lbl_fn_806B2000_00000648:
    addi r4, r31, 0x688
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806B2000_00000A54
lbl_fn_806B2000_0000065C:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806B2000_0000068C
    cmpwi r0, 0x1
    beq lbl_fn_806B2000_00000694
    cmpwi r0, 0x2
    beq lbl_fn_806B2000_0000069C
    cmpwi r0, 0x3
    beq lbl_fn_806B2000_000006A4
    cmpwi r0, 0x4
    beq lbl_fn_806B2000_000006AC
    b lbl_fn_806B2000_000006B4
lbl_fn_806B2000_0000068C:
    addi r29, r31, 0x6b4
    b lbl_fn_806B2000_000006B8
lbl_fn_806B2000_00000694:
    addi r29, r31, 0x6c0
    b lbl_fn_806B2000_000006B8
lbl_fn_806B2000_0000069C:
    addi r29, r31, 0x6d0
    b lbl_fn_806B2000_000006B8
lbl_fn_806B2000_000006A4:
    addi r29, r31, 0x6e4
    b lbl_fn_806B2000_000006B8
lbl_fn_806B2000_000006AC:
    addi r29, r31, 0x6f8
    b lbl_fn_806B2000_000006B8
lbl_fn_806B2000_000006B4:
    addi r29, r31, 0x708
lbl_fn_806B2000_000006B8:
    cmpwi r5, 0x402
    beq lbl_fn_806B2000_0000092C
    bge lbl_fn_806B2000_00000794
    cmpwi r5, 0x104
    beq lbl_fn_806B2000_000008CC
    bge lbl_fn_806B2000_00000734
    cmpwi r5, 0x6
    beq lbl_fn_806B2000_0000089C
    bge lbl_fn_806B2000_00000708
    cmpwi r5, 0x2
    beq lbl_fn_806B2000_0000087C
    bge lbl_fn_806B2000_000006F8
    cmpwi r5, 0x0
    beq lbl_fn_806B2000_0000086C
    bge lbl_fn_806B2000_00000874
    b lbl_fn_806B2000_000009D4
lbl_fn_806B2000_000006F8:
    cmpwi r5, 0x4
    beq lbl_fn_806B2000_0000088C
    bge lbl_fn_806B2000_00000894
    b lbl_fn_806B2000_00000884
lbl_fn_806B2000_00000708:
    cmpwi r5, 0x101
    beq lbl_fn_806B2000_000008B4
    bge lbl_fn_806B2000_00000728
    cmpwi r5, 0x100
    bge lbl_fn_806B2000_000008AC
    cmpwi r5, 0x8
    bge lbl_fn_806B2000_000009D4
    b lbl_fn_806B2000_000008A4
lbl_fn_806B2000_00000728:
    cmpwi r5, 0x103
    bge lbl_fn_806B2000_000008C4
    b lbl_fn_806B2000_000008BC
lbl_fn_806B2000_00000734:
    cmpwi r5, 0x202
    beq lbl_fn_806B2000_00000904
    bge lbl_fn_806B2000_0000076C
    cmpwi r5, 0x108
    beq lbl_fn_806B2000_000008EC
    bge lbl_fn_806B2000_0000075C
    cmpwi r5, 0x106
    beq lbl_fn_806B2000_000008DC
    bge lbl_fn_806B2000_000008E4
    b lbl_fn_806B2000_000008D4
lbl_fn_806B2000_0000075C:
    cmpwi r5, 0x200
    beq lbl_fn_806B2000_000008F4
    bge lbl_fn_806B2000_000008FC
    b lbl_fn_806B2000_000009D4
lbl_fn_806B2000_0000076C:
    cmpwi r5, 0x301
    beq lbl_fn_806B2000_00000914
    bge lbl_fn_806B2000_00000784
    cmpwi r5, 0x300
    bge lbl_fn_806B2000_0000090C
    b lbl_fn_806B2000_000009D4
lbl_fn_806B2000_00000784:
    cmpwi r5, 0x400
    beq lbl_fn_806B2000_0000091C
    bge lbl_fn_806B2000_00000924
    b lbl_fn_806B2000_000009D4
lbl_fn_806B2000_00000794:
    cmpwi r5, 0x900
    beq lbl_fn_806B2000_00000984
    bge lbl_fn_806B2000_00000804
    cmpwi r5, 0x603
    beq lbl_fn_806B2000_0000095C
    bge lbl_fn_806B2000_000007DC
    cmpwi r5, 0x600
    beq lbl_fn_806B2000_00000944
    bge lbl_fn_806B2000_000007D0
    cmpwi r5, 0x501
    beq lbl_fn_806B2000_0000093C
    bge lbl_fn_806B2000_000009D4
    cmpwi r5, 0x500
    bge lbl_fn_806B2000_00000934
    b lbl_fn_806B2000_000009D4
lbl_fn_806B2000_000007D0:
    cmpwi r5, 0x602
    bge lbl_fn_806B2000_00000954
    b lbl_fn_806B2000_0000094C
lbl_fn_806B2000_000007DC:
    cmpwi r5, 0x702
    beq lbl_fn_806B2000_00000974
    bge lbl_fn_806B2000_000007F8
    cmpwi r5, 0x700
    beq lbl_fn_806B2000_00000964
    bge lbl_fn_806B2000_0000096C
    b lbl_fn_806B2000_000009D4
lbl_fn_806B2000_000007F8:
    cmpwi r5, 0x800
    beq lbl_fn_806B2000_0000097C
    b lbl_fn_806B2000_000009D4
lbl_fn_806B2000_00000804:
    cmpwi r5, 0xb01
    beq lbl_fn_806B2000_000009AC
    bge lbl_fn_806B2000_0000083C
    cmpwi r5, 0xa01
    beq lbl_fn_806B2000_0000099C
    bge lbl_fn_806B2000_00000830
    cmpwi r5, 0xa00
    bge lbl_fn_806B2000_00000994
    cmpwi r5, 0x902
    bge lbl_fn_806B2000_000009D4
    b lbl_fn_806B2000_0000098C
lbl_fn_806B2000_00000830:
    cmpwi r5, 0xb00
    bge lbl_fn_806B2000_000009A4
    b lbl_fn_806B2000_000009D4
lbl_fn_806B2000_0000083C:
    cmpwi r5, 0xd00
    beq lbl_fn_806B2000_000009C4
    bge lbl_fn_806B2000_00000860
    cmpwi r5, 0xc01
    beq lbl_fn_806B2000_000009BC
    bge lbl_fn_806B2000_000009D4
    cmpwi r5, 0xc00
    bge lbl_fn_806B2000_000009B4
    b lbl_fn_806B2000_000009D4
lbl_fn_806B2000_00000860:
    cmpwi r5, 0xd02
    bge lbl_fn_806B2000_000009D4
    b lbl_fn_806B2000_000009CC
lbl_fn_806B2000_0000086C:
    addi r30, r31, 0x71c
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_00000874:
    addi r30, r31, 0x728
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_0000087C:
    addi r30, r31, 0x734
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_00000884:
    addi r30, r31, 0x748
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_0000088C:
    addi r30, r31, 0x758
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_00000894:
    addi r30, r31, 0x764
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_0000089C:
    addi r30, r31, 0x770
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_000008A4:
    addi r30, r31, 0x788
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_000008AC:
    addi r30, r31, 0x7a0
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_000008B4:
    addi r30, r31, 0x7ac
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_000008BC:
    addi r30, r31, 0x7c0
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_000008C4:
    addi r30, r31, 0x7d4
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_000008CC:
    addi r30, r31, 0x7e8
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_000008D4:
    addi r30, r31, 0x800
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_000008DC:
    addi r30, r31, 0x818
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_000008E4:
    addi r30, r31, 0x834
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_000008EC:
    addi r30, r31, 0x850
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_000008F4:
    addi r30, r31, 0x86c
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_000008FC:
    addi r30, r31, 0x878
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_00000904:
    addi r30, r31, 0x890
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_0000090C:
    addi r30, r31, 0x8a8
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_00000914:
    addi r30, r31, 0x8b4
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_0000091C:
    addi r30, r31, 0x8cc
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_00000924:
    addi r30, r31, 0x8dc
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_0000092C:
    addi r30, r31, 0x8f4
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_00000934:
    addi r30, r31, 0x910
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_0000093C:
    addi r30, r31, 0x920
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_00000944:
    addi r30, r31, 0x938
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_0000094C:
    addi r30, r31, 0x944
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_00000954:
    addi r30, r31, 0x95c
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_0000095C:
    addi r30, r31, 0x970
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_00000964:
    addi r30, r31, 0x98c
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_0000096C:
    addi r30, r31, 0x998
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_00000974:
    addi r30, r31, 0x9ac
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_0000097C:
    addi r30, r31, 0x9c0
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_00000984:
    addi r30, r31, 0x9cc
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_0000098C:
    addi r30, r31, 0x9d8
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_00000994:
    addi r30, r31, 0x9e8
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_0000099C:
    addi r30, r31, 0x9f8
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_000009A4:
    addi r30, r31, 0xa14
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_000009AC:
    addi r30, r31, 0xa20
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_000009B4:
    addi r30, r31, 0xa38
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_000009BC:
    addi r30, r31, 0xa48
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_000009C4:
    addi r30, r31, 0xa64
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_000009CC:
    addi r30, r31, 0xa70
    b lbl_fn_806B2000_000009D8
lbl_fn_806B2000_000009D4:
    addi r30, r31, 0xa8c
lbl_fn_806B2000_000009D8:
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806B2000_000009F8
    addi r4, r31, 0xaa4
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806B2000_00000A08
lbl_fn_806B2000_000009F8:
    addi r4, r31, 0xab4
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
lbl_fn_806B2000_00000A08:
    lwz r6, 0x0(r28)
    mr r5, r29
    addi r4, r31, 0xabc
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
    lwz r6, 0x4(r28)
    mr r5, r30
    addi r4, r31, 0xad0
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
    lwz r5, 0x8(r28)
    addi r4, r31, 0xae8
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
    li r3, 0x3
    bl fn_806B17B0
lbl_fn_806B2000_00000A54:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806B2470(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    li r0, 0x0
    stw r0, 0x8(r1)
    lis r31, lbl_807BDCD0@ha
    mr r27, r3
    addi r31, r31, lbl_807BDCD0@l
    stw r0, 0xc(r1)
    mr r28, r4
    stw r0, 0x10(r1)
    addi r3, r31, 0xafc
    lwz r30, 0x8(r4)
    bl strlen
    mr r5, r3
    mr r3, r30
    addi r4, r31, 0xafc
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_806B2470_00000AE4
    mr r5, r30
    addi r4, r31, 0xb08
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806B2470_00000BD0
lbl_fn_806B2470_00000AE4:
    addi r3, r31, 0xafc
    bl strlen
    add r30, r30, r3
    li r4, 0x76
    mr r3, r30
    bl strchr
    subf r29, r30, r3
    mr r4, r30
    mr r5, r29
    addi r3, r1, 0x8
    bl fn_8068236C
    cmplwi r29, 0xa
    bgt lbl_fn_806B2470_00000B30
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0xa
    bl fn_8068446C
    cmplwi r3, 0x5a
    beq lbl_fn_806B2470_00000B48
lbl_fn_806B2470_00000B30:
    mr r5, r30
    addi r4, r31, 0xb30
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806B2470_00000BD0
lbl_fn_806B2470_00000B48:
    add r4, r29, r30
    addi r3, r31, 0xb68
    addi r30, r4, 0x1
    bl strlen
    mr r5, r3
    mr r3, r30
    addi r4, r31, 0xb68
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_806B2470_00000BD0
    lis r3, lbl_8085FF98@ha
    lwz r3, lbl_8085FF98@l(r3)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x4
    beq lbl_fn_806B2470_00000BA4
    cmpwi r0, 0x5
    bne lbl_fn_806B2470_00000BC0
    lbz r0, 0x374(r3)
    cmplwi r0, 0x2
    beq lbl_fn_806B2470_00000BA4
    lbz r0, 0x374(r3)
    cmplwi r0, 0x3
    bne lbl_fn_806B2470_00000BC0
lbl_fn_806B2470_00000BA4:
    addi r3, r31, 0xb68
    bl strlen
    lwz r4, 0x0(r28)
    add r5, r30, r3
    mr r3, r27
    bl fn_806B9410
    b lbl_fn_806B2470_00000BD0
lbl_fn_806B2470_00000BC0:
    addi r4, r31, 0xb6c
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
lbl_fn_806B2470_00000BD0:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806B25F0(void)
{
    nofralloc
    b fn_806CE0F0
}

asm void fn_806B2600(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_15
    lis r18, lbl_807BDCD0@ha
    mr r15, r3
    mr r24, r4
    mr r16, r5
    mr r25, r6
    addi r18, r18, lbl_807BDCD0@l
    li r31, 0x0
    li r28, 0x0
    bl fn_806BB6A0
    cmpwi r3, 0x0
    beq lbl_fn_806B2600_00000C58
    addi r4, r18, 0xb94
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806B2600_000015AC
lbl_fn_806B2600_00000C58:
    cmplwi r24, 0x1
    ble lbl_fn_806B2600_00000C78
    subi r0, r24, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_806B2600_00000C84
    cmpwi r24, 0x4
    beq lbl_fn_806B2600_00000C90
    b lbl_fn_806B2600_00000C98
lbl_fn_806B2600_00000C78:
    li r26, 0x0
    li r30, 0x0
    b lbl_fn_806B2600_00000C98
lbl_fn_806B2600_00000C84:
    li r26, 0x6
    li r30, -0x1db0
    b lbl_fn_806B2600_00000C98
lbl_fn_806B2600_00000C90:
    li r26, 0x9
    li r30, -0x1db1
lbl_fn_806B2600_00000C98:
    mr r5, r24
    mr r6, r16
    addi r4, r18, 0xbd0
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    cmpwi r26, 0x0
    bne lbl_fn_806B2600_00000E68
    cmpwi r16, 0x0
    bne lbl_fn_806B2600_00000CD8
    mr r3, r15
    bl fn_806EAD30
    cmpwi r3, 0x0
    mr r15, r3
    beq lbl_fn_806B2600_000015AC
    lbz r25, 0x1(r3)
lbl_fn_806B2600_00000CD8:
    clrlwi r3, r25, 24
    bl fn_806CCF50
    neg r0, r3
    cmpwi r16, 0x0
    or r0, r0, r3
    srwi r27, r0, 31
    bne lbl_fn_806B2600_00000CFC
    clrlwi r3, r25, 24
    bl fn_806CE660
lbl_fn_806B2600_00000CFC:
    mr r6, r27
    addi r4, r18, 0xc00
    clrlwi r5, r25, 24
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    bl fn_806CCEA0
    cmpwi r3, 0x0
    beq lbl_fn_806B2600_00000D48
    bl fn_806CCEA0
    lbz r3, 0x16(r3)
    clrlwi r0, r25, 24
    cmplw r0, r3
    bne lbl_fn_806B2600_00000D48
    addi r4, r18, 0xc1c
    li r28, 0x1
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
lbl_fn_806B2600_00000D48:
    clrlwi r3, r25, 24
    bl fn_806CCF50
    cmpwi r3, 0x0
    bne lbl_fn_806B2600_00000D60
    li r31, 0x0
    b lbl_fn_806B2600_00000D6C
lbl_fn_806B2600_00000D60:
    lwz r31, 0x0(r3)
    clrlwi r3, r25, 24
    bl fn_806CCCC0
lbl_fn_806B2600_00000D6C:
    lis r20, lbl_8085FF98@ha
    clrlwi r0, r25, 24
    lwz r4, lbl_8085FF98@l(r20)
    li r19, 0x1
    slw r0, r19, r0
    lwz r3, 0x37c(r4)
    andc r0, r3, r0
    stw r0, 0x37c(r4)
    lwz r3, lbl_8085FF98@l(r20)
    lwz r0, 0x3ac(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806B2600_00000DB8
    cmpwi r28, 0x0
    beq lbl_fn_806B2600_00000DB8
    bl fn_806CB4C0
    cmpwi r3, 0x0
    bne lbl_fn_806B2600_00000DB8
    lwz r3, lbl_8085FF98@l(r20)
    stw r19, 0x3a8(r3)
lbl_fn_806B2600_00000DB8:
    cmpwi r31, 0x0
    bne lbl_fn_806B2600_00000E48
    lis r3, lbl_8085FF98@ha
    lwz r0, lbl_8085FF98@l(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B2600_00000DD8
    li r3, 0x0
    b lbl_fn_806B2600_00000E2C
lbl_fn_806B2600_00000DD8:
    lis r20, lbl_8085FFA0@ha
    clrlwi r17, r25, 24
    addi r20, r20, lbl_8085FFA0@l
    li r19, 0x0
lbl_fn_806B2600_00000DE8:
    lwz r3, 0x0(r20)
    cmpwi r3, 0x0
    beq lbl_fn_806B2600_00000E18
    bl fn_806EAD30
    lbz r0, 0x1(r3)
    cmplw r17, r0
    bne lbl_fn_806B2600_00000E18
    lis r3, lbl_8085FFA0@ha
    slwi r0, r19, 2
    addi r3, r3, lbl_8085FFA0@l
    lwzx r3, r3, r0
    b lbl_fn_806B2600_00000E2C
lbl_fn_806B2600_00000E18:
    addi r19, r19, 0x1
    addi r20, r20, 0x4
    cmpwi r19, 0x20
    blt lbl_fn_806B2600_00000DE8
    li r3, 0x0
lbl_fn_806B2600_00000E2C:
    bl fn_806EAD30
    lwz r31, 0x4(r3)
    addi r4, r18, 0xc40
    li r3, 0x4
    mr r5, r31
    crclr 6
    bl fn_806A76B0
lbl_fn_806B2600_00000E48:
    cmpwi r16, 0x0
    bne lbl_fn_806B2600_00000E68
    lbz r0, 0x0(r15)
    lis r3, lbl_8085FFA0@ha
    addi r3, r3, lbl_8085FFA0@l
    li r4, 0x0
    slwi r0, r0, 2
    stwx r4, r3, r0
lbl_fn_806B2600_00000E68:
    lis r3, lbl_8085FF98@ha
    lwz r3, lbl_8085FF98@l(r3)
    lwz r0, 0xc54(r3)
    cmpwi r0, 0x1
    bne lbl_fn_806B2600_00000F38
    cmpwi r3, 0x0
    bne lbl_fn_806B2600_00000E8C
    li r0, 0x0
    b lbl_fn_806B2600_00000F1C
lbl_fn_806B2600_00000E8C:
    beq lbl_fn_806B2600_00000EC0
    lwz r4, 0xaa4(r3)
    subi r0, r4, 0x9
    cmplwi r0, 0x2
    ble lbl_fn_806B2600_00000EC0
    cmpwi r4, 0x0
    beq lbl_fn_806B2600_00000EC0
    lbz r0, 0x36d(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806B2600_00000EC0
    lbz r0, 0x376(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B2600_00000EC8
lbl_fn_806B2600_00000EC0:
    li r0, 0xff
    b lbl_fn_806B2600_00000EF4
lbl_fn_806B2600_00000EC8:
    li r3, 0x0
    bl fn_806CCED0
    cmpwi r3, 0x0
    bne lbl_fn_806B2600_00000EF0
    addi r4, r18, 0x458
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    li r0, 0xff
    b lbl_fn_806B2600_00000EF4
lbl_fn_806B2600_00000EF0:
    lbz r0, 0x16(r3)
lbl_fn_806B2600_00000EF4:
    cmplwi r0, 0xff
    bne lbl_fn_806B2600_00000F04
    li r0, 0x0
    b lbl_fn_806B2600_00000F1C
lbl_fn_806B2600_00000F04:
    lis r3, lbl_8085FF98@ha
    lwz r3, lbl_8085FF98@l(r3)
    lbz r3, 0x376(r3)
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_806B2600_00000F1C:
    cmpwi r0, 0x0
    beq lbl_fn_806B2600_00000F38
    lis r3, lbl_8085FF98@ha
    li r0, 0x1
    lwz r3, lbl_8085FF98@l(r3)
    stw r0, 0xc54(r3)
    b lbl_fn_806B2600_00000FCC
lbl_fn_806B2600_00000F38:
    lis r3, lbl_8085FF98@ha
    lwz r4, lbl_8085FF98@l(r3)
    lbz r0, 0x375(r4)
    cmplwi r0, 0x3
    beq lbl_fn_806B2600_00000F58
    lbz r0, 0x375(r4)
    cmplwi r0, 0x2
    bne lbl_fn_806B2600_00000F64
lbl_fn_806B2600_00000F58:
    li r0, 0x0
    stw r0, 0xc54(r4)
    b lbl_fn_806B2600_00000FCC
lbl_fn_806B2600_00000F64:
    cmpwi r4, 0x0
    beq lbl_fn_806B2600_00000F94
    lbz r0, 0x375(r4)
    li r3, 0x0
    cmplwi r0, 0x2
    beq lbl_fn_806B2600_00000F88
    lbz r0, 0x36d(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806B2600_00000F8C
lbl_fn_806B2600_00000F88:
    li r3, 0x1
lbl_fn_806B2600_00000F8C:
    cmpwi r3, 0x0
    bne lbl_fn_806B2600_00000F9C
lbl_fn_806B2600_00000F94:
    li r3, 0x0
    b lbl_fn_806B2600_00000FA0
lbl_fn_806B2600_00000F9C:
    bl fn_806CCCB0
lbl_fn_806B2600_00000FA0:
    cmpwi r3, 0x1
    bne lbl_fn_806B2600_00000FBC
    lis r3, lbl_8085FF98@ha
    li r0, 0x1
    lwz r3, lbl_8085FF98@l(r3)
    stw r0, 0xc54(r3)
    b lbl_fn_806B2600_00000FCC
lbl_fn_806B2600_00000FBC:
    lis r3, lbl_8085FF98@ha
    li r0, 0x0
    lwz r3, lbl_8085FF98@l(r3)
    stw r0, 0xc54(r3)
lbl_fn_806B2600_00000FCC:
    bl fn_806CB4C0
    cmpwi r3, 0x0
    beq lbl_fn_806B2600_00001130
    lis r19, lbl_8085FF98@ha
    lis r21, lbl_8085FFA0@ha
    lwz r3, lbl_8085FF98@l(r19)
    li r0, 0x0
    addi r22, r21, lbl_8085FFA0@l
    li r29, 0x0
    stw r0, 0xc1c(r3)
    li r23, 0x1
    b lbl_fn_806B2600_00001108
lbl_fn_806B2600_00000FFC:
    mr r3, r29
    bl fn_806CCED0
    lwz r5, lbl_8085FF98@l(r19)
    mr r20, r3
    lwz r4, 0x0(r3)
    lwz r0, 0xb08(r5)
    cmpw r4, r0
    beq lbl_fn_806B2600_000010E4
    cmpwi r5, 0x0
    lbz r17, 0x16(r3)
    bne lbl_fn_806B2600_00001030
    li r0, 0x0
    b lbl_fn_806B2600_00001074
lbl_fn_806B2600_00001030:
    addi r15, r21, lbl_8085FFA0@l
    li r16, 0x0
lbl_fn_806B2600_00001038:
    lwz r3, 0x0(r15)
    cmpwi r3, 0x0
    beq lbl_fn_806B2600_00001060
    bl fn_806EAD30
    lbz r0, 0x1(r3)
    cmplw r17, r0
    bne lbl_fn_806B2600_00001060
    slwi r0, r16, 2
    lwzx r0, r22, r0
    b lbl_fn_806B2600_00001074
lbl_fn_806B2600_00001060:
    addi r16, r16, 0x1
    addi r15, r15, 0x4
    cmpwi r16, 0x20
    blt lbl_fn_806B2600_00001038
    li r0, 0x0
lbl_fn_806B2600_00001074:
    cmpwi r0, 0x0
    bne lbl_fn_806B2600_000010E4
    lwz r15, lbl_8085FF98@l(r19)
    lwz r0, 0x88(r15)
    cmpwi r0, 0x0
    beq lbl_fn_806B2600_000010C4
    cntlzw r0, r24
    lwz r3, 0x0(r20)
    srwi r16, r0, 5
    bl fn_806ACCF0
    lwz r5, lbl_8085FF98@l(r19)
    mr r7, r3
    mr r3, r26
    mr r4, r16
    lwz r12, 0x88(r5)
    mr r5, r28
    lbz r6, 0x16(r20)
    lwz r8, 0x8c(r15)
    mtctr r12
    bctrl
lbl_fn_806B2600_000010C4:
    lbz r15, 0x16(r20)
    mr r3, r15
    bl fn_806CCF50
    cmpwi r3, 0x0
    beq lbl_fn_806B2600_00001108
    mr r3, r15
    bl fn_806CCCC0
    b lbl_fn_806B2600_00001108
lbl_fn_806B2600_000010E4:
    mr r3, r29
    bl fn_806CCED0
    lwz r4, lbl_8085FF98@l(r19)
    addi r29, r29, 0x1
    lbz r3, 0x16(r3)
    lwz r0, 0xc1c(r4)
    slw r3, r23, r3
    or r0, r0, r3
    stw r0, 0xc1c(r4)
lbl_fn_806B2600_00001108:
    bl fn_806CCCB0
    cmpw r29, r3
    blt lbl_fn_806B2600_00000FFC
    lis r3, lbl_8085FF98@ha
    addi r4, r18, 0xc68
    lwz r5, lbl_8085FF98@l(r3)
    li r3, 0x4
    lwz r5, 0xc1c(r5)
    crclr 6
    bl fn_806A76B0
lbl_fn_806B2600_00001130:
    cmpwi r24, 0x0
    beq lbl_fn_806B2600_0000122C
    lis r3, lbl_8085FF98@ha
    lwz r3, lbl_8085FF98@l(r3)
    cmpwi r3, 0x0
    bne lbl_fn_806B2600_00001150
    li r0, 0x0
    b lbl_fn_806B2600_000011E0
lbl_fn_806B2600_00001150:
    beq lbl_fn_806B2600_00001184
    lwz r4, 0xaa4(r3)
    subi r0, r4, 0x9
    cmplwi r0, 0x2
    ble lbl_fn_806B2600_00001184
    cmpwi r4, 0x0
    beq lbl_fn_806B2600_00001184
    lbz r0, 0x36d(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806B2600_00001184
    lbz r0, 0x376(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B2600_0000118C
lbl_fn_806B2600_00001184:
    li r0, 0xff
    b lbl_fn_806B2600_000011B8
lbl_fn_806B2600_0000118C:
    li r3, 0x0
    bl fn_806CCED0
    cmpwi r3, 0x0
    bne lbl_fn_806B2600_000011B4
    addi r4, r18, 0x458
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    li r0, 0xff
    b lbl_fn_806B2600_000011B8
lbl_fn_806B2600_000011B4:
    lbz r0, 0x16(r3)
lbl_fn_806B2600_000011B8:
    cmplwi r0, 0xff
    bne lbl_fn_806B2600_000011C8
    li r0, 0x0
    b lbl_fn_806B2600_000011E0
lbl_fn_806B2600_000011C8:
    lis r3, lbl_8085FF98@ha
    lwz r3, lbl_8085FF98@l(r3)
    lbz r3, 0x376(r3)
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_806B2600_000011E0:
    cmpwi r0, 0x1
    bne lbl_fn_806B2600_0000122C
    lis r15, lbl_8085FF98@ha
    li r16, 0x0
    lwz r3, lbl_8085FF98@l(r15)
    stw r16, 0xc34(r3)
    stw r16, 0xc30(r3)
    bl fn_806CD3C0
    cmpwi r3, 0x0
    beq lbl_fn_806B2600_0000122C
    lwz r3, lbl_8085FF98@l(r15)
    lwz r0, 0xaa4(r3)
    cmpwi r0, 0x10
    bne lbl_fn_806B2600_0000122C
    lbz r0, 0xb68(r3)
    cmplwi r0, 0x8
    bne lbl_fn_806B2600_0000122C
    stw r16, 0xbfc(r3)
    stw r16, 0xbf8(r3)
lbl_fn_806B2600_0000122C:
    lis r3, lbl_8085FF98@ha
    lwz r3, lbl_8085FF98@l(r3)
    lbz r0, 0x2d(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B2600_0000128C
    lwz r0, 0x24(r3)
    cmpwi r0, 0x5
    bne lbl_fn_806B2600_0000128C
    cmpwi r27, 0x0
    bne lbl_fn_806B2600_0000128C
    lbz r0, 0x374(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B2600_00001278
    cmpwi r26, 0x0
    bne lbl_fn_806B2600_00001278
    li r3, -0x1
    bl fn_806BB440
    mr r3, r31
    bl fn_806BB3F0
lbl_fn_806B2600_00001278:
    addi r4, r18, 0xc94
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806B2600_000015AC
lbl_fn_806B2600_0000128C:
    mr r3, r26
    mr r4, r30
    mr r5, r31
    bl fn_806BAE10
    cmpwi r3, 0x0
    beq lbl_fn_806B2600_000012B8
    addi r4, r18, 0xcb8
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806B2600_000015AC
lbl_fn_806B2600_000012B8:
    cmpwi r26, 0x0
    beq lbl_fn_806B2600_000012D4
    subis r4, r30, 0x1
    mr r3, r26
    subi r4, r4, 0x3880
    bl fn_806A7130
    b lbl_fn_806B2600_000015AC
lbl_fn_806B2600_000012D4:
    lis r3, lbl_8085FF98@ha
    lwz r3, lbl_8085FF98@l(r3)
    lbz r0, 0x374(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B2600_00001318
    lbz r0, 0x2d(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B2600_00001300
    li r3, -0x1
    bl fn_806BB440
    b lbl_fn_806B2600_0000132C
lbl_fn_806B2600_00001300:
    bl fn_806CCCB0
    cmpwi r3, 0x1
    bne lbl_fn_806B2600_0000132C
    li r3, 0x1
    bl fn_806BB440
    b lbl_fn_806B2600_0000132C
lbl_fn_806B2600_00001318:
    bl fn_806CCCB0
    cmpwi r3, 0x1
    bne lbl_fn_806B2600_0000132C
    li r3, 0x1
    bl fn_806BB440
lbl_fn_806B2600_0000132C:
    addi r4, r18, 0x60c
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    li r19, 0x0
    li r16, 0x0
    lis r15, lbl_8085FF98@ha
    b lbl_fn_806B2600_0000138C
lbl_fn_806B2600_0000134C:
    lwz r0, lbl_8085FF98@l(r15)
    li r5, 0x0
    add r17, r0, r16
    lwz r3, 0x3c4(r17)
    lhz r4, 0x3cc(r17)
    bl fn_806EEDC0
    lbz r6, 0x3d6(r17)
    mr r8, r3
    lwz r7, 0x3c0(r17)
    mr r5, r19
    addi r4, r18, 0x61c
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    addi r16, r16, 0x30
    addi r19, r19, 0x1
lbl_fn_806B2600_0000138C:
    lwz r3, lbl_8085FF98@l(r15)
    lwz r0, 0x3b8(r3)
    cmpw r19, r0
    blt lbl_fn_806B2600_0000134C
    addi r4, r18, 0x648
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    li r17, 0x0
    li r16, 0x0
    lis r15, lbl_8085FF98@ha
    b lbl_fn_806B2600_000013F4
lbl_fn_806B2600_000013BC:
    lwz r0, lbl_8085FF98@l(r15)
    mr r5, r17
    addi r4, r18, 0x658
    li r3, 0x4
    add r10, r0, r16
    lbz r6, 0x3d6(r10)
    lbz r7, 0x3e8(r10)
    lbz r8, 0x3e9(r10)
    lbz r9, 0x3ea(r10)
    lbz r10, 0x3eb(r10)
    crclr 6
    bl fn_806A76B0
    addi r16, r16, 0x30
    addi r17, r17, 0x1
lbl_fn_806B2600_000013F4:
    lwz r3, lbl_8085FF98@l(r15)
    lwz r0, 0x3b8(r3)
    cmpw r17, r0
    blt lbl_fn_806B2600_000013BC
    lbz r0, 0x376(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B2600_00001418
    lwz r3, 0x370(r3)
    bl fn_806EF8B0
lbl_fn_806B2600_00001418:
    lis r15, lbl_8085FF98@ha
    lwz r17, lbl_8085FF98@l(r15)
    lwz r0, 0x88(r17)
    cmpwi r0, 0x0
    beq lbl_fn_806B2600_0000146C
    cmpwi r27, 0x0
    beq lbl_fn_806B2600_0000146C
    cntlzw r0, r24
    mr r3, r31
    srwi r16, r0, 5
    bl fn_806ACCF0
    lwz r5, lbl_8085FF98@l(r15)
    mr r7, r3
    mr r3, r26
    mr r4, r16
    lwz r12, 0x88(r5)
    mr r5, r28
    clrlwi r6, r25, 24
    lwz r8, 0x8c(r17)
    mtctr r12
    bctrl
lbl_fn_806B2600_0000146C:
    lis r3, lbl_8085FF98@ha
    lwz r3, lbl_8085FF98@l(r3)
    lbz r0, 0x2d(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B2600_0000148C
    lbz r0, 0x374(r3)
    cmplwi r0, 0x2
    beq lbl_fn_806B2600_000015AC
lbl_fn_806B2600_0000148C:
    bl fn_806CD150
    cmpwi r3, 0x1
    bne lbl_fn_806B2600_000014A0
    li r3, 0x1
    bl fn_806CCB70
lbl_fn_806B2600_000014A0:
    bl fn_806CCCB0
    cmpwi r3, 0x1
    bne lbl_fn_806B2600_00001558
    lis r15, lbl_8085FF98@ha
    lwz r3, lbl_8085FF98@l(r15)
    lbz r0, 0x2d(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806B2600_0000154C
    bl fn_806CD4E0
    lwz r7, lbl_8085FF98@l(r15)
    lis r8, lbl_8076B608@ha
    addi r8, r8, lbl_8076B608@l
    addi r5, r1, 0x8
    lwz r6, 0xc(r8)
    addi r4, r18, 0x90
    lwz r12, 0x0(r8)
    li r3, 0x4
    lwz r11, 0x4(r8)
    lwz r10, 0x8(r8)
    lwz r9, 0x10(r8)
    lwz r8, 0x14(r8)
    lwz r0, 0x24(r7)
    stw r12, 0x8(r1)
    slwi r0, r0, 2
    stw r11, 0xc(r1)
    stw r10, 0x10(r1)
    stw r6, 0x14(r1)
    stw r9, 0x18(r1)
    stw r8, 0x1c(r1)
    lwzx r5, r5, r0
    crclr 6
    bl fn_806A76B0
    lwz r4, lbl_8085FF98@l(r15)
    li r0, 0x3
    lwz r3, 0x24(r4)
    stw r3, 0x28(r4)
    lwz r3, lbl_8085FF98@l(r15)
    stw r0, 0x24(r3)
    bl fn_806B9740
    lwz r3, lbl_8085FF98@l(r15)
    li r0, 0x0
    stb r0, 0x376(r3)
    b lbl_fn_806B2600_000015AC
lbl_fn_806B2600_0000154C:
    li r3, 0xb
    bl fn_806CCB70
    b lbl_fn_806B2600_000015AC
lbl_fn_806B2600_00001558:
    lis r3, lbl_8085FF98@ha
    lwz r3, lbl_8085FF98@l(r3)
    lbz r0, 0x374(r3)
    cmplwi r0, 0x3
    bne lbl_fn_806B2600_000015AC
    cmpwi r28, 0x0
    beq lbl_fn_806B2600_000015AC
    bl fn_806CCCB0
    cmpwi r3, 0x1
    blt lbl_fn_806B2600_000015AC
    bl fn_806CCCB0
    cmpwi r3, 0x1
    bne lbl_fn_806B2600_000015A4
    bl fn_806CCC70
    cmpwi r3, 0x0
    beq lbl_fn_806B2600_000015A4
    li r3, 0xb
    bl fn_806CCB70
    b lbl_fn_806B2600_000015AC
lbl_fn_806B2600_000015A4:
    li r3, 0x9
    bl fn_806CCB70
lbl_fn_806B2600_000015AC:
    addi r11, r1, 0x70
    bl _restgpr_15
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_806B2FC0(void)
{
    nofralloc
    li r5, 0x0
    li r6, 0xff
    b fn_806B2600
}

asm void fn_806B2FD0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lis r4, lbl_807BE9A8@ha
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x100
    mr r5, r31
    addi r4, r4, lbl_807BE9A8@l
    crclr 6
    bl fn_806A76B0
    mr r3, r30
    mr r4, r31
    bl fn_806CE1E0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806B3030(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_806EAD00
    bl fn_806D7F20
    lis r4, lbl_8085FF9C@ha
    mr r5, r3
    stw r3, lbl_8085FF9C@l(r4)
    lis r4, lbl_807BE9B4@ha
    li r3, 0x2
    addi r4, r4, lbl_807BE9B4@l
    crclr 6
    bl fn_806A76B0
    lis r4, 0xffff
    li r3, 0x9
    subi r4, r4, 0x7aeb
    bl fn_806A7130
    lis r3, lbl_8085FF98@ha
    li r0, 0x0
    lwz r3, lbl_8085FF98@l(r3)
    stw r0, 0x0(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806B30A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_8085FF98@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8085FF98@l(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806B30A0_000016F4
    lwz r4, 0xaa4(r3)
    subi r0, r4, 0x9
    cmplwi r0, 0x2
    ble lbl_fn_806B30A0_000016F4
    cmpwi r4, 0x0
    beq lbl_fn_806B30A0_000016F4
    lbz r0, 0x36d(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806B30A0_000016F4
    lbz r0, 0x376(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B30A0_000016FC
lbl_fn_806B30A0_000016F4:
    li r31, 0xff
    b lbl_fn_806B30A0_0000172C
lbl_fn_806B30A0_000016FC:
    li r3, 0x0
    bl fn_806CCED0
    cmpwi r3, 0x0
    bne lbl_fn_806B30A0_00001728
    lis r4, lbl_807BE128@ha
    li r3, 0x8
    addi r4, r4, lbl_807BE128@l
    crclr 6
    bl fn_806A76B0
    li r31, 0xff
    b lbl_fn_806B30A0_0000172C
lbl_fn_806B30A0_00001728:
    lbz r31, 0x16(r3)
lbl_fn_806B30A0_0000172C:
    cmplwi r31, 0xff
    bne lbl_fn_806B30A0_00001748
    li r3, 0x0
    bl fn_806CCED0
    cmpwi r3, 0x0
    beq lbl_fn_806B30A0_00001748
    lbz r31, 0x16(r3)
lbl_fn_806B30A0_00001748:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806B3160(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_806A7110
    cmpwi r3, 0x0
    beq lbl_fn_806B3160_00001788
    li r0, 0x0
    b lbl_fn_806B3160_000017C0
lbl_fn_806B3160_00001788:
    lis r31, lbl_80860898@ha
    lwz r0, lbl_80860898@l(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806B3160_000017B4
    bl fn_806B1230
    cmpwi r3, 0x4
    bne lbl_fn_806B3160_000017B4
    lwz r3, lbl_80860898@l(r31)
    lbz r0, 0x752(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806B3160_000017BC
lbl_fn_806B3160_000017B4:
    li r0, 0x0
    b lbl_fn_806B3160_000017C0
lbl_fn_806B3160_000017BC:
    li r0, 0x1
lbl_fn_806B3160_000017C0:
    cmpwi r0, 0x0
    beq lbl_fn_806B3160_000017D4
    bl fn_806C3670
    li r3, 0x1
    b lbl_fn_806B3160_00001800
lbl_fn_806B3160_000017D4:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lbz r0, 0x8e5(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B3160_000017FC
    lis r4, lbl_807BEA14@ha
    li r3, 0x4
    addi r4, r4, lbl_807BEA14@l
    crclr 6
    bl fn_806A76B0
lbl_fn_806B3160_000017FC:
    li r3, 0x0
lbl_fn_806B3160_00001800:
    lis r4, lbl_80860898@ha
    li r0, 0x0
    lwz r4, lbl_80860898@l(r4)
    stb r0, 0x8e5(r4)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806B3220(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_25
    cmpwi r4, 0x0
    lis r31, lbl_807BE9D0@ha
    mr r28, r3
    mr r29, r4
    mr r30, r5
    addi r31, r31, lbl_807BE9D0@l
    beq lbl_fn_806B3220_0000185C
    cmpwi r5, 0x0
    bne lbl_fn_806B3220_00001864
lbl_fn_806B3220_0000185C:
    li r3, 0x0
    b lbl_fn_806B3220_00001C68
lbl_fn_806B3220_00001864:
    cmplwi r3, 0x64
    blt lbl_fn_806B3220_000018AC
    subi r0, r3, 0x64
    lis r3, lbl_80860158@ha
    mulli r5, r0, 0xc
    addi r3, r3, lbl_80860158@l
    lbzx r0, r3, r5
    cmpwi r0, 0x0
    beq lbl_fn_806B3220_000018AC
    add r3, r3, r5
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806B3220_000019D8
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_806B3220_000019D8
    li r3, 0x0
    b lbl_fn_806B3220_00001C68
lbl_fn_806B3220_000018AC:
    lis r3, lbl_80860158@ha
    li r0, 0x16
    addi r3, r3, lbl_80860158@l
    li r4, 0x0
    mtctr r0
    nop
lbl_fn_806B3220_000018C4:
    clrlwi r0, r4, 24
    mulli r0, r0, 0xc
    lbzx r0, r3, r0
    cmpwi r0, 0x0
    bne lbl_fn_806B3220_000018E4
    addi r0, r4, 0x64
    clrlwi r28, r0, 24
    b lbl_fn_806B3220_000019C8
lbl_fn_806B3220_000018E4:
    addi r4, r4, 0x1
    clrlwi r0, r4, 24
    mulli r0, r0, 0xc
    lbzx r0, r3, r0
    cmpwi r0, 0x0
    bne lbl_fn_806B3220_00001908
    addi r0, r4, 0x64
    clrlwi r28, r0, 24
    b lbl_fn_806B3220_000019C8
lbl_fn_806B3220_00001908:
    addi r4, r4, 0x1
    clrlwi r0, r4, 24
    mulli r0, r0, 0xc
    lbzx r0, r3, r0
    cmpwi r0, 0x0
    bne lbl_fn_806B3220_0000192C
    addi r0, r4, 0x64
    clrlwi r28, r0, 24
    b lbl_fn_806B3220_000019C8
lbl_fn_806B3220_0000192C:
    addi r4, r4, 0x1
    clrlwi r0, r4, 24
    mulli r0, r0, 0xc
    lbzx r0, r3, r0
    cmpwi r0, 0x0
    bne lbl_fn_806B3220_00001950
    addi r0, r4, 0x64
    clrlwi r28, r0, 24
    b lbl_fn_806B3220_000019C8
lbl_fn_806B3220_00001950:
    addi r4, r4, 0x1
    clrlwi r0, r4, 24
    mulli r0, r0, 0xc
    lbzx r0, r3, r0
    cmpwi r0, 0x0
    bne lbl_fn_806B3220_00001974
    addi r0, r4, 0x64
    clrlwi r28, r0, 24
    b lbl_fn_806B3220_000019C8
lbl_fn_806B3220_00001974:
    addi r4, r4, 0x1
    clrlwi r0, r4, 24
    mulli r0, r0, 0xc
    lbzx r0, r3, r0
    cmpwi r0, 0x0
    bne lbl_fn_806B3220_00001998
    addi r0, r4, 0x64
    clrlwi r28, r0, 24
    b lbl_fn_806B3220_000019C8
lbl_fn_806B3220_00001998:
    addi r4, r4, 0x1
    clrlwi r0, r4, 24
    mulli r0, r0, 0xc
    lbzx r0, r3, r0
    cmpwi r0, 0x0
    bne lbl_fn_806B3220_000019BC
    addi r0, r4, 0x64
    clrlwi r28, r0, 24
    b lbl_fn_806B3220_000019C8
lbl_fn_806B3220_000019BC:
    addi r4, r4, 0x1
    bdnz lbl_fn_806B3220_000018C4
    li r28, 0x0
lbl_fn_806B3220_000019C8:
    cmpwi r28, 0x0
    bne lbl_fn_806B3220_000019D8
    li r3, 0x0
    b lbl_fn_806B3220_00001C68
lbl_fn_806B3220_000019D8:
    clrlwi r4, r28, 24
    lis r3, lbl_80860158@ha
    subi r4, r4, 0x64
    li r0, 0x0
    mulli r25, r4, 0xc
    addi r3, r3, lbl_80860158@l
    stbx r28, r3, r25
    add r3, r3, r25
    stb r0, 0x1(r3)
    sth r0, 0x2(r3)
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_806B3220_00001A18
    li r3, 0x4
    li r5, 0x0
    bl fn_806A7400
lbl_fn_806B3220_00001A18:
    lis r26, lbl_80860158@ha
    mr r3, r29
    addi r26, r26, lbl_80860158@l
    add r27, r26, r25
    bl strlen
    mr r4, r3
    li r3, 0x4
    addi r4, r4, 0x1
    bl fn_806A72E0
    cmpwi r3, 0x0
    stw r3, 0x4(r27)
    bne lbl_fn_806B3220_00001C34
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    cmpwi r3, 0x0
    beq lbl_fn_806B3220_00001C2C
    li r0, 0x1
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r28)
    li r0, 0x0
    lis r4, 0xffff
    li r3, 0x9
    stb r0, 0x751(r5)
    subi r4, r4, 0x3881
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r28)
    addi r3, r1, 0x8
    addi r5, r31, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x60
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B3220_00001AE0
    cmpwi r6, 0x0
    bne lbl_fn_806B3220_00001AE0
    li r6, 0x1
lbl_fn_806B3220_00001AE0:
    addi r3, r1, 0x8
    addi r5, r31, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x64
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x8
    addi r5, r31, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x68
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB980
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B3220_00001B50
    li r4, 0x0
    b lbl_fn_806B3220_00001B9C
lbl_fn_806B3220_00001B50:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806B3220_00001B98
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806B3220_00001B84
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806B3220_00001B84
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B3220_00001B98
lbl_fn_806B3220_00001B84:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B3220_00001B98
    li r4, 0x1
    b lbl_fn_806B3220_00001B9C
lbl_fn_806B3220_00001B98:
    li r4, 0x0
lbl_fn_806B3220_00001B9C:
    neg r0, r4
    addi r3, r1, 0x8
    or r0, r0, r4
    addi r5, r31, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x6c
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x14
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r25, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r25)
    cntlzw r0, r3
    srwi r26, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r25)
    mr r7, r3
    lwz r12, 0x8a0(r25)
    mr r5, r26
    subi r0, r4, 0x2
    lwz r8, 0x8a4(r25)
    cntlzw r0, r0
    li r3, 0x9
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
lbl_fn_806B3220_00001C2C:
    li r3, 0x0
    b lbl_fn_806B3220_00001C68
lbl_fn_806B3220_00001C34:
    mr r4, r29
    bl strcpy
    lwz r6, 0x0(r30)
    mr r5, r29
    addi r4, r31, 0x70
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    stw r30, 0x8(r27)
    clrlwi r3, r28, 24
    lwz r4, 0x4(r27)
    bl fn_806F1DF0
    mr r3, r28
lbl_fn_806B3220_00001C68:
    addi r11, r1, 0x60
    bl _restgpr_25
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806B3680(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_25
    cmpwi r4, 0x0
    lis r31, lbl_807BE9D0@ha
    mr r28, r3
    mr r29, r4
    mr r30, r5
    addi r31, r31, lbl_807BE9D0@l
    beq lbl_fn_806B3680_00001CBC
    cmpwi r5, 0x0
    bne lbl_fn_806B3680_00001CC4
lbl_fn_806B3680_00001CBC:
    li r3, 0x0
    b lbl_fn_806B3680_000020CC
lbl_fn_806B3680_00001CC4:
    cmplwi r3, 0x64
    blt lbl_fn_806B3680_00001D0C
    subi r0, r3, 0x64
    lis r3, lbl_80860158@ha
    mulli r5, r0, 0xc
    addi r3, r3, lbl_80860158@l
    lbzx r0, r3, r5
    cmpwi r0, 0x0
    beq lbl_fn_806B3680_00001D0C
    add r3, r3, r5
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806B3680_00001E38
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_806B3680_00001E38
    li r3, 0x0
    b lbl_fn_806B3680_000020CC
lbl_fn_806B3680_00001D0C:
    lis r3, lbl_80860158@ha
    li r0, 0x16
    addi r3, r3, lbl_80860158@l
    li r4, 0x0
    mtctr r0
    nop
lbl_fn_806B3680_00001D24:
    clrlwi r0, r4, 24
    mulli r0, r0, 0xc
    lbzx r0, r3, r0
    cmpwi r0, 0x0
    bne lbl_fn_806B3680_00001D44
    addi r0, r4, 0x64
    clrlwi r28, r0, 24
    b lbl_fn_806B3680_00001E28
lbl_fn_806B3680_00001D44:
    addi r4, r4, 0x1
    clrlwi r0, r4, 24
    mulli r0, r0, 0xc
    lbzx r0, r3, r0
    cmpwi r0, 0x0
    bne lbl_fn_806B3680_00001D68
    addi r0, r4, 0x64
    clrlwi r28, r0, 24
    b lbl_fn_806B3680_00001E28
lbl_fn_806B3680_00001D68:
    addi r4, r4, 0x1
    clrlwi r0, r4, 24
    mulli r0, r0, 0xc
    lbzx r0, r3, r0
    cmpwi r0, 0x0
    bne lbl_fn_806B3680_00001D8C
    addi r0, r4, 0x64
    clrlwi r28, r0, 24
    b lbl_fn_806B3680_00001E28
lbl_fn_806B3680_00001D8C:
    addi r4, r4, 0x1
    clrlwi r0, r4, 24
    mulli r0, r0, 0xc
    lbzx r0, r3, r0
    cmpwi r0, 0x0
    bne lbl_fn_806B3680_00001DB0
    addi r0, r4, 0x64
    clrlwi r28, r0, 24
    b lbl_fn_806B3680_00001E28
lbl_fn_806B3680_00001DB0:
    addi r4, r4, 0x1
    clrlwi r0, r4, 24
    mulli r0, r0, 0xc
    lbzx r0, r3, r0
    cmpwi r0, 0x0
    bne lbl_fn_806B3680_00001DD4
    addi r0, r4, 0x64
    clrlwi r28, r0, 24
    b lbl_fn_806B3680_00001E28
lbl_fn_806B3680_00001DD4:
    addi r4, r4, 0x1
    clrlwi r0, r4, 24
    mulli r0, r0, 0xc
    lbzx r0, r3, r0
    cmpwi r0, 0x0
    bne lbl_fn_806B3680_00001DF8
    addi r0, r4, 0x64
    clrlwi r28, r0, 24
    b lbl_fn_806B3680_00001E28
lbl_fn_806B3680_00001DF8:
    addi r4, r4, 0x1
    clrlwi r0, r4, 24
    mulli r0, r0, 0xc
    lbzx r0, r3, r0
    cmpwi r0, 0x0
    bne lbl_fn_806B3680_00001E1C
    addi r0, r4, 0x64
    clrlwi r28, r0, 24
    b lbl_fn_806B3680_00001E28
lbl_fn_806B3680_00001E1C:
    addi r4, r4, 0x1
    bdnz lbl_fn_806B3680_00001D24
    li r28, 0x0
lbl_fn_806B3680_00001E28:
    cmpwi r28, 0x0
    bne lbl_fn_806B3680_00001E38
    li r3, 0x0
    b lbl_fn_806B3680_000020CC
lbl_fn_806B3680_00001E38:
    clrlwi r4, r28, 24
    lis r3, lbl_80860158@ha
    subi r0, r4, 0x64
    mulli r25, r0, 0xc
    addi r3, r3, lbl_80860158@l
    li r4, 0x1
    li r0, 0x0
    stbx r28, r3, r25
    add r3, r3, r25
    stb r4, 0x1(r3)
    sth r0, 0x2(r3)
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_806B3680_00001E7C
    li r3, 0x4
    li r5, 0x0
    bl fn_806A7400
lbl_fn_806B3680_00001E7C:
    lis r26, lbl_80860158@ha
    mr r3, r29
    addi r26, r26, lbl_80860158@l
    add r27, r26, r25
    bl strlen
    mr r4, r3
    li r3, 0x4
    addi r4, r4, 0x1
    bl fn_806A72E0
    cmpwi r3, 0x0
    stw r3, 0x4(r27)
    bne lbl_fn_806B3680_00002098
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    cmpwi r3, 0x0
    beq lbl_fn_806B3680_00002090
    li r0, 0x1
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r28)
    li r0, 0x0
    lis r4, 0xffff
    li r3, 0x9
    stb r0, 0x751(r5)
    subi r4, r4, 0x3881
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r28)
    addi r3, r1, 0x8
    addi r5, r31, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x60
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B3680_00001F44
    cmpwi r6, 0x0
    bne lbl_fn_806B3680_00001F44
    li r6, 0x1
lbl_fn_806B3680_00001F44:
    addi r3, r1, 0x8
    addi r5, r31, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x64
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x8
    addi r5, r31, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x68
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB980
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B3680_00001FB4
    li r4, 0x0
    b lbl_fn_806B3680_00002000
lbl_fn_806B3680_00001FB4:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806B3680_00001FFC
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806B3680_00001FE8
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806B3680_00001FE8
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B3680_00001FFC
lbl_fn_806B3680_00001FE8:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B3680_00001FFC
    li r4, 0x1
    b lbl_fn_806B3680_00002000
lbl_fn_806B3680_00001FFC:
    li r4, 0x0
lbl_fn_806B3680_00002000:
    neg r0, r4
    addi r3, r1, 0x8
    or r0, r0, r4
    addi r5, r31, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x6c
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x14
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r25, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r25)
    cntlzw r0, r3
    srwi r26, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r25)
    mr r7, r3
    lwz r12, 0x8a0(r25)
    mr r5, r26
    subi r0, r4, 0x2
    lwz r8, 0x8a4(r25)
    cntlzw r0, r0
    li r3, 0x9
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
lbl_fn_806B3680_00002090:
    li r3, 0x0
    b lbl_fn_806B3680_000020CC
lbl_fn_806B3680_00002098:
    mr r4, r29
    bl strcpy
    mr r5, r29
    mr r6, r30
    addi r4, r31, 0x98
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    stw r30, 0x8(r27)
    clrlwi r3, r28, 24
    lwz r4, 0x4(r27)
    bl fn_806F1DF0
    mr r3, r28
lbl_fn_806B3680_000020CC:
    addi r11, r1, 0x60
    bl _restgpr_25
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
