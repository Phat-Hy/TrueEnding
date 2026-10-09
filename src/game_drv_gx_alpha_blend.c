#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void EXIImm(void);
extern void EXISync(void);
extern void OSCancelAlarm(void);
extern void OSClearContext(void);
extern void OSDisableInterrupts(void);
extern void OSGetTime(void);
extern void OSRegisterVersion(void);
extern void OSRestoreInterrupts(void);
extern void OSSetCurrentContext(void);
extern void SITransfer(void);
extern void SetExiInterruptMask_805E7A90(void);
extern void __OSGetSystemTime(void);
extern void __OSMaskInterrupts(void);
extern void __OSSetInterruptHandler(void);
extern void __OSUnmaskInterrupts(void);
extern void __div2i(void);
extern void _restgpr_17(void);
extern void _restgpr_23(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_17(void);
extern void _savegpr_23(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_805EA010(void);
extern void fn_806051D0(void);
extern void memmove(void);

/* External data declarations */
extern u8 Ecb_807CAF50[];
extern u8 GetTypeCallback_805EA420[];
extern u8 Packet_807CB010[];
extern u8 Si_8079BDA0[];
extern u8 TypeTime_807CB0B0[];
extern u8 Type_8079BDB8[];
extern u8 lbl_807CB090[];

/* Small data declarations */
extern u32 IDSerialPort1_8087FB68;
extern u32 __EXIVersion;
extern u32 __OSInIPL;
extern u32 lbl_8087FB70;
extern u32 lbl_8087FB74;
extern u32 lbl_8087FB78;
extern u32 lbl_8087FB7C;
extern u32 lbl_8087FB80;

/* Function declarations */
void fn_805E8230(void);
void __EXIProbe(void);
void fn_805E8440(void);
void fn_805E8560(void);
void EXISelect(void);
void EXIDeselect(void);
void EXIIntrruptHandler(void);
void TCIntrruptHandler(void);
void EXTIntrruptHandler(void);
void EXIInit(void);
void EXILock(void);
void EXIUnlock(void);
void UnlockedHandler(void);
void EXIGetID(void);
void fn_805E9390(void);
void __OSEnableBarnacle(void);
void fn_805E96D0(void);
void fn_805E9860(void);
void SIInterruptHandler_805E9B60(void);

asm void fn_805E8230(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    slwi r0, r3, 6
    lis r31, Ecb_807CAF50@ha
    addi r31, r31, Ecb_807CAF50@l
    add r30, r31, r0
    bl OSDisableInterrupts
    mr r28, r3
    lwz r29, 0x0(r30)
    stw r27, 0x0(r30)
    cmpwi r26, 0x2
    beq lbl_fn_805E8230_00000054
    mr r3, r26
    mr r4, r30
    bl SetExiInterruptMask_805E7A90
    b lbl_fn_805E8230_00000060
lbl_fn_805E8230_00000054:
    li r3, 0x0
    mr r4, r31
    bl SetExiInterruptMask_805E7A90
lbl_fn_805E8230_00000060:
    mr r3, r28
    bl OSRestoreInterrupts
    mr r3, r29
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void __EXIProbe(void)
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
    slwi r0, r3, 6
    lis r4, Ecb_807CAF50@ha
    addi r4, r4, Ecb_807CAF50@l
    add r31, r4, r0
    cmpwi r3, 0x2
    bne lbl___EXIProbe_000000D0
    li r3, 0x1
    b lbl___EXIProbe_000001F0
lbl___EXIProbe_000000D0:
    li r29, 0x1
    bl OSDisableInterrupts
    mr r30, r3
    mulli r3, r28, 0x14
    lis r0, 0xcd00
    add r3, r0, r3
    lwz r5, 0x6800(r3)
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 28, 28
    bne lbl___EXIProbe_000001B8
    rlwinm. r0, r5, 0, 20, 20
    beq lbl___EXIProbe_00000128
    lwz r0, 0x6800(r3)
    andi. r0, r0, 0x7f5
    ori r0, r0, 0x800
    stw r0, 0x6800(r3)
    li r4, 0x0
    stw r4, 0x20(r31)
    slwi r3, r28, 2
    lis r0, 0x8000
    add r3, r0, r3
    stw r4, 0x30c0(r3)
lbl___EXIProbe_00000128:
    rlwinm. r0, r5, 0, 19, 19
    beq lbl___EXIProbe_00000198
    bl OSGetTime
    lis r31, 0x8000
    lwz r0, 0xf8(r31)
    srwi r0, r0, 2
    lis r5, 0x1062
    addi r5, r5, 0x4dd3
    mulhwu r0, r5, r0
    srwi r6, r0, 6
    li r5, 0x0
    bl __div2i
    li r6, 0x64
    li r5, 0x0
    bl __div2i
    addi r4, r4, 0x1
    slwi r0, r28, 2
    add r3, r31, r0
    lwz r0, 0x30c0(r3)
    cmpwi r0, 0x0
    bne lbl___EXIProbe_00000180
    stw r4, 0x30c0(r3)
lbl___EXIProbe_00000180:
    lwz r0, 0x30c0(r3)
    subf r0, r0, r4
    cmpwi r0, 0x3
    bge lbl___EXIProbe_000001E4
    li r29, 0x0
    b lbl___EXIProbe_000001E4
lbl___EXIProbe_00000198:
    li r4, 0x0
    stw r4, 0x20(r31)
    slwi r3, r28, 2
    lis r0, 0x8000
    add r3, r0, r3
    stw r4, 0x30c0(r3)
    li r29, 0x0
    b lbl___EXIProbe_000001E4
lbl___EXIProbe_000001B8:
    rlwinm. r0, r5, 0, 19, 19
    beq lbl___EXIProbe_000001C8
    rlwinm. r0, r5, 0, 20, 20
    beq lbl___EXIProbe_000001E4
lbl___EXIProbe_000001C8:
    li r4, 0x0
    stw r4, 0x20(r31)
    slwi r3, r28, 2
    lis r0, 0x8000
    add r3, r0, r3
    stw r4, 0x30c0(r3)
    li r29, 0x0
lbl___EXIProbe_000001E4:
    mr r3, r30
    bl OSRestoreInterrupts
    mr r3, r29
lbl___EXIProbe_000001F0:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805E8440(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r29, r3
    mr r27, r4
    slwi r0, r3, 6
    lis r4, Ecb_807CAF50@ha
    addi r4, r4, Ecb_807CAF50@l
    add r31, r4, r0
    bl __EXIProbe
    cmpwi r3, 0x0
    beq lbl_fn_805E8440_00000264
    lwz r0, 0x20(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805E8440_00000264
    mr r3, r29
    li r4, 0x0
    addi r5, r1, 0x8
    bl EXIGetID
lbl_fn_805E8440_00000264:
    bl OSDisableInterrupts
    mr r30, r3
    lwz r0, 0x20(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805E8440_00000284
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_805E8440_00000310
lbl_fn_805E8440_00000284:
    bl OSDisableInterrupts
    mr r28, r3
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 28, 28
    bne lbl_fn_805E8440_000002A8
    mr r3, r29
    bl __EXIProbe
    cmpwi r3, 0x0
    bne lbl_fn_805E8440_000002B8
lbl_fn_805E8440_000002A8:
    mr r3, r28
    bl OSRestoreInterrupts
    li r29, 0x0
    b lbl_fn_805E8440_00000304
lbl_fn_805E8440_000002B8:
    mulli r3, r29, 0x14
    lis r0, 0xcd00
    add r3, r0, r3
    lwz r0, 0x6800(r3)
    andi. r0, r0, 0x7f5
    ori r0, r0, 0x2
    stw r0, 0x6800(r3)
    stw r27, 0x8(r31)
    lis r3, 0x10
    slwi r0, r29, 2
    subf r0, r29, r0
    srw r3, r3, r0
    bl __OSUnmaskInterrupts
    lwz r0, 0xc(r31)
    ori r0, r0, 0x8
    stw r0, 0xc(r31)
    mr r3, r28
    bl OSRestoreInterrupts
    li r29, 0x1
lbl_fn_805E8440_00000304:
    mr r3, r30
    bl OSRestoreInterrupts
    mr r3, r29
lbl_fn_805E8440_00000310:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805E8560(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    slwi r0, r3, 6
    lis r3, Ecb_807CAF50@ha
    addi r3, r3, Ecb_807CAF50@l
    add r31, r3, r0
    bl OSDisableInterrupts
    mr r30, r3
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 28, 28
    bne lbl_fn_805E8560_0000037C
    bl OSRestoreInterrupts
    li r3, 0x1
    b lbl_fn_805E8560_000003CC
lbl_fn_805E8560_0000037C:
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_fn_805E8560_000003A0
    lwz r0, 0x18(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805E8560_000003A0
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_805E8560_000003CC
lbl_fn_805E8560_000003A0:
    lwz r0, 0xc(r31)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0xc(r31)
    lis r3, 0x50
    slwi r0, r29, 2
    subf r0, r29, r0
    srw r3, r3, r0
    bl __OSMaskInterrupts
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_805E8560_000003CC:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void EXISelect(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    slwi r0, r3, 6
    lis r3, Ecb_807CAF50@ha
    addi r3, r3, Ecb_807CAF50@l
    add r31, r3, r0
    bl OSDisableInterrupts
    mr r30, r3
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_EXISelect_00000478
    cmpwi r27, 0x2
    beq lbl_EXISelect_00000488
    cmpwi r28, 0x0
    bne lbl_EXISelect_00000460
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 28, 28
    bne lbl_EXISelect_00000460
    mr r3, r27
    bl __EXIProbe
    cmpwi r3, 0x0
    beq lbl_EXISelect_00000478
lbl_EXISelect_00000460:
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_EXISelect_00000478
    lwz r0, 0x18(r31)
    cmplw r0, r28
    beq lbl_EXISelect_00000488
lbl_EXISelect_00000478:
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_EXISelect_00000504
lbl_EXISelect_00000488:
    lwz r0, 0xc(r31)
    ori r0, r0, 0x4
    stw r0, 0xc(r31)
    mulli r3, r27, 0x14
    lis r0, 0xcd00
    add r4, r0, r3
    lwz r3, 0x6800(r4)
    andi. r3, r3, 0x405
    slwi r0, r29, 4
    or r3, r3, r0
    li r0, 0x1
    slw r0, r0, r28
    slwi r0, r0, 7
    or r3, r3, r0
    stw r3, 0x6800(r4)
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_EXISelect_000004F8
    cmpwi r27, 0x0
    beq lbl_EXISelect_000004E4
    cmpwi r27, 0x1
    beq lbl_EXISelect_000004F0
    b lbl_EXISelect_000004F8
lbl_EXISelect_000004E4:
    lis r3, 0x10
    bl __OSMaskInterrupts
    b lbl_EXISelect_000004F8
lbl_EXISelect_000004F0:
    lis r3, 0x2
    bl __OSMaskInterrupts
lbl_EXISelect_000004F8:
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_EXISelect_00000504:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void EXIDeselect(void)
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
    slwi r0, r3, 6
    lis r3, Ecb_807CAF50@ha
    addi r3, r3, Ecb_807CAF50@l
    add r31, r3, r0
    bl OSDisableInterrupts
    mr r29, r3
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_EXIDeselect_00000570
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_EXIDeselect_000005FC
lbl_EXIDeselect_00000570:
    lwz r0, 0xc(r31)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0xc(r31)
    mulli r3, r28, 0x14
    lis r0, 0xcd00
    add r3, r0, r3
    lwz r30, 0x6800(r3)
    andi. r0, r30, 0x405
    stw r0, 0x6800(r3)
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_EXIDeselect_000005C8
    cmpwi r28, 0x0
    beq lbl_EXIDeselect_000005B4
    cmpwi r28, 0x1
    beq lbl_EXIDeselect_000005C0
    b lbl_EXIDeselect_000005C8
lbl_EXIDeselect_000005B4:
    lis r3, 0x10
    bl __OSUnmaskInterrupts
    b lbl_EXIDeselect_000005C8
lbl_EXIDeselect_000005C0:
    lis r3, 0x2
    bl __OSUnmaskInterrupts
lbl_EXIDeselect_000005C8:
    mr r3, r29
    bl OSRestoreInterrupts
    cmpwi r28, 0x2
    beq lbl_EXIDeselect_000005F8
    rlwinm. r0, r30, 0, 24, 24
    beq lbl_EXIDeselect_000005F8
    mr r3, r28
    bl __EXIProbe
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_EXIDeselect_000005FC
lbl_EXIDeselect_000005F8:
    li r3, 0x1
lbl_EXIDeselect_000005FC:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void EXIIntrruptHandler(void)
{
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    stw r31, 0x2dc(r1)
    stw r30, 0x2d8(r1)
    stw r29, 0x2d4(r1)
    mr r29, r4
    subi r0, r3, 0x9
    lis r3, 0x5555
    addi r3, r3, 0x5556
    mulhw r3, r3, r0
    srwi r0, r3, 31
    add r31, r3, r0
    mulli r3, r31, 0x14
    lis r0, 0xcd00
    add r3, r0, r3
    lwz r0, 0x6800(r3)
    andi. r0, r0, 0x7f5
    ori r0, r0, 0x2
    stw r0, 0x6800(r3)
    slwi r0, r31, 6
    lis r3, Ecb_807CAF50@ha
    addi r3, r3, Ecb_807CAF50@l
    lwzx r30, r3, r0
    cmpwi r30, 0x0
    beq lbl_EXIIntrruptHandler_000006BC
    addi r3, r1, 0x8
    bl OSClearContext
    addi r3, r1, 0x8
    bl OSSetCurrentContext
    mr r3, r31
    mr r4, r29
    mr r12, r30
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    bl OSClearContext
    mr r3, r29
    bl OSSetCurrentContext
lbl_EXIIntrruptHandler_000006BC:
    lwz r31, 0x2dc(r1)
    lwz r30, 0x2d8(r1)
    lwz r29, 0x2d4(r1)
    lwz r0, 0x2e4(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

asm void TCIntrruptHandler(void)
{
    nofralloc
    stwu r1, -0x2f0(r1)
    mflr r0
    stw r0, 0x2f4(r1)
    addi r11, r1, 0x2f0
    bl _savegpr_27
    mr r27, r4
    subi r0, r3, 0xa
    lis r4, 0x5555
    addi r4, r4, 0x5556
    mulhw r4, r4, r0
    srwi r0, r4, 31
    add r29, r4, r0
    slwi r0, r29, 6
    lis r4, Ecb_807CAF50@ha
    addi r4, r4, Ecb_807CAF50@l
    add r30, r4, r0
    lis r31, 0x8000
    srw r3, r31, r3
    bl __OSMaskInterrupts
    mulli r3, r29, 0x14
    lis r0, 0xcd00
    add r3, r0, r3
    lwz r0, 0x6800(r3)
    andi. r0, r0, 0x7f5
    ori r0, r0, 0x8
    stw r0, 0x6800(r3)
    lwz r28, 0x4(r30)
    cmpwi r28, 0x0
    beq lbl_TCIntrruptHandler_000008E0
    li r0, 0x0
    stw r0, 0x4(r30)
    lwz r0, 0xc(r30)
    clrlwi. r0, r0, 30
    beq lbl_TCIntrruptHandler_000008AC
    lwz r0, 0xc(r30)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_TCIntrruptHandler_000008A0
    lwz r5, 0x10(r30)
    cmpwi cr1, r5, 0x0
    beq cr1, lbl_TCIntrruptHandler_000008A0
    lwz r4, 0x14(r30)
    lwz r0, 0x6810(r3)
    li r3, 0x0
    ble cr1, lbl_TCIntrruptHandler_000008A0
    subi r7, r5, 0x8
    cmpwi r5, 0x8
    ble lbl_TCIntrruptHandler_00000874
    li r8, 0x0
    blt cr1, lbl_TCIntrruptHandler_000007B4
    subi r6, r31, 0x2
    cmpw r5, r6
    bgt lbl_TCIntrruptHandler_000007B4
    li r8, 0x1
lbl_TCIntrruptHandler_000007B4:
    cmpwi r8, 0x0
    beq lbl_TCIntrruptHandler_00000874
    addi r6, r7, 0x7
    srwi r6, r6, 3
    mtctr r6
    cmpwi r7, 0x0
    ble lbl_TCIntrruptHandler_00000874
lbl_TCIntrruptHandler_000007D0:
    subfic r6, r3, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x0(r4)
    addi r6, r3, 0x1
    subfic r6, r6, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x1(r4)
    addi r6, r3, 0x2
    subfic r6, r6, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x2(r4)
    neg r6, r3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x3(r4)
    addi r6, r3, 0x4
    subfic r6, r6, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x4(r4)
    addi r6, r3, 0x5
    subfic r6, r6, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x5(r4)
    addi r6, r3, 0x6
    subfic r6, r6, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x6(r4)
    addi r6, r3, 0x7
    subfic r6, r6, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x7(r4)
    addi r4, r4, 0x8
    addi r3, r3, 0x8
    bdnz lbl_TCIntrruptHandler_000007D0
lbl_TCIntrruptHandler_00000874:
    subf r6, r3, r5
    mtctr r6
    cmpw r3, r5
    bge lbl_TCIntrruptHandler_000008A0
lbl_TCIntrruptHandler_00000884:
    subfic r5, r3, 0x3
    slwi r5, r5, 3
    srw r5, r0, r5
    stb r5, 0x0(r4)
    addi r4, r4, 0x1
    addi r3, r3, 0x1
    bdnz lbl_TCIntrruptHandler_00000884
lbl_TCIntrruptHandler_000008A0:
    lwz r0, 0xc(r30)
    clrrwi r0, r0, 2
    stw r0, 0xc(r30)
lbl_TCIntrruptHandler_000008AC:
    addi r3, r1, 0x8
    bl OSClearContext
    addi r3, r1, 0x8
    bl OSSetCurrentContext
    mr r3, r29
    mr r4, r27
    mr r12, r28
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    bl OSClearContext
    mr r3, r27
    bl OSSetCurrentContext
lbl_TCIntrruptHandler_000008E0:
    addi r11, r1, 0x2f0
    bl _restgpr_27
    lwz r0, 0x2f4(r1)
    mtlr r0
    addi r1, r1, 0x2f0
    blr
}

asm void EXTIntrruptHandler(void)
{
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    stw r31, 0x2dc(r1)
    stw r30, 0x2d8(r1)
    stw r29, 0x2d4(r1)
    stw r28, 0x2d0(r1)
    mr r28, r4
    subi r0, r3, 0xb
    lis r3, 0x5555
    addi r3, r3, 0x5556
    mulhw r3, r3, r0
    srwi r0, r3, 31
    add r31, r3, r0
    lis r3, 0x50
    slwi r0, r31, 2
    subf r0, r31, r0
    srw r3, r3, r0
    bl __OSMaskInterrupts
    slwi r0, r31, 6
    lis r3, Ecb_807CAF50@ha
    addi r3, r3, Ecb_807CAF50@l
    add r30, r3, r0
    lwz r29, 0x8(r30)
    lwz r0, 0xc(r30)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0xc(r30)
    cmpwi r29, 0x0
    beq lbl_EXTIntrruptHandler_000009B0
    addi r3, r1, 0x8
    bl OSClearContext
    addi r3, r1, 0x8
    bl OSSetCurrentContext
    li r0, 0x0
    stw r0, 0x8(r30)
    mr r3, r31
    mr r4, r28
    mr r12, r29
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    bl OSClearContext
    mr r3, r28
    bl OSSetCurrentContext
lbl_EXTIntrruptHandler_000009B0:
    lwz r31, 0x2dc(r1)
    lwz r30, 0x2d8(r1)
    lwz r29, 0x2d4(r1)
    lwz r28, 0x2d0(r1)
    lwz r0, 0x2e4(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

asm void EXIInit(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lis r3, 0xcd00
lbl_EXIInit_000009F0:
    lwz r0, 0x680c(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_EXIInit_000009F0
    lwz r0, 0x6820(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_EXIInit_000009F0
    lwz r0, 0x6834(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_EXIInit_000009F0
    lis r3, 0x80
    addi r3, r3, -0x8000
    bl __OSMaskInterrupts
    li r28, 0x0
    lis r3, 0xcd00
    stw r28, 0x6800(r3)
    stw r28, 0x6814(r3)
    stw r28, 0x6828(r3)
    li r0, 0x2000
    stw r0, 0x6800(r3)
    li r3, 0x9
    lis r29, EXIIntrruptHandler@ha
    addi r4, r29, EXIIntrruptHandler@l
    bl __OSSetInterruptHandler
    li r3, 0xa
    lis r30, TCIntrruptHandler@ha
    addi r4, r30, TCIntrruptHandler@l
    bl __OSSetInterruptHandler
    li r3, 0xb
    lis r31, EXTIntrruptHandler@ha
    addi r4, r31, EXTIntrruptHandler@l
    bl __OSSetInterruptHandler
    li r3, 0xc
    addi r4, r29, EXIIntrruptHandler@l
    bl __OSSetInterruptHandler
    li r3, 0xd
    addi r4, r30, TCIntrruptHandler@l
    bl __OSSetInterruptHandler
    li r3, 0xe
    addi r4, r31, EXTIntrruptHandler@l
    bl __OSSetInterruptHandler
    li r3, 0xf
    addi r4, r29, EXIIntrruptHandler@l
    bl __OSSetInterruptHandler
    li r3, 0x10
    addi r4, r30, TCIntrruptHandler@l
    bl __OSSetInterruptHandler
    li r3, 0x0
    li r4, 0x2
    la r5, IDSerialPort1_8087FB68
    bl EXIGetID
    lwz r0, __OSInIPL
    cmpwi r0, 0x0
    beq lbl_EXIInit_00000B00
    lis r3, 0x8000
    stw r28, 0x30c4(r3)
    stw r28, 0x30c0(r3)
    lis r3, Ecb_807CAF50@ha
    addi r3, r3, Ecb_807CAF50@l
    stw r28, 0x60(r3)
    stw r28, 0x20(r3)
    li r3, 0x0
    bl __EXIProbe
    li r3, 0x1
    bl __EXIProbe
    b lbl_EXIInit_00000B6C
lbl_EXIInit_00000B00:
    li r3, 0x0
    li r4, 0x0
    addi r5, r1, 0x8
    bl EXIGetID
    cmpwi r3, 0x0
    beq lbl_EXIInit_00000B38
    lwz r3, 0x8(r1)
    subis r0, r3, 0x701
    cmplwi r0, 0x0
    bne lbl_EXIInit_00000B38
    li r3, 0x1
    li r4, 0x0
    bl __OSEnableBarnacle
    b lbl_EXIInit_00000B6C
lbl_EXIInit_00000B38:
    li r3, 0x1
    li r4, 0x0
    addi r5, r1, 0x8
    bl EXIGetID
    cmpwi r3, 0x0
    beq lbl_EXIInit_00000B6C
    lwz r3, 0x8(r1)
    subis r0, r3, 0x701
    cmplwi r0, 0x0
    bne lbl_EXIInit_00000B6C
    li r3, 0x0
    li r4, 0x2
    bl __OSEnableBarnacle
lbl_EXIInit_00000B6C:
    lwz r3, __EXIVersion
    bl OSRegisterVersion
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void EXILock(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r31, r4
    mr r28, r5
    slwi r0, r3, 6
    lis r3, Ecb_807CAF50@ha
    addi r3, r3, Ecb_807CAF50@l
    add r30, r3, r0
    bl OSDisableInterrupts
    mr r29, r3
    lwz r0, 0xc(r30)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_EXILock_00000C5C
    cmpwi r28, 0x0
    beq lbl_EXILock_00000C4C
    mr r3, r30
    lwz r4, 0x24(r30)
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_EXILock_00000C24
lbl_EXILock_00000C00:
    lwz r0, 0x28(r3)
    cmplw r31, r0
    bne lbl_EXILock_00000C1C
    mr r3, r29
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_EXILock_00000C84
lbl_EXILock_00000C1C:
    addi r3, r3, 0x8
    bdnz lbl_EXILock_00000C00
lbl_EXILock_00000C24:
    slwi r0, r4, 3
    add r3, r30, r0
    stw r28, 0x2c(r3)
    lwz r0, 0x24(r30)
    slwi r0, r0, 3
    add r3, r30, r0
    stw r31, 0x28(r3)
    lwz r3, 0x24(r30)
    addi r0, r3, 0x1
    stw r0, 0x24(r30)
lbl_EXILock_00000C4C:
    mr r3, r29
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_EXILock_00000C84
lbl_EXILock_00000C5C:
    lwz r0, 0xc(r30)
    ori r0, r0, 0x10
    stw r0, 0xc(r30)
    stw r31, 0x18(r30)
    mr r3, r27
    mr r4, r30
    bl SetExiInterruptMask_805E7A90
    mr r3, r29
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_EXILock_00000C84:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void EXIUnlock(void)
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
    slwi r0, r3, 6
    lis r3, Ecb_807CAF50@ha
    addi r3, r3, Ecb_807CAF50@l
    add r31, r3, r0
    bl OSDisableInterrupts
    mr r30, r3
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 27, 27
    bne lbl_EXIUnlock_00000CF0
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_EXIUnlock_00000D58
lbl_EXIUnlock_00000CF0:
    lwz r0, 0xc(r31)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0xc(r31)
    mr r3, r28
    mr r4, r31
    bl SetExiInterruptMask_805E7A90
    lwz r3, 0x24(r31)
    cmpwi r3, 0x0
    ble lbl_EXIUnlock_00000D4C
    lwz r29, 0x2c(r31)
    subic. r0, r3, 0x1
    stw r0, 0x24(r31)
    ble lbl_EXIUnlock_00000D38
    addi r3, r31, 0x28
    addi r4, r31, 0x30
    lwz r0, 0x24(r31)
    slwi r5, r0, 3
    bl memmove
lbl_EXIUnlock_00000D38:
    mr r3, r28
    li r4, 0x0
    mr r12, r29
    mtctr r12
    bctrl
lbl_EXIUnlock_00000D4C:
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_EXIUnlock_00000D58:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void UnlockedHandler(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r4, 0x0
    addi r5, r1, 0x8
    bl EXIGetID
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void EXIGetID(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    mr r25, r3
    mr r26, r4
    mr r27, r5
    slwi r0, r3, 6
    lis r6, Ecb_807CAF50@ha
    addi r6, r6, Ecb_807CAF50@l
    add r29, r6, r0
    cmpwi r3, 0x0
    bne lbl_EXIGetID_00000E08
    cmplwi r4, 0x2
    bne lbl_EXIGetID_00000E08
    lwz r0, IDSerialPort1_8087FB68
    cmpwi r0, 0x0
    beq lbl_EXIGetID_00000E08
    stw r0, 0x0(r5)
    li r3, 0x1
    b lbl_EXIGetID_00001140
lbl_EXIGetID_00000E08:
    cmpwi r3, 0x2
    bge lbl_EXIGetID_00000EF4
    cmpwi r4, 0x0
    bne lbl_EXIGetID_00000EF4
    mr r3, r25
    bl __EXIProbe
    cmpwi r3, 0x0
    bne lbl_EXIGetID_00000E30
    li r3, 0x0
    b lbl_EXIGetID_00001140
lbl_EXIGetID_00000E30:
    slwi r3, r25, 2
    lis r0, 0x8000
    add r31, r0, r3
    lwz r3, 0x20(r29)
    lwz r0, 0x30c0(r31)
    cmpw r3, r0
    bne lbl_EXIGetID_00000E5C
    lwz r0, 0x1c(r29)
    stw r0, 0x0(r27)
    lwz r3, 0x20(r29)
    b lbl_EXIGetID_00001140
lbl_EXIGetID_00000E5C:
    bl OSDisableInterrupts
    mr r30, r3
    lwz r0, 0xc(r29)
    rlwinm. r0, r0, 0, 28, 28
    bne lbl_EXIGetID_00000E80
    mr r3, r25
    bl __EXIProbe
    cmpwi r3, 0x0
    bne lbl_EXIGetID_00000E90
lbl_EXIGetID_00000E80:
    mr r3, r30
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_EXIGetID_00000EE0
lbl_EXIGetID_00000E90:
    mulli r3, r25, 0x14
    lis r0, 0xcd00
    add r3, r0, r3
    lwz r0, 0x6800(r3)
    andi. r0, r0, 0x7f5
    ori r0, r0, 0x2
    stw r0, 0x6800(r3)
    li r0, 0x0
    stw r0, 0x8(r29)
    lis r3, 0x10
    slwi r0, r25, 2
    subf r0, r25, r0
    srw r3, r3, r0
    bl __OSUnmaskInterrupts
    lwz r0, 0xc(r29)
    ori r0, r0, 0x8
    stw r0, 0xc(r29)
    mr r3, r30
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_EXIGetID_00000EE0:
    cmpwi r0, 0x0
    bne lbl_EXIGetID_00000EF0
    li r3, 0x0
    b lbl_EXIGetID_00001140
lbl_EXIGetID_00000EF0:
    lwz r31, 0x30c0(r31)
lbl_EXIGetID_00000EF4:
    bl OSDisableInterrupts
    mr r28, r3
    mr r3, r25
    mr r4, r26
    li r0, 0x0
    cmpwi r25, 0x2
    bge lbl_EXIGetID_00000F1C
    cmpwi r26, 0x0
    bne lbl_EXIGetID_00000F1C
    li r0, 0x1
lbl_EXIGetID_00000F1C:
    cmpwi r0, 0x0
    li r5, 0x0
    beq lbl_EXIGetID_00000F30
    lis r5, UnlockedHandler@ha
    addi r5, r5, UnlockedHandler@l
lbl_EXIGetID_00000F30:
    bl EXILock
    cntlzw r0, r3
    srwi. r30, r0, 5
    bne lbl_EXIGetID_00001068
    mr r3, r25
    mr r4, r26
    li r5, 0x0
    bl EXISelect
    cntlzw r0, r3
    srwi. r30, r0, 5
    bne lbl_EXIGetID_00000FE8
    li r0, 0x0
    stw r0, 0x8(r1)
    mr r3, r25
    addi r4, r1, 0x8
    li r5, 0x2
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    srwi r0, r0, 5
    or r30, r30, r0
    mr r3, r25
    bl EXISync
    cntlzw r0, r3
    srwi r0, r0, 5
    or r30, r30, r0
    mr r3, r25
    mr r4, r27
    li r5, 0x4
    li r6, 0x0
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    srwi r0, r0, 5
    or r30, r30, r0
    mr r3, r25
    bl EXISync
    cntlzw r0, r3
    srwi r0, r0, 5
    or r30, r30, r0
    mr r3, r25
    bl EXIDeselect
    cntlzw r0, r3
    srwi r0, r0, 5
    or r30, r30, r0
lbl_EXIGetID_00000FE8:
    bl OSDisableInterrupts
    mr r23, r3
    lwz r0, 0xc(r29)
    rlwinm. r0, r0, 0, 27, 27
    bne lbl_EXIGetID_00001004
    bl OSRestoreInterrupts
    b lbl_EXIGetID_00001068
lbl_EXIGetID_00001004:
    lwz r0, 0xc(r29)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0xc(r29)
    mr r3, r25
    mr r4, r29
    bl SetExiInterruptMask_805E7A90
    lwz r3, 0x24(r29)
    cmpwi r3, 0x0
    ble lbl_EXIGetID_00001060
    lwz r24, 0x2c(r29)
    subic. r0, r3, 0x1
    stw r0, 0x24(r29)
    ble lbl_EXIGetID_0000104C
    addi r3, r29, 0x28
    addi r4, r29, 0x30
    lwz r0, 0x24(r29)
    slwi r5, r0, 3
    bl memmove
lbl_EXIGetID_0000104C:
    mr r3, r25
    li r4, 0x0
    mr r12, r24
    mtctr r12
    bctrl
lbl_EXIGetID_00001060:
    mr r3, r23
    bl OSRestoreInterrupts
lbl_EXIGetID_00001068:
    mr r3, r28
    bl OSRestoreInterrupts
    cmpwi r25, 0x2
    bge lbl_EXIGetID_00001138
    cmpwi r26, 0x0
    bne lbl_EXIGetID_00001138
    bl OSDisableInterrupts
    mr r23, r3
    lwz r0, 0xc(r29)
    rlwinm. r0, r0, 0, 28, 28
    bne lbl_EXIGetID_0000109C
    bl OSRestoreInterrupts
    b lbl_EXIGetID_000010E4
lbl_EXIGetID_0000109C:
    lwz r0, 0xc(r29)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_EXIGetID_000010BC
    lwz r0, 0x18(r29)
    cmpwi r0, 0x0
    bne lbl_EXIGetID_000010BC
    bl OSRestoreInterrupts
    b lbl_EXIGetID_000010E4
lbl_EXIGetID_000010BC:
    lwz r0, 0xc(r29)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0xc(r29)
    lis r3, 0x50
    slwi r0, r25, 2
    subf r0, r25, r0
    srw r3, r3, r0
    bl __OSMaskInterrupts
    mr r3, r23
    bl OSRestoreInterrupts
lbl_EXIGetID_000010E4:
    bl OSDisableInterrupts
    slwi r4, r25, 2
    lis r0, 0x8000
    add r4, r0, r4
    lwz r0, 0x30c0(r4)
    subf r4, r31, r0
    subf r0, r0, r31
    or r0, r4, r0
    srwi r0, r0, 31
    or. r30, r30, r0
    bne lbl_EXIGetID_0000111C
    lwz r0, 0x0(r27)
    stw r0, 0x1c(r29)
    stw r31, 0x20(r29)
lbl_EXIGetID_0000111C:
    bl OSRestoreInterrupts
    cmpwi r30, 0x0
    beq lbl_EXIGetID_00001130
    li r3, 0x0
    b lbl_EXIGetID_00001140
lbl_EXIGetID_00001130:
    lwz r3, 0x20(r29)
    b lbl_EXIGetID_00001140
lbl_EXIGetID_00001138:
    cntlzw r0, r30
    srwi r3, r0, 5
lbl_EXIGetID_00001140:
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805E9390(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x2
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    beq lbl_fn_805E9390_000011B0
    cmpwi r4, 0x0
    bne lbl_fn_805E9390_000011B0
    li r4, 0x0
    bl fn_805E8440
    cmpwi r3, 0x0
    bne lbl_fn_805E9390_000011B0
    li r3, 0x0
    b lbl_fn_805E9390_000012B8
lbl_fn_805E9390_000011B0:
    mr r3, r29
    mr r4, r30
    li r5, 0x0
    bl EXILock
    cntlzw r0, r3
    srwi. r28, r0, 5
    bne lbl_fn_805E9390_0000127C
    mr r3, r29
    mr r4, r30
    li r5, 0x0
    bl EXISelect
    cntlzw r0, r3
    srwi. r28, r0, 5
    bne lbl_fn_805E9390_00001274
    lis r4, 0x2001
    mr r3, r29
    addi r0, r4, 0x1300
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    li r5, 0x4
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    mr r3, r29
    srwi r28, r0, 5
    bl EXISync
    cntlzw r0, r3
    mr r3, r29
    srwi r0, r0, 5
    mr r4, r31
    or r28, r28, r0
    li r5, 0x4
    li r6, 0x0
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    mr r3, r29
    srwi r0, r0, 5
    or r28, r28, r0
    bl EXISync
    cntlzw r0, r3
    mr r3, r29
    srwi r0, r0, 5
    or r28, r28, r0
    bl EXIDeselect
    cntlzw r0, r3
    srwi r0, r0, 5
    or r28, r28, r0
lbl_fn_805E9390_00001274:
    mr r3, r29
    bl EXIUnlock
lbl_fn_805E9390_0000127C:
    cmpwi r29, 0x2
    beq lbl_fn_805E9390_00001294
    cmpwi r30, 0x0
    bne lbl_fn_805E9390_00001294
    mr r3, r29
    bl fn_805E8560
lbl_fn_805E9390_00001294:
    cmpwi r28, 0x0
    beq lbl_fn_805E9390_000012A4
    li r3, 0x0
    b lbl_fn_805E9390_000012B8
lbl_fn_805E9390_000012A4:
    lwz r4, 0x0(r31)
    subfic r3, r4, -0x1
    addi r0, r4, 0x1
    or r0, r3, r0
    srwi r3, r0, 31
lbl_fn_805E9390_000012B8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void __OSEnableBarnacle(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r5, r1, 0x8
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    bl EXIGetID
    cmpwi r3, 0x0
    beq lbl___OSEnableBarnacle_00001484
    lwz r4, 0x8(r1)
    lis r0, 0x102
    cmpw r4, r0
    beq lbl___OSEnableBarnacle_00001484
    bge lbl___OSEnableBarnacle_000013B0
    cmpwi r4, 0x4
    beq lbl___OSEnableBarnacle_00001484
    bge lbl___OSEnableBarnacle_0000137C
    lis r3, 0x8000
    addi r0, r3, 0x10
    cmpw r4, r0
    beq lbl___OSEnableBarnacle_00001484
    bge lbl___OSEnableBarnacle_00001360
    addi r0, r3, 0x8
    cmpw r4, r0
    beq lbl___OSEnableBarnacle_00001484
    bge lbl___OSEnableBarnacle_00001454
    addi r0, r3, 0x4
    cmpw r4, r0
    beq lbl___OSEnableBarnacle_00001484
    b lbl___OSEnableBarnacle_00001454
lbl___OSEnableBarnacle_00001360:
    cmpwi r4, -0x1
    beq lbl___OSEnableBarnacle_00001484
    bge lbl___OSEnableBarnacle_00001454
    addi r0, r3, 0x20
    cmpw r4, r0
    beq lbl___OSEnableBarnacle_00001484
    b lbl___OSEnableBarnacle_00001454
lbl___OSEnableBarnacle_0000137C:
    cmpwi r4, 0x20
    beq lbl___OSEnableBarnacle_00001484
    bge lbl___OSEnableBarnacle_000013A0
    cmpwi r4, 0x10
    beq lbl___OSEnableBarnacle_00001484
    bge lbl___OSEnableBarnacle_00001454
    cmpwi r4, 0x8
    beq lbl___OSEnableBarnacle_00001484
    b lbl___OSEnableBarnacle_00001454
lbl___OSEnableBarnacle_000013A0:
    lis r0, 0x101
    cmpw r4, r0
    beq lbl___OSEnableBarnacle_00001484
    b lbl___OSEnableBarnacle_00001454
lbl___OSEnableBarnacle_000013B0:
    lis r3, 0x404
    addi r0, r3, 0x404
    cmpw r4, r0
    beq lbl___OSEnableBarnacle_00001484
    bge lbl___OSEnableBarnacle_00001418
    lis r3, 0x402
    addi r0, r3, 0x100
    cmpw r4, r0
    beq lbl___OSEnableBarnacle_00001484
    bge lbl___OSEnableBarnacle_000013F8
    lis r0, 0x301
    cmpw r4, r0
    beq lbl___OSEnableBarnacle_00001484
    bge lbl___OSEnableBarnacle_00001454
    lis r0, 0x202
    cmpw r4, r0
    beq lbl___OSEnableBarnacle_00001484
    b lbl___OSEnableBarnacle_00001454
lbl___OSEnableBarnacle_000013F8:
    addi r0, r3, 0x300
    cmpw r4, r0
    beq lbl___OSEnableBarnacle_00001484
    bge lbl___OSEnableBarnacle_00001454
    addi r0, r3, 0x200
    cmpw r4, r0
    beq lbl___OSEnableBarnacle_00001484
    b lbl___OSEnableBarnacle_00001454
lbl___OSEnableBarnacle_00001418:
    lis r0, 0x413
    cmpw r4, r0
    beq lbl___OSEnableBarnacle_00001484
    bge lbl___OSEnableBarnacle_00001448
    lis r0, 0x412
    cmpw r4, r0
    beq lbl___OSEnableBarnacle_00001484
    bge lbl___OSEnableBarnacle_00001454
    lis r0, 0x406
    cmpw r4, r0
    beq lbl___OSEnableBarnacle_00001484
    b lbl___OSEnableBarnacle_00001454
lbl___OSEnableBarnacle_00001448:
    lis r0, 0x422
    cmpw r4, r0
    beq lbl___OSEnableBarnacle_00001484
lbl___OSEnableBarnacle_00001454:
    mr r3, r30
    mr r4, r31
    addi r5, r1, 0x8
    bl fn_805E9390
    cmpwi r3, 0x0
    beq lbl___OSEnableBarnacle_00001484
    lis r3, 0xa5ff
    stw r30, lbl_8087FB7C
    addi r0, r3, 0x5a
    stw r31, lbl_8087FB78
    stw r0, lbl_8087FB74
    stw r0, lbl_8087FB70
lbl___OSEnableBarnacle_00001484:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805E96D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r7, 0x1
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r5, 0x8(r1)
    beq lbl_fn_805E96D0_000014D8
    cmpwi r7, 0x2
    beq lbl_fn_805E96D0_000014E8
    b lbl_fn_805E96D0_000014FC
lbl_fn_805E96D0_000014D8:
    lbz r0, 0x0(r6)
    slwi r0, r0, 24
    stw r0, 0xc(r1)
    b lbl_fn_805E96D0_00001518
lbl_fn_805E96D0_000014E8:
    lhz r3, 0x0(r6)
    rlwinm r0, r3, 8, 8, 15
    rlwimi r0, r3, 24, 0, 7
    stw r0, 0xc(r1)
    b lbl_fn_805E96D0_00001518
lbl_fn_805E96D0_000014FC:
    lwz r4, 0x0(r6)
    rlwinm r3, r4, 8, 8, 15
    rlwinm r0, r4, 24, 16, 23
    rlwimi r3, r4, 24, 0, 7
    rlwimi r0, r4, 8, 24, 31
    or r0, r3, r0
    stw r0, 0xc(r1)
lbl_fn_805E96D0_00001518:
    mr r3, r31
    mr r4, r29
    li r5, 0x0
    bl EXILock
    cntlzw r0, r3
    srwi. r30, r0, 5
    beq lbl_fn_805E96D0_0000153C
    li r3, 0x0
    b lbl_fn_805E96D0_0000160C
lbl_fn_805E96D0_0000153C:
    mr r3, r31
    mr r4, r29
    li r5, 0x4
    bl EXISelect
    cntlzw r0, r3
    srwi r0, r0, 5
    or. r30, r30, r0
    beq lbl_fn_805E96D0_0000156C
    mr r3, r31
    bl EXIUnlock
    li r3, 0x0
    b lbl_fn_805E96D0_0000160C
lbl_fn_805E96D0_0000156C:
    mr r3, r31
    addi r4, r1, 0x8
    li r5, 0x4
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    mr r3, r31
    srwi r0, r0, 5
    or r30, r30, r0
    bl EXISync
    cntlzw r0, r3
    mr r3, r31
    srwi r0, r0, 5
    addi r4, r1, 0xc
    or r30, r30, r0
    li r5, 0x4
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    mr r3, r31
    srwi r0, r0, 5
    or r30, r30, r0
    bl EXISync
    cntlzw r0, r3
    mr r3, r31
    srwi r0, r0, 5
    or r30, r30, r0
    bl EXIDeselect
    cntlzw r0, r3
    mr r3, r31
    srwi r0, r0, 5
    or r30, r30, r0
    bl EXIUnlock
    cntlzw r0, r3
    srwi r0, r0, 5
    or r30, r30, r0
    cntlzw r0, r30
    srwi r3, r0, 5
lbl_fn_805E96D0_0000160C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805E9860(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, Si_8079BDA0@ha
    stw r29, 0x14(r1)
    lis r29, 0xcd00
    lwz r31, 0x6438(r29)
    lwz r0, 0x6434(r29)
    oris r0, r0, 0x8000
    clrrwi r0, r0, 1
    stw r0, 0x6434(r29)
    lwz r0, Si_8079BDA0@l(r30)
    cmpwi r0, -0x1
    beq lbl_fn_805E9860_00001904
    bl __OSGetSystemTime
    lwz r7, Si_8079BDA0@l(r30)
    lis r6, lbl_807CB090@ha
    addi r5, r30, Si_8079BDA0@l
    slwi r7, r7, 3
    addi r6, r6, lbl_807CB090@l
    lwz r0, 0x8(r5)
    add r6, r6, r7
    stw r4, 0x4(r6)
    li r7, 0x0
    srwi. r8, r0, 2
    lwz r5, 0xc(r5)
    stw r3, 0x0(r6)
    beq lbl_fn_805E9860_00001754
    cmplwi r8, 0x8
    subi r3, r8, 0x8
    ble lbl_fn_805E9860_0000171C
    addi r0, r3, 0x7
    addi r4, r29, 0x6400
    srwi r0, r0, 3
    mtctr r0
    cmplwi r3, 0x0
    ble lbl_fn_805E9860_0000171C
lbl_fn_805E9860_000016CC:
    lwz r0, 0x80(r4)
    addi r7, r7, 0x8
    stw r0, 0x0(r5)
    lwz r0, 0x84(r4)
    stw r0, 0x4(r5)
    lwz r0, 0x88(r4)
    stw r0, 0x8(r5)
    lwz r0, 0x8c(r4)
    stw r0, 0xc(r5)
    lwz r0, 0x90(r4)
    stw r0, 0x10(r5)
    lwz r0, 0x94(r4)
    stw r0, 0x14(r5)
    lwz r0, 0x98(r4)
    stw r0, 0x18(r5)
    lwz r0, 0x9c(r4)
    addi r4, r4, 0x20
    stw r0, 0x1c(r5)
    addi r5, r5, 0x20
    bdnz lbl_fn_805E9860_000016CC
lbl_fn_805E9860_0000171C:
    slwi r3, r7, 2
    lis r0, 0xcd00
    add r3, r0, r3
    subf r0, r7, r8
    addi r3, r3, 0x6400
    mtctr r0
    cmplw r7, r8
    bge lbl_fn_805E9860_00001754
lbl_fn_805E9860_0000173C:
    lwz r0, 0x80(r3)
    addi r7, r7, 0x1
    stw r0, 0x0(r5)
    addi r5, r5, 0x4
    addi r3, r3, 0x4
    bdnz lbl_fn_805E9860_0000173C
lbl_fn_805E9860_00001754:
    lis r3, Si_8079BDA0@ha
    addi r3, r3, Si_8079BDA0@l
    lwz r0, 0x8(r3)
    clrlwi. r3, r0, 30
    beq lbl_fn_805E9860_00001870
    slwi r0, r7, 2
    lis r4, 0xcd00
    add r6, r4, r0
    lwz r0, 0x6480(r6)
    li r4, 0x0
    beq lbl_fn_805E9860_00001870
    cmplwi r3, 0x8
    subi r7, r3, 0x8
    ble lbl_fn_805E9860_00001844
    addi r6, r7, 0x7
    srwi r6, r6, 3
    mtctr r6
    cmplwi r7, 0x0
    ble lbl_fn_805E9860_00001844
lbl_fn_805E9860_000017A0:
    subfic r6, r4, 0x3
    addi r7, r4, 0x1
    slwi r8, r6, 3
    srw r9, r0, r8
    subfic r7, r7, 0x3
    slwi r8, r7, 3
    stb r9, 0x0(r5)
    addi r7, r4, 0x2
    neg r6, r4
    srw r9, r0, r8
    stb r9, 0x1(r5)
    slwi r8, r6, 3
    subfic r7, r7, 0x3
    slwi r6, r7, 3
    srw r9, r0, r6
    stb r9, 0x2(r5)
    addi r6, r4, 0x4
    srw r8, r0, r8
    subfic r7, r6, 0x3
    stb r8, 0x3(r5)
    addi r6, r4, 0x5
    slwi r7, r7, 3
    srw r9, r0, r7
    subfic r6, r6, 0x3
    slwi r8, r6, 3
    stb r9, 0x4(r5)
    addi r6, r4, 0x6
    subfic r7, r6, 0x3
    srw r8, r0, r8
    addi r6, r4, 0x7
    stb r8, 0x5(r5)
    slwi r7, r7, 3
    addi r4, r4, 0x8
    subfic r6, r6, 0x3
    srw r7, r0, r7
    stb r7, 0x6(r5)
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x7(r5)
    addi r5, r5, 0x8
    bdnz lbl_fn_805E9860_000017A0
lbl_fn_805E9860_00001844:
    subf r6, r4, r3
    mtctr r6
    cmplw r4, r3
    bge lbl_fn_805E9860_00001870
lbl_fn_805E9860_00001854:
    subfic r3, r4, 0x3
    addi r4, r4, 0x1
    slwi r3, r3, 3
    srw r3, r0, r3
    stb r3, 0x0(r5)
    addi r5, r5, 0x1
    bdnz lbl_fn_805E9860_00001854
lbl_fn_805E9860_00001870:
    lis r3, 0xcd00
    lwz r0, 0x6434(r3)
    rlwinm. r0, r0, 0, 2, 2
    beq lbl_fn_805E9860_000018D0
    lis r3, Si_8079BDA0@ha
    lwz r4, Si_8079BDA0@l(r3)
    subfic r0, r4, 0x3
    slwi r0, r0, 3
    srw r31, r31, r0
    clrlwi r31, r31, 28
    rlwinm. r0, r31, 0, 28, 28
    beq lbl_fn_805E9860_000018C0
    lis r3, Type_8079BDB8@ha
    slwi r4, r4, 2
    addi r3, r3, Type_8079BDB8@l
    lwzx r0, r3, r4
    rlwinm. r0, r0, 0, 24, 24
    bne lbl_fn_805E9860_000018C0
    li r0, 0x8
    stwx r0, r3, r4
lbl_fn_805E9860_000018C0:
    cmpwi r31, 0x0
    bne lbl_fn_805E9860_000018F8
    li r31, 0x4
    b lbl_fn_805E9860_000018F8
lbl_fn_805E9860_000018D0:
    bl __OSGetSystemTime
    lis r6, Si_8079BDA0@ha
    lis r5, TypeTime_807CB0B0@ha
    lwz r0, Si_8079BDA0@l(r6)
    addi r5, r5, TypeTime_807CB0B0@l
    li r31, 0x0
    slwi r0, r0, 3
    add r5, r5, r0
    stw r4, 0x4(r5)
    stw r3, 0x0(r5)
lbl_fn_805E9860_000018F8:
    lis r3, Si_8079BDA0@ha
    li r0, -0x1
    stw r0, Si_8079BDA0@l(r3)
lbl_fn_805E9860_00001904:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void SIInterruptHandler_805E9B60(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_17
    lis r5, 0xcd00
    lis r27, Packet_807CB010@ha
    lwz r21, 0x6434(r5)
    mr r30, r3
    mr r31, r4
    addi r27, r27, Packet_807CB010@l
    clrrwi r3, r21, 30
    addis r0, r3, 0x4000
    cmplwi r0, 0x0
    bne lbl_SIInterruptHandler_805E9B60_00001B0C
    lis r17, Si_8079BDA0@ha
    lwz r22, Si_8079BDA0@l(r17)
    bl fn_805E9860
    addi r4, r17, Si_8079BDA0@l
    li r0, 0x0
    lwz r24, 0x10(r4)
    mr r23, r3
    mr r28, r22
    addi r17, r27, 0x0
    stw r0, 0x10(r4)
    li r26, 0x0
lbl_SIInterruptHandler_805E9B60_00001998:
    addi r28, r28, 0x1
    slwi r0, r28, 30
    srwi r3, r28, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r28, r0, r3
    slwi r0, r28, 5
    add r29, r17, r0
    lwzx r0, r17, r0
    cmpwi r0, -0x1
    beq lbl_SIInterruptHandler_805E9B60_00001A2C
    bl __OSGetSystemTime
    lwz r5, 0x18(r29)
    xoris r0, r3, 0x8000
    lwz r3, 0x1c(r29)
    xoris r5, r5, 0x8000
    subfc r3, r3, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_SIInterruptHandler_805E9B60_00001A2C
    lwz r3, 0x0(r29)
    lwz r4, 0x4(r29)
    lwz r5, 0x8(r29)
    lwz r6, 0xc(r29)
    lwz r7, 0x10(r29)
    lwz r8, 0x14(r29)
    bl fn_805EA010
    cmpwi r3, 0x0
    beq lbl_SIInterruptHandler_805E9B60_00001A38
    mulli r3, r28, 0x30
    addi r0, r27, 0xc0
    add r3, r0, r3
    bl OSCancelAlarm
    li r0, -0x1
    stw r0, 0x0(r29)
    b lbl_SIInterruptHandler_805E9B60_00001A38
lbl_SIInterruptHandler_805E9B60_00001A2C:
    addi r26, r26, 0x1
    cmpwi r26, 0x4
    blt lbl_SIInterruptHandler_805E9B60_00001998
lbl_SIInterruptHandler_805E9B60_00001A38:
    cmpwi r24, 0x0
    beq lbl_SIInterruptHandler_805E9B60_00001A58
    mr r12, r24
    mr r3, r22
    mr r4, r23
    mr r5, r31
    mtctr r12
    bctrl
lbl_SIInterruptHandler_805E9B60_00001A58:
    lis r5, 0xcd00
    lis r3, Type_8079BDB8@ha
    slwi r0, r22, 3
    lis r4, 0xf00
    sraw r4, r4, r0
    lwz r6, 0x6438(r5)
    slwi r0, r22, 2
    addi r3, r3, Type_8079BDB8@l
    and r6, r6, r4
    stw r6, 0x6438(r5)
    add r6, r3, r0
    lwzx r0, r3, r0
    cmplwi r0, 0x80
    bne lbl_SIInterruptHandler_805E9B60_00001B0C
    slwi r0, r22, 5
    addi r3, r27, 0x0
    lwzx r0, r3, r0
    li r4, 0x0
    cmpwi r0, -0x1
    bne lbl_SIInterruptHandler_805E9B60_00001AB8
    lis r3, Si_8079BDA0@ha
    lwz r0, Si_8079BDA0@l(r3)
    cmpw r0, r22
    bne lbl_SIInterruptHandler_805E9B60_00001ABC
lbl_SIInterruptHandler_805E9B60_00001AB8:
    li r4, 0x1
lbl_SIInterruptHandler_805E9B60_00001ABC:
    cmpwi r4, 0x0
    bne lbl_SIInterruptHandler_805E9B60_00001B0C
    lis r4, 0x8000
    lis r8, GetTypeCallback_805EA420@ha
    lwz r0, 0xf8(r4)
    lis r3, 0x431c
    subi r4, r3, 0x217d
    addi r8, r8, GetTypeCallback_805EA420@l
    srwi r0, r0, 2
    mr r3, r22
    mulhwu r0, r4, r0
    la r4, lbl_8087FB80
    li r5, 0x1
    li r7, 0x3
    li r9, 0x0
    srwi r10, r0, 15
    rlwinm r0, r0, 23, 9, 25
    add r0, r0, r10
    srwi r10, r0, 3
    bl SITransfer
lbl_SIInterruptHandler_805E9B60_00001B0C:
    rlwinm r3, r21, 0, 3, 4
    subis r0, r3, 0x1800
    cmplwi r0, 0x0
    bne lbl_SIInterruptHandler_805E9B60_00001D04
    bl fn_806051D0
    lis r4, Si_8079BDA0@ha
    lis r25, Type_8079BDB8@ha
    addi r4, r4, Si_8079BDA0@l
    lis r28, 0xcd00
    lwz r0, 0x4(r4)
    addi r19, r3, 0x1
    addi r25, r25, Type_8079BDB8@l
    addi r24, r28, 0x6400
    extrwi r18, r0, 10, 6
    addi r23, r27, 0x180
    addi r22, r27, 0x1a0
    addi r21, r27, 0x1b0
    li r20, 0x0
    li r29, 0x8
    li r17, 0x1
lbl_SIInterruptHandler_805E9B60_00001B5C:
    bl OSDisableInterrupts
    subfic r0, r20, 0x3
    lwz r26, 0x6438(r28)
    slwi r0, r0, 3
    srw r26, r26, r0
    rlwinm. r0, r26, 0, 28, 28
    beq lbl_SIInterruptHandler_805E9B60_00001B88
    lwz r0, 0x0(r25)
    rlwinm. r0, r0, 0, 24, 24
    bne lbl_SIInterruptHandler_805E9B60_00001B88
    stw r29, 0x0(r25)
lbl_SIInterruptHandler_805E9B60_00001B88:
    bl OSRestoreInterrupts
    rlwinm. r0, r26, 0, 26, 26
    beq lbl_SIInterruptHandler_805E9B60_00001BB0
    lwz r0, 0x4(r24)
    li r3, 0x1
    stw r0, 0x0(r23)
    lwz r0, 0x8(r24)
    stw r0, 0x4(r23)
    stw r17, 0x0(r22)
    b lbl_SIInterruptHandler_805E9B60_00001BB4
lbl_SIInterruptHandler_805E9B60_00001BB0:
    li r3, 0x0
lbl_SIInterruptHandler_805E9B60_00001BB4:
    cmpwi r3, 0x0
    beq lbl_SIInterruptHandler_805E9B60_00001BC0
    stw r19, 0x0(r21)
lbl_SIInterruptHandler_805E9B60_00001BC0:
    addi r20, r20, 0x1
    addi r24, r24, 0xc
    cmpwi r20, 0x4
    addi r23, r23, 0x8
    addi r22, r22, 0x4
    addi r21, r21, 0x4
    addi r25, r25, 0x4
    blt lbl_SIInterruptHandler_805E9B60_00001B5C
    lis r4, Si_8079BDA0@ha
    lis r3, 0x8000
    addi r4, r4, Si_8079BDA0@l
    li r0, 0x18
    lwz r5, 0x4(r4)
    srw r0, r3, r0
    addi r4, r27, 0x1b0
    srwi r6, r18, 1
    and. r0, r5, r0
    beq lbl_SIInterruptHandler_805E9B60_00001C28
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_SIInterruptHandler_805E9B60_00001D04
    lwz r0, 0x0(r4)
    add r0, r6, r0
    cmplw r0, r19
    bge lbl_SIInterruptHandler_805E9B60_00001C28
    b lbl_SIInterruptHandler_805E9B60_00001D04
lbl_SIInterruptHandler_805E9B60_00001C28:
    li r0, 0x19
    srw r0, r3, r0
    and. r0, r5, r0
    beq lbl_SIInterruptHandler_805E9B60_00001C58
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_SIInterruptHandler_805E9B60_00001D04
    lwz r0, 0x4(r4)
    add r0, r6, r0
    cmplw r0, r19
    bge lbl_SIInterruptHandler_805E9B60_00001C58
    b lbl_SIInterruptHandler_805E9B60_00001D04
lbl_SIInterruptHandler_805E9B60_00001C58:
    li r0, 0x1a
    srw r0, r3, r0
    and. r0, r5, r0
    beq lbl_SIInterruptHandler_805E9B60_00001C88
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_SIInterruptHandler_805E9B60_00001D04
    lwz r0, 0x8(r4)
    add r0, r6, r0
    cmplw r0, r19
    bge lbl_SIInterruptHandler_805E9B60_00001C88
    b lbl_SIInterruptHandler_805E9B60_00001D04
lbl_SIInterruptHandler_805E9B60_00001C88:
    li r0, 0x1b
    srw r0, r3, r0
    and. r0, r5, r0
    beq lbl_SIInterruptHandler_805E9B60_00001CB8
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    beq lbl_SIInterruptHandler_805E9B60_00001D04
    lwz r0, 0xc(r4)
    add r0, r6, r0
    cmplw r0, r19
    bge lbl_SIInterruptHandler_805E9B60_00001CB8
    b lbl_SIInterruptHandler_805E9B60_00001D04
lbl_SIInterruptHandler_805E9B60_00001CB8:
    addi r3, r27, 0x1b0
    li r0, 0x0
    stw r0, 0x0(r3)
    addi r17, r27, 0x1c0
    li r18, 0x0
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
lbl_SIInterruptHandler_805E9B60_00001CD8:
    lwz r12, 0x0(r17)
    cmpwi r12, 0x0
    beq lbl_SIInterruptHandler_805E9B60_00001CF4
    mr r3, r30
    mr r4, r31
    mtctr r12
    bctrl
lbl_SIInterruptHandler_805E9B60_00001CF4:
    addi r18, r18, 0x1
    addi r17, r17, 0x4
    cmpwi r18, 0x4
    blt lbl_SIInterruptHandler_805E9B60_00001CD8
lbl_SIInterruptHandler_805E9B60_00001D04:
    addi r11, r1, 0x50
    bl _restgpr_17
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
