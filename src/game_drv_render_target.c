#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void fn_805C0120(void);
extern void fn_805C22B0(void);
extern void fn_805C22C0(void);
extern void fn_805C2630(void);
extern void fn_805C26A0(void);
extern void fn_805C3570(void);
extern void fn_805CC3E0(void);
extern void fn_806613D0(void);

/* External data declarations */
extern u8 jumptable_80798CAC[];
extern u8 jumptable_80798CD4[];
extern u8 jumptable_80798CFC[];
extern u8 lbl_80764198[];
extern u8 lbl_807641A0[];
extern u8 lbl_80764200[];
extern u8 lbl_807980D8[];
extern u8 lbl_807CA148[];
extern u8 lbl_807CA210[];

/* Small data declarations */

/* Function declarations */
void fn_805C95D0(void);
void fn_805CA420(void);
void fn_805CAEF0(void);

asm void fn_805C95D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r30, lbl_80764198@ha
    mr r26, r3
    mr r27, r5
    addi r30, r30, lbl_80764198@l
    bl fn_805CC3E0
    lwz r4, 0x14(r26)
    mr r31, r3
    li r28, 0x0
    cmpwi r4, 0x2
    bne lbl_fn_805C95D0_00000D74
    cmpwi r3, -0x1
    beq lbl_fn_805C95D0_00000D74
    slwi r0, r3, 2
    add r5, r26, r0
    lwz r0, 0x20(r5)
    cmpwi r0, 0x0
    bne lbl_fn_805C95D0_00000D74
    lwz r5, 0x0(r26)
    cmpwi r5, 0x2
    beq lbl_fn_805C95D0_0000012C
    lwz r0, 0xc(r26)
    cmpw r3, r0
    bge lbl_fn_805C95D0_0000012C
    lwz r0, 0x10(r26)
    addi r5, r30, 0x8
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805C95D0_000000B0
lbl_fn_805C95D0_00000088:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_fn_805C95D0_000000A4
    lwz r0, 0x4(r5)
    cmpwi r0, 0x0
    bne lbl_fn_805C95D0_000000A4
    b lbl_fn_805C95D0_000000B4
lbl_fn_805C95D0_000000A4:
    addi r5, r5, 0x8
    addi r4, r4, 0x1
    bdnz lbl_fn_805C95D0_00000088
lbl_fn_805C95D0_000000B0:
    li r4, -0x1
lbl_fn_805C95D0_000000B4:
    slwi r0, r4, 2
    add r3, r26, r0
    lwz r29, 0x260(r3)
    mr r3, r29
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r29)
    lwz r0, 0x0(r26)
    cmpwi r0, 0x0
    bne lbl_fn_805C95D0_00000D74
    lwz r0, 0x68(r26)
    cmpwi r0, 0x2
    ble lbl_fn_805C95D0_00000124
    lwz r4, 0x4(r26)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805C95D0_0000010C
    li r3, 0x5
    li r4, 0x4
    mtctr r12
    bctrl
lbl_fn_805C95D0_0000010C:
    cmpwi r3, 0x0
    bne lbl_fn_805C95D0_0000011C
    li r3, 0x4
    bl fn_805C3570
lbl_fn_805C95D0_0000011C:
    li r0, 0x0
    stw r0, 0x68(r26)
lbl_fn_805C95D0_00000124:
    li r28, 0x1
    b lbl_fn_805C95D0_00000D74
lbl_fn_805C95D0_0000012C:
    lwz r0, 0xc(r26)
    subf r0, r0, r3
    cmplwi r0, 0x9
    bgt lbl_fn_805C95D0_00000D74
    lis r3, jumptable_80798CAC@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80798CAC@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    cmpwi r5, 0x0
    bne lbl_fn_805C95D0_00000D74
    cmpwi r4, 0x2
    li r4, 0x1
    bne lbl_fn_805C95D0_00000188
    lwz r3, 0x3e8(r26)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_fn_805C95D0_00000188
    lwz r3, 0x3c4(r26)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    bne lbl_fn_805C95D0_0000018C
lbl_fn_805C95D0_00000188:
    li r4, 0x0
lbl_fn_805C95D0_0000018C:
    cmpwi r4, 0x0
    beq lbl_fn_805C95D0_00000208
    lwz r28, 0x3c4(r26)
    mr r3, r28
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r28)
    li r4, 0x3
    li r3, 0x0
    lwz r0, 0x68(r26)
    stw r4, 0x74(r26)
    cmpwi r0, 0x2
    stw r3, 0x6c(r26)
    ble lbl_fn_805C95D0_00000200
    lwz r4, 0x4(r26)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805C95D0_000001E8
    li r3, 0x5
    li r4, 0x4
    mtctr r12
    bctrl
lbl_fn_805C95D0_000001E8:
    cmpwi r3, 0x0
    bne lbl_fn_805C95D0_000001F8
    li r3, 0x4
    bl fn_805C3570
lbl_fn_805C95D0_000001F8:
    li r0, 0x0
    stw r0, 0x68(r26)
lbl_fn_805C95D0_00000200:
    li r28, 0x1
    b lbl_fn_805C95D0_00000D74
lbl_fn_805C95D0_00000208:
    li r0, 0x3
    stw r0, 0x6c(r26)
    b lbl_fn_805C95D0_00000D74
    cmpwi r5, 0x0
    bne lbl_fn_805C95D0_000004F0
    li r0, 0x25
    addi r3, r30, 0x68
    li r29, 0x0
    mtctr r0
    nop
lbl_fn_805C95D0_00000230:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x4
    bne lbl_fn_805C95D0_0000024C
    lwz r0, 0x4(r3)
    cmpwi r0, 0x2
    bne lbl_fn_805C95D0_0000024C
    b lbl_fn_805C95D0_0000027C
lbl_fn_805C95D0_0000024C:
    lwz r0, 0x8(r3)
    addi r29, r29, 0x1
    cmpwi r0, 0x4
    bne lbl_fn_805C95D0_0000026C
    lwz r0, 0xc(r3)
    cmpwi r0, 0x2
    bne lbl_fn_805C95D0_0000026C
    b lbl_fn_805C95D0_0000027C
lbl_fn_805C95D0_0000026C:
    addi r3, r3, 0x10
    addi r29, r29, 0x1
    bdnz lbl_fn_805C95D0_00000230
    li r29, -0x1
lbl_fn_805C95D0_0000027C:
    li r3, 0x25
    addi r5, r30, 0x68
    li r0, 0x1
    li r8, 0x0
    mtctr r3
lbl_fn_805C95D0_00000290:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x4
    bne lbl_fn_805C95D0_000002AC
    lwz r3, 0x4(r5)
    cmpwi r3, 0x2
    bne lbl_fn_805C95D0_000002AC
    b lbl_fn_805C95D0_000002DC
lbl_fn_805C95D0_000002AC:
    lwz r3, 0x8(r5)
    addi r8, r8, 0x1
    cmpwi r3, 0x4
    bne lbl_fn_805C95D0_000002CC
    lwz r3, 0xc(r5)
    cmpwi r3, 0x2
    bne lbl_fn_805C95D0_000002CC
    b lbl_fn_805C95D0_000002DC
lbl_fn_805C95D0_000002CC:
    addi r5, r5, 0x10
    addi r8, r8, 0x1
    bdnz lbl_fn_805C95D0_00000290
    li r8, -0x1
lbl_fn_805C95D0_000002DC:
    li r3, 0x25
    addi r5, r30, 0x68
    li r7, 0x0
    mtctr r3
    nop
lbl_fn_805C95D0_000002F0:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x5
    bne lbl_fn_805C95D0_0000030C
    lwz r3, 0x4(r5)
    cmpwi r3, 0x3
    bne lbl_fn_805C95D0_0000030C
    b lbl_fn_805C95D0_0000033C
lbl_fn_805C95D0_0000030C:
    lwz r3, 0x8(r5)
    addi r7, r7, 0x1
    cmpwi r3, 0x5
    bne lbl_fn_805C95D0_0000032C
    lwz r3, 0xc(r5)
    cmpwi r3, 0x3
    bne lbl_fn_805C95D0_0000032C
    b lbl_fn_805C95D0_0000033C
lbl_fn_805C95D0_0000032C:
    addi r5, r5, 0x10
    addi r7, r7, 0x1
    bdnz lbl_fn_805C95D0_000002F0
    li r7, -0x1
lbl_fn_805C95D0_0000033C:
    li r3, 0x25
    addi r5, r30, 0x68
    li r6, 0x0
    mtctr r3
    nop
lbl_fn_805C95D0_00000350:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x4
    bne lbl_fn_805C95D0_0000036C
    lwz r3, 0x4(r5)
    cmpwi r3, 0x13
    bne lbl_fn_805C95D0_0000036C
    b lbl_fn_805C95D0_0000039C
lbl_fn_805C95D0_0000036C:
    lwz r3, 0x8(r5)
    addi r6, r6, 0x1
    cmpwi r3, 0x4
    bne lbl_fn_805C95D0_0000038C
    lwz r3, 0xc(r5)
    cmpwi r3, 0x13
    bne lbl_fn_805C95D0_0000038C
    b lbl_fn_805C95D0_0000039C
lbl_fn_805C95D0_0000038C:
    addi r5, r5, 0x10
    addi r6, r6, 0x1
    bdnz lbl_fn_805C95D0_00000350
    li r6, -0x1
lbl_fn_805C95D0_0000039C:
    li r3, 0x25
    addi r9, r30, 0x68
    li r5, 0x0
    mtctr r3
    nop
lbl_fn_805C95D0_000003B0:
    lwz r3, 0x0(r9)
    cmpwi r3, 0x5
    bne lbl_fn_805C95D0_000003CC
    lwz r3, 0x4(r9)
    cmpwi r3, 0x14
    bne lbl_fn_805C95D0_000003CC
    b lbl_fn_805C95D0_000003FC
lbl_fn_805C95D0_000003CC:
    lwz r3, 0x8(r9)
    addi r5, r5, 0x1
    cmpwi r3, 0x5
    bne lbl_fn_805C95D0_000003EC
    lwz r3, 0xc(r9)
    cmpwi r3, 0x14
    bne lbl_fn_805C95D0_000003EC
    b lbl_fn_805C95D0_000003FC
lbl_fn_805C95D0_000003EC:
    addi r9, r9, 0x10
    addi r5, r5, 0x1
    bdnz lbl_fn_805C95D0_000003B0
    li r5, -0x1
