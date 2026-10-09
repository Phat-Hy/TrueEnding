#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void DCInvalidateRange(void);
extern void EXIDeselect(void);
extern void EXIDma(void);
extern void EXIImm(void);
extern void EXILock(void);
extern void EXISelect(void);
extern void EXISync(void);
extern void EXIUnlock(void);
extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);
extern void fn_805E7E00(void);
extern void fn_805F3DF0(void);

/* External data declarations */
extern u8 Scb_807CB600[];

/* Small data declarations */

/* Function declarations */
void __OSInitSram(void);
void UnlockSram(void);
void __OSSyncSram(void);
void fn_805F4420(void);
void fn_805F4550(void);
void fn_805F45D0(void);
void __OSGetRTCFlags(void);
void __OSClearRTCFlags(void);

asm void __OSInitSram(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x40
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, Scb_807CB600@ha
    addi r30, r30, Scb_807CB600@l
    stw r0, 0x44(r30)
    mr r3, r30
    stw r0, 0x48(r30)
    bl DCInvalidateRange
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    bl EXILock
    cmpwi r3, 0x0
    bne lbl___OSInitSram_00000054
    li r3, 0x0
    b lbl___OSInitSram_00000118
lbl___OSInitSram_00000054:
    li r3, 0x0
    li r4, 0x1
    li r5, 0x3
    bl EXISelect
    cmpwi r3, 0x0
    bne lbl___OSInitSram_0000007C
    li r3, 0x0
    bl EXIUnlock
    li r3, 0x0
    b lbl___OSInitSram_00000118
lbl___OSInitSram_0000007C:
    lis r3, 0x2000
    addi r4, r1, 0x8
    addi r0, r3, 0x100
    stw r0, 0x8(r1)
    li r3, 0x0
    li r5, 0x4
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    li r3, 0x0
    srwi r31, r0, 5
    bl EXISync
    cntlzw r0, r3
    mr r4, r30
    srwi r0, r0, 5
    li r3, 0x0
    or r30, r31, r0
    li r5, 0x40
    li r6, 0x0
    li r7, 0x0
    bl EXIDma
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r30, r30, r0
    bl EXISync
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r30, r30, r0
    bl EXIDeselect
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r30, r30, r0
    bl EXIUnlock
    cntlzw r0, r30
    srwi r3, r0, 5
lbl___OSInitSram_00000118:
    lis r31, Scb_807CB600@ha
    li r0, 0x40
    addi r31, r31, Scb_807CB600@l
    stw r3, 0x4c(r31)
    stw r0, 0x40(r31)
    bl OSDisableInterrupts
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    beq lbl___OSInitSram_00000148
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl___OSInitSram_00000158
lbl___OSInitSram_00000148:
    li r0, 0x1
    stw r3, 0x44(r31)
    addi r3, r31, 0x14
    stw r0, 0x48(r31)
lbl___OSInitSram_00000158:
    lhz r30, 0x28(r3)
    li r3, 0x0
    li r4, 0x14
    bl UnlockSram
    rlwinm r0, r30, 0, 17, 21
    cmplwi r0, 0x5000
    beq lbl___OSInitSram_00000180
    rlwinm r0, r30, 0, 24, 25
    cmplwi r0, 0xc0
    bne lbl___OSInitSram_00000184
lbl___OSInitSram_00000180:
    li r30, 0x0
lbl___OSInitSram_00000184:
    bl OSDisableInterrupts
    lis r4, Scb_807CB600@ha
    addi r4, r4, Scb_807CB600@l
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    beq lbl___OSInitSram_000001A8
    bl OSRestoreInterrupts
    li r5, 0x0
    b lbl___OSInitSram_000001B8
lbl___OSInitSram_000001A8:
    li r0, 0x1
    stw r3, 0x44(r4)
    addi r5, r4, 0x14
    stw r0, 0x48(r4)
lbl___OSInitSram_000001B8:
    lhz r0, 0x28(r5)
    clrlwi r3, r30, 16
    cmplw r3, r0
    bne lbl___OSInitSram_000001D8
    li r3, 0x0
    li r4, 0x14
    bl UnlockSram
    b lbl___OSInitSram_000001E8
lbl___OSInitSram_000001D8:
    sth r30, 0x28(r5)
    li r3, 0x1
    li r4, 0x14
    bl UnlockSram
lbl___OSInitSram_000001E8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void UnlockSram(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    beq lbl_UnlockSram_000004A8
    cmpwi r4, 0x0
    bne lbl_UnlockSram_00000354
    lis r8, Scb_807CB600@ha
    addi r8, r8, Scb_807CB600@l
    lbz r3, 0x13(r8)
    clrlwi r0, r3, 30
    cmplwi r0, 0x2
    ble lbl_UnlockSram_00000248
    rlwinm r0, r3, 0, 24, 29
    stb r0, 0x13(r8)
lbl_UnlockSram_00000248:
    lis r3, Scb_807CB600@ha
    li r0, 0x0
    addi r3, r3, Scb_807CB600@l
    addi r7, r8, 0xc
    addi r5, r3, 0x14
    sth r0, 0x2(r8)
    addi r3, r5, 0x1
    subf r3, r7, r3
    cmplw r7, r5
    sth r0, 0x0(r8)
    srwi r3, r3, 1
    bge lbl_UnlockSram_00000354
    srwi. r0, r3, 2
    mtctr r0
    beq lbl_UnlockSram_00000324
lbl_UnlockSram_00000284:
    lhz r6, 0x0(r8)
    lhz r0, 0x0(r7)
    lhz r5, 0x2(r8)
    add r0, r6, r0
    sth r0, 0x0(r8)
    clrlwi r6, r0, 16
    lhz r0, 0x0(r7)
    nor r0, r0, r0
    add r0, r5, r0
    sth r0, 0x2(r8)
    clrlwi r5, r0, 16
    lhz r0, 0x2(r7)
    add r0, r6, r0
    sth r0, 0x0(r8)
    clrlwi r6, r0, 16
    lhz r0, 0x2(r7)
    nor r0, r0, r0
    add r0, r5, r0
    sth r0, 0x2(r8)
    clrlwi r5, r0, 16
    lhz r0, 0x4(r7)
    add r0, r6, r0
    sth r0, 0x0(r8)
    clrlwi r6, r0, 16
    lhz r0, 0x4(r7)
    nor r0, r0, r0
    add r0, r5, r0
    sth r0, 0x2(r8)
    clrlwi r5, r0, 16
    lhz r0, 0x6(r7)
    add r0, r6, r0
    sth r0, 0x0(r8)
    lhz r0, 0x6(r7)
    addi r7, r7, 0x8
    nor r0, r0, r0
    add r0, r5, r0
    sth r0, 0x2(r8)
    bdnz lbl_UnlockSram_00000284
    andi. r3, r3, 0x3
    beq lbl_UnlockSram_00000354
lbl_UnlockSram_00000324:
    mtctr r3
lbl_UnlockSram_00000328:
    lhz r6, 0x0(r8)
    lhz r0, 0x0(r7)
    lhz r5, 0x2(r8)
    add r0, r6, r0
    sth r0, 0x0(r8)
    lhz r0, 0x0(r7)
    addi r7, r7, 0x2
    nor r0, r0, r0
    add r0, r5, r0
    sth r0, 0x2(r8)
    bdnz lbl_UnlockSram_00000328
lbl_UnlockSram_00000354:
    lis r3, Scb_807CB600@ha
    addi r3, r3, Scb_807CB600@l
    lwz r0, 0x40(r3)
    cmplw r4, r0
    bge lbl_UnlockSram_0000036C
    stw r4, 0x40(r3)
lbl_UnlockSram_0000036C:
    lis r4, Scb_807CB600@ha
    addi r4, r4, Scb_807CB600@l
    lwz r0, 0x40(r4)
    cmplwi r0, 0x14
    bgt lbl_UnlockSram_000003A4
    lhz r3, 0x3c(r4)
    rlwinm r0, r3, 0, 17, 21
    cmplwi r0, 0x5000
    beq lbl_UnlockSram_0000039C
    rlwinm r0, r3, 0, 24, 25
    cmplwi r0, 0xc0
    bne lbl_UnlockSram_000003A4
lbl_UnlockSram_0000039C:
    li r0, 0x0
    sth r0, 0x3c(r4)
lbl_UnlockSram_000003A4:
    lis r6, Scb_807CB600@ha
    lis r5, fn_805F3DF0@ha
    addi r6, r6, Scb_807CB600@l
    li r3, 0x0
    lwz r31, 0x40(r6)
    addi r5, r5, fn_805F3DF0@l
    li r4, 0x1
    subfic r29, r31, 0x40
    add r30, r6, r31
    bl EXILock
    cmpwi r3, 0x0
    bne lbl_UnlockSram_000003DC
    li r0, 0x0
    b lbl_UnlockSram_0000048C
lbl_UnlockSram_000003DC:
    li r3, 0x0
    li r4, 0x1
    li r5, 0x3
    bl EXISelect
    cmpwi r3, 0x0
    bne lbl_UnlockSram_00000404
    li r3, 0x0
    bl EXIUnlock
    li r0, 0x0
    b lbl_UnlockSram_0000048C
lbl_UnlockSram_00000404:
    slwi r3, r31, 6
    addi r4, r1, 0x8
    addi r0, r3, 0x100
    li r5, 0x4
    oris r0, r0, 0xa000
    stw r0, 0x8(r1)
    li r3, 0x0
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    li r3, 0x0
    srwi r31, r0, 5
    bl EXISync
    cntlzw r0, r3
    mr r4, r30
    srwi r0, r0, 5
    mr r5, r29
    or r29, r31, r0
    li r3, 0x0
    li r6, 0x1
    bl fn_805E7E00
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r29, r29, r0
    bl EXIDeselect
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r29, r29, r0
    bl EXIUnlock
    cntlzw r0, r29
    srwi r0, r0, 5
lbl_UnlockSram_0000048C:
    lis r3, Scb_807CB600@ha
    cmpwi r0, 0x0
    addi r3, r3, Scb_807CB600@l
    stw r0, 0x4c(r3)
    beq lbl_UnlockSram_000004A8
    li r0, 0x40
    stw r0, 0x40(r3)
lbl_UnlockSram_000004A8:
    lis r31, Scb_807CB600@ha
    li r0, 0x0
    addi r31, r31, Scb_807CB600@l
    stw r0, 0x48(r31)
    lwz r3, 0x44(r31)
    bl OSRestoreInterrupts
    lwz r3, 0x4c(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void __OSSyncSram(void)
{
    nofralloc
    lis r3, Scb_807CB600@ha
    addi r3, r3, Scb_807CB600@l
    lwz r3, 0x4c(r3)
    blr
}

asm void fn_805F4420(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl DCInvalidateRange
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    bl EXILock
    cmpwi r3, 0x0
    bne lbl_fn_805F4420_00000538
    li r3, 0x0
    b lbl_fn_805F4420_000005F8
lbl_fn_805F4420_00000538:
    li r3, 0x0
    li r4, 0x1
    li r5, 0x3
    bl EXISelect
    cmpwi r3, 0x0
    bne lbl_fn_805F4420_00000560
    li r3, 0x0
    bl EXIUnlock
    li r3, 0x0
    b lbl_fn_805F4420_000005F8
lbl_fn_805F4420_00000560:
    slwi r0, r31, 6
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    li r3, 0x0
    li r5, 0x4
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    li r3, 0x0
    srwi r31, r0, 5
    bl EXISync
    cntlzw r0, r3
    mr r4, r29
    srwi r0, r0, 5
    mr r5, r30
    or r31, r31, r0
    li r3, 0x0
    li r6, 0x0
    li r7, 0x0
    bl EXIDma
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r31, r31, r0
    bl EXISync
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r31, r31, r0
    bl EXIDeselect
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r31, r31, r0
    bl EXIUnlock
    cntlzw r0, r31
    srwi r3, r0, 5
lbl_fn_805F4420_000005F8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805F4550(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lis r4, Scb_807CB600@ha
    addi r4, r4, Scb_807CB600@l
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805F4550_00000658
    bl OSRestoreInterrupts
    li r5, 0x0
    b lbl_fn_805F4550_00000668
lbl_fn_805F4550_00000658:
    li r0, 0x1
    stw r3, 0x44(r4)
    addi r5, r4, 0x14
    stw r0, 0x48(r4)
lbl_fn_805F4550_00000668:
    slwi r0, r31, 1
    li r3, 0x0
    add r5, r5, r0
    li r4, 0x14
    lhz r31, 0x1c(r5)
    bl UnlockSram
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805F45D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lis r4, Scb_807CB600@ha
    addi r4, r4, Scb_807CB600@l
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805F45D0_000006E0
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_805F45D0_000006F0
lbl_fn_805F45D0_000006E0:
    li r0, 0x1
    stw r3, 0x44(r4)
    addi r3, r4, 0x14
    stw r0, 0x48(r4)
lbl_fn_805F45D0_000006F0:
    slwi r0, r30, 1
    add r3, r3, r0
    lhz r0, 0x1c(r3)
    cmplw r31, r0
    beq lbl_fn_805F45D0_00000718
    sth r31, 0x1c(r3)
    li r3, 0x1
    li r4, 0x14
    bl UnlockSram
    b lbl_fn_805F45D0_00000724
lbl_fn_805F45D0_00000718:
    li r3, 0x0
    li r4, 0x14
    bl UnlockSram
lbl_fn_805F45D0_00000724:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void __OSGetRTCFlags(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x1
    li r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r3, 0x0
    bl EXILock
    cmpwi r3, 0x0
    bne lbl___OSGetRTCFlags_00000778
    li r3, 0x0
    b lbl___OSGetRTCFlags_00000844
lbl___OSGetRTCFlags_00000778:
    li r3, 0x0
    li r4, 0x1
    li r5, 0x3
    bl EXISelect
    cmpwi r3, 0x0
    bne lbl___OSGetRTCFlags_000007A0
    li r3, 0x0
    bl EXIUnlock
    li r3, 0x0
    b lbl___OSGetRTCFlags_00000844
lbl___OSGetRTCFlags_000007A0:
    lis r3, 0x2100
    addi r4, r1, 0x8
    addi r0, r3, 0x800
    stw r0, 0x8(r1)
    li r3, 0x0
    li r5, 0x4
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    li r3, 0x0
    srwi r31, r0, 5
    bl EXISync
    cntlzw r0, r3
    addi r4, r1, 0x8
    srwi r0, r0, 5
    li r3, 0x0
    or r31, r31, r0
    li r5, 0x4
    li r6, 0x0
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r31, r31, r0
    bl EXISync
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r31, r31, r0
    bl EXIDeselect
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r31, r31, r0
    bl EXIUnlock
    lwz r3, 0x8(r1)
    cntlzw r0, r31
    stw r3, 0x0(r30)
    srwi r3, r0, 5
lbl___OSGetRTCFlags_00000844:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void __OSClearRTCFlags(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r3, 0x0
    li r4, 0x1
    stw r0, 0x24(r1)
    li r0, 0x0
    li r5, 0x0
    stw r31, 0x1c(r1)
    stw r0, 0x8(r1)
    bl EXILock
    cmpwi r3, 0x0
    bne lbl___OSClearRTCFlags_00000898
    li r3, 0x0
    b lbl___OSClearRTCFlags_0000095C
lbl___OSClearRTCFlags_00000898:
    li r3, 0x0
    li r4, 0x1
    li r5, 0x3
    bl EXISelect
    cmpwi r3, 0x0
    bne lbl___OSClearRTCFlags_000008C0
    li r3, 0x0
    bl EXIUnlock
    li r3, 0x0
    b lbl___OSClearRTCFlags_0000095C
lbl___OSClearRTCFlags_000008C0:
    lis r3, 0xa100
    addi r4, r1, 0xc
    addi r0, r3, 0x800
    stw r0, 0xc(r1)
    li r3, 0x0
    li r5, 0x4
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    li r3, 0x0
    srwi r31, r0, 5
    bl EXISync
    cntlzw r0, r3
    addi r4, r1, 0x8
    srwi r0, r0, 5
    li r3, 0x0
    or r31, r31, r0
    li r5, 0x4
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r31, r31, r0
    bl EXISync
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r31, r31, r0
    bl EXIDeselect
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r31, r31, r0
    bl EXIUnlock
    cntlzw r0, r31
    srwi r3, r0, 5
lbl___OSClearRTCFlags_0000095C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
