extern void _savegpr_26();
extern void _restgpr_26();
#include "revolution/os.h"

extern u8 lbl_807CC120[0x200];
extern u32 PlayRecordLastError;
extern u32 PlayRecordRetry;
extern u32 PlayRecordTerminated;
extern u32 PlayRecordTerminate;
extern u32 PlayRecordState;
extern u32 PlayRecordGet;
extern u32 PlayRecordError;
extern void PlayRecordCallback(s32, void*);
extern s32 NANDInit(void);

typedef struct NANDFileInfo {
    u8 _dummy[0x8c];
} NANDFileInfo;

extern const char lbl_807A9A10[];
extern u32 lbl_807CC320[8];

extern s32 fn_8061F8D0(const char* path, NANDFileInfo* info, u8 accType);
extern s32 fn_8061E850(NANDFileInfo* info, const void* buf, u32 length);
extern s32 fn_8061E760(NANDFileInfo* info, void* buf, u32 length);
extern s32 fn_8061FB70(NANDFileInfo* info);
extern s32 fn_8061E470(const char* path);
extern s32 fn_8061D080();

typedef void (*OSResetCallback)(void);

OSResetCallback PowerCallback;
OSResetCallback ResetCallback;
u8 Debug_BBA;

extern BOOL ResetDown;
extern BOOL StmReady;
extern s32 StmImDesc;
extern s32 StmEhDesc;
extern volatile BOOL StmEhRegistered;
extern BOOL StmVdInUse;
extern u8 StmEhInBuf[0x20];
extern u8 StmEhOutBuf[0x20];

extern const char lbl_807A9900[];
extern const char lbl_807A9914[];
extern const char lbl_807A9928[];
extern const char lbl_807A996C[];
extern u8 lbl_807CC0A0[];
extern u8 lbl_807CC0C0[];

extern void __OSStateEventHandler(s32, void*);
extern s32 IOS_Open(const char* path, u32 mode);
extern s32 IOS_IoctlAsync(s32 fd, s32 cmd, void* in_buf, u32 in_len, void* out_buf, u32 out_len, void* cb, void* cb_arg);

static void __OSDefaultResetCallback(void);
static void __OSDefaultPowerCallback(void);

