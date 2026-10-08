#include "revolution/types.h"


extern u32 BootInfo;
extern u32 FstStart;
extern u32 MaxEntryNum;
extern u32 FstStringStart;
extern u32 lbl_8087FCD0;
extern u32 __DVDLongFileNameFlag;
extern u32 __DVDLayoutFormat;
extern u32 __DVDThreadQueue;
extern u32 lbl_8087FD00;
extern u32 __ErrorInfo[];

extern char lbl_8087E7C8[8];
extern char lbl_807A9C00[];
extern char lbl_807A9CC8[];
extern char lbl_807A9D00[];
extern char lbl_807A9D34[];
extern void* lbl_807BB380[];

extern void OSPanic(const char* file, int line, const char* msg, ...);
extern void OSReport(const char* msg, ...);
extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);
extern void OSSleepThread(void* queue);
extern void OSWakeupThread(void* queue);
extern void OSGetTick(void);

extern void _savegpr_23(void);
extern void _restgpr_23(void);
extern void _savegpr_26(void);
extern void _restgpr_26(void);
extern void _savegpr_27(void);
extern void _restgpr_27(void);

extern void fn_805FEF70(void);
extern void fn_805FE860(void);

/* Forward declarations */
void __DVDFSInit(void);
void fn_805F9EF0(void);
void fn_805FA200(void);
void fn_805FA270(void);
void fn_805FA390(void);
void fn_805FA3C0(void);
void fn_805FA4E0(void);
void fn_805FA5B0(void);
void fn_805FA5D0(void);
void fn_805FA700(void);
void fn_805FA710(void);
void fn_805FA770(void);
void fn_805FA800(void);
void fn_805FA8C0(void);


asm void __DVDFSInit(void) {
    nofralloc
    lis r3, 0x8000
    stw r3, BootInfo
    lwz r3, 0x38(r3)
    stw r3, FstStart
    cmpwi r3, 0x0
    beqlr
    lwz r0, 0x8(r3)
    stw r0, MaxEntryNum
    mulli r0, r0, 0xc
    add r0, r3, r0
    stw r0, FstStringStart
    blr
}


asm void fn_805F9EF0(void) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    mr r26, r3
    lis r31, lbl_807BB380@ha
    lwz r29, lbl_8087FCD0
    mr r28, r26
    addi r31, r31, lbl_807BB380@l
    lis r30, lbl_807A9C00@ha
lbl_005c:
    lbz r0, 0x0(r26)
    extsb. r0, r0
    bne lbl_0070
    mr r3, r29
    b lbl_0320
lbl_0070:
    cmpwi r0, 0x2f
    bne lbl_0084
    li r29, 0x0
    addi r26, r26, 0x1
    b lbl_005c
lbl_0084:
    cmpwi r0, 0x2e
    bne lbl_0100
    lbz r0, 0x1(r26)
    extsb r0, r0
    cmpwi r0, 0x2e
    bne lbl_00e0
    lbz r0, 0x2(r26)
    extsb r0, r0
    cmpwi r0, 0x2f
    bne lbl_00c4
    mulli r0, r29, 0xc
    lwz r3, FstStart
    addi r26, r26, 0x3
    add r3, r3, r0
    lwz r29, 0x4(r3)
    b lbl_005c
lbl_00c4:
    cmpwi r0, 0x0
    bne lbl_0100
    mulli r0, r29, 0xc
    lwz r3, FstStart
    add r3, r3, r0
    lwz r3, 0x4(r3)
    b lbl_0320
lbl_00e0:
    cmpwi r0, 0x2f
    bne lbl_00f0
    addi r26, r26, 0x2
    b lbl_005c
lbl_00f0:
    cmpwi r0, 0x0
    bne lbl_0100
    mr r3, r29
    b lbl_0320
lbl_0100:
    lwz r0, __DVDLongFileNameFlag
    cmpwi r0, 0x0
    bne lbl_01b4
    mr r23, r26
    li r5, 0x0
    li r4, 0x0
    b lbl_0164
    nop
