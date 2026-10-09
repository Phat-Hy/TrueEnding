#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void dtor_80084684(void);
extern void fn_800844D8(void);
extern void fn_8011728C(void);
extern void fn_80211480(void);
extern void fn_802114E0(void);
extern void fn_8021150C(void);
extern void fn_80444804(void);
extern void fn_8044D500(void);
extern void fn_8044D560(void);
extern void fn_8051941C(void);
extern void fn_8051B168(void);
extern void fn_8051B440(void);
extern void fn_8051B548(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);

/* External data declarations */
extern u8 lbl_8075BB80[];
extern u8 lbl_807934D8[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087E488;
extern u32 lbl_8087E48C;
extern u32 lbl_8087F4F0;
extern u32 lbl_808878DC;

/* Function declarations */
void fn_805179A0(void);
void fn_805179F4(void);
void fn_80517A60(void);
void fn_80517AD4(void);
void fn_80517AF8(void);
void fn_80517B40(void);
void fn_805182C8(void);
void fn_80518940(void);
void fn_80518FB8(void);
void fn_80518FD0(void);
void fn_80518FF0(void);
void fn_8051900C(void);
void fn_805190A4(void);
void fn_805190C0(void);
void fn_80519390(void);

asm void fn_805179A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x1
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stb r4, 0x96(r3)
    stw r0, 0xec(r3)
    stw r0, 0x80(r3)
    stw r0, 0xe0(r3)
    stw r0, 0xe4(r3)
    stw r0, 0xe8(r3)
    bl fn_80517B40
    mr r3, r31
    bl fn_8051B168
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805179F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_808878DC
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0xd8(r3)
    stfs f0, 0x58(r3)
    subf r0, r0, r0
    stw r0, 0xd8(r3)
    stw r4, 0x7c(r3)
    bl fn_8051B168
    li r0, 0x0
    lis r3, lbl_807C7030@ha
    stw r0, 0xec(r31)
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x130(r31)
    psq_st f1, 0x128(r31), 0, 0
    stb r0, 0x96(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80517A60(void)
{
    nofralloc
    cntlzw r5, r4
    li r8, 0x0
    li r6, 0x0
    b lbl_fn_80517A60_00000124
lbl_fn_80517A60_000000D0:
    lwz r0, 0x50(r3)
    add r7, r0, r6
    lbz r0, 0x3c(r7)
    cmpwi r0, 0x0
    beq lbl_fn_80517A60_0000011C
    lwz r7, 0x0(r7)
    cmpwi r7, 0x0
    beq lbl_fn_80517A60_000000FC
    lwz r0, 0x104(r7)
    rlwimi r0, r4, 23, 8, 8
    stw r0, 0x104(r7)
lbl_fn_80517A60_000000FC:
    lwz r0, 0x50(r3)
    add r7, r0, r6
    lwz r7, 0x8(r7)
    cmpwi r7, 0x0
    beq lbl_fn_80517A60_0000011C
    lwz r0, 0x88(r7)
    rlwimi r0, r5, 26, 0, 0
    stw r0, 0x88(r7)
lbl_fn_80517A60_0000011C:
    addi r6, r6, 0x40
    addi r8, r8, 0x1
lbl_fn_80517A60_00000124:
    lwz r0, 0x4c(r3)
    cmpw r8, r0
    blt lbl_fn_80517A60_000000D0
    blr
}

asm void fn_80517AD4(void)
{
    nofralloc
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80517AD4_0000014C
    cmpwi r0, 0x1
    beq lbl_fn_80517AD4_00000150
    blr
lbl_fn_80517AD4_0000014C:
    b fn_8051B440
lbl_fn_80517AD4_00000150:
    b fn_8051B548
    blr
}

asm void fn_80517AF8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x80(r3)
    stw r0, 0xe0(r3)
    stw r0, 0xe4(r3)
    stw r0, 0xe8(r3)
    bl fn_80517B40
    mr r3, r31
    bl fn_8051B168
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80517B40(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stmw r14, 0x68(r1)
    mr r15, r3
    addi r23, r1, 0x4c
    li r18, 0x600
    li r17, 0x0
    lis r14, 0xcccd
    lis r27, 0xaab
    li r28, 0x0
    lis r29, 0x38e
    li r30, 0x1
    li r31, -0x1
    lwz r0, 0xd8(r3)
    subf r0, r0, r0
    stw r0, 0xd8(r3)
    lwz r19, lbl_8087F4F0
lbl_fn_80517B40_000001E8:
    mr r3, r19
    mr r4, r17
    bl fn_80444804
    cmpwi r3, 0x0
    mr r20, r3
    beq lbl_fn_80517B40_00000540
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80517B40_00000540
    mr r3, r17
    bl fn_802114E0
    mr r16, r3
    lwz r3, 0xe0(r15)
    mr r4, r16
    bl fn_8011728C
    cmpwi r3, 0x0
    beq lbl_fn_80517B40_00000540
    lwz r22, 0x4(r16)
    lwz r0, 0x4(r20)
    lhz r21, 0x8(r20)
    mr r3, r22
    clrlwi r20, r0, 16
    bl fn_8021150C
    lwz r5, 0xd8(r15)
    mr r26, r3
    lwz r4, 0xdc(r15)
    cmplw r5, r4
    bge lbl_fn_80517B40_0000028C
    addi r5, r5, 0x1
    lwz r4, 0xd4(r15)
    subi r0, r5, 0x1
    stw r5, 0xd8(r15)
    mulli r0, r0, 0x18
    stwux r22, r4, r0
    sth r21, 0x4(r4)
    sth r20, 0x6(r4)
    stw r30, 0x8(r4)
    stw r31, 0xc(r4)
    stw r16, 0x10(r4)
    stw r3, 0x14(r4)
    b lbl_fn_80517B40_00000534
lbl_fn_80517B40_0000028C:
    subi r0, r27, 0x5556
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_80517B40_000002C0
    lis r3, lbl_8075BB80@ha
    addi r3, r3, lbl_8075BB80@l
    addi r4, r3, 0x143
    lis r3, __files@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80517B40_000002C0:
    addi r3, r15, 0xdc
    stw r28, 0x4c(r1)
    subi r0, r27, 0x5556
    stw r28, 0x50(r1)
    stw r28, 0x54(r1)
    stw r3, 0x58(r1)
    stw r28, 0x5c(r1)
    lwz r3, 0xd8(r15)
    lwz r24, 0xdc(r15)
    addi r3, r3, 0x1
    subf r3, r24, r3
    subf r0, r24, r0
    cmplw r3, r0
    stw r3, 0x24(r1)
    ble lbl_fn_80517B40_00000320
    lis r3, lbl_8075BB80@ha
    addi r3, r3, lbl_8075BB80@l
    addi r4, r3, 0x143
    lis r3, __files@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80517B40_00000320:
    addi r0, r29, 0x38e3
    cmplw r24, r0
    bge lbl_fn_80517B40_00000368
    addi r4, r24, 0x1
    subi r5, r14, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x24(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x1c
    srwi r4, r4, 2
    stw r4, 0x1c(r1)
    cmplw r4, r0
    bge lbl_fn_80517B40_0000035C
    addi r3, r1, 0x24
lbl_fn_80517B40_0000035C:
    lwz r0, 0x0(r3)
    add r25, r24, r0
    b lbl_fn_80517B40_000003A8
lbl_fn_80517B40_00000368:
    lis r3, 0x71c
    addi r0, r3, 0x71c6
    cmplw r24, r0
    bge lbl_fn_80517B40_000003A4
    addi r3, r24, 0x1
    lwz r0, 0x24(r1)
    srwi r3, r3, 1
    stw r3, 0x20(r1)
    cmplw r3, r0
    addi r3, r1, 0x20
    bge lbl_fn_80517B40_00000398
    addi r3, r1, 0x24
lbl_fn_80517B40_00000398:
    lwz r0, 0x0(r3)
    add r25, r24, r0
    b lbl_fn_80517B40_000003A8
lbl_fn_80517B40_000003A4:
    subi r25, r27, 0x5556
lbl_fn_80517B40_000003A8:
    subi r0, r27, 0x5556
    cmplw r25, r0
    ble lbl_fn_80517B40_000003D8
    lis r3, lbl_8075BB80@ha
    addi r3, r3, lbl_8075BB80@l
    addi r4, r3, 0x143
    lis r3, __files@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80517B40_000003D8:
    mulli r3, r25, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r24, r3
    bne lbl_fn_80517B40_0000040C
    lis r3, __files@ha
    lis r4, lbl_807934D8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807934D8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80517B40_0000040C:
    lwz r0, 0x50(r1)
    stw r24, 0x4c(r1)
    mulli r3, r0, 0x18
    stw r25, 0x54(r1)
    lwz r0, 0xd8(r15)
    stw r0, 0x5c(r1)
    mulli r0, r0, 0x18
    add r0, r24, r0
    stwux r22, r3, r0
    sth r21, 0x4(r3)
    sth r20, 0x6(r3)
    stw r30, 0x8(r3)
    stw r31, 0xc(r3)
    stw r16, 0x10(r3)
    stw r26, 0x14(r3)
    lwz r3, 0x50(r1)
    lwz r0, 0x5c(r1)
    addi r3, r3, 0x1
    stw r3, 0x50(r1)
    mulli r0, r0, 0x18
    lwz r3, 0x4c(r1)
    lwz r4, 0xd8(r15)
    lwz r7, 0xd4(r15)
    mulli r4, r4, 0x18
    add r5, r3, r0
    li r0, 0x18
    add r6, r7, r4
    addi r3, r6, 0x17
    subf r3, r7, r3
    divwu r3, r3, r0
    mtctr r3
    cmplw r6, r7
    ble lbl_fn_80517B40_000004E8
lbl_fn_80517B40_00000490:
    subic. r5, r5, 0x18
    subi r6, r6, 0x18
    beq lbl_fn_80517B40_000004CC
    lwz r0, 0x4(r6)
    lwz r3, 0x0(r6)
    stw r3, 0x0(r5)
    stw r0, 0x4(r5)
    lwz r0, 0xc(r6)
    lwz r3, 0x8(r6)
    stw r3, 0x8(r5)
    stw r0, 0xc(r5)
    lwz r0, 0x14(r6)
    lwz r3, 0x10(r6)
    stw r3, 0x10(r5)
    stw r0, 0x14(r5)
lbl_fn_80517B40_000004CC:
    lwz r4, 0x5c(r1)
    lwz r3, 0x50(r1)
    subi r0, r4, 0x1
    stw r0, 0x5c(r1)
    addi r0, r3, 0x1
    stw r0, 0x50(r1)
    bdnz lbl_fn_80517B40_00000490
lbl_fn_80517B40_000004E8:
    stw r28, 0xd8(r15)
    cmpwi r23, 0x0
    lwz r3, 0xdc(r15)
    lwz r0, 0x54(r1)
    stw r0, 0xdc(r15)
    stw r3, 0x54(r1)
    lwz r0, 0x4c(r1)
    lwz r3, 0xd4(r15)
    stw r0, 0xd4(r15)
    stw r3, 0x4c(r1)
    lwz r0, 0x50(r1)
    stw r0, 0xd8(r15)
    stw r28, 0x50(r1)
    beq lbl_fn_80517B40_00000534
    lwz r3, 0x4c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80517B40_00000534
    stw r28, 0x50(r1)
    bl dtor_80084684
lbl_fn_80517B40_00000534:
    cmpw r21, r18
    ble lbl_fn_80517B40_00000540
    mr r18, r21
lbl_fn_80517B40_00000540:
    addi r17, r17, 0x1
    cmpwi r17, 0x600
    blt lbl_fn_80517B40_000001E8
    lwz r0, 0xe0(r15)
    cmpwi r0, 0x6
    beq lbl_fn_80517B40_00000560
    cmpwi r0, 0x1
    bne lbl_fn_80517B40_00000898
lbl_fn_80517B40_00000560:
    mr r3, r19
    bl fn_8044D560
    add r27, r18, r3
    mr r23, r3
    addi r26, r1, 0x38
    li r30, 0x0
    lis r16, 0xcccd
    lis r20, 0xaab
    li r18, 0x0
    lis r17, 0x38e
    lis r31, 0x71c
    li r14, 0x1
    b lbl_fn_80517B40_00000890
lbl_fn_80517B40_00000594:
    mr r3, r19
    mr r4, r30
    bl fn_8044D500
    subf r0, r30, r27
    mr r28, r3
    clrlwi r29, r0, 16
    bl fn_80211480
    mr r22, r3
    mr r3, r28
    bl fn_8021150C
    lwz r5, 0xd8(r15)
    mr r21, r3
    lwz r4, 0xdc(r15)
    cmplw r5, r4
    bge lbl_fn_80517B40_00000604
    addi r5, r5, 0x1
    lwz r4, 0xd4(r15)
    subi r0, r5, 0x1
    stw r5, 0xd8(r15)
    mulli r0, r0, 0x18
    stwux r28, r4, r0
    sth r29, 0x4(r4)
    sth r14, 0x6(r4)
    stw r18, 0x8(r4)
    stw r30, 0xc(r4)
    stw r22, 0x10(r4)
    stw r3, 0x14(r4)
    b lbl_fn_80517B40_0000088C
lbl_fn_80517B40_00000604:
    subi r0, r20, 0x5556
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_80517B40_00000638
    lis r3, lbl_8075BB80@ha
    addi r3, r3, lbl_8075BB80@l
    addi r4, r3, 0x143
    lis r3, __files@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80517B40_00000638:
    lwz r3, 0xd8(r15)
    addi r4, r15, 0xdc
    lwz r24, 0xdc(r15)
    subi r0, r20, 0x5556
    addi r3, r3, 0x1
    stw r18, 0x38(r1)
    subf r3, r24, r3
    subf r0, r24, r0
    cmplw r3, r0
    stw r18, 0x3c(r1)
    stw r18, 0x40(r1)
    stw r4, 0x44(r1)
    stw r18, 0x48(r1)
    stw r3, 0x18(r1)
    ble lbl_fn_80517B40_00000698
    lis r3, lbl_8075BB80@ha
    addi r3, r3, lbl_8075BB80@l
    addi r4, r3, 0x143
    lis r3, __files@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80517B40_00000698:
    addi r0, r17, 0x38e3
    cmplw r24, r0
    bge lbl_fn_80517B40_000006E0
    addi r4, r24, 0x1
    subi r5, r16, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x18(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_80517B40_000006D4
    addi r3, r1, 0x18
lbl_fn_80517B40_000006D4:
    lwz r0, 0x0(r3)
    add r24, r24, r0
    b lbl_fn_80517B40_0000071C
lbl_fn_80517B40_000006E0:
    addi r0, r31, 0x71c6
    cmplw r24, r0
    bge lbl_fn_80517B40_00000718
    addi r3, r24, 0x1
    lwz r0, 0x18(r1)
    srwi r3, r3, 1
    stw r3, 0x14(r1)
    cmplw r3, r0
    addi r3, r1, 0x14
    bge lbl_fn_80517B40_0000070C
    addi r3, r1, 0x18
lbl_fn_80517B40_0000070C:
    lwz r0, 0x0(r3)
    add r24, r24, r0
    b lbl_fn_80517B40_0000071C
lbl_fn_80517B40_00000718:
    subi r24, r20, 0x5556
lbl_fn_80517B40_0000071C:
    subi r0, r20, 0x5556
    cmplw r24, r0
    ble lbl_fn_80517B40_0000074C
    lis r3, lbl_8075BB80@ha
    addi r3, r3, lbl_8075BB80@l
    addi r4, r3, 0x143
    lis r3, __files@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80517B40_0000074C:
    mulli r3, r24, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_80517B40_00000780
    lis r3, __files@ha
    lis r4, lbl_807934D8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807934D8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80517B40_00000780:
    lwz r5, 0xd8(r15)
    lwz r4, 0x3c(r1)
    mulli r3, r5, 0x18
    stw r5, 0x48(r1)
    addi r0, r4, 0x1
    stw r0, 0x3c(r1)
    add r3, r25, r3
    mulli r4, r4, 0x18
    stwux r28, r4, r3
    stw r25, 0x38(r1)
    sth r29, 0x4(r4)
    sth r14, 0x6(r4)
    stw r18, 0x8(r4)
    stw r30, 0xc(r4)
    stw r22, 0x10(r4)
    stw r21, 0x14(r4)
    lwz r0, 0xd8(r15)
    lwz r5, 0xd4(r15)
    mulli r0, r0, 0x18
    stw r24, 0x40(r1)
    add r6, r5, r0
    addi r4, r6, 0x17
    li r0, 0x18
    subf r4, r5, r4
    divwu r4, r4, r0
    mtctr r4
    cmplw r6, r5
    ble lbl_fn_80517B40_00000848
lbl_fn_80517B40_000007F0:
    subic. r3, r3, 0x18
    subi r6, r6, 0x18
    beq lbl_fn_80517B40_0000082C
    lwz r0, 0x4(r6)
    lwz r4, 0x0(r6)
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, 0xc(r6)
    lwz r4, 0x8(r6)
    stw r4, 0x8(r3)
    stw r0, 0xc(r3)
    lwz r0, 0x14(r6)
    lwz r4, 0x10(r6)
    stw r4, 0x10(r3)
    stw r0, 0x14(r3)
lbl_fn_80517B40_0000082C:
    lwz r5, 0x48(r1)
    lwz r4, 0x3c(r1)
    subi r0, r5, 0x1
    stw r0, 0x48(r1)
    addi r0, r4, 0x1
    stw r0, 0x3c(r1)
    bdnz lbl_fn_80517B40_000007F0
lbl_fn_80517B40_00000848:
    lwz r0, 0x3c(r1)
    cmpwi r26, 0x0
    lwz r6, 0xdc(r15)
    lwz r5, 0x40(r1)
    lwz r3, 0xd4(r15)
    lwz r4, 0x38(r1)
    stw r5, 0xdc(r15)
    stw r6, 0x40(r1)
    stw r4, 0xd4(r15)
    stw r3, 0x38(r1)
    stw r0, 0xd8(r15)
    stw r18, 0x3c(r1)
    beq lbl_fn_80517B40_0000088C
    cmpwi r3, 0x0
    beq lbl_fn_80517B40_0000088C
    stw r18, 0x3c(r1)
    bl dtor_80084684
lbl_fn_80517B40_0000088C:
    addi r30, r30, 0x1
lbl_fn_80517B40_00000890:
    cmpw r30, r23
    blt lbl_fn_80517B40_00000594
lbl_fn_80517B40_00000898:
    lwz r0, 0xec(r15)
    cmpwi r0, 0x0
    beq lbl_fn_80517B40_000008B0
    cmpwi r0, 0x1
    beq lbl_fn_80517B40_000008E4
    b lbl_fn_80517B40_00000914
lbl_fn_80517B40_000008B0:
    li r0, 0x0
    stb r0, 0xc(r1)
    addi r3, r1, 0x34
    addi r4, r1, 0x30
    lwz r0, 0xd8(r15)
    addi r5, r1, 0xc
    lwz r6, 0xd4(r15)
    mulli r0, r0, 0x18
    stw r6, 0x34(r1)
    add r0, r6, r0
    stw r0, 0x30(r1)
    bl fn_8051941C
    b lbl_fn_80517B40_00000914
lbl_fn_80517B40_000008E4:
    li r0, 0x0
    stb r0, 0x8(r1)
    addi r3, r1, 0x2c
    addi r4, r1, 0x28
    lwz r0, 0xd8(r15)
    addi r5, r1, 0x8
    lwz r6, 0xd4(r15)
    mulli r0, r0, 0x18
    stw r6, 0x2c(r1)
    add r0, r6, r0
    stw r0, 0x28(r1)
    bl fn_805182C8
lbl_fn_80517B40_00000914:
    lmw r14, 0x68(r1)
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_805182C8(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0xe4(r1)
    stmw r24, 0xc0(r1)
    lis r31, 0x2aab
    mr r25, r3
    mr r26, r4
    mr r27, r5
    addi r29, r6, 0x6667
    subi r28, r31, 0x5555
lbl_fn_805182C8_00000954:
    lwz r4, 0x0(r25)
    lwz r3, 0x0(r26)
    subf r0, r4, r3
    mulhw r0, r28, r0
    srawi r0, r0, 2
    srwi r5, r0, 31
    add r7, r0, r5
    cmpwi r7, 0x1
    ble lbl_fn_805182C8_00000F8C
    cmpwi r7, 0x14
    bgt lbl_fn_805182C8_00000A70
    cmplw r4, r3
    beq lbl_fn_805182C8_00000F8C
    subi r12, r3, 0x18
    cmplw r4, r12
    beq lbl_fn_805182C8_00000F8C
    b lbl_fn_805182C8_00000A64
lbl_fn_805182C8_00000998:
    cmplw r4, r3
    mr r6, r4
    beq lbl_fn_805182C8_000009CC
    addi r5, r4, 0x18
    b lbl_fn_805182C8_000009C4
lbl_fn_805182C8_000009AC:
    lhz r7, 0x4(r5)
    lhz r0, 0x4(r6)
    cmplw r7, r0
    bge lbl_fn_805182C8_000009C0
    mr r6, r5
lbl_fn_805182C8_000009C0:
    addi r5, r5, 0x18
lbl_fn_805182C8_000009C4:
    cmplw r5, r3
    bne lbl_fn_805182C8_000009AC
lbl_fn_805182C8_000009CC:
    cmplw r6, r4
    beq lbl_fn_805182C8_00000A60
    lwz r11, 0x0(r6)
    lwz r5, 0x4(r6)
    lwz r10, 0x8(r6)
    lwz r9, 0xc(r6)
    lwz r8, 0x10(r6)
    lwz r7, 0x14(r6)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r6)
    lhz r0, 0x4(r4)
    sth r0, 0x4(r6)
    lhz r0, 0x6(r4)
    sth r0, 0x6(r6)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r6)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r6)
    lwz r0, 0x10(r4)
    stw r0, 0x10(r6)
    lwz r0, 0x14(r4)
    stw r0, 0x14(r6)
    stw r5, 0xa4(r1)
    stw r11, 0x0(r4)
    lhz r5, 0xa4(r1)
    sth r5, 0x4(r4)
    lhz r0, 0xa6(r1)
    sth r0, 0x6(r4)
    stw r10, 0x8(r4)
    stw r9, 0xc(r4)
    stw r8, 0x10(r4)
    stw r11, 0xa0(r1)
    stw r10, 0xa8(r1)
    stw r9, 0xac(r1)
    stw r8, 0xb0(r1)
    stw r7, 0xb4(r1)
    stw r7, 0x14(r4)
lbl_fn_805182C8_00000A60:
    addi r4, r4, 0x18
lbl_fn_805182C8_00000A64:
    cmplw r4, r12
    bne lbl_fn_805182C8_00000998
    b lbl_fn_805182C8_00000F8C
lbl_fn_805182C8_00000A70:
    lwz r5, lbl_8087E488
    srawi r0, r7, 2
    addze r6, r0
    mulhw r0, r29, r5
    addi r8, r5, 0x1
    cmpwi r8, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r5
    add r0, r6, r0
    mulli r0, r0, 0x18
    add r0, r4, r0
    blt lbl_fn_805182C8_00000AB0
    li r8, -0x4
lbl_fn_805182C8_00000AB0:
    mulhw r4, r29, r8
    addi r3, r8, 0x1
    slwi r5, r7, 2
    stw r3, lbl_8087E488
    cmpwi r3, 0x5
    lwz r6, 0x0(r25)
    subf r3, r7, r5
    srawi r3, r3, 2
    addze r5, r3
    srawi r3, r4, 1
    srwi r4, r3, 31
    add r3, r3, r4
    mulli r3, r3, 0x5
    subf r3, r3, r8
    add r3, r5, r3
    mulli r3, r3, 0x18
    add r7, r6, r3
    blt lbl_fn_805182C8_00000B00
    li r8, -0x4
    stw r8, lbl_8087E488
lbl_fn_805182C8_00000B00:
    lwz r5, 0x0(r26)
    mr r6, r27
    addi r3, r1, 0x20
    addi r4, r1, 0x1c
    subi r30, r5, 0x18
    stw r30, 0x18(r1)
    addi r5, r1, 0x18
    stw r7, 0x1c(r1)
    stw r0, 0x20(r1)
    bl fn_805190C0
    lwz r24, 0x0(r25)
    mr r3, r30
    lhz r4, 0x4(r30)
    b lbl_fn_805182C8_00000B3C
lbl_fn_805182C8_00000B38:
    addi r24, r24, 0x18
lbl_fn_805182C8_00000B3C:
    lhz r0, 0x4(r24)
    cmplw r0, r4
    blt lbl_fn_805182C8_00000B38
lbl_fn_805182C8_00000B48:
    subi r3, r3, 0x18
    cmplw r24, r3
    beq lbl_fn_805182C8_00000B60
    lhz r0, 0x4(r3)
    cmplw r0, r4
    bge lbl_fn_805182C8_00000B48
lbl_fn_805182C8_00000B60:
    cmplw r24, r3
    bge lbl_fn_805182C8_00000CC8
    lwz r9, 0x0(r24)
    lwz r4, 0x4(r24)
    lwz r8, 0x8(r24)
    lwz r7, 0xc(r24)
    lwz r6, 0x10(r24)
    lwz r5, 0x14(r24)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r24)
    lhz r0, 0x4(r3)
    sth r0, 0x4(r24)
    lhz r0, 0x6(r3)
    sth r0, 0x6(r24)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r24)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r24)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r24)
    lwz r0, 0x14(r3)
    stw r0, 0x14(r24)
    addi r24, r24, 0x18
    stw r4, 0x8c(r1)
    stw r9, 0x0(r3)
    lhz r4, 0x8c(r1)
    sth r4, 0x4(r3)
    lhz r0, 0x8e(r1)
    sth r0, 0x6(r3)
    stw r8, 0x8(r3)
    stw r7, 0xc(r3)
    stw r6, 0x10(r3)
    stw r9, 0x88(r1)
    stw r8, 0x90(r1)
    stw r7, 0x94(r1)
    stw r6, 0x98(r1)
    stw r5, 0x9c(r1)
    stw r5, 0x14(r3)
    b lbl_fn_805182C8_00000C00
