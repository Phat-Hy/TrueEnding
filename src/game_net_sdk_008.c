#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSPanic(const char* file, int line, const char* msg, ...);
extern void _restgpr_20(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _savegpr_20(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void fn_805EBFD0(void);
extern void fn_806A12E8(void);
extern void fn_806A6600(void);
extern void fn_806A66D0(void);
extern void fn_806A6740(void);
extern void fn_806A7370(void);
extern void fn_806A7400(void);
extern void fn_806A76B0(void);
extern void fn_806EA840(void);
extern void fn_806EA850(void);
extern void fn_806EA8F0(void);
extern void fn_806EA900(void);
extern void fn_806EA910(void);
extern void fn_806EAAD0(void);
extern void fn_806EABE0(void);
extern void fn_806EAC00(void);
extern void fn_806EAC90(void);
extern void fn_806EEDC0(void);
extern void fn_806EF930(void);
extern void fn_806FFA10(void);

/* External data declarations */
extern u8 jumptable_807BD1F0[];
extern u8 lbl_807BD140[];
extern u8 lbl_807BD164[];
extern u8 lbl_807BD174[];
extern u8 lbl_807BD184[];
extern u8 lbl_807BD19C[];
extern u8 lbl_807BD1B0[];
extern u8 lbl_807BD1C0[];
extern u8 lbl_807BD230[];
extern u8 lbl_807BD254[];
extern u8 lbl_807BD27C[];
extern u8 lbl_8085FF40[];
extern u8 lbl_8085FF44[];
extern u8 lbl_8085FF50[];
extern u8 lbl_8085FF58[];

/* Small data declarations */

/* Function declarations */
void pad_03_806A8D84_text(void);
void fn_806A8D90(void);
void fn_806A8DB0(void);
void fn_806A8E40(void);
void fn_806A8E70(void);
void fn_806A8E80(void);
void fn_806A8F20(void);
void fn_806A8F40(void);
void fn_806A8FA0(void);
void fn_806A8FB0(void);
void fn_806A8FC0(void);
void fn_806A8FD0(void);
void fn_806A8FE0(void);
void fn_806A8FF0(void);
void fn_806A9000(void);
void fn_806A9170(void);
void fn_806A9290(void);
void fn_806A93FC(void);
void fn_806A9400(void);
void fn_806A9420(void);
void fn_806A97B0(void);
void fn_806A9CA0(void);
void fn_806AA690(void);
void fn_806AA7C0(void);
void fn_806AA7D0(void);
void fn_806AA7E0(void);

asm void pad_03_806A8D84_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
    opword 0x00000000
}

asm void fn_806A8D90(void)
{
    nofralloc
    lis r6, lbl_8085FF40@ha
    lwz r5, lbl_8085FF40@l(r6)
    stw r3, 0x178(r5)
    li r3, 0x1
    lwz r5, lbl_8085FF40@l(r6)
    stw r4, 0x1fc(r5)
    blr
}

asm void fn_806A8DB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lis r30, lbl_8085FF40@ha
    addi r30, r30, lbl_8085FF40@l
    bl fn_806EF930
    lwz r3, 0x8(r30)
    lwz r3, 0x0(r3)
    bl fn_806FFA10
    li r31, 0x0
    stw r31, 0x8(r30)
    lwz r3, 0x4(r30)
    lwz r3, 0x0(r3)
    bl fn_806EAC00
    lwz r3, 0x4(r30)
    lwz r3, 0x0(r3)
    bl fn_806EA850
    lwz r4, 0x0(r30)
    stw r31, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_806A8DB0_0000009C
    li r3, 0x5
    li r5, 0x0
    bl fn_806A7400
    stw r31, 0x0(r30)
lbl_fn_806A8DB0_0000009C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A8E40(void)
{
    nofralloc
    lis r3, lbl_8085FF40@ha
    lwz r3, lbl_8085FF40@l(r3)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x8
    blt lbl_fn_806A8E40_000000DC
    lwz r3, 0x174(r3)
    cmpwi r3, 0x0
    bgelr
lbl_fn_806A8E40_000000DC:
    li r3, -0x1
    blr
}

asm void fn_806A8E70(void)
{
    nofralloc
    lis r3, lbl_8085FF44@ha
    lwz r3, lbl_8085FF44@l(r3)
    lwz r3, 0xd4(r3)
    blr
}

asm void fn_806A8E80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, lbl_8085FF44@ha
    stw r0, 0x14(r1)
    slwi r0, r3, 2
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r7, lbl_8085FF44@l(r7)
    add r3, r7, r0
    lwz r0, 0x94(r3)
    cmpwi r0, -0x1
    bne lbl_fn_806A8E80_0000013C
    li r3, 0x0
    b lbl_fn_806A8E80_00000148
lbl_fn_806A8E80_0000013C:
    slwi r0, r0, 3
    add r3, r7, r0
    addi r3, r3, 0x14
lbl_fn_806A8E80_00000148:
    lwz r3, 0x0(r3)
    mr r5, r31
    bl fn_806EAAD0
    lis r3, lbl_8085FF40@ha
    lwz r3, lbl_8085FF40@l(r3)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x8
    bne lbl_fn_806A8E80_0000017C
    lwz r12, 0x204(r3)
    mr r3, r31
    mr r4, r30
    mtctr r12
    bctrl
lbl_fn_806A8E80_0000017C:
    lwz r31, 0xc(r1)
    li r3, 0x1
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A8F20(void)
{
    nofralloc
    lis r3, lbl_807BD164@ha
    lis r5, lbl_807BD174@ha
    addi r3, r3, lbl_807BD164@l
    li r4, 0x1d7
    addi r5, r5, lbl_807BD174@l
    crclr 6
    b OSPanic
}

asm void fn_806A8F40(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lis r4, lbl_807BD184@ha
    mr r5, r31
    addi r4, r4, lbl_807BD184@l
    crclr 6
    bl fn_806A76B0
    cmpwi r31, 0x4
    bne lbl_fn_806A8F40_00000200
    lis r3, lbl_8085FF40@ha
    li r0, 0x1
    lwz r3, lbl_8085FF40@l(r3)
    stw r0, 0xc(r3)
lbl_fn_806A8F40_00000200:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A8FA0(void)
{
    nofralloc
    blr
}

asm void fn_806A8FB0(void)
{
    nofralloc
    blr
}

asm void fn_806A8FC0(void)
{
    nofralloc
    blr
}

asm void fn_806A8FD0(void)
{
    nofralloc
    blr
}

asm void fn_806A8FE0(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_806A8FF0(void)
{
    nofralloc
    blr
}

asm void fn_806A9000(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8085FF40@ha
    stw r0, 0x14(r1)
    li r0, 0x1
    stw r31, 0xc(r1)
    lis r31, lbl_8085FF44@ha
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, lbl_8085FF40@l(r4)
    li r4, -0x1
    addi r3, r5, 0x54
    stw r3, lbl_8085FF44@l(r31)
    li r5, 0x40
    stw r0, 0xd4(r3)
    lwz r3, lbl_8085FF44@l(r31)
    addi r3, r3, 0x94
    bl memset
    lwz r3, lbl_8085FF44@l(r31)
    li r0, -0x1
    li r4, 0x0
    li r5, 0x10
    stw r0, 0x18(r3)
    lwz r3, lbl_8085FF44@l(r31)
    stw r0, 0x20(r3)
    lwz r3, lbl_8085FF44@l(r31)
    stw r0, 0x28(r3)
    lwz r3, lbl_8085FF44@l(r31)
    stw r0, 0x30(r3)
    lwz r3, lbl_8085FF44@l(r31)
    stw r0, 0x38(r3)
    lwz r3, lbl_8085FF44@l(r31)
    stw r0, 0x40(r3)
    lwz r3, lbl_8085FF44@l(r31)
    stw r0, 0x48(r3)
    lwz r3, lbl_8085FF44@l(r31)
    stw r0, 0x50(r3)
    lwz r3, lbl_8085FF44@l(r31)
    stw r0, 0x58(r3)
    lwz r3, lbl_8085FF44@l(r31)
    stw r0, 0x60(r3)
    lwz r3, lbl_8085FF44@l(r31)
    stw r0, 0x68(r3)
    lwz r3, lbl_8085FF44@l(r31)
    stw r0, 0x70(r3)
    lwz r3, lbl_8085FF44@l(r31)
    stw r0, 0x78(r3)
    lwz r3, lbl_8085FF44@l(r31)
    stw r0, 0x80(r3)
    lwz r3, lbl_8085FF44@l(r31)
    stw r0, 0x88(r3)
    lwz r3, lbl_8085FF44@l(r31)
    stw r0, 0x90(r3)
    lwz r3, lbl_8085FF44@l(r31)
    addi r3, r3, 0x4
    bl memset
    lwz r3, lbl_8085FF44@l(r31)
    lis r4, fn_806A9170@ha
    addi r4, r4, fn_806A9170@l
    lis r8, fn_806A9290@ha
    stw r4, 0x4(r3)
    lis r7, fn_806A9400@ha
    addi r8, r8, fn_806A9290@l
    mr r3, r30
    lwz r6, lbl_8085FF44@l(r31)
    addi r7, r7, fn_806A9400@l
    li r4, 0x3039
    li r5, 0x0
    stw r8, 0x8(r6)
    lwz r6, lbl_8085FF44@l(r31)
    stw r7, 0xc(r6)
    bl fn_806EEDC0
    mr r4, r3
    lis r7, fn_806A8F20@ha
    lwz r3, lbl_8085FF44@l(r31)
    addi r7, r7, fn_806A8F20@l
    li r5, 0x0
    li r6, 0x0
    bl fn_806EA840
    lwz r3, lbl_8085FF44@l(r31)
    lis r4, fn_806A9420@ha
    addi r4, r4, fn_806A9420@l
    lwz r3, 0x0(r3)
    bl fn_806EA8F0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A9170(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_806A9170_00000424
    lis r3, lbl_8085FF40@ha
    li r0, 0x3
    lwz r3, lbl_8085FF40@l(r3)
    stw r0, 0x0(r3)
    b lbl_fn_806A9170_000004B8
lbl_fn_806A9170_00000424:
    lis r4, lbl_8085FF40@ha
    li r6, 0x1
    lwz r5, lbl_8085FF40@l(r4)
    lis r4, lbl_8085FF44@ha
    li r0, 0x10
    li r7, 0x0
    stw r6, 0x0(r5)
    lwz r5, lbl_8085FF44@l(r4)
    mr r4, r5
    mtctr r0
lbl_fn_806A9170_0000044C:
    lwz r0, 0x14(r4)
    cmplw r3, r0
    bne lbl_fn_806A9170_00000468
    slwi r0, r7, 3
    add r3, r5, r0
    lwz r0, 0x18(r3)
    b lbl_fn_806A9170_00000478
lbl_fn_806A9170_00000468:
    addi r4, r4, 0x8
    addi r7, r7, 0x1
    bdnz lbl_fn_806A9170_0000044C
    li r0, -0x1
lbl_fn_806A9170_00000478:
    slwi r0, r0, 2
    add r3, r5, r0
    lwz r0, 0x94(r3)
    cmpwi r0, -0x1
    beq lbl_fn_806A9170_000004B8
    li r5, -0x1
    stw r5, 0x94(r3)
    lis r4, lbl_8085FF44@ha
    slwi r6, r0, 3
    lwz r0, lbl_8085FF44@l(r4)
    add r3, r0, r6
    stw r5, 0x18(r3)
    lwz r0, lbl_8085FF44@l(r4)
    add r3, r0, r6
    lwz r3, 0x14(r3)
    bl fn_806EABE0
lbl_fn_806A9170_000004B8:
    mr r3, r30
    bl fn_806EAC90
    li r4, 0x0
    li r5, 0x0
    bl fn_806EEDC0
    lis r4, lbl_807BD19C@ha
    mr r5, r3
    mr r6, r31
    li r3, 0x1
    addi r4, r4, lbl_807BD19C@l
    crclr 6
    bl fn_806A76B0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A9290(void)
{
    nofralloc
    lis r7, lbl_8085FF40@ha
    li r9, 0x0
    lwz r8, lbl_8085FF40@l(r7)
    lwz r0, 0x0(r8)
    cmpwi r0, 0x8
    beq lbl_fn_806A9290_00000540
    cmpwi r0, 0x3
    beq lbl_fn_806A9290_00000594
    cmpwi r0, 0x4
    beq lbl_fn_806A9290_000005F4
    cmpwi r0, 0x7
    beq lbl_fn_806A9290_0000065C
    blr
lbl_fn_806A9290_00000540:
    lis r6, lbl_8085FF44@ha
    li r0, 0x10
    lwz r9, lbl_8085FF44@l(r6)
    li r6, 0x0
    mr r7, r9
    mtctr r0
    nop
lbl_fn_806A9290_0000055C:
    lwz r0, 0x14(r7)
    cmplw r3, r0
    bne lbl_fn_806A9290_00000578
    slwi r0, r6, 3
    add r3, r9, r0
    lwz r3, 0x18(r3)
    b lbl_fn_806A9290_00000588
lbl_fn_806A9290_00000578:
    addi r7, r7, 0x8
    addi r6, r6, 0x1
    bdnz lbl_fn_806A9290_0000055C
    li r3, -0x1
lbl_fn_806A9290_00000588:
    lwz r12, 0x200(r8)
    mtctr r12
    bctr
lbl_fn_806A9290_00000594:
    li r8, 0x0
    lis r6, lbl_8085FF44@ha
    b lbl_fn_806A9290_000005E4
    nop
lbl_fn_806A9290_000005A4:
    lwz r0, lbl_8085FF40@l(r7)
    add r3, r0, r8
    stw r5, 0x17c(r3)
    lwz r3, lbl_8085FF40@l(r7)
    lwz r0, 0x170(r3)
    cmplw r5, r0
    bne lbl_fn_806A9290_000005C8
    stw r9, 0x174(r3)
    b lbl_fn_806A9290_000005D8
lbl_fn_806A9290_000005C8:
    lwz r5, lbl_8085FF44@l(r6)
    lwz r3, 0xd4(r5)
    addi r0, r3, 0x1
    stw r0, 0xd4(r5)
lbl_fn_806A9290_000005D8:
    addi r8, r8, 0x8
    addi r4, r4, 0x4
    addi r9, r9, 0x1
lbl_fn_806A9290_000005E4:
    lwz r5, 0x4(r4)
    cmpwi r5, 0x0
    bne lbl_fn_806A9290_000005A4
    blr
lbl_fn_806A9290_000005F4:
    lis r4, lbl_8085FF44@ha
    li r0, 0x10
    lwz r6, lbl_8085FF44@l(r4)
    li r4, 0x0
    mr r5, r6
    mtctr r0
lbl_fn_806A9290_0000060C:
    lwz r0, 0x14(r5)
    cmplw r3, r0
    bne lbl_fn_806A9290_00000628
    slwi r0, r4, 3
    add r3, r6, r0
    lwz r5, 0x18(r3)
    b lbl_fn_806A9290_00000638
lbl_fn_806A9290_00000628:
    addi r5, r5, 0x8
    addi r4, r4, 0x1
    bdnz lbl_fn_806A9290_0000060C
    li r5, -0x1
lbl_fn_806A9290_00000638:
    slwi r0, r5, 3
    lis r4, lbl_807BD1B0@ha
    add r3, r8, r0
    li r0, 0x1
    stw r0, 0x180(r3)
    addi r4, r4, lbl_807BD1B0@l
    li r3, 0x1
    crclr 6
    b fn_806A76B0
lbl_fn_806A9290_0000065C:
    li r0, 0x8
    stw r0, 0x0(r8)
    li r3, 0x0
    lwz r4, lbl_8085FF40@l(r7)
    lwz r12, 0x1fc(r4)
    mtctr r12
    bctr
}

asm void fn_806A93FC(void)
{
    nofralloc
    blr
}

asm void fn_806A9400(void)
{
    nofralloc
    lis r3, lbl_807BD1C0@ha
    mr r5, r4
    addi r4, r3, lbl_807BD1C0@l
    li r3, 0x1
    crclr 6
    b fn_806A76B0
}

asm void fn_806A9420(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r3, lbl_8085FF40@ha
    lis r29, lbl_807BD140@ha
    lwz r3, lbl_8085FF40@l(r3)
    mr r25, r5
    mr r31, r4
    mr r26, r6
    lwz r5, 0x0(r3)
    addi r29, r29, lbl_807BD140@l
    li r28, 0x0
    subi r0, r5, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_806A9420_000008F4
    cmpwi r5, 0x1
    beq lbl_fn_806A9420_000006FC
    cmpwi r5, 0x2
    beq lbl_fn_806A9420_00000704
    cmpwi r5, 0x3
    beq lbl_fn_806A9420_000008F4
    b lbl_fn_806A9420_000009B4
lbl_fn_806A9420_000006FC:
    li r0, 0x2
    stw r0, 0x0(r3)
lbl_fn_806A9420_00000704:
    lis r5, lbl_8085FF44@ha
    lis r3, lbl_8085FF40@ha
    lwz r7, lbl_8085FF44@l(r5)
    lwz r3, lbl_8085FF40@l(r3)
    lwz r6, 0xd4(r7)
    lwz r0, 0x178(r3)
    cmpw r6, r0
    bge lbl_fn_806A9420_000009C4
    addi r0, r6, 0x1
    stw r0, 0xd4(r7)
    li r7, 0x0
    lwz r8, lbl_8085FF44@l(r5)
    mr r3, r8
    b lbl_fn_806A9420_00000744
lbl_fn_806A9420_0000073C:
    addi r3, r3, 0x8
    addi r7, r7, 0x1
lbl_fn_806A9420_00000744:
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806A9420_00000758
    cmpwi r7, 0x10
    blt lbl_fn_806A9420_0000073C
lbl_fn_806A9420_00000758:
    cmpwi r7, 0x10
    bge lbl_fn_806A9420_00000790
    slwi r0, r6, 2
    lis r5, lbl_8085FF44@ha
    add r3, r8, r0
    slwi r8, r7, 3
    stw r7, 0x94(r3)
    lwz r0, lbl_8085FF44@l(r5)
    add r3, r0, r8
    stw r6, 0x18(r3)
    lwz r0, lbl_8085FF44@l(r5)
    add r3, r0, r8
    addi r3, r3, 0x14
    b lbl_fn_806A9420_00000794
lbl_fn_806A9420_00000790:
    li r3, 0x0
lbl_fn_806A9420_00000794:
    stw r4, 0x0(r3)
    lis r30, lbl_8085FF44@ha
    mr r3, r31
    lwz r4, lbl_8085FF44@l(r30)
    addi r4, r4, 0x4
    bl fn_806EA900
    lis r31, lbl_8085FF40@ha
    lwz r3, lbl_8085FF44@l(r30)
    lwz r4, lbl_8085FF40@l(r31)
    li r28, 0x1
    lwz r3, 0xd4(r3)
    lwz r0, 0x178(r4)
    cmpw r3, r0
    bne lbl_fn_806A9420_000009C4
    li r0, 0x4
    stw r0, 0x0(r4)
    li r0, 0x0
    li r4, 0x0
    lwz r3, lbl_8085FF40@l(r31)
    li r5, 0x40
    stw r0, 0x174(r3)
    lwz r3, lbl_8085FF40@l(r31)
    stw r0, 0x12c(r3)
    lwz r3, lbl_8085FF40@l(r31)
    addi r3, r3, 0x130
    bl memset
    lwz r3, lbl_8085FF40@l(r31)
    li r27, 0x1
    li r24, 0x4
    lwz r0, 0x170(r3)
    stw r0, 0x130(r3)
    b lbl_fn_806A9420_00000854
lbl_fn_806A9420_00000814:
    add r3, r4, r24
    lwz r0, 0x94(r3)
    cmpwi r0, -0x1
    bne lbl_fn_806A9420_0000082C
    li r3, 0x0
    b lbl_fn_806A9420_00000838
lbl_fn_806A9420_0000082C:
    slwi r0, r0, 3
    add r3, r4, r0
    addi r3, r3, 0x14
lbl_fn_806A9420_00000838:
    lwz r3, 0x0(r3)
    bl fn_806EAC90
    lwz r0, lbl_8085FF40@l(r31)
    addi r27, r27, 0x1
    add r4, r0, r24
    addi r24, r24, 0x4
    stw r3, 0x130(r4)
lbl_fn_806A9420_00000854:
    lwz r4, lbl_8085FF44@l(r30)
    lwz r0, 0xd4(r4)
    cmpw r27, r0
    blt lbl_fn_806A9420_00000814
    li r30, 0x1
    li r24, 0x4
    lis r31, lbl_8085FF40@ha
    lis r27, lbl_8085FF44@ha
    b lbl_fn_806A9420_000008E0
lbl_fn_806A9420_00000878:
    add r4, r5, r24
    lwz r3, lbl_8085FF40@l(r31)
    lwz r0, 0x94(r4)
    addi r4, r3, 0x12c
    cmpwi r0, -0x1
    bne lbl_fn_806A9420_00000898
    li r3, 0x0
    b lbl_fn_806A9420_000008A4
lbl_fn_806A9420_00000898:
    slwi r0, r0, 3
    add r3, r5, r0
    addi r3, r3, 0x14
lbl_fn_806A9420_000008A4:
    lwz r3, 0x0(r3)
    li r5, 0x44
    li r6, 0x1
    bl fn_806EAAD0
    lwz r3, lbl_8085FF40@l(r31)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x8
    bne lbl_fn_806A9420_000008D8
    lwz r12, 0x204(r3)
    mr r4, r30
    li r3, 0x44
    mtctr r12
    bctrl
lbl_fn_806A9420_000008D8:
    addi r24, r24, 0x4
    addi r30, r30, 0x1
lbl_fn_806A9420_000008E0:
    lwz r5, lbl_8085FF44@l(r27)
    lwz r0, 0xd4(r5)
    cmpw r30, r0
    blt lbl_fn_806A9420_00000878
    b lbl_fn_806A9420_000009C4
lbl_fn_806A9420_000008F4:
    mr r3, r31
    li r27, 0x0
    bl fn_806EAC90
    lis r4, lbl_8085FF40@ha
    lwz r4, lbl_8085FF40@l(r4)
    b lbl_fn_806A9420_0000091C
lbl_fn_806A9420_0000090C:
    cmplw r3, r0
    beq lbl_fn_806A9420_00000928
    addi r4, r4, 0x8
    addi r27, r27, 0x1
lbl_fn_806A9420_0000091C:
    lwz r0, 0x17c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806A9420_0000090C
lbl_fn_806A9420_00000928:
    lis r3, lbl_8085FF44@ha
    li r5, 0x0
    lwz r6, lbl_8085FF44@l(r3)
    mr r3, r6
    b lbl_fn_806A9420_00000944
lbl_fn_806A9420_0000093C:
    addi r3, r3, 0x8
    addi r5, r5, 0x1
lbl_fn_806A9420_00000944:
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806A9420_00000958
    cmpwi r5, 0x10
    blt lbl_fn_806A9420_0000093C
lbl_fn_806A9420_00000958:
    cmpwi r5, 0x10
    bge lbl_fn_806A9420_00000990
    slwi r0, r27, 2
    lis r4, lbl_8085FF44@ha
    add r3, r6, r0
    slwi r6, r5, 3
    stw r5, 0x94(r3)
    lwz r0, lbl_8085FF44@l(r4)
    add r3, r0, r6
    stw r27, 0x18(r3)
    lwz r0, lbl_8085FF44@l(r4)
    add r3, r0, r6
    addi r3, r3, 0x14
    b lbl_fn_806A9420_00000994
lbl_fn_806A9420_00000990:
    li r3, 0x0
lbl_fn_806A9420_00000994:
    stw r31, 0x0(r3)
    lis r4, lbl_8085FF44@ha
    mr r3, r31
    lwz r4, lbl_8085FF44@l(r4)
    addi r4, r4, 0x4
    bl fn_806EA900
    li r28, 0x1
    b lbl_fn_806A9420_000009C4
lbl_fn_806A9420_000009B4:
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_806EA910
lbl_fn_806A9420_000009C4:
    cmpwi r28, 0x0
    addi r27, r29, 0x98
    beq lbl_fn_806A9420_000009D4
    addi r27, r29, 0x90
lbl_fn_806A9420_000009D4:
    mr r3, r25
    mr r4, r26
    li r5, 0x0
    bl fn_806EEDC0
    lis r4, lbl_8085FF40@ha
    mr r6, r3
    lwz r7, lbl_8085FF40@l(r4)
    mr r5, r27
    addi r4, r29, 0xa0
    li r3, 0x1
    lwz r7, 0x0(r7)
    crclr 6
    bl fn_806A76B0
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806A97B0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmpw r4, r5
    mr r25, r3
    mr r26, r5
    bge lbl_fn_806A97B0_00000EF8
    add r7, r4, r5
    slwi r0, r4, 2
    srwi r6, r7, 31
    addi r11, r4, 0x1
    add r7, r6, r7
    lwzx r10, r3, r0
    extlwi r9, r7, 30, 1
    addi r6, r5, 0x1
    lwzx r7, r3, r9
    slwi r8, r11, 2
    stwx r7, r3, r0
    subf r6, r11, r6
    mr r27, r4
    mr r7, r0
    stwx r10, r3, r9
    add r8, r3, r8
    mtctr r6
    cmpw r11, r5
    bgt lbl_fn_806A97B0_00000AC8
lbl_fn_806A97B0_00000A9C:
    lwz r6, 0x0(r8)
    lwzx r5, r3, r0
    cmplw r6, r5
    bge lbl_fn_806A97B0_00000AC0
    addi r7, r7, 0x4
    addi r27, r27, 0x1
    lwzx r5, r3, r7
    stw r5, 0x0(r8)
    stwx r6, r3, r7
lbl_fn_806A97B0_00000AC0:
    addi r8, r8, 0x4
    bdnz lbl_fn_806A97B0_00000A9C
lbl_fn_806A97B0_00000AC8:
    slwi r28, r27, 2
    lwzx r6, r3, r0
    lwzx r5, r3, r28
    subi r9, r27, 0x1
    stwx r5, r3, r0
    cmpw r4, r9
    stwx r6, r3, r28
    bge lbl_fn_806A97B0_00000CE8
    add r5, r4, r27
    addi r10, r4, 0x1
    subi r8, r5, 0x1
    lwzx r11, r3, r0
    srwi r7, r8, 31
    addi r5, r9, 0x1
    add r7, r7, r8
    slwi r6, r10, 2
    extlwi r8, r7, 30, 1
    subf r5, r10, r5
    lwzx r7, r3, r8
    mr r31, r4
    stwx r7, r3, r0
    add r7, r3, r6
    slwi r6, r4, 2
    stwx r11, r3, r8
    mtctr r5
    cmpw r10, r9
    bgt lbl_fn_806A97B0_00000B60
lbl_fn_806A97B0_00000B34:
    lwz r8, 0x0(r7)
    lwzx r5, r3, r0
    cmplw r8, r5
    bge lbl_fn_806A97B0_00000B58
    addi r6, r6, 0x4
    addi r31, r31, 0x1
    lwzx r5, r3, r6
    stw r5, 0x0(r7)
    stwx r8, r3, r6
lbl_fn_806A97B0_00000B58:
    addi r7, r7, 0x4
    bdnz lbl_fn_806A97B0_00000B34
lbl_fn_806A97B0_00000B60:
    slwi r29, r31, 2
    lwzx r6, r3, r0
    lwzx r5, r3, r29
    subi r9, r31, 0x1
    stwx r5, r3, r0
    cmpw r4, r9
    stwx r6, r3, r29
    bge lbl_fn_806A97B0_00000C28
    add r5, r4, r31
    addi r10, r4, 0x1
    subi r8, r5, 0x1
    lwzx r11, r3, r0
    srwi r7, r8, 31
    addi r5, r9, 0x1
    add r7, r7, r8
    slwi r6, r10, 2
    extlwi r8, r7, 30, 1
    subf r5, r10, r5
    lwzx r7, r3, r8
    mr r30, r4
    stwx r7, r3, r0
    add r7, r3, r6
    slwi r6, r4, 2
    stwx r11, r3, r8
    mtctr r5
    cmpw r10, r9
    bgt lbl_fn_806A97B0_00000BF8
lbl_fn_806A97B0_00000BCC:
    lwz r8, 0x0(r7)
    lwzx r5, r3, r0
    cmplw r8, r5
    bge lbl_fn_806A97B0_00000BF0
    addi r6, r6, 0x4
    addi r30, r30, 0x1
    lwzx r5, r3, r6
    stw r5, 0x0(r7)
    stwx r8, r3, r6
lbl_fn_806A97B0_00000BF0:
    addi r7, r7, 0x4
    bdnz lbl_fn_806A97B0_00000BCC
lbl_fn_806A97B0_00000BF8:
    slwi r6, r30, 2
    lwzx r7, r3, r0
    lwzx r5, r3, r6
    stwx r5, r3, r0
    subi r5, r30, 0x1
    stwx r7, r3, r6
    mr r3, r25
    bl fn_806A97B0
    mr r3, r25
    addi r4, r30, 0x1
    subi r5, r31, 0x1
    bl fn_806A97B0
lbl_fn_806A97B0_00000C28:
    addi r30, r31, 0x1
    subi r7, r27, 0x1
    cmpw r30, r7
    bge lbl_fn_806A97B0_00000CE8
    add r3, r27, r31
    add r6, r25, r29
    srwi r0, r3, 31
    lwz r9, 0x4(r6)
    add r3, r0, r3
    addi r8, r31, 0x2
    extlwi r5, r3, 30, 1
    addi r0, r7, 0x1
    lwzx r4, r25, r5
    slwi r3, r8, 2
    stw r4, 0x4(r6)
    add r4, r25, r3
    subf r0, r8, r0
    slwi r3, r30, 2
    stwx r9, r25, r5
    mtctr r0
    cmpw r8, r7
    bgt lbl_fn_806A97B0_00000CB0
    nop
lbl_fn_806A97B0_00000C84:
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r6)
    cmplw r5, r0
    bge lbl_fn_806A97B0_00000CA8
    addi r3, r3, 0x4
    addi r30, r30, 0x1
    lwzx r0, r25, r3
    stw r0, 0x0(r4)
    stwx r5, r25, r3
lbl_fn_806A97B0_00000CA8:
    addi r4, r4, 0x4
    bdnz lbl_fn_806A97B0_00000C84
lbl_fn_806A97B0_00000CB0:
    add r5, r25, r29
    slwi r6, r30, 2
    lwz r7, 0x4(r5)
    mr r3, r25
    lwzx r0, r25, r6
    addi r4, r31, 0x1
    stw r0, 0x4(r5)
    subi r5, r30, 0x1
    stwx r7, r25, r6
    bl fn_806A97B0
    mr r3, r25
    addi r4, r30, 0x1
    subi r5, r27, 0x1
    bl fn_806A97B0
lbl_fn_806A97B0_00000CE8:
    addi r31, r27, 0x1
    cmpw r31, r26
    bge lbl_fn_806A97B0_00000EF8
    add r3, r27, r26
    add r6, r25, r28
    addi r4, r3, 0x1
    lwz r8, 0x4(r6)
    srwi r3, r4, 31
    addi r7, r27, 0x2
    add r4, r3, r4
    addi r0, r26, 0x1
    extlwi r5, r4, 30, 1
    slwi r3, r7, 2
    lwzx r4, r25, r5
    subf r0, r7, r0
    stw r4, 0x4(r6)
    add r4, r25, r3
    slwi r3, r31, 2
    stwx r8, r25, r5
    mtctr r0
    cmpw r7, r26
    bgt lbl_fn_806A97B0_00000D70
    nop
lbl_fn_806A97B0_00000D44:
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r6)
    cmplw r5, r0
    bge lbl_fn_806A97B0_00000D68
    addi r3, r3, 0x4
    addi r31, r31, 0x1
    lwzx r0, r25, r3
    stw r0, 0x0(r4)
    stwx r5, r25, r3
lbl_fn_806A97B0_00000D68:
    addi r4, r4, 0x4
    bdnz lbl_fn_806A97B0_00000D44
lbl_fn_806A97B0_00000D70:
    add r7, r25, r28
    slwi r28, r31, 2
    lwz r3, 0x4(r7)
    addi r30, r27, 0x1
    lwzx r0, r25, r28
    subi r6, r31, 0x1
    stw r0, 0x4(r7)
    cmpw r30, r6
    stwx r3, r25, r28
    bge lbl_fn_806A97B0_00000E3C
    add r4, r31, r27
    lwz r9, 0x4(r7)
    srwi r3, r4, 31
    addi r8, r27, 0x2
    add r4, r3, r4
    addi r0, r6, 0x1
    extlwi r5, r4, 30, 1
    slwi r3, r8, 2
    lwzx r4, r25, r5
    subf r0, r8, r0
    stw r4, 0x4(r7)
    add r4, r25, r3
    slwi r3, r30, 2
    stwx r9, r25, r5
    mtctr r0
    cmpw r8, r6
    bgt lbl_fn_806A97B0_00000E08
lbl_fn_806A97B0_00000DDC:
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r7)
    cmplw r5, r0
    bge lbl_fn_806A97B0_00000E00
    addi r3, r3, 0x4
    addi r30, r30, 0x1
    lwzx r0, r25, r3
    stw r0, 0x0(r4)
    stwx r5, r25, r3
lbl_fn_806A97B0_00000E00:
    addi r4, r4, 0x4
    bdnz lbl_fn_806A97B0_00000DDC
lbl_fn_806A97B0_00000E08:
    slwi r6, r30, 2
    lwz r8, 0x4(r7)
    lwzx r0, r25, r6
    mr r3, r25
    stw r0, 0x4(r7)
    addi r4, r27, 0x1
    subi r5, r30, 0x1
    stwx r8, r25, r6
    bl fn_806A97B0
    mr r3, r25
    addi r4, r30, 0x1
    subi r5, r31, 0x1
    bl fn_806A97B0
lbl_fn_806A97B0_00000E3C:
    addi r30, r31, 0x1
    cmpw r30, r26
    bge lbl_fn_806A97B0_00000EF8
    add r3, r31, r26
    add r6, r25, r28
    addi r4, r3, 0x1
    lwz r8, 0x4(r6)
    srwi r3, r4, 31
    addi r7, r31, 0x2
    add r4, r3, r4
    addi r0, r26, 0x1
    extlwi r5, r4, 30, 1
    slwi r3, r7, 2
    lwzx r4, r25, r5
    subf r0, r7, r0
    stw r4, 0x4(r6)
    add r4, r25, r3
    slwi r3, r30, 2
    stwx r8, r25, r5
    mtctr r0
    cmpw r7, r26
    bgt lbl_fn_806A97B0_00000EC0
lbl_fn_806A97B0_00000E94:
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r6)
    cmplw r5, r0
    bge lbl_fn_806A97B0_00000EB8
    addi r3, r3, 0x4
    addi r30, r30, 0x1
    lwzx r0, r25, r3
    stw r0, 0x0(r4)
    stwx r5, r25, r3
lbl_fn_806A97B0_00000EB8:
    addi r4, r4, 0x4
    bdnz lbl_fn_806A97B0_00000E94
lbl_fn_806A97B0_00000EC0:
    add r5, r25, r28
    slwi r6, r30, 2
    lwz r7, 0x4(r5)
    mr r3, r25
    lwzx r0, r25, r6
    addi r4, r31, 0x1
    stw r0, 0x4(r5)
    subi r5, r30, 0x1
    stwx r7, r25, r6
    bl fn_806A97B0
    mr r3, r25
    mr r5, r26
    addi r4, r30, 0x1
    bl fn_806A97B0
lbl_fn_806A97B0_00000EF8:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806A9CA0(void)
{
    nofralloc
    cmplwi r5, 0x20
    mr r7, r3
    ble lbl_fn_806A9CA0_00001088
    xor r6, r3, r4
    clrlwi. r0, r6, 31
    clrlwi r6, r6, 28
    bne lbl_fn_806A9CA0_000010B8
    rlwinm. r0, r6, 0, 30, 30
    beq lbl_fn_806A9CA0_00000F68
    clrlwi r0, r3, 31
    subfic r0, r0, 0x2
    cmpwi r0, 0x0
    beq lbl_fn_806A9CA0_000010BC
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
    subi r5, r5, 0x1
    b lbl_fn_806A9CA0_000010BC
lbl_fn_806A9CA0_00000F68:
    rlwinm. r0, r6, 0, 29, 29
    beq lbl_fn_806A9CA0_00000FCC
    clrlwi r0, r3, 30
    subfic r6, r0, 0x4
    cmpwi r6, 0x3
    beq lbl_fn_806A9CA0_00000F94
    cmpwi r6, 0x2
    beq lbl_fn_806A9CA0_00000FA4
    cmpwi r6, 0x1
    beq lbl_fn_806A9CA0_00000FB4
    b lbl_fn_806A9CA0_000013A8
lbl_fn_806A9CA0_00000F94:
    lbz r0, 0x0(r4)
    addi r7, r3, 0x1
    stb r0, 0x0(r3)
    addi r4, r4, 0x1
lbl_fn_806A9CA0_00000FA4:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    stb r0, 0x0(r7)
    addi r7, r7, 0x1
lbl_fn_806A9CA0_00000FB4:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    stb r0, 0x0(r7)
    addi r3, r7, 0x1
    subf r5, r6, r5
    b lbl_fn_806A9CA0_000013A8
lbl_fn_806A9CA0_00000FCC:
    clrlwi r0, r3, 29
    subfic r6, r0, 0x8
    cmpwi r6, 0x7
    beq lbl_fn_806A9CA0_00001010
    cmpwi r6, 0x6
    beq lbl_fn_806A9CA0_00001020
    cmpwi r6, 0x5
    beq lbl_fn_806A9CA0_00001030
    cmpwi r6, 0x4
    beq lbl_fn_806A9CA0_00001040
    cmpwi r6, 0x3
    beq lbl_fn_806A9CA0_00001050
    cmpwi r6, 0x2
    beq lbl_fn_806A9CA0_00001060
    cmpwi r6, 0x1
    beq lbl_fn_806A9CA0_00001070
    b lbl_fn_806A9CA0_000015A8
lbl_fn_806A9CA0_00001010:
    lbz r0, 0x0(r4)
    addi r7, r3, 0x1
    stb r0, 0x0(r3)
    addi r4, r4, 0x1
lbl_fn_806A9CA0_00001020:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    stb r0, 0x0(r7)
    addi r7, r7, 0x1
lbl_fn_806A9CA0_00001030:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    stb r0, 0x0(r7)
    addi r7, r7, 0x1
lbl_fn_806A9CA0_00001040:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    stb r0, 0x0(r7)
    addi r7, r7, 0x1
lbl_fn_806A9CA0_00001050:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    stb r0, 0x0(r7)
    addi r7, r7, 0x1
lbl_fn_806A9CA0_00001060:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    stb r0, 0x0(r7)
    addi r7, r7, 0x1
lbl_fn_806A9CA0_00001070:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    stb r0, 0x0(r7)
    addi r3, r7, 0x1
    subf r5, r6, r5
    b lbl_fn_806A9CA0_000015A8
lbl_fn_806A9CA0_00001088:
    clrlwi. r0, r3, 29
    bne lbl_fn_806A9CA0_00001098
    clrlwi. r0, r4, 29
    beq lbl_fn_806A9CA0_000015A8
lbl_fn_806A9CA0_00001098:
    clrlwi. r0, r3, 30
    bne lbl_fn_806A9CA0_000010A8
    clrlwi. r0, r4, 30
    beq lbl_fn_806A9CA0_000013A8
lbl_fn_806A9CA0_000010A8:
    clrlwi. r0, r3, 31
    bne lbl_fn_806A9CA0_000010B8
    clrlwi. r0, r4, 31
    beq lbl_fn_806A9CA0_000010BC
lbl_fn_806A9CA0_000010B8:
    b memcpy
lbl_fn_806A9CA0_000010BC:
    srwi. r6, r5, 1
    beq lbl_fn_806A9CA0_00001390
    srawi. r7, r6, 4
    ble lbl_fn_806A9CA0_0000127C
    srwi. r0, r7, 1
    mtctr r0
    beq lbl_fn_806A9CA0_000011EC
lbl_fn_806A9CA0_000010D8:
    lhz r0, 0x0(r4)
    sth r0, 0x0(r3)
    lhz r0, 0x2(r4)
    sth r0, 0x2(r3)
    lhz r0, 0x4(r4)
    sth r0, 0x4(r3)
    lhz r0, 0x6(r4)
    sth r0, 0x6(r3)
    lhz r0, 0x8(r4)
    sth r0, 0x8(r3)
    lhz r0, 0xa(r4)
    sth r0, 0xa(r3)
    lhz r0, 0xc(r4)
    sth r0, 0xc(r3)
    lhz r0, 0xe(r4)
    sth r0, 0xe(r3)
    lhz r0, 0x10(r4)
    sth r0, 0x10(r3)
    lhz r0, 0x12(r4)
    sth r0, 0x12(r3)
    lhz r0, 0x14(r4)
    sth r0, 0x14(r3)
    lhz r0, 0x16(r4)
    sth r0, 0x16(r3)
    lhz r0, 0x18(r4)
    sth r0, 0x18(r3)
    lhz r0, 0x1a(r4)
    sth r0, 0x1a(r3)
    lhz r0, 0x1c(r4)
    sth r0, 0x1c(r3)
    lhz r0, 0x1e(r4)
    sth r0, 0x1e(r3)
    lhz r0, 0x20(r4)
    sth r0, 0x20(r3)
    lhz r0, 0x22(r4)
    sth r0, 0x22(r3)
    lhz r0, 0x24(r4)
    sth r0, 0x24(r3)
    lhz r0, 0x26(r4)
    sth r0, 0x26(r3)
    lhz r0, 0x28(r4)
    sth r0, 0x28(r3)
    lhz r0, 0x2a(r4)
    sth r0, 0x2a(r3)
    lhz r0, 0x2c(r4)
    sth r0, 0x2c(r3)
    lhz r0, 0x2e(r4)
    sth r0, 0x2e(r3)
    lhz r0, 0x30(r4)
    sth r0, 0x30(r3)
    lhz r0, 0x32(r4)
    sth r0, 0x32(r3)
    lhz r0, 0x34(r4)
    sth r0, 0x34(r3)
    lhz r0, 0x36(r4)
    sth r0, 0x36(r3)
    lhz r0, 0x38(r4)
    sth r0, 0x38(r3)
    lhz r0, 0x3a(r4)
    sth r0, 0x3a(r3)
    lhz r0, 0x3c(r4)
    sth r0, 0x3c(r3)
    lhz r0, 0x3e(r4)
    addi r4, r4, 0x40
    sth r0, 0x3e(r3)
    addi r3, r3, 0x40
    bdnz lbl_fn_806A9CA0_000010D8
    andi. r7, r7, 0x1
    beq lbl_fn_806A9CA0_0000127C
lbl_fn_806A9CA0_000011EC:
    mtctr r7
lbl_fn_806A9CA0_000011F0:
    lhz r0, 0x0(r4)
    sth r0, 0x0(r3)
    lhz r0, 0x2(r4)
    sth r0, 0x2(r3)
    lhz r0, 0x4(r4)
    sth r0, 0x4(r3)
    lhz r0, 0x6(r4)
    sth r0, 0x6(r3)
    lhz r0, 0x8(r4)
    sth r0, 0x8(r3)
    lhz r0, 0xa(r4)
    sth r0, 0xa(r3)
    lhz r0, 0xc(r4)
    sth r0, 0xc(r3)
    lhz r0, 0xe(r4)
    sth r0, 0xe(r3)
    lhz r0, 0x10(r4)
    sth r0, 0x10(r3)
    lhz r0, 0x12(r4)
    sth r0, 0x12(r3)
    lhz r0, 0x14(r4)
    sth r0, 0x14(r3)
    lhz r0, 0x16(r4)
    sth r0, 0x16(r3)
    lhz r0, 0x18(r4)
    sth r0, 0x18(r3)
    lhz r0, 0x1a(r4)
    sth r0, 0x1a(r3)
    lhz r0, 0x1c(r4)
    sth r0, 0x1c(r3)
    lhz r0, 0x1e(r4)
    addi r4, r4, 0x20
    sth r0, 0x1e(r3)
    addi r3, r3, 0x20
    bdnz lbl_fn_806A9CA0_000011F0
lbl_fn_806A9CA0_0000127C:
    clrlwi r0, r6, 28
    cmplwi r0, 0xf
    bgt lbl_fn_806A9CA0_00001390
    lis r6, jumptable_807BD1F0@ha
    slwi r0, r0, 2
    addi r6, r6, jumptable_807BD1F0@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    lhz r0, 0x0(r4)
    addi r4, r4, 0x2
    sth r0, 0x0(r3)
    addi r3, r3, 0x2
    lhz r0, 0x0(r4)
    addi r4, r4, 0x2
    sth r0, 0x0(r3)
    addi r3, r3, 0x2
    lhz r0, 0x0(r4)
    addi r4, r4, 0x2
    sth r0, 0x0(r3)
    addi r3, r3, 0x2
    lhz r0, 0x0(r4)
    addi r4, r4, 0x2
    sth r0, 0x0(r3)
    addi r3, r3, 0x2
    lhz r0, 0x0(r4)
    addi r4, r4, 0x2
    sth r0, 0x0(r3)
    addi r3, r3, 0x2
    lhz r0, 0x0(r4)
    addi r4, r4, 0x2
    sth r0, 0x0(r3)
    addi r3, r3, 0x2
    lhz r0, 0x0(r4)
    addi r4, r4, 0x2
    sth r0, 0x0(r3)
    addi r3, r3, 0x2
    lhz r0, 0x0(r4)
    addi r4, r4, 0x2
    sth r0, 0x0(r3)
    addi r3, r3, 0x2
    lhz r0, 0x0(r4)
    addi r4, r4, 0x2
    sth r0, 0x0(r3)
    addi r3, r3, 0x2
    lhz r0, 0x0(r4)
    addi r4, r4, 0x2
    sth r0, 0x0(r3)
    addi r3, r3, 0x2
    lhz r0, 0x0(r4)
    addi r4, r4, 0x2
    sth r0, 0x0(r3)
    addi r3, r3, 0x2
    lhz r0, 0x0(r4)
    addi r4, r4, 0x2
    sth r0, 0x0(r3)
    addi r3, r3, 0x2
    lhz r0, 0x0(r4)
    addi r4, r4, 0x2
    sth r0, 0x0(r3)
    addi r3, r3, 0x2
    lhz r0, 0x0(r4)
    addi r4, r4, 0x2
    sth r0, 0x0(r3)
    addi r3, r3, 0x2
    lhz r0, 0x0(r4)
    addi r4, r4, 0x2
    sth r0, 0x0(r3)
    addi r3, r3, 0x2
lbl_fn_806A9CA0_00001390:
    clrlwi r0, r5, 31
    cmpwi r0, 0x1
    bnelr
    lbz r0, 0x0(r4)
    stb r0, 0x0(r3)
    blr
lbl_fn_806A9CA0_000013A8:
    srwi. r6, r5, 2
    beq lbl_fn_806A9CA0_00001558
    srawi. r7, r6, 3
    ble lbl_fn_806A9CA0_000014A8
    srwi. r0, r7, 1
    mtctr r0
    beq lbl_fn_806A9CA0_00001458
lbl_fn_806A9CA0_000013C4:
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r3)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r3)
    lwz r0, 0x10(r4)
    stw r0, 0x10(r3)
    lwz r0, 0x14(r4)
    stw r0, 0x14(r3)
    lwz r0, 0x18(r4)
    stw r0, 0x18(r3)
    lwz r0, 0x1c(r4)
    stw r0, 0x1c(r3)
    lwz r0, 0x20(r4)
    stw r0, 0x20(r3)
    lwz r0, 0x24(r4)
    stw r0, 0x24(r3)
    lwz r0, 0x28(r4)
    stw r0, 0x28(r3)
    lwz r0, 0x2c(r4)
    stw r0, 0x2c(r3)
    lwz r0, 0x30(r4)
    stw r0, 0x30(r3)
    lwz r0, 0x34(r4)
    stw r0, 0x34(r3)
    lwz r0, 0x38(r4)
    stw r0, 0x38(r3)
    lwz r0, 0x3c(r4)
    addi r4, r4, 0x40
    stw r0, 0x3c(r3)
    addi r3, r3, 0x40
    bdnz lbl_fn_806A9CA0_000013C4
    andi. r7, r7, 0x1
    beq lbl_fn_806A9CA0_000014A8
lbl_fn_806A9CA0_00001458:
    mtctr r7
lbl_fn_806A9CA0_0000145C:
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r3)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r3)
    lwz r0, 0x10(r4)
    stw r0, 0x10(r3)
    lwz r0, 0x14(r4)
    stw r0, 0x14(r3)
    lwz r0, 0x18(r4)
    stw r0, 0x18(r3)
    lwz r0, 0x1c(r4)
    addi r4, r4, 0x20
    stw r0, 0x1c(r3)
    addi r3, r3, 0x20
    bdnz lbl_fn_806A9CA0_0000145C
