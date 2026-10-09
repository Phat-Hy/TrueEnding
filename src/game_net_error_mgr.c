#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_800DD3FC(void);
extern void fn_801173A8(void);
extern void fn_80206B9C(void);
extern void fn_80206C50(void);
extern void fn_80518FB8(void);
extern void fn_80518FD0(void);
extern void fn_80518FF0(void);
extern void fn_8051900C(void);
extern void fn_805190A4(void);
extern void fn_80519390(void);
extern void fn_80686A48(void);
extern void fn_80686AF0(void);
extern void fn_80686B64(void);

/* External data declarations */
extern u8 lbl_807934F4[];

/* Small data declarations */
extern u32 lbl_8087E490;
extern u32 lbl_8087E494;
extern u32 lbl_8087F1E4;
extern u32 lbl_808813D0;

/* Function declarations */
void fn_805193B8(void);
void fn_805193C8(void);
void fn_805193D4(void);
void fn_805193E8(void);
void fn_805193F4(void);
void fn_80519404(void);
void fn_8051940C(void);
void fn_8051941C(void);
void fn_8051994C(void);
void fn_80519C6C(void);
void fn_8051A19C(void);
void fn_8051AD58(void);

asm void fn_805193B8(void)
{
    nofralloc
    mulli r0, r4, 0x18
    lwz r3, 0x0(r3)
    add r3, r3, r0
    blr
}

asm void fn_805193C8(void)
{
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    blr
}

asm void fn_805193D4(void)
{
    nofralloc
    neg r0, r4
    lwz r3, 0x0(r3)
    mulli r0, r0, 0x18
    add r3, r3, r0
    blr
}

asm void fn_805193E8(void)
{
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    blr
}

asm void fn_805193F4(void)
{
    nofralloc
    lwz r4, 0x0(r3)
    addi r0, r4, 0x18
    stw r0, 0x0(r3)
    blr
}