lbl_fn_805C95D0_000003FC:
    cmpwi r4, 0x2
    bne lbl_fn_805C95D0_00000464
    slwi r3, r8, 2
    add r3, r26, r3
    lwz r3, 0x290(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    beq lbl_fn_805C95D0_00000464
    slwi r3, r7, 2
    add r3, r26, r3
    lwz r3, 0x290(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    beq lbl_fn_805C95D0_00000464
    slwi r3, r6, 2
    add r3, r26, r3
    lwz r3, 0x290(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    beq lbl_fn_805C95D0_00000464
    slwi r3, r5, 2
    add r3, r26, r3
    lwz r3, 0x290(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    bne lbl_fn_805C95D0_00000468
lbl_fn_805C95D0_00000464:
    li r0, 0x0
lbl_fn_805C95D0_00000468:
    cmpwi r0, 0x0
    beq lbl_fn_805C95D0_000004E8
    slwi r0, r29, 2
    add r3, r26, r0
    lwz r28, 0x290(r3)
    mr r3, r28
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r28)
    li r3, 0x0
    lwz r0, 0x68(r26)
    stw r29, 0x78(r26)
    cmpwi r0, 0x2
    stw r3, 0x70(r26)
    ble lbl_fn_805C95D0_000004E0
    lwz r4, 0x4(r26)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805C95D0_000004C8
    li r3, 0x5
    li r4, 0x4
    mtctr r12
    bctrl
lbl_fn_805C95D0_000004C8:
    cmpwi r3, 0x0
    bne lbl_fn_805C95D0_000004D8
    li r3, 0x4
    bl fn_805C3570
lbl_fn_805C95D0_000004D8:
    li r0, 0x0
    stw r0, 0x68(r26)
lbl_fn_805C95D0_000004E0:
    li r28, 0x1
    b lbl_fn_805C95D0_00000D74
lbl_fn_805C95D0_000004E8:
    stw r29, 0x70(r26)
    b lbl_fn_805C95D0_00000D74
lbl_fn_805C95D0_000004F0:
    cmpwi r5, 0x1
    bne lbl_fn_805C95D0_00000D74
    li r0, 0x25
    addi r3, r30, 0x68
    li r29, 0x0
    mtctr r0
lbl_fn_805C95D0_00000508:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x4
    bne lbl_fn_805C95D0_00000524
    lwz r0, 0x4(r3)
    cmpwi r0, 0x13
    bne lbl_fn_805C95D0_00000524
    b lbl_fn_805C95D0_00000554
lbl_fn_805C95D0_00000524:
    lwz r0, 0x8(r3)
    addi r29, r29, 0x1
    cmpwi r0, 0x4
    bne lbl_fn_805C95D0_00000544
    lwz r0, 0xc(r3)
    cmpwi r0, 0x13
    bne lbl_fn_805C95D0_00000544
    b lbl_fn_805C95D0_00000554
lbl_fn_805C95D0_00000544:
    addi r3, r3, 0x10
    addi r29, r29, 0x1
    bdnz lbl_fn_805C95D0_00000508
    li r29, -0x1
lbl_fn_805C95D0_00000554:
    li r3, 0x25
    addi r5, r30, 0x68
    li r0, 0x1
    li r8, 0x0
    mtctr r3
lbl_fn_805C95D0_00000568:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x4
    bne lbl_fn_805C95D0_00000584
    lwz r3, 0x4(r5)
    cmpwi r3, 0x2
    bne lbl_fn_805C95D0_00000584
    b lbl_fn_805C95D0_000005B4
lbl_fn_805C95D0_00000584:
    lwz r3, 0x8(r5)
    addi r8, r8, 0x1
    cmpwi r3, 0x4
    bne lbl_fn_805C95D0_000005A4
    lwz r3, 0xc(r5)
    cmpwi r3, 0x2
    bne lbl_fn_805C95D0_000005A4
    b lbl_fn_805C95D0_000005B4
lbl_fn_805C95D0_000005A4:
    addi r5, r5, 0x10
    addi r8, r8, 0x1
    bdnz lbl_fn_805C95D0_00000568
    li r8, -0x1
lbl_fn_805C95D0_000005B4:
    li r3, 0x25
    addi r5, r30, 0x68
    li r7, 0x0
    mtctr r3
    nop
lbl_fn_805C95D0_000005C8:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x5
    bne lbl_fn_805C95D0_000005E4
    lwz r3, 0x4(r5)
    cmpwi r3, 0x3
    bne lbl_fn_805C95D0_000005E4
    b lbl_fn_805C95D0_00000614
lbl_fn_805C95D0_000005E4:
    lwz r3, 0x8(r5)
    addi r7, r7, 0x1
    cmpwi r3, 0x5
    bne lbl_fn_805C95D0_00000604
    lwz r3, 0xc(r5)
    cmpwi r3, 0x3
    bne lbl_fn_805C95D0_00000604
    b lbl_fn_805C95D0_00000614
lbl_fn_805C95D0_00000604:
    addi r5, r5, 0x10
    addi r7, r7, 0x1
    bdnz lbl_fn_805C95D0_000005C8
    li r7, -0x1
lbl_fn_805C95D0_00000614:
    li r3, 0x25
    addi r5, r30, 0x68
    li r6, 0x0
    mtctr r3
    nop
lbl_fn_805C95D0_00000628:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x4
    bne lbl_fn_805C95D0_00000644
    lwz r3, 0x4(r5)
    cmpwi r3, 0x13
    bne lbl_fn_805C95D0_00000644
    b lbl_fn_805C95D0_00000674
lbl_fn_805C95D0_00000644:
    lwz r3, 0x8(r5)
    addi r6, r6, 0x1
    cmpwi r3, 0x4
    bne lbl_fn_805C95D0_00000664
    lwz r3, 0xc(r5)
    cmpwi r3, 0x13
    bne lbl_fn_805C95D0_00000664
    b lbl_fn_805C95D0_00000674
lbl_fn_805C95D0_00000664:
    addi r5, r5, 0x10
    addi r6, r6, 0x1
    bdnz lbl_fn_805C95D0_00000628
    li r6, -0x1
lbl_fn_805C95D0_00000674:
    li r3, 0x25
    addi r9, r30, 0x68
    li r5, 0x0
    mtctr r3
    nop
lbl_fn_805C95D0_00000688:
    lwz r3, 0x0(r9)
    cmpwi r3, 0x5
    bne lbl_fn_805C95D0_000006A4
    lwz r3, 0x4(r9)
    cmpwi r3, 0x14
    bne lbl_fn_805C95D0_000006A4
    b lbl_fn_805C95D0_000006D4
lbl_fn_805C95D0_000006A4:
    lwz r3, 0x8(r9)
    addi r5, r5, 0x1
    cmpwi r3, 0x5
    bne lbl_fn_805C95D0_000006C4
    lwz r3, 0xc(r9)
    cmpwi r3, 0x14
    bne lbl_fn_805C95D0_000006C4
    b lbl_fn_805C95D0_000006D4
lbl_fn_805C95D0_000006C4:
    addi r9, r9, 0x10
    addi r5, r5, 0x1
    bdnz lbl_fn_805C95D0_00000688
    li r5, -0x1
lbl_fn_805C95D0_000006D4:
    cmpwi r4, 0x2
    bne lbl_fn_805C95D0_0000073C
    slwi r3, r8, 2
    add r3, r26, r3
    lwz r3, 0x290(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    beq lbl_fn_805C95D0_0000073C
    slwi r3, r7, 2
    add r3, r26, r3
    lwz r3, 0x290(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    beq lbl_fn_805C95D0_0000073C
    slwi r3, r6, 2
    add r3, r26, r3
    lwz r3, 0x290(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    beq lbl_fn_805C95D0_0000073C
    slwi r3, r5, 2
    add r3, r26, r3
    lwz r3, 0x290(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    bne lbl_fn_805C95D0_00000740
lbl_fn_805C95D0_0000073C:
    li r0, 0x0
lbl_fn_805C95D0_00000740:
    cmpwi r0, 0x0
    beq lbl_fn_805C95D0_000007C0
    slwi r0, r29, 2
    add r3, r26, r0
    lwz r28, 0x290(r3)
    mr r3, r28
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r28)
    li r3, 0x0
    lwz r0, 0x68(r26)
    stw r29, 0x78(r26)
    cmpwi r0, 0x2
    stw r3, 0x70(r26)
    ble lbl_fn_805C95D0_000007B8
    lwz r4, 0x4(r26)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805C95D0_000007A0
    li r3, 0x5
    li r4, 0x4
    mtctr r12
    bctrl
lbl_fn_805C95D0_000007A0:
    cmpwi r3, 0x0
    bne lbl_fn_805C95D0_000007B0
    li r3, 0x4
    bl fn_805C3570
lbl_fn_805C95D0_000007B0:
    li r0, 0x0
    stw r0, 0x68(r26)
lbl_fn_805C95D0_000007B8:
    li r28, 0x1
    b lbl_fn_805C95D0_00000D74
lbl_fn_805C95D0_000007C0:
    stw r29, 0x70(r26)
    b lbl_fn_805C95D0_00000D74
    cmpwi r5, 0x1
    bne lbl_fn_805C95D0_00000D74
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_fn_805C95D0_000007E0:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x6
    bne lbl_fn_805C95D0_000007FC
    lwz r0, 0x4(r4)
    cmpwi r0, 0x4
    bne lbl_fn_805C95D0_000007FC
    b lbl_fn_805C95D0_0000082C
lbl_fn_805C95D0_000007FC:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x6
    bne lbl_fn_805C95D0_0000081C
    lwz r0, 0xc(r4)
    cmpwi r0, 0x4
    bne lbl_fn_805C95D0_0000081C
    b lbl_fn_805C95D0_0000082C
lbl_fn_805C95D0_0000081C:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805C95D0_000007E0
    li r3, -0x1
lbl_fn_805C95D0_0000082C:
    slwi r0, r3, 2
    add r3, r26, r0
    lwz r28, 0x290(r3)
    mr r3, r28
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r28)
    lwz r0, 0x68(r26)
    cmpwi r0, 0x2
    ble lbl_fn_805C95D0_00000890
    lwz r4, 0x4(r26)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805C95D0_00000878
    li r3, 0x5
    li r4, 0x4
    mtctr r12
    bctrl
lbl_fn_805C95D0_00000878:
    cmpwi r3, 0x0
    bne lbl_fn_805C95D0_00000888
    li r3, 0x4
    bl fn_805C3570
lbl_fn_805C95D0_00000888:
    li r0, 0x0
    stw r0, 0x68(r26)
lbl_fn_805C95D0_00000890:
    li r28, 0x1
    b lbl_fn_805C95D0_00000D74
    cmpwi r5, 0x1
    bne lbl_fn_805C95D0_00000D74
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_fn_805C95D0_000008B0:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x7
    bne lbl_fn_805C95D0_000008CC
    lwz r0, 0x4(r4)
    cmpwi r0, 0x4
    bne lbl_fn_805C95D0_000008CC
    b lbl_fn_805C95D0_000008FC
lbl_fn_805C95D0_000008CC:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x7
    bne lbl_fn_805C95D0_000008EC
    lwz r0, 0xc(r4)
    cmpwi r0, 0x4
    bne lbl_fn_805C95D0_000008EC
    b lbl_fn_805C95D0_000008FC
lbl_fn_805C95D0_000008EC:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805C95D0_000008B0
    li r3, -0x1
lbl_fn_805C95D0_000008FC:
    slwi r0, r3, 2
    add r3, r26, r0
    lwz r28, 0x290(r3)
    mr r3, r28
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r28)
    lwz r0, 0x68(r26)
    cmpwi r0, 0x2
    ble lbl_fn_805C95D0_00000960
    lwz r4, 0x4(r26)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805C95D0_00000948
    li r3, 0x5
    li r4, 0x4
    mtctr r12
    bctrl
lbl_fn_805C95D0_00000948:
    cmpwi r3, 0x0
    bne lbl_fn_805C95D0_00000958
    li r3, 0x4
    bl fn_805C3570
lbl_fn_805C95D0_00000958:
    li r0, 0x0
    stw r0, 0x68(r26)
lbl_fn_805C95D0_00000960:
    li r28, 0x1
    b lbl_fn_805C95D0_00000D74
    cmpwi r5, 0x1
    bne lbl_fn_805C95D0_00000D74
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_fn_805C95D0_00000980:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x8
    bne lbl_fn_805C95D0_0000099C
    lwz r0, 0x4(r4)
    cmpwi r0, 0x4
    bne lbl_fn_805C95D0_0000099C
    b lbl_fn_805C95D0_000009CC
lbl_fn_805C95D0_0000099C:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x8
    bne lbl_fn_805C95D0_000009BC
    lwz r0, 0xc(r4)
    cmpwi r0, 0x4
    bne lbl_fn_805C95D0_000009BC
    b lbl_fn_805C95D0_000009CC
lbl_fn_805C95D0_000009BC:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805C95D0_00000980
    li r3, -0x1
lbl_fn_805C95D0_000009CC:
    slwi r0, r3, 2
    add r3, r26, r0
    lwz r28, 0x290(r3)
    mr r3, r28
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r28)
    lwz r0, 0x68(r26)
    cmpwi r0, 0x2
    ble lbl_fn_805C95D0_00000A30
    lwz r4, 0x4(r26)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805C95D0_00000A18
    li r3, 0x5
    li r4, 0x4
    mtctr r12
    bctrl
lbl_fn_805C95D0_00000A18:
    cmpwi r3, 0x0
    bne lbl_fn_805C95D0_00000A28
    li r3, 0x4
    bl fn_805C3570
lbl_fn_805C95D0_00000A28:
    li r0, 0x0
    stw r0, 0x68(r26)
lbl_fn_805C95D0_00000A30:
    li r28, 0x1
    b lbl_fn_805C95D0_00000D74
    cmpwi r5, 0x1
    bne lbl_fn_805C95D0_00000D74
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_fn_805C95D0_00000A50:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x9
    bne lbl_fn_805C95D0_00000A6C
    lwz r0, 0x4(r4)
    cmpwi r0, 0x4
    bne lbl_fn_805C95D0_00000A6C
    b lbl_fn_805C95D0_00000A9C
lbl_fn_805C95D0_00000A6C:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x9
    bne lbl_fn_805C95D0_00000A8C
    lwz r0, 0xc(r4)
    cmpwi r0, 0x4
    bne lbl_fn_805C95D0_00000A8C
    b lbl_fn_805C95D0_00000A9C
lbl_fn_805C95D0_00000A8C:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805C95D0_00000A50
    li r3, -0x1
lbl_fn_805C95D0_00000A9C:
    slwi r0, r3, 2
    add r3, r26, r0
    lwz r28, 0x290(r3)
    mr r3, r28
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r28)
    lwz r0, 0x68(r26)
    cmpwi r0, 0x2
    ble lbl_fn_805C95D0_00000B00
    lwz r4, 0x4(r26)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805C95D0_00000AE8
    li r3, 0x5
    li r4, 0x4
    mtctr r12
    bctrl
lbl_fn_805C95D0_00000AE8:
    cmpwi r3, 0x0
    bne lbl_fn_805C95D0_00000AF8
    li r3, 0x4
    bl fn_805C3570
lbl_fn_805C95D0_00000AF8:
    li r0, 0x0
    stw r0, 0x68(r26)
lbl_fn_805C95D0_00000B00:
    li r28, 0x1
    b lbl_fn_805C95D0_00000D74
    cmpwi r5, 0x1
    bne lbl_fn_805C95D0_00000D74
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_fn_805C95D0_00000B20:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xa
    bne lbl_fn_805C95D0_00000B3C
    lwz r0, 0x4(r4)
    cmpwi r0, 0x4
    bne lbl_fn_805C95D0_00000B3C
    b lbl_fn_805C95D0_00000B6C
lbl_fn_805C95D0_00000B3C:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xa
    bne lbl_fn_805C95D0_00000B5C
    lwz r0, 0xc(r4)
    cmpwi r0, 0x4
    bne lbl_fn_805C95D0_00000B5C
    b lbl_fn_805C95D0_00000B6C
lbl_fn_805C95D0_00000B5C:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805C95D0_00000B20
    li r3, -0x1
lbl_fn_805C95D0_00000B6C:
    slwi r0, r3, 2
    add r3, r26, r0
    lwz r28, 0x290(r3)
    mr r3, r28
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r28)
    lwz r0, 0x68(r26)
    cmpwi r0, 0x2
    ble lbl_fn_805C95D0_00000BD0
    lwz r4, 0x4(r26)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805C95D0_00000BB8
    li r3, 0x5
    li r4, 0x4
    mtctr r12
    bctrl
lbl_fn_805C95D0_00000BB8:
    cmpwi r3, 0x0
    bne lbl_fn_805C95D0_00000BC8
    li r3, 0x4
    bl fn_805C3570
lbl_fn_805C95D0_00000BC8:
    li r0, 0x0
    stw r0, 0x68(r26)
lbl_fn_805C95D0_00000BD0:
    li r28, 0x1
    b lbl_fn_805C95D0_00000D74
    cmpwi r5, 0x2
    bne lbl_fn_805C95D0_00000D74
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_fn_805C95D0_00000BF0:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x11
    bne lbl_fn_805C95D0_00000C0C
    lwz r0, 0x4(r4)
    cmpwi r0, 0xb
    bne lbl_fn_805C95D0_00000C0C
    b lbl_fn_805C95D0_00000C3C
lbl_fn_805C95D0_00000C0C:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x11
    bne lbl_fn_805C95D0_00000C2C
    lwz r0, 0xc(r4)
    cmpwi r0, 0xb
    bne lbl_fn_805C95D0_00000C2C
    b lbl_fn_805C95D0_00000C3C
lbl_fn_805C95D0_00000C2C:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805C95D0_00000BF0
    li r3, -0x1
lbl_fn_805C95D0_00000C3C:
    slwi r0, r3, 2
    add r3, r26, r0
    lwz r28, 0x290(r3)
    mr r3, r28
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r28)
    lwz r0, 0x68(r26)
    cmpwi r0, 0x2
    ble lbl_fn_805C95D0_00000CA0
    lwz r4, 0x4(r26)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805C95D0_00000C88
    li r3, 0x5
    li r4, 0x4
    mtctr r12
    bctrl