lbl_fn_806A9CA0_000014A8:
    clrlwi r0, r6, 29
    cmpwi r0, 0x7
    beq lbl_fn_806A9CA0_000014E8
    cmpwi r0, 0x6
    beq lbl_fn_806A9CA0_000014F8
    cmpwi r0, 0x5
    beq lbl_fn_806A9CA0_00001508
    cmpwi r0, 0x4
    beq lbl_fn_806A9CA0_00001518
    cmpwi r0, 0x3
    beq lbl_fn_806A9CA0_00001528
    cmpwi r0, 0x2
    beq lbl_fn_806A9CA0_00001538
    cmpwi r0, 0x1
    beq lbl_fn_806A9CA0_00001548
    b lbl_fn_806A9CA0_00001558
lbl_fn_806A9CA0_000014E8:
    lwz r0, 0x0(r4)
    addi r4, r4, 0x4
    stw r0, 0x0(r3)
    addi r3, r3, 0x4
lbl_fn_806A9CA0_000014F8:
    lwz r0, 0x0(r4)
    addi r4, r4, 0x4
    stw r0, 0x0(r3)
    addi r3, r3, 0x4
lbl_fn_806A9CA0_00001508:
    lwz r0, 0x0(r4)
    addi r4, r4, 0x4
    stw r0, 0x0(r3)
    addi r3, r3, 0x4
