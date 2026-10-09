#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void DCFlushRange(void);
extern void ICInvalidateRange(void);
extern void OSDisableInterrupts(void);
extern void OSEnableScheduler(void);
extern void OSReport(const char* msg, ...);
extern void OSResetSystem(void);
extern void OSRestoreInterrupts(void);
extern void __ArenaLo(void);
extern void fn_80082490(void);
extern void fn_8008263C(void);
extern void fn_80674480(void);
extern void fn_806744DC(void);
extern void fn_80674530(void);
extern void fn_806745D4(void);
extern void fn_80674654(void);
extern void fn_80674764(void);
extern void fn_80674768(void);
extern void fn_80674EF8(void);
extern void fn_80674F08(void);

/* External data declarations */
extern u8 PPCHalt[];
extern u8 TRK_saved_exceptionID_80880330[];
extern u8 _db_stack_addr[];
extern u8 gDBCommTable[];
extern u8 gTRKCPUState[];
extern u8 gTRKExceptionStatus_807BAF18[];
extern u8 gTRKInterruptVectorTable[];
extern u8 gTRKRestoreFlags[];
extern u8 gTRKSaveState[];
extern u8 gTRKState[];
extern u8 jumptable_807BAC40[];
extern u8 jumptable_807BAEB0[];
extern u8 jumptable_807BAECC[];
extern u8 lbl_807651B8[];
extern u8 lbl_807651C8[];
extern u8 lbl_807651F0[];
extern u8 lbl_80765218[];
extern u8 lbl_80765240[];
extern u8 lbl_807BACB0[];
extern u8 lbl_807BACF0[];
extern u8 lbl_807BADD8[];
extern u8 lbl_807BADF8[];
extern u8 lbl_807BAE18[];
extern u8 lbl_807BAE60[];
extern u8 lbl_807BAE88[];
extern u8 lbl_807BAEE8[];
extern u8 lbl_8082FFA8[];
extern u8 lbl_808304A8[];
extern u8 lbl_808304F0[];
extern u8 lbl_80830518[];
extern u8 lbl_80831ED0[];
extern u8 lbl_80831F80[];
extern u8 lbl_80832468[];

/* Small data declarations */
extern u32 TRK_Use_BBA;
extern u32 TRK_mainError_808802F8;
extern u32 gTRKInputPendingPtr;
extern u32 lbl_808802F0;
extern u32 lbl_80880300;
extern u32 lbl_80880310;
extern u32 lbl_80880320;
extern u32 lbl_80880328;
extern u32 lbl_8088032C;
extern u32 lbl_80880338;
extern u32 lbl_80880340;
extern u32 lbl_80888A58;

/* Function declarations */
void gdev_cc_initialize(void);
void gdev_cc_shutdown(void);
void gdev_cc_open(void);
void gdev_cc_close(void);
void gdev_cc_read(void);
void gdev_cc_write(void);
void gdev_cc_pre_continue(void);
void gdev_cc_post_stop(void);
void gdev_cc_peek(void);
void gdev_cc_initinterrupts(void);
void fn_80675190(void);
void fn_80675194(void);
void fn_806751C4(void);
void fn_806751CC(void);
void fn_806751D4(void);
void fn_806751F8(void);
void fn_80675300(void);
void fn_80675408(void);
void TRK_main(void);
void TRKNubMainLoop(void);
void fn_80675568(void);
void fn_806756A4(void);
void TRKDispatchMessage(void);
void InitMetroTRK(void);
void InitMetroTRK_BBA(void);
void EnableMetroTRKInterrupts(void);
void fn_80675A1C(void);
void fn_80675A84(void);
void TRKInitializeTarget(void);
void fn_80675C00(void);
void TRKLoadContext(void);
void TRKEXICallBack(void);
void InitMetroTRKCommTable(void);
void TRKUARTInterruptHandler(void);
void TRKInitializeIntDrivenUART(void);
void fn_80675E60(void);
void fn_80675E8C(void);
void fn_80675EA0(void);
void fn_80675EDC(void);
void ReserveEXI2Port(void);
void UnreserveEXI2Port(void);
void TRK_board_display(void);
void InitializeProgramEndTrap(void);
void fn_80675FAC(void);
void TRKInitializeEventQueue(void);
void TRKGetNextEvent(void);
void fn_806760EC(void);
void fn_806761B8(void);
void TRKDestructEvent(void);
void TRKInitializeNub(void);
void TRKTerminateNub(void);
void TRKNubWelcome(void);
void TRKInitializeEndian(void);
void fn_80676328(void);
void TRKGetInput(void);
void fn_80676420(void);
void TRKInitializeSerialHandler(void);
void fn_80676468(void);
void fn_80676470(void);
void fn_8067648C(void);
void fn_80676680(void);
void fn_806767A8(void);
void fn_806768C0(void);
void fn_806769A4(void);
void TRKTargetContinue(void);
void TRKSaveExtended1Block(void);
void TRKRestoreExtended1Block(void);
void fn_80676E0C(void);
void TRKInitializeMessageBuffers(void);
void fn_80676E90(void);
void TRKGetBuffer(void);
void fn_80676F50(void);
void fn_80676F78(void);
void fn_80676FA0(void);
void fn_80676FD0(void);
void fn_80677074(void);
void fn_80677104(void);
void fn_806771D4(void);
void fn_806772C8(void);
void fn_8067732C(void);
void fn_8067741C(void);
void fn_806774FC(void);
void fn_80677594(void);
void fn_8067767C(void);
void fn_80677684(void);
void fn_806776F4(void);
void fn_8067777C(void);
void fn_806777E8(void);
void fn_80677854(void);
void fn_80677A88(void);
void fn_80677C98(void);
void fn_80677E94(void);
void fn_80678134(void);
void fn_806781F8(void);
void fn_8067847C(void);
void fn_80678534(void);
void fn_80678600(void);
void fn_80678668(void);
void fn_806786D0(void);
void fn_806786D4(void);
void fn_806786DC(void);
void fn_806786E4(void);
void fn_80678754(void);
void fn_80678800(void);
void fn_80678808(void);
void fn_80678810(void);
void fn_80678908(void);
void fn_806789D4(void);
void fn_80678B24(void);
void fn_80678C1C(void);
void fn_80678D58(void);
void fn_80678EBC(void);
void TRKInterruptHandler(void);
void TRKExceptionHandler(void);
void TRKPostInterruptEvent(void);
void TRKSwapAndGo(void);
void TRKInterruptHandlerEnableInterrupts(void);
void TRKTargetInterrupt(void);
void fn_80679488(void);
void fn_80679688(void);
void fn_80679724(void);
void fn_80679848(void);
void fn_806798D0(void);
void fn_80679944(void);
void TRKTargetSupportRequest(void);
void TRKTargetStopped(void);
void TRKTargetSetStopped(void);
void fn_80679B68(void);
void fn_80679B80(void);
void fn_80679C5C(void);
void fn_80679D04(void);
void fn_80679D28(void);
void fn_80679D4C(void);
void fn_80679F14(void);
void TRKTargetSetInputPendingPtr(void);
void fn_80679F8C(void);
void fn_80679F94(void);
void fn_8067A024(void);
void fn_8067A02C(void);
void fn_8067A034(void);
void fn_8067A238(void);
void fn_8067A388(void);
void fn_8067A430(void);
void fn_8067A670(void);
void fn_8067A74C(void);
void fn_8067A870(void);
void fn_8067AA78(void);
void fn_8067AC64(void);
void fn_8067AEC4(void);
void fn_8067AF64(void);
void fn_8067B094(void);
void fn_8067B3AC(void);

