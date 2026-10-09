#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_18(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _savegpr_14(void);
extern void _savegpr_18(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void fn_80101138(void);
extern void fn_8010EE78(void);
extern void fn_8010EFC8(void);
extern void fn_8010F26C(void);
extern void fn_8010F41C(void);
extern void fn_80148B38(void);
extern void fn_8014DEE4(void);
extern void fn_8014EEC4(void);
extern void fn_80232B7C(void);
extern void fn_80237784(void);
extern void fn_8023779C(void);
extern void fn_8023B71C(void);
extern void fn_8023B724(void);
extern void fn_8056A9E8(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F9920(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_8075FE68[];
extern u8 lbl_8075FE70[];

/* Small data declarations */
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F4A0;
extern u32 lbl_80888020;
extern u32 lbl_80888024;
extern u32 lbl_80888034;
extern u32 lbl_80888038;
extern u32 lbl_8088803C;
extern u32 lbl_80888040;
extern u32 lbl_8088804C;
extern u32 lbl_80888050;

/* Function declarations */
void fn_8056D070(void);
void fn_8056D440(void);
void fn_8056D610(void);
void fn_8056D8CC(void);
void fn_8056DAD0(void);
void fn_8056E91C(void);

asm void fn_8056D070(void)
{
    nofralloc
    stwu r1, -0x840(r1)
    mflr r0
    stw r0, 0x844(r1)
    li r0, 0x0
    stmw r23, 0x81c(r1)
    addis r30, r3, 0x5
    mr r24, r30
    mr r25, r3
    addi r31, r1, 0xc
    li r23, -0x1
    addi r30, r30, 0x2188
    stw r0, 0x8(r1)
    b lbl_fn_8056D070_00000274
lbl_fn_8056D070_00000034:
    lwz r29, 0x0(r30)
    lwz r0, 0x4(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8056D070_00000050
    cmpwi r0, 0x1
    beq lbl_fn_8056D070_000000F8
    b lbl_fn_8056D070_00000270
lbl_fn_8056D070_00000050:
    lwz r3, 0x8(r29)
    bl fn_8023779C
    cmpwi r3, 0x0
    beq lbl_fn_8056D070_000000D0
    lwz r3, 0x8(r29)
    bl fn_8023779C
    lwz r0, 0x0(r29)
    lwz r4, 0x4(r25)
    add r3, r0, r3
    subi r0, r4, 0x5a
    cmpw r3, r0
    bge lbl_fn_8056D070_000000D0
    addis r4, r25, 0x5
    stw r23, 0x0(r29)
    addi r0, r4, 0x2188
    subf r0, r0, r30
    srawi r0, r0, 2
    addze r5, r0
    slwi r0, r5, 2
    add r6, r25, r0
    b lbl_fn_8056D070_000000B8
lbl_fn_8056D070_000000A4:
    addis r3, r6, 0x5
    addi r6, r6, 0x4
    lwz r0, 0x218c(r3)
    addi r5, r5, 0x1
    stw r0, 0x2188(r3)
lbl_fn_8056D070_000000B8:
    lwz r3, 0x2184(r4)
    subi r0, r3, 0x1
    cmplw r5, r0
    blt lbl_fn_8056D070_000000A4
    stw r0, 0x2184(r4)
    b lbl_fn_8056D070_00000274
lbl_fn_8056D070_000000D0:
    lwz r0, 0x8(r1)
    addi r3, r1, 0xc
    slwi r0, r0, 2
    add. r3, r3, r0
    beq lbl_fn_8056D070_000000E8
    stw r29, 0x0(r3)
lbl_fn_8056D070_000000E8:
    lwz r3, 0x8(r1)
    addi r0, r3, 0x1
    stw r0, 0x8(r1)
    b lbl_fn_8056D070_00000270
lbl_fn_8056D070_000000F8:
    lwz r3, 0x4(r25)
    lwz r4, 0x0(r29)
    subi r0, r3, 0x5a
    cmpw r4, r0
    bge lbl_fn_8056D070_00000270
    addi r27, r1, 0xc
    li r28, 0x1
    b lbl_fn_8056D070_00000250
lbl_fn_8056D070_00000118:
    lwz r26, 0x0(r27)
    lwz r0, 0x0(r26)
    cmpwi r0, 0x0
    blt lbl_fn_8056D070_00000250
    lwz r4, 0x8(r29)
    cmpwi r4, 0x0
    beq lbl_fn_8056D070_00000148
    lwz r3, 0x8(r26)
    subf r3, r3, r4
    cntlzw r3, r3
    srwi r6, r3, 5
    b lbl_fn_8056D070_000001C8
lbl_fn_8056D070_00000148:
    lwz r4, 0x5c(r29)
    cmpwi r4, 0x0
    beq lbl_fn_8056D070_00000168
    lwz r3, 0x5c(r26)
    subf r3, r3, r4
    cntlzw r3, r3
    srwi r6, r3, 5
    b lbl_fn_8056D070_000001C8
lbl_fn_8056D070_00000168:
    lwz r4, 0x4c(r29)
    cmpwi r4, 0x0
    beq lbl_fn_8056D070_00000188
    lwz r3, 0x4c(r26)
    subf r3, r3, r4
    cntlzw r3, r3
    srwi r6, r3, 5
    b lbl_fn_8056D070_000001C8
lbl_fn_8056D070_00000188:
    lwz r4, 0x50(r26)
    li r6, 0x0
    lwz r3, 0x50(r29)
    cmplw r4, r3
    bne lbl_fn_8056D070_000001C8
    lwz r5, 0x54(r29)
    li r4, 0x1
    lwz r3, 0x54(r26)
    cmpw r3, r5
    beq lbl_fn_8056D070_000001BC
    cmpwi r5, -0x2
    beq lbl_fn_8056D070_000001BC
    li r4, 0x0
lbl_fn_8056D070_000001BC:
    cmpwi r4, 0x0
    beq lbl_fn_8056D070_000001C8
    li r6, 0x1
lbl_fn_8056D070_000001C8:
    cmpwi r6, 0x0
    beq lbl_fn_8056D070_0000024C
    lwz r3, 0x60(r29)
    li r28, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_8056D070_00000208
    lwz r4, 0x0(r29)
    lwz r3, 0x8(r26)
    subf r4, r0, r4
    bl fn_80237784
    lwz r0, 0x0(r26)
    lwz r4, 0x4(r25)
    add r3, r0, r3
    subi r0, r4, 0x5a
    cmpw r3, r0
    bge lbl_fn_8056D070_0000024C
lbl_fn_8056D070_00000208:
    subf r0, r31, r27
    addi r5, r1, 0x8
    srawi r0, r0, 2
    addze r4, r0
    slwi r0, r4, 2
    add r5, r5, r0
    b lbl_fn_8056D070_00000230
lbl_fn_8056D070_00000224:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    stwu r0, 0x4(r5)
lbl_fn_8056D070_00000230:
    lwz r3, 0x8(r1)
    subi r0, r3, 0x1
    cmplw r4, r0
    blt lbl_fn_8056D070_00000224
    stw r0, 0x8(r1)
    stw r23, 0x0(r26)
    b lbl_fn_8056D070_00000250
lbl_fn_8056D070_0000024C:
    addi r27, r27, 0x4
lbl_fn_8056D070_00000250:
    lwz r0, 0x8(r1)
    slwi r0, r0, 2
    add r0, r31, r0
    cmplw r27, r0
    bne lbl_fn_8056D070_00000118
    cmpwi r28, 0x0
    beq lbl_fn_8056D070_00000270
    stw r23, 0x0(r29)
lbl_fn_8056D070_00000270:
    addi r30, r30, 0x4
lbl_fn_8056D070_00000274:
    lwz r0, 0x2184(r24)
    slwi r0, r0, 2
    add r3, r24, r0
    addi r0, r3, 0x2188
    cmplw r30, r0
    bne lbl_fn_8056D070_00000034
    lwz r0, 0x4(r25)
    addi r26, r24, 0x2188
    stw r0, 0x2990(r24)
    addis r27, r25, 0x5
    b lbl_fn_8056D070_00000388
lbl_fn_8056D070_000002A0:
    lwz r23, 0x0(r26)
    lwz r0, 0x0(r23)
    cmpwi r0, 0x0
    bge lbl_fn_8056D070_000002FC
    addis r4, r25, 0x5
    addi r0, r4, 0x2188
    subf r0, r0, r26
    srawi r0, r0, 2
    addze r5, r0
    slwi r0, r5, 2
    add r6, r25, r0
    b lbl_fn_8056D070_000002E4
lbl_fn_8056D070_000002D0:
    addis r3, r6, 0x5
    addi r6, r6, 0x4
    lwz r0, 0x218c(r3)
    addi r5, r5, 0x1
    stw r0, 0x2188(r3)
lbl_fn_8056D070_000002E4:
    lwz r3, 0x2184(r4)
    subi r0, r3, 0x1
    cmplw r5, r0
    blt lbl_fn_8056D070_000002D0
    stw r0, 0x2184(r4)
    b lbl_fn_8056D070_00000388
lbl_fn_8056D070_000002FC:
    lwz r0, 0x4(r23)
    cmpwi r0, 0x0
    bne lbl_fn_8056D070_00000384
    lwz r3, 0x8(r23)
    bl fn_8023779C
    cmpwi r3, 0x0
    bne lbl_fn_8056D070_00000364
    lwz r3, 0x4(r25)
    lwz r4, 0x0(r23)
    subi r5, r3, 0x3c
    cmpw r4, r5
    mr r0, r5
    ble lbl_fn_8056D070_00000334
    mr r0, r4
lbl_fn_8056D070_00000334:
    addis r3, r25, 0x5
    lwz r3, 0x2990(r3)
    cmpw r0, r3
    bge lbl_fn_8056D070_00000354
    cmpw r4, r5
    ble lbl_fn_8056D070_00000358
    mr r5, r4
    b lbl_fn_8056D070_00000358
lbl_fn_8056D070_00000354:
    mr r5, r3
lbl_fn_8056D070_00000358:
    addis r3, r25, 0x5
    stw r5, 0x2990(r3)
    b lbl_fn_8056D070_00000384
lbl_fn_8056D070_00000364:
    addis r3, r25, 0x5
    lwz r0, 0x0(r23)
    lwz r4, 0x2990(r3)
    cmpw r0, r4
    bge lbl_fn_8056D070_0000037C
    mr r4, r0
lbl_fn_8056D070_0000037C:
    addis r3, r25, 0x5
    stw r4, 0x2990(r3)
lbl_fn_8056D070_00000384:
    addi r26, r26, 0x4
lbl_fn_8056D070_00000388:
    lwz r0, 0x2184(r27)
    slwi r0, r0, 2
    add r3, r27, r0
    addi r0, r3, 0x2188
    cmplw r26, r0
    bne lbl_fn_8056D070_000002A0
    lwz r3, 0x4(r25)
    lwz r0, 0x2990(r27)
    subf r0, r0, r3
    cmpwi r0, 0x12c
    ble lbl_fn_8056D070_000003BC
    subi r0, r3, 0x12c
    stw r0, 0x2990(r27)
lbl_fn_8056D070_000003BC:
    lmw r23, 0x81c(r1)
    lwz r0, 0x844(r1)
    mtlr r0
    addi r1, r1, 0x840
    blr
}

asm void fn_8056D440(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_25
    lwz r3, lbl_8087F4A0
    mr r27, r4
    mr r28, r5
    addi r25, r1, 0x10
    lwz r31, 0x48(r3)
    li r26, 0x6
    b lbl_fn_8056D440_00000580
lbl_fn_8056D440_00000400:
    lbz r0, 0x1555(r27)
    extsb r0, r0
    cmpwi r0, 0x3c
    bge lbl_fn_8056D440_00000588
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8056D440_0000057C
    lwz r0, 0x9c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8056D440_0000057C
    lbz r0, 0x1555(r27)
    addi r4, r30, 0x8
    addi r5, r1, 0x10
    extsb r0, r0
    mulli r0, r0, 0x38
    add r6, r27, r0
    stw r31, 0x834(r6)
    addi r29, r6, 0x834
    stw r3, 0x838(r6)
    mr r3, r28
    lbz r6, 0x1555(r27)
    addi r0, r6, 0x1
    stb r0, 0x1555(r27)
    bl fn_805F89F0
    li r7, 0x0
    mtctr r26
lbl_fn_8056D440_0000047C:
    extlwi r5, r7, 28, 2
    clrlslwi r4, r7, 30, 2
    add r0, r25, r5
    clrlwi r8, r7, 30
    lfsx f0, r4, r0
    srwi r5, r7, 2
    stfs f0, 0x8(r1)
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    bne lbl_fn_8056D440_000004AC
    li r6, 0x0
    b lbl_fn_8056D440_000004DC
lbl_fn_8056D440_000004AC:
    extrwi r3, r4, 8, 1
    subic. r3, r3, 0x70
    bge lbl_fn_8056D440_000004C0
    li r6, 0x0
    b lbl_fn_8056D440_000004DC
lbl_fn_8056D440_000004C0:
    cmpwi r3, 0x1f
    ble lbl_fn_8056D440_000004CC
    li r3, 0x1f
lbl_fn_8056D440_000004CC:
    rlwinm r0, r4, 16, 16, 16
    rlwimi r0, r3, 10, 17, 21
    rlwimi r0, r4, 19, 22, 31
    extsh r6, r0
lbl_fn_8056D440_000004DC:
    slwi r0, r5, 3
    addi r7, r7, 0x1
    slwi r3, r8, 1
    add r0, r29, r0
    extlwi r5, r7, 28, 2
    add r3, r3, r0
    clrlslwi r4, r7, 30, 2
    add r0, r25, r5
    sth r6, 0x8(r3)
    srwi r5, r7, 2
    clrlwi r8, r7, 30
    lfsx f0, r4, r0
    stfs f0, 0x8(r1)
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    bne lbl_fn_8056D440_00000524
    li r6, 0x0
    b lbl_fn_8056D440_00000554
lbl_fn_8056D440_00000524:
    extrwi r3, r4, 8, 1
    subic. r3, r3, 0x70
    bge lbl_fn_8056D440_00000538
    li r6, 0x0
    b lbl_fn_8056D440_00000554
lbl_fn_8056D440_00000538:
    cmpwi r3, 0x1f
    ble lbl_fn_8056D440_00000544
    li r3, 0x1f
lbl_fn_8056D440_00000544:
    rlwinm r0, r4, 16, 16, 16
    rlwimi r0, r3, 10, 17, 21
    rlwimi r0, r4, 19, 22, 31
    extsh r6, r0
lbl_fn_8056D440_00000554:
    slwi r0, r5, 3
    slwi r3, r8, 1
    add r0, r29, r0
    addi r7, r7, 0x1
    add r3, r3, r0
    sth r6, 0x8(r3)
    bdnz lbl_fn_8056D440_0000047C
    mr r3, r29
    mr r4, r30
    bl fn_8056D610
lbl_fn_8056D440_0000057C:
    lwz r31, 0x5c(r31)
lbl_fn_8056D440_00000580:
    cmpwi r31, 0x0
    bne lbl_fn_8056D440_00000400
lbl_fn_8056D440_00000588:
    addi r11, r1, 0x60
    bl _restgpr_25
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8056D610(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lfs f0, lbl_80888024
    lwz r0, 0x22c(r4)
    sth r0, 0x28(r3)
    fmr f3, f0
    lfs f12, lbl_80888020
    fmr f4, f0
    lwz r0, 0x230(r4)
    fmr f5, f0
    stw r0, 0x20(r3)
    fmr f6, f12
    lfs f1, 0x234(r4)
    fmr f7, f0
    stfs f1, 0x10(r1)
    fmr f8, f0
    fmr f9, f12
    lwz r6, 0x10(r1)
    fmr f10, f0
    fmr f11, f0
    cmpwi r6, 0x0
    bne lbl_fn_8056D610_000005FC
    li r0, 0x0
    b lbl_fn_8056D610_0000062C
lbl_fn_8056D610_000005FC:
    extrwi r5, r6, 8, 1
    subic. r5, r5, 0x70
    bge lbl_fn_8056D610_00000610
    li r0, 0x0
    b lbl_fn_8056D610_0000062C
lbl_fn_8056D610_00000610:
    cmpwi r5, 0x1f
    ble lbl_fn_8056D610_0000061C
    li r5, 0x1f
lbl_fn_8056D610_0000061C:
    rlwinm r0, r6, 16, 16, 16
    rlwimi r0, r5, 10, 17, 21
    rlwimi r0, r6, 19, 22, 31
    extsh r0, r0
lbl_fn_8056D610_0000062C:
    sth r0, 0x2a(r3)
    lfs f1, 0x238(r4)
    stfs f1, 0xc(r1)
    lwz r6, 0xc(r1)
    cmpwi r6, 0x0
    bne lbl_fn_8056D610_0000064C
    li r0, 0x0
    b lbl_fn_8056D610_0000067C
lbl_fn_8056D610_0000064C:
    extrwi r5, r6, 8, 1
    subic. r5, r5, 0x70
    bge lbl_fn_8056D610_00000660
    li r0, 0x0
    b lbl_fn_8056D610_0000067C
lbl_fn_8056D610_00000660:
    cmpwi r5, 0x1f
    ble lbl_fn_8056D610_0000066C
    li r5, 0x1f
lbl_fn_8056D610_0000066C:
    rlwinm r0, r6, 16, 16, 16
    rlwimi r0, r5, 10, 17, 21
    rlwimi r0, r6, 19, 22, 31
    extsh r0, r0
lbl_fn_8056D610_0000067C:
    sth r0, 0x2c(r3)
    lbz r0, 0x244(r4)
    stb r0, 0x30(r3)
    lfs f1, 0x23c(r4)
    fmuls f2, f0, f1
    fcmpo cr0, f0, f2
    bge lbl_fn_8056D610_0000069C
    fmr f2, f0
lbl_fn_8056D610_0000069C:
    fcmpo cr0, f12, f2
    ble lbl_fn_8056D610_000006AC
    fmr f1, f12
    b lbl_fn_8056D610_000006BC
lbl_fn_8056D610_000006AC:
    fmuls f1, f0, f1
    fcmpo cr0, f0, f1
    bge lbl_fn_8056D610_000006BC
    fmr f1, f0
lbl_fn_8056D610_000006BC:
    fctiwz f1, f1
    stfd f1, 0x18(r1)
    lwz r0, 0x1c(r1)
    stb r0, 0x31(r3)
    lfs f2, 0x240(r4)
    fmuls f1, f0, f2
    fcmpo cr0, f0, f1
    bge lbl_fn_8056D610_000006E0
    b lbl_fn_8056D610_000006E4
lbl_fn_8056D610_000006E0:
    fmr f3, f1
lbl_fn_8056D610_000006E4:
    fcmpo cr0, f12, f3
    ble lbl_fn_8056D610_000006F4
    fmr f4, f12
    b lbl_fn_8056D610_00000708
lbl_fn_8056D610_000006F4:
    fmuls f1, f0, f2
    fcmpo cr0, f0, f1
    bge lbl_fn_8056D610_00000704
    b lbl_fn_8056D610_00000708
lbl_fn_8056D610_00000704:
    fmr f4, f1
lbl_fn_8056D610_00000708:
    fctiwz f1, f4
    stfd f1, 0x18(r1)
    lwz r0, 0x1c(r1)
    stb r0, 0x32(r3)
    lfs f2, 0x248(r4)
    fmuls f1, f0, f2
    fcmpo cr0, f0, f1
    bge lbl_fn_8056D610_0000072C
    b lbl_fn_8056D610_00000730
lbl_fn_8056D610_0000072C:
    fmr f5, f1
lbl_fn_8056D610_00000730:
    fcmpo cr0, f12, f5
    ble lbl_fn_8056D610_0000073C
    b lbl_fn_8056D610_00000754
lbl_fn_8056D610_0000073C:
    fmuls f1, f0, f2
    fcmpo cr0, f0, f1
    bge lbl_fn_8056D610_0000074C
    b lbl_fn_8056D610_00000750
lbl_fn_8056D610_0000074C:
    fmr f7, f1
lbl_fn_8056D610_00000750:
    fmr f6, f7
lbl_fn_8056D610_00000754:
    fctiwz f1, f6
    stfd f1, 0x18(r1)
    lwz r0, 0x1c(r1)
    stb r0, 0x33(r3)
    lfs f2, 0x24c(r4)
    fmuls f1, f0, f2
    fcmpo cr0, f0, f1
    bge lbl_fn_8056D610_00000778
    b lbl_fn_8056D610_0000077C
lbl_fn_8056D610_00000778:
    fmr f8, f1
lbl_fn_8056D610_0000077C:
    fcmpo cr0, f12, f8
    ble lbl_fn_8056D610_00000788
    b lbl_fn_8056D610_000007A0
lbl_fn_8056D610_00000788:
    fmuls f1, f0, f2
    fcmpo cr0, f0, f1
    bge lbl_fn_8056D610_00000798
    b lbl_fn_8056D610_0000079C
lbl_fn_8056D610_00000798:
    fmr f10, f1
lbl_fn_8056D610_0000079C:
    fmr f9, f10
lbl_fn_8056D610_000007A0:
    fctiwz f1, f9
    stfd f1, 0x18(r1)
    lwz r0, 0x1c(r1)
    stb r0, 0x34(r3)
    lwz r0, 0x250(r4)
    stw r0, 0x24(r3)
    lfs f1, 0x254(r4)
    stfs f1, 0x8(r1)
    lwz r6, 0x8(r1)
    cmpwi r6, 0x0
    bne lbl_fn_8056D610_000007D4
    li r0, 0x0
    b lbl_fn_8056D610_00000804
lbl_fn_8056D610_000007D4:
    extrwi r5, r6, 8, 1
    subic. r5, r5, 0x70
    bge lbl_fn_8056D610_000007E8
    li r0, 0x0
    b lbl_fn_8056D610_00000804
lbl_fn_8056D610_000007E8:
    cmpwi r5, 0x1f
    ble lbl_fn_8056D610_000007F4
    li r5, 0x1f
lbl_fn_8056D610_000007F4:
    rlwinm r0, r6, 16, 16, 16
    rlwimi r0, r5, 10, 17, 21
    rlwimi r0, r6, 19, 22, 31
    extsh r0, r0
lbl_fn_8056D610_00000804:
    sth r0, 0x2e(r3)
    lfs f2, 0x258(r4)
    fmuls f1, f0, f2
    fcmpo cr0, f0, f1
    bge lbl_fn_8056D610_0000081C
    b lbl_fn_8056D610_00000820
lbl_fn_8056D610_0000081C:
    fmr f11, f1
lbl_fn_8056D610_00000820:
    fcmpo cr0, f12, f11
    ble lbl_fn_8056D610_0000082C
    b lbl_fn_8056D610_00000844
lbl_fn_8056D610_0000082C:
    fmuls f1, f0, f2
    fcmpo cr0, f0, f1
    bge lbl_fn_8056D610_0000083C
    b lbl_fn_8056D610_00000840
lbl_fn_8056D610_0000083C:
    fmr f0, f1
lbl_fn_8056D610_00000840:
    fmr f12, f0
lbl_fn_8056D610_00000844:
    fctiwz f0, f12
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stb r0, 0x35(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_8056D8CC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    cmpwi r6, 0x0
    mr r28, r3
    mr r29, r4
    mr r30, r5
    mr r31, r6
    beq lbl_fn_8056D8CC_00000A24
    addis r6, r3, 0x6
    lwz r5, lbl_8087F3C0
    lwz r6, -0x4254(r6)
    li r0, 0x1
    mr r24, r28
    addis r27, r3, 0x5
    stw r0, 0xd0(r5)
    add r25, r6, r4
    li r26, 0x0
    b lbl_fn_8056D8CC_000008D8
lbl_fn_8056D8CC_000008B0:
    addis r3, r24, 0x5
    lwz r4, 0x2188(r3)
    lwz r0, 0x0(r4)
    cmpw r0, r25
    bne lbl_fn_8056D8CC_000008D0
    lwz r3, lbl_8087F3C0
    addi r4, r4, 0x4
    bl fn_8023B724
lbl_fn_8056D8CC_000008D0:
    addi r24, r24, 0x4
    addi r26, r26, 0x1
lbl_fn_8056D8CC_000008D8:
    lwz r0, 0x2184(r27)
    cmplw r26, r0
    blt lbl_fn_8056D8CC_000008B0
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lwz r3, lbl_8087F3C0
    li r4, 0x0
    bl fn_8023B71C
    lwz r3, lbl_8087F3C0
    li r4, 0x0
    addis r27, r28, 0x6
    li r0, 0x1
    stw r4, 0xd0(r3)
    mr r24, r28
    li r25, 0x0
    lwz r3, -0x4254(r27)
    stw r0, -0x425c(r27)
    add r26, r3, r29
    b lbl_fn_8056D8CC_00000A04
lbl_fn_8056D8CC_00000928:
    addis r3, r24, 0x6
    lwz r6, -0x4668(r3)
    lwz r0, 0x0(r6)
    cmpw r0, r26
    bne lbl_fn_8056D8CC_000009FC
    lwz r0, 0x4(r6)
    cmpwi r0, 0x0
    beq lbl_fn_8056D8CC_00000964
    cmpwi r0, 0x1
    beq lbl_fn_8056D8CC_000009C4
    cmpwi r0, 0x2
    beq lbl_fn_8056D8CC_000009E4
    cmpwi r0, 0x3
    beq lbl_fn_8056D8CC_000009F4
    b lbl_fn_8056D8CC_000009FC
lbl_fn_8056D8CC_00000964:
    lwz r7, 0x3c(r6)
    cmpwi r7, 0x0
    beq lbl_fn_8056D8CC_00000994
    lwz r3, 0x44(r6)
    addi r4, r6, 0x8
    addi r5, r6, 0x24
    lfs f1, lbl_8088804C
    addi r6, r6, 0x30
    li r8, -0x1
    li r9, 0x0
    bl fn_8010EE78
    b lbl_fn_8056D8CC_000009FC
lbl_fn_8056D8CC_00000994:
    lwz r7, 0x40(r6)
    cmpwi r7, 0x0
    beq lbl_fn_8056D8CC_000009FC
    lwz r3, 0x44(r6)
    addi r4, r6, 0x8
    addi r5, r6, 0x24
    lfs f1, lbl_8088804C
    addi r6, r6, 0x30
    li r8, -0x1
    li r9, 0x0
    bl fn_8010EFC8
    b lbl_fn_8056D8CC_000009FC
lbl_fn_8056D8CC_000009C4:
    lwz r3, 0x44(r6)
    li r4, 0x1
    li r5, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_8056D8CC_000009FC
lbl_fn_8056D8CC_000009E4:
    lwz r3, 0x44(r6)
    addi r4, r6, 0x8
    bl fn_8010F26C
    b lbl_fn_8056D8CC_000009FC
lbl_fn_8056D8CC_000009F4:
    lwz r3, 0x44(r6)
    bl fn_8010F41C
lbl_fn_8056D8CC_000009FC:
    addi r24, r24, 0x4
    addi r25, r25, 0x1
lbl_fn_8056D8CC_00000A04:
    lwz r0, -0x466c(r27)
    cmplw r25, r0
    blt lbl_fn_8056D8CC_00000928
    li r0, 0x0
    stw r0, -0x425c(r27)
    mr r3, r28
    mr r4, r29
    bl fn_8056E91C
lbl_fn_8056D8CC_00000A24:
    cmpwi r30, 0x0
    beq lbl_fn_8056D8CC_00000A38
    mr r3, r28
    mr r4, r29
    bl fn_8056DAD0
lbl_fn_8056D8CC_00000A38:
    cmpwi r31, 0x0
    beq lbl_fn_8056D8CC_00000A48
    lwz r3, lbl_8087F048
    bl fn_80101138
lbl_fn_8056D8CC_00000A48:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8056DAD0(void)
{
    nofralloc
    stwu r1, -0x410(r1)
    mflr r0
    stw r0, 0x414(r1)
    addi r11, r1, 0x3a0
    stfd f31, 0x400(r1)
    psq_st f31, 0x408(r1), 0, 0
    stfd f30, 0x3f0(r1)
    psq_st f30, 0x3f8(r1), 0, 0
    stfd f29, 0x3e0(r1)
    psq_st f29, 0x3e8(r1), 0, 0
    stfd f28, 0x3d0(r1)
    psq_st f28, 0x3d8(r1), 0, 0
    stfd f27, 0x3c0(r1)
    psq_st f27, 0x3c8(r1), 0, 0
    stfd f26, 0x3b0(r1)
    psq_st f26, 0x3b8(r1), 0, 0
    stfd f25, 0x3a0(r1)
    psq_st f25, 0x3a8(r1), 0, 0
    bl _savegpr_18
    srwi r7, r4, 31
    addis r5, r3, 0x4
    add r6, r7, r4
    lwz r0, 0x517c(r5)
    srawi r8, r6, 1
    clrlwi r4, r4, 31
    subfic r6, r0, 0x1
    lis r5, 0x4330
    xor r0, r4, r7
    stw r5, 0x350(r1)
    subf r0, r7, r0
    cmpw r8, r6
    cntlzw r4, r0
    stw r5, 0x358(r1)
    mr r0, r6
    srwi r5, r4, 5
    ble lbl_fn_8056DAD0_00000AF4
    mr r0, r8
lbl_fn_8056DAD0_00000AF4:
    cmpwi r0, -0x1
    ble lbl_fn_8056DAD0_00000B04
    li r6, -0x1
    b lbl_fn_8056DAD0_00000B10
lbl_fn_8056DAD0_00000B04:
    cmpw r8, r6
    ble lbl_fn_8056DAD0_00000B10
    mr r6, r8
lbl_fn_8056DAD0_00000B10:
    addis r4, r3, 0x4
    lwz r0, 0x5178(r4)
    add. r7, r0, r6
    bge lbl_fn_8056DAD0_00000B24
    addi r7, r7, 0x2d
lbl_fn_8056DAD0_00000B24:
    cmpwi r5, 0x0
    beq lbl_fn_8056DAD0_00000B34
    cmpwi r6, 0x0
    bne lbl_fn_8056DAD0_00000E88
lbl_fn_8056DAD0_00000B34:
    mulli r0, r7, 0x1808
    li r29, 0x0
    add r3, r3, r0
    lbz r0, 0x155c(r3)
    addi r26, r3, 0x8
    extsb. r0, r0
    ble lbl_fn_8056DAD0_00000D58
    mr r25, r26
    addi r27, r1, 0x240
    li r19, 0x0
    li r18, 0x6
    b lbl_fn_8056DAD0_00000D48
lbl_fn_8056DAD0_00000B64:
    lwz r3, 0x0(r25)
    li r5, 0x0
    lbz r4, 0x5(r25)
    addi r28, r3, 0xb0
    lwz r3, 0x100(r3)
    lwz r0, 0x20c(r28)
    extsb r4, r4
    rlwimi r0, r3, 8, 16, 23
    stw r0, 0x20c(r28)
    stw r4, 0x50(r28)
    lbz r0, 0x6(r25)
    extsb r0, r0
    stw r0, 0x34c(r28)
    mtctr r18
lbl_fn_8056DAD0_00000B9C:
    extlwi r4, r5, 29, 1
    clrlslwi r3, r5, 30, 1
    add r0, r25, r4
    srwi r6, r5, 2
    add r3, r3, r0
    clrlwi r7, r5, 30
    lha r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8056DAD0_00000BC8
    lfs f0, lbl_80888020
    b lbl_fn_8056DAD0_00000BE4
lbl_fn_8056DAD0_00000BC8:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x38(r1)
    lfs f0, 0x38(r1)
lbl_fn_8056DAD0_00000BE4:
    slwi r0, r6, 4
    addi r5, r5, 0x1
    slwi r3, r7, 2
    add r0, r27, r0
    extlwi r4, r5, 29, 1
    stfsx f0, r3, r0
    clrlslwi r3, r5, 30, 1
    add r0, r25, r4
    srwi r6, r5, 2
    add r3, r3, r0
    clrlwi r7, r5, 30
    lha r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8056DAD0_00000C24
    lfs f0, lbl_80888020
    b lbl_fn_8056DAD0_00000C40
lbl_fn_8056DAD0_00000C24:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x38(r1)
    lfs f0, 0x38(r1)
lbl_fn_8056DAD0_00000C40:
    slwi r0, r6, 4
    slwi r3, r7, 2
    add r0, r27, r0
    addi r5, r5, 0x1
    stfsx f0, r3, r0
    bdnz lbl_fn_8056DAD0_00000B9C
    lha r0, 0x88(r25)
    cmpwi r0, 0x0
    bne lbl_fn_8056DAD0_00000C6C
    lfs f25, lbl_80888020
    b lbl_fn_8056DAD0_00000C88
lbl_fn_8056DAD0_00000C6C:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x34(r1)
    lfs f25, 0x34(r1)
lbl_fn_8056DAD0_00000C88:
    stw r19, 0x218(r1)
    mr r4, r27
    addi r3, r26, 0x17d8
    addi r5, r1, 0x270
    bl fn_805F89F0
    fmr f1, f25
    mr r3, r28
    mr r8, r25
    addi r4, r25, 0x20
    addi r6, r1, 0x270
    addi r7, r1, 0x218
    li r5, 0x4
    bl fn_8056A9E8
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x60
    lfs f3, 0x34(r28)
    lfs f4, 0x24(r28)
    lfs f5, 0x14(r28)
    lfs f2, 0x114(r4)
    lfs f1, 0x110(r4)
    lfs f0, 0x10c(r4)
    fsubs f2, f2, f3
    fsubs f1, f1, f4
    stfs f5, 0x54(r1)
    fsubs f0, f0, f5
    stfs f4, 0x58(r1)
    stfs f3, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f2, 0x68(r1)
    bl fn_805F9920
    lbz r0, 0x4(r25)
    fmr f25, f1
    extsb. r4, r0
    blt lbl_fn_8056DAD0_00000D28
    lwz r3, 0x0(r25)
    li r5, 0x1
    li r6, 0x0
    bl fn_8014DEE4
    b lbl_fn_8056DAD0_00000D34
lbl_fn_8056DAD0_00000D28:
    lwz r3, 0x0(r25)
    li r4, 0x1
    bl fn_8014EEC4
lbl_fn_8056DAD0_00000D34:
    fmr f1, f25
    lwz r3, 0x0(r25)
    bl fn_80148B38
    addi r25, r25, 0x8c
    addi r29, r29, 0x1
lbl_fn_8056DAD0_00000D48:
    lbz r0, 0x1554(r26)
    extsb r0, r0
    cmpw r29, r0
    blt lbl_fn_8056DAD0_00000B64
lbl_fn_8056DAD0_00000D58:
    addi r25, r26, 0x834
    addi r20, r1, 0x1b8
    li r27, 0x0
    li r19, 0x0
    li r18, 0x6
    b lbl_fn_8056DAD0_00000E74
lbl_fn_8056DAD0_00000D70:
    lwz r28, 0x4(r25)
    li r5, 0x0
    mtctr r18
lbl_fn_8056DAD0_00000D7C:
    extlwi r4, r5, 29, 1
    clrlslwi r3, r5, 30, 1
    add r0, r25, r4
    srwi r6, r5, 2
    add r3, r3, r0
    clrlwi r7, r5, 30
    lha r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8056DAD0_00000DA8
    lfs f0, lbl_80888020
    b lbl_fn_8056DAD0_00000DC4
lbl_fn_8056DAD0_00000DA8:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x30(r1)
    lfs f0, 0x30(r1)
lbl_fn_8056DAD0_00000DC4:
    slwi r0, r6, 4
    addi r5, r5, 0x1
    slwi r3, r7, 2
    add r0, r20, r0
    extlwi r4, r5, 29, 1
    stfsx f0, r3, r0
    clrlslwi r3, r5, 30, 1
    add r0, r25, r4
    srwi r6, r5, 2
    add r3, r3, r0
    clrlwi r7, r5, 30
    lha r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8056DAD0_00000E04
    lfs f0, lbl_80888020
    b lbl_fn_8056DAD0_00000E20
lbl_fn_8056DAD0_00000E04:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x30(r1)
    lfs f0, 0x30(r1)
lbl_fn_8056DAD0_00000E20:
    slwi r0, r6, 4
    slwi r3, r7, 2
    add r0, r20, r0
    addi r5, r5, 0x1
    stfsx f0, r3, r0
    bdnz lbl_fn_8056DAD0_00000D7C
    stw r19, 0x190(r1)
    addi r3, r26, 0x17d8
    addi r4, r1, 0x1b8
    addi r5, r1, 0x1e8
    bl fn_805F89F0
    lfs f1, lbl_80888020
    mr r3, r28
    addi r4, r25, 0x20
    addi r6, r1, 0x1e8
    addi r7, r1, 0x190
    li r5, 0x1
    li r8, 0x0
    bl fn_8056A9E8
    addi r25, r25, 0x38
    addi r27, r27, 0x1
lbl_fn_8056DAD0_00000E74:
    lbz r0, 0x1555(r26)
    extsb r0, r0
    cmpw r27, r0
    blt lbl_fn_8056DAD0_00000D70
    b lbl_fn_8056DAD0_0000185C
lbl_fn_8056DAD0_00000E88:
    lis r5, 0xb60b
    lis r4, lbl_8075FE68@ha
    addi r6, r7, 0x1
    lfd f25, lbl_8075FE68@l(r4)
    addi r0, r5, 0x60b7
    lfs f26, lbl_80888024
    mulhw r0, r0, r6
    lfs f27, lbl_80888050
    lfs f30, lbl_8088803C
    addi r30, r1, 0x100
    lfs f29, lbl_80888038
    addi r27, r1, 0x160
    add r0, r0, r6
    lfs f31, lbl_80888040
    srawi r0, r0, 5
    li r22, 0x0
    srwi r4, r0, 31
    lis r29, lbl_8075FE70@ha
    add r0, r0, r4
    li r28, 0x1
    mulli r0, r0, 0x2d
    li r31, 0x0
    li r19, 0x6
    li r20, 0x4
    mulli r4, r7, 0x1808
    li r18, 0x6
    subf r0, r0, r6
    add r4, r3, r4
    mulli r0, r0, 0x1808
    addi r24, r4, 0x8
    add r3, r3, r0
    mr r25, r24
    addi r23, r3, 0x8
    b lbl_fn_8056DAD0_00001438
lbl_fn_8056DAD0_00000F10:
    lbz r0, 0x1554(r23)
    mr r3, r23
    lwz r4, 0x0(r25)
    li r21, 0x0
    extsb. r0, r0
    addi r26, r4, 0xb0
    mtctr r0
    ble lbl_fn_8056DAD0_00000F4C
lbl_fn_8056DAD0_00000F30:
    lwz r0, 0x0(r3)
    cmplw r0, r4
    bne lbl_fn_8056DAD0_00000F44
    mr r21, r3
    b lbl_fn_8056DAD0_00000F4C
lbl_fn_8056DAD0_00000F44:
    addi r3, r3, 0x8c
    bdnz lbl_fn_8056DAD0_00000F30
lbl_fn_8056DAD0_00000F4C:
    li r5, 0x0
    mtctr r18
lbl_fn_8056DAD0_00000F54:
    extlwi r4, r5, 29, 1
    clrlslwi r3, r5, 30, 1
    add r0, r25, r4
    srwi r6, r5, 2
    add r3, r3, r0
    clrlwi r7, r5, 30
    lha r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8056DAD0_00000F80
    lfs f0, lbl_80888020
    b lbl_fn_8056DAD0_00000F9C
lbl_fn_8056DAD0_00000F80:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x2c(r1)
    lfs f0, 0x2c(r1)
lbl_fn_8056DAD0_00000F9C:
    slwi r0, r6, 4
    addi r5, r5, 0x1
    slwi r3, r7, 2
    add r0, r27, r0
    extlwi r4, r5, 29, 1
    stfsx f0, r3, r0
    clrlslwi r3, r5, 30, 1
    add r0, r25, r4
    srwi r6, r5, 2
    add r3, r3, r0
    clrlwi r7, r5, 30
    lha r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8056DAD0_00000FDC
    lfs f0, lbl_80888020
    b lbl_fn_8056DAD0_00000FF8
lbl_fn_8056DAD0_00000FDC:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x2c(r1)
    lfs f0, 0x2c(r1)
lbl_fn_8056DAD0_00000FF8:
    slwi r0, r6, 4
    slwi r3, r7, 2
    add r0, r27, r0
    addi r5, r5, 0x1
    stfsx f0, r3, r0
    bdnz lbl_fn_8056DAD0_00000F54
    addi r3, r24, 0x17d8
    addi r4, r1, 0x160
    addi r5, r1, 0x320
    bl fn_805F89F0
    lha r0, 0x88(r25)
    cmpwi r0, 0x0
    bne lbl_fn_8056DAD0_00001034
    lfs f28, lbl_80888020
    b lbl_fn_8056DAD0_00001050
lbl_fn_8056DAD0_00001034:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x28(r1)
    lfs f28, 0x28(r1)
lbl_fn_8056DAD0_00001050:
    cmpwi r21, 0x0
    stw r31, 0x2f8(r1)
    beq lbl_fn_8056DAD0_00001364
    li r5, 0x0
    mtctr r19
lbl_fn_8056DAD0_00001064:
    extlwi r4, r5, 29, 1
    clrlslwi r3, r5, 30, 1
    add r0, r21, r4
    srwi r6, r5, 2
    add r3, r3, r0
    clrlwi r7, r5, 30
    lha r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8056DAD0_00001090
    lfs f0, lbl_80888020
    b lbl_fn_8056DAD0_000010AC
lbl_fn_8056DAD0_00001090:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x24(r1)
    lfs f0, 0x24(r1)
lbl_fn_8056DAD0_000010AC:
    slwi r0, r6, 4
    addi r5, r5, 0x1
    slwi r3, r7, 2
    add r0, r30, r0
    extlwi r4, r5, 29, 1
    stfsx f0, r3, r0
    clrlslwi r3, r5, 30, 1
    add r0, r21, r4
    srwi r6, r5, 2
    add r3, r3, r0
    clrlwi r7, r5, 30
    lha r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8056DAD0_000010EC
    lfs f0, lbl_80888020
    b lbl_fn_8056DAD0_00001108
lbl_fn_8056DAD0_000010EC:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x24(r1)
    lfs f0, 0x24(r1)
lbl_fn_8056DAD0_00001108:
    slwi r0, r6, 4
    slwi r3, r7, 2
    add r0, r30, r0
    addi r5, r5, 0x1
    stfsx f0, r3, r0
    bdnz lbl_fn_8056DAD0_00001064
    addi r3, r23, 0x17d8
    addi r4, r1, 0x100
    addi r5, r1, 0x130
    bl fn_805F89F0
    lfs f1, 0x324(r1)
    lfs f0, 0x134(r1)
    lfs f3, 0x320(r1)
    fadds f5, f1, f0
    lfs f2, 0x130(r1)
    lfs f1, 0x32c(r1)
    fadds f4, f3, f2
    lfs f0, 0x13c(r1)
    lfs f3, 0x328(r1)
    fadds f1, f1, f0
    lfs f2, 0x138(r1)
    lfs f7, 0x330(r1)
    fadds f2, f3, f2
    lfs f0, 0x140(r1)
    fmuls f3, f5, f27
    fadds f0, f7, f0
    lfs f6, 0x334(r1)
    lfs f5, 0x144(r1)
    lfs f8, 0x338(r1)
    fmuls f4, f4, f27
    fadds f13, f6, f5
    lfs f7, 0x148(r1)
    fmuls f2, f2, f27
    fmuls f1, f1, f27
    lfs f6, 0x33c(r1)
    fadds f12, f8, f7
    lfs f5, 0x14c(r1)
    fmuls f0, f0, f27
    lfs f8, 0x340(r1)
    fadds f11, f6, f5
    lfs f7, 0x150(r1)
    stfs f4, 0x320(r1)
    fadds f10, f8, f7
    lfs f6, 0x344(r1)
    lfs f5, 0x154(r1)
    stfs f3, 0x324(r1)
    fmuls f4, f11, f27
    fadds f9, f6, f5
    stfs f2, 0x328(r1)
    fmuls f3, f10, f27
    lfs f8, 0x348(r1)
    lfs f7, 0x158(r1)
    fmuls f2, f9, f27
    lfs f6, 0x34c(r1)
    lfs f5, 0x15c(r1)
    fadds f8, f8, f7
    stfs f1, 0x32c(r1)
    fadds f7, f6, f5
    fmuls f6, f13, f27
    stfs f0, 0x330(r1)
    fmuls f5, f12, f27
    fmuls f1, f8, f27
    stfs f6, 0x334(r1)
    fmuls f0, f7, f27
    stfs f5, 0x338(r1)
    stfs f4, 0x33c(r1)
    stfs f3, 0x340(r1)
    stfs f2, 0x344(r1)
    stfs f1, 0x348(r1)
    stfs f0, 0x34c(r1)
    lha r0, 0x88(r21)
    cmpwi r0, 0x0
    bne lbl_fn_8056DAD0_00001234
    lfs f0, lbl_80888020
    b lbl_fn_8056DAD0_00001250
lbl_fn_8056DAD0_00001234:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x20(r1)
    lfs f0, 0x20(r1)
lbl_fn_8056DAD0_00001250:
    fsubs f0, f0, f28
    lfd f2, lbl_8075FE70@l(r29)
    fmadds f1, f27, f0, f28
    bl fn_8068AEA8
    frsp f28, f1
    fcmpo cr0, f28, f29
    ble lbl_fn_8056DAD0_00001270
    fsubs f28, f28, f30
lbl_fn_8056DAD0_00001270:
    fcmpo cr0, f28, f31
    bge lbl_fn_8056DAD0_0000127C
    fadds f28, f28, f30
lbl_fn_8056DAD0_0000127C:
    mr r3, r25
    stw r28, 0x2f8(r1)
    addi r4, r1, 0x2f8
    mtctr r20
lbl_fn_8056DAD0_0000128C:
    lha r0, 0x2a(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8056DAD0_000012A0
    lfs f0, lbl_80888020
    b lbl_fn_8056DAD0_000012BC
lbl_fn_8056DAD0_000012A0:
    extrwi r5, r0, 5, 17
    extlwi r6, r0, 1, 16
    rlwimi r6, r0, 13, 9, 18
    addi r0, r5, 0x70
    rlwimi r6, r0, 23, 1, 8
    stw r6, 0x1c(r1)
    lfs f0, 0x1c(r1)
lbl_fn_8056DAD0_000012BC:
    stfs f0, 0x4(r4)
    lbz r0, 0x31(r3)
    stw r0, 0x354(r1)
    lfd f0, 0x350(r1)
    fsubs f0, f0, f25
    fdivs f0, f0, f26
    stfs f0, 0x14(r4)
    lwz r5, 0x20(r3)
    lwz r0, 0x20(r21)
    cmplw r5, r0
    bne lbl_fn_8056DAD0_00001354
    lha r0, 0x2a(r21)
    cmpwi r0, 0x0
    bne lbl_fn_8056DAD0_000012FC
    lfs f1, lbl_80888020
    b lbl_fn_8056DAD0_00001318
lbl_fn_8056DAD0_000012FC:
    extrwi r5, r0, 5, 17
    extlwi r6, r0, 1, 16
    rlwimi r6, r0, 13, 9, 18
    addi r0, r5, 0x70
    rlwimi r6, r0, 23, 1, 8
    stw r6, 0x18(r1)
    lfs f1, 0x18(r1)
lbl_fn_8056DAD0_00001318:
    lfs f0, 0x4(r4)
    fadds f0, f0, f1
    stfs f0, 0x4(r4)
    lbz r0, 0x31(r21)
    stw r0, 0x35c(r1)
    lfs f0, 0x4(r4)
    lfd f2, 0x358(r1)
    lfs f1, 0x14(r4)
    fmuls f0, f0, f27
    fsubs f2, f2, f25
    stfs f0, 0x4(r4)
    fdivs f0, f2, f26
    fadds f0, f1, f0
    fmuls f0, f0, f27
    stfs f0, 0x14(r4)
lbl_fn_8056DAD0_00001354:
    addi r3, r3, 0x18
    addi r4, r4, 0x4
    addi r21, r21, 0x18
    bdnz lbl_fn_8056DAD0_0000128C
lbl_fn_8056DAD0_00001364:
    lbz r5, 0x5(r25)
    fmr f1, f28
    lwz r4, 0x50(r26)
    mr r3, r26
    lwz r0, 0x20c(r26)
    extsb r5, r5
    rlwimi r0, r4, 8, 16, 23
    stw r0, 0x20c(r26)
    mr r8, r25
    addi r4, r25, 0x20
    addi r6, r1, 0x320
    stw r5, 0x50(r26)
    addi r7, r1, 0x2f8
    li r5, 0x4
    lbz r0, 0x6(r25)
    extsb r0, r0
    stw r0, 0x34c(r26)
    bl fn_8056A9E8
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x48
    lfs f3, 0x34(r26)
    lfs f4, 0x24(r26)
    lfs f5, 0x14(r26)
    lfs f2, 0x114(r4)
    lfs f1, 0x110(r4)
    lfs f0, 0x10c(r4)
    fsubs f2, f2, f3
    fsubs f1, f1, f4
    stfs f5, 0x3c(r1)
    fsubs f0, f0, f5
    stfs f4, 0x40(r1)
    stfs f3, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f1, 0x4c(r1)
    stfs f2, 0x50(r1)
    bl fn_805F9920
    lbz r0, 0x4(r25)
    fmr f28, f1
    extsb. r4, r0
    blt lbl_fn_8056DAD0_00001418
    lwz r3, 0x0(r25)
    li r5, 0x1
    li r6, 0x0
    bl fn_8014DEE4
    b lbl_fn_8056DAD0_00001424
lbl_fn_8056DAD0_00001418:
    lwz r3, 0x0(r25)
    li r4, 0x1
    bl fn_8014EEC4
lbl_fn_8056DAD0_00001424:
    fmr f1, f28
    lwz r3, 0x0(r25)
    bl fn_80148B38
    addi r25, r25, 0x8c
    addi r22, r22, 0x1
lbl_fn_8056DAD0_00001438:
    lbz r0, 0x1554(r24)
    extsb r0, r0
    cmpw r22, r0
    blt lbl_fn_8056DAD0_00000F10
    lis r3, lbl_8075FE68@ha
    lfs f29, lbl_80888024
    lfd f30, lbl_8075FE68@l(r3)
    addi r26, r24, 0x834
    lfs f28, lbl_80888050
    addi r30, r1, 0x70
    addi r28, r1, 0xd0
    li r21, 0x0
    li r31, 0x1
    li r29, 0x0
    li r27, 0x6
    li r20, 0x6
    b lbl_fn_8056DAD0_0000184C
lbl_fn_8056DAD0_0000147C:
    lbz r0, 0x1555(r23)
    addi r3, r23, 0x834
    lwz r25, 0x4(r26)
    li r22, 0x0
    extsb. r0, r0
    mtctr r0
    ble lbl_fn_8056DAD0_000014B4
lbl_fn_8056DAD0_00001498:
    lwz r0, 0x4(r3)
    cmplw r0, r25
    bne lbl_fn_8056DAD0_000014AC
    mr r22, r3
    b lbl_fn_8056DAD0_000014B4
lbl_fn_8056DAD0_000014AC:
    addi r3, r3, 0x38
    bdnz lbl_fn_8056DAD0_00001498
lbl_fn_8056DAD0_000014B4:
    li r5, 0x0
    mtctr r20
lbl_fn_8056DAD0_000014BC:
    extlwi r4, r5, 29, 1
    clrlslwi r3, r5, 30, 1
    add r0, r26, r4
    srwi r6, r5, 2
    add r3, r3, r0
    clrlwi r7, r5, 30
    lha r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8056DAD0_000014E8
    lfs f0, lbl_80888020
    b lbl_fn_8056DAD0_00001504
lbl_fn_8056DAD0_000014E8:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x14(r1)
    lfs f0, 0x14(r1)
lbl_fn_8056DAD0_00001504:
    slwi r0, r6, 4
    addi r5, r5, 0x1
    slwi r3, r7, 2
    add r0, r28, r0
    extlwi r4, r5, 29, 1
    stfsx f0, r3, r0
    clrlslwi r3, r5, 30, 1
    add r0, r26, r4
    srwi r6, r5, 2
    add r3, r3, r0
    clrlwi r7, r5, 30
    lha r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8056DAD0_00001544
    lfs f0, lbl_80888020
    b lbl_fn_8056DAD0_00001560
lbl_fn_8056DAD0_00001544:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x14(r1)
    lfs f0, 0x14(r1)
lbl_fn_8056DAD0_00001560:
    slwi r0, r6, 4
    slwi r3, r7, 2
    add r0, r28, r0
    addi r5, r5, 0x1
    stfsx f0, r3, r0
    bdnz lbl_fn_8056DAD0_000014BC
    addi r3, r24, 0x17d8
    addi r4, r1, 0xd0
    addi r5, r1, 0x2c8
    bl fn_805F89F0
    cmpwi r22, 0x0
    stw r29, 0x2a0(r1)
    beq lbl_fn_8056DAD0_00001824
    li r5, 0x0
    mtctr r27
lbl_fn_8056DAD0_0000159C:
    extlwi r4, r5, 29, 1
    clrlslwi r3, r5, 30, 1
    add r0, r22, r4
    srwi r6, r5, 2
    add r3, r3, r0
    clrlwi r7, r5, 30
    lha r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8056DAD0_000015C8
    lfs f0, lbl_80888020
    b lbl_fn_8056DAD0_000015E4
lbl_fn_8056DAD0_000015C8:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x10(r1)
    lfs f0, 0x10(r1)
lbl_fn_8056DAD0_000015E4:
    slwi r0, r6, 4
    addi r5, r5, 0x1
    slwi r3, r7, 2
    add r0, r30, r0
    extlwi r4, r5, 29, 1
    stfsx f0, r3, r0
    clrlslwi r3, r5, 30, 1
    add r0, r22, r4
    srwi r6, r5, 2
    add r3, r3, r0
    clrlwi r7, r5, 30
    lha r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8056DAD0_00001624
    lfs f0, lbl_80888020
    b lbl_fn_8056DAD0_00001640
lbl_fn_8056DAD0_00001624:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x10(r1)
    lfs f0, 0x10(r1)
lbl_fn_8056DAD0_00001640:
    slwi r0, r6, 4
    slwi r3, r7, 2
    add r0, r30, r0
    addi r5, r5, 0x1
    stfsx f0, r3, r0
    bdnz lbl_fn_8056DAD0_0000159C
    addi r3, r23, 0x17d8
    addi r4, r1, 0x70
    addi r5, r1, 0xa0
    bl fn_805F89F0
    lfs f3, 0x2c8(r1)
    lfs f2, 0xa0(r1)
    lfs f1, 0x2cc(r1)
    lfs f0, 0xa4(r1)
    fadds f2, f3, f2
    lfs f4, 0x2d0(r1)
    fadds f5, f1, f0
    lfs f3, 0xa8(r1)
    fmuls f0, f2, f28
    lfs f2, 0x2d4(r1)
    fadds f4, f4, f3
    lfs f1, 0xac(r1)
    fmuls f3, f5, f28
    lfs f7, 0x2d8(r1)
    fadds f1, f2, f1
    lfs f6, 0xb0(r1)
    fmuls f2, f4, f28
    lfs f5, 0x2dc(r1)
    fadds f31, f7, f6
    lfs f4, 0xb4(r1)
    lfs f7, 0x2e0(r1)
    fmuls f1, f1, f28
    fadds f13, f5, f4
    lfs f6, 0xb8(r1)
    fadds f12, f7, f6
    stfs f0, 0x2c8(r1)
    fmuls f0, f31, f28
    lfs f5, 0x2e4(r1)
    lfs f4, 0xbc(r1)
    lfs f7, 0x2e8(r1)
    fadds f11, f5, f4
    lfs f6, 0xc0(r1)
    lfs f5, 0x2ec(r1)
    fadds f10, f7, f6
    lfs f4, 0xc4(r1)
    stfs f3, 0x2cc(r1)
    fadds f9, f5, f4
    lfs f7, 0x2f0(r1)
    lfs f6, 0xc8(r1)
    stfs f2, 0x2d0(r1)
    fmuls f3, f10, f28
    fadds f8, f7, f6
    fmuls f6, f13, f28
    stfs f1, 0x2d4(r1)
    fmuls f2, f9, f28
    lfs f5, 0x2f4(r1)
    lfs f4, 0xcc(r1)
    fmuls f1, f8, f28
    fadds f7, f5, f4
    stfs f0, 0x2d8(r1)
    fmuls f5, f12, f28
    fmuls f4, f11, f28
    stfs f6, 0x2dc(r1)
    fmuls f0, f7, f28
    stfs f5, 0x2e0(r1)
    stfs f4, 0x2e4(r1)
    stfs f3, 0x2e8(r1)
    stfs f2, 0x2ec(r1)
    stfs f1, 0x2f0(r1)
    stfs f0, 0x2f4(r1)
    stw r31, 0x2a0(r1)
    lha r0, 0x2a(r26)
    cmpwi r0, 0x0
    bne lbl_fn_8056DAD0_00001770
    lfs f0, lbl_80888020
    b lbl_fn_8056DAD0_0000178C
lbl_fn_8056DAD0_00001770:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0xc(r1)
    lfs f0, 0xc(r1)
lbl_fn_8056DAD0_0000178C:
    stfs f0, 0x2a4(r1)
    lbz r0, 0x31(r26)
    stw r0, 0x354(r1)
    lfd f0, 0x350(r1)
    fsubs f0, f0, f30
    fdivs f0, f0, f29
    stfs f0, 0x2b4(r1)
    lwz r3, 0x20(r26)
    lwz r0, 0x20(r22)
    cmplw r3, r0
    bne lbl_fn_8056DAD0_00001824
    lha r0, 0x2a(r22)
    cmpwi r0, 0x0
    bne lbl_fn_8056DAD0_000017CC
    lfs f2, lbl_80888020
    b lbl_fn_8056DAD0_000017E8
lbl_fn_8056DAD0_000017CC:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x8(r1)
    lfs f2, 0x8(r1)
lbl_fn_8056DAD0_000017E8:
    lfs f0, 0x2a4(r1)
    lfs f1, 0x2b4(r1)
    fadds f0, f0, f2
    stfs f0, 0x2a4(r1)
    frsp f0, f0
    lbz r0, 0x31(r22)
    stw r0, 0x35c(r1)
    fmuls f0, f0, f28
    lfd f2, 0x358(r1)
    stfs f0, 0x2a4(r1)
    fsubs f0, f2, f30
    fdivs f0, f0, f29
    fadds f0, f1, f0
    fmuls f0, f0, f28
    stfs f0, 0x2b4(r1)
lbl_fn_8056DAD0_00001824:
    lfs f1, lbl_80888020
    mr r3, r25
    addi r4, r26, 0x20
    addi r6, r1, 0x2c8
    addi r7, r1, 0x2a0
    li r5, 0x1
    li r8, 0x0
    bl fn_8056A9E8
    addi r26, r26, 0x38
    addi r21, r21, 0x1
lbl_fn_8056DAD0_0000184C:
    lbz r0, 0x1555(r24)
    extsb r0, r0
    cmpw r21, r0
    blt lbl_fn_8056DAD0_0000147C
lbl_fn_8056DAD0_0000185C:
    addi r11, r1, 0x3a0
    psq_l f31, 0x408(r1), 0, 0
    lfd f31, 0x400(r1)
    psq_l f30, 0x3f8(r1), 0, 0
    lfd f30, 0x3f0(r1)
    psq_l f29, 0x3e8(r1), 0, 0
    lfd f29, 0x3e0(r1)
    psq_l f28, 0x3d8(r1), 0, 0
    lfd f28, 0x3d0(r1)
    psq_l f27, 0x3c8(r1), 0, 0
    lfd f27, 0x3c0(r1)
    psq_l f26, 0x3b8(r1), 0, 0
    lfd f26, 0x3b0(r1)
    psq_l f25, 0x3a8(r1), 0, 0
    lfd f25, 0x3a0(r1)
    bl _restgpr_18
    lwz r0, 0x414(r1)
    mtlr r0
    addi r1, r1, 0x410
    blr
}

asm void fn_8056E91C(void)
{
    nofralloc
    stwu r1, -0x670(r1)
    mflr r0
    stw r0, 0x674(r1)
    addi r11, r1, 0x5e0
    stfd f31, 0x660(r1)
    psq_st f31, 0x668(r1), 0, 0
    stfd f30, 0x650(r1)
    psq_st f30, 0x658(r1), 0, 0
    stfd f29, 0x640(r1)
    psq_st f29, 0x648(r1), 0, 0
    stfd f28, 0x630(r1)
    psq_st f28, 0x638(r1), 0, 0
    stfd f27, 0x620(r1)
    psq_st f27, 0x628(r1), 0, 0
    stfd f26, 0x610(r1)
    psq_st f26, 0x618(r1), 0, 0
    stfd f25, 0x600(r1)
    psq_st f25, 0x608(r1), 0, 0
    stfd f24, 0x5f0(r1)
    psq_st f24, 0x5f8(r1), 0, 0
    stfd f23, 0x5e0(r1)
    psq_st f23, 0x5e8(r1), 0, 0
    bl _savegpr_14
    srwi r6, r4, 31
    addis r5, r3, 0x4
    add r0, r6, r4
    lwz r5, 0x517c(r5)
    srawi r8, r0, 1
    clrlwi r4, r4, 31
    subfic r7, r5, 0x1
    xor r0, r4, r6
    subf r0, r6, r0
    cmpw r8, r7
    cntlzw r4, r0
    mr r0, r7
    srwi r5, r4, 5
    ble lbl_fn_8056E91C_00001944
    mr r0, r8
lbl_fn_8056E91C_00001944:
    cmpwi r0, -0x1
    ble lbl_fn_8056E91C_00001954
    li r7, -0x1
    b lbl_fn_8056E91C_00001960
lbl_fn_8056E91C_00001954:
    cmpw r8, r7
    ble lbl_fn_8056E91C_00001960
    mr r7, r8
lbl_fn_8056E91C_00001960:
    addis r4, r3, 0x4
    lwz r0, 0x5178(r4)
    add. r6, r0, r7
    bge lbl_fn_8056E91C_00001974
    addi r6, r6, 0x2d
lbl_fn_8056E91C_00001974:
    cmpwi r5, 0x0
    beq lbl_fn_8056E91C_00001984
    cmpwi r7, -0x1
    blt lbl_fn_8056E91C_00001C20
lbl_fn_8056E91C_00001984:
    mulli r0, r6, 0x1808
    lfs f25, lbl_80888020
    lfs f24, lbl_80888034
    addi r16, r1, 0x4a0
    addi r14, r1, 0x560
    add r3, r3, r0
    addi r20, r3, 0x8
    addi r19, r1, 0x380
    addi r17, r1, 0x440
    addi r18, r1, 0x3e0
    addi r15, r1, 0x350
    li r21, 0x0
    li r22, 0x0
    li r23, 0x0
lbl_fn_8056E91C_000019BC:
    add r24, r20, r23
    addi r3, r1, 0x560
    lfs f1, 0x1558(r24)
    lfs f2, 0x155c(r24)
    lfs f3, 0x1560(r24)
    bl fn_805F90D0
    lha r0, 0x1564(r24)
    cmpwi r0, 0x0
    bne lbl_fn_8056E91C_000019E8
    lfs f8, lbl_80888020
    b lbl_fn_8056E91C_00001A04
lbl_fn_8056E91C_000019E8:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x20(r1)
    lfs f8, 0x20(r1)
lbl_fn_8056E91C_00001A04:
    lha r0, 0x1566(r24)
    cmpwi r0, 0x0
    bne lbl_fn_8056E91C_00001A18
    lfs f7, lbl_80888020
    b lbl_fn_8056E91C_00001A34
lbl_fn_8056E91C_00001A18:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x24(r1)
    lfs f7, 0x24(r1)
lbl_fn_8056E91C_00001A34:
    lha r0, 0x1568(r24)
    cmpwi r0, 0x0
    bne lbl_fn_8056E91C_00001A48
    lfs f0, lbl_80888020
    b lbl_fn_8056E91C_00001A64
lbl_fn_8056E91C_00001A48:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x28(r1)
    lfs f0, 0x28(r1)
lbl_fn_8056E91C_00001A64:
    frsp f1, f0
    stfs f8, 0x44(r1)
    stfs f7, 0x48(r1)
    fcmpu cr0, f25, f1
    stfs f0, 0x4c(r1)
    stfs f25, 0x3ac(r1)
    stfs f25, 0x3a4(r1)
    stfs f25, 0x3a0(r1)
    stfs f25, 0x39c(r1)
    stfs f25, 0x398(r1)
    stfs f25, 0x390(r1)
    stfs f25, 0x38c(r1)
    stfs f25, 0x388(r1)
    stfs f25, 0x384(r1)
    stfs f24, 0x3a8(r1)
    stfs f24, 0x394(r1)
    stfs f24, 0x380(r1)
    beq lbl_fn_8056E91C_00001AF8
    addi r3, r1, 0x470
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r19
    addi r4, r1, 0x470
    addi r5, r1, 0x4a0
    bl fn_805F89F0
    psq_l f1, 0x0(r16), 0, 0
    psq_l f2, 0x8(r16), 0, 0
    psq_l f3, 0x10(r16), 0, 0
    psq_l f4, 0x18(r16), 0, 0
    psq_l f5, 0x20(r16), 0, 0
    psq_l f6, 0x28(r16), 0, 0
    psq_st f1, 0x0(r19), 0, 0
    psq_st f2, 0x8(r19), 0, 0
    psq_st f3, 0x10(r19), 0, 0
    psq_st f4, 0x18(r19), 0, 0
    psq_st f5, 0x20(r19), 0, 0
    psq_st f6, 0x28(r19), 0, 0
lbl_fn_8056E91C_00001AF8:
    lfs f1, 0x48(r1)
    fcmpu cr0, f25, f1
    beq lbl_fn_8056E91C_00001B50
    addi r3, r1, 0x410
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r19
    addi r4, r1, 0x410
    addi r5, r1, 0x440
    bl fn_805F89F0
    psq_l f1, 0x0(r17), 0, 0
    psq_l f2, 0x8(r17), 0, 0
    psq_l f3, 0x10(r17), 0, 0
    psq_l f4, 0x18(r17), 0, 0
    psq_l f5, 0x20(r17), 0, 0
    psq_l f6, 0x28(r17), 0, 0
    psq_st f1, 0x0(r19), 0, 0
    psq_st f2, 0x8(r19), 0, 0
    psq_st f3, 0x10(r19), 0, 0
    psq_st f4, 0x18(r19), 0, 0
    psq_st f5, 0x20(r19), 0, 0
    psq_st f6, 0x28(r19), 0, 0
lbl_fn_8056E91C_00001B50:
    lfs f1, 0x44(r1)
    fcmpu cr0, f25, f1
    beq lbl_fn_8056E91C_00001BA8
    addi r3, r1, 0x3b0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r19
    addi r4, r1, 0x3b0
    addi r5, r1, 0x3e0
    bl fn_805F89F0
    psq_l f1, 0x0(r18), 0, 0
    psq_l f2, 0x8(r18), 0, 0
    psq_l f3, 0x10(r18), 0, 0
    psq_l f4, 0x18(r18), 0, 0
    psq_l f5, 0x20(r18), 0, 0
    psq_l f6, 0x28(r18), 0, 0
    psq_st f1, 0x0(r19), 0, 0
    psq_st f2, 0x8(r19), 0, 0
    psq_st f3, 0x10(r19), 0, 0
    psq_st f4, 0x18(r19), 0, 0
    psq_st f5, 0x20(r19), 0, 0
    psq_st f6, 0x28(r19), 0, 0
lbl_fn_8056E91C_00001BA8:
    mr r3, r14
    mr r4, r19
    addi r5, r1, 0x350
    bl fn_805F89F0
    lwz r3, lbl_8087F048
    addi r4, r1, 0x560
    psq_l f1, 0x0(r15), 0, 0
    psq_l f2, 0x8(r15), 0, 0
    addis r3, r3, 0x1
    psq_l f3, 0x10(r15), 0, 0
    subi r3, r3, 0x5eb0
    psq_l f4, 0x18(r15), 0, 0
    psq_l f5, 0x20(r15), 0, 0
    psq_l f6, 0x28(r15), 0, 0
    psq_st f1, 0x0(r14), 0, 0
    psq_st f2, 0x8(r14), 0, 0
    psq_st f3, 0x10(r14), 0, 0
    psq_st f4, 0x18(r14), 0, 0
    psq_st f5, 0x20(r14), 0, 0
    psq_st f6, 0x28(r14), 0, 0
    lwzux r12, r3, r22
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    addi r21, r21, 0x1
    addi r23, r23, 0x14
    cmpwi r21, 0x20
    addi r22, r22, 0xc8
    blt lbl_fn_8056E91C_000019BC
    b lbl_fn_8056E91C_0000222C
lbl_fn_8056E91C_00001C20:
    lis r4, 0xb60b
    addi r5, r6, 0x1
    addi r0, r4, 0x60b7
    lfs f29, lbl_80888020
    mulhw r0, r0, r5
    lfs f30, lbl_80888034
    lfs f31, lbl_80888050
    addi r25, r1, 0x320
    addi r27, r1, 0x530
    addi r22, r1, 0x200
    add r0, r0, r5
    addi r24, r1, 0x2c0
    srawi r0, r0, 5
    addi r23, r1, 0x260
    srwi r4, r0, 31
    addi r26, r1, 0x1d0
    add r0, r0, r4
    addi r19, r1, 0x1a0
    mulli r0, r0, 0x2d
    addi r21, r1, 0x500
    addi r16, r1, 0x80
    addi r18, r1, 0x140
    subf r0, r0, r5
    addi r17, r1, 0xe0
    mulli r4, r6, 0x1808
    addi r20, r1, 0x50
    li r15, 0x0
    li r31, 0x0
    mulli r0, r0, 0x1808
    li r30, 0x0
    add r4, r3, r4
    add r3, r3, r0
    addi r0, r4, 0x8
    stw r0, 0x590(r1)
    addi r14, r3, 0x8
lbl_fn_8056E91C_00001CAC:
    lwz r0, 0x590(r1)
    add r29, r14, r30
    addi r3, r1, 0x530
    add r28, r0, r30
    lfs f1, 0x1558(r28)
    lfs f2, 0x155c(r28)
    lfs f3, 0x1560(r28)
    bl fn_805F90D0
    lha r0, 0x1564(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8056E91C_00001CE0
    lfs f8, lbl_80888020
    b lbl_fn_8056E91C_00001CFC
lbl_fn_8056E91C_00001CE0:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x14(r1)
    lfs f8, 0x14(r1)
lbl_fn_8056E91C_00001CFC:
    lha r0, 0x1566(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8056E91C_00001D10
    lfs f7, lbl_80888020
    b lbl_fn_8056E91C_00001D2C
lbl_fn_8056E91C_00001D10:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x18(r1)
    lfs f7, 0x18(r1)
lbl_fn_8056E91C_00001D2C:
    lha r0, 0x1568(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8056E91C_00001D40
    lfs f0, lbl_80888020
    b lbl_fn_8056E91C_00001D5C
lbl_fn_8056E91C_00001D40:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x1c(r1)
    lfs f0, 0x1c(r1)
lbl_fn_8056E91C_00001D5C:
    frsp f1, f0
    stfs f8, 0x38(r1)
    stfs f7, 0x3c(r1)
    fcmpu cr0, f29, f1
    stfs f0, 0x40(r1)
    stfs f29, 0x22c(r1)
    stfs f29, 0x224(r1)
    stfs f29, 0x220(r1)
    stfs f29, 0x21c(r1)
    stfs f29, 0x218(r1)
    stfs f29, 0x210(r1)
    stfs f29, 0x20c(r1)
    stfs f29, 0x208(r1)
    stfs f29, 0x204(r1)
    stfs f30, 0x228(r1)
    stfs f30, 0x214(r1)
    stfs f30, 0x200(r1)
    beq lbl_fn_8056E91C_00001DF0
    addi r3, r1, 0x2f0
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r22
    addi r4, r1, 0x2f0
    addi r5, r1, 0x320
    bl fn_805F89F0
    psq_l f1, 0x0(r25), 0, 0
    psq_l f2, 0x8(r25), 0, 0
    psq_l f3, 0x10(r25), 0, 0
    psq_l f4, 0x18(r25), 0, 0
    psq_l f5, 0x20(r25), 0, 0
    psq_l f6, 0x28(r25), 0, 0
    psq_st f1, 0x0(r22), 0, 0
    psq_st f2, 0x8(r22), 0, 0
    psq_st f3, 0x10(r22), 0, 0
    psq_st f4, 0x18(r22), 0, 0
    psq_st f5, 0x20(r22), 0, 0
    psq_st f6, 0x28(r22), 0, 0
lbl_fn_8056E91C_00001DF0:
    lfs f1, 0x3c(r1)
    fcmpu cr0, f29, f1
    beq lbl_fn_8056E91C_00001E48
    addi r3, r1, 0x290
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r22
    addi r4, r1, 0x290
    addi r5, r1, 0x2c0
    bl fn_805F89F0
    psq_l f1, 0x0(r24), 0, 0
    psq_l f2, 0x8(r24), 0, 0
    psq_l f3, 0x10(r24), 0, 0
    psq_l f4, 0x18(r24), 0, 0
    psq_l f5, 0x20(r24), 0, 0
    psq_l f6, 0x28(r24), 0, 0
    psq_st f1, 0x0(r22), 0, 0
    psq_st f2, 0x8(r22), 0, 0
    psq_st f3, 0x10(r22), 0, 0
    psq_st f4, 0x18(r22), 0, 0
    psq_st f5, 0x20(r22), 0, 0
    psq_st f6, 0x28(r22), 0, 0
lbl_fn_8056E91C_00001E48:
    lfs f1, 0x38(r1)
    fcmpu cr0, f29, f1
    beq lbl_fn_8056E91C_00001EA0
    addi r3, r1, 0x230
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r22
    addi r4, r1, 0x230
    addi r5, r1, 0x260
    bl fn_805F89F0
    psq_l f1, 0x0(r23), 0, 0
    psq_l f2, 0x8(r23), 0, 0
    psq_l f3, 0x10(r23), 0, 0
    psq_l f4, 0x18(r23), 0, 0
    psq_l f5, 0x20(r23), 0, 0
    psq_l f6, 0x28(r23), 0, 0
    psq_st f1, 0x0(r22), 0, 0
    psq_st f2, 0x8(r22), 0, 0
    psq_st f3, 0x10(r22), 0, 0
    psq_st f4, 0x18(r22), 0, 0
    psq_st f5, 0x20(r22), 0, 0
    psq_st f6, 0x28(r22), 0, 0
lbl_fn_8056E91C_00001EA0:
    mr r3, r27
    mr r4, r22
    addi r5, r1, 0x1d0
    bl fn_805F89F0
    psq_l f1, 0x0(r26), 0, 0
    addi r3, r1, 0x500
    psq_l f2, 0x8(r26), 0, 0
    psq_l f3, 0x10(r26), 0, 0
    psq_l f4, 0x18(r26), 0, 0
    psq_l f5, 0x20(r26), 0, 0
    psq_l f6, 0x28(r26), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
    lfs f1, 0x1558(r29)
    lfs f2, 0x155c(r29)
    lfs f3, 0x1560(r29)
    bl fn_805F90D0
    lha r0, 0x1564(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8056E91C_00001F08
    lfs f8, lbl_80888020
    b lbl_fn_8056E91C_00001F24
lbl_fn_8056E91C_00001F08:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x8(r1)
    lfs f8, 0x8(r1)
lbl_fn_8056E91C_00001F24:
    lha r0, 0x1566(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8056E91C_00001F38
    lfs f7, lbl_80888020
    b lbl_fn_8056E91C_00001F54
lbl_fn_8056E91C_00001F38:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0xc(r1)
    lfs f7, 0xc(r1)
lbl_fn_8056E91C_00001F54:
    lha r0, 0x1568(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8056E91C_00001F68
    lfs f0, lbl_80888020
    b lbl_fn_8056E91C_00001F84
lbl_fn_8056E91C_00001F68:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x10(r1)
    lfs f0, 0x10(r1)
lbl_fn_8056E91C_00001F84:
    frsp f1, f0
    stfs f8, 0x2c(r1)
    stfs f7, 0x30(r1)
    fcmpu cr0, f29, f1
    stfs f0, 0x34(r1)
    stfs f29, 0xac(r1)
    stfs f29, 0xa4(r1)
    stfs f29, 0xa0(r1)
    stfs f29, 0x9c(r1)
    stfs f29, 0x98(r1)
    stfs f29, 0x90(r1)
    stfs f29, 0x8c(r1)
    stfs f29, 0x88(r1)
    stfs f29, 0x84(r1)
    stfs f30, 0xa8(r1)
    stfs f30, 0x94(r1)
    stfs f30, 0x80(r1)
    beq lbl_fn_8056E91C_00002018
    addi r3, r1, 0x170
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r16
    addi r4, r1, 0x170
    addi r5, r1, 0x1a0
    bl fn_805F89F0
    psq_l f1, 0x0(r19), 0, 0
    psq_l f2, 0x8(r19), 0, 0
    psq_l f3, 0x10(r19), 0, 0
    psq_l f4, 0x18(r19), 0, 0
    psq_l f5, 0x20(r19), 0, 0
    psq_l f6, 0x28(r19), 0, 0
    psq_st f1, 0x0(r16), 0, 0
    psq_st f2, 0x8(r16), 0, 0
    psq_st f3, 0x10(r16), 0, 0
    psq_st f4, 0x18(r16), 0, 0
    psq_st f5, 0x20(r16), 0, 0
    psq_st f6, 0x28(r16), 0, 0
lbl_fn_8056E91C_00002018:
    lfs f1, 0x30(r1)
    fcmpu cr0, f29, f1
    beq lbl_fn_8056E91C_00002070
    addi r3, r1, 0x110
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r16
    addi r4, r1, 0x110
    addi r5, r1, 0x140
    bl fn_805F89F0
    psq_l f1, 0x0(r18), 0, 0
    psq_l f2, 0x8(r18), 0, 0
    psq_l f3, 0x10(r18), 0, 0
    psq_l f4, 0x18(r18), 0, 0
    psq_l f5, 0x20(r18), 0, 0
    psq_l f6, 0x28(r18), 0, 0
    psq_st f1, 0x0(r16), 0, 0
    psq_st f2, 0x8(r16), 0, 0
    psq_st f3, 0x10(r16), 0, 0
    psq_st f4, 0x18(r16), 0, 0
    psq_st f5, 0x20(r16), 0, 0
    psq_st f6, 0x28(r16), 0, 0
lbl_fn_8056E91C_00002070:
    lfs f1, 0x2c(r1)
    fcmpu cr0, f29, f1
    beq lbl_fn_8056E91C_000020C8
    addi r3, r1, 0xb0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r16
    addi r4, r1, 0xb0
    addi r5, r1, 0xe0
    bl fn_805F89F0
    psq_l f1, 0x0(r17), 0, 0
    psq_l f2, 0x8(r17), 0, 0
    psq_l f3, 0x10(r17), 0, 0
    psq_l f4, 0x18(r17), 0, 0
    psq_l f5, 0x20(r17), 0, 0
    psq_l f6, 0x28(r17), 0, 0
    psq_st f1, 0x0(r16), 0, 0
    psq_st f2, 0x8(r16), 0, 0
    psq_st f3, 0x10(r16), 0, 0
    psq_st f4, 0x18(r16), 0, 0
    psq_st f5, 0x20(r16), 0, 0
    psq_st f6, 0x28(r16), 0, 0
lbl_fn_8056E91C_000020C8:
    mr r3, r21
    mr r4, r16
    addi r5, r1, 0x50
    bl fn_805F89F0
    psq_l f6, 0x28(r20), 0, 0
    addi r4, r1, 0x4d0
    psq_st f6, 0x28(r21), 0, 0
    psq_l f5, 0x20(r20), 0, 0
    lfs f8, 0x55c(r1)
    lfs f7, 0x52c(r1)
    lfs f9, 0x558(r1)
    lfs f0, 0x528(r1)
    fadds f10, f8, f7
    psq_st f5, 0x20(r21), 0, 0
    fadds f11, f9, f0
    psq_l f4, 0x18(r20), 0, 0
    fmuls f0, f10, f31
    psq_st f4, 0x18(r21), 0, 0
    psq_l f3, 0x10(r20), 0, 0
    lfs f8, 0x554(r1)
    lfs f7, 0x524(r1)
    psq_l f2, 0x8(r20), 0, 0
    fadds f12, f8, f7
    lfs f10, 0x550(r1)
    fmuls f7, f11, f31
    lfs f9, 0x520(r1)
    lfs f11, 0x54c(r1)
    fadds f26, f10, f9
    lfs f8, 0x51c(r1)
    psq_l f1, 0x0(r20), 0, 0
    fadds f24, f11, f8
    psq_st f3, 0x10(r21), 0, 0
    fmuls f8, f12, f31
    lfs f10, 0x548(r1)
    lfs f9, 0x518(r1)
    psq_st f2, 0x8(r21), 0, 0
    fadds f25, f10, f9
    lfs f13, 0x544(r1)
    fmuls f10, f24, f31
    lfs f11, 0x514(r1)
    lwz r3, lbl_8087F048
    fadds f13, f13, f11
    fmuls f11, f25, f31
    addis r3, r3, 0x1
    lfs f12, 0x540(r1)
    subi r3, r3, 0x5eb0
    lfs f9, 0x510(r1)
    lfs f25, 0x53c(r1)
    fadds f27, f12, f9
    lfs f24, 0x50c(r1)
    fmuls f12, f13, f31
    psq_st f1, 0x0(r21), 0, 0
    fadds f24, f25, f24
    fmuls f9, f26, f31
    fmuls f13, f27, f31
    lfs f27, 0x538(r1)
    fmuls f28, f24, f31
    lfs f26, 0x508(r1)
    lfs f24, 0x534(r1)
    fadds f23, f27, f26
    lfs f25, 0x504(r1)
    stfs f28, 0x4dc(r1)
    fmuls f28, f23, f31
    lfs f26, 0x530(r1)
    lfs f27, 0x500(r1)
    fadds f24, f24, f25
    stfs f13, 0x4e0(r1)
    fadds f25, f26, f27
    fmuls f13, f24, f31
    stfs f28, 0x4d8(r1)
    fmuls f27, f25, f31
    stfs f13, 0x4d4(r1)
    stfs f27, 0x4d0(r1)
    stfs f12, 0x4e4(r1)
    stfs f11, 0x4e8(r1)
    stfs f10, 0x4ec(r1)
    stfs f9, 0x4f0(r1)
    stfs f8, 0x4f4(r1)
    stfs f7, 0x4f8(r1)
    stfs f0, 0x4fc(r1)
    lwzux r12, r3, r31
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    addi r15, r15, 0x1
    addi r30, r30, 0x14
    cmpwi r15, 0x20
    addi r31, r31, 0xc8
    blt lbl_fn_8056E91C_00001CAC
lbl_fn_8056E91C_0000222C:
    addi r11, r1, 0x5e0
    psq_l f31, 0x668(r1), 0, 0
    lfd f31, 0x660(r1)
    psq_l f30, 0x658(r1), 0, 0
    lfd f30, 0x650(r1)
    psq_l f29, 0x648(r1), 0, 0
    lfd f29, 0x640(r1)
    psq_l f28, 0x638(r1), 0, 0
    lfd f28, 0x630(r1)
    psq_l f27, 0x628(r1), 0, 0
    lfd f27, 0x620(r1)
    psq_l f26, 0x618(r1), 0, 0
    lfd f26, 0x610(r1)
    psq_l f25, 0x608(r1), 0, 0
    lfd f25, 0x600(r1)
    psq_l f24, 0x5f8(r1), 0, 0
    lfd f24, 0x5f0(r1)
    psq_l f23, 0x5e8(r1), 0, 0
    lfd f23, 0x5e0(r1)
    bl _restgpr_14
    lwz r0, 0x674(r1)
    mtlr r0
    addi r1, r1, 0x670
    blr
}
