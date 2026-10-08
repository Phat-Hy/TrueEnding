#include "revolution/types.h"

/* External functions referenced */
extern void DCInvalidateRange(void*, u32);
extern void OSClearContext(void*);
extern void OSSetCurrentContext(void*);
extern void OSWakeupThread(void*);
extern void fn_805F68B0(void);
extern void fn_805F68C0(void);
extern void fn_8061DE90(void);
extern void fn_8061DEA0(void);
extern void iosFree(void*, void*);

/* External data */
extern u8 __responses_807E7640[];

/* External SDA/SBSS symbols */
extern u32 __mailboxAck_8087E8D0;
extern u32 hid_8087E8D4;
extern u8 lbl_808800E8;
extern u32 lbl_808800EC;
extern u32 lbl_808800F0;
extern u32 lbl_808800F4;
extern u8 lbl_808800F8[8];
extern u32 lbl_80880100;
extern u32 lbl_80880104;
extern u32 lbl_80880108;

/* Function declarations */
void IPCInit(void);
void fn_8061BCF0(void);
void IPCReadReg(void);
void IPCWriteReg(void);
void IPCGetBufferHi(void);
void IPCGetBufferLo(void);
void IPCSetBufferLo(void);
void strnlen(void);
void fn_8061BDC0(void);
void IPCInterruptHandler_8061C020(void);

