#include "revolution/os.h"

/* External symbols and functions */
extern const char lbl_807A9A38[];
extern const char lbl_807A9BA0[];
extern const char lbl_807A9BC0[];
extern const char lbl_807A9BD4[];
extern const char lbl_807A9BE4[];
extern u8 lbl_8087E7B0;

extern u16 lbl_80764738[];
extern u32 lbl_80764758[];

extern long long __OSExpireTime;
extern void* lbl_8087FCB8;
extern float lbl_80888540;
extern double lbl_80888548;

extern BOOL __OSExpireSetExpiredFlag;
extern void (*__OSExpireCallback)(void);
extern OSAlarm __OSExpireAlarm;
extern BOOL __OSInIPL;

extern void __OSGetIOSRev(void*);
extern s32 NWC24iPrepareShutdown(void);
extern s32 NWC24SuspendScheduler(void);
extern s32 NWC24iSynchronizeRtcCounter(u32);
extern void OSReport(const char*, ...);
extern void OSPanic(const char*, s32, const char*, ...);

extern s32 fn_8061F360(const char*, void*);
extern s32 fn_8061E520(const char*);
extern s32 fn_8061E2F0(const char*, u32, u32);
extern s32 fn_8061F960(const char*, void*, u32);
extern s32 fn_8061E850(void*, const void*, u32);
extern s32 fn_8061FB70(void*);

extern s32 ESP_InitLib(void);
extern s32 ESP_CloseLib(void);
extern s32 ESP_GetTitleId(void*);
extern s32 ESP_DiGetTicketView(u32, void*);

extern void fn_806078A0(void);
extern void fn_806078C0(void);
extern void fn_806077F0(void*, u32);
extern void fn_806077A0(void*);
extern void fn_80603FF0(void);
extern s32 fn_805F6CF0(u32, u32, u32);
extern void fn_80605140(u32);
extern void fn_80604FB0(void);
extern void OSReturnToMenu(void);
extern void fn_805F3D40(void);
extern s32 fn_805C0010(u32, u32, u32, void*);

/* Function prototypes */
void __OSInitNet(void);
BOOL fn_805F7A40(void);
BOOL fn_805F7AF0(void* buf);
BOOL OSPlayTimeIsLimited(void);
void fn_805F7C70(void);
s32 fn_805F7E30(void);
s32 __OSWriteExpiredFlagIfSet(void);
void fn_805F7F70(void* arg);
void __OSPlayTimeAlarmExpired(OSAlarm* alarm, OSContext* context);
s32 __OSGetPlayTime(void* ticket, u32* out_status, u32* out_time);
void __OSInitPlayTime(void);
u16 fn_805F8430(const void* data, u32 len);
u32 fn_805F8570(const void* data, u32 len);

