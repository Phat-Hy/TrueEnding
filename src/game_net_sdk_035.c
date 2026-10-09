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
extern void fn_80680CF8(void);
extern void fn_80680D18(void);
extern void fn_806820D4(void);
extern void fn_8068236C(void);
extern void fn_80682544(void);
extern void fn_806827C4(void);
extern void fn_80684600(void);
extern void fn_806D58F0(void);
extern void fn_806D5900(void);
extern void fn_806D5930(void);
extern void fn_806D6560(void);
extern void fn_806D7A90(void);
extern void fn_806D7AC0(void);
extern void fn_806D7F30(void);
extern void fn_806D8F30(void);
extern void fn_806D8FC0(void);
extern void fn_806D8FE0(void);
extern void fn_806D9380(void);
extern void fn_806DE790(void);
extern void fn_806DED80(void);
extern void fn_806DEE40(void);
extern void fn_806E3A60(void);
extern void fn_806E4E20(void);
extern void fn_806E4EA0(void);
extern void fn_806E65E0(void);
extern void fn_806ED710(void);
extern void fn_806ED800(void);
extern void fn_806ED8D0(void);
extern void fn_806EDAA0(void);
extern void fn_806EDCB0(void);
extern void fn_806EDF70(void);
extern void fn_806EE030(void);
extern void fn_806EE4E0(void);
extern void fn_806EE560(void);
extern void fn_806EE8B0(void);
extern void fn_806EF050(void);
extern void memmove(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807C3CD8[];
extern u8 lbl_807C4190[];
extern u8 lbl_807C41C0[];
extern u8 lbl_807C4298[];
extern u8 lbl_807C42C0[];
extern u8 lbl_807C42F8[];
extern u8 lbl_807C4308[];

/* Small data declarations */

/* Function declarations */
void pad_03_806E8648_text(void);
void fn_806E8650(void);
void fn_806E87A0(void);
void fn_806E8890(void);
void fn_806E89D0(void);
void fn_806E8B10(void);
void fn_806E8B60(void);
void fn_806E8D30(void);
void fn_806E8E10(void);
void fn_806E8EC0(void);
void fn_806E8FB0(void);
void fn_806E91A0(void);
void fn_806E91F0(void);
void fn_806E9230(void);
void fn_806E92D0(void);
void fn_806E93E0(void);
void fn_806E95D0(void);
void fn_806E96A0(void);
void fn_806E9700(void);
void fn_806E9710(void);
void fn_806E9730(void);
void fn_806E9760(void);
void fn_806E97F0(void);
void fn_806E9860(void);
void fn_806E9900(void);
void fn_806E99F0(void);
void fn_806E9AD0(void);
void fn_806E9BB0(void);
void fn_806E9C70(void);
void fn_806E9D30(void);
void fn_806E9E40(void);
void fn_806E9F50(void);
void fn_806EA050(void);
void fn_806EA120(void);
void fn_806EA180(void);
void fn_806EA1E0(void);
void fn_806EA2C0(void);
void fn_806EA370(void);
void fn_806EA3E0(void);
void fn_806EA440(void);
void fn_806EA540(void);

asm void pad_03_806E8648_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
}

