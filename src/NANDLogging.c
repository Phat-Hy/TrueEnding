#include "revolution/types.h"

/* External function declarations */
extern void ISFS_OpenAsync(void);
extern void OSDisableInterrupts(void);
extern void OSGetTime(void);
extern void OSRestoreInterrupts(void);
extern void OSTicksToCalendarTime(void);
extern void fn_8061B940(void);
extern void fn_8061B9F0(void);
extern void fn_8061BAC0(void);
extern void fn_8061BB80(void);
extern void fn_80622170(void);
extern void fn_806809C0(void);
extern void fn_8068236C(void);
extern void fn_80684600(void);
extern void vsnprintf(void);

/* External data declarations */
extern u8 lbl_807B11F8[];
extern u8 lbl_807B1214[];
extern u8 s_message_807EB2C0[];

/* Small data declarations */
extern u32 lbl_8087E930;
extern u32 s_callback_80880128;
extern u32 s_err_8087E934;
extern u32 s_stage_8088012C;

/* Function declarations */
void reserveFileDescriptor(void);
void NANDLoggingAddMessageAsync(void);
void asyncRoutine(void);

asm void reserveFileDescriptor(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lwz r0, lbl_8087E930
    cmpwi r0, -0xff
    bne lbl_reserveFileDescriptor_00000030
    li r0, -0xfe
    stw r0, lbl_8087E930
    li r31, 0x0
    b lbl_reserveFileDescriptor_00000034
lbl_reserveFileDescriptor_00000030:
    li r31, 0x1
lbl_reserveFileDescriptor_00000034:
    bl OSRestoreInterrupts
    cntlzw r0, r31
    lwz r31, 0xc(r1)
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void NANDLoggingAddMessageAsync(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    mr r31, r5
    stw r30, 0x88(r1)
    mr r30, r4
    stw r29, 0x84(r1)
    mr r29, r3
    bne cr1, lbl_NANDLoggingAddMessageAsync_000000A8
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_NANDLoggingAddMessageAsync_000000A8:
    stw r3, 0x8(r1)
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    bl reserveFileDescriptor
    cmpwi r3, 0x0
    bne lbl_NANDLoggingAddMessageAsync_000000DC
    li r3, 0x0
    b lbl_NANDLoggingAddMessageAsync_0000015C
lbl_NANDLoggingAddMessageAsync_000000DC:
    addi r4, r1, 0x98
    addi r0, r1, 0x8
    lis r5, 0x300
    lis r3, s_message_807EB2C0@ha
    stw r5, 0x68(r1)
    addi r6, r1, 0x68
    mr r5, r31
    addi r3, r3, s_message_807EB2C0@l
    stw r4, 0x6c(r1)
    li r4, 0x100
    stw r0, 0x70(r1)
    bl vsnprintf
    cmpwi r30, -0x75
    li r0, 0x1
    stw r29, s_callback_80880128
    stw r0, s_stage_8088012C
    beq lbl_NANDLoggingAddMessageAsync_00000128
    cmpwi r30, -0x9
    bne lbl_NANDLoggingAddMessageAsync_0000012C
lbl_NANDLoggingAddMessageAsync_00000128:
    stw r30, s_err_8087E934
lbl_NANDLoggingAddMessageAsync_0000012C:
    lis r3, lbl_807B11F8@ha
    lis r5, asyncRoutine@ha
    addi r3, r3, lbl_807B11F8@l
    li r4, 0x3
    addi r5, r5, asyncRoutine@l
    li r6, 0x0
    bl ISFS_OpenAsync
    cmpwi r3, 0x0
    bne lbl_NANDLoggingAddMessageAsync_00000158
    li r3, 0x1
    b lbl_NANDLoggingAddMessageAsync_0000015C
lbl_NANDLoggingAddMessageAsync_00000158:
    li r3, 0x0
lbl_NANDLoggingAddMessageAsync_0000015C:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void asyncRoutine(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    lis r31, s_message_807EB2C0@ha
    addi r31, r31, s_message_807EB2C0@l
    stw r30, 0x88(r1)
    mr r30, r3
    lwz r4, s_stage_8088012C
    addi r0, r4, 0x1
    stw r0, s_stage_8088012C
    cmpwi r0, 0x2
    bne lbl_asyncRoutine_00000220
    cmpwi r3, 0x0
    blt lbl_asyncRoutine_00000200
    lis r6, asyncRoutine@ha
    stw r3, lbl_8087E930
    addi r6, r6, asyncRoutine@l
    li r4, 0x0
    li r5, 0x0
    li r7, 0x0
    bl fn_8061B940
    cmpwi r3, 0x0
    beq lbl_asyncRoutine_0000062C
    lwz r12, s_callback_80880128
    cmpwi r12, 0x0
    beq lbl_asyncRoutine_0000062C
    lwz r4, s_err_8087E934
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_asyncRoutine_0000062C
lbl_asyncRoutine_00000200:
    lwz r12, s_callback_80880128
    cmpwi r12, 0x0
    beq lbl_asyncRoutine_0000062C
    lwz r4, s_err_8087E934
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_asyncRoutine_0000062C
lbl_asyncRoutine_00000220:
    cmpwi r0, 0x3
    bne lbl_asyncRoutine_00000294
    cmpwi r3, 0x0
    bne lbl_asyncRoutine_00000274
    lis r6, asyncRoutine@ha
    lwz r3, lbl_8087E930
    addi r4, r31, 0x100
    li r5, 0x100
    addi r6, r6, asyncRoutine@l
    li r7, 0x0
    bl fn_8061B9F0
    cmpwi r3, 0x0
    beq lbl_asyncRoutine_0000062C
    lwz r12, s_callback_80880128
    cmpwi r12, 0x0
    beq lbl_asyncRoutine_0000062C
    lwz r4, s_err_8087E934
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_asyncRoutine_0000062C
lbl_asyncRoutine_00000274:
    lwz r12, s_callback_80880128
    cmpwi r12, 0x0
    beq lbl_asyncRoutine_0000062C
    lwz r4, s_err_8087E934
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_asyncRoutine_0000062C
lbl_asyncRoutine_00000294:
    cmpwi r0, 0x4
    bne lbl_asyncRoutine_00000308
    cmpwi r3, 0x100
    bne lbl_asyncRoutine_000002E8
    lis r6, asyncRoutine@ha
    lwz r3, lbl_8087E930
    addi r6, r6, asyncRoutine@l
    li r4, 0x0
    li r5, 0x0
    li r7, 0x0
    bl fn_8061B940
    cmpwi r3, 0x0
    beq lbl_asyncRoutine_0000062C
    lwz r12, s_callback_80880128
    cmpwi r12, 0x0
    beq lbl_asyncRoutine_0000062C
    lwz r4, s_err_8087E934
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_asyncRoutine_0000062C
lbl_asyncRoutine_000002E8:
    lwz r12, s_callback_80880128
    cmpwi r12, 0x0
    beq lbl_asyncRoutine_0000062C
    lwz r4, s_err_8087E934
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_asyncRoutine_0000062C
lbl_asyncRoutine_00000308:
    cmpwi r0, 0x5
    bne lbl_asyncRoutine_0000046C
    cmpwi r3, 0x0
    bne lbl_asyncRoutine_0000044C
    addi r3, r31, 0x100
    li r0, 0x0
    stb r0, 0xff(r3)
    bl fn_80684600
    mr r30, r3
    addi r3, r31, 0x200
    li r4, 0x20
    li r5, 0xfe
    bl memset
    bl OSGetTime
    addi r5, r1, 0x58
    bl OSTicksToCalendarTime
    bl fn_80622170
    mr r4, r3
    addi r3, r1, 0x18
    addi r4, r4, 0x7
    li r5, 0x11
    bl fn_8068236C
    lis r3, 0x8208
    li r5, 0x2d
    addi r0, r3, 0x2083
    li r4, 0x0
    mulhw r0, r0, r30
    stb r5, 0x20(r1)
    lwz r3, 0x5c(r1)
    lis r5, lbl_807B1214@ha
    stb r4, 0x29(r1)
    addi r4, r1, 0x18
    stw r3, 0x8(r1)
    add r0, r0, r30
    srawi r0, r0, 5
    addi r6, r31, 0x0
    lwz r7, 0x58(r1)
    srwi r3, r0, 31
    add r0, r0, r3
    stw r7, 0xc(r1)
    mulli r0, r0, 0x3f
    addi r3, r31, 0x200
    stw r4, 0x10(r1)
    addi r5, r5, lbl_807B1214@l
    li r4, 0x100
    stw r6, 0x14(r1)
    subf r6, r0, r30
    lwz r8, 0x68(r1)
    addi r6, r6, 0x1
    lwz r7, 0x6c(r1)
    lwz r9, 0x64(r1)
    addi r8, r8, 0x1
    lwz r10, 0x60(r1)
    crclr 6
    bl fn_806809C0
    cmpwi r3, 0x100
    bge lbl_asyncRoutine_000003F8
    addi r4, r31, 0x200
    li r0, 0x20
    stbx r0, r4, r3
lbl_asyncRoutine_000003F8:
    addi r4, r31, 0x200
    li r3, 0xd
    li r0, 0xa
    lis r6, asyncRoutine@ha
    stb r3, 0xfe(r4)
    addi r6, r6, asyncRoutine@l
    lwz r3, lbl_8087E930
    li r5, 0x100
    stb r0, 0xff(r4)
    li r7, 0x0
    bl fn_8061BAC0
    cmpwi r3, 0x0
    beq lbl_asyncRoutine_0000062C
    lwz r12, s_callback_80880128
    cmpwi r12, 0x0
    beq lbl_asyncRoutine_0000062C
    lwz r4, s_err_8087E934
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_asyncRoutine_0000062C
lbl_asyncRoutine_0000044C:
    lwz r12, s_callback_80880128
    cmpwi r12, 0x0
    beq lbl_asyncRoutine_0000062C
    lwz r4, s_err_8087E934
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_asyncRoutine_0000062C
lbl_asyncRoutine_0000046C:
    cmpwi r0, 0x6
    bne lbl_asyncRoutine_000004EC
    cmpwi r3, 0x100
    bne lbl_asyncRoutine_000004CC
    addi r3, r31, 0x100
    bl fn_80684600
    mr r0, r3
    lis r6, asyncRoutine@ha
    lwz r3, lbl_8087E930
    slwi r4, r0, 8
    addi r6, r6, asyncRoutine@l
    li r5, 0x0
    li r7, 0x0
    bl fn_8061B940
    cmpwi r3, 0x0
    beq lbl_asyncRoutine_0000062C
    lwz r12, s_callback_80880128
    cmpwi r12, 0x0
    beq lbl_asyncRoutine_0000062C
    lwz r4, s_err_8087E934
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_asyncRoutine_0000062C
lbl_asyncRoutine_000004CC:
    lwz r12, s_callback_80880128
    cmpwi r12, 0x0
    beq lbl_asyncRoutine_0000062C
    lwz r4, s_err_8087E934
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_asyncRoutine_0000062C
lbl_asyncRoutine_000004EC:
    cmpwi r0, 0x7
    bne lbl_asyncRoutine_0000056C
    addi r3, r31, 0x100
    bl fn_80684600
    slwi r0, r3, 8
    cmpw r30, r0
    bne lbl_asyncRoutine_0000054C
    lis r6, asyncRoutine@ha
    lwz r3, lbl_8087E930
    addi r4, r31, 0x200
    li r5, 0x100
    addi r6, r6, asyncRoutine@l
    li r7, 0x0
    bl fn_8061BAC0
    cmpwi r3, 0x0
    beq lbl_asyncRoutine_0000062C
    lwz r12, s_callback_80880128
    cmpwi r12, 0x0
    beq lbl_asyncRoutine_0000062C
    lwz r4, s_err_8087E934
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_asyncRoutine_0000062C
lbl_asyncRoutine_0000054C:
    lwz r12, s_callback_80880128
    cmpwi r12, 0x0
    beq lbl_asyncRoutine_0000062C
    lwz r4, s_err_8087E934
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_asyncRoutine_0000062C
lbl_asyncRoutine_0000056C:
    cmpwi r0, 0x8
    bne lbl_asyncRoutine_000005D8
    cmpwi r3, 0x100
    bne lbl_asyncRoutine_000005B8
    lis r4, asyncRoutine@ha
    lwz r3, lbl_8087E930
    addi r4, r4, asyncRoutine@l
    li r5, 0x0
    bl fn_8061BB80
    cmpwi r3, 0x0
    beq lbl_asyncRoutine_0000062C
    lwz r12, s_callback_80880128
    cmpwi r12, 0x0
    beq lbl_asyncRoutine_0000062C
    lwz r4, s_err_8087E934
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_asyncRoutine_0000062C
lbl_asyncRoutine_000005B8:
    lwz r12, s_callback_80880128
    cmpwi r12, 0x0
    beq lbl_asyncRoutine_0000062C
    lwz r4, s_err_8087E934
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_asyncRoutine_0000062C
lbl_asyncRoutine_000005D8:
    cmpwi r0, 0x9
    bne lbl_asyncRoutine_0000062C
    cmpwi r3, 0x0
    bne lbl_asyncRoutine_00000610
    lwz r12, s_callback_80880128
    li r0, -0xff
    stw r0, lbl_8087E930
    cmpwi r12, 0x0
    beq lbl_asyncRoutine_0000062C
    lwz r4, s_err_8087E934
    li r3, 0x1
    mtctr r12
    bctrl
    b lbl_asyncRoutine_0000062C
lbl_asyncRoutine_00000610:
    lwz r12, s_callback_80880128
    cmpwi r12, 0x0
    beq lbl_asyncRoutine_0000062C
    lwz r4, s_err_8087E934
    li r3, 0x0
    mtctr r12
    bctrl
lbl_asyncRoutine_0000062C:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}