asm void fn_80519404(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_8051940C(void)
{
    nofralloc
    lwz r4, 0x0(r3)
    subi r0, r4, 0x18
    stw r0, 0x0(r3)
    blr
}

asm void fn_8051941C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x64(r1)
    stmw r27, 0x4c(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    addi r31, r6, 0x6667
lbl_fn_8051941C_00000088:
    mr r3, r28
    mr r4, r27
    bl fn_80519390
    cmpwi r3, 0x1
    mr r30, r3
    ble lbl_fn_8051941C_00000580
    cmpwi r3, 0x14
    bgt lbl_fn_8051941C_000000CC
    lwz r0, 0x0(r28)
    mr r5, r29
    stw r0, 0x30(r1)
    addi r3, r1, 0x34
    addi r4, r1, 0x30
    lwz r0, 0x0(r27)
    stw r0, 0x34(r1)
    bl fn_8051AD58
    b lbl_fn_8051941C_00000580
lbl_fn_8051941C_000000CC:
    lwz r5, lbl_8087E490
    srawi r0, r30, 2
    addze r6, r0
    mr r3, r27
    mulhw r0, r31, r5
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r5
    add r4, r6, r0
    bl fn_805193B8
    stw r3, 0x2c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x2c
    bl fn_805193C8
    lwz r3, lbl_8087E490
    addi r6, r3, 0x1
    stw r6, lbl_8087E490
    cmpwi r6, 0x5
    blt lbl_fn_8051941C_00000128
    li r6, -0x4
    stw r6, lbl_8087E490
lbl_fn_8051941C_00000128:
    mulhw r0, r31, r6
    slwi r4, r30, 2
    mr r3, r27
    subf r4, r30, r4
    srawi r4, r4, 2
    addze r5, r4
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r4, r5, r0
    bl fn_805193B8
    stw r3, 0x28(r1)
    addi r3, r1, 0x3c
    addi r4, r1, 0x28
    bl fn_805193C8
    lwz r3, lbl_8087E490
    addi r0, r3, 0x1
    stw r0, lbl_8087E490
    cmpwi r0, 0x5
    blt lbl_fn_8051941C_00000188
    li r6, -0x4
    stw r6, lbl_8087E490
lbl_fn_8051941C_00000188:
    mr r3, r28
    li r4, 0x1
    bl fn_805193D4
    stw r3, 0x24(r1)
    addi r3, r1, 0x38
    addi r4, r1, 0x24
    bl fn_805193C8
    lwz r5, 0x38(r1)
    mr r6, r29
    lwz r7, 0x3c(r1)
    addi r3, r1, 0x20
    lwz r0, 0x40(r1)
    addi r4, r1, 0x1c
    stw r5, 0x18(r1)
    addi r5, r1, 0x18
    stw r7, 0x1c(r1)
    stw r0, 0x20(r1)
    bl fn_8051A19C
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_805193E8
    addi r3, r1, 0x3c
    addi r4, r1, 0x38
    bl fn_805193E8
    b lbl_fn_8051941C_000001F4
lbl_fn_8051941C_000001EC:
    addi r3, r1, 0x40
    bl fn_805193F4
lbl_fn_8051941C_000001F4:
    addi r3, r1, 0x38
    bl fn_80519404
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_80519404
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8051994C
    cmpwi r3, 0x0
    bne lbl_fn_8051941C_000001EC
lbl_fn_8051941C_00000220:
    addi r3, r1, 0x3c
    bl fn_8051940C
    mr r4, r3
    addi r3, r1, 0x40
    bl fn_805190A4
    cmpwi r3, 0x0
    beq lbl_fn_8051941C_00000268
    addi r3, r1, 0x38
    bl fn_80519404
    mr r30, r3
    addi r3, r1, 0x3c
    bl fn_80519404
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8051994C
    cmpwi r3, 0x0
    beq lbl_fn_8051941C_00000220
lbl_fn_8051941C_00000268:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_80518FF0
    cmpwi r3, 0x0
    beq lbl_fn_8051941C_00000344
    addi r3, r1, 0x3c
    bl fn_80519404
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_80519404
    mr r4, r30
    bl fn_8051900C
    addi r3, r1, 0x40
    bl fn_805193F4
    b lbl_fn_8051941C_000002AC
lbl_fn_8051941C_000002A4:
    addi r3, r1, 0x40
    bl fn_805193F4
lbl_fn_8051941C_000002AC:
    addi r3, r1, 0x38
    bl fn_80519404
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_80519404
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8051994C
    cmpwi r3, 0x0
    bne lbl_fn_8051941C_000002A4
lbl_fn_8051941C_000002D8:
    addi r3, r1, 0x38
    bl fn_80519404
    mr r30, r3
    addi r3, r1, 0x3c
    bl fn_8051940C
    bl fn_80519404
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8051994C
    cmpwi r3, 0x0
    beq lbl_fn_8051941C_000002D8
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_80518FD0
    cmpwi r3, 0x0
    bne lbl_fn_8051941C_00000344
    addi r3, r1, 0x3c
    bl fn_80519404
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_80519404
    mr r4, r30
    bl fn_8051900C
    addi r3, r1, 0x40
    bl fn_805193F4
    b lbl_fn_8051941C_000002AC
lbl_fn_8051941C_00000344:
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_80518FB8
    cmpwi r3, 0x0
    beq lbl_fn_8051941C_000004FC
    addi r3, r1, 0x38
    bl fn_80519404
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_80519404
    mr r4, r30
    bl fn_8051900C
    addi r3, r1, 0x40
    bl fn_805193F4
    mr r4, r28
    addi r3, r1, 0x3c
    bl fn_805193E8
    addi r3, r1, 0x3c
    bl fn_8051940C
    bl fn_80519404
    mr r30, r3
    mr r3, r27
    bl fn_80519404
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8051994C
    cmpwi r3, 0x0
    bne lbl_fn_8051941C_00000434
    b lbl_fn_8051941C_000003C4
lbl_fn_8051941C_000003BC:
    addi r3, r1, 0x40
    bl fn_805193F4
lbl_fn_8051941C_000003C4:
    mr r4, r28
    addi r3, r1, 0x40
    bl fn_805190A4
    cmpwi r3, 0x0
    beq lbl_fn_8051941C_00000404
    addi r3, r1, 0x40
    bl fn_80519404
    mr r30, r3
    mr r3, r27
    bl fn_80519404
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8051994C
    cmpwi r3, 0x0
    beq lbl_fn_8051941C_000003BC
lbl_fn_8051941C_00000404:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_80518FF0
    cmpwi r3, 0x0
    beq lbl_fn_8051941C_00000434
    addi r3, r1, 0x3c
    bl fn_80519404
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_80519404
    mr r4, r30
    bl fn_8051900C
lbl_fn_8051941C_00000434:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_80518FF0
    cmpwi r3, 0x0
    beq lbl_fn_8051941C_000004EC
    b lbl_fn_8051941C_00000454
lbl_fn_8051941C_0000044C:
    addi r3, r1, 0x40
    bl fn_805193F4
lbl_fn_8051941C_00000454:
    addi r3, r1, 0x40
    bl fn_80519404
    mr r30, r3
    mr r3, r27
    bl fn_80519404
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8051994C
    cmpwi r3, 0x0
    beq lbl_fn_8051941C_0000044C
lbl_fn_8051941C_00000480:
    addi r3, r1, 0x3c
    bl fn_8051940C
    bl fn_80519404
    mr r30, r3
    mr r3, r27
    bl fn_80519404
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8051994C
    cmpwi r3, 0x0
    bne lbl_fn_8051941C_00000480
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_80518FD0
    cmpwi r3, 0x0
    bne lbl_fn_8051941C_000004EC
    addi r3, r1, 0x3c
    bl fn_80519404
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_80519404
    mr r4, r30
    bl fn_8051900C
    addi r3, r1, 0x40
    bl fn_805193F4
    b lbl_fn_8051941C_00000454
lbl_fn_8051941C_000004EC:
    mr r3, r27
    addi r4, r1, 0x40
    bl fn_805193E8
    b lbl_fn_8051941C_00000088
lbl_fn_8051941C_000004FC:
    mr r3, r28
    addi r4, r1, 0x40
    bl fn_80519390
    mr r30, r3
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_80519390
    cmpw r3, r30
    bge lbl_fn_8051941C_00000550
    lwz r0, 0x40(r1)
    mr r5, r29
    stw r0, 0x10(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    lwz r0, 0x0(r27)
    stw r0, 0x14(r1)
    bl fn_80519C6C
    mr r3, r27
    addi r4, r1, 0x40
    bl fn_805193E8
    b lbl_fn_8051941C_00000088
lbl_fn_8051941C_00000550:
    lwz r4, 0x0(r28)
    mr r5, r29
    lwz r0, 0x40(r1)
    addi r3, r1, 0xc
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    bl fn_80519C6C
    mr r3, r28
    addi r4, r1, 0x40
    bl fn_805193E8
    b lbl_fn_8051941C_00000088
lbl_fn_8051941C_00000580:
    lmw r27, 0x4c(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8051994C(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stmw r25, 0x114(r1)
    mr r27, r4
    lwz r31, 0x10(r4)
    mr r28, r5
    lwz r30, 0x10(r5)
    mr r3, r31
    bl fn_801173A8
    mr r29, r3
    mr r3, r30
    bl fn_801173A8
    cmpw r29, r3
    beq lbl_fn_8051994C_000005E8
    xor r0, r3, r29
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r3, r0, 31
    b lbl_fn_8051994C_000008A0
lbl_fn_8051994C_000005E8:
    lha r4, 0xbc(r30)
    lha r0, 0xbc(r31)
    cmpw r0, r4
    beq lbl_fn_8051994C_00000610
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_8051994C_000008A0
lbl_fn_8051994C_00000610:
    cmpwi r0, 0x2
    beq lbl_fn_8051994C_00000650
    cmpwi r4, 0x2
    beq lbl_fn_8051994C_00000650
    cmpwi r0, 0x3
    beq lbl_fn_8051994C_00000650
    cmpwi r4, 0x3
    beq lbl_fn_8051994C_00000650
    lwz r0, 0x14(r27)
    lwz r4, 0x14(r28)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_8051994C_000008A0
lbl_fn_8051994C_00000650:
    lwz r3, 0x8(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8051994C_00000670
    lwz r0, 0x8(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8051994C_00000670
    li r3, 0x1
    b lbl_fn_8051994C_000008A0
lbl_fn_8051994C_00000670:
    cmpwi r3, 0x0
    bne lbl_fn_8051994C_0000068C
    lwz r0, 0x8(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8051994C_0000068C
    li r3, 0x0
    b lbl_fn_8051994C_000008A0
lbl_fn_8051994C_0000068C:
    lwz r3, 0x0(r27)
    li r26, 0x0
    li r25, 0x0
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_8051994C_000006B0
    lwz r3, 0x0(r27)
    bl fn_80206C50
    mr r26, r3
lbl_fn_8051994C_000006B0:
    lwz r3, 0x0(r28)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_8051994C_000006CC
    lwz r3, 0x0(r28)
    bl fn_80206C50
    mr r25, r3
lbl_fn_8051994C_000006CC:
    cmpwi r26, 0x0
    beq lbl_fn_8051994C_00000704
    cmpwi r25, 0x0
    beq lbl_fn_8051994C_00000704
    lwz r4, 0x78(r25)
    lwz r0, 0x78(r26)
    cmpw r0, r4
    beq lbl_fn_8051994C_00000704
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_8051994C_000008A0
lbl_fn_8051994C_00000704:
    lwz r0, 0x8(r27)
    lwz r29, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8051994C_00000744
    cmpwi r26, 0x0
    beq lbl_fn_8051994C_00000744
    lwz r3, 0xb8(r26)
    lwz r4, lbl_8087F1E4
    addi r0, r3, 0xeb
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r29, 0x4(r3)
    cmpwi r29, 0x0
    beq lbl_fn_8051994C_00000740
    b lbl_fn_8051994C_00000744
lbl_fn_8051994C_00000740:
    la r29, lbl_808813D0
lbl_fn_8051994C_00000744:
    lwz r0, 0x8(r28)
    lwz r26, 0x8(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8051994C_00000784
    cmpwi r25, 0x0
    beq lbl_fn_8051994C_00000784
    lwz r3, 0xb8(r25)
    lwz r4, lbl_8087F1E4
    addi r0, r3, 0xeb
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r26, 0x4(r3)
    cmpwi r26, 0x0
    beq lbl_fn_8051994C_00000780
    b lbl_fn_8051994C_00000784
lbl_fn_8051994C_00000780:
    la r26, lbl_808813D0
lbl_fn_8051994C_00000784:
    lis r4, lbl_807934F4@ha
    mr r5, r29
    addi r3, r1, 0x88
    addi r4, r4, lbl_807934F4@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x88
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_8051994C_000007B8
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_8051994C_000007B8:
    lis r4, lbl_807934F4@ha
    mr r5, r26
    addi r3, r1, 0x8
    addi r4, r4, lbl_807934F4@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x8
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_8051994C_000007EC
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_8051994C_000007EC:
    addi r3, r1, 0x88
    addi r4, r1, 0x8
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_8051994C_00000890
    lwz r0, 0x8(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8051994C_0000085C
    lwz r0, 0x8(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8051994C_0000085C
    lwz r29, 0x8(r30)
    lwz r30, 0x8(r31)
    mr r4, r29
    mr r3, r30
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_8051994C_00000848
    lhz r3, 0x4(r27)
    lhz r0, 0x4(r28)
    subf r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_8051994C_000008A0
lbl_fn_8051994C_00000848:
    mr r3, r30
    mr r4, r29
    bl fn_80686AF0
    srwi r3, r3, 31
    b lbl_fn_8051994C_000008A0
lbl_fn_8051994C_0000085C:
    mr r3, r29
    bl fn_80686A48
    mr r27, r3
    mr r3, r26
    bl fn_80686A48
    cmpw r27, r3
    beq lbl_fn_8051994C_00000890
    xor r0, r3, r27
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r3, r0, 31
    b lbl_fn_8051994C_000008A0
lbl_fn_8051994C_00000890:
    mr r3, r29
    mr r4, r26
    bl fn_80686AF0
    srwi r3, r3, 31
lbl_fn_8051994C_000008A0:
    lmw r25, 0x114(r1)
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_80519C6C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x64(r1)
    stmw r27, 0x4c(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    addi r31, r6, 0x6667
lbl_fn_80519C6C_000008D8:
    mr r3, r28
    mr r4, r27
    bl fn_80519390
    cmpwi r3, 0x1
    mr r30, r3
    ble lbl_fn_80519C6C_00000DD0
    cmpwi r3, 0x14
    bgt lbl_fn_80519C6C_0000091C
    lwz r0, 0x0(r28)
    mr r5, r29
    stw r0, 0x30(r1)
    addi r3, r1, 0x34
    addi r4, r1, 0x30
    lwz r0, 0x0(r27)
    stw r0, 0x34(r1)
    bl fn_8051AD58
    b lbl_fn_80519C6C_00000DD0
lbl_fn_80519C6C_0000091C:
    lwz r5, lbl_8087E494
    srawi r0, r30, 2
    addze r6, r0
    mr r3, r27
    mulhw r0, r31, r5
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r5
    add r4, r6, r0
    bl fn_805193B8
    stw r3, 0x2c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x2c
    bl fn_805193C8
    lwz r3, lbl_8087E494
    addi r6, r3, 0x1
    stw r6, lbl_8087E494
    cmpwi r6, 0x5
    blt lbl_fn_80519C6C_00000978
    li r6, -0x4
    stw r6, lbl_8087E494
lbl_fn_80519C6C_00000978:
    mulhw r0, r31, r6
    slwi r4, r30, 2
    mr r3, r27
    subf r4, r30, r4
    srawi r4, r4, 2
    addze r5, r4
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r4, r5, r0
    bl fn_805193B8
    stw r3, 0x28(r1)
    addi r3, r1, 0x3c
    addi r4, r1, 0x28
    bl fn_805193C8
    lwz r3, lbl_8087E494
    addi r0, r3, 0x1
    stw r0, lbl_8087E494
    cmpwi r0, 0x5
    blt lbl_fn_80519C6C_000009D8
    li r6, -0x4
    stw r6, lbl_8087E494
lbl_fn_80519C6C_000009D8:
    mr r3, r28
    li r4, 0x1
    bl fn_805193D4
    stw r3, 0x24(r1)
    addi r3, r1, 0x38
    addi r4, r1, 0x24
    bl fn_805193C8
    lwz r5, 0x38(r1)
    mr r6, r29
    lwz r7, 0x3c(r1)
    addi r3, r1, 0x20
    lwz r0, 0x40(r1)
    addi r4, r1, 0x1c
    stw r5, 0x18(r1)
    addi r5, r1, 0x18
    stw r7, 0x1c(r1)
    stw r0, 0x20(r1)
    bl fn_8051A19C
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_805193E8
    addi r3, r1, 0x3c
    addi r4, r1, 0x38
    bl fn_805193E8
    b lbl_fn_80519C6C_00000A44
lbl_fn_80519C6C_00000A3C:
    addi r3, r1, 0x40
    bl fn_805193F4
lbl_fn_80519C6C_00000A44:
    addi r3, r1, 0x38
    bl fn_80519404
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_80519404
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8051994C
    cmpwi r3, 0x0
    bne lbl_fn_80519C6C_00000A3C
lbl_fn_80519C6C_00000A70:
    addi r3, r1, 0x3c
    bl fn_8051940C
    mr r4, r3
    addi r3, r1, 0x40
    bl fn_805190A4
    cmpwi r3, 0x0
    beq lbl_fn_80519C6C_00000AB8
    addi r3, r1, 0x38
    bl fn_80519404
    mr r30, r3
    addi r3, r1, 0x3c
    bl fn_80519404
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8051994C
    cmpwi r3, 0x0
    beq lbl_fn_80519C6C_00000A70
lbl_fn_80519C6C_00000AB8:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_80518FF0
    cmpwi r3, 0x0
    beq lbl_fn_80519C6C_00000B94
    addi r3, r1, 0x3c
    bl fn_80519404
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_80519404
    mr r4, r30
    bl fn_8051900C
    addi r3, r1, 0x40
    bl fn_805193F4
    b lbl_fn_80519C6C_00000AFC
lbl_fn_80519C6C_00000AF4:
    addi r3, r1, 0x40
    bl fn_805193F4
lbl_fn_80519C6C_00000AFC:
    addi r3, r1, 0x38
    bl fn_80519404
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_80519404
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8051994C
    cmpwi r3, 0x0
    bne lbl_fn_80519C6C_00000AF4
lbl_fn_80519C6C_00000B28:
    addi r3, r1, 0x38
    bl fn_80519404
    mr r30, r3
    addi r3, r1, 0x3c
    bl fn_8051940C
    bl fn_80519404
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8051994C
    cmpwi r3, 0x0
    beq lbl_fn_80519C6C_00000B28
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_80518FD0
    cmpwi r3, 0x0
    bne lbl_fn_80519C6C_00000B94
    addi r3, r1, 0x3c
    bl fn_80519404
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_80519404
    mr r4, r30
    bl fn_8051900C
    addi r3, r1, 0x40
    bl fn_805193F4
    b lbl_fn_80519C6C_00000AFC
lbl_fn_80519C6C_00000B94:
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_80518FB8
    cmpwi r3, 0x0
    beq lbl_fn_80519C6C_00000D4C
    addi r3, r1, 0x38
    bl fn_80519404
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_80519404
    mr r4, r30
    bl fn_8051900C
    addi r3, r1, 0x40
    bl fn_805193F4
    mr r4, r28
    addi r3, r1, 0x3c
    bl fn_805193E8
    addi r3, r1, 0x3c
    bl fn_8051940C
    bl fn_80519404
    mr r30, r3
    mr r3, r27
    bl fn_80519404
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8051994C
    cmpwi r3, 0x0
    bne lbl_fn_80519C6C_00000C84
    b lbl_fn_80519C6C_00000C14
lbl_fn_80519C6C_00000C0C:
    addi r3, r1, 0x40
    bl fn_805193F4
lbl_fn_80519C6C_00000C14:
    mr r4, r28
    addi r3, r1, 0x40
    bl fn_805190A4
    cmpwi r3, 0x0
    beq lbl_fn_80519C6C_00000C54
    addi r3, r1, 0x40
    bl fn_80519404
    mr r30, r3
    mr r3, r27
    bl fn_80519404
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8051994C
    cmpwi r3, 0x0
    beq lbl_fn_80519C6C_00000C0C
lbl_fn_80519C6C_00000C54:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_80518FF0
    cmpwi r3, 0x0
    beq lbl_fn_80519C6C_00000C84
    addi r3, r1, 0x3c
    bl fn_80519404
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_80519404
    mr r4, r30
    bl fn_8051900C
lbl_fn_80519C6C_00000C84:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_80518FF0
    cmpwi r3, 0x0
    beq lbl_fn_80519C6C_00000D3C
    b lbl_fn_80519C6C_00000CA4
lbl_fn_80519C6C_00000C9C:
    addi r3, r1, 0x40
    bl fn_805193F4
lbl_fn_80519C6C_00000CA4:
    addi r3, r1, 0x40
    bl fn_80519404
    mr r30, r3
    mr r3, r27
    bl fn_80519404
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8051994C
    cmpwi r3, 0x0
    beq lbl_fn_80519C6C_00000C9C
lbl_fn_80519C6C_00000CD0:
    addi r3, r1, 0x3c
    bl fn_8051940C
    bl fn_80519404
    mr r30, r3
    mr r3, r27
    bl fn_80519404
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8051994C
    cmpwi r3, 0x0
    bne lbl_fn_80519C6C_00000CD0
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_80518FD0
    cmpwi r3, 0x0
    bne lbl_fn_80519C6C_00000D3C
    addi r3, r1, 0x3c
    bl fn_80519404
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_80519404
    mr r4, r30
    bl fn_8051900C
    addi r3, r1, 0x40
    bl fn_805193F4
    b lbl_fn_80519C6C_00000CA4
lbl_fn_80519C6C_00000D3C:
    mr r3, r27
    addi r4, r1, 0x40
    bl fn_805193E8
    b lbl_fn_80519C6C_000008D8
lbl_fn_80519C6C_00000D4C:
    mr r3, r28
    addi r4, r1, 0x40
    bl fn_80519390
    mr r30, r3
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_80519390
    cmpw r3, r30
    bge lbl_fn_80519C6C_00000DA0
    lwz r0, 0x40(r1)
    mr r5, r29
    stw r0, 0x10(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    lwz r0, 0x0(r27)
    stw r0, 0x14(r1)
    bl fn_80519C6C
    mr r3, r27
    addi r4, r1, 0x40
    bl fn_805193E8
    b lbl_fn_80519C6C_000008D8
lbl_fn_80519C6C_00000DA0:
    lwz r4, 0x0(r28)
    mr r5, r29
    lwz r0, 0x40(r1)
    addi r3, r1, 0xc
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    bl fn_80519C6C
    mr r3, r28
    addi r4, r1, 0x40
    bl fn_805193E8
    b lbl_fn_80519C6C_000008D8
lbl_fn_80519C6C_00000DD0:
    lmw r27, 0x4c(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8051A19C(void)
{
    nofralloc
    stwu r1, -0x3a0(r1)
    mflr r0
    stw r0, 0x3a4(r1)
    stmw r21, 0x374(r1)
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lwz r24, 0x0(r5)
    lwz r25, 0x0(r3)
    lwz r26, 0x10(r24)
    lwz r27, 0x10(r25)
    mr r3, r26
    bl fn_801173A8
    mr r23, r3
    mr r3, r27
    bl fn_801173A8
    cmpw r23, r3
    beq lbl_fn_8051A19C_00000E44
    xor r0, r3, r23
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_8051A19C_000010FC
lbl_fn_8051A19C_00000E44:
    lha r4, 0xbc(r27)
    lha r0, 0xbc(r26)
    cmpw r0, r4
    beq lbl_fn_8051A19C_00000E6C
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8051A19C_000010FC
lbl_fn_8051A19C_00000E6C:
    cmpwi r0, 0x2
    beq lbl_fn_8051A19C_00000EAC
    cmpwi r4, 0x2
    beq lbl_fn_8051A19C_00000EAC
    cmpwi r0, 0x3
    beq lbl_fn_8051A19C_00000EAC
    cmpwi r4, 0x3
    beq lbl_fn_8051A19C_00000EAC
    lwz r0, 0x14(r24)
    lwz r4, 0x14(r25)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8051A19C_000010FC
lbl_fn_8051A19C_00000EAC:
    lwz r3, 0x8(r24)
    cmpwi r3, 0x0
    beq lbl_fn_8051A19C_00000ECC
    lwz r0, 0x8(r25)
    cmpwi r0, 0x0
    bne lbl_fn_8051A19C_00000ECC
    li r0, 0x1
    b lbl_fn_8051A19C_000010FC
lbl_fn_8051A19C_00000ECC:
    cmpwi r3, 0x0
    bne lbl_fn_8051A19C_00000EE8
    lwz r0, 0x8(r25)
    cmpwi r0, 0x0
    beq lbl_fn_8051A19C_00000EE8
    li r0, 0x0
    b lbl_fn_8051A19C_000010FC
lbl_fn_8051A19C_00000EE8:
    lwz r3, 0x0(r24)
    li r22, 0x0
    li r23, 0x0
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_8051A19C_00000F0C
    lwz r3, 0x0(r24)
    bl fn_80206C50
    mr r22, r3
lbl_fn_8051A19C_00000F0C:
    lwz r3, 0x0(r25)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_8051A19C_00000F28
    lwz r3, 0x0(r25)
    bl fn_80206C50
    mr r23, r3
lbl_fn_8051A19C_00000F28:
    cmpwi r22, 0x0
    beq lbl_fn_8051A19C_00000F60
    cmpwi r23, 0x0
    beq lbl_fn_8051A19C_00000F60
    lwz r4, 0x78(r23)
    lwz r0, 0x78(r22)
    cmpw r0, r4
    beq lbl_fn_8051A19C_00000F60
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8051A19C_000010FC
lbl_fn_8051A19C_00000F60:
    lwz r0, 0x8(r24)
    lwz r28, 0x8(r26)
    cmpwi r0, 0x0
    bne lbl_fn_8051A19C_00000FA0
    cmpwi r22, 0x0
    beq lbl_fn_8051A19C_00000FA0
    lwz r3, 0xb8(r22)
    lwz r4, lbl_8087F1E4
    addi r0, r3, 0xeb
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r28, 0x4(r3)
    cmpwi r28, 0x0
    beq lbl_fn_8051A19C_00000F9C
    b lbl_fn_8051A19C_00000FA0
lbl_fn_8051A19C_00000F9C:
    la r28, lbl_808813D0
lbl_fn_8051A19C_00000FA0:
    lwz r0, 0x8(r25)
    lwz r22, 0x8(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8051A19C_00000FE0
    cmpwi r23, 0x0
    beq lbl_fn_8051A19C_00000FE0
    lwz r3, 0xb8(r23)
    lwz r4, lbl_8087F1E4
    addi r0, r3, 0xeb
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r22, 0x4(r3)
    cmpwi r22, 0x0
    beq lbl_fn_8051A19C_00000FDC
    b lbl_fn_8051A19C_00000FE0
lbl_fn_8051A19C_00000FDC:
    la r22, lbl_808813D0
lbl_fn_8051A19C_00000FE0:
    lis r4, lbl_807934F4@ha
    mr r5, r28
    addi r3, r1, 0x268
    addi r4, r4, lbl_807934F4@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x268
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_8051A19C_00001014
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_8051A19C_00001014:
    lis r4, lbl_807934F4@ha
    mr r5, r22
    addi r3, r1, 0x2e8
    addi r4, r4, lbl_807934F4@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x2e8
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_8051A19C_00001048
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_8051A19C_00001048:
    addi r3, r1, 0x268
    addi r4, r1, 0x2e8
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_8051A19C_000010EC
    lwz r0, 0x8(r24)
    cmpwi r0, 0x0
    bne lbl_fn_8051A19C_000010B8
    lwz r0, 0x8(r25)
    cmpwi r0, 0x0
    bne lbl_fn_8051A19C_000010B8
    lwz r21, 0x8(r27)
    lwz r22, 0x8(r26)
    mr r4, r21
    mr r3, r22
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_8051A19C_000010A4
    lhz r3, 0x4(r24)
    lhz r0, 0x4(r25)
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8051A19C_000010FC
lbl_fn_8051A19C_000010A4:
    mr r3, r22
    mr r4, r21
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_8051A19C_000010FC
lbl_fn_8051A19C_000010B8:
    mr r3, r28
    bl fn_80686A48
    mr r23, r3
    mr r3, r22
    bl fn_80686A48
    cmpw r23, r3
    beq lbl_fn_8051A19C_000010EC
    xor r0, r3, r23
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_8051A19C_000010FC
lbl_fn_8051A19C_000010EC:
    mr r3, r28
    mr r4, r22
    bl fn_80686AF0
    srwi r0, r3, 31
lbl_fn_8051A19C_000010FC:
    lwz r23, 0x0(r30)
    cntlzw r0, r0
    lwz r24, 0x0(r31)
    srwi r28, r0, 5
    lwz r25, 0x10(r23)
    lwz r27, 0x10(r24)
    mr r3, r25
    bl fn_801173A8
    mr r26, r3
    mr r3, r27
    bl fn_801173A8
    cmpw r26, r3
    beq lbl_fn_8051A19C_00001148
    xor r0, r3, r26
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_8051A19C_00001400
lbl_fn_8051A19C_00001148:
    lha r4, 0xbc(r27)
    lha r0, 0xbc(r25)
    cmpw r0, r4
    beq lbl_fn_8051A19C_00001170
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8051A19C_00001400
lbl_fn_8051A19C_00001170:
    cmpwi r0, 0x2
    beq lbl_fn_8051A19C_000011B0
    cmpwi r4, 0x2
    beq lbl_fn_8051A19C_000011B0
    cmpwi r0, 0x3
    beq lbl_fn_8051A19C_000011B0
    cmpwi r4, 0x3
    beq lbl_fn_8051A19C_000011B0
    lwz r0, 0x14(r23)
    lwz r4, 0x14(r24)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8051A19C_00001400
lbl_fn_8051A19C_000011B0:
    lwz r3, 0x8(r23)
    cmpwi r3, 0x0
    beq lbl_fn_8051A19C_000011D0
    lwz r0, 0x8(r24)
    cmpwi r0, 0x0
    bne lbl_fn_8051A19C_000011D0
    li r0, 0x1
    b lbl_fn_8051A19C_00001400
lbl_fn_8051A19C_000011D0:
    cmpwi r3, 0x0
    bne lbl_fn_8051A19C_000011EC
    lwz r0, 0x8(r24)
    cmpwi r0, 0x0
    beq lbl_fn_8051A19C_000011EC
    li r0, 0x0
    b lbl_fn_8051A19C_00001400
lbl_fn_8051A19C_000011EC:
    lwz r3, 0x0(r23)
    li r22, 0x0
    li r21, 0x0
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_8051A19C_00001210
    lwz r3, 0x0(r23)
    bl fn_80206C50
    mr r22, r3
lbl_fn_8051A19C_00001210:
    lwz r3, 0x0(r24)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_8051A19C_0000122C
    lwz r3, 0x0(r24)
    bl fn_80206C50
    mr r21, r3
lbl_fn_8051A19C_0000122C:
    cmpwi r22, 0x0
    beq lbl_fn_8051A19C_00001264
    cmpwi r21, 0x0
    beq lbl_fn_8051A19C_00001264
    lwz r4, 0x78(r21)
    lwz r0, 0x78(r22)
    cmpw r0, r4
    beq lbl_fn_8051A19C_00001264
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8051A19C_00001400
lbl_fn_8051A19C_00001264:
    lwz r0, 0x8(r23)
    lwz r26, 0x8(r25)
    cmpwi r0, 0x0
    bne lbl_fn_8051A19C_000012A4
    cmpwi r22, 0x0
    beq lbl_fn_8051A19C_000012A4
    lwz r3, 0xb8(r22)
    lwz r4, lbl_8087F1E4
    addi r0, r3, 0xeb
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r26, 0x4(r3)
    cmpwi r26, 0x0
    beq lbl_fn_8051A19C_000012A0
    b lbl_fn_8051A19C_000012A4
lbl_fn_8051A19C_000012A0:
    la r26, lbl_808813D0
lbl_fn_8051A19C_000012A4:
    lwz r0, 0x8(r24)
    lwz r22, 0x8(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8051A19C_000012E4
    cmpwi r21, 0x0
    beq lbl_fn_8051A19C_000012E4
    lwz r3, 0xb8(r21)
    lwz r4, lbl_8087F1E4
    addi r0, r3, 0xeb
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r22, 0x4(r3)
    cmpwi r22, 0x0
    beq lbl_fn_8051A19C_000012E0
    b lbl_fn_8051A19C_000012E4
lbl_fn_8051A19C_000012E0:
    la r22, lbl_808813D0
lbl_fn_8051A19C_000012E4:
    lis r4, lbl_807934F4@ha
    mr r5, r26
    addi r3, r1, 0x168
    addi r4, r4, lbl_807934F4@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x168
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_8051A19C_00001318
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_8051A19C_00001318:
    lis r4, lbl_807934F4@ha
    mr r5, r22
    addi r3, r1, 0x1e8
    addi r4, r4, lbl_807934F4@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x1e8
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_8051A19C_0000134C
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_8051A19C_0000134C:
    addi r3, r1, 0x168
    addi r4, r1, 0x1e8
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_8051A19C_000013F0
    lwz r0, 0x8(r23)
    cmpwi r0, 0x0
    bne lbl_fn_8051A19C_000013BC
    lwz r0, 0x8(r24)
    cmpwi r0, 0x0
    bne lbl_fn_8051A19C_000013BC
    lwz r21, 0x8(r27)
    lwz r22, 0x8(r25)
    mr r4, r21
    mr r3, r22
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_8051A19C_000013A8
    lhz r3, 0x4(r23)
    lhz r0, 0x4(r24)
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8051A19C_00001400
lbl_fn_8051A19C_000013A8:
    mr r3, r22
    mr r4, r21
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_8051A19C_00001400
lbl_fn_8051A19C_000013BC:
    mr r3, r26
    bl fn_80686A48
    mr r23, r3
    mr r3, r22
    bl fn_80686A48
    cmpw r23, r3
    beq lbl_fn_8051A19C_000013F0
    xor r0, r3, r23
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_8051A19C_00001400
lbl_fn_8051A19C_000013F0:
    mr r3, r26
    mr r4, r22
    bl fn_80686AF0
    srwi r0, r3, 31
lbl_fn_8051A19C_00001400:
    cmpwi r28, 0x0
    cntlzw r0, r0
    srwi r0, r0, 5
    beq lbl_fn_8051A19C_00001418
    cmpwi r0, 0x0
    bne lbl_fn_8051A19C_0000198C
lbl_fn_8051A19C_00001418:
    cmpwi r28, 0x0
    bne lbl_fn_8051A19C_000014C0
    cmpwi r0, 0x0
    bne lbl_fn_8051A19C_000014C0
    lwz r10, 0x0(r29)
    lwz r9, 0x0(r30)
    lwz r8, 0x0(r10)
    lwz r3, 0x4(r10)
    lwz r7, 0x8(r10)
    lwz r6, 0xc(r10)
    lwz r5, 0x10(r10)
    lwz r4, 0x14(r10)
    lwz r0, 0x0(r9)
    stw r0, 0x0(r10)
    lhz r0, 0x4(r9)
    sth r0, 0x4(r10)
    lhz r0, 0x6(r9)
    sth r0, 0x6(r10)
    lwz r0, 0x8(r9)
    stw r0, 0x8(r10)
    lwz r0, 0xc(r9)
    stw r0, 0xc(r10)
    lwz r0, 0x10(r9)
    stw r0, 0x10(r10)
    lwz r0, 0x14(r9)
    stw r0, 0x14(r10)
    stw r3, 0x54(r1)
    stw r8, 0x0(r9)
    lhz r3, 0x54(r1)
    sth r3, 0x4(r9)
    lhz r0, 0x56(r1)
    sth r0, 0x6(r9)
    stw r7, 0x8(r9)
    stw r6, 0xc(r9)
    stw r5, 0x10(r9)
    stw r8, 0x50(r1)
    stw r7, 0x58(r1)
    stw r6, 0x5c(r1)
    stw r5, 0x60(r1)
    stw r4, 0x64(r1)
    stw r4, 0x14(r9)
    b lbl_fn_8051A19C_0000198C
lbl_fn_8051A19C_000014C0:
    lwz r24, 0x0(r30)
    lwz r23, 0x0(r29)
    lwz r27, 0x10(r24)
    lwz r26, 0x10(r23)
    mr r3, r27
    bl fn_801173A8
    mr r25, r3
    mr r3, r26
    bl fn_801173A8
    cmpw r25, r3
    beq lbl_fn_8051A19C_00001504
    xor r0, r3, r25
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_8051A19C_000017BC
lbl_fn_8051A19C_00001504:
    lha r4, 0xbc(r26)
    lha r0, 0xbc(r27)
    cmpw r0, r4
    beq lbl_fn_8051A19C_0000152C
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8051A19C_000017BC
lbl_fn_8051A19C_0000152C:
    cmpwi r0, 0x2
    beq lbl_fn_8051A19C_0000156C
    cmpwi r4, 0x2
    beq lbl_fn_8051A19C_0000156C
    cmpwi r0, 0x3
    beq lbl_fn_8051A19C_0000156C
    cmpwi r4, 0x3
    beq lbl_fn_8051A19C_0000156C
    lwz r0, 0x14(r24)
    lwz r4, 0x14(r23)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8051A19C_000017BC
lbl_fn_8051A19C_0000156C:
    lwz r3, 0x8(r24)
    cmpwi r3, 0x0
    beq lbl_fn_8051A19C_0000158C
    lwz r0, 0x8(r23)
    cmpwi r0, 0x0
    bne lbl_fn_8051A19C_0000158C
    li r0, 0x1
    b lbl_fn_8051A19C_000017BC
lbl_fn_8051A19C_0000158C:
    cmpwi r3, 0x0
    bne lbl_fn_8051A19C_000015A8
    lwz r0, 0x8(r23)
    cmpwi r0, 0x0
    beq lbl_fn_8051A19C_000015A8
    li r0, 0x0
    b lbl_fn_8051A19C_000017BC
lbl_fn_8051A19C_000015A8:
    lwz r3, 0x0(r24)
    li r21, 0x0
    li r22, 0x0
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_8051A19C_000015CC
    lwz r3, 0x0(r24)
    bl fn_80206C50
    mr r21, r3
lbl_fn_8051A19C_000015CC:
    lwz r3, 0x0(r23)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_8051A19C_000015E8
    lwz r3, 0x0(r23)
    bl fn_80206C50
    mr r22, r3
lbl_fn_8051A19C_000015E8:
    cmpwi r21, 0x0
    beq lbl_fn_8051A19C_00001620
    cmpwi r22, 0x0
    beq lbl_fn_8051A19C_00001620
    lwz r4, 0x78(r22)
    lwz r0, 0x78(r21)
    cmpw r0, r4
    beq lbl_fn_8051A19C_00001620
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8051A19C_000017BC
lbl_fn_8051A19C_00001620:
    lwz r0, 0x8(r24)
    lwz r25, 0x8(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8051A19C_00001660
    cmpwi r21, 0x0
    beq lbl_fn_8051A19C_00001660
    lwz r3, 0xb8(r21)
    lwz r4, lbl_8087F1E4
    addi r0, r3, 0xeb
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r25, 0x4(r3)
    cmpwi r25, 0x0
    beq lbl_fn_8051A19C_0000165C
    b lbl_fn_8051A19C_00001660
lbl_fn_8051A19C_0000165C:
    la r25, lbl_808813D0
lbl_fn_8051A19C_00001660:
    lwz r0, 0x8(r23)
    lwz r21, 0x8(r26)
    cmpwi r0, 0x0
    bne lbl_fn_8051A19C_000016A0
    cmpwi r22, 0x0
    beq lbl_fn_8051A19C_000016A0
    lwz r3, 0xb8(r22)
    lwz r4, lbl_8087F1E4
    addi r0, r3, 0xeb
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r21, 0x4(r3)
    cmpwi r21, 0x0
    beq lbl_fn_8051A19C_0000169C
    b lbl_fn_8051A19C_000016A0
lbl_fn_8051A19C_0000169C:
    la r21, lbl_808813D0
lbl_fn_8051A19C_000016A0:
    lis r4, lbl_807934F4@ha
    mr r5, r25
    addi r3, r1, 0x68
    addi r4, r4, lbl_807934F4@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x68
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_8051A19C_000016D4
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_8051A19C_000016D4:
    lis r4, lbl_807934F4@ha
    mr r5, r21
    addi r3, r1, 0xe8
    addi r4, r4, lbl_807934F4@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0xe8
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_8051A19C_00001708
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_8051A19C_00001708:
    addi r3, r1, 0x68
    addi r4, r1, 0xe8
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_8051A19C_000017AC
    lwz r0, 0x8(r24)
    cmpwi r0, 0x0
    bne lbl_fn_8051A19C_00001778
    lwz r0, 0x8(r23)
    cmpwi r0, 0x0
    bne lbl_fn_8051A19C_00001778
    lwz r21, 0x8(r26)
    lwz r22, 0x8(r27)
    mr r4, r21
    mr r3, r22
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_8051A19C_00001764
    lhz r3, 0x4(r24)
    lhz r0, 0x4(r23)
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8051A19C_000017BC
lbl_fn_8051A19C_00001764:
    mr r3, r22
    mr r4, r21
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_8051A19C_000017BC
lbl_fn_8051A19C_00001778:
    mr r3, r25
    bl fn_80686A48
    mr r23, r3
    mr r3, r21
    bl fn_80686A48
    cmpw r23, r3
    beq lbl_fn_8051A19C_000017AC
    xor r0, r3, r23
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_8051A19C_000017BC
lbl_fn_8051A19C_000017AC:
    mr r3, r25
    mr r4, r21
    bl fn_80686AF0
    srwi r0, r3, 31
lbl_fn_8051A19C_000017BC:
    cmpwi r0, 0x0
    beq lbl_fn_8051A19C_00001858
    lwz r10, 0x0(r29)
    lwz r9, 0x0(r30)
    lwz r8, 0x0(r10)
    lwz r3, 0x4(r10)
    lwz r7, 0x8(r10)
    lwz r6, 0xc(r10)
    lwz r5, 0x10(r10)
    lwz r4, 0x14(r10)
    lwz r0, 0x0(r9)
    stw r0, 0x0(r10)
    lhz r0, 0x4(r9)
    sth r0, 0x4(r10)
    lhz r0, 0x6(r9)
    sth r0, 0x6(r10)
    lwz r0, 0x8(r9)
    stw r0, 0x8(r10)
    lwz r0, 0xc(r9)
    stw r0, 0xc(r10)
    lwz r0, 0x10(r9)
    stw r0, 0x10(r10)
    lwz r0, 0x14(r9)
    stw r0, 0x14(r10)
    stw r3, 0x3c(r1)
    stw r8, 0x0(r9)
    lhz r3, 0x3c(r1)
    sth r3, 0x4(r9)
    lhz r0, 0x3e(r1)
    sth r0, 0x6(r9)
    stw r7, 0x8(r9)
    stw r6, 0xc(r9)
    stw r5, 0x10(r9)
    stw r8, 0x38(r1)
    stw r7, 0x40(r1)
    stw r6, 0x44(r1)
    stw r5, 0x48(r1)
    stw r4, 0x4c(r1)
    stw r4, 0x14(r9)
lbl_fn_8051A19C_00001858:
    cmpwi r28, 0x0
    beq lbl_fn_8051A19C_000018F8
    lwz r10, 0x0(r30)
    lwz r9, 0x0(r31)
    lwz r8, 0x0(r10)
    lwz r3, 0x4(r10)
    lwz r7, 0x8(r10)
    lwz r6, 0xc(r10)
    lwz r5, 0x10(r10)
    lwz r4, 0x14(r10)
    lwz r0, 0x0(r9)
    stw r0, 0x0(r10)
    lhz r0, 0x4(r9)
    sth r0, 0x4(r10)
    lhz r0, 0x6(r9)
    sth r0, 0x6(r10)
    lwz r0, 0x8(r9)
    stw r0, 0x8(r10)
    lwz r0, 0xc(r9)
    stw r0, 0xc(r10)
    lwz r0, 0x10(r9)
    stw r0, 0x10(r10)
    lwz r0, 0x14(r9)
    stw r0, 0x14(r10)
    stw r3, 0x24(r1)
    stw r8, 0x0(r9)
    lhz r3, 0x24(r1)
    sth r3, 0x4(r9)
    lhz r0, 0x26(r1)
    sth r0, 0x6(r9)
    stw r7, 0x8(r9)
    stw r6, 0xc(r9)
    stw r5, 0x10(r9)
    stw r8, 0x20(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r4, 0x14(r9)
    b lbl_fn_8051A19C_0000198C
lbl_fn_8051A19C_000018F8:
    lwz r10, 0x0(r29)
    lwz r9, 0x0(r31)
    lwz r8, 0x0(r10)
    lwz r3, 0x4(r10)
    lwz r7, 0x8(r10)
    lwz r6, 0xc(r10)
    lwz r5, 0x10(r10)
    lwz r4, 0x14(r10)
    lwz r0, 0x0(r9)
    stw r0, 0x0(r10)
    lhz r0, 0x4(r9)
    sth r0, 0x4(r10)
    lhz r0, 0x6(r9)
    sth r0, 0x6(r10)
    lwz r0, 0x8(r9)
    stw r0, 0x8(r10)
    lwz r0, 0xc(r9)
    stw r0, 0xc(r10)
    lwz r0, 0x10(r9)
    stw r0, 0x10(r10)
    lwz r0, 0x14(r9)
    stw r0, 0x14(r10)
    stw r3, 0xc(r1)
    stw r8, 0x0(r9)
    lhz r3, 0xc(r1)
    sth r3, 0x4(r9)
    lhz r0, 0xe(r1)
    sth r0, 0x6(r9)
    stw r7, 0x8(r9)
    stw r6, 0xc(r9)
    stw r5, 0x10(r9)
    stw r8, 0x8(r1)
    stw r7, 0x10(r1)
    stw r6, 0x14(r1)
    stw r5, 0x18(r1)
    stw r4, 0x1c(r1)
    stw r4, 0x14(r9)
lbl_fn_8051A19C_0000198C:
    lmw r21, 0x374(r1)
    lwz r0, 0x3a4(r1)
    mtlr r0
    addi r1, r1, 0x3a0
    blr
}

asm void fn_8051AD58(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    stmw r19, 0x12c(r1)
    mr r22, r3
    mr r23, r4
    lwz r0, 0x0(r3)
    lwz r3, 0x0(r4)
    cmplw r0, r3
    beq lbl_fn_8051AD58_00001D9C
    subi r20, r3, 0x18
    lis r30, lbl_807934F4@ha
    li r31, 0x0
    b lbl_fn_8051AD58_00001D90
lbl_fn_8051AD58_000019D8:
    lwz r29, 0x0(r22)
    lwz r28, 0x0(r23)
    cmplw r29, r28
    beq lbl_fn_8051AD58_00001CEC
    addi r21, r29, 0x18
    b lbl_fn_8051AD58_00001CE4
lbl_fn_8051AD58_000019F0:
    lwz r27, 0x10(r21)
    lwz r26, 0x10(r29)
    mr r3, r27
    bl fn_801173A8
    mr r24, r3
    mr r3, r26
    bl fn_801173A8
    cmpw r24, r3
    beq lbl_fn_8051AD58_00001A2C
    xor r0, r3, r24
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_8051AD58_00001CD4
lbl_fn_8051AD58_00001A2C:
    lha r4, 0xbc(r26)
    lha r0, 0xbc(r27)
    cmpw r0, r4
    beq lbl_fn_8051AD58_00001A54
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8051AD58_00001CD4
lbl_fn_8051AD58_00001A54:
    cmpwi r0, 0x2
    beq lbl_fn_8051AD58_00001A94
    cmpwi r4, 0x2
    beq lbl_fn_8051AD58_00001A94
    cmpwi r0, 0x3
    beq lbl_fn_8051AD58_00001A94
    cmpwi r4, 0x3
    beq lbl_fn_8051AD58_00001A94
    lwz r0, 0x14(r21)
    lwz r4, 0x14(r29)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8051AD58_00001CD4
lbl_fn_8051AD58_00001A94:
    lwz r3, 0x8(r21)
    cmpwi r3, 0x0
    beq lbl_fn_8051AD58_00001AB4
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8051AD58_00001AB4
    li r0, 0x1
    b lbl_fn_8051AD58_00001CD4
lbl_fn_8051AD58_00001AB4:
    cmpwi r3, 0x0
    bne lbl_fn_8051AD58_00001AD0
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8051AD58_00001AD0
    li r0, 0x0
    b lbl_fn_8051AD58_00001CD4
lbl_fn_8051AD58_00001AD0:
    lwz r3, 0x0(r21)
    li r19, 0x0
    li r25, 0x0
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_8051AD58_00001AF4
    lwz r3, 0x0(r21)
    bl fn_80206C50
    mr r19, r3
lbl_fn_8051AD58_00001AF4:
    lwz r3, 0x0(r29)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_8051AD58_00001B10
    lwz r3, 0x0(r29)
    bl fn_80206C50
    mr r25, r3
lbl_fn_8051AD58_00001B10:
    cmpwi r19, 0x0
    beq lbl_fn_8051AD58_00001B48
    cmpwi r25, 0x0
    beq lbl_fn_8051AD58_00001B48
    lwz r4, 0x78(r25)
    lwz r0, 0x78(r19)
    cmpw r0, r4
    beq lbl_fn_8051AD58_00001B48
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8051AD58_00001CD4
lbl_fn_8051AD58_00001B48:
    lwz r0, 0x8(r21)
    lwz r24, 0x8(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8051AD58_00001B88
    cmpwi r19, 0x0
    beq lbl_fn_8051AD58_00001B88
    lwz r3, 0xb8(r19)
    lwz r4, lbl_8087F1E4
    addi r0, r3, 0xeb
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r24, 0x4(r3)
    cmpwi r24, 0x0
    beq lbl_fn_8051AD58_00001B84
    b lbl_fn_8051AD58_00001B88
lbl_fn_8051AD58_00001B84:
    la r24, lbl_808813D0
lbl_fn_8051AD58_00001B88:
    lwz r0, 0x8(r29)
    lwz r19, 0x8(r26)
    cmpwi r0, 0x0
    bne lbl_fn_8051AD58_00001BC8
    cmpwi r25, 0x0
    beq lbl_fn_8051AD58_00001BC8
    lwz r3, 0xb8(r25)
    lwz r4, lbl_8087F1E4
    addi r0, r3, 0xeb
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r19, 0x4(r3)
    cmpwi r19, 0x0
    beq lbl_fn_8051AD58_00001BC4
    b lbl_fn_8051AD58_00001BC8
lbl_fn_8051AD58_00001BC4:
    la r19, lbl_808813D0
lbl_fn_8051AD58_00001BC8:
    mr r5, r24
    addi r3, r1, 0xa0
    addi r4, r30, lbl_807934F4@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0xa0
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_8051AD58_00001BF4
    sth r31, 0x0(r3)
lbl_fn_8051AD58_00001BF4:
    mr r5, r19
    addi r3, r1, 0x20
    addi r4, r30, lbl_807934F4@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x20
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_8051AD58_00001C20
    sth r31, 0x0(r3)
lbl_fn_8051AD58_00001C20:
    addi r3, r1, 0xa0
    addi r4, r1, 0x20
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_8051AD58_00001CC4
    lwz r0, 0x8(r21)
    cmpwi r0, 0x0
    bne lbl_fn_8051AD58_00001C90
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8051AD58_00001C90
    lwz r19, 0x8(r26)
    lwz r24, 0x8(r27)
    mr r4, r19
    mr r3, r24
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_8051AD58_00001C7C
    lhz r3, 0x4(r21)
    lhz r0, 0x4(r29)
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8051AD58_00001CD4
lbl_fn_8051AD58_00001C7C:
    mr r3, r24
    mr r4, r19
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_8051AD58_00001CD4
lbl_fn_8051AD58_00001C90:
    mr r3, r24
    bl fn_80686A48
    mr r25, r3
    mr r3, r19
    bl fn_80686A48
    cmpw r25, r3
    beq lbl_fn_8051AD58_00001CC4
    xor r0, r3, r25
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_8051AD58_00001CD4
lbl_fn_8051AD58_00001CC4:
    mr r3, r24
    mr r4, r19
    bl fn_80686AF0
    srwi r0, r3, 31
lbl_fn_8051AD58_00001CD4:
    cmpwi r0, 0x0
    beq lbl_fn_8051AD58_00001CE0
    mr r29, r21
lbl_fn_8051AD58_00001CE0:
    addi r21, r21, 0x18
lbl_fn_8051AD58_00001CE4:
    cmplw r21, r28
    bne lbl_fn_8051AD58_000019F0
lbl_fn_8051AD58_00001CEC:
    lwz r9, 0x0(r22)
    cmplw r29, r9
    beq lbl_fn_8051AD58_00001D84
    lwz r8, 0x0(r29)
    lwz r3, 0x4(r29)
    lwz r7, 0x8(r29)
    lwz r6, 0xc(r29)
    lwz r5, 0x10(r29)
    lwz r4, 0x14(r29)
    lwz r0, 0x0(r9)
    stw r0, 0x0(r29)
    lhz r0, 0x4(r9)
    sth r0, 0x4(r29)
    lhz r0, 0x6(r9)
    sth r0, 0x6(r29)
    lwz r0, 0x8(r9)
    stw r0, 0x8(r29)
    lwz r0, 0xc(r9)
    stw r0, 0xc(r29)
    lwz r0, 0x10(r9)
    stw r0, 0x10(r29)
    lwz r0, 0x14(r9)
    stw r0, 0x14(r29)
    stw r3, 0xc(r1)
    stw r8, 0x0(r9)
    lhz r3, 0xc(r1)
    sth r3, 0x4(r9)
    lhz r0, 0xe(r1)
    sth r0, 0x6(r9)
    stw r7, 0x8(r9)
    stw r6, 0xc(r9)
    stw r5, 0x10(r9)
    stw r8, 0x8(r1)
    stw r7, 0x10(r1)
    stw r6, 0x14(r1)
    stw r5, 0x18(r1)
    stw r4, 0x1c(r1)
    stw r4, 0x14(r9)
lbl_fn_8051AD58_00001D84:
    lwz r3, 0x0(r22)
    addi r0, r3, 0x18
    stw r0, 0x0(r22)
lbl_fn_8051AD58_00001D90:
    lwz r0, 0x0(r22)
    cmplw r0, r20
    bne lbl_fn_8051AD58_000019D8
lbl_fn_8051AD58_00001D9C:
    lmw r19, 0x12c(r1)
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}
