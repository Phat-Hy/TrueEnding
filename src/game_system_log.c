#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_800616C0(void);
extern void fn_8006A004(void);
extern void fn_8006AA20(void);
extern void fn_8006B174(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800DCA70(void);
extern void fn_800EC654(void);
extern void fn_800EDFE8(void);
extern void fn_8020685C(void);
extern void fn_8020689C(void);
extern void fn_8046DC5C(void);
extern void fn_8046DD20(void);
extern void fn_8068236C(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_80695720(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8073E780[];
extern u8 lbl_8073E814[];
extern u8 lbl_8073E880[];
extern u8 lbl_8073E900[];
extern u8 lbl_8073E938[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80782E88[];
extern u8 lbl_807BB380[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087F158;
extern u32 lbl_8087F15C;
extern u32 lbl_8087F160;
extern u32 lbl_8087F168;
extern u32 lbl_8087F518;
extern u32 lbl_80882D18;
extern u32 lbl_80882D1C;
extern u32 lbl_80882D20;
extern u32 lbl_80882D24;
extern u32 lbl_80882D28;
extern u32 lbl_80882D44;
extern u32 lbl_80882D54;
extern u32 lbl_80882D58;

/* Function declarations */
void fn_80204544(void);
void fn_802045D4(void);
void fn_802045F0(void);
void fn_80204690(void);
void fn_802048F8(void);
void fn_8020494C(void);
void fn_80204954(void);
void fn_80204958(void);
void fn_80204E04(void);
void fn_80204E54(void);
void fn_80205A78(void);
void fn_80205BE8(void);

asm void fn_80204544(void)
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
    beq lbl_fn_80204544_00000074
    lwz r0, 0x4c(r3)
    lis r4, lbl_80782E88@ha
    addi r4, r4, lbl_80782E88@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80204544_00000058
    beq lbl_fn_80204544_00000058
    mr r3, r0
    li r4, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80204544_00000058:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_80204544_00000074
    mr r3, r30
    bl dtor_80084684
lbl_fn_80204544_00000074:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802045D4(void)
{
    nofralloc
    lwz r5, 0x48(r3)
    li r4, 0x1
    subi r0, r5, 0x1
    stw r0, 0x48(r3)
    cntlzw r0, r0
    rlwnm r3, r4, r0, 31, 31
    blr
}

asm void fn_802045F0(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    mr r5, r3
    stw r0, 0x114(r1)
    lwz r4, 0x4c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802045F0_000000EC
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_802045F0_0000013C
    lwz r12, 0x0(r4)
    mr r3, r4
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    b lbl_fn_802045F0_0000013C
lbl_fn_802045F0_000000EC:
    lis r4, lbl_8073E780@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_8073E780@l
    addi r5, r5, 0x50
    addi r4, r4, 0x1b
    crclr 6
    bl sprintf
    lfs f3, lbl_80882D20
    addi r4, r1, 0x8
    lfs f4, lbl_80882D24
    li r5, -0x1
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f1, lbl_80882D18
    lfs f2, lbl_80882D1C
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
lbl_fn_802045F0_0000013C:
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80204690(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    addi r7, r3, 0x9
    li r8, 0x0
    stw r0, 0x34(r1)
    li r5, 0x2f
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    b lbl_fn_80204690_000001C0
lbl_fn_80204690_0000017C:
    cntlzw r0, r4
    srwi. r6, r0, 5
    beq lbl_fn_80204690_00000190
    mr r4, r7
    b lbl_fn_80204690_00000194
lbl_fn_80204690_00000190:
    lwz r4, 0x10(r3)
lbl_fn_80204690_00000194:
    lbzx r0, r4, r8
    extsb r0, r0
    cmpwi r0, 0x5c
    bne lbl_fn_80204690_000001BC
    cmpwi r6, 0x0
    beq lbl_fn_80204690_000001B4
    mr r4, r7
    b lbl_fn_80204690_000001B8
lbl_fn_80204690_000001B4:
    lwz r4, 0x10(r3)
lbl_fn_80204690_000001B8:
    stbx r5, r4, r8
lbl_fn_80204690_000001BC:
    addi r8, r8, 0x1
lbl_fn_80204690_000001C0:
    lwz r0, 0x8(r3)
    srwi. r4, r0, 31
    beq lbl_fn_80204690_000001D4
    lwz r0, 0xc(r3)
    b lbl_fn_80204690_000001DC
lbl_fn_80204690_000001D4:
    lbz r0, 0x8(r3)
    clrlwi r0, r0, 25
lbl_fn_80204690_000001DC:
    cmpw r8, r0
    blt lbl_fn_80204690_0000017C
    lwz r29, 0x4(r3)
    cmpwi r29, 0x0
    beq lbl_fn_80204690_0000038C
    lis r5, lbl_8073E780@ha
    li r3, 0x70
    addi r5, r5, lbl_8073E780@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80204690_00000390
    mr r4, r29
    bl fn_800D1D3C
    lis r3, lbl_80782E88@ha
    li r4, 0x2
    addi r3, r3, lbl_80782E88@l
    stw r3, 0x0(r31)
    li r0, 0x0
    stw r4, 0x48(r31)
    addi r3, r1, 0x8
    addi r4, r30, 0x8
    stw r0, 0x4c(r31)
    stb r0, 0x50(r31)
    bl fn_8006B174
    lwz r0, 0x8(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80204690_00000260
    addi r28, r1, 0x9
    b lbl_fn_80204690_00000264
lbl_fn_80204690_00000260:
    lwz r28, 0x10(r1)
lbl_fn_80204690_00000264:
    addi r0, r31, 0x50
    cmplw r28, r0
    beq lbl_fn_80204690_0000028C
    mr r3, r28
    bl strlen
    mr r5, r3
    mr r4, r28
    addi r3, r31, 0x50
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80204690_0000028C:
    lwz r0, 0x8(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80204690_000002A0
    lwz r3, 0x10(r1)
    bl dtor_80084684
lbl_fn_80204690_000002A0:
    lwz r0, 0x8(r30)
    srwi. r0, r0, 31
    bne lbl_fn_80204690_000002B4
    addi r3, r30, 0x9
    b lbl_fn_80204690_000002B8
lbl_fn_80204690_000002B4:
    lwz r3, 0x10(r30)
lbl_fn_80204690_000002B8:
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_80204690_00000390
    lis r5, lbl_8073E780@ha
    li r3, 0x98
    addi r5, r5, lbl_8073E780@l
    li r4, 0x6
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80204690_00000304
    lwz r0, 0x8(r30)
    srwi. r0, r0, 31
    bne lbl_fn_80204690_000002FC
    addi r4, r30, 0x9
    b lbl_fn_80204690_00000300
lbl_fn_80204690_000002FC:
    lwz r4, 0x10(r30)
lbl_fn_80204690_00000300:
    bl fn_800DCA70
lbl_fn_80204690_00000304:
    lis r29, lbl_8073E780@ha
    stw r3, 0x4c(r31)
    addi r29, r29, lbl_8073E780@l
    addi r28, r29, 0xf
    mr r3, r28
    bl strlen
    mr r6, r3
    mr r4, r28
    addi r3, r30, 0x8
    li r5, 0x0
    bl fn_8006A004
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    beq lbl_fn_80204690_0000037C
    addi r28, r29, 0x14
    mr r3, r28
    bl strlen
    mr r6, r3
    mr r4, r28
    addi r3, r30, 0x8
    li r5, 0x0
    bl fn_8006A004
    addis r0, r3, 0x1
    li r4, 0x2
    cmplwi r0, 0xffff
    beq lbl_fn_80204690_00000370
    li r4, 0x3
lbl_fn_80204690_00000370:
    lwz r3, 0x4c(r31)
    stw r4, 0x4(r3)
    b lbl_fn_80204690_00000390
lbl_fn_80204690_0000037C:
    lwz r3, 0x4c(r31)
    li r0, 0x0
    stw r0, 0x4(r3)
    b lbl_fn_80204690_00000390
lbl_fn_80204690_0000038C:
    li r31, 0x0
lbl_fn_80204690_00000390:
    stw r31, 0x18(r30)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802048F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x4(r3)
    lwz r3, 0x18(r3)
    lwz r0, 0x98(r4)
    cmpwi r3, 0x0
    extrwi r0, r0, 1, 5
    beq lbl_fn_802048F8_000003F4
    cmpwi r0, 0x0
    beq lbl_fn_802048F8_000003EC
    bl fn_800D2338
lbl_fn_802048F8_000003EC:
    li r0, 0x0
    stw r0, 0x18(r31)
lbl_fn_802048F8_000003F4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020494C(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80204954(void)
{
    nofralloc
    blr
}

asm void fn_80204958(void)
{
    nofralloc
    stwu r1, -0x690(r1)
    mflr r0
    lwz r4, lbl_80882D28
    li r6, 0x20
    stw r0, 0x694(r1)
    addi r5, r1, 0x18
    stmw r23, 0x66c(r1)
    li r24, 0x0
    stw r24, 0x18(r1)
    lwz r3, lbl_8087F518
    bl fn_8046DC5C
    lis r4, lbl_807772D0@ha
    mr r28, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x28(r1)
    lwz r25, 0x18(r1)
    addi r3, r1, 0x38
    stw r24, 0x2c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r24, 0x30(r1)
    stw r24, 0x34(r1)
    stw r24, 0x658(r1)
    bl memset
    addi r3, r1, 0x638
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x28(r1)
    mr r4, r28
    mr r5, r25
    addi r3, r1, 0x28
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x28
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x28(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r24, lbl_8073E814@ha
    li r23, 0x0
    addi r24, r24, lbl_8073E814@l
    b lbl_fn_80204958_000004FC
lbl_fn_80204958_000004C8:
    addi r3, r1, 0x28
    bl fn_8005B3CC
    addi r4, r24, 0x11
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80204958_000004FC
    addi r3, r1, 0x28
    bl fn_8005B3CC
    addi r4, r24, 0x11
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80204958_000004FC
    addi r23, r23, 0x1
lbl_fn_80204958_000004FC:
    addi r3, r1, 0x28
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80204958_000004C8
    lis r3, lbl_8073E814@ha
    li r4, 0x3
    addi r24, r3, lbl_8073E814@l
    li r7, 0x0
    addi r5, r24, 0x11
    mulli r3, r23, 0x90
    mr r6, r5
    bl fn_800846FC
    stw r3, lbl_8087F158
    mr r4, r28
    lwz r12, 0x28(r1)
    addi r3, r1, 0x28
    stw r23, lbl_8087F15C
    lwz r5, 0x18(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r29, r1, 0x1d
    addi r31, r1, 0x1c
    li r30, 0x0
    li r25, 0x0
    b lbl_fn_80204958_00000890
lbl_fn_80204958_00000564:
    addi r3, r1, 0x28
    bl fn_8005B3CC
    addi r4, r24, 0x11
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80204958_00000890
    addi r3, r1, 0x28
    bl fn_8005B3CC
    mr r26, r3
    bl strlen
    cmplwi r3, 0x3
    blt lbl_fn_80204958_00000890
    lwz r0, lbl_8087F158
    mr r3, r26
    mr r4, r24
    li r5, 0x2
    add r27, r0, r30
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80204958_000005BC
    li r0, 0x1
    b lbl_fn_80204958_0000063C
lbl_fn_80204958_000005BC:
    mr r3, r26
    addi r4, r24, 0x3
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80204958_000005DC
    li r0, 0x2
    b lbl_fn_80204958_0000063C
lbl_fn_80204958_000005DC:
    mr r3, r26
    addi r4, r24, 0x6
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80204958_000005FC
    li r0, 0x3
    b lbl_fn_80204958_0000063C
lbl_fn_80204958_000005FC:
    mr r3, r26
    addi r4, r24, 0x9
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80204958_0000061C
    li r0, 0x3
    b lbl_fn_80204958_0000063C
lbl_fn_80204958_0000061C:
    mr r3, r26
    addi r4, r24, 0xc
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    li r0, 0x5
    beq lbl_fn_80204958_0000063C
    li r0, -0x1
lbl_fn_80204958_0000063C:
    cmpwi r0, 0x0
    stw r0, 0x0(r27)
    blt lbl_fn_80204958_0000087C
    stw r25, 0x1c(r1)
    addi r3, r26, 0x2
    stw r25, 0x20(r1)
    stw r25, 0x24(r1)
    bl strlen
    mr r23, r3
    mr r3, r31
    mr r4, r23
    bl fn_80013DC4
    lbz r0, 0x8(r1)
    add r4, r26, r23
    stb r0, 0xc(r1)
    addi r7, r4, 0x2
    mr r3, r31
    addi r6, r26, 0x2
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lbz r26, 0x14(r1)
    addi r23, r24, 0xf
lbl_fn_80204958_0000069C:
    mr r3, r23
    bl strlen
    mr r6, r3
    mr r4, r23
    addi r3, r1, 0x1c
    li r5, 0x0
    bl fn_8006A004
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    beq lbl_fn_80204958_000006E8
    stb r26, 0x10(r1)
    mr r4, r3
    addi r3, r1, 0x1c
    addi r8, r1, 0x10
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
    bl fn_80013F78
    b lbl_fn_80204958_0000069C
lbl_fn_80204958_000006E8:
    lwz r0, 0x1c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80204958_000006FC
    mr r3, r29
    b lbl_fn_80204958_00000700
lbl_fn_80204958_000006FC:
    lwz r3, 0x24(r1)
lbl_fn_80204958_00000700:
    bl fn_80684600
    lwz r0, 0x1c(r1)
    mr r26, r3
    srwi. r0, r0, 31
    beq lbl_fn_80204958_0000071C
    lwz r3, 0x24(r1)
    bl dtor_80084684
lbl_fn_80204958_0000071C:
    stw r26, 0x4(r27)
    addi r3, r1, 0x28
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r27, 0x8
    li r5, 0x20
    bl fn_8068236C
    addi r3, r1, 0x28
    bl fn_8005B3CC
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x28(r27)
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x2c(r27)
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x30(r27)
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x34(r27)
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x38(r27)
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x3c(r27)
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x40(r27)
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x44(r27)
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x48(r27)
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x4c(r27)
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x50(r27)
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x54(r27)
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x58(r27)
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x5c(r27)
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x60(r27)
    mr r23, r27
    li r26, 0x0
lbl_fn_80204958_00000838:
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    addi r26, r26, 0x1
    stfs f1, 0x64(r23)
    cmpwi r26, 0x9
    addi r23, r23, 0x4
    blt lbl_fn_80204958_00000838
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x88(r27)
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x8c(r27)
    b lbl_fn_80204958_0000088C
lbl_fn_80204958_0000087C:
    mr r4, r26
    addi r3, r27, 0x8
    li r5, 0x20
    bl fn_8068236C
lbl_fn_80204958_0000088C:
    addi r30, r30, 0x90
lbl_fn_80204958_00000890:
    addi r3, r1, 0x28
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80204958_00000564
    lwz r3, lbl_8087F518
    mr r4, r28
    bl fn_8046DD20
    lmw r23, 0x66c(r1)
    lwz r0, 0x694(r1)
    mtlr r0
    addi r1, r1, 0x690
    blr
}

asm void fn_80204E04(void)
{
    nofralloc
    cmpwi r3, 0x0
    bne lbl_fn_80204E04_000008CC
    li r3, 0x3
lbl_fn_80204E04_000008CC:
    lwz r0, lbl_8087F15C
    lwz r5, lbl_8087F158
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80204E04_00000908
lbl_fn_80204E04_000008E0:
    lwz r0, 0x0(r5)
    cmpw r0, r3
    bne lbl_fn_80204E04_00000900
    lwz r0, 0x4(r5)
    cmpw r0, r4
    bne lbl_fn_80204E04_00000900
    mr r3, r5
    blr
lbl_fn_80204E04_00000900:
    addi r5, r5, 0x90
    bdnz lbl_fn_80204E04_000008E0
lbl_fn_80204E04_00000908:
    li r3, 0x0
    blr
}

asm void fn_80204E54(void)
{
    nofralloc
    stwu r1, -0x7c0(r1)
    mflr r0
    lwz r4, lbl_80882D44
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
    lis r14, lbl_8073E938@ha
    b lbl_fn_80204E54_000009DC
lbl_fn_80204E54_000009C0:
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r4, r14, lbl_8073E938@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80204E54_000009DC
    addi r15, r15, 0x1
lbl_fn_80204E54_000009DC:
    addi r3, r1, 0x13c
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80204E54_000009C0
    addi r14, r15, 0x80
    lis r3, lbl_8073E938@ha
    mulli r8, r14, 0x130
    li r4, 0x3
    addi r5, r3, lbl_8073E938@l
    li r7, 0x0
    mr r6, r5
    addi r3, r8, 0x10
    bl fn_800846FC
    lis r4, fn_80205A78@ha
    lis r5, fn_8020685C@ha
    mr r7, r14
    li r6, 0x130
    addi r4, r4, fn_80205A78@l
    addi r5, r5, fn_8020685C@l
    bl fn_80695720
    stw r3, lbl_8087F160
    mr r0, r14
    lwz r12, 0x13c(r1)
    addi r3, r1, 0x13c
    stw r0, lbl_8087F168
    lwz r4, 0x770(r1)
    lwz r12, 0x8(r12)
    lwz r5, 0x28(r1)
    mtctr r12
    bctrl
    lis r3, lbl_8073E938@ha
    addi r19, r1, 0x2d
    addi r23, r1, 0x38
    addi r24, r1, 0x74
    addi r27, r3, lbl_8073E938@l
    addi r14, r1, 0x2c
    addi r26, r1, 0x118
    addi r25, r1, 0xb0
    addi r22, r1, 0xd4
    li r17, 0x0
    li r20, 0x0
    li r31, 0x1
    li r28, 0x0
    b lbl_fn_80204E54_000014D4
lbl_fn_80204E54_00000A8C:
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    lis r4, lbl_8073E938@ha
    addi r4, r4, lbl_8073E938@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80204E54_000014D4
    lwz r0, lbl_8087F160
    addi r3, r1, 0x13c
    add r16, r0, r20
    bl fn_8005B3CC
    cmpwi r3, 0x0
    mr r15, r3
    beq lbl_fn_80204E54_00000B24
    bl strlen
    cmplwi r3, 0x2
    ble lbl_fn_80204E54_00000B24
    mr r3, r15
    addi r4, r27, 0x1
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80204E54_00000AF0
    stw r28, 0x78(r16)
    b lbl_fn_80204E54_00000B18
lbl_fn_80204E54_00000AF0:
    mr r3, r15
    addi r4, r27, 0x4
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80204E54_00000B10
    stw r31, 0x78(r16)
    b lbl_fn_80204E54_00000B18
lbl_fn_80204E54_00000B10:
    li r0, 0x2
    stw r0, 0x78(r16)
lbl_fn_80204E54_00000B18:
    addi r3, r15, 0x2
    bl fn_80684600
    stw r3, 0x80(r16)
lbl_fn_80204E54_00000B24:
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r0, r16, 0x8c
    mr r15, r3
    cmplw r3, r0
    beq lbl_fn_80204E54_00000B64
    bl strlen
    mr r5, r3
    mr r4, r15
    addi r3, r16, 0x8c
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80204E54_00000B64:
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x7c(r16)
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
    bl fn_80684600
    stw r3, 0x20(r16)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x24(r16)
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
    stw r28, 0x2c(r1)
    mr r15, r3
    stw r28, 0x30(r1)
    stw r28, 0x34(r1)
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
    addi r15, r27, 0x7
    stw r28, 0xb0(r1)
    mr r3, r15
    stw r28, 0xb4(r1)
    stw r28, 0xb8(r1)
    stw r28, 0xbc(r1)
    stw r28, 0xc0(r1)
    stw r28, 0xc4(r1)
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
    stb r28, 0xc8(r1)
    srwi. r0, r0, 31
    stb r28, 0xc9(r1)
    stw r28, 0xcc(r1)
    stb r28, 0xd0(r1)
    bne lbl_fn_80204E54_00000D20
    mr r3, r19
    b lbl_fn_80204E54_00000D24
lbl_fn_80204E54_00000D20:
    lwz r3, 0x34(r1)
lbl_fn_80204E54_00000D24:
    lwz r0, 0x2c(r1)
    stw r3, 0x110(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80204E54_00000D44
    lbz r0, 0x2c(r1)
    mr r3, r19
    clrlwi r0, r0, 25
    b lbl_fn_80204E54_00000D4C
lbl_fn_80204E54_00000D44:
    lwz r3, 0x34(r1)
    lwz r0, 0x30(r1)
lbl_fn_80204E54_00000D4C:
    lwz r4, 0xb0(r1)
    add r0, r3, r0
    stw r0, 0x114(r1)
    srwi. r0, r4, 31
    bne lbl_fn_80204E54_00000D78
    lwz r3, 0xb4(r1)
    lwz r0, 0xb8(r1)
    stw r4, 0x118(r1)
    stw r3, 0x11c(r1)
    stw r0, 0x120(r1)
    b lbl_fn_80204E54_00000DB8
lbl_fn_80204E54_00000D78:
    stw r28, 0x118(r1)
    mr r3, r26
    lwz r4, 0xb4(r1)
    stw r28, 0x11c(r1)
    stw r28, 0x120(r1)
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
lbl_fn_80204E54_00000DB8:
    lwz r4, 0xbc(r1)
    srwi. r0, r4, 31
    bne lbl_fn_80204E54_00000DDC
    lwz r3, 0xc0(r1)
    lwz r0, 0xc4(r1)
    stw r4, 0x124(r1)
    stw r3, 0x128(r1)
    stw r0, 0x12c(r1)
    b lbl_fn_80204E54_00000E1C
lbl_fn_80204E54_00000DDC:
    lwz r4, 0xc0(r1)
    addi r3, r26, 0xc
    stw r28, 0xc(r26)
    stw r28, 0x10(r26)
    stw r28, 0x14(r26)
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
lbl_fn_80204E54_00000E1C:
    addic. r0, r25, 0xc
    lbz r5, 0xc8(r1)
    lbz r4, 0xc9(r1)
    lwz r3, 0xcc(r1)
    lbz r0, 0xd0(r1)
    stb r5, 0x130(r1)
    stb r4, 0x131(r1)
    stw r3, 0x134(r1)
    stb r0, 0x138(r1)
    beq lbl_fn_80204E54_00000E58
    lwz r0, 0xbc(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80204E54_00000E58
    lwz r3, 0xc4(r1)
    bl dtor_80084684
lbl_fn_80204E54_00000E58:
    cmpwi r25, 0x0
    beq lbl_fn_80204E54_00000E74
    lwz r0, 0xb0(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80204E54_00000E74
    lwz r3, 0xb8(r1)
    bl dtor_80084684
lbl_fn_80204E54_00000E74:
    addi r3, r1, 0xd4
    addi r4, r1, 0x110
    li r15, 0x0
    bl fn_800EC654
    mr r18, r16
    addi r30, r23, 0x30
    addi r29, r24, 0x30
    b lbl_fn_80204E54_00000F28
lbl_fn_80204E54_00000E94:
    lwz r0, 0x104(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80204E54_00000EA8
    addi r3, r1, 0x105
    b lbl_fn_80204E54_00000EAC
lbl_fn_80204E54_00000EA8:
    lwz r3, 0x10c(r1)
lbl_fn_80204E54_00000EAC:
    bl fn_800DC288
    stfs f1, 0x38(r18)
    addi r3, r1, 0x74
    addi r4, r1, 0xd4
    li r5, 0x0
    addi r18, r18, 0x4
    addi r15, r15, 0x1
    bl fn_80205BE8
    cmpwi r29, 0x0
    beq lbl_fn_80204E54_00000EE8
    lwz r0, 0xa4(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80204E54_00000EE8
    lwz r3, 0xac(r1)
    bl dtor_80084684
lbl_fn_80204E54_00000EE8:
    cmpwi r24, 0x0
    beq lbl_fn_80204E54_00000F28
    addic. r0, r24, 0xc
    beq lbl_fn_80204E54_00000F0C
    lwz r0, 0x80(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80204E54_00000F0C
    lwz r3, 0x88(r1)
    bl dtor_80084684
lbl_fn_80204E54_00000F0C:
    cmpwi r24, 0x0
    beq lbl_fn_80204E54_00000F28
    lwz r0, 0x74(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80204E54_00000F28
    lwz r3, 0x7c(r1)
    bl dtor_80084684
lbl_fn_80204E54_00000F28:
    addi r3, r1, 0x38
    addi r4, r1, 0x110
    bl fn_800EDFE8
    lbz r4, 0x64(r1)
    li r21, 0x0
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_80204E54_00000F58
    lbz r0, 0x100(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80204E54_00000F58
    li r3, 0x1
lbl_fn_80204E54_00000F58:
    cmpwi r3, 0x0
    beq lbl_fn_80204E54_00000F8C
    lwz r3, 0x5c(r1)
    li r4, 0x0
    lwz r0, 0xf8(r1)
    cmplw r3, r0
    bne lbl_fn_80204E54_00000F9C
    lwz r3, 0x60(r1)
    lwz r0, 0xfc(r1)
    cmplw r3, r0
    bne lbl_fn_80204E54_00000F9C
    li r4, 0x1
    b lbl_fn_80204E54_00000F9C
lbl_fn_80204E54_00000F8C:
    lbz r0, 0x100(r1)
    subf r0, r4, r0
    cntlzw r0, r0
    srwi r4, r0, 5
lbl_fn_80204E54_00000F9C:
    cmpwi r4, 0x0
    bne lbl_fn_80204E54_00000FB0
    cmpwi r15, 0x7
    bge lbl_fn_80204E54_00000FB0
    li r21, 0x1
lbl_fn_80204E54_00000FB0:
    cmpwi r30, 0x0
    beq lbl_fn_80204E54_00000FCC
    lwz r0, 0x68(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80204E54_00000FCC
    lwz r3, 0x70(r1)
    bl dtor_80084684
lbl_fn_80204E54_00000FCC:
    cmpwi r23, 0x0
    beq lbl_fn_80204E54_0000100C
    addic. r0, r23, 0xc
    beq lbl_fn_80204E54_00000FF0
    lwz r0, 0x44(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80204E54_00000FF0
    lwz r3, 0x4c(r1)
    bl dtor_80084684
lbl_fn_80204E54_00000FF0:
    cmpwi r23, 0x0
    beq lbl_fn_80204E54_0000100C
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80204E54_0000100C
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_80204E54_0000100C:
    cmpwi r21, 0x0
    bne lbl_fn_80204E54_00000E94
    addic. r0, r22, 0x30
    beq lbl_fn_80204E54_00001030
    lwz r0, 0x104(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80204E54_00001030
    lwz r3, 0x10c(r1)
    bl dtor_80084684
lbl_fn_80204E54_00001030:
    cmpwi r22, 0x0
    beq lbl_fn_80204E54_00001070
    addic. r0, r22, 0xc
    beq lbl_fn_80204E54_00001054
    lwz r0, 0xe0(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80204E54_00001054
    lwz r3, 0xe8(r1)
    bl dtor_80084684
lbl_fn_80204E54_00001054:
    cmpwi r22, 0x0
    beq lbl_fn_80204E54_00001070
    lwz r0, 0xd4(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80204E54_00001070
    lwz r3, 0xdc(r1)
    bl dtor_80084684
lbl_fn_80204E54_00001070:
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xac(r16)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xb0(r16)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xb4(r16)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    mr r15, r3
    lis r3, lbl_8073E900@ha
    addi r21, r3, lbl_8073E900@l
    li r18, 0x0
lbl_fn_80204E54_000010D8:
    lwz r4, 0x0(r21)
    mr r3, r15
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80204E54_000010F0
    b lbl_fn_80204E54_00001104
lbl_fn_80204E54_000010F0:
    addi r18, r18, 0x1
    addi r21, r21, 0x4
    cmpwi r18, 0x8
    blt lbl_fn_80204E54_000010D8
    li r18, 0x0
lbl_fn_80204E54_00001104:
    stw r18, 0xb8(r16)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r15, r3
    extsb. r0, r0
    bne lbl_fn_80204E54_00001128
    li r0, 0x1f
    stw r0, 0xbc(r16)
lbl_fn_80204E54_00001128:
    mr r3, r15
    addi r4, r27, 0x9
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80204E54_0000114C
    lis r3, 0x1
    addi r0, r3, -0x8000
    stw r0, 0xbc(r16)
    b lbl_fn_80204E54_0000124C
lbl_fn_80204E54_0000114C:
    mr r3, r15
    addi r4, r27, 0xe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80204E54_0000116C
    lis r0, 0x1
    stw r0, 0xbc(r16)
    b lbl_fn_80204E54_0000124C
lbl_fn_80204E54_0000116C:
    mr r3, r15
    addi r4, r27, 0x14
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80204E54_0000118C
    lis r0, 0x2
    stw r0, 0xbc(r16)
    b lbl_fn_80204E54_0000124C
lbl_fn_80204E54_0000118C:
    mr r3, r15
    addi r4, r27, 0x1a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80204E54_000011AC
    lis r0, 0x4
    stw r0, 0xbc(r16)
    b lbl_fn_80204E54_0000124C
lbl_fn_80204E54_000011AC:
    mr r3, r15
    addi r4, r27, 0x20
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80204E54_000011CC
    lis r0, 0x8
    stw r0, 0xbc(r16)
    b lbl_fn_80204E54_0000124C
lbl_fn_80204E54_000011CC:
    mr r3, r15
    addi r4, r27, 0x27
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80204E54_000011EC
    lis r0, 0x10
    stw r0, 0xbc(r16)
    b lbl_fn_80204E54_0000124C
lbl_fn_80204E54_000011EC:
    mr r3, r15
    addi r4, r27, 0x2f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80204E54_0000120C
    lis r0, 0x20
    stw r0, 0xbc(r16)
    b lbl_fn_80204E54_0000124C
lbl_fn_80204E54_0000120C:
    mr r21, r15
    li r18, 0x0
    b lbl_fn_80204E54_0000123C
lbl_fn_80204E54_00001218:
    lbz r0, 0x0(r21)
    cmpwi r0, 0x2d
    beq lbl_fn_80204E54_00001234
    lwz r3, 0xbc(r16)
    slw r0, r31, r18
    or r0, r3, r0
    stw r0, 0xbc(r16)
lbl_fn_80204E54_00001234:
    addi r18, r18, 0x1
    addi r21, r21, 0x1
lbl_fn_80204E54_0000123C:
    mr r3, r15
    bl strlen
    cmplw r18, r3
    blt lbl_fn_80204E54_00001218
lbl_fn_80204E54_0000124C:
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xc0(r16)
    mr r15, r16
    li r18, 0x0
lbl_fn_80204E54_00001264:
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xc4(r15)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xc8(r15)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xcc(r15)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xd0(r15)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_80684600
    addi r18, r18, 0x1
    stw r3, 0xd4(r15)
    cmpwi r18, 0x2
    addi r15, r15, 0x14
    blt lbl_fn_80204E54_00001264
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xec(r16)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xf0(r16)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r0, r16, 0xf4
    mr r15, r3
    cmplw r3, r0
    beq lbl_fn_80204E54_00001314
    bl strlen
    mr r5, r3
    mr r4, r15
    addi r3, r16, 0xf4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80204E54_00001314:
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r0, r16, 0x104
    mr r15, r3
    cmplw r3, r0
    beq lbl_fn_80204E54_00001344
    bl strlen
    mr r5, r3
    mr r4, r15
    addi r3, r16, 0x104
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80204E54_00001344:
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x114(r16)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    mr r15, r3
    lis r3, lbl_8073E880@ha
    addi r21, r3, lbl_8073E880@l
    li r18, 0x0
lbl_fn_80204E54_0000136C:
    lwz r4, 0x0(r21)
    mr r3, r15
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80204E54_00001384
    b lbl_fn_80204E54_00001398
lbl_fn_80204E54_00001384:
    addi r18, r18, 0x1
    addi r21, r21, 0x4
    cmpwi r18, 0x5
    blt lbl_fn_80204E54_0000136C
    li r18, 0x0
lbl_fn_80204E54_00001398:
    stw r18, 0x118(r16)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r15, r3
    extsb. r0, r0
    beq lbl_fn_80204E54_00001408
    addi r3, r3, 0x2
    bl fn_80684600
    stw r3, 0x120(r16)
    mr r3, r15
    addi r4, r27, 0x1
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80204E54_000013E0
    stw r28, 0x11c(r16)
    b lbl_fn_80204E54_00001408
lbl_fn_80204E54_000013E0:
    mr r3, r15
    addi r4, r27, 0x4
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80204E54_00001400
    stw r31, 0x11c(r16)
    b lbl_fn_80204E54_00001408
lbl_fn_80204E54_00001400:
    li r0, 0x2
    stw r0, 0x11c(r16)
lbl_fn_80204E54_00001408:
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    li r15, 0x0
lbl_fn_80204E54_00001414:
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r15, r15, 0x1
    cmpwi r15, 0x4
    blt lbl_fn_80204E54_00001414
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x124(r16)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x128(r16)
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    addi r3, r1, 0x13c
    bl fn_8005B3CC
    bl fn_800DC12C
    cmpwi r26, 0x0
    stw r3, 0x12c(r16)
    addi r20, r20, 0x130
    addi r17, r17, 0x1
    beq lbl_fn_80204E54_000014C0
    addic. r0, r26, 0xc
    beq lbl_fn_80204E54_000014A4
    lwz r0, 0x124(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80204E54_000014A4
    lwz r3, 0x12c(r1)
    bl dtor_80084684
lbl_fn_80204E54_000014A4:
    cmpwi r26, 0x0
    beq lbl_fn_80204E54_000014C0
    lwz r0, 0x118(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80204E54_000014C0
    lwz r3, 0x120(r1)
    bl dtor_80084684
lbl_fn_80204E54_000014C0:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80204E54_000014D4
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_80204E54_000014D4:
    addi r3, r1, 0x13c
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80204E54_00000A8C
    mulli r5, r17, 0x130
    li r4, -0x1
    b lbl_fn_80204E54_00001504
lbl_fn_80204E54_000014F0:
    lwz r0, lbl_8087F160
    addi r17, r17, 0x1
    add r3, r0, r5
    addi r5, r5, 0x130
    stw r4, 0x80(r3)
lbl_fn_80204E54_00001504:
    lwz r0, lbl_8087F168
    cmpw r17, r0
    blt lbl_fn_80204E54_000014F0
    lwz r3, lbl_8087F518
    lwz r4, 0x770(r1)
    bl fn_8046DD20
    bl fn_8020689C
    lmw r14, 0x778(r1)
    lwz r0, 0x7c4(r1)
    mtlr r0
    addi r1, r1, 0x7c0
    blr
}

asm void fn_80205A78(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r6, r3, 0xd8
    addi r4, r3, 0xec
    stw r0, 0x14(r1)
    cmplw r6, r4
    lfs f1, lbl_80882D54
    li r5, 0x0
    stw r31, 0xc(r1)
    li r0, 0x3
    lfs f0, lbl_80882D58
    stw r30, 0x8(r1)
    mr r30, r3
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
    stw r5, 0x80(r3)
    stb r5, 0x8c(r3)
    stw r5, 0xbc(r3)
    stw r5, 0xc0(r3)
    stw r5, 0xc4(r3)
    stw r5, 0xc8(r3)
    stw r5, 0xcc(r3)
    stw r5, 0xd0(r3)
    stw r5, 0xd4(r3)
    bge lbl_fn_80205A78_00001638
    addi r4, r4, 0x13
    li r0, 0x14
    subf r4, r6, r4
    divwu r4, r4, r0
    mtctr r4
    bge lbl_fn_80205A78_00001638
lbl_fn_80205A78_0000161C:
    stw r5, 0x0(r6)
    stw r5, 0x4(r6)
    stw r5, 0x8(r6)
    stw r5, 0xc(r6)
    stw r5, 0x10(r6)
    addi r6, r6, 0x14
    bdnz lbl_fn_80205A78_0000161C
lbl_fn_80205A78_00001638:
    li r31, 0x0
    li r0, 0x1
    stw r31, 0xec(r3)
    li r4, 0x0
    li r5, 0xc
    stw r31, 0xf0(r3)
    stb r31, 0xf4(r3)
    stb r31, 0x104(r3)
    stw r31, 0x114(r3)
    stw r31, 0x118(r3)
    stw r31, 0x11c(r3)
    stw r31, 0x120(r3)
    stw r31, 0x124(r3)
    stw r31, 0x128(r3)
    stw r31, 0x12c(r3)
    stw r0, 0x20(r3)
    addi r3, r3, 0xac
    bl memset
    stw r31, 0x84(r30)
    mr r3, r30
    stw r31, 0x88(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80205BE8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r3
    lwz r5, 0x0(r4)
    srwi. r0, r5, 31
    bne lbl_fn_80205BE8_000016E4
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    stw r5, 0x0(r3)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r3)
    b lbl_fn_80205BE8_00001724
lbl_fn_80205BE8_000016E4:
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    lwz r4, 0x4(r4)
    bl fn_80013DC4
    lbz r0, 0x24(r1)
    mr r3, r30
    stb r0, 0x20(r1)
    addi r8, r1, 0x20
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x8(r31)
    lwz r0, 0x4(r31)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80205BE8_00001724:
    lwz r3, 0xc(r31)
    srwi. r0, r3, 31
    bne lbl_fn_80205BE8_00001748
    lwz r0, 0x10(r31)
    stw r0, 0x10(r30)
    stw r3, 0xc(r30)
    lwz r0, 0x14(r31)
    stw r0, 0x14(r30)
    b lbl_fn_80205BE8_0000178C
lbl_fn_80205BE8_00001748:
    li r0, 0x0
    stw r0, 0xc(r30)
    addi r3, r30, 0xc
    stw r0, 0x10(r30)
    stw r0, 0x14(r30)
    lwz r4, 0x10(r31)
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    addi r3, r30, 0xc
    stb r0, 0x18(r1)
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x14(r31)
    lwz r0, 0x10(r31)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80205BE8_0000178C:
    lbz r0, 0x18(r31)
    stb r0, 0x18(r30)
    lbz r0, 0x19(r31)
    stb r0, 0x19(r30)
    lwz r0, 0x1c(r31)
    stw r0, 0x1c(r30)
    lbz r0, 0x20(r31)
    stb r0, 0x20(r30)
    lwz r0, 0x24(r31)
    stw r0, 0x24(r30)
    lwz r0, 0x28(r31)
    stw r0, 0x28(r30)
    lbz r0, 0x2c(r31)
    stb r0, 0x2c(r30)
    lwz r3, 0x30(r31)
    srwi. r0, r3, 31
    bne lbl_fn_80205BE8_000017E8
    lwz r0, 0x34(r31)
    stw r0, 0x34(r30)
    stw r3, 0x30(r30)
    lwz r0, 0x38(r31)
    stw r0, 0x38(r30)
    b lbl_fn_80205BE8_0000182C
lbl_fn_80205BE8_000017E8:
    li r0, 0x0
    stw r0, 0x30(r30)
    addi r3, r30, 0x30
    stw r0, 0x34(r30)
    stw r0, 0x38(r30)
    lwz r4, 0x34(r31)
    bl fn_80013DC4
    lbz r0, 0x28(r1)
    addi r3, r30, 0x30
    stb r0, 0x2c(r1)
    addi r8, r1, 0x2c
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x38(r31)
    lwz r0, 0x34(r31)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80205BE8_0000182C:
    lwz r0, 0x1c(r31)
    lwz r7, 0x28(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80205BE8_00001964
    lis r5, lbl_807BB380@ha
    addi r0, r31, 0xd
    addi r5, r5, lbl_807BB380@l
    b lbl_fn_80205BE8_00001858
lbl_fn_80205BE8_0000184C:
    lwz r3, 0x24(r31)
    addi r3, r3, 0x1
    stw r3, 0x24(r31)
lbl_fn_80205BE8_00001858:
    lwz r4, 0x24(r31)
    cmplw r4, r7
    beq lbl_fn_80205BE8_00001964
    lwz r3, 0xc(r31)
    lbz r6, 0x0(r4)
    srwi. r4, r3, 31
    extsb r6, r6
    bne lbl_fn_80205BE8_00001884
    lbz r3, 0xc(r31)
    clrlwi r3, r3, 25
    b lbl_fn_80205BE8_00001888
lbl_fn_80205BE8_00001884:
    lwz r3, 0x10(r31)
lbl_fn_80205BE8_00001888:
    cmpwi r3, 0x0
    beq lbl_fn_80205BE8_00001908
    cmpwi r4, 0x0
    bne lbl_fn_80205BE8_000018A8
    lbz r3, 0xc(r31)
    mr r4, r0
    clrlwi r3, r3, 25
    b lbl_fn_80205BE8_000018B0
lbl_fn_80205BE8_000018A8:
    lwz r4, 0x14(r31)
    lwz r3, 0x10(r31)
lbl_fn_80205BE8_000018B0:
    cmpwi r3, 0x0
    beq lbl_fn_80205BE8_000018F0
    add r8, r4, r3
    mr r9, r4
    subf r3, r4, r8
    mtctr r3
    cmplw r4, r8
    bge lbl_fn_80205BE8_000018F0
lbl_fn_80205BE8_000018D0:
    lbz r3, 0x0(r9)
    extsb r3, r3
    cmpw r6, r3
    bne lbl_fn_80205BE8_000018E8
    subf r3, r4, r9
    b lbl_fn_80205BE8_000018F4
lbl_fn_80205BE8_000018E8:
    addi r9, r9, 0x1
    bdnz lbl_fn_80205BE8_000018D0
lbl_fn_80205BE8_000018F0:
    li r3, -0x1
lbl_fn_80205BE8_000018F4:
    subfic r4, r3, -0x1
    addi r3, r3, 0x1
    or r3, r4, r3
    srwi r3, r3, 31
    b lbl_fn_80205BE8_0000195C
lbl_fn_80205BE8_00001908:
    lbz r3, 0x19(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80205BE8_00001958
    cmplwi r6, 0xff
    li r3, 0x1
    bgt lbl_fn_80205BE8_00001924
    li r3, 0x0
lbl_fn_80205BE8_00001924:
    cmpwi r3, 0x0
    beq lbl_fn_80205BE8_00001934
    li r4, 0x0
    b lbl_fn_80205BE8_00001948
lbl_fn_80205BE8_00001934:
    lwz r4, 0x38(r5)
    slwi r3, r6, 1
    lwz r4, 0x8(r4)
    lhzx r3, r4, r3
    rlwinm r4, r3, 0, 23, 23
lbl_fn_80205BE8_00001948:
    neg r3, r4
    or r3, r3, r4
    srwi r3, r3, 31
    b lbl_fn_80205BE8_0000195C
lbl_fn_80205BE8_00001958:
    li r3, 0x0
lbl_fn_80205BE8_0000195C:
    cmpwi r3, 0x0
    bne lbl_fn_80205BE8_0000184C
lbl_fn_80205BE8_00001964:
    lwz r0, 0x1c(r31)
    lwz r6, 0x24(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80205BE8_00001CC8
    cmplw r6, r7
    bne lbl_fn_80205BE8_00001984
    li r0, 0x0
    b lbl_fn_80205BE8_000022FC
lbl_fn_80205BE8_00001984:
    lwz r0, 0x0(r31)
    lbz r4, 0x0(r6)
    srwi. r3, r0, 31
    extsb r4, r4
    bne lbl_fn_80205BE8_000019A4
    lbz r0, 0x0(r31)
    clrlwi r0, r0, 25
    b lbl_fn_80205BE8_000019A8
lbl_fn_80205BE8_000019A4:
    lwz r0, 0x4(r31)
lbl_fn_80205BE8_000019A8:
    cmpwi r0, 0x0
    beq lbl_fn_80205BE8_00001A28
    cmpwi r3, 0x0
    bne lbl_fn_80205BE8_000019C8
    lbz r0, 0x0(r31)
    addi r3, r31, 0x1
    clrlwi r0, r0, 25
    b lbl_fn_80205BE8_000019D0
lbl_fn_80205BE8_000019C8:
    lwz r3, 0x8(r31)
    lwz r0, 0x4(r31)
lbl_fn_80205BE8_000019D0:
    cmpwi r0, 0x0
    beq lbl_fn_80205BE8_00001A10
    add r5, r3, r0
    mr r8, r3
    subf r0, r3, r5
    mtctr r0
    cmplw r3, r5
    bge lbl_fn_80205BE8_00001A10
lbl_fn_80205BE8_000019F0:
    lbz r0, 0x0(r8)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_80205BE8_00001A08
    subf r4, r3, r8
    b lbl_fn_80205BE8_00001A14
lbl_fn_80205BE8_00001A08:
    addi r8, r8, 0x1
    bdnz lbl_fn_80205BE8_000019F0
lbl_fn_80205BE8_00001A10:
    li r4, -0x1
lbl_fn_80205BE8_00001A14:
    subfic r3, r4, -0x1
    addi r0, r4, 0x1
    or r0, r3, r0
    srwi r0, r0, 31
    b lbl_fn_80205BE8_00001A84
lbl_fn_80205BE8_00001A28:
    lbz r0, 0x18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80205BE8_00001A80
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_fn_80205BE8_00001A44
    li r0, 0x0
lbl_fn_80205BE8_00001A44:
    cmpwi r0, 0x0
    beq lbl_fn_80205BE8_00001A54
    li r3, 0x0
    b lbl_fn_80205BE8_00001A70
lbl_fn_80205BE8_00001A54:
    lis r3, lbl_807BB380@ha
    slwi r0, r4, 1
    addi r3, r3, lbl_807BB380@l
    lwz r3, 0x38(r3)
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r3, r0, 0, 24, 24
lbl_fn_80205BE8_00001A70:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_80205BE8_00001A84
lbl_fn_80205BE8_00001A80:
    li r0, 0x0
lbl_fn_80205BE8_00001A84:
    cmpwi r0, 0x0
    beq lbl_fn_80205BE8_00001A9C
    lwz r3, 0x24(r31)
    addi r0, r3, 0x1
    stw r0, 0x24(r31)
    b lbl_fn_80205BE8_000022C0
lbl_fn_80205BE8_00001A9C:
    lis r4, lbl_807BB380@ha
    addi r0, r31, 0xd
    addi r3, r31, 0x1
    addi r8, r4, lbl_807BB380@l
    b lbl_fn_80205BE8_00001ABC
lbl_fn_80205BE8_00001AB0:
    lwz r4, 0x24(r31)
    addi r4, r4, 0x1
    stw r4, 0x24(r31)
lbl_fn_80205BE8_00001ABC:
    lwz r4, 0x24(r31)
    cmplw r4, r7
    beq lbl_fn_80205BE8_000022C0
    lwz r5, 0xc(r31)
    lbz r4, 0x0(r4)
    srwi. r9, r5, 31
    extsb r10, r4
    bne lbl_fn_80205BE8_00001AE8
    lbz r5, 0xc(r31)
    clrlwi r5, r5, 25
    b lbl_fn_80205BE8_00001AEC
lbl_fn_80205BE8_00001AE8:
    lwz r5, 0x10(r31)
lbl_fn_80205BE8_00001AEC:
    cmpwi r5, 0x0
    beq lbl_fn_80205BE8_00001B6C
    cmpwi r9, 0x0
    bne lbl_fn_80205BE8_00001B0C
    lbz r5, 0xc(r31)
    mr r9, r0
    clrlwi r5, r5, 25
    b lbl_fn_80205BE8_00001B14
lbl_fn_80205BE8_00001B0C:
    lwz r9, 0x14(r31)
    lwz r5, 0x10(r31)
lbl_fn_80205BE8_00001B14:
    cmpwi r5, 0x0
    beq lbl_fn_80205BE8_00001B54
    add r11, r9, r5
    mr r12, r9
    subf r5, r9, r11
    mtctr r5
    cmplw r9, r11
    bge lbl_fn_80205BE8_00001B54
lbl_fn_80205BE8_00001B34:
    lbz r5, 0x0(r12)
    extsb r5, r5
    cmpw r10, r5
    bne lbl_fn_80205BE8_00001B4C
    subf r5, r9, r12
    b lbl_fn_80205BE8_00001B58
lbl_fn_80205BE8_00001B4C:
    addi r12, r12, 0x1
    bdnz lbl_fn_80205BE8_00001B34
lbl_fn_80205BE8_00001B54:
    li r5, -0x1
lbl_fn_80205BE8_00001B58:
    subfic r9, r5, -0x1
    addi r5, r5, 0x1
    or r5, r9, r5
    srwi r5, r5, 31
    b lbl_fn_80205BE8_00001BC0
lbl_fn_80205BE8_00001B6C:
    lbz r5, 0x19(r31)
    cmpwi r5, 0x0
    beq lbl_fn_80205BE8_00001BBC
    cmplwi r10, 0xff
    li r5, 0x1
    bgt lbl_fn_80205BE8_00001B88
    li r5, 0x0
lbl_fn_80205BE8_00001B88:
    cmpwi r5, 0x0
    beq lbl_fn_80205BE8_00001B98
    li r9, 0x0
    b lbl_fn_80205BE8_00001BAC
lbl_fn_80205BE8_00001B98:
    lwz r9, 0x38(r8)
    slwi r5, r10, 1
    lwz r9, 0x8(r9)
    lhzx r5, r9, r5
    rlwinm r9, r5, 0, 23, 23
lbl_fn_80205BE8_00001BAC:
    neg r5, r9
    or r5, r5, r9
    srwi r5, r5, 31
    b lbl_fn_80205BE8_00001BC0
lbl_fn_80205BE8_00001BBC:
    li r5, 0x0
lbl_fn_80205BE8_00001BC0:
    cmpwi r5, 0x0
    bne lbl_fn_80205BE8_000022C0
    lwz r5, 0x0(r31)
    extsb r9, r4
    srwi. r5, r5, 31
    bne lbl_fn_80205BE8_00001BE4
    lbz r4, 0x0(r31)
    clrlwi r4, r4, 25
    b lbl_fn_80205BE8_00001BE8
lbl_fn_80205BE8_00001BE4:
    lwz r4, 0x4(r31)
lbl_fn_80205BE8_00001BE8:
    cmpwi r4, 0x0
    beq lbl_fn_80205BE8_00001C68
    cmpwi r5, 0x0
    bne lbl_fn_80205BE8_00001C08
    lbz r4, 0x0(r31)
    mr r5, r3
    clrlwi r4, r4, 25
    b lbl_fn_80205BE8_00001C10
lbl_fn_80205BE8_00001C08:
    lwz r5, 0x8(r31)
    lwz r4, 0x4(r31)
lbl_fn_80205BE8_00001C10:
    cmpwi r4, 0x0
    beq lbl_fn_80205BE8_00001C50
    add r10, r5, r4
    mr r11, r5
    subf r4, r5, r10
    mtctr r4
    cmplw r5, r10
    bge lbl_fn_80205BE8_00001C50
lbl_fn_80205BE8_00001C30:
    lbz r4, 0x0(r11)
    extsb r4, r4
    cmpw r9, r4
    bne lbl_fn_80205BE8_00001C48
    subf r4, r5, r11
    b lbl_fn_80205BE8_00001C54
lbl_fn_80205BE8_00001C48:
    addi r11, r11, 0x1
    bdnz lbl_fn_80205BE8_00001C30
lbl_fn_80205BE8_00001C50:
    li r4, -0x1
lbl_fn_80205BE8_00001C54:
    subfic r5, r4, -0x1
    addi r4, r4, 0x1
    or r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_80205BE8_00001CBC
lbl_fn_80205BE8_00001C68:
    lbz r4, 0x18(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80205BE8_00001CB8
    cmplwi r9, 0xff
    li r4, 0x1
    bgt lbl_fn_80205BE8_00001C84
    li r4, 0x0
lbl_fn_80205BE8_00001C84:
    cmpwi r4, 0x0
    beq lbl_fn_80205BE8_00001C94
    li r5, 0x0
    b lbl_fn_80205BE8_00001CA8
lbl_fn_80205BE8_00001C94:
    lwz r5, 0x38(r8)
    slwi r4, r9, 1
    lwz r5, 0x8(r5)
    lhzx r4, r5, r4
    rlwinm r5, r4, 0, 24, 24
lbl_fn_80205BE8_00001CA8:
    neg r4, r5
    or r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_80205BE8_00001CBC
lbl_fn_80205BE8_00001CB8:
    li r4, 0x0
lbl_fn_80205BE8_00001CBC:
    cmpwi r4, 0x0
    beq lbl_fn_80205BE8_00001AB0
    b lbl_fn_80205BE8_000022C0
lbl_fn_80205BE8_00001CC8:
    cmplw r6, r7
    bne lbl_fn_80205BE8_00001D2C
    lbz r0, 0x20(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80205BE8_00001D24
    lwz r0, 0x30(r31)
    li r3, 0x1
    stb r3, 0x20(r31)
    mr r7, r6
    srwi. r0, r0, 31
    bne lbl_fn_80205BE8_00001D00
    lbz r0, 0x30(r31)
    clrlwi r5, r0, 25
    b lbl_fn_80205BE8_00001D04
lbl_fn_80205BE8_00001D00:
    lwz r5, 0x34(r31)
lbl_fn_80205BE8_00001D04:
    lbz r0, 0x10(r1)
    addi r3, r31, 0x30
    stb r0, 0x14(r1)
    addi r8, r1, 0x14
    li r4, 0x0
    bl fn_80013F78
    li r0, 0x1
    b lbl_fn_80205BE8_000022FC
lbl_fn_80205BE8_00001D24:
    li r0, 0x0
    b lbl_fn_80205BE8_000022FC
lbl_fn_80205BE8_00001D2C:
    lwz r3, 0x0(r31)
    lbz r0, 0x0(r6)
    srwi. r4, r3, 31
    extsb r5, r0
    bne lbl_fn_80205BE8_00001D4C
    lbz r3, 0x0(r31)
    clrlwi r3, r3, 25
    b lbl_fn_80205BE8_00001D50
lbl_fn_80205BE8_00001D4C:
    lwz r3, 0x4(r31)
lbl_fn_80205BE8_00001D50:
    cmpwi r3, 0x0
    beq lbl_fn_80205BE8_00001DD0
    cmpwi r4, 0x0
    bne lbl_fn_80205BE8_00001D70
    lbz r3, 0x0(r31)
    addi r4, r31, 0x1
    clrlwi r3, r3, 25
    b lbl_fn_80205BE8_00001D78
lbl_fn_80205BE8_00001D70:
    lwz r4, 0x8(r31)
    lwz r3, 0x4(r31)
lbl_fn_80205BE8_00001D78:
    cmpwi r3, 0x0
    beq lbl_fn_80205BE8_00001DB8
    add r8, r4, r3
    mr r9, r4
    subf r3, r4, r8
    mtctr r3
    cmplw r4, r8
    bge lbl_fn_80205BE8_00001DB8
lbl_fn_80205BE8_00001D98:
    lbz r3, 0x0(r9)
    extsb r3, r3
    cmpw r5, r3
    bne lbl_fn_80205BE8_00001DB0
    subf r3, r4, r9
    b lbl_fn_80205BE8_00001DBC
lbl_fn_80205BE8_00001DB0:
    addi r9, r9, 0x1
    bdnz lbl_fn_80205BE8_00001D98
lbl_fn_80205BE8_00001DB8:
    li r3, -0x1
lbl_fn_80205BE8_00001DBC:
    subfic r4, r3, -0x1
    addi r3, r3, 0x1
    or r3, r4, r3
    srwi r3, r3, 31
    b lbl_fn_80205BE8_00001E2C
lbl_fn_80205BE8_00001DD0:
    lbz r3, 0x18(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80205BE8_00001E28
    cmplwi r5, 0xff
    li r3, 0x1
    bgt lbl_fn_80205BE8_00001DEC
    li r3, 0x0
lbl_fn_80205BE8_00001DEC:
    cmpwi r3, 0x0
    beq lbl_fn_80205BE8_00001DFC
    li r4, 0x0
    b lbl_fn_80205BE8_00001E18
lbl_fn_80205BE8_00001DFC:
    lis r4, lbl_807BB380@ha
    slwi r3, r5, 1
    addi r4, r4, lbl_807BB380@l
    lwz r4, 0x38(r4)
    lwz r4, 0x8(r4)
    lhzx r3, r4, r3
    rlwinm r4, r3, 0, 24, 24
lbl_fn_80205BE8_00001E18:
    neg r3, r4
    or r3, r3, r4
    srwi r3, r3, 31
    b lbl_fn_80205BE8_00001E2C
lbl_fn_80205BE8_00001E28:
    li r3, 0x0
lbl_fn_80205BE8_00001E2C:
    cmpwi r3, 0x0
    beq lbl_fn_80205BE8_00001E64
    lbz r0, 0x20(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80205BE8_00001E4C
    li r0, 0x1
    stb r0, 0x20(r31)
    b lbl_fn_80205BE8_000022C0
lbl_fn_80205BE8_00001E4C:
    lwz r3, 0x24(r31)
    li r0, 0x0
    stb r0, 0x20(r31)
    addi r0, r3, 0x1
    stw r0, 0x24(r31)
    b lbl_fn_80205BE8_000022C0
lbl_fn_80205BE8_00001E64:
    lbz r3, 0x20(r31)
    cmpwi r3, 0x0
    bne lbl_fn_80205BE8_00001F80
    lwz r3, 0xc(r31)
    extsb r5, r0
    srwi. r4, r3, 31
    bne lbl_fn_80205BE8_00001E8C
    lbz r3, 0xc(r31)
    clrlwi r3, r3, 25
    b lbl_fn_80205BE8_00001E90
lbl_fn_80205BE8_00001E8C:
    lwz r3, 0x10(r31)
lbl_fn_80205BE8_00001E90:
    cmpwi r3, 0x0
    beq lbl_fn_80205BE8_00001F10
    cmpwi r4, 0x0
    bne lbl_fn_80205BE8_00001EB0
    lbz r3, 0xc(r31)
    addi r4, r31, 0xd
    clrlwi r3, r3, 25
    b lbl_fn_80205BE8_00001EB8
lbl_fn_80205BE8_00001EB0:
    lwz r4, 0x14(r31)
    lwz r3, 0x10(r31)
lbl_fn_80205BE8_00001EB8:
    cmpwi r3, 0x0
    beq lbl_fn_80205BE8_00001EF8
    add r8, r4, r3
    mr r9, r4
    subf r3, r4, r8
    mtctr r3
    cmplw r4, r8
    bge lbl_fn_80205BE8_00001EF8
lbl_fn_80205BE8_00001ED8:
    lbz r3, 0x0(r9)
    extsb r3, r3
    cmpw r5, r3
    bne lbl_fn_80205BE8_00001EF0
    subf r3, r4, r9
    b lbl_fn_80205BE8_00001EFC
lbl_fn_80205BE8_00001EF0:
    addi r9, r9, 0x1
    bdnz lbl_fn_80205BE8_00001ED8
lbl_fn_80205BE8_00001EF8:
    li r3, -0x1
lbl_fn_80205BE8_00001EFC:
    subfic r4, r3, -0x1
    addi r3, r3, 0x1
    or r3, r4, r3
    srwi r3, r3, 31
    b lbl_fn_80205BE8_00001F6C
lbl_fn_80205BE8_00001F10:
    lbz r3, 0x19(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80205BE8_00001F68
    cmplwi r5, 0xff
    li r3, 0x1
    bgt lbl_fn_80205BE8_00001F2C
    li r3, 0x0
lbl_fn_80205BE8_00001F2C:
    cmpwi r3, 0x0
    beq lbl_fn_80205BE8_00001F3C
    li r4, 0x0
    b lbl_fn_80205BE8_00001F58
lbl_fn_80205BE8_00001F3C:
    lis r4, lbl_807BB380@ha
    slwi r3, r5, 1
    addi r4, r4, lbl_807BB380@l
    lwz r4, 0x38(r4)
    lwz r4, 0x8(r4)
    lhzx r3, r4, r3
    rlwinm r4, r3, 0, 23, 23
lbl_fn_80205BE8_00001F58:
    neg r3, r4
    or r3, r3, r4
    srwi r3, r3, 31
    b lbl_fn_80205BE8_00001F6C
lbl_fn_80205BE8_00001F68:
    li r3, 0x0
lbl_fn_80205BE8_00001F6C:
    cmpwi r3, 0x0
    beq lbl_fn_80205BE8_00001F80
    li r0, 0x1
    stb r0, 0x20(r31)
    b lbl_fn_80205BE8_000022C0
lbl_fn_80205BE8_00001F80:
    lwz r3, 0xc(r31)
    extsb r4, r0
    srwi. r3, r3, 31
    bne lbl_fn_80205BE8_00001F9C
    lbz r0, 0xc(r31)
    clrlwi r0, r0, 25
    b lbl_fn_80205BE8_00001FA0
lbl_fn_80205BE8_00001F9C:
    lwz r0, 0x10(r31)
lbl_fn_80205BE8_00001FA0:
    cmpwi r0, 0x0
    beq lbl_fn_80205BE8_00002020
    cmpwi r3, 0x0
    bne lbl_fn_80205BE8_00001FC0
    lbz r0, 0xc(r31)
    addi r3, r31, 0xd
    clrlwi r0, r0, 25
    b lbl_fn_80205BE8_00001FC8
lbl_fn_80205BE8_00001FC0:
    lwz r3, 0x14(r31)
    lwz r0, 0x10(r31)
lbl_fn_80205BE8_00001FC8:
    cmpwi r0, 0x0
    beq lbl_fn_80205BE8_00002008
    add r5, r3, r0
    mr r8, r3
    subf r0, r3, r5
    mtctr r0
    cmplw r3, r5
    bge lbl_fn_80205BE8_00002008
lbl_fn_80205BE8_00001FE8:
    lbz r0, 0x0(r8)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_80205BE8_00002000
    subf r4, r3, r8
    b lbl_fn_80205BE8_0000200C
lbl_fn_80205BE8_00002000:
    addi r8, r8, 0x1
    bdnz lbl_fn_80205BE8_00001FE8
lbl_fn_80205BE8_00002008:
    li r4, -0x1
lbl_fn_80205BE8_0000200C:
    subfic r3, r4, -0x1
    addi r0, r4, 0x1
    or r0, r3, r0
    srwi r0, r0, 31
    b lbl_fn_80205BE8_0000207C
lbl_fn_80205BE8_00002020:
    lbz r0, 0x19(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80205BE8_00002078
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_fn_80205BE8_0000203C
    li r0, 0x0
lbl_fn_80205BE8_0000203C:
    cmpwi r0, 0x0
    beq lbl_fn_80205BE8_0000204C
    li r3, 0x0
    b lbl_fn_80205BE8_00002068
lbl_fn_80205BE8_0000204C:
    lis r3, lbl_807BB380@ha
    slwi r0, r4, 1
    addi r3, r3, lbl_807BB380@l
    lwz r3, 0x38(r3)
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r3, r0, 0, 23, 23
lbl_fn_80205BE8_00002068:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_80205BE8_0000207C
lbl_fn_80205BE8_00002078:
    li r0, 0x0
lbl_fn_80205BE8_0000207C:
    cmpwi r0, 0x0
    beq lbl_fn_80205BE8_00002090
    lwz r3, 0x24(r31)
    addi r6, r3, 0x1
    stw r6, 0x24(r31)
lbl_fn_80205BE8_00002090:
    lis r4, lbl_807BB380@ha
    addi r0, r31, 0xd
    addi r3, r31, 0x1
    addi r8, r4, lbl_807BB380@l
    b lbl_fn_80205BE8_000020B0
lbl_fn_80205BE8_000020A4:
    lwz r4, 0x24(r31)
    addi r4, r4, 0x1
    stw r4, 0x24(r31)
lbl_fn_80205BE8_000020B0:
    lwz r4, 0x24(r31)
    cmplw r4, r7
    beq lbl_fn_80205BE8_000022B8
    lwz r5, 0xc(r31)
    lbz r4, 0x0(r4)
    srwi. r9, r5, 31
    extsb r10, r4
    bne lbl_fn_80205BE8_000020DC
    lbz r5, 0xc(r31)
    clrlwi r5, r5, 25
    b lbl_fn_80205BE8_000020E0
lbl_fn_80205BE8_000020DC:
    lwz r5, 0x10(r31)
lbl_fn_80205BE8_000020E0:
    cmpwi r5, 0x0
    beq lbl_fn_80205BE8_00002160
    cmpwi r9, 0x0
    bne lbl_fn_80205BE8_00002100
    lbz r5, 0xc(r31)
    mr r9, r0
    clrlwi r5, r5, 25
    b lbl_fn_80205BE8_00002108
lbl_fn_80205BE8_00002100:
    lwz r9, 0x14(r31)
    lwz r5, 0x10(r31)
lbl_fn_80205BE8_00002108:
    cmpwi r5, 0x0
    beq lbl_fn_80205BE8_00002148
    add r11, r9, r5
    mr r12, r9
    subf r5, r9, r11
    mtctr r5
    cmplw r9, r11
    bge lbl_fn_80205BE8_00002148
lbl_fn_80205BE8_00002128:
    lbz r5, 0x0(r12)
    extsb r5, r5
    cmpw r10, r5
    bne lbl_fn_80205BE8_00002140
    subf r5, r9, r12
    b lbl_fn_80205BE8_0000214C
lbl_fn_80205BE8_00002140:
    addi r12, r12, 0x1
    bdnz lbl_fn_80205BE8_00002128
lbl_fn_80205BE8_00002148:
    li r5, -0x1
lbl_fn_80205BE8_0000214C:
    subfic r9, r5, -0x1
    addi r5, r5, 0x1
    or r5, r9, r5
    srwi r5, r5, 31
    b lbl_fn_80205BE8_000021B4
lbl_fn_80205BE8_00002160:
    lbz r5, 0x19(r31)
    cmpwi r5, 0x0
    beq lbl_fn_80205BE8_000021B0
    cmplwi r10, 0xff
    li r5, 0x1
    bgt lbl_fn_80205BE8_0000217C
    li r5, 0x0
lbl_fn_80205BE8_0000217C:
    cmpwi r5, 0x0
    beq lbl_fn_80205BE8_0000218C
    li r9, 0x0
    b lbl_fn_80205BE8_000021A0
lbl_fn_80205BE8_0000218C:
    lwz r9, 0x38(r8)
    slwi r5, r10, 1
    lwz r9, 0x8(r9)
    lhzx r5, r9, r5
    rlwinm r9, r5, 0, 23, 23
lbl_fn_80205BE8_000021A0:
    neg r5, r9
    or r5, r5, r9
    srwi r5, r5, 31
    b lbl_fn_80205BE8_000021B4
lbl_fn_80205BE8_000021B0:
    li r5, 0x0
lbl_fn_80205BE8_000021B4:
    cmpwi r5, 0x0
    bne lbl_fn_80205BE8_000022B8
    lwz r5, 0x0(r31)
    extsb r9, r4
    srwi. r5, r5, 31
    bne lbl_fn_80205BE8_000021D8
    lbz r4, 0x0(r31)
    clrlwi r4, r4, 25
    b lbl_fn_80205BE8_000021DC
lbl_fn_80205BE8_000021D8:
    lwz r4, 0x4(r31)
lbl_fn_80205BE8_000021DC:
    cmpwi r4, 0x0
    beq lbl_fn_80205BE8_0000225C
    cmpwi r5, 0x0
    bne lbl_fn_80205BE8_000021FC
    lbz r4, 0x0(r31)
    mr r5, r3
    clrlwi r4, r4, 25
    b lbl_fn_80205BE8_00002204
lbl_fn_80205BE8_000021FC:
    lwz r5, 0x8(r31)
    lwz r4, 0x4(r31)
lbl_fn_80205BE8_00002204:
    cmpwi r4, 0x0
    beq lbl_fn_80205BE8_00002244
    add r10, r5, r4
    mr r11, r5
    subf r4, r5, r10
    mtctr r4
    cmplw r5, r10
    bge lbl_fn_80205BE8_00002244
lbl_fn_80205BE8_00002224:
    lbz r4, 0x0(r11)
    extsb r4, r4
    cmpw r9, r4
    bne lbl_fn_80205BE8_0000223C
    subf r4, r5, r11
    b lbl_fn_80205BE8_00002248
lbl_fn_80205BE8_0000223C:
    addi r11, r11, 0x1
    bdnz lbl_fn_80205BE8_00002224
lbl_fn_80205BE8_00002244:
    li r4, -0x1
lbl_fn_80205BE8_00002248:
    subfic r5, r4, -0x1
    addi r4, r4, 0x1
    or r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_80205BE8_000022B0
lbl_fn_80205BE8_0000225C:
    lbz r4, 0x18(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80205BE8_000022AC
    cmplwi r9, 0xff
    li r4, 0x1
    bgt lbl_fn_80205BE8_00002278
    li r4, 0x0
lbl_fn_80205BE8_00002278:
    cmpwi r4, 0x0
    beq lbl_fn_80205BE8_00002288
    li r5, 0x0
    b lbl_fn_80205BE8_0000229C
lbl_fn_80205BE8_00002288:
    lwz r5, 0x38(r8)
    slwi r4, r9, 1
    lwz r5, 0x8(r5)
    lhzx r4, r5, r4
    rlwinm r5, r4, 0, 24, 24
lbl_fn_80205BE8_0000229C:
    neg r4, r5
    or r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_80205BE8_000022B0
lbl_fn_80205BE8_000022AC:
    li r4, 0x0
lbl_fn_80205BE8_000022B0:
    cmpwi r4, 0x0
    beq lbl_fn_80205BE8_000020A4
lbl_fn_80205BE8_000022B8:
    li r0, 0x1
    stb r0, 0x20(r31)
lbl_fn_80205BE8_000022C0:
    lwz r0, 0x30(r31)
    lwz r7, 0x24(r31)
    srwi. r0, r0, 31
    bne lbl_fn_80205BE8_000022DC
    lbz r0, 0x30(r31)
    clrlwi r5, r0, 25
    b lbl_fn_80205BE8_000022E0
lbl_fn_80205BE8_000022DC:
    lwz r5, 0x34(r31)
lbl_fn_80205BE8_000022E0:
    lbz r0, 0x8(r1)
    addi r3, r31, 0x30
    stb r0, 0xc(r1)
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_80013F78
    li r0, 0x1
lbl_fn_80205BE8_000022FC:
    stb r0, 0x2c(r31)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
