#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void ESP_DiGetTicketView(void);
extern void ESP_InitLib(void);
extern void EXIDeselect(void);
extern void EXIImm(void);
extern void EXILock(void);
extern void EXISelect(void);
extern void EXISync(void);
extern void EXIUnlock(void);
extern void LCDisable(void);
extern void OSAllocFromMEM1ArenaLo(void);
extern void OSCancelThread(void);
extern void OSDisableInterrupts(void);
extern void OSDisableScheduler(void);
extern void OSEnableScheduler(void);
extern void OSPanic(const char* file, int line, const char* msg, ...);
extern void OSPlayTimeIsLimited(void);
extern void OSSetArenaHi(void);
extern void OSSetArenaLo(void);
extern void SCCheckStatus(void);
extern void SCInit(void);
extern void __DVDGetCoverStatus(void);
extern void __DVDPrepareReset(void);
extern void __OSClearRTCFlags(void);
extern void __OSGetIOSRev(void);
extern void __OSGetPlayTime(void);
extern void __OSGetRTCFlags(void);
extern void __OSHotReset(void);
extern void __OSInitSTM(void);
extern void __OSLaunchMenu(void);
extern void __OSReadStateFlags(void);
extern void __OSRebootParams(void);
extern void __OSStopAudioSystem(void);
extern void __OSStopPlayRecord(void);
extern void __OSSyncSram(void);
extern void __OSUnRegisterStateEvent(void);
extern void __OSWriteExpiredFlagIfSet(void);
extern void __OSWriteStateFlags(void);
extern void __PADDisableRecalibration(void);
extern void __VISetRGBModeImm(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_805E7E00(void);
extern void fn_805EC060(void);
extern void fn_805F3430(void);
extern void fn_805F6BF0(void);
extern void fn_805F86B0(void);
extern void fn_80624970(void);

/* External data declarations */
extern u8 Scb_807CB600[];
extern u8 lbl_8079D7F8[];
extern u8 lbl_8079D804[];
extern u8 lbl_8079D864[];
extern u8 lbl_8079D894[];
extern u8 lbl_8079D9E4[];

/* Small data declarations */
extern u32 ShutdownFunctionQueue_8087FC50;
extern u32 __OSInNandBoot;
extern u32 __OSInReboot;
extern u32 lbl_8087FC48;
extern u32 lbl_8087FC4C;

/* Function declarations */
void OSRegisterShutdownFunction(void);
void fn_805F3550(void);
void __OSShutdownDevices(void);
void fn_805F3780(void);
void fn_805F38A0(void);
void __OSReturnToMenu(void);
void OSReturnToMenu(void);
void fn_805F3C50(void);
void fn_805F3C90(void);
void fn_805F3D40(void);
void OSGetResetCode(void);
void OSResetSystem(void);
void fn_805F3DF0(void);

asm void OSRegisterShutdownFunction(void)
{
    nofralloc
    lwz r5, ShutdownFunctionQueue_8087FC50
    b lbl_OSRegisterShutdownFunction_0000000C
lbl_OSRegisterShutdownFunction_00000008:
    lwz r5, 0x8(r5)
lbl_OSRegisterShutdownFunction_0000000C:
    cmpwi r5, 0x0
    beq lbl_OSRegisterShutdownFunction_00000024
    lwz r4, 0x4(r5)
    lwz r0, 0x4(r3)
    cmplw r4, r0
    ble lbl_OSRegisterShutdownFunction_00000008
lbl_OSRegisterShutdownFunction_00000024:
    cmpwi r5, 0x0
    bne lbl_OSRegisterShutdownFunction_00000060
    la r4, ShutdownFunctionQueue_8087FC50
    lwz r4, 0x4(r4)
    cmpwi r4, 0x0
    bne lbl_OSRegisterShutdownFunction_00000044
    stw r3, ShutdownFunctionQueue_8087FC50
    b lbl_OSRegisterShutdownFunction_00000048
lbl_OSRegisterShutdownFunction_00000044:
    stw r3, 0x8(r4)
lbl_OSRegisterShutdownFunction_00000048:
    li r0, 0x0
    stw r4, 0xc(r3)
    la r4, ShutdownFunctionQueue_8087FC50
    stw r0, 0x8(r3)
    stw r3, 0x4(r4)
    blr
lbl_OSRegisterShutdownFunction_00000060:
    stw r5, 0x8(r3)
    lwz r4, 0xc(r5)
    stw r3, 0xc(r5)
    cmpwi r4, 0x0
    stw r4, 0xc(r3)
    bne lbl_OSRegisterShutdownFunction_00000080
    stw r3, ShutdownFunctionQueue_8087FC50
    blr
lbl_OSRegisterShutdownFunction_00000080:
    stw r3, 0x8(r4)
    blr
}

asm void fn_805F3550(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    li r3, 0x0
    lwz r31, ShutdownFunctionQueue_8087FC50
    b lbl_fn_805F3550_00000100
lbl_fn_805F3550_000000C4:
    cmpwi r30, 0x0
    beq lbl_fn_805F3550_000000D8
    lwz r0, 0x4(r31)
    cmplw r3, r0
    bne lbl_fn_805F3550_00000108
lbl_fn_805F3550_000000D8:
    lwz r12, 0x0(r31)
    mr r3, r28
    mr r4, r29
    mtctr r12
    bctrl
    cntlzw r0, r3
    lwz r3, 0x4(r31)
    srwi r0, r0, 5
    lwz r31, 0x8(r31)
    or r30, r30, r0
lbl_fn_805F3550_00000100:
    cmpwi r31, 0x0
    bne lbl_fn_805F3550_000000C4
lbl_fn_805F3550_00000108:
    bl __OSSyncSram
    cntlzw r0, r3
    lwz r31, 0x1c(r1)
    srwi r0, r0, 5
    or r30, r30, r0
    cntlzw r0, r30
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    srwi r3, r0, 5
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void __OSShutdownDevices(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    subi r0, r3, 0x5
    mr r31, r3
    cmplwi r0, 0x1
    ble lbl___OSShutdownDevices_0000016C
    cmpwi r3, 0x0
    bne lbl___OSShutdownDevices_00000174
lbl___OSShutdownDevices_0000016C:
    li r27, 0x0
    b lbl___OSShutdownDevices_00000178
lbl___OSShutdownDevices_00000174:
    li r27, 0x1
lbl___OSShutdownDevices_00000178:
    bl __OSStopAudioSystem
    cmpwi r27, 0x0
    bne lbl___OSShutdownDevices_00000190
    li r3, 0x1
    bl __PADDisableRecalibration
    mr r28, r3
lbl___OSShutdownDevices_00000190:
    lwz r29, ShutdownFunctionQueue_8087FC50
    li r3, 0x0
    li r30, 0x0
    b lbl___OSShutdownDevices_000001DC
lbl___OSShutdownDevices_000001A0:
    cmpwi r30, 0x0
    beq lbl___OSShutdownDevices_000001B4
    lwz r0, 0x4(r29)
    cmplw r3, r0
    bne lbl___OSShutdownDevices_000001E4
lbl___OSShutdownDevices_000001B4:
    lwz r12, 0x0(r29)
    mr r4, r31
    li r3, 0x0
    mtctr r12
    bctrl
    cntlzw r0, r3
    lwz r3, 0x4(r29)
    srwi r0, r0, 5
    lwz r29, 0x8(r29)
    or r30, r30, r0
lbl___OSShutdownDevices_000001DC:
    cmpwi r29, 0x0
    bne lbl___OSShutdownDevices_000001A0
lbl___OSShutdownDevices_000001E4:
    bl __OSSyncSram
    cntlzw r0, r3
    srwi r0, r0, 5
    or. r30, r30, r0
    bne lbl___OSShutdownDevices_00000190
lbl___OSShutdownDevices_000001F8:
    bl __OSSyncSram
    cmpwi r3, 0x0
    beq lbl___OSShutdownDevices_000001F8
    bl OSDisableInterrupts
    lwz r30, ShutdownFunctionQueue_8087FC50
    li r3, 0x0
    li r29, 0x0
    b lbl___OSShutdownDevices_00000254
lbl___OSShutdownDevices_00000218:
    cmpwi r29, 0x0
    beq lbl___OSShutdownDevices_0000022C
    lwz r0, 0x4(r30)
    cmplw r3, r0
    bne lbl___OSShutdownDevices_0000025C
lbl___OSShutdownDevices_0000022C:
    lwz r12, 0x0(r30)
    mr r4, r31
    li r3, 0x1
    mtctr r12
    bctrl
    cntlzw r0, r3
    lwz r3, 0x4(r30)
    srwi r0, r0, 5
    lwz r30, 0x8(r30)
    or r29, r29, r0
lbl___OSShutdownDevices_00000254:
    cmpwi r30, 0x0
    bne lbl___OSShutdownDevices_00000218
lbl___OSShutdownDevices_0000025C:
    bl __OSSyncSram
    bl LCDisable
    cmpwi r27, 0x0
    bne lbl___OSShutdownDevices_00000274
    mr r3, r28
    bl __PADDisableRecalibration
lbl___OSShutdownDevices_00000274:
    lis r3, 0x8000
    lwz r3, 0xdc(r3)
    b lbl___OSShutdownDevices_000002A0
lbl___OSShutdownDevices_00000280:
    lhz r0, 0x2c8(r3)
    lwz r29, 0x2fc(r3)
    cmpwi r0, 0x1
    beq lbl___OSShutdownDevices_00000298
    cmpwi r0, 0x4
    bne lbl___OSShutdownDevices_0000029C
lbl___OSShutdownDevices_00000298:
    bl OSCancelThread
lbl___OSShutdownDevices_0000029C:
    mr r3, r29
lbl___OSShutdownDevices_000002A0:
    cmpwi r3, 0x0
    bne lbl___OSShutdownDevices_00000280
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805F3780(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x2
    stw r0, 0x44(r1)
    addi r3, r1, 0x8
    stw r31, 0x3c(r1)
    bl memset
    bl SCInit
lbl_fn_805F3780_000002E4:
    bl SCCheckStatus
    cmplwi r3, 0x1
    beq lbl_fn_805F3780_000002E4
    addi r3, r1, 0x8
    bl fn_80624970
    bl __OSStopPlayRecord
    bl __OSUnRegisterStateEvent
    bl __DVDPrepareReset
    addi r3, r1, 0x18
    bl __OSReadStateFlags
    lbz r31, 0x1e(r1)
    bl __DVDGetCoverStatus
    cmplwi r3, 0x2
    beq lbl_fn_805F3780_00000324
    li r3, 0x3
    b lbl_fn_805F3780_00000354
lbl_fn_805F3780_00000324:
    cmplwi r31, 0x1
    bne lbl_fn_805F3780_00000350
    addi r3, r1, 0xc
    bl __OSGetRTCFlags
    cmpwi r3, 0x0
    beq lbl_fn_805F3780_00000350
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    bne lbl_fn_805F3780_00000350
    li r3, 0x1
    b lbl_fn_805F3780_00000354
lbl_fn_805F3780_00000350:
    li r3, 0x2
lbl_fn_805F3780_00000354:
    lbz r0, 0x8(r1)
    stb r3, 0x1e(r1)
    cmplwi r0, 0x1
    bne lbl_fn_805F3780_00000370
    li r0, 0x5
    stb r0, 0x1d(r1)
    b lbl_fn_805F3780_00000378
lbl_fn_805F3780_00000370:
    li r0, 0x1
    stb r0, 0x1d(r1)
lbl_fn_805F3780_00000378:
    bl __OSClearRTCFlags
    addi r3, r1, 0x18
    bl __OSWriteStateFlags
    addi r3, r1, 0x10
    bl __OSGetIOSRev
    lbz r0, 0x8(r1)
    cmplwi r0, 0x1
    bne lbl_fn_805F3780_000003B8
    li r0, 0x1
    stw r0, lbl_8087FC4C
    bl OSDisableScheduler
    li r3, 0x5
    bl __OSShutdownDevices
    bl OSEnableScheduler
    bl __OSLaunchMenu
    b lbl_fn_805F3780_000003C8
lbl_fn_805F3780_000003B8:
    bl OSDisableScheduler
    li r3, 0x2
    bl __OSShutdownDevices
    bl fn_805F6BF0
lbl_fn_805F3780_000003C8:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805F38A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_805EC060
    mr r31, r3
    bl __OSStopPlayRecord
    bl __OSUnRegisterStateEvent
    clrlwi r0, r31, 24
    cmplwi r0, 0x81
    bne lbl_fn_805F38A0_00000430
    bl OSDisableScheduler
    li r3, 0x4
    bl __OSShutdownDevices
    bl OSEnableScheduler
    mr r3, r30
    bl fn_805F86B0
    b lbl_fn_805F38A0_00000454
lbl_fn_805F38A0_00000430:
    cmplwi r0, 0x80
    bne lbl_fn_805F38A0_00000454
    bl OSDisableScheduler
    li r3, 0x4
    bl __OSShutdownDevices
    bl OSEnableScheduler
    lwz r4, lbl_8087FC48
    mr r3, r30
    bl fn_805F3430
lbl_fn_805F38A0_00000454:
    bl OSDisableScheduler
    li r3, 0x1
    bl __OSShutdownDevices
    lwz r0, __OSInNandBoot
    cmpwi r0, 0x0
    bne lbl_fn_805F38A0_00000478
    lwz r0, __OSInReboot
    cmpwi r0, 0x0
    beq lbl_fn_805F38A0_0000047C
lbl_fn_805F38A0_00000478:
    bl __OSInitSTM
lbl_fn_805F38A0_0000047C:
    bl __OSHotReset
    lis r3, lbl_8079D7F8@ha
    lis r5, lbl_8079D804@ha
    addi r3, r3, lbl_8079D7F8@l
    li r4, 0x40a
    addi r5, r5, lbl_8079D804@l
    crclr 6
    bl OSPanic
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void __OSReturnToMenu(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    lis r30, lbl_8079D7F8@ha
    addi r30, r30, lbl_8079D7F8@l
    stw r29, 0x84(r1)
    mr r29, r3
    bl __OSStopPlayRecord
    bl __OSUnRegisterStateEvent
    bl __DVDPrepareReset
    addi r3, r1, 0x58
    bl __OSReadStateFlags
    lbz r31, 0x5e(r1)
    bl __DVDGetCoverStatus
    cmplwi r3, 0x2
    beq lbl___OSReturnToMenu_00000510
    li r0, 0x3
    b lbl___OSReturnToMenu_00000540
lbl___OSReturnToMenu_00000510:
    cmplwi r31, 0x1
    bne lbl___OSReturnToMenu_0000053C
    addi r3, r1, 0x8
    bl __OSGetRTCFlags
    cmpwi r3, 0x0
    beq lbl___OSReturnToMenu_0000053C
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl___OSReturnToMenu_0000053C
    li r0, 0x1
    b lbl___OSReturnToMenu_00000540
lbl___OSReturnToMenu_0000053C:
    li r0, 0x2
lbl___OSReturnToMenu_00000540:
    li r31, 0x3
    stb r0, 0x5e(r1)
    stb r31, 0x5d(r1)
    stb r29, 0x5f(r1)
    bl __OSClearRTCFlags
    addi r3, r1, 0x58
    bl __OSWriteStateFlags
    lis r3, 0x8128
    bl OSSetArenaLo
    lis r3, 0x812f
    bl OSSetArenaHi
    bl ESP_InitLib
    cmpwi r3, 0x0
    beq lbl___OSReturnToMenu_000005EC
    addi r3, r1, 0x38
    bl __OSReadStateFlags
    li r0, 0x2
    stb r0, 0x3e(r1)
    stb r31, 0x3d(r1)
    bl __OSClearRTCFlags
    addi r3, r1, 0x38
    bl __OSWriteStateFlags
    bl __OSLaunchMenu
    bl OSDisableScheduler
    bl __VISetRGBModeImm
    lwz r0, __OSInNandBoot
    cmpwi r0, 0x0
    bne lbl___OSReturnToMenu_000005BC
    lwz r0, __OSInReboot
    cmpwi r0, 0x0
    beq lbl___OSReturnToMenu_000005C0
lbl___OSReturnToMenu_000005BC:
    bl __OSInitSTM
lbl___OSReturnToMenu_000005C0:
    bl __OSHotReset
    addi r3, r30, 0x0
    addi r5, r30, 0xc
    li r4, 0x40a
    crclr 6
    bl OSPanic
    addi r3, r30, 0x0
    addi r5, r30, 0x38
    li r4, 0x3f2
    crclr 6
    bl OSPanic
lbl___OSReturnToMenu_000005EC:
    li r3, 0xe0
    li r4, 0x20
    bl OSAllocFromMEM1ArenaLo
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl___OSReturnToMenu_0000067C
    addi r3, r1, 0x18
    bl __OSReadStateFlags
    li r3, 0x2
    li r0, 0x3
    stb r3, 0x1e(r1)
    stb r0, 0x1d(r1)
    bl __OSClearRTCFlags
    addi r3, r1, 0x18
    bl __OSWriteStateFlags
    bl __OSLaunchMenu
    bl OSDisableScheduler
    bl __VISetRGBModeImm
    lwz r0, __OSInNandBoot
    cmpwi r0, 0x0
    bne lbl___OSReturnToMenu_0000064C
    lwz r0, __OSInReboot
    cmpwi r0, 0x0
    beq lbl___OSReturnToMenu_00000650
lbl___OSReturnToMenu_0000064C:
    bl __OSInitSTM
lbl___OSReturnToMenu_00000650:
    bl __OSHotReset
    addi r3, r30, 0x0
    addi r5, r30, 0xc
    li r4, 0x40a
    crclr 6
    bl OSPanic
    addi r3, r30, 0x0
    addi r5, r30, 0x38
    li r4, 0x3f2
    crclr 6
    bl OSPanic
lbl___OSReturnToMenu_0000067C:
    mr r3, r31
    li r4, 0x0
    li r5, 0xe0
    bl memset
    mr r4, r31
    li r3, 0x0
    bl ESP_DiGetTicketView
    cmpwi r3, 0x0
    bne lbl___OSReturnToMenu_000006DC
    bl OSPlayTimeIsLimited
    cmpwi r3, 0x0
    beq lbl___OSReturnToMenu_000006DC
    li r3, 0x0
    li r0, -0x1
    stw r3, 0x10(r1)
    mr r3, r31
    addi r4, r1, 0x10
    addi r5, r1, 0xc
    stw r0, 0xc(r1)
    bl __OSGetPlayTime
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    bne lbl___OSReturnToMenu_000006DC
    bl __OSWriteExpiredFlagIfSet
lbl___OSReturnToMenu_000006DC:
    bl OSDisableScheduler
    li r3, 0x5
    bl __OSShutdownDevices
    bl OSEnableScheduler
    bl __OSLaunchMenu
    bl OSDisableScheduler
    bl __VISetRGBModeImm
    lwz r0, __OSInNandBoot
    cmpwi r0, 0x0
    bne lbl___OSReturnToMenu_00000710
    lwz r0, __OSInReboot
    cmpwi r0, 0x0
    beq lbl___OSReturnToMenu_00000714
lbl___OSReturnToMenu_00000710:
    bl __OSInitSTM
lbl___OSReturnToMenu_00000714:
    bl __OSHotReset
    addi r3, r30, 0x0
    addi r5, r30, 0xc
    li r4, 0x40a
    crclr 6
    bl OSPanic
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void OSReturnToMenu(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x0
    stw r0, 0x14(r1)
    bl __OSReturnToMenu
    lis r3, lbl_8079D7F8@ha
    lis r5, lbl_8079D864@ha
    addi r3, r3, lbl_8079D7F8@l
    li r4, 0x37f
    addi r5, r5, lbl_8079D864@l
    crclr 6
    bl OSPanic
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805F3C50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x1
    stw r0, 0x14(r1)
    bl __OSReturnToMenu
    lis r3, lbl_8079D7F8@ha
    lis r5, lbl_8079D894@ha
    addi r3, r3, lbl_8079D7F8@l
    li r4, 0x391
    addi r5, r5, lbl_8079D894@l
    crclr 6
    bl OSPanic
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805F3C90(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r3, r1, 0x8
    stw r31, 0x2c(r1)
    lis r31, lbl_8079D7F8@ha
    addi r31, r31, lbl_8079D7F8@l
    bl __OSReadStateFlags
    li r3, 0x2
    li r0, 0x3
    stb r3, 0xe(r1)
    stb r0, 0xd(r1)
    bl __OSClearRTCFlags
    addi r3, r1, 0x8
    bl __OSWriteStateFlags
    bl __OSLaunchMenu
    bl OSDisableScheduler
    bl __VISetRGBModeImm
    lwz r0, __OSInNandBoot
    cmpwi r0, 0x0
    bne lbl_fn_805F3C90_00000830
    lwz r0, __OSInReboot
    cmpwi r0, 0x0
    beq lbl_fn_805F3C90_00000834
lbl_fn_805F3C90_00000830:
    bl __OSInitSTM
lbl_fn_805F3C90_00000834:
    bl __OSHotReset
    addi r3, r31, 0x0
    addi r5, r31, 0xc
    li r4, 0x40a
    crclr 6
    bl OSPanic
    addi r3, r31, 0x0
    addi r5, r31, 0x38
    li r4, 0x3f2
    crclr 6
    bl OSPanic
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805F3D40(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, __OSInNandBoot
    cmpwi r0, 0x0
    bne lbl_fn_805F3D40_000008A4
    lwz r0, __OSInReboot
    cmpwi r0, 0x0
    beq lbl_fn_805F3D40_000008A8
lbl_fn_805F3D40_000008A4:
    bl __OSInitSTM
lbl_fn_805F3D40_000008A8:
    bl __OSHotReset
    lis r3, lbl_8079D7F8@ha
    lis r5, lbl_8079D804@ha
    addi r3, r3, lbl_8079D7F8@l
    li r4, 0x40a
    addi r5, r5, lbl_8079D804@l
    crclr 6
    bl OSPanic
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void OSGetResetCode(void)
{
    nofralloc
    lis r3, __OSRebootParams@ha
    lwz r0, __OSRebootParams@l(r3)
    cmpwi r0, 0x0
    beq lbl_OSGetResetCode_00000900
    addi r3, r3, __OSRebootParams@l
    lwz r0, 0x4(r3)
    oris r3, r0, 0x8000
    blr
lbl_OSGetResetCode_00000900:
    lis r3, 0xcc00
    lwz r0, 0x3024(r3)
    srwi r3, r0, 3
    blr
}

asm void OSResetSystem(void)
{
    nofralloc
    lis r3, lbl_8079D7F8@ha
    lis r5, lbl_8079D9E4@ha
    addi r3, r3, lbl_8079D7F8@l
    li r4, 0x4a1
    addi r5, r5, lbl_8079D9E4@l
    crclr 6
    b OSPanic
}

asm void fn_805F3DF0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, Scb_807CB600@ha
    lis r5, fn_805F3DF0@ha
    stw r0, 0x24(r1)
    addi r6, r6, Scb_807CB600@l
    li r3, 0x0
    addi r5, r5, fn_805F3DF0@l
    stw r31, 0x1c(r1)
    li r4, 0x1
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r31, 0x40(r6)
    subfic r29, r31, 0x40
    add r30, r6, r31
    bl EXILock
    cmpwi r3, 0x0
    bne lbl_fn_805F3DF0_00000980
    li r0, 0x0
    b lbl_fn_805F3DF0_00000A30
lbl_fn_805F3DF0_00000980:
    li r3, 0x0
    li r4, 0x1
    li r5, 0x3
    bl EXISelect
    cmpwi r3, 0x0
    bne lbl_fn_805F3DF0_000009A8
    li r3, 0x0
    bl EXIUnlock
    li r0, 0x0
    b lbl_fn_805F3DF0_00000A30
lbl_fn_805F3DF0_000009A8:
    slwi r3, r31, 6
    addi r4, r1, 0x8
    addi r0, r3, 0x100
    li r5, 0x4
    oris r0, r0, 0xa000
    stw r0, 0x8(r1)
    li r3, 0x0
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    li r3, 0x0
    srwi r31, r0, 5
    bl EXISync
    cntlzw r0, r3
    mr r4, r30
    srwi r0, r0, 5
    mr r5, r29
    or r29, r31, r0
    li r3, 0x0
    li r6, 0x1
    bl fn_805E7E00
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r29, r29, r0
    bl EXIDeselect
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r29, r29, r0
    bl EXIUnlock
    cntlzw r0, r29
    srwi r0, r0, 5
lbl_fn_805F3DF0_00000A30:
    lis r3, Scb_807CB600@ha
    cmpwi r0, 0x0
    addi r3, r3, Scb_807CB600@l
    stw r0, 0x4c(r3)
    beq lbl_fn_805F3DF0_00000A4C
    li r0, 0x40
    stw r0, 0x40(r3)
lbl_fn_805F3DF0_00000A4C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