asm void IPCInit(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lbz r0, lbl_808800E8
    cmpwi r0, 0x0
    bne lbl_IPCInit_0000003C
    bl fn_805F68B0
    stw r3, lbl_808800F8
    bl fn_805F68C0
    lwz r4, lbl_808800F8
    li r0, 0x1
    stw r3, lbl_808800F4
    stw r4, lbl_808800F0
    stw r3, lbl_808800EC
    stb r0, lbl_808800E8
lbl_IPCInit_0000003C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8061BCF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stb r0, lbl_808800E8
    bl fn_805F68B0
    stw r3, lbl_808800F8
    bl fn_805F68C0
    lwz r4, lbl_808800F8
    li r0, 0x1
    stw r3, lbl_808800F4
    stw r4, lbl_808800F0
    stw r3, lbl_808800EC
    stb r0, lbl_808800E8
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void IPCReadReg(void)
{
    nofralloc
    slwi r0, r3, 2
    lis r3, 0xcd00
    lwzx r3, r3, r0
    blr
}

asm void IPCWriteReg(void)
{
    nofralloc
    slwi r0, r3, 2
    lis r3, 0xcd00
    stwx r4, r3, r0
    blr
}

asm void IPCGetBufferHi(void)
{
    nofralloc
    lwz r3, lbl_808800F0
    blr
}

asm void IPCGetBufferLo(void)
{
    nofralloc
    lwz r3, lbl_808800EC
    blr
}

asm void IPCSetBufferLo(void)
{
    nofralloc
    stw r3, lbl_808800EC
    blr
}

asm void strnlen(void)
{
    nofralloc
    mr r5, r3
    b lbl_strnlen_000000FC
lbl_strnlen_000000F8:
    addi r5, r5, 0x1
lbl_strnlen_000000FC:
    lbz r0, 0x0(r5)
    cmpwi r0, 0x0
    beq lbl_strnlen_00000114
    cmpwi r4, 0x0
    subi r4, r4, 0x1
    bne lbl_strnlen_000000F8
lbl_strnlen_00000114:
    subf r3, r3, r5
    blr
}

asm void fn_8061BDC0(void)
{
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    li r3, 0x2
    stw r0, 0x2e4(r1)
    stw r31, 0x2dc(r1)
    stw r30, 0x2d8(r1)
    mr r30, r4
    stw r29, 0x2d4(r1)
    stw r28, 0x2d0(r1)
    bl IPCReadReg
    cmpwi r3, 0x0
    beq lbl_fn_8061BDC0_00000358
    addis r31, r3, 0x8000
    li r3, 0x1
    bl IPCReadReg
    rlwinm r0, r3, 0, 26, 27
    li r3, 0x1
    ori r4, r0, 0x4
    bl IPCWriteReg
    lis r3, 0xcd00
    lis r0, 0x4000
    stw r0, 0x30(r3)
    mr r3, r31
    li r4, 0x20
    bl DCInvalidateRange
    lwz r0, 0x8(r31)
    cmpwi r0, 0x6
    beq lbl_fn_8061BDC0_000001E0
    bge lbl_fn_8061BDC0_000001A0
    cmpwi r0, 0x3
    beq lbl_fn_8061BDC0_000001AC
    b lbl_fn_8061BDC0_000002DC
lbl_fn_8061BDC0_000001A0:
    cmpwi r0, 0x8
    bge lbl_fn_8061BDC0_000002DC
    b lbl_fn_8061BDC0_00000218
lbl_fn_8061BDC0_000001AC:
    lwz r3, 0xc(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8061BDC0_000001C0
    addis r0, r3, 0x8000
    b lbl_fn_8061BDC0_000001C4
lbl_fn_8061BDC0_000001C0:
    li r0, 0x0
lbl_fn_8061BDC0_000001C4:
    stw r0, 0xc(r31)
    lwz r4, 0x4(r31)
    cmpwi r4, 0x0
    ble lbl_fn_8061BDC0_000002DC
    lwz r3, 0xc(r31)
    bl DCInvalidateRange
    b lbl_fn_8061BDC0_000002DC
lbl_fn_8061BDC0_000001E0:
    lwz r3, 0x18(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8061BDC0_000001F4
    addis r0, r3, 0x8000
    b lbl_fn_8061BDC0_000001F8
lbl_fn_8061BDC0_000001F4:
    li r0, 0x0
lbl_fn_8061BDC0_000001F8:
    stw r0, 0x18(r31)
    lwz r3, 0x10(r31)
    lwz r4, 0x14(r31)
    bl DCInvalidateRange
    lwz r3, 0x18(r31)
    lwz r4, 0x1c(r31)
    bl DCInvalidateRange
    b lbl_fn_8061BDC0_000002DC
lbl_fn_8061BDC0_00000218:
    lwz r3, 0x18(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8061BDC0_0000022C
    addis r3, r3, 0x8000
    b lbl_fn_8061BDC0_00000230
lbl_fn_8061BDC0_0000022C:
    li r3, 0x0
lbl_fn_8061BDC0_00000230:
    stw r3, 0x18(r31)
    lwz r4, 0x10(r31)
    lwz r0, 0x14(r31)
    add r0, r4, r0
    slwi r4, r0, 3
    bl DCInvalidateRange
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_8061BDC0_00000294
lbl_fn_8061BDC0_00000254:
    lwz r3, 0x18(r31)
    lwzx r3, r3, r29
    cmpwi r3, 0x0
    beq lbl_fn_8061BDC0_0000026C
    addis r0, r3, 0x8000
    b lbl_fn_8061BDC0_00000270
lbl_fn_8061BDC0_0000026C:
    li r0, 0x0
lbl_fn_8061BDC0_00000270:
    lwz r3, 0x18(r31)
    stwx r0, r3, r29
    lwz r3, 0x18(r31)
    add r4, r3, r29
    lwzx r3, r3, r29
    lwz r4, 0x4(r4)
    bl DCInvalidateRange
    addi r28, r28, 0x1
    addi r29, r29, 0x8
lbl_fn_8061BDC0_00000294:
    lwz r3, 0x10(r31)
    lwz r0, 0x14(r31)
    add r0, r3, r0
    cmplw r28, r0
    blt lbl_fn_8061BDC0_00000254
    lwz r0, lbl_80880100
    cmpwi r0, 0x0
    beq lbl_fn_8061BDC0_000002DC
    lwz r0, lbl_80880108
    cmplw r0, r31
    bne lbl_fn_8061BDC0_000002DC
    lwz r3, __mailboxAck_8087E8D0
    li r0, 0x0
    stw r0, lbl_80880100
    cmpwi r3, 0x1
    bge lbl_fn_8061BDC0_000002DC
    addi r0, r3, 0x1
    stw r0, __mailboxAck_8087E8D0
lbl_fn_8061BDC0_000002DC:
    lwz r0, 0x20(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8061BDC0_0000032C
    addi r3, r1, 0x8
    bl OSClearContext
    addi r3, r1, 0x8
    bl OSSetCurrentContext
    lwz r12, 0x20(r31)
    lwz r3, 0x4(r31)
    lwz r4, 0x24(r31)
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    bl OSClearContext
    mr r3, r30
    bl OSSetCurrentContext
    lwz r3, hid_8087E8D4
    mr r4, r31
    bl iosFree
    b lbl_fn_8061BDC0_00000334
lbl_fn_8061BDC0_0000032C:
    addi r3, r31, 0x2c
    bl OSWakeupThread
lbl_fn_8061BDC0_00000334:
    li r3, 0x1
    bl IPCReadReg
    rlwinm r0, r3, 0, 26, 27
    li r3, 0x1
    ori r4, r0, 0x8
    bl IPCWriteReg
    lwz r4, 0x8(r31)
    mr r3, r31
    bl fn_8061DEA0
lbl_fn_8061BDC0_00000358:
    lwz r0, 0x2e4(r1)
    lwz r31, 0x2dc(r1)
    lwz r30, 0x2d8(r1)
    lwz r29, 0x2d4(r1)
    lwz r28, 0x2d0(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

asm void IPCInterruptHandler_8061C020(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x1
    bl IPCReadReg
    andi. r0, r3, 0x14
    cmplwi r0, 0x14
    bne lbl_IPCInterruptHandler_8061C020_000003BC
    mr r3, r30
    mr r4, r31
    bl fn_8061BDC0
lbl_IPCInterruptHandler_8061C020_000003BC:
    li r3, 0x1
    bl IPCReadReg
    andi. r0, r3, 0x22
    cmplwi r0, 0x22
    bne lbl_IPCInterruptHandler_8061C020_00000528
    li r3, 0x1
    bl IPCReadReg
    rlwinm r0, r3, 0, 26, 27
    li r3, 0x1
    ori r4, r0, 0x2
    bl IPCWriteReg
    lis r3, 0xcd00
    lis r0, 0x4000
    stw r0, 0x30(r3)
    lwz r31, __mailboxAck_8087E8D0
    cmpwi r31, 0x1
    bge lbl_IPCInterruptHandler_8061C020_0000040C
    addi r31, r31, 0x1
    stw r31, __mailboxAck_8087E8D0
    bl fn_8061DE90
lbl_IPCInterruptHandler_8061C020_0000040C:
    cmpwi r31, 0x0
    ble lbl_IPCInterruptHandler_8061C020_00000528
    lwz r0, lbl_80880100
    cmpwi r0, 0x0
    beq lbl_IPCInterruptHandler_8061C020_00000454
    lwz r3, lbl_80880104
    li r0, 0x0
    stw r0, 0x4(r3)
    lwz r3, lbl_80880104
    stw r0, lbl_80880100
    addi r3, r3, 0x2c
    bl OSWakeupThread
    li r3, 0x1
    bl IPCReadReg
    rlwinm r0, r3, 0, 26, 27
    li r3, 0x1
    ori r4, r0, 0x8
    bl IPCWriteReg
lbl_IPCInterruptHandler_8061C020_00000454:
    lis r4, __responses_807E7640@ha
    addi r3, r4, __responses_807E7640@l
    lwz r4, __responses_807E7640@l(r4)
    lwz r0, 0x4(r3)
    cmplw r0, r4
    bge lbl_IPCInterruptHandler_8061C020_00000474
    subf r0, r4, r0
    b lbl_IPCInterruptHandler_8061C020_00000480
lbl_IPCInterruptHandler_8061C020_00000474:
    subf r0, r4, r0
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_IPCInterruptHandler_8061C020_00000480:
    cmpwi r0, 0x0
    bne lbl_IPCInterruptHandler_8061C020_00000528
    lis r3, __responses_807E7640@ha
    addi r3, r3, __responses_807E7640@l
    lwz r0, 0x8(r3)
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r4, 0x10(r3)
    cmpwi r4, 0x0
    beq lbl_IPCInterruptHandler_8061C020_00000528
    lwz r0, 0x28(r4)
    cmpwi r0, 0x0
    beq lbl_IPCInterruptHandler_8061C020_000004C0
    lwz r3, __mailboxAck_8087E8D0
    subi r0, r3, 0x1
    stw r0, __mailboxAck_8087E8D0
lbl_IPCInterruptHandler_8061C020_000004C0:
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
lbl_IPCInterruptHandler_8061C020_00000528:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
