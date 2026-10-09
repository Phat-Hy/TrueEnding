#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);
extern void __register_global_object(void);
extern void __va_arg(void);
extern void _restgpr_17(void);
extern void _restgpr_22(void);
extern void _restgpr_26(void);
extern void _savegpr_17(void);
extern void _savegpr_22(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80608020(void);
extern void fn_806080A0(void);
extern void fn_8060AE60(void);
extern void fn_806104E0(void);
extern void fn_806104F0(void);
extern void fn_80619CB0(void);
extern void fn_80619D40(void);
extern void fn_80619D70(void);
extern void fn_80619E90(void);
extern void fn_80705340(void);
extern void fn_80705390(void);
extern void fn_80705CD0(void);
extern void fn_8070C010(void);
extern void fn_8070C440(void);
extern void fn_8070CD20(void);
extern void fn_8070CD40(void);
extern void fn_8070CD60(void);
extern void fn_8070CE00(void);
extern void fn_8070CE10(void);
extern void fn_80721120(void);
extern void fn_80721150(void);
extern void fn_807211D0(void);
extern void fn_80721260(void);
extern void fn_80721280(void);
extern void fn_80721290(void);
extern void fn_80722F50(void);
extern void fn_80725170(void);
extern void fn_80725200(void);
extern void fn_807252A0(void);
extern void fn_807252D0(void);

/* External data declarations */
extern u8 lbl_80862F30[];
extern u8 lbl_80862F3C[];

/* Small data declarations */
extern u32 lbl_808804A0;
extern u32 lbl_808804A8;
extern u32 lbl_808804AC;
extern u32 lbl_80889048;
extern u32 lbl_8088904C;
extern u32 lbl_80889050;
extern u32 lbl_80889058;
extern u32 lbl_80889060;
extern u32 lbl_80889068;
extern u32 lbl_80889070;
extern u32 lbl_80889074;

/* Function declarations */
void fn_807076C0(void);
void fn_80707800(void);
void fn_807079B0(void);
void fn_807079E0(void);
void fn_80707C60(void);
void fn_80707D40(void);
void fn_80707F30(void);
void fn_807080C0(void);
void fn_80708150(void);
void fn_807081E0(void);
void fn_807081F0(void);
void fn_807082B0(void);
void fn_80708550(void);
void fn_80708810(void);
void fn_807088E0(void);
void fn_80708980(void);
void fn_80708AF0(void);
void fn_80708B60(void);
void fn_80708BB0(void);
void fn_80708C10(void);
void fn_80708C50(void);
void fn_80708CB0(void);
void fn_80708CF0(void);
void fn_80708D30(void);
void fn_80708D70(void);
void fn_80708F70(void);
void fn_80709000(void);
void fn_80709110(void);
void fn_807092B0(void);
void fn_807093D0(void);
void fn_80709630(void);

asm void fn_807076C0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_26
    mr r31, r8
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r26, r7
    mr r4, r31
    addi r3, r1, 0x8
    li r5, 0x20
    bl memcpy
    lhz r5, 0x20(r31)
    cmpwi r26, 0x0
    lhz r4, 0x22(r31)
    mr r6, r26
    lhz r3, 0x24(r31)
    lhz r0, 0x26(r31)
    sth r5, 0x28(r1)
    sth r4, 0x2a(r1)
    sth r3, 0x2c(r1)
    sth r0, 0x2e(r1)
    beq lbl_fn_807076C0_0000006C
    addis r6, r26, 0x8000
lbl_fn_807076C0_0000006C:
    cmpwi r26, 0x0
    slwi r3, r6, 1
    addi r31, r3, 0x2
    beq lbl_fn_807076C0_00000080
    addis r26, r26, 0x8000
lbl_fn_807076C0_00000080:
    lis r3, 0x2492
    slwi r0, r26, 1
    addi r3, r3, 0x4925
    mulhwu r4, r3, r30
    subf r3, r4, r30
    srwi r3, r3, 1
    add r4, r3, r4
    srwi r3, r4, 3
    mulli r5, r3, 0xe
    extlwi r3, r4, 28, 1
    subf r4, r5, r30
    add r0, r4, r0
    add r30, r0, r3
    addi r30, r30, 0x2
    b lbl_fn_807076C0_00000104
lbl_fn_807076C0_000000BC:
    clrlwi. r0, r31, 28
    bne lbl_fn_807076C0_000000D8
    srwi r3, r31, 1
    addi r31, r31, 0x2
    addis r3, r3, 0x8000
    lbz r0, 0x0(r3)
    sth r0, 0x2a(r1)
lbl_fn_807076C0_000000D8:
    srwi r3, r31, 1
    clrlwi. r0, r31, 31
    addis r4, r3, 0x8000
    lbz r4, 0x0(r4)
    addi r3, r1, 0x8
    srawi r0, r4, 4
    beq lbl_fn_807076C0_000000F8
    clrlwi r0, r4, 28
lbl_fn_807076C0_000000F8:
    clrlwi r4, r0, 24
    bl fn_80722F50
    addi r31, r31, 0x1
lbl_fn_807076C0_00000104:
    cmplw r31, r30
    blt lbl_fn_807076C0_000000BC
    lhz r0, 0x2a(r1)
    addi r11, r1, 0x50
    sth r0, 0x0(r27)
    lhz r0, 0x2c(r1)
    sth r0, 0x0(r28)
    lhz r0, 0x2e(r1)
    sth r0, 0x0(r29)
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80707800(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lwz r5, 0x0(r31)
    cmpwi r5, 0x0
    bne lbl_fn_80707800_0000016C
    bl OSRestoreInterrupts
    b lbl_fn_80707800_000002D8
lbl_fn_80707800_0000016C:
    lhz r0, 0x8(r31)
    lis r4, 0x2aab
    sth r0, 0x92(r5)
    subi r4, r4, 0x5555
    li r6, -0x1
    lhz r7, 0xe(r31)
    lhz r0, 0x8(r31)
    subf r0, r0, r7
    mulhw r0, r4, r0
    srawi r0, r0, 4
    srwi r4, r0, 31
    add r0, r0, r4
    extsh r8, r0
    neg r0, r8
    andc r0, r0, r8
    srwi r0, r0, 31
    add. r0, r8, r0
    beq lbl_fn_80707800_000001B8
    li r6, 0x1
lbl_fn_80707800_000001B8:
    mulli r0, r6, 0x60
    lhz r5, 0x8(r31)
    lhz r4, 0x8(r31)
    add r0, r4, r0
    subf. r4, r0, r7
    mulli r0, r8, 0x60
    add r0, r5, r0
    bge lbl_fn_80707800_000001DC
    neg r4, r4
lbl_fn_80707800_000001DC:
    subf. r0, r0, r7
    bge lbl_fn_80707800_000001E8
    neg r0, r0
lbl_fn_80707800_000001E8:
    cmpw r0, r4
    bge lbl_fn_80707800_000001FC
    lwz r4, 0x0(r31)
    sth r8, 0x94(r4)
    b lbl_fn_80707800_00000204
lbl_fn_80707800_000001FC:
    lwz r4, 0x0(r31)
    sth r6, 0x94(r4)
lbl_fn_80707800_00000204:
    lwz r6, 0x0(r31)
    lhz r4, 0x8(r31)
    lha r0, 0x94(r6)
    mulli r0, r0, 0x60
    add. r0, r4, r0
    bge lbl_fn_80707800_00000244
    lhz r0, 0x8(r31)
    lis r4, 0x2aab
    subi r4, r4, 0x5555
    neg r0, r0
    mulhw r0, r4, r0
    srawi r0, r0, 4
    srwi r4, r0, 31
    add r0, r0, r4
    sth r0, 0x94(r6)
    b lbl_fn_80707800_00000278
lbl_fn_80707800_00000244:
    lis r4, 0x1
    subi r5, r4, 0x1
    cmpw r0, r5
    ble lbl_fn_80707800_00000278
    lhz r0, 0x8(r31)
    lis r4, 0x2aab
    subi r4, r4, 0x5555
    subf r0, r0, r5
    mulhw r0, r4, r0
    srawi r0, r0, 4
    srwi r4, r0, 31
    add r0, r0, r4
    sth r0, 0x94(r6)
lbl_fn_80707800_00000278:
    lwz r4, 0x0(r31)
    lha r0, 0x94(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80707800_0000029C
    lha r0, 0xa(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80707800_0000029C
    lhz r0, 0xe(r31)
    sth r0, 0x92(r4)
lbl_fn_80707800_0000029C:
    lwz r4, 0x4(r31)
    li r0, 0x0
    lwz r5, 0x0(r31)
    rlwinm r4, r4, 0, 23, 21
    ori r6, r4, 0x100
    stw r6, 0x4(r31)
    lhz r4, 0x92(r5)
    sth r4, 0x8(r31)
    lha r4, 0x94(r5)
    sth r4, 0xa(r31)
    lwz r4, 0x1c(r5)
    or r4, r4, r6
    stw r4, 0x1c(r5)
    stw r0, 0x4(r31)
    bl OSRestoreInterrupts
lbl_fn_80707800_000002D8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807079B0(void)
{
    nofralloc
    lis r5, 0x1
    li r6, 0x0
    addi r0, r5, -0x8000
    sth r0, 0x8(r3)
    li r5, 0x1
    stw r4, 0x0(r3)
    stw r6, 0x4(r3)
    stb r5, 0xc(r3)
    sth r0, 0xe(r3)
    sth r6, 0xa(r3)
    blr
}

asm void fn_807079E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bl OSDisableInterrupts
    lwz r6, 0x0(r30)
    cmpwi r6, 0x0
    bne lbl_fn_807079E0_0000035C
    bl OSRestoreInterrupts
    b lbl_fn_807079E0_0000057C
lbl_fn_807079E0_0000035C:
    lhz r4, 0x0(r29)
    addi r5, r6, 0x3e
    sth r4, 0x3c(r6)
    li r0, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_807079E0_00000378
    ori r0, r0, 0x1
lbl_fn_807079E0_00000378:
    lhz r6, 0x2(r29)
    addi r4, r29, 0x4
    sth r6, 0x0(r5)
    cmpwi r6, 0x0
    beq lbl_fn_807079E0_00000390
    ori r0, r0, 0x5
lbl_fn_807079E0_00000390:
    lhz r6, 0x0(r4)
    sth r6, 0x2(r5)
    cmpwi r6, 0x0
    beq lbl_fn_807079E0_000003A4
    ori r0, r0, 0x2
lbl_fn_807079E0_000003A4:
    lhz r6, 0x2(r4)
    sth r6, 0x4(r5)
    cmpwi r6, 0x0
    beq lbl_fn_807079E0_000003B8
    ori r0, r0, 0x6
lbl_fn_807079E0_000003B8:
    lhz r6, 0x4(r4)
    sth r6, 0x6(r5)
    cmpwi r6, 0x0
    beq lbl_fn_807079E0_000003CC
    oris r0, r0, 0x1
lbl_fn_807079E0_000003CC:
    lhz r6, 0x6(r4)
    sth r6, 0x8(r5)
    cmpwi r6, 0x0
    beq lbl_fn_807079E0_000003E0
    oris r0, r0, 0x5
lbl_fn_807079E0_000003E0:
    lhz r6, 0x8(r4)
    sth r6, 0xa(r5)
    cmpwi r6, 0x0
    beq lbl_fn_807079E0_000003F4
    oris r0, r0, 0x2
lbl_fn_807079E0_000003F4:
    lhz r6, 0xa(r4)
    sth r6, 0xc(r5)
    cmpwi r6, 0x0
    beq lbl_fn_807079E0_00000408
    oris r0, r0, 0x6
lbl_fn_807079E0_00000408:
    lhz r6, 0xc(r4)
    sth r6, 0xe(r5)
    cmpwi r6, 0x0
    beq lbl_fn_807079E0_0000041C
    oris r0, r0, 0x20
lbl_fn_807079E0_0000041C:
    lhz r6, 0xe(r4)
    sth r6, 0x10(r5)
    cmpwi r6, 0x0
    beq lbl_fn_807079E0_00000430
    oris r0, r0, 0xa0
lbl_fn_807079E0_00000430:
    lhz r6, 0x10(r4)
    sth r6, 0x12(r5)
    cmpwi r6, 0x0
    beq lbl_fn_807079E0_00000444
    oris r0, r0, 0x40
lbl_fn_807079E0_00000444:
    lhz r6, 0x12(r4)
    sth r6, 0x14(r5)
    cmpwi r6, 0x0
    beq lbl_fn_807079E0_00000458
    oris r0, r0, 0xc0
lbl_fn_807079E0_00000458:
    lhz r6, 0x14(r4)
    sth r6, 0x16(r5)
    cmpwi r6, 0x0
    beq lbl_fn_807079E0_0000046C
    oris r0, r0, 0x400
lbl_fn_807079E0_0000046C:
    lhz r6, 0x16(r4)
    sth r6, 0x18(r5)
    cmpwi r6, 0x0
    beq lbl_fn_807079E0_00000480
    oris r0, r0, 0x1400
lbl_fn_807079E0_00000480:
    lhz r6, 0x18(r4)
    sth r6, 0x1a(r5)
    cmpwi r6, 0x0
    beq lbl_fn_807079E0_00000494
    oris r0, r0, 0x800
lbl_fn_807079E0_00000494:
    lhz r6, 0x1a(r4)
    sth r6, 0x1c(r5)
    cmpwi r6, 0x0
    beq lbl_fn_807079E0_000004A8
    oris r0, r0, 0x1800
lbl_fn_807079E0_000004A8:
    lhz r6, 0x1c(r4)
    sth r6, 0x1e(r5)
    cmpwi r6, 0x0
    beq lbl_fn_807079E0_000004BC
    ori r0, r0, 0x8
lbl_fn_807079E0_000004BC:
    lhz r6, 0x1e(r4)
    sth r6, 0x20(r5)
    cmpwi r6, 0x0
    beq lbl_fn_807079E0_000004D0
    ori r0, r0, 0x18
lbl_fn_807079E0_000004D0:
    lhz r6, 0x20(r4)
    sth r6, 0x22(r5)
    cmpwi r6, 0x0
    beq lbl_fn_807079E0_000004E4
    oris r0, r0, 0x8
lbl_fn_807079E0_000004E4:
    lhz r6, 0x22(r4)
    sth r6, 0x24(r5)
    cmpwi r6, 0x0
    beq lbl_fn_807079E0_000004F8
    oris r0, r0, 0x18
lbl_fn_807079E0_000004F8:
    lhz r6, 0x24(r4)
    sth r6, 0x26(r5)
    cmpwi r6, 0x0
    beq lbl_fn_807079E0_0000050C
    oris r0, r0, 0x100
lbl_fn_807079E0_0000050C:
    lhz r6, 0x26(r4)
    sth r6, 0x28(r5)
    cmpwi r6, 0x0
    beq lbl_fn_807079E0_00000520
    oris r0, r0, 0x300
lbl_fn_807079E0_00000520:
    lhz r6, 0x28(r4)
    sth r6, 0x2a(r5)
    cmpwi r6, 0x0
    beq lbl_fn_807079E0_00000534
    oris r0, r0, 0x2000
lbl_fn_807079E0_00000534:
    lhz r4, 0x2a(r4)
    sth r4, 0x2c(r5)
    cmpwi r4, 0x0
    beq lbl_fn_807079E0_00000548
    oris r0, r0, 0x6000
lbl_fn_807079E0_00000548:
    lwz r4, 0x0(r30)
    cmpwi r31, 0x0
    stw r0, 0x34(r4)
    beq lbl_fn_807079E0_0000056C
    lwz r4, 0x0(r30)
    lwz r0, 0x1c(r4)
    ori r0, r0, 0x12
    stw r0, 0x1c(r4)
    b lbl_fn_807079E0_00000578
lbl_fn_807079E0_0000056C:
    lwz r0, 0x4(r30)
    ori r0, r0, 0x12
    stw r0, 0x4(r30)
lbl_fn_807079E0_00000578:
    bl OSRestoreInterrupts
lbl_fn_807079E0_0000057C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80707C60(void)
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
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    bne lbl_fn_80707C60_000005D4
    bl OSRestoreInterrupts
    b lbl_fn_80707C60_00000668
lbl_fn_80707C60_000005D4:
    cmpwi r31, 0x0
    beq lbl_fn_80707C60_00000600
    cmplwi r31, 0x1
    beq lbl_fn_80707C60_0000060C
    cmplwi r31, 0x2
    beq lbl_fn_80707C60_00000618
    cmplwi r31, 0x3
    beq lbl_fn_80707C60_0000062C
    cmplwi r31, 0x4
    beq lbl_fn_80707C60_00000644
    b lbl_fn_80707C60_00000658
lbl_fn_80707C60_00000600:
    li r0, 0x2
    sth r0, 0x30(r4)
    b lbl_fn_80707C60_00000658
lbl_fn_80707C60_0000060C:
    li r0, 0x1
    sth r0, 0x30(r4)
    b lbl_fn_80707C60_00000658
lbl_fn_80707C60_00000618:
    li r0, 0x0
    sth r0, 0x30(r4)
    lwz r4, 0x0(r30)
    sth r0, 0x32(r4)
    b lbl_fn_80707C60_00000658
lbl_fn_80707C60_0000062C:
    li r0, 0x0
    sth r0, 0x30(r4)
    li r0, 0x1
    lwz r4, 0x0(r30)
    sth r0, 0x32(r4)
    b lbl_fn_80707C60_00000658
lbl_fn_80707C60_00000644:
    li r0, 0x0
    sth r0, 0x30(r4)
    li r0, 0x2
    lwz r4, 0x0(r30)
    sth r0, 0x32(r4)
lbl_fn_80707C60_00000658:
    lwz r0, 0x4(r30)
    ori r0, r0, 0x1
    stw r0, 0x4(r30)
    bl OSRestoreInterrupts
lbl_fn_80707C60_00000668:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80707D40(void)
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
    lwz r5, 0x0(r31)
    cmpwi r5, 0x0
    bne lbl_fn_80707D40_000006B4
    bl OSRestoreInterrupts
    b lbl_fn_80707D40_00000854
lbl_fn_80707D40_000006B4:
    lhz r0, 0x0(r30)
    addi r4, r5, 0x104
    sth r0, 0x102(r5)
    li r6, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_80707D40_000006D0
    ori r6, r6, 0x1
lbl_fn_80707D40_000006D0:
    lhz r0, 0x2(r30)
    addi r5, r30, 0x4
    sth r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80707D40_000006EC
    ori r0, r6, 0x2
    clrlwi r6, r0, 16
lbl_fn_80707D40_000006EC:
    lhz r0, 0x0(r5)
    sth r0, 0x2(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80707D40_00000704
    ori r0, r6, 0x4
    clrlwi r6, r0, 16
lbl_fn_80707D40_00000704:
    lhz r0, 0x2(r5)
    sth r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80707D40_0000071C
    ori r0, r6, 0x8
    clrlwi r6, r0, 16
lbl_fn_80707D40_0000071C:
    lhz r0, 0x4(r5)
    sth r0, 0x6(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80707D40_00000734
    ori r0, r6, 0x10
    clrlwi r6, r0, 16
lbl_fn_80707D40_00000734:
    lhz r0, 0x6(r5)
    sth r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80707D40_0000074C
    ori r0, r6, 0x20
    clrlwi r6, r0, 16
lbl_fn_80707D40_0000074C:
    lhz r0, 0x8(r5)
    sth r0, 0xa(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80707D40_00000764
    ori r0, r6, 0x40
    clrlwi r6, r0, 16
lbl_fn_80707D40_00000764:
    lhz r0, 0xa(r5)
    sth r0, 0xc(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80707D40_0000077C
    ori r0, r6, 0x80
    clrlwi r6, r0, 16
lbl_fn_80707D40_0000077C:
    lhz r0, 0xc(r5)
    sth r0, 0xe(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80707D40_00000794
    ori r0, r6, 0x100
    clrlwi r6, r0, 16
lbl_fn_80707D40_00000794:
    lhz r0, 0xe(r5)
    sth r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80707D40_000007AC
    ori r0, r6, 0x200
    clrlwi r6, r0, 16
lbl_fn_80707D40_000007AC:
    lhz r0, 0x10(r5)
    sth r0, 0x12(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80707D40_000007C4
    ori r0, r6, 0x400
    clrlwi r6, r0, 16
lbl_fn_80707D40_000007C4:
    lhz r0, 0x12(r5)
    sth r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80707D40_000007DC
    ori r0, r6, 0x800
    clrlwi r6, r0, 16
lbl_fn_80707D40_000007DC:
    lhz r0, 0x14(r5)
    sth r0, 0x16(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80707D40_000007F4
    ori r0, r6, 0x1000
    clrlwi r6, r0, 16
lbl_fn_80707D40_000007F4:
    lhz r0, 0x16(r5)
    sth r0, 0x18(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80707D40_0000080C
    ori r0, r6, 0x2000
    clrlwi r6, r0, 16
lbl_fn_80707D40_0000080C:
    lhz r0, 0x18(r5)
    sth r0, 0x1a(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80707D40_00000824
    ori r0, r6, 0x4000
    clrlwi r6, r0, 16
lbl_fn_80707D40_00000824:
    lhz r0, 0x1a(r5)
    sth r0, 0x1c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80707D40_0000083C
    ori r0, r6, 0x8000
    clrlwi r6, r0, 16
lbl_fn_80707D40_0000083C:
    lwz r4, 0x0(r31)
    sth r6, 0x100(r4)
    lwz r0, 0x4(r31)
    oris r0, r0, 0x300
    stw r0, 0x4(r31)
    bl OSRestoreInterrupts
lbl_fn_80707D40_00000854:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80707F30(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_26
    mr r31, r3
    mr r26, r4
    bne cr1, lbl_fn_80707F30_000008B0
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_80707F30_000008B0:
    stw r3, 0x8(r1)
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    bl OSDisableInterrupts
    lwz r0, 0x0(r31)
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_fn_80707F30_000008EC
    bl OSRestoreInterrupts
    b lbl_fn_80707F30_000009DC
lbl_fn_80707F30_000008EC:
    cmplwi r26, 0x1
    bne lbl_fn_80707F30_000008FC
    li r27, 0x2
    b lbl_fn_80707F30_00000914
lbl_fn_80707F30_000008FC:
    cmplwi r26, 0x2
    bne lbl_fn_80707F30_0000090C
    li r27, 0x5
    b lbl_fn_80707F30_00000914
lbl_fn_80707F30_0000090C:
    bl OSRestoreInterrupts
    b lbl_fn_80707F30_000009DC
lbl_fn_80707F30_00000914:
    addi r3, r1, 0xa8
    addi r0, r1, 0x8
    lis r4, 0x200
    stw r4, 0x74(r1)
    addi r29, r1, 0x68
    li r28, 0x0
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    b lbl_fn_80707F30_00000954
lbl_fn_80707F30_00000938:
    addi r3, r1, 0x74
    li r4, 0x1
    bl __va_arg
    lwz r0, 0x0(r3)
    addi r28, r28, 0x1
    sth r0, 0x0(r29)
    addi r29, r29, 0x2
lbl_fn_80707F30_00000954:
    cmpw r28, r27
    blt lbl_fn_80707F30_00000938
    cmplwi r26, 0x1
    bne lbl_fn_80707F30_0000098C
    lwz r3, 0x0(r31)
    lhz r0, 0x68(r1)
    sth r0, 0x140(r3)
    lhz r0, 0x6a(r1)
    lwz r3, 0x0(r31)
    sth r0, 0x142(r3)
    lwz r0, 0x4(r31)
    oris r0, r0, 0x2000
    stw r0, 0x4(r31)
    b lbl_fn_80707F30_000009D4
lbl_fn_80707F30_0000098C:
    lwz r3, 0x0(r31)
    lhz r0, 0x68(r1)
    sth r0, 0x146(r3)
    lhz r0, 0x6a(r1)
    lwz r3, 0x0(r31)
    lhz r5, 0x6c(r1)
    sth r0, 0x148(r3)
    lhz r4, 0x6e(r1)
    lwz r3, 0x0(r31)
    lhz r0, 0x70(r1)
    sth r5, 0x14a(r3)
    lwz r3, 0x0(r31)
    sth r4, 0x14c(r3)
    lwz r3, 0x0(r31)
    sth r0, 0x14e(r3)
    lwz r0, 0x4(r31)
    oris r0, r0, 0x4000
    stw r0, 0x4(r31)
lbl_fn_80707F30_000009D4:
    mr r3, r30
    bl OSRestoreInterrupts
lbl_fn_80707F30_000009DC:
    addi r11, r1, 0xa0
    bl _restgpr_26
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_807080C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lbz r0, lbl_808804A0
    extsb. r0, r0
    bne lbl_fn_807080C0_00000A74
    lis r3, lbl_80862F3C@ha
    lis r4, fn_80708150@ha
    addi r3, r3, lbl_80862F3C@l
    li r0, 0x0
    addi r8, r3, 0x4
    lis r5, lbl_80862F30@ha
    addi r7, r3, 0x10
    addi r6, r3, 0x1c
    stw r0, 0x0(r3)
    addi r4, r4, fn_80708150@l
    addi r5, r5, lbl_80862F30@l
    stw r8, 0x4(r3)
    stw r8, 0x8(r3)
    stw r0, 0xc(r3)
    stw r7, 0x10(r3)
    stw r7, 0x14(r3)
    stw r0, 0x18(r3)
    stw r6, 0x1c(r3)
    stw r6, 0x20(r3)
    stb r0, 0x24(r3)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_808804A0
lbl_fn_807080C0_00000A74:
    lwz r0, 0x14(r1)
    lis r3, lbl_80862F3C@ha
    addi r3, r3, lbl_80862F3C@l
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80708150(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_80708150_00000AF8
    addic. r3, r3, 0x18
    beq lbl_fn_80708150_00000AC4
    li r4, 0x0
    bl fn_80725170
lbl_fn_80708150_00000AC4:
    addic. r3, r30, 0xc
    beq lbl_fn_80708150_00000AD4
    li r4, 0x0
    bl fn_80725170
lbl_fn_80708150_00000AD4:
    cmpwi r30, 0x0
    beq lbl_fn_80708150_00000AE8
    mr r3, r30
    li r4, 0x0
    bl fn_80725170
lbl_fn_80708150_00000AE8:
    cmpwi r31, 0x0
    ble lbl_fn_80708150_00000AF8
    mr r3, r30
    bl dtor_80084684
lbl_fn_80708150_00000AF8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807081E0(void)
{
    nofralloc
    addi r0, r4, 0x10
    mulli r3, r0, 0x48
    blr
}

asm void fn_807081F0(void)
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
    lbz r0, 0x24(r3)
    cmpwi r0, 0x0
    bne lbl_fn_807081F0_00000BCC
    lis r6, 0x38e4
    mr r30, r4
    subi r0, r6, 0x71c7
    li r29, 0x0
    mulhwu r0, r0, r5
    srwi. r0, r0, 4
    stw r0, 0x28(r3)
    beq lbl_fn_807081F0_00000BC4
    addi r31, r3, 0x10
    b lbl_fn_807081F0_00000BB8
lbl_fn_807081F0_00000B84:
    cmpwi r30, 0x0
    mr r5, r30
    beq lbl_fn_807081F0_00000B9C
    mr r3, r30
    bl fn_80705340
    mr r5, r3
lbl_fn_807081F0_00000B9C:
    stw r31, 0x8(r1)
    addi r3, r28, 0xc
    addi r4, r1, 0x8
    addi r5, r5, 0x40
    bl fn_807252A0
    addi r30, r30, 0x48
    addi r29, r29, 0x1
lbl_fn_807081F0_00000BB8:
    lwz r0, 0x28(r28)
    cmplw r29, r0
    blt lbl_fn_807081F0_00000B84
lbl_fn_807081F0_00000BC4:
    li r0, 0x1
    stb r0, 0x24(r28)
lbl_fn_807081F0_00000BCC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_807082B0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    lbz r0, 0x24(r3)
    cmpwi r0, 0x0
    bne lbl_fn_807082B0_00000D18
    b lbl_fn_807082B0_00000E64
    b lbl_fn_807082B0_00000D18
lbl_fn_807082B0_00000C24:
    lwz r5, 0x4(r31)
    mr r3, r31
    stw r5, 0x18(r1)
    addi r4, r1, 0x18
    subi r28, r5, 0x40
    bl fn_80725200
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_807082B0_00000D18
    li r4, 0x0
    beq lbl_fn_807082B0_00000C60
    lhz r0, 0x38(r3)
    cmplwi r0, 0x1
    bne lbl_fn_807082B0_00000C60
    li r4, 0x1
lbl_fn_807082B0_00000C60:
    cmpwi r4, 0x0
    beq lbl_fn_807082B0_00000C70
    li r4, 0x0
    bl fn_8060AE60
lbl_fn_807082B0_00000C70:
    lwz r12, 0x38(r28)
    cmpwi r12, 0x0
    beq lbl_fn_807082B0_00000C90
    mr r3, r28
    lwz r5, 0x3c(r28)
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_807082B0_00000C90:
    bl OSDisableInterrupts
    lwz r0, 0x0(r28)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_807082B0_00000CAC
    lwz r3, 0x0(r28)
    bl fn_80608020
lbl_fn_807082B0_00000CAC:
    mr r3, r28
    li r4, -0x1
    bl fn_80705390
    bl OSDisableInterrupts
    lbz r0, 0x1d(r28)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_807082B0_00000CE0
    addi r28, r28, 0x40
    addi r3, r31, 0x18
    mr r4, r28
    bl fn_807252D0
    b lbl_fn_807082B0_00000CF0
lbl_fn_807082B0_00000CE0:
    addi r28, r28, 0x40
    mr r3, r31
    mr r4, r28
    bl fn_807252D0
lbl_fn_807082B0_00000CF0:
    addi r0, r31, 0x10
    stw r0, 0x14(r1)
    mr r5, r28
    addi r3, r31, 0xc
    addi r4, r1, 0x14
    bl fn_807252A0
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r30
    bl OSRestoreInterrupts
lbl_fn_807082B0_00000D18:
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_807082B0_00000C24
    b lbl_fn_807082B0_00000E20
lbl_fn_807082B0_00000D28:
    lwz r5, 0x1c(r31)
    mr r3, r31
    lwz r0, 0x4(r31)
    addi r4, r1, 0x10
    stw r0, 0x10(r1)
    subi r28, r5, 0x40
    bl fn_80725200
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_807082B0_00000E20
    li r4, 0x0
    beq lbl_fn_807082B0_00000D68
    lhz r0, 0x38(r3)
    cmplwi r0, 0x1
    bne lbl_fn_807082B0_00000D68
    li r4, 0x1
lbl_fn_807082B0_00000D68:
    cmpwi r4, 0x0
    beq lbl_fn_807082B0_00000D78
    li r4, 0x0
    bl fn_8060AE60
lbl_fn_807082B0_00000D78:
    lwz r12, 0x38(r28)
    cmpwi r12, 0x0
    beq lbl_fn_807082B0_00000D98
    mr r3, r28
    lwz r5, 0x3c(r28)
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_807082B0_00000D98:
    bl OSDisableInterrupts
    lwz r0, 0x0(r28)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_807082B0_00000DB4
    lwz r3, 0x0(r28)
    bl fn_80608020
lbl_fn_807082B0_00000DB4:
    mr r3, r28
    li r4, -0x1
    bl fn_80705390
    bl OSDisableInterrupts
    lbz r0, 0x1d(r28)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_807082B0_00000DE8
    addi r28, r28, 0x40
    addi r3, r31, 0x18
    mr r4, r28
    bl fn_807252D0
    b lbl_fn_807082B0_00000DF8
lbl_fn_807082B0_00000DE8:
    addi r28, r28, 0x40
    mr r3, r31
    mr r4, r28
    bl fn_807252D0
lbl_fn_807082B0_00000DF8:
    addi r0, r31, 0x10
    stw r0, 0xc(r1)
    mr r5, r28
    addi r3, r31, 0xc
    addi r4, r1, 0xc
    bl fn_807252A0
    mr r3, r30
    bl OSRestoreInterrupts
    mr r3, r29
    bl OSRestoreInterrupts
lbl_fn_807082B0_00000E20:
    lwz r0, 0x18(r31)
    cmpwi r0, 0x0
    bne lbl_fn_807082B0_00000D28
    b lbl_fn_807082B0_00000E50
lbl_fn_807082B0_00000E30:
    lwz r28, 0x10(r31)
    addi r3, r31, 0xc
    stw r28, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_80725200
    subi r3, r28, 0x40
    li r4, -0x1
    bl fn_80705390
lbl_fn_807082B0_00000E50:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_807082B0_00000E30
    li r0, 0x0
    stb r0, 0x24(r31)
lbl_fn_807082B0_00000E64:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80708550(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_17
    mr r22, r3
    mr r23, r4
    mr r24, r5
    mr r25, r6
    bl OSDisableInterrupts
    mr r21, r3
    bl OSDisableInterrupts
    lwz r0, 0x18(r22)
    mr r20, r3
    cmpwi r0, 0x0
    beq lbl_fn_80708550_00000FFC
    lis r27, lbl_80862F3C@ha
    li r28, 0x0
    addi r27, r27, lbl_80862F3C@l
    lis r29, fn_80708150@ha
    lis r30, lbl_80862F30@ha
    li r31, 0x1
    addi r17, r27, 0x10
    b lbl_fn_80708550_00000FF0
lbl_fn_80708550_00000EF0:
    lwz r3, 0x1c(r22)
    lwz r12, -0x8(r3)
    subi r26, r3, 0x40
    cmpwi r12, 0x0
    beq lbl_fn_80708550_00000F18
    mr r3, r26
    lwz r5, 0x3c(r26)
    li r4, 0x1
    mtctr r12
    bctrl
lbl_fn_80708550_00000F18:
    lbz r0, lbl_808804A0
    extsb. r0, r0
    bne lbl_fn_80708550_00000F6C
    addi r0, r27, 0x4
    addi r6, r27, 0x10
    addi r7, r27, 0x1c
    stw r28, 0x0(r27)
    mr r3, r27
    addi r4, r29, fn_80708150@l
    stw r0, 0x4(r27)
    addi r5, r30, lbl_80862F30@l
    stw r0, 0x8(r27)
    stw r28, 0xc(r27)
    stw r6, 0x10(r27)
    stw r6, 0x14(r27)
    stw r28, 0x18(r27)
    stw r7, 0x1c(r27)
    stw r7, 0x20(r27)
    stb r28, 0x24(r27)
    bl __register_global_object
    stb r31, lbl_808804A0
lbl_fn_80708550_00000F6C:
    bl OSDisableInterrupts
    lwz r0, 0x0(r26)
    mr r19, r3
    cmpwi r0, 0x0
    beq lbl_fn_80708550_00000F88
    lwz r3, 0x0(r26)
    bl fn_80608020
lbl_fn_80708550_00000F88:
    mr r3, r26
    li r4, -0x1
    bl fn_80705390
    bl OSDisableInterrupts
    lbz r0, 0x1d(r26)
    mr r18, r3
    cmpwi r0, 0x0
    beq lbl_fn_80708550_00000FBC
    addi r26, r26, 0x40
    addi r3, r27, 0x18
    mr r4, r26
    bl fn_807252D0
    b lbl_fn_80708550_00000FCC
lbl_fn_80708550_00000FBC:
    addi r26, r26, 0x40
    mr r3, r27
    mr r4, r26
    bl fn_807252D0
lbl_fn_80708550_00000FCC:
    stw r17, 0xc(r1)
    mr r5, r26
    addi r3, r27, 0xc
    addi r4, r1, 0xc
    bl fn_807252A0
    mr r3, r18
    bl OSRestoreInterrupts
    mr r3, r19
    bl OSRestoreInterrupts
lbl_fn_80708550_00000FF0:
    lwz r0, 0x18(r22)
    cmpwi r0, 0x0
    bne lbl_fn_80708550_00000EF0
lbl_fn_80708550_00000FFC:
    lwz r0, 0xc(r22)
    cmpwi r0, 0x0
    bne lbl_fn_80708550_00001018
    mr r3, r20
    bl OSRestoreInterrupts
    li r19, 0x0
    b lbl_fn_80708550_00001068
lbl_fn_80708550_00001018:
    lwz r5, 0x10(r22)
    addi r3, r22, 0xc
    stw r5, 0x10(r1)
    addi r4, r1, 0x10
    subi r17, r5, 0x40
    bl fn_80725200
    cmpwi r17, 0x0
    mr r19, r17
    beq lbl_fn_80708550_00001048
    mr r3, r17
    bl fn_80705340
    mr r19, r3
lbl_fn_80708550_00001048:
    addi r0, r22, 0x4
    stw r0, 0x14(r1)
    mr r3, r22
    addi r4, r1, 0x14
    addi r5, r17, 0x40
    bl fn_807252A0
    mr r3, r20
    bl OSRestoreInterrupts
lbl_fn_80708550_00001068:
    cmpwi r19, 0x0
    bne lbl_fn_80708550_00001080
    mr r3, r21
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_80708550_00001130
lbl_fn_80708550_00001080:
    lis r4, fn_80705CD0@ha
    mr r3, r23
    mr r5, r19
    addi r4, r4, fn_80705CD0@l
    bl fn_806080A0
    cmpwi r3, 0x0
    mr r4, r3
    bne lbl_fn_80708550_00001114
    mr r3, r19
    li r4, -0x1
    bl fn_80705390
    bl OSDisableInterrupts
    lbz r0, 0x1d(r19)
    mr r18, r3
    cmpwi r0, 0x0
    beq lbl_fn_80708550_000010D4
    addi r17, r19, 0x40
    addi r3, r22, 0x18
    mr r4, r17
    bl fn_807252D0
    b lbl_fn_80708550_000010E4
lbl_fn_80708550_000010D4:
    addi r17, r19, 0x40
    mr r3, r22
    mr r4, r17
    bl fn_807252D0
lbl_fn_80708550_000010E4:
    addi r0, r22, 0x10
    stw r0, 0x8(r1)
    mr r5, r17
    addi r3, r22, 0xc
    addi r4, r1, 0x8
    bl fn_807252A0
    mr r3, r18
    bl OSRestoreInterrupts
    mr r3, r21
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_80708550_00001130
lbl_fn_80708550_00001114:
    mr r3, r19
    bl fn_807079B0
    stw r24, 0x38(r19)
    mr r3, r21
    stw r25, 0x3c(r19)
    bl OSRestoreInterrupts
    mr r3, r19
lbl_fn_80708550_00001130:
    addi r11, r1, 0x60
    bl _restgpr_17
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80708810(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl OSDisableInterrupts
    lwz r0, 0x0(r29)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_80708810_00001190
    lwz r3, 0x0(r29)
    bl fn_80608020
lbl_fn_80708810_00001190:
    mr r3, r29
    li r4, -0x1
    bl fn_80705390
    bl OSDisableInterrupts
    lbz r0, 0x1d(r29)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_80708810_000011C4
    addi r29, r29, 0x40
    addi r3, r28, 0x18
    mr r4, r29
    bl fn_807252D0
    b lbl_fn_80708810_000011D4
lbl_fn_80708810_000011C4:
    addi r29, r29, 0x40
    mr r3, r28
    mr r4, r29
    bl fn_807252D0
lbl_fn_80708810_000011D4:
    addi r0, r28, 0x10
    stw r0, 0x8(r1)
    mr r5, r29
    addi r3, r28, 0xc
    addi r4, r1, 0x8
    bl fn_807252A0
    mr r3, r30
    bl OSRestoreInterrupts
    mr r3, r31
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

asm void fn_807088E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl OSDisableInterrupts
    li r0, 0x1
    stb r0, 0x1d(r29)
    mr r31, r3
    bl OSDisableInterrupts
    addi r29, r29, 0x40
    mr r30, r3
    mr r3, r28
    mr r4, r29
    bl fn_807252D0
    addi r0, r28, 0x1c
    stw r0, 0x8(r1)
    mr r5, r29
    addi r3, r28, 0x18
    addi r4, r1, 0x8
    bl fn_807252A0
    mr r3, r30
    bl OSRestoreInterrupts
    mr r3, r31
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

asm void fn_80708980(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_22
    lwz r0, 0x18(r3)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_80708980_00001410
    lis r23, lbl_80862F3C@ha
    li r24, 0x0
    addi r23, r23, lbl_80862F3C@l
    lis r25, fn_80708150@ha
    lis r26, lbl_80862F30@ha
    li r27, 0x1
    addi r28, r23, 0x10
    b lbl_fn_80708980_00001404
lbl_fn_80708980_00001304:
    lwz r3, 0x1c(r31)
    lwz r12, -0x8(r3)
    subi r22, r3, 0x40
    cmpwi r12, 0x0
    beq lbl_fn_80708980_0000132C
    mr r3, r22
    lwz r5, 0x3c(r22)
    li r4, 0x1
    mtctr r12
    bctrl
lbl_fn_80708980_0000132C:
    lbz r0, lbl_808804A0
    extsb. r0, r0
    bne lbl_fn_80708980_00001380
    addi r0, r23, 0x4
    addi r6, r23, 0x10
    addi r7, r23, 0x1c
    stw r24, 0x0(r23)
    mr r3, r23
    addi r4, r25, fn_80708150@l
    stw r0, 0x4(r23)
    addi r5, r26, lbl_80862F30@l
    stw r0, 0x8(r23)
    stw r24, 0xc(r23)
    stw r6, 0x10(r23)
    stw r6, 0x14(r23)
    stw r24, 0x18(r23)
    stw r7, 0x1c(r23)
    stw r7, 0x20(r23)
    stb r24, 0x24(r23)
    bl __register_global_object
    stb r27, lbl_808804A0
lbl_fn_80708980_00001380:
    bl OSDisableInterrupts
    lwz r0, 0x0(r22)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_80708980_0000139C
    lwz r3, 0x0(r22)
    bl fn_80608020
lbl_fn_80708980_0000139C:
    mr r3, r22
    li r4, -0x1
    bl fn_80705390
    bl OSDisableInterrupts
    lbz r0, 0x1d(r22)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_80708980_000013D0
    addi r22, r22, 0x40
    addi r3, r23, 0x18
    mr r4, r22
    bl fn_807252D0
    b lbl_fn_80708980_000013E0
lbl_fn_80708980_000013D0:
    addi r22, r22, 0x40
    mr r3, r23
    mr r4, r22
    bl fn_807252D0
lbl_fn_80708980_000013E0:
    stw r28, 0x8(r1)
    mr r5, r22
    addi r3, r23, 0xc
    addi r4, r1, 0x8
    bl fn_807252A0
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r30
    bl OSRestoreInterrupts
lbl_fn_80708980_00001404:
    lwz r0, 0x18(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80708980_00001304
lbl_fn_80708980_00001410:
    addi r11, r1, 0x40
    bl _restgpr_22
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80708AF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80708AF0_00001454
    cmpwi r5, 0x0
    bne lbl_fn_80708AF0_00001464
lbl_fn_80708AF0_00001454:
    li r0, 0x0
    stw r0, 0x0(r3)
    li r3, 0x0
    b lbl_fn_80708AF0_00001484
lbl_fn_80708AF0_00001464:
    mr r3, r4
    mr r4, r5
    li r5, 0x0
    bl fn_80619CB0
    neg r0, r3
    stw r3, 0x0(r31)
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_80708AF0_00001484:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80708B60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80708B60_000014D0
    mr r3, r0
    bl fn_80619D40
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80708B60_000014D0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80708BB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    mr r4, r5
    bl fn_806104F0
    lis r3, fn_80708C50@ha
    lis r4, fn_80708CB0@ha
    addi r3, r3, fn_80708C50@l
    addi r4, r4, fn_80708CB0@l
    bl fn_806104E0
    li r0, 0x0
    stw r31, lbl_808804A8
    stw r0, lbl_808804AC
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80708C10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r3, r4
    mr r4, r5
    stw r0, 0x14(r1)
    bl fn_806104E0
    li r0, 0x0
    stw r0, lbl_808804A8
    lwz r3, lbl_808804AC
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80708C50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r4, r31
    lwz r6, lbl_808804A8
    lwz r3, 0x0(r6)
    bl fn_80619D70
    lwz r5, lbl_808804A8
    addi r0, r31, 0x3
    clrrwi r0, r0, 2
    lwz r4, 0x4(r5)
    addi r4, r4, 0x1
    stw r4, 0x4(r5)
    lwz r4, lbl_808804AC
    add r0, r4, r0
    stw r0, lbl_808804AC
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80708CB0(void)
{
    nofralloc
    lwz r4, lbl_808804A8
    lwz r3, 0x4(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80708CB0_00001608
    subi r0, r3, 0x1
    stw r0, 0x4(r4)
lbl_fn_80708CB0_00001608:
    lwz r3, lbl_808804A8
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bnelr
    lwz r3, 0x0(r3)
    li r4, 0x3
    b fn_80619E90
    blr
}

asm void fn_80708CF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80708F70
    li r0, 0x0
    stw r0, 0xc(r31)
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80708D30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80708D30_00001698
    cmpwi r4, 0x0
    ble lbl_fn_80708D30_00001698
    bl dtor_80084684
lbl_fn_80708D30_00001698:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80708D70(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    lwz r5, 0x0(r4)
    stw r0, 0xc4(r1)
    lis r0, 0x4330
    stw r31, 0xbc(r1)
    mr r31, r3
    stw r30, 0xb8(r1)
    mr r30, r4
    lwz r6, 0x4(r30)
    addi r4, r1, 0xc
    stw r0, 0xa8(r1)
    lwz r7, 0x8(r30)
    stw r0, 0xb0(r1)
    bl fn_80709110
    cmpwi r3, 0x0
    bne lbl_fn_80708D70_000016FC
    li r3, 0x0
    b lbl_fn_80708D70_00001890
lbl_fn_80708D70_000016FC:
    lwz r6, 0xc(r31)
    mr r3, r31
    addi r4, r1, 0x28
    addi r5, r1, 0xc
    addi r7, r1, 0x8
    bl fn_807093D0
    cmpwi r3, 0x0
    bne lbl_fn_80708D70_00001724
    li r3, 0x0
    b lbl_fn_80708D70_00001890
lbl_fn_80708D70_00001724:
    lwz r0, 0x30(r1)
    li r3, 0x2
    cmpwi r0, 0x2
    bgt lbl_fn_80708D70_00001738
    mr r3, r0
lbl_fn_80708D70_00001738:
    lwz r4, 0x18(r30)
    lwz r5, 0x14(r30)
    lwz r6, 0x1c(r30)
    lwz r7, 0x20(r30)
    bl fn_8070C440
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_80708D70_00001760
    li r3, 0x0
    b lbl_fn_80708D70_00001890
lbl_fn_80708D70_00001760:
    lwz r0, 0x4(r30)
    stw r0, 0xa8(r3)
    lwz r0, 0x8(r30)
    lbz r4, 0x21(r1)
    xoris r0, r0, 0x8000
    stw r0, 0xac(r1)
    lfd f1, lbl_80889058
    stw r4, 0xac(r3)
    lfd f0, 0xa8(r1)
    lbz r0, 0x23(r1)
    fsubs f3, f0, f1
    stw r0, 0xb4(r1)
    lfs f2, lbl_80889048
    lfd f1, lbl_80889060
    lfd f0, 0xb0(r1)
    fdivs f3, f3, f2
    fsubs f0, f0, f1
    fmuls f3, f3, f3
    fdivs f0, f0, f2
    fmuls f3, f3, f0
    stfs f3, 0x90(r3)
    lfs f0, 0x24(r1)
    stfs f0, 0x9c(r3)
    lbz r4, 0x14(r1)
    bl fn_8070CD20
    lbz r4, 0x15(r1)
    mr r3, r31
    bl fn_8070CD40
    lbz r4, 0x16(r1)
    mr r3, r31
    bl fn_8070CD60
    lbz r4, 0x17(r1)
    mr r3, r31
    bl fn_8070CE00
    lbz r4, 0x18(r1)
    mr r3, r31
    bl fn_8070CE10
    lbz r3, 0x22(r1)
    lwz r0, 0x10(r30)
    subi r3, r3, 0x40
    lfd f4, lbl_80889058
    xoris r3, r3, 0x8000
    stw r3, 0xac(r1)
    xoris r0, r0, 0x8000
    lfs f2, lbl_8088904C
    stw r0, 0xb4(r1)
    lfd f0, 0xa8(r1)
    lfd f1, 0xb0(r1)
    fsubs f3, f0, f4
    lfs f0, lbl_80889050
    fsubs f1, f1, f4
    fdivs f3, f3, f2
    fdivs f1, f1, f2
    fadds f3, f3, f1
    stfs f3, 0x94(r31)
    stfs f0, 0x98(r31)
    lbz r0, 0x20(r1)
    stw r0, 0xbc(r31)
    lwz r3, 0x1c(r1)
    subi r0, r3, 0x1
    cntlzw r0, r0
    extrwi r0, r0, 8, 19
    stb r0, 0x3a(r31)
    lwz r0, 0xc(r1)
    cmpwi r0, 0x2
    bne lbl_fn_80708D70_00001878
    lwz r3, 0x8(r1)
    lwz r0, 0x10(r1)
    stw r0, 0xc8(r31)
    stw r3, 0xcc(r31)
lbl_fn_80708D70_00001878:
    lwz r5, 0xc(r30)
    mr r3, r31
    addi r4, r1, 0x28
    li r6, 0x0
    bl fn_8070C010
    mr r3, r31
lbl_fn_80708D70_00001890:
    lwz r0, 0xc4(r1)
    lwz r31, 0xbc(r1)
    lwz r30, 0xb8(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_80708F70(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    lwz r5, 0x0(r4)
    subis r0, r5, 0x5242
    cmplwi r0, 0x4e4b
    beq lbl_fn_80708F70_000018D8
    li r0, 0x0
    b lbl_fn_80708F70_00001904
lbl_fn_80708F70_000018D8:
    lhz r6, 0x6(r4)
    cmplwi r6, 0x100
    bge lbl_fn_80708F70_000018EC
    li r0, 0x0
    b lbl_fn_80708F70_00001904
lbl_fn_80708F70_000018EC:
    subfic r0, r6, 0x102
    li r5, 0x102
    orc r5, r5, r6
    srwi r0, r0, 1
    subf r0, r0, r5
    srwi r0, r0, 31
lbl_fn_80708F70_00001904:
    cmpwi r0, 0x0
    beqlr
    stw r4, 0x0(r3)
    lwz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80708F70_00001924
    add r0, r0, r4
    stw r0, 0x4(r3)
lbl_fn_80708F70_00001924:
    lwz r4, 0x0(r3)
    lwz r0, 0x18(r4)
    cmpwi r0, 0x0
    beqlr
    add r0, r0, r4
    stw r0, 0x8(r3)
    blr
}

asm void fn_80709000(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r6
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80709000_00001970
    li r3, 0x0
    b lbl_fn_80709000_00001A34
lbl_fn_80709000_00001970:
    cmpwi r4, 0x0
    blt lbl_fn_80709000_00001988
    lwz r6, 0x4(r3)
    lwz r0, 0x8(r6)
    cmpw r4, r0
    blt lbl_fn_80709000_00001990
lbl_fn_80709000_00001988:
    li r3, 0x0
    b lbl_fn_80709000_00001A34
lbl_fn_80709000_00001990:
    slwi r0, r4, 3
    add r4, r6, r0
    addi r4, r4, 0xc
    lbz r0, 0x1(r4)
    cmplwi r0, 0x4
    bne lbl_fn_80709000_000019B0
    li r3, 0x0
    b lbl_fn_80709000_00001A34
lbl_fn_80709000_000019B0:
    cmplwi r0, 0x1
    beq lbl_fn_80709000_000019D0
    bl fn_807092B0
    cmpwi r3, 0x0
    mr r4, r3
    bne lbl_fn_80709000_000019D0
    li r3, 0x0
    b lbl_fn_80709000_00001A34
lbl_fn_80709000_000019D0:
    lbz r0, 0x1(r4)
    cmplwi r0, 0x4
    bne lbl_fn_80709000_000019E4
    li r3, 0x0
    b lbl_fn_80709000_00001A34
lbl_fn_80709000_000019E4:
    cmplwi r0, 0x1
    beq lbl_fn_80709000_00001A0C
    mr r3, r30
    mr r5, r31
    bl fn_807092B0
    cmpwi r3, 0x0
    mr r4, r3
    bne lbl_fn_80709000_00001A0C
    li r3, 0x0
    b lbl_fn_80709000_00001A34
lbl_fn_80709000_00001A0C:
    lbz r0, 0x1(r4)
    cmplwi r0, 0x1
    beq lbl_fn_80709000_00001A20
    li r3, 0x0
    b lbl_fn_80709000_00001A34
lbl_fn_80709000_00001A20:
    lwz r5, 0x4(r30)
    lbz r3, 0x0(r4)
    lwz r4, 0x4(r4)
    addi r5, r5, 0x8
    bl fn_80721120
lbl_fn_80709000_00001A34:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80709110(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    mr r4, r5
    mr r5, r6
    stw r30, 0x8(r1)
    mr r30, r3
    mr r6, r7
    bl fn_80709000
    cmpwi r3, 0x0
    bne lbl_fn_80709110_00001A8C
    li r3, 0x0
    b lbl_fn_80709110_00001BD8
lbl_fn_80709110_00001A8C:
    lbz r0, 0x9(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80709110_00001AC0
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bge lbl_fn_80709110_00001AAC
    li r3, 0x0
    b lbl_fn_80709110_00001BD8
lbl_fn_80709110_00001AAC:
    li r0, 0x0
    stw r0, 0x0(r31)
    lwz r0, 0x0(r3)
    stw r0, 0x4(r31)
    b lbl_fn_80709110_00001B28
lbl_fn_80709110_00001AC0:
    cmplwi r0, 0x1
    bne lbl_fn_80709110_00001AF0
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80709110_00001ADC
    li r3, 0x0
    b lbl_fn_80709110_00001BD8
lbl_fn_80709110_00001ADC:
    li r0, 0x1
    stw r0, 0x0(r31)
    lwz r0, 0x0(r3)
    stw r0, 0x4(r31)
    b lbl_fn_80709110_00001B28
lbl_fn_80709110_00001AF0:
    cmplwi r0, 0x2
    bne lbl_fn_80709110_00001B20
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80709110_00001B0C
    li r3, 0x0
    b lbl_fn_80709110_00001BD8
lbl_fn_80709110_00001B0C:
    li r0, 0x2
    stw r0, 0x0(r31)
    lwz r0, 0x0(r3)
    stw r0, 0x4(r31)
    b lbl_fn_80709110_00001B28
lbl_fn_80709110_00001B20:
    li r3, 0x0
    b lbl_fn_80709110_00001BD8
lbl_fn_80709110_00001B28:
    lbz r0, 0x4(r3)
    stb r0, 0x8(r31)
    lbz r0, 0x8(r3)
    stb r0, 0x9(r31)
    lbz r0, 0x5(r3)
    stb r0, 0xa(r31)
    lbz r0, 0x6(r3)
    stb r0, 0xb(r31)
    lbz r0, 0x7(r3)
    stb r0, 0xc(r31)
    lbz r0, 0xc(r3)
    stb r0, 0x15(r31)
    lbz r0, 0xe(r3)
    stb r0, 0x16(r31)
    lwz r4, 0x0(r30)
    lhz r0, 0x6(r4)
    cmplwi r0, 0x101
    blt lbl_fn_80709110_00001B84
    lbz r0, 0xd(r3)
    stb r0, 0x17(r31)
    lfs f0, 0x10(r3)
    stfs f0, 0x18(r31)
    b lbl_fn_80709110_00001B94
lbl_fn_80709110_00001B84:
    lfs f0, lbl_80889068
    li r0, 0x7f
    stb r0, 0x17(r31)
    stfs f0, 0x18(r31)
lbl_fn_80709110_00001B94:
    lbz r0, 0xa(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80709110_00001BAC
    cmpwi r0, 0x1
    beq lbl_fn_80709110_00001BB8
    b lbl_fn_80709110_00001BC4
lbl_fn_80709110_00001BAC:
    li r0, 0x0
    stw r0, 0x10(r31)
    b lbl_fn_80709110_00001BCC
lbl_fn_80709110_00001BB8:
    li r0, 0x1
    stw r0, 0x10(r31)
    b lbl_fn_80709110_00001BCC
lbl_fn_80709110_00001BC4:
    li r3, 0x0
    b lbl_fn_80709110_00001BD8
lbl_fn_80709110_00001BCC:
    lbz r0, 0xb(r3)
    li r3, 0x1
    stb r0, 0x14(r31)
lbl_fn_80709110_00001BD8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807092B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lbz r0, 0x1(r4)
    stw r31, 0xc(r1)
    mr r31, r5
    cmpwi r0, 0x1
    li r5, 0x0
    beq lbl_fn_807092B0_00001C28
    cmpwi r0, 0x2
    beq lbl_fn_807092B0_00001C30
    cmpwi r0, 0x3
    beq lbl_fn_807092B0_00001CA4
    b lbl_fn_807092B0_00001CF8
lbl_fn_807092B0_00001C28:
    mr r5, r4
    b lbl_fn_807092B0_00001CF8
lbl_fn_807092B0_00001C30:
    lwz r5, 0x4(r3)
    lbz r3, 0x0(r4)
    lwz r4, 0x4(r4)
    addi r5, r5, 0x8
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_807092B0_00001C54
    li r3, 0x0
    b lbl_fn_807092B0_00001CFC
lbl_fn_807092B0_00001C54:
    li r5, 0x0
    b lbl_fn_807092B0_00001C78
    nop
lbl_fn_807092B0_00001C60:
    lbz r0, 0x0(r3)
    addi r5, r5, 0x1
    cmpw r5, r0
    blt lbl_fn_807092B0_00001C78
    li r3, 0x0
    b lbl_fn_807092B0_00001CFC
lbl_fn_807092B0_00001C78:
    add r4, r3, r5
    lbz r0, 0x1(r4)
    cmpw r31, r0
    bgt lbl_fn_807092B0_00001C60
    lbz r4, 0x0(r3)
    slwi r0, r5, 3
    add r0, r3, r0
    addi r3, r4, 0x4
    clrrwi r3, r3, 2
    add r5, r3, r0
    b lbl_fn_807092B0_00001CF8
lbl_fn_807092B0_00001CA4:
    lwz r5, 0x4(r3)
    lbz r3, 0x0(r4)
    lwz r4, 0x4(r4)
    addi r5, r5, 0x8
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_807092B0_00001CC8
    li r3, 0x0
    b lbl_fn_807092B0_00001CFC
lbl_fn_807092B0_00001CC8:
    lbz r4, 0x0(r3)
    cmpw r31, r4
    blt lbl_fn_807092B0_00001CE0
    lbz r0, 0x1(r3)
    cmpw r31, r0
    ble lbl_fn_807092B0_00001CE8
lbl_fn_807092B0_00001CE0:
    li r3, 0x0
    b lbl_fn_807092B0_00001CFC
lbl_fn_807092B0_00001CE8:
    subf r0, r4, r31
    slwi r0, r0, 3
    add r3, r3, r0
    addi r5, r3, 0x4
lbl_fn_807092B0_00001CF8:
    mr r3, r5
lbl_fn_807092B0_00001CFC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807093D0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r7, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r7
    stw r29, 0x24(r1)
    mr r29, r6
    beq lbl_fn_807093D0_00001D44
    li r0, 0x0
    stw r0, 0x0(r7)
lbl_fn_807093D0_00001D44:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_807093D0_00001D58
    li r3, 0x0
    b lbl_fn_807093D0_00001F50
lbl_fn_807093D0_00001D58:
    lwz r0, 0x0(r5)
    cmpwi r0, 0x0
    bne lbl_fn_807093D0_00001E18
    lwz r3, 0x8(r3)
    lwz r30, 0x4(r5)
    cmpwi r3, 0x0
    bne lbl_fn_807093D0_00001DBC
    mr r4, r29
    addi r3, r1, 0x10
    bl fn_80721150
    mr r4, r30
    addi r3, r1, 0x10
    bl fn_807211D0
    cmpwi r3, 0x0
    bne lbl_fn_807093D0_00001D9C
    li r3, 0x0
    b lbl_fn_807093D0_00001F50
lbl_fn_807093D0_00001D9C:
    mr r4, r3
    addi r3, r1, 0xc
    bl fn_80721260
    mr r4, r31
    addi r3, r1, 0xc
    li r5, 0x0
    bl fn_80721290
    b lbl_fn_807093D0_00001F50
lbl_fn_807093D0_00001DBC:
    lwz r0, 0x8(r3)
    addi r5, r3, 0x8
    cmplw r30, r0
    blt lbl_fn_807093D0_00001DD4
    li r3, 0x0
    b lbl_fn_807093D0_00001F50
lbl_fn_807093D0_00001DD4:
    slwi r0, r30, 3
    add r4, r3, r0
    lbz r3, 0xc(r4)
    lwz r4, 0x10(r4)
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_807093D0_00001DF8
    li r3, 0x0
    b lbl_fn_807093D0_00001F50
lbl_fn_807093D0_00001DF8:
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_80721280
    mr r4, r31
    mr r5, r29
    addi r3, r1, 0x8
    bl fn_80721290
    b lbl_fn_807093D0_00001F50
lbl_fn_807093D0_00001E18:
    cmpwi r0, 0x1
    bne lbl_fn_807093D0_00001EA4
    lwz r0, 0x4(r5)
    cmpwi r0, 0x0
    bne lbl_fn_807093D0_00001E34
    li r3, 0x0
    b lbl_fn_807093D0_00001F50
lbl_fn_807093D0_00001E34:
    cmpwi r7, 0x0
    beq lbl_fn_807093D0_00001E40
    stw r0, 0x0(r7)
lbl_fn_807093D0_00001E40:
    lwz r7, 0x4(r5)
    li r0, 0xd
    addi r6, r4, 0x14
    lwz r3, 0x0(r7)
    addi r5, r7, 0x14
    stw r3, 0x0(r4)
    lbz r3, 0x4(r7)
    stb r3, 0x4(r4)
    lwz r3, 0x8(r7)
    stw r3, 0x8(r4)
    lwz r3, 0xc(r7)
    stw r3, 0xc(r4)
    lwz r3, 0x10(r7)
    stw r3, 0x10(r4)
    lwz r3, 0x14(r7)
    stw r3, 0x14(r4)
    mtctr r0
    nop
lbl_fn_807093D0_00001E88:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_807093D0_00001E88
    li r3, 0x1
    b lbl_fn_807093D0_00001F50
lbl_fn_807093D0_00001EA4:
    cmpwi r0, 0x2
    bne lbl_fn_807093D0_00001F4C
    lwz r3, 0x4(r5)
    cmpwi r3, 0x0
    bne lbl_fn_807093D0_00001EC0
    li r3, 0x0
    b lbl_fn_807093D0_00001F50
lbl_fn_807093D0_00001EC0:
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_807093D0_00001EE0
    li r3, 0x0
    b lbl_fn_807093D0_00001F50
lbl_fn_807093D0_00001EE0:
    cmpwi r30, 0x0
    beq lbl_fn_807093D0_00001EEC
    stw r3, 0x0(r30)
lbl_fn_807093D0_00001EEC:
    lwz r4, 0x0(r3)
    li r0, 0xd
    stw r4, 0x0(r31)
    addi r4, r3, 0x14
    addi r5, r31, 0x14
    lbz r6, 0x4(r3)
    stb r6, 0x4(r31)
    lwz r6, 0x8(r3)
    stw r6, 0x8(r31)
    lwz r6, 0xc(r3)
    stw r6, 0xc(r31)
    lwz r6, 0x10(r3)
    stw r6, 0x10(r31)
    lwz r3, 0x14(r3)
    stw r3, 0x14(r31)
    mtctr r0
    nop
lbl_fn_807093D0_00001F30:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_807093D0_00001F30
    li r3, 0x1
    b lbl_fn_807093D0_00001F50
lbl_fn_807093D0_00001F4C:
    li r3, 0x0
lbl_fn_807093D0_00001F50:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80709630(void)
{
    nofralloc
    lfs f0, lbl_80889074
    li r4, 0x0
    lfs f1, lbl_80889070
    li r0, 0x1
    stfs f1, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    stb r4, 0x18(r3)
    stfs f0, 0x14(r3)
    stb r4, 0x19(r3)
    stw r0, 0x1c(r3)
    stfs f1, 0x20(r3)
    stfs f0, 0x24(r3)
    stw r4, 0x28(r3)
    stw r4, 0x2c(r3)
    stfs f0, 0x30(r3)
    stfs f0, 0x34(r3)
    stfs f0, 0x38(r3)
    stfs f1, 0x3c(r3)
    stfs f1, 0x40(r3)
    stfs f1, 0x44(r3)
    stfs f1, 0x48(r3)
    stfs f1, 0x4c(r3)
    stfs f1, 0x50(r3)
    stfs f0, 0x54(r3)
    stfs f0, 0x58(r3)
    stfs f0, 0x5c(r3)
    stfs f0, 0x60(r3)
    stfs f1, 0x64(r3)
    stfs f1, 0x68(r3)
    stfs f0, 0x6c(r3)
    stfs f0, 0x70(r3)
    stfs f0, 0x74(r3)
    stfs f0, 0x78(r3)
    stfs f1, 0x7c(r3)
    stfs f1, 0x80(r3)
    stfs f0, 0x84(r3)
    stfs f0, 0x88(r3)
    stfs f0, 0x8c(r3)
    stfs f0, 0x90(r3)
    stfs f1, 0x94(r3)
    stfs f1, 0x98(r3)
    stfs f0, 0x9c(r3)
    stfs f0, 0xa0(r3)
    stfs f0, 0xa4(r3)
    stfs f0, 0xa8(r3)
    blr
}