lbl_fn_805182C8_00000BFC:
    addi r24, r24, 0x18
lbl_fn_805182C8_00000C00:
    lhz r4, 0x4(r30)
    lhz r0, 0x4(r24)
    cmplw r0, r4
    blt lbl_fn_805182C8_00000BFC
lbl_fn_805182C8_00000C10:
    subi r3, r3, 0x18
    lhz r0, 0x4(r3)
    cmplw r0, r4
    bge lbl_fn_805182C8_00000C10
    xor r0, r3, r24
    cntlzw r0, r0
    slw r0, r3, r0
    srwi. r0, r0, 31
    beq lbl_fn_805182C8_00000CC8
    lwz r9, 0x0(r24)
    lwz r4, 0x4(r24)
    lwz r8, 0x8(r24)
    lwz r7, 0xc(r24)
    lwz r6, 0x10(r24)
    lwz r5, 0x14(r24)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r24)
    lhz r0, 0x4(r3)
    sth r0, 0x4(r24)
    lhz r0, 0x6(r3)
    sth r0, 0x6(r24)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r24)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r24)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r24)
    lwz r0, 0x14(r3)
    stw r0, 0x14(r24)
    addi r24, r24, 0x18
    stw r4, 0x74(r1)
    stw r9, 0x0(r3)
    lhz r4, 0x74(r1)
    sth r4, 0x4(r3)
    lhz r0, 0x76(r1)
    sth r0, 0x6(r3)
    stw r8, 0x8(r3)
    stw r7, 0xc(r3)
    stw r6, 0x10(r3)
    stw r9, 0x70(r1)
    stw r8, 0x78(r1)
    stw r7, 0x7c(r1)
    stw r6, 0x80(r1)
    stw r5, 0x84(r1)
    stw r5, 0x14(r3)
    b lbl_fn_805182C8_00000C00