lbl_fn_806A9CA0_00001518:
    lwz r0, 0x0(r4)
    addi r4, r4, 0x4
    stw r0, 0x0(r3)
    addi r3, r3, 0x4
lbl_fn_806A9CA0_00001528:
    lwz r0, 0x0(r4)
    addi r4, r4, 0x4
    stw r0, 0x0(r3)
    addi r3, r3, 0x4
lbl_fn_806A9CA0_00001538:
    lwz r0, 0x0(r4)
    addi r4, r4, 0x4
    stw r0, 0x0(r3)
    addi r3, r3, 0x4
lbl_fn_806A9CA0_00001548:
    lwz r0, 0x0(r4)
    addi r4, r4, 0x4
    stw r0, 0x0(r3)
    addi r3, r3, 0x4
lbl_fn_806A9CA0_00001558:
    clrlwi r0, r5, 30
    mr r5, r3
    cmpwi r0, 0x3
    beq lbl_fn_806A9CA0_0000157C
    cmpwi r0, 0x2
    beq lbl_fn_806A9CA0_0000158C
    cmpwi r0, 0x1
    beq lbl_fn_806A9CA0_0000159C
    blr
lbl_fn_806A9CA0_0000157C:
    lbz r0, 0x0(r4)
    addi r5, r3, 0x1
    stb r0, 0x0(r3)
    addi r4, r4, 0x1
