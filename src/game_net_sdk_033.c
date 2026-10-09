#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_21(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_806827C4(void);
extern void fn_80684600(void);
extern void fn_806A420C(void);
extern void fn_806A4270(void);
extern void fn_806D57A0(void);
extern void fn_806D5850(void);
extern void fn_806D58F0(void);
extern void fn_806D5900(void);
extern void fn_806D5930(void);
extern void fn_806D5C90(void);
extern void fn_806D6250(void);
extern void fn_806D64B0(void);
extern void fn_806D6560(void);
extern void fn_806D6610(void);
extern void fn_806D6720(void);
extern void fn_806D7A90(void);
extern void fn_806D7AA0(void);
extern void fn_806D7AC0(void);
extern void fn_806D7AE0(void);
extern void fn_806D7C40(void);
extern void fn_806D7F20(void);
extern void fn_806D8060(void);
extern void fn_806D8560(void);
extern void fn_806D8B20(void);
extern void fn_806D8E30(void);
extern void fn_806D8F30(void);
extern void fn_806DA070(void);
extern void fn_806DA120(void);
extern void fn_806DA480(void);
extern void fn_806DD6D0(void);
extern void fn_806DD7C0(void);
extern void fn_806DD980(void);
extern void fn_806DDA30(void);
extern void fn_806DE290(void);
extern void fn_806DE2F0(void);
extern void fn_806DE3A0(void);
extern void fn_806DE480(void);
extern void fn_806DE4E0(void);
extern void fn_806DE660(void);
extern void fn_806DE670(void);
extern void fn_806DE790(void);
extern void fn_806DEA40(void);
extern void fn_806DEBA0(void);
extern void fn_806DED00(void);
extern void fn_806DED80(void);
extern void fn_806DEE40(void);
extern void fn_806E2B10(void);
extern void fn_806E2E10(void);
extern void fn_806E3980(void);
extern void fn_806E3A60(void);
extern void fn_806E3CC0(void);
extern void fn_806E4010(void);
extern void fn_806E87A0(void);
extern void fn_806E8B60(void);
extern void fn_806E8D30(void);
extern void fn_806E8E10(void);
extern void fn_806E91A0(void);
extern void fn_806E91F0(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807C3948[];
extern u8 lbl_807C39EC[];
extern u8 lbl_807C39FC[];
extern u8 lbl_807C3A00[];
extern u8 lbl_807C3A4C[];
extern u8 lbl_807C3A60[];
extern u8 lbl_807C3A64[];
extern u8 lbl_807C3A78[];
extern u8 lbl_807C3C98[];
extern u8 lbl_807C3CD8[];

/* Small data declarations */

/* Function declarations */
void pad_03_806E4234_text(void);
void fn_806E4240(void);
void fn_806E4600(void);
void fn_806E4700(void);
void fn_806E4770(void);
void fn_806E4890(void);
void fn_806E49C0(void);
void fn_806E49F0(void);
void fn_806E4A30(void);
void fn_806E4B00(void);
void fn_806E4B90(void);
void fn_806E4CA0(void);
void fn_806E4E20(void);
void fn_806E4EA0(void);
void fn_806E4FB0(void);
void fn_806E5050(void);
void fn_806E51E0(void);
void fn_806E52A0(void);
void fn_806E52B0(void);
void fn_806E5310(void);
void fn_806E53B0(void);
void fn_806E53D0(void);
void fn_806E53E0(void);
void fn_806E5500(void);
void fn_806E5570(void);
void fn_806E5700(void);
void fn_806E57E0(void);
void fn_806E5840(void);
void fn_806E5970(void);
void fn_806E59C0(void);
void fn_806E59D0(void);
void fn_806E5A60(void);
void fn_806E5AF0(void);
void fn_806E5B10(void);
void fn_806E5B60(void);
void fn_806E5BC0(void);
void fn_806E5C20(void);
void fn_806E5C80(void);
void fn_806E5D00(void);
void fn_806E5D70(void);
void fn_806E5F90(void);
void fn_806E6160(void);

asm void pad_03_806E4234_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
    opword 0x00000000
}