lbl_fn_805182C8_00000CC8:
    lwz r6, 0x0(r25)
    cmplw r24, r6
    bne lbl_fn_805182C8_00000F14
    lwz r9, 0x0(r24)
    lwz r3, 0x4(r24)
    lwz r8, 0x8(r24)
    lwz r7, 0xc(r24)
    lwz r6, 0x10(r24)
    lwz r5, 0x14(r24)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r24)
    lhz r0, 0x4(r30)
    sth r0, 0x4(r24)
    lhz r0, 0x6(r30)
    sth r0, 0x6(r24)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r24)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r24)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r24)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r24)
    addi r24, r24, 0x18
    stw r3, 0x5c(r1)
    stw r9, 0x0(r30)
    lhz r3, 0x5c(r1)
    sth r3, 0x4(r30)
    lhz r0, 0x5e(r1)
    sth r0, 0x6(r30)
    stw r8, 0x8(r30)
    stw r7, 0xc(r30)
    stw r6, 0x10(r30)
    stw r5, 0x14(r30)
    lwz r4, 0x0(r26)
    lwz r10, 0x0(r25)
    stw r9, 0x58(r1)
    subi r3, r4, 0x18
    lhz r9, 0x4(r10)
    lhz r0, -0x14(r4)
    stw r8, 0x60(r1)
    cmplw r9, r0
    stw r7, 0x64(r1)
    stw r6, 0x68(r1)
    stw r5, 0x6c(r1)
    blt lbl_fn_805182C8_00000E30
    b lbl_fn_805182C8_00000D88