lbl_0120:
    extsb r0, r3
    cmpwi r0, 0x2e
    bne lbl_0154
    subf r0, r26, r23
    cmpwi r0, 0x8
    bgt lbl_0140
    cmpwi r5, 0x1
    bne lbl_0148
lbl_0140:
    li r4, 0x1
    b lbl_0178
lbl_0148:
    addi r27, r23, 0x1
    li r5, 0x1
    b lbl_0160
lbl_0154:
    cmpwi r0, 0x20
    bne lbl_0160
    li r4, 0x1
lbl_0160:
    addi r23, r23, 0x1
lbl_0164:
    lbz r3, 0x0(r23)
    extsb. r0, r3
    beq lbl_0178
    cmpwi r0, 0x2f
    bne lbl_0120
lbl_0178:
    cmpwi r5, 0x1
    bne lbl_0190
    subf r0, r27, r23
    cmpwi r0, 0x3
    ble lbl_0190
    li r4, 0x1
lbl_0190:
    cmpwi r4, 0x0
    beq lbl_01d8
    mr r6, r28
    addi r5, r30, lbl_807A9C00@l
    la r3, lbl_8087E7C8
    li r4, 0x1c4
    crclr 4*cr1+eq
    bl OSPanic
    b lbl_01d8
lbl_01b4:
    mr r23, r26
    b lbl_01c4
    nop
lbl_01c0:
    addi r23, r23, 0x1
lbl_01c4:
    lbz r0, 0x0(r23)
    extsb. r0, r0
    beq lbl_01d8
    cmpwi r0, 0x2f
    bne lbl_01c0
lbl_01d8:
    lbz r0, 0x0(r23)
    mulli r3, r29, 0xc
    lwz r7, FstStart
    subf r8, r26, r23
    extsb r5, r0
    lwz r0, FstStringStart
    neg r4, r5
    or r5, r4, r5
    add r3, r7, r3
    lwz r4, 0x8(r3)
    srwi r25, r5, 31
    lwz r10, 0x38(r31)
    addi r3, r29, 0x1
    b lbl_02f4
lbl_0210:
    mulli r5, r3, 0xc
    lwzux r9, r5, r7
    clrrwi. r6, r9, 24
    bne lbl_0228
    cmpwi r25, 0x1
    beq lbl_02e0
lbl_0228:
    clrlwi r9, r9, 8
    mr r11, r26
    add r12, r0, r9
    b lbl_02a8
lbl_0238:
    lbz r9, 0x0(r12)
    li r29, 0x1
    addi r12, r12, 0x1
    extsb r24, r9
    cmplwi r24, 0xff
    bgt lbl_0254
    li r29, 0x0
lbl_0254:
    cmpwi r29, 0x0
    beq lbl_0260
    b lbl_0268
lbl_0260:
    lwz r9, 0x10(r10)
    lbzx r24, r9, r24
lbl_0268:
    lbz r9, 0x0(r11)
    li r23, 0x1
    addi r11, r11, 0x1
    extsb r29, r9
    cmplwi r29, 0xff
    bgt lbl_0284
    li r23, 0x0
lbl_0284:
    cmpwi r23, 0x0
    beq lbl_0290
    b lbl_0298
lbl_0290:
    lwz r9, 0x10(r10)
    lbzx r29, r9, r29
lbl_0298:
    cmpw r29, r24
    beq lbl_02a8
    li r9, 0x0
    b lbl_02d8
lbl_02a8:
    lbz r9, 0x0(r12)
    extsb. r9, r9
    bne lbl_0238
    lbz r9, 0x0(r11)
    extsb r9, r9
    cmpwi r9, 0x2f
    beq lbl_02cc
    cmpwi r9, 0x0
    bne lbl_02d4
lbl_02cc:
    li r9, 0x1
    b lbl_02d8
lbl_02d4:
    li r9, 0x0
lbl_02d8:
    cmpwi r9, 0x1
    beq lbl_0304
