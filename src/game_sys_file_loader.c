#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_19(void);
extern void _savegpr_19(void);
extern void dtor_80084684(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_800846FC(void);
extern void fn_800DC288(void);
extern void fn_80206B9C(void);
extern void fn_8020EF04(void);
extern void fn_80211480(void);
extern void fn_8046DC5C(void);
extern void fn_8046DD20(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_80695720(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8074268C[];
extern u8 lbl_80742698[];
extern u8 lbl_807426E0[];
extern u8 lbl_807426E8[];
extern u8 lbl_80742728[];
extern u8 lbl_80742730[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];

/* Small data declarations */
extern u32 lbl_8087D720;
extern u32 lbl_8087F308;
extern u32 lbl_8087F30C;
extern u32 lbl_8087F310;
extern u32 lbl_8087F314;
extern u32 lbl_8087F318;
extern u32 lbl_8087F31C;
extern u32 lbl_8087F320;
extern u32 lbl_8087F324;
extern u32 lbl_8087F328;
extern u32 lbl_8087F32C;
extern u32 lbl_8087F330;
extern u32 lbl_8087F334;
extern u32 lbl_8087F518;
extern u32 lbl_8087F610;
extern u32 lbl_80882F98;
extern u32 lbl_80882FA0;
extern u32 lbl_80882FA4;
extern u32 lbl_80882FA8;
extern u32 lbl_80882FAC;
extern u32 lbl_80882FB0;
extern u32 lbl_80882FB4;
extern u32 lbl_80882FB8;
extern u32 lbl_80882FBC;
extern u32 lbl_80882FC0;
extern u32 lbl_80882FC4;
extern u32 lbl_80882FC8;
extern u32 lbl_80882FCC;

/* Function declarations */
void fn_8021CCC4(void);
void fn_8021CF08(void);
void fn_8021CF4C(void);
void fn_8021CF8C(void);
void fn_8021D4C4(void);
void fn_8021D520(void);
void fn_8021D574(void);
void fn_8021D58C(void);
void fn_8021D5F8(void);
void fn_8021D650(void);
void fn_8021D6B8(void);
void fn_8021D720(void);
void fn_8021D770(void);
void fn_8021D990(void);
void fn_8021D9D4(void);
void fn_8021DBEC(void);
void fn_8021DE50(void);
void fn_8021DE88(void);
void fn_8021DECC(void);
void fn_8021E0B0(void);
void fn_8021E41C(void);
void fn_8021E42C(void);
void fn_8021E444(void);
void fn_8021E48C(void);
void fn_8021E4E4(void);
void fn_8021E5A4(void);

asm void fn_8021CCC4(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    lis r3, lbl_807772D0@ha
    li r4, 0x0
    stw r0, 0x664(r1)
    addi r3, r3, lbl_807772D0@l
    li r5, 0x400
    stmw r25, 0x644(r1)
    li r30, 0x0
    stw r3, 0xc(r1)
    addi r3, r1, 0x1c
    stw r30, 0x10(r1)
    stw r30, 0x14(r1)
    stw r30, 0x18(r1)
    stw r30, 0x63c(r1)
    bl memset
    addi r3, r1, 0x61c
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0xc
    addi r4, r4, lbl_807772B0@l
    stw r4, 0xc(r1)
    la r4, lbl_8087D720
    bl fn_8005B6E8
    lwz r0, lbl_8087F308
    cmpwi r0, 0x0
    bne lbl_fn_8021CCC4_00000230
    lwz r3, lbl_8087F518
    addi r5, r1, 0x8
    lwz r4, lbl_80882F98
    li r6, 0x20
    bl fn_8046DC5C
    lwz r12, 0xc(r1)
    mr r31, r3
    mr r4, r31
    addi r3, r1, 0xc
    lwz r12, 0x8(r12)
    lwz r5, 0x8(r1)
    mtctr r12
    bctrl
    stw r30, lbl_8087F30C
    b lbl_fn_8021CCC4_000000F4
lbl_fn_8021CCC4_000000B0:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_8021CCC4_000000F4
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_8021CCC4_000000F4
    cmpwi r0, 0x3b
    beq lbl_fn_8021CCC4_000000F4
    cmpwi r0, 0x23
    beq lbl_fn_8021CCC4_000000F4
    lwz r3, lbl_8087F30C
    addi r0, r3, 0x1
    stw r0, lbl_8087F30C
lbl_fn_8021CCC4_000000F4:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8021CCC4_000000B0
    lwz r0, lbl_8087F30C
    lis r5, lbl_80742698@ha
    addi r5, r5, lbl_80742698@l
    li r4, 0x1
    mr r6, r5
    slwi r3, r0, 5
    li r7, 0x0
    bl fn_800846FC
    stw r3, lbl_8087F308
    mr r4, r31
    lwz r12, 0xc(r1)
    addi r3, r1, 0xc
    lwz r5, 0x8(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    li r27, 0x0
    lis r30, lbl_8074268C@ha
    b lbl_fn_8021CCC4_00000214
lbl_fn_8021CCC4_00000150:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_8021CCC4_00000214
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_8021CCC4_00000214
    cmpwi r0, 0x3b
    beq lbl_fn_8021CCC4_00000214
    cmpwi r0, 0x23
    beq lbl_fn_8021CCC4_00000214
    lwz r0, lbl_8087F308
    addi r3, r1, 0x1c
    add r25, r0, r27
    bl fn_80684600
    stw r3, 0x0(r25)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    addi r3, r1, 0xc
    bl fn_8005B3CC
    mr r29, r3
    addi r26, r30, lbl_8074268C@l
    li r28, 0x0
    b lbl_fn_8021CCC4_000001D8
lbl_fn_8021CCC4_000001BC:
    mr r3, r29
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8021CCC4_000001D0
    b lbl_fn_8021CCC4_000001E8
lbl_fn_8021CCC4_000001D0:
    addi r26, r26, 0x4
    addi r28, r28, 0x1
lbl_fn_8021CCC4_000001D8:
    lwz r4, 0x0(r26)
    cmpwi r4, 0x0
    bne lbl_fn_8021CCC4_000001BC
    li r28, 0x2
lbl_fn_8021CCC4_000001E8:
    stw r28, 0x4(r25)
    li r26, 0x0
lbl_fn_8021CCC4_000001F0:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    addi r26, r26, 0x1
    stw r3, 0x8(r25)
    cmpwi r26, 0x6
    addi r25, r25, 0x4
    blt lbl_fn_8021CCC4_000001F0
    addi r27, r27, 0x20
lbl_fn_8021CCC4_00000214:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8021CCC4_00000150
    lwz r3, lbl_8087F518
    mr r4, r31
    bl fn_8046DD20
lbl_fn_8021CCC4_00000230:
    lmw r25, 0x644(r1)
    lwz r0, 0x664(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}

asm void fn_8021CF08(void)
{
    nofralloc
    lwz r0, lbl_8087F30C
    lwz r5, lbl_8087F308
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8021CF08_00000280
lbl_fn_8021CF08_00000258:
    lwz r0, 0x0(r5)
    cmpw r0, r3
    bne lbl_fn_8021CF08_00000278
    lwz r0, 0x4(r5)
    cmpw r0, r4
    bne lbl_fn_8021CF08_00000278
    mr r3, r5
    blr
lbl_fn_8021CF08_00000278:
    addi r5, r5, 0x20
    bdnz lbl_fn_8021CF08_00000258
lbl_fn_8021CF08_00000280:
    li r3, 0x0
    blr
}

asm void fn_8021CF4C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8021CF4C_000002B0
    cmpwi r4, 0x0
    ble lbl_fn_8021CF4C_000002B0
    bl dtor_80084684
lbl_fn_8021CF4C_000002B0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8021CF8C(void)
{
    nofralloc
    stwu r1, -0x6b0(r1)
    mflr r0
    lis r3, lbl_807772D0@ha
    li r4, 0x0
    stw r0, 0x6b4(r1)
    li r0, 0x0
    addi r3, r3, lbl_807772D0@l
    li r5, 0x400
    stmw r18, 0x678(r1)
    stw r3, 0x40(r1)
    addi r3, r1, 0x50
    stw r0, 0x44(r1)
    stw r0, 0x48(r1)
    stw r0, 0x4c(r1)
    stw r0, 0x670(r1)
    bl memset
    addi r3, r1, 0x650
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x40
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x40(r1)
    la r4, lbl_8087D720
    bl fn_8005B6E8
    lwz r0, lbl_8087F310
    cmpwi r0, 0x0
    bne lbl_fn_8021CF8C_000007EC
    lwz r0, lbl_8087F318
    cmpwi r0, 0x0
    bne lbl_fn_8021CF8C_000007EC
    lwz r3, lbl_8087F518
    addi r5, r1, 0x8
    lwz r4, lbl_80882FA0
    li r6, 0x20
    bl fn_8046DC5C
    lwz r12, 0x40(r1)
    mr r21, r3
    mr r4, r21
    addi r3, r1, 0x40
    lwz r12, 0x8(r12)
    lwz r5, 0x8(r1)
    mtctr r12
    bctrl
    lis r20, lbl_807426E8@ha
    addi r19, r20, lbl_807426E8@l
    b lbl_fn_8021CF8C_000003F8
lbl_fn_8021CF8C_00000388:
    addi r3, r1, 0x40
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_8021CF8C_000003F8
    addi r4, r20, lbl_807426E8@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8021CF8C_000003F8
    addi r3, r1, 0x40
    bl fn_8005B3CC
    mr r18, r3
    addi r4, r19, 0x6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8021CF8C_000003D8
    lwz r3, lbl_8087F314
    addi r0, r3, 0x1
    stw r0, lbl_8087F314
    b lbl_fn_8021CF8C_000003F8
lbl_fn_8021CF8C_000003D8:
    mr r3, r18
    addi r4, r19, 0xd
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8021CF8C_000003F8
    lwz r3, lbl_8087F31C
    addi r0, r3, 0x1
    stw r0, lbl_8087F31C
lbl_fn_8021CF8C_000003F8:
    addi r3, r1, 0x40
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8021CF8C_00000388
    lwz r19, lbl_8087F314
    lis r26, lbl_807426E8@ha
    addi r27, r26, lbl_807426E8@l
    li r4, 0xc
    mulli r3, r19, 0x3e0
    li r7, 0x0
    addi r5, r27, 0x12
    mr r6, r5
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_8021D4C4@ha
    lis r5, fn_8021D650@ha
    mr r7, r19
    li r6, 0x3e0
    addi r4, r4, fn_8021D4C4@l
    addi r5, r5, fn_8021D650@l
    bl fn_80695720
    lwz r19, lbl_8087F31C
    addi r5, r27, 0x12
    stw r3, lbl_8087F310
    mr r6, r5
    mulli r3, r19, 0x3dc
    li r4, 0xc
    li r7, 0x0
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_8021D5F8@ha
    lis r5, fn_8021D6B8@ha
    mr r7, r19
    li r6, 0x3dc
    addi r4, r4, fn_8021D5F8@l
    addi r5, r5, fn_8021D6B8@l
    bl fn_80695720
    stw r3, lbl_8087F318
    mr r4, r21
    lwz r12, 0x40(r1)
    addi r3, r1, 0x40
    lwz r5, 0x8(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r31, r1, 0x14
    addi r28, r1, 0x2c
    li r25, 0x0
    li r24, 0x0
    li r29, 0x0
    li r30, 0xa
    b lbl_fn_8021CF8C_000007D0
lbl_fn_8021CF8C_000004C8:
    addi r3, r1, 0x40
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_8021CF8C_000007D0
    addi r4, r26, lbl_807426E8@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8021CF8C_000007D0
    addi r3, r1, 0x40
    bl fn_8005B3CC
    mr r18, r3
    addi r4, r27, 0x6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8021CF8C_0000066C
    lwz r0, lbl_8087F310
    addi r3, r1, 0x40
    add r20, r0, r25
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x4(r20)
    addi r3, r1, 0x40
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x8(r20)
    addi r3, r1, 0x40
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x0(r20)
    b lbl_fn_8021CF8C_00000654
lbl_fn_8021CF8C_00000544:
    addi r3, r1, 0x40
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_8021CF8C_00000654
    addi r4, r27, 0x13
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8021CF8C_00000664
    mr r22, r20
    addi r23, r20, 0xc
    li r19, 0x0
lbl_fn_8021CF8C_00000574:
    addi r3, r1, 0x40
    bl fn_8005B3CC
    bl fn_80684600
    cmpwi r3, 0x0
    ble lbl_fn_8021CF8C_00000630
    lwz r0, 0xc(r22)
    cmplwi r0, 0x8
    bge lbl_fn_8021CF8C_00000630
    stw r3, 0x28(r1)
    addi r3, r1, 0x40
    stb r29, 0x2c(r1)
    stw r30, 0x3c(r1)
    bl fn_8005B3CC
    cmplw r3, r28
    mr r18, r3
    beq lbl_fn_8021CF8C_000005CC
    bl strlen
    mr r5, r3
    mr r3, r28
    mr r4, r18
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8021CF8C_000005CC:
    addi r3, r1, 0x40
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x3c(r1)
    lwz r0, 0xc(r22)
    mulli r0, r0, 0x18
    add r0, r23, r0
    addic. r4, r0, 0x4
    beq lbl_fn_8021CF8C_00000620
    lwz r0, 0x28(r1)
    stw r0, 0x0(r4)
    lwz r0, 0x30(r1)
    lwz r3, 0x2c(r1)
    stw r3, 0x4(r4)
    stw r0, 0x8(r4)
    lwz r0, 0x38(r1)
    lwz r3, 0x34(r1)
    stw r3, 0xc(r4)
    stw r0, 0x10(r4)
    lwz r0, 0x3c(r1)
    stw r0, 0x14(r4)
lbl_fn_8021CF8C_00000620:
    lwz r3, 0xc(r22)
    addi r0, r3, 0x1
    stw r0, 0xc(r22)
    b lbl_fn_8021CF8C_00000640
lbl_fn_8021CF8C_00000630:
    addi r3, r1, 0x40
    bl fn_8005B3CC
    addi r3, r1, 0x40
    bl fn_8005B3CC
lbl_fn_8021CF8C_00000640:
    addi r19, r19, 0x1
    addi r23, r23, 0xc4
    cmpwi r19, 0x5
    addi r22, r22, 0xc4
    blt lbl_fn_8021CF8C_00000574
lbl_fn_8021CF8C_00000654:
    addi r3, r1, 0x40
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8021CF8C_00000544
lbl_fn_8021CF8C_00000664:
    addi r25, r25, 0x3e0
    b lbl_fn_8021CF8C_000007D0
lbl_fn_8021CF8C_0000066C:
    mr r3, r18
    addi r4, r27, 0xd
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8021CF8C_000007D0
    lwz r0, lbl_8087F318
    addi r3, r1, 0x40
    add r19, r0, r24
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x0(r19)
    addi r3, r1, 0x40
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x4(r19)
    b lbl_fn_8021CF8C_000007BC
lbl_fn_8021CF8C_000006AC:
    addi r3, r1, 0x40
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_8021CF8C_000007BC
    addi r4, r27, 0x13
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8021CF8C_000007CC
    mr r23, r19
    addi r22, r19, 0x8
    li r20, 0x0
lbl_fn_8021CF8C_000006DC:
    addi r3, r1, 0x40
    bl fn_8005B3CC
    bl fn_80684600
    cmpwi r3, 0x0
    ble lbl_fn_8021CF8C_00000798
    lwz r0, 0x8(r23)
    cmplwi r0, 0x8
    bge lbl_fn_8021CF8C_00000798
    stw r3, 0x10(r1)
    addi r3, r1, 0x40
    stb r29, 0x14(r1)
    stw r30, 0x24(r1)
    bl fn_8005B3CC
    cmplw r3, r31
    mr r18, r3
    beq lbl_fn_8021CF8C_00000734
    bl strlen
    mr r5, r3
    mr r3, r31
    mr r4, r18
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8021CF8C_00000734:
    addi r3, r1, 0x40
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x24(r1)
    lwz r0, 0x8(r23)
    mulli r0, r0, 0x18
    add r0, r22, r0
    addic. r4, r0, 0x4
    beq lbl_fn_8021CF8C_00000788
    lwz r0, 0x10(r1)
    stw r0, 0x0(r4)
    lwz r0, 0x18(r1)
    lwz r3, 0x14(r1)
    stw r3, 0x4(r4)
    stw r0, 0x8(r4)
    lwz r0, 0x20(r1)
    lwz r3, 0x1c(r1)
    stw r3, 0xc(r4)
    stw r0, 0x10(r4)
    lwz r0, 0x24(r1)
    stw r0, 0x14(r4)
lbl_fn_8021CF8C_00000788:
    lwz r3, 0x8(r23)
    addi r0, r3, 0x1
    stw r0, 0x8(r23)
    b lbl_fn_8021CF8C_000007A8
lbl_fn_8021CF8C_00000798:
    addi r3, r1, 0x40
    bl fn_8005B3CC
    addi r3, r1, 0x40
    bl fn_8005B3CC
lbl_fn_8021CF8C_000007A8:
    addi r20, r20, 0x1
    addi r22, r22, 0xc4
    cmpwi r20, 0x5
    addi r23, r23, 0xc4
    blt lbl_fn_8021CF8C_000006DC
lbl_fn_8021CF8C_000007BC:
    addi r3, r1, 0x40
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8021CF8C_000006AC
lbl_fn_8021CF8C_000007CC:
    addi r24, r24, 0x3dc
lbl_fn_8021CF8C_000007D0:
    addi r3, r1, 0x40
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8021CF8C_000004C8
    lwz r3, lbl_8087F518
    mr r4, r21
    bl fn_8046DD20
lbl_fn_8021CF8C_000007EC:
    lmw r18, 0x678(r1)
    lwz r0, 0x6b4(r1)
    mtlr r0
    addi r1, r1, 0x6b0
    blr
}

asm void fn_8021D4C4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, fn_8021D520@ha
    lis r5, fn_8021D58C@ha
    stw r0, 0x14(r1)
    li r0, 0x0
    addi r4, r4, fn_8021D520@l
    addi r5, r5, fn_8021D58C@l
    stw r31, 0xc(r1)
    mr r31, r3
    li r6, 0xc4
    li r7, 0x5
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    addi r3, r3, 0xc
    bl fn_806958E0
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8021D520(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, fn_8021D574@ha
    lis r5, fn_8021CF4C@ha
    stw r0, 0x14(r1)
    li r0, 0x0
    addi r4, r4, fn_8021D574@l
    addi r5, r5, fn_8021CF4C@l
    stw r31, 0xc(r1)
    mr r31, r3
    li r6, 0x18
    li r7, 0x8
    stw r0, 0x0(r3)
    addi r3, r3, 0x4
    bl fn_806958E0
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8021D574(void)
{
    nofralloc
    li r4, 0x0
    li r0, 0xa
    stw r4, 0x0(r3)
    stb r4, 0x4(r3)
    stw r0, 0x14(r3)
    blr
}

asm void fn_8021D58C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_8021D58C_00000918
    beq lbl_fn_8021D58C_00000908
    lis r4, fn_8021CF4C@ha
    li r5, 0x18
    addi r4, r4, fn_8021CF4C@l
    li r6, 0x8
    addi r3, r3, 0x4
    bl fn_806959D8
lbl_fn_8021D58C_00000908:
    cmpwi r31, 0x0
    ble lbl_fn_8021D58C_00000918
    mr r3, r30
    bl dtor_80084684
lbl_fn_8021D58C_00000918:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8021D5F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, fn_8021D520@ha
    lis r5, fn_8021D58C@ha
    stw r0, 0x14(r1)
    li r0, 0x0
    addi r4, r4, fn_8021D520@l
    addi r5, r5, fn_8021D58C@l
    stw r31, 0xc(r1)
    mr r31, r3
    li r6, 0xc4
    li r7, 0x5
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    addi r3, r3, 0x8
    bl fn_806958E0
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8021D650(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_8021D650_000009D8
    lis r4, fn_8021D58C@ha
    li r5, 0xc4
    addi r4, r4, fn_8021D58C@l
    li r6, 0x5
    addi r3, r3, 0xc
    bl fn_806959D8
    cmpwi r31, 0x0
    ble lbl_fn_8021D650_000009D8
    mr r3, r30
    bl dtor_80084684
lbl_fn_8021D650_000009D8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8021D6B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_8021D6B8_00000A40
    lis r4, fn_8021D58C@ha
    li r5, 0xc4
    addi r4, r4, fn_8021D58C@l
    li r6, 0x5
    addi r3, r3, 0x8
    bl fn_806959D8
    cmpwi r31, 0x0
    ble lbl_fn_8021D6B8_00000A40
    mr r3, r30
    bl dtor_80084684
lbl_fn_8021D6B8_00000A40:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8021D720(void)
{
    nofralloc
    lwz r0, lbl_8087F314
    lwz r5, lbl_8087F310
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8021D720_00000AA4
lbl_fn_8021D720_00000A70:
    lwz r0, 0x4(r5)
    cmpw r0, r3
    bgt lbl_fn_8021D720_00000A9C
    lwz r0, 0x8(r5)
    cmpw r3, r0
    bgt lbl_fn_8021D720_00000A9C
    lwz r0, 0x0(r5)
    cmpw r0, r4
    bne lbl_fn_8021D720_00000A9C
    mr r3, r5
    blr
lbl_fn_8021D720_00000A9C:
    addi r5, r5, 0x3e0
    bdnz lbl_fn_8021D720_00000A70
lbl_fn_8021D720_00000AA4:
    li r3, 0x0
    blr
}

asm void fn_8021D770(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    neg r0, r6
    andc r7, r0, r6
    stmw r24, 0x10(r1)
    srawi r0, r7, 31
    and r0, r6, r0
    mr r25, r3
    cmpwi r0, 0x5
    mr r26, r4
    mr r27, r5
    bge lbl_fn_8021D770_00000AEC
    srawi r0, r7, 31
    and r0, r6, r0
    b lbl_fn_8021D770_00000AF0
lbl_fn_8021D770_00000AEC:
    li r0, 0x5
lbl_fn_8021D770_00000AF0:
    mulli r31, r0, 0xc4
    li r29, 0x0
    li r4, 0x0
    li r6, 0x0
    add r5, r3, r31
    lwz r28, 0xc(r5)
    addi r30, r5, 0xc
    cmpwi cr1, r28, 0x0
    ble cr1, lbl_fn_8021D770_00000C2C
    cmpwi r28, 0x8
    subi r7, r28, 0x8
    ble lbl_fn_8021D770_00000C00
    li r8, 0x0
    blt cr1, lbl_fn_8021D770_00000B3C
    lis r5, 0x8000
    subi r0, r5, 0x2
    cmpw r28, r0
    bgt lbl_fn_8021D770_00000B3C
    li r8, 0x1
lbl_fn_8021D770_00000B3C:
    cmpwi r8, 0x0
    beq lbl_fn_8021D770_00000C00
    addi r5, r7, 0x7
    add r0, r3, r31
    srwi r5, r5, 3
    mtctr r5
    cmpwi r7, 0x0
    ble lbl_fn_8021D770_00000C00
lbl_fn_8021D770_00000B5C:
    addi r5, r4, 0x1
    add r9, r0, r6
    mulli r8, r5, 0x18
    addi r7, r4, 0x2
    addi r5, r4, 0x3
    lwz r24, 0x24(r9)
    addi r9, r4, 0x4
    mulli r11, r7, 0x18
    add r7, r0, r8
    addi r8, r4, 0x5
    lwz r12, 0x24(r7)
    mulli r10, r5, 0x18
    addi r7, r4, 0x6
    addi r5, r4, 0x7
    add r11, r0, r11
    mulli r9, r9, 0x18
    add r29, r29, r24
    add r10, r0, r10
    lwz r11, 0x24(r11)
    add r29, r29, r12
    lwz r10, 0x24(r10)
    mulli r8, r8, 0x18
    add r9, r0, r9
    add r29, r29, r11
    lwz r9, 0x24(r9)
    addi r4, r4, 0x8
    mulli r7, r7, 0x18
    add r8, r0, r8
    add r29, r29, r10
    lwz r8, 0x24(r8)
    mulli r5, r5, 0x18
    addi r6, r6, 0xc0
    add r7, r0, r7
    add r29, r29, r9
    lwz r7, 0x24(r7)
    add r5, r0, r5
    add r29, r29, r8
    lwz r5, 0x24(r5)
    add r29, r29, r7
    add r29, r29, r5
    bdnz lbl_fn_8021D770_00000B5C
lbl_fn_8021D770_00000C00:
    subf r0, r4, r28
    add r5, r3, r31
    mulli r3, r4, 0x18
    mtctr r0
    cmpw r4, r28
    bge lbl_fn_8021D770_00000C2C
lbl_fn_8021D770_00000C18:
    add r4, r5, r3
    addi r3, r3, 0x18
    lwz r0, 0x24(r4)
    add r29, r29, r0
    bdnz lbl_fn_8021D770_00000C18
lbl_fn_8021D770_00000C2C:
    cmpwi r29, 0x0
    bgt lbl_fn_8021D770_00000C3C
    li r3, 0x0
    b lbl_fn_8021D770_00000CB8
lbl_fn_8021D770_00000C3C:
    bl fn_80680CF8
    divw r0, r3, r29
    add r5, r25, r31
    li r4, 0x0
    mullw r0, r0, r29
    subf r6, r0, r3
    mtctr r28
    cmpwi r28, 0x0
    ble lbl_fn_8021D770_00000CB4
lbl_fn_8021D770_00000C60:
    add r3, r5, r4
    lwz r0, 0x24(r3)
    cmpw r6, r0
    bge lbl_fn_8021D770_00000CA8
    add r5, r30, r4
    cmpwi r27, 0x0
    lwz r0, 0x4(r5)
    stw r0, 0x0(r26)
    beq lbl_fn_8021D770_00000CA0
    lis r4, lbl_807426E8@ha
    mr r3, r27
    addi r4, r4, lbl_807426E8@l
    addi r5, r5, 0x8
    addi r4, r4, 0x17
    crclr 6
    bl sprintf
lbl_fn_8021D770_00000CA0:
    li r3, 0x1
    b lbl_fn_8021D770_00000CB8
lbl_fn_8021D770_00000CA8:
    subf r6, r0, r6
    addi r4, r4, 0x18
    bdnz lbl_fn_8021D770_00000C60
lbl_fn_8021D770_00000CB4:
    li r3, 0x0
lbl_fn_8021D770_00000CB8:
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8021D990(void)
{
    nofralloc
    lwz r0, lbl_8087F31C
    lwz r4, lbl_8087F318
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8021D990_00000D08
lbl_fn_8021D990_00000CE0:
    lwz r0, 0x0(r4)
    cmpw r0, r3
    bgt lbl_fn_8021D990_00000D00
    lwz r0, 0x4(r4)
    cmpw r3, r0
    bgt lbl_fn_8021D990_00000D00
    mr r3, r4
    blr
lbl_fn_8021D990_00000D00:
    addi r4, r4, 0x3dc
    bdnz lbl_fn_8021D990_00000CE0
lbl_fn_8021D990_00000D08:
    li r3, 0x0
    blr
}

asm void fn_8021D9D4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    neg r0, r6
    andc r7, r0, r6
    stmw r25, 0x14(r1)
    srawi r0, r7, 31
    and r0, r6, r0
    mr r26, r3
    cmpwi r0, 0x5
    mr r27, r4
    mr r28, r5
    bge lbl_fn_8021D9D4_00000D50
    srawi r0, r7, 31
    and r0, r6, r0
    b lbl_fn_8021D9D4_00000D54
lbl_fn_8021D9D4_00000D50:
    li r0, 0x5
lbl_fn_8021D9D4_00000D54:
    mulli r31, r0, 0xc4
    li r30, 0x0
    li r4, 0x0
    li r6, 0x0
    add r5, r3, r31
    lwz r29, 0x8(r5)
    cmpwi cr1, r29, 0x0
    ble cr1, lbl_fn_8021D9D4_00000E8C
    cmpwi r29, 0x8
    subi r7, r29, 0x8
    ble lbl_fn_8021D9D4_00000E60
    li r8, 0x0
    blt cr1, lbl_fn_8021D9D4_00000D9C
    lis r5, 0x8000
    subi r0, r5, 0x2
    cmpw r29, r0
    bgt lbl_fn_8021D9D4_00000D9C
    li r8, 0x1
lbl_fn_8021D9D4_00000D9C:
    cmpwi r8, 0x0
    beq lbl_fn_8021D9D4_00000E60
    addi r5, r7, 0x7
    add r0, r3, r31
    srwi r5, r5, 3
    mtctr r5
    cmpwi r7, 0x0
    ble lbl_fn_8021D9D4_00000E60
lbl_fn_8021D9D4_00000DBC:
    addi r5, r4, 0x1
    add r9, r0, r6
    mulli r8, r5, 0x18
    addi r7, r4, 0x2
    addi r5, r4, 0x3
    lwz r25, 0x20(r9)
    addi r9, r4, 0x4
    mulli r11, r7, 0x18
    add r7, r0, r8
    addi r8, r4, 0x5
    lwz r12, 0x20(r7)
    mulli r10, r5, 0x18
    addi r7, r4, 0x6
    addi r5, r4, 0x7
    add r11, r0, r11
    mulli r9, r9, 0x18
    add r30, r30, r25
    add r10, r0, r10
    lwz r11, 0x20(r11)
    add r30, r30, r12
    lwz r10, 0x20(r10)
    mulli r8, r8, 0x18
    add r9, r0, r9
    add r30, r30, r11
    lwz r9, 0x20(r9)
    addi r4, r4, 0x8
    mulli r7, r7, 0x18
    add r8, r0, r8
    add r30, r30, r10
    lwz r8, 0x20(r8)
    mulli r5, r5, 0x18
    addi r6, r6, 0xc0
    add r7, r0, r7
    add r30, r30, r9
    lwz r7, 0x20(r7)
    add r5, r0, r5
    add r30, r30, r8
    lwz r5, 0x20(r5)
    add r30, r30, r7
    add r30, r30, r5
    bdnz lbl_fn_8021D9D4_00000DBC
lbl_fn_8021D9D4_00000E60:
    subf r0, r4, r29
    add r5, r3, r31
    mulli r3, r4, 0x18
    mtctr r0
    cmpw r4, r29
    bge lbl_fn_8021D9D4_00000E8C
lbl_fn_8021D9D4_00000E78:
    add r4, r5, r3
    addi r3, r3, 0x18
    lwz r0, 0x20(r4)
    add r30, r30, r0
    bdnz lbl_fn_8021D9D4_00000E78
lbl_fn_8021D9D4_00000E8C:
    cmpwi r30, 0x0
    bgt lbl_fn_8021D9D4_00000E9C
    li r3, 0x0
    b lbl_fn_8021D9D4_00000F14
lbl_fn_8021D9D4_00000E9C:
    bl fn_80680CF8
    divw r0, r3, r30
    add r5, r26, r31
    li r4, 0x0
    mullw r0, r0, r30
    subf r6, r0, r3
    mtctr r29
    cmpwi r29, 0x0
    ble lbl_fn_8021D9D4_00000F10
lbl_fn_8021D9D4_00000EC0:
    add r3, r5, r4
    lwz r0, 0x20(r3)
    cmpw r6, r0
    bge lbl_fn_8021D9D4_00000F04
    add r0, r26, r31
    lis r5, lbl_807426E8@ha
    add r6, r0, r4
    mr r3, r28
    lwz r0, 0xc(r6)
    addi r5, r5, lbl_807426E8@l
    stw r0, 0x0(r27)
    addi r4, r5, 0x17
    addi r5, r6, 0x10
    crclr 6
    bl sprintf
    li r3, 0x1
    b lbl_fn_8021D9D4_00000F14
lbl_fn_8021D9D4_00000F04:
    subf r6, r0, r6
    addi r4, r4, 0x18
    bdnz lbl_fn_8021D9D4_00000EC0
lbl_fn_8021D9D4_00000F10:
    li r3, 0x0
lbl_fn_8021D9D4_00000F14:
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8021DBEC(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    lis r3, lbl_807772D0@ha
    li r4, 0x0
    stw r0, 0x664(r1)
    li r0, 0x0
    addi r3, r3, lbl_807772D0@l
    li r5, 0x400
    stmw r26, 0x648(r1)
    stw r3, 0xc(r1)
    addi r3, r1, 0x1c
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x63c(r1)
    bl memset
    addi r3, r1, 0x61c
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0xc
    addi r4, r4, lbl_807772B0@l
    stw r4, 0xc(r1)
    la r4, lbl_8087D720
    bl fn_8005B6E8
    lwz r0, lbl_8087F320
    cmpwi r0, 0x0
    bne lbl_fn_8021DBEC_00001178
    lwz r3, lbl_8087F518
    addi r5, r1, 0x8
    lwz r4, lbl_80882FA4
    li r6, 0x20
    bl fn_8046DC5C
    lwz r12, 0xc(r1)
    mr r28, r3
    mr r4, r28
    addi r3, r1, 0xc
    lwz r12, 0x8(r12)
    lwz r5, 0x8(r1)
    mtctr r12
    bctrl
    lis r30, lbl_807426E8@ha
    b lbl_fn_8021DBEC_00001008
lbl_fn_8021DBEC_00000FD8:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_8021DBEC_00001008
    addi r4, r30, lbl_807426E8@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8021DBEC_00001008
    lwz r3, lbl_8087F324
    addi r0, r3, 0x1
    stw r0, lbl_8087F324
lbl_fn_8021DBEC_00001008:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8021DBEC_00000FD8
    lwz r29, lbl_8087F324
    lis r30, lbl_807426E8@ha
    addi r31, r30, lbl_807426E8@l
    li r4, 0xc
    mulli r3, r29, 0x108
    li r7, 0x0
    addi r5, r31, 0x12
    mr r6, r5
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_8021DE50@ha
    mr r7, r29
    addi r4, r4, fn_8021DE50@l
    li r5, 0x0
    li r6, 0x108
    bl fn_80695720
    stw r3, lbl_8087F320
    mr r4, r28
    lwz r12, 0xc(r1)
    addi r3, r1, 0xc
    lwz r5, 0x8(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    li r29, 0x0
    b lbl_fn_8021DBEC_0000115C
lbl_fn_8021DBEC_00001080:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_8021DBEC_0000115C
    addi r4, r30, lbl_807426E8@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8021DBEC_0000115C
    lwz r0, lbl_8087F320
    addi r3, r1, 0xc
    add r27, r0, r29
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x0(r27)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x4(r27)
    li r26, 0x0
    b lbl_fn_8021DBEC_00001148
lbl_fn_8021DBEC_000010D4:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_8021DBEC_00001148
    addi r4, r31, 0x13
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8021DBEC_00001158
    cmpwi r26, 0x10
    bge lbl_fn_8021DBEC_00001158
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x8(r27)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x48(r27)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x88(r27)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0xc8(r27)
    addi r27, r27, 0x4
    addi r26, r26, 0x1
lbl_fn_8021DBEC_00001148:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8021DBEC_000010D4
lbl_fn_8021DBEC_00001158:
    addi r29, r29, 0x108
lbl_fn_8021DBEC_0000115C:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8021DBEC_00001080
    lwz r3, lbl_8087F518
    mr r4, r28
    bl fn_8046DD20
lbl_fn_8021DBEC_00001178:
    lmw r26, 0x648(r1)
    lwz r0, 0x664(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}

asm void fn_8021DE50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x108
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl memset
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8021DE88(void)
{
    nofralloc
    lwz r0, lbl_8087F324
    lwz r4, lbl_8087F320
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8021DE88_00001200
lbl_fn_8021DE88_000011D8:
    lwz r0, 0x0(r4)
    cmpw r0, r3
    bgt lbl_fn_8021DE88_000011F8
    lwz r0, 0x4(r4)
    cmpw r3, r0
    bgt lbl_fn_8021DE88_000011F8
    mr r3, r4
    blr
lbl_fn_8021DE88_000011F8:
    addi r4, r4, 0x108
    bdnz lbl_fn_8021DE88_000011D8
lbl_fn_8021DE88_00001200:
    li r3, 0x0
    blr
}

asm void fn_8021DECC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x2
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    lfs f31, lbl_80882FA8
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    li r4, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    mtctr r0
lbl_fn_8021DECC_0000124C:
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8021DECC_000012F8
    lfs f0, 0xc8(r3)
    lwz r0, 0xc(r3)
    fadds f31, f31, f0
    cmpwi r0, 0x0
    ble lbl_fn_8021DECC_000012F8
    lfs f0, 0xcc(r3)
    lwz r0, 0x10(r3)
    fadds f31, f31, f0
    cmpwi r0, 0x0
    ble lbl_fn_8021DECC_000012F8
    lfs f0, 0xd0(r3)
    lwz r0, 0x14(r3)
    fadds f31, f31, f0
    cmpwi r0, 0x0
    ble lbl_fn_8021DECC_000012F8
    lfs f0, 0xd4(r3)
    lwz r0, 0x18(r3)
    fadds f31, f31, f0
    cmpwi r0, 0x0
    ble lbl_fn_8021DECC_000012F8
    lfs f0, 0xd8(r3)
    lwz r0, 0x1c(r3)
    fadds f31, f31, f0
    cmpwi r0, 0x0
    ble lbl_fn_8021DECC_000012F8
    lfs f0, 0xdc(r3)
    lwz r0, 0x20(r3)
    fadds f31, f31, f0
    cmpwi r0, 0x0
    ble lbl_fn_8021DECC_000012F8
    lfs f0, 0xe0(r3)
    lwz r0, 0x24(r3)
    fadds f31, f31, f0
    cmpwi r0, 0x0
    ble lbl_fn_8021DECC_000012F8
    lfs f0, 0xe4(r3)
    addi r3, r3, 0x20
    addi r4, r4, 0x7
    fadds f31, f31, f0
    bdnz lbl_fn_8021DECC_0000124C
lbl_fn_8021DECC_000012F8:
    lfs f0, lbl_80882FA8
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_8021DECC_00001310
    li r3, 0x0
    b lbl_fn_8021DECC_000013C4
lbl_fn_8021DECC_00001310:
    bl fn_80680CF8
    lis r4, 0x4178
    lis r0, 0x4330
    addi r5, r4, 0x749f
    stw r0, 0x8(r1)
    mulhw r5, r5, r3
    lis r4, lbl_807426E0@ha
    lfd f2, lbl_807426E0@l(r4)
    li r0, 0x10
    lfs f0, lbl_80882FAC
    mr r6, r28
    srawi r4, r5, 8
    li r7, 0x0
    srwi r5, r4, 31
    add r4, r4, r5
    mulli r4, r4, 0x3e9
    subf r3, r4, r3
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fmuls f1, f31, f0
    mtctr r0
lbl_fn_8021DECC_00001370:
    lwz r0, 0x8(r6)
    cmpwi r0, 0x0
    ble lbl_fn_8021DECC_000013C0
    lfs f0, 0xc8(r6)
    fcmpo cr0, f1, f0
    bge lbl_fn_8021DECC_000013B0
    slwi r0, r7, 2
    li r3, 0x1
    add r4, r28, r0
    lwz r0, 0x8(r4)
    stw r0, 0x0(r29)
    lwz r0, 0x48(r4)
    stw r0, 0x0(r30)
    lwz r0, 0x88(r4)
    stw r0, 0x0(r31)
    b lbl_fn_8021DECC_000013C4
lbl_fn_8021DECC_000013B0:
    fsubs f1, f1, f0
    addi r6, r6, 0x4
    addi r7, r7, 0x1
    bdnz lbl_fn_8021DECC_00001370
lbl_fn_8021DECC_000013C0:
    li r3, 0x0
lbl_fn_8021DECC_000013C4:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8021E0B0(void)
{
    nofralloc
    stwu r1, -0x670(r1)
    mflr r0
    lis r3, lbl_807772D0@ha
    li r4, 0x0
    stw r0, 0x674(r1)
    addi r3, r3, lbl_807772D0@l
    li r5, 0x400
    stmw r22, 0x648(r1)
    li r28, 0x0
    stw r3, 0xc(r1)
    addi r3, r1, 0x1c
    stw r28, 0x10(r1)
    stw r28, 0x14(r1)
    stw r28, 0x18(r1)
    stw r28, 0x63c(r1)
    bl memset
    addi r3, r1, 0x61c
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0xc
    addi r4, r4, lbl_807772B0@l
    stw r4, 0xc(r1)
    la r4, lbl_8087D720
    bl fn_8005B6E8
    lwz r0, lbl_8087F328
    cmpwi r0, 0x0
    bne lbl_fn_8021E0B0_00001744
    lwz r3, lbl_8087F518
    addi r5, r1, 0x8
    lwz r4, lbl_80882FB0
    li r6, 0x20
    bl fn_8046DC5C
    stw r28, lbl_8087F330
    mr r31, r3
    lwz r12, 0xc(r1)
    mr r4, r31
    stw r28, lbl_8087F334
    addi r3, r1, 0xc
    lwz r5, 0x8(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0xc
    bl fn_8005B5F8
    addi r3, r1, 0xc
    bl fn_8005B5F8
    lis r29, lbl_80742730@ha
    addi r28, r29, lbl_80742730@l
lbl_fn_8021E0B0_000014B4:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_8021E0B0_00001550
    cmpwi r0, 0x23
    beq lbl_fn_8021E0B0_00001550
    addi r4, r29, lbl_80742730@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8021E0B0_00001550
    lwz r3, lbl_8087F330
    li r24, 0x0
    addi r0, r3, 0x1
    stw r0, lbl_8087F330
    b lbl_fn_8021E0B0_00001540
lbl_fn_8021E0B0_000014F8:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_8021E0B0_00001540
    cmpwi r0, 0x23
    beq lbl_fn_8021E0B0_00001540
    addi r4, r28, 0x6
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8021E0B0_00001550
    lwz r3, lbl_8087F334
    addi r24, r24, 0x1
    cmpwi r24, 0x10
    addi r0, r3, 0x1
    stw r0, lbl_8087F334
    bge lbl_fn_8021E0B0_00001550
lbl_fn_8021E0B0_00001540:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8021E0B0_000014F8
lbl_fn_8021E0B0_00001550:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8021E0B0_000014B4
    lwz r30, lbl_8087F330
    lis r28, lbl_80742730@ha
    addi r29, r28, lbl_80742730@l
    li r4, 0x3
    mulli r3, r30, 0xc
    li r7, 0x0
    addi r5, r29, 0xa
    mr r6, r5
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_8021E41C@ha
    mr r7, r30
    addi r4, r4, fn_8021E41C@l
    li r5, 0x0
    li r6, 0xc
    bl fn_80695720
    lwz r30, lbl_8087F334
    addi r5, r29, 0xa
    stw r3, lbl_8087F328
    mr r6, r5
    mulli r3, r30, 0xc
    li r4, 0x3
    li r7, 0x0
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_8021E42C@ha
    mr r7, r30
    addi r4, r4, fn_8021E42C@l
    li r5, 0x0
    li r6, 0xc
    bl fn_80695720
    stw r3, lbl_8087F32C
    mr r4, r31
    lwz r12, 0xc(r1)
    addi r3, r1, 0xc
    lwz r5, 0x8(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0xc
    bl fn_8005B5F8
    addi r3, r1, 0xc
    bl fn_8005B5F8
    li r26, 0x0
    li r25, 0x0
    li r30, 0x0
lbl_fn_8021E0B0_00001618:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_8021E0B0_00001728
    cmpwi r0, 0x23
    beq lbl_fn_8021E0B0_00001728
    addi r4, r28, lbl_80742730@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8021E0B0_00001728
    lwz r0, lbl_8087F328
    addi r3, r1, 0xc
    add r23, r0, r26
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x0(r23)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lwz r0, lbl_8087F32C
    mr r27, r25
    li r22, 0x0
    add r0, r0, r25
    stw r0, 0x4(r23)
    stw r30, 0x8(r23)
    b lbl_fn_8021E0B0_00001714
lbl_fn_8021E0B0_00001684:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r24, r3
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_8021E0B0_00001714
    cmpwi r0, 0x23
    beq lbl_fn_8021E0B0_00001714
    addi r4, r29, 0x6
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8021E0B0_00001724
    lwz r0, lbl_8087F32C
    mr r3, r24
    lwz r4, 0x8(r23)
    add r24, r0, r27
    addi r0, r4, 0x1
    stw r0, 0x8(r23)
    bl fn_800DC288
    stfs f1, 0x8(r24)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x0(r24)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    addi r22, r22, 0x1
    stw r3, 0x4(r24)
    cmpwi r22, 0x10
    addi r27, r27, 0xc
    addi r25, r25, 0xc
    bge lbl_fn_8021E0B0_00001724
lbl_fn_8021E0B0_00001714:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8021E0B0_00001684
lbl_fn_8021E0B0_00001724:
    addi r26, r26, 0xc
lbl_fn_8021E0B0_00001728:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8021E0B0_00001618
    lwz r3, lbl_8087F518
    mr r4, r31
    bl fn_8046DD20
lbl_fn_8021E0B0_00001744:
    lmw r22, 0x648(r1)
    lwz r0, 0x674(r1)
    mtlr r0
    addi r1, r1, 0x670
    blr
}

asm void fn_8021E41C(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_8021E42C(void)
{
    nofralloc
    lfs f0, lbl_80882FB4
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stfs f0, 0x8(r3)
    blr
}

asm void fn_8021E444(void)
{
    nofralloc
    lwz r5, lbl_8087F328
    li r6, 0x0
    lwz r0, lbl_8087F330
    mr r4, r5
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8021E444_000017C0
lbl_fn_8021E444_0000179C:
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_8021E444_000017B4
    mulli r0, r6, 0xc
    add r3, r5, r0
    blr
lbl_fn_8021E444_000017B4:
    addi r4, r4, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_8021E444_0000179C
lbl_fn_8021E444_000017C0:
    li r3, 0x0
    blr
}

asm void fn_8021E48C(void)
{
    nofralloc
    lwz r7, lbl_8087F328
    li r5, 0x0
    lwz r0, lbl_8087F330
    mr r6, r7
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8021E48C_00001808
lbl_fn_8021E48C_000017E4:
    lwz r0, 0x0(r6)
    cmpw r3, r0
    bne lbl_fn_8021E48C_000017FC
    mulli r0, r5, 0xc
    add r3, r7, r0
    b lbl_fn_8021E48C_0000180C
lbl_fn_8021E48C_000017FC:
    addi r6, r6, 0xc
    addi r5, r5, 0x1
    bdnz lbl_fn_8021E48C_000017E4
lbl_fn_8021E48C_00001808:
    li r3, 0x0
lbl_fn_8021E48C_0000180C:
    cmpwi r3, 0x0
    beq lbl_fn_8021E48C_00001818
    b fn_8021E5A4
lbl_fn_8021E48C_00001818:
    li r3, -0x1
    blr
}

asm void fn_8021E4E4(void)
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
    li r3, 0x0
    lwz r7, lbl_8087F328
    lwz r0, lbl_8087F330
    mr r4, r7
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8021E4E4_00001880
lbl_fn_8021E4E4_0000185C:
    lwz r0, 0x0(r4)
    cmpw r5, r0
    bne lbl_fn_8021E4E4_00001874
    mulli r0, r3, 0xc
    add r31, r7, r0
    b lbl_fn_8021E4E4_00001884
lbl_fn_8021E4E4_00001874:
    addi r4, r4, 0xc
    addi r3, r3, 0x1
    bdnz lbl_fn_8021E4E4_0000185C
lbl_fn_8021E4E4_00001880:
    li r31, 0x0
lbl_fn_8021E4E4_00001884:
    cmpwi r31, 0x0
    beq lbl_fn_8021E4E4_000018C0
    mr r3, r31
    mr r4, r6
    bl fn_8021E5A4
    cmpwi r3, 0x0
    blt lbl_fn_8021E4E4_000018C0
    mulli r0, r3, 0xc
    lwz r4, 0x4(r31)
    li r3, 0x1
    lwzux r0, r4, r0
    stw r0, 0x0(r29)
    lwz r0, 0x4(r4)
    stw r0, 0x0(r30)
    b lbl_fn_8021E4E4_000018C4
lbl_fn_8021E4E4_000018C0:
    li r3, 0x0
lbl_fn_8021E4E4_000018C4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8021E5A4(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0x60
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    stfd f30, 0x90(r1)
    psq_st f30, 0x98(r1), 0, 0
    stfd f29, 0x80(r1)
    psq_st f29, 0x88(r1), 0, 0
    stfd f28, 0x70(r1)
    psq_st f28, 0x78(r1), 0, 0
    stfd f27, 0x60(r1)
    psq_st f27, 0x68(r1), 0, 0
    bl _savegpr_19
    lfs f28, lbl_80882FB4
    mr r31, r3
    lfs f30, lbl_80882FBC
    mr r21, r4
    lfs f29, lbl_80882FC0
    rlwinm r25, r4, 0, 30, 30
    rlwinm r30, r4, 0, 29, 29
    rlwinm r29, r4, 0, 28, 28
    rlwinm r28, r4, 0, 27, 27
    rlwinm r27, r4, 0, 26, 26
    rlwinm r26, r4, 0, 25, 25
    li r23, -0x1
    li r22, 0x0
    li r20, 0x0
    b lbl_fn_8021E5A4_00001B2C
lbl_fn_8021E5A4_00001958:
    lwz r0, 0x4(r31)
    cmplwi r25, 0x2
    lfs f31, lbl_80882FB8
    add r24, r0, r20
    bne lbl_fn_8021E5A4_000019D4
    lwz r19, 0x0(r24)
    subi r0, r19, 0x2714
    cmplwi r0, 0x2
    ble lbl_fn_8021E5A4_00001994
    subi r0, r19, 0x2718
    cmplwi r0, 0x2
    ble lbl_fn_8021E5A4_00001994
    subi r0, r19, 0x2711
    cmplwi r0, 0x1
    bgt lbl_fn_8021E5A4_0000199C
lbl_fn_8021E5A4_00001994:
    li r0, 0x0
    b lbl_fn_8021E5A4_000019C8
lbl_fn_8021E5A4_0000199C:
    mr r3, r19
    bl fn_80206B9C
    cmpwi r3, 0x0
    bne lbl_fn_8021E5A4_000019BC
    mr r3, r19
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_8021E5A4_000019C4
lbl_fn_8021E5A4_000019BC:
    li r0, 0x0
    b lbl_fn_8021E5A4_000019C8
lbl_fn_8021E5A4_000019C4:
    li r0, 0x1
lbl_fn_8021E5A4_000019C8:
    cmpwi r0, 0x0
    beq lbl_fn_8021E5A4_000019D4
    fmuls f31, f31, f30
lbl_fn_8021E5A4_000019D4:
    cmplwi r30, 0x4
    bne lbl_fn_8021E5A4_00001A08
    lwz r0, 0x0(r24)
    cmpwi r0, 0x2714
    beq lbl_fn_8021E5A4_000019F0
    cmpwi r0, 0x2719
    bne lbl_fn_8021E5A4_000019F8
lbl_fn_8021E5A4_000019F0:
    li r0, 0x1
    b lbl_fn_8021E5A4_000019FC
lbl_fn_8021E5A4_000019F8:
    li r0, 0x0
lbl_fn_8021E5A4_000019FC:
    cmpwi r0, 0x0
    beq lbl_fn_8021E5A4_00001A08
    fmuls f31, f31, f29
lbl_fn_8021E5A4_00001A08:
    cmplwi r29, 0x8
    bne lbl_fn_8021E5A4_00001A3C
    lwz r0, 0x0(r24)
    cmpwi r0, 0x2714
    beq lbl_fn_8021E5A4_00001A24
    cmpwi r0, 0x2719
    bne lbl_fn_8021E5A4_00001A2C
lbl_fn_8021E5A4_00001A24:
    li r0, 0x1
    b lbl_fn_8021E5A4_00001A30
lbl_fn_8021E5A4_00001A2C:
    li r0, 0x0
lbl_fn_8021E5A4_00001A30:
    cmpwi r0, 0x0
    beq lbl_fn_8021E5A4_00001A3C
    lfs f31, lbl_80882FB4
lbl_fn_8021E5A4_00001A3C:
    cmplwi r28, 0x10
    bne lbl_fn_8021E5A4_00001A88
    lwz r3, 0x0(r24)
    cmpwi r3, 0x0
    ble lbl_fn_8021E5A4_00001A58
    bl fn_80211480
    b lbl_fn_8021E5A4_00001A5C
lbl_fn_8021E5A4_00001A58:
    li r3, 0x0
lbl_fn_8021E5A4_00001A5C:
    cmpwi r3, 0x0
    beq lbl_fn_8021E5A4_00001A78
    lha r0, 0xbc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8021E5A4_00001A78
    li r0, 0x1
    b lbl_fn_8021E5A4_00001A7C
lbl_fn_8021E5A4_00001A78:
    li r0, 0x0
lbl_fn_8021E5A4_00001A7C:
    cmpwi r0, 0x0
    beq lbl_fn_8021E5A4_00001A88
    lfs f31, lbl_80882FB4
lbl_fn_8021E5A4_00001A88:
    cmplwi r27, 0x20
    bne lbl_fn_8021E5A4_00001AA4
    lwz r3, 0x0(r24)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_8021E5A4_00001AA4
    lfs f31, lbl_80882FB4
lbl_fn_8021E5A4_00001AA4:
    cmplwi r26, 0x40
    bne lbl_fn_8021E5A4_00001AF0
    lwz r3, 0x0(r24)
    cmpwi r3, 0x0
    ble lbl_fn_8021E5A4_00001AC0
    bl fn_80211480
    b lbl_fn_8021E5A4_00001AC4
lbl_fn_8021E5A4_00001AC0:
    li r3, 0x0
lbl_fn_8021E5A4_00001AC4:
    cmpwi r3, 0x0
    beq lbl_fn_8021E5A4_00001AE0
    lha r0, 0xbc(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8021E5A4_00001AE0
    li r0, 0x1
    b lbl_fn_8021E5A4_00001AE4
lbl_fn_8021E5A4_00001AE0:
    li r0, 0x0
lbl_fn_8021E5A4_00001AE4:
    cmpwi r0, 0x0
    beq lbl_fn_8021E5A4_00001AF0
    lfs f31, lbl_80882FB4
lbl_fn_8021E5A4_00001AF0:
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_8021E5A4_00001B1C
    lwz r0, 0x540(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8021E5A4_00001B1C
    lwz r3, 0x0(r24)
    subi r0, r3, 0x44d
    cmplwi r0, 0x3
    bgt lbl_fn_8021E5A4_00001B1C
    lfs f31, lbl_80882FB4
lbl_fn_8021E5A4_00001B1C:
    lfs f0, 0x8(r24)
    addi r22, r22, 0x1
    addi r20, r20, 0xc
    fmadds f28, f0, f31, f28
lbl_fn_8021E5A4_00001B2C:
    lwz r0, 0x8(r31)
    cmplw r22, r0
    blt lbl_fn_8021E5A4_00001958
    lfs f0, lbl_80882FB4
    fcmpo cr0, f28, f0
    ble lbl_fn_8021E5A4_00001DFC
    clrlwi r0, r21, 31
    cmplwi r0, 0x1
    beq lbl_fn_8021E5A4_00001B60
    lfs f0, lbl_80882FC4
    fcmpo cr0, f28, f0
    bge lbl_fn_8021E5A4_00001B60
    fmr f28, f0
lbl_fn_8021E5A4_00001B60:
    bl fn_80680CF8
    lis r4, 0x4178
    lis r0, 0x4330
    addi r5, r4, 0x749f
    stw r0, 0x8(r1)
    mulhw r5, r5, r3
    lis r4, lbl_80742728@ha
    lfd f3, lbl_80742728@l(r4)
    rlwinm r26, r21, 0, 30, 30
    stw r0, 0x18(r1)
    rlwinm r27, r21, 0, 29, 29
    srawi r4, r5, 8
    lfs f0, lbl_80882FC8
    srwi r5, r4, 31
    lfs f1, lbl_80882FC4
    add r0, r4, r5
    lfs f29, lbl_80882FBC
    mulli r0, r0, 0x3e9
    lfs f30, lbl_80882FC0
    lfs f31, lbl_80882FCC
    rlwinm r28, r21, 0, 28, 28
    rlwinm r29, r21, 0, 27, 27
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    rlwinm r30, r21, 0, 26, 26
    rlwinm r20, r21, 0, 25, 25
    lfd f2, 0x8(r1)
    li r22, 0x0
    li r21, 0x0
    fsubs f2, f2, f3
    fdivs f0, f2, f0
    fmuls f0, f28, f0
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f3
    fdivs f28, f0, f1
    b lbl_fn_8021E5A4_00001DF0
lbl_fn_8021E5A4_00001C0C:
    lwz r0, 0x4(r31)
    cmplwi r26, 0x2
    lfs f27, lbl_80882FB8
    add r24, r0, r21
    bne lbl_fn_8021E5A4_00001C88
    lwz r19, 0x0(r24)
    subi r0, r19, 0x2714
    cmplwi r0, 0x2
    ble lbl_fn_8021E5A4_00001C48
    subi r0, r19, 0x2718
    cmplwi r0, 0x2
    ble lbl_fn_8021E5A4_00001C48
    subi r0, r19, 0x2711
    cmplwi r0, 0x1
    bgt lbl_fn_8021E5A4_00001C50
lbl_fn_8021E5A4_00001C48:
    li r0, 0x0
    b lbl_fn_8021E5A4_00001C7C
lbl_fn_8021E5A4_00001C50:
    mr r3, r19
    bl fn_80206B9C
    cmpwi r3, 0x0
    bne lbl_fn_8021E5A4_00001C70
    mr r3, r19
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_8021E5A4_00001C78
lbl_fn_8021E5A4_00001C70:
    li r0, 0x0
    b lbl_fn_8021E5A4_00001C7C
lbl_fn_8021E5A4_00001C78:
    li r0, 0x1
lbl_fn_8021E5A4_00001C7C:
    cmpwi r0, 0x0
    beq lbl_fn_8021E5A4_00001C88
    fmuls f27, f27, f29
lbl_fn_8021E5A4_00001C88:
    cmplwi r27, 0x4
    bne lbl_fn_8021E5A4_00001CBC
    lwz r0, 0x0(r24)
    cmpwi r0, 0x2714
    beq lbl_fn_8021E5A4_00001CA4
    cmpwi r0, 0x2719
    bne lbl_fn_8021E5A4_00001CAC
lbl_fn_8021E5A4_00001CA4:
    li r0, 0x1
    b lbl_fn_8021E5A4_00001CB0
lbl_fn_8021E5A4_00001CAC:
    li r0, 0x0
lbl_fn_8021E5A4_00001CB0:
    cmpwi r0, 0x0
    beq lbl_fn_8021E5A4_00001CBC
    fmuls f27, f27, f30
lbl_fn_8021E5A4_00001CBC:
    cmplwi r28, 0x8
    bne lbl_fn_8021E5A4_00001CF0
    lwz r0, 0x0(r24)
    cmpwi r0, 0x2714
    beq lbl_fn_8021E5A4_00001CD8
    cmpwi r0, 0x2719
    bne lbl_fn_8021E5A4_00001CE0
lbl_fn_8021E5A4_00001CD8:
    li r0, 0x1
    b lbl_fn_8021E5A4_00001CE4
lbl_fn_8021E5A4_00001CE0:
    li r0, 0x0
lbl_fn_8021E5A4_00001CE4:
    cmpwi r0, 0x0
    beq lbl_fn_8021E5A4_00001CF0
    lfs f27, lbl_80882FB4
lbl_fn_8021E5A4_00001CF0:
    cmplwi r29, 0x10
    bne lbl_fn_8021E5A4_00001D3C
    lwz r3, 0x0(r24)
    cmpwi r3, 0x0
    ble lbl_fn_8021E5A4_00001D0C
    bl fn_80211480
    b lbl_fn_8021E5A4_00001D10
lbl_fn_8021E5A4_00001D0C:
    li r3, 0x0
lbl_fn_8021E5A4_00001D10:
    cmpwi r3, 0x0
    beq lbl_fn_8021E5A4_00001D2C
    lha r0, 0xbc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8021E5A4_00001D2C
    li r0, 0x1
    b lbl_fn_8021E5A4_00001D30
lbl_fn_8021E5A4_00001D2C:
    li r0, 0x0
lbl_fn_8021E5A4_00001D30:
    cmpwi r0, 0x0
    beq lbl_fn_8021E5A4_00001D3C
    lfs f27, lbl_80882FB4
lbl_fn_8021E5A4_00001D3C:
    cmplwi r30, 0x20
    bne lbl_fn_8021E5A4_00001D58
    lwz r3, 0x0(r24)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_8021E5A4_00001D58
    lfs f27, lbl_80882FB4
lbl_fn_8021E5A4_00001D58:
    cmplwi r20, 0x40
    bne lbl_fn_8021E5A4_00001DA4
    lwz r3, 0x0(r24)
    cmpwi r3, 0x0
    ble lbl_fn_8021E5A4_00001D74
    bl fn_80211480
    b lbl_fn_8021E5A4_00001D78
lbl_fn_8021E5A4_00001D74:
    li r3, 0x0
lbl_fn_8021E5A4_00001D78:
    cmpwi r3, 0x0
    beq lbl_fn_8021E5A4_00001D94
    lha r0, 0xbc(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8021E5A4_00001D94
    li r0, 0x1
    b lbl_fn_8021E5A4_00001D98
lbl_fn_8021E5A4_00001D94:
    li r0, 0x0
lbl_fn_8021E5A4_00001D98:
    cmpwi r0, 0x0
    beq lbl_fn_8021E5A4_00001DA4
    lfs f27, lbl_80882FB4
lbl_fn_8021E5A4_00001DA4:
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_8021E5A4_00001DD0
    lwz r0, 0x540(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8021E5A4_00001DD0
    lwz r3, 0x0(r24)
    subi r0, r3, 0x44d
    cmplwi r0, 0x3
    bgt lbl_fn_8021E5A4_00001DD0
    lfs f27, lbl_80882FB4
lbl_fn_8021E5A4_00001DD0:
    lfs f0, 0x8(r24)
    fnmsubs f28, f0, f27, f28
    fcmpo cr0, f28, f31
    bge lbl_fn_8021E5A4_00001DE8
    mr r23, r22
    b lbl_fn_8021E5A4_00001DFC
lbl_fn_8021E5A4_00001DE8:
    addi r22, r22, 0x1
    addi r21, r21, 0xc
lbl_fn_8021E5A4_00001DF0:
    lwz r0, 0x8(r31)
    cmplw r22, r0
    blt lbl_fn_8021E5A4_00001C0C
lbl_fn_8021E5A4_00001DFC:
    psq_l f31, 0xa8(r1), 0, 0
    mr r3, r23
    lfd f31, 0xa0(r1)
    psq_l f30, 0x98(r1), 0, 0
    lfd f30, 0x90(r1)
    psq_l f29, 0x88(r1), 0, 0
    lfd f29, 0x80(r1)
    psq_l f28, 0x78(r1), 0, 0
    lfd f28, 0x70(r1)
    psq_l f27, 0x68(r1), 0, 0
    lfd f27, 0x60(r1)
    addi r11, r1, 0x60
    bl _restgpr_19
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}