lbl_fn_805C95D0_00000C88:
    cmpwi r3, 0x0
    bne lbl_fn_805C95D0_00000C98
    li r3, 0x4
    bl fn_805C3570
lbl_fn_805C95D0_00000C98:
    li r0, 0x0
    stw r0, 0x68(r26)
lbl_fn_805C95D0_00000CA0:
    li r28, 0x1
    b lbl_fn_805C95D0_00000D74
    cmpwi r5, 0x2
    bne lbl_fn_805C95D0_00000D74
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_fn_805C95D0_00000CC0:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x12
    bne lbl_fn_805C95D0_00000CDC
    lwz r0, 0x4(r4)
    cmpwi r0, 0xb
    bne lbl_fn_805C95D0_00000CDC
    b lbl_fn_805C95D0_00000D0C
lbl_fn_805C95D0_00000CDC:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x12
    bne lbl_fn_805C95D0_00000CFC
    lwz r0, 0xc(r4)
    cmpwi r0, 0xb
    bne lbl_fn_805C95D0_00000CFC
    b lbl_fn_805C95D0_00000D0C
lbl_fn_805C95D0_00000CFC:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805C95D0_00000CC0
    li r3, -0x1
lbl_fn_805C95D0_00000D0C:
    slwi r0, r3, 2
    add r3, r26, r0
    lwz r28, 0x290(r3)
    mr r3, r28
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r28)
    lwz r0, 0x68(r26)
    cmpwi r0, 0x2
    ble lbl_fn_805C95D0_00000D70
    lwz r4, 0x4(r26)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805C95D0_00000D58
    li r3, 0x5
    li r4, 0x4
    mtctr r12
    bctrl
lbl_fn_805C95D0_00000D58:
    cmpwi r3, 0x0
    bne lbl_fn_805C95D0_00000D68
    li r3, 0x4
    bl fn_805C3570
lbl_fn_805C95D0_00000D68:
    li r0, 0x0
    stw r0, 0x68(r26)
lbl_fn_805C95D0_00000D70:
    li r28, 0x1
lbl_fn_805C95D0_00000D74:
    lwz r3, 0xc(r26)
    addi r4, r3, 0x1
    cmpw r31, r4
    beq lbl_fn_805C95D0_00000D90
    addi r0, r3, 0x9
    cmpw r31, r0
    bne lbl_fn_805C95D0_00000DC4
lbl_fn_805C95D0_00000D90:
    slwi r0, r4, 2
    add r4, r26, r0
    lwz r3, 0x20(r4)
    addi r0, r3, 0x1
    stw r0, 0x20(r4)
    lwz r3, 0xc(r26)
    addi r0, r3, 0x9
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r3, 0x20(r4)
    addi r0, r3, 0x1
    stw r0, 0x20(r4)
    b lbl_fn_805C95D0_00000DD8
lbl_fn_805C95D0_00000DC4:
    slwi r0, r31, 2
    add r4, r26, r0
    lwz r3, 0x20(r4)
    addi r0, r3, 0x1
    stw r0, 0x20(r4)
lbl_fn_805C95D0_00000DD8:
    cmpwi r28, 0x0
    beq lbl_fn_805C95D0_00000E34
    cmpwi r27, 0x0
    beq lbl_fn_805C95D0_00000E34
    lwz r0, 0x0(r27)
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r3, 0x24c(r4)
    lbz r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805C95D0_00000E34
    lfs f1, 0x1c0(r4)
    lfs f0, 0x2e4(r30)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_805C95D0_00000E34
    lfs f0, 0x368(r30)
    stfs f0, 0x1b0(r4)
    lwz r0, 0x0(r27)
    slwi r0, r0, 2
    add r3, r26, r0
    lwz r3, 0x24c(r3)
    bl fn_805C2630
lbl_fn_805C95D0_00000E34:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805CA420(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    bl fn_805CC3E0
    slwi r0, r3, 2
    add r6, r30, r0
    lwz r4, 0x20(r6)
    cmpwi r4, 0x0
    ble lbl_fn_805CA420_00000EDC
    lwz r5, 0xc(r30)
    addi r7, r5, 0x1
    cmpw r3, r7
    beq lbl_fn_805CA420_00000EA0
    addi r0, r5, 0x9
    cmpw r3, r0
    bne lbl_fn_805CA420_00000ED4
lbl_fn_805CA420_00000EA0:
    slwi r0, r7, 2
    add r5, r30, r0
    lwz r4, 0x20(r5)
    subi r0, r4, 0x1
    stw r0, 0x20(r5)
    lwz r4, 0xc(r30)
    addi r0, r4, 0x9
    slwi r0, r0, 2
    add r5, r30, r0
    lwz r4, 0x20(r5)
    subi r0, r4, 0x1
    stw r0, 0x20(r5)
    b lbl_fn_805CA420_00000EDC
lbl_fn_805CA420_00000ED4:
    subi r0, r4, 0x1
    stw r0, 0x20(r6)
lbl_fn_805CA420_00000EDC:
    lwz r4, 0x14(r30)
    cmpwi r4, 0x2
    bne lbl_fn_805CA420_00001900
    cmpwi r3, -0x1
    beq lbl_fn_805CA420_00001900
    lwz r0, 0x20(r6)
    cmpwi r0, 0x0
    bne lbl_fn_805CA420_00001900
    lwz r5, 0x0(r30)
    cmpwi r5, 0x2
    beq lbl_fn_805CA420_00000F7C
    lwz r0, 0xc(r30)
    cmpw r3, r0
    bge lbl_fn_805CA420_00000F7C
    lwz r0, 0x10(r30)
    lis r5, lbl_807641A0@ha
    addi r5, r5, lbl_807641A0@l
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805CA420_00000F58
lbl_fn_805CA420_00000F30:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_fn_805CA420_00000F4C
    lwz r0, 0x4(r5)
    cmpwi r0, 0x2
    bne lbl_fn_805CA420_00000F4C
    b lbl_fn_805CA420_00000F5C
lbl_fn_805CA420_00000F4C:
    addi r5, r5, 0x8
    addi r4, r4, 0x1
    bdnz lbl_fn_805CA420_00000F30
lbl_fn_805CA420_00000F58:
    li r4, -0x1
lbl_fn_805CA420_00000F5C:
    slwi r0, r4, 2
    add r3, r30, r0
    lwz r30, 0x260(r3)
    mr r3, r30
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r30)
    b lbl_fn_805CA420_00001900
lbl_fn_805CA420_00000F7C:
    lwz r0, 0xc(r30)
    subf r0, r0, r3
    cmplwi r0, 0x9
    bgt lbl_fn_805CA420_00001900
    lis r3, jumptable_80798CD4@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80798CD4@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    cmpwi r5, 0x0
    bne lbl_fn_805CA420_00001900
    cmpwi r4, 0x2
    li r4, 0x1
    bne lbl_fn_805CA420_00000FD8
    lwz r3, 0x3e8(r30)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_fn_805CA420_00000FD8
    lwz r3, 0x3c4(r30)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    bne lbl_fn_805CA420_00000FDC
lbl_fn_805CA420_00000FD8:
    li r4, 0x0