lbl_02e0:
    cmpwi r6, 0x0
    beq lbl_02f0
    lwz r3, 0x8(r5)
    b lbl_02f4
lbl_02f0:
    addi r3, r3, 0x1
lbl_02f4:
    cmplw r3, r4
    blt lbl_0210
    li r3, -0x1
    b lbl_0320
lbl_0304:
    cmpwi r25, 0x0
    bne lbl_0310
    b lbl_0320
lbl_0310:
    add r4, r8, r26
    mr r29, r3
    addi r26, r4, 0x1
    b lbl_005c
lbl_0320:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}


asm void fn_805FA200(void) {
    nofralloc
    cmpwi r3, 0x0
    blt lbl_0368
    lwz r0, MaxEntryNum
    cmplw r3, r0
    bge lbl_0368
    mulli r7, r3, 0xc
    lwz r3, FstStart
    lwzx r0, r3, r7
    clrrwi. r0, r0, 24
    beq lbl_0370
lbl_0368:
    li r3, 0x0
    blr
lbl_0370:
    add r3, r3, r7
    lwz r5, __DVDLayoutFormat
    lwz r6, 0x4(r3)
    li r0, 0x0
    li r3, 0x1
    srw r5, r6, r5
    stw r5, 0x30(r4)
    lwz r5, FstStart
    add r5, r5, r7
    lwz r5, 0x8(r5)
    stw r5, 0x34(r4)
    stw r0, 0x38(r4)
    stw r0, 0xc(r4)
    blr
}


asm void fn_805FA270(void) {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    mr r31, r4
    stw r30, 0x88(r1)
    mr r30, r3
    bl fn_805F9EF0
    cmpwi r3, 0x0
    bge lbl_0468
    lwz r31, lbl_8087FCD0
    addi r4, r1, 0x8
    li r5, 0x80
    mr r3, r31
    bl fn_805FA3C0
    cmplwi r3, 0x80
    bne lbl_0400
    li r0, 0x0
    stb r0, 0x87(r1)
    b lbl_0448
lbl_0400:
    mulli r0, r31, 0xc
    lwz r4, FstStart
    lwzx r0, r4, r0
    clrrwi. r0, r0, 24
    beq lbl_043c
    cmplwi r3, 0x7f
    bne lbl_042c
    addi r4, r1, 0x8
    li r0, 0x0
    stbx r0, r4, r3
    b lbl_0448
lbl_042c:
    addi r4, r1, 0x8
    li r0, 0x2f
    stbx r0, r4, r3
    addi r3, r3, 0x1
lbl_043c:
    addi r4, r1, 0x8
    li r0, 0x0
    stbx r0, r4, r3
lbl_0448:
    lis r3, lbl_807A9CC8@ha
    mr r4, r30
    addi r3, r3, lbl_807A9CC8@l
    addi r5, r1, 0x8
    crclr 4*cr1+eq
    bl OSReport
    li r3, 0x0
    b lbl_04b8
lbl_0468:
    mulli r6, r3, 0xc
    lwz r3, FstStart
    lwzx r0, r3, r6
    clrrwi. r0, r0, 24
    beq lbl_0484
    li r3, 0x0
    b lbl_04b8
lbl_0484:
    add r3, r3, r6
    lwz r4, __DVDLayoutFormat
    lwz r5, 0x4(r3)
    li r0, 0x0
    li r3, 0x1
    srw r4, r5, r4
    stw r4, 0x30(r31)
    lwz r4, FstStart
    add r4, r4, r6
    lwz r4, 0x8(r4)
    stw r4, 0x34(r31)
    stw r0, 0x38(r31)
    stw r0, 0xc(r31)
lbl_04b8:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}


asm void fn_805FA390(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_805FEF70
    lwz r0, 0x14(r1)
    li r3, 0x1
    mtlr r0
    addi r1, r1, 0x10
    blr
}