lbl_fn_805182C8_00000D84:
    addi r24, r24, 0x18
lbl_fn_805182C8_00000D88:
    cmplw r24, r4
    beq lbl_fn_805182C8_00000D9C
    lhz r0, 0x4(r24)
    cmplw r9, r0
    bge lbl_fn_805182C8_00000D84
lbl_fn_805182C8_00000D9C:
    cmplw r24, r3
    bge lbl_fn_805182C8_00000E30
    lwz r9, 0x0(r24)
    lwz r4, 0x4(r24)
    lwz r8, 0x8(r24)
    lwz r7, 0xc(r24)
    lwz r6, 0x10(r24)
    lwz r5, 0x14(r24)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r24)
    lhz r0, 0x4(r3)
    sth r0, 0x4(r24)
    lhz r0, 0x6(r3)
    sth r0, 0x6(r24)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r24)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r24)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r24)
    lwz r0, 0x14(r3)
    stw r0, 0x14(r24)
    stw r4, 0x44(r1)
    stw r9, 0x0(r3)
    lhz r4, 0x44(r1)
    sth r4, 0x4(r3)
    lhz r0, 0x46(r1)
    sth r0, 0x6(r3)
    stw r8, 0x8(r3)
    stw r7, 0xc(r3)
    stw r6, 0x10(r3)
    stw r9, 0x40(r1)
    stw r8, 0x48(r1)
    stw r7, 0x4c(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r5, 0x14(r3)
lbl_fn_805182C8_00000E30:
    cmplw r24, r3
    bge lbl_fn_805182C8_00000F0C
    b lbl_fn_805182C8_00000E40
lbl_fn_805182C8_00000E3C:
    addi r24, r24, 0x18
lbl_fn_805182C8_00000E40:
    lwz r4, 0x0(r25)
    lhz r0, 0x4(r24)
    lhz r4, 0x4(r4)
    cmplw r4, r0
    bge lbl_fn_805182C8_00000E3C
lbl_fn_805182C8_00000E54:
    subi r3, r3, 0x18
    lhz r0, 0x4(r3)
    cmplw r4, r0
    blt lbl_fn_805182C8_00000E54
    xor r0, r3, r24
    cntlzw r0, r0
    slw r0, r3, r0
    srwi. r0, r0, 31
    beq lbl_fn_805182C8_00000F0C
    lwz r9, 0x0(r24)
    lwz r4, 0x4(r24)
    lwz r8, 0x8(r24)
    lwz r7, 0xc(r24)
    lwz r6, 0x10(r24)
    lwz r5, 0x14(r24)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r24)
    lhz r0, 0x4(r3)
    sth r0, 0x4(r24)
    lhz r0, 0x6(r3)
    sth r0, 0x6(r24)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r24)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r24)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r24)
    lwz r0, 0x14(r3)
    stw r0, 0x14(r24)
    addi r24, r24, 0x18
    stw r4, 0x2c(r1)
    stw r9, 0x0(r3)
    lhz r4, 0x2c(r1)
    sth r4, 0x4(r3)
    lhz r0, 0x2e(r1)
    sth r0, 0x6(r3)
    stw r8, 0x8(r3)
    stw r7, 0xc(r3)
    stw r6, 0x10(r3)
    stw r9, 0x28(r1)
    stw r8, 0x30(r1)
    stw r7, 0x34(r1)
    stw r6, 0x38(r1)
    stw r5, 0x3c(r1)
    stw r5, 0x14(r3)
    b lbl_fn_805182C8_00000E40
