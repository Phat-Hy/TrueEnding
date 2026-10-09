#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_80049B74(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8005B710(void);
extern void fn_8005B8F8(void);
extern void fn_8005B9AC(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800DC1DC(void);
extern void fn_80206B9C(void);
extern void fn_80206C50(void);
extern void fn_8020EF04(void);
extern void fn_8020EFEC(void);
extern void fn_80213B08(void);
extern void fn_80216440(void);
extern void fn_80216488(void);
extern void fn_802164A0(void);
extern void fn_802164E8(void);
extern void fn_80216500(void);
extern void fn_80216AFC(void);
extern void fn_8046DC5C(void);
extern void fn_8046DD20(void);
extern void fn_806827C4(void);
extern void fn_80684600(void);
extern void fn_80686A64(void);
extern void fn_80695720(void);
extern int sprintf(char* str, const char* format, ...);
extern void strchr(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8073FACC[];
extern u8 lbl_8073FB0C[];
extern u8 lbl_8073FB74[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_8077A070[];
extern u8 lbl_8077A090[];
extern u8 lbl_807830B8[];
extern u8 lbl_807C7FB0[];

/* Small data declarations */
extern u32 lbl_8087D720;
extern u32 lbl_8087D9E8;
extern u32 lbl_8087D9EC;
extern u32 lbl_8087DB70;
extern u32 lbl_8087DB74;
extern u32 lbl_8087DB78;
extern u32 lbl_8087DB7C;
extern u32 lbl_8087DB80;
extern u32 lbl_8087DB84;
extern u32 lbl_8087DB88;
extern u32 lbl_8087DB8C;
extern u32 lbl_8087EE90;
extern u32 lbl_8087F240;
extern u32 lbl_8087F244;
extern u32 lbl_8087F248;
extern u32 lbl_8087F24C;
extern u32 lbl_8087F250;
extern u32 lbl_8087F254;
extern u32 lbl_8087F258;
extern u32 lbl_8087F25C;
extern u32 lbl_8087F260;
extern u32 lbl_8087F264;
extern u32 lbl_8087F268;
extern u32 lbl_8087F26C;
extern u32 lbl_8087F518;
extern u32 lbl_80882EF8;
extern u32 lbl_80882F00;
extern u32 lbl_80882F04;
extern u32 lbl_80882F08;
extern u32 lbl_80882F0C;
extern u32 lbl_80882F10;

/* Function declarations */
void fn_80213E60(void);
void fn_8021414C(void);
void fn_80214394(void);
void fn_802143EC(void);
void fn_8021446C(void);
void fn_802144A8(void);
void fn_80214BF4(void);
void fn_80214E04(void);
void fn_80214E14(void);
void fn_80214E24(void);
void fn_80214E94(void);
void fn_80214ED4(void);
void fn_80214F38(void);
void fn_80214F80(void);
void fn_80215018(void);
void fn_80215084(void);
void fn_802150F0(void);

asm void fn_80213E60(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    bne lbl_fn_80213E60_0000003C
    li r3, 0x0
    b lbl_fn_80213E60_000002CC
lbl_fn_80213E60_0000003C:
    lwz r3, 0x4(r3)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_80213E60_00000128
    lwz r3, 0x4(r31)
    bl fn_80206C50
    mr r31, r3
    mr r3, r28
    mr r4, r29
    mr r5, r30
    bl fn_80213B08
    lwz r4, 0x114(r31)
    neg r0, r4
    or r0, r0, r4
    srwi. r0, r0, 31
    bne lbl_fn_80213E60_00000120
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_fn_80213E60_00000120
    lwz r0, 0xc(r3)
    li r4, 0x0
    lwz r5, 0x80(r31)
    lwz r6, 0x78(r31)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80213E60_00000110
lbl_fn_80213E60_000000A8:
    lwz r0, 0x14(r3)
    add r7, r0, r4
    lwzx r0, r4, r0
    cmpwi r0, 0x1
    bne lbl_fn_80213E60_00000108
    lwz r0, 0x4(r7)
    cmpw r0, r6
    bne lbl_fn_80213E60_00000108
    lwz r4, 0xc(r7)
    cmpwi r4, 0x0
    ble lbl_fn_80213E60_000000F4
    lwz r0, 0x8(r7)
    li r3, 0x0
    cmpw r0, r5
    bgt lbl_fn_80213E60_00000114
    cmpw r5, r4
    bgt lbl_fn_80213E60_00000114
    li r3, 0x1
    b lbl_fn_80213E60_00000114
lbl_fn_80213E60_000000F4:
    lwz r0, 0x8(r7)
    subf r0, r0, r5
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_80213E60_00000114
lbl_fn_80213E60_00000108:
    addi r4, r4, 0x10
    bdnz lbl_fn_80213E60_000000A8
lbl_fn_80213E60_00000110:
    li r3, 0x0
lbl_fn_80213E60_00000114:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_80213E60_00000120:
    mr r3, r0
    b lbl_fn_80213E60_000002CC
lbl_fn_80213E60_00000128:
    lwz r3, 0x4(r31)
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_80213E60_00000200
    lwz r3, 0x4(r31)
    bl fn_8020EFEC
    mr r31, r3
    mr r3, r28
    mr r4, r29
    mr r5, r30
    bl fn_80213B08
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_fn_80213E60_000001F8
    lwz r0, 0xc(r3)
    li r4, 0x0
    lwz r5, 0x7c(r31)
    lwz r6, 0x78(r31)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80213E60_000001E8
lbl_fn_80213E60_00000180:
    lwz r0, 0x14(r3)
    add r7, r0, r4
    lwzx r0, r4, r0
    cmpwi r0, 0x2
    bne lbl_fn_80213E60_000001E0
    lwz r0, 0x4(r7)
    cmpw r0, r6
    bne lbl_fn_80213E60_000001E0
    lwz r4, 0xc(r7)
    cmpwi r4, 0x0
    ble lbl_fn_80213E60_000001CC
    lwz r0, 0x8(r7)
    li r3, 0x0
    cmpw r0, r5
    bgt lbl_fn_80213E60_000001EC
    cmpw r5, r4
    bgt lbl_fn_80213E60_000001EC
    li r3, 0x1
    b lbl_fn_80213E60_000001EC
lbl_fn_80213E60_000001CC:
    lwz r0, 0x8(r7)
    subf r0, r0, r5
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_80213E60_000001EC
lbl_fn_80213E60_000001E0:
    addi r4, r4, 0x10
    bdnz lbl_fn_80213E60_00000180
lbl_fn_80213E60_000001E8:
    li r3, 0x0
lbl_fn_80213E60_000001EC:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_80213E60_000001F8:
    mr r3, r0
    b lbl_fn_80213E60_000002CC
lbl_fn_80213E60_00000200:
    mr r3, r28
    mr r4, r29
    mr r5, r30
    bl fn_80213B08
    lbz r0, 0xc2(r31)
    extsb r4, r0
    neg r0, r4
    or r0, r0, r4
    srwi. r0, r0, 31
    bne lbl_fn_80213E60_000002C8
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_fn_80213E60_000002C8
    lwz r0, 0xc(r3)
    li r4, 0x0
    lwz r5, 0x4(r31)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80213E60_000002B8
lbl_fn_80213E60_00000250:
    lwz r0, 0x14(r3)
    add r6, r0, r4
    lwzx r0, r4, r0
    cmpwi r0, 0x0
    bne lbl_fn_80213E60_000002B0
    lwz r0, 0x4(r6)
    cmpwi r0, 0x0
    bne lbl_fn_80213E60_000002B0
    lwz r4, 0xc(r6)
    cmpwi r4, 0x0
    ble lbl_fn_80213E60_0000029C
    lwz r0, 0x8(r6)
    li r3, 0x0
    cmpw r0, r5
    bgt lbl_fn_80213E60_000002BC
    cmpw r5, r4
    bgt lbl_fn_80213E60_000002BC
    li r3, 0x1
    b lbl_fn_80213E60_000002BC
lbl_fn_80213E60_0000029C:
    lwz r0, 0x8(r6)
    subf r0, r0, r5
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_80213E60_000002BC
lbl_fn_80213E60_000002B0:
    addi r4, r4, 0x10
    bdnz lbl_fn_80213E60_00000250
lbl_fn_80213E60_000002B8:
    li r3, 0x0
lbl_fn_80213E60_000002BC:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_80213E60_000002C8:
    mr r3, r0
lbl_fn_80213E60_000002CC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8021414C(void)
{
    nofralloc
    stwu r1, -0x670(r1)
    mflr r0
    lis r3, lbl_807772D0@ha
    li r4, 0x0
    stw r0, 0x674(r1)
    li r0, 0x0
    addi r3, r3, lbl_807772D0@l
    li r5, 0x400
    stmw r23, 0x64c(r1)
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
    lwz r0, lbl_8087F240
    cmpwi r0, 0x0
    bne lbl_fn_8021414C_00000520
    lwz r3, lbl_8087F518
    addi r5, r1, 0x8
    lwz r4, lbl_80882EF8
    li r6, 0x20
    bl fn_8046DC5C
    lwz r12, 0xc(r1)
    mr r26, r3
    mr r4, r26
    addi r3, r1, 0xc
    lwz r12, 0x8(r12)
    lwz r5, 0x8(r1)
    mtctr r12
    bctrl
    b lbl_fn_8021414C_000003B8
lbl_fn_8021414C_00000398:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_8021414C_000003B8
    lwz r3, lbl_8087F244
    addi r0, r3, 0x1
    stw r0, lbl_8087F244
lbl_fn_8021414C_000003B8:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8021414C_00000398
    lwz r0, lbl_8087F244
    lis r5, lbl_8073FACC@ha
    addi r5, r5, lbl_8073FACC@l
    li r4, 0xc
    mulli r3, r0, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_800846FC
    stw r3, lbl_8087F240
    mr r4, r26
    lwz r12, 0xc(r1)
    addi r3, r1, 0xc
    lwz r5, 0x8(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_8021414C_00000504
lbl_fn_8021414C_00000414:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_8021414C_00000504
    lwz r0, lbl_8087F240
    addi r3, r1, 0xc
    add r25, r0, r30
    bl fn_8005B3CC
    mr r29, r25
    mr r28, r25
    li r24, 0x0
lbl_fn_8021414C_00000444:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    mr r27, r3
    bl strlen
    cmplwi r3, 0x2
    ble lbl_fn_8021414C_0000046C
    addi r3, r27, 0x2
    bl fn_80684600
    stw r3, 0x0(r29)
    b lbl_fn_8021414C_00000470
lbl_fn_8021414C_0000046C:
    stw r31, 0x0(r29)
lbl_fn_8021414C_00000470:
    mr r27, r28
    li r23, 0x0
lbl_fn_8021414C_00000478:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    addi r23, r23, 0x1
    stw r3, 0x8(r27)
    cmpwi r23, 0x3
    addi r27, r27, 0x4
    blt lbl_fn_8021414C_00000478
    addi r3, r1, 0xc
    bl fn_8005B3CC
    addi r3, r1, 0xc
    bl fn_8005B3CC
    addi r3, r1, 0xc
    bl fn_8005B3CC
    addi r3, r1, 0xc
    bl fn_8005B3CC
    addi r3, r1, 0xc
    bl fn_8005B3CC
    addi r24, r24, 0x1
    addi r28, r28, 0xc
    cmpwi r24, 0x2
    addi r29, r29, 0x4
    blt lbl_fn_8021414C_00000444
    addi r3, r1, 0xc
    bl fn_8005B3CC
    mr r27, r3
    bl strlen
    cmplwi r3, 0x2
    ble lbl_fn_8021414C_000004FC
    addi r3, r27, 0x2
    bl fn_80684600
    stw r3, 0x20(r25)
    b lbl_fn_8021414C_00000500
lbl_fn_8021414C_000004FC:
    stw r31, 0x20(r25)
lbl_fn_8021414C_00000500:
    addi r30, r30, 0x24
lbl_fn_8021414C_00000504:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8021414C_00000414
    lwz r3, lbl_8087F518
    mr r4, r26
    bl fn_8046DD20
lbl_fn_8021414C_00000520:
    lmw r23, 0x64c(r1)
    lwz r0, 0x674(r1)
    mtlr r0
    addi r1, r1, 0x670
    blr
}

asm void fn_80214394(void)
{
    nofralloc
    cmpwi r4, 0x0
    blt lbl_fn_80214394_00000544
    cmpwi r4, 0x2
    blt lbl_fn_80214394_0000054C
lbl_fn_80214394_00000544:
    li r3, 0x0
    blr
lbl_fn_80214394_0000054C:
    neg r0, r3
    lwz r6, lbl_8087F244
    andc r0, r0, r3
    lwz r5, lbl_8087F240
    srawi r7, r0, 31
    subi r8, r6, 0x1
    and r6, r3, r7
    cmpw r6, r8
    bge lbl_fn_80214394_00000578
    srawi r0, r0, 31
    and r8, r3, r0
lbl_fn_80214394_00000578:
    mulli r0, r8, 0x24
    slwi r3, r4, 2
    add r0, r5, r0
    lwzx r3, r3, r0
    blr
}

asm void fn_802143EC(void)
{
    nofralloc
    cmpwi r4, 0x0
    blt lbl_fn_802143EC_0000059C
    cmpwi r4, 0x2
    blt lbl_fn_802143EC_000005A4
lbl_fn_802143EC_0000059C:
    li r3, 0x0
    blr
lbl_fn_802143EC_000005A4:
    neg r0, r3
    lwz r7, lbl_8087F244
    andc r0, r0, r3
    lwz r6, lbl_8087F240
    srawi r8, r0, 31
    subi r9, r7, 0x1
    and r7, r3, r8
    cmpw r7, r9
    bge lbl_fn_802143EC_000005D0
    srawi r0, r0, 31
    and r9, r3, r0
lbl_fn_802143EC_000005D0:
    lis r3, 0x5555
    addi r0, r3, 0x5556
    mulhw r3, r0, r5
    srwi r0, r3, 31
    add r0, r3, r0
    mulli r3, r9, 0x24
    mulli r0, r0, 0x3
    add r6, r6, r3
    mulli r3, r4, 0xc
    subf r0, r0, r5
    add r3, r6, r3
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r3, 0x8(r3)
    blr
}

asm void fn_8021446C(void)
{
    nofralloc
    neg r0, r3
    lwz r5, lbl_8087F244
    andc r0, r0, r3
    lwz r4, lbl_8087F240
    srawi r6, r0, 31
    subi r7, r5, 0x1
    and r5, r3, r6
    cmpw r5, r7
    bge lbl_fn_8021446C_00000638
    srawi r0, r0, 31
    and r7, r3, r0
lbl_fn_8021446C_00000638:
    mulli r0, r7, 0x24
    add r3, r4, r0
    lwz r3, 0x20(r3)
    blr
}

asm void fn_802144A8(void)
{
    nofralloc
    stwu r1, -0x670(r1)
    mflr r0
    stw r0, 0x674(r1)
    stmw r23, 0x64c(r1)
    lwz r3, lbl_8087EE90
    cmpwi r3, 0x0
    beq lbl_fn_802144A8_00000D80
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802144A8_00000674
    b lbl_fn_802144A8_00000D80
lbl_fn_802144A8_00000674:
    lis r3, lbl_807772D0@ha
    li r0, 0x0
    addi r3, r3, lbl_807772D0@l
    stw r3, 0xc(r1)
    addi r3, r1, 0x1c
    li r4, 0x0
    stw r0, 0x10(r1)
    li r5, 0x400
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
    lwz r3, lbl_8087F518
    addi r5, r1, 0x8
    lwz r4, lbl_80882F00
    li r6, 0x20
    bl fn_8046DC5C
    lwz r12, 0xc(r1)
    mr r31, r3
    mr r4, r31
    addi r3, r1, 0xc
    lwz r12, 0x8(r12)
    li r23, 0x0
    lwz r5, 0x8(r1)
    mtctr r12
    bctrl
    b lbl_fn_802144A8_00000720
lbl_fn_802144A8_00000708:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_802144A8_00000720
    addi r23, r23, 0x1
lbl_fn_802144A8_00000720:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802144A8_00000708
    mulli r3, r23, 0x18
    lis r5, lbl_8073FB0C@ha
    li r4, 0x1
    addi r5, r5, lbl_8073FB0C@l
    mr r6, r5
    li r7, 0x0
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_80214BF4@ha
    lis r5, fn_80214E24@ha
    mr r7, r23
    li r6, 0x18
    addi r4, r4, fn_80214BF4@l
    addi r5, r5, fn_80214E24@l
    bl fn_80695720
    stw r3, lbl_8087F248
    mr r4, r31
    lwz r12, 0xc(r1)
    addi r3, r1, 0xc
    stw r23, lbl_8087F24C
    lwz r5, 0x8(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    li r23, 0x0
    lis r28, fn_80214E04@ha
    li r29, 0x8
    b lbl_fn_802144A8_00000BD8
lbl_fn_802144A8_000007A0:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_802144A8_00000BD8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lwz r0, lbl_8087F248
    add r30, r0, r23
    mr r4, r30
    addi r5, r30, 0x4
    addi r6, r30, 0x8
    bl fn_80216AFC
lbl_fn_802144A8_000007D4:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_802144A8_00000BD4
    bl fn_80684600
    lwz r24, lbl_8087EE90
    mr r26, r3
    addi r3, r1, 0xc
    bl fn_8005B3CC
    mr r4, r3
    mr r3, r24
    bl fn_80049B74
    lwz r0, 0x14(r30)
    mr r27, r3
    cmpwi r0, 0x0
    beq lbl_fn_802144A8_00000824
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    bne lbl_fn_802144A8_000009E4
lbl_fn_802144A8_00000824:
    lwz r0, 0x10(r30)
    cmplwi r0, 0x8
    bgt lbl_fn_802144A8_00000BB0
    li r3, 0x50
    li r4, 0x0
    la r5, lbl_8087DB74
    la r6, lbl_8087DB70
    li r7, 0x0
    bl fn_800846FC
    addi r4, r28, fn_80214E04@l
    li r5, 0x0
    li r6, 0x8
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x14(r30)
    mr r25, r3
    cmpwi r0, 0x0
    beq lbl_fn_802144A8_000009D8
    lwz r0, 0xc(r30)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_802144A8_00000880
    mr r4, r0
lbl_fn_802144A8_00000880:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_802144A8_000009C4
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_802144A8_00000984
    addi r0, r8, 0x7
    mr r7, r25
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_802144A8_00000984
lbl_fn_802144A8_000008B4:
    lwz r0, 0x14(r30)
    addi r5, r5, 0x8
    add r8, r0, r6
    lwzx r0, r6, r0
    stw r0, 0x0(r7)
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x20(r8)
    stw r0, 0x20(r7)
    lwz r0, 0x24(r8)
    stw r0, 0x24(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x28(r8)
    stw r0, 0x28(r7)
    lwz r0, 0x2c(r8)
    stw r0, 0x2c(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x30(r8)
    stw r0, 0x30(r7)
    lwz r0, 0x34(r8)
    stw r0, 0x34(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    addi r6, r6, 0x40
    lwz r0, 0x38(r8)
    stw r0, 0x38(r7)
    lwz r0, 0x3c(r8)
    stw r0, 0x3c(r7)
    addi r7, r7, 0x40
    bdnz lbl_fn_802144A8_000008B4
lbl_fn_802144A8_00000984:
    slwi r6, r5, 3
    subf r0, r5, r4
    add r3, r3, r6
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_802144A8_000009C4
lbl_fn_802144A8_0000099C:
    lwz r0, 0x14(r30)
    addi r5, r5, 0x1
    add r4, r0, r6
    lwzx r0, r6, r0
    stw r0, 0x0(r3)
    addi r6, r6, 0x8
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    addi r3, r3, 0x8
    bdnz lbl_fn_802144A8_0000099C
lbl_fn_802144A8_000009C4:
    lwz r3, 0x14(r30)
    cmpwi r3, 0x0
    beq lbl_fn_802144A8_000009D8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802144A8_000009D8:
    stw r25, 0x14(r30)
    stw r29, 0x10(r30)
    b lbl_fn_802144A8_00000BB0
lbl_fn_802144A8_000009E4:
    lwz r3, 0xc(r30)
    cmplw r3, r0
    blt lbl_fn_802144A8_00000BB0
    slwi r25, r3, 1
    cmplw r0, r25
    bgt lbl_fn_802144A8_00000BB0
    slwi r3, r25, 3
    li r4, 0x0
    addi r3, r3, 0x10
    la r5, lbl_8087DB74
    la r6, lbl_8087DB70
    li r7, 0x0
    bl fn_800846FC
    mr r7, r25
    addi r4, r28, fn_80214E04@l
    li r5, 0x0
    li r6, 0x8
    bl fn_80695720
    lwz r0, 0x14(r30)
    mr r24, r3
    cmpwi r0, 0x0
    beq lbl_fn_802144A8_00000BA8
    lwz r0, 0xc(r30)
    mr r4, r25
    cmplw r25, r0
    ble lbl_fn_802144A8_00000A50
    mr r4, r0
lbl_fn_802144A8_00000A50:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_802144A8_00000B94
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_802144A8_00000B54
    addi r0, r8, 0x7
    mr r7, r24
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_802144A8_00000B54
lbl_fn_802144A8_00000A84:
    lwz r0, 0x14(r30)
    addi r5, r5, 0x8
    add r8, r0, r6
    lwzx r0, r6, r0
    stw r0, 0x0(r7)
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x20(r8)
    stw r0, 0x20(r7)
    lwz r0, 0x24(r8)
    stw r0, 0x24(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x28(r8)
    stw r0, 0x28(r7)
    lwz r0, 0x2c(r8)
    stw r0, 0x2c(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x30(r8)
    stw r0, 0x30(r7)
    lwz r0, 0x34(r8)
    stw r0, 0x34(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    addi r6, r6, 0x40
    lwz r0, 0x38(r8)
    stw r0, 0x38(r7)
    lwz r0, 0x3c(r8)
    stw r0, 0x3c(r7)
    addi r7, r7, 0x40
    bdnz lbl_fn_802144A8_00000A84
lbl_fn_802144A8_00000B54:
    slwi r6, r5, 3
    subf r0, r5, r4
    add r3, r3, r6
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_802144A8_00000B94
lbl_fn_802144A8_00000B6C:
    lwz r0, 0x14(r30)
    addi r5, r5, 0x1
    add r4, r0, r6
    lwzx r0, r6, r0
    stw r0, 0x0(r3)
    addi r6, r6, 0x8
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    addi r3, r3, 0x8
    bdnz lbl_fn_802144A8_00000B6C
lbl_fn_802144A8_00000B94:
    lwz r3, 0x14(r30)
    cmpwi r3, 0x0
    beq lbl_fn_802144A8_00000BA8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802144A8_00000BA8:
    stw r24, 0x14(r30)
    stw r25, 0x10(r30)
lbl_fn_802144A8_00000BB0:
    lwz r0, 0xc(r30)
    lwz r3, 0x14(r30)
    slwi r0, r0, 3
    stwux r26, r3, r0
    stw r27, 0x4(r3)
    lwz r3, 0xc(r30)
    addi r0, r3, 0x1
    stw r0, 0xc(r30)
    b lbl_fn_802144A8_000007D4
lbl_fn_802144A8_00000BD4:
    addi r23, r23, 0x18
lbl_fn_802144A8_00000BD8:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802144A8_000007A0
    lwz r3, lbl_8087F518
    mr r4, r31
    bl fn_8046DD20
    lwz r3, lbl_8087F518
    addi r5, r1, 0x8
    lwz r4, lbl_80882F04
    li r6, 0x20
    bl fn_8046DC5C
    lwz r12, 0xc(r1)
    mr r25, r3
    mr r4, r25
    addi r3, r1, 0xc
    lwz r12, 0x8(r12)
    li r24, 0x0
    lwz r5, 0x8(r1)
    mtctr r12
    bctrl
    b lbl_fn_802144A8_00000C68
lbl_fn_802144A8_00000C30:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_802144A8_00000C68
    lwz r23, lbl_8087EE90
    addi r3, r1, 0xc
    bl fn_8005B3CC
    mr r4, r3
    mr r3, r23
    bl fn_80049B74
    cmpwi r3, 0x0
    beq lbl_fn_802144A8_00000C68
    addi r24, r24, 0x1
lbl_fn_802144A8_00000C68:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802144A8_00000C30
    mulli r3, r24, 0x14
    lis r5, lbl_8073FB0C@ha
    li r4, 0x1
    addi r5, r5, lbl_8073FB0C@l
    mr r6, r5
    li r7, 0x0
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_80214E14@ha
    lis r5, fn_80214E94@ha
    mr r7, r24
    li r6, 0x14
    addi r4, r4, fn_80214E14@l
    addi r5, r5, fn_80214E94@l
    bl fn_80695720
    stw r3, lbl_8087F250
    mr r4, r25
    lwz r12, 0xc(r1)
    addi r3, r1, 0xc
    stw r24, lbl_8087F254
    lwz r5, 0x8(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    li r24, 0x0
    b lbl_fn_802144A8_00000D64
lbl_fn_802144A8_00000CE0:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_802144A8_00000D64
    lwz r23, lbl_8087EE90
    addi r3, r1, 0xc
    bl fn_8005B3CC
    mr r4, r3
    mr r3, r23
    bl fn_80049B74
    cmpwi r3, 0x0
    beq lbl_fn_802144A8_00000D64
    lwz r0, lbl_8087F250
    stwx r3, r24, r0
    add r26, r0, r24
    addi r3, r1, 0xc
    bl fn_8005B3CC
    mr r23, r3
    bl strlen
    cmplwi r3, 0x9
    ble lbl_fn_802144A8_00000D60
    addi r3, r23, 0x9
    addi r0, r26, 0x4
    cmplw r3, r0
    beq lbl_fn_802144A8_00000D60
    bl strlen
    mr r5, r3
    addi r3, r26, 0x4
    addi r4, r23, 0x9
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_802144A8_00000D60:
    addi r24, r24, 0x14
lbl_fn_802144A8_00000D64:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802144A8_00000CE0
    lwz r3, lbl_8087F518
    mr r4, r25
    bl fn_8046DD20
lbl_fn_802144A8_00000D80:
    lmw r23, 0x64c(r1)
    lwz r0, 0x674(r1)
    mtlr r0
    addi r1, r1, 0x670
    blr
}

asm void fn_80214BF4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, -0x1
    la r5, lbl_8087DB7C
    stw r0, 0x14(r1)
    li r0, 0x0
    la r6, lbl_8087DB78
    li r7, 0x0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    stw r4, 0x0(r3)
    li r4, 0x0
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    li r3, 0x20
    bl fn_800846FC
    lis r4, fn_80214E04@ha
    li r5, 0x0
    addi r4, r4, fn_80214E04@l
    li r6, 0x8
    li r7, 0x2
    bl fn_80695720
    lwz r0, 0x14(r30)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_80214BF4_00000F74
    lwz r0, 0xc(r30)
    li r4, 0x2
    cmplwi r0, 0x2
    bge lbl_fn_80214BF4_00000E20
    mr r4, r0
lbl_fn_80214BF4_00000E20:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_80214BF4_00000F60
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_80214BF4_00000F24
    addi r0, r8, 0x7
    mr r7, r31
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_80214BF4_00000F24
lbl_fn_80214BF4_00000E54:
    lwz r0, 0x14(r30)
    addi r5, r5, 0x8
    add r8, r0, r6
    lwzx r0, r6, r0
    stw r0, 0x0(r7)
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x20(r8)
    stw r0, 0x20(r7)
    lwz r0, 0x24(r8)
    stw r0, 0x24(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x28(r8)
    stw r0, 0x28(r7)
    lwz r0, 0x2c(r8)
    stw r0, 0x2c(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x30(r8)
    stw r0, 0x30(r7)
    lwz r0, 0x34(r8)
    stw r0, 0x34(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    addi r6, r6, 0x40
    lwz r0, 0x38(r8)
    stw r0, 0x38(r7)
    lwz r0, 0x3c(r8)
    stw r0, 0x3c(r7)
    addi r7, r7, 0x40
    bdnz lbl_fn_80214BF4_00000E54
lbl_fn_80214BF4_00000F24:
    slwi r6, r5, 3
    subf r0, r5, r4
    add r3, r3, r6
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80214BF4_00000F60
lbl_fn_80214BF4_00000F3C:
    lwz r0, 0x14(r30)
    add r4, r0, r6
    lwzx r0, r6, r0
    stw r0, 0x0(r3)
    addi r6, r6, 0x8
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    addi r3, r3, 0x8
    bdnz lbl_fn_80214BF4_00000F3C
lbl_fn_80214BF4_00000F60:
    lwz r3, 0x14(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80214BF4_00000F74
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80214BF4_00000F74:
    li r4, 0x2
    li r0, 0x0
    stw r31, 0x14(r30)
    mr r3, r30
    stw r4, 0x10(r30)
    stw r0, 0xc(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80214E04(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    blr
}

asm void fn_80214E14(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stb r0, 0x4(r3)
    blr
}

asm void fn_80214E24(void)
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
    beq lbl_fn_80214E24_00001018
    addic. r0, r3, 0xc
    beq lbl_fn_80214E24_00001008
    lwz r3, 0x14(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80214E24_00001008
    beq lbl_fn_80214E24_00001008
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80214E24_00001008:
    cmpwi r31, 0x0
    ble lbl_fn_80214E24_00001018
    mr r3, r30
    bl dtor_80084684
lbl_fn_80214E24_00001018:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80214E94(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80214E94_0000105C
    cmpwi r4, 0x0
    ble lbl_fn_80214E94_0000105C
    bl dtor_80084684
lbl_fn_80214E94_0000105C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80214ED4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80214F80
    cmpwi r3, 0x0
    bne lbl_fn_80214ED4_00001094
    li r4, 0x0
    b lbl_fn_80214ED4_000010C4
lbl_fn_80214ED4_00001094:
    lwz r0, lbl_8087F254
    lwz r4, lbl_8087F250
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80214ED4_000010C0
lbl_fn_80214ED4_000010A8:
    lwz r0, 0x0(r4)
    cmplw r0, r3
    bne lbl_fn_80214ED4_000010B8
    b lbl_fn_80214ED4_000010C4
lbl_fn_80214ED4_000010B8:
    addi r4, r4, 0x14
    bdnz lbl_fn_80214ED4_000010A8
lbl_fn_80214ED4_000010C0:
    li r4, 0x0
lbl_fn_80214ED4_000010C4:
    lwz r0, 0x14(r1)
    mr r3, r4
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80214F38(void)
{
    nofralloc
    cmpwi r3, 0x0
    bne lbl_fn_80214F38_000010E8
    li r3, 0x0
    blr
lbl_fn_80214F38_000010E8:
    lwz r0, lbl_8087F254
    lwz r4, lbl_8087F250
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80214F38_00001118
lbl_fn_80214F38_000010FC:
    lwz r0, 0x0(r4)
    cmplw r0, r3
    bne lbl_fn_80214F38_00001110
    mr r3, r4
    blr
lbl_fn_80214F38_00001110:
    addi r4, r4, 0x14
    bdnz lbl_fn_80214F38_000010FC
lbl_fn_80214F38_00001118:
    li r3, 0x0
    blr
}

asm void fn_80214F80(void)
{
    nofralloc
    lwz r9, lbl_8087F248
    li r12, 0x0
    lwz r10, lbl_8087F24C
    b lbl_fn_80214F80_000011A8
lbl_fn_80214F80_00001130:
    lwz r0, 0x0(r9)
    cmpw r0, r3
    bne lbl_fn_80214F80_000011A0
    lwz r0, 0x4(r9)
    cmpw r0, r4
    bne lbl_fn_80214F80_000011A0
    lwz r0, 0x8(r9)
    cmpw r0, r5
    bne lbl_fn_80214F80_000011A0
    lwz r11, 0xc(r9)
    li r7, 0x0
    mtctr r11
    cmplwi r11, 0x0
    ble lbl_fn_80214F80_0000118C
lbl_fn_80214F80_00001168:
    lwz r0, 0x14(r9)
    add r8, r0, r7
    lwzx r0, r7, r0
    cmpw r0, r6
    bne lbl_fn_80214F80_00001184
    lwz r3, 0x4(r8)
    blr
lbl_fn_80214F80_00001184:
    addi r7, r7, 0x8
    bdnz lbl_fn_80214F80_00001168
lbl_fn_80214F80_0000118C:
    cmpwi r11, 0x0
    beq lbl_fn_80214F80_000011A0
    lwz r3, 0x14(r9)
    lwz r3, 0x4(r3)
    blr
lbl_fn_80214F80_000011A0:
    addi r9, r9, 0x18
    addi r12, r12, 0x1
lbl_fn_80214F80_000011A8:
    cmpw r12, r10
    blt lbl_fn_80214F80_00001130
    li r3, 0x0
    blr
}

asm void fn_80215018(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0x4
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_80215018_00001208
    lis r4, lbl_8073FB0C@ha
    mr r3, r31
    addi r4, r4, lbl_8073FB0C@l
    addi r5, r30, 0x4
    addi r4, r4, 0x1
    crclr 6
    bl sprintf
    li r3, 0x1
    b lbl_fn_80215018_0000120C
lbl_fn_80215018_00001208:
    li r3, 0x0
lbl_fn_80215018_0000120C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80215084(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0x4
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_80215084_00001274
    lis r4, lbl_8073FB0C@ha
    mr r3, r31
    addi r4, r4, lbl_8073FB0C@l
    addi r5, r30, 0x4
    addi r4, r4, 0xe
    crclr 6
    bl sprintf
    li r3, 0x1
    b lbl_fn_80215084_00001278
lbl_fn_80215084_00001274:
    li r3, 0x0
lbl_fn_80215084_00001278:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802150F0(void)
{
    nofralloc
    stwu r1, -0x12e0(r1)
    mflr r0
    lis r3, lbl_807772D0@ha
    li r4, 0x0
    stw r0, 0x12e4(r1)
    li r0, 0x0
    addi r3, r3, lbl_807772D0@l
    li r5, 0x400
    stmw r18, 0x12a8(r1)
    lis r31, lbl_807C7FB0@ha
    addi r31, r31, lbl_807C7FB0@l
    stw r3, 0xc70(r1)
    addi r3, r1, 0xc80
    stw r0, 0xc74(r1)
    stw r0, 0xc78(r1)
    stw r0, 0xc7c(r1)
    stw r0, 0x12a0(r1)
    bl memset
    addi r3, r1, 0x1280
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0xc70
    addi r4, r4, lbl_807772B0@l
    stw r4, 0xc70(r1)
    la r4, lbl_8087D720
    bl fn_8005B6E8
    lwz r0, lbl_8087F258
    cmpwi r0, 0x0
    bne lbl_fn_802150F0_00001D8C
    lwz r3, lbl_8087F518
    addi r5, r1, 0x18
    lwz r4, lbl_80882F08
    li r6, 0x20
    bl fn_8046DC5C
    lwz r12, 0xc70(r1)
    mr r25, r3
    mr r4, r25
    addi r3, r1, 0xc70
    lwz r12, 0x8(r12)
    lwz r5, 0x18(r1)
    mtctr r12
    bctrl
    li r18, 0x0
lbl_fn_802150F0_00001344:
    addi r3, r1, 0xc70
    bl fn_8005B5F8
    addi r18, r18, 0x1
    cmpwi r18, 0x3
    blt lbl_fn_802150F0_00001344
    addi r3, r1, 0xc70
    bl fn_8005B3CC
    addi r3, r1, 0xc70
    bl fn_8005B3CC
    addi r21, r31, 0xc
    li r20, 0x8
lbl_fn_802150F0_00001370:
    addi r3, r1, 0xc70
    bl fn_8005B3CC
    mr r18, r3
    bl fn_80684600
    lwz r0, 0x8(r21)
    mr r22, r3
    cmpwi r0, 0x0
    beq lbl_fn_802150F0_0000139C
    lwz r0, 0x4(r21)
    cmpwi r0, 0x0
    bne lbl_fn_802150F0_000014EC
lbl_fn_802150F0_0000139C:
    lwz r0, 0x4(r21)
    cmplwi r0, 0x8
    bgt lbl_fn_802150F0_00001644
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087D9EC
    la r6, lbl_8087D9E8
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r21)
    mr r23, r3
    cmpwi r0, 0x0
    beq lbl_fn_802150F0_000014E0
    lwz r0, 0xc(r31)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_802150F0_000013E4
    mr r4, r0
lbl_fn_802150F0_000013E4:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_802150F0_000014D8
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_802150F0_000014A4
    addi r0, r8, 0x7
    mr r7, r23
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_802150F0_000014A4
lbl_fn_802150F0_00001418:
    lwz r8, 0x8(r21)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_802150F0_00001418
lbl_fn_802150F0_000014A4:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_802150F0_000014D8
lbl_fn_802150F0_000014BC:
    lwz r3, 0x8(r21)
    addi r5, r5, 0x1
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_802150F0_000014BC
lbl_fn_802150F0_000014D8:
    lwz r3, 0x8(r21)
    bl fn_80084C24
lbl_fn_802150F0_000014E0:
    stw r23, 0x8(r21)
    stw r20, 0x4(r21)
    b lbl_fn_802150F0_00001644
lbl_fn_802150F0_000014EC:
    lwz r3, 0xc(r31)
    cmplw r3, r0
    blt lbl_fn_802150F0_00001644
    slwi r24, r3, 1
    cmplw r0, r24
    bgt lbl_fn_802150F0_00001644
    slwi r3, r24, 2
    li r4, 0x0
    la r5, lbl_8087D9EC
    la r6, lbl_8087D9E8
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r21)
    mr r23, r3
    cmpwi r0, 0x0
    beq lbl_fn_802150F0_0000163C
    lwz r0, 0xc(r31)
    mr r4, r24
    cmplw r24, r0
    ble lbl_fn_802150F0_00001540
    mr r4, r0
lbl_fn_802150F0_00001540:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_802150F0_00001634
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_802150F0_00001600
    addi r0, r8, 0x7
    mr r7, r23
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_802150F0_00001600
lbl_fn_802150F0_00001574:
    lwz r8, 0x8(r21)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_802150F0_00001574
lbl_fn_802150F0_00001600:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_802150F0_00001634
lbl_fn_802150F0_00001618:
    lwz r3, 0x8(r21)
    addi r5, r5, 0x1
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_802150F0_00001618
lbl_fn_802150F0_00001634:
    lwz r3, 0x8(r21)
    bl fn_80084C24
lbl_fn_802150F0_0000163C:
    stw r23, 0x8(r21)
    stw r24, 0x4(r21)
lbl_fn_802150F0_00001644:
    lwz r0, 0xc(r31)
    lwz r3, 0x8(r21)
    slwi r0, r0, 2
    stwx r22, r3, r0
    lwz r3, 0xc(r31)
    addi r0, r3, 0x1
    stw r0, 0xc(r31)
    lbz r0, 0x0(r18)
    extsb. r0, r0
    bne lbl_fn_802150F0_00001370
    b lbl_fn_802150F0_000016A4
lbl_fn_802150F0_00001670:
    addi r3, r1, 0xc70
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_802150F0_000016A4
    cmpwi r0, 0x23
    beq lbl_fn_802150F0_000016A4
    cmpwi r0, 0x0
    beq lbl_fn_802150F0_000016A4
    lwz r3, lbl_8087F25C
    addi r0, r3, 0x1
    stw r0, lbl_8087F25C
lbl_fn_802150F0_000016A4:
    addi r3, r1, 0xc70
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802150F0_00001670
    lwz r18, lbl_8087F25C
    lis r5, lbl_8073FB74@ha
    addi r5, r5, lbl_8073FB74@l
    li r4, 0x1
    mulli r3, r18, 0x78
    li r7, 0x0
    mr r6, r5
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_80216440@ha
    mr r7, r18
    addi r4, r4, fn_80216440@l
    li r5, 0x0
    li r6, 0x78
    bl fn_80695720
    stw r3, lbl_8087F258
    mr r4, r25
    lwz r12, 0xc70(r1)
    addi r3, r1, 0xc70
    lwz r5, 0x18(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0xc70
    bl fn_8005B5F8
    addi r3, r1, 0xc70
    bl fn_8005B5F8
    addi r3, r1, 0xc70
    bl fn_8005B5F8
    addi r21, r31, 0x24
    li r26, 0x0
    lis r20, fn_80216488@ha
    li r22, 0x8
    b lbl_fn_802150F0_00001D70
lbl_fn_802150F0_0000173C:
    addi r3, r1, 0xc70
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_802150F0_00001D70
    cmpwi r0, 0x23
    beq lbl_fn_802150F0_00001D70
    cmpwi r0, 0x0
    beq lbl_fn_802150F0_00001D70
    lwz r0, lbl_8087F258
    addi r3, r1, 0xc80
    add r24, r0, r26
    bl fn_80684600
    stw r3, 0x0(r24)
    addi r3, r1, 0xc70
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x4(r24)
lbl_fn_802150F0_00001788:
    addi r3, r1, 0xc70
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r18, r3
    extsb. r0, r0
    beq lbl_fn_802150F0_00001D6C
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    li r27, 0x0
    bl fn_80216AFC
    cmpwi r3, 0x0
    beq lbl_fn_802150F0_00001D64
    lwz r6, 0x14(r1)
    mr r3, r18
    lwz r5, 0x10(r1)
    li r4, 0x3a
    lwz r0, 0xc(r1)
    clrlwi r30, r6, 24
    clrlwi r29, r5, 24
    clrlwi r28, r0, 24
    bl strchr
    cmpwi r3, 0x0
    beq lbl_fn_802150F0_000017F4
    addi r3, r3, 0x1
    bl fn_80684600
    mr r27, r3
lbl_fn_802150F0_000017F4:
    lwz r6, 0x24(r31)
    li r23, -0x1
    lwz r7, 0x8(r21)
    li r8, 0x0
    li r3, 0x0
    mtctr r6
    cmplwi r6, 0x0
    ble lbl_fn_802150F0_0000186C
lbl_fn_802150F0_00001814:
    lbzx r0, r7, r3
    add r5, r7, r3
    li r4, 0x0
    cmplw r0, r30
    bne lbl_fn_802150F0_00001850
    lbz r0, 0x1(r5)
    cmplw r0, r29
    bne lbl_fn_802150F0_00001850
    lbz r0, 0x2(r5)
    cmplw r0, r28
    bne lbl_fn_802150F0_00001850
    lwz r0, 0x4(r5)
    cmpw r0, r27
    bne lbl_fn_802150F0_00001850
    li r4, 0x1
lbl_fn_802150F0_00001850:
    cmpwi r4, 0x0
    beq lbl_fn_802150F0_00001860
    mr r23, r8
    b lbl_fn_802150F0_0000186C
lbl_fn_802150F0_00001860:
    addi r8, r8, 0x1
    addi r3, r3, 0x8
    bdnz lbl_fn_802150F0_00001814
lbl_fn_802150F0_0000186C:
    cmpwi r23, 0x0
    bge lbl_fn_802150F0_00001D60
    cmpwi r7, 0x0
    mr r23, r6
    beq lbl_fn_802150F0_0000188C
    lwz r0, 0x4(r21)
    cmpwi r0, 0x0
    bne lbl_fn_802150F0_00001ADC
lbl_fn_802150F0_0000188C:
    lwz r0, 0x4(r21)
    cmplwi r0, 0x8
    bgt lbl_fn_802150F0_00001D38
    li r3, 0x50
    li r4, 0x0
    la r5, lbl_8087DB8C
    la r6, lbl_8087DB88
    li r7, 0x0
    bl fn_800846FC
    addi r4, r20, fn_80216488@l
    li r5, 0x0
    li r6, 0x8
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x8(r21)
    mr r19, r3
    cmpwi r0, 0x0
    beq lbl_fn_802150F0_00001AD0
    lwz r0, 0x24(r31)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_802150F0_000018E8
    mr r4, r0
lbl_fn_802150F0_000018E8:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_802150F0_00001ABC
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_802150F0_00001A6C
    addi r0, r8, 0x7
    mr r7, r19
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_802150F0_00001A6C
lbl_fn_802150F0_0000191C:
    lwz r0, 0x8(r21)
    addi r5, r5, 0x8
    add r8, r0, r6
    lbzx r0, r6, r0
    stb r0, 0x0(r7)
    lbz r0, 0x1(r8)
    stb r0, 0x1(r7)
    lbz r0, 0x2(r8)
    stb r0, 0x2(r7)
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    lbz r0, 0x8(r8)
    stb r0, 0x8(r7)
    lbz r0, 0x9(r8)
    stb r0, 0x9(r7)
    lbz r0, 0xa(r8)
    stb r0, 0xa(r7)
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    lbz r0, 0x10(r8)
    stb r0, 0x10(r7)
    lbz r0, 0x11(r8)
    stb r0, 0x11(r7)
    lbz r0, 0x12(r8)
    stb r0, 0x12(r7)
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    lbz r0, 0x18(r8)
    stb r0, 0x18(r7)
    lbz r0, 0x19(r8)
    stb r0, 0x19(r7)
    lbz r0, 0x1a(r8)
    stb r0, 0x1a(r7)
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    lbz r0, 0x20(r8)
    stb r0, 0x20(r7)
    lbz r0, 0x21(r8)
    stb r0, 0x21(r7)
    lbz r0, 0x22(r8)
    stb r0, 0x22(r7)
    lwz r0, 0x24(r8)
    stw r0, 0x24(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    lbz r0, 0x28(r8)
    stb r0, 0x28(r7)
    lbz r0, 0x29(r8)
    stb r0, 0x29(r7)
    lbz r0, 0x2a(r8)
    stb r0, 0x2a(r7)
    lwz r0, 0x2c(r8)
    stw r0, 0x2c(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    lbz r0, 0x30(r8)
    stb r0, 0x30(r7)
    lbz r0, 0x31(r8)
    stb r0, 0x31(r7)
    lbz r0, 0x32(r8)
    stb r0, 0x32(r7)
    lwz r0, 0x34(r8)
    stw r0, 0x34(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    addi r6, r6, 0x40
    lbz r0, 0x38(r8)
    stb r0, 0x38(r7)
    lbz r0, 0x39(r8)
    stb r0, 0x39(r7)
    lbz r0, 0x3a(r8)
    stb r0, 0x3a(r7)
    lwz r0, 0x3c(r8)
    stw r0, 0x3c(r7)
    addi r7, r7, 0x40
    bdnz lbl_fn_802150F0_0000191C
lbl_fn_802150F0_00001A6C:
    slwi r6, r5, 3
    subf r0, r5, r4
    add r3, r3, r6
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_802150F0_00001ABC
lbl_fn_802150F0_00001A84:
    lwz r0, 0x8(r21)
    addi r5, r5, 0x1
    add r4, r0, r6
    lbzx r0, r6, r0
    stb r0, 0x0(r3)
    addi r6, r6, 0x8
    lbz r0, 0x1(r4)
    stb r0, 0x1(r3)
    lbz r0, 0x2(r4)
    stb r0, 0x2(r3)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    addi r3, r3, 0x8
    bdnz lbl_fn_802150F0_00001A84
lbl_fn_802150F0_00001ABC:
    lwz r3, 0x8(r21)
    cmpwi r3, 0x0
    beq lbl_fn_802150F0_00001AD0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802150F0_00001AD0:
    stw r19, 0x8(r21)
    stw r22, 0x4(r21)
    b lbl_fn_802150F0_00001D38
lbl_fn_802150F0_00001ADC:
    lwz r3, 0x24(r31)
    cmplw r3, r0
    blt lbl_fn_802150F0_00001D38
    slwi r19, r3, 1
    cmplw r0, r19
    bgt lbl_fn_802150F0_00001D38
    slwi r3, r19, 3
    li r4, 0x0
    addi r3, r3, 0x10
    la r5, lbl_8087DB8C
    la r6, lbl_8087DB88
    li r7, 0x0
    bl fn_800846FC
    mr r7, r19
    addi r4, r20, fn_80216488@l
    li r5, 0x0
    li r6, 0x8
    bl fn_80695720
    lwz r0, 0x8(r21)
    mr r18, r3
    cmpwi r0, 0x0
    beq lbl_fn_802150F0_00001D30
    lwz r0, 0x24(r31)
    mr r4, r19
    cmplw r19, r0
    ble lbl_fn_802150F0_00001B48
    mr r4, r0
lbl_fn_802150F0_00001B48:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_802150F0_00001D1C
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_802150F0_00001CCC
    addi r0, r8, 0x7
    mr r7, r18
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_802150F0_00001CCC
lbl_fn_802150F0_00001B7C:
    lwz r0, 0x8(r21)
    addi r5, r5, 0x8
    add r8, r0, r6
    lbzx r0, r6, r0
    stb r0, 0x0(r7)
    lbz r0, 0x1(r8)
    stb r0, 0x1(r7)
    lbz r0, 0x2(r8)
    stb r0, 0x2(r7)
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    lbz r0, 0x8(r8)
    stb r0, 0x8(r7)
    lbz r0, 0x9(r8)
    stb r0, 0x9(r7)
    lbz r0, 0xa(r8)
    stb r0, 0xa(r7)
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    lbz r0, 0x10(r8)
    stb r0, 0x10(r7)
    lbz r0, 0x11(r8)
    stb r0, 0x11(r7)
    lbz r0, 0x12(r8)
    stb r0, 0x12(r7)
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    lbz r0, 0x18(r8)
    stb r0, 0x18(r7)
    lbz r0, 0x19(r8)
    stb r0, 0x19(r7)
    lbz r0, 0x1a(r8)
    stb r0, 0x1a(r7)
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    lbz r0, 0x20(r8)
    stb r0, 0x20(r7)
    lbz r0, 0x21(r8)
    stb r0, 0x21(r7)
    lbz r0, 0x22(r8)
    stb r0, 0x22(r7)
    lwz r0, 0x24(r8)
    stw r0, 0x24(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    lbz r0, 0x28(r8)
    stb r0, 0x28(r7)
    lbz r0, 0x29(r8)
    stb r0, 0x29(r7)
    lbz r0, 0x2a(r8)
    stb r0, 0x2a(r7)
    lwz r0, 0x2c(r8)
    stw r0, 0x2c(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    lbz r0, 0x30(r8)
    stb r0, 0x30(r7)
    lbz r0, 0x31(r8)
    stb r0, 0x31(r7)
    lbz r0, 0x32(r8)
    stb r0, 0x32(r7)
    lwz r0, 0x34(r8)
    stw r0, 0x34(r7)
    lwz r0, 0x8(r21)
    add r8, r0, r6
    addi r6, r6, 0x40
    lbz r0, 0x38(r8)
    stb r0, 0x38(r7)
    lbz r0, 0x39(r8)
    stb r0, 0x39(r7)
    lbz r0, 0x3a(r8)
    stb r0, 0x3a(r7)
    lwz r0, 0x3c(r8)
    stw r0, 0x3c(r7)
    addi r7, r7, 0x40
    bdnz lbl_fn_802150F0_00001B7C
lbl_fn_802150F0_00001CCC:
    slwi r6, r5, 3
    subf r0, r5, r4
    add r3, r3, r6
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_802150F0_00001D1C
lbl_fn_802150F0_00001CE4:
    lwz r0, 0x8(r21)
    addi r5, r5, 0x1
    add r4, r0, r6
    lbzx r0, r6, r0
    stb r0, 0x0(r3)
    addi r6, r6, 0x8
    lbz r0, 0x1(r4)
    stb r0, 0x1(r3)
    lbz r0, 0x2(r4)
    stb r0, 0x2(r3)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    addi r3, r3, 0x8
    bdnz lbl_fn_802150F0_00001CE4
lbl_fn_802150F0_00001D1C:
    lwz r3, 0x8(r21)
    cmpwi r3, 0x0
    beq lbl_fn_802150F0_00001D30
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802150F0_00001D30:
    stw r18, 0x8(r21)
    stw r19, 0x4(r21)
lbl_fn_802150F0_00001D38:
    lwz r0, 0x24(r31)
    lwz r3, 0x8(r21)
    slwi r0, r0, 3
    stbux r30, r3, r0
    stb r29, 0x1(r3)
    stb r28, 0x2(r3)
    stw r27, 0x4(r3)
    lwz r3, 0x24(r31)
    addi r0, r3, 0x1
    stw r0, 0x24(r31)
lbl_fn_802150F0_00001D60:
    sth r23, 0x8(r24)
lbl_fn_802150F0_00001D64:
    addi r24, r24, 0x2
    b lbl_fn_802150F0_00001788
lbl_fn_802150F0_00001D6C:
    addi r26, r26, 0x78
lbl_fn_802150F0_00001D70:
    addi r3, r1, 0xc70
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802150F0_0000173C
    lwz r3, lbl_8087F518
    mr r4, r25
    bl fn_8046DD20
lbl_fn_802150F0_00001D8C:
    lwz r0, lbl_8087F260
    cmpwi r0, 0x0
    bne lbl_fn_802150F0_000023C8
    lwz r3, lbl_8087F518
    addi r5, r1, 0x18
    lwz r4, lbl_80882F0C
    li r6, 0x20
    bl fn_8046DC5C
    lwz r12, 0xc70(r1)
    mr r26, r3
    mr r4, r26
    addi r3, r1, 0xc70
    lwz r12, 0x8(r12)
    lwz r5, 0x18(r1)
    mtctr r12
    bctrl
    li r18, 0x0
lbl_fn_802150F0_00001DD0:
    addi r3, r1, 0xc70
    bl fn_8005B5F8
    addi r18, r18, 0x1
    cmpwi r18, 0x3
    blt lbl_fn_802150F0_00001DD0
    b lbl_fn_802150F0_00001E1C
lbl_fn_802150F0_00001DE8:
    addi r3, r1, 0xc70
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_802150F0_00001E1C
    cmpwi r0, 0x23
    beq lbl_fn_802150F0_00001E1C
    cmpwi r0, 0x0
    beq lbl_fn_802150F0_00001E1C
    lwz r3, lbl_8087F264
    addi r0, r3, 0x1
    stw r0, lbl_8087F264
lbl_fn_802150F0_00001E1C:
    addi r3, r1, 0xc70
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802150F0_00001DE8
    lwz r19, lbl_8087F264
    lis r18, lbl_8073FB74@ha
    addi r5, r18, lbl_8073FB74@l
    li r4, 0x1
    mulli r3, r19, 0x78
    li r7, 0x0
    mr r6, r5
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_802164A0@ha
    mr r7, r19
    addi r4, r4, fn_802164A0@l
    li r5, 0x0
    li r6, 0x78
    bl fn_80695720
    stw r3, lbl_8087F260
    mr r4, r26
    lwz r12, 0xc70(r1)
    addi r3, r1, 0xc70
    lwz r5, 0x18(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0xc70
    bl fn_8005B5F8
    addi r3, r1, 0xc70
    bl fn_8005B5F8
    addi r3, r1, 0xc70
    bl fn_8005B5F8
    addi r27, r31, 0x3c
    addi r29, r18, lbl_8073FB74@l
    li r20, 0x0
    lis r28, fn_802164E8@ha
    li r25, 0x8
    b lbl_fn_802150F0_000023AC
lbl_fn_802150F0_00001EB8:
    addi r3, r1, 0xc70
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_802150F0_000023AC
    cmpwi r0, 0x23
    beq lbl_fn_802150F0_000023AC
    cmpwi r0, 0x0
    beq lbl_fn_802150F0_000023AC
    lwz r0, lbl_8087F260
    addi r3, r1, 0xc80
    add r23, r0, r20
    bl fn_80684600
    stw r3, 0x0(r23)
    addi r3, r1, 0xc70
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x4(r23)
lbl_fn_802150F0_00001F04:
    addi r3, r1, 0xc70
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r18, r3
    extsb. r0, r0
    beq lbl_fn_802150F0_000023A8
    lbz r0, 0x9(r1)
    rlwinm r0, r0, 0, 25, 23
    stb r0, 0x9(r1)
    bl fn_80684600
    stb r3, 0x8(r1)
    mr r3, r18
    addi r4, r29, 0x1
    bl fn_806827C4
    neg r4, r3
    lbz r0, 0x8(r1)
    or r4, r4, r3
    lbz r3, 0x9(r1)
    rlwimi r3, r4, 8, 24, 24
    lwz r8, 0x3c(r31)
    stb r3, 0x9(r1)
    extrwi r7, r3, 1, 24
    extsb r4, r0
    lwz r9, 0x8(r27)
    li r24, -0x1
    li r10, 0x0
    li r3, 0x0
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_802150F0_00001FC4
lbl_fn_802150F0_00001F7C:
    lbzx r0, r9, r3
    add r6, r9, r3
    li r5, 0x0
    extsb r0, r0
    cmpw r0, r4
    bne lbl_fn_802150F0_00001FA8
    lbz r0, 0x1(r6)
    extrwi r0, r0, 1, 24
    cmplw r0, r7
    bne lbl_fn_802150F0_00001FA8
    li r5, 0x1
lbl_fn_802150F0_00001FA8:
    cmpwi r5, 0x0
    beq lbl_fn_802150F0_00001FB8
    mr r24, r10
    b lbl_fn_802150F0_00001FC4
lbl_fn_802150F0_00001FB8:
    addi r10, r10, 0x1
    addi r3, r3, 0x2
    bdnz lbl_fn_802150F0_00001F7C
lbl_fn_802150F0_00001FC4:
    cmpwi r24, 0x0
    bge lbl_fn_802150F0_0000239C
    cmpwi r9, 0x0
    mr r24, r8
    beq lbl_fn_802150F0_00001FE4
    lwz r0, 0x4(r27)
    cmpwi r0, 0x0
    bne lbl_fn_802150F0_000021A4
lbl_fn_802150F0_00001FE4:
    lwz r0, 0x4(r27)
    cmplwi r0, 0x8
    bgt lbl_fn_802150F0_00002370
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087DB84
    la r6, lbl_8087DB80
    li r7, 0x0
    bl fn_800846FC
    addi r4, r28, fn_802164E8@l
    li r5, 0x0
    li r6, 0x2
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x8(r27)
    mr r18, r3
    cmpwi r0, 0x0
    beq lbl_fn_802150F0_00002198
    lwz r0, 0x3c(r31)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_802150F0_00002040
    mr r4, r0
lbl_fn_802150F0_00002040:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_802150F0_00002184
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_802150F0_00002144
    addi r0, r8, 0x7
    mr r7, r18
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_802150F0_00002144
lbl_fn_802150F0_00002074:
    lwz r0, 0x8(r27)
    addi r5, r5, 0x8
    add r8, r0, r6
    lbzx r0, r6, r0
    stb r0, 0x0(r7)
    lbz r0, 0x1(r8)
    stb r0, 0x1(r7)
    lwz r0, 0x8(r27)
    add r8, r0, r6
    lbz r0, 0x2(r8)
    stb r0, 0x2(r7)
    lbz r0, 0x3(r8)
    stb r0, 0x3(r7)
    lwz r0, 0x8(r27)
    add r8, r0, r6
    lbz r0, 0x4(r8)
    stb r0, 0x4(r7)
    lbz r0, 0x5(r8)
    stb r0, 0x5(r7)
    lwz r0, 0x8(r27)
    add r8, r0, r6
    lbz r0, 0x6(r8)
    stb r0, 0x6(r7)
    lbz r0, 0x7(r8)
    stb r0, 0x7(r7)
    lwz r0, 0x8(r27)
    add r8, r0, r6
    lbz r0, 0x8(r8)
    stb r0, 0x8(r7)
    lbz r0, 0x9(r8)
    stb r0, 0x9(r7)
    lwz r0, 0x8(r27)
    add r8, r0, r6
    lbz r0, 0xa(r8)
    stb r0, 0xa(r7)
    lbz r0, 0xb(r8)
    stb r0, 0xb(r7)
    lwz r0, 0x8(r27)
    add r8, r0, r6
    lbz r0, 0xc(r8)
    stb r0, 0xc(r7)
    lbz r0, 0xd(r8)
    stb r0, 0xd(r7)
    lwz r0, 0x8(r27)
    add r8, r0, r6
    addi r6, r6, 0x10
    lbz r0, 0xe(r8)
    stb r0, 0xe(r7)
    lbz r0, 0xf(r8)
    stb r0, 0xf(r7)
    addi r7, r7, 0x10
    bdnz lbl_fn_802150F0_00002074
lbl_fn_802150F0_00002144:
    slwi r6, r5, 1
    subf r0, r5, r4
    add r3, r3, r6
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_802150F0_00002184
lbl_fn_802150F0_0000215C:
    lwz r0, 0x8(r27)
    addi r5, r5, 0x1
    add r4, r0, r6
    lbzx r0, r6, r0
    stb r0, 0x0(r3)
    addi r6, r6, 0x2
    lbz r0, 0x1(r4)
    stb r0, 0x1(r3)
    addi r3, r3, 0x2
    bdnz lbl_fn_802150F0_0000215C
lbl_fn_802150F0_00002184:
    lwz r3, 0x8(r27)
    cmpwi r3, 0x0
    beq lbl_fn_802150F0_00002198
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802150F0_00002198:
    stw r18, 0x8(r27)
    stw r25, 0x4(r27)
    b lbl_fn_802150F0_00002370
lbl_fn_802150F0_000021A4:
    lwz r3, 0x3c(r31)
    cmplw r3, r0
    blt lbl_fn_802150F0_00002370
    slwi r19, r3, 1
    cmplw r0, r19
    bgt lbl_fn_802150F0_00002370
    slwi r3, r19, 1
    li r4, 0x0
    addi r3, r3, 0x10
    la r5, lbl_8087DB84
    la r6, lbl_8087DB80
    li r7, 0x0
    bl fn_800846FC
    mr r7, r19
    addi r4, r28, fn_802164E8@l
    li r5, 0x0
    li r6, 0x2
    bl fn_80695720
    lwz r0, 0x8(r27)
    mr r18, r3
    cmpwi r0, 0x0
    beq lbl_fn_802150F0_00002368
    lwz r0, 0x3c(r31)
    mr r4, r19
    cmplw r19, r0
    ble lbl_fn_802150F0_00002210
    mr r4, r0
lbl_fn_802150F0_00002210:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_802150F0_00002354
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_802150F0_00002314
    addi r0, r8, 0x7
    mr r7, r18
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_802150F0_00002314
lbl_fn_802150F0_00002244:
    lwz r0, 0x8(r27)
    addi r5, r5, 0x8
    add r8, r0, r6
    lbzx r0, r6, r0
    stb r0, 0x0(r7)
    lbz r0, 0x1(r8)
    stb r0, 0x1(r7)
    lwz r0, 0x8(r27)
    add r8, r0, r6
    lbz r0, 0x2(r8)
    stb r0, 0x2(r7)
    lbz r0, 0x3(r8)
    stb r0, 0x3(r7)
    lwz r0, 0x8(r27)
    add r8, r0, r6
    lbz r0, 0x4(r8)
    stb r0, 0x4(r7)
    lbz r0, 0x5(r8)
    stb r0, 0x5(r7)
    lwz r0, 0x8(r27)
    add r8, r0, r6
    lbz r0, 0x6(r8)
    stb r0, 0x6(r7)
    lbz r0, 0x7(r8)
    stb r0, 0x7(r7)
    lwz r0, 0x8(r27)
    add r8, r0, r6
    lbz r0, 0x8(r8)
    stb r0, 0x8(r7)
    lbz r0, 0x9(r8)
    stb r0, 0x9(r7)
    lwz r0, 0x8(r27)
    add r8, r0, r6
    lbz r0, 0xa(r8)
    stb r0, 0xa(r7)
    lbz r0, 0xb(r8)
    stb r0, 0xb(r7)
    lwz r0, 0x8(r27)
    add r8, r0, r6
    lbz r0, 0xc(r8)
    stb r0, 0xc(r7)
    lbz r0, 0xd(r8)
    stb r0, 0xd(r7)
    lwz r0, 0x8(r27)
    add r8, r0, r6
    addi r6, r6, 0x10
    lbz r0, 0xe(r8)
    stb r0, 0xe(r7)
    lbz r0, 0xf(r8)
    stb r0, 0xf(r7)
    addi r7, r7, 0x10
    bdnz lbl_fn_802150F0_00002244
lbl_fn_802150F0_00002314:
    slwi r6, r5, 1
    subf r0, r5, r4
    add r3, r3, r6
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_802150F0_00002354
lbl_fn_802150F0_0000232C:
    lwz r0, 0x8(r27)
    addi r5, r5, 0x1
    add r4, r0, r6
    lbzx r0, r6, r0
    stb r0, 0x0(r3)
    addi r6, r6, 0x2
    lbz r0, 0x1(r4)
    stb r0, 0x1(r3)
    addi r3, r3, 0x2
    bdnz lbl_fn_802150F0_0000232C
lbl_fn_802150F0_00002354:
    lwz r3, 0x8(r27)
    cmpwi r3, 0x0
    beq lbl_fn_802150F0_00002368
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802150F0_00002368:
    stw r18, 0x8(r27)
    stw r19, 0x4(r27)
lbl_fn_802150F0_00002370:
    lwz r0, 0x3c(r31)
    lwz r4, 0x8(r27)
    slwi r0, r0, 1
    lbz r3, 0x8(r1)
    add r4, r4, r0
    lbz r0, 0x9(r1)
    stb r3, 0x0(r4)
    stb r0, 0x1(r4)
    lwz r3, 0x3c(r31)
    addi r0, r3, 0x1
    stw r0, 0x3c(r31)
lbl_fn_802150F0_0000239C:
    sth r24, 0x8(r23)
    addi r23, r23, 0x2
    b lbl_fn_802150F0_00001F04
lbl_fn_802150F0_000023A8:
    addi r20, r20, 0x78
lbl_fn_802150F0_000023AC:
    addi r3, r1, 0xc70
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802150F0_00001EB8
    lwz r3, lbl_8087F518
    mr r4, r26
    bl fn_8046DD20
lbl_fn_802150F0_000023C8:
    lwz r0, lbl_8087F268
    cmpwi r0, 0x0
    bne lbl_fn_802150F0_000025CC
    lis r3, lbl_8077A090@ha
    li r0, 0x0
    addi r3, r3, lbl_8077A090@l
    stw r3, 0x1c(r1)
    addi r3, r1, 0x2c
    li r4, 0x0
    stw r0, 0x20(r1)
    li r5, 0x800
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0xc6c(r1)
    bl memset
    addi r3, r1, 0xc2c
    li r4, 0x0
    li r5, 0x40
    bl memset
    lis r3, lbl_8077A070@ha
    lis r4, lbl_807830B8@ha
    addi r3, r3, lbl_8077A070@l
    stw r3, 0x1c(r1)
    addi r3, r1, 0x1c
    addi r4, r4, lbl_807830B8@l
    bl fn_8005B9AC
    lwz r3, lbl_8087F518
    addi r5, r1, 0x18
    lwz r4, lbl_80882F10
    li r6, 0x20
    bl fn_8046DC5C
    lwz r4, 0x18(r1)
    mr r18, r3
    srwi r0, r4, 31
    add r0, r0, r4
    srawi. r4, r0, 1
    beq lbl_fn_802150F0_00002464
    addi r0, r3, 0x2
    b lbl_fn_802150F0_00002468
lbl_fn_802150F0_00002464:
    mr r0, r18
lbl_fn_802150F0_00002468:
    cmpwi r4, 0x0
    stw r0, 0x20(r1)
    beq lbl_fn_802150F0_00002478
    subi r4, r4, 0x1
lbl_fn_802150F0_00002478:
    li r0, 0x0
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    b lbl_fn_802150F0_000024B8
lbl_fn_802150F0_00002488:
    addi r3, r1, 0x1c
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_802150F0_000024B8
    cmpwi r0, 0x23
    beq lbl_fn_802150F0_000024B8
    cmpwi r0, 0x0
    beq lbl_fn_802150F0_000024B8
    lwz r3, lbl_8087F26C
    addi r0, r3, 0x1
    stw r0, lbl_8087F26C
lbl_fn_802150F0_000024B8:
    addi r3, r1, 0x1c
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_802150F0_00002488
    lwz r19, lbl_8087F26C
    lis r5, lbl_8073FB74@ha
    addi r5, r5, lbl_8073FB74@l
    li r4, 0x1
    mulli r3, r19, 0x88
    li r7, 0x0
    mr r6, r5
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_80216500@ha
    mr r7, r19
    addi r4, r4, fn_80216500@l
    li r5, 0x0
    li r6, 0x88
    bl fn_80695720
    lwz r4, 0x18(r1)
    stw r3, lbl_8087F268
    srwi r0, r4, 31
    add r0, r0, r4
    srawi. r3, r0, 1
    beq lbl_fn_802150F0_00002524
    addi r0, r18, 0x2
    b lbl_fn_802150F0_00002528
lbl_fn_802150F0_00002524:
    mr r0, r18
lbl_fn_802150F0_00002528:
    cmpwi r3, 0x0
    stw r0, 0x20(r1)
    beq lbl_fn_802150F0_00002538
    subi r3, r3, 0x1
lbl_fn_802150F0_00002538:
    li r0, 0x0
    stw r3, 0x24(r1)
    li r19, 0x0
    stw r0, 0x28(r1)
    b lbl_fn_802150F0_000025B0
lbl_fn_802150F0_0000254C:
    addi r3, r1, 0x1c
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_802150F0_000025B0
    cmpwi r0, 0x23
    beq lbl_fn_802150F0_000025B0
    cmpwi r0, 0x0
    beq lbl_fn_802150F0_000025B0
    lwz r0, lbl_8087F268
    add r20, r0, r19
    bl fn_800DC1DC
    stw r3, 0x0(r20)
    addi r3, r1, 0x1c
    bl fn_8005B710
    mr r4, r3
    addi r3, r20, 0x4
    bl fn_80686A64
    addi r3, r1, 0x1c
    bl fn_8005B710
    addi r3, r1, 0x1c
    bl fn_8005B710
    bl fn_800DC1DC
    stw r3, 0x84(r20)
    addi r19, r19, 0x88
lbl_fn_802150F0_000025B0:
    addi r3, r1, 0x1c
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_802150F0_0000254C
    lwz r3, lbl_8087F518
    mr r4, r18
    bl fn_8046DD20
lbl_fn_802150F0_000025CC:
    lmw r18, 0x12a8(r1)
    lwz r0, 0x12e4(r1)
    mtlr r0
    addi r1, r1, 0x12e0
    blr
}
