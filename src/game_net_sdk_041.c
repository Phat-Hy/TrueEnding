#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8067D27C(void);
extern void fn_8067D8CC(void);
extern void fn_806820D4(void);
extern void fn_80682544(void);
extern void fn_806825FC(void);
extern void fn_806827C4(void);
extern void fn_80684600(void);
extern void fn_806A426C(void);
extern void fn_806A4270(void);
extern void fn_806D5850(void);
extern void fn_806D58F0(void);
extern void fn_806D5900(void);
extern void fn_806D7AC0(void);
extern void fn_806D7AE0(void);
extern void fn_806D7C40(void);
extern void fn_806D7E30(void);
extern void fn_806D7EE0(void);
extern void fn_806D7F20(void);
extern void fn_806D7F30(void);
extern void fn_806D8560(void);
extern void fn_806D85E0(void);
extern void fn_806D8C20(void);
extern void fn_806D8DA0(void);
extern void fn_806D8E30(void);
extern void fn_806D8F10(void);
extern void fn_806D9590(void);
extern void fn_806DA860(void);
extern void fn_806DA870(void);
extern void fn_806F2070(void);
extern void fn_806F21E0(void);
extern void fn_806F23C0(void);
extern void fn_806F2470(void);
extern void fn_806F25B0(void);
extern void fn_806F2600(void);
extern void fn_806F2630(void);
extern void fn_806F27E0(void);
extern void fn_806F2820(void);
extern void fn_806F28C0(void);
extern void fn_806F2A10(void);
extern void fn_806F2BE0(void);
extern void fn_806F2D30(void);
extern void fn_806F3810(void);
extern void fn_806F4280(void);
extern int sprintf(char* str, const char* format, ...);
extern void strchr(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8076B6D8[];
extern u8 lbl_807BB380[];
extern u8 lbl_807C5788[];
extern u8 lbl_807C57B0[];
extern u8 lbl_807C58DC[];
extern u8 lbl_807C59D8[];
extern u8 lbl_807C59DC[];
extern u8 lbl_807C5A08[];
extern u8 lbl_807C5A58[];
extern u8 lbl_807C5AC0[];
extern u8 lbl_80862120[];
extern u8 lbl_80862124[];

/* Small data declarations */

/* Function declarations */
void pad_03_806F4974_text(void);
void fn_806F4980(void);
void fn_806F4A60(void);
void fn_806F4C00(void);
void fn_806F4DA0(void);
void fn_806F4EE0(void);
void fn_806F50D0(void);
void fn_806F56D0(void);
void fn_806F5920(void);
void fn_806F5AD0(void);
void fn_806F5BE0(void);
void fn_806F5CF0(void);
void fn_806F5D90(void);
void fn_806F6000(void);
void fn_806F61E0(void);
void fn_806F64D0(void);
void fn_806F65D0(void);
void fn_806F6690(void);
void fn_806F67A0(void);
void fn_806F6940(void);

asm void pad_03_806F4974_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
    opword 0x00000000
}