asm void fn_805FA3C0(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi cr1, r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    bne cr1, lbl_0530
    li r3, 0x0
    b lbl_05f8
lbl_0530:
    mulli r0, r3, 0xc
    lwz r5, FstStart
    lwz r4, FstStringStart
    lwzux r6, r5, r0
    clrrwi. r0, r6, 24
    clrlwi r0, r6, 8
    add r31, r4, r0
    beq lbl_0558
    lwz r4, 0x4(r5)
    b lbl_058c
lbl_0558:
    mr r4, r3
    mtctr r3
    beq cr1, lbl_058c
    nop
lbl_0568:
    lwz r0, 0x0(r5)
    clrrwi. r0, r0, 24
    beq lbl_0580
    lwz r0, 0x8(r5)
    cmplw r0, r3
    bgt lbl_058c
lbl_0580:
    subi r5, r5, 0xc
    subi r4, r4, 0x1
    bdnz lbl_0568
lbl_058c:
    mr r3, r4
    mr r4, r29
    mr r5, r30
    bl fn_805FA3C0
    cmplw r3, r30
    bne lbl_05a8
    b lbl_05f8
lbl_05a8:
    addi r6, r3, 0x1
    li r0, 0x2f
    subf r5, r6, r30
    stbx r0, r29, r3
    add r3, r29, r6
    mr r4, r5
    b lbl_05dc
    nop
lbl_05c8:
    lbz r0, 0x0(r31)
    addi r31, r31, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
    subi r4, r4, 0x1
lbl_05dc:
    cmpwi r4, 0x0
    beq lbl_05f0
    lbz r0, 0x0(r31)
    extsb. r0, r0
    bne lbl_05c8
lbl_05f0:
    subf r0, r4, r5
    add r3, r6, r0
lbl_05f8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}


asm void fn_805FA4E0(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmpwi r6, 0x0
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    blt lbl_0660
    lwz r0, 0x34(r3)
    cmplw r6, r0
    ble lbl_0678
lbl_0660:
    lis r5, lbl_807A9D00@ha
    la r3, lbl_8087E7C8
    addi r5, r5, lbl_807A9D00@l
    li r4, 0x34d
    crclr 4*cr1+eq
    bl OSPanic
lbl_0678:
    add. r4, r29, r28
    blt lbl_0690
    lwz r3, 0x34(r26)
    addi r0, r3, 0x20
    cmplw r4, r0
    blt lbl_06a8
lbl_0690:
    lis r5, lbl_807A9D00@ha
    la r3, lbl_8087E7C8
    addi r5, r5, lbl_807A9D00@l
    li r4, 0x353
    crclr 4*cr1+eq
    bl OSPanic
lbl_06a8:
    lwz r6, 0x30(r26)
    srawi r0, r29, 2
    lis r7, fn_805FA5B0@ha
    stw r30, 0x38(r26)
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r8, r31
    add r6, r6, r0
    addi r7, r7, fn_805FA5B0@l
    bl fn_805FE860
    addi r11, r1, 0x20
    li r3, 0x1
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}


asm void fn_805FA5B0(void) {
    nofralloc
    lwz r12, 0x38(r4)
    cmpwi r12, 0x0
    beqlr
    mtctr r12
    bctr
    blr
}


