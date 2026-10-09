#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void DCFlushRangeNoSync(void);
extern void ICInvalidateRange(void);
extern void __OSSystemCallVectorEnd(void);
extern void __OSSystemCallVectorStart(void);

/* External data declarations */

/* Small data declarations */

/* Function declarations */
void fn_805F48A0(void);
void __OSInitSystemCall(void);
void __OSSystemCallVectorEnd(void);
void __OSSystemCallVectorStart(void);

asm void fn_805F48A0(void)
{
    nofralloc
entry __OSSystemCallVectorStart
    mfspr r9, HID0
    ori r10, r9, 0x8
    mtspr HID0, r10
    isync
    sync
    mtspr HID0, r9
    rfi
entry __OSSystemCallVectorEnd
    nop
}

asm void __OSInitSystemCall(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, __OSSystemCallVectorStart@ha
    lis r5, __OSSystemCallVectorEnd@ha
    stw r0, 0x14(r1)
    addi r4, r4, __OSSystemCallVectorStart@l
    addi r5, r5, __OSSystemCallVectorEnd@l
    stw r31, 0xc(r1)
    lis r31, 0x8000
    addi r3, r31, 0xc00
    subf r5, r4, r5
    bl memcpy
    addi r3, r31, 0xc00
    li r4, 0x100
    bl DCFlushRangeNoSync
    sync
    addi r3, r31, 0xc00
    li r4, 0x100
    bl ICInvalidateRange
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