lbl_fn_805CA420_00000FDC:
    cmpwi r4, 0x0
    beq lbl_fn_805CA420_0000100C
    lwz r31, 0x3e8(r30)
    mr r3, r31
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r31)
    li r3, 0xc
    li r0, 0x0
    stw r3, 0x74(r30)
    stw r0, 0x6c(r30)
    b lbl_fn_805CA420_00001900
lbl_fn_805CA420_0000100C:
    li r0, 0xc
    stw r0, 0x6c(r30)
    b lbl_fn_805CA420_00001900
    cmpwi r5, 0x0
    bne lbl_fn_805CA420_000012B4
    lis r3, lbl_80764200@ha
    li r0, 0x25
    addi r3, r3, lbl_80764200@l
    li r31, 0x0
    mtctr r0
    nop
lbl_fn_805CA420_00001038:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x5
    bne lbl_fn_805CA420_00001054
    lwz r0, 0x4(r3)
    cmpwi r0, 0x3
    bne lbl_fn_805CA420_00001054
    b lbl_fn_805CA420_00001084
lbl_fn_805CA420_00001054:
    lwz r0, 0x8(r3)
    addi r31, r31, 0x1
    cmpwi r0, 0x5
    bne lbl_fn_805CA420_00001074
    lwz r0, 0xc(r3)
    cmpwi r0, 0x3
    bne lbl_fn_805CA420_00001074
    b lbl_fn_805CA420_00001084
lbl_fn_805CA420_00001074:
    addi r3, r3, 0x10
    addi r31, r31, 0x1
    bdnz lbl_fn_805CA420_00001038
    li r31, -0x1
lbl_fn_805CA420_00001084:
    lis r5, lbl_80764200@ha
    li r3, 0x25
    addi r5, r5, lbl_80764200@l
    li r0, 0x1
    li r8, 0x0
    mtctr r3
    nop
lbl_fn_805CA420_000010A0:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x4
    bne lbl_fn_805CA420_000010BC
    lwz r3, 0x4(r5)
    cmpwi r3, 0x2
    bne lbl_fn_805CA420_000010BC
    b lbl_fn_805CA420_000010EC
lbl_fn_805CA420_000010BC:
    lwz r3, 0x8(r5)
    addi r8, r8, 0x1
    cmpwi r3, 0x4
    bne lbl_fn_805CA420_000010DC
    lwz r3, 0xc(r5)
    cmpwi r3, 0x2
    bne lbl_fn_805CA420_000010DC
    b lbl_fn_805CA420_000010EC
lbl_fn_805CA420_000010DC:
    addi r5, r5, 0x10
    addi r8, r8, 0x1
    bdnz lbl_fn_805CA420_000010A0
    li r8, -0x1
lbl_fn_805CA420_000010EC:
    lis r5, lbl_80764200@ha
    li r3, 0x25
    addi r5, r5, lbl_80764200@l
    li r7, 0x0
    mtctr r3
lbl_fn_805CA420_00001100:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x5
    bne lbl_fn_805CA420_0000111C
    lwz r3, 0x4(r5)
    cmpwi r3, 0x3
    bne lbl_fn_805CA420_0000111C
    b lbl_fn_805CA420_0000114C
lbl_fn_805CA420_0000111C:
    lwz r3, 0x8(r5)
    addi r7, r7, 0x1
    cmpwi r3, 0x5
    bne lbl_fn_805CA420_0000113C
    lwz r3, 0xc(r5)
    cmpwi r3, 0x3
    bne lbl_fn_805CA420_0000113C
    b lbl_fn_805CA420_0000114C
lbl_fn_805CA420_0000113C:
    addi r5, r5, 0x10
    addi r7, r7, 0x1
    bdnz lbl_fn_805CA420_00001100
    li r7, -0x1
lbl_fn_805CA420_0000114C:
    lis r5, lbl_80764200@ha
    li r3, 0x25
    addi r5, r5, lbl_80764200@l
    li r6, 0x0
    mtctr r3
lbl_fn_805CA420_00001160:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x4
    bne lbl_fn_805CA420_0000117C
    lwz r3, 0x4(r5)
    cmpwi r3, 0x13
    bne lbl_fn_805CA420_0000117C
    b lbl_fn_805CA420_000011AC
lbl_fn_805CA420_0000117C:
    lwz r3, 0x8(r5)
    addi r6, r6, 0x1
    cmpwi r3, 0x4
    bne lbl_fn_805CA420_0000119C
    lwz r3, 0xc(r5)
    cmpwi r3, 0x13
    bne lbl_fn_805CA420_0000119C
    b lbl_fn_805CA420_000011AC
lbl_fn_805CA420_0000119C:
    addi r5, r5, 0x10
    addi r6, r6, 0x1
    bdnz lbl_fn_805CA420_00001160
    li r6, -0x1
lbl_fn_805CA420_000011AC:
    lis r9, lbl_80764200@ha
    li r3, 0x25
    addi r9, r9, lbl_80764200@l
    li r5, 0x0
    mtctr r3
lbl_fn_805CA420_000011C0:
    lwz r3, 0x0(r9)
    cmpwi r3, 0x5
    bne lbl_fn_805CA420_000011DC
    lwz r3, 0x4(r9)
    cmpwi r3, 0x14
    bne lbl_fn_805CA420_000011DC
    b lbl_fn_805CA420_0000120C
lbl_fn_805CA420_000011DC:
    lwz r3, 0x8(r9)
    addi r5, r5, 0x1
    cmpwi r3, 0x5
    bne lbl_fn_805CA420_000011FC
    lwz r3, 0xc(r9)
    cmpwi r3, 0x14
    bne lbl_fn_805CA420_000011FC
    b lbl_fn_805CA420_0000120C
lbl_fn_805CA420_000011FC:
    addi r9, r9, 0x10
    addi r5, r5, 0x1
    bdnz lbl_fn_805CA420_000011C0
    li r5, -0x1
