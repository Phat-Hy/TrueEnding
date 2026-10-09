#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8067E23C(void);
extern void fn_806A4260(void);
extern void fn_806D5850(void);
extern void fn_806D58F0(void);
extern void fn_806D5900(void);
extern void fn_806D5930(void);
extern void fn_806D5A60(void);
extern void fn_806D5C90(void);
extern void fn_806D6560(void);
extern void fn_806D66B0(void);
extern void fn_806D7AC0(void);
extern void fn_806D8F30(void);
extern void fn_806D8F80(void);
extern void fn_806E92D0(void);
extern void fn_806E93E0(void);
extern void fn_806E95D0(void);
extern void fn_806E9700(void);
extern void fn_806E9760(void);
extern void fn_806E97F0(void);
extern void fn_806E9900(void);
extern void fn_806E99F0(void);
extern void fn_806E9AD0(void);
extern void fn_806E9BB0(void);
extern void fn_806E9C70(void);
extern void fn_806E9D30(void);
extern void fn_806E9E40(void);
extern void fn_806EA120(void);
extern void fn_806EA1E0(void);
extern void fn_806EA2C0(void);
extern void fn_806EA370(void);
extern void fn_806EA3E0(void);
extern void fn_806ECF70(void);
extern void fn_806ED370(void);
extern void fn_806ED9D0(void);
extern void fn_806EDD80(void);
extern void fn_806EDE80(void);
extern void fn_806EDF70(void);
extern void fn_806EE0F0(void);
extern void fn_806EE2A0(void);
extern void fn_806EE4E0(void);
extern void fn_806EE550(void);
extern void fn_806EE7E0(void);
extern void fn_806EE8B0(void);
extern void fn_806EEBF0(void);
extern void fn_806EEC40(void);
extern void fn_806EEEC0(void);
extern void fn_806EF050(void);

/* External data declarations */
extern u8 lbl_807C4330[];
extern u8 lbl_807C4334[];

/* Small data declarations */

/* Function declarations */
void pad_03_806EA68C_text(void);
void fn_806EA690(void);
void fn_806EA730(void);
void fn_806EA790(void);
void fn_806EA840(void);
void fn_806EA850(void);
void fn_806EA8A0(void);
void fn_806EA8F0(void);
void fn_806EA900(void);
void fn_806EA910(void);
void fn_806EA920(void);
void fn_806EAAD0(void);
void fn_806EABD0(void);
void fn_806EABE0(void);
void fn_806EABF0(void);
void fn_806EAC00(void);
void fn_806EAC20(void);
void fn_806EAC30(void);
void fn_806EAC50(void);
void fn_806EAC90(void);
void fn_806EACA0(void);
void fn_806EACB0(void);
void fn_806EACC0(void);
void fn_806EACD0(void);
void fn_806EACE0(void);
void fn_806EACF0(void);
void fn_806EAD00(void);
void fn_806EAD10(void);
void fn_806EAD20(void);
void fn_806EAD30(void);
void fn_806EAD40(void);
void fn_806EAE70(void);
void fn_806EB1B0(void);
void fn_806EB4C0(void);
void fn_806EBC90(void);
void fn_806EBCB0(void);
void fn_806EBE60(void);
void fn_806EC2C0(void);
void fn_806EC4B0(void);

asm void pad_03_806EA68C_text(void)
{
    nofralloc
    opword 0x00000000
}