asm BOOL __OSInitSTM(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, __OSDefaultPowerCallback@ha
    lis r3, __OSDefaultResetCallback@ha
    stw r0, 0x14(r1)
    addi r4, r4, __OSDefaultPowerCallback@l
    addi r3, r3, __OSDefaultResetCallback@l
    stw r31, 0xc(r1)
    li r31, 0
    stw r30, 0x8(r1)
    lwz r0, StmReady
    stw r4, PowerCallback
    cmpwi r0, 0
    stw r3, ResetCallback
    stw r31, ResetDown
    beq lbl_805F6B18
    li r3, 1
    b lbl_805F6BD0
lbl_805F6B18:
    lis r3, lbl_807A9900@ha
    stw r31, StmVdInUse
    li r4, 0
    addi r3, r3, lbl_807A9900@l
    bl IOS_Open
    cmpwi r3, 0
    stw r3, StmImDesc
    bge lbl_805F6B44
    stw r31, StmReady
    li r3, 0
    b lbl_805F6BD0
lbl_805F6B44:
    lis r3, lbl_807A9914@ha
    li r4, 0
    addi r3, r3, lbl_807A9914@l
    bl IOS_Open
    cmpwi r3, 0
    stw r3, StmEhDesc
    bge lbl_805F6B6C
    stw r31, StmReady
    li r3, 0
    b lbl_805F6BD0
lbl_805F6B6C:
    bl OSDisableInterrupts
    mr r30, r3
    lis r5, StmEhInBuf@ha
    lis r7, StmEhOutBuf@ha
    lis r9, __OSStateEventHandler@ha
    lwz r3, StmEhDesc
    addi r5, r5, StmEhInBuf@l
    addi r7, r7, StmEhOutBuf@l
    addi r9, r9, __OSStateEventHandler@l
    li r4, 0x1000
    li r6, 0x20
    li r8, 0x20
    li r10, 0
    bl IOS_IoctlAsync
    cmpwi r3, 0
    bne lbl_805F6BB8
    li r0, 1
    stw r0, StmEhRegistered
    b lbl_805F6BBC
lbl_805F6BB8:
    stw r31, StmEhRegistered
lbl_805F6BBC:
    mr r3, r30
    bl OSRestoreInterrupts
    li r0, 1
    stw r0, StmReady
    li r3, 1
lbl_805F6BD0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void __OSHotReset(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, 0xcc00
    stw r0, 0x14(r1)
    li r0, 0x0
    sth r0, 0x2002(r3)
    lwz r0, StmReady
    cmpwi r0, 0x0
    bne lbl_0040
    lis r3, lbl_807A9928@ha
    lis r5, lbl_807A996C@ha
    addi r3, r3, lbl_807A9928@l
    li r4, 0x19c
    addi r5, r5, lbl_807A996C@l
    crclr 6
    bl OSPanic
lbl_0040:
    lis r5, lbl_807CC0A0@ha
    lis r7, lbl_807CC0C0@ha
    lwz r3, StmImDesc
    addi r5, r5, lbl_807CC0A0@l
    addi r7, r7, lbl_807CC0C0@l
    li r4, 0x2001
    li r6, 0x20
    li r8, 0x20
    bl fn_8061D080
    bl OSDisableInterrupts
    bl ICFlashInvalidate
    nop
lbl_0070:
    b lbl_0070
}

s32 __OSUnRegisterStateEvent(void) {
    s32 ret;

    if (!StmEhRegistered) {
        return 0;
    }
    if (!StmReady) {
        return -6;
    }
    ret = fn_8061D080(StmImDesc, 0x3002, lbl_807CC0A0, 0x20, lbl_807CC0C0, 0x20);
    if (ret == 0) {
        StmEhRegistered = FALSE;
    }
    return ret;
}

s32 fn_805F6EB0(void) {
    StmVdInUse = 0;
    return 0;
}

static void __OSDefaultResetCallback(void) {
}

static void __OSDefaultPowerCallback(void) {
}

void fn_805F7040(void) {
    PlayRecordCallback(0, 0);
}

void __OSStartPlayRecord(void) {
    if (NANDInit() == 0) {
        PlayRecordTerminate = FALSE;
        PlayRecordGet = FALSE;
        PlayRecordState = FALSE;
        PlayRecordError = FALSE;
        PlayRecordRetry = FALSE;
        PlayRecordTerminated = FALSE;
        PlayRecordLastError = FALSE;
        PlayRecordCallback(0, 0);
    }
}

asm void __OSStopPlayRecord(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r29, lbl_807CC120@ha
    addi r29, r29, lbl_807CC120@l
    bl OSDisableInterrupts
    lwz r0, PlayRecordState
    li r4, 0x1
    stw r4, PlayRecordTerminate
    mr r26, r3
    cmpwi r0, 0x7
    beq lbl_0050
    cmpwi r0, 0x0
    beq lbl_0050
    cmpwi r0, 0x9
    beq lbl_0050
    cmpwi r0, 0x8
    bne lbl_005c
lbl_0050:
    mr r3, r26
    bl OSRestoreInterrupts
    b lbl_01cc
lbl_005c:
    cmpwi r0, 0x4
    bne lbl_00c8
    addi r3, r29, 0x80
    bl OSCancelAlarm
    mr r3, r26
    bl OSRestoreInterrupts
    bl OSGetTime
    addi r5, r29, 0x0
    li r0, 0x1f
    stw r4, 0x64(r5)
    addi r6, r5, 0x4
    li r4, 0x0
    stw r3, 0x60(r5)
    mtctr r0
    nop
lbl_0098:
    lwz r0, 0x0(r6)
    addi r6, r6, 0x4
    add r4, r4, r0
    bdnz lbl_0098
    stw r4, 0x0(r29)
    addi r3, r29, 0xb0
    addi r4, r29, 0x0
    li r5, 0x80
    bl fn_8061E850
    addi r3, r29, 0xb0
    bl fn_8061FB70
    b lbl_01cc
lbl_00c8:
    lwz r0, PlayRecordRetry
    cmpwi r0, 0x0
    beq lbl_00e8
    addi r3, r29, 0x80
    bl OSCancelAlarm
    mr r3, r26
    bl OSRestoreInterrupts
    b lbl_015c
lbl_00e8:
    bl OSRestoreInterrupts
    bl OSGetTime
    lis r5, 0x1062
    li r0, 0x0
    mr r30, r4
    mr r31, r3
    addi r26, r5, 0x4dd3
    xoris r28, r0, 0x8000
    lis r27, 0x8000
lbl_010c:
    lwz r0, PlayRecordTerminated
    cmpwi r0, 0x0
    bne lbl_015c
    bl OSGetTime
    lwz r0, 0xf8(r27)
    subfc r4, r30, r4
    subfe r3, r31, r3
    srwi r0, r0, 2
    mulhwu r0, r26, r0
    xoris r3, r3, 0x8000
    srwi r0, r0, 6
    mulli r0, r0, 0x1f4
    subfc r0, r4, r0
    subfe r3, r3, r28
    subfe r3, r28, r28
    neg. r3, r3
    beq lbl_010c
    li r0, 0x8
    stw r0, PlayRecordState
    b lbl_01d4
lbl_015c:
    lwz r0, PlayRecordState
    cmpwi r0, 0x4
    beq lbl_01cc
    bge lbl_017c
    cmpwi r0, 0x1
    beq lbl_0194
    bge lbl_0188
    b lbl_01cc
lbl_017c:
    cmpwi r0, 0x6
    beq lbl_01b8
    bge lbl_01cc
lbl_0188:
    addi r3, r29, 0xb0
    bl fn_8061FB70
    b lbl_01cc
lbl_0194:
    lwz r0, PlayRecordLastError
    cmpwi r0, 0x0
    bne lbl_01cc
    lwz r0, PlayRecordRetry
    cmpwi r0, 0x0
    bne lbl_01cc
    addi r3, r29, 0xb0
    bl fn_8061FB70
    b lbl_01cc
lbl_01b8:
    lwz r0, PlayRecordRetry
    cmpwi r0, 0x0
    beq lbl_01cc
    addi r3, r29, 0xb0
    bl fn_8061FB70
lbl_01cc:
    li r0, 0x9
    stw r0, PlayRecordState
lbl_01d4:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm BOOL __OSWriteStateFlags(const void* flags) {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    mr r4, r3
    li r5, 0x20
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    stw r30, 0x98(r1)
    lis r30, lbl_807CC320@ha
    addi r3, r30, lbl_807CC320@l
    bl memcpy
    addi r31, r30, lbl_807CC320@l
    lis r3, lbl_807A9A10@ha
    lwz r6, 0x4(r31)
    addi r3, r3, lbl_807A9A10@l
    lwz r0, 0x8(r31)
    addi r4, r1, 0x8
    li r5, 0x2
    add r6, r6, r0
    lwz r0, 0xc(r31)
    add r6, r6, r0
    lwz r0, 0x10(r31)
    add r6, r6, r0
    lwz r0, 0x14(r31)
    add r6, r6, r0
    lwz r0, 0x18(r31)
    add r6, r6, r0
    lwz r0, 0x1c(r31)
    add r6, r6, r0
    stw r6, lbl_807CC320@l(r30)
    bl fn_8061F8D0
    cmpwi r3, 0x0
    bne lbl_0d50
    mr r4, r31
    addi r3, r1, 0x8
    li r5, 0x20
    bl fn_8061E850
    cmplwi r3, 0x20
    beq lbl_0d38
    addi r3, r1, 0x8
    bl fn_8061FB70
    li r3, 0x0
    b lbl_0d5c
lbl_0d38:
    addi r3, r1, 0x8
    bl fn_8061FB70
    cmpwi r3, 0x0
    beq lbl_0d58
    li r3, 0x0
    b lbl_0d5c
lbl_0d50:
    li r3, 0x0
    b lbl_0d5c
lbl_0d58:
    li r3, 0x1
lbl_0d5c:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm BOOL __OSReadStateFlags(void* flags) {
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    li r5, 0x1
    stw r0, 0xb4(r1)
    addi r4, r1, 0x8
    stw r31, 0xac(r1)
    stw r30, 0xa8(r1)
    stw r29, 0xa4(r1)
    lis r29, lbl_807A9A10@ha
    stw r28, 0xa0(r1)
    mr r28, r3
    addi r3, r29, lbl_807A9A10@l
    bl fn_8061F8D0
    cmpwi r3, 0x0
    bne lbl_0e04
    lis r30, lbl_807CC320@ha
    addi r3, r1, 0x8
    addi r4, r30, lbl_807CC320@l
    li r5, 0x20
    bl fn_8061E760
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_8061FB70
    cmplwi r31, 0x20
    beq lbl_0e1c
    addi r3, r29, lbl_807A9A10@l
    bl fn_8061E470
    mr r3, r28
    li r4, 0x0
    li r5, 0x20
    bl memset
    li r3, 0x0
    b lbl_0e88
lbl_0e04:
    mr r3, r28
    li r4, 0x0
    li r5, 0x20
    bl memset
    li r3, 0x0
    b lbl_0e88
lbl_0e1c:
    addi r4, r30, lbl_807CC320@l
    lwz r0, lbl_807CC320@l(r30)
    lwz r5, 0x4(r4)
    lwz r3, 0x8(r4)
    add r5, r5, r3
    lwz r3, 0xc(r4)
    add r5, r5, r3
    lwz r3, 0x10(r4)
    add r5, r5, r3
    lwz r3, 0x14(r4)
    add r5, r5, r3
    lwz r3, 0x18(r4)
    add r5, r5, r3
    lwz r3, 0x1c(r4)
    add r5, r5, r3
    cmplw r0, r5
    beq lbl_0e78
    mr r3, r28
    li r4, 0x0
    li r5, 0x20
    bl memset
    li r3, 0x0
    b lbl_0e88
lbl_0e78:
    mr r3, r28
    li r5, 0x20
    bl memcpy
    li r3, 0x1
lbl_0e88:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    lwz r28, 0xa0(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}
