#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void DCInvalidateRange(void);
extern void OSDisableInterrupts(void);
extern void OSGetCurrentThread(void);
extern void OSInitThreadQueue(void);
extern void OSRegisterShutdownFunction(void);
extern void OSRestoreInterrupts(void);
extern void OSSleepThread(void);
extern void OSWakeupThread(void);
extern void __OSErrorTable(void);
extern void __OSGetEffectivePriority(void);
extern void __OSMaskInterrupts(void);
extern void __OSPromoteThread(void);
extern void __OSSetInterruptHandler(void);
extern void __OSUnhandledException(void);
extern void __OSUnmaskInterrupts(void);

/* External data declarations */
extern u8 ShutdownFunctionInfo_8079D7E8[];

/* Small data declarations */

/* Function declarations */
void OSGetPhysicalMem2Size(void);
void OSGetConsoleSimulatedMem1Size(void);
void OSGetConsoleSimulatedMem2Size(void);
void fn_805F2980(void);
void MEMIntrruptHandler(void);
void fn_805F2A10(void);
void fn_805F2A90(void);
void fn_805F2B70(void);
void fn_805F2C50(void);
void fn_805F2D00(void);
void fn_805F2DE0(void);
void fn_805F2E90(void);
void BATConfig(void);
void fn_805F2FD0(void);
void __OSInitMemoryProtection(void);
void fn_805F30F0(void);
void fn_805F3130(void);
void fn_805F3210(void);

asm void OSGetPhysicalMem2Size(void)
{
    nofralloc
    lis r3, 0x8000
    lwz r3, 0x3118(r3)
    blr
}

asm void OSGetConsoleSimulatedMem1Size(void)
{
    nofralloc
    lis r3, 0x8000
    lwz r3, 0x3104(r3)
    blr
}

asm void OSGetConsoleSimulatedMem2Size(void)
{
    nofralloc
    lis r3, 0x8000
    lwz r3, 0x311c(r3)
    blr
}

