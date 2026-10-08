#include "revolution/types.h"
#include "revolution/os.h"

/* External functions */
extern void _savegpr_24(void);
extern void _restgpr_24(void);
extern BOOL OSDisableInterrupts(void);
extern BOOL OSRestoreInterrupts(BOOL);

/* External SDA symbols */
extern u32 lbl_8087E85C;

/* Function declarations */
void fn_8060CEE0(void);
void fn_8060CF70(void);

asm void fn_8060CEE0(void)
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
    lwz r0, 0x3c(r28)
    mr r29, r3
    li r30, 0x0
    li r31, 0x0
    ori r0, r0, 0x1
    stw r0, 0x3c(r28)
lbl_fn_8060CEE0_0000003C:
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8060CEE0_00000058
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    stw r31, 0x0(r28)
lbl_fn_8060CEE0_00000058:
    addi r30, r30, 0x1
    addi r28, r28, 0x4
    cmplwi r30, 0x4
    blt lbl_fn_8060CEE0_0000003C
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

asm void fn_8060CF70(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_24
    lwz r0, 0x3c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8060CF70_000000BC
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x3c(r4)
    b lbl_fn_8060CF70_00000290
lbl_fn_8060CF70_000000BC:
    lwz r8, 0x50(r4)
    lwz r0, 0x30(r4)
    lwz r7, 0x0(r3)
    cmpwi r8, 0x0
    lwz r6, 0x4(r3)
    subfic r11, r0, 0x80
    lwz r5, 0x8(r3)
    lwz r3, 0xc(r3)
    stw r7, 0x48(r1)
    stw r6, 0x4c(r1)
    stw r5, 0x50(r1)
    stw r3, 0x54(r1)
    beq lbl_fn_8060CF70_00000110
    lwz r7, 0x0(r8)
    lwz r6, 0x4(r8)
    lwz r5, 0x8(r8)
    lwz r3, 0xc(r8)
    stw r7, 0x18(r1)
    stw r6, 0x1c(r1)
    stw r5, 0x20(r1)
    stw r3, 0x24(r1)
lbl_fn_8060CF70_00000110:
    lwz r3, 0x54(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8060CF70_0000013C
    lwz r7, 0x0(r3)
    lwz r6, 0x4(r3)
    lwz r5, 0x8(r3)
    lwz r3, 0xc(r3)
    stw r7, 0x8(r1)
    stw r6, 0xc(r1)
    stw r5, 0x10(r1)
    stw r3, 0x14(r1)
lbl_fn_8060CF70_0000013C:
    li r10, 0x0
    li r31, 0x0
    li r12, 0x4
lbl_fn_8060CF70_00000148:
    mr r3, r4
    addi r5, r1, 0x38
    addi r6, r1, 0x18
    addi r7, r1, 0x48
    addi r8, r1, 0x28
    addi r9, r1, 0x8
    mtctr r12
lbl_fn_8060CF70_00000164:
    lwz r25, 0x10(r4)
    lwz r24, 0x50(r4)
    lwz r26, 0x0(r3)
    slwi r25, r25, 2
    cmpwi r24, 0x0
    lwzx r24, r26, r25
    stw r24, 0x0(r5)
    beq lbl_fn_8060CF70_000001B8
    lwz r25, 0x0(r6)
    lwz r26, 0x0(r7)
    lwz r24, 0x0(r25)
    addi r25, r25, 0x4
    lwz r26, 0x0(r26)
    lwz r27, 0x20(r3)
    add r24, r26, r24
    stw r25, 0x0(r6)
    mullw r25, r0, r27
    mullw r24, r11, r24
    add r24, r25, r24
    stw r24, 0x0(r8)
    b lbl_fn_8060CF70_000001D4
lbl_fn_8060CF70_000001B8:
    lwz r25, 0x0(r7)
    lwz r24, 0x20(r3)
    lwz r25, 0x0(r25)
    mullw r24, r0, r24
    mullw r25, r11, r25
    add r24, r25, r24
    stw r24, 0x0(r8)
lbl_fn_8060CF70_000001D4:
    lwz r24, 0x0(r8)
    lwz r29, 0x0(r7)
    srawi r24, r24, 7
    stw r24, 0x20(r3)
    addi r28, r29, 0x4
    lwz r25, 0x0(r5)
    lwz r26, 0x1c(r4)
    lwz r30, 0x10(r4)
    mullw r26, r26, r25
    stw r28, 0x0(r7)
    lwz r27, 0x0(r3)
    slwi r30, r30, 2
    stw r24, 0x0(r8)
    srawi r28, r26, 7
    add r28, r24, r28
    stwx r28, r27, r30
    lwz r28, 0x34(r4)
    mullw r28, r28, r25
    srawi r28, r28, 7
    stw r28, 0x0(r29)
    lwz r28, 0x54(r4)
    cmpwi r28, 0x0
    beq lbl_fn_8060CF70_0000024C
    lwz r28, 0x38(r4)
    lwz r29, 0x0(r9)
    mullw r28, r28, r25
    addi r30, r29, 0x4
    stw r30, 0x0(r9)
    srawi r30, r28, 7
    stw r30, 0x0(r29)
lbl_fn_8060CF70_0000024C:
    addi r3, r3, 0x4
    addi r5, r5, 0x4
    addi r6, r6, 0x4
    addi r7, r7, 0x4
    addi r8, r8, 0x4
    addi r9, r9, 0x4
    bdnz lbl_fn_8060CF70_00000164
    lwz r5, 0x10(r4)
    lwz r3, 0x14(r4)
    addi r5, r5, 0x1
    stw r5, 0x10(r4)
    cmplw r5, r3
    blt lbl_fn_8060CF70_00000284
    stw r31, 0x10(r4)
lbl_fn_8060CF70_00000284:
    addi r10, r10, 0x1
    cmplwi r10, 0x60
    blt lbl_fn_8060CF70_00000148
lbl_fn_8060CF70_00000290:
    addi r11, r1, 0x80
    bl _restgpr_24
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}