asm void fn_806E4240(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_27
    cmpwi r4, 0x0
    lwz r31, 0x0(r3)
    mr r29, r3
    mr r30, r4
    bne lbl_fn_806E4240_0000003C
    li r3, 0x3
    b lbl_fn_806E4240_000003B4
lbl_fn_806E4240_0000003C:
    lwz r0, 0x34(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806E4240_00000084
    lwz r4, 0x8(r4)
    addi r6, r30, 0x2c
    lhz r5, 0xc(r30)
    addi r7, r1, 0x18
    li r8, 0x1
    bl fn_806DEA40
    lwz r0, 0x18(r1)
    cmpwi r0, 0x0
    bne lbl_fn_806E4240_00000074
    cmpwi r3, 0x0
    beq lbl_fn_806E4240_00000084
lbl_fn_806E4240_00000074:
    li r0, 0x6a
    stw r0, 0x0(r30)
    li r3, 0x0
    b lbl_fn_806E4240_000003B4
lbl_fn_806E4240_00000084:
    lwz r0, 0x34(r30)
    cmpwi cr1, r0, 0x0
    bne cr1, lbl_fn_806E4240_00000150
    cmpwi r30, 0x0
    bne lbl_fn_806E4240_000000A0
    li r3, 0x3
    b lbl_fn_806E4240_00000130
lbl_fn_806E4240_000000A0:
    beq cr1, lbl_fn_806E4240_0000011C
    li r3, 0x0
    b lbl_fn_806E4240_00000130
    b lbl_fn_806E4240_0000011C
lbl_fn_806E4240_000000B0:
    lwz r3, 0x3c(r30)
    li r4, 0x0
    bl fn_806D5900
    mr r28, r3
    lwz r4, 0x8(r30)
    lhz r5, 0xc(r30)
    mr r3, r29
    mr r6, r28
    addi r7, r1, 0x8
    li r8, 0x0
    bl fn_806DEA40
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_fn_806E4240_000000F0
    cmpwi r3, 0x0
    beq lbl_fn_806E4240_00000100
lbl_fn_806E4240_000000F0:
    li r0, 0x6a
    stw r0, 0x0(r30)
    li r3, 0x0
    b lbl_fn_806E4240_00000130
lbl_fn_806E4240_00000100:
    lwz r3, 0xc(r28)
    lwz r0, 0x8(r28)
    cmpw r3, r0
    bne lbl_fn_806E4240_0000012C
    lwz r3, 0x3c(r30)
    li r4, 0x0
    bl fn_806D5C90
lbl_fn_806E4240_0000011C:
    lwz r3, 0x3c(r30)
    bl fn_806D58F0
    cmpwi r3, 0x0
    bne lbl_fn_806E4240_000000B0
lbl_fn_806E4240_0000012C:
    li r3, 0x0
lbl_fn_806E4240_00000130:
    cmpwi r3, 0x0
    beq lbl_fn_806E4240_0000013C
    b lbl_fn_806E4240_000003B4
lbl_fn_806E4240_0000013C:
    lwz r0, 0x0(r30)
    cmpwi r0, 0x6a
    bne lbl_fn_806E4240_00000150
    li r3, 0x0
    b lbl_fn_806E4240_000003B4
lbl_fn_806E4240_00000150:
    lwz r0, 0x24(r30)
    cmpwi r0, 0x0
    ble lbl_fn_806E4240_0000016C
    li r3, 0x0
    bl fn_806D8B20
    addi r0, r3, 0x2710
    stw r0, 0x14(r30)
lbl_fn_806E4240_0000016C:
    lis r28, lbl_807C39FC@ha
lbl_fn_806E4240_00000170:
    mr r3, r29
    addi r4, r30, 0x1c
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    addi r7, r1, 0xc
    bl fn_806DEBA0
    cmpwi r3, 0x0
    beq lbl_fn_806E4240_00000194
    b lbl_fn_806E4240_000003B4
lbl_fn_806E4240_00000194:
    lwz r7, 0x14(r1)
    cmpwi r7, 0x0
    beq lbl_fn_806E4240_00000380
    lwz r5, 0x10(r1)
    subi r0, r5, 0xc8
    cmplwi r0, 0x8
    ble lbl_fn_806E4240_00000360
    cmpwi r5, 0x1
    beq lbl_fn_806E4240_000001DC
    cmpwi r5, 0x5
    beq lbl_fn_806E4240_00000274
    cmpwi r5, 0x66
    beq lbl_fn_806E4240_0000030C
    cmpwi r5, 0x68
    beq lbl_fn_806E4240_0000032C
    cmpwi r5, 0x69
    beq lbl_fn_806E4240_00000344
    b lbl_fn_806E4240_00000374
lbl_fn_806E4240_000001DC:
    lwz r3, 0x1c0(r31)
    lwz r0, 0x1c4(r31)
    cmpwi r3, 0x0
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    beq lbl_fn_806E4240_00000374
    li r3, 0xc
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_806E4240_00000220
    lis r4, lbl_807C39EC@ha
    mr r3, r29
    addi r4, r4, lbl_807C39EC@l
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E4240_000003B4
lbl_fn_806E4240_00000220:
    lwz r0, 0x10(r30)
    stw r0, 0x0(r3)
    lwz r3, 0x14(r1)
    bl fn_806D8E30
    stw r3, 0x8(r27)
    li r3, 0x0
    bl fn_806D8B20
    stw r3, 0x4(r27)
    mr r3, r29
    lwz r6, 0x38(r1)
    mr r5, r27
    lwz r0, 0x3c(r1)
    addi r4, r1, 0x30
    stw r6, 0x30(r1)
    li r6, 0x0
    li r7, 0x2
    stw r0, 0x34(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806E4240_00000374
    b lbl_fn_806E4240_000003B4
lbl_fn_806E4240_00000274:
    lwz r3, 0x1c8(r31)
    lwz r0, 0x1cc(r31)
    cmpwi r3, 0x0
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    beq lbl_fn_806E4240_00000374
    li r3, 0xc
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_806E4240_000002B8
    lis r4, lbl_807C39EC@ha
    mr r3, r29
    addi r4, r4, lbl_807C39EC@l
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E4240_000003B4
lbl_fn_806E4240_000002B8:
    lwz r0, 0x10(r30)
    stw r0, 0x0(r3)
    lwz r3, 0x14(r1)
    bl fn_806D8E30
    stw r3, 0x8(r27)
    li r3, 0x0
    bl fn_806D8B20
    stw r3, 0x4(r27)
    mr r3, r29
    lwz r6, 0x20(r1)
    mr r5, r27
    lwz r0, 0x24(r1)
    addi r4, r1, 0x28
    stw r6, 0x28(r1)
    li r6, 0x0
    li r7, 0x2
    stw r0, 0x2c(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806E4240_00000374
    b lbl_fn_806E4240_000003B4
lbl_fn_806E4240_0000030C:
    lwz r4, 0x10(r30)
    mr r3, r29
    addi r6, r28, lbl_807C39FC@l
    li r5, 0x67
    li r7, 0x0
    li r8, 0x0
    bl fn_806DD7C0
    b lbl_fn_806E4240_00000374
lbl_fn_806E4240_0000032C:
    mr r3, r29
    mr r4, r30
    bl fn_806DD980
    cmpwi r3, 0x0
    beq lbl_fn_806E4240_00000374
    b lbl_fn_806E4240_000003B4
lbl_fn_806E4240_00000344:
    mr r3, r29
    mr r4, r30
    mr r5, r7
    bl fn_806DDA30
    cmpwi r3, 0x0
    beq lbl_fn_806E4240_00000374
    b lbl_fn_806E4240_000003B4
lbl_fn_806E4240_00000360:
    lwz r6, 0x1c(r30)
    mr r3, r29
    lwz r8, 0xc(r1)
    mr r4, r30
    bl fn_806E87A0
lbl_fn_806E4240_00000374:
    mr r3, r29
    addi r4, r30, 0x1c
    bl fn_806DED00
lbl_fn_806E4240_00000380:
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    bne lbl_fn_806E4240_00000170
    lwz r3, 0x8(r30)
    addi r5, r1, 0x1c
    lhz r4, 0xc(r30)
    bl fn_806DA070
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x3
    bne lbl_fn_806E4240_000003B0
    li r0, 0x6a
    stw r0, 0x0(r30)
lbl_fn_806E4240_000003B0:
    li r3, 0x0
lbl_fn_806E4240_000003B4:
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806E4600(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    lwz r30, 0x44(r4)
    bne lbl_fn_806E4600_00000400
    b lbl_fn_806E4600_000004AC
lbl_fn_806E4600_00000400:
    li r31, 0x0
    b lbl_fn_806E4600_00000498
lbl_fn_806E4600_00000408:
    lwz r0, 0x0(r30)
    cmpwi r0, 0x2
    beq lbl_fn_806E4600_00000494
    bl fn_806D8F30
    lwz r0, 0x14(r30)
    cmplw r3, r0
    ble lbl_fn_806E4600_00000494
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806E4600_00000494
    lwz r0, 0x10(r30)
    cmpwi r0, 0x68
    bne lbl_fn_806E4600_00000488
    li r3, 0x10
    bl fn_806D7A90
    lwz r9, 0x8(r30)
    mr r5, r3
    lwz r8, 0x4(r30)
    addi r4, r1, 0x8
    stw r9, 0x10(r1)
    li r6, 0x0
    li r7, 0x0
    stw r31, 0x4(r3)
    stw r31, 0xc(r3)
    stw r31, 0x8(r3)
    lwz r0, 0x10(r29)
    stw r0, 0x0(r3)
    mr r3, r28
    stw r8, 0x14(r1)
    stw r9, 0x8(r1)
    stw r8, 0xc(r1)
    bl fn_806DEE40
lbl_fn_806E4600_00000488:
    mr r3, r29
    mr r4, r30
    bl fn_806E5310
lbl_fn_806E4600_00000494:
    lwz r30, 0xc(r30)
lbl_fn_806E4600_00000498:
    cmpwi r30, 0x0
    beq lbl_fn_806E4600_000004AC
    lwz r0, 0x48(r29)
    cmplw r30, r0
    bne lbl_fn_806E4600_00000408
lbl_fn_806E4600_000004AC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806E4700(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r3, 0x1c(r4)
    bl fn_806D7AC0
    li r31, 0x0
    stw r31, 0x1c(r30)
    lwz r3, 0x2c(r30)
    bl fn_806D7AC0
    lwz r3, 0x3c(r30)
    stw r31, 0x2c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_806E4700_00000514
    bl fn_806D5850
    stw r31, 0x3c(r30)
lbl_fn_806E4700_00000514:
    mr r3, r30
    bl fn_806D7AC0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806E4770(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r5, 0x0(r3)
    beq lbl_fn_806E4770_00000638
    lwz r3, 0x5d8(r5)
    cmpwi r3, 0x0
    beq lbl_fn_806E4770_00000638
    cmplw r3, r4
    bne lbl_fn_806E4770_00000598
    lwz r0, 0x4c(r4)
    stw r0, 0x5d8(r5)
    b lbl_fn_806E4770_000005F0
    b lbl_fn_806E4770_00000598
    nop
lbl_fn_806E4770_0000058C:
    cmpwi r0, 0x0
    beq lbl_fn_806E4770_00000638
    mr r3, r0
lbl_fn_806E4770_00000598:
    lwz r0, 0x4c(r3)
    cmplw r0, r4
    bne lbl_fn_806E4770_0000058C
    lwz r0, 0x4c(r4)
    stw r0, 0x4c(r3)
    b lbl_fn_806E4770_000005F0
lbl_fn_806E4770_000005B0:
    lwz r3, 0x3c(r30)
    li r4, 0x0
    bl fn_806D5900
    lwz r5, 0x10(r3)
    mr r4, r3
    cmpwi r5, 0x64
    bge lbl_fn_806E4770_000005E4
    lwz r6, 0x0(r4)
    mr r3, r31
    lwz r0, 0x14(r4)
    lwz r4, 0x10(r30)
    add r6, r6, r0
    bl fn_806DD6D0
lbl_fn_806E4770_000005E4:
    lwz r3, 0x3c(r30)
    li r4, 0x0
    bl fn_806D5C90
lbl_fn_806E4770_000005F0:
    lwz r3, 0x3c(r30)
    bl fn_806D58F0
    cmpwi r3, 0x0
    bne lbl_fn_806E4770_000005B0
    lwz r3, 0x1c(r30)
    bl fn_806D7AC0
    li r31, 0x0
    stw r31, 0x1c(r30)
    lwz r3, 0x2c(r30)
    bl fn_806D7AC0
    lwz r3, 0x3c(r30)
    stw r31, 0x2c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_806E4770_00000630
    bl fn_806D5850
    stw r31, 0x3c(r30)
lbl_fn_806E4770_00000630:
    mr r3, r30
    bl fn_806D7AC0
lbl_fn_806E4770_00000638:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806E4890(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r31, 0x0(r3)
    bl fn_806DA480
    lwz r29, 0x5d8(r31)
    b lbl_fn_806E4890_0000075C
lbl_fn_806E4890_0000068C:
    lwz r0, 0x0(r29)
    lwz r30, 0x4c(r29)
    cmpwi r0, 0x6a
    bne lbl_fn_806E4890_000006AC
    mr r3, r28
    mr r4, r29
    bl fn_806E4770
    b lbl_fn_806E4890_00000758
lbl_fn_806E4890_000006AC:
    cmpwi r0, 0x64
    li r31, 0x0
    bne lbl_fn_806E4890_000006C0
    li r31, 0x3
    b lbl_fn_806E4890_00000724
lbl_fn_806E4890_000006C0:
    cmpwi r0, 0x69
    beq lbl_fn_806E4890_000006F4
    lwz r0, 0x4(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806E4890_000006E4
    mr r3, r28
    mr r4, r29
    bl fn_806E3CC0
    b lbl_fn_806E4890_000006F0
lbl_fn_806E4890_000006E4:
    mr r3, r28
    mr r4, r29
    bl fn_806E4010
lbl_fn_806E4890_000006F0:
    mr r31, r3
lbl_fn_806E4890_000006F4:
    cmpwi r31, 0x0
    bne lbl_fn_806E4890_00000724
    lwz r0, 0x0(r29)
    cmpwi r0, 0x69
    bne lbl_fn_806E4890_00000724
    mr r3, r28
    mr r4, r29
    bl fn_806E4240
    mr r31, r3
    mr r3, r28
    mr r4, r29
    bl fn_806E4600
lbl_fn_806E4890_00000724:
    lwz r0, 0x0(r29)
    cmpwi r0, 0x6a
    beq lbl_fn_806E4890_0000074C
    cmpwi r31, 0x0
    bne lbl_fn_806E4890_0000074C
    li r3, 0x0
    bl fn_806D8B20
    lwz r0, 0x14(r29)
    cmpw r3, r0
    ble lbl_fn_806E4890_00000758
lbl_fn_806E4890_0000074C:
    mr r3, r28
    mr r4, r29
    bl fn_806E4770
lbl_fn_806E4890_00000758:
    mr r29, r30
lbl_fn_806E4890_0000075C:
    cmpwi r29, 0x0
    bne lbl_fn_806E4890_0000068C
    lwz r31, 0x1c(r1)
    li r3, 0x0
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806E49C0(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    lwz r3, 0x5d8(r3)
    b lbl_fn_806E49C0_000007AC
    nop
lbl_fn_806E49C0_0000079C:
    lwz r0, 0x10(r3)
    cmpw r0, r4
    beqlr
    lwz r3, 0x4c(r3)
lbl_fn_806E49C0_000007AC:
    cmpwi r3, 0x0
    bne lbl_fn_806E49C0_0000079C
    li r3, 0x0
    blr
}

asm void fn_806E49F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0x0(r3)
    bl fn_806D7AC0
    li r0, 0x0
    stw r0, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806E4A30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r30, 0x0(r3)
    li r3, 0x50
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806E4A30_00000840
    li r3, 0x0
    b lbl_fn_806E4A30_000008A4
lbl_fn_806E4A30_00000840:
    li r4, 0x0
    li r5, 0x50
    bl memset
    li r0, 0x64
    stw r0, 0x0(r31)
    li r3, 0x0
    stw r29, 0x4(r31)
    stw r28, 0x10(r31)
    bl fn_806D8B20
    addi r0, r3, 0x2710
    stw r0, 0x14(r31)
    lis r5, fn_806E49F0@ha
    li r3, 0x18
    lwz r0, 0x5d8(r30)
    addi r5, r5, fn_806E49F0@l
    stw r0, 0x4c(r31)
    li r4, 0x0
    bl fn_806D57A0
    stw r3, 0x3c(r31)
    li r0, 0x0
    mr r3, r31
    stw r31, 0x5d8(r30)
    stw r0, 0x44(r31)
    stw r0, 0x48(r31)
    stw r0, 0x40(r31)
lbl_fn_806E4A30_000008A4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806E4B00(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0x0
    li r7, 0x0
    stw r0, 0x24(r1)
    addi r6, r1, 0x8
    li r8, 0x0
    li r9, 0x0
    stw r31, 0x1c(r1)
    mr r31, r4
    li r4, 0x2
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_806E3980
    cmpwi r3, 0x0
    beq lbl_fn_806E4B00_00000910
    b lbl_fn_806E4B00_0000093C
lbl_fn_806E4B00_00000910:
    lwz r5, 0x8(r1)
    mr r3, r30
    lwz r4, 0x10(r31)
    lwz r5, 0x18(r5)
    bl fn_806E2B10
    cmpwi r3, 0x0
    beq lbl_fn_806E4B00_00000930
    b lbl_fn_806E4B00_0000093C
lbl_fn_806E4B00_00000930:
    li r0, 0x65
    stw r0, 0x0(r31)
    li r3, 0x0
lbl_fn_806E4B00_0000093C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806E4B90(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r5, r1, 0xc
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r31, 0x0(r3)
    lwz r4, 0x10(r4)
    bl fn_806E57E0
    cmpwi r3, 0x0
    bne lbl_fn_806E4B90_000009AC
    lis r4, lbl_807C3948@ha
    mr r3, r29
    addi r4, r4, lbl_807C3948@l
    bl fn_806E91F0
    li r3, 0x3
    b lbl_fn_806E4B90_00000A48
lbl_fn_806E4B90_000009AC:
    lwz r3, 0xc(r1)
    lwz r4, 0xc(r3)
    cmpwi r4, 0x0
    beq lbl_fn_806E4B90_00000A3C
    lwz r3, 0x1c(r4)
    addi r5, r1, 0x8
    lhz r4, 0x20(r4)
    bl fn_806DA070
    lwz r3, 0xc(r1)
    addi r5, r31, 0x220
    li r6, 0x2710
    lwz r4, 0xc(r3)
    lwz r3, 0x1c(r4)
    lhz r4, 0x20(r4)
    bl fn_806DA120
    cmpwi r3, 0x5
    beq lbl_fn_806E4B90_00000A1C
    lis r5, lbl_807C3A00@ha
    mr r3, r29
    addi r5, r5, lbl_807C3A00@l
    li r4, 0x5
    bl fn_806E91A0
    mr r3, r29
    li r4, 0x3
    li r5, 0x0
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E4B90_00000A48
lbl_fn_806E4B90_00000A1C:
    lwz r3, 0xc(r1)
    lwz r3, 0xc(r3)
    lwz r0, 0x1c(r3)
    stw r0, 0x8(r30)
    lwz r3, 0xc(r1)
    lwz r3, 0xc(r3)
    lhz r0, 0x20(r3)
    sth r0, 0xc(r30)
lbl_fn_806E4B90_00000A3C:
    li r0, 0x67
    stw r0, 0x0(r30)
    li r3, 0x0
lbl_fn_806E4B90_00000A48:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806E4CA0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    cmpwi r4, 0x0
    lis r31, lbl_807C3948@ha
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    addi r31, r31, lbl_807C3948@l
    bne lbl_fn_806E4CA0_00000AA8
    li r3, 0x3
    b lbl_fn_806E4CA0_00000BC8
lbl_fn_806E4CA0_00000AA8:
    cmpwi r6, 0x0
    bne lbl_fn_806E4CA0_00000AB8
    li r3, 0x3
    b lbl_fn_806E4CA0_00000BC8
lbl_fn_806E4CA0_00000AB8:
    mr r3, r29
    bl strlen
    mr r30, r3
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x18
    bl memset
    stw r28, 0x18(r1)
    mr r3, r26
    addi r4, r1, 0x8
    addi r5, r31, 0xf0
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E4CA0_00000AF4
    b lbl_fn_806E4CA0_00000BC8
lbl_fn_806E4CA0_00000AF4:
    mr r3, r26
    mr r5, r28
    addi r4, r1, 0x8
    bl fn_806DE4E0
    cmpwi r3, 0x0
    beq lbl_fn_806E4CA0_00000B10
    b lbl_fn_806E4CA0_00000BC8
lbl_fn_806E4CA0_00000B10:
    mr r3, r26
    addi r4, r1, 0x8
    addi r5, r31, 0xf4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E4CA0_00000B2C
    b lbl_fn_806E4CA0_00000BC8
lbl_fn_806E4CA0_00000B2C:
    mr r3, r26
    mr r5, r30
    addi r4, r1, 0x8
    bl fn_806DE4E0
    cmpwi r3, 0x0
    beq lbl_fn_806E4CA0_00000B48
    b lbl_fn_806E4CA0_00000BC8
lbl_fn_806E4CA0_00000B48:
    mr r3, r26
    addi r4, r1, 0x8
    addi r5, r31, 0xfc
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E4CA0_00000B64
    b lbl_fn_806E4CA0_00000BC8
lbl_fn_806E4CA0_00000B64:
    lwz r0, 0x10(r1)
    mr r3, r26
    stw r0, 0x1c(r1)
    mr r5, r29
    mr r6, r30
    addi r4, r1, 0x8
    bl fn_806DE3A0
    cmpwi r3, 0x0
    beq lbl_fn_806E4CA0_00000B8C
    b lbl_fn_806E4CA0_00000BC8
lbl_fn_806E4CA0_00000B8C:
    mr r3, r26
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_806DE2F0
    cmpwi r3, 0x0
    beq lbl_fn_806E4CA0_00000BA8
    b lbl_fn_806E4CA0_00000BC8
lbl_fn_806E4CA0_00000BA8:
    lwz r3, 0x3c(r27)
    addi r4, r1, 0x8
    bl fn_806D5930
    li r3, 0x0
    bl fn_806D8B20
    addi r0, r3, 0x2710
    stw r0, 0x14(r27)
    li r3, 0x0
lbl_fn_806E4CA0_00000BC8:
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806E4E20(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r6, 0x0
    lwz r7, 0x4(r6)
    stw r0, 0x54(r1)
    lwz r0, 0x0(r6)
    stw r31, 0x4c(r1)
    mr r31, r4
    lwz r8, 0x8(r6)
    stw r30, 0x48(r1)
    mr r30, r3
    bne lbl_fn_806E4E20_00000C24
    li r3, 0x3
    b lbl_fn_806E4E20_00000C4C
lbl_fn_806E4E20_00000C24:
    lis r4, lbl_807C3A4C@ha
    mr r6, r0
    addi r3, r1, 0x8
    addi r4, r4, lbl_807C3A4C@l
    crclr 6
    bl sprintf
    mr r3, r30
    mr r4, r31
    addi r5, r1, 0x8
    bl fn_806DE790
lbl_fn_806E4E20_00000C4C:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_806E4EA0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r6
    stw r30, 0x38(r1)
    mr r30, r5
    stw r29, 0x34(r1)
    mr r29, r4
    stw r28, 0x30(r1)
    mr r28, r3
    bne lbl_fn_806E4EA0_00000CA8
    li r3, 0x3
    b lbl_fn_806E4EA0_00000D50
lbl_fn_806E4EA0_00000CA8:
    cmpwi r5, 0x0
    bne lbl_fn_806E4EA0_00000CB8
    lis r30, lbl_807C3A60@ha
    addi r30, r30, lbl_807C3A60@l
lbl_fn_806E4EA0_00000CB8:
    cmpwi r6, -0x1
    bne lbl_fn_806E4EA0_00000CCC
    mr r3, r30
    bl strlen
    mr r31, r3
lbl_fn_806E4EA0_00000CCC:
    lis r4, lbl_807C3A64@ha
    mr r5, r31
    addi r3, r1, 0x8
    addi r4, r4, lbl_807C3A64@l
    crclr 6
    bl sprintf
    mr r3, r28
    mr r4, r29
    addi r5, r1, 0x8
    bl fn_806DE790
    cmpwi r3, 0x0
    beq lbl_fn_806E4EA0_00000D00
    b lbl_fn_806E4EA0_00000D50
lbl_fn_806E4EA0_00000D00:
    mr r3, r28
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_806DE670
    cmpwi r3, 0x0
    beq lbl_fn_806E4EA0_00000D20
    b lbl_fn_806E4EA0_00000D50
lbl_fn_806E4EA0_00000D20:
    mr r3, r28
    mr r4, r29
    li r5, 0x0
    bl fn_806DE660
    cmpwi r3, 0x0
    beq lbl_fn_806E4EA0_00000D3C
    b lbl_fn_806E4EA0_00000D50
lbl_fn_806E4EA0_00000D3C:
    li r3, 0x0
    bl fn_806D8B20
    addi r0, r3, 0x2710
    stw r0, 0x14(r29)
    li r3, 0x0
lbl_fn_806E4EA0_00000D50:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806E4FB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lwz r5, 0x0(r6)
    bne lbl_fn_806E4FB0_00000DA8
    cmpwi r4, 0x0
    bne lbl_fn_806E4FB0_00000DA8
    li r31, 0x0
    b lbl_fn_806E4FB0_00000DE0
lbl_fn_806E4FB0_00000DA8:
    lwz r31, 0x5d8(r5)
    b lbl_fn_806E4FB0_00000DD4
    nop
lbl_fn_806E4FB0_00000DB4:
    lwz r0, 0x8(r31)
    cmplw r0, r3
    bne lbl_fn_806E4FB0_00000DD0
    lhz r0, 0xc(r31)
    cmplw r0, r4
    bne lbl_fn_806E4FB0_00000DD0
    b lbl_fn_806E4FB0_00000DE0
lbl_fn_806E4FB0_00000DD0:
    lwz r31, 0x4c(r31)
lbl_fn_806E4FB0_00000DD4:
    cmpwi r31, 0x0
    bne lbl_fn_806E4FB0_00000DB4
    li r31, 0x0
lbl_fn_806E4FB0_00000DE0:
    cmpwi r31, 0x0
    beq lbl_fn_806E4FB0_00000DFC
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_806A420C
    li r0, 0x6a
    stw r0, 0x0(r31)
lbl_fn_806E4FB0_00000DFC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806E5050(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    cmpwi r3, 0x0
    lwz r7, 0x0(r8)
    mr r24, r3
    mr r27, r4
    mr r25, r5
    mr r26, r6
    mr r31, r8
    bne lbl_fn_806E5050_00000E60
    cmpwi r4, 0x0
    bne lbl_fn_806E5050_00000E60
    li r30, 0x0
    b lbl_fn_806E5050_00000E98
lbl_fn_806E5050_00000E60:
    lwz r30, 0x5d8(r7)
    b lbl_fn_806E5050_00000E8C
    nop
lbl_fn_806E5050_00000E6C:
    lwz r0, 0x8(r30)
    cmplw r0, r3
    bne lbl_fn_806E5050_00000E88
    lhz r0, 0xc(r30)
    cmplw r0, r4
    bne lbl_fn_806E5050_00000E88
    b lbl_fn_806E5050_00000E98
lbl_fn_806E5050_00000E88:
    lwz r30, 0x4c(r30)
lbl_fn_806E5050_00000E8C:
    cmpwi r30, 0x0
    bne lbl_fn_806E5050_00000E6C
    li r30, 0x0
lbl_fn_806E5050_00000E98:
    cmpwi r30, 0x0
    bne lbl_fn_806E5050_00000EE0
    mr r3, r31
    li r4, -0x1
    li r5, 0x0
    bl fn_806E4A30
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_806E5050_00000ED0
    li r0, 0x68
    stw r0, 0x0(r3)
    stw r24, 0x8(r3)
    sth r27, 0xc(r3)
    b lbl_fn_806E5050_00000EE0
lbl_fn_806E5050_00000ED0:
    stw r24, 0xc(r1)
    addi r3, r1, 0xc
    bl fn_806A420C
    b lbl_fn_806E5050_00000F88
lbl_fn_806E5050_00000EE0:
    lwz r28, 0x24(r30)
    lwz r27, 0x20(r30)
    lwz r29, 0x1c(r30)
    subf r0, r28, r27
    cmpw r26, r0
    ble lbl_fn_806E5050_00000F5C
    cmpwi r26, 0x4000
    li r0, 0x4000
    blt lbl_fn_806E5050_00000F08
    mr r0, r26
lbl_fn_806E5050_00000F08:
    add r27, r28, r0
    mr r3, r29
    addi r4, r27, 0x1
    bl fn_806D7AA0
    cmpwi r3, 0x0
    bne lbl_fn_806E5050_00000F58
    stw r24, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_806A420C
    mr r3, r29
    bl fn_806D7AC0
    lis r4, lbl_807C39EC@ha
    mr r3, r31
    addi r4, r4, lbl_807C39EC@l
    bl fn_806E91F0
    mr r3, r31
    li r4, 0x1
    li r5, 0x0
    bl fn_806DED80
    b lbl_fn_806E5050_00000F88
lbl_fn_806E5050_00000F58:
    mr r29, r3
lbl_fn_806E5050_00000F5C:
    mr r4, r25
    mr r5, r26
    add r3, r29, r28
    bl memcpy
    stw r29, 0x1c(r30)
    li r0, 0x0
    lwz r3, 0x24(r30)
    add r3, r3, r26
    stw r3, 0x24(r30)
    stw r27, 0x20(r30)
    stbx r0, r29, r3
lbl_fn_806E5050_00000F88:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806E51E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r5, 0x0(r7)
    bne lbl_fn_806E51E0_00000FDC
    cmpwi r4, 0x0
    bne lbl_fn_806E51E0_00000FDC
    li r5, 0x0
    b lbl_fn_806E51E0_00001010
lbl_fn_806E51E0_00000FDC:
    lwz r5, 0x5d8(r5)
    b lbl_fn_806E51E0_00001004
lbl_fn_806E51E0_00000FE4:
    lwz r0, 0x8(r5)
    cmplw r0, r3
    bne lbl_fn_806E51E0_00001000
    lhz r0, 0xc(r5)
    cmplw r0, r4
    bne lbl_fn_806E51E0_00001000
    b lbl_fn_806E51E0_00001010
lbl_fn_806E51E0_00001000:
    lwz r5, 0x4c(r5)
lbl_fn_806E51E0_00001004:
    cmpwi r5, 0x0
    bne lbl_fn_806E51E0_00000FE4
    li r5, 0x0
lbl_fn_806E51E0_00001010:
    cmpwi r5, 0x0
    bne lbl_fn_806E51E0_00001028
    stw r31, 0x10(r1)
    addi r3, r1, 0x10
    bl fn_806A420C
    b lbl_fn_806E51E0_00001048
lbl_fn_806E51E0_00001028:
    cmpwi r6, 0x0
    beq lbl_fn_806E51E0_00001048
    li r0, 0x6a
    stw r0, 0x0(r5)
    addi r3, r1, 0xc
    stw r31, 0xc(r1)
    bl fn_806A420C
    b lbl_fn_806E51E0_00001054
lbl_fn_806E51E0_00001048:
    stw r31, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_806A420C
lbl_fn_806E51E0_00001054:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806E52A0(void)
{
    nofralloc
    blr
}

asm void fn_806E52B0(void)
{
    nofralloc
    cmpwi r3, 0x0
    beqlr
    cmpwi r4, 0x0
    bne lbl_fn_806E52B0_00001090
    blr
lbl_fn_806E52B0_00001090:
    lwz r0, 0x40(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806E52B0_000010AC
    stw r4, 0x44(r3)
    stw r4, 0x48(r3)
    stw r4, 0x40(r3)
    blr
lbl_fn_806E52B0_000010AC:
    lwz r6, 0x48(r3)
    lwz r5, 0x44(r3)
    cmplw r5, r6
    bne lbl_fn_806E52B0_000010C8
    stw r4, 0xc(r5)
    stw r4, 0x48(r3)
    blr
lbl_fn_806E52B0_000010C8:
    stw r4, 0xc(r6)
    stw r4, 0x48(r3)
    blr
}

asm void fn_806E5310(void)
{
    nofralloc
    cmpwi r3, 0x0
    beqlr
    cmpwi r4, 0x0
    bne lbl_fn_806E5310_000010F0
    blr
lbl_fn_806E5310_000010F0:
    lwz r0, 0x40(r3)
    cmpwi r0, 0x0
    beqlr
    lwz r5, 0x44(r3)
    lwz r0, 0x48(r3)
    cmplw r5, r0
    bne lbl_fn_806E5310_00001128
    cmplw r5, r4
    bne lbl_fn_806E5310_00001128
    lwz r0, 0xc(r4)
    stw r0, 0x48(r3)
    stw r0, 0x44(r3)
    stw r0, 0x40(r3)
    b lbl_fn_806E5310_00001164
lbl_fn_806E5310_00001128:
    cmplw r5, r4
    bne lbl_fn_806E5310_00001150
    lwz r0, 0xc(r5)
    stw r0, 0x44(r3)
    stw r0, 0x40(r3)
    b lbl_fn_806E5310_00001164
    b lbl_fn_806E5310_00001150
lbl_fn_806E5310_00001144:
    cmpwi r0, 0x0
    beqlr
    mr r5, r0
lbl_fn_806E5310_00001150:
    lwz r0, 0xc(r5)
    cmplw r0, r4
    bne lbl_fn_806E5310_00001144
    lwz r0, 0xc(r4)
    stw r0, 0xc(r5)
lbl_fn_806E5310_00001164:
    mr r3, r4
    b fn_806D7AC0
    blr
}

asm void fn_806E53B0(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    divw r0, r3, r4
    mullw r0, r0, r4
    subf r3, r0, r3
    blr
}

asm void fn_806E53D0(void)
{
    nofralloc
    lwz r4, 0x0(r4)
    lwz r0, 0x0(r3)
    subf r3, r4, r0
    blr
}

asm void fn_806E53E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r4, 0x8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_806E53E0_00001204
    lwz r3, 0x8(r4)
    bl fn_806D7AC0
    lwz r3, 0x8(r31)
    li r30, 0x0
    stw r30, 0x8(r3)
    lwz r3, 0x8(r31)
    lwz r3, 0xc(r3)
    bl fn_806D7AC0
    lwz r3, 0x8(r31)
    stw r30, 0xc(r3)
    lwz r3, 0x8(r31)
    bl fn_806D7AC0
    stw r30, 0x8(r31)
lbl_fn_806E53E0_00001204:
    lwz r3, 0xc(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806E53E0_0000128C
    lwz r3, 0x8(r3)
    bl fn_806D7AC0
    lwz r3, 0xc(r31)
    li r30, 0x0
    stw r30, 0x8(r3)
    lwz r3, 0xc(r31)
    lwz r3, 0xc(r3)
    bl fn_806D7AC0
    lwz r3, 0xc(r31)
    stw r30, 0xc(r3)
    lwz r3, 0xc(r31)
    lwz r3, 0x10(r3)
    bl fn_806D7AC0
    lwz r3, 0xc(r31)
    stw r30, 0x10(r3)
    lwz r3, 0xc(r31)
    lwz r3, 0x14(r3)
    bl fn_806D7AC0
    lwz r3, 0xc(r31)
    stw r30, 0x14(r3)
    lwz r3, 0xc(r31)
    lwz r3, 0x38(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806E53E0_0000127C
    bl fn_806D5850
    lwz r3, 0xc(r31)
    stw r30, 0x38(r3)
lbl_fn_806E53E0_0000127C:
    lwz r3, 0xc(r31)
    bl fn_806D7AC0
    li r0, 0x0
    stw r0, 0xc(r31)
lbl_fn_806E53E0_0000128C:
    mr r3, r31
    bl fn_806E2E10
    lwz r3, 0x14(r31)
    bl fn_806D7AC0
    li r30, 0x0
    stw r30, 0x14(r31)
    lwz r3, 0x1c(r31)
    bl fn_806D7AC0
    stw r30, 0x1c(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806E5500(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, fn_806E53B0@ha
    lis r6, fn_806E53D0@ha
    stw r0, 0x14(r1)
    lis r7, fn_806E53E0@ha
    li r0, 0x0
    addi r5, r5, fn_806E53B0@l
    stw r31, 0xc(r1)
    addi r6, r6, fn_806E53D0@l
    addi r7, r7, fn_806E53E0@l
    li r4, 0x20
    lwz r31, 0x0(r3)
    li r3, 0x30
    stw r0, 0x5d0(r31)
    stw r0, 0x5d4(r31)
    stw r0, 0x5cc(r31)
    bl fn_806D6250
    neg r0, r3
    stw r3, 0x5c8(r31)
    or r0, r0, r3
    srwi r3, r0, 31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806E5570(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r5
    li r5, 0x1
    stw r30, 0x38(r1)
    lis r30, lbl_807C3A78@ha
    addi r30, r30, lbl_807C3A78@l
    stw r29, 0x34(r1)
    mr r29, r4
    mr r4, r31
    stw r28, 0x30(r1)
    mr r28, r3
    bl fn_806E8B60
    cmpwi r3, 0x0
    beq lbl_fn_806E5570_00001388
    li r3, 0x4
    b lbl_fn_806E5570_000014A4
lbl_fn_806E5570_00001388:
    mr r3, r31
    addi r4, r30, 0x104
    li r5, 0x5
    bl fn_80682544
    cmpwi r3, 0x0
    beq lbl_fn_806E5570_000013C8
    mr r3, r28
    addi r5, r30, 0x10c
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E5570_000014A4
lbl_fn_806E5570_000013C8:
    mr r3, r31
    addi r4, r30, 0x13c
    addi r5, r1, 0x18
    li r6, 0x10
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E5570_0000140C
    mr r3, r28
    addi r5, r30, 0x10c
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E5570_000014A4
lbl_fn_806E5570_0000140C:
    addi r3, r1, 0x18
    bl fn_80684600
    lwz r4, 0xc(r29)
    mr r31, r3
    lwz r0, 0x10(r29)
    cmpwi r4, 0x0
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    beq lbl_fn_806E5570_00001494
    li r3, 0x8
    bl fn_806D7A90
    cmpwi r3, 0x0
    bne lbl_fn_806E5570_00001454
    mr r3, r28
    addi r4, r30, 0x148
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E5570_000014A4
lbl_fn_806E5570_00001454:
    stw r31, 0x4(r3)
    li r0, 0x0
    lwz r4, 0x10(r1)
    mr r5, r3
    stw r0, 0x0(r3)
    mr r3, r28
    lwz r0, 0x14(r1)
    mr r6, r29
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    li r7, 0x0
    stw r0, 0xc(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806E5570_00001494
    b lbl_fn_806E5570_000014A4
lbl_fn_806E5570_00001494:
    mr r3, r28
    mr r4, r29
    bl fn_806E3A60
    li r3, 0x0
lbl_fn_806E5570_000014A4:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806E5700(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    stw r30, 0xa8(r1)
    mr r30, r4
    stw r29, 0xa4(r1)
    mr r29, r3
    lwz r31, 0x0(r3)
    bgt lbl_fn_806E5700_00001500
    li r3, 0x0
    b lbl_fn_806E5700_00001588
lbl_fn_806E5700_00001500:
    stw r4, 0x38(r1)
    addi r4, r1, 0x38
    lwz r3, 0x5c8(r31)
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_806E5700_0000151C
    b lbl_fn_806E5700_00001588
lbl_fn_806E5700_0000151C:
    addi r3, r1, 0x68
    li r4, 0x0
    li r5, 0x30
    bl memset
    li r0, 0x0
    stw r30, 0x68(r1)
    addi r4, r1, 0x68
    stw r0, 0x6c(r1)
    stw r0, 0x78(r1)
    stw r0, 0x7c(r1)
    stw r0, 0x84(r1)
    stw r0, 0x80(r1)
    stw r0, 0x94(r1)
    lwz r3, 0x5c8(r31)
    bl fn_806D64B0
    lwz r3, 0x5cc(r31)
    addi r4, r1, 0x8
    addi r0, r3, 0x1
    stw r0, 0x5cc(r31)
    lwz r3, 0x0(r29)
    stw r30, 0x8(r1)
    lwz r3, 0x5c8(r3)
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_806E5700_00001584
    b lbl_fn_806E5700_00001588
lbl_fn_806E5700_00001584:
    li r3, 0x0
lbl_fn_806E5700_00001588:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_806E57E0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r5
    lwz r3, 0x0(r3)
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    lwz r3, 0x5c8(r3)
    bl fn_806D6610
    cmpwi r31, 0x0
    beq lbl_fn_806E57E0_000015E0
    stw r3, 0x0(r31)
lbl_fn_806E57E0_000015E0:
    neg r0, r3
    lwz r31, 0x3c(r1)
    or r0, r0, r3
    srwi r3, r0, 31
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806E5840(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r29, r5
    lis r31, lbl_807C3A78@ha
    mr r28, r4
    lwz r30, 0x0(r3)
    mr r27, r3
    mr r4, r29
    addi r31, r31, lbl_807C3A78@l
    li r5, 0x1
    bl fn_806E8B60
    cmpwi r3, 0x0
    beq lbl_fn_806E5840_00001654
    li r3, 0x4
    b lbl_fn_806E5840_00001724
lbl_fn_806E5840_00001654:
    mr r3, r29
    addi r4, r31, 0x1c8
    li r5, 0x5
    bl fn_80682544
    cmpwi r3, 0x0
    beq lbl_fn_806E5840_00001694
    mr r3, r27
    addi r5, r31, 0x10c
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r27
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E5840_00001724
lbl_fn_806E5840_00001694:
    lwz r3, 0xc(r28)
    lwz r0, 0x10(r28)
    cmpwi r3, 0x0
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    beq lbl_fn_806E5840_00001714
    li r3, 0x8
    bl fn_806D7A90
    cmpwi r3, 0x0
    bne lbl_fn_806E5840_000016D0
    mr r3, r27
    addi r4, r31, 0x148
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E5840_00001724
lbl_fn_806E5840_000016D0:
    lwz r4, 0x1a0(r30)
    li r0, 0x0
    stw r4, 0x4(r3)
    mr r5, r3
    lwz r7, 0x10(r1)
    mr r6, r28
    stw r0, 0x0(r3)
    mr r3, r27
    lwz r0, 0x14(r1)
    addi r4, r1, 0x8
    stw r7, 0x8(r1)
    li r7, 0x0
    stw r0, 0xc(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806E5840_00001714
    b lbl_fn_806E5840_00001724
lbl_fn_806E5840_00001714:
    mr r3, r27
    mr r4, r28
    bl fn_806E3A60
    li r3, 0x0
lbl_fn_806E5840_00001724:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806E5970(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    lwz r31, 0x0(r3)
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    lwz r3, 0x5c8(r31)
    bl fn_806D6610
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_806E5970_00001774
    lwz r3, 0x5c8(r31)
    bl fn_806D6560
lbl_fn_806E5970_00001774:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806E59C0(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    lwz r3, 0x5c8(r3)
    b fn_806D6560
}

asm void fn_806E59D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r31, 0x10(r4)
    cmpwi r31, 0x0
    beq lbl_fn_806E59D0_00001808
    lwz r3, 0x0(r5)
    lwz r4, 0x0(r31)
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E59D0_00001808
    lwz r3, 0x4(r30)
    lwz r4, 0x8(r31)
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E59D0_00001808
    lwz r4, 0x8(r30)
    li r0, 0x1
    li r3, 0x0
    stw r29, 0x0(r4)
    stw r0, 0xc(r30)
    b lbl_fn_806E59D0_0000180C
lbl_fn_806E59D0_00001808:
    li r3, 0x1
lbl_fn_806E59D0_0000180C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806E5A60(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r7, fn_806E59D0@ha
    stw r0, 0x34(r1)
    addi r0, r1, 0x18
    addi r7, r7, fn_806E59D0@l
    stw r31, 0x2c(r1)
    li r31, 0x0
    stw r30, 0x28(r1)
    mr r30, r6
    stw r5, 0x1c(r1)
    addi r5, r1, 0x8
    stw r4, 0x18(r1)
    lis r4, fn_806E5AF0@ha
    addi r4, r4, fn_806E5AF0@l
    stw r6, 0x20(r1)
    stw r31, 0x24(r1)
    lwz r6, 0x0(r3)
    stw r3, 0x8(r1)
    stw r7, 0xc(r1)
    stw r0, 0x10(r1)
    lwz r3, 0x5c8(r6)
    bl fn_806D6720
    lwz r0, 0x24(r1)
    cmpwi r0, 0x0
    bne lbl_fn_806E5A60_00001898
    stw r31, 0x0(r30)
lbl_fn_806E5A60_00001898:
    lwz r31, 0x2c(r1)
    li r3, 0x0
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806E5AF0(void)
{
    nofralloc
    lwz r12, 0x4(r4)
    mr r5, r4
    mr r0, r3
    lwz r3, 0x0(r4)
    mr r4, r0
    lwz r5, 0x8(r5)
    mtctr r12
    bctr
}

asm void fn_806E5B10(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, fn_806E5AF0@ha
    stw r0, 0x24(r1)
    lwz r7, 0x0(r3)
    stw r4, 0xc(r1)
    addi r4, r6, fn_806E5AF0@l
    stw r5, 0x10(r1)
    addi r5, r1, 0x8
    stw r3, 0x8(r1)
    lwz r3, 0x5c8(r7)
    bl fn_806D6720
    cntlzw r0, r3
    srwi r3, r0, 5
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806E5B60(void)
{
    nofralloc
    lwz r6, 0x8(r4)
    cmpwi r6, 0x0
    beq lbl_fn_806E5B60_00001954
    lwz r3, 0x0(r5)
    lwz r0, 0x0(r6)
    cmpw r3, r0
    bne lbl_fn_806E5B60_00001954
    stw r4, 0x4(r5)
    li r3, 0x0
    blr
lbl_fn_806E5B60_00001954:
    lwz r6, 0xc(r4)
    cmpwi r6, 0x0
    beq lbl_fn_806E5B60_0000197C
    lwz r3, 0x0(r5)
    lwz r0, 0x0(r6)
    cmpw r3, r0
    bne lbl_fn_806E5B60_0000197C
    stw r4, 0x4(r5)
    li r3, 0x0
    blr
lbl_fn_806E5B60_0000197C:
    li r3, 0x1
    blr
}

asm void fn_806E5BC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, fn_806E5B60@ha
    stw r0, 0x24(r1)
    li r0, 0x0
    addi r6, r6, fn_806E5B60@l
    addi r5, r1, 0x10
    stw r4, 0x8(r1)
    lis r4, fn_806E5AF0@ha
    addi r4, r4, fn_806E5AF0@l
    stw r0, 0xc(r1)
    addi r0, r1, 0x8
    lwz r7, 0x0(r3)
    stw r3, 0x10(r1)
    stw r6, 0x14(r1)
    stw r0, 0x18(r1)
    lwz r3, 0x5c8(r7)
    bl fn_806D6720
    lwz r0, 0x24(r1)
    lwz r3, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806E5C20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r3, 0xc(r3)
    bl fn_806D7AC0
    li r31, 0x0
    stw r31, 0xc(r30)
    lwz r3, 0x8(r30)
    bl fn_806D7AC0
    stw r31, 0x8(r30)
    mr r3, r30
    bl fn_806D7AC0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806E5C80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r3, 0x8(r3)
    bl fn_806D7AC0
    li r31, 0x0
    stw r31, 0x8(r30)
    lwz r3, 0xc(r30)
    bl fn_806D7AC0
    stw r31, 0xc(r30)
    lwz r3, 0x10(r30)
    bl fn_806D7AC0
    stw r31, 0x10(r30)
    lwz r3, 0x14(r30)
    bl fn_806D7AC0
    stw r31, 0x14(r30)
    lwz r3, 0x38(r30)
    bl fn_806D5850
    stw r31, 0x38(r30)
    mr r3, r30
    bl fn_806D7AC0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806E5D00(void)
{
    nofralloc
    cmpwi r3, 0x0
    li r4, 0x0
    beq lbl_fn_806E5D00_00001B24
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806E5D00_00001B24
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806E5D00_00001B24
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806E5D00_00001B24
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806E5D00_00001B24
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806E5D00_00001B24
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806E5D00_00001B24
    li r4, 0x1
lbl_fn_806E5D00_00001B24:
    neg r0, r4
    or r0, r0, r4
    srwi r3, r0, 31
    blr
}

asm void fn_806E5D70(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    addi r11, r1, 0x240
    bl _savegpr_21
    li r29, 0x0
    stw r29, 0x8(r1)
    lis r28, lbl_807C3A78@ha
    mr r24, r3
    lwz r26, 0x0(r3)
    mr r25, r4
    addi r28, r28, lbl_807C3A78@l
    li r5, 0x1
    bl fn_806E8B60
    cmpwi r3, 0x0
    beq lbl_fn_806E5D70_00001B84
    li r3, 0x4
    b lbl_fn_806E5D70_00001D3C
lbl_fn_806E5D70_00001B84:
    mr r3, r25
    addi r4, r28, 0x20c
    addi r5, r1, 0x8
    addi r6, r1, 0x10
    li r7, 0x200
    bl fn_806E8D30
    cmpwi r3, 0x0
    bne lbl_fn_806E5D70_00001BCC
    mr r3, r24
    addi r5, r28, 0x10c
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r24
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E5D70_00001D3C
lbl_fn_806E5D70_00001BCC:
    addi r3, r1, 0x10
    bl fn_80684600
    mr r30, r3
    mr r3, r25
    addi r4, r28, 0x214
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806E5D70_00001C18
    mr r3, r24
    addi r5, r28, 0x10c
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r24
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E5D70_00001D3C
lbl_fn_806E5D70_00001C18:
    lwz r3, 0x8(r1)
    addi r22, r1, 0x10
    li r27, 0x0
    li r23, 0x1
    addi r0, r3, 0x6
    stw r0, 0x8(r1)
    b lbl_fn_806E5D70_00001D30
lbl_fn_806E5D70_00001C34:
    cmpwi r27, 0x0
    bne lbl_fn_806E5D70_00001C8C
    addi r4, r1, 0x10
    li r5, 0x0
    b lbl_fn_806E5D70_00001C58
    nop
lbl_fn_806E5D70_00001C4C:
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
    addi r5, r5, 0x1
lbl_fn_806E5D70_00001C58:
    cmplwi r5, 0x200
    bge lbl_fn_806E5D70_00001C78
    add r3, r31, r5
    lbz r0, 0x6(r3)
    extsb. r0, r0
    beq lbl_fn_806E5D70_00001C78
    cmpwi r0, 0x2c
    bne lbl_fn_806E5D70_00001C4C
lbl_fn_806E5D70_00001C78:
    lwz r0, 0x8(r1)
    stbx r29, r22, r5
    add r0, r0, r5
    stw r0, 0x8(r1)
    b lbl_fn_806E5D70_00001CD4
lbl_fn_806E5D70_00001C8C:
    mr r3, r25
    addi r4, r28, 0x21c
    addi r5, r1, 0x8
    addi r6, r1, 0x10
    li r7, 0x200
    bl fn_806E8D30
    cmpwi r3, 0x0
    bne lbl_fn_806E5D70_00001CD4
    mr r3, r24
    addi r5, r28, 0x10c
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r24
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E5D70_00001D3C
lbl_fn_806E5D70_00001CD4:
    addi r3, r1, 0x10
    bl fn_80684600
    mr r21, r3
    mr r3, r24
    mr r4, r21
    bl fn_806E5700
    cmpwi r3, 0x0
    bne lbl_fn_806E5D70_00001D08
    mr r3, r24
    addi r4, r28, 0x148
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E5D70_00001D3C
lbl_fn_806E5D70_00001D08:
    stw r23, 0x20(r3)
    mr r4, r21
    li r5, 0x1
    lwz r6, 0x5d4(r26)
    stw r6, 0x24(r3)
    mr r3, r24
    addi r0, r6, 0x1
    stw r0, 0x5d4(r26)
    bl fn_806DE290
    addi r27, r27, 0x1
lbl_fn_806E5D70_00001D30:
    cmpw r27, r30
    blt lbl_fn_806E5D70_00001C34
    li r3, 0x0
lbl_fn_806E5D70_00001D3C:
    addi r11, r1, 0x240
    bl _restgpr_21
    lwz r0, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_806E5F90(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lwz r29, 0x4(r4)
    lis r30, lbl_807C3C98@ha
    li r0, 0x1000
    mr r27, r3
    stw r0, 0xc(r29)
    mr r28, r4
    addi r30, r30, lbl_807C3C98@l
    li r3, 0x1001
    bl fn_806D7A90
    cmpwi r3, 0x0
    stw r3, 0x8(r29)
    bne lbl_fn_806E5F90_00001DB4
    mr r3, r27
    addi r4, r30, 0x40
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E5F90_00001F14
lbl_fn_806E5F90_00001DB4:
    li r3, 0x2
    li r4, 0x1
    li r5, 0x6
    bl fn_806D7AE0
    cmpwi r3, -0x1
    stw r3, 0x4(r29)
    bne lbl_fn_806E5F90_00001DF8
    mr r3, r27
    addi r5, r30, 0x50
    li r4, 0x5
    bl fn_806E91A0
    mr r3, r27
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E5F90_00001F14
lbl_fn_806E5F90_00001DF8:
    li r4, 0x0
    bl fn_806D8560
    cmpwi r3, 0x0
    bne lbl_fn_806E5F90_00001E30
    mr r3, r27
    addi r5, r30, 0x78
    li r4, 0x5
    bl fn_806E91A0
    mr r3, r27
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E5F90_00001F14
lbl_fn_806E5F90_00001E30:
    addi r3, r30, 0x0
    bl fn_806D8060
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806E5F90_00001E6C
    mr r3, r27
    addi r5, r30, 0xac
    li r4, 0x5
    bl fn_806E91A0
    mr r3, r27
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E5F90_00001F14
lbl_fn_806E5F90_00001E6C:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x8
    bl memset
    li r0, 0x2
    stb r0, 0x9(r1)
    li r3, 0x74cd
    lwz r4, 0xc(r31)
    lwz r4, 0x0(r4)
    lwz r0, 0x0(r4)
    stw r0, 0xc(r1)
    bl fn_806A4270
    sth r3, 0xa(r1)
    addi r4, r1, 0x8
    li r5, 0x8
    lwz r3, 0x4(r29)
    bl fn_806D7C40
    cmpwi r3, -0x1
    bne lbl_fn_806E5F90_00001F00
    lwz r3, 0x4(r29)
    bl fn_806D7F20
    cmpwi r3, -0x6
    beq lbl_fn_806E5F90_00001F00
    cmpwi r3, -0x1a
    beq lbl_fn_806E5F90_00001F00
    cmpwi r3, -0x4c
    beq lbl_fn_806E5F90_00001F00
    mr r3, r27
    addi r5, r30, 0xe0
    li r4, 0x5
    bl fn_806E91A0
    mr r3, r27
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E5F90_00001F14
lbl_fn_806E5F90_00001F00:
    li r0, 0x1
    stw r0, 0x14(r28)
    bl fn_806D8F30
    stw r3, 0x18c(r29)
    li r3, 0x0
lbl_fn_806E5F90_00001F14:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806E6160(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    li r3, 0x1a0
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_806E6160_00001F80
    lis r4, lbl_807C3CD8@ha
    mr r3, r28
    addi r4, r4, lbl_807C3CD8@l
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E6160_00001FF8
lbl_fn_806E6160_00001F80:
    li r4, 0x0
    li r5, 0x1a0
    bl memset
    stw r31, 0x0(r30)
    li r3, -0x1
    li r31, 0x0
    li r0, 0x1000
    stw r3, 0x4(r30)
    li r3, 0x1001
    stw r31, 0x8(r30)
    stw r31, 0x10(r30)
    stw r31, 0x14(r30)
    stw r31, 0xc(r30)
    stw r31, 0x20(r30)
    stw r31, 0x24(r30)
    stw r0, 0x1c(r30)
    bl fn_806D7A90
    cmpwi r3, 0x0
    stw r3, 0x18(r30)
    bne lbl_fn_806E6160_00001FE8
    lis r4, lbl_807C3CD8@ha
    mr r3, r28
    addi r4, r4, lbl_807C3CD8@l
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E6160_00001FF8
lbl_fn_806E6160_00001FE8:
    stw r31, 0x184(r30)
    li r3, 0x0
    stw r31, 0x188(r30)
    stw r30, 0x0(r29)
lbl_fn_806E6160_00001FF8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