asm void fn_806EA690(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    beq lbl_fn_806EA690_00000084
    lwz r0, 0xc(r3)
    cmpwi r0, 0x7
    bge lbl_fn_806EA690_00000090
    stw r3, 0x8(r1)
    beq lbl_fn_806EA690_00000064
    li r0, 0x7
    stw r0, 0xc(r3)
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
lbl_fn_806EA690_00000064:
    mr r3, r31
    bl fn_806EDF70
    mr r3, r31
    li r4, 0x0
    bl fn_806E9BB0
    mr r3, r31
    bl fn_806EE7E0
    b lbl_fn_806EA690_00000090
lbl_fn_806EA690_00000084:
    li r0, 0x6
    stw r0, 0xc(r3)
    bl fn_806ED9D0
lbl_fn_806EA690_00000090:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806EA730(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r3, 0x8(r1)
    lwz r0, 0xc(r3)
    cmpwi r0, 0x7
    beq lbl_fn_806EA730_000000F0
    li r0, 0x7
    stw r0, 0xc(r3)
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
lbl_fn_806EA730_000000F0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806EA790(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x38(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806EA790_0000012C
    mr r3, r0
    bl fn_806D7AC0
lbl_fn_806EA790_0000012C:
    lwz r3, 0x44(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806EA790_0000013C
    bl fn_806D7AC0
lbl_fn_806EA790_0000013C:
    lwz r3, 0x50(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806EA790_0000014C
    bl fn_806D7AC0
lbl_fn_806EA790_0000014C:
    lwz r3, 0x5c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806EA790_0000015C
    bl fn_806D5850
lbl_fn_806EA790_0000015C:
    lwz r3, 0x60(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806EA790_0000016C
    bl fn_806D5850
lbl_fn_806EA790_0000016C:
    lwz r3, 0x98(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806EA790_0000017C
    bl fn_806D5850
lbl_fn_806EA790_0000017C:
    lwz r3, 0x9c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806EA790_0000018C
    bl fn_806D5850
lbl_fn_806EA790_0000018C:
    mr r3, r31
    bl fn_806D7AC0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806EA840(void)
{
    nofralloc
    li r8, 0x0
    b fn_806EE2A0
}

asm void fn_806EA850(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, fn_806EAC20@ha
    li r5, 0x0
    stw r0, 0x14(r1)
    addi r4, r4, fn_806EAC20@l
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0xc(r3)
    bl fn_806D66B0
    mr r3, r31
    bl fn_806EE4E0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806EA8A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_806ECF70
    cmpwi r3, 0x0
    beq lbl_fn_806EA8A0_0000024C
    mr r3, r31
    bl fn_806EEBF0
    cmpwi r3, 0x0
    beq lbl_fn_806EA8A0_0000024C
    mr r3, r31
    bl fn_806EEC40
lbl_fn_806EA8A0_0000024C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806EA8F0(void)
{
    nofralloc
    b fn_806EE550
}

asm void fn_806EA900(void)
{
    nofralloc
    b fn_806EA2C0
}

asm void fn_806EA910(void)
{
    nofralloc
    b fn_806EA370
}

asm void fn_806EA920(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    mr r30, r3
    mr r31, r4
    mr r3, r5
    mr r25, r6
    mr r26, r7
    mr r29, r8
    mr r28, r9
    mr r27, r10
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_806EEEC0
    cmpwi r3, 0x0
    beq lbl_fn_806EA920_000002F4
    lwz r3, 0xc(r1)
    cmpwi r3, 0x0
    beq lbl_fn_806EA920_000002F4
    lhz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_fn_806EA920_000002FC
lbl_fn_806EA920_000002F4:
    li r3, 0x4
    b lbl_fn_806EA920_00000424
lbl_fn_806EA920_000002FC:
    bl fn_806A4260
    clrrwi r3, r3, 29
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    bne lbl_fn_806EA920_00000318
    li r3, 0x4
    b lbl_fn_806EA920_00000424
lbl_fn_806EA920_00000318:
    lwz r5, 0xc(r1)
    mr r3, r30
    lhz r6, 0x8(r1)
    addi r4, r1, 0x10
    bl fn_806EA120
    cmpwi r3, 0x0
    beq lbl_fn_806EA920_00000338
    b lbl_fn_806EA920_00000424
lbl_fn_806EA920_00000338:
    lwz r3, 0x10(r1)
    mr r4, r25
    mr r5, r26
    mr r6, r28
    stw r29, 0x20(r3)
    lwz r3, 0x10(r1)
    bl fn_806EA1E0
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_806EA920_00000370
    lwz r3, 0x10(r1)
    bl fn_806EE7E0
    mr r3, r28
    b lbl_fn_806EA920_00000424
lbl_fn_806EA920_00000370:
    cmpwi r27, 0x0
    bne lbl_fn_806EA920_00000390
    cmpwi r31, 0x0
    beq lbl_fn_806EA920_00000388
    lwz r0, 0x10(r1)
    stw r0, 0x0(r31)
lbl_fn_806EA920_00000388:
    li r3, 0x0
    b lbl_fn_806EA920_00000424
lbl_fn_806EA920_00000390:
    lwz r4, 0x10(r1)
    li r28, 0x5
    li r29, 0x0
    lwz r3, 0x24(r4)
    addi r0, r3, 0x1
    stw r0, 0x24(r4)
lbl_fn_806EA920_000003A8:
    mr r3, r30
    bl fn_806ECF70
    cmpwi r3, 0x0
    beq lbl_fn_806EA920_000003D0
    mr r3, r30
    bl fn_806EEBF0
    cmpwi r3, 0x0
    beq lbl_fn_806EA920_000003D0
    mr r3, r30
    bl fn_806EEC40
lbl_fn_806EA920_000003D0:
    lwz r3, 0x10(r1)
    lwz r0, 0xc(r3)
    srawi r3, r0, 31
    subfc r0, r28, r0
    adde. r27, r3, r29
    bne lbl_fn_806EA920_000003F0
    li r3, 0x1
    bl fn_806D8F80
lbl_fn_806EA920_000003F0:
    cmpwi r27, 0x0
    beq lbl_fn_806EA920_000003A8
    lwz r4, 0x10(r1)
    lwz r3, 0x24(r4)
    subi r0, r3, 0x1
    stw r0, 0x24(r4)
    lwz r3, 0x10(r1)
    lwz r0, 0xc(r3)
    cmpwi r0, 0x5
    bne lbl_fn_806EA920_0000041C
    stw r3, 0x0(r31)
lbl_fn_806EA920_0000041C:
    lwz r3, 0x10(r1)
    lwz r3, 0x18(r3)
lbl_fn_806EA920_00000424:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806EAAD0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r3
    stw r4, 0x8(r1)
    stw r5, 0xc(r1)
    lwz r0, 0xc(r3)
    cmpwi r0, 0x5
    beq lbl_fn_806EAAD0_0000047C
    li r3, 0x8
    b lbl_fn_806EAAD0_00000528
lbl_fn_806EAAD0_0000047C:
    addi r3, r1, 0x8
    addi r4, r1, 0xc
    bl fn_806EF050
    cmpwi r31, 0x0
    beq lbl_fn_806EAAD0_000004D4
    lwz r3, 0x8(r30)
    lwz r0, 0x40(r3)
    cmpwi r0, 0x2
    bne lbl_fn_806EAAD0_000004D4
    lwz r4, 0x8(r1)
    addi r3, r1, 0x10
    li r5, 0x2
    bl memcpy
    lwz r3, 0x8(r30)
    lhz r4, 0x10(r1)
    lwz r0, 0x44(r3)
    lwz r3, 0xc(r1)
    add r0, r4, r0
    cmpw r3, r0
    beq lbl_fn_806EAAD0_000004D4
    li r3, 0x9
    b lbl_fn_806EAAD0_00000528
lbl_fn_806EAAD0_000004D4:
    lwz r3, 0x98(r30)
    bl fn_806D58F0
    cmpwi r3, 0x0
    beq lbl_fn_806EAAD0_00000504
    lwz r5, 0x8(r1)
    mr r3, r30
    lwz r6, 0xc(r1)
    mr r7, r31
    li r4, 0x0
    bl fn_806E9D30
    li r3, 0x0
    b lbl_fn_806EAAD0_00000528
lbl_fn_806EAAD0_00000504:
    lwz r4, 0x8(r1)
    mr r3, r30
    lwz r5, 0xc(r1)
    mr r6, r31
    bl fn_806EE0F0
    cmpwi r3, 0x0
    li r3, 0xa
    beq lbl_fn_806EAAD0_00000528
    li r3, 0x0
lbl_fn_806EAAD0_00000528:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806EABD0(void)
{
    nofralloc
    b fn_806EDE80
}

asm void fn_806EABE0(void)
{
    nofralloc
    li r4, 0x1
    b fn_806EA690
}

asm void fn_806EABF0(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    li r4, 0x0
    b fn_806EA690
}

asm void fn_806EAC00(void)
{
    nofralloc
    lis r4, fn_806EABF0@ha
    lwz r3, 0xc(r3)
    addi r4, r4, fn_806EABF0@l
    li r5, 0x0
    b fn_806D66B0
}

asm void fn_806EAC20(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    li r4, 0x1
    b fn_806EA690
}

asm void fn_806EAC30(void)
{
    nofralloc
    lis r4, fn_806EAC20@ha
    lwz r3, 0xc(r3)
    addi r4, r4, fn_806EAC20@l
    li r5, 0x0
    b fn_806D66B0
}

asm void fn_806EAC50(void)
{
    nofralloc
    lwz r0, 0xc(r3)
    cmpwi r0, 0x5
    bge lbl_fn_806EAC50_000005D8
    li r3, 0x0
    blr
lbl_fn_806EAC50_000005D8:
    bne lbl_fn_806EAC50_000005E4
    li r3, 0x1
    blr
lbl_fn_806EAC50_000005E4:
    cmpwi r0, 0x6
    li r3, 0x3
    bnelr
    li r3, 0x2
    blr
}

asm void fn_806EAC90(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_806EACA0(void)
{
    nofralloc
    lhz r3, 0x4(r3)
    blr
}

asm void fn_806EACB0(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_806EACC0(void)
{
    nofralloc
    lhz r3, 0x8(r3)
    blr
}

asm void fn_806EACD0(void)
{
    nofralloc
    lwz r4, 0x4c(r3)
    lwz r0, 0x48(r3)
    subf r3, r4, r0
    blr
}

asm void fn_806EACE0(void)
{
    nofralloc
    lwz r3, 0x54(r3)
    blr
}

asm void fn_806EACF0(void)
{
    nofralloc
    lwz r4, 0x58(r3)
    lwz r0, 0x54(r3)
    subf r3, r4, r0
    blr
}

asm void fn_806EAD00(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_806EAD10(void)
{
    nofralloc
    stw r4, 0x30(r3)
    blr
}

asm void fn_806EAD20(void)
{
    nofralloc
    stw r4, 0x40(r3)
    blr
}

asm void fn_806EAD30(void)
{
    nofralloc
    lwz r3, 0x40(r3)
    blr
}

asm void fn_806EAD40(void)
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
    lwz r3, 0x60(r3)
    bl fn_806D58F0
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806EAD40_000006F4
    li r3, 0x1
    b lbl_fn_806EAD40_000007C4
lbl_fn_806EAD40_000006F4:
    li r30, 0x0
    b lbl_fn_806EAD40_0000071C
lbl_fn_806EAD40_000006FC:
    lwz r3, 0x60(r28)
    mr r4, r30
    bl fn_806D5900
    lhz r0, 0x8(r3)
    subf r0, r29, r0
    extsh. r0, r0
    bge lbl_fn_806EAD40_00000724
    addi r30, r30, 0x1
lbl_fn_806EAD40_0000071C:
    cmpw r30, r31
    blt lbl_fn_806EAD40_000006FC
lbl_fn_806EAD40_00000724:
    cmpwi r30, 0x0
    bne lbl_fn_806EAD40_00000744
    li r3, 0x1
    b lbl_fn_806EAD40_000007C4
    b lbl_fn_806EAD40_00000744
lbl_fn_806EAD40_00000738:
    lwz r3, 0x60(r28)
    mr r4, r30
    bl fn_806D5C90
lbl_fn_806EAD40_00000744:
    cmpwi r30, 0x0
    subi r30, r30, 0x1
    bne lbl_fn_806EAD40_00000738
    lwz r3, 0x60(r28)
    bl fn_806D58F0
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806EAD40_00000774
    li r0, 0x0
    stw r0, 0x58(r28)
    li r3, 0x1
    b lbl_fn_806EAD40_000007C4
lbl_fn_806EAD40_00000774:
    lwz r3, 0x60(r28)
    li r4, 0x0
    bl fn_806D5900
    lwz r29, 0x0(r3)
    li r30, 0x0
    b lbl_fn_806EAD40_000007A8
lbl_fn_806EAD40_0000078C:
    lwz r3, 0x60(r28)
    mr r4, r30
    bl fn_806D5900
    lwz r0, 0x0(r3)
    addi r30, r30, 0x1
    subf r0, r29, r0
    stw r0, 0x0(r3)
lbl_fn_806EAD40_000007A8:
    cmpw r30, r31
    blt lbl_fn_806EAD40_0000078C
    mr r5, r29
    addi r3, r28, 0x50
    li r4, 0x0
    bl fn_806E97F0
    li r3, 0x1
lbl_fn_806EAD40_000007C4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806EAE70(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r4
    lwz r6, 0xc(r3)
    cmpwi r6, 0x0
    beq lbl_fn_806EAE70_000008A4
    cmpwi r6, 0x5
    bge lbl_fn_806EAE70_00000868
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806EAE70_0000084C
    bl fn_806EA730
    mr r3, r31
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    cmpwi r3, 0x0
    bne lbl_fn_806EAE70_00000890
    li r3, 0x0
    b lbl_fn_806EAE70_00000894
lbl_fn_806EAE70_0000084C:
    cmpwi r6, 0x4
    bne lbl_fn_806EAE70_0000085C
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_fn_806EAE70_0000085C:
    mr r3, r31
    bl fn_806EA730
    b lbl_fn_806EAE70_00000890
lbl_fn_806EAE70_00000868:
    cmpwi r6, 0x7
    beq lbl_fn_806EAE70_00000890
    bl fn_806EA730
    mr r3, r31
    li r4, 0x2
    bl fn_806E9BB0
    cmpwi r3, 0x0
    bne lbl_fn_806EAE70_00000890
    li r3, 0x0
    b lbl_fn_806EAE70_00000894
lbl_fn_806EAE70_00000890:
    li r3, 0x1
lbl_fn_806EAE70_00000894:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_806EAE70_00000AFC
lbl_fn_806EAE70_000008A4:
    cmpwi r5, 0x40
    bge lbl_fn_806EAE70_00000940
    cmpwi r6, 0x5
    bge lbl_fn_806EAE70_00000904
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806EAE70_000008E8
    bl fn_806EA730
    mr r3, r31
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    cmpwi r3, 0x0
    bne lbl_fn_806EAE70_0000092C
    li r3, 0x0
    b lbl_fn_806EAE70_00000930
lbl_fn_806EAE70_000008E8:
    cmpwi r6, 0x4
    bne lbl_fn_806EAE70_000008F8
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_fn_806EAE70_000008F8:
    mr r3, r31
    bl fn_806EA730
    b lbl_fn_806EAE70_0000092C
lbl_fn_806EAE70_00000904:
    cmpwi r6, 0x7
    beq lbl_fn_806EAE70_0000092C
    bl fn_806EA730
    mr r3, r31
    li r4, 0x2
    bl fn_806E9BB0
    cmpwi r3, 0x0
    bne lbl_fn_806EAE70_0000092C
    li r3, 0x0
    b lbl_fn_806EAE70_00000930
lbl_fn_806EAE70_0000092C:
    li r3, 0x1
lbl_fn_806EAE70_00000930:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_806EAE70_00000AFC
lbl_fn_806EAE70_00000940:
    mr r3, r29
    addi r4, r31, 0x68
    bl fn_806E95D0
    cmpwi r3, 0x0
    bne lbl_fn_806EAE70_000009F4
    lwz r3, 0xc(r31)
    cmpwi r3, 0x5
    bge lbl_fn_806EAE70_000009B4
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806EAE70_00000998
    mr r3, r31
    bl fn_806EA730
    mr r3, r31
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    cmpwi r3, 0x0
    bne lbl_fn_806EAE70_000009E0
    li r3, 0x0
    b lbl_fn_806EAE70_000009E4
lbl_fn_806EAE70_00000998:
    cmpwi r3, 0x4
    bne lbl_fn_806EAE70_000009A8
    li r0, 0x1
    stw r0, 0x14(r31)
lbl_fn_806EAE70_000009A8:
    mr r3, r31
    bl fn_806EA730
    b lbl_fn_806EAE70_000009E0
lbl_fn_806EAE70_000009B4:
    cmpwi r3, 0x7
    beq lbl_fn_806EAE70_000009E0
    mr r3, r31
    bl fn_806EA730
    mr r3, r31
    li r4, 0x2
    bl fn_806E9BB0
    cmpwi r3, 0x0
    bne lbl_fn_806EAE70_000009E0
    li r3, 0x0
    b lbl_fn_806EAE70_000009E4
lbl_fn_806EAE70_000009E0:
    li r3, 0x1
lbl_fn_806EAE70_000009E4:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_806EAE70_00000AFC
lbl_fn_806EAE70_000009F4:
    addi r3, r1, 0x10
    addi r4, r29, 0x20
    bl fn_806E93E0
    lwz r4, 0x8(r31)
    mr r3, r31
    lwz r29, 0x3c(r31)
    addi r6, r1, 0x8
    lwz r0, 0x44(r4)
    li r4, 0x3
    lwz r30, 0x38(r31)
    add r5, r29, r0
    addi r5, r5, 0x27
    bl fn_806ED370
    cmpwi r3, 0x0
    bne lbl_fn_806EAE70_00000A38
    li r0, 0x0
    b lbl_fn_806EAE70_00000AC8
lbl_fn_806EAE70_00000A38:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806EAE70_00000A4C
    li r0, 0x1
    b lbl_fn_806EAE70_00000AC8
lbl_fn_806EAE70_00000A4C:
    addi r3, r31, 0x50
    addi r4, r1, 0x10
    li r5, 0x20
    bl fn_806E9760
    mr r4, r30
    mr r5, r29
    addi r3, r31, 0x50
    bl fn_806E9760
    lwz r3, 0x60(r31)
    bl fn_806D58F0
    mr r4, r3
    lwz r3, 0x60(r31)
    subi r4, r4, 0x1
    bl fn_806D5900
    mr r5, r3
    lwz r0, 0x0(r3)
    lwz r4, 0x50(r31)
    mr r3, r31
    lwz r5, 0x4(r5)
    add r4, r4, r0
    bl fn_806EA3E0
    cmpwi r3, 0x0
    bne lbl_fn_806EAE70_00000AB0
    li r3, 0x0
    b lbl_fn_806EAE70_00000ABC
lbl_fn_806EAE70_00000AB0:
    li r0, 0x0
    stw r0, 0x90(r31)
    li r3, 0x1
lbl_fn_806EAE70_00000ABC:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_806EAE70_00000AC8:
    cmpwi r0, 0x0
    bne lbl_fn_806EAE70_00000AD8
    li r3, 0x0
    b lbl_fn_806EAE70_00000AFC
lbl_fn_806EAE70_00000AD8:
    lwz r3, 0x38(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806EAE70_00000AF0
    bl fn_806D7AC0
    li r0, 0x0
    stw r0, 0x38(r31)
lbl_fn_806EAE70_00000AF0:
    li r0, 0x1
    stw r0, 0xc(r31)
    li r3, 0x1
lbl_fn_806EAE70_00000AFC:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806EB1B0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lwz r6, 0xc(r3)
    mr r31, r3
    mr r29, r4
    mr r28, r5
    cmpwi r6, 0x3
    beq lbl_fn_806EB1B0_00000BE4
    cmpwi r6, 0x5
    bge lbl_fn_806EB1B0_00000BA8
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806EB1B0_00000B8C
    bl fn_806EA730
    mr r3, r31
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    cmpwi r3, 0x0
    bne lbl_fn_806EB1B0_00000BD0
    li r3, 0x0
    b lbl_fn_806EB1B0_00000BD4
lbl_fn_806EB1B0_00000B8C:
    cmpwi r6, 0x4
    bne lbl_fn_806EB1B0_00000B9C
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_fn_806EB1B0_00000B9C:
    mr r3, r31
    bl fn_806EA730
    b lbl_fn_806EB1B0_00000BD0
lbl_fn_806EB1B0_00000BA8:
    cmpwi r6, 0x7
    beq lbl_fn_806EB1B0_00000BD0
    bl fn_806EA730
    mr r3, r31
    li r4, 0x2
    bl fn_806E9BB0
    cmpwi r3, 0x0
    bne lbl_fn_806EB1B0_00000BD0
    li r3, 0x0
    b lbl_fn_806EB1B0_00000BD4
lbl_fn_806EB1B0_00000BD0:
    li r3, 0x1
lbl_fn_806EB1B0_00000BD4:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_806EB1B0_00000E18
lbl_fn_806EB1B0_00000BE4:
    cmpwi r5, 0x20
    bge lbl_fn_806EB1B0_00000C80
    cmpwi r6, 0x5
    bge lbl_fn_806EB1B0_00000C44
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806EB1B0_00000C28
    bl fn_806EA730
    mr r3, r31
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    cmpwi r3, 0x0
    bne lbl_fn_806EB1B0_00000C6C
    li r3, 0x0
    b lbl_fn_806EB1B0_00000C70
lbl_fn_806EB1B0_00000C28:
    cmpwi r6, 0x4
    bne lbl_fn_806EB1B0_00000C38
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_fn_806EB1B0_00000C38:
    mr r3, r31
    bl fn_806EA730
    b lbl_fn_806EB1B0_00000C6C
lbl_fn_806EB1B0_00000C44:
    cmpwi r6, 0x7
    beq lbl_fn_806EB1B0_00000C6C
    bl fn_806EA730
    mr r3, r31
    li r4, 0x2
    bl fn_806E9BB0
    cmpwi r3, 0x0
    bne lbl_fn_806EB1B0_00000C6C
    li r3, 0x0
    b lbl_fn_806EB1B0_00000C70
lbl_fn_806EB1B0_00000C6C:
    li r3, 0x1
lbl_fn_806EB1B0_00000C70:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_806EB1B0_00000E18
lbl_fn_806EB1B0_00000C80:
    mr r3, r29
    addi r4, r31, 0x68
    bl fn_806E95D0
    cmpwi r3, 0x0
    bne lbl_fn_806EB1B0_00000D34
    lwz r3, 0xc(r31)
    cmpwi r3, 0x5
    bge lbl_fn_806EB1B0_00000CF4
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806EB1B0_00000CD8
    mr r3, r31
    bl fn_806EA730
    mr r3, r31
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    cmpwi r3, 0x0
    bne lbl_fn_806EB1B0_00000D20
    li r3, 0x0
    b lbl_fn_806EB1B0_00000D24
lbl_fn_806EB1B0_00000CD8:
    cmpwi r3, 0x4
    bne lbl_fn_806EB1B0_00000CE8
    li r0, 0x1
    stw r0, 0x14(r31)
lbl_fn_806EB1B0_00000CE8:
    mr r3, r31
    bl fn_806EA730
    b lbl_fn_806EB1B0_00000D20
lbl_fn_806EB1B0_00000CF4:
    cmpwi r3, 0x7
    beq lbl_fn_806EB1B0_00000D20
    mr r3, r31
    bl fn_806EA730
    mr r3, r31
    li r4, 0x2
    bl fn_806E9BB0
    cmpwi r3, 0x0
    bne lbl_fn_806EB1B0_00000D20
    li r3, 0x0
    b lbl_fn_806EB1B0_00000D24
lbl_fn_806EB1B0_00000D20:
    li r3, 0x1
lbl_fn_806EB1B0_00000D24:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_806EB1B0_00000E18
lbl_fn_806EB1B0_00000D34:
    lwz r27, 0x8(r31)
    lwz r0, 0x20(r27)
    cmpwi r0, 0x0
    bne lbl_fn_806EB1B0_00000DDC
    lwz r0, 0x40(r27)
    li r30, 0x0
    lhz r29, 0x4(r31)
    cmpwi r0, 0x2
    lwz r28, 0x0(r31)
    bne lbl_fn_806EB1B0_00000D78
    li r0, 0x3
    sth r0, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    li r30, 0x2
lbl_fn_806EB1B0_00000D78:
    addi r3, r1, 0xc
    lis r4, lbl_807C4330@ha
    add r3, r3, r30
    li r5, 0x2
    addi r4, r4, lbl_807C4330@l
    bl memcpy
    addi r30, r30, 0x2
    addi r6, r1, 0xc
    li r0, 0x68
    stbx r0, r6, r30
    mr r3, r27
    mr r4, r28
    mr r5, r29
    addi r7, r30, 0x1
    bl fn_806EE8B0
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_fn_806EB1B0_00000DCC
    li r3, 0x0
    b lbl_fn_806EB1B0_00000E18
lbl_fn_806EB1B0_00000DCC:
    mr r3, r31
    bl fn_806EA730
    li r3, 0x1
    b lbl_fn_806EB1B0_00000E18
lbl_fn_806EB1B0_00000DDC:
    li r0, 0x4
    stw r0, 0xc(r31)
    bl fn_806D8F30
    lwz r0, 0x8c(r31)
    mr r4, r31
    lwz r5, 0x0(r31)
    addi r8, r29, 0x20
    subf r7, r0, r3
    lwz r3, 0x8(r31)
    lhz r6, 0x4(r31)
    subi r9, r28, 0x20
    bl fn_806E9900
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_806EB1B0_00000E18:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806EB4C0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_25
    lhz r7, 0x66(r3)
    cmpwi r4, 0x0
    mr r30, r3
    mr r31, r5
    addi r0, r7, 0x1
    sth r0, 0x66(r3)
    mr r25, r6
    bne lbl_fn_806EB4C0_00000F84
    lwz r4, 0xc(r3)
    cmpwi cr1, r4, 0x5
    beq cr1, lbl_fn_806EB4C0_00000F0C
    cmpwi r4, 0x6
    beq lbl_fn_806EB4C0_00000F0C
    bge cr1, lbl_fn_806EB4C0_00000ED0
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806EB4C0_00000EB4
    bl fn_806EA730
    mr r3, r30
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    cmpwi r3, 0x0
    bne lbl_fn_806EB4C0_00000EF8
    li r0, 0x0
    b lbl_fn_806EB4C0_00000EFC
lbl_fn_806EB4C0_00000EB4:
    cmpwi r4, 0x4
    bne lbl_fn_806EB4C0_00000EC4
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_fn_806EB4C0_00000EC4:
    mr r3, r30
    bl fn_806EA730
    b lbl_fn_806EB4C0_00000EF8
lbl_fn_806EB4C0_00000ED0:
    cmpwi r4, 0x7
    beq lbl_fn_806EB4C0_00000EF8
    bl fn_806EA730
    mr r3, r30
    li r4, 0x2
    bl fn_806E9BB0
    cmpwi r3, 0x0
    bne lbl_fn_806EB4C0_00000EF8
    li r0, 0x0
    b lbl_fn_806EB4C0_00000EFC
lbl_fn_806EB4C0_00000EF8:
    li r0, 0x1
lbl_fn_806EB4C0_00000EFC:
    cmpwi r0, 0x0
    bne lbl_fn_806EB4C0_00000F70
    li r0, 0x0
    b lbl_fn_806EB4C0_00000F74
lbl_fn_806EB4C0_00000F0C:
    lwz r3, 0x9c(r3)
    bl fn_806D58F0
    cmpwi r3, 0x0
    beq lbl_fn_806EB4C0_00000F4C
    mr r3, r30
    mr r5, r31
    mr r6, r25
    li r4, 0x0
    li r7, 0x1
    bl fn_806E9E40
    cmpwi r3, 0x0
    bne lbl_fn_806EB4C0_00000F44
    li r0, 0x0
    b lbl_fn_806EB4C0_00000F74
lbl_fn_806EB4C0_00000F44:
    li r0, 0x1
    b lbl_fn_806EB4C0_00000F74
lbl_fn_806EB4C0_00000F4C:
    mr r3, r30
    mr r4, r31
    mr r5, r25
    li r6, 0x1
    bl fn_806E9AD0
    cmpwi r3, 0x0
    bne lbl_fn_806EB4C0_00000F70
    li r0, 0x0
    b lbl_fn_806EB4C0_00000F74
lbl_fn_806EB4C0_00000F70:
    li r0, 0x1
lbl_fn_806EB4C0_00000F74:
    cmpwi r0, 0x0
    bne lbl_fn_806EB4C0_000015DC
    li r3, 0x0
    b lbl_fn_806EB4C0_000015E0
lbl_fn_806EB4C0_00000F84:
    cmpwi r4, 0x1
    bne lbl_fn_806EB4C0_000011F0
    lwz r4, 0xc(r3)
    cmpwi r4, 0x2
    beq lbl_fn_806EB4C0_00001034
    cmpwi r4, 0x5
    bge lbl_fn_806EB4C0_00000FF0
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806EB4C0_00000FD4
    bl fn_806EA730
    mr r3, r30
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    cmpwi r3, 0x0
    bne lbl_fn_806EB4C0_00001018
    li r0, 0x0
    b lbl_fn_806EB4C0_0000101C
lbl_fn_806EB4C0_00000FD4:
    cmpwi r4, 0x4
    bne lbl_fn_806EB4C0_00000FE4
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_fn_806EB4C0_00000FE4:
    mr r3, r30
    bl fn_806EA730
    b lbl_fn_806EB4C0_00001018
lbl_fn_806EB4C0_00000FF0:
    cmpwi r4, 0x7
    beq lbl_fn_806EB4C0_00001018
    bl fn_806EA730
    mr r3, r30
    li r4, 0x2
    bl fn_806E9BB0
    cmpwi r3, 0x0
    bne lbl_fn_806EB4C0_00001018
    li r0, 0x0
    b lbl_fn_806EB4C0_0000101C
lbl_fn_806EB4C0_00001018:
    li r0, 0x1
lbl_fn_806EB4C0_0000101C:
    cmpwi r0, 0x0
    bne lbl_fn_806EB4C0_0000102C
    li r0, 0x0
    b lbl_fn_806EB4C0_000011E0
lbl_fn_806EB4C0_0000102C:
    li r0, 0x1
    b lbl_fn_806EB4C0_000011E0
lbl_fn_806EB4C0_00001034:
    cmpwi r6, 0x20
    bge lbl_fn_806EB4C0_000010D8
    cmpwi r4, 0x5
    bge lbl_fn_806EB4C0_00001094
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806EB4C0_00001078
    bl fn_806EA730
    mr r3, r30
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    cmpwi r3, 0x0
    bne lbl_fn_806EB4C0_000010BC
    li r0, 0x0
    b lbl_fn_806EB4C0_000010C0
lbl_fn_806EB4C0_00001078:
    cmpwi r4, 0x4
    bne lbl_fn_806EB4C0_00001088
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_fn_806EB4C0_00001088:
    mr r3, r30
    bl fn_806EA730
    b lbl_fn_806EB4C0_000010BC
lbl_fn_806EB4C0_00001094:
    cmpwi r4, 0x7
    beq lbl_fn_806EB4C0_000010BC
    bl fn_806EA730
    mr r3, r30
    li r4, 0x2
    bl fn_806E9BB0
    cmpwi r3, 0x0
    bne lbl_fn_806EB4C0_000010BC
    li r0, 0x0
    b lbl_fn_806EB4C0_000010C0
lbl_fn_806EB4C0_000010BC:
    li r0, 0x1
lbl_fn_806EB4C0_000010C0:
    cmpwi r0, 0x0
    bne lbl_fn_806EB4C0_000010D0
    li r0, 0x0
    b lbl_fn_806EB4C0_000011E0
lbl_fn_806EB4C0_000010D0:
    li r0, 0x1
    b lbl_fn_806EB4C0_000011E0
lbl_fn_806EB4C0_000010D8:
    mr r4, r31
    addi r3, r1, 0x20
    bl fn_806E93E0
    addi r3, r1, 0x40
    bl fn_806E92D0
    addi r3, r30, 0x68
    addi r4, r1, 0x40
    bl fn_806E93E0
    lwz r5, 0x8(r30)
    mr r3, r30
    addi r6, r1, 0xc
    li r4, 0x2
    lwz r5, 0x44(r5)
    addi r5, r5, 0x47
    bl fn_806ED370
    cmpwi r3, 0x0
    bne lbl_fn_806EB4C0_00001124
    li r3, 0x0
    b lbl_fn_806EB4C0_000011C4
lbl_fn_806EB4C0_00001124:
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806EB4C0_00001138
    li r3, 0x1
    b lbl_fn_806EB4C0_000011C4
lbl_fn_806EB4C0_00001138:
    addi r3, r30, 0x50
    addi r4, r1, 0x20
    li r5, 0x20
    bl fn_806E9760
    addi r3, r30, 0x50
    addi r4, r1, 0x40
    li r5, 0x20
    bl fn_806E9760
    lwz r3, 0x60(r30)
    bl fn_806D58F0
    mr r4, r3
    lwz r3, 0x60(r30)
    subi r4, r4, 0x1
    bl fn_806D5900
    mr r5, r3
    lwz r0, 0x0(r3)
    lwz r4, 0x50(r30)
    mr r3, r30
    lwz r5, 0x4(r5)
    add r4, r4, r0
    bl fn_806EA3E0
    cmpwi r3, 0x0
    bne lbl_fn_806EB4C0_0000119C
    li r0, 0x0
    b lbl_fn_806EB4C0_000011A8
lbl_fn_806EB4C0_0000119C:
    li r0, 0x0
    stw r0, 0x90(r30)
    li r0, 0x1
lbl_fn_806EB4C0_000011A8:
    cmpwi r0, 0x0
    bne lbl_fn_806EB4C0_000011B8
    li r3, 0x0
    b lbl_fn_806EB4C0_000011C4
lbl_fn_806EB4C0_000011B8:
    lwz r0, 0x88(r30)
    li r3, 0x1
    stw r0, 0x8c(r30)
lbl_fn_806EB4C0_000011C4:
    cmpwi r3, 0x0
    bne lbl_fn_806EB4C0_000011D4
    li r0, 0x0
    b lbl_fn_806EB4C0_000011E0
lbl_fn_806EB4C0_000011D4:
    li r0, 0x3
    stw r0, 0xc(r30)
    li r0, 0x1
lbl_fn_806EB4C0_000011E0:
    cmpwi r0, 0x0
    bne lbl_fn_806EB4C0_000015DC
    li r3, 0x0
    b lbl_fn_806EB4C0_000015E0
lbl_fn_806EB4C0_000011F0:
    cmpwi r4, 0x2
    bne lbl_fn_806EB4C0_00001214
    mr r4, r31
    mr r5, r25
    bl fn_806EAE70
    cmpwi r3, 0x0
    bne lbl_fn_806EB4C0_000015DC
    li r3, 0x0
    b lbl_fn_806EB4C0_000015E0
lbl_fn_806EB4C0_00001214:
    cmpwi r4, 0x3
    bne lbl_fn_806EB4C0_00001238
    mr r4, r31
    mr r5, r25
    bl fn_806EB1B0
    cmpwi r3, 0x0
    bne lbl_fn_806EB4C0_000015DC
    li r3, 0x0
    b lbl_fn_806EB4C0_000015E0
lbl_fn_806EB4C0_00001238:
    cmpwi r4, 0x4
    bne lbl_fn_806EB4C0_0000131C
    lwz r4, 0xc(r3)
    cmpwi r4, 0x1
    beq lbl_fn_806EB4C0_000012E8
    cmpwi r4, 0x5
    bge lbl_fn_806EB4C0_000012A4
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806EB4C0_00001288
    bl fn_806EA730
    mr r3, r30
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    cmpwi r3, 0x0
    bne lbl_fn_806EB4C0_000012CC
    li r0, 0x0
    b lbl_fn_806EB4C0_000012D0
lbl_fn_806EB4C0_00001288:
    cmpwi r4, 0x4
    bne lbl_fn_806EB4C0_00001298
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_fn_806EB4C0_00001298:
    mr r3, r30
    bl fn_806EA730
    b lbl_fn_806EB4C0_000012CC
lbl_fn_806EB4C0_000012A4:
    cmpwi r4, 0x7
    beq lbl_fn_806EB4C0_000012CC
    bl fn_806EA730
    mr r3, r30
    li r4, 0x2
    bl fn_806E9BB0
    cmpwi r3, 0x0
    bne lbl_fn_806EB4C0_000012CC
    li r0, 0x0
    b lbl_fn_806EB4C0_000012D0
lbl_fn_806EB4C0_000012CC:
    li r0, 0x1
lbl_fn_806EB4C0_000012D0:
    cmpwi r0, 0x0
    bne lbl_fn_806EB4C0_000012E0
    li r0, 0x0
    b lbl_fn_806EB4C0_0000130C
lbl_fn_806EB4C0_000012E0:
    li r0, 0x1
    b lbl_fn_806EB4C0_0000130C
lbl_fn_806EB4C0_000012E8:
    li r0, 0x5
    stw r0, 0xc(r3)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_806EB4C0_0000130C:
    cmpwi r0, 0x0
    bne lbl_fn_806EB4C0_000015DC
    li r3, 0x0
    b lbl_fn_806EB4C0_000015E0
lbl_fn_806EB4C0_0000131C:
    cmpwi r4, 0x5
    bne lbl_fn_806EB4C0_0000148C
    lwz r4, 0xc(r3)
    cmpwi r4, 0x1
    beq lbl_fn_806EB4C0_000013CC
    cmpwi r4, 0x5
    bge lbl_fn_806EB4C0_00001388
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806EB4C0_0000136C
    bl fn_806EA730
    mr r3, r30
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    cmpwi r3, 0x0
    bne lbl_fn_806EB4C0_000013B0
    li r0, 0x0
    b lbl_fn_806EB4C0_000013B4
lbl_fn_806EB4C0_0000136C:
    cmpwi r4, 0x4
    bne lbl_fn_806EB4C0_0000137C
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_fn_806EB4C0_0000137C:
    mr r3, r30
    bl fn_806EA730
    b lbl_fn_806EB4C0_000013B0
lbl_fn_806EB4C0_00001388:
    cmpwi r4, 0x7
    beq lbl_fn_806EB4C0_000013B0
    bl fn_806EA730
    mr r3, r30
    li r4, 0x2
    bl fn_806E9BB0
    cmpwi r3, 0x0
    bne lbl_fn_806EB4C0_000013B0
    li r0, 0x0
    b lbl_fn_806EB4C0_000013B4
lbl_fn_806EB4C0_000013B0:
    li r0, 0x1
lbl_fn_806EB4C0_000013B4:
    cmpwi r0, 0x0
    bne lbl_fn_806EB4C0_000013C4
    li r0, 0x0
    b lbl_fn_806EB4C0_0000147C
lbl_fn_806EB4C0_000013C4:
    li r0, 0x1
    b lbl_fn_806EB4C0_0000147C
lbl_fn_806EB4C0_000013CC:
    bl fn_806EA730
    lwz r29, 0x8(r30)
    li r26, 0x0
    lhz r27, 0x4(r30)
    lwz r0, 0x40(r29)
    lwz r28, 0x0(r30)
    cmpwi r0, 0x2
    bne lbl_fn_806EB4C0_00001408
    li r0, 0x3
    sth r0, 0xa(r1)
    addi r3, r1, 0x18
    addi r4, r1, 0xa
    li r5, 0x2
    bl memcpy
    li r26, 0x2
lbl_fn_806EB4C0_00001408:
    addi r3, r1, 0x18
    lis r4, lbl_807C4330@ha
    add r3, r3, r26
    li r5, 0x2
    addi r4, r4, lbl_807C4330@l
    bl memcpy
    addi r26, r26, 0x2
    addi r6, r1, 0x18
    li r0, 0x68
    stbx r0, r6, r26
    mr r3, r29
    mr r4, r28
    mr r5, r27
    addi r7, r26, 0x1
    bl fn_806EE8B0
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_fn_806EB4C0_0000145C
    li r0, 0x0
    b lbl_fn_806EB4C0_0000147C
lbl_fn_806EB4C0_0000145C:
    mr r3, r30
    mr r5, r31
    mr r6, r25
    li r4, 0x2
    bl fn_806E99F0
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_806EB4C0_0000147C:
    cmpwi r0, 0x0
    bne lbl_fn_806EB4C0_000015DC
    li r3, 0x0
    b lbl_fn_806EB4C0_000015E0
lbl_fn_806EB4C0_0000148C:
    cmpwi r4, 0x6
    bne lbl_fn_806EB4C0_000015DC
    lwz r26, 0x8(r3)
    li r29, 0x0
    lhz r28, 0x4(r3)
    lwz r0, 0x40(r26)
    lwz r27, 0x0(r3)
    cmpwi r0, 0x2
    bne lbl_fn_806EB4C0_000014CC
    li r0, 0x3
    sth r0, 0x8(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    li r29, 0x2
lbl_fn_806EB4C0_000014CC:
    addi r3, r1, 0x10
    lis r4, lbl_807C4330@ha
    add r3, r3, r29
    li r5, 0x2
    addi r4, r4, lbl_807C4330@l
    bl memcpy
    addi r29, r29, 0x2
    addi r6, r1, 0x10
    li r0, 0x68
    stbx r0, r6, r29
    mr r3, r26
    mr r4, r27
    mr r5, r28
    addi r7, r29, 0x1
    bl fn_806EE8B0
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_fn_806EB4C0_00001520
    li r0, 0x0
    b lbl_fn_806EB4C0_000015CC
lbl_fn_806EB4C0_00001520:
    lwz r3, 0xc(r30)
    subi r0, r3, 0x6
    cmpwi r3, 0x5
    cntlzw r0, r0
    srwi r26, r0, 5
    bge lbl_fn_806EB4C0_0000158C
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806EB4C0_00001570
    mr r3, r30
    bl fn_806EA730
    mr r3, r30
    li r4, 0x2
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    cmpwi r3, 0x0
    bne lbl_fn_806EB4C0_000015BC
    li r3, 0x0
    b lbl_fn_806EB4C0_000015C0
lbl_fn_806EB4C0_00001570:
    cmpwi r3, 0x4
    bne lbl_fn_806EB4C0_00001580
    li r0, 0x1
    stw r0, 0x14(r30)
lbl_fn_806EB4C0_00001580:
    mr r3, r30
    bl fn_806EA730
    b lbl_fn_806EB4C0_000015BC
lbl_fn_806EB4C0_0000158C:
    cmpwi r3, 0x7
    beq lbl_fn_806EB4C0_000015BC
    mr r3, r30
    bl fn_806EA730
    cntlzw r0, r26
    mr r3, r30
    srwi r4, r0, 5
    bl fn_806E9BB0
    cmpwi r3, 0x0
    bne lbl_fn_806EB4C0_000015BC
    li r3, 0x0
    b lbl_fn_806EB4C0_000015C0
lbl_fn_806EB4C0_000015BC:
    li r3, 0x1
lbl_fn_806EB4C0_000015C0:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_806EB4C0_000015CC:
    cmpwi r0, 0x0
    bne lbl_fn_806EB4C0_000015DC
    li r3, 0x0
    b lbl_fn_806EB4C0_000015E0
lbl_fn_806EB4C0_000015DC:
    li r3, 0x1
lbl_fn_806EB4C0_000015E0:
    addi r11, r1, 0x80
    bl _restgpr_25
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_806EBC90(void)
{
    nofralloc
    lhz r4, 0xc(r4)
    lhz r0, 0xc(r3)
    subf r0, r4, r0
    extsh r3, r0
    blr
}

asm void fn_806EBCB0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_24
    mr r30, r3
    lwz r3, 0x5c(r3)
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r31, r8
    bl fn_806D58F0
    mr r29, r3
    li r28, 0x0
    b lbl_fn_806EBCB0_0000169C
lbl_fn_806EBCB0_00001664:
    lwz r3, 0x5c(r30)
    mr r4, r28
    bl fn_806D5900
    lhz r0, 0xc(r3)
    cmplw r0, r25
    bne lbl_fn_806EBCB0_0000168C
    li r0, 0x0
    stw r0, 0x0(r31)
    li r3, 0x1
    b lbl_fn_806EBCB0_000017B8
lbl_fn_806EBCB0_0000168C:
    subf r0, r25, r0
    extsh. r0, r0
    bgt lbl_fn_806EBCB0_000016A4
    addi r28, r28, 0x1
lbl_fn_806EBCB0_0000169C:
    cmpw r28, r29
    blt lbl_fn_806EBCB0_00001664
lbl_fn_806EBCB0_000016A4:
    addi r3, r30, 0x44
    bl fn_806E9700
    cmpw r3, r27
    bge lbl_fn_806EBCB0_000016C4
    li r0, 0x1
    stw r0, 0x0(r31)
    li r3, 0x1
    b lbl_fn_806EBCB0_000017B8
lbl_fn_806EBCB0_000016C4:
    lwz r0, 0x4c(r30)
    lis r5, fn_806EBC90@ha
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    addi r5, r5, fn_806EBC90@l
    stw r27, 0xc(r1)
    stw r24, 0x10(r1)
    sth r25, 0x14(r1)
    lwz r3, 0x5c(r30)
    bl fn_806D5A60
    lwz r3, 0x5c(r30)
    bl fn_806D58F0
    addi r0, r29, 0x1
    cmpw r0, r3
    beq lbl_fn_806EBCB0_00001710
    li r0, 0x1
    stw r0, 0x0(r31)
    li r3, 0x1
    b lbl_fn_806EBCB0_000017B8
lbl_fn_806EBCB0_00001710:
    mr r4, r26
    mr r5, r27
    addi r3, r30, 0x44
    bl fn_806E9760
    cmpwi r29, 0x0
    bne lbl_fn_806EBCB0_0000174C
    subi r0, r25, 0x1
    lhz r4, 0x66(r30)
    mr r3, r30
    clrlwi r5, r0, 16
    bl fn_806EDD80
    cmpwi r3, 0x0
    bne lbl_fn_806EBCB0_000017AC
    li r3, 0x0
    b lbl_fn_806EBCB0_000017B8
lbl_fn_806EBCB0_0000174C:
    lwz r3, 0x5c(r30)
    mr r4, r29
    bl fn_806D5900
    lhz r0, 0xc(r3)
    cmplw r0, r25
    bne lbl_fn_806EBCB0_000017AC
    lwz r3, 0x5c(r30)
    subi r4, r29, 0x1
    bl fn_806D5900
    lhz r3, 0xc(r3)
    subf r0, r3, r25
    clrlwi r0, r0, 16
    cmplwi r0, 0x1
    ble lbl_fn_806EBCB0_000017AC
    addi r4, r3, 0x1
    subi r0, r25, 0x1
    mr r3, r30
    clrlwi r4, r4, 16
    clrlwi r5, r0, 16
    bl fn_806EDD80
    cmpwi r3, 0x0
    bne lbl_fn_806EBCB0_000017AC
    li r3, 0x0
    b lbl_fn_806EBCB0_000017B8
lbl_fn_806EBCB0_000017AC:
    li r0, 0x0
    stw r0, 0x0(r31)
    li r3, 0x1
lbl_fn_806EBCB0_000017B8:
    addi r11, r1, 0x40
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806EBE60(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r8, 0x8(r3)
    mr r30, r3
    mr r31, r4
    lwz r7, 0x44(r8)
    addi r10, r7, 0x7
    cmpw r6, r10
    bge lbl_fn_806EBE60_0000189C
    lwz r4, 0xc(r3)
    cmpwi r4, 0x5
    bge lbl_fn_806EBE60_00001860
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806EBE60_00001844
    bl fn_806EA730
    mr r3, r30
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    cmpwi r3, 0x0
    bne lbl_fn_806EBE60_00001888
    li r3, 0x0
    b lbl_fn_806EBE60_0000188C
lbl_fn_806EBE60_00001844:
    cmpwi r4, 0x4
    bne lbl_fn_806EBE60_00001854
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_fn_806EBE60_00001854:
    mr r3, r30
    bl fn_806EA730
    b lbl_fn_806EBE60_00001888
lbl_fn_806EBE60_00001860:
    cmpwi r4, 0x7
    beq lbl_fn_806EBE60_00001888
    bl fn_806EA730
    mr r3, r30
    li r4, 0x2
    bl fn_806E9BB0
    cmpwi r3, 0x0
    bne lbl_fn_806EBE60_00001888
    li r3, 0x0
    b lbl_fn_806EBE60_0000188C
lbl_fn_806EBE60_00001888:
    li r3, 0x1
lbl_fn_806EBE60_0000188C:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_806EBE60_00001C10
lbl_fn_806EBE60_0000189C:
    lwz r0, 0x40(r8)
    add r9, r5, r7
    lbz r7, 0x3(r9)
    cmpwi r0, 0x2
    lbz r0, 0x5(r9)
    lbz r29, 0x4(r9)
    rlwimi r29, r7, 8, 16, 23
    lbz r8, 0x6(r9)
    rlwimi r8, r0, 8, 16, 23
    bne lbl_fn_806EBE60_00001900
    cmpwi r4, 0x0
    bne lbl_fn_806EBE60_00001900
    lbz r0, 0x0(r5)
    stb r0, 0x5(r9)
    lwz r4, 0x8(r3)
    lbz r7, 0x1(r5)
    lwz r0, 0x44(r4)
    add r4, r0, r5
    stb r7, 0x6(r4)
    lwz r3, 0x8(r3)
    lwz r0, 0x44(r3)
    subf r0, r0, r10
    add r27, r5, r0
    subf r26, r0, r6
    b lbl_fn_806EBE60_00001908
lbl_fn_806EBE60_00001900:
    add r27, r5, r10
    subf r26, r10, r6
lbl_fn_806EBE60_00001908:
    mr r3, r30
    clrlwi r4, r8, 16
    bl fn_806EAD40
    cmpwi r3, 0x0
    bne lbl_fn_806EBE60_00001924
    li r3, 0x0
    b lbl_fn_806EBE60_00001C10
lbl_fn_806EBE60_00001924:
    lhz r0, 0x66(r30)
    clrlwi r5, r29, 16
    cmplw r5, r0
    bne lbl_fn_806EBE60_00001A7C
    lwz r0, 0x90(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806EBE60_00001950
    li r0, 0x1
    stw r0, 0x90(r30)
    bl fn_806D8F30
    stw r3, 0x94(r30)
lbl_fn_806EBE60_00001950:
    mr r3, r30
    mr r4, r31
    mr r5, r27
    mr r6, r26
    bl fn_806EB4C0
    cmpwi r3, 0x0
    bne lbl_fn_806EBE60_00001974
    li r3, 0x0
    b lbl_fn_806EBE60_00001C10
lbl_fn_806EBE60_00001974:
    lwz r3, 0x5c(r30)
    bl fn_806D58F0
    subi r26, r3, 0x1
    b lbl_fn_806EBE60_00001A58
lbl_fn_806EBE60_00001984:
    lwz r3, 0x5c(r30)
    mr r4, r26
    bl fn_806D5900
    lhz r4, 0xc(r3)
    mr r31, r3
    lhz r0, 0x66(r30)
    cmplw r4, r0
    bne lbl_fn_806EBE60_00001A54
    lwz r5, 0x44(r30)
    mr r3, r30
    lwz r0, 0x0(r31)
    lwz r4, 0x8(r31)
    lwz r6, 0x4(r31)
    add r5, r5, r0
    bl fn_806EB4C0
    cmpwi r3, 0x0
    bne lbl_fn_806EBE60_000019D0
    li r0, 0x0
    b lbl_fn_806EBE60_00001A64
lbl_fn_806EBE60_000019D0:
    lwz r29, 0x0(r31)
    mr r4, r26
    lwz r28, 0x4(r31)
    li r27, 0x0
    lwz r3, 0x5c(r30)
    bl fn_806D5C90
    lwz r3, 0x5c(r30)
    bl fn_806D58F0
    mr r31, r3
    li r26, 0x0
    b lbl_fn_806EBE60_00001A38
lbl_fn_806EBE60_000019FC:
    lwz r3, 0x5c(r30)
    mr r4, r26
    bl fn_806D5900
    lwz r0, 0x0(r3)
    cmpw r0, r29
    ble lbl_fn_806EBE60_00001A34
    subf r4, r28, r0
    stw r4, 0x0(r3)
    lwz r0, 0x4(r3)
    add r0, r4, r0
    cmpw r27, r0
    ble lbl_fn_806EBE60_00001A30
    mr r0, r27
lbl_fn_806EBE60_00001A30:
    mr r27, r0
lbl_fn_806EBE60_00001A34:
    addi r26, r26, 0x1
lbl_fn_806EBE60_00001A38:
    cmpw r26, r31
    blt lbl_fn_806EBE60_000019FC
    mr r4, r29
    mr r5, r28
    addi r3, r30, 0x44
    bl fn_806E97F0
    b lbl_fn_806EBE60_00001974
lbl_fn_806EBE60_00001A54:
    subi r26, r26, 0x1
lbl_fn_806EBE60_00001A58:
    cmpwi r26, 0x0
    bge lbl_fn_806EBE60_00001984
    li r0, 0x1
lbl_fn_806EBE60_00001A64:
    cmpwi r0, 0x0
    bne lbl_fn_806EBE60_00001A74
    li r3, 0x0
    b lbl_fn_806EBE60_00001C10
lbl_fn_806EBE60_00001A74:
    li r3, 0x1
    b lbl_fn_806EBE60_00001C10
lbl_fn_806EBE60_00001A7C:
    subf r0, r0, r29
    extsh. r0, r0
    bge lbl_fn_806EBE60_00001AAC
    lwz r0, 0x90(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806EBE60_00001AA4
    li r0, 0x1
    stw r0, 0x90(r30)
    bl fn_806D8F30
    stw r3, 0x94(r30)
lbl_fn_806EBE60_00001AA4:
    li r3, 0x1
    b lbl_fn_806EBE60_00001C10
lbl_fn_806EBE60_00001AAC:
    mr r3, r30
    mr r4, r31
    mr r6, r27
    mr r7, r26
    addi r8, r1, 0xc
    bl fn_806EBCB0
    cmpwi r3, 0x0
    bne lbl_fn_806EBE60_00001AD4
    li r3, 0x0
    b lbl_fn_806EBE60_00001C10
lbl_fn_806EBE60_00001AD4:
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806EBE60_00001C0C
    lwz r26, 0x8(r30)
    li r29, 0x0
    lhz r28, 0x4(r30)
    lwz r0, 0x40(r26)
    lwz r27, 0x0(r30)
    cmpwi r0, 0x2
    bne lbl_fn_806EBE60_00001B18
    li r0, 0x3
    sth r0, 0x8(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    li r29, 0x2
lbl_fn_806EBE60_00001B18:
    addi r3, r1, 0x10
    lis r4, lbl_807C4330@ha
    add r3, r3, r29
    li r5, 0x2
    addi r4, r4, lbl_807C4330@l
    bl memcpy
    addi r29, r29, 0x2
    addi r6, r1, 0x10
    li r0, 0x68
    stbx r0, r6, r29
    mr r3, r26
    mr r4, r27
    mr r5, r28
    addi r7, r29, 0x1
    bl fn_806EE8B0
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_fn_806EBE60_00001B6C
    li r0, 0x0
    b lbl_fn_806EBE60_00001BFC
lbl_fn_806EBE60_00001B6C:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x5
    bge lbl_fn_806EBE60_00001BCC
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806EBE60_00001BB0
    mr r3, r30
    bl fn_806EA730
    mr r3, r30
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    cmpwi r3, 0x0
    bne lbl_fn_806EBE60_00001BF8
    li r0, 0x0
    b lbl_fn_806EBE60_00001BFC
lbl_fn_806EBE60_00001BB0:
    cmpwi r3, 0x4
    bne lbl_fn_806EBE60_00001BC0
    li r0, 0x1
    stw r0, 0x14(r30)
lbl_fn_806EBE60_00001BC0:
    mr r3, r30
    bl fn_806EA730
    b lbl_fn_806EBE60_00001BF8
lbl_fn_806EBE60_00001BCC:
    cmpwi r3, 0x7
    beq lbl_fn_806EBE60_00001BF8
    mr r3, r30
    bl fn_806EA730
    mr r3, r30
    li r4, 0x4
    bl fn_806E9BB0
    cmpwi r3, 0x0
    bne lbl_fn_806EBE60_00001BF8
    li r0, 0x0
    b lbl_fn_806EBE60_00001BFC
lbl_fn_806EBE60_00001BF8:
    li r0, 0x1
lbl_fn_806EBE60_00001BFC:
    cmpwi r0, 0x0
    bne lbl_fn_806EBE60_00001C0C
    li r3, 0x0
    b lbl_fn_806EBE60_00001C10
lbl_fn_806EBE60_00001C0C:
    li r3, 0x1
lbl_fn_806EBE60_00001C10:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806EC2C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmpwi r5, 0x2
    lbz r0, 0x0(r4)
    lbz r29, 0x1(r4)
    mr r26, r3
    rlwimi r29, r0, 8, 16, 23
    bne lbl_fn_806EC2C0_00001C68
    mr r28, r29
    b lbl_fn_806EC2C0_00001D18
lbl_fn_806EC2C0_00001C68:
    cmpwi r5, 0x4
    bne lbl_fn_806EC2C0_00001C80
    lbz r0, 0x2(r4)
    lbz r28, 0x3(r4)
    rlwimi r28, r0, 8, 16, 23
    b lbl_fn_806EC2C0_00001D18
lbl_fn_806EC2C0_00001C80:
    lwz r4, 0xc(r3)
    cmpwi r4, 0x5
    bge lbl_fn_806EC2C0_00001CDC
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806EC2C0_00001CC0
    bl fn_806EA730
    mr r3, r26
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    cmpwi r3, 0x0
    bne lbl_fn_806EC2C0_00001D04
    li r3, 0x0
    b lbl_fn_806EC2C0_00001D08
lbl_fn_806EC2C0_00001CC0:
    cmpwi r4, 0x4
    bne lbl_fn_806EC2C0_00001CD0
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_fn_806EC2C0_00001CD0:
    mr r3, r26
    bl fn_806EA730
    b lbl_fn_806EC2C0_00001D04
lbl_fn_806EC2C0_00001CDC:
    cmpwi r4, 0x7
    beq lbl_fn_806EC2C0_00001D04
    bl fn_806EA730
    mr r3, r26
    li r4, 0x2
    bl fn_806E9BB0
    cmpwi r3, 0x0
    bne lbl_fn_806EC2C0_00001D04
    li r3, 0x0
    b lbl_fn_806EC2C0_00001D08
lbl_fn_806EC2C0_00001D04:
    li r3, 0x1
lbl_fn_806EC2C0_00001D08:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_806EC2C0_00001E04
lbl_fn_806EC2C0_00001D18:
    lwz r3, 0x60(r3)
    bl fn_806D58F0
    mr r30, r3
    li r27, 0x0
    b lbl_fn_806EC2C0_00001DF8
lbl_fn_806EC2C0_00001D2C:
    lwz r3, 0x60(r26)
    mr r4, r27
    bl fn_806D5900
    lhz r4, 0x8(r3)
    mr r31, r3
    subf r0, r29, r4
    extsh. r0, r0
    blt lbl_fn_806EC2C0_00001DF4
    subf r0, r28, r4
    extsh. r0, r0
    bgt lbl_fn_806EC2C0_00001DF4
    lwz r4, 0x8(r26)
    lwz r0, 0x0(r3)
    mr r3, r26
    lwz r4, 0x44(r4)
    lhz r5, 0x66(r26)
    add r4, r0, r4
    lwz r6, 0x50(r26)
    addi r4, r4, 0x5
    extrwi r0, r5, 8, 16
    stbx r0, r6, r4
    addi r4, r4, 0x1
    stbx r5, r6, r4
    lwz r4, 0x50(r26)
    lwz r0, 0x0(r31)
    lwz r5, 0x4(r31)
    add r4, r4, r0
    bl fn_806EA3E0
    cmpwi r3, 0x0
    bne lbl_fn_806EC2C0_00001DAC
    li r0, 0x0
    b lbl_fn_806EC2C0_00001DE4
lbl_fn_806EC2C0_00001DAC:
    lwz r0, 0x88(r26)
    stw r0, 0xc(r31)
    lwz r3, 0x8(r26)
    lwz r4, 0x50(r26)
    lwz r0, 0x0(r31)
    lwz r3, 0x44(r3)
    add r0, r4, r0
    add r3, r3, r0
    lbz r0, 0x2(r3)
    cmpwi r0, 0x2
    bne lbl_fn_806EC2C0_00001DE0
    lwz r0, 0x88(r26)
    stw r0, 0x8c(r26)
lbl_fn_806EC2C0_00001DE0:
    li r0, 0x1
lbl_fn_806EC2C0_00001DE4:
    cmpwi r0, 0x0
    bne lbl_fn_806EC2C0_00001DF4
    li r3, 0x0
    b lbl_fn_806EC2C0_00001E04
lbl_fn_806EC2C0_00001DF4:
    addi r27, r27, 0x1
lbl_fn_806EC2C0_00001DF8:
    cmpw r27, r30
    blt lbl_fn_806EC2C0_00001D2C
    li r3, 0x1
lbl_fn_806EC2C0_00001E04:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806EC4B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x64
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lwz r7, 0x8(r3)
    lwz r7, 0x44(r7)
    addi r0, r7, 0x3
    add r30, r5, r0
    subf r7, r0, r6
    bne lbl_fn_806EC4B0_00001F2C
    cmpwi r7, 0x2
    beq lbl_fn_806EC4B0_00001F00
    lwz r4, 0xc(r3)
    cmpwi r4, 0x5
    bge lbl_fn_806EC4B0_00001EBC
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806EC4B0_00001EA0
    bl fn_806EA730
    mr r3, r31
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    cmpwi r3, 0x0
    bne lbl_fn_806EC4B0_00001EE4
    li r0, 0x0
    b lbl_fn_806EC4B0_00001EE8
lbl_fn_806EC4B0_00001EA0:
    cmpwi r4, 0x4
    bne lbl_fn_806EC4B0_00001EB0
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_fn_806EC4B0_00001EB0:
    mr r3, r31
    bl fn_806EA730
    b lbl_fn_806EC4B0_00001EE4
lbl_fn_806EC4B0_00001EBC:
    cmpwi r4, 0x7
    beq lbl_fn_806EC4B0_00001EE4
    bl fn_806EA730
    mr r3, r31
    li r4, 0x2
    bl fn_806E9BB0
    cmpwi r3, 0x0
    bne lbl_fn_806EC4B0_00001EE4
    li r0, 0x0
    b lbl_fn_806EC4B0_00001EE8
lbl_fn_806EC4B0_00001EE4:
    li r0, 0x1
lbl_fn_806EC4B0_00001EE8:
    cmpwi r0, 0x0
    bne lbl_fn_806EC4B0_00001EF8
    li r0, 0x0
    b lbl_fn_806EC4B0_00001F1C
lbl_fn_806EC4B0_00001EF8:
    li r0, 0x1
    b lbl_fn_806EC4B0_00001F1C
lbl_fn_806EC4B0_00001F00:
    lbz r0, 0x0(r30)
    lbz r4, 0x1(r30)
    rlwimi r4, r0, 8, 16, 23
    bl fn_806EAD40
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_806EC4B0_00001F1C:
    cmpwi r0, 0x0
    bne lbl_fn_806EC4B0_000020D4
    li r3, 0x0
    b lbl_fn_806EC4B0_000020D8
lbl_fn_806EC4B0_00001F2C:
    cmpwi r4, 0x65
    bne lbl_fn_806EC4B0_00001F50
    mr r4, r30
    mr r5, r7
    bl fn_806EC2C0
    cmpwi r3, 0x0
    bne lbl_fn_806EC4B0_000020D4
    li r3, 0x0
    b lbl_fn_806EC4B0_000020D8
lbl_fn_806EC4B0_00001F50:
    cmpwi r4, 0x66
    bne lbl_fn_806EC4B0_00001F7C
    li r0, 0x67
    stb r0, 0x2(r5)
    mr r4, r5
    mr r5, r6
    bl fn_806EA3E0
    cmpwi r3, 0x0
    bne lbl_fn_806EC4B0_000020D4
    li r3, 0x0
    b lbl_fn_806EC4B0_000020D8
lbl_fn_806EC4B0_00001F7C:
    cmpwi r4, 0x67
    bne lbl_fn_806EC4B0_0000200C
    lwz r0, 0x34(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806EC4B0_00001F98
    li r0, 0x1
    b lbl_fn_806EC4B0_00001FFC
lbl_fn_806EC4B0_00001F98:
    cmplwi r7, 0x8
    beq lbl_fn_806EC4B0_00001FA8
    li r0, 0x1
    b lbl_fn_806EC4B0_00001FFC
lbl_fn_806EC4B0_00001FA8:
    lis r4, lbl_807C4334@ha
    mr r3, r30
    addi r4, r4, lbl_807C4334@l
    li r5, 0x4
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_806EC4B0_00001FCC
    li r0, 0x1
    b lbl_fn_806EC4B0_00001FFC
lbl_fn_806EC4B0_00001FCC:
    addi r3, r1, 0x8
    addi r4, r30, 0x4
    li r5, 0x4
    bl memcpy
    bl fn_806D8F30
    lwz r0, 0x8(r1)
    subf r4, r0, r3
    mr r3, r31
    bl fn_806E9C70
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_806EC4B0_00001FFC:
    cmpwi r0, 0x0
    bne lbl_fn_806EC4B0_000020D4
    li r3, 0x0
    b lbl_fn_806EC4B0_000020D8
lbl_fn_806EC4B0_0000200C:
    cmpwi r4, 0x68
    bne lbl_fn_806EC4B0_000020D4
    lwz r4, 0xc(r3)
    cmpwi cr1, r4, 0x7
    bne cr1, lbl_fn_806EC4B0_00002028
    li r0, 0x1
    b lbl_fn_806EC4B0_000020C4
lbl_fn_806EC4B0_00002028:
    subi r0, r4, 0x6
    cmpwi r4, 0x5
    cntlzw r0, r0
    srwi r30, r0, 5
    bge lbl_fn_806EC4B0_0000208C
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806EC4B0_00002070
    bl fn_806EA730
    mr r3, r31
    li r4, 0x2
    li r5, 0x0
    li r6, 0x0
    bl fn_806E99F0
    cmpwi r3, 0x0
    bne lbl_fn_806EC4B0_000020B4
    li r3, 0x0
    b lbl_fn_806EC4B0_000020B8
lbl_fn_806EC4B0_00002070:
    cmpwi r4, 0x4
    bne lbl_fn_806EC4B0_00002080
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_fn_806EC4B0_00002080:
    mr r3, r31
    bl fn_806EA730
    b lbl_fn_806EC4B0_000020B4
lbl_fn_806EC4B0_0000208C:
    beq cr1, lbl_fn_806EC4B0_000020B4
    bl fn_806EA730
    cntlzw r0, r30
    mr r3, r31
    srwi r4, r0, 5
    bl fn_806E9BB0
    cmpwi r3, 0x0
    bne lbl_fn_806EC4B0_000020B4
    li r3, 0x0
    b lbl_fn_806EC4B0_000020B8
lbl_fn_806EC4B0_000020B4:
    li r3, 0x1
lbl_fn_806EC4B0_000020B8:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_806EC4B0_000020C4:
    cmpwi r0, 0x0
    bne lbl_fn_806EC4B0_000020D4
    li r3, 0x0
    b lbl_fn_806EC4B0_000020D8
lbl_fn_806EC4B0_000020D4:
    li r3, 0x1
lbl_fn_806EC4B0_000020D8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