lbl_fn_806A9CA0_0000158C:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    stb r0, 0x0(r5)
    addi r5, r5, 0x1
lbl_fn_806A9CA0_0000159C:
    lbz r0, 0x0(r4)
    stb r0, 0x0(r5)
    blr
lbl_fn_806A9CA0_000015A8:
    srwi. r7, r5, 3
    beq lbl_fn_806A9CA0_00001850
    srawi. r8, r7, 3
    ble lbl_fn_806A9CA0_00001768
    srwi. r0, r8, 1
    mtctr r0
    beq lbl_fn_806A9CA0_000016D8
lbl_fn_806A9CA0_000015C4:
    lwz r0, 0x0(r4)
    lwz r6, 0x4(r4)
    stw r6, 0x4(r3)
    stw r0, 0x0(r3)
    lwz r0, 0x8(r4)
    lwz r6, 0xc(r4)
    stw r6, 0xc(r3)
    stw r0, 0x8(r3)
    lwz r0, 0x10(r4)
    lwz r6, 0x14(r4)
    stw r6, 0x14(r3)
    stw r0, 0x10(r3)
    lwz r0, 0x18(r4)
    lwz r6, 0x1c(r4)
    stw r6, 0x1c(r3)
    stw r0, 0x18(r3)
    lwz r0, 0x20(r4)
    lwz r6, 0x24(r4)
    stw r6, 0x24(r3)
    stw r0, 0x20(r3)
    lwz r0, 0x28(r4)
    lwz r6, 0x2c(r4)
    stw r6, 0x2c(r3)
    stw r0, 0x28(r3)
    lwz r0, 0x30(r4)
    lwz r6, 0x34(r4)
    stw r6, 0x34(r3)
    stw r0, 0x30(r3)
    lwz r0, 0x38(r4)
    lwz r6, 0x3c(r4)
    stw r6, 0x3c(r3)
    stw r0, 0x38(r3)
    lwz r0, 0x40(r4)
    lwz r6, 0x44(r4)
    stw r6, 0x44(r3)
    stw r0, 0x40(r3)
    lwz r0, 0x48(r4)
    lwz r6, 0x4c(r4)
    stw r6, 0x4c(r3)
    stw r0, 0x48(r3)
    lwz r0, 0x50(r4)
    lwz r6, 0x54(r4)
    stw r6, 0x54(r3)
    stw r0, 0x50(r3)
    lwz r0, 0x58(r4)
    lwz r6, 0x5c(r4)
    stw r6, 0x5c(r3)
    stw r0, 0x58(r3)
    lwz r0, 0x60(r4)
    lwz r6, 0x64(r4)
    stw r6, 0x64(r3)
    stw r0, 0x60(r3)
    lwz r0, 0x68(r4)
    lwz r6, 0x6c(r4)
    stw r6, 0x6c(r3)
    stw r0, 0x68(r3)
    lwz r0, 0x70(r4)
    lwz r6, 0x74(r4)
    stw r6, 0x74(r3)
    stw r0, 0x70(r3)
    lwz r0, 0x78(r4)
    lwz r6, 0x7c(r4)
    addi r4, r4, 0x80
    stw r6, 0x7c(r3)
    stw r0, 0x78(r3)
    addi r3, r3, 0x80
    bdnz lbl_fn_806A9CA0_000015C4
    andi. r8, r8, 0x1
    beq lbl_fn_806A9CA0_00001768
