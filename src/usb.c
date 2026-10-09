#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void DCFlushRange(void);
extern void DCInvalidateRange(void);
extern void IOS_Ioctlv(void);
extern void IOS_Open(void);
extern void IPCGetBufferHi(void);
extern void IPCGetBufferLo(void);
extern void IPCSetBufferLo(void);
extern void OSCancelAlarm(void);
extern void OSCreateAlarm(void);
extern void OSDisableInterrupts(void);
extern void OSGetTime(void);
extern void OSInitThreadQueue(void);
extern void OSRegisterShutdownFunction(void);
extern void OSRegisterVersion(void);
extern void OSReport(const char* msg, ...);
extern void OSRestoreInterrupts(void);
extern void OSWakeupThread(void);
extern void SCCheckStatus(void);
extern void __OSGetSystemTime(void);
extern void __div2i(void);
extern void _restgpr_14(void);
extern void _restgpr_20(void);
extern void _restgpr_21(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_20(void);
extern void _savegpr_21(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_805EBFD0(void);
extern void fn_805EC060(void);
extern void fn_805EC3B0(void);
extern void fn_805EDC80(void);
extern void fn_806056C0(void);
extern void fn_8061C7E0(void);
extern void fn_8061D2F0(void);
extern void fn_80624B90(void);
extern void fn_80624C00(void);
extern void fn_80624C70(void);
extern void fn_80624CD0(void);
extern void fn_80626AC0(void);
extern void fn_8062CDA4(void);
extern void fn_8062F278(void);
extern void fn_8062F41C(void);
extern void fn_806317D8(void);
extern void fn_8065B8E0(void);
extern void fn_806605C0(void);
extern void fn_80660A50(void);
extern void fn_80665F80(void);
extern void fn_80667130(void);
extern void fn_8066DF70(void);
extern void fn_806716B0(void);
extern void fn_806717C0(void);
extern void fn_80671810(void);
extern void fn_80671A20(void);
extern void fn_80671B20(void);
extern void fn_80671CC0(void);
extern void fn_80671CE0(void);
extern void fn_80671D70(void);
extern void fn_80671E00(void);
extern void fn_80671EC0(void);
extern void fn_80671F10(void);
extern void fn_80671F60(void);
extern void fn_80673210(void);
extern void fn_80673CB0(void);
extern void fn_80673E20(void);
extern void fn_80673F00(void);
extern void fn_806809C0(void);
extern void iosAllocAligned(void);
extern void iosCreateHeap(void);
extern void iosFree(void);
extern void vprintf(void);

/* External data declarations */
extern u8 jumptable_807B9320[];
extern u8 jumptable_807B9368[];
extern u8 lbl_807B8A98[];
extern u8 lbl_807B9310[];
extern u8 lbl_80829DC0[];
extern u8 lbl_80829DF0[];
extern u8 lbl_80829E00[];

/* Small data declarations */
extern u32 lbl_8087EBA8;
extern u32 lbl_8087EBAC;
extern u32 lbl_8087EBB8;
extern u32 lbl_8087EBBC;
extern u32 lbl_8087EBC0;
extern u32 lbl_8087EBC8;
extern u32 lbl_8087FC4C;
extern u32 lbl_808801F0;
extern u32 lbl_808801F4;
extern u32 lbl_80880200;
extern u32 lbl_80880202;
extern u32 lbl_80880204;
extern u32 lbl_80880206;
extern u32 lbl_80880208;
extern u32 lbl_8088020C;
extern u32 lbl_80880210;
extern u32 lbl_80880214;
extern u32 lbl_80880218;
extern u32 lbl_8088021C;
extern u32 lbl_80880220;
extern u32 lbl_80880224;
extern u32 lbl_80880228;
extern u32 lbl_8088022C;
extern u32 lbl_80880230;
extern u32 lbl_80880234;
extern u32 lbl_80880238;
extern u32 lbl_8088023C;
extern u32 lbl_80880240;
extern u32 lbl_80880244;
extern u32 lbl_80880248;
extern u32 lbl_8088024C;
extern u32 lbl_80880250;
extern u32 lbl_80880254;
extern u32 lbl_80880258;
extern u32 lbl_8088025C;
extern u32 lbl_80880260;
extern u32 lbl_80880264;
extern u32 lbl_80880268;
extern u32 lbl_80880269;
extern u32 lbl_8088026A;
extern u32 lbl_8088026B;
extern u32 lbl_8088026C;
extern u32 lbl_80880270;
extern u32 lbl_80880271;
extern u32 lbl_80880272;
extern u32 lbl_80880274;
extern u32 lbl_80880278;

/* Function declarations */
void fn_8065B990(void);
void fn_8065BA40(void);
void fn_8065BB40(void);
void fn_8065BB50(void);
void fn_8065BCF0(void);
void fn_8065BE40(void);
void fn_8065BF70(void);
void fn_8065C2D0(void);
void fn_8065C630(void);
void fn_8065C6B0(void);
void fn_8065C750(void);
void fn_8065C7F0(void);
void fn_8065CDA0(void);
void fn_8065CE30(void);
void fn_8065CE40(void);
void fn_8065CE50(void);
void fn_8065CE60(void);
void fn_8065CE70(void);
void fn_8065CE80(void);
void fn_8065CE90(void);
void fn_8065CEA0(void);
void fn_8065CEB0(void);
void fn_8065CEC0(void);
void fn_8065CED0(void);
void fn_8065CEE0(void);
void fn_8065CEF0(void);
void fn_8065CF00(void);
void fn_8065CF10(void);
void fn_8065CF20(void);
void fn_8065CF30(void);
void fn_8065D0E0(void);
void fn_8065D100(void);
void fn_8065D2D0(void);
void fn_8065D3E0(void);
void fn_8065D460(void);
void fn_8065E1A0(void);
void fn_8065E290(void);
void fn_8065E430(void);
void fn_8065EE80(void);
void fn_8065EEA0(void);
void fn_8065F1E0(void);
void fn_8065F490(void);
void fn_8065F500(void);
void fn_8065F510(void);
void fn_8065F520(void);
void fn_8065F530(void);
void fn_8065F540(void);
void fn_8065F550(void);
void fn_8065F5A0(void);
void fn_8065F5E0(void);
void fn_8065F6B0(void);
void fn_8065F7A0(void);
void fn_8065F8D0(void);

asm void fn_8065B990(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r3
    bne cr1, lbl_fn_8065B990_00000038
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_8065B990_00000038:
    lbz r0, lbl_8087EBAC
    stw r3, 0x8(r1)
    cmpwi r0, 0x0
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    beq lbl_fn_8065B990_00000098
    lis r3, lbl_807B8A98@ha
    addi r3, r3, lbl_807B8A98@l
    crclr 6
    bl OSReport
    addi r5, r1, 0x88
    addi r0, r1, 0x8
    lis r3, 0x100
    stw r3, 0x68(r1)
    addi r4, r1, 0x68
    stw r5, 0x6c(r1)
    mr r3, r31
    stw r0, 0x70(r1)
    bl vprintf
lbl_fn_8065B990_00000098:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8065BA40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807B8A98@ha
    addi r31, r31, lbl_807B8A98@l
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    bl OSDisableInterrupts
    lwz r4, lbl_8087EBA8
    mr r29, r3
    cmpwi r4, -0x1
    beq lbl_fn_8065BA40_000000F8
    addi r3, r31, 0xc
    crclr 6
    bl fn_8065B8E0
    b lbl_fn_8065BA40_00000180
lbl_fn_8065BA40_000000F8:
    lwz r0, lbl_808801F0
    cmpwi r0, 0x0
    bne lbl_fn_8065BA40_00000158
    bl IPCGetBufferLo
    stw r3, lbl_808801F0
    bl IPCGetBufferHi
    stw r3, lbl_808801F4
    mr r6, r3
    lwz r5, lbl_808801F0
    addi r3, r31, 0x3c
    li r4, 0x80
    crclr 6
    bl fn_8065B8E0
    lwz r3, lbl_808801F0
    lwz r0, lbl_808801F4
    addi r3, r3, 0x4000
    cmplw r3, r0
    ble lbl_fn_8065BA40_00000154
    addi r3, r31, 0x5c
    crclr 6
    bl fn_8065B990
    li r30, -0x16
    b lbl_fn_8065BA40_00000180
lbl_fn_8065BA40_00000154:
    bl IPCSetBufferLo
lbl_fn_8065BA40_00000158:
    lwz r3, lbl_808801F0
    li r4, 0x4000
    bl iosCreateHeap
    cmpwi r3, 0x0
    stw r3, lbl_8087EBA8
    bge lbl_fn_8065BA40_00000180
    addi r3, r31, 0x74
    crclr 6
    bl fn_8065B990
    li r30, -0x16
lbl_fn_8065BA40_00000180:
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8065BB40(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8065BB50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r31, lbl_807B8A98@ha
    mr r26, r3
    addi r31, r31, lbl_807B8A98@l
    mr r27, r4
    mr r4, r26
    addi r3, r31, 0x88
    crclr 6
    bl fn_8065B8E0
    lwz r4, 0x34(r27)
    addi r3, r31, 0xa8
    crclr 6
    bl fn_8065B8E0
    lwz r3, 0x34(r27)
    subi r0, r3, 0x2
    cmplwi r0, 0x2
    ble lbl_fn_8065BB50_00000234
    cmplwi r3, 0x7
    beq lbl_fn_8065BB50_00000234
    cmpwi r3, 0x0
    beq lbl_fn_8065BB50_00000234
    addi r3, r31, 0xc8
    crclr 6
    bl fn_8065B990
    b lbl_fn_8065BB50_000002A8
lbl_fn_8065BB50_00000234:
    mr r29, r27
    li r28, 0x0
    b lbl_fn_8065BB50_00000294
lbl_fn_8065BB50_00000240:
    lwz r5, 0x14(r29)
    mr r4, r28
    addi r3, r31, 0xf0
    crclr 6
    bl fn_8065B8E0
    lwz r30, 0x14(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8065BB50_0000028C
    lwz r3, lbl_8087EBA8
    mr r4, r30
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_fn_8065BB50_0000028C
    lwz r4, lbl_8087EBA8
    mr r6, r3
    mr r5, r30
    addi r3, r31, 0x108
    crclr 6
    bl fn_8065B990
lbl_fn_8065BB50_0000028C:
    addi r29, r29, 0x4
    addi r28, r28, 0x1
lbl_fn_8065BB50_00000294:
    lwz r0, 0x34(r27)
    cmplw r28, r0
    blt lbl_fn_8065BB50_00000240
    li r0, 0x0
    stw r0, 0x34(r27)
lbl_fn_8065BB50_000002A8:
    lwz r4, 0x0(r27)
    addi r3, r31, 0x128
    lwz r5, 0x8(r27)
    crclr 6
    bl fn_8065B8E0
    lwz r12, 0x0(r27)
    cmpwi r12, 0x0
    beq lbl_fn_8065BB50_000002DC
    mr r3, r26
    lwz r4, 0x8(r27)
    mtctr r12
    bctrl
    b lbl_fn_8065BB50_0000030C
lbl_fn_8065BB50_000002DC:
    lwz r0, 0x4(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8065BB50_0000030C
    addi r3, r31, 0x13c
    crclr 6
    bl fn_8065B8E0
    lwz r12, 0x4(r27)
    mr r3, r26
    lwz r4, 0xc(r27)
    lwz r5, 0x8(r27)
    mtctr r12
    bctrl
lbl_fn_8065BB50_0000030C:
    cmpwi r27, 0x0
    beq lbl_fn_8065BB50_00000340
    lwz r3, lbl_8087EBA8
    mr r4, r27
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_fn_8065BB50_00000340
    lwz r4, lbl_8087EBA8
    mr r6, r3
    mr r5, r27
    addi r3, r31, 0x108
    crclr 6
    bl fn_8065B990
lbl_fn_8065BB50_00000340:
    addi r11, r1, 0x20
    mr r3, r26
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8065BCF0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmpwi r6, 0x0
    lis r31, lbl_807B8A98@ha
    mr r26, r3
    mr r27, r4
    mr r30, r5
    mr r28, r6
    addi r31, r31, lbl_807B8A98@l
    li r29, 0x0
    bne lbl_fn_8065BCF0_000003A0
    li r30, -0x4
    b lbl_fn_8065BCF0_00000454
lbl_fn_8065BCF0_000003A0:
    lwz r3, lbl_8087EBA8
    li r4, 0x80
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8065BCF0_000003D4
    lwz r4, lbl_8087EBA8
    mr r6, r29
    addi r3, r31, 0x154
    li r5, 0x80
    crclr 6
    bl fn_8065B990
lbl_fn_8065BCF0_000003D4:
    cmpwi r29, 0x0
    bne lbl_fn_8065BCF0_000003F0
    addi r3, r31, 0x178
    crclr 6
    bl fn_8065B990
    li r30, -0x16
    b lbl_fn_8065BCF0_00000454
lbl_fn_8065BCF0_000003F0:
    mr r3, r29
    li r4, 0x0
    li r5, 0x80
    bl memset
    mr r6, r26
    mr r7, r27
    mr r8, r30
    addi r3, r29, 0x40
    addi r5, r31, 0x19c
    li r4, 0x40
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x1b0
    addi r4, r29, 0x40
    crclr 6
    bl fn_8065B8E0
    addi r3, r29, 0x40
    li r4, 0x0
    bl IOS_Open
    mr r30, r3
    addi r3, r31, 0x1c4
    mr r4, r30
    crclr 6
    bl fn_8065B8E0
    stw r30, 0x0(r28)
lbl_fn_8065BCF0_00000454:
    cmpwi r29, 0x0
    beq lbl_fn_8065BCF0_00000488
    lwz r3, lbl_8087EBA8
    mr r4, r29
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_fn_8065BCF0_00000488
    lwz r4, lbl_8087EBA8
    mr r6, r3
    mr r5, r29
    addi r3, r31, 0x108
    crclr 6
    bl fn_8065B990
lbl_fn_8065BCF0_00000488:
    addi r11, r1, 0x20
    mr r3, r30
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8065BE40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r31, lbl_807B8A98@ha
    mr r27, r3
    addi r31, r31, lbl_807B8A98@l
    mr r28, r4
    mr r29, r5
    addi r3, r31, 0x214
    crclr 6
    bl fn_8065B8E0
    lwz r3, lbl_8087EBA8
    li r4, 0x80
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8065BE40_00000518
    lwz r4, lbl_8087EBA8
    mr r6, r30
    addi r3, r31, 0x154
    li r5, 0x80
    crclr 6
    bl fn_8065B990
lbl_fn_8065BE40_00000518:
    cmpwi r30, 0x0
    bne lbl_fn_8065BE40_00000534
    addi r3, r31, 0x240
    crclr 6
    bl fn_8065B990
    li r29, -0x16
    b lbl_fn_8065BE40_000005B8
lbl_fn_8065BE40_00000534:
    mr r3, r30
    li r4, 0x0
    li r5, 0x80
    bl memset
    stw r28, 0x0(r30)
    lis r4, fn_8065BB50@ha
    li r0, 0x0
    mr r3, r27
    stw r29, 0x8(r30)
    mr r5, r30
    addi r4, r4, fn_8065BB50@l
    stw r0, 0x34(r30)
    bl fn_8061C7E0
    mr r29, r3
    addi r3, r31, 0x224
    mr r4, r29
    crclr 6
    bl fn_8065B8E0
    cmpwi r29, 0x0
    bge lbl_fn_8065BE40_000005B8
    cmpwi r30, 0x0
    beq lbl_fn_8065BE40_000005B8
    lwz r3, lbl_8087EBA8
    mr r4, r30
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_fn_8065BE40_000005B8
    lwz r4, lbl_8087EBA8
    mr r6, r3
    mr r5, r30
    addi r3, r31, 0x108
    crclr 6
    bl fn_8065B990
lbl_fn_8065BE40_000005B8:
    addi r11, r1, 0x20
    mr r3, r29
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8065BF70(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    mr r21, r3
    lis r31, lbl_807B8A98@ha
    mr r22, r4
    mr r23, r5
    lwz r3, lbl_8087EBA8
    mr r24, r6
    mr r25, r7
    mr r30, r8
    mr r26, r9
    addi r31, r31, lbl_807B8A98@l
    li r4, 0x60
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8065BF70_0000064C
    lwz r4, lbl_8087EBA8
    mr r6, r29
    addi r3, r31, 0x154
    li r5, 0x60
    crclr 6
    bl fn_8065B990
lbl_fn_8065BF70_0000064C:
    lwz r3, lbl_8087EBA8
    li r4, 0x20
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_8065BF70_00000680
    lwz r4, lbl_8087EBA8
    mr r6, r28
    addi r3, r31, 0x154
    li r5, 0x20
    crclr 6
    bl fn_8065B990
lbl_fn_8065BF70_00000680:
    lwz r3, lbl_8087EBA8
    li r4, 0x20
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_8065BF70_000006B4
    lwz r4, lbl_8087EBA8
    mr r6, r27
    addi r3, r31, 0x154
    li r5, 0x20
    crclr 6
    bl fn_8065B990
lbl_fn_8065BF70_000006B4:
    cmpwi r29, 0x0
    beq lbl_fn_8065BF70_000006CC
    cmpwi r28, 0x0
    beq lbl_fn_8065BF70_000006CC
    cmpwi r27, 0x0
    bne lbl_fn_8065BF70_000006E0
lbl_fn_8065BF70_000006CC:
    addi r3, r31, 0x2c0
    crclr 6
    bl fn_8065B990
    li r30, -0x16
    b lbl_fn_8065BF70_0000087C
lbl_fn_8065BF70_000006E0:
    stb r22, 0x0(r28)
    li r5, 0x1
    li r0, 0x4
    mr r3, r28
    stw r23, 0x0(r27)
    li r4, 0x20
    stw r28, 0x0(r29)
    stw r5, 0x4(r29)
    stw r27, 0x8(r29)
    stw r0, 0xc(r29)
    stw r24, 0x10(r29)
    stw r23, 0x14(r29)
    bl DCFlushRange
    mr r3, r27
    li r4, 0x20
    bl DCFlushRange
    mr r3, r29
    li r4, 0x60
    bl DCFlushRange
    cmpwi r26, 0x0
    bne lbl_fn_8065BF70_00000764
    mr r3, r21
    mr r7, r29
    li r4, 0xa
    li r5, 0x2
    li r6, 0x1
    bl IOS_Ioctlv
    mr r30, r3
    addi r3, r31, 0x2e4
    mr r4, r30
    crclr 6
    bl fn_8065B8E0
    b lbl_fn_8065BF70_0000087C
lbl_fn_8065BF70_00000764:
    lwz r3, lbl_8087EBA8
    li r4, 0x80
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_8065BF70_00000798
    lwz r4, lbl_8087EBA8
    mr r6, r26
    addi r3, r31, 0x154
    li r5, 0x80
    crclr 6
    bl fn_8065B990
lbl_fn_8065BF70_00000798:
    cmpwi r26, 0x0
    bne lbl_fn_8065BF70_000007B4
    addi r3, r31, 0x304
    crclr 6
    bl fn_8065B990
    li r30, -0x16
    b lbl_fn_8065BF70_0000087C
lbl_fn_8065BF70_000007B4:
    mr r3, r26
    li r4, 0x0
    li r5, 0x80
    bl memset
    stw r25, 0x0(r26)
    mr r4, r25
    mr r5, r30
    addi r3, r31, 0x330
    stw r30, 0x8(r26)
    crclr 6
    bl fn_8065B8E0
    li r0, 0x3
    stw r0, 0x34(r26)
    lis r8, fn_8065BB50@ha
    mr r3, r21
    stw r28, 0x14(r26)
    mr r7, r29
    mr r9, r26
    addi r8, r8, fn_8065BB50@l
    stw r27, 0x18(r26)
    li r4, 0xa
    li r5, 0x2
    li r6, 0x1
    stw r29, 0x1c(r26)
    stw r24, 0x40(r26)
    sth r23, 0x44(r26)
    bl fn_8061D2F0
    cmpwi r3, 0x0
    mr r30, r3
    bge lbl_fn_8065BF70_00000918
    cmpwi r3, -0x16
    bne lbl_fn_8065BF70_00000848
    mr r5, r30
    addi r3, r31, 0x354
    addi r4, r31, 0x2b0
    crclr 6
    bl OSReport
lbl_fn_8065BF70_00000848:
    cmpwi r26, 0x0
    beq lbl_fn_8065BF70_0000087C
    lwz r3, lbl_8087EBA8
    mr r4, r26
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_fn_8065BF70_0000087C
    lwz r4, lbl_8087EBA8
    mr r6, r3
    mr r5, r26
    addi r3, r31, 0x108
    crclr 6
    bl fn_8065B990
lbl_fn_8065BF70_0000087C:
    cmpwi r28, 0x0
    beq lbl_fn_8065BF70_000008B0
    lwz r3, lbl_8087EBA8
    mr r4, r28
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_fn_8065BF70_000008B0
    lwz r4, lbl_8087EBA8
    mr r6, r3
    mr r5, r28
    addi r3, r31, 0x108
    crclr 6
    bl fn_8065B990
lbl_fn_8065BF70_000008B0:
    cmpwi r27, 0x0
    beq lbl_fn_8065BF70_000008E4
    lwz r3, lbl_8087EBA8
    mr r4, r27
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_fn_8065BF70_000008E4
    lwz r4, lbl_8087EBA8
    mr r6, r3
    mr r5, r27
    addi r3, r31, 0x108
    crclr 6
    bl fn_8065B990
lbl_fn_8065BF70_000008E4:
    cmpwi r29, 0x0
    beq lbl_fn_8065BF70_00000918
    lwz r3, lbl_8087EBA8
    mr r4, r29
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_fn_8065BF70_00000918
    lwz r4, lbl_8087EBA8
    mr r6, r3
    mr r5, r29
    addi r3, r31, 0x108
    crclr 6
    bl fn_8065B990
lbl_fn_8065BF70_00000918:
    addi r11, r1, 0x40
    mr r3, r30
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8065C2D0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_20
    mr r20, r3
    lis r31, lbl_807B8A98@ha
    mr r21, r4
    mr r22, r5
    lwz r3, lbl_8087EBA8
    mr r23, r6
    mr r24, r7
    mr r25, r8
    mr r30, r9
    mr r26, r10
    addi r31, r31, lbl_807B8A98@l
    li r4, 0x60
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8065C2D0_000009B0
    lwz r4, lbl_8087EBA8
    mr r6, r29
    addi r3, r31, 0x154
    li r5, 0x60
    crclr 6
    bl fn_8065B990
lbl_fn_8065C2D0_000009B0:
    lwz r3, lbl_8087EBA8
    li r4, 0x20
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_8065C2D0_000009E4
    lwz r4, lbl_8087EBA8
    mr r6, r28
    addi r3, r31, 0x154
    li r5, 0x20
    crclr 6
    bl fn_8065B990
lbl_fn_8065C2D0_000009E4:
    lwz r3, lbl_8087EBA8
    li r4, 0x20
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_8065C2D0_00000A18
    lwz r4, lbl_8087EBA8
    mr r6, r27
    addi r3, r31, 0x154
    li r5, 0x20
    crclr 6
    bl fn_8065B990
lbl_fn_8065C2D0_00000A18:
    cmpwi r29, 0x0
    beq lbl_fn_8065C2D0_00000A30
    cmpwi r28, 0x0
    beq lbl_fn_8065C2D0_00000A30
    cmpwi r27, 0x0
    bne lbl_fn_8065C2D0_00000A44
lbl_fn_8065C2D0_00000A30:
    addi r3, r31, 0x388
    crclr 6
    bl fn_8065B990
    li r30, -0x16
    b lbl_fn_8065C2D0_00000BE0
lbl_fn_8065C2D0_00000A44:
    stb r21, 0x0(r28)
    li r5, 0x1
    li r0, 0x2
    mr r3, r28
    sth r22, 0x0(r27)
    li r4, 0x20
    stw r28, 0x0(r29)
    stw r5, 0x4(r29)
    stw r27, 0x8(r29)
    stw r0, 0xc(r29)
    stw r23, 0x10(r29)
    stw r22, 0x14(r29)
    bl DCFlushRange
    mr r3, r27
    li r4, 0x20
    bl DCFlushRange
    mr r3, r29
    li r4, 0x60
    bl DCFlushRange
    cmpwi r26, 0x0
    bne lbl_fn_8065C2D0_00000AC8
    mr r3, r20
    mr r4, r24
    mr r7, r29
    li r5, 0x2
    li r6, 0x1
    bl IOS_Ioctlv
    mr r30, r3
    addi r3, r31, 0x3ac
    mr r4, r30
    crclr 6
    bl fn_8065B8E0
    b lbl_fn_8065C2D0_00000BE0
lbl_fn_8065C2D0_00000AC8:
    lwz r3, lbl_8087EBA8
    li r4, 0x80
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_8065C2D0_00000AFC
    lwz r4, lbl_8087EBA8
    mr r6, r26
    addi r3, r31, 0x154
    li r5, 0x80
    crclr 6
    bl fn_8065B990
lbl_fn_8065C2D0_00000AFC:
    cmpwi r26, 0x0
    bne lbl_fn_8065C2D0_00000B18
    addi r3, r31, 0x3cc
    crclr 6
    bl fn_8065B990
    li r30, -0x16
    b lbl_fn_8065C2D0_00000BE0
lbl_fn_8065C2D0_00000B18:
    mr r3, r26
    li r4, 0x0
    li r5, 0x80
    bl memset
    stw r25, 0x0(r26)
    mr r4, r25
    mr r5, r30
    addi r3, r31, 0x3f8
    stw r30, 0x8(r26)
    crclr 6
    bl fn_8065B8E0
    li r0, 0x3
    stw r0, 0x34(r26)
    lis r8, fn_8065BB50@ha
    mr r3, r20
    stw r28, 0x14(r26)
    mr r4, r24
    mr r7, r29
    mr r9, r26
    stw r27, 0x18(r26)
    addi r8, r8, fn_8065BB50@l
    li r5, 0x2
    li r6, 0x1
    stw r29, 0x1c(r26)
    stw r23, 0x40(r26)
    sth r22, 0x44(r26)
    bl fn_8061D2F0
    cmpwi r3, 0x0
    mr r30, r3
    bge lbl_fn_8065C2D0_00000C7C
    cmpwi r3, -0x16
    bne lbl_fn_8065C2D0_00000BAC
    mr r5, r30
    addi r3, r31, 0x354
    addi r4, r31, 0x378
    crclr 6
    bl OSReport
lbl_fn_8065C2D0_00000BAC:
    cmpwi r26, 0x0
    beq lbl_fn_8065C2D0_00000BE0
    lwz r3, lbl_8087EBA8
    mr r4, r26
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_fn_8065C2D0_00000BE0
    lwz r4, lbl_8087EBA8
    mr r6, r3
    mr r5, r26
    addi r3, r31, 0x108
    crclr 6
    bl fn_8065B990
lbl_fn_8065C2D0_00000BE0:
    cmpwi r28, 0x0
    beq lbl_fn_8065C2D0_00000C14
    lwz r3, lbl_8087EBA8
    mr r4, r28
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_fn_8065C2D0_00000C14
    lwz r4, lbl_8087EBA8
    mr r6, r3
    mr r5, r28
    addi r3, r31, 0x108
    crclr 6
    bl fn_8065B990
lbl_fn_8065C2D0_00000C14:
    cmpwi r27, 0x0
    beq lbl_fn_8065C2D0_00000C48
    lwz r3, lbl_8087EBA8
    mr r4, r27
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_fn_8065C2D0_00000C48
    lwz r4, lbl_8087EBA8
    mr r6, r3
    mr r5, r27
    addi r3, r31, 0x108
    crclr 6
    bl fn_8065B990
lbl_fn_8065C2D0_00000C48:
    cmpwi r29, 0x0
    beq lbl_fn_8065C2D0_00000C7C
    lwz r3, lbl_8087EBA8
    mr r4, r29
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_fn_8065C2D0_00000C7C
    lwz r4, lbl_8087EBA8
    mr r6, r3
    mr r5, r29
    addi r3, r31, 0x108
    crclr 6
    bl fn_8065B990
lbl_fn_8065C2D0_00000C7C:
    addi r11, r1, 0x40
    mr r3, r30
    bl _restgpr_20
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8065C630(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r28, r5
    mr r29, r6
    mr r26, r3
    mr r27, r4
    mr r30, r7
    mr r31, r8
    mr r3, r29
    mr r4, r28
    bl DCInvalidateRange
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    mr r8, r30
    mr r9, r31
    li r7, 0x2
    li r10, 0x1
    bl fn_8065C2D0
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8065C6B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r28, r5
    mr r29, r6
    mr r26, r3
    mr r27, r4
    mr r30, r7
    mr r31, r8
    mr r3, r29
    mr r4, r28
    bl DCInvalidateRange
    cmplwi r28, 0xffff
    bgt lbl_fn_8065C6B0_00000D88
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    mr r8, r30
    mr r9, r31
    li r7, 0x1
    li r10, 0x1
    bl fn_8065C2D0
    b lbl_fn_8065C6B0_00000DA8
lbl_fn_8065C6B0_00000D88:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    mr r7, r30
    mr r8, r31
    li r9, 0x1
    bl fn_8065BF70
lbl_fn_8065C6B0_00000DA8:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8065C750(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r28, r5
    mr r29, r6
    mr r26, r3
    mr r27, r4
    mr r30, r7
    mr r31, r8
    mr r3, r29
    mr r4, r28
    bl DCFlushRange
    cmplwi r28, 0xffff
    bgt lbl_fn_8065C750_00000E28
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    mr r8, r30
    mr r9, r31
    li r7, 0x1
    li r10, 0x1
    bl fn_8065C2D0
    b lbl_fn_8065C750_00000E48
lbl_fn_8065C750_00000E28:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    mr r7, r30
    mr r8, r31
    li r9, 0x1
    bl fn_8065BF70
lbl_fn_8065C750_00000E48:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8065C7F0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_14
    cmpwi r9, 0x0
    lis r31, lbl_807B8A98@ha
    lwz r23, 0x58(r1)
    mr r15, r3
    lbz r14, 0x5f(r1)
    mr r16, r4
    mr r17, r5
    mr r18, r6
    mr r19, r7
    mr r20, r8
    mr r21, r9
    mr r22, r10
    addi r31, r31, lbl_807B8A98@l
    bne lbl_fn_8065C7F0_00000EB4
    cmpwi r8, 0x0
    bne lbl_fn_8065C7F0_00000EBC
lbl_fn_8065C7F0_00000EB4:
    clrlwi. r0, r9, 27
    beq lbl_fn_8065C7F0_00000ED0
lbl_fn_8065C7F0_00000EBC:
    addi r3, r31, 0x48c
    li r15, -0x4
    crclr 6
    bl fn_8065B990
    b lbl_fn_8065C7F0_000013E8
lbl_fn_8065C7F0_00000ED0:
    lwz r3, lbl_8087EBA8
    li r4, 0xe0
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8065C7F0_00000F04
    lwz r4, lbl_8087EBA8
    mr r6, r30
    addi r3, r31, 0x154
    li r5, 0xe0
    crclr 6
    bl fn_8065B990
lbl_fn_8065C7F0_00000F04:
    lwz r3, lbl_8087EBA8
    li r4, 0x20
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8065C7F0_00000F38
    lwz r4, lbl_8087EBA8
    mr r6, r29
    addi r3, r31, 0x154
    li r5, 0x20
    crclr 6
    bl fn_8065B990
lbl_fn_8065C7F0_00000F38:
    lwz r3, lbl_8087EBA8
    li r4, 0x20
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_8065C7F0_00000F6C
    lwz r4, lbl_8087EBA8
    mr r6, r28
    addi r3, r31, 0x154
    li r5, 0x20
    crclr 6
    bl fn_8065B990
lbl_fn_8065C7F0_00000F6C:
    lwz r3, lbl_8087EBA8
    li r4, 0x20
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_8065C7F0_00000FA0
    lwz r4, lbl_8087EBA8
    mr r6, r27
    addi r3, r31, 0x154
    li r5, 0x20
    crclr 6
    bl fn_8065B990
lbl_fn_8065C7F0_00000FA0:
    lwz r3, lbl_8087EBA8
    li r4, 0x20
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_8065C7F0_00000FD4
    lwz r4, lbl_8087EBA8
    mr r6, r26
    addi r3, r31, 0x154
    li r5, 0x20
    crclr 6
    bl fn_8065B990
lbl_fn_8065C7F0_00000FD4:
    lwz r3, lbl_8087EBA8
    li r4, 0x20
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_8065C7F0_00001008
    lwz r4, lbl_8087EBA8
    mr r6, r25
    addi r3, r31, 0x154
    li r5, 0x20
    crclr 6
    bl fn_8065B990
lbl_fn_8065C7F0_00001008:
    lwz r3, lbl_8087EBA8
    li r4, 0x20
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r24, r3
    bne lbl_fn_8065C7F0_0000103C
    lwz r4, lbl_8087EBA8
    mr r6, r24
    addi r3, r31, 0x154
    li r5, 0x20
    crclr 6
    bl fn_8065B990
lbl_fn_8065C7F0_0000103C:
    cmpwi r29, 0x0
    beq lbl_fn_8065C7F0_00001074
    cmpwi r28, 0x0
    beq lbl_fn_8065C7F0_00001074
    cmpwi r27, 0x0
    beq lbl_fn_8065C7F0_00001074
    cmpwi r26, 0x0
    beq lbl_fn_8065C7F0_00001074
    cmpwi r25, 0x0
    beq lbl_fn_8065C7F0_00001074
    cmpwi r24, 0x0
    beq lbl_fn_8065C7F0_00001074
    cmpwi r30, 0x0
    bne lbl_fn_8065C7F0_00001088
lbl_fn_8065C7F0_00001074:
    addi r3, r31, 0x4a8
    crclr 6
    bl fn_8065B990
    li r15, -0x16
    b lbl_fn_8065C7F0_0000127C
lbl_fn_8065C7F0_00001088:
    stb r16, 0x0(r29)
    li r6, 0x0
    li r5, 0x1
    li r0, 0x2
    stb r17, 0x0(r28)
    mr r3, r29
    li r4, 0x20
    sthbrx r18, r0, r26
    sthbrx r19, r0, r25
    sthbrx r20, r0, r24
    stb r6, 0x0(r27)
    stw r29, 0x0(r30)
    stw r5, 0x4(r30)
    stw r28, 0x8(r30)
    stw r5, 0xc(r30)
    stw r26, 0x10(r30)
    stw r0, 0x14(r30)
    stw r25, 0x18(r30)
    stw r0, 0x1c(r30)
    stw r24, 0x20(r30)
    stw r0, 0x24(r30)
    stw r27, 0x28(r30)
    stw r5, 0x2c(r30)
    stw r21, 0x30(r30)
    stw r20, 0x34(r30)
    bl DCFlushRange
    mr r3, r28
    li r4, 0x20
    bl DCFlushRange
    mr r3, r27
    li r4, 0x20
    bl DCFlushRange
    mr r3, r26
    li r4, 0x20
    bl DCFlushRange
    mr r3, r25
    li r4, 0x20
    bl DCFlushRange
    mr r3, r24
    li r4, 0x20
    bl DCFlushRange
    mr r3, r30
    li r4, 0xe0
    bl DCFlushRange
    cmpwi r14, 0x0
    bne lbl_fn_8065C7F0_00001160
    mr r3, r15
    mr r7, r30
    li r4, 0x0
    li r5, 0x6
    li r6, 0x1
    bl IOS_Ioctlv
    mr r15, r3
    b lbl_fn_8065C7F0_0000127C
lbl_fn_8065C7F0_00001160:
    lwz r3, lbl_8087EBA8
    li r4, 0x80
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r14, r3
    bne lbl_fn_8065C7F0_00001194
    lwz r4, lbl_8087EBA8
    mr r6, r14
    addi r3, r31, 0x154
    li r5, 0x80
    crclr 6
    bl fn_8065B990
lbl_fn_8065C7F0_00001194:
    cmpwi r14, 0x0
    bne lbl_fn_8065C7F0_000011B0
    addi r3, r31, 0x4c8
    crclr 6
    bl fn_8065B990
    li r15, -0x16
    b lbl_fn_8065C7F0_0000127C
lbl_fn_8065C7F0_000011B0:
    mr r3, r14
    li r4, 0x0
    li r5, 0x80
    bl memset
    stw r22, 0x0(r14)
    mr r4, r22
    mr r5, r23
    addi r3, r31, 0x4f0
    stw r23, 0x8(r14)
    crclr 6
    bl fn_8065B8E0
    li r0, 0x7
    stw r0, 0x34(r14)
    lis r8, fn_8065BB50@ha
    mr r3, r15
    stw r29, 0x14(r14)
    mr r7, r30
    mr r9, r14
    addi r8, r8, fn_8065BB50@l
    stw r28, 0x18(r14)
    li r4, 0x0
    li r5, 0x6
    li r6, 0x1
    stw r26, 0x1c(r14)
    stw r25, 0x20(r14)
    stw r24, 0x24(r14)
    stw r27, 0x28(r14)
    stw r30, 0x2c(r14)
    stw r21, 0x40(r14)
    sth r20, 0x44(r14)
    bl fn_8061D2F0
    mr r15, r3
    addi r3, r31, 0x514
    mr r4, r15
    crclr 6
    bl fn_8065B8E0
    cmpwi r15, 0x0
    bge lbl_fn_8065C7F0_000013E8
    cmpwi r14, 0x0
    beq lbl_fn_8065C7F0_0000127C
    lwz r3, lbl_8087EBA8
    mr r4, r14
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_fn_8065C7F0_0000127C
    lwz r4, lbl_8087EBA8
    mr r6, r3
    mr r5, r14
    addi r3, r31, 0x108
    crclr 6
    bl fn_8065B990
lbl_fn_8065C7F0_0000127C:
    cmpwi r29, 0x0
    beq lbl_fn_8065C7F0_000012B0
    lwz r3, lbl_8087EBA8
    mr r4, r29
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_fn_8065C7F0_000012B0
    lwz r4, lbl_8087EBA8
    mr r6, r3
    mr r5, r29
    addi r3, r31, 0x108
    crclr 6
    bl fn_8065B990
lbl_fn_8065C7F0_000012B0:
    cmpwi r28, 0x0
    beq lbl_fn_8065C7F0_000012E4
    lwz r3, lbl_8087EBA8
    mr r4, r28
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_fn_8065C7F0_000012E4
    lwz r4, lbl_8087EBA8
    mr r6, r3
    mr r5, r28
    addi r3, r31, 0x108
    crclr 6
    bl fn_8065B990
lbl_fn_8065C7F0_000012E4:
    cmpwi r26, 0x0
    beq lbl_fn_8065C7F0_00001318
    lwz r3, lbl_8087EBA8
    mr r4, r26
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_fn_8065C7F0_00001318
    lwz r4, lbl_8087EBA8
    mr r6, r3
    mr r5, r26
    addi r3, r31, 0x108
    crclr 6
    bl fn_8065B990
lbl_fn_8065C7F0_00001318:
    cmpwi r25, 0x0
    beq lbl_fn_8065C7F0_0000134C
    lwz r3, lbl_8087EBA8
    mr r4, r25
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_fn_8065C7F0_0000134C
    lwz r4, lbl_8087EBA8
    mr r6, r3
    mr r5, r25
    addi r3, r31, 0x108
    crclr 6
    bl fn_8065B990
lbl_fn_8065C7F0_0000134C:
    cmpwi r24, 0x0
    beq lbl_fn_8065C7F0_00001380
    lwz r3, lbl_8087EBA8
    mr r4, r24
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_fn_8065C7F0_00001380
    lwz r4, lbl_8087EBA8
    mr r6, r3
    mr r5, r24
    addi r3, r31, 0x108
    crclr 6
    bl fn_8065B990
lbl_fn_8065C7F0_00001380:
    cmpwi r27, 0x0
    beq lbl_fn_8065C7F0_000013B4
    lwz r3, lbl_8087EBA8
    mr r4, r27
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_fn_8065C7F0_000013B4
    lwz r4, lbl_8087EBA8
    mr r6, r3
    mr r5, r27
    addi r3, r31, 0x108
    crclr 6
    bl fn_8065B990
lbl_fn_8065C7F0_000013B4:
    cmpwi r30, 0x0
    beq lbl_fn_8065C7F0_000013E8
    lwz r3, lbl_8087EBA8
    mr r4, r30
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_fn_8065C7F0_000013E8
    lwz r4, lbl_8087EBA8
    mr r6, r3
    mr r5, r30
    addi r3, r31, 0x108
    crclr 6
    bl fn_8065B990
lbl_fn_8065C7F0_000013E8:
    addi r11, r1, 0x50
    mr r3, r15
    bl _restgpr_14
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8065CDA0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    mr r28, r8
    mr r29, r9
    mr r23, r3
    mr r24, r4
    lwz r31, 0x48(r1)
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r30, r10
    mr r3, r29
    mr r4, r28
    bl DCFlushRange
    stw r31, 0x8(r1)
    li r0, 0x1
    mr r3, r23
    mr r4, r24
    stw r0, 0xc(r1)
    mr r5, r25
    mr r6, r26
    mr r7, r27
    mr r8, r28
    mr r9, r29
    mr r10, r30
    bl fn_8065C7F0
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8065CE30(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8065CE40(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8065CE50(void)
{
    nofralloc
    lwz r3, lbl_80880238
    blr
}

asm void fn_8065CE60(void)
{
    nofralloc
    lwz r3, lbl_8088023C
    blr
}

asm void fn_8065CE70(void)
{
    nofralloc
    lwz r3, lbl_80880240
    blr
}

asm void fn_8065CE80(void)
{
    nofralloc
    lwz r3, lbl_80880244
    blr
}

asm void fn_8065CE90(void)
{
    nofralloc
    lwz r3, lbl_80880248
    blr
}

asm void fn_8065CEA0(void)
{
    nofralloc
    lwz r3, lbl_8088024C
    blr
}

asm void fn_8065CEB0(void)
{
    nofralloc
    lwz r3, lbl_80880250
    blr
}

asm void fn_8065CEC0(void)
{
    nofralloc
    lwz r3, lbl_80880254
    blr
}

asm void fn_8065CED0(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8065CEE0(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8065CEF0(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8065CF00(void)
{
    nofralloc
    li r3, -0x1
    blr
}

asm void fn_8065CF10(void)
{
    nofralloc
    li r3, -0x1
    blr
}

asm void fn_8065CF20(void)
{
    nofralloc
    li r3, -0x1
    blr
}

asm void fn_8065CF30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    bl fn_80671A20
    cmpwi r31, 0x0
    bne lbl_fn_8065CF30_000015D0
    cmpwi r3, 0x0
    bne lbl_fn_8065CF30_000015D8
lbl_fn_8065CF30_000015D0:
    li r3, 0x1
    b lbl_fn_8065CF30_00001734
lbl_fn_8065CF30_000015D8:
    cmpwi r3, 0x4
    beq lbl_fn_8065CF30_000015EC
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_8065CF30_000015F4
lbl_fn_8065CF30_000015EC:
    li r3, 0x0
    b lbl_fn_8065CF30_00001734
lbl_fn_8065CF30_000015F4:
    bl fn_80673210
    cmpwi r3, 0x0
    beq lbl_fn_8065CF30_0000160C
    bl fn_80671CE0
    li r3, 0x0
    b lbl_fn_8065CF30_00001734
lbl_fn_8065CF30_0000160C:
    subi r0, r30, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_8065CF30_00001658
    cmpwi r30, 0x0
    beq lbl_fn_8065CF30_00001644
    cmplwi r30, 0x1
    beq lbl_fn_8065CF30_00001660
    cmplwi r30, 0x4
    beq lbl_fn_8065CF30_00001660
    cmplwi r30, 0x6
    beq lbl_fn_8065CF30_00001660
    cmplwi r30, 0x5
    beq lbl_fn_8065CF30_00001668
    b lbl_fn_8065CF30_00001678
lbl_fn_8065CF30_00001644:
    lis r3, fn_8065CE30@ha
    lis r4, fn_8065CE40@ha
    addi r3, r3, fn_8065CE30@l
    addi r4, r4, fn_8065CE40@l
    bl fn_806717C0
lbl_fn_8065CF30_00001658:
    li r0, 0x1
    b lbl_fn_8065CF30_00001678
lbl_fn_8065CF30_00001660:
    li r0, 0x0
    b lbl_fn_8065CF30_00001678
lbl_fn_8065CF30_00001668:
    lwz r3, lbl_8087FC4C
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_8065CF30_00001678:
    cmpwi r0, 0x0
    beq lbl_fn_8065CF30_000016F4
    bl OSDisableInterrupts
    lbz r0, lbl_80880269
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_8065CF30_0000169C
    bl OSRestoreInterrupts
    b lbl_fn_8065CF30_00001730
lbl_fn_8065CF30_0000169C:
    li r0, 0x1
    stb r0, lbl_80880269
    li r3, 0x0
    li r4, 0x0
    bl fn_80671F60
    li r31, 0x0
lbl_fn_8065CF30_000016B4:
    mr r3, r31
    li r4, 0x0
    bl fn_80673E20
    addi r31, r31, 0x1
    cmpwi r31, 0x4
    blt lbl_fn_8065CF30_000016B4
    lis r3, lbl_80829DC0@ha
    addi r3, r3, lbl_80829DC0@l
    bl OSCancelAlarm
    li r3, 0x0
    bl fn_80671EC0
    li r3, 0x0
    bl fn_80671810
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_fn_8065CF30_00001730
lbl_fn_8065CF30_000016F4:
    bl OSDisableInterrupts
    lwz r0, lbl_80880210
    cmpwi r0, 0x0
    bne lbl_fn_8065CF30_0000170C
    bl OSRestoreInterrupts
    b lbl_fn_8065CF30_00001730
lbl_fn_8065CF30_0000170C:
    lbz r0, lbl_80880269
    cmpwi r0, 0x0
    beq lbl_fn_8065CF30_00001720
    bl OSRestoreInterrupts
    b lbl_fn_8065CF30_00001730
lbl_fn_8065CF30_00001720:
    li r0, 0x1
    stb r0, lbl_80880269
    stw r0, lbl_8087EBBC
    bl OSRestoreInterrupts
lbl_fn_8065CF30_00001730:
    li r3, 0x0
lbl_fn_8065CF30_00001734:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8065D0E0(void)
{
    nofralloc
    lis r5, lbl_80829DF0@ha
    la r6, lbl_80880260
    slwi r0, r3, 2
    stbx r4, r6, r3
    addi r5, r5, lbl_80829DF0@l
    lwzx r3, r5, r0
    addi r3, r3, 0x928
    b OSWakeupThread
}

asm void fn_8065D100(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r5, lbl_80829DF0@ha
    lwz r0, 0x0(r4)
    slwi r3, r3, 2
    lhz r25, 0x1a(r4)
    addi r5, r5, lbl_80829DF0@l
    mr r24, r4
    lwzx r28, r5, r3
    clrlwi r27, r0, 24
    addi r26, r4, 0x4
    bl OSDisableInterrupts
    lbz r29, 0x907(r28)
    mr r31, r3
    lwz r4, 0x900(r28)
    extsb. r0, r29
    bge lbl_fn_8065D100_000017CC
    bl OSRestoreInterrupts
    li r3, -0x4
    b lbl_fn_8065D100_0000191C
lbl_fn_8065D100_000017CC:
    li r0, -0x2
    stw r0, 0x900(r28)
    cmplwi r27, 0x10
    lwz r3, 0x918(r28)
    lwz r0, lbl_8088026C
    and r30, r3, r0
    bne lbl_fn_8065D100_000017F0
    stw r4, 0x900(r28)
    b lbl_fn_8065D100_000018A4
lbl_fn_8065D100_000017F0:
    cmplwi r27, 0x18
    bne lbl_fn_8065D100_0000180C
    stw r4, 0x900(r28)
    lbz r3, 0x913(r28)
    subi r0, r3, 0x1
    stb r0, 0x913(r28)
    b lbl_fn_8065D100_000018A4
lbl_fn_8065D100_0000180C:
    cmpwi r27, 0x16
    beq lbl_fn_8065D100_00001870
    cmpwi r27, 0x17
    beq lbl_fn_8065D100_00001828
    cmpwi r27, 0x15
    beq lbl_fn_8065D100_0000184C
    b lbl_fn_8065D100_00001864
lbl_fn_8065D100_00001828:
    li r0, 0x0
    stw r0, 0xb74(r28)
    lwz r0, 0x24(r24)
    stw r0, 0xb70(r28)
    lhz r0, 0x20(r24)
    sth r0, 0xb78(r28)
    lwz r0, 0x1c(r24)
    stw r0, 0xb6c(r28)
    b lbl_fn_8065D100_00001870
lbl_fn_8065D100_0000184C:
    stw r4, 0x900(r28)
    li r0, 0x1
    lwz r3, 0x28(r24)
    stw r3, 0x850(r28)
    stb r0, 0x904(r28)
    b lbl_fn_8065D100_00001870
lbl_fn_8065D100_00001864:
    lbz r0, 0x0(r26)
    ori r0, r0, 0x2
    stb r0, 0x0(r26)
lbl_fn_8065D100_00001870:
    lwz r0, 0x2c(r24)
    stw r0, 0x8e0(r28)
    stb r27, 0xb7f(r28)
    bl __OSGetSystemTime
    lis r6, 0x8000
    li r5, 0x0
    lwz r0, 0xf8(r6)
    rlwinm r0, r0, 31, 1, 30
    addc r0, r0, r4
    stw r0, 0xb04(r28)
    adde r0, r5, r3
    stw r0, 0xb00(r28)
    stb r5, 0xb08(r28)
lbl_fn_8065D100_000018A4:
    mr r3, r31
    bl OSRestoreInterrupts
    addi r0, r25, 0x12
    clrlwi r3, r0, 24
    bl fn_80626AC0
    addi r4, r25, 0x1
    li r0, 0xa
    clrlwi r4, r4, 24
    sth r4, 0x2(r3)
    addi r28, r3, 0x12
    mr r24, r3
    sth r0, 0x4(r3)
    mr r4, r26
    mr r5, r25
    addi r3, r28, 0x1
    stb r27, 0x0(r28)
    bl memcpy
    cmpwi r30, 0x0
    beq lbl_fn_8065D100_00001900
    lbz r0, 0x1(r28)
    ori r0, r0, 0x1
    stb r0, 0x1(r28)
    b lbl_fn_8065D100_0000190C
lbl_fn_8065D100_00001900:
    lbz r0, 0x1(r28)
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0x1(r28)
lbl_fn_8065D100_0000190C:
    mr r3, r29
    mr r4, r24
    bl fn_8062F278
    li r3, 0x0
lbl_fn_8065D100_0000191C:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8065D2D0(void)
{
    nofralloc
    lhz r0, lbl_80880202
    lis r4, lbl_80829DF0@ha
    slwi r3, r3, 2
    addi r4, r4, lbl_80829DF0@l
    cmplwi r0, 0xa
    lwzx r7, r4, r3
    bnelr
    lhz r0, 0xb7c(r7)
    lis r3, 0x6666
    lbz r6, 0xb7b(r7)
    addi r4, r3, 0x6667
    mulli r3, r0, 0x64
    li r0, 0x64
    slwi r5, r6, 3
    add r5, r5, r6
    clrlwi r5, r5, 16
    extrwi r3, r3, 16, 15
    add r5, r5, r3
    clrlwi r3, r5, 16
    mulhw r3, r4, r3
    srawi r3, r3, 2
    srwi r4, r3, 31
    add r3, r3, r4
    clrlwi r5, r3, 16
    cmplwi r5, 0x64
    bgt lbl_fn_8065D2D0_000019AC
    mr r0, r5
lbl_fn_8065D2D0_000019AC:
    stb r0, 0xb7b(r7)
    li r4, 0x0
    clrlwi r3, r0, 16
    sth r4, 0xb7c(r7)
    lbz r0, 0x911(r7)
    cmpwi r0, 0x0
    beq lbl_fn_8065D2D0_00001A08
    cmplwi r3, 0x55
    ble lbl_fn_8065D2D0_000019DC
    stb r4, 0x911(r7)
    stb r4, 0x912(r7)
    blr
lbl_fn_8065D2D0_000019DC:
    cmplwi r3, 0x50
    blelr
    lbz r3, 0x912(r7)
    addi r0, r3, 0x1
    stb r0, 0x912(r7)
    clrlwi r0, r0, 24
    cmplwi r0, 0x14
    bltlr
    stb r4, 0x911(r7)
    stb r4, 0x912(r7)
    blr
lbl_fn_8065D2D0_00001A08:
    cmplwi r3, 0x4b
    bge lbl_fn_8065D2D0_00001A20
    li r0, 0x1
    stb r0, 0x911(r7)
    stb r4, 0x912(r7)
    blr
lbl_fn_8065D2D0_00001A20:
    cmplwi r3, 0x50
    bgelr
    lbz r3, 0x912(r7)
    addi r0, r3, 0x1
    stb r0, 0x912(r7)
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bltlr
    li r0, 0x1
    stb r0, 0x911(r7)
    stb r4, 0x912(r7)
    blr
}

asm void fn_8065D3E0(void)
{
    nofralloc
    subi r0, r3, 0x3
    cmplwi r0, 0x11
    bgt lbl_fn_8065D3E0_00001ABC
    lis r3, jumptable_807B9320@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807B9320@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r3, 0x32
    blr
    li r3, 0x36
    blr
    li r3, 0x40
    blr
    li r3, 0x2e
    blr
    li r3, 0x32
    blr
    li r3, 0x34
    blr
    li r3, 0x46
    blr
    li r3, 0x5a
    blr
    li r3, 0x3e
    blr
lbl_fn_8065D3E0_00001ABC:
    li r3, 0x2a
    blr
}

asm void fn_8065D460(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    li r10, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lbz r0, 0x29(r4)
    extsb. r0, r0
    beq lbl_fn_8065D460_00001AFC
    cmpwi r0, -0x7
    bne lbl_fn_8065D460_00001E14
lbl_fn_8065D460_00001AFC:
    lbz r0, 0x29(r5)
    extsb. r0, r0
    beq lbl_fn_8065D460_00001B10
    cmpwi r0, -0x7
    bne lbl_fn_8065D460_00001E14
lbl_fn_8065D460_00001B10:
    lha r9, 0x4(r5)
    lha r8, 0x4(r4)
    lhz r7, 0x0(r4)
    lhz r0, 0x0(r5)
    subf. r10, r9, r8
    subf r6, r7, r0
    subf r0, r0, r7
    or r0, r6, r0
    srwi r0, r0, 31
    bge lbl_fn_8065D460_00001B3C
    subf r10, r8, r9
lbl_fn_8065D460_00001B3C:
    lha r9, 0x2(r5)
    xori r6, r10, 0xc
    lha r8, 0x2(r4)
    srawi r7, r6, 1
    and r6, r6, r10
    subf r6, r6, r7
    subf. r11, r9, r8
    srwi r10, r6, 31
    bge lbl_fn_8065D460_00001B64
    subf r11, r8, r9
lbl_fn_8065D460_00001B64:
    lha r9, 0x6(r5)
    xori r6, r11, 0xc
    lha r8, 0x6(r4)
    srawi r7, r6, 1
    and r6, r6, r11
    subf r6, r6, r7
    subf. r11, r9, r8
    srwi r6, r6, 31
    bge lbl_fn_8065D460_00001B8C
    subf r11, r8, r9
lbl_fn_8065D460_00001B8C:
    xori r7, r11, 0xc
    or r6, r6, r10
    srawi r8, r7, 1
    and r7, r7, r11
    subf r7, r7, r8
    srwi r7, r7, 31
    or. r6, r7, r6
    beq lbl_fn_8065D460_00001BDC
    lhz r6, 0xaf0(r3)
    addi r6, r6, 0x1
    sth r6, 0xaf0(r3)
    clrlwi r7, r6, 16
    lhz r6, lbl_8087EBC0
    cmplw r7, r6
    ble lbl_fn_8065D460_00001C20
    li r6, 0x0
    sth r6, 0xaf0(r3)
    li r7, 0x1
    sth r6, 0xaf8(r3)
    b lbl_fn_8065D460_00001C24
lbl_fn_8065D460_00001BDC:
    lhz r6, 0xaf8(r3)
    lhz r7, lbl_8087EBC8
    addi r8, r6, 0x1
    divw r6, r8, r7
    mullw r6, r6, r7
    subf r6, r6, r8
    sth r6, 0xaf8(r3)
    clrlwi r7, r6, 16
    lhz r6, lbl_8087EBC8
    subi r6, r6, 0x1
    cmpw r7, r6
    bne lbl_fn_8065D460_00001C20
    lhz r6, 0xaf0(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8065D460_00001C20
    subi r6, r6, 0x1
    sth r6, 0xaf0(r3)
lbl_fn_8065D460_00001C20:
    li r7, 0x0
lbl_fn_8065D460_00001C24:
    lha r8, 0xa(r5)
    or r0, r0, r7
    lha r6, 0xa(r4)
    clrlwi r10, r0, 24
    subf. r9, r8, r6
    bge lbl_fn_8065D460_00001C40
    subf r9, r6, r8
lbl_fn_8065D460_00001C40:
    lha r8, 0x8(r5)
    xori r0, r9, 0x2
    lha r7, 0x8(r4)
    srawi r6, r0, 1
    and r0, r0, r9
    subf r0, r0, r6
    subf. r11, r8, r7
    srwi r0, r0, 31
    bge lbl_fn_8065D460_00001C68
    subf r11, r7, r8
lbl_fn_8065D460_00001C68:
    lha r9, 0x10(r5)
    xori r6, r11, 0x2
    lha r8, 0x10(r4)
    srawi r7, r6, 1
    and r6, r6, r11
    subf r6, r6, r7
    subf. r12, r9, r8
    srwi r6, r6, 31
    bge lbl_fn_8065D460_00001C90
    subf r12, r8, r9
lbl_fn_8065D460_00001C90:
    lha r11, 0x12(r5)
    xori r7, r12, 0x2
    lha r9, 0x12(r4)
    srawi r8, r7, 1
    and r7, r7, r12
    subf r7, r7, r8
    subf. r29, r11, r9
    srwi r7, r7, 31
    bge lbl_fn_8065D460_00001CB8
    subf r29, r9, r11
lbl_fn_8065D460_00001CB8:
    lha r12, 0x18(r5)
    xori r8, r29, 0x2
    lha r11, 0x18(r4)
    srawi r9, r8, 1
    and r8, r8, r29
    subf r8, r8, r9
    subf. r29, r12, r11
    srwi r8, r8, 31
    bge lbl_fn_8065D460_00001CE0
    subf r29, r11, r12
lbl_fn_8065D460_00001CE0:
    lha r30, 0x1a(r5)
    xori r9, r29, 0x2
    lha r12, 0x1a(r4)
    srawi r11, r9, 1
    and r9, r9, r29
    subf r9, r9, r11
    subf. r29, r30, r12
    srwi r9, r9, 31
    bge lbl_fn_8065D460_00001D08
    subf r29, r12, r30
lbl_fn_8065D460_00001D08:
    lha r31, 0x20(r5)
    xori r11, r29, 0x2
    lha r30, 0x20(r4)
    srawi r12, r11, 1
    and r11, r11, r29
    subf r11, r11, r12
    subf. r28, r31, r30
    srwi r29, r11, 31
    bge lbl_fn_8065D460_00001D30
    subf r28, r30, r31
lbl_fn_8065D460_00001D30:
    lha r30, 0x22(r5)
    xori r11, r28, 0x2
    lha r31, 0x22(r4)
    srawi r12, r11, 1
    and r11, r11, r28
    subf r11, r11, r12
    subf. r28, r30, r31
    srwi r12, r11, 31
    bge lbl_fn_8065D460_00001D58
    subf r28, r31, r30
lbl_fn_8065D460_00001D58:
    or r6, r7, r6
    xori r11, r28, 0x2
    or r0, r8, r0
    or r6, r29, r6
    srawi r8, r11, 1
    and r7, r11, r28
    or r0, r9, r0
    subf r7, r7, r8
    or r6, r12, r6
    srwi r7, r7, 31
    or r0, r6, r0
    or. r0, r7, r0
    beq lbl_fn_8065D460_00001DC0
    lhz r7, 0xaf2(r3)
    la r6, lbl_8087EBC0
    addi r0, r7, 0x1
    sth r0, 0xaf2(r3)
    clrlwi r7, r0, 16
    lhz r0, 0x2(r6)
    cmplw r7, r0
    ble lbl_fn_8065D460_00001E08
    li r0, 0x0
    sth r0, 0xaf2(r3)
    li r6, 0x1
    sth r0, 0xafa(r3)
    b lbl_fn_8065D460_00001E0C
lbl_fn_8065D460_00001DC0:
    la r8, lbl_8087EBC8
    lhz r7, 0xafa(r3)
    lhz r6, 0x2(r8)
    addi r7, r7, 0x1
    divw r0, r7, r6
    mullw r0, r0, r6
    subf r0, r0, r7
    sth r0, 0xafa(r3)
    clrlwi r7, r0, 16
    lhz r6, 0x2(r8)
    subi r0, r6, 0x1
    cmpw r7, r0
    bne lbl_fn_8065D460_00001E08
    lhz r6, 0xaf2(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8065D460_00001E08
    subi r0, r6, 0x1
    sth r0, 0xaf2(r3)
lbl_fn_8065D460_00001E08:
    li r6, 0x0
lbl_fn_8065D460_00001E0C:
    or r0, r10, r6
    clrlwi r10, r0, 24
lbl_fn_8065D460_00001E14:
    lbz r0, 0x29(r4)
    extsb. r0, r0
    bne lbl_fn_8065D460_000027EC
    lbz r0, 0x29(r5)
    extsb. r0, r0
    bne lbl_fn_8065D460_000027EC
    lwz r6, 0x8fc(r3)
    subi r0, r6, 0x3
    cmplwi r0, 0x11
    bgt lbl_fn_8065D460_000027EC
    lis r6, jumptable_807B9368@ha
    slwi r0, r0, 2
    addi r6, r6, jumptable_807B9368@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    lha r6, 0x2c(r5)
    lha r0, 0x2c(r4)
    subf. r9, r6, r0
    bge lbl_fn_8065D460_00001E68
    subf r9, r0, r6
lbl_fn_8065D460_00001E68:
    lha r8, 0x2a(r5)
    xori r0, r9, 0xc
    lha r7, 0x2a(r4)
    srawi r6, r0, 1
    and r0, r0, r9
    subf r0, r0, r6
    subf. r11, r8, r7
    srwi r9, r0, 31
    bge lbl_fn_8065D460_00001E90
    subf r11, r7, r8
lbl_fn_8065D460_00001E90:
    lha r8, 0x2e(r5)
    xori r0, r11, 0xc
    lha r7, 0x2e(r4)
    srawi r6, r0, 1
    and r0, r0, r11
    subf r0, r0, r6
    subf. r11, r8, r7
    srwi r0, r0, 31
    bge lbl_fn_8065D460_00001EB8
    subf r11, r7, r8
lbl_fn_8065D460_00001EB8:
    xori r6, r11, 0xc
    or r0, r0, r9
    srawi r7, r6, 1
    and r6, r6, r11
    subf r6, r6, r7
    srwi r6, r6, 31
    or. r0, r6, r0
    beq lbl_fn_8065D460_00001F0C
    lhz r7, 0xaf4(r3)
    la r6, lbl_8087EBC0
    addi r0, r7, 0x1
    sth r0, 0xaf4(r3)
    clrlwi r7, r0, 16
    lhz r0, 0x4(r6)
    cmplw r7, r0
    ble lbl_fn_8065D460_00001F54
    li r0, 0x0
    sth r0, 0xaf4(r3)
    li r6, 0x1
    sth r0, 0xafc(r3)
    b lbl_fn_8065D460_00001F58
lbl_fn_8065D460_00001F0C:
    la r8, lbl_8087EBC8
    lhz r7, 0xafc(r3)
    lhz r6, 0x4(r8)
    addi r7, r7, 0x1
    divw r0, r7, r6
    mullw r0, r0, r6
    subf r0, r0, r7
    sth r0, 0xafc(r3)
    clrlwi r7, r0, 16
    lhz r6, 0x4(r8)
    subi r0, r6, 0x1
    cmpw r7, r0
    bne lbl_fn_8065D460_00001F54
    lhz r6, 0xaf4(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8065D460_00001F54
    subi r0, r6, 0x1
    sth r0, 0xaf4(r3)
lbl_fn_8065D460_00001F54:
    li r6, 0x0
lbl_fn_8065D460_00001F58:
    lbz r7, 0x30(r5)
    or r0, r10, r6
    lbz r3, 0x30(r4)
    clrlwi r10, r0, 24
    extsb r7, r7
    extsb r3, r3
    subf. r6, r7, r3
    bge lbl_fn_8065D460_00001F7C
    subf r6, r3, r7
lbl_fn_8065D460_00001F7C:
    lbz r5, 0x31(r5)
    xori r0, r6, 0x1
    lbz r4, 0x31(r4)
    srawi r3, r0, 1
    and r0, r0, r6
    extsb r5, r5
    extsb r4, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    subf. r6, r5, r4
    or r10, r10, r0
    bge lbl_fn_8065D460_00001FB0
    subf r6, r4, r5
lbl_fn_8065D460_00001FB0:
    xori r0, r6, 0x1
    srawi r3, r0, 1
    and r0, r0, r6
    subf r0, r0, r3
    srwi r0, r0, 31
    or r10, r10, r0
    b lbl_fn_8065D460_000027EC
    lbz r0, 0x906(r3)
    cmpwi r0, 0x1
    beq lbl_fn_8065D460_00001FE4
    cmpwi r0, 0x3
    beq lbl_fn_8065D460_00001FF4
    b lbl_fn_8065D460_00002004
lbl_fn_8065D460_00001FE4:
    li r28, 0x10
    li r0, 0x20
    li r3, 0x8
    b lbl_fn_8065D460_00002010
lbl_fn_8065D460_00001FF4:
    li r28, 0x4
    li r0, 0x4
    li r3, 0x1
    b lbl_fn_8065D460_00002010
lbl_fn_8065D460_00002004:
    li r28, 0x1
    li r0, 0x1
    li r3, 0x1
lbl_fn_8065D460_00002010:
    lha r7, 0x2c(r5)
    lhz r9, 0x2a(r4)
    divw r11, r7, r28
    lhz r7, 0x2a(r5)
    lha r6, 0x2c(r4)
    subf r8, r9, r7
    subf r7, r7, r9
    or r7, r8, r7
    divw r8, r6, r28
    srwi r6, r7, 31
    or r10, r10, r6
    subf. r12, r11, r8
    bge lbl_fn_8065D460_00002048
    subf r12, r8, r11
lbl_fn_8065D460_00002048:
    lha r7, 0x2e(r5)
    xori r9, r12, 0x1
    lha r6, 0x2e(r4)
    srawi r8, r9, 1
    divw r11, r7, r28
    and r7, r9, r12
    subf r7, r7, r8
    srwi r7, r7, 31
    or r10, r10, r7
    divw r6, r6, r28
    subf. r12, r11, r6
    bge lbl_fn_8065D460_0000207C
    subf r12, r6, r11
lbl_fn_8065D460_0000207C:
    lha r7, 0x30(r5)
    xori r9, r12, 0x1
    lha r6, 0x30(r4)
    srawi r8, r9, 1
    divw r11, r7, r0
    and r7, r9, r12
    subf r7, r7, r8
    srwi r7, r7, 31
    or r10, r10, r7
    divw r6, r6, r0
    subf. r12, r11, r6
    bge lbl_fn_8065D460_000020B0
    subf r12, r6, r11
lbl_fn_8065D460_000020B0:
    lha r7, 0x32(r5)
    xori r9, r12, 0x1
    lha r6, 0x32(r4)
    srawi r8, r9, 1
    divw r11, r7, r0
    and r7, r9, r12
    subf r7, r7, r8
    srwi r7, r7, 31
    or r10, r10, r7
    divw r0, r6, r0
    subf. r12, r11, r0
    bge lbl_fn_8065D460_000020E4
    subf r12, r0, r11
lbl_fn_8065D460_000020E4:
    lbz r6, 0x34(r5)
    xori r8, r12, 0x1
    lbz r0, 0x34(r4)
    srawi r7, r8, 1
    divw r9, r6, r3
    and r6, r8, r12
    subf r6, r6, r7
    srwi r6, r6, 31
    or r10, r10, r6
    divw r0, r0, r3
    subf. r8, r9, r0
    bge lbl_fn_8065D460_00002118
    subf r8, r0, r9
lbl_fn_8065D460_00002118:
    lbz r5, 0x35(r5)
    xori r7, r8, 0x1
    lbz r0, 0x35(r4)
    srawi r6, r7, 1
    divw r5, r5, r3
    and r4, r7, r8
    subf r4, r4, r6
    srwi r4, r4, 31
    or r10, r10, r4
    divw r0, r0, r3
    subf. r4, r5, r0
    bge lbl_fn_8065D460_0000214C
    subf r4, r0, r5
lbl_fn_8065D460_0000214C:
    xori r0, r4, 0x1
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    or r10, r10, r0
    b lbl_fn_8065D460_000027EC
    lhz r6, 0x2a(r4)
    lhz r0, 0x2a(r5)
    lbz r8, 0x2c(r5)
    subf r3, r6, r0
    subf r0, r0, r6
    lbz r7, 0x2c(r4)
    or r0, r3, r0
    srwi r0, r0, 31
    subf. r6, r8, r7
    or r10, r10, r0
    bge lbl_fn_8065D460_00002198
    subf r6, r7, r8
lbl_fn_8065D460_00002198:
    xori r0, r6, 0x1
    lbz r5, 0x2d(r5)
    srawi r3, r0, 1
    lbz r4, 0x2d(r4)
    and r0, r0, r6
    subf r0, r0, r3
    subf. r6, r5, r4
    srwi r0, r0, 31
    or r10, r10, r0
    bge lbl_fn_8065D460_000021C4
    subf r6, r4, r5
lbl_fn_8065D460_000021C4:
    xori r0, r6, 0x1
    srawi r3, r0, 1
    and r0, r0, r6
    subf r0, r0, r3
    srwi r0, r0, 31
    or r10, r10, r0
    b lbl_fn_8065D460_000027EC
    lhz r3, 0x2a(r5)
    lhz r0, 0x2a(r4)
    subf. r8, r3, r0
    bge lbl_fn_8065D460_000021F4
    subf r8, r0, r3
lbl_fn_8065D460_000021F4:
    xori r0, r8, 0x1
    lhz r7, 0x2c(r5)
    srawi r3, r0, 1
    lhz r6, 0x2c(r4)
    and r0, r0, r8
    subf r0, r0, r3
    subf. r8, r7, r6
    srwi r0, r0, 31
    or r10, r10, r0
    bge lbl_fn_8065D460_00002220
    subf r8, r6, r7
lbl_fn_8065D460_00002220:
    xori r0, r8, 0x1
    lhz r5, 0x2e(r5)
    lhz r4, 0x2e(r4)
    srawi r3, r0, 1
    and r0, r0, r8
    subf r0, r0, r3
    subf. r6, r5, r4
    srwi r0, r0, 31
    or r10, r10, r0
    bge lbl_fn_8065D460_0000224C
    subf r6, r4, r5
lbl_fn_8065D460_0000224C:
    xori r0, r6, 0x2
    srawi r3, r0, 1
    and r0, r0, r6
    subf r0, r0, r3
    srwi r0, r0, 31
    or r10, r10, r0
    b lbl_fn_8065D460_000027EC
    lhz r6, 0x2c(r5)
    lhz r0, 0x2c(r4)
    subf. r9, r6, r0
    bge lbl_fn_8065D460_0000227C
    subf r9, r0, r6
lbl_fn_8065D460_0000227C:
    lhz r8, 0x2a(r5)
    xori r0, r9, 0x32
    lhz r7, 0x2a(r4)
    srawi r6, r0, 1
    and r0, r0, r9
    subf r0, r0, r6
    subf. r11, r8, r7
    srwi r9, r0, 31
    bge lbl_fn_8065D460_000022A4
    subf r11, r7, r8
lbl_fn_8065D460_000022A4:
    lhz r8, 0x2e(r5)
    xori r0, r11, 0x32
    lhz r7, 0x2e(r4)
    srawi r6, r0, 1
    and r0, r0, r11
    subf r0, r0, r6
    subf. r12, r8, r7
    srwi r11, r0, 31
    bge lbl_fn_8065D460_000022CC
    subf r12, r7, r8
lbl_fn_8065D460_000022CC:
    lhz r6, 0x30(r5)
    xori r0, r12, 0x32
    lhz r5, 0x30(r4)
    srawi r4, r0, 1
    and r0, r0, r12
    subf r0, r0, r4
    subf. r7, r6, r5
    srwi r0, r0, 31
    bge lbl_fn_8065D460_000022F4
    subf r7, r5, r6
lbl_fn_8065D460_000022F4:
    xori r4, r7, 0x32
    or r0, r0, r11
    srawi r5, r4, 1
    and r4, r4, r7
    or r0, r0, r9
    subf r4, r4, r5
    srwi r4, r4, 31
    or. r0, r4, r0
    beq lbl_fn_8065D460_0000234C
    lhz r5, 0xaf4(r3)
    la r4, lbl_8087EBC0
    addi r0, r5, 0x1
    sth r0, 0xaf4(r3)
    clrlwi r5, r0, 16
    lhz r0, 0x4(r4)
    cmplw r5, r0
    ble lbl_fn_8065D460_00002394
    li r0, 0x0
    sth r0, 0xaf4(r3)
    li r4, 0x1
    sth r0, 0xafc(r3)
    b lbl_fn_8065D460_00002398
lbl_fn_8065D460_0000234C:
    la r6, lbl_8087EBC8
    lhz r5, 0xafc(r3)
    lhz r4, 0x4(r6)
    addi r5, r5, 0x1
    divw r0, r5, r4
    mullw r0, r0, r4
    subf r0, r0, r5
    sth r0, 0xafc(r3)
    clrlwi r5, r0, 16
    lhz r4, 0x4(r6)
    subi r0, r4, 0x1
    cmpw r5, r0
    bne lbl_fn_8065D460_00002394
    lhz r4, 0xaf4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8065D460_00002394
    subi r0, r4, 0x1
    sth r0, 0xaf4(r3)
lbl_fn_8065D460_00002394:
    li r4, 0x0
lbl_fn_8065D460_00002398:
    or r0, r10, r4
    clrlwi r10, r0, 24
    b lbl_fn_8065D460_000027EC
    lbz r0, 0xbbc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8065D460_000027EC
    lhz r0, 0x42(r4)
    subfic r0, r0, 0xc8
    srwi r0, r0, 31
    or r0, r10, r0
    clrlwi r10, r0, 24
    b lbl_fn_8065D460_000027EC
    lha r6, 0x3a(r5)
    lha r0, 0x3a(r4)
    subf. r9, r6, r0
    bge lbl_fn_8065D460_000023DC
    subf r9, r0, r6
lbl_fn_8065D460_000023DC:
    lha r8, 0x38(r5)
    xori r0, r9, 0x40
    lha r7, 0x38(r4)
    srawi r6, r0, 1
    and r0, r0, r9
    subf r0, r0, r6
    subf. r11, r8, r7
    srwi r9, r0, 31
    bge lbl_fn_8065D460_00002404
    subf r11, r7, r8
lbl_fn_8065D460_00002404:
    lha r8, 0x3c(r5)
    xori r0, r11, 0x40
    lha r7, 0x3c(r4)
    srawi r6, r0, 1
    and r0, r0, r11
    subf r0, r0, r6
    subf. r11, r8, r7
    srwi r0, r0, 31
    bge lbl_fn_8065D460_0000242C
    subf r11, r7, r8
lbl_fn_8065D460_0000242C:
    xori r6, r11, 0x40
    or r0, r0, r9
    srawi r7, r6, 1
    and r6, r6, r11
    subf r6, r6, r7
    srwi r6, r6, 31
    or. r0, r6, r0
    beq lbl_fn_8065D460_00002480
    lhz r7, 0xaf6(r3)
    la r6, lbl_8087EBC0
    addi r0, r7, 0x1
    sth r0, 0xaf6(r3)
    clrlwi r7, r0, 16
    lhz r0, 0x6(r6)
    cmplw r7, r0
    ble lbl_fn_8065D460_000024C8
    li r0, 0x0
    sth r0, 0xaf6(r3)
    li r6, 0x1
    sth r0, 0xafe(r3)
    b lbl_fn_8065D460_000024CC
lbl_fn_8065D460_00002480:
    la r8, lbl_8087EBC8
    lhz r7, 0xafe(r3)
    lhz r6, 0x6(r8)
    addi r7, r7, 0x1
    divw r0, r7, r6
    mullw r0, r0, r6
    subf r0, r0, r7
    sth r0, 0xafe(r3)
    clrlwi r7, r0, 16
    lhz r6, 0x6(r8)
    subi r0, r6, 0x1
    cmpw r7, r0
    bne lbl_fn_8065D460_000024C8
    lhz r6, 0xaf6(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8065D460_000024C8
    subi r0, r6, 0x1
    sth r0, 0xaf6(r3)
lbl_fn_8065D460_000024C8:
    li r6, 0x0
lbl_fn_8065D460_000024CC:
    lbz r0, 0x36(r4)
    or r6, r10, r6
    clrlwi r10, r6, 24
    clrlwi. r0, r0, 31
    beq lbl_fn_8065D460_000027EC
    lbz r0, 0x36(r5)
    clrlwi. r0, r0, 31
    beq lbl_fn_8065D460_000027EC
    lbz r0, 0x906(r3)
    cmplwi r0, 0x5
    bne lbl_fn_8065D460_00002670
    lha r6, 0x2c(r5)
    lha r0, 0x2c(r4)
    subf. r9, r6, r0
    bge lbl_fn_8065D460_0000250C
    subf r9, r0, r6
lbl_fn_8065D460_0000250C:
    lha r8, 0x2a(r5)
    xori r0, r9, 0xc
    lha r7, 0x2a(r4)
    srawi r6, r0, 1
    and r0, r0, r9
    subf r0, r0, r6
    subf. r11, r8, r7
    srwi r9, r0, 31
    bge lbl_fn_8065D460_00002534
    subf r11, r7, r8
lbl_fn_8065D460_00002534:
    lha r8, 0x2e(r5)
    xori r0, r11, 0xc
    lha r7, 0x2e(r4)
    srawi r6, r0, 1
    and r0, r0, r11
    subf r0, r0, r6
    subf. r11, r8, r7
    srwi r0, r0, 31
    bge lbl_fn_8065D460_0000255C
    subf r11, r7, r8
lbl_fn_8065D460_0000255C:
    xori r6, r11, 0xc
    or r0, r0, r9
    srawi r7, r6, 1
    and r6, r6, r11
    subf r6, r6, r7
    srwi r6, r6, 31
    or. r0, r6, r0
    beq lbl_fn_8065D460_000025B0
    lhz r7, 0xaf4(r3)
    la r6, lbl_8087EBC0
    addi r0, r7, 0x1
    sth r0, 0xaf4(r3)
    clrlwi r7, r0, 16
    lhz r0, 0x4(r6)
    cmplw r7, r0
    ble lbl_fn_8065D460_000025F8
    li r0, 0x0
    sth r0, 0xaf4(r3)
    li r6, 0x1
    sth r0, 0xafc(r3)
    b lbl_fn_8065D460_000025FC
lbl_fn_8065D460_000025B0:
    la r8, lbl_8087EBC8
    lhz r7, 0xafc(r3)
    lhz r6, 0x4(r8)
    addi r7, r7, 0x1
    divw r0, r7, r6
    mullw r0, r0, r6
    subf r0, r0, r7
    sth r0, 0xafc(r3)
    clrlwi r7, r0, 16
    lhz r6, 0x4(r8)
    subi r0, r6, 0x1
    cmpw r7, r0
    bne lbl_fn_8065D460_000025F8
    lhz r6, 0xaf4(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8065D460_000025F8
    subi r0, r6, 0x1
    sth r0, 0xaf4(r3)
lbl_fn_8065D460_000025F8:
    li r6, 0x0
lbl_fn_8065D460_000025FC:
    lbz r7, 0x30(r5)
    or r0, r10, r6
    lbz r3, 0x30(r4)
    clrlwi r10, r0, 24
    extsb r7, r7
    extsb r3, r3
    subf. r6, r7, r3
    bge lbl_fn_8065D460_00002620
    subf r6, r3, r7
lbl_fn_8065D460_00002620:
    lbz r5, 0x31(r5)
    xori r0, r6, 0x1
    lbz r4, 0x31(r4)
    srawi r3, r0, 1
    and r0, r0, r6
    extsb r5, r5
    extsb r4, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    subf. r6, r5, r4
    or r10, r10, r0
    bge lbl_fn_8065D460_00002654
    subf r6, r4, r5
lbl_fn_8065D460_00002654:
    xori r0, r6, 0x1
    srawi r3, r0, 1
    and r0, r0, r6
    subf r0, r0, r3
    srwi r0, r0, 31
    or r10, r10, r0
    b lbl_fn_8065D460_000027EC
lbl_fn_8065D460_00002670:
    cmplwi r0, 0x7
    bne lbl_fn_8065D460_000027EC
    lha r3, 0x2c(r5)
    lha r0, 0x2c(r4)
    srawi r3, r3, 4
    lhz r7, 0x2a(r4)
    addze r9, r3
    lhz r6, 0x2a(r5)
    srawi r0, r0, 4
    addze r8, r0
    subf r3, r7, r6
    subf r0, r6, r7
    or r0, r3, r0
    subf. r11, r9, r8
    srwi r0, r0, 31
    or r10, r10, r0
    bge lbl_fn_8065D460_000026B8
    subf r11, r8, r9
lbl_fn_8065D460_000026B8:
    xori r6, r11, 0x1
    lha r3, 0x2e(r5)
    srawi r7, r6, 1
    lha r0, 0x2e(r4)
    srawi r3, r3, 4
    and r6, r6, r11
    addze r8, r3
    srawi r0, r0, 4
    subf r3, r6, r7
    addze r6, r0
    subf. r9, r8, r6
    srwi r0, r3, 31
    or r10, r10, r0
    bge lbl_fn_8065D460_000026F4
    subf r9, r6, r8
lbl_fn_8065D460_000026F4:
    xori r6, r9, 0x1
    lha r3, 0x30(r5)
    srawi r7, r6, 1
    lha r0, 0x30(r4)
    srawi r3, r3, 5
    and r6, r6, r9
    addze r8, r3
    srawi r0, r0, 5
    subf r3, r6, r7
    addze r6, r0
    subf. r9, r8, r6
    srwi r0, r3, 31
    or r10, r10, r0
    bge lbl_fn_8065D460_00002730
    subf r9, r6, r8
lbl_fn_8065D460_00002730:
    xori r6, r9, 0x1
    lha r3, 0x32(r5)
    srawi r7, r6, 1
    lha r0, 0x32(r4)
    srawi r3, r3, 5
    and r6, r6, r9
    addze r8, r3
    srawi r0, r0, 5
    subf r3, r6, r7
    addze r6, r0
    subf. r9, r8, r6
    srwi r0, r3, 31
    or r10, r10, r0
    bge lbl_fn_8065D460_0000276C
    subf r9, r6, r8
lbl_fn_8065D460_0000276C:
    lbz r3, 0x34(r5)
    xori r7, r9, 0x1
    lbz r0, 0x34(r4)
    srawi r6, r7, 1
    srwi r8, r3, 3
    and r3, r7, r9
    srwi r7, r0, 3
    subf r0, r3, r6
    srwi r0, r0, 31
    subf. r9, r8, r7
    or r10, r10, r0
    bge lbl_fn_8065D460_000027A0
    subf r9, r7, r8
lbl_fn_8065D460_000027A0:
    lbz r3, 0x35(r5)
    xori r5, r9, 0x1
    lbz r0, 0x35(r4)
    srawi r4, r5, 1
    srwi r6, r3, 3
    and r3, r5, r9
    srwi r5, r0, 3
    subf r0, r3, r4
    srwi r0, r0, 31
    subf. r7, r6, r5
    or r10, r10, r0
    bge lbl_fn_8065D460_000027D4
    subf r7, r5, r6
lbl_fn_8065D460_000027D4:
    xori r0, r7, 0x1
    srawi r3, r0, 1
    and r0, r0, r7
    subf r0, r0, r3
    srwi r0, r0, 31
    or r10, r10, r0
lbl_fn_8065D460_000027EC:
    lwz r31, 0x1c(r1)
    clrlwi r3, r10, 24
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    addi r1, r1, 0x20
    blr
}

asm void fn_8065E1A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80829DF0@ha
    slwi r6, r3, 2
    stw r0, 0x14(r1)
    addi r5, r5, lbl_80829DF0@l
    li r8, 0x0
    li r9, 0x0
    stw r31, 0xc(r1)
    lbz r0, 0x29(r4)
    lwzx r7, r5, r6
    extsb. r0, r0
    beq lbl_fn_8065E1A0_0000284C
    cmpwi r0, -0x7
    bne lbl_fn_8065E1A0_000028E4
lbl_fn_8065E1A0_0000284C:
    lhz r0, 0x0(r4)
    cmplwi r0, 0x1c10
    bne lbl_fn_8065E1A0_00002874
    lwz r3, 0x8fc(r7)
    subi r0, r3, 0x3
    cmplwi r0, 0x5
    ble lbl_fn_8065E1A0_00002870
    cmplwi r3, 0x10
    bne lbl_fn_8065E1A0_00002874
lbl_fn_8065E1A0_00002870:
    li r8, 0x1
lbl_fn_8065E1A0_00002874:
    lbz r0, 0x905(r7)
    cmplwi r0, 0x2
    bne lbl_fn_8065E1A0_00002884
    lhz r9, 0x2a(r4)
lbl_fn_8065E1A0_00002884:
    cmplwi r0, 0x7
    bne lbl_fn_8065E1A0_00002890
    lhz r9, 0x2a(r4)
lbl_fn_8065E1A0_00002890:
    cmplwi r9, 0x1450
    bne lbl_fn_8065E1A0_000028B4
    lwz r3, 0x8fc(r7)
    subi r0, r3, 0x6
    cmplwi r0, 0x2
    ble lbl_fn_8065E1A0_000028B0
    cmplwi r3, 0x10
    bne lbl_fn_8065E1A0_000028B4
lbl_fn_8065E1A0_000028B0:
    li r8, 0x1
lbl_fn_8065E1A0_000028B4:
    lhz r0, 0xb0a(r7)
    add r0, r0, r8
    sth r0, 0xb0a(r7)
    clrlwi r0, r0, 16
    cmplwi r0, 0x258
    ble lbl_fn_8065E1A0_000028E4
    lwzx r31, r5, r6
    bl OSDisableInterrupts
    li r0, 0x0
    stb r0, 0xb09(r31)
    sth r0, 0xb0a(r31)
    bl OSRestoreInterrupts
lbl_fn_8065E1A0_000028E4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8065E290(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lbz r0, lbl_80880204
    lis r31, lbl_80829DF0@ha
    slwi r30, r3, 2
    mr r25, r3
    addi r31, r31, lbl_80829DF0@l
    cmplwi r0, 0x5
    lwzx r29, r31, r30
    li r28, 0x0
    bne lbl_fn_8065E290_00002A7C
    bl OSDisableInterrupts
    lbz r0, 0x90c(r29)
    cntlzw r0, r0
    extrwi r0, r0, 8, 19
    mulli r0, r0, 0x60
    add r4, r29, r0
    addi r27, r4, 0xa0
    bl OSRestoreInterrupts
    mr r3, r29
    mr r4, r27
    addi r5, r29, 0x40
    bl fn_8065D460
    mr r26, r3
    mr r3, r25
    mr r4, r27
    bl fn_8065E1A0
    cmpwi r26, 0x0
    beq lbl_fn_8065E290_000029A4
    li r28, 0x1
    bl __OSGetSystemTime
    stw r4, 0xaec(r29)
    mr r4, r27
    li r5, 0x60
    stw r3, 0xae8(r29)
    addi r3, r29, 0x40
    bl memcpy
    b lbl_fn_8065E290_00002A4C
lbl_fn_8065E290_000029A4:
    lbz r0, lbl_80880272
    cmpwi r0, 0x0
    beq lbl_fn_8065E290_00002A4C
    bl __OSGetSystemTime
    lwz r6, 0xaec(r29)
    lis r5, 0x8000
    lwz r0, 0xf8(r5)
    li r5, 0x0
    subfc r4, r6, r4
    lwz r7, 0xae8(r29)
    srwi r6, r0, 2
    subfe r3, r7, r3
    bl __div2i
    lbz r0, lbl_80880272
    mulli r0, r0, 0x3c
    cmpw r4, r0
    ble lbl_fn_8065E290_00002A4C
    lwzx r26, r31, r30
    bl OSDisableInterrupts
    lwz r26, 0x900(r26)
    bl OSRestoreInterrupts
    cmpwi r26, -0x1
    beq lbl_fn_8065E290_00002A4C
    lwzx r26, r31, r30
    bl OSDisableInterrupts
    lbz r26, 0x907(r26)
    bl OSRestoreInterrupts
    mr r3, r26
    bl fn_80673CB0
    cmpwi r3, 0x0
    beq lbl_fn_8065E290_00002A34
    mr r4, r3
    addi r3, r1, 0x8
    li r5, 0x6
    bl memcpy
    b lbl_fn_8065E290_00002A44
lbl_fn_8065E290_00002A34:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x6
    bl memset
lbl_fn_8065E290_00002A44:
    addi r3, r1, 0x8
    bl fn_806317D8
lbl_fn_8065E290_00002A4C:
    lbz r0, 0x69(r29)
    extsb. r0, r0
    beq lbl_fn_8065E290_00002A70
    cmpwi r0, -0x7
    beq lbl_fn_8065E290_00002A70
    mr r4, r27
    addi r3, r29, 0x40
    li r5, 0x60
    bl memcpy
lbl_fn_8065E290_00002A70:
    cmpwi r28, 0x0
    beq lbl_fn_8065E290_00002A7C
    bl fn_806056C0
lbl_fn_8065E290_00002A7C:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8065E430(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    addi r11, r1, 0x1e0
    bl _savegpr_14
    bl fn_80671A20
    cmpwi r3, 0x3
    beq lbl_fn_8065E430_00002B00
    cmpwi r3, 0x2
    bne lbl_fn_8065E430_000034D0
    lwz r0, lbl_8088025C
    cmpwi r0, 0x0
    bne lbl_fn_8065E430_000034D0
    li r4, 0x1
    li r0, 0x32
    lis r3, fn_806605C0@ha
    stw r4, lbl_8088025C
    addi r3, r3, fn_806605C0@l
    stw r0, lbl_80880214
    bl fn_80671F10
    lis r3, fn_80660A50@ha
    addi r3, r3, fn_80660A50@l
    bl fn_80671EC0
    b lbl_fn_8065E430_000034D0
lbl_fn_8065E430_00002B00:
    lwz r14, lbl_8087EBBC
    cmpwi r14, 0x0
    blt lbl_fn_8065E430_00002B44
    lwz r3, lbl_80880214
    subic. r0, r3, 0x1
    stw r0, lbl_80880214
    bgt lbl_fn_8065E430_00002B3C
    bl fn_8062CDA4
    lis r3, lbl_80829DC0@ha
    addi r3, r3, lbl_80829DC0@l
    bl OSCancelAlarm
    li r3, 0x0
    bl fn_80671EC0
    mr r3, r14
    bl fn_80671810
lbl_fn_8065E430_00002B3C:
    li r0, 0x1
    b lbl_fn_8065E430_00002B48
lbl_fn_8065E430_00002B44:
    li r0, 0x0
lbl_fn_8065E430_00002B48:
    cmpwi r0, 0x0
    bne lbl_fn_8065E430_000034D0
    lhz r0, lbl_80880206
    cmplwi r0, 0xea60
    bne lbl_fn_8065E430_00002B9C
    lis r14, 0x8000
    li r4, 0x1
    addi r3, r14, 0x31a2
    bl DCInvalidateRange
    lbz r3, lbl_80880268
    lbz r0, 0x31a2(r14)
    extsb r3, r3
    cmpw r3, r0
    beq lbl_fn_8065E430_00002B9C
    bl OSDisableInterrupts
    lbz r0, 0x31a2(r14)
    stb r0, lbl_80880268
    bl OSRestoreInterrupts
    lbz r0, lbl_80880268
    extsb r3, r0
    bl fn_80671E00
lbl_fn_8065E430_00002B9C:
    bl SCCheckStatus
    cmpwi r3, 0x0
    bne lbl_fn_8065E430_00002C3C
    bl fn_80673F00
    lbz r0, lbl_8088026A
    cmpwi r0, 0x0
    beq lbl_fn_8065E430_00002C3C
    bl fn_80624B90
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    bge lbl_fn_8065E430_00002BCC
    li r0, 0x1
lbl_fn_8065E430_00002BCC:
    cmplwi r0, 0x5
    ble lbl_fn_8065E430_00002BD8
    li r0, 0x5
lbl_fn_8065E430_00002BD8:
    stb r0, lbl_80880271
    bl fn_80624C70
    clrlwi r3, r3, 24
    subi r0, r3, 0x1
    cntlzw r0, r0
    extrwi r0, r0, 8, 19
    stb r0, lbl_80880270
    bl fn_80624C00
    clrlwi r3, r3, 24
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, lbl_8088026C
    bl fn_80624CD0
    clrlwi. r0, r3, 24
    mr r4, r3
    bne lbl_fn_8065E430_00002C20
    li r4, 0x0
lbl_fn_8065E430_00002C20:
    clrlwi r0, r3, 24
    cmplwi r0, 0x7f
    blt lbl_fn_8065E430_00002C30
    li r4, 0x7f
lbl_fn_8065E430_00002C30:
    li r0, 0x0
    stb r4, lbl_8088026B
    stb r0, lbl_8088026A
lbl_fn_8065E430_00002C3C:
    li r24, 0x0
    lis r3, lbl_80829DF0@ha
    mr r30, r24
    li r23, 0x0
    mr r31, r24
    mr r18, r24
    mr r21, r24
    mr r19, r24
    mr r22, r24
    addi r27, r3, lbl_80829DF0@l
    lis r14, 0x8000
    li r29, 0x1
    la r28, lbl_80880208
    la r20, lbl_8088020C
lbl_fn_8065E430_00002C74:
    lwzx r25, r27, r23
    lwz r0, 0x91c(r25)
    cmpwi r0, 0x0
    beq lbl_fn_8065E430_000033E4
    lbzx r0, r28, r24
    li r26, 0x0
    cmplwi r0, 0x5
    bne lbl_fn_8065E430_00002FA4
    bl OSDisableInterrupts
    lbz r0, 0x5ec(r25)
    lbz r5, 0x5ed(r25)
    extsb r4, r0
    extsb r0, r5
    subf r0, r4, r0
    extsb. r15, r0
    bge lbl_fn_8065E430_00002CC0
    lwz r0, 0x5f4(r25)
    add r0, r15, r0
    extsb r15, r0
lbl_fn_8065E430_00002CC0:
    bl OSRestoreInterrupts
    cmpwi r15, 0x0
    bne lbl_fn_8065E430_00002CD4
    li r0, 0x0
    b lbl_fn_8065E430_00002D08
lbl_fn_8065E430_00002CD4:
    bl OSDisableInterrupts
    lbz r0, 0x5ec(r25)
    mr r15, r3
    lwz r4, 0x5f0(r25)
    addi r3, r1, 0x108
    extsb r0, r0
    li r5, 0x30
    mulli r0, r0, 0x30
    add r4, r4, r0
    bl memcpy
    mr r3, r15
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_fn_8065E430_00002D08:
    cmpwi r0, 0x0
    beq lbl_fn_8065E430_00002FA4
    lwz r0, 0x108(r1)
    cmplwi r0, 0x12
    beq lbl_fn_8065E430_00002D28
    lwz r0, 0x840(r25)
    cmpwi r0, 0x0
    beq lbl_fn_8065E430_00002FA4
lbl_fn_8065E430_00002D28:
    lwz r15, 0x108(r1)
    lwz r12, 0x10c(r1)
    lwz r11, 0x110(r1)
    lwz r10, 0x114(r1)
    lwz r9, 0x118(r1)
    lwz r8, 0x11c(r1)
    lwz r7, 0x120(r1)
    lwz r6, 0x124(r1)
    lwz r5, 0x128(r1)
    lwz r4, 0x12c(r1)
    lwz r3, 0x130(r1)
    lwz r0, 0x134(r1)
    stw r15, 0x138(r1)
    lwzx r15, r27, r23
    stw r12, 0x13c(r1)
    stw r11, 0x140(r1)
    stw r10, 0x144(r1)
    stw r9, 0x148(r1)
    stw r8, 0x14c(r1)
    stw r7, 0x150(r1)
    stw r6, 0x154(r1)
    stw r5, 0x158(r1)
    stw r4, 0x15c(r1)
    stw r3, 0x160(r1)
    stw r0, 0x164(r1)
    bl OSDisableInterrupts
    lbz r0, 0x904(r15)
    mr r16, r3
    cmpwi r0, 0x0
    beq lbl_fn_8065E430_00002DA8
    li r17, -0x2
    b lbl_fn_8065E430_00002DB8
lbl_fn_8065E430_00002DA8:
    lwzx r17, r27, r23
    bl OSDisableInterrupts
    lwz r17, 0x900(r17)
    bl OSRestoreInterrupts
lbl_fn_8065E430_00002DB8:
    mr r3, r16
    bl OSRestoreInterrupts
    cmpwi r17, 0x0
    bne lbl_fn_8065E430_00002E3C
    lwz r17, 0x138(r1)
    mr r3, r24
    lwz r16, 0x13c(r1)
    addi r4, r1, 0x168
    lwz r15, 0x140(r1)
    lwz r12, 0x144(r1)
    lwz r11, 0x148(r1)
    lwz r10, 0x14c(r1)
    lwz r9, 0x150(r1)
    lwz r8, 0x154(r1)
    lwz r7, 0x158(r1)
    lwz r6, 0x15c(r1)
    lwz r5, 0x160(r1)
    lwz r0, 0x164(r1)
    stw r17, 0x168(r1)
    stw r16, 0x16c(r1)
    stw r15, 0x170(r1)
    stw r12, 0x174(r1)
    stw r11, 0x178(r1)
    stw r10, 0x17c(r1)
    stw r9, 0x180(r1)
    stw r8, 0x184(r1)
    stw r7, 0x188(r1)
    stw r6, 0x18c(r1)
    stw r5, 0x190(r1)
    stw r0, 0x194(r1)
    bl fn_8065D100
    mr r17, r3
    b lbl_fn_8065E430_00002EF4
lbl_fn_8065E430_00002E3C:
    cmpwi r17, -0x2
    bne lbl_fn_8065E430_00002EF4
    bl __OSGetSystemTime
    lwz r6, 0xb04(r15)
    li r5, 0x0
    lwz r0, 0xf8(r14)
    subfc r4, r6, r4
    lwz r7, 0xb00(r15)
    srwi r6, r0, 2
    subfe r3, r7, r3
    bl __div2i
    xoris r5, r3, 0x8000
    xoris r0, r30, 0x8000
    subfc r3, r4, r29
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_8065E430_00002EF4
    bl __OSGetSystemTime
    stw r4, 0xb04(r15)
    stw r3, 0xb00(r15)
    lwzx r15, r27, r23
    bl OSDisableInterrupts
    lwz r15, 0x900(r15)
    bl OSRestoreInterrupts
    cmpwi r15, -0x1
    beq lbl_fn_8065E430_00002EF4
    lwzx r15, r27, r23
    bl OSDisableInterrupts
    lbz r15, 0x907(r15)
    bl OSRestoreInterrupts
    mr r3, r15
    bl fn_80673CB0
    cmpwi r3, 0x0
    beq lbl_fn_8065E430_00002EDC
    mr r4, r3
    addi r3, r1, 0x10
    li r5, 0x6
    bl memcpy
    b lbl_fn_8065E430_00002EEC
lbl_fn_8065E430_00002EDC:
    addi r3, r1, 0x10
    li r4, 0x0
    li r5, 0x6
    bl memset
lbl_fn_8065E430_00002EEC:
    addi r3, r1, 0x10
    bl fn_806317D8
lbl_fn_8065E430_00002EF4:
    cmpwi r17, 0x0
    bne lbl_fn_8065E430_00002FA4
    bl OSDisableInterrupts
    mr r15, r3
    bl OSDisableInterrupts
    lbz r0, 0x5ec(r25)
    lbz r5, 0x5ed(r25)
    extsb r4, r0
    extsb r0, r5
    subf r0, r4, r0
    extsb. r16, r0
    bge lbl_fn_8065E430_00002F30
    lwz r0, 0x5f4(r25)
    add r0, r16, r0
    extsb r16, r0
lbl_fn_8065E430_00002F30:
    bl OSRestoreInterrupts
    cmpwi r16, 0x0
    bne lbl_fn_8065E430_00002F48
    mr r3, r15
    bl OSRestoreInterrupts
    b lbl_fn_8065E430_00002F9C
lbl_fn_8065E430_00002F48:
    lbz r0, 0x5ec(r25)
    li r4, 0x0
    lwz r3, 0x5f0(r25)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x5ec(r25)
    mr r3, r15
    lwz r4, 0x5f4(r25)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x5ec(r25)
    bl OSRestoreInterrupts
lbl_fn_8065E430_00002F9C:
    li r26, 0x1
    stbx r31, r28, r24
lbl_fn_8065E430_00002FA4:
    lbzx r3, r28, r24
    cmplwi r3, 0x5
    addi r0, r3, 0x1
    bne lbl_fn_8065E430_00002FB8
    mr r0, r3
lbl_fn_8065E430_00002FB8:
    cmpwi r26, 0x0
    stbx r0, r28, r24
    lwzx r25, r27, r23
    beq lbl_fn_8065E430_00002FD0
    li r0, 0x1
    b lbl_fn_8065E430_000032CC
lbl_fn_8065E430_00002FD0:
    bl OSDisableInterrupts
    lbz r0, 0x160(r25)
    lbz r5, 0x161(r25)
    extsb r4, r0
    extsb r0, r5
    subf r0, r4, r0
    extsb. r15, r0
    bge lbl_fn_8065E430_00002FFC
    lwz r0, 0x168(r25)
    add r0, r15, r0
    extsb r15, r0
lbl_fn_8065E430_00002FFC:
    bl OSRestoreInterrupts
    cmpwi r15, 0x0
    bne lbl_fn_8065E430_00003010
    li r0, 0x0
    b lbl_fn_8065E430_00003044
lbl_fn_8065E430_00003010:
    bl OSDisableInterrupts
    lbz r0, 0x160(r25)
    mr r15, r3
    lwz r4, 0x164(r25)
    addi r3, r1, 0x78
    extsb r0, r0
    li r5, 0x30
    mulli r0, r0, 0x30
    add r4, r4, r0
    bl memcpy
    mr r3, r15
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_fn_8065E430_00003044:
    cmpwi r0, 0x0
    beq lbl_fn_8065E430_000032C8
    lwz r15, 0x78(r1)
    lwz r12, 0x7c(r1)
    lwz r11, 0x80(r1)
    lwz r10, 0x84(r1)
    lwz r9, 0x88(r1)
    lwz r8, 0x8c(r1)
    lwz r7, 0x90(r1)
    lwz r6, 0x94(r1)
    lwz r5, 0x98(r1)
    lwz r4, 0x9c(r1)
    lwz r3, 0xa0(r1)
    lwz r0, 0xa4(r1)
    stw r15, 0xa8(r1)
    lwzx r15, r27, r23
    stw r12, 0xac(r1)
    stw r11, 0xb0(r1)
    stw r10, 0xb4(r1)
    stw r9, 0xb8(r1)
    stw r8, 0xbc(r1)
    stw r7, 0xc0(r1)
    stw r6, 0xc4(r1)
    stw r5, 0xc8(r1)
    stw r4, 0xcc(r1)
    stw r3, 0xd0(r1)
    stw r0, 0xd4(r1)
    bl OSDisableInterrupts
    lbz r0, 0x904(r15)
    mr r16, r3
    cmpwi r0, 0x0
    beq lbl_fn_8065E430_000030CC
    li r17, -0x2
    b lbl_fn_8065E430_000030DC
lbl_fn_8065E430_000030CC:
    lwzx r17, r27, r23
    bl OSDisableInterrupts
    lwz r17, 0x900(r17)
    bl OSRestoreInterrupts
lbl_fn_8065E430_000030DC:
    mr r3, r16
    bl OSRestoreInterrupts
    cmpwi r17, 0x0
    bne lbl_fn_8065E430_00003160
    lwz r15, 0xa8(r1)
    mr r3, r24
    lwz r16, 0xac(r1)
    addi r4, r1, 0xd8
    lwz r17, 0xb0(r1)
    lwz r12, 0xb4(r1)
    lwz r11, 0xb8(r1)
    lwz r10, 0xbc(r1)
    lwz r9, 0xc0(r1)
    lwz r8, 0xc4(r1)
    lwz r7, 0xc8(r1)
    lwz r6, 0xcc(r1)
    lwz r5, 0xd0(r1)
    lwz r0, 0xd4(r1)
    stw r15, 0xd8(r1)
    stw r16, 0xdc(r1)
    stw r17, 0xe0(r1)
    stw r12, 0xe4(r1)
    stw r11, 0xe8(r1)
    stw r10, 0xec(r1)
    stw r9, 0xf0(r1)
    stw r8, 0xf4(r1)
    stw r7, 0xf8(r1)
    stw r6, 0xfc(r1)
    stw r5, 0x100(r1)
    stw r0, 0x104(r1)
    bl fn_8065D100
    mr r17, r3
    b lbl_fn_8065E430_00003218
lbl_fn_8065E430_00003160:
    cmpwi r17, -0x2
    bne lbl_fn_8065E430_00003218
    bl __OSGetSystemTime
    lwz r6, 0xb04(r15)
    li r5, 0x0
    lwz r0, 0xf8(r14)
    subfc r4, r6, r4
    lwz r7, 0xb00(r15)
    srwi r6, r0, 2
    subfe r3, r7, r3
    bl __div2i
    xoris r5, r3, 0x8000
    xoris r0, r18, 0x8000
    subfc r3, r4, r29
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_8065E430_00003218
    bl __OSGetSystemTime
    stw r4, 0xb04(r15)
    stw r3, 0xb00(r15)
    lwzx r15, r27, r23
    bl OSDisableInterrupts
    lwz r15, 0x900(r15)
    bl OSRestoreInterrupts
    cmpwi r15, -0x1
    beq lbl_fn_8065E430_00003218
    lwzx r15, r27, r23
    bl OSDisableInterrupts
    lbz r15, 0x907(r15)
    bl OSRestoreInterrupts
    mr r3, r15
    bl fn_80673CB0
    cmpwi r3, 0x0
    beq lbl_fn_8065E430_00003200
    mr r4, r3
    addi r3, r1, 0x8
    li r5, 0x6
    bl memcpy
    b lbl_fn_8065E430_00003210
lbl_fn_8065E430_00003200:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x6
    bl memset
lbl_fn_8065E430_00003210:
    addi r3, r1, 0x8
    bl fn_806317D8
lbl_fn_8065E430_00003218:
    cmpwi r17, 0x0
    bne lbl_fn_8065E430_000032C8
    bl OSDisableInterrupts
    mr r15, r3
    bl OSDisableInterrupts
    lbz r0, 0x160(r25)
    lbz r5, 0x161(r25)
    extsb r4, r0
    extsb r0, r5
    subf r0, r4, r0
    extsb. r16, r0
    bge lbl_fn_8065E430_00003254
    lwz r0, 0x168(r25)
    add r0, r16, r0
    extsb r16, r0
lbl_fn_8065E430_00003254:
    bl OSRestoreInterrupts
    cmpwi r16, 0x0
    bne lbl_fn_8065E430_0000326C
    mr r3, r15
    bl OSRestoreInterrupts
    b lbl_fn_8065E430_000032C0
lbl_fn_8065E430_0000326C:
    lbz r0, 0x160(r25)
    li r4, 0x0
    lwz r3, 0x164(r25)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x160(r25)
    mr r3, r15
    lwz r4, 0x168(r25)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x160(r25)
    bl OSRestoreInterrupts
lbl_fn_8065E430_000032C0:
    li r0, 0x1
    b lbl_fn_8065E430_000032CC
lbl_fn_8065E430_000032C8:
    li r0, 0x0
lbl_fn_8065E430_000032CC:
    or r0, r26, r0
    cmpwi r0, 0x1
    beq lbl_fn_8065E430_00003314
    lwzx r15, r27, r23
    bl OSDisableInterrupts
    lbz r0, 0x160(r15)
    lbz r5, 0x161(r15)
    extsb r4, r0
    extsb r0, r5
    subf r0, r4, r0
    extsb. r16, r0
    bge lbl_fn_8065E430_00003308
    lwz r0, 0x168(r15)
    add r0, r16, r0
    extsb r16, r0
lbl_fn_8065E430_00003308:
    bl OSRestoreInterrupts
    cmpwi r16, 0x0
    ble lbl_fn_8065E430_00003320
lbl_fn_8065E430_00003314:
    lwzx r3, r27, r23
    stw r19, 0x914(r3)
    b lbl_fn_8065E430_000033B0
lbl_fn_8065E430_00003320:
    lbzx r0, r20, r24
    cmplwi r0, 0x5
    bne lbl_fn_8065E430_000033B0
    lwzx r5, r27, r23
    li r0, 0x10
    sth r29, 0x32(r1)
    mr r3, r24
    lwz r15, 0x20(r1)
    addi r4, r1, 0x48
    stw r21, 0x914(r5)
    lwz r12, 0x24(r1)
    stb r21, 0x1c(r1)
    lwz r11, 0x28(r1)
    lwz r16, 0x1c(r1)
    lwz r10, 0x2c(r1)
    lwz r9, 0x30(r1)
    lwz r8, 0x34(r1)
    lwz r7, 0x38(r1)
    lwz r6, 0x3c(r1)
    lwz r5, 0x40(r1)
    stw r0, 0x18(r1)
    li r0, 0x10
    stw r21, 0x44(r1)
    stw r0, 0x48(r1)
    stw r16, 0x4c(r1)
    stw r15, 0x50(r1)
    stw r12, 0x54(r1)
    stw r11, 0x58(r1)
    stw r10, 0x5c(r1)
    stw r9, 0x60(r1)
    stw r8, 0x64(r1)
    stw r7, 0x68(r1)
    stw r6, 0x6c(r1)
    stw r5, 0x70(r1)
    stw r21, 0x74(r1)
    bl fn_8065D100
lbl_fn_8065E430_000033B0:
    lwzx r3, r27, r23
    lwz r0, 0x914(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8065E430_000033CC
    lbzx r3, r20, r24
    addi r0, r3, 0x1
    b lbl_fn_8065E430_000033D0
lbl_fn_8065E430_000033CC:
    li r0, 0x0
lbl_fn_8065E430_000033D0:
    stbx r0, r20, r24
    mr r3, r24
    bl fn_8065E290
    mr r3, r24
    bl fn_8065D2D0
lbl_fn_8065E430_000033E4:
    lwzx r4, r27, r23
    lbz r0, 0xb89(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8065E430_00003410
    lha r3, 0xb8a(r4)
    cmpwi r3, 0x0
    subi r0, r3, 0x1
    sth r0, 0xb8a(r4)
    bge lbl_fn_8065E430_00003410
    lwzx r3, r27, r23
    stb r22, 0xb89(r3)
lbl_fn_8065E430_00003410:
    mr r3, r24
    bl fn_80667130
    lwzx r3, r27, r23
    lbz r3, 0x905(r3)
    addi r0, r3, 0xfb
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    ble lbl_fn_8065E430_00003438
    cmplwi r3, 0xfa
    bne lbl_fn_8065E430_00003450
lbl_fn_8065E430_00003438:
    lwzx r4, r27, r23
    lbz r3, 0xbad(r4)
    cmplwi r3, 0xc8
    bge lbl_fn_8065E430_00003450
    addi r0, r3, 0x1
    stb r0, 0xbad(r4)
lbl_fn_8065E430_00003450:
    addi r24, r24, 0x1
    addi r23, r23, 0x4
    cmpwi r24, 0x4
    blt lbl_fn_8065E430_00002C74
    lhz r5, lbl_80880202
    lis r3, 0x1
    subi r0, r3, 0x15a0
    lbz r8, lbl_80880204
    subi r4, r5, 0xa
    subfic r3, r5, 0xa
    nor r3, r4, r3
    lhz r9, lbl_80880206
    srawi r7, r3, 31
    addi r6, r5, 0x1
    clrlwi r0, r0, 16
    subi r4, r8, 0x5
    subfic r3, r8, 0x5
    andc r6, r6, r7
    nor r4, r4, r3
    sth r6, lbl_80880202
    subf r3, r0, r9
    subf r0, r9, r0
    srawi r5, r4, 31
    addi r4, r8, 0x1
    nor r3, r3, r0
    addi r0, r9, 0x1
    srawi r3, r3, 31
    andc r4, r4, r5
    andc r0, r0, r3
    stb r4, lbl_80880204
    sth r0, lbl_80880206
    bl fn_8062F41C
lbl_fn_8065E430_000034D0:
    addi r11, r1, 0x1e0
    bl _restgpr_14
    lwz r0, 0x1e4(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}

asm void fn_8065EE80(void)
{
    nofralloc
    lis r8, lbl_80829E00@ha
    lis r7, fn_8065E430@ha
    addi r8, r8, lbl_80829E00@l
    li r5, 0x0
    addi r7, r7, fn_8065E430@l
    li r6, 0x0
    addi r8, r8, 0x1000
    b fn_805EDC80
}

asm void fn_8065EEA0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r4, lbl_80829DF0@ha
    slwi r0, r3, 2
    addi r4, r4, lbl_80829DF0@l
    li r30, 0x0
    lwzx r29, r4, r0
    li r31, -0x1
    li r25, 0xfd
    li r26, 0xc
    stw r30, 0x850(r29)
    mr r28, r3
    stw r30, 0x918(r29)
    stw r30, 0x8e0(r29)
    stw r30, 0x8e4(r29)
    stw r30, 0x8ec(r29)
    stw r30, 0x8f0(r29)
    stw r30, 0x8f4(r29)
    stw r30, 0x8f8(r29)
    stw r30, 0x8fc(r29)
    stw r31, 0x900(r29)
    stb r25, 0x905(r29)
    stb r30, 0x906(r29)
    stb r30, 0xb09(r29)
    sth r30, 0xb0a(r29)
    stb r30, 0x904(r29)
    stb r26, 0x90e(r29)
    stb r30, 0x90f(r29)
    stb r30, 0x910(r29)
    sth r30, 0xaf0(r29)
    sth r30, 0xaf8(r29)
    sth r30, 0xaf2(r29)
    sth r30, 0xafa(r29)
    sth r30, 0xaf4(r29)
    sth r30, 0xafc(r29)
    sth r30, 0xaf6(r29)
    sth r30, 0xafe(r29)
    bl __OSGetSystemTime
    stw r4, 0xaec(r29)
    stw r3, 0xae8(r29)
    bl __OSGetSystemTime
    stw r4, 0xb04(r29)
    li r27, 0x1
    li r0, 0x4
    li r4, 0x0
    stw r3, 0xb00(r29)
    addi r3, r29, 0x838
    li r5, 0x18
    stb r30, 0xb08(r29)
    stb r30, 0x90d(r29)
    stw r30, 0x908(r29)
    stw r30, 0xb6c(r29)
    stw r30, 0xb70(r29)
    sth r30, 0xb78(r29)
    stw r30, 0xb74(r29)
    stb r31, 0x907(r29)
    stw r30, 0x91c(r29)
    stw r30, 0x920(r29)
    stw r30, 0x924(r29)
    stb r27, 0x911(r29)
    stb r30, 0x912(r29)
    stb r30, 0x913(r29)
    stb r30, 0xb7a(r29)
    stb r30, 0xb7b(r29)
    sth r30, 0xb7c(r29)
    stb r27, 0xb7e(r29)
    stb r30, 0xb84(r29)
    stw r30, 0xb80(r29)
    stb r30, 0xb86(r29)
    stb r0, 0xb87(r29)
    stb r25, 0xb88(r29)
    stb r30, 0xb89(r29)
    sth r30, 0xb8a(r29)
    stb r30, 0xba7(r29)
    bl memset
    addi r3, r29, 0xb2c
    li r4, 0x0
    li r5, 0x40
    bl memset
    addi r3, r29, 0x854
    li r4, 0x0
    li r5, 0x30
    bl memset
    addi r3, r29, 0x884
    li r4, 0x0
    li r5, 0x5c
    bl memset
    addi r3, r29, 0xb0c
    li r4, 0x0
    li r5, 0x10
    bl memset
    addi r3, r29, 0xb1c
    li r4, 0x0
    li r5, 0x8
    bl memset
    addi r3, r29, 0xb24
    li r4, 0x0
    li r5, 0x8
    bl memset
    mr r3, r29
    li r4, 0x0
    li r5, 0x38
    bl memset
    stb r30, 0x90c(r29)
    addi r3, r29, 0xa0
    li r4, 0x0
    li r5, 0xc0
    bl memset
    stb r31, 0xc9(r29)
    addi r3, r29, 0x40
    addi r4, r29, 0xa0
    li r5, 0x60
    stb r31, 0x129(r29)
    bl memcpy
    stw r31, 0x38(r29)
    addi r4, r29, 0x16c
    li r3, 0x18
    addi r0, r29, 0x5f8
    stw r31, 0x3c(r29)
    stw r4, 0x164(r29)
    stw r3, 0x168(r29)
    stw r0, 0x5f0(r29)
    stw r26, 0x5f4(r29)
    bl OSDisableInterrupts
    stb r30, 0x160(r29)
    mr r26, r3
    li r4, 0x0
    stb r30, 0x161(r29)
    lwz r0, 0x168(r29)
    lwz r3, 0x164(r29)
    mulli r5, r0, 0x30
    bl memset
    mr r3, r26
    bl OSRestoreInterrupts
    bl OSDisableInterrupts
    stb r30, 0x5ec(r29)
    mr r26, r3
    li r4, 0x0
    stb r30, 0x5ed(r29)
    lwz r0, 0x5f4(r29)
    lwz r3, 0x5f0(r29)
    mulli r5, r0, 0x30
    bl memset
    mr r3, r26
    bl OSRestoreInterrupts
    stb r30, 0x93a(r29)
    li r8, 0x3
    li r7, 0x5
    li r6, 0xbb8
    stb r30, 0x934(r29)
    li r0, 0x2
    addi r3, r29, 0x94c
    li r4, 0x0
    stb r30, 0x935(r29)
    li r5, 0x48
    stb r30, 0x936(r29)
    stb r30, 0x938(r29)
    stb r8, 0x937(r29)
    stb r7, 0x939(r29)
    stw r30, 0xba0(r29)
    stb r30, 0xbad(r29)
    stb r31, 0x944(r29)
    stb r30, 0x945(r29)
    stb r31, 0x947(r29)
    stb r30, 0x946(r29)
    sth r6, 0x942(r29)
    stb r0, 0x93f(r29)
    stb r30, 0x93e(r29)
    stw r30, 0x948(r29)
    bl memset
    addi r3, r29, 0x994
    li r4, 0x0
    li r5, 0x48
    bl memset
    addi r3, r29, 0x9dc
    li r4, 0x0
    li r5, 0x108
    bl memset
    stw r27, 0x9dc(r29)
    addi r3, r29, 0xbc0
    li r4, 0x0
    li r5, 0x20
    stw r27, 0x994(r29)
    stw r27, 0x94c(r29)
    stb r30, 0xbb8(r29)
    stb r31, 0xbb9(r29)
    stb r25, 0xbbb(r29)
    stb r30, 0xbba(r29)
    bl memset
    mr r3, r28
    bl fn_8066DF70
    stw r30, 0xae4(r29)
    la r4, lbl_80880208
    la r3, lbl_8088020C
    addi r11, r1, 0x30
    stbx r30, r4, r28
    stbx r30, r3, r28
    stb r31, 0xbbe(r29)
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8065F1E0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r31, lbl_80829DC0@ha
    addi r31, r31, lbl_80829DC0@l
    bl OSDisableInterrupts
    lis r4, 0xcd00
    lwz r0, 0xc0(r4)
    ori r0, r0, 0x100
    stw r0, 0xc0(r4)
    bl OSRestoreInterrupts
    addi r3, r31, 0x1040
    li r0, -0x1
    stb r0, 0x0(r3)
    addi r29, r31, 0x1060
    addi r28, r31, 0x30
    li r24, 0x0
    stb r0, 0x1(r3)
    la r27, lbl_80880264
    la r26, lbl_80880208
    la r25, lbl_8088020C
    stb r0, 0x2(r3)
    li r30, 0x0
    stb r0, 0x3(r3)
    stb r0, 0x4(r3)
    stb r0, 0x5(r3)
    stb r0, 0x6(r3)
    stb r0, 0x7(r3)
    stb r0, 0x8(r3)
    stb r0, 0x9(r3)
    stb r0, 0xa(r3)
    stb r0, 0xb(r3)
    stb r0, 0xc(r3)
    stb r0, 0xd(r3)
    stb r0, 0xe(r3)
    stb r0, 0xf(r3)
lbl_fn_8065F1E0_000038E8:
    stw r29, 0x0(r28)
    mr r3, r24
    stb r30, 0x0(r27)
    stw r30, 0x8e8(r29)
    bl fn_8065EEA0
    addi r3, r29, 0x928
    bl OSInitThreadQueue
    lwz r3, 0x0(r28)
    addi r24, r24, 0x1
    cmpwi r24, 0x4
    addi r29, r29, 0xbe0
    stb r30, 0xbae(r3)
    addi r28, r28, 0x4
    addi r27, r27, 0x1
    stb r30, 0x0(r26)
    addi r26, r26, 0x1
    stb r30, 0x0(r25)
    addi r25, r25, 0x1
    blt lbl_fn_8065F1E0_000038E8
    li r0, 0x5
    stb r0, lbl_80880272
    bl fn_805EBFD0
    stw r3, lbl_80880274
    bl fn_805EC060
    stb r3, lbl_80880278
    bl fn_80624B90
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    bge lbl_fn_8065F1E0_00003960
    li r0, 0x1
lbl_fn_8065F1E0_00003960:
    cmplwi r0, 0x5
    ble lbl_fn_8065F1E0_0000396C
    li r0, 0x5
lbl_fn_8065F1E0_0000396C:
    stb r0, lbl_80880271
    bl fn_80624C70
    clrlwi r3, r3, 24
    subi r0, r3, 0x1
    cntlzw r0, r0
    extrwi r0, r0, 8, 19
    stb r0, lbl_80880270
    bl fn_80624C00
    clrlwi r3, r3, 24
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, lbl_8088026C
    bl fn_80624CD0
    clrlwi. r0, r3, 24
    mr r6, r3
    bne lbl_fn_8065F1E0_000039B4
    li r6, 0x0
lbl_fn_8065F1E0_000039B4:
    clrlwi r0, r3, 24
    cmplwi r0, 0x7f
    blt lbl_fn_8065F1E0_000039C4
    li r6, 0x7f
lbl_fn_8065F1E0_000039C4:
    li r5, 0x0
    li r4, 0x1
    li r0, -0x1
    stb r6, lbl_8088026B
    lwz r3, lbl_8087EBB8
    sth r5, lbl_80880202
    stb r5, lbl_80880204
    sth r5, lbl_80880206
    stb r5, lbl_80880269
    stb r4, lbl_8088026A
    stb r0, lbl_80880268
    stw r5, lbl_80880258
    bl OSRegisterVersion
    lwz r12, lbl_80880218
    cmpwi r12, 0x0
    beq lbl_fn_8065F1E0_00003A0C
    mtctr r12
    bctrl
lbl_fn_8065F1E0_00003A0C:
    lwz r12, lbl_8088021C
    cmpwi r12, 0x0
    beq lbl_fn_8065F1E0_00003A20
    mtctr r12
    bctrl
lbl_fn_8065F1E0_00003A20:
    lwz r12, lbl_80880220
    cmpwi r12, 0x0
    beq lbl_fn_8065F1E0_00003A34
    mtctr r12
    bctrl
lbl_fn_8065F1E0_00003A34:
    lwz r12, lbl_80880224
    cmpwi r12, 0x0
    beq lbl_fn_8065F1E0_00003A48
    mtctr r12
    bctrl
lbl_fn_8065F1E0_00003A48:
    lwz r12, lbl_80880228
    cmpwi r12, 0x0
    beq lbl_fn_8065F1E0_00003A5C
    mtctr r12
    bctrl
lbl_fn_8065F1E0_00003A5C:
    lwz r12, lbl_8088022C
    cmpwi r12, 0x0
    beq lbl_fn_8065F1E0_00003A70
    mtctr r12
    bctrl
lbl_fn_8065F1E0_00003A70:
    lwz r12, lbl_80880230
    cmpwi r12, 0x0
    beq lbl_fn_8065F1E0_00003A84
    mtctr r12
    bctrl
lbl_fn_8065F1E0_00003A84:
    lwz r12, lbl_80880234
    cmpwi r12, 0x0
    beq lbl_fn_8065F1E0_00003A98
    mtctr r12
    bctrl
lbl_fn_8065F1E0_00003A98:
    addi r3, r31, 0x0
    bl OSCreateAlarm
    bl OSGetTime
    lis r5, 0x8000
    lis r9, fn_8065EE80@ha
    lwz r0, 0xf8(r5)
    lis r6, 0x1062
    mr r5, r3
    addi r9, r9, fn_8065EE80@l
    addi r3, r6, 0x4dd3
    srwi r0, r0, 2
    mulhwu r0, r3, r0
    mr r6, r4
    addi r3, r31, 0x0
    li r7, 0x0
    srwi r8, r0, 6
    bl fn_805EC3B0
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8065F490(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x1
    lbz r0, lbl_80880200
    stw r31, lbl_80880210
    cmpwi r0, 0x0
    bne lbl_fn_8065F490_00003B34
    lis r3, lbl_807B9310@ha
    addi r3, r3, lbl_807B9310@l
    bl OSRegisterShutdownFunction
    stb r31, lbl_80880200
lbl_fn_8065F490_00003B34:
    bl fn_806716B0
    cmpwi r3, 0x0
    beq lbl_fn_8065F490_00003B5C
    li r4, 0x0
    li r3, -0x1
    li r0, 0x32
    stw r4, lbl_8088025C
    stw r3, lbl_8087EBBC
    stw r0, lbl_80880214
    bl fn_8065F1E0
lbl_fn_8065F490_00003B5C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8065F500(void)
{
    nofralloc
    b fn_80671CC0
}

asm void fn_8065F510(void)
{
    nofralloc
    b fn_80671D70
}

asm void fn_8065F520(void)
{
    nofralloc
    b fn_80671B20
}

asm void fn_8065F530(void)
{
    nofralloc
    b fn_806717C0
}

asm void fn_8065F540(void)
{
    nofralloc
    b fn_80671A20
}

asm void fn_8065F550(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80829DF0@ha
    stw r0, 0x14(r1)
    slwi r0, r3, 2
    addi r4, r4, lbl_80829DF0@l
    stw r31, 0xc(r1)
    lwzx r31, r4, r0
    bl OSDisableInterrupts
    lbz r31, 0xb7b(r31)
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8065F5A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lbz r31, lbl_80880270
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8065F5E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80829DF0@ha
    addi r31, r31, lbl_80829DF0@l
    stw r30, 0x18(r1)
    slwi r30, r3, 2
    stw r29, 0x14(r1)
    lwzx r29, r31, r30
    bne lbl_fn_8065F5E0_00003CA0
    li r0, 0x1
    stw r0, 0x920(r29)
    lwz r12, 0x8e8(r29)
    cmpwi r12, 0x0
    beq lbl_fn_8065F5E0_00003D00
    mtctr r12
    bctrl
    b lbl_fn_8065F5E0_00003D00
lbl_fn_8065F5E0_00003CA0:
    bl OSDisableInterrupts
    lwz r29, 0x900(r29)
    bl OSRestoreInterrupts
    cmpwi r29, -0x1
    beq lbl_fn_8065F5E0_00003D00
    lwzx r30, r31, r30
    bl OSDisableInterrupts
    lbz r30, 0x907(r30)
    bl OSRestoreInterrupts
    mr r3, r30
    bl fn_80673CB0
    cmpwi r3, 0x0
    beq lbl_fn_8065F5E0_00003CE8
    mr r4, r3
    addi r3, r1, 0x8
    li r5, 0x6
    bl memcpy
    b lbl_fn_8065F5E0_00003CF8
lbl_fn_8065F5E0_00003CE8:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x6
    bl memset
lbl_fn_8065F5E0_00003CF8:
    addi r3, r1, 0x8
    bl fn_806317D8
lbl_fn_8065F5E0_00003D00:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8065F6B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80829DF0@ha
    addi r31, r31, lbl_80829DF0@l
    stw r30, 0x18(r1)
    slwi r30, r3, 2
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwzx r28, r31, r30
    beq lbl_fn_8065F6B0_00003DE8
    bl OSDisableInterrupts
    li r0, 0x0
    stb r0, 0x160(r28)
    mr r29, r3
    li r4, 0x0
    stb r0, 0x161(r28)
    lwz r0, 0x168(r28)
    lwz r3, 0x164(r28)
    mulli r5, r0, 0x30
    bl memset
    mr r3, r29
    bl OSRestoreInterrupts
    lwzx r29, r31, r30
    bl OSDisableInterrupts
    lwz r29, 0x900(r29)
    bl OSRestoreInterrupts
    cmpwi r29, -0x1
    beq lbl_fn_8065F6B0_00003DE8
    lwzx r29, r31, r30
    bl OSDisableInterrupts
    lbz r29, 0x907(r29)
    bl OSRestoreInterrupts
    mr r3, r29
    bl fn_80673CB0
    cmpwi r3, 0x0
    beq lbl_fn_8065F6B0_00003DD0
    mr r4, r3
    addi r3, r1, 0x8
    li r5, 0x6
    bl memcpy
    b lbl_fn_8065F6B0_00003DE0
lbl_fn_8065F6B0_00003DD0:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x6
    bl memset
lbl_fn_8065F6B0_00003DE0:
    addi r3, r1, 0x8
    bl fn_806317D8
lbl_fn_8065F6B0_00003DE8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8065F7A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80829DF0@ha
    addi r31, r31, lbl_80829DF0@l
    stw r30, 0x18(r1)
    slwi r30, r3, 2
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwzx r28, r31, r30
    bne lbl_fn_8065F7A0_00003E5C
    lbz r0, 0xb3b(r28)
    cmplwi r0, 0x5
    bne lbl_fn_8065F7A0_00003E5C
    lbz r0, 0xb36(r28)
    stb r0, 0xbbe(r28)
    b lbl_fn_8065F7A0_00003E6C
lbl_fn_8065F7A0_00003E5C:
    cmpwi r4, -0x3
    bne lbl_fn_8065F7A0_00003E6C
    li r0, 0x0
    stb r0, 0xbbe(r28)
lbl_fn_8065F7A0_00003E6C:
    lbz r0, 0xbbe(r28)
    extsb. r0, r0
    beq lbl_fn_8065F7A0_00003F14
    cmpwi r0, 0x1
    beq lbl_fn_8065F7A0_00003F14
    bl OSDisableInterrupts
    li r0, 0x0
    stb r0, 0x160(r28)
    mr r29, r3
    li r4, 0x0
    stb r0, 0x161(r28)
    lwz r0, 0x168(r28)
    lwz r3, 0x164(r28)
    mulli r5, r0, 0x30
    bl memset
    mr r3, r29
    bl OSRestoreInterrupts
    lwzx r29, r31, r30
    bl OSDisableInterrupts
    lwz r29, 0x900(r29)
    bl OSRestoreInterrupts
    cmpwi r29, -0x1
    beq lbl_fn_8065F7A0_00003F14
    lwzx r29, r31, r30
    bl OSDisableInterrupts
    lbz r29, 0x907(r29)
    bl OSRestoreInterrupts
    mr r3, r29
    bl fn_80673CB0
    cmpwi r3, 0x0
    beq lbl_fn_8065F7A0_00003EFC
    mr r4, r3
    addi r3, r1, 0x8
    li r5, 0x6
    bl memcpy
    b lbl_fn_8065F7A0_00003F0C
lbl_fn_8065F7A0_00003EFC:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x6
    bl memset
lbl_fn_8065F7A0_00003F0C:
    addi r3, r1, 0x8
    bl fn_806317D8
lbl_fn_8065F7A0_00003F14:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8065F8D0(void)
{
    nofralloc
    stwu r1, -0x340(r1)
    mflr r0
    stw r0, 0x344(r1)
    addi r11, r1, 0x340
    bl _savegpr_26
    lis r5, lbl_80829DF0@ha
    cmpwi r4, -0x1
    slwi r0, r3, 2
    mr r27, r3
    addi r5, r5, lbl_80829DF0@l
    mr r26, r4
    lwzx r29, r5, r0
    beq lbl_fn_8065F8D0_00004AF8
    bl OSDisableInterrupts
    cntlzw r4, r26
    li r0, 0x0
    srwi r4, r4, 5
    stw r4, 0x924(r29)
    stw r0, 0x900(r29)
    bl OSRestoreInterrupts
    cmpwi r26, 0x0
    li r31, 0x2a
    bne lbl_fn_8065F8D0_00003FA0
    li r31, 0x14
lbl_fn_8065F8D0_00003FA0:
    cntlzw r3, r26
    lbz r0, 0x905(r29)
    extrwi r4, r3, 1, 26
    neg r4, r4
    cmplwi cr1, r0, 0x3
    andi. r28, r4, 0x176c
    li r3, 0x1
    beq cr1, lbl_fn_8065F8D0_00003FC4
    slw r3, r3, r27
lbl_fn_8065F8D0_00003FC4:
    lis r30, fn_8065F6B0@ha
    lbz r5, 0xb86(r29)
    clrlwi r27, r3, 24
    addi r3, r29, 0x160
    addi r6, r30, fn_8065F6B0@l
    li r4, 0x0
    bl fn_80665F80
    li r0, 0x1
    sth r0, 0x2e2(r1)
    li r0, 0x0
    addi r12, r30, fn_8065F6B0@l
    stb r0, 0x2cc(r1)
    li r30, 0x1a
    lwz r10, 0x2d0(r1)
    lwz r11, 0x2cc(r1)
    lwz r9, 0x2d4(r1)
    lwz r8, 0x2d8(r1)
    lwz r7, 0x2dc(r1)
    lwz r6, 0x2e0(r1)
    lwz r5, 0x2e4(r1)
    lwz r4, 0x2e8(r1)
    lwz r3, 0x2ec(r1)
    lwz r0, 0x2f0(r1)
    stw r30, 0x2c8(r1)
    stw r12, 0x2f4(r1)
    stw r30, 0x2f8(r1)
    stw r11, 0x2fc(r1)
    stw r10, 0x300(r1)
    stw r9, 0x304(r1)
    stw r8, 0x308(r1)
    stw r7, 0x30c(r1)
    stw r6, 0x310(r1)
    stw r5, 0x314(r1)
    stw r4, 0x318(r1)
    stw r3, 0x31c(r1)
    stw r0, 0x320(r1)
    stw r12, 0x324(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_fn_8065F8D0_00004084
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_fn_8065F8D0_00004084:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_fn_8065F8D0_000040A4
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_fn_8065F8D0_00004118
lbl_fn_8065F8D0_000040A4:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x2f8
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r30
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_fn_8065F8D0_00004118:
    clrlslwi r0, r27, 28, 4
    stb r0, 0x26c(r1)
    li r0, 0x1
    li r27, 0x11
    sth r0, 0x282(r1)
    lis r12, fn_8065F6B0@ha
    addi r12, r12, fn_8065F6B0@l
    lwz r11, 0x26c(r1)
    lwz r10, 0x270(r1)
    lwz r9, 0x274(r1)
    lwz r8, 0x278(r1)
    lwz r7, 0x27c(r1)
    lwz r6, 0x280(r1)
    lwz r5, 0x284(r1)
    lwz r4, 0x288(r1)
    lwz r3, 0x28c(r1)
    lwz r0, 0x290(r1)
    stw r27, 0x268(r1)
    stw r12, 0x294(r1)
    stw r27, 0x298(r1)
    stw r11, 0x29c(r1)
    stw r10, 0x2a0(r1)
    stw r9, 0x2a4(r1)
    stw r8, 0x2a8(r1)
    stw r7, 0x2ac(r1)
    stw r6, 0x2b0(r1)
    stw r5, 0x2b4(r1)
    stw r4, 0x2b8(r1)
    stw r3, 0x2bc(r1)
    stw r0, 0x2c0(r1)
    stw r12, 0x2c4(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_fn_8065F8D0_000041C0
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_fn_8065F8D0_000041C0:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_fn_8065F8D0_000041E0
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_fn_8065F8D0_00004254
lbl_fn_8065F8D0_000041E0:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x298
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r30
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_fn_8065F8D0_00004254:
    lis r6, fn_8065F6B0@ha
    li r3, 0x2a
    addi r6, r6, fn_8065F6B0@l
    li r8, 0x38
    li r7, 0x17
    li r0, 0x6
    stw r3, 0x24(r1)
    addi r3, r1, 0x20c
    addi r4, r1, 0x24
    li r5, 0x4
    sth r8, 0x10(r1)
    stw r7, 0x208(r1)
    sth r0, 0x222(r1)
    stw r6, 0x234(r1)
    bl memcpy
    addi r3, r1, 0x210
    addi r4, r1, 0x10
    li r5, 0x2
    bl memcpy
    lhz r0, 0x10(r1)
    addi r27, r29, 0xb2c
    sth r0, 0x228(r1)
    lwz r12, 0x24(r1)
    lwz r11, 0x208(r1)
    lwz r10, 0x20c(r1)
    lwz r9, 0x210(r1)
    lwz r8, 0x214(r1)
    lwz r7, 0x218(r1)
    lwz r6, 0x21c(r1)
    lwz r5, 0x220(r1)
    lwz r4, 0x228(r1)
    lwz r3, 0x230(r1)
    lwz r0, 0x234(r1)
    stw r27, 0x224(r1)
    stw r12, 0x22c(r1)
    stw r11, 0x238(r1)
    stw r10, 0x23c(r1)
    stw r9, 0x240(r1)
    stw r8, 0x244(r1)
    stw r7, 0x248(r1)
    stw r6, 0x24c(r1)
    stw r5, 0x250(r1)
    stw r27, 0x254(r1)
    stw r4, 0x258(r1)
    stw r12, 0x25c(r1)
    stw r3, 0x260(r1)
    stw r0, 0x264(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_fn_8065F8D0_0000433C
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_fn_8065F8D0_0000433C:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_fn_8065F8D0_0000435C
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_fn_8065F8D0_000043D0
lbl_fn_8065F8D0_0000435C:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x238
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r30
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_fn_8065F8D0_000043D0:
    lis r6, fn_8065F6B0@ha
    li r3, 0x62
    addi r6, r6, fn_8065F6B0@l
    li r8, 0x38
    li r7, 0x17
    li r0, 0x6
    stw r3, 0x20(r1)
    addi r3, r1, 0x1ac
    addi r4, r1, 0x20
    li r5, 0x4
    sth r8, 0xe(r1)
    stw r7, 0x1a8(r1)
    sth r0, 0x1c2(r1)
    stw r6, 0x1d4(r1)
    bl memcpy
    addi r3, r1, 0x1b0
    addi r4, r1, 0xe
    li r5, 0x2
    bl memcpy
    lhz r0, 0xe(r1)
    addi r27, r29, 0xb2c
    sth r0, 0x1c8(r1)
    lwz r12, 0x20(r1)
    lwz r11, 0x1a8(r1)
    lwz r10, 0x1ac(r1)
    lwz r9, 0x1b0(r1)
    lwz r8, 0x1b4(r1)
    lwz r7, 0x1b8(r1)
    lwz r6, 0x1bc(r1)
    lwz r5, 0x1c0(r1)
    lwz r4, 0x1c8(r1)
    lwz r3, 0x1d0(r1)
    lwz r0, 0x1d4(r1)
    stw r27, 0x1c4(r1)
    stw r12, 0x1cc(r1)
    stw r11, 0x1d8(r1)
    stw r10, 0x1dc(r1)
    stw r9, 0x1e0(r1)
    stw r8, 0x1e4(r1)
    stw r7, 0x1e8(r1)
    stw r6, 0x1ec(r1)
    stw r5, 0x1f0(r1)
    stw r27, 0x1f4(r1)
    stw r4, 0x1f8(r1)
    stw r12, 0x1fc(r1)
    stw r3, 0x200(r1)
    stw r0, 0x204(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_fn_8065F8D0_000044B8
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_fn_8065F8D0_000044B8:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_fn_8065F8D0_000044D8
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_fn_8065F8D0_0000454C
lbl_fn_8065F8D0_000044D8:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x1d8
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r30
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_fn_8065F8D0_0000454C:
    lis r3, 0x4a4
    li r4, 0xaa
    addi r5, r3, 0xf0
    li r8, 0x1
    li r7, 0x16
    li r6, 0x15
    li r0, 0x0
    stb r4, 0x9(r1)
    addi r3, r1, 0x17c
    addi r4, r1, 0x1c
    stw r5, 0x1c(r1)
    li r5, 0x4
    stb r8, 0x8(r1)
    stw r7, 0x178(r1)
    sth r6, 0x192(r1)
    stw r0, 0x1a4(r1)
    bl memcpy
    addi r3, r1, 0x180
    addi r4, r1, 0x8
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0x181
    addi r4, r1, 0x9
    li r5, 0x1
    bl memcpy
    lwz r27, 0x178(r1)
    lwz r12, 0x17c(r1)
    lwz r11, 0x180(r1)
    lwz r10, 0x184(r1)
    lwz r9, 0x188(r1)
    lwz r8, 0x18c(r1)
    lwz r7, 0x190(r1)
    lwz r6, 0x194(r1)
    lwz r5, 0x198(r1)
    lwz r4, 0x19c(r1)
    lwz r3, 0x1a0(r1)
    lwz r0, 0x1a4(r1)
    stw r27, 0x148(r1)
    stw r12, 0x14c(r1)
    stw r11, 0x150(r1)
    stw r10, 0x154(r1)
    stw r9, 0x158(r1)
    stw r8, 0x15c(r1)
    stw r7, 0x160(r1)
    stw r6, 0x164(r1)
    stw r5, 0x168(r1)
    stw r4, 0x16c(r1)
    stw r3, 0x170(r1)
    stw r0, 0x174(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_fn_8065F8D0_0000463C
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_fn_8065F8D0_0000463C:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_fn_8065F8D0_0000465C
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_fn_8065F8D0_000046D0
lbl_fn_8065F8D0_0000465C:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x148
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r30
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_fn_8065F8D0_000046D0:
    lis r3, 0x4a6
    lis r6, fn_8065F7A0@ha
    addi r3, r3, 0xf0
    li r5, 0x10
    addi r6, r6, fn_8065F7A0@l
    li r7, 0x17
    li r0, 0x6
    stw r3, 0x18(r1)
    addi r3, r1, 0xec
    addi r4, r1, 0x18
    sth r5, 0xc(r1)
    li r5, 0x4
    stw r7, 0xe8(r1)
    sth r0, 0x102(r1)
    stw r6, 0x114(r1)
    bl memcpy
    addi r3, r1, 0xf0
    addi r4, r1, 0xc
    li r5, 0x2
    bl memcpy
    lhz r0, 0xc(r1)
    addi r27, r29, 0xb2c
    sth r0, 0x108(r1)
    lwz r12, 0x18(r1)
    lwz r11, 0xe8(r1)
    lwz r10, 0xec(r1)
    lwz r9, 0xf0(r1)
    lwz r8, 0xf4(r1)
    lwz r7, 0xf8(r1)
    lwz r6, 0xfc(r1)
    lwz r5, 0x100(r1)
    lwz r4, 0x108(r1)
    lwz r3, 0x110(r1)
    lwz r0, 0x114(r1)
    stw r27, 0x104(r1)
    stw r12, 0x10c(r1)
    stw r11, 0x118(r1)
    stw r10, 0x11c(r1)
    stw r9, 0x120(r1)
    stw r8, 0x124(r1)
    stw r7, 0x128(r1)
    stw r6, 0x12c(r1)
    stw r5, 0x130(r1)
    stw r27, 0x134(r1)
    stw r4, 0x138(r1)
    stw r12, 0x13c(r1)
    stw r3, 0x140(r1)
    stw r0, 0x144(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_fn_8065F8D0_000047BC
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_fn_8065F8D0_000047BC:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_fn_8065F8D0_000047DC
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_fn_8065F8D0_00004850
lbl_fn_8065F8D0_000047DC:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x118
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r30
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_fn_8065F8D0_00004850:
    lis r6, fn_8065F5E0@ha
    li r7, 0x17
    addi r6, r6, fn_8065F5E0@l
    li r0, 0x6
    stw r28, 0x14(r1)
    addi r3, r1, 0x8c
    addi r4, r1, 0x14
    li r5, 0x4
    sth r31, 0xa(r1)
    stw r7, 0x88(r1)
    sth r0, 0xa2(r1)
    stw r6, 0xb4(r1)
    bl memcpy
    addi r3, r1, 0x90
    addi r4, r1, 0xa
    li r5, 0x2
    bl memcpy
    lhz r0, 0xa(r1)
    addi r27, r29, 0xb2c
    sth r0, 0xa8(r1)
    lwz r12, 0x14(r1)
    lwz r11, 0x88(r1)
    lwz r10, 0x8c(r1)
    lwz r9, 0x90(r1)
    lwz r8, 0x94(r1)
    lwz r7, 0x98(r1)
    lwz r6, 0x9c(r1)
    lwz r5, 0xa0(r1)
    lwz r4, 0xa8(r1)
    lwz r3, 0xb0(r1)
    lwz r0, 0xb4(r1)
    stw r27, 0xa4(r1)
    stw r12, 0xac(r1)
    stw r11, 0xb8(r1)
    stw r10, 0xbc(r1)
    stw r9, 0xc0(r1)
    stw r8, 0xc4(r1)
    stw r7, 0xc8(r1)
    stw r6, 0xcc(r1)
    stw r5, 0xd0(r1)
    stw r27, 0xd4(r1)
    stw r4, 0xd8(r1)
    stw r12, 0xdc(r1)
    stw r3, 0xe0(r1)
    stw r0, 0xe4(r1)
    bl OSDisableInterrupts
    mr r26, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_fn_8065F8D0_00004930
    lwz r0, 0x168(r29)
    add r0, r27, r0
    extsb r27, r0
lbl_fn_8065F8D0_00004930:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_fn_8065F8D0_00004950
    mr r3, r26
    bl OSRestoreInterrupts
    b lbl_fn_8065F8D0_000049C4
lbl_fn_8065F8D0_00004950:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0xb8
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r26
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_fn_8065F8D0_000049C4:
    li r11, 0x0
    stb r11, 0x2c(r1)
    li r0, 0x1
    li r12, 0x15
    sth r0, 0x42(r1)
    lwz r10, 0x2c(r1)
    lwz r9, 0x30(r1)
    lwz r8, 0x34(r1)
    lwz r7, 0x38(r1)
    lwz r6, 0x3c(r1)
    lwz r5, 0x40(r1)
    lwz r4, 0x44(r1)
    lwz r3, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r12, 0x28(r1)
    stw r11, 0x54(r1)
    stw r11, 0x50(r1)
    stw r12, 0x58(r1)
    stw r10, 0x5c(r1)
    stw r9, 0x60(r1)
    stw r8, 0x64(r1)
    stw r7, 0x68(r1)
    stw r6, 0x6c(r1)
    stw r5, 0x70(r1)
    stw r4, 0x74(r1)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    stw r11, 0x80(r1)
    stw r11, 0x84(r1)
    bl OSDisableInterrupts
    mr r26, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_fn_8065F8D0_00004A64
    lwz r0, 0x168(r29)
    add r0, r27, r0
    extsb r27, r0
lbl_fn_8065F8D0_00004A64:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_fn_8065F8D0_00004A84
    mr r3, r26
    bl OSRestoreInterrupts
    b lbl_fn_8065F8D0_00004AF8
lbl_fn_8065F8D0_00004A84:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x58
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r26
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_fn_8065F8D0_00004AF8:
    addi r11, r1, 0x340
    bl _restgpr_26
    lwz r0, 0x344(r1)
    mtlr r0
    addi r1, r1, 0x340
    blr
}