lbl_fn_805CA420_0000120C:
    cmpwi r4, 0x2
    bne lbl_fn_805CA420_00001274
    slwi r3, r8, 2
    add r3, r30, r3
    lwz r3, 0x290(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    beq lbl_fn_805CA420_00001274
    slwi r3, r7, 2
    add r3, r30, r3
    lwz r3, 0x290(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    beq lbl_fn_805CA420_00001274
    slwi r3, r6, 2
    add r3, r30, r3
    lwz r3, 0x290(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    beq lbl_fn_805CA420_00001274
    slwi r3, r5, 2
    add r3, r30, r3
    lwz r3, 0x290(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    bne lbl_fn_805CA420_00001278
lbl_fn_805CA420_00001274:
    li r0, 0x0
lbl_fn_805CA420_00001278:
    cmpwi r0, 0x0
    beq lbl_fn_805CA420_000012AC
    slwi r0, r31, 2
    add r3, r30, r0
    lwz r29, 0x290(r3)
    mr r3, r29
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r29)
    li r0, 0x0
    stw r31, 0x78(r30)
    stw r0, 0x70(r30)
    b lbl_fn_805CA420_00001900
lbl_fn_805CA420_000012AC:
    stw r31, 0x70(r30)
    b lbl_fn_805CA420_00001900
lbl_fn_805CA420_000012B4:
    cmpwi r5, 0x1
    bne lbl_fn_805CA420_00001900
    lis r3, lbl_80764200@ha
    li r0, 0x25
    addi r3, r3, lbl_80764200@l
    li r31, 0x0
    mtctr r0
lbl_fn_805CA420_000012D0:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x5
    bne lbl_fn_805CA420_000012EC
    lwz r0, 0x4(r3)
    cmpwi r0, 0x14
    bne lbl_fn_805CA420_000012EC
    b lbl_fn_805CA420_0000131C
lbl_fn_805CA420_000012EC:
    lwz r0, 0x8(r3)
    addi r31, r31, 0x1
    cmpwi r0, 0x5
    bne lbl_fn_805CA420_0000130C
    lwz r0, 0xc(r3)
    cmpwi r0, 0x14
    bne lbl_fn_805CA420_0000130C
    b lbl_fn_805CA420_0000131C
lbl_fn_805CA420_0000130C:
    addi r3, r3, 0x10
    addi r31, r31, 0x1
    bdnz lbl_fn_805CA420_000012D0
    li r31, -0x1
lbl_fn_805CA420_0000131C:
    lis r5, lbl_80764200@ha
    li r3, 0x25
    addi r5, r5, lbl_80764200@l
    li r0, 0x1
    li r8, 0x0
    mtctr r3
    nop
lbl_fn_805CA420_00001338:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x4
    bne lbl_fn_805CA420_00001354
    lwz r3, 0x4(r5)
    cmpwi r3, 0x2
    bne lbl_fn_805CA420_00001354
    b lbl_fn_805CA420_00001384
lbl_fn_805CA420_00001354:
    lwz r3, 0x8(r5)
    addi r8, r8, 0x1
    cmpwi r3, 0x4
    bne lbl_fn_805CA420_00001374
    lwz r3, 0xc(r5)
    cmpwi r3, 0x2
    bne lbl_fn_805CA420_00001374
    b lbl_fn_805CA420_00001384
lbl_fn_805CA420_00001374:
    addi r5, r5, 0x10
    addi r8, r8, 0x1
    bdnz lbl_fn_805CA420_00001338
    li r8, -0x1
lbl_fn_805CA420_00001384:
    lis r5, lbl_80764200@ha
    li r3, 0x25
    addi r5, r5, lbl_80764200@l
    li r7, 0x0
    mtctr r3
lbl_fn_805CA420_00001398:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x5
    bne lbl_fn_805CA420_000013B4
    lwz r3, 0x4(r5)
    cmpwi r3, 0x3
    bne lbl_fn_805CA420_000013B4
    b lbl_fn_805CA420_000013E4
lbl_fn_805CA420_000013B4:
    lwz r3, 0x8(r5)
    addi r7, r7, 0x1
    cmpwi r3, 0x5
    bne lbl_fn_805CA420_000013D4
    lwz r3, 0xc(r5)
    cmpwi r3, 0x3
    bne lbl_fn_805CA420_000013D4
    b lbl_fn_805CA420_000013E4
lbl_fn_805CA420_000013D4:
    addi r5, r5, 0x10
    addi r7, r7, 0x1
    bdnz lbl_fn_805CA420_00001398
    li r7, -0x1
lbl_fn_805CA420_000013E4:
    lis r5, lbl_80764200@ha
    li r3, 0x25
    addi r5, r5, lbl_80764200@l
    li r6, 0x0
    mtctr r3
lbl_fn_805CA420_000013F8:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x4
    bne lbl_fn_805CA420_00001414
    lwz r3, 0x4(r5)
    cmpwi r3, 0x13
    bne lbl_fn_805CA420_00001414
    b lbl_fn_805CA420_00001444
lbl_fn_805CA420_00001414:
    lwz r3, 0x8(r5)
    addi r6, r6, 0x1
    cmpwi r3, 0x4
    bne lbl_fn_805CA420_00001434
    lwz r3, 0xc(r5)
    cmpwi r3, 0x13
    bne lbl_fn_805CA420_00001434
    b lbl_fn_805CA420_00001444
lbl_fn_805CA420_00001434:
    addi r5, r5, 0x10
    addi r6, r6, 0x1
    bdnz lbl_fn_805CA420_000013F8
    li r6, -0x1
lbl_fn_805CA420_00001444:
    lis r9, lbl_80764200@ha
    li r3, 0x25
    addi r9, r9, lbl_80764200@l
    li r5, 0x0
    mtctr r3
lbl_fn_805CA420_00001458:
    lwz r3, 0x0(r9)
    cmpwi r3, 0x5
    bne lbl_fn_805CA420_00001474
    lwz r3, 0x4(r9)
    cmpwi r3, 0x14
    bne lbl_fn_805CA420_00001474
    b lbl_fn_805CA420_000014A4
lbl_fn_805CA420_00001474:
    lwz r3, 0x8(r9)
    addi r5, r5, 0x1
    cmpwi r3, 0x5
    bne lbl_fn_805CA420_00001494
    lwz r3, 0xc(r9)
    cmpwi r3, 0x14
    bne lbl_fn_805CA420_00001494
    b lbl_fn_805CA420_000014A4
lbl_fn_805CA420_00001494:
    addi r9, r9, 0x10
    addi r5, r5, 0x1
    bdnz lbl_fn_805CA420_00001458
    li r5, -0x1
lbl_fn_805CA420_000014A4:
    cmpwi r4, 0x2
    bne lbl_fn_805CA420_0000150C
    slwi r3, r8, 2
    add r3, r30, r3
    lwz r3, 0x290(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    beq lbl_fn_805CA420_0000150C
    slwi r3, r7, 2
    add r3, r30, r3
    lwz r3, 0x290(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    beq lbl_fn_805CA420_0000150C
    slwi r3, r6, 2
    add r3, r30, r3
    lwz r3, 0x290(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    beq lbl_fn_805CA420_0000150C
    slwi r3, r5, 2
    add r3, r30, r3
    lwz r3, 0x290(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    bne lbl_fn_805CA420_00001510
lbl_fn_805CA420_0000150C:
    li r0, 0x0
lbl_fn_805CA420_00001510:
    cmpwi r0, 0x0
    beq lbl_fn_805CA420_00001544
    slwi r0, r31, 2
    add r3, r30, r0
    lwz r29, 0x290(r3)
    mr r3, r29
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r29)
    li r0, 0x0
    stw r31, 0x78(r30)
    stw r0, 0x70(r30)
    b lbl_fn_805CA420_00001900
lbl_fn_805CA420_00001544:
    stw r31, 0x70(r30)
    b lbl_fn_805CA420_00001900
    cmpwi r5, 0x1
    bne lbl_fn_805CA420_00001900
    lis r4, lbl_80764200@ha
    li r0, 0x25
    addi r4, r4, lbl_80764200@l
    li r3, 0x0
    mtctr r0
lbl_fn_805CA420_00001568:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x6
    bne lbl_fn_805CA420_00001584
    lwz r0, 0x4(r4)
    cmpwi r0, 0x7
    bne lbl_fn_805CA420_00001584
    b lbl_fn_805CA420_000015B4
lbl_fn_805CA420_00001584:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x6
    bne lbl_fn_805CA420_000015A4
    lwz r0, 0xc(r4)
    cmpwi r0, 0x7
    bne lbl_fn_805CA420_000015A4
    b lbl_fn_805CA420_000015B4
lbl_fn_805CA420_000015A4:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805CA420_00001568
    li r3, -0x1
lbl_fn_805CA420_000015B4:
    slwi r0, r3, 2
    add r3, r30, r0
    lwz r29, 0x290(r3)
    mr r3, r29
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r29)
    b lbl_fn_805CA420_00001900
    cmpwi r5, 0x1
    bne lbl_fn_805CA420_00001900
    lis r4, lbl_80764200@ha
    li r0, 0x25
    addi r4, r4, lbl_80764200@l
    li r3, 0x0
    mtctr r0
lbl_fn_805CA420_000015F0:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x7
    bne lbl_fn_805CA420_0000160C
    lwz r0, 0x4(r4)
    cmpwi r0, 0x7
    bne lbl_fn_805CA420_0000160C
    b lbl_fn_805CA420_0000163C
lbl_fn_805CA420_0000160C:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x7
    bne lbl_fn_805CA420_0000162C
    lwz r0, 0xc(r4)
    cmpwi r0, 0x7
    bne lbl_fn_805CA420_0000162C
    b lbl_fn_805CA420_0000163C
lbl_fn_805CA420_0000162C:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805CA420_000015F0
    li r3, -0x1
lbl_fn_805CA420_0000163C:
    slwi r0, r3, 2
    add r3, r30, r0
    lwz r29, 0x290(r3)
    mr r3, r29
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r29)
    b lbl_fn_805CA420_00001900
    cmpwi r5, 0x1
    bne lbl_fn_805CA420_00001900
    lis r4, lbl_80764200@ha
    li r0, 0x25
    addi r4, r4, lbl_80764200@l
    li r3, 0x0
    mtctr r0
lbl_fn_805CA420_00001678:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x8
    bne lbl_fn_805CA420_00001694
    lwz r0, 0x4(r4)
    cmpwi r0, 0x7
    bne lbl_fn_805CA420_00001694
    b lbl_fn_805CA420_000016C4
lbl_fn_805CA420_00001694:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x8
    bne lbl_fn_805CA420_000016B4
    lwz r0, 0xc(r4)
    cmpwi r0, 0x7
    bne lbl_fn_805CA420_000016B4
    b lbl_fn_805CA420_000016C4
lbl_fn_805CA420_000016B4:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805CA420_00001678
    li r3, -0x1
lbl_fn_805CA420_000016C4:
    slwi r0, r3, 2
    add r3, r30, r0
    lwz r29, 0x290(r3)
    mr r3, r29
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r29)
    b lbl_fn_805CA420_00001900
    cmpwi r5, 0x1
    bne lbl_fn_805CA420_00001900
    lis r4, lbl_80764200@ha
    li r0, 0x25
    addi r4, r4, lbl_80764200@l
    li r3, 0x0
    mtctr r0
lbl_fn_805CA420_00001700:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x9
    bne lbl_fn_805CA420_0000171C
    lwz r0, 0x4(r4)
    cmpwi r0, 0x7
    bne lbl_fn_805CA420_0000171C
    b lbl_fn_805CA420_0000174C
lbl_fn_805CA420_0000171C:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x9
    bne lbl_fn_805CA420_0000173C
    lwz r0, 0xc(r4)
    cmpwi r0, 0x7
    bne lbl_fn_805CA420_0000173C
    b lbl_fn_805CA420_0000174C
lbl_fn_805CA420_0000173C:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805CA420_00001700
    li r3, -0x1
lbl_fn_805CA420_0000174C:
    slwi r0, r3, 2
    add r3, r30, r0
    lwz r29, 0x290(r3)
    mr r3, r29
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r29)
    b lbl_fn_805CA420_00001900
    cmpwi r5, 0x1
    bne lbl_fn_805CA420_00001900
    lis r4, lbl_80764200@ha
    li r0, 0x25
    addi r4, r4, lbl_80764200@l
    li r3, 0x0
    mtctr r0
lbl_fn_805CA420_00001788:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xa
    bne lbl_fn_805CA420_000017A4
    lwz r0, 0x4(r4)
    cmpwi r0, 0x7
    bne lbl_fn_805CA420_000017A4
    b lbl_fn_805CA420_000017D4
lbl_fn_805CA420_000017A4:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xa
    bne lbl_fn_805CA420_000017C4
    lwz r0, 0xc(r4)
    cmpwi r0, 0x7
    bne lbl_fn_805CA420_000017C4
    b lbl_fn_805CA420_000017D4
lbl_fn_805CA420_000017C4:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805CA420_00001788
    li r3, -0x1
lbl_fn_805CA420_000017D4:
    slwi r0, r3, 2
    add r3, r30, r0
    lwz r29, 0x290(r3)
    mr r3, r29
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r29)
    b lbl_fn_805CA420_00001900
    cmpwi r5, 0x2
    bne lbl_fn_805CA420_00001900
    lis r4, lbl_80764200@ha
    li r0, 0x25
    addi r4, r4, lbl_80764200@l
    li r3, 0x0
    mtctr r0
lbl_fn_805CA420_00001810:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x11
    bne lbl_fn_805CA420_0000182C
    lwz r0, 0x4(r4)
    cmpwi r0, 0xc
    bne lbl_fn_805CA420_0000182C
    b lbl_fn_805CA420_0000185C
lbl_fn_805CA420_0000182C:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x11
    bne lbl_fn_805CA420_0000184C
    lwz r0, 0xc(r4)
    cmpwi r0, 0xc
    bne lbl_fn_805CA420_0000184C
    b lbl_fn_805CA420_0000185C
lbl_fn_805CA420_0000184C:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805CA420_00001810
    li r3, -0x1
lbl_fn_805CA420_0000185C:
    slwi r0, r3, 2
    add r3, r30, r0
    lwz r29, 0x290(r3)
    mr r3, r29
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r29)
    b lbl_fn_805CA420_00001900
    cmpwi r5, 0x2
    bne lbl_fn_805CA420_00001900
    lis r4, lbl_80764200@ha
    li r0, 0x25
    addi r4, r4, lbl_80764200@l
    li r3, 0x0
    mtctr r0
lbl_fn_805CA420_00001898:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x12
    bne lbl_fn_805CA420_000018B4
    lwz r0, 0x4(r4)
    cmpwi r0, 0xc
    bne lbl_fn_805CA420_000018B4
    b lbl_fn_805CA420_000018E4
lbl_fn_805CA420_000018B4:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x12
    bne lbl_fn_805CA420_000018D4
    lwz r0, 0xc(r4)
    cmpwi r0, 0xc
    bne lbl_fn_805CA420_000018D4
    b lbl_fn_805CA420_000018E4
lbl_fn_805CA420_000018D4:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805CA420_00001898
    li r3, -0x1
lbl_fn_805CA420_000018E4:
    slwi r0, r3, 2
    add r3, r30, r0
    lwz r29, 0x290(r3)
    mr r3, r29
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r29)
lbl_fn_805CA420_00001900:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805CAEF0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x40
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    bl _savegpr_26
    lis r0, 0x4330
    lis r29, lbl_80764198@ha
    lis r30, lbl_807980D8@ha
    stw r0, 0x8(r1)
    mr r28, r3
    addi r29, r29, lbl_80764198@l
    stw r0, 0x10(r1)
    addi r30, r30, lbl_807980D8@l
    bl fn_805CC3E0
    lwz r0, 0x14(r28)
    mr r31, r3
    cmpwi r0, 0x2
    bne lbl_fn_805CAEF0_00002B78
    cmpwi r3, -0x1
    beq lbl_fn_805CAEF0_00002B78
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    bne lbl_fn_805CAEF0_00001BE8
    lwz r0, 0xc(r28)
    cmpw r3, r0
    bge lbl_fn_805CAEF0_00001BE8
    lwz r6, 0x10(r28)
    addi r0, r3, 0x1
    stw r0, 0xb8(r28)
    addi r5, r29, 0x8
    addi r3, r3, 0x4
    li r4, 0x0
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_fn_805CAEF0_000019E8
    nop
lbl_fn_805CAEF0_000019C0:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_fn_805CAEF0_000019DC
    lwz r0, 0x4(r5)
    cmpwi r0, 0x1
    bne lbl_fn_805CAEF0_000019DC
    b lbl_fn_805CAEF0_000019EC
lbl_fn_805CAEF0_000019DC:
    addi r5, r5, 0x8
    addi r4, r4, 0x1
    bdnz lbl_fn_805CAEF0_000019C0
lbl_fn_805CAEF0_000019E8:
    li r4, -0x1
lbl_fn_805CAEF0_000019EC:
    slwi r0, r4, 2
    stw r4, 0x18(r28)
    add r3, r28, r0
    lwz r29, 0x260(r3)
    mr r3, r29
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r29)
    li r3, 0x0
    lwz r4, 0x4(r28)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805CAEF0_00001A30
    li r3, 0x5
    li r4, 0x5
    mtctr r12
    bctrl
lbl_fn_805CAEF0_00001A30:
    cmpwi r3, 0x0
    bne lbl_fn_805CAEF0_00001A40
    li r3, 0x5
    bl fn_805C3570
lbl_fn_805CAEF0_00001A40:
    slwi r0, r31, 2
    add r3, r28, r0
    lwz r0, 0xa0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805CAEF0_00001BDC
    li r3, 0xb
    li r0, 0x2
    stw r3, 0x14(r28)
    addi r4, r30, 0x9e4
    lwz r3, 0x1d8(r28)
    li r5, 0x1
    stw r0, 0x0(r28)
    lwz r3, 0x10(r3)
    lwz r4, 0x8(r4)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r3)
    lis r27, lbl_807CA210@ha
    mr r29, r3
    lwz r12, 0xc(r12)
    addi r27, r27, lbl_807CA210@l
    mtctr r12
    bctrl
    b lbl_fn_805CAEF0_00001ABC