lbl_fn_806A9CA0_000016D8:
    mtctr r8
lbl_fn_806A9CA0_000016DC:
    lwz r0, 0x0(r4)
    lwz r6, 0x4(r4)
    stw r6, 0x4(r3)
    stw r0, 0x0(r3)
    lwz r0, 0x8(r4)
    lwz r6, 0xc(r4)
    stw r6, 0xc(r3)
    stw r0, 0x8(r3)
    lwz r0, 0x10(r4)
    lwz r6, 0x14(r4)
    stw r6, 0x14(r3)
    stw r0, 0x10(r3)
    lwz r0, 0x18(r4)
    lwz r6, 0x1c(r4)
    stw r6, 0x1c(r3)
    stw r0, 0x18(r3)
    lwz r0, 0x20(r4)
    lwz r6, 0x24(r4)
    stw r6, 0x24(r3)
    stw r0, 0x20(r3)
    lwz r0, 0x28(r4)
    lwz r6, 0x2c(r4)
    stw r6, 0x2c(r3)
    stw r0, 0x28(r3)
    lwz r0, 0x30(r4)
    lwz r6, 0x34(r4)
    stw r6, 0x34(r3)
    stw r0, 0x30(r3)
    lwz r0, 0x38(r4)
    lwz r6, 0x3c(r4)
    addi r4, r4, 0x40
    stw r6, 0x3c(r3)
    stw r0, 0x38(r3)
    addi r3, r3, 0x40
    bdnz lbl_fn_806A9CA0_000016DC
lbl_fn_806A9CA0_00001768:
    clrlwi r0, r7, 29
    cmpwi r0, 0x7
    beq lbl_fn_806A9CA0_000017A8
    cmpwi r0, 0x6
    beq lbl_fn_806A9CA0_000017C0
    cmpwi r0, 0x5
    beq lbl_fn_806A9CA0_000017D8
    cmpwi r0, 0x4
    beq lbl_fn_806A9CA0_000017F0
    cmpwi r0, 0x3
    beq lbl_fn_806A9CA0_00001808
    cmpwi r0, 0x2
    beq lbl_fn_806A9CA0_00001820
    cmpwi r0, 0x1
    beq lbl_fn_806A9CA0_00001838
    b lbl_fn_806A9CA0_00001850
lbl_fn_806A9CA0_000017A8:
    lwz r0, 0x0(r4)
    lwz r6, 0x4(r4)
    addi r4, r4, 0x8
    stw r6, 0x4(r3)
    stw r0, 0x0(r3)
    addi r3, r3, 0x8
lbl_fn_806A9CA0_000017C0:
    lwz r0, 0x0(r4)
    lwz r6, 0x4(r4)
    addi r4, r4, 0x8
    stw r6, 0x4(r3)
    stw r0, 0x0(r3)
    addi r3, r3, 0x8
lbl_fn_806A9CA0_000017D8:
    lwz r0, 0x0(r4)
    lwz r6, 0x4(r4)
    addi r4, r4, 0x8
    stw r6, 0x4(r3)
    stw r0, 0x0(r3)
    addi r3, r3, 0x8
lbl_fn_806A9CA0_000017F0:
    lwz r0, 0x0(r4)
    lwz r6, 0x4(r4)
    addi r4, r4, 0x8
    stw r6, 0x4(r3)
    stw r0, 0x0(r3)
    addi r3, r3, 0x8
lbl_fn_806A9CA0_00001808:
    lwz r0, 0x0(r4)
    lwz r6, 0x4(r4)
    addi r4, r4, 0x8
    stw r6, 0x4(r3)
    stw r0, 0x0(r3)
    addi r3, r3, 0x8
lbl_fn_806A9CA0_00001820:
    lwz r0, 0x0(r4)
    lwz r6, 0x4(r4)
    addi r4, r4, 0x8
    stw r6, 0x4(r3)
    stw r0, 0x0(r3)
    addi r3, r3, 0x8
lbl_fn_806A9CA0_00001838:
    lwz r0, 0x0(r4)
    lwz r6, 0x4(r4)
    addi r4, r4, 0x8
    stw r6, 0x4(r3)
    stw r0, 0x0(r3)
    addi r3, r3, 0x8
lbl_fn_806A9CA0_00001850:
    clrlwi r0, r5, 29
    mr r5, r3
    cmpwi r0, 0x7
    beq lbl_fn_806A9CA0_00001894
    cmpwi r0, 0x6
    beq lbl_fn_806A9CA0_000018A4
    cmpwi r0, 0x5
    beq lbl_fn_806A9CA0_000018B4
    cmpwi r0, 0x4
    beq lbl_fn_806A9CA0_000018C4
    cmpwi r0, 0x3
    beq lbl_fn_806A9CA0_000018D4
    cmpwi r0, 0x2
    beq lbl_fn_806A9CA0_000018E4
    cmpwi r0, 0x1
    beq lbl_fn_806A9CA0_000018F4
    blr
lbl_fn_806A9CA0_00001894:
    lbz r0, 0x0(r4)
    addi r5, r3, 0x1
    stb r0, 0x0(r3)
    addi r4, r4, 0x1
lbl_fn_806A9CA0_000018A4:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    stb r0, 0x0(r5)
    addi r5, r5, 0x1
lbl_fn_806A9CA0_000018B4:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    stb r0, 0x0(r5)
    addi r5, r5, 0x1
lbl_fn_806A9CA0_000018C4:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    stb r0, 0x0(r5)
    addi r5, r5, 0x1
lbl_fn_806A9CA0_000018D4:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    stb r0, 0x0(r5)
    addi r5, r5, 0x1
lbl_fn_806A9CA0_000018E4:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    stb r0, 0x0(r5)
    addi r5, r5, 0x1
lbl_fn_806A9CA0_000018F4:
    lbz r0, 0x0(r4)
    stb r0, 0x0(r5)
    blr
}