asm void fn_805F2980(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    beq lbl_fn_805F2980_00000058
    lis r3, 0xcc00
    li r0, 0xff
    sth r0, 0x4010(r3)
    lis r3, 0xf000
    bl __OSMaskInterrupts
lbl_fn_805F2980_00000058:
    lwz r0, 0x14(r1)
    li r3, 0x1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void MEMIntrruptHandler(void)
{
    nofralloc
    lis r8, 0xcc00
    lis r3, __OSErrorTable@ha
    lhz r5, 0x401e(r8)
    li r0, 0x0
    lhz r7, 0x4024(r8)
    addi r3, r3, __OSErrorTable@l
    lhz r6, 0x4022(r8)
    rlwimi r6, r7, 16, 6, 15
    sth r0, 0x4020(r8)
    lwz r12, 0x3c(r3)
    cmpwi r12, 0x0
    beq lbl_MEMIntrruptHandler_000000B0
    li r3, 0xf
    crclr 6
    mtctr r12
    bctr
lbl_MEMIntrruptHandler_000000B0:
    li r3, 0xf
    b __OSUnhandledException
}

asm void fn_805F2A10(void)
{
    nofralloc
    li r7, 0x0
    lis r4, 0x0
    addi r4, r4, 0x2
    lis r3, 0x8000
    addi r3, r3, 0x1ff
    lis r6, 0x100
    addi r6, r6, 0x2
    lis r5, 0x8100
    addi r5, r5, 0xff
    isync
    mtdbatu 0, r7
    mtdbatl 0, r4
    mtdbatu 0, r3
    isync
    mtibatu 0, r7
    mtibatl 0, r4
    mtibatu 0, r3
    isync
    mtdbatu 2, r7
    mtdbatl 2, r6
    mtdbatu 2, r5
    isync
    mtibatu 2, r7
    mtibatl 2, r6
    mtibatu 2, r5
    isync
    mfmsr r3
    ori r3, r3, 0x30
    mtsrr1 r3
    mflr r3
    mtsrr0 r3
    rfi
}

asm void fn_805F2A90(void)
{
    nofralloc
    li r7, 0x0
    lis r4, 0x1000
    addi r4, r4, 0x2
    lis r3, 0x9000
    addi r3, r3, 0x3ff
    lis r6, 0x1000
    addi r6, r6, 0x2a
    lis r5, 0xd000
    addi r5, r5, 0x7ff
    isync
    mtspr 568, r7
    mtspr 569, r4
    mtspr 568, r3
    isync
    mtspr 560, r7
    mtspr 561, r7
    isync
    mtspr 570, r7
    mtspr 571, r6
    mtspr 570, r5
    isync
    mtspr 562, r7
    mtspr 563, r7
    isync
    lis r4, 0x1200
    addi r4, r4, 0x2
    lis r3, 0x9200
    addi r3, r3, 0x1ff
    lis r6, 0x1300
    addi r6, r6, 0x2
    lis r5, 0x9300
    addi r5, r5, 0x7f
    isync
    mtspr 572, r7
    mtspr 573, r4
    mtspr 572, r3
    isync
    mtspr 564, r7
    mtspr 565, r7
    isync
    mtspr 574, r7
    mtspr 575, r6
    mtspr 574, r5
    isync
    mtspr 566, r7
    mtspr 567, r7
    isync
    mfmsr r3
    ori r3, r3, 0x30
    mtsrr1 r3
    mflr r3
    mtsrr0 r3
    rfi
}

asm void fn_805F2B70(void)
{
    nofralloc
    li r7, 0x0
    lis r4, 0x1000
    addi r4, r4, 0x2
    lis r3, 0x9000
    addi r3, r3, 0x3ff
    lis r6, 0x1000
    addi r6, r6, 0x2a
    lis r5, 0xd000
    addi r5, r5, 0x7ff
    isync
    mtspr 568, r7
    mtspr 569, r4
    mtspr 568, r3
    isync
    mtspr 560, r7
    mtspr 561, r7
    isync
    mtspr 570, r7
    mtspr 571, r6
    mtspr 570, r5
    isync
    mtspr 562, r7
    mtspr 563, r7
    isync
    lis r4, 0x1200
    addi r4, r4, 0x2
    lis r3, 0x9200
    addi r3, r3, 0x1ff
    lis r6, 0x1300
    addi r6, r6, 0x2
    lis r5, 0x9300
    addi r5, r5, 0xff
    isync
    mtspr 572, r7
    mtspr 573, r4
    mtspr 572, r3
    isync
    mtspr 564, r7
    mtspr 565, r7
    isync
    mtspr 574, r7
    mtspr 575, r6
    mtspr 574, r5
    isync
    mtspr 566, r7
    mtspr 567, r7
    isync
    mfmsr r3
    ori r3, r3, 0x30
    mtsrr1 r3
    mflr r3
    mtsrr0 r3
    rfi
}

asm void fn_805F2C50(void)
{
    nofralloc
    li r7, 0x0
    lis r4, 0x1000
    addi r4, r4, 0x2
    lis r3, 0x9000
    addi r3, r3, 0x7ff
    lis r6, 0x1000
    addi r6, r6, 0x2a
    lis r5, 0xd000
    addi r5, r5, 0x7ff
    isync
    mtspr 568, r7
    mtspr 569, r4
    mtspr 568, r3
    isync
    mtspr 560, r7
    mtspr 561, r7
    isync
    mtspr 570, r7
    mtspr 571, r6
    mtspr 570, r5
    isync
    mtspr 562, r7
    mtspr 563, r7
    isync
    mtspr 564, r7
    mtspr 565, r7
    isync
    mtspr 566, r7
    mtspr 567, r7
    isync
    mtspr 572, r7
    mtspr 573, r7
    isync
    mtspr 574, r7
    mtspr 575, r7
    isync
    mfmsr r3
    ori r3, r3, 0x30
    mtsrr1 r3
    mflr r3
    mtsrr0 r3
    rfi
}

asm void fn_805F2D00(void)
{
    nofralloc
    li r7, 0x0
    lis r4, 0x1000
    addi r4, r4, 0x2
    lis r3, 0x9000
    addi r3, r3, 0x7ff
    lis r6, 0x1000
    addi r6, r6, 0x2a
    lis r5, 0xd000
    addi r5, r5, 0xfff
    isync
    mtspr 568, r7
    mtspr 569, r4
    mtspr 568, r3
    isync
    mtspr 560, r7
    mtspr 561, r7
    isync
    mtspr 570, r7
    mtspr 571, r6
    mtspr 570, r5
    isync
    mtspr 562, r7
    mtspr 563, r7
    isync
    lis r4, 0x1400
    addi r4, r4, 0x2
    lis r3, 0x9400
    addi r3, r3, 0x3ff
    lis r6, 0x1600
    addi r6, r6, 0x2
    lis r5, 0x9600
    addi r5, r5, 0x1ff
    isync
    mtspr 572, r7
    mtspr 573, r4
    mtspr 572, r3
    isync
    mtspr 564, r7
    mtspr 565, r7
    isync
    mtspr 574, r7
    mtspr 575, r6
    mtspr 574, r5
    isync
    mtspr 566, r7
    mtspr 567, r7
    isync
    mfmsr r3
    ori r3, r3, 0x30
    mtsrr1 r3
    mflr r3
    mtsrr0 r3
    rfi
}

asm void fn_805F2DE0(void)
{
    nofralloc
    li r7, 0x0
    lis r4, 0x1000
    addi r4, r4, 0x2
    lis r3, 0x9000
    addi r3, r3, 0xfff
    lis r6, 0x1000
    addi r6, r6, 0x2a
    lis r5, 0xd000
    addi r5, r5, 0xfff
    isync
    mtspr 568, r7
    mtspr 569, r4
    mtspr 568, r3
    isync
    mtspr 560, r7
    mtspr 561, r7
    isync
    mtspr 570, r7
    mtspr 571, r6
    mtspr 570, r5
    isync
    mtspr 562, r7
    mtspr 563, r7
    isync
    mtspr 564, r7
    mtspr 565, r7
    isync
    mtspr 566, r7
    mtspr 567, r7
    isync
    mtspr 572, r7
    mtspr 573, r7
    isync
    mtspr 574, r7
    mtspr 575, r7
    isync
    mfmsr r3
    ori r3, r3, 0x30
    mtsrr1 r3
    mflr r3
    mtsrr0 r3
    rfi
}

asm void fn_805F2E90(void)
{
    nofralloc
    clrlwi r3, r3, 2
    mtsrr0 r3
    mfmsr r3
    rlwinm r3, r3, 0, 28, 25
    mtsrr1 r3
    rfi
}

asm void BATConfig(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, 0x8000
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, 0x3104(r4)
    lwz r0, 0x3100(r4)
    cmplw r31, r0
    bge lbl_BATConfig_000005B0
    subis r0, r31, 0x180
    cmplwi r0, 0x0
    bne lbl_BATConfig_000005B0
    lis r3, 0x8180
    lis r4, 0x180
    bl DCInvalidateRange
    lis r3, 0xcc00
    li r0, 0x2
    sth r0, 0x4028(r3)
lbl_BATConfig_000005B0:
    lis r0, 0x180
    cmplw r31, r0
    bgt lbl_BATConfig_000005C8
    lis r3, fn_805F2A10@ha
    addi r3, r3, fn_805F2A10@l
    bl fn_805F2E90
lbl_BATConfig_000005C8:
    lis r3, 0x8000
    lis r0, 0x400
    lwz r4, 0x311c(r3)
    lwz r3, 0x3120(r3)
    cmplw r4, r0
    bgt lbl_BATConfig_00000628
    lis r0, 0x9340
    cmplw r3, r0
    bgt lbl_BATConfig_000005FC
    lis r3, fn_805F2A90@ha
    addi r3, r3, fn_805F2A90@l
    bl fn_805F2E90
    b lbl_BATConfig_0000065C
lbl_BATConfig_000005FC:
    lis r0, 0x9380
    cmplw r3, r0
    bgt lbl_BATConfig_00000618
    lis r3, fn_805F2B70@ha
    addi r3, r3, fn_805F2B70@l
    bl fn_805F2E90
    b lbl_BATConfig_0000065C
lbl_BATConfig_00000618:
    lis r3, fn_805F2C50@ha
    addi r3, r3, fn_805F2C50@l
    bl fn_805F2E90
    b lbl_BATConfig_0000065C
lbl_BATConfig_00000628:
    lis r0, 0x800
    cmplw r4, r0
    bgt lbl_BATConfig_0000065C
    lis r0, 0x9700
    cmplw r3, r0
    bgt lbl_BATConfig_00000650
    lis r3, fn_805F2D00@ha
    addi r3, r3, fn_805F2D00@l
    bl fn_805F2E90
    b lbl_BATConfig_0000065C
lbl_BATConfig_00000650:
    lis r3, fn_805F2DE0@ha
    addi r3, r3, fn_805F2DE0@l
    bl fn_805F2E90
lbl_BATConfig_0000065C:
    subis r0, r30, 0xb
lbl_BATConfig_00000660:
    cmplwi r0, 0xa2cf
    bne lbl_BATConfig_00000660
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805F2FD0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, fn_805F2A10@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r4, fn_805F2A10@l
    bl fn_805F2E90
    subis r0, r31, 0xb
    nop
lbl_fn_805F2FD0_000006A8:
    cmplwi r0, 0xa2cf
    bne lbl_fn_805F2FD0_000006A8
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void __OSInitMemoryProtection(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, -0x5a88(r13)
    stw r31, 0xc(r1)
    cmpwi r0, 0x0
    stw r30, 0x8(r1)
    bne lbl___OSInitMemoryProtection_00000784
    bl OSDisableInterrupts
    lis r4, 0xcc00
    li r0, 0x0
    sth r0, 0x4020(r4)
    li r0, 0xff
    mr r30, r3
    lis r3, 0xf000
    sth r0, 0x4010(r4)
    bl __OSMaskInterrupts
    lis r31, MEMIntrruptHandler@ha
    li r3, 0x0
    addi r4, r31, MEMIntrruptHandler@l
    bl __OSSetInterruptHandler
    addi r4, r31, MEMIntrruptHandler@l
    li r3, 0x1
    bl __OSSetInterruptHandler
    addi r4, r31, MEMIntrruptHandler@l
    li r3, 0x2
    bl __OSSetInterruptHandler
    addi r4, r31, MEMIntrruptHandler@l
    li r3, 0x3
    bl __OSSetInterruptHandler
    addi r4, r31, MEMIntrruptHandler@l
    li r3, 0x4
    bl __OSSetInterruptHandler
    lis r3, ShutdownFunctionInfo_8079D7E8@ha
    addi r3, r3, ShutdownFunctionInfo_8079D7E8@l
    bl OSRegisterShutdownFunction
    lis r3, 0xc
    subi r3, r3, 0x5d31
    bl BATConfig
    lis r3, 0x800
    bl __OSUnmaskInterrupts
    li r0, 0x1
    stw r0, -0x5a88(r13)
    mr r3, r30
    bl OSRestoreInterrupts
lbl___OSInitMemoryProtection_00000784:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805F30F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSInitThreadQueue
    li r0, 0x0
    stw r0, 0x8(r31)
    stw r0, 0xc(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805F3130(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl OSDisableInterrupts
    mr r29, r3
    bl OSGetCurrentThread
    mr r30, r3
    li r31, 0x0
lbl_fn_805F3130_00000814:
    lwz r0, 0x8(r28)
    cmpwi r0, 0x0
    bne lbl_fn_805F3130_0000085C
    lwz r3, 0xc(r28)
    stw r30, 0x8(r28)
    addi r0, r3, 0x1
    stw r0, 0xc(r28)
    lwz r3, 0x2f8(r30)
    cmpwi r3, 0x0
    bne lbl_fn_805F3130_00000844
    stw r28, 0x2f4(r30)
    b lbl_fn_805F3130_00000848
lbl_fn_805F3130_00000844:
    stw r28, 0x10(r3)
lbl_fn_805F3130_00000848:
    li r0, 0x0
    stw r3, 0x14(r28)
    stw r0, 0x10(r28)
    stw r28, 0x2f8(r30)
    b lbl_fn_805F3130_00000894
lbl_fn_805F3130_0000085C:
    cmplw r0, r30
    bne lbl_fn_805F3130_00000874
    lwz r3, 0xc(r28)
    addi r0, r3, 0x1
    stw r0, 0xc(r28)
    b lbl_fn_805F3130_00000894
lbl_fn_805F3130_00000874:
    stw r28, 0x2f0(r30)
    lwz r3, 0x8(r28)
    lwz r4, 0x2d0(r30)
    bl __OSPromoteThread
    mr r3, r28
    bl OSSleepThread
    stw r31, 0x2f0(r30)
    b lbl_fn_805F3130_00000814
lbl_fn_805F3130_00000894:
    mr r3, r29
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805F3210(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    mr r31, r3
    bl OSGetCurrentThread
    lwz r0, 0x8(r29)
    mr r30, r3
    cmplw r0, r3
    bne lbl_fn_805F3210_00000964
    lwz r0, 0xc(r29)
    subic. r0, r0, 0x1
    stw r0, 0xc(r29)
    bne lbl_fn_805F3210_00000964
    lwz r4, 0x10(r29)
    lwz r5, 0x14(r29)
    cmpwi r4, 0x0
    bne lbl_fn_805F3210_00000920
    stw r5, 0x2f8(r3)
    b lbl_fn_805F3210_00000924
lbl_fn_805F3210_00000920:
    stw r5, 0x14(r4)
lbl_fn_805F3210_00000924:
    cmpwi r5, 0x0
    bne lbl_fn_805F3210_00000934
    stw r4, 0x2f4(r3)
    b lbl_fn_805F3210_00000938
lbl_fn_805F3210_00000934:
    stw r4, 0x10(r5)
lbl_fn_805F3210_00000938:
    li r0, 0x0
    stw r0, 0x8(r29)
    lwz r4, 0x2d0(r3)
    lwz r0, 0x2d4(r3)
    cmpw r4, r0
    bge lbl_fn_805F3210_0000095C
    mr r3, r30
    bl __OSGetEffectivePriority
    stw r3, 0x2d0(r30)
lbl_fn_805F3210_0000095C:
    mr r3, r29
    bl OSWakeupThread
lbl_fn_805F3210_00000964:
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
