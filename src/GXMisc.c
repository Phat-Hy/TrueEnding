#include "revolution/types.h"
#include "revolution/os.h"
#include "revolution/os/OSInterrupt.h"
#include "revolution/os/OSThread.h"

/* Runtime / ABI helpers */
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void fn_805EAA00(void);

/* External functions referenced */
extern void __GXInitRevisionBits(void);
extern void fn_80612A50(void);
extern void fn_80612CD0(void);
extern void fn_80614510(void);

/* External SDA symbols */
extern u32 __GXData;
extern u32 __memReg;
extern u32 __peReg;
extern u8 lbl_808800A0[8];
extern u8 lbl_808800A8;
extern u32 lbl_808800AC;
extern u8 lbl_808800B0[8];

/* Function declarations */
void GXSetMisc(void);
void fn_80613C60(void);
void fn_80613CC0(void);
void fn_80613E30(void);
void fn_80613FF0(void);
void fn_806140B0(void);
void fn_806140C0(void);
void fn_80614190(void);
void fn_806141C0(void);
void fn_806141D0(void);
void fn_806141F0(void);
void fn_80614210(void);
void fn_80614270(void);
void fn_80614290(void);
void fn_806142B0(void);
void fn_806142D0(void);
void fn_806142F0(void);
void fn_80614340(void);
void fn_806143D0(void);
void fn_80614420(void);
void __GXPEInit(void);

asm void GXSetMisc(void)
{
    nofralloc
    cmpwi r3, 0x1
    beq lbl_GXSetMisc_0000001C
    cmpwi r3, 0x2
    beq lbl_GXSetMisc_00000050
    cmpwi r3, 0x3
    beq lbl_GXSetMisc_00000068
    blr
lbl_GXSetMisc_0000001C:
    lwz r5, __GXData
    clrlwi. r0, r4, 16
    sth r4, 0x4(r5)
    cntlzw r3, r0
    li r0, 0x1
    extrwi r3, r3, 16, 11
    sth r3, 0x0(r5)
    sth r0, 0x2(r5)
    beqlr
    lwz r0, 0x5fc(r5)
    ori r0, r0, 0x8
    stw r0, 0x5fc(r5)
    blr
lbl_GXSetMisc_00000050:
    neg r0, r4
    lwz r3, __GXData
    or r0, r0, r4
    srwi r0, r0, 31
    stb r0, 0x5f9(r3)
    blr
lbl_GXSetMisc_00000068:
    neg r0, r4
    lwz r3, __GXData
    or r0, r0, r4
    srwi r0, r0, 31
    stb r0, 0x5fa(r3)
    blr
}

asm void fn_80613C60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r3, __GXData
    stw r0, 0x14(r1)
    lwz r0, 0x5fc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80613C60_000000A0
    bl fn_80614510
