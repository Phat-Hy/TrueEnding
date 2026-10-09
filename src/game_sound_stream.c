#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_15(void);
extern void _restgpr_22(void);
extern void _restgpr_26(void);
extern void _savegpr_15(void);
extern void _savegpr_22(void);
extern void _savegpr_26(void);
extern void fn_800A555C(void);
extern void fn_800CB3A0(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_80116FC0(void);
extern void fn_80117214(void);
extern void fn_80117228(void);
extern void fn_801347C8(void);
extern void fn_801CE648(void);
extern void fn_801CE7E8(void);
extern void fn_801CE87C(void);
extern void fn_801CEA50(void);
extern void fn_801CF334(void);
extern void fn_801CFAA8(void);
extern void fn_801D3DF4(void);
extern void fn_801D4E74(void);
extern void fn_801D7DE8(void);
extern void fn_801F45F4(void);
extern void fn_801F4E8C(void);
extern void fn_801F6C80(void);
extern void fn_801F6E78(void);
extern void fn_801F7590(void);
extern void fn_801F7DF0(void);
extern void fn_801F837C(void);
extern void fn_80202118(void);
extern void fn_80202D00(void);
extern void fn_8020BCEC(void);
extern void fn_8020D608(void);
extern void fn_8020DB18(void);
extern void fn_8020ED84(void);
extern void fn_8020EF4C(void);
extern void fn_8020EF80(void);
extern void fn_80219558(void);
extern void fn_804444E8(void);
extern void fn_80444828(void);
extern void fn_80444A50(void);
extern void fn_80444B64(void);
extern void fn_80444C50(void);
extern void fn_804A4294(void);
extern void fn_804A4494(void);
extern void fn_804A62C8(void);
extern void fn_80510D68(void);
extern void fn_80510E98(void);
extern void fn_80510FBC(void);
extern void fn_805657D0(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_8073CA10[];
extern u8 lbl_8073CA20[];
extern u8 lbl_8073CA28[];
extern u8 lbl_80782850[];

/* Small data declarations */
extern u32 lbl_8087EF70;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F580;
extern u32 lbl_808813D0;
extern u32 lbl_80882AD0;
extern u32 lbl_80882AD4;
extern u32 lbl_80882AD8;
extern u32 lbl_80882ADC;
extern u32 lbl_80882AE0;

/* Function declarations */
void fn_801D59A8(void);
void fn_801D5AB0(void);
void fn_801D5F04(void);
void fn_801D6188(void);
void fn_801D6390(void);
void fn_801D6560(void);
void fn_801D6754(void);
void fn_801D694C(void);
void fn_801D6A88(void);
void fn_801D6AB0(void);
void fn_801D6C1C(void);
void fn_801D6F84(void);
void fn_801D70EC(void);

asm void fn_801D59A8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x4
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r31, lbl_8087EF70
    mr r3, r31
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D59A8_00000068
    addi r3, r1, 0x10
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x8
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_801D59A8_000000F0
lbl_fn_801D59A8_00000068:
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D59A8_000000CC
    addi r3, r1, 0xc
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    addi r3, r1, 0x8
    li r4, 0xa
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x4
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_801D59A8_000000F0
lbl_fn_801D59A8_000000CC:
    lwz r31, 0x80(r30)
    mr r3, r30
    li r4, 0x1
    li r5, 0x3
    bl fn_80510E98
    lwz r0, 0x80(r30)
    cmpw r31, r0
    beq lbl_fn_801D59A8_000000F0
    stw r0, 0x1bb8(r30)
lbl_fn_801D59A8_000000F0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801D5AB0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stmw r24, 0x40(r1)
    mr r31, r3
    lwz r0, 0x1b90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801D5AB0_00000224
    li r0, 0x0
    stw r0, 0x1b90(r3)
    lwz r4, lbl_8087F580
    lwz r0, 0x68(r4)
    cmpwi r0, 0x0
    bne lbl_fn_801D5AB0_00000208
    bl fn_801CF334
    lwz r26, 0x4c(r3)
    mr r3, r31
    bl fn_801CF334
    lwz r4, 0x1bb0(r31)
    lwz r25, 0x48(r3)
    cmpwi r4, 0x1
    bne lbl_fn_801D5AB0_00000174
    lwz r0, 0x1ba8(r31)
    slwi r0, r0, 3
    add r3, r31, r0
    lwz r24, 0x1bd4(r3)
    b lbl_fn_801D5AB0_00000178
lbl_fn_801D5AB0_00000174:
    lwz r24, 0x1ba4(r31)
lbl_fn_801D5AB0_00000178:
    subi r0, r4, 0x1
    li r28, 0x0
    cntlzw r0, r0
    li r30, -0x1
    mulli r27, r26, 0x43c
    srwi r29, r0, 5
lbl_fn_801D5AB0_00000190:
    stw r30, 0x210(r31)
    mr r4, r28
    sth r30, 0x21c(r31)
    stw r24, 0x214(r31)
    stw r29, 0x218(r31)
    stw r30, 0x20c(r31)
    lwz r0, lbl_8087F4F0
    add r3, r0, r27
    addi r3, r3, 0x64ec
    bl fn_801347C8
    mr r8, r3
    mr r3, r31
    mr r4, r26
    mr r5, r25
    mr r6, r28
    li r7, 0x1
    li r9, 0x10
    bl fn_801CEA50
    addi r28, r28, 0x1
    cmpwi r28, 0x4
    blt lbl_fn_801D5AB0_00000190
    li r0, 0x1
    stw r0, 0x1b94(r31)
    addi r3, r1, 0x30
    li r4, 0xf
    bl fn_80117228
    addi r3, r1, 0x30
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D5AB0_00000548
lbl_fn_801D5AB0_00000208:
    addi r3, r1, 0x2c
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x2c
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D5AB0_00000548
lbl_fn_801D5AB0_00000224:
    lwz r0, 0x1b94(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801D5AB0_0000025C
    lwz r4, lbl_8087F1E4
    lwz r3, lbl_8087F580
    lwz r4, 0xddc(r4)
    cmpwi r4, 0x0
    beq lbl_fn_801D5AB0_00000248
    b lbl_fn_801D5AB0_0000024C
lbl_fn_801D5AB0_00000248:
    la r4, lbl_808813D0
lbl_fn_801D5AB0_0000024C:
    bl fn_804A4294
    li r0, 0x0
    stw r0, 0x1b94(r31)
    b lbl_fn_801D5AB0_00000548
lbl_fn_801D5AB0_0000025C:
    lwz r27, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    mr r3, r27
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D5AB0_000003DC
    mr r3, r31
    bl fn_801CF334
    lwz r0, 0x4c(r3)
    li r3, 0x0
    lwz r4, lbl_8087F4F0
    slwi r0, r0, 6
    addis r4, r4, 0x1
    add r4, r4, r0
    lwz r4, -0x7d70(r4)
    bl fn_8020ED84
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_801D5AB0_000002E4
    lwz r28, lbl_8087F580
    li r3, 0x1
    li r4, 0x105
    bl fn_80116FC0
    mr r4, r3
    mr r3, r28
    bl fn_804A4294
    addi r3, r1, 0x28
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x28
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D5AB0_00000548
lbl_fn_801D5AB0_000002E4:
    lwz r0, 0x1bb0(r31)
    cmpwi r0, 0x1
    bne lbl_fn_801D5AB0_00000350
    lwz r3, 0x1ba8(r31)
    lwz r0, 0x1bd0(r31)
    cmpw r3, r0
    bge lbl_fn_801D5AB0_00000334
    lwz r3, lbl_8087F580
    li r4, 0x4
    li r5, 0x1
    bl fn_804A62C8
    li r0, 0x1
    stw r0, 0x1b90(r31)
    addi r3, r1, 0x24
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x24
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D5AB0_00000548
lbl_fn_801D5AB0_00000334:
    addi r3, r1, 0x20
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D5AB0_00000548
lbl_fn_801D5AB0_00000350:
    lwz r3, lbl_8087F4F0
    lwz r0, 0x1ba4(r31)
    addis r3, r3, 0x1
    slwi r0, r0, 6
    add r3, r3, r0
    lwz r0, -0x2ac0(r3)
    cmpwi r0, 0x0
    bge lbl_fn_801D5AB0_000003A8
    lwz r28, lbl_8087F580
    li r3, 0x1
    li r4, 0x107
    bl fn_80116FC0
    mr r4, r3
    mr r3, r28
    bl fn_804A4294
    addi r3, r1, 0x1c
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D5AB0_00000548
lbl_fn_801D5AB0_000003A8:
    lwz r3, lbl_8087F580
    li r4, 0x4
    li r5, 0x1
    bl fn_804A62C8
    li r0, 0x1
    stw r0, 0x1b90(r31)
    addi r3, r1, 0x18
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D5AB0_00000548
lbl_fn_801D5AB0_000003DC:
    mr r3, r27
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D5AB0_00000440
    addi r3, r1, 0x14
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    addi r3, r1, 0x10
    li r4, 0xa
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x4
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_801D5AB0_00000548
lbl_fn_801D5AB0_00000440:
    mr r3, r27
    li r4, 0x0
    li r5, 0xc
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D5AB0_0000049C
    li r0, 0x0
    stw r0, 0x1bb0(r31)
    addi r3, r1, 0xc
    li r4, 0x12
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x1ba4(r31)
    mr r3, r31
    stw r0, 0x80(r31)
    bl fn_801D6F84
    lwz r0, 0x80(r31)
    mr r3, r31
    stw r0, 0x1ba4(r31)
    bl fn_801D3DF4
    b lbl_fn_801D5AB0_00000548
lbl_fn_801D5AB0_0000049C:
    mr r3, r27
    li r4, 0x0
    li r5, 0xd
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D5AB0_000004F8
    li r0, 0x1
    stw r0, 0x1bb0(r31)
    addi r3, r1, 0x8
    li r4, 0x12
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x1ba8(r31)
    mr r3, r31
    stw r0, 0x80(r31)
    bl fn_801D6F84
    lwz r0, 0x80(r31)
    mr r3, r31
    stw r0, 0x1ba8(r31)
    bl fn_801D3DF4
    b lbl_fn_801D5AB0_00000548
lbl_fn_801D5AB0_000004F8:
    lwz r24, 0x80(r31)
    mr r3, r31
    lwz r25, 0x88(r31)
    li r4, 0x1
    li r5, 0x3
    bl fn_80510FBC
    lwz r3, 0x80(r31)
    cmpw r24, r3
    beq lbl_fn_801D5AB0_00000534
    lwz r0, 0x1bb0(r31)
    cmpwi r0, 0x1
    bne lbl_fn_801D5AB0_00000530
    stw r3, 0x1ba8(r31)
    b lbl_fn_801D5AB0_00000534
lbl_fn_801D5AB0_00000530:
    stw r3, 0x1ba4(r31)
lbl_fn_801D5AB0_00000534:
    lwz r0, 0x88(r31)
    cmpw r25, r0
    beq lbl_fn_801D5AB0_00000548
    mr r3, r31
    bl fn_801D6F84
lbl_fn_801D5AB0_00000548:
    lmw r24, 0x40(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_801D5F04(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lwz r0, 0x1b90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801D5F04_00000668
    li r0, 0x0
    stw r0, 0x1b90(r3)
    lwz r4, lbl_8087F580
    lwz r0, 0x68(r4)
    cmpwi r0, 0x0
    bne lbl_fn_801D5F04_0000064C
    bl fn_801CF334
    lwz r3, 0x48(r3)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, lbl_8087F4F0
    slwi r3, r3, 6
    lwz r0, 0x1bac(r31)
    addis r5, r4, 0x1
    add r4, r5, r3
    slwi r0, r0, 6
    add r3, r5, r0
    lwz r0, -0x2c80(r4)
    stw r0, -0x2ac0(r3)
    lwz r0, -0x2c7c(r4)
    stw r0, -0x2abc(r3)
    lwz r0, -0x2c78(r4)
    stw r0, -0x2ab8(r3)
    lwz r0, -0x2c74(r4)
    stw r0, -0x2ab4(r3)
    lwz r0, -0x2c70(r4)
    stw r0, -0x2ab0(r3)
    lwz r0, -0x2c6c(r4)
    stw r0, -0x2aac(r3)
    lwz r0, -0x2c68(r4)
    stw r0, -0x2aa8(r3)
    lwz r0, -0x2c64(r4)
    stw r0, -0x2aa4(r3)
    lwz r4, lbl_8087F1E4
    lwz r3, lbl_8087F580
    lwz r4, 0x8c4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_801D5F04_00000620
    b lbl_fn_801D5F04_00000624
lbl_fn_801D5F04_00000620:
    la r4, lbl_808813D0
lbl_fn_801D5F04_00000624:
    bl fn_804A4294
    mr r3, r31
    bl fn_801D6F84
    addi r3, r1, 0x1c
    li r4, 0xc
    bl fn_80117228
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D5F04_000007C4
lbl_fn_801D5F04_0000064C:
    addi r3, r1, 0x18
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D5F04_000007C4
lbl_fn_801D5F04_00000668:
    lwz r30, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    mr r3, r30
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D5F04_00000724
    mr r3, r31
    bl fn_801CF334
    lwz r0, 0x4c(r3)
    li r3, 0x0
    lwz r4, lbl_8087F4F0
    slwi r0, r0, 6
    addis r4, r4, 0x1
    add r4, r4, r0
    lwz r4, -0x7d70(r4)
    bl fn_8020ED84
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_801D5F04_000006F0
    lwz r31, lbl_8087F580
    li r3, 0x1
    li r4, 0x105
    bl fn_80116FC0
    mr r4, r3
    mr r3, r31
    bl fn_804A4294
    addi r3, r1, 0x14
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D5F04_000007C4
lbl_fn_801D5F04_000006F0:
    lwz r3, lbl_8087F580
    li r4, 0x3
    li r5, 0x1
    bl fn_804A62C8
    li r0, 0x1
    stw r0, 0x1b90(r31)
    addi r3, r1, 0x10
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D5F04_000007C4
lbl_fn_801D5F04_00000724:
    mr r3, r30
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D5F04_00000788
    addi r3, r1, 0xc
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    addi r3, r1, 0x8
    li r4, 0xa
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x4
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_801D5F04_000007C4
lbl_fn_801D5F04_00000788:
    lwz r30, 0x80(r31)
    mr r3, r31
    lwz r29, 0x88(r31)
    li r4, 0x1
    li r5, 0x3
    bl fn_80510FBC
    lwz r0, 0x80(r31)
    cmpw r30, r0
    beq lbl_fn_801D5F04_000007B0
    stw r0, 0x1bac(r31)
lbl_fn_801D5F04_000007B0:
    lwz r0, 0x88(r31)
    cmpw r29, r0
    beq lbl_fn_801D5F04_000007C4
    mr r3, r31
    bl fn_801D6F84
lbl_fn_801D5F04_000007C4:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801D6188(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x4
    stw r0, 0x44(r1)
    stmw r23, 0x1c(r1)
    mr r31, r3
    lwz r23, lbl_8087EF70
    mr r3, r23
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D6188_0000096C
    lwz r0, 0x7c(r31)
    cmpwi r0, 0x8
    bne lbl_fn_801D6188_0000083C
    lwz r3, 0x1f8(r31)
    lwz r0, 0x1fc(r31)
    slwi r3, r3, 7
    add r3, r31, r3
    slwi r0, r0, 4
    add r3, r3, r0
    addi r28, r3, 0xcf8
    b lbl_fn_801D6188_00000868
lbl_fn_801D6188_0000083C:
    cmpwi r0, 0x9
    bne lbl_fn_801D6188_00000864
    lwz r3, 0x200(r31)
    lwz r0, 0x204(r31)
    slwi r3, r3, 6
    add r3, r31, r3
    slwi r0, r0, 4
    add r3, r3, r0
    addi r28, r3, 0x10f8
    b lbl_fn_801D6188_00000868
lbl_fn_801D6188_00000864:
    li r28, 0x0
lbl_fn_801D6188_00000868:
    cmpwi r28, 0x0
    beq lbl_fn_801D6188_000009D4
    lwz r0, 0xc(r28)
    cmpwi r0, 0x0
    beq lbl_fn_801D6188_00000950
    mr r3, r31
    bl fn_801CF334
    lwz r25, 0x4c(r3)
    mr r3, r31
    bl fn_801CF334
    lwz r24, 0x48(r3)
    lwz r27, 0x8(r28)
    lwz r3, 0x1bb8(r31)
    bl fn_80117214
    lwz r4, lbl_8087F4F0
    cmpwi r3, 0x0
    slwi r0, r25, 6
    mr r28, r3
    addis r4, r4, 0x1
    add r4, r4, r0
    subi r4, r4, 0x2c80
    blt lbl_fn_801D6188_000008D0
    slwi r0, r3, 2
    lwzx r0, r4, r0
    cmpw r27, r0
    beq lbl_fn_801D6188_00000934
lbl_fn_801D6188_000008D0:
    mulli r23, r25, 0x43c
    li r26, 0x0
    li r29, -0x1
    li r30, 0x0
lbl_fn_801D6188_000008E0:
    stw r28, 0x210(r31)
    mr r4, r26
    sth r27, 0x21c(r31)
    stw r29, 0x214(r31)
    stw r30, 0x218(r31)
    stw r29, 0x20c(r31)
    lwz r0, lbl_8087F4F0
    add r3, r0, r23
    addi r3, r3, 0x64ec
    bl fn_801347C8
    mr r8, r3
    mr r3, r31
    mr r4, r25
    mr r5, r24
    mr r6, r26
    li r7, 0x1
    li r9, 0x10
    bl fn_801CEA50
    addi r26, r26, 0x1
    cmpwi r26, 0x4
    blt lbl_fn_801D6188_000008E0
lbl_fn_801D6188_00000934:
    addi r3, r1, 0x10
    li r4, 0xf
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D6188_000009D4
lbl_fn_801D6188_00000950:
    addi r3, r1, 0xc
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D6188_000009D4
lbl_fn_801D6188_0000096C:
    mr r3, r23
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D6188_000009B8
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x4
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D6188_000009D4
lbl_fn_801D6188_000009B8:
    mr r3, r31
    addi r4, r31, 0x1f8
    addi r5, r31, 0x1fc
    li r6, 0x8
    li r7, 0x8
    li r8, 0x40
    bl fn_801D7DE8
lbl_fn_801D6188_000009D4:
    lmw r23, 0x1c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_801D6390(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x4
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lwz r29, lbl_8087EF70
    mr r3, r29
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D6390_00000B34
    lwz r0, 0x7c(r31)
    cmpwi r0, 0x8
    bne lbl_fn_801D6390_00000A4C
    lwz r3, 0x1f8(r31)
    lwz r0, 0x1fc(r31)
    slwi r3, r3, 7
    add r3, r31, r3
    slwi r0, r0, 4
    add r3, r3, r0
    addi r30, r3, 0xcf8
    b lbl_fn_801D6390_00000A78
lbl_fn_801D6390_00000A4C:
    cmpwi r0, 0x9
    bne lbl_fn_801D6390_00000A74
    lwz r3, 0x200(r31)
    lwz r0, 0x204(r31)
    slwi r3, r3, 6
    add r3, r31, r3
    slwi r0, r0, 4
    add r3, r3, r0
    addi r30, r3, 0x10f8
    b lbl_fn_801D6390_00000A78
lbl_fn_801D6390_00000A74:
    li r30, 0x0
lbl_fn_801D6390_00000A78:
    cmpwi r30, 0x0
    beq lbl_fn_801D6390_00000B9C
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801D6390_00000B18
    mr r3, r31
    bl fn_801CF334
    lwz r29, 0x4c(r3)
    mr r3, r31
    bl fn_801CF334
    lwz r4, 0x8(r30)
    lwz r3, 0x48(r3)
    cmpwi r4, 0x1f
    bne lbl_fn_801D6390_00000AD8
    cmpwi r3, 0x0
    beq lbl_fn_801D6390_00000AC0
    li r0, 0x0
    stb r0, 0xa05(r3)
lbl_fn_801D6390_00000AC0:
    mulli r0, r29, 0x43c
    lwz r3, lbl_8087F4F0
    li r4, 0x0
    add r3, r3, r0
    stb r4, 0x671d(r3)
    b lbl_fn_801D6390_00000AFC
lbl_fn_801D6390_00000AD8:
    cmpwi r3, 0x0
    addi r0, r4, 0x1
    clrlwi r4, r0, 24
    beq lbl_fn_801D6390_00000AEC
    stb r4, 0xa05(r3)
lbl_fn_801D6390_00000AEC:
    mulli r0, r29, 0x43c
    lwz r3, lbl_8087F4F0
    add r3, r3, r0
    stb r4, 0x671d(r3)
lbl_fn_801D6390_00000AFC:
    addi r3, r1, 0x10
    li r4, 0x10
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D6390_00000B9C
lbl_fn_801D6390_00000B18:
    addi r3, r1, 0xc
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D6390_00000B9C
lbl_fn_801D6390_00000B34:
    mr r3, r29
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D6390_00000B80
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x4
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D6390_00000B9C
lbl_fn_801D6390_00000B80:
    mr r3, r31
    addi r4, r31, 0x200
    addi r5, r31, 0x204
    li r6, 0x8
    li r7, 0x4
    li r8, 0x20
    bl fn_801D7DE8
lbl_fn_801D6390_00000B9C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801D6560(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x4
    stw r0, 0x44(r1)
    stmw r25, 0x24(r1)
    mr r29, r3
    lwz r26, lbl_8087EF70
    mr r3, r26
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D6560_00000CFC
    lwz r0, 0x137c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_801D6560_00000D98
    lwz r0, 0x80(r29)
    mr r3, r29
    slwi r0, r0, 3
    add r4, r29, r0
    lwz r26, 0x1380(r4)
    lwz r28, 0x1384(r4)
    mr r4, r26
    bl fn_801CE7E8
    mr r31, r3
    mr r3, r29
    mr r4, r26
    bl fn_801CE87C
    mr r30, r3
    mr r3, r29
    bl fn_801CF334
    lwz r3, 0x48(r3)
    slwi r0, r26, 2
    mr r4, r26
    add r3, r3, r0
    lwz r27, 0x680(r3)
    lwz r3, 0x414(r27)
    lwz r3, 0xa8(r3)
    bl fn_8020DB18
    cmpwi r30, 0x0
    beq lbl_fn_801D6560_00000CD4
    cmpwi r3, 0x0
    beq lbl_fn_801D6560_00000CD4
    mulli r0, r28, 0x54
    li r25, 0x0
    li r28, 0x1
    add r26, r3, r0
lbl_fn_801D6560_00000C70:
    lwz r4, 0x4(r26)
    cmpwi r4, 0x0
    beq lbl_fn_801D6560_00000CC4
    mr r3, r31
    bl fn_8020D608
    cmpwi r3, 0x0
    blt lbl_fn_801D6560_00000CC4
    lwz r4, 0x0(r30)
    slw r3, r28, r3
    and r0, r3, r4
    cmplw r3, r0
    bne lbl_fn_801D6560_00000CAC
    andc r0, r4, r3
    stw r0, 0x0(r30)
    b lbl_fn_801D6560_00000CB4
lbl_fn_801D6560_00000CAC:
    or r0, r4, r3
    stw r0, 0x0(r30)
lbl_fn_801D6560_00000CB4:
    lwz r4, 0x8(r27)
    mr r3, r27
    mr r5, r30
    bl fn_805657D0
lbl_fn_801D6560_00000CC4:
    addi r25, r25, 0x1
    addi r26, r26, 0x4
    cmplwi r25, 0x3
    blt lbl_fn_801D6560_00000C70
lbl_fn_801D6560_00000CD4:
    addi r3, r1, 0x10
    li r4, 0xf
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r4, 0x1bb4(r29)
    mr r3, r29
    bl fn_801D6C1C
    b lbl_fn_801D6560_00000D98
lbl_fn_801D6560_00000CFC:
    mr r3, r26
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D6560_00000D60
    addi r3, r1, 0xc
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    addi r3, r1, 0x8
    li r4, 0xa
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, 0x4
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_801D6560_00000D98
lbl_fn_801D6560_00000D60:
    lwz r25, 0x80(r29)
    addi r3, r29, 0x80
    lwz r5, 0x84(r29)
    addi r4, r29, 0x88
    lwz r6, 0x8c(r29)
    li r7, 0x1
    li r8, 0x3
    bl fn_804A4494
    lwz r4, 0x80(r29)
    cmpw r25, r4
    beq lbl_fn_801D6560_00000D98
    stw r4, 0x1bb4(r29)
    mr r3, r29
    bl fn_801D6C1C
lbl_fn_801D6560_00000D98:
    lmw r25, 0x24(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_801D6754(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x4
    stw r0, 0x34(r1)
    stmw r27, 0x1c(r1)
    mr r27, r3
    lwz r30, lbl_8087EF70
    mr r3, r30
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D6754_00000F20
    mr r3, r27
    bl fn_801CF334
    lwz r31, 0x4c(r3)
    mr r3, r27
    bl fn_801CF334
    lwz r0, 0x1bc0(r27)
    li r28, 0x0
    lwz r30, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801D6754_00000E20
    cmpwi r0, 0x1
    beq lbl_fn_801D6754_00000E4C
    cmpwi r0, 0x2
    beq lbl_fn_801D6754_00000E78
    cmpwi r0, 0x3
    beq lbl_fn_801D6754_00000EC8
    b lbl_fn_801D6754_00000ECC
lbl_fn_801D6754_00000E20:
    lwz r29, lbl_8087F4F0
    li r4, 0x0
    mr r3, r29
    bl fn_80444A50
    mr r4, r3
    mr r3, r29
    bl fn_804444E8
    cmpwi r3, 0x0
    ble lbl_fn_801D6754_00000ECC
    li r28, 0x1
    b lbl_fn_801D6754_00000ECC
lbl_fn_801D6754_00000E4C:
    lwz r29, lbl_8087F4F0
    li r4, 0x1
    mr r3, r29
    bl fn_80444A50
    mr r4, r3
    mr r3, r29
    bl fn_804444E8
    cmpwi r3, 0x0
    ble lbl_fn_801D6754_00000ECC
    li r28, 0x1
    b lbl_fn_801D6754_00000ECC
lbl_fn_801D6754_00000E78:
    lwz r29, lbl_8087F4F0
    li r4, 0x0
    mr r3, r29
    bl fn_80444A50
    mr r4, r3
    mr r3, r29
    bl fn_804444E8
    cmpwi r3, 0x0
    ble lbl_fn_801D6754_00000ECC
    lwz r29, lbl_8087F4F0
    li r4, 0x1
    mr r3, r29
    bl fn_80444A50
    mr r4, r3
    mr r3, r29
    bl fn_804444E8
    cmpwi r3, 0x0
    ble lbl_fn_801D6754_00000ECC
    li r28, 0x1
    b lbl_fn_801D6754_00000ECC
lbl_fn_801D6754_00000EC8:
    li r28, 0x1
lbl_fn_801D6754_00000ECC:
    cmpwi r28, 0x0
    beq lbl_fn_801D6754_00000F04
    addi r3, r1, 0x10
    li r4, 0xf
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r6, 0x1bc0(r27)
    mr r3, r27
    mr r4, r31
    mr r5, r30
    bl fn_801D694C
    b lbl_fn_801D6754_00000F90
lbl_fn_801D6754_00000F04:
    addi r3, r1, 0xc
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D6754_00000F90
lbl_fn_801D6754_00000F20:
    mr r3, r30
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D6754_00000F6C
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r27)
    mr r3, r27
    li r4, 0x4
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_801D6754_00000F90
lbl_fn_801D6754_00000F6C:
    lwz r28, 0x80(r27)
    mr r3, r27
    li r4, 0x1
    li r5, 0x3
    bl fn_80510D68
    lwz r0, 0x80(r27)
    cmpw r28, r0
    beq lbl_fn_801D6754_00000F90
    stw r0, 0x1bc0(r27)
lbl_fn_801D6754_00000F90:
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801D694C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r6, 0x0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    li r30, 0x0
    li r29, 0x0
    bne lbl_fn_801D694C_00000FDC
    li r30, 0x1
    li r29, 0x0
    b lbl_fn_801D694C_00001014
lbl_fn_801D694C_00000FDC:
    cmpwi r6, 0x1
    bne lbl_fn_801D694C_00000FF0
    li r30, 0x0
    li r29, 0x1
    b lbl_fn_801D694C_00001014
lbl_fn_801D694C_00000FF0:
    cmpwi r6, 0x2
    bne lbl_fn_801D694C_00001004
    li r30, 0x1
    li r29, 0x1
    b lbl_fn_801D694C_00001014
lbl_fn_801D694C_00001004:
    cmpwi r6, 0x3
    bne lbl_fn_801D694C_00001014
    li r30, 0x0
    li r29, 0x0
lbl_fn_801D694C_00001014:
    mulli r0, r4, 0x43c
    lwz r3, lbl_8087F4F0
    li r4, 0x0
    add r3, r3, r0
    addi r31, r3, 0x64ec
    mr r3, r31
    bl fn_801347C8
    cmpw r30, r3
    beq lbl_fn_801D694C_00001078
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r8, r30
    li r6, 0x0
    li r7, 0x0
    li r9, 0x10
    bl fn_801CEA50
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r8, r30
    li r6, 0x2
    li r7, 0x0
    li r9, 0x10
    bl fn_801CEA50
lbl_fn_801D694C_00001078:
    mr r3, r31
    li r4, 0x1
    bl fn_801347C8
    cmpw r29, r3
    beq lbl_fn_801D694C_000010CC
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r8, r29
    li r6, 0x1
    li r7, 0x0
    li r9, 0x10
    bl fn_801CEA50
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r8, r29
    li r6, 0x3
    li r7, 0x0
    li r9, 0x10
    bl fn_801CEA50
lbl_fn_801D694C_000010CC:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801D6A88(void)
{
    nofralloc
    lwz r3, 0x7c(r3)
    subi r0, r3, 0x4
    cmplwi r0, 0x6
    ble lbl_fn_801D6A88_000010F8
    cmpwi r3, 0xe
    bne lbl_fn_801D6A88_00001100
lbl_fn_801D6A88_000010F8:
    li r3, 0x1
    blr
lbl_fn_801D6A88_00001100:
    li r3, 0x0
    blr
}

asm void fn_801D6AB0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lis r7, lbl_8073CA10@ha
    lwzu r6, lbl_8073CA10@l(r7)
    stw r0, 0x54(r1)
    li r8, 0x0
    lwz r5, 0x4(r7)
    stmw r20, 0x20(r1)
    mr r23, r3
    lwz r4, 0x8(r7)
    addi r31, r1, 0x10
    lwz r0, 0xc(r7)
    addi r30, r3, 0x1380
    stw r6, 0x10(r1)
    li r28, 0x0
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r8, 0x137c(r3)
    stw r8, 0x1780(r3)
lbl_fn_801D6AB0_00001158:
    lwz r27, 0x0(r31)
    mr r3, r23
    mr r4, r27
    bl fn_801CE648
    lwz r0, 0xc(r3)
    mr r24, r3
    cmpwi r0, 0x0
    bne lbl_fn_801D6AB0_00001250
    mr r3, r23
    mr r4, r27
    bl fn_801CE7E8
    lwz r5, 0x414(r24)
    mr r26, r3
    mr r4, r27
    lwz r3, 0xa8(r5)
    bl fn_8020DB18
    mr r25, r3
    li r24, 0x0
    mr r29, r25
    b lbl_fn_801D6AB0_00001244
lbl_fn_801D6AB0_000011A8:
    lwz r0, 0x50(r29)
    cmpwi r0, 0x0
    beq lbl_fn_801D6AB0_0000123C
    mr r22, r29
    li r21, 0x0
    li r20, 0x0
lbl_fn_801D6AB0_000011C0:
    lwz r4, 0x4(r22)
    cmpwi r4, 0x0
    beq lbl_fn_801D6AB0_000011EC
    mr r3, r26
    bl fn_8020D608
    mulli r0, r3, 0x44
    add r3, r26, r0
    lwz r0, 0x40(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801D6AB0_000011EC
    li r21, 0x1
lbl_fn_801D6AB0_000011EC:
    addi r20, r20, 0x1
    addi r22, r22, 0x4
    cmplwi r20, 0x3
    blt lbl_fn_801D6AB0_000011C0
    cmpwi r21, 0x0
    beq lbl_fn_801D6AB0_0000123C
    lwz r0, 0x137c(r23)
    stw r27, 0x8(r1)
    cmplwi r0, 0x80
    stw r24, 0xc(r1)
    bge lbl_fn_801D6AB0_0000123C
    lwz r0, 0x137c(r23)
    slwi r0, r0, 3
    add. r3, r30, r0
    beq lbl_fn_801D6AB0_00001230
    stw r27, 0x0(r3)
    stw r24, 0x4(r3)
lbl_fn_801D6AB0_00001230:
    lwz r3, 0x137c(r23)
    addi r0, r3, 0x1
    stw r0, 0x137c(r23)
lbl_fn_801D6AB0_0000123C:
    addi r29, r29, 0x54
    addi r24, r24, 0x1
lbl_fn_801D6AB0_00001244:
    lwz r0, 0x540(r25)
    cmplw r24, r0
    blt lbl_fn_801D6AB0_000011A8
lbl_fn_801D6AB0_00001250:
    addi r28, r28, 0x1
    addi r31, r31, 0x4
    cmpwi r28, 0x4
    blt lbl_fn_801D6AB0_00001158
    lmw r20, 0x20(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_801D6C1C(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0x80
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    stfd f30, 0x90(r1)
    psq_st f30, 0x98(r1), 0, 0
    stfd f29, 0x80(r1)
    psq_st f29, 0x88(r1), 0, 0
    bl _savegpr_15
    lwz r6, 0x137c(r3)
    li r5, 0xd
    lwz r0, 0x80(r3)
    addi r15, r3, 0x137c
    stw r6, 0x84(r3)
    mr r16, r3
    cmpw r0, r6
    mr r17, r4
    stw r5, 0x8c(r3)
    li r24, 0x0
    blt lbl_fn_801D6C1C_000012DC
    subi r4, r6, 0x1
    srawi r0, r4, 31
    andc r17, r4, r0
    stw r17, 0x80(r3)
lbl_fn_801D6C1C_000012DC:
    lwz r4, 0x84(r3)
    lwz r0, 0x8c(r3)
    cmpw r4, r0
    bgt lbl_fn_801D6C1C_000012F4
    li r0, 0x0
    stw r0, 0x88(r3)
lbl_fn_801D6C1C_000012F4:
    lwz r6, 0x8c(r3)
    lwz r7, 0x84(r3)
    cmpw r7, r6
    blt lbl_fn_801D6C1C_00001324
    lwz r0, 0x88(r3)
    subi r5, r7, 0x1
    add r4, r6, r0
    subi r0, r4, 0x1
    cmpw r5, r0
    bgt lbl_fn_801D6C1C_00001324
    subf r0, r6, r7
    stw r0, 0x88(r3)
lbl_fn_801D6C1C_00001324:
    lwz r3, 0x1cc(r3)
    cmpwi r3, 0x0
    beq lbl_fn_801D6C1C_000013C4
    bl fn_80202118
    cmpwi r17, 0x0
    mr r18, r3
    blt lbl_fn_801D6C1C_000013A8
    lwz r0, 0x84(r16)
    cmpw r17, r0
    bge lbl_fn_801D6C1C_000013A8
    slwi r0, r17, 3
    add r3, r15, r0
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801D6C1C_00001368
    cmpwi r0, 0x2
    bne lbl_fn_801D6C1C_00001388
lbl_fn_801D6C1C_00001368:
    mr r3, r16
    bl fn_801CF334
    lwz r4, 0x4c(r3)
    mr r3, r16
    mr r5, r18
    li r6, 0x2
    bl fn_801D4E74
    b lbl_fn_801D6C1C_000013C4
lbl_fn_801D6C1C_00001388:
    mr r3, r16
    bl fn_801CF334
    lwz r4, 0x4c(r3)
    mr r3, r16
    mr r5, r18
    li r6, 0x3
    bl fn_801D4E74
    b lbl_fn_801D6C1C_000013C4
lbl_fn_801D6C1C_000013A8:
    mr r3, r16
    bl fn_801CF334
    lwz r4, 0x4c(r3)
    mr r3, r16
    mr r5, r18
    li r6, -0x1
    bl fn_801D4E74
lbl_fn_801D6C1C_000013C4:
    mr r3, r16
    bl fn_801CF334
    lis r30, lbl_8073CA28@ha
    lwz r23, 0x4c(r3)
    lfs f29, lbl_80882AD0
    addi r31, r30, lbl_8073CA28@l
    lfs f30, lbl_80882AD4
    addi r27, r1, 0x18
    lfs f31, lbl_80882AD8
    addi r26, r1, 0x28
    li r22, 0x0
    li r15, 0x0
    li r29, 0x1
    b lbl_fn_801D6C1C_000015A0
lbl_fn_801D6C1C_000013FC:
    add r3, r16, r15
    lwz r3, 0x198(r3)
    bl fn_80202D00
    lwz r0, 0x88(r16)
    mr r21, r3
    add. r5, r0, r22
    blt lbl_fn_801D6C1C_00001594
    mulli r0, r24, 0x404
    add r4, r16, r0
    lwz r0, 0x137c(r4)
    cmpw r5, r0
    bge lbl_fn_801D6C1C_00001594
    slwi r0, r5, 3
    mr r3, r16
    add r19, r4, r0
    lwz r17, 0x1380(r19)
    mr r4, r17
    bl fn_801CE648
    mr r18, r3
    mr r3, r16
    mr r4, r17
    bl fn_801CE87C
    mr r28, r3
    mr r3, r16
    mr r4, r17
    bl fn_801CE7E8
    lwz r5, 0x414(r18)
    mr r20, r3
    mr r4, r17
    lwz r3, 0xa8(r5)
    bl fn_8020DB18
    lwz r0, 0x1384(r19)
    mr r18, r3
    mr r3, r21
    addi r4, r30, lbl_8073CA28@l
    mulli r25, r0, 0x54
    add r5, r18, r25
    addi r5, r5, 0x10
    bl fn_801F837C
    cmpwi r28, 0x0
    li r19, 0x1
    beq lbl_fn_801D6C1C_000014E8
    add r25, r18, r25
    li r18, 0x0
lbl_fn_801D6C1C_000014AC:
    lwz r4, 0x4(r25)
    cmpwi r4, 0x0
    beq lbl_fn_801D6C1C_000014D8
    mr r3, r20
    bl fn_8020D608
    lwz r0, 0x0(r28)
    slw r3, r29, r3
    and r0, r3, r0
    cmplw r3, r0
    beq lbl_fn_801D6C1C_000014D8
    li r19, 0x0
lbl_fn_801D6C1C_000014D8:
    addi r18, r18, 0x1
    addi r25, r25, 0x4
    cmplwi r18, 0x3
    blt lbl_fn_801D6C1C_000014AC
lbl_fn_801D6C1C_000014E8:
    cmpwi r19, 0x0
    beq lbl_fn_801D6C1C_00001508
    fmr f1, f29
    stfs f29, 0x50(r21)
    mr r3, r21
    addi r4, r31, 0x7
    bl fn_801F6C80
    b lbl_fn_801D6C1C_0000151C
lbl_fn_801D6C1C_00001508:
    stfs f30, 0x50(r21)
    mr r3, r21
    lfs f1, lbl_80882AD8
    addi r4, r31, 0x7
    bl fn_801F6C80
lbl_fn_801D6C1C_0000151C:
    cmpwi r17, 0x2
    bne lbl_fn_801D6C1C_0000152C
    li r17, 0x0
    b lbl_fn_801D6C1C_00001538
lbl_fn_801D6C1C_0000152C:
    cmpwi r17, 0x3
    bne lbl_fn_801D6C1C_00001538
    li r17, 0x1
lbl_fn_801D6C1C_00001538:
    mr r3, r16
    mr r4, r23
    mr r5, r17
    bl fn_801CFAA8
    bl fn_8020EF80
    mr r4, r3
    lwz r3, lbl_8087F4F0
    bl fn_80444B64
    lwz r4, lbl_8087F4F0
    mr r5, r3
    addi r3, r1, 0x18
    bl fn_80444C50
    psq_l f1, 0x0(r27), 0, 0
    addi r5, r1, 0x8
    psq_l f2, 0x8(r27), 0, 0
    mr r3, r21
    psq_st f1, 0x0(r26), 0, 0
    addi r4, r31, 0xd
    psq_st f2, 0x8(r26), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F7590
    b lbl_fn_801D6C1C_00001598
lbl_fn_801D6C1C_00001594:
    stfs f31, 0x50(r3)
lbl_fn_801D6C1C_00001598:
    addi r22, r22, 0x1
    addi r15, r15, 0x4
lbl_fn_801D6C1C_000015A0:
    lwz r0, 0x8c(r16)
    cmpw r22, r0
    blt lbl_fn_801D6C1C_000013FC
    addi r11, r1, 0x80
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    psq_l f30, 0x98(r1), 0, 0
    lfd f30, 0x90(r1)
    psq_l f29, 0x88(r1), 0, 0
    lfd f29, 0x80(r1)
    bl _restgpr_15
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_801D6F84(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xa0
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    bl _savegpr_26
    lwz r0, 0x1bb0(r3)
    mr r26, r3
    cmpwi r0, 0x0
    bne lbl_fn_801D6F84_0000165C
    lwz r5, 0x80(r3)
    li r4, 0xa
    li r6, 0x9
    stw r4, 0x84(r3)
    cmpw r5, r6
    li r0, 0x9
    stw r4, 0x8c(r3)
    bge lbl_fn_801D6F84_00001634
    mr r0, r5
lbl_fn_801D6F84_00001634:
    cmpwi r0, 0x0
    bge lbl_fn_801D6F84_00001644
    li r0, 0x0
    b lbl_fn_801D6F84_00001654
lbl_fn_801D6F84_00001644:
    cmpw r5, r6
    li r0, 0x9
    bge lbl_fn_801D6F84_00001654
    mr r0, r5
lbl_fn_801D6F84_00001654:
    stw r0, 0x80(r3)
    b lbl_fn_801D6F84_000016A0
lbl_fn_801D6F84_0000165C:
    lwz r4, 0x1bd0(r3)
    lwz r5, 0x80(r3)
    subi r6, r4, 0x1
    stw r4, 0x84(r3)
    cmpw r5, r6
    stw r4, 0x8c(r3)
    mr r0, r6
    bge lbl_fn_801D6F84_00001680
    mr r0, r5
lbl_fn_801D6F84_00001680:
    cmpwi r0, 0x0
    bge lbl_fn_801D6F84_00001690
    li r6, 0x0
    b lbl_fn_801D6F84_0000169C
lbl_fn_801D6F84_00001690:
    cmpw r5, r6
    bge lbl_fn_801D6F84_0000169C
    mr r6, r5
lbl_fn_801D6F84_0000169C:
    stw r6, 0x80(r3)
lbl_fn_801D6F84_000016A0:
    mr r3, r26
    bl fn_801CF334
    lis r31, lbl_8073CA28@ha
    lfs f31, lbl_80882AD8
    lfs f30, lbl_80882AD0
    mr r29, r26
    addi r31, r31, lbl_8073CA28@l
    li r28, 0x0
    lis r30, lbl_80782850@ha
lbl_fn_801D6F84_000016C4:
    lwz r3, 0x150(r29)
    bl fn_80202D00
    lwz r0, 0x84(r26)
    mr r27, r3
    cmpw r28, r0
    bge lbl_fn_801D6F84_00001708
    addi r3, r1, 0x8
    addi r4, r30, lbl_80782850@l
    addi r5, r28, 0x1
    crclr 6
    bl fn_800DD3FC
    mr r3, r27
    addi r4, r31, 0x16
    addi r5, r1, 0x8
    bl fn_801F837C
    stfs f30, 0x50(r27)
    b lbl_fn_801D6F84_0000170C
lbl_fn_801D6F84_00001708:
    stfs f31, 0x50(r3)
lbl_fn_801D6F84_0000170C:
    addi r28, r28, 0x1
    addi r29, r29, 0x4
    cmpwi r28, 0xa
    blt lbl_fn_801D6F84_000016C4
    addi r11, r1, 0xa0
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    bl _restgpr_26
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_801D70EC(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0xb0
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    stfd f30, 0xc0(r1)
    psq_st f30, 0xc8(r1), 0, 0
    stfd f29, 0xb0(r1)
    psq_st f29, 0xb8(r1), 0, 0
    bl _savegpr_22
    cmpwi r4, 0x0
    mr r23, r3
    mr r22, r4
    beq lbl_fn_801D70EC_0000197C
    mr r3, r22
    bl fn_80202118
    cmpwi r3, 0x0
    bne lbl_fn_801D70EC_00001794
    b lbl_fn_801D70EC_0000197C
lbl_fn_801D70EC_00001794:
    mr r3, r22
    bl fn_80202118
    lfs f0, lbl_80882AD8
    mr r24, r3
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    bl fn_801F45F4
    lis r3, lbl_8073CA20@ha
    lis r4, lbl_8073CA28@ha
    lfs f29, lbl_80882AE0
    addi r26, r23, 0xcf8
    lfs f30, lbl_80882ADC
    addi r29, r4, lbl_8073CA28@l
    lfd f31, lbl_8073CA20@l(r3)
    li r23, 0x0
    li r27, 0x0
    li r30, 0x1
    lis r31, 0x4330
lbl_fn_801D70EC_000017E8:
    mr r25, r26
    li r22, 0x0
lbl_fn_801D70EC_000017F0:
    stw r27, 0xc(r25)
    lwz r3, 0x8(r25)
    bl fn_8020BCEC
    lwz r0, 0x0(r25)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_801D70EC_0000195C
    lwz r0, 0x4(r25)
    cmpwi r0, 0x0
    beq lbl_fn_801D70EC_0000195C
    mr r5, r22
    mr r6, r23
    addi r3, r1, 0x30
    addi r4, r29, 0x1e
    crclr 6
    bl sprintf
    addi r3, r1, 0x30
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r24
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lfs f4, 0x8(r1)
    lfs f3, 0xc(r1)
    lfs f2, 0x10(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x18(r1)
    stfs f4, 0x1c(r1)
    stfs f3, 0x20(r1)
    stfs f2, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f0, 0x2c(r1)
    lwz r3, 0x0(r25)
    bl fn_80202D00
    addi r4, r29, 0x2e
    addi r5, r1, 0x1c
    bl fn_801F6E78
    lwz r3, 0x4(r25)
    bl fn_80202D00
    addi r4, r29, 0x2e
    addi r5, r1, 0x1c
    bl fn_801F6E78
    cmpwi r28, 0x0
    beq lbl_fn_801D70EC_00001908
    lwz r3, 0x0(r25)
    bl fn_80202D00
    lfs f2, 0x4(r28)
    addi r4, r29, 0x37
    lfs f0, 0xc(r28)
    lfs f1, 0x8(r28)
    fmuls f3, f29, f2
    fmuls f0, f29, f0
    fmuls f2, f29, f1
    fmuls f1, f30, f3
    fmuls f3, f30, f0
    fmuls f2, f30, f2
    bl fn_801F7DF0
    lwz r3, lbl_8087F4F0
    lwz r4, 0x8(r25)
    bl fn_80444828
    mr r28, r3
    lwz r3, lbl_8087F4F0
    mr r4, r28
    bl fn_804444E8
    cmpwi r3, 0x0
    bgt lbl_fn_801D70EC_00001900
    cmpwi r28, 0x0
    bne lbl_fn_801D70EC_0000190C
lbl_fn_801D70EC_00001900:
    stw r30, 0xc(r25)
    b lbl_fn_801D70EC_0000190C
lbl_fn_801D70EC_00001908:
    stw r30, 0xc(r25)
lbl_fn_801D70EC_0000190C:
    lwz r3, 0x0(r25)
    bl fn_80202D00
    lwz r0, 0xc(r25)
    addi r4, r29, 0x44
    stw r31, 0x70(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f1, f0, f31
    bl fn_801F6C80
    lwz r3, 0x4(r25)
    bl fn_80202D00
    lwz r0, 0xc(r25)
    addi r4, r29, 0x44
    stw r31, 0x78(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x7c(r1)
    lfd f0, 0x78(r1)
    fsubs f1, f0, f31
    bl fn_801F6C80
lbl_fn_801D70EC_0000195C:
    addi r22, r22, 0x1
    addi r25, r25, 0x10
    cmpwi r22, 0x8
    blt lbl_fn_801D70EC_000017F0
    addi r23, r23, 0x1
    addi r26, r26, 0x80
    cmpwi r23, 0x8
    blt lbl_fn_801D70EC_000017E8
lbl_fn_801D70EC_0000197C:
    addi r11, r1, 0xb0
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    psq_l f30, 0xc8(r1), 0, 0
    lfd f30, 0xc0(r1)
    psq_l f29, 0xb8(r1), 0, 0
    lfd f29, 0xb0(r1)
    bl _restgpr_22
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}
