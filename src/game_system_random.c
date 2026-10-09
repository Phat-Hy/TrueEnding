#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8005B710(void);
extern void fn_8005B8F8(void);
extern void fn_8005B9AC(void);
extern void fn_8006BA8C(void);
extern void fn_8006BB6C(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_800EC654(void);
extern void fn_800EDFE8(void);
extern void fn_80205BE8(void);
extern void fn_8020F064(void);
extern void fn_8046DC5C(void);
extern void fn_8046DD20(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_806846C4(void);
extern void fn_80686A48(void);
extern void fn_80686A64(void);
extern void fn_80695720(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_80783010[];
extern u8 lbl_8073F600[];
extern u8 lbl_8073F614[];
extern u8 lbl_8073F668[];
extern u8 lbl_8073F678[];
extern u8 lbl_8073F7A8[];
extern u8 lbl_8073F7BC[];
extern u8 lbl_8073F814[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_8077A070[];
extern u8 lbl_8077A090[];
extern u8 lbl_8077A0A8[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087F1E8;
extern u32 lbl_8087F1EC;
extern u32 lbl_8087F1F0;
extern u32 lbl_8087F1F4;
extern u32 lbl_8087F1F8;
extern u32 lbl_8087F518;
extern u32 lbl_80882E8C;
extern u32 lbl_80882E90;
extern u32 lbl_80882E94;
extern u32 lbl_80882E98;

/* Function declarations */
void fn_8020D688(void);
void fn_8020DA08(void);
void fn_8020DA68(void);
void fn_8020DA74(void);
void fn_8020DAB4(void);
void fn_8020DB18(void);
void fn_8020DB58(void);
void fn_8020DE0C(void);
void fn_8020DF88(void);
void fn_8020E990(void);
void fn_8020EACC(void);
void fn_8020EB0C(void);
void fn_8020ED84(void);
void fn_8020EE58(void);
void fn_8020EE60(void);
void fn_8020EE8C(void);
void fn_8020EF04(void);
void fn_8020EF4C(void);
void fn_8020EF80(void);

asm void fn_8020D688(void)
{
    nofralloc
    stwu r1, -0x12c0(r1)
    mflr r0
    stw r0, 0x12c4(r1)
    stmw r22, 0x1298(r1)
    lwz r0, lbl_8087F1E8
    cmpwi r0, 0x0
    bne lbl_fn_8020D688_0000006C
    lis r3, lbl_8073F678@ha
    lis r6, 0x1
    addi r3, r3, lbl_8073F678@l
    li r4, 0x1
    addi r5, r3, 0x2e
    li r7, 0x0
    subi r3, r6, 0x1850
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_8020D688_00000068
    lis r4, fn_8020DA08@ha
    lis r5, fn_8020DAB4@ha
    addi r4, r4, fn_8020DA08@l
    li r6, 0x544
    addi r5, r5, fn_8020DAB4@l
    li r7, 0x2c
    bl fn_806958E0
lbl_fn_8020D688_00000068:
    stw r26, lbl_8087F1E8
lbl_fn_8020D688_0000006C:
    lis r26, lbl_8073F678@ha
    lwz r3, lbl_8087F518
    addi r26, r26, lbl_8073F678@l
    addi r5, r1, 0xc
    addi r4, r26, 0x2f
    li r6, 0x20
    bl fn_8046DC5C
    mr r31, r3
    lwz r3, lbl_8087F518
    addi r4, r26, 0x58
    addi r5, r1, 0x8
    li r6, 0x20
    bl fn_8046DC5C
    lis r4, lbl_807772D0@ha
    li r26, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0xc64(r1)
    mr r30, r3
    lwz r27, 0xc(r1)
    stw r26, 0xc68(r1)
    addi r3, r1, 0xc74
    li r4, 0x0
    li r5, 0x400
    stw r26, 0xc6c(r1)
    stw r26, 0xc70(r1)
    stw r26, 0x1294(r1)
    bl memset
    addi r3, r1, 0x1274
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0xc64(r1)
    mr r4, r31
    mr r5, r27
    addi r3, r1, 0xc64
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0xc64
    addi r4, r4, lbl_807772B0@l
    stw r4, 0xc64(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lwz r4, 0x8(r1)
    lis r3, lbl_8077A090@ha
    addi r3, r3, lbl_8077A090@l
    stw r3, 0x10(r1)
    srwi r0, r4, 31
    addi r27, r1, 0x10
    add r0, r0, r4
    stw r26, 0x14(r1)
    srawi r28, r0, 1
    addi r3, r1, 0x20
    stw r26, 0x18(r1)
    li r4, 0x0
    li r5, 0x800
    stw r26, 0x1c(r1)
    stw r26, 0xc60(r1)
    bl memset
    addi r3, r1, 0xc20
    li r4, 0x0
    li r5, 0x40
    bl memset
    cmpwi r28, 0x0
    mr r5, r28
    beq lbl_fn_8020D688_0000017C
    subi r5, r28, 0x1
lbl_fn_8020D688_0000017C:
    cmpwi r28, 0x0
    mr r3, r27
    beq lbl_fn_8020D688_00000190
    addi r4, r30, 0x2
    b lbl_fn_8020D688_00000194
lbl_fn_8020D688_00000190:
    mr r4, r30
lbl_fn_8020D688_00000194:
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_8077A070@ha
    lis r4, lbl_8077A0A8@ha
    addi r3, r3, lbl_8077A070@l
    stw r3, 0x10(r1)
    mr r3, r27
    addi r4, r4, lbl_8077A0A8@l
    bl fn_8005B9AC
    lis r3, lbl_8073F678@ha
    lis r28, lbl_8073F668@ha
    li r29, 0x1
    addi r26, r3, lbl_8073F678@l
    b lbl_fn_8020D688_00000344
lbl_fn_8020D688_000001D4:
    addi r3, r1, 0x10
    bl fn_8005B8F8
    addi r3, r1, 0xc64
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r22, r3
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_8020D688_00000344
    cmpwi r0, 0x23
    beq lbl_fn_8020D688_00000344
    addi r4, r26, 0x2e
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8020D688_00000344
    mr r3, r22
    bl fn_8020F064
    mr r27, r3
    addi r3, r1, 0xc64
    bl fn_8005B3CC
    mr r25, r3
    addi r23, r28, lbl_8073F668@l
    li r24, 0x0
lbl_fn_8020D688_00000230:
    lwz r22, 0x0(r23)
    mr r3, r22
    bl strlen
    mr r5, r3
    mr r3, r22
    mr r4, r25
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8020D688_00000258
    b lbl_fn_8020D688_0000026C
lbl_fn_8020D688_00000258:
    addi r24, r24, 0x1
    addi r23, r23, 0x4
    cmpwi r24, 0x4
    blt lbl_fn_8020D688_00000230
    li r24, 0x0
lbl_fn_8020D688_0000026C:
    cmpwi r27, 0x0
    blt lbl_fn_8020D688_00000344
    cmpwi r27, 0xb
    bge lbl_fn_8020D688_00000344
    cmpwi r24, 0x0
    blt lbl_fn_8020D688_00000344
    cmpwi r24, 0x4
    bge lbl_fn_8020D688_00000344
    mulli r0, r27, 0x1510
    lwz r5, lbl_8087F1E8
    addi r3, r1, 0xc64
    mulli r4, r24, 0x544
    add r0, r5, r0
    add r22, r4, r0
    lwz r0, 0x540(r22)
    mulli r0, r0, 0x54
    add r23, r22, r0
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x0(r23)
    mr r24, r23
    li r25, 0x0
lbl_fn_8020D688_000002C4:
    addi r3, r1, 0xc64
    bl fn_8005B3CC
    bl fn_800DC6B4
    addi r25, r25, 0x1
    stwu r3, 0x4(r24)
    cmpwi r25, 0x3
    blt lbl_fn_8020D688_000002C4
    addi r3, r1, 0xc64
    bl fn_8005B3CC
    addi r3, r1, 0x10
    bl fn_8005B710
    addi r0, r23, 0x10
    mr r24, r3
    cmplw r3, r0
    beq lbl_fn_8020D688_00000318
    bl fn_80686A48
    mr r5, r3
    mr r4, r24
    addi r3, r23, 0x10
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_8020D688_00000318:
    addi r3, r1, 0xc64
    bl fn_8005B3CC
    addi r4, r26, 0x89
    li r5, 0x4
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8020D688_00000338
    stw r29, 0x50(r23)
lbl_fn_8020D688_00000338:
    lwz r3, 0x540(r22)
    addi r0, r3, 0x1
    stw r0, 0x540(r22)
lbl_fn_8020D688_00000344:
    addi r3, r1, 0xc64
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8020D688_000001D4
    lwz r3, lbl_8087F518
    mr r4, r31
    bl fn_8046DD20
    lwz r3, lbl_8087F518
    mr r4, r30
    bl fn_8046DD20
    lmw r22, 0x1298(r1)
    lwz r0, 0x12c4(r1)
    mtlr r0
    addi r1, r1, 0x12c0
    blr
}

asm void fn_8020DA08(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, fn_8020DA68@ha
    lis r5, fn_8020DA74@ha
    stw r0, 0x14(r1)
    li r6, 0x54
    addi r4, r4, fn_8020DA68@l
    addi r5, r5, fn_8020DA74@l
    stw r31, 0xc(r1)
    mr r31, r3
    li r7, 0x10
    bl fn_806958E0
    mr r3, r31
    li r4, 0x0
    li r5, 0x540
    bl memset
    li r0, 0x0
    stw r0, 0x540(r31)
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020DA68(void)
{
    nofralloc
    li r0, 0x0
    sth r0, 0x10(r3)
    blr
}

asm void fn_8020DA74(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8020DA74_00000414
    cmpwi r4, 0x0
    ble lbl_fn_8020DA74_00000414
    bl dtor_80084684
lbl_fn_8020DA74_00000414:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020DAB4(void)
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
    beq lbl_fn_8020DAB4_00000474
    lis r4, fn_8020DA74@ha
    li r5, 0x54
    addi r4, r4, fn_8020DA74@l
    li r6, 0x10
    bl fn_806959D8
    cmpwi r31, 0x0
    ble lbl_fn_8020DAB4_00000474
    mr r3, r30
    bl dtor_80084684
lbl_fn_8020DAB4_00000474:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020DB18(void)
{
    nofralloc
    cmpwi r3, 0x0
    blt lbl_fn_8020DB18_000004C8
    cmpwi r3, 0xb
    bge lbl_fn_8020DB18_000004C8
    cmpwi r4, 0x0
    blt lbl_fn_8020DB18_000004C8
    cmpwi r4, 0x4
    bge lbl_fn_8020DB18_000004C8
    mulli r0, r3, 0x1510
    lwz r5, lbl_8087F1E8
    mulli r3, r4, 0x544
    add r0, r5, r0
    add r3, r3, r0
    blr
lbl_fn_8020DB18_000004C8:
    li r3, 0x0
    blr
}

asm void fn_8020DB58(void)
{
    nofralloc
    stwu r1, -0x780(r1)
    mflr r0
    stw r0, 0x784(r1)
    stmw r18, 0x748(r1)
    lwz r0, lbl_8087F1EC
    cmpwi r0, 0x0
    bne lbl_fn_8020DB58_00000528
    lis r5, lbl_8073F678@ha
    li r3, 0x1b80
    addi r5, r5, lbl_8073F678@l
    li r4, 0x1
    addi r5, r5, 0x2e
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r19, r3
    beq lbl_fn_8020DB58_00000524
    li r4, 0x0
    li r5, 0x1b80
    bl memset
lbl_fn_8020DB58_00000524:
    stw r19, lbl_8087F1EC
lbl_fn_8020DB58_00000528:
    lis r31, lbl_8073F678@ha
    lis r27, lbl_8073F614@ha
    lis r28, lbl_807772D0@ha
    lis r30, lbl_807772B0@ha
    addi r31, r31, lbl_8073F678@l
    addi r27, r27, lbl_8073F614@l
    addi r28, r28, lbl_807772D0@l
    addi r30, r30, lbl_807772B0@l
    li r23, -0x1
    li r22, 0x0
    li r21, 0x0
    li r26, 0x0
    li r29, 0x0
lbl_fn_8020DB58_0000055C:
    lbz r5, 0x0(r27)
    addi r3, r1, 0x10
    addi r4, r31, 0x8e
    extsb r5, r5
    crclr 6
    bl sprintf
    lwz r3, lbl_8087F518
    addi r4, r1, 0x10
    addi r5, r1, 0x8
    li r6, 0x20
    bl fn_8046DC5C
    stw r28, 0x110(r1)
    mr r20, r3
    lwz r19, 0x8(r1)
    addi r3, r1, 0x120
    stw r29, 0x114(r1)
    li r4, 0x0
    li r5, 0x400
    stw r29, 0x118(r1)
    stw r29, 0x11c(r1)
    stw r29, 0x740(r1)
    bl memset
    addi r3, r1, 0x720
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x110(r1)
    mr r4, r20
    mr r5, r19
    addi r3, r1, 0x110
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    stw r30, 0x110(r1)
    addi r3, r1, 0x110
    la r4, lbl_8087D708
    bl fn_8005B6E8
    b lbl_fn_8020DB58_00000740
lbl_fn_8020DB58_000005F4:
    addi r3, r1, 0x110
    bl fn_8005B3CC
    mr r19, r3
    addi r4, r31, 0xba
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8020DB58_00000740
    lbz r0, 0x0(r19)
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_8020DB58_00000740
    cmpwi r0, 0x23
    beq lbl_fn_8020DB58_00000740
    mr r3, r19
    mr r4, r31
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020DB58_000006A0
    addi r3, r1, 0x110
    bl fn_8005B3CC
    addi r3, r1, 0x110
    bl fn_8005B3CC
    slwi r24, r23, 4
    li r19, 0x0
    li r25, 0x0
lbl_fn_8020DB58_00000658:
    lwz r0, lbl_8087F1EC
    add r4, r26, r25
    addi r3, r1, 0x110
    add r0, r24, r0
    add r18, r4, r0
    bl fn_8005B3CC
    addi r4, r31, 0xbc
    li r5, 0x1
    bl fn_80682544
    addi r19, r19, 0x1
    cntlzw r0, r3
    cmpwi r19, 0xa
    addi r25, r25, 0x2c0
    srwi r0, r0, 5
    stbx r0, r22, r18
    blt lbl_fn_8020DB58_00000658
    addi r22, r22, 0x1
    b lbl_fn_8020DB58_00000740
lbl_fn_8020DB58_000006A0:
    mr r3, r19
    addi r4, r31, 0xbe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020DB58_000006C0
    li r23, 0x0
    li r22, 0x0
    b lbl_fn_8020DB58_00000740
lbl_fn_8020DB58_000006C0:
    mr r3, r19
    addi r4, r31, 0xc3
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020DB58_000006E0
    li r23, 0x2
    li r22, 0x0
    b lbl_fn_8020DB58_00000740
lbl_fn_8020DB58_000006E0:
    mr r3, r19
    addi r4, r31, 0xc8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020DB58_00000700
    li r23, 0x3
    li r22, 0x0
    b lbl_fn_8020DB58_00000740
lbl_fn_8020DB58_00000700:
    mr r3, r19
    addi r4, r31, 0xcd
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020DB58_00000720
    li r23, 0x1
    li r22, 0x0
    b lbl_fn_8020DB58_00000740
lbl_fn_8020DB58_00000720:
    mr r3, r19
    addi r4, r31, 0xd2
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8020DB58_00000740
    li r23, -0x1
    li r22, 0x0
lbl_fn_8020DB58_00000740:
    addi r3, r1, 0x110
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8020DB58_000005F4
    lwz r3, lbl_8087F518
    mr r4, r20
    bl fn_8046DD20
    addi r21, r21, 0x1
    addi r26, r26, 0x40
    cmpwi r21, 0xb
    addi r27, r27, 0x1
    blt lbl_fn_8020DB58_0000055C
    lmw r18, 0x748(r1)
    lwz r0, 0x784(r1)
    mtlr r0
    addi r1, r1, 0x780
    blr
}

asm void fn_8020DE0C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r24, r4
    mr r31, r3
    mr r3, r24
    bl strlen
    cmpwi r3, 0x9
    mr r30, r3
    li r28, -0x1
    li r27, -0x1
    li r26, -0x1
    blt lbl_fn_8020DE0C_000007F8
    lis r29, lbl_8073F600@ha
    li r25, 0x0
    addi r29, r29, lbl_8073F600@l
lbl_fn_8020DE0C_000007C8:
    lwz r3, 0x0(r29)
    addi r4, r24, 0x8
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8020DE0C_000007E8
    mr r26, r25
    b lbl_fn_8020DE0C_000007F8
lbl_fn_8020DE0C_000007E8:
    addi r25, r25, 0x1
    addi r29, r29, 0x4
    cmpwi r25, 0x4
    blt lbl_fn_8020DE0C_000007C8
lbl_fn_8020DE0C_000007F8:
    cmpwi r30, 0xb
    blt lbl_fn_8020DE0C_00000840
    lis r4, lbl_8073F614@ha
    li r0, 0xb
    addi r4, r4, lbl_8073F614@l
    li r5, 0x0
    mtctr r0
lbl_fn_8020DE0C_00000814:
    lbz r3, 0x0(r4)
    lbz r0, 0xb(r24)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    bne lbl_fn_8020DE0C_00000834
    mr r27, r5
    b lbl_fn_8020DE0C_00000840
lbl_fn_8020DE0C_00000834:
    addi r4, r4, 0x1
    addi r5, r5, 0x1
    bdnz lbl_fn_8020DE0C_00000814
lbl_fn_8020DE0C_00000840:
    cmpwi r30, 0xf
    blt lbl_fn_8020DE0C_00000854
    addi r3, r24, 0xf
    bl fn_800DC12C
    mr r28, r3
lbl_fn_8020DE0C_00000854:
    cmpwi r28, 0x0
    blt lbl_fn_8020DE0C_00000864
    cmpwi r28, 0xa
    blt lbl_fn_8020DE0C_0000086C
lbl_fn_8020DE0C_00000864:
    li r4, 0x0
    b lbl_fn_8020DE0C_000008B8
lbl_fn_8020DE0C_0000086C:
    cmpwi r27, 0x0
    blt lbl_fn_8020DE0C_0000087C
    cmpwi r27, 0xb
    blt lbl_fn_8020DE0C_00000884
lbl_fn_8020DE0C_0000087C:
    li r4, 0x0
    b lbl_fn_8020DE0C_000008B8
lbl_fn_8020DE0C_00000884:
    cmpwi r26, 0x0
    blt lbl_fn_8020DE0C_00000894
    cmpwi r26, 0x4
    blt lbl_fn_8020DE0C_0000089C
lbl_fn_8020DE0C_00000894:
    li r4, 0x0
    b lbl_fn_8020DE0C_000008B8
lbl_fn_8020DE0C_0000089C:
    mulli r0, r28, 0x2c0
    lwz r5, lbl_8087F1EC
    slwi r4, r27, 6
    slwi r3, r26, 4
    add r0, r5, r0
    add r0, r4, r0
    add r4, r3, r0
lbl_fn_8020DE0C_000008B8:
    cmpwi r4, 0x0
    beq lbl_fn_8020DE0C_000008EC
    mr r5, r31
    li r3, 0x0
    b lbl_fn_8020DE0C_000008E0
lbl_fn_8020DE0C_000008CC:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    stw r0, 0x40(r5)
    addi r5, r5, 0x44
    addi r3, r3, 0x1
lbl_fn_8020DE0C_000008E0:
    lwz r0, 0x10d0(r31)
    cmpw r3, r0
    blt lbl_fn_8020DE0C_000008CC
lbl_fn_8020DE0C_000008EC:
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8020DF88(void)
{
    nofralloc
    stwu r1, -0x7c0(r1)
    mflr r0
    lwz r4, lbl_80882E8C
    li r6, 0x20
    stw r0, 0x7c4(r1)
    addi r5, r1, 0x28
    stmw r14, 0x778(r1)
    li r14, 0x0
    stw r14, 0x28(r1)
    lwz r3, lbl_8087F518
    bl fn_8046DC5C
    lis r4, lbl_807772D0@ha
    stw r3, 0x770(r1)
    addi r4, r4, lbl_807772D0@l
    lwz r15, 0x28(r1)
    stw r4, 0x13c(r1)
    addi r3, r1, 0x14c
    li r4, 0x0
    li r5, 0x400
    stw r14, 0x140(r1)
    stw r14, 0x144(r1)
    stw r14, 0x148(r1)
    stw r14, 0x76c(r1)
    bl memset
    addi r3, r1, 0x74c
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x13c(r1)
    mr r5, r15
    lwz r4, 0x770(r1)
    addi r3, r1, 0x13c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x13c
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x13c(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    li r15, 0x0
    lis r14, lbl_8073F814@ha
    b lbl_fn_8020DF88_000009CC
lbl_fn_8020DF88_000009B0:
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r4, r14, lbl_8073F814@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020DF88_000009CC
    addi r15, r15, 0x1
lbl_fn_8020DF88_000009CC:
    addi r3, r1, 0x13c
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8020DF88_000009B0
    addi r14, r15, 0x80
    lis r27, lbl_8073F814@ha
    mulli r3, r14, 0x10c
    li r4, 0x3
    addi r5, r27, lbl_8073F814@l
    li r7, 0x0
    mr r6, r5
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_8020E990@ha
    lis r5, fn_8020EACC@ha
    mr r7, r14
    li r6, 0x10c
    addi r4, r4, fn_8020E990@l
    addi r5, r5, fn_8020EACC@l
    bl fn_80695720
    stw r3, lbl_8087F1F0
    mr r0, r14
    lwz r12, 0x13c(r1)
    addi r3, r1, 0x13c
    stw r0, lbl_8087F1F8
    lwz r4, 0x770(r1)
    lwz r12, 0x8(r12)
    lwz r5, 0x28(r1)
    mtctr r12
    bctrl
    addi r19, r1, 0x2d
    addi r23, r1, 0x38
    addi r24, r1, 0x74
    addi r14, r1, 0x2c
    addi r26, r1, 0x118
    addi r25, r1, 0xb0
    addi r22, r1, 0xd4
    li r17, 0x0
    li r20, 0x0
    li r28, -0x1
    li r29, 0x0
    b lbl_fn_8020DF88_000012A8
lbl_fn_8020DF88_00000A74:
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r4, r27, lbl_8073F814@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020DF88_000012A8
    lwz r0, lbl_8087F1F0
    addi r3, r1, 0x13c
    add r16, r0, r20
    stw r28, 0x78(r16)
    stw r29, 0x7c(r16)
    bl fn_8005B3CC
    mr r18, r3
    lis r3, lbl_8073F7A8@ha
    addi r15, r3, lbl_8073F7A8@l
    li r21, 0x0
lbl_fn_8020DF88_00000AB4:
    lwz r4, 0x0(r15)
    mr r3, r18
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8020DF88_00000AE0
    stw r21, 0x78(r16)
    addi r3, r18, 0x2
    bl fn_80684600
    stw r3, 0x7c(r16)
    b lbl_fn_8020DF88_00000AF0
lbl_fn_8020DF88_00000AE0:
    addi r21, r21, 0x1
    addi r15, r15, 0x4
    cmpwi r21, 0x5
    blt lbl_fn_8020DF88_00000AB4
lbl_fn_8020DF88_00000AF0:
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r0, r16, 0x88
    mr r15, r3
    cmplw r3, r0
    beq lbl_fn_8020DF88_00000B30
    bl strlen
    mr r5, r3
    mr r4, r15
    addi r3, r16, 0x88
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8020DF88_00000B30:
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x0(r16)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x4(r16)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x8(r16)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0xc(r16)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x10(r16)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x14(r16)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x28(r16)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x2c(r16)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x18(r16)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1c(r16)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x30(r16)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x34(r16)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    stw r29, 0x2c(r1)
    mr r15, r3
    stw r29, 0x30(r1)
    stw r29, 0x34(r1)
    bl strlen
    mr r18, r3
    mr r3, r14
    mr r4, r18
    bl fn_80013DC4
    lbz r0, 0x24(r1)
    mr r3, r14
    stb r0, 0x20(r1)
    mr r6, r15
    add r7, r15, r18
    addi r8, r1, 0x20
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r3, r27, lbl_8073F814@l
    stw r29, 0xb0(r1)
    addi r15, r3, 0x1
    stw r29, 0xb4(r1)
    mr r3, r15
    stw r29, 0xb8(r1)
    stw r29, 0xbc(r1)
    stw r29, 0xc0(r1)
    stw r29, 0xc4(r1)
    bl strlen
    mr r18, r3
    addi r3, r1, 0xbc
    mr r4, r18
    bl fn_80013DC4
    lbz r0, 0x18(r1)
    mr r6, r15
    stb r0, 0x1c(r1)
    addi r3, r1, 0xbc
    add r7, r15, r18
    addi r8, r1, 0x1c
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x2c(r1)
    stb r29, 0xc8(r1)
    srwi. r0, r0, 31
    stb r29, 0xc9(r1)
    stw r29, 0xcc(r1)
    stb r29, 0xd0(r1)
    bne lbl_fn_8020DF88_00000CC0
    mr r3, r19
    b lbl_fn_8020DF88_00000CC4
lbl_fn_8020DF88_00000CC0:
    lwz r3, 0x34(r1)
lbl_fn_8020DF88_00000CC4:
    lwz r0, 0x2c(r1)
    stw r3, 0x110(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8020DF88_00000CE4
    lbz r0, 0x2c(r1)
    mr r3, r19
    clrlwi r0, r0, 25
    b lbl_fn_8020DF88_00000CEC
lbl_fn_8020DF88_00000CE4:
    lwz r3, 0x34(r1)
    lwz r0, 0x30(r1)
lbl_fn_8020DF88_00000CEC:
    lwz r4, 0xb0(r1)
    add r0, r3, r0
    stw r0, 0x114(r1)
    srwi. r0, r4, 31
    bne lbl_fn_8020DF88_00000D18
    lwz r3, 0xb4(r1)
    lwz r0, 0xb8(r1)
    stw r4, 0x118(r1)
    stw r3, 0x11c(r1)
    stw r0, 0x120(r1)
    b lbl_fn_8020DF88_00000D58
lbl_fn_8020DF88_00000D18:
    stw r29, 0x118(r1)
    mr r3, r26
    lwz r4, 0xb4(r1)
    stw r29, 0x11c(r1)
    stw r29, 0x120(r1)
    bl fn_80013DC4
    lbz r5, 0x14(r1)
    mr r3, r26
    stb r5, 0x10(r1)
    addi r8, r1, 0x10
    lwz r6, 0xb8(r1)
    li r4, 0x0
    lwz r0, 0xb4(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8020DF88_00000D58:
    lwz r4, 0xbc(r1)
    srwi. r0, r4, 31
    bne lbl_fn_8020DF88_00000D7C
    lwz r3, 0xc0(r1)
    lwz r0, 0xc4(r1)
    stw r4, 0x124(r1)
    stw r3, 0x128(r1)
    stw r0, 0x12c(r1)
    b lbl_fn_8020DF88_00000DBC
lbl_fn_8020DF88_00000D7C:
    lwz r4, 0xc0(r1)
    addi r3, r26, 0xc
    stw r29, 0xc(r26)
    stw r29, 0x10(r26)
    stw r29, 0x14(r26)
    bl fn_80013DC4
    lbz r5, 0xc(r1)
    addi r3, r26, 0xc
    stb r5, 0x8(r1)
    addi r8, r1, 0x8
    lwz r6, 0xc4(r1)
    li r4, 0x0
    lwz r0, 0xc0(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8020DF88_00000DBC:
    addic. r0, r25, 0xc
    lbz r5, 0xc8(r1)
    lbz r4, 0xc9(r1)
    lwz r3, 0xcc(r1)
    lbz r0, 0xd0(r1)
    stb r5, 0x130(r1)
    stb r4, 0x131(r1)
    stw r3, 0x134(r1)
    stb r0, 0x138(r1)
    beq lbl_fn_8020DF88_00000DF8
    lwz r0, 0xbc(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020DF88_00000DF8
    lwz r3, 0xc4(r1)
    bl dtor_80084684
lbl_fn_8020DF88_00000DF8:
    cmpwi r25, 0x0
    beq lbl_fn_8020DF88_00000E14
    lwz r0, 0xb0(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020DF88_00000E14
    lwz r3, 0xb8(r1)
    bl dtor_80084684
lbl_fn_8020DF88_00000E14:
    addi r3, r1, 0xd4
    addi r4, r1, 0x110
    li r15, 0x0
    bl fn_800EC654
    mr r18, r16
    addi r31, r23, 0x30
    addi r30, r24, 0x30
    b lbl_fn_8020DF88_00000EC8
lbl_fn_8020DF88_00000E34:
    lwz r0, 0x104(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8020DF88_00000E48
    addi r3, r1, 0x105
    b lbl_fn_8020DF88_00000E4C
lbl_fn_8020DF88_00000E48:
    lwz r3, 0x10c(r1)
lbl_fn_8020DF88_00000E4C:
    bl fn_800DC288
    stfs f1, 0x38(r18)
    addi r3, r1, 0x74
    addi r4, r1, 0xd4
    li r5, 0x0
    addi r18, r18, 0x4
    addi r15, r15, 0x1
    bl fn_80205BE8
    cmpwi r30, 0x0
    beq lbl_fn_8020DF88_00000E88
    lwz r0, 0xa4(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020DF88_00000E88
    lwz r3, 0xac(r1)
    bl dtor_80084684
lbl_fn_8020DF88_00000E88:
    cmpwi r24, 0x0
    beq lbl_fn_8020DF88_00000EC8
    addic. r0, r24, 0xc
    beq lbl_fn_8020DF88_00000EAC
    lwz r0, 0x80(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020DF88_00000EAC
    lwz r3, 0x88(r1)
    bl dtor_80084684
lbl_fn_8020DF88_00000EAC:
    cmpwi r24, 0x0
    beq lbl_fn_8020DF88_00000EC8
    lwz r0, 0x74(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020DF88_00000EC8
    lwz r3, 0x7c(r1)
    bl dtor_80084684
lbl_fn_8020DF88_00000EC8:
    addi r3, r1, 0x38
    addi r4, r1, 0x110
    bl fn_800EDFE8
    lbz r4, 0x64(r1)
    li r21, 0x0
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_8020DF88_00000EF8
    lbz r0, 0x100(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8020DF88_00000EF8
    li r3, 0x1
lbl_fn_8020DF88_00000EF8:
    cmpwi r3, 0x0
    beq lbl_fn_8020DF88_00000F2C
    lwz r3, 0x5c(r1)
    li r4, 0x0
    lwz r0, 0xf8(r1)
    cmplw r3, r0
    bne lbl_fn_8020DF88_00000F3C
    lwz r3, 0x60(r1)
    lwz r0, 0xfc(r1)
    cmplw r3, r0
    bne lbl_fn_8020DF88_00000F3C
    li r4, 0x1
    b lbl_fn_8020DF88_00000F3C
lbl_fn_8020DF88_00000F2C:
    lbz r0, 0x100(r1)
    subf r0, r4, r0
    cntlzw r0, r0
    srwi r4, r0, 5
lbl_fn_8020DF88_00000F3C:
    cmpwi r4, 0x0
    bne lbl_fn_8020DF88_00000F50
    cmpwi r15, 0x7
    bge lbl_fn_8020DF88_00000F50
    li r21, 0x1
lbl_fn_8020DF88_00000F50:
    cmpwi r31, 0x0
    beq lbl_fn_8020DF88_00000F6C
    lwz r0, 0x68(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020DF88_00000F6C
    lwz r3, 0x70(r1)
    bl dtor_80084684
lbl_fn_8020DF88_00000F6C:
    cmpwi r23, 0x0
    beq lbl_fn_8020DF88_00000FAC
    addic. r0, r23, 0xc
    beq lbl_fn_8020DF88_00000F90
    lwz r0, 0x44(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020DF88_00000F90
    lwz r3, 0x4c(r1)
    bl dtor_80084684
lbl_fn_8020DF88_00000F90:
    cmpwi r23, 0x0
    beq lbl_fn_8020DF88_00000FAC
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020DF88_00000FAC
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_8020DF88_00000FAC:
    cmpwi r21, 0x0
    bne lbl_fn_8020DF88_00000E34
    addic. r0, r22, 0x30
    beq lbl_fn_8020DF88_00000FD0
    lwz r0, 0x104(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020DF88_00000FD0
    lwz r3, 0x10c(r1)
    bl dtor_80084684
lbl_fn_8020DF88_00000FD0:
    cmpwi r22, 0x0
    beq lbl_fn_8020DF88_00001010
    addic. r0, r22, 0xc
    beq lbl_fn_8020DF88_00000FF4
    lwz r0, 0xe0(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020DF88_00000FF4
    lwz r3, 0xe8(r1)
    bl dtor_80084684
lbl_fn_8020DF88_00000FF4:
    cmpwi r22, 0x0
    beq lbl_fn_8020DF88_00001010
    lwz r0, 0xd4(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020DF88_00001010
    lwz r3, 0xdc(r1)
    bl dtor_80084684
lbl_fn_8020DF88_00001010:
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    mr r15, r16
    li r18, 0x0
lbl_fn_8020DF88_00001038:
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_80684600
    addi r18, r18, 0x1
    stw r3, 0xac(r15)
    cmpwi r18, 0x4
    addi r15, r15, 0x4
    blt lbl_fn_8020DF88_00001038
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xbc(r16)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r0, r16, 0xc0
    mr r15, r3
    cmplw r3, r0
    beq lbl_fn_8020DF88_00001098
    bl strlen
    mr r5, r3
    mr r4, r15
    addi r3, r16, 0xc0
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8020DF88_00001098:
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r0, r16, 0xd0
    mr r15, r3
    cmplw r3, r0
    beq lbl_fn_8020DF88_000010C8
    bl strlen
    mr r5, r3
    mr r4, r15
    addi r3, r16, 0xd0
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8020DF88_000010C8:
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xe0(r16)
    mr r15, r16
    li r18, 0x0
lbl_fn_8020DF88_000010E0:
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xe4(r15)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xe8(r15)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xec(r15)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xf0(r15)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_80684600
    addi r18, r18, 0x1
    stw r3, 0xf4(r15)
    cmpwi r18, 0x2
    addi r15, r15, 0x14
    blt lbl_fn_8020DF88_000010E0
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    li r15, 0x0
lbl_fn_8020DF88_0000114C:
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r15, r15, 0x1
    cmpwi r15, 0x4
    blt lbl_fn_8020DF88_0000114C
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    stw r28, 0xa8(r16)
    lbz r0, 0x88(r16)
    cmpwi r0, 0x70
    bne lbl_fn_8020DF88_0000124C
    lbz r0, 0x89(r16)
    cmpwi r0, 0x63
    bne lbl_fn_8020DF88_0000124C
    lbz r0, 0x91(r16)
    extsb r3, r0
    subi r0, r3, 0x61
    cmplwi r0, 0x18
    bgt lbl_fn_8020DF88_00001248
    lis r3, jumptable_80783010@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80783010@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    stw r29, 0xa8(r16)
    b lbl_fn_8020DF88_0000124C
    li r0, 0x1
    stw r0, 0xa8(r16)
    b lbl_fn_8020DF88_0000124C
    li r0, 0x2
    stw r0, 0xa8(r16)
    b lbl_fn_8020DF88_0000124C
    li r0, 0x3
    stw r0, 0xa8(r16)
    b lbl_fn_8020DF88_0000124C
    li r0, 0x4
    stw r0, 0xa8(r16)
    b lbl_fn_8020DF88_0000124C
    li r0, 0x5
    stw r0, 0xa8(r16)
    b lbl_fn_8020DF88_0000124C
    li r0, 0x6
    stw r0, 0xa8(r16)
    b lbl_fn_8020DF88_0000124C
    li r0, 0x7
    stw r0, 0xa8(r16)
    b lbl_fn_8020DF88_0000124C
    li r0, 0x8
    stw r0, 0xa8(r16)
    b lbl_fn_8020DF88_0000124C
    li r0, 0x9
    stw r0, 0xa8(r16)
    b lbl_fn_8020DF88_0000124C
    li r0, 0xa
    stw r0, 0xa8(r16)
    b lbl_fn_8020DF88_0000124C
lbl_fn_8020DF88_00001248:
    stw r28, 0xa8(r16)
lbl_fn_8020DF88_0000124C:
    cmpwi r26, 0x0
    addi r20, r20, 0x10c
    addi r17, r17, 0x1
    beq lbl_fn_8020DF88_00001294
    addic. r0, r26, 0xc
    beq lbl_fn_8020DF88_00001278
    lwz r0, 0x124(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020DF88_00001278
    lwz r3, 0x12c(r1)
    bl dtor_80084684
lbl_fn_8020DF88_00001278:
    cmpwi r26, 0x0
    beq lbl_fn_8020DF88_00001294
    lwz r0, 0x118(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020DF88_00001294
    lwz r3, 0x120(r1)
    bl dtor_80084684
lbl_fn_8020DF88_00001294:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020DF88_000012A8
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_8020DF88_000012A8:
    addi r3, r1, 0x13c
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8020DF88_00000A74
    mulli r5, r17, 0x10c
    li r4, -0x1
    b lbl_fn_8020DF88_000012D8
lbl_fn_8020DF88_000012C4:
    lwz r0, lbl_8087F1F0
    addi r17, r17, 0x1
    add r3, r0, r5
    addi r5, r5, 0x10c
    stw r4, 0x7c(r3)
lbl_fn_8020DF88_000012D8:
    lwz r0, lbl_8087F1F8
    cmpw r17, r0
    blt lbl_fn_8020DF88_000012C4
    lwz r3, lbl_8087F518
    lwz r4, 0x770(r1)
    bl fn_8046DD20
    bl fn_8020EB0C
    lmw r14, 0x778(r1)
    lwz r0, 0x7c4(r1)
    mtlr r0
    addi r1, r1, 0x7c0
    blr
}

asm void fn_8020E990(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r6, r3, 0xf8
    addi r4, r3, 0x10c
    stw r0, 0x14(r1)
    cmplw r6, r4
    lfs f1, lbl_80882E94
    li r5, 0x0
    stw r31, 0xc(r1)
    li r0, 0x5
    lfs f0, lbl_80882E98
    mr r31, r3
    stfs f1, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f1, 0x8(r3)
    stfs f1, 0xc(r3)
    stfs f0, 0x10(r3)
    stfs f0, 0x14(r3)
    stfs f1, 0x18(r3)
    stfs f1, 0x1c(r3)
    stw r5, 0x20(r3)
    stw r5, 0x24(r3)
    stfs f1, 0x28(r3)
    stfs f1, 0x2c(r3)
    stw r5, 0x30(r3)
    stw r5, 0x34(r3)
    stfs f1, 0x38(r3)
    stfs f1, 0x54(r3)
    stfs f1, 0x3c(r3)
    stfs f1, 0x58(r3)
    stfs f1, 0x40(r3)
    stfs f1, 0x5c(r3)
    stfs f1, 0x44(r3)
    stfs f1, 0x60(r3)
    stfs f1, 0x48(r3)
    stfs f1, 0x64(r3)
    stfs f1, 0x4c(r3)
    stfs f1, 0x68(r3)
    stfs f1, 0x50(r3)
    stfs f1, 0x6c(r3)
    stw r0, 0x78(r3)
    stw r5, 0x7c(r3)
    stb r5, 0x88(r3)
    stw r5, 0xbc(r3)
    stb r5, 0xc0(r3)
    stb r5, 0xd0(r3)
    stw r5, 0xe0(r3)
    stw r5, 0xe4(r3)
    stw r5, 0xe8(r3)
    stw r5, 0xec(r3)
    stw r5, 0xf0(r3)
    stw r5, 0xf4(r3)
    bge lbl_fn_8020E990_00001410
    addi r4, r4, 0x13
    li r0, 0x14
    subf r4, r6, r4
    divwu r4, r4, r0
    mtctr r4
    bge lbl_fn_8020E990_00001410
lbl_fn_8020E990_000013F4:
    stw r5, 0x0(r6)
    stw r5, 0x4(r6)
    stw r5, 0x8(r6)
    stw r5, 0xc(r6)
    stw r5, 0x10(r6)
    addi r6, r6, 0x14
    bdnz lbl_fn_8020E990_000013F4
lbl_fn_8020E990_00001410:
    li r4, 0x0
    li r5, 0x10
    addi r3, r3, 0xac
    bl memset
    li r0, 0x0
    stw r0, 0x80(r31)
    mr r3, r31
    stw r0, 0x84(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020EACC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8020EACC_0000146C
    cmpwi r4, 0x0
    ble lbl_fn_8020EACC_0000146C
    bl dtor_80084684
lbl_fn_8020EACC_0000146C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020EB0C(void)
{
    nofralloc
    stwu r1, -0xc80(r1)
    mflr r0
    stw r0, 0xc84(r1)
    stmw r27, 0xc6c(r1)
    lwz r0, lbl_8087F1F0
    cmpwi r0, 0x0
    beq lbl_fn_8020EB0C_000016E8
    li r30, 0x0
    stw r30, 0x8(r1)
    lwz r3, lbl_80882E90
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_8006BA8C
    lwz r0, 0x8(r1)
    lis r4, lbl_8077A090@ha
    addi r4, r4, lbl_8077A090@l
    stw r4, 0xc(r1)
    mr r31, r3
    srwi r28, r0, 1
    stw r30, 0x10(r1)
    addi r29, r1, 0xc
    addi r3, r1, 0x1c
    li r4, 0x0
    stw r30, 0x14(r1)
    li r5, 0x800
    stw r30, 0x18(r1)
    stw r30, 0xc5c(r1)
    bl memset
    addi r3, r1, 0xc1c
    li r4, 0x0
    li r5, 0x40
    bl memset
    cmpwi r28, 0x0
    mr r5, r28
    beq lbl_fn_8020EB0C_00001514
    subi r5, r28, 0x1
lbl_fn_8020EB0C_00001514:
    cmpwi r28, 0x0
    mr r3, r29
    beq lbl_fn_8020EB0C_00001528
    addi r4, r31, 0x2
    b lbl_fn_8020EB0C_0000152C
lbl_fn_8020EB0C_00001528:
    mr r4, r31
lbl_fn_8020EB0C_0000152C:
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_8077A070@ha
    lis r4, lbl_8077A0A8@ha
    addi r3, r3, lbl_8077A070@l
    stw r3, 0xc(r1)
    mr r3, r29
    addi r4, r4, lbl_8077A0A8@l
    bl fn_8005B9AC
    li r28, 0x0
    b lbl_fn_8020EB0C_000015AC
lbl_fn_8020EB0C_00001560:
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8020EB0C_000015AC
    cmplwi r0, 0x23
    beq lbl_fn_8020EB0C_000015AC
    addi r3, r1, 0xc
    bl fn_8005B710
    bl fn_80686A48
    add r4, r3, r28
    addi r3, r1, 0xc
    addi r28, r4, 0x1
    bl fn_8005B710
    addi r3, r1, 0xc
    bl fn_8005B710
    bl fn_80686A48
    add r3, r3, r28
    addi r28, r3, 0x1
lbl_fn_8020EB0C_000015AC:
    addi r3, r1, 0xc
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_8020EB0C_00001560
    lis r5, lbl_8073F814@ha
    slwi r3, r28, 1
    addi r5, r5, lbl_8073F814@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    stw r3, lbl_8087F1F4
    addi r3, r1, 0x1c
    li r30, 0x0
    li r4, 0x0
    li r5, 0x800
    bl memset
    addi r3, r1, 0xc1c
    li r4, 0x0
    li r5, 0x40
    bl memset
    lwz r12, 0xc(r1)
    addi r3, r1, 0xc
    lwz r4, 0x10(r1)
    lwz r12, 0x8(r12)
    lwz r5, 0x14(r1)
    mtctr r12
    bctrl
    li r28, 0x0
    b lbl_fn_8020EB0C_000016CC
lbl_fn_8020EB0C_00001624:
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8020EB0C_000016CC
    cmplwi r0, 0x23
    beq lbl_fn_8020EB0C_000016CC
    lwz r0, lbl_8087F1F0
    slwi r29, r30, 1
    addi r3, r1, 0xc
    add r27, r0, r28
    bl fn_8005B710
    lwz r0, lbl_8087F1F4
    mr r4, r3
    add r3, r0, r29
    bl fn_80686A64
    lwz r0, lbl_8087F1F4
    add r0, r0, r29
    stw r0, 0x80(r27)
    lwz r0, lbl_8087F1F4
    add r3, r0, r29
    bl fn_80686A48
    add r4, r3, r30
    addi r3, r1, 0xc
    addi r30, r4, 0x1
    bl fn_8005B710
    slwi r29, r30, 1
    addi r3, r1, 0xc
    bl fn_8005B710
    lwz r0, lbl_8087F1F4
    mr r4, r3
    add r3, r0, r29
    bl fn_80686A64
    lwz r0, lbl_8087F1F4
    add r0, r0, r29
    stw r0, 0x84(r27)
    lwz r0, lbl_8087F1F4
    add r3, r0, r29
    bl fn_80686A48
    add r3, r3, r30
    addi r28, r28, 0x10c
    addi r30, r3, 0x1
lbl_fn_8020EB0C_000016CC:
    addi r3, r1, 0xc
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_8020EB0C_00001624
    mr r3, r31
    li r4, 0x0
    bl fn_8006BB6C
lbl_fn_8020EB0C_000016E8:
    lmw r27, 0xc6c(r1)
    lwz r0, 0xc84(r1)
    mtlr r0
    addi r1, r1, 0xc80
    blr
}

asm void fn_8020ED84(void)
{
    nofralloc
    cmpwi r4, 0x3e8
    blt lbl_fn_8020ED84_0000177C
    cmpwi r3, 0x2
    blt lbl_fn_8020ED84_00001730
    lis r5, 0x1062
    addi r0, r5, 0x4dd3
    mulhw r0, r0, r4
    srawi r0, r0, 6
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e8
    subf r4, r0, r4
    b lbl_fn_8020ED84_0000177C
lbl_fn_8020ED84_00001730:
    cmpwi r3, 0x1
    bne lbl_fn_8020ED84_0000177C
    lis r5, 0x1062
    addi r0, r5, 0x4dd3
    mulhw r6, r0, r4
    srawi r0, r6, 6
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e8
    subf r0, r0, r4
    cmpwi r0, 0x1c2
    blt lbl_fn_8020ED84_0000177C
    cmpwi r0, 0x1e0
    bgt lbl_fn_8020ED84_0000177C
    srawi r0, r6, 6
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e8
    subf r4, r0, r4
lbl_fn_8020ED84_0000177C:
    lwz r6, lbl_8087F1F0
    li r7, 0x0
    lwz r0, lbl_8087F1F8
    mr r5, r6
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8020ED84_000017C8
lbl_fn_8020ED84_00001798:
    lwz r0, 0x78(r5)
    cmpw r3, r0
    bne lbl_fn_8020ED84_000017BC
    lwz r0, 0x7c(r5)
    cmpw r4, r0
    bne lbl_fn_8020ED84_000017BC
    mulli r0, r7, 0x10c
    add r3, r6, r0
    blr
lbl_fn_8020ED84_000017BC:
    addi r5, r5, 0x10c
    addi r7, r7, 0x1
    bdnz lbl_fn_8020ED84_00001798
lbl_fn_8020ED84_000017C8:
    li r3, 0x0
    blr
}

asm void fn_8020EE58(void)
{
    nofralloc
    lwz r3, lbl_8087F1F8
    blr
}

asm void fn_8020EE60(void)
{
    nofralloc
    cmpwi r3, 0x0
    blt lbl_fn_8020EE60_000017EC
    lwz r0, lbl_8087F1F8
    cmpw r3, r0
    blt lbl_fn_8020EE60_000017F4
lbl_fn_8020EE60_000017EC:
    li r3, 0x0
    blr
lbl_fn_8020EE60_000017F4:
    mulli r0, r3, 0x10c
    lwz r3, lbl_8087F1F0
    add r3, r3, r0
    blr
}

asm void fn_8020EE8C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8073F7BC@ha
    addi r31, r31, lbl_8073F7BC@l
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
lbl_fn_8020EE8C_0000182C:
    lwz r3, 0x0(r31)
    mr r4, r29
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8020EE8C_0000184C
    mr r3, r30
    b lbl_fn_8020EE8C_00001860
lbl_fn_8020EE8C_0000184C:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0x5
    blt lbl_fn_8020EE8C_0000182C
    li r3, -0x1
lbl_fn_8020EE8C_00001860:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8020EF04(void)
{
    nofralloc
    lis r5, 0x14f9
    lis r4, 0x6666
    subi r0, r5, 0x4a77
    mulhw r3, r0, r3
    addi r0, r4, 0x6667
    srawi r3, r3, 13
    srwi r4, r3, 31
    add r4, r3, r4
    mulhw r0, r0, r4
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0xa
    subf r3, r0, r4
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_8020EF4C(void)
{
    nofralloc
    cmpwi r3, 0x0
    bne lbl_fn_8020EF4C_000018D4
    li r3, 0x0
    blr
lbl_fn_8020EF4C_000018D4:
    lwz r4, 0xa8(r3)
    li r3, 0x2
    subi r4, r4, 0x8
    subfic r0, r4, 0x2
    orc r3, r3, r4
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_8020EF80(void)
{
    nofralloc
    cmpwi r3, 0x0
    bne lbl_fn_8020EF80_00001908
    li r3, 0x0
    blr
lbl_fn_8020EF80_00001908:
    lis r4, 0x1062
    lwz r8, 0x7c(r3)
    addi r0, r4, 0x4dd3
    lis r5, 0x3
    mulhw r4, r0, r8
    lwz r7, 0x78(r3)
    lis r3, 0xf
    addi r9, r5, 0xd40
    addi r0, r3, 0x4240
    srawi r5, r4, 6
    srawi r3, r4, 6
    srwi r6, r5, 31
    srwi r4, r3, 31
    add r5, r5, r6
    add r3, r3, r4
    mulli r6, r7, 0x3e8
    mulli r4, r5, 0x3e8
    add r9, r9, r6
    subf r4, r4, r8
    mullw r0, r3, r0
    add r9, r9, r4
    add r3, r9, r0
    blr
}