lbl_fn_805CAEF0_00001AA8:
    cmplw r3, r27
    bne lbl_fn_805CAEF0_00001AB8
    li r0, 0x1
    b lbl_fn_805CAEF0_00001AC8
lbl_fn_805CAEF0_00001AB8:
    lwz r3, 0x0(r3)
lbl_fn_805CAEF0_00001ABC:
    cmpwi r3, 0x0
    bne lbl_fn_805CAEF0_00001AA8
    li r0, 0x0
lbl_fn_805CAEF0_00001AC8:
    cmpwi r0, 0x0
    beq lbl_fn_805CAEF0_00001AD4
    b lbl_fn_805CAEF0_00001AD8
lbl_fn_805CAEF0_00001AD4:
    li r29, 0x0
lbl_fn_805CAEF0_00001AD8:
    lwz r5, 0x4(r28)
    addi r0, r31, 0x1
    lwz r3, 0x24(r5)
    and. r0, r3, r0
    beq lbl_fn_805CAEF0_00001B30
    lwz r3, 0x1c(r5)
    addi r0, r31, 0x2
    slwi r7, r0, 2
    li r6, 0x0
    mulli r0, r3, 0x18
    add r0, r28, r0
    add r3, r0, r7
    lwz r3, 0xbc(r3)
    nop
lbl_fn_805CAEF0_00001B10:
    clrlslwi r0, r6, 16, 1
    lhzx r0, r3, r0
    cmplwi r0, 0xff1f
    beq lbl_fn_805CAEF0_00001B6C
    cmplwi r0, 0x3f
    beq lbl_fn_805CAEF0_00001B6C
    addi r6, r6, 0x1
    b lbl_fn_805CAEF0_00001B10
lbl_fn_805CAEF0_00001B30:
    lwz r0, 0x1c(r5)
    addi r3, r31, 0x2
    slwi r7, r3, 2
    li r6, 0x0
    mulli r3, r0, 0x18
    add r0, r7, r28
    add r3, r3, r0
    lwz r4, 0xbc(r3)
lbl_fn_805CAEF0_00001B50:
    clrlslwi r0, r6, 16, 1
    add r3, r4, r0
    lhz r0, 0x2(r3)
    cmplwi r0, 0x22
    beq lbl_fn_805CAEF0_00001B6C
    addi r6, r6, 0x1
    b lbl_fn_805CAEF0_00001B50
lbl_fn_805CAEF0_00001B6C:
    lwz r0, 0x1c(r5)
    clrlwi r4, r6, 16
    lwz r12, 0x0(r29)
    mr r3, r29
    mulli r6, r0, 0x18
    addi r0, r4, 0x1
    lwz r12, 0x70(r12)
    li r5, 0x0
    add r4, r28, r6
    add r4, r4, r7
    clrlwi r6, r0, 16
    lwz r4, 0xbc(r4)
    mtctr r12
    bctrl
    lwz r6, 0x1d8(r28)
    addi r3, r30, 0x9e4
    lwz r4, 0x8(r3)
    li r5, 0x1
    lwz r3, 0x10(r6)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    ori r0, r0, 0x1
    stb r0, 0xcf(r3)
    b lbl_fn_805CAEF0_00002B78
lbl_fn_805CAEF0_00001BDC:
    li r0, 0xf
    stw r0, 0x14(r28)
    b lbl_fn_805CAEF0_00002B78
lbl_fn_805CAEF0_00001BE8:
    lwz r0, 0xc(r28)
    subf r0, r0, r3
    cmplwi r0, 0x9
    bgt lbl_fn_805CAEF0_00002B78
    lis r3, jumptable_80798CFC@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80798CFC@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r3, 0x3e8(r28)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    bne lbl_fn_805CAEF0_00001C28
    li r0, 0x0
    stw r0, 0x14(r3)
lbl_fn_805CAEF0_00001C28:
    lwz r3, 0x3c4(r28)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    bne lbl_fn_805CAEF0_00001C40
    li r0, 0x0
    stw r0, 0x14(r3)
lbl_fn_805CAEF0_00001C40:
    li r3, 0x0
    li r0, 0x4
    stw r3, 0xb8(r28)
    stw r0, 0x18(r28)
    lwz r27, 0x3c8(r28)
    mr r3, r27
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r27)
    li r0, 0xe
    li r3, 0x0
    stw r0, 0x14(r28)
    lwz r4, 0x4(r28)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805CAEF0_00001C90
    li r3, 0x5
    li r4, 0x1
    mtctr r12
    bctrl
lbl_fn_805CAEF0_00001C90:
    cmpwi r3, 0x0
    bne lbl_fn_805CAEF0_00002B78
    li r3, 0x1
    bl fn_805C3570
    b lbl_fn_805CAEF0_00002B78
    cmpwi r4, 0x1
    bne lbl_fn_805CAEF0_00001D60
    lwz r3, 0x1d8(r28)
    addi r4, r30, 0xb74
    li r5, 0x1
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    ori r0, r0, 0x1
    stb r0, 0xcf(r3)
    lwz r27, 0x3c8(r28)
    mr r3, r27
    bl fn_805C0120
    li r29, 0x1
    stw r29, 0x14(r27)
    lwz r27, 0x3e4(r28)
    mr r3, r27
    bl fn_805C0120
    stw r29, 0x14(r27)
    li r0, 0x2
    stw r0, 0x18(r28)
    lwz r27, 0x3c0(r28)
    mr r3, r27
    bl fn_805C0120
    stw r29, 0x14(r27)
    li r3, 0xa
    li r0, 0x0
    stw r3, 0x14(r28)
    li r3, 0x0
    lwz r4, 0x4(r28)
    stw r0, 0x0(r28)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805CAEF0_00001D4C
    li r3, 0x5
    li r4, 0x8
    mtctr r12
    bctrl
lbl_fn_805CAEF0_00001D4C:
    cmpwi r3, 0x0
    bne lbl_fn_805CAEF0_00002B78
    li r3, 0x8
    bl fn_805C3570
    b lbl_fn_805CAEF0_00002B78
lbl_fn_805CAEF0_00001D60:
    cmpwi r4, 0x0
    bne lbl_fn_805CAEF0_00002B78
    lwz r27, 0x3bc(r28)
    mr r3, r27
    bl fn_805C0120
    li r29, 0x1
    stw r29, 0x14(r27)
    li r0, 0x9
    stw r0, 0x18(r28)
    lwz r27, 0x3dc(r28)
    mr r3, r27
    bl fn_805C0120
    stw r29, 0x14(r27)
    addi r3, r30, 0x998
    li r0, 0xa
    li r29, 0x2
    stw r0, 0x14(r28)
    addi r27, r3, 0x8
lbl_fn_805CAEF0_00001DA8:
    lwz r3, 0x1d8(r28)
    li r5, 0x1
    lwz r4, 0x0(r27)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r29, r29, 0x1
    cmpwi r29, 0x7
    addi r27, r27, 0x4
    rlwinm r0, r0, 0, 24, 30
    ori r0, r0, 0x1
    stb r0, 0xcf(r3)
    blt lbl_fn_805CAEF0_00001DA8
    li r0, 0x1
    stw r0, 0x0(r28)
    lwz r4, 0x4(r28)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805CAEF0_00001E14
    li r3, 0x5
    li r4, 0x5
    mtctr r12
    bctrl
lbl_fn_805CAEF0_00001E14:
    cmpwi r3, 0x0
    bne lbl_fn_805CAEF0_00002B78
    li r3, 0x5
    bl fn_805C3570
    b lbl_fn_805CAEF0_00002B78
    lwz r3, 0x84(r28)
    cmpwi r3, 0x0
    ble lbl_fn_805CAEF0_000020BC
    subi r3, r3, 0x1
    li r0, 0x25
    stw r3, 0x84(r28)
    addi r3, r3, 0x15
    addi r5, r29, 0x68
    li r4, 0x0
    mtctr r0
lbl_fn_805CAEF0_00001E50:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_fn_805CAEF0_00001E6C
    lwz r0, 0x4(r5)
    cmpwi r0, 0xa
    bne lbl_fn_805CAEF0_00001E6C
    b lbl_fn_805CAEF0_00001E9C
lbl_fn_805CAEF0_00001E6C:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_fn_805CAEF0_00001E8C
    lwz r0, 0xc(r5)
    cmpwi r0, 0xa
    bne lbl_fn_805CAEF0_00001E8C
    b lbl_fn_805CAEF0_00001E9C
lbl_fn_805CAEF0_00001E8C:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_805CAEF0_00001E50
    li r4, -0x1
lbl_fn_805CAEF0_00001E9C:
    slwi r0, r4, 2
    li r4, 0x0
    add r3, r28, r0
    addi r6, r29, 0x68
    lwz r3, 0x290(r3)
    li r0, 0x25
    li r5, 0x0
    stw r4, 0x14(r3)
    lwz r3, 0x84(r28)
    addi r3, r3, 0x15
    mtctr r0
lbl_fn_805CAEF0_00001EC8:
    lwz r0, 0x0(r6)
    cmpw r3, r0
    bne lbl_fn_805CAEF0_00001EE4
    lwz r0, 0x4(r6)
    cmpwi r0, 0x9
    bne lbl_fn_805CAEF0_00001EE4
    b lbl_fn_805CAEF0_00001F14
lbl_fn_805CAEF0_00001EE4:
    lwz r0, 0x8(r6)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_805CAEF0_00001F04
    lwz r0, 0xc(r6)
    cmpwi r0, 0x9
    bne lbl_fn_805CAEF0_00001F04
    b lbl_fn_805CAEF0_00001F14
lbl_fn_805CAEF0_00001F04:
    addi r6, r6, 0x10
    addi r5, r5, 0x1
    bdnz lbl_fn_805CAEF0_00001EC8
    li r5, -0x1
lbl_fn_805CAEF0_00001F14:
    slwi r0, r5, 2
    add r3, r28, r0
    lwz r27, 0x290(r3)
    mr r3, r27
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r27)
    lwz r0, 0x84(r28)
    cmpwi r0, 0x0
    bne lbl_fn_805CAEF0_00001FC0
    lwz r4, 0x4(r28)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805CAEF0_00001F60
    li r3, 0x5
    li r4, 0xc
    mtctr r12
    bctrl
lbl_fn_805CAEF0_00001F60:
    cmpwi r3, 0x0
    bne lbl_fn_805CAEF0_00001F70
    li r3, 0xc
    bl fn_805C3570
lbl_fn_805CAEF0_00001F70:
    lfd f31, 0x310(r29)
    mr r27, r28
    lfs f30, 0x30c(r29)
    li r30, 0x0
lbl_fn_805CAEF0_00001F80:
    lwz r0, 0x84(r28)
    lwz r3, 0x24c(r27)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f31
    fdivs f1, f0, f30
    bl fn_805C22B0
    lwz r3, 0x24c(r27)
    li r4, 0x1
    bl fn_805C22C0
    addi r30, r30, 0x1
    addi r27, r27, 0x4
    cmpwi r30, 0x4
    blt lbl_fn_805CAEF0_00001F80
    b lbl_fn_805CAEF0_00002040
lbl_fn_805CAEF0_00001FC0:
    lwz r4, 0x4(r28)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805CAEF0_00001FE4
    li r3, 0x5
    li r4, 0xa
    mtctr r12
    bctrl
lbl_fn_805CAEF0_00001FE4:
    cmpwi r3, 0x0
    bne lbl_fn_805CAEF0_00001FF4
    li r3, 0xa
    bl fn_805C3570
lbl_fn_805CAEF0_00001FF4:
    lfd f31, 0x310(r29)
    mr r27, r28
    lfs f30, 0x30c(r29)
    li r30, 0x0
