#include "revolution/types.h"
#include "revolution/os.h"

/* External symbols */
extern u8 WaitingQueue_807D1030[];
extern void (*lbl_8087FDA0)(s32, s32);
extern u8 lbl_807D1060[];
extern u8 lbl_807D10EC[];
extern BOOL fn_8061FBE0(void*, void*, void*);

/* Function declarations */
void __DVDClearWaitingQueue(void);
BOOL fn_805FF530(s32 prio, void* block);
void* fn_805FF5A0(void);
BOOL fn_805FF640(void);
void* fn_805FF6A0(void);
BOOL fn_805FF710(void* block);
void fn_805FF770(s32 arg0);
void fn_805FF7A0(void);

asm void __DVDClearWaitingQueue(void)
{
    nofralloc
    lis r6, WaitingQueue_807D1030@ha
    addi r6, r6, WaitingQueue_807D1030@l
    stw r6, 0x0(r6)
    addi r5, r6, 0x8
    addi r4, r6, 0x10
    addi r3, r6, 0x18
    stw r6, 0x4(r6)
    stw r5, 0x0(r5)
    stw r5, 0x4(r5)
    stw r4, 0x0(r4)
    stw r4, 0x4(r4)
    stw r3, 0x0(r3)
    stw r3, 0x4(r3)
    blr
}

asm BOOL fn_805FF530(s32 prio, void* block)
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
    lis r4, WaitingQueue_807D1030@ha
    slwi r0, r30, 3
    addi r4, r4, WaitingQueue_807D1030@l
    add r5, r4, r0
    lwz r4, 0x4(r5)
    stw r31, 0x0(r4)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r31)
    stw r5, 0x0(r31)
    stw r31, 0x4(r5)
    bl OSRestoreInterrupts
    lwz r31, 0xc(r1)
    li r3, 0x1
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void* fn_805FF5A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lis r4, WaitingQueue_807D1030@ha
    li r0, 0x4
    li r31, 0x0
    addi r4, r4, WaitingQueue_807D1030@l
    mtctr r0
lbl_loop:
    lwz r0, 0x0(r4)
    cmplw r0, r4
    beq lbl_next
    bl OSRestoreInterrupts
    bl OSDisableInterrupts
    lis r4, WaitingQueue_807D1030@ha
    slwi r0, r31, 3
    addi r4, r4, WaitingQueue_807D1030@l
    lwzx r31, r4, r0
    add r5, r4, r0
    lwz r0, 0x0(r31)
    stw r0, 0x0(r5)
    lwz r4, 0x0(r31)
    stw r5, 0x4(r4)
    bl OSRestoreInterrupts
    li r0, 0x0
    stw r0, 0x0(r31)
    mr r3, r31
    stw r0, 0x4(r31)
    b lbl_exit
lbl_next:
    addi r4, r4, 0x8
    addi r31, r31, 0x1
    bdnz lbl_loop
    bl OSRestoreInterrupts
    li r3, 0x0
lbl_exit:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm BOOL fn_805FF640(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl OSDisableInterrupts
    lis r4, WaitingQueue_807D1030@ha
    li r0, 0x4
    addi r4, r4, WaitingQueue_807D1030@l
    mtctr r0
lbl_loop:
    lwz r0, 0x0(r4)
    cmplw r0, r4
    beq lbl_next
    bl OSRestoreInterrupts
    li r3, 0x1
    b lbl_exit
lbl_next:
    addi r4, r4, 0x8
    bdnz lbl_loop
    bl OSRestoreInterrupts
    li r3, 0x0
lbl_exit:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void* fn_805FF6A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lis r4, WaitingQueue_807D1030@ha
    li r0, 0x4
    addi r4, r4, WaitingQueue_807D1030@l
    mtctr r0
    nop
lbl_loop:
    lwz r31, 0x0(r4)
    cmplw r31, r4
    beq lbl_next
    bl OSRestoreInterrupts
    mr r3, r31
    b lbl_exit
lbl_next:
    addi r4, r4, 0x8
    bdnz lbl_loop
    bl OSRestoreInterrupts
    li r3, 0x0
lbl_exit:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm BOOL fn_805FF710(void* block)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lwz r4, 0x4(r31)
    lwz r5, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fail
    cmpwi r5, 0x0
    bne lbl_unlink
lbl_fail:
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_exit
lbl_unlink:
    stw r5, 0x0(r4)
    stw r4, 0x4(r5)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_exit:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805FF770(s32 arg0)
{
    nofralloc
    lwz r12, lbl_8087FDA0
    cmpwi r12, 0x0
    beqlr
    cntlzw r0, r3
    li r4, 0x0
    extrwi r0, r0, 1, 26
    neg r3, r0
    addi r3, r3, 0x2
    mtctr r12
    bctr
    blr
}

asm void fn_805FF7A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_807D1060@ha
    lis r4, fn_805FF770@ha
    lis r5, lbl_807D10EC@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_807D1060@l
    addi r4, r4, fn_805FF770@l
    addi r5, r5, lbl_807D10EC@l
    bl fn_8061FBE0
    cmpwi r3, 0x0
    beq lbl_exit
    lwz r12, lbl_8087FDA0
    cmpwi r12, 0x0
    beq lbl_exit
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
lbl_exit:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
