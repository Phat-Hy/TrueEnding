#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_16(void);
extern void _restgpr_19(void);
extern void _restgpr_22(void);
extern void _restgpr_23(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_16(void);
extern void _savegpr_19(void);
extern void _savegpr_22(void);
extern void _savegpr_23(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_80680CF8(void);
extern void fn_80680D18(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_806A420C(void);
extern void fn_806A4264(void);
extern void fn_806A426C(void);
extern void fn_806A4270(void);
extern void fn_806D5850(void);
extern void fn_806D58F0(void);
extern void fn_806D5900(void);
extern void fn_806D5C90(void);
extern void fn_806D63A0(void);
extern void fn_806D6560(void);
extern void fn_806D6610(void);
extern void fn_806D6720(void);
extern void fn_806D7A90(void);
extern void fn_806D7AC0(void);
extern void fn_806D7AE0(void);
extern void fn_806D7B30(void);
extern void fn_806D7BB0(void);
extern void fn_806D7CF0(void);
extern void fn_806D7DA0(void);
extern void fn_806D7E70(void);
extern void fn_806D7EE0(void);
extern void fn_806D7F20(void);
extern void fn_806D8060(void);
extern void fn_806D8650(void);
extern void fn_806D86A0(void);
extern void fn_806D86F0(void);
extern void fn_806D8F10(void);
extern void fn_806D8F20(void);
extern void fn_806D8F30(void);
extern void fn_806D9590(void);
extern void fn_806E9860(void);
extern void fn_806E9F50(void);
extern void fn_806EA540(void);
extern void fn_806EAC30(void);
extern void fn_806ECC20(void);
extern void fn_806ECE40(void);
extern void fn_806F0EB0(void);
extern void fn_806F15B0(void);
extern void fn_806F1630(void);
extern void fn_806FBDB0(void);
extern void fn_806FCFE0(void);
extern int sprintf(char* str, const char* format, ...);
extern void strchr(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807BB380[];
extern u8 lbl_807C4340[];
extern u8 lbl_807C4350[];
extern u8 lbl_807C4358[];
extern u8 lbl_807C50F4[];
extern u8 lbl_807C50F8[];
extern u8 lbl_807C5118[];
extern u8 lbl_807C5150[];
extern u8 lbl_807C5158[];
extern u8 lbl_807C5168[];
extern u8 lbl_807C5170[];
extern u8 lbl_807C5174[];
extern u8 lbl_807C5380[];
extern u8 lbl_80808081[];
extern u8 lbl_80861F98[];
extern u8 lbl_80861FC4[];
extern u8 lbl_80861FC8[];
extern u8 lbl_80862020[];

/* Small data declarations */

/* Function declarations */
void pad_03_806EE7D4_text(void);
void fn_806EE7E0(void);
void fn_806EE8B0(void);
void fn_806EEAD0(void);
void fn_806EEBF0(void);
void fn_806EEC40(void);
void fn_806EED30(void);
void fn_806EEDC0(void);
void fn_806EEEC0(void);
void fn_806EF050(void);
void fn_806EF0C0(void);
void fn_806EF340(void);
void fn_806EF470(void);
void fn_806EF550(void);
void fn_806EF570(void);
void fn_806EF590(void);
void fn_806EF5B0(void);
void fn_806EF6D0(void);
void fn_806EF790(void);
void fn_806EF8B0(void);
void fn_806EF930(void);
void fn_806EF9F0(void);
void fn_806EFA30(void);
void fn_806EFAE0(void);
void fn_806EFB80(void);
void fn_806EFC70(void);
void fn_806EFE10(void);
void fn_806F0200(void);
void fn_806F0210(void);
void fn_806F0240(void);
void fn_806F0560(void);

asm void pad_03_806EE7D4_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
    opword 0x00000000
}

asm void fn_806EE7E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r3, 0x8(r1)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806EE7E0_000000BC
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806EE7E0_00000044
    b lbl_fn_806EE7E0_000000BC
lbl_fn_806EE7E0_00000044:
    lwz r0, 0xc(r3)
    cmpwi r0, 0x7
    bne lbl_fn_806EE7E0_000000AC
    lwz r3, 0x8(r3)
    lwz r3, 0x10(r3)
    bl fn_806D58F0
    mr r31, r3
    li r29, 0x0
    b lbl_fn_806EE7E0_000000A0
lbl_fn_806EE7E0_00000068:
    lwz r30, 0x8(r1)
    mr r4, r29
    lwz r3, 0x8(r30)
    lwz r3, 0x10(r3)
    bl fn_806D5900
    lwz r0, 0x0(r3)
    cmplw r30, r0
    bne lbl_fn_806EE7E0_0000009C
    lwz r3, 0x8(r30)
    mr r4, r29
    lwz r3, 0x10(r3)
    bl fn_806D5C90
    b lbl_fn_806EE7E0_000000BC
lbl_fn_806EE7E0_0000009C:
    addi r29, r29, 0x1
lbl_fn_806EE7E0_000000A0:
    cmpw r29, r31
    blt lbl_fn_806EE7E0_00000068
    b lbl_fn_806EE7E0_000000BC
lbl_fn_806EE7E0_000000AC:
    lwz r3, 0x8(r3)
    addi r4, r1, 0x8
    lwz r3, 0xc(r3)
    bl fn_806D6560
lbl_fn_806EE7E0_000000BC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806EE8B0(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stw r31, 0xcc(r1)
    mr r31, r5
    stw r30, 0xc8(r1)
    mr r30, r4
    addi r4, r1, 0xc
    stw r29, 0xc4(r1)
    mr r29, r3
    addi r3, r1, 0x8
    stw r6, 0x8(r1)
    stw r7, 0xc(r1)
    bl fn_806EF050
    lwz r0, 0x40(r29)
    cmpwi r0, 0x3
    beq lbl_fn_806EE8B0_00000138
    lwz r3, 0x0(r29)
    bl fn_806D86A0
    cmpwi r3, 0x0
    bne lbl_fn_806EE8B0_00000138
    li r3, 0x1
    b lbl_fn_806EE8B0_000002DC
lbl_fn_806EE8B0_00000138:
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0x8
    bl memset
    li r0, 0x2
    stb r0, 0x19(r1)
    mr r3, r31
    stw r30, 0x1c(r1)
    bl fn_806A4270
    sth r3, 0x1a(r1)
    addi r7, r1, 0x18
    lwz r4, 0x8(r1)
    li r6, 0x0
    lwz r3, 0x0(r29)
    li r8, 0x8
    lwz r5, 0xc(r1)
    bl fn_806D7DA0
    cmpwi r3, -0x1
    bne lbl_fn_806EE8B0_0000026C
    lwz r3, 0x0(r29)
    bl fn_806D7F20
    cmpwi r3, -0xf
    bne lbl_fn_806EE8B0_000001B4
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_806ECC20
    cmpwi r3, 0x0
    bne lbl_fn_806EE8B0_000002D8
    li r3, 0x0
    b lbl_fn_806EE8B0_000002DC
lbl_fn_806EE8B0_000001B4:
    cmpwi r3, -0x17
    bne lbl_fn_806EE8B0_000001E0
    mr r3, r29
    mr r4, r30
    mr r5, r31
    li r6, 0x1
    bl fn_806ECE40
    cmpwi r3, 0x0
    bne lbl_fn_806EE8B0_000002D8
    li r3, 0x0
    b lbl_fn_806EE8B0_000002DC
lbl_fn_806EE8B0_000001E0:
    cmpwi r3, -0x2a
    beq lbl_fn_806EE8B0_000001F0
    cmpwi r3, -0x6
    bne lbl_fn_806EE8B0_000001F8
lbl_fn_806EE8B0_000001F0:
    li r3, 0x1
    b lbl_fn_806EE8B0_000002DC
lbl_fn_806EE8B0_000001F8:
    cmpwi r3, -0x23
    beq lbl_fn_806EE8B0_000002D8
    lwz r0, 0x18(r29)
    cmpwi r0, 0x0
    bne lbl_fn_806EE8B0_00000264
    li r31, 0x1
    stw r31, 0x18(r29)
    mr r3, r29
    bl fn_806EAC30
    mr r3, r29
    bl fn_806E9860
    cmpwi r3, 0x0
    beq lbl_fn_806EE8B0_00000264
    lwz r0, 0x1c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806EE8B0_00000240
    stw r31, 0x14(r29)
    b lbl_fn_806EE8B0_00000264
lbl_fn_806EE8B0_00000240:
    lwz r3, 0x0(r29)
    bl fn_806D7B30
    lwz r3, 0xc(r29)
    bl fn_806D63A0
    lwz r3, 0x10(r29)
    bl fn_806D5850
    mr r3, r29
    bl fn_806D7AC0
    bl fn_806D8F20
lbl_fn_806EE8B0_00000264:
    li r3, 0x0
    b lbl_fn_806EE8B0_000002DC
lbl_fn_806EE8B0_0000026C:
    lwz r0, 0x28(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806EE8B0_000002D8
    addi r0, r1, 0x20
    stw r30, 0x20(r1)
    addi r4, r1, 0x10
    sth r31, 0x24(r1)
    stw r0, 0x10(r1)
    lwz r3, 0xc(r29)
    bl fn_806D6610
    mr. r4, r3
    mr r3, r29
    beq lbl_fn_806EE8B0_000002A8
    lwz r4, 0x0(r4)
    b lbl_fn_806EE8B0_000002AC
lbl_fn_806EE8B0_000002A8:
    li r4, 0x0
lbl_fn_806EE8B0_000002AC:
    lwz r8, 0x8(r1)
    mr r5, r30
    lwz r9, 0xc(r1)
    mr r6, r31
    li r7, 0x0
    li r10, 0x1
    bl fn_806E9F50
    cmpwi r3, 0x0
    bne lbl_fn_806EE8B0_000002D8
    li r3, 0x0
    b lbl_fn_806EE8B0_000002DC
lbl_fn_806EE8B0_000002D8:
    li r3, 0x1
lbl_fn_806EE8B0_000002DC:
    lwz r0, 0xd4(r1)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    lwz r29, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_806EEAD0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r29, 0x0(r3)
    lwz r4, 0x0(r4)
    lwz r0, 0xc(r29)
    cmpwi r0, 0x7
    beq lbl_fn_806EEAD0_00000340
    mr r3, r29
    bl fn_806EA540
    cmpwi r3, 0x0
    bne lbl_fn_806EEAD0_00000340
    li r3, 0x0
    b lbl_fn_806EEAD0_000003FC
lbl_fn_806EEAD0_00000340:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x7
    bne lbl_fn_806EEAD0_000003F8
    lwz r0, 0x14(r29)
    cmpwi r0, 0x0
    bne lbl_fn_806EEAD0_000003F8
    lwz r0, 0x24(r29)
    cmpwi r0, 0x0
    bne lbl_fn_806EEAD0_000003F8
    stw r29, 0x8(r1)
    lwz r0, 0x14(r29)
    cmpwi r0, 0x0
    bne lbl_fn_806EEAD0_000003F8
    lwz r0, 0x24(r29)
    cmpwi r0, 0x0
    bne lbl_fn_806EEAD0_000003F8
    lwz r0, 0xc(r29)
    cmpwi r0, 0x7
    bne lbl_fn_806EEAD0_000003E8
    lwz r3, 0x8(r29)
    lwz r3, 0x10(r3)
    bl fn_806D58F0
    mr r31, r3
    li r30, 0x0
    b lbl_fn_806EEAD0_000003DC
lbl_fn_806EEAD0_000003A4:
    lwz r29, 0x8(r1)
    mr r4, r30
    lwz r3, 0x8(r29)
    lwz r3, 0x10(r3)
    bl fn_806D5900
    lwz r0, 0x0(r3)
    cmplw r29, r0
    bne lbl_fn_806EEAD0_000003D8
    lwz r3, 0x8(r29)
    mr r4, r30
    lwz r3, 0x10(r3)
    bl fn_806D5C90
    b lbl_fn_806EEAD0_000003F8
lbl_fn_806EEAD0_000003D8:
    addi r30, r30, 0x1
lbl_fn_806EEAD0_000003DC:
    cmpw r30, r31
    blt lbl_fn_806EEAD0_000003A4
    b lbl_fn_806EEAD0_000003F8
lbl_fn_806EEAD0_000003E8:
    lwz r3, 0x8(r29)
    addi r4, r1, 0x8
    lwz r3, 0xc(r3)
    bl fn_806D6560
lbl_fn_806EEAD0_000003F8:
    li r3, 0x1
lbl_fn_806EEAD0_000003FC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806EEBF0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bl fn_806D8F30
    stw r3, 0x8(r1)
    lis r4, fn_806EEAD0@ha
    addi r4, r4, fn_806EEAD0@l
    addi r5, r1, 0x8
    lwz r3, 0xc(r31)
    bl fn_806D6720
    cntlzw r0, r3
    lwz r31, 0x1c(r1)
    srwi r3, r0, 5
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806EEC40(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
    lwz r3, 0x10(r3)
    bl fn_806D58F0
    subi r28, r3, 0x1
    b lbl_fn_806EEC40_0000053C
lbl_fn_806EEC40_00000494:
    lwz r3, 0x10(r27)
    mr r4, r28
    bl fn_806D5900
    lwz r3, 0x0(r3)
    stw r3, 0x8(r1)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806EEC40_00000538
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806EEC40_00000538
    lwz r0, 0xc(r3)
    cmpwi r0, 0x7
    bne lbl_fn_806EEC40_00000528
    lwz r3, 0x8(r3)
    lwz r3, 0x10(r3)
    bl fn_806D58F0
    mr r31, r3
    li r30, 0x0
    b lbl_fn_806EEC40_0000051C
lbl_fn_806EEC40_000004E4:
    lwz r29, 0x8(r1)
    mr r4, r30
    lwz r3, 0x8(r29)
    lwz r3, 0x10(r3)
    bl fn_806D5900
    lwz r0, 0x0(r3)
    cmplw r29, r0
    bne lbl_fn_806EEC40_00000518
    lwz r3, 0x8(r29)
    mr r4, r30
    lwz r3, 0x10(r3)
    bl fn_806D5C90
    b lbl_fn_806EEC40_00000538
lbl_fn_806EEC40_00000518:
    addi r30, r30, 0x1
lbl_fn_806EEC40_0000051C:
    cmpw r30, r31
    blt lbl_fn_806EEC40_000004E4
    b lbl_fn_806EEC40_00000538
lbl_fn_806EEC40_00000528:
    lwz r3, 0x8(r3)
    addi r4, r1, 0x8
    lwz r3, 0xc(r3)
    bl fn_806D6560
lbl_fn_806EEC40_00000538:
    subi r28, r28, 0x1
lbl_fn_806EEC40_0000053C:
    cmpwi r28, 0x0
    bge lbl_fn_806EEC40_00000494
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806EED30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806EED30_000005D4
    li r31, 0x1
    stw r31, 0x18(r3)
    bl fn_806EAC30
    mr r3, r30
    bl fn_806E9860
    cmpwi r3, 0x0
    beq lbl_fn_806EED30_000005D4
    lwz r0, 0x1c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806EED30_000005B0
    stw r31, 0x14(r30)
    b lbl_fn_806EED30_000005D4
lbl_fn_806EED30_000005B0:
    lwz r3, 0x0(r30)
    bl fn_806D7B30
    lwz r3, 0xc(r30)
    bl fn_806D63A0
    lwz r3, 0x10(r30)
    bl fn_806D5850
    mr r3, r30
    bl fn_806D7AC0
    bl fn_806D8F20
lbl_fn_806EED30_000005D4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806EEDC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807C4340@ha
    addi r31, r31, lbl_807C4340@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    beq lbl_fn_806EEDC0_00000620
    mr r30, r5
    b lbl_fn_806EEDC0_00000640
lbl_fn_806EEDC0_00000620:
    lis r6, lbl_80861FC4@ha
    lis r5, lbl_80861F98@ha
    lwz r0, lbl_80861FC4@l(r6)
    addi r5, r5, lbl_80861F98@l
    xori r0, r0, 0x1
    stw r0, lbl_80861FC4@l(r6)
    mulli r0, r0, 0x16
    add r30, r5, r0
lbl_fn_806EEDC0_00000640:
    cmpwi r3, 0x0
    beq lbl_fn_806EEDC0_0000069C
    cmpwi r4, 0x0
    beq lbl_fn_806EEDC0_00000678
    stw r3, 0xc(r1)
    addi r3, r1, 0xc
    bl fn_806A420C
    mr r5, r3
    mr r3, r30
    mr r6, r29
    addi r4, r31, 0x0
    crclr 6
    bl sprintf
    b lbl_fn_806EEDC0_000006C4
lbl_fn_806EEDC0_00000678:
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_806A420C
    mr r5, r3
    mr r3, r30
    addi r4, r31, 0x8
    crclr 6
    bl sprintf
    b lbl_fn_806EEDC0_000006C4
lbl_fn_806EEDC0_0000069C:
    cmpwi r4, 0x0
    beq lbl_fn_806EEDC0_000006BC
    mr r3, r30
    mr r5, r29
    addi r4, r31, 0xc
    crclr 6
    bl sprintf
    b lbl_fn_806EEDC0_000006C4
lbl_fn_806EEDC0_000006BC:
    li r0, 0x0
    stb r0, 0x0(r30)
lbl_fn_806EEDC0_000006C4:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806EEEC0(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x130
    bl _savegpr_26
    cmpwi r3, 0x0
    mr r28, r3
    mr r29, r4
    mr r30, r5
    li r31, 0x0
    beq lbl_fn_806EEEC0_00000724
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_806EEEC0_00000730
lbl_fn_806EEEC0_00000724:
    li r31, 0x0
    li r27, 0x0
    b lbl_fn_806EEEC0_00000848
lbl_fn_806EEEC0_00000730:
    li r4, 0x3a
    bl strchr
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_806EEEC0_0000074C
    li r27, 0x0
    b lbl_fn_806EEEC0_00000804
lbl_fn_806EEEC0_0000074C:
    cmplw r3, r28
    bne lbl_fn_806EEEC0_00000760
    li r28, 0x0
    li r31, 0x0
    b lbl_fn_806EEEC0_00000780
lbl_fn_806EEEC0_00000760:
    subf r26, r28, r3
    mr r4, r28
    mr r5, r26
    addi r3, r1, 0x8
    bl memcpy
    addi r28, r1, 0x8
    li r0, 0x0
    stbx r0, r28, r26
lbl_fn_806EEEC0_00000780:
    lis r3, lbl_807BB380@ha
    addi r5, r27, 0x1
    addi r3, r3, lbl_807BB380@l
    lwz r4, 0x38(r3)
    b lbl_fn_806EEEC0_000007DC
lbl_fn_806EEEC0_00000794:
    extsb r0, r3
    li r3, 0x1
    cmplwi r0, 0xff
    bgt lbl_fn_806EEEC0_000007A8
    li r3, 0x0
lbl_fn_806EEEC0_000007A8:
    cmpwi r3, 0x0
    beq lbl_fn_806EEEC0_000007B8
    li r0, 0x0
    b lbl_fn_806EEEC0_000007C8
lbl_fn_806EEEC0_000007B8:
    lwz r3, 0x8(r4)
    slwi r0, r0, 1
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_fn_806EEEC0_000007C8:
    cmpwi r0, 0x0
    bne lbl_fn_806EEEC0_000007D8
    li r3, 0x0
    b lbl_fn_806EEEC0_00000864
lbl_fn_806EEEC0_000007D8:
    addi r5, r5, 0x1
lbl_fn_806EEEC0_000007DC:
    lbz r3, 0x0(r5)
    extsb. r0, r3
    bne lbl_fn_806EEEC0_00000794
    addi r3, r27, 0x1
    bl fn_80684600
    cmplwi r3, 0xffff
    ble lbl_fn_806EEEC0_00000800
    li r3, 0x0
    b lbl_fn_806EEEC0_00000864
lbl_fn_806EEEC0_00000800:
    clrlwi r27, r3, 16
lbl_fn_806EEEC0_00000804:
    cmpwi r28, 0x0
    beq lbl_fn_806EEEC0_00000848
    mr r3, r28
    bl fn_806D7EE0
    addis r0, r3, 0x1
    mr r31, r3
    cmplwi r0, 0xffff
    bne lbl_fn_806EEEC0_00000848
    mr r3, r28
    bl fn_806D8060
    cmpwi r3, 0x0
    bne lbl_fn_806EEEC0_0000083C
    li r3, 0x0
    b lbl_fn_806EEEC0_00000864
lbl_fn_806EEEC0_0000083C:
    lwz r3, 0xc(r3)
    lwz r3, 0x0(r3)
    lwz r31, 0x0(r3)
lbl_fn_806EEEC0_00000848:
    cmpwi r29, 0x0
    beq lbl_fn_806EEEC0_00000854
    stw r31, 0x0(r29)
lbl_fn_806EEEC0_00000854:
    cmpwi r30, 0x0
    beq lbl_fn_806EEEC0_00000860
    sth r27, 0x0(r30)
lbl_fn_806EEEC0_00000860:
    li r3, 0x1
lbl_fn_806EEEC0_00000864:
    addi r11, r1, 0x130
    bl _restgpr_26
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_806EF050(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    bne lbl_fn_806EF050_000008B4
    lis r5, lbl_807C4350@ha
    li r0, 0x0
    addi r5, r5, lbl_807C4350@l
    stw r5, 0x0(r3)
    stw r0, 0x0(r4)
    b lbl_fn_806EF050_000008D0
lbl_fn_806EF050_000008B4:
    lwz r0, 0x0(r4)
    cmpwi r0, -0x1
    bne lbl_fn_806EF050_000008D0
    mr r3, r5
    bl strlen
    addi r0, r3, 0x1
    stw r0, 0x0(r31)
lbl_fn_806EF050_000008D0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806EF0C0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_16
    cmpwi r3, 0x0
    lis r30, lbl_80861FC8@ha
    lwz r22, 0x98(r1)
    mr r16, r3
    lwz r23, 0x9c(r1)
    mr r17, r4
    lwz r24, 0xa0(r1)
    mr r31, r5
    lwz r25, 0xa4(r1)
    mr r18, r6
    lwz r26, 0xa8(r1)
    mr r29, r7
    lwz r27, 0xac(r1)
    mr r19, r8
    mr r20, r9
    mr r21, r10
    addi r30, r30, lbl_80861FC8@l
    bne lbl_fn_806EF0C0_00000954
    lis r28, lbl_807C4358@ha
    addi r28, r28, lbl_807C4358@l
    b lbl_fn_806EF0C0_00000964
lbl_fn_806EF0C0_00000954:
    li r3, 0xd9c
    bl fn_806D7A90
    mr r28, r3
    stw r3, 0x0(r16)
lbl_fn_806EF0C0_00000964:
    bl fn_806D8F30
    bl fn_80680D18
    mr r4, r18
    addi r3, r28, 0x4
    li r5, 0x40
    bl fn_806D9590
    mr r4, r29
    addi r3, r28, 0x44
    li r5, 0x40
    bl fn_806D9590
    stw r31, 0xc8(r28)
    li r4, 0x0
    lis r3, lbl_80808081@ha
    li r0, 0x1
    stw r4, 0xb4(r28)
    addi r31, r3, lbl_80808081@l
    li r29, 0x0
    stw r4, 0xb8(r28)
    stw r17, 0x0(r28)
    stw r0, 0xc0(r28)
    stw r27, 0x114(r28)
    stw r21, 0x88(r28)
    stw r22, 0x8c(r28)
    stw r23, 0x90(r28)
    stw r24, 0x94(r28)
    stw r25, 0x98(r28)
    stw r26, 0x9c(r28)
    stw r4, 0xa0(r28)
    stw r4, 0xa4(r28)
    stw r4, 0xdc(r28)
    stw r19, 0xc4(r28)
    stw r4, 0xcc(r28)
    stw r20, 0xd0(r28)
    stw r4, 0x10c(r28)
    sth r4, 0x110(r28)
    stw r4, 0xa8(r28)
    stw r4, 0xb0(r28)
    stw r4, 0xac(r28)
    stw r4, 0xbc(r28)
    stb r4, 0x118(r28)
lbl_fn_806EF0C0_00000A04:
    bl fn_80680CF8
    mulhw r0, r31, r3
    add r4, r28, r29
    addi r29, r29, 0x1
    cmpwi r29, 0x4
    add r0, r0, r3
    srawi r0, r0, 7
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0xff
    subf r0, r0, r3
    stb r0, 0x84(r4)
    blt lbl_fn_806EF0C0_00000A04
    li r0, -0x1
    stw r0, 0xe0(r28)
    li r6, 0x0
    addi r3, r28, 0x11c
    stw r0, 0xe4(r28)
    li r21, 0x0
    li r4, 0x0
    li r5, 0xc80
    stw r0, 0xe8(r28)
    stw r0, 0xec(r28)
    stw r0, 0xf0(r28)
    stw r0, 0xf4(r28)
    stw r0, 0xf8(r28)
    stw r0, 0xfc(r28)
    stw r0, 0x100(r28)
    stw r0, 0x104(r28)
    stw r6, 0x108(r28)
    bl memset
    bl fn_806D86F0
    cmpwi r3, 0x0
    mr r20, r3
    beq lbl_fn_806EF0C0_00000AD0
    stw r21, 0x0(r30)
    addi r17, r30, 0x4
    b lbl_fn_806EF0C0_00000AC8
lbl_fn_806EF0C0_00000A9C:
    lwz r3, 0xc(r20)
    slwi r0, r21, 2
    lwzx r4, r3, r0
    cmpwi r4, 0x0
    beq lbl_fn_806EF0C0_00000AD0
    add r3, r17, r0
    li r5, 0x4
    bl memcpy
    lwz r3, 0x0(r30)
    addi r21, r3, 0x1
    stw r21, 0x0(r30)
lbl_fn_806EF0C0_00000AC8:
    cmpwi r21, 0x5
    blt lbl_fn_806EF0C0_00000A9C
lbl_fn_806EF0C0_00000AD0:
    cmpwi r19, 0x0
    beq lbl_fn_806EF0C0_00000B3C
    lbz r17, 0x18(r30)
    extsb. r17, r17
    bne lbl_fn_806EF0C0_00000AFC
    lis r4, lbl_807C50F8@ha
    mr r5, r18
    addi r3, r1, 0x10
    addi r4, r4, lbl_807C50F8@l
    crclr 6
    bl sprintf
lbl_fn_806EF0C0_00000AFC:
    cmpwi r17, 0x0
    addi r3, r1, 0x10
    beq lbl_fn_806EF0C0_00000B0C
    addi r3, r30, 0x18
lbl_fn_806EF0C0_00000B0C:
    addi r5, r28, 0xd4
    li r4, 0x6cfc
    li r6, 0x0
    bl fn_806EFB80
    cmpwi r3, 0x1
    mr r17, r3
    bne lbl_fn_806EF0C0_00000B40
    lwz r0, 0xd8(r28)
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_806A420C
    b lbl_fn_806EF0C0_00000B40
lbl_fn_806EF0C0_00000B3C:
    li r17, 0x1
lbl_fn_806EF0C0_00000B40:
    cmpwi r17, 0x0
    li r3, 0x3
    beq lbl_fn_806EF0C0_00000B50
    li r3, 0x0
lbl_fn_806EF0C0_00000B50:
    addi r11, r1, 0x90
    bl _restgpr_16
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_806EF340(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    lwz r26, 0x0(r5)
    mr r23, r3
    mr r24, r4
    mr r25, r5
    li r27, 0x0
    bl fn_806D8F10
    li r3, 0x2
    li r4, 0x2
    li r5, 0x11
    bl fn_806D7AE0
    cmpwi r3, -0x1
    mr r29, r3
    bne lbl_fn_806EF340_00000BBC
    li r3, 0x1
    b lbl_fn_806EF340_00000C78
lbl_fn_806EF340_00000BBC:
    addi r28, r26, 0x64
    lis r30, 0x7f00
    li r31, 0x0
    b lbl_fn_806EF340_00000C18
lbl_fn_806EF340_00000BCC:
    mr r3, r24
    mr r4, r26
    addi r5, r1, 0x10
    li r6, 0x0
    bl fn_806EFB80
    addi r3, r30, 0x1
    bl fn_806A426C
    lwz r0, 0x14(r1)
    cmplw r0, r3
    bne lbl_fn_806EF340_00000BF8
    stw r31, 0x14(r1)
lbl_fn_806EF340_00000BF8:
    mr r3, r29
    addi r4, r1, 0x10
    li r5, 0x8
    bl fn_806D7BB0
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_806EF340_00000C20
    addi r26, r26, 0x1
lbl_fn_806EF340_00000C18:
    cmpw r26, r28
    blt lbl_fn_806EF340_00000BCC
lbl_fn_806EF340_00000C20:
    cmpwi r27, 0x0
    beq lbl_fn_806EF340_00000C30
    li r3, 0x2
    b lbl_fn_806EF340_00000C78
lbl_fn_806EF340_00000C30:
    cmpwi r26, 0x0
    bne lbl_fn_806EF340_00000C6C
    li r0, 0x8
    stw r0, 0x8(r1)
    mr r3, r29
    addi r4, r1, 0x10
    addi r5, r1, 0x8
    bl fn_806D7E70
    cmpwi r3, 0x0
    beq lbl_fn_806EF340_00000C60
    li r3, 0x2
    b lbl_fn_806EF340_00000C78
lbl_fn_806EF340_00000C60:
    lhz r3, 0x12(r1)
    bl fn_806A4264
    clrlwi r26, r3, 16
lbl_fn_806EF340_00000C6C:
    stw r29, 0x0(r23)
    li r3, 0x0
    stw r26, 0x0(r25)
lbl_fn_806EF340_00000C78:
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806EF470(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_19
    stw r5, 0x20(r1)
    mr r19, r3
    lwz r25, 0x68(r1)
    mr r20, r6
    lwz r26, 0x6c(r1)
    mr r21, r7
    lwz r27, 0x70(r1)
    mr r22, r8
    lwz r28, 0x74(r1)
    mr r23, r9
    lwz r29, 0x78(r1)
    mr r24, r10
    lwz r30, 0x7c(r1)
    addi r3, r1, 0x24
    addi r5, r1, 0x20
    bl fn_806EF340
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_806EF470_00000D08
    bl fn_806D8F20
    mr r3, r31
    b lbl_fn_806EF470_00000D60
lbl_fn_806EF470_00000D08:
    stw r25, 0x8(r1)
    mr r3, r19
    mr r6, r20
    mr r7, r21
    stw r26, 0xc(r1)
    mr r8, r22
    mr r9, r23
    mr r10, r24
    stw r27, 0x10(r1)
    stw r28, 0x14(r1)
    stw r29, 0x18(r1)
    stw r30, 0x1c(r1)
    lwz r4, 0x24(r1)
    lwz r5, 0x20(r1)
    bl fn_806EF0C0
    cmpwi r19, 0x0
    bne lbl_fn_806EF470_00000D54
    lis r19, lbl_807C50F4@ha
    addi r19, r19, lbl_807C50F4@l
lbl_fn_806EF470_00000D54:
    lwz r4, 0x0(r19)
    li r0, 0x1
    stw r0, 0xcc(r4)
lbl_fn_806EF470_00000D60:
    addi r11, r1, 0x60
    bl _restgpr_19
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806EF550(void)
{
    nofralloc
    cmpwi r3, 0x0
    bne lbl_fn_806EF550_00000D8C
    lis r3, lbl_807C50F4@ha
    lwz r3, lbl_807C50F4@l(r3)
lbl_fn_806EF550_00000D8C:
    stw r4, 0xa0(r3)
    blr
}

asm void fn_806EF570(void)
{
    nofralloc
    cmpwi r3, 0x0
    bne lbl_fn_806EF570_00000DAC
    lis r3, lbl_807C50F4@ha
    lwz r3, lbl_807C50F4@l(r3)
lbl_fn_806EF570_00000DAC:
    stw r4, 0xa4(r3)
    blr
}

asm void fn_806EF590(void)
{
    nofralloc
    cmpwi r3, 0x0
    bne lbl_fn_806EF590_00000DCC
    lis r3, lbl_807C50F4@ha
    lwz r3, lbl_807C50F4@l(r3)
lbl_fn_806EF590_00000DCC:
    stw r4, 0xa8(r3)
    blr
}

asm void fn_806EF5B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_806EF5B0_00000E04
    lis r3, lbl_807C50F4@ha
    lwz r30, lbl_807C50F4@l(r3)
lbl_fn_806EF5B0_00000E04:
    lwz r0, 0xc4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806EF5B0_00000E18
    mr r3, r30
    bl fn_806EF790
lbl_fn_806EF5B0_00000E18:
    mr r3, r30
    bl fn_806EF6D0
    li r31, 0x0
    bl fn_806D8F30
    li r0, 0x28
    li r4, 0x0
    mtctr r0
lbl_fn_806EF5B0_00000E34:
    lwz r0, 0x120(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806EF5B0_00000E54
    lwz r0, 0x128(r30)
    subf r0, r0, r3
    cmplwi r0, 0xfa0
    ble lbl_fn_806EF5B0_00000E54
    stw r4, 0x120(r30)
lbl_fn_806EF5B0_00000E54:
    lwz r0, 0x130(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806EF5B0_00000E74
    lwz r0, 0x138(r30)
    subf r0, r0, r3
    cmplwi r0, 0xfa0
    ble lbl_fn_806EF5B0_00000E74
    stw r4, 0x130(r30)
lbl_fn_806EF5B0_00000E74:
    lwz r0, 0x140(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806EF5B0_00000E94
    lwz r0, 0x148(r30)
    subf r0, r0, r3
    cmplwi r0, 0xfa0
    ble lbl_fn_806EF5B0_00000E94
    stw r4, 0x140(r30)
lbl_fn_806EF5B0_00000E94:
    lwz r0, 0x150(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806EF5B0_00000EB4
    lwz r0, 0x158(r30)
    subf r0, r0, r3
    cmplwi r0, 0xfa0
    ble lbl_fn_806EF5B0_00000EB4
    stw r4, 0x150(r30)
lbl_fn_806EF5B0_00000EB4:
    lwz r0, 0x160(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806EF5B0_00000ED4
    lwz r0, 0x168(r30)
    subf r0, r0, r3
    cmplwi r0, 0xfa0
    ble lbl_fn_806EF5B0_00000ED4
    stw r4, 0x160(r30)
lbl_fn_806EF5B0_00000ED4:
    addi r30, r30, 0x50
    addi r31, r31, 0x4
    bdnz lbl_fn_806EF5B0_00000E34
    bl fn_806FCFE0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806EF6D0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x8
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r3
    stw r0, 0x8(r1)
    lwz r0, 0xcc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806EF6D0_00000F34
    b lbl_fn_806EF6D0_00000F9C
lbl_fn_806EF6D0_00000F34:
    lis r29, lbl_80862020@ha
    li r30, 0x0
    addi r31, r29, lbl_80862020@l
    b lbl_fn_806EF6D0_00000F8C
lbl_fn_806EF6D0_00000F44:
    lwz r3, 0x0(r28)
    addi r4, r29, lbl_80862020@l
    addi r7, r1, 0x10
    addi r8, r1, 0x8
    li r5, 0xff
    li r6, 0x0
    bl fn_806D7CF0
    cmpwi r3, -0x1
    mr r5, r3
    beq lbl_fn_806EF6D0_00000F84
    stbx r30, r31, r3
    mr r3, r28
    mr r4, r31
    addi r6, r1, 0x10
    bl fn_806F0EB0
    b lbl_fn_806EF6D0_00000F8C
lbl_fn_806EF6D0_00000F84:
    lwz r3, 0x0(r28)
    bl fn_806D7F20
lbl_fn_806EF6D0_00000F8C:
    lwz r3, 0x0(r28)
    bl fn_806D8650
    cmpwi r3, 0x0
    bne lbl_fn_806EF6D0_00000F44
lbl_fn_806EF6D0_00000F9C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806EF790(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_806D8F30
    lwz r0, 0x0(r31)
    cmpwi r0, -0x1
    beq lbl_fn_806EF790_000010BC
    lwz r4, 0xc0(r31)
    cmpwi r4, 0x0
    ble lbl_fn_806EF790_00001048
    lwz r0, 0xb4(r31)
    subf r0, r0, r3
    cmplwi r0, 0x2710
    ble lbl_fn_806EF790_00001048
    cmpwi r4, 0x4
    blt lbl_fn_806EF790_0000102C
    lwz r12, 0x9c(r31)
    lis r4, lbl_807C5118@ha
    li r0, 0x0
    stw r0, 0xc0(r31)
    addi r4, r4, lbl_807C5118@l
    lwz r5, 0x114(r31)
    li r3, 0x5
    mtctr r12
    bctrl
    b lbl_fn_806EF790_000010BC
lbl_fn_806EF790_0000102C:
    mr r3, r31
    li r4, 0x3
    bl fn_806F1630
    lwz r3, 0xc0(r31)
    addi r0, r3, 0x1
    stw r0, 0xc0(r31)
    b lbl_fn_806EF790_000010A0
lbl_fn_806EF790_00001048:
    lwz r0, 0xbc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806EF790_00001074
    lwz r0, 0xb4(r31)
    subf r0, r0, r3
    cmplwi r0, 0x2710
    ble lbl_fn_806EF790_00001074
    mr r3, r31
    li r4, 0x1
    bl fn_806F1630
    b lbl_fn_806EF790_000010A0
lbl_fn_806EF790_00001074:
    lwz r4, 0xb4(r31)
    subf r0, r4, r3
    cmplwi r0, 0xea60
    bgt lbl_fn_806EF790_00001094
    cmpwi r4, 0x0
    beq lbl_fn_806EF790_00001094
    cmplw r3, r4
    bge lbl_fn_806EF790_000010A0
lbl_fn_806EF790_00001094:
    mr r3, r31
    li r4, 0x0
    bl fn_806F1630
lbl_fn_806EF790_000010A0:
    bl fn_806D8F30
    lwz r0, 0xb8(r31)
    subf r0, r0, r3
    cmplwi r0, 0x4e20
    ble lbl_fn_806EF790_000010BC
    mr r3, r31
    bl fn_806F15B0
lbl_fn_806EF790_000010BC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806EF8B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bne lbl_fn_806EF8B0_00001100
    lis r3, lbl_807C50F4@ha
    lwz r31, lbl_807C50F4@l(r3)
lbl_fn_806EF8B0_00001100:
    lwz r0, 0xc4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806EF8B0_00001140
    bl fn_806D8F30
    lwz r0, 0xb4(r31)
    subf r0, r0, r3
    cmplwi r0, 0x2710
    bge lbl_fn_806EF8B0_0000112C
    li r0, 0x1
    stw r0, 0xbc(r31)
    b lbl_fn_806EF8B0_00001140
lbl_fn_806EF8B0_0000112C:
    mr r3, r31
    li r4, 0x1
    bl fn_806F1630
    li r0, 0x0
    stw r0, 0xbc(r31)
lbl_fn_806EF8B0_00001140:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806EF930(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bne lbl_fn_806EF930_00001180
    lis r3, lbl_807C50F4@ha
    lwz r31, lbl_807C50F4@l(r3)
lbl_fn_806EF930_00001180:
    lwz r0, 0xc4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806EF930_00001198
    mr r3, r31
    li r4, 0x2
    bl fn_806F1630
lbl_fn_806EF930_00001198:
    lwz r3, 0x0(r31)
    cmpwi r3, -0x1
    beq lbl_fn_806EF930_000011B4
    lwz r0, 0xcc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806EF930_000011B4
    bl fn_806D7B30
lbl_fn_806EF930_000011B4:
    li r0, -0x1
    stw r0, 0x0(r31)
    li r0, 0x0
    stw r0, 0xb4(r31)
    lwz r0, 0xcc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806EF930_000011D4
    bl fn_806D8F20
lbl_fn_806EF930_000011D4:
    lwz r0, 0xac(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806EF930_000011E4
    bl fn_806FBDB0
lbl_fn_806EF930_000011E4:
    lis r3, lbl_807C4358@ha
    addi r3, r3, lbl_807C4358@l
    cmplw r31, r3
    beq lbl_fn_806EF930_000011FC
    mr r3, r31
    bl fn_806D7AC0
lbl_fn_806EF930_000011FC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806EF9F0(void)
{
    nofralloc
    lwz r5, 0x100(r3)
    cmpwi r5, 0xfe
    blt lbl_fn_806EF9F0_00001230
    li r3, 0x0
    blr
lbl_fn_806EF9F0_00001230:
    subi r0, r4, 0x1
    cmplwi r0, 0xfd
    ble lbl_fn_806EF9F0_00001244
    li r3, 0x0
    blr
lbl_fn_806EF9F0_00001244:
    stbx r4, r3, r5
    addi r0, r5, 0x1
    stw r0, 0x100(r3)
    li r3, 0x1
    blr
}

asm void fn_806EFA30(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r6, lbl_807C5150@ha
    mr r5, r4
    stw r0, 0x34(r1)
    addi r4, r6, lbl_807C5150@l
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    addi r3, r1, 0x8
    crclr 6
    bl sprintf
    addi r3, r1, 0x8
    bl strlen
    lwz r0, 0x578(r30)
    addi r31, r3, 0x1
    subfic r3, r0, 0x578
    cmpw r31, r3
    ble lbl_fn_806EFA30_000012AC
    mr r31, r3
lbl_fn_806EFA30_000012AC:
    cmpwi r31, 0x0
    bgt lbl_fn_806EFA30_000012BC
    li r3, 0x0
    b lbl_fn_806EFA30_000012E8
lbl_fn_806EFA30_000012BC:
    mr r5, r31
    add r3, r30, r0
    addi r4, r1, 0x8
    bl memcpy
    lwz r4, 0x578(r30)
    li r0, 0x0
    li r3, 0x1
    add r4, r4, r31
    stw r4, 0x578(r30)
    add r4, r4, r30
    stb r0, -0x1(r4)
lbl_fn_806EFA30_000012E8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806EFAE0(void)
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
    mr r3, r30
    bl strlen
    lwz r0, 0x578(r29)
    addi r31, r3, 0x1
    subfic r3, r0, 0x578
    cmpw r31, r3
    ble lbl_fn_806EFAE0_0000134C
    mr r31, r3
lbl_fn_806EFAE0_0000134C:
    cmpwi r31, 0x0
    bgt lbl_fn_806EFAE0_0000135C
    li r3, 0x0
    b lbl_fn_806EFAE0_00001388
lbl_fn_806EFAE0_0000135C:
    mr r4, r30
    mr r5, r31
    add r3, r29, r0
    bl memcpy
    lwz r4, 0x578(r29)
    li r0, 0x0
    li r3, 0x1
    add r4, r4, r31
    stw r4, 0x578(r29)
    add r4, r4, r29
    stb r0, -0x1(r4)
lbl_fn_806EFAE0_00001388:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806EFB80(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r29, r5
    mr r27, r3
    mr r28, r4
    mr r30, r6
    mr r3, r29
    li r31, 0x0
    li r4, 0x0
    li r5, 0x8
    bl memset
    li r0, 0x2
    stb r0, 0x1(r29)
    clrlwi r3, r28, 16
    bl fn_806A4270
    cmpwi r27, 0x0
    sth r3, 0x2(r29)
    bne lbl_fn_806EFB80_0000140C
    li r0, 0x0
    stw r0, 0x4(r29)
    b lbl_fn_806EFB80_00001418
lbl_fn_806EFB80_0000140C:
    mr r3, r27
    bl fn_806D7EE0
    stw r3, 0x4(r29)
lbl_fn_806EFB80_00001418:
    lwz r3, 0x4(r29)
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_806EFB80_0000146C
    lis r4, lbl_807C5158@ha
    mr r3, r27
    addi r4, r4, lbl_807C5158@l
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_806EFB80_0000146C
    mr r3, r27
    bl fn_806D8060
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806EFB80_0000145C
    li r3, 0x0
    b lbl_fn_806EFB80_0000147C
lbl_fn_806EFB80_0000145C:
    lwz r3, 0xc(r3)
    lwz r3, 0x0(r3)
    lwz r0, 0x0(r3)
    stw r0, 0x4(r29)
lbl_fn_806EFB80_0000146C:
    cmpwi r30, 0x0
    beq lbl_fn_806EFB80_00001478
    stw r31, 0x0(r30)
lbl_fn_806EFB80_00001478:
    li r3, 0x1
lbl_fn_806EFB80_0000147C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806EFC70(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    li r8, 0x2
    stw r31, 0x1c(r1)
    li r31, 0x0
    b lbl_fn_806EFC70_0000161C
    nop
lbl_fn_806EFC70_000014B4:
    cmpw r31, r4
    bge lbl_fn_806EFC70_000014C8
    lbz r7, 0x0(r3)
    addi r3, r3, 0x1
    b lbl_fn_806EFC70_000014CC
lbl_fn_806EFC70_000014C8:
    li r7, 0x0
lbl_fn_806EFC70_000014CC:
    addi r31, r31, 0x1
    cmpw r31, r4
    bge lbl_fn_806EFC70_000014E4
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    b lbl_fn_806EFC70_000014E8
lbl_fn_806EFC70_000014E4:
    li r6, 0x0
lbl_fn_806EFC70_000014E8:
    addi r31, r31, 0x1
    cmpw r31, r4
    bge lbl_fn_806EFC70_00001500
    lbz r0, 0x0(r3)
    addi r3, r3, 0x1
    b lbl_fn_806EFC70_00001504
lbl_fn_806EFC70_00001500:
    li r0, 0x0
lbl_fn_806EFC70_00001504:
    clrlwi r9, r0, 26
    extrwi r10, r6, 4, 24
    extrwi r12, r7, 6, 24
    clrlslwi r11, r7, 30, 4
    add r7, r11, r10
    clrlslwi r6, r6, 28, 2
    extrwi r0, r0, 2, 24
    stb r12, 0x8(r1)
    add r0, r6, r0
    addi r10, r1, 0x8
    stb r7, 0x9(r1)
    li r11, 0x0
    stb r0, 0xa(r1)
    stb r9, 0xb(r1)
    mtctr r8
    addi r31, r31, 0x1
lbl_fn_806EFC70_00001544:
    lbz r7, 0x0(r10)
    cmplwi r7, 0x1a
    bge lbl_fn_806EFC70_0000155C
    addi r0, r7, 0x41
    clrlwi r0, r0, 24
    b lbl_fn_806EFC70_000015A4
lbl_fn_806EFC70_0000155C:
    cmplwi r7, 0x34
    bge lbl_fn_806EFC70_00001570
    addi r0, r7, 0x47
    clrlwi r0, r0, 24
    b lbl_fn_806EFC70_000015A4
lbl_fn_806EFC70_00001570:
    cmplwi r7, 0x3e
    bge lbl_fn_806EFC70_00001584
    subi r0, r7, 0x4
    clrlwi r0, r0, 24
    b lbl_fn_806EFC70_000015A4
lbl_fn_806EFC70_00001584:
    bne lbl_fn_806EFC70_00001590
    li r0, 0x2b
    b lbl_fn_806EFC70_000015A4
lbl_fn_806EFC70_00001590:
    subi r6, r7, 0x3f
    subfic r0, r7, 0x3f
    nor r0, r6, r0
    srawi r0, r0, 31
    andi. r0, r0, 0x2f
lbl_fn_806EFC70_000015A4:
    lbz r7, 0x1(r10)
    stb r0, 0x0(r5)
    cmplwi r7, 0x1a
    bge lbl_fn_806EFC70_000015C0
    addi r0, r7, 0x41
    clrlwi r0, r0, 24
    b lbl_fn_806EFC70_00001608
lbl_fn_806EFC70_000015C0:
    cmplwi r7, 0x34
    bge lbl_fn_806EFC70_000015D4
    addi r0, r7, 0x47
    clrlwi r0, r0, 24
    b lbl_fn_806EFC70_00001608
lbl_fn_806EFC70_000015D4:
    cmplwi r7, 0x3e
    bge lbl_fn_806EFC70_000015E8
    subi r0, r7, 0x4
    clrlwi r0, r0, 24
    b lbl_fn_806EFC70_00001608
lbl_fn_806EFC70_000015E8:
    bne lbl_fn_806EFC70_000015F4
    li r0, 0x2b
    b lbl_fn_806EFC70_00001608
lbl_fn_806EFC70_000015F4:
    subi r6, r7, 0x3f
    subfic r0, r7, 0x3f
    nor r0, r6, r0
    srawi r0, r0, 31
    andi. r0, r0, 0x2f
lbl_fn_806EFC70_00001608:
    stb r0, 0x1(r5)
    addi r5, r5, 0x2
    addi r10, r10, 0x2
    addi r11, r11, 0x1
    bdnz lbl_fn_806EFC70_00001544
lbl_fn_806EFC70_0000161C:
    cmpw r31, r4
    blt lbl_fn_806EFC70_000014B4
    li r0, 0x0
    stb r0, 0x0(r5)
    lwz r31, 0x1c(r1)
    addi r1, r1, 0x20
    blr
}

asm void fn_806EFE10(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x130
    bl _savegpr_22
    li r0, 0x10
    addi r23, r1, 0x8
    li r22, 0x0
    mtctr r0
lbl_fn_806EFE10_00001660:
    stb r22, 0x0(r23)
    addi r12, r22, 0x1
    addi r11, r22, 0x2
    addi r10, r22, 0x3
    stb r12, 0x1(r23)
    addi r9, r22, 0x4
    addi r8, r22, 0x5
    addi r7, r22, 0x6
    stb r11, 0x2(r23)
    addi r0, r22, 0x7
    addi r12, r22, 0x9
    addi r11, r22, 0xa
    stb r10, 0x3(r23)
    addi r10, r22, 0xb
    stb r9, 0x4(r23)
    addi r9, r22, 0xc
    addi r22, r22, 0x8
    stb r8, 0x5(r23)
    addi r8, r22, 0x5
    stb r7, 0x6(r23)
    addi r7, r22, 0x6
    stb r0, 0x7(r23)
    addi r0, r22, 0x7
    stb r22, 0x8(r23)
    addi r22, r22, 0x8
    stb r12, 0x9(r23)
    stb r11, 0xa(r23)
    stb r10, 0xb(r23)
    stb r9, 0xc(r23)
    stb r8, 0xd(r23)
    stb r7, 0xe(r23)
    stb r0, 0xf(r23)
    addi r23, r23, 0x10
    bdnz lbl_fn_806EFE10_00001660
    addi r7, r1, 0x8
    li r0, 0x20
    mr r8, r7
    li r27, 0x0
    mr r9, r7
    mr r10, r7
    mr r11, r7
    mr r12, r7
    mr r31, r7
    mr r30, r7
    mr r29, r7
    li r22, 0x0
    li r28, 0x0
    mtctr r0
lbl_fn_806EFE10_00001720:
    addi r24, r27, 0x1
    lbz r0, 0x0(r7)
    divw r23, r24, r4
    lbzx r26, r3, r27
    add r25, r22, r0
    add r26, r26, r25
    slwi r25, r26, 24
    srwi r26, r26, 31
    mullw r23, r23, r4
    subf r25, r26, r25
    rotlwi r25, r25, 8
    add r25, r25, r26
    subf r23, r23, r24
    clrlwi r22, r23, 24
    clrlwi r27, r25, 24
    addi r24, r22, 0x1
    lbzx r25, r8, r27
    divw r23, r24, r4
    stb r25, 0x0(r7)
    lbzx r26, r3, r22
    stbx r0, r8, r27
    lbz r0, 0x1(r7)
    add r25, r27, r0
    mullw r23, r23, r4
    add r26, r26, r25
    slwi r25, r26, 24
    srwi r27, r26, 31
    subf r23, r23, r24
    subf r25, r27, r25
    clrlwi r22, r23, 24
    addi r24, r22, 0x1
    rotlwi r25, r25, 8
    divw r23, r24, r4
    lbzx r26, r3, r22
    add r25, r25, r27
    clrlwi r22, r25, 24
    lbzx r25, r9, r22
    stb r25, 0x1(r7)
    mullw r23, r23, r4
    stbx r0, r9, r22
    lbz r0, 0x2(r7)
    add r25, r22, r0
    subf r23, r23, r24
    clrlwi r22, r23, 24
    add r25, r26, r25
    addi r24, r22, 0x1
    divw r23, r24, r4
    slwi r26, r25, 24
    srwi r27, r25, 31
    lbzx r25, r3, r22
    subf r26, r27, r26
    rotlwi r26, r26, 8
    add r26, r26, r27
    clrlwi r22, r26, 24
    lbzx r26, r10, r22
    mullw r23, r23, r4
    stb r26, 0x2(r7)
    stbx r0, r10, r22
    subf r0, r23, r24
    lbz r26, 0x3(r7)
    clrlwi r27, r0, 24
    add r0, r22, r26
    add r23, r25, r0
    slwi r0, r23, 24
    srwi r23, r23, 31
    subf r0, r23, r0
    rotlwi r0, r0, 8
    add r0, r0, r23
    clrlwi r22, r0, 24
    lbzx r0, r11, r22
    stb r0, 0x3(r7)
    stbx r26, r11, r22
    lbz r0, 0x4(r7)
    addi r24, r27, 0x1
    add r25, r22, r0
    divw r23, r24, r4
    lbzx r26, r3, r27
    addi r28, r28, 0x8
    add r26, r26, r25
    slwi r25, r26, 24
    srwi r26, r26, 31
    mullw r23, r23, r4
    subf r25, r26, r25
    rotlwi r25, r25, 8
    add r25, r25, r26
    subf r23, r23, r24
    clrlwi r22, r23, 24
    addi r24, r22, 0x1
    lbzx r26, r3, r22
    divw r23, r24, r4
    clrlwi r22, r25, 24
    lbzx r25, r12, r22
    stb r25, 0x4(r7)
    stbx r0, r12, r22
    lbz r0, 0x5(r7)
    mullw r23, r23, r4
    add r25, r22, r0
    add r25, r26, r25
    slwi r26, r25, 24
    subf r23, r23, r24
    srwi r27, r25, 31
    clrlwi r22, r23, 24
    addi r25, r22, 0x1
    subf r23, r27, r26
    divw r24, r25, r4
    lbzx r26, r3, r22
    rotlwi r23, r23, 8
    add r23, r23, r27
    clrlwi r22, r23, 24
    lbzx r23, r31, r22
    mullw r24, r24, r4
    stb r23, 0x5(r7)
    stbx r0, r31, r22
    lbz r0, 0x6(r7)
    subf r24, r24, r25
    clrlwi r24, r24, 24
    add r23, r22, r0
    add r23, r26, r23
    lbzx r25, r3, r24
    addi r26, r24, 0x1
    divw r27, r26, r4
    slwi r24, r23, 24
    srwi r23, r23, 31
    subf r24, r23, r24
    rotlwi r24, r24, 8
    add r23, r24, r23
    clrlwi r22, r23, 24
    lbzx r24, r30, r22
    mullw r27, r27, r4
    stb r24, 0x6(r7)
    stbx r0, r30, r22
    subf r0, r27, r26
    lbz r23, 0x7(r7)
    clrlwi r27, r0, 24
    add r0, r22, r23
    add r26, r25, r0
    slwi r0, r26, 24
    srwi r26, r26, 31
    subf r0, r26, r0
    rotlwi r0, r0, 8
    add r0, r0, r26
    clrlwi r22, r0, 24
    lbzx r0, r29, r22
    stb r0, 0x7(r7)
    addi r7, r7, 0x8
    stbx r23, r29, r22
    bdnz lbl_fn_806EFE10_00001720
    addi r4, r1, 0x8
    li r11, 0x0
    li r12, 0x0
    li r7, 0x0
    b lbl_fn_806EFE10_00001A04
lbl_fn_806EFE10_00001980:
    extsh r3, r7
    addi r7, r7, 0x1
    lbzx r0, r5, r3
    add r8, r11, r0
    addi r9, r8, 0x1
    slwi r8, r9, 24
    srwi r9, r9, 31
    subf r8, r9, r8
    rotlwi r8, r8, 8
    add r8, r8, r9
    clrlwi r11, r8, 24
    lbzx r10, r4, r11
    add r9, r10, r12
    slwi r8, r9, 24
    srwi r9, r9, 31
    subf r8, r9, r8
    rotlwi r8, r8, 8
    add r8, r8, r9
    clrlwi r12, r8, 24
    lbzx r8, r4, r12
    stbx r8, r4, r11
    stbx r10, r4, r12
    lbzx r8, r4, r11
    add r9, r8, r10
    slwi r8, r9, 24
    srwi r9, r9, 31
    subf r8, r9, r8
    rotlwi r8, r8, 8
    add r8, r8, r9
    clrlwi r8, r8, 24
    lbzx r8, r4, r8
    xor r0, r0, r8
    stbx r0, r5, r3
lbl_fn_806EFE10_00001A04:
    extsh r0, r7
    cmpw r0, r6
    blt lbl_fn_806EFE10_00001980
    addi r11, r1, 0x130
    bl _restgpr_22
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_806F0200(void)
{
    nofralloc
    blr
}

asm void fn_806F0210(void)
{
    nofralloc
    lwz r12, 0xac(r6)
    cmpwi r12, 0x0
    beqlr
    cmpwi r3, 0x0
    bnelr
    mr r3, r4
    mr r4, r5
    lwz r5, 0x114(r6)
    mtctr r12
    bctr
    blr
}

asm void fn_806F0240(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r11, r1, 0x150
    bl _savegpr_19
    cmpwi r6, 0x0
    li r0, 0x0
    stw r0, 0x10c(r1)
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r31, r6
    mr r30, r7
    beq lbl_fn_806F0240_00001D74
    subi r0, r5, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_806F0240_00001B08
    lwz r0, 0x578(r4)
    subfic r0, r0, 0x578
    cmpwi r0, 0x2
    blt lbl_fn_806F0240_00001D74
    lwz r12, 0x98(r25)
    mr r3, r27
    lwz r4, 0x114(r25)
    mtctr r12
    bctrl
    mr r29, r3
    clrlwi r3, r3, 16
    bl fn_806A4270
    sth r3, 0x8(r1)
    addi r4, r1, 0x8
    li r5, 0x2
    lwz r0, 0x578(r26)
    add r3, r26, r0
    bl memcpy
    lwz r3, 0x578(r26)
    addi r0, r3, 0x2
    stw r0, 0x578(r26)
    b lbl_fn_806F0240_00001B0C
lbl_fn_806F0240_00001B08:
    li r29, 0x1
lbl_fn_806F0240_00001B0C:
    cmpwi r31, 0xff
    bne lbl_fn_806F0240_00001C70
    lwz r12, 0x94(r25)
    mr r3, r27
    addi r4, r1, 0xc
    lwz r5, 0x114(r25)
    mtctr r12
    bctrl
    lis r22, lbl_807C5380@ha
    lis r31, lbl_807C5170@ha
    addi r30, r1, 0xc
    li r28, 0x0
    addi r22, r22, lbl_807C5380@l
    addi r31, r31, lbl_807C5170@l
    lis r24, lbl_807C5168@ha
    li r23, 0x0
    b lbl_fn_806F0240_00001C34
lbl_fn_806F0240_00001B50:
    lbz r0, 0x0(r30)
    slwi r0, r0, 2
    lwzx r19, r22, r0
    cmpwi r19, 0x0
    bne lbl_fn_806F0240_00001B68
    addi r19, r24, lbl_807C5168@l
lbl_fn_806F0240_00001B68:
    mr r3, r19
    bl strlen
    lwz r0, 0x578(r26)
    addi r21, r3, 0x1
    subfic r3, r0, 0x578
    cmpw r21, r3
    ble lbl_fn_806F0240_00001B88
    mr r21, r3
lbl_fn_806F0240_00001B88:
    cmpwi r21, 0x0
    ble lbl_fn_806F0240_00001BB4
    mr r4, r19
    mr r5, r21
    add r3, r26, r0
    bl memcpy
    lwz r0, 0x578(r26)
    add r0, r0, r21
    stw r0, 0x578(r26)
    add r3, r26, r0
    stb r23, -0x1(r3)
lbl_fn_806F0240_00001BB4:
    cmpwi r27, 0x0
    bne lbl_fn_806F0240_00001C2C
    lwz r12, 0x88(r25)
    mr r4, r26
    lwz r19, 0x578(r26)
    lbz r3, 0x0(r30)
    lwz r5, 0x114(r25)
    mtctr r12
    bctrl
    lwz r20, 0x578(r26)
    cmpw r19, r20
    bne lbl_fn_806F0240_00001C2C
    mr r3, r31
    bl strlen
    addi r21, r3, 0x1
    subfic r0, r20, 0x578
    cmpw r21, r0
    ble lbl_fn_806F0240_00001C00
    mr r21, r0
lbl_fn_806F0240_00001C00:
    cmpwi r21, 0x0
    ble lbl_fn_806F0240_00001C2C
    mr r4, r31
    mr r5, r21
    add r3, r26, r20
    bl memcpy
    lwz r0, 0x578(r26)
    add r0, r0, r21
    stw r0, 0x578(r26)
    add r3, r26, r0
    stb r23, -0x1(r3)
lbl_fn_806F0240_00001C2C:
    addi r30, r30, 0x1
    addi r28, r28, 0x1
lbl_fn_806F0240_00001C34:
    lwz r0, 0x10c(r1)
    cmpw r28, r0
    blt lbl_fn_806F0240_00001B50
    lwz r3, 0x578(r26)
    subfic r0, r3, 0x578
    cmpwi r0, 0x1
    blt lbl_fn_806F0240_00001D74
    li r0, 0x0
    stbx r0, r26, r3
    addi r0, r3, 0x1
    cmpwi r27, 0x0
    stw r0, 0x578(r26)
    addi r30, r1, 0xc
    lwz r31, 0x10c(r1)
    beq lbl_fn_806F0240_00001D74
lbl_fn_806F0240_00001C70:
    lis r21, lbl_807C5170@ha
    li r28, 0x0
    addi r21, r21, lbl_807C5170@l
    li r23, 0x0
    b lbl_fn_806F0240_00001D6C
lbl_fn_806F0240_00001C84:
    mr r24, r30
    li r19, 0x0
    b lbl_fn_806F0240_00001D60
lbl_fn_806F0240_00001C90:
    cmpwi r27, 0x0
    lwz r22, 0x578(r26)
    bne lbl_fn_806F0240_00001CB8
    lwz r12, 0x88(r25)
    mr r4, r26
    lbz r3, 0x0(r24)
    lwz r5, 0x114(r25)
    mtctr r12
    bctrl
    b lbl_fn_806F0240_00001D04
lbl_fn_806F0240_00001CB8:
    cmpwi r27, 0x1
    bne lbl_fn_806F0240_00001CE0
    lwz r12, 0x8c(r25)
    mr r4, r28
    mr r5, r26
    lbz r3, 0x0(r24)
    lwz r6, 0x114(r25)
    mtctr r12
    bctrl
    b lbl_fn_806F0240_00001D04
lbl_fn_806F0240_00001CE0:
    cmpwi r27, 0x2
    bne lbl_fn_806F0240_00001D04
    lwz r12, 0x90(r25)
    mr r4, r28
    mr r5, r26
    lbz r3, 0x0(r24)
    lwz r6, 0x114(r25)
    mtctr r12
    bctrl
lbl_fn_806F0240_00001D04:
    lwz r20, 0x578(r26)
    cmpw r22, r20
    bne lbl_fn_806F0240_00001D58
    mr r3, r21
    bl strlen
    addi r22, r3, 0x1
    subfic r0, r20, 0x578
    cmpw r22, r0
    ble lbl_fn_806F0240_00001D2C
    mr r22, r0
lbl_fn_806F0240_00001D2C:
    cmpwi r22, 0x0
    ble lbl_fn_806F0240_00001D58
    mr r4, r21
    mr r5, r22
    add r3, r26, r20
    bl memcpy
    lwz r0, 0x578(r26)
    add r0, r0, r22
    stw r0, 0x578(r26)
    add r3, r26, r0
    stb r23, -0x1(r3)
lbl_fn_806F0240_00001D58:
    addi r19, r19, 0x1
    addi r24, r24, 0x1
lbl_fn_806F0240_00001D60:
    cmpw r19, r31
    blt lbl_fn_806F0240_00001C90
    addi r28, r28, 0x1
lbl_fn_806F0240_00001D6C:
    cmpw r28, r29
    blt lbl_fn_806F0240_00001C84
lbl_fn_806F0240_00001D74:
    addi r11, r1, 0x150
    bl _restgpr_19
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_806F0560(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lwz r0, 0x0(r5)
    mr r25, r3
    mr r26, r4
    mr r27, r5
    cmpwi r0, 0x3
    blt lbl_fn_806F0560_00001DC0
    li r3, 0x0
    b lbl_fn_806F0560_000020BC
lbl_fn_806F0560_00001DC0:
    lwz r24, 0x578(r4)
    subfic r30, r24, 0x578
    cmpwi r30, 0x20
    bge lbl_fn_806F0560_00001DD8
    li r3, 0x0
    b lbl_fn_806F0560_000020BC
lbl_fn_806F0560_00001DD8:
    lis r28, lbl_807C5174@ha
    addi r28, r28, lbl_807C5174@l
    mr r3, r28
    bl strlen
    addi r29, r3, 0x1
    cmpw r29, r30
    ble lbl_fn_806F0560_00001DF8
    mr r29, r30
lbl_fn_806F0560_00001DF8:
    cmpwi r29, 0x0
    ble lbl_fn_806F0560_00001E28
    mr r4, r28
    mr r5, r29
    add r3, r26, r24
    bl memcpy
    lwz r3, 0x578(r26)
    li r0, 0x0
    add r3, r3, r29
    stw r3, 0x578(r26)
    add r3, r3, r26
    stb r0, -0x1(r3)
lbl_fn_806F0560_00001E28:
    lwz r29, 0x578(r26)
    lis r30, lbl_807C5380@ha
    addi r30, r30, lbl_807C5380@l
    li r31, 0x0
    addi r0, r29, 0x1
    stw r0, 0x578(r26)
    lwz r3, 0x4(r27)
    stbx r3, r26, r29
    addi r0, r3, 0x1
    stw r0, 0x4(r27)
    b lbl_fn_806F0560_000020A0
lbl_fn_806F0560_00001E54:
    lwz r0, 0x114(r27)
    cmpwi r0, 0x0
    bne lbl_fn_806F0560_00001E78
    lwz r12, 0x94(r25)
    addi r4, r27, 0x14
    lwz r3, 0x0(r27)
    lwz r5, 0x114(r25)
    mtctr r12
    bctrl
lbl_fn_806F0560_00001E78:
    lwz r0, 0xc(r27)
    cmpwi r0, 0x0
    bne lbl_fn_806F0560_00001EA4
    lwz r3, 0x0(r27)
    cmpwi r3, 0x0
    beq lbl_fn_806F0560_00001EA4
    lwz r12, 0x98(r25)
    lwz r4, 0x114(r25)
    mtctr r12
    bctrl
    stw r3, 0xc(r27)
lbl_fn_806F0560_00001EA4:
    lwz r4, 0x578(r26)
    subfic r0, r4, 0x578
    cmpwi r0, 0x64
    bge lbl_fn_806F0560_00001EBC
    li r3, 0x1
    b lbl_fn_806F0560_000020BC
lbl_fn_806F0560_00001EBC:
    lwz r3, 0x0(r27)
    addi r0, r4, 0x1
    stbx r3, r26, r4
    stw r0, 0x578(r26)
    b lbl_fn_806F0560_00002058
lbl_fn_806F0560_00001ED0:
    add r3, r27, r3
    lbz r28, 0x14(r3)
    slwi r0, r28, 2
    lwzx r23, r30, r0
    mr r3, r23
    bl strlen
    lwz r0, 0x578(r26)
    addi r24, r3, 0x1
    subfic r3, r0, 0x578
    cmpw r24, r3
    ble lbl_fn_806F0560_00001F00
    mr r24, r3
lbl_fn_806F0560_00001F00:
    cmpwi r24, 0x0
    bgt lbl_fn_806F0560_00001F10
    li r4, 0x0
    b lbl_fn_806F0560_00001F38
lbl_fn_806F0560_00001F10:
    mr r4, r23
    mr r5, r24
    add r3, r26, r0
    bl memcpy
    lwz r0, 0x578(r26)
    li r4, 0x1
    add r0, r0, r24
    stw r0, 0x578(r26)
    add r3, r26, r0
    stb r31, -0x1(r3)
lbl_fn_806F0560_00001F38:
    cmpwi r4, 0x0
    bne lbl_fn_806F0560_00001F48
    li r3, 0x1
    b lbl_fn_806F0560_000020BC
lbl_fn_806F0560_00001F48:
    lwz r0, 0x0(r27)
    cmpwi r0, 0x0
    bne lbl_fn_806F0560_00001F84
    lwz r12, 0x88(r25)
    mr r3, r28
    mr r4, r26
    lwz r5, 0x114(r25)
    mtctr r12
    bctrl
    lwz r0, 0x578(r26)
    subfic r0, r0, 0x578
    cmpwi r0, 0x1
    bge lbl_fn_806F0560_00002048
    li r3, 0x1
    b lbl_fn_806F0560_000020BC
lbl_fn_806F0560_00001F84:
    lwz r4, 0x578(r26)
    subfic r0, r4, 0x578
    cmpwi r0, 0x1
    bge lbl_fn_806F0560_00001F9C
    li r3, 0x1
    b lbl_fn_806F0560_000020BC
lbl_fn_806F0560_00001F9C:
    lwz r3, 0x10(r27)
    addi r0, r4, 0x1
    stbx r3, r26, r4
    stw r0, 0x578(r26)
    b lbl_fn_806F0560_0000201C
lbl_fn_806F0560_00001FB0:
    lwz r0, 0x0(r27)
    cmpwi r0, 0x1
    bne lbl_fn_806F0560_00001FD8
    lwz r12, 0x8c(r25)
    mr r3, r28
    mr r5, r26
    lwz r6, 0x114(r25)
    mtctr r12
    bctrl
    b lbl_fn_806F0560_00001FF8
lbl_fn_806F0560_00001FD8:
    cmpwi r0, 0x2
    bne lbl_fn_806F0560_00001FF8
    lwz r12, 0x90(r25)
    mr r3, r28
    mr r5, r26
    lwz r6, 0x114(r25)
    mtctr r12
    bctrl
lbl_fn_806F0560_00001FF8:
    lwz r0, 0x578(r26)
    subfic r0, r0, 0x578
    cmpwi r0, 0x1
    bge lbl_fn_806F0560_00002010
    li r3, 0x1
    b lbl_fn_806F0560_000020BC
lbl_fn_806F0560_00002010:
    lwz r3, 0x10(r27)
    addi r0, r3, 0x1
    stw r0, 0x10(r27)
lbl_fn_806F0560_0000201C:
    lwz r4, 0x10(r27)
    lwz r0, 0xc(r27)
    cmpw r4, r0
    blt lbl_fn_806F0560_00001FB0
    lwz r3, 0x578(r26)
    subfic r0, r3, 0x578
    cmpwi r0, 0x0
    ble lbl_fn_806F0560_00002048
    stbx r31, r26, r3
    addi r0, r3, 0x1
    stw r0, 0x578(r26)
lbl_fn_806F0560_00002048:
    lwz r3, 0x8(r27)
    stw r31, 0x10(r27)
    addi r0, r3, 0x1
    stw r0, 0x8(r27)
lbl_fn_806F0560_00002058:
    lwz r3, 0x8(r27)
    lwz r0, 0x114(r27)
    cmpw r3, r0
    blt lbl_fn_806F0560_00001ED0
    lwz r3, 0x578(r26)
    subfic r0, r3, 0x578
    cmpwi r0, 0x0
    ble lbl_fn_806F0560_00002084
    stbx r31, r26, r3
    addi r0, r3, 0x1
    stw r0, 0x578(r26)
lbl_fn_806F0560_00002084:
    lwz r3, 0x0(r27)
    stw r31, 0x8(r27)
    addi r0, r3, 0x1
    stw r0, 0x0(r27)
    stw r31, 0xc(r27)
    stw r31, 0x10(r27)
    stw r31, 0x114(r27)
lbl_fn_806F0560_000020A0:
    lwz r0, 0x0(r27)
    cmpwi r0, 0x3
    blt lbl_fn_806F0560_00001E54
    lbzx r0, r26, r29
    li r3, 0x1
    ori r0, r0, 0x80
    stbx r0, r26, r29
lbl_fn_806F0560_000020BC:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