lbl_fn_805CAEF0_00002004:
    lwz r0, 0x84(r28)
    lwz r3, 0x24c(r27)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f31
    fdivs f1, f0, f30
    bl fn_805C22B0
    lwz r3, 0x24c(r27)
    li r4, 0x1
    bl fn_805C22C0
    addi r30, r30, 0x1
    addi r27, r27, 0x4
    cmpwi r30, 0x4
    blt lbl_fn_805CAEF0_00002004
lbl_fn_805CAEF0_00002040:
    li r0, 0x25
    addi r4, r29, 0x68
    li r3, 0x0
    mtctr r0
lbl_fn_805CAEF0_00002050:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xb
    bne lbl_fn_805CAEF0_0000206C
    lwz r0, 0x4(r4)
    cmpwi r0, 0x5
    bne lbl_fn_805CAEF0_0000206C
    b lbl_fn_805CAEF0_0000209C
lbl_fn_805CAEF0_0000206C:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xb
    bne lbl_fn_805CAEF0_0000208C
    lwz r0, 0xc(r4)
    cmpwi r0, 0x5
    bne lbl_fn_805CAEF0_0000208C
    b lbl_fn_805CAEF0_0000209C
lbl_fn_805CAEF0_0000208C:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805CAEF0_00002050
    li r3, -0x1
lbl_fn_805CAEF0_0000209C:
    slwi r0, r3, 2
    add r3, r28, r0
    lwz r27, 0x290(r3)
    mr r3, r27
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r27)
    b lbl_fn_805CAEF0_00002B78
lbl_fn_805CAEF0_000020BC:
    lwz r4, 0x4(r28)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805CAEF0_000020E0
    li r3, 0x5
    li r4, 0xd
    mtctr r12
    bctrl
lbl_fn_805CAEF0_000020E0:
    cmpwi r3, 0x0
    bne lbl_fn_805CAEF0_00002B78
    li r3, 0xd
    bl fn_805C3570
    b lbl_fn_805CAEF0_00002B78
    lwz r3, 0x84(r28)
    cmpwi r3, 0xa
    bge lbl_fn_805CAEF0_0000238C
    li r0, 0x25
    addi r3, r3, 0x15
    addi r5, r29, 0x68
    li r4, 0x0
    mtctr r0
    nop
lbl_fn_805CAEF0_00002118:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_fn_805CAEF0_00002134
    lwz r0, 0x4(r5)
    cmpwi r0, 0x9
    bne lbl_fn_805CAEF0_00002134
    b lbl_fn_805CAEF0_00002164
lbl_fn_805CAEF0_00002134:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_fn_805CAEF0_00002154
    lwz r0, 0xc(r5)
    cmpwi r0, 0x9
    bne lbl_fn_805CAEF0_00002154
    b lbl_fn_805CAEF0_00002164
lbl_fn_805CAEF0_00002154:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_805CAEF0_00002118
    li r4, -0x1
lbl_fn_805CAEF0_00002164:
    slwi r0, r4, 2
    li r4, 0x0
    add r3, r28, r0
    addi r6, r29, 0x68
    lwz r3, 0x290(r3)
    li r0, 0x25
    li r5, 0x0
    stw r4, 0x14(r3)
    lwz r3, 0x84(r28)
    addi r3, r3, 0x15
    mtctr r0
lbl_fn_805CAEF0_00002190:
    lwz r0, 0x0(r6)
    cmpw r3, r0
    bne lbl_fn_805CAEF0_000021AC
    lwz r0, 0x4(r6)
    cmpwi r0, 0xa
    bne lbl_fn_805CAEF0_000021AC
    b lbl_fn_805CAEF0_000021DC
lbl_fn_805CAEF0_000021AC:
    lwz r0, 0x8(r6)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_805CAEF0_000021CC
    lwz r0, 0xc(r6)
    cmpwi r0, 0xa
    bne lbl_fn_805CAEF0_000021CC
    b lbl_fn_805CAEF0_000021DC
lbl_fn_805CAEF0_000021CC:
    addi r6, r6, 0x10
    addi r5, r5, 0x1
    bdnz lbl_fn_805CAEF0_00002190
    li r5, -0x1
lbl_fn_805CAEF0_000021DC:
    slwi r0, r5, 2
    add r3, r28, r0
    lwz r27, 0x290(r3)
    mr r3, r27
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r27)
    lwz r3, 0x84(r28)
    addi r0, r3, 0x1
    stw r0, 0x84(r28)
    cmpwi r0, 0xa
    bne lbl_fn_805CAEF0_00002290
    lwz r4, 0x4(r28)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805CAEF0_00002230
    li r3, 0x5
    li r4, 0xb
    mtctr r12
    bctrl
lbl_fn_805CAEF0_00002230:
    cmpwi r3, 0x0
    bne lbl_fn_805CAEF0_00002240
    li r3, 0xb
    bl fn_805C3570
lbl_fn_805CAEF0_00002240:
    lfd f31, 0x310(r29)
    mr r27, r28
    lfs f30, 0x30c(r29)
    li r30, 0x0
lbl_fn_805CAEF0_00002250:
    lwz r0, 0x84(r28)
    lwz r3, 0x24c(r27)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f31
    fdivs f1, f0, f30
    bl fn_805C22B0
    lwz r3, 0x24c(r27)
    li r4, 0x1
    bl fn_805C22C0
    addi r30, r30, 0x1
    addi r27, r27, 0x4
    cmpwi r30, 0x4
    blt lbl_fn_805CAEF0_00002250
    b lbl_fn_805CAEF0_00002310
lbl_fn_805CAEF0_00002290:
    lwz r4, 0x4(r28)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805CAEF0_000022B4
    li r3, 0x5
    li r4, 0x9
    mtctr r12
    bctrl
lbl_fn_805CAEF0_000022B4:
    cmpwi r3, 0x0
    bne lbl_fn_805CAEF0_000022C4
    li r3, 0x9
    bl fn_805C3570
lbl_fn_805CAEF0_000022C4:
    lfd f30, 0x310(r29)
    mr r27, r28
    lfs f31, 0x30c(r29)
    li r30, 0x0
lbl_fn_805CAEF0_000022D4:
    lwz r0, 0x84(r28)
    lwz r3, 0x24c(r27)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f30
    fdivs f1, f0, f31
    bl fn_805C22B0
    lwz r3, 0x24c(r27)
    li r4, 0x1
    bl fn_805C22C0
    addi r30, r30, 0x1
    addi r27, r27, 0x4
    cmpwi r30, 0x4
    blt lbl_fn_805CAEF0_000022D4
lbl_fn_805CAEF0_00002310:
    li r0, 0x25
    addi r4, r29, 0x68
    li r3, 0x0
    mtctr r0
lbl_fn_805CAEF0_00002320:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xc
    bne lbl_fn_805CAEF0_0000233C
    lwz r0, 0x4(r4)
    cmpwi r0, 0x5
    bne lbl_fn_805CAEF0_0000233C
    b lbl_fn_805CAEF0_0000236C
lbl_fn_805CAEF0_0000233C:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xc
    bne lbl_fn_805CAEF0_0000235C
    lwz r0, 0xc(r4)
    cmpwi r0, 0x5
    bne lbl_fn_805CAEF0_0000235C
    b lbl_fn_805CAEF0_0000236C
lbl_fn_805CAEF0_0000235C:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805CAEF0_00002320
    li r3, -0x1
lbl_fn_805CAEF0_0000236C:
    slwi r0, r3, 2
    add r3, r28, r0
    lwz r27, 0x290(r3)
    mr r3, r27
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r27)
    b lbl_fn_805CAEF0_00002B78
lbl_fn_805CAEF0_0000238C:
    lwz r4, 0x4(r28)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805CAEF0_000023B0
    li r3, 0x5
    li r4, 0xd
    mtctr r12
    bctrl
lbl_fn_805CAEF0_000023B0:
    cmpwi r3, 0x0
    bne lbl_fn_805CAEF0_00002B78
    li r3, 0xd
    bl fn_805C3570
    b lbl_fn_805CAEF0_00002B78
    lbz r0, 0x8c(r28)
    cmpwi r0, 0x0
    bne lbl_fn_805CAEF0_0000250C
    li r0, 0x1
    stb r0, 0x8c(r28)
    li r3, 0x1
    bl fn_806613D0
    li r0, 0x25
    addi r4, r29, 0x68
    li r3, 0x0
    mtctr r0
lbl_fn_805CAEF0_000023F0:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xe
    bne lbl_fn_805CAEF0_0000240C
    lwz r0, 0x4(r4)
    cmpwi r0, 0x8
    bne lbl_fn_805CAEF0_0000240C
    b lbl_fn_805CAEF0_0000243C
lbl_fn_805CAEF0_0000240C:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xe
    bne lbl_fn_805CAEF0_0000242C
    lwz r0, 0xc(r4)
    cmpwi r0, 0x8
    bne lbl_fn_805CAEF0_0000242C
    b lbl_fn_805CAEF0_0000243C
lbl_fn_805CAEF0_0000242C:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805CAEF0_000023F0
    li r3, -0x1
lbl_fn_805CAEF0_0000243C:
    slwi r0, r3, 2
    add r3, r28, r0
    lwz r27, 0x290(r3)
    mr r3, r27
    bl fn_805C0120
    li r0, 0x25
    li r3, 0x1
    stw r3, 0x14(r27)
    addi r4, r29, 0x68
    li r3, 0x0
    mtctr r0
lbl_fn_805CAEF0_00002468:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x10
    bne lbl_fn_805CAEF0_00002484
    lwz r0, 0x4(r4)
    cmpwi r0, 0x6
    bne lbl_fn_805CAEF0_00002484
    b lbl_fn_805CAEF0_000024B4
lbl_fn_805CAEF0_00002484:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x10
    bne lbl_fn_805CAEF0_000024A4
    lwz r0, 0xc(r4)
    cmpwi r0, 0x6
    bne lbl_fn_805CAEF0_000024A4
    b lbl_fn_805CAEF0_000024B4
lbl_fn_805CAEF0_000024A4:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805CAEF0_00002468
    li r3, -0x1
lbl_fn_805CAEF0_000024B4:
    slwi r0, r3, 2
    stw r3, 0x18(r28)
    add r3, r28, r0
    lwz r27, 0x290(r3)
    mr r3, r27
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r27)
    li r3, 0x0
    lwz r4, 0x4(r28)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805CAEF0_000024F8
    li r3, 0x5
    li r4, 0xe
    mtctr r12
    bctrl
lbl_fn_805CAEF0_000024F8:
    cmpwi r3, 0x0
    bne lbl_fn_805CAEF0_000025C0
    li r3, 0xe
    bl fn_805C3570
    b lbl_fn_805CAEF0_000025C0
lbl_fn_805CAEF0_0000250C:
    li r0, 0x25
    addi r4, r29, 0x68
    li r3, 0x0
    mtctr r0
    nop
lbl_fn_805CAEF0_00002520:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x10
    bne lbl_fn_805CAEF0_0000253C
    lwz r0, 0x4(r4)
    cmpwi r0, 0xe
    bne lbl_fn_805CAEF0_0000253C
    b lbl_fn_805CAEF0_0000256C
lbl_fn_805CAEF0_0000253C:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x10
    bne lbl_fn_805CAEF0_0000255C
    lwz r0, 0xc(r4)
    cmpwi r0, 0xe
    bne lbl_fn_805CAEF0_0000255C
    b lbl_fn_805CAEF0_0000256C
lbl_fn_805CAEF0_0000255C:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805CAEF0_00002520
    li r3, -0x1
lbl_fn_805CAEF0_0000256C:
    slwi r0, r3, 2
    stw r3, 0x18(r28)
    add r3, r28, r0
    lwz r27, 0x290(r3)
    mr r3, r27
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r27)
    li r3, 0x0
    lwz r4, 0x4(r28)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805CAEF0_000025B0
    li r3, 0x5
    li r4, 0xd
    mtctr r12
    bctrl
lbl_fn_805CAEF0_000025B0:
    cmpwi r3, 0x0
    bne lbl_fn_805CAEF0_000025C0
    li r3, 0xd
    bl fn_805C3570