lbl_fn_805182C8_00000F0C:
    stw r24, 0x0(r25)
    b lbl_fn_805182C8_00000954
lbl_fn_805182C8_00000F14:
    lwz r3, 0x0(r26)
    subf r0, r6, r24
    subi r5, r31, 0x5555
    mulhw r4, r5, r0
    subf r0, r24, r3
    mulhw r0, r5, r0
    srawi r4, r4, 2
    srwi r5, r4, 31
    srawi r0, r0, 2
    add r5, r4, r5
    srwi r4, r0, 31
    add r0, r0, r4
    cmpw r5, r0
    bge lbl_fn_805182C8_00000F6C
    stw r24, 0x10(r1)
    mr r5, r27
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    stw r6, 0x14(r1)
    bl fn_80518940
    stw r24, 0x0(r25)
    b lbl_fn_805182C8_00000954
lbl_fn_805182C8_00000F6C:
    stw r3, 0x8(r1)
    mr r5, r27
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    stw r24, 0xc(r1)
    bl fn_80518940
    stw r24, 0x0(r26)
    b lbl_fn_805182C8_00000954
lbl_fn_805182C8_00000F8C:
    lmw r24, 0xc0(r1)
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_80518940(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0xe4(r1)
    stmw r24, 0xc0(r1)
    lis r31, 0x2aab
    mr r25, r3
    mr r26, r4
    mr r27, r5
    addi r29, r6, 0x6667
    subi r28, r31, 0x5555
lbl_fn_80518940_00000FCC:
    lwz r4, 0x0(r25)
    lwz r3, 0x0(r26)
    subf r0, r4, r3
    mulhw r0, r28, r0
    srawi r0, r0, 2
    srwi r5, r0, 31
    add r7, r0, r5
    cmpwi r7, 0x1
    ble lbl_fn_80518940_00001604
    cmpwi r7, 0x14
    bgt lbl_fn_80518940_000010E8
    cmplw r4, r3
    beq lbl_fn_80518940_00001604
    subi r12, r3, 0x18
    cmplw r4, r12
    beq lbl_fn_80518940_00001604
    b lbl_fn_80518940_000010DC
lbl_fn_80518940_00001010:
    cmplw r4, r3
    mr r6, r4
    beq lbl_fn_80518940_00001044
    addi r5, r4, 0x18
    b lbl_fn_80518940_0000103C
lbl_fn_80518940_00001024:
    lhz r7, 0x4(r5)
    lhz r0, 0x4(r6)
    cmplw r7, r0
    bge lbl_fn_80518940_00001038
    mr r6, r5
lbl_fn_80518940_00001038:
    addi r5, r5, 0x18
lbl_fn_80518940_0000103C:
    cmplw r5, r3
    bne lbl_fn_80518940_00001024
lbl_fn_80518940_00001044:
    cmplw r6, r4
    beq lbl_fn_80518940_000010D8
    lwz r11, 0x0(r6)
    lwz r5, 0x4(r6)
    lwz r10, 0x8(r6)
    lwz r9, 0xc(r6)
    lwz r8, 0x10(r6)
    lwz r7, 0x14(r6)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r6)
    lhz r0, 0x4(r4)
    sth r0, 0x4(r6)
    lhz r0, 0x6(r4)
    sth r0, 0x6(r6)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r6)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r6)
    lwz r0, 0x10(r4)
    stw r0, 0x10(r6)
    lwz r0, 0x14(r4)
    stw r0, 0x14(r6)
    stw r5, 0xa4(r1)
    stw r11, 0x0(r4)
    lhz r5, 0xa4(r1)
    sth r5, 0x4(r4)
    lhz r0, 0xa6(r1)
    sth r0, 0x6(r4)
    stw r10, 0x8(r4)
    stw r9, 0xc(r4)
    stw r8, 0x10(r4)
    stw r11, 0xa0(r1)
    stw r10, 0xa8(r1)
    stw r9, 0xac(r1)
    stw r8, 0xb0(r1)
    stw r7, 0xb4(r1)
    stw r7, 0x14(r4)
