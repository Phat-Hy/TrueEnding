#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void dtor_80084684(void);
extern void fn_8005B710(void);
extern void fn_8005B8F8(void);
extern void fn_8005B9AC(void);
extern void fn_8006BA30(void);
extern void fn_800846FC(void);
extern void fn_800DC1DC(void);
extern void fn_800DD3FC(void);
extern void fn_80206B14(void);
extern void fn_80209294(void);
extern void fn_802092F8(void);
extern void fn_8046DC5C(void);
extern void fn_8046DD20(void);
extern void fn_80684600(void);
extern void fn_80686A48(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_80783100[];
extern u8 jumptable_80783220[];
extern u8 jumptable_80783274[];
extern u8 jumptable_80783394[];
extern u8 jumptable_807833B4[];
extern u8 lbl_80742650[];
extern u8 lbl_80742658[];
extern u8 lbl_8077A070[];
extern u8 lbl_8077A090[];
extern u8 lbl_80782FF0[];
extern u8 lbl_807830B8[];
extern u8 lbl_807834D4[];
extern u8 lbl_807C7FF8[];
extern u8 lbl_807C8008[];

/* Small data declarations */
extern u32 lbl_8087DBA0;
extern u32 lbl_8087DBA4;
extern u32 lbl_8087F2E8;
extern u32 lbl_8087F2F0;
extern u32 lbl_8087F2F4;
extern u32 lbl_8087F2F8;
extern u32 lbl_8087F2FC;
extern u32 lbl_8087F300;
extern u32 lbl_8087F518;
extern u32 lbl_808813D0;
extern u32 lbl_80882F84;
extern u32 lbl_80882F88;
extern u32 lbl_80882F8C;
extern u32 lbl_80882F90;
extern u32 lbl_80882F94;

/* Function declarations */
void fn_8021B2F8(void);
void fn_8021BE40(void);
void fn_8021BE80(void);
void fn_8021BE98(void);
void fn_8021BFA0(void);
void fn_8021C3F4(void);
void fn_8021C6A4(void);
void fn_8021CB7C(void);
void fn_8021CC50(void);

asm void fn_8021B2F8(void)
{
    nofralloc
    stwu r1, -0xca0(r1)
    mflr r0
    lis r3, lbl_8077A090@ha
    li r4, 0x0
    stw r0, 0xca4(r1)
    li r0, 0x0
    addi r3, r3, lbl_8077A090@l
    li r5, 0x800
    stmw r18, 0xc68(r1)
    lis r31, lbl_807C7FF8@ha
    addi r31, r31, lbl_807C7FF8@l
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
    lwz r0, lbl_8087F2F4
    cmpwi r0, 0x0
    bne lbl_fn_8021B2F8_00000B34
    lwz r3, lbl_8087F518
    addi r5, r1, 0x8
    lwz r4, lbl_80882F84
    li r6, 0x20
    bl fn_8046DC5C
    lwz r4, 0x8(r1)
    mr r27, r3
    li r19, 0x0
    li r20, 0x0
    srwi r0, r4, 31
    li r30, 0x0
    add r0, r0, r4
    srawi. r4, r0, 1
    beq lbl_fn_8021B2F8_000000C0
    addi r0, r3, 0x2
    b lbl_fn_8021B2F8_000000C4
lbl_fn_8021B2F8_000000C0:
    mr r0, r27
lbl_fn_8021B2F8_000000C4:
    cmpwi r4, 0x0
    stw r0, 0x10(r1)
    beq lbl_fn_8021B2F8_000000D4
    subi r4, r4, 0x1
lbl_fn_8021B2F8_000000D4:
    li r29, 0x0
    stw r4, 0x14(r1)
    addi r28, r31, 0x10
    addi r24, r31, 0x28
    stw r29, 0x18(r1)
    addi r23, r31, 0x40
    addi r22, r31, 0x58
    addi r21, r31, 0x70
    addi r18, r31, 0x88
    lis r26, fn_8021BE80@ha
    lis r25, fn_8021BE40@ha
    b lbl_fn_8021B2F8_00000590
lbl_fn_8021B2F8_00000104:
    cmpwi r30, 0x0
    bne lbl_fn_8021B2F8_0000015C
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8021B2F8_00000590
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8021B2F8_00000150
    addi r3, r1, 0xc
    bl fn_8005B710
    bl fn_80686A48
    add r3, r3, r20
    addi r19, r19, 0x1
    addi r20, r3, 0x1
    b lbl_fn_8021B2F8_00000590
lbl_fn_8021B2F8_00000150:
    li r19, 0x0
    addi r30, r30, 0x1
    b lbl_fn_8021B2F8_00000590
lbl_fn_8021B2F8_0000015C:
    cmpwi r30, 0x1
    bne lbl_fn_8021B2F8_00000210
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8021B2F8_00000590
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8021B2F8_000001A8
    addi r3, r1, 0xc
    bl fn_8005B710
    bl fn_80686A48
    add r3, r3, r20
    addi r19, r19, 0x1
    addi r20, r3, 0x1
    b lbl_fn_8021B2F8_00000590
lbl_fn_8021B2F8_000001A8:
    lwz r3, 0x4(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8021B2F8_000001BC
    addi r4, r25, fn_8021BE40@l
    bl fn_80695A50
lbl_fn_8021B2F8_000001BC:
    cmpwi r19, 0x0
    stw r19, 0x10(r31)
    beq lbl_fn_8021B2F8_00000200
    mulli r3, r19, 0xc
    li r4, 0x0
    la r5, lbl_8087DBA4
    la r6, lbl_8087DBA0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r19
    addi r4, r26, fn_8021BE80@l
    addi r5, r25, fn_8021BE40@l
    li r6, 0xc
    bl fn_80695720
    stw r3, 0x4(r28)
    b lbl_fn_8021B2F8_00000204
lbl_fn_8021B2F8_00000200:
    stw r29, 0x4(r28)
lbl_fn_8021B2F8_00000204:
    li r19, 0x0
    addi r30, r30, 0x1
    b lbl_fn_8021B2F8_00000590
lbl_fn_8021B2F8_00000210:
    cmpwi r30, 0x2
    bne lbl_fn_8021B2F8_000002C4
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8021B2F8_00000590
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8021B2F8_0000025C
    addi r3, r1, 0xc
    bl fn_8005B710
    bl fn_80686A48
    add r3, r3, r20
    addi r19, r19, 0x1
    addi r20, r3, 0x1
    b lbl_fn_8021B2F8_00000590
lbl_fn_8021B2F8_0000025C:
    lwz r3, 0x4(r24)
    cmpwi r3, 0x0
    beq lbl_fn_8021B2F8_00000270
    addi r4, r25, fn_8021BE40@l
    bl fn_80695A50
lbl_fn_8021B2F8_00000270:
    cmpwi r19, 0x0
    stw r19, 0x28(r31)
    beq lbl_fn_8021B2F8_000002B4
    mulli r3, r19, 0xc
    li r4, 0x0
    la r5, lbl_8087DBA4
    la r6, lbl_8087DBA0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r19
    addi r4, r26, fn_8021BE80@l
    addi r5, r25, fn_8021BE40@l
    li r6, 0xc
    bl fn_80695720
    stw r3, 0x4(r24)
    b lbl_fn_8021B2F8_000002B8
lbl_fn_8021B2F8_000002B4:
    stw r29, 0x4(r24)
lbl_fn_8021B2F8_000002B8:
    li r19, 0x0
    addi r30, r30, 0x1
    b lbl_fn_8021B2F8_00000590
lbl_fn_8021B2F8_000002C4:
    cmpwi r30, 0x3
    bne lbl_fn_8021B2F8_00000378
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8021B2F8_00000590
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8021B2F8_00000310
    addi r3, r1, 0xc
    bl fn_8005B710
    bl fn_80686A48
    add r3, r3, r20
    addi r19, r19, 0x1
    addi r20, r3, 0x1
    b lbl_fn_8021B2F8_00000590
lbl_fn_8021B2F8_00000310:
    lwz r3, 0x4(r23)
    cmpwi r3, 0x0
    beq lbl_fn_8021B2F8_00000324
    addi r4, r25, fn_8021BE40@l
    bl fn_80695A50
lbl_fn_8021B2F8_00000324:
    cmpwi r19, 0x0
    stw r19, 0x40(r31)
    beq lbl_fn_8021B2F8_00000368
    mulli r3, r19, 0xc
    li r4, 0x0
    la r5, lbl_8087DBA4
    la r6, lbl_8087DBA0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r19
    addi r4, r26, fn_8021BE80@l
    addi r5, r25, fn_8021BE40@l
    li r6, 0xc
    bl fn_80695720
    stw r3, 0x4(r23)
    b lbl_fn_8021B2F8_0000036C
lbl_fn_8021B2F8_00000368:
    stw r29, 0x4(r23)
lbl_fn_8021B2F8_0000036C:
    li r19, 0x0
    addi r30, r30, 0x1
    b lbl_fn_8021B2F8_00000590
lbl_fn_8021B2F8_00000378:
    cmpwi r30, 0x4
    bne lbl_fn_8021B2F8_0000042C
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8021B2F8_00000590
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8021B2F8_000003C4
    addi r3, r1, 0xc
    bl fn_8005B710
    bl fn_80686A48
    add r3, r3, r20
    addi r19, r19, 0x1
    addi r20, r3, 0x1
    b lbl_fn_8021B2F8_00000590
lbl_fn_8021B2F8_000003C4:
    lwz r3, 0x4(r22)
    cmpwi r3, 0x0
    beq lbl_fn_8021B2F8_000003D8
    addi r4, r25, fn_8021BE40@l
    bl fn_80695A50
lbl_fn_8021B2F8_000003D8:
    cmpwi r19, 0x0
    stw r19, 0x58(r31)
    beq lbl_fn_8021B2F8_0000041C
    mulli r3, r19, 0xc
    li r4, 0x0
    la r5, lbl_8087DBA4
    la r6, lbl_8087DBA0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r19
    addi r4, r26, fn_8021BE80@l
    addi r5, r25, fn_8021BE40@l
    li r6, 0xc
    bl fn_80695720
    stw r3, 0x4(r22)
    b lbl_fn_8021B2F8_00000420
lbl_fn_8021B2F8_0000041C:
    stw r29, 0x4(r22)
lbl_fn_8021B2F8_00000420:
    li r19, 0x0
    addi r30, r30, 0x1
    b lbl_fn_8021B2F8_00000590
lbl_fn_8021B2F8_0000042C:
    cmpwi r30, 0x5
    bne lbl_fn_8021B2F8_000004E0
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8021B2F8_00000590
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8021B2F8_00000478
    addi r3, r1, 0xc
    bl fn_8005B710
    bl fn_80686A48
    add r3, r3, r20
    addi r19, r19, 0x1
    addi r20, r3, 0x1
    b lbl_fn_8021B2F8_00000590
lbl_fn_8021B2F8_00000478:
    lwz r3, 0x4(r21)
    cmpwi r3, 0x0
    beq lbl_fn_8021B2F8_0000048C
    addi r4, r25, fn_8021BE40@l
    bl fn_80695A50
lbl_fn_8021B2F8_0000048C:
    cmpwi r19, 0x0
    stw r19, 0x70(r31)
    beq lbl_fn_8021B2F8_000004D0
    mulli r3, r19, 0xc
    li r4, 0x0
    la r5, lbl_8087DBA4
    la r6, lbl_8087DBA0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r19
    addi r4, r26, fn_8021BE80@l
    addi r5, r25, fn_8021BE40@l
    li r6, 0xc
    bl fn_80695720
    stw r3, 0x4(r21)
    b lbl_fn_8021B2F8_000004D4
lbl_fn_8021B2F8_000004D0:
    stw r29, 0x4(r21)
lbl_fn_8021B2F8_000004D4:
    li r19, 0x0
    addi r30, r30, 0x1
    b lbl_fn_8021B2F8_00000590
lbl_fn_8021B2F8_000004E0:
    cmpwi r30, 0x6
    bne lbl_fn_8021B2F8_000005A0
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8021B2F8_00000590
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8021B2F8_0000052C
    addi r3, r1, 0xc
    bl fn_8005B710
    bl fn_80686A48
    add r3, r3, r20
    addi r19, r19, 0x1
    addi r20, r3, 0x1
    b lbl_fn_8021B2F8_00000590
lbl_fn_8021B2F8_0000052C:
    lwz r3, 0x4(r18)
    cmpwi r3, 0x0
    beq lbl_fn_8021B2F8_00000540
    addi r4, r25, fn_8021BE40@l
    bl fn_80695A50
lbl_fn_8021B2F8_00000540:
    cmpwi r19, 0x0
    stw r19, 0x88(r31)
    beq lbl_fn_8021B2F8_00000584
    mulli r3, r19, 0xc
    li r4, 0x0
    la r5, lbl_8087DBA4
    la r6, lbl_8087DBA0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r19
    addi r4, r26, fn_8021BE80@l
    addi r5, r25, fn_8021BE40@l
    li r6, 0xc
    bl fn_80695720
    stw r3, 0x4(r18)
    b lbl_fn_8021B2F8_00000588
lbl_fn_8021B2F8_00000584:
    stw r29, 0x4(r18)
lbl_fn_8021B2F8_00000588:
    li r19, 0x0
    addi r30, r30, 0x1
lbl_fn_8021B2F8_00000590:
    addi r3, r1, 0xc
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_8021B2F8_00000104
lbl_fn_8021B2F8_000005A0:
    cmpwi r19, 0x0
    ble lbl_fn_8021B2F8_00000620
    addi r3, r31, 0x88
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8021B2F8_000005C4
    lis r4, fn_8021BE40@ha
    addi r4, r4, fn_8021BE40@l
    bl fn_80695A50
lbl_fn_8021B2F8_000005C4:
    cmpwi r19, 0x0
    stw r19, 0x88(r31)
    beq lbl_fn_8021B2F8_00000614
    mulli r3, r19, 0xc
    li r4, 0x0
    la r5, lbl_8087DBA4
    la r6, lbl_8087DBA0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8021BE80@ha
    lis r5, fn_8021BE40@ha
    mr r7, r19
    li r6, 0xc
    addi r4, r4, fn_8021BE80@l
    addi r5, r5, fn_8021BE40@l
    bl fn_80695720
    addi r4, r31, 0x88
    stw r3, 0x4(r4)
    b lbl_fn_8021B2F8_00000620
lbl_fn_8021B2F8_00000614:
    addi r3, r31, 0x88
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_8021B2F8_00000620:
    lis r5, lbl_80742658@ha
    slwi r3, r20, 1
    addi r5, r5, lbl_80742658@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    lwz r4, 0x8(r1)
    li r30, 0x0
    stw r3, lbl_8087F2F4
    li r29, 0x0
    srwi r0, r4, 31
    li r28, 0x0
    add r0, r0, r4
    srawi. r3, r0, 1
    beq lbl_fn_8021B2F8_00000668
    addi r0, r27, 0x2
    b lbl_fn_8021B2F8_0000066C
lbl_fn_8021B2F8_00000668:
    mr r0, r27
lbl_fn_8021B2F8_0000066C:
    cmpwi r3, 0x0
    stw r0, 0x10(r1)
    beq lbl_fn_8021B2F8_0000067C
    subi r3, r3, 0x1
lbl_fn_8021B2F8_0000067C:
    li r0, 0x0
    stw r3, 0x14(r1)
    addi r22, r31, 0x10
    addi r23, r31, 0x28
    stw r0, 0x18(r1)
    addi r24, r31, 0x40
    addi r25, r31, 0x58
    addi r26, r31, 0x70
    addi r31, r31, 0x88
    lis r21, lbl_807834D4@ha
    b lbl_fn_8021B2F8_00000B18
lbl_fn_8021B2F8_000006A8:
    cmpwi r28, 0x0
    bne lbl_fn_8021B2F8_00000744
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8021B2F8_00000B18
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8021B2F8_00000738
    addi r3, r1, 0xc
    bl fn_8005B710
    lwz r0, lbl_8087F2F4
    mr r19, r3
    slwi r20, r29, 1
    addi r4, r21, lbl_807834D4@l
    mr r5, r19
    add r3, r0, r20
    crclr 6
    bl fn_800DD3FC
    cmpwi r30, 0x1b
    bge lbl_fn_8021B2F8_00000720
    lwz r3, lbl_8087F2F0
    slwi r0, r30, 3
    lwz r4, lbl_8087F2F4
    add r3, r3, r0
    add r0, r4, r20
    stw r0, 0x4(r3)
lbl_fn_8021B2F8_00000720:
    mr r3, r19
    bl fn_80686A48
    add r3, r3, r29
    addi r30, r30, 0x1
    addi r29, r3, 0x1
    b lbl_fn_8021B2F8_00000B18
lbl_fn_8021B2F8_00000738:
    li r30, 0x0
    addi r28, r28, 0x1
    b lbl_fn_8021B2F8_00000B18
lbl_fn_8021B2F8_00000744:
    cmpwi r28, 0x1
    bne lbl_fn_8021B2F8_000007E8
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8021B2F8_00000B18
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8021B2F8_000007DC
    bl fn_800DC1DC
    mr r19, r3
    addi r3, r1, 0xc
    bl fn_8005B710
    lwz r0, lbl_8087F2F4
    mr r18, r3
    slwi r20, r29, 1
    addi r4, r21, lbl_807834D4@l
    mr r5, r18
    add r3, r0, r20
    crclr 6
    bl fn_800DD3FC
    mulli r6, r30, 0xc
    lwz r4, 0x4(r22)
    mr r3, r18
    addi r30, r30, 0x1
    stwx r19, r4, r6
    lwz r0, 0x4(r22)
    lwz r5, lbl_8087F2F4
    add r4, r0, r6
    add r0, r5, r20
    stw r0, 0x8(r4)
    bl fn_80686A48
    add r3, r3, r29
    addi r29, r3, 0x1
    b lbl_fn_8021B2F8_00000B18
lbl_fn_8021B2F8_000007DC:
    li r30, 0x0
    addi r28, r28, 0x1
    b lbl_fn_8021B2F8_00000B18
lbl_fn_8021B2F8_000007E8:
    cmpwi r28, 0x2
    bne lbl_fn_8021B2F8_0000088C
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8021B2F8_00000B18
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8021B2F8_00000880
    bl fn_800DC1DC
    mr r19, r3
    addi r3, r1, 0xc
    bl fn_8005B710
    lwz r0, lbl_8087F2F4
    mr r18, r3
    slwi r20, r29, 1
    addi r4, r21, lbl_807834D4@l
    mr r5, r18
    add r3, r0, r20
    crclr 6
    bl fn_800DD3FC
    mulli r6, r30, 0xc
    lwz r4, 0x4(r23)
    mr r3, r18
    addi r30, r30, 0x1
    stwx r19, r4, r6
    lwz r0, 0x4(r23)
    lwz r5, lbl_8087F2F4
    add r4, r0, r6
    add r0, r5, r20
    stw r0, 0x8(r4)
    bl fn_80686A48
    add r3, r3, r29
    addi r29, r3, 0x1
    b lbl_fn_8021B2F8_00000B18
lbl_fn_8021B2F8_00000880:
    li r30, 0x0
    addi r28, r28, 0x1
    b lbl_fn_8021B2F8_00000B18
lbl_fn_8021B2F8_0000088C:
    cmpwi r28, 0x3
    bne lbl_fn_8021B2F8_00000930
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8021B2F8_00000B18
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8021B2F8_00000924
    bl fn_800DC1DC
    mr r19, r3
    addi r3, r1, 0xc
    bl fn_8005B710
    lwz r0, lbl_8087F2F4
    mr r18, r3
    slwi r20, r29, 1
    addi r4, r21, lbl_807834D4@l
    mr r5, r18
    add r3, r0, r20
    crclr 6
    bl fn_800DD3FC
    mulli r6, r30, 0xc
    lwz r4, 0x4(r24)
    mr r3, r18
    addi r30, r30, 0x1
    stwx r19, r4, r6
    lwz r0, 0x4(r24)
    lwz r5, lbl_8087F2F4
    add r4, r0, r6
    add r0, r5, r20
    stw r0, 0x8(r4)
    bl fn_80686A48
    add r3, r3, r29
    addi r29, r3, 0x1
    b lbl_fn_8021B2F8_00000B18
lbl_fn_8021B2F8_00000924:
    li r30, 0x0
    addi r28, r28, 0x1
    b lbl_fn_8021B2F8_00000B18
lbl_fn_8021B2F8_00000930:
    cmpwi r28, 0x4
    bne lbl_fn_8021B2F8_000009D4
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8021B2F8_00000B18
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8021B2F8_000009C8
    bl fn_800DC1DC
    mr r19, r3
    addi r3, r1, 0xc
    bl fn_8005B710
    lwz r0, lbl_8087F2F4
    mr r18, r3
    slwi r20, r29, 1
    addi r4, r21, lbl_807834D4@l
    mr r5, r18
    add r3, r0, r20
    crclr 6
    bl fn_800DD3FC
    mulli r6, r30, 0xc
    lwz r4, 0x4(r25)
    mr r3, r18
    addi r30, r30, 0x1
    stwx r19, r4, r6
    lwz r0, 0x4(r25)
    lwz r5, lbl_8087F2F4
    add r4, r0, r6
    add r0, r5, r20
    stw r0, 0x8(r4)
    bl fn_80686A48
    add r3, r3, r29
    addi r29, r3, 0x1
    b lbl_fn_8021B2F8_00000B18
lbl_fn_8021B2F8_000009C8:
    li r30, 0x0
    addi r28, r28, 0x1
    b lbl_fn_8021B2F8_00000B18
lbl_fn_8021B2F8_000009D4:
    cmpwi r28, 0x5
    bne lbl_fn_8021B2F8_00000A78
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8021B2F8_00000B18
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8021B2F8_00000A6C
    bl fn_800DC1DC
    mr r19, r3
    addi r3, r1, 0xc
    bl fn_8005B710
    lwz r0, lbl_8087F2F4
    mr r18, r3
    slwi r20, r29, 1
    addi r4, r21, lbl_807834D4@l
    mr r5, r18
    add r3, r0, r20
    crclr 6
    bl fn_800DD3FC
    mulli r6, r30, 0xc
    lwz r4, 0x4(r26)
    mr r3, r18
    addi r30, r30, 0x1
    stwx r19, r4, r6
    lwz r0, 0x4(r26)
    lwz r5, lbl_8087F2F4
    add r4, r0, r6
    add r0, r5, r20
    stw r0, 0x8(r4)
    bl fn_80686A48
    add r3, r3, r29
    addi r29, r3, 0x1
    b lbl_fn_8021B2F8_00000B18
lbl_fn_8021B2F8_00000A6C:
    li r30, 0x0
    addi r28, r28, 0x1
    b lbl_fn_8021B2F8_00000B18
lbl_fn_8021B2F8_00000A78:
    cmpwi r28, 0x6
    bne lbl_fn_8021B2F8_00000B28
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8021B2F8_00000B18
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8021B2F8_00000B10
    bl fn_800DC1DC
    mr r19, r3
    addi r3, r1, 0xc
    bl fn_8005B710
    lwz r0, lbl_8087F2F4
    mr r18, r3
    slwi r20, r29, 1
    addi r4, r21, lbl_807834D4@l
    mr r5, r18
    add r3, r0, r20
    crclr 6
    bl fn_800DD3FC
    mulli r6, r30, 0xc
    lwz r4, 0x4(r31)
    mr r3, r18
    addi r30, r30, 0x1
    stwx r19, r4, r6
    lwz r0, 0x4(r31)
    lwz r5, lbl_8087F2F4
    add r4, r0, r6
    add r0, r5, r20
    stw r0, 0x8(r4)
    bl fn_80686A48
    add r3, r3, r29
    addi r29, r3, 0x1
    b lbl_fn_8021B2F8_00000B18
lbl_fn_8021B2F8_00000B10:
    li r30, 0x0
    addi r28, r28, 0x1
lbl_fn_8021B2F8_00000B18:
    addi r3, r1, 0xc
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_8021B2F8_000006A8
lbl_fn_8021B2F8_00000B28:
    lwz r3, lbl_8087F518
    mr r4, r27
    bl fn_8046DD20
lbl_fn_8021B2F8_00000B34:
    lmw r18, 0xc68(r1)
    lwz r0, 0xca4(r1)
    mtlr r0
    addi r1, r1, 0xca0
    blr
}

asm void fn_8021BE40(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8021BE40_00000B70
    cmpwi r4, 0x0
    ble lbl_fn_8021BE40_00000B70
    bl dtor_80084684
lbl_fn_8021BE40_00000B70:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8021BE80(void)
{
    nofralloc
    lis r4, lbl_80782FF0@ha
    li r0, 0x0
    addi r4, r4, lbl_80782FF0@l
    stw r4, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_8021BE98(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    beq lbl_fn_8021BE98_00000C94
    lwz r7, 0x0(r4)
    lwz r6, lbl_8087F2E8
    slwi r0, r7, 3
    lwz r5, 0x4(r4)
    add r4, r6, r0
    lwz r4, 0x4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_8021BE98_00000BD8
    b lbl_fn_8021BE98_00000BDC
lbl_fn_8021BE98_00000BD8:
    la r4, lbl_808813D0
lbl_fn_8021BE98_00000BDC:
    cmplwi r7, 0x47
    bgt lbl_fn_8021BE98_00000C7C
    lis r6, jumptable_80783100@ha
    slwi r0, r7, 2
    addi r6, r6, jumptable_80783100@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    xoris r5, r5, 0x8000
    lis r0, 0x4330
    lis r6, lbl_80742650@ha
    stw r5, 0xc(r1)
    lfd f2, lbl_80742650@l(r6)
    stw r0, 0x8(r1)
    lfs f0, lbl_80882F8C
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fdivs f1, f1, f0
    crset 6
    bl fn_800DD3FC
    li r3, 0x1
    b lbl_fn_8021BE98_00000C98
    crclr 6
    bl fn_800DD3FC
    li r3, 0x1
    b lbl_fn_8021BE98_00000C98
    lis r6, lbl_807C8008@ha
    addi r6, r6, lbl_807C8008@l
    mulli r0, r5, 0xc
    lwz r5, 0x4(r6)
    add r5, r5, r0
    lwz r5, 0x8(r5)
    cmpwi r5, 0x0
    beq lbl_fn_8021BE98_00000C68
    b lbl_fn_8021BE98_00000C6C
lbl_fn_8021BE98_00000C68:
    la r5, lbl_808813D0
lbl_fn_8021BE98_00000C6C:
    crclr 6
    bl fn_800DD3FC
    li r3, 0x1
    b lbl_fn_8021BE98_00000C98
lbl_fn_8021BE98_00000C7C:
    crclr 6
    bl fn_800DD3FC
    li r3, 0x1
    b lbl_fn_8021BE98_00000C98
    li r3, 0x0
    b lbl_fn_8021BE98_00000C98
lbl_fn_8021BE98_00000C94:
    li r3, 0x0
lbl_fn_8021BE98_00000C98:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8021BFA0(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    lis r7, lbl_807C7FF8@ha
    stw r0, 0x234(r1)
    slwi r0, r4, 3
    addi r7, r7, lbl_807C7FF8@l
    stmw r25, 0x214(r1)
    mr r30, r3
    mr r25, r5
    lwz r6, lbl_8087F2F0
    add r6, r6, r0
    lwz r31, 0x4(r6)
    cmpwi r31, 0x0
    beq lbl_fn_8021BFA0_00000CE4
    b lbl_fn_8021BFA0_00000CE8
lbl_fn_8021BFA0_00000CE4:
    la r31, lbl_808813D0
lbl_fn_8021BFA0_00000CE8:
    cmplwi r4, 0x14
    bgt lbl_fn_8021BFA0_000010CC
    lis r6, jumptable_80783220@ha
    slwi r0, r4, 2
    addi r6, r6, jumptable_80783220@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    li r0, 0x0
    sth r0, 0x0(r3)
    li r3, 0x1
    b lbl_fn_8021BFA0_000010E8
    lwz r0, 0x10(r7)
    addi r3, r7, 0x10
    lwz r3, 0x4(r3)
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8021BFA0_00000D74
lbl_fn_8021BFA0_00000D34:
    lwz r0, 0x0(r3)
    cmpw r5, r0
    bne lbl_fn_8021BFA0_00000D68
    addi r3, r7, 0x10
    mulli r0, r4, 0xc
    lwz r3, 0x4(r3)
    add r3, r3, r0
    lwz r5, 0x8(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8021BFA0_00000D60
    b lbl_fn_8021BFA0_00000D78
lbl_fn_8021BFA0_00000D60:
    la r5, lbl_808813D0
    b lbl_fn_8021BFA0_00000D78
lbl_fn_8021BFA0_00000D68:
    addi r3, r3, 0xc
    addi r4, r4, 0x1
    bdnz lbl_fn_8021BFA0_00000D34
lbl_fn_8021BFA0_00000D74:
    li r5, 0x0
lbl_fn_8021BFA0_00000D78:
    mr r3, r30
    mr r4, r31
    crclr 6
    bl fn_800DD3FC
    li r3, 0x1
    b lbl_fn_8021BFA0_000010E8
    lwz r0, 0x28(r7)
    addi r3, r7, 0x28
    lwz r3, 0x4(r3)
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8021BFA0_00000DEC
lbl_fn_8021BFA0_00000DAC:
    lwz r0, 0x0(r3)
    cmpw r5, r0
    bne lbl_fn_8021BFA0_00000DE0
    addi r3, r7, 0x28
    mulli r0, r4, 0xc
    lwz r3, 0x4(r3)
    add r3, r3, r0
    lwz r5, 0x8(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8021BFA0_00000DD8
    b lbl_fn_8021BFA0_00000DF0
lbl_fn_8021BFA0_00000DD8:
    la r5, lbl_808813D0
    b lbl_fn_8021BFA0_00000DF0
lbl_fn_8021BFA0_00000DE0:
    addi r3, r3, 0xc
    addi r4, r4, 0x1
    bdnz lbl_fn_8021BFA0_00000DAC
lbl_fn_8021BFA0_00000DEC:
    li r5, 0x0
lbl_fn_8021BFA0_00000DF0:
    mr r3, r30
    mr r4, r31
    crclr 6
    bl fn_800DD3FC
    li r3, 0x1
    b lbl_fn_8021BFA0_000010E8
    lwz r0, 0x40(r7)
    addi r3, r7, 0x40
    lwz r3, 0x4(r3)
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8021BFA0_00000E64
lbl_fn_8021BFA0_00000E24:
    lwz r0, 0x0(r3)
    cmpw r5, r0
    bne lbl_fn_8021BFA0_00000E58
    addi r3, r7, 0x40
    mulli r0, r4, 0xc
    lwz r3, 0x4(r3)
    add r3, r3, r0
    lwz r5, 0x8(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8021BFA0_00000E50
    b lbl_fn_8021BFA0_00000E68
lbl_fn_8021BFA0_00000E50:
    la r5, lbl_808813D0
    b lbl_fn_8021BFA0_00000E68
lbl_fn_8021BFA0_00000E58:
    addi r3, r3, 0xc
    addi r4, r4, 0x1
    bdnz lbl_fn_8021BFA0_00000E24
lbl_fn_8021BFA0_00000E64:
    li r5, 0x0
lbl_fn_8021BFA0_00000E68:
    mr r3, r30
    mr r4, r31
    crclr 6
    bl fn_800DD3FC
    li r3, 0x1
    b lbl_fn_8021BFA0_000010E8
    lwz r0, 0x58(r7)
    addi r3, r7, 0x58
    lwz r3, 0x4(r3)
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8021BFA0_00000EDC
lbl_fn_8021BFA0_00000E9C:
    lwz r0, 0x0(r3)
    cmpw r5, r0
    bne lbl_fn_8021BFA0_00000ED0
    addi r3, r7, 0x58
    mulli r0, r4, 0xc
    lwz r3, 0x4(r3)
    add r3, r3, r0
    lwz r5, 0x8(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8021BFA0_00000EC8
    b lbl_fn_8021BFA0_00000EE0
lbl_fn_8021BFA0_00000EC8:
    la r5, lbl_808813D0
    b lbl_fn_8021BFA0_00000EE0
lbl_fn_8021BFA0_00000ED0:
    addi r3, r3, 0xc
    addi r4, r4, 0x1
    bdnz lbl_fn_8021BFA0_00000E9C
lbl_fn_8021BFA0_00000EDC:
    li r5, 0x0
lbl_fn_8021BFA0_00000EE0:
    mr r3, r30
    mr r4, r31
    crclr 6
    bl fn_800DD3FC
    li r3, 0x1
    b lbl_fn_8021BFA0_000010E8
    lwz r0, 0x70(r7)
    addi r3, r7, 0x70
    lwz r3, 0x4(r3)
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8021BFA0_00000F54
lbl_fn_8021BFA0_00000F14:
    lwz r0, 0x0(r3)
    cmpw r5, r0
    bne lbl_fn_8021BFA0_00000F48
    addi r3, r7, 0x70
    mulli r0, r4, 0xc
    lwz r3, 0x4(r3)
    add r3, r3, r0
    lwz r28, 0x8(r3)
    cmpwi r28, 0x0
    beq lbl_fn_8021BFA0_00000F40
    b lbl_fn_8021BFA0_00000F58
lbl_fn_8021BFA0_00000F40:
    la r28, lbl_808813D0
    b lbl_fn_8021BFA0_00000F58
lbl_fn_8021BFA0_00000F48:
    addi r3, r3, 0xc
    addi r4, r4, 0x1
    bdnz lbl_fn_8021BFA0_00000F14
lbl_fn_8021BFA0_00000F54:
    li r28, 0x0
lbl_fn_8021BFA0_00000F58:
    cmpwi r5, 0x0
    bne lbl_fn_8021BFA0_00000F78
    mr r3, r30
    mr r4, r31
    mr r5, r28
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_8021BFA0_00000FB4
lbl_fn_8021BFA0_00000F78:
    addi r4, r5, 0x12c
    li r3, 0x0
    bl fn_80206B14
    cmpwi r3, 0x0
    beq lbl_fn_8021BFA0_000010E4
    lwz r5, 0x84(r3)
    mr r4, r28
    addi r3, r1, 0x8
    crclr 6
    bl fn_800DD3FC
    mr r3, r30
    mr r4, r31
    addi r5, r1, 0x8
    crclr 6
    bl fn_800DD3FC
lbl_fn_8021BFA0_00000FB4:
    li r3, 0x1
    b lbl_fn_8021BFA0_000010E8
    lwz r0, 0x88(r7)
    addi r3, r7, 0x88
    lwz r3, 0x4(r3)
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8021BFA0_00001018
lbl_fn_8021BFA0_00000FD8:
    lwz r0, 0x0(r3)
    cmpw r5, r0
    bne lbl_fn_8021BFA0_0000100C
    addi r3, r7, 0x88
    mulli r0, r4, 0xc
    lwz r3, 0x4(r3)
    add r3, r3, r0
    lwz r5, 0x8(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8021BFA0_00001004
    b lbl_fn_8021BFA0_0000101C
lbl_fn_8021BFA0_00001004:
    la r5, lbl_808813D0
    b lbl_fn_8021BFA0_0000101C
lbl_fn_8021BFA0_0000100C:
    addi r3, r3, 0xc
    addi r4, r4, 0x1
    bdnz lbl_fn_8021BFA0_00000FD8
lbl_fn_8021BFA0_00001018:
    li r5, 0x0
lbl_fn_8021BFA0_0000101C:
    mr r3, r30
    mr r4, r31
    crclr 6
    bl fn_800DD3FC
    li r3, 0x1
    b lbl_fn_8021BFA0_000010E8
    li r27, 0x0
    li r26, 0x0
    b lbl_fn_8021BFA0_0000109C
lbl_fn_8021BFA0_00001040:
    mr r3, r26
    bl fn_80209294
    lwz r28, 0x10(r3)
    mr r27, r3
    mr r3, r28
    bl strlen
    cmplwi r3, 0xd
    blt lbl_fn_8021BFA0_00001098
    addi r3, r28, 0x8
    bl fn_80684600
    mulli r28, r3, 0x64
    lwz r3, 0x10(r27)
    addi r3, r3, 0x2
    bl fn_80684600
    mulli r29, r3, 0x2710
    lwz r3, 0x10(r27)
    addi r3, r3, 0xb
    bl fn_80684600
    add r0, r29, r28
    add r0, r3, r0
    cmpw r0, r25
    beq lbl_fn_8021BFA0_000010A8
lbl_fn_8021BFA0_00001098:
    addi r26, r26, 0x1
lbl_fn_8021BFA0_0000109C:
    bl fn_802092F8
    cmplw r26, r3
    blt lbl_fn_8021BFA0_00001040
lbl_fn_8021BFA0_000010A8:
    cmpwi r27, 0x0
    beq lbl_fn_8021BFA0_000010E4
    lwz r5, 0x4(r27)
    mr r3, r30
    mr r4, r31
    crclr 6
    bl fn_800DD3FC
    li r3, 0x1
    b lbl_fn_8021BFA0_000010E8
lbl_fn_8021BFA0_000010CC:
    mr r3, r30
    mr r4, r31
    crclr 6
    bl fn_800DD3FC
    li r3, 0x1
    b lbl_fn_8021BFA0_000010E8
lbl_fn_8021BFA0_000010E4:
    li r3, 0x0
lbl_fn_8021BFA0_000010E8:
    lmw r25, 0x214(r1)
    lwz r0, 0x234(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}

asm void fn_8021C3F4(void)
{
    nofralloc
    stwu r1, -0xc90(r1)
    mflr r0
    lis r3, lbl_8077A090@ha
    li r4, 0x0
    stw r0, 0xc94(r1)
    li r0, 0x0
    addi r3, r3, lbl_8077A090@l
    li r5, 0x800
    stmw r23, 0xc6c(r1)
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
    lwz r3, lbl_8087F518
    addi r5, r1, 0x8
    lwz r4, lbl_80882F88
    li r6, 0x20
    bl fn_8046DC5C
    lwz r4, 0x8(r1)
    mr r30, r3
    srwi r0, r4, 31
    add r0, r0, r4
    srawi. r4, r0, 1
    beq lbl_fn_8021C3F4_0000119C
    addi r0, r3, 0x2
    b lbl_fn_8021C3F4_000011A0
lbl_fn_8021C3F4_0000119C:
    mr r0, r30
lbl_fn_8021C3F4_000011A0:
    cmpwi r4, 0x0
    stw r0, 0x10(r1)
    beq lbl_fn_8021C3F4_000011B0
    subi r4, r4, 0x1
lbl_fn_8021C3F4_000011B0:
    li r0, 0x0
    stw r4, 0x14(r1)
    li r23, 0x0
    stw r0, 0x18(r1)
    stw r0, lbl_8087F2FC
    b lbl_fn_8021C3F4_00001214
lbl_fn_8021C3F4_000011C8:
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8021C3F4_00001214
    addi r3, r1, 0xc
    bl fn_8005B710
    addi r3, r1, 0xc
    bl fn_8005B710
    addi r3, r1, 0xc
    bl fn_8005B710
    addi r3, r1, 0xc
    bl fn_8005B710
    bl fn_80686A48
    lwz r4, lbl_8087F2FC
    add r3, r3, r23
    addi r23, r3, 0x1
    addi r0, r4, 0x1
    stw r0, lbl_8087F2FC
lbl_fn_8021C3F4_00001214:
    addi r3, r1, 0xc
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_8021C3F4_000011C8
    lis r25, lbl_80742658@ha
    slwi r3, r23, 1
    addi r5, r25, lbl_80742658@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    lwz r0, lbl_8087F2FC
    addi r5, r25, lbl_80742658@l
    stw r3, lbl_8087F300
    mr r6, r5
    mulli r3, r0, 0x14
    li r4, 0x3
    li r7, 0x0
    bl fn_800846FC
    lwz r4, 0x8(r1)
    li r29, 0x0
    stw r3, lbl_8087F2F8
    li r31, 0x0
    srwi r0, r4, 31
    add r0, r0, r4
    srawi. r3, r0, 1
    beq lbl_fn_8021C3F4_00001288
    addi r0, r30, 0x2
    b lbl_fn_8021C3F4_0000128C
lbl_fn_8021C3F4_00001288:
    mr r0, r30
lbl_fn_8021C3F4_0000128C:
    cmpwi r3, 0x0
    stw r0, 0x10(r1)
    beq lbl_fn_8021C3F4_0000129C
    subi r3, r3, 0x1
lbl_fn_8021C3F4_0000129C:
    li r0, 0x0
    stw r3, 0x14(r1)
    lis r28, lbl_807834D4@ha
    stw r0, 0x18(r1)
    b lbl_fn_8021C3F4_0000137C
lbl_fn_8021C3F4_000012B0:
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8021C3F4_0000137C
    addi r3, r1, 0xc
    bl fn_8005B710
    bl fn_800DC1DC
    mr r25, r3
    addi r3, r1, 0xc
    bl fn_8005B710
    bl fn_800DC1DC
    mr r26, r3
    addi r3, r1, 0xc
    bl fn_8005B710
    bl fn_800DC1DC
    mr r27, r3
    addi r3, r1, 0xc
    bl fn_8005B710
    lwz r0, lbl_8087F300
    mr r23, r3
    slwi r24, r31, 1
    addi r4, r28, lbl_807834D4@l
    mr r5, r23
    add r3, r0, r24
    crclr 6
    bl fn_800DD3FC
    lwz r4, lbl_8087F2F8
    mr r3, r23
    stwx r25, r4, r29
    lwz r0, lbl_8087F2F8
    add r4, r0, r29
    stw r26, 0x4(r4)
    lwz r0, lbl_8087F2F8
    add r4, r0, r29
    stw r27, 0x8(r4)
    lwz r0, lbl_8087F2F8
    lwz r5, lbl_8087F300
    add r4, r0, r29
    add r0, r5, r24
    stw r0, 0xc(r4)
    bl fn_80686A48
    add r4, r3, r31
    addi r3, r1, 0xc
    addi r31, r4, 0x1
    bl fn_8005B710
    bl fn_800DC1DC
    lwz r0, lbl_8087F2F8
    add r4, r0, r29
    addi r29, r29, 0x14
    stw r3, 0x10(r4)
lbl_fn_8021C3F4_0000137C:
    addi r3, r1, 0xc
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_8021C3F4_000012B0
    lwz r3, lbl_8087F518
    mr r4, r30
    bl fn_8046DD20
    lmw r23, 0xc6c(r1)
    lwz r0, 0xc94(r1)
    mtlr r0
    addi r1, r1, 0xc90
    blr
}

asm void fn_8021C6A4(void)
{
    nofralloc
    stwu r1, -0x420(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x424(r1)
    stw r31, 0x41c(r1)
    stw r30, 0x418(r1)
    mr r30, r4
    stw r29, 0x414(r1)
    mr r29, r3
    beq lbl_fn_8021C6A4_00001864
    lwz r9, lbl_8087F2F8
    li r6, 0x0
    lwz r0, lbl_8087F2FC
    mr r7, r9
    lwz r5, 0xc(r4)
    lwz r3, 0x8(r4)
    lwz r8, 0x0(r4)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8021C6A4_00001440
lbl_fn_8021C6A4_000013FC:
    lwz r0, 0x0(r7)
    cmpw r8, r0
    bne lbl_fn_8021C6A4_00001434
    lwz r0, 0x4(r7)
    cmpw r3, r0
    bne lbl_fn_8021C6A4_00001434
    cmpwi r5, 0x0
    beq lbl_fn_8021C6A4_00001428
    lwz r0, 0x8(r7)
    cmpw r5, r0
    bne lbl_fn_8021C6A4_00001434
lbl_fn_8021C6A4_00001428:
    mulli r0, r6, 0x14
    add r31, r9, r0
    b lbl_fn_8021C6A4_00001444
lbl_fn_8021C6A4_00001434:
    addi r7, r7, 0x14
    addi r6, r6, 0x1
    bdnz lbl_fn_8021C6A4_000013FC
lbl_fn_8021C6A4_00001440:
    li r31, 0x0
lbl_fn_8021C6A4_00001444:
    cmpwi r31, 0x0
    beq lbl_fn_8021C6A4_000016B8
    lwz r6, 0xc(r31)
    lhz r0, 0x0(r6)
    cmpwi r0, 0x0
    beq lbl_fn_8021C6A4_000016B8
    cmplwi r8, 0x47
    bgt lbl_fn_8021C6A4_0000149C
    lis r3, jumptable_807833B4@ha
    slwi r0, r8, 2
    addi r3, r3, jumptable_807833B4@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r0, 0x6
    b lbl_fn_8021C6A4_000014A8
    li r0, 0x7
    b lbl_fn_8021C6A4_000014A8
    li r0, 0x3
    b lbl_fn_8021C6A4_000014A8
    li r0, 0x1
    b lbl_fn_8021C6A4_000014A8
lbl_fn_8021C6A4_0000149C:
    li r0, 0x2
    b lbl_fn_8021C6A4_000014A8
    li r0, 0x0
lbl_fn_8021C6A4_000014A8:
    cmplwi r0, 0x7
    bgt lbl_fn_8021C6A4_00001648
    lis r3, jumptable_80783394@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80783394@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r29
    mr r4, r6
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_8021C6A4_00001648
    lwz r0, 0x4(r4)
    lis r4, lbl_807C8008@ha
    addi r4, r4, lbl_807C8008@l
    mr r3, r29
    mulli r0, r0, 0xc
    lwz r5, 0x4(r4)
    mr r4, r6
    add r5, r5, r0
    lwz r5, 0x8(r5)
    cmpwi r5, 0x0
    beq lbl_fn_8021C6A4_0000150C
    b lbl_fn_8021C6A4_00001510
lbl_fn_8021C6A4_0000150C:
    la r5, lbl_808813D0
lbl_fn_8021C6A4_00001510:
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_8021C6A4_00001648
    lwz r5, lbl_8087F2E8
    slwi r0, r8, 3
    mr r3, r29
    mr r4, r6
    add r5, r5, r0
    lwz r5, 0x4(r5)
    cmpwi r5, 0x0
    beq lbl_fn_8021C6A4_00001540
    b lbl_fn_8021C6A4_00001544
lbl_fn_8021C6A4_00001540:
    la r5, lbl_808813D0
lbl_fn_8021C6A4_00001544:
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_8021C6A4_00001648
    lwz r5, 0x4(r30)
    mr r3, r29
    mr r4, r6
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_8021C6A4_00001648
    lis r3, 0x51ec
    lwz r0, 0x4(r30)
    subi r4, r3, 0x7ae1
    mulhw r0, r4, r0
    mr r3, r29
    mr r4, r6
    srawi r0, r0, 4
    srwi r5, r0, 31
    add r5, r0, r5
    addi r5, r5, 0x1
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_8021C6A4_00001648
    lwz r5, 0x4(r30)
    mr r3, r29
    mr r4, r6
    srwi r0, r5, 31
    add r0, r0, r5
    srawi r5, r0, 1
    addi r5, r5, 0x1
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_8021C6A4_00001648
    lwz r4, 0x4(r30)
    lis r0, 0x4330
    stw r0, 0x408(r1)
    lis r3, lbl_80742650@ha
    xoris r0, r4, 0x8000
    lfd f2, lbl_80742650@l(r3)
    stw r0, 0x40c(r1)
    mr r3, r29
    lfs f0, lbl_80882F8C
    mr r4, r6
    lfd f1, 0x408(r1)
    fsubs f1, f1, f2
    fdivs f1, f1, f0
    crset 6
    bl fn_800DD3FC
    b lbl_fn_8021C6A4_00001648
    lwz r4, 0x4(r30)
    lis r0, 0x4330
    stw r0, 0x408(r1)
    lis r3, lbl_80742650@ha
    xoris r0, r4, 0x8000
    lfd f3, lbl_80742650@l(r3)
    stw r0, 0x40c(r1)
    mr r3, r29
    lfs f1, lbl_80882F94
    mr r4, r6
    lfd f2, 0x408(r1)
    lfs f0, lbl_80882F90
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fadds f1, f0, f1
    crset 6
    bl fn_800DD3FC
lbl_fn_8021C6A4_00001648:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8021C6A4_000016B0
    bl fn_8006BA30
    cmpwi r3, 0x2
    beq lbl_fn_8021C6A4_0000166C
    bl fn_8006BA30
    cmpwi r3, 0x3
    bne lbl_fn_8021C6A4_00001690
lbl_fn_8021C6A4_0000166C:
    lis r4, lbl_807834D4@ha
    lwz r6, 0x10(r30)
    addi r4, r4, lbl_807834D4@l
    mr r3, r29
    mr r5, r29
    addi r4, r4, 0x16
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_8021C6A4_000016B0
lbl_fn_8021C6A4_00001690:
    lis r4, lbl_807834D4@ha
    lwz r6, 0x10(r30)
    addi r4, r4, lbl_807834D4@l
    mr r3, r29
    mr r5, r29
    addi r4, r4, 0x2a
    crclr 6
    bl fn_800DD3FC
lbl_fn_8021C6A4_000016B0:
    li r3, 0x1
    b lbl_fn_8021C6A4_00001868
lbl_fn_8021C6A4_000016B8:
    cmpwi r4, 0x0
    beq lbl_fn_8021C6A4_0000185C
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x200
    bl memset
    addi r3, r1, 0x208
    li r4, 0x0
    li r5, 0x200
    bl memset
    cmpwi r30, 0x0
    beq lbl_fn_8021C6A4_000016FC
    lwz r4, 0x8(r30)
    addi r3, r1, 0x8
    lwz r5, 0xc(r30)
    bl fn_8021BFA0
    b lbl_fn_8021C6A4_00001700
lbl_fn_8021C6A4_000016FC:
    li r3, 0x0
lbl_fn_8021C6A4_00001700:
    cmpwi r3, 0x0
    beq lbl_fn_8021C6A4_0000185C
    cmpwi r30, 0x0
    beq lbl_fn_8021C6A4_00001800
    lwz r6, 0x0(r30)
    lwz r3, lbl_8087F2E8
    slwi r0, r6, 3
    lwz r5, 0x4(r30)
    add r3, r3, r0
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8021C6A4_00001734
    b lbl_fn_8021C6A4_00001738
lbl_fn_8021C6A4_00001734:
    la r4, lbl_808813D0
lbl_fn_8021C6A4_00001738:
    cmplwi r6, 0x47
    bgt lbl_fn_8021C6A4_000017E4
    lis r3, jumptable_80783274@ha
    slwi r0, r6, 2
    addi r3, r3, jumptable_80783274@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    xoris r3, r5, 0x8000
    lis r0, 0x4330
    stw r3, 0x40c(r1)
    lis r5, lbl_80742650@ha
    lfd f2, lbl_80742650@l(r5)
    addi r3, r1, 0x208
    stw r0, 0x408(r1)
    lfs f0, lbl_80882F8C
    lfd f1, 0x408(r1)
    fsubs f1, f1, f2
    fdivs f1, f1, f0
    crset 6
    bl fn_800DD3FC
    li r0, 0x1
    b lbl_fn_8021C6A4_00001804
    addi r3, r1, 0x208
    crclr 6
    bl fn_800DD3FC
    li r0, 0x1
    b lbl_fn_8021C6A4_00001804
    lis r6, lbl_807C8008@ha
    addi r3, r1, 0x208
    addi r6, r6, lbl_807C8008@l
    mulli r0, r5, 0xc
    lwz r5, 0x4(r6)
    add r5, r5, r0
    lwz r5, 0x8(r5)
    cmpwi r5, 0x0
    beq lbl_fn_8021C6A4_000017D0
    b lbl_fn_8021C6A4_000017D4
lbl_fn_8021C6A4_000017D0:
    la r5, lbl_808813D0
lbl_fn_8021C6A4_000017D4:
    crclr 6
    bl fn_800DD3FC
    li r0, 0x1
    b lbl_fn_8021C6A4_00001804
lbl_fn_8021C6A4_000017E4:
    addi r3, r1, 0x208
    crclr 6
    bl fn_800DD3FC
    li r0, 0x1
    b lbl_fn_8021C6A4_00001804
    li r0, 0x0
    b lbl_fn_8021C6A4_00001804
lbl_fn_8021C6A4_00001800:
    li r0, 0x0
lbl_fn_8021C6A4_00001804:
    cmpwi r0, 0x0
    beq lbl_fn_8021C6A4_0000185C
    lhz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8021C6A4_0000183C
    lis r4, lbl_807834D4@ha
    mr r3, r29
    addi r4, r4, lbl_807834D4@l
    addi r5, r1, 0x8
    addi r4, r4, 0x8
    addi r6, r1, 0x208
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_8021C6A4_00001854
lbl_fn_8021C6A4_0000183C:
    lis r4, lbl_807834D4@ha
    mr r3, r29
    addi r4, r4, lbl_807834D4@l
    addi r5, r1, 0x208
    crclr 6
    bl fn_800DD3FC
lbl_fn_8021C6A4_00001854:
    li r3, 0x1
    b lbl_fn_8021C6A4_00001868
lbl_fn_8021C6A4_0000185C:
    li r3, 0x0
    b lbl_fn_8021C6A4_00001868
lbl_fn_8021C6A4_00001864:
    li r3, 0x0
lbl_fn_8021C6A4_00001868:
    lwz r0, 0x424(r1)
    lwz r31, 0x41c(r1)
    lwz r30, 0x418(r1)
    lwz r29, 0x414(r1)
    mtlr r0
    addi r1, r1, 0x420
    blr
}

asm void fn_8021CB7C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, fn_8021CC50@ha
    addi r4, r31, fn_8021CC50@l
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    lis r29, lbl_807C7FF8@ha
    addi r29, r29, lbl_807C7FF8@l
    addi r3, r29, 0x10
    stw r30, 0x10(r29)
    addi r5, r29, 0x0
    stw r30, 0x4(r3)
    bl __register_global_object
    addi r3, r29, 0x28
    stw r30, 0x28(r29)
    addi r4, r31, fn_8021CC50@l
    addi r5, r29, 0x18
    stw r30, 0x4(r3)
    bl __register_global_object
    addi r3, r29, 0x40
    stw r30, 0x40(r29)
    addi r4, r31, fn_8021CC50@l
    addi r5, r29, 0x30
    stw r30, 0x4(r3)
    bl __register_global_object
    addi r3, r29, 0x58
    stw r30, 0x58(r29)
    addi r4, r31, fn_8021CC50@l
    addi r5, r29, 0x48
    stw r30, 0x4(r3)
    bl __register_global_object
    addi r3, r29, 0x70
    stw r30, 0x70(r29)
    addi r4, r31, fn_8021CC50@l
    addi r5, r29, 0x60
    stw r30, 0x4(r3)
    bl __register_global_object
    addi r3, r29, 0x88
    stw r30, 0x88(r29)
    addi r4, r31, fn_8021CC50@l
    addi r5, r29, 0x78
    stw r30, 0x4(r3)
    bl __register_global_object
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8021CC50(void)
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
    beq lbl_fn_8021CC50_000019B0
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8021CC50_00001994
    lis r4, fn_8021BE40@ha
    addi r4, r4, fn_8021BE40@l
    bl fn_80695A50
lbl_fn_8021CC50_00001994:
    cmpwi r31, 0x0
    li r0, 0x0
    stw r0, 0x4(r30)
    stw r0, 0x0(r30)
    ble lbl_fn_8021CC50_000019B0
    mr r3, r30
    bl dtor_80084684
lbl_fn_8021CC50_000019B0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
