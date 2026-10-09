#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void DCFlushRangeNoSync(void);
extern void DCZeroRange(void);
extern void __files(void);
extern void dtor_80013D60(void);
extern void dtor_80084684(void);
extern void fn_8000EB8C(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8003E4A4(void);
extern void fn_8004212C(void);
extern void fn_80042218(void);
extern void fn_8005B710(void);
extern void fn_8005B8F8(void);
extern void fn_8005B9AC(void);
extern void fn_8006A9A4(void);
extern void fn_8006AC08(void);
extern void fn_8006AF38(void);
extern void fn_8006B174(void);
extern void fn_8006BBCC(void);
extern void fn_8006BC64(void);
extern void fn_8006C300(void);
extern void fn_8006C3F0(void);
extern void fn_8006D008(void);
extern void fn_8006F420(void);
extern void fn_8006F72C(void);
extern void fn_800827E0(void);
extern void fn_800839EC(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_800D5738(void);
extern void fn_800D5908(void);
extern void fn_800DBF68(void);
extern void fn_800DC1DC(void);
extern void fn_800E19AC(void);
extern void fn_8020A3E4(void);
extern void fn_8046A514(void);
extern void fn_8046D19C(void);
extern void fn_8046D1C4(void);
extern void fn_8046D1CC(void);
extern void fn_8046DBF8(void);
extern void fn_8046FBB0(void);
extern void fn_8046FD1C(void);
extern void fn_8046FD2C(void);
extern void fn_80470264(void);
extern void fn_80470580(void);
extern void fn_80473104(void);
extern void fn_80473EFC(void);
extern void fn_805F9EF0(void);
extern void fn_805FA200(void);
extern void fn_805FA390(void);
extern void fn_805FA4E0(void);
extern void fn_806250D0(void);
extern void fn_80625110(void);
extern void fn_806254D0(void);
extern void fn_80680770(void);
extern void fn_806823B0(void);
extern void fn_806827C4(void);
extern void fn_80686A48(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80755394[];
extern u8 lbl_80755608[];
extern u8 lbl_8075561C[];
extern u8 lbl_80779810[];
extern u8 lbl_8077A070[];
extern u8 lbl_8077A090[];
extern u8 lbl_8077A0A8[];
extern u8 lbl_8078FB50[];

/* Small data declarations */
extern u32 lbl_8087E044;
extern u32 lbl_8087E048;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087F510;

/* Function declarations */
void fn_8046B798(void);
void fn_8046BB60(void);
void fn_8046BBB0(void);
void fn_8046BBE0(void);
void fn_8046BBF0(void);
void fn_8046BEE4(void);
void fn_8046BF88(void);
void fn_8046C1C8(void);
void fn_8046C2D4(void);
void fn_8046C3FC(void);
void fn_8046CBB0(void);
void fn_8046CBBC(void);
void fn_8046CBC0(void);
void fn_8046CC90(void);
void fn_8046D184(void);
void fn_8046D18C(void);
void fn_8046D194(void);

asm void fn_8046B798(void)
{
    nofralloc
    stwu r1, -0xdb0(r1)
    mflr r0
    stw r0, 0xdb4(r1)
    stmw r23, 0xd8c(r1)
    mr r25, r3
    mr r27, r4
    mr r23, r5
    lwz r0, 0x9c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8046B798_00000038
    lis r4, fn_8046A514@ha
    mr r3, r0
    addi r4, r4, fn_8046A514@l
    bl fn_80695A50
lbl_fn_8046B798_00000038:
    li r0, 0x0
    stw r0, 0x9c(r25)
    lis r5, lbl_8077A090@ha
    addi r26, r1, 0x130
    stw r0, 0x98(r25)
    addi r5, r5, lbl_8077A090@l
    addi r3, r1, 0x140
    li r4, 0x0
    stw r5, 0x130(r1)
    li r5, 0x800
    stw r0, 0x134(r1)
    stw r0, 0x138(r1)
    stw r0, 0x13c(r1)
    stw r0, 0xd80(r1)
    bl memset
    addi r3, r1, 0xd40
    li r4, 0x0
    li r5, 0x40
    bl memset
    srwi. r23, r23, 1
    mr r5, r23
    beq lbl_fn_8046B798_00000094
    subi r5, r23, 0x1
lbl_fn_8046B798_00000094:
    cmpwi r23, 0x0
    mr r3, r26
    beq lbl_fn_8046B798_000000A8
    addi r4, r27, 0x2
    b lbl_fn_8046B798_000000AC
lbl_fn_8046B798_000000A8:
    mr r4, r27
lbl_fn_8046B798_000000AC:
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_8077A070@ha
    lis r4, lbl_8077A0A8@ha
    addi r3, r3, lbl_8077A070@l
    stw r3, 0x130(r1)
    mr r3, r26
    addi r4, r4, lbl_8077A0A8@l
    bl fn_8005B9AC
    li r24, 0x0
lbl_fn_8046B798_000000DC:
    addi r3, r1, 0x130
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmplwi r0, 0x23
    beq lbl_fn_8046B798_000000FC
    cmplwi r0, 0x3b
    beq lbl_fn_8046B798_000000FC
    addi r24, r24, 0x1
lbl_fn_8046B798_000000FC:
    addi r3, r1, 0x130
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_8046B798_000000DC
    lwz r3, 0x9c(r25)
    cmpwi r3, 0x0
    beq lbl_fn_8046B798_00000124
    lis r4, fn_8046A514@ha
    addi r4, r4, fn_8046A514@l
    bl fn_80695A50
lbl_fn_8046B798_00000124:
    cmpwi r24, 0x0
    stw r24, 0x98(r25)
    beq lbl_fn_8046B798_00000170
    mulli r3, r24, 0x54
    li r4, 0x0
    la r5, lbl_8087E048
    la r6, lbl_8087E044
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8046BB60@ha
    lis r5, fn_8046A514@ha
    mr r7, r24
    li r6, 0x54
    addi r4, r4, fn_8046BB60@l
    addi r5, r5, fn_8046A514@l
    bl fn_80695720
    stw r3, 0x9c(r25)
    b lbl_fn_8046B798_00000178
lbl_fn_8046B798_00000170:
    li r0, 0x0
    stw r0, 0x9c(r25)
lbl_fn_8046B798_00000178:
    cmpwi r23, 0x0
    beq lbl_fn_8046B798_00000184
    addi r27, r27, 0x2
lbl_fn_8046B798_00000184:
    cmpwi r23, 0x0
    stw r27, 0x134(r1)
    beq lbl_fn_8046B798_00000194
    subi r23, r23, 0x1
lbl_fn_8046B798_00000194:
    li r30, 0x0
    lis r31, lbl_80755394@ha
    stw r23, 0x138(r1)
    addi r26, r1, 0x22
    addi r31, r31, lbl_80755394@l
    addi r29, r1, 0x20
    stw r30, 0x13c(r1)
    li r27, 0x0
lbl_fn_8046B798_000001B4:
    addi r3, r1, 0x130
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmplwi r0, 0x23
    beq lbl_fn_8046B798_000003A4
    cmplwi r0, 0x3b
    beq lbl_fn_8046B798_000003A4
    lwz r0, 0x9c(r25)
    add r28, r0, r27
    bl fn_800DC1DC
    stw r3, 0x0(r28)
    addi r3, r1, 0x130
    bl fn_8005B710
    bl fn_800DC1DC
    stw r3, 0x4(r28)
    addi r3, r1, 0x130
    bl fn_8005B710
    bl fn_800DC1DC
    stw r3, 0x8(r28)
    addi r3, r1, 0x30
    li r4, 0x0
    li r5, 0x100
    bl memset
    lwz r24, lbl_8087EEC8
    addi r3, r1, 0x130
    bl fn_8005B710
    mr r5, r3
    mr r3, r24
    addi r4, r1, 0x30
    li r6, 0x100
    bl fn_8006F420
    lbz r0, 0x30(r1)
    extsb. r0, r0
    beq lbl_fn_8046B798_00000254
    addi r3, r1, 0x30
    addi r4, r31, 0x22d
    bl fn_806823B0
    addi r3, r28, 0xc
    addi r4, r1, 0x30
    bl fn_800D5908
lbl_fn_8046B798_00000254:
    addi r3, r1, 0x130
    bl fn_8005B710
    lwz r0, 0x3c(r28)
    mr r24, r3
    srwi. r0, r0, 31
    bne lbl_fn_8046B798_00000278
    lbz r0, 0x3c(r28)
    clrlwi r23, r0, 25
    b lbl_fn_8046B798_0000027C
lbl_fn_8046B798_00000278:
    lwz r23, 0x40(r28)
lbl_fn_8046B798_0000027C:
    lbz r0, 0x1c(r1)
    mr r3, r24
    stb r0, 0x18(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r5, r23
    mr r6, r24
    addi r3, r28, 0x3c
    addi r8, r1, 0x18
    add r7, r24, r0
    li r4, 0x0
    bl fn_8006F72C
    addi r3, r1, 0x130
    bl fn_8005B710
    stw r30, 0x20(r1)
    mr r24, r3
    stw r30, 0x24(r1)
    stw r30, 0x28(r1)
    bl fn_80686A48
    mr r23, r3
    mr r3, r29
    mr r4, r23
    bl fn_800DBF68
    lbz r3, 0x14(r1)
    slwi r0, r23, 1
    stb r3, 0x10(r1)
    mr r3, r29
    mr r6, r24
    add r7, r24, r0
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x48(r28)
    srwi. r4, r0, 31
    bne lbl_fn_8046B798_00000330
    lwz r3, 0x20(r1)
    srwi. r0, r3, 31
    bne lbl_fn_8046B798_00000330
    lwz r0, 0x24(r1)
    stw r3, 0x48(r28)
    stw r0, 0x4c(r28)
    lwz r0, 0x28(r1)
    stw r0, 0x50(r28)
    b lbl_fn_8046B798_0000038C
lbl_fn_8046B798_00000330:
    cmpwi r4, 0x0
    beq lbl_fn_8046B798_00000340
    lwz r5, 0x4c(r28)
    b lbl_fn_8046B798_00000348
lbl_fn_8046B798_00000340:
    lbz r0, 0x48(r28)
    clrlwi r5, r0, 25
lbl_fn_8046B798_00000348:
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8046B798_00000364
    lbz r0, 0x20(r1)
    mr r6, r26
    clrlwi r0, r0, 25
    b lbl_fn_8046B798_0000036C
lbl_fn_8046B798_00000364:
    lwz r6, 0x28(r1)
    lwz r0, 0x24(r1)
lbl_fn_8046B798_0000036C:
    lbz r3, 0xc(r1)
    slwi r0, r0, 1
    stb r3, 0x8(r1)
    addi r3, r28, 0x48
    add r7, r6, r0
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_8006F72C
lbl_fn_8046B798_0000038C:
    lwz r0, 0x20(r1)
    addi r27, r27, 0x54
    srwi. r0, r0, 31
    beq lbl_fn_8046B798_000003A4
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_8046B798_000003A4:
    addi r3, r1, 0x130
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_8046B798_000001B4
    lmw r23, 0xd8c(r1)
    lwz r0, 0xdb4(r1)
    mtlr r0
    addi r1, r1, 0xdb0
    blr
}

asm void fn_8046BB60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0xc
    bl fn_800D5738
    li r0, 0x0
    stw r0, 0x3c(r31)
    mr r3, r31
    stw r0, 0x40(r31)
    stw r0, 0x44(r31)
    stw r0, 0x48(r31)
    stw r0, 0x4c(r31)
    stw r0, 0x50(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8046BBB0(void)
{
    nofralloc
    addi r0, r3, 0xb3
    addis r4, r3, 0x4
    li r5, 0x0
    stw r5, 0x0(r3)
    clrrwi r0, r0, 5
    stw r5, 0x4(r3)
    stw r5, 0x8(r3)
    stw r5, 0xc(r3)
    stw r5, 0x10(r3)
    stw r5, 0x50(r3)
    stw r0, 0xb4(r4)
    blr
}

asm void fn_8046BBE0(void)
{
    nofralloc
    lwz r3, 0x2c(r4)
    li r0, 0x2
    stw r0, 0x0(r3)
    blr
}

asm void fn_8046BBF0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r28, r3
    mr r29, r4
    addi r31, r4, 0x54
    li r27, 0x0
    b lbl_fn_8046BBF0_000005F4
lbl_fn_8046BBF0_0000047C:
    lwz r30, 0x0(r31)
    lwz r3, 0x4(r29)
    lwz r4, 0x20(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8046BBF0_00000520
    lwz r0, 0x10(r29)
    cmpwi r0, -0x3
    beq lbl_fn_8046BBF0_000004CC
    lwz r5, 0x8(r29)
    cmplw r5, r4
    blt lbl_fn_8046BBF0_000004C0
    lwz r0, 0x1c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8046BBF0_000004C0
    lwz r4, 0x8(r30)
    bl fn_806254D0
    b lbl_fn_8046BBF0_000004CC
lbl_fn_8046BBF0_000004C0:
    mr r4, r3
    addi r3, r30, 0x24
    bl fn_80625110
lbl_fn_8046BBF0_000004CC:
    lwz r3, 0x8(r29)
    lwz r0, 0x20(r30)
    cmplw r0, r3
    bge lbl_fn_8046BBF0_000004E0
    mr r3, r0
lbl_fn_8046BBF0_000004E0:
    lwz r0, 0x1c(r30)
    add r3, r0, r3
    stw r3, 0x1c(r30)
    lwz r4, 0x20(r30)
    subf r0, r4, r3
    orc r3, r3, r4
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi. r26, r0, 31
    beq lbl_fn_8046BBF0_00000550
    cmpwi r4, 0x0
    beq lbl_fn_8046BBF0_00000550
    lwz r3, 0x8(r30)
    lwz r4, 0x4(r30)
    bl DCFlushRangeNoSync
    b lbl_fn_8046BBF0_00000550
lbl_fn_8046BBF0_00000520:
    lwz r3, 0x8(r29)
    lwz r0, 0x4(r30)
    cmplw r0, r3
    bge lbl_fn_8046BBF0_00000534
    mr r3, r0
lbl_fn_8046BBF0_00000534:
    lwz r0, 0x1c(r30)
    add r3, r0, r3
    stw r3, 0x1c(r30)
    lwz r0, 0x4(r30)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r26, r0, 5
lbl_fn_8046BBF0_00000550:
    cmpwi r26, 0x0
    beq lbl_fn_8046BBF0_000005F0
    addi r0, r29, 0x54
    subf r0, r0, r31
    srawi r0, r0, 2
    addze r4, r0
    slwi r0, r4, 2
    add r5, r29, r0
    b lbl_fn_8046BBF0_00000584
lbl_fn_8046BBF0_00000574:
    lwz r0, 0x58(r5)
    addi r4, r4, 0x1
    stw r0, 0x54(r5)
    addi r5, r5, 0x4
lbl_fn_8046BBF0_00000584:
    lwz r3, 0x50(r29)
    subi r0, r3, 0x1
    cmplw r4, r0
    blt lbl_fn_8046BBF0_00000574
    stw r0, 0x50(r29)
    lwz r4, 0x10(r29)
    lwz r3, 0x8(r30)
    lwz r0, 0x4(r30)
    cmpwi r4, -0x3
    stbx r27, r3, r0
    bne lbl_fn_8046BBF0_000005C0
    lwz r3, 0x0(r30)
    li r4, 0x3
    bl fn_80473104
    b lbl_fn_8046BBF0_000005E4
lbl_fn_8046BBF0_000005C0:
    cmpwi r4, 0x0
    bge lbl_fn_8046BBF0_000005D8
    lwz r3, 0x0(r30)
    li r4, 0x4
    bl fn_80473104
    b lbl_fn_8046BBF0_000005E4
lbl_fn_8046BBF0_000005D8:
    lwz r3, 0x0(r30)
    li r4, 0x2
    bl fn_80473104
lbl_fn_8046BBF0_000005E4:
    mr r3, r30
    bl dtor_80084684
    b lbl_fn_8046BBF0_000005F4
lbl_fn_8046BBF0_000005F0:
    addi r31, r31, 0x4
lbl_fn_8046BBF0_000005F4:
    lwz r0, 0x50(r29)
    slwi r0, r0, 2
    add r3, r29, r0
    addi r0, r3, 0x54
    cmplw r31, r0
    bne lbl_fn_8046BBF0_0000047C
    lwz r0, 0x50(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8046BBF0_00000644
    li r0, 0x0
    stw r0, 0x0(r29)
    addi r3, r29, 0x14
    stw r0, 0x4(r29)
    bl fn_805FA390
    lwz r4, 0xc(r28)
    mr r3, r28
    subi r0, r4, 0x1
    stw r0, 0xc(r28)
    bl fn_8046BF88
    b lbl_fn_8046BBF0_00000738
lbl_fn_8046BBF0_00000644:
    lwz r27, 0x54(r29)
    lwz r4, 0x20(r27)
    cmpwi r4, 0x0
    beq lbl_fn_8046BBF0_00000660
    addis r3, r29, 0x4
    lwz r6, 0xb4(r3)
    b lbl_fn_8046BBF0_0000066C
lbl_fn_8046BBF0_00000660:
    lwz r3, 0x8(r27)
    lwz r0, 0x1c(r27)
    add r6, r3, r0
lbl_fn_8046BBF0_0000066C:
    cmpwi r4, 0x0
    ble lbl_fn_8046BBF0_00000694
    lwz r0, 0x14(r28)
    lwz r5, 0x1c(r27)
    slwi r7, r0, 10
    subf r0, r5, r4
    cmplw r0, r7
    bge lbl_fn_8046BBF0_000006A0
    mr r7, r0
    b lbl_fn_8046BBF0_000006A0
lbl_fn_8046BBF0_00000694:
    lwz r5, 0x1c(r27)
    lwz r0, 0x4(r27)
    subf r7, r5, r0
lbl_fn_8046BBF0_000006A0:
    lwz r4, 0x18(r27)
    li r0, 0x1
    li r30, 0x0
    lwz r3, 0x54(r29)
    add r5, r4, r5
    stw r0, 0x0(r29)
    addi r4, r29, 0x14
    stw r7, 0x8(r29)
    stw r6, 0x4(r29)
    stw r5, 0xc(r29)
    stw r30, 0x10(r29)
    lwz r3, 0x48(r3)
    bl fn_805FA200
    lwz r4, 0x8(r29)
    lis r7, fn_8046BBE0@ha
    stw r29, 0x40(r29)
    addi r3, r29, 0x14
    addi r0, r4, 0x1f
    lwz r4, 0x4(r29)
    lwz r6, 0xc(r29)
    clrrwi r5, r0, 5
    addi r7, r7, fn_8046BBE0@l
    li r8, 0x2
    bl fn_805FA4E0
    cmpwi r3, 0x0
    bne lbl_fn_8046BBF0_00000738
    lwz r3, 0x0(r27)
    li r4, 0x4
    bl fn_80473104
    mr r3, r27
    bl dtor_80084684
    stw r30, 0x0(r29)
    addi r3, r29, 0x14
    stw r30, 0x4(r29)
    bl fn_805FA390
    lwz r3, 0xc(r28)
    subi r0, r3, 0x1
    stw r0, 0xc(r28)
lbl_fn_8046BBF0_00000738:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8046BEE4(void)
{
    nofralloc
    lwz r5, 0x8(r4)
    addi r0, r4, 0x4
    stw r5, 0x0(r3)
    lwz r5, 0x8(r5)
    lwz r7, 0x8(r4)
    lwz r6, 0x14(r5)
    lwz r4, 0x18(r5)
    lwz r5, 0x10(r5)
    addc r10, r6, r4
    lwz r4, 0x4(r7)
    addze r9, r5
    b lbl_fn_8046BEE4_000007E4
lbl_fn_8046BEE4_0000077C:
    lwz r8, 0x8(r4)
    lwz r5, 0x44(r8)
    lwz r7, 0x14(r8)
    lwz r6, 0x18(r8)
    cmpwi r5, 0x0
    lwz r5, 0x10(r8)
    addc r7, r7, r6
    addze r6, r5
    beq lbl_fn_8046BEE4_000007A8
    stw r4, 0x0(r3)
    blr
lbl_fn_8046BEE4_000007A8:
    subfc r5, r10, r7
    subfe r5, r9, r6
    subfe r5, r7, r7
    neg. r5, r5
    beq lbl_fn_8046BEE4_000007E0
    lwz r5, 0x0(r8)
    cmpwi r5, 0x0
    beq lbl_fn_8046BEE4_000007E0
    lwz r5, 0x4c(r5)
    cmpwi r5, 0x0
    ble lbl_fn_8046BEE4_000007E0
    stw r4, 0x0(r3)
    mr r10, r7
    mr r9, r6
lbl_fn_8046BEE4_000007E0:
    lwz r4, 0x4(r4)
lbl_fn_8046BEE4_000007E4:
    cmplw r4, r0
    bne lbl_fn_8046BEE4_0000077C
    blr
}

asm void fn_8046BF88(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r26, 0x18(r1)
    lis r27, lbl_80755608@ha
    mr r29, r3
    li r31, 0x1
    addi r27, r27, lbl_80755608@l
    li r28, 0x0
    b lbl_fn_8046BF88_00000A10
lbl_fn_8046BF88_00000818:
    mr r4, r29
    addi r3, r1, 0x8
    bl fn_8046BEE4
    lwz r3, 0x8(r1)
    lwz r5, 0x8(r1)
    lwz r4, 0x0(r3)
    lwz r30, 0x8(r5)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    lwz r4, 0x4(r3)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    bl dtor_80084684
    lwz r3, 0x0(r29)
    subi r0, r3, 0x1
    stw r0, 0x0(r29)
    lwz r26, 0x0(r30)
    lwz r0, 0x4c(r26)
    cmpwi r0, 0x0
    bne lbl_fn_8046BF88_000008A4
    addi r3, r26, 0x6
    addi r4, r27, 0x1
    bl fn_806827C4
    cmpwi r3, 0x0
    bne lbl_fn_8046BF88_000008A4
    stb r31, 0x5(r26)
    li r4, 0x3
    lwz r3, 0x8(r30)
    lwz r0, 0x4(r30)
    stbx r28, r3, r0
    lwz r3, 0x0(r30)
    bl fn_80473104
    mr r3, r30
    bl dtor_80084684
    b lbl_fn_8046BF88_00000A10
lbl_fn_8046BF88_000008A4:
    li r0, 0x2
    li r6, 0x0
    li r3, 0x0
    mtctr r0
lbl_fn_8046BF88_000008B4:
    lwz r5, 0x10(r29)
    lwzx r0, r5, r3
    cmpwi r0, 0x0
    bne lbl_fn_8046BF88_000008E4
    lis r3, 0x4
    lwz r4, 0xc(r29)
    addi r0, r3, 0xb8
    mullw r0, r6, r0
    addi r3, r4, 0x1
    stw r3, 0xc(r29)
    add r31, r5, r0
    b lbl_fn_8046BF88_000008F8
lbl_fn_8046BF88_000008E4:
    addis r3, r3, 0x4
    addi r6, r6, 0x1
    addi r3, r3, 0xb8
    bdnz lbl_fn_8046BF88_000008B4
    li r31, 0x0
lbl_fn_8046BF88_000008F8:
    lwz r0, 0x50(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x54
    beq lbl_fn_8046BF88_00000910
    stw r30, 0x0(r3)
lbl_fn_8046BF88_00000910:
    lwz r3, 0x50(r31)
    addi r0, r3, 0x1
    stw r0, 0x50(r31)
    lwz r4, 0x20(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8046BF88_00000934
    addis r3, r31, 0x4
    lwz r5, 0xb4(r3)
    b lbl_fn_8046BF88_00000940
lbl_fn_8046BF88_00000934:
    lwz r3, 0x8(r30)
    lwz r0, 0x1c(r30)
    add r5, r3, r0
lbl_fn_8046BF88_00000940:
    cmpwi r4, 0x0
    ble lbl_fn_8046BF88_00000968
    lwz r0, 0x14(r29)
    lwz r6, 0x1c(r30)
    slwi r7, r0, 10
    subf r0, r6, r4
    cmplw r0, r7
    bge lbl_fn_8046BF88_00000974
    mr r7, r0
    b lbl_fn_8046BF88_00000974
lbl_fn_8046BF88_00000968:
    lwz r6, 0x1c(r30)
    lwz r0, 0x4(r30)
    subf r7, r6, r0
lbl_fn_8046BF88_00000974:
    lwz r3, 0x18(r30)
    li r0, 0x1
    li r28, 0x0
    addi r4, r31, 0x14
    stw r0, 0x0(r31)
    add r0, r3, r6
    stw r7, 0x8(r31)
    stw r5, 0x4(r31)
    stw r0, 0xc(r31)
    stw r28, 0x10(r31)
    lwz r3, 0x54(r31)
    lwz r3, 0x48(r3)
    bl fn_805FA200
    stw r31, 0x40(r31)
    lis r7, fn_8046BBE0@ha
    addi r3, r31, 0x14
    li r8, 0x2
    lwz r5, 0x8(r31)
    addi r7, r7, fn_8046BBE0@l
    lwz r4, 0x4(r31)
    addi r0, r5, 0x1f
    lwz r6, 0xc(r31)
    clrrwi r5, r0, 5
    bl fn_805FA4E0
    cmpwi r3, 0x0
    bne lbl_fn_8046BF88_00000A1C
    lwz r3, 0x0(r30)
    li r4, 0x4
    bl fn_80473104
    mr r3, r30
    bl dtor_80084684
    stw r28, 0x0(r31)
    addi r3, r31, 0x14
    stw r28, 0x4(r31)
    bl fn_805FA390
    lwz r3, 0xc(r29)
    subi r0, r3, 0x1
    stw r0, 0xc(r29)
    b lbl_fn_8046BF88_00000A1C
lbl_fn_8046BF88_00000A10:
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8046BF88_00000818
lbl_fn_8046BF88_00000A1C:
    lmw r26, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8046C1C8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r0, lbl_8087F510
    cmpwi r0, 0x0
    bne lbl_fn_8046C1C8_00000AE4
    lis r31, lbl_80755608@ha
    li r3, 0x1c
    addi r5, r31, lbl_80755608@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8046C1C8_00000AE0
    li r10, 0x0
    stw r10, 0x0(r3)
    addi r4, r3, 0x4
    addi r5, r31, lbl_80755608@l
    stw r4, 0x4(r4)
    li r9, 0x100
    li r0, 0x40
    lis r8, 0x8
    stw r4, 0x0(r4)
    mr r6, r5
    li r4, 0x2
    li r7, 0x0
    stw r10, 0xc(r3)
    stw r9, 0x14(r3)
    stw r0, 0x18(r3)
    addi r3, r8, 0x180
    bl fn_800846FC
    lis r4, fn_8046BBB0@ha
    lis r6, 0x4
    addi r4, r4, fn_8046BBB0@l
    li r5, 0x0
    addi r6, r6, 0xb8
    li r7, 0x2
    bl fn_80695720
    stw r3, 0x10(r30)
lbl_fn_8046C1C8_00000AE0:
    stw r30, lbl_8087F510
lbl_fn_8046C1C8_00000AE4:
    lwz r31, lbl_8087F510
    li r30, 0x0
    li r29, 0x0
lbl_fn_8046C1C8_00000AF0:
    lwz r0, 0x10(r31)
    add r4, r0, r29
    lwzx r0, r29, r0
    cmpwi r0, 0x2
    bne lbl_fn_8046C1C8_00000B0C
    mr r3, r31
    bl fn_8046BBF0
lbl_fn_8046C1C8_00000B0C:
    addi r30, r30, 0x1
    addis r29, r29, 0x4
    cmpwi r30, 0x2
    addi r29, r29, 0xb8
    blt lbl_fn_8046C1C8_00000AF0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8046C2D4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r25, r4
    mr r27, r7
    mr r26, r5
    mr r3, r25
    mr r4, r27
    bl fn_8046FD1C
    mr r3, r25
    mr r4, r27
    bl fn_8046FD1C
    lwz r31, 0x8(r3)
    mr r3, r25
    mr r4, r27
    bl fn_8046FD1C
    lwz r0, 0x70(r25)
    addi r4, r31, 0x20
    lwz r30, 0xc(r3)
    clrrwi r29, r4, 5
    cmpwi r0, 0x0
    li r28, 0x0
    bne lbl_fn_8046C2D4_00000BC8
    bl fn_800827E0
    lis r7, lbl_80755608@ha
    mr r4, r29
    addi r7, r7, lbl_80755608@l
    li r5, 0x20
    mr r8, r7
    li r6, 0x2
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    mr r28, r3
lbl_fn_8046C2D4_00000BC8:
    mr r3, r25
    mr r4, r27
    bl fn_8046FD2C
    cmpwi r30, 0x0
    mr r4, r3
    beq lbl_fn_8046C2D4_00000BF8
    mr r4, r28
    bl fn_806254D0
    mr r3, r28
    mr r4, r29
    bl DCFlushRangeNoSync
    b lbl_fn_8046C2D4_00000C18
lbl_fn_8046C2D4_00000BF8:
    lwz r0, 0x70(r25)
    cmpwi r0, 0x0
    bne lbl_fn_8046C2D4_00000C14
    mr r3, r28
    mr r5, r31
    bl memcpy
    b lbl_fn_8046C2D4_00000C18
lbl_fn_8046C2D4_00000C14:
    mr r28, r4
lbl_fn_8046C2D4_00000C18:
    lwz r0, 0x70(r25)
    cmpwi r0, 0x0
    bne lbl_fn_8046C2D4_00000C2C
    li r0, 0x0
    stbx r0, r28, r31
lbl_fn_8046C2D4_00000C2C:
    stw r28, 0x54(r26)
    mr r3, r26
    li r4, 0x2
    stw r31, 0x50(r26)
    bl fn_80473104
    lwz r0, 0x70(r25)
    cmpwi r0, 0x0
    beq lbl_fn_8046C2D4_00000C50
    stw r25, 0x58(r26)
lbl_fn_8046C2D4_00000C50:
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8046C3FC(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    stmw r18, 0x118(r1)
    mr r22, r3
    mr r23, r4
    addi r31, r4, 0x6
    li r29, -0x1
    li r28, 0x0
    li r27, 0x0
    li r26, 0x0
    li r24, 0x0
    li r25, 0x0
    li r19, 0x1
    lwz r0, 0x3ed8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8046C3FC_00000CBC
    mr r3, r31
    bl fn_805F9EF0
    cmpwi r3, 0x0
    blt lbl_fn_8046C3FC_00000CBC
    li r19, 0x0
lbl_fn_8046C3FC_00000CBC:
    cmpwi r19, 0x0
    beq lbl_fn_8046C3FC_00000EB4
    lwz r30, 0x4028(r22)
    addi r19, r22, 0x4024
    b lbl_fn_8046C3FC_00000EAC
lbl_fn_8046C3FC_00000CD0:
    lwz r3, 0x8(r30)
    mr r4, r31
    bl fn_8046FBB0
    cmpwi r3, -0x1
    mr r18, r3
    beq lbl_fn_8046C3FC_00000EA8
    lwz r20, 0x8(r30)
    li r21, 0x0
    addi r3, r20, 0x10
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_8046C3FC_00000D14
    addi r3, r20, 0x10
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_8046C3FC_00000D14
    li r21, 0x1
lbl_fn_8046C3FC_00000D14:
    cmpwi r21, 0x0
    bne lbl_fn_8046C3FC_00000E88
    lwz r3, 0x8(r30)
    bl fn_80470264
    cmpwi r3, 0x0
    beq lbl_fn_8046C3FC_00000EA8
    lwz r0, 0x8(r30)
    addi r21, r1, 0xd4
    cmplw r31, r21
    stw r0, 0xcc(r1)
    stw r23, 0xd0(r1)
    beq lbl_fn_8046C3FC_00000D60
    mr r3, r31
    bl strlen
    mr r5, r3
    mr r3, r21
    mr r4, r31
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8046C3FC_00000D60:
    stw r18, 0x114(r1)
    li r3, 0x54
    lwz r30, 0x4040(r22)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r20, r3
    bne lbl_fn_8046C3FC_00000D9C
    lis r3, __files@ha
    lis r4, lbl_8078FB50@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8078FB50@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8046C3FC_00000D9C:
    addic. r4, r20, 0x8
    addi r0, r22, 0x403c
    stw r0, 0x10(r1)
    stw r20, 0x14(r1)
    beq lbl_fn_8046C3FC_00000E48
    lwz r0, 0xcc(r1)
    stw r0, 0x0(r4)
    lwz r0, 0xd0(r1)
    stw r0, 0x4(r4)
    lwz r0, 0xd8(r1)
    lwz r3, 0xd4(r1)
    stw r3, 0x8(r4)
    stw r0, 0xc(r4)
    lwz r0, 0xe0(r1)
    lwz r3, 0xdc(r1)
    stw r3, 0x10(r4)
    stw r0, 0x14(r4)
    lwz r0, 0xe8(r1)
    lwz r3, 0xe4(r1)
    stw r3, 0x18(r4)
    stw r0, 0x1c(r4)
    lwz r0, 0xf0(r1)
    lwz r3, 0xec(r1)
    stw r3, 0x20(r4)
    stw r0, 0x24(r4)
    lwz r0, 0xf8(r1)
    lwz r3, 0xf4(r1)
    stw r3, 0x28(r4)
    stw r0, 0x2c(r4)
    lwz r0, 0x100(r1)
    lwz r3, 0xfc(r1)
    stw r3, 0x30(r4)
    stw r0, 0x34(r4)
    lwz r0, 0x108(r1)
    lwz r3, 0x104(r1)
    stw r3, 0x38(r4)
    stw r0, 0x3c(r4)
    lwz r0, 0x110(r1)
    lwz r3, 0x10c(r1)
    stw r3, 0x40(r4)
    stw r0, 0x44(r4)
    lwz r0, 0x114(r1)
    stw r0, 0x48(r4)
lbl_fn_8046C3FC_00000E48:
    lwz r3, 0x0(r30)
    li r4, 0x0
    lwz r5, 0x14(r1)
    stw r5, 0x4(r3)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r5)
    stw r5, 0x0(r30)
    stw r30, 0x4(r5)
    lwz r3, 0x4038(r22)
    stw r4, 0x14(r1)
    addi r0, r3, 0x1
    stw r0, 0x4038(r22)
    b lbl_fn_8046C3FC_00000E80
    bl dtor_80084684
lbl_fn_8046C3FC_00000E80:
    li r3, 0x1
    b lbl_fn_8046C3FC_00001404
lbl_fn_8046C3FC_00000E88:
    lwz r4, 0x8(r30)
    mr r3, r22
    mr r5, r23
    mr r6, r31
    mr r7, r18
    bl fn_8046C2D4
    li r3, 0x1
    b lbl_fn_8046C3FC_00001404
lbl_fn_8046C3FC_00000EA8:
    lwz r30, 0x4(r30)
lbl_fn_8046C3FC_00000EAC:
    cmplw r30, r19
    bne lbl_fn_8046C3FC_00000CD0
lbl_fn_8046C3FC_00000EB4:
    lis r5, lbl_80755608@ha
    li r3, 0x50
    addi r5, r5, lbl_80755608@l
    li r4, 0x2
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8046C3FC_00000F0C
    stw r23, 0x0(r3)
    li r0, 0x0
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0x14(r3)
    stw r0, 0x10(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x20(r3)
    stw r0, 0x3c(r3)
    stw r0, 0x40(r3)
    stw r0, 0x44(r3)
lbl_fn_8046C3FC_00000F0C:
    lwz r0, 0x3ed8(r22)
    cmpwi r0, 0x0
    bne lbl_fn_8046C3FC_00000FAC
    lwz r21, 0x4034(r22)
    addi r19, r22, 0x4030
    b lbl_fn_8046C3FC_00000FA4
lbl_fn_8046C3FC_00000F24:
    lwz r3, 0x8(r21)
    mr r4, r31
    bl fn_8046FBB0
    cmpwi r3, -0x1
    mr r29, r3
    beq lbl_fn_8046C3FC_00000FA0
    lwz r3, 0x8(r21)
    mr r4, r29
    lwz r0, 0x24(r3)
    stw r0, 0x48(r30)
    lwz r3, 0x8(r21)
    bl fn_8046FD1C
    lwz r26, 0x4(r3)
    mr r4, r29
    lwz r3, 0x8(r21)
    bl fn_8046FD1C
    lwz r28, 0x8(r3)
    mr r4, r29
    lwz r3, 0x8(r21)
    bl fn_8046FD1C
    lwz r27, 0xc(r3)
    addi r4, r1, 0x90
    lwz r3, 0x48(r30)
    bl fn_805FA200
    lwz r0, 0xc0(r1)
    li r25, 0x0
    addi r3, r1, 0x90
    rlwimi r25, r0, 2, 30, 31
    slwi r24, r0, 2
    bl fn_805FA390
    b lbl_fn_8046C3FC_00000FAC
lbl_fn_8046C3FC_00000FA0:
    lwz r21, 0x4(r21)
lbl_fn_8046C3FC_00000FA4:
    cmplw r21, r19
    bne lbl_fn_8046C3FC_00000F24
lbl_fn_8046C3FC_00000FAC:
    cmpwi r29, -0x1
    bne lbl_fn_8046C3FC_000010B0
    mr r3, r31
    bl fn_805F9EF0
    cmpwi r3, -0x1
    stw r3, 0x48(r30)
    bne lbl_fn_8046C3FC_00001080
    lwz r0, 0x3ed8(r22)
    cmpwi r0, 0x0
    beq lbl_fn_8046C3FC_00001068
    lwz r21, 0x4034(r22)
    addi r19, r22, 0x4030
    b lbl_fn_8046C3FC_00001060
lbl_fn_8046C3FC_00000FE0:
    lwz r3, 0x8(r21)
    mr r4, r31
    bl fn_8046FBB0
    cmpwi r3, -0x1
    mr r29, r3
    beq lbl_fn_8046C3FC_0000105C
    lwz r3, 0x8(r21)
    mr r4, r29
    lwz r0, 0x24(r3)
    stw r0, 0x48(r30)
    lwz r3, 0x8(r21)
    bl fn_8046FD1C
    lwz r26, 0x4(r3)
    mr r4, r29
    lwz r3, 0x8(r21)
    bl fn_8046FD1C
    lwz r28, 0x8(r3)
    mr r4, r29
    lwz r3, 0x8(r21)
    bl fn_8046FD1C
    lwz r27, 0xc(r3)
    addi r4, r1, 0x54
    lwz r3, 0x48(r30)
    bl fn_805FA200
    lwz r0, 0x84(r1)
    li r25, 0x0
    addi r3, r1, 0x54
    rlwimi r25, r0, 2, 30, 31
    slwi r24, r0, 2
    bl fn_805FA390
    b lbl_fn_8046C3FC_00001068
lbl_fn_8046C3FC_0000105C:
    lwz r21, 0x4(r21)
lbl_fn_8046C3FC_00001060:
    cmplw r21, r19
    bne lbl_fn_8046C3FC_00000FE0
lbl_fn_8046C3FC_00001068:
    cmpwi r29, -0x1
    bne lbl_fn_8046C3FC_00001080
    mr r3, r30
    bl dtor_80084684
    li r3, 0x0
    b lbl_fn_8046C3FC_00001404
lbl_fn_8046C3FC_00001080:
    cmpwi r29, -0x1
    bne lbl_fn_8046C3FC_000010B0
    lwz r3, 0x48(r30)
    addi r4, r1, 0x18
    bl fn_805FA200
    lwz r0, 0x48(r1)
    li r25, 0x0
    lwz r28, 0x4c(r1)
    addi r3, r1, 0x18
    rlwimi r25, r0, 2, 30, 31
    slwi r24, r0, 2
    bl fn_805FA390
lbl_fn_8046C3FC_000010B0:
    stw r26, 0x18(r30)
    lis r21, lbl_80755608@ha
    addi r0, r28, 0x20
    mr r3, r31
    addi r21, r21, lbl_80755608@l
    stw r27, 0x20(r30)
    clrrwi r18, r0, 5
    addi r4, r21, 0x1
    bl fn_806827C4
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    stw r0, 0x44(r30)
    bl fn_800827E0
    mr r4, r18
    mr r7, r21
    mr r8, r21
    li r5, 0x20
    li r6, 0x2
    li r9, 0x0
    li r10, 0x1
    bl fn_800839EC
    cmpwi r3, 0x0
    stw r3, 0x8(r30)
    bne lbl_fn_8046C3FC_00001124
    mr r3, r30
    bl dtor_80084684
    li r3, 0x0
    b lbl_fn_8046C3FC_00001404
lbl_fn_8046C3FC_00001124:
    mr r4, r18
    bl DCZeroRange
    stw r28, 0x4(r30)
    stw r24, 0x14(r30)
    stw r25, 0x10(r30)
    lwz r0, 0x8(r30)
    stw r0, 0x54(r23)
    stw r28, 0x50(r23)
    lwz r0, 0x20(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8046C3FC_0000115C
    lwz r4, 0x8(r30)
    addi r3, r30, 0x24
    bl fn_806250D0
lbl_fn_8046C3FC_0000115C:
    lwz r0, lbl_8087F510
    cmpwi r0, 0x0
    bne lbl_fn_8046C3FC_000011F8
    lis r21, lbl_80755608@ha
    li r3, 0x1c
    addi r5, r21, lbl_80755608@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r20, r3
    beq lbl_fn_8046C3FC_000011F4
    li r10, 0x0
    stw r10, 0x0(r3)
    addi r4, r3, 0x4
    addi r5, r21, lbl_80755608@l
    stw r4, 0x4(r4)
    li r9, 0x100
    li r0, 0x40
    lis r8, 0x8
    stw r4, 0x0(r4)
    mr r6, r5
    li r4, 0x2
    li r7, 0x0
    stw r10, 0xc(r3)
    stw r9, 0x14(r3)
    stw r0, 0x18(r3)
    addi r3, r8, 0x180
    bl fn_800846FC
    lis r4, fn_8046BBB0@ha
    lis r6, 0x4
    addi r4, r4, fn_8046BBB0@l
    li r5, 0x0
    addi r6, r6, 0xb8
    li r7, 0x2
    bl fn_80695720
    stw r3, 0x10(r20)
lbl_fn_8046C3FC_000011F4:
    stw r20, lbl_8087F510
lbl_fn_8046C3FC_000011F8:
    lwz r29, lbl_8087F510
    lwz r0, 0xc(r29)
    cmpwi r0, 0x2
    bge lbl_fn_8046C3FC_00001378
    li r0, 0x2
    li r5, 0x0
    li r4, 0x0
    mtctr r0
lbl_fn_8046C3FC_00001218:
    lwz r3, 0x10(r29)
    lwzx r0, r3, r4
    cmpwi r0, 0x0
    bne lbl_fn_8046C3FC_0000124C
    lis r3, 0x4
    lwz r4, 0xc(r29)
    addi r0, r3, 0xb8
    mullw r0, r5, r0
    addi r3, r4, 0x1
    stw r3, 0xc(r29)
    lwz r3, 0x10(r29)
    add r31, r3, r0
    b lbl_fn_8046C3FC_00001260
lbl_fn_8046C3FC_0000124C:
    addis r4, r4, 0x4
    addi r5, r5, 0x1
    addi r4, r4, 0xb8
    bdnz lbl_fn_8046C3FC_00001218
    li r31, 0x0
lbl_fn_8046C3FC_00001260:
    lwz r0, 0x50(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x54
    beq lbl_fn_8046C3FC_00001278
    stw r30, 0x0(r3)
lbl_fn_8046C3FC_00001278:
    lwz r3, 0x50(r31)
    addi r0, r3, 0x1
    stw r0, 0x50(r31)
    lwz r4, 0x20(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8046C3FC_0000129C
    addis r3, r31, 0x4
    lwz r5, 0xb4(r3)
    b lbl_fn_8046C3FC_000012A8
lbl_fn_8046C3FC_0000129C:
    lwz r3, 0x8(r30)
    lwz r0, 0x1c(r30)
    add r5, r3, r0
lbl_fn_8046C3FC_000012A8:
    cmpwi r4, 0x0
    ble lbl_fn_8046C3FC_000012D0
    lwz r0, 0x14(r29)
    lwz r6, 0x1c(r30)
    slwi r7, r0, 10
    subf r0, r6, r4
    cmplw r0, r7
    bge lbl_fn_8046C3FC_000012DC
    mr r7, r0
    b lbl_fn_8046C3FC_000012DC
lbl_fn_8046C3FC_000012D0:
    lwz r6, 0x1c(r30)
    lwz r0, 0x4(r30)
    subf r7, r6, r0
lbl_fn_8046C3FC_000012DC:
    lwz r3, 0x18(r30)
    li r0, 0x1
    li r21, 0x0
    addi r4, r31, 0x14
    stw r0, 0x0(r31)
    add r0, r3, r6
    stw r7, 0x8(r31)
    stw r5, 0x4(r31)
    stw r0, 0xc(r31)
    stw r21, 0x10(r31)
    lwz r3, 0x54(r31)
    lwz r3, 0x48(r3)
    bl fn_805FA200
    stw r31, 0x40(r31)
    lis r7, fn_8046BBE0@ha
    addi r3, r31, 0x14
    li r8, 0x2
    lwz r5, 0x8(r31)
    addi r7, r7, fn_8046BBE0@l
    lwz r4, 0x4(r31)
    addi r0, r5, 0x1f
    lwz r6, 0xc(r31)
    clrrwi r5, r0, 5
    bl fn_805FA4E0
    cmpwi r3, 0x0
    bne lbl_fn_8046C3FC_00001400
    lwz r3, 0x0(r30)
    li r4, 0x4
    bl fn_80473104
    mr r3, r30
    bl dtor_80084684
    stw r21, 0x0(r31)
    addi r3, r31, 0x14
    stw r21, 0x4(r31)
    bl fn_805FA390
    lwz r3, 0xc(r29)
    subi r0, r3, 0x1
    stw r0, 0xc(r29)
    b lbl_fn_8046C3FC_00001400
lbl_fn_8046C3FC_00001378:
    addi r19, r29, 0x4
    li r3, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r20, r3
    bne lbl_fn_8046C3FC_000013B0
    lis r3, __files@ha
    lis r4, lbl_80779810@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779810@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8046C3FC_000013B0:
    addic. r3, r20, 0x8
    addi r0, r29, 0x4
    stw r0, 0x8(r1)
    stw r20, 0xc(r1)
    beq lbl_fn_8046C3FC_000013C8
    stw r30, 0x0(r3)
lbl_fn_8046C3FC_000013C8:
    lwz r3, 0x0(r19)
    li r4, 0x0
    lwz r5, 0xc(r1)
    stw r5, 0x4(r3)
    lwz r0, 0x0(r19)
    stw r0, 0x0(r5)
    stw r5, 0x0(r19)
    stw r19, 0x4(r5)
    lwz r3, 0x0(r29)
    stw r4, 0xc(r1)
    addi r0, r3, 0x1
    stw r0, 0x0(r29)
    b lbl_fn_8046C3FC_00001400
    bl dtor_80084684
lbl_fn_8046C3FC_00001400:
    li r3, 0x1
lbl_fn_8046C3FC_00001404:
    lmw r18, 0x118(r1)
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_8046CBB0(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x4044(r3)
    blr
}

asm void fn_8046CBBC(void)
{
    nofralloc
    blr
}

asm void fn_8046CBC0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r31, 0x2c(r1)
    addi r31, r1, 0x10
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r3
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    bl strlen
    mr r30, r3
    mr r3, r31
    mr r4, r30
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r31
    stb r0, 0x8(r1)
    mr r6, r29
    add r7, r29, r30
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r3, r31
    bl fn_8006A9A4
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8046CBC0_000014AC
    addi r3, r1, 0x11
    b lbl_fn_8046CBC0_000014B0
lbl_fn_8046CBC0_000014AC:
    lwz r3, 0x18(r1)
lbl_fn_8046CBC0_000014B0:
    bl fn_805F9EF0
    lwz r0, 0x10(r1)
    subfic r4, r3, -0x1
    addi r3, r3, 0x1
    srwi. r0, r0, 31
    or r0, r4, r3
    srwi r31, r0, 31
    beq lbl_fn_8046CBC0_000014D8
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_8046CBC0_000014D8:
    mr r3, r31
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8046CC90(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    stw r31, 0x17c(r1)
    li r31, 0x0
    stw r30, 0x178(r1)
    mr r30, r4
    li r4, 0x0
    stw r29, 0x174(r1)
    mr r29, r3
    mr r3, r30
    bl fn_8046D1CC
    lbz r0, 0x0(r3)
    cmpwi r0, 0x2f
    bne lbl_fn_8046CC90_00001554
    mr r3, r30
    bl fn_8004212C
    mr r4, r3
    addi r3, r1, 0x20
    addi r4, r4, 0x1
    bl fn_8003E4A4
    addi r30, r1, 0x20
    li r31, 0x1
lbl_fn_8046CC90_00001554:
    mr r4, r30
    addi r3, r1, 0x50
    bl fn_800E19AC
    cmpwi r31, 0x0
    beq lbl_fn_8046CC90_00001574
    addi r3, r1, 0x20
    li r4, -0x1
    bl dtor_80013D60
lbl_fn_8046CC90_00001574:
    bl fn_8020A3E4
    cmpwi r3, 0x0
    beq lbl_fn_8046CC90_000015AC
    bl fn_8020A3E4
    bl fn_8046D184
    cmpwi r3, 0x0
    bne lbl_fn_8046CC90_000015AC
    mr r3, r29
    addi r4, r1, 0x50
    bl fn_800E19AC
    addi r3, r1, 0x50
    li r4, -0x1
    bl dtor_80013D60
    b lbl_fn_8046CC90_000019D0
lbl_fn_8046CC90_000015AC:
    addi r3, r1, 0x44
    addi r4, r1, 0x50
    bl fn_8006AC08
    bl fn_8020A3E4
    cmpwi r3, 0x0
    beq lbl_fn_8046CC90_00001698
    bl fn_8020A3E4
    bl fn_8046D18C
    cmpwi r3, 0x0
    beq lbl_fn_8046CC90_00001698
    addi r3, r1, 0x38
    addi r4, r1, 0x50
    bl fn_8006B174
    addi r3, r1, 0x5c
    bl fn_8006BBCC
    addi r3, r1, 0x44
    bl fn_8004212C
    mr r31, r3
    bl fn_8020A3E4
    bl fn_8046D194
    lis r6, 0x1
    mr r4, r3
    mr r5, r31
    addi r3, r1, 0x5c
    addi r6, r6, 0x1
    bl fn_8006C3F0
    addi r3, r1, 0x38
    bl fn_8004212C
    mr r4, r3
    addi r3, r1, 0x5c
    li r5, 0x0
    bl fn_8006C300
    cmpwi r3, 0x0
    blt lbl_fn_8046CC90_00001680
    mr r4, r3
    addi r3, r1, 0x5c
    bl fn_8046D19C
    mr r4, r3
    mr r3, r29
    bl fn_8003E4A4
    addi r3, r1, 0x5c
    li r4, -0x1
    bl fn_8006BC64
    addi r3, r1, 0x38
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x44
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x50
    li r4, -0x1
    bl dtor_80013D60
    b lbl_fn_8046CC90_000019D0
lbl_fn_8046CC90_00001680:
    addi r3, r1, 0x5c
    li r4, -0x1
    bl fn_8006BC64
    addi r3, r1, 0x38
    li r4, -0x1
    bl dtor_80013D60
lbl_fn_8046CC90_00001698:
    bl fn_8020A3E4
    cmpwi r3, 0x0
    beq lbl_fn_8046CC90_00001760
    bl fn_8020A3E4
    bl fn_8046D1C4
    bl fn_80042218
    cmpwi r3, 0x0
    bne lbl_fn_8046CC90_00001760
    addi r3, r1, 0x50
    bl fn_8004212C
    mr r31, r3
    bl fn_8020A3E4
    mr r5, r31
    addi r4, r1, 0x70
    bl fn_8046DBF8
    bl fn_8020A3E4
    bl fn_8046D1C4
    lis r5, lbl_8075561C@ha
    mr r4, r3
    addi r3, r1, 0x14
    addi r5, r5, lbl_8075561C@l
    bl fn_8006D008
    addi r3, r1, 0x2c
    addi r4, r1, 0x14
    addi r5, r1, 0x70
    bl fn_8006D008
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x2c
    bl fn_8004212C
    bl fn_8046CBC0
    cmpwi r3, 0x0
    beq lbl_fn_8046CC90_00001754
    mr r3, r29
    addi r4, r1, 0x2c
    bl fn_800E19AC
    addi r3, r1, 0x2c
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x44
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x50
    li r4, -0x1
    bl dtor_80013D60
    b lbl_fn_8046CC90_000019D0
lbl_fn_8046CC90_00001754:
    addi r3, r1, 0x2c
    li r4, -0x1
    bl dtor_80013D60
lbl_fn_8046CC90_00001760:
    lis r31, lbl_8075561C@ha
    addi r3, r1, 0x44
    addi r31, r31, lbl_8075561C@l
    li r30, 0x0
    addi r4, r31, 0x2
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8046CC90_00001788
    addi r30, r31, 0x8
    b lbl_fn_8046CC90_00001960
lbl_fn_8046CC90_00001788:
    addi r3, r1, 0x44
    addi r4, r31, 0x14
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8046CC90_000017A4
    addi r30, r31, 0x1c
    b lbl_fn_8046CC90_00001960
lbl_fn_8046CC90_000017A4:
    addi r3, r1, 0x44
    addi r4, r31, 0x2a
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8046CC90_000017C0
    addi r30, r31, 0x31
    b lbl_fn_8046CC90_00001960
lbl_fn_8046CC90_000017C0:
    addi r3, r1, 0x44
    addi r4, r31, 0x3e
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8046CC90_000017DC
    addi r30, r31, 0x42
    b lbl_fn_8046CC90_00001960
lbl_fn_8046CC90_000017DC:
    addi r3, r1, 0x44
    addi r4, r31, 0x4c
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8046CC90_000017F8
    addi r30, r31, 0x50
    b lbl_fn_8046CC90_00001960
lbl_fn_8046CC90_000017F8:
    addi r3, r1, 0x44
    addi r4, r31, 0x5a
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8046CC90_00001814
    addi r30, r31, 0x64
    b lbl_fn_8046CC90_00001960
lbl_fn_8046CC90_00001814:
    addi r3, r1, 0x44
    addi r4, r31, 0x77
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_8046CC90_0000183C
    addi r3, r1, 0x44
    addi r4, r31, 0x7c
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8046CC90_0000184C
lbl_fn_8046CC90_0000183C:
    lis r3, lbl_8075561C@ha
    addi r3, r3, lbl_8075561C@l
    addi r30, r3, 0x80
    b lbl_fn_8046CC90_00001960
lbl_fn_8046CC90_0000184C:
    addi r3, r1, 0x44
    addi r4, r31, 0x90
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8046CC90_00001868
    addi r30, r31, 0x99
    b lbl_fn_8046CC90_00001960
lbl_fn_8046CC90_00001868:
    addi r3, r1, 0x44
    addi r4, r31, 0xa8
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8046CC90_00001884
    addi r30, r31, 0xb0
    b lbl_fn_8046CC90_00001960
lbl_fn_8046CC90_00001884:
    addi r3, r1, 0x44
    addi r4, r31, 0xbe
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8046CC90_000018A0
    addi r30, r31, 0xc2
    b lbl_fn_8046CC90_00001960
lbl_fn_8046CC90_000018A0:
    addi r3, r1, 0x44
    addi r4, r31, 0xd0
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8046CC90_000018BC
    addi r30, r31, 0xd7
    b lbl_fn_8046CC90_00001960
lbl_fn_8046CC90_000018BC:
    addi r3, r1, 0x44
    addi r4, r31, 0xe4
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8046CC90_000018D8
    addi r30, r31, 0xe9
    b lbl_fn_8046CC90_00001960
lbl_fn_8046CC90_000018D8:
    addi r3, r1, 0x44
    addi r4, r31, 0xf4
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_8046CC90_00001900
    addi r3, r1, 0x44
    addi r4, r31, 0xf8
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8046CC90_00001910
lbl_fn_8046CC90_00001900:
    lis r3, lbl_8075561C@ha
    addi r3, r3, lbl_8075561C@l
    addi r30, r3, 0xfc
    b lbl_fn_8046CC90_00001960
lbl_fn_8046CC90_00001910:
    addi r3, r1, 0x44
    addi r4, r31, 0x106
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8046CC90_0000192C
    addi r30, r31, 0x10a
    b lbl_fn_8046CC90_00001960
lbl_fn_8046CC90_0000192C:
    addi r3, r1, 0x44
    addi r4, r31, 0x11a
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8046CC90_00001948
    addi r30, r31, 0x11e
    b lbl_fn_8046CC90_00001960
lbl_fn_8046CC90_00001948:
    addi r3, r1, 0x44
    addi r4, r31, 0x13b
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8046CC90_00001960
    addi r30, r31, 0x12c
lbl_fn_8046CC90_00001960:
    cmpwi r30, 0x0
    beq lbl_fn_8046CC90_000019AC
    addi r3, r1, 0x8
    addi r4, r1, 0x50
    bl fn_8006B174
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_8006AF38
    addi r3, r1, 0x8
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x44
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x50
    li r4, -0x1
    bl dtor_80013D60
    b lbl_fn_8046CC90_000019D0
lbl_fn_8046CC90_000019AC:
    mr r3, r29
    addi r4, r1, 0x50
    bl fn_800E19AC
    addi r3, r1, 0x44
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x50
    li r4, -0x1
    bl dtor_80013D60
lbl_fn_8046CC90_000019D0:
    lwz r0, 0x184(r1)
    lwz r31, 0x17c(r1)
    lwz r30, 0x178(r1)
    lwz r29, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_8046D184(void)
{
    nofralloc
    lwz r3, 0x400c(r3)
    blr
}

asm void fn_8046D18C(void)
{
    nofralloc
    lwz r3, 0x4008(r3)
    blr
}

asm void fn_8046D194(void)
{
    nofralloc
    addi r3, r3, 0x3f08
    blr
}