lbl_fn_80518940_000010D8:
    addi r4, r4, 0x18
lbl_fn_80518940_000010DC:
    cmplw r4, r12
    bne lbl_fn_80518940_00001010
    b lbl_fn_80518940_00001604
lbl_fn_80518940_000010E8:
    lwz r5, lbl_8087E48C
    srawi r0, r7, 2
    addze r6, r0
    mulhw r0, r29, r5
    addi r8, r5, 0x1
    cmpwi r8, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r5
    add r0, r6, r0
    mulli r0, r0, 0x18
    add r0, r4, r0
    blt lbl_fn_80518940_00001128
    li r8, -0x4
lbl_fn_80518940_00001128:
    mulhw r4, r29, r8
    addi r3, r8, 0x1
    slwi r5, r7, 2
    stw r3, lbl_8087E48C
    cmpwi r3, 0x5
    lwz r6, 0x0(r25)
    subf r3, r7, r5
    srawi r3, r3, 2
    addze r5, r3
    srawi r3, r4, 1
    srwi r4, r3, 31
    add r3, r3, r4
    mulli r3, r3, 0x5
    subf r3, r3, r8
    add r3, r5, r3
    mulli r3, r3, 0x18
    add r7, r6, r3
    blt lbl_fn_80518940_00001178
    li r8, -0x4
    stw r8, lbl_8087E48C
lbl_fn_80518940_00001178:
    lwz r5, 0x0(r26)
    mr r6, r27
    addi r3, r1, 0x20
    addi r4, r1, 0x1c
    subi r30, r5, 0x18
    stw r30, 0x18(r1)
    addi r5, r1, 0x18
    stw r7, 0x1c(r1)
    stw r0, 0x20(r1)
    bl fn_805190C0
    lwz r24, 0x0(r25)
    mr r3, r30
    lhz r4, 0x4(r30)
    b lbl_fn_80518940_000011B4
lbl_fn_80518940_000011B0:
    addi r24, r24, 0x18
lbl_fn_80518940_000011B4:
    lhz r0, 0x4(r24)
    cmplw r0, r4
    blt lbl_fn_80518940_000011B0
lbl_fn_80518940_000011C0:
    subi r3, r3, 0x18
    cmplw r24, r3
    beq lbl_fn_80518940_000011D8
    lhz r0, 0x4(r3)
    cmplw r0, r4
    bge lbl_fn_80518940_000011C0
lbl_fn_80518940_000011D8:
    cmplw r24, r3
    bge lbl_fn_80518940_00001340
    lwz r9, 0x0(r24)
    lwz r4, 0x4(r24)
    lwz r8, 0x8(r24)
    lwz r7, 0xc(r24)
    lwz r6, 0x10(r24)
    lwz r5, 0x14(r24)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r24)
    lhz r0, 0x4(r3)
    sth r0, 0x4(r24)
    lhz r0, 0x6(r3)
    sth r0, 0x6(r24)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r24)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r24)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r24)
    lwz r0, 0x14(r3)
    stw r0, 0x14(r24)
    addi r24, r24, 0x18
    stw r4, 0x8c(r1)
    stw r9, 0x0(r3)
    lhz r4, 0x8c(r1)
    sth r4, 0x4(r3)
    lhz r0, 0x8e(r1)
    sth r0, 0x6(r3)
    stw r8, 0x8(r3)
    stw r7, 0xc(r3)
    stw r6, 0x10(r3)
    stw r9, 0x88(r1)
    stw r8, 0x90(r1)
    stw r7, 0x94(r1)
    stw r6, 0x98(r1)
    stw r5, 0x9c(r1)
    stw r5, 0x14(r3)
    b lbl_fn_80518940_00001278
lbl_fn_80518940_00001274:
    addi r24, r24, 0x18
lbl_fn_80518940_00001278:
    lhz r4, 0x4(r30)
    lhz r0, 0x4(r24)
    cmplw r0, r4
    blt lbl_fn_80518940_00001274
