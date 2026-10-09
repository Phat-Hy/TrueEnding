#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_80680D18(void);
extern void fn_80682428(void);
extern void fn_806D57A0(void);
extern void fn_806D5850(void);
extern void fn_806D58F0(void);
extern void fn_806D5900(void);
extern void fn_806D5930(void);
extern void fn_806D5BE0(void);
extern void fn_806D5C90(void);
extern void fn_806D5E60(void);
extern void fn_806D63A0(void);
extern void fn_806D7A90(void);
extern void fn_806D7AC0(void);
extern void fn_806D8F10(void);
extern void fn_806D8F30(void);
extern void fn_806D9610(void);
extern void fn_806D9620(void);
extern void fn_806D9630(void);
extern void fn_806D9640(void);
extern void fn_806D96A0(void);
extern void fn_806D9740(void);
extern void fn_806DB9E0(void);
extern void fn_806DBA70(void);
extern void fn_806DC0B0(void);
extern void fn_806DD7C0(void);
extern void fn_806DDE60(void);
extern void fn_806DE020(void);
extern void fn_806DE290(void);
extern void fn_806DE480(void);
extern void fn_806DE4E0(void);
extern void fn_806DF610(void);
extern void fn_806E0770(void);
extern void fn_806E2010(void);
extern void fn_806E2BD0(void);
extern void fn_806E2FB0(void);
extern void fn_806E5500(void);
extern void fn_806E57E0(void);
extern void fn_806E59C0(void);
extern void fn_806E5BC0(void);
extern void fn_806E5D00(void);
extern void fn_806E6250(void);
extern void fn_806E64E0(void);
extern void fn_806E8B10(void);
extern void fn_806E91F0(void);
extern void fn_806EA840(void);
extern void fn_806EA850(void);
extern void fn_806EA8A0(void);
extern void fn_806EA8F0(void);
extern void fn_806EA900(void);
extern void fn_806EA910(void);
extern void fn_806EA920(void);
extern void fn_806EAAD0(void);
extern void fn_806EAC50(void);
extern void fn_806EAC90(void);
extern void fn_806EACA0(void);
extern void fn_806EACB0(void);
extern void fn_806EACC0(void);
extern void fn_806EACE0(void);
extern void fn_806EACF0(void);
extern void fn_806EAD10(void);
extern void fn_806EEDC0(void);

/* External data declarations */
extern u8 lbl_807C2AE0[];
extern u8 lbl_807C2AF0[];
extern u8 lbl_807C2B00[];
extern u8 lbl_807C2B6C[];
extern u8 lbl_807C2C10[];
extern u8 lbl_807C2C20[];
extern u8 lbl_807C2CA8[];
extern u8 lbl_80860DD0[];
extern u8 lbl_80860F58[];

/* Small data declarations */

/* Function declarations */
void fn_806D9890(void);
void fn_806D9AB0(void);
void fn_806D9BB0(void);
void fn_806D9CE0(void);
void fn_806D9D80(void);
void fn_806D9EE0(void);
void fn_806D9EF0(void);
void fn_806DA070(void);
void fn_806DA120(void);
void fn_806DA330(void);
void fn_806DA480(void);
void fn_806DA4D0(void);
void fn_806DA540(void);
void fn_806DA570(void);
void fn_806DA660(void);
void fn_806DA700(void);
void fn_806DA750(void);
void fn_806DA7D0(void);
void fn_806DA860(void);
void fn_806DA870(void);
void fn_806DA880(void);
void fn_806DA8B0(void);
void fn_806DA8D0(void);
void fn_806DA910(void);
void fn_806DA980(void);
void fn_806DAAB0(void);
void fn_806DAB30(void);
void fn_806DAC00(void);
void fn_806DACE0(void);
void fn_806DAD50(void);
void fn_806DAEE0(void);
void fn_806DAF50(void);
void fn_806DB050(void);
void fn_806DB0A0(void);
void fn_806DB220(void);
void fn_806DB310(void);
void fn_806DB3D0(void);
void fn_806DB460(void);
void fn_806DB690(void);
void fn_806DB730(void);
void fn_806DB810(void);

