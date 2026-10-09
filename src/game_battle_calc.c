#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_80084320(void);
extern void fn_800EE360(void);
extern void fn_801059F8(void);
extern void fn_80105B3C(void);
extern void fn_80107274(void);
extern void fn_80107380(void);
extern void fn_801079C0(void);
extern void fn_80107A68(void);
extern void fn_80107B30(void);
extern void fn_80107BD8(void);
extern void fn_80107CEC(void);
extern void fn_80107D94(void);
extern void fn_80107DA4(void);
extern void fn_80107E58(void);
extern void fn_8012B3E8(void);
extern void fn_8012B988(void);
extern void fn_80164DCC(void);
extern void fn_8016E970(void);
extern void fn_80191A44(void);
extern void fn_80191D30(void);
extern void fn_80192130(void);
extern void fn_801AAB64(void);
extern void fn_801AD34C(void);
extern void fn_801AF264(void);
extern void fn_801B2EDC(void);
extern void fn_803750E4(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077A720[];
extern u8 lbl_8077BD40[];
extern u8 lbl_8077BD4C[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F430;
extern u32 lbl_8088196C;
extern u32 lbl_80881B2C;

/* Function declarations */
void fn_801684A0(void);
void fn_80168788(void);
void fn_801687D8(void);
void fn_80168824(void);
void fn_80168B1C(void);
void fn_80168E04(void);
void fn_80168E60(void);
void fn_80168E80(void);
void fn_80168EA0(void);
void fn_80168EC0(void);
void fn_80168F3C(void);
void fn_80168F5C(void);
void fn_80168F94(void);
void fn_80168FCC(void);
void fn_8016939C(void);
void fn_801696E0(void);
void fn_801698E4(void);
void fn_80169C0C(void);

asm void fn_801684A0(void)
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
    beq lbl_fn_801684A0_0000005C
    mr r4, r29
    bl fn_80191A44
    mr r30, r3
lbl_fn_801684A0_0000005C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801684A0_000000EC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801684A0_00000094
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_801684A0_000000B0
lbl_fn_801684A0_00000094:
    addi r3, r31, 0x156c
    lwz r5, 0x156c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_801684A0_000000B0:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801684A0_000000EC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801684A0_000000EC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801684A0_000002A0
    cmpwi r0, 0x8
    beq lbl_fn_801684A0_00000104
    stw r0, 0x564(r29)
lbl_fn_801684A0_00000104:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801684A0_000002A0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801684A0_0000013C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_801684A0_00000158
lbl_fn_801684A0_0000013C:
    addi r3, r31, 0x1578
    lwz r5, 0x1578(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_801684A0_00000158:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801684A0_00000194
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801684A0_00000194:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801684A0_00000270
    cmpwi r0, 0x8
    beq lbl_fn_801684A0_000001AC
    stw r0, 0x564(r29)
lbl_fn_801684A0_000001AC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801684A0_00000270
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801684A0_000001E4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_801684A0_00000200
lbl_fn_801684A0_000001E4:
    addi r3, r31, 0x1584
    lwz r5, 0x1584(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_801684A0_00000200:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801684A0_0000023C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801684A0_0000023C:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801684A0_00000270
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801684A0_00000270:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801684A0_000002A0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801684A0_000002A0:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_801684A0_000002CC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801684A0_000002CC:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80168788(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_80168788_00000324
    addi r4, r31, 0xb0
    mr r3, r0
    mr r5, r4
    bl fn_80107B30
    lwz r3, lbl_8087F048
    mr r4, r31
    bl fn_80107274
lbl_fn_80168788_00000324:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801687D8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_801687D8_00000370
    mr r3, r0
    addi r4, r31, 0xb0
    bl fn_80107BD8
    lwz r3, lbl_8087F048
    mr r4, r31
    bl fn_80107380
lbl_fn_801687D8_00000370:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80168824(void)
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
    beq lbl_fn_80168824_000003EC
    mr r4, r29
    mr r5, r28
    bl fn_80191D30
    mr r30, r3
lbl_fn_80168824_000003EC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80168824_0000047C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80168824_00000424
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80168824_00000440
lbl_fn_80168824_00000424:
    addi r3, r31, 0x1590
    lwz r5, 0x1590(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80168824_00000440:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80168824_0000047C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80168824_0000047C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80168824_00000630
    cmpwi r0, 0x8
    beq lbl_fn_80168824_00000494
    stw r0, 0x564(r29)
lbl_fn_80168824_00000494:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80168824_00000630
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80168824_000004CC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80168824_000004E8
lbl_fn_80168824_000004CC:
    addi r3, r31, 0x159c
    lwz r5, 0x159c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80168824_000004E8:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80168824_00000524
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80168824_00000524:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80168824_00000600
    cmpwi r0, 0x8
    beq lbl_fn_80168824_0000053C
    stw r0, 0x564(r29)
lbl_fn_80168824_0000053C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80168824_00000600
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80168824_00000574
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80168824_00000590
lbl_fn_80168824_00000574:
    addi r3, r31, 0x15a8
    lwz r5, 0x15a8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80168824_00000590:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80168824_000005CC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80168824_000005CC:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80168824_00000600
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80168824_00000600:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80168824_00000630
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80168824_00000630:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80168824_0000065C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80168824_0000065C:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80168B1C(void)
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
    beq lbl_fn_80168B1C_000006D8
    mr r4, r29
    bl fn_80192130
    mr r30, r3
lbl_fn_80168B1C_000006D8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80168B1C_00000768
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80168B1C_00000710
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80168B1C_0000072C
lbl_fn_80168B1C_00000710:
    addi r3, r31, 0x15b4
    lwz r5, 0x15b4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80168B1C_0000072C:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80168B1C_00000768
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80168B1C_00000768:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80168B1C_0000091C
    cmpwi r0, 0x8
    beq lbl_fn_80168B1C_00000780
    stw r0, 0x564(r29)
lbl_fn_80168B1C_00000780:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80168B1C_0000091C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80168B1C_000007B8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80168B1C_000007D4
lbl_fn_80168B1C_000007B8:
    addi r3, r31, 0x15c0
    lwz r5, 0x15c0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80168B1C_000007D4:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80168B1C_00000810
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80168B1C_00000810:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80168B1C_000008EC
    cmpwi r0, 0x8
    beq lbl_fn_80168B1C_00000828
    stw r0, 0x564(r29)
lbl_fn_80168B1C_00000828:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80168B1C_000008EC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80168B1C_00000860
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80168B1C_0000087C
lbl_fn_80168B1C_00000860:
    addi r3, r31, 0x15cc
    lwz r5, 0x15cc(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80168B1C_0000087C:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80168B1C_000008B8
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80168B1C_000008B8:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80168B1C_000008EC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80168B1C_000008EC:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80168B1C_0000091C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80168B1C_0000091C:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80168B1C_00000948
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80168B1C_00000948:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80168E04(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, lbl_8087F048
    cmpwi r31, 0x0
    beq lbl_fn_80168E04_000009A8
    lwz r12, 0x0(r3)
    lwz r12, 0x90(r12)
    mtctr r12
    bctrl
    addi r4, r30, 0xb0
    mr r3, r31
    mr r5, r4
    bl fn_80107CEC
lbl_fn_80168E04_000009A8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80168E60(void)
{
    nofralloc
    lwz r0, lbl_8087F048
    mr r4, r3
    cmpwi r0, 0x0
    beqlr
    mr r3, r0
    addi r4, r4, 0xb0
    b fn_80107D94
    blr
}

asm void fn_80168E80(void)
{
    nofralloc
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beqlr
    addi r4, r3, 0xb0
    mr r3, r0
    mr r5, r4
    b fn_801079C0
    blr
}

asm void fn_80168EA0(void)
{
    nofralloc
    lwz r0, lbl_8087F048
    mr r4, r3
    cmpwi r0, 0x0
    beqlr
    mr r3, r0
    addi r4, r4, 0xb0
    b fn_80107A68
    blr
}

asm void fn_80168EC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r31, lbl_8087F048
    cmpwi r31, 0x0
    beq lbl_fn_80168EC0_00000A84
    lwz r12, 0x0(r30)
    mr r4, r30
    addi r3, r1, 0x8
    lwz r12, 0x94(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x90(r12)
    mtctr r12
    bctrl
    addi r4, r30, 0xb0
    mr r3, r31
    mr r5, r4
    addi r6, r1, 0x8
    bl fn_80107DA4
lbl_fn_80168EC0_00000A84:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80168F3C(void)
{
    nofralloc
    lwz r0, lbl_8087F048
    mr r4, r3
    cmpwi r0, 0x0
    beqlr
    mr r3, r0
    addi r4, r4, 0xb0
    b fn_80107E58
    blr
}

asm void fn_80168F5C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x7d4
    bl fn_8012B3E8
    addi r3, r31, 0x7d4
    bl fn_8012B988
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80168F94(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x7d4
    bl fn_8012B3E8
    addi r3, r31, 0x7d4
    bl fn_8012B988
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80168FCC(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    lfs f1, lbl_8088196C
    li r4, 0x79
    stw r0, 0xc4(r1)
    lfs f0, lbl_80881B2C
    stw r31, 0xbc(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    stw r30, 0xb8(r1)
    stw r29, 0xb4(r1)
    mr r29, r3
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f0, 0x34(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x58
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x58
    mr r5, r4
    bl fn_805F93C0
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lis r5, lbl_80737A9C@ha
    li r3, 0x40
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80168FCC_00000BDC
    mr r4, r29
    addi r5, r1, 0x2c
    li r6, -0x1
    li r7, 0x0
    bl fn_801AD34C
    mr r30, r3
lbl_fn_80168FCC_00000BDC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80168FCC_00000C6C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80168FCC_00000C14
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x88(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x8c(r1)
    stw r0, 0x90(r1)
    b lbl_fn_80168FCC_00000C30
lbl_fn_80168FCC_00000C14:
    addi r3, r31, 0x15d8
    lwz r5, 0x15d8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x88(r1)
    stw r4, 0x8c(r1)
    stw r0, 0x90(r1)
lbl_fn_80168FCC_00000C30:
    lwz r5, 0x88(r1)
    addi r3, r1, 0x20
    lwz r4, 0x8c(r1)
    lwz r0, 0x90(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80168FCC_00000C6C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80168FCC_00000C6C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80168FCC_00000E20
    cmpwi r0, 0x8
    beq lbl_fn_80168FCC_00000C84
    stw r0, 0x564(r29)
lbl_fn_80168FCC_00000C84:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80168FCC_00000E20
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80168FCC_00000CBC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x94(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x98(r1)
    stw r0, 0x9c(r1)
    b lbl_fn_80168FCC_00000CD8
lbl_fn_80168FCC_00000CBC:
    addi r3, r31, 0x15e4
    lwz r5, 0x15e4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x94(r1)
    stw r4, 0x98(r1)
    stw r0, 0x9c(r1)
lbl_fn_80168FCC_00000CD8:
    lwz r5, 0x94(r1)
    addi r3, r1, 0x8
    lwz r4, 0x98(r1)
    lwz r0, 0x9c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80168FCC_00000D14
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80168FCC_00000D14:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80168FCC_00000DF0
    cmpwi r0, 0x8
    beq lbl_fn_80168FCC_00000D2C
    stw r0, 0x564(r29)
lbl_fn_80168FCC_00000D2C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80168FCC_00000DF0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80168FCC_00000D64
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0xa0(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0xa4(r1)
    stw r0, 0xa8(r1)
    b lbl_fn_80168FCC_00000D80
lbl_fn_80168FCC_00000D64:
    addi r3, r31, 0x15f0
    lwz r5, 0x15f0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0xa0(r1)
    stw r4, 0xa4(r1)
    stw r0, 0xa8(r1)
lbl_fn_80168FCC_00000D80:
    lwz r5, 0xa0(r1)
    addi r3, r1, 0x14
    lwz r4, 0xa4(r1)
    lwz r0, 0xa8(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80168FCC_00000DBC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80168FCC_00000DBC:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80168FCC_00000DF0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80168FCC_00000DF0:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80168FCC_00000E20
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80168FCC_00000E20:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80168FCC_00000E4C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80168FCC_00000E4C:
    lwz r0, 0x12a4(r29)
    li r3, 0x0
    stw r3, 0x638(r29)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_80168FCC_00000E74
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80168FCC_00000E74
    li r4, 0xb5
    bl fn_803750E4
lbl_fn_80168FCC_00000E74:
    mr r3, r29
    li r4, 0x1
    bl fn_80164DCC
    lwz r3, 0x1208(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80168FCC_00000EE0
    beq lbl_fn_80168FCC_00000EE0
    lfs f0, lbl_8088196C
    li r30, 0x0
    li r0, 0x3
    stw r30, 0x3c(r1)
    addi r4, r1, 0x38
    stw r30, 0x40(r1)
    stw r30, 0x44(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    stw r0, 0x38(r1)
    stw r29, 0x48(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1208(r29)
    li r0, 0xff
    stb r0, 0x520(r3)
    stw r30, 0x1208(r29)
lbl_fn_80168FCC_00000EE0:
    lwz r0, 0xc4(r1)
    lwz r31, 0xbc(r1)
    lwz r30, 0xb8(r1)
    lwz r29, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_8016939C(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x70
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    bl _savegpr_27
    lwz r0, lbl_8087F048
    lis r31, lbl_8077A720@ha
    fmr f31, f1
    mr r29, r3
    cmpwi r0, 0x0
    mr r27, r4
    mr r28, r5
    addi r31, r31, lbl_8077A720@l
    beq lbl_fn_8016939C_00000F54
    mr r3, r0
    mr r4, r29
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r29
    bl fn_80105B3C
lbl_fn_8016939C_00000F54:
    lwz r0, 0x12a8(r29)
    lis r3, lbl_80737A9C@ha
    lfs f0, lbl_8088196C
    addi r3, r3, lbl_80737A9C@l
    addi r5, r3, 0x24
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x12a8(r29)
    li r3, 0x9c
    mr r6, r5
    li r4, 0x0
    stfs f0, 0xfb8(r29)
    li r7, 0x0
    stfs f0, 0xfbc(r29)
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8016939C_00000FB0
    fmr f1, f31
    mr r4, r29
    mr r5, r27
    mr r6, r28
    bl fn_801AAB64
    mr r30, r3
lbl_fn_8016939C_00000FB0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016939C_00001040
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016939C_00000FE8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8016939C_00001004
lbl_fn_8016939C_00000FE8:
    addi r3, r31, 0x15fc
    lwz r5, 0x15fc(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8016939C_00001004:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016939C_00001040
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016939C_00001040:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016939C_000011F4
    cmpwi r0, 0x8
    beq lbl_fn_8016939C_00001058
    stw r0, 0x564(r29)
lbl_fn_8016939C_00001058:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016939C_000011F4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016939C_00001090
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8016939C_000010AC
lbl_fn_8016939C_00001090:
    addi r3, r31, 0x1608
    lwz r5, 0x1608(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8016939C_000010AC:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016939C_000010E8
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016939C_000010E8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016939C_000011C4
    cmpwi r0, 0x8
    beq lbl_fn_8016939C_00001100
    stw r0, 0x564(r29)
lbl_fn_8016939C_00001100:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016939C_000011C4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016939C_00001138
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8016939C_00001154
lbl_fn_8016939C_00001138:
    addi r3, r31, 0x1614
    lwz r5, 0x1614(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8016939C_00001154:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016939C_00001190
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016939C_00001190:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016939C_000011C4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016939C_000011C4:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016939C_000011F4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016939C_000011F4:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8016939C_00001220
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016939C_00001220:
    addi r11, r1, 0x70
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    bl _restgpr_27
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_801696E0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    lwz r4, 0x55c(r3)
    cmpwi cr1, r4, 0x6
    bne cr1, lbl_fn_801696E0_0000142C
    lwz r0, 0x560(r3)
    cmpwi r0, 0x3a
    bne lbl_fn_801696E0_0000142C
    lwz r31, 0x564(r3)
    cmpw r4, r31
    beq lbl_fn_801696E0_00001428
    beq cr1, lbl_fn_801696E0_0000128C
    cmpwi r4, 0x8
    beq lbl_fn_801696E0_0000128C
    stw r4, 0x564(r3)
lbl_fn_801696E0_0000128C:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_801696E0_00001428
    lwz r0, 0xf80(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801696E0_000012C4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x20(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
    b lbl_fn_801696E0_000012E0
lbl_fn_801696E0_000012C4:
    lis r5, lbl_8077BD40@ha
    lwzu r4, lbl_8077BD40@l(r5)
    stw r4, 0x20(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
lbl_fn_801696E0_000012E0:
    lwz r5, 0x20(r1)
    addi r3, r1, 0x8
    lwz r4, 0x24(r1)
    lwz r0, 0x28(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801696E0_0000131C
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801696E0_0000131C:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    beq lbl_fn_801696E0_000013F8
    cmpwi r0, 0x8
    beq lbl_fn_801696E0_00001334
    stw r0, 0x564(r30)
lbl_fn_801696E0_00001334:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_801696E0_000013F8
    lwz r0, 0xf80(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801696E0_0000136C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_801696E0_00001388
lbl_fn_801696E0_0000136C:
    lis r5, lbl_8077BD4C@ha
    lwzu r4, lbl_8077BD4C@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_801696E0_00001388:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x14
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801696E0_000013C4
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801696E0_000013C4:
    mr r3, r30
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r30)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r30)
    beq lbl_fn_801696E0_000013F8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801696E0_000013F8:
    lwz r3, 0xf80(r30)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r30)
    cmpwi r3, 0x0
    stw r0, 0xf80(r30)
    beq lbl_fn_801696E0_00001428
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801696E0_00001428:
    stw r31, 0x55c(r30)
lbl_fn_801696E0_0000142C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_801698E4(void)
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
    li r3, 0x28
    stw r28, 0x50(r1)
    mr r28, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801698E4_000014AC
    mr r4, r29
    mr r5, r28
    bl fn_801AF264
    mr r30, r3
lbl_fn_801698E4_000014AC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801698E4_0000153C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801698E4_000014E4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_801698E4_00001500
lbl_fn_801698E4_000014E4:
    addi r3, r31, 0x1638
    lwz r5, 0x1638(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_801698E4_00001500:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801698E4_0000153C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801698E4_0000153C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801698E4_000016F0
    cmpwi r0, 0x8
    beq lbl_fn_801698E4_00001554
    stw r0, 0x564(r29)
lbl_fn_801698E4_00001554:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801698E4_000016F0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801698E4_0000158C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_801698E4_000015A8
lbl_fn_801698E4_0000158C:
    addi r3, r31, 0x1644
    lwz r5, 0x1644(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_801698E4_000015A8:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801698E4_000015E4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801698E4_000015E4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801698E4_000016C0
    cmpwi r0, 0x8
    beq lbl_fn_801698E4_000015FC
    stw r0, 0x564(r29)
lbl_fn_801698E4_000015FC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801698E4_000016C0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801698E4_00001634
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_801698E4_00001650
lbl_fn_801698E4_00001634:
    addi r3, r31, 0x1650
    lwz r5, 0x1650(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_801698E4_00001650:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801698E4_0000168C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801698E4_0000168C:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801698E4_000016C0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801698E4_000016C0:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801698E4_000016F0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801698E4_000016F0:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_801698E4_0000171C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801698E4_0000171C:
    lwz r0, 0x48(r29)
    lwz r3, 0x12a4(r29)
    cmpwi r0, 0x2
    rlwinm r3, r3, 0, 16, 14
    stw r3, 0x12a4(r29)
    bne lbl_fn_801698E4_0000174C
    lwz r0, 0x54c(r29)
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    beq lbl_fn_801698E4_0000174C
    mr r3, r29
    bl fn_800EE360
lbl_fn_801698E4_0000174C:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80169C0C(void)
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
    li r3, 0x34
    stw r28, 0x50(r1)
    mr r28, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80169C0C_000017D4
    mr r4, r29
    mr r5, r28
    bl fn_801B2EDC
    mr r30, r3
lbl_fn_80169C0C_000017D4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80169C0C_00001864
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80169C0C_0000180C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80169C0C_00001828
lbl_fn_80169C0C_0000180C:
    addi r3, r31, 0x165c
    lwz r5, 0x165c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80169C0C_00001828:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80169C0C_00001864
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80169C0C_00001864:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80169C0C_00001A18
    cmpwi r0, 0x8
    beq lbl_fn_80169C0C_0000187C
    stw r0, 0x564(r29)
lbl_fn_80169C0C_0000187C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80169C0C_00001A18
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80169C0C_000018B4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80169C0C_000018D0
lbl_fn_80169C0C_000018B4:
    addi r3, r31, 0x1668
    lwz r5, 0x1668(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80169C0C_000018D0:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80169C0C_0000190C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80169C0C_0000190C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80169C0C_000019E8
    cmpwi r0, 0x8
    beq lbl_fn_80169C0C_00001924
    stw r0, 0x564(r29)
lbl_fn_80169C0C_00001924:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80169C0C_000019E8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80169C0C_0000195C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80169C0C_00001978
lbl_fn_80169C0C_0000195C:
    addi r3, r31, 0x1674
    lwz r5, 0x1674(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80169C0C_00001978:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80169C0C_000019B4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80169C0C_000019B4:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80169C0C_000019E8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80169C0C_000019E8:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80169C0C_00001A18
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80169C0C_00001A18:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80169C0C_00001A44
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80169C0C_00001A44:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
