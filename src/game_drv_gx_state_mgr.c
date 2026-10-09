#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSCancelAlarm(void);
extern void OSCreateAlarm(void);
extern void OSDisableInterrupts(void);
extern void OSGetAlarmUserData(void);
extern void OSGetTime(void);
extern void OSRestoreInterrupts(void);
extern void OSSetAlarm(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_805E3E80(void);
extern void fn_805E3F20(void);
extern void fn_805EC3B0(void);
extern void fn_805EC870(void);
extern void fn_805F26D0(void);
extern void fn_80625910(void);
extern void fn_80625BF0(void);
extern void fn_80625F40(void);
extern void fn_806263E0(void);
extern void fn_80626400(void);
extern void fn_80626410(void);
extern void fn_8065F550(void);
extern void fn_80660CF0(void);
extern void fn_80660E10(void);
extern void fn_80660EA0(void);
extern void fn_806610E0(void);
extern void fn_80661300(void);
extern void fn_80661B10(void);
extern void fn_80661B60(void);
extern void fn_80663330(void);
extern void fn_806633C0(void);
extern void fn_80666840(void);
extern void fn_80666850(void);

/* External data declarations */
extern u8 lbl_80764150[];
extern u8 lbl_80764154[];
extern u8 lbl_80764158[];
extern u8 lbl_8076415C[];
extern u8 lbl_80797D08[];
extern u8 lbl_807C9F88[];
extern u8 lbl_807CA050[];
extern u8 lbl_807CA110[];
extern u8 lbl_807CA120[];
extern u8 lbl_807CA128[];
extern u8 lbl_807CA130[];

/* Small data declarations */

/* Function declarations */
void fn_805C1900(void);
void fn_805C1A00(void);
void fn_805C1A10(void);
void fn_805C1A20(void);
void fn_805C1B00(void);
void fn_805C1B10(void);
void fn_805C1B20(void);
void fn_805C1B30(void);
void fn_805C1B40(void);
void fn_805C1B50(void);
void fn_805C1B60(void);
void fn_805C1B90(void);
void fn_805C1BA0(void);
void fn_805C1BB0(void);
void fn_805C1BC0(void);
void fn_805C1CC0(void);
void fn_805C1DC0(void);
void fn_805C1E30(void);
void fn_805C1EF0(void);
void fn_805C1F90(void);
void fn_805C2040(void);
void fn_805C20A0(void);
void fn_805C2250(void);
void fn_805C2270(void);
void fn_805C2290(void);
void fn_805C22A0(void);
void fn_805C22B0(void);
void fn_805C22C0(void);
void fn_805C2360(void);
void fn_805C23C0(void);
void fn_805C23D0(void);
void fn_805C2610(void);
void fn_805C2620(void);
void fn_805C2630(void);
void fn_805C26A0(void);
void fn_805C26D0(void);
void fn_805C2770(void);
void fn_805C27B0(void);
void fn_805C27E0(void);
void fn_805C2800(void);
void fn_805C2A70(void);
void fn_805C2AA0(void);
void fn_805C2B60(void);
void fn_805C2C10(void);
void fn_805C2CF0(void);
void fn_805C2D50(void);
void fn_805C2D80(void);
void fn_805C2E60(void);
void fn_805C2E90(void);
void fn_805C2F80(void);
void fn_805C3010(void);
void fn_805C30B0(void);
void fn_805C30D0(void);
void fn_805C3100(void);
void fn_805C3120(void);
void fn_805C32C0(void);

asm void fn_805C1900(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lbz r0, 0xcf(r3)
    clrlwi. r0, r0, 31
    bne lbl_fn_805C1900_00000024
    li r3, 0x0
    b lbl_fn_805C1900_000000EC
lbl_fn_805C1900_00000024:
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    bne lbl_fn_805C1900_00000038
    li r3, 0x1
    b lbl_fn_805C1900_000000EC
lbl_fn_805C1900_00000038:
    lbz r0, 0xcf(r3)
    clrlwi. r0, r0, 31
    bne lbl_fn_805C1900_0000004C
    li r3, 0x0
    b lbl_fn_805C1900_000000EC
lbl_fn_805C1900_0000004C:
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    bne lbl_fn_805C1900_00000060
    li r3, 0x1
    b lbl_fn_805C1900_000000EC
lbl_fn_805C1900_00000060:
    lbz r0, 0xcf(r3)
    clrlwi. r0, r0, 31
    bne lbl_fn_805C1900_00000074
    li r3, 0x0
    b lbl_fn_805C1900_000000EC
lbl_fn_805C1900_00000074:
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    bne lbl_fn_805C1900_00000088
    li r3, 0x1
    b lbl_fn_805C1900_000000EC
lbl_fn_805C1900_00000088:
    lbz r0, 0xcf(r3)
    clrlwi. r0, r0, 31
    bne lbl_fn_805C1900_0000009C
    li r3, 0x0
    b lbl_fn_805C1900_000000EC
lbl_fn_805C1900_0000009C:
    lwz r31, 0xc(r3)
    cmpwi r31, 0x0
    bne lbl_fn_805C1900_000000B0
    li r3, 0x1
    b lbl_fn_805C1900_000000EC
lbl_fn_805C1900_000000B0:
    mr r3, r31
    bl fn_805C1A00
    cmpwi r3, 0x0
    bne lbl_fn_805C1900_000000C8
    li r3, 0x0
    b lbl_fn_805C1900_000000EC
lbl_fn_805C1900_000000C8:
    mr r3, r31
    bl fn_805C1A10
    cmpwi r3, 0x0
    bne lbl_fn_805C1900_000000E0
    li r3, 0x1
    b lbl_fn_805C1900_000000EC
lbl_fn_805C1900_000000E0:
    mr r3, r31
    bl fn_805C1A10
    bl fn_805C1900
lbl_fn_805C1900_000000EC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C1A00(void)
{
    nofralloc
    lbz r0, 0xcf(r3)
    clrlwi r3, r0, 31
    blr
}

asm void fn_805C1A10(void)
{
    nofralloc
    lwz r3, 0xc(r3)
    blr
}

asm void fn_805C1A20(void)
{
    nofralloc
    lwz r3, 0x2c(r3)
    lbz r0, 0xcf(r3)
    clrlwi. r0, r0, 31
    bne lbl_fn_805C1A20_00000138
    li r3, 0x0
    blr
lbl_fn_805C1A20_00000138:
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    bne lbl_fn_805C1A20_0000014C
    li r3, 0x1
    blr
lbl_fn_805C1A20_0000014C:
    lbz r0, 0xcf(r3)
    clrlwi. r0, r0, 31
    bne lbl_fn_805C1A20_00000160
    li r3, 0x0
    blr
lbl_fn_805C1A20_00000160:
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    bne lbl_fn_805C1A20_00000174
    li r3, 0x1
    blr
lbl_fn_805C1A20_00000174:
    lbz r0, 0xcf(r3)
    clrlwi. r0, r0, 31
    bne lbl_fn_805C1A20_00000188
    li r3, 0x0
    blr
lbl_fn_805C1A20_00000188:
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    bne lbl_fn_805C1A20_0000019C
    li r3, 0x1
    blr
lbl_fn_805C1A20_0000019C:
    lbz r0, 0xcf(r3)
    clrlwi. r0, r0, 31
    bne lbl_fn_805C1A20_000001B0
    li r3, 0x0
    blr
lbl_fn_805C1A20_000001B0:
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    bne lbl_fn_805C1A20_000001C4
    li r3, 0x1
    blr
lbl_fn_805C1A20_000001C4:
    lbz r0, 0xcf(r3)
    clrlwi. r0, r0, 31
    bne lbl_fn_805C1A20_000001D8
    li r3, 0x0
    blr
lbl_fn_805C1A20_000001D8:
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    bne lbl_fn_805C1A20_000001EC
    li r3, 0x1
    blr
lbl_fn_805C1A20_000001EC:
    b fn_805C1900
    blr
}

asm void fn_805C1B00(void)
{
    nofralloc
    blr
}

asm void fn_805C1B10(void)
{
    nofralloc
    blr
}

asm void fn_805C1B20(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_805C1B30(void)
{
    nofralloc
    stw r4, 0x1c(r3)
    blr
}

asm void fn_805C1B40(void)
{
    nofralloc
    blr
}

asm void fn_805C1B50(void)
{
    nofralloc
    lwz r3, 0x2c(r3)
    blr
}

asm void fn_805C1B60(void)
{
    nofralloc
    cmpwi r4, 0x0
    stw r4, 0x4(r3)
    mr r0, r3
    beqlr
    mr r3, r4
    mr r4, r0
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctr
    blr
}

asm void fn_805C1B90(void)
{
    nofralloc
    stw r4, 0x4(r3)
    blr
}

asm void fn_805C1BA0(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_805C1BB0(void)
{
    nofralloc
    stw r4, 0x24(r3)
    blr
}

asm void fn_805C1BC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807CA110@ha
    addi r31, r31, lbl_807CA110@l
    stw r30, 0x18(r1)
    slwi r30, r3, 2
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwzx r5, r31, r30
    cmpwi r5, 0x0
    beq lbl_fn_805C1BC0_0000039C
    cmpwi r4, 0x0
    beq lbl_fn_805C1BC0_00000310
    cmpwi r4, -0x1
    beq lbl_fn_805C1BC0_00000348
    b lbl_fn_805C1BC0_0000036C
lbl_fn_805C1BC0_00000310:
    lbz r0, 0x40(r5)
    cmpwi r0, 0x0
    bne lbl_fn_805C1BC0_00000334
    lis r4, fn_805C1CC0@ha
    addi r4, r4, fn_805C1CC0@l
    bl fn_80660EA0
    lwzx r3, r31, r30
    li r0, 0x1
    stb r0, 0x40(r3)
lbl_fn_805C1BC0_00000334:
    mr r3, r28
    li r4, 0x0
    li r5, 0x0
    bl fn_80661B60
    b lbl_fn_805C1BC0_0000036C
lbl_fn_805C1BC0_00000348:
    lwz r4, 0x28(r5)
    bl fn_80660EA0
    lwzx r3, r31, r30
    li r0, 0x0
    stb r0, 0x40(r3)
    lwzx r3, r31, r30
    stb r0, 0x42(r3)
    lwzx r3, r31, r30
    stb r0, 0x43(r3)
lbl_fn_805C1BC0_0000036C:
    lwzx r3, r31, r30
    lwz r12, 0x24(r3)
    cmpwi r12, 0x0
    beq lbl_fn_805C1BC0_0000039C
    lis r3, fn_805C1BC0@ha
    addi r3, r3, fn_805C1BC0@l
    cmplw r12, r3
    beq lbl_fn_805C1BC0_0000039C
    mr r3, r28
    mr r4, r29
    mtctr r12
    bctrl
lbl_fn_805C1BC0_0000039C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C1CC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r29, lbl_807CA110@ha
    slwi r28, r3, 2
    addi r29, r29, lbl_807CA110@l
    mr r30, r3
    lwzx r26, r29, r28
    mr r31, r4
    cmpwi r26, 0x0
    beq lbl_fn_805C1CC0_000004A0
    cmpwi r4, 0xff
    bne lbl_fn_805C1CC0_00000480
    lwz r27, 0x0(r26)
    mr r3, r27
    bl fn_80661B10
    cmpwi r3, 0x0
    beq lbl_fn_805C1CC0_00000480
    mr r3, r27
    li r4, 0x2
    li r5, 0x0
    bl fn_80661B60
    mulli r0, r27, 0x30
    lis r3, lbl_807CA050@ha
    mr r4, r27
    addi r3, r3, lbl_807CA050@l
    add r27, r3, r0
    mr r3, r27
    bl fn_805EC870
    mr r3, r27
    bl OSCancelAlarm
    lis r4, 0x8000
    lis r7, fn_805C1DC0@ha
    lwz r0, 0xf8(r4)
    lis r3, 0x1062
    addi r4, r3, 0x4dd3
    addi r7, r7, fn_805C1DC0@l
    srwi r0, r0, 2
    mr r3, r27
    mulhwu r0, r4, r0
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x3e8
    bl OSSetAlarm
    li r0, 0x1
    stb r0, 0x41(r26)
lbl_fn_805C1CC0_00000480:
    lwzx r3, r29, r28
    lwz r12, 0x28(r3)
    cmpwi r12, 0x0
    beq lbl_fn_805C1CC0_000004A0
    mr r3, r30
    mr r4, r31
    mtctr r12
    bctrl
lbl_fn_805C1CC0_000004A0:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C1DC0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    bl OSGetAlarmUserData
    lis r4, lbl_807CA110@ha
    slwi r0, r3, 2
    addi r4, r4, lbl_807CA110@l
    lwzx r31, r4, r0
    lwz r30, 0x0(r31)
    mr r3, r30
    bl fn_80661B10
    cmpwi r3, 0x0
    beq lbl_fn_805C1DC0_0000050C
    mr r3, r30
    li r4, 0x3
    li r5, 0x0
    bl fn_80661B60
lbl_fn_805C1DC0_0000050C:
    li r0, 0x0
    stb r0, 0x41(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C1E30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r6, lbl_80764150@ha
    li r31, 0x0
    lfs f0, lbl_80764150@l(r6)
    cmpwi r4, 0x4
    lis r30, lbl_807C9F88@ha
    li r0, 0x1
    stw r4, 0x0(r3)
    mr r27, r3
    mr r28, r4
    addi r30, r30, lbl_807C9F88@l
    stb r31, 0x1c(r3)
    stfs f0, 0x4(r3)
    stw r5, 0x20(r3)
    stw r31, 0x24(r3)
    stw r31, 0x28(r3)
    stb r31, 0x40(r3)
    stb r31, 0x41(r3)
    stb r0, 0x44(r3)
    bge lbl_fn_805C1E30_000005C8
    mulli r29, r4, 0x30
    addi r3, r30, 0x0
    addi r0, r30, 0x8
    stbx r31, r3, r4
    add r3, r0, r29
    bl OSCreateAlarm
    addi r0, r30, 0xc8
    add r3, r0, r29
    bl OSCreateAlarm
    addi r3, r30, 0x198
    slwi r0, r28, 2
    addi r4, r30, 0x188
    stbx r31, r3, r28
    stwx r27, r4, r0
lbl_fn_805C1E30_000005C8:
    addi r11, r1, 0x20
    mr r3, r27
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C1EF0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807C9F88@ha
    addi r31, r31, lbl_807C9F88@l
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_805C1EF0_0000066C
    lwz r3, 0x0(r3)
    addi r0, r31, 0x8
    mulli r3, r3, 0x30
    add r3, r0, r3
    bl OSCancelAlarm
    lwz r3, 0x0(r29)
    addi r0, r31, 0xc8
    mulli r3, r3, 0x30
    add r3, r0, r3
    bl OSCancelAlarm
    lwz r0, 0x0(r29)
    cmpwi r30, 0x0
    addi r3, r31, 0x188
    li r4, 0x0
    slwi r0, r0, 2
    stwx r4, r3, r0
    ble lbl_fn_805C1EF0_0000066C
    mr r3, r29
    bl dtor_80084684
lbl_fn_805C1EF0_0000066C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C1F90(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_80666840
    mr r31, r3
    li r3, 0x0
    bl fn_80666850
    lis r4, fn_805C1BC0@ha
    lwz r3, 0x0(r30)
    addi r4, r4, fn_805C1BC0@l
    bl fn_80660E10
    stw r3, 0x24(r30)
    mr r3, r31
    bl fn_80666850
    lis r4, fn_805C1CC0@ha
    lwz r3, 0x0(r30)
    addi r4, r4, fn_805C1CC0@l
    bl fn_80660EA0
    stw r3, 0x28(r30)
    li r31, 0x1
    lwz r3, 0x0(r30)
    addi r4, r1, 0x8
    stb r31, 0x44(r30)
    bl fn_80660CF0
    cmpwi r3, 0x0
    beq lbl_fn_805C1F90_00000710
    cmpwi r3, -0x1
    beq lbl_fn_805C1F90_00000718
    b lbl_fn_805C1F90_00000720
lbl_fn_805C1F90_00000710:
    stb r31, 0x40(r30)
    b lbl_fn_805C1F90_00000720
lbl_fn_805C1F90_00000718:
    li r0, 0x0
    stb r0, 0x40(r30)
lbl_fn_805C1F90_00000720:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C2040(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x1
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0x0(r3)
    bl fn_80661B60
    li r3, 0x0
    bl fn_80666850
    lwz r3, 0x0(r31)
    lwz r4, 0x24(r31)
    bl fn_80660E10
    li r3, 0x1
    bl fn_80666850
    lwz r3, 0x0(r31)
    lwz r4, 0x28(r31)
    bl fn_80660EA0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C20A0(void)
{
    nofralloc
    lwz r6, 0x0(r4)
    cmpwi r6, 0x0
    beqlr
    cmpwi r5, 0x0
    beq lbl_fn_805C20A0_00000808
    lbz r5, 0x5c(r6)
    cmplwi r5, 0x2
    bne lbl_fn_805C20A0_000007CC
    lwz r0, 0xc(r4)
    cmplwi r0, 0x2
    beq lbl_fn_805C20A0_000007E0
lbl_fn_805C20A0_000007CC:
    cmplwi r5, 0x7
    bne lbl_fn_805C20A0_000007F4
    lwz r0, 0xc(r4)
    cmplwi r0, 0x7
    bne lbl_fn_805C20A0_000007F4
lbl_fn_805C20A0_000007E0:
    lfs f1, 0x4(r4)
    lfs f0, 0x8(r4)
    stfs f1, 0x8(r3)
    stfs f0, 0xc(r3)
    b lbl_fn_805C20A0_00000808
lbl_fn_805C20A0_000007F4:
    lfs f0, 0x20(r6)
    stfs f0, 0x8(r3)
    lwz r5, 0x0(r4)
    lfs f0, 0x24(r5)
    stfs f0, 0xc(r3)
lbl_fn_805C20A0_00000808:
    lwz r6, 0x0(r4)
    lwz r0, 0x4(r6)
    stw r0, 0x10(r3)
    lwz r0, 0x0(r6)
    stw r0, 0x14(r3)
    lwz r0, 0x8(r6)
    stw r0, 0x18(r3)
    lbz r5, 0x5c(r6)
    cmplwi r5, 0x2
    bne lbl_fn_805C20A0_0000083C
    lwz r0, 0xc(r4)
    cmplwi r0, 0x2
    beq lbl_fn_805C20A0_00000850
lbl_fn_805C20A0_0000083C:
    cmplwi r5, 0x7
    bnelr
    lwz r0, 0xc(r4)
    cmplwi r0, 0x7
    bnelr
lbl_fn_805C20A0_00000850:
    lwz r0, 0x60(r6)
    lwz r4, 0x64(r6)
    rlwinm. r5, r0, 0, 27, 27
    lwz r5, 0x68(r6)
    beq lbl_fn_805C20A0_00000870
    lwz r6, 0x14(r3)
    ori r6, r6, 0x800
    stw r6, 0x14(r3)
lbl_fn_805C20A0_00000870:
    rlwinm. r6, r4, 0, 27, 27
    beq lbl_fn_805C20A0_00000884
    lwz r6, 0x10(r3)
    ori r6, r6, 0x800
    stw r6, 0x10(r3)
lbl_fn_805C20A0_00000884:
    rlwinm. r6, r5, 0, 27, 27
    beq lbl_fn_805C20A0_00000898
    lwz r6, 0x18(r3)
    ori r6, r6, 0x800
    stw r6, 0x18(r3)
lbl_fn_805C20A0_00000898:
    rlwinm. r6, r0, 0, 21, 21
    beq lbl_fn_805C20A0_000008AC
    lwz r6, 0x14(r3)
    ori r6, r6, 0x10
    stw r6, 0x14(r3)
lbl_fn_805C20A0_000008AC:
    rlwinm. r6, r4, 0, 21, 21
    beq lbl_fn_805C20A0_000008C0
    lwz r6, 0x10(r3)
    ori r6, r6, 0x10
    stw r6, 0x10(r3)
lbl_fn_805C20A0_000008C0:
    rlwinm. r6, r5, 0, 21, 21
    beq lbl_fn_805C20A0_000008D4
    lwz r6, 0x18(r3)
    ori r6, r6, 0x10
    stw r6, 0x18(r3)
lbl_fn_805C20A0_000008D4:
    rlwinm. r6, r0, 0, 19, 19
    beq lbl_fn_805C20A0_000008E8
    lwz r6, 0x14(r3)
    ori r6, r6, 0x1000
    stw r6, 0x14(r3)
lbl_fn_805C20A0_000008E8:
    rlwinm. r6, r4, 0, 19, 19
    beq lbl_fn_805C20A0_000008FC
    lwz r6, 0x10(r3)
    ori r6, r6, 0x1000
    stw r6, 0x10(r3)
lbl_fn_805C20A0_000008FC:
    rlwinm. r6, r5, 0, 19, 19
    beq lbl_fn_805C20A0_00000910
    lwz r6, 0x18(r3)
    ori r6, r6, 0x1000
    stw r6, 0x18(r3)
lbl_fn_805C20A0_00000910:
    rlwinm. r0, r0, 0, 20, 20
    beq lbl_fn_805C20A0_00000924
    lwz r0, 0x14(r3)
    ori r0, r0, 0x8000
    stw r0, 0x14(r3)
lbl_fn_805C20A0_00000924:
    rlwinm. r0, r4, 0, 20, 20
    beq lbl_fn_805C20A0_00000938
    lwz r0, 0x10(r3)
    ori r0, r0, 0x8000
    stw r0, 0x10(r3)
lbl_fn_805C20A0_00000938:
    rlwinm. r0, r5, 0, 20, 20
    beqlr
    lwz r0, 0x18(r3)
    ori r0, r0, 0x8000
    stw r0, 0x18(r3)
    blr
}

asm void fn_805C2250(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    blr
}

asm void fn_805C2270(void)
{
    nofralloc
    lis r5, lbl_80764154@ha
    lis r4, lbl_80764158@ha
    lfs f1, lbl_80764154@l(r5)
    lfs f0, lbl_80764158@l(r4)
    stfs f1, 0x8(r3)
    stfs f0, 0xc(r3)
    blr
}

asm void fn_805C2290(void)
{
    nofralloc
    mr r4, r3
    lwz r3, 0x20(r3)
    lwz r4, 0x0(r4)
    b fn_805C2F80
}

asm void fn_805C22A0(void)
{
    nofralloc
    blr
}

asm void fn_805C22B0(void)
{
    nofralloc
    stfs f1, 0x4(r3)
    blr
}

asm void fn_805C22C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lbz r0, 0x41(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805C22C0_00000A48
    lis r5, lbl_8076415C@ha
    lfs f1, 0x4(r3)
    lfs f0, lbl_8076415C@l(r5)
    mr r5, r4
    lwz r3, 0x20(r3)
    fmuls f0, f0, f1
    lwz r4, 0x0(r31)
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r6, 0xc(r1)
    extsb r6, r6
    bl fn_805C3010
    lwz r3, 0x0(r31)
    bl fn_80661B10
    cmpwi r3, 0x0
    beq lbl_fn_805C22C0_00000A48
    lbz r0, 0x42(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805C22C0_00000A38
    bl OSGetTime
    stw r4, 0x34(r31)
    stw r3, 0x30(r31)
lbl_fn_805C22C0_00000A38:
    li r3, 0x1
    li r0, 0x0
    stb r3, 0x42(r31)
    stb r0, 0x43(r31)
lbl_fn_805C22C0_00000A48:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C2360(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r3, 0x20(r3)
    lwz r4, 0x0(r30)
    bl fn_805C30B0
    cmpwi r3, 0x0
    bne lbl_fn_805C2360_00000A98
    li r3, 0x0
    b lbl_fn_805C2360_00000AA8
lbl_fn_805C2360_00000A98:
    lwz r3, 0x20(r30)
    mr r5, r31
    lwz r4, 0x0(r30)
    bl fn_805C30D0
lbl_fn_805C2360_00000AA8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C23C0(void)
{
    nofralloc
    li r0, 0x0
    stb r0, 0x42(r3)
    stb r0, 0x43(r3)
    blr
}

asm void fn_805C23D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r27, 0x0(r3)
    mr r31, r3
    lwz r3, 0x20(r3)
    mr r4, r27
    bl fn_805C30B0
    cmpwi r3, 0x0
    bne lbl_fn_805C23D0_00000B74
    lbz r0, 0x42(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805C23D0_00000CF0
    lbz r0, 0x43(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805C23D0_00000B30
    bl OSGetTime
    li r0, 0x1
    stw r4, 0x3c(r31)
    stw r3, 0x38(r31)
    stb r0, 0x43(r31)
    b lbl_fn_805C23D0_00000CF0
lbl_fn_805C23D0_00000B30:
    bl OSGetTime
    lis r5, 0x8000
    lis r3, 0x1062
    lwz r0, 0xf8(r5)
    addi r3, r3, 0x4dd3
    lwz r5, 0x3c(r31)
    srwi r0, r0, 2
    mulhwu r0, r3, r0
    subf r3, r5, r4
    srwi r0, r0, 6
    divwu r0, r3, r0
    cmplwi r0, 0x3e8
    blt lbl_fn_805C23D0_00000CF0
    li r0, 0x0
    stb r0, 0x42(r31)
    stb r0, 0x43(r31)
    b lbl_fn_805C23D0_00000CF0
lbl_fn_805C23D0_00000B74:
    lbz r0, 0x42(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805C23D0_00000C4C
    li r28, 0x0
    stb r28, 0x43(r31)
    bl OSGetTime
    lis r29, 0x8000
    lis r30, 0x1062
    lwz r0, 0xf8(r29)
    lis r3, 0x7
    lwz r7, 0x34(r31)
    addi r6, r30, 0x4dd3
    srwi r5, r0, 2
    addi r0, r3, 0x5300
    mulhwu r3, r6, r5
    subf r4, r7, r4
    srwi r3, r3, 6
    divwu r3, r4, r3
    cmplw r3, r0
    blt lbl_fn_805C23D0_00000C4C
    lwz r27, 0x0(r31)
    stb r28, 0x42(r31)
    mr r3, r27
    stb r28, 0x43(r31)
    bl fn_80661B10
    cmpwi r3, 0x0
    beq lbl_fn_805C23D0_00000CF0
    mr r3, r27
    li r4, 0x2
    li r5, 0x0
    bl fn_80661B60
    mulli r0, r27, 0x30
    lis r3, lbl_807CA050@ha
    mr r4, r27
    addi r3, r3, lbl_807CA050@l
    add r27, r3, r0
    mr r3, r27
    bl fn_805EC870
    mr r3, r27
    bl OSCancelAlarm
    lwz r0, 0xf8(r29)
    lis r7, fn_805C1DC0@ha
    addi r4, r30, 0x4dd3
    mr r3, r27
    srwi r0, r0, 2
    addi r7, r7, fn_805C1DC0@l
    mulhwu r0, r4, r0
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x3e8
    bl OSSetAlarm
    li r0, 0x1
    stb r0, 0x41(r31)
    b lbl_fn_805C23D0_00000CF0
lbl_fn_805C23D0_00000C4C:
    lbz r0, 0x41(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805C23D0_00000CF0
    mr r3, r27
    bl fn_8065F550
    clrlwi r0, r3, 24
    cmplwi r0, 0x55
    bgt lbl_fn_805C23D0_00000CF0
    lwz r27, 0x0(r31)
    mr r3, r27
    bl fn_80661B10
    cmpwi r3, 0x0
    beq lbl_fn_805C23D0_00000CF0
    mr r3, r27
    li r4, 0x2
    li r5, 0x0
    bl fn_80661B60
    mulli r0, r27, 0x30
    lis r3, lbl_807CA050@ha
    mr r4, r27
    addi r3, r3, lbl_807CA050@l
    add r27, r3, r0
    mr r3, r27
    bl fn_805EC870
    mr r3, r27
    bl OSCancelAlarm
    lis r4, 0x8000
    lis r7, fn_805C1DC0@ha
    lwz r0, 0xf8(r4)
    lis r3, 0x1062
    addi r4, r3, 0x4dd3
    addi r7, r7, fn_805C1DC0@l
    srwi r0, r0, 2
    mr r3, r27
    mulhwu r0, r4, r0
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x3e8
    bl OSSetAlarm
    li r0, 0x1
    stb r0, 0x41(r31)
lbl_fn_805C23D0_00000CF0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C2610(void)
{
    nofralloc
    mr r4, r3
    lwz r3, 0x20(r3)
    lwz r4, 0x0(r4)
    b fn_805C3100
}

asm void fn_805C2620(void)
{
    nofralloc
    blr
}

asm void fn_805C2630(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x0(r3)
    cmpwi r4, 0x4
    bge lbl_fn_805C2630_00000D80
    lbz r0, 0x44(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805C2630_00000D80
    lwz r3, 0x20(r3)
    bl fn_805C30B0
    cmpwi r3, 0x0
    bne lbl_fn_805C2630_00000D80
    li r0, 0x1
    stb r0, 0x1c(r31)
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_80661300
lbl_fn_805C2630_00000D80:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C26A0(void)
{
    nofralloc
    lwz r4, 0x0(r3)
    cmpwi r4, 0x4
    bgelr
    lbz r0, 0x1c(r3)
    cmpwi r0, 0x0
    beqlr
    li r0, 0x0
    stb r0, 0x1c(r3)
    mr r3, r4
    li r4, 0x0
    b fn_80661300
    blr
}

asm void fn_805C26D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x4
    blt lbl_fn_805C26D0_00000E00
    li r3, -0x2
    b lbl_fn_805C26D0_00000E58
lbl_fn_805C26D0_00000E00:
    lwz r3, 0x20(r3)
    mr r4, r0
    bl fn_805C30B0
    cmpwi r3, 0x0
    bne lbl_fn_805C26D0_00000E20
    lbz r0, 0x1c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_805C26D0_00000E28
lbl_fn_805C26D0_00000E20:
    li r3, -0x2
    b lbl_fn_805C26D0_00000E58
lbl_fn_805C26D0_00000E28:
    lwz r4, 0x0(r30)
    cmpwi r4, 0x4
    bge lbl_fn_805C26D0_00000E44
    lis r3, lbl_807CA120@ha
    li r0, 0x1
    addi r3, r3, lbl_807CA120@l
    stbx r0, r3, r4
lbl_fn_805C26D0_00000E44:
    lis r5, fn_805C2770@ha
    lwz r3, 0x0(r30)
    mr r4, r31
    addi r5, r5, fn_805C2770@l
    bl fn_806610E0
lbl_fn_805C26D0_00000E58:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C2770(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_805C2770_00000E90
    cmpwi r3, 0x4
    bge lbl_fn_805C2770_00000E90
    lis r4, lbl_807C9F88@ha
    li r0, 0x1
    addi r4, r4, lbl_807C9F88@l
    stbx r0, r4, r3
lbl_fn_805C2770_00000E90:
    cmpwi r3, 0x4
    bgelr
    lis r4, lbl_807CA120@ha
    li r0, 0x0
    addi r4, r4, lbl_807CA120@l
    stbx r0, r4, r3
    blr
}

asm void fn_805C27B0(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r0, 0x4
    blt lbl_fn_805C27B0_00000EC4
    li r3, 0x0
    blr
lbl_fn_805C27B0_00000EC4:
    lis r3, lbl_807C9F88@ha
    addi r3, r3, lbl_807C9F88@l
    lbzx r3, r3, r0
    blr
}

asm void fn_805C27E0(void)
{
    nofralloc
    lwz r4, 0x0(r3)
    cmpwi r4, 0x4
    bgelr
    lis r3, lbl_807C9F88@ha
    li r0, 0x0
    addi r3, r3, lbl_807C9F88@l
    stbx r0, r3, r4
    blr
}

asm void fn_805C2800(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_26
    lis r3, lbl_807CA128@ha
    lwz r29, lbl_807CA128@l(r3)
    cmpwi r29, 0x0
    beq lbl_fn_805C2800_00001154
    li r28, 0x0
    li r31, 0x0
    lis r30, 0x6666
    li r26, -0x1
lbl_fn_805C2800_00000F34:
    lwz r0, 0x50(r29)
    cmpwi r0, 0x0
    beq lbl_fn_805C2800_00001144
    mr r3, r28
    bl fn_80661B10
    cmpwi r3, 0x0
    beq lbl_fn_805C2800_00001144
    bl OSDisableInterrupts
    mr r27, r3
    mr r3, r28
    bl fn_80663330
    cmpwi r3, 0x0
    beq lbl_fn_805C2800_0000111C
    lwz r0, 0x54(r29)
    addi r7, r1, 0x20
    lbz r8, 0x5d(r29)
    li r5, 0x28
    srwi r9, r0, 1
    lwz r6, 0x50(r29)
    cmplwi r9, 0x28
    extsb r8, r8
    bgt lbl_fn_805C2800_00000F90
    mr r5, r9
lbl_fn_805C2800_00000F90:
    cmplwi r5, 0x0
    addi r4, r30, 0x6667
    ble lbl_fn_805C2800_00001058
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_805C2800_0000102C
lbl_fn_805C2800_00000FA8:
    lha r0, 0x0(r6)
    mullw r0, r0, r8
    mulhw r0, r4, r0
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r0, r0, r3
    sth r0, 0x0(r7)
    lha r0, 0x2(r6)
    mullw r0, r0, r8
    mulhw r0, r4, r0
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r0, r0, r3
    sth r0, 0x2(r7)
    lha r0, 0x4(r6)
    mullw r0, r0, r8
    mulhw r0, r4, r0
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r0, r0, r3
    sth r0, 0x4(r7)
    lha r0, 0x6(r6)
    addi r6, r6, 0x8
    mullw r0, r0, r8
    mulhw r0, r4, r0
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r0, r0, r3
    sth r0, 0x6(r7)
    addi r7, r7, 0x8
    bdnz lbl_fn_805C2800_00000FA8
    andi. r5, r5, 0x3
    beq lbl_fn_805C2800_00001058
lbl_fn_805C2800_0000102C:
    mtctr r5
lbl_fn_805C2800_00001030:
    lha r0, 0x0(r6)
    addi r6, r6, 0x2
    mullw r0, r0, r8
    mulhw r0, r4, r0
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r0, r0, r3
    sth r0, 0x0(r7)
    addi r7, r7, 0x2
    bdnz lbl_fn_805C2800_00001030
lbl_fn_805C2800_00001058:
    cmplwi r9, 0x28
    bgt lbl_fn_805C2800_000010BC
    subfic r3, r9, 0x28
    cmplwi r3, 0x0
    ble lbl_fn_805C2800_000010BC
    srwi. r0, r3, 3
    mtctr r0
    beq lbl_fn_805C2800_000010A8
lbl_fn_805C2800_00001078:
    sth r31, 0x0(r7)
    sth r31, 0x2(r7)
    sth r31, 0x4(r7)
    sth r31, 0x6(r7)
    sth r31, 0x8(r7)
    sth r31, 0xa(r7)
    sth r31, 0xc(r7)
    sth r31, 0xe(r7)
    addi r7, r7, 0x10
    bdnz lbl_fn_805C2800_00001078
    andi. r3, r3, 0x7
    beq lbl_fn_805C2800_000010BC
lbl_fn_805C2800_000010A8:
    mtctr r3
    nop
lbl_fn_805C2800_000010B0:
    sth r31, 0x0(r7)
    addi r7, r7, 0x2
    bdnz lbl_fn_805C2800_000010B0
lbl_fn_805C2800_000010BC:
    lbz r0, 0x5c(r29)
    addi r3, r29, 0x30
    addi r5, r1, 0x20
    addi r7, r1, 0x8
    cntlzw r0, r0
    li r6, 0x28
    srwi r4, r0, 5
    bl fn_80625910
    mr r3, r28
    addi r4, r1, 0x8
    li r5, 0x14
    bl fn_806633C0
    stb r31, 0x5c(r29)
    stb r31, 0x5e(r29)
    lwz r3, 0x50(r29)
    addi r0, r3, 0x50
    stw r0, 0x50(r29)
    lwz r3, 0x54(r29)
    subic. r0, r3, 0x50
    stw r0, 0x54(r29)
    bgt lbl_fn_805C2800_0000113C
    stw r26, 0x58(r29)
    stw r31, 0x50(r29)
    b lbl_fn_805C2800_0000113C
lbl_fn_805C2800_0000111C:
    lbz r3, 0x5e(r29)
    addi r0, r3, 0x1
    stb r0, 0x5e(r29)
    clrlwi r0, r0, 24
    extsb r0, r0
    cmpwi r0, 0x3c
    ble lbl_fn_805C2800_0000113C
    stw r31, 0x50(r29)
lbl_fn_805C2800_0000113C:
    mr r3, r27
    bl OSRestoreInterrupts
lbl_fn_805C2800_00001144:
    addi r28, r28, 0x1
    addi r29, r29, 0x68
    cmpwi r28, 0x4
    blt lbl_fn_805C2800_00000F34
lbl_fn_805C2800_00001154:
    addi r11, r1, 0x90
    bl _restgpr_26
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_805C2A70(void)
{
    nofralloc
    li r4, 0x0
    li r0, -0x1
    stw r4, 0x50(r3)
    stw r0, 0x58(r3)
    stw r4, 0xb8(r3)
    stw r0, 0xc0(r3)
    stw r4, 0x120(r3)
    stw r0, 0x128(r3)
    stw r4, 0x188(r3)
    stw r0, 0x190(r3)
    blr
}

asm void fn_805C2AA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r5, lbl_80797D08@ha
    cmpwi r4, 0x0
    addi r5, r5, lbl_80797D08@l
    stw r5, 0x1f0(r3)
    lis r5, lbl_807CA128@ha
    mr r26, r3
    stw r3, lbl_807CA128@l(r5)
    beq lbl_fn_805C2AA0_000011F4
    mr r3, r4
    addi r4, r26, 0x1d0
    bl fn_80625BF0
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    stb r0, 0x1ec(r26)
    b lbl_fn_805C2AA0_000011FC
lbl_fn_805C2AA0_000011F4:
    li r0, 0x0
    stb r0, 0x1ec(r3)
lbl_fn_805C2AA0_000011FC:
    addi r3, r26, 0x1a0
    bl OSCreateAlarm
    mr r28, r26
    li r27, 0x0
    li r29, 0x0
    li r30, -0x1
    li r31, 0x1
lbl_fn_805C2AA0_00001218:
    mr r3, r28
    bl OSCreateAlarm
    stw r29, 0x50(r28)
    addi r27, r27, 0x1
    cmpwi r27, 0x4
    stw r30, 0x58(r28)
    stb r31, 0x5c(r28)
    stb r31, 0x62(r28)
    addi r28, r28, 0x68
    blt lbl_fn_805C2AA0_00001218
    addi r11, r1, 0x20
    mr r3, r26
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C2B60(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_805C2B60_000012E0
    lis r5, lbl_80797D08@ha
    lis r4, lbl_807CA128@ha
    addi r5, r5, lbl_80797D08@l
    stw r5, 0x1f0(r3)
    li r0, 0x0
    stw r0, lbl_807CA128@l(r4)
    stb r0, 0x1ec(r3)
    addi r3, r3, 0x1a0
    bl OSCancelAlarm
    mr r31, r28
    li r30, 0x0
lbl_fn_805C2B60_000012B8:
    mr r3, r31
    bl OSCancelAlarm
    addi r30, r30, 0x1
    addi r31, r31, 0x68
    cmpwi r30, 0x4
    blt lbl_fn_805C2B60_000012B8
    cmpwi r29, 0x0
    ble lbl_fn_805C2B60_000012E0
    mr r3, r28
    bl dtor_80084684
lbl_fn_805C2B60_000012E0:
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

asm void fn_805C2C10(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lbz r0, 0x1ec(r3)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_805C2C10_000013CC
    addi r3, r3, 0x1a0
    bl OSCreateAlarm
    bl OSGetTime
    lis r6, 0x8000
    lis r5, 0x431c
    lwz r0, 0xf8(r6)
    lis r6, 0x1062
    addi r10, r6, 0x4dd3
    lis r9, fn_805C2800@ha
    srwi r0, r0, 2
    subi r5, r5, 0x217d
    mulhwu r8, r5, r0
    lis r7, 0x66
    mr r6, r4
    subi r0, r7, 0x4655
    mr r5, r3
    addi r3, r31, 0x1a0
    srwi r4, r8, 15
    addi r9, r9, fn_805C2800@l
    mullw r0, r4, r0
    li r7, 0x0
    mulhwu r0, r10, r0
    srwi r8, r0, 9
    bl fn_805EC3B0
    li r27, 0x0
    li r28, 0x0
    li r29, -0x1
    li r30, 0x1
lbl_fn_805C2C10_000013A4:
    mr r3, r31
    bl OSCreateAlarm
    stw r28, 0x50(r31)
    addi r27, r27, 0x1
    cmpwi r27, 0x4
    stw r29, 0x58(r31)
    stb r30, 0x5c(r31)
    stb r30, 0x62(r31)
    addi r31, r31, 0x68
    blt lbl_fn_805C2C10_000013A4
lbl_fn_805C2C10_000013CC:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C2CF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0x1a0
    bl OSCancelAlarm
    li r31, 0x0
lbl_fn_805C2CF0_00001414:
    mr r3, r30
    bl OSCancelAlarm
    addi r31, r31, 0x1
    addi r30, r30, 0x68
    cmpwi r31, 0x4
    blt lbl_fn_805C2CF0_00001414
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C2D50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl OSGetAlarmUserData
    lis r5, fn_805C2D80@ha
    li r4, 0x1
    addi r5, r5, fn_805C2D80@l
    bl fn_80661B60
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C2D80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_807CA128@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r6, lbl_807CA128@l(r5)
    cmpwi r6, 0x0
    beq lbl_fn_805C2D80_00001544
    cmpwi r4, 0x0
    beq lbl_fn_805C2D80_000014BC
    cmpwi r4, -0x3
    beq lbl_fn_805C2D80_000014E0
    cmpwi r4, -0x2
    beq lbl_fn_805C2D80_000014F4
    b lbl_fn_805C2D80_00001544
lbl_fn_805C2D80_000014BC:
    mulli r0, r3, 0x68
    lis r5, fn_805C2E90@ha
    li r7, 0x1
    addi r5, r5, fn_805C2E90@l
    add r6, r6, r0
    li r4, 0x4
    stb r7, 0x5c(r6)
    bl fn_80661B60
    b lbl_fn_805C2D80_00001544
lbl_fn_805C2D80_000014E0:
    mulli r0, r3, 0x68
    li r4, 0x0
    add r3, r6, r0
    stb r4, 0x62(r3)
    b lbl_fn_805C2D80_00001544
lbl_fn_805C2D80_000014F4:
    mulli r0, r3, 0x68
    mr r4, r3
    add r31, r6, r0
    mr r3, r31
    bl fn_805EC870
    mr r3, r31
    bl OSCancelAlarm
    lis r4, 0x8000
    lis r7, fn_805C2D50@ha
    lwz r0, 0xf8(r4)
    lis r3, 0x1062
    addi r4, r3, 0x4dd3
    addi r7, r7, fn_805C2D50@l
    srwi r0, r0, 2
    mr r3, r31
    mulhwu r0, r4, r0
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x32
    bl OSSetAlarm
lbl_fn_805C2D80_00001544:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C2E60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl OSGetAlarmUserData
    lis r5, fn_805C2E90@ha
    li r4, 0x4
    addi r5, r5, fn_805C2E90@l
    bl fn_80661B60
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C2E90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_807CA128@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r5, lbl_807CA128@l(r5)
    cmpwi r5, 0x0
    beq lbl_fn_805C2E90_00001660
    cmpwi r4, 0x0
    beq lbl_fn_805C2E90_000015D4
    cmpwi r4, -0x3
    beq lbl_fn_805C2E90_000015E8
    cmpwi r4, -0x1
    beq lbl_fn_805C2E90_000015FC
    cmpwi r4, -0x2
    beq lbl_fn_805C2E90_00001610
    b lbl_fn_805C2E90_00001660
lbl_fn_805C2E90_000015D4:
    mulli r0, r3, 0x68
    li r4, 0x1
    add r3, r5, r0
    stb r4, 0x62(r3)
    b lbl_fn_805C2E90_00001660
lbl_fn_805C2E90_000015E8:
    mulli r0, r3, 0x68
    li r4, 0x0
    add r3, r5, r0
    stb r4, 0x62(r3)
    b lbl_fn_805C2E90_00001660
lbl_fn_805C2E90_000015FC:
    mulli r0, r3, 0x68
    li r4, 0x0
    add r3, r5, r0
    stb r4, 0x62(r3)
    b lbl_fn_805C2E90_00001660
lbl_fn_805C2E90_00001610:
    mulli r0, r3, 0x68
    mr r4, r3
    add r31, r5, r0
    mr r3, r31
    bl fn_805EC870
    mr r3, r31
    bl OSCancelAlarm
    lis r4, 0x8000
    lis r7, fn_805C2E60@ha
    lwz r0, 0xf8(r4)
    lis r3, 0x1062
    addi r4, r3, 0x4dd3
    addi r7, r7, fn_805C2E60@l
    srwi r0, r0, 2
    mr r3, r31
    mulhwu r0, r4, r0
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x32
    bl OSSetAlarm
lbl_fn_805C2E90_00001660:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C2F80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x1ec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805C2F80_000016F4
    lis r5, fn_805C2D80@ha
    mr r3, r31
    addi r5, r5, fn_805C2D80@l
    li r4, 0x1
    bl fn_80661B60
    mulli r4, r31, 0x68
    li r3, 0x0
    li r0, 0x1
    add r4, r30, r4
    stw r3, 0x30(r4)
    stw r3, 0x34(r4)
    stw r3, 0x38(r4)
    stw r3, 0x3c(r4)
    stw r3, 0x40(r4)
    stw r3, 0x44(r4)
    stw r3, 0x48(r4)
    stw r3, 0x4c(r4)
    stb r0, 0x5c(r4)
    stb r3, 0x62(r4)
lbl_fn_805C2F80_000016F4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C3010(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lbz r0, 0x1ec(r3)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    cmpwi r0, 0x0
    mr r29, r6
    beq lbl_fn_805C3010_00001790
    mr r4, r28
    addi r5, r1, 0x8
    addi r3, r3, 0x1d0
    bl fn_80625F40
    addi r3, r1, 0x8
    bl fn_806263E0
    mr r30, r3
    addi r3, r1, 0x8
    bl fn_80626400
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_80626410
    mulli r3, r27, 0x68
    li r0, 0x0
    add r3, r26, r3
    stb r0, 0x5e(r3)
    stw r28, 0x58(r3)
    stw r31, 0x54(r3)
    stb r29, 0x5d(r3)
    stw r30, 0x50(r3)
lbl_fn_805C3010_00001790:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805C30B0(void)
{
    nofralloc
    mulli r0, r4, 0x68
    add r3, r3, r0
    lwz r3, 0x50(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_805C30D0(void)
{
    nofralloc
    mulli r0, r4, 0x68
    add r3, r3, r0
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805C30D0_000017F8
    lwz r0, 0x58(r3)
    cmpw r5, r0
    bne lbl_fn_805C30D0_000017F8
    li r3, 0x1
    blr
lbl_fn_805C30D0_000017F8:
    li r3, 0x0
    blr
}

asm void fn_805C3100(void)
{
    nofralloc
    mulli r0, r4, 0x68
    add r3, r3, r0
    lbz r3, 0x62(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_805C3120(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    beq lbl_fn_805C3120_0000184C
    cmpwi r3, 0x17
    beq lbl_fn_805C3120_0000184C
    cmpwi r3, 0x19
    bne lbl_fn_805C3120_00001864
lbl_fn_805C3120_0000184C:
    lis r4, lbl_807CA130@ha
    li r0, 0x3
    lwz r4, lbl_807CA130@l(r4)
    addis r5, r4, 0x1
    subi r5, r5, 0x4750
    b lbl_fn_805C3120_00001870
lbl_fn_805C3120_00001864:
    lis r4, lbl_807CA130@ha
    li r0, 0x4
    lwz r5, lbl_807CA130@l(r4)
lbl_fn_805C3120_00001870:
    mr r4, r5
    li r31, 0x0
    li r6, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805C3120_000018B4
lbl_fn_805C3120_00001888:
    lbz r0, 0x2e1c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805C3120_000018A8
    mulli r4, r6, 0x2e2c
    li r0, 0x1
    add r31, r5, r4
    stb r0, 0x2e1c(r31)
    b lbl_fn_805C3120_000018B4
lbl_fn_805C3120_000018A8:
    addi r4, r4, 0x2e2c
    addi r6, r6, 0x1
    bdnz lbl_fn_805C3120_00001888
lbl_fn_805C3120_000018B4:
    cmpwi r31, 0x0
    bne lbl_fn_805C3120_0000199C
    cmpwi r3, 0x4
    beq lbl_fn_805C3120_000018D4
    cmpwi r3, 0x17
    beq lbl_fn_805C3120_000018D4
    cmpwi r3, 0x19
    bne lbl_fn_805C3120_000018E8
lbl_fn_805C3120_000018D4:
    lis r3, lbl_807CA130@ha
    lwz r4, lbl_807CA130@l(r3)
    addis r3, r4, 0x1
    addi r3, r3, 0x433c
    b lbl_fn_805C3120_000018F8
lbl_fn_805C3120_000018E8:
    lis r3, lbl_807CA130@ha
    lwz r4, lbl_807CA130@l(r3)
    addis r3, r4, 0x1
    addi r3, r3, 0x4334
lbl_fn_805C3120_000018F8:
    lwz r31, 0x0(r3)
    lwz r0, 0x2e28(r31)
    cmpwi r0, 0x4
    beq lbl_fn_805C3120_00001918
    cmpwi r0, 0x17
    beq lbl_fn_805C3120_00001918
    cmpwi r0, 0x19
    bne lbl_fn_805C3120_00001924
lbl_fn_805C3120_00001918:
    addis r30, r4, 0x1
    addi r30, r30, 0x433c
    b lbl_fn_805C3120_0000192C
lbl_fn_805C3120_00001924:
    addis r30, r4, 0x1
    addi r30, r30, 0x4334
lbl_fn_805C3120_0000192C:
    mr r3, r31
    li r4, 0x0
    bl fn_805E3F20
    mr r3, r31
    bl fn_805E3E80
    li r0, 0x0
    stb r0, 0x2e1c(r31)
    lwz r3, 0x2e24(r31)
    cmpwi r3, 0x0
    bne lbl_fn_805C3120_00001960
    lwz r0, 0x2e20(r31)
    stw r0, 0x0(r30)
    b lbl_fn_805C3120_00001968
lbl_fn_805C3120_00001960:
    lwz r0, 0x2e20(r31)
    stw r0, 0x2e20(r3)
lbl_fn_805C3120_00001968:
    lwz r3, 0x2e20(r31)
    cmpwi r3, 0x0
    bne lbl_fn_805C3120_00001980
    lwz r0, 0x2e24(r31)
    stw r0, 0x4(r30)
    b lbl_fn_805C3120_00001988
lbl_fn_805C3120_00001980:
    lwz r0, 0x2e24(r31)
    stw r0, 0x2e24(r3)
lbl_fn_805C3120_00001988:
    li r3, 0x0
    stw r3, 0x2e20(r31)
    li r0, 0x1
    stw r3, 0x2e24(r31)
    stb r0, 0x2e1c(r31)
lbl_fn_805C3120_0000199C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C32C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_807CA130@ha
    lwz r3, lbl_807CA130@l(r31)
    cmpwi r3, 0x0
    beq lbl_fn_805C32C0_00001A10
    addis r3, r3, 0x1
    li r4, 0x1
    li r5, 0x0
    addi r3, r3, 0x4680
    bl fn_805F26D0
    lwz r3, lbl_807CA130@l(r31)
    addis r3, r3, 0x1
    lwz r12, 0x4348(r3)
    cmpwi r12, 0x0
    beq lbl_fn_805C32C0_00001A10
    mtctr r12
    bctrl
lbl_fn_805C32C0_00001A10:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