asm void fn_806AA690(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lis r29, lbl_8085FF50@ha
    stw r28, 0x10(r1)
    lwz r0, lbl_8085FF50@l(r29)
    cmpwi r0, 0x0
    bne lbl_fn_806AA690_00001A0C
    bl fn_806A6740
    mr r30, r3
    li r3, 0x3
    li r4, 0x4000
    li r5, 0x20
    bl fn_806A7370
    lis r31, 0x1
    mr r28, r3
    addi r4, r31, -0x8000
    li r3, 0x3
    li r5, 0x20
    bl fn_806A7370
    cmpwi r30, 0x1
    li r0, 0x1
    stw r0, lbl_8085FF50@l(r29)
    mr r29, r3
    beq lbl_fn_806AA690_00001984
    addi r4, r31, -0x8000
    bl fn_806A6600
lbl_fn_806AA690_00001984:
    lis r31, lbl_8085FF58@ha
    addi r3, r31, lbl_8085FF58@l
    bl fn_806A12E8
    cmpwi r3, 0x0
    bne lbl_fn_806AA690_000019BC
    addi r3, r31, lbl_8085FF58@l
    lis r4, lbl_807BD230@ha
    lwz r6, 0x4(r3)
    addi r4, r4, lbl_807BD230@l
    lwz r5, lbl_8085FF58@l(r31)
    lis r3, 0x800
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806AA690_000019E0
lbl_fn_806AA690_000019BC:
    lis r4, lbl_807BD254@ha
    lis r3, 0x800
    addi r4, r4, lbl_807BD254@l
    crclr 6
    bl fn_806A76B0
    addi r3, r31, lbl_8085FF58@l
    li r0, 0x0
    stw r0, 0x4(r3)
    stw r0, lbl_8085FF58@l(r31)
lbl_fn_806AA690_000019E0:
    cmpwi r30, 0x1
    beq lbl_fn_806AA690_000019EC
    bl fn_806A66D0
lbl_fn_806AA690_000019EC:
    mr r4, r28
    li r3, 0x3
    li r5, 0x0
    bl fn_806A7400
    mr r4, r29
    li r3, 0x3
    li r5, 0x0
    bl fn_806A7400
lbl_fn_806AA690_00001A0C:
    lis r3, lbl_8085FF58@ha
    lwz r31, 0x1c(r1)
    addi r4, r3, lbl_8085FF58@l
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    lwz r3, lbl_8085FF58@l(r3)
    lwz r4, 0x4(r4)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806AA7C0(void)
{
    nofralloc
    lis r3, lbl_807BD27C@ha
    addi r3, r3, lbl_807BD27C@l
    blr
}

asm void fn_806AA7D0(void)
{
    nofralloc
    b fn_805EBFD0
}

asm void fn_806AA7E0(void)
{
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    stw r0, 0x204(r1)
    addi r11, r1, 0x200
    bl _savegpr_20
    clrlwi. r20, r5, 26
    lis r10, 0x6745
    lis r9, 0xefce
    lis r8, 0x98bb
    lis r7, 0x1032
    lis r6, 0xc3d3
    mr r25, r3
    mr r26, r4
    mr r24, r5
    addi r31, r10, 0x2301
    subi r30, r9, 0x5477
    subi r29, r8, 0x2302
    addi r28, r7, 0x5476
    subi r27, r6, 0x1e10
    ble lbl_fn_806AA7E0_00001AC0
    subf r0, r20, r5
    mr r5, r20
    addi r3, r1, 0x8
    add r4, r4, r0
    bl memcpy
lbl_fn_806AA7E0_00001AC0:
    addi r3, r1, 0x8
    li r0, 0x80
    stbx r0, r3, r20
    addi r20, r20, 0x1
    cmpwi r20, 0x38
    bgt lbl_fn_806AA7E0_00001AF0
    subfic r5, r20, 0x38
    add r3, r3, r20
    li r4, 0x0
    bl memset
    li r9, 0x38
    b lbl_fn_806AA7E0_00001B04
lbl_fn_806AA7E0_00001AF0:
    subfic r5, r20, 0x78
    add r3, r3, r20
    li r4, 0x0
    bl memset
    li r9, 0x78
lbl_fn_806AA7E0_00001B04:
    addi r8, r1, 0x8
    li r7, 0x0
    stbx r7, r8, r9
    addi r9, r9, 0x1
    addi r0, r24, 0x8
    extrwi r6, r24, 8, 3
    stbx r7, r8, r9
    addi r9, r9, 0x1
    ori r3, r0, 0x3f
    extrwi r5, r24, 8, 11
    stbx r7, r8, r9
    addi r9, r9, 0x1
    extrwi r4, r24, 8, 19
    clrlslwi r0, r24, 27, 3
    stbx r7, r8, r9
    addi r9, r9, 0x1
    addi r7, r3, 0x1
    stbx r6, r8, r9
    addi r9, r9, 0x1
    stbx r5, r8, r9
    addi r9, r9, 0x1
    stbx r4, r8, r9
    addi r9, r9, 0x1
    stbx r0, r8, r9
    addi r9, r9, 0x1
    cmpwi r9, 0x40
    bne lbl_fn_806AA7E0_00001B74
    mr r7, r3
lbl_fn_806AA7E0_00001B74:
    addi r6, r1, 0x48
    li r0, 0x8
    b lbl_fn_806AA7E0_00002AC8
    nop
lbl_fn_806AA7E0_00001B84:
    addi r4, r1, 0x8
    b lbl_fn_806AA7E0_00001BA4
lbl_fn_806AA7E0_00001B8C:
    mr r4, r6
    b lbl_fn_806AA7E0_00001BA4
lbl_fn_806AA7E0_00001B94:
    addi r4, r1, 0x8
    b lbl_fn_806AA7E0_00001BA4
lbl_fn_806AA7E0_00001B9C:
    mr r4, r26
    addi r26, r26, 0x40
lbl_fn_806AA7E0_00001BA4:
    lwz r3, 0x0(r4)
    addi r8, r1, 0xc8
    stw r3, 0x88(r1)
    lwz r3, 0x4(r4)
    stw r3, 0x8c(r1)
    lwz r3, 0x8(r4)
    stw r3, 0x90(r1)
    lwz r3, 0xc(r4)
    stw r3, 0x94(r1)
    lwz r3, 0x10(r4)
    stw r3, 0x98(r1)
    lwz r3, 0x14(r4)
    stw r3, 0x9c(r1)
    lwz r3, 0x18(r4)
    stw r3, 0xa0(r1)
    lwz r3, 0x1c(r4)
    stw r3, 0xa4(r1)
    lwz r3, 0x20(r4)
    stw r3, 0xa8(r1)
    lwz r3, 0x24(r4)
    stw r3, 0xac(r1)
    lwz r3, 0x28(r4)
    stw r3, 0xb0(r1)
    lwz r3, 0x2c(r4)
    stw r3, 0xb4(r1)
    lwz r3, 0x30(r4)
    stw r3, 0xb8(r1)
    lwz r3, 0x34(r4)
    stw r3, 0xbc(r1)
    lwz r3, 0x38(r4)
    stw r3, 0xc0(r1)
    lwz r3, 0x3c(r4)
    stw r3, 0xc4(r1)
    mtctr r0
lbl_fn_806AA7E0_00001C2C:
    lwz r9, -0x40(r8)
    lwz r5, -0x38(r8)
    lwz r4, -0xc(r8)
    lwz r3, -0x20(r8)
    xor r5, r9, r5
    xor r3, r4, r3
    xor r3, r5, r3
    rotlwi r4, r3, 1
    stw r4, 0x0(r8)
    lwz r10, -0x3c(r8)
    lwz r9, -0x34(r8)
    lwz r5, -0x8(r8)
    lwz r3, -0x1c(r8)
    xor r9, r10, r9
    xor r3, r5, r3
    xor r3, r9, r3
    rotlwi r3, r3, 1
    stw r3, 0x4(r8)
    lwz r11, -0x38(r8)
    lwz r10, -0x30(r8)
    lwz r9, -0x4(r8)
    lwz r5, -0x18(r8)
    xor r10, r11, r10
    xor r5, r9, r5
    xor r5, r10, r5
    rotlwi r5, r5, 1
    stw r5, 0x8(r8)
    lwz r9, -0x14(r8)
    lwz r11, -0x34(r8)
    lwz r10, -0x2c(r8)
    xor r4, r4, r9
    xor r9, r11, r10
    xor r4, r9, r4
    rotlwi r4, r4, 1
    stw r4, 0xc(r8)
    lwz r9, -0x10(r8)
    lwz r11, -0x30(r8)
    lwz r10, -0x28(r8)
    xor r3, r3, r9
    xor r9, r11, r10
    xor r3, r9, r3
    rotlwi r3, r3, 1
    stw r3, 0x10(r8)
    lwz r9, -0xc(r8)
    lwz r11, -0x2c(r8)
    lwz r10, -0x24(r8)
    xor r5, r5, r9
    xor r9, r11, r10
    xor r5, r9, r5
    rotlwi r5, r5, 1
    stw r5, 0x14(r8)
    lwz r5, -0x8(r8)
    lwz r10, -0x28(r8)
    lwz r9, -0x20(r8)
    xor r4, r4, r5
    xor r5, r10, r9
    xor r4, r5, r4
    rotlwi r4, r4, 1
    stw r4, 0x18(r8)
    lwz r4, -0x4(r8)
    lwz r9, -0x24(r8)
    lwz r5, -0x1c(r8)
    xor r3, r3, r4
    xor r4, r9, r5
    xor r3, r4, r3
    rotlwi r3, r3, 1
    stw r3, 0x1c(r8)
    addi r8, r8, 0x20
    bdnz lbl_fn_806AA7E0_00001C2C
    addis r3, r27, 0x5a82
    and r9, r30, r29
    andc r4, r28, r30
    lwz r21, 0x88(r1)
    or r20, r9, r4
    addi r9, r3, 0x7999
    rotlwi r8, r31, 5
    rotrwi r5, r30, 2
    add r8, r8, r9
    add r21, r21, r20
    add r8, r21, r8
    rotrwi r3, r31, 2
    addis r4, r28, 0x5a82
    and r12, r31, r5
    andc r11, r29, r31
    lwz r9, 0x8c(r1)
    or r20, r12, r11
    addi r12, r4, 0x7999
    rotlwi r4, r8, 5
    addis r10, r29, 0x5a82
    add r4, r4, r12
    add r9, r9, r20
    add r4, r9, r4
    and r22, r8, r3
    addis r9, r3, 0x5a82
    andc r21, r5, r8
    addis r11, r5, 0x5a82
    rotrwi r5, r8, 2
    or r20, r22, r21
    lwz r12, 0x90(r1)
    addi r21, r10, 0x7999
    rotlwi r8, r4, 5
    add r12, r12, r20
    and r10, r4, r5
    andc r3, r3, r4
    add r8, r8, r21
    add r8, r12, r8
    rotrwi r4, r4, 2
    or r20, r10, r3
    lwz r12, 0x94(r1)
    addi r3, r11, 0x7999
    rotlwi r10, r8, 5
    add r11, r12, r20
    and r21, r8, r4
    add r3, r10, r3
    andc r12, r5, r8
    add r10, r11, r3
    lwz r11, 0x98(r1)
    rotrwi r3, r8, 2
    or r12, r21, r12
    add r12, r11, r12
    rotlwi r8, r10, 5
    addi r9, r9, 0x7999
    and r11, r10, r3
    add r8, r8, r9
    andc r9, r4, r10
    add r8, r12, r8
    or r20, r11, r9
    rotlwi r9, r8, 5
    addis r5, r5, 0x5a82
    lwz r11, 0x9c(r1)
    addi r12, r5, 0x7999
    rotrwi r5, r10, 2
    addis r10, r4, 0x5a82
    add r4, r9, r12
    add r11, r11, r20
    add r9, r11, r4
    and r21, r8, r5
    andc r11, r3, r8
    rotrwi r4, r8, 2
    or r20, r21, r11
    lwz r12, 0xa0(r1)
    addis r11, r3, 0x5a82
    rotlwi r8, r9, 5
    addi r10, r10, 0x7999
    add r12, r12, r20
    add r8, r8, r10
    and r21, r9, r4
    addis r10, r5, 0x5a82
    andc r5, r5, r9
    add r8, r12, r8
    rotrwi r3, r9, 2
    or r20, r21, r5
    addis r9, r4, 0x5a82
    lwz r12, 0xa4(r1)
    addi r21, r11, 0x7999
    rotlwi r5, r8, 5
    andc r4, r4, r8
    add r11, r12, r20
    and r12, r8, r3
    add r5, r5, r21
    lwz r21, 0xa8(r1)
    or r20, r12, r4
    addi r12, r10, 0x7999
    add r5, r11, r5
    rotrwi r8, r8, 2
    rotlwi r4, r5, 5
    addis r11, r3, 0x5a82
    add r4, r4, r12
    add r21, r21, r20
    and r10, r5, r8
    andc r3, r3, r5
    or r20, r10, r3
    lwz r12, 0xac(r1)
    add r4, r21, r4
    rotrwi r3, r5, 2
    addi r5, r9, 0x7999
    add r12, r12, r20
    rotlwi r10, r4, 5
    and r9, r4, r3
    add r5, r10, r5
    add r10, r12, r5
    lwz r12, 0xb0(r1)
    andc r5, r8, r4
    or r20, r9, r5
    rotlwi r9, r10, 5
    addi r5, r11, 0x7999
    add r11, r12, r20
    add r5, r9, r5
    add r9, r11, r5
    rotrwi r5, r4, 2
    rotrwi r4, r10, 2
    addis r11, r8, 0x5a82
    andc r8, r3, r10
    and r12, r10, r5
    lwz r10, 0xb4(r1)
    or r20, r12, r8
    rotlwi r8, r9, 5
    addi r12, r11, 0x7999
    addis r11, r3, 0x5a82
    add r3, r8, r12
    add r10, r10, r20
    add r8, r10, r3
    and r22, r9, r4
    andc r21, r5, r9
    addis r10, r5, 0x5a82
    or r20, r22, r21
    rotrwi r3, r9, 2
    addis r9, r4, 0x5a82
    lwz r12, 0xb8(r1)
    addi r21, r11, 0x7999
    rotlwi r5, r8, 5
    add r11, r12, r20
    and r12, r8, r3
    add r5, r5, r21
    andc r4, r4, r8
    add r5, r11, r5
    addis r11, r3, 0x5a82
    or r20, r12, r4
    lwz r21, 0xbc(r1)
    rotrwi r8, r8, 2
    rotlwi r4, r5, 5
    addi r10, r10, 0x7999
    add r21, r21, r20
    add r4, r4, r10
    and r12, r5, r8
    andc r3, r3, r5
    lwz r10, 0xc0(r1)
    or r12, r12, r3
    add r4, r21, r4
    rotrwi r3, r5, 2
    addi r5, r9, 0x7999
    rotlwi r9, r4, 5
    add r12, r10, r12
    add r5, r9, r5
    and r10, r4, r3
    add r9, r12, r5
    lwz r12, 0xc4(r1)
    andc r5, r8, r4
    or r20, r10, r5
    rotlwi r10, r9, 5
    addi r5, r11, 0x7999
    add r11, r12, r20
    add r5, r10, r5
    add r10, r11, r5
    rotrwi r5, r4, 2
    rotrwi r4, r9, 2
    addis r8, r8, 0x5a82
    andc r11, r3, r9
    and r9, r9, r5
    lwz r12, 0xc8(r1)
    or r20, r9, r11
    addi r8, r8, 0x7999
    rotlwi r9, r10, 5
    addis r11, r3, 0x5a82
    add r3, r9, r8
    add r12, r12, r20
    add r9, r12, r3
    and r21, r10, r4
    andc r8, r5, r10
    rotrwi r3, r10, 2
    addis r10, r5, 0x5a82
    addi r5, r11, 0x7999
    or r20, r21, r8
    lwz r12, 0xcc(r1)
    rotlwi r8, r9, 5
    addis r11, r4, 0x5a82
    add r21, r12, r20
    and r12, r9, r3
    add r5, r8, r5
    andc r4, r4, r9
    add r8, r21, r5
    addi r22, r10, 0x7999
    or r20, r12, r4
    rotrwi r5, r9, 2
    lwz r21, 0xd0(r1)
    rotlwi r4, r8, 5
    add r4, r4, r22
    addis r9, r3, 0x6eda
    add r21, r21, r20
    andc r10, r3, r8
    and r12, r8, r5
    lwz r3, 0xd4(r1)
    or r20, r12, r10
    add r4, r21, r4
    addi r12, r11, 0x7999
    rotlwi r10, r4, 5
    add r11, r3, r20
    add r10, r10, r12
    rotrwi r3, r8, 2
    xor r8, r5, r4
    lwz r12, 0xd8(r1)
    add r10, r11, r10
    subi r11, r9, 0x145f
    xor r20, r8, r3
    rotrwi r4, r4, 2
    rotlwi r8, r10, 5
    add r9, r12, r20
    add r8, r8, r11
    add r8, r9, r8
    xor r9, r3, r10
    addis r5, r5, 0x6eda
    xor r20, r9, r4
    lwz r12, 0xdc(r1)
    subi r11, r5, 0x145f
    rotrwi r22, r10, 2
    addis r10, r3, 0x6eda
    rotlwi r9, r8, 5
    add r3, r9, r11
    add r12, r12, r20
    xor r5, r4, r8
    subi r21, r10, 0x145f
    add r9, r12, r3
    rotrwi r3, r8, 2
    xor r12, r5, r22
    lwz r11, 0xe0(r1)
    rotlwi r5, r9, 5
    xor r8, r22, r9
    add r11, r11, r12
    addis r4, r4, 0x6eda
    add r5, r5, r21
    lwz r12, 0xe4(r1)
    add r5, r11, r5
    xor r20, r8, r3
    subi r21, r4, 0x145f
    addis r11, r3, 0x6eda
    rotlwi r8, r5, 5
    xor r3, r3, r5
    add r12, r12, r20
    rotrwi r4, r9, 2
    add r8, r8, r21
    addis r10, r22, 0x6eda
    add r8, r12, r8
    xor r20, r3, r4
    lwz r12, 0xe8(r1)
    subi r3, r10, 0x145f
    rotlwi r9, r8, 5
    rotrwi r5, r5, 2
    add r9, r9, r3
    add r12, r12, r20
    xor r10, r4, r8
    lwz r3, 0xec(r1)
    add r9, r12, r9
    subi r12, r11, 0x145f
    xor r20, r10, r5
    rotlwi r10, r9, 5
    add r11, r3, r20
    rotrwi r3, r8, 2
    add r10, r10, r12
    xor r8, r5, r9
    add r10, r11, r10
    xor r20, r8, r3
    rotlwi r8, r10, 5
    addis r4, r4, 0x6eda
    lwz r11, 0xf0(r1)
    subi r12, r4, 0x145f
    addis r5, r5, 0x6eda
    add r8, r8, r12
    add r11, r11, r20
    rotrwi r4, r9, 2
    xor r9, r3, r10
    add r8, r11, r8
    lwz r21, 0xf4(r1)
    xor r20, r9, r4
    subi r12, r5, 0x145f
    rotrwi r22, r10, 2
    xor r11, r4, r8
    add r5, r21, r20
    rotlwi r9, r8, 5
    addis r10, r3, 0x6eda
    xor r20, r11, r22
    add r3, r9, r12
    addis r4, r4, 0x6eda
    add r9, r5, r3
    lwz r21, 0xf8(r1)
    rotrwi r3, r8, 2
    subi r12, r10, 0x145f
    rotlwi r8, r9, 5
    add r10, r21, r20
    add r8, r8, r12
    xor r5, r22, r9
    add r8, r10, r8
    lwz r12, 0xfc(r1)
    xor r20, r5, r3
    subi r4, r4, 0x145f
    rotlwi r5, r8, 5
    addis r11, r22, 0x6eda
    add r5, r5, r4
    add r12, r12, r20
    rotrwi r4, r9, 2
    xor r9, r3, r8
    addis r10, r3, 0x6eda
    add r5, r12, r5
    xor r20, r9, r4
    lwz r3, 0x100(r1)
    subi r12, r11, 0x145f
    rotlwi r9, r5, 5
    add r11, r3, r20
    rotrwi r3, r8, 2
    add r9, r9, r12
    xor r8, r4, r5
    add r9, r11, r9
    lwz r12, 0x104(r1)
    xor r20, r8, r3
    subi r11, r10, 0x145f
    rotlwi r8, r9, 5
    add r10, r12, r20
    add r8, r8, r11
    add r8, r10, r8
    rotrwi r21, r5, 2
    xor r5, r3, r9
    addis r4, r4, 0x6eda
    lwz r12, 0x108(r1)
    xor r20, r5, r21
    rotrwi r22, r9, 2
    subi r11, r4, 0x145f
    rotlwi r5, r8, 5
    addis r10, r3, 0x6eda
    add r9, r12, r20
    add r3, r5, r11
    xor r4, r21, r8
    add r5, r9, r3
    addis r9, r21, 0x6eda
    xor r20, r4, r22
    rotrwi r3, r8, 2
    lwz r21, 0x10c(r1)
    subi r12, r10, 0x145f
    rotlwi r4, r5, 5
    xor r8, r22, r5
    add r10, r21, r20
    subi r9, r9, 0x145f
    add r4, r4, r12
    xor r20, r8, r3
    lwz r12, 0x110(r1)
    add r4, r10, r4
    rotlwi r10, r4, 5
    addis r8, r3, 0x6eda
    xor r3, r3, r4
    add r12, r12, r20
    add r9, r10, r9
    rotrwi r5, r5, 2
    add r10, r12, r9
    addis r11, r22, 0x6eda
    xor r20, r3, r5
    lwz r12, 0x114(r1)
    subi r3, r11, 0x145f
    rotlwi r9, r10, 5
    add r11, r12, r20
    rotrwi r4, r4, 2
    add r9, r9, r3
    xor r3, r5, r10
    add r9, r11, r9
    subi r11, r8, 0x145f
    xor r20, r3, r4
    lwz r12, 0x118(r1)
    rotlwi r8, r9, 5
    rotrwi r3, r10, 2
    add r10, r12, r20
    add r8, r8, r11
    add r8, r10, r8
    xor r11, r4, r9
    addis r10, r5, 0x6eda
    xor r20, r11, r3
    lwz r12, 0x11c(r1)
    subi r11, r10, 0x145f
    rotrwi r22, r9, 2
    rotlwi r5, r8, 5
    addis r9, r4, 0x6eda
    add r4, r5, r11
    add r12, r12, r20
    add r5, r12, r4
    xor r10, r3, r8
    xor r20, r10, r22
    rotrwi r4, r8, 2
    addis r21, r3, 0x6eda
    lwz r11, 0x120(r1)
    subi r10, r9, 0x145f
    rotrwi r3, r5, 2
    xor r8, r22, r5
    add r9, r11, r20
    rotlwi r5, r5, 5
    subis r12, r22, 0x70e4
    add r5, r5, r10
    lwz r23, 0x124(r1)
    add r5, r9, r5
    xor r20, r8, r4
    subi r22, r21, 0x145f
    or r10, r3, r4
    rotlwi r9, r5, 5
    add r21, r23, r20
    add r9, r9, r22
    subis r11, r4, 0x70e4
    and r22, r3, r4
    and r4, r5, r10
    add r9, r21, r9
    rotrwi r8, r5, 2
    or r20, r22, r4
    lwz r21, 0x128(r1)
    subi r22, r12, 0x4324
    rotlwi r4, r9, 5
    add r12, r21, r20
    or r10, r8, r3
    add r4, r4, r22
    rotrwi r5, r9, 2
    and r9, r9, r10
    and r21, r8, r3
    add r4, r12, r4
    or r10, r5, r8
    or r20, r21, r9
    lwz r12, 0x12c(r1)
    subi r21, r11, 0x4324
    rotlwi r9, r4, 5
    add r12, r12, r20
    and r11, r5, r8
    add r9, r9, r21
    and r10, r4, r10
    add r9, r12, r9
    or r12, r11, r10
    subis r3, r3, 0x70e4
    lwz r11, 0x130(r1)
    rotrwi r4, r4, 2
    rotlwi r10, r9, 5
    subi r3, r3, 0x4324
    add r12, r11, r12
    add r10, r10, r3
    or r11, r4, r5
    rotrwi r3, r9, 2
    subis r21, r5, 0x70e4
    add r10, r12, r10
    subis r22, r8, 0x70e4
    and r12, r4, r5
    and r9, r9, r11
    or r20, r12, r9
    lwz r23, 0x134(r1)
    subi r5, r22, 0x4324
    rotlwi r9, r10, 5
    or r11, r3, r4
    add r23, r23, r20
    add r5, r9, r5
    rotrwi r8, r10, 2
    add r9, r23, r5
    and r22, r3, r4
    and r5, r10, r11
    subis r12, r4, 0x70e4
    or r20, r22, r5
    lwz r23, 0x138(r1)
    or r10, r8, r3
    rotlwi r5, r9, 5
    subi r21, r21, 0x4324
    rotrwi r4, r9, 2
    add r5, r5, r21
    subis r11, r3, 0x70e4
    and r22, r8, r3
    and r3, r9, r10
    add r9, r23, r20
    lwz r21, 0x13c(r1)
    add r5, r9, r5
    or r20, r22, r3
    subi r9, r12, 0x4324
    or r3, r4, r8
    rotlwi r10, r5, 5
    add r12, r21, r20
    add r10, r10, r9
    and r3, r5, r3
    and r9, r4, r8
    rotrwi r5, r5, 2
    add r10, r12, r10
    lwz r12, 0x140(r1)
    or r20, r9, r3
    subi r3, r11, 0x4324
    rotlwi r9, r10, 5
    add r11, r12, r20
    add r3, r9, r3
    add r9, r11, r3
    or r12, r5, r4
    subis r11, r8, 0x70e4
    and r8, r10, r12
    and r22, r5, r4
    rotrwi r3, r10, 2
    lwz r21, 0x144(r1)
    or r20, r22, r8
    subi r12, r11, 0x4324
    rotlwi r10, r9, 5
    subis r22, r4, 0x70e4
    add r11, r21, r20
    or r8, r3, r5
    add r10, r10, r12
    rotrwi r4, r9, 2
    add r10, r11, r10
    and r9, r9, r8
    and r23, r3, r5
    subis r21, r5, 0x70e4
    or r20, r23, r9
    or r11, r4, r3
    subi r23, r22, 0x4324
    lwz r24, 0x148(r1)
    and r5, r10, r11
    rotlwi r9, r10, 5
    rotrwi r8, r10, 2
    subis r12, r3, 0x70e4
    and r22, r4, r3
    add r10, r24, r20
    add r3, r9, r23
    lwz r23, 0x14c(r1)
    add r9, r10, r3
    or r20, r22, r5
    or r10, r8, r4
    subi r21, r21, 0x4324
    rotlwi r5, r9, 5
    subis r11, r4, 0x70e4
    and r22, r8, r4
    rotrwi r3, r9, 2
    and r4, r9, r10
    add r9, r23, r20
    add r5, r5, r21
    lwz r21, 0x150(r1)
    add r5, r9, r5
    or r20, r22, r4
    subi r9, r12, 0x4324
    or r4, r3, r8
    rotlwi r10, r5, 5
    add r12, r21, r20
    add r10, r10, r9
    and r4, r5, r4
    and r9, r3, r8
    rotrwi r5, r5, 2
    add r10, r12, r10
    lwz r12, 0x154(r1)
    or r20, r9, r4
    subi r4, r11, 0x4324
    rotlwi r9, r10, 5
    add r11, r12, r20
    add r4, r9, r4
    add r9, r11, r4
    or r12, r5, r3
    subis r11, r8, 0x70e4
    and r8, r10, r12
    and r21, r5, r3
    rotrwi r4, r10, 2
    lwz r22, 0x158(r1)
    or r20, r21, r8
    subi r21, r11, 0x4324
    rotlwi r8, r9, 5
    subis r12, r3, 0x70e4
    add r8, r8, r21
    add r11, r22, r20
    or r10, r4, r5
    subis r23, r5, 0x70e4
    and r22, r9, r10
    and r24, r4, r5
    add r8, r11, r8
    rotrwi r3, r9, 2
    or r20, r24, r22
    subi r22, r12, 0x4324
    rotlwi r5, r8, 5
    lwz r21, 0x15c(r1)
    add r5, r5, r22
    or r11, r3, r4
    rotrwi r9, r8, 2
    subis r10, r4, 0x70e4
    and r24, r3, r4
    and r4, r8, r11
    add r8, r21, r20
    lwz r22, 0x160(r1)
    add r5, r8, r5
    or r21, r24, r4
    or r11, r9, r3
    subi r23, r23, 0x4324
    rotlwi r4, r5, 5
    subis r12, r3, 0x70e4
    and r24, r9, r3
    rotrwi r8, r5, 2
    and r3, r5, r11
    add r5, r22, r21
    add r4, r4, r23
    lwz r23, 0x164(r1)
    add r4, r5, r4
    or r21, r24, r3
    subi r5, r10, 0x4324
    or r3, r8, r9
    rotlwi r11, r4, 5
    add r23, r23, r21
    add r5, r11, r5
    and r10, r8, r9
    add r11, r23, r5
    and r3, r4, r3
    or r21, r10, r3
    lwz r5, 0x168(r1)
    rotlwi r10, r11, 5
    subi r3, r12, 0x4324
    add r5, r5, r21
    add r3, r10, r3
    add r10, r5, r3
    rotrwi r5, r4, 2
    subis r12, r9, 0x70e4
    or r23, r5, r8
    rotrwi r4, r11, 2
    and r9, r11, r23
    and r24, r5, r8
    or r21, r24, r9
    subis r23, r8, 0x70e4
    lwz r11, 0x16c(r1)
    rotlwi r8, r10, 5
    subi r12, r12, 0x4324
    or r9, r4, r5
    add r8, r8, r12
    add r11, r11, r21
    add r8, r11, r8
    rotrwi r3, r10, 2
    and r11, r10, r9
    and r24, r4, r5
    or r21, r24, r11
    lwz r10, 0x170(r1)
    subis r12, r5, 0x70e4
    rotlwi r5, r8, 5
    subi r23, r23, 0x4324
    or r9, r3, r4
    add r5, r5, r23
    add r10, r10, r21
    add r5, r10, r5
    subis r11, r4, 0x359d
    and r24, r3, r4
    and r4, r8, r9
    or r21, r24, r4
    lwz r23, 0x174(r1)
    subi r24, r12, 0x4324
    rotlwi r9, r5, 5
    rotrwi r4, r8, 2
    add r12, r23, r21
    add r9, r9, r24
    xor r8, r3, r5
    subis r10, r3, 0x359d
    lwz r3, 0x178(r1)
    add r9, r12, r9
    xor r21, r8, r4
    subi r12, r11, 0x3e2a
    rotlwi r8, r9, 5
    add r11, r3, r21
    add r8, r8, r12
    rotrwi r3, r5, 2
    xor r5, r4, r9
    lwz r12, 0x17c(r1)
    add r8, r11, r8
    subi r11, r10, 0x3e2a
    xor r21, r5, r3
    rotlwi r5, r8, 5
    add r10, r12, r21
    add r5, r5, r11
    add r5, r10, r5
    rotrwi r22, r9, 2
    subis r9, r4, 0x359d
    xor r10, r3, r8
    lwz r12, 0x180(r1)
    xor r23, r10, r22
    rotrwi r21, r8, 2
    subis r10, r3, 0x359d
    rotlwi r4, r5, 5
    subi r9, r9, 0x3e2a
    add r8, r12, r23
    add r3, r4, r9
    xor r11, r22, r5
    add r4, r8, r3
    subis r9, r22, 0x359d
    rotrwi r3, r5, 2
    xor r22, r11, r21
    lwz r12, 0x184(r1)
    rotlwi r5, r4, 5
    subi r10, r10, 0x3e2a
    xor r8, r21, r4
    add r5, r5, r10
    add r12, r12, r22
    add r5, r12, r5
    subis r11, r21, 0x359d
    xor r21, r8, r3
    lwz r10, 0x188(r1)
    subi r12, r9, 0x3e2a
    rotlwi r9, r5, 5
    add r9, r9, r12
    add r10, r10, r21
    subis r8, r3, 0x359d
    xor r3, r3, r5
    rotrwi r4, r4, 2
    add r9, r10, r9
    xor r21, r3, r4
    lwz r12, 0x18c(r1)
    subi r3, r11, 0x3e2a
    rotlwi r10, r9, 5
    add r11, r12, r21
    rotrwi r5, r5, 2
    add r10, r10, r3
    xor r3, r4, r9
    add r10, r11, r10
    subi r11, r8, 0x3e2a
    xor r21, r3, r5
    lwz r12, 0x190(r1)
    rotlwi r8, r10, 5
    rotrwi r3, r9, 2
    add r9, r12, r21
    add r8, r8, r11
    add r8, r9, r8
    xor r9, r5, r10
    subis r4, r4, 0x359d
    xor r21, r9, r3
    lwz r24, 0x194(r1)
    subi r12, r4, 0x3e2a
    subis r11, r5, 0x359d
    rotlwi r9, r8, 5
    add r24, r24, r21
    add r5, r9, r12
    rotrwi r4, r10, 2
    add r9, r24, r5
    xor r10, r3, r8
    xor r22, r10, r4
    rotrwi r21, r8, 2
    subis r10, r3, 0x359d
    xor r5, r4, r9
    lwz r12, 0x198(r1)
    rotlwi r8, r9, 5
    subi r11, r11, 0x3e2a
    rotrwi r3, r9, 2
    add r9, r12, r22
    subi r12, r10, 0x3e2a
    add r8, r8, r11
    lwz r24, 0x19c(r1)
    add r8, r9, r8
    xor r22, r5, r21
    rotlwi r5, r8, 5
    subis r4, r4, 0x359d
    add r5, r5, r12
    add r24, r24, r22
    add r5, r24, r5
    xor r9, r21, r8
    subis r11, r21, 0x359d
    subi r24, r4, 0x3e2a
    xor r21, r9, r3
    lwz r12, 0x1a0(r1)
    subis r10, r3, 0x359d
    rotlwi r9, r5, 5
    rotrwi r4, r8, 2
    add r12, r12, r21
    add r8, r9, r24
    xor r3, r3, r5
    add r9, r12, r8
    lwz r24, 0x1a4(r1)
    xor r21, r3, r4
    subi r12, r11, 0x3e2a
    rotlwi r8, r9, 5
    rotrwi r3, r5, 2
    add r8, r8, r12
    add r11, r24, r21
    xor r5, r4, r9
    lwz r12, 0x1a8(r1)
    add r8, r11, r8
    subi r11, r10, 0x3e2a
    xor r21, r5, r3
    rotlwi r5, r8, 5
    add r10, r12, r21
    add r5, r5, r11
    add r5, r10, r5
    rotrwi r22, r9, 2
    subis r9, r4, 0x359d
    xor r10, r3, r8
    lwz r12, 0x1ac(r1)
    xor r23, r10, r22
    subi r11, r9, 0x3e2a
    subis r10, r3, 0x359d
    rotlwi r4, r5, 5
    add r9, r12, r23
    rotrwi r21, r8, 2
    add r3, r4, r11
    xor r8, r22, r5
    add r4, r9, r3
    rotrwi r12, r5, 2
    subis r5, r22, 0x359d
    xor r22, r8, r21
    lwz r11, 0x1b0(r1)
    subis r3, r21, 0x359d
    xor r9, r21, r4
    rotlwi r23, r4, 5
    subi r10, r10, 0x3e2a
    rotrwi r8, r4, 2
    add r11, r11, r22
    lwz r4, 0x1b4(r1)
    add r10, r23, r10
    xor r21, r9, r12
    add r23, r11, r10
    subis r11, r12, 0x359d
    xor r9, r12, r23
    subi r10, r5, 0x3e2a
    rotlwi r20, r23, 5
    add r12, r4, r21
    add r10, r20, r10
    lwz r4, 0x1b8(r1)
    add r20, r12, r10
    xor r9, r9, r8
    subi r3, r3, 0x3e2a
    rotrwi r5, r23, 2
    rotlwi r12, r20, 5
    add r9, r4, r9
    add r4, r12, r3
    xor r3, r8, r20
    add r12, r9, r4
    lwz r24, 0x1bc(r1)
    rotrwi r4, r20, 2
    xor r21, r3, r5
    xor r10, r5, r12
    rotrwi r3, r12, 2
    rotlwi r9, r12, 5
    subi r12, r11, 0x3e2a
    add r9, r9, r12
    add r11, r24, r21
    add r9, r11, r9
    xor r10, r10, r4
    subis r8, r8, 0x359d
    lwz r12, 0x1c0(r1)
    add r11, r8, r10
    xor r10, r4, r9
    subis r8, r5, 0x359d
    rotrwi r5, r9, 2
    rotlwi r20, r9, 5
    add r11, r11, r12
    xor r10, r10, r3
    lwz r9, 0x1c4(r1)
    add r11, r11, r20
    add r29, r29, r5
    add r8, r8, r10
    add r28, r28, r3
    subi r20, r11, 0x3e2a
    add r27, r27, r4
    rotlwi r10, r20, 5
    add r5, r8, r9
    add r5, r5, r10
    add r30, r30, r20
    subi r10, r5, 0x3e2a
    subi r7, r7, 0x40
    add r31, r31, r10
lbl_fn_806AA7E0_00002AC8:
    cmpwi r7, 0x40
    beq lbl_fn_806AA7E0_00001B8C
    bge lbl_fn_806AA7E0_00002AE8
    cmpwi r7, 0x3f
    bge lbl_fn_806AA7E0_00001B84
    cmpwi r7, 0x1
    bge lbl_fn_806AA7E0_00001B9C
    b lbl_fn_806AA7E0_00002AF4
lbl_fn_806AA7E0_00002AE8:
    cmpwi r7, 0x80
    beq lbl_fn_806AA7E0_00001B94
    b lbl_fn_806AA7E0_00001B9C
lbl_fn_806AA7E0_00002AF4:
    stw r31, 0x0(r25)
    addi r11, r1, 0x200
    stw r30, 0x4(r25)
    stw r29, 0x8(r25)
    stw r28, 0xc(r25)
    stw r27, 0x10(r25)
    bl _restgpr_20
    lwz r0, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}
