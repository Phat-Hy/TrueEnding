#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_800844D8(void);
extern void fn_800E1D5C(void);
extern void fn_800E2778(void);
extern void fn_802428D8(void);
extern void fn_80243514(void);
extern void fn_802435A8(void);
extern void fn_8068B39C(void);
extern void fn_806920C0(void);
extern void fn_8069293C(void);
extern void fn_80693884(void);
extern void fn_806939C8(void);
extern void fn_80693AB8(void);
extern void fn_806952C4(void);

/* External data declarations */
extern u8 lbl_80743070[];
extern u8 lbl_80783C60[];
extern u8 lbl_80783C98[];
extern u8 lbl_80783CA0[];
extern u8 lbl_80783CA8[];

/* Small data declarations */
extern u32 lbl_8087F3C8;
extern u32 lbl_80880390;
extern u32 lbl_808803C0;

/* Function declarations */
void fn_8024067C(void);
void fn_8024068C(void);
void fn_8024069C(void);
void fn_80240734(void);
void fn_802407CC(void);
void fn_802411B8(void);
void fn_80241C20(void);
void fn_80241CB8(void);

asm void fn_8024067C(void)
{
    nofralloc
    lwz r12, 0x0(r4)
    lwz r12, 0x18(r12)
    mtctr r12
    bctr
}

asm void fn_8024068C(void)
{
    nofralloc
    lwz r12, 0x0(r4)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctr
}

asm void fn_8024069C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r5, 0x18(r4)
    srwi. r0, r5, 31
    bne lbl_fn_8024069C_00000060
    lwz r0, 0x1c(r4)
    stw r0, 0x4(r3)
    stw r5, 0x0(r3)
    lwz r0, 0x20(r4)
    stw r0, 0x8(r3)
    b lbl_fn_8024069C_000000A0
