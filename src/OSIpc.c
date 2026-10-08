#include "revolution/os.h"

extern const u16 lbl_8079DAC0[32];
extern const u16* const lbl_807A9500[];
extern void* IpcBufferHi_8087FC68;
extern void* IpcBufferLo_8087E7A0;

typedef void (*OSResetCallback)(void);
typedef void (*OSPowerCallback)(void);

extern OSResetCallback ResetCallback_8087FC8C;
extern OSPowerCallback PowerCallback_8087FC88;
extern void __OSDefaultResetCallback_805F6EC0(void);
extern void __OSDefaultPowerCallback_805F6ED0(void);
extern volatile BOOL StmEhRegistered_8087FC80;
extern u8 StmEhInBuf_807CC060[];
extern u8 StmEhOutBuf_807CC080[];
extern void __OSStateEventHandler_805F6EE0(void);
extern s32 StmEhDesc_8087FC7C;

s32 IOS_IoctlAsync(s32 fd, s32 cmd, void* in, s32 in_len, void* out, s32 out_len, void* cb, void* cb_arg);

asm const u8* fn_805F6660(const u8* src, u32* dst) {
    nofralloc
    lbz r6, 0x0(r3)
    cmpwi r6, 0x0
    beq lbl_0010
    addi r3, r3, 0x1
lbl_0010:
    rlwinm. r0, r6, 0, 24, 24
    bne lbl_0020
    li r7, 0x0
    b lbl_0070
lbl_0020:
    rlwinm r0, r6, 0, 24, 26
    cmplwi r0, 0xc0
    bne lbl_0038
    clrlwi r6, r6, 27
    li r7, 0x1
    b lbl_0070
lbl_0038:
    rlwinm r0, r6, 0, 24, 27
    cmplwi r0, 0xe0
    bne lbl_0050
    clrlwi r6, r6, 28
    li r7, 0x2
    b lbl_0070
lbl_0050:
    rlwinm r0, r6, 0, 24, 28
    cmplwi r0, 0xf0
    bne lbl_0068
    clrlwi r6, r6, 29
    li r7, 0x3
    b lbl_0070
lbl_0068:
    li r3, 0x0
    blr
lbl_0070:
    mtctr r7
    cmplwi r7, 0x0
    ble lbl_00ac
    nop
lbl_0080:
    lbz r5, 0x0(r3)
    slwi r6, r6, 6
    addi r3, r3, 0x1
    rlwinm r0, r5, 0, 24, 25
    cmplwi r0, 0x80
    beq lbl_00a0
    li r3, 0x0
    blr
lbl_00a0:
    clrlwi r0, r5, 26
    or r6, r6, r0
    bdnz lbl_0080
lbl_00ac:
    cmplwi r6, 0x7f
    bgt lbl_00c4
    cmpwi r7, 0x0
    beq lbl_00f4
    li r3, 0x0
    blr
lbl_00c4:
    cmplwi r6, 0x7ff
    bgt lbl_00dc
    cmplwi r7, 0x1
    beq lbl_00f4
    li r3, 0x0
    blr
lbl_00dc:
    cmplwi r6, 0xffff
    bgt lbl_00f4
    cmplwi r7, 0x2
    beq lbl_00f4
    li r3, 0x0
    blr
lbl_00f4:
    cmplwi r6, 0xd800
    blt lbl_010c
    cmplwi r6, 0xdfff
    bgt lbl_010c
    li r3, 0x0
    blr
lbl_010c:
    stw r6, 0x0(r4)
    blr
}

asm const u16* fn_805F6780(const u16* src, u32* dst) {
    nofralloc
    lhz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_0130
    addi r3, r3, 0x2
lbl_0130:
    cmplwi r5, 0xd800
    blt lbl_0140
    cmplwi r5, 0xdfff
    ble lbl_0148
lbl_0140:
    mr r6, r5
    b lbl_0188
lbl_0148:
    cmplwi r5, 0xdbff
    bgt lbl_0180
    lhz r0, 0x0(r3)
    addi r3, r3, 0x2
    cmplwi r0, 0xdc00
    blt lbl_0178
    cmplwi r0, 0xdfff
    bgt lbl_0178
    clrlwi r6, r0, 22
    rlwimi r6, r5, 10, 12, 21
    addis r6, r6, 0x1
    b lbl_0188
lbl_0178:
    li r3, 0x0
    blr
lbl_0180:
    li r3, 0x0
    blr
lbl_0188:
    stw r6, 0x0(r4)
    blr
}

asm u8 fn_805F67F0(u32 ucs4) {
    nofralloc
    cmplwi r3, 0xff
    ble lbl_01a0
    li r3, 0x0
    blr
lbl_01a0:
    cmplwi r3, 0x80
    blt lbl_01b0
    cmplwi r3, 0x9f
    ble lbl_01b8
lbl_01b0:
    clrlwi r3, r3, 24
    blr
lbl_01b8:
    cmplwi r3, 0x152
    blt lbl_0204
    cmplwi r3, 0x2122
    bgt lbl_0204
    lis r4, lbl_8079DAC0@ha
    li r0, 0x20
    addi r4, r4, lbl_8079DAC0@l
    li r5, 0x0
    mtctr r0
    nop
lbl_01e0:
    lhz r0, 0x0(r4)
    cmplw r3, r0
    bne lbl_01f8
    addi r0, r5, 0x80
    clrlwi r3, r0, 24
    blr
lbl_01f8:
    addi r4, r4, 0x2
    addi r5, r5, 0x1
    bdnz lbl_01e0
lbl_0204:
    li r3, 0x0
    blr
}

