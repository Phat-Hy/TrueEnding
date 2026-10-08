#include "revolution/types.h"
#include "revolution/os.h"

/* External functions */
extern void _savegpr_20(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void _restgpr_20(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern BOOL OSDisableInterrupts(void);
extern BOOL OSRestoreInterrupts(BOOL);
extern void fn_806095D0(void);
extern void fn_8060D190(void);
extern void fn_80695D84(void);

/* External SDA symbols */
extern u32 lbl_8087E858;
extern u32 lbl_8087E85C;

/* External float constants (sdata2) */
extern f32 lbl_80888608;
extern f32 lbl_8088860C;
extern f32 lbl_80888610;
extern f32 lbl_80888614;
extern f32 lbl_80888618;
extern f32 lbl_80888620;
extern f32 lbl_80888624;

/* Function declarations */
void fn_8060BFE0(void);
void fn_8060C2B0(void);
void fn_8060C440(void);
void fn_8060C550(void);
void fn_8060C600(void);
void fn_8060C880(void);
void fn_8060CA80(void);
void fn_8060CAB0(void);
void fn_8060CCE0(void);
void fn_8060CE10(void);

asm void fn_8060BFE0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    bl OSDisableInterrupts
    lfs f1, 0x38(r30)
    li r29, 0x1
    lfs f0, lbl_8088860C
    mr r31, r3
    stw r29, 0x34(r30)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8060BFE0_000000D0
    bl OSDisableInterrupts
    lwz r4, 0x0(r30)
    mr r29, r3
    lwz r0, 0x34(r30)
    cmpwi r4, 0x0
    ori r0, r0, 0x1
    stw r0, 0x34(r30)
    beq lbl_fn_8060BFE0_00000078
    lwz r12, lbl_8087E85C
    mr r3, r4
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_8060BFE0_00000078:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060BFE0_00000098
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_8060BFE0_00000098:
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060BFE0_000000B8
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x8(r30)
lbl_fn_8060BFE0_000000B8:
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060BFE0_000002B4
lbl_fn_8060BFE0_000000D0:
    lfs f0, lbl_80888608
    fmuls f1, f0, f1
    bl fn_80695D84
    cmpwi r3, 0x0
    stw r3, 0x14(r30)
    bne lbl_fn_8060BFE0_000000EC
    stw r29, 0x14(r30)
lbl_fn_8060BFE0_000000EC:
    lwz r0, 0x14(r30)
    lwz r12, lbl_8087E858
    slwi r3, r0, 2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x0(r30)
    bne lbl_fn_8060BFE0_00000114
    li r0, 0x0
    b lbl_fn_8060BFE0_00000160
lbl_fn_8060BFE0_00000114:
    lwz r0, 0x14(r30)
    lwz r12, lbl_8087E858
    slwi r3, r0, 2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x4(r30)
    bne lbl_fn_8060BFE0_0000013C
    li r0, 0x0
    b lbl_fn_8060BFE0_00000160
lbl_fn_8060BFE0_0000013C:
    lwz r0, 0x14(r30)
    lwz r12, lbl_8087E858
    slwi r3, r0, 2
    mtctr r12
    bctrl
    neg r0, r3
    stw r3, 0x8(r30)
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_8060BFE0_00000160:
    cmpwi r0, 0x0
    bne lbl_fn_8060BFE0_000001F8
    bl OSDisableInterrupts
    lwz r4, 0x0(r30)
    mr r29, r3
    lwz r0, 0x34(r30)
    cmpwi r4, 0x0
    ori r0, r0, 0x1
    stw r0, 0x34(r30)
    beq lbl_fn_8060BFE0_000001A0
    lwz r12, lbl_8087E85C
    mr r3, r4
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_8060BFE0_000001A0:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060BFE0_000001C0
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_8060BFE0_000001C0:
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060BFE0_000001E0
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x8(r30)
lbl_fn_8060BFE0_000001E0:
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060BFE0_000002B4
lbl_fn_8060BFE0_000001F8:
    mr r3, r30
    bl fn_8060C880
    cmpwi r3, 0x0
    bne lbl_fn_8060BFE0_00000298
    bl OSDisableInterrupts
    lwz r4, 0x0(r30)
    mr r29, r3
    lwz r0, 0x34(r30)
    cmpwi r4, 0x0
    ori r0, r0, 0x1
    stw r0, 0x34(r30)
    beq lbl_fn_8060BFE0_00000240
    lwz r12, lbl_8087E85C
    mr r3, r4
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_8060BFE0_00000240:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060BFE0_00000260
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_8060BFE0_00000260:
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060BFE0_00000280
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x8(r30)
lbl_fn_8060BFE0_00000280:
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060BFE0_000002B4
lbl_fn_8060BFE0_00000298:
    lwz r0, 0x34(r30)
    mr r3, r31
    ori r0, r0, 0x2
    clrrwi r0, r0, 1
    stw r0, 0x34(r30)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_8060BFE0_000002B4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8060C2B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    bl OSDisableInterrupts
    lwz r0, 0x34(r30)
    mr r31, r3
    ori r0, r0, 0x1
    stw r0, 0x34(r30)
    bl OSDisableInterrupts
    lwz r4, 0x0(r30)
    mr r29, r3
    lwz r0, 0x34(r30)
    cmpwi r4, 0x0
    ori r0, r0, 0x1
    stw r0, 0x34(r30)
    beq lbl_fn_8060C2B0_00000338
    lwz r12, lbl_8087E85C
    mr r3, r4
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_8060C2B0_00000338:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060C2B0_00000358
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_8060C2B0_00000358:
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060C2B0_00000378
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x8(r30)
lbl_fn_8060C2B0_00000378:
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r30
    bl fn_8060BFE0
    cmpwi r3, 0x0
    bne lbl_fn_8060C2B0_00000420
    bl OSDisableInterrupts
    lwz r4, 0x0(r30)
    mr r29, r3
    lwz r0, 0x34(r30)
    cmpwi r4, 0x0
    ori r0, r0, 0x1
    stw r0, 0x34(r30)
    beq lbl_fn_8060C2B0_000003C8
    lwz r12, lbl_8087E85C
    mr r3, r4
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_8060C2B0_000003C8:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060C2B0_000003E8
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_8060C2B0_000003E8:
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060C2B0_00000408
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x8(r30)
lbl_fn_8060C2B0_00000408:
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060C2B0_0000043C
lbl_fn_8060C2B0_00000420:
    lwz r0, 0x34(r30)
    mr r3, r31
    ori r0, r0, 0x2
    clrrwi r0, r0, 1
    stw r0, 0x34(r30)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_8060C2B0_0000043C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8060C440(void)
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
    lwz r0, 0x34(r29)
    mr r30, r3
    mr r3, r29
    ori r0, r0, 0x1
    stw r0, 0x34(r29)
    bl fn_8060C880
    cmpwi r3, 0x0
    bne lbl_fn_8060C440_00000530
    bl OSDisableInterrupts
    lwz r4, 0x0(r29)
    mr r31, r3
    lwz r0, 0x34(r29)
    cmpwi r4, 0x0
    ori r0, r0, 0x1
    stw r0, 0x34(r29)
    beq lbl_fn_8060C440_000004D8
    lwz r12, lbl_8087E85C
    mr r3, r4
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_8060C440_000004D8:
    lwz r3, 0x4(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8060C440_000004F8
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_8060C440_000004F8:
    lwz r3, 0x8(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8060C440_00000518
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x8(r29)
lbl_fn_8060C440_00000518:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060C440_0000054C
lbl_fn_8060C440_00000530:
    lwz r0, 0x34(r29)
    mr r3, r30
    ori r0, r0, 0x2
    clrrwi r0, r0, 1
    stw r0, 0x34(r29)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_8060C440_0000054C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8060C550(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r4, 0x0(r30)
    mr r31, r3
    lwz r0, 0x34(r30)
    cmpwi r4, 0x0
    ori r0, r0, 0x1
    stw r0, 0x34(r30)
    beq lbl_fn_8060C550_000005C0
    lwz r12, lbl_8087E85C
    mr r3, r4
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_8060C550_000005C0:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060C550_000005E0
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_8060C550_000005E0:
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060C550_00000600
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x8(r30)
lbl_fn_8060C550_00000600:
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8060C600(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_20
    lwz r0, 0x34(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8060C600_0000064C
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x34(r4)
    b lbl_fn_8060C600_00000880
lbl_fn_8060C600_0000064C:
    lwz r6, 0x48(r4)
    lwz r10, 0x28(r4)
    cmpwi r6, 0x0
    lwz r11, 0x0(r3)
    lwz r12, 0x4(r3)
    subfic r24, r10, 0x80
    lwz r31, 0x8(r3)
    beq lbl_fn_8060C600_00000678
    lwz r3, 0x0(r6)
    lwz r5, 0x4(r6)
    lwz r6, 0x8(r6)
lbl_fn_8060C600_00000678:
    lwz r20, 0x4c(r4)
    cmpwi r20, 0x0
    beq lbl_fn_8060C600_00000690
    lwz r7, 0x0(r20)
    lwz r8, 0x4(r20)
    lwz r9, 0x8(r20)
lbl_fn_8060C600_00000690:
    li r25, 0x60
    li r0, 0x0
    mtctr r25
lbl_fn_8060C600_0000069C:
    lwz r21, 0xc(r4)
    lwz r20, 0x48(r4)
    slwi r23, r21, 2
    lwz r22, 0x0(r4)
    lwz r21, 0x4(r4)
    cmpwi r20, 0x0
    lwz r20, 0x8(r4)
    lwzx r30, r22, r23
    lwzx r29, r21, r23
    lwzx r28, r20, r23
    beq lbl_fn_8060C600_0000072C
    lwz r20, 0x0(r3)
    addi r3, r3, 0x4
    lwz r22, 0x0(r11)
    lwz r23, 0x0(r31)
    add r20, r22, r20
    lwz r22, 0x0(r6)
    lwz r27, 0x1c(r4)
    mullw r20, r24, r20
    add r22, r23, r22
    lwz r21, 0x0(r5)
    lwz r25, 0x0(r12)
    addi r5, r5, 0x4
    addi r6, r6, 0x4
    add r26, r25, r21
    lwz r21, 0x24(r4)
    mullw r23, r10, r27
    lwz r25, 0x20(r4)
    add r27, r20, r23
    mullw r26, r24, r26
    mullw r23, r10, r25
    mullw r22, r24, r22
    add r26, r26, r23
    mullw r21, r10, r21
    add r25, r22, r21
    b lbl_fn_8060C600_00000768
lbl_fn_8060C600_0000072C:
    lwz r21, 0x0(r11)
    lwz r26, 0x1c(r4)
    lwz r25, 0x0(r12)
    mullw r27, r24, r21
    lwz r23, 0x20(r4)
    lwz r22, 0x0(r31)
    lwz r21, 0x24(r4)
    mullw r26, r10, r26
    mullw r25, r24, r25
    add r27, r27, r26
    mullw r23, r10, r23
    mullw r22, r24, r22
    add r26, r25, r23
    mullw r21, r10, r21
    add r25, r22, r21
lbl_fn_8060C600_00000768:
    lwz r21, 0x18(r4)
    srawi r27, r27, 7
    srawi r26, r26, 7
    lwz r22, 0xc(r4)
    mullw r21, r30, r21
    srawi r25, r25, 7
    lwz r23, 0x0(r4)
    slwi r22, r22, 2
    stw r26, 0x20(r4)
    stw r25, 0x24(r4)
    stw r27, 0x1c(r4)
    srawi r21, r21, 7
    add r27, r27, r21
    stwx r27, r23, r22
    lwz r23, 0x18(r4)
    lwz r22, 0xc(r4)
    mullw r27, r29, r23
    lwz r23, 0x4(r4)
    slwi r22, r22, 2
    srawi r27, r27, 7
    add r26, r26, r27
    stwx r26, r23, r22
    lwz r22, 0x18(r4)
    lwz r27, 0xc(r4)
    mullw r22, r28, r22
    lwz r23, 0x8(r4)
    slwi r26, r27, 2
    addi r27, r27, 0x1
    srawi r22, r22, 7
    add r25, r25, r22
    stwx r25, r23, r26
    lwz r25, 0x10(r4)
    stw r27, 0xc(r4)
    cmplw r27, r25
    blt lbl_fn_8060C600_000007F8
    stw r0, 0xc(r4)
lbl_fn_8060C600_000007F8:
    lwz r25, 0x2c(r4)
    mullw r25, r30, r25
    srawi r25, r25, 7
    stw r25, 0x0(r11)
    addi r11, r11, 0x4
    lwz r25, 0x2c(r4)
    mullw r25, r29, r25
    srawi r25, r25, 7
    stw r25, 0x0(r12)
    addi r12, r12, 0x4
    lwz r25, 0x2c(r4)
    mullw r25, r28, r25
    srawi r25, r25, 7
    stw r25, 0x0(r31)
    addi r31, r31, 0x4
    lwz r25, 0x4c(r4)
    cmpwi r25, 0x0
    beq lbl_fn_8060C600_0000087C
    lwz r25, 0x30(r4)
    mullw r25, r30, r25
    srawi r25, r25, 7
    stw r25, 0x0(r7)
    addi r7, r7, 0x4
    lwz r25, 0x30(r4)
    mullw r25, r29, r25
    srawi r25, r25, 7
    stw r25, 0x0(r8)
    addi r8, r8, 0x4
    lwz r25, 0x30(r4)
    mullw r25, r28, r25
    srawi r25, r25, 7
    stw r25, 0x0(r9)
    addi r9, r9, 0x4
lbl_fn_8060C600_0000087C:
    bdnz lbl_fn_8060C600_0000069C
lbl_fn_8060C600_00000880:
    addi r11, r1, 0x40
    bl _restgpr_20
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8060C880(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lfs f1, 0x3c(r3)
    lfs f0, 0x38(r3)
    fcmpo cr0, f1, f0
    ble lbl_fn_8060C880_000008CC
    li r3, 0x0
    b lbl_fn_8060C880_00000A80
lbl_fn_8060C880_000008CC:
    lfs f0, 0x40(r3)
    lfs f2, lbl_8088860C
    fcmpo cr0, f0, f2
    blt lbl_fn_8060C880_000008EC
    lfs f1, lbl_80888610
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_8060C880_000008F4
lbl_fn_8060C880_000008EC:
    li r3, 0x0
    b lbl_fn_8060C880_00000A80
lbl_fn_8060C880_000008F4:
    lfs f0, 0x44(r3)
    fcmpo cr0, f0, f2
    blt lbl_fn_8060C880_00000908
    fcmpo cr0, f0, f1
    ble lbl_fn_8060C880_00000910
lbl_fn_8060C880_00000908:
    li r3, 0x0
    b lbl_fn_8060C880_00000A80
lbl_fn_8060C880_00000910:
    lfs f0, 0x50(r3)
    fcmpo cr0, f0, f2
    blt lbl_fn_8060C880_00000924
    fcmpo cr0, f0, f1
    ble lbl_fn_8060C880_0000092C
lbl_fn_8060C880_00000924:
    li r3, 0x0
    b lbl_fn_8060C880_00000A80
lbl_fn_8060C880_0000092C:
    lfs f0, 0x54(r3)
    fcmpo cr0, f0, f2
    blt lbl_fn_8060C880_00000940
    fcmpo cr0, f0, f1
    ble lbl_fn_8060C880_00000948
lbl_fn_8060C880_00000940:
    li r3, 0x0
    b lbl_fn_8060C880_00000A80
lbl_fn_8060C880_00000948:
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    bne lbl_fn_8060C880_0000095C
    li r3, 0x0
    b lbl_fn_8060C880_00000A80
lbl_fn_8060C880_0000095C:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8060C880_00000970
    li r3, 0x0
    b lbl_fn_8060C880_00000A80
lbl_fn_8060C880_00000970:
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8060C880_00000984
    li r3, 0x0
    b lbl_fn_8060C880_00000A80
lbl_fn_8060C880_00000984:
    lwz r0, 0x14(r31)
    mr r3, r4
    li r4, 0x0
    slwi r5, r0, 2
    bl memset
    lwz r0, 0x14(r31)
    li r4, 0x0
    lwz r3, 0x4(r31)
    slwi r5, r0, 2
    bl memset
    lwz r0, 0x14(r31)
    li r4, 0x0
    lwz r3, 0x8(r31)
    slwi r5, r0, 2
    bl memset
    lfs f1, lbl_80888608
    lfs f0, 0x3c(r31)
    fmuls f1, f1, f0
    bl fn_80695D84
    cmpwi r3, 0x0
    stw r3, 0x10(r31)
    bne lbl_fn_8060C880_000009E4
    li r0, 0x1
    stw r0, 0x10(r31)
lbl_fn_8060C880_000009E4:
    lfs f1, lbl_80888614
    li r0, 0x0
    lfs f0, 0x40(r31)
    lfs f2, lbl_80888610
    fmuls f3, f1, f0
    lfs f1, 0x44(r31)
    lfs f0, lbl_80888618
    fsubs f2, f2, f1
    stw r0, 0xc(r31)
    fctiwz f1, f3
    stfd f1, 0x8(r1)
    fcmpo cr0, f2, f0
    lwz r0, 0xc(r1)
    stw r0, 0x18(r31)
    ble lbl_fn_8060C880_00000A24
    fmr f2, f0
lbl_fn_8060C880_00000A24:
    lfs f3, lbl_80888614
    li r5, 0x0
    lfs f1, 0x50(r31)
    li r3, 0x1
    lfs f0, 0x54(r31)
    fmuls f2, f3, f2
    fmuls f1, f3, f1
    stw r5, 0x1c(r31)
    fmuls f0, f3, f0
    fctiwz f2, f2
    stw r5, 0x20(r31)
    fctiwz f1, f1
    fctiwz f0, f0
    stfd f2, 0x10(r1)
    stfd f1, 0x18(r1)
    lwz r6, 0x14(r1)
    stfd f0, 0x20(r1)
    lwz r4, 0x1c(r1)
    lwz r0, 0x24(r1)
    stw r6, 0x28(r31)
    stw r5, 0x24(r31)
    stw r4, 0x2c(r31)
    stw r0, 0x30(r31)
lbl_fn_8060C880_00000A80:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8060CA80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lfs f1, lbl_80888620
    lfs f0, 0x40(r3)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    slwi r3, r0, 4
    addi r1, r1, 0x10
    blr
}

asm void fn_8060CAB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r30, r3
    bl OSDisableInterrupts
    mr r31, r3
    bl fn_806095D0
    cmplwi r3, 0x2
    beq lbl_fn_8060CAB0_00000B0C
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060CAB0_00000CDC
lbl_fn_8060CAB0_00000B0C:
    lfs f1, 0x40(r30)
    li r29, 0x1
    lfs f0, lbl_80888624
    stw r29, 0x3c(r30)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8060CAB0_00000B88
    bl OSDisableInterrupts
    lwz r0, 0x3c(r30)
    mr r27, r3
    li r28, 0x0
    li r29, 0x0
    ori r0, r0, 0x1
    stw r0, 0x3c(r30)
lbl_fn_8060CAB0_00000B44:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060CAB0_00000B60
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    stw r29, 0x0(r30)
lbl_fn_8060CAB0_00000B60:
    addi r28, r28, 0x1
    addi r30, r30, 0x4
    cmplwi r28, 0x4
    blt lbl_fn_8060CAB0_00000B44
    mr r3, r27
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060CAB0_00000CDC
lbl_fn_8060CAB0_00000B88:
    lfs f0, lbl_80888620
    fmuls f1, f0, f1
    bl fn_80695D84
    cmpwi r3, 0x0
    stw r3, 0x18(r30)
    bne lbl_fn_8060CAB0_00000BA4
    stw r29, 0x18(r30)
lbl_fn_8060CAB0_00000BA4:
    mr r28, r30
    li r27, 0x0
lbl_fn_8060CAB0_00000BAC:
    lwz r0, 0x18(r30)
    lwz r12, lbl_8087E858
    slwi r3, r0, 2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x0(r28)
    bne lbl_fn_8060CAB0_00000BD4
    li r0, 0x0
    b lbl_fn_8060CAB0_00000BE8
lbl_fn_8060CAB0_00000BD4:
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmplwi r27, 0x4
    blt lbl_fn_8060CAB0_00000BAC
    li r0, 0x1
lbl_fn_8060CAB0_00000BE8:
    cmpwi r0, 0x0
    bne lbl_fn_8060CAB0_00000C50
    bl OSDisableInterrupts
    lwz r0, 0x3c(r30)
    mr r28, r3
    li r27, 0x0
    li r29, 0x0
    ori r0, r0, 0x1
    stw r0, 0x3c(r30)
lbl_fn_8060CAB0_00000C0C:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060CAB0_00000C28
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    stw r29, 0x0(r30)
lbl_fn_8060CAB0_00000C28:
    addi r27, r27, 0x1
    addi r30, r30, 0x4
    cmplwi r27, 0x4
    blt lbl_fn_8060CAB0_00000C0C
    mr r3, r28
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060CAB0_00000CDC
lbl_fn_8060CAB0_00000C50:
    mr r3, r30
    bl fn_8060D190
    cmpwi r3, 0x0
    bne lbl_fn_8060CAB0_00000CC0
    bl OSDisableInterrupts
    lwz r0, 0x3c(r30)
    mr r28, r3
    li r27, 0x0
    li r29, 0x0
    ori r0, r0, 0x1
    stw r0, 0x3c(r30)
lbl_fn_8060CAB0_00000C7C:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060CAB0_00000C98
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    stw r29, 0x0(r30)
lbl_fn_8060CAB0_00000C98:
    addi r27, r27, 0x1
    addi r30, r30, 0x4
    cmplwi r27, 0x4
    blt lbl_fn_8060CAB0_00000C7C
    mr r3, r28
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060CAB0_00000CDC
lbl_fn_8060CAB0_00000CC0:
    lwz r0, 0x3c(r30)
    mr r3, r31
    ori r0, r0, 0x2
    clrrwi r0, r0, 1
    stw r0, 0x3c(r30)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_8060CAB0_00000CDC:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8060CCE0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r31, r3
    bl OSDisableInterrupts
    lwz r0, 0x3c(r31)
    mr r26, r3
    ori r0, r0, 0x1
    stw r0, 0x3c(r31)
    bl OSDisableInterrupts
    lwz r0, 0x3c(r31)
    mr r28, r3
    mr r27, r31
    li r29, 0x0
    ori r0, r0, 0x1
    stw r0, 0x3c(r31)
    li r30, 0x0
lbl_fn_8060CCE0_00000D4C:
    lwz r3, 0x0(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8060CCE0_00000D68
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    stw r30, 0x0(r27)
lbl_fn_8060CCE0_00000D68:
    addi r29, r29, 0x1
    addi r27, r27, 0x4
    cmplwi r29, 0x4
    blt lbl_fn_8060CCE0_00000D4C
    mr r3, r28
    bl OSRestoreInterrupts
    mr r3, r31
    bl fn_8060CAB0
    cmpwi r3, 0x0
    bne lbl_fn_8060CCE0_00000DF0
    bl OSDisableInterrupts
    lwz r0, 0x3c(r31)
    mr r29, r3
    li r28, 0x0
    li r30, 0x0
    ori r0, r0, 0x1
    stw r0, 0x3c(r31)
lbl_fn_8060CCE0_00000DAC:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8060CCE0_00000DC8
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    stw r30, 0x0(r31)
lbl_fn_8060CCE0_00000DC8:
    addi r28, r28, 0x1
    addi r31, r31, 0x4
    cmplwi r28, 0x4
    blt lbl_fn_8060CCE0_00000DAC
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r26
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060CCE0_00000E0C
lbl_fn_8060CCE0_00000DF0:
    lwz r0, 0x3c(r31)
    mr r3, r26
    ori r0, r0, 0x2
    clrrwi r0, r0, 1
    stw r0, 0x3c(r31)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_8060CCE0_00000E0C:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8060CE10(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    bl OSDisableInterrupts
    lwz r0, 0x3c(r27)
    mr r28, r3
    mr r3, r27
    ori r0, r0, 0x1
    stw r0, 0x3c(r27)
    bl fn_8060D190
    cmpwi r3, 0x0
    bne lbl_fn_8060CE10_00000ECC
    bl OSDisableInterrupts
    lwz r0, 0x3c(r27)
    mr r29, r3
    li r30, 0x0
    li r31, 0x0
    ori r0, r0, 0x1
    stw r0, 0x3c(r27)
lbl_fn_8060CE10_00000E88:
    lwz r3, 0x0(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8060CE10_00000EA4
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    stw r31, 0x0(r27)
lbl_fn_8060CE10_00000EA4:
    addi r30, r30, 0x1
    addi r27, r27, 0x4
    cmplwi r30, 0x4
    blt lbl_fn_8060CE10_00000E88
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r28
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060CE10_00000EE8
lbl_fn_8060CE10_00000ECC:
    lwz r0, 0x3c(r27)
    mr r3, r28
    ori r0, r0, 0x2
    clrrwi r0, r0, 1
    stw r0, 0x3c(r27)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_8060CE10_00000EE8:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