lbl_fn_8024069C_00000060:
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    lwz r4, 0x1c(r4)
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r30
    stb r0, 0x8(r1)
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x20(r31)
    lwz r0, 0x1c(r31)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8024069C_000000A0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80240734(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r5, 0x24(r4)
    srwi. r0, r5, 31
    bne lbl_fn_80240734_000000F8
    lwz r0, 0x28(r4)
    stw r0, 0x4(r3)
    stw r5, 0x0(r3)
    lwz r0, 0x2c(r4)
    stw r0, 0x8(r3)
    b lbl_fn_80240734_00000138
lbl_fn_80240734_000000F8:
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    lwz r4, 0x28(r4)
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r30
    stb r0, 0x8(r1)
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x2c(r31)
    lwz r0, 0x28(r31)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80240734_00000138:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802407CC(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stmw r24, 0x90(r1)
    mr r24, r3
    mr r25, r4
    stw r3, 0x80(r1)
    lwz r26, 0x28(r3)
    lwz r6, 0x2c(r3)
    lhz r5, 0x30(r3)
    cmpwi r26, 0x0
    lbz r0, 0x33(r3)
    stw r6, 0x84(r1)
    stw r26, 0x88(r1)
    sth r5, 0x8c(r1)
    stb r0, 0x8e(r1)
    bne lbl_fn_802407CC_00000198
    li r26, 0x1
lbl_fn_802407CC_00000198:
    subi r0, r26, 0x1
    stw r0, 0x28(r3)
    mr r3, r24
    mr r4, r25
    bl fn_802411B8
    mr r29, r3
    mr r4, r24
    addi r3, r1, 0x50
    bl fn_800E1D5C
    lwz r27, lbl_808803C0
    cmpwi r27, 0x0
    bne lbl_fn_802407CC_000001D8
    lwz r3, lbl_80880390
    addi r27, r3, 0x1
    stw r27, lbl_80880390
    stw r27, lbl_808803C0
lbl_fn_802407CC_000001D8:
    lwz r3, 0x50(r1)
    lwz r0, 0x4(r3)
    cmplw r27, r0
    bge lbl_fn_802407CC_000001FC
    lwz r3, 0x0(r3)
    slwi r0, r27, 2
    lwzx r28, r3, r0
    cmpwi r28, 0x0
    bne lbl_fn_802407CC_00000258
lbl_fn_802407CC_000001FC:
    li r3, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_802407CC_00000224
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8069293C
    mr r4, r3
lbl_fn_802407CC_00000224:
    lwz r5, lbl_808803C0
    lwz r3, 0x50(r1)
    cmpwi r5, 0x0
    bne lbl_fn_802407CC_00000244
    lwz r5, lbl_80880390
    addi r5, r5, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_808803C0
lbl_fn_802407CC_00000244:
    bl fn_806920C0
    lwz r3, 0x50(r1)
    slwi r0, r27, 2
    lwz r3, 0x0(r3)
    lwzx r28, r3, r0
lbl_fn_802407CC_00000258:
    lwz r30, lbl_8087F3C8
    cmpwi r30, 0x0
    bne lbl_fn_802407CC_00000274
    lwz r3, lbl_80880390
    addi r30, r3, 0x1
    stw r30, lbl_80880390
    stw r30, lbl_8087F3C8
lbl_fn_802407CC_00000274:
    lwz r3, 0x50(r1)
    lwz r0, 0x4(r3)
    cmplw r30, r0
    bge lbl_fn_802407CC_00000298
    lwz r3, 0x0(r3)
    slwi r0, r30, 2
    lwzx r27, r3, r0
    cmpwi r27, 0x0
    bne lbl_fn_802407CC_00000490
lbl_fn_802407CC_00000298:
    lwz r31, 0x50(r1)
    li r3, 0x30
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_802407CC_00000458
    li r6, 0x0
    stw r6, 0x4(r3)
    lis r5, lbl_80783C60@ha
    lis r4, lbl_80783CA0@ha
    addi r5, r5, lbl_80783C60@l
    stw r5, 0x0(r3)
    li r5, 0x2e
    li r0, 0x2c
    stb r5, 0x8(r3)
    addi r4, r4, lbl_80783CA0@l
    li r5, 0x0
    stb r0, 0x9(r3)
    stw r6, 0xc(r3)
    stw r6, 0x10(r3)
    stw r6, 0x14(r3)
    stw r6, 0x18(r3)
    stw r6, 0x1c(r3)
    stw r6, 0x20(r3)
    stw r6, 0x24(r3)
    stw r6, 0x28(r3)
    stw r6, 0x2c(r3)
    addi r3, r1, 0x58
    bl fn_80243514
    lwz r0, 0x18(r27)
    srwi. r4, r0, 31
    bne lbl_fn_802407CC_0000033C
    lwz r3, 0x58(r1)
    srwi. r0, r3, 31
    bne lbl_fn_802407CC_0000033C
    lwz r0, 0x5c(r1)
    stw r3, 0x18(r27)
    stw r0, 0x1c(r27)
    lwz r0, 0x60(r1)
    stw r0, 0x20(r27)
    b lbl_fn_802407CC_00000394
lbl_fn_802407CC_0000033C:
    cmpwi r4, 0x0
    beq lbl_fn_802407CC_0000034C
    lwz r5, 0x1c(r27)
    b lbl_fn_802407CC_00000354
lbl_fn_802407CC_0000034C:
    lbz r0, 0x18(r27)
    clrlwi r5, r0, 25
lbl_fn_802407CC_00000354:
    lwz r0, 0x58(r1)
    srwi. r0, r0, 31
    bne lbl_fn_802407CC_00000370
    lbz r0, 0x58(r1)
    addi r6, r1, 0x59
    clrlwi r4, r0, 25
    b lbl_fn_802407CC_00000378
lbl_fn_802407CC_00000370:
    lwz r6, 0x60(r1)
    lwz r4, 0x5c(r1)
lbl_fn_802407CC_00000378:
    lbz r0, 0x44(r1)
    add r7, r6, r4
    stb r0, 0x40(r1)
    addi r3, r27, 0x18
    addi r8, r1, 0x40
    li r4, 0x0
    bl fn_80013F78
lbl_fn_802407CC_00000394:
    lwz r0, 0x58(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802407CC_000003A8
    lwz r3, 0x60(r1)
    bl dtor_80084684
lbl_fn_802407CC_000003A8:
    lis r4, lbl_80783C98@ha
    addi r3, r1, 0x64
    addi r4, r4, lbl_80783C98@l
    li r5, 0x0
    bl fn_80243514
    lwz r0, 0x24(r27)
    srwi. r4, r0, 31
    bne lbl_fn_802407CC_000003EC
    lwz r3, 0x64(r1)
    srwi. r0, r3, 31
    bne lbl_fn_802407CC_000003EC
    lwz r0, 0x68(r1)
    stw r3, 0x24(r27)
    stw r0, 0x28(r27)
    lwz r0, 0x6c(r1)
    stw r0, 0x2c(r27)
    b lbl_fn_802407CC_00000444
lbl_fn_802407CC_000003EC:
    cmpwi r4, 0x0
    beq lbl_fn_802407CC_000003FC
    lwz r5, 0x28(r27)
    b lbl_fn_802407CC_00000404
lbl_fn_802407CC_000003FC:
    lbz r0, 0x24(r27)
    clrlwi r5, r0, 25
lbl_fn_802407CC_00000404:
    lwz r0, 0x64(r1)
    srwi. r0, r0, 31
    bne lbl_fn_802407CC_00000420
    lbz r0, 0x64(r1)
    addi r6, r1, 0x65
    clrlwi r4, r0, 25
    b lbl_fn_802407CC_00000428
lbl_fn_802407CC_00000420:
    lwz r6, 0x6c(r1)
    lwz r4, 0x68(r1)
lbl_fn_802407CC_00000428:
    lbz r0, 0x4c(r1)
    add r7, r6, r4
    stb r0, 0x48(r1)
    addi r3, r27, 0x24
    addi r8, r1, 0x48
    li r4, 0x0
    bl fn_80013F78
lbl_fn_802407CC_00000444:
    lwz r0, 0x64(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802407CC_00000458
    lwz r3, 0x6c(r1)
    bl dtor_80084684
lbl_fn_802407CC_00000458:
    lwz r5, lbl_8087F3C8
    cmpwi r5, 0x0
    bne lbl_fn_802407CC_00000474
    lwz r3, lbl_80880390
    addi r5, r3, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_8087F3C8
lbl_fn_802407CC_00000474:
    mr r3, r31
    mr r4, r27
    bl fn_806920C0
    lwz r3, 0x50(r1)
    slwi r0, r30, 2
    lwz r3, 0x0(r3)
    lwzx r27, r3, r0
lbl_fn_802407CC_00000490:
    lwz r12, 0x0(r28)
    mr r3, r28
    li r4, 0x30
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r27)
    mr r30, r3
    mr r3, r27
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r29, -0x4
    mr r31, r3
    blt lbl_fn_802407CC_00000900
    cmpw r29, r26
    bge lbl_fn_802407CC_00000900
    lwz r0, 0x0(r25)
    extsb r4, r3
    srwi. r0, r0, 31
    bne lbl_fn_802407CC_000004EC
    addi r3, r25, 0x1
    b lbl_fn_802407CC_000004F0
lbl_fn_802407CC_000004EC:
    lwz r3, 0x8(r25)
lbl_fn_802407CC_000004F0:
    lbz r0, 0x1(r3)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_802407CC_00000528
    lbz r0, 0x38(r1)
    mr r3, r25
    stb r0, 0x3c(r1)
    addi r4, r26, 0x1
    addi r8, r1, 0x3c
    li r5, -0x1
    li r6, 0x0
    li r7, 0x0
    bl fn_80013F78
    b lbl_fn_802407CC_0000054C
lbl_fn_802407CC_00000528:
    lbz r0, 0x30(r1)
    mr r3, r25
    stb r0, 0x34(r1)
    addi r8, r1, 0x34
    li r4, 0x1
    li r5, -0x1
    li r6, 0x0
    li r7, 0x0
    bl fn_80013F78
lbl_fn_802407CC_0000054C:
    cmpwi r29, 0x0
    bge lbl_fn_802407CC_0000060C
    lwz r0, 0x0(r25)
    extsb r4, r31
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi. r5, r0, 5
    beq lbl_fn_802407CC_00000574
    addi r3, r25, 0x1
    b lbl_fn_802407CC_00000578
lbl_fn_802407CC_00000574:
    lwz r3, 0x8(r25)
lbl_fn_802407CC_00000578:
    lbz r0, 0x1(r3)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_802407CC_000005D8
    cmpwi r5, 0x0
    beq lbl_fn_802407CC_00000598
    addi r3, r25, 0x1
    b lbl_fn_802407CC_0000059C
lbl_fn_802407CC_00000598:
    lwz r3, 0x8(r25)
lbl_fn_802407CC_0000059C:
    cmpwi r5, 0x0
    addi r5, r3, 0x1
    beq lbl_fn_802407CC_000005B0
    addi r4, r25, 0x1
    b lbl_fn_802407CC_000005B4
lbl_fn_802407CC_000005B0:
    lwz r4, 0x8(r25)
lbl_fn_802407CC_000005B4:
    lbz r0, 0x28(r1)
    subf r4, r4, r5
    stb r0, 0x2c(r1)
    mr r3, r25
    addi r8, r1, 0x2c
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
    bl fn_80013F78
lbl_fn_802407CC_000005D8:
    mr r3, r25
    neg r6, r29
    extsb r7, r30
    li r4, 0x0
    li r5, 0x0
    bl fn_800E2778
    mr r3, r25
    extsb r7, r31
    li r4, 0x1
    li r5, 0x0
    li r6, 0x1
    bl fn_800E2778
    b lbl_fn_802407CC_0000069C
lbl_fn_802407CC_0000060C:
    ble lbl_fn_802407CC_0000069C
    lwz r0, 0x0(r25)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_802407CC_0000062C
    addi r3, r25, 0x1
    b lbl_fn_802407CC_00000630
lbl_fn_802407CC_0000062C:
    lwz r3, 0x8(r25)
lbl_fn_802407CC_00000630:
    cmpwi r0, 0x0
    addi r5, r3, 0x1
    beq lbl_fn_802407CC_00000644
    addi r4, r25, 0x1
    b lbl_fn_802407CC_00000648
lbl_fn_802407CC_00000644:
    lwz r4, 0x8(r25)
lbl_fn_802407CC_00000648:
    lbz r0, 0x20(r1)
    subf r4, r4, r5
    stb r0, 0x24(r1)
    mr r3, r25
    addi r8, r1, 0x24
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
    bl fn_80013F78
    subi r0, r26, 0x1
    cmpw r29, r0
    blt lbl_fn_802407CC_00000684
    lhz r0, 0x30(r24)
    rlwinm. r0, r0, 0, 21, 21
    beq lbl_fn_802407CC_0000069C
lbl_fn_802407CC_00000684:
    mr r3, r25
    addi r4, r29, 0x1
    extsb r7, r31
    li r5, 0x0
    li r6, 0x1
    bl fn_800E2778
lbl_fn_802407CC_0000069C:
    lhz r0, 0x30(r24)
    rlwinm. r0, r0, 0, 21, 21
    bne lbl_fn_802407CC_00000840
    lwz r0, 0x0(r25)
    srwi. r7, r0, 31
    bne lbl_fn_802407CC_000006C4
    lbz r0, 0x0(r25)
    addi r6, r25, 0x1
    clrlwi r0, r0, 25
    b lbl_fn_802407CC_000006CC
lbl_fn_802407CC_000006C4:
    lwz r6, 0x8(r25)
    lwz r0, 0x4(r25)
lbl_fn_802407CC_000006CC:
    cmpwi r0, 0x0
    beq lbl_fn_802407CC_00000710
    add r5, r6, r0
    mr r4, r6
    subf r0, r6, r5
    extsb r3, r31
    mtctr r0
    cmplw r6, r5
    bge lbl_fn_802407CC_00000710
lbl_fn_802407CC_000006F0:
    lbz r0, 0x0(r4)
    extsb r0, r0
    cmpw r3, r0
    bne lbl_fn_802407CC_00000708
    subf r3, r6, r4
    b lbl_fn_802407CC_00000714
lbl_fn_802407CC_00000708:
    addi r4, r4, 0x1
    bdnz lbl_fn_802407CC_000006F0
lbl_fn_802407CC_00000710:
    li r3, -0x1
lbl_fn_802407CC_00000714:
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    beq lbl_fn_802407CC_00000840
    cmpwi r7, 0x0
    bne lbl_fn_802407CC_00000738
    lbz r0, 0x0(r25)
    addi r3, r25, 0x1
    clrlwi r0, r0, 25
    b lbl_fn_802407CC_00000740
lbl_fn_802407CC_00000738:
    lwz r3, 0x8(r25)
    lwz r0, 0x4(r25)
lbl_fn_802407CC_00000740:
    add r5, r3, r0
    extsb r4, r30
    subi r3, r5, 0x1
    b lbl_fn_802407CC_00000754
lbl_fn_802407CC_00000750:
    subi r3, r3, 0x1
lbl_fn_802407CC_00000754:
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpw r4, r0
    beq lbl_fn_802407CC_00000750
    addi r6, r3, 0x1
    cmplw r6, r5
    beq lbl_fn_802407CC_000007A8
    cmpwi r7, 0x0
    subf r5, r6, r5
    bne lbl_fn_802407CC_00000784
    addi r4, r25, 0x1
    b lbl_fn_802407CC_00000788
lbl_fn_802407CC_00000784:
    lwz r4, 0x8(r25)
lbl_fn_802407CC_00000788:
    lbz r0, 0x18(r1)
    subf r4, r4, r6
    stb r0, 0x1c(r1)
    mr r3, r25
    addi r8, r1, 0x1c
    li r6, 0x0
    li r7, 0x0
    bl fn_80013F78
lbl_fn_802407CC_000007A8:
    lwz r0, 0x0(r25)
    srwi r5, r0, 31
    cntlzw r0, r5
    srwi. r4, r0, 5
    beq lbl_fn_802407CC_000007C8
    lbz r0, 0x0(r25)
    clrlwi r3, r0, 25
    b lbl_fn_802407CC_000007CC
lbl_fn_802407CC_000007C8:
    lwz r3, 0x4(r25)
lbl_fn_802407CC_000007CC:
    cmpwi r4, 0x0
    subi r0, r3, 0x1
    extsb r4, r31
    beq lbl_fn_802407CC_000007E4
    addi r3, r25, 0x1
    b lbl_fn_802407CC_000007E8
lbl_fn_802407CC_000007E4:
    lwz r3, 0x8(r25)
lbl_fn_802407CC_000007E8:
    lbzx r0, r3, r0
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_802407CC_00000840
    cmpwi r5, 0x0
    bne lbl_fn_802407CC_00000828
    lbz r3, 0x0(r25)
    li r0, 0x0
    clrlwi r4, r3, 25
    subi r4, r4, 0x1
    add r3, r25, r4
    stb r0, 0x1(r3)
    lbz r0, 0x0(r25)
    rlwimi r0, r4, 0, 25, 31
    stb r0, 0x0(r25)
    b lbl_fn_802407CC_00000840
lbl_fn_802407CC_00000828:
    lwz r4, 0x4(r25)
    li r0, 0x0
    lwz r3, 0x8(r25)
    subi r4, r4, 0x1
    stbx r0, r3, r4
    stw r4, 0x4(r25)
lbl_fn_802407CC_00000840:
    mr r4, r27
    addi r3, r1, 0x70
    bl fn_802435A8
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    mr r0, r3
    mr r6, r25
    extsb r3, r31
    addi r5, r1, 0x70
    extsb r4, r0
    bl fn_802428D8
    lwz r0, 0x70(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802407CC_0000088C
    lwz r3, 0x78(r1)
    bl dtor_80084684
lbl_fn_802407CC_0000088C:
    addic. r0, r1, 0x50
    beq lbl_fn_802407CC_000008A4
    lwz r3, 0x54(r1)
    cmpwi r3, 0x0
    beq lbl_fn_802407CC_000008A4
    bl fn_806952C4
lbl_fn_802407CC_000008A4:
    lwz r3, 0x80(r1)
    lhz r0, 0x8c(r1)
    sth r0, 0x30(r3)
    lwz r0, 0x84(r1)
    stw r0, 0x2c(r3)
    lwz r0, 0x88(r1)
    stw r0, 0x28(r3)
    lbz r0, 0x8e(r1)
    stb r0, 0x33(r3)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802407CC_000008E0
    lbz r0, 0x32(r3)
    ori r0, r0, 0x1
    stb r0, 0x32(r3)
lbl_fn_802407CC_000008E0:
    lbz r4, 0x33(r3)
    lbz r0, 0x32(r3)
    and. r0, r0, r4
    beq lbl_fn_802407CC_00000B28
    lis r4, lbl_80783CA8@ha
    addi r4, r4, lbl_80783CA8@l
    bl fn_8068B39C
    b lbl_fn_802407CC_00000B28
lbl_fn_802407CC_00000900:
    lhz r5, 0x30(r24)
    rlwinm. r0, r5, 0, 21, 21
    bne lbl_fn_802407CC_00000AB8
    lwz r0, 0x0(r25)
    extsb r4, r3
    srwi. r0, r0, 31
    bne lbl_fn_802407CC_00000924
    addi r3, r25, 0x1
    b lbl_fn_802407CC_00000928
lbl_fn_802407CC_00000924:
    lwz r3, 0x8(r25)
lbl_fn_802407CC_00000928:
    lbz r0, 0x1(r3)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_802407CC_00000AB8
    rlwinm. r0, r5, 0, 17, 17
    beq lbl_fn_802407CC_00000960
    lwz r12, 0x0(r28)
    mr r3, r28
    li r4, 0x45
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    mr r27, r3
    b lbl_fn_802407CC_0000097C
lbl_fn_802407CC_00000960:
    lwz r12, 0x0(r28)
    mr r3, r28
    li r4, 0x65
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    mr r27, r3
lbl_fn_802407CC_0000097C:
    lwz r0, 0x0(r25)
    srwi. r4, r0, 31
    bne lbl_fn_802407CC_00000998
    lbz r0, 0x0(r25)
    addi r7, r25, 0x1
    clrlwi r0, r0, 25
    b lbl_fn_802407CC_000009A0
lbl_fn_802407CC_00000998:
    lwz r7, 0x8(r25)
    lwz r0, 0x4(r25)
lbl_fn_802407CC_000009A0:
    cmpwi r0, 0x0
    beq lbl_fn_802407CC_000009E4
    add r6, r7, r0
    mr r5, r7
    subf r0, r7, r6
    extsb r3, r27
    mtctr r0
    cmplw r7, r6
    bge lbl_fn_802407CC_000009E4
lbl_fn_802407CC_000009C4:
    lbz r0, 0x0(r5)
    extsb r0, r0
    cmpw r3, r0
    bne lbl_fn_802407CC_000009DC
    subf r3, r7, r5
    b lbl_fn_802407CC_000009E8
lbl_fn_802407CC_000009DC:
    addi r5, r5, 0x1
    bdnz lbl_fn_802407CC_000009C4
lbl_fn_802407CC_000009E4:
    li r3, -0x1
lbl_fn_802407CC_000009E8:
    cntlzw r0, r4
    srwi. r7, r0, 5
    beq lbl_fn_802407CC_000009FC
    addi r0, r25, 0x1
    b lbl_fn_802407CC_00000A00
lbl_fn_802407CC_000009FC:
    lwz r0, 0x8(r25)
lbl_fn_802407CC_00000A00:
    add r5, r0, r3
    extsb r4, r30
    subi r3, r5, 0x1
    b lbl_fn_802407CC_00000A14
lbl_fn_802407CC_00000A10:
    subi r3, r3, 0x1
lbl_fn_802407CC_00000A14:
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpw r4, r0
    beq lbl_fn_802407CC_00000A10
    addi r6, r3, 0x1
    cmplw r6, r5
    beq lbl_fn_802407CC_00000A68
    cmpwi r7, 0x0
    subf r5, r6, r5
    beq lbl_fn_802407CC_00000A44
    addi r4, r25, 0x1
    b lbl_fn_802407CC_00000A48
lbl_fn_802407CC_00000A44:
    lwz r4, 0x8(r25)
lbl_fn_802407CC_00000A48:
    lbz r0, 0x10(r1)
    subf r4, r4, r6
    stb r0, 0x14(r1)
    mr r3, r25
    addi r8, r1, 0x14
    li r6, 0x0
    li r7, 0x0
    bl fn_80013F78
lbl_fn_802407CC_00000A68:
    lwz r0, 0x0(r25)
    extsb r4, r27
    srwi. r0, r0, 31
    bne lbl_fn_802407CC_00000A80
    addi r3, r25, 0x1
    b lbl_fn_802407CC_00000A84
lbl_fn_802407CC_00000A80:
    lwz r3, 0x8(r25)
lbl_fn_802407CC_00000A84:
    lbz r0, 0x2(r3)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_802407CC_00000AB8
    lbz r0, 0x8(r1)
    mr r3, r25
    stb r0, 0xc(r1)
    addi r8, r1, 0xc
    li r4, 0x1
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
    bl fn_80013F78
lbl_fn_802407CC_00000AB8:
    addic. r0, r1, 0x50
    beq lbl_fn_802407CC_00000AD0
    lwz r3, 0x54(r1)
    cmpwi r3, 0x0
    beq lbl_fn_802407CC_00000AD0
    bl fn_806952C4
lbl_fn_802407CC_00000AD0:
    lwz r3, 0x80(r1)
    lhz r0, 0x8c(r1)
    sth r0, 0x30(r3)
    lwz r0, 0x84(r1)
    stw r0, 0x2c(r3)
    lwz r0, 0x88(r1)
    stw r0, 0x28(r3)
    lbz r0, 0x8e(r1)
    stb r0, 0x33(r3)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802407CC_00000B0C
    lbz r0, 0x32(r3)
    ori r0, r0, 0x1
    stb r0, 0x32(r3)
lbl_fn_802407CC_00000B0C:
    lbz r4, 0x33(r3)
    lbz r0, 0x32(r3)
    and. r0, r0, r4
    beq lbl_fn_802407CC_00000B28
    lis r4, lbl_80783CA8@ha
    addi r4, r4, lbl_80783CA8@l
    bl fn_8068B39C
lbl_fn_802407CC_00000B28:
    lmw r24, 0x90(r1)
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_802411B8(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x108(r1)
    fmr f31, f1
    stmw r25, 0xec(r1)
    mr r26, r3
    mr r25, r4
    addi r3, r1, 0xa0
    mr r4, r26
    bl fn_800E1D5C
    lwz r27, lbl_808803C0
    cmpwi r27, 0x0
    bne lbl_fn_802411B8_00000B84
    lwz r3, lbl_80880390
    addi r27, r3, 0x1
    stw r27, lbl_80880390
    stw r27, lbl_808803C0
lbl_fn_802411B8_00000B84:
    lwz r3, 0xa0(r1)
    lwz r0, 0x4(r3)
    cmplw r27, r0
    bge lbl_fn_802411B8_00000BA8
    lwz r3, 0x0(r3)
    slwi r0, r27, 2
    lwzx r29, r3, r0
    cmpwi r29, 0x0
    bne lbl_fn_802411B8_00000C04
lbl_fn_802411B8_00000BA8:
    li r3, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_802411B8_00000BD0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8069293C
    mr r4, r3
lbl_fn_802411B8_00000BD0:
    lwz r5, lbl_808803C0
    lwz r3, 0xa0(r1)
    cmpwi r5, 0x0
    bne lbl_fn_802411B8_00000BF0
    lwz r5, lbl_80880390
    addi r5, r5, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_808803C0
lbl_fn_802411B8_00000BF0:
    bl fn_806920C0
    lwz r3, 0xa0(r1)
    slwi r0, r27, 2
    lwz r3, 0x0(r3)
    lwzx r29, r3, r0
lbl_fn_802411B8_00000C04:
    lwz r30, lbl_8087F3C8
    cmpwi r30, 0x0
    bne lbl_fn_802411B8_00000C20
    lwz r3, lbl_80880390
    addi r30, r3, 0x1
    stw r30, lbl_80880390
    stw r30, lbl_8087F3C8
lbl_fn_802411B8_00000C20:
    lwz r3, 0xa0(r1)
    lwz r0, 0x4(r3)
    cmplw r30, r0
    bge lbl_fn_802411B8_00000C44
    lwz r3, 0x0(r3)
    slwi r0, r30, 2
    lwzx r27, r3, r0
    cmpwi r27, 0x0
    bne lbl_fn_802411B8_00000E3C
lbl_fn_802411B8_00000C44:
    lwz r31, 0xa0(r1)
    li r3, 0x30
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_802411B8_00000E04
    li r6, 0x0
    stw r6, 0x4(r3)
    lis r5, lbl_80783C60@ha
    lis r4, lbl_80783CA0@ha
    addi r5, r5, lbl_80783C60@l
    stw r5, 0x0(r3)
    li r5, 0x2e
    li r0, 0x2c
    stb r5, 0x8(r3)
    addi r4, r4, lbl_80783CA0@l
    li r5, 0x0
    stb r0, 0x9(r3)
    stw r6, 0xc(r3)
    stw r6, 0x10(r3)
    stw r6, 0x14(r3)
    stw r6, 0x18(r3)
    stw r6, 0x1c(r3)
    stw r6, 0x20(r3)
    stw r6, 0x24(r3)
    stw r6, 0x28(r3)
    stw r6, 0x2c(r3)
    addi r3, r1, 0xa8
    bl fn_80243514
    lwz r0, 0x18(r28)
    srwi. r4, r0, 31
    bne lbl_fn_802411B8_00000CE8
    lwz r3, 0xa8(r1)
    srwi. r0, r3, 31
    bne lbl_fn_802411B8_00000CE8
    lwz r0, 0xac(r1)
    stw r3, 0x18(r28)
    stw r0, 0x1c(r28)
    lwz r0, 0xb0(r1)
    stw r0, 0x20(r28)
    b lbl_fn_802411B8_00000D40
lbl_fn_802411B8_00000CE8:
    cmpwi r4, 0x0
    beq lbl_fn_802411B8_00000CF8
    lwz r5, 0x1c(r28)
    b lbl_fn_802411B8_00000D00
lbl_fn_802411B8_00000CF8:
    lbz r0, 0x18(r28)
    clrlwi r5, r0, 25
lbl_fn_802411B8_00000D00:
    lwz r0, 0xa8(r1)
    srwi. r0, r0, 31
    bne lbl_fn_802411B8_00000D1C
    lbz r0, 0xa8(r1)
    addi r6, r1, 0xa9
    clrlwi r4, r0, 25
    b lbl_fn_802411B8_00000D24
lbl_fn_802411B8_00000D1C:
    lwz r6, 0xb0(r1)
    lwz r4, 0xac(r1)
lbl_fn_802411B8_00000D24:
    lbz r0, 0x8c(r1)
    add r7, r6, r4
    stb r0, 0x88(r1)
    addi r3, r28, 0x18
    addi r8, r1, 0x88
    li r4, 0x0
    bl fn_80013F78
lbl_fn_802411B8_00000D40:
    lwz r0, 0xa8(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802411B8_00000D54
    lwz r3, 0xb0(r1)
    bl dtor_80084684
lbl_fn_802411B8_00000D54:
    lis r4, lbl_80783C98@ha
    addi r3, r1, 0xb4
    addi r4, r4, lbl_80783C98@l
    li r5, 0x0
    bl fn_80243514
    lwz r0, 0x24(r28)
    srwi. r4, r0, 31
    bne lbl_fn_802411B8_00000D98
    lwz r3, 0xb4(r1)
    srwi. r0, r3, 31
    bne lbl_fn_802411B8_00000D98
    lwz r0, 0xb8(r1)
    stw r3, 0x24(r28)
    stw r0, 0x28(r28)
    lwz r0, 0xbc(r1)
    stw r0, 0x2c(r28)
    b lbl_fn_802411B8_00000DF0
lbl_fn_802411B8_00000D98:
    cmpwi r4, 0x0
    beq lbl_fn_802411B8_00000DA8
    lwz r5, 0x28(r28)
    b lbl_fn_802411B8_00000DB0
lbl_fn_802411B8_00000DA8:
    lbz r0, 0x24(r28)
    clrlwi r5, r0, 25
lbl_fn_802411B8_00000DB0:
    lwz r0, 0xb4(r1)
    srwi. r0, r0, 31
    bne lbl_fn_802411B8_00000DCC
    lbz r0, 0xb4(r1)
    addi r6, r1, 0xb5
    clrlwi r4, r0, 25
    b lbl_fn_802411B8_00000DD4
lbl_fn_802411B8_00000DCC:
    lwz r6, 0xbc(r1)
    lwz r4, 0xb8(r1)
lbl_fn_802411B8_00000DD4:
    lbz r0, 0x94(r1)
    add r7, r6, r4
    stb r0, 0x90(r1)
    addi r3, r28, 0x24
    addi r8, r1, 0x90
    li r4, 0x0
    bl fn_80013F78
lbl_fn_802411B8_00000DF0:
    lwz r0, 0xb4(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802411B8_00000E04
    lwz r3, 0xbc(r1)
    bl dtor_80084684
lbl_fn_802411B8_00000E04:
    lwz r5, lbl_8087F3C8
    cmpwi r5, 0x0
    bne lbl_fn_802411B8_00000E20
    lwz r3, lbl_80880390
    addi r5, r3, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_8087F3C8
lbl_fn_802411B8_00000E20:
    mr r3, r31
    mr r4, r28
    bl fn_806920C0
    lwz r3, 0xa0(r1)
    slwi r0, r30, 2
    lwz r3, 0x0(r3)
    lwzx r27, r3, r0
lbl_fn_802411B8_00000E3C:
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, 0x30
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r27)
    mr r30, r3
    mr r3, r27
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lhz r0, 0x30(r26)
    mr r31, r3
    rlwinm. r0, r0, 0, 17, 17
    beq lbl_fn_802411B8_00000E9C
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, 0x45
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    mr r28, r3
    b lbl_fn_802411B8_00000EB8
lbl_fn_802411B8_00000E9C:
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, 0x65
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    mr r28, r3
lbl_fn_802411B8_00000EB8:
    lis r3, lbl_80743070@ha
    lwz r27, 0x28(r26)
    lfd f0, lbl_80743070@l(r3)
    fcmpu cr0, f0, f31
    bne lbl_fn_802411B8_0000107C
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    beq lbl_fn_802411B8_00000EE8
    li r0, 0x1
    stw r0, 0x4(r25)
    lwz r3, 0x8(r25)
    b lbl_fn_802411B8_00000EFC
lbl_fn_802411B8_00000EE8:
    lbz r0, 0x0(r25)
    li r3, 0x1
    rlwimi r0, r3, 0, 25, 31
    stb r0, 0x0(r25)
    addi r3, r25, 0x1
lbl_fn_802411B8_00000EFC:
    stb r30, 0x0(r3)
    li r0, 0x0
    stb r0, 0x1(r3)
    lhz r0, 0x30(r26)
    rlwinm. r0, r0, 0, 21, 21
    bne lbl_fn_802411B8_00000F1C
    cmpwi r27, 0x0
    ble lbl_fn_802411B8_00000F5C
lbl_fn_802411B8_00000F1C:
    stb r31, 0x84(r1)
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    bne lbl_fn_802411B8_00000F38
    lbz r0, 0x0(r25)
    clrlwi r4, r0, 25
    b lbl_fn_802411B8_00000F3C
lbl_fn_802411B8_00000F38:
    lwz r4, 0x4(r25)
lbl_fn_802411B8_00000F3C:
    lbz r0, 0x7c(r1)
    mr r3, r25
    stb r0, 0x80(r1)
    addi r6, r1, 0x84
    addi r7, r1, 0x85
    addi r8, r1, 0x80
    li r5, 0x0
    bl fn_80013F78
lbl_fn_802411B8_00000F5C:
    cmpwi r27, 0x0
    ble lbl_fn_802411B8_00000F94
    lwz r0, 0x0(r25)
    mr r3, r25
    srwi. r0, r0, 31
    bne lbl_fn_802411B8_00000F80
    lbz r0, 0x0(r25)
    clrlwi r4, r0, 25
    b lbl_fn_802411B8_00000F84
lbl_fn_802411B8_00000F80:
    lwz r4, 0x4(r25)
lbl_fn_802411B8_00000F84:
    mr r6, r27
    extsb r7, r30
    li r5, 0x0
    bl fn_800E2778
lbl_fn_802411B8_00000F94:
    stb r28, 0x78(r1)
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    bne lbl_fn_802411B8_00000FB0
    lbz r0, 0x0(r25)
    clrlwi r4, r0, 25
    b lbl_fn_802411B8_00000FB4
lbl_fn_802411B8_00000FB0:
    lwz r4, 0x4(r25)
lbl_fn_802411B8_00000FB4:
    lbz r0, 0x70(r1)
    mr r3, r25
    stb r0, 0x74(r1)
    addi r6, r1, 0x78
    addi r7, r1, 0x79
    addi r8, r1, 0x74
    li r5, 0x0
    bl fn_80013F78
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, 0x2b
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    stb r3, 0x6c(r1)
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    bne lbl_fn_802411B8_00001008
    lbz r0, 0x0(r25)
    clrlwi r4, r0, 25
    b lbl_fn_802411B8_0000100C
lbl_fn_802411B8_00001008:
    lwz r4, 0x4(r25)
lbl_fn_802411B8_0000100C:
    lbz r0, 0x64(r1)
    mr r3, r25
    stb r0, 0x68(r1)
    addi r6, r1, 0x6c
    addi r7, r1, 0x6d
    addi r8, r1, 0x68
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x0(r25)
    mr r3, r25
    srwi. r0, r0, 31
    bne lbl_fn_802411B8_00001048
    lbz r0, 0x0(r25)
    clrlwi r4, r0, 25
    b lbl_fn_802411B8_0000104C
lbl_fn_802411B8_00001048:
    lwz r4, 0x4(r25)
lbl_fn_802411B8_0000104C:
    extsb r7, r30
    li r5, 0x0
    li r6, 0x2
    bl fn_800E2778
    addic. r0, r1, 0xa0
    beq lbl_fn_802411B8_00001074
    lwz r3, 0xa4(r1)
    cmpwi r3, 0x0
    beq lbl_fn_802411B8_00001074
    bl fn_806952C4
lbl_fn_802411B8_00001074:
    li r3, 0x0
    b lbl_fn_802411B8_0000158C
lbl_fn_802411B8_0000107C:
    fmr f1, f31
    addi r3, r1, 0xd8
    bl fn_80693884
    addi r3, r1, 0xcc
    addi r4, r1, 0xd8
    addi r5, r27, 0x1
    addi r6, r1, 0x98
    bl fn_80693AB8
    mr r4, r29
    addi r3, r1, 0xc0
    addi r5, r1, 0xcc
    bl fn_80241C20
    lwz r0, 0x0(r25)
    srwi. r4, r0, 31
    bne lbl_fn_802411B8_000010DC
    lwz r3, 0xc0(r1)
    srwi. r0, r3, 31
    bne lbl_fn_802411B8_000010DC
    lwz r0, 0xc4(r1)
    stw r0, 0x4(r25)
    stw r3, 0x0(r25)
    lwz r0, 0xc8(r1)
    stw r0, 0x8(r25)
    b lbl_fn_802411B8_00001134
lbl_fn_802411B8_000010DC:
    cmpwi r4, 0x0
    beq lbl_fn_802411B8_000010EC
    lwz r5, 0x4(r25)
    b lbl_fn_802411B8_000010F4
lbl_fn_802411B8_000010EC:
    lbz r0, 0x0(r25)
    clrlwi r5, r0, 25
lbl_fn_802411B8_000010F4:
    lwz r0, 0xc0(r1)
    srwi. r0, r0, 31
    bne lbl_fn_802411B8_00001110
    lbz r0, 0xc0(r1)
    addi r6, r1, 0xc1
    clrlwi r4, r0, 25
    b lbl_fn_802411B8_00001118
lbl_fn_802411B8_00001110:
    lwz r6, 0xc8(r1)
    lwz r4, 0xc4(r1)
lbl_fn_802411B8_00001118:
    lbz r0, 0x60(r1)
    add r7, r6, r4
    stb r0, 0x5c(r1)
    mr r3, r25
    addi r8, r1, 0x5c
    li r4, 0x0
    bl fn_80013F78
lbl_fn_802411B8_00001134:
    lwz r0, 0xc0(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802411B8_00001148
    lwz r3, 0xc8(r1)
    bl dtor_80084684
lbl_fn_802411B8_00001148:
    lwz r0, 0xcc(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802411B8_0000115C
    lwz r3, 0xd4(r1)
    bl dtor_80084684
lbl_fn_802411B8_0000115C:
    lhz r0, 0x30(r26)
    li r4, 0x0
    lwz r26, 0x98(r1)
    rlwinm. r0, r0, 0, 21, 21
    bne lbl_fn_802411B8_00001178
    cmpwi r27, 0x0
    ble lbl_fn_802411B8_000011DC
lbl_fn_802411B8_00001178:
    stb r31, 0x58(r1)
    lwz r0, 0x0(r25)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_802411B8_00001198
    addi r3, r25, 0x1
    b lbl_fn_802411B8_0000119C
lbl_fn_802411B8_00001198:
    lwz r3, 0x8(r25)
lbl_fn_802411B8_0000119C:
    cmpwi r0, 0x0
    addi r5, r3, 0x1
    beq lbl_fn_802411B8_000011B0
    addi r4, r25, 0x1
    b lbl_fn_802411B8_000011B4
lbl_fn_802411B8_000011B0:
    lwz r4, 0x8(r25)
lbl_fn_802411B8_000011B4:
    lbz r0, 0x54(r1)
    subf r4, r4, r5
    stb r0, 0x50(r1)
    mr r3, r25
    addi r6, r1, 0x58
    addi r7, r1, 0x59
    addi r8, r1, 0x50
    li r5, 0x0
    bl fn_80013F78
    li r4, 0x1
lbl_fn_802411B8_000011DC:
    lwz r0, 0x0(r25)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi. r3, r0, 5
    beq lbl_fn_802411B8_000011FC
    lbz r0, 0x0(r25)
    clrlwi r0, r0, 25
    b lbl_fn_802411B8_00001200
lbl_fn_802411B8_000011FC:
    lwz r0, 0x4(r25)
lbl_fn_802411B8_00001200:
    add r4, r27, r4
    addi r4, r4, 0x1
    cmpw r4, r0
    ble lbl_fn_802411B8_00001254
    cmpwi r3, 0x0
    beq lbl_fn_802411B8_00001224
    lbz r0, 0x0(r25)
    clrlwi r0, r0, 25
    b lbl_fn_802411B8_00001228
lbl_fn_802411B8_00001224:
    lwz r0, 0x4(r25)
lbl_fn_802411B8_00001228:
    cmpwi r3, 0x0
    mr r3, r25
    subf r6, r0, r4
    beq lbl_fn_802411B8_00001244
    lbz r0, 0x0(r25)
    clrlwi r4, r0, 25
    b lbl_fn_802411B8_00001248
lbl_fn_802411B8_00001244:
    lwz r4, 0x4(r25)
lbl_fn_802411B8_00001248:
    extsb r7, r30
    li r5, 0x0
    bl fn_800E2778
lbl_fn_802411B8_00001254:
    stb r28, 0x4c(r1)
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    bne lbl_fn_802411B8_00001270
    lbz r0, 0x0(r25)
    clrlwi r4, r0, 25
    b lbl_fn_802411B8_00001274
lbl_fn_802411B8_00001270:
    lwz r4, 0x4(r25)
lbl_fn_802411B8_00001274:
    lbz r0, 0x44(r1)
    mr r3, r25
    stb r0, 0x48(r1)
    addi r6, r1, 0x4c
    addi r7, r1, 0x4d
    addi r8, r1, 0x48
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x98(r1)
    cmpwi r0, 0x0
    bge lbl_fn_802411B8_00001308
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, 0x2d
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    stb r3, 0x40(r1)
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    bne lbl_fn_802411B8_000012D4
    lbz r0, 0x0(r25)
    clrlwi r4, r0, 25
    b lbl_fn_802411B8_000012D8
lbl_fn_802411B8_000012D4:
    lwz r4, 0x4(r25)
lbl_fn_802411B8_000012D8:
    lbz r0, 0x38(r1)
    mr r3, r25
    stb r0, 0x3c(r1)
    addi r6, r1, 0x40
    addi r7, r1, 0x41
    addi r8, r1, 0x3c
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x98(r1)
    neg r0, r0
    stw r0, 0x98(r1)
    b lbl_fn_802411B8_00001360
lbl_fn_802411B8_00001308:
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, 0x2b
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    stb r3, 0x34(r1)
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    bne lbl_fn_802411B8_0000133C
    lbz r0, 0x0(r25)
    clrlwi r4, r0, 25
    b lbl_fn_802411B8_00001340
lbl_fn_802411B8_0000133C:
    lwz r4, 0x4(r25)
lbl_fn_802411B8_00001340:
    lbz r0, 0x2c(r1)
    mr r3, r25
    stb r0, 0x30(r1)
    addi r6, r1, 0x34
    addi r7, r1, 0x35
    addi r8, r1, 0x30
    li r5, 0x0
    bl fn_80013F78
lbl_fn_802411B8_00001360:
    lwz r0, 0x98(r1)
    cmpwi r0, 0xa
    bge lbl_fn_802411B8_00001428
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, 0x30
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    stb r3, 0x28(r1)
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    bne lbl_fn_802411B8_000013A0
    lbz r0, 0x0(r25)
    clrlwi r4, r0, 25
    b lbl_fn_802411B8_000013A4
lbl_fn_802411B8_000013A0:
    lwz r4, 0x4(r25)
lbl_fn_802411B8_000013A4:
    lbz r0, 0x20(r1)
    mr r3, r25
    stb r0, 0x24(r1)
    addi r6, r1, 0x28
    addi r7, r1, 0x29
    addi r8, r1, 0x24
    li r5, 0x0
    bl fn_80013F78
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r4, 0x98(r1)
    lwz r12, 0x1c(r12)
    addi r0, r4, 0x30
    extsb r4, r0
    mtctr r12
    bctrl
    stb r3, 0x1c(r1)
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    bne lbl_fn_802411B8_00001400
    lbz r0, 0x0(r25)
    clrlwi r4, r0, 25
    b lbl_fn_802411B8_00001404
lbl_fn_802411B8_00001400:
    lwz r4, 0x4(r25)
lbl_fn_802411B8_00001404:
    lbz r0, 0x14(r1)
    mr r3, r25
    stb r0, 0x18(r1)
    addi r6, r1, 0x1c
    addi r7, r1, 0x1d
    addi r8, r1, 0x18
    li r5, 0x0
    bl fn_80013F78
    b lbl_fn_802411B8_00001554
lbl_fn_802411B8_00001428:
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    bne lbl_fn_802411B8_00001440
    lbz r0, 0x0(r25)
    clrlwi r27, r0, 25
    b lbl_fn_802411B8_00001444
lbl_fn_802411B8_00001440:
    lwz r27, 0x4(r25)
lbl_fn_802411B8_00001444:
    lis r3, 0x6666
    lbz r28, 0x8(r1)
    lwz r0, 0x98(r1)
    addi r31, r3, 0x6667
    b lbl_fn_802411B8_000014E0
lbl_fn_802411B8_00001458:
    mulhw r4, r31, r0
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x1c(r12)
    srawi r4, r4, 2
    srwi r5, r4, 31
    add r4, r4, r5
    mulli r4, r4, 0xa
    subf r4, r4, r0
    addi r0, r4, 0x30
    extsb r4, r0
    mtctr r12
    bctrl
    stb r3, 0x10(r1)
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    bne lbl_fn_802411B8_000014A8
    lbz r0, 0x0(r25)
    clrlwi r4, r0, 25
    b lbl_fn_802411B8_000014AC
lbl_fn_802411B8_000014A8:
    lwz r4, 0x4(r25)
lbl_fn_802411B8_000014AC:
    stb r28, 0xc(r1)
    mr r3, r25
    addi r6, r1, 0x10
    addi r7, r1, 0x11
    addi r8, r1, 0xc
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x98(r1)
    mulhw r0, r31, r0
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r0, r0, r3
    stw r0, 0x98(r1)
lbl_fn_802411B8_000014E0:
    cmpwi r0, 0x0
    bgt lbl_fn_802411B8_00001458
    lwz r0, 0x0(r25)
    srwi. r3, r0, 31
    bne lbl_fn_802411B8_00001504
    lbz r0, 0x0(r25)
    addi r4, r25, 0x1
    clrlwi r0, r0, 25
    b lbl_fn_802411B8_0000150C
lbl_fn_802411B8_00001504:
    lwz r4, 0x8(r25)
    lwz r0, 0x4(r25)
lbl_fn_802411B8_0000150C:
    cmpwi r3, 0x0
    add r3, r4, r0
    bne lbl_fn_802411B8_00001520
    addi r0, r25, 0x1
    b lbl_fn_802411B8_00001524
lbl_fn_802411B8_00001520:
    lwz r0, 0x8(r25)
lbl_fn_802411B8_00001524:
    add r4, r0, r27
    cmplw r4, r3
    beq lbl_fn_802411B8_00001554
    b lbl_fn_802411B8_00001548
lbl_fn_802411B8_00001534:
    lbz r5, 0x0(r4)
    lbz r0, 0x0(r3)
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
    stb r5, 0x0(r3)
lbl_fn_802411B8_00001548:
    subi r3, r3, 0x1
    cmplw r4, r3
    blt lbl_fn_802411B8_00001534
lbl_fn_802411B8_00001554:
    addic. r0, r1, 0xd8
    beq lbl_fn_802411B8_00001570
    lwz r0, 0xd8(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802411B8_00001570
    lwz r3, 0xe0(r1)
    bl dtor_80084684
lbl_fn_802411B8_00001570:
    addic. r0, r1, 0xa0
    beq lbl_fn_802411B8_00001588
    lwz r3, 0xa4(r1)
    cmpwi r3, 0x0
    beq lbl_fn_802411B8_00001588
    bl fn_806952C4
lbl_fn_802411B8_00001588:
    mr r3, r26
lbl_fn_802411B8_0000158C:
    lfd f31, 0x108(r1)
    lmw r25, 0xec(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80241C20(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r6, 0x0(r5)
    stw r0, 0x24(r1)
    srwi. r0, r6, 31
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r3
    bne lbl_fn_80241C20_000015E4
    lwz r4, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r6, 0x0(r3)
    stw r4, 0x4(r3)
    stw r0, 0x8(r3)
    b lbl_fn_80241C20_00001624
lbl_fn_80241C20_000015E4:
    li r0, 0x0
    stw r0, 0x0(r3)
    lwz r4, 0x4(r5)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    bl fn_80013DC4
    lbz r5, 0xc(r1)
    mr r3, r30
    stb r5, 0x8(r1)
    addi r8, r1, 0x8
    lwz r6, 0x8(r31)
    li r4, 0x0
    lwz r0, 0x4(r31)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80241C20_00001624:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80241CB8(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x118(r1)
    fmr f31, f1
    stmw r24, 0xf8(r1)
    mr r24, r3
    mr r25, r4
    addi r3, r1, 0x90
    mr r4, r24
    bl fn_800E1D5C
    lwz r26, lbl_808803C0
    cmpwi r26, 0x0
    bne lbl_fn_80241CB8_00001684
    lwz r3, lbl_80880390
    addi r26, r3, 0x1
    stw r26, lbl_80880390
    stw r26, lbl_808803C0
lbl_fn_80241CB8_00001684:
    lwz r3, 0x90(r1)
    lwz r0, 0x4(r3)
    cmplw r26, r0
    bge lbl_fn_80241CB8_000016A8
    lwz r3, 0x0(r3)
    slwi r0, r26, 2
    lwzx r28, r3, r0
    cmpwi r28, 0x0
    bne lbl_fn_80241CB8_00001704
lbl_fn_80241CB8_000016A8:
    li r3, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80241CB8_000016D0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8069293C
    mr r4, r3
lbl_fn_80241CB8_000016D0:
    lwz r5, lbl_808803C0
    lwz r3, 0x90(r1)
    cmpwi r5, 0x0
    bne lbl_fn_80241CB8_000016F0
    lwz r5, lbl_80880390
    addi r5, r5, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_808803C0
lbl_fn_80241CB8_000016F0:
    bl fn_806920C0
    lwz r3, 0x90(r1)
    slwi r0, r26, 2
    lwz r3, 0x0(r3)
    lwzx r28, r3, r0
lbl_fn_80241CB8_00001704:
    lwz r29, lbl_8087F3C8
    cmpwi r29, 0x0
    bne lbl_fn_80241CB8_00001720
    lwz r3, lbl_80880390
    addi r29, r3, 0x1
    stw r29, lbl_80880390
    stw r29, lbl_8087F3C8
lbl_fn_80241CB8_00001720:
    lwz r3, 0x90(r1)
    lwz r0, 0x4(r3)
    cmplw r29, r0
    bge lbl_fn_80241CB8_00001744
    lwz r3, 0x0(r3)
    slwi r0, r29, 2
    lwzx r27, r3, r0
    cmpwi r27, 0x0
    bne lbl_fn_80241CB8_0000193C
lbl_fn_80241CB8_00001744:
    lwz r30, 0x90(r1)
    li r3, 0x30
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80241CB8_00001904
    li r6, 0x0
    stw r6, 0x4(r3)
    lis r5, lbl_80783C60@ha
    lis r4, lbl_80783CA0@ha
    addi r5, r5, lbl_80783C60@l
    stw r5, 0x0(r3)
    li r5, 0x2e
    li r0, 0x2c
    stb r5, 0x8(r3)
    addi r4, r4, lbl_80783CA0@l
    li r5, 0x0
    stb r0, 0x9(r3)
    stw r6, 0xc(r3)
    stw r6, 0x10(r3)
    stw r6, 0x14(r3)
    stw r6, 0x18(r3)
    stw r6, 0x1c(r3)
    stw r6, 0x20(r3)
    stw r6, 0x24(r3)
    stw r6, 0x28(r3)
    stw r6, 0x2c(r3)
    addi r3, r1, 0x98
    bl fn_80243514
    lwz r0, 0x18(r31)
    srwi. r4, r0, 31
    bne lbl_fn_80241CB8_000017E8
    lwz r3, 0x98(r1)
    srwi. r0, r3, 31
    bne lbl_fn_80241CB8_000017E8
    lwz r0, 0x9c(r1)
    stw r3, 0x18(r31)
    stw r0, 0x1c(r31)
    lwz r0, 0xa0(r1)
    stw r0, 0x20(r31)
    b lbl_fn_80241CB8_00001840
lbl_fn_80241CB8_000017E8:
    cmpwi r4, 0x0
    beq lbl_fn_80241CB8_000017F8
    lwz r5, 0x1c(r31)
    b lbl_fn_80241CB8_00001800
lbl_fn_80241CB8_000017F8:
    lbz r0, 0x18(r31)
    clrlwi r5, r0, 25
lbl_fn_80241CB8_00001800:
    lwz r0, 0x98(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80241CB8_0000181C
    lbz r0, 0x98(r1)
    addi r6, r1, 0x99
    clrlwi r4, r0, 25
    b lbl_fn_80241CB8_00001824
lbl_fn_80241CB8_0000181C:
    lwz r6, 0xa0(r1)
    lwz r4, 0x9c(r1)
lbl_fn_80241CB8_00001824:
    lbz r0, 0x80(r1)
    add r7, r6, r4
    stb r0, 0x7c(r1)
    addi r3, r31, 0x18
    addi r8, r1, 0x7c
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80241CB8_00001840:
    lwz r0, 0x98(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80241CB8_00001854
    lwz r3, 0xa0(r1)
    bl dtor_80084684
lbl_fn_80241CB8_00001854:
    lis r4, lbl_80783C98@ha
    addi r3, r1, 0xa4
    addi r4, r4, lbl_80783C98@l
    li r5, 0x0
    bl fn_80243514
    lwz r0, 0x24(r31)
    srwi. r4, r0, 31
    bne lbl_fn_80241CB8_00001898
    lwz r3, 0xa4(r1)
    srwi. r0, r3, 31
    bne lbl_fn_80241CB8_00001898
    lwz r0, 0xa8(r1)
    stw r3, 0x24(r31)
    stw r0, 0x28(r31)
    lwz r0, 0xac(r1)
    stw r0, 0x2c(r31)
    b lbl_fn_80241CB8_000018F0
lbl_fn_80241CB8_00001898:
    cmpwi r4, 0x0
    beq lbl_fn_80241CB8_000018A8
    lwz r5, 0x28(r31)
    b lbl_fn_80241CB8_000018B0
lbl_fn_80241CB8_000018A8:
    lbz r0, 0x24(r31)
    clrlwi r5, r0, 25
lbl_fn_80241CB8_000018B0:
    lwz r0, 0xa4(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80241CB8_000018CC
    lbz r0, 0xa4(r1)
    addi r6, r1, 0xa5
    clrlwi r4, r0, 25
    b lbl_fn_80241CB8_000018D4
lbl_fn_80241CB8_000018CC:
    lwz r6, 0xac(r1)
    lwz r4, 0xa8(r1)
lbl_fn_80241CB8_000018D4:
    lbz r0, 0x88(r1)
    add r7, r6, r4
    stb r0, 0x84(r1)
    addi r3, r31, 0x24
    addi r8, r1, 0x84
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80241CB8_000018F0:
    lwz r0, 0xa4(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80241CB8_00001904
    lwz r3, 0xac(r1)
    bl dtor_80084684
lbl_fn_80241CB8_00001904:
    lwz r5, lbl_8087F3C8
    cmpwi r5, 0x0
    bne lbl_fn_80241CB8_00001920
    lwz r3, lbl_80880390
    addi r5, r3, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_8087F3C8
lbl_fn_80241CB8_00001920:
    mr r3, r30
    mr r4, r31
    bl fn_806920C0
    lwz r3, 0x90(r1)
    slwi r0, r29, 2
    lwz r3, 0x0(r3)
    lwzx r27, r3, r0
lbl_fn_80241CB8_0000193C:
    lwz r12, 0x0(r28)
    mr r3, r28
    li r4, 0x30
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r29, r3
    mr r3, r28
    li r4, 0x31
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r27)
    mr r30, r3
    mr r3, r27
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r4, lbl_80743070@ha
    lwz r26, 0x28(r24)
    lfd f0, lbl_80743070@l(r4)
    mr r31, r3
    fcmpu cr0, f0, f31
    bne lbl_fn_80241CB8_00001A7C
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    beq lbl_fn_80241CB8_000019BC
    li r0, 0x1
    stw r0, 0x4(r25)
    lwz r4, 0x8(r25)
    b lbl_fn_80241CB8_000019D0
lbl_fn_80241CB8_000019BC:
    lbz r0, 0x0(r25)
    li r4, 0x1
    rlwimi r0, r4, 0, 25, 31
    stb r0, 0x0(r25)
    addi r4, r25, 0x1
lbl_fn_80241CB8_000019D0:
    stb r29, 0x0(r4)
    li r0, 0x0
    stb r0, 0x1(r4)
    lhz r0, 0x30(r24)
    rlwinm. r0, r0, 0, 21, 21
    bne lbl_fn_80241CB8_000019F0
    cmpwi r26, 0x0
    ble lbl_fn_80241CB8_00001A30
lbl_fn_80241CB8_000019F0:
    stb r3, 0x70(r1)
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    bne lbl_fn_80241CB8_00001A0C
    lbz r0, 0x0(r25)
    clrlwi r4, r0, 25
    b lbl_fn_80241CB8_00001A10
lbl_fn_80241CB8_00001A0C:
    lwz r4, 0x4(r25)
lbl_fn_80241CB8_00001A10:
    lbz r0, 0x78(r1)
    mr r3, r25
    stb r0, 0x74(r1)
    addi r6, r1, 0x70
    addi r7, r1, 0x71
    addi r8, r1, 0x74
    li r5, 0x0
    bl fn_80013F78
lbl_fn_80241CB8_00001A30:
    lwz r0, 0x0(r25)
    mr r3, r25
    srwi. r0, r0, 31
    bne lbl_fn_80241CB8_00001A4C
    lbz r0, 0x0(r25)
    clrlwi r4, r0, 25
    b lbl_fn_80241CB8_00001A50
lbl_fn_80241CB8_00001A4C:
    lwz r4, 0x4(r25)
lbl_fn_80241CB8_00001A50:
    mr r6, r26
    extsb r7, r29
    li r5, 0x0
    bl fn_800E2778
    addic. r0, r1, 0x90
    beq lbl_fn_80241CB8_00002244
    lwz r3, 0x94(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80241CB8_00002244
    bl fn_806952C4
    b lbl_fn_80241CB8_00002244
lbl_fn_80241CB8_00001A7C:
    fmr f1, f31
    addi r3, r1, 0xe0
    bl fn_80693884
    lha r0, 0xec(r1)
    stw r0, 0x8c(r1)
    add r5, r26, r0
    addic. r5, r5, 0x1
    bge lbl_fn_80241CB8_00001B98
    lwz r0, 0x0(r25)
    lwz r27, 0x28(r24)
    srwi. r0, r0, 31
    beq lbl_fn_80241CB8_00001ABC
    li r0, 0x1
    stw r0, 0x4(r25)
    lwz r3, 0x8(r25)
    b lbl_fn_80241CB8_00001AD0
lbl_fn_80241CB8_00001ABC:
    lbz r0, 0x0(r25)
    li r3, 0x1
    rlwimi r0, r3, 0, 25, 31
    stb r0, 0x0(r25)
    addi r3, r25, 0x1
lbl_fn_80241CB8_00001AD0:
    stb r29, 0x0(r3)
    li r0, 0x0
    stb r0, 0x1(r3)
    lhz r0, 0x30(r24)
    rlwinm. r0, r0, 0, 21, 21
    bne lbl_fn_80241CB8_00001AF0
    cmpwi r27, 0x0
    ble lbl_fn_80241CB8_00001B30
lbl_fn_80241CB8_00001AF0:
    stb r31, 0x65(r1)
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    bne lbl_fn_80241CB8_00001B0C
    lbz r0, 0x0(r25)
    clrlwi r4, r0, 25
    b lbl_fn_80241CB8_00001B10
lbl_fn_80241CB8_00001B0C:
    lwz r4, 0x4(r25)
lbl_fn_80241CB8_00001B10:
    lbz r0, 0x6c(r1)
    mr r3, r25
    stb r0, 0x68(r1)
    addi r6, r1, 0x65
    addi r7, r1, 0x66
    addi r8, r1, 0x68
    li r5, 0x0
    bl fn_80013F78
lbl_fn_80241CB8_00001B30:
    lwz r0, 0x0(r25)
    mr r3, r25
    srwi. r0, r0, 31
    bne lbl_fn_80241CB8_00001B4C
    lbz r0, 0x0(r25)
    clrlwi r4, r0, 25
    b lbl_fn_80241CB8_00001B50
lbl_fn_80241CB8_00001B4C:
    lwz r4, 0x4(r25)
lbl_fn_80241CB8_00001B50:
    mr r6, r27
    extsb r7, r29
    li r5, 0x0
    bl fn_800E2778
    addic. r0, r1, 0xe0
    beq lbl_fn_80241CB8_00001B7C
    lwz r0, 0xe0(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80241CB8_00001B7C
    lwz r3, 0xe8(r1)
    bl dtor_80084684
lbl_fn_80241CB8_00001B7C:
    addic. r0, r1, 0x90
    beq lbl_fn_80241CB8_00002244
    lwz r3, 0x94(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80241CB8_00002244
    bl fn_806952C4
    b lbl_fn_80241CB8_00002244
lbl_fn_80241CB8_00001B98:
    bne lbl_fn_80241CB8_00001E0C
    cmpwi r0, -0x1
    bne lbl_fn_80241CB8_00001C84
    addi r3, r1, 0xe0
    li r4, 0x0
    bl fn_806939C8
    cmpwi r3, 0x1
    bne lbl_fn_80241CB8_00001BF8
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    beq lbl_fn_80241CB8_00001BD4
    li r0, 0x1
    stw r0, 0x4(r25)
    lwz r3, 0x8(r25)
    b lbl_fn_80241CB8_00001BE8
lbl_fn_80241CB8_00001BD4:
    lbz r0, 0x0(r25)
    li r3, 0x1
    rlwimi r0, r3, 0, 25, 31
    stb r0, 0x0(r25)
    addi r3, r25, 0x1
lbl_fn_80241CB8_00001BE8:
    stb r30, 0x0(r3)
    li r0, 0x0
    stb r0, 0x1(r3)
    b lbl_fn_80241CB8_00001C34
lbl_fn_80241CB8_00001BF8:
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    beq lbl_fn_80241CB8_00001C14
    li r0, 0x1
    stw r0, 0x4(r25)
    lwz r3, 0x8(r25)
    b lbl_fn_80241CB8_00001C28
lbl_fn_80241CB8_00001C14:
    lbz r0, 0x0(r25)
    li r3, 0x1
    rlwimi r0, r3, 0, 25, 31
    stb r0, 0x0(r25)
    addi r3, r25, 0x1
lbl_fn_80241CB8_00001C28:
    stb r29, 0x0(r3)
    li r0, 0x0
    stb r0, 0x1(r3)
lbl_fn_80241CB8_00001C34:
    lhz r0, 0x30(r24)
    rlwinm. r0, r0, 0, 21, 21
    beq lbl_fn_80241CB8_00001DD4
    stb r31, 0x64(r1)
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    bne lbl_fn_80241CB8_00001C5C
    lbz r0, 0x0(r25)
    clrlwi r4, r0, 25
    b lbl_fn_80241CB8_00001C60
lbl_fn_80241CB8_00001C5C:
    lwz r4, 0x4(r25)
lbl_fn_80241CB8_00001C60:
    lbz r0, 0x5c(r1)
    mr r3, r25
    stb r0, 0x60(r1)
    addi r6, r1, 0x64
    addi r7, r1, 0x65
    addi r8, r1, 0x60
    li r5, 0x0
    bl fn_80013F78
    b lbl_fn_80241CB8_00001DD4
lbl_fn_80241CB8_00001C84:
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    beq lbl_fn_80241CB8_00001CA0
    li r0, 0x1
    stw r0, 0x4(r25)
    lwz r3, 0x8(r25)
    b lbl_fn_80241CB8_00001CB4
lbl_fn_80241CB8_00001CA0:
    lbz r0, 0x0(r25)
    li r3, 0x1
    rlwimi r0, r3, 0, 25, 31
    stb r0, 0x0(r25)
    addi r3, r25, 0x1
lbl_fn_80241CB8_00001CB4:
    stb r29, 0x0(r3)
    li r0, 0x0
    stb r0, 0x1(r3)
    stb r31, 0x58(r1)
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    bne lbl_fn_80241CB8_00001CDC
    lbz r0, 0x0(r25)
    clrlwi r4, r0, 25
    b lbl_fn_80241CB8_00001CE0
lbl_fn_80241CB8_00001CDC:
    lwz r4, 0x4(r25)
lbl_fn_80241CB8_00001CE0:
    lbz r0, 0x50(r1)
    mr r3, r25
    stb r0, 0x54(r1)
    addi r6, r1, 0x58
    addi r7, r1, 0x59
    addi r8, r1, 0x54
    li r5, 0x0
    bl fn_80013F78
    lwz r4, 0x8c(r1)
    cmpwi r4, -0x2
    bge lbl_fn_80241CB8_00001D3C
    lwz r0, 0x0(r25)
    mr r3, r25
    subfic r6, r4, -0x2
    srwi. r0, r0, 31
    bne lbl_fn_80241CB8_00001D2C
    lbz r0, 0x0(r25)
    clrlwi r4, r0, 25
    b lbl_fn_80241CB8_00001D30
lbl_fn_80241CB8_00001D2C:
    lwz r4, 0x4(r25)
lbl_fn_80241CB8_00001D30:
    extsb r7, r29
    li r5, 0x0
    bl fn_800E2778
lbl_fn_80241CB8_00001D3C:
    addi r3, r1, 0xe0
    li r4, 0x0
    bl fn_806939C8
    cmpwi r3, 0x1
    bne lbl_fn_80241CB8_00001D94
    stb r30, 0x4c(r1)
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    bne lbl_fn_80241CB8_00001D6C
    lbz r0, 0x0(r25)
    clrlwi r4, r0, 25
    b lbl_fn_80241CB8_00001D70
lbl_fn_80241CB8_00001D6C:
    lwz r4, 0x4(r25)
lbl_fn_80241CB8_00001D70:
    lbz r0, 0x44(r1)
    mr r3, r25
    stb r0, 0x48(r1)
    addi r6, r1, 0x4c
    addi r7, r1, 0x4d
    addi r8, r1, 0x48
    li r5, 0x0
    bl fn_80013F78
    b lbl_fn_80241CB8_00001DD4
lbl_fn_80241CB8_00001D94:
    stb r29, 0x40(r1)
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    bne lbl_fn_80241CB8_00001DB0
    lbz r0, 0x0(r25)
    clrlwi r4, r0, 25
    b lbl_fn_80241CB8_00001DB4
lbl_fn_80241CB8_00001DB0:
    lwz r4, 0x4(r25)
lbl_fn_80241CB8_00001DB4:
    lbz r0, 0x38(r1)
    mr r3, r25
    stb r0, 0x3c(r1)
    addi r6, r1, 0x40
    addi r7, r1, 0x41
    addi r8, r1, 0x3c
    li r5, 0x0
    bl fn_80013F78
lbl_fn_80241CB8_00001DD4:
    addic. r0, r1, 0xe0
    beq lbl_fn_80241CB8_00001DF0
    lwz r0, 0xe0(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80241CB8_00001DF0
    lwz r3, 0xe8(r1)
    bl dtor_80084684
lbl_fn_80241CB8_00001DF0:
    addic. r0, r1, 0x90
    beq lbl_fn_80241CB8_00002244
    lwz r3, 0x94(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80241CB8_00002244
    bl fn_806952C4
    b lbl_fn_80241CB8_00002244
lbl_fn_80241CB8_00001E0C:
    addi r3, r1, 0xc8
    addi r4, r1, 0xe0
    addi r6, r1, 0x8c
    bl fn_80693AB8
    mr r4, r28
    addi r3, r1, 0xbc
    addi r5, r1, 0xc8
    bl fn_80241C20
    lwz r0, 0x0(r25)
    srwi. r4, r0, 31
    bne lbl_fn_80241CB8_00001E5C
    lwz r3, 0xbc(r1)
    srwi. r0, r3, 31
    bne lbl_fn_80241CB8_00001E5C
    lwz r0, 0xc0(r1)
    stw r0, 0x4(r25)
    stw r3, 0x0(r25)
    lwz r0, 0xc4(r1)
    stw r0, 0x8(r25)
    b lbl_fn_80241CB8_00001EB4
lbl_fn_80241CB8_00001E5C:
    cmpwi r4, 0x0
    beq lbl_fn_80241CB8_00001E6C
    lwz r5, 0x4(r25)
    b lbl_fn_80241CB8_00001E74
lbl_fn_80241CB8_00001E6C:
    lbz r0, 0x0(r25)
    clrlwi r5, r0, 25
lbl_fn_80241CB8_00001E74:
    lwz r0, 0xbc(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80241CB8_00001E90
    lbz r0, 0xbc(r1)
    addi r6, r1, 0xbd
    clrlwi r4, r0, 25
    b lbl_fn_80241CB8_00001E98
lbl_fn_80241CB8_00001E90:
    lwz r6, 0xc4(r1)
    lwz r4, 0xc0(r1)
lbl_fn_80241CB8_00001E98:
    lbz r0, 0x34(r1)
    add r7, r6, r4
    stb r0, 0x30(r1)
    mr r3, r25
    addi r8, r1, 0x30
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80241CB8_00001EB4:
    lwz r0, 0xbc(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80241CB8_00001EC8
    lwz r3, 0xc4(r1)
    bl dtor_80084684
lbl_fn_80241CB8_00001EC8:
    lwz r0, 0xc8(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80241CB8_00001EDC
    lwz r3, 0xd0(r1)
    bl dtor_80084684
lbl_fn_80241CB8_00001EDC:
    lwz r0, 0x8c(r1)
    cmpwi r0, 0x0
    add r4, r26, r0
    addi r4, r4, 0x1
    bge lbl_fn_80241CB8_00002144
    li r0, 0x0
    stw r0, 0xd4(r1)
    stw r0, 0xd8(r1)
    stw r0, 0xdc(r1)
    b lbl_fn_80241CB8_00001F0C
    stw r0, 0xd8(r1)
    b lbl_fn_80241CB8_00001F20
lbl_fn_80241CB8_00001F0C:
    lbz r0, 0xd4(r1)
    li r3, 0x1
    rlwimi r0, r3, 0, 25, 31
    stb r0, 0xd4(r1)
    addi r3, r1, 0xd5
lbl_fn_80241CB8_00001F20:
    stb r29, 0x0(r3)
    li r0, 0x0
    stb r0, 0x1(r3)
    lwz r0, 0xd4(r1)
    stb r31, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80241CB8_00001F48
    lbz r0, 0xd4(r1)
    clrlwi r4, r0, 25
    b lbl_fn_80241CB8_00001F4C
lbl_fn_80241CB8_00001F48:
    lwz r4, 0xd8(r1)
lbl_fn_80241CB8_00001F4C:
    lbz r0, 0x24(r1)
    addi r3, r1, 0xd4
    stb r0, 0x28(r1)
    addi r6, r1, 0x2c
    addi r7, r1, 0x2d
    addi r8, r1, 0x28
    li r5, 0x0
    bl fn_80013F78
    lwz r3, 0x8c(r1)
    cmpwi r3, -0x1
    bge lbl_fn_80241CB8_00001FA8
    lwz r0, 0xd4(r1)
    subfic r6, r3, -0x1
    addi r3, r1, 0xd4
    srwi. r0, r0, 31
    bne lbl_fn_80241CB8_00001F98
    lbz r0, 0xd4(r1)
    clrlwi r4, r0, 25
    b lbl_fn_80241CB8_00001F9C
lbl_fn_80241CB8_00001F98:
    lwz r4, 0xd8(r1)
lbl_fn_80241CB8_00001F9C:
    extsb r7, r29
    li r5, 0x0
    bl fn_800E2778
lbl_fn_80241CB8_00001FA8:
    lwz r0, 0xd4(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80241CB8_00001FC0
    lbz r0, 0xd4(r1)
    clrlwi r4, r0, 25
    b lbl_fn_80241CB8_00001FC4
lbl_fn_80241CB8_00001FC0:
    lwz r4, 0xd8(r1)
lbl_fn_80241CB8_00001FC4:
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    bne lbl_fn_80241CB8_00001FE0
    lbz r0, 0x0(r25)
    addi r6, r25, 0x1
    clrlwi r5, r0, 25
    b lbl_fn_80241CB8_00001FE8
lbl_fn_80241CB8_00001FE0:
    lwz r6, 0x8(r25)
    lwz r5, 0x4(r25)
lbl_fn_80241CB8_00001FE8:
    lbz r0, 0x20(r1)
    add r7, r6, r5
    stb r0, 0x1c(r1)
    addi r3, r1, 0xd4
    addi r8, r1, 0x1c
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x0(r25)
    srwi. r4, r0, 31
    bne lbl_fn_80241CB8_00002034
    lwz r3, 0xd4(r1)
    srwi. r0, r3, 31
    bne lbl_fn_80241CB8_00002034
    lwz r0, 0xd8(r1)
    stw r0, 0x4(r25)
    stw r3, 0x0(r25)
    lwz r0, 0xdc(r1)
    stw r0, 0x8(r25)
    b lbl_fn_80241CB8_0000208C
lbl_fn_80241CB8_00002034:
    cmpwi r4, 0x0
    beq lbl_fn_80241CB8_00002044
    lwz r5, 0x4(r25)
    b lbl_fn_80241CB8_0000204C
lbl_fn_80241CB8_00002044:
    lbz r0, 0x0(r25)
    clrlwi r5, r0, 25
lbl_fn_80241CB8_0000204C:
    lwz r0, 0xd4(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80241CB8_00002068
    lbz r0, 0xd4(r1)
    addi r6, r1, 0xd5
    clrlwi r4, r0, 25
    b lbl_fn_80241CB8_00002070
lbl_fn_80241CB8_00002068:
    lwz r6, 0xdc(r1)
    lwz r4, 0xd8(r1)
lbl_fn_80241CB8_00002070:
    lbz r0, 0x18(r1)
    add r7, r6, r4
    stb r0, 0x14(r1)
    mr r3, r25
    addi r8, r1, 0x14
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80241CB8_0000208C:
    lwz r0, 0xd4(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80241CB8_000020A4
    lbz r0, 0xd4(r1)
    clrlwi r3, r0, 25
    b lbl_fn_80241CB8_000020A8
lbl_fn_80241CB8_000020A4:
    lwz r3, 0xd8(r1)
lbl_fn_80241CB8_000020A8:
    addi r0, r26, 0x2
    subf r0, r3, r0
    cmplwi r0, 0x1
    bne lbl_fn_80241CB8_000020F8
    stb r29, 0x10(r1)
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    bne lbl_fn_80241CB8_000020D4
    lbz r0, 0x0(r25)
    clrlwi r4, r0, 25
    b lbl_fn_80241CB8_000020D8
lbl_fn_80241CB8_000020D4:
    lwz r4, 0x4(r25)
lbl_fn_80241CB8_000020D8:
    lbz r0, 0x8(r1)
    mr r3, r25
    stb r0, 0xc(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x11
    addi r8, r1, 0xc
    li r5, 0x0
    bl fn_80013F78
lbl_fn_80241CB8_000020F8:
    lwz r0, 0xd4(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80241CB8_0000210C
    lwz r3, 0xdc(r1)
    bl dtor_80084684
lbl_fn_80241CB8_0000210C:
    addic. r0, r1, 0xe0
    beq lbl_fn_80241CB8_00002128
    lwz r0, 0xe0(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80241CB8_00002128
    lwz r3, 0xe8(r1)
    bl dtor_80084684
lbl_fn_80241CB8_00002128:
    addic. r0, r1, 0x90
    beq lbl_fn_80241CB8_00002244
    lwz r3, 0x94(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80241CB8_00002244
    bl fn_806952C4
    b lbl_fn_80241CB8_00002244
lbl_fn_80241CB8_00002144:
    lwz r0, 0x0(r25)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi. r3, r0, 5
    beq lbl_fn_80241CB8_00002164
    lbz r0, 0x0(r25)
    clrlwi r0, r0, 25
    b lbl_fn_80241CB8_00002168
lbl_fn_80241CB8_00002164:
    lwz r0, 0x4(r25)
lbl_fn_80241CB8_00002168:
    cmpwi r3, 0x0
    mr r3, r25
    subf r6, r0, r4
    beq lbl_fn_80241CB8_00002184
    lbz r0, 0x0(r25)
    clrlwi r4, r0, 25
    b lbl_fn_80241CB8_00002188
lbl_fn_80241CB8_00002184:
    lwz r4, 0x4(r25)
lbl_fn_80241CB8_00002188:
    extsb r7, r29
    li r5, 0x0
    bl fn_800E2778
    lhz r0, 0x30(r24)
    rlwinm. r0, r0, 0, 21, 21
    bne lbl_fn_80241CB8_000021A8
    cmpwi r26, 0x0
    ble lbl_fn_80241CB8_000021C4
lbl_fn_80241CB8_000021A8:
    lwz r4, 0x8c(r1)
    mr r3, r25
    extsb r7, r31
    li r5, 0x0
    addi r4, r4, 0x1
    li r6, 0x1
    bl fn_800E2778
lbl_fn_80241CB8_000021C4:
    mr r4, r27
    addi r3, r1, 0xb0
    bl fn_802435A8
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    mr r0, r3
    mr r6, r25
    extsb r3, r31
    addi r5, r1, 0xb0
    extsb r4, r0
    bl fn_802428D8
    lwz r0, 0xb0(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80241CB8_00002210
    lwz r3, 0xb8(r1)
    bl dtor_80084684
lbl_fn_80241CB8_00002210:
    addic. r0, r1, 0xe0
    beq lbl_fn_80241CB8_0000222C
    lwz r0, 0xe0(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80241CB8_0000222C
    lwz r3, 0xe8(r1)
    bl dtor_80084684
lbl_fn_80241CB8_0000222C:
    addic. r0, r1, 0x90
    beq lbl_fn_80241CB8_00002244
    lwz r3, 0x94(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80241CB8_00002244
    bl fn_806952C4
lbl_fn_80241CB8_00002244:
    lfd f31, 0x118(r1)
    lmw r24, 0xf8(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}