lbl_fn_80518940_00001288:
    subi r3, r3, 0x18
    lhz r0, 0x4(r3)
    cmplw r0, r4
    bge lbl_fn_80518940_00001288
    xor r0, r3, r24
    cntlzw r0, r0
    slw r0, r3, r0
    srwi. r0, r0, 31
    beq lbl_fn_80518940_00001340
    lwz r9, 0x0(r24)
    lwz r4, 0x4(r24)
    lwz r8, 0x8(r24)
    lwz r7, 0xc(r24)
    lwz r6, 0x10(r24)
    lwz r5, 0x14(r24)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r24)
    lhz r0, 0x4(r3)
    sth r0, 0x4(r24)
    lhz r0, 0x6(r3)
    sth r0, 0x6(r24)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r24)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r24)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r24)
    lwz r0, 0x14(r3)
    stw r0, 0x14(r24)
    addi r24, r24, 0x18
    stw r4, 0x74(r1)
    stw r9, 0x0(r3)
    lhz r4, 0x74(r1)
    sth r4, 0x4(r3)
    lhz r0, 0x76(r1)
    sth r0, 0x6(r3)
    stw r8, 0x8(r3)
    stw r7, 0xc(r3)
    stw r6, 0x10(r3)
    stw r9, 0x70(r1)
    stw r8, 0x78(r1)
    stw r7, 0x7c(r1)
    stw r6, 0x80(r1)
    stw r5, 0x84(r1)
    stw r5, 0x14(r3)
    b lbl_fn_80518940_00001278
lbl_fn_80518940_00001340:
    lwz r6, 0x0(r25)
    cmplw r24, r6
    bne lbl_fn_80518940_0000158C
    lwz r9, 0x0(r24)
    lwz r3, 0x4(r24)
    lwz r8, 0x8(r24)
    lwz r7, 0xc(r24)
    lwz r6, 0x10(r24)
    lwz r5, 0x14(r24)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r24)
    lhz r0, 0x4(r30)
    sth r0, 0x4(r24)
    lhz r0, 0x6(r30)
    sth r0, 0x6(r24)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r24)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r24)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r24)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r24)
    addi r24, r24, 0x18
    stw r3, 0x5c(r1)
    stw r9, 0x0(r30)
    lhz r3, 0x5c(r1)
    sth r3, 0x4(r30)
    lhz r0, 0x5e(r1)
    sth r0, 0x6(r30)
    stw r8, 0x8(r30)
    stw r7, 0xc(r30)
    stw r6, 0x10(r30)
    stw r5, 0x14(r30)
    lwz r4, 0x0(r26)
    lwz r10, 0x0(r25)
    stw r9, 0x58(r1)
    subi r3, r4, 0x18
    lhz r9, 0x4(r10)
    lhz r0, -0x14(r4)
    stw r8, 0x60(r1)
    cmplw r9, r0
    stw r7, 0x64(r1)
    stw r6, 0x68(r1)
    stw r5, 0x6c(r1)
    blt lbl_fn_80518940_000014A8
    b lbl_fn_80518940_00001400
lbl_fn_80518940_000013FC:
    addi r24, r24, 0x18
lbl_fn_80518940_00001400:
    cmplw r24, r4
    beq lbl_fn_80518940_00001414
    lhz r0, 0x4(r24)
    cmplw r9, r0
    bge lbl_fn_80518940_000013FC
lbl_fn_80518940_00001414:
    cmplw r24, r3
    bge lbl_fn_80518940_000014A8
    lwz r9, 0x0(r24)
    lwz r4, 0x4(r24)
    lwz r8, 0x8(r24)
    lwz r7, 0xc(r24)
    lwz r6, 0x10(r24)
    lwz r5, 0x14(r24)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r24)
    lhz r0, 0x4(r3)
    sth r0, 0x4(r24)
    lhz r0, 0x6(r3)
    sth r0, 0x6(r24)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r24)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r24)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r24)
    lwz r0, 0x14(r3)
    stw r0, 0x14(r24)
    stw r4, 0x44(r1)
    stw r9, 0x0(r3)
    lhz r4, 0x44(r1)
    sth r4, 0x4(r3)
    lhz r0, 0x46(r1)
    sth r0, 0x6(r3)
    stw r8, 0x8(r3)
    stw r7, 0xc(r3)
    stw r6, 0x10(r3)
    stw r9, 0x40(r1)
    stw r8, 0x48(r1)
    stw r7, 0x4c(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r5, 0x14(r3)
lbl_fn_80518940_000014A8:
    cmplw r24, r3
    bge lbl_fn_80518940_00001584
    b lbl_fn_80518940_000014B8
lbl_fn_80518940_000014B4:
    addi r24, r24, 0x18
lbl_fn_80518940_000014B8:
    lwz r4, 0x0(r25)
    lhz r0, 0x4(r24)
    lhz r4, 0x4(r4)
    cmplw r4, r0
    bge lbl_fn_80518940_000014B4
lbl_fn_80518940_000014CC:
    subi r3, r3, 0x18
    lhz r0, 0x4(r3)
    cmplw r4, r0
    blt lbl_fn_80518940_000014CC
    xor r0, r3, r24
    cntlzw r0, r0
    slw r0, r3, r0
    srwi. r0, r0, 31
    beq lbl_fn_80518940_00001584
    lwz r9, 0x0(r24)
    lwz r4, 0x4(r24)
    lwz r8, 0x8(r24)
    lwz r7, 0xc(r24)
    lwz r6, 0x10(r24)
    lwz r5, 0x14(r24)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r24)
    lhz r0, 0x4(r3)
    sth r0, 0x4(r24)
    lhz r0, 0x6(r3)
    sth r0, 0x6(r24)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r24)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r24)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r24)
    lwz r0, 0x14(r3)
    stw r0, 0x14(r24)
    addi r24, r24, 0x18
    stw r4, 0x2c(r1)
    stw r9, 0x0(r3)
    lhz r4, 0x2c(r1)
    sth r4, 0x4(r3)
    lhz r0, 0x2e(r1)
    sth r0, 0x6(r3)
    stw r8, 0x8(r3)
    stw r7, 0xc(r3)
    stw r6, 0x10(r3)
    stw r9, 0x28(r1)
    stw r8, 0x30(r1)
    stw r7, 0x34(r1)
    stw r6, 0x38(r1)
    stw r5, 0x3c(r1)
    stw r5, 0x14(r3)
    b lbl_fn_80518940_000014B8
lbl_fn_80518940_00001584:
    stw r24, 0x0(r25)
    b lbl_fn_80518940_00000FCC
