#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80013D60(void);
extern void dtor_80084684(void);
extern void fn_8004212C(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8005B710(void);
extern void fn_8005B8F8(void);
extern void fn_8005B9AC(void);
extern void fn_8006BA8C(void);
extern void fn_8006BB6C(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800DC288(void);
extern void fn_800DD3FC(void);
extern void fn_800EC254(void);
extern void fn_800EC2C4(void);
extern void fn_800EC440(void);
extern void fn_800EC534(void);
extern void fn_800EC5BC(void);
extern void fn_800EC654(void);
extern void fn_800ED42C(void);
extern void fn_800ED4D8(void);
extern void fn_800EDFE8(void);
extern void fn_801125F8(void);
extern void fn_80205BE8(void);
extern void fn_802089C4(void);
extern void fn_8020A5D4(void);
extern void fn_8020A780(void);
extern void fn_8020C07C(void);
extern void fn_8020C4B0(void);
extern void fn_8046DC5C(void);
extern void fn_8046DD20(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_80686A48(void);
extern void fn_80686AF0(void);
extern void fn_80695720(void);
extern void strchr(void);

/* External data declarations */
extern u8 lbl_80742540[];
extern u8 lbl_80742560[];
extern u8 lbl_807425F8[];
extern u8 lbl_80742658[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_8077A070[];
extern u8 lbl_8077A090[];
extern u8 lbl_8077A0A8[];
extern u8 lbl_80782FF0[];
extern u8 lbl_807830B8[];
extern u8 lbl_807830F8[];
extern u8 lbl_807834D4[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087D720;
extern u32 lbl_8087DB98;
extern u32 lbl_8087F2C8;
extern u32 lbl_8087F2CC;
extern u32 lbl_8087F2D0;
extern u32 lbl_8087F2D4;
extern u32 lbl_8087F2D8;
extern u32 lbl_8087F2DC;
extern u32 lbl_8087F2E0;
extern u32 lbl_8087F2E8;
extern u32 lbl_8087F2EC;
extern u32 lbl_8087F2F0;
extern u32 lbl_8087F518;
extern u32 lbl_80882F60;
extern u32 lbl_80882F68;
extern u32 lbl_80882F6C;
extern u32 lbl_80882F70;
extern u32 lbl_80882F74;
extern u32 lbl_80882F78;
extern u32 lbl_80882F7C;
extern u32 lbl_80882F80;

/* Function declarations */
void fn_8021996C(void);
void fn_80219C30(void);
void fn_80219E6C(void);
void fn_80219EB4(void);
void fn_80219EBC(void);
void fn_80219EC4(void);
void fn_80219F1C(void);
void fn_80219F84(void);
void fn_8021A4CC(void);
void fn_8021A4E0(void);
void fn_8021A5F8(void);
void fn_8021A684(void);
void fn_8021A77C(void);
void fn_8021A7A0(void);
void fn_8021A888(void);
void fn_8021A8D0(void);
void fn_8021A918(void);
void fn_8021A960(void);
void fn_8021A984(void);
void fn_8021A9A8(void);
void fn_8021A9CC(void);
void fn_8021AA48(void);
void fn_8021AAB8(void);
void fn_8021AEF0(void);
void fn_8021AF10(void);
void fn_8021AF50(void);
void fn_8021AF98(void);
void fn_8021AFF4(void);
void fn_8021B060(void);

asm void fn_8021996C(void)
{
    nofralloc
    stwu r1, -0x670(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x674(r1)
    addi r4, r1, 0x10
    stmw r24, 0x650(r1)
    li r29, 0x0
    lis r28, lbl_80742540@ha
    addi r3, r28, lbl_80742540@l
    stw r29, 0x10(r1)
    bl fn_8006BA8C
    lis r4, lbl_807772D0@ha
    mr r31, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x14(r1)
    lwz r30, 0x10(r1)
    addi r3, r1, 0x24
    stw r29, 0x18(r1)
    li r4, 0x0
    li r5, 0x400
    stw r29, 0x1c(r1)
    stw r29, 0x20(r1)
    stw r29, 0x644(r1)
    bl memset
    addi r3, r1, 0x624
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x14(r1)
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0x14
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x14
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x14(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    addi r3, r1, 0x14
    li r25, 0x0
    bl fn_8005B3CC
    addi r4, r28, lbl_80742540@l
    addi r4, r4, 0x16
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8021996C_000000D4
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    mr r25, r3
lbl_fn_8021996C_000000D4:
    addi r3, r1, 0x14
    bl fn_8005B5F8
    li r0, 0x0
    lis r28, lbl_80742540@ha
    stw r0, lbl_8087F2CC
    addi r28, r28, lbl_80742540@l
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    b lbl_fn_8021996C_0000011C
lbl_fn_8021996C_000000F8:
    addi r3, r1, 0x14
    bl fn_8005B3CC
    addi r4, r28, 0x1e
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8021996C_0000011C
    lwz r3, lbl_8087F2CC
    addi r0, r3, 0x1
    stw r0, lbl_8087F2CC
lbl_fn_8021996C_0000011C:
    addi r3, r1, 0x14
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8021996C_000000F8
    lwz r29, lbl_8087F2CC
    lis r3, lbl_80742540@ha
    addi r28, r3, lbl_80742540@l
    li r4, 0x1
    mulli r3, r29, 0xd0
    li r7, 0x0
    addi r5, r28, 0x1e
    mr r6, r5
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_80219EC4@ha
    mr r7, r29
    addi r4, r4, fn_80219EC4@l
    li r5, 0x0
    li r6, 0xd0
    bl fn_80695720
    stw r3, lbl_8087F2C8
    addi r5, r28, 0x1e
    lwz r3, 0xc(r1)
    mr r6, r5
    li r4, 0x1
    li r7, 0x0
    bl fn_800846FC
    stw r3, lbl_8087F2D0
    mr r4, r31
    lwz r12, 0x14(r1)
    addi r3, r1, 0x14
    lwz r5, 0x10(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0x14
    bl fn_8005B5F8
    li r29, 0x0
    stw r29, 0xc(r1)
    addi r26, r1, 0x26
    li r27, 0x0
    stw r29, 0x8(r1)
    li r30, -0x1
    b lbl_fn_8021996C_00000290
lbl_fn_8021996C_000001CC:
    lwz r0, lbl_8087F2C8
    mr r5, r25
    addi r4, r1, 0x14
    addi r8, r1, 0xc
    stbx r29, r27, r0
    add r24, r0, r27
    addi r9, r1, 0x8
    lwz r6, lbl_8087F2D0
    mr r3, r24
    lwz r7, lbl_8087F2D4
    bl fn_80219F84
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xbc(r24)
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xc0(r24)
    addi r3, r1, 0x14
    bl fn_8005B3CC
    addi r4, r28, 0x1e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8021996C_00000238
    stw r30, 0xc4(r24)
    b lbl_fn_8021996C_00000244
lbl_fn_8021996C_00000238:
    mr r3, r26
    bl fn_80684600
    stw r3, 0xc4(r24)
lbl_fn_8021996C_00000244:
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xc8(r24)
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xcc(r24)
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x70(r24)
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x60(r24)
    addi r3, r1, 0x14
    bl fn_8005B3CC
    addi r27, r27, 0xd0
lbl_fn_8021996C_00000290:
    addi r3, r1, 0x14
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8021996C_000001CC
    mr r3, r31
    li r4, 0x0
    bl fn_8006BB6C
    bl fn_80219C30
    lmw r24, 0x650(r1)
    lwz r0, 0x674(r1)
    mtlr r0
    addi r1, r1, 0x670
    blr
}

asm void fn_80219C30(void)
{
    nofralloc
    stwu r1, -0xc80(r1)
    mflr r0
    stw r0, 0xc84(r1)
    stw r31, 0xc7c(r1)
    stw r30, 0xc78(r1)
    stw r29, 0xc74(r1)
    stw r28, 0xc70(r1)
    lwz r0, lbl_8087F2C8
    cmpwi r0, 0x0
    beq lbl_fn_80219C30_000004E0
    lwz r3, lbl_8087F2D4
    cmpwi r3, 0x0
    beq lbl_fn_80219C30_00000304
    bl fn_80084C24
    li r0, 0x0
    stw r0, lbl_8087F2D4
lbl_fn_80219C30_00000304:
    li r31, 0x0
    stw r31, 0x10(r1)
    lwz r3, lbl_80882F60
    addi r4, r1, 0x10
    li r5, 0x0
    bl fn_8006BA8C
    lwz r0, 0x10(r1)
    lis r4, lbl_8077A090@ha
    addi r4, r4, lbl_8077A090@l
    stw r4, 0x14(r1)
    mr r28, r3
    srwi r29, r0, 1
    stw r31, 0x18(r1)
    addi r30, r1, 0x14
    addi r3, r1, 0x24
    li r4, 0x0
    stw r31, 0x1c(r1)
    li r5, 0x800
    stw r31, 0x20(r1)
    stw r31, 0xc64(r1)
    bl memset
    addi r3, r1, 0xc24
    li r4, 0x0
    li r5, 0x40
    bl memset
    cmpwi r29, 0x0
    mr r5, r29
    beq lbl_fn_80219C30_00000378
    subi r5, r29, 0x1
lbl_fn_80219C30_00000378:
    cmpwi r29, 0x0
    mr r3, r30
    beq lbl_fn_80219C30_0000038C
    addi r4, r28, 0x2
    b lbl_fn_80219C30_00000390
lbl_fn_80219C30_0000038C:
    mr r4, r28
lbl_fn_80219C30_00000390:
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_8077A070@ha
    lis r4, lbl_8077A0A8@ha
    addi r3, r3, lbl_8077A070@l
    stw r3, 0x14(r1)
    mr r3, r30
    addi r4, r4, lbl_8077A0A8@l
    bl fn_8005B9AC
    addi r3, r1, 0x14
    bl fn_8005B8F8
    li r0, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    b lbl_fn_80219C30_000003FC
lbl_fn_80219C30_000003D4:
    addi r3, r1, 0x14
    bl fn_8005B710
    la r4, lbl_8087DB98
    bl fn_80686AF0
    cmpwi r3, 0x0
    beq lbl_fn_80219C30_000003FC
    addi r3, r1, 0x14
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80219F1C
lbl_fn_80219C30_000003FC:
    addi r3, r1, 0x14
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_80219C30_000003D4
    lis r3, lbl_80742540@ha
    lwz r0, 0x8(r1)
    addi r3, r3, lbl_80742540@l
    li r4, 0x1
    addi r5, r3, 0x1e
    li r7, 0x0
    slwi r3, r0, 1
    mr r6, r5
    bl fn_800846FC
    lwz r0, 0x10(r1)
    stw r3, lbl_8087F2D4
    srwi. r3, r0, 1
    beq lbl_fn_80219C30_00000448
    addi r0, r28, 0x2
    b lbl_fn_80219C30_0000044C
lbl_fn_80219C30_00000448:
    mr r0, r28
lbl_fn_80219C30_0000044C:
    cmpwi r3, 0x0
    stw r0, 0x18(r1)
    beq lbl_fn_80219C30_0000045C
    subi r3, r3, 0x1
lbl_fn_80219C30_0000045C:
    li r31, 0x0
    stw r3, 0x1c(r1)
    addi r3, r1, 0x14
    stw r31, 0x20(r1)
    bl fn_8005B8F8
    stw r31, 0xc(r1)
    li r29, 0x0
    stw r31, 0x8(r1)
    b lbl_fn_80219C30_000004C4
lbl_fn_80219C30_00000480:
    addi r3, r1, 0x14
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80219C30_000004C4
    cmplwi r0, 0x23
    beq lbl_fn_80219C30_000004C4
    lwz r0, lbl_8087F2C8
    addi r4, r1, 0x14
    lwz r6, lbl_8087F2D0
    addi r8, r1, 0xc
    lwz r7, lbl_8087F2D4
    add r3, r0, r29
    addi r9, r1, 0x8
    li r5, 0x0
    bl fn_8021A5F8
    addi r29, r29, 0xd0
lbl_fn_80219C30_000004C4:
    addi r3, r1, 0x14
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_80219C30_00000480
    mr r3, r28
    li r4, 0x0
    bl fn_8006BB6C
lbl_fn_80219C30_000004E0:
    lwz r0, 0xc84(r1)
    lwz r31, 0xc7c(r1)
    lwz r30, 0xc78(r1)
    lwz r29, 0xc74(r1)
    lwz r28, 0xc70(r1)
    mtlr r0
    addi r1, r1, 0xc80
    blr
}

asm void fn_80219E6C(void)
{
    nofralloc
    lwz r5, lbl_8087F2C8
    li r6, 0x0
    lwz r0, lbl_8087F2CC
    mr r4, r5
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80219E6C_00000540
lbl_fn_80219E6C_0000051C:
    lwz r0, 0x4(r4)
    cmpw r3, r0
    bne lbl_fn_80219E6C_00000534
    mulli r0, r6, 0xd0
    add r3, r5, r0
    blr
lbl_fn_80219E6C_00000534:
    addi r4, r4, 0xd0
    addi r6, r6, 0x1
    bdnz lbl_fn_80219E6C_0000051C
lbl_fn_80219E6C_00000540:
    li r3, 0x0
    blr
}

asm void fn_80219EB4(void)
{
    nofralloc
    lwz r3, lbl_8087F2C8
    blr
}

asm void fn_80219EBC(void)
{
    nofralloc
    lwz r3, lbl_8087F2CC
    blr
}

asm void fn_80219EC4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8021A4E0
    li r5, 0x0
    li r4, 0x1
    li r0, 0x4
    stw r5, 0xbc(r31)
    mr r3, r31
    stw r5, 0xc0(r31)
    stw r4, 0xc4(r31)
    stw r5, 0xcc(r31)
    stb r5, 0x0(r31)
    stb r5, 0x1(r31)
    stw r0, 0x64(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80219F1C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8005B710
    bl fn_80686A48
    lwz r0, 0x0(r31)
    add r4, r3, r0
    mr r3, r30
    addi r0, r4, 0x2
    stw r0, 0x0(r31)
    bl fn_8005B710
    bl fn_80686A48
    lwz r0, 0x0(r31)
    add r3, r3, r0
    addi r0, r3, 0x2
    stw r0, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80219F84(void)
{
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    stmw r27, 0x2cc(r1)
    mr r28, r4
    mr r27, r3
    mr r3, r28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x4(r27)
    mr r3, r28
    bl fn_8005B3CC
    mr r3, r28
    bl fn_8005B3CC
    mr r3, r28
    bl fn_8005B3CC
    mr r3, r28
    bl fn_8005B3CC
    bl fn_80684600
    stb r3, 0x1(r27)
    mr r3, r28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x10(r27)
    mr r3, r28
    bl fn_8005B3CC
    bl fn_80684600
    stb r3, 0x3(r27)
    mr r3, r28
    bl fn_8005B3CC
    bl fn_80684600
    stb r3, 0x2(r27)
    mr r3, r28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14(r27)
    mr r3, r28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x18(r27)
    mr r3, r28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1c(r27)
    mr r3, r28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x20(r27)
    mr r3, r28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x28(r27)
    mr r3, r28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x2c(r27)
    mr r3, r28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x30(r27)
    mr r3, r28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x34(r27)
    mr r3, r28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x38(r27)
    mr r3, r28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x3c(r27)
    mr r3, r28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x40(r27)
    mr r3, r28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x44(r27)
    mr r3, r28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x48(r27)
    mr r3, r28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x4c(r27)
    mr r3, r28
    bl fn_8005B3CC
    bl fn_800DC288
    bl fn_801125F8
    stfs f1, 0x50(r27)
    mr r3, r28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x54(r27)
    mr r3, r28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x58(r27)
    mr r3, r28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x5c(r27)
    mr r3, r28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x64(r27)
    mr r3, r28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x68(r27)
    mr r3, r28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x6c(r27)
    addi r3, r1, 0x8
    bl fn_8021A4CC
    mr r3, r28
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8020A780
    lis r4, lbl_80742560@ha
    addi r3, r1, 0x1c4
    addi r4, r4, lbl_80742560@l
    li r5, 0x0
    li r6, 0x0
    bl fn_800EC440
    addi r3, r1, 0x29c
    addi r4, r1, 0x8
    addi r5, r1, 0x1c4
    bl fn_800EC2C4
    addi r3, r1, 0x1c4
    li r4, -0x1
    bl fn_800EC534
    addi r3, r27, 0x74
    li r29, 0x0
    li r4, 0x0
    li r5, 0x1c
    bl memset
    addi r3, r1, 0x260
    addi r4, r1, 0x29c
    bl fn_800EC654
    mr r30, r27
    b lbl_fn_80219F84_0000089C
lbl_fn_80219F84_00000864:
    addi r3, r1, 0x260
    bl fn_800ED4D8
    bl fn_8004212C
    bl fn_800DC288
    stfs f1, 0x74(r30)
    addi r3, r1, 0x188
    addi r4, r1, 0x260
    li r5, 0x0
    addi r30, r30, 0x4
    addi r29, r29, 0x1
    bl fn_80205BE8
    addi r3, r1, 0x188
    li r4, -0x1
    bl fn_800ED42C
lbl_fn_80219F84_0000089C:
    addi r3, r1, 0x14c
    addi r4, r1, 0x29c
    bl fn_800EDFE8
    addi r3, r1, 0x260
    addi r4, r1, 0x14c
    li r31, 0x0
    bl fn_800EC254
    cmpwi r3, 0x0
    beq lbl_fn_80219F84_000008CC
    cmpwi r29, 0x7
    bge lbl_fn_80219F84_000008CC
    li r31, 0x1
lbl_fn_80219F84_000008CC:
    addi r3, r1, 0x14c
    li r4, -0x1
    bl fn_800ED42C
    cmpwi r31, 0x0
    bne lbl_fn_80219F84_00000864
    addi r3, r1, 0x260
    li r4, -0x1
    bl fn_800ED42C
    mr r3, r28
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8020A780
    addi r3, r1, 0x8
    bl fn_8004212C
    bl fn_80684600
    stw r3, 0x90(r27)
    addi r3, r1, 0x8
    bl fn_8004212C
    li r4, 0x3a
    bl strchr
    cmpwi r3, 0x0
    beq lbl_fn_80219F84_00000934
    addi r3, r3, 0x1
    bl fn_80684600
    stw r3, 0x94(r27)
lbl_fn_80219F84_00000934:
    addi r3, r27, 0x98
    li r4, 0x0
    li r5, 0x10
    bl memset
    mr r3, r28
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8020A780
    lis r4, lbl_80742560@ha
    addi r3, r1, 0x128
    addi r4, r4, lbl_80742560@l
    li r5, 0x0
    li r6, 0x0
    bl fn_800EC440
    addi r3, r1, 0x29c
    addi r4, r1, 0x8
    addi r5, r1, 0x128
    bl fn_8020A5D4
    addi r3, r1, 0x128
    li r4, -0x1
    bl fn_800EC534
    addi r3, r1, 0x224
    addi r4, r1, 0x29c
    li r29, 0x0
    bl fn_800EC654
    mr r30, r27
    b lbl_fn_80219F84_000009DC
lbl_fn_80219F84_000009A4:
    addi r3, r1, 0x224
    bl fn_800ED4D8
    bl fn_8004212C
    bl fn_80684600
    stw r3, 0x98(r30)
    addi r3, r1, 0xec
    addi r4, r1, 0x224
    li r5, 0x0
    addi r30, r30, 0x4
    addi r29, r29, 0x1
    bl fn_80205BE8
    addi r3, r1, 0xec
    li r4, -0x1
    bl fn_800ED42C
lbl_fn_80219F84_000009DC:
    addi r3, r1, 0xb0
    addi r4, r1, 0x29c
    bl fn_800EDFE8
    addi r3, r1, 0x224
    addi r4, r1, 0xb0
    li r31, 0x0
    bl fn_800EC254
    cmpwi r3, 0x0
    beq lbl_fn_80219F84_00000A0C
    cmpwi r29, 0x4
    bge lbl_fn_80219F84_00000A0C
    li r31, 0x1
lbl_fn_80219F84_00000A0C:
    addi r3, r1, 0xb0
    li r4, -0x1
    bl fn_800ED42C
    cmpwi r31, 0x0
    bne lbl_fn_80219F84_000009A4
    addi r3, r1, 0x224
    li r4, -0x1
    bl fn_800ED42C
    mr r3, r28
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8020A780
    lis r4, lbl_80742560@ha
    addi r3, r1, 0x8c
    addi r4, r4, lbl_80742560@l
    li r5, 0x0
    li r6, 0x0
    bl fn_800EC440
    addi r3, r1, 0x29c
    addi r4, r1, 0x8
    addi r5, r1, 0x8c
    bl fn_8020A5D4
    addi r3, r1, 0x8c
    li r4, -0x1
    bl fn_800EC534
    addi r3, r1, 0x1e8
    addi r4, r1, 0x29c
    bl fn_800EC654
    b lbl_fn_80219F84_00000AA0
lbl_fn_80219F84_00000A84:
    addi r3, r1, 0x50
    addi r4, r1, 0x1e8
    li r5, 0x0
    bl fn_80205BE8
    addi r3, r1, 0x50
    li r4, -0x1
    bl fn_800ED42C
lbl_fn_80219F84_00000AA0:
    addi r3, r1, 0x14
    addi r4, r1, 0x29c
    bl fn_800EDFE8
    addi r3, r1, 0x1e8
    addi r4, r1, 0x14
    bl fn_800EC254
    mr r31, r3
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800ED42C
    cmpwi r31, 0x0
    bne lbl_fn_80219F84_00000A84
    addi r3, r1, 0x1e8
    li r4, -0x1
    bl fn_800ED42C
    mr r3, r28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xa8(r27)
    mr r3, r28
    bl fn_8005B3CC
    mr r3, r28
    bl fn_8005B3CC
    mr r3, r28
    bl fn_8005B3CC
    mr r3, r28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xac(r27)
    mr r3, r28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xb0(r27)
    mr r3, r28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x24(r27)
    addi r3, r1, 0x29c
    li r4, -0x1
    bl fn_800EC5BC
    addi r3, r1, 0x8
    li r4, -0x1
    bl dtor_80013D60
    lmw r27, 0x2cc(r1)
    lwz r0, 0x2e4(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

asm void fn_8021A4CC(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_8021A4E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f2, lbl_80882F6C
    li r6, 0x64
    stw r0, 0x14(r1)
    li r4, 0x2
    lfs f3, lbl_80882F68
    li r8, 0xc
    stw r31, 0xc(r1)
    li r31, 0x0
    lfs f1, lbl_80882F70
    li r7, 0xa
    stw r30, 0x8(r1)
    li r0, 0x6
    lfs f0, lbl_80882F74
    mr r30, r3
    stb r4, 0x0(r3)
    li r4, 0x0
    li r5, 0x1c
    stb r8, 0x1(r3)
    stb r7, 0x2(r3)
    stb r6, 0x3(r3)
    stw r31, 0x4(r3)
    stw r31, 0x10(r3)
    stw r31, 0xa8(r3)
    stw r31, 0xac(r3)
    stw r31, 0xb0(r3)
    stw r31, 0xb4(r3)
    stfs f3, 0xb8(r3)
    stw r31, 0x14(r3)
    stw r31, 0x18(r3)
    stw r31, 0x1c(r3)
    stw r31, 0x20(r3)
    stw r31, 0x24(r3)
    stfs f2, 0x28(r3)
    stfs f2, 0x2c(r3)
    stfs f2, 0x30(r3)
    stfs f2, 0x34(r3)
    stfs f2, 0x38(r3)
    stw r31, 0x3c(r3)
    stfs f2, 0x40(r3)
    stfs f3, 0x44(r3)
    stw r31, 0x48(r3)
    stfs f2, 0x4c(r3)
    stfs f1, 0x50(r3)
    stfs f3, 0x54(r3)
    stfs f0, 0x58(r3)
    stw r6, 0x5c(r3)
    stw r31, 0x60(r3)
    stw r0, 0x64(r3)
    stw r31, 0x68(r3)
    stw r31, 0x6c(r3)
    stw r31, 0x70(r3)
    addi r3, r3, 0x74
    bl memset
    stw r31, 0x90(r30)
    addi r3, r30, 0x98
    li r4, 0x0
    li r5, 0x10
    stw r31, 0x94(r30)
    bl memset
    stw r31, 0x8(r30)
    mr r3, r30
    stw r31, 0xc(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8021A5F8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r9
    stw r30, 0x18(r1)
    mr r30, r7
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    mr r3, r29
    bl fn_8005B710
    lwz r6, 0x0(r31)
    mr r4, r3
    mr r5, r30
    addi r3, r28, 0x8
    bl fn_802089C4
    stw r3, 0x0(r31)
    mr r3, r29
    bl fn_8005B710
    lwz r6, 0x0(r31)
    mr r4, r3
    mr r5, r30
    addi r3, r28, 0xc
    bl fn_802089C4
    stw r3, 0x0(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8021A684(void)
{
    nofralloc
    cmpwi r3, 0x0
    li r6, 0x0
    mr r4, r6
    beq lbl_fn_8021A684_00000D38
    lbz r0, 0x1(r3)
    extsb. r0, r0
    bne lbl_fn_8021A684_00000D38
    li r4, 0x1
lbl_fn_8021A684_00000D38:
    cmpwi r4, 0x0
    bne lbl_fn_8021A684_00000E04
    cmpwi r3, 0x0
    li r5, 0x0
    beq lbl_fn_8021A684_00000D58
    lbz r0, 0x1(r3)
    cmpwi r0, 0x1
    beq lbl_fn_8021A684_00000D7C
lbl_fn_8021A684_00000D58:
    cmpwi r3, 0x0
    li r4, 0x0
    beq lbl_fn_8021A684_00000D74
    lbz r0, 0x1(r3)
    cmpwi r0, 0x4
    bne lbl_fn_8021A684_00000D74
    li r4, 0x1
lbl_fn_8021A684_00000D74:
    cmpwi r4, 0x0
    beq lbl_fn_8021A684_00000D80
lbl_fn_8021A684_00000D7C:
    li r5, 0x1
lbl_fn_8021A684_00000D80:
    cmpwi r5, 0x0
    beq lbl_fn_8021A684_00000E08
    cmpwi r3, 0x0
    li r5, 0x0
    mr r4, r5
    beq lbl_fn_8021A684_00000DA8
    lbz r0, 0x1(r3)
    cmpwi r0, 0x4
    bne lbl_fn_8021A684_00000DA8
    li r4, 0x1
lbl_fn_8021A684_00000DA8:
    cmpwi r4, 0x0
    bne lbl_fn_8021A684_00000DF8
    cmpwi r3, 0x0
    li r4, 0x0
    beq lbl_fn_8021A684_00000DCC
    lbz r0, 0x1(r3)
    cmpwi r0, 0x5
    bne lbl_fn_8021A684_00000DCC
    li r4, 0x1
lbl_fn_8021A684_00000DCC:
    cmpwi r4, 0x0
    bne lbl_fn_8021A684_00000DF8
    cmpwi r3, 0x0
    li r4, 0x0
    beq lbl_fn_8021A684_00000DF0
    lbz r0, 0x1(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8021A684_00000DF0
    li r4, 0x1
lbl_fn_8021A684_00000DF0:
    cmpwi r4, 0x0
    beq lbl_fn_8021A684_00000DFC
lbl_fn_8021A684_00000DF8:
    li r5, 0x1
lbl_fn_8021A684_00000DFC:
    cmpwi r5, 0x0
    bne lbl_fn_8021A684_00000E08
lbl_fn_8021A684_00000E04:
    li r6, 0x1
lbl_fn_8021A684_00000E08:
    mr r3, r6
    blr
}

asm void fn_8021A77C(void)
{
    nofralloc
    cmpwi r3, 0x0
    li r4, 0x0
    beq lbl_fn_8021A77C_00000E2C
    lbz r0, 0x1(r3)
    extsb. r0, r0
    bne lbl_fn_8021A77C_00000E2C
    li r4, 0x1
lbl_fn_8021A77C_00000E2C:
    mr r3, r4
    blr
}

asm void fn_8021A7A0(void)
{
    nofralloc
    cmpwi r3, 0x0
    li r6, 0x0
    mr r5, r6
    beq lbl_fn_8021A7A0_00000E50
    lbz r0, 0x1(r3)
    cmpwi r0, 0x1
    beq lbl_fn_8021A7A0_00000E74
lbl_fn_8021A7A0_00000E50:
    cmpwi r3, 0x0
    li r4, 0x0
    beq lbl_fn_8021A7A0_00000E6C
    lbz r0, 0x1(r3)
    cmpwi r0, 0x4
    bne lbl_fn_8021A7A0_00000E6C
    li r4, 0x1
lbl_fn_8021A7A0_00000E6C:
    cmpwi r4, 0x0
    beq lbl_fn_8021A7A0_00000E78
lbl_fn_8021A7A0_00000E74:
    li r5, 0x1
lbl_fn_8021A7A0_00000E78:
    cmpwi r5, 0x0
    bne lbl_fn_8021A7A0_00000F10
    cmpwi r3, 0x0
    li r5, 0x0
    beq lbl_fn_8021A7A0_00000E98
    lbz r0, 0x1(r3)
    cmpwi r0, 0x2
    beq lbl_fn_8021A7A0_00000EBC
lbl_fn_8021A7A0_00000E98:
    cmpwi r3, 0x0
    li r4, 0x0
    beq lbl_fn_8021A7A0_00000EB4
    lbz r0, 0x1(r3)
    cmpwi r0, 0x5
    bne lbl_fn_8021A7A0_00000EB4
    li r4, 0x1
lbl_fn_8021A7A0_00000EB4:
    cmpwi r4, 0x0
    beq lbl_fn_8021A7A0_00000EC0
lbl_fn_8021A7A0_00000EBC:
    li r5, 0x1
lbl_fn_8021A7A0_00000EC0:
    cmpwi r5, 0x0
    bne lbl_fn_8021A7A0_00000F10
    cmpwi r3, 0x0
    li r5, 0x0
    beq lbl_fn_8021A7A0_00000EE0
    lbz r0, 0x1(r3)
    cmpwi r0, 0x3
    beq lbl_fn_8021A7A0_00000F04
lbl_fn_8021A7A0_00000EE0:
    cmpwi r3, 0x0
    li r4, 0x0
    beq lbl_fn_8021A7A0_00000EFC
    lbz r0, 0x1(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8021A7A0_00000EFC
    li r4, 0x1
lbl_fn_8021A7A0_00000EFC:
    cmpwi r4, 0x0
    beq lbl_fn_8021A7A0_00000F08
lbl_fn_8021A7A0_00000F04:
    li r5, 0x1
lbl_fn_8021A7A0_00000F08:
    cmpwi r5, 0x0
    beq lbl_fn_8021A7A0_00000F14
lbl_fn_8021A7A0_00000F10:
    li r6, 0x1
lbl_fn_8021A7A0_00000F14:
    mr r3, r6
    blr
}

asm void fn_8021A888(void)
{
    nofralloc
    cmpwi r3, 0x0
    li r5, 0x0
    beq lbl_fn_8021A888_00000F34
    lbz r0, 0x1(r3)
    cmpwi r0, 0x1
    beq lbl_fn_8021A888_00000F58
lbl_fn_8021A888_00000F34:
    cmpwi r3, 0x0
    li r4, 0x0
    beq lbl_fn_8021A888_00000F50
    lbz r0, 0x1(r3)
    cmpwi r0, 0x4
    bne lbl_fn_8021A888_00000F50
    li r4, 0x1
lbl_fn_8021A888_00000F50:
    cmpwi r4, 0x0
    beq lbl_fn_8021A888_00000F5C
lbl_fn_8021A888_00000F58:
    li r5, 0x1
lbl_fn_8021A888_00000F5C:
    mr r3, r5
    blr
}

asm void fn_8021A8D0(void)
{
    nofralloc
    cmpwi r3, 0x0
    li r5, 0x0
    beq lbl_fn_8021A8D0_00000F7C
    lbz r0, 0x1(r3)
    cmpwi r0, 0x2
    beq lbl_fn_8021A8D0_00000FA0
lbl_fn_8021A8D0_00000F7C:
    cmpwi r3, 0x0
    li r4, 0x0
    beq lbl_fn_8021A8D0_00000F98
    lbz r0, 0x1(r3)
    cmpwi r0, 0x5
    bne lbl_fn_8021A8D0_00000F98
    li r4, 0x1
lbl_fn_8021A8D0_00000F98:
    cmpwi r4, 0x0
    beq lbl_fn_8021A8D0_00000FA4
lbl_fn_8021A8D0_00000FA0:
    li r5, 0x1
lbl_fn_8021A8D0_00000FA4:
    mr r3, r5
    blr
}

asm void fn_8021A918(void)
{
    nofralloc
    cmpwi r3, 0x0
    li r5, 0x0
    beq lbl_fn_8021A918_00000FC4
    lbz r0, 0x1(r3)
    cmpwi r0, 0x3
    beq lbl_fn_8021A918_00000FE8
lbl_fn_8021A918_00000FC4:
    cmpwi r3, 0x0
    li r4, 0x0
    beq lbl_fn_8021A918_00000FE0
    lbz r0, 0x1(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8021A918_00000FE0
    li r4, 0x1
lbl_fn_8021A918_00000FE0:
    cmpwi r4, 0x0
    beq lbl_fn_8021A918_00000FEC
lbl_fn_8021A918_00000FE8:
    li r5, 0x1
lbl_fn_8021A918_00000FEC:
    mr r3, r5
    blr
}

asm void fn_8021A960(void)
{
    nofralloc
    cmpwi r3, 0x0
    li r4, 0x0
    beq lbl_fn_8021A960_00001010
    lbz r0, 0x1(r3)
    cmpwi r0, 0x4
    bne lbl_fn_8021A960_00001010
    li r4, 0x1
lbl_fn_8021A960_00001010:
    mr r3, r4
    blr
}

asm void fn_8021A984(void)
{
    nofralloc
    cmpwi r3, 0x0
    li r4, 0x0
    beq lbl_fn_8021A984_00001034
    lbz r0, 0x1(r3)
    cmpwi r0, 0x5
    bne lbl_fn_8021A984_00001034
    li r4, 0x1
lbl_fn_8021A984_00001034:
    mr r3, r4
    blr
}

asm void fn_8021A9A8(void)
{
    nofralloc
    cmpwi r3, 0x0
    li r4, 0x0
    beq lbl_fn_8021A9A8_00001058
    lbz r0, 0x1(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8021A9A8_00001058
    li r4, 0x1
lbl_fn_8021A9A8_00001058:
    mr r3, r4
    blr
}

asm void fn_8021A9CC(void)
{
    nofralloc
    cmpwi r3, 0x0
    li r5, 0x0
    mr r4, r5
    beq lbl_fn_8021A9CC_00001080
    lbz r0, 0x1(r3)
    cmpwi r0, 0x4
    bne lbl_fn_8021A9CC_00001080
    li r4, 0x1
lbl_fn_8021A9CC_00001080:
    cmpwi r4, 0x0
    bne lbl_fn_8021A9CC_000010D0
    cmpwi r3, 0x0
    li r4, 0x0
    beq lbl_fn_8021A9CC_000010A4
    lbz r0, 0x1(r3)
    cmpwi r0, 0x5
    bne lbl_fn_8021A9CC_000010A4
    li r4, 0x1
lbl_fn_8021A9CC_000010A4:
    cmpwi r4, 0x0
    bne lbl_fn_8021A9CC_000010D0
    cmpwi r3, 0x0
    li r4, 0x0
    beq lbl_fn_8021A9CC_000010C8
    lbz r0, 0x1(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8021A9CC_000010C8
    li r4, 0x1
lbl_fn_8021A9CC_000010C8:
    cmpwi r4, 0x0
    beq lbl_fn_8021A9CC_000010D4
lbl_fn_8021A9CC_000010D0:
    li r5, 0x1
lbl_fn_8021A9CC_000010D4:
    mr r3, r5
    blr
}

asm void fn_8021AA48(void)
{
    nofralloc
    cmpwi r3, 0x0
    li r6, 0x0
    mr r5, r6
    beq lbl_fn_8021AA48_000010F8
    lbz r0, 0x1(r3)
    cmpwi r0, 0x2
    beq lbl_fn_8021AA48_0000111C
lbl_fn_8021AA48_000010F8:
    cmpwi r3, 0x0
    li r4, 0x0
    beq lbl_fn_8021AA48_00001114
    lbz r0, 0x1(r3)
    cmpwi r0, 0x5
    bne lbl_fn_8021AA48_00001114
    li r4, 0x1
lbl_fn_8021AA48_00001114:
    cmpwi r4, 0x0
    beq lbl_fn_8021AA48_00001120
lbl_fn_8021AA48_0000111C:
    li r5, 0x1
lbl_fn_8021AA48_00001120:
    cmpwi r5, 0x0
    beq lbl_fn_8021AA48_00001144
    cmpwi r3, 0x0
    beq lbl_fn_8021AA48_00001144
    lwz r0, 0xac(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x20
    bne lbl_fn_8021AA48_00001144
    li r6, 0x1
lbl_fn_8021AA48_00001144:
    mr r3, r6
    blr
}

asm void fn_8021AAB8(void)
{
    nofralloc
    stwu r1, -0x12c0(r1)
    mflr r0
    lis r3, lbl_807772D0@ha
    li r4, 0x0
    stw r0, 0x12c4(r1)
    addi r3, r3, lbl_807772D0@l
    li r5, 0x400
    stmw r25, 0x12a4(r1)
    li r28, 0x0
    stw r3, 0xc60(r1)
    addi r3, r1, 0xc70
    stw r28, 0xc64(r1)
    stw r28, 0xc68(r1)
    stw r28, 0xc6c(r1)
    stw r28, 0x1290(r1)
    bl memset
    addi r3, r1, 0x1270
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0xc60
    addi r4, r4, lbl_807772B0@l
    stw r4, 0xc60(r1)
    la r4, lbl_8087D720
    bl fn_8005B6E8
    lis r3, lbl_8077A090@ha
    stw r28, 0x10(r1)
    addi r3, r3, lbl_8077A090@l
    li r4, 0x0
    stw r3, 0xc(r1)
    addi r3, r1, 0x1c
    li r5, 0x800
    stw r28, 0x14(r1)
    stw r28, 0x18(r1)
    stw r28, 0xc5c(r1)
    bl memset
    addi r3, r1, 0xc1c
    li r4, 0x0
    li r5, 0x40
    bl memset
    lis r3, lbl_8077A070@ha
    lis r4, lbl_807830B8@ha
    addi r3, r3, lbl_8077A070@l
    stw r3, 0xc(r1)
    addi r3, r1, 0xc
    addi r4, r4, lbl_807830B8@l
    bl fn_8005B9AC
    lwz r0, lbl_8087F2D8
    cmpwi r0, 0x0
    bne lbl_fn_8021AAB8_00001570
    lwz r3, lbl_8087F518
    addi r5, r1, 0x8
    lwz r4, lbl_80882F78
    li r6, 0x20
    bl fn_8046DC5C
    lwz r12, 0xc60(r1)
    mr r26, r3
    mr r4, r26
    addi r3, r1, 0xc60
    lwz r12, 0x8(r12)
    lwz r5, 0x8(r1)
    mtctr r12
    bctrl
    lis r28, lbl_807425F8@ha
    b lbl_fn_8021AAB8_00001290
lbl_fn_8021AAB8_00001254:
    addi r3, r1, 0xc60
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_8021AAB8_00001290
    cmpwi r0, 0x23
    beq lbl_fn_8021AAB8_00001290
    addi r4, r28, lbl_807425F8@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8021AAB8_00001290
    lwz r3, lbl_8087F2DC
    addi r0, r3, 0x1
    stw r0, lbl_8087F2DC
lbl_fn_8021AAB8_00001290:
    addi r3, r1, 0xc60
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8021AAB8_00001254
    lwz r29, lbl_8087F2DC
    lis r28, lbl_807425F8@ha
    addi r5, r28, lbl_807425F8@l
    li r4, 0xc
    mulli r3, r29, 0x18
    li r7, 0x0
    mr r6, r5
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_8021AEF0@ha
    lis r5, fn_8021AF10@ha
    mr r7, r29
    li r6, 0x18
    addi r4, r4, fn_8021AEF0@l
    addi r5, r5, fn_8021AF10@l
    bl fn_80695720
    stw r3, lbl_8087F2D8
    mr r4, r26
    lwz r12, 0xc60(r1)
    addi r3, r1, 0xc60
    lwz r5, 0x8(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    li r29, 0x0
    b lbl_fn_8021AAB8_0000136C
lbl_fn_8021AAB8_00001308:
    addi r3, r1, 0xc60
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_8021AAB8_0000136C
    cmpwi r0, 0x23
    beq lbl_fn_8021AAB8_0000136C
    addi r4, r28, lbl_807425F8@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8021AAB8_0000136C
    lwz r0, lbl_8087F2D8
    addi r3, r1, 0xc60
    add r27, r0, r29
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x0(r27)
    addi r3, r1, 0xc60
    bl fn_8005B3CC
    addi r3, r1, 0xc60
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x4(r27)
    addi r29, r29, 0x18
lbl_fn_8021AAB8_0000136C:
    addi r3, r1, 0xc60
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8021AAB8_00001308
    lwz r3, lbl_8087F518
    mr r4, r26
    bl fn_8046DD20
    lwz r3, lbl_8087F518
    addi r5, r1, 0x8
    lwz r4, lbl_80882F7C
    li r6, 0x20
    bl fn_8046DC5C
    lwz r4, 0x8(r1)
    mr r31, r3
    li r26, 0x0
    srwi r0, r4, 31
    add r0, r0, r4
    srawi. r4, r0, 1
    beq lbl_fn_8021AAB8_000013C0
    addi r0, r3, 0x2
    b lbl_fn_8021AAB8_000013C4
lbl_fn_8021AAB8_000013C0:
    mr r0, r31
lbl_fn_8021AAB8_000013C4:
    cmpwi r4, 0x0
    stw r0, 0x10(r1)
    beq lbl_fn_8021AAB8_000013D4
    subi r4, r4, 0x1
lbl_fn_8021AAB8_000013D4:
    li r0, 0x0
    stw r4, 0x14(r1)
    stw r0, 0x18(r1)
    b lbl_fn_8021AAB8_00001428
lbl_fn_8021AAB8_000013E4:
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8021AAB8_00001428
    addi r3, r1, 0xc
    bl fn_8005B710
    addi r3, r1, 0xc
    bl fn_8005B710
    bl fn_80686A48
    add r4, r3, r26
    addi r3, r1, 0xc
    addi r26, r4, 0x1
    bl fn_8005B710
    bl fn_80686A48
    add r3, r3, r26
    addi r26, r3, 0x1
lbl_fn_8021AAB8_00001428:
    addi r3, r1, 0xc
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_8021AAB8_000013E4
    lis r5, lbl_807425F8@ha
    slwi r3, r26, 1
    addi r5, r5, lbl_807425F8@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    lwz r4, 0x8(r1)
    li r29, 0x0
    stw r3, lbl_8087F2E0
    li r30, 0x0
    srwi r0, r4, 31
    add r0, r0, r4
    srawi. r3, r0, 1
    beq lbl_fn_8021AAB8_0000147C
    addi r0, r31, 0x2
    b lbl_fn_8021AAB8_00001480
lbl_fn_8021AAB8_0000147C:
    mr r0, r31
lbl_fn_8021AAB8_00001480:
    cmpwi r3, 0x0
    stw r0, 0x10(r1)
    beq lbl_fn_8021AAB8_00001490
    subi r3, r3, 0x1
lbl_fn_8021AAB8_00001490:
    li r0, 0x0
    stw r3, 0x14(r1)
    lis r28, lbl_807830F8@ha
    stw r0, 0x18(r1)
    b lbl_fn_8021AAB8_00001554
lbl_fn_8021AAB8_000014A4:
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8021AAB8_00001554
    addi r3, r1, 0xc
    bl fn_8005B710
    lwz r0, lbl_8087F2D8
    addi r3, r1, 0xc
    add r25, r0, r29
    bl fn_8005B710
    lwz r0, lbl_8087F2E0
    mr r26, r3
    slwi r27, r30, 1
    addi r4, r28, lbl_807830F8@l
    mr r5, r26
    add r3, r0, r27
    crclr 6
    bl fn_800DD3FC
    lwz r0, lbl_8087F2E0
    mr r3, r26
    add r0, r0, r27
    stw r0, 0xc(r25)
    bl fn_80686A48
    add r4, r3, r30
    addi r3, r1, 0xc
    addi r30, r4, 0x1
    bl fn_8005B710
    lwz r0, lbl_8087F2E0
    mr r26, r3
    slwi r27, r30, 1
    addi r4, r28, lbl_807830F8@l
    mr r5, r26
    add r3, r0, r27
    crclr 6
    bl fn_800DD3FC
    lwz r0, lbl_8087F2E0
    mr r3, r26
    add r0, r0, r27
    stw r0, 0x14(r25)
    bl fn_80686A48
    add r3, r3, r30
    addi r29, r29, 0x18
    addi r30, r3, 0x1
lbl_fn_8021AAB8_00001554:
    addi r3, r1, 0xc
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_8021AAB8_000014A4
    lwz r3, lbl_8087F518
    mr r4, r31
    bl fn_8046DD20
lbl_fn_8021AAB8_00001570:
    lmw r25, 0x12a4(r1)
    lwz r0, 0x12c4(r1)
    mtlr r0
    addi r1, r1, 0x12c0
    blr
}

asm void fn_8021AEF0(void)
{
    nofralloc
    lis r4, lbl_80782FF0@ha
    li r0, 0x0
    addi r4, r4, lbl_80782FF0@l
    stw r4, 0x8(r3)
    stw r0, 0xc(r3)
    stw r4, 0x10(r3)
    stw r0, 0x14(r3)
    blr
}

asm void fn_8021AF10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8021AF10_000015CC
    cmpwi r4, 0x0
    ble lbl_fn_8021AF10_000015CC
    bl dtor_80084684
lbl_fn_8021AF10_000015CC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8021AF50(void)
{
    nofralloc
    lwz r5, lbl_8087F2D8
    li r6, 0x0
    lwz r0, lbl_8087F2DC
    mr r4, r5
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8021AF50_00001624
lbl_fn_8021AF50_00001600:
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_8021AF50_00001618
    mulli r0, r6, 0x18
    add r3, r5, r0
    blr
lbl_fn_8021AF50_00001618:
    addi r4, r4, 0x18
    addi r6, r6, 0x1
    bdnz lbl_fn_8021AF50_00001600
lbl_fn_8021AF50_00001624:
    li r3, 0x0
    blr
}

asm void fn_8021AF98(void)
{
    nofralloc
    lwz r6, lbl_8087F2D8
    li r4, 0x0
    lwz r0, lbl_8087F2DC
    mr r5, r6
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8021AF98_0000166C
lbl_fn_8021AF98_00001648:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_fn_8021AF98_00001660
    mulli r0, r4, 0x18
    add r3, r6, r0
    b lbl_fn_8021AF98_00001670
lbl_fn_8021AF98_00001660:
    addi r5, r5, 0x18
    addi r4, r4, 0x1
    bdnz lbl_fn_8021AF98_00001648
lbl_fn_8021AF98_0000166C:
    li r3, 0x0
lbl_fn_8021AF98_00001670:
    cmpwi r3, 0x0
    beq lbl_fn_8021AF98_00001680
    lwz r3, 0x4(r3)
    blr
lbl_fn_8021AF98_00001680:
    li r3, 0x0
    blr
}

asm void fn_8021AFF4(void)
{
    nofralloc
    lwz r6, lbl_8087F2D8
    li r4, 0x0
    lwz r0, lbl_8087F2DC
    mr r5, r6
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8021AFF4_000016C8
lbl_fn_8021AFF4_000016A4:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_fn_8021AFF4_000016BC
    mulli r0, r4, 0x18
    add r3, r6, r0
    b lbl_fn_8021AFF4_000016CC
lbl_fn_8021AFF4_000016BC:
    addi r5, r5, 0x18
    addi r4, r4, 0x1
    bdnz lbl_fn_8021AFF4_000016A4
lbl_fn_8021AFF4_000016C8:
    li r3, 0x0
lbl_fn_8021AFF4_000016CC:
    cmpwi r3, 0x0
    beq lbl_fn_8021AFF4_000016DC
    lwz r3, 0x4(r3)
    b lbl_fn_8021AFF4_000016E0
lbl_fn_8021AFF4_000016DC:
    li r3, 0x0
lbl_fn_8021AFF4_000016E0:
    cmpwi r3, 0x0
    ble lbl_fn_8021AFF4_000016EC
    b fn_80219E6C
lbl_fn_8021AFF4_000016EC:
    li r3, 0x0
    blr
}

asm void fn_8021B060(void)
{
    nofralloc
    stwu r1, -0xc80(r1)
    mflr r0
    lis r3, lbl_8077A090@ha
    li r4, 0x0
    stw r0, 0xc84(r1)
    li r0, 0x0
    addi r3, r3, lbl_8077A090@l
    li r5, 0x800
    stmw r25, 0xc64(r1)
    stw r3, 0xc(r1)
    addi r3, r1, 0x1c
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0xc5c(r1)
    bl memset
    addi r3, r1, 0xc1c
    li r4, 0x0
    li r5, 0x40
    bl memset
    lis r3, lbl_8077A070@ha
    lis r4, lbl_807830B8@ha
    addi r3, r3, lbl_8077A070@l
    stw r3, 0xc(r1)
    addi r3, r1, 0xc
    addi r4, r4, lbl_807830B8@l
    bl fn_8005B9AC
    lis r29, lbl_80742658@ha
    li r3, 0x258
    addi r5, r29, lbl_80742658@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    lis r28, fn_8020C4B0@ha
    lis r27, fn_8020C07C@ha
    addi r4, r28, fn_8020C4B0@l
    li r6, 0x8
    addi r5, r27, fn_8020C07C@l
    li r7, 0x49
    bl fn_80695720
    stw r3, lbl_8087F2E8
    addi r5, r29, lbl_80742658@l
    mr r6, r5
    li r3, 0xe8
    li r4, 0x3
    li r7, 0x0
    bl fn_800846FC
    addi r4, r28, fn_8020C4B0@l
    addi r5, r27, fn_8020C07C@l
    li r6, 0x8
    li r7, 0x1b
    bl fn_80695720
    lwz r0, lbl_8087F2EC
    stw r3, lbl_8087F2F0
    cmpwi r0, 0x0
    bne lbl_fn_8021B060_00001978
    lwz r3, lbl_8087F518
    addi r5, r1, 0x8
    lwz r4, lbl_80882F80
    li r6, 0x20
    bl fn_8046DC5C
    lwz r4, 0x8(r1)
    mr r30, r3
    li r25, 0x0
    srwi r0, r4, 31
    add r0, r0, r4
    srawi. r4, r0, 1
    beq lbl_fn_8021B060_00001810
    addi r0, r3, 0x2
    b lbl_fn_8021B060_00001814
lbl_fn_8021B060_00001810:
    mr r0, r30
lbl_fn_8021B060_00001814:
    cmpwi r4, 0x0
    stw r0, 0x10(r1)
    beq lbl_fn_8021B060_00001824
    subi r4, r4, 0x1
lbl_fn_8021B060_00001824:
    li r0, 0x0
    stw r4, 0x14(r1)
    stw r0, 0x18(r1)
    b lbl_fn_8021B060_00001864
lbl_fn_8021B060_00001834:
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8021B060_00001864
    addi r3, r1, 0xc
    bl fn_8005B710
    addi r3, r1, 0xc
    bl fn_8005B710
    bl fn_80686A48
    add r3, r3, r25
    addi r25, r3, 0x1
lbl_fn_8021B060_00001864:
    addi r3, r1, 0xc
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_8021B060_00001834
    lis r5, lbl_80742658@ha
    slwi r3, r25, 1
    addi r5, r5, lbl_80742658@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    lwz r4, 0x8(r1)
    li r29, 0x0
    stw r3, lbl_8087F2EC
    li r28, 0x0
    srwi r0, r4, 31
    li r31, 0x0
    add r0, r0, r4
    srawi. r3, r0, 1
    beq lbl_fn_8021B060_000018BC
    addi r0, r30, 0x2
    b lbl_fn_8021B060_000018C0
lbl_fn_8021B060_000018BC:
    mr r0, r30
lbl_fn_8021B060_000018C0:
    cmpwi r3, 0x0
    stw r0, 0x10(r1)
    beq lbl_fn_8021B060_000018D0
    subi r3, r3, 0x1
lbl_fn_8021B060_000018D0:
    li r0, 0x0
    stw r3, 0x14(r1)
    lis r27, lbl_807834D4@ha
    stw r0, 0x18(r1)
    b lbl_fn_8021B060_0000195C
lbl_fn_8021B060_000018E4:
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8021B060_0000195C
    addi r3, r1, 0xc
    bl fn_8005B710
    addi r3, r1, 0xc
    bl fn_8005B710
    lwz r0, lbl_8087F2EC
    mr r25, r3
    slwi r26, r31, 1
    addi r4, r27, lbl_807834D4@l
    mr r5, r25
    add r3, r0, r26
    crclr 6
    bl fn_800DD3FC
    cmpwi r29, 0x49
    bge lbl_fn_8021B060_00001944
    lwz r0, lbl_8087F2E8
    lwz r4, lbl_8087F2EC
    add r3, r0, r28
    add r0, r4, r26
    stw r0, 0x4(r3)
lbl_fn_8021B060_00001944:
    mr r3, r25
    bl fn_80686A48
    add r3, r3, r31
    addi r29, r29, 0x1
    addi r31, r3, 0x1
    addi r28, r28, 0x8
lbl_fn_8021B060_0000195C:
    addi r3, r1, 0xc
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_8021B060_000018E4
    lwz r3, lbl_8087F518
    mr r4, r30
    bl fn_8046DD20
lbl_fn_8021B060_00001978:
    lmw r25, 0xc64(r1)
    lwz r0, 0xc84(r1)
    mtlr r0
    addi r1, r1, 0xc80
    blr
}