u16 fn_805F6870(u32 ucs4) {
    const u16* table;

    if (ucs4 >= 0x10000) {
        return 0;
    }
    table = lbl_807A9500[(ucs4 >> 8) & 0xFF];
    if (table != NULL) {
        return table[ucs4 & 0xFF];
    }
    return 0;
}

void* fn_805F68B0(void) {
    return IpcBufferHi_8087FC68;
}

void* fn_805F68C0(void) {
    return IpcBufferLo_8087E7A0;
}

void __OSInitIPCBuffer(void) {
    IpcBufferLo_8087E7A0 = *(void**)0x80003130;
    IpcBufferHi_8087FC68 = *(void**)0x80003134;
}

asm OSResetCallback fn_805F68F0(OSResetCallback callback) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl OSDisableInterrupts
    cmpwi r31, 0x0
    lwz r29, ResetCallback_8087FC8C
    mr r30, r3
    beq lbl_default_reset
    stw r31, ResetCallback_8087FC8C
    b lbl_check_registered
lbl_default_reset:
    lis r3, __OSDefaultResetCallback_805F6EC0@ha
    addi r3, r3, __OSDefaultResetCallback_805F6EC0@l
    stw r3, ResetCallback_8087FC8C
lbl_check_registered:
    lwz r0, StmEhRegistered_8087FC80
    cmpwi r0, 0x0
    bne lbl_restore_outer
    bl OSDisableInterrupts
    mr r31, r3
    lis r5, StmEhInBuf_807CC060@ha
    lis r7, StmEhOutBuf_807CC080@ha
    lis r9, __OSStateEventHandler_805F6EE0@ha
    lwz r3, StmEhDesc_8087FC7C
    addi r5, r5, StmEhInBuf_807CC060@l
    addi r7, r7, StmEhOutBuf_807CC080@l
    addi r9, r9, __OSStateEventHandler_805F6EE0@l
    li r4, 0x1000
    li r6, 0x20
    li r8, 0x20
    li r10, 0x0
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    bne lbl_reg_failed
    li r0, 0x1
    stw r0, StmEhRegistered_8087FC80
    b lbl_restore_inner
lbl_reg_failed:
    li r0, 0x0
    stw r0, StmEhRegistered_8087FC80
lbl_restore_inner:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_restore_outer:
    mr r3, r30
    bl OSRestoreInterrupts
    lis r3, __OSDefaultResetCallback_805F6EC0@ha
    addi r3, r3, __OSDefaultResetCallback_805F6EC0@l
    cmplw r29, r3
    bne lbl_ret_prev
    li r3, 0x0
    b lbl_epilogue
lbl_ret_prev:
    mr r3, r29
lbl_epilogue:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm OSPowerCallback fn_805F69E0(OSPowerCallback callback) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl OSDisableInterrupts
    cmpwi r31, 0x0
    lwz r29, PowerCallback_8087FC88
    mr r30, r3
    beq lbl_default_power
    stw r31, PowerCallback_8087FC88
    b lbl_check_registered_power
lbl_default_power:
    lis r3, __OSDefaultPowerCallback_805F6ED0@ha
    addi r3, r3, __OSDefaultPowerCallback_805F6ED0@l
    stw r3, PowerCallback_8087FC88
lbl_check_registered_power:
    lwz r0, StmEhRegistered_8087FC80
    cmpwi r0, 0x0
    bne lbl_restore_outer_power
    bl OSDisableInterrupts
    mr r31, r3
    lis r5, StmEhInBuf_807CC060@ha
    lis r7, StmEhOutBuf_807CC080@ha
    lis r9, __OSStateEventHandler_805F6EE0@ha
    lwz r3, StmEhDesc_8087FC7C
    addi r5, r5, StmEhInBuf_807CC060@l
    addi r7, r7, StmEhOutBuf_807CC080@l
    addi r9, r9, __OSStateEventHandler_805F6EE0@l
    li r4, 0x1000
    li r6, 0x20
    li r8, 0x20
    li r10, 0x0
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    bne lbl_reg_failed_power
    li r0, 0x1
    stw r0, StmEhRegistered_8087FC80
    b lbl_restore_inner_power
lbl_reg_failed_power:
    li r0, 0x0
    stw r0, StmEhRegistered_8087FC80
lbl_restore_inner_power:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_restore_outer_power:
    mr r3, r30
    bl OSRestoreInterrupts
    lis r3, __OSDefaultPowerCallback_805F6ED0@ha
    addi r3, r3, __OSDefaultPowerCallback_805F6ED0@l
    cmplw r29, r3
    bne lbl_ret_prev_power
    li r3, 0x0
    b lbl_epilogue_power
lbl_ret_prev_power:
    mr r3, r29
lbl_epilogue_power:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
