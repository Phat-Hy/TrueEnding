#include "revolution/types.h"
#include "revolution/os.h"

/* External large data symbols */
extern u8 lbl_807D1740[];

/* External small data symbols (SDA21) */
extern u32 lbl_8087FF08;
extern u32 lbl_8087FF0C;
extern u32 lbl_8087FF10;
extern u32 lbl_8087FF14;
extern u32 lbl_8087FF18;
extern u32 lbl_8087FF1C;
extern u32 lbl_8087FF20;
extern u32 lbl_8087FF24;
extern u32 lbl_8087FF28;
extern u32 lbl_8087FF2C;
extern u32 lbl_8087FF30;
extern u32 lbl_8087FF34;
extern u32 lbl_8087FF38;
extern u32 lbl_8087FF3C;
extern u32 lbl_8087FF40;
extern u32 lbl_8087FF44;
extern u32 lbl_8087FF48;
extern u32 lbl_8087FF4C;
extern u32 lbl_8087FF68;

/* Function declarations */
void fn_80608610(void);
void fn_806089C0(void);
void fn_80608A30(void);
void fn_80608AA0(void);

asm void fn_80608610(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    lis r31, lbl_807D1740@ha
    addi r31, r31, lbl_807D1740@l
    stw r30, 0x58(r1)
    addi r8, r31, 0x0
    addi r3, r31, 0x1200
    stw r29, 0x54(r1)
    lwz r9, lbl_8087FF10
    lwz r7, lbl_8087FF0C
    mulli r5, r9, 0x600
    lwz r0, lbl_8087FF40
    cmpwi r0, 0x0
    mulli r4, r7, 0x600
    add r0, r8, r5
    stw r0, lbl_8087FF28
    add r0, r3, r5
    stw r0, lbl_8087FF20
    add r5, r3, r4
    add r6, r8, r4
    mulli r3, r9, 0x480
    addi r4, r31, 0x2400
    stw r6, lbl_8087FF24
    mulli r0, r7, 0x480
    stw r5, lbl_8087FF1C
    add r3, r4, r3
    stw r3, lbl_8087FF18
    add r0, r4, r0
    stw r0, lbl_8087FF14
    beq lbl_fn_80608610_0000012C
    lwz r0, lbl_8087FF68
    cmplwi r0, 0x2
    bne lbl_fn_80608610_000000E0
    lwz r0, lbl_8087FF08
    li r4, 0x600
    mulli r0, r0, 0x600
    add r3, r8, r0
    stw r3, 0x40(r1)
    addi r6, r3, 0x180
    addi r5, r3, 0x300
    addi r0, r3, 0x480
    stw r6, 0x44(r1)
    stw r5, 0x48(r1)
    stw r0, 0x4c(r1)
    bl DCInvalidateRange
    lwz r12, lbl_8087FF40
    addi r3, r1, 0x40
    lwz r4, lbl_8087FF34
    mtctr r12
    bctrl
    lwz r3, 0x40(r1)
    li r4, 0x600
    bl DCFlushRangeNoSync
    b lbl_fn_80608610_00000170
lbl_fn_80608610_000000E0:
    lwz r0, lbl_8087FF08
    li r4, 0x480
    mulli r0, r0, 0x600
    add r3, r8, r0
    stw r3, 0x30(r1)
    addi r5, r3, 0x180
    addi r0, r3, 0x300
    stw r5, 0x34(r1)
    stw r0, 0x38(r1)
    bl DCInvalidateRange
    lwz r12, lbl_8087FF40
    addi r3, r1, 0x30
    lwz r4, lbl_8087FF34
    mtctr r12
    bctrl
    lwz r3, 0x30(r1)
    li r4, 0x480
    bl DCFlushRangeNoSync
    b lbl_fn_80608610_00000170
lbl_fn_80608610_0000012C:
    lwz r3, lbl_8087FF08
    la r30, lbl_8087FF4C
    lbzx r0, r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_80608610_00000170
    mulli r0, r3, 0x600
    li r4, 0x0
    li r5, 0x600
    add r29, r8, r0
    mr r3, r29
    bl memset
    mr r3, r29
    li r4, 0x600
    bl DCFlushRange
    lwz r0, lbl_8087FF08
    li r3, 0x0
    stbx r3, r30, r0
lbl_fn_80608610_00000170:
    lwz r0, lbl_8087FF3C
    cmpwi r0, 0x0
    beq lbl_fn_80608610_00000230
    lwz r0, lbl_8087FF68
    cmplwi r0, 0x2
    bne lbl_fn_80608610_000001E0
    lwz r3, lbl_8087FF08
    addi r0, r31, 0x1200
    li r4, 0x600
    mulli r3, r3, 0x600
    add r3, r0, r3
    stw r3, 0x20(r1)
    addi r6, r3, 0x180
    addi r5, r3, 0x300
    addi r0, r3, 0x480
    stw r6, 0x24(r1)
    stw r5, 0x28(r1)
    stw r0, 0x2c(r1)
    bl DCInvalidateRange
    lwz r12, lbl_8087FF3C
    addi r3, r1, 0x20
    lwz r4, lbl_8087FF30
    mtctr r12
    bctrl
    lwz r3, 0x20(r1)
    li r4, 0x600
    bl DCFlushRangeNoSync
    b lbl_fn_80608610_00000278
lbl_fn_80608610_000001E0:
    lwz r3, lbl_8087FF08
    addi r0, r31, 0x1200
    li r4, 0x480
    mulli r3, r3, 0x600
    add r3, r0, r3
    stw r3, 0x14(r1)
    addi r5, r3, 0x180
    addi r0, r3, 0x300
    stw r5, 0x18(r1)
    stw r0, 0x1c(r1)
    bl DCInvalidateRange
    lwz r12, lbl_8087FF3C
    addi r3, r1, 0x14
    lwz r4, lbl_8087FF30
    mtctr r12
    bctrl
    lwz r3, 0x14(r1)
    li r4, 0x480
    bl DCFlushRangeNoSync
    b lbl_fn_80608610_00000278
lbl_fn_80608610_00000230:
    lwz r3, lbl_8087FF08
    la r30, lbl_8087FF48
    lbzx r0, r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_80608610_00000278
    mulli r3, r3, 0x600
    addi r0, r31, 0x1200
    li r4, 0x0
    li r5, 0x600
    add r29, r0, r3
    mr r3, r29
    bl memset
    mr r3, r29
    li r4, 0x600
    bl DCFlushRange
    lwz r0, lbl_8087FF08
    li r3, 0x0
    stbx r3, r30, r0
lbl_fn_80608610_00000278:
    lwz r0, lbl_8087FF38
    cmpwi r0, 0x0
    beq lbl_fn_80608610_000002E0
    lwz r0, lbl_8087FF68
    cmplwi r0, 0x2
    beq lbl_fn_80608610_000002E0
    lwz r3, lbl_8087FF08
    addi r0, r31, 0x2400
    li r4, 0x480
    mulli r3, r3, 0x480
    add r3, r0, r3
    stw r3, 0x8(r1)
    addi r5, r3, 0x180
    addi r0, r3, 0x300
    stw r5, 0xc(r1)
    stw r0, 0x10(r1)
    bl DCInvalidateRange
    lwz r12, lbl_8087FF38
    addi r3, r1, 0x8
    lwz r4, lbl_8087FF2C
    mtctr r12
    bctrl
    lwz r3, 0x8(r1)
    li r4, 0x480
    bl DCFlushRangeNoSync
    b lbl_fn_80608610_00000334
lbl_fn_80608610_000002E0:
    lwz r0, lbl_8087FF38
    cmpwi r0, 0x0
    bne lbl_fn_80608610_00000334
    lwz r3, lbl_8087FF08
    la r30, lbl_8087FF44
    lbzx r0, r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_80608610_00000334
    mulli r3, r3, 0x480
    addi r0, r31, 0x2400
    li r4, 0x0
    li r5, 0x480
    add r29, r0, r3
    mr r3, r29
    bl memset
    mr r3, r29
    li r4, 0x480
    bl DCFlushRange
    lwz r0, lbl_8087FF08
    li r3, 0x0
    stbx r3, r30, r0
lbl_fn_80608610_00000334:
    lis r3, 0xaaab
    lwz r5, lbl_8087FF10
    subi r0, r3, 0x5555
    lwz r3, lbl_8087FF08
    lwz r4, lbl_8087FF0C
    addi r7, r5, 0x1
    addi r3, r3, 0x1
    addi r5, r4, 0x1
    mulhwu r6, r0, r7
    mulhwu r4, r0, r5
    srwi r6, r6, 1
    mulhwu r0, r0, r3
    srwi r4, r4, 1
    mulli r6, r6, 0x3
    srwi r0, r0, 1
    mulli r4, r4, 0x3
    subf r6, r6, r7
    stw r6, lbl_8087FF10
    mulli r0, r0, 0x3
    subf r4, r4, r5
    stw r4, lbl_8087FF0C
    subf r0, r0, r3
    stw r0, lbl_8087FF08
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806089C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    bl OSDisableInterrupts
    cmpwi r31, 0x0
    stw r31, lbl_8087FF40
    mr r31, r3
    stw r30, lbl_8087FF34
    bne lbl_fn_806089C0_000003F4
    la r3, lbl_8087FF4C
    li r4, 0x1
    li r5, 0x3
    bl memset
lbl_fn_806089C0_000003F4:
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80608A30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    bl OSDisableInterrupts
    cmpwi r31, 0x0
    stw r31, lbl_8087FF3C
    mr r31, r3
    stw r30, lbl_8087FF30
    bne lbl_fn_80608A30_00000464
    la r3, lbl_8087FF48
    li r4, 0x1
    li r5, 0x3
    bl memset
lbl_fn_80608A30_00000464:
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80608AA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    bl OSDisableInterrupts
    cmpwi r31, 0x0
    stw r31, lbl_8087FF38
    mr r31, r3
    stw r30, lbl_8087FF2C
    bne lbl_fn_80608AA0_000004D4
    la r3, lbl_8087FF44
    li r4, 0x1
    li r5, 0x3
    bl memset
lbl_fn_80608AA0_000004D4:
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