asm void fn_806D9890(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_23
    cmpwi r4, 0x7
    lis r26, lbl_80860F58@ha
    mr r30, r3
    mr r23, r4
    addi r26, r26, lbl_80860F58@l
    beq lbl_fn_806D9890_00000048
    cmpwi r4, 0x2
    beq lbl_fn_806D9890_00000050
    cmpwi r4, 0x6
    beq lbl_fn_806D9890_00000058
    cmpwi r4, 0x0
    beq lbl_fn_806D9890_00000060
    b lbl_fn_806D9890_00000068
lbl_fn_806D9890_00000048:
    li r31, 0x7
    b lbl_fn_806D9890_0000006C
lbl_fn_806D9890_00000050:
    li r31, 0x2
    b lbl_fn_806D9890_0000006C
lbl_fn_806D9890_00000058:
    li r31, 0x6
    b lbl_fn_806D9890_0000006C
lbl_fn_806D9890_00000060:
    li r31, 0x0
    b lbl_fn_806D9890_0000006C
lbl_fn_806D9890_00000068:
    li r31, 0xd
lbl_fn_806D9890_0000006C:
    cmpwi r4, 0x2
    bne lbl_fn_806D9890_000000E0
    mr r3, r30
    bl fn_806EAC90
    stw r3, 0x14(r1)
    mr r3, r30
    bl fn_806EACA0
    sth r3, 0x18(r1)
    lis r5, fn_806D9640@ha
    lwz r3, 0x4(r26)
    addi r4, r1, 0x14
    addi r5, r5, fn_806D9640@l
    li r6, 0x0
    li r7, 0x0
    bl fn_806D5E60
    cmpwi r3, -0x1
    mr r25, r3
    beq lbl_fn_806D9890_000000E0
    mr r3, r30
    bl fn_806EACA0
    mr r27, r3
    mr r3, r30
    bl fn_806EAC90
    clrlwi r4, r27, 16
    addi r5, r1, 0x20
    bl fn_806EEDC0
    lwz r3, 0x4(r26)
    mr r4, r25
    bl fn_806D5C90
lbl_fn_806D9890_000000E0:
    lwz r3, 0x8(r26)
    bl fn_806D58F0
    mr r27, r3
    li r25, 0x0
    lis r29, fn_806D9640@ha
    b lbl_fn_806D9890_000001A0
lbl_fn_806D9890_000000F8:
    lwz r3, 0x8(r26)
    mr r4, r25
    bl fn_806D5900
    mr r28, r3
    mr r3, r30
    bl fn_806EAC90
    stw r3, 0x8(r1)
    mr r3, r30
    bl fn_806EACA0
    sth r3, 0xc(r1)
    addi r4, r1, 0x8
    addi r5, r29, fn_806D9640@l
    li r6, 0x0
    lwz r3, 0x20(r28)
    li r7, 0x0
    bl fn_806D5E60
    cmpwi r3, -0x1
    mr r24, r3
    beq lbl_fn_806D9890_0000019C
    lwz r0, 0x2c(r28)
    cmpwi r0, 0x0
    beq lbl_fn_806D9890_0000018C
    subi r0, r23, 0x2
    mr r3, r30
    cntlzw r0, r0
    srwi r27, r0, 5
    bl fn_806EACA0
    mr r29, r3
    mr r3, r30
    bl fn_806EAC90
    lwz r12, 0x2c(r28)
    mr r5, r31
    mr r6, r27
    clrlwi r4, r29, 16
    lwz r7, 0x38(r28)
    mtctr r12
    bctrl
lbl_fn_806D9890_0000018C:
    lwz r3, 0x20(r28)
    mr r4, r24
    bl fn_806D5C90
    b lbl_fn_806D9890_00000208
lbl_fn_806D9890_0000019C:
    addi r25, r25, 0x1
lbl_fn_806D9890_000001A0:
    cmpw r25, r27
    blt lbl_fn_806D9890_000000F8
    lwz r0, 0x30(r26)
    cmpwi r0, 0x0
    ble lbl_fn_806D9890_00000208
    lwz r0, 0x10(r26)
    cmpwi r0, 0x0
    beq lbl_fn_806D9890_000001FC
    subi r0, r23, 0x2
    mr r3, r30
    cntlzw r0, r0
    srwi r27, r0, 5
    bl fn_806EACA0
    mr r29, r3
    mr r3, r30
    bl fn_806EAC90
    lwz r12, 0x10(r26)
    mr r5, r31
    mr r6, r27
    clrlwi r4, r29, 16
    lwz r7, 0x2c(r26)
    mtctr r12
    bctrl
lbl_fn_806D9890_000001FC:
    lwz r3, 0x30(r26)
    subi r0, r3, 0x1
    stw r0, 0x30(r26)
lbl_fn_806D9890_00000208:
    addi r11, r1, 0x60
    bl _restgpr_23
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806D9AB0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    lis r29, lbl_80860F58@ha
    mr r26, r3
    mr r27, r4
    addi r29, r29, lbl_80860F58@l
    bl fn_806EACA0
    mr r30, r3
    mr r3, r26
    bl fn_806EAC90
    clrlwi r4, r30, 16
    addi r5, r1, 0x8
    bl fn_806EEDC0
    lwz r3, 0x8(r29)
    bl fn_806D58F0
    mr r31, r3
    li r28, 0x0
    b lbl_fn_806D9AB0_000002C4
lbl_fn_806D9AB0_00000274:
    lwz r3, 0x8(r29)
    mr r4, r28
    bl fn_806D5900
    lwz r0, 0x30(r3)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_806D9AB0_000002C0
    mr r3, r26
    bl fn_806EACA0
    mr r31, r3
    mr r3, r26
    bl fn_806EAC90
    lwz r12, 0x30(r30)
    mr r5, r27
    clrlwi r4, r31, 16
    lwz r6, 0x38(r30)
    mtctr r12
    bctrl
    b lbl_fn_806D9AB0_00000304
lbl_fn_806D9AB0_000002C0:
    addi r28, r28, 0x1
lbl_fn_806D9AB0_000002C4:
    cmpw r28, r31
    blt lbl_fn_806D9AB0_00000274
    lwz r0, 0x18(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806D9AB0_00000304
    mr r3, r26
    bl fn_806EACA0
    mr r31, r3
    mr r3, r26
    bl fn_806EAC90
    lwz r12, 0x18(r29)
    mr r5, r27
    clrlwi r4, r31, 16
    lwz r6, 0x2c(r29)
    mtctr r12
    bctrl
lbl_fn_806D9AB0_00000304:
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806D9BB0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_25
    lis r29, lbl_80860F58@ha
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    addi r29, r29, lbl_80860F58@l
    bl fn_806EACA0
    mr r30, r3
    mr r3, r25
    bl fn_806EAC90
    clrlwi r4, r30, 16
    addi r5, r1, 0x8
    bl fn_806EEDC0
    cmpwi r27, 0x10
    blt lbl_fn_806D9BB0_000003F8
    mr r4, r26
    addi r3, r1, 0x30
    li r5, 0x10
    bl memcpy
    lis r5, fn_806D9630@ha
    lwz r3, 0x8(r29)
    addi r4, r1, 0x20
    li r6, 0x0
    addi r5, r5, fn_806D9630@l
    li r7, 0x0
    bl fn_806D5E60
    cmpwi r3, -0x1
    mr r4, r3
    beq lbl_fn_806D9BB0_000003F8
    lwz r3, 0x8(r29)
    bl fn_806D5900
    lwz r0, 0x28(r3)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_806D9BB0_000003F8
    mr r3, r25
    bl fn_806EACA0
    mr r31, r3
    mr r3, r25
    bl fn_806EAC90
    lwz r12, 0x28(r30)
    mr r7, r28
    clrlwi r4, r31, 16
    addi r5, r26, 0x10
    subi r6, r27, 0x10
    lwz r8, 0x38(r30)
    mtctr r12
    bctrl
    b lbl_fn_806D9BB0_00000438
lbl_fn_806D9BB0_000003F8:
    lwz r0, 0x1c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806D9BB0_00000438
    mr r3, r25
    bl fn_806EACA0
    mr r31, r3
    mr r3, r25
    bl fn_806EAC90
    lwz r12, 0x1c(r29)
    mr r5, r26
    mr r6, r27
    mr r7, r28
    clrlwi r4, r31, 16
    lwz r8, 0x2c(r29)
    mtctr r12
    bctrl
lbl_fn_806D9BB0_00000438:
    addi r11, r1, 0x80
    bl _restgpr_25
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_806D9CE0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    lis r31, lbl_80860F58@ha
    mr r27, r4
    addi r31, r31, lbl_80860F58@l
    mr r28, r5
    lwz r0, 0x28(r31)
    mr r29, r6
    mr r30, r7
    cmpwi r0, 0x0
    beq lbl_fn_806D9CE0_000004C8
    mr r3, r27
    mr r4, r28
    addi r5, r1, 0x8
    bl fn_806EEDC0
    lwz r12, 0x28(r31)
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r6, r30
    lwz r7, 0x2c(r31)
    mtctr r12
    bctrl
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_806D9CE0_000004CC
lbl_fn_806D9CE0_000004C8:
    li r3, 0x0
lbl_fn_806D9CE0_000004CC:
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806D9D80(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_25
    mr r26, r5
    lis r31, lbl_80860F58@ha
    mr r27, r6
    mr r25, r4
    mr r28, r7
    mr r29, r8
    mr r30, r9
    mr r3, r26
    mr r4, r27
    addi r31, r31, lbl_80860F58@l
    addi r5, r1, 0x24
    bl fn_806EEDC0
    cmpwi r30, 0x10
    blt lbl_fn_806D9D80_000005C8
    mr r4, r29
    addi r3, r1, 0x3c
    li r5, 0x10
    bl memcpy
    stw r26, 0x18(r1)
    addi r4, r1, 0x18
    lwz r3, 0x4(r31)
    sth r27, 0x1c(r1)
    stw r25, 0x20(r1)
    bl fn_806D5930
    lis r5, fn_806D9620@ha
    lwz r3, 0x8(r31)
    addi r4, r1, 0x3c
    li r6, 0x0
    addi r5, r5, fn_806D9620@l
    li r7, 0x0
    bl fn_806D5E60
    cmpwi r3, -0x1
    beq lbl_fn_806D9D80_000005C8
    lis r3, fn_806D9740@ha
    lis r7, fn_806D9890@ha
    lis r6, fn_806D9AB0@ha
    lis r5, fn_806D9BB0@ha
    addi r3, r3, fn_806D9740@l
    addi r7, r7, fn_806D9890@l
    addi r6, r6, fn_806D9AB0@l
    addi r5, r5, fn_806D9BB0@l
    stw r3, 0x10(r1)
    addi r4, r1, 0x8
    lwz r3, 0x20(r1)
    stw r7, 0x8(r1)
    stw r6, 0x14(r1)
    stw r5, 0xc(r1)
    bl fn_806EA900
    b lbl_fn_806D9D80_00000634
lbl_fn_806D9D80_000005C8:
    lwz r0, 0x20(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806D9D80_0000060C
    mr r3, r26
    mr r4, r27
    addi r5, r1, 0x24
    bl fn_806EEDC0
    lwz r12, 0x20(r31)
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    mr r7, r30
    lwz r8, 0x2c(r31)
    mtctr r12
    bctrl
    b lbl_fn_806D9D80_00000634
lbl_fn_806D9D80_0000060C:
    mr r3, r25
    li r4, 0x0
    li r5, 0x0
    bl fn_806EA910
    lwz r3, 0x4(r31)
    bl fn_806D58F0
    mr r4, r3
    lwz r3, 0x4(r31)
    subi r4, r4, 0x1
    bl fn_806D5BE0
lbl_fn_806D9D80_00000634:
    addi r11, r1, 0xa0
    bl _restgpr_25
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_806D9EE0(void)
{
    nofralloc
    lis r3, lbl_80860F58@ha
    addi r3, r3, lbl_80860F58@l
    lwz r3, 0xc(r3)
    blr
}

asm void fn_806D9EF0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    lwz r11, 0x38(r1)
    stw r31, 0x2c(r1)
    lwz r0, 0x3c(r1)
    stw r30, 0x28(r1)
    li r30, 0x5dc
    stw r29, 0x24(r1)
    lis r29, lbl_80860F58@ha
    addi r29, r29, lbl_80860F58@l
    stw r28, 0x20(r1)
    lwz r28, 0x40(r1)
    beq lbl_fn_806D9EF0_000006A0
    mr r30, r4
lbl_fn_806D9EF0_000006A0:
    cmpwi r5, 0x0
    li r31, 0x5b4
    beq lbl_fn_806D9EF0_000006B0
    mr r31, r5
lbl_fn_806D9EF0_000006B0:
    stw r6, 0x24(r29)
    mr r4, r3
    addi r5, r1, 0x8
    li r3, 0x0
    stw r11, 0x28(r29)
    stw r7, 0x10(r29)
    stw r8, 0x14(r29)
    stw r9, 0x18(r29)
    stw r10, 0x1c(r29)
    stw r0, 0x20(r29)
    bl fn_806EEDC0
    lis r7, fn_806D96A0@ha
    mr r3, r29
    mr r5, r31
    mr r6, r30
    addi r4, r1, 0x8
    addi r7, r7, fn_806D96A0@l
    bl fn_806EA840
    cmpwi r3, 0x0
    beq lbl_fn_806D9EF0_00000708
    li r3, 0x3
    b lbl_fn_806D9EF0_000007B4
lbl_fn_806D9EF0_00000708:
    li r3, 0xc
    li r4, 0x1
    li r5, 0x0
    bl fn_806D57A0
    cmpwi r3, 0x0
    stw r3, 0x4(r29)
    bne lbl_fn_806D9EF0_0000072C
    li r3, 0x1
    b lbl_fn_806D9EF0_000007B4
lbl_fn_806D9EF0_0000072C:
    lis r5, fn_806D9610@ha
    li r3, 0x3c
    addi r5, r5, fn_806D9610@l
    li r4, 0x1
    bl fn_806D57A0
    cmpwi r3, 0x0
    stw r3, 0x8(r29)
    bne lbl_fn_806D9EF0_00000754
    li r3, 0x1
    b lbl_fn_806D9EF0_000007B4
lbl_fn_806D9EF0_00000754:
    lis r4, fn_806D9CE0@ha
    lwz r3, 0x0(r29)
    addi r4, r4, fn_806D9CE0@l
    bl fn_806EAD10
    lis r4, fn_806D9D80@ha
    lwz r3, 0x0(r29)
    addi r4, r4, fn_806D9D80@l
    bl fn_806EA8F0
    lwz r3, 0x0(r29)
    bl fn_806EACB0
    stw r3, 0x34(r29)
    lwz r3, 0x0(r29)
    bl fn_806EACC0
    cmpwi r28, 0x0
    li r4, 0x0
    li r0, 0x1
    sth r3, 0x38(r29)
    stw r4, 0x30(r29)
    stw r0, 0xc(r29)
    beq lbl_fn_806D9EF0_000007AC
    stw r28, 0x2c(r29)
    b lbl_fn_806D9EF0_000007B0
lbl_fn_806D9EF0_000007AC:
    stw r4, 0x2c(r29)
lbl_fn_806D9EF0_000007B0:
    li r3, 0x0
lbl_fn_806D9EF0_000007B4:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806DA070(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80860F58@ha
    addi r31, r31, lbl_80860F58@l
    stw r30, 0x18(r1)
    mr r30, r5
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806DA070_0000081C
    li r0, 0x3
    stw r0, 0x0(r5)
    li r3, 0xb
    b lbl_fn_806DA070_00000874
lbl_fn_806DA070_0000081C:
    stw r3, 0x8(r1)
    lis r5, fn_806D9640@ha
    lwz r3, 0x4(r31)
    addi r5, r5, fn_806D9640@l
    sth r4, 0xc(r1)
    addi r4, r1, 0x8
    li r6, 0x0
    li r7, 0x0
    bl fn_806D5E60
    cmpwi r3, -0x1
    mr r4, r3
    bne lbl_fn_806DA070_0000085C
    li r0, 0x3
    stw r0, 0x0(r30)
    li r3, 0x0
    b lbl_fn_806DA070_00000874
lbl_fn_806DA070_0000085C:
    lwz r3, 0x4(r31)
    bl fn_806D5900
    lwz r3, 0x8(r3)
    bl fn_806EAC50
    stw r3, 0x0(r30)
    li r3, 0x0
lbl_fn_806DA070_00000874:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806DA120(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_27
    lis r30, lbl_80860F58@ha
    mr r27, r3
    addi r30, r30, lbl_80860F58@l
    mr r28, r4
    lwz r0, 0xc(r30)
    mr r29, r5
    mr r31, r6
    cmpwi r0, 0x0
    bne lbl_fn_806DA120_000008D0
    li r3, 0x3
    b lbl_fn_806DA120_00000A84
lbl_fn_806DA120_000008D0:
    cmpwi r3, 0x0
    beq lbl_fn_806DA120_000008E0
    cmpwi r4, 0x0
    bne lbl_fn_806DA120_000008E8
lbl_fn_806DA120_000008E0:
    li r3, 0xa
    b lbl_fn_806DA120_00000A84
lbl_fn_806DA120_000008E8:
    stw r3, 0x20(r1)
    lis r5, fn_806D9640@ha
    lwz r3, 0x4(r30)
    addi r5, r5, fn_806D9640@l
    sth r4, 0x24(r1)
    addi r4, r1, 0x20
    li r6, 0x0
    li r7, 0x0
    bl fn_806D5E60
    cmpwi r3, -0x1
    mr r4, r3
    beq lbl_fn_806DA120_00000994
    lwz r3, 0x4(r30)
    bl fn_806D5900
    mr r31, r3
    lwz r3, 0x8(r3)
    bl fn_806EAC50
    cmpwi r3, 0x1
    bne lbl_fn_806DA120_0000093C
    li r3, 0x5
    b lbl_fn_806DA120_00000A84
lbl_fn_806DA120_0000093C:
    cmpwi r3, 0x0
    bne lbl_fn_806DA120_00000A80
    mr r4, r29
    addi r3, r1, 0x44
    li r5, 0x10
    bl memcpy
    lis r5, fn_806D9620@ha
    lwz r3, 0x8(r30)
    addi r4, r1, 0x44
    li r6, 0x0
    addi r5, r5, fn_806D9620@l
    li r7, 0x0
    bl fn_806D5E60
    cmpwi r3, -0x1
    mr r4, r3
    beq lbl_fn_806DA120_00000A80
    lwz r3, 0x8(r30)
    bl fn_806D5900
    lwz r3, 0x20(r3)
    mr r4, r31
    bl fn_806D5930
    b lbl_fn_806DA120_00000A80
lbl_fn_806DA120_00000994:
    mr r3, r27
    mr r4, r28
    addi r5, r1, 0x2c
    bl fn_806EEDC0
    lis r3, fn_806D9740@ha
    lis r4, fn_806D9890@ha
    lis r7, fn_806D9AB0@ha
    lis r11, fn_806D9BB0@ha
    addi r3, r3, fn_806D9740@l
    addi r4, r4, fn_806D9890@l
    addi r7, r7, fn_806D9AB0@l
    addi r11, r11, fn_806D9BB0@l
    stw r3, 0x18(r1)
    mr r6, r29
    lwz r3, 0x0(r30)
    mr r8, r31
    stw r4, 0x10(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    addi r9, r1, 0x10
    stw r7, 0x1c(r1)
    li r7, 0x10
    li r10, 0x0
    stw r11, 0x14(r1)
    bl fn_806EA920
    lwz r3, 0x4(r30)
    addi r4, r1, 0x20
    bl fn_806D5930
    mr r4, r29
    addi r3, r1, 0x44
    li r5, 0x10
    bl memcpy
    lis r5, fn_806D9620@ha
    lwz r3, 0x8(r30)
    addi r4, r1, 0x44
    li r6, 0x0
    addi r5, r5, fn_806D9620@l
    li r7, 0x0
    bl fn_806D5E60
    cmpwi r3, -0x1
    mr r31, r3
    beq lbl_fn_806DA120_00000A74
    lwz r3, 0x4(r30)
    bl fn_806D58F0
    mr r4, r3
    lwz r3, 0x4(r30)
    subi r4, r4, 0x1
    bl fn_806D5900
    stw r3, 0x8(r1)
    mr r4, r31
    lwz r3, 0x8(r30)
    bl fn_806D5900
    lwz r3, 0x20(r3)
    addi r4, r1, 0x8
    bl fn_806D5930
    b lbl_fn_806DA120_00000A80
lbl_fn_806DA120_00000A74:
    lwz r3, 0x30(r30)
    addi r0, r3, 0x1
    stw r0, 0x30(r30)
lbl_fn_806DA120_00000A80:
    li r3, 0x0
lbl_fn_806DA120_00000A84:
    addi r11, r1, 0xa0
    bl _restgpr_27
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_806DA330(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_24
    lis r31, lbl_80860F58@ha
    mr r24, r3
    addi r31, r31, lbl_80860F58@l
    mr r29, r4
    lwz r0, 0xc(r31)
    mr r25, r5
    mr r26, r6
    mr r27, r7
    cmpwi r0, 0x0
    mr r28, r8
    bne lbl_fn_806DA330_00000AE8
    li r3, 0x3
    b lbl_fn_806DA330_00000BCC
lbl_fn_806DA330_00000AE8:
    lbz r0, 0x0(r5)
    mr r30, r27
    extsb. r0, r0
    beq lbl_fn_806DA330_00000AFC
    addi r30, r7, 0x10
lbl_fn_806DA330_00000AFC:
    stw r3, 0x8(r1)
    lis r5, fn_806D9640@ha
    lwz r3, 0x4(r31)
    addi r5, r5, fn_806D9640@l
    sth r4, 0xc(r1)
    addi r4, r1, 0x8
    li r6, 0x0
    li r7, 0x0
    bl fn_806D5E60
    cmpwi r3, -0x1
    mr r4, r3
    bne lbl_fn_806DA330_00000B44
    mr r3, r24
    mr r4, r29
    addi r5, r1, 0x14
    bl fn_806EEDC0
    li r3, 0x4
    b lbl_fn_806DA330_00000BCC
lbl_fn_806DA330_00000B44:
    lwz r3, 0x4(r31)
    bl fn_806D5900
    mr r31, r3
    lwz r3, 0x8(r3)
    bl fn_806EACE0
    cmpw r30, r3
    ble lbl_fn_806DA330_00000B70
    cmpwi r28, 0x0
    beq lbl_fn_806DA330_00000B70
    li r3, 0xc
    b lbl_fn_806DA330_00000BCC
lbl_fn_806DA330_00000B70:
    mr r3, r30
    bl fn_806D7A90
    mr r29, r3
    mr r4, r25
    li r5, 0x10
    bl memcpy
    mr r4, r26
    mr r5, r27
    addi r3, r29, 0x10
    bl memcpy
    lwz r3, 0x8(r31)
    mr r4, r29
    mr r5, r30
    mr r6, r28
    bl fn_806EAAD0
    mr r31, r3
    mr r3, r29
    bl fn_806D7AC0
    cmpwi r31, 0x0
    beq lbl_fn_806DA330_00000BC8
    li r3, 0x8
    b lbl_fn_806DA330_00000BCC
lbl_fn_806DA330_00000BC8:
    li r3, 0x0
lbl_fn_806DA330_00000BCC:
    addi r11, r1, 0x50
    bl _restgpr_24
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_806DA480(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80860F58@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_80860F58@l
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806DA480_00000C18
    li r3, 0x3
    b lbl_fn_806DA480_00000C24
lbl_fn_806DA480_00000C18:
    lwz r3, 0x0(r3)
    bl fn_806EA8A0
    li r3, 0x0
lbl_fn_806DA480_00000C24:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806DA4D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80860F58@ha
    addi r31, r31, lbl_80860F58@l
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806DA4D0_00000C6C
    li r3, 0x3
    b lbl_fn_806DA4D0_00000C90
lbl_fn_806DA4D0_00000C6C:
    lwz r3, 0x0(r31)
    bl fn_806EA850
    lwz r3, 0x8(r31)
    bl fn_806D5850
    lwz r3, 0x4(r31)
    bl fn_806D5850
    li r0, 0x0
    stw r0, 0xc(r31)
    li r3, 0x0
lbl_fn_806DA4D0_00000C90:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806DA540(void)
{
    nofralloc
    lis r3, lbl_80860F58@ha
    addi r3, r3, lbl_80860F58@l
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806DA540_00000CCC
    lhz r3, 0x38(r3)
    blr
lbl_fn_806DA540_00000CCC:
    li r3, 0x0
    blr
}

asm void fn_806DA570(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    lis r31, lbl_80860F58@ha
    addi r31, r31, lbl_80860F58@l
    stw r30, 0x58(r1)
    mr r30, r10
    stw r29, 0x54(r1)
    mr r29, r4
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806DA570_00000D1C
    li r3, 0x3
    b lbl_fn_806DA570_00000DB0
lbl_fn_806DA570_00000D1C:
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_806DA570_00000D30
    li r3, 0xa
    b lbl_fn_806DA570_00000DB0
lbl_fn_806DA570_00000D30:
    lbz r0, 0x0(r4)
    extsb. r0, r0
    bne lbl_fn_806DA570_00000D44
    li r3, 0xa
    b lbl_fn_806DA570_00000DB0
lbl_fn_806DA570_00000D44:
    stw r5, 0x3c(r1)
    mr r4, r3
    addi r3, r1, 0x8
    li r5, 0x10
    stw r7, 0x2c(r1)
    stw r6, 0x34(r1)
    stw r8, 0x38(r1)
    stw r9, 0x30(r1)
    bl memcpy
    mr r4, r29
    addi r3, r1, 0x18
    li r5, 0x10
    bl memcpy
    li r3, 0x4
    li r4, 0x1
    li r5, 0x0
    bl fn_806D57A0
    cmpwi r3, 0x0
    stw r3, 0x28(r1)
    bne lbl_fn_806DA570_00000D9C
    li r3, 0x1
    b lbl_fn_806DA570_00000DB0
lbl_fn_806DA570_00000D9C:
    stw r30, 0x40(r1)
    addi r4, r1, 0x8
    lwz r3, 0x8(r31)
    bl fn_806D5930
    li r3, 0x0
lbl_fn_806DA570_00000DB0:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806DA660(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    lis r31, lbl_80860F58@ha
    addi r31, r31, lbl_80860F58@l
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806DA660_00000DFC
    li r3, 0x3
    b lbl_fn_806DA660_00000E5C
lbl_fn_806DA660_00000DFC:
    cmpwi r3, 0x0
    beq lbl_fn_806DA660_00000E10
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_806DA660_00000E18
lbl_fn_806DA660_00000E10:
    li r3, 0xa
    b lbl_fn_806DA660_00000E5C
lbl_fn_806DA660_00000E18:
    mr r4, r3
    addi r3, r1, 0x18
    li r5, 0x10
    bl memcpy
    lis r5, fn_806D9630@ha
    lwz r3, 0x8(r31)
    addi r4, r1, 0x8
    li r6, 0x0
    addi r5, r5, fn_806D9630@l
    li r7, 0x0
    bl fn_806D5E60
    cmpwi r3, -0x1
    mr r4, r3
    beq lbl_fn_806DA660_00000E58
    lwz r3, 0x8(r31)
    bl fn_806D5C90
lbl_fn_806DA660_00000E58:
    li r3, 0x0
lbl_fn_806DA660_00000E5C:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_806DA700(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80860F58@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_80860F58@l
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806DA700_00000E98
    li r3, 0x1
    b lbl_fn_806DA700_00000EA8
lbl_fn_806DA700_00000E98:
    lwz r3, 0x8(r3)
    bl fn_806D58F0
    cntlzw r0, r3
    srwi r3, r0, 5
lbl_fn_806DA700_00000EA8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806DA750(void)
{
    nofralloc
    lis r3, lbl_80860F58@ha
    addi r3, r3, lbl_80860F58@l
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806DA750_00000EDC
    li r3, 0x1
    blr
lbl_fn_806DA750_00000EDC:
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806DA750_00000F30
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806DA750_00000F30
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806DA750_00000F30
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806DA750_00000F30
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806DA750_00000F30
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806DA750_00000F30
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806DA750_00000F38
lbl_fn_806DA750_00000F30:
    li r3, 0x0
    blr
lbl_fn_806DA750_00000F38:
    li r3, 0x1
    blr
}

asm void fn_806DA7D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80860F58@ha
    addi r31, r31, lbl_80860F58@l
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806DA7D0_00000F6C
    li r3, 0x0
    b lbl_fn_806DA7D0_00000FB4
lbl_fn_806DA7D0_00000F6C:
    stw r3, 0x8(r1)
    lis r5, fn_806D9640@ha
    lwz r3, 0x4(r31)
    addi r5, r5, fn_806D9640@l
    sth r4, 0xc(r1)
    addi r4, r1, 0x8
    li r6, 0x0
    li r7, 0x0
    bl fn_806D5E60
    cmpwi r3, -0x1
    mr r4, r3
    beq lbl_fn_806DA7D0_00000FB0
    lwz r3, 0x4(r31)
    bl fn_806D5900
    lwz r3, 0x8(r3)
    bl fn_806EACF0
    b lbl_fn_806DA7D0_00000FB4
lbl_fn_806DA7D0_00000FB0:
    li r3, 0x0
lbl_fn_806DA7D0_00000FB4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806DA860(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_806DA870(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_806DA880(void)
{
    nofralloc
    lis r7, lbl_80860DD0@ha
    lwz r0, lbl_80860DD0@l(r7)
    cmpwi r0, 0x1
    beq lbl_fn_806DA880_00001008
    li r3, 0x2
    blr
lbl_fn_806DA880_00001008:
    cmpwi r3, 0x0
    bne lbl_fn_806DA880_00001018
    li r3, 0x2
    blr
lbl_fn_806DA880_00001018:
    b fn_806DB810
    blr
}

asm void fn_806DA8B0(void)
{
    nofralloc
    cmpwi r3, 0x0
    beqlr
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806DA8B0_00001038
    blr
lbl_fn_806DA8B0_00001038:
    b fn_806DB9E0
    blr
}

asm void fn_806DA8D0(void)
{
    nofralloc
    cmpwi r3, 0x0
    beq lbl_fn_806DA8D0_00001054
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    bne lbl_fn_806DA8D0_0000105C
lbl_fn_806DA8D0_00001054:
    li r3, 0x2
    blr
lbl_fn_806DA8D0_0000105C:
    lwz r0, 0x108(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806DA8D0_00001070
    li r3, 0x0
    blr
lbl_fn_806DA8D0_00001070:
    li r4, 0x0
    b fn_806DC0B0
    blr
}

asm void fn_806DA910(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    beq lbl_fn_806DA910_000010A0
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806DA910_000010A8
lbl_fn_806DA910_000010A0:
    li r3, 0x2
    b lbl_fn_806DA910_000010D8
lbl_fn_806DA910_000010A8:
    cmplwi r4, 0x8
    ble lbl_fn_806DA910_000010C4
    lis r4, lbl_807C2AE0@ha
    addi r4, r4, lbl_807C2AE0@l
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DA910_000010D8
lbl_fn_806DA910_000010C4:
    slwi r4, r4, 3
    li r3, 0x0
    add r4, r0, r4
    stw r5, 0x1a8(r4)
    stw r6, 0x1ac(r4)
lbl_fn_806DA910_000010D8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806DA980(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r3, 0x0
    mr r12, r4
    stw r0, 0x54(r1)
    mr r11, r5
    stw r31, 0x4c(r1)
    mr r31, r9
    stw r30, 0x48(r1)
    mr r30, r8
    stw r29, 0x44(r1)
    mr r29, r3
    beq lbl_fn_806DA980_00001130
    lwz r10, 0x0(r3)
    cmpwi r10, 0x0
    bne lbl_fn_806DA980_00001138
lbl_fn_806DA980_00001130:
    li r3, 0x2
    b lbl_fn_806DA980_00001204
lbl_fn_806DA980_00001138:
    cmpwi r4, 0x0
    beq lbl_fn_806DA980_0000114C
    lbz r0, 0x0(r4)
    extsb. r0, r0
    bne lbl_fn_806DA980_00001154
lbl_fn_806DA980_0000114C:
    li r3, 0x2
    b lbl_fn_806DA980_00001204
lbl_fn_806DA980_00001154:
    cmpwi r5, 0x0
    beq lbl_fn_806DA980_00001168
    lbz r0, 0x0(r5)
    extsb. r0, r0
    bne lbl_fn_806DA980_00001170
lbl_fn_806DA980_00001168:
    li r3, 0x2
    b lbl_fn_806DA980_00001204
lbl_fn_806DA980_00001170:
    cmpwi r8, 0x0
    bne lbl_fn_806DA980_0000118C
    lis r4, lbl_807C2AF0@ha
    addi r4, r4, lbl_807C2AF0@l
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DA980_00001204
lbl_fn_806DA980_0000118C:
    lwz r0, 0x108(r10)
    cmpwi r0, 0x0
    beq lbl_fn_806DA980_000011C8
    addi r3, r1, 0x20
    li r4, 0x0
    li r5, 0x20
    bl memset
    mr r12, r30
    mr r3, r29
    mr r5, r31
    addi r4, r1, 0x20
    mtctr r12
    bctrl
    li r3, 0x0
    b lbl_fn_806DA980_00001204
lbl_fn_806DA980_000011C8:
    stw r6, 0x8(r1)
    li r0, 0x0
    lis r4, lbl_807C2B00@ha
    li r10, 0x0
    stw r0, 0xc(r1)
    addi r4, r4, lbl_807C2B00@l
    mr r5, r4
    stw r7, 0x10(r1)
    mr r6, r4
    mr r7, r4
    stw r8, 0x14(r1)
    mr r8, r12
    stw r9, 0x18(r1)
    mr r9, r11
    bl fn_806DF610
lbl_fn_806DA980_00001204:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_806DAAB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_806DAAB0_00001284
    lwz r31, 0x0(r3)
    cmpwi r31, 0x0
    bne lbl_fn_806DAAB0_00001254
    b lbl_fn_806DAAB0_00001284
lbl_fn_806DAAB0_00001254:
    lwz r0, 0x108(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806DAAB0_00001284
    lwz r30, 0x1f4(r31)
    li r4, 0x1
    bl fn_806E0770
    mr r3, r29
    bl fn_806DBA70
    cmpwi r30, 0x3
    bne lbl_fn_806DAAB0_00001284
    li r0, 0x4
    stw r0, 0x1f4(r31)
lbl_fn_806DAAB0_00001284:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806DAB30(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    lwz r31, 0x4c(r1)
    stw r30, 0x38(r1)
    lwz r30, 0x48(r1)
    stw r29, 0x34(r1)
    mr r29, r3
    beq lbl_fn_806DAB30_000012D8
    lwz r11, 0x0(r3)
    cmpwi r11, 0x0
    bne lbl_fn_806DAB30_000012E0
lbl_fn_806DAB30_000012D8:
    li r3, 0x2
    b lbl_fn_806DAB30_00001354
lbl_fn_806DAB30_000012E0:
    cmpwi r30, 0x0
    bne lbl_fn_806DAB30_000012FC
    lis r4, lbl_807C2AF0@ha
    addi r4, r4, lbl_807C2AF0@l
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DAB30_00001354
lbl_fn_806DAB30_000012FC:
    lwz r0, 0x108(r11)
    cmpwi r0, 0x0
    beq lbl_fn_806DAB30_00001340
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0x10
    bl memset
    mr r12, r30
    li r0, 0x601
    mr r3, r29
    mr r5, r31
    stw r0, 0x20(r1)
    addi r4, r1, 0x18
    mtctr r12
    bctrl
    li r3, 0x0
    b lbl_fn_806DAB30_00001354
lbl_fn_806DAB30_00001340:
    stw r10, 0x8(r1)
    li r10, 0x0
    stw r30, 0xc(r1)
    stw r31, 0x10(r1)
    bl fn_806E6250
lbl_fn_806DAB30_00001354:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806DAC00(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x224(r1)
    stw r31, 0x21c(r1)
    mr r31, r8
    stw r30, 0x218(r1)
    mr r30, r7
    stw r29, 0x214(r1)
    mr r29, r3
    beq lbl_fn_806DAC00_000013B0
    lwz r9, 0x0(r3)
    cmpwi r9, 0x0
    beq lbl_fn_806DAC00_000013B0
    cmpwi r4, 0x0
    bne lbl_fn_806DAC00_000013B8
lbl_fn_806DAC00_000013B0:
    li r3, 0x2
    b lbl_fn_806DAC00_00001434
lbl_fn_806DAC00_000013B8:
    cmpwi r7, 0x0
    bne lbl_fn_806DAC00_000013D4
    lis r4, lbl_807C2AF0@ha
    addi r4, r4, lbl_807C2AF0@l
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DAC00_00001434
lbl_fn_806DAC00_000013D4:
    lwz r0, 0x108(r9)
    cmpwi r0, 0x0
    beq lbl_fn_806DAC00_00001410
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x204
    bl memset
    mr r12, r30
    mr r3, r29
    mr r5, r31
    addi r4, r1, 0x8
    mtctr r12
    bctrl
    li r3, 0x0
    b lbl_fn_806DAC00_00001434
lbl_fn_806DAC00_00001410:
    lwz r0, 0x1f4(r9)
    cmpwi r0, 0x4
    bne lbl_fn_806DAC00_00001430
    lis r4, lbl_807C2B6C@ha
    addi r4, r4, lbl_807C2B6C@l
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DAC00_00001434
lbl_fn_806DAC00_00001430:
    bl fn_806E2BD0
lbl_fn_806DAC00_00001434:
    lwz r0, 0x224(r1)
    lwz r31, 0x21c(r1)
    lwz r30, 0x218(r1)
    lwz r29, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_806DACE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    beq lbl_fn_806DACE0_00001470
    lwz r6, 0x0(r3)
    cmpwi r6, 0x0
    bne lbl_fn_806DACE0_00001478
lbl_fn_806DACE0_00001470:
    li r3, 0x2
    b lbl_fn_806DACE0_000014B0
lbl_fn_806DACE0_00001478:
    lwz r0, 0x108(r6)
    cmpwi r0, 0x0
    beq lbl_fn_806DACE0_0000148C
    li r3, 0x0
    b lbl_fn_806DACE0_000014B0
lbl_fn_806DACE0_0000148C:
    lwz r0, 0x1f4(r6)
    cmpwi r0, 0x4
    bne lbl_fn_806DACE0_000014AC
    lis r4, lbl_807C2B6C@ha
    addi r4, r4, lbl_807C2B6C@l
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DACE0_000014B0
lbl_fn_806DACE0_000014AC:
    bl fn_806E2010
lbl_fn_806DACE0_000014B0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806DAD50(void)
{
    nofralloc
    stwu r1, -0x420(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x424(r1)
    stw r31, 0x41c(r1)
    lis r31, lbl_807C2AE0@ha
    addi r31, r31, lbl_807C2AE0@l
    stw r30, 0x418(r1)
    stw r29, 0x414(r1)
    mr r29, r4
    stw r28, 0x410(r1)
    mr r28, r3
    beq lbl_fn_806DAD50_00001500
    lwz r30, 0x0(r3)
    cmpwi r30, 0x0
    bne lbl_fn_806DAD50_00001508
lbl_fn_806DAD50_00001500:
    li r3, 0x2
    b lbl_fn_806DAD50_00001624
lbl_fn_806DAD50_00001508:
    lwz r0, 0x108(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806DAD50_0000151C
    li r3, 0x0
    b lbl_fn_806DAD50_00001624
lbl_fn_806DAD50_0000151C:
    lwz r0, 0x1f4(r30)
    cmpwi r0, 0x4
    bne lbl_fn_806DAD50_00001538
    addi r4, r31, 0x8c
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DAD50_00001624
lbl_fn_806DAD50_00001538:
    cmpwi r5, 0x0
    bne lbl_fn_806DAD50_00001550
    addi r4, r31, 0xe0
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DAD50_00001624
lbl_fn_806DAD50_00001550:
    mr r4, r5
    addi r3, r1, 0x8
    li r5, 0x401
    bl fn_806E8B10
    addi r4, r1, 0x8
    li r3, 0x2f
    b lbl_fn_806DAD50_00001584
    nop
lbl_fn_806DAD50_00001570:
    extsb r0, r5
    cmpwi r0, 0x5c
    bne lbl_fn_806DAD50_00001580
    stb r3, 0x0(r4)
lbl_fn_806DAD50_00001580:
    addi r4, r4, 0x1
lbl_fn_806DAD50_00001584:
    lbz r5, 0x0(r4)
    extsb. r0, r5
    bne lbl_fn_806DAD50_00001570
    mr r3, r28
    mr r4, r29
    li r5, 0x0
    bl fn_806DE290
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0xf0
    bl fn_806DE480
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0xfc
    bl fn_806DE480
    lwz r5, 0x198(r30)
    mr r3, r28
    addi r4, r30, 0x210
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x108
    bl fn_806DE480
    mr r3, r28
    mr r5, r29
    addi r4, r30, 0x210
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x118
    bl fn_806DE480
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r1, 0x8
    bl fn_806DE480
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x128
    bl fn_806DE480
    li r3, 0x0
lbl_fn_806DAD50_00001624:
    lwz r0, 0x424(r1)
    lwz r31, 0x41c(r1)
    lwz r30, 0x418(r1)
    lwz r29, 0x414(r1)
    lwz r28, 0x410(r1)
    mtlr r0
    addi r1, r1, 0x420
    blr
}

asm void fn_806DAEE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    beq lbl_fn_806DAEE0_00001670
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    bne lbl_fn_806DAEE0_00001678
lbl_fn_806DAEE0_00001670:
    li r3, 0x2
    b lbl_fn_806DAEE0_000016B0
lbl_fn_806DAEE0_00001678:
    lwz r0, 0x108(r5)
    cmpwi r0, 0x0
    beq lbl_fn_806DAEE0_0000168C
    li r3, 0x0
    b lbl_fn_806DAEE0_000016B0
lbl_fn_806DAEE0_0000168C:
    lwz r0, 0x1f4(r5)
    cmpwi r0, 0x4
    bne lbl_fn_806DAEE0_000016AC
    lis r4, lbl_807C2B6C@ha
    addi r4, r4, lbl_807C2B6C@l
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DAEE0_000016B0
lbl_fn_806DAEE0_000016AC:
    bl fn_806DDE60
lbl_fn_806DAEE0_000016B0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806DAF50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    beq lbl_fn_806DAF50_000016EC
    lwz r31, 0x0(r3)
    cmpwi r31, 0x0
    bne lbl_fn_806DAF50_000016F4
lbl_fn_806DAF50_000016EC:
    li r3, 0x2
    b lbl_fn_806DAF50_000017A0
lbl_fn_806DAF50_000016F4:
    lwz r0, 0x108(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806DAF50_00001708
    li r3, 0x0
    b lbl_fn_806DAF50_000017A0
lbl_fn_806DAF50_00001708:
    lwz r0, 0x1f4(r31)
    cmpwi r0, 0x4
    bne lbl_fn_806DAF50_00001728
    lis r4, lbl_807C2B6C@ha
    addi r4, r4, lbl_807C2B6C@l
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DAF50_000017A0
lbl_fn_806DAF50_00001728:
    addi r5, r1, 0x8
    bl fn_806E57E0
    cmpwi r3, 0x0
    bne lbl_fn_806DAF50_00001740
    li r3, 0x0
    b lbl_fn_806DAF50_000017A0
lbl_fn_806DAF50_00001740:
    lwz r4, 0x8(r1)
    lwz r3, 0x18(r4)
    subi r0, r3, 0x1
    stw r0, 0x18(r4)
    lwz r0, 0x100(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806DAF50_0000179C
    lwz r3, 0x8(r1)
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_806DAF50_0000179C
    lwz r3, 0x14(r3)
    bl fn_806D7AC0
    lwz r3, 0x8(r1)
    li r0, 0x0
    stw r0, 0x14(r3)
    lwz r3, 0x8(r1)
    bl fn_806E5D00
    cmpwi r3, 0x0
    beq lbl_fn_806DAF50_0000179C
    lwz r4, 0x8(r1)
    mr r3, r30
    bl fn_806E59C0
lbl_fn_806DAF50_0000179C:
    li r3, 0x0
lbl_fn_806DAF50_000017A0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806DB050(void)
{
    nofralloc
    cmpwi r3, 0x0
    beq lbl_fn_806DB050_000017D4
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    bne lbl_fn_806DB050_000017DC
lbl_fn_806DB050_000017D4:
    li r3, 0x2
    blr
lbl_fn_806DB050_000017DC:
    lwz r0, 0x108(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806DB050_000017F8
    li r0, 0x0
    stw r0, 0x0(r4)
    li r3, 0x0
    blr
lbl_fn_806DB050_000017F8:
    lwz r0, 0x5d0(r3)
    li r3, 0x0
    stw r0, 0x0(r4)
    blr
}

asm void fn_806DB0A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_806DB0A0_00001844
    lwz r6, 0x0(r3)
    cmpwi r6, 0x0
    bne lbl_fn_806DB0A0_0000184C
lbl_fn_806DB0A0_00001844:
    li r3, 0x2
    b lbl_fn_806DB0A0_0000196C
lbl_fn_806DB0A0_0000184C:
    lwz r0, 0x108(r6)
    cmpwi r0, 0x0
    beq lbl_fn_806DB0A0_00001870
    mr r3, r31
    li r4, 0x0
    li r5, 0x214
    bl memset
    li r3, 0x0
    b lbl_fn_806DB0A0_0000196C
lbl_fn_806DB0A0_00001870:
    cmpwi r5, 0x0
    bne lbl_fn_806DB0A0_0000188C
    lis r4, lbl_807C2C10@ha
    addi r4, r4, lbl_807C2C10@l
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DB0A0_0000196C
lbl_fn_806DB0A0_0000188C:
    cmpwi r4, 0x0
    lwz r0, 0x5d0(r6)
    blt lbl_fn_806DB0A0_000018A0
    cmpw r4, r0
    blt lbl_fn_806DB0A0_000018B8
lbl_fn_806DB0A0_000018A0:
    lis r4, lbl_807C2C20@ha
    mr r3, r29
    addi r4, r4, lbl_807C2C20@l
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DB0A0_0000196C
lbl_fn_806DB0A0_000018B8:
    bl fn_806E5BC0
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_806DB0A0_000018E0
    lis r4, lbl_807C2C20@ha
    mr r3, r29
    addi r4, r4, lbl_807C2C20@l
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DB0A0_0000196C
lbl_fn_806DB0A0_000018E0:
    lwz r0, 0x0(r3)
    stw r0, 0x0(r31)
    lwz r4, 0x8(r3)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r31)
    lwz r3, 0x8(r3)
    lwz r4, 0x8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_806DB0A0_00001914
    addi r3, r31, 0x8
    li r5, 0x100
    bl fn_806E8B10
    b lbl_fn_806DB0A0_0000191C
lbl_fn_806DB0A0_00001914:
    li r0, 0x0
    stb r0, 0x8(r31)
lbl_fn_806DB0A0_0000191C:
    lwz r3, 0x8(r30)
    lwz r4, 0xc(r3)
    cmpwi r4, 0x0
    beq lbl_fn_806DB0A0_0000193C
    addi r3, r31, 0x108
    li r5, 0x100
    bl fn_806E8B10
    b lbl_fn_806DB0A0_00001944
lbl_fn_806DB0A0_0000193C:
    li r0, 0x0
    stb r0, 0x108(r31)
lbl_fn_806DB0A0_00001944:
    lwz r4, 0x8(r30)
    li r3, 0x0
    lwz r0, 0x10(r4)
    stw r0, 0x208(r31)
    lwz r4, 0x8(r30)
    lhz r0, 0x14(r4)
    stw r0, 0x20c(r31)
    lwz r4, 0x8(r30)
    lwz r0, 0x18(r4)
    stw r0, 0x210(r31)
lbl_fn_806DB0A0_0000196C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806DB220(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_806DB220_000019C8
    lwz r6, 0x0(r3)
    cmpwi r6, 0x0
    bne lbl_fn_806DB220_000019D0
lbl_fn_806DB220_000019C8:
    li r3, 0x2
    b lbl_fn_806DB220_00001A58
lbl_fn_806DB220_000019D0:
    lwz r0, 0x108(r6)
    cmpwi r0, 0x0
    beq lbl_fn_806DB220_000019EC
    li r0, 0x0
    stw r0, 0x0(r5)
    li r3, 0x0
    b lbl_fn_806DB220_00001A58
lbl_fn_806DB220_000019EC:
    addi r5, r1, 0x8
    bl fn_806E57E0
    cmpwi r3, 0x0
    beq lbl_fn_806DB220_00001A18
    lwz r3, 0x8(r1)
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806DB220_00001A18
    lwz r0, 0x0(r3)
    stw r0, 0x0(r31)
    b lbl_fn_806DB220_00001A54
lbl_fn_806DB220_00001A18:
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_806E57E0
    cmpwi r3, 0x0
    beq lbl_fn_806DB220_00001A4C
    lwz r3, 0x8(r1)
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806DB220_00001A4C
    lwz r0, 0x0(r3)
    stw r0, 0x0(r31)
    b lbl_fn_806DB220_00001A54
lbl_fn_806DB220_00001A4C:
    li r0, -0x1
    stw r0, 0x0(r31)
lbl_fn_806DB220_00001A54:
    li r3, 0x0
lbl_fn_806DB220_00001A58:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806DB310(void)
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
    beq lbl_fn_806DB310_00001AB0
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    bne lbl_fn_806DB310_00001AB8
lbl_fn_806DB310_00001AB0:
    li r3, 0x0
    b lbl_fn_806DB310_00001B28
lbl_fn_806DB310_00001AB8:
    lwz r0, 0x108(r5)
    cmpwi r0, 0x0
    beq lbl_fn_806DB310_00001ACC
    li r3, 0x0
    b lbl_fn_806DB310_00001B28
lbl_fn_806DB310_00001ACC:
    addi r5, r1, 0x8
    bl fn_806E57E0
    cmpwi r3, 0x0
    beq lbl_fn_806DB310_00001AF4
    lwz r3, 0x8(r1)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806DB310_00001AF4
    li r3, 0x1
    b lbl_fn_806DB310_00001B28
lbl_fn_806DB310_00001AF4:
    mr r3, r30
    mr r4, r31
    addi r5, r1, 0x8
    bl fn_806E57E0
    cmpwi r3, 0x0
    beq lbl_fn_806DB310_00001B24
    lwz r3, 0x8(r1)
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806DB310_00001B24
    li r3, 0x1
    b lbl_fn_806DB310_00001B28
lbl_fn_806DB310_00001B24:
    li r3, 0x0
lbl_fn_806DB310_00001B28:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806DB3D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    beq lbl_fn_806DB3D0_00001B60
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    bne lbl_fn_806DB3D0_00001B68
lbl_fn_806DB3D0_00001B60:
    li r3, 0x2
    b lbl_fn_806DB3D0_00001BB8
lbl_fn_806DB3D0_00001B68:
    lwz r0, 0x108(r5)
    cmpwi r0, 0x0
    beq lbl_fn_806DB3D0_00001B7C
    li r3, 0x0
    b lbl_fn_806DB3D0_00001BB8
lbl_fn_806DB3D0_00001B7C:
    lwz r0, 0x1f4(r5)
    cmpwi r0, 0x4
    bne lbl_fn_806DB3D0_00001B9C
    lis r4, lbl_807C2B6C@ha
    addi r4, r4, lbl_807C2B6C@l
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DB3D0_00001BB8
lbl_fn_806DB3D0_00001B9C:
    li r5, 0x1
    bl fn_806DE020
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806DB3D0_00001BB4
    mr r0, r3
lbl_fn_806DB3D0_00001BB4:
    mr r3, r0
lbl_fn_806DB3D0_00001BB8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806DB460(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    addi r11, r1, 0x220
    bl _savegpr_27
    cmpwi r3, 0x0
    lis r29, lbl_807C2AE0@ha
    mr r30, r3
    mr r31, r4
    mr r27, r6
    addi r29, r29, lbl_807C2AE0@l
    beq lbl_fn_806DB460_00001C0C
    lwz r28, 0x0(r3)
    cmpwi r28, 0x0
    bne lbl_fn_806DB460_00001C14
lbl_fn_806DB460_00001C0C:
    li r3, 0x2
    b lbl_fn_806DB460_00001DE4
lbl_fn_806DB460_00001C14:
    lwz r0, 0x108(r28)
    cmpwi r0, 0x0
    beq lbl_fn_806DB460_00001C28
    li r3, 0x0
    b lbl_fn_806DB460_00001DE4
lbl_fn_806DB460_00001C28:
    lwz r0, 0x1f4(r28)
    cmpwi r0, 0x4
    bne lbl_fn_806DB460_00001C44
    addi r4, r29, 0x8c
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DB460_00001DE4
lbl_fn_806DB460_00001C44:
    cmpwi r5, 0x0
    bne lbl_fn_806DB460_00001C5C
    addi r4, r29, 0x16c
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DB460_00001DE4
lbl_fn_806DB460_00001C5C:
    cmpwi r6, 0x0
    bne lbl_fn_806DB460_00001C74
    addi r4, r29, 0x188
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DB460_00001DE4
lbl_fn_806DB460_00001C74:
    mr r4, r5
    addi r3, r1, 0x108
    li r5, 0x100
    bl fn_806E8B10
    addi r4, r1, 0x108
    li r3, 0x2f
    b lbl_fn_806DB460_00001CA4
lbl_fn_806DB460_00001C90:
    extsb r0, r5
    cmpwi r0, 0x5c
    bne lbl_fn_806DB460_00001CA0
    stb r3, 0x0(r4)
lbl_fn_806DB460_00001CA0:
    addi r4, r4, 0x1
lbl_fn_806DB460_00001CA4:
    lbz r5, 0x0(r4)
    extsb. r0, r5
    bne lbl_fn_806DB460_00001C90
    mr r4, r27
    addi r3, r1, 0x8
    li r5, 0x100
    bl fn_806E8B10
    addi r4, r1, 0x8
    li r3, 0x2f
    b lbl_fn_806DB460_00001CE4
    nop
lbl_fn_806DB460_00001CD0:
    extsb r0, r5
    cmpwi r0, 0x5c
    bne lbl_fn_806DB460_00001CE0
    stb r3, 0x0(r4)
lbl_fn_806DB460_00001CE0:
    addi r4, r4, 0x1
lbl_fn_806DB460_00001CE4:
    lbz r5, 0x0(r4)
    extsb. r0, r5
    bne lbl_fn_806DB460_00001CD0
    lwz r0, 0x23c(r28)
    cmpw r31, r0
    bne lbl_fn_806DB460_00001D2C
    addi r3, r1, 0x108
    addi r4, r28, 0x3b8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806DB460_00001D2C
    addi r3, r1, 0x8
    addi r4, r28, 0x4b8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806DB460_00001D2C
    li r3, 0x0
    b lbl_fn_806DB460_00001DE4
lbl_fn_806DB460_00001D2C:
    stw r31, 0x23c(r28)
    addi r3, r28, 0x3b8
    addi r4, r1, 0x108
    li r5, 0x100
    bl fn_806E8B10
    addi r3, r28, 0x4b8
    addi r4, r1, 0x8
    li r5, 0x100
    bl fn_806E8B10
    mr r3, r30
    addi r4, r28, 0x210
    addi r5, r29, 0x1a0
    bl fn_806DE480
    mr r3, r30
    mr r5, r31
    addi r4, r28, 0x210
    bl fn_806DE4E0
    mr r3, r30
    addi r4, r28, 0x210
    addi r5, r29, 0xfc
    bl fn_806DE480
    lwz r5, 0x198(r28)
    mr r3, r30
    addi r4, r28, 0x210
    bl fn_806DE4E0
    mr r3, r30
    addi r4, r28, 0x210
    addi r5, r29, 0x1ac
    bl fn_806DE480
    mr r3, r30
    addi r4, r28, 0x210
    addi r5, r1, 0x108
    bl fn_806DE480
    mr r3, r30
    addi r4, r28, 0x210
    addi r5, r29, 0x1bc
    bl fn_806DE480
    mr r3, r30
    addi r4, r28, 0x210
    addi r5, r1, 0x8
    bl fn_806DE480
    mr r3, r30
    addi r4, r28, 0x210
    addi r5, r29, 0x128
    bl fn_806DE480
    li r3, 0x0
lbl_fn_806DB460_00001DE4:
    addi r11, r1, 0x220
    bl _restgpr_27
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_806DB690(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    beq lbl_fn_806DB690_00001E20
    lwz r6, 0x0(r3)
    cmpwi r6, 0x0
    bne lbl_fn_806DB690_00001E28
lbl_fn_806DB690_00001E20:
    li r3, 0x2
    b lbl_fn_806DB690_00001E8C
lbl_fn_806DB690_00001E28:
    lwz r0, 0x108(r6)
    cmpwi r0, 0x0
    beq lbl_fn_806DB690_00001E3C
    li r3, 0x0
    b lbl_fn_806DB690_00001E8C
lbl_fn_806DB690_00001E3C:
    lwz r0, 0x1f4(r6)
    cmpwi r0, 0x4
    bne lbl_fn_806DB690_00001E5C
    lis r4, lbl_807C2B6C@ha
    addi r4, r4, lbl_807C2B6C@l
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DB690_00001E8C
lbl_fn_806DB690_00001E5C:
    cmpwi r5, 0x0
    bne lbl_fn_806DB690_00001E78
    lis r4, lbl_807C2CA8@ha
    addi r4, r4, lbl_807C2CA8@l
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DB690_00001E8C
lbl_fn_806DB690_00001E78:
    mr r6, r5
    li r5, 0x1
    li r7, 0x0
    li r8, 0x0
    bl fn_806DD7C0
lbl_fn_806DB690_00001E8C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806DB730(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r8
    stw r30, 0x28(r1)
    mr r30, r7
    stw r29, 0x24(r1)
    mr r29, r3
    beq lbl_fn_806DB730_00001ED8
    lwz r9, 0x0(r3)
    cmpwi r9, 0x0
    bne lbl_fn_806DB730_00001EE0
lbl_fn_806DB730_00001ED8:
    li r3, 0x2
    b lbl_fn_806DB730_00001F5C
lbl_fn_806DB730_00001EE0:
    cmpwi r7, 0x0
    bne lbl_fn_806DB730_00001EFC
    lis r4, lbl_807C2AF0@ha
    addi r4, r4, lbl_807C2AF0@l
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DB730_00001F5C
lbl_fn_806DB730_00001EFC:
    lwz r0, 0x1f4(r9)
    cmpwi r0, 0x4
    bne lbl_fn_806DB730_00001F1C
    lis r4, lbl_807C2B6C@ha
    addi r4, r4, lbl_807C2B6C@l
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DB730_00001F5C
lbl_fn_806DB730_00001F1C:
    lwz r0, 0x108(r9)
    cmpwi r0, 0x0
    beq lbl_fn_806DB730_00001F58
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0xc
    bl memset
    mr r12, r30
    mr r3, r29
    mr r5, r31
    addi r4, r1, 0x8
    mtctr r12
    bctrl
    li r3, 0x0
    b lbl_fn_806DB730_00001F5C
lbl_fn_806DB730_00001F58:
    bl fn_806E64E0
lbl_fn_806DB730_00001F5C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806DB810(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    li r31, 0x0
    stw r31, 0x0(r3)
    mr r30, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    li r3, 0x638
    bl fn_806D7A90
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_fn_806DB810_00001FC8
    li r3, 0x1
    b lbl_fn_806DB810_00002134
lbl_fn_806DB810_00001FC8:
    li r4, 0x0
    li r5, 0x638
    bl memset
    lwz r4, 0x8(r1)
    li r0, 0x1
    addi r3, r1, 0x8
    stb r31, 0x0(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x5b8(r4)
    lwz r4, 0x8(r1)
    stw r0, 0x100(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x104(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x108(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x10c(r4)
    lwz r4, 0x8(r1)
    stw r27, 0x60c(r4)
    lwz r4, 0x8(r1)
    stw r28, 0x610(r4)
    lwz r4, 0x8(r1)
    stw r29, 0x1a4(r4)
    bl fn_806E5500
    cmpwi r3, 0x0
    bne lbl_fn_806DB810_00002040
    lwz r3, 0x8(r1)
    bl fn_806D7AC0
    li r3, 0x1
    b lbl_fn_806DB810_00002134
lbl_fn_806DB810_00002040:
    lwz r4, 0x8(r1)
    addi r3, r1, 0x8
    stw r31, 0x5c0(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1a8(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1ac(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1b0(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1b4(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1b8(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1bc(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1c0(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1c4(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1c8(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1cc(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1d0(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1d4(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1d8(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1dc(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1e0(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1e4(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1e8(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1ec(r4)
    bl fn_806DBA70
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_806DB810_0000211C
    lwz r30, 0x8(r1)
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_806E0770
    addi r3, r1, 0x8
    bl fn_806E2FB0
    lwz r3, 0x5c8(r30)
    bl fn_806D63A0
    mr r3, r30
    bl fn_806D7AC0
    mr r3, r31
    b lbl_fn_806DB810_00002134
lbl_fn_806DB810_0000211C:
    bl fn_806D8F10
    bl fn_806D8F30
    bl fn_80680D18
    lwz r0, 0x8(r1)
    li r3, 0x0
    stw r0, 0x0(r30)
lbl_fn_806DB810_00002134:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
