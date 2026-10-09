#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void DCFlushRange(void);
extern void OSGetArenaHi(void);
extern void OSGetTick(void);

/* External data declarations */
extern u8 DSPInitCode_8079C2B8[];

/* Small data declarations */
extern u32 __OSInIPL;

/* Function declarations */
void __AIClockInit(void);
void __OSInitAudioSystem(void);
void __OSStopAudioSystem(void);

asm void __AIClockInit(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, 0xcd80
    stw r0, 0x24(r1)
    slwi r0, r3, 8
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r5, 0x180(r4)
    rlwinm r5, r5, 0, 24, 22
    or r5, r5, r0
    rlwinm r0, r5, 0, 25, 23
    stw r0, 0x180(r4)
    lwz r0, 0x1d0(r4)
    clrlwi r0, r0, 2
    stw r0, 0x1d0(r4)
    bl OSGetTick
    lis r4, 0x431c
    mr r28, r3
    subi r30, r4, 0x217d
    lis r29, 0x8000
lbl___AIClockInit_0000005C:
    bl OSGetTick
    lwz r0, 0xf8(r29)
    subf r3, r28, r3
    slwi r3, r3, 3
    srwi r0, r0, 2
    mulhwu r0, r30, r0
    srwi r0, r0, 15
    divwu r0, r3, r0
    cmplwi r0, 0x64
    blt lbl___AIClockInit_0000005C
    cmpwi r31, 0x0
    bne lbl___AIClockInit_000000B4
    lis r4, 0xcd80
    lis r3, 0xf804
    lwz r5, 0x1cc(r4)
    subi r0, r3, 0x40
    rlwinm r3, r5, 0, 26, 13
    ori r3, r3, 0xfc0
    and r0, r3, r0
    oris r0, r0, 0x464
    stw r0, 0x1cc(r4)
    b lbl___AIClockInit_000000D8
lbl___AIClockInit_000000B4:
    lis r3, 0xcd80
    lwz r0, 0x1cc(r3)
    rlwinm r0, r0, 0, 26, 13
    ori r0, r0, 0xffc0
    clrrwi r0, r0, 6
    ori r0, r0, 0xe
    rlwinm r0, r0, 0, 14, 4
    oris r0, r0, 0x4b0
    stw r0, 0x1cc(r3)
lbl___AIClockInit_000000D8:
    bl OSGetTick
    lis r4, 0x431c
    mr r31, r3
    subi r30, r4, 0x217d
    lis r29, 0x8000
lbl___AIClockInit_000000EC:
    bl OSGetTick
    lwz r0, 0xf8(r29)
    subf r3, r31, r3
    slwi r3, r3, 3
    srwi r0, r0, 2
    mulhwu r0, r30, r0
    srwi r0, r0, 15
    divwu r0, r3, r0
    cmplwi r0, 0x64
    blt lbl___AIClockInit_000000EC
    lis r3, 0xcd80
    lwz r0, 0x1d0(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0x1d0(r3)
    bl OSGetTick
    lis r4, 0x431c
    mr r31, r3
    subi r30, r4, 0x217d
    lis r29, 0x8000
lbl___AIClockInit_00000138:
    bl OSGetTick
    lwz r0, 0xf8(r29)
    subf r3, r31, r3
    slwi r3, r3, 3
    srwi r0, r0, 2
    mulhwu r0, r30, r0
    srwi r0, r0, 15
    divwu r0, r3, r0
    cmplwi r0, 0x3e8
    blt lbl___AIClockInit_00000138
    lis r3, 0xcd80
    lwz r0, 0x1d0(r3)
    rlwinm r0, r0, 0, 2, 0
    oris r0, r0, 0x4000
    stw r0, 0x1d0(r3)
    bl OSGetTick
    lis r4, 0x431c
    mr r31, r3
    subi r30, r4, 0x217d
    lis r29, 0x8000
lbl___AIClockInit_00000188:
    bl OSGetTick
    lwz r0, 0xf8(r29)
    subf r3, r31, r3
    slwi r3, r3, 3
    srwi r0, r0, 2
    mulhwu r0, r30, r0
    srwi r0, r0, 15
    divwu r0, r3, r0
    cmplwi r0, 0x3e8
    blt lbl___AIClockInit_00000188
    lis r3, 0xcd80
    lwz r0, 0x1d0(r3)
    clrlwi r0, r0, 1
    oris r0, r0, 0x8000
    stw r0, 0x1d0(r3)
    bl OSGetTick
    lis r4, 0x431c
    mr r29, r3
    subi r30, r4, 0x217d
    lis r31, 0x8000
lbl___AIClockInit_000001D8:
    bl OSGetTick
    lwz r0, 0xf8(r31)
    subf r3, r29, r3
    slwi r3, r3, 3
    srwi r0, r0, 2
    mulhwu r0, r30, r0
    srwi r0, r0, 15
    divwu r0, r3, r0
    cmplwi r0, 0x3e8
    blt lbl___AIClockInit_000001D8
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void __OSInitAudioSystem(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r0, __OSInIPL
    cmpwi r0, 0x0
    bne lbl___OSInitAudioSystem_00000244
    li r3, 0x1
    bl __AIClockInit
lbl___OSInitAudioSystem_00000244:
    bl OSGetArenaHi
    lis r4, 0x8100
    li r5, 0x80
    subi r3, r3, 0x80
    bl memcpy
    lis r4, DSPInitCode_8079C2B8@ha
    lis r3, 0x8100
    addi r4, r4, DSPInitCode_8079C2B8@l
    li r5, 0x80
    bl memcpy
    lis r3, 0x8100
    li r4, 0x80
    bl DCFlushRange
    lis r3, 0xcc00
    li r0, 0x43
    sth r0, 0x5012(r3)
    li r0, 0x8ac
    sth r0, 0x500a(r3)
    lhz r0, 0x500a(r3)
    ori r0, r0, 0x1
    sth r0, 0x500a(r3)
lbl___OSInitAudioSystem_00000298:
    lhz r0, 0x500a(r3)
    clrlwi. r0, r0, 31
    bne lbl___OSInitAudioSystem_00000298
    lis r4, 0xcc00
    li r0, 0x0
    sth r0, 0x5000(r4)
lbl___OSInitAudioSystem_000002B0:
    lhz r3, 0x5004(r4)
    lhz r0, 0x5006(r4)
    rlwimi r0, r3, 16, 0, 15
    clrrwi. r0, r0, 31
    bne lbl___OSInitAudioSystem_000002B0
    lis r4, 0xcc00
    lis r0, 0x100
    stw r0, 0x5020(r4)
    li r3, 0x0
    li r0, 0x20
    stw r3, 0x5024(r4)
    stw r0, 0x5028(r4)
    lhz r5, 0x500a(r4)
    b lbl___OSInitAudioSystem_000002EC
lbl___OSInitAudioSystem_000002E8:
    lhz r5, 0x500a(r4)
lbl___OSInitAudioSystem_000002EC:
    rlwinm. r0, r5, 0, 26, 26
    beq lbl___OSInitAudioSystem_000002E8
    lis r3, 0xcc00
    sth r5, 0x500a(r3)
    bl OSGetTick
    mr r31, r3
lbl___OSInitAudioSystem_00000304:
    bl OSGetTick
    subf r0, r31, r3
    cmpwi r0, 0x892
    blt lbl___OSInitAudioSystem_00000304
    lis r4, 0xcc00
    lis r0, 0x100
    stw r0, 0x5020(r4)
    li r3, 0x0
    li r0, 0x20
    stw r3, 0x5024(r4)
    stw r0, 0x5028(r4)
    lhz r5, 0x500a(r4)
    b lbl___OSInitAudioSystem_0000033C
lbl___OSInitAudioSystem_00000338:
    lhz r5, 0x500a(r4)
lbl___OSInitAudioSystem_0000033C:
    rlwinm. r0, r5, 0, 26, 26
    beq lbl___OSInitAudioSystem_00000338
    lis r3, 0xcc00
    sth r5, 0x500a(r3)
    lhz r0, 0x500a(r3)
    rlwinm r0, r0, 0, 21, 19
    sth r0, 0x500a(r3)
lbl___OSInitAudioSystem_00000358:
    lhz r0, 0x500a(r3)
    rlwinm. r0, r0, 0, 21, 21
    bne lbl___OSInitAudioSystem_00000358
    lis r3, 0xcc00
    lhz r0, 0x500a(r3)
    rlwinm r0, r0, 0, 30, 28
    sth r0, 0x500a(r3)
    lhz r0, 0x5004(r3)
    b lbl___OSInitAudioSystem_00000384
    nop
lbl___OSInitAudioSystem_00000380:
    lhz r0, 0x5004(r3)
lbl___OSInitAudioSystem_00000384:
    rlwinm. r0, r0, 0, 16, 16
    beq lbl___OSInitAudioSystem_00000380
    lis r4, 0xcc00
    li r0, 0x8ac
    lhz r3, 0x5006(r4)
    lhz r3, 0x500a(r4)
    ori r3, r3, 0x4
    sth r3, 0x500a(r4)
    sth r0, 0x500a(r4)
    lhz r0, 0x500a(r4)
    ori r0, r0, 0x1
    sth r0, 0x500a(r4)
    nop
lbl___OSInitAudioSystem_000003B8:
    lhz r0, 0x500a(r4)
    clrlwi. r0, r0, 31
    bne lbl___OSInitAudioSystem_000003B8
    bl OSGetArenaHi
    mr r4, r3
    lis r3, 0x8100
    subi r4, r4, 0x80
    li r5, 0x80
    bl memcpy
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void __OSStopAudioSystem(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, 0xcc00
    stw r0, 0x14(r1)
    li r0, 0x804
    stw r31, 0xc(r1)
    sth r0, 0x500a(r3)
    lhz r0, 0x5036(r3)
    clrlwi r0, r0, 17
    sth r0, 0x5036(r3)
    lhz r0, 0x500a(r3)
    b lbl___OSStopAudioSystem_00000424
lbl___OSStopAudioSystem_00000420:
    lhz r0, 0x500a(r3)
lbl___OSStopAudioSystem_00000424:
    rlwinm. r0, r0, 0, 21, 21
    bne lbl___OSStopAudioSystem_00000420
    lis r3, 0xcc00
    lhz r0, 0x500a(r3)
    b lbl___OSStopAudioSystem_0000043C
lbl___OSStopAudioSystem_00000438:
    lhz r0, 0x500a(r3)
lbl___OSStopAudioSystem_0000043C:
    rlwinm. r0, r0, 0, 22, 22
    bne lbl___OSStopAudioSystem_00000438
    lis r4, 0xcc00
    li r0, 0x8ac
    sth r0, 0x500a(r4)
    li r0, 0x0
    sth r0, 0x5000(r4)
lbl___OSStopAudioSystem_00000458:
    lhz r3, 0x5004(r4)
    lhz r0, 0x5006(r4)
    rlwimi r0, r3, 16, 0, 15
    clrrwi. r0, r0, 31
    bne lbl___OSStopAudioSystem_00000458
    bl OSGetTick
    mr r31, r3
lbl___OSStopAudioSystem_00000474:
    bl OSGetTick
    subf r0, r31, r3
    cmpwi r0, 0x2c
    blt lbl___OSStopAudioSystem_00000474
    lis r3, 0xcc00
    lhz r0, 0x500a(r3)
    ori r0, r0, 0x1
    sth r0, 0x500a(r3)
    lhz r0, 0x500a(r3)
    b lbl___OSStopAudioSystem_000004A4
    nop
lbl___OSStopAudioSystem_000004A0:
    lhz r0, 0x500a(r3)
lbl___OSStopAudioSystem_000004A4:
    clrlwi. r0, r0, 31
    bne lbl___OSStopAudioSystem_000004A0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
