#include "revolution/types.h"

/* External functions referenced */
extern void DCFlushRange(void*, u32);
extern void DCInvalidateRange(void*, u32);
extern void IPCGetBufferHi(void);
extern void IPCGetBufferLo(void);
extern void IPCInit(void);
extern void IPCReadReg(void);
extern void IPCSetBufferLo(void);
extern void IPCWriteReg(void);
extern void IPCiProfInit(void);
extern void IPCiProfQueueReq(void);
extern void OSCreateAlarm(void);
extern void OSDisableInterrupts(void);
extern void OSInitThreadQueue(void);
extern void OSRestoreInterrupts(void);
extern void OSSleepThread(void);
extern void __OSSetInterruptHandler(void);
extern void __OSUnmaskInterrupts(void);
extern void IPCInterruptHandler_8061C020(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);

/* External data */
extern u8 __responses_807E7640[];
extern u8 __timeout_alarm_807E7710[];
extern u8 lbl_807E7740[];
extern u8 lbl_807E7780[];

/* External SDA/SBSS symbols */
extern u32 __mailboxAck_8087E8D0;
extern u32 hid_8087E8D4;
extern u32 lbl_80880100;
extern u32 lbl_80880104;
extern u32 lbl_80880108;
static BOOL initialized;

/* Function declarations */
void IPCCltInit(void);
void fn_8061C2A0(void);
void __ios_Ipc2(void);
void IOS_OpenAsync(void);
void IOS_Open(void);
void fn_8061C7E0(void);
void fn_8061C8A0(void);
void fn_8061C950(void);
void fn_8061CA50(void);
void fn_8061CB60(void);
void fn_8061CC60(void);
void fn_8061CD70(void);
void fn_8061CE50(void);
void IOS_IoctlAsync(void);
void fn_8061D080(void);
void fn_8061D1B0(void);
void fn_8061D2F0(void);
void IOS_Ioctlv(void);
void fn_8061D4C0(void);
void iosCreateHeap(void);
void fn_8061D920(void);
void iosAllocAligned(void);
void iosFree(void);