asm void gdev_cc_initialize(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80674480
    lis r3, lbl_808304A8@ha
    lis r4, lbl_8082FFA8@ha
    addi r3, r3, lbl_808304A8@l
    li r5, 0x500
    addi r4, r4, lbl_8082FFA8@l
    bl fn_806751D4
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void gdev_cc_shutdown(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void gdev_cc_open(void)
{
    nofralloc
    lwz r0, lbl_808802F0
    cmpwi r0, 0x0
    beq lbl_gdev_cc_open_00000058
    li r3, -0x2715
    blr
lbl_gdev_cc_open_00000058:
    li r0, 0x1
    stw r0, lbl_808802F0
    li r3, 0x0
    blr
}

asm void gdev_cc_close(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void gdev_cc_read(void)
{
    nofralloc
    stwu r1, -0x520(r1)
    mflr r0
    stw r0, 0x524(r1)
    stmw r27, 0x50c(r1)
    mr r27, r3
    mr r28, r4
    li r30, 0x0
    lwz r0, lbl_808802F0
    cmpwi r0, 0x0
    bne lbl_gdev_cc_read_000000A0
    li r3, -0x2711
    b lbl_gdev_cc_read_00000110
lbl_gdev_cc_read_000000A0:
    lis r31, lbl_808304A8@ha
    b lbl_gdev_cc_read_000000E4
lbl_gdev_cc_read_000000A8:
    li r30, 0x0
    bl fn_80674530
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_gdev_cc_read_000000E4
    mr r4, r28
    addi r3, r1, 0x8
    bl fn_806745D4
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_gdev_cc_read_000000E4
    mr r5, r29
    addi r3, r31, lbl_808304A8@l
    addi r4, r1, 0x8
    bl fn_806751F8
lbl_gdev_cc_read_000000E4:
    addi r3, r31, lbl_808304A8@l
    bl fn_806751CC
    cmplw r3, r28
    blt lbl_gdev_cc_read_000000A8
    cmpwi r30, 0x0
    bne lbl_gdev_cc_read_0000010C
    mr r4, r27
    mr r5, r28
    addi r3, r31, lbl_808304A8@l
    bl fn_80675300
lbl_gdev_cc_read_0000010C:
    mr r3, r30
lbl_gdev_cc_read_00000110:
    lmw r27, 0x50c(r1)
    lwz r0, 0x524(r1)
    mtlr r0
    addi r1, r1, 0x520
    blr
}

asm void gdev_cc_write(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, lbl_808802F0
    cmpwi r0, 0x0
    bne lbl_gdev_cc_write_00000174
    li r3, -0x2711
    b lbl_gdev_cc_write_00000180
    b lbl_gdev_cc_write_00000174
lbl_gdev_cc_write_00000158:
    mr r3, r30
    mr r4, r31
    bl fn_80674654
    cmpwi r3, 0x0
    beq lbl_gdev_cc_write_0000017C
    add r30, r30, r3
    subf r31, r3, r31
lbl_gdev_cc_write_00000174:
    cmpwi r31, 0x0
    bgt lbl_gdev_cc_write_00000158
lbl_gdev_cc_write_0000017C:
    li r3, 0x0
lbl_gdev_cc_write_00000180:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void gdev_cc_pre_continue(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80674768
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void gdev_cc_post_stop(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80674764
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void gdev_cc_peek(void)
{
    nofralloc
    stwu r1, -0x510(r1)
    mflr r0
    stw r0, 0x514(r1)
    stw r31, 0x50c(r1)
    bl fn_80674530
    cmpwi r3, 0x0
    mr r31, r3
    bgt lbl_gdev_cc_peek_00000208
    li r3, 0x0
    b lbl_gdev_cc_peek_00000240
lbl_gdev_cc_peek_00000208:
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_806745D4
    cmpwi r3, 0x0
    bne lbl_gdev_cc_peek_00000234
    lis r3, lbl_808304A8@ha
    mr r5, r31
    addi r3, r3, lbl_808304A8@l
    addi r4, r1, 0x8
    bl fn_806751F8
    b lbl_gdev_cc_peek_0000023C
lbl_gdev_cc_peek_00000234:
    li r3, -0x2719
    b lbl_gdev_cc_peek_00000240
lbl_gdev_cc_peek_0000023C:
    mr r3, r31
lbl_gdev_cc_peek_00000240:
    lwz r0, 0x514(r1)
    lwz r31, 0x50c(r1)
    mtlr r0
    addi r1, r1, 0x510
    blr
}

asm void gdev_cc_initinterrupts(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_806744DC
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80675190(void)
{
    nofralloc
    blr
}

asm void fn_80675194(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    stw r3, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806751C4(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    b OSRestoreInterrupts
}

asm void fn_806751CC(void)
{
    nofralloc
    lwz r3, 0x10(r3)
    blr
}

asm void fn_806751D4(void)
{
    nofralloc
    li r0, 0x0
    stw r4, 0x8(r3)
    stw r5, 0xc(r3)
    stw r4, 0x0(r3)
    stw r4, 0x4(r3)
    stw r0, 0x10(r3)
    stw r5, 0x14(r3)
    addi r3, r3, 0x18
    b fn_80675190
}

asm void fn_806751F8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r0, 0x14(r3)
    cmplw r5, r0
    ble lbl_fn_806751F8_0000031C
    li r3, -0x1
    b lbl_fn_806751F8_000003C8
lbl_fn_806751F8_0000031C:
    addi r3, r3, 0x18
    bl fn_80675194
    lwz r3, 0x4(r30)
    lwz r4, 0x8(r30)
    lwz r0, 0xc(r30)
    subf r4, r4, r3
    subf r29, r4, r0
    cmplw r29, r31
    blt lbl_fn_806751F8_0000035C
    mr r4, r28
    mr r5, r31
    bl memcpy
    lwz r0, 0x4(r30)
    add r0, r0, r31
    stw r0, 0x4(r30)
    b lbl_fn_806751F8_00000388
lbl_fn_806751F8_0000035C:
    mr r4, r28
    mr r5, r29
    bl memcpy
    lwz r3, 0x8(r30)
    add r4, r28, r29
    subf r5, r29, r31
    bl memcpy
    lwz r0, 0x8(r30)
    add r0, r0, r31
    subf r0, r29, r0
    stw r0, 0x4(r30)
lbl_fn_806751F8_00000388:
    lwz r4, 0x8(r30)
    lwz r0, 0x4(r30)
    lwz r3, 0xc(r30)
    subf r0, r4, r0
    cmplw r3, r0
    bne lbl_fn_806751F8_000003A4
    stw r4, 0x4(r30)
lbl_fn_806751F8_000003A4:
    lwz r4, 0x14(r30)
    addi r3, r30, 0x18
    lwz r0, 0x10(r30)
    subf r4, r31, r4
    stw r4, 0x14(r30)
    add r0, r0, r31
    stw r0, 0x10(r30)
    bl fn_806751C4
    li r3, 0x0
lbl_fn_806751F8_000003C8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80675300(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r0, 0x10(r3)
    cmplw r5, r0
    ble lbl_fn_80675300_00000424
    li r3, -0x1
    b lbl_fn_80675300_000004D0
lbl_fn_80675300_00000424:
    addi r3, r3, 0x18
    bl fn_80675194
    lwz r4, 0x0(r30)
    lwz r3, 0x8(r30)
    lwz r0, 0xc(r30)
    subf r3, r3, r4
    subf r29, r3, r0
    cmplw r31, r29
    bge lbl_fn_80675300_00000464
    mr r3, r28
    mr r5, r31
    bl memcpy
    lwz r0, 0x0(r30)
    add r0, r0, r31
    stw r0, 0x0(r30)
    b lbl_fn_80675300_00000490
lbl_fn_80675300_00000464:
    mr r3, r28
    mr r5, r29
    bl memcpy
    lwz r4, 0x8(r30)
    add r3, r28, r29
    subf r5, r29, r31
    bl memcpy
    lwz r0, 0x8(r30)
    add r0, r0, r31
    subf r0, r29, r0
    stw r0, 0x0(r30)
lbl_fn_80675300_00000490:
    lwz r4, 0x8(r30)
    lwz r0, 0x0(r30)
    lwz r3, 0xc(r30)
    subf r0, r4, r0
    cmplw r3, r0
    bne lbl_fn_80675300_000004AC
    stw r4, 0x0(r30)
lbl_fn_80675300_000004AC:
    lwz r4, 0x14(r30)
    addi r3, r30, 0x18
    lwz r0, 0x10(r30)
    add r4, r4, r31
    stw r4, 0x14(r30)
    subf r0, r31, r0
    stw r0, 0x10(r30)
    bl fn_806751C4
    li r3, 0x0
lbl_fn_80675300_000004D0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80675408(void)
{
    nofralloc
    lis r5, 0xffff
    ori r5, r5, 0xfff1
    and r5, r5, r3
    subf r3, r5, r3
    add r4, r4, r3
lbl_fn_80675408_00000504:
    dcbst r0, r5
    dcbf r0, r5
    sync
    icbi r0, r5
    addic r5, r5, 0x8
    subic. r4, r4, 0x8
    bge lbl_fn_80675408_00000504
    isync
    blr
}

asm void TRK_main(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl TRKInitializeNub
    cmpwi r3, 0x0
    stw r3, TRK_mainError_808802F8
    bne lbl_TRK_main_0000054C
    bl TRKNubWelcome
    bl TRKNubMainLoop
lbl_TRK_main_0000054C:
    bl TRKTerminateNub
    stw r3, TRK_mainError_808802F8
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void TRKNubMainLoop(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    b lbl_TRKNubMainLoop_00000630
lbl_TRKNubMainLoop_00000584:
    addi r3, r1, 0x8
    bl TRKGetNextEvent
    cmpwi r3, 0x0
    beq lbl_TRKNubMainLoop_000005F8
    lwz r3, 0x8(r1)
    li r30, 0x0
    subi r0, r3, 0x3
    cmplwi r0, 0x1
    ble lbl_TRKNubMainLoop_000005DC
    cmpwi r3, 0x2
    beq lbl_TRKNubMainLoop_000005C4
    cmpwi r3, 0x1
    beq lbl_TRKNubMainLoop_000005D4
    cmpwi r3, 0x5
    beq lbl_TRKNubMainLoop_000005E8
    b lbl_TRKNubMainLoop_000005EC
lbl_TRKNubMainLoop_000005C4:
    lwz r3, 0x10(r1)
    bl TRKGetBuffer
    bl TRKDispatchMessage
    b lbl_TRKNubMainLoop_000005EC
lbl_TRKNubMainLoop_000005D4:
    li r31, 0x1
    b lbl_TRKNubMainLoop_000005EC
lbl_TRKNubMainLoop_000005DC:
    addi r3, r1, 0x8
    bl TRKTargetInterrupt
    b lbl_TRKNubMainLoop_000005EC
lbl_TRKNubMainLoop_000005E8:
    bl TRKTargetSupportRequest
lbl_TRKNubMainLoop_000005EC:
    addi r3, r1, 0x8
    bl TRKDestructEvent
    b lbl_TRKNubMainLoop_00000630
lbl_TRKNubMainLoop_000005F8:
    cmpwi r30, 0x0
    beq lbl_TRKNubMainLoop_00000610
    lwz r3, gTRKInputPendingPtr
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_TRKNubMainLoop_0000061C
lbl_TRKNubMainLoop_00000610:
    li r30, 0x1
    bl TRKGetInput
    b lbl_TRKNubMainLoop_00000630
lbl_TRKNubMainLoop_0000061C:
    bl TRKTargetStopped
    cmpwi r3, 0x0
    bne lbl_TRKNubMainLoop_0000062C
    bl TRKTargetContinue
lbl_TRKNubMainLoop_0000062C:
    li r30, 0x0
lbl_TRKNubMainLoop_00000630:
    cmpwi r31, 0x0
    beq lbl_TRKNubMainLoop_00000584
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80675568(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    cmpwi r5, 0x0
    li r9, 0xff
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_80675568_0000077C
    srwi. r0, r5, 1
    mtctr r0
    beq lbl_fn_80675568_00000724
lbl_fn_80675568_00000678:
    clrrwi r12, r30, 2
    clrrwi r11, r4, 2
    subf r0, r12, r30
    lwz r7, 0x0(r11)
    subfic r10, r0, 0x3
    subf r6, r11, r4
    subfic r0, r6, 0x3
    addi r4, r4, 0x1
    slwi r0, r0, 3
    slwi r31, r10, 3
    srw r0, r7, r0
    clrrwi r11, r4, 2
    clrlwi r0, r0, 24
    lwz r8, 0x0(r12)
    slw r10, r9, r31
    subf r6, r11, r4
    slw r0, r0, r31
    addi r30, r30, 0x1
    andc r7, r8, r10
    addi r4, r4, 0x1
    and r0, r10, r0
    or r0, r7, r0
    stw r0, 0x0(r12)
    clrrwi r12, r30, 2
    subf r0, r12, r30
    lwz r7, 0x0(r11)
    subfic r10, r0, 0x3
    lwz r8, 0x0(r12)
    subfic r0, r6, 0x3
    addi r30, r30, 0x1
    slwi r0, r0, 3
    slwi r31, r10, 3
    srw r0, r7, r0
    clrlwi r0, r0, 24
    slw r10, r9, r31
    slw r0, r0, r31
    andc r7, r8, r10
    and r0, r10, r0
    or r0, r7, r0
    stw r0, 0x0(r12)
    bdnz lbl_fn_80675568_00000678
    andi. r5, r5, 0x1
    beq lbl_fn_80675568_0000077C
lbl_fn_80675568_00000724:
    mtctr r5
lbl_fn_80675568_00000728:
    clrrwi r12, r30, 2
    clrrwi r11, r4, 2
    subf r0, r12, r30
    lwz r7, 0x0(r11)
    subfic r10, r0, 0x3
    subf r6, r11, r4
    subfic r0, r6, 0x3
    lwz r8, 0x0(r12)
    slwi r0, r0, 3
    slwi r31, r10, 3
    srw r0, r7, r0
    addi r4, r4, 0x1
    clrlwi r0, r0, 24
    slw r10, r9, r31
    slw r0, r0, r31
    addi r30, r30, 0x1
    andc r7, r8, r10
    and r0, r10, r0
    or r0, r7, r0
    stw r0, 0x0(r12)
    bdnz lbl_fn_80675568_00000728
lbl_fn_80675568_0000077C:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    addi r1, r1, 0x10
    blr
}

asm void fn_806756A4(void)
{
    nofralloc
    cmpwi r5, 0x0
    clrlwi r8, r4, 24
    mr r7, r3
    li r6, 0xff
    beqlr
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_806756A4_00000878
lbl_fn_806756A4_000007AC:
    clrrwi r10, r7, 2
    subf r0, r10, r7
    lwz r4, 0x0(r10)
    subfic r0, r0, 0x3
    addi r7, r7, 0x1
    slwi r0, r0, 3
    slw r9, r6, r0
    slw r0, r8, r0
    andc r4, r4, r9
    and r0, r9, r0
    or r0, r4, r0
    stw r0, 0x0(r10)
    clrrwi r10, r7, 2
    subf r0, r10, r7
    lwz r4, 0x0(r10)
    subfic r0, r0, 0x3
    addi r7, r7, 0x1
    slwi r0, r0, 3
    slw r9, r6, r0
    slw r0, r8, r0
    andc r4, r4, r9
    and r0, r9, r0
    or r0, r4, r0
    stw r0, 0x0(r10)
    clrrwi r10, r7, 2
    subf r0, r10, r7
    lwz r4, 0x0(r10)
    subfic r0, r0, 0x3
    addi r7, r7, 0x1
    slwi r0, r0, 3
    slw r9, r6, r0
    slw r0, r8, r0
    andc r4, r4, r9
    and r0, r9, r0
    or r0, r4, r0
    stw r0, 0x0(r10)
    clrrwi r10, r7, 2
    subf r0, r10, r7
    lwz r4, 0x0(r10)
    subfic r0, r0, 0x3
    addi r7, r7, 0x1
    slwi r0, r0, 3
    slw r9, r6, r0
    slw r0, r8, r0
    andc r4, r4, r9
    and r0, r9, r0
    or r0, r4, r0
    stw r0, 0x0(r10)
    bdnz lbl_fn_806756A4_000007AC
    andi. r5, r5, 0x3
    beqlr
lbl_fn_806756A4_00000878:
    mtctr r5
lbl_fn_806756A4_0000087C:
    clrrwi r10, r7, 2
    subf r0, r10, r7
    lwz r4, 0x0(r10)
    subfic r0, r0, 0x3
    addi r7, r7, 0x1
    slwi r0, r0, 3
    slw r9, r6, r0
    slw r0, r8, r0
    andc r4, r4, r9
    and r0, r9, r0
    or r0, r4, r0
    stw r0, 0x0(r10)
    bdnz lbl_fn_806756A4_0000087C
    blr
}

asm void TRKDispatchMessage(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x500
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80676FA0
    lbz r0, 0x10(r30)
    cmplwi r0, 0x1a
    bgt lbl_TRKDispatchMessage_000009B8
    lis r3, jumptable_807BAC40@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807BAC40@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r30
    bl fn_80677684
    mr r31, r3
    b lbl_TRKDispatchMessage_000009B8
    mr r3, r30
    bl fn_806776F4
    mr r31, r3
    b lbl_TRKDispatchMessage_000009B8
    mr r3, r30
    bl fn_8067777C
    mr r31, r3
    b lbl_TRKDispatchMessage_000009B8
    mr r3, r30
    bl fn_806777E8
    mr r31, r3
    b lbl_TRKDispatchMessage_000009B8
    mr r3, r30
    bl fn_80677854
    mr r31, r3
    b lbl_TRKDispatchMessage_000009B8
    mr r3, r30
    bl fn_80677A88
    mr r31, r3
    b lbl_TRKDispatchMessage_000009B8
    mr r3, r30
    bl fn_80677C98
    mr r31, r3
    b lbl_TRKDispatchMessage_000009B8
    mr r3, r30
    bl fn_80677E94
    mr r31, r3
    b lbl_TRKDispatchMessage_000009B8
    mr r3, r30
    bl fn_80678134
    mr r31, r3
    b lbl_TRKDispatchMessage_000009B8
    mr r3, r30
    bl fn_806781F8
    mr r31, r3
    b lbl_TRKDispatchMessage_000009B8
    mr r3, r30
    bl fn_8067847C
    mr r31, r3
    b lbl_TRKDispatchMessage_000009B8
    mr r3, r30
    bl fn_80678534
    mr r31, r3
lbl_TRKDispatchMessage_000009B8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void InitMetroTRK(void)
{
    nofralloc
    subi r1, r1, 0x4
    stw r3, 0x0(r1)
    lis r3, gTRKCPUState@h
    ori r3, r3, gTRKCPUState@l
    stmw r0, 0x0(r3)
    lwz r4, 0x0(r1)
    addi r1, r1, 0x4
    stw r1, 0x4(r3)
    stw r4, 0xc(r3)
    mflr r4
    stw r4, 0x84(r3)
    stw r4, 0x80(r3)
    mfcr r4
    stw r4, 0x88(r3)
    mfmsr r4
    ori r3, r4, 0x8000
    xori r3, r3, 0x8000
    mtmsr r3
    mtsrr1 r4
    bl TRKSaveExtended1Block
    lis r3, gTRKCPUState@h
    ori r3, r3, gTRKCPUState@l
    opword 0xB8030000
    li r0, 0x0
    mtspr IABR, r0
    mtspr DABR, r0
    lis r1, _db_stack_addr@h
    ori r1, r1, _db_stack_addr@l
    mr r3, r5
    bl InitMetroTRKCommTable
    cmpwi r3, 0x1
    bne lbl_InitMetroTRK_00000A64
    lwz r4, 0x84(r3)
    mtlr r4
    opword 0xB8030000
    blr
lbl_InitMetroTRK_00000A64:
    b TRK_main
}

asm void InitMetroTRK_BBA(void)
{
    nofralloc
    subi r1, r1, 0x4
    stw r3, 0x0(r1)
    lis r3, gTRKCPUState@h
    ori r3, r3, gTRKCPUState@l
    stmw r0, 0x0(r3)
    lwz r4, 0x0(r1)
    addi r1, r1, 0x4
    stw r1, 0x4(r3)
    stw r4, 0xc(r3)
    mflr r4
    stw r4, 0x84(r3)
    stw r4, 0x80(r3)
    mfcr r4
    stw r4, 0x88(r3)
    mfmsr r4
    ori r3, r4, 0x8000
    mtmsr r3
    mtsrr1 r4
    bl TRKSaveExtended1Block
    lis r3, gTRKCPUState@h
    ori r3, r3, gTRKCPUState@l
    opword 0xB8030000
    li r0, 0x0
    mtspr IABR, r0
    mtspr DABR, r0
    lis r1, __ArenaLo@h
    ori r1, r1, __ArenaLo@l
    li r3, 0x2
    bl InitMetroTRKCommTable
    cmpwi r3, 0x1
    bne lbl_InitMetroTRK_BBA_00000AF8
    lwz r4, 0x84(r3)
    mtlr r4
    opword 0xB8030000
    blr
lbl_InitMetroTRK_BBA_00000AF8:
    b TRK_main
    blr
}

asm void EnableMetroTRKInterrupts(void)
{
    nofralloc
    b fn_80675E60
}

asm void fn_80675A1C(void)
{
    nofralloc
    lwz r4, lbl_80880300
    cmplw r3, r4
    blt lbl_fn_80675A1C_00000B30
    addi r0, r4, 0x4000
    cmplw r3, r0
    bge lbl_fn_80675A1C_00000B30
    lis r4, gTRKCPUState@ha
    addi r4, r4, gTRKCPUState@l
    lwz r0, 0x238(r4)
    clrlwi. r0, r0, 30
    bnelr
lbl_fn_80675A1C_00000B30:
    lis r0, 0x300
    cmplw r3, r0
    bge lbl_fn_80675A1C_00000B48
    clrlwi r0, r3, 2
    oris r3, r0, 0x8000
    blr
lbl_fn_80675A1C_00000B48:
    lis r0, 0x1000
    cmplw r3, r0
    bltlr
    lis r0, 0x1c00
    cmplw r3, r0
    bgelr
    clrlwi r0, r3, 2
    oris r3, r0, 0x9000
    blr
}

asm void fn_80675A84(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r22, 0x8(r1)
    lwz r3, lbl_80880300
    cmplwi r3, 0x44
    bgt lbl_fn_80675A84_00000BB0
    addi r0, r3, 0x4000
    cmplwi r0, 0x44
    ble lbl_fn_80675A84_00000BB0
    lis r3, gTRKCPUState@ha
    addi r3, r3, gTRKCPUState@l
    lwz r0, 0x238(r3)
    clrlwi. r0, r0, 30
    beq lbl_fn_80675A84_00000BB0
    li r3, 0x44
    b lbl_fn_80675A84_00000BB8
lbl_fn_80675A84_00000BB0:
    lis r3, 0x8000
    addi r3, r3, 0x44
lbl_fn_80675A84_00000BB8:
    lis r31, lbl_807BACB0@ha
    lis r24, gTRKCPUState@ha
    lis r28, gTRKInterruptVectorTable@ha
    lwz r29, 0x0(r3)
    addi r31, r31, lbl_807BACB0@l
    addi r24, r24, gTRKCPUState@l
    addi r28, r28, gTRKInterruptVectorTable@l
    li r30, 0x0
    lis r25, 0x300
    lis r27, 0x1c00
    lis r26, 0x1000
    li r23, 0x1
lbl_fn_80675A84_00000BE8:
    slw r0, r23, r30
    and. r0, r29, r0
    beq lbl_fn_80675A84_00000C7C
    cmpwi r30, 0x4
    beq lbl_fn_80675A84_00000C7C
    lwz r4, 0x0(r31)
    lwz r3, lbl_80880300
    cmplw r4, r3
    blt lbl_fn_80675A84_00000C2C
    addi r0, r3, 0x4000
    cmplw r4, r0
    bge lbl_fn_80675A84_00000C2C
    lwz r0, 0x238(r24)
    clrlwi. r0, r0, 30
    beq lbl_fn_80675A84_00000C2C
    mr r22, r4
    b lbl_fn_80675A84_00000C60
lbl_fn_80675A84_00000C2C:
    cmplw r4, r25
    bge lbl_fn_80675A84_00000C40
    clrlwi r0, r4, 2
    oris r22, r0, 0x8000
    b lbl_fn_80675A84_00000C60
lbl_fn_80675A84_00000C40:
    cmplw r4, r26
    blt lbl_fn_80675A84_00000C5C
    cmplw r4, r27
    bge lbl_fn_80675A84_00000C5C
    clrlwi r0, r4, 2
    oris r22, r0, 0x9000
    b lbl_fn_80675A84_00000C60
lbl_fn_80675A84_00000C5C:
    mr r22, r4
lbl_fn_80675A84_00000C60:
    mr r3, r22
    add r4, r28, r4
    li r5, 0x100
    bl fn_80675568
    mr r3, r22
    li r4, 0x100
    bl fn_80675408
lbl_fn_80675A84_00000C7C:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0xe
    ble lbl_fn_80675A84_00000BE8
    lmw r22, 0x8(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void TRKInitializeTarget(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x1
    stw r31, 0xc(r1)
    lis r31, gTRKState@ha
    addi r31, r31, gTRKState@l
    stw r0, 0x98(r31)
    bl fn_80678800
    stw r3, 0x8c(r31)
    lis r0, 0xe000
    li r3, 0x0
    stw r0, lbl_80880300
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80675C00(void)
{
    nofralloc
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    b OSResetSystem
}

asm void TRKLoadContext(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    lwz r1, 0x4(r3)
    lwz r2, 0x8(r3)
    lhz r5, 0x1a2(r3)
    rlwinm. r6, r5, 0, 30, 30
    beq lbl_TRKLoadContext_00000D20
    rlwinm r5, r5, 0, 31, 29
    sth r5, 0x1a2(r3)
    lmw r5, 0x14(r3)
    b lbl_TRKLoadContext_00000D24
lbl_TRKLoadContext_00000D20:
    lmw r13, 0x34(r3)
lbl_TRKLoadContext_00000D24:
    mr r31, r3
    mr r3, r4
    lwz r4, 0x80(r31)
    mtcrf 255, r4
    lwz r4, 0x84(r31)
    mtlr r4
    lwz r4, 0x88(r31)
    mtctr r4
    lwz r4, 0x8c(r31)
    mtxer r4
    mfmsr r4
    rlwinm r4, r4, 0, 17, 15
    rlwinm r4, r4, 0, 31, 29
    mtmsr r4
    mtsprg 1, r2
    lwz r4, 0xc(r31)
    mtsprg 2, r4
    lwz r4, 0x10(r31)
    mtsprg 3, r4
    lwz r2, 0x198(r31)
    lwz r4, 0x19c(r31)
    lwz r31, 0x7c(r31)
    b TRKInterruptHandler
}

asm void TRKEXICallBack(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bl OSEnableScheduler
    mr r3, r31
    li r4, 0x500
    bl TRKLoadContext
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void InitMetroTRKCommTable(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r4, r31
    stw r30, 0x8(r1)
    lis r30, lbl_807BACF0@ha
    addi r3, r30, lbl_807BACF0@l
    crclr 6
    bl OSReport
    addi r30, r30, lbl_807BACF0@l
    li r4, 0x40
    addi r3, r30, 0x15
    crclr 6
    bl OSReport
    cmpwi r31, 0x2
    li r0, 0x0
    stb r0, TRK_Use_BBA
    bne lbl_InitMetroTRKCommTable_00000E10
    li r3, 0x0
    b lbl_InitMetroTRKCommTable_00000ED8
lbl_InitMetroTRKCommTable_00000E10:
    cmpwi r31, 0x1
    bne lbl_InitMetroTRKCommTable_00000EAC
    addi r3, r30, 0x3a
    crclr 6
    bl OSReport
    lis r3, gDBCommTable@ha
    lis r30, gdev_cc_initialize@ha
    lis r31, gdev_cc_open@ha
    lis r11, gdev_cc_close@ha
    lis r10, gdev_cc_read@ha
    lis r9, gdev_cc_write@ha
    lis r8, gdev_cc_shutdown@ha
    lis r7, gdev_cc_peek@ha
    lis r6, gdev_cc_pre_continue@ha
    lis r5, gdev_cc_post_stop@ha
    lis r4, gdev_cc_initinterrupts@ha
    addi r30, r30, gdev_cc_initialize@l
    addi r12, r3, gDBCommTable@l
    addi r31, r31, gdev_cc_open@l
    addi r11, r11, gdev_cc_close@l
    addi r10, r10, gdev_cc_read@l
    addi r9, r9, gdev_cc_write@l
    addi r8, r8, gdev_cc_shutdown@l
    addi r7, r7, gdev_cc_peek@l
    addi r6, r6, gdev_cc_pre_continue@l
    addi r5, r5, gdev_cc_post_stop@l
    addi r4, r4, gdev_cc_initinterrupts@l
    stw r30, gDBCommTable@l(r3)
    li r3, 0x0
    stw r31, 0x18(r12)
    stw r11, 0x1c(r12)
    stw r10, 0x10(r12)
    stw r9, 0x14(r12)
    stw r8, 0x8(r12)
    stw r7, 0xc(r12)
    stw r6, 0x20(r12)
    stw r5, 0x24(r12)
    stw r4, 0x4(r12)
    b lbl_InitMetroTRKCommTable_00000ED8
lbl_InitMetroTRKCommTable_00000EAC:
    mr r4, r31
    addi r3, r30, 0x5b
    crclr 6
    bl OSReport
    addi r3, r30, 0x86
    crclr 6
    bl OSReport
    addi r3, r30, 0xb5
    crclr 6
    bl OSReport
    li r3, 0x1
lbl_InitMetroTRKCommTable_00000ED8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void TRKUARTInterruptHandler(void)
{
    nofralloc
    blr
}

asm void TRKInitializeIntDrivenUART(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, TRKEXICallBack@ha
    mr r3, r5
    stw r0, 0x14(r1)
    addi r4, r4, TRKEXICallBack@l
    stw r31, 0xc(r1)
    lis r31, gDBCommTable@ha
    lwz r12, gDBCommTable@l(r31)
    mtctr r12
    bctrl
    addi r3, r31, gDBCommTable@l
    lwz r12, 0x18(r3)
    mtctr r12
    bctrl
    lwz r31, 0xc(r1)
    li r3, 0x0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80675E60(void)
{
    nofralloc
    lbz r0, TRK_Use_BBA
    cmpwi r0, 0x0
    bnelr
    lis r3, gDBCommTable@ha
    addi r3, r3, gDBCommTable@l
    lwz r12, 0x4(r3)
    cmpwi r12, 0x0
    beqlr
    mtctr r12
    bctr
    blr
}

asm void fn_80675E8C(void)
{
    nofralloc
    lis r3, gDBCommTable@ha
    addi r3, r3, gDBCommTable@l
    lwz r12, 0xc(r3)
    mtctr r12
    bctr
}

asm void fn_80675EA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, gDBCommTable@ha
    stw r0, 0x14(r1)
    addi r5, r5, gDBCommTable@l
    lwz r12, 0x10(r5)
    mtctr r12
    bctrl
    neg r0, r3
    or r0, r0, r3
    srawi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80675EDC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, gDBCommTable@ha
    stw r0, 0x14(r1)
    addi r5, r5, gDBCommTable@l
    lwz r12, 0x14(r5)
    mtctr r12
    bctrl
    neg r0, r3
    or r0, r0, r3
    srawi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void ReserveEXI2Port(void)
{
    nofralloc
    lis r3, gDBCommTable@ha
    addi r3, r3, gDBCommTable@l
    lwz r12, 0x24(r3)
    mtctr r12
    bctr
}

asm void UnreserveEXI2Port(void)
{
    nofralloc
    lis r3, gDBCommTable@ha
    addi r3, r3, gDBCommTable@l
    lwz r12, 0x20(r3)
    mtctr r12
    bctr
}

asm void TRK_board_display(void)
{
    nofralloc
    lis r5, lbl_807BACF0@ha
    mr r4, r3
    addi r5, r5, lbl_807BACF0@l
    addi r3, r5, 0xdd
    crclr 6
    b OSReport
}

asm void InitializeProgramEndTrap(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    la r4, lbl_80888A58
    li r5, 0x4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, PPCHalt@ha
    addi r31, r31, PPCHalt@l
    addi r3, r31, 0x4
    bl fn_80675568
    addi r3, r31, 0x4
    li r4, 0x4
    bl ICInvalidateRange
    addi r3, r31, 0x4
    li r4, 0x4
    bl DCFlushRange
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80675FAC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r4, r1, 0x8
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r1, 0xc
    bl fn_80676E90
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_80675FAC_00001108
    cmpwi r30, 0x90
    bne lbl_fn_80675FAC_000010D8
    lwz r3, 0x8(r1)
    bl fn_80679488
    b lbl_fn_80675FAC_000010E0
lbl_fn_80675FAC_000010D8:
    lwz r3, 0x8(r1)
    bl fn_80679688
lbl_fn_80675FAC_000010E0:
    lwz r3, 0x8(r1)
    addi r4, r1, 0x10
    bl fn_80676680
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_80675FAC_00001100
    lwz r3, 0x10(r1)
    bl fn_80676F50
lbl_fn_80675FAC_00001100:
    lwz r3, 0xc(r1)
    bl fn_80676F50
lbl_fn_80675FAC_00001108:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void TRKInitializeEventQueue(void)
{
    nofralloc
    lis r3, lbl_808304F0@ha
    li r5, 0x0
    addi r4, r3, lbl_808304F0@l
    li r0, 0x100
    stw r5, lbl_808304F0@l(r3)
    li r3, 0x0
    stw r5, 0x4(r4)
    stw r0, 0x20(r4)
    blr
}

asm void TRKGetNextEvent(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lis r30, lbl_808304F0@ha
    lwz r0, lbl_808304F0@l(r30)
    cmpwi r0, 0x0
    ble lbl_TRKGetNextEvent_000011B8
    addi r31, r30, lbl_808304F0@l
    li r5, 0xc
    lwz r0, 0x4(r31)
    mulli r0, r0, 0xc
    add r4, r31, r0
    addi r4, r4, 0x8
    bl fn_80675568
    lwz r3, 0x4(r31)
    lwz r4, lbl_808304F0@l(r30)
    addi r0, r3, 0x1
    stw r0, 0x4(r31)
    cmpwi r0, 0x2
    subi r0, r4, 0x1
    stw r0, lbl_808304F0@l(r30)
    bne lbl_TRKGetNextEvent_000011B4
    li r0, 0x0
    stw r0, 0x4(r31)
lbl_TRKGetNextEvent_000011B4:
    li r4, 0x1
lbl_TRKGetNextEvent_000011B8:
    lwz r31, 0xc(r1)
    mr r3, r4
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806760EC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_808304F0@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r6, lbl_808304F0@l(r4)
    cmpwi r6, 0x2
    bne lbl_fn_806760EC_00001214
    lis r3, lbl_807BADD8@ha
    li r31, 0x100
    addi r3, r3, lbl_807BADD8@l
    bl OSReport
    b lbl_fn_806760EC_00001280
lbl_fn_806760EC_00001214:
    addi r30, r4, lbl_808304F0@l
    mr r4, r3
    lwz r0, 0x4(r30)
    li r5, 0xc
    add r0, r0, r6
    srwi r3, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r3
    subf r0, r3, r0
    mulli r29, r0, 0xc
    add r3, r30, r29
    addi r3, r3, 0x8
    bl fn_80675568
    add r3, r30, r29
    lwz r0, 0x20(r30)
    stw r0, 0xc(r3)
    lwz r3, 0x20(r30)
    addi r0, r3, 0x1
    stw r0, 0x20(r30)
    cmplwi r0, 0x100
    bge lbl_fn_806760EC_00001270
    li r0, 0x100
    stw r0, 0x20(r30)
lbl_fn_806760EC_00001270:
    lis r4, lbl_808304F0@ha
    lwz r3, lbl_808304F0@l(r4)
    addi r0, r3, 0x1
    stw r0, lbl_808304F0@l(r4)
lbl_fn_806760EC_00001280:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806761B8(void)
{
    nofralloc
    li r5, 0x0
    li r0, -0x1
    stw r4, 0x0(r3)
    stw r5, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void TRKDestructEvent(void)
{
    nofralloc
    lwz r3, 0x8(r3)
    b fn_80676F50
}

asm void TRKInitializeNub(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    bl TRKInitializeEndian
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_TRKInitializeNub_000012EC
    bl TRKInitializeEventQueue
    mr r31, r3
lbl_TRKInitializeNub_000012EC:
    cmpwi r31, 0x0
    bne lbl_TRKInitializeNub_000012FC
    bl TRKInitializeMessageBuffers
    mr r31, r3
lbl_TRKInitializeNub_000012FC:
    bl InitializeProgramEndTrap
    cmpwi r31, 0x0
    bne lbl_TRKInitializeNub_00001310
    bl TRKInitializeSerialHandler
    mr r31, r3
lbl_TRKInitializeNub_00001310:
    cmpwi r31, 0x0
    bne lbl_TRKInitializeNub_00001320
    bl TRKInitializeTarget
    mr r31, r3
lbl_TRKInitializeNub_00001320:
    cmpwi r31, 0x0
    bne lbl_TRKInitializeNub_00001350
    li r3, 0x1
    li r4, 0x0
    la r5, gTRKInputPendingPtr
    bl TRKInitializeIntDrivenUART
    mr r30, r3
    lwz r3, gTRKInputPendingPtr
    bl TRKTargetSetInputPendingPtr
    cmpwi r30, 0x0
    beq lbl_TRKInitializeNub_00001350
    mr r31, r30
lbl_TRKInitializeNub_00001350:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void TRKTerminateNub(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80676468
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void TRKNubWelcome(void)
{
    nofralloc
    lis r3, lbl_807BADF8@ha
    addi r3, r3, lbl_807BADF8@l
    b TRK_board_display
}

asm void TRKInitializeEndian(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    li r3, 0x12
    li r5, 0x34
    li r4, 0x56
    li r0, 0x78
    stb r3, 0x8(r1)
    li r6, 0x1
    li r3, 0x0
    stb r5, 0x9(r1)
    stb r4, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r4, 0x8(r1)
    stw r6, lbl_80880310
    subis r0, r4, 0x1234
    cmplwi r0, 0x5678
    bne lbl_TRKInitializeEndian_000013E4
    stw r6, lbl_80880310
    b lbl_TRKInitializeEndian_00001408
lbl_TRKInitializeEndian_000013E4:
    subis r0, r4, 0x7856
    cmplwi r0, 0x3412
    bne lbl_TRKInitializeEndian_000013F8
    li r0, 0x0
    stw r0, lbl_80880310
lbl_TRKInitializeEndian_000013F8:
    subis r0, r4, 0x7856
    cmplwi r0, 0x3412
    beq lbl_TRKInitializeEndian_00001408
    li r3, 0x1
lbl_TRKInitializeEndian_00001408:
    addi r1, r1, 0x10
    blr
}

asm void fn_80676328(void)
{
    nofralloc
    stwu r1, -0x8e0(r1)
    mflr r0
    stw r0, 0x8e4(r1)
    stw r31, 0x8dc(r1)
    bl fn_80675E8C
    cmpwi r3, 0x0
    bgt lbl_fn_80676328_00001434
    li r3, -0x1
    b lbl_fn_80676328_000014C8
lbl_fn_80676328_00001434:
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_80676E90
    mr r31, r3
    lwz r3, 0x8(r1)
    li r4, 0x0
    bl fn_80676FA0
    addi r3, r1, 0x10
    li r4, 0x40
    bl fn_80675EA0
    cmpwi r3, 0x0
    bne lbl_fn_80676328_000014B8
    lwz r3, 0x8(r1)
    addi r4, r1, 0x10
    li r5, 0x40
    bl fn_806772C8
    lwz r3, 0x10(r1)
    lwz r31, 0xc(r1)
    subic. r4, r3, 0x40
    ble lbl_fn_80676328_000014C4
    addi r3, r1, 0x50
    bl fn_80675EA0
    cmpwi r3, 0x0
    bne lbl_fn_80676328_000014A8
    lwz r3, 0x8(r1)
    addi r4, r1, 0x50
    lwz r5, 0x10(r1)
    bl fn_806772C8
    b lbl_fn_80676328_000014C4
lbl_fn_80676328_000014A8:
    mr r3, r31
    bl fn_80676F50
    li r31, -0x1
    b lbl_fn_80676328_000014C4
lbl_fn_80676328_000014B8:
    mr r3, r31
    bl fn_80676F50
    li r31, -0x1
lbl_fn_80676328_000014C4:
    mr r3, r31
lbl_fn_80676328_000014C8:
    lwz r0, 0x8e4(r1)
    lwz r31, 0x8dc(r1)
    mtlr r0
    addi r1, r1, 0x8e0
    blr
}

asm void TRKGetInput(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80676328
    cmpwi r3, -0x1
    beq lbl_TRKGetInput_000014F8
    bl fn_80676420
lbl_TRKGetInput_000014F8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80676420(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x2
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_806761B8
    stw r31, 0x10(r1)
    addi r3, r1, 0x8
    bl fn_806760EC
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void TRKInitializeSerialHandler(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80676468(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80676470(void)
{
    nofralloc
    subi r4, r3, 0x1
    li r3, -0x1
lbl_fn_80676470_00001560:
    lbzu r0, 0x1(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    bne lbl_fn_80676470_00001560
    blr
}

asm void fn_8067648C(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x94(r1)
    stmw r19, 0x5c(r1)
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    beq lbl_fn_8067648C_000015B0
    lwz r0, 0x0(r5)
    cmpwi r0, 0x0
    bne lbl_fn_8067648C_000015B8
lbl_fn_8067648C_000015B0:
    li r3, 0x2
    b lbl_fn_8067648C_00001754
lbl_fn_8067648C_000015B8:
    li r30, 0x0
    stw r30, 0x0(r6)
    li r31, 0x0
    li r23, 0x0
    b lbl_fn_8067648C_00001724
lbl_fn_8067648C_000015CC:
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0x40
    bl fn_806756A4
    lwz r0, 0x0(r26)
    li r21, 0x800
    subf r0, r31, r0
    cmplwi r0, 0x800
    bgt lbl_fn_8067648C_000015F4
    mr r21, r0
lbl_fn_8067648C_000015F4:
    cmpwi r29, 0x0
    li r0, 0xd0
    beq lbl_fn_8067648C_00001604
    li r0, 0xd1
lbl_fn_8067648C_00001604:
    cmpwi r29, 0x0
    stb r0, 0x1c(r1)
    li r0, 0x40
    bne lbl_fn_8067648C_00001618
    addi r0, r21, 0x40
lbl_fn_8067648C_00001618:
    stw r0, 0x18(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    stw r24, 0x20(r1)
    sth r21, 0x24(r1)
    bl fn_80676E90
    lwz r3, 0x8(r1)
    addi r4, r1, 0x18
    li r5, 0x40
    bl fn_806772C8
    cmpwi r29, 0x0
    mr r23, r3
    bne lbl_fn_8067648C_00001668
    cmpwi r3, 0x0
    bne lbl_fn_8067648C_00001668
    lwz r3, 0x8(r1)
    mr r5, r21
    add r4, r25, r31
    bl fn_806772C8
    mr r23, r3
lbl_fn_8067648C_00001668:
    cmpwi r23, 0x0
    bne lbl_fn_8067648C_00001718
    cmpwi r28, 0x0
    beq lbl_fn_8067648C_0000170C
    lwz r3, 0x8(r1)
    addi r4, r1, 0x10
    bl fn_80676680
    cmpwi r3, 0x0
    mr r23, r3
    bne lbl_fn_8067648C_0000169C
    lwz r3, 0x10(r1)
    bl TRKGetBuffer
    mr r22, r3
lbl_fn_8067648C_0000169C:
    lwz r0, 0x1c(r22)
    cmpwi r29, 0x0
    lhz r19, 0x20(r22)
    clrlwi r20, r0, 24
    beq lbl_fn_8067648C_000016EC
    cmpwi r23, 0x0
    bne lbl_fn_8067648C_000016EC
    cmplw r19, r21
    bgt lbl_fn_8067648C_000016EC
    mr r3, r22
    li r4, 0x40
    bl fn_80676FA0
    mr r3, r22
    mr r5, r19
    add r4, r25, r31
    bl fn_806774FC
    cmpwi r3, 0x302
    mr r23, r3
    bne lbl_fn_8067648C_000016EC
    li r23, 0x0
lbl_fn_8067648C_000016EC:
    cmplw r19, r21
    beq lbl_fn_8067648C_000016FC
    mr r21, r19
    li r30, 0x1
lbl_fn_8067648C_000016FC:
    stw r20, 0x0(r27)
    lwz r3, 0x10(r1)
    bl fn_80676F50
    b lbl_fn_8067648C_00001718
lbl_fn_8067648C_0000170C:
    lwz r3, 0x8(r1)
    bl fn_80676E0C
    mr r23, r3
lbl_fn_8067648C_00001718:
    lwz r3, 0xc(r1)
    bl fn_80676F50
    add r31, r31, r21
lbl_fn_8067648C_00001724:
    cmpwi r30, 0x0
    bne lbl_fn_8067648C_0000174C
    lwz r0, 0x0(r26)
    cmplw r31, r0
    bge lbl_fn_8067648C_0000174C
    cmpwi r23, 0x0
    bne lbl_fn_8067648C_0000174C
    lwz r0, 0x0(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8067648C_000015CC
lbl_fn_8067648C_0000174C:
    stw r31, 0x0(r26)
    mr r3, r23
lbl_fn_8067648C_00001754:
    lmw r19, 0x5c(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80676680(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r4
    bl fn_80676E0C
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80676680_00001854
    li r27, 0x0
    li r31, -0x1
lbl_fn_80676680_00001794:
    bl fn_80676328
    cmpwi r3, -0x1
    stw r3, 0x0(r26)
    beq lbl_fn_80676680_00001794
    bl TRKGetBuffer
    mr r29, r3
    li r4, 0x0
    bl fn_80676FA0
    lbz r28, 0x10(r29)
    cmplwi r28, 0x80
    bge lbl_fn_80676680_000017D0
    lwz r3, 0x0(r26)
    bl fn_80676420
    stw r31, 0x0(r26)
    b lbl_fn_80676680_00001794
lbl_fn_80676680_000017D0:
    lwz r0, 0x0(r26)
    cmpwi r0, -0x1
    beq lbl_fn_80676680_00001854
    lwz r4, 0x4(r29)
    cmplwi r4, 0x40
    bge lbl_fn_80676680_000017FC
    lis r3, lbl_807BAE18@ha
    addi r3, r3, lbl_807BAE18@l
    crclr 6
    bl OSReport
    li r27, 0x1
lbl_fn_80676680_000017FC:
    cmpwi r30, 0x0
    bne lbl_fn_80676680_00001810
    cmpwi r27, 0x0
    bne lbl_fn_80676680_00001810
    lbz r31, 0x14(r29)
lbl_fn_80676680_00001810:
    cmpwi r30, 0x0
    bne lbl_fn_80676680_00001834
    cmpwi r27, 0x0
    bne lbl_fn_80676680_00001834
    cmpwi r28, 0x80
    bne lbl_fn_80676680_00001830
    cmpwi r31, 0x0
    beq lbl_fn_80676680_00001834
lbl_fn_80676680_00001830:
    li r27, 0x1
lbl_fn_80676680_00001834:
    cmpwi r30, 0x0
    bne lbl_fn_80676680_00001844
    cmpwi r27, 0x0
    beq lbl_fn_80676680_00001854
lbl_fn_80676680_00001844:
    lwz r3, 0x0(r26)
    bl fn_80676F50
    li r0, -0x1
    stw r0, 0x0(r26)
lbl_fn_80676680_00001854:
    lwz r0, 0x0(r26)
    cmpwi r0, -0x1
    bne lbl_fn_80676680_00001878
    lis r3, lbl_807BAE18@ha
    addi r3, r3, lbl_807BAE18@l
    addi r3, r3, 0x1f
    crclr 6
    bl OSReport
    li r30, 0x800
lbl_fn_80676680_00001878:
    mr r3, r30
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806767A8(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stmw r27, 0x5c(r1)
    mr r27, r3
    mr r30, r4
    mr r28, r5
    mr r29, r6
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0x40
    bl fn_806756A4
    li r0, 0x0
    stw r0, 0x0(r28)
    li r0, 0xd2
    mr r3, r27
    stb r0, 0x1c(r1)
    bl fn_80676470
    addi r0, r3, 0x41
    stw r0, 0x18(r1)
    mr r3, r27
    stb r30, 0x20(r1)
    bl fn_80676470
    addi r0, r3, 0x1
    sth r0, 0x24(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_80676E90
    lwz r3, 0x8(r1)
    addi r4, r1, 0x18
    li r5, 0x40
    bl fn_806772C8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806767A8_0000193C
    mr r3, r27
    bl fn_80676470
    mr r5, r3
    lwz r3, 0x8(r1)
    mr r4, r27
    addi r5, r5, 0x1
    bl fn_806772C8
    mr r31, r3
lbl_fn_806767A8_0000193C:
    cmpwi r31, 0x0
    bne lbl_fn_806767A8_00001988
    li r0, 0x0
    stw r0, 0x0(r29)
    addi r4, r1, 0x10
    lwz r3, 0x8(r1)
    bl fn_80676680
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806767A8_00001970
    lwz r3, 0x10(r1)
    bl TRKGetBuffer
    mr r30, r3
lbl_fn_806767A8_00001970:
    lwz r0, 0x1c(r30)
    stw r0, 0x0(r29)
    lwz r0, 0x14(r30)
    stw r0, 0x0(r28)
    lwz r3, 0x10(r1)
    bl fn_80676F50
lbl_fn_806767A8_00001988:
    lwz r3, 0xc(r1)
    bl fn_80676F50
    mr r3, r31
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_806768C0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    li r5, 0x40
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r3
    addi r3, r1, 0x18
    stw r29, 0x64(r1)
    mr r29, r4
    li r4, 0x0
    bl fn_806756A4
    li r3, 0xd3
    li r0, 0x40
    stb r3, 0x1c(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    stw r0, 0x18(r1)
    stw r30, 0x20(r1)
    bl fn_80676E90
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806768C0_00001A18
    lwz r3, 0x8(r1)
    addi r4, r1, 0x18
    li r5, 0x40
    bl fn_806772C8
    mr r31, r3
lbl_fn_806768C0_00001A18:
    cmpwi r31, 0x0
    bne lbl_fn_806768C0_00001A64
    li r0, 0x0
    stw r0, 0x0(r29)
    addi r4, r1, 0x10
    lwz r3, 0x8(r1)
    bl fn_80676680
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806768C0_00001A4C
    lwz r3, 0x10(r1)
    bl TRKGetBuffer
    mr r30, r3
lbl_fn_806768C0_00001A4C:
    cmpwi r31, 0x0
    bne lbl_fn_806768C0_00001A5C
    lwz r0, 0x1c(r30)
    stw r0, 0x0(r29)
lbl_fn_806768C0_00001A5C:
    lwz r3, 0x10(r1)
    bl fn_80676F50
lbl_fn_806768C0_00001A64:
    lwz r3, 0xc(r1)
    bl fn_80676F50
    mr r3, r31
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_806769A4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r5
    li r5, 0x40
    stw r30, 0x68(r1)
    mr r30, r6
    stw r29, 0x64(r1)
    mr r29, r4
    li r4, 0x0
    stw r28, 0x60(r1)
    mr r28, r3
    addi r3, r1, 0x18
    bl fn_806756A4
    li r3, 0xd4
    li r0, 0x40
    stb r3, 0x1c(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    stw r0, 0x18(r1)
    stw r28, 0x20(r1)
    lwz r0, 0x0(r29)
    stw r0, 0x24(r1)
    stb r31, 0x28(r1)
    bl fn_80676E90
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806769A4_00001B14
    lwz r3, 0x8(r1)
    addi r4, r1, 0x18
    li r5, 0x40
    bl fn_806772C8
    mr r31, r3
lbl_fn_806769A4_00001B14:
    cmpwi r31, 0x0
    bne lbl_fn_806769A4_00001B6C
    li r0, 0x0
    stw r0, 0x0(r30)
    li r0, -0x1
    addi r4, r1, 0x10
    stw r0, 0x0(r29)
    lwz r3, 0x8(r1)
    bl fn_80676680
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806769A4_00001B64
    lwz r3, 0x10(r1)
    bl TRKGetBuffer
    cmpwi r3, 0x0
    beq lbl_fn_806769A4_00001B64
    lwz r0, 0x1c(r3)
    stw r0, 0x0(r30)
    lwz r0, 0x24(r3)
    stw r0, 0x0(r29)
lbl_fn_806769A4_00001B64:
    lwz r3, 0x10(r1)
    bl fn_80676F50
lbl_fn_806769A4_00001B6C:
    lwz r3, 0xc(r1)
    bl fn_80676F50
    mr r3, r31
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r28, 0x60(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void TRKTargetContinue(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x0
    stw r0, 0x14(r1)
    bl TRKTargetSetStopped
    bl UnreserveEXI2Port
    bl TRKSwapAndGo
    bl ReserveEXI2Port
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void TRKSaveExtended1Block(void)
{
    nofralloc
    lis r2, gTRKCPUState@h
    ori r2, r2, gTRKCPUState@l
    mfsr r16, 0
    mfsr r17, 1
    mfsr r18, 2
    mfsr r19, 3
    mfsr r20, 4
    mfsr r21, 5
    mfsr r22, 6
    mfsr r23, 7
    mfsr r24, 8
    mfsr r25, 9
    mfsr r26, 10
    mfsr r27, 11
    mfsr r28, 12
    mfsr r29, 13
    mfsr r30, 14
    mfsr r31, 15
    stmw r16, 0x1a8(r2)
    mftb r27, 268
    mftb r28, 269
    mfspr r29, HID0
    mfspr r30, HID1
    mfsrr1 r31
    stmw r27, 0x1e8(r2)
    mfspr r15, PVR
    mfibatu r16, 0
    mfibatl r17, 0
    mfibatu r18, 1
    mfibatl r19, 1
    mfibatu r20, 2
    mfibatl r21, 2
    mfibatu r22, 3
    mfibatl r23, 3
    mfdbatu r24, 0
    mfdbatl r25, 0
    mfdbatu r26, 1
    mfdbatl r27, 1
    mfdbatu r28, 2
    mfdbatl r29, 2
    mfdbatu r30, 3
    mfdbatl r31, 3
    stmw r15, 0x1fc(r2)
    mfspr r24, 560
    mfspr r25, 561
    mfspr r26, 562
    mfspr r27, 563
    mfspr r28, 564
    mfspr r29, 565
    mfspr r30, 566
    mfspr r31, 567
    stmw r24, 0x240(r2)
    mfsdr1 r22
    mfdar r23
    mfdsisr r24
    mfsprg r25, 0
    mfsprg r26, 1
    mfsprg r27, 2
    mfsprg r28, 3
    mfdec r29
    mfspr r30, IABR
    mfear r31
    stmw r22, 0x25c(r2)
    mfspr r24, DABR
    mfspr r25, PMC1
    mfspr r26, PMC2
    mfspr r27, PMC3
    mfspr r28, PMC4
    mfspr r29, SIA
    mfspr r30, MMCR0
    mfspr r31, MMCR1
    stmw r24, 0x284(r2)
    mfspr r29, 567
    mfspr r30, 568
    mfspr r31, 569
    stmw r29, 0x2a4(r2)
    mfspr r30, ICTC
    mfspr r31, L2CR
    stmw r30, 0x2b0(r2)
    mfsrr0 r16
    stw r16, 0x2b8(r2)
    mfspr r17, 570
    stw r17, 0x2bc(r2)
    mfspr r25, UMMCR0
    mfspr r26, UPMC1
    mfspr r27, UPMC2
    mfspr r28, USIA
    mfspr r29, UMMCR1
    mfspr r30, UPMC3
    mfspr r31, UPMC4
    stmw r25, 0x2c0(r2)
    mfspr r25, 571
    mfspr r26, 572
    mfspr r27, 573
    mfspr r28, 574
    mfspr r29, 575
    mfspr r30, HID2
    mfspr r31, 1011
    stmw r25, 0x2dc(r2)
    mfspr r20, GQR0
    mfspr r21, GQR1
    mfspr r22, GQR2
    mfspr r23, GQR3
    mfspr r24, GQR4
    mfspr r25, GQR5
    mfspr r26, GQR6
    mfspr r27, GQR7
    mfspr r28, HID2
    mfspr r29, WPAR
    mfspr r30, DMA_U
    mfspr r31, DMA_L
    stmw r20, 0x2fc(r2)
    blr
}

asm void TRKRestoreExtended1Block(void)
{
    nofralloc
    lis r2, gTRKCPUState@h
    ori r2, r2, gTRKCPUState@l
    lis r5, gTRKRestoreFlags@h
    ori r5, r5, gTRKRestoreFlags@l
    lbz r3, 0x0(r5)
    lbz r6, 0x1(r5)
    li r0, 0x0
    stb r0, 0x0(r5)
    stb r0, 0x1(r5)
    cmpwi r3, 0x0
    beq lbl_TRKRestoreExtended1Block_00001DCC
    lwz r24, 0x1e8(r2)
    lwz r25, 0x1ec(r2)
    mttbl r24
    mttbu r25
lbl_TRKRestoreExtended1Block_00001DCC:
    lmw r20, 0x2fc(r2)
    mtspr GQR0, r20
    mtspr GQR1, r21
    mtspr GQR2, r22
    mtspr GQR3, r23
    mtspr GQR4, r24
    mtspr GQR5, r25
    mtspr GQR6, r26
    mtspr GQR7, r27
    mtspr HID2, r28
    mtspr DMA_U, r30
    mtspr DMA_L, r31
    b lbl_TRKRestoreExtended1Block_00001E00
lbl_TRKRestoreExtended1Block_00001E00:
    lmw r19, 0x284(r2)
    mtspr DABR, r19
    mtspr PMC1, r20
    mtspr PMC2, r21
    mtspr PMC3, r22
    mtspr PMC4, r23
    mtspr SIA, r24
    mtspr MMCR0, r25
    mtspr MMCR1, r26
    mtspr ICTC, r30
    mtspr L2CR, r31
    b lbl_TRKRestoreExtended1Block_00001E30
lbl_TRKRestoreExtended1Block_00001E30:
    lmw r16, 0x1a8(r2)
    mtsr 0, r16
    mtsr 1, r17
    mtsr 2, r18
    mtsr 3, r19
    mtsr 4, r20
    mtsr 5, r21
    mtsr 6, r22
    mtsr 7, r23
    mtsr 8, r24
    mtsr 9, r25
    mtsr 10, r26
    mtsr 11, r27
    mtsr 12, r28
    mtsr 13, r29
    mtsr 14, r30
    mtsr 15, r31
    lmw r12, 0x1f0(r2)
    mtspr HID0, r12
    mtspr HID1, r13
    mtsrr1 r14
    mtspr PVR, r15
    mtibatu 0, r16
    mtibatl 0, r17
    mtibatu 1, r18
    mtibatl 1, r19
    mtibatu 2, r20
    mtibatl 2, r21
    mtibatu 3, r22
    mtibatl 3, r23
    mtdbatu 0, r24
    mtdbatl 0, r25
    mtdbatu 1, r26
    mtdbatl 1, r27
    mtdbatu 2, r28
    mtdbatl 2, r29
    mtdbatu 3, r30
    mtdbatl 3, r31
    lmw r22, 0x25c(r2)
    mtsdr1 r22
    mtdar r23
    mtdsisr r24
    mtsprg 0, r25
    mtsprg 1, r26
    mtsprg 2, r27
    mtsprg 3, r28
    mtspr IABR, r30
    mtear r31
    blr
}

asm void fn_80676E0C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lhz r0, lbl_80880320
    cmpwi r0, 0x0
    bne lbl_fn_80676E0C_00001F10
    li r0, 0x1
lbl_fn_80676E0C_00001F10:
    sth r0, 0x12(r3)
    clrlwi r4, r0, 16
    addi r0, r4, 0x1
    sth r0, lbl_80880320
    lwz r4, 0x4(r3)
    addi r3, r3, 0xc
    bl fn_80675EDC
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80676E0C_00001F44
    lis r3, lbl_807BAE60@ha
    addi r3, r3, lbl_807BAE60@l
    bl OSReport
lbl_fn_80676E0C_00001F44:
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void TRKInitializeMessageBuffers(void)
{
    nofralloc
    lis r3, lbl_80830518@ha
    li r0, 0x0
    addi r4, r3, lbl_80830518@l
    stw r0, lbl_80830518@l(r3)
    li r3, 0x0
    stw r0, 0x88c(r4)
    stw r0, 0x1118(r4)
    blr
}

asm void fn_80676E90(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stmw r26, 0x8(r1)
    mr r26, r3
    mr r27, r4
    li r30, 0x300
    li r29, 0x0
    li r31, 0x1
    stw r0, 0x0(r4)
    b lbl_fn_80676E90_00001FE0
lbl_fn_80676E90_00001FA8:
    mr r3, r29
    bl TRKGetBuffer
    lwz r0, 0x0(r3)
    mr r28, r3
    cmpwi r0, 0x0
    bne lbl_fn_80676E90_00001FDC
    li r4, 0x1
    bl fn_80676F78
    stw r31, 0x0(r28)
    li r30, 0x0
    stw r28, 0x0(r27)
    stw r29, 0x0(r26)
    li r29, 0x3
lbl_fn_80676E90_00001FDC:
    addi r29, r29, 0x1
lbl_fn_80676E90_00001FE0:
    cmpwi r29, 0x3
    blt lbl_fn_80676E90_00001FA8
    cmpwi r30, 0x300
    bne lbl_fn_80676E90_00001FFC
    lis r3, lbl_807BAE88@ha
    addi r3, r3, lbl_807BAE88@l
    bl OSReport
lbl_fn_80676E90_00001FFC:
    mr r3, r30
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void TRKGetBuffer(void)
{
    nofralloc
    cmplwi r3, 0x2
    li r0, 0x0
    bgt lbl_TRKGetBuffer_00002030
    mulli r0, r3, 0x88c
    lis r3, lbl_80830518@ha
    addi r3, r3, lbl_80830518@l
    add r0, r3, r0
lbl_TRKGetBuffer_00002030:
    mr r3, r0
    blr
}

asm void fn_80676F50(void)
{
    nofralloc
    cmpwi r3, -0x1
    beqlr
    cmplwi r3, 0x2
    bgtlr
    mulli r0, r3, 0x88c
    lis r3, lbl_80830518@ha
    li r4, 0x0
    addi r3, r3, lbl_80830518@l
    stwx r4, r3, r0
    blr
}

asm void fn_80676F78(void)
{
    nofralloc
    cmpwi r4, 0x0
    li r0, 0x0
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    bnelr
    li r4, 0x0
    li r5, 0x880
    addi r3, r3, 0xc
    b fn_806756A4
    blr
}

asm void fn_80676FA0(void)
{
    nofralloc
    cmplwi r4, 0x880
    li r5, 0x0
    ble lbl_fn_80676FA0_0000209C
    li r5, 0x301
    b lbl_fn_80676FA0_000020B0
lbl_fn_80676FA0_0000209C:
    lwz r0, 0x4(r3)
    stw r4, 0x8(r3)
    cmplw r4, r0
    ble lbl_fn_80676FA0_000020B0
    stw r4, 0x4(r3)
lbl_fn_80676FA0_000020B0:
    mr r3, r5
    blr
}

asm void fn_80676FD0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_fn_80676FD0_000020EC
    li r3, 0x0
    b lbl_fn_80676FD0_00002140
lbl_fn_80676FD0_000020EC:
    lwz r0, 0x8(r3)
    subfic r6, r0, 0x880
    cmplw r6, r5
    bge lbl_fn_80676FD0_00002104
    li r31, 0x301
    mr r30, r6
lbl_fn_80676FD0_00002104:
    cmplwi r30, 0x1
    bne lbl_fn_80676FD0_0000211C
    add r3, r3, r0
    lbz r0, 0x0(r4)
    stb r0, 0xc(r3)
    b lbl_fn_80676FD0_0000212C
lbl_fn_80676FD0_0000211C:
    add r3, r3, r0
    mr r5, r30
    addi r3, r3, 0xc
    bl fn_80675568
lbl_fn_80676FD0_0000212C:
    lwz r0, 0x8(r29)
    mr r3, r31
    add r0, r0, r30
    stw r0, 0x8(r29)
    stw r0, 0x4(r29)
lbl_fn_80676FD0_00002140:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80677074(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_fn_80677074_00002190
    li r3, 0x0
    b lbl_fn_80677074_000021D0
lbl_fn_80677074_00002190:
    lwz r6, 0x8(r3)
    lwz r0, 0x4(r3)
    subf r0, r6, r0
    cmplw r5, r0
    ble lbl_fn_80677074_000021AC
    li r31, 0x302
    mr r30, r0
lbl_fn_80677074_000021AC:
    add r6, r29, r6
    mr r3, r4
    mr r5, r30
    addi r4, r6, 0xc
    bl fn_80675568
    lwz r0, 0x8(r29)
    mr r3, r31
    add r0, r0, r30
    stw r0, 0x8(r29)
lbl_fn_80677074_000021D0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80677104(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, lbl_80880310
    stw r4, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80677104_00002220
    addi r4, r1, 0x8
    b lbl_fn_80677104_00002244
lbl_fn_80677104_00002220:
    lbz r7, 0xb(r1)
    addi r4, r1, 0xc
    lbz r6, 0xa(r1)
    lbz r5, 0x9(r1)
    lbz r0, 0x8(r1)
    stb r7, 0xc(r1)
    stb r6, 0xd(r1)
    stb r5, 0xe(r1)
    stb r0, 0xf(r1)
lbl_fn_80677104_00002244:
    lwz r5, 0x8(r3)
    li r31, 0x4
    li r30, 0x0
    subfic r0, r5, 0x880
    cmplwi r0, 0x4
    bge lbl_fn_80677104_00002264
    li r30, 0x301
    mr r31, r0
lbl_fn_80677104_00002264:
    cmplwi r31, 0x1
    bne lbl_fn_80677104_0000227C
    add r3, r3, r5
    lbz r0, 0x0(r4)
    stb r0, 0xc(r3)
    b lbl_fn_80677104_0000228C
lbl_fn_80677104_0000227C:
    add r3, r3, r5
    mr r5, r31
    addi r3, r3, 0xc
    bl fn_80675568
lbl_fn_80677104_0000228C:
    lwz r0, 0x8(r29)
    mr r3, r30
    add r0, r0, r31
    stw r0, 0x8(r29)
    stw r0, 0x4(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806771D4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lwz r0, lbl_80880310
    stw r5, 0x8(r1)
    cmpwi r0, 0x0
    stw r6, 0xc(r1)
    beq lbl_fn_806771D4_000022F4
    addi r4, r1, 0x8
    b lbl_fn_806771D4_00002338
lbl_fn_806771D4_000022F4:
    lbz r11, 0xf(r1)
    addi r4, r1, 0x10
    lbz r10, 0xe(r1)
    lbz r9, 0xd(r1)
    lbz r8, 0xc(r1)
    lbz r7, 0xb(r1)
    lbz r6, 0xa(r1)
    lbz r5, 0x9(r1)
    lbz r0, 0x8(r1)
    stb r11, 0x10(r1)
    stb r10, 0x11(r1)
    stb r9, 0x12(r1)
    stb r8, 0x13(r1)
    stb r7, 0x14(r1)
    stb r6, 0x15(r1)
    stb r5, 0x16(r1)
    stb r0, 0x17(r1)
lbl_fn_806771D4_00002338:
    lwz r5, 0x8(r3)
    li r30, 0x8
    li r29, 0x0
    subfic r0, r5, 0x880
    cmplwi r0, 0x8
    bge lbl_fn_806771D4_00002358
    li r29, 0x301
    mr r30, r0
lbl_fn_806771D4_00002358:
    cmplwi r30, 0x1
    bne lbl_fn_806771D4_00002370
    add r3, r3, r5
    lbz r0, 0x0(r4)
    stb r0, 0xc(r3)
    b lbl_fn_806771D4_00002380
lbl_fn_806771D4_00002370:
    add r3, r3, r5
    mr r5, r30
    addi r3, r3, 0xc
    bl fn_80675568
lbl_fn_806771D4_00002380:
    lwz r0, 0x8(r31)
    mr r3, r29
    add r0, r0, r30
    stw r0, 0x8(r31)
    stw r0, 0x4(r31)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806772C8(void)
{
    nofralloc
    li r9, 0x0
    li r7, 0x0
    b lbl_fn_806772C8_000023FC
lbl_fn_806772C8_000023BC:
    lwz r7, 0x8(r3)
    lbz r8, 0x0(r4)
    cmplwi r7, 0x880
    blt lbl_fn_806772C8_000023D4
    li r7, 0x301
    b lbl_fn_806772C8_000023F4
lbl_fn_806772C8_000023D4:
    add r6, r3, r7
    addi r0, r7, 0x1
    stb r8, 0xc(r6)
    li r7, 0x0
    lwz r6, 0x4(r3)
    stw r0, 0x8(r3)
    addi r0, r6, 0x1
    stw r0, 0x4(r3)
lbl_fn_806772C8_000023F4:
    addi r9, r9, 0x1
    addi r4, r4, 0x1
lbl_fn_806772C8_000023FC:
    cmpwi r7, 0x0
    bne lbl_fn_806772C8_0000240C
    cmpw r9, r5
    blt lbl_fn_806772C8_000023BC
lbl_fn_806772C8_0000240C:
    mr r3, r7
    blr
}

asm void fn_8067732C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r26, 0x18(r1)
    mr r29, r3
    mr r27, r4
    mr r30, r5
    li r31, 0x0
    li r26, 0x0
    b lbl_fn_8067732C_000024DC
lbl_fn_8067732C_0000243C:
    lwz r0, lbl_80880310
    lwz r3, 0x0(r27)
    cmpwi r0, 0x0
    stw r3, 0xc(r1)
    beq lbl_fn_8067732C_00002458
    addi r4, r1, 0xc
    b lbl_fn_8067732C_0000247C
lbl_fn_8067732C_00002458:
    lbz r6, 0xf(r1)
    addi r4, r1, 0x8
    lbz r5, 0xe(r1)
    lbz r3, 0xd(r1)
    lbz r0, 0xc(r1)
    stb r6, 0x8(r1)
    stb r5, 0x9(r1)
    stb r3, 0xa(r1)
    stb r0, 0xb(r1)
lbl_fn_8067732C_0000247C:
    lwz r3, 0x8(r29)
    li r28, 0x4
    li r26, 0x0
    subfic r0, r3, 0x880
    cmplwi r0, 0x4
    bge lbl_fn_8067732C_0000249C
    li r26, 0x301
    mr r28, r0
lbl_fn_8067732C_0000249C:
    cmplwi r28, 0x1
    bne lbl_fn_8067732C_000024B4
    add r3, r29, r3
    lbz r0, 0x0(r4)
    stb r0, 0xc(r3)
    b lbl_fn_8067732C_000024C4
lbl_fn_8067732C_000024B4:
    add r3, r29, r3
    mr r5, r28
    addi r3, r3, 0xc
    bl fn_80675568
lbl_fn_8067732C_000024C4:
    lwz r0, 0x8(r29)
    addi r27, r27, 0x4
    addi r31, r31, 0x1
    add r0, r0, r28
    stw r0, 0x8(r29)
    stw r0, 0x4(r29)
lbl_fn_8067732C_000024DC:
    cmpwi r26, 0x0
    bne lbl_fn_8067732C_000024EC
    cmpw r31, r30
    blt lbl_fn_8067732C_0000243C
lbl_fn_8067732C_000024EC:
    mr r3, r26
    lmw r26, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8067741C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r27, 0x1c(r1)
    mr r27, r3
    mr r29, r4
    lwz r0, lbl_80880310
    cmpwi r0, 0x0
    beq lbl_fn_8067741C_00002530
    mr r30, r29
    b lbl_fn_8067741C_00002534
lbl_fn_8067741C_00002530:
    addi r30, r1, 0x8
lbl_fn_8067741C_00002534:
    lwz r4, 0x8(r3)
    li r28, 0x8
    lwz r0, 0x4(r3)
    li r31, 0x0
    subf r0, r4, r0
    cmplwi r0, 0x8
    bge lbl_fn_8067741C_00002558
    li r31, 0x302
    mr r28, r0
lbl_fn_8067741C_00002558:
    add r4, r27, r4
    mr r3, r30
    mr r5, r28
    addi r4, r4, 0xc
    bl fn_80675568
    lwz r0, 0x8(r27)
    add r0, r0, r28
    stw r0, 0x8(r27)
    lwz r0, lbl_80880310
    cmpwi r0, 0x0
    bne lbl_fn_8067741C_000025CC
    cmpwi r31, 0x0
    bne lbl_fn_8067741C_000025CC
    lbz r0, 0x7(r30)
    stb r0, 0x0(r29)
    lbz r0, 0x6(r30)
    stb r0, 0x1(r29)
    lbz r0, 0x5(r30)
    stb r0, 0x2(r29)
    lbz r0, 0x4(r30)
    stb r0, 0x3(r29)
    lbz r0, 0x3(r30)
    stb r0, 0x4(r29)
    lbz r0, 0x2(r30)
    stb r0, 0x5(r29)
    lbz r0, 0x1(r30)
    stb r0, 0x6(r29)
    lbz r0, 0x0(r30)
    stb r0, 0x7(r29)
lbl_fn_8067741C_000025CC:
    mr r3, r31
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806774FC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_806774FC_00002654
lbl_fn_806774FC_0000260C:
    lwz r3, 0x8(r26)
    li r31, 0x1
    lwz r0, 0x4(r26)
    li r30, 0x0
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_806774FC_00002630
    li r30, 0x302
    mr r31, r0
lbl_fn_806774FC_00002630:
    add r4, r26, r3
    mr r5, r31
    add r3, r27, r29
    addi r4, r4, 0xc
    bl fn_80675568
    lwz r0, 0x8(r26)
    addi r29, r29, 0x1
    add r0, r0, r31
    stw r0, 0x8(r26)
lbl_fn_806774FC_00002654:
    cmpwi r30, 0x0
    bne lbl_fn_806774FC_00002664
    cmpw r29, r28
    blt lbl_fn_806774FC_0000260C
lbl_fn_806774FC_00002664:
    mr r3, r30
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80677594(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r27, r3
    mr r31, r4
    mr r28, r5
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_80677594_0000273C
lbl_fn_80677594_000026A4:
    lwz r0, lbl_80880310
    cmpwi r0, 0x0
    beq lbl_fn_80677594_000026B8
    mr r26, r31
    b lbl_fn_80677594_000026BC
lbl_fn_80677594_000026B8:
    addi r26, r1, 0x8
lbl_fn_80677594_000026BC:
    lwz r3, 0x8(r27)
    li r25, 0x4
    lwz r0, 0x4(r27)
    li r30, 0x0
    subf r0, r3, r0
    cmplwi r0, 0x4
    bge lbl_fn_80677594_000026E0
    li r30, 0x302
    mr r25, r0
lbl_fn_80677594_000026E0:
    add r4, r27, r3
    mr r3, r26
    mr r5, r25
    addi r4, r4, 0xc
    bl fn_80675568
    lwz r0, 0x8(r27)
    add r0, r0, r25
    stw r0, 0x8(r27)
    lwz r0, lbl_80880310
    cmpwi r0, 0x0
    bne lbl_fn_80677594_00002734
    cmpwi r30, 0x0
    bne lbl_fn_80677594_00002734
    lbz r0, 0x3(r26)
    stb r0, 0x0(r31)
    lbz r0, 0x2(r26)
    stb r0, 0x1(r31)
    lbz r0, 0x1(r26)
    stb r0, 0x2(r31)
    lbz r0, 0x0(r26)
    stb r0, 0x3(r31)
lbl_fn_80677594_00002734:
    addi r31, r31, 0x4
    addi r29, r29, 0x1
lbl_fn_80677594_0000273C:
    cmpwi r30, 0x0
    bne lbl_fn_80677594_0000274C
    cmpw r29, r28
    blt lbl_fn_80677594_000026A4
lbl_fn_80677594_0000274C:
    mr r3, r30
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8067767C(void)
{
    nofralloc
    lwz r3, lbl_8088032C
    blr
}

asm void fn_80677684(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x40
    stw r0, 0x54(r1)
    li r0, 0x1
    addi r3, r1, 0x8
    stw r0, lbl_8088032C
    bl fn_806756A4
    lwz r3, lbl_80880328
    li r0, 0x80
    li r4, 0x40
    li r5, 0x0
    addi r6, r3, 0x1
    stb r0, 0xc(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x8
    stw r4, 0x8(r1)
    li r4, 0x40
    stb r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r0, lbl_80880328
    bl fn_80675EDC
    lwz r0, 0x54(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_806776F4(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x40
    stw r0, 0x64(r1)
    addi r3, r1, 0x18
    stw r31, 0x5c(r1)
    li r31, 0x0
    stw r31, lbl_8088032C
    bl fn_806756A4
    lwz r4, lbl_80880328
    li r0, 0x80
    li r3, 0x40
    stw r3, 0x18(r1)
    addi r5, r4, 0x1
    li r4, 0x40
    stb r0, 0x1c(r1)
    addi r0, r5, 0x1
    addi r3, r1, 0x18
    stb r31, 0x20(r1)
    stw r5, 0x24(r1)
    stw r0, lbl_80880328
    bl fn_80675EDC
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_806761B8
    addi r3, r1, 0x8
    bl fn_806760EC
    lwz r31, 0x5c(r1)
    li r3, 0x0
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8067777C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x40
    stw r0, 0x54(r1)
    addi r3, r1, 0x8
    bl fn_806756A4
    lwz r3, lbl_80880328
    li r0, 0x80
    li r4, 0x40
    li r5, 0x0
    addi r6, r3, 0x1
    stb r0, 0xc(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x8
    stw r4, 0x8(r1)
    li r4, 0x40
    stb r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r0, lbl_80880328
    bl fn_80675EDC
    bl fn_80675C00
    lwz r0, 0x54(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_806777E8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x40
    stw r0, 0x54(r1)
    addi r3, r1, 0x8
    bl fn_806756A4
    lwz r3, lbl_80880328
    li r0, 0x80
    li r4, 0x40
    li r5, 0x0
    addi r6, r3, 0x1
    stb r0, 0xc(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x8
    stw r4, 0x8(r1)
    li r4, 0x40
    stb r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r0, lbl_80880328
    bl fn_80675EDC
    bl fn_80675A84
    lwz r0, 0x54(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80677854(void)
{
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x940
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    li r31, 0x0
    stw r30, -0x8(r12)
    stw r29, -0xc(r12)
    stw r28, -0x10(r12)
    mr r28, r3
    lbz r30, 0x14(r3)
    lwz r29, 0x1c(r3)
    rlwinm. r0, r30, 0, 30, 30
    lhz r3, 0x18(r3)
    beq lbl_fn_80677854_000029D0
    addi r3, r1, 0x68
    li r4, 0x0
    li r5, 0x40
    bl fn_806756A4
    lwz r3, lbl_80880328
    li r0, 0x80
    li r4, 0x40
    li r5, 0x12
    addi r6, r3, 0x1
    stb r0, 0x6c(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x68
    stw r4, 0x68(r1)
    li r4, 0x40
    stb r5, 0x70(r1)
    stw r6, 0x74(r1)
    stw r0, lbl_80880328
    bl fn_80675EDC
    li r3, 0x0
    b lbl_fn_80677854_00002B4C
lbl_fn_80677854_000029D0:
    cmpwi r31, 0x0
    bne lbl_fn_80677854_00002AA0
    rlwinm. r0, r30, 0, 28, 28
    stw r3, 0x20(r1)
    beq lbl_fn_80677854_000029EC
    li r6, 0x0
    b lbl_fn_80677854_000029F0
lbl_fn_80677854_000029EC:
    li r6, 0x1
lbl_fn_80677854_000029F0:
    mr r4, r29
    addi r3, r1, 0x100
    addi r5, r1, 0x20
    li r7, 0x1
    bl fn_806789D4
    mr r31, r3
    mr r3, r28
    li r4, 0x0
    bl fn_80676F78
    cmpwi r31, 0x0
    bne lbl_fn_80677854_00002AA0
    addi r3, r1, 0xa8
    li r4, 0x0
    li r5, 0x40
    bl fn_806756A4
    lwz r6, lbl_80880328
    li r7, 0x80
    lwz r4, 0x20(r1)
    mr r3, r28
    addi r0, r6, 0x1
    stb r31, 0xb0(r1)
    addi r5, r4, 0x40
    addi r4, r1, 0xa8
    stw r5, 0xa8(r1)
    li r5, 0x40
    stb r7, 0xac(r1)
    stw r6, 0xb4(r1)
    stw r0, lbl_80880328
    bl fn_80676FD0
    rlwinm. r0, r30, 0, 25, 25
    beq lbl_fn_80677854_00002A8C
    clrlwi r0, r29, 27
    addi r4, r1, 0x100
    lwz r5, 0x20(r1)
    mr r3, r28
    add r4, r4, r0
    bl fn_80676FD0
    mr r31, r3
    b lbl_fn_80677854_00002AA0
lbl_fn_80677854_00002A8C:
    lwz r5, 0x20(r1)
    mr r3, r28
    addi r4, r1, 0x100
    bl fn_80676FD0
    mr r31, r3
lbl_fn_80677854_00002AA0:
    cmpwi r31, 0x0
    beq lbl_fn_80677854_00002B44
    subi r0, r31, 0x700
    cmplwi r0, 0x6
    bgt lbl_fn_80677854_00002AF4
    lis r3, jumptable_807BAEB0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807BAEB0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r31, 0x15
    b lbl_fn_80677854_00002AF8
    li r31, 0x13
    b lbl_fn_80677854_00002AF8
    li r31, 0x21
    b lbl_fn_80677854_00002AF8
    li r31, 0x22
    b lbl_fn_80677854_00002AF8
    li r31, 0x20
    b lbl_fn_80677854_00002AF8
lbl_fn_80677854_00002AF4:
    li r31, 0x3
lbl_fn_80677854_00002AF8:
    addi r3, r1, 0x28
    li r4, 0x0
    li r5, 0x40
    bl fn_806756A4
    lwz r3, lbl_80880328
    li r0, 0x80
    li r4, 0x40
    stw r4, 0x28(r1)
    addi r5, r3, 0x1
    addi r3, r1, 0x28
    stb r0, 0x2c(r1)
    addi r0, r5, 0x1
    li r4, 0x40
    stb r31, 0x30(r1)
    stw r5, 0x34(r1)
    stw r0, lbl_80880328
    bl fn_80675EDC
    li r3, 0x0
    b lbl_fn_80677854_00002B4C
lbl_fn_80677854_00002B44:
    mr r3, r28
    bl fn_80676E0C
lbl_fn_80677854_00002B4C:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    lwz r29, -0xc(r10)
    lwz r28, -0x10(r10)
    mtlr r0
    mr r1, r10
    blr
}

asm void fn_80677A88(void)
{
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x940
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    li r31, 0x0
    stw r30, -0x8(r12)
    stw r29, -0xc(r12)
    stw r28, -0x10(r12)
    mr r28, r3
    lbz r30, 0x14(r3)
    lwz r29, 0x1c(r3)
    rlwinm. r0, r30, 0, 30, 30
    lhz r0, 0x18(r3)
    beq lbl_fn_80677A88_00002C04
    addi r3, r1, 0x68
    li r4, 0x0
    li r5, 0x40
    bl fn_806756A4
    lwz r3, lbl_80880328
    li r0, 0x80
    li r4, 0x40
    li r5, 0x12
    addi r6, r3, 0x1
    stb r0, 0x6c(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x68
    stw r4, 0x68(r1)
    li r4, 0x40
    stb r5, 0x70(r1)
    stw r6, 0x74(r1)
    stw r0, lbl_80880328
    bl fn_80675EDC
    li r3, 0x0
    b lbl_fn_80677A88_00002D5C
lbl_fn_80677A88_00002C04:
    cmpwi r31, 0x0
    bne lbl_fn_80677A88_00002CB0
    stw r0, 0x20(r1)
    li r4, 0x40
    bl fn_80676FA0
    lwz r5, 0x20(r1)
    mr r3, r28
    addi r4, r1, 0x100
    bl fn_80677074
    rlwinm. r0, r30, 0, 28, 28
    beq lbl_fn_80677A88_00002C38
    li r6, 0x0
    b lbl_fn_80677A88_00002C3C
lbl_fn_80677A88_00002C38:
    li r6, 0x1
lbl_fn_80677A88_00002C3C:
    mr r4, r29
    addi r3, r1, 0x100
    addi r5, r1, 0x20
    li r7, 0x0
    bl fn_806789D4
    mr r31, r3
    mr r3, r28
    li r4, 0x0
    bl fn_80676F78
    cmpwi r31, 0x0
    bne lbl_fn_80677A88_00002CB0
    addi r3, r1, 0xa8
    li r4, 0x0
    li r5, 0x40
    bl fn_806756A4
    lwz r6, lbl_80880328
    li r0, 0x40
    li r4, 0x80
    stw r0, 0xa8(r1)
    addi r0, r6, 0x1
    mr r3, r28
    stb r4, 0xac(r1)
    addi r4, r1, 0xa8
    li r5, 0x40
    stb r31, 0xb0(r1)
    stw r6, 0xb4(r1)
    stw r0, lbl_80880328
    bl fn_80676FD0
    mr r31, r3
lbl_fn_80677A88_00002CB0:
    cmpwi r31, 0x0
    beq lbl_fn_80677A88_00002D54
    subi r0, r31, 0x700
    cmplwi r0, 0x6
    bgt lbl_fn_80677A88_00002D04
    lis r3, jumptable_807BAECC@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807BAECC@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r31, 0x15
    b lbl_fn_80677A88_00002D08
    li r31, 0x13
    b lbl_fn_80677A88_00002D08
    li r31, 0x21
    b lbl_fn_80677A88_00002D08
    li r31, 0x22
    b lbl_fn_80677A88_00002D08
    li r31, 0x20
    b lbl_fn_80677A88_00002D08
lbl_fn_80677A88_00002D04:
    li r31, 0x3
lbl_fn_80677A88_00002D08:
    addi r3, r1, 0x28
    li r4, 0x0
    li r5, 0x40
    bl fn_806756A4
    lwz r3, lbl_80880328
    li r0, 0x80
    li r4, 0x40
    stw r4, 0x28(r1)
    addi r5, r3, 0x1
    addi r3, r1, 0x28
    stb r0, 0x2c(r1)
    addi r0, r5, 0x1
    li r4, 0x40
    stb r31, 0x30(r1)
    stw r5, 0x34(r1)
    stw r0, lbl_80880328
    bl fn_80675EDC
    li r3, 0x0
    b lbl_fn_80677A88_00002D5C
lbl_fn_80677A88_00002D54:
    mr r3, r28
    bl fn_80676E0C
lbl_fn_80677A88_00002D5C:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    lwz r29, -0xc(r10)
    lwz r28, -0x10(r10)
    mtlr r0
    mr r1, r10
    blr
}

asm void fn_80677C98(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stw r31, 0xdc(r1)
    mr r31, r3
    lhz r4, 0x18(r3)
    lhz r0, 0x1c(r3)
    cmplw r4, r0
    ble lbl_fn_80677C98_00002DF4
    addi r3, r1, 0x50
    li r4, 0x0
    li r5, 0x40
    bl fn_806756A4
    lwz r3, lbl_80880328
    li r0, 0x80
    li r4, 0x40
    li r5, 0x14
    addi r6, r3, 0x1
    stb r0, 0x54(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x50
    stw r4, 0x50(r1)
    li r4, 0x40
    stb r5, 0x58(r1)
    stw r6, 0x5c(r1)
    stw r0, lbl_80880328
    bl fn_80675EDC
    li r3, 0x0
    b lbl_fn_80677C98_00002F68
lbl_fn_80677C98_00002DF4:
    lwz r5, lbl_80880328
    li r0, 0x80
    li r6, 0x468
    stb r0, 0x94(r1)
    addi r0, r5, 0x1
    li r4, 0x0
    stw r6, 0x90(r1)
    stw r5, 0x9c(r1)
    stw r0, lbl_80880328
    bl fn_80676F78
    mr r3, r31
    addi r4, r1, 0x90
    li r5, 0x40
    bl fn_806772C8
    mr r5, r31
    addi r6, r1, 0x8
    li r3, 0x0
    li r4, 0x24
    li r7, 0x1
    bl fn_80678B24
    cmpwi r3, 0x0
    bne lbl_fn_80677C98_00002E64
    mr r5, r31
    addi r6, r1, 0x8
    li r3, 0x0
    li r4, 0x21
    li r7, 0x1
    bl fn_80678C1C
lbl_fn_80677C98_00002E64:
    cmpwi r3, 0x0
    bne lbl_fn_80677C98_00002E84
    mr r5, r31
    addi r6, r1, 0x8
    li r3, 0x0
    li r4, 0x60
    li r7, 0x1
    bl fn_80678D58
lbl_fn_80677C98_00002E84:
    cmpwi r3, 0x0
    bne lbl_fn_80677C98_00002EA4
    mr r5, r31
    addi r6, r1, 0x8
    li r3, 0x0
    li r4, 0x1f
    li r7, 0x1
    bl fn_80678EBC
lbl_fn_80677C98_00002EA4:
    cmpwi r3, 0x0
    beq lbl_fn_80677C98_00002F60
    cmpwi r3, 0x703
    beq lbl_fn_80677C98_00002EE0
    cmpwi r3, 0x701
    beq lbl_fn_80677C98_00002EE8
    cmpwi r3, 0x702
    beq lbl_fn_80677C98_00002EF0
    cmpwi r3, 0x704
    beq lbl_fn_80677C98_00002EF8
    cmpwi r3, 0x705
    beq lbl_fn_80677C98_00002F00
    cmpwi r3, 0x706
    beq lbl_fn_80677C98_00002F08
    b lbl_fn_80677C98_00002F10
lbl_fn_80677C98_00002EE0:
    li r31, 0x12
    b lbl_fn_80677C98_00002F14
lbl_fn_80677C98_00002EE8:
    li r31, 0x14
    b lbl_fn_80677C98_00002F14
lbl_fn_80677C98_00002EF0:
    li r31, 0x15
    b lbl_fn_80677C98_00002F14
lbl_fn_80677C98_00002EF8:
    li r31, 0x21
    b lbl_fn_80677C98_00002F14
lbl_fn_80677C98_00002F00:
    li r31, 0x22
    b lbl_fn_80677C98_00002F14
lbl_fn_80677C98_00002F08:
    li r31, 0x20
    b lbl_fn_80677C98_00002F14
lbl_fn_80677C98_00002F10:
    li r31, 0x3
lbl_fn_80677C98_00002F14:
    addi r3, r1, 0x10
    li r4, 0x0
    li r5, 0x40
    bl fn_806756A4
    lwz r3, lbl_80880328
    li r0, 0x80
    li r4, 0x40
    stw r4, 0x10(r1)
    addi r5, r3, 0x1
    addi r3, r1, 0x10
    stb r0, 0x14(r1)
    addi r0, r5, 0x1
    li r4, 0x40
    stb r31, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r0, lbl_80880328
    bl fn_80675EDC
    li r3, 0x0
    b lbl_fn_80677C98_00002F68
lbl_fn_80677C98_00002F60:
    mr r3, r31
    bl fn_80676E0C
lbl_fn_80677C98_00002F68:
    lwz r0, 0xe4(r1)
    lwz r31, 0xdc(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_80677E94(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0xe4(r1)
    stw r31, 0xdc(r1)
    stw r30, 0xd8(r1)
    stw r29, 0xd4(r1)
    stw r28, 0xd0(r1)
    mr r28, r3
    lbz r31, 0x14(r3)
    lhz r30, 0x18(r3)
    lhz r29, 0x1c(r3)
    bl fn_80676FA0
    cmplw r30, r29
    ble lbl_fn_80677E94_00003008
    addi r3, r1, 0x50
    li r4, 0x0
    li r5, 0x40
    bl fn_806756A4
    lwz r3, lbl_80880328
    li r0, 0x80
    li r4, 0x40
    li r5, 0x14
    addi r6, r3, 0x1
    stb r0, 0x54(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x50
    stw r4, 0x50(r1)
    li r4, 0x40
    stb r5, 0x58(r1)
    stw r6, 0x5c(r1)
    stw r0, lbl_80880328
    bl fn_80675EDC
    li r3, 0x0
    b lbl_fn_80677E94_000031FC
lbl_fn_80677E94_00003008:
    mr r3, r28
    li r4, 0x40
    bl fn_80676FA0
    cmpwi r31, 0x0
    beq lbl_fn_80677E94_00003038
    cmpwi r31, 0x1
    beq lbl_fn_80677E94_00003058
    cmpwi r31, 0x2
    beq lbl_fn_80677E94_00003078
    cmpwi r31, 0x3
    beq lbl_fn_80677E94_00003098
    b lbl_fn_80677E94_000030B8
lbl_fn_80677E94_00003038:
    mr r3, r30
    mr r4, r29
    mr r5, r28
    addi r6, r1, 0x8
    li r7, 0x0
    bl fn_80678B24
    mr r31, r3
    b lbl_fn_80677E94_000030BC
lbl_fn_80677E94_00003058:
    mr r3, r30
    mr r4, r29
    mr r5, r28
    addi r6, r1, 0x8
    li r7, 0x0
    bl fn_80678C1C
    mr r31, r3
    b lbl_fn_80677E94_000030BC
lbl_fn_80677E94_00003078:
    mr r3, r30
    mr r4, r29
    mr r5, r28
    addi r6, r1, 0x8
    li r7, 0x0
    bl fn_80678D58
    mr r31, r3
    b lbl_fn_80677E94_000030BC
lbl_fn_80677E94_00003098:
    mr r3, r30
    mr r4, r29
    mr r5, r28
    addi r6, r1, 0x8
    li r7, 0x0
    bl fn_80678EBC
    mr r31, r3
    b lbl_fn_80677E94_000030BC
lbl_fn_80677E94_000030B8:
    li r31, 0x703
lbl_fn_80677E94_000030BC:
    mr r3, r28
    li r4, 0x0
    bl fn_80676F78
    cmpwi r31, 0x0
    bne lbl_fn_80677E94_00003118
    addi r3, r1, 0x90
    li r4, 0x0
    li r5, 0x40
    bl fn_806756A4
    lwz r6, lbl_80880328
    li r0, 0x40
    li r4, 0x80
    stw r0, 0x90(r1)
    addi r0, r6, 0x1
    mr r3, r28
    stb r4, 0x94(r1)
    addi r4, r1, 0x90
    li r5, 0x40
    stb r31, 0x98(r1)
    stw r6, 0x9c(r1)
    stw r0, lbl_80880328
    bl fn_80676FD0
    mr r31, r3
lbl_fn_80677E94_00003118:
    cmpwi r31, 0x702
    beq lbl_fn_80677E94_00003184
    bge lbl_fn_80677E94_00003148
    cmpwi r31, 0x302
    beq lbl_fn_80677E94_0000317C
    bge lbl_fn_80677E94_0000313C
    cmpwi r31, 0x0
    beq lbl_fn_80677E94_000031F4
    b lbl_fn_80677E94_000031A4
lbl_fn_80677E94_0000313C:
    cmpwi r31, 0x701
    bge lbl_fn_80677E94_00003174
    b lbl_fn_80677E94_000031A4
lbl_fn_80677E94_00003148:
    cmpwi r31, 0x705
    beq lbl_fn_80677E94_00003194
    bge lbl_fn_80677E94_00003160
    cmpwi r31, 0x704
    bge lbl_fn_80677E94_0000318C
    b lbl_fn_80677E94_0000316C
lbl_fn_80677E94_00003160:
    cmpwi r31, 0x707
    bge lbl_fn_80677E94_000031A4
    b lbl_fn_80677E94_0000319C
lbl_fn_80677E94_0000316C:
    li r31, 0x12
    b lbl_fn_80677E94_000031A8
lbl_fn_80677E94_00003174:
    li r31, 0x14
    b lbl_fn_80677E94_000031A8
lbl_fn_80677E94_0000317C:
    li r31, 0x2
    b lbl_fn_80677E94_000031A8
lbl_fn_80677E94_00003184:
    li r31, 0x15
    b lbl_fn_80677E94_000031A8
lbl_fn_80677E94_0000318C:
    li r31, 0x21
    b lbl_fn_80677E94_000031A8
lbl_fn_80677E94_00003194:
    li r31, 0x22
    b lbl_fn_80677E94_000031A8
lbl_fn_80677E94_0000319C:
    li r31, 0x20
    b lbl_fn_80677E94_000031A8
lbl_fn_80677E94_000031A4:
    li r31, 0x3
lbl_fn_80677E94_000031A8:
    addi r3, r1, 0x10
    li r4, 0x0
    li r5, 0x40
    bl fn_806756A4
    lwz r3, lbl_80880328
    li r0, 0x80
    li r4, 0x40
    stw r4, 0x10(r1)
    addi r5, r3, 0x1
    addi r3, r1, 0x10
    stb r0, 0x14(r1)
    addi r0, r5, 0x1
    li r4, 0x40
    stb r31, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r0, lbl_80880328
    bl fn_80675EDC
    li r3, 0x0
    b lbl_fn_80677E94_000031FC
lbl_fn_80677E94_000031F4:
    mr r3, r28
    bl fn_80676E0C
lbl_fn_80677E94_000031FC:
    lwz r0, 0xe4(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r29, 0xd4(r1)
    lwz r28, 0xd0(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_80678134(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    bl TRKTargetStopped
    cmpwi r3, 0x0
    bne lbl_fn_80678134_00003284
    addi r3, r1, 0x48
    li r4, 0x0
    li r5, 0x40
    bl fn_806756A4
    lwz r3, lbl_80880328
    li r0, 0x80
    li r4, 0x40
    li r5, 0x16
    addi r6, r3, 0x1
    stb r0, 0x4c(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x48
    stw r4, 0x48(r1)
    li r4, 0x40
    stb r5, 0x50(r1)
    stw r6, 0x54(r1)
    stw r0, lbl_80880328
    bl fn_80675EDC
    li r3, 0x0
    b lbl_fn_80678134_000032D0
lbl_fn_80678134_00003284:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x40
    bl fn_806756A4
    lwz r3, lbl_80880328
    li r0, 0x80
    li r4, 0x40
    li r5, 0x0
    addi r6, r3, 0x1
    stb r0, 0xc(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x8
    stw r4, 0x8(r1)
    li r4, 0x40
    stb r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r0, lbl_80880328
    bl fn_80675EDC
    bl TRKTargetContinue
lbl_fn_80678134_000032D0:
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_806781F8(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x164(r1)
    stw r31, 0x15c(r1)
    stw r30, 0x158(r1)
    mr r30, r3
    stw r29, 0x154(r1)
    stw r28, 0x150(r1)
    bl fn_80676FA0
    lbz r31, 0x14(r30)
    lwz r29, 0x1c(r30)
    cmpwi r31, 0x0
    lwz r28, 0x20(r30)
    beq lbl_fn_806781F8_00003338
    cmpwi r31, 0x10
    beq lbl_fn_806781F8_00003338
    cmpwi r31, 0x1
    beq lbl_fn_806781F8_00003394
    cmpwi r31, 0x11
    beq lbl_fn_806781F8_00003394
    b lbl_fn_806781F8_000033F8
lbl_fn_806781F8_00003338:
    lbz r30, 0x18(r30)
    cmplwi r30, 0x1
    bge lbl_fn_806781F8_00003448
    addi r3, r1, 0x108
    li r4, 0x0
    li r5, 0x40
    bl fn_806756A4
    lwz r3, lbl_80880328
    li r0, 0x80
    li r4, 0x40
    li r5, 0x11
    addi r6, r3, 0x1
    stb r0, 0x10c(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x108
    stw r4, 0x108(r1)
    li r4, 0x40
    stb r5, 0x110(r1)
    stw r6, 0x114(r1)
    stw r0, lbl_80880328
    bl fn_80675EDC
    li r3, 0x0
    b lbl_fn_806781F8_00003544
lbl_fn_806781F8_00003394:
    bl fn_80679944
    cmplw r3, r29
    blt lbl_fn_806781F8_000033A8
    cmplw r3, r28
    ble lbl_fn_806781F8_00003448
lbl_fn_806781F8_000033A8:
    addi r3, r1, 0xc8
    li r4, 0x0
    li r5, 0x40
    bl fn_806756A4
    lwz r3, lbl_80880328
    li r0, 0x80
    li r4, 0x40
    li r5, 0x11
    addi r6, r3, 0x1
    stb r0, 0xcc(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0xc8
    stw r4, 0xc8(r1)
    li r4, 0x40
    stb r5, 0xd0(r1)
    stw r6, 0xd4(r1)
    stw r0, lbl_80880328
    bl fn_80675EDC
    li r3, 0x0
    b lbl_fn_806781F8_00003544
lbl_fn_806781F8_000033F8:
    addi r3, r1, 0x88
    li r4, 0x0
    li r5, 0x40
    bl fn_806756A4
    lwz r3, lbl_80880328
    li r0, 0x80
    li r4, 0x40
    li r5, 0x12
    addi r6, r3, 0x1
    stb r0, 0x8c(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x88
    stw r4, 0x88(r1)
    li r4, 0x40
    stb r5, 0x90(r1)
    stw r6, 0x94(r1)
    stw r0, lbl_80880328
    bl fn_80675EDC
    li r3, 0x0
    b lbl_fn_806781F8_00003544
lbl_fn_806781F8_00003448:
    bl TRKTargetStopped
    cmpwi r3, 0x0
    bne lbl_fn_806781F8_000034A4
    addi r3, r1, 0x48
    li r4, 0x0
    li r5, 0x40
    bl fn_806756A4
    lwz r3, lbl_80880328
    li r0, 0x80
    li r4, 0x40
    li r5, 0x16
    addi r6, r3, 0x1
    stb r0, 0x4c(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x48
    stw r4, 0x48(r1)
    li r4, 0x40
    stb r5, 0x50(r1)
    stw r6, 0x54(r1)
    stw r0, lbl_80880328
    bl fn_80675EDC
    li r3, 0x0
    b lbl_fn_806781F8_00003544
lbl_fn_806781F8_000034A4:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x40
    bl fn_806756A4
    lwz r3, lbl_80880328
    li r0, 0x80
    li r4, 0x40
    li r5, 0x0
    addi r6, r3, 0x1
    stb r0, 0xc(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x8
    stw r4, 0x8(r1)
    li r4, 0x40
    stb r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r0, lbl_80880328
    bl fn_80675EDC
    cmpwi r31, 0x0
    li r3, 0x0
    beq lbl_fn_806781F8_00003514
    cmpwi r31, 0x10
    beq lbl_fn_806781F8_00003514
    cmpwi r31, 0x1
    beq lbl_fn_806781F8_0000352C
    cmpwi r31, 0x11
    beq lbl_fn_806781F8_0000352C
    b lbl_fn_806781F8_00003544
lbl_fn_806781F8_00003514:
    subi r0, r31, 0x10
    mr r3, r30
    cntlzw r0, r0
    srwi r4, r0, 5
    bl fn_80679848
    b lbl_fn_806781F8_00003544
lbl_fn_806781F8_0000352C:
    subi r0, r31, 0x11
    mr r3, r29
    cntlzw r0, r0
    mr r4, r28
    srwi r5, r0, 5
    bl fn_806798D0
lbl_fn_806781F8_00003544:
    lwz r0, 0x164(r1)
    lwz r31, 0x15c(r1)
    lwz r30, 0x158(r1)
    lwz r29, 0x154(r1)
    lwz r28, 0x150(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_8067847C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    bl fn_80679B68
    cmpwi r3, 0x0
    beq lbl_fn_8067847C_0000359C
    cmpwi r3, 0x704
    beq lbl_fn_8067847C_000035A4
    cmpwi r3, 0x705
    beq lbl_fn_8067847C_000035AC
    cmpwi r3, 0x706
    beq lbl_fn_8067847C_000035B4
    b lbl_fn_8067847C_000035BC
lbl_fn_8067847C_0000359C:
    li r31, 0x0
    b lbl_fn_8067847C_000035C0
lbl_fn_8067847C_000035A4:
    li r31, 0x21
    b lbl_fn_8067847C_000035C0
lbl_fn_8067847C_000035AC:
    li r31, 0x22
    b lbl_fn_8067847C_000035C0
lbl_fn_8067847C_000035B4:
    li r31, 0x20
    b lbl_fn_8067847C_000035C0
lbl_fn_8067847C_000035BC:
    li r31, 0x1
lbl_fn_8067847C_000035C0:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x40
    bl fn_806756A4
    lwz r3, lbl_80880328
    li r0, 0x80
    li r4, 0x40
    stw r4, 0x8(r1)
    addi r5, r3, 0x1
    addi r3, r1, 0x8
    stb r0, 0xc(r1)
    addi r0, r5, 0x1
    li r4, 0x40
    stb r31, 0x10(r1)
    stw r5, 0x14(r1)
    stw r0, lbl_80880328
    bl fn_80675EDC
    lwz r31, 0x4c(r1)
    li r3, 0x0
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80678534(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    lbz r0, 0x14(r3)
    lbz r30, 0x18(r3)
    cmplwi r0, 0x1
    bne lbl_fn_80678534_00003684
    lis r31, lbl_807BAEE8@ha
    addi r3, r31, lbl_807BAEE8@l
    crclr 6
    bl OSReport
    cmpwi r30, 0x0
    beq lbl_fn_80678534_0000366C
    addi r3, r31, lbl_807BAEE8@l
    addi r3, r3, 0x1f
    crclr 6
    bl OSReport
    b lbl_fn_80678534_0000367C
lbl_fn_80678534_0000366C:
    addi r3, r31, lbl_807BAEE8@l
    addi r3, r3, 0x27
    crclr 6
    bl OSReport
lbl_fn_80678534_0000367C:
    mr r3, r30
    bl fn_8067A024
lbl_fn_80678534_00003684:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x40
    bl fn_806756A4
    lwz r3, lbl_80880328
    li r0, 0x80
    li r4, 0x40
    li r5, 0x0
    addi r6, r3, 0x1
    stb r0, 0xc(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x8
    stw r4, 0x8(r1)
    li r4, 0x40
    stb r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r0, lbl_80880328
    bl fn_80675EDC
    lwz r31, 0x4c(r1)
    li r3, 0x0
    lwz r30, 0x48(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80678600(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    bl fn_8067A02C
    clrlwi. r0, r3, 24
    bne lbl_fn_80678600_00003720
    li r3, 0x1
    b lbl_fn_80678600_00003734
lbl_fn_80678600_00003720:
    mr r4, r29
    mr r5, r30
    mr r6, r31
    li r3, 0x0
    bl fn_806786D4
lbl_fn_80678600_00003734:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80678668(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    bl fn_8067A02C
    clrlwi. r0, r3, 24
    bne lbl_fn_80678668_00003788
    li r3, 0x1
    b lbl_fn_80678668_0000379C
lbl_fn_80678668_00003788:
    mr r4, r29
    mr r5, r30
    mr r6, r31
    li r3, 0x1
    bl fn_806786DC
lbl_fn_80678668_0000379C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806786D0(void)
{
    nofralloc
    b fn_806786E4
}

asm void fn_806786D4(void)
{
    nofralloc
    li r7, 0xd1
    b fn_80678754
}

asm void fn_806786DC(void)
{
    nofralloc
    li r7, 0xd0
    b fn_80678754
}

asm void fn_806786E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8067767C
    cmpwi r3, 0x0
    bne lbl_fn_806786E4_000037F4
    li r3, 0x1
    b lbl_fn_806786E4_00003828
lbl_fn_806786E4_000037F4:
    mr r4, r31
    li r3, 0xd3
    bl fn_80674F08
    clrlwi. r0, r3, 24
    beq lbl_fn_806786E4_00003814
    cmpwi r0, 0x2
    beq lbl_fn_806786E4_0000381C
    b lbl_fn_806786E4_00003824
lbl_fn_806786E4_00003814:
    li r3, 0x0
    b lbl_fn_806786E4_00003828
lbl_fn_806786E4_0000381C:
    li r3, 0x2
    b lbl_fn_806786E4_00003828
lbl_fn_806786E4_00003824:
    li r3, 0x1
lbl_fn_806786E4_00003828:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80678754(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r7
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_8067767C
    cmpwi r3, 0x0
    bne lbl_fn_80678754_0000387C
    li r3, 0x1
    b lbl_fn_80678754_000038C8
lbl_fn_80678754_0000387C:
    lwz r0, 0x0(r30)
    mr r3, r31
    stw r0, 0x8(r1)
    mr r4, r28
    mr r6, r29
    addi r5, r1, 0x8
    bl fn_80674EF8
    clrlwi. r0, r3, 24
    lwz r3, 0x8(r1)
    stw r3, 0x0(r30)
    beq lbl_fn_80678754_000038B4
    cmpwi r0, 0x2
    beq lbl_fn_80678754_000038BC
    b lbl_fn_80678754_000038C4
lbl_fn_80678754_000038B4:
    li r3, 0x0
    b lbl_fn_80678754_000038C8
lbl_fn_80678754_000038BC:
    li r3, 0x2
    b lbl_fn_80678754_000038C8
lbl_fn_80678754_000038C4:
    li r3, 0x1
lbl_fn_80678754_000038C8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80678800(void)
{
    nofralloc
    mfmsr r3
    blr
}

asm void fn_80678808(void)
{
    nofralloc
    mtmsr r3
    blr
}

asm void fn_80678810(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    add r4, r4, r3
    li r6, 0x700
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    subi r31, r4, 0x1
    cmplw r31, r3
    stw r30, 0x8(r1)
    mr r30, r5
    bge lbl_fn_80678810_0000392C
    li r3, 0x700
    b lbl_fn_80678810_000039D8
lbl_fn_80678810_0000392C:
    lis r4, lbl_807651B8@ha
    addi r4, r4, lbl_807651B8@l
    lwz r0, 0x4(r4)
    cmplw r3, r0
    bgt lbl_fn_80678810_000039D4
    lwz r0, 0x0(r4)
    cmplw r31, r0
    blt lbl_fn_80678810_000039D4
    cmpwi r5, 0x0
    bne lbl_fn_80678810_00003960
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80678810_0000397C
lbl_fn_80678810_00003960:
    cmpwi r5, 0x1
    bne lbl_fn_80678810_00003984
    lis r4, lbl_807651B8@ha
    addi r4, r4, lbl_807651B8@l
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80678810_00003984
lbl_fn_80678810_0000397C:
    li r6, 0x700
    b lbl_fn_80678810_000039D4
lbl_fn_80678810_00003984:
    lis r4, lbl_807651B8@ha
    li r6, 0x0
    lwz r0, lbl_807651B8@l(r4)
    cmplw r3, r0
    bge lbl_fn_80678810_000039A8
    mr r5, r30
    subf r4, r3, r0
    bl fn_80678810
    mr r6, r3
lbl_fn_80678810_000039A8:
    cmpwi r6, 0x0
    bne lbl_fn_80678810_000039D4
    lis r3, lbl_807651B8@ha
    addi r3, r3, lbl_807651B8@l
    lwz r3, 0x4(r3)
    cmplw r31, r3
    ble lbl_fn_80678810_000039D4
    mr r5, r30
    subf r4, r3, r31
    bl fn_80678810
    mr r6, r3
lbl_fn_80678810_000039D4:
    mr r3, r6
lbl_fn_80678810_000039D8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80678908(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r29, r3
    mr r30, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    bl fn_80678800
    mr r31, r3
    li r25, 0xff
    b lbl_fn_80678908_00003A98
lbl_fn_80678908_00003A24:
    mr r3, r28
    bl fn_80678808
    clrrwi r3, r30, 2
    subf r0, r3, r30
    lwz r3, 0x0(r3)
    subfic r0, r0, 0x3
    slwi r0, r0, 3
    srw r0, r3, r0
    clrlwi r24, r0, 24
    sync
    mr r3, r27
    bl fn_80678808
    clrrwi r6, r29, 2
    subf r0, r6, r29
    lwz r5, 0x0(r6)
    subfic r3, r0, 0x3
    subfic r0, r0, 0x3
    slwi r3, r3, 3
    slwi r0, r0, 3
    slw r4, r25, r3
    slw r0, r24, r0
    andc r3, r5, r4
    and r0, r4, r0
    or r0, r3, r0
    stw r0, 0x0(r6)
    sync
    addi r30, r30, 0x1
    addi r29, r29, 0x1
    subi r26, r26, 0x1
lbl_fn_80678908_00003A98:
    cmpwi r26, 0x0
    bne lbl_fn_80678908_00003A24
    mr r3, r31
    bl fn_80678808
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806789D4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r8, gTRKExceptionStatus_807BAF18@ha
    stw r0, 0x44(r1)
    addi r8, r8, gTRKExceptionStatus_807BAF18@l
    stmw r25, 0x24(r1)
    mr r26, r4
    mr r31, r5
    mr r25, r3
    li r30, 0x0
    mr r27, r7
    mr r3, r26
    lwz r0, 0xc(r8)
    lwz r6, 0x0(r8)
    lwz r5, 0x4(r8)
    lwz r4, 0x8(r8)
    stw r6, 0x8(r1)
    stw r5, 0xc(r1)
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    stb r30, 0xd(r8)
    bl fn_80675A1C
    cntlzw r0, r27
    lwz r4, 0x0(r31)
    mr r28, r3
    srwi r5, r0, 5
    bl fn_80678810
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_806789D4_00003B3C
    stw r30, 0x0(r31)
    b lbl_fn_806789D4_00003BB0
lbl_fn_806789D4_00003B3C:
    bl fn_80678800
    lis r4, gTRKCPUState@ha
    cmpwi r27, 0x0
    addi r4, r4, gTRKCPUState@l
    mr r8, r3
    lwz r0, 0x1f8(r4)
    rlwinm r0, r0, 0, 27, 27
    or r7, r3, r0
    beq lbl_fn_806789D4_00003B78
    lwz r5, 0x0(r31)
    mr r3, r25
    mr r4, r28
    mr r6, r8
    bl fn_80678908
    b lbl_fn_806789D4_00003BB0
lbl_fn_806789D4_00003B78:
    lwz r5, 0x0(r31)
    mr r6, r7
    mr r3, r28
    mr r4, r25
    mr r7, r8
    bl fn_80678908
    lwz r4, 0x0(r31)
    mr r3, r28
    bl fn_80675408
    cmplw r26, r28
    beq lbl_fn_806789D4_00003BB0
    lwz r4, 0x0(r31)
    mr r3, r26
    bl fn_80675408
lbl_fn_806789D4_00003BB0:
    lis r3, gTRKExceptionStatus_807BAF18@ha
    addi r3, r3, gTRKExceptionStatus_807BAF18@l
    lbz r0, 0xd(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806789D4_00003BD0
    li r0, 0x0
    stw r0, 0x0(r31)
    li r29, 0x702
lbl_fn_806789D4_00003BD0:
    lwz r6, 0x8(r1)
    lis r7, gTRKExceptionStatus_807BAF18@ha
    stwu r6, gTRKExceptionStatus_807BAF18@l(r7)
    mr r3, r29
    lwz r5, 0xc(r1)
    lwz r4, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r5, 0x4(r7)
    stw r4, 0x8(r7)
    stw r0, 0xc(r7)
    lmw r25, 0x24(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80678B24(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmplwi r4, 0x24
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r6
    ble lbl_fn_80678B24_00003C34
    li r3, 0x701
    b lbl_fn_80678B24_00003CEC
lbl_fn_80678B24_00003C34:
    lis r12, gTRKExceptionStatus_807BAF18@ha
    subf r4, r3, r4
    addi r12, r12, gTRKExceptionStatus_807BAF18@l
    cmpwi r7, 0x0
    lwz r9, 0xc(r12)
    lis r8, gTRKCPUState@ha
    lwz r11, 0x0(r12)
    li r0, 0x0
    lwz r10, 0x4(r12)
    addi r31, r4, 0x1
    lwz r7, 0x8(r12)
    slwi r3, r3, 2
    stb r0, 0xd(r12)
    addi r8, r8, gTRKCPUState@l
    slwi r0, r31, 2
    stw r11, 0x8(r1)
    add r4, r8, r3
    stw r10, 0xc(r1)
    stw r7, 0x10(r1)
    stw r9, 0x14(r1)
    stw r0, 0x0(r6)
    beq lbl_fn_80678B24_00003C9C
    mr r3, r5
    mr r5, r31
    bl fn_8067732C
    b lbl_fn_80678B24_00003CA8
lbl_fn_80678B24_00003C9C:
    mr r3, r5
    mr r5, r31
    bl fn_80677594
lbl_fn_80678B24_00003CA8:
    lis r4, gTRKExceptionStatus_807BAF18@ha
    addi r4, r4, gTRKExceptionStatus_807BAF18@l
    lbz r0, 0xd(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80678B24_00003CC8
    li r0, 0x0
    stw r0, 0x0(r30)
    li r3, 0x702
lbl_fn_80678B24_00003CC8:
    lwz r6, 0x8(r1)
    lis r7, gTRKExceptionStatus_807BAF18@ha
    stwu r6, gTRKExceptionStatus_807BAF18@l(r7)
    lwz r5, 0xc(r1)
    lwz r4, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r5, 0x4(r7)
    stw r4, 0x8(r7)
    stw r0, 0xc(r7)
lbl_fn_80678B24_00003CEC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80678C1C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmplwi r4, 0x21
    stw r0, 0x44(r1)
    stmw r26, 0x28(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    ble lbl_fn_80678C1C_00003D38
    li r3, 0x701
    b lbl_fn_80678C1C_00003E2C
lbl_fn_80678C1C_00003D38:
    lis r6, gTRKExceptionStatus_807BAF18@ha
    li r31, 0x0
    addi r6, r6, gTRKExceptionStatus_807BAF18@l
    lwz r0, 0xc(r6)
    lwz r5, 0x0(r6)
    lwz r4, 0x4(r6)
    lwz r3, 0x8(r6)
    stw r5, 0x10(r1)
    stw r4, 0x14(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    stb r31, 0xd(r6)
    bl fn_80678800
    ori r3, r3, 0x2000
    bl fn_80678808
    stw r31, 0x0(r29)
    li r3, 0x0
    b lbl_fn_80678C1C_00003DD8
lbl_fn_80678C1C_00003D80:
    cmpwi r30, 0x0
    beq lbl_fn_80678C1C_00003DAC
    mr r4, r26
    mr r5, r30
    addi r3, r1, 0x8
    bl fn_80679D4C
    lwz r5, 0x8(r1)
    mr r3, r28
    lwz r6, 0xc(r1)
    bl fn_806771D4
    b lbl_fn_80678C1C_00003DC8
lbl_fn_80678C1C_00003DAC:
    mr r3, r28
    addi r4, r1, 0x8
    bl fn_8067741C
    mr r4, r26
    mr r5, r30
    addi r3, r1, 0x8
    bl fn_80679D4C
lbl_fn_80678C1C_00003DC8:
    lwz r4, 0x0(r29)
    addi r26, r26, 0x1
    addi r0, r4, 0x8
    stw r0, 0x0(r29)
lbl_fn_80678C1C_00003DD8:
    cmplw r26, r27
    bgt lbl_fn_80678C1C_00003DE8
    cmpwi r3, 0x0
    beq lbl_fn_80678C1C_00003D80
lbl_fn_80678C1C_00003DE8:
    lis r4, gTRKExceptionStatus_807BAF18@ha
    addi r4, r4, gTRKExceptionStatus_807BAF18@l
    lbz r0, 0xd(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80678C1C_00003E08
    li r0, 0x0
    stw r0, 0x0(r29)
    li r3, 0x702
lbl_fn_80678C1C_00003E08:
    lwz r6, 0x10(r1)
    lis r7, gTRKExceptionStatus_807BAF18@ha
    stwu r6, gTRKExceptionStatus_807BAF18@l(r7)
    lwz r5, 0x14(r1)
    lwz r4, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r5, 0x4(r7)
    stw r4, 0x8(r7)
    stw r0, 0xc(r7)
lbl_fn_80678C1C_00003E2C:
    lmw r26, 0x28(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80678D58(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmplwi r4, 0x60
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    ble lbl_fn_80678D58_00003E64
    li r3, 0x701
    b lbl_fn_80678D58_00003F90
lbl_fn_80678D58_00003E64:
    lis r12, gTRKExceptionStatus_807BAF18@ha
    cmplw r3, r4
    addi r12, r12, gTRKExceptionStatus_807BAF18@l
    li r0, 0x0
    lwz r8, 0xc(r12)
    lwz r11, 0x0(r12)
    lwz r10, 0x4(r12)
    lwz r9, 0x8(r12)
    stb r0, 0xd(r12)
    stw r11, 0x8(r1)
    stw r10, 0xc(r1)
    stw r9, 0x10(r1)
    stw r8, 0x14(r1)
    stw r0, 0x0(r6)
    bgt lbl_fn_80678D58_00003F4C
    subf r4, r3, r4
    lis r8, gTRKCPUState@ha
    addi r9, r4, 0x1
    cmpwi r7, 0x0
    slwi r7, r9, 2
    addi r8, r8, gTRKCPUState@l
    slwi r0, r3, 2
    stw r7, 0x0(r6)
    add r3, r8, r0
    addi r4, r3, 0x1a8
    beq lbl_fn_80678D58_00003EDC
    mr r3, r5
    mr r5, r9
    bl fn_8067732C
    b lbl_fn_80678D58_00003F4C
lbl_fn_80678D58_00003EDC:
    addi r0, r8, 0x1ec
    cmplw r4, r0
    bgt lbl_fn_80678D58_00003F08
    add r3, r4, r7
    addi r0, r8, 0x1e8
    subi r3, r3, 0x4
    cmplw r3, r0
    blt lbl_fn_80678D58_00003F08
    lis r3, gTRKRestoreFlags@ha
    li r0, 0x1
    stb r0, gTRKRestoreFlags@l(r3)
lbl_fn_80678D58_00003F08:
    lis r3, gTRKCPUState@ha
    addi r3, r3, gTRKCPUState@l
    addi r6, r3, 0x278
    cmplw r4, r6
    bgt lbl_fn_80678D58_00003F40
    slwi r0, r9, 2
    add r3, r4, r0
    subi r0, r3, 0x4
    cmplw r0, r6
    blt lbl_fn_80678D58_00003F40
    lis r3, gTRKRestoreFlags@ha
    li r0, 0x1
    addi r3, r3, gTRKRestoreFlags@l
    stb r0, 0x1(r3)
lbl_fn_80678D58_00003F40:
    mr r3, r5
    mr r5, r9
    bl fn_80677594
lbl_fn_80678D58_00003F4C:
    lis r4, gTRKExceptionStatus_807BAF18@ha
    addi r4, r4, gTRKExceptionStatus_807BAF18@l
    lbz r0, 0xd(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80678D58_00003F6C
    li r0, 0x0
    stw r0, 0x0(r31)
    li r3, 0x702
lbl_fn_80678D58_00003F6C:
    lwz r6, 0x8(r1)
    lis r7, gTRKExceptionStatus_807BAF18@ha
    stwu r6, gTRKExceptionStatus_807BAF18@l(r7)
    lwz r5, 0xc(r1)
    lwz r4, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r5, 0x4(r7)
    stw r4, 0x8(r7)
    stw r0, 0xc(r7)
lbl_fn_80678D58_00003F90:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80678EBC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmplwi r4, 0x1f
    stw r0, 0x44(r1)
    stmw r26, 0x28(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    ble lbl_fn_80678EBC_00003FD8
    li r3, 0x701
    b lbl_fn_80678EBC_00004100
lbl_fn_80678EBC_00003FD8:
    lis r9, gTRKExceptionStatus_807BAF18@ha
    li r31, 0x0
    addi r9, r9, gTRKExceptionStatus_807BAF18@l
    addi r3, r1, 0x8
    lwz r0, 0xc(r9)
    li r4, 0x398
    lwz r8, 0x0(r9)
    li r5, 0x1
    lwz r7, 0x4(r9)
    lwz r6, 0x8(r9)
    stw r8, 0x18(r1)
    stw r7, 0x1c(r1)
    stw r6, 0x20(r1)
    stw r0, 0x24(r1)
    stb r31, 0xd(r9)
    bl fn_80679B80
    lwz r0, 0x8(r1)
    addi r3, r1, 0x8
    li r4, 0x398
    li r5, 0x0
    oris r0, r0, 0xa000
    stw r0, 0x8(r1)
    bl fn_80679B80
    stw r31, 0x8(r1)
    addi r3, r1, 0x8
    li r4, 0x390
    li r5, 0x0
    bl fn_80679B80
    stw r31, 0x0(r29)
    li r3, 0x0
    b lbl_fn_80678EBC_000040AC
lbl_fn_80678EBC_00004054:
    cmpwi r30, 0x0
    beq lbl_fn_80678EBC_00004080
    mr r4, r26
    mr r5, r30
    addi r3, r1, 0x10
    bl fn_80679C5C
    lwz r5, 0x10(r1)
    mr r3, r28
    lwz r6, 0x14(r1)
    bl fn_806771D4
    b lbl_fn_80678EBC_0000409C
lbl_fn_80678EBC_00004080:
    mr r3, r28
    addi r4, r1, 0x10
    bl fn_8067741C
    mr r4, r26
    mr r5, r30
    addi r3, r1, 0x10
    bl fn_80679C5C
lbl_fn_80678EBC_0000409C:
    lwz r4, 0x0(r29)
    addi r26, r26, 0x1
    addi r0, r4, 0x8
    stw r0, 0x0(r29)
lbl_fn_80678EBC_000040AC:
    cmplw r26, r27
    bgt lbl_fn_80678EBC_000040BC
    cmpwi r3, 0x0
    beq lbl_fn_80678EBC_00004054
lbl_fn_80678EBC_000040BC:
    lis r4, gTRKExceptionStatus_807BAF18@ha
    addi r4, r4, gTRKExceptionStatus_807BAF18@l
    lbz r0, 0xd(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80678EBC_000040DC
    li r0, 0x0
    stw r0, 0x0(r29)
    li r3, 0x702
lbl_fn_80678EBC_000040DC:
    lwz r6, 0x18(r1)
    lis r7, gTRKExceptionStatus_807BAF18@ha
    stwu r6, gTRKExceptionStatus_807BAF18@l(r7)
    lwz r5, 0x1c(r1)
    lwz r4, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r5, 0x4(r7)
    stw r4, 0x8(r7)
    stw r0, 0xc(r7)
lbl_fn_80678EBC_00004100:
    lmw r26, 0x28(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void TRKInterruptHandler(void)
{
    nofralloc
    mtsrr0 r2
    mtsrr1 r4
    mfsprg r4, 3
    mfcr r2
    mtsprg 3, r2
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    lwz r2, 0x8c(r2)
    ori r2, r2, 0x8002
    xori r2, r2, 0x8002
    sync
    mtmsr r2
    sync
    lis r2, TRK_saved_exceptionID_80880330@h
    ori r2, r2, TRK_saved_exceptionID_80880330@l
    sth r3, 0x0(r2)
    cmpwi r3, 0x500
    bne lbl_TRKInterruptHandler_000041DC
    lis r2, gTRKCPUState@h
    ori r2, r2, gTRKCPUState@l
    mflr r3
    stw r3, 0x42c(r2)
    bl TRKUARTInterruptHandler
    lis r2, gTRKCPUState@h
    ori r2, r2, gTRKCPUState@l
    lwz r3, 0x42c(r2)
    mtlr r3
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    lwz r2, 0xa0(r2)
    lbz r2, 0x0(r2)
    cmpwi r2, 0x0
    beq lbl_TRKInterruptHandler_000041C0
    lis r2, gTRKExceptionStatus_807BAF18@h
    ori r2, r2, gTRKExceptionStatus_807BAF18@l
    lbz r2, 0xc(r2)
    cmpwi r2, 0x1
    beq lbl_TRKInterruptHandler_000041C0
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    li r3, 0x1
    stb r3, 0x9c(r2)
    b lbl_TRKInterruptHandler_000041DC
lbl_TRKInterruptHandler_000041C0:
    lis r2, gTRKSaveState@h
    ori r2, r2, gTRKSaveState@l
    lwz r3, 0x88(r2)
    mtcrf 255, r3
    lwz r3, 0xc(r2)
    lwz r2, 0x8(r2)
    rfi
lbl_TRKInterruptHandler_000041DC:
    lis r2, TRK_saved_exceptionID_80880330@h
    ori r2, r2, TRK_saved_exceptionID_80880330@l
    lhz r3, 0x0(r2)
    lis r2, gTRKExceptionStatus_807BAF18@h
    ori r2, r2, gTRKExceptionStatus_807BAF18@l
    lbz r2, 0xc(r2)
    cmpwi r2, 0x0
    bne TRKExceptionHandler
    lis r2, gTRKCPUState@h
    ori r2, r2, gTRKCPUState@l
    stw r0, 0x0(r2)
    stw r1, 0x4(r2)
    mfsprg r0, 1
    stw r0, 0x8(r2)
    sth r3, 0x2f8(r2)
    sth r3, 0x2fa(r2)
    mfsprg r0, 2
    stw r0, 0xc(r2)
    stmw r4, 0x10(r2)
    mfsrr0 r27
    mflr r28
    mfsprg r29, 3
    mfctr r30
    mfxer r31
    stmw r27, 0x80(r2)
    bl TRKSaveExtended1Block
    lis r2, gTRKExceptionStatus_807BAF18@h
    ori r2, r2, gTRKExceptionStatus_807BAF18@l
    li r3, 0x1
    stb r3, 0xc(r2)
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    lwz r0, 0x8c(r2)
    sync
    mtmsr r0
    sync
    lwz r0, 0x80(r2)
    mtlr r0
    lwz r0, 0x84(r2)
    mtctr r0
    lwz r0, 0x88(r2)
    mtxer r0
    lwz r0, 0x94(r2)
    mtdsisr r0
    lwz r0, 0x90(r2)
    mtdar r0
    lmw r3, 0xc(r2)
    lwz r0, 0x0(r2)
    lwz r1, 0x4(r2)
    lwz r2, 0x8(r2)
    b TRKPostInterruptEvent
}

asm void TRKExceptionHandler(void)
{
    nofralloc
    lis r2, gTRKExceptionStatus_807BAF18@h
    ori r2, r2, gTRKExceptionStatus_807BAF18@l
    sth r3, 0x8(r2)
    mfsrr0 r3
    stw r3, 0x0(r2)
    lhz r3, 0x8(r2)
    cmpwi r3, 0x200
    beq lbl_TRKExceptionHandler_00004314
    cmpwi r3, 0x300
    beq lbl_TRKExceptionHandler_00004314
    cmpwi r3, 0x400
    beq lbl_TRKExceptionHandler_00004314
    cmpwi r3, 0x600
    beq lbl_TRKExceptionHandler_00004314
    cmpwi r3, 0x700
    beq lbl_TRKExceptionHandler_00004314
    cmpwi r3, 0x800
    beq lbl_TRKExceptionHandler_00004314
    cmpwi r3, 0x1000
    beq lbl_TRKExceptionHandler_00004314
    cmpwi r3, 0x1100
    beq lbl_TRKExceptionHandler_00004314
    cmpwi r3, 0x1200
    beq lbl_TRKExceptionHandler_00004314
    cmpwi r3, 0x1300
    beq lbl_TRKExceptionHandler_00004314
    b lbl_TRKExceptionHandler_00004320
lbl_TRKExceptionHandler_00004314:
    mfsrr0 r3
    addi r3, r3, 0x4
    mtsrr0 r3
lbl_TRKExceptionHandler_00004320:
    lis r2, gTRKExceptionStatus_807BAF18@h
    ori r2, r2, gTRKExceptionStatus_807BAF18@l
    li r3, 0x1
    stb r3, 0xd(r2)
    mfsprg r3, 3
    mtcrf 255, r3
    mfsprg r2, 1
    mfsprg r3, 2
    rfi
}

asm void TRKPostInterruptEvent(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, gTRKState@ha
    stw r0, 0x24(r1)
    addi r3, r3, gTRKState@l
    lwz r0, 0x9c(r3)
    cmpwi r0, 0x0
    beq lbl_TRKPostInterruptEvent_00004370
    li r0, 0x0
    stw r0, 0x9c(r3)
    b lbl_TRKPostInterruptEvent_000043EC
lbl_TRKPostInterruptEvent_00004370:
    lis r3, gTRKCPUState@ha
    addi r3, r3, gTRKCPUState@l
    lwz r0, 0x2f8(r3)
    clrlwi r0, r0, 16
    cmpwi r0, 0x700
    beq lbl_TRKPostInterruptEvent_00004390
    cmpwi r0, 0xd00
    bne lbl_TRKPostInterruptEvent_000043D8
lbl_TRKPostInterruptEvent_00004390:
    lis r3, gTRKCPUState@ha
    li r0, 0x4
    addi r3, r3, gTRKCPUState@l
    stw r0, 0x8(r1)
    lwz r4, 0x80(r3)
    addi r3, r1, 0xc
    addi r5, r1, 0x8
    li r6, 0x0
    li r7, 0x1
    bl fn_806789D4
    lwz r3, 0xc(r1)
    subis r0, r3, 0xfe0
    cmplwi r0, 0x0
    bne lbl_TRKPostInterruptEvent_000043D0
    li r4, 0x5
    b lbl_TRKPostInterruptEvent_000043DC
lbl_TRKPostInterruptEvent_000043D0:
    li r4, 0x3
    b lbl_TRKPostInterruptEvent_000043DC
lbl_TRKPostInterruptEvent_000043D8:
    li r4, 0x4
lbl_TRKPostInterruptEvent_000043DC:
    addi r3, r1, 0x10
    bl fn_806761B8
    addi r3, r1, 0x10
    bl fn_806760EC
lbl_TRKPostInterruptEvent_000043EC:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void TRKSwapAndGo(void)
{
    nofralloc
    lis r3, gTRKState@h
    ori r3, r3, gTRKState@l
    stmw r0, 0x0(r3)
    mfmsr r0
    stw r0, 0x8c(r3)
    mflr r0
    stw r0, 0x80(r3)
    mfctr r0
    stw r0, 0x84(r3)
    mfxer r0
    stw r0, 0x88(r3)
    mfdsisr r0
    stw r0, 0x94(r3)
    mfdar r0
    stw r0, 0x90(r3)
    li r1, -0x7ffe
    nor r1, r1, r1
    mfmsr r3
    and r3, r3, r1
    mtmsr r3
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    lwz r2, 0xa0(r2)
    lbz r2, 0x0(r2)
    cmpwi r2, 0x0
    beq lbl_TRKSwapAndGo_00004478
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    li r3, 0x1
    stb r3, 0x9c(r2)
    b TRKInterruptHandlerEnableInterrupts
lbl_TRKSwapAndGo_00004478:
    lis r2, gTRKExceptionStatus_807BAF18@h
    ori r2, r2, gTRKExceptionStatus_807BAF18@l
    li r3, 0x0
    stb r3, 0xc(r2)
    bl TRKRestoreExtended1Block
    lis r2, gTRKCPUState@h
    ori r2, r2, gTRKCPUState@l
    lmw r27, 0x80(r2)
    mtsrr0 r27
    mtlr r28
    mtcrf 255, r29
    mtctr r30
    mtxer r31
    lmw r3, 0xc(r2)
    lwz r0, 0x0(r2)
    lwz r1, 0x4(r2)
    lwz r2, 0x8(r2)
    rfi
}

asm void TRKInterruptHandlerEnableInterrupts(void)
{
    nofralloc
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    lwz r0, 0x8c(r2)
    sync
    mtmsr r0
    sync
    lwz r0, 0x80(r2)
    mtlr r0
    lwz r0, 0x84(r2)
    mtctr r0
    lwz r0, 0x88(r2)
    mtxer r0
    lwz r0, 0x94(r2)
    mtdsisr r0
    lwz r0, 0x90(r2)
    mtdar r0
    lmw r3, 0xc(r2)
    lwz r0, 0x0(r2)
    lwz r1, 0x4(r2)
    lwz r2, 0x8(r2)
    b TRKPostInterruptEvent
}

asm void TRKTargetInterrupt(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    lwz r3, 0x0(r3)
    subi r0, r3, 0x3
    cmplwi r0, 0x1
    bgt lbl_TRKTargetInterrupt_00004558
    bl fn_80679724
    cmpwi r3, 0x0
    bne lbl_TRKTargetInterrupt_00004558
    li r3, 0x1
    bl TRKTargetSetStopped
    li r3, 0x90
    bl fn_80675FAC
    mr r31, r3
lbl_TRKTargetInterrupt_00004558:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80679488(void)
{
    nofralloc
    stwu r1, -0x470(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x40
    stw r0, 0x474(r1)
    stw r31, 0x46c(r1)
    stw r30, 0x468(r1)
    stw r29, 0x464(r1)
    mr r29, r3
    addi r3, r1, 0x20
    bl fn_806756A4
    lis r31, gTRKCPUState@ha
    li r4, 0x4e8
    addi r31, r31, gTRKCPUState@l
    li r5, 0x90
    lwz r0, 0x80(r31)
    addi r3, r1, 0x14
    stw r4, 0x20(r1)
    addi r4, r1, 0x10
    stb r5, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80679F94
    lwz r0, 0x14(r1)
    li r3, 0xe4
    stw r0, 0x34(r1)
    bl fn_80679F8C
    lwz r3, 0x0(r3)
    li r0, 0x4
    stw r3, 0x38(r1)
    addi r3, r1, 0x18
    lwz r4, 0x80(r31)
    addi r5, r1, 0x8
    stw r0, 0x8(r1)
    li r6, 0x0
    li r7, 0x1
    bl fn_806789D4
    lwz r0, 0x2f8(r31)
    mr r3, r29
    lwz r5, 0x18(r1)
    addi r4, r1, 0x20
    clrlwi r0, r0, 16
    stw r5, 0x2c(r1)
    li r5, 0x40
    stw r0, 0x30(r1)
    bl fn_806772C8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80679488_00004698
    li r30, 0x0
lbl_fn_80679488_00004634:
    lwz r4, 0x0(r31)
    mr r3, r29
    bl fn_80677104
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0x20
    blt lbl_fn_80679488_00004634
    lis r31, gTRKCPUState@ha
    mr r3, r29
    addi r31, r31, gTRKCPUState@l
    lwz r4, 0x80(r31)
    bl fn_80677104
    lwz r4, 0x84(r31)
    mr r3, r29
    bl fn_80677104
    lwz r4, 0x88(r31)
    mr r3, r29
    bl fn_80677104
    lwz r4, 0x8c(r31)
    mr r3, r29
    bl fn_80677104
    lwz r4, 0x90(r31)
    mr r3, r29
    bl fn_80677104
    mr r30, r3
lbl_fn_80679488_00004698:
    cmpwi r30, 0x0
    bne lbl_fn_80679488_00004708
    li r3, 0xd4
    bl fn_80679F8C
    lwz r4, 0x0(r3)
    mr r3, r29
    bl fn_80677104
    li r3, 0xd8
    bl fn_80679F8C
    lwz r4, 0x0(r3)
    mr r3, r29
    bl fn_80677104
    li r3, 0xdc
    bl fn_80679F8C
    lwz r4, 0x0(r3)
    mr r3, r29
    bl fn_80677104
    li r3, 0xe0
    bl fn_80679F8C
    lwz r4, 0x0(r3)
    mr r3, r29
    bl fn_80677104
    li r3, 0xe4
    bl fn_80679F8C
    lwz r4, 0x0(r3)
    mr r3, r29
    bl fn_80677104
    mr r30, r3
lbl_fn_80679488_00004708:
    cmpwi r30, 0x0
    bne lbl_fn_80679488_00004750
    lis r3, gTRKCPUState@ha
    li r0, 0x400
    addi r3, r3, gTRKCPUState@l
    stw r0, 0xc(r1)
    lwz r0, 0x80(r3)
    addi r3, r1, 0x60
    addi r5, r1, 0xc
    li r6, 0x0
    clrrwi r4, r0, 10
    li r7, 0x1
    bl fn_806789D4
    mr r30, r3
    mr r3, r29
    addi r4, r1, 0x60
    li r5, 0x400
    bl fn_80676FD0
lbl_fn_80679488_00004750:
    mr r3, r30
    lwz r31, 0x46c(r1)
    lwz r30, 0x468(r1)
    lwz r29, 0x464(r1)
    lwz r0, 0x474(r1)
    mtlr r0
    addi r1, r1, 0x470
    blr
}

asm void fn_80679688(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x40
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    mr r30, r3
    addi r3, r1, 0x10
    bl fn_806756A4
    lis r31, gTRKExceptionStatus_807BAF18@ha
    li r3, 0x40
    lwz r4, gTRKExceptionStatus_807BAF18@l(r31)
    li r5, 0x91
    li r0, 0x4
    stw r3, 0x10(r1)
    addi r3, r1, 0xc
    li r6, 0x0
    stb r5, 0x14(r1)
    addi r5, r1, 0x8
    li r7, 0x1
    stw r4, 0x18(r1)
    stw r0, 0x8(r1)
    bl fn_806789D4
    addi r3, r31, gTRKExceptionStatus_807BAF18@l
    lwz r4, 0xc(r1)
    lhz r0, 0x8(r3)
    mr r3, r30
    stw r4, 0x1c(r1)
    addi r4, r1, 0x10
    li r5, 0x40
    stw r0, 0x20(r1)
    bl fn_806772C8
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80679724(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80831ED0@ha
    stw r0, 0x14(r1)
    lwz r0, lbl_80831ED0@l(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80679724_00004918
    lis r4, gTRKCPUState@ha
    li r5, 0x1
    addi r4, r4, gTRKCPUState@l
    lwz r0, 0x1f8(r4)
    rlwinm r0, r0, 0, 22, 20
    ori r0, r0, 0x8000
    stw r0, 0x1f8(r4)
    beq lbl_fn_80679724_000048A8
    lwz r0, 0x2f8(r4)
    clrlwi r0, r0, 16
    cmplwi r0, 0xd00
    bne lbl_fn_80679724_000048A8
    addi r3, r3, lbl_80831ED0@l
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80679724_00004874
    cmpwi r0, 0x1
    beq lbl_fn_80679724_00004888
    b lbl_fn_80679724_000048A8
lbl_fn_80679724_00004874:
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80679724_000048A8
    li r5, 0x0
    b lbl_fn_80679724_000048A8
lbl_fn_80679724_00004888:
    lwz r4, 0x80(r4)
    lwz r0, 0xc(r3)
    cmplw r4, r0
    blt lbl_fn_80679724_000048A8
    lwz r0, 0x10(r3)
    cmplw r4, r0
    bgt lbl_fn_80679724_000048A8
    li r5, 0x0
lbl_fn_80679724_000048A8:
    cmpwi r5, 0x0
    beq lbl_fn_80679724_000048C0
    lis r3, lbl_80831ED0@ha
    li r0, 0x0
    stw r0, lbl_80831ED0@l(r3)
    b lbl_fn_80679724_00004918
lbl_fn_80679724_000048C0:
    lis r5, lbl_80831ED0@ha
    lis r4, gTRKCPUState@ha
    addi r4, r4, gTRKCPUState@l
    li r6, 0x1
    addi r3, r5, lbl_80831ED0@l
    lwz r0, 0x1f8(r4)
    lwz r3, 0x4(r3)
    ori r0, r0, 0x400
    stw r6, lbl_80831ED0@l(r5)
    rlwinm r0, r0, 0, 17, 15
    cmpwi r3, 0x0
    stw r0, 0x1f8(r4)
    beq lbl_fn_80679724_000048FC
    cmpwi r3, 0x10
    bne lbl_fn_80679724_00004910
lbl_fn_80679724_000048FC:
    lis r4, lbl_80831ED0@ha
    addi r4, r4, lbl_80831ED0@l
    lwz r3, 0x8(r4)
    subi r0, r3, 0x1
    stw r0, 0x8(r4)
lbl_fn_80679724_00004910:
    li r3, 0x0
    bl TRKTargetSetStopped
lbl_fn_80679724_00004918:
    lwz r0, 0x14(r1)
    lis r3, lbl_80831ED0@ha
    lwz r3, lbl_80831ED0@l(r3)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80679848(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    beq lbl_fn_80679848_0000494C
    li r3, 0x703
    b lbl_fn_80679848_000049A8
lbl_fn_80679848_0000494C:
    lis r4, gTRKCPUState@ha
    lis r7, lbl_80831ED0@ha
    addi r4, r4, gTRKCPUState@l
    li r5, 0x1
    lwz r0, 0x1f8(r4)
    addi r6, r7, lbl_80831ED0@l
    li r8, 0x0
    stw r8, 0x4(r6)
    ori r0, r0, 0x400
    rlwinm r0, r0, 0, 17, 15
    stw r3, 0x8(r6)
    stw r5, lbl_80831ED0@l(r7)
    stw r0, 0x1f8(r4)
    b lbl_fn_80679848_00004988
    bne lbl_fn_80679848_0000499C
lbl_fn_80679848_00004988:
    lis r4, lbl_80831ED0@ha
    addi r4, r4, lbl_80831ED0@l
    lwz r3, 0x8(r4)
    subi r0, r3, 0x1
    stw r0, 0x8(r4)
lbl_fn_80679848_0000499C:
    li r3, 0x0
    bl TRKTargetSetStopped
    li r3, 0x0
lbl_fn_80679848_000049A8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806798D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    beq lbl_fn_806798D0_000049D4
    li r3, 0x703
    b lbl_fn_806798D0_00004A1C
lbl_fn_806798D0_000049D4:
    lis r5, gTRKCPUState@ha
    lis r7, lbl_80831ED0@ha
    addi r5, r5, gTRKCPUState@l
    li r8, 0x1
    lwz r0, 0x1f8(r5)
    addi r6, r7, lbl_80831ED0@l
    stw r8, 0x4(r6)
    ori r0, r0, 0x400
    rlwinm r0, r0, 0, 17, 15
    stw r3, 0xc(r6)
    stw r4, 0x10(r6)
    stw r8, lbl_80831ED0@l(r7)
    stw r0, 0x1f8(r5)
    b lbl_fn_806798D0_00004A10
    stw r0, 0x8(r4)
lbl_fn_806798D0_00004A10:
    li r3, 0x0
    bl TRKTargetSetStopped
    li r3, 0x0
lbl_fn_806798D0_00004A1C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80679944(void)
{
    nofralloc
    lis r3, gTRKCPUState@ha
    addi r3, r3, gTRKCPUState@l
    lwz r3, 0x80(r3)
    blr
}

asm void TRKTargetSupportRequest(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r7, gTRKCPUState@ha
    stw r0, 0x34(r1)
    addi r7, r7, gTRKCPUState@l
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lwz r29, 0xc(r7)
    subi r0, r29, 0xd0
    cmplwi r0, 0x1
    ble lbl_TRKTargetSupportRequest_00004B90
    cmpwi r29, 0xd2
    beq lbl_TRKTargetSupportRequest_00004AA0
    cmpwi r29, 0xd3
    beq lbl_TRKTargetSupportRequest_00004AEC
    cmpwi r29, 0xd4
    beq lbl_TRKTargetSupportRequest_00004B2C
    addi r3, r1, 0x10
    li r4, 0x4
    bl fn_806761B8
    addi r3, r1, 0x10
    bl fn_806760EC
    li r3, 0x0
    b lbl_TRKTargetSupportRequest_00004C14
lbl_TRKTargetSupportRequest_00004AA0:
    lwz r0, 0x14(r7)
    addi r6, r1, 0xc
    lwz r3, 0x10(r7)
    lwz r5, 0x18(r7)
    clrlwi r4, r0, 24
    bl fn_806767A8
    lwz r0, 0xc(r1)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_TRKTargetSupportRequest_00004AD8
    cmpwi r3, 0x0
    beq lbl_TRKTargetSupportRequest_00004AD8
    li r0, 0x1
    stw r0, 0xc(r1)
lbl_TRKTargetSupportRequest_00004AD8:
    lis r3, gTRKCPUState@ha
    lwz r0, 0xc(r1)
    addi r3, r3, gTRKCPUState@l
    stw r0, 0xc(r3)
    b lbl_TRKTargetSupportRequest_00004BFC
lbl_TRKTargetSupportRequest_00004AEC:
    lwz r3, 0x10(r7)
    addi r4, r1, 0xc
    bl fn_806768C0
    lwz r0, 0xc(r1)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_TRKTargetSupportRequest_00004B18
    cmpwi r3, 0x0
    beq lbl_TRKTargetSupportRequest_00004B18
    li r0, 0x1
    stw r0, 0xc(r1)
lbl_TRKTargetSupportRequest_00004B18:
    lis r3, gTRKCPUState@ha
    lwz r0, 0xc(r1)
    addi r3, r3, gTRKCPUState@l
    stw r0, 0xc(r3)
    b lbl_TRKTargetSupportRequest_00004BFC
lbl_TRKTargetSupportRequest_00004B2C:
    lwz r3, 0x14(r7)
    addi r4, r1, 0x8
    lwz r0, 0x18(r7)
    addi r6, r1, 0xc
    lwz r3, 0x0(r3)
    stw r3, 0x8(r1)
    clrlwi r5, r0, 24
    lwz r3, 0x10(r7)
    bl fn_806769A4
    lwz r0, 0xc(r1)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_TRKTargetSupportRequest_00004B70
    cmpwi r3, 0x0
    beq lbl_TRKTargetSupportRequest_00004B70
    li r0, 0x1
    stw r0, 0xc(r1)
lbl_TRKTargetSupportRequest_00004B70:
    lis r3, gTRKCPUState@ha
    lwz r4, 0xc(r1)
    addi r3, r3, gTRKCPUState@l
    lwz r0, 0x8(r1)
    stw r4, 0xc(r3)
    lwz r3, 0x14(r3)
    stw r0, 0x0(r3)
    b lbl_TRKTargetSupportRequest_00004BFC
lbl_TRKTargetSupportRequest_00004B90:
    subi r0, r29, 0xd1
    lwz r30, 0x14(r7)
    cntlzw r0, r0
    lwz r3, 0x10(r7)
    lwz r4, 0x18(r7)
    mr r5, r30
    addi r6, r1, 0xc
    srwi r8, r0, 5
    li r7, 0x1
    bl fn_8067648C
    lwz r0, 0xc(r1)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_TRKTargetSupportRequest_00004BD8
    cmpwi r3, 0x0
    beq lbl_TRKTargetSupportRequest_00004BD8
    li r0, 0x1
    stw r0, 0xc(r1)
lbl_TRKTargetSupportRequest_00004BD8:
    lis r3, gTRKCPUState@ha
    cmpwi r29, 0xd1
    addi r3, r3, gTRKCPUState@l
    lwz r0, 0xc(r1)
    stw r0, 0xc(r3)
    bne lbl_TRKTargetSupportRequest_00004BFC
    lwz r3, 0x18(r3)
    lwz r4, 0x0(r30)
    bl fn_80675408
lbl_TRKTargetSupportRequest_00004BFC:
    lis r5, gTRKCPUState@ha
    mr r3, r31
    addi r5, r5, gTRKCPUState@l
    lwz r4, 0x80(r5)
    addi r0, r4, 0x4
    stw r0, 0x80(r5)
lbl_TRKTargetSupportRequest_00004C14:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void TRKTargetStopped(void)
{
    nofralloc
    lis r3, gTRKState@ha
    addi r3, r3, gTRKState@l
    lwz r3, 0x98(r3)
    blr
}

asm void TRKTargetSetStopped(void)
{
    nofralloc
    lis r4, gTRKState@ha
    addi r4, r4, gTRKState@l
    stw r3, 0x98(r4)
    blr
}

asm void fn_80679B68(void)
{
    nofralloc
    lis r4, gTRKState@ha
    li r0, 0x1
    addi r4, r4, gTRKState@l
    li r3, 0x0
    stw r0, 0x98(r4)
    blr
}

asm void fn_80679B80(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    lis r29, lbl_807651C8@ha
    lwzu r30, lbl_807651C8@l(r29)
    stw r30, 0x8(r1)
    lwz r31, 0x4(r29)
    lwz r12, 0x8(r29)
    lwz r11, 0xc(r29)
    lwz r10, 0x10(r29)
    lwz r9, 0x14(r29)
    lwz r8, 0x18(r29)
    lwz r7, 0x1c(r29)
    lwz r6, 0x20(r29)
    lwz r0, 0x24(r29)
    stw r31, 0xc(r1)
    stw r12, 0x10(r1)
    stw r11, 0x14(r1)
    stw r10, 0x18(r1)
    stw r9, 0x1c(r1)
    stw r8, 0x20(r1)
    stw r7, 0x24(r1)
    stw r6, 0x28(r1)
    stw r0, 0x2c(r1)
    beq lbl_fn_80679B80_00004D00
    rlwinm r0, r4, 6, 14, 20
    clrlslwi r4, r4, 27, 16
    oris r6, r0, 0x7c80
    lis r0, 0x9083
    ori r4, r4, 0x2a6
    stw r0, 0xc(r1)
    or r0, r6, r4
    stw r0, 0x8(r1)
    b lbl_fn_80679B80_00004D20
lbl_fn_80679B80_00004D00:
    clrlslwi r0, r4, 27, 16
    rlwinm r6, r4, 6, 14, 20
    oris r4, r6, 0x7c80
    ori r0, r0, 0x3a6
    lis r6, 0x8083
    or r0, r4, r0
    stw r6, 0x8(r1)
    stw r0, 0xc(r1)
lbl_fn_80679B80_00004D20:
    addi r4, r1, 0x8
    bl fn_80679F14
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80679C5C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r6, lbl_807651F0@ha
    cmpwi r5, 0x0
    stw r0, 0x44(r1)
    slwi r0, r4, 21
    oris r4, r0, 0xe003
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    lwzu r29, lbl_807651F0@l(r6)
    stw r29, 0x8(r1)
    lwz r30, 0x4(r6)
    lwz r31, 0x8(r6)
    lwz r12, 0xc(r6)
    lwz r11, 0x10(r6)
    lwz r10, 0x14(r6)
    lwz r9, 0x18(r6)
    lwz r8, 0x1c(r6)
    lwz r7, 0x20(r6)
    lwz r6, 0x24(r6)
    stw r30, 0xc(r1)
    stw r31, 0x10(r1)
    stw r12, 0x14(r1)
    stw r11, 0x18(r1)
    stw r10, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r8, 0x24(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    beq lbl_fn_80679C5C_00004DC4
    oris r4, r0, 0xf003
lbl_fn_80679C5C_00004DC4:
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_80679F14
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80679D04(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x20(r1), 0, 0
    mffs f31
    stfd f31, 0x0(r3)
    psq_l f31, 0x20(r1), 0, 0
    lfd f31, 0x10(r1)
    addi r1, r1, 0x40
    blr
}

asm void fn_80679D28(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x20(r1), 0, 0
    lfd f31, 0x0(r3)
    mtfsf 255, f31
    psq_l f31, 0x20(r1), 0, 0
    lfd f31, 0x10(r1)
    addi r1, r1, 0x40
    blr
}

asm void fn_80679D4C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    cmplwi r4, 0x20
    stw r0, 0x74(r1)
    stmw r26, 0x58(r1)
    lis r26, lbl_80765218@ha
    mr r29, r3
    mr r30, r5
    li r31, 0x0
    lwzu r27, lbl_80765218@l(r26)
    stw r27, 0x30(r1)
    lwz r28, 0x4(r26)
    lwz r12, 0x8(r26)
    lwz r11, 0xc(r26)
    lwz r10, 0x10(r26)
    lwz r9, 0x14(r26)
    lwz r8, 0x18(r26)
    lwz r7, 0x1c(r26)
    lwz r6, 0x20(r26)
    lwz r0, 0x24(r26)
    stw r28, 0x34(r1)
    stw r12, 0x38(r1)
    stw r11, 0x3c(r1)
    stw r10, 0x40(r1)
    stw r9, 0x44(r1)
    stw r8, 0x48(r1)
    stw r7, 0x4c(r1)
    stw r6, 0x50(r1)
    stw r0, 0x54(r1)
    bge lbl_fn_80679D4C_00004EDC
    cmpwi r5, 0x0
    slwi r0, r4, 21
    oris r3, r0, 0xc803
    beq lbl_fn_80679D4C_00004EC0
    oris r3, r0, 0xd803
lbl_fn_80679D4C_00004EC0:
    stw r3, 0x30(r1)
    mr r3, r29
    mr r5, r30
    addi r4, r1, 0x30
    bl fn_80679F14
    mr r31, r3
    b lbl_fn_80679D4C_00004FE4
lbl_fn_80679D4C_00004EDC:
    bne lbl_fn_80679D4C_00004F10
    cmpwi r5, 0x0
    beq lbl_fn_80679D4C_00004EF0
    bl fn_80679D04
    b lbl_fn_80679D4C_00004EF4
lbl_fn_80679D4C_00004EF0:
    bl fn_80679D28
lbl_fn_80679D4C_00004EF4:
    lwz r4, 0x4(r29)
    li r0, 0x0
    li r3, -0x1
    stw r0, 0x0(r29)
    and r0, r4, r3
    stw r0, 0x4(r29)
    b lbl_fn_80679D4C_00004FE4
lbl_fn_80679D4C_00004F10:
    cmplwi r4, 0x21
    bne lbl_fn_80679D4C_00004FE4
    cmpwi r5, 0x0
    bne lbl_fn_80679D4C_00004F28
    lwz r0, 0x4(r3)
    stw r0, 0x0(r3)
lbl_fn_80679D4C_00004F28:
    lis r12, lbl_807651C8@ha
    lwzu r11, lbl_807651C8@l(r12)
    cmpwi r5, 0x0
    stw r11, 0x8(r1)
    lwz r10, 0x4(r12)
    lwz r9, 0x8(r12)
    lwz r8, 0xc(r12)
    lwz r7, 0x10(r12)
    lwz r6, 0x14(r12)
    lwz r5, 0x18(r12)
    lwz r4, 0x1c(r12)
    lwz r3, 0x20(r12)
    lwz r0, 0x24(r12)
    stw r10, 0xc(r1)
    stw r9, 0x10(r1)
    stw r8, 0x14(r1)
    stw r7, 0x18(r1)
    stw r6, 0x1c(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    beq lbl_fn_80679D4C_00004F9C
    lis r3, 0x7c9f
    lis r0, 0x9083
    subi r3, r3, 0x55a
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    b lbl_fn_80679D4C_00004FB0
lbl_fn_80679D4C_00004F9C:
    lis r3, 0x7c9f
    lis r4, 0x8083
    subi r0, r3, 0x45a
    stw r4, 0x8(r1)
    stw r0, 0xc(r1)
lbl_fn_80679D4C_00004FB0:
    mr r3, r29
    mr r5, r30
    addi r4, r1, 0x8
    bl fn_80679F14
    cmpwi r30, 0x0
    mr r31, r3
    beq lbl_fn_80679D4C_00004FE4
    lwz r4, 0x0(r29)
    li r3, -0x1
    li r0, 0x0
    and r3, r4, r3
    stw r3, 0x4(r29)
    stw r0, 0x0(r29)
lbl_fn_80679D4C_00004FE4:
    mr r3, r31
    lmw r26, 0x58(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80679F14(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, 0x4e80
    stw r0, 0x14(r1)
    addi r0, r5, 0x20
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r31
    stw r0, 0x24(r4)
    li r4, 0x28
    bl fn_80675408
    lis r4, lbl_80831F80@ha
    mr r12, r31
    mr r3, r30
    addi r4, r4, lbl_80831F80@l
    mtctr r12
    bctrl
    lwz r31, 0xc(r1)
    li r3, 0x0
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void TRKTargetSetInputPendingPtr(void)
{
    nofralloc
    lis r4, gTRKState@ha
    addi r4, r4, gTRKState@l
    stw r3, 0xa0(r4)
    blr
}

asm void fn_80679F8C(void)
{
    nofralloc
    oris r3, r3, 0x8000
    blr
}

asm void fn_80679F94(void)
{
    nofralloc
    li r0, 0x1
    stw r0, 0x0(r3)
    li r0, 0x0
    lis r5, 0x8000
    stw r0, 0x0(r4)
    lwz r7, 0xdc(r5)
    addis r0, r7, 0x1
    cmplwi r0, 0xffff
    beqlr
    cmpwi r7, 0x0
    beqlr
    addis r0, r7, 0x8000
    cmplwi r0, 0x0
    bne lbl_fn_80679F94_000050B8
    blr
lbl_fn_80679F94_000050B8:
    li r6, 0x0
    b lbl_fn_80679F94_000050FC
lbl_fn_80679F94_000050C0:
    lwz r0, 0xe4(r5)
    cmplw r7, r0
    bne lbl_fn_80679F94_000050D0
    stw r6, 0x0(r4)
lbl_fn_80679F94_000050D0:
    lwz r0, 0x2fc(r7)
    addi r6, r6, 0x1
    oris r7, r0, 0x8000
    addis r0, r7, 0x1
    cmplwi r0, 0xffff
    beq lbl_fn_80679F94_00005104
    cmpwi r7, 0x0
    beq lbl_fn_80679F94_00005104
    addis r0, r7, 0x8000
    cmplwi r0, 0x0
    beq lbl_fn_80679F94_00005104
lbl_fn_80679F94_000050FC:
    cmpwi r7, 0x0
    bne lbl_fn_80679F94_000050C0
lbl_fn_80679F94_00005104:
    stw r6, 0x0(r3)
    blr
}

asm void fn_8067A024(void)
{
    nofralloc
    stb r3, lbl_80880338
    blr
}

asm void fn_8067A02C(void)
{
    nofralloc
    lbz r3, lbl_80880338
    blr
}

asm void fn_8067A034(void)
{
    nofralloc
    lwz r0, 0xc(r3)
    clrrwi r0, r0, 3
    add r6, r3, r0
    lwz r6, -0x4(r6)
    cmpwi r6, 0x0
    bne lbl_fn_8067A034_00005144
    li r0, 0x0
    stw r0, 0x8(r3)
    li r3, 0x0
    blr
lbl_fn_8067A034_00005144:
    lwz r0, 0x0(r6)
    mr r7, r6
    clrrwi r0, r0, 3
    mr r8, r0
    b lbl_fn_8067A034_00005194
lbl_fn_8067A034_00005158:
    lwz r7, 0xc(r7)
    lwz r0, 0x0(r7)
    clrrwi r0, r0, 3
    cmplw r8, r0
    bge lbl_fn_8067A034_00005170
    mr r8, r0
lbl_fn_8067A034_00005170:
    cmplw r7, r6
    bne lbl_fn_8067A034_00005194
    cmpwi r5, 0x0
    stw r8, 0x8(r3)
    beq lbl_fn_8067A034_0000518C
    subi r0, r8, 0x8
    stw r0, 0x0(r5)
lbl_fn_8067A034_0000518C:
    li r3, 0x0
    blr
lbl_fn_8067A034_00005194:
    cmplw r0, r4
    blt lbl_fn_8067A034_00005158
    subf r0, r4, r0
    cmplwi r0, 0x50
    blt lbl_fn_8067A034_0000527C
    lwz r0, 0x4(r7)
    add r6, r7, r4
    lwz r8, 0x0(r7)
    clrrwi r0, r0, 1
    ori r11, r0, 0x1
    stw r11, 0x4(r7)
    rlwinm. r0, r8, 0, 29, 29
    clrrwi r10, r8, 3
    rlwinm r0, r8, 0, 30, 30
    stw r4, 0x0(r7)
    cntlzw r0, r0
    srwi r9, r0, 5
    beq lbl_fn_8067A034_000051E8
    lwz r0, 0x0(r7)
    ori r0, r0, 0x4
    stw r0, 0x0(r7)
lbl_fn_8067A034_000051E8:
    cntlzw r0, r9
    srwi. r8, r0, 5
    beq lbl_fn_8067A034_00005210
    lwz r0, 0x0(r7)
    ori r0, r0, 0x2
    stw r0, 0x0(r7)
    lwz r0, 0x0(r6)
    ori r0, r0, 0x4
    stw r0, 0x0(r6)
    b lbl_fn_8067A034_00005214
lbl_fn_8067A034_00005210:
    stw r4, -0x4(r6)
lbl_fn_8067A034_00005214:
    stw r11, 0x4(r6)
    subf r10, r4, r10
    cmpwi r8, 0x0
    stw r10, 0x0(r6)
    beq lbl_fn_8067A034_00005234
    lwz r0, 0x0(r6)
    ori r0, r0, 0x4
    stw r0, 0x0(r6)
lbl_fn_8067A034_00005234:
    cmpwi r8, 0x0
    beq lbl_fn_8067A034_00005258
    lwz r0, 0x0(r6)
    ori r0, r0, 0x2
    stw r0, 0x0(r6)
    lwzx r0, r6, r10
    ori r0, r0, 0x4
    stwx r0, r6, r10
    b lbl_fn_8067A034_00005260
lbl_fn_8067A034_00005258:
    add r4, r6, r10
    stw r10, -0x4(r4)
lbl_fn_8067A034_00005260:
    cmpwi r9, 0x0
    beq lbl_fn_8067A034_0000527C
    lwz r4, 0xc(r7)
    stw r4, 0xc(r6)
    stw r6, 0x8(r4)
    stw r7, 0x8(r6)
    stw r6, 0xc(r7)
lbl_fn_8067A034_0000527C:
    lwz r0, 0xc(r3)
    lwz r6, 0xc(r7)
    clrrwi r0, r0, 3
    add r4, r3, r0
    stw r6, -0x4(r4)
    lwz r4, 0x0(r7)
    ori r0, r4, 0x2
    stw r0, 0x0(r7)
    clrrwi r4, r4, 3
    lwzx r0, r7, r4
    ori r0, r0, 0x4
    stwx r0, r7, r4
    lwz r0, 0xc(r3)
    clrrwi r0, r0, 3
    add r4, r3, r0
    lwz r0, -0x4(r4)
    cmplw r0, r7
    bne lbl_fn_8067A034_000052CC
    lwz r0, 0xc(r7)
    stw r0, -0x4(r4)
lbl_fn_8067A034_000052CC:
    lwz r0, -0x4(r4)
    cmplw r0, r7
    bne lbl_fn_8067A034_000052E8
    li r0, 0x0
    stw r0, -0x4(r4)
    stw r0, 0x8(r3)
    b lbl_fn_8067A034_00005300
lbl_fn_8067A034_000052E8:
    lwz r3, 0xc(r7)
    lwz r0, 0x8(r7)
    stw r0, 0x8(r3)
    lwz r3, 0x8(r7)
    lwz r0, 0xc(r7)
    stw r0, 0xc(r3)
lbl_fn_8067A034_00005300:
    cmpwi r5, 0x0
    beq lbl_fn_8067A034_00005318
    lwz r0, 0x0(r7)
    clrrwi r3, r0, 3
    subi r0, r3, 0x8
    stw r0, 0x0(r5)
lbl_fn_8067A034_00005318:
    mr r3, r7
    blr
}

asm void fn_8067A238(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x0(r4)
    clrrwi r6, r0, 3
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x0(r4)
    add r5, r4, r6
    lwzx r0, r4, r6
    rlwinm r0, r0, 0, 30, 28
    stwx r0, r4, r6
    stw r6, -0x4(r5)
    lwz r0, 0xc(r3)
    clrrwi r0, r0, 3
    add r31, r3, r0
    lwzu r3, -0x4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8067A238_00005430
    lwz r5, 0x8(r3)
    mr r3, r4
    stw r5, 0x8(r4)
    stw r4, 0xc(r5)
    lwz r0, 0x0(r31)
    stw r0, 0xc(r4)
    lwz r5, 0x0(r31)
    stw r4, 0x8(r5)
    stw r4, 0x0(r31)
    lwz r0, 0x0(r4)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_fn_8067A238_00005420
    lwz r6, -0x4(r4)
    rlwinm. r0, r6, 0, 30, 30
    beq lbl_fn_8067A238_000053B4
    b lbl_fn_8067A238_00005420
lbl_fn_8067A238_000053B4:
    subf r3, r6, r4
    lwz r0, 0x0(r3)
    clrlwi r5, r0, 29
    stw r5, 0x0(r3)
    lwz r0, 0x0(r4)
    clrrwi r0, r0, 3
    add r0, r6, r0
    rlwimi r5, r0, 0, 0, 28
    stw r5, 0x0(r3)
    rlwinm. r0, r5, 0, 30, 30
    bne lbl_fn_8067A238_000053F4
    lwz r0, 0x0(r4)
    clrrwi r0, r0, 3
    add r0, r6, r0
    add r5, r3, r0
    stw r0, -0x4(r5)
lbl_fn_8067A238_000053F4:
    lwz r5, 0x0(r31)
    cmplw r5, r4
    bne lbl_fn_8067A238_00005408
    lwz r0, 0xc(r5)
    stw r0, 0x0(r31)
lbl_fn_8067A238_00005408:
    lwz r5, 0xc(r4)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r5)
    lwz r5, 0xc(r4)
    lwz r4, 0x8(r5)
    stw r5, 0xc(r4)
lbl_fn_8067A238_00005420:
    stw r3, 0x0(r31)
    mr r4, r31
    bl fn_8067A388
    b lbl_fn_8067A238_0000543C
lbl_fn_8067A238_00005430:
    stw r4, 0x0(r31)
    stw r4, 0x8(r4)
    stw r4, 0xc(r4)
lbl_fn_8067A238_0000543C:
    lwz r3, 0x0(r31)
    lwz r0, 0x8(r30)
    lwz r3, 0x0(r3)
    clrrwi r3, r3, 3
    cmplw r0, r3
    bge lbl_fn_8067A238_00005458
    stw r3, 0x8(r30)
lbl_fn_8067A238_00005458:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8067A388(void)
{
    nofralloc
    lwz r6, 0x0(r3)
    clrrwi r7, r6, 3
    lwzx r5, r3, r7
    add r8, r3, r7
    rlwinm. r0, r5, 0, 30, 30
    bnelr
    clrrwi r5, r5, 3
    clrlwi r0, r6, 29
    add r6, r7, r5
    rlwimi r0, r6, 0, 0, 28
    stw r0, 0x0(r3)
    rlwinm. r0, r0, 0, 30, 30
    bne lbl_fn_8067A388_000054AC
    add r5, r3, r6
    stw r6, -0x4(r5)
lbl_fn_8067A388_000054AC:
    lwz r0, 0x0(r3)
    rlwinm. r0, r0, 0, 30, 30
    bne lbl_fn_8067A388_000054C8
    lwzx r0, r3, r6
    rlwinm r0, r0, 0, 30, 28
    stwx r0, r3, r6
    b lbl_fn_8067A388_000054D4
lbl_fn_8067A388_000054C8:
    lwzx r0, r3, r6
    ori r0, r0, 0x4
    stwx r0, r3, r6
lbl_fn_8067A388_000054D4:
    lwz r3, 0x0(r4)
    cmplw r3, r8
    bne lbl_fn_8067A388_000054E8
    lwz r0, 0xc(r3)
    stw r0, 0x0(r4)
lbl_fn_8067A388_000054E8:
    lwz r0, 0x0(r4)
    cmplw r0, r8
    bne lbl_fn_8067A388_000054FC
    li r0, 0x0
    stw r0, 0x0(r4)
lbl_fn_8067A388_000054FC:
    lwz r3, 0xc(r8)
    lwz r0, 0x8(r8)
    stw r0, 0x8(r3)
    lwz r3, 0x8(r8)
    lwz r0, 0xc(r8)
    stw r0, 0xc(r3)
    blr
}

asm void fn_8067A430(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r28, r3
    mr r30, r5
    beq lbl_fn_8067A430_00005540
    li r0, 0x0
    stw r0, 0x0(r5)
lbl_fn_8067A430_00005540:
    addi r0, r4, 0xf
    clrrwi r29, r0, 3
    cmplwi r29, 0x50
    bge lbl_fn_8067A430_00005554
    li r29, 0x50
lbl_fn_8067A430_00005554:
    lwz r31, 0x0(r3)
    cmpwi r31, 0x0
    beq lbl_fn_8067A430_00005564
    b lbl_fn_8067A430_0000561C
lbl_fn_8067A430_00005564:
    addi r3, r29, 0x1f
    lis r0, 0x1
    clrrwi r27, r3, 3
    cmplw r27, r0
    bge lbl_fn_8067A430_0000557C
    lis r27, 0x1
lbl_fn_8067A430_0000557C:
    mr r3, r27
    bl fn_80082490
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8067A430_00005598
    li r31, 0x0
    b lbl_fn_8067A430_0000561C
lbl_fn_8067A430_00005598:
    ori r0, r27, 0x3
    stw r0, 0xc(r3)
    add r5, r3, r27
    ori r6, r3, 0x1
    stw r0, -0x8(r5)
    addi r4, r3, 0x10
    subi r0, r27, 0x18
    stw r6, 0x14(r3)
    add r5, r27, r4
    li r6, 0x0
    stw r0, 0x10(r3)
    stw r0, -0x1c(r5)
    stw r0, 0x8(r3)
    lwz r0, 0xc(r3)
    clrrwi r0, r0, 3
    add r5, r3, r0
    stw r6, -0x4(r5)
    bl fn_8067A238
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8067A430_00005610
    lwz r3, 0x0(r3)
    stw r3, 0x0(r31)
    stw r31, 0x4(r3)
    lwz r0, 0x0(r28)
    stw r0, 0x4(r31)
    lwz r3, 0x0(r28)
    stw r31, 0x0(r3)
    stw r31, 0x0(r28)
    b lbl_fn_8067A430_0000561C
lbl_fn_8067A430_00005610:
    stw r31, 0x0(r28)
    stw r31, 0x0(r31)
    stw r31, 0x4(r31)
lbl_fn_8067A430_0000561C:
    cmpwi r31, 0x0
    bne lbl_fn_8067A430_0000562C
    li r3, 0x0
    b lbl_fn_8067A430_00005744
lbl_fn_8067A430_0000562C:
    lwz r0, 0x8(r31)
    cmplw r29, r0
    bgt lbl_fn_8067A430_00005658
    mr r3, r31
    mr r4, r29
    mr r5, r30
    bl fn_8067A034
    cmpwi r3, 0x0
    beq lbl_fn_8067A430_00005658
    stw r31, 0x0(r28)
    b lbl_fn_8067A430_00005740
lbl_fn_8067A430_00005658:
    lwz r31, 0x4(r31)
    lwz r0, 0x0(r28)
    cmplw r31, r0
    bne lbl_fn_8067A430_0000562C
    addi r3, r29, 0x1f
    lis r0, 0x1
    clrrwi r27, r3, 3
    cmplw r27, r0
    bge lbl_fn_8067A430_00005680
    lis r27, 0x1
lbl_fn_8067A430_00005680:
    mr r3, r27
    bl fn_80082490
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8067A430_0000569C
    li r31, 0x0
    b lbl_fn_8067A430_00005720
lbl_fn_8067A430_0000569C:
    ori r0, r27, 0x3
    stw r0, 0xc(r3)
    add r5, r3, r27
    ori r6, r3, 0x1
    stw r0, -0x8(r5)
    addi r4, r3, 0x10
    subi r0, r27, 0x18
    stw r6, 0x14(r3)
    add r5, r27, r4
    li r6, 0x0
    stw r0, 0x10(r3)
    stw r0, -0x1c(r5)
    stw r0, 0x8(r3)
    lwz r0, 0xc(r3)
    clrrwi r0, r0, 3
    add r5, r3, r0
    stw r6, -0x4(r5)
    bl fn_8067A238
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8067A430_00005714
    lwz r3, 0x0(r3)
    stw r3, 0x0(r31)
    stw r31, 0x4(r3)
    lwz r0, 0x0(r28)
    stw r0, 0x4(r31)
    lwz r3, 0x0(r28)
    stw r31, 0x0(r3)
    stw r31, 0x0(r28)
    b lbl_fn_8067A430_00005720
lbl_fn_8067A430_00005714:
    stw r31, 0x0(r28)
    stw r31, 0x0(r31)
    stw r31, 0x4(r31)
lbl_fn_8067A430_00005720:
    cmpwi r31, 0x0
    bne lbl_fn_8067A430_00005730
    li r3, 0x0
    b lbl_fn_8067A430_00005744
lbl_fn_8067A430_00005730:
    mr r3, r31
    mr r4, r29
    mr r5, r30
    bl fn_8067A034
lbl_fn_8067A430_00005740:
    addi r3, r3, 0x8
lbl_fn_8067A430_00005744:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8067A670(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r0, r4, 0xf
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    clrrwi r29, r0, 3
    cmplwi r29, 0x50
    stw r28, 0x10(r1)
    mr r28, r3
    bge lbl_fn_8067A670_00005790
    li r29, 0x50
lbl_fn_8067A670_00005790:
    li r0, 0x0
    stw r0, 0x0(r5)
    lwz r31, 0x0(r3)
    cmpwi r31, 0x0
    bne lbl_fn_8067A670_000057AC
    li r3, 0x0
    b lbl_fn_8067A670_00005814
lbl_fn_8067A670_000057AC:
    lwz r0, 0x8(r31)
    cmplw r29, r0
    bgt lbl_fn_8067A670_000057D8
    mr r3, r31
    mr r4, r29
    li r5, 0x0
    bl fn_8067A034
    cmpwi r3, 0x0
    beq lbl_fn_8067A670_000057D8
    stw r31, 0x0(r28)
    b lbl_fn_8067A670_00005810
lbl_fn_8067A670_000057D8:
    lwz r3, 0x8(r31)
    cmplwi r3, 0x8
    ble lbl_fn_8067A670_000057F8
    lwz r0, 0x0(r30)
    subi r3, r3, 0x8
    cmplw r0, r3
    bge lbl_fn_8067A670_000057F8
    stw r3, 0x0(r30)
lbl_fn_8067A670_000057F8:
    lwz r31, 0x4(r31)
    lwz r0, 0x0(r28)
    cmplw r31, r0
    bne lbl_fn_8067A670_000057AC
    li r3, 0x0
    b lbl_fn_8067A670_00005814
lbl_fn_8067A670_00005810:
    addi r3, r3, 0x8
lbl_fn_8067A670_00005814:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8067A74C(void)
{
    nofralloc
    lis r9, lbl_80765240@ha
    slwi r0, r6, 2
    addi r9, r9, lbl_80765240@l
    stw r4, 0x0(r3)
    lwzx r6, r9, r0
    mr r10, r7
    stw r5, 0x4(r3)
    li r11, 0x0
    addi r9, r6, 0x4
    divwu r8, r8, r9
    stw r3, 0x4(r4)
    stw r3, 0x0(r5)
    stw r6, 0x8(r3)
    subic. r0, r8, 0x1
    beq lbl_fn_8067A74C_00005940
    cmplwi r0, 0x8
    subi r4, r8, 0x9
    ble lbl_fn_8067A74C_00005918
    addi r0, r4, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmplwi r4, 0x0
    ble lbl_fn_8067A74C_00005918
lbl_fn_8067A74C_00005890:
    stw r3, 0x0(r10)
    add r0, r10, r9
    mr r4, r0
    addi r11, r11, 0x8
    stw r0, 0x4(r10)
    add r0, r0, r9
    mr r5, r0
    stw r3, 0x0(r4)
    stw r0, 0x4(r4)
    add r0, r0, r9
    mr r4, r0
    stw r3, 0x0(r5)
    stw r0, 0x4(r5)
    add r0, r0, r9
    mr r5, r0
    stw r3, 0x0(r4)
    stw r0, 0x4(r4)
    add r0, r0, r9
    mr r4, r0
    stw r3, 0x0(r5)
    stw r0, 0x4(r5)
    add r0, r0, r9
    mr r5, r0
    stw r3, 0x0(r4)
    stw r0, 0x4(r4)
    add r0, r0, r9
    mr r4, r0
    stw r3, 0x0(r5)
    stw r0, 0x4(r5)
    add r0, r0, r9
    mr r10, r0
    stw r3, 0x0(r4)
    stw r0, 0x4(r4)
    bdnz lbl_fn_8067A74C_00005890
lbl_fn_8067A74C_00005918:
    subi r4, r8, 0x1
    subf r0, r11, r4
    mtctr r0
    cmplw r11, r4
    bge lbl_fn_8067A74C_00005940
lbl_fn_8067A74C_0000592C:
    stw r3, 0x0(r10)
    add r0, r10, r9
    stw r0, 0x4(r10)
    mr r10, r0
    bdnz lbl_fn_8067A74C_0000592C
lbl_fn_8067A74C_00005940:
    stw r3, 0x0(r10)
    li r0, 0x0
    stw r0, 0x4(r10)
    stw r7, 0xc(r3)
    stw r0, 0x10(r3)
    blr
}

asm void fn_8067A870(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r6, lbl_80765240@ha
    stw r0, 0x44(r1)
    addi r6, r6, lbl_80765240@l
    stmw r23, 0x1c(r1)
    mr r27, r3
    mr r28, r5
    li r30, 0x0
    b lbl_fn_8067A870_00005988
lbl_fn_8067A870_00005980:
    addi r6, r6, 0x4
    addi r30, r30, 0x1
lbl_fn_8067A870_00005988:
    lwz r0, 0x0(r6)
    cmplw r4, r0
    bgt lbl_fn_8067A870_00005980
    slwi r0, r30, 3
    add r31, r3, r0
    lwz r3, 0x8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8067A870_000059B4
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8067A870_00005AE8
lbl_fn_8067A870_000059B4:
    lis r3, lbl_80765240@ha
    slwi r24, r30, 2
    addi r3, r3, lbl_80765240@l
    li r4, 0xfec
    lwzx r3, r3, r24
    addi r0, r3, 0x4
    divwu r0, r4, r0
    cmplwi r0, 0x100
    ble lbl_fn_8067A870_000059DC
    li r0, 0x100
lbl_fn_8067A870_000059DC:
    lis r25, lbl_80765240@ha
    mr r23, r0
    addi r25, r25, lbl_80765240@l
    lwzx r3, r25, r24
    addi r26, r3, 0x4
    b lbl_fn_8067A870_00005A30
lbl_fn_8067A870_000059F4:
    mullw r4, r0, r26
    mr r3, r27
    addi r5, r1, 0xc
    addi r4, r4, 0x14
    bl fn_8067A670
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8067A870_00005A38
    lwz r3, 0xc(r1)
    cmplwi r3, 0x14
    ble lbl_fn_8067A870_00005A2C
    subi r0, r3, 0x14
    divwu r0, r0, r26
    b lbl_fn_8067A870_00005A30
lbl_fn_8067A870_00005A2C:
    li r0, 0x0
lbl_fn_8067A870_00005A30:
    cmplwi r0, 0xa
    bge lbl_fn_8067A870_000059F4
lbl_fn_8067A870_00005A38:
    cmpwi r29, 0x0
    bne lbl_fn_8067A870_00005A94
    lwzx r3, r25, r24
    addi r25, r3, 0x4
    addi r26, r3, 0x18
lbl_fn_8067A870_00005A4C:
    mullw r4, r23, r25
    mr r3, r27
    addi r5, r1, 0x8
    addi r4, r4, 0x14
    bl fn_8067A430
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8067A870_00005A94
    lwz r0, 0x8(r1)
    divwu r23, r0, r26
    cmplwi r23, 0xa
    bge lbl_fn_8067A870_00005A4C
    cmpwi r28, 0x0
    beq lbl_fn_8067A870_00005A8C
    li r0, 0x0
    stw r0, 0x0(r28)
lbl_fn_8067A870_00005A8C:
    li r3, 0x0
    b lbl_fn_8067A870_00005B4C
lbl_fn_8067A870_00005A94:
    lwz r3, -0x4(r29)
    clrlwi. r0, r3, 31
    bne lbl_fn_8067A870_00005AA8
    lwz r8, 0x8(r3)
    b lbl_fn_8067A870_00005AB4
lbl_fn_8067A870_00005AA8:
    lwz r0, -0x8(r29)
    clrrwi r3, r0, 3
    subi r8, r3, 0x8
lbl_fn_8067A870_00005AB4:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8067A870_00005AC8
    stw r29, 0x8(r31)
    stw r29, 0x4(r31)
lbl_fn_8067A870_00005AC8:
    lwz r4, 0x4(r31)
    mr r3, r29
    lwz r5, 0x8(r31)
    mr r6, r30
    addi r7, r29, 0x14
    subi r8, r8, 0x14
    bl fn_8067A74C
    stw r29, 0x8(r31)
lbl_fn_8067A870_00005AE8:
    lwz r3, 0x8(r31)
    lwz r5, 0xc(r3)
    lwz r0, 0x4(r5)
    stw r0, 0xc(r3)
    lwz r4, 0x8(r31)
    lwz r3, 0x10(r4)
    addi r0, r3, 0x1
    stw r0, 0x10(r4)
    lwz r3, 0x8(r31)
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8067A870_00005B2C
    lwz r0, 0x4(r3)
    stw r0, 0x8(r31)
    lwz r3, 0x4(r31)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r31)
lbl_fn_8067A870_00005B2C:
    cmpwi r28, 0x0
    beq lbl_fn_8067A870_00005B48
    lis r3, lbl_80765240@ha
    slwi r0, r30, 2
    addi r3, r3, lbl_80765240@l
    lwzx r0, r3, r0
    stw r0, 0x0(r28)
lbl_fn_8067A870_00005B48:
    addi r3, r5, 0x4
lbl_fn_8067A870_00005B4C:
    lmw r23, 0x1c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8067AA78(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_80765240@ha
    li r7, 0x0
    stw r0, 0x14(r1)
    addi r6, r6, lbl_80765240@l
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    b lbl_fn_8067AA78_00005B90
lbl_fn_8067AA78_00005B88:
    addi r6, r6, 0x4
    addi r7, r7, 0x1
lbl_fn_8067AA78_00005B90:
    lwz r0, 0x0(r6)
    cmplw r5, r0
    bgt lbl_fn_8067AA78_00005B88
    subi r6, r4, 0x4
    lwz r4, -0x4(r4)
    slwi r0, r7, 3
    add r3, r3, r0
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8067AA78_00005C20
    lwz r5, 0x8(r3)
    cmplw r5, r4
    beq lbl_fn_8067AA78_00005C20
    lwz r0, 0x4(r3)
    cmplw r0, r4
    bne lbl_fn_8067AA78_00005BE8
    lwz r0, 0x0(r5)
    stw r0, 0x8(r3)
    lwz r5, 0x4(r3)
    lwz r0, 0x0(r5)
    stw r0, 0x4(r3)
    b lbl_fn_8067AA78_00005C20
lbl_fn_8067AA78_00005BE8:
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    lwz r5, 0x4(r4)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r5)
    lwz r5, 0x8(r3)
    stw r5, 0x4(r4)
    lwz r5, 0x0(r5)
    stw r5, 0x0(r4)
    stw r4, 0x4(r5)
    lwz r5, 0x4(r4)
    stw r4, 0x0(r5)
    stw r4, 0x8(r3)
lbl_fn_8067AA78_00005C20:
    lwz r0, 0xc(r4)
    stw r0, 0x4(r6)
    stw r6, 0xc(r4)
    lwz r0, 0x10(r4)
    subic. r0, r0, 0x1
    stw r0, 0x10(r4)
    bne lbl_fn_8067AA78_00005D34
    lwz r0, 0x8(r3)
    cmplw r0, r4
    bne lbl_fn_8067AA78_00005C50
    lwz r0, 0x4(r4)
    stw r0, 0x8(r3)
lbl_fn_8067AA78_00005C50:
    lwz r0, 0x4(r3)
    cmplw r0, r4
    bne lbl_fn_8067AA78_00005C64
    lwz r0, 0x0(r4)
    stw r0, 0x4(r3)
lbl_fn_8067AA78_00005C64:
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    lwz r5, 0x4(r4)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r5)
    lwz r0, 0x8(r3)
    cmplw r0, r4
    bne lbl_fn_8067AA78_00005C90
    li r0, 0x0
    stw r0, 0x8(r3)
lbl_fn_8067AA78_00005C90:
    lwz r0, 0x4(r3)
    cmplw r0, r4
    bne lbl_fn_8067AA78_00005CA4
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_8067AA78_00005CA4:
    subi r4, r4, 0x8
    lwz r0, 0x4(r4)
    clrrwi r30, r0, 1
    mr r3, r30
    bl fn_8067A238
    lwz r3, 0x10(r30)
    li r5, 0x0
    rlwinm. r0, r3, 0, 30, 30
    bne lbl_fn_8067AA78_00005CE4
    lwz r0, 0xc(r30)
    clrrwi r4, r3, 3
    clrrwi r3, r0, 3
    subi r0, r3, 0x18
    cmplw r4, r0
    bne lbl_fn_8067AA78_00005CE4
    li r5, 0x1
lbl_fn_8067AA78_00005CE4:
    cmpwi r5, 0x0
    beq lbl_fn_8067AA78_00005D34
    lwz r4, 0x4(r30)
    cmplw r4, r30
    bne lbl_fn_8067AA78_00005CFC
    li r4, 0x0
lbl_fn_8067AA78_00005CFC:
    lwz r0, 0x0(r31)
    cmplw r0, r30
    bne lbl_fn_8067AA78_00005D0C
    stw r4, 0x0(r31)
lbl_fn_8067AA78_00005D0C:
    cmpwi r4, 0x0
    beq lbl_fn_8067AA78_00005D20
    lwz r3, 0x0(r30)
    stw r3, 0x0(r4)
    stw r4, 0x4(r3)
lbl_fn_8067AA78_00005D20:
    li r0, 0x0
    stw r0, 0x4(r30)
    mr r3, r30
    stw r0, 0x0(r30)
    bl fn_8008263C
lbl_fn_8067AA78_00005D34:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8067AC64(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r5
    mr r27, r6
    lwz r3, -0x4(r4)
    clrlwi. r7, r3, 31
    bne lbl_fn_8067AC64_00005D78
    lwz r31, 0x8(r3)
    b lbl_fn_8067AC64_00005D84
lbl_fn_8067AC64_00005D78:
    lwz r0, -0x8(r4)
    clrrwi r3, r0, 3
    subi r31, r3, 0x8
lbl_fn_8067AC64_00005D84:
    cmplw r5, r31
    bne lbl_fn_8067AC64_00005DA0
    cmpwi r6, 0x0
    beq lbl_fn_8067AC64_00005D98
    stw r31, 0x0(r6)
lbl_fn_8067AC64_00005D98:
    li r3, 0x1
    b lbl_fn_8067AC64_00005F98
lbl_fn_8067AC64_00005DA0:
    cmpwi r7, 0x0
    beq lbl_fn_8067AC64_00005F88
    li r0, -0x81
    cmplw r5, r0
    ble lbl_fn_8067AC64_00005DB8
    li r26, -0x81
lbl_fn_8067AC64_00005DB8:
    addi r0, r26, 0xf
    clrrwi r30, r0, 3
    cmplwi r30, 0x50
    bge lbl_fn_8067AC64_00005DCC
    li r30, 0x50
lbl_fn_8067AC64_00005DCC:
    subi r29, r4, 0x8
    addi r5, r31, 0x8
    lwzx r3, r29, r5
    add r28, r29, r5
    rlwinm. r0, r3, 0, 30, 30
    bne lbl_fn_8067AC64_00005E1C
    clrrwi r0, r3, 3
    add r0, r5, r0
    cmplw r30, r0
    bgt lbl_fn_8067AC64_00005E1C
    lwz r0, 0x4(r29)
    mr r3, r29
    clrrwi r4, r0, 1
    lwz r0, 0xc(r4)
    clrrwi r0, r0, 3
    add r4, r4, r0
    subi r4, r4, 0x4
    bl fn_8067A388
    lwz r0, 0x0(r29)
    clrrwi r5, r0, 3
lbl_fn_8067AC64_00005E1C:
    addi r0, r30, 0x50
    cmplw r5, r0
    blt lbl_fn_8067AC64_00005F0C
    lwz r6, 0x0(r29)
    add r4, r29, r30
    lwz r3, 0x4(r29)
    rlwinm. r0, r6, 0, 29, 29
    rlwinm r5, r6, 0, 30, 30
    clrrwi r0, r3, 1
    stw r30, 0x0(r29)
    cntlzw r3, r5
    clrrwi r6, r6, 3
    ori r7, r0, 0x1
    stw r7, 0x4(r29)
    srwi r5, r3, 5
    beq lbl_fn_8067AC64_00005E64
    ori r0, r30, 0x4
    stw r0, 0x0(r29)
lbl_fn_8067AC64_00005E64:
    cntlzw r0, r5
    srwi. r3, r0, 5
    beq lbl_fn_8067AC64_00005E8C
    lwz r0, 0x0(r29)
    ori r0, r0, 0x2
    stw r0, 0x0(r29)
    lwz r0, 0x0(r4)
    ori r0, r0, 0x4
    stw r0, 0x0(r4)
    b lbl_fn_8067AC64_00005E90
lbl_fn_8067AC64_00005E8C:
    stw r30, -0x4(r4)
lbl_fn_8067AC64_00005E90:
    stw r7, 0x4(r4)
    subf r6, r30, r6
    cmpwi r3, 0x0
    stw r6, 0x0(r4)
    beq lbl_fn_8067AC64_00005EB0
    lwz r0, 0x0(r4)
    ori r0, r0, 0x4
    stw r0, 0x0(r4)
lbl_fn_8067AC64_00005EB0:
    cmpwi r3, 0x0
    beq lbl_fn_8067AC64_00005ED4
    lwz r0, 0x0(r4)
    ori r0, r0, 0x2
    stw r0, 0x0(r4)
    lwzx r0, r4, r6
    ori r0, r0, 0x4
    stwx r0, r4, r6
    b lbl_fn_8067AC64_00005EDC
lbl_fn_8067AC64_00005ED4:
    add r3, r4, r6
    stw r6, -0x4(r3)
lbl_fn_8067AC64_00005EDC:
    cmpwi r5, 0x0
    beq lbl_fn_8067AC64_00005EF8
    lwz r3, 0xc(r29)
    stw r3, 0xc(r4)
    stw r4, 0x8(r3)
    stw r29, 0x8(r4)
    stw r4, 0xc(r29)
lbl_fn_8067AC64_00005EF8:
    lwz r0, 0x4(r29)
    clrrwi r3, r0, 1
    bl fn_8067A238
    lwz r0, 0x0(r29)
    clrrwi r5, r0, 3
lbl_fn_8067AC64_00005F0C:
    cmpwi r27, 0x0
    beq lbl_fn_8067AC64_00005F1C
    subi r0, r5, 0x8
    stw r0, 0x0(r27)
lbl_fn_8067AC64_00005F1C:
    cmplw r26, r31
    ble lbl_fn_8067AC64_00005F70
    cmpwi r27, 0x0
    beq lbl_fn_8067AC64_00005F54
    subi r0, r5, 0x8
    cmplw r26, r0
    ble lbl_fn_8067AC64_00005F54
    lwz r4, 0x0(r28)
    rlwinm. r0, r4, 0, 30, 30
    bne lbl_fn_8067AC64_00005F54
    lwz r3, 0x0(r27)
    clrrwi r0, r4, 3
    add r0, r3, r0
    stw r0, 0x0(r27)
lbl_fn_8067AC64_00005F54:
    subi r3, r5, 0x8
    subf r0, r26, r3
    orc r3, r3, r26
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_8067AC64_00005F98
lbl_fn_8067AC64_00005F70:
    subi r0, r5, 0x8
    xor r0, r31, r0
    cntlzw r0, r0
    slw r0, r31, r0
    srwi r3, r0, 31
    b lbl_fn_8067AC64_00005F98
lbl_fn_8067AC64_00005F88:
    cmpwi r6, 0x0
    beq lbl_fn_8067AC64_00005F94
    stw r31, 0x0(r6)
lbl_fn_8067AC64_00005F94:
    li r3, 0x0
lbl_fn_8067AC64_00005F98:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8067AEC4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8067AEC4_00006034
    lbz r0, lbl_80880340
    cmpwi r0, 0x0
    bne lbl_fn_8067AEC4_00005FF0
    lis r3, lbl_80832468@ha
    li r4, 0x0
    addi r3, r3, lbl_80832468@l
    li r5, 0x34
    bl memset
    li r0, 0x1
    stb r0, lbl_80880340
lbl_fn_8067AEC4_00005FF0:
    li r0, -0x31
    lis r3, lbl_80832468@ha
    cmplw r31, r0
    addi r3, r3, lbl_80832468@l
    ble lbl_fn_8067AEC4_0000600C
    li r3, 0x0
    b lbl_fn_8067AEC4_00006038
lbl_fn_8067AEC4_0000600C:
    cmplwi r31, 0x44
    bgt lbl_fn_8067AEC4_00006024
    mr r4, r31
    li r5, 0x0
    bl fn_8067A870
    b lbl_fn_8067AEC4_00006038
lbl_fn_8067AEC4_00006024:
    mr r4, r31
    li r5, 0x0
    bl fn_8067A430
    b lbl_fn_8067AEC4_00006038
lbl_fn_8067AEC4_00006034:
    li r3, 0x0
lbl_fn_8067AEC4_00006038:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8067AF64(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lbz r0, lbl_80880340
    cmpwi r0, 0x0
    bne lbl_fn_8067AF64_0000608C
    lis r3, lbl_80832468@ha
    li r4, 0x0
    addi r3, r3, lbl_80832468@l
    li r5, 0x34
    bl memset
    li r0, 0x1
    stb r0, lbl_80880340
lbl_fn_8067AF64_0000608C:
    cmpwi r31, 0x0
    lis r30, lbl_80832468@ha
    addi r30, r30, lbl_80832468@l
    beq lbl_fn_8067AF64_00006164
    lwz r3, -0x4(r31)
    clrlwi. r0, r3, 31
    bne lbl_fn_8067AF64_000060B0
    lwz r5, 0x8(r3)
    b lbl_fn_8067AF64_000060BC
lbl_fn_8067AF64_000060B0:
    lwz r0, -0x8(r31)
    clrrwi r3, r0, 3
    subi r5, r3, 0x8
lbl_fn_8067AF64_000060BC:
    cmplwi r5, 0x44
    bgt lbl_fn_8067AF64_000060D4
    mr r3, r30
    mr r4, r31
    bl fn_8067AA78
    b lbl_fn_8067AF64_00006164
lbl_fn_8067AF64_000060D4:
    lwz r0, -0x4(r31)
    subi r4, r31, 0x8
    clrrwi r31, r0, 1
    mr r3, r31
    bl fn_8067A238
    lwz r3, 0x10(r31)
    li r5, 0x0
    rlwinm. r0, r3, 0, 30, 30
    bne lbl_fn_8067AF64_00006114
    lwz r0, 0xc(r31)
    clrrwi r4, r3, 3
    clrrwi r3, r0, 3
    subi r0, r3, 0x18
    cmplw r4, r0
    bne lbl_fn_8067AF64_00006114
    li r5, 0x1
lbl_fn_8067AF64_00006114:
    cmpwi r5, 0x0
    beq lbl_fn_8067AF64_00006164
    lwz r4, 0x4(r31)
    cmplw r4, r31
    bne lbl_fn_8067AF64_0000612C
    li r4, 0x0
lbl_fn_8067AF64_0000612C:
    lwz r0, 0x0(r30)
    cmplw r0, r31
    bne lbl_fn_8067AF64_0000613C
    stw r4, 0x0(r30)
lbl_fn_8067AF64_0000613C:
    cmpwi r4, 0x0
    beq lbl_fn_8067AF64_00006150
    lwz r3, 0x0(r31)
    stw r3, 0x0(r4)
    stw r4, 0x4(r3)
lbl_fn_8067AF64_00006150:
    li r0, 0x0
    stw r0, 0x4(r31)
    mr r3, r31
    stw r0, 0x0(r31)
    bl fn_8008263C
lbl_fn_8067AF64_00006164:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8067B094(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    lbz r0, lbl_80880340
    cmpwi r0, 0x0
    bne lbl_fn_8067B094_000061C8
    lis r3, lbl_80832468@ha
    li r4, 0x0
    addi r3, r3, lbl_80832468@l
    li r5, 0x34
    bl memset
    li r0, 0x1
    stb r0, lbl_80880340
lbl_fn_8067B094_000061C8:
    cmpwi cr1, r29, 0x0
    lis r30, lbl_80832468@ha
    addi r30, r30, lbl_80832468@l
    bne cr1, lbl_fn_8067B094_0000621C
    li r0, -0x31
    cmplw r31, r0
    ble lbl_fn_8067B094_000061EC
    li r3, 0x0
    b lbl_fn_8067B094_00006474
lbl_fn_8067B094_000061EC:
    cmplwi r31, 0x44
    bgt lbl_fn_8067B094_00006208
    mr r3, r30
    mr r4, r31
    li r5, 0x0
    bl fn_8067A870
    b lbl_fn_8067B094_00006474
lbl_fn_8067B094_00006208:
    mr r3, r30
    mr r4, r31
    li r5, 0x0
    bl fn_8067A430
    b lbl_fn_8067B094_00006474
lbl_fn_8067B094_0000621C:
    cmpwi r31, 0x0
    bne lbl_fn_8067B094_000062F8
    beq cr1, lbl_fn_8067B094_000062F0
    lwz r3, -0x4(r29)
    clrlwi. r0, r3, 31
    bne lbl_fn_8067B094_0000623C
    lwz r5, 0x8(r3)
    b lbl_fn_8067B094_00006248
lbl_fn_8067B094_0000623C:
    lwz r0, -0x8(r29)
    clrrwi r3, r0, 3
    subi r5, r3, 0x8
lbl_fn_8067B094_00006248:
    cmplwi r5, 0x44
    bgt lbl_fn_8067B094_00006260
    mr r3, r30
    mr r4, r29
    bl fn_8067AA78
    b lbl_fn_8067B094_000062F0
lbl_fn_8067B094_00006260:
    lwz r0, -0x4(r29)
    subi r4, r29, 0x8
    clrrwi r29, r0, 1
    mr r3, r29
    bl fn_8067A238
    lwz r3, 0x10(r29)
    li r5, 0x0
    rlwinm. r0, r3, 0, 30, 30
    bne lbl_fn_8067B094_000062A0
    lwz r0, 0xc(r29)
    clrrwi r4, r3, 3
    clrrwi r3, r0, 3
    subi r0, r3, 0x18
    cmplw r4, r0
    bne lbl_fn_8067B094_000062A0
    li r5, 0x1
lbl_fn_8067B094_000062A0:
    cmpwi r5, 0x0
    beq lbl_fn_8067B094_000062F0
    lwz r4, 0x4(r29)
    cmplw r4, r29
    bne lbl_fn_8067B094_000062B8
    li r4, 0x0
lbl_fn_8067B094_000062B8:
    lwz r0, 0x0(r30)
    cmplw r0, r29
    bne lbl_fn_8067B094_000062C8
    stw r4, 0x0(r30)
lbl_fn_8067B094_000062C8:
    cmpwi r4, 0x0
    beq lbl_fn_8067B094_000062DC
    lwz r3, 0x0(r29)
    stw r3, 0x0(r4)
    stw r4, 0x4(r3)
lbl_fn_8067B094_000062DC:
    li r0, 0x0
    stw r0, 0x4(r29)
    mr r3, r29
    stw r0, 0x0(r29)
    bl fn_8008263C
lbl_fn_8067B094_000062F0:
    li r3, 0x0
    b lbl_fn_8067B094_00006474
lbl_fn_8067B094_000062F8:
    lwz r3, -0x4(r29)
    clrlwi. r0, r3, 31
    bne lbl_fn_8067B094_0000630C
    lwz r28, 0x8(r3)
    b lbl_fn_8067B094_00006318
lbl_fn_8067B094_0000630C:
    lwz r0, -0x8(r29)
    clrrwi r3, r0, 3
    subi r28, r3, 0x8
lbl_fn_8067B094_00006318:
    mr r3, r30
    mr r4, r29
    mr r5, r31
    li r6, 0x0
    bl fn_8067AC64
    cmpwi r3, 0x0
    bne lbl_fn_8067B094_0000633C
    cmplw r31, r28
    bgt lbl_fn_8067B094_00006344
lbl_fn_8067B094_0000633C:
    mr r3, r29
    b lbl_fn_8067B094_00006474
lbl_fn_8067B094_00006344:
    li r0, -0x31
    cmplw r31, r0
    ble lbl_fn_8067B094_00006358
    li r31, 0x0
    b lbl_fn_8067B094_00006388
lbl_fn_8067B094_00006358:
    cmplwi r31, 0x44
    bgt lbl_fn_8067B094_00006374
    mr r3, r30
    mr r4, r31
    li r5, 0x0
    bl fn_8067A870
    b lbl_fn_8067B094_00006384
lbl_fn_8067B094_00006374:
    mr r3, r30
    mr r4, r31
    li r5, 0x0
    bl fn_8067A430
lbl_fn_8067B094_00006384:
    mr r31, r3
lbl_fn_8067B094_00006388:
    cmpwi r31, 0x0
    beq lbl_fn_8067B094_00006470
    mr r3, r31
    mr r4, r29
    mr r5, r28
    bl memcpy
    cmpwi r29, 0x0
    beq lbl_fn_8067B094_00006470
    lwz r3, -0x4(r29)
    clrlwi. r0, r3, 31
    bne lbl_fn_8067B094_000063BC
    lwz r5, 0x8(r3)
    b lbl_fn_8067B094_000063C8
lbl_fn_8067B094_000063BC:
    lwz r0, -0x8(r29)
    clrrwi r3, r0, 3
    subi r5, r3, 0x8
lbl_fn_8067B094_000063C8:
    cmplwi r5, 0x44
    bgt lbl_fn_8067B094_000063E0
    mr r3, r30
    mr r4, r29
    bl fn_8067AA78
    b lbl_fn_8067B094_00006470
lbl_fn_8067B094_000063E0:
    lwz r0, -0x4(r29)
    subi r4, r29, 0x8
    clrrwi r29, r0, 1
    mr r3, r29
    bl fn_8067A238
    lwz r3, 0x10(r29)
    li r5, 0x0
    rlwinm. r0, r3, 0, 30, 30
    bne lbl_fn_8067B094_00006420
    lwz r0, 0xc(r29)
    clrrwi r4, r3, 3
    clrrwi r3, r0, 3
    subi r0, r3, 0x18
    cmplw r4, r0
    bne lbl_fn_8067B094_00006420
    li r5, 0x1
lbl_fn_8067B094_00006420:
    cmpwi r5, 0x0
    beq lbl_fn_8067B094_00006470
    lwz r4, 0x4(r29)
    cmplw r4, r29
    bne lbl_fn_8067B094_00006438
    li r4, 0x0
lbl_fn_8067B094_00006438:
    lwz r0, 0x0(r30)
    cmplw r0, r29
    bne lbl_fn_8067B094_00006448
    stw r4, 0x0(r30)
lbl_fn_8067B094_00006448:
    cmpwi r4, 0x0
    beq lbl_fn_8067B094_0000645C
    lwz r3, 0x0(r29)
    stw r3, 0x0(r4)
    stw r4, 0x4(r3)
lbl_fn_8067B094_0000645C:
    li r0, 0x0
    stw r0, 0x4(r29)
    mr r3, r29
    stw r0, 0x0(r29)
    bl fn_8008263C
lbl_fn_8067B094_00006470:
    mr r3, r31
lbl_fn_8067B094_00006474:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8067B3AC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    lbz r0, lbl_80880340
    cmpwi r0, 0x0
    bne lbl_fn_8067B3AC_000064D8
    lis r3, lbl_80832468@ha
    li r4, 0x0
    addi r3, r3, lbl_80832468@l
    li r5, 0x34
    bl memset
    li r0, 0x1
    stb r0, lbl_80880340
lbl_fn_8067B3AC_000064D8:
    mullw r30, r30, r31
    li r0, -0x31
    lis r3, lbl_80832468@ha
    addi r3, r3, lbl_80832468@l
    cmplw r30, r0
    ble lbl_fn_8067B3AC_000064F8
    li r31, 0x0
    b lbl_fn_8067B3AC_00006520
lbl_fn_8067B3AC_000064F8:
    cmplwi r30, 0x44
    bgt lbl_fn_8067B3AC_00006510
    mr r4, r30
    li r5, 0x0
    bl fn_8067A870
    b lbl_fn_8067B3AC_0000651C
lbl_fn_8067B3AC_00006510:
    mr r4, r30
    li r5, 0x0
    bl fn_8067A430
lbl_fn_8067B3AC_0000651C:
    mr r31, r3
lbl_fn_8067B3AC_00006520:
    cmpwi r31, 0x0
    beq lbl_fn_8067B3AC_00006538
    mr r3, r31
    mr r5, r30
    li r4, 0x0
    bl memset
lbl_fn_8067B3AC_00006538:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