asm void fn_806E8650(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r26, 0x0(r3)
    mr r29, r3
    li r30, 0x0
    li r28, 0x0
    lwz r0, 0x238(r26)
    cmpwi r0, 0x0
    ble lbl_fn_806E8650_0000013C
    slwi r3, r0, 2
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806E8650_00000064
    lis r4, lbl_807C3CD8@ha
    mr r3, r29
    addi r4, r4, lbl_807C3CD8@l
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E8650_00000140
lbl_fn_806E8650_00000064:
    lwz r5, 0x5c4(r26)
    li r0, 0x1
    b lbl_fn_806E8650_000000B0
lbl_fn_806E8650_00000070:
    lwz r4, 0x0(r5)
    cmpwi r4, 0x3
    bne lbl_fn_806E8650_000000AC
    lwz r4, 0x14(r5)
    cmpwi r4, 0x5
    beq lbl_fn_806E8650_000000AC
    lwz r4, 0x4(r5)
    lwz r4, 0x184(r4)
    cmpwi r4, 0x0
    bne lbl_fn_806E8650_000000AC
    stwx r5, r3, r28
    addi r30, r30, 0x1
    addi r28, r28, 0x4
    lwz r4, 0x4(r5)
    stw r0, 0x184(r4)
lbl_fn_806E8650_000000AC:
    lwz r5, 0x20(r5)
lbl_fn_806E8650_000000B0:
    cmpwi r5, 0x0
    bne lbl_fn_806E8650_00000070
    mr r27, r31
    li r26, 0x0
    b lbl_fn_806E8650_000000E8
lbl_fn_806E8650_000000C4:
    lwz r4, 0x0(r27)
    mr r3, r29
    bl fn_806E65E0
    cmpwi r3, 0x0
    beq lbl_fn_806E8650_000000E0
    lwz r4, 0x0(r27)
    stw r3, 0x1c(r4)
lbl_fn_806E8650_000000E0:
    addi r27, r27, 0x4
    addi r26, r26, 0x1
lbl_fn_806E8650_000000E8:
    cmpw r26, r30
    blt lbl_fn_806E8650_000000C4
    mr r27, r31
    li r26, 0x0
    li r28, 0x0
    b lbl_fn_806E8650_0000012C
lbl_fn_806E8650_00000100:
    lwz r3, 0x0(r27)
    lwz r3, 0x4(r3)
    stw r28, 0x184(r3)
    lwz r0, 0x188(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806E8650_00000124
    lwz r4, 0x0(r27)
    mr r3, r29
    bl fn_806E3A60
lbl_fn_806E8650_00000124:
    addi r27, r27, 0x4
    addi r26, r26, 0x1
lbl_fn_806E8650_0000012C:
    cmpw r26, r30
    blt lbl_fn_806E8650_00000100
    mr r3, r31
    bl fn_806D7AC0
lbl_fn_806E8650_0000013C:
    li r3, 0x0
lbl_fn_806E8650_00000140:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806E87A0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r5, r1, 0x38
    stw r31, 0x8c(r1)
    lis r31, lbl_807C4190@ha
    addi r31, r31, lbl_807C4190@l
    stw r30, 0x88(r1)
    stw r29, 0x84(r1)
    mr r29, r4
    addi r4, r31, 0x1c
    stw r28, 0x80(r1)
    mr r28, r3
    mr r3, r6
    li r6, 0x40
    bl fn_806E8E10
    cmpwi r3, 0x0
    beq lbl_fn_806E87A0_00000228
    addi r3, r1, 0x38
    addi r4, r31, 0x24
    addi r5, r1, 0x8
    addi r6, r1, 0xc
    addi r7, r1, 0x10
    crclr 6
    bl fn_806820D4
    cmpwi r3, 0x3
    bne lbl_fn_806E87A0_00000228
    mr r3, r28
    mr r4, r29
    addi r30, r31, 0x0
    addi r6, r1, 0x8
    li r5, 0xc9
    bl fn_806E4E20
    cmpwi r3, 0x0
    bne lbl_fn_806E87A0_00000228
    addi r3, r1, 0x18
    addi r4, r31, 0x4
    li r5, 0x1
    li r6, 0x2
    crclr 6
    bl sprintf
    mr r3, r28
    mr r4, r29
    addi r5, r1, 0x18
    bl fn_806DE790
    cmpwi r3, 0x0
    bne lbl_fn_806E87A0_00000228
    mr r3, r28
    mr r4, r29
    mr r5, r30
    li r6, -0x1
    bl fn_806E4EA0
lbl_fn_806E87A0_00000228:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_806E8890(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, lbl_807C41C0@ha
    addi r31, r31, lbl_807C41C0@l
    stw r30, 0x28(r1)
    mr r30, r5
    li r5, 0x1
    stw r29, 0x24(r1)
    mr r29, r4
    mr r4, r30
    stw r28, 0x20(r1)
    mr r28, r3
    bl fn_806E8B60
    cmpwi r3, 0x0
    beq lbl_fn_806E8890_00000294
    li r3, 0x4
    b lbl_fn_806E8890_0000035C
lbl_fn_806E8890_00000294:
    mr r3, r30
    addi r4, r31, 0x50
    li r5, 0x4
    bl fn_80682544
    cmpwi r3, 0x0
    beq lbl_fn_806E8890_000002D4
    mr r3, r28
    addi r5, r31, 0x58
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E8890_0000035C
lbl_fn_806E8890_000002D4:
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    beq lbl_fn_806E8890_0000034C
    li r3, 0x4
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r5, r3
    bne lbl_fn_806E8890_00000314
    mr r3, r28
    addi r4, r31, 0x88
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E8890_0000035C
lbl_fn_806E8890_00000314:
    li r0, 0x0
    stw r0, 0x0(r3)
    lwz r4, 0x10(r1)
    mr r3, r28
    lwz r0, 0x14(r1)
    mr r6, r29
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    li r7, 0x0
    stw r0, 0xc(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806E8890_0000034C
    b lbl_fn_806E8890_0000035C
lbl_fn_806E8890_0000034C:
    mr r3, r28
    mr r4, r29
    bl fn_806E3A60
    li r3, 0x0
lbl_fn_806E8890_0000035C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806E89D0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, lbl_807C41C0@ha
    addi r31, r31, lbl_807C41C0@l
    stw r30, 0x28(r1)
    mr r30, r5
    li r5, 0x1
    stw r29, 0x24(r1)
    mr r29, r4
    mr r4, r30
    stw r28, 0x20(r1)
    mr r28, r3
    bl fn_806E8B60
    cmpwi r3, 0x0
    beq lbl_fn_806E89D0_000003D4
    li r3, 0x4
    b lbl_fn_806E89D0_0000049C
lbl_fn_806E89D0_000003D4:
    mr r3, r30
    addi r4, r31, 0xcc
    li r5, 0x4
    bl fn_80682544
    cmpwi r3, 0x0
    beq lbl_fn_806E89D0_00000414
    mr r3, r28
    addi r5, r31, 0x58
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E89D0_0000049C
lbl_fn_806E89D0_00000414:
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    beq lbl_fn_806E89D0_0000048C
    li r3, 0x4
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r5, r3
    bne lbl_fn_806E89D0_00000454
    mr r3, r28
    addi r4, r31, 0x88
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E89D0_0000049C
lbl_fn_806E89D0_00000454:
    li r0, 0x0
    stw r0, 0x0(r3)
    lwz r4, 0x10(r1)
    mr r3, r28
    lwz r0, 0x14(r1)
    mr r6, r29
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    li r7, 0x0
    stw r0, 0xc(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806E89D0_0000048C
    b lbl_fn_806E89D0_0000049C
lbl_fn_806E89D0_0000048C:
    mr r3, r28
    mr r4, r29
    bl fn_806E3A60
    li r3, 0x0
lbl_fn_806E89D0_0000049C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806E8B10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8068236C
    add r3, r30, r31
    li r0, 0x0
    stb r0, -0x1(r3)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806E8B60(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_24
    lis r31, lbl_807C4298@ha
    mr r29, r5
    mr r28, r4
    lwz r30, 0x0(r3)
    addi r31, r31, lbl_807C4298@l
    mr r27, r3
    mr r3, r28
    li r5, 0x7
    addi r4, r31, 0x0
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806E8B60_000006C0
    addi r25, r31, 0x8
    mr r3, r28
    lbz r0, 0x0(r25)
    mr r4, r25
    extsb r24, r0
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_806E8B60_00000588
    li r0, 0x0
    b lbl_fn_806E8B60_000005DC
lbl_fn_806E8B60_00000588:
    mr r3, r25
    bl strlen
    addi r5, r1, 0x8
    add r3, r26, r3
    li r4, 0x0
    b lbl_fn_806E8B60_000005B0
lbl_fn_806E8B60_000005A0:
    stb r0, 0x0(r5)
    addi r5, r5, 0x1
    addi r4, r4, 0x1
    addi r3, r3, 0x1
lbl_fn_806E8B60_000005B0:
    cmpwi r4, 0xf
    bge lbl_fn_806E8B60_000005CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_806E8B60_000005CC
    cmpw r0, r24
    bne lbl_fn_806E8B60_000005A0
lbl_fn_806E8B60_000005CC:
    addi r3, r1, 0x8
    li r0, 0x0
    stbx r0, r3, r4
    li r0, 0x1
lbl_fn_806E8B60_000005DC:
    cmpwi r0, 0x0
    beq lbl_fn_806E8B60_000005F0
    addi r3, r1, 0x8
    bl fn_80684600
    stw r3, 0x5b8(r30)
lbl_fn_806E8B60_000005F0:
    addi r24, r31, 0x10
    mr r3, r28
    lbz r0, 0x0(r24)
    mr r4, r24
    extsb r25, r0
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_806E8B60_0000061C
    li r0, 0x0
    b lbl_fn_806E8B60_00000670
lbl_fn_806E8B60_0000061C:
    mr r3, r24
    bl strlen
    mr r4, r30
    add r3, r26, r3
    li r5, 0x0
    b lbl_fn_806E8B60_00000648
    nop
lbl_fn_806E8B60_00000638:
    stb r0, 0x0(r4)
    addi r5, r5, 0x1
    addi r3, r3, 0x1
    addi r4, r4, 0x1
lbl_fn_806E8B60_00000648:
    cmpwi r5, 0xff
    bge lbl_fn_806E8B60_00000664
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_806E8B60_00000664
    cmpw r0, r25
    bne lbl_fn_806E8B60_00000638
lbl_fn_806E8B60_00000664:
    li r0, 0x0
    stbx r0, r30, r5
    li r0, 0x1
lbl_fn_806E8B60_00000670:
    cmpwi r0, 0x0
    bne lbl_fn_806E8B60_00000680
    li r0, 0x0
    stb r0, 0x0(r30)
lbl_fn_806E8B60_00000680:
    cmpwi r29, 0x0
    beq lbl_fn_806E8B60_000006B8
    mr r3, r28
    addi r4, r31, 0x20
    bl fn_806827C4
    neg r0, r3
    li r4, 0x4
    or r0, r0, r3
    mr r3, r27
    srwi r5, r0, 31
    neg r0, r5
    or r0, r0, r5
    srwi r5, r0, 31
    bl fn_806DED80
lbl_fn_806E8B60_000006B8:
    li r3, 0x1
    b lbl_fn_806E8B60_000006C4
lbl_fn_806E8B60_000006C0:
    li r3, 0x0
lbl_fn_806E8B60_000006C4:
    addi r11, r1, 0x40
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806E8D30(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lwz r0, 0x0(r5)
    mr r26, r4
    lbz r8, 0x0(r4)
    mr r31, r5
    add r25, r3, r0
    mr r27, r6
    mr r28, r7
    extsb r29, r8
    mr r3, r25
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_806E8D30_00000738
    li r3, 0x0
    b lbl_fn_806E8D30_000007AC
lbl_fn_806E8D30_00000738:
    mr r3, r26
    bl strlen
    add r30, r30, r3
    mr r4, r27
    mr r3, r30
    subi r5, r28, 0x1
    li r6, 0x0
    b lbl_fn_806E8D30_00000768
lbl_fn_806E8D30_00000758:
    stb r0, 0x0(r4)
    addi r6, r6, 0x1
    addi r3, r3, 0x1
    addi r4, r4, 0x1
lbl_fn_806E8D30_00000768:
    cmpw r6, r5
    bge lbl_fn_806E8D30_00000784
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_806E8D30_00000784
    cmpw r0, r29
    bne lbl_fn_806E8D30_00000758
lbl_fn_806E8D30_00000784:
    li r0, 0x0
    stbx r0, r27, r6
    mr r3, r27
    bl strlen
    subf r0, r25, r30
    lwz r4, 0x0(r31)
    add r0, r0, r3
    li r3, 0x1
    add r0, r4, r0
    stw r0, 0x0(r31)
lbl_fn_806E8D30_000007AC:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806E8E10(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lbz r0, 0x0(r4)
    mr r27, r4
    mr r28, r5
    mr r29, r6
    extsb r30, r0
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806E8E10_00000808
    li r3, 0x0
    b lbl_fn_806E8E10_00000860
lbl_fn_806E8E10_00000808:
    mr r3, r27
    bl strlen
    mr r4, r28
    subi r5, r29, 0x1
    add r3, r31, r3
    li r6, 0x0
    b lbl_fn_806E8E10_00000838
    nop
lbl_fn_806E8E10_00000828:
    stb r0, 0x0(r4)
    addi r6, r6, 0x1
    addi r3, r3, 0x1
    addi r4, r4, 0x1
lbl_fn_806E8E10_00000838:
    cmpw r6, r5
    bge lbl_fn_806E8E10_00000854
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_806E8E10_00000854
    cmpw r0, r30
    bne lbl_fn_806E8E10_00000828
lbl_fn_806E8E10_00000854:
    li r0, 0x0
    stbx r0, r28, r6
    li r3, 0x1
lbl_fn_806E8E10_00000860:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806E8EC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r6, r1, 0x8
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r5
    addi r5, r1, 0xc
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r4
    li r4, 0x0
    stw r31, 0xc(r1)
    stw r31, 0x8(r1)
    bl fn_806D7F30
    cmpwi r3, -0x1
    bne lbl_fn_806E8EC0_000008FC
    lwz r30, 0x0(r29)
    lis r4, lbl_807C42C0@ha
    addi r4, r4, lbl_807C42C0@l
    li r5, 0x100
    mr r3, r30
    bl fn_8068236C
    stb r31, 0xff(r30)
    li r0, 0x5
    mr r3, r29
    li r4, 0x3
    stw r0, 0x5b8(r30)
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E8EC0_00000948
lbl_fn_806E8EC0_000008FC:
    cmpwi r3, 0x0
    ble lbl_fn_806E8EC0_0000093C
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806E8EC0_00000920
    li r0, 0x4
    stw r0, 0x0(r30)
    li r3, 0x0
    b lbl_fn_806E8EC0_00000948
lbl_fn_806E8EC0_00000920:
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806E8EC0_0000093C
    li r0, 0x3
    stw r0, 0x0(r30)
    li r3, 0x0
    b lbl_fn_806E8EC0_00000948
lbl_fn_806E8EC0_0000093C:
    li r0, 0x0
    stw r0, 0x0(r30)
    li r3, 0x0
lbl_fn_806E8EC0_00000948:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806E8FB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r0, 0x0(r5)
    add r9, r4, r0
    lbzx r0, r4, r0
    mr r8, r9
    cmpwi r0, 0x5c
    addi r9, r9, 0x1
    beq lbl_fn_806E8FB0_000009DC
    lwz r30, 0x0(r3)
    lis r4, lbl_807C42F8@ha
    addi r4, r4, lbl_807C42F8@l
    li r5, 0x100
    mr r3, r30
    bl fn_8068236C
    li r0, 0x0
    stb r0, 0xff(r30)
    li r0, 0x1
    mr r3, r31
    stw r0, 0x5b8(r30)
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E8FB0_00000B38
lbl_fn_806E8FB0_000009DC:
    li r4, 0x0
    b lbl_fn_806E8FB0_00000A84
    nop
lbl_fn_806E8FB0_000009E8:
    cmpwi r0, 0x0
    bne lbl_fn_806E8FB0_00000A30
    lwz r30, 0x0(r3)
    lis r4, lbl_807C42F8@ha
    addi r4, r4, lbl_807C42F8@l
    li r5, 0x100
    mr r3, r30
    bl fn_8068236C
    li r0, 0x0
    stb r0, 0xff(r30)
    li r0, 0x1
    mr r3, r31
    stw r0, 0x5b8(r30)
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E8FB0_00000B38
lbl_fn_806E8FB0_00000A30:
    cmpwi r4, 0x1ff
    bne lbl_fn_806E8FB0_00000A78
    lwz r30, 0x0(r3)
    lis r4, lbl_807C42F8@ha
    addi r4, r4, lbl_807C42F8@l
    li r5, 0x100
    mr r3, r30
    bl fn_8068236C
    li r0, 0x0
    stb r0, 0xff(r30)
    li r0, 0x1
    mr r3, r31
    stw r0, 0x5b8(r30)
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E8FB0_00000B38
lbl_fn_806E8FB0_00000A78:
    stb r0, 0x0(r6)
    addi r6, r6, 0x1
    addi r4, r4, 0x1
lbl_fn_806E8FB0_00000A84:
    lbz r0, 0x0(r9)
    addi r9, r9, 0x1
    extsb r0, r0
    cmpwi r0, 0x5c
    bne lbl_fn_806E8FB0_000009E8
    li r0, 0x0
    stb r0, 0x0(r6)
    li r4, 0x0
    b lbl_fn_806E8FB0_00000AFC
lbl_fn_806E8FB0_00000AA8:
    cmpwi r4, 0x1ff
    bne lbl_fn_806E8FB0_00000AF0
    lwz r30, 0x0(r3)
    lis r4, lbl_807C42F8@ha
    addi r4, r4, lbl_807C42F8@l
    li r5, 0x100
    mr r3, r30
    bl fn_8068236C
    li r0, 0x0
    stb r0, 0xff(r30)
    li r0, 0x1
    mr r3, r31
    stw r0, 0x5b8(r30)
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E8FB0_00000B38
lbl_fn_806E8FB0_00000AF0:
    stb r0, 0x0(r7)
    addi r7, r7, 0x1
    addi r4, r4, 0x1
lbl_fn_806E8FB0_00000AFC:
    lbz r0, 0x0(r9)
    addi r9, r9, 0x1
    extsb r0, r0
    cmpwi r0, 0x5c
    beq lbl_fn_806E8FB0_00000B18
    cmpwi r0, 0x0
    bne lbl_fn_806E8FB0_00000AA8
lbl_fn_806E8FB0_00000B18:
    li r0, 0x0
    stb r0, 0x0(r7)
    subf r0, r8, r9
    li r3, 0x0
    lwz r4, 0x0(r5)
    add r4, r0, r4
    subi r0, r4, 0x1
    stw r0, 0x0(r5)
lbl_fn_806E8FB0_00000B38:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806E91A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    mr r4, r5
    li r5, 0x100
    lwz r31, 0x0(r3)
    mr r3, r31
    bl fn_8068236C
    li r0, 0x0
    stb r0, 0xff(r31)
    stw r30, 0x5b8(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806E91F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x100
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, 0x0(r3)
    mr r3, r31
    bl fn_8068236C
    li r0, 0x0
    stb r0, 0xff(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806E9230(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    bl strlen
    lis r4, 0x7970
    mr r29, r3
    addi r3, r4, 0x7367
    bl fn_806D8FC0
    addi r31, r1, 0x8
    li r30, 0x0
    b lbl_fn_806E9230_00000C4C
lbl_fn_806E9230_00000C24:
    li r3, 0x0
    li r4, 0xff
    bl fn_806D8FE0
    lbz r0, 0x0(r27)
    extsb r3, r3
    addi r30, r30, 0x1
    addi r27, r27, 0x1
    xor r0, r3, r0
    stb r0, 0x0(r31)
    addi r31, r31, 0x1
lbl_fn_806E9230_00000C4C:
    cmplw r30, r29
    blt lbl_fn_806E9230_00000C24
    addi r3, r1, 0x8
    li r0, 0x0
    stbx r0, r3, r30
    mr r4, r28
    mr r5, r29
    li r6, 0x1
    bl fn_806D9380
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806E92D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    bl fn_806D8F30
    bl fn_80680D18
    bl fn_80680CF8
    lis r4, 0x2c0b
    li r28, 0x0
    addi r31, r4, 0x2c1
    li r29, 0x1
    mulhw r0, r31, r3
    srawi r0, r0, 4
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5d
    subf r3, r0, r3
    addi r0, r3, 0x21
    stb r0, 0x0(r27)
lbl_fn_806E92D0_00000CDC:
    add r30, r27, r29
    lbz r5, 0x0(r27)
    lbz r6, -0x1(r30)
    clrlwi r4, r5, 31
    subi r0, r5, 0x4f
    xor r3, r29, r6
    subf r5, r5, r6
    xor r4, r4, r28
    srwi r0, r0, 31
    clrlwi r3, r3, 31
    srwi r5, r5, 31
    xor r3, r4, r3
    xor r0, r3, r0
    xor r28, r0, r5
    bl fn_80680CF8
    mulhw r0, r31, r3
    cmpwi r28, 0x0
    srawi r0, r0, 4
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5d
    subf r3, r0, r3
    addi r0, r3, 0x21
    stb r0, 0x0(r30)
    beq lbl_fn_806E92D0_00000D4C
    lbz r0, 0x0(r30)
    clrlwi. r0, r0, 31
    beq lbl_fn_806E92D0_00000D64
lbl_fn_806E92D0_00000D4C:
    cmpwi r28, 0x0
    bne lbl_fn_806E92D0_00000D70
    lbz r0, 0x0(r30)
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_fn_806E92D0_00000D70
lbl_fn_806E92D0_00000D64:
    lbz r3, 0x0(r30)
    addi r0, r3, 0x1
    stb r0, 0x0(r30)
lbl_fn_806E92D0_00000D70:
    addi r29, r29, 0x1
    cmpwi r29, 0x20
    blt lbl_fn_806E92D0_00000CDC
    addi r11, r1, 0x20
    mr r3, r27
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806E93E0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lis r5, lbl_807C4308@ha
    mr r25, r3
    mr r26, r4
    addi r3, r5, lbl_807C4308@l
    bl strlen
    li r0, 0x1f
    mr r30, r3
    li r7, 0x0
    li r6, 0x1
    mtctr r0
lbl_fn_806E93E0_00000DD4:
    add r8, r26, r6
    lbz r5, 0x0(r26)
    lbz r9, -0x1(r8)
    clrlwi r4, r5, 31
    subi r0, r5, 0x4f
    xor r3, r6, r9
    subf r5, r5, r9
    xor r4, r4, r7
    srwi r0, r0, 31
    clrlwi r3, r3, 31
    srwi r5, r5, 31
    xor r3, r4, r3
    xor r0, r3, r0
    xor. r7, r0, r5
    beq lbl_fn_806E93E0_00000E1C
    lbz r0, 0x0(r8)
    clrlwi. r0, r0, 31
    beq lbl_fn_806E93E0_00000E34
lbl_fn_806E93E0_00000E1C:
    cmpwi r7, 0x0
    bne lbl_fn_806E93E0_00000E3C
    lbz r0, 0x0(r8)
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_fn_806E93E0_00000E3C
lbl_fn_806E93E0_00000E34:
    li r29, 0x0
    b lbl_fn_806E93E0_00000E48
lbl_fn_806E93E0_00000E3C:
    addi r6, r6, 0x1
    bdnz lbl_fn_806E93E0_00000DD4
    li r29, 0x1
lbl_fn_806E93E0_00000E48:
    lis r31, lbl_807C4308@ha
    mr r24, r25
    addi r31, r31, lbl_807C4308@l
    li r27, 0x0
    li r28, 0x0
    lis r23, 0x2c0b
lbl_fn_806E93E0_00000E60:
    cmpwi r29, 0x0
    beq lbl_fn_806E93E0_00000E78
    cmpwi r27, 0x0
    beq lbl_fn_806E93E0_00000E78
    cmpwi r27, 0xd
    bne lbl_fn_806E93E0_00000EA4
lbl_fn_806E93E0_00000E78:
    bl fn_80680CF8
    addi r0, r23, 0x2c1
    mulhw r0, r0, r3
    srawi r0, r0, 4
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5d
    subf r3, r0, r3
    addi r0, r3, 0x21
    stb r0, 0x0(r24)
    b lbl_fn_806E93E0_00000F58
lbl_fn_806E93E0_00000EA4:
    cmpwi r27, 0x1
    beq lbl_fn_806E93E0_00000EB4
    cmpwi r27, 0xe
    bne lbl_fn_806E93E0_00000EC4
lbl_fn_806E93E0_00000EB4:
    lbzx r0, r26, r27
    add r3, r26, r27
    extsb r0, r0
    b lbl_fn_806E93E0_00000ED0
lbl_fn_806E93E0_00000EC4:
    add r3, r26, r27
    lbz r0, -0x1(r3)
    extsb r0, r0
lbl_fn_806E93E0_00000ED0:
    lbz r7, 0x0(r3)
    mullw r4, r0, r28
    addi r0, r23, 0x2c1
    add r6, r27, r7
    divw r5, r6, r30
    divw r3, r4, r30
    mullw r5, r5, r30
    subf r5, r5, r6
    lbzx r5, r31, r5
    mullw r3, r3, r30
    extsb r6, r5
    mullw r5, r27, r7
    subf r3, r3, r4
    lbzx r3, r31, r3
    extsb r3, r3
    add r5, r6, r5
    slwi r4, r5, 27
    srwi r5, r5, 31
    subf r4, r5, r4
    rotlwi r4, r4, 5
    add r4, r4, r5
    lbzx r4, r26, r4
    xor r4, r4, r3
    srawi r3, r4, 31
    xor r4, r3, r4
    subf r4, r3, r4
    mulhw r0, r0, r4
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5d
    subf r3, r0, r4
    addi r0, r3, 0x21
    stb r0, 0x0(r24)
lbl_fn_806E93E0_00000F58:
    addi r27, r27, 0x1
    addi r24, r24, 0x1
    cmpwi r27, 0x20
    addi r28, r28, 0x4647
    blt lbl_fn_806E93E0_00000E60
    addi r11, r1, 0x30
    mr r3, r25
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806E95D0(void)
{
    nofralloc
    li r0, 0x8
    li r6, 0x0
    mtctr r0
    nop
lbl_fn_806E95D0_00000F98:
    cmpwi r6, 0x0
    beq lbl_fn_806E95D0_00000FC0
    cmpwi r6, 0xd
    beq lbl_fn_806E95D0_00000FC0
    lbz r5, 0x0(r3)
    lbz r0, 0x0(r4)
    cmplw r5, r0
    beq lbl_fn_806E95D0_00000FC0
    li r3, 0x0
    blr
lbl_fn_806E95D0_00000FC0:
    addic. r6, r6, 0x1
    beq lbl_fn_806E95D0_00000FE8
    cmpwi r6, 0xd
    beq lbl_fn_806E95D0_00000FE8
    lbz r5, 0x1(r3)
    lbz r0, 0x1(r4)
    cmplw r5, r0
    beq lbl_fn_806E95D0_00000FE8
    li r3, 0x0
    blr
lbl_fn_806E95D0_00000FE8:
    addic. r6, r6, 0x1
    beq lbl_fn_806E95D0_00001010
    cmpwi r6, 0xd
    beq lbl_fn_806E95D0_00001010
    lbz r5, 0x2(r3)
    lbz r0, 0x2(r4)
    cmplw r5, r0
    beq lbl_fn_806E95D0_00001010
    li r3, 0x0
    blr
lbl_fn_806E95D0_00001010:
    addic. r6, r6, 0x1
    beq lbl_fn_806E95D0_00001038
    cmpwi r6, 0xd
    beq lbl_fn_806E95D0_00001038
    lbz r5, 0x3(r3)
    lbz r0, 0x3(r4)
    cmplw r5, r0
    beq lbl_fn_806E95D0_00001038
    li r3, 0x0
    blr
lbl_fn_806E95D0_00001038:
    addi r6, r6, 0x1
    addi r4, r4, 0x4
    addi r3, r3, 0x4
    bdnz lbl_fn_806E95D0_00000F98
    li r3, 0x1
    blr
}

asm void fn_806E96A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r31
    bl fn_806D7A90
    cmpwi r3, 0x0
    stw r3, 0x0(r30)
    bne lbl_fn_806E96A0_00001090
    li r3, 0x0
    b lbl_fn_806E96A0_00001098
lbl_fn_806E96A0_00001090:
    stw r31, 0x4(r30)
    li r3, 0x1
lbl_fn_806E96A0_00001098:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806E9700(void)
{
    nofralloc
    lwz r4, 0x8(r3)
    lwz r0, 0x4(r3)
    subf r3, r4, r0
    blr
}

asm void fn_806E9710(void)
{
    nofralloc
    lwz r5, 0x8(r3)
    lwz r6, 0x0(r3)
    addi r0, r5, 0x1
    stbx r4, r6, r5
    stw r0, 0x8(r3)
    blr
}

asm void fn_806E9730(void)
{
    nofralloc
    lwz r5, 0x8(r3)
    extrwi r0, r4, 8, 16
    lwz r7, 0x0(r3)
    addi r6, r5, 0x1
    stbx r0, r7, r5
    addi r0, r6, 0x1
    stw r6, 0x8(r3)
    lwz r5, 0x0(r3)
    stbx r4, r5, r6
    stw r0, 0x8(r3)
    blr
}

asm void fn_806E9760(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_806E9760_00001188
    cmpwi r5, 0x0
    bne lbl_fn_806E9760_00001150
    b lbl_fn_806E9760_00001188
lbl_fn_806E9760_00001150:
    cmpwi r5, -0x1
    bne lbl_fn_806E9760_00001164
    mr r3, r30
    bl strlen
    mr r31, r3
lbl_fn_806E9760_00001164:
    lwz r3, 0x0(r29)
    mr r4, r30
    lwz r0, 0x8(r29)
    mr r5, r31
    add r3, r3, r0
    bl memcpy
    lwz r0, 0x8(r29)
    add r0, r0, r31
    stw r0, 0x8(r29)
lbl_fn_806E9760_00001188:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806E97F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, -0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_806E97F0_000011D4
    lwz r0, 0x8(r3)
    subf r4, r5, r0
lbl_fn_806E97F0_000011D4:
    lwz r3, 0x0(r3)
    lwz r0, 0x8(r30)
    add r3, r3, r4
    subf r0, r4, r0
    add r4, r3, r5
    subf r5, r5, r0
    bl memmove
    lwz r0, 0x8(r30)
    subf r0, r31, r0
    stw r0, 0x8(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806E9860(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bne lbl_fn_806E9860_0000123C
    li r3, 0x1
    b lbl_fn_806E9860_00001298
lbl_fn_806E9860_0000123C:
    lwz r12, 0x24(r3)
    cmpwi r12, 0x0
    bne lbl_fn_806E9860_00001250
    li r3, 0x1
    b lbl_fn_806E9860_00001298
lbl_fn_806E9860_00001250:
    lwz r4, 0x1c(r3)
    addi r0, r4, 0x1
    stw r0, 0x1c(r3)
    mtctr r12
    bctrl
    lwz r0, 0x14(r31)
    lwz r3, 0x1c(r31)
    cmpwi r0, 0x0
    subi r0, r3, 0x1
    stw r0, 0x1c(r31)
    beq lbl_fn_806E9860_00001294
    cmpwi r0, 0x0
    bne lbl_fn_806E9860_00001294
    mr r3, r31
    bl fn_806EE4E0
    li r3, 0x0
    b lbl_fn_806E9860_00001298
lbl_fn_806E9860_00001294:
    li r3, 0x1
lbl_fn_806E9860_00001298:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806E9900(void)
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
    beq lbl_fn_806E9900_000012E4
    cmpwi r4, 0x0
    bne lbl_fn_806E9900_000012EC
lbl_fn_806E9900_000012E4:
    li r3, 0x1
    b lbl_fn_806E9900_00001388
lbl_fn_806E9900_000012EC:
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806E9900_00001300
    li r3, 0x1
    b lbl_fn_806E9900_00001388
lbl_fn_806E9900_00001300:
    cmpwi r9, 0x0
    beq lbl_fn_806E9900_00001310
    cmpwi r8, 0x0
    bne lbl_fn_806E9900_00001318
lbl_fn_806E9900_00001310:
    li r8, 0x0
    li r9, 0x0
lbl_fn_806E9900_00001318:
    lwz r10, 0x1c(r3)
    addi r0, r10, 0x1
    stw r0, 0x1c(r3)
    mr r3, r30
    lwz r10, 0x24(r4)
    addi r0, r10, 0x1
    stw r0, 0x24(r4)
    mr r4, r31
    lwz r12, 0x20(r30)
    mtctr r12
    bctrl
    lwz r3, 0x1c(r30)
    subi r0, r3, 0x1
    stw r0, 0x1c(r30)
    lwz r3, 0x24(r31)
    subi r0, r3, 0x1
    stw r0, 0x24(r31)
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806E9900_00001384
    lwz r0, 0x1c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806E9900_00001384
    mr r3, r30
    bl fn_806EE4E0
    li r3, 0x0
    b lbl_fn_806E9900_00001388
lbl_fn_806E9900_00001384:
    li r3, 0x1
lbl_fn_806E9900_00001388:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806E99F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bne lbl_fn_806E99F0_000013CC
    li r3, 0x1
    b lbl_fn_806E99F0_00001470
lbl_fn_806E99F0_000013CC:
    lwz r0, 0x28(r3)
    stw r4, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806E99F0_000013E4
    li r3, 0x1
    b lbl_fn_806E99F0_00001470
lbl_fn_806E99F0_000013E4:
    cmpwi r6, 0x0
    beq lbl_fn_806E99F0_000013F4
    cmpwi r5, 0x0
    bne lbl_fn_806E99F0_000013FC
lbl_fn_806E99F0_000013F4:
    li r5, 0x0
    li r6, 0x0
lbl_fn_806E99F0_000013FC:
    lwz r7, 0x24(r3)
    lwz r8, 0x8(r3)
    addi r0, r7, 0x1
    stw r0, 0x24(r3)
    mr r3, r31
    lwz r7, 0x1c(r8)
    addi r0, r7, 0x1
    stw r0, 0x1c(r8)
    lwz r12, 0x28(r31)
    mtctr r12
    bctrl
    lwz r3, 0x24(r31)
    lwz r4, 0x8(r31)
    subi r0, r3, 0x1
    stw r0, 0x24(r31)
    lwz r3, 0x1c(r4)
    subi r0, r3, 0x1
    stw r0, 0x1c(r4)
    lwz r3, 0x8(r31)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806E99F0_0000146C
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806E99F0_0000146C
    bl fn_806EE4E0
    li r3, 0x0
    b lbl_fn_806E99F0_00001470
lbl_fn_806E99F0_0000146C:
    li r3, 0x1
lbl_fn_806E99F0_00001470:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806E9AD0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bne lbl_fn_806E9AD0_000014AC
    li r3, 0x1
    b lbl_fn_806E9AD0_0000154C
lbl_fn_806E9AD0_000014AC:
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806E9AD0_000014C0
    li r3, 0x1
    b lbl_fn_806E9AD0_0000154C
lbl_fn_806E9AD0_000014C0:
    cmpwi r5, 0x0
    beq lbl_fn_806E9AD0_000014D0
    cmpwi r4, 0x0
    bne lbl_fn_806E9AD0_000014D8
lbl_fn_806E9AD0_000014D0:
    li r4, 0x0
    li r5, 0x0
lbl_fn_806E9AD0_000014D8:
    lwz r7, 0x24(r3)
    lwz r8, 0x8(r3)
    addi r0, r7, 0x1
    stw r0, 0x24(r3)
    mr r3, r31
    lwz r7, 0x1c(r8)
    addi r0, r7, 0x1
    stw r0, 0x1c(r8)
    lwz r12, 0x2c(r31)
    mtctr r12
    bctrl
    lwz r3, 0x24(r31)
    lwz r4, 0x8(r31)
    subi r0, r3, 0x1
    stw r0, 0x24(r31)
    lwz r3, 0x1c(r4)
    subi r0, r3, 0x1
    stw r0, 0x1c(r4)
    lwz r3, 0x8(r31)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806E9AD0_00001548
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806E9AD0_00001548
    bl fn_806EE4E0
    li r3, 0x0
    b lbl_fn_806E9AD0_0000154C
lbl_fn_806E9AD0_00001548:
    li r3, 0x1
lbl_fn_806E9AD0_0000154C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806E9BB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bne lbl_fn_806E9BB0_0000158C
    li r3, 0x1
    b lbl_fn_806E9BB0_00001610
lbl_fn_806E9BB0_0000158C:
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806E9BB0_000015A0
    li r3, 0x1
    b lbl_fn_806E9BB0_00001610
lbl_fn_806E9BB0_000015A0:
    lwz r5, 0x24(r3)
    lwz r6, 0x8(r3)
    addi r0, r5, 0x1
    stw r0, 0x24(r3)
    lwz r5, 0x1c(r6)
    addi r0, r5, 0x1
    stw r0, 0x1c(r6)
    lwz r12, 0x30(r3)
    mtctr r12
    bctrl
    lwz r3, 0x24(r31)
    lwz r4, 0x8(r31)
    subi r0, r3, 0x1
    stw r0, 0x24(r31)
    lwz r3, 0x1c(r4)
    subi r0, r3, 0x1
    stw r0, 0x1c(r4)
    lwz r3, 0x8(r31)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806E9BB0_0000160C
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806E9BB0_0000160C
    bl fn_806EE4E0
    li r3, 0x0
    b lbl_fn_806E9BB0_00001610
lbl_fn_806E9BB0_0000160C:
    li r3, 0x1
lbl_fn_806E9BB0_00001610:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806E9C70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bne lbl_fn_806E9C70_0000164C
    li r3, 0x1
    b lbl_fn_806E9C70_000016D0
lbl_fn_806E9C70_0000164C:
    lwz r0, 0x34(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806E9C70_00001660
    li r3, 0x1
    b lbl_fn_806E9C70_000016D0
lbl_fn_806E9C70_00001660:
    lwz r5, 0x24(r3)
    lwz r6, 0x8(r3)
    addi r0, r5, 0x1
    stw r0, 0x24(r3)
    lwz r5, 0x1c(r6)
    addi r0, r5, 0x1
    stw r0, 0x1c(r6)
    lwz r12, 0x34(r3)
    mtctr r12
    bctrl
    lwz r3, 0x24(r31)
    lwz r4, 0x8(r31)
    subi r0, r3, 0x1
    stw r0, 0x24(r31)
    lwz r3, 0x1c(r4)
    subi r0, r3, 0x1
    stw r0, 0x1c(r4)
    lwz r3, 0x8(r31)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806E9C70_000016CC
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806E9C70_000016CC
    bl fn_806EE4E0
    li r3, 0x0
    b lbl_fn_806E9C70_000016D0
lbl_fn_806E9C70_000016CC:
    li r3, 0x1
lbl_fn_806E9C70_000016D0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806E9D30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x0
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bne lbl_fn_806E9D30_00001720
    li r3, 0x1
    b lbl_fn_806E9D30_000017D8
lbl_fn_806E9D30_00001720:
    lwz r3, 0x98(r3)
    bl fn_806D5900
    cmpwi r3, 0x0
    mr r10, r3
    bne lbl_fn_806E9D30_0000173C
    li r3, 0x1
    b lbl_fn_806E9D30_000017D8
lbl_fn_806E9D30_0000173C:
    cmpwi r30, 0x0
    beq lbl_fn_806E9D30_0000174C
    cmpwi r29, 0x0
    bne lbl_fn_806E9D30_00001754
lbl_fn_806E9D30_0000174C:
    li r29, 0x0
    li r30, 0x0
lbl_fn_806E9D30_00001754:
    lwz r5, 0x24(r27)
    mr r3, r27
    lwz r9, 0x8(r27)
    mr r4, r28
    addi r0, r5, 0x1
    stw r0, 0x24(r27)
    mr r5, r29
    mr r6, r30
    lwz r8, 0x1c(r9)
    mr r7, r31
    addi r0, r8, 0x1
    stw r0, 0x1c(r9)
    lwz r12, 0x0(r10)
    mtctr r12
    bctrl
    lwz r3, 0x24(r27)
    lwz r4, 0x8(r27)
    subi r0, r3, 0x1
    stw r0, 0x24(r27)
    lwz r3, 0x1c(r4)
    subi r0, r3, 0x1
    stw r0, 0x1c(r4)
    lwz r3, 0x8(r27)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806E9D30_000017D4
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806E9D30_000017D4
    bl fn_806EE4E0
    li r3, 0x0
    b lbl_fn_806E9D30_000017D8
lbl_fn_806E9D30_000017D4:
    li r3, 0x1
lbl_fn_806E9D30_000017D8:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806E9E40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x0
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bne lbl_fn_806E9E40_00001830
    li r3, 0x1
    b lbl_fn_806E9E40_000018E8
lbl_fn_806E9E40_00001830:
    lwz r3, 0x9c(r3)
    bl fn_806D5900
    cmpwi r3, 0x0
    mr r10, r3
    bne lbl_fn_806E9E40_0000184C
    li r3, 0x1
    b lbl_fn_806E9E40_000018E8
lbl_fn_806E9E40_0000184C:
    cmpwi r30, 0x0
    beq lbl_fn_806E9E40_0000185C
    cmpwi r29, 0x0
    bne lbl_fn_806E9E40_00001864
lbl_fn_806E9E40_0000185C:
    li r29, 0x0
    li r30, 0x0
lbl_fn_806E9E40_00001864:
    lwz r5, 0x24(r27)
    mr r3, r27
    lwz r9, 0x8(r27)
    mr r4, r28
    addi r0, r5, 0x1
    stw r0, 0x24(r27)
    mr r5, r29
    mr r6, r30
    lwz r8, 0x1c(r9)
    mr r7, r31
    addi r0, r8, 0x1
    stw r0, 0x1c(r9)
    lwz r12, 0x0(r10)
    mtctr r12
    bctrl
    lwz r3, 0x24(r27)
    lwz r4, 0x8(r27)
    subi r0, r3, 0x1
    stw r0, 0x24(r27)
    lwz r3, 0x1c(r4)
    subi r0, r3, 0x1
    stw r0, 0x1c(r4)
    lwz r3, 0x8(r27)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806E9E40_000018E4
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806E9E40_000018E4
    bl fn_806EE4E0
    li r3, 0x0
    b lbl_fn_806E9E40_000018E8
lbl_fn_806E9E40_000018E4:
    li r3, 0x1
lbl_fn_806E9E40_000018E8:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806E9F50(void)
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
    bne lbl_fn_806E9F50_00001934
    li r3, 0x1
    b lbl_fn_806E9F50_000019EC
lbl_fn_806E9F50_00001934:
    cmpwi r10, 0x0
    beq lbl_fn_806E9F50_00001944
    lwz r12, 0x28(r3)
    b lbl_fn_806E9F50_00001948
lbl_fn_806E9F50_00001944:
    lwz r12, 0x2c(r3)
lbl_fn_806E9F50_00001948:
    cmpwi r12, 0x0
    bne lbl_fn_806E9F50_00001958
    li r3, 0x1
    b lbl_fn_806E9F50_000019EC
lbl_fn_806E9F50_00001958:
    cmpwi r9, 0x0
    beq lbl_fn_806E9F50_00001968
    cmpwi r8, 0x0
    bne lbl_fn_806E9F50_00001970
lbl_fn_806E9F50_00001968:
    li r8, 0x0
    li r9, 0x0
lbl_fn_806E9F50_00001970:
    lwz r10, 0x1c(r3)
    cmpwi r4, 0x0
    addi r0, r10, 0x1
    stw r0, 0x1c(r3)
    beq lbl_fn_806E9F50_00001990
    lwz r3, 0x24(r4)
    addi r0, r3, 0x1
    stw r0, 0x24(r4)
lbl_fn_806E9F50_00001990:
    mr r3, r30
    mr r4, r31
    mtctr r12
    bctrl
    lwz r3, 0x1c(r30)
    cmpwi r31, 0x0
    subi r0, r3, 0x1
    stw r0, 0x1c(r30)
    beq lbl_fn_806E9F50_000019C0
    lwz r3, 0x24(r31)
    subi r0, r3, 0x1
    stw r0, 0x24(r31)
lbl_fn_806E9F50_000019C0:
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806E9F50_000019E8
    lwz r0, 0x1c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806E9F50_000019E8
    mr r3, r30
    bl fn_806EE4E0
    li r3, 0x0
    b lbl_fn_806E9F50_000019EC
lbl_fn_806E9F50_000019E8:
    li r3, 0x1
lbl_fn_806E9F50_000019EC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806EA050(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r8
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0x0(r8)
    bne lbl_fn_806EA050_00001A3C
    li r3, 0x1
    b lbl_fn_806EA050_00001ABC
lbl_fn_806EA050_00001A3C:
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806EA050_00001A50
    li r3, 0x1
    b lbl_fn_806EA050_00001ABC
lbl_fn_806EA050_00001A50:
    cmpwi r7, 0x0
    beq lbl_fn_806EA050_00001A60
    cmpwi r6, 0x0
    bne lbl_fn_806EA050_00001A68
lbl_fn_806EA050_00001A60:
    li r6, 0x0
    li r7, 0x0
lbl_fn_806EA050_00001A68:
    lwz r8, 0x1c(r3)
    lwz r12, 0x30(r30)
    addi r0, r8, 0x1
    stw r0, 0x1c(r3)
    mr r3, r30
    mtctr r12
    bctrl
    stw r3, 0x0(r31)
    lwz r0, 0x14(r30)
    lwz r3, 0x1c(r30)
    cmpwi r0, 0x0
    subi r0, r3, 0x1
    stw r0, 0x1c(r30)
    beq lbl_fn_806EA050_00001AB8
    cmpwi r0, 0x0
    bne lbl_fn_806EA050_00001AB8
    mr r3, r30
    bl fn_806EE4E0
    li r3, 0x0
    b lbl_fn_806EA050_00001ABC
lbl_fn_806EA050_00001AB8:
    li r3, 0x1
lbl_fn_806EA050_00001ABC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806EA120(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bl fn_806EE560
    cmpwi r3, 0x0
    beq lbl_fn_806EA120_00001AFC
    b lbl_fn_806EA120_00001B18
lbl_fn_806EA120_00001AFC:
    lwz r4, 0x0(r31)
    li r5, 0x0
    li r0, 0x1
    li r3, 0x0
    stw r5, 0xc(r4)
    lwz r4, 0x0(r31)
    stw r0, 0x10(r4)
lbl_fn_806EA120_00001B18:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806EA180(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bl fn_806EE560
    cmpwi r3, 0x0
    beq lbl_fn_806EA180_00001B5C
    b lbl_fn_806EA180_00001B78
lbl_fn_806EA180_00001B5C:
    lwz r4, 0x0(r31)
    li r5, 0x2
    li r0, 0x0
    li r3, 0x0
    stw r5, 0xc(r4)
    lwz r4, 0x0(r31)
    stw r0, 0x10(r4)
lbl_fn_806EA180_00001B78:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806EA1E0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r6
    stw r30, 0x38(r1)
    mr r30, r3
    addi r3, r1, 0x8
    stw r4, 0x8(r1)
    addi r4, r1, 0xc
    stw r5, 0xc(r1)
    bl fn_806EF050
    lwz r3, 0xc(r1)
    cmpwi r3, 0x0
    ble lbl_fn_806EA1E0_00001C00
    bl fn_806D7A90
    cmpwi r3, 0x0
    stw r3, 0x38(r30)
    bne lbl_fn_806EA1E0_00001BEC
    li r3, 0x1
    b lbl_fn_806EA1E0_00001C54
lbl_fn_806EA1E0_00001BEC:
    lwz r4, 0x8(r1)
    lwz r5, 0xc(r1)
    bl memcpy
    lwz r0, 0xc(r1)
    stw r0, 0x3c(r30)
lbl_fn_806EA1E0_00001C00:
    cmpwi r31, 0x0
    beq lbl_fn_806EA1E0_00001C28
    lwz r3, 0x0(r31)
    lwz r0, 0x4(r31)
    stw r0, 0x2c(r30)
    stw r3, 0x28(r30)
    lwz r3, 0x8(r31)
    lwz r0, 0xc(r31)
    stw r0, 0x34(r30)
    stw r3, 0x30(r30)
lbl_fn_806EA1E0_00001C28:
    addi r3, r1, 0x10
    bl fn_806E92D0
    addi r3, r30, 0x68
    addi r4, r1, 0x10
    bl fn_806E93E0
    mr r3, r30
    addi r4, r1, 0x10
    bl fn_806ED710
    li r0, 0x0
    stw r0, 0xc(r30)
    li r3, 0x0
lbl_fn_806EA1E0_00001C54:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806EA2C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806EA2C0_00001CB0
    li r0, 0x0
    stw r0, 0x14(r3)
    li r3, 0x0
    b lbl_fn_806EA2C0_00001D04
lbl_fn_806EA2C0_00001CB0:
    lwz r0, 0xc(r3)
    li r4, 0x0
    stw r4, 0x14(r3)
    cmpwi r0, 0x4
    beq lbl_fn_806EA2C0_00001CCC
    li r3, 0x0
    b lbl_fn_806EA2C0_00001D04
lbl_fn_806EA2C0_00001CCC:
    bl fn_806ED800
    cmpwi r31, 0x0
    li r0, 0x5
    stw r0, 0xc(r30)
    beq lbl_fn_806EA2C0_00001D00
    lwz r3, 0x0(r31)
    lwz r0, 0x4(r31)
    stw r0, 0x2c(r30)
    stw r3, 0x28(r30)
    lwz r3, 0x8(r31)
    lwz r0, 0xc(r31)
    stw r0, 0x34(r30)
    stw r3, 0x30(r30)
lbl_fn_806EA2C0_00001D00:
    li r3, 0x1
lbl_fn_806EA2C0_00001D04:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806EA370(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r4, 0x8(r1)
    li r4, 0x0
    stw r5, 0xc(r1)
    lwz r0, 0xc(r3)
    stw r4, 0x14(r3)
    cmpwi r0, 0x4
    bne lbl_fn_806EA370_00001D7C
    addi r3, r1, 0x8
    addi r4, r1, 0xc
    bl fn_806EF050
    lwz r4, 0x8(r1)
    mr r3, r31
    lwz r5, 0xc(r1)
    bl fn_806ED8D0
    li r0, 0x6
    stw r0, 0xc(r31)
lbl_fn_806EA370_00001D7C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806EA3E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r6, r4
    mr r7, r5
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0x8(r3)
    lwz r4, 0x0(r31)
    lhz r5, 0x4(r31)
    bl fn_806EE8B0
    cmpwi r3, 0x0
    bne lbl_fn_806EA3E0_00001DD4
    li r3, 0x0
    b lbl_fn_806EA3E0_00001DE0
lbl_fn_806EA3E0_00001DD4:
    bl fn_806D8F30
    stw r3, 0x88(r31)
    li r3, 0x1
lbl_fn_806EA3E0_00001DE0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806EA440(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r5, 0xc(r3)
    cmpwi r5, 0x5
    bge lbl_fn_806EA440_00001EDC
    lwz r0, 0x10(r3)
    li r6, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_806EA440_00001E4C
    lwz r5, 0x20(r3)
    cmpwi r5, 0x0
    beq lbl_fn_806EA440_00001E68
    lwz r0, 0x1c(r3)
    subf r0, r0, r4
    cmplw r0, r5
    ble lbl_fn_806EA440_00001E68
    li r6, 0x1
    b lbl_fn_806EA440_00001E68
lbl_fn_806EA440_00001E4C:
    cmpwi r5, 0x4
    bge lbl_fn_806EA440_00001E68
    lwz r0, 0x1c(r3)
    subf r0, r0, r4
    cmplwi r0, 0xea60
    ble lbl_fn_806EA440_00001E68
    li r6, 0x1
lbl_fn_806EA440_00001E68:
    cmpwi r6, 0x0
    beq lbl_fn_806EA440_00001EDC
    mr r3, r31
    bl fn_806EDF70
    stw r31, 0x8(r1)
    lwz r0, 0xc(r31)
    cmpwi r0, 0x7
    beq lbl_fn_806EA440_00001EB8
    li r0, 0x7
    stw r0, 0xc(r31)
    addi r4, r1, 0x8
    lwz r3, 0x8(r1)
    lwz r3, 0x8(r3)
    lwz r3, 0xc(r3)
    bl fn_806D6560
    lwz r3, 0x8(r1)
    addi r4, r1, 0x8
    lwz r3, 0x8(r3)
    lwz r3, 0x10(r3)
    bl fn_806D5930
lbl_fn_806EA440_00001EB8:
    mr r3, r31
    li r4, 0x6
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    cmpwi r3, 0x0
    bne lbl_fn_806EA440_00001EDC
    li r3, 0x0
    b lbl_fn_806EA440_00001EE0
lbl_fn_806EA440_00001EDC:
    li r3, 0x1
lbl_fn_806EA440_00001EE0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806EA540(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_806EA440
    cmpwi r3, 0x0
    bne lbl_fn_806EA540_00001F30
    li r3, 0x0
    b lbl_fn_806EA540_00002024
lbl_fn_806EA540_00001F30:
    lwz r0, 0x88(r28)
    subf r0, r0, r29
    cmplwi r0, 0x7530
    ble lbl_fn_806EA540_00001F58
    mr r3, r28
    bl fn_806EDAA0
    cmpwi r3, 0x0
    bne lbl_fn_806EA540_00001F58
    li r0, 0x0
    b lbl_fn_806EA540_00001F5C
lbl_fn_806EA540_00001F58:
    li r0, 0x1
lbl_fn_806EA540_00001F5C:
    cmpwi r0, 0x0
    bne lbl_fn_806EA540_00001F6C
    li r3, 0x0
    b lbl_fn_806EA540_00002024
lbl_fn_806EA540_00001F6C:
    lwz r3, 0x60(r28)
    bl fn_806D58F0
    mr r31, r3
    li r30, 0x0
    b lbl_fn_806EA540_00001FBC
lbl_fn_806EA540_00001F80:
    lwz r3, 0x60(r28)
    mr r4, r30
    bl fn_806D5900
    lwz r0, 0xc(r3)
    mr r4, r3
    subf r0, r0, r29
    cmplwi r0, 0x3e8
    ble lbl_fn_806EA540_00001FB8
    mr r3, r28
    bl fn_806EE030
    cmpwi r3, 0x0
    bne lbl_fn_806EA540_00001FB8
    li r0, 0x0
    b lbl_fn_806EA540_00001FC8
lbl_fn_806EA540_00001FB8:
    addi r30, r30, 0x1
lbl_fn_806EA540_00001FBC:
    cmpw r30, r31
    blt lbl_fn_806EA540_00001F80
    li r0, 0x1
lbl_fn_806EA540_00001FC8:
    cmpwi r0, 0x0
    bne lbl_fn_806EA540_00001FD8
    li r3, 0x0
    b lbl_fn_806EA540_00002024
lbl_fn_806EA540_00001FD8:
    lwz r0, 0x90(r28)
    cmpwi r0, 0x0
    bne lbl_fn_806EA540_00001FEC
    li r3, 0x1
    b lbl_fn_806EA540_00002018
lbl_fn_806EA540_00001FEC:
    lwz r0, 0x94(r28)
    subf r0, r0, r29
    cmplwi r0, 0x64
    ble lbl_fn_806EA540_00002014
    mr r3, r28
    bl fn_806EDCB0
    cmpwi r3, 0x0
    bne lbl_fn_806EA540_00002014
    li r3, 0x0
    b lbl_fn_806EA540_00002018
lbl_fn_806EA540_00002014:
    li r3, 0x1
lbl_fn_806EA540_00002018:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_806EA540_00002024:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