asm void IPCCltInit(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, initialized
    stw r31, 0x1c(r1)
    cmpwi r0, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    bne lbl_IPCCltInit_000000A0
    li r0, 0x1
    stw r0, initialized
    bl IPCInit
    bl IPCGetBufferLo
    mr r29, r3
    addi r31, r3, 0x2000
    bl IPCGetBufferHi
    cmplw r31, r3
    ble lbl_IPCCltInit_00000054
    li r30, -0x16
    b lbl_IPCCltInit_000000A0
lbl_IPCCltInit_00000054:
    mr r3, r29
    li r4, 0x2000
    bl iosCreateHeap
    stw r3, hid_8087E8D4
    mr r3, r31
    bl IPCSetBufferLo
    lis r4, IPCInterruptHandler_8061C020@ha
    li r3, 0x1b
    addi r4, r4, IPCInterruptHandler_8061C020@l
    bl __OSSetInterruptHandler
    li r3, 0x10
    bl __OSUnmaskInterrupts
    li r3, 0x1
    li r4, 0x38
    bl IPCWriteReg
    bl IPCiProfInit
    lis r3, __timeout_alarm_807E7710@ha
    addi r3, r3, __timeout_alarm_807E7710@l
    bl OSCreateAlarm
lbl_IPCCltInit_000000A0:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061C2A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    bl IPCGetBufferLo
    mr r29, r3
    addi r31, r3, 0x1000
    bl IPCGetBufferHi
    cmplw r31, r3
    ble lbl_fn_8061C2A0_000000FC
    li r30, -0x16
    b lbl_fn_8061C2A0_00000114
lbl_fn_8061C2A0_000000FC:
    mr r3, r29
    li r4, 0x1000
    bl iosCreateHeap
    stw r3, hid_8087E8D4
    mr r3, r31
    bl IPCSetBufferLo
lbl_fn_8061C2A0_00000114:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void __ios_Ipc2(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bne lbl___ios_Ipc2_00000174
    li r31, -0x4
    b lbl___ios_Ipc2_00000368
lbl___ios_Ipc2_00000174:
    cmpwi r4, 0x0
    bne lbl___ios_Ipc2_00000184
    addi r3, r3, 0x2c
    bl OSInitThreadQueue
lbl___ios_Ipc2_00000184:
    mr r3, r28
    li r4, 0x20
    bl DCFlushRange
    bl OSDisableInterrupts
    lis r4, __responses_807E7640@ha
    mr r30, r3
    addi r3, r4, __responses_807E7640@l
    lwz r4, __responses_807E7640@l(r4)
    lwz r0, 0x4(r3)
    li r31, 0x0
    cmplw r0, r4
    bge lbl___ios_Ipc2_000001BC
    subf r0, r4, r0
    b lbl___ios_Ipc2_000001D8
lbl___ios_Ipc2_000001BC:
    subf r4, r4, r0
    li r3, 0x30
    subi r0, r4, 0x30
    orc r3, r4, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r0, r0, 31
lbl___ios_Ipc2_000001D8:
    cmpwi r0, 0x0
    beq lbl___ios_Ipc2_000001E8
    li r31, -0x8
    b lbl___ios_Ipc2_0000023C
lbl___ios_Ipc2_000001E8:
    lis r7, __responses_807E7640@ha
    lis r4, 0xaaab
    addi r7, r7, __responses_807E7640@l
    mr r3, r28
    lwz r5, 0xc(r7)
    subi r0, r4, 0x5555
    slwi r4, r5, 2
    add r4, r7, r4
    stw r28, 0x10(r4)
    lwz r5, 0xc(r7)
    lwz r4, 0x4(r7)
    addi r6, r5, 0x1
    mulhwu r5, r0, r6
    addi r0, r4, 0x1
    stw r0, 0x4(r7)
    srwi r5, r5, 5
    mulli r0, r5, 0x30
    subf r0, r0, r6
    stw r0, 0xc(r7)
    lwz r4, 0x8(r28)
    bl IPCiProfQueueReq
lbl___ios_Ipc2_0000023C:
    cmpwi r31, 0x0
    beq lbl___ios_Ipc2_00000264
    mr r3, r30
    bl OSRestoreInterrupts
    cmpwi r29, 0x0
    beq lbl___ios_Ipc2_00000368
    lwz r3, hid_8087E8D4
    mr r4, r28
    bl iosFree
    b lbl___ios_Ipc2_00000368
lbl___ios_Ipc2_00000264:
    lwz r0, __mailboxAck_8087E8D0
    cmpwi r0, 0x0
    ble lbl___ios_Ipc2_00000344
    lis r4, __responses_807E7640@ha
    addi r3, r4, __responses_807E7640@l
    lwz r4, __responses_807E7640@l(r4)
    lwz r0, 0x4(r3)
    cmplw r0, r4
    bge lbl___ios_Ipc2_00000290
    subf r0, r4, r0
    b lbl___ios_Ipc2_0000029C
lbl___ios_Ipc2_00000290:
    subf r0, r4, r0
    cntlzw r0, r0
    srwi r0, r0, 5
lbl___ios_Ipc2_0000029C:
    cmpwi r0, 0x0
    bne lbl___ios_Ipc2_00000344
    lis r3, __responses_807E7640@ha
    addi r3, r3, __responses_807E7640@l
    lwz r0, 0x8(r3)
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r4, 0x10(r3)
    cmpwi r4, 0x0
    beq lbl___ios_Ipc2_00000344
    lwz r0, 0x28(r4)
    cmpwi r0, 0x0
    beq lbl___ios_Ipc2_000002DC
    lwz r3, __mailboxAck_8087E8D0
    subi r0, r3, 0x1
    stw r0, __mailboxAck_8087E8D0
lbl___ios_Ipc2_000002DC:
    addis r4, r4, 0x8000
    li r3, 0x0
    bl IPCWriteReg
    lis r8, __responses_807E7640@ha
    lis r3, 0xaaab
    addi r7, r8, __responses_807E7640@l
    lwz r4, __responses_807E7640@l(r8)
    lwz r6, 0x8(r7)
    subi r5, r3, 0x5555
    addi r0, r4, 0x1
    lwz r3, __mailboxAck_8087E8D0
    addi r6, r6, 0x1
    stw r0, __responses_807E7640@l(r8)
    mulhwu r4, r5, r6
    subi r0, r3, 0x1
    stw r0, __mailboxAck_8087E8D0
    li r3, 0x1
    srwi r4, r4, 5
    mulli r0, r4, 0x30
    subf r0, r0, r6
    stw r0, 0x8(r7)
    bl IPCReadReg
    rlwinm r0, r3, 0, 26, 27
    li r3, 0x1
    ori r4, r0, 0x1
    bl IPCWriteReg
lbl___ios_Ipc2_00000344:
    cmpwi r29, 0x0
    bne lbl___ios_Ipc2_00000354
    addi r3, r28, 0x2c
    bl OSSleepThread
lbl___ios_Ipc2_00000354:
    mr r3, r30
    bl OSRestoreInterrupts
    cmpwi r29, 0x0
    bne lbl___ios_Ipc2_00000368
    lwz r31, 0x4(r28)
lbl___ios_Ipc2_00000368:
    cmpwi r28, 0x0
    beq lbl___ios_Ipc2_00000384
    cmpwi r29, 0x0
    bne lbl___ios_Ipc2_00000384
    lwz r3, hid_8087E8D4
    mr r4, r28
    bl iosFree
lbl___ios_Ipc2_00000384:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void IOS_OpenAsync(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    addic. r0, r1, 0x8
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r31, r6
    li r30, 0x0
    bne lbl_IOS_OpenAsync_000003E8
    li r30, -0x4
    b lbl_IOS_OpenAsync_00000430
lbl_IOS_OpenAsync_000003E8:
    lwz r3, hid_8087E8D4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_IOS_OpenAsync_0000040C
    li r30, -0x16
    b lbl_IOS_OpenAsync_00000430
lbl_IOS_OpenAsync_0000040C:
    stw r29, 0x20(r3)
    li r5, 0x0
    li r0, 0x1
    lwz r4, 0x8(r1)
    stw r31, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r5, 0x8(r3)
lbl_IOS_OpenAsync_00000430:
    cmpwi r30, 0x0
    bne lbl_IOS_OpenAsync_000004B0
    lwz r31, 0x8(r1)
    li r30, 0x0
    cmpwi r31, 0x0
    bne lbl_IOS_OpenAsync_00000450
    li r30, -0x4
    b lbl_IOS_OpenAsync_00000498
lbl_IOS_OpenAsync_00000450:
    mr r3, r27
    li r4, 0x40
    b lbl_IOS_OpenAsync_00000464
    nop
lbl_IOS_OpenAsync_00000460:
    addi r3, r3, 0x1
lbl_IOS_OpenAsync_00000464:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_IOS_OpenAsync_0000047C
    cmpwi r4, 0x0
    subi r4, r4, 0x1
    bne lbl_IOS_OpenAsync_00000460
lbl_IOS_OpenAsync_0000047C:
    subf r4, r27, r3
    mr r3, r27
    addi r4, r4, 0x1
    bl DCFlushRange
    addis r0, r27, 0x8000
    stw r0, 0xc(r31)
    stw r28, 0x10(r31)
lbl_IOS_OpenAsync_00000498:
    cmpwi r30, 0x0
    bne lbl_IOS_OpenAsync_000004B0
    lwz r3, 0x8(r1)
    mr r4, r29
    bl __ios_Ipc2
    mr r30, r3
lbl_IOS_OpenAsync_000004B0:
    addi r11, r1, 0x30
    mr r3, r30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void IOS_Open(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addic. r0, r1, 0x8
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bne lbl_IOS_Open_00000508
    li r30, -0x4
    b lbl_IOS_Open_00000550
lbl_IOS_Open_00000508:
    lwz r3, hid_8087E8D4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_IOS_Open_0000052C
    li r30, -0x16
    b lbl_IOS_Open_00000550
lbl_IOS_Open_0000052C:
    li r5, 0x0
    stw r5, 0x20(r3)
    li r0, 0x1
    lwz r4, 0x8(r1)
    stw r5, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r5, 0x8(r3)
lbl_IOS_Open_00000550:
    cmpwi r30, 0x0
    bne lbl_IOS_Open_000005D0
    lwz r31, 0x8(r1)
    li r30, 0x0
    cmpwi r31, 0x0
    bne lbl_IOS_Open_00000570
    li r30, -0x4
    b lbl_IOS_Open_000005B8
lbl_IOS_Open_00000570:
    mr r3, r28
    li r4, 0x40
    b lbl_IOS_Open_00000584
    nop
lbl_IOS_Open_00000580:
    addi r3, r3, 0x1
lbl_IOS_Open_00000584:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_IOS_Open_0000059C
    cmpwi r4, 0x0
    subi r4, r4, 0x1
    bne lbl_IOS_Open_00000580
lbl_IOS_Open_0000059C:
    subf r4, r28, r3
    mr r3, r28
    addi r4, r4, 0x1
    bl DCFlushRange
    addis r0, r28, 0x8000
    stw r0, 0xc(r31)
    stw r29, 0x10(r31)
lbl_IOS_Open_000005B8:
    cmpwi r30, 0x0
    bne lbl_IOS_Open_000005D0
    lwz r3, 0x8(r1)
    li r4, 0x0
    bl __ios_Ipc2
    mr r30, r3
lbl_IOS_Open_000005D0:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061C7E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addic. r0, r1, 0x8
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bne lbl_fn_8061C7E0_0000063C
    li r31, -0x4
    b lbl_fn_8061C7E0_00000684
lbl_fn_8061C7E0_0000063C:
    lwz r3, hid_8087E8D4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_fn_8061C7E0_00000660
    li r31, -0x16
    b lbl_fn_8061C7E0_00000684
lbl_fn_8061C7E0_00000660:
    stw r29, 0x20(r3)
    li r5, 0x0
    li r0, 0x2
    lwz r4, 0x8(r1)
    stw r30, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r28, 0x8(r3)
lbl_fn_8061C7E0_00000684:
    cmpwi r31, 0x0
    bne lbl_fn_8061C7E0_0000069C
    lwz r3, 0x8(r1)
    mr r4, r29
    bl __ios_Ipc2
    mr r31, r3
lbl_fn_8061C7E0_0000069C:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061C8A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addic. r0, r1, 0x8
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r3
    bne lbl_fn_8061C8A0_000006EC
    li r31, -0x4
    b lbl_fn_8061C8A0_00000734
lbl_fn_8061C8A0_000006EC:
    lwz r3, hid_8087E8D4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_fn_8061C8A0_00000710
    li r31, -0x16
    b lbl_fn_8061C8A0_00000734
lbl_fn_8061C8A0_00000710:
    li r5, 0x0
    stw r5, 0x20(r3)
    li r0, 0x2
    lwz r4, 0x8(r1)
    stw r5, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r30, 0x8(r3)
lbl_fn_8061C8A0_00000734:
    cmpwi r31, 0x0
    bne lbl_fn_8061C8A0_0000074C
    lwz r3, 0x8(r1)
    li r4, 0x0
    bl __ios_Ipc2
    mr r31, r3
lbl_fn_8061C8A0_0000074C:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061C950(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    addic. r0, r1, 0x8
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r31, r7
    li r30, 0x0
    bne lbl_fn_8061C950_000007AC
    li r30, -0x4
    b lbl_fn_8061C950_000007F4
lbl_fn_8061C950_000007AC:
    lwz r3, hid_8087E8D4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_fn_8061C950_000007D0
    li r30, -0x16
    b lbl_fn_8061C950_000007F4
lbl_fn_8061C950_000007D0:
    stw r29, 0x20(r3)
    li r5, 0x0
    li r0, 0x3
    lwz r4, 0x8(r1)
    stw r31, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r26, 0x8(r3)
lbl_fn_8061C950_000007F4:
    cmpwi r30, 0x0
    bne lbl_fn_8061C950_00000854
    lwz r31, 0x8(r1)
    li r30, 0x0
    cmpwi r31, 0x0
    bne lbl_fn_8061C950_00000814
    li r30, -0x4
    b lbl_fn_8061C950_0000083C
lbl_fn_8061C950_00000814:
    mr r3, r27
    mr r4, r28
    bl DCInvalidateRange
    cmpwi r27, 0x0
    beq lbl_fn_8061C950_00000830
    addis r0, r27, 0x8000
    b lbl_fn_8061C950_00000834
lbl_fn_8061C950_00000830:
    li r0, 0x0
lbl_fn_8061C950_00000834:
    stw r0, 0xc(r31)
    stw r28, 0x10(r31)
lbl_fn_8061C950_0000083C:
    cmpwi r30, 0x0
    bne lbl_fn_8061C950_00000854
    lwz r3, 0x8(r1)
    mr r4, r29
    bl __ios_Ipc2
    mr r30, r3
lbl_fn_8061C950_00000854:
    addi r11, r1, 0x30
    mr r3, r30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8061CA50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addic. r0, r1, 0x8
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    bne lbl_fn_8061CA50_000008AC
    li r30, -0x4
    b lbl_fn_8061CA50_000008F4
lbl_fn_8061CA50_000008AC:
    lwz r3, hid_8087E8D4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_fn_8061CA50_000008D0
    li r30, -0x16
    b lbl_fn_8061CA50_000008F4
lbl_fn_8061CA50_000008D0:
    li r5, 0x0
    stw r5, 0x20(r3)
    li r0, 0x3
    lwz r4, 0x8(r1)
    stw r5, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r31, 0x8(r3)
lbl_fn_8061CA50_000008F4:
    cmpwi r30, 0x0
    bne lbl_fn_8061CA50_00000954
    lwz r31, 0x8(r1)
    li r30, 0x0
    cmpwi r31, 0x0
    bne lbl_fn_8061CA50_00000914
    li r30, -0x4
    b lbl_fn_8061CA50_0000093C
lbl_fn_8061CA50_00000914:
    mr r3, r28
    mr r4, r29
    bl DCInvalidateRange
    cmpwi r28, 0x0
    beq lbl_fn_8061CA50_00000930
    addis r0, r28, 0x8000
    b lbl_fn_8061CA50_00000934
lbl_fn_8061CA50_00000930:
    li r0, 0x0
lbl_fn_8061CA50_00000934:
    stw r0, 0xc(r31)
    stw r29, 0x10(r31)
lbl_fn_8061CA50_0000093C:
    cmpwi r30, 0x0
    bne lbl_fn_8061CA50_00000954
    lwz r3, 0x8(r1)
    li r4, 0x0
    bl __ios_Ipc2
    mr r30, r3
lbl_fn_8061CA50_00000954:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061CB60(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    addic. r0, r1, 0x8
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    li r31, 0x0
    bne lbl_fn_8061CB60_000009BC
    li r31, -0x4
    b lbl_fn_8061CB60_00000A04
lbl_fn_8061CB60_000009BC:
    lwz r3, hid_8087E8D4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_fn_8061CB60_000009E0
    li r31, -0x16
    b lbl_fn_8061CB60_00000A04
lbl_fn_8061CB60_000009E0:
    stw r29, 0x20(r3)
    li r5, 0x0
    li r0, 0x4
    lwz r4, 0x8(r1)
    stw r30, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r26, 0x8(r3)
lbl_fn_8061CB60_00000A04:
    cmpwi r31, 0x0
    bne lbl_fn_8061CB60_00000A64
    lwz r5, 0x8(r1)
    li r31, 0x0
    cmpwi r5, 0x0
    bne lbl_fn_8061CB60_00000A24
    li r31, -0x4
    b lbl_fn_8061CB60_00000A4C
lbl_fn_8061CB60_00000A24:
    cmpwi r27, 0x0
    beq lbl_fn_8061CB60_00000A34
    addis r0, r27, 0x8000
    b lbl_fn_8061CB60_00000A38
lbl_fn_8061CB60_00000A34:
    li r0, 0x0
lbl_fn_8061CB60_00000A38:
    stw r0, 0xc(r5)
    mr r3, r27
    mr r4, r28
    stw r28, 0x10(r5)
    bl DCFlushRange
lbl_fn_8061CB60_00000A4C:
    cmpwi r31, 0x0
    bne lbl_fn_8061CB60_00000A64
    lwz r3, 0x8(r1)
    mr r4, r29
    bl __ios_Ipc2
    mr r31, r3
lbl_fn_8061CB60_00000A64:
    addi r11, r1, 0x30
    mr r3, r31
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8061CC60(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addic. r0, r1, 0x8
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bne lbl_fn_8061CC60_00000ABC
    li r31, -0x4
    b lbl_fn_8061CC60_00000B04
lbl_fn_8061CC60_00000ABC:
    lwz r3, hid_8087E8D4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_fn_8061CC60_00000AE0
    li r31, -0x16
    b lbl_fn_8061CC60_00000B04
lbl_fn_8061CC60_00000AE0:
    li r5, 0x0
    stw r5, 0x20(r3)
    li r0, 0x4
    lwz r4, 0x8(r1)
    stw r5, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r28, 0x8(r3)
lbl_fn_8061CC60_00000B04:
    cmpwi r31, 0x0
    bne lbl_fn_8061CC60_00000B64
    lwz r5, 0x8(r1)
    li r31, 0x0
    cmpwi r5, 0x0
    bne lbl_fn_8061CC60_00000B24
    li r31, -0x4
    b lbl_fn_8061CC60_00000B4C
lbl_fn_8061CC60_00000B24:
    cmpwi r29, 0x0
    beq lbl_fn_8061CC60_00000B34
    addis r0, r29, 0x8000
    b lbl_fn_8061CC60_00000B38
lbl_fn_8061CC60_00000B34:
    li r0, 0x0
lbl_fn_8061CC60_00000B38:
    stw r0, 0xc(r5)
    mr r3, r29
    mr r4, r30
    stw r30, 0x10(r5)
    bl DCFlushRange
lbl_fn_8061CC60_00000B4C:
    cmpwi r31, 0x0
    bne lbl_fn_8061CC60_00000B64
    lwz r3, 0x8(r1)
    li r4, 0x0
    bl __ios_Ipc2
    mr r31, r3
lbl_fn_8061CC60_00000B64:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061CD70(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    addic. r0, r1, 0x8
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    li r31, 0x0
    bne lbl_fn_8061CD70_00000BCC
    li r31, -0x4
    b lbl_fn_8061CD70_00000C14
lbl_fn_8061CD70_00000BCC:
    lwz r3, hid_8087E8D4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_fn_8061CD70_00000BF0
    li r31, -0x16
    b lbl_fn_8061CD70_00000C14
lbl_fn_8061CD70_00000BF0:
    stw r29, 0x20(r3)
    li r5, 0x0
    li r0, 0x5
    lwz r4, 0x8(r1)
    stw r30, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r26, 0x8(r3)
lbl_fn_8061CD70_00000C14:
    cmpwi r31, 0x0
    bne lbl_fn_8061CD70_00000C54
    lwz r3, 0x8(r1)
    li r31, 0x0
    cmpwi r3, 0x0
    bne lbl_fn_8061CD70_00000C34
    li r31, -0x4
    b lbl_fn_8061CD70_00000C3C
lbl_fn_8061CD70_00000C34:
    stw r27, 0xc(r3)
    stw r28, 0x10(r3)
lbl_fn_8061CD70_00000C3C:
    cmpwi r31, 0x0
    bne lbl_fn_8061CD70_00000C54
    lwz r3, 0x8(r1)
    mr r4, r29
    bl __ios_Ipc2
    mr r31, r3
lbl_fn_8061CD70_00000C54:
    addi r11, r1, 0x30
    mr r3, r31
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8061CE50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addic. r0, r1, 0x8
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bne lbl_fn_8061CE50_00000CAC
    li r31, -0x4
    b lbl_fn_8061CE50_00000CF4
lbl_fn_8061CE50_00000CAC:
    lwz r3, hid_8087E8D4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_fn_8061CE50_00000CD0
    li r31, -0x16
    b lbl_fn_8061CE50_00000CF4
lbl_fn_8061CE50_00000CD0:
    li r5, 0x0
    stw r5, 0x20(r3)
    li r0, 0x5
    lwz r4, 0x8(r1)
    stw r5, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r28, 0x8(r3)
lbl_fn_8061CE50_00000CF4:
    cmpwi r31, 0x0
    bne lbl_fn_8061CE50_00000D34
    lwz r3, 0x8(r1)
    li r31, 0x0
    cmpwi r3, 0x0
    bne lbl_fn_8061CE50_00000D14
    li r31, -0x4
    b lbl_fn_8061CE50_00000D1C
lbl_fn_8061CE50_00000D14:
    stw r29, 0xc(r3)
    stw r30, 0x10(r3)
lbl_fn_8061CE50_00000D1C:
    cmpwi r31, 0x0
    bne lbl_fn_8061CE50_00000D34
    lwz r3, 0x8(r1)
    li r4, 0x0
    bl __ios_Ipc2
    mr r31, r3
lbl_fn_8061CE50_00000D34:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void IOS_IoctlAsync(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    addic. r0, r1, 0x8
    mr r23, r3
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r28, r8
    mr r29, r9
    mr r30, r10
    li r31, 0x0
    bne lbl_IOS_IoctlAsync_00000DA8
    li r31, -0x4
    b lbl_IOS_IoctlAsync_00000DF0
lbl_IOS_IoctlAsync_00000DA8:
    lwz r3, hid_8087E8D4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_IOS_IoctlAsync_00000DCC
    li r31, -0x16
    b lbl_IOS_IoctlAsync_00000DF0
lbl_IOS_IoctlAsync_00000DCC:
    stw r29, 0x20(r3)
    li r5, 0x0
    li r0, 0x6
    lwz r4, 0x8(r1)
    stw r30, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r23, 0x8(r3)
lbl_IOS_IoctlAsync_00000DF0:
    cmpwi r31, 0x0
    bne lbl_IOS_IoctlAsync_00000E7C
    lwz r5, 0x8(r1)
    li r31, 0x0
    cmpwi r5, 0x0
    bne lbl_IOS_IoctlAsync_00000E10
    li r31, -0x4
    b lbl_IOS_IoctlAsync_00000E64
lbl_IOS_IoctlAsync_00000E10:
    cmpwi r27, 0x0
    stw r24, 0xc(r5)
    beq lbl_IOS_IoctlAsync_00000E24
    addis r0, r27, 0x8000
    b lbl_IOS_IoctlAsync_00000E28
lbl_IOS_IoctlAsync_00000E24:
    li r0, 0x0
lbl_IOS_IoctlAsync_00000E28:
    stw r0, 0x18(r5)
    cmpwi r25, 0x0
    stw r28, 0x1c(r5)
    beq lbl_IOS_IoctlAsync_00000E40
    addis r0, r25, 0x8000
    b lbl_IOS_IoctlAsync_00000E44
lbl_IOS_IoctlAsync_00000E40:
    li r0, 0x0
lbl_IOS_IoctlAsync_00000E44:
    stw r0, 0x10(r5)
    mr r3, r25
    mr r4, r26
    stw r26, 0x14(r5)
    bl DCFlushRange
    mr r3, r27
    mr r4, r28
    bl DCFlushRange
lbl_IOS_IoctlAsync_00000E64:
    cmpwi r31, 0x0
    bne lbl_IOS_IoctlAsync_00000E7C
    lwz r3, 0x8(r1)
    mr r4, r29
    bl __ios_Ipc2
    mr r31, r3
lbl_IOS_IoctlAsync_00000E7C:
    addi r11, r1, 0x40
    mr r3, r31
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8061D080(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    addic. r0, r1, 0x8
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    mr r30, r8
    li r31, 0x0
    bne lbl_fn_8061D080_00000EE0
    li r31, -0x4
    b lbl_fn_8061D080_00000F28
lbl_fn_8061D080_00000EE0:
    lwz r3, hid_8087E8D4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_fn_8061D080_00000F04
    li r31, -0x16
    b lbl_fn_8061D080_00000F28
lbl_fn_8061D080_00000F04:
    li r5, 0x0
    stw r5, 0x20(r3)
    li r0, 0x6
    lwz r4, 0x8(r1)
    stw r5, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r25, 0x8(r3)
lbl_fn_8061D080_00000F28:
    cmpwi r31, 0x0
    bne lbl_fn_8061D080_00000FB4
    lwz r5, 0x8(r1)
    li r31, 0x0
    cmpwi r5, 0x0
    bne lbl_fn_8061D080_00000F48
    li r31, -0x4
    b lbl_fn_8061D080_00000F9C
lbl_fn_8061D080_00000F48:
    cmpwi r29, 0x0
    stw r26, 0xc(r5)
    beq lbl_fn_8061D080_00000F5C
    addis r0, r29, 0x8000
    b lbl_fn_8061D080_00000F60
lbl_fn_8061D080_00000F5C:
    li r0, 0x0
lbl_fn_8061D080_00000F60:
    stw r0, 0x18(r5)
    cmpwi r27, 0x0
    stw r30, 0x1c(r5)
    beq lbl_fn_8061D080_00000F78
    addis r0, r27, 0x8000
    b lbl_fn_8061D080_00000F7C
lbl_fn_8061D080_00000F78:
    li r0, 0x0
lbl_fn_8061D080_00000F7C:
    stw r0, 0x10(r5)
    mr r3, r27
    mr r4, r28
    stw r28, 0x14(r5)
    bl DCFlushRange
    mr r3, r29
    mr r4, r30
    bl DCFlushRange
lbl_fn_8061D080_00000F9C:
    cmpwi r31, 0x0
    bne lbl_fn_8061D080_00000FB4
    lwz r3, 0x8(r1)
    li r4, 0x0
    bl __ios_Ipc2
    mr r31, r3
lbl_fn_8061D080_00000FB4:
    addi r11, r1, 0x30
    mr r3, r31
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8061D1B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmpwi r3, 0x0
    mr r29, r3
    mr r30, r7
    li r31, 0x0
    bne lbl_fn_8061D1B0_00001000
    li r31, -0x4
    b lbl_fn_8061D1B0_000010F0
lbl_fn_8061D1B0_00001000:
    stw r4, 0xc(r3)
    slwi r27, r5, 3
    li r26, 0x0
    li r28, 0x0
    stw r5, 0x10(r3)
    stw r6, 0x14(r3)
    stw r7, 0x18(r3)
    b lbl_fn_8061D1B0_00001064
lbl_fn_8061D1B0_00001020:
    lwz r3, 0x18(r29)
    add r0, r28, r27
    add r4, r3, r0
    lwzx r3, r3, r0
    lwz r4, 0x4(r4)
    bl DCFlushRange
    lwz r4, 0x18(r29)
    add r3, r28, r27
    lwzx r5, r4, r3
    cmpwi r5, 0x0
    beq lbl_fn_8061D1B0_00001054
    addis r0, r5, 0x8000
    b lbl_fn_8061D1B0_00001058
lbl_fn_8061D1B0_00001054:
    li r0, 0x0
lbl_fn_8061D1B0_00001058:
    stwx r0, r4, r3
    addi r28, r28, 0x8
    addi r26, r26, 0x1
lbl_fn_8061D1B0_00001064:
    lwz r0, 0x14(r29)
    cmplw r26, r0
    blt lbl_fn_8061D1B0_00001020
    li r27, 0x0
    li r28, 0x0
    b lbl_fn_8061D1B0_000010B8
lbl_fn_8061D1B0_0000107C:
    lwz r0, 0x18(r29)
    add r4, r0, r28
    lwzx r3, r28, r0
    lwz r4, 0x4(r4)
    bl DCFlushRange
    lwz r3, 0x18(r29)
    lwzx r4, r3, r28
    cmpwi r4, 0x0
    beq lbl_fn_8061D1B0_000010A8
    addis r0, r4, 0x8000
    b lbl_fn_8061D1B0_000010AC
lbl_fn_8061D1B0_000010A8:
    li r0, 0x0
lbl_fn_8061D1B0_000010AC:
    stwx r0, r3, r28
    addi r28, r28, 0x8
    addi r27, r27, 0x1
lbl_fn_8061D1B0_000010B8:
    lwz r4, 0x10(r29)
    cmplw r27, r4
    blt lbl_fn_8061D1B0_0000107C
    lwz r0, 0x14(r29)
    lwz r3, 0x18(r29)
    add r0, r4, r0
    slwi r4, r0, 3
    bl DCFlushRange
    cmpwi r30, 0x0
    beq lbl_fn_8061D1B0_000010E8
    addis r0, r30, 0x8000
    b lbl_fn_8061D1B0_000010EC
lbl_fn_8061D1B0_000010E8:
    li r0, 0x0
lbl_fn_8061D1B0_000010EC:
    stw r0, 0x18(r29)
lbl_fn_8061D1B0_000010F0:
    addi r11, r1, 0x20
    mr r3, r31
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061D2F0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    addic. r0, r1, 0x8
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    mr r30, r9
    li r31, 0x0
    bne lbl_fn_8061D2F0_00001154
    li r31, -0x4
    b lbl_fn_8061D2F0_0000119C
lbl_fn_8061D2F0_00001154:
    lwz r3, hid_8087E8D4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_fn_8061D2F0_00001178
    li r31, -0x16
    b lbl_fn_8061D2F0_0000119C
lbl_fn_8061D2F0_00001178:
    stw r29, 0x20(r3)
    li r5, 0x0
    li r0, 0x7
    lwz r4, 0x8(r1)
    stw r30, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r24, 0x8(r3)
lbl_fn_8061D2F0_0000119C:
    cmpwi r31, 0x0
    bne lbl_fn_8061D2F0_000011D8
    lwz r3, 0x8(r1)
    mr r4, r25
    mr r5, r26
    mr r6, r27
    mr r7, r28
    bl fn_8061D1B0
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8061D2F0_000011D8
    lwz r3, 0x8(r1)
    mr r4, r29
    bl __ios_Ipc2
    mr r31, r3
lbl_fn_8061D2F0_000011D8:
    addi r11, r1, 0x30
    mr r3, r31
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void IOS_Ioctlv(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    addic. r0, r1, 0x8
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    li r31, 0x0
    bne lbl_IOS_Ioctlv_0000123C
    li r31, -0x4
    b lbl_IOS_Ioctlv_00001284
lbl_IOS_Ioctlv_0000123C:
    lwz r3, hid_8087E8D4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_IOS_Ioctlv_00001260
    li r31, -0x16
    b lbl_IOS_Ioctlv_00001284
lbl_IOS_Ioctlv_00001260:
    li r5, 0x0
    stw r5, 0x20(r3)
    li r0, 0x7
    lwz r4, 0x8(r1)
    stw r5, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r26, 0x8(r3)
lbl_IOS_Ioctlv_00001284:
    cmpwi r31, 0x0
    bne lbl_IOS_Ioctlv_000012C0
    lwz r3, 0x8(r1)
    mr r4, r27
    mr r5, r28
    mr r6, r29
    mr r7, r30
    bl fn_8061D1B0
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_IOS_Ioctlv_000012C0
    lwz r3, 0x8(r1)
    li r4, 0x0
    bl __ios_Ipc2
    mr r31, r3
lbl_IOS_Ioctlv_000012C0:
    addi r11, r1, 0x30
    mr r3, r31
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8061D4C0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r30, r6
    mr r29, r7
    bl OSDisableInterrupts
    lwz r0, lbl_80880100
    cmpwi r0, 0x0
    beq lbl_fn_8061D4C0_00001324
    bl OSRestoreInterrupts
    li r31, -0xa
    b lbl_fn_8061D4C0_000015E8
lbl_fn_8061D4C0_00001324:
    li r0, 0x1
    stw r0, lbl_80880100
    bl OSRestoreInterrupts
    addic. r0, r1, 0x8
    li r31, 0x0
    bne lbl_fn_8061D4C0_00001344
    li r31, -0x4
    b lbl_fn_8061D4C0_0000138C
lbl_fn_8061D4C0_00001344:
    lwz r3, hid_8087E8D4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_fn_8061D4C0_00001368
    li r31, -0x16
    b lbl_fn_8061D4C0_0000138C
lbl_fn_8061D4C0_00001368:
    li r5, 0x0
    stw r5, 0x20(r3)
    li r0, 0x7
    lwz r4, 0x8(r1)
    stw r5, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r26, 0x8(r3)
lbl_fn_8061D4C0_0000138C:
    cmpwi r31, 0x0
    bne lbl_fn_8061D4C0_000015C0
    lwz r3, 0x8(r1)
    li r0, 0x1
    stw r3, lbl_80880108
    mr r4, r27
    mr r5, r28
    mr r6, r30
    stw r0, 0x28(r3)
    mr r7, r29
    lwz r3, 0x8(r1)
    bl fn_8061D1B0
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8061D4C0_000015C0
    lis r29, lbl_807E7740@ha
    lwz r4, 0x8(r1)
    addi r3, r29, lbl_807E7740@l
    li r5, 0x40
    bl memcpy
    addi r3, r29, lbl_807E7740@l
    stw r3, lbl_80880104
    lwz r29, 0x8(r1)
    addi r3, r3, 0x2c
    bl OSInitThreadQueue
    mr r3, r29
    li r4, 0x20
    bl DCFlushRange
    bl OSDisableInterrupts
    lis r4, __responses_807E7640@ha
    mr r30, r3
    addi r3, r4, __responses_807E7640@l
    lwz r0, __responses_807E7640@l(r4)
    lwz r3, 0x4(r3)
    li r31, 0x0
    cmplw r3, r0
    bge lbl_fn_8061D4C0_0000142C
    subfic r0, r0, 0x0
    add r0, r0, r3
    b lbl_fn_8061D4C0_00001448
lbl_fn_8061D4C0_0000142C:
    subf r4, r0, r3
    li r3, 0x30
    subi r0, r4, 0x30
    orc r3, r4, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r0, r0, 31
lbl_fn_8061D4C0_00001448:
    cmpwi r0, 0x0
    beq lbl_fn_8061D4C0_00001458
    li r31, -0x8
    b lbl_fn_8061D4C0_000014AC
lbl_fn_8061D4C0_00001458:
    lis r7, __responses_807E7640@ha
    lis r4, 0xaaab
    addi r7, r7, __responses_807E7640@l
    mr r3, r29
    lwz r5, 0xc(r7)
    subi r0, r4, 0x5555
    slwi r4, r5, 2
    add r4, r7, r4
    stw r29, 0x10(r4)
    lwz r5, 0xc(r7)
    lwz r4, 0x4(r7)
    addi r6, r5, 0x1
    mulhwu r5, r0, r6
    addi r0, r4, 0x1
    stw r0, 0x4(r7)
    srwi r5, r5, 5
    mulli r0, r5, 0x30
    subf r0, r0, r6
    stw r0, 0xc(r7)
    lwz r4, 0x8(r29)
    bl IPCiProfQueueReq
lbl_fn_8061D4C0_000014AC:
    cmpwi r31, 0x0
    beq lbl_fn_8061D4C0_000014C0
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_fn_8061D4C0_000015C0
lbl_fn_8061D4C0_000014C0:
    lwz r0, __mailboxAck_8087E8D0
    cmpwi r0, 0x0
    ble lbl_fn_8061D4C0_000015A4
    lis r4, __responses_807E7640@ha
    addi r3, r4, __responses_807E7640@l
    lwz r0, __responses_807E7640@l(r4)
    lwz r3, 0x4(r3)
    cmplw r3, r0
    bge lbl_fn_8061D4C0_000014F0
    subfic r0, r0, 0x0
    add r0, r0, r3
    b lbl_fn_8061D4C0_000014FC
lbl_fn_8061D4C0_000014F0:
    subf r0, r0, r3
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_8061D4C0_000014FC:
    cmpwi r0, 0x0
    bne lbl_fn_8061D4C0_000015A4
    lis r3, __responses_807E7640@ha
    addi r3, r3, __responses_807E7640@l
    lwz r0, 0x8(r3)
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r4, 0x10(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8061D4C0_000015A4
    lwz r0, 0x28(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8061D4C0_0000153C
    lwz r3, __mailboxAck_8087E8D0
    subi r0, r3, 0x1
    stw r0, __mailboxAck_8087E8D0
lbl_fn_8061D4C0_0000153C:
    addis r4, r4, 0x8000
    li r3, 0x0
    bl IPCWriteReg
    lis r8, __responses_807E7640@ha
    lis r3, 0xaaab
    addi r7, r8, __responses_807E7640@l
    lwz r4, __responses_807E7640@l(r8)
    lwz r6, 0x8(r7)
    subi r5, r3, 0x5555
    addi r0, r4, 0x1
    lwz r3, __mailboxAck_8087E8D0
    addi r6, r6, 0x1
    stw r0, __responses_807E7640@l(r8)
    mulhwu r4, r5, r6
    subi r0, r3, 0x1
    stw r0, __mailboxAck_8087E8D0
    li r3, 0x1
    srwi r4, r4, 5
    mulli r0, r4, 0x30
    subf r0, r0, r6
    stw r0, 0x8(r7)
    bl IPCReadReg
    rlwinm r0, r3, 0, 26, 27
    li r3, 0x1
    ori r4, r0, 0x1
    bl IPCWriteReg
lbl_fn_8061D4C0_000015A4:
    lwz r3, lbl_80880104
    addi r3, r3, 0x2c
    bl OSSleepThread
    mr r3, r30
    bl OSRestoreInterrupts
    lwz r3, lbl_80880104
    lwz r31, 0x4(r3)
lbl_fn_8061D4C0_000015C0:
    lwz r4, 0x8(r1)
    li r0, 0x0
    stw r0, lbl_80880100
    cmpwi r4, 0x0
    stw r0, lbl_80880108
    beq lbl_fn_8061D4C0_000015E8
    cmpwi r31, 0x0
    beq lbl_fn_8061D4C0_000015E8
    lwz r3, hid_8087E8D4
    bl iosFree
lbl_fn_8061D4C0_000015E8:
    addi r11, r1, 0x30
    mr r3, r31
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void iosCreateHeap(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, -0x4
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    clrlwi. r0, r29, 27
    bne lbl_iosCreateHeap_0000171C
    lis r4, lbl_807E7780@ha
    lwzu r0, lbl_807E7780@l(r4)
    li r31, 0x0
    cmpwi r0, 0x0
    beq lbl_iosCreateHeap_000016C8
    lwz r0, 0x10(r4)
    li r31, 0x1
    cmpwi r0, 0x0
    beq lbl_iosCreateHeap_000016C8
    lwz r0, 0x20(r4)
    li r31, 0x2
    cmpwi r0, 0x0
    beq lbl_iosCreateHeap_000016C8
    lwz r0, 0x30(r4)
    li r31, 0x3
    cmpwi r0, 0x0
    beq lbl_iosCreateHeap_000016C8
    lwz r0, 0x40(r4)
    li r31, 0x4
    cmpwi r0, 0x0
    beq lbl_iosCreateHeap_000016C8
    lwz r0, 0x50(r4)
    li r31, 0x5
    cmpwi r0, 0x0
    beq lbl_iosCreateHeap_000016C8
    lwz r0, 0x60(r4)
    li r31, 0x6
    cmpwi r0, 0x0
    beq lbl_iosCreateHeap_000016C8
    lwz r0, 0x70(r4)
    li r31, 0x7
    cmpwi r0, 0x0
    beq lbl_iosCreateHeap_000016C8
    li r31, 0x8
lbl_iosCreateHeap_000016C8:
    cmpwi r31, 0x8
    bne lbl_iosCreateHeap_000016D8
    li r31, -0x5
    b lbl_iosCreateHeap_0000171C
lbl_iosCreateHeap_000016D8:
    lis r5, lbl_807E7780@ha
    slwi r0, r31, 4
    addi r5, r5, lbl_807E7780@l
    lis r4, 0xbabe
    add r6, r5, r0
    li r0, 0x0
    stw r29, 0x0(r6)
    subi r5, r30, 0x10
    stw r30, 0x8(r6)
    stw r29, 0xc(r6)
    stw r4, 0x0(r29)
    lwz r4, 0xc(r6)
    stw r5, 0x4(r4)
    lwz r4, 0xc(r6)
    stw r0, 0x8(r4)
    lwz r4, 0xc(r6)
    stw r0, 0xc(r4)
lbl_iosCreateHeap_0000171C:
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061D920(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl OSDisableInterrupts
    cmpwi r29, 0x0
    beq lbl_fn_8061D920_00001914
    cmpwi r30, 0x0
    beq lbl_fn_8061D920_00001914
    subi r0, r30, 0x1
    and. r0, r30, r0
    bne lbl_fn_8061D920_00001914
    cmplwi r30, 0x20
    bge lbl_fn_8061D920_00001798
    li r30, 0x20
lbl_fn_8061D920_00001798:
    cmplwi r28, 0x7
    addi r0, r29, 0x1f
    clrrwi r29, r0, 5
    bgt lbl_fn_8061D920_000017C0
    lis r4, lbl_807E7780@ha
    slwi r0, r28, 4
    addi r4, r4, lbl_807E7780@l
    lwzux r0, r4, r0
    cmpwi r0, 0x0
    bne lbl_fn_8061D920_000017C8
lbl_fn_8061D920_000017C0:
    li r31, 0x0
    b lbl_fn_8061D920_00001914
lbl_fn_8061D920_000017C8:
    lwz r8, 0xc(r4)
    subi r6, r30, 0x1
    li r5, 0x0
    b lbl_fn_8061D920_0000182C
lbl_fn_8061D920_000017D8:
    lwz r7, 0x4(r8)
    addi r0, r8, 0x10
    and r0, r0, r6
    cmplw r7, r29
    subf r0, r0, r30
    and r0, r6, r0
    bne lbl_fn_8061D920_00001804
    cmpwi r0, 0x0
    bne lbl_fn_8061D920_00001804
    mr r5, r8
    b lbl_fn_8061D920_00001834
lbl_fn_8061D920_00001804:
    add r0, r29, r0
    cmplw r7, r0
    blt lbl_fn_8061D920_00001828
    cmpwi r5, 0x0
    beq lbl_fn_8061D920_00001824
    lwz r0, 0x4(r5)
    cmplw r7, r0
    bge lbl_fn_8061D920_00001828
lbl_fn_8061D920_00001824:
    mr r5, r8
lbl_fn_8061D920_00001828:
    lwz r8, 0xc(r8)
lbl_fn_8061D920_0000182C:
    cmpwi r8, 0x0
    bne lbl_fn_8061D920_000017D8
lbl_fn_8061D920_00001834:
    cmpwi r5, 0x0
    beq lbl_fn_8061D920_00001914
    subi r7, r30, 0x1
    addi r0, r5, 0x10
    and r0, r0, r7
    lwz r6, 0x4(r5)
    subf r0, r0, r30
    and r8, r7, r0
    add r7, r29, r8
    addi r0, r7, 0x10
    cmplw r6, r0
    ble lbl_fn_8061D920_000018A8
    add r6, r5, r29
    lis r0, 0xbabe
    add r9, r8, r6
    stw r0, 0x10(r9)
    lwz r0, 0x4(r5)
    subf r0, r29, r0
    subf r6, r8, r0
    subi r0, r6, 0x10
    stw r0, 0x14(r9)
    lwz r6, 0xc(r5)
    stw r6, 0x1c(r9)
    addi r9, r9, 0x10
    cmpwi r6, 0x0
    beq lbl_fn_8061D920_000018A0
    stw r9, 0x8(r6)
lbl_fn_8061D920_000018A0:
    stw r9, 0xc(r5)
    stw r7, 0x4(r5)
lbl_fn_8061D920_000018A8:
    lis r6, 0xbabe
    addi r0, r6, 0x1
    stw r0, 0x0(r5)
    lwz r6, 0x8(r5)
    cmpwi r6, 0x0
    beq lbl_fn_8061D920_000018CC
    lwz r0, 0xc(r5)
    stw r0, 0xc(r6)
    b lbl_fn_8061D920_000018D4
lbl_fn_8061D920_000018CC:
    lwz r0, 0xc(r5)
    stw r0, 0xc(r4)
lbl_fn_8061D920_000018D4:
    lwz r4, 0xc(r5)
    cmpwi r4, 0x0
    beq lbl_fn_8061D920_000018E8
    lwz r0, 0x8(r5)
    stw r0, 0x8(r4)
lbl_fn_8061D920_000018E8:
    li r0, 0x0
    stw r0, 0xc(r5)
    add r31, r5, r8
    cmpwi r8, 0x0
    stw r0, 0x8(r5)
    addi r31, r31, 0x10
    beq lbl_fn_8061D920_00001914
    lis r4, 0xbabe
    addi r0, r4, 0x2
    stw r0, -0x10(r31)
    stw r5, -0x8(r31)
lbl_fn_8061D920_00001914:
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void iosAllocAligned(void)
{
    nofralloc
    b fn_8061D920
}

asm void iosFree(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, -0x4
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    cmpwi r30, 0x0
    beq lbl_iosFree_00001B14
    cmplwi r29, 0x7
    bgt lbl_iosFree_000019A4
    lis r4, lbl_807E7780@ha
    slwi r0, r29, 4
    addi r4, r4, lbl_807E7780@l
    add r5, r4, r0
    lwzx r4, r4, r0
    cmpwi r4, 0x0
    bne lbl_iosFree_000019AC
lbl_iosFree_000019A4:
    li r31, -0x4
    b lbl_iosFree_00001B14
lbl_iosFree_000019AC:
    addi r0, r4, 0x10
    cmplw r30, r0
    blt lbl_iosFree_00001B14
    lwz r0, 0x8(r5)
    add r0, r4, r0
    cmplw r30, r0
    bgt lbl_iosFree_00001B14
    lwz r4, -0x10(r30)
    subi r6, r30, 0x10
    addis r0, r4, 0x4542
    cmplwi r0, 0x2
    bne lbl_iosFree_000019E0
    lwz r6, 0x8(r6)
lbl_iosFree_000019E0:
    lwz r4, 0x0(r6)
    addis r0, r4, 0x4542
    cmplwi r0, 0x1
    bne lbl_iosFree_00001B14
    lis r0, 0xbabe
    stw r0, 0x0(r6)
    lwz r4, 0xc(r5)
    mr r7, r4
    b lbl_iosFree_00001A20
    nop
lbl_iosFree_00001A08:
    lwz r0, 0xc(r7)
    cmpwi r0, 0x0
    beq lbl_iosFree_00001A28
    cmplw r0, r6
    bgt lbl_iosFree_00001A28
    mr r7, r0
lbl_iosFree_00001A20:
    cmpwi r7, 0x0
    bne lbl_iosFree_00001A08
lbl_iosFree_00001A28:
    cmpwi r7, 0x0
    beq lbl_iosFree_00001A5C
    cmplw r6, r7
    ble lbl_iosFree_00001A5C
    stw r7, 0x8(r6)
    lwz r0, 0xc(r7)
    stw r0, 0xc(r6)
    stw r6, 0xc(r7)
    lwz r4, 0xc(r6)
    cmpwi r4, 0x0
    beq lbl_iosFree_00001A7C
    stw r6, 0x8(r4)
    b lbl_iosFree_00001A7C
lbl_iosFree_00001A5C:
    stw r4, 0xc(r6)
    li r0, 0x0
    stw r6, 0xc(r5)
    stw r0, 0x8(r6)
    lwz r4, 0xc(r6)
    cmpwi r4, 0x0
    beq lbl_iosFree_00001A7C
    stw r6, 0x8(r4)
lbl_iosFree_00001A7C:
    cmpwi r6, 0x0
    beq lbl_iosFree_00001AC4
    lwz r0, 0x4(r6)
    lwz r5, 0xc(r6)
    add r4, r6, r0
    addi r0, r4, 0x10
    cmplw r5, r0
    bne lbl_iosFree_00001AC4
    lwz r4, 0xc(r5)
    stw r4, 0xc(r6)
    cmpwi r4, 0x0
    beq lbl_iosFree_00001AB0
    stw r6, 0x8(r4)
lbl_iosFree_00001AB0:
    lwz r4, 0x4(r6)
    lwz r0, 0x4(r5)
    add r4, r0, r4
    addi r0, r4, 0x10
    stw r0, 0x4(r6)
lbl_iosFree_00001AC4:
    lwz r5, 0x8(r6)
    cmpwi r5, 0x0
    beq lbl_iosFree_00001B10
    lwz r0, 0x4(r5)
    lwz r6, 0xc(r5)
    add r4, r5, r0
    addi r0, r4, 0x10
    cmplw r6, r0
    bne lbl_iosFree_00001B10
    lwz r4, 0xc(r6)
    stw r4, 0xc(r5)
    cmpwi r4, 0x0
    beq lbl_iosFree_00001AFC
    stw r5, 0x8(r4)
lbl_iosFree_00001AFC:
    lwz r4, 0x4(r5)
    lwz r0, 0x4(r6)
    add r4, r0, r4
    addi r0, r4, 0x10
    stw r0, 0x4(r5)
lbl_iosFree_00001B10:
    li r31, 0x0
lbl_iosFree_00001B14:
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
