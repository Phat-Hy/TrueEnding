#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_14(void);
extern void _restgpr_23(void);
extern void _savegpr_14(void);
extern void _savegpr_23(void);
extern void dtor_80084684(void);
extern void fn_80061824(void);
extern void fn_8006EF48(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800DC3C8(void);
extern void fn_800DCA6C(void);
extern void fn_8032BE88(void);
extern void fn_8048A290(void);
extern void fn_8048A584(void);
extern void fn_8048A968(void);
extern void fn_8053AC8C(void);
extern void fn_8053AFBC(void);
extern void fn_80542688(void);
extern void fn_805428AC(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_80680770(void);
extern void fn_80684600(void);
extern void fn_80686A48(void);
extern void fn_80686A64(void);
extern void fn_80686EA4(void);
extern void fn_80695D84(void);

/* External data declarations */
extern u8 lbl_8075E0D0[];
extern u8 lbl_8075E0D8[];
extern u8 lbl_8075E148[];
extern u8 lbl_80788D00[];
extern u8 lbl_80793BC8[];
extern u8 lbl_807943B0[];
extern u8 lbl_80794480[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087E4D0;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087F9C0;
extern u32 lbl_80887CA0;
extern u32 lbl_80887CA4;
extern u32 lbl_80887CB0;
extern u32 lbl_80887CBC;
extern u32 lbl_80887CCC;
extern u32 lbl_80887CD0;
extern u32 lbl_80887CD4;

/* Function declarations */
void fn_80540A0C(void);
void fn_8054119C(void);
void fn_805411E0(void);
void fn_80541214(void);
void fn_80541248(void);
void fn_805412AC(void);
void fn_80541370(void);
void fn_80541524(void);
void fn_80541538(void);
void fn_8054154C(void);
void fn_8054158C(void);
void fn_80541BDC(void);
void fn_80541C98(void);
void fn_80541CF4(void);
void fn_80541D00(void);
void fn_80541F1C(void);
void fn_80542050(void);

asm void fn_80540A0C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    li r6, 0x0
    li r4, 0x0
    stw r0, 0x74(r1)
    stmw r25, 0x54(r1)
    mr r29, r3
    li r26, 0x0
    b lbl_fn_80540A0C_00000044
lbl_fn_80540A0C_00000024:
    lwz r5, 0xb8(r3)
    lwzx r5, r5, r4
    lwz r5, 0xc(r5)
    cmpw cr1, r5, r26
    blt cr1, lbl_fn_80540A0C_0000003C
    addi r26, r5, 0x1
lbl_fn_80540A0C_0000003C:
    addi r6, r6, 0x1
    addi r4, r4, 0x8
lbl_fn_80540A0C_00000044:
    lwz r0, 0xbc(r3)
    cmpw cr1, r6, r0
    blt cr1, lbl_fn_80540A0C_00000024
    lis r5, lbl_8075E148@ha
    li r3, 0x4c
    addi r5, r5, lbl_8075E148@l
    li r4, 0x4
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi cr1, r3, 0x0
    mr r25, r3
    beq cr1, lbl_fn_80540A0C_00000088
    mr r4, r29
    mr r5, r26
    bl fn_8053AFBC
    mr r25, r3
lbl_fn_80540A0C_00000088:
    li r0, 0x0
    stw r25, 0x28(r1)
    li r3, 0x10
    stw r0, 0x2c(r1)
    bl fn_800844D8
    cmpwi cr6, r3, 0x0
    beq cr6, lbl_fn_80540A0C_000000C0
    li r0, 0x1
    stw r0, 0x0(r3)
    lis r4, lbl_807943B0@ha
    stw r0, 0x4(r3)
    addi r4, r4, lbl_807943B0@l
    stw r4, 0x8(r3)
    stw r25, 0xc(r3)
lbl_fn_80540A0C_000000C0:
    cmpwi cr6, r3, 0x0
    stw r3, 0x2c(r1)
    bne cr6, lbl_fn_80540A0C_00000108
    cmpwi cr1, r25, 0x0
    beq cr1, lbl_fn_80540A0C_000000EC
    lwz r12, 0x0(r25)
    mr r3, r25
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80540A0C_000000EC:
    lis r3, lbl_80793BC8@ha
    addi r30, r1, 0x20
    addi r3, r3, lbl_80793BC8@l
    stw r3, 0x20(r1)
    mr r3, r30
    bl fn_800DCA6C
    cmpwi cr6, r30, 0x0
lbl_fn_80540A0C_00000108:
    mr r4, r25
    mr r5, r25
    addi r3, r1, 0x2c
    crclr 6
    bl fn_8053AC8C
    lwz r0, 0xbc(r29)
    lwz r30, 0xc0(r29)
    cmplw cr6, r0, r30
    bge cr6, lbl_fn_80540A0C_00000178
    lwz r3, 0xb8(r29)
    slwi r0, r0, 3
    add. r3, r3, r0
    beq lbl_fn_80540A0C_00000168
    lwz r0, 0x28(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r3)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_80540A0C_00000168
    lwz r0, 0x4(r3)
lbl_fn_80540A0C_00000158:
    lwarx r3, r0, r0
    addi r3, r3, 0x1
    stwcx. r3, r0, r0
    bne+ lbl_fn_80540A0C_00000158
lbl_fn_80540A0C_00000168:
    lwz r3, 0xbc(r29)
    addi r0, r3, 0x1
    stw r0, 0xbc(r29)
    b lbl_fn_80540A0C_000006B8
lbl_fn_80540A0C_00000178:
    lis r3, 0x2000
    li r4, 0x1
    subi r25, r3, 0x1
    stw r4, 0x8(r1)
    subf r0, r30, r25
    cmplw cr6, r4, r0
    ble cr6, lbl_fn_80540A0C_000001B8
    lis r4, lbl_8075E148@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075E148@l
    addi r3, r3, __files@l
    addi r4, r4, 0x8b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80540A0C_000001B8:
    lis r3, 0xaaab
    subi r0, r3, 0x5555
    mulhwu r0, r0, r25
    srwi r0, r0, 1
    cmplw cr6, r30, r0
    bge cr6, lbl_fn_80540A0C_00000200
    addi r5, r30, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r3, r3, r4
    srwi r3, r3, 2
    stw r3, 0x10(r1)
    cmplw cr6, r3, r0
    bge cr6, lbl_fn_80540A0C_00000260
    b lbl_fn_80540A0C_00000260
lbl_fn_80540A0C_00000200:
    slwi r0, r0, 1
    cmplw cr6, r30, r0
    bge cr6, lbl_fn_80540A0C_00000260
    addi r3, r30, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw cr6, r3, r0
    b lbl_fn_80540A0C_00000260
    beq lbl_fn_80540A0C_00000250
    lwz r0, 0x28(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r3)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_80540A0C_00000250
lbl_fn_80540A0C_00000240:
    lwarx r3, r0, r0
    addi r3, r3, 0x1
    stwcx. r3, r0, r0
    bne+ lbl_fn_80540A0C_00000240
lbl_fn_80540A0C_00000250:
    lwz r3, 0xbc(r29)
    addi r0, r3, 0x1
    stw r0, 0xbc(r29)
    b lbl_fn_80540A0C_000006B8
lbl_fn_80540A0C_00000260:
    li r0, 0x0
    addi r4, r29, 0xc0
    lis r3, 0x2000
    stw r0, 0x30(r1)
    subi r30, r3, 0x1
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
    lwz r3, 0xbc(r29)
    lwz r31, 0xc0(r29)
    addi r0, r3, 0x1
    subf r3, r31, r0
    stw r3, 0x1c(r1)
    subf r0, r31, r30
    cmplw cr6, r3, r0
    ble cr6, lbl_fn_80540A0C_000002C8
    lis r4, lbl_8075E148@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075E148@l
    addi r3, r3, __files@l
    addi r4, r4, 0x8b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80540A0C_000002C8:
    lis r3, 0xaaab
    subi r0, r3, 0x5555
    mulhwu r0, r0, r30
    srwi r0, r0, 1
    cmplw cr6, r31, r0
    bge cr6, lbl_fn_80540A0C_00000324
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x1c(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r3, r3, r4
    srwi r3, r3, 2
    stw r3, 0x14(r1)
    cmplw cr6, r3, r0
    bge cr6, lbl_fn_80540A0C_00000314
    addi r3, r1, 0x1c
    b lbl_fn_80540A0C_00000318
lbl_fn_80540A0C_00000314:
    addi r3, r1, 0x14
lbl_fn_80540A0C_00000318:
    lwz r0, 0x0(r3)
    add r30, r31, r0
    b lbl_fn_80540A0C_0000035C
lbl_fn_80540A0C_00000324:
    slwi r0, r0, 1
    cmplw cr6, r31, r0
    bge cr6, lbl_fn_80540A0C_0000035C
    addi r3, r31, 0x1
    lwz r0, 0x1c(r1)
    srwi r3, r3, 1
    stw r3, 0x18(r1)
    cmplw cr6, r3, r0
    bge cr6, lbl_fn_80540A0C_00000350
    addi r3, r1, 0x1c
    b lbl_fn_80540A0C_00000354
lbl_fn_80540A0C_00000350:
    addi r3, r1, 0x18
lbl_fn_80540A0C_00000354:
    lwz r0, 0x0(r3)
    add r30, r31, r0
lbl_fn_80540A0C_0000035C:
    lis r3, 0x2000
    subi r0, r3, 0x1
    cmplw cr6, r30, r0
    ble cr6, lbl_fn_80540A0C_00000390
    lis r4, lbl_8075E148@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075E148@l
    addi r3, r3, __files@l
    addi r4, r4, 0x8b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80540A0C_00000390:
    slwi r3, r30, 3
    bl fn_800844D8
    cmpwi cr6, r3, 0x0
    mr r31, r3
    bne cr6, lbl_fn_80540A0C_000003C4
    lis r3, __files@ha
    lis r4, lbl_80794480@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80794480@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80540A0C_000003C4:
    lwz r0, 0x34(r1)
    stw r31, 0x30(r1)
    slwi r3, r0, 3
    stw r30, 0x38(r1)
    lwz r0, 0xbc(r29)
    stw r0, 0x40(r1)
    slwi r0, r0, 3
    add r0, r31, r0
    add. r3, r3, r0
    beq lbl_fn_80540A0C_00000418
    lwz r0, 0x28(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r3)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_80540A0C_00000418
    lwz r0, 0x4(r3)
lbl_fn_80540A0C_00000408:
    lwarx r3, r0, r0
    addi r3, r3, 0x1
    stwcx. r3, r0, r0
    bne+ lbl_fn_80540A0C_00000408
lbl_fn_80540A0C_00000418:
    lwz r3, 0x34(r1)
    lwz r0, 0x40(r1)
    addi r3, r3, 0x1
    stw r3, 0x34(r1)
    lwz r3, 0x30(r1)
    slwi r0, r0, 3
    lwz r4, 0xbc(r29)
    lwz r5, 0xb8(r29)
    add r6, r3, r0
    slwi r0, r4, 3
    add r7, r5, r0
    b lbl_fn_80540A0C_00000498
lbl_fn_80540A0C_00000448:
    subic. r6, r6, 0x8
    subi r7, r7, 0x8
    beq lbl_fn_80540A0C_00000480
    lwz r0, 0x0(r7)
    stw r0, 0x0(r6)
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_80540A0C_00000480
    lwz r0, 0x4(r6)
lbl_fn_80540A0C_00000470:
    lwarx r3, r0, r0
    addi r3, r3, 0x1
    stwcx. r3, r0, r0
    bne+ lbl_fn_80540A0C_00000470
lbl_fn_80540A0C_00000480:
    lwz r4, 0x40(r1)
    lwz r3, 0x34(r1)
    subi r0, r4, 0x1
    stw r0, 0x40(r1)
    addi r0, r3, 0x1
    stw r0, 0x34(r1)
lbl_fn_80540A0C_00000498:
    cmplw cr1, r5, r7
    blt cr1, lbl_fn_80540A0C_00000448
    lwz r3, 0xc0(r29)
    addic. r30, r1, 0x30
    lwz r0, 0x38(r1)
    stw r0, 0xc0(r29)
    stw r3, 0x38(r1)
    lwz r0, 0x30(r1)
    lwz r3, 0xb8(r29)
    stw r0, 0xb8(r29)
    stw r3, 0x30(r1)
    lwz r0, 0x34(r1)
    lwz r4, 0xbc(r29)
    stw r0, 0xbc(r29)
    stw r4, 0x34(r1)
    beq lbl_fn_80540A0C_000006B8
    lwz r3, 0x40(r1)
    slwi r0, r4, 3
    lwz r4, 0x30(r1)
    li r31, -0x1
    slwi r3, r3, 3
    add r28, r4, r3
    add r27, r28, r0
    b lbl_fn_80540A0C_000005A0
lbl_fn_80540A0C_000004F8:
    subic. r27, r27, 0x8
    beq lbl_fn_80540A0C_000005A0
    addic. r26, r27, 0x4
    beq lbl_fn_80540A0C_00000590
    lwz r25, 0x0(r26)
    cmpwi cr1, r25, 0x0
    beq cr1, lbl_fn_80540A0C_00000580
    sync
lbl_fn_80540A0C_00000518:
    lwarx r3, r0, r25
    subi r3, r3, 0x1
    stwcx. r3, r0, r25
    bne+ lbl_fn_80540A0C_00000518
    isync
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_80540A0C_00000580
    lwz r12, 0x8(r25)
    mr r3, r25
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r25
    addi r0, r25, 0x4
    sync
lbl_fn_80540A0C_00000554:
    lwarx r4, r0, r0
    subi r4, r4, 0x1
    stwcx. r4, r0, r0
    bne+ lbl_fn_80540A0C_00000554
    isync
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_fn_80540A0C_00000580
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_80540A0C_00000580:
    cmpwi cr1, r31, 0x0
    ble cr1, lbl_fn_80540A0C_00000590
    mr r3, r26
    bl dtor_80084684
lbl_fn_80540A0C_00000590:
    cmpwi cr1, r31, 0x0
    ble cr1, lbl_fn_80540A0C_000005A0
    mr r3, r27
    bl dtor_80084684
lbl_fn_80540A0C_000005A0:
    cmplw cr1, r27, r28
    bgt cr1, lbl_fn_80540A0C_000004F8
    cmpwi cr1, r30, 0x0
    li r0, 0x0
    stw r0, 0x34(r1)
    beq cr1, lbl_fn_80540A0C_000006A4
    lwz r25, 0x30(r1)
    cmpwi cr1, r25, 0x0
    beq cr1, lbl_fn_80540A0C_00000690
    li r28, 0x0
    stw r28, 0x34(r1)
    li r31, -0x1
    b lbl_fn_80540A0C_00000680
lbl_fn_80540A0C_000005D4:
    subic. r25, r25, 0x8
    beq lbl_fn_80540A0C_0000067C
    addic. r26, r25, 0x4
    beq lbl_fn_80540A0C_0000066C
    lwz r27, 0x0(r26)
    cmpwi cr1, r27, 0x0
    beq cr1, lbl_fn_80540A0C_0000065C
    sync
lbl_fn_80540A0C_000005F4:
    lwarx r3, r0, r27
    subi r3, r3, 0x1
    stwcx. r3, r0, r27
    bne+ lbl_fn_80540A0C_000005F4
    isync
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_80540A0C_0000065C
    lwz r12, 0x8(r27)
    mr r3, r27
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r27
    addi r0, r27, 0x4
    sync
lbl_fn_80540A0C_00000630:
    lwarx r4, r0, r0
    subi r4, r4, 0x1
    stwcx. r4, r0, r0
    bne+ lbl_fn_80540A0C_00000630
    isync
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_fn_80540A0C_0000065C
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_80540A0C_0000065C:
    cmpwi cr1, r31, 0x0
    ble cr1, lbl_fn_80540A0C_0000066C
    mr r3, r26
    bl dtor_80084684
lbl_fn_80540A0C_0000066C:
    cmpwi cr1, r31, 0x0
    ble cr1, lbl_fn_80540A0C_0000067C
    mr r3, r25
    bl dtor_80084684
lbl_fn_80540A0C_0000067C:
    subi r28, r28, 0x1
lbl_fn_80540A0C_00000680:
    cmpwi cr1, r28, 0x0
    bne cr1, lbl_fn_80540A0C_000005D4
    lwz r3, 0x30(r1)
    bl dtor_80084684
lbl_fn_80540A0C_00000690:
    li r0, 0x0
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_80540A0C_000006A4
    mr r3, r30
    bl dtor_80084684
lbl_fn_80540A0C_000006A4:
    li r0, -0x1
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_80540A0C_000006B8
    mr r3, r30
    bl dtor_80084684
lbl_fn_80540A0C_000006B8:
    addic. r25, r1, 0x28
    beq lbl_fn_80540A0C_00000768
    addic. r27, r25, 0x4
    beq lbl_fn_80540A0C_00000754
    lwz r26, 0x0(r27)
    cmpwi cr1, r26, 0x0
    beq cr1, lbl_fn_80540A0C_00000740
    sync
lbl_fn_80540A0C_000006D8:
    lwarx r3, r0, r26
    subi r3, r3, 0x1
    stwcx. r3, r0, r26
    bne+ lbl_fn_80540A0C_000006D8
    isync
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_80540A0C_00000740
    lwz r12, 0x8(r26)
    mr r3, r26
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r26
    addi r0, r26, 0x4
    sync
lbl_fn_80540A0C_00000714:
    lwarx r4, r0, r0
    subi r4, r4, 0x1
    stwcx. r4, r0, r0
    bne+ lbl_fn_80540A0C_00000714
    isync
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_fn_80540A0C_00000740
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_80540A0C_00000740:
    li r0, -0x1
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_80540A0C_00000754
    mr r3, r27
    bl dtor_80084684
lbl_fn_80540A0C_00000754:
    li r0, -0x1
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_80540A0C_00000768
    mr r3, r25
    bl dtor_80084684
lbl_fn_80540A0C_00000768:
    lwz r3, 0xbc(r29)
    lwz r4, 0xb8(r29)
    lmw r25, 0x54(r1)
    subi r0, r3, 0x1
    slwi r0, r0, 3
    lwzx r3, r4, r0
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8054119C(void)
{
    nofralloc
    lwz r0, 0xbc(r3)
    li r7, 0x0
    li r6, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8054119C_000007CC
lbl_fn_8054119C_000007A8:
    lwz r5, 0xb8(r3)
    lwzx r0, r5, r6
    cmplw r4, r0
    bne lbl_fn_8054119C_000007C0
    mr r3, r7
    blr
lbl_fn_8054119C_000007C0:
    addi r6, r6, 0x8
    addi r7, r7, 0x1
    bdnz lbl_fn_8054119C_000007A8
lbl_fn_8054119C_000007CC:
    li r3, -0x1
    blr
}

asm void fn_805411E0(void)
{
    nofralloc
    lwz r4, 0x1a0(r3)
    cmpwi r4, 0x0
    blt lbl_fn_805411E0_000007F0
    lwz r0, 0xbc(r3)
    extsh r0, r0
    cmpw r4, r0
    blt lbl_fn_805411E0_000007F8
lbl_fn_805411E0_000007F0:
    li r3, 0x0
    blr
lbl_fn_805411E0_000007F8:
    lwz r3, 0xb8(r3)
    slwi r0, r4, 3
    lwzx r3, r3, r0
    blr
}

asm void fn_80541214(void)
{
    nofralloc
    lwz r4, 0x1a0(r3)
    cmpwi r4, 0x0
    blt lbl_fn_80541214_00000824
    lwz r0, 0xbc(r3)
    extsh r0, r0
    cmpw r4, r0
    blt lbl_fn_80541214_0000082C
lbl_fn_80541214_00000824:
    li r3, 0x0
    blr
lbl_fn_80541214_0000082C:
    lwz r3, 0xb8(r3)
    slwi r0, r4, 3
    lwzx r3, r3, r0
    blr
}

asm void fn_80541248(void)
{
    nofralloc
    lwz r0, 0x194(r3)
    li r5, -0x1
    lfs f0, lbl_80887CA0
    cmpwi r0, 0xa
    stw r4, 0x1a0(r3)
    stw r5, 0x1a4(r3)
    stfs f0, 0x198(r3)
    stfs f0, 0x19c(r3)
    bnelr
    li r7, 0x0
    li r4, 0x0
    mr r5, r7
    b lbl_fn_80541248_00000890
lbl_fn_80541248_00000870:
    lwz r0, 0x164(r3)
    add. r6, r0, r4
    beq lbl_fn_80541248_00000888
    stw r5, 0xb8(r6)
    stw r5, 0xbc(r6)
    stw r5, 0xc0(r6)
lbl_fn_80541248_00000888:
    addi r7, r7, 0x1
    addi r4, r4, 0x1c0
lbl_fn_80541248_00000890:
    lwz r0, 0x168(r3)
    cmpw r7, r0
    blt lbl_fn_80541248_00000870
    blr
}

asm void fn_805412AC(void)
{
    nofralloc
    lwz r9, 0xbc(r3)
    li r10, 0x0
    li r5, 0x0
    b lbl_fn_805412AC_00000954
lbl_fn_805412AC_000008B0:
    cmpwi r10, 0x0
    li r0, 0x0
    blt lbl_fn_805412AC_000008C8
    cmpw r10, r9
    bge lbl_fn_805412AC_000008C8
    li r0, 0x1
lbl_fn_805412AC_000008C8:
    cmpwi r0, 0x0
    beq lbl_fn_805412AC_000008DC
    lwz r6, 0xb8(r3)
    lwzx r8, r6, r5
    b lbl_fn_805412AC_000008E0
lbl_fn_805412AC_000008DC:
    li r8, 0x0
lbl_fn_805412AC_000008E0:
    lwz r0, 0x34(r8)
    li r11, 0x0
    li r6, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805412AC_0000094C
lbl_fn_805412AC_000008F8:
    cmpwi r11, 0x0
    li r7, 0x0
    blt lbl_fn_805412AC_00000914
    lwz r0, 0x34(r8)
    cmpw r11, r0
    bge lbl_fn_805412AC_00000914
    li r7, 0x1
lbl_fn_805412AC_00000914:
    cmpwi r7, 0x0
    beq lbl_fn_805412AC_00000928
    lwz r7, 0x30(r8)
    lwzx r7, r7, r6
    b lbl_fn_805412AC_0000092C
lbl_fn_805412AC_00000928:
    li r7, 0x0
lbl_fn_805412AC_0000092C:
    lwz r0, 0xc(r7)
    cmpw r4, r0
    bne lbl_fn_805412AC_00000940
    mr r3, r7
    blr
lbl_fn_805412AC_00000940:
    addi r11, r11, 0x1
    addi r6, r6, 0x8
    bdnz lbl_fn_805412AC_000008F8
lbl_fn_805412AC_0000094C:
    addi r10, r10, 0x1
    addi r5, r5, 0x8
lbl_fn_805412AC_00000954:
    cmpw r10, r9
    blt lbl_fn_805412AC_000008B0
    li r3, 0x0
    blr
}

asm void fn_80541370(void)
{
    nofralloc
    cmpwi r4, -0x1
    beqlr
    rlwinm. r0, r4, 0, 16, 16
    beq lbl_fn_80541370_00000A00
    lwz r8, 0xbc(r3)
    rlwinm r6, r4, 0, 17, 15
    li r4, 0x0
    mtctr r8
    cmpwi r8, 0x0
    ble lbl_fn_80541370_000009AC
lbl_fn_80541370_0000098C:
    lwz r5, 0xb8(r3)
    lwzx r5, r5, r4
    lwz r0, 0xc(r5)
    cmpw r6, r0
    bne lbl_fn_80541370_000009A4
    b lbl_fn_80541370_000009B0
lbl_fn_80541370_000009A4:
    addi r4, r4, 0x8
    bdnz lbl_fn_80541370_0000098C
lbl_fn_80541370_000009AC:
    li r5, 0x0
lbl_fn_80541370_000009B0:
    li r6, 0x0
    li r7, 0x0
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_80541370_000009E4
lbl_fn_80541370_000009C4:
    lwz r4, 0xb8(r3)
    lwzx r0, r4, r7
    cmplw r5, r0
    bne lbl_fn_80541370_000009D8
    b lbl_fn_80541370_000009E8
lbl_fn_80541370_000009D8:
    addi r7, r7, 0x8
    addi r6, r6, 0x1
    bdnz lbl_fn_80541370_000009C4
lbl_fn_80541370_000009E4:
    li r6, -0x1
lbl_fn_80541370_000009E8:
    li r4, 0x1
    li r0, 0x0
    stw r4, 0x1b0(r3)
    stw r6, 0x1b4(r3)
    stw r0, 0x1b8(r3)
    blr
lbl_fn_80541370_00000A00:
    lwz r11, 0xbc(r3)
    li r9, 0x0
    li r5, 0x0
    b lbl_fn_80541370_00000AB0
lbl_fn_80541370_00000A10:
    cmpwi r9, 0x0
    li r0, 0x0
    blt lbl_fn_80541370_00000A28
    cmpw r9, r11
    bge lbl_fn_80541370_00000A28
    li r0, 0x1
lbl_fn_80541370_00000A28:
    cmpwi r0, 0x0
    beq lbl_fn_80541370_00000A3C
    lwz r6, 0xb8(r3)
    lwzx r10, r6, r5
    b lbl_fn_80541370_00000A40
lbl_fn_80541370_00000A3C:
    li r10, 0x0
lbl_fn_80541370_00000A40:
    lwz r0, 0x34(r10)
    li r8, 0x0
    li r6, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80541370_00000AA8
lbl_fn_80541370_00000A58:
    cmpwi r8, 0x0
    li r7, 0x0
    blt lbl_fn_80541370_00000A74
    lwz r0, 0x34(r10)
    cmpw r8, r0
    bge lbl_fn_80541370_00000A74
    li r7, 0x1
lbl_fn_80541370_00000A74:
    cmpwi r7, 0x0
    beq lbl_fn_80541370_00000A88
    lwz r7, 0x30(r10)
    lwzx r7, r7, r6
    b lbl_fn_80541370_00000A8C
lbl_fn_80541370_00000A88:
    li r7, 0x0
lbl_fn_80541370_00000A8C:
    lwz r0, 0xc(r7)
    cmpw r4, r0
    bne lbl_fn_80541370_00000A9C
    b lbl_fn_80541370_00000ABC
lbl_fn_80541370_00000A9C:
    addi r8, r8, 0x1
    addi r6, r6, 0x8
    bdnz lbl_fn_80541370_00000A58
lbl_fn_80541370_00000AA8:
    addi r9, r9, 0x1
    addi r5, r5, 0x8
lbl_fn_80541370_00000AB0:
    cmpw r9, r11
    blt lbl_fn_80541370_00000A10
    li r7, 0x0
lbl_fn_80541370_00000ABC:
    cmpwi r7, 0x0
    beqlr
    lwz r6, 0x8(r7)
    li r5, 0x0
    li r8, 0x0
    mtctr r11
    cmplwi r11, 0x0
    ble lbl_fn_80541370_00000AFC
lbl_fn_80541370_00000ADC:
    lwz r4, 0xb8(r3)
    lwzx r0, r4, r8
    cmplw r6, r0
    bne lbl_fn_80541370_00000AF0
    b lbl_fn_80541370_00000B00
lbl_fn_80541370_00000AF0:
    addi r8, r8, 0x8
    addi r5, r5, 0x1
    bdnz lbl_fn_80541370_00000ADC
lbl_fn_80541370_00000AFC:
    li r5, -0x1
lbl_fn_80541370_00000B00:
    lwz r4, 0x10(r7)
    li r0, 0x1
    stw r4, 0x1b8(r3)
    stw r0, 0x1b0(r3)
    stw r5, 0x1b4(r3)
    blr
}

asm void fn_80541524(void)
{
    nofralloc
    li r0, 0x1
    stw r0, 0x1b0(r3)
    stw r4, 0x1b4(r3)
    stw r5, 0x1b8(r3)
    blr
}

asm void fn_80541538(void)
{
    nofralloc
    li r0, 0x2
    stw r0, 0x1b0(r3)
    stw r4, 0x1b4(r3)
    stw r5, 0x1b8(r3)
    blr
}

asm void fn_8054154C(void)
{
    nofralloc
    mulli r0, r4, 0x24
    add r3, r3, r0
    stw r5, 0x1f0(r3)
    stfs f1, 0x1f4(r3)
    stfs f2, 0x1f8(r3)
    stfs f3, 0x1fc(r3)
    stfs f4, 0x200(r3)
    stw r6, 0x204(r3)
    stw r7, 0x208(r3)
    stw r8, 0x20c(r3)
    lwz r0, 0x210(r3)
    rlwinm. r0, r0, 0, 7, 7
    beq lbl_fn_8054154C_00000B78
    oris r9, r9, 0x200
lbl_fn_8054154C_00000B78:
    stw r9, 0x210(r3)
    blr
}

asm void fn_8054158C(void)
{
    nofralloc
    stwu r1, -0x370(r1)
    mflr r0
    stw r0, 0x374(r1)
    addi r11, r1, 0x260
    stfd f31, 0x360(r1)
    psq_st f31, 0x368(r1), 0, 0
    stfd f30, 0x350(r1)
    psq_st f30, 0x358(r1), 0, 0
    stfd f29, 0x340(r1)
    psq_st f29, 0x348(r1), 0, 0
    stfd f28, 0x330(r1)
    psq_st f28, 0x338(r1), 0, 0
    stfd f27, 0x320(r1)
    psq_st f27, 0x328(r1), 0, 0
    stfd f26, 0x310(r1)
    psq_st f26, 0x318(r1), 0, 0
    stfd f25, 0x300(r1)
    psq_st f25, 0x308(r1), 0, 0
    stfd f24, 0x2f0(r1)
    psq_st f24, 0x2f8(r1), 0, 0
    stfd f23, 0x2e0(r1)
    psq_st f23, 0x2e8(r1), 0, 0
    stfd f22, 0x2d0(r1)
    psq_st f22, 0x2d8(r1), 0, 0
    stfd f21, 0x2c0(r1)
    psq_st f21, 0x2c8(r1), 0, 0
    stfd f20, 0x2b0(r1)
    psq_st f20, 0x2b8(r1), 0, 0
    stfd f19, 0x2a0(r1)
    psq_st f19, 0x2a8(r1), 0, 0
    stfd f18, 0x290(r1)
    psq_st f18, 0x298(r1), 0, 0
    stfd f17, 0x280(r1)
    psq_st f17, 0x288(r1), 0, 0
    stfd f16, 0x270(r1)
    psq_st f16, 0x278(r1), 0, 0
    stfd f15, 0x260(r1)
    psq_st f15, 0x268(r1), 0, 0
    bl _savegpr_23
    fmr f24, f1
    cmpwi r5, 0x0
    lis r0, 0x4330
    fmr f25, f2
    fmr f26, f3
    stw r0, 0x220(r1)
    stw r0, 0x228(r1)
    mr r23, r4
    mr r28, r6
    mr r30, r7
    mr r29, r8
    bne lbl_fn_8054158C_00000C64
    cmpwi r6, 0x0
    bne lbl_fn_8054158C_00000C64
    lwz r3, lbl_8087F9C0
    lwz r0, 0x78(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8054158C_00001130
lbl_fn_8054158C_00000C64:
    lwz r5, lbl_8087EEE0
    lis r3, lbl_8075E0D0@ha
    lfd f2, lbl_8075E0D0@l(r3)
    mr r3, r23
    lwz r4, 0x3c(r5)
    lwz r0, 0x40(r5)
    xoris r4, r4, 0x8000
    stw r4, 0x224(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x22c(r1)
    lfd f1, 0x220(r1)
    lfd f0, 0x228(r1)
    fsubs f28, f1, f2
    fsubs f27, f0, f2
    bl fn_80686A48
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_8054158C_00001130
    mr r4, r23
    addi r3, r1, 0x20
    bl fn_80686A64
    subic. r0, r26, 0x1
    addi r4, r1, 0x20
    li r5, 0x1
    li r3, 0xa
    mtctr r0
    ble lbl_fn_8054158C_00000CFC
lbl_fn_8054158C_00000CD0:
    lhz r0, 0x0(r4)
    cmplwi r0, 0x5c
    bne lbl_fn_8054158C_00000CF4
    lhz r0, 0x2(r4)
    cmplwi r0, 0x6e
    bne lbl_fn_8054158C_00000CF4
    sth r3, 0x2(r4)
    addi r5, r5, 0x1
    sth r3, 0x0(r4)
lbl_fn_8054158C_00000CF4:
    addi r4, r4, 0x2
    bdnz lbl_fn_8054158C_00000CD0
lbl_fn_8054158C_00000CFC:
    cmpwi r5, 0x1
    ble lbl_fn_8054158C_00000D38
    subi r0, r5, 0x1
    lis r3, lbl_8075E0D0@ha
    neg r0, r0
    lfd f3, lbl_8075E0D0@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x224(r1)
    lfs f1, lbl_80887CB0
    lfd f2, 0x220(r1)
    lfs f0, lbl_80887CA4
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fmuls f29, f1, f0
    b lbl_fn_8054158C_00000D3C
lbl_fn_8054158C_00000D38:
    lfs f29, lbl_80887CA0
lbl_fn_8054158C_00000D3C:
    extrwi r0, r30, 8, 8
    stw r0, 0x22c(r1)
    extrwi r3, r30, 8, 16
    lfs f0, lbl_80887CD0
    lfd f1, 0x228(r1)
    clrlwi r0, r30, 24
    stw r3, 0x224(r1)
    lis r3, lbl_8075E0D8@ha
    lfd f5, lbl_8075E0D8@l(r3)
    fmuls f0, f0, f26
    stw r0, 0x22c(r1)
    addi r3, r1, 0x20
    lfd f2, 0x220(r1)
    fsubs f3, f1, f5
    lfd f1, 0x228(r1)
    fsubs f2, f2, f5
    lfs f4, lbl_80887CCC
    fctiwz f0, f0
    stfs f26, 0x1c(r1)
    fsubs f1, f1, f5
    addi r5, r1, 0x8
    stfd f0, 0x230(r1)
    fmuls f3, f4, f3
    fmuls f2, f4, f2
    li r31, 0x0
    fmuls f0, f4, f1
    stfs f3, 0x10(r1)
    lwz r23, 0x234(r1)
    stfs f2, 0x14(r1)
    la r4, lbl_8087E4D0
    stfs f0, 0x18(r1)
    bl fn_800DC3C8
    lis r4, lbl_8075E0D0@ha
    frsp f23, f26
    lfs f17, lbl_80887CBC
    slwi r24, r23, 24
    lfs f30, lbl_80887CA4
    mr r30, r3
    lfd f31, lbl_8075E0D0@l(r4)
    lfs f16, lbl_80887CB0
    clrlwi r25, r29, 31
    lfs f18, 0x10(r1)
    rlwinm r23, r29, 0, 30, 30
    lfs f19, lbl_80887CA0
    lfs f20, lbl_80887CD0
    lfs f21, 0x14(r1)
    lfs f22, 0x18(r1)
    b lbl_fn_8054158C_00001128
lbl_fn_8054158C_00000DFC:
    cmpwi r28, 0x0
    beq lbl_fn_8054158C_00000E18
    cmpwi r28, 0x1
    beq lbl_fn_8054158C_00000E40
    cmpwi r28, 0x2
    beq lbl_fn_8054158C_00000E48
    b lbl_fn_8054158C_00000E68
lbl_fn_8054158C_00000E18:
    lwz r3, lbl_8087EEC8
    mr r4, r30
    lfs f1, lbl_80887CB0
    li r5, 0x1
    lfs f2, lbl_80887CA0
    li r6, 0x1
    bl fn_8006EF48
    fmuls f0, f30, f1
    fmsubs f26, f28, f24, f0
    b lbl_fn_8054158C_00000E68
lbl_fn_8054158C_00000E40:
    fmuls f26, f28, f24
    b lbl_fn_8054158C_00000E68
lbl_fn_8054158C_00000E48:
    lwz r3, lbl_8087EEC8
    mr r4, r30
    lfs f1, lbl_80887CB0
    li r5, 0x1
    lfs f2, lbl_80887CA0
    li r6, 0x1
    bl fn_8006EF48
    fmsubs f26, f28, f24, f1
lbl_fn_8054158C_00000E68:
    xoris r0, r31, 0x8000
    stw r0, 0x22c(r1)
    cmpwi r25, 0x0
    addi r31, r31, 0x1
    lfd f0, 0x228(r1)
    fsubs f0, f0, f31
    fmuls f0, f16, f0
    fmadds f0, f27, f25, f0
    fadds f15, f29, f0
    beq lbl_fn_8054158C_00000FA4
    lfs f6, lbl_80887CA0
    fmr f4, f16
    fmr f5, f16
    lwz r3, lbl_8087EEB0
    fmr f7, f6
    lfs f3, lbl_80887CD4
    fmr f8, f6
    fsubs f1, f26, f17
    fsubs f2, f15, f17
    mr r4, r30
    mr r5, r24
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f6, lbl_80887CA0
    fsubs f1, f26, f17
    lfs f4, lbl_80887CB0
    fadds f2, f17, f15
    fmr f7, f6
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    fmr f8, f6
    lfs f3, lbl_80887CD4
    mr r4, r30
    mr r5, r24
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f6, lbl_80887CA0
    fadds f1, f17, f26
    lfs f4, lbl_80887CB0
    fadds f2, f17, f15
    fmr f7, f6
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    fmr f8, f6
    lfs f3, lbl_80887CD4
    mr r4, r30
    mr r5, r24
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f6, lbl_80887CA0
    fadds f1, f17, f26
    lfs f4, lbl_80887CB0
    fsubs f2, f15, f17
    fmr f7, f6
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    fmr f8, f6
    lfs f3, lbl_80887CD4
    mr r4, r30
    mr r5, r24
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    b lbl_fn_8054158C_00000FF0
lbl_fn_8054158C_00000FA4:
    cmpwi r23, 0x0
    beq lbl_fn_8054158C_00000FF0
    lfs f6, lbl_80887CA0
    fmr f4, f16
    fmr f5, f16
    lwz r3, lbl_8087EEB0
    fmr f7, f6
    lfs f3, lbl_80887CD4
    fmr f8, f6
    fadds f1, f17, f26
    fadds f2, f17, f15
    mr r4, r30
    mr r5, r24
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
lbl_fn_8054158C_00000FF0:
    fcmpo cr0, f18, f17
    cror eq, gt, eq
    bne lbl_fn_8054158C_00001004
    li r26, 0xff
    b lbl_fn_8054158C_00001024
lbl_fn_8054158C_00001004:
    fcmpo cr0, f18, f19
    cror eq, lt, eq
    bne lbl_fn_8054158C_00001018
    li r3, 0x0
    b lbl_fn_8054158C_00001020
lbl_fn_8054158C_00001018:
    fmadds f1, f20, f18, f30
    bl fn_80695D84
lbl_fn_8054158C_00001020:
    mr r26, r3
lbl_fn_8054158C_00001024:
    fcmpo cr0, f21, f17
    cror eq, gt, eq
    bne lbl_fn_8054158C_00001038
    li r27, 0xff
    b lbl_fn_8054158C_00001058
lbl_fn_8054158C_00001038:
    fcmpo cr0, f21, f19
    cror eq, lt, eq
    bne lbl_fn_8054158C_0000104C
    li r3, 0x0
    b lbl_fn_8054158C_00001054
lbl_fn_8054158C_0000104C:
    fmadds f1, f20, f21, f30
    bl fn_80695D84
lbl_fn_8054158C_00001054:
    mr r27, r3
lbl_fn_8054158C_00001058:
    fcmpo cr0, f22, f17
    cror eq, gt, eq
    bne lbl_fn_8054158C_0000106C
    li r29, 0xff
    b lbl_fn_8054158C_0000108C
lbl_fn_8054158C_0000106C:
    fcmpo cr0, f22, f19
    cror eq, lt, eq
    bne lbl_fn_8054158C_00001080
    li r3, 0x0
    b lbl_fn_8054158C_00001088
lbl_fn_8054158C_00001080:
    fmadds f1, f20, f22, f30
    bl fn_80695D84
lbl_fn_8054158C_00001088:
    mr r29, r3
lbl_fn_8054158C_0000108C:
    fcmpo cr0, f23, f17
    cror eq, gt, eq
    bne lbl_fn_8054158C_000010A0
    li r3, 0xff
    b lbl_fn_8054158C_000010BC
lbl_fn_8054158C_000010A0:
    fcmpo cr0, f23, f19
    cror eq, lt, eq
    bne lbl_fn_8054158C_000010B4
    li r3, 0x0
    b lbl_fn_8054158C_000010BC
lbl_fn_8054158C_000010B4:
    fmadds f1, f20, f23, f30
    bl fn_80695D84
lbl_fn_8054158C_000010BC:
    lfs f6, lbl_80887CA0
    slwi r4, r27, 8
    lfs f4, lbl_80887CB0
    or r5, r29, r4
    fmr f1, f26
    slwi r3, r3, 24
    slwi r0, r26, 16
    fmr f2, f15
    or r0, r3, r0
    fmr f5, f4
    fmr f7, f6
    lwz r3, lbl_8087EEB0
    fmr f8, f6
    lfs f3, lbl_80887CD4
    mr r4, r30
    or r5, r5, r0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    addi r5, r1, 0x8
    li r3, 0x0
    la r4, lbl_8087E4D0
    bl fn_800DC3C8
    mr r30, r3
lbl_fn_8054158C_00001128:
    cmpwi r30, 0x0
    bne lbl_fn_8054158C_00000DFC
lbl_fn_8054158C_00001130:
    addi r11, r1, 0x260
    psq_l f31, 0x368(r1), 0, 0
    lfd f31, 0x360(r1)
    psq_l f30, 0x358(r1), 0, 0
    lfd f30, 0x350(r1)
    psq_l f29, 0x348(r1), 0, 0
    lfd f29, 0x340(r1)
    psq_l f28, 0x338(r1), 0, 0
    lfd f28, 0x330(r1)
    psq_l f27, 0x328(r1), 0, 0
    lfd f27, 0x320(r1)
    psq_l f26, 0x318(r1), 0, 0
    lfd f26, 0x310(r1)
    psq_l f25, 0x308(r1), 0, 0
    lfd f25, 0x300(r1)
    psq_l f24, 0x2f8(r1), 0, 0
    lfd f24, 0x2f0(r1)
    psq_l f23, 0x2e8(r1), 0, 0
    lfd f23, 0x2e0(r1)
    psq_l f22, 0x2d8(r1), 0, 0
    lfd f22, 0x2d0(r1)
    psq_l f21, 0x2c8(r1), 0, 0
    lfd f21, 0x2c0(r1)
    psq_l f20, 0x2b8(r1), 0, 0
    lfd f20, 0x2b0(r1)
    psq_l f19, 0x2a8(r1), 0, 0
    lfd f19, 0x2a0(r1)
    psq_l f18, 0x298(r1), 0, 0
    lfd f18, 0x290(r1)
    psq_l f17, 0x288(r1), 0, 0
    lfd f17, 0x280(r1)
    psq_l f16, 0x278(r1), 0, 0
    lfd f16, 0x270(r1)
    psq_l f15, 0x268(r1), 0, 0
    lfd f15, 0x260(r1)
    bl _restgpr_23
    lwz r0, 0x374(r1)
    mtlr r0
    addi r1, r1, 0x370
    blr
}

asm void fn_80541BDC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x44(r1)
    lfs f2, 0x8(r5)
    stw r31, 0x3c(r1)
    mr r31, r4
    lfs f0, 0xa4(r4)
    stw r30, 0x38(r1)
    mr r30, r3
    fsubs f0, f2, f0
    lfs f5, 0x9c(r4)
    psq_st f1, 0x0(r3), 0, 0
    lfs f3, 0xa0(r4)
    lfs f6, 0x0(r3)
    lfs f4, 0x4(r3)
    fsubs f5, f6, f5
    stfs f0, 0x8(r3)
    fsubs f0, f4, f3
    lfs f1, 0xb4(r4)
    stfs f5, 0x0(r3)
    li r4, 0x79
    stfs f0, 0x4(r3)
    addi r3, r1, 0x8
    bl fn_805F8E70
    mr r4, r30
    mr r5, r30
    addi r3, r1, 0x8
    bl fn_805F93C0
    lfs f3, 0x0(r30)
    lfs f0, 0xa8(r31)
    lfs f5, 0x4(r30)
    fadds f6, f3, f0
    lfs f4, 0xac(r31)
    lfs f3, 0x8(r30)
    lfs f0, 0xb0(r31)
    fadds f4, f5, f4
    stfs f6, 0x0(r30)
    fadds f0, f3, f0
    stfs f4, 0x4(r30)
    stfs f0, 0x8(r30)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80541C98(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lfs f0, 0xb4(r4)
    li r4, 0x79
    stw r0, 0x44(r1)
    psq_l f1, 0x0(r5), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    lfs f2, 0x8(r5)
    psq_st f1, 0x0(r3), 0, 0
    fmr f1, f0
    stfs f2, 0x8(r3)
    addi r3, r1, 0x8
    bl fn_805F8E70
    mr r4, r31
    mr r5, r31
    addi r3, r1, 0x8
    bl fn_805F93C0
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80541CF4(void)
{
    nofralloc
    lfs f0, 0xb4(r3)
    fadds f1, f1, f0
    blr
}

asm void fn_80541D00(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r26, 0x28(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    li r30, 0x0
    li r26, 0x0
    b lbl_fn_80541D00_000014EC
lbl_fn_80541D00_0000131C:
    lwz r0, 0x164(r27)
    add r31, r0, r26
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    bne lbl_fn_80541D00_0000133C
    lbz r0, 0x8(r31)
    clrlwi r0, r0, 25
    b lbl_fn_80541D00_00001340
lbl_fn_80541D00_0000133C:
    lwz r0, 0xc(r31)
lbl_fn_80541D00_00001340:
    cmpwi r0, 0x0
    beq lbl_fn_80541D00_000014E4
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    bne lbl_fn_80541D00_0000135C
    addi r3, r31, 0x9
    b lbl_fn_80541D00_00001360
lbl_fn_80541D00_0000135C:
    lwz r3, 0x10(r31)
lbl_fn_80541D00_00001360:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x21
    beq lbl_fn_80541D00_000014E4
    lwz r0, 0x8(r31)
    li r5, 0x0
    srwi. r0, r0, 31
    bne lbl_fn_80541D00_00001384
    addi r4, r31, 0x9
    b lbl_fn_80541D00_00001388
lbl_fn_80541D00_00001384:
    lwz r4, 0x10(r31)
lbl_fn_80541D00_00001388:
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    bne lbl_fn_80541D00_0000139C
    addi r3, r31, 0x9
    b lbl_fn_80541D00_000013A0
lbl_fn_80541D00_0000139C:
    lwz r3, 0x10(r31)
lbl_fn_80541D00_000013A0:
    lbz r3, 0x0(r3)
    lbz r0, 0x1(r4)
    extsb r3, r3
    slwi r3, r3, 8
    extsb r0, r0
    or r0, r3, r0
    clrlwi r0, r0, 16
    cmpwi r0, 0x656d
    beq lbl_fn_80541D00_000013D8
    cmpwi r0, 0x6672
    beq lbl_fn_80541D00_000013E8
    cmpwi r0, 0x6e70
    beq lbl_fn_80541D00_000013F8
    b lbl_fn_80541D00_00001404
lbl_fn_80541D00_000013D8:
    subi r0, r28, 0x2
    cntlzw r0, r0
    srwi r5, r0, 5
    b lbl_fn_80541D00_00001404
lbl_fn_80541D00_000013E8:
    subi r0, r28, 0x3
    cntlzw r0, r0
    srwi r5, r0, 5
    b lbl_fn_80541D00_00001404
lbl_fn_80541D00_000013F8:
    subi r0, r28, 0x1
    cntlzw r0, r0
    srwi r5, r0, 5
lbl_fn_80541D00_00001404:
    cmpwi r5, 0x0
    beq lbl_fn_80541D00_000014E4
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x20
    bl memset
    addi r3, r1, 0x8
    li r5, 0x0
    li r6, 0x2
    b lbl_fn_80541D00_000014A8
lbl_fn_80541D00_0000142C:
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    bne lbl_fn_80541D00_00001440
    addi r4, r31, 0x9
    b lbl_fn_80541D00_00001444
lbl_fn_80541D00_00001440:
    lwz r4, 0x10(r31)
lbl_fn_80541D00_00001444:
    lbzx r0, r4, r6
    extsb r0, r0
    cmpwi r0, 0x30
    blt lbl_fn_80541D00_000014A4
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    bne lbl_fn_80541D00_00001468
    addi r4, r31, 0x9
    b lbl_fn_80541D00_0000146C
lbl_fn_80541D00_00001468:
    lwz r4, 0x10(r31)
lbl_fn_80541D00_0000146C:
    lbzx r0, r4, r6
    extsb r0, r0
    cmpwi r0, 0x39
    bgt lbl_fn_80541D00_000014A4
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    bne lbl_fn_80541D00_00001490
    addi r4, r31, 0x9
    b lbl_fn_80541D00_00001494
lbl_fn_80541D00_00001490:
    lwz r4, 0x10(r31)
lbl_fn_80541D00_00001494:
    lbzx r0, r4, r6
    addi r5, r5, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
lbl_fn_80541D00_000014A4:
    addi r6, r6, 0x1
lbl_fn_80541D00_000014A8:
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80541D00_000014BC
    lwz r0, 0xc(r31)
    b lbl_fn_80541D00_000014C4
lbl_fn_80541D00_000014BC:
    lbz r0, 0x8(r31)
    clrlwi r0, r0, 25
lbl_fn_80541D00_000014C4:
    cmpw r6, r0
    blt lbl_fn_80541D00_0000142C
    addi r3, r1, 0x8
    bl fn_80684600
    cmpw r3, r29
    bne lbl_fn_80541D00_000014E4
    li r3, 0x1
    b lbl_fn_80541D00_000014FC
lbl_fn_80541D00_000014E4:
    addi r30, r30, 0x1
    addi r26, r26, 0x1c0
lbl_fn_80541D00_000014EC:
    lwz r0, 0x168(r27)
    cmpw r30, r0
    blt lbl_fn_80541D00_0000131C
    li r3, 0x0
lbl_fn_80541D00_000014FC:
    lmw r26, 0x28(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80541F1C(void)
{
    nofralloc
    li r6, 0x0
    li r4, 0x0
    b lbl_fn_80541F1C_00001538
lbl_fn_80541F1C_0000151C:
    lwz r0, 0x164(r3)
    addi r6, r6, 0x1
    add r5, r0, r4
    addi r4, r4, 0x1c0
    lwz r0, 0x18(r5)
    oris r0, r0, 0x100
    stw r0, 0x18(r5)
lbl_fn_80541F1C_00001538:
    lwz r0, 0x168(r3)
    cmpw r6, r0
    blt lbl_fn_80541F1C_0000151C
    li r9, 0x0
    li r4, 0x0
    b lbl_fn_80541F1C_00001634
lbl_fn_80541F1C_00001550:
    cmpwi r9, 0x0
    li r0, 0x0
    blt lbl_fn_80541F1C_00001568
    cmpw r9, r5
    bge lbl_fn_80541F1C_00001568
    li r0, 0x1
lbl_fn_80541F1C_00001568:
    cmpwi r0, 0x0
    beq lbl_fn_80541F1C_0000157C
    lwz r5, 0xb8(r3)
    lwzx r10, r5, r4
    b lbl_fn_80541F1C_00001580
lbl_fn_80541F1C_0000157C:
    li r10, 0x0
lbl_fn_80541F1C_00001580:
    li r11, 0x0
    li r5, 0x0
    b lbl_fn_80541F1C_00001620
lbl_fn_80541F1C_0000158C:
    cmpwi r11, 0x0
    li r0, 0x0
    blt lbl_fn_80541F1C_000015A4
    cmpw r11, r6
    bge lbl_fn_80541F1C_000015A4
    li r0, 0x1
lbl_fn_80541F1C_000015A4:
    cmpwi r0, 0x0
    beq lbl_fn_80541F1C_000015B8
    lwz r6, 0x3c(r10)
    lwzx r7, r6, r5
    b lbl_fn_80541F1C_000015BC
lbl_fn_80541F1C_000015B8:
    li r7, 0x0
lbl_fn_80541F1C_000015BC:
    lwz r0, 0xc(r7)
    cmpwi r0, 0x3
    bne lbl_fn_80541F1C_00001618
    lwz r0, 0x168(r3)
    li r6, 0x0
    lwz r8, 0x10(r7)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80541F1C_00001600
lbl_fn_80541F1C_000015E0:
    lwz r0, 0x164(r3)
    add r7, r0, r6
    lwz r0, 0x14(r7)
    cmpw r8, r0
    bne lbl_fn_80541F1C_000015F8
    b lbl_fn_80541F1C_00001604
lbl_fn_80541F1C_000015F8:
    addi r6, r6, 0x1c0
    bdnz lbl_fn_80541F1C_000015E0
lbl_fn_80541F1C_00001600:
    li r7, 0x0
lbl_fn_80541F1C_00001604:
    cmpwi r7, 0x0
    beq lbl_fn_80541F1C_00001618
    lwz r0, 0x18(r7)
    rlwinm r0, r0, 0, 8, 6
    stw r0, 0x18(r7)
lbl_fn_80541F1C_00001618:
    addi r11, r11, 0x1
    addi r5, r5, 0x8
lbl_fn_80541F1C_00001620:
    lwz r6, 0x40(r10)
    cmpw r11, r6
    blt lbl_fn_80541F1C_0000158C
    addi r9, r9, 0x1
    addi r4, r4, 0x8
lbl_fn_80541F1C_00001634:
    lwz r5, 0xbc(r3)
    cmpw r9, r5
    blt lbl_fn_80541F1C_00001550
    blr
}

asm void fn_80542050(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_14
    lfs f0, lbl_80887CA0
    li r23, 0x0
    lis r26, __files@ha
    lis r25, lbl_8075E148@ha
    lis r21, lbl_807C7030@ha
    stw r23, 0x44(r1)
    mr r15, r3
    mr r14, r4
    stw r23, 0x4c(r1)
    mr r16, r5
    addi r22, r1, 0x14
    addi r21, r21, lbl_807C7030@l
    stw r23, 0x54(r1)
    addi r25, r25, lbl_8075E148@l
    addi r26, r26, __files@l
    addi r29, r1, 0x28
    stw r23, 0x5c(r1)
    addi r18, r1, 0x2c
    li r17, 0x0
    li r31, 0x0
    stw r23, 0x48(r1)
    lis r30, 0xcccd
    lis r24, 0x1555
    lis r27, 0x71c
    stfs f0, 0x50(r1)
    lis r28, 0xe39
    stw r23, 0x58(r1)
    stw r23, 0x60(r1)
    stw r23, 0x20(r1)
    stw r23, 0x24(r1)
    stw r23, 0x28(r1)
    b lbl_fn_80542050_000019D8
lbl_fn_80542050_000016D8:
    cmpwi r17, 0x0
    blt lbl_fn_80542050_00001708
    lwz r0, 0x4(r16)
    cmpw r17, r0
    bge lbl_fn_80542050_00001708
    lwz r0, 0x0(r16)
    add r3, r0, r31
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r22), 0, 0
    stfs f2, 0x1c(r1)
    b lbl_fn_80542050_00001718
lbl_fn_80542050_00001708:
    psq_l f1, 0x0(r21), 0, 0
    lfs f2, 0x8(r21)
    psq_st f1, 0x0(r22), 0, 0
    stfs f2, 0x1c(r1)
lbl_fn_80542050_00001718:
    lwz r0, 0x24(r1)
    lwz r19, 0x28(r1)
    cmplw r0, r19
    bge lbl_fn_80542050_00001758
    mulli r0, r0, 0xc
    lwz r3, 0x20(r1)
    add. r3, r3, r0
    beq lbl_fn_80542050_00001748
    psq_l f1, 0x0(r22), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r22)
    stfs f2, 0x8(r3)
lbl_fn_80542050_00001748:
    lwz r3, 0x24(r1)
    addi r0, r3, 0x1
    stw r0, 0x24(r1)
    b lbl_fn_80542050_000019D0
lbl_fn_80542050_00001758:
    addi r0, r24, 0x5555
    subf r0, r19, r0
    cmplwi r0, 0x1
    bge lbl_fn_80542050_0000177C
    addi r4, r25, 0x8b
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80542050_0000177C:
    addi r0, r27, 0x71c7
    cmplw r19, r0
    bge lbl_fn_80542050_000017B0
    addi r3, r19, 0x1
    subi r4, r30, 0x3333
    slwi r0, r3, 2
    subf r0, r3, r0
    mulhwu r0, r4, r0
    srwi r0, r0, 2
    cmplwi r0, 0x1
    bge lbl_fn_80542050_000017CC
    b lbl_fn_80542050_000017CC
    b lbl_fn_80542050_000017CC
lbl_fn_80542050_000017B0:
    subi r0, r28, 0x1c72
    cmplw r19, r0
    bge lbl_fn_80542050_000017CC
    addi r0, r19, 0x1
    srwi r0, r0, 1
    cmplwi r0, 0x1
    cmplwi r0, 0x1
lbl_fn_80542050_000017CC:
    lwz r3, 0x24(r1)
    addi r0, r24, 0x5555
    lwz r19, 0x28(r1)
    addi r3, r3, 0x1
    stw r23, 0x2c(r1)
    subf r3, r19, r3
    subf r0, r19, r0
    cmplw r3, r0
    stw r23, 0x30(r1)
    stw r23, 0x34(r1)
    stw r29, 0x38(r1)
    stw r23, 0x3c(r1)
    stw r3, 0x10(r1)
    ble lbl_fn_80542050_00001818
    addi r4, r25, 0x8b
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80542050_00001818:
    addi r0, r27, 0x71c7
    cmplw r19, r0
    bge lbl_fn_80542050_00001860
    addi r4, r19, 0x1
    subi r5, r30, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x10(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_80542050_00001854
    addi r3, r1, 0x10
lbl_fn_80542050_00001854:
    lwz r0, 0x0(r3)
    add r20, r19, r0
    b lbl_fn_80542050_0000189C
lbl_fn_80542050_00001860:
    subi r0, r28, 0x1c72
    cmplw r19, r0
    bge lbl_fn_80542050_00001898
    addi r3, r19, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80542050_0000188C
    addi r3, r1, 0x10
lbl_fn_80542050_0000188C:
    lwz r0, 0x0(r3)
    add r20, r19, r0
    b lbl_fn_80542050_0000189C
lbl_fn_80542050_00001898:
    addi r20, r24, 0x5555
lbl_fn_80542050_0000189C:
    addi r0, r24, 0x5555
    cmplw r20, r0
    ble lbl_fn_80542050_000018BC
    addi r4, r25, 0x8b
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80542050_000018BC:
    mulli r3, r20, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r19, r3
    bne lbl_fn_80542050_000018E8
    lis r4, lbl_80788D00@ha
    addi r3, r26, 0xa0
    addi r4, r4, lbl_80788D00@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80542050_000018E8:
    lwz r5, 0x24(r1)
    lwz r0, 0x30(r1)
    mulli r4, r5, 0xc
    stw r19, 0x2c(r1)
    stw r20, 0x34(r1)
    mulli r3, r0, 0xc
    add r0, r19, r4
    stw r5, 0x3c(r1)
    add. r3, r3, r0
    beq lbl_fn_80542050_00001920
    psq_l f1, 0x0(r22), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r22)
    stfs f2, 0x8(r3)
lbl_fn_80542050_00001920:
    lwz r0, 0x24(r1)
    lwz r3, 0x3c(r1)
    lwz r4, 0x30(r1)
    mulli r5, r0, 0xc
    lwz r0, 0x20(r1)
    addi r6, r4, 0x1
    stw r6, 0x30(r1)
    mulli r3, r3, 0xc
    lwz r4, 0x2c(r1)
    add r6, r0, r5
    add r5, r4, r3
    b lbl_fn_80542050_00001984
lbl_fn_80542050_00001950:
    subic. r5, r5, 0xc
    subi r6, r6, 0xc
    beq lbl_fn_80542050_0000196C
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
lbl_fn_80542050_0000196C:
    lwz r4, 0x3c(r1)
    lwz r3, 0x30(r1)
    subi r4, r4, 0x1
    stw r4, 0x3c(r1)
    addi r3, r3, 0x1
    stw r3, 0x30(r1)
lbl_fn_80542050_00001984:
    cmplw r0, r6
    blt lbl_fn_80542050_00001950
    lwz r0, 0x30(r1)
    cmpwi r18, 0x0
    lwz r6, 0x28(r1)
    lwz r5, 0x34(r1)
    lwz r3, 0x20(r1)
    lwz r4, 0x2c(r1)
    stw r5, 0x28(r1)
    stw r6, 0x34(r1)
    stw r4, 0x20(r1)
    stw r3, 0x2c(r1)
    stw r0, 0x24(r1)
    stw r23, 0x30(r1)
    beq lbl_fn_80542050_000019D0
    cmpwi r3, 0x0
    beq lbl_fn_80542050_000019D0
    stw r23, 0x30(r1)
    bl dtor_80084684
lbl_fn_80542050_000019D0:
    addi r17, r17, 0x1
    addi r31, r31, 0xc
lbl_fn_80542050_000019D8:
    lwz r0, 0x4(r16)
    cmpw r17, r0
    blt lbl_fn_80542050_000016D8
    lwz r18, 0x24(r1)
    cmpwi r18, 0x0
    beq lbl_fn_80542050_00001B90
    addi r16, r1, 0x44
    lwz r17, 0x20(r1)
    mr r3, r16
    bl fn_8048A290
    mr r3, r16
    mr r4, r18
    bl fn_8048A584
    cmpwi r18, 0x0
    li r3, 0x0
    ble lbl_fn_80542050_00001AD8
    srwi. r0, r18, 2
    mtctr r0
    beq lbl_fn_80542050_00001AB0
lbl_fn_80542050_00001A24:
    add r4, r17, r3
    lwz r0, 0x44(r1)
    lfs f2, 0x8(r4)
    add r5, r0, r3
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    addi r3, r3, 0xc
    add r4, r17, r3
    stfs f2, 0x8(r5)
    lwz r0, 0x44(r1)
    lfs f2, 0x8(r4)
    add r5, r0, r3
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    addi r3, r3, 0xc
    add r4, r17, r3
    stfs f2, 0x8(r5)
    lwz r0, 0x44(r1)
    lfs f2, 0x8(r4)
    add r5, r0, r3
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    addi r3, r3, 0xc
    add r4, r17, r3
    stfs f2, 0x8(r5)
    lwz r0, 0x44(r1)
    lfs f2, 0x8(r4)
    add r5, r0, r3
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    addi r3, r3, 0xc
    stfs f2, 0x8(r5)
    bdnz lbl_fn_80542050_00001A24
    andi. r18, r18, 0x3
    beq lbl_fn_80542050_00001AD8
lbl_fn_80542050_00001AB0:
    mtctr r18
lbl_fn_80542050_00001AB4:
    add r4, r17, r3
    lwz r0, 0x44(r1)
    lfs f2, 0x8(r4)
    add r5, r0, r3
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    addi r3, r3, 0xc
    stfs f2, 0x8(r5)
    bdnz lbl_fn_80542050_00001AB4
lbl_fn_80542050_00001AD8:
    lwz r4, 0x48(r1)
    cmpwi r4, 0x4
    bge lbl_fn_80542050_00001AEC
    li r0, 0x0
    b lbl_fn_80542050_00001B14
lbl_fn_80542050_00001AEC:
    lis r3, 0x5555
    subi r4, r4, 0x1
    addi r0, r3, 0x5556
    mulhw r3, r0, r4
    srwi r0, r3, 31
    add r0, r3, r0
    mulli r0, r0, 0x3
    subf r0, r0, r4
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_80542050_00001B14:
    cmpwi r0, 0x0
    beq lbl_fn_80542050_00001B90
    lwz r4, 0x48(r1)
    lis r3, 0xaaab
    lfs f0, lbl_80887CA0
    subi r3, r3, 0x5555
    subi r0, r4, 0x1
    stfs f0, 0x50(r1)
    mulhwu r0, r3, r0
    addi r3, r16, 0x10
    srwi r4, r0, 1
    stw r4, 0x60(r1)
    bl fn_8032BE88
    li r19, 0x0
    li r17, 0x0
    b lbl_fn_80542050_00001B84
lbl_fn_80542050_00001B54:
    lwz r18, 0x54(r1)
    mr r3, r16
    mr r4, r19
    bl fn_8048A968
    stfsx f1, r18, r17
    addi r19, r19, 0x1
    lwz r3, 0x54(r1)
    lfs f3, 0x50(r1)
    lfsx f0, r3, r17
    addi r17, r17, 0x4
    fadds f0, f3, f0
    stfs f0, 0x50(r1)
lbl_fn_80542050_00001B84:
    lwz r0, 0x60(r1)
    cmpw r19, r0
    blt lbl_fn_80542050_00001B54
lbl_fn_80542050_00001B90:
    stw r14, 0x40(r1)
    lwz r3, 0x188(r15)
    lwz r0, 0x18c(r15)
    cmplw r3, r0
    bge lbl_fn_80542050_00001BCC
    mulli r0, r3, 0x24
    lwz r4, 0x184(r15)
    addi r3, r15, 0x18c
    addi r5, r1, 0x40
    add r4, r4, r0
    bl fn_80542688
    lwz r3, 0x188(r15)
    addi r0, r3, 0x1
    stw r0, 0x188(r15)
    b lbl_fn_80542050_00001BD8
lbl_fn_80542050_00001BCC:
    addi r3, r15, 0x184
    addi r4, r1, 0x40
    bl fn_805428AC
lbl_fn_80542050_00001BD8:
    addic. r0, r1, 0x20
    beq lbl_fn_80542050_00001C00
    beq lbl_fn_80542050_00001C00
    lwz r3, 0x20(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80542050_00001C00
    lwz r0, 0x24(r1)
    subf r0, r0, r0
    stw r0, 0x24(r1)
    bl dtor_80084684
lbl_fn_80542050_00001C00:
    addic. r14, r1, 0x44
    beq lbl_fn_80542050_00001C64
    addic. r4, r14, 0x10
    beq lbl_fn_80542050_00001C38
    beq lbl_fn_80542050_00001C38
    beq lbl_fn_80542050_00001C38
    beq lbl_fn_80542050_00001C38
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80542050_00001C38
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80542050_00001C38:
    cmpwi r14, 0x0
    beq lbl_fn_80542050_00001C64
    beq lbl_fn_80542050_00001C64
    beq lbl_fn_80542050_00001C64
    lwz r3, 0x44(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80542050_00001C64
    lwz r0, 0x48(r1)
    subf r0, r0, r0
    stw r0, 0x48(r1)
    bl dtor_80084684
lbl_fn_80542050_00001C64:
    addi r11, r1, 0xb0
    bl _restgpr_14
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}
