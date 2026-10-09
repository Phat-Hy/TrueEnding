#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSCancelAlarm(void);
extern void OSCreateAlarm(void);
extern void OSCreateThread(void);
extern void OSDisableInterrupts(void);
extern void OSJoinThread(void);
extern void OSRegisterVersion(void);
extern void OSRestoreInterrupts(void);
extern void OSResumeThread(void);
extern void _restgpr_21(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_21(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_805C00E0(void);
extern void fn_805C0290(void);
extern void fn_805C1E30(void);
extern void fn_805C1EF0(void);
extern void fn_805C2040(void);
extern void fn_805C2AA0(void);
extern void fn_805C3120(void);
extern void fn_805C32C0(void);
extern void fn_805C4FA0(void);
extern void fn_805C5110(void);
extern void fn_805C51A0(void);
extern void fn_805C5C50(void);
extern void fn_805C7C20(void);
extern void fn_805CC490(void);
extern void fn_805CC4B0(void);
extern void fn_805CC6A0(void);
extern void fn_805CC890(void);
extern void fn_805CCBA0(void);
extern void fn_805CD6C0(void);
extern void fn_805CD720(void);
extern void fn_805CE830(void);
extern void fn_805CE8B0(void);
extern void fn_805CEBC0(void);
extern void fn_805CEDE0(void);
extern void fn_805D4200(void);
extern void fn_805D9BE0(void);
extern void fn_805D9CF0(void);
extern void fn_805E0780(void);
extern void fn_805E0980(void);
extern void fn_805E09A0(void);
extern void fn_805E1470(void);
extern void fn_805E20E0(void);
extern void fn_805E21C0(void);
extern void fn_805E21E0(void);
extern void fn_805E3910(void);
extern void fn_805E3940(void);
extern void fn_805E3960(void);
extern void fn_805E3DF0(void);
extern void fn_805E3E80(void);
extern void fn_805E3F20(void);
extern void fn_805E4070(void);
extern void fn_805E4080(void);
extern void fn_805F2670(void);
extern void fn_805F27A0(void);
extern void fn_805F2880(void);
extern void fn_805F30F0(void);
extern void fn_805F8980(void);
extern void fn_806078D0(void);
extern void fn_80607900(void);
extern void fn_80607D70(void);
extern void fn_80609D00(void);
extern void fn_80612E80(void);
extern void fn_806134E0(void);
extern void fn_80613520(void);
extern void fn_80613BB0(void);
extern void fn_80614A80(void);
extern void fn_80615400(void);
extern void fn_80615D20(void);
extern void fn_80615D50(void);
extern void fn_80617200(void);
extern void fn_806173E0(void);
extern void fn_80617420(void);
extern void fn_80617460(void);
extern void fn_806174C0(void);
extern void fn_806176F0(void);
extern void fn_80617730(void);
extern void fn_806177B0(void);
extern void fn_80617880(void);
extern void fn_806179E0(void);
extern void fn_80617D50(void);
extern void fn_80617DD0(void);
extern void fn_80617E00(void);
extern void fn_80618350(void);
extern void fn_80618400(void);
extern void fn_80619920(void);
extern void fn_806199D0(void);
extern void fn_8061A0F0(void);
extern void fn_8061A100(void);
extern void fn_8061A110(void);
extern void fn_80625BF0(void);
extern void fn_80625C90(void);
extern void fn_806263E0(void);
extern void fn_8065F520(void);
extern void fn_806823B0(void);
extern void fn_80682428(void);
extern void fn_8068AEAC(void);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 lbl_80764160[];
extern u8 lbl_80764174[];
extern u8 lbl_80764198[];
extern u8 lbl_80797B40[];
extern u8 lbl_80797BE0[];
extern u8 lbl_80798018[];
extern u8 lbl_807980D0[];
extern u8 lbl_807980D4[];
extern u8 lbl_807980D8[];
extern u8 lbl_80798D28[];
extern u8 lbl_807CA130[];
extern u8 lbl_807CA138[];
extern u8 lbl_807CA148[];
extern u8 lbl_807CA150[];
extern u8 lbl_807CA1F8[];
extern u8 lbl_807CA210[];

/* Small data declarations */

/* Function declarations */
void fn_805C3330(void);
void fn_805C3570(void);
void fn_805C36B0(void);
void fn_805C38B0(void);
void fn_805C3940(void);
void fn_805C3950(void);
void fn_805C3B20(void);
void fn_805C3C40(void);
void fn_805C3C50(void);
void fn_805C3C60(void);
void fn_805C3C70(void);
void fn_805C3D90(void);
void fn_805C3E00(void);
void fn_805C3E30(void);
void fn_805C3E70(void);
void fn_805C3EA0(void);
void fn_805C3ED0(void);
void fn_805C3F10(void);
void fn_805C3F40(void);
void fn_805C3FA0(void);
void fn_805C3FB0(void);
void fn_805C3FE0(void);
void fn_805C41A0(void);
void fn_805C42B0(void);
void fn_805C4570(void);
void fn_805C45E0(void);
void fn_805C4630(void);
void fn_805C4680(void);
void fn_805C4690(void);

asm void fn_805C3330(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    li r31, 0x0
    stw r31, 0x8(r1)
    lis r30, lbl_807CA130@ha
lbl_fn_805C3330_00000020:
    lwz r3, lbl_807CA130@l(r30)
    addi r4, r1, 0x8
    li r5, 0x1
    addis r3, r3, 0x1
    addi r3, r3, 0x4680
    bl fn_805F27A0
    lwz r0, 0x8(r1)
    cmplwi r0, 0x1
    bne lbl_fn_805C3330_0000021C
    bl fn_805E3960
    bl fn_805E21E0
    bl fn_805E1470
    lwz r3, lbl_807CA130@l(r30)
    cmpwi r3, 0x0
    beq lbl_fn_805C3330_00000020
    addis r3, r3, 0x1
    lwz r27, 0x4334(r3)
    b lbl_fn_805C3330_00000130
lbl_fn_805C3330_00000068:
    lbz r0, 0x2e1c(r27)
    lwz r28, 0x2e20(r27)
    cmpwi r0, 0x0
    beq lbl_fn_805C3330_0000012C
    mr r3, r27
    bl fn_805E4070
    cmpwi r3, 0x0
    bne lbl_fn_805C3330_0000012C
    lwz r0, 0x418(r27)
    cmpwi r0, 0x0
    bne lbl_fn_805C3330_0000012C
    lwz r0, 0x2e28(r27)
    cmpwi r0, 0x4
    beq lbl_fn_805C3330_000000B0
    cmpwi r0, 0x17
    beq lbl_fn_805C3330_000000B0
    cmpwi r0, 0x19
    bne lbl_fn_805C3330_000000C0
lbl_fn_805C3330_000000B0:
    lwz r3, lbl_807CA130@l(r30)
    addis r29, r3, 0x1
    addi r29, r29, 0x433c
    b lbl_fn_805C3330_000000CC
lbl_fn_805C3330_000000C0:
    lwz r3, lbl_807CA130@l(r30)
    addis r29, r3, 0x1
    addi r29, r29, 0x4334
lbl_fn_805C3330_000000CC:
    mr r3, r27
    li r4, 0x0
    bl fn_805E3F20
    mr r3, r27
    bl fn_805E3E80
    stb r31, 0x2e1c(r27)
    lwz r3, 0x2e24(r27)
    cmpwi r3, 0x0
    bne lbl_fn_805C3330_000000FC
    lwz r0, 0x2e20(r27)
    stw r0, 0x0(r29)
    b lbl_fn_805C3330_00000104
lbl_fn_805C3330_000000FC:
    lwz r0, 0x2e20(r27)
    stw r0, 0x2e20(r3)
lbl_fn_805C3330_00000104:
    lwz r3, 0x2e20(r27)
    cmpwi r3, 0x0
    bne lbl_fn_805C3330_0000011C
    lwz r0, 0x2e24(r27)
    stw r0, 0x4(r29)
    b lbl_fn_805C3330_00000124
lbl_fn_805C3330_0000011C:
    lwz r0, 0x2e24(r27)
    stw r0, 0x2e24(r3)
lbl_fn_805C3330_00000124:
    stw r31, 0x2e20(r27)
    stw r31, 0x2e24(r27)
lbl_fn_805C3330_0000012C:
    mr r27, r28
lbl_fn_805C3330_00000130:
    cmpwi r27, 0x0
    bne lbl_fn_805C3330_00000068
    lwz r3, lbl_807CA130@l(r30)
    addis r3, r3, 0x1
    lwz r29, 0x433c(r3)
    b lbl_fn_805C3330_00000210
lbl_fn_805C3330_00000148:
    lbz r0, 0x2e1c(r29)
    lwz r28, 0x2e20(r29)
    cmpwi r0, 0x0
    beq lbl_fn_805C3330_0000020C
    mr r3, r29
    bl fn_805E4070
    cmpwi r3, 0x0
    bne lbl_fn_805C3330_0000020C
    lwz r0, 0x418(r29)
    cmpwi r0, 0x0
    bne lbl_fn_805C3330_0000020C
    lwz r0, 0x2e28(r29)
    cmpwi r0, 0x4
    beq lbl_fn_805C3330_00000190
    cmpwi r0, 0x17
    beq lbl_fn_805C3330_00000190
    cmpwi r0, 0x19
    bne lbl_fn_805C3330_000001A0
lbl_fn_805C3330_00000190:
    lwz r3, lbl_807CA130@l(r30)
    addis r27, r3, 0x1
    addi r27, r27, 0x433c
    b lbl_fn_805C3330_000001AC
lbl_fn_805C3330_000001A0:
    lwz r3, lbl_807CA130@l(r30)
    addis r27, r3, 0x1
    addi r27, r27, 0x4334
lbl_fn_805C3330_000001AC:
    mr r3, r29
    li r4, 0x0
    bl fn_805E3F20
    mr r3, r29
    bl fn_805E3E80
    stb r31, 0x2e1c(r29)
    lwz r3, 0x2e24(r29)
    cmpwi r3, 0x0
    bne lbl_fn_805C3330_000001DC
    lwz r0, 0x2e20(r29)
    stw r0, 0x0(r27)
    b lbl_fn_805C3330_000001E4
lbl_fn_805C3330_000001DC:
    lwz r0, 0x2e20(r29)
    stw r0, 0x2e20(r3)
lbl_fn_805C3330_000001E4:
    lwz r3, 0x2e20(r29)
    cmpwi r3, 0x0
    bne lbl_fn_805C3330_000001FC
    lwz r0, 0x2e24(r29)
    stw r0, 0x4(r27)
    b lbl_fn_805C3330_00000204
lbl_fn_805C3330_000001FC:
    lwz r0, 0x2e24(r29)
    stw r0, 0x2e24(r3)
lbl_fn_805C3330_00000204:
    stw r31, 0x2e20(r29)
    stw r31, 0x2e24(r29)
lbl_fn_805C3330_0000020C:
    mr r29, r28
lbl_fn_805C3330_00000210:
    cmpwi r29, 0x0
    bne lbl_fn_805C3330_00000148
    b lbl_fn_805C3330_00000020
lbl_fn_805C3330_0000021C:
    cmplwi r0, 0x8
    bne lbl_fn_805C3330_00000020
    addi r11, r1, 0x30
    li r3, 0x0
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805C3570(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r4, lbl_807CA130@ha
    stw r0, 0x34(r1)
    slwi r0, r3, 2
    addi r5, r1, 0x8
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r3
    lwz r6, lbl_807CA130@l(r4)
    lis r4, lbl_80798018@ha
    addi r4, r4, lbl_80798018@l
    addis r3, r6, 0x1
    lwzx r4, r4, r0
    addi r3, r3, 0x434c
    bl fn_80625C90
    cmpwi r3, 0x0
    beq lbl_fn_805C3570_000002A0
    addi r3, r1, 0x8
    bl fn_806263E0
    mr r30, r3
    b lbl_fn_805C3570_000002A4
lbl_fn_805C3570_000002A0:
    li r30, 0x0
lbl_fn_805C3570_000002A4:
    cmpwi r30, 0x0
    beq lbl_fn_805C3570_0000035C
    mr r3, r28
    bl fn_805C3120
    lis r31, lbl_807CA130@ha
    mr r29, r3
    lwz r5, lbl_807CA130@l(r31)
    mr r4, r30
    li r7, 0x0
    addis r6, r5, 0x1
    lwz r5, 0x46b4(r6)
    lwz r6, 0x46b8(r6)
    bl fn_805E3DF0
    mr r3, r29
    li r4, 0x1
    bl fn_805E3F20
    cmpwi r28, 0x4
    stw r28, 0x2e28(r29)
    beq lbl_fn_805C3570_00000300
    cmpwi r28, 0x17
    beq lbl_fn_805C3570_00000300
    cmpwi r28, 0x19
    bne lbl_fn_805C3570_00000314
lbl_fn_805C3570_00000300:
    lis r3, lbl_807CA130@ha
    lwz r3, lbl_807CA130@l(r3)
    addis r4, r3, 0x1
    addi r4, r4, 0x433c
    b lbl_fn_805C3570_00000320
lbl_fn_805C3570_00000314:
    lwz r3, lbl_807CA130@l(r31)
    addis r4, r3, 0x1
    addi r4, r4, 0x4334
lbl_fn_805C3570_00000320:
    lwz r3, 0x4(r4)
    cmpwi r3, 0x0
    bne lbl_fn_805C3570_00000344
    stw r29, 0x0(r4)
    li r0, 0x0
    stw r29, 0x4(r4)
    stw r0, 0x2e20(r29)
    stw r0, 0x2e24(r29)
    b lbl_fn_805C3570_0000035C
lbl_fn_805C3570_00000344:
    stw r29, 0x2e20(r3)
    li r0, 0x0
    lwz r3, 0x4(r4)
    stw r3, 0x2e24(r29)
    stw r0, 0x2e20(r29)
    stw r29, 0x4(r4)
lbl_fn_805C3570_0000035C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805C36B0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r6, 0x2
    stw r0, 0x34(r1)
    subi r0, r6, 0x7900
    cmplw r5, r0
    stw r31, 0x2c(r1)
    mr r31, r5
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    blt lbl_fn_805C36B0_00000558
    bl fn_806078D0
    cmpwi r3, 0x0
    bne lbl_fn_805C36B0_000003CC
    li r3, 0x0
    bl fn_80607900
    bl fn_80607D70
lbl_fn_805C36B0_000003CC:
    bl fn_805E0780
    bl fn_805E20E0
    bl fn_805E3910
    addis r4, r30, 0x1
    addi r5, r30, 0x5c58
    li r6, 0x0
    stb r6, 0x2e1c(r30)
    addi r0, r4, 0x4700
    mr r3, r29
    stw r6, 0x2e20(r30)
    stw r6, 0x2e24(r30)
    stb r6, 0x5c48(r30)
    stw r6, 0x5c4c(r30)
    stw r6, 0x5c50(r30)
    stb r6, 0x2e1c(r5)
    stw r6, 0x2e20(r5)
    stw r6, 0x2e24(r5)
    stb r6, -0x4760(r4)
    stw r6, -0x475c(r4)
    stw r6, -0x4758(r4)
    stb r6, -0x1934(r4)
    stw r6, -0x1930(r4)
    stw r6, -0x192c(r4)
    stb r6, 0x14f8(r4)
    stw r6, 0x14fc(r4)
    stw r6, 0x1500(r4)
    stb r6, 0x4324(r4)
    stw r6, 0x4328(r4)
    stw r6, 0x432c(r4)
    stw r6, 0x46b4(r4)
    stw r6, 0x46b8(r4)
    stw r0, 0x46b0(r4)
    stw r6, 0x4334(r4)
    stw r6, 0x4338(r4)
    stw r6, 0x433c(r4)
    stw r6, 0x4340(r4)
    stw r6, 0x4348(r4)
    addi r4, r4, 0x434c
    bl fn_80625BF0
    cmpwi r3, 0x0
    beq lbl_fn_805C36B0_00000558
    addis r3, r30, 0x1
    lis r4, lbl_80764160@ha
    addi r4, r4, lbl_80764160@l
    addi r5, r1, 0x14
    addi r3, r3, 0x434c
    bl fn_80625C90
    cmpwi r3, 0x0
    beq lbl_fn_805C36B0_00000558
    addi r3, r1, 0x14
    bl fn_806263E0
    addis r5, r30, 0x1
    lis r4, lbl_80764174@ha
    stw r3, 0x46b4(r5)
    mr r3, r5
    addi r4, r4, lbl_80764174@l
    addi r5, r1, 0x8
    addi r3, r3, 0x434c
    bl fn_80625C90
    cmpwi r3, 0x0
    beq lbl_fn_805C36B0_00000558
    addi r3, r1, 0x8
    bl fn_806263E0
    addis r4, r30, 0x1
    li r5, 0x4
    stw r3, 0x46b8(r4)
    mr r3, r4
    addi r3, r3, 0x4680
    addi r4, r4, 0x46a0
    bl fn_805F2670
    addis r3, r30, 0x1
    subis r7, r31, 0x1
    lwz r0, 0x46b0(r3)
    subi r6, r7, 0x4700
    lis r4, fn_805C3330@ha
    li r5, 0x0
    addi r4, r4, fn_805C3330@l
    add r6, r0, r6
    li r8, 0x4
    li r9, 0x0
    addi r3, r3, 0x4368
    subi r7, r7, 0x4700
    bl OSCreateThread
    cmpwi r3, 0x0
    beq lbl_fn_805C36B0_00000558
    lis r4, lbl_807CA130@ha
    addis r3, r30, 0x1
    stw r30, lbl_807CA130@l(r4)
    addi r3, r3, 0x4368
    bl OSResumeThread
    bl OSDisableInterrupts
    lis r4, fn_805C32C0@ha
    mr r31, r3
    addi r3, r4, fn_805C32C0@l
    bl fn_80609D00
    addis r4, r30, 0x1
    stw r3, 0x4348(r4)
    mr r3, r31
    bl OSRestoreInterrupts
lbl_fn_805C36B0_00000558:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805C38B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_807CA130@ha
    lwz r0, lbl_807CA130@l(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805C38B0_000005F4
    bl fn_805C3950
    lwz r3, lbl_807CA130@l(r31)
    addis r3, r3, 0x1
    lwz r3, 0x4348(r3)
    bl fn_80609D00
    lwz r3, lbl_807CA130@l(r31)
    li r4, 0x8
    li r5, 0x1
    addis r3, r3, 0x1
    addi r3, r3, 0x4680
    bl fn_805F2880
    lwz r3, lbl_807CA130@l(r31)
    li r4, 0x0
    addis r3, r3, 0x1
    addi r3, r3, 0x4368
    bl OSJoinThread
    bl fn_805E3940
    bl fn_805E21C0
    bl fn_805E0980
    li r0, 0x0
    stw r0, lbl_807CA130@l(r31)
lbl_fn_805C38B0_000005F4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C3940(void)
{
    nofralloc
    blr
}

asm void fn_805C3950(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r31, lbl_807CA130@ha
    lwz r0, lbl_807CA130@l(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805C3950_000007CC
    li r27, 0x0
    li r28, 0x0
    li r30, 0x0
lbl_fn_805C3950_00000650:
    lwz r3, lbl_807CA130@l(r31)
    add r26, r3, r28
    lbz r0, 0x2e1c(r26)
    cmpwi r0, 0x0
    beq lbl_fn_805C3950_000006F4
    lwz r0, 0x2e28(r26)
    cmpwi r0, 0x4
    beq lbl_fn_805C3950_00000680
    cmpwi r0, 0x17
    beq lbl_fn_805C3950_00000680
    cmpwi r0, 0x19
    bne lbl_fn_805C3950_0000068C
lbl_fn_805C3950_00000680:
    addis r29, r3, 0x1
    addi r29, r29, 0x433c
    b lbl_fn_805C3950_00000694
lbl_fn_805C3950_0000068C:
    addis r29, r3, 0x1
    addi r29, r29, 0x4334
lbl_fn_805C3950_00000694:
    mr r3, r26
    li r4, 0x0
    bl fn_805E3F20
    mr r3, r26
    bl fn_805E3E80
    stb r30, 0x2e1c(r26)
    lwz r3, 0x2e24(r26)
    cmpwi r3, 0x0
    bne lbl_fn_805C3950_000006C4
    lwz r0, 0x2e20(r26)
    stw r0, 0x0(r29)
    b lbl_fn_805C3950_000006CC
lbl_fn_805C3950_000006C4:
    lwz r0, 0x2e20(r26)
    stw r0, 0x2e20(r3)
lbl_fn_805C3950_000006CC:
    lwz r3, 0x2e20(r26)
    cmpwi r3, 0x0
    bne lbl_fn_805C3950_000006E4
    lwz r0, 0x2e24(r26)
    stw r0, 0x4(r29)
    b lbl_fn_805C3950_000006EC
lbl_fn_805C3950_000006E4:
    lwz r0, 0x2e24(r26)
    stw r0, 0x2e24(r3)
lbl_fn_805C3950_000006EC:
    stw r30, 0x2e20(r26)
    stw r30, 0x2e24(r26)
lbl_fn_805C3950_000006F4:
    addi r27, r27, 0x1
    addi r28, r28, 0x2e2c
    cmpwi r27, 0x4
    blt lbl_fn_805C3950_00000650
    li r26, 0x0
    li r28, 0x0
    li r31, 0x0
    lis r30, lbl_807CA130@ha
lbl_fn_805C3950_00000714:
    lwz r5, lbl_807CA130@l(r30)
    addis r4, r5, 0x1
    add r3, r4, r28
    lbz r0, -0x1934(r3)
    subi r27, r3, 0x4750
    cmpwi r0, 0x0
    beq lbl_fn_805C3950_000007BC
    lwz r0, 0x2e28(r27)
    cmpwi r0, 0x4
    beq lbl_fn_805C3950_0000074C
    cmpwi r0, 0x17
    beq lbl_fn_805C3950_0000074C
    cmpwi r0, 0x19
    bne lbl_fn_805C3950_00000758
lbl_fn_805C3950_0000074C:
    addis r29, r5, 0x1
    addi r29, r29, 0x433c
    b lbl_fn_805C3950_0000075C
lbl_fn_805C3950_00000758:
    addi r29, r4, 0x4334
lbl_fn_805C3950_0000075C:
    mr r3, r27
    li r4, 0x0
    bl fn_805E3F20
    mr r3, r27
    bl fn_805E3E80
    stb r31, 0x2e1c(r27)
    lwz r3, 0x2e24(r27)
    cmpwi r3, 0x0
    bne lbl_fn_805C3950_0000078C
    lwz r0, 0x2e20(r27)
    stw r0, 0x0(r29)
    b lbl_fn_805C3950_00000794
lbl_fn_805C3950_0000078C:
    lwz r0, 0x2e20(r27)
    stw r0, 0x2e20(r3)
lbl_fn_805C3950_00000794:
    lwz r3, 0x2e20(r27)
    cmpwi r3, 0x0
    bne lbl_fn_805C3950_000007AC
    lwz r0, 0x2e24(r27)
    stw r0, 0x4(r29)
    b lbl_fn_805C3950_000007B4
lbl_fn_805C3950_000007AC:
    lwz r0, 0x2e24(r27)
    stw r0, 0x2e24(r3)
lbl_fn_805C3950_000007B4:
    stw r31, 0x2e20(r27)
    stw r31, 0x2e24(r27)
lbl_fn_805C3950_000007BC:
    addi r26, r26, 0x1
    addi r28, r28, 0x2e2c
    cmpwi r26, 0x3
    blt lbl_fn_805C3950_00000714
lbl_fn_805C3950_000007CC:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C3B20(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807CA130@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80764160@ha
    addi r31, r31, lbl_80764160@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r0, lbl_807CA130@l(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805C3B20_000008F0
    lfs f0, 0x28(r31)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_805C3B20_0000083C
    li r29, -0x388
    b lbl_fn_805C3B20_00000860
lbl_fn_805C3B20_0000083C:
    bl fn_8068AEAC
    frsp f2, f1
    lfs f1, 0x30(r31)
    lfs f0, 0x2c(r31)
    fmuls f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r29, 0xc(r1)
lbl_fn_805C3B20_00000860:
    cmpwi r29, 0x3c
    ble lbl_fn_805C3B20_0000086C
    li r29, 0x3c
lbl_fn_805C3B20_0000086C:
    cmpwi r29, -0x388
    bge lbl_fn_805C3B20_00000878
    li r29, -0x388
lbl_fn_805C3B20_00000878:
    li r28, 0x0
    li r30, 0x0
    lis r31, lbl_807CA130@ha
lbl_fn_805C3B20_00000884:
    lwz r0, lbl_807CA130@l(r31)
    add r3, r0, r30
    lbz r0, 0x2e1c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805C3B20_000008A0
    mr r4, r29
    bl fn_805E4080
lbl_fn_805C3B20_000008A0:
    addi r28, r28, 0x1
    addi r30, r30, 0x2e2c
    cmpwi r28, 0x4
    blt lbl_fn_805C3B20_00000884
    li r28, 0x0
    li r30, 0x0
    lis r31, lbl_807CA130@ha
lbl_fn_805C3B20_000008BC:
    lwz r3, lbl_807CA130@l(r31)
    addis r0, r3, 0x1
    add r3, r0, r30
    subi r3, r3, 0x4750
    lbz r0, 0x2e1c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805C3B20_000008E0
    mr r4, r29
    bl fn_805E4080
lbl_fn_805C3B20_000008E0:
    addi r28, r28, 0x1
    addi r30, r30, 0x2e2c
    cmpwi r28, 0x3
    blt lbl_fn_805C3B20_000008BC
lbl_fn_805C3B20_000008F0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C3C40(void)
{
    nofralloc
    b fn_805E09A0
}

asm void fn_805C3C50(void)
{
    nofralloc
    lis r5, lbl_807980D4@ha
    mr r4, r3
    lwz r3, lbl_807980D4@l(r5)
    b fn_8061A0F0
}

asm void fn_805C3C60(void)
{
    nofralloc
    lis r5, lbl_807980D4@ha
    mr r4, r3
    lwz r3, lbl_807980D4@l(r5)
    b fn_8061A100
}

asm void fn_805C3C70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x3c(r3)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r0, 0x0
    stw r30, 0x8(r1)
    beq lbl_fn_805C3C70_0000096C
    li r4, 0x0
    b lbl_fn_805C3C70_00000980
lbl_fn_805C3C70_0000096C:
    lwz r0, 0x10(r3)
    li r4, 0x2
    cmpwi r0, 0x0
    beq lbl_fn_805C3C70_00000980
    li r4, 0x1
lbl_fn_805C3C70_00000980:
    cmpwi r4, 0x1
    bne lbl_fn_805C3C70_000009B8
    lwz r3, 0x10(r3)
    li r5, 0x0
    lwz r4, 0x2c(r31)
    bl fn_80619920
    lis r30, lbl_807CA138@ha
    mr r4, r3
    addi r3, r30, lbl_807CA138@l
    li r5, 0x20
    bl fn_8061A110
    lis r3, lbl_807980D4@ha
    addi r0, r30, lbl_807CA138@l
    stw r0, lbl_807980D4@l(r3)
lbl_fn_805C3C70_000009B8:
    lwz r5, 0x3c(r31)
    cmpwi r5, 0x0
    beq lbl_fn_805C3C70_000009CC
    li r3, 0x0
    b lbl_fn_805C3C70_000009E0
lbl_fn_805C3C70_000009CC:
    lwz r0, 0x10(r31)
    li r3, 0x2
    cmpwi r0, 0x0
    beq lbl_fn_805C3C70_000009E0
    li r3, 0x1
lbl_fn_805C3C70_000009E0:
    cmpwi r3, 0x0
    beq lbl_fn_805C3C70_000009FC
    cmpwi r3, 0x1
    beq lbl_fn_805C3C70_00000A14
    cmpwi r3, 0x2
    beq lbl_fn_805C3C70_00000A28
    b lbl_fn_805C3C70_00000A38
lbl_fn_805C3C70_000009FC:
    lis r4, lbl_807CA1F8@ha
    lwz r0, 0x3c(r31)
    lis r3, lbl_807980D4@ha
    stw r5, lbl_807CA1F8@l(r4)
    stw r0, lbl_807980D4@l(r3)
    b lbl_fn_805C3C70_00000A38
lbl_fn_805C3C70_00000A14:
    lis r4, lbl_807980D4@ha
    lis r3, lbl_807CA1F8@ha
    lwz r0, lbl_807980D4@l(r4)
    stw r0, lbl_807CA1F8@l(r3)
    b lbl_fn_805C3C70_00000A38
lbl_fn_805C3C70_00000A28:
    lis r4, lbl_807CA1F8@ha
    lis r3, lbl_807980D4@ha
    lwz r0, lbl_807CA1F8@l(r4)
    stw r0, lbl_807980D4@l(r3)
lbl_fn_805C3C70_00000A38:
    mr r3, r31
    bl fn_805C45E0
    bl fn_805C4680
    bl fn_805C4690
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C3D90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_805C4680
    lwz r31, 0x4(r3)
    bl fn_805C4630
    lwz r0, 0x3c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805C3D90_00000A90
    li r3, 0x0
    b lbl_fn_805C3D90_00000AA4
lbl_fn_805C3D90_00000A90:
    lwz r0, 0x10(r31)
    li r3, 0x2
    cmpwi r0, 0x0
    beq lbl_fn_805C3D90_00000AA4
    li r3, 0x1
lbl_fn_805C3D90_00000AA4:
    cmpwi r3, 0x1
    bne lbl_fn_805C3D90_00000ABC
    lis r3, lbl_807980D4@ha
    lwz r3, lbl_807980D4@l(r3)
    lwz r3, 0x4(r3)
    bl fn_806199D0
lbl_fn_805C3D90_00000ABC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C3E00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_807980D0@ha
    stw r0, 0x14(r1)
    lwz r3, lbl_807980D0@l(r3)
    bl OSRegisterVersion
    bl fn_805C4680
    bl fn_805C51A0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C3E30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_805C4680
    mr r4, r31
    bl fn_805C5C50
    bl fn_805C4680
    bl fn_805CC490
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C3E70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_805C4680
    bl fn_805C7C20
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C3EA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_805C4680
    bl fn_805CC490
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C3ED0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_805C4680
    mr r4, r31
    bl fn_805CC4B0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C3F10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_805C4680
    bl fn_805CC6A0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C3F40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_805C4680
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_805C36B0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C3FA0(void)
{
    nofralloc
    b fn_805C38B0
}

asm void fn_805C3FB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_805C4680
    bl fn_805CC890
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C3FE0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    li r3, 0x0
    stw r0, 0x44(r1)
    bl fn_80614A80
    addi r3, r1, 0x8
    bl fn_805F8980
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x0
    bl fn_80613BB0
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0x2
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x1
    bl fn_80617420
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x7
    li r4, 0x0
    li r5, 0x1
    li r6, 0x7
    li r7, 0x0
    bl fn_806177B0
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x5
    bl fn_80617D50
    li r3, 0x0
    bl fn_80617DD0
    li r3, 0x0
    li r4, 0x7
    li r5, 0x0
    bl fn_80617E00
    li r3, 0x0
    bl fn_80615400
    li r3, 0x0
    bl fn_80617200
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805C41A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    stw r4, 0x4(r3)
    stw r31, 0x8(r3)
    stw r31, 0x1d8(r3)
    stw r31, 0x1f0(r3)
    addi r3, r3, 0x1f8
    bl fn_805CE830
    li r4, 0x1
    li r0, -0x1
    li r5, 0x1e
    li r3, 0x2
    stw r31, 0x3f4(r28)
    li r29, 0x0
    li r30, 0x0
    stw r5, 0x3f8(r28)
    stw r31, 0x3fc(r28)
    stb r31, 0x401(r28)
    stb r31, 0x402(r28)
    stb r31, 0x403(r28)
    stb r4, 0x400(r28)
    stw r4, 0x5b8(r28)
    stw r3, 0x14(r28)
    stw r0, 0xb8(r28)
    stw r0, 0x18(r28)
    stw r31, 0x1c(r28)
    stw r31, 0x0(r28)
    stw r31, 0x68(r28)
    stb r31, 0x8e(r28)
    stw r31, 0x6c(r28)
    stw r31, 0x70(r28)
    stw r31, 0x74(r28)
    stw r31, 0x78(r28)
    stb r31, 0x8f(r28)
    stb r31, 0x90(r28)
    stb r31, 0x97(r28)
lbl_fn_805C41A0_00000F1C:
    add r3, r28, r30
    addi r3, r3, 0x408
    bl OSCreateAlarm
    add r3, r28, r30
    addi r3, r3, 0x4c8
    bl OSCreateAlarm
    addi r29, r29, 0x1
    addi r30, r30, 0x30
    cmpwi r29, 0x4
    blt lbl_fn_805C41A0_00000F1C
    addi r3, r28, 0x588
    bl OSCreateAlarm
    lis r3, lbl_807CA150@ha
    addi r3, r3, lbl_807CA150@l
    bl fn_805F30F0
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C42B0(void)
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
    stw r28, 0x10(r1)
    beq lbl_fn_805C42B0_00001218
    lwz r3, 0x1ec(r3)
    li r4, -0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1ec(r30)
    bl fn_805C3C60
    lwz r3, 0x1d8(r30)
    li r4, -0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1d8(r30)
    bl fn_805C3C60
    lwz r3, 0x4(r30)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805C42B0_0000103C
    li r28, 0x0
    li r29, 0x0
lbl_fn_805C42B0_00001004:
    add r3, r30, r29
    li r4, -0x1
    lwz r3, 0x1dc(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    add r3, r30, r29
    lwz r3, 0x1dc(r3)
    bl fn_805C3C60
    addi r28, r28, 0x1
    addi r29, r29, 0x4
    cmpwi r28, 0x4
    blt lbl_fn_805C42B0_00001004
lbl_fn_805C42B0_0000103C:
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_805C42B0_00001078
lbl_fn_805C42B0_00001048:
    add r3, r30, r29
    li r4, -0x1
    lwz r3, 0x260(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    add r3, r30, r29
    lwz r3, 0x260(r3)
    bl fn_805C3C60
    addi r29, r29, 0x4
    addi r28, r28, 0x1
lbl_fn_805C42B0_00001078:
    lwz r0, 0x10(r30)
    cmpw r28, r0
    blt lbl_fn_805C42B0_00001048
    li r28, 0x0
    li r29, 0x0
lbl_fn_805C42B0_0000108C:
    add r3, r30, r29
    li r4, -0x1
    lwz r3, 0x3b8(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    add r3, r30, r29
    lwz r3, 0x3b8(r3)
    bl fn_805C3C60
    addi r28, r28, 0x1
    addi r29, r29, 0x4
    cmpwi r28, 0xf
    blt lbl_fn_805C42B0_0000108C
    li r28, 0x0
    li r29, 0x0
lbl_fn_805C42B0_000010CC:
    add r3, r30, r29
    li r4, -0x1
    lwz r3, 0x290(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    add r3, r30, r29
    lwz r3, 0x290(r3)
    bl fn_805C3C60
    addi r28, r28, 0x1
    addi r29, r29, 0x4
    cmpwi r28, 0x4a
    blt lbl_fn_805C42B0_000010CC
    lwz r3, 0x1f4(r30)
    bl fn_805C3C60
    lwz r3, 0x1f0(r30)
    li r4, -0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1f0(r30)
    bl fn_805C3C60
    li r28, 0x0
    li r29, 0x0
lbl_fn_805C42B0_00001134:
    lbz r0, 0x94(r30)
    cmpwi r0, 0x0
    beq lbl_fn_805C42B0_0000114C
    add r3, r30, r29
    lwz r3, 0x24c(r3)
    bl fn_805C2040
lbl_fn_805C42B0_0000114C:
    add r3, r30, r29
    li r4, -0x1
    lwz r3, 0x24c(r3)
    bl fn_805C1EF0
    add r3, r30, r29
    lwz r3, 0x24c(r3)
    bl fn_805C3C60
    addi r28, r28, 0x1
    addi r29, r29, 0x4
    cmpwi r28, 0x4
    blt lbl_fn_805C42B0_00001134
    lwz r3, 0x25c(r30)
    li r4, -0x1
    lwz r12, 0x1f0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lwz r3, 0x25c(r30)
    bl fn_805C3C60
    lbz r0, 0x94(r30)
    li r3, 0x0
    stw r3, 0x25c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_805C42B0_000011B4
    lwz r3, 0x1ac(r30)
    bl fn_8065F520
lbl_fn_805C42B0_000011B4:
    lwz r3, 0xb0(r30)
    bl fn_805C3C60
    lwz r3, 0xb4(r30)
    bl fn_805C3C60
    li r28, 0x0
    li r29, 0x0
lbl_fn_805C42B0_000011CC:
    add r3, r30, r29
    addi r3, r3, 0x408
    bl OSCancelAlarm
    add r3, r30, r29
    addi r3, r3, 0x4c8
    bl OSCancelAlarm
    addi r28, r28, 0x1
    addi r29, r29, 0x30
    cmpwi r28, 0x4
    blt lbl_fn_805C42B0_000011CC
    addi r3, r30, 0x588
    bl OSCancelAlarm
    addi r3, r30, 0x1f8
    li r4, -0x1
    bl fn_805CE8B0
    cmpwi r31, 0x0
    ble lbl_fn_805C42B0_00001218
    mr r3, r30
    bl dtor_80084684
lbl_fn_805C42B0_00001218:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C4570(void)
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
    beq lbl_fn_805C4570_00001290
    addic. r3, r3, 0x24
    beq lbl_fn_805C4570_00001274
    li r4, 0x0
    bl fn_805D9BE0
lbl_fn_805C4570_00001274:
    mr r3, r30
    li r4, 0x0
    bl fn_805D4200
    cmpwi r31, 0x0
    ble lbl_fn_805C4570_00001290
    mr r3, r30
    bl dtor_80084684
lbl_fn_805C4570_00001290:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C45E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x740
    bl fn_805C3C50
    cmpwi r3, 0x0
    beq lbl_fn_805C45E0_000012E8
    beq lbl_fn_805C45E0_000012E0
    mr r4, r31
    bl fn_805C41A0
lbl_fn_805C45E0_000012E0:
    lis r4, lbl_807CA148@ha
    stw r3, lbl_807CA148@l(r4)
lbl_fn_805C45E0_000012E8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C4630(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, -0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_807CA148@ha
    lwz r3, lbl_807CA148@l(r31)
    bl fn_805C42B0
    lwz r3, lbl_807CA148@l(r31)
    bl fn_805C3C60
    li r0, 0x0
    stw r0, lbl_807CA148@l(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C4680(void)
{
    nofralloc
    lis r3, lbl_807CA148@ha
    lwz r3, lbl_807CA148@l(r3)
    blr
}

asm void fn_805C4690(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0xd0
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    bl _savegpr_21
    li r0, 0x0
    lis r27, lbl_80764198@ha
    lis r28, lbl_807980D8@ha
    stb r0, 0x94(r3)
    mr r31, r3
    addi r27, r27, lbl_80764198@l
    stb r0, 0x95(r3)
    addi r28, r28, lbl_807980D8@l
    stb r0, 0x96(r3)
    stw r0, 0x1ac(r3)
    bl fn_805C4FA0
    mr r3, r31
    bl fn_805C5110
    li r3, 0xb0
    bl fn_805C3C50
    cmpwi r3, 0x0
    beq lbl_fn_805C4690_000013CC
    beq lbl_fn_805C4690_000013C8
    bl fn_805CD6C0
lbl_fn_805C4690_000013C8:
    stw r3, 0x1ec(r31)
lbl_fn_805C4690_000013CC:
    lwz r4, 0x4(r31)
    addi r5, r28, 0xb30
    lwz r3, 0x1ec(r31)
    lwz r4, 0x0(r4)
    bl fn_805CD720
    lwz r3, 0x4(r31)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805C4690_00001468
    mr r21, r31
    addi r22, r28, 0x40
    li r23, 0x0
lbl_fn_805C4690_000013FC:
    li r3, 0x24
    bl fn_805C3C50
    cmpwi r3, 0x0
    beq lbl_fn_805C4690_00001418
    beq lbl_fn_805C4690_00001414
    bl fn_805CEDE0
lbl_fn_805C4690_00001414:
    stw r3, 0x1dc(r21)
lbl_fn_805C4690_00001418:
    lwz r3, 0x1ec(r31)
    li r4, 0x0
    lwz r5, 0x0(r22)
    li r6, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r4, r3
    lwz r3, 0x1dc(r21)
    lwz r5, 0x1ec(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r23, r23, 0x1
    addi r22, r22, 0x4
    cmpwi r23, 0x4
    addi r21, r21, 0x4
    blt lbl_fn_805C4690_000013FC
lbl_fn_805C4690_00001468:
    li r3, 0x24
    bl fn_805C3C50
    cmpwi r3, 0x0
    beq lbl_fn_805C4690_00001484
    beq lbl_fn_805C4690_00001480
    bl fn_805CEDE0
lbl_fn_805C4690_00001480:
    stw r3, 0x1d8(r31)
lbl_fn_805C4690_00001484:
    lwz r3, 0x1ec(r31)
    li r4, 0x0
    lwz r5, 0xb0(r31)
    li r6, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r4, r3
    lwz r3, 0x1d8(r31)
    lwz r5, 0x1ec(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1d8(r31)
    lfs f31, 0x2dc(r27)
    lwz r3, 0x10(r3)
    lwz r24, 0x14(r3)
    addi r21, r3, 0x14
    b lbl_fn_805C4690_0000152C
lbl_fn_805C4690_000014D8:
    addi r22, r24, 0xb0
    addi r4, r28, 0xb38
    mr r3, r22
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_805C4690_00001518
    mr r3, r22
    addi r4, r28, 0xb40
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_805C4690_00001518
    mr r3, r22
    addi r4, r28, 0xb48
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_805C4690_00001528
lbl_fn_805C4690_00001518:
    stfs f31, 0x40(r24)
    stfs f31, 0x18(r1)
    stfs f31, 0x1c(r1)
    stfs f31, 0x44(r24)
lbl_fn_805C4690_00001528:
    lwz r24, 0x0(r24)
lbl_fn_805C4690_0000152C:
    cmplw r24, r21
    bne lbl_fn_805C4690_000014D8
    lwz r3, 0x1d8(r31)
    addi r4, r28, 0xb50
    lfs f1, 0x2dc(r27)
    li r5, 0x1
    lwz r3, 0x10(r3)
    lfs f0, 0x2e0(r27)
    lwz r12, 0x0(r3)
    stfs f1, 0x10(r1)
    lwz r12, 0x3c(r12)
    stfs f0, 0x14(r1)
    mtctr r12
    bctrl
    lfs f0, 0x10(r1)
    addi r4, r28, 0xb5c
    stfs f0, 0x44(r3)
    li r5, 0x1
    lfs f0, 0x14(r1)
    stfs f0, 0x48(r3)
    lfs f1, 0x2dc(r27)
    lwz r3, 0x1d8(r31)
    lfs f0, 0x2e0(r27)
    lwz r3, 0x10(r3)
    stfs f1, 0x8(r1)
    lwz r12, 0x0(r3)
    stfs f0, 0xc(r1)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lfs f0, 0x8(r1)
    mr r26, r31
    stfs f0, 0x44(r3)
    addi r25, r27, 0x8
    lfs f0, 0xc(r1)
    addi r30, r28, 0x1ac
    stfs f0, 0x48(r3)
    addi r29, r28, 0x150
    lfd f31, 0x2e8(r27)
    li r24, 0x0
    lis r21, 0x4330
    b lbl_fn_805C4690_000016FC
lbl_fn_805C4690_000015D4:
    lwz r4, 0xb4(r31)
    addi r3, r1, 0x58
    bl strcpy
    lwz r0, 0x4(r25)
    addi r3, r1, 0x58
    slwi r0, r0, 2
    lwzx r4, r30, r0
    bl fn_806823B0
    lwz r3, 0x1ec(r31)
    addi r5, r1, 0x58
    li r4, 0x0
    li r6, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r22, r3
    li r3, 0x28
    bl fn_805C3C50
    cmpwi r3, 0x0
    beq lbl_fn_805C4690_00001634
    beq lbl_fn_805C4690_00001630
    bl fn_805C0290
lbl_fn_805C4690_00001630:
    stw r3, 0x260(r26)
lbl_fn_805C4690_00001634:
    lwz r3, 0x1d8(r31)
    mr r4, r22
    lwz r5, 0x1ec(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r4, 0x260(r26)
    lwz r0, 0x0(r25)
    stw r3, 0x24(r4)
    slwi r0, r0, 2
    lwz r3, 0x1d8(r31)
    lwzx r4, r29, r0
    lwz r3, 0x14(r3)
    bl fn_805CEBC0
    lwz r4, 0x260(r26)
    stw r3, 0x20(r4)
    lwz r3, 0x260(r26)
    lwz r3, 0x20(r3)
    lwz r23, 0x10(r3)
    addi r22, r3, 0x10
    b lbl_fn_805C4690_000016B0
lbl_fn_805C4690_0000168C:
    lwz r3, 0x8(r23)
    li r5, 0x0
    lwz r4, 0x260(r26)
    lwz r12, 0x0(r3)
    lwz r4, 0x24(r4)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lwz r23, 0x0(r23)
lbl_fn_805C4690_000016B0:
    cmplw r23, r22
    bne lbl_fn_805C4690_0000168C
    lwz r3, 0x260(r26)
    lwz r3, 0x24(r3)
    bl fn_805CCBA0
    clrlwi r0, r3, 16
    stw r0, 0x9c(r1)
    lwz r5, 0x4(r31)
    li r4, 0x0
    stw r21, 0x98(r1)
    lwz r3, 0x260(r26)
    lfd f0, 0x98(r1)
    lfs f2, 0x2e4(r27)
    fsubs f1, f0, f31
    lfs f3, 0x30(r5)
    bl fn_805C00E0
    addi r25, r25, 0x8
    addi r26, r26, 0x4
    addi r24, r24, 0x1
lbl_fn_805C4690_000016FC:
    lwz r0, 0x10(r31)
    cmpw r24, r0
    blt lbl_fn_805C4690_000015D4
    lfd f31, 0x2e8(r27)
    mr r25, r31
    addi r26, r27, 0x68
    addi r29, r28, 0x610
    addi r30, r28, 0x838
    li r24, 0x0
    lis r21, 0x4330
lbl_fn_805C4690_00001724:
    lwz r4, 0xb4(r31)
    addi r3, r1, 0x58
    bl strcpy
    lwz r0, 0x4(r26)
    addi r3, r1, 0x58
    slwi r0, r0, 2
    lwzx r4, r29, r0
    bl fn_806823B0
    lwz r3, 0x1ec(r31)
    addi r5, r1, 0x58
    li r4, 0x0
    li r6, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r22, r3
    li r3, 0x28
    bl fn_805C3C50
    cmpwi r3, 0x0
    beq lbl_fn_805C4690_00001784
    beq lbl_fn_805C4690_00001780
    bl fn_805C0290
lbl_fn_805C4690_00001780:
    stw r3, 0x290(r25)
lbl_fn_805C4690_00001784:
    lwz r3, 0x1d8(r31)
    mr r4, r22
    lwz r5, 0x1ec(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r4, 0x290(r25)
    lwz r0, 0x0(r26)
    stw r3, 0x24(r4)
    slwi r0, r0, 2
    lwz r3, 0x1d8(r31)
    lwzx r4, r30, r0
    lwz r3, 0x14(r3)
    bl fn_805CEBC0
    lwz r4, 0x290(r25)
    stw r3, 0x20(r4)
    lwz r3, 0x290(r25)
    lwz r3, 0x20(r3)
    lwz r22, 0x10(r3)
    addi r23, r3, 0x10
    b lbl_fn_805C4690_00001800
lbl_fn_805C4690_000017DC:
    lwz r3, 0x8(r22)
    li r5, 0x0
    lwz r4, 0x290(r25)
    lwz r12, 0x0(r3)
    lwz r4, 0x24(r4)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lwz r22, 0x0(r22)
lbl_fn_805C4690_00001800:
    cmplw r22, r23
    bne lbl_fn_805C4690_000017DC
    lwz r3, 0x290(r25)
    lwz r3, 0x24(r3)
    bl fn_805CCBA0
    clrlwi r0, r3, 16
    stw r0, 0x9c(r1)
    lwz r5, 0x4(r31)
    li r4, 0x0
    stw r21, 0x98(r1)
    lwz r3, 0x290(r25)
    lfd f0, 0x98(r1)
    lfs f2, 0x2e4(r27)
    fsubs f1, f0, f31
    lfs f3, 0x30(r5)
    bl fn_805C00E0
    addi r24, r24, 0x1
    addi r25, r25, 0x4
    cmpwi r24, 0x4a
    addi r26, r26, 0x8
    blt lbl_fn_805C4690_00001724
    lfd f31, 0x2e8(r27)
    mr r30, r31
    addi r29, r28, 0x2f0
    addi r26, r28, 0x400
    li r25, 0x0
    lis r24, 0x4330
lbl_fn_805C4690_0000186C:
    lwz r4, 0xb4(r31)
    addi r3, r1, 0x58
    bl strcpy
    lwz r4, 0x0(r29)
    addi r3, r1, 0x58
    bl fn_806823B0
    lwz r3, 0x1ec(r31)
    addi r5, r1, 0x58
    li r4, 0x0
    li r6, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r21, r3
    li r3, 0x28
    bl fn_805C3C50
    cmpwi r3, 0x0
    beq lbl_fn_805C4690_000018C4
    beq lbl_fn_805C4690_000018C0
    bl fn_805C0290
lbl_fn_805C4690_000018C0:
    stw r3, 0x3b8(r30)
lbl_fn_805C4690_000018C4:
    lwz r3, 0x1d8(r31)
    mr r4, r21
    lwz r5, 0x1ec(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r4, 0x3b8(r30)
    stw r3, 0x24(r4)
    lwz r3, 0x1d8(r31)
    lwz r4, 0x0(r26)
    lwz r3, 0x14(r3)
    bl fn_805CEBC0
    lwz r4, 0x3b8(r30)
    stw r3, 0x20(r4)
    lwz r3, 0x3b8(r30)
    lwz r3, 0x20(r3)
    lwz r22, 0x10(r3)
    addi r23, r3, 0x10
    b lbl_fn_805C4690_00001938
lbl_fn_805C4690_00001914:
    lwz r3, 0x8(r22)
    li r5, 0x0
    lwz r4, 0x3b8(r30)
    lwz r12, 0x0(r3)
    lwz r4, 0x24(r4)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lwz r22, 0x0(r22)
lbl_fn_805C4690_00001938:
    cmplw r22, r23
    bne lbl_fn_805C4690_00001914
    lwz r3, 0x3b8(r30)
    lwz r3, 0x24(r3)
    bl fn_805CCBA0
    clrlwi r0, r3, 16
    stw r0, 0x9c(r1)
    lwz r5, 0x4(r31)
    li r4, 0x0
    stw r24, 0x98(r1)
    lwz r3, 0x3b8(r30)
    lfd f0, 0x98(r1)
    lfs f2, 0x2e4(r27)
    fsubs f1, f0, f31
    lfs f3, 0x30(r5)
    bl fn_805C00E0
    addi r25, r25, 0x1
    addi r30, r30, 0x4
    cmpwi r25, 0xf
    addi r26, r26, 0x4
    addi r29, r29, 0x4
    blt lbl_fn_805C4690_0000186C
    li r3, 0xc
    bl fn_805C3C50
    cmpwi r3, 0x0
    beq lbl_fn_805C4690_000019B8
    beq lbl_fn_805C4690_000019B4
    lis r4, lbl_80798D28@ha
    addi r4, r4, lbl_80798D28@l
    stw r4, 0x0(r3)
    stw r31, 0x8(r3)
lbl_fn_805C4690_000019B4:
    stw r3, 0x1f4(r31)
lbl_fn_805C4690_000019B8:
    li r3, 0x2c
    bl fn_805C3C50
    cmpwi r3, 0x0
    mr r21, r3
    beq lbl_fn_805C4690_00001A40
    beq lbl_fn_805C4690_00001A3C
    lis r4, lbl_807980D4@ha
    lwz r0, 0x1f4(r31)
    lwz r5, lbl_807980D4@l(r4)
    lis r4, lbl_80797BE0@ha
    addi r4, r4, lbl_80797BE0@l
    cmpwi r0, 0x0
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    stw r5, 0x14(r3)
    beq lbl_fn_805C4690_00001A10
    mr r3, r0
    mr r4, r21
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_805C4690_00001A10:
    addi r3, r21, 0x8
    li r4, 0x8
    bl fn_805D9CF0
    lis r3, lbl_80797B40@ha
    li r0, 0x0
    addi r3, r3, lbl_80797B40@l
    stw r3, 0x0(r21)
    addi r3, r21, 0x18
    li r4, 0x8
    stw r0, 0x24(r21)
    bl fn_805D9CF0
lbl_fn_805C4690_00001A3C:
    stw r21, 0x1f0(r31)
lbl_fn_805C4690_00001A40:
    lwz r3, 0x1f0(r31)
    lwz r4, 0x1d8(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    li r3, 0x1f8
    bl fn_805C3C50
    cmpwi r3, 0x0
    beq lbl_fn_805C4690_00001A7C
    beq lbl_fn_805C4690_00001A78
    lwz r4, 0x4(r31)
    lwz r4, 0x4(r4)
    bl fn_805C2AA0
lbl_fn_805C4690_00001A78:
    stw r3, 0x25c(r31)
lbl_fn_805C4690_00001A7C:
    mr r21, r31
    li r22, 0x0
lbl_fn_805C4690_00001A84:
    li r3, 0x48
    bl fn_805C3C50
    cmpwi r3, 0x0
    beq lbl_fn_805C4690_00001AA8
    beq lbl_fn_805C4690_00001AA4
    lwz r5, 0x25c(r31)
    mr r4, r22
    bl fn_805C1E30
lbl_fn_805C4690_00001AA4:
    stw r3, 0x24c(r21)
lbl_fn_805C4690_00001AA8:
    addi r22, r22, 0x1
    addi r21, r21, 0x4
    cmpwi r22, 0x4
    blt lbl_fn_805C4690_00001A84
    lwz r3, 0x1f0(r31)
    addi r4, r31, 0x1f8
    lwz r12, 0x0(r3)
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    lwz r4, 0x4(r31)
    addi r3, r1, 0x28
    lfs f1, 0x2e0(r27)
    lfs f0, 0x34(r4)
    lbz r4, 0x8f(r31)
    fdivs f0, f1, f0
    lbz r0, 0x248(r31)
    rlwimi r0, r4, 5, 26, 26
    stfs f1, 0x24(r1)
    stfs f1, 0x240(r31)
    stb r0, 0x248(r31)
    stfs f0, 0x20(r1)
    stfs f0, 0x23c(r31)
    bl fn_805F8980
    lwz r3, 0x28(r1)
    lis r27, lbl_807CA210@ha
    lwz r0, 0x2c(r1)
    addi r29, r28, 0x9e4
    stw r0, 0x200(r31)
    addi r27, r27, lbl_807CA210@l
    li r28, 0x0
    li r30, 0x0
    stw r3, 0x1fc(r31)
    lwz r3, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r0, 0x208(r31)
    stw r3, 0x204(r31)
    lwz r3, 0x38(r1)
    lwz r0, 0x3c(r1)
    stw r0, 0x210(r31)
    stw r3, 0x20c(r31)
    lwz r3, 0x40(r1)
    lwz r0, 0x44(r1)
    stw r0, 0x218(r31)
    stw r3, 0x214(r31)
    lwz r3, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r0, 0x220(r31)
    stw r3, 0x21c(r31)
    lwz r3, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r0, 0x228(r31)
    stw r3, 0x224(r31)
lbl_fn_805C4690_00001B7C:
    lwz r3, 0x1d8(r31)
    li r5, 0x1
    lwz r4, 0x0(r29)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r3)
    mr r21, r3
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_805C4690_00001BCC
    nop
lbl_fn_805C4690_00001BB8:
    cmplw r3, r27
    bne lbl_fn_805C4690_00001BC8
    li r0, 0x1
    b lbl_fn_805C4690_00001BD8
lbl_fn_805C4690_00001BC8:
    lwz r3, 0x0(r3)
lbl_fn_805C4690_00001BCC:
    cmpwi r3, 0x0
    bne lbl_fn_805C4690_00001BB8
    li r0, 0x0
lbl_fn_805C4690_00001BD8:
    cmpwi r0, 0x0
    beq lbl_fn_805C4690_00001BE4
    b lbl_fn_805C4690_00001BE8
lbl_fn_805C4690_00001BE4:
    li r21, 0x0
lbl_fn_805C4690_00001BE8:
    lwz r3, 0x4(r31)
    add r0, r30, r31
    li r5, 0x0
    lwz r3, 0x1c(r3)
    mulli r3, r3, 0x18
    add r3, r3, r0
    lwz r4, 0xbc(r3)
    mr r3, r4
lbl_fn_805C4690_00001C08:
    lhz r0, 0x0(r3)
    cmplwi r0, 0x22
    beq lbl_fn_805C4690_00001C20
    addi r3, r3, 0x2
    addi r5, r5, 0x1
    b lbl_fn_805C4690_00001C08
lbl_fn_805C4690_00001C20:
    lwz r12, 0x0(r21)
    clrlwi r6, r5, 16
    mr r3, r21
    li r5, 0x0
    lwz r12, 0x70(r12)
    mtctr r12
    bctrl
    addi r28, r28, 0x1
    addi r30, r30, 0x4
    cmpwi r28, 0x3
    addi r29, r29, 0x4
    blt lbl_fn_805C4690_00001B7C
    addi r11, r1, 0xd0
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    bl _restgpr_21
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}