asm void fn_805FA5D0(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r6, 0x0
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r31, r6
    mr r30, r7
    blt lbl_074c
    lwz r0, 0x34(r3)
    cmplw r6, r0
    ble lbl_0764
lbl_074c:
    lis r5, lbl_807A9D34@ha
    la r3, lbl_8087E7C8
    addi r5, r5, lbl_807A9D34@l
    li r4, 0x393
    crclr 4*cr1+eq
    bl OSPanic
lbl_0764:
    add. r4, r31, r29
    blt lbl_077c
    lwz r3, 0x34(r27)
    addi r0, r3, 0x20
    cmplw r4, r0
    blt lbl_0794
lbl_077c:
    lis r5, lbl_807A9D34@ha
    la r3, lbl_8087E7C8
    addi r5, r5, lbl_807A9D34@l
    li r4, 0x399
    crclr 4*cr1+eq
    bl OSPanic
lbl_0794:
    lwz r6, 0x30(r27)
    srawi r0, r31, 2
    lis r7, fn_805FA700@ha
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r8, r30
    add r6, r6, r0
    addi r7, r7, fn_805FA700@l
    bl fn_805FE860
    cmpwi r3, 0x0
    bne lbl_07cc
    li r3, -0x1
    b lbl_0820
lbl_07cc:
    bl OSDisableInterrupts
    mr r31, r3
lbl_07d4:
    lwz r0, 0xc(r27)
    cmpwi r0, 0x0
    bne lbl_07e8
    lwz r30, 0x20(r27)
    b lbl_0814
lbl_07e8:
    cmpwi r0, -0x1
    bne lbl_07f8
    li r30, -0x1
    b lbl_0814
lbl_07f8:
    cmpwi r0, 0xa
    bne lbl_0808
    li r30, -0x3
    b lbl_0814
lbl_0808:
    la r3, __DVDThreadQueue
    bl OSSleepThread
    b lbl_07d4
lbl_0814:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
lbl_0820:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}


asm void fn_805FA700(void) {
    nofralloc
    la r3, __DVDThreadQueue
    b OSWakeupThread
}


asm void fn_805FA710(void) {
    nofralloc
    cmpwi r3, 0x0
    blt lbl_0878
    lwz r0, MaxEntryNum
    cmplw r3, r0
    bge lbl_0878
    mulli r6, r3, 0xc
    lwz r5, FstStart
    lwzx r0, r5, r6
    clrrwi. r0, r0, 24
    bne lbl_0880
lbl_0878:
    li r3, 0x0
    blr
lbl_0880:
    addi r0, r3, 0x1
    stw r3, 0x0(r4)
    li r3, 0x1
    stw r0, 0x4(r4)
    lwz r0, FstStart
    add r5, r0, r6
    lwz r0, 0x8(r5)
    stw r0, 0x8(r4)
    blr
}


asm void fn_805FA770(void) {
    nofralloc
    lwz r8, 0x4(r3)
    lwz r0, 0x0(r3)
    cmplw r8, r0
    ble lbl_08cc
    lwz r0, 0x8(r3)
    cmplw r0, r8
    bgt lbl_08d4
lbl_08cc:
    li r3, 0x0
    blr
lbl_08d4:
    stw r8, 0x0(r4)
    mulli r7, r8, 0xc
    lwz r5, FstStart
    lwzx r0, r5, r7
    clrrwi r5, r0, 24
    neg r0, r5
    or r0, r0, r5
    srwi r0, r0, 31
    stw r0, 0x4(r4)
    lwz r5, FstStart
    lwz r6, FstStringStart
    lwzx r0, r5, r7
    clrlwi r0, r0, 8
    add r0, r6, r0
    stw r0, 0x8(r4)
    lwz r4, FstStart
    lwzx r0, r4, r7
    clrrwi. r0, r0, 24
    beq lbl_092c
    add r4, r4, r7
    lwz r0, 0x8(r4)
    b lbl_0930
lbl_092c:
    addi r0, r8, 0x1
lbl_0930:
    stw r0, 0x4(r3)
    li r3, 0x1
    blr
}


asm void fn_805FA800(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_097c
    li r0, 0x0
    stw r0, lbl_8087FD00
lbl_097c:
    lwz r0, lbl_8087FD00
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8087FD00
    addi r30, r30, __ErrorInfo@l
    mulli r4, r0, 0x14
    lwz r0, lbl_8087FD00
    mulli r3, r3, 0x14
    add r4, r30, r4
    stw r27, 0x1c(r4)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r28, 0x20(r3)
    add r3, r30, r0
    stw r29, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8087FD00
    lwz r4, lbl_8087FD00
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8087FD00
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}


asm void fn_805FA8C0(void) {
    nofralloc
    blr
}