lbl_fn_80613C60_000000A0:
    lis r3, 0xcc01
    li r0, 0x0
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    bl fn_805EAA00
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80613CC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r3, __GXData
    lbz r0, 0x5fa(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80613CC0_000001A0
    bl fn_80612A50
    clrlwi. r0, r3, 24
    beq lbl_fn_80613CC0_000001A0
    lwz r5, __memReg
    lhz r0, 0x4e(r5)
lbl_fn_80613CC0_00000118:
    mr r3, r0
    lhz r4, 0x50(r5)
    lhz r0, 0x4e(r5)
    cmplw r0, r3
    bne lbl_fn_80613CC0_00000118
    slwi r3, r0, 16
    li r0, 0x0
    or r27, r3, r4
    li r29, 0x8
    xoris r28, r0, 0x8000
lbl_fn_80613CC0_00000140:
    bl OSGetTime
    mr r31, r4
    mr r30, r3
lbl_fn_80613CC0_0000014C:
    bl OSGetTime
    subfc r4, r31, r4
    subfe r0, r30, r3
    xoris r3, r0, 0x8000
    subfc r0, r4, r29
    subfe r3, r3, r28
    subfe r3, r28, r28
    neg. r3, r3
    beq lbl_fn_80613CC0_0000014C
    lwz r5, __memReg
    lhz r0, 0x4e(r5)
lbl_fn_80613CC0_00000178:
    mr r3, r0
    lhz r4, 0x50(r5)
    lhz r0, 0x4e(r5)
    cmplw r0, r3
    bne lbl_fn_80613CC0_00000178
    slwi r0, r0, 16
    or r0, r0, r4
    cmplw r0, r27
    mr r27, r0
    bne lbl_fn_80613CC0_00000140
lbl_fn_80613CC0_000001A0:
    lis r3, 0xcc00
    li r0, 0x1
    stw r0, 0x3018(r3)
    bl OSGetTime
    li r0, 0x0
    mr r31, r4
    mr r30, r3
    li r29, 0x32
    xoris r28, r0, 0x8000
lbl_fn_80613CC0_000001C4:
    bl OSGetTime
    subfc r4, r31, r4
    subfe r0, r30, r3
    xoris r3, r0, 0x8000
    subfc r0, r4, r29
    subfe r3, r3, r28
    subfe r3, r28, r28
    neg. r3, r3
    beq lbl_fn_80613CC0_000001C4
    lis r3, 0xcc00
    li r30, 0x0
    stw r30, 0x3018(r3)
    bl OSGetTime
    xoris r31, r30, 0x8000
    mr r28, r4
    mr r29, r3
    li r30, 0x5
lbl_fn_80613CC0_00000208:
    bl OSGetTime
    subfc r4, r28, r4
    subfe r0, r29, r3
    xoris r3, r0, 0x8000
    subfc r0, r4, r30
    subfe r3, r3, r31
    subfe r3, r31, r31
    neg. r3, r3
    beq lbl_fn_80613CC0_00000208
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80613E30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r31, __GXData
    lbz r0, 0x5fa(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80613E30_00000310
    bl fn_80612A50
    clrlwi. r0, r3, 24
    beq lbl_fn_80613E30_00000310
    lwz r5, __memReg
    lhz r3, 0x4e(r5)
lbl_fn_80613E30_00000288:
    mr r0, r3
    lhz r4, 0x50(r5)
    lhz r3, 0x4e(r5)
    cmplw r3, r0
    bne lbl_fn_80613E30_00000288
    slwi r3, r3, 16
    li r0, 0x0
    or r26, r3, r4
    li r28, 0x8
    xoris r27, r0, 0x8000
lbl_fn_80613E30_000002B0:
    bl OSGetTime
    mr r30, r4
    mr r29, r3
lbl_fn_80613E30_000002BC:
    bl OSGetTime
    subfc r4, r30, r4
    subfe r0, r29, r3
    xoris r3, r0, 0x8000
    subfc r0, r4, r28
    subfe r3, r3, r27
    subfe r3, r27, r27
    neg. r3, r3
    beq lbl_fn_80613E30_000002BC
    lwz r5, __memReg
    lhz r4, 0x4e(r5)
lbl_fn_80613E30_000002E8:
    mr r0, r4
    lhz r3, 0x50(r5)
    lhz r4, 0x4e(r5)
    cmplw r4, r0
    bne lbl_fn_80613E30_000002E8
    slwi r0, r4, 16
    or r0, r0, r3
    cmplw r0, r26
    mr r26, r0
    bne lbl_fn_80613E30_000002B0
lbl_fn_80613E30_00000310:
    lis r3, 0xcc00
    li r0, 0x1
    stw r0, 0x3018(r3)
    bl OSGetTime
    li r0, 0x0
    mr r30, r4
    mr r29, r3
    li r28, 0x32
    xoris r27, r0, 0x8000
lbl_fn_80613E30_00000334:
    bl OSGetTime
    subfc r4, r30, r4
    subfe r0, r29, r3
    xoris r3, r0, 0x8000
    subfc r0, r4, r28
    subfe r3, r3, r27
    subfe r3, r27, r27
    neg. r3, r3
    beq lbl_fn_80613E30_00000334
    lis r3, 0xcc00
    li r29, 0x0
    stw r29, 0x3018(r3)
    bl OSGetTime
    xoris r30, r29, 0x8000
    mr r27, r4
    mr r28, r3
    li r29, 0x5
lbl_fn_80613E30_00000378:
    bl OSGetTime
    subfc r4, r27, r4
    subfe r0, r28, r3
    xoris r3, r0, 0x8000
    subfc r0, r4, r29
    subfe r3, r3, r30
    subfe r3, r30, r30
    neg. r3, r3
    beq lbl_fn_80613E30_00000378
    bl fn_80612A50
    clrlwi. r0, r3, 24
    beq lbl_fn_80613E30_000003EC
    bl fn_80612CD0
    bl __GXInitRevisionBits
    li r0, 0x0
    stw r0, 0x5fc(r31)
    b lbl_fn_80613E30_000003C0
    bl fn_80614510
lbl_fn_80613E30_000003C0:
    lis r3, 0xcc01
    li r0, 0x0
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    bl fn_805EAA00
lbl_fn_80613E30_000003EC:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80613FF0(void)
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
    lis r4, 0xcc01
    li r5, 0x61
    stb r5, -0x8000(r4)
    oris r6, r29, 0x4800
    li r0, 0x47
    lwz r30, __GXData
    stw r6, -0x8000(r4)
    rlwimi r6, r29, 0, 16, 31
    rlwimi r6, r0, 24, 0, 7
    mr r29, r3
    stb r5, -0x8000(r4)
    stw r6, -0x8000(r4)
    lwz r0, 0x5fc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80613FF0_00000470
    bl fn_80614510
lbl_fn_80613FF0_00000470:
    lis r3, 0xcc01
    li r31, 0x0
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    bl fn_805EAA00
    mr r3, r29
    bl OSRestoreInterrupts
    sth r31, 0x2(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806140B0(void)
{
    nofralloc
    lwz r3, __peReg
    lhz r3, 0xe(r3)
    blr
}

asm void fn_806140C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl OSDisableInterrupts
    lis r5, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r5)
    lis r4, 0x4500
    addi r0, r4, 0x2
    lwz r29, __GXData
    stw r0, -0x8000(r5)
    mr r30, r3
    lwz r0, 0x5fc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806140C0_0000052C
    bl fn_80614510
lbl_fn_806140C0_0000052C:
    lis r3, 0xcc01
    li r31, 0x0
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    bl fn_805EAA00
    stb r31, lbl_808800A8
    mr r3, r30
    bl OSRestoreInterrupts
    sth r31, 0x2(r29)
    bl OSDisableInterrupts
    mr r30, r3
    b lbl_fn_806140C0_0000057C
lbl_fn_806140C0_00000574:
    la r3, lbl_808800A0
    bl OSSleepThread
lbl_fn_806140C0_0000057C:
    lbz r0, lbl_808800A8
    cmpwi r0, 0x0
    beq lbl_fn_806140C0_00000574
    mr r3, r30
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80614190(void)
{
    nofralloc
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    li r0, 0x0
    lwz r5, __GXData
    lwz r3, 0x22c(r5)
    stw r3, -0x8000(r4)
    sth r0, 0x2(r5)
    blr
}

asm void fn_806141C0(void)
{
    nofralloc
    lwz r5, __peReg
    rlwimi r4, r3, 8, 0, 23
    sth r4, 0x6(r5)
    blr
}

asm void fn_806141D0(void)
{
    nofralloc
    lwz r4, __peReg
    li r0, 0x0
    rlwimi r0, r3, 0, 30, 31
    ori r0, r0, 0x4
    sth r0, 0x8(r4)
    blr
}

asm void fn_806141F0(void)
{
    nofralloc
    lwz r4, __peReg
    lhz r0, 0x2(r4)
    rlwimi r0, r3, 4, 27, 27
    sth r0, 0x2(r4)
    blr
}

asm void fn_80614210(void)
{
    nofralloc
    lwz r7, __peReg
    cmpwi r3, 0x1
    li r0, 0x0
    lhz r9, 0x2(r7)
    beq lbl_fn_80614210_0000064C
    cmpwi r3, 0x3
    bne lbl_fn_80614210_00000650
lbl_fn_80614210_0000064C:
    li r0, 0x1
lbl_fn_80614210_00000650:
    subi r7, r3, 0x3
    rlwimi r9, r0, 0, 31, 31
    subi r0, r3, 0x2
    lwz r3, __peReg
    cntlzw r8, r7
    cntlzw r7, r0
    li r0, 0x41
    rlwimi r9, r8, 6, 20, 20
    rlwimi r9, r7, 28, 30, 30
    rlwimi r9, r6, 12, 16, 19
    rlwimi r9, r4, 8, 21, 23
    rlwimi r9, r5, 5, 24, 26
    rlwimi r9, r0, 24, 0, 7
    sth r9, 0x2(r3)
    blr
}

asm void fn_80614270(void)
{
    nofralloc
    lwz r4, __peReg
    lhz r0, 0x2(r4)
    rlwimi r0, r3, 3, 28, 28
    sth r0, 0x2(r4)
    blr
}

asm void fn_80614290(void)
{
    nofralloc
    lwz r5, __peReg
    li r0, 0x0
    rlwimi r0, r4, 0, 24, 31
    rlwimi r0, r3, 8, 23, 23
    sth r0, 0x4(r5)
    blr
}

asm void fn_806142B0(void)
{
    nofralloc
    lwz r4, __peReg
    lhz r0, 0x2(r4)
    rlwimi r0, r3, 2, 29, 29
    sth r0, 0x2(r4)
    blr
}

asm void fn_806142D0(void)
{
    nofralloc
    lwz r6, __peReg
    li r0, 0x0
    rlwimi r0, r3, 0, 31, 31
    rlwimi r0, r4, 1, 28, 30
    rlwimi r0, r5, 4, 27, 27
    sth r0, 0x0(r6)
    blr
}

asm void fn_806142F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, lbl_808800B0
    bl OSDisableInterrupts
    stw r30, lbl_808800B0
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80614340(void)
{
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    stw r31, 0x2dc(r1)
    stw r30, 0x2d8(r1)
    mr r30, r4
    lwz r0, lbl_808800B0
    lwz r3, __peReg
    cmpwi r0, 0x0
    lhz r31, 0xe(r3)
    beq lbl_fn_80614340_000007BC
    addi r3, r1, 0x8
    bl OSClearContext
    addi r3, r1, 0x8
    bl OSSetCurrentContext
    lwz r12, lbl_808800B0
    mr r3, r31
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    bl OSClearContext
    mr r3, r30
    bl OSSetCurrentContext
lbl_fn_80614340_000007BC:
    lwz r3, __peReg
    lhz r0, 0xa(r3)
    ori r0, r0, 0x4
    sth r0, 0xa(r3)
    lwz r0, 0x2e4(r1)
    lwz r31, 0x2dc(r1)
    lwz r30, 0x2d8(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

asm void fn_806143D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, lbl_808800AC
    bl OSDisableInterrupts
    stw r30, lbl_808800AC
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80614420(void)
{
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    li r3, 0x1
    stw r0, 0x2e4(r1)
    stw r31, 0x2dc(r1)
    mr r31, r4
    lwz r5, __peReg
    lhz r0, 0xa(r5)
    ori r0, r0, 0x8
    sth r0, 0xa(r5)
    lwz r0, lbl_808800AC
    stb r3, lbl_808800A8
    cmpwi r0, 0x0
    beq lbl_fn_80614420_000008A4
    addi r3, r1, 0x8
    bl OSClearContext
    addi r3, r1, 0x8
    bl OSSetCurrentContext
    lwz r12, lbl_808800AC
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    bl OSClearContext
    mr r3, r31
    bl OSSetCurrentContext
lbl_fn_80614420_000008A4:
    la r3, lbl_808800A0
    bl OSWakeupThread
    lwz r0, 0x2e4(r1)
    lwz r31, 0x2dc(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

asm void __GXPEInit(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, fn_80614340@ha
    li r3, 0x12
    stw r0, 0x14(r1)
    addi r4, r4, fn_80614340@l
    bl __OSSetInterruptHandler
    lis r4, fn_80614420@ha
    li r3, 0x13
    addi r4, r4, fn_80614420@l
    bl __OSSetInterruptHandler
    la r3, lbl_808800A0
    bl OSInitThreadQueue
    li r3, 0x2000
    bl __OSUnmaskInterrupts
    li r3, 0x1000
    bl __OSUnmaskInterrupts
    lwz r3, __peReg
    lhz r0, 0xa(r3)
    ori r0, r0, 0xf
    sth r0, 0xa(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