asm void fn_806F4980(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r0, 0x168(r3)
    mr r27, r3
    cmpwi r0, 0x0
    beq lbl_fn_806F4980_00000098
    mr r3, r0
    bl fn_806D58F0
    mr r29, r3
    li r28, 0x0
    li r31, 0x0
    b lbl_fn_806F4980_00000080
lbl_fn_806F4980_00000048:
    lwz r3, 0x168(r27)
    mr r4, r28
    bl fn_806D5900
    lwz r4, 0x0(r3)
    mr r30, r3
    lwz r0, 0x0(r4)
    cmpwi r0, 0x1
    bne lbl_fn_806F4980_0000007C
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806F4980_00000078
    bl fn_8067D8CC
lbl_fn_806F4980_00000078:
    stw r31, 0x8(r30)
lbl_fn_806F4980_0000007C:
    addi r28, r28, 0x1
lbl_fn_806F4980_00000080:
    cmpw r28, r29
    blt lbl_fn_806F4980_00000048
    lwz r3, 0x168(r27)
    bl fn_806D5850
    li r0, 0x0
    stw r0, 0x168(r27)
lbl_fn_806F4980_00000098:
    lwz r29, 0x164(r27)
    cmpwi r29, 0x0
    beq lbl_fn_806F4980_000000D4
    lwz r0, 0x18(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806F4980_000000D4
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_806F4980_000000C0
    bl fn_806D5850
lbl_fn_806F4980_000000C0:
    li r31, 0x0
    stw r31, 0x0(r29)
    mr r3, r29
    bl fn_806D7AC0
    stw r31, 0x164(r27)
lbl_fn_806F4980_000000D4:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806F4A60(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r6, 0x0(r3)
    mr r31, r4
    lwz r5, 0xc(r6)
    cmpwi r5, 0x0
    bne lbl_fn_806F4A60_0000011C
    li r3, 0x1
    b lbl_fn_806F4A60_0000026C
lbl_fn_806F4A60_0000011C:
    lwz r3, 0x164(r4)
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F4A60_00000208
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F4A60_00000208
    lwz r0, 0x10(r6)
    cmpwi r0, 0x0
    beq lbl_fn_806F4A60_00000208
    lis r3, lbl_8076B6D8@ha
    lwz r27, 0x8(r6)
    lwz r0, lbl_8076B6D8@l(r3)
    stw r0, 0x8(r1)
    lwz r0, 0x198(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806F4A60_00000168
    addi r26, r4, 0x58
    b lbl_fn_806F4A60_0000016C
lbl_fn_806F4A60_00000168:
    addi r26, r4, 0x7c
lbl_fn_806F4A60_0000016C:
    lis r30, lbl_807C58DC@ha
    lis r29, lbl_807C57B0@ha
    addi r30, r30, lbl_807C58DC@l
    b lbl_fn_806F4A60_000001F8
lbl_fn_806F4A60_0000017C:
    mr r4, r28
    addi r3, r29, lbl_807C57B0@l
    bl strchr
    cmpwi r3, 0x0
    beq lbl_fn_806F4A60_000001A0
    mr r3, r26
    mr r4, r28
    bl fn_806F2470
    b lbl_fn_806F4A60_000001F4
lbl_fn_806F4A60_000001A0:
    cmpwi r28, 0x20
    bne lbl_fn_806F4A60_000001B8
    mr r3, r26
    li r4, 0x2b
    bl fn_806F2470
    b lbl_fn_806F4A60_000001F4
lbl_fn_806F4A60_000001B8:
    slwi r0, r28, 28
    srwi r5, r28, 31
    subf r0, r5, r0
    srawi r4, r28, 4
    rotlwi r0, r0, 4
    mr r3, r26
    addze r6, r4
    addi r4, r1, 0x8
    add r0, r0, r5
    lbzx r6, r30, r6
    lbzx r0, r30, r0
    li r5, 0x3
    stb r6, 0x9(r1)
    stb r0, 0xa(r1)
    bl fn_806F2070
lbl_fn_806F4A60_000001F4:
    addi r27, r27, 0x1
lbl_fn_806F4A60_000001F8:
    lbz r28, 0x0(r27)
    extsb. r28, r28
    bne lbl_fn_806F4A60_0000017C
    b lbl_fn_806F4A60_00000224
lbl_fn_806F4A60_00000208:
    lwz r4, 0x8(r6)
    mr r3, r31
    bl fn_806F2D30
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_806F4A60_0000026C
lbl_fn_806F4A60_00000224:
    lwz r0, 0x198(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806F4A60_00000268
    mr r3, r31
    bl fn_806F2630
    cmpwi r3, 0x0
    bne lbl_fn_806F4A60_00000248
    li r3, 0x0
    b lbl_fn_806F4A60_0000026C
lbl_fn_806F4A60_00000248:
    lwz r3, 0x68(r31)
    lwz r0, 0x64(r31)
    cmpw r3, r0
    bne lbl_fn_806F4A60_00000260
    addi r3, r31, 0x58
    bl fn_806F2600
lbl_fn_806F4A60_00000260:
    li r3, 0x1
    b lbl_fn_806F4A60_0000026C
lbl_fn_806F4A60_00000268:
    li r3, 0x1
lbl_fn_806F4A60_0000026C:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806F4C00(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    li r28, 0x0
    lwz r3, 0x0(r3)
    lwz r29, 0x8(r3)
    sth r0, 0x8(r1)
    stb r0, 0xa(r1)
    lwz r3, 0x164(r4)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F4C00_00000300
    mr r3, r29
    bl fn_806DA870
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r0, r0, r3
    subfic r28, r0, 0x4
    cmpwi r28, 0x4
    bne lbl_fn_806F4C00_00000300
    li r28, 0x0
lbl_fn_806F4C00_00000300:
    lwz r0, 0x198(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806F4C00_000003BC
    lwz r0, 0x1a8(r31)
    cmpwi r0, 0x1
    bne lbl_fn_806F4C00_000003BC
    mr r3, r29
    bl fn_806DA870
    mr r30, r3
    mr r3, r29
    bl fn_806DA860
    mr r4, r3
    mr r5, r30
    addi r3, r31, 0x7c
    bl fn_806F2070
    cmpwi r3, 0x0
    beq lbl_fn_806F4C00_00000374
    mr r5, r28
    addi r3, r31, 0x7c
    addi r4, r1, 0x8
    bl fn_806F2070
    cmpwi r3, 0x0
    beq lbl_fn_806F4C00_00000374
    lwz r4, 0x80(r31)
    addi r3, r31, 0x58
    lwz r5, 0x88(r31)
    bl fn_806F21E0
    cmpwi r3, 0x0
    bne lbl_fn_806F4C00_0000037C
lbl_fn_806F4C00_00000374:
    li r3, 0x0
    b lbl_fn_806F4C00_0000040C
lbl_fn_806F4C00_0000037C:
    addi r3, r31, 0x7c
    bl fn_806F2600
    mr r3, r31
    bl fn_806F2630
    cmpwi r3, 0x0
    bne lbl_fn_806F4C00_0000039C
    li r3, 0x0
    b lbl_fn_806F4C00_0000040C
lbl_fn_806F4C00_0000039C:
    lwz r3, 0x68(r31)
    lwz r0, 0x64(r31)
    cmpw r3, r0
    bne lbl_fn_806F4C00_000003B4
    addi r3, r31, 0x58
    bl fn_806F2600
lbl_fn_806F4C00_000003B4:
    li r3, 0x1
    b lbl_fn_806F4C00_0000040C
lbl_fn_806F4C00_000003BC:
    mr r3, r29
    bl fn_806DA870
    mr r30, r3
    mr r3, r29
    bl fn_806DA860
    mr r4, r3
    mr r3, r31
    mr r5, r30
    bl fn_806F2D30
    cmpwi r3, 0x0
    bne lbl_fn_806F4C00_000003F0
    li r3, 0x0
    b lbl_fn_806F4C00_0000040C
lbl_fn_806F4C00_000003F0:
    mr r3, r31
    mr r5, r28
    addi r4, r1, 0x8
    bl fn_806F2D30
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_806F4C00_0000040C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806F4DA0(void)
{
    nofralloc
    stwu r1, -0x1020(r1)
    mflr r0
    stw r0, 0x1024(r1)
    stw r31, 0x101c(r1)
    mr r31, r4
    stw r30, 0x1018(r1)
    mr r30, r3
lbl_fn_806F4DA0_00000448:
    lwz r6, 0x8(r30)
    addi r3, r1, 0x10
    li r4, 0x1
    li r5, 0x1000
    bl fn_8067D27C
    cmpwi r3, 0x0
    mr r5, r3
    bgt lbl_fn_806F4DA0_00000480
    li r3, 0x1
    li r0, 0xe
    stw r3, 0x124(r31)
    li r3, 0x0
    stw r0, 0x40(r31)
    b lbl_fn_806F4DA0_00000550
lbl_fn_806F4DA0_00000480:
    lwz r4, 0x4(r30)
    lwz r0, 0xc(r30)
    add r3, r4, r3
    stw r3, 0x4(r30)
    cmpw r3, r0
    ble lbl_fn_806F4DA0_000004B0
    li r3, 0x1
    li r0, 0xe
    stw r3, 0x124(r31)
    li r3, 0x0
    stw r0, 0x40(r31)
    b lbl_fn_806F4DA0_00000550
lbl_fn_806F4DA0_000004B0:
    mr r3, r31
    addi r4, r1, 0x10
    bl fn_806F2D30
    cmpwi r3, 0x0
    bne lbl_fn_806F4DA0_000004CC
    li r3, 0x0
    b lbl_fn_806F4DA0_00000550
lbl_fn_806F4DA0_000004CC:
    lwz r0, 0x4(r30)
    lwz r4, 0xc(r30)
    cmpw r0, r4
    bne lbl_fn_806F4DA0_00000544
    lwz r3, 0x164(r31)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F4DA0_0000053C
    slwi r0, r4, 30
    srwi r3, r4, 31
    subf r0, r3, r0
    li r4, 0x0
    rotlwi r0, r0, 2
    sth r4, 0x8(r1)
    add r0, r0, r3
    subfic r5, r0, 0x4
    stb r4, 0xa(r1)
    cmpwi r5, 0x4
    beq lbl_fn_806F4DA0_0000053C
    cmpwi r5, 0x0
    ble lbl_fn_806F4DA0_0000053C
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_806F2D30
    cmpwi r3, 0x0
    bne lbl_fn_806F4DA0_0000053C
    li r3, 0x0
    b lbl_fn_806F4DA0_00000550
lbl_fn_806F4DA0_0000053C:
    li r3, 0x1
    b lbl_fn_806F4DA0_00000550
lbl_fn_806F4DA0_00000544:
    cmpwi r3, 0x1
    beq lbl_fn_806F4DA0_00000448
    li r3, 0x2
lbl_fn_806F4DA0_00000550:
    lwz r0, 0x1024(r1)
    lwz r31, 0x101c(r1)
    lwz r30, 0x1018(r1)
    mtlr r0
    addi r1, r1, 0x1020
    blr
}

asm void fn_806F4EE0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r6, 0x0(r3)
    lwz r5, 0xc(r6)
    cmpwi r5, 0x0
    bne lbl_fn_806F4EE0_000005A4
    li r3, 0x1
    b lbl_fn_806F4EE0_00000740
lbl_fn_806F4EE0_000005A4:
    lwz r0, 0x198(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806F4EE0_00000670
lbl_fn_806F4EE0_000005B0:
    lwz r4, 0x4(r29)
    mr r3, r31
    lwz r0, 0x8(r6)
    subf r5, r4, r5
    add r4, r0, r4
    bl fn_806F2BE0
    cmpwi r3, -0x1
    bne lbl_fn_806F4EE0_000005D8
    li r3, 0x0
    b lbl_fn_806F4EE0_00000740
lbl_fn_806F4EE0_000005D8:
    lwz r0, 0x4(r29)
    lwz r6, 0x0(r29)
    add r0, r0, r3
    stw r0, 0x4(r29)
    lwz r5, 0xc(r6)
    cmpw r5, r0
    bne lbl_fn_806F4EE0_00000660
    lwz r3, 0x164(r31)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F4EE0_00000658
    li r0, 0x0
    sth r0, 0xc(r1)
    stb r0, 0xe(r1)
    lwz r3, 0xc(r6)
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r0, r0, r3
    subfic r5, r0, 0x4
    cmpwi r5, 0x4
    beq lbl_fn_806F4EE0_00000658
    cmpwi r5, 0x0
    ble lbl_fn_806F4EE0_00000658
    mr r3, r31
    addi r4, r1, 0xc
    bl fn_806F2D30
    cmpwi r3, 0x0
    bne lbl_fn_806F4EE0_00000658
    li r3, 0x0
    b lbl_fn_806F4EE0_00000740
lbl_fn_806F4EE0_00000658:
    li r3, 0x1
    b lbl_fn_806F4EE0_00000740
lbl_fn_806F4EE0_00000660:
    cmpwi r3, 0x0
    bne lbl_fn_806F4EE0_000005B0
    li r3, 0x2
    b lbl_fn_806F4EE0_00000740
lbl_fn_806F4EE0_00000670:
    lwz r4, 0x4(r29)
    li r30, 0x3f01
    subf r0, r4, r5
    cmpwi r0, 0x3f01
    bge lbl_fn_806F4EE0_00000688
    mr r30, r0
lbl_fn_806F4EE0_00000688:
    lwz r0, 0x8(r6)
    mr r3, r31
    mr r5, r30
    add r4, r0, r4
    bl fn_806F2D30
    cmpwi r3, 0x0
    bne lbl_fn_806F4EE0_000006AC
    li r3, 0x0
    b lbl_fn_806F4EE0_00000740
lbl_fn_806F4EE0_000006AC:
    lwz r0, 0x4(r29)
    lwz r6, 0x0(r29)
    add r0, r0, r30
    stw r0, 0x4(r29)
    lwz r5, 0xc(r6)
    cmpw r5, r0
    bne lbl_fn_806F4EE0_00000734
    lwz r3, 0x164(r31)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F4EE0_0000072C
    li r0, 0x0
    sth r0, 0x8(r1)
    stb r0, 0xa(r1)
    lwz r3, 0xc(r6)
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r0, r0, r3
    subfic r5, r0, 0x4
    cmpwi r5, 0x4
    beq lbl_fn_806F4EE0_0000072C
    cmpwi r5, 0x0
    ble lbl_fn_806F4EE0_0000072C
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_806F2D30
    cmpwi r3, 0x0
    bne lbl_fn_806F4EE0_0000072C
    li r3, 0x0
    b lbl_fn_806F4EE0_00000740
lbl_fn_806F4EE0_0000072C:
    li r3, 0x1
    b lbl_fn_806F4EE0_00000740
lbl_fn_806F4EE0_00000734:
    cmpwi r3, 0x1
    beq lbl_fn_806F4EE0_00000670
    li r3, 0x2
lbl_fn_806F4EE0_00000740:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806F50D0(void)
{
    nofralloc
    stwu r1, -0x840(r1)
    mflr r0
    stw r0, 0x844(r1)
    addi r11, r1, 0x840
    bl _savegpr_26
    lwz r0, 0x4(r3)
    lis r31, lbl_807C57B0@ha
    mr r27, r3
    mr r28, r4
    cmpwi r0, -0x1
    addi r31, r31, lbl_807C57B0@l
    li r29, 0x0
    bne lbl_fn_806F50D0_00000CDC
    li r0, 0x0
    stw r0, 0x4(r3)
    lwz r4, 0x164(r4)
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806F50D0_000007F4
    lwz r0, 0x10(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806F50D0_000007F4
    cmpwi r5, 0x0
    beq lbl_fn_806F50D0_000007D8
    lwz r5, 0x0(r27)
    addi r3, r1, 0x20
    addi r4, r31, 0x140
    lwz r5, 0x4(r5)
    crclr 6
    bl sprintf
    b lbl_fn_806F50D0_00000C08
lbl_fn_806F50D0_000007D8:
    lwz r5, 0x0(r27)
    addi r3, r1, 0x20
    addi r4, r31, 0x144
    lwz r5, 0x4(r5)
    crclr 6
    bl sprintf
    b lbl_fn_806F50D0_00000C08
lbl_fn_806F50D0_000007F4:
    lwz r8, 0x0(r3)
    lwz r0, 0x0(r8)
    cmpwi r0, 0x0
    beq lbl_fn_806F50D0_00000820
    cmpwi r0, 0x3
    beq lbl_fn_806F50D0_00000848
    cmpwi r0, 0x1
    beq lbl_fn_806F50D0_00000A0C
    cmpwi r0, 0x2
    beq lbl_fn_806F50D0_00000A1C
    b lbl_fn_806F50D0_00000C08
lbl_fn_806F50D0_00000820:
    cmpwi r5, 0x0
    addi r3, r1, 0x20
    addi r4, r31, 0x150
    addi r5, r31, 0x1a8
    beq lbl_fn_806F50D0_00000838
    addi r5, r31, 0x180
lbl_fn_806F50D0_00000838:
    lwz r6, 0x4(r8)
    crclr 6
    bl sprintf
    b lbl_fn_806F50D0_00000C08
lbl_fn_806F50D0_00000848:
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806F50D0_00000A00
    cmpwi r5, 0x0
    li r0, 0x8
    stb r0, 0x14(r1)
    beq lbl_fn_806F50D0_0000086C
    ori r0, r0, 0x4
    stb r0, 0x14(r1)
lbl_fn_806F50D0_0000086C:
    cmpwi r6, 0x0
    beq lbl_fn_806F50D0_00000880
    lbz r0, 0x14(r1)
    ori r0, r0, 0x2
    stb r0, 0x14(r1)
lbl_fn_806F50D0_00000880:
    li r0, 0x20
    li r30, 0x0
    stb r0, 0x15(r1)
    addi r3, r31, 0xf8
    sth r30, 0x16(r1)
    bl strlen
    clrlwi r3, r3, 16
    bl fn_806A4270
    sth r3, 0x18(r1)
    addi r3, r31, 0x100
    bl strlen
    clrlwi r3, r3, 16
    bl fn_806A4270
    sth r3, 0x1a(r1)
    lwz r3, 0x0(r27)
    lwz r3, 0x8(r3)
    bl fn_806DA870
    bl fn_806A426C
    stw r3, 0x1c(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    li r5, 0xc
    bl memcpy
    li r29, 0xc
    addi r3, r1, 0x2c
    addi r4, r31, 0xf8
    subfic r5, r29, 0x800
    bl fn_806D9590
    clrlwi r0, r3, 30
    addi r29, r3, 0xc
    subfic r4, r0, 0x4
    cmpwi r4, 0x4
    beq lbl_fn_806F50D0_0000096C
    cmpwi r4, 0x0
    addi r0, r1, 0x20
    add r3, r0, r29
    ble lbl_fn_806F50D0_0000096C
    srwi. r0, r4, 3
    mtctr r0
    beq lbl_fn_806F50D0_00000954
lbl_fn_806F50D0_00000920:
    stb r30, 0x0(r3)
    addi r29, r29, 0x8
    stb r30, 0x1(r3)
    stb r30, 0x2(r3)
    stb r30, 0x3(r3)
    stb r30, 0x4(r3)
    stb r30, 0x5(r3)
    stb r30, 0x6(r3)
    stb r30, 0x7(r3)
    addi r3, r3, 0x8
    bdnz lbl_fn_806F50D0_00000920
    andi. r4, r4, 0x7
    beq lbl_fn_806F50D0_0000096C
lbl_fn_806F50D0_00000954:
    mtctr r4
    nop
lbl_fn_806F50D0_0000095C:
    stb r30, 0x0(r3)
    addi r29, r29, 0x1
    addi r3, r3, 0x1
    bdnz lbl_fn_806F50D0_0000095C
lbl_fn_806F50D0_0000096C:
    addi r3, r1, 0x20
    addi r4, r31, 0x100
    add r3, r3, r29
    subfic r5, r29, 0x800
    bl fn_806D9590
    clrlwi r0, r3, 30
    add r29, r29, r3
    subfic r5, r0, 0x4
    cmpwi r5, 0x4
    beq lbl_fn_806F50D0_00000C08
    cmpwi r5, 0x0
    addi r0, r1, 0x20
    li r4, 0x0
    add r3, r0, r29
    ble lbl_fn_806F50D0_00000C08
    srwi. r0, r5, 3
    mtctr r0
    beq lbl_fn_806F50D0_000009E8
lbl_fn_806F50D0_000009B4:
    stb r4, 0x0(r3)
    addi r29, r29, 0x8
    stb r4, 0x1(r3)
    stb r4, 0x2(r3)
    stb r4, 0x3(r3)
    stb r4, 0x4(r3)
    stb r4, 0x5(r3)
    stb r4, 0x6(r3)
    stb r4, 0x7(r3)
    addi r3, r3, 0x8
    bdnz lbl_fn_806F50D0_000009B4
    andi. r5, r5, 0x7
    beq lbl_fn_806F50D0_00000C08
lbl_fn_806F50D0_000009E8:
    mtctr r5
lbl_fn_806F50D0_000009EC:
    stb r4, 0x0(r3)
    addi r29, r29, 0x1
    addi r3, r3, 0x1
    bdnz lbl_fn_806F50D0_000009EC
    b lbl_fn_806F50D0_00000C08
lbl_fn_806F50D0_00000A00:
    li r0, 0x0
    stb r0, 0x20(r1)
    b lbl_fn_806F50D0_00000C08
lbl_fn_806F50D0_00000A0C:
    lwz r26, 0xc(r3)
    lwz r7, 0xc(r8)
    lwz r30, 0x10(r8)
    b lbl_fn_806F50D0_00000A28
lbl_fn_806F50D0_00000A1C:
    lwz r26, 0xc(r8)
    lwz r7, 0x10(r8)
    lwz r30, 0x14(r8)
lbl_fn_806F50D0_00000A28:
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806F50D0_00000BE0
    cmpwi r5, 0x0
    li r0, 0x8
    stb r0, 0x8(r1)
    beq lbl_fn_806F50D0_00000A4C
    ori r0, r0, 0x4
    stb r0, 0x8(r1)
lbl_fn_806F50D0_00000A4C:
    cmpwi r6, 0x0
    beq lbl_fn_806F50D0_00000A60
    lbz r0, 0x8(r1)
    ori r0, r0, 0x2
    stb r0, 0x8(r1)
lbl_fn_806F50D0_00000A60:
    li r0, 0x10
    li r31, 0x0
    stb r0, 0x9(r1)
    sth r31, 0xa(r1)
    lwz r3, 0x0(r3)
    lwz r3, 0x4(r3)
    bl strlen
    clrlwi r3, r3, 16
    bl fn_806A4270
    sth r3, 0xc(r1)
    mr r3, r30
    bl strlen
    clrlwi r3, r3, 16
    bl fn_806A4270
    sth r3, 0xe(r1)
    mr r3, r26
    bl fn_806A426C
    stw r3, 0x10(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0x8
    li r5, 0xc
    bl memcpy
    lwz r4, 0x0(r27)
    li r29, 0xc
    addi r3, r1, 0x2c
    lwz r4, 0x4(r4)
    subfic r5, r29, 0x800
    bl fn_806D9590
    clrlwi r0, r3, 30
    addi r29, r3, 0xc
    subfic r4, r0, 0x4
    cmpwi r4, 0x4
    beq lbl_fn_806F50D0_00000B4C
    cmpwi r4, 0x0
    addi r0, r1, 0x20
    add r3, r0, r29
    ble lbl_fn_806F50D0_00000B4C
    srwi. r0, r4, 3
    mtctr r0
    beq lbl_fn_806F50D0_00000B34
lbl_fn_806F50D0_00000B00:
    stb r31, 0x0(r3)
    addi r29, r29, 0x8
    stb r31, 0x1(r3)
    stb r31, 0x2(r3)
    stb r31, 0x3(r3)
    stb r31, 0x4(r3)
    stb r31, 0x5(r3)
    stb r31, 0x6(r3)
    stb r31, 0x7(r3)
    addi r3, r3, 0x8
    bdnz lbl_fn_806F50D0_00000B00
    andi. r4, r4, 0x7
    beq lbl_fn_806F50D0_00000B4C
lbl_fn_806F50D0_00000B34:
    mtctr r4
    nop
lbl_fn_806F50D0_00000B3C:
    stb r31, 0x0(r3)
    addi r29, r29, 0x1
    addi r3, r3, 0x1
    bdnz lbl_fn_806F50D0_00000B3C
lbl_fn_806F50D0_00000B4C:
    addi r3, r1, 0x20
    mr r4, r30
    add r3, r3, r29
    subfic r5, r29, 0x800
    bl fn_806D9590
    clrlwi r0, r3, 30
    add r29, r29, r3
    subfic r5, r0, 0x4
    cmpwi r5, 0x4
    beq lbl_fn_806F50D0_00000C08
    cmpwi r5, 0x0
    addi r0, r1, 0x20
    li r4, 0x0
    add r3, r0, r29
    ble lbl_fn_806F50D0_00000C08
    srwi. r0, r5, 3
    mtctr r0
    beq lbl_fn_806F50D0_00000BC8
lbl_fn_806F50D0_00000B94:
    stb r4, 0x0(r3)
    addi r29, r29, 0x8
    stb r4, 0x1(r3)
    stb r4, 0x2(r3)
    stb r4, 0x3(r3)
    stb r4, 0x4(r3)
    stb r4, 0x5(r3)
    stb r4, 0x6(r3)
    stb r4, 0x7(r3)
    addi r3, r3, 0x8
    bdnz lbl_fn_806F50D0_00000B94
    andi. r5, r5, 0x7
    beq lbl_fn_806F50D0_00000C08
lbl_fn_806F50D0_00000BC8:
    mtctr r5
lbl_fn_806F50D0_00000BCC:
    stb r4, 0x0(r3)
    addi r29, r29, 0x1
    addi r3, r3, 0x1
    bdnz lbl_fn_806F50D0_00000BCC
    b lbl_fn_806F50D0_00000C08
lbl_fn_806F50D0_00000BE0:
    cmpwi r5, 0x0
    addi r3, r1, 0x20
    addi r4, r31, 0x1d4
    addi r5, r31, 0x1a8
    beq lbl_fn_806F50D0_00000BF8
    addi r5, r31, 0x180
lbl_fn_806F50D0_00000BF8:
    lwz r6, 0x4(r8)
    mr r8, r30
    crclr 6
    bl sprintf
lbl_fn_806F50D0_00000C08:
    lwz r0, 0x198(r28)
    cmpwi r0, 0x0
    beq lbl_fn_806F50D0_00000C90
    lwz r0, 0x1a8(r28)
    cmpwi r0, 0x1
    bne lbl_fn_806F50D0_00000C90
    cmpwi r29, 0x0
    bne lbl_fn_806F50D0_00000C34
    addi r3, r1, 0x20
    bl strlen
    mr r29, r3
lbl_fn_806F50D0_00000C34:
    mr r5, r29
    addi r3, r28, 0x58
    addi r4, r1, 0x20
    bl fn_806F21E0
    cmpwi r3, 0x0
    bne lbl_fn_806F50D0_00000C54
    li r3, 0x0
    b lbl_fn_806F50D0_00000D38
lbl_fn_806F50D0_00000C54:
    mr r3, r28
    bl fn_806F2630
    cmpwi r3, 0x0
    bne lbl_fn_806F50D0_00000C6C
    li r3, 0x0
    b lbl_fn_806F50D0_00000D38
lbl_fn_806F50D0_00000C6C:
    lwz r3, 0x68(r28)
    lwz r0, 0x64(r28)
    cmpw r3, r0
    bge lbl_fn_806F50D0_00000C84
    li r3, 0x2
    b lbl_fn_806F50D0_00000D38
lbl_fn_806F50D0_00000C84:
    addi r3, r28, 0x58
    bl fn_806F2600
    b lbl_fn_806F50D0_00000CDC
lbl_fn_806F50D0_00000C90:
    cmpwi r29, 0x0
    bne lbl_fn_806F50D0_00000CA4
    addi r3, r1, 0x20
    bl strlen
    mr r29, r3
lbl_fn_806F50D0_00000CA4:
    mr r3, r28
    mr r5, r29
    addi r4, r1, 0x20
    bl fn_806F2D30
    cmpwi r3, 0x0
    bne lbl_fn_806F50D0_00000CC4
    li r3, 0x0
    b lbl_fn_806F50D0_00000D38
lbl_fn_806F50D0_00000CC4:
    cmpwi r3, 0x2
    bne lbl_fn_806F50D0_00000CD4
    li r3, 0x2
    b lbl_fn_806F50D0_00000D38
lbl_fn_806F50D0_00000CD4:
    addi r3, r28, 0x58
    bl fn_806F2600
lbl_fn_806F50D0_00000CDC:
    lwz r3, 0x0(r27)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F50D0_00000CFC
    mr r3, r27
    mr r4, r28
    bl fn_806F4A60
    b lbl_fn_806F50D0_00000D38
lbl_fn_806F50D0_00000CFC:
    cmpwi r0, 0x3
    bne lbl_fn_806F50D0_00000D14
    mr r3, r27
    mr r4, r28
    bl fn_806F4C00
    b lbl_fn_806F50D0_00000D38
lbl_fn_806F50D0_00000D14:
    cmpwi r0, 0x1
    bne lbl_fn_806F50D0_00000D2C
    mr r3, r27
    mr r4, r28
    bl fn_806F4DA0
    b lbl_fn_806F50D0_00000D38
lbl_fn_806F50D0_00000D2C:
    mr r3, r27
    mr r4, r28
    bl fn_806F4EE0
lbl_fn_806F50D0_00000D38:
    addi r11, r1, 0x840
    bl _restgpr_26
    lwz r0, 0x844(r1)
    mtlr r0
    addi r1, r1, 0x840
    blr
}

asm void fn_806F56D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r3, 0x168(r3)
    bl fn_806D58F0
    lwz r4, 0x68(r30)
    mr r31, r3
    lwz r0, 0x64(r30)
    cmpw r4, r0
    bge lbl_fn_806F56D0_00000DF8
    mr r3, r30
    bl fn_806F2630
    cmpwi r3, 0x0
    bne lbl_fn_806F56D0_00000DB0
    li r3, 0x0
    b lbl_fn_806F56D0_00000F8C
lbl_fn_806F56D0_00000DB0:
    lwz r3, 0x68(r30)
    lwz r0, 0x64(r30)
    cmpw r3, r0
    bge lbl_fn_806F56D0_00000DC8
    li r3, 0x2
    b lbl_fn_806F56D0_00000F8C
lbl_fn_806F56D0_00000DC8:
    addi r3, r30, 0x58
    bl fn_806F2600
    lwz r0, 0x180(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806F56D0_00000DE4
    li r3, 0x3
    b lbl_fn_806F56D0_00000F8C
lbl_fn_806F56D0_00000DE4:
    lwz r0, 0x16c(r30)
    cmpw r0, r31
    bne lbl_fn_806F56D0_00000DF8
    li r3, 0x1
    b lbl_fn_806F56D0_00000F8C
lbl_fn_806F56D0_00000DF8:
    lwz r0, 0x180(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806F56D0_00000EE4
    lwz r3, 0x164(r30)
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F56D0_00000E20
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F56D0_00000E70
lbl_fn_806F56D0_00000E20:
    lis r29, lbl_807C59D8@ha
    addi r3, r29, lbl_807C59D8@l
    bl strlen
    mr r5, r3
    mr r3, r30
    addi r4, r29, lbl_807C59D8@l
    bl fn_806F2D30
    cmpwi r3, 0x0
    bne lbl_fn_806F56D0_00000E4C
    li r3, 0x0
    b lbl_fn_806F56D0_00000F8C
lbl_fn_806F56D0_00000E4C:
    cmpwi r3, 0x2
    bne lbl_fn_806F56D0_00000E5C
    li r3, 0x2
    b lbl_fn_806F56D0_00000F8C
lbl_fn_806F56D0_00000E5C:
    lwz r0, 0x180(r30)
    cmpwi r0, 0x1
    bne lbl_fn_806F56D0_00000EE4
    li r3, 0x3
    b lbl_fn_806F56D0_00000F8C
lbl_fn_806F56D0_00000E70:
    li r0, 0x0
    stw r0, 0x180(r30)
    b lbl_fn_806F56D0_00000EE4
lbl_fn_806F56D0_00000E7C:
    lwz r3, 0x168(r30)
    bl fn_806D5900
    mr r28, r3
    lwz r29, 0x16c(r30)
    lwz r3, 0x168(r30)
    bl fn_806D58F0
    subi r3, r3, 0x1
    cntlzw r0, r29
    subf r4, r29, r3
    cntlzw r5, r4
    mr r3, r28
    srwi r6, r5, 5
    mr r4, r30
    srwi r5, r0, 5
    bl fn_806F50D0
    cmpwi r3, 0x0
    bne lbl_fn_806F56D0_00000EC8
    li r3, 0x0
    b lbl_fn_806F56D0_00000F8C
lbl_fn_806F56D0_00000EC8:
    cmpwi r3, 0x2
    bne lbl_fn_806F56D0_00000ED8
    li r3, 0x2
    b lbl_fn_806F56D0_00000F8C
lbl_fn_806F56D0_00000ED8:
    lwz r3, 0x16c(r30)
    addi r0, r3, 0x1
    stw r0, 0x16c(r30)
lbl_fn_806F56D0_00000EE4:
    lwz r4, 0x16c(r30)
    cmpw r4, r31
    blt lbl_fn_806F56D0_00000E7C
    lwz r0, 0x198(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806F56D0_00000F2C
    lwz r5, 0x88(r30)
    cmpwi r5, 0x0
    ble lbl_fn_806F56D0_00000F2C
    lwz r4, 0x80(r30)
    addi r3, r30, 0x58
    bl fn_806F21E0
    cmpwi r3, 0x0
    bne lbl_fn_806F56D0_00000F24
    li r3, 0x0
    b lbl_fn_806F56D0_00000F8C
lbl_fn_806F56D0_00000F24:
    addi r3, r30, 0x7c
    bl fn_806F2600
lbl_fn_806F56D0_00000F2C:
    lwz r3, 0x164(r30)
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F56D0_00000F74
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F56D0_00000F74
    lis r31, lbl_807C59DC@ha
    addi r3, r31, lbl_807C59DC@l
    bl strlen
    mr r5, r3
    mr r3, r30
    addi r4, r31, lbl_807C59DC@l
    bl fn_806F2D30
    cmpwi r3, 0x0
    bne lbl_fn_806F56D0_00000F74
    li r3, 0x0
    b lbl_fn_806F56D0_00000F8C
lbl_fn_806F56D0_00000F74:
    lwz r4, 0x68(r30)
    li r3, 0x1
    lwz r0, 0x64(r30)
    cmpw r4, r0
    bge lbl_fn_806F56D0_00000F8C
    li r3, 0x2
lbl_fn_806F56D0_00000F8C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806F5920(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x0
    lis r29, lbl_807C5A08@ha
    mr r31, r3
    addi r29, r29, lbl_807C5A08@l
    bne lbl_fn_806F5920_00000FDC
    li r3, 0x0
    b lbl_fn_806F5920_00001138
lbl_fn_806F5920_00000FDC:
    lwz r30, 0x14(r3)
    cmpwi r30, 0x0
    bne lbl_fn_806F5920_00000FF0
    li r3, 0x0
    b lbl_fn_806F5920_00001138
lbl_fn_806F5920_00000FF0:
    mr r3, r30
    addi r4, r29, 0x0
    li r5, 0x7
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806F5920_00001018
    li r0, 0x0
    stw r0, 0x28(r31)
    addi r28, r30, 0x7
    b lbl_fn_806F5920_00001048
lbl_fn_806F5920_00001018:
    mr r3, r30
    addi r4, r29, 0x8
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806F5920_00001040
    li r0, 0x1
    stw r0, 0x28(r31)
    addi r28, r30, 0x8
    b lbl_fn_806F5920_00001048
lbl_fn_806F5920_00001040:
    li r3, 0x0
    b lbl_fn_806F5920_00001138
lbl_fn_806F5920_00001048:
    mr r3, r28
    addi r4, r29, 0x14
    bl fn_806825FC
    lbzx r27, r28, r3
    li r0, 0x0
    mr r30, r3
    stbx r0, r28, r3
    mr r3, r28
    bl fn_806D8E30
    cmpwi r3, 0x0
    stw r3, 0x18(r31)
    bne lbl_fn_806F5920_00001080
    li r3, 0x0
    b lbl_fn_806F5920_00001138
lbl_fn_806F5920_00001080:
    stbx r27, r28, r30
    lbzux r0, r28, r30
    cmpwi r0, 0x3a
    bne lbl_fn_806F5920_000010CC
    addi r28, r28, 0x1
    mr r3, r28
    bl fn_80684600
    clrlwi. r0, r3, 16
    sth r3, 0x20(r31)
    bne lbl_fn_806F5920_000010B4
    li r3, 0x0
    b lbl_fn_806F5920_00001138
    nop
lbl_fn_806F5920_000010B4:
    lbzu r0, 0x1(r28)
    extsb. r0, r0
    beq lbl_fn_806F5920_000010EC
    cmpwi r0, 0x2f
    bne lbl_fn_806F5920_000010B4
    b lbl_fn_806F5920_000010EC
lbl_fn_806F5920_000010CC:
    lwz r0, 0x28(r31)
    cmpwi r0, 0x1
    bne lbl_fn_806F5920_000010E4
    li r0, 0x1bb
    sth r0, 0x20(r31)
    b lbl_fn_806F5920_000010EC
lbl_fn_806F5920_000010E4:
    li r0, 0x50
    sth r0, 0x20(r31)
lbl_fn_806F5920_000010EC:
    lbz r0, 0x0(r28)
    extsb. r0, r0
    bne lbl_fn_806F5920_000010FC
    addi r28, r29, 0x18
lbl_fn_806F5920_000010FC:
    mr r3, r28
    bl fn_806D8E30
    stw r3, 0x24(r31)
    li r30, 0x2b
    b lbl_fn_806F5920_00001114
lbl_fn_806F5920_00001110:
    stb r30, 0x0(r3)
lbl_fn_806F5920_00001114:
    lwz r29, 0x24(r31)
    li r4, 0x20
    mr r3, r29
    bl strchr
    cmpwi r3, 0x0
    bne lbl_fn_806F5920_00001110
    neg r0, r29
    or r0, r0, r29
    srwi r3, r0, 31
lbl_fn_806F5920_00001138:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806F5AD0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_806F27E0
    bl fn_806D8F10
    mr r3, r31
    bl fn_806F5920
    cmpwi r3, 0x0
    bne lbl_fn_806F5AD0_000011A4
    li r3, 0x1
    li r0, 0x3
    stw r3, 0x124(r31)
    stw r0, 0x40(r31)
    b lbl_fn_806F5AD0_0000124C
lbl_fn_806F5AD0_000011A4:
    lwz r3, 0x28(r31)
    cmpwi r3, 0x1
    bne lbl_fn_806F5AD0_000011CC
    lwz r0, 0x198(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806F5AD0_000011CC
    lwz r3, 0x4(r31)
    li r4, 0x5
    bl fn_806F3810
    b lbl_fn_806F5AD0_000011EC
lbl_fn_806F5AD0_000011CC:
    cmpwi r3, 0x1
    beq lbl_fn_806F5AD0_000011EC
    lwz r0, 0x198(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806F5AD0_000011EC
    lwz r3, 0x4(r31)
    li r4, 0x0
    bl fn_806F3810
lbl_fn_806F5AD0_000011EC:
    lwz r0, 0x28(r31)
    cmpwi r0, 0x1
    bne lbl_fn_806F5AD0_00001234
    lwz r0, 0x19c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806F5AD0_00001234
    lwz r12, 0x1b4(r31)
    mr r3, r31
    addi r4, r31, 0x194
    mtctr r12
    bctrl
    cmpwi r3, 0x3
    bne lbl_fn_806F5AD0_00001234
    li r3, 0x1
    li r0, 0x11
    stw r3, 0x124(r31)
    stw r0, 0x40(r31)
    b lbl_fn_806F5AD0_0000124C
lbl_fn_806F5AD0_00001234:
    li r0, 0x1
    stw r0, 0x10(r31)
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_806F27E0
lbl_fn_806F5AD0_0000124C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806F5BE0(void)
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
    beq lbl_fn_806F5BE0_000012A8
    li r0, 0x2
    stw r0, 0x10(r3)
    li r4, 0x0
    li r5, 0x0
    bl fn_806F27E0
    b lbl_fn_806F5BE0_0000135C
lbl_fn_806F5BE0_000012A8:
    lwz r31, 0x18c(r3)
    cmpwi r31, 0x0
    beq lbl_fn_806F5BE0_000012B8
    b lbl_fn_806F5BE0_000012D0
lbl_fn_806F5BE0_000012B8:
    lis r4, lbl_80862120@ha
    lwz r31, lbl_80862120@l(r4)
    cmpwi r31, 0x0
    beq lbl_fn_806F5BE0_000012CC
    b lbl_fn_806F5BE0_000012D0
lbl_fn_806F5BE0_000012CC:
    lwz r31, 0x18(r3)
lbl_fn_806F5BE0_000012D0:
    mr r3, r31
    bl fn_806D7EE0
    addis r0, r3, 0x1
    stw r3, 0x1c(r30)
    cmplwi r0, 0xffff
    bne lbl_fn_806F5BE0_00001318
    mr r3, r31
    addi r4, r30, 0x1c8
    bl fn_806D8C20
    cmpwi r3, -0x1
    bne lbl_fn_806F5BE0_00001318
    li r4, 0x0
    li r3, 0x1
    li r0, 0x4
    stw r4, 0x1c8(r30)
    stw r3, 0x124(r30)
    stw r0, 0x40(r30)
    b lbl_fn_806F5BE0_0000135C
lbl_fn_806F5BE0_00001318:
    lwz r3, 0x1c(r30)
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_806F5BE0_00001344
    li r0, 0x2
    stw r0, 0x10(r30)
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    bl fn_806F27E0
    b lbl_fn_806F5BE0_0000135C
lbl_fn_806F5BE0_00001344:
    li r0, 0x3
    stw r0, 0x10(r30)
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    bl fn_806F27E0
lbl_fn_806F5BE0_0000135C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806F5CF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0x1c8(r3)
    bl fn_806D8DA0
    addis r0, r3, 0x1
    stw r3, 0x1c(r31)
    cmplwi r0, 0xffff
    bne lbl_fn_806F5CF0_000013C4
    li r4, 0x0
    li r3, 0x1
    li r0, 0x4
    stw r4, 0x1c8(r31)
    stw r3, 0x124(r31)
    stw r0, 0x40(r31)
    b lbl_fn_806F5CF0_00001408
lbl_fn_806F5CF0_000013C4:
    cmpwi r3, 0x0
    bne lbl_fn_806F5CF0_000013E8
    li r0, 0x2
    stw r0, 0x10(r31)
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_806F27E0
    b lbl_fn_806F5CF0_00001408
lbl_fn_806F5CF0_000013E8:
    li r3, 0x0
    li r0, 0x3
    stw r3, 0x1c8(r31)
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    stw r0, 0x10(r31)
    bl fn_806F27E0
lbl_fn_806F5CF0_00001408:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806F5D90(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x2000
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r0, 0x10(r1)
    lwz r0, 0x50(r3)
    cmpwi r0, -0x1
    bne lbl_fn_806F5D90_000015C8
    li r3, 0x2
    li r4, 0x1
    li r5, 0x6
    bl fn_806D7AE0
    cmpwi r3, -0x1
    stw r3, 0x50(r31)
    bne lbl_fn_806F5D90_0000147C
    li r4, 0x1
    li r0, 0x5
    stw r4, 0x124(r31)
    stw r0, 0x40(r31)
    bl fn_806D7F20
    stw r3, 0x54(r31)
    b lbl_fn_806F5D90_00001670
lbl_fn_806F5D90_0000147C:
    li r4, 0x0
    bl fn_806D8560
    cmpwi r3, 0x0
    bne lbl_fn_806F5D90_000014AC
    li r3, 0x1
    li r0, 0x5
    stw r3, 0x124(r31)
    lwz r3, 0x50(r31)
    stw r0, 0x40(r31)
    bl fn_806D7F20
    stw r3, 0x54(r31)
    b lbl_fn_806F5D90_00001670
lbl_fn_806F5D90_000014AC:
    lis r4, 0x1
    lwz r3, 0x50(r31)
    subi r4, r4, 0x1
    addi r6, r1, 0x10
    li r5, 0x1001
    li r7, 0x4
    bl fn_806D7E30
    cmpwi r3, 0x0
    bge lbl_fn_806F5D90_000014F0
    li r3, 0x1
    li r0, 0x5
    stw r3, 0x124(r31)
    lwz r3, 0x50(r31)
    stw r0, 0x40(r31)
    bl fn_806D7F20
    stw r3, 0x54(r31)
    b lbl_fn_806F5D90_00001670
lbl_fn_806F5D90_000014F0:
    lwz r0, 0x15c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806F5D90_0000150C
    lis r4, lbl_807C5788@ha
    lwz r3, 0x50(r31)
    lwz r4, lbl_807C5788@l(r4)
    bl fn_806D85E0
lbl_fn_806F5D90_0000150C:
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0x8
    bl memset
    li r0, 0x2
    stb r0, 0x19(r1)
    lwz r0, 0x18c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806F5D90_00001540
    lhz r3, 0x190(r31)
    bl fn_806A4270
    sth r3, 0x1a(r1)
    b lbl_fn_806F5D90_00001570
lbl_fn_806F5D90_00001540:
    lis r3, lbl_80862120@ha
    lwz r0, lbl_80862120@l(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F5D90_00001564
    lis r3, lbl_80862124@ha
    lhz r3, lbl_80862124@l(r3)
    bl fn_806A4270
    sth r3, 0x1a(r1)
    b lbl_fn_806F5D90_00001570
lbl_fn_806F5D90_00001564:
    lhz r3, 0x20(r31)
    bl fn_806A4270
    sth r3, 0x1a(r1)
lbl_fn_806F5D90_00001570:
    lwz r0, 0x1c(r31)
    addi r4, r1, 0x18
    stw r0, 0x1c(r1)
    li r5, 0x8
    lwz r3, 0x50(r31)
    bl fn_806D7C40
    cmpwi r3, -0x1
    bne lbl_fn_806F5D90_000015C8
    lwz r3, 0x50(r31)
    bl fn_806D7F20
    cmpwi r3, -0x6
    beq lbl_fn_806F5D90_000015C8
    cmpwi r3, -0x1a
    beq lbl_fn_806F5D90_000015C8
    cmpwi r3, -0x4c
    beq lbl_fn_806F5D90_000015C8
    li r4, 0x1
    li r0, 0x6
    stw r4, 0x124(r31)
    stw r0, 0x40(r31)
    stw r3, 0x54(r31)
    b lbl_fn_806F5D90_00001670
lbl_fn_806F5D90_000015C8:
    lwz r3, 0x50(r31)
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    li r4, 0x0
    bl fn_806D7F30
    cmpwi r3, -0x1
    beq lbl_fn_806F5D90_000015F8
    cmpwi r3, 0x1
    bne lbl_fn_806F5D90_0000162C
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806F5D90_0000162C
lbl_fn_806F5D90_000015F8:
    cmpwi r3, -0x1
    li r3, 0x1
    li r0, 0x6
    stw r3, 0x124(r31)
    stw r0, 0x40(r31)
    bne lbl_fn_806F5D90_00001620
    lwz r3, 0x50(r31)
    bl fn_806D7F20
    stw r3, 0x54(r31)
    b lbl_fn_806F5D90_00001670
lbl_fn_806F5D90_00001620:
    li r0, 0x0
    stw r0, 0x54(r31)
    b lbl_fn_806F5D90_00001670
lbl_fn_806F5D90_0000162C:
    cmpwi r3, 0x1
    bne lbl_fn_806F5D90_00001670
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806F5D90_00001670
    lwz r0, 0x198(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806F5D90_00001658
    li r0, 0x5
    stw r0, 0x10(r31)
    b lbl_fn_806F5D90_00001660
lbl_fn_806F5D90_00001658:
    li r0, 0x4
    stw r0, 0x10(r31)
lbl_fn_806F5D90_00001660:
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_806F27E0
lbl_fn_806F5D90_00001670:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806F6000(void)
{
    nofralloc
    stwu r1, -0x420(r1)
    mflr r0
    stw r0, 0x424(r1)
    stw r31, 0x41c(r1)
    mr r31, r3
    lwz r0, 0x1a0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F6000_00001708
    lwz r12, 0x1bc(r3)
    cmpwi r12, 0x0
    beq lbl_fn_806F6000_000016E0
    addi r4, r3, 0x194
    mtctr r12
    bctrl
    cmpwi r3, 0x3
    bne lbl_fn_806F6000_000016E0
    li r3, 0x1
    li r0, 0x11
    stw r3, 0x124(r31)
    stw r0, 0x40(r31)
    b lbl_fn_806F6000_0000184C
lbl_fn_806F6000_000016E0:
    lwz r0, 0x1a4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806F6000_00001708
    li r0, 0x5
    stw r0, 0x10(r31)
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_806F27E0
    b lbl_fn_806F6000_0000184C
lbl_fn_806F6000_00001708:
    lwz r0, 0x1b0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806F6000_00001774
    lwz r12, 0x1bc(r31)
    cmpwi r12, 0x0
    beq lbl_fn_806F6000_0000174C
    mr r3, r31
    addi r4, r31, 0x194
    mtctr r12
    bctrl
    cmpwi r3, 0x3
    bne lbl_fn_806F6000_0000174C
    li r3, 0x1
    li r0, 0x11
    stw r3, 0x124(r31)
    stw r0, 0x40(r31)
    b lbl_fn_806F6000_0000184C
lbl_fn_806F6000_0000174C:
    lwz r0, 0x1a4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806F6000_0000184C
    li r0, 0x5
    stw r0, 0x10(r31)
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_806F27E0
    b lbl_fn_806F6000_0000184C
lbl_fn_806F6000_00001774:
    lwz r3, 0x68(r31)
    lwz r0, 0x64(r31)
    cmpw r3, r0
    bge lbl_fn_806F6000_000017AC
    mr r3, r31
    bl fn_806F2630
    cmpwi r3, 0x0
    beq lbl_fn_806F6000_0000184C
    lwz r3, 0x68(r31)
    lwz r0, 0x64(r31)
    cmpw r3, r0
    blt lbl_fn_806F6000_0000184C
    addi r3, r31, 0x58
    bl fn_806F2600
lbl_fn_806F6000_000017AC:
    li r0, 0x401
    stw r0, 0x8(r1)
    mr r3, r31
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_806F2A10
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    bgt lbl_fn_806F6000_000017E4
    li r3, 0x1
    li r0, 0x11
    stw r3, 0x124(r31)
    stw r0, 0x40(r31)
    b lbl_fn_806F6000_0000184C
lbl_fn_806F6000_000017E4:
    cmpwi r3, 0x0
    bne lbl_fn_806F6000_0000184C
    lwz r5, 0x8(r1)
    addi r3, r31, 0xc4
    addi r4, r1, 0xc
    bl fn_806F2070
    cmpwi r3, 0x0
    beq lbl_fn_806F6000_0000184C
    mr r3, r31
    bl fn_806F28C0
    cmpwi r3, 0x0
    bne lbl_fn_806F6000_00001828
    li r3, 0x1
    li r0, 0x11
    stw r3, 0x124(r31)
    stw r0, 0x40(r31)
    b lbl_fn_806F6000_0000184C
lbl_fn_806F6000_00001828:
    lwz r0, 0x1a4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806F6000_0000184C
    li r0, 0x5
    stw r0, 0x10(r31)
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_806F27E0
lbl_fn_806F6000_0000184C:
    lwz r0, 0x424(r1)
    lwz r31, 0x41c(r1)
    mtlr r0
    addi r1, r1, 0x420
    blr
}

asm void fn_806F61E0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    lis r30, lbl_807C5A08@ha
    addi r30, r30, lbl_807C5A08@l
    stw r29, 0x24(r1)
    lwz r0, 0x64(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F61E0_00001ADC
    lwz r0, 0x198(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F61E0_000018B4
    lwz r0, 0x1a8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F61E0_000018BC
lbl_fn_806F61E0_000018B4:
    addi r29, r3, 0x58
    b lbl_fn_806F61E0_000018C0
lbl_fn_806F61E0_000018BC:
    addi r29, r3, 0x7c
lbl_fn_806F61E0_000018C0:
    lwz r0, 0x164(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F61E0_000018E0
    lwz r0, 0x184(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F61E0_000018E0
    addi r4, r30, 0x1c
    b lbl_fn_806F61E0_000018F4
lbl_fn_806F61E0_000018E0:
    lwz r0, 0xc(r3)
    addi r4, r30, 0x2c
    cmpwi r0, 0x3
    bne lbl_fn_806F61E0_000018F4
    addi r4, r30, 0x24
lbl_fn_806F61E0_000018F4:
    mr r3, r29
    li r5, 0x0
    bl fn_806F2070
    lwz r0, 0x18c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806F61E0_0000191C
    lis r3, lbl_80862120@ha
    lwz r0, lbl_80862120@l(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F61E0_00001930
lbl_fn_806F61E0_0000191C:
    lwz r4, 0x14(r31)
    mr r3, r29
    li r5, 0x0
    bl fn_806F2070
    b lbl_fn_806F61E0_00001940
lbl_fn_806F61E0_00001930:
    lwz r4, 0x24(r31)
    mr r3, r29
    li r5, 0x0
    bl fn_806F2070
lbl_fn_806F61E0_00001940:
    mr r3, r29
    addi r4, r30, 0x34
    li r5, 0x0
    bl fn_806F2070
    lhz r0, 0x20(r31)
    cmplwi r0, 0x50
    bne lbl_fn_806F61E0_00001970
    lwz r5, 0x18(r31)
    mr r3, r29
    addi r4, r30, 0x40
    bl fn_806F23C0
    b lbl_fn_806F61E0_000019B8
lbl_fn_806F61E0_00001970:
    mr r3, r29
    addi r4, r30, 0x48
    li r5, 0x0
    bl fn_806F2070
    lwz r4, 0x18(r31)
    mr r3, r29
    li r5, 0x0
    bl fn_806F2070
    mr r3, r29
    li r4, 0x3a
    bl fn_806F2470
    lhz r4, 0x20(r31)
    mr r3, r29
    bl fn_806F25B0
    mr r3, r29
    addi r4, r30, 0x50
    li r5, 0x2
    bl fn_806F2070
lbl_fn_806F61E0_000019B8:
    lwz r3, 0x2c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806F61E0_000019D4
    addi r4, r30, 0x54
    bl fn_806827C4
    cmpwi r3, 0x0
    bne lbl_fn_806F61E0_000019E4
lbl_fn_806F61E0_000019D4:
    mr r3, r29
    addi r4, r30, 0x54
    addi r5, r30, 0x60
    bl fn_806F23C0
lbl_fn_806F61E0_000019E4:
    lwz r0, 0x3c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806F61E0_00001A04
    mr r3, r29
    addi r4, r30, 0x70
    addi r5, r30, 0x7c
    bl fn_806F23C0
    b lbl_fn_806F61E0_00001A14
lbl_fn_806F61E0_00001A04:
    mr r3, r29
    addi r4, r30, 0x70
    addi r5, r30, 0x88
    bl fn_806F23C0
lbl_fn_806F61E0_00001A14:
    lwz r0, 0x164(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806F61E0_00001A68
    lwz r0, 0x184(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806F61E0_00001A68
    lwz r5, 0x174(r31)
    addi r3, r1, 0x8
    addi r4, r30, 0x90
    crclr 6
    bl sprintf
    mr r3, r29
    addi r4, r30, 0x94
    addi r5, r1, 0x8
    bl fn_806F23C0
    mr r3, r31
    bl fn_806F4280
    mr r5, r3
    mr r3, r29
    addi r4, r30, 0xa4
    bl fn_806F23C0
lbl_fn_806F61E0_00001A68:
    lwz r4, 0x2c(r31)
    cmpwi r4, 0x0
    beq lbl_fn_806F61E0_00001A80
    mr r3, r29
    li r5, 0x0
    bl fn_806F2070
lbl_fn_806F61E0_00001A80:
    mr r3, r29
    addi r4, r30, 0x50
    li r5, 0x2
    bl fn_806F2070
    lwz r0, 0x198(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806F61E0_00001ADC
    lwz r0, 0x1a8(r31)
    cmpwi r0, 0x1
    bne lbl_fn_806F61E0_00001ADC
    lwz r4, 0x4(r29)
    addi r3, r31, 0x58
    lwz r5, 0xc(r29)
    bl fn_806F21E0
    cmpwi r3, 0x0
    bne lbl_fn_806F61E0_00001AD4
    li r3, 0x1
    li r0, 0x11
    stw r3, 0x124(r31)
    stw r0, 0x40(r31)
    b lbl_fn_806F61E0_00001B40
lbl_fn_806F61E0_00001AD4:
    mr r3, r29
    bl fn_806F2600
lbl_fn_806F61E0_00001ADC:
    mr r3, r31
    bl fn_806F2630
    cmpwi r3, 0x0
    beq lbl_fn_806F61E0_00001B40
    lwz r3, 0x68(r31)
    lwz r0, 0x64(r31)
    cmpw r3, r0
    blt lbl_fn_806F61E0_00001B40
    addi r3, r31, 0x58
    bl fn_806F2600
    lwz r0, 0x164(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806F61E0_00001B28
    lwz r0, 0x184(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806F61E0_00001B28
    li r0, 0x6
    stw r0, 0x10(r31)
    b lbl_fn_806F61E0_00001B30
lbl_fn_806F61E0_00001B28:
    li r0, 0x7
    stw r0, 0x10(r31)
lbl_fn_806F61E0_00001B30:
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_806F27E0
lbl_fn_806F61E0_00001B40:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806F64D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r30, 0x170(r3)
    bl fn_806F56D0
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806F64D0_00001BE0
    li r0, 0x0
    stw r0, 0x8(r1)
    mr r3, r29
    bl fn_806F4980
    lwz r3, 0x50(r29)
    addi r4, r1, 0x8
    li r5, 0x0
    li r6, 0x0
    bl fn_806D7F30
    cmpwi r3, 0x1
    bne lbl_fn_806F64D0_00001C38
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806F64D0_00001C38
    li r0, 0x8
    stw r0, 0x10(r29)
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    bl fn_806F27E0
    b lbl_fn_806F64D0_00001C38
lbl_fn_806F64D0_00001BE0:
    cmpwi r3, 0x3
    bne lbl_fn_806F64D0_00001BF4
    li r0, 0x0
    stw r0, 0x180(r29)
    b lbl_fn_806F64D0_00001C38
lbl_fn_806F64D0_00001BF4:
    lwz r0, 0x170(r29)
    cmpw r30, r0
    beq lbl_fn_806F64D0_00001C08
    mr r3, r29
    bl fn_806F2820
lbl_fn_806F64D0_00001C08:
    cmpwi r31, 0x1
    bne lbl_fn_806F64D0_00001C38
    mr r3, r29
    bl fn_806F4980
    li r3, 0x1
    li r0, 0x7
    stw r3, 0x184(r29)
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    stw r0, 0x10(r29)
    bl fn_806F27E0
lbl_fn_806F64D0_00001C38:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806F65D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x24(r1)
    addi r4, r1, 0xc
    addi r6, r1, 0x8
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r3, 0x50(r3)
    bl fn_806D7F30
    cmpwi r3, -0x1
    beq lbl_fn_806F65D0_00001CA0
    cmpwi r3, 0x1
    bne lbl_fn_806F65D0_00001CD4
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806F65D0_00001CD4
lbl_fn_806F65D0_00001CA0:
    cmpwi r3, -0x1
    li r3, 0x1
    li r0, 0x5
    stw r3, 0x124(r31)
    stw r0, 0x40(r31)
    bne lbl_fn_806F65D0_00001CC8
    lwz r3, 0x50(r31)
    bl fn_806D7F20
    stw r3, 0x54(r31)
    b lbl_fn_806F65D0_00001D00
lbl_fn_806F65D0_00001CC8:
    li r0, 0x0
    stw r0, 0x54(r31)
    b lbl_fn_806F65D0_00001D00
lbl_fn_806F65D0_00001CD4:
    cmpwi r3, 0x1
    bne lbl_fn_806F65D0_00001D00
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806F65D0_00001D00
    li r0, 0x8
    stw r0, 0x10(r31)
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_806F27E0
lbl_fn_806F65D0_00001D00:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806F6690(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C5AC0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C5AC0@l
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r7, r1, 0xc
    addi r8, r1, 0x8
    lwz r3, 0xa4(r3)
    crclr 6
    bl fn_806820D4
    cmpwi r3, 0x3
    bne lbl_fn_806F6690_00001D78
    lwz r6, 0x14(r1)
    cmpwi r6, 0x1
    blt lbl_fn_806F6690_00001D78
    lwz r3, 0xc(r1)
    subi r0, r3, 0x64
    cmplwi r0, 0x1f3
    ble lbl_fn_806F6690_00001D90
lbl_fn_806F6690_00001D78:
    li r3, 0x1
    li r0, 0x7
    stw r3, 0x124(r31)
    li r3, 0x0
    stw r0, 0x40(r31)
    b lbl_fn_806F6690_00001E18
lbl_fn_806F6690_00001D90:
    lis r3, lbl_807BB380@ha
    lwz r4, 0x8(r1)
    addi r3, r3, lbl_807BB380@l
    lwz r5, 0x38(r3)
    b lbl_fn_806F6690_00001DAC
lbl_fn_806F6690_00001DA4:
    addi r4, r4, 0x1
    stw r4, 0x8(r1)
lbl_fn_806F6690_00001DAC:
    lwz r3, 0xa4(r31)
    lbzx r3, r3, r4
    extsb. r0, r3
    beq lbl_fn_806F6690_00001DF8
    cmplwi r0, 0xff
    li r0, 0x1
    bgt lbl_fn_806F6690_00001DCC
    li r0, 0x0
lbl_fn_806F6690_00001DCC:
    cmpwi r0, 0x0
    beq lbl_fn_806F6690_00001DDC
    li r0, 0x0
    b lbl_fn_806F6690_00001DF0
lbl_fn_806F6690_00001DDC:
    extsb r0, r3
    lwz r3, 0x8(r5)
    slwi r0, r0, 1
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 23, 23
lbl_fn_806F6690_00001DF0:
    cmpwi r0, 0x0
    bne lbl_fn_806F6690_00001DA4
lbl_fn_806F6690_00001DF8:
    stw r6, 0x110(r31)
    li r3, 0x1
    lwz r0, 0x10(r1)
    stw r0, 0x114(r31)
    lwz r0, 0xc(r1)
    stw r0, 0x118(r31)
    lwz r0, 0x8(r1)
    stw r0, 0x11c(r31)
lbl_fn_806F6690_00001E18:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806F67A0(void)
{
    nofralloc
    stwu r1, -0x420(r1)
    mflr r0
    stw r0, 0x424(r1)
    li r0, 0x400
    addi r4, r1, 0x10
    addi r5, r1, 0x8
    stw r31, 0x41c(r1)
    stw r30, 0x418(r1)
    stw r29, 0x414(r1)
    mr r29, r3
    stw r0, 0x8(r1)
    bl fn_806F2A10
    cmpwi r3, 0x3
    mr r31, r3
    beq lbl_fn_806F67A0_00001FA4
    cmpwi r3, 0x1
    beq lbl_fn_806F67A0_00001FA4
    cmpwi r3, 0x0
    bne lbl_fn_806F67A0_00001EE4
    lwz r0, 0x198(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806F67A0_00001ECC
    lwz r0, 0x1a8(r29)
    cmpwi r0, 0x1
    bne lbl_fn_806F67A0_00001ECC
    lwz r5, 0x8(r1)
    addi r3, r29, 0xc4
    addi r4, r1, 0x10
    bl fn_806F2070
    cmpwi r3, 0x0
    beq lbl_fn_806F67A0_00001FA4
    mr r3, r29
    bl fn_806F28C0
    cmpwi r3, 0x0
    bne lbl_fn_806F67A0_00001EE4
    li r3, 0x1
    li r0, 0x11
    stw r3, 0x124(r29)
    stw r0, 0x40(r29)
    b lbl_fn_806F67A0_00001FA4
lbl_fn_806F67A0_00001ECC:
    lwz r5, 0x8(r1)
    addi r3, r29, 0xa0
    addi r4, r1, 0x10
    bl fn_806F2070
    cmpwi r3, 0x0
    beq lbl_fn_806F67A0_00001FA4
lbl_fn_806F67A0_00001EE4:
    lis r4, lbl_807C5A58@ha
    lwz r3, 0xa4(r29)
    addi r4, r4, lbl_807C5A58@l
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_806F67A0_00001F80
    li r31, 0x0
    stb r31, 0x0(r3)
    lwz r0, 0xa4(r29)
    subf r30, r0, r3
    mr r3, r29
    bl fn_806F6690
    cmpwi r3, 0x0
    beq lbl_fn_806F67A0_00001FA4
    lwz r0, 0x118(r29)
    addi r3, r30, 0x2
    stw r3, 0x120(r29)
    cmpwi r0, 0x64
    bne lbl_fn_806F67A0_00001F64
    lwz r0, 0x180(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806F67A0_00001F64
    stw r31, 0x180(r29)
    addi r3, r29, 0xa0
    bl fn_806F2600
    li r0, 0x6
    stw r0, 0x10(r29)
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    bl fn_806F27E0
    b lbl_fn_806F67A0_00001FA4
lbl_fn_806F67A0_00001F64:
    li r0, 0x9
    stw r0, 0x10(r29)
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    bl fn_806F27E0
    b lbl_fn_806F67A0_00001FA4
lbl_fn_806F67A0_00001F80:
    cmpwi r31, 0x2
    bne lbl_fn_806F67A0_00001FA4
    li r3, 0x1
    li r0, 0x7
    stw r3, 0x124(r29)
    lwz r3, 0x50(r29)
    stw r0, 0x40(r29)
    bl fn_806D7F20
    stw r3, 0x54(r29)
lbl_fn_806F67A0_00001FA4:
    lwz r0, 0x424(r1)
    lwz r31, 0x41c(r1)
    lwz r30, 0x418(r1)
    lwz r29, 0x414(r1)
    mtlr r0
    addi r1, r1, 0x420
    blr
}

asm void fn_806F6940(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r7, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r6, 0x128(r3)
    lwz r0, 0x12c(r3)
    add r6, r6, r5
    stw r6, 0x128(r3)
    cmpw r6, r0
    li r6, 0x0
    beq lbl_fn_806F6940_0000200C
    lwz r0, 0x158(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F6940_00002014
lbl_fn_806F6940_0000200C:
    li r0, 0x1
    stw r0, 0x124(r3)
lbl_fn_806F6940_00002014:
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F6940_00002044
    addi r3, r3, 0xe8
    bl fn_806F2070
    cmpwi r3, 0x0
    bne lbl_fn_806F6940_00002038
    li r3, 0x0
    b lbl_fn_806F6940_0000209C
lbl_fn_806F6940_00002038:
    lwz r6, 0xec(r31)
    lwz r7, 0xf4(r31)
    b lbl_fn_806F6940_00002088
lbl_fn_806F6940_00002044:
    cmpwi r0, 0x1
    bne lbl_fn_806F6940_00002078
    cmpwi r5, 0x0
    beq lbl_fn_806F6940_0000206C
    li r4, 0x1
    li r0, 0xd
    stw r4, 0x124(r3)
    stw r0, 0x40(r3)
    li r3, 0x0
    b lbl_fn_806F6940_0000209C
lbl_fn_806F6940_0000206C:
    mr r6, r4
    mr r7, r5
    b lbl_fn_806F6940_00002088
lbl_fn_806F6940_00002078:
    cmpwi r0, 0x2
    bne lbl_fn_806F6940_00002088
    mr r6, r4
    mr r7, r5
lbl_fn_806F6940_00002088:
    mr r3, r31
    mr r4, r6
    mr r5, r7
    bl fn_806F27E0
    li r3, 0x1
lbl_fn_806F6940_0000209C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
