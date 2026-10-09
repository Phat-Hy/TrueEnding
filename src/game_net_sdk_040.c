#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_17(void);
extern void _restgpr_21(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_17(void);
extern void _savegpr_21(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8067D8CC(void);
extern void fn_8067DD0C(void);
extern void fn_8067DED4(void);
extern void fn_8067DED8(void);
extern void fn_80682544(void);
extern void fn_806A4F3C(void);
extern void fn_806A5094(void);
extern void fn_806A515C(void);
extern void fn_806A5208(void);
extern void fn_806A54D8(void);
extern void fn_806A5798(void);
extern void fn_806A5AF8(void);
extern void fn_806A5BC0(void);
extern void fn_806D57A0(void);
extern void fn_806D5850(void);
extern void fn_806D58F0(void);
extern void fn_806D5900(void);
extern void fn_806D5930(void);
extern void fn_806D7A90(void);
extern void fn_806D7AA0(void);
extern void fn_806D7AC0(void);
extern void fn_806D7B30(void);
extern void fn_806D7B70(void);
extern void fn_806D7CB0(void);
extern void fn_806D7D60(void);
extern void fn_806D7F20(void);
extern void fn_806D8650(void);
extern void fn_806D8D20(void);
extern void fn_806D8E30(void);
extern void fn_806D8F30(void);
extern void fn_806D8F80(void);
extern void fn_806DA870(void);
extern void fn_806F1E10(void);
extern void fn_806F1E90(void);
extern void fn_806F1F90(void);
extern void fn_806F2010(void);
extern void fn_806F2070(void);
extern void fn_806F21E0(void);
extern void fn_806F2600(void);
extern void fn_806F2630(void);
extern void fn_806F2750(void);
extern void fn_806F2880(void);
extern void fn_806F2890(void);
extern void fn_806F28A0(void);
extern void fn_806F28B0(void);
extern void fn_806F4980(void);
extern void fn_806F5AD0(void);
extern void fn_806F5BE0(void);
extern void fn_806F5CF0(void);
extern void fn_806F5D90(void);
extern void fn_806F6000(void);
extern void fn_806F61E0(void);
extern void fn_806F64D0(void);
extern void fn_806F65D0(void);
extern void fn_806F67A0(void);
extern void fn_806F6CA0(void);
extern void fn_806F72F0(void);
extern void memmove(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807C5788[];
extern u8 lbl_807C578C[];
extern u8 lbl_807C5790[];
extern u8 lbl_807C57A0[];
extern u8 lbl_807C57B0[];
extern u8 lbl_80862120[];
extern u8 lbl_80862128[];
extern u8 lbl_8086212C[];
extern u8 lbl_80862134[];
extern u8 lbl_80862138[];

/* Small data declarations */

/* Function declarations */
void pad_03_806F28B4_text(void);
void fn_806F28C0(void);
void fn_806F2A10(void);
void fn_806F2BE0(void);
void fn_806F2D30(void);
void fn_806F2E70(void);
void fn_806F2FA0(void);
void fn_806F31C0(void);
void fn_806F3280(void);
void fn_806F33F0(void);
void fn_806F3490(void);
void fn_806F3510(void);
void fn_806F35B0(void);
void fn_806F36F0(void);
void fn_806F3810(void);
void fn_806F3940(void);
void fn_806F3A20(void);
void fn_806F3A90(void);
void fn_806F3B30(void);
void fn_806F3BA0(void);
void fn_806F3C20(void);
void fn_806F3C30(void);
void fn_806F3C40(void);
void fn_806F3D00(void);
void fn_806F3EE0(void);
void fn_806F3F40(void);
void fn_806F3FB0(void);
void fn_806F41E0(void);
void fn_806F41F0(void);
void fn_806F4240(void);
void fn_806F4280(void);
void fn_806F42E0(void);
void fn_806F43B0(void);
void fn_806F46F0(void);
void fn_806F47B0(void);

asm void pad_03_806F28B4_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
    opword 0x00000000
}

asm void fn_806F28C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
lbl_fn_806F28C0_00000030:
    lwz r7, 0xd4(r31)
    mr r3, r31
    lwz r5, 0xc8(r31)
    addi r4, r31, 0x194
    lwz r0, 0xd0(r31)
    addi r6, r1, 0xc
    add r5, r5, r7
    addi r8, r1, 0x8
    subf r0, r7, r0
    stw r0, 0xc(r1)
    lwz r9, 0xac(r31)
    lwz r7, 0xa4(r31)
    lwz r0, 0xa8(r31)
    add r7, r7, r9
    subf r0, r9, r0
    stw r0, 0x8(r1)
    lwz r12, 0x1c4(r31)
    mtctr r12
    bctrl
    cmpwi r3, 0x2
    mr r30, r3
    bne lbl_fn_806F28C0_000000A4
    lwz r4, 0xb4(r31)
    addi r3, r31, 0xa0
    bl fn_806F1E10
    cmpwi r3, 0x0
    bne lbl_fn_806F28C0_000000B4
    li r3, 0x0
    b lbl_fn_806F28C0_00000144
lbl_fn_806F28C0_000000A4:
    cmpwi r3, 0x3
    bne lbl_fn_806F28C0_000000B4
    li r3, 0x0
    b lbl_fn_806F28C0_00000144
lbl_fn_806F28C0_000000B4:
    cmpwi r30, 0x2
    bne lbl_fn_806F28C0_000000C8
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806F28C0_00000030
lbl_fn_806F28C0_000000C8:
    lwz r4, 0xc(r1)
    lwz r5, 0xd0(r31)
    cmpw r4, r5
    ble lbl_fn_806F28C0_000000E0
    li r3, 0x0
    b lbl_fn_806F28C0_00000144
lbl_fn_806F28C0_000000E0:
    lwz r0, 0xd4(r31)
    lwz r3, 0xac(r31)
    add r4, r0, r4
    stw r4, 0xd4(r31)
    lwz r0, 0x8(r1)
    add r0, r3, r0
    stw r0, 0xac(r31)
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bgt lbl_fn_806F28C0_00000030
    cmpwi r4, 0xff
    ble lbl_fn_806F28C0_00000140
    subf. r30, r4, r5
    bne lbl_fn_806F28C0_00000124
    addi r3, r31, 0xc4
    bl fn_806F2600
    b lbl_fn_806F28C0_00000140
lbl_fn_806F28C0_00000124:
    lwz r3, 0xc8(r31)
    mr r5, r30
    add r4, r3, r4
    bl memmove
    li r0, 0x0
    stw r0, 0xd4(r31)
    stw r30, 0xd0(r31)
lbl_fn_806F28C0_00000140:
    li r3, 0x1
lbl_fn_806F28C0_00000144:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806F2A10(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r0, 0x15c(r3)
    lwz r3, 0x0(r5)
    cmpwi r0, 0x0
    subi r30, r3, 0x1
    beq lbl_fn_806F2A10_000001D8
    bl fn_806D8F30
    lis r4, lbl_807C578C@ha
    lwz r5, 0x160(r31)
    lwz r0, lbl_807C578C@l(r4)
    add r0, r5, r0
    cmplw r3, r0
    bge lbl_fn_806F2A10_000001BC
    li r3, 0x1
    b lbl_fn_806F2A10_00000300
lbl_fn_806F2A10_000001BC:
    stw r3, 0x160(r31)
    lis r3, lbl_807C5788@ha
    lwz r0, lbl_807C5788@l(r3)
    cmpw r30, r0
    bge lbl_fn_806F2A10_000001D4
    mr r0, r30
lbl_fn_806F2A10_000001D4:
    mr r30, r0
lbl_fn_806F2A10_000001D8:
    lwz r0, 0x198(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806F2A10_00000258
    lwz r0, 0x1a4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_806F2A10_00000258
    lwz r0, 0x1ac(r31)
    cmpwi r0, 0x1
    bne lbl_fn_806F2A10_00000258
    stw r30, 0x8(r1)
    mr r3, r31
    mr r5, r28
    addi r4, r31, 0x194
    addi r6, r1, 0x8
    bl fn_806F3BA0
    cmpwi r3, 0x1
    bne lbl_fn_806F2A10_00000234
    lwz r4, 0x8(r1)
    cmpwi r4, -0x1
    bne lbl_fn_806F2A10_000002D8
    li r3, 0x1
    b lbl_fn_806F2A10_00000300
    b lbl_fn_806F2A10_000002D8
lbl_fn_806F2A10_00000234:
    li r5, 0x1
    li r4, 0x5
    li r0, 0x0
    stw r5, 0x124(r31)
    li r3, 0x3
    stw r4, 0x40(r31)
    stw r0, 0x54(r31)
    stw r5, 0x158(r31)
    b lbl_fn_806F2A10_00000300
lbl_fn_806F2A10_00000258:
    lwz r3, 0x50(r31)
    mr r4, r28
    mr r5, r30
    li r6, 0x0
    bl fn_806D7CB0
    cmpwi r3, -0x1
    mr r4, r3
    bne lbl_fn_806F2A10_000002D8
    lwz r3, 0x50(r31)
    bl fn_806D7F20
    cmpwi r3, -0x38
    bne lbl_fn_806F2A10_00000298
    li r0, 0x1
    stw r0, 0x158(r31)
    li r3, 0x2
    b lbl_fn_806F2A10_00000300
lbl_fn_806F2A10_00000298:
    cmpwi r3, -0x6
    beq lbl_fn_806F2A10_000002B0
    cmpwi r3, -0x1a
    beq lbl_fn_806F2A10_000002B0
    cmpwi r3, -0x4c
    bne lbl_fn_806F2A10_000002B8
lbl_fn_806F2A10_000002B0:
    li r3, 0x1
    b lbl_fn_806F2A10_00000300
lbl_fn_806F2A10_000002B8:
    li r4, 0x1
    stw r3, 0x54(r31)
    li r0, 0x5
    li r3, 0x3
    stw r4, 0x124(r31)
    stw r0, 0x40(r31)
    stw r4, 0x158(r31)
    b lbl_fn_806F2A10_00000300
lbl_fn_806F2A10_000002D8:
    cmpwi r4, 0x0
    bne lbl_fn_806F2A10_000002F0
    li r0, 0x1
    stw r0, 0x158(r31)
    li r3, 0x2
    b lbl_fn_806F2A10_00000300
lbl_fn_806F2A10_000002F0:
    li r0, 0x0
    stbx r0, r28, r4
    li r3, 0x0
    stw r4, 0x0(r29)
lbl_fn_806F2A10_00000300:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806F2BE0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    mr r6, r5
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    beq lbl_fn_806F2BE0_00000358
    cmpwi r5, 0x0
    bne lbl_fn_806F2BE0_00000360
lbl_fn_806F2BE0_00000358:
    li r3, 0x0
    b lbl_fn_806F2BE0_00000458
lbl_fn_806F2BE0_00000360:
    lwz r0, 0x198(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F2BE0_000003D8
    lwz r0, 0x1a4(r3)
    cmpwi r0, 0x1
    bne lbl_fn_806F2BE0_000003D8
    lwz r0, 0x1ac(r3)
    cmpwi r0, 0x1
    bne lbl_fn_806F2BE0_000003D8
    li r31, 0x0
    stw r31, 0x8(r1)
    mr r5, r4
    addi r4, r3, 0x194
    addi r7, r1, 0x8
    bl fn_806F3B30
    cmpwi r3, 0x1
    bne lbl_fn_806F2BE0_000003BC
    lwz r3, 0x8(r1)
    cmpwi r3, -0x1
    bne lbl_fn_806F2BE0_00000434
    li r3, -0x2
    b lbl_fn_806F2BE0_00000458
    b lbl_fn_806F2BE0_00000434
lbl_fn_806F2BE0_000003BC:
    li r3, 0x1
    li r0, 0x5
    stw r3, 0x124(r30)
    li r3, -0x1
    stw r0, 0x40(r30)
    stw r31, 0x54(r30)
    b lbl_fn_806F2BE0_00000458
lbl_fn_806F2BE0_000003D8:
    lwz r3, 0x50(r3)
    mr r5, r6
    li r6, 0x0
    bl fn_806D7D60
    cmpwi r3, -0x1
    bne lbl_fn_806F2BE0_00000434
    lwz r3, 0x50(r30)
    bl fn_806D7F20
    cmpwi r3, -0x6
    beq lbl_fn_806F2BE0_00000410
    cmpwi r3, -0x1a
    beq lbl_fn_806F2BE0_00000410
    cmpwi r3, -0x4c
    bne lbl_fn_806F2BE0_00000418
lbl_fn_806F2BE0_00000410:
    li r3, 0x0
    b lbl_fn_806F2BE0_00000458
lbl_fn_806F2BE0_00000418:
    stw r3, 0x54(r30)
    li r4, 0x1
    li r0, 0x5
    li r3, -0x1
    stw r4, 0x124(r30)
    stw r0, 0x40(r30)
    b lbl_fn_806F2BE0_00000458
lbl_fn_806F2BE0_00000434:
    lwz r0, 0x10(r30)
    cmpwi r0, 0x6
    bne lbl_fn_806F2BE0_00000458
    lwz r0, 0x180(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806F2BE0_00000458
    lwz r0, 0x170(r30)
    add r0, r0, r3
    stw r0, 0x170(r30)
lbl_fn_806F2BE0_00000458:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806F2D30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r6, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x198(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F2D30_00000520
    lwz r0, 0x1a4(r3)
    cmpwi r0, 0x1
    bne lbl_fn_806F2D30_00000520
    lwz r0, 0x1a8(r3)
    cmpwi r0, 0x1
    bne lbl_fn_806F2D30_00000520
    addi r3, r3, 0x58
    bl fn_806F21E0
    cmpwi r3, 0x0
    bne lbl_fn_806F2D30_000004E0
    li r3, 0x0
    b lbl_fn_806F2D30_0000059C
lbl_fn_806F2D30_000004E0:
    mr r3, r29
    bl fn_806F2630
    cmpwi r3, 0x0
    bne lbl_fn_806F2D30_000004F8
    li r3, 0x0
    b lbl_fn_806F2D30_0000059C
lbl_fn_806F2D30_000004F8:
    lwz r3, 0x68(r29)
    lwz r0, 0x64(r29)
    cmpw r3, r0
    blt lbl_fn_806F2D30_00000518
    addi r3, r29, 0x58
    bl fn_806F2600
    li r3, 0x1
    b lbl_fn_806F2D30_0000059C
lbl_fn_806F2D30_00000518:
    li r3, 0x2
    b lbl_fn_806F2D30_0000059C
lbl_fn_806F2D30_00000520:
    lwz r4, 0x68(r3)
    lwz r0, 0x64(r3)
    cmpw r4, r0
    blt lbl_fn_806F2D30_00000578
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_806F2BE0
    cmpwi r3, -0x1
    mr r6, r3
    beq lbl_fn_806F2D30_00000558
    cmpwi r3, -0x2
    beq lbl_fn_806F2D30_00000560
    b lbl_fn_806F2D30_00000568
lbl_fn_806F2D30_00000558:
    li r3, 0x0
    b lbl_fn_806F2D30_0000059C
lbl_fn_806F2D30_00000560:
    li r3, 0x2
    b lbl_fn_806F2D30_0000059C
lbl_fn_806F2D30_00000568:
    cmpw r3, r31
    bne lbl_fn_806F2D30_00000578
    li r3, 0x1
    b lbl_fn_806F2D30_0000059C
lbl_fn_806F2D30_00000578:
    addi r3, r29, 0x58
    add r4, r30, r6
    subf r5, r6, r31
    bl fn_806F2070
    cmpwi r3, 0x0
    bne lbl_fn_806F2D30_00000598
    li r3, 0x0
    b lbl_fn_806F2D30_0000059C
lbl_fn_806F2D30_00000598:
    li r3, 0x2
lbl_fn_806F2D30_0000059C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806F2E70(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r3, lbl_80862128@ha
    lis r4, lbl_8086212C@ha
    lwz r6, lbl_80862128@l(r3)
    li r3, 0x0
    lwz r0, lbl_8086212C@l(r4)
    mr r5, r6
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806F2E70_00000614
lbl_fn_806F2E70_000005F4:
    lwz r4, 0x0(r5)
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806F2E70_00000608
    b lbl_fn_806F2E70_000006C8
lbl_fn_806F2E70_00000608:
    addi r5, r5, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_806F2E70_000005F4
lbl_fn_806F2E70_00000614:
    lis r4, lbl_8086212C@ha
    mr r3, r6
    lwz r28, lbl_8086212C@l(r4)
    addi r26, r28, 0x4
    slwi r4, r26, 2
    bl fn_806D7AA0
    cmpwi r3, 0x0
    bne lbl_fn_806F2E70_0000063C
    li r3, -0x1
    b lbl_fn_806F2E70_000006C8
lbl_fn_806F2E70_0000063C:
    lis r30, lbl_80862128@ha
    mr r27, r28
    stw r3, lbl_80862128@l(r30)
    slwi r29, r28, 2
    li r31, 0x0
    b lbl_fn_806F2E70_000006B4
lbl_fn_806F2E70_00000654:
    li r3, 0x1d0
    bl fn_806D7A90
    lwz r4, lbl_80862128@l(r30)
    stwx r3, r4, r29
    lwz r3, lbl_80862128@l(r30)
    lwzx r3, r3, r29
    cmpwi r3, 0x0
    bne lbl_fn_806F2E70_000006A8
    subi r27, r27, 0x1
    lis r31, lbl_80862128@ha
    slwi r29, r27, 2
    b lbl_fn_806F2E70_00000698
lbl_fn_806F2E70_00000684:
    lwz r3, lbl_80862128@l(r31)
    lwzx r3, r3, r29
    bl fn_806D7AC0
    subi r29, r29, 0x4
    subi r27, r27, 0x1
lbl_fn_806F2E70_00000698:
    cmpw r27, r28
    bge lbl_fn_806F2E70_00000684
    li r3, -0x1
    b lbl_fn_806F2E70_000006C8
lbl_fn_806F2E70_000006A8:
    stw r31, 0x0(r3)
    addi r29, r29, 0x4
    addi r27, r27, 0x1
lbl_fn_806F2E70_000006B4:
    cmpw r27, r26
    blt lbl_fn_806F2E70_00000654
    lis r4, lbl_8086212C@ha
    mr r3, r28
    stw r26, lbl_8086212C@l(r4)
lbl_fn_806F2E70_000006C8:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806F2FA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_80862128@ha
    addi r30, r30, lbl_80862128@l
    stw r29, 0x14(r1)
    bl fn_806F28A0
    bl fn_806F2E70
    cmpwi r3, -0x1
    mr r31, r3
    bne lbl_fn_806F2FA0_0000072C
    bl fn_806F28B0
    li r3, 0x0
    b lbl_fn_806F2FA0_000008E8
lbl_fn_806F2FA0_0000072C:
    lwz r6, 0x0(r30)
    slwi r0, r3, 2
    li r4, 0x0
    li r5, 0x1d0
    lwzx r29, r6, r0
    mr r3, r29
    bl memset
    li r0, 0x1
    stw r0, 0x0(r29)
    li r9, 0x0
    li r8, -0x1
    stw r31, 0x4(r29)
    li r7, 0x1f4
    li r0, 0x50
    mr r3, r29
    lwz r6, 0x8(r30)
    addi r4, r29, 0x58
    stw r6, 0x8(r29)
    li r5, 0x800
    addi r10, r6, 0x1
    li r6, 0x1000
    stw r10, 0x8(r30)
    stw r9, 0xc(r29)
    stw r9, 0x10(r29)
    stw r9, 0x14(r29)
    stw r9, 0x18(r29)
    stw r9, 0x1c(r29)
    sth r9, 0x20(r29)
    stw r9, 0x24(r29)
    stw r9, 0x2c(r29)
    stw r9, 0x30(r29)
    stw r9, 0x38(r29)
    stw r9, 0x3c(r29)
    stw r9, 0x40(r29)
    stw r9, 0x44(r29)
    stw r9, 0x48(r29)
    stw r9, 0x4c(r29)
    stw r8, 0x50(r29)
    stw r9, 0x54(r29)
    stw r9, 0x10c(r29)
    stw r9, 0x110(r29)
    stw r9, 0x114(r29)
    stw r9, 0x118(r29)
    stw r9, 0x11c(r29)
    stw r9, 0x120(r29)
    stw r9, 0x124(r29)
    stw r9, 0x128(r29)
    stw r8, 0x12c(r29)
    stw r9, 0x130(r29)
    stw r9, 0x134(r29)
    stw r9, 0x138(r29)
    stw r9, 0x154(r29)
    stw r9, 0x15c(r29)
    stw r9, 0x160(r29)
    stw r9, 0x164(r29)
    stw r7, 0x188(r29)
    sth r0, 0x190(r29)
    stw r9, 0x18c(r29)
    stw r9, 0x194(r29)
    stw r9, 0x19c(r29)
    stw r9, 0x1cc(r29)
    stw r9, 0x1c8(r29)
    bl fn_806F1E90
    cmpwi r3, 0x0
    beq lbl_fn_806F2FA0_00000844
    mr r3, r29
    addi r4, r29, 0x7c
    li r5, 0x800
    li r6, 0x400
    bl fn_806F1E90
lbl_fn_806F2FA0_00000844:
    cmpwi r3, 0x0
    beq lbl_fn_806F2FA0_00000860
    mr r3, r29
    addi r4, r29, 0xa0
    li r5, 0x800
    li r6, 0x800
    bl fn_806F1E90
lbl_fn_806F2FA0_00000860:
    cmpwi r3, 0x0
    beq lbl_fn_806F2FA0_0000087C
    mr r3, r29
    addi r4, r29, 0xc4
    li r5, 0x800
    li r6, 0x400
    bl fn_806F1E90
lbl_fn_806F2FA0_0000087C:
    cmpwi r3, 0x0
    bne lbl_fn_806F2FA0_000008D4
    cmpwi r29, 0x0
    beq lbl_fn_806F2FA0_000008C8
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806F2FA0_000008C8
    lwz r3, 0x4(r29)
    cmpwi r3, 0x0
    blt lbl_fn_806F2FA0_000008C8
    lwz r0, 0x4(r30)
    cmpw r3, r0
    bge lbl_fn_806F2FA0_000008C8
    mr r3, r29
    bl fn_806F31C0
    cmpwi r3, 0x1
    bne lbl_fn_806F2FA0_000008C8
    mr r3, r29
    bl fn_806F3280
lbl_fn_806F2FA0_000008C8:
    bl fn_806F28B0
    li r3, 0x0
    b lbl_fn_806F2FA0_000008E8
lbl_fn_806F2FA0_000008D4:
    lwz r3, 0xc(r30)
    addi r0, r3, 0x1
    stw r0, 0xc(r30)
    bl fn_806F28B0
    mr r3, r29
lbl_fn_806F2FA0_000008E8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806F31C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bne lbl_fn_806F31C0_00000930
    li r3, 0x0
    b lbl_fn_806F31C0_000009B8
lbl_fn_806F31C0_00000930:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F31C0_00000944
    li r3, 0x0
    b lbl_fn_806F31C0_000009B8
lbl_fn_806F31C0_00000944:
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    bge lbl_fn_806F31C0_00000958
    li r3, 0x0
    b lbl_fn_806F31C0_000009B8
lbl_fn_806F31C0_00000958:
    lis r3, lbl_8086212C@ha
    lwz r0, lbl_8086212C@l(r3)
    cmpw r4, r0
    blt lbl_fn_806F31C0_00000970
    li r3, 0x0
    b lbl_fn_806F31C0_000009B8
lbl_fn_806F31C0_00000970:
    bl fn_806F28A0
    lwz r3, 0x1c8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806F31C0_0000098C
    bl fn_806D8D20
    li r0, 0x0
    stw r0, 0x1c8(r31)
lbl_fn_806F31C0_0000098C:
    lwz r3, 0x50(r31)
    cmpwi r3, -0x1
    beq lbl_fn_806F31C0_000009B0
    li r4, 0x2
    bl fn_806D7B70
    lwz r3, 0x50(r31)
    bl fn_806D7B30
    li r0, -0x1
    stw r0, 0x50(r31)
lbl_fn_806F31C0_000009B0:
    bl fn_806F28B0
    li r3, 0x1
lbl_fn_806F31C0_000009B8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806F3280(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_806F3280_000009F4
    li r3, 0x0
    b lbl_fn_806F3280_00000B20
lbl_fn_806F3280_000009F4:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F3280_00000A08
    li r3, 0x0
    b lbl_fn_806F3280_00000B20
lbl_fn_806F3280_00000A08:
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    bge lbl_fn_806F3280_00000A1C
    li r3, 0x0
    b lbl_fn_806F3280_00000B20
lbl_fn_806F3280_00000A1C:
    lis r3, lbl_8086212C@ha
    lwz r0, lbl_8086212C@l(r3)
    cmpw r4, r0
    blt lbl_fn_806F3280_00000A34
    li r3, 0x0
    b lbl_fn_806F3280_00000B20
lbl_fn_806F3280_00000A34:
    bl fn_806F28A0
    lwz r3, 0x14(r30)
    bl fn_806D7AC0
    li r31, 0x0
    stw r31, 0x14(r30)
    lwz r3, 0x34(r30)
    bl fn_806D7AC0
    stw r31, 0x34(r30)
    lwz r3, 0x18(r30)
    bl fn_806D7AC0
    stw r31, 0x18(r30)
    lwz r3, 0x24(r30)
    bl fn_806D7AC0
    stw r31, 0x24(r30)
    lwz r3, 0x2c(r30)
    bl fn_806D7AC0
    stw r31, 0x2c(r30)
    lwz r3, 0x130(r30)
    bl fn_806D7AC0
    stw r31, 0x2c(r30)
    lwz r3, 0x18c(r30)
    bl fn_806D7AC0
    stw r31, 0x18c(r30)
    addi r3, r30, 0x58
    bl fn_806F2010
    addi r3, r30, 0x7c
    bl fn_806F2010
    addi r3, r30, 0xa0
    bl fn_806F2010
    addi r3, r30, 0xc4
    bl fn_806F2010
    addi r3, r30, 0xe8
    bl fn_806F2010
    lwz r0, 0x168(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806F3280_00000ACC
    mr r3, r30
    bl fn_806F4980
lbl_fn_806F3280_00000ACC:
    lwz r0, 0x19c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806F3280_00000AFC
    lwz r12, 0x1b8(r30)
    cmpwi r12, 0x0
    beq lbl_fn_806F3280_00000AF4
    mr r3, r30
    addi r4, r30, 0x194
    mtctr r12
    bctrl
lbl_fn_806F3280_00000AF4:
    li r0, 0x0
    stw r0, 0x19c(r30)
lbl_fn_806F3280_00000AFC:
    li r0, 0x0
    stw r0, 0x1cc(r30)
    lis r4, lbl_80862134@ha
    stw r0, 0x0(r30)
    lwz r3, lbl_80862134@l(r4)
    subi r0, r3, 0x1
    stw r0, lbl_80862134@l(r4)
    bl fn_806F28B0
    li r3, 0x1
lbl_fn_806F3280_00000B20:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806F33F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bne lbl_fn_806F33F0_00000B60
    li r3, 0x0
    b lbl_fn_806F33F0_00000BBC
lbl_fn_806F33F0_00000B60:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F33F0_00000B74
    li r3, 0x0
    b lbl_fn_806F33F0_00000BBC
lbl_fn_806F33F0_00000B74:
    lwz r5, 0x4(r3)
    cmpwi r5, 0x0
    bge lbl_fn_806F33F0_00000B88
    li r3, 0x0
    b lbl_fn_806F33F0_00000BBC
lbl_fn_806F33F0_00000B88:
    lis r4, lbl_8086212C@ha
    lwz r0, lbl_8086212C@l(r4)
    cmpw r5, r0
    blt lbl_fn_806F33F0_00000BA0
    li r3, 0x0
    b lbl_fn_806F33F0_00000BBC
lbl_fn_806F33F0_00000BA0:
    bl fn_806F31C0
    cmpwi r3, 0x1
    beq lbl_fn_806F33F0_00000BB4
    li r3, 0x0
    b lbl_fn_806F33F0_00000BBC
lbl_fn_806F33F0_00000BB4:
    mr r3, r31
    bl fn_806F3280
lbl_fn_806F33F0_00000BBC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806F3490(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_806F28A0
    cmpwi r31, 0x0
    blt lbl_fn_806F3490_00000C0C
    lis r3, lbl_8086212C@ha
    lwz r0, lbl_8086212C@l(r3)
    cmpw r31, r0
    blt lbl_fn_806F3490_00000C18
lbl_fn_806F3490_00000C0C:
    bl fn_806F28B0
    li r3, 0x0
    b lbl_fn_806F3490_00000C40
lbl_fn_806F3490_00000C18:
    lis r3, lbl_80862128@ha
    slwi r0, r31, 2
    lwz r3, lbl_80862128@l(r3)
    lwzx r31, r3, r0
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806F3490_00000C38
    li r31, 0x0
lbl_fn_806F3490_00000C38:
    bl fn_806F28B0
    mr r3, r31
lbl_fn_806F3490_00000C40:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806F3510(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80862128@ha
    addi r31, r31, lbl_80862128@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    ble lbl_fn_806F3510_00000CD8
    bl fn_806F28A0
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_806F3510_00000CC8
lbl_fn_806F3510_00000CA0:
    lwz r3, 0x0(r31)
    lwzx r3, r3, r30
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F3510_00000CC0
    mr r12, r28
    mtctr r12
    bctrl
lbl_fn_806F3510_00000CC0:
    addi r30, r30, 0x4
    addi r29, r29, 0x1
lbl_fn_806F3510_00000CC8:
    lwz r0, 0x4(r31)
    cmpw r29, r0
    blt lbl_fn_806F3510_00000CA0
    bl fn_806F28B0
lbl_fn_806F3510_00000CD8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806F35B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x1c8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F35B0_00000D30
    mr r3, r0
    bl fn_806D8D20
    li r0, 0x0
    stw r0, 0x1c8(r30)
lbl_fn_806F35B0_00000D30:
    lwz r3, 0x50(r30)
    li r4, 0x2
    bl fn_806D7B70
    lwz r3, 0x50(r30)
    bl fn_806D7B30
    lwz r3, 0x14(r30)
    bl fn_806D7AC0
    lwz r0, 0x130(r30)
    li r31, 0x0
    stw r0, 0x14(r30)
    lwz r3, 0x18(r30)
    stw r31, 0x130(r30)
    bl fn_806D7AC0
    stw r31, 0x18(r30)
    lwz r3, 0x24(r30)
    stw r31, 0x1c(r30)
    sth r31, 0x20(r30)
    bl fn_806D7AC0
    li r0, -0x1
    stw r31, 0x24(r30)
    addi r3, r30, 0x58
    stw r31, 0x10(r30)
    stw r0, 0x50(r30)
    bl fn_806F2600
    addi r3, r30, 0x7c
    bl fn_806F2600
    addi r3, r30, 0xa0
    bl fn_806F2600
    addi r3, r30, 0xc4
    bl fn_806F2600
    lwz r0, 0x19c(r30)
    stw r31, 0x110(r30)
    cmpwi r0, 0x0
    stw r31, 0x114(r30)
    stw r31, 0x118(r30)
    stw r31, 0x11c(r30)
    stw r31, 0x120(r30)
    stw r31, 0x158(r30)
    beq lbl_fn_806F35B0_00000E14
    lwz r12, 0x1b8(r30)
    cmpwi r12, 0x0
    beq lbl_fn_806F35B0_00000DE8
    mr r3, r30
    addi r4, r30, 0x194
    mtctr r12
    bctrl
lbl_fn_806F35B0_00000DE8:
    li r31, 0x0
    lis r3, lbl_807C5790@ha
    stw r31, 0x19c(r30)
    addi r3, r3, lbl_807C5790@l
    lwz r4, 0x14(r30)
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    beq lbl_fn_806F35B0_00000E14
    stw r31, 0x198(r30)
    stw r31, 0x194(r30)
lbl_fn_806F35B0_00000E14:
    lwz r3, 0x134(r30)
    addi r0, r3, 0x1
    stw r0, 0x134(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806F36F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80862128@ha
    addi r31, r31, lbl_80862128@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806F36F0_00000F30
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    ble lbl_fn_806F36F0_00000EEC
    bl fn_806F28A0
    li r30, 0x0
    li r29, 0x0
    b lbl_fn_806F36F0_00000EDC
lbl_fn_806F36F0_00000E88:
    lwz r3, 0x0(r31)
    lwzx r28, r3, r29
    lwz r0, 0x0(r28)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_806F36F0_00000ED4
    cmpwi r28, 0x0
    beq lbl_fn_806F36F0_00000ED4
    beq cr1, lbl_fn_806F36F0_00000ED4
    lwz r0, 0x4(r28)
    cmpwi r0, 0x0
    blt lbl_fn_806F36F0_00000ED4
    cmpw r0, r4
    bge lbl_fn_806F36F0_00000ED4
    mr r3, r28
    bl fn_806F31C0
    cmpwi r3, 0x1
    bne lbl_fn_806F36F0_00000ED4
    mr r3, r28
    bl fn_806F3280
lbl_fn_806F36F0_00000ED4:
    addi r29, r29, 0x4
    addi r30, r30, 0x1
lbl_fn_806F36F0_00000EDC:
    lwz r4, 0x4(r31)
    cmpw r30, r4
    blt lbl_fn_806F36F0_00000E88
    bl fn_806F28B0
lbl_fn_806F36F0_00000EEC:
    li r28, 0x0
    li r30, 0x0
    b lbl_fn_806F36F0_00000F0C
lbl_fn_806F36F0_00000EF8:
    lwz r3, 0x0(r31)
    lwzx r3, r3, r30
    bl fn_806D7AC0
    addi r30, r30, 0x4
    addi r28, r28, 0x1
lbl_fn_806F36F0_00000F0C:
    lwz r0, 0x4(r31)
    cmpw r28, r0
    blt lbl_fn_806F36F0_00000EF8
    lwz r3, 0x0(r31)
    bl fn_806D7AC0
    li r0, 0x0
    stw r0, 0x0(r31)
    stw r0, 0x4(r31)
    stw r0, 0xc(r31)
lbl_fn_806F36F0_00000F30:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806F3810(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    bl fn_806F3490
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806F3810_00000F8C
    li r3, 0x0
    b lbl_fn_806F3810_00001070
lbl_fn_806F3810_00000F8C:
    cmpwi r30, 0x5
    bne lbl_fn_806F3810_00000F98
    li r30, 0x3
lbl_fn_806F3810_00000F98:
    lwz r0, 0x198(r3)
    cmpw cr1, r0, r30
    bne cr1, lbl_fn_806F3810_00000FAC
    li r3, 0x1
    b lbl_fn_806F3810_00001070
lbl_fn_806F3810_00000FAC:
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F3810_00000FC4
    beq cr1, lbl_fn_806F3810_00000FC4
    li r3, 0x0
    b lbl_fn_806F3810_00001070
lbl_fn_806F3810_00000FC4:
    cmpwi r30, 0x0
    bne lbl_fn_806F3810_00000FF0
    lis r4, lbl_807C57A0@ha
    lwz r3, 0x14(r3)
    addi r4, r4, lbl_807C57A0@l
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806F3810_00000FF0
    li r3, 0x0
    b lbl_fn_806F3810_00001070
lbl_fn_806F3810_00000FF0:
    cmpwi r30, 0x0
    stw r30, 0x198(r31)
    bne lbl_fn_806F3810_0000100C
    li r0, 0x0
    stw r0, 0x194(r31)
    li r3, 0x1
    b lbl_fn_806F3810_00001070
lbl_fn_806F3810_0000100C:
    li r6, 0x0
    stw r6, 0x194(r31)
    lis r4, fn_806F3940@ha
    lis r3, fn_806F3A90@ha
    addi r4, r4, fn_806F3940@l
    stw r4, 0x1b4(r31)
    addi r3, r3, fn_806F3A90@l
    lis r5, fn_806F3A20@ha
    stw r3, 0x1bc(r31)
    addi r5, r5, fn_806F3A20@l
    lis r3, fn_806F3C20@ha
    lis r4, fn_806F3C30@ha
    stw r5, 0x1b8(r31)
    addi r3, r3, fn_806F3C20@l
    addi r4, r4, fn_806F3C30@l
    li r0, 0x1
    stw r3, 0x1c0(r31)
    li r3, 0x1
    stw r4, 0x1c4(r31)
    stw r6, 0x19c(r31)
    stw r6, 0x1a0(r31)
    stw r6, 0x1a4(r31)
    stw r0, 0x1a8(r31)
    stw r6, 0x1ac(r31)
    stw r6, 0x1b0(r31)
lbl_fn_806F3810_00001070:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806F3940(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x10
    bl fn_806D7A90
    cmpwi r3, 0x0
    stw r3, 0x0(r30)
    bne lbl_fn_806F3940_000010C8
    li r3, 0x3
    b lbl_fn_806F3940_00001150
lbl_fn_806F3940_000010C8:
    li r4, 0x0
    li r5, 0x10
    bl memset
    lwz r31, 0x0(r30)
    li r3, 0x1b
    lwz r4, 0x18(r29)
    bl fn_806A4F3C
    stw r3, 0x0(r31)
    li r4, 0x1
    bl fn_806A5AF8
    cmpwi r3, 0x0
    beq lbl_fn_806F3940_00001108
    lwz r3, 0x0(r31)
    bl fn_806A5798
    li r3, 0x3
    b lbl_fn_806F3940_00001150
lbl_fn_806F3940_00001108:
    lwz r3, 0x0(r31)
    li r4, 0x0
    bl fn_806A5BC0
    cmpwi r3, 0x0
    beq lbl_fn_806F3940_0000112C
    lwz r3, 0x0(r31)
    bl fn_806A5798
    li r3, 0x3
    b lbl_fn_806F3940_00001150
lbl_fn_806F3940_0000112C:
    li r4, 0x1
    li r0, 0x0
    stw r4, 0x8(r30)
    li r3, 0x1
    stw r0, 0xc(r30)
    stw r0, 0x10(r30)
    stw r0, 0x14(r30)
    stw r4, 0x18(r30)
    stw r4, 0x1c(r30)
lbl_fn_806F3940_00001150:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806F3A20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    beq lbl_fn_806F3A20_000011C0
    lwz r31, 0x0(r4)
    cmpwi r31, 0x0
    beq lbl_fn_806F3A20_000011B0
    lwz r3, 0x0(r31)
    bl fn_806A5798
    mr r3, r31
    bl fn_806D7AC0
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_806F3A20_000011B0:
    li r0, 0x0
    stw r0, 0x8(r30)
    stw r0, 0xc(r30)
    stw r0, 0x10(r30)
lbl_fn_806F3A20_000011C0:
    lwz r31, 0xc(r1)
    li r3, 0x1
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806F3A90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r5, r3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r31, 0x0(r4)
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806F3A90_0000122C
    lwz r3, 0x0(r31)
    lwz r4, 0x50(r5)
    bl fn_806A5094
    cmpwi r3, 0x0
    beq lbl_fn_806F3A90_00001224
    li r3, 0x3
    b lbl_fn_806F3A90_00001264
lbl_fn_806F3A90_00001224:
    li r0, 0x1
    stw r0, 0xc(r31)
lbl_fn_806F3A90_0000122C:
    lwz r3, 0x0(r31)
    bl fn_806A515C
    cmpwi r3, 0x0
    beq lbl_fn_806F3A90_00001254
    addi r0, r3, 0x3
    li r3, 0x3
    cmplwi r0, 0x1
    bgt lbl_fn_806F3A90_00001264
    li r3, 0x1
    b lbl_fn_806F3A90_00001264
lbl_fn_806F3A90_00001254:
    li r0, 0x1
    stw r0, 0xc(r30)
    li r3, 0x1
    stw r0, 0x10(r30)
lbl_fn_806F3A90_00001264:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806F3B30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r3, r4
    mr r4, r5
    stw r0, 0x14(r1)
    mr r5, r6
    stw r31, 0xc(r1)
    mr r31, r7
    lwz r3, 0x0(r3)
    lwz r3, 0x0(r3)
    bl fn_806A54D8
    cmpwi r3, -0x3
    bne lbl_fn_806F3B30_000012BC
    li r0, -0x1
    stw r0, 0x0(r31)
    b lbl_fn_806F3B30_000012D0
lbl_fn_806F3B30_000012BC:
    cmpwi r3, 0x0
    bge lbl_fn_806F3B30_000012CC
    li r3, 0x3
    b lbl_fn_806F3B30_000012D4
lbl_fn_806F3B30_000012CC:
    stw r3, 0x0(r31)
lbl_fn_806F3B30_000012D0:
    li r3, 0x1
lbl_fn_806F3B30_000012D4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806F3BA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r3, r4
    mr r4, r5
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r6
    lwz r3, 0x0(r3)
    lwz r5, 0x0(r6)
    lwz r3, 0x0(r3)
    bl fn_806A5208
    cmpwi r3, -0x6
    bne lbl_fn_806F3BA0_0000132C
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_806F3BA0_00001354
lbl_fn_806F3BA0_0000132C:
    cmpwi r3, -0x2
    bne lbl_fn_806F3BA0_00001340
    li r0, -0x1
    stw r0, 0x0(r31)
    b lbl_fn_806F3BA0_00001354
lbl_fn_806F3BA0_00001340:
    cmpwi r3, 0x0
    bge lbl_fn_806F3BA0_00001350
    li r3, 0x3
    b lbl_fn_806F3BA0_00001358
lbl_fn_806F3BA0_00001350:
    stw r3, 0x0(r31)
lbl_fn_806F3BA0_00001354:
    li r3, 0x1
lbl_fn_806F3BA0_00001358:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806F3C20(void)
{
    nofralloc
    li r3, 0x3
    blr
}

asm void fn_806F3C30(void)
{
    nofralloc
    li r3, 0x3
    blr
}

asm void fn_806F3C40(void)
{
    nofralloc
    lis r4, 0x51ec
    lwz r5, 0x118(r3)
    subi r0, r4, 0x7ae1
    mulhw r0, r0, r5
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    cmpwi r0, 0x1
    beqlr
    cmpwi r0, 0x2
    beqlr
    cmpwi r0, 0x3
    beqlr
    cmpwi r0, 0x4
    beq lbl_fn_806F3C40_000013E0
    cmpwi r0, 0x5
    beq lbl_fn_806F3C40_00001434
    blr
    blr
    blr
    blr
lbl_fn_806F3C40_000013E0:
    cmpwi r5, 0x191
    beq lbl_fn_806F3C40_00001404
    cmpwi r5, 0x193
    beq lbl_fn_806F3C40_00001410
    cmpwi r5, 0x194
    beq lbl_fn_806F3C40_0000141C
    cmpwi r5, 0x19a
    beq lbl_fn_806F3C40_0000141C
    b lbl_fn_806F3C40_00001428
lbl_fn_806F3C40_00001404:
    li r0, 0x9
    stw r0, 0x40(r3)
    blr
lbl_fn_806F3C40_00001410:
    li r0, 0xa
    stw r0, 0x40(r3)
    blr
lbl_fn_806F3C40_0000141C:
    li r0, 0xb
    stw r0, 0x40(r3)
    blr
lbl_fn_806F3C40_00001428:
    li r0, 0x8
    stw r0, 0x40(r3)
    blr
lbl_fn_806F3C40_00001434:
    li r0, 0xc
    stw r0, 0x40(r3)
    blr
}

asm void fn_806F3D00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r0, 0x154(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F3D00_00001478
    li r3, 0x0
    b lbl_fn_806F3D00_0000160C
lbl_fn_806F3D00_00001478:
    lwz r0, 0x10(r3)
    li r4, 0x1
    stw r4, 0x154(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F3D00_00001490
    bl fn_806F5AD0
lbl_fn_806F3D00_00001490:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x1
    bne lbl_fn_806F3D00_000014A4
    mr r3, r31
    bl fn_806F5BE0
lbl_fn_806F3D00_000014A4:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x2
    bne lbl_fn_806F3D00_000014B8
    mr r3, r31
    bl fn_806F5CF0
lbl_fn_806F3D00_000014B8:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x3
    bne lbl_fn_806F3D00_000014CC
    mr r3, r31
    bl fn_806F5D90
lbl_fn_806F3D00_000014CC:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x4
    bne lbl_fn_806F3D00_000014E0
    mr r3, r31
    bl fn_806F6000
lbl_fn_806F3D00_000014E0:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x5
    bne lbl_fn_806F3D00_000014F4
    mr r3, r31
    bl fn_806F61E0
lbl_fn_806F3D00_000014F4:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x6
    bne lbl_fn_806F3D00_00001508
    mr r3, r31
    bl fn_806F64D0
lbl_fn_806F3D00_00001508:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x7
    bne lbl_fn_806F3D00_0000151C
    mr r3, r31
    bl fn_806F65D0
lbl_fn_806F3D00_0000151C:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x8
    bne lbl_fn_806F3D00_00001530
    mr r3, r31
    bl fn_806F67A0
lbl_fn_806F3D00_00001530:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x9
    bne lbl_fn_806F3D00_00001544
    mr r3, r31
    bl fn_806F6CA0
lbl_fn_806F3D00_00001544:
    lwz r0, 0x10(r31)
    cmpwi r0, 0xa
    bne lbl_fn_806F3D00_00001558
    mr r3, r31
    bl fn_806F72F0
lbl_fn_806F3D00_00001558:
    lwz r0, 0x130(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806F3D00_0000156C
    mr r3, r31
    bl fn_806F35B0
lbl_fn_806F3D00_0000156C:
    lwz r0, 0x40(r31)
    lwz r30, 0x124(r31)
    cmpwi r0, 0x12
    bne lbl_fn_806F3D00_0000159C
    cmpwi r30, 0x0
    bne lbl_fn_806F3D00_0000159C
    lwz r3, 0x50(r31)
    bl fn_806D8650
    cmpwi r3, 0x0
    bne lbl_fn_806F3D00_0000159C
    li r0, 0x1
    stw r0, 0x124(r31)
lbl_fn_806F3D00_0000159C:
    lwz r0, 0x124(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806F3D00_00001600
    mr r3, r31
    bl fn_806F3C40
    mr r3, r31
    bl fn_806F31C0
    cmpwi r3, 0x0
    bne lbl_fn_806F3D00_000015D8
    li r3, 0x0
    li r0, 0xb
    stw r3, 0x154(r31)
    li r3, 0x0
    stw r0, 0x10(r31)
    b lbl_fn_806F3D00_0000160C
lbl_fn_806F3D00_000015D8:
    mr r3, r31
    bl fn_806F2750
    mr r3, r31
    bl fn_806F3280
    cmpwi r3, 0x0
    bne lbl_fn_806F3D00_00001608
    li r0, 0x0
    stw r0, 0x154(r31)
    li r3, 0x0
    b lbl_fn_806F3D00_0000160C
lbl_fn_806F3D00_00001600:
    li r0, 0x0
    stw r0, 0x154(r31)
lbl_fn_806F3D00_00001608:
    mr r3, r30
lbl_fn_806F3D00_0000160C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806F3EE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_806F28A0
    lis r4, lbl_80862138@ha
    lwz r3, lbl_80862138@l(r4)
    addi r0, r3, 0x1
    stw r0, lbl_80862138@l(r4)
    cmpwi r0, 0x1
    bne lbl_fn_806F3EE0_00001674
    bl fn_806F2880
    lis r4, lbl_807C5788@ha
    lis r3, lbl_807C578C@ha
    li r5, 0x7d
    li r0, 0xfa
    stw r5, lbl_807C5788@l(r4)
    stw r0, lbl_807C578C@l(r3)
    b lbl_fn_806F3EE0_00001678
lbl_fn_806F3EE0_00001674:
    bl fn_806F28B0
lbl_fn_806F3EE0_00001678:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806F3F40(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_806F28A0
    lis r3, lbl_80862138@ha
    lwz r0, lbl_80862138@l(r3)
    subic. r0, r0, 0x1
    stw r0, lbl_80862138@l(r3)
    bne lbl_fn_806F3F40_000016E0
    bl fn_806F36F0
    lis r31, lbl_80862120@ha
    lwz r3, lbl_80862120@l(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806F3F40_000016D4
    bl fn_806D7AC0
    li r0, 0x0
    stw r0, lbl_80862120@l(r31)
lbl_fn_806F3F40_000016D4:
    bl fn_806F28B0
    bl fn_806F2890
    b lbl_fn_806F3F40_000016E4
lbl_fn_806F3F40_000016E0:
    bl fn_806F28B0
lbl_fn_806F3F40_000016E4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806F3FB0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    cmpwi r3, 0x0
    lwz r30, 0x48(r1)
    lwz r31, 0x4c(r1)
    mr r22, r3
    mr r23, r4
    mr r24, r5
    mr r25, r6
    mr r26, r7
    mr r27, r8
    mr r28, r9
    mr r29, r10
    beq lbl_fn_806F3FB0_0000174C
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_806F3FB0_00001754
lbl_fn_806F3FB0_0000174C:
    li r3, -0x1
    b lbl_fn_806F3FB0_00001908
lbl_fn_806F3FB0_00001754:
    cmpwi cr1, r6, 0x0
    bge cr1, lbl_fn_806F3FB0_00001764
    li r3, -0x1
    b lbl_fn_806F3FB0_00001908
lbl_fn_806F3FB0_00001764:
    cmpwi r5, 0x0
    beq lbl_fn_806F3FB0_00001778
    bne cr1, lbl_fn_806F3FB0_00001778
    li r3, -0x1
    b lbl_fn_806F3FB0_00001908
lbl_fn_806F3FB0_00001778:
    lis r21, lbl_80862138@ha
    lwz r0, lbl_80862138@l(r21)
    cmpwi r0, 0x0
    bne lbl_fn_806F3FB0_000017C4
    bl fn_806F28A0
    lwz r3, lbl_80862138@l(r21)
    addi r0, r3, 0x1
    stw r0, lbl_80862138@l(r21)
    cmpwi r0, 0x1
    bne lbl_fn_806F3FB0_000017C0
    bl fn_806F2880
    lis r4, lbl_807C5788@ha
    lis r3, lbl_807C578C@ha
    li r5, 0x7d
    li r0, 0xfa
    stw r5, lbl_807C5788@l(r4)
    stw r0, lbl_807C578C@l(r3)
    b lbl_fn_806F3FB0_000017C4
lbl_fn_806F3FB0_000017C0:
    bl fn_806F28B0
lbl_fn_806F3FB0_000017C4:
    bl fn_806F2FA0
    cmpwi r3, 0x0
    mr r21, r3
    bne lbl_fn_806F3FB0_000017DC
    li r3, -0x1
    b lbl_fn_806F3FB0_00001908
lbl_fn_806F3FB0_000017DC:
    li r0, 0x0
    stw r0, 0xc(r3)
    mr r3, r22
    bl fn_806D8E30
    cmpwi r3, 0x0
    stw r3, 0x14(r21)
    bne lbl_fn_806F3FB0_00001808
    mr r3, r21
    bl fn_806F33F0
    li r3, -0x1
    b lbl_fn_806F3FB0_00001908
lbl_fn_806F3FB0_00001808:
    cmpwi r23, 0x0
    beq lbl_fn_806F3FB0_00001840
    lbz r0, 0x0(r23)
    extsb. r0, r0
    beq lbl_fn_806F3FB0_00001840
    mr r3, r23
    bl fn_806D8E30
    cmpwi r3, 0x0
    stw r3, 0x2c(r21)
    bne lbl_fn_806F3FB0_00001840
    mr r3, r21
    bl fn_806F33F0
    li r3, -0x1
    b lbl_fn_806F3FB0_00001908
lbl_fn_806F3FB0_00001840:
    stw r26, 0x164(r21)
    neg r0, r24
    or r0, r0, r24
    stw r28, 0x38(r21)
    srwi. r0, r0, 31
    stw r29, 0x44(r21)
    stw r30, 0x48(r21)
    stw r31, 0x4c(r21)
    stw r27, 0x15c(r21)
    stw r0, 0x10c(r21)
    beq lbl_fn_806F3FB0_00001884
    mr r3, r21
    mr r5, r24
    mr r6, r25
    addi r4, r21, 0xe8
    bl fn_806F1F90
    b lbl_fn_806F3FB0_00001898
lbl_fn_806F3FB0_00001884:
    mr r3, r21
    addi r4, r21, 0xe8
    li r5, 0x800
    li r6, 0x800
    bl fn_806F1E90
lbl_fn_806F3FB0_00001898:
    cmpwi r3, 0x0
    bne lbl_fn_806F3FB0_000018B0
    mr r3, r21
    bl fn_806F33F0
    li r3, -0x1
    b lbl_fn_806F3FB0_00001908
lbl_fn_806F3FB0_000018B0:
    cmpwi r26, 0x0
    beq lbl_fn_806F3FB0_000018D8
    mr r3, r21
    bl fn_806F47B0
    cmpwi r3, 0x0
    bne lbl_fn_806F3FB0_000018D8
    mr r3, r21
    bl fn_806F33F0
    li r3, -0x1
    b lbl_fn_806F3FB0_00001908
lbl_fn_806F3FB0_000018D8:
    cmpwi r28, 0x0
    beq lbl_fn_806F3FB0_00001904
    b lbl_fn_806F3FB0_000018EC
lbl_fn_806F3FB0_000018E4:
    li r3, 0xa
    bl fn_806D8F80
lbl_fn_806F3FB0_000018EC:
    mr r3, r21
    bl fn_806F3D00
    cmpwi r3, 0x0
    beq lbl_fn_806F3FB0_000018E4
    li r3, 0x0
    b lbl_fn_806F3FB0_00001908
lbl_fn_806F3FB0_00001904:
    lwz r3, 0x4(r21)
lbl_fn_806F3FB0_00001908:
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806F41E0(void)
{
    nofralloc
    lis r3, fn_806F3D00@ha
    addi r3, r3, fn_806F3D00@l
    b fn_806F3510
}

asm void fn_806F41F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_806F3490
    cmpwi r3, 0x0
    beq lbl_fn_806F41F0_00001970
    li r0, 0x12
    stw r0, 0x40(r3)
    li r4, 0xb
    stw r4, 0x10(r3)
    li r0, 0x1
    stw r0, 0x124(r3)
    bl fn_806F31C0
lbl_fn_806F41F0_00001970:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806F4240(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bl fn_806F3490
    cmpwi r3, 0x0
    beq lbl_fn_806F4240_000019B0
    stw r31, 0x188(r3)
lbl_fn_806F4240_000019B0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806F4280(void)
{
    nofralloc
    lwz r3, 0x164(r3)
    lis r4, lbl_807C57B0@ha
    addi r4, r4, lbl_807C57B0@l
    cmpwi r3, 0x0
    bne lbl_fn_806F4280_000019E8
    addi r3, r4, 0x44
    blr
lbl_fn_806F4280_000019E8:
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F4280_000019FC
    addi r3, r4, 0x48
    blr
lbl_fn_806F4280_000019FC:
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F4280_00001A10
    addi r3, r4, 0x5c
    blr
lbl_fn_806F4280_00001A10:
    lwz r0, 0x10(r3)
    addi r3, r4, 0xac
    cmpwi r0, 0x0
    beqlr
    addi r3, r4, 0xa0
    blr
}

asm void fn_806F42E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r29, 0x164(r3)
    li r27, 0x0
    lwz r3, 0x0(r29)
    bl fn_806D58F0
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_806F42E0_00001A64
    li r3, 0x0
    b lbl_fn_806F42E0_00001AD8
lbl_fn_806F42E0_00001A64:
    li r28, 0x0
    b lbl_fn_806F42E0_00001AC8
lbl_fn_806F42E0_00001A6C:
    lwz r3, 0x0(r29)
    mr r4, r28
    bl fn_806D5900
    lwz r0, 0x0(r3)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_806F42E0_00001AB0
    lwz r3, 0x4(r3)
    bl strlen
    lwz r0, 0x14(r31)
    add r27, r27, r3
    lwz r3, 0xc(r31)
    slwi r0, r0, 1
    add r27, r27, r3
    add r27, r27, r0
    addi r27, r27, 0x1
    b lbl_fn_806F42E0_00001AC4
lbl_fn_806F42E0_00001AB0:
    cmpwi r0, 0x3
    bne lbl_fn_806F42E0_00001AC4
    lwz r3, 0x8(r3)
    bl fn_806DA870
    add r27, r27, r3
lbl_fn_806F42E0_00001AC4:
    addi r28, r28, 0x1
lbl_fn_806F42E0_00001AC8:
    cmpw r28, r30
    blt lbl_fn_806F42E0_00001A6C
    add r3, r27, r30
    subi r3, r3, 0x1
lbl_fn_806F42E0_00001AD8:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806F43B0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_17
    lwz r26, 0x164(r3)
    lis r29, lbl_807C57B0@ha
    mr r19, r3
    li r24, 0x0
    lwz r0, 0x14(r26)
    addi r29, r29, lbl_807C57B0@l
    cmpwi r0, 0x0
    beq lbl_fn_806F43B0_00001B44
    li r23, 0xc
    li r22, 0xc
    li r20, 0xc
    li r21, 0x0
    b lbl_fn_806F43B0_00001B5C
lbl_fn_806F43B0_00001B44:
    addi r3, r29, 0xd0
    bl strlen
    addi r23, r3, 0x2f
    addi r22, r3, 0x4c
    addi r21, r3, 0x4
    li r20, 0x0
lbl_fn_806F43B0_00001B5C:
    lwz r3, 0x0(r26)
    bl fn_806D58F0
    mr r30, r3
    li r25, 0x0
    b lbl_fn_806F43B0_00001E18
lbl_fn_806F43B0_00001B70:
    lwz r3, 0x0(r26)
    mr r4, r25
    bl fn_806D5900
    lwz r0, 0x0(r3)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_806F43B0_00001BA8
    lwz r3, 0x4(r3)
    add r24, r24, r23
    bl strlen
    lwz r0, 0xc(r31)
    add r24, r24, r3
    add r24, r24, r0
    b lbl_fn_806F43B0_00001E14
lbl_fn_806F43B0_00001BA8:
    cmpwi r0, 0x1
    bne lbl_fn_806F43B0_00001C80
    lwz r3, 0x4(r3)
    add r24, r24, r22
    bl strlen
    add r24, r24, r3
    lwz r3, 0x10(r31)
    bl strlen
    add r24, r24, r3
    lwz r3, 0x168(r19)
    mr r4, r25
    bl fn_806D5900
    lwz r27, 0x14(r26)
    lwz r28, 0xc(r3)
    cmpwi r27, 0x0
    add r24, r24, r28
    bne lbl_fn_806F43B0_00001BF8
    lwz r3, 0xc(r31)
    bl strlen
    add r24, r24, r3
lbl_fn_806F43B0_00001BF8:
    cmpwi r27, 0x0
    beq lbl_fn_806F43B0_00001E14
    lwz r3, 0x4(r31)
    bl strlen
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r0, r0, r3
    subfic r0, r0, 0x4
    cmpwi r0, 0x4
    beq lbl_fn_806F43B0_00001C2C
    add r24, r24, r0
lbl_fn_806F43B0_00001C2C:
    lwz r3, 0x10(r31)
    bl strlen
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r0, r0, r3
    subfic r0, r0, 0x4
    cmpwi r0, 0x4
    beq lbl_fn_806F43B0_00001C58
    add r24, r24, r0
lbl_fn_806F43B0_00001C58:
    slwi r0, r28, 30
    srwi r3, r28, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r0, r0, r3
    subfic r0, r0, 0x4
    cmpwi r0, 0x4
    beq lbl_fn_806F43B0_00001E14
    add r24, r24, r0
    b lbl_fn_806F43B0_00001E14
lbl_fn_806F43B0_00001C80:
    cmpwi r0, 0x2
    bne lbl_fn_806F43B0_00001D54
    lwz r17, 0x4(r3)
    add r24, r24, r22
    mr r3, r17
    bl strlen
    lwz r28, 0x14(r31)
    add r24, r24, r3
    mr r3, r28
    bl strlen
    lwz r18, 0x14(r26)
    add r24, r24, r3
    lwz r27, 0xc(r31)
    cmpwi r18, 0x0
    add r24, r24, r27
    bne lbl_fn_806F43B0_00001CCC
    lwz r3, 0x10(r31)
    bl strlen
    add r24, r24, r3
lbl_fn_806F43B0_00001CCC:
    cmpwi r18, 0x0
    beq lbl_fn_806F43B0_00001E14
    mr r3, r17
    bl strlen
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r0, r0, r3
    subfic r0, r0, 0x4
    cmpwi r0, 0x4
    beq lbl_fn_806F43B0_00001D00
    add r24, r24, r0
lbl_fn_806F43B0_00001D00:
    mr r3, r28
    bl strlen
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r0, r0, r3
    subfic r0, r0, 0x4
    cmpwi r0, 0x4
    beq lbl_fn_806F43B0_00001D2C
    add r24, r24, r0
lbl_fn_806F43B0_00001D2C:
    slwi r0, r27, 30
    srwi r3, r27, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r0, r0, r3
    subfic r0, r0, 0x4
    cmpwi r0, 0x4
    beq lbl_fn_806F43B0_00001E14
    add r24, r24, r0
    b lbl_fn_806F43B0_00001E14
lbl_fn_806F43B0_00001D54:
    cmpwi r0, 0x3
    bne lbl_fn_806F43B0_00001E0C
    lwz r3, 0x8(r3)
    add r24, r24, r20
    bl fn_806DA870
    add r24, r24, r3
    lwz r3, 0x8(r31)
    bl fn_806DA870
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r0, r0, r3
    subfic r0, r0, 0x4
    cmpwi r0, 0x4
    beq lbl_fn_806F43B0_00001D98
    add r24, r24, r0
lbl_fn_806F43B0_00001D98:
    addi r3, r29, 0xf8
    bl strlen
    add r24, r24, r3
    addi r3, r29, 0xf8
    bl strlen
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r0, r0, r3
    subfic r0, r0, 0x4
    cmpwi r0, 0x4
    beq lbl_fn_806F43B0_00001DD0
    add r24, r24, r0
lbl_fn_806F43B0_00001DD0:
    addi r3, r29, 0x100
    bl strlen
    add r24, r24, r3
    addi r3, r29, 0x100
    bl strlen
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r0, r0, r3
    subfic r0, r0, 0x4
    cmpwi r0, 0x4
    beq lbl_fn_806F43B0_00001E14
    add r24, r24, r0
    b lbl_fn_806F43B0_00001E14
lbl_fn_806F43B0_00001E0C:
    li r3, 0x0
    b lbl_fn_806F43B0_00001E24
lbl_fn_806F43B0_00001E14:
    addi r25, r25, 0x1
lbl_fn_806F43B0_00001E18:
    cmpw r25, r30
    blt lbl_fn_806F43B0_00001B70
    add r3, r24, r21
lbl_fn_806F43B0_00001E24:
    addi r11, r1, 0x50
    bl _restgpr_17
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_806F46F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, -0x1
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x0(r3)
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    stw r0, 0x4(r3)
    beq lbl_fn_806F46F0_00001EE0
    cmpwi r4, 0x1
    bne lbl_fn_806F46F0_00001EC8
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    bne lbl_fn_806F46F0_00001E84
    li r3, 0x0
    b lbl_fn_806F46F0_00001EE4
lbl_fn_806F46F0_00001E84:
    li r4, 0x0
    li r5, 0x2
    bl fn_8067DED4
    cmpwi r3, 0x0
    beq lbl_fn_806F46F0_00001EA0
    li r3, 0x0
    b lbl_fn_806F46F0_00001EE4
lbl_fn_806F46F0_00001EA0:
    lwz r3, 0x8(r31)
    bl fn_8067DD0C
    cmpwi r3, -0x1
    stw r3, 0xc(r31)
    bne lbl_fn_806F46F0_00001EBC
    li r3, 0x0
    b lbl_fn_806F46F0_00001EE4
lbl_fn_806F46F0_00001EBC:
    lwz r3, 0x8(r31)
    bl fn_8067DED8
    b lbl_fn_806F46F0_00001EE0
lbl_fn_806F46F0_00001EC8:
    cmpwi r4, 0x2
    beq lbl_fn_806F46F0_00001EE0
    cmpwi r4, 0x3
    beq lbl_fn_806F46F0_00001EE0
    li r3, 0x0
    b lbl_fn_806F46F0_00001EE4
lbl_fn_806F46F0_00001EE0:
    li r3, 0x1
lbl_fn_806F46F0_00001EE4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806F47B0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    lwz r4, 0x164(r3)
    cmpwi r4, 0x0
    bne lbl_fn_806F47B0_00001F30
    li r3, 0x0
    b lbl_fn_806F47B0_000020A0
lbl_fn_806F47B0_00001F30:
    li r0, 0x0
    stw r0, 0x16c(r3)
    stw r0, 0x170(r3)
    stw r0, 0x174(r3)
    stw r0, 0x184(r3)
    lwz r0, 0x4(r4)
    stw r0, 0x178(r3)
    lwz r0, 0x8(r4)
    stw r0, 0x17c(r3)
    lwz r3, 0x0(r4)
    bl fn_806D58F0
    mr r30, r3
    li r3, 0x10
    mr r4, r30
    li r5, 0x0
    bl fn_806D57A0
    cmpwi r3, 0x0
    stw r3, 0x168(r31)
    bne lbl_fn_806F47B0_00001F84
    li r3, 0x0
    b lbl_fn_806F47B0_000020A0
lbl_fn_806F47B0_00001F84:
    li r28, 0x0
    b lbl_fn_806F47B0_00002038
lbl_fn_806F47B0_00001F8C:
    lwz r3, 0x164(r31)
    mr r4, r28
    lwz r3, 0x0(r3)
    bl fn_806D5900
    mr r29, r3
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x10
    bl memset
    stw r29, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_806F46F0
    cmpwi r3, 0x0
    bne lbl_fn_806F47B0_00002028
    li r30, 0x0
    subi r28, r28, 0x1
    b lbl_fn_806F47B0_00002008
lbl_fn_806F47B0_00001FD0:
    lwz r3, 0x168(r31)
    mr r4, r28
    bl fn_806D5900
    lwz r4, 0x0(r3)
    mr r29, r3
    lwz r0, 0x0(r4)
    cmpwi r0, 0x1
    bne lbl_fn_806F47B0_00002004
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806F47B0_00002000
    bl fn_8067D8CC
lbl_fn_806F47B0_00002000:
    stw r30, 0x8(r29)
lbl_fn_806F47B0_00002004:
    subi r28, r28, 0x1
lbl_fn_806F47B0_00002008:
    cmpwi r28, 0x0
    bge lbl_fn_806F47B0_00001FD0
    lwz r3, 0x168(r31)
    bl fn_806D5850
    li r0, 0x0
    stw r0, 0x168(r31)
    li r3, 0x0
    b lbl_fn_806F47B0_000020A0
lbl_fn_806F47B0_00002028:
    lwz r3, 0x168(r31)
    addi r4, r1, 0x8
    bl fn_806D5930
    addi r28, r28, 0x1
lbl_fn_806F47B0_00002038:
    cmpw r28, r30
    blt lbl_fn_806F47B0_00001F8C
    lwz r3, 0x164(r31)
    cmpwi r3, 0x0
    bne lbl_fn_806F47B0_00002054
    li r3, 0x0
    b lbl_fn_806F47B0_00002074
lbl_fn_806F47B0_00002054:
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F47B0_0000206C
    mr r3, r31
    bl fn_806F43B0
    b lbl_fn_806F47B0_00002074
lbl_fn_806F47B0_0000206C:
    mr r3, r31
    bl fn_806F42E0
lbl_fn_806F47B0_00002074:
    stw r3, 0x174(r31)
    lwz r3, 0x164(r31)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    bne lbl_fn_806F47B0_00002094
    li r0, 0x1
    stw r0, 0x180(r31)
    b lbl_fn_806F47B0_0000209C
lbl_fn_806F47B0_00002094:
    li r0, 0x0
    stw r0, 0x180(r31)
lbl_fn_806F47B0_0000209C:
    li r3, 0x1
lbl_fn_806F47B0_000020A0:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