/* Function 1: __OSInitNet */
asm void __OSInitNet(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r3, r1, 0x8
    stw r31, 0x1c(r1)
    lis r31, lbl_807A9A38@ha
    addi r31, r31, lbl_807A9A38@l
    bl __OSGetIOSRev
    lbz r0, 0x9(r1)
    cmplwi r0, 0x4
    ble lbl_00a0
    cmplwi r0, 0x9
    bne lbl_0038
    b lbl_00a0
lbl_0038:
    bl NWC24iPrepareShutdown
    cmpwi r3, 0x0
    beq lbl_0074
    bge lbl_0058
    mr r4, r3
    addi r3, r31, 0x0
    crclr 6
    bl OSReport
lbl_0058:
    bl NWC24SuspendScheduler
    cmpwi r3, 0x0
    bge lbl_0074
    mr r4, r3
    addi r3, r31, 0x34
    crclr 6
    bl OSReport
lbl_0074:
    lwz r0, __OSInIPL
    cmpwi r0, 0x0
    bne lbl_00a0
    li r3, 0x0
    bl NWC24iSynchronizeRtcCounter
    cmpwi r3, 0x0
    beq lbl_00a0
    mr r4, r3
    addi r3, r31, 0x68
    crclr 6
    bl OSReport
lbl_00a0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

/* Function 2: fn_805F7A40 */
asm BOOL fn_805F7A40(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_807A9BA0@ha
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r3, r3, lbl_807A9BA0@l
    bl fn_8061F360
    cmpwi r3, 0x0
    bne lbl_00f8
    lbz r0, 0xf(r1)
    cmplwi r0, 0x3f
    bne lbl_00f8
    li r3, 0x1
    b lbl_0160
lbl_00f8:
    cmpwi r3, 0x0
    bne lbl_0128
    lbz r0, 0xf(r1)
    cmplwi r0, 0x3f
    beq lbl_0128
    lis r3, lbl_807A9BA0@ha
    addi r3, r3, lbl_807A9BA0@l
    bl fn_8061E520
    cmpwi r3, 0x0
    beq lbl_0138
    li r3, 0x0
    b lbl_0160
lbl_0128:
    cmpwi r3, -0xc
    beq lbl_0138
    li r3, 0x0
    b lbl_0160
lbl_0138:
    lis r3, lbl_807A9BA0@ha
    li r4, 0x3f
    addi r3, r3, lbl_807A9BA0@l
    li r5, 0x0
    bl fn_8061E2F0
    cmpwi r3, 0x0
    beq lbl_015c
    li r3, 0x0
    b lbl_0160
lbl_015c:
    li r3, 0x1
lbl_0160:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

/* Function 3: fn_805F7AF0 */
asm BOOL fn_805F7AF0(void* buf) {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    addi r8, r3, 0x4
    li r7, 0x0
    stw r0, 0xa4(r1)
    li r0, 0x40
    stw r31, 0x9c(r1)
    mr r31, r3
    mtctr r0
lbl_0194:
    lwz r4, 0x0(r8)
    lwz r0, 0x4(r8)
    add r7, r7, r4
    lwz r4, 0x8(r8)
    add r7, r7, r0
    lwz r0, 0xc(r8)
    add r7, r7, r4
    lwz r4, 0x10(r8)
    add r7, r7, r0
    lwz r0, 0x14(r8)
    add r7, r7, r4
    lwz r4, 0x18(r8)
    add r7, r7, r0
    lwz r0, 0x1c(r8)
    add r7, r7, r4
    lwz r4, 0x20(r8)
    add r7, r7, r0
    lwz r0, 0x24(r8)
    add r7, r7, r4
    lwz r4, 0x28(r8)
    add r7, r7, r0
    lwz r0, 0x2c(r8)
    add r7, r7, r4
    lwz r4, 0x30(r8)
    add r7, r7, r0
    lwz r0, 0x34(r8)
    add r7, r7, r4
    lwz r4, 0x38(r8)
    add r7, r7, r0
    lwz r0, 0x3c(r8)
    add r7, r7, r4
    addi r8, r8, 0x40
    add r7, r7, r0
    bdnz lbl_0194
    lwz r0, 0x0(r8)
    lis r6, lbl_807A9BA0@ha
    lwz r5, 0x4(r8)
    addi r4, r1, 0x8
    add r7, r7, r0
    lwz r0, 0x8(r8)
    add r7, r7, r5
    lwz r5, 0xc(r8)
    add r7, r7, r0
    lwz r0, 0x10(r8)
    add r7, r7, r5
    lwz r5, 0x14(r8)
    add r7, r7, r0
    lwz r0, 0x18(r8)
    add r7, r7, r5
    li r5, 0x2
    add r7, r7, r0
    stw r7, 0x0(r3)
    addi r3, r6, lbl_807A9BA0@l
    bl fn_8061F960
    cmpwi r3, 0x0
    bne lbl_02b0
    mr r4, r31
    addi r3, r1, 0x8
    li r5, 0x1020
    bl fn_8061E850
    cmplwi r3, 0x1020
    beq lbl_029c
    addi r3, r1, 0x8
    bl fn_8061FB70
    li r3, 0x0
    b lbl_02b4
lbl_029c:
    addi r3, r1, 0x8
    bl fn_8061FB70
    cntlzw r0, r3
    srwi r3, r0, 5
    b lbl_02b4
lbl_02b0:
    li r3, 0x0
lbl_02b4:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm BOOL OSPlayTimeIsLimited(void) {
    nofralloc
    lwz r0, __OSExpireTime
    lwz r3, __OSExpireTime+4
    or r0, r3, r0
    subic r3, r0, 0x1
    subfe r3, r3, r0
    blr
}

/* Function 5: fn_805F7C70 */
asm void fn_805F7C70(void) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    lwz r3, lbl_8087FCB8
    lwz r12, 0x490(r3)
    cmpwi r12, 0x0
    beq lbl_0320
    mtctr r12
    bctrl 
lbl_0320:
    lwz r3, lbl_8087FCB8
    lwz r0, 0x488(r3)
    cmpwi r0, 0x0
    bne lbl_0340
    bl fn_806078A0
    lwz r4, lbl_8087FCB8
    addis r0, r3, 0x8000
    stw r0, 0x484(r4)
lbl_0340:
    lwz r3, lbl_8087FCB8
    lwz r0, 0x488(r3)
    cmplwi r0, 0x1
    bne lbl_0384
    lwz r3, 0x484(r3)
    li r4, 0x4
    bl DCInvalidateRange
    lwz r4, lbl_8087FCB8
    lwz r3, 0x484(r4)
    lha r0, 0x0(r3)
    addi r3, r3, 0x2
    sth r0, 0x48c(r4)
    stw r3, 0x484(r4)
    lwz r4, lbl_8087FCB8
    lwz r3, 0x484(r4)
    lha r0, 0x0(r3)
    sth r0, 0x48e(r4)
lbl_0384:
    lwz r3, lbl_8087FCB8
    lwz r0, 0x488(r3)
    cmplwi r0, 0x1
    blt lbl_0480
    lwz r0, 0x480(r3)
    mulli r0, r0, 0x240
    add r31, r3, r0
    mr r30, r31
    bl fn_806078C0
    mr r29, r3
    lfs f2, lbl_80888540
    lfd f1, lbl_80888548
    mr r5, r29
    lis r4, 0x4330
    b lbl_0440
lbl_03c0:
    lwz r3, lbl_8087FCB8
    subi r5, r5, 0x4
    stw r4, 0x8(r1)
    lha r0, 0x48c(r3)
    sth r0, 0x0(r30)
    lwz r3, lbl_8087FCB8
    stw r4, 0x18(r1)
    lha r0, 0x48e(r3)
    sth r0, 0x2(r30)
    addi r30, r30, 0x4
    lwz r3, lbl_8087FCB8
    lha r0, 0x48c(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
    sth r0, 0x48c(r3)
    lwz r3, lbl_8087FCB8
    lha r0, 0x48e(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f1
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r0, 0x24(r1)
    sth r0, 0x48e(r3)
lbl_0440:
    cmpwi r5, 0x0
    bne lbl_03c0
    mr r3, r31
    mr r4, r29
    bl DCFlushRange
    mr r3, r31
    mr r4, r29
    bl fn_806077F0
    lwz r4, lbl_8087FCB8
    lwz r3, 0x480(r4)
    addi r0, r3, 0x1
    stw r0, 0x480(r4)
    lwz r3, lbl_8087FCB8
    lwz r0, 0x480(r3)
    clrlwi r0, r0, 31
    stw r0, 0x480(r3)
lbl_0480:
    lwz r4, lbl_8087FCB8
    lwz r3, 0x488(r4)
    addi r0, r3, 0x1
    stw r0, 0x488(r4)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

/* Function 6: fn_805F7E30 */
asm s32 fn_805F7E30(void) {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x100
    stwux r1, r1, r11
    mflr r0
    lis r3, lbl_807A9BC0@ha
    li r5, 0x0
    stw r0, 0x4(r12)
    addi r3, r3, lbl_807A9BC0@l
    li r4, 0x3f
    stw r31, -0x4(r12)
    stw r30, -0x8(r12)
    li r30, 0x0
    bl fn_8061E2F0
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_04fc
    cmpwi r3, -0x6
    bne lbl_0584
lbl_04fc:
    lis r3, lbl_807A9BC0@ha
    addi r4, r1, 0x40
    addi r3, r3, lbl_807A9BC0@l
    li r5, 0x2
    bl fn_8061F960
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_0584
    li r30, 0x1
    bl ESP_InitLib
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_0584
    addi r3, r1, 0x20
    li r4, 0x0
    li r5, 0x20
    bl memset
    addi r3, r1, 0x20
    bl ESP_GetTitleId
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_0584
    addi r3, r1, 0x40
    addi r4, r1, 0x20
    li r5, 0x20
    bl fn_8061E850
    cmpwi r3, 0x0
    mr r31, r3
    blt lbl_0584
    cmpwi r3, 0x20
    beq lbl_0580
    li r31, -0x8
    b lbl_0584
lbl_0580:
    li r31, 0x0
lbl_0584:
    cmpwi r30, 0x0
    beq lbl_0594
    addi r3, r1, 0x40
    bl fn_8061FB70
lbl_0594:
    cmpwi r31, 0x0
    bne lbl_05a4
    li r3, 0x1
    b lbl_05a8
lbl_05a4:
    li r3, 0x0
lbl_05a8:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    mtlr r0
    mr r1, r10
    blr
}

/* Function 7: __OSWriteExpiredFlagIfSet */
s32 __OSWriteExpiredFlagIfSet(void) {
    if (__OSExpireSetExpiredFlag) {
        return fn_805F7E30();
    }
    return 0;
}

/* Function 8: fn_805F7F70 */
asm void fn_805F7F70(void* arg) {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x4e0
    stwux r1, r1, r11
    mflr r0
    li r4, 0x0
    li r5, 0x494
    stw r0, 0x4(r12)
    addi r3, r1, 0x20
    stw r31, -0x4(r12)
    stw r30, -0x8(r12)
    stw r29, -0xc(r12)
    stw r3, lbl_8087FCB8
    bl memset
    lis r3, fn_805F7C70@ha
    addi r3, r3, fn_805F7C70@l
    bl fn_806077A0
    lwz r5, lbl_8087FCB8
    lis r4, 0xcccd
    subi r31, r4, 0x3333
    li r30, 0x0
    stw r3, 0x490(r5)
lbl_0648:
    mulhwu r0, r31, r30
    srwi r3, r0, 2
    addi r29, r3, 0x1
    cmplwi r29, 0x7
    ble lbl_0660
    li r29, 0x7
lbl_0660:
    bl fn_80603FF0
    mr r4, r29
    mr r5, r29
    li r3, 0x1
    bl fn_805F6CF0
    addi r30, r30, 0x1
    cmplwi r30, 0x14
    blt lbl_0648
    li r3, 0x0
    bl fn_806077A0
    li r3, 0x1
    bl fn_80605140
    bl fn_80604FB0
    bl OSDisableInterrupts
    lwz r0, __OSExpireSetExpiredFlag
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_06ac
    bl fn_805F7E30
lbl_06ac:
    mr r3, r31
    bl OSRestoreInterrupts
    bl OSReturnToMenu
    li r3, 0x0
    lwz r10, 0x0(r1)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    lwz r29, -0xc(r10)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

/* Function 9: __OSPlayTimeAlarmExpired */
asm void __OSPlayTimeAlarmExpired(OSAlarm* alarm, OSContext* context) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r12, __OSExpireCallback
    cmpwi r12, 0x0
    beq lbl_0708
    mtctr r12
    bctrl 
    b lbl_076c
lbl_0708:
    lis r3, 0x8000
    lwz r31, 0xdc(r3)
    b lbl_0720
lbl_0714:
    mr r3, r31
    bl OSSuspendThread
    lwz r31, 0x2fc(r31)
lbl_0720:
    cmpwi r31, 0x0
    bne lbl_0714
    lis r3, 0x8000
    lis r4, fn_805F7F70@ha
    lwz r3, 0x3128(r3)
    addi r4, r4, fn_805F7F70@l
    li r5, 0x0
    li r7, 0x1000
    subi r31, r3, 0x1320
    li r8, 0x0
    li r9, 0x0
    mr r3, r31
    addi r6, r31, 0x1320
    bl OSCreateThread
    cmpwi r3, 0x0
    bne lbl_0764
    bl fn_805F3D40
lbl_0764:
    mr r3, r31
    bl OSResumeThread
lbl_076c:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

/* Function 10: __OSGetPlayTime */
asm s32 __OSGetPlayTime(void* ticket, u32* out_status, u32* out_time) {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x180
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    clrlwi. r0, r3, 27
    li r0, 0x0
    stw r31, -0x4(r12)
    mr r31, r5
    stw r30, -0x8(r12)
    li r30, 0x0
    stw r29, -0xc(r12)
    mr r29, r4
    stw r28, -0x10(r12)
    mr r28, r3
    stw r0, 0x20(r1)
    beq lbl_07dc
    mr r4, r28
    addi r3, r1, 0x80
    li r5, 0xd8
    bl memcpy
    addi r28, r1, 0x80
lbl_07dc:
    lwz r3, 0x4(r28)
    addi r6, r1, 0x20
    lwz r4, 0x8(r28)
    li r5, 0x0
    bl fn_805C0010
    cmpwi r3, 0x0
    bgt lbl_0824
    beq lbl_0800
    b lbl_0824
lbl_0800:
    lwz r0, 0x20(r1)
    cmpwi r0, 0x0
    beq lbl_0824
    lwz r3, 0x4(r28)
    addi r5, r1, 0x40
    lwz r4, 0x8(r28)
    addi r6, r1, 0x20
    bl fn_805C0010
    cmpwi r3, 0x0
lbl_0824:
    cmpwi r3, 0x0
    bne lbl_0928
    li r0, 0x8
    li r5, 0x0
    li r4, 0x0
    mtctr r0
    nop 
lbl_0840:
    add r6, r28, r4
    lwz r0, 0x98(r6)
    cmplwi r0, 0x1
    bne lbl_08a0
    li r0, 0x1
    stw r0, 0x0(r29)
    lwz r0, 0x20(r1)
    cmpwi r0, 0x0
    bne lbl_0870
    lwz r0, 0x9c(r6)
    stw r0, 0x0(r31)
    b lbl_0928
lbl_0870:
    addi r5, r1, 0x40
    lwz r0, 0x9c(r6)
    add r4, r5, r4
    lwz r4, 0x4(r4)
    cmplw r4, r0
    blt lbl_0894
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_0928
lbl_0894:
    subf r0, r4, r0
    stw r0, 0x0(r31)
    b lbl_0928
lbl_08a0:
    cmpwi r0, 0x0
    beq lbl_08ac
    addi r30, r5, 0x1
lbl_08ac:
    addi r5, r5, 0x1
    addi r4, r4, 0x8
    bdnz lbl_0840
    cmpwi r30, 0x0
    bne lbl_08d4
    li r0, 0x0
    stw r0, 0x0(r29)
    li r0, -0x1
    stw r0, 0x0(r31)
    b lbl_0928
lbl_08d4:
    subi r30, r30, 0x1
    slwi r6, r30, 3
    add r4, r28, r6
    lwz r0, 0x98(r4)
    cmplwi r0, 0x4
    bne lbl_0920
    li r0, 0x4
    stw r0, 0x0(r29)
    lwz r5, 0x9c(r4)
    stw r5, 0x0(r31)
    lwz r0, 0x20(r1)
    cmpwi r0, 0x0
    beq lbl_0928
    addi r0, r1, 0x40
    add r4, r0, r6
    lwz r0, 0x4(r4)
    subf r0, r0, r5
    stw r0, 0x0(r31)
    b lbl_0928
lbl_0920:
    li r0, 0x9
    stw r0, 0x0(r29)
lbl_0928:
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

/* Function 11: __OSInitPlayTime */
asm void __OSInitPlayTime(void) {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x140
    stwux r1, r1, r11
    mflr r0
    li r3, 0x0
    stw r0, 0x4(r12)
    li r0, 0x1
    stw r31, -0x4(r12)
    stw r3, __OSExpireTime+4
    stw r3, __OSExpireTime
    stw r3, __OSExpireCallback
    stw r0, __OSExpireSetExpiredFlag
    bl ESP_InitLib
    cmpwi r3, 0x0
    beq lbl_0994
    b lbl_0a8c
lbl_0994:
    addi r4, r1, 0x40
    li r3, 0x0
    bl ESP_DiGetTicketView
    cmpwi r3, -0x3f9
    beq lbl_09c4
    cmpwi r3, 0x0
    beq lbl_09b4
    b lbl_09c4
lbl_09b4:
    addi r3, r1, 0x40
    addi r4, r1, 0x20
    addi r5, r1, 0x24
    bl __OSGetPlayTime
lbl_09c4:
    cmpwi r3, 0x0
    beq lbl_09d8
    cmpwi r3, -0x3f9
    beq lbl_0a8c
    b lbl_0a8c
lbl_09d8:
    lwz r0, 0x20(r1)
    cmpwi r0, 0x0
    beq lbl_0a8c
    cmpwi r0, 0x1
    bne lbl_0a8c
    lwz r0, 0x24(r1)
    cmpwi r0, 0x0
    bne lbl_0a10
    lis r3, lbl_807A9BD4@ha
    li r4, 0x2e1
    addi r3, r3, lbl_807A9BD4@l
    la r5, lbl_8087E7B0
    crclr 6
    bl OSPanic
lbl_0a10:
    lis r31, __OSExpireAlarm@ha
    addi r3, r31, __OSExpireAlarm@l
    bl OSCreateAlarm
    lis r3, 0x8000
    lis r7, __OSPlayTimeAlarmExpired@ha
    lwz r0, 0xf8(r3)
    li r4, 0x14
    lwz r5, 0x24(r1)
    li r9, 0x0
    srwi r6, r0, 2
    addi r3, r31, __OSExpireAlarm@l
    addc r8, r5, r4
    addi r7, r7, __OSPlayTimeAlarmExpired@l
    adde r0, r9, r9
    mullw r5, r0, r6
    mulhwu r4, r8, r6
    mullw r0, r8, r9
    add r4, r4, r5
    mullw r6, r8, r6
    add r5, r4, r0
    bl OSSetAlarm
    addi r4, r31, __OSExpireAlarm@l
    lis r3, lbl_807A9BE4@ha
    lwz r0, 0x8(r4)
    addi r3, r3, lbl_807A9BE4@l
    lwz r4, 0xc(r4)
    stw r4, __OSExpireTime+4
    lwz r4, 0x24(r1)
    stw r0, __OSExpireTime
    crclr 6
    bl OSReport
lbl_0a8c:
    bl ESP_CloseLib
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

/* Function 12: fn_805F8430 */
asm u16 fn_805F8430(const void* data, u32 len) {
    nofralloc
    cmpwi r4, 0x0
    lis r7, lbl_80764738@ha
    li r8, 0x0
    addi r7, r7, lbl_80764738@l
    beq lbl_0bdc
    srwi. r0, r4, 2
    mtctr r0
    beq lbl_0ba0
lbl_0ad0:
    lbz r9, 0x0(r3)
    srwi r6, r8, 4
    xor r0, r8, r9
    srwi r5, r9, 4
    clrlslwi r0, r0, 28, 1
    lbz r9, 0x1(r3)
    lhzx r0, r7, r0
    xor r6, r6, r0
    xor r0, r6, r5
    srwi r5, r9, 4
    clrlslwi r0, r0, 28, 1
    srwi r6, r6, 4
    lhzx r0, r7, r0
    xor r8, r6, r0
    xor r0, r8, r9
    lbz r9, 0x2(r3)
    clrlslwi r0, r0, 28, 1
    srwi r6, r8, 4
    lhzx r0, r7, r0
    xor r6, r6, r0
    xor r0, r6, r5
    srwi r5, r9, 4
    clrlslwi r0, r0, 28, 1
    srwi r6, r6, 4
    lhzx r0, r7, r0
    xor r8, r6, r0
    xor r0, r8, r9
    lbz r9, 0x3(r3)
    clrlslwi r0, r0, 28, 1
    srwi r6, r8, 4
    lhzx r0, r7, r0
    addi r3, r3, 0x4
    xor r6, r6, r0
    xor r0, r6, r5
    srwi r5, r9, 4
    clrlslwi r0, r0, 28, 1
    srwi r6, r6, 4
    lhzx r0, r7, r0
    xor r8, r6, r0
    xor r0, r8, r9
    clrlslwi r0, r0, 28, 1
    srwi r6, r8, 4
    lhzx r0, r7, r0
    xor r6, r6, r0
    xor r0, r6, r5
    clrlslwi r0, r0, 28, 1
    srwi r6, r6, 4
    lhzx r0, r7, r0
    xor r8, r6, r0
    bdnz lbl_0ad0
lbl_0b98:
    andi. r4, r4, 0x3
    beq lbl_0bdc
lbl_0ba0:
    mtctr r4
lbl_0ba4:
    lbz r9, 0x0(r3)
    srwi r6, r8, 4
    addi r3, r3, 0x1
    xor r0, r8, r9
    srwi r5, r9, 4
    clrlslwi r0, r0, 28, 1
    lhzx r0, r7, r0
    xor r6, r6, r0
    xor r0, r6, r5
    clrlslwi r0, r0, 28, 1
    srwi r6, r6, 4
    lhzx r0, r7, r0
    xor r8, r6, r0
    bdnz lbl_0ba4
lbl_0bdc:
    clrlwi r3, r8, 16
    blr
}

/* Function 13: fn_805F8570 */
asm u32 fn_805F8570(const void* data, u32 len) {
    nofralloc
    cmpwi r4, 0x0
    lis r7, lbl_80764758@ha
    li r8, -0x1
    addi r7, r7, lbl_80764758@l
    beq lbl_0d1c
    srwi. r0, r4, 2
    mtctr r0
    beq lbl_0ce0
lbl_0c10:
    lbz r9, 0x0(r3)
    srwi r6, r8, 4
    xor r0, r8, r9
    srwi r5, r9, 4
    clrlslwi r0, r0, 28, 2
    lbz r9, 0x1(r3)
    lwzx r0, r7, r0
    xor r6, r6, r0
    xor r0, r6, r5
    srwi r5, r9, 4
    clrlslwi r0, r0, 28, 2
    srwi r6, r6, 4
    lwzx r0, r7, r0
    xor r8, r6, r0
    xor r0, r8, r9
    lbz r9, 0x2(r3)
    clrlslwi r0, r0, 28, 2
    srwi r6, r8, 4
    lwzx r0, r7, r0
    xor r6, r6, r0
    xor r0, r6, r5
    srwi r5, r9, 4
    clrlslwi r0, r0, 28, 2
    srwi r6, r6, 4
    lwzx r0, r7, r0
    xor r8, r6, r0
    xor r0, r8, r9
    lbz r9, 0x3(r3)
    clrlslwi r0, r0, 28, 2
    srwi r6, r8, 4
    lwzx r0, r7, r0
    addi r3, r3, 0x4
    xor r6, r6, r0
    xor r0, r6, r5
    srwi r5, r9, 4
    clrlslwi r0, r0, 28, 2
    srwi r6, r6, 4
    lwzx r0, r7, r0
    xor r8, r6, r0
    xor r0, r8, r9
    clrlslwi r0, r0, 28, 2
    srwi r6, r8, 4
    lwzx r0, r7, r0
    xor r6, r6, r0
    xor r0, r6, r5
    clrlslwi r0, r0, 28, 2
    srwi r6, r6, 4
    lwzx r0, r7, r0
    xor r8, r6, r0
    bdnz lbl_0c10
lbl_0cd8:
    andi. r4, r4, 0x3
    beq lbl_0d1c
lbl_0ce0:
    mtctr r4
lbl_0ce4:
    lbz r9, 0x0(r3)
    srwi r6, r8, 4
    addi r3, r3, 0x1
    xor r0, r8, r9
    srwi r5, r9, 4
    clrlslwi r0, r0, 28, 2
    lwzx r0, r7, r0
    xor r6, r6, r0
    xor r0, r6, r5
    clrlslwi r0, r0, 28, 2
    srwi r6, r6, 4
    lwzx r0, r7, r0
    xor r8, r6, r0
    bdnz lbl_0ce4
lbl_0d1c:
    nor r3, r8, r8
    blr
}