lbl_fn_80518940_0000158C:
    lwz r3, 0x0(r26)
    subf r0, r6, r24
    subi r5, r31, 0x5555
    mulhw r4, r5, r0
    subf r0, r24, r3
    mulhw r0, r5, r0
    srawi r4, r4, 2
    srwi r5, r4, 31
    srawi r0, r0, 2
    add r5, r4, r5
    srwi r4, r0, 31
    add r0, r0, r4
    cmpw r5, r0
    bge lbl_fn_80518940_000015E4
    stw r24, 0x10(r1)
    mr r5, r27
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    stw r6, 0x14(r1)
    bl fn_80518940
    stw r24, 0x0(r25)
    b lbl_fn_80518940_00000FCC
lbl_fn_80518940_000015E4:
    stw r3, 0x8(r1)
    mr r5, r27
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    stw r24, 0xc(r1)
    bl fn_80518940
    stw r24, 0x0(r26)
    b lbl_fn_80518940_00000FCC
lbl_fn_80518940_00001604:
    lmw r24, 0xc0(r1)
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_80518FB8(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x0(r4)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_80518FD0(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    lwz r3, 0x0(r4)
    subf r0, r3, r5
    orc r3, r5, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_80518FF0(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    lwz r3, 0x0(r4)
    xor r0, r3, r0
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r3, r0, 31
    blr
}

asm void fn_8051900C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lwz r10, 0x0(r3)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lwz r9, 0x4(r3)
    lhz r0, 0x4(r4)
    sth r0, 0x4(r3)
    lwz r8, 0x8(r3)
    lhz r0, 0x6(r4)
    sth r0, 0x6(r3)
    lwz r7, 0xc(r3)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r3)
    lwz r6, 0x10(r3)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r3)
    lwz r5, 0x14(r3)
    lwz r0, 0x10(r4)
    stw r0, 0x10(r3)
    lwz r0, 0x14(r4)
    stw r0, 0x14(r3)
    stw r9, 0xc(r1)
    lhz r3, 0xc(r1)
    lhz r0, 0xe(r1)
    stw r10, 0x8(r1)
    stw r8, 0x10(r1)
    stw r7, 0x14(r1)
    stw r6, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r10, 0x0(r4)
    sth r3, 0x4(r4)
    sth r0, 0x6(r4)
    stw r8, 0x8(r4)
    stw r7, 0xc(r4)
    stw r6, 0x10(r4)
    stw r5, 0x14(r4)
    addi r1, r1, 0x20
    blr
}

asm void fn_805190A4(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    lwz r0, 0x0(r4)
    subf r3, r5, r0
    subf r0, r0, r5
    or r0, r3, r0
    srwi r3, r0, 31
    blr
}

asm void fn_805190C0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    lwz r7, 0x0(r3)
    lwz r6, 0x0(r5)
    lhz r10, 0x4(r7)
    lhz r9, 0x4(r6)
    lwz r6, 0x0(r4)
    subf r0, r10, r9
    orc r8, r9, r10
    srwi r0, r0, 1
    lhz r11, 0x4(r6)
    subf r0, r0, r8
    srwi. r30, r0, 31
    orc r8, r11, r9
    subf r0, r9, r11
    srwi r0, r0, 1
    subf r0, r0, r8
    srwi r0, r0, 31
    beq lbl_fn_805190C0_00001778
    cmpwi r0, 0x0
    bne lbl_fn_805190C0_000019E0
lbl_fn_805190C0_00001778:
    cmpwi r30, 0x0
    bne lbl_fn_805190C0_00001818
    cmpwi r0, 0x0
    bne lbl_fn_805190C0_00001818
    lwz r10, 0x0(r7)
    lwz r3, 0x4(r7)
    lwz r9, 0x8(r7)
    lwz r8, 0xc(r7)
    lwz r5, 0x10(r7)
    lwz r4, 0x14(r7)
    lwz r0, 0x0(r6)
    stw r0, 0x0(r7)
    lhz r0, 0x4(r6)
    sth r0, 0x4(r7)
    lhz r0, 0x6(r6)
    sth r0, 0x6(r7)
    lwz r0, 0x8(r6)
    stw r0, 0x8(r7)
    lwz r0, 0xc(r6)
    stw r0, 0xc(r7)
    lwz r0, 0x10(r6)
    stw r0, 0x10(r7)
    lwz r0, 0x14(r6)
    stw r0, 0x14(r7)
    stw r3, 0x54(r1)
    stw r10, 0x0(r6)
    lhz r3, 0x54(r1)
    sth r3, 0x4(r6)
    lhz r0, 0x56(r1)
    sth r0, 0x6(r6)
    stw r9, 0x8(r6)
    stw r8, 0xc(r6)
    stw r5, 0x10(r6)
    stw r10, 0x50(r1)
    stw r9, 0x58(r1)
    stw r8, 0x5c(r1)
    stw r5, 0x60(r1)
    stw r4, 0x64(r1)
    stw r4, 0x14(r6)
    b lbl_fn_805190C0_000019E0
lbl_fn_805190C0_00001818:
    cmplw r11, r10
    bge lbl_fn_805190C0_000018AC
    lwz r31, 0x0(r7)
    lwz r8, 0x4(r7)
    lwz r12, 0x8(r7)
    lwz r11, 0xc(r7)
    lwz r10, 0x10(r7)
    lwz r9, 0x14(r7)
    lwz r0, 0x0(r6)
    stw r0, 0x0(r7)
    lhz r0, 0x4(r6)
    sth r0, 0x4(r7)
    lhz r0, 0x6(r6)
    sth r0, 0x6(r7)
    lwz r0, 0x8(r6)
    stw r0, 0x8(r7)
    lwz r0, 0xc(r6)
    stw r0, 0xc(r7)
    lwz r0, 0x10(r6)
    stw r0, 0x10(r7)
    lwz r0, 0x14(r6)
    stw r0, 0x14(r7)
    stw r8, 0x3c(r1)
    stw r31, 0x0(r6)
    lhz r8, 0x3c(r1)
    sth r8, 0x4(r6)
    lhz r0, 0x3e(r1)
    sth r0, 0x6(r6)
    stw r12, 0x8(r6)
    stw r11, 0xc(r6)
    stw r10, 0x10(r6)
    stw r31, 0x38(r1)
    stw r12, 0x40(r1)
    stw r11, 0x44(r1)
    stw r10, 0x48(r1)
    stw r9, 0x4c(r1)
    stw r9, 0x14(r6)
lbl_fn_805190C0_000018AC:
    cmpwi r30, 0x0
    beq lbl_fn_805190C0_0000194C
    lwz r10, 0x0(r4)
    lwz r9, 0x0(r5)
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
    b lbl_fn_805190C0_000019E0
lbl_fn_805190C0_0000194C:
    lwz r10, 0x0(r3)
    lwz r9, 0x0(r5)
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
lbl_fn_805190C0_000019E0:
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    addi r1, r1, 0x70
    blr
}

asm void fn_80519390(void)
{
    nofralloc
    lwz r5, 0x0(r4)
    lis r4, 0x2aab
    lwz r0, 0x0(r3)
    subi r3, r4, 0x5555
    subf r0, r5, r0
    mulhw r0, r3, r0
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r3, r0, r3
    blr
}
