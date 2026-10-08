#include "revolution/types.h"

/* External functions referenced */
extern void OSDisableInterrupts(void);
extern void OSGetTime(void);
extern void OSRestoreInterrupts(void);
extern void fn_8068236C(void);
extern void _savegpr_25(void);
extern void _restgpr_25(void);

/* External data */
extern u8 lbl_807E7800[];

/* External SBSS symbols */
extern u32 IpcNumPendingReqs_80880110;
extern u32 IpcNumUnIssuedReqs_80880114;

/* Function declarations */
void IPCiProfInit(void);
void IPCiProfQueueReq(void);
void fn_8061DE90(void);
void fn_8061DEA0(void);
void AddReqInfo(void);
void fn_8061DFD0(void);

asm void IPCiProfInit(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x0
    stw r0, 0x14(r1)
    li r0, 0x6
    stw r31, 0xc(r1)
    lis r31, lbl_807E7800@ha
    addi r31, r31, lbl_807E7800@l
    stw r3, IpcNumPendingReqs_80880110
    addi r4, r31, 0xc00
    addi r5, r31, 0xd80
    stw r3, IpcNumUnIssuedReqs_80880114
    mtctr r0
lbl_IPCiProfInit_00000034:
    stw r3, 0x4(r5)
    stw r3, 0x0(r5)
    stw r3, 0xc(r5)
    stw r3, 0x8(r5)
    stw r3, 0x14(r5)
    stw r3, 0x10(r5)
    stw r3, 0x1c(r5)
    stw r3, 0x18(r5)
    stw r3, 0x24(r5)
    stw r3, 0x20(r5)
    stw r3, 0x2c(r5)
    stw r3, 0x28(r5)
    stw r3, 0x34(r5)
    stw r3, 0x30(r5)
    stw r3, 0x3c(r5)
    stw r3, 0x38(r5)
    stw r3, 0x0(r4)
    stw r3, 0x44(r5)
    stw r3, 0x4(r4)
    stw r3, 0x40(r5)
    stw r3, 0x8(r4)
    stw r3, 0x4c(r5)
    stw r3, 0xc(r4)
    stw r3, 0x48(r5)
    stw r3, 0x10(r4)
    stw r3, 0x54(r5)
    stw r3, 0x14(r4)
    stw r3, 0x50(r5)
    stw r3, 0x18(r4)
    stw r3, 0x5c(r5)
    stw r3, 0x1c(r4)
    stw r3, 0x58(r5)
    stw r3, 0x20(r4)
    stw r3, 0x64(r5)
    stw r3, 0x24(r4)
    stw r3, 0x60(r5)
    stw r3, 0x28(r4)
    stw r3, 0x6c(r5)
    stw r3, 0x2c(r4)
    stw r3, 0x68(r5)
    stw r3, 0x30(r4)
    stw r3, 0x74(r5)
    stw r3, 0x34(r4)
    stw r3, 0x70(r5)
    stw r3, 0x38(r4)
    stw r3, 0x7c(r5)
    stw r3, 0x3c(r4)
    addi r4, r4, 0x40
    stw r3, 0x78(r5)
    addi r5, r5, 0x80
    bdnz lbl_IPCiProfInit_00000034
    addi r3, r31, 0x1080
    li r4, 0x0
    li r5, 0x1800
    bl memset
    addi r3, r31, 0x2880
    li r4, 0x0
    li r5, 0x1200
    bl memset
    addi r3, r31, 0x0
    li r4, 0x0
    li r5, 0xc00
    bl memset
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void IPCiProfQueueReq(void)
{
    nofralloc
    lwz r5, IpcNumPendingReqs_80880110
    lwz r4, IpcNumUnIssuedReqs_80880114
    addi r0, r5, 0x1
    stw r0, IpcNumPendingReqs_80880110
    addi r0, r4, 0x1
    stw r0, IpcNumUnIssuedReqs_80880114
    b AddReqInfo
}

asm void fn_8061DE90(void)
{
    nofralloc
    lwz r3, IpcNumUnIssuedReqs_80880114
    subi r0, r3, 0x1
    stw r0, IpcNumUnIssuedReqs_80880114
    blr
}

asm void fn_8061DEA0(void)
{
    nofralloc
    lwz r4, IpcNumPendingReqs_80880110
    subi r0, r4, 0x1
    stw r0, IpcNumPendingReqs_80880110
    b fn_8061DFD0
}

asm void AddReqInfo(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r30, lbl_807E7800@ha
    li r0, 0x60
    addi r30, r30, lbl_807E7800@l
    mr r25, r3
    addi r3, r30, 0xc00
    li r27, 0x0
    mtctr r0
lbl_AddReqInfo_000001C0:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_AddReqInfo_0000028C
    bl OSDisableInterrupts
    slwi r0, r27, 2
    addi r4, r30, 0xc00
    stwx r25, r4, r0
    mr r26, r3
    slwi r28, r27, 5
    addi r31, r30, 0x0
    lwz r0, 0x4(r25)
    add r29, r31, r28
    lwz r3, 0x0(r25)
    stwx r3, r31, r28
    stw r0, 0x4(r29)
    lwz r0, 0xc(r25)
    lwz r3, 0x8(r25)
    stw r3, 0x8(r29)
    stw r0, 0xc(r29)
    lwz r0, 0x14(r25)
    lwz r3, 0x10(r25)
    stw r3, 0x10(r29)
    stw r0, 0x14(r29)
    lwz r0, 0x1c(r25)
    lwz r3, 0x18(r25)
    stw r3, 0x18(r29)
    stw r0, 0x1c(r29)
    bl OSGetTime
    slwi r5, r27, 3
    addi r0, r30, 0xd80
    add r5, r0, r5
    lwz r0, 0x0(r29)
    stw r4, 0x4(r5)
    cmplwi r0, 0x1
    stw r3, 0x0(r5)
    bne lbl_AddReqInfo_00000280
    mulli r29, r27, 0x30
    add r27, r31, r28
    addi r25, r30, 0x2880
    lwz r4, 0xc(r27)
    li r5, 0x2f
    add r28, r25, r29
    mr r3, r28
    addis r4, r4, 0x8000
    bl fn_8068236C
    li r0, 0x0
    stb r0, 0x2f(r28)
    stw r28, 0xc(r27)
lbl_AddReqInfo_00000280:
    mr r3, r26
    bl OSRestoreInterrupts
    b lbl_AddReqInfo_00000298
lbl_AddReqInfo_0000028C:
    addi r3, r3, 0x4
    addi r27, r27, 0x1
    bdnz lbl_AddReqInfo_000001C0
lbl_AddReqInfo_00000298:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8061DFD0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r31, lbl_807E7800@ha
    li r0, 0x60
    addi r31, r31, lbl_807E7800@l
    mr r25, r3
    addi r5, r31, 0xc00
    li r28, 0x0
    addi r6, r31, 0x0
    mtctr r0
    nop
lbl_fn_8061DFD0_000002E8:
    lwz r0, 0x0(r5)
    cmplw r3, r0
    bne lbl_fn_8061DFD0_000003E4
    lwz r4, 0x8(r3)
    lwz r0, 0x0(r6)
    cmplw r4, r0
    bne lbl_fn_8061DFD0_000003E4
    bl OSDisableInterrupts
    slwi r30, r28, 5
    addi r0, r31, 0x0
    add r29, r0, r30
    lwzx r0, r30, r0
    mr r27, r3
    cmplwi r0, 0x1
    bne lbl_fn_8061DFD0_00000374
    lwz r0, 0x4(r25)
    cmpwi r0, 0x0
    blt lbl_fn_8061DFD0_00000374
    mulli r0, r0, 0x30
    addi r26, r31, 0x1080
    lwz r4, 0xc(r29)
    li r5, 0x2f
    add r3, r26, r0
    bl fn_8068236C
    lwz r4, 0x4(r25)
    mulli r3, r28, 0x30
    addi r0, r31, 0x2880
    li r7, 0x0
    mulli r6, r4, 0x30
    li r4, 0x0
    add r3, r0, r3
    li r5, 0x30
    add r6, r26, r6
    stb r7, 0x2f(r6)
    bl memset
lbl_fn_8061DFD0_00000374:
    lwz r0, 0x0(r29)
    cmplwi r0, 0x2
    bne lbl_fn_8061DFD0_000003A4
    addi r3, r31, 0x0
    addi r0, r31, 0x1080
    add r3, r3, r30
    li r4, 0x0
    lwz r3, 0x8(r3)
    li r5, 0x30
    mulli r3, r3, 0x30
    add r3, r0, r3
    bl memset
lbl_fn_8061DFD0_000003A4:
    slwi r0, r28, 2
    addi r3, r31, 0xc00
    li r30, 0x0
    stwx r30, r3, r0
    mr r3, r29
    li r4, 0x0
    li r5, 0x20
    bl memset
    slwi r3, r28, 3
    addi r0, r31, 0xd80
    add r4, r0, r3
    stw r30, 0x4(r4)
    mr r3, r27
    stw r30, 0x0(r4)
    bl OSRestoreInterrupts
    b lbl_fn_8061DFD0_000003F4
lbl_fn_8061DFD0_000003E4:
    addi r5, r5, 0x4
    addi r6, r6, 0x20
    addi r28, r28, 0x1
    bdnz lbl_fn_8061DFD0_000002E8
lbl_fn_8061DFD0_000003F4:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