lbl_fn_805CAEF0_000025C0:
    lfs f31, 0x2e4(r29)
    mr r27, r28
    li r29, 0x0
lbl_fn_805CAEF0_000025CC:
    lwz r3, 0x24c(r27)
    bl fn_805C2630
    addi r29, r29, 0x1
    stfs f31, 0x1b0(r27)
    cmpwi r29, 0x4
    stfs f31, 0x1c0(r27)
    addi r27, r27, 0x4
    blt lbl_fn_805CAEF0_000025CC
    li r0, 0x9
    stw r0, 0x14(r28)
    b lbl_fn_805CAEF0_00002B78
    lbz r0, 0x8c(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805CAEF0_00002744
    li r0, 0x0
    stb r0, 0x8c(r28)
    li r3, 0x0
    bl fn_806613D0
    li r0, 0x25
    addi r4, r29, 0x68
    li r3, 0x0
    mtctr r0
    nop
lbl_fn_805CAEF0_00002628:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xe
    bne lbl_fn_805CAEF0_00002644
    lwz r0, 0x4(r4)
    cmpwi r0, 0x6
    bne lbl_fn_805CAEF0_00002644
    b lbl_fn_805CAEF0_00002674
lbl_fn_805CAEF0_00002644:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xe
    bne lbl_fn_805CAEF0_00002664
    lwz r0, 0xc(r4)
    cmpwi r0, 0x6
    bne lbl_fn_805CAEF0_00002664
    b lbl_fn_805CAEF0_00002674
lbl_fn_805CAEF0_00002664:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805CAEF0_00002628
    li r3, -0x1
lbl_fn_805CAEF0_00002674:
    slwi r0, r3, 2
    add r3, r28, r0
    lwz r27, 0x290(r3)
    mr r3, r27
    bl fn_805C0120
    li r0, 0x25
    li r3, 0x1
    stw r3, 0x14(r27)
    addi r4, r29, 0x68
    li r3, 0x0
    mtctr r0
lbl_fn_805CAEF0_000026A0:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xd
    bne lbl_fn_805CAEF0_000026BC
    lwz r0, 0x4(r4)
    cmpwi r0, 0x8
    bne lbl_fn_805CAEF0_000026BC
    b lbl_fn_805CAEF0_000026EC
lbl_fn_805CAEF0_000026BC:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xd
    bne lbl_fn_805CAEF0_000026DC
    lwz r0, 0xc(r4)
    cmpwi r0, 0x8
    bne lbl_fn_805CAEF0_000026DC
    b lbl_fn_805CAEF0_000026EC
lbl_fn_805CAEF0_000026DC:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805CAEF0_000026A0
    li r3, -0x1
lbl_fn_805CAEF0_000026EC:
    slwi r0, r3, 2
    stw r3, 0x18(r28)
    add r3, r28, r0
    lwz r27, 0x290(r3)
    mr r3, r27
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r27)
    li r3, 0x0
    lwz r4, 0x4(r28)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805CAEF0_00002730
    li r3, 0x5
    li r4, 0xf
    mtctr r12
    bctrl
lbl_fn_805CAEF0_00002730:
    cmpwi r3, 0x0
    bne lbl_fn_805CAEF0_00002778
    li r3, 0xf
    bl fn_805C3570
    b lbl_fn_805CAEF0_00002778
lbl_fn_805CAEF0_00002744:
    lwz r4, 0x4(r28)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805CAEF0_00002768
    li r3, 0x5
    li r4, 0xd
    mtctr r12
    bctrl
lbl_fn_805CAEF0_00002768:
    cmpwi r3, 0x0
    bne lbl_fn_805CAEF0_00002778
    li r3, 0xd
    bl fn_805C3570
lbl_fn_805CAEF0_00002778:
    li r0, 0x9
    stw r0, 0x14(r28)
    b lbl_fn_805CAEF0_00002B78
    li r0, 0x25
    addi r4, r29, 0x68
    li r3, 0x0
    mtctr r0
    nop
lbl_fn_805CAEF0_00002798:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xf
    bne lbl_fn_805CAEF0_000027B4
    lwz r0, 0x4(r4)
    cmpwi r0, 0x5
    bne lbl_fn_805CAEF0_000027B4
    b lbl_fn_805CAEF0_000027E4
lbl_fn_805CAEF0_000027B4:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xf
    bne lbl_fn_805CAEF0_000027D4
    lwz r0, 0xc(r4)
    cmpwi r0, 0x5
    bne lbl_fn_805CAEF0_000027D4
    b lbl_fn_805CAEF0_000027E4
lbl_fn_805CAEF0_000027D4:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805CAEF0_00002798
    li r3, -0x1
lbl_fn_805CAEF0_000027E4:
    slwi r0, r3, 2
    stw r3, 0x18(r28)
    add r3, r28, r0
    lwz r27, 0x290(r3)
    mr r3, r27
    bl fn_805C0120
    li r3, 0x1
    stw r3, 0x14(r27)
    li r0, 0x3
    lfs f31, 0x2e4(r29)
    stw r0, 0x14(r28)
    mr r27, r28
    li r26, 0x0
    li r31, 0x0
    stb r3, 0x90(r28)
lbl_fn_805CAEF0_00002820:
    stfs f31, 0x1b0(r27)
    stfs f31, 0x1c0(r27)
    lwz r3, 0x24c(r27)
    bl fn_805C26A0
    lwz r3, 0x24c(r27)
    addi r26, r26, 0x1
    cmpwi r26, 0x4
    addi r27, r27, 0x4
    stb r31, 0x44(r3)
    blt lbl_fn_805CAEF0_00002820
    lis r3, lbl_807CA148@ha
    lfs f1, 0x300(r29)
    lwz r4, lbl_807CA148@l(r3)
    li r5, 0x1
    lwz r3, 0x1d8(r28)
    lwz r4, 0x4(r4)
    lfs f0, 0x30(r4)
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x1d0(r28)
    lwz r3, 0x10(r3)
    lwz r4, 0x9e4(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r4, r30, 0x9e4
    li r5, 0x1
    rlwinm r0, r0, 0, 24, 30
    ori r0, r0, 0x1
    stb r0, 0xcf(r3)
    lwz r3, 0x1d8(r28)
    lwz r4, 0x4(r4)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    li r4, 0x0
    rlwinm r0, r0, 0, 24, 30
    ori r0, r0, 0x1
    stb r0, 0xcf(r3)
    lwz r3, 0x4(r28)
    lwz r12, 0x14(r3)
    cmpwi r12, 0x0
    beq lbl_fn_805CAEF0_000028FC
    li r3, 0x5
    li r4, 0x5
    mtctr r12
    bctrl
    mr r4, r3
lbl_fn_805CAEF0_000028FC:
    cmpwi r4, 0x0
    bne lbl_fn_805CAEF0_0000290C
    li r3, 0x5
    bl fn_805C3570
lbl_fn_805CAEF0_0000290C:
    lwz r4, 0x4(r28)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805CAEF0_00002930
    li r3, 0x5
    li r4, 0x10
    mtctr r12
    bctrl
lbl_fn_805CAEF0_00002930:
    cmpwi r3, 0x0
    bne lbl_fn_805CAEF0_00002B78
    li r3, 0x10
    bl fn_805C3570
    b lbl_fn_805CAEF0_00002B78
    li r0, 0x25
    addi r4, r29, 0x68
    li r3, 0x0
    mtctr r0
    nop
lbl_fn_805CAEF0_00002958:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x13
    bne lbl_fn_805CAEF0_00002974
    lwz r0, 0x4(r4)
    cmpwi r0, 0xd
    bne lbl_fn_805CAEF0_00002974
    b lbl_fn_805CAEF0_000029A4
lbl_fn_805CAEF0_00002974:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x13
    bne lbl_fn_805CAEF0_00002994
    lwz r0, 0xc(r4)
    cmpwi r0, 0xd
    bne lbl_fn_805CAEF0_00002994
    b lbl_fn_805CAEF0_000029A4
lbl_fn_805CAEF0_00002994:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805CAEF0_00002958
    li r3, -0x1
lbl_fn_805CAEF0_000029A4:
    slwi r0, r3, 2
    stw r3, 0x18(r28)
    add r3, r28, r0
    lwz r27, 0x290(r3)
    mr r3, r27
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r27)
    li r3, 0xd
    lwz r4, 0xb8(r28)
    li r0, 0x0
    stw r3, 0x14(r28)
    cmpwi r4, 0x1
    stw r0, 0x0(r28)
    bne lbl_fn_805CAEF0_00002A20
    lwz r4, 0x4(r28)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805CAEF0_00002A04
    li r3, 0x5
    li r4, 0x2
    mtctr r12
    bctrl
lbl_fn_805CAEF0_00002A04:
    cmpwi r3, 0x0
    bne lbl_fn_805CAEF0_00002A14
    li r3, 0x2
    bl fn_805C3570
lbl_fn_805CAEF0_00002A14:
    li r0, 0x0
    stb r0, 0x400(r28)
    b lbl_fn_805CAEF0_00002B78
lbl_fn_805CAEF0_00002A20:
    cmpwi r4, 0x2
    bne lbl_fn_805CAEF0_00002A68
    lwz r4, 0x4(r28)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805CAEF0_00002A4C
    li r3, 0x5
    li r4, 0x3
    mtctr r12
    bctrl
lbl_fn_805CAEF0_00002A4C:
    cmpwi r3, 0x0
    bne lbl_fn_805CAEF0_00002A5C
    li r3, 0x3
    bl fn_805C3570
lbl_fn_805CAEF0_00002A5C:
    li r0, 0x1
    stb r0, 0x400(r28)
    b lbl_fn_805CAEF0_00002B78
lbl_fn_805CAEF0_00002A68:
    cmpwi r4, 0x4
    bne lbl_fn_805CAEF0_00002B78
    lwz r4, 0x4(r28)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805CAEF0_00002A94
    li r3, 0x5
    li r4, 0x3
    mtctr r12
    bctrl
lbl_fn_805CAEF0_00002A94:
    cmpwi r3, 0x0
    bne lbl_fn_805CAEF0_00002AA4
    li r3, 0x3
    bl fn_805C3570
lbl_fn_805CAEF0_00002AA4:
    li r0, 0x0
    stb r0, 0x400(r28)
    b lbl_fn_805CAEF0_00002B78
    li r0, 0x25
    addi r4, r29, 0x68
    li r3, 0x0
    mtctr r0
lbl_fn_805CAEF0_00002AC0:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x14
    bne lbl_fn_805CAEF0_00002ADC
    lwz r0, 0x4(r4)
    cmpwi r0, 0xd
    bne lbl_fn_805CAEF0_00002ADC
    b lbl_fn_805CAEF0_00002B0C
lbl_fn_805CAEF0_00002ADC:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x14
    bne lbl_fn_805CAEF0_00002AFC
    lwz r0, 0xc(r4)
    cmpwi r0, 0xd
    bne lbl_fn_805CAEF0_00002AFC
    b lbl_fn_805CAEF0_00002B0C
lbl_fn_805CAEF0_00002AFC:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805CAEF0_00002AC0
    li r3, -0x1
lbl_fn_805CAEF0_00002B0C:
    slwi r0, r3, 2
    stw r3, 0x18(r28)
    add r3, r28, r0
    lwz r27, 0x290(r3)
    mr r3, r27
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r27)
    li r3, 0xd
    li r5, -0x1
    li r0, 0x0
    stw r3, 0x14(r28)
    lwz r4, 0x4(r28)
    li r3, 0x0
    stw r5, 0xb8(r28)
    stw r0, 0x0(r28)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805CAEF0_00002B68
    li r3, 0x5
    li r4, 0x6
    mtctr r12
    bctrl
lbl_fn_805CAEF0_00002B68:
    cmpwi r3, 0x0
    bne lbl_fn_805CAEF0_00002B78
    li r3, 0x6
    bl fn_805C3570
lbl_fn_805CAEF0_00002B78:
    addi r11, r1, 0x40
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    bl _restgpr_26
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
