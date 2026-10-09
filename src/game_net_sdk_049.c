#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);
extern void _restgpr_16(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_16(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_80608230(void);
extern void fn_8060AED0(void);
extern void fn_8060AFC0(void);
extern void fn_80695D84(void);
extern void fn_80703F90(void);
extern void fn_807046A0(void);
extern void fn_80705450(void);
extern void fn_807079E0(void);
extern void fn_80707C60(void);
extern void fn_80707D40(void);
extern void fn_80707F30(void);
extern void fn_807080C0(void);
extern void fn_807088E0(void);
extern void fn_80721090(void);

/* External data declarations */
extern u8 lbl_80862C20[];

/* Small data declarations */
extern u32 lbl_80889020;
extern u32 lbl_80889024;
extern u32 lbl_80889028;
extern u32 lbl_80889030;
extern u32 lbl_80889038;
extern u32 lbl_8088903C;
extern u32 lbl_80889040;
extern u32 lbl_80889044;

/* Function declarations */
void pad_03_807056AC_text(void);
void fn_807056B0(void);
void fn_807057E0(void);
void fn_80705880(void);
void fn_80705A80(void);
void fn_80705B20(void);
void fn_80705CD0(void);
void fn_80705D30(void);
void fn_80705DA0(void);
void fn_80705DC0(void);
void fn_80705E20(void);
void fn_80705E80(void);
void fn_80705FD0(void);
void fn_80706390(void);
void fn_80706470(void);
void fn_807065C0(void);
void fn_807066F0(void);
void fn_807067D0(void);
void fn_80706DF0(void);
void fn_80706E80(void);
void fn_80707050(void);
void fn_80707170(void);
void fn_80707300(void);
void fn_80707530(void);

asm void pad_03_807056AC_text(void)
{
    nofralloc
    opword 0x00000000
}

asm void fn_807056B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r31, r3
    mr r27, r4
    mr r28, r5
    bl OSDisableInterrupts
    lwz r0, 0x0(r31)
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_fn_807056B0_00000040
    bl OSRestoreInterrupts
    b lbl_fn_807056B0_00000114
lbl_fn_807056B0_00000040:
    cmpwi r27, 0x0
    lwz r0, 0x14(r31)
    beq lbl_fn_807056B0_00000050
    addis r27, r27, 0x8000
lbl_fn_807056B0_00000050:
    cmpwi r0, 0x3
    li r29, 0x0
    beq lbl_fn_807056B0_00000070
    cmpwi r0, 0x2
    beq lbl_fn_807056B0_000000B0
    cmpwi r0, 0x1
    beq lbl_fn_807056B0_000000BC
    b lbl_fn_807056B0_000000C8
lbl_fn_807056B0_00000070:
    lis r3, 0x2492
    subi r6, r28, 0x1
    addi r3, r3, 0x4925
    slwi r0, r27, 1
    mulhwu r4, r3, r6
    subf r3, r4, r6
    srwi r3, r3, 1
    add r4, r3, r4
    srwi r3, r4, 3
    mulli r5, r3, 0xe
    extlwi r3, r4, 28, 1
    subf r4, r5, r6
    add r0, r4, r0
    add r29, r0, r3
    addi r29, r29, 0x2
    b lbl_fn_807056B0_000000C8
lbl_fn_807056B0_000000B0:
    add r29, r27, r28
    subi r29, r29, 0x1
    b lbl_fn_807056B0_000000C8
lbl_fn_807056B0_000000BC:
    srwi r0, r27, 1
    add r3, r28, r0
    subi r29, r3, 0x1
lbl_fn_807056B0_000000C8:
    bl OSDisableInterrupts
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    bne lbl_fn_807056B0_000000E0
    bl OSRestoreInterrupts
    b lbl_fn_807056B0_0000010C
lbl_fn_807056B0_000000E0:
    srwi r0, r29, 16
    sth r0, 0x9e(r4)
    lwz r4, 0x0(r31)
    sth r29, 0xa0(r4)
    lwz r5, 0x0(r31)
    lwz r4, 0x1c(r5)
    rlwinm. r0, r4, 0, 21, 21
    bne lbl_fn_807056B0_00000108
    ori r0, r4, 0x2000
    stw r0, 0x1c(r5)
lbl_fn_807056B0_00000108:
    bl OSRestoreInterrupts
lbl_fn_807056B0_0000010C:
    mr r3, r30
    bl OSRestoreInterrupts
lbl_fn_807056B0_00000114:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_807057E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwz r0, 0x0(r29)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_807057E0_00000170
    bl OSRestoreInterrupts
    b lbl_fn_807057E0_000001B0
lbl_fn_807057E0_00000170:
    bl OSDisableInterrupts
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    bne lbl_fn_807057E0_00000188
    bl OSRestoreInterrupts
    b lbl_fn_807057E0_000001A8
lbl_fn_807057E0_00000188:
    sth r30, 0x96(r4)
    lwz r5, 0x0(r29)
    lwz r4, 0x1c(r5)
    rlwinm. r0, r4, 0, 21, 21
    bne lbl_fn_807057E0_000001A4
    ori r0, r4, 0x800
    stw r0, 0x1c(r5)
lbl_fn_807057E0_000001A4:
    bl OSRestoreInterrupts
lbl_fn_807057E0_000001A8:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_fn_807057E0_000001B0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80705880(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r30, r3
    mr r26, r4
    mr r27, r5
    bl OSDisableInterrupts
    lwz r0, 0x0(r30)
    mr r29, r3
    cmpwi r0, 0x0
    bne lbl_fn_80705880_00000210
    bl OSRestoreInterrupts
    b lbl_fn_80705880_000003B0
lbl_fn_80705880_00000210:
    bl fn_80703F90
    bl fn_807046A0
    cmpwi r3, 0x0
    lwz r0, 0x14(r30)
    beq lbl_fn_80705880_00000228
    addis r3, r3, 0x8000
lbl_fn_80705880_00000228:
    cmpwi r0, 0x3
    li r31, 0x0
    beq lbl_fn_80705880_00000248
    cmpwi r0, 0x2
    beq lbl_fn_80705880_00000254
    cmpwi r0, 0x1
    beq lbl_fn_80705880_0000025C
    b lbl_fn_80705880_00000260
lbl_fn_80705880_00000248:
    slwi r3, r3, 1
    addi r31, r3, 0x2
    b lbl_fn_80705880_00000260
lbl_fn_80705880_00000254:
    mr r31, r3
    b lbl_fn_80705880_00000260
lbl_fn_80705880_0000025C:
    srwi r31, r3, 1
lbl_fn_80705880_00000260:
    cmpwi r26, 0x0
    beq lbl_fn_80705880_0000026C
    addis r26, r26, 0x8000
lbl_fn_80705880_0000026C:
    cmpwi r0, 0x3
    li r28, 0x0
    beq lbl_fn_80705880_0000028C
    cmpwi r0, 0x2
    beq lbl_fn_80705880_000002CC
    cmpwi r0, 0x1
    beq lbl_fn_80705880_000002D8
    b lbl_fn_80705880_000002E4
lbl_fn_80705880_0000028C:
    lis r3, 0x2492
    subi r6, r27, 0x1
    addi r3, r3, 0x4925
    slwi r0, r26, 1
    mulhwu r4, r3, r6
    subf r3, r4, r6
    srwi r3, r3, 1
    add r4, r3, r4
    srwi r3, r4, 3
    mulli r5, r3, 0xe
    extlwi r3, r4, 28, 1
    subf r4, r5, r6
    add r0, r4, r0
    add r28, r0, r3
    addi r28, r28, 0x2
    b lbl_fn_80705880_000002E4
lbl_fn_80705880_000002CC:
    add r28, r26, r27
    subi r28, r28, 0x1
    b lbl_fn_80705880_000002E4
lbl_fn_80705880_000002D8:
    srwi r0, r26, 1
    add r3, r27, r0
    subi r28, r3, 0x1
lbl_fn_80705880_000002E4:
    bl OSDisableInterrupts
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    bne lbl_fn_80705880_000002FC
    bl OSRestoreInterrupts
    b lbl_fn_80705880_00000328
lbl_fn_80705880_000002FC:
    srwi r0, r31, 16
    sth r0, 0x9a(r4)
    lwz r4, 0x0(r30)
    sth r31, 0x9c(r4)
    lwz r5, 0x0(r30)
    lwz r4, 0x1c(r5)
    rlwinm. r0, r4, 0, 21, 21
    bne lbl_fn_80705880_00000324
    ori r0, r4, 0x1000
    stw r0, 0x1c(r5)
lbl_fn_80705880_00000324:
    bl OSRestoreInterrupts
lbl_fn_80705880_00000328:
    bl OSDisableInterrupts
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    bne lbl_fn_80705880_00000340
    bl OSRestoreInterrupts
    b lbl_fn_80705880_0000036C
lbl_fn_80705880_00000340:
    srwi r0, r28, 16
    sth r0, 0x9e(r4)
    lwz r4, 0x0(r30)
    sth r28, 0xa0(r4)
    lwz r5, 0x0(r30)
    lwz r4, 0x1c(r5)
    rlwinm. r0, r4, 0, 21, 21
    bne lbl_fn_80705880_00000368
    ori r0, r4, 0x2000
    stw r0, 0x1c(r5)
lbl_fn_80705880_00000368:
    bl OSRestoreInterrupts
lbl_fn_80705880_0000036C:
    bl OSDisableInterrupts
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    bne lbl_fn_80705880_00000384
    bl OSRestoreInterrupts
    b lbl_fn_80705880_000003A8
lbl_fn_80705880_00000384:
    li r0, 0x0
    sth r0, 0x96(r4)
    lwz r5, 0x0(r30)
    lwz r4, 0x1c(r5)
    rlwinm. r0, r4, 0, 21, 21
    bne lbl_fn_80705880_000003A4
    ori r0, r4, 0x800
    stw r0, 0x1c(r5)
lbl_fn_80705880_000003A4:
    bl OSRestoreInterrupts
lbl_fn_80705880_000003A8:
    mr r3, r29
    bl OSRestoreInterrupts
lbl_fn_80705880_000003B0:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80705A80(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    bl OSDisableInterrupts
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80705A80_00000414
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_80705A80_00000450
lbl_fn_80705A80_00000414:
    lwz r4, 0x10(r31)
    li r31, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_80705A80_00000448
    cmplw r29, r4
    li r0, 0x0
    bgt lbl_fn_80705A80_0000043C
    cmplw r4, r30
    bgt lbl_fn_80705A80_0000043C
    li r0, 0x1
lbl_fn_80705A80_0000043C:
    cmpwi r0, 0x0
    beq lbl_fn_80705A80_00000448
    li r31, 0x1
lbl_fn_80705A80_00000448:
    bl OSRestoreInterrupts
    mr r3, r31
lbl_fn_80705A80_00000450:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80705B20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r0, 0x0(r30)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_80705B20_000004AC
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_80705B20_00000604
lbl_fn_80705B20_000004AC:
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80705B20_000004C4
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_80705B20_00000604
lbl_fn_80705B20_000004C4:
    mr r3, r30
    bl fn_80705450
    cmpwi r3, 0x0
    beq lbl_fn_80705B20_00000570
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80705B20_000004F4
    lhz r3, 0x9e(r4)
    lhz r0, 0xa0(r4)
    slwi r3, r3, 16
    add r3, r3, r0
    b lbl_fn_80705B20_000004F8
lbl_fn_80705B20_000004F4:
    li r3, 0x0
lbl_fn_80705B20_000004F8:
    lwz r4, 0x10(r30)
    lwz r0, 0x14(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80705B20_0000050C
    addis r4, r4, 0x8000
lbl_fn_80705B20_0000050C:
    cmpwi r0, 0x3
    li r5, 0x0
    beq lbl_fn_80705B20_0000052C
    cmpwi r0, 0x2
    beq lbl_fn_80705B20_0000054C
    cmpwi r0, 0x1
    beq lbl_fn_80705B20_00000554
    b lbl_fn_80705B20_0000055C
lbl_fn_80705B20_0000052C:
    slwi r0, r4, 1
    subf r4, r0, r3
    srwi r0, r4, 4
    mulli r3, r0, 0xe
    clrlwi r0, r4, 28
    add r3, r0, r3
    subi r5, r3, 0x2
    b lbl_fn_80705B20_0000055C
lbl_fn_80705B20_0000054C:
    subf r5, r4, r3
    b lbl_fn_80705B20_0000055C
lbl_fn_80705B20_00000554:
    srwi r0, r4, 1
    subf r5, r0, r3
lbl_fn_80705B20_0000055C:
    mr r3, r31
    addi r31, r5, 0x1
    bl OSRestoreInterrupts
    mr r3, r31
    b lbl_fn_80705B20_00000604
lbl_fn_80705B20_00000570:
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80705B20_00000590
    lhz r3, 0xa2(r4)
    lhz r0, 0xa4(r4)
    slwi r3, r3, 16
    add r3, r3, r0
    b lbl_fn_80705B20_00000594
lbl_fn_80705B20_00000590:
    li r3, 0x0
lbl_fn_80705B20_00000594:
    lwz r4, 0x10(r30)
    lwz r0, 0x14(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80705B20_000005A8
    addis r4, r4, 0x8000
lbl_fn_80705B20_000005A8:
    cmpwi r0, 0x3
    li r30, 0x0
    beq lbl_fn_80705B20_000005C8
    cmpwi r0, 0x2
    beq lbl_fn_80705B20_000005E8
    cmpwi r0, 0x1
    beq lbl_fn_80705B20_000005F0
    b lbl_fn_80705B20_000005F8
lbl_fn_80705B20_000005C8:
    slwi r0, r4, 1
    subf r4, r0, r3
    srwi r0, r4, 4
    mulli r3, r0, 0xe
    clrlwi r0, r4, 28
    add r3, r0, r3
    subi r30, r3, 0x2
    b lbl_fn_80705B20_000005F8
lbl_fn_80705B20_000005E8:
    subf r30, r4, r3
    b lbl_fn_80705B20_000005F8
lbl_fn_80705B20_000005F0:
    srwi r0, r4, 1
    subf r30, r0, r3
lbl_fn_80705B20_000005F8:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
lbl_fn_80705B20_00000604:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80705CD0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r30, 0x14(r30)
    li r0, 0x0
    mr r31, r3
    stw r0, 0x0(r30)
    stw r0, 0x4(r30)
    bl fn_807080C0
    mr r4, r30
    bl fn_807088E0
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80705D30(void)
{
    nofralloc
    cmpwi r3, 0x0
    beq lbl_fn_80705D30_00000690
    addis r3, r3, 0x8000
lbl_fn_80705D30_00000690:
    cmpwi r5, 0x3
    li r0, 0x0
    beq lbl_fn_80705D30_000006B0
    cmpwi r5, 0x2
    beq lbl_fn_80705D30_000006D0
    cmpwi r5, 0x1
    beq lbl_fn_80705D30_000006D8
    b lbl_fn_80705D30_000006E0
lbl_fn_80705D30_000006B0:
    slwi r0, r3, 1
    subf r4, r0, r4
    srwi r0, r4, 4
    mulli r3, r0, 0xe
    clrlwi r0, r4, 28
    add r3, r0, r3
    subi r0, r3, 0x2
    b lbl_fn_80705D30_000006E0
lbl_fn_80705D30_000006D0:
    subf r0, r3, r4
    b lbl_fn_80705D30_000006E0
lbl_fn_80705D30_000006D8:
    srwi r0, r3, 1
    subf r0, r0, r4
lbl_fn_80705D30_000006E0:
    mr r3, r0
    blr
}

asm void fn_80705DA0(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beqlr
    b fn_80608230
    blr
}

asm void fn_80705DC0(void)
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
    bne lbl_fn_80705DC0_00000748
    bl OSRestoreInterrupts
    b lbl_fn_80705DC0_0000075C
lbl_fn_80705DC0_00000748:
    sth r31, 0x3a(r4)
    lwz r0, 0x4(r30)
    ori r0, r0, 0x8
    stw r0, 0x4(r30)
    bl OSRestoreInterrupts
lbl_fn_80705DC0_0000075C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80705E20(void)
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
    bne lbl_fn_80705E20_000007A8
    bl OSRestoreInterrupts
    b lbl_fn_80705E20_000007BC
lbl_fn_80705E20_000007A8:
    sth r31, 0xfe(r4)
    lwz r0, 0x4(r30)
    oris r0, r0, 0x80
    stw r0, 0x4(r30)
    bl OSRestoreInterrupts
lbl_fn_80705E20_000007BC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80705E80(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    bl OSDisableInterrupts
    lwz r0, 0x0(r31)
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_fn_80705E80_00000808
    bl OSRestoreInterrupts
    b lbl_fn_80705E80_0000090C
lbl_fn_80705E80_00000808:
    bl OSDisableInterrupts
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    bne lbl_fn_80705E80_00000820
    bl OSRestoreInterrupts
    b lbl_fn_80705E80_00000860
lbl_fn_80705E80_00000820:
    lha r4, 0x94(r4)
    li r0, 0x0
    lhz r6, 0x8(r31)
    mulli r5, r4, 0x60
    lwz r4, 0x0(r31)
    add r5, r6, r5
    sth r5, 0x8(r31)
    lhz r5, 0x8(r31)
    sth r5, 0x92(r4)
    lwz r4, 0x0(r31)
    sth r0, 0x94(r4)
    lwz r4, 0x0(r31)
    lwz r0, 0x1c(r4)
    ori r0, r0, 0x100
    stw r0, 0x1c(r4)
    bl OSRestoreInterrupts
lbl_fn_80705E80_00000860:
    lhz r0, 0x1e(r31)
    li r6, 0x0
    sth r0, 0x8(r1)
    mr r3, r31
    addi r4, r1, 0x8
    li r5, 0x1
    sth r6, 0xa(r1)
    lhz r0, 0x20(r31)
    sth r0, 0xc(r1)
    sth r6, 0xe(r1)
    lhz r0, 0x24(r31)
    sth r0, 0x10(r1)
    sth r6, 0x12(r1)
    lhz r0, 0x26(r31)
    sth r0, 0x14(r1)
    sth r6, 0x16(r1)
    lhz r0, 0x2a(r31)
    sth r0, 0x18(r1)
    sth r6, 0x1a(r1)
    lhz r0, 0x2c(r31)
    sth r0, 0x1c(r1)
    sth r6, 0x1e(r1)
    lhz r0, 0x30(r31)
    sth r0, 0x20(r1)
    sth r6, 0x22(r1)
    lhz r0, 0x32(r31)
    sth r0, 0x24(r1)
    sth r6, 0x26(r1)
    lhz r0, 0x22(r31)
    sth r0, 0x28(r1)
    sth r6, 0x2a(r1)
    lhz r0, 0x28(r31)
    sth r0, 0x2c(r1)
    sth r6, 0x2e(r1)
    lhz r0, 0x2e(r31)
    sth r0, 0x30(r1)
    sth r6, 0x32(r1)
    lhz r0, 0x34(r31)
    sth r0, 0x34(r1)
    sth r6, 0x36(r1)
    bl fn_807079E0
    mr r3, r30
    bl OSRestoreInterrupts
lbl_fn_80705E80_0000090C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80705FD0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    bl OSDisableInterrupts
    lwz r0, 0x0(r26)
    mr r25, r3
    cmpwi r0, 0x0
    bne lbl_fn_80705FD0_0000096C
    bl OSRestoreInterrupts
    b lbl_fn_80705FD0_00000CC0
lbl_fn_80705FD0_0000096C:
    cmplw r29, r31
    ble lbl_fn_80705FD0_00000A60
    bl fn_80703F90
    bl fn_807046A0
    cmpwi r3, 0x0
    lwz r6, 0x14(r26)
    mr r0, r3
    li r27, 0x0
    beq lbl_fn_80705FD0_00000994
    addis r0, r3, 0x8000
lbl_fn_80705FD0_00000994:
    cmpwi r6, 0x3
    li r4, 0x0
    beq lbl_fn_80705FD0_000009B4
    cmpwi r6, 0x2
    beq lbl_fn_80705FD0_000009C0
    cmpwi r6, 0x1
    beq lbl_fn_80705FD0_000009C8
    b lbl_fn_80705FD0_000009CC
lbl_fn_80705FD0_000009B4:
    slwi r4, r0, 1
    addi r4, r4, 0x2
    b lbl_fn_80705FD0_000009CC
lbl_fn_80705FD0_000009C0:
    mr r4, r0
    b lbl_fn_80705FD0_000009CC
lbl_fn_80705FD0_000009C8:
    srwi r4, r0, 1
lbl_fn_80705FD0_000009CC:
    cmpwi r3, 0x0
    mr r0, r3
    beq lbl_fn_80705FD0_000009DC
    addis r0, r3, 0x8000
lbl_fn_80705FD0_000009DC:
    cmpwi r6, 0x3
    li r5, 0x0
    beq lbl_fn_80705FD0_000009FC
    cmpwi r6, 0x2
    beq lbl_fn_80705FD0_00000A08
    cmpwi r6, 0x1
    beq lbl_fn_80705FD0_00000A10
    b lbl_fn_80705FD0_00000A14
lbl_fn_80705FD0_000009FC:
    slwi r5, r0, 1
    addi r5, r5, 0x2
    b lbl_fn_80705FD0_00000A14
lbl_fn_80705FD0_00000A08:
    mr r5, r0
    b lbl_fn_80705FD0_00000A14
lbl_fn_80705FD0_00000A10:
    srwi r5, r0, 1
lbl_fn_80705FD0_00000A14:
    cmpwi r3, 0x0
    beq lbl_fn_80705FD0_00000A20
    addis r3, r3, 0x8000
lbl_fn_80705FD0_00000A20:
    cmpwi r6, 0x3
    li r8, 0x0
    beq lbl_fn_80705FD0_00000A40
    cmpwi r6, 0x2
    beq lbl_fn_80705FD0_00000A4C
    cmpwi r6, 0x1
    beq lbl_fn_80705FD0_00000A54
    b lbl_fn_80705FD0_00000C3C
lbl_fn_80705FD0_00000A40:
    slwi r3, r3, 1
    addi r8, r3, 0x3
    b lbl_fn_80705FD0_00000C3C
lbl_fn_80705FD0_00000A4C:
    addi r8, r3, 0x1
    b lbl_fn_80705FD0_00000C3C
lbl_fn_80705FD0_00000A54:
    srwi r3, r3, 1
    addi r8, r3, 0x1
    b lbl_fn_80705FD0_00000C3C
lbl_fn_80705FD0_00000A60:
    cmpwi r27, 0x0
    beq lbl_fn_80705FD0_00000AEC
    cmpwi r28, 0x0
    lwz r0, 0x14(r26)
    mr r3, r28
    beq lbl_fn_80705FD0_00000A7C
    addis r3, r28, 0x8000
lbl_fn_80705FD0_00000A7C:
    cmpwi r0, 0x3
    li r5, 0x0
    beq lbl_fn_80705FD0_00000A9C
    cmpwi r0, 0x2
    beq lbl_fn_80705FD0_00000AD8
    cmpwi r0, 0x1
    beq lbl_fn_80705FD0_00000AE0
    b lbl_fn_80705FD0_00000B3C
lbl_fn_80705FD0_00000A9C:
    lis r4, 0x2492
    slwi r3, r3, 1
    addi r4, r4, 0x4925
    mulhwu r5, r4, r30
    subf r4, r5, r30
    srwi r4, r4, 1
    add r5, r4, r5
    srwi r4, r5, 3
    mulli r6, r4, 0xe
    extlwi r4, r5, 28, 1
    subf r5, r6, r30
    add r3, r5, r3
    add r5, r3, r4
    addi r5, r5, 0x2
    b lbl_fn_80705FD0_00000B3C
lbl_fn_80705FD0_00000AD8:
    add r5, r3, r30
    b lbl_fn_80705FD0_00000B3C
lbl_fn_80705FD0_00000AE0:
    srwi r3, r3, 1
    add r5, r3, r30
    b lbl_fn_80705FD0_00000B3C
lbl_fn_80705FD0_00000AEC:
    bl fn_80703F90
    bl fn_807046A0
    cmpwi r3, 0x0
    lwz r0, 0x14(r26)
    beq lbl_fn_80705FD0_00000B04
    addis r3, r3, 0x8000
lbl_fn_80705FD0_00000B04:
    cmpwi r0, 0x3
    li r5, 0x0
    beq lbl_fn_80705FD0_00000B24
    cmpwi r0, 0x2
    beq lbl_fn_80705FD0_00000B30
    cmpwi r0, 0x1
    beq lbl_fn_80705FD0_00000B38
    b lbl_fn_80705FD0_00000B3C
lbl_fn_80705FD0_00000B24:
    slwi r3, r3, 1
    addi r5, r3, 0x2
    b lbl_fn_80705FD0_00000B3C
lbl_fn_80705FD0_00000B30:
    mr r5, r3
    b lbl_fn_80705FD0_00000B3C
lbl_fn_80705FD0_00000B38:
    srwi r5, r3, 1
lbl_fn_80705FD0_00000B3C:
    cmpwi r28, 0x0
    mr r3, r28
    beq lbl_fn_80705FD0_00000B4C
    addis r3, r28, 0x8000
lbl_fn_80705FD0_00000B4C:
    cmpwi r0, 0x3
    li r4, 0x0
    beq lbl_fn_80705FD0_00000B6C
    cmpwi r0, 0x2
    beq lbl_fn_80705FD0_00000BA8
    cmpwi r0, 0x1
    beq lbl_fn_80705FD0_00000BB0
    b lbl_fn_80705FD0_00000BB8
lbl_fn_80705FD0_00000B6C:
    lis r4, 0x2492
    slwi r3, r3, 1
    addi r4, r4, 0x4925
    mulhwu r6, r4, r29
    subf r4, r6, r29
    srwi r4, r4, 1
    add r6, r4, r6
    srwi r4, r6, 3
    mulli r7, r4, 0xe
    extlwi r4, r6, 28, 1
    subf r6, r7, r29
    add r3, r6, r3
    add r4, r3, r4
    addi r4, r4, 0x2
    b lbl_fn_80705FD0_00000BB8
lbl_fn_80705FD0_00000BA8:
    add r4, r3, r29
    b lbl_fn_80705FD0_00000BB8
lbl_fn_80705FD0_00000BB0:
    srwi r3, r3, 1
    add r4, r3, r29
lbl_fn_80705FD0_00000BB8:
    cmpwi r28, 0x0
    beq lbl_fn_80705FD0_00000BC4
    addis r28, r28, 0x8000
lbl_fn_80705FD0_00000BC4:
    cmpwi r0, 0x3
    li r8, 0x0
    beq lbl_fn_80705FD0_00000BE4
    cmpwi r0, 0x2
    beq lbl_fn_80705FD0_00000C24
    cmpwi r0, 0x1
    beq lbl_fn_80705FD0_00000C30
    b lbl_fn_80705FD0_00000C3C
lbl_fn_80705FD0_00000BE4:
    lis r3, 0x2492
    subi r8, r31, 0x1
    addi r3, r3, 0x4925
    slwi r0, r28, 1
    mulhwu r6, r3, r8
    subf r3, r6, r8
    srwi r3, r3, 1
    add r6, r3, r6
    srwi r3, r6, 3
    mulli r7, r3, 0xe
    extlwi r3, r6, 28, 1
    subf r6, r7, r8
    add r0, r6, r0
    add r8, r0, r3
    addi r8, r8, 0x2
    b lbl_fn_80705FD0_00000C3C
lbl_fn_80705FD0_00000C24:
    add r8, r28, r31
    subi r8, r8, 0x1
    b lbl_fn_80705FD0_00000C3C
lbl_fn_80705FD0_00000C30:
    srwi r0, r28, 1
    add r3, r31, r0
    subi r8, r3, 0x1
lbl_fn_80705FD0_00000C3C:
    sth r27, 0x8(r1)
    lwz r0, 0x14(r26)
    cmpwi r0, 0x3
    beq lbl_fn_80705FD0_00000C60
    cmpwi r0, 0x2
    beq lbl_fn_80705FD0_00000C68
    cmpwi r0, 0x1
    beq lbl_fn_80705FD0_00000C70
    b lbl_fn_80705FD0_00000C78
lbl_fn_80705FD0_00000C60:
    li r7, 0x0
    b lbl_fn_80705FD0_00000C7C
lbl_fn_80705FD0_00000C68:
    li r7, 0x19
    b lbl_fn_80705FD0_00000C7C
lbl_fn_80705FD0_00000C70:
    li r7, 0xa
    b lbl_fn_80705FD0_00000C7C
lbl_fn_80705FD0_00000C78:
    li r7, 0x0
lbl_fn_80705FD0_00000C7C:
    srwi r6, r5, 16
    srwi r3, r8, 16
    srwi r0, r4, 16
    sth r7, 0xa(r1)
    sth r6, 0xc(r1)
    sth r5, 0xe(r1)
    sth r3, 0x10(r1)
    sth r8, 0x12(r1)
    sth r0, 0x14(r1)
    sth r4, 0x16(r1)
    lwz r3, 0x0(r26)
    cmpwi r3, 0x0
    beq lbl_fn_80705FD0_00000CB8
    addi r4, r1, 0x8
    bl fn_8060AED0
lbl_fn_80705FD0_00000CB8:
    mr r3, r25
    bl OSRestoreInterrupts
lbl_fn_80705FD0_00000CC0:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80706390(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    fmr f31, f1
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwz r0, 0x0(r29)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_80706390_00000D2C
    bl OSRestoreInterrupts
    b lbl_fn_80706390_00000DA0
lbl_fn_80706390_00000D2C:
    cmpwi r30, 0x5
    bne lbl_fn_80706390_00000D8C
    lwz r3, 0x18(r29)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    xoris r0, r3, 0x8000
    lfd f3, lbl_80889030
    stw r0, 0xc(r1)
    lfs f1, lbl_80889020
    lfd f2, 0x8(r1)
    lfs f0, lbl_80889024
    fsubs f2, f2, f3
    fmuls f2, f31, f2
    fdivs f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80706390_00000D74
    li r30, 0x2
    b lbl_fn_80706390_00000D8C
lbl_fn_80706390_00000D74:
    lfs f0, lbl_80889028
    fcmpo cr0, f1, f0
    ble lbl_fn_80706390_00000D88
    li r30, 0x3
    b lbl_fn_80706390_00000D8C
lbl_fn_80706390_00000D88:
    li r30, 0x4
lbl_fn_80706390_00000D8C:
    mr r3, r29
    mr r4, r30
    bl fn_80707C60
    mr r3, r31
    bl OSRestoreInterrupts
lbl_fn_80706390_00000DA0:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80706470(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwz r0, 0x0(r29)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_80706470_00000E00
    bl OSRestoreInterrupts
    b lbl_fn_80706470_00000EF0
lbl_fn_80706470_00000E00:
    lwz r0, 0x14(r29)
    cmpwi r0, 0x3
    beq lbl_fn_80706470_00000E20
    cmpwi r0, 0x1
    beq lbl_fn_80706470_00000E54
    cmpwi r0, 0x2
    beq lbl_fn_80706470_00000E80
    b lbl_fn_80706470_00000EA8
lbl_fn_80706470_00000E20:
    mr r4, r30
    addi r3, r1, 0x8
    li r5, 0x20
    bl memcpy
    lhz r5, 0x20(r30)
    lhz r4, 0x22(r30)
    lhz r3, 0x24(r30)
    lhz r0, 0x26(r30)
    sth r5, 0x28(r1)
    sth r4, 0x2a(r1)
    sth r3, 0x2c(r1)
    sth r0, 0x2e(r1)
    b lbl_fn_80706470_00000EA8
lbl_fn_80706470_00000E54:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x20
    bl memset
    li r0, 0x0
    li r3, 0x800
    sth r3, 0x28(r1)
    sth r0, 0x2a(r1)
    sth r0, 0x2c(r1)
    sth r0, 0x2e(r1)
    b lbl_fn_80706470_00000EA8
lbl_fn_80706470_00000E80:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x20
    bl memset
    li r0, 0x0
    li r3, 0x100
    sth r3, 0x28(r1)
    sth r0, 0x2a(r1)
    sth r0, 0x2c(r1)
    sth r0, 0x2e(r1)
lbl_fn_80706470_00000EA8:
    bl OSDisableInterrupts
    lwz r4, 0x0(r29)
    mr r30, r3
    cmpwi r4, 0x0
    bne lbl_fn_80706470_00000EC4
    bl OSRestoreInterrupts
    b lbl_fn_80706470_00000EE8
lbl_fn_80706470_00000EC4:
    addi r3, r4, 0xa6
    addi r4, r1, 0x8
    li r5, 0x28
    bl memcpy
    lwz r0, 0x4(r29)
    mr r3, r30
    ori r0, r0, 0x8000
    stw r0, 0x4(r29)
    bl OSRestoreInterrupts
lbl_fn_80706470_00000EE8:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_fn_80706470_00000EF0:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_807065C0(void)
{
    nofralloc
    lhz r5, 0x1e(r3)
    lhz r0, 0x0(r4)
    cmplw r5, r0
    beq lbl_fn_807065C0_00000F2C
    li r3, 0x1
    blr
lbl_fn_807065C0_00000F2C:
    lhz r5, 0x20(r3)
    lhz r0, 0x2(r4)
    cmplw r5, r0
    beq lbl_fn_807065C0_00000F44
    li r3, 0x1
    blr
lbl_fn_807065C0_00000F44:
    lhz r5, 0x22(r3)
    lhz r0, 0x4(r4)
    cmplw r5, r0
    beq lbl_fn_807065C0_00000F5C
    li r3, 0x1
    blr
lbl_fn_807065C0_00000F5C:
    lhz r5, 0x24(r3)
    lhz r0, 0x6(r4)
    cmplw r5, r0
    beq lbl_fn_807065C0_00000F74
    li r3, 0x1
    blr
lbl_fn_807065C0_00000F74:
    lhz r5, 0x26(r3)
    lhz r0, 0x8(r4)
    cmplw r5, r0
    beq lbl_fn_807065C0_00000F8C
    li r3, 0x1
    blr
lbl_fn_807065C0_00000F8C:
    lhz r5, 0x28(r3)
    lhz r0, 0xa(r4)
    cmplw r5, r0
    beq lbl_fn_807065C0_00000FA4
    li r3, 0x1
    blr
lbl_fn_807065C0_00000FA4:
    lhz r5, 0x2a(r3)
    lhz r0, 0xc(r4)
    cmplw r5, r0
    beq lbl_fn_807065C0_00000FBC
    li r3, 0x1
    blr
lbl_fn_807065C0_00000FBC:
    lhz r5, 0x2c(r3)
    lhz r0, 0xe(r4)
    cmplw r5, r0
    beq lbl_fn_807065C0_00000FD4
    li r3, 0x1
    blr
lbl_fn_807065C0_00000FD4:
    lhz r5, 0x2e(r3)
    lhz r0, 0x10(r4)
    cmplw r5, r0
    beq lbl_fn_807065C0_00000FEC
    li r3, 0x1
    blr
lbl_fn_807065C0_00000FEC:
    lhz r5, 0x30(r3)
    lhz r0, 0x12(r4)
    cmplw r5, r0
    beq lbl_fn_807065C0_00001004
    li r3, 0x1
    blr
lbl_fn_807065C0_00001004:
    lhz r5, 0x32(r3)
    lhz r0, 0x14(r4)
    cmplw r5, r0
    beq lbl_fn_807065C0_0000101C
    li r3, 0x1
    blr
lbl_fn_807065C0_0000101C:
    lhz r5, 0x34(r3)
    lhz r0, 0x16(r4)
    subf r3, r5, r0
    subf r0, r0, r5
    or r0, r3, r0
    srwi r3, r0, 31
    blr
}

asm void fn_807066F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwz r0, 0x0(r29)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_807066F0_00001080
    bl OSRestoreInterrupts
    b lbl_fn_807066F0_00001100
lbl_fn_807066F0_00001080:
    lwz r0, 0x14(r29)
    cmpwi r0, 0x3
    bne lbl_fn_807066F0_000010A8
    lhz r4, 0x0(r30)
    lhz r3, 0x2(r30)
    lhz r0, 0x4(r30)
    sth r4, 0x8(r1)
    sth r3, 0xa(r1)
    sth r0, 0xc(r1)
    b lbl_fn_807066F0_000010B8
lbl_fn_807066F0_000010A8:
    li r0, 0x0
    sth r0, 0x8(r1)
    sth r0, 0xa(r1)
    sth r0, 0xc(r1)
lbl_fn_807066F0_000010B8:
    bl OSDisableInterrupts
    lwz r4, 0x0(r29)
    mr r30, r3
    cmpwi r4, 0x0
    bne lbl_fn_807066F0_000010D4
    bl OSRestoreInterrupts
    b lbl_fn_807066F0_000010F8
lbl_fn_807066F0_000010D4:
    addi r3, r4, 0xdc
    addi r4, r1, 0x8
    li r5, 0x6
    bl memcpy
    lwz r0, 0x4(r29)
    mr r3, r30
    oris r0, r0, 0x4
    stw r0, 0x4(r29)
    bl OSRestoreInterrupts
lbl_fn_807066F0_000010F8:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_fn_807066F0_00001100:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_807067D0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_16
    mr r17, r3
    mr r18, r4
    bl OSDisableInterrupts
    lwz r4, 0x0(r17)
    mr r16, r3
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_fn_807067D0_00001160
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_807067D0_0000172C
lbl_fn_807067D0_00001160:
    lbz r0, 0x1c(r17)
    cmpwi r0, 0x0
    bne lbl_fn_807067D0_0000118C
    li r3, 0x0
    beq cr1, lbl_fn_807067D0_00001184
    lhz r0, 0x38(r4)
    cmplwi r0, 0x1
    bne lbl_fn_807067D0_00001184
    li r3, 0x1
lbl_fn_807067D0_00001184:
    cmpwi r3, 0x0
    bne lbl_fn_807067D0_000011F4
lbl_fn_807067D0_0000118C:
    lhz r20, 0x0(r18)
    li r0, 0x0
    lhz r19, 0x2(r18)
    lhz r12, 0x4(r18)
    lhz r11, 0x6(r18)
    lhz r10, 0x8(r18)
    lhz r9, 0xa(r18)
    lhz r8, 0xc(r18)
    lhz r7, 0xe(r18)
    lhz r6, 0x10(r18)
    lhz r5, 0x12(r18)
    lhz r4, 0x14(r18)
    lhz r3, 0x16(r18)
    sth r20, 0x1e(r17)
    sth r19, 0x20(r17)
    sth r12, 0x22(r17)
    sth r11, 0x24(r17)
    sth r10, 0x26(r17)
    sth r9, 0x28(r17)
    sth r8, 0x2a(r17)
    sth r7, 0x2c(r17)
    sth r6, 0x2e(r17)
    sth r5, 0x30(r17)
    sth r4, 0x32(r17)
    sth r3, 0x34(r17)
    stb r0, 0x1c(r17)
lbl_fn_807067D0_000011F4:
    mr r3, r17
    mr r4, r18
    bl fn_807065C0
    lhz r4, 0x1e(r17)
    mr r19, r3
    sth r4, 0x8(r1)
    lhz r5, 0x0(r18)
    lhz r0, 0x20(r17)
    sth r0, 0xc(r1)
    cmplw r4, r5
    lhz r0, 0x22(r17)
    sth r0, 0x28(r1)
    lhz r0, 0x24(r17)
    sth r0, 0x10(r1)
    lhz r0, 0x26(r17)
    sth r0, 0x14(r1)
    lhz r0, 0x28(r17)
    sth r0, 0x2c(r1)
    lhz r0, 0x2a(r17)
    sth r0, 0x18(r1)
    lhz r0, 0x2c(r17)
    sth r0, 0x1c(r1)
    lhz r0, 0x2e(r17)
    sth r0, 0x30(r1)
    lhz r0, 0x30(r17)
    sth r0, 0x20(r1)
    lhz r0, 0x32(r17)
    sth r0, 0x24(r1)
    lhz r0, 0x34(r17)
    sth r0, 0x34(r1)
    bne lbl_fn_807067D0_00001278
    li r31, 0x0
    b lbl_fn_807067D0_00001294
lbl_fn_807067D0_00001278:
    lis r3, 0x2aab
    subf r0, r4, r5
    subi r3, r3, 0x5555
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r31, r0, r3
lbl_fn_807067D0_00001294:
    lhz r4, 0x2(r18)
    lhz r0, 0x20(r17)
    cmplw r0, r4
    bne lbl_fn_807067D0_000012AC
    li r30, 0x0
    b lbl_fn_807067D0_000012C8
lbl_fn_807067D0_000012AC:
    lis r3, 0x2aab
    subf r0, r0, r4
    subi r3, r3, 0x5555
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r30, r0, r3
lbl_fn_807067D0_000012C8:
    lhz r4, 0x4(r18)
    lhz r0, 0x22(r17)
    cmplw r0, r4
    bne lbl_fn_807067D0_000012E0
    li r29, 0x0
    b lbl_fn_807067D0_000012FC
lbl_fn_807067D0_000012E0:
    lis r3, 0x2aab
    subf r0, r0, r4
    subi r3, r3, 0x5555
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r29, r0, r3
lbl_fn_807067D0_000012FC:
    lhz r4, 0x6(r18)
    lhz r0, 0x24(r17)
    cmplw r0, r4
    bne lbl_fn_807067D0_00001314
    li r28, 0x0
    b lbl_fn_807067D0_00001330
lbl_fn_807067D0_00001314:
    lis r3, 0x2aab
    subf r0, r0, r4
    subi r3, r3, 0x5555
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r28, r0, r3
lbl_fn_807067D0_00001330:
    lhz r4, 0x8(r18)
    lhz r0, 0x26(r17)
    cmplw r0, r4
    bne lbl_fn_807067D0_00001348
    li r27, 0x0
    b lbl_fn_807067D0_00001364
lbl_fn_807067D0_00001348:
    lis r3, 0x2aab
    subf r0, r0, r4
    subi r3, r3, 0x5555
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r27, r0, r3
lbl_fn_807067D0_00001364:
    lhz r4, 0xa(r18)
    lhz r0, 0x28(r17)
    cmplw r0, r4
    bne lbl_fn_807067D0_0000137C
    li r26, 0x0
    b lbl_fn_807067D0_00001398
lbl_fn_807067D0_0000137C:
    lis r3, 0x2aab
    subf r0, r0, r4
    subi r3, r3, 0x5555
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r26, r0, r3
lbl_fn_807067D0_00001398:
    lhz r4, 0xc(r18)
    lhz r0, 0x2a(r17)
    cmplw r0, r4
    bne lbl_fn_807067D0_000013B0
    li r25, 0x0
    b lbl_fn_807067D0_000013CC
lbl_fn_807067D0_000013B0:
    lis r3, 0x2aab
    subf r0, r0, r4
    subi r3, r3, 0x5555
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r25, r0, r3
lbl_fn_807067D0_000013CC:
    lhz r4, 0xe(r18)
    lhz r0, 0x2c(r17)
    cmplw r0, r4
    bne lbl_fn_807067D0_000013E4
    li r24, 0x0
    b lbl_fn_807067D0_00001400
lbl_fn_807067D0_000013E4:
    lis r3, 0x2aab
    subf r0, r0, r4
    subi r3, r3, 0x5555
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r24, r0, r3
lbl_fn_807067D0_00001400:
    lhz r4, 0x10(r18)
    lhz r0, 0x2e(r17)
    cmplw r0, r4
    bne lbl_fn_807067D0_00001418
    li r23, 0x0
    b lbl_fn_807067D0_00001434
lbl_fn_807067D0_00001418:
    lis r3, 0x2aab
    subf r0, r0, r4
    subi r3, r3, 0x5555
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r23, r0, r3
lbl_fn_807067D0_00001434:
    lhz r4, 0x12(r18)
    lhz r0, 0x30(r17)
    cmplw r0, r4
    bne lbl_fn_807067D0_0000144C
    li r22, 0x0
    b lbl_fn_807067D0_00001468
lbl_fn_807067D0_0000144C:
    lis r3, 0x2aab
    subf r0, r0, r4
    subi r3, r3, 0x5555
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r22, r0, r3
lbl_fn_807067D0_00001468:
    lhz r4, 0x14(r18)
    lhz r0, 0x32(r17)
    cmplw r0, r4
    bne lbl_fn_807067D0_00001480
    li r21, 0x0
    b lbl_fn_807067D0_0000149C
lbl_fn_807067D0_00001480:
    lis r3, 0x2aab
    subf r0, r0, r4
    subi r3, r3, 0x5555
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r21, r0, r3
lbl_fn_807067D0_0000149C:
    lhz r4, 0x16(r18)
    lhz r0, 0x34(r17)
    cmplw r0, r4
    bne lbl_fn_807067D0_000014B4
    li r20, 0x0
    b lbl_fn_807067D0_000014D0
lbl_fn_807067D0_000014B4:
    lis r3, 0x2aab
    subf r0, r0, r4
    subi r3, r3, 0x5555
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r20, r0, r3
lbl_fn_807067D0_000014D0:
    sth r31, 0xa(r1)
    mr r3, r17
    addi r4, r1, 0x8
    li r5, 0x0
    sth r30, 0xe(r1)
    sth r29, 0x2a(r1)
    sth r28, 0x12(r1)
    sth r27, 0x16(r1)
    sth r26, 0x2e(r1)
    sth r25, 0x1a(r1)
    sth r24, 0x1e(r1)
    sth r23, 0x32(r1)
    sth r22, 0x22(r1)
    sth r21, 0x26(r1)
    sth r20, 0x36(r1)
    bl fn_807079E0
    lhz r0, 0x0(r18)
    cmpwi r0, 0x0
    beq lbl_fn_807067D0_00001524
    cmpwi r31, 0x0
    bne lbl_fn_807067D0_0000152C
lbl_fn_807067D0_00001524:
    sth r0, 0x1e(r17)
    b lbl_fn_807067D0_0000153C
lbl_fn_807067D0_0000152C:
    mulli r0, r31, 0x60
    lhz r3, 0x1e(r17)
    add r0, r3, r0
    sth r0, 0x1e(r17)
lbl_fn_807067D0_0000153C:
    lhz r0, 0x2(r18)
    cmpwi r0, 0x0
    beq lbl_fn_807067D0_00001550
    cmpwi r30, 0x0
    bne lbl_fn_807067D0_00001558
lbl_fn_807067D0_00001550:
    sth r0, 0x20(r17)
    b lbl_fn_807067D0_00001568
lbl_fn_807067D0_00001558:
    mulli r0, r30, 0x60
    lhz r3, 0x20(r17)
    add r0, r3, r0
    sth r0, 0x20(r17)
lbl_fn_807067D0_00001568:
    lhz r0, 0x4(r18)
    cmpwi r0, 0x0
    beq lbl_fn_807067D0_0000157C
    cmpwi r29, 0x0
    bne lbl_fn_807067D0_00001584
lbl_fn_807067D0_0000157C:
    sth r0, 0x22(r17)
    b lbl_fn_807067D0_00001594
lbl_fn_807067D0_00001584:
    mulli r0, r29, 0x60
    lhz r3, 0x22(r17)
    add r0, r3, r0
    sth r0, 0x22(r17)
lbl_fn_807067D0_00001594:
    lhz r0, 0x6(r18)
    cmpwi r0, 0x0
    beq lbl_fn_807067D0_000015A8
    cmpwi r28, 0x0
    bne lbl_fn_807067D0_000015B0
lbl_fn_807067D0_000015A8:
    sth r0, 0x24(r17)
    b lbl_fn_807067D0_000015C0
lbl_fn_807067D0_000015B0:
    mulli r0, r28, 0x60
    lhz r3, 0x24(r17)
    add r0, r3, r0
    sth r0, 0x24(r17)
lbl_fn_807067D0_000015C0:
    lhz r0, 0x8(r18)
    cmpwi r0, 0x0
    beq lbl_fn_807067D0_000015D4
    cmpwi r27, 0x0
    bne lbl_fn_807067D0_000015DC
lbl_fn_807067D0_000015D4:
    sth r0, 0x26(r17)
    b lbl_fn_807067D0_000015EC
lbl_fn_807067D0_000015DC:
    mulli r0, r27, 0x60
    lhz r3, 0x26(r17)
    add r0, r3, r0
    sth r0, 0x26(r17)
lbl_fn_807067D0_000015EC:
    lhz r0, 0xa(r18)
    cmpwi r0, 0x0
    beq lbl_fn_807067D0_00001600
    cmpwi r26, 0x0
    bne lbl_fn_807067D0_00001608
lbl_fn_807067D0_00001600:
    sth r0, 0x28(r17)
    b lbl_fn_807067D0_00001618
lbl_fn_807067D0_00001608:
    mulli r0, r26, 0x60
    lhz r3, 0x28(r17)
    add r0, r3, r0
    sth r0, 0x28(r17)
lbl_fn_807067D0_00001618:
    lhz r0, 0xc(r18)
    cmpwi r0, 0x0
    beq lbl_fn_807067D0_0000162C
    cmpwi r25, 0x0
    bne lbl_fn_807067D0_00001634
lbl_fn_807067D0_0000162C:
    sth r0, 0x2a(r17)
    b lbl_fn_807067D0_00001644
lbl_fn_807067D0_00001634:
    mulli r0, r25, 0x60
    lhz r3, 0x2a(r17)
    add r0, r3, r0
    sth r0, 0x2a(r17)
lbl_fn_807067D0_00001644:
    lhz r0, 0xe(r18)
    cmpwi r0, 0x0
    beq lbl_fn_807067D0_00001658
    cmpwi r24, 0x0
    bne lbl_fn_807067D0_00001660
lbl_fn_807067D0_00001658:
    sth r0, 0x2c(r17)
    b lbl_fn_807067D0_00001670
lbl_fn_807067D0_00001660:
    mulli r0, r24, 0x60
    lhz r3, 0x2c(r17)
    add r0, r3, r0
    sth r0, 0x2c(r17)
lbl_fn_807067D0_00001670:
    lhz r0, 0x10(r18)
    cmpwi r0, 0x0
    beq lbl_fn_807067D0_00001684
    cmpwi r23, 0x0
    bne lbl_fn_807067D0_0000168C
lbl_fn_807067D0_00001684:
    sth r0, 0x2e(r17)
    b lbl_fn_807067D0_0000169C
lbl_fn_807067D0_0000168C:
    mulli r0, r23, 0x60
    lhz r3, 0x2e(r17)
    add r0, r3, r0
    sth r0, 0x2e(r17)
lbl_fn_807067D0_0000169C:
    lhz r0, 0x12(r18)
    cmpwi r0, 0x0
    beq lbl_fn_807067D0_000016B0
    cmpwi r22, 0x0
    bne lbl_fn_807067D0_000016B8
lbl_fn_807067D0_000016B0:
    sth r0, 0x30(r17)
    b lbl_fn_807067D0_000016C8
lbl_fn_807067D0_000016B8:
    mulli r0, r22, 0x60
    lhz r3, 0x30(r17)
    add r0, r3, r0
    sth r0, 0x30(r17)
lbl_fn_807067D0_000016C8:
    lhz r0, 0x14(r18)
    cmpwi r0, 0x0
    beq lbl_fn_807067D0_000016DC
    cmpwi r21, 0x0
    bne lbl_fn_807067D0_000016E4
lbl_fn_807067D0_000016DC:
    sth r0, 0x32(r17)
    b lbl_fn_807067D0_000016F4
lbl_fn_807067D0_000016E4:
    mulli r0, r21, 0x60
    lhz r3, 0x32(r17)
    add r0, r3, r0
    sth r0, 0x32(r17)
lbl_fn_807067D0_000016F4:
    lhz r0, 0x16(r18)
    cmpwi r0, 0x0
    beq lbl_fn_807067D0_00001708
    cmpwi r20, 0x0
    bne lbl_fn_807067D0_00001710
lbl_fn_807067D0_00001708:
    sth r0, 0x34(r17)
    b lbl_fn_807067D0_00001720
lbl_fn_807067D0_00001710:
    mulli r0, r20, 0x60
    lhz r3, 0x34(r17)
    add r0, r3, r0
    sth r0, 0x34(r17)
lbl_fn_807067D0_00001720:
    mr r3, r16
    bl OSRestoreInterrupts
    mr r3, r19
lbl_fn_807067D0_0000172C:
    addi r11, r1, 0x80
    bl _restgpr_16
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80706DF0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lhz r12, 0x0(r4)
    li r11, 0x0
    stw r0, 0x34(r1)
    lhz r10, 0x2(r4)
    lhz r9, 0x4(r4)
    lhz r8, 0x6(r4)
    lhz r7, 0x8(r4)
    lhz r6, 0xa(r4)
    lhz r5, 0xc(r4)
    lhz r0, 0xe(r4)
    addi r4, r1, 0x8
    sth r12, 0x8(r1)
    sth r11, 0xa(r1)
    sth r10, 0xc(r1)
    sth r11, 0xe(r1)
    sth r9, 0x10(r1)
    sth r11, 0x12(r1)
    sth r8, 0x14(r1)
    sth r11, 0x16(r1)
    sth r7, 0x18(r1)
    sth r11, 0x1a(r1)
    sth r6, 0x1c(r1)
    sth r11, 0x1e(r1)
    sth r5, 0x20(r1)
    sth r11, 0x22(r1)
    sth r0, 0x24(r1)
    sth r11, 0x26(r1)
    bl fn_80707D40
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80706E80(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    fmr f31, f1
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r4
    bl OSDisableInterrupts
    lwz r0, 0x0(r31)
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_fn_80706E80_00001820
    bl OSRestoreInterrupts
    b lbl_fn_80706E80_00001978
lbl_fn_80706E80_00001820:
    cmpwi r28, 0x0
    beq lbl_fn_80706E80_000018F0
    lwz r3, 0x18(r31)
    lis r0, 0x4330
    stw r0, 0x18(r1)
    xoris r0, r3, 0x8000
    lfd f2, lbl_80889030
    stw r0, 0x1c(r1)
    lfs f0, lbl_80889020
    lfd f1, 0x18(r1)
    lfs f3, lbl_80889038
    fsubs f1, f1, f2
    fmuls f1, f31, f1
    fdivs f0, f1, f0
    fcmpo cr0, f0, f3
    ble lbl_fn_80706E80_00001864
    b lbl_fn_80706E80_00001878
lbl_fn_80706E80_00001864:
    lfs f3, lbl_8088903C
    fcmpo cr0, f0, f3
    bge lbl_fn_80706E80_00001874
    b lbl_fn_80706E80_00001878
lbl_fn_80706E80_00001874:
    fmr f3, f0
lbl_fn_80706E80_00001878:
    lfs f0, lbl_80889040
    fmuls f1, f0, f3
    bl fn_80695D84
    li r0, 0x0
    srwi r4, r3, 16
    sth r4, 0x8(r1)
    sth r3, 0xa(r1)
    sth r0, 0xc(r1)
    sth r0, 0xe(r1)
    sth r0, 0x10(r1)
    sth r0, 0x12(r1)
    sth r0, 0x14(r1)
    bl OSDisableInterrupts
    lwz r4, 0x0(r31)
    mr r29, r3
    cmpwi r4, 0x0
    bne lbl_fn_80706E80_000018C4
    bl OSRestoreInterrupts
    b lbl_fn_80706E80_00001970
lbl_fn_80706E80_000018C4:
    addi r3, r4, 0xce
    addi r4, r1, 0x8
    li r5, 0xe
    bl memcpy
    lwz r0, 0x4(r31)
    mr r3, r29
    rlwinm r0, r0, 0, 15, 13
    oris r0, r0, 0x1
    stw r0, 0x4(r31)
    bl OSRestoreInterrupts
    b lbl_fn_80706E80_00001970
lbl_fn_80706E80_000018F0:
    lwz r3, 0x18(r31)
    lis r0, 0x4330
    stw r0, 0x18(r1)
    xoris r0, r3, 0x8000
    lfd f2, lbl_80889030
    stw r0, 0x1c(r1)
    lfs f0, lbl_80889020
    lfd f1, 0x18(r1)
    fsubs f1, f1, f2
    fmuls f1, f31, f1
    fdivs f31, f1, f0
    bl OSDisableInterrupts
    lwz r28, 0x0(r31)
    mr r29, r3
    cmpwi r28, 0x0
    bne lbl_fn_80706E80_00001938
    bl OSRestoreInterrupts
    b lbl_fn_80706E80_00001970
lbl_fn_80706E80_00001938:
    lfs f0, lbl_80889040
    fmuls f1, f0, f31
    bl fn_80695D84
    srwi r0, r3, 16
    sth r0, 0xce(r28)
    lwz r4, 0x0(r31)
    sth r3, 0xd0(r4)
    lwz r3, 0x4(r31)
    rlwinm. r0, r3, 0, 15, 15
    bne lbl_fn_80706E80_00001968
    oris r0, r3, 0x2
    stw r0, 0x4(r31)
lbl_fn_80706E80_00001968:
    mr r3, r29
    bl OSRestoreInterrupts
lbl_fn_80706E80_00001970:
    mr r3, r30
    bl OSRestoreInterrupts
lbl_fn_80706E80_00001978:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80707050(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    fmr f31, f2
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    fmr f30, f1
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r3
    bl OSDisableInterrupts
    lwz r0, 0x0(r28)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_80707050_000019F8
    bl OSRestoreInterrupts
    b lbl_fn_80707050_00001A94
lbl_fn_80707050_000019F8:
    lfs f0, lbl_80889044
    lis r3, 0x1
    subi r30, r3, 0x1
    fmuls f1, f0, f30
    fmuls f0, f0, f31
    fctiwz f1, f1
    fctiwz f0, f0
    stfd f1, 0x8(r1)
    lwz r3, 0xc(r1)
    stfd f0, 0x10(r1)
    cmpw r3, r30
    lwz r4, 0x14(r1)
    ble lbl_fn_80707050_00001A30
    b lbl_fn_80707050_00001A38
lbl_fn_80707050_00001A30:
    srawi r0, r3, 31
    andc r30, r3, r0
lbl_fn_80707050_00001A38:
    lis r3, 0x1
    subi r29, r3, 0x1
    cmpw r4, r29
    ble lbl_fn_80707050_00001A4C
    b lbl_fn_80707050_00001A54
lbl_fn_80707050_00001A4C:
    srawi r0, r4, 31
    andc r29, r4, r0
lbl_fn_80707050_00001A54:
    bl OSDisableInterrupts
    lwz r0, 0x0(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80707050_00001A6C
    bl OSRestoreInterrupts
    b lbl_fn_80707050_00001A8C
lbl_fn_80707050_00001A6C:
    lbz r0, 0xc(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80707050_00001A84
    li r0, 0x0
    sth r29, 0x8(r28)
    stb r0, 0xc(r28)
lbl_fn_80707050_00001A84:
    sth r30, 0xe(r28)
    bl OSRestoreInterrupts
lbl_fn_80707050_00001A8C:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_fn_80707050_00001A94:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80707170(void)
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
    mr r28, r4
    bl OSDisableInterrupts
    lwz r4, 0x0(r31)
    mr r30, r3
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_fn_80707170_00001B04
    bl OSRestoreInterrupts
    b lbl_fn_80707170_00001C34
lbl_fn_80707170_00001B04:
    cmplwi r28, 0x3e80
    blt lbl_fn_80707170_00001B5C
    li r0, 0x0
    sth r0, 0x18(r1)
    sth r0, 0x1a(r1)
    bl OSDisableInterrupts
    lwz r4, 0x0(r31)
    mr r29, r3
    cmpwi r4, 0x0
    bne lbl_fn_80707170_00001B34
    bl OSRestoreInterrupts
    b lbl_fn_80707170_00001C2C
lbl_fn_80707170_00001B34:
    addi r3, r4, 0xe2
    addi r4, r1, 0x18
    li r5, 0x8
    bl memcpy
    lwz r0, 0x4(r31)
    mr r3, r29
    oris r0, r0, 0x8
    stw r0, 0x4(r31)
    bl OSRestoreInterrupts
    b lbl_fn_80707170_00001C2C
lbl_fn_80707170_00001B5C:
    li r3, 0x0
    beq cr1, lbl_fn_80707170_00001B74
    lhz r0, 0xe2(r4)
    cmplwi r0, 0x1
    bne lbl_fn_80707170_00001B74
    li r3, 0x1
lbl_fn_80707170_00001B74:
    cmpwi r3, 0x0
    beq lbl_fn_80707170_00001BCC
    mr r3, r28
    addi r4, r1, 0xa
    addi r5, r1, 0x8
    bl fn_8060AFC0
    lhz r28, 0x8(r1)
    lhz r29, 0xa(r1)
    bl OSDisableInterrupts
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    bne lbl_fn_80707170_00001BAC
    bl OSRestoreInterrupts
    b lbl_fn_80707170_00001C2C
lbl_fn_80707170_00001BAC:
    sth r29, 0xe6(r4)
    lwz r4, 0x0(r31)
    sth r28, 0xe8(r4)
    lwz r0, 0x4(r31)
    oris r0, r0, 0x10
    stw r0, 0x4(r31)
    bl OSRestoreInterrupts
    b lbl_fn_80707170_00001C2C
lbl_fn_80707170_00001BCC:
    li r3, 0x1
    li r0, 0x0
    sth r3, 0x10(r1)
    mr r3, r28
    addi r4, r1, 0x14
    addi r5, r1, 0x16
    sth r0, 0x12(r1)
    bl fn_8060AFC0
    bl OSDisableInterrupts
    lwz r4, 0x0(r31)
    mr r29, r3
    cmpwi r4, 0x0
    bne lbl_fn_80707170_00001C08
    bl OSRestoreInterrupts
    b lbl_fn_80707170_00001C2C
lbl_fn_80707170_00001C08:
    addi r3, r4, 0xe2
    addi r4, r1, 0x10
    li r5, 0x8
    bl memcpy
    lwz r0, 0x4(r31)
    mr r3, r29
    oris r0, r0, 0x8
    stw r0, 0x4(r31)
    bl OSRestoreInterrupts
lbl_fn_80707170_00001C2C:
    mr r3, r30
    bl OSRestoreInterrupts
lbl_fn_80707170_00001C34:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80707300(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x68
    stfd f31, 0x68(r1)
    bl _savegpr_25
    fmr f31, f1
    mr r31, r3
    mr r25, r4
    bl OSDisableInterrupts
    lwz r0, 0x0(r31)
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_fn_80707300_00001C94
    bl OSRestoreInterrupts
    b lbl_fn_80707300_00001E5C
lbl_fn_80707300_00001C94:
    bl fn_80703F90
    lis r3, lbl_80862C20@ha
    cmpwi r25, 0x0
    clrlslwi r0, r25, 24, 2
    li r4, 0x1
    addi r3, r3, lbl_80862C20@l
    lwzx r3, r3, r0
    bne lbl_fn_80707300_00001CB8
    li r4, 0x0
lbl_fn_80707300_00001CB8:
    cmpwi r3, 0x0
    bne lbl_fn_80707300_00001CC4
    li r4, 0x0
lbl_fn_80707300_00001CC4:
    cmpwi r4, 0x0
    bne lbl_fn_80707300_00001D28
    li r0, 0x0
    sth r0, 0x28(r1)
    sth r0, 0x2a(r1)
    sth r0, 0x2c(r1)
    sth r0, 0x2e(r1)
    sth r0, 0x30(r1)
    bl OSDisableInterrupts
    lwz r4, 0x0(r31)
    mr r29, r3
    cmpwi r4, 0x0
    bne lbl_fn_80707300_00001D00
    bl OSRestoreInterrupts
    b lbl_fn_80707300_00001E54
lbl_fn_80707300_00001D00:
    addi r3, r4, 0xea
    addi r4, r1, 0x28
    li r5, 0x14
    bl memcpy
    lwz r0, 0x4(r31)
    mr r3, r29
    oris r0, r0, 0x20
    stw r0, 0x4(r31)
    bl OSRestoreInterrupts
    b lbl_fn_80707300_00001E54
lbl_fn_80707300_00001D28:
    lwz r12, 0x0(r3)
    fmr f1, f31
    mr r4, r25
    addi r5, r1, 0x8
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r4, 0x0(r31)
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_80707300_00001D64
    lhz r0, 0xea(r4)
    cmplwi r0, 0x2
    bne lbl_fn_80707300_00001D64
    li r3, 0x1
lbl_fn_80707300_00001D64:
    cmpwi r3, 0x0
    beq lbl_fn_80707300_00001DD0
    lhz r25, 0x10(r1)
    lhz r26, 0xe(r1)
    lhz r27, 0xc(r1)
    lhz r28, 0xa(r1)
    lhz r29, 0x8(r1)
    bl OSDisableInterrupts
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    bne lbl_fn_80707300_00001D98
    bl OSRestoreInterrupts
    b lbl_fn_80707300_00001E54
lbl_fn_80707300_00001D98:
    sth r29, 0xf4(r4)
    lwz r4, 0x0(r31)
    sth r28, 0xf6(r4)
    lwz r4, 0x0(r31)
    sth r27, 0xf8(r4)
    lwz r4, 0x0(r31)
    sth r26, 0xfa(r4)
    lwz r4, 0x0(r31)
    sth r25, 0xfc(r4)
    lwz r0, 0x4(r31)
    oris r0, r0, 0x40
    stw r0, 0x4(r31)
    bl OSRestoreInterrupts
    b lbl_fn_80707300_00001E54
lbl_fn_80707300_00001DD0:
    lhz r6, 0x8(r1)
    li r7, 0x0
    lhz r5, 0xa(r1)
    li r8, 0x2
    lhz r4, 0xc(r1)
    lhz r3, 0xe(r1)
    lhz r0, 0x10(r1)
    sth r8, 0x14(r1)
    sth r7, 0x16(r1)
    sth r7, 0x18(r1)
    sth r7, 0x1a(r1)
    sth r7, 0x1c(r1)
    sth r6, 0x1e(r1)
    sth r5, 0x20(r1)
    sth r4, 0x22(r1)
    sth r3, 0x24(r1)
    sth r0, 0x26(r1)
    bl OSDisableInterrupts
    lwz r4, 0x0(r31)
    mr r29, r3
    cmpwi r4, 0x0
    bne lbl_fn_80707300_00001E30
    bl OSRestoreInterrupts
    b lbl_fn_80707300_00001E54
lbl_fn_80707300_00001E30:
    addi r3, r4, 0xea
    addi r4, r1, 0x14
    li r5, 0x14
    bl memcpy
    lwz r0, 0x4(r31)
    mr r3, r29
    oris r0, r0, 0x20
    stw r0, 0x4(r31)
    bl OSRestoreInterrupts
lbl_fn_80707300_00001E54:
    mr r3, r30
    bl OSRestoreInterrupts
lbl_fn_80707300_00001E5C:
    addi r11, r1, 0x68
    lfd f31, 0x68(r1)
    bl _restgpr_25
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80707530(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwz r4, 0x0(r29)
    mr r31, r3
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_fn_80707530_00001EC0
    bl OSRestoreInterrupts
    b lbl_fn_80707530_00001FF8
lbl_fn_80707530_00001EC0:
    cmpwi r30, 0x0
    bne lbl_fn_80707530_00001F14
    li r0, 0x0
    sth r0, 0x28(r1)
    bl OSDisableInterrupts
    lwz r4, 0x0(r29)
    mr r30, r3
    cmpwi r4, 0x0
    bne lbl_fn_80707530_00001EEC
    bl OSRestoreInterrupts
    b lbl_fn_80707530_00001FF0
lbl_fn_80707530_00001EEC:
    addi r3, r4, 0x13c
    addi r4, r1, 0x28
    li r5, 0x14
    bl memcpy
    lwz r0, 0x4(r29)
    mr r3, r30
    oris r0, r0, 0x1000
    stw r0, 0x4(r29)
    bl OSRestoreInterrupts
    b lbl_fn_80707530_00001FF0
lbl_fn_80707530_00001F14:
    li r3, 0x0
    beq cr1, lbl_fn_80707530_00001F2C
    lhz r0, 0x13c(r4)
    cmplwi r0, 0x2
    bne lbl_fn_80707530_00001F2C
    li r3, 0x1
lbl_fn_80707530_00001F2C:
    cmpwi r3, 0x0
    beq lbl_fn_80707530_00001F78
    mr r3, r30
    addi r4, r1, 0x10
    addi r5, r1, 0xe
    addi r6, r1, 0xc
    addi r7, r1, 0xa
    addi r8, r1, 0x8
    bl fn_80721090
    lhz r5, 0x10(r1)
    mr r3, r29
    lhz r6, 0xe(r1)
    li r4, 0x2
    lhz r7, 0xc(r1)
    lhz r8, 0xa(r1)
    lhz r9, 0x8(r1)
    crclr 6
    bl fn_80707F30
    b lbl_fn_80707530_00001FF0
lbl_fn_80707530_00001F78:
    li r0, 0x0
    li r3, 0x2
    sth r3, 0x14(r1)
    mr r3, r30
    addi r4, r1, 0x1e
    addi r5, r1, 0x20
    sth r0, 0x16(r1)
    addi r6, r1, 0x22
    addi r7, r1, 0x24
    addi r8, r1, 0x26
    sth r0, 0x18(r1)
    sth r0, 0x1a(r1)
    sth r0, 0x1c(r1)
    bl fn_80721090
    bl OSDisableInterrupts
    lwz r4, 0x0(r29)
    mr r30, r3
    cmpwi r4, 0x0
    bne lbl_fn_80707530_00001FCC
    bl OSRestoreInterrupts
    b lbl_fn_80707530_00001FF0
lbl_fn_80707530_00001FCC:
    addi r3, r4, 0x13c
    addi r4, r1, 0x14
    li r5, 0x14
    bl memcpy
    lwz r0, 0x4(r29)
    mr r3, r30
    oris r0, r0, 0x1000
    stw r0, 0x4(r29)
    bl OSRestoreInterrupts
lbl_fn_80707530_00001FF0:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_fn_80707530_00001FF8:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
