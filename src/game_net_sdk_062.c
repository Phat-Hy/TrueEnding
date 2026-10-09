#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);
extern void __register_global_object(void);
extern void _restgpr_23(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_805F3130(void);
extern void fn_805F3210(void);
extern void fn_8060AE60(void);
extern void fn_80705A80(void);
extern void fn_80705D30(void);
extern void fn_80709700(void);
extern void fn_807097C0(void);
extern void fn_80709870(void);
extern void fn_8070A9F0(void);
extern void fn_8070AC10(void);
extern void fn_8070C090(void);
extern void fn_8070C630(void);
extern void fn_8070C650(void);
extern void fn_8070C740(void);
extern void fn_8070C770(void);
extern void fn_8070F130(void);
extern void fn_8070F180(void);
extern void fn_807187D0(void);
extern void fn_80718D00(void);
extern void fn_80718D70(void);
extern void fn_8071DC40(void);
extern void fn_8071DE50(void);
extern void fn_8071DEF0(void);
extern void fn_8071E180(void);
extern void fn_8071E440(void);
extern void fn_8071E680(void);
extern void fn_8071E970(void);
extern void fn_8071EA40(void);
extern void fn_8071EEA0(void);
extern void fn_8071F450(void);
extern void fn_807229E0(void);
extern void fn_80725170(void);
extern void fn_80725200(void);
extern void fn_807252A0(void);
extern void fn_807252D0(void);

/* External data declarations */
extern u8 lbl_8076D008[];
extern u8 lbl_8076D038[];
extern u8 lbl_8076D438[];
extern u8 lbl_8076EF58[];
extern u8 lbl_8076F458[];
extern u8 lbl_807C6468[];
extern u8 lbl_807C6478[];
extern u8 lbl_807C64B0[];
extern u8 lbl_8087D620[];
extern u8 lbl_8087D62C[];

/* Small data declarations */
extern u32 lbl_8087EE30;
extern u32 lbl_808804B0;
extern u32 lbl_80880510;
extern u32 lbl_80880518;
extern u32 lbl_808892D8;
extern u32 lbl_808892DC;
extern u32 lbl_808892E0;
extern u32 lbl_808892E4;
extern u32 lbl_808892E8;
extern u32 lbl_808892EC;
extern u32 lbl_808892F0;
extern u32 lbl_808892F4;
extern u32 lbl_808892F8;
extern u32 lbl_808892FC;
extern u32 lbl_80889300;
extern u32 lbl_80889304;
extern u32 lbl_80889308;
extern u32 lbl_80889310;

/* Function declarations */
void pad_03_8072036C_text(void);
void fn_80720370(void);
void fn_807204C0(void);
void fn_807204D0(void);
void fn_80720550(void);
void fn_807205C0(void);
void fn_807205D0(void);
void fn_80720680(void);
void fn_80720760(void);
void fn_80720920(void);
void fn_807209C0(void);
void fn_80720A70(void);
void fn_80720AE0(void);
void fn_80720BF0(void);
void fn_80720C70(void);
void fn_80720E20(void);
void fn_80720E80(void);
void fn_80720F60(void);
void fn_80721000(void);
void fn_80721090(void);
void fn_807210F0(void);
void fn_80721120(void);
void fn_80721150(void);
void fn_807211D0(void);
void fn_80721260(void);
void fn_80721280(void);
void fn_80721290(void);
void fn_80721460(void);
void fn_807214D0(void);
void fn_80721540(void);
void fn_80721580(void);
void fn_80721620(void);
void fn_807216C0(void);
void fn_80721700(void);
void fn_80721710(void);
void fn_80721720(void);
void fn_80721810(void);
void fn_80721830(void);
void fn_80721840(void);
void fn_80721850(void);
void fn_80721860(void);
void fn_80721870(void);
void fn_80721880(void);
void fn_80721890(void);
void fn_80721990(void);
void fn_807219D0(void);
void fn_80721A60(void);
void fn_80721B80(void);
void fn_80721CA0(void);
void fn_80721DA0(void);
void fn_80721E10(void);
void fn_80721EC0(void);
void fn_80722060(void);
void fn_807220D0(void);
void fn_80722200(void);
void fn_807222C0(void);
void fn_807222D0(void);
void fn_807222E0(void);

asm void pad_03_8072036C_text(void)
{
    nofralloc
    opword 0x00000000
}

asm void fn_80720370(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r31, r3
    mr r26, r4
    mr r30, r5
    li r28, 0x0
    mr r27, r31
    li r29, 0x0
    b lbl_fn_80720370_00000064
lbl_fn_80720370_00000034:
    lwz r3, 0xc(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80720370_0000005C
    mr r4, r26
    mr r5, r30
    bl fn_80705A80
    cmpwi r3, 0x0
    beq lbl_fn_80720370_0000005C
    li r28, 0x1
    b lbl_fn_80720370_00000070
lbl_fn_80720370_0000005C:
    addi r27, r27, 0x10
    addi r29, r29, 0x1
lbl_fn_80720370_00000064:
    lwz r0, 0x8c(r31)
    cmpw r29, r0
    blt lbl_fn_80720370_00000034
lbl_fn_80720370_00000070:
    cmpwi r28, 0x0
    beq lbl_fn_80720370_00000138
    lbz r0, 0x9e(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80720370_00000108
    mr r28, r31
    li r30, 0x0
    b lbl_fn_80720370_000000F4
lbl_fn_80720370_00000090:
    mr r27, r28
    li r29, 0x0
    b lbl_fn_80720370_000000E0
lbl_fn_80720370_0000009C:
    lwz r3, 0xc(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80720370_000000D8
    lwz r3, 0x0(r3)
    li r4, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_80720370_000000C8
    lhz r0, 0x38(r3)
    cmplwi r0, 0x1
    bne lbl_fn_80720370_000000C8
    li r4, 0x1
lbl_fn_80720370_000000C8:
    cmpwi r4, 0x0
    beq lbl_fn_80720370_000000D8
    li r4, 0x0
    bl fn_8060AE60
lbl_fn_80720370_000000D8:
    addi r27, r27, 0x4
    addi r29, r29, 0x1
lbl_fn_80720370_000000E0:
    lwz r0, 0x90(r31)
    cmpw r29, r0
    blt lbl_fn_80720370_0000009C
    addi r28, r28, 0x10
    addi r30, r30, 0x1
lbl_fn_80720370_000000F4:
    lwz r0, 0x8c(r31)
    cmpw r30, r0
    blt lbl_fn_80720370_00000090
    li r0, 0x0
    stb r0, 0x9e(r31)
lbl_fn_80720370_00000108:
    lwz r12, 0x94(r31)
    li r0, 0x0
    stb r0, 0xa0(r31)
    cmpwi r12, 0x0
    stb r0, 0x9f(r31)
    stb r0, 0x9d(r31)
    beq lbl_fn_80720370_00000138
    mr r3, r31
    lwz r5, 0x98(r31)
    li r4, 0x1
    mtctr r12
    bctrl
lbl_fn_80720370_00000138:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_807204C0(void)
{
    nofralloc
    blr
}

asm void fn_807204D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lbz r0, lbl_80880510
    extsb. r0, r0
    bne lbl_fn_807204D0_000001C8
    lis r6, lbl_8087D62C@ha
    li r0, 0x0
    addi r3, r6, lbl_8087D62C@l
    lis r4, fn_80720550@ha
    addi r8, r3, 0x8
    lis r5, lbl_8087D620@ha
    addi r7, r3, 0x14
    stb r0, lbl_8087D62C@l(r6)
    addi r4, r4, fn_80720550@l
    addi r5, r5, lbl_8087D620@l
    stw r0, 0x4(r3)
    stw r8, 0x8(r3)
    stw r8, 0xc(r3)
    stw r0, 0x10(r3)
    stw r7, 0x14(r3)
    stw r7, 0x18(r3)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_80880510
lbl_fn_807204D0_000001C8:
    lwz r0, 0x14(r1)
    lis r3, lbl_8087D62C@ha
    addi r3, r3, lbl_8087D62C@l
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80720550(void)
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
    beq lbl_fn_80720550_00000238
    addic. r3, r3, 0x10
    beq lbl_fn_80720550_00000218
    li r4, 0x0
    bl fn_80725170
lbl_fn_80720550_00000218:
    addic. r3, r30, 0x4
    beq lbl_fn_80720550_00000228
    li r4, 0x0
    bl fn_80725170
lbl_fn_80720550_00000228:
    cmpwi r31, 0x0
    ble lbl_fn_80720550_00000238
    mr r3, r30
    bl dtor_80084684
lbl_fn_80720550_00000238:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807205C0(void)
{
    nofralloc
    mulli r3, r4, 0x104
    blr
}

asm void fn_807205D0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lbz r0, 0x0(r3)
    mr r27, r3
    cmpwi r0, 0x0
    bne lbl_fn_807205D0_000002F0
    lis r6, 0xfc10
    mr r29, r4
    subi r0, r6, 0x3f03
    li r28, 0x0
    mulhwu r0, r0, r5
    srwi. r30, r0, 8
    beq lbl_fn_807205D0_000002E8
    addi r31, r3, 0x14
    b lbl_fn_807205D0_000002E0
lbl_fn_807205D0_000002AC:
    cmpwi r29, 0x0
    mr r5, r29
    beq lbl_fn_807205D0_000002C4
    mr r3, r29
    bl fn_8071DC40
    mr r5, r3
lbl_fn_807205D0_000002C4:
    stw r31, 0x8(r1)
    addi r3, r27, 0x10
    addi r4, r1, 0x8
    addi r5, r5, 0xfc
    bl fn_807252A0
    addi r29, r29, 0x104
    addi r28, r28, 0x1
lbl_fn_807205D0_000002E0:
    cmplw r28, r30
    blt lbl_fn_807205D0_000002AC
lbl_fn_807205D0_000002E8:
    li r0, 0x1
    stb r0, 0x0(r27)
lbl_fn_807205D0_000002F0:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80720680(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80720680_000003D8
    bl OSDisableInterrupts
    mr r31, r3
    b lbl_fn_80720680_00000380
lbl_fn_80720680_00000348:
    lwz r3, 0x8(r29)
    subi r30, r3, 0xfc
    mr r3, r30
    bl fn_8071E970
    lwz r12, 0x94(r30)
    cmpwi r12, 0x0
    beq lbl_fn_80720680_00000378
    mr r3, r30
    lwz r5, 0x98(r30)
    li r4, 0x1
    mtctr r12
    bctrl
lbl_fn_80720680_00000378:
    mr r3, r30
    bl fn_8071E680
lbl_fn_80720680_00000380:
    lwz r0, 0x4(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80720680_00000348
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_fn_80720680_000003C4
lbl_fn_80720680_00000398:
    lwz r30, 0x14(r29)
    addi r3, r29, 0x10
    stw r30, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_80725200
    lwz r12, -0xf4(r30)
    subi r3, r30, 0xfc
    li r4, -0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80720680_000003C4:
    lwz r0, 0x10(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80720680_00000398
    li r0, 0x0
    stb r0, 0x0(r29)
lbl_fn_80720680_000003D8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80720760(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    mr r31, r3
    mr r23, r4
    mr r24, r5
    mr r25, r6
    mr r26, r7
    mr r27, r8
    bl OSDisableInterrupts
    lwz r0, 0x10(r31)
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_fn_80720760_000004AC
    li r29, 0x0
    bne lbl_fn_80720760_00000494
    lwz r3, 0x8(r31)
    lwz r0, -0x54(r3)
    subi r28, r3, 0xfc
    cmpw r0, r25
    ble lbl_fn_80720760_00000458
    li r29, 0x0
    b lbl_fn_80720760_00000494
lbl_fn_80720760_00000458:
    lwz r4, 0x8c(r28)
    mr r3, r28
    lwz r0, 0x90(r28)
    mullw r29, r4, r0
    bl fn_8071E970
    mr r3, r28
    bl fn_8071E680
    lwz r12, 0x94(r28)
    cmpwi r12, 0x0
    beq lbl_fn_80720760_00000494
    mr r3, r28
    lwz r5, 0x98(r28)
    li r4, 0x2
    mtctr r12
    bctrl
lbl_fn_80720760_00000494:
    cmpwi r29, 0x0
    bne lbl_fn_80720760_000004AC
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_80720760_0000059C
lbl_fn_80720760_000004AC:
    lwz r3, 0x14(r31)
    mr r4, r23
    mr r5, r24
    mr r6, r25
    subi r28, r3, 0xfc
    mr r7, r26
    mr r3, r28
    mr r8, r27
    bl fn_8071E440
    cmpwi r3, 0x0
    bne lbl_fn_80720760_000004E8
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_80720760_0000059C
lbl_fn_80720760_000004E8:
    clrlwi r0, r25, 24
    stw r0, 0xa8(r28)
    bl OSDisableInterrupts
    addi r27, r28, 0xfc
    mr r29, r3
    mr r4, r27
    addi r3, r31, 0x10
    bl fn_807252D0
    addi r3, r31, 0x8
    b lbl_fn_80720760_0000052C
    nop
lbl_fn_80720760_00000514:
    lwz r5, 0x4(r3)
    lwz r0, 0xa8(r28)
    lwz r4, -0x54(r5)
    cmpw r4, r0
    ble lbl_fn_80720760_00000538
    mr r3, r5
lbl_fn_80720760_0000052C:
    lwz r0, 0x8(r31)
    cmplw r3, r0
    bne lbl_fn_80720760_00000514
lbl_fn_80720760_00000538:
    stw r3, 0x8(r1)
    mr r5, r27
    addi r3, r31, 0x4
    addi r4, r1, 0x8
    bl fn_807252A0
    mr r3, r29
    bl OSRestoreInterrupts
    addi r29, r31, 0x8
    b lbl_fn_80720760_0000057C
lbl_fn_80720760_0000055C:
    lwz r0, -0x54(r27)
    subi r3, r27, 0xfc
    cmpwi r0, 0x1
    ble lbl_fn_80720760_00000584
    cmpwi r0, 0xff
    beq lbl_fn_80720760_00000578
    bl fn_8071EEA0
lbl_fn_80720760_00000578:
    lwz r27, 0x0(r27)
lbl_fn_80720760_0000057C:
    cmplw r27, r29
    bne lbl_fn_80720760_0000055C
lbl_fn_80720760_00000584:
    bl fn_8070C650
    mr r4, r28
    bl fn_8070C740
    mr r3, r30
    bl OSRestoreInterrupts
    mr r3, r28
lbl_fn_80720760_0000059C:
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80720920(void)
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
    mr r31, r3
    bl fn_8070C650
    mr r4, r29
    bl fn_8070C770
    bl OSDisableInterrupts
    addi r29, r29, 0xfc
    mr r30, r3
    mr r4, r29
    addi r3, r28, 0x4
    bl fn_807252D0
    addi r0, r28, 0x14
    stw r0, 0x8(r1)
    mr r5, r29
    addi r3, r28, 0x10
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

asm void fn_807209C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    addi r30, r3, 0x8
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r31, 0x8(r3)
    b lbl_fn_807209C0_0000068C
lbl_fn_807209C0_0000067C:
    mr r3, r31
    lwz r31, 0x0(r31)
    subi r3, r3, 0xfc
    bl fn_8071DE50
lbl_fn_807209C0_0000068C:
    cmplw r31, r30
    bne lbl_fn_807209C0_0000067C
    lwz r30, 0x8(r29)
    addi r31, r29, 0x8
    b lbl_fn_807209C0_000006B0
lbl_fn_807209C0_000006A0:
    mr r3, r30
    lwz r30, 0x0(r30)
    subi r3, r3, 0xfc
    bl fn_8071DEF0
lbl_fn_807209C0_000006B0:
    cmplw r30, r31
    bne lbl_fn_807209C0_000006A0
    bl OSDisableInterrupts
    lwzu r31, 0x8(r29)
    mr r30, r3
    b lbl_fn_807209C0_000006D8
lbl_fn_807209C0_000006C8:
    mr r3, r31
    lwz r31, 0x0(r31)
    subi r3, r3, 0xfc
    bl fn_8071E180
lbl_fn_807209C0_000006D8:
    cmplw r31, r29
    bne lbl_fn_807209C0_000006C8
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

asm void fn_80720A70(void)
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
    lwzu r30, 0x8(r29)
    mr r31, r3
    b lbl_fn_80720A70_00000740
lbl_fn_80720A70_00000730:
    mr r3, r30
    lwz r30, 0x0(r30)
    subi r3, r3, 0xfc
    bl fn_8071F450
lbl_fn_80720A70_00000740:
    cmplw r30, r29
    bne lbl_fn_80720A70_00000730
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80720AE0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    addi r29, r28, 0xfc
    mr r30, r3
    mr r4, r29
    addi r3, r27, 0x4
    bl fn_807252D0
    addi r0, r27, 0x14
    stw r0, 0xc(r1)
    mr r5, r29
    addi r3, r27, 0x10
    addi r4, r1, 0xc
    bl fn_807252A0
    mr r3, r30
    bl OSRestoreInterrupts
    bl OSDisableInterrupts
    mr r30, r3
    mr r4, r29
    addi r3, r27, 0x10
    bl fn_807252D0
    addi r3, r27, 0x8
    b lbl_fn_80720AE0_00000804
lbl_fn_80720AE0_000007EC:
    lwz r5, 0x4(r3)
    lwz r0, 0xa8(r28)
    lwz r4, -0x54(r5)
    cmpw r4, r0
    ble lbl_fn_80720AE0_00000810
    mr r3, r5
lbl_fn_80720AE0_00000804:
    lwz r0, 0x8(r27)
    cmplw r3, r0
    bne lbl_fn_80720AE0_000007EC
lbl_fn_80720AE0_00000810:
    stw r3, 0x8(r1)
    mr r5, r29
    addi r3, r27, 0x4
    addi r4, r1, 0x8
    bl fn_807252A0
    mr r3, r30
    bl OSRestoreInterrupts
    addi r30, r27, 0x8
    b lbl_fn_80720AE0_00000854
lbl_fn_80720AE0_00000834:
    lwz r0, -0x54(r29)
    subi r3, r29, 0xfc
    cmpwi r0, 0x1
    ble lbl_fn_80720AE0_0000085C
    cmpwi r0, 0xff
    beq lbl_fn_80720AE0_00000850
    bl fn_8071EEA0
lbl_fn_80720AE0_00000850:
    lwz r29, 0x0(r29)
lbl_fn_80720AE0_00000854:
    cmplw r29, r30
    bne lbl_fn_80720AE0_00000834
lbl_fn_80720AE0_0000085C:
    mr r3, r31
    bl OSRestoreInterrupts
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80720BF0(void)
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
    lwz r4, 0x8(r30)
    addi r0, r30, 0x8
    b lbl_fn_80720BF0_000008D4
    nop
lbl_fn_80720BF0_000008B4:
    mr r6, r4
    lwz r4, 0x0(r4)
    lbz r5, -0x60(r6)
    cmpwi r5, 0x0
    beq lbl_fn_80720BF0_000008D4
    lhz r5, -0x5a(r6)
    or r5, r5, r31
    sth r5, -0x5a(r6)
lbl_fn_80720BF0_000008D4:
    cmplw r4, r0
    bne lbl_fn_80720BF0_000008B4
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80720C70(void)
{
    nofralloc
    subfic r5, r3, 0xbff
    li r0, 0xc00
    divwu r5, r5, r0
    cmpwi r3, 0x0
    lfs f1, lbl_808892D8
    li r6, 0x0
    bge lbl_fn_80720C70_00000958
    srwi. r4, r5, 3
    mulli r0, r5, 0xc00
    mtctr r4
    beq lbl_fn_80720C70_00000944
    nop
lbl_fn_80720C70_00000934:
    subi r6, r6, 0x8
    bdnz lbl_fn_80720C70_00000934
    andi. r5, r5, 0x7
    beq lbl_fn_80720C70_00000954
lbl_fn_80720C70_00000944:
    mtctr r5
    nop
lbl_fn_80720C70_0000094C:
    subi r6, r6, 0x1
    bdnz lbl_fn_80720C70_0000094C
lbl_fn_80720C70_00000954:
    add r3, r3, r0
lbl_fn_80720C70_00000958:
    li r0, 0xc00
    cmpwi r3, 0xc00
    divwu r5, r3, r0
    blt lbl_fn_80720C70_000009A0
    srwi. r4, r5, 3
    mulli r0, r5, -0xc00
    mtctr r4
    beq lbl_fn_80720C70_0000098C
    nop
lbl_fn_80720C70_0000097C:
    addi r6, r6, 0x8
    bdnz lbl_fn_80720C70_0000097C
    andi. r5, r5, 0x7
    beq lbl_fn_80720C70_0000099C
lbl_fn_80720C70_0000098C:
    mtctr r5
    nop
lbl_fn_80720C70_00000994:
    addi r6, r6, 0x1
    bdnz lbl_fn_80720C70_00000994
lbl_fn_80720C70_0000099C:
    add r3, r3, r0
lbl_fn_80720C70_000009A0:
    cmpwi r6, 0x0
    lfs f0, lbl_808892DC
    mr r5, r6
    ble lbl_fn_80720C70_00000A00
    srwi. r4, r6, 3
    neg r0, r6
    mtctr r4
    beq lbl_fn_80720C70_000009EC
lbl_fn_80720C70_000009C0:
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    bdnz lbl_fn_80720C70_000009C0
    andi. r5, r6, 0x7
    beq lbl_fn_80720C70_000009FC
lbl_fn_80720C70_000009EC:
    mtctr r5
    nop
lbl_fn_80720C70_000009F4:
    fmuls f1, f1, f0
    bdnz lbl_fn_80720C70_000009F4
lbl_fn_80720C70_000009FC:
    add r6, r6, r0
lbl_fn_80720C70_00000A00:
    cmpwi r6, 0x0
    lfs f0, lbl_808892E0
    neg r4, r6
    bge lbl_fn_80720C70_00000A54
    srwi. r0, r4, 3
    mtctr r0
    beq lbl_fn_80720C70_00000A48
lbl_fn_80720C70_00000A1C:
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    bdnz lbl_fn_80720C70_00000A1C
    andi. r4, r4, 0x7
    beq lbl_fn_80720C70_00000A54
lbl_fn_80720C70_00000A48:
    mtctr r4
lbl_fn_80720C70_00000A4C:
    fmuls f1, f1, f0
    bdnz lbl_fn_80720C70_00000A4C
lbl_fn_80720C70_00000A54:
    srawi r4, r3, 8
    slwi r0, r3, 24
    srwi r3, r3, 31
    subf r0, r3, r0
    addze. r5, r4
    rotlwi r0, r0, 8
    add r3, r0, r3
    beq lbl_fn_80720C70_00000A88
    lis r4, lbl_8076D008@ha
    slwi r0, r5, 2
    addi r4, r4, lbl_8076D008@l
    lfsx f0, r4, r0
    fmuls f1, f1, f0
lbl_fn_80720C70_00000A88:
    cmpwi r3, 0x0
    beqlr
    lis r4, lbl_8076D038@ha
    slwi r0, r3, 2
    addi r4, r4, lbl_8076D038@l
    lfsx f0, r4, r0
    fmuls f1, f1, f0
    blr
}

asm void fn_80720E20(void)
{
    nofralloc
    lfs f2, lbl_808892E4
    stwu r1, -0x10(r1)
    fcmpo cr0, f1, f2
    ble lbl_fn_80720E20_00000AC8
    b lbl_fn_80720E20_00000ADC
lbl_fn_80720E20_00000AC8:
    lfs f2, lbl_808892E8
    fcmpo cr0, f1, f2
    bge lbl_fn_80720E20_00000AD8
    b lbl_fn_80720E20_00000ADC
lbl_fn_80720E20_00000AD8:
    fmr f2, f1
lbl_fn_80720E20_00000ADC:
    lfs f0, lbl_808892EC
    lis r3, lbl_8076D438@ha
    addi r3, r3, lbl_8076D438@l
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r4, 0xc(r1)
    addi r0, r4, 0x388
    slwi r0, r0, 2
    lfsx f1, r3, r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80720E80(void)
{
    nofralloc
    lfs f2, lbl_808892D8
    stwu r1, -0x10(r1)
    fcmpo cr0, f1, f2
    ble lbl_fn_80720E80_00000B28
    b lbl_fn_80720E80_00000B3C
lbl_fn_80720E80_00000B28:
    lfs f2, lbl_808892F0
    fcmpo cr0, f1, f2
    bge lbl_fn_80720E80_00000B38
    b lbl_fn_80720E80_00000B3C
lbl_fn_80720E80_00000B38:
    fmr f2, f1
lbl_fn_80720E80_00000B3C:
    lfs f0, lbl_808892D8
    lis r4, lbl_807C6468@ha
    lwz r0, 0x0(r3)
    addi r4, r4, lbl_807C6468@l
    fadds f1, f0, f2
    lfs f2, lbl_808892E0
    slwi r5, r0, 2
    lbz r0, 0x4(r3)
    lfs f0, lbl_808892F4
    fmuls f1, f1, f2
    cmpwi r0, 0x0
    lwzx r4, r4, r5
    fmuls f0, f0, f1
    fadds f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    slwi r0, r0, 2
    lfsx f2, r4, r0
    beq lbl_fn_80720E80_00000B94
    lfs f0, 0x200(r4)
    fdivs f2, f2, f0
lbl_fn_80720E80_00000B94:
    lbz r0, 0x5(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80720E80_00000BC8
    lfs f1, lbl_808892D8
    fcmpo cr0, f2, f1
    ble lbl_fn_80720E80_00000BB0
    b lbl_fn_80720E80_00000BEC
lbl_fn_80720E80_00000BB0:
    lfs f1, lbl_808892F8
    fcmpo cr0, f2, f1
    bge lbl_fn_80720E80_00000BC0
    b lbl_fn_80720E80_00000BEC
lbl_fn_80720E80_00000BC0:
    fmr f1, f2
    b lbl_fn_80720E80_00000BEC
lbl_fn_80720E80_00000BC8:
    lfs f1, lbl_808892DC
    fcmpo cr0, f2, f1
    ble lbl_fn_80720E80_00000BD8
    b lbl_fn_80720E80_00000BEC
lbl_fn_80720E80_00000BD8:
    lfs f1, lbl_808892F8
    fcmpo cr0, f2, f1
    bge lbl_fn_80720E80_00000BE8
    b lbl_fn_80720E80_00000BEC
lbl_fn_80720E80_00000BE8:
    fmr f1, f2
lbl_fn_80720E80_00000BEC:
    addi r1, r1, 0x10
    blr
}

asm void fn_80720F60(void)
{
    nofralloc
    lfs f0, lbl_808892DC
    stwu r1, -0x10(r1)
    fcmpo cr0, f1, f0
    ble lbl_fn_80720F60_00000C08
    b lbl_fn_80720F60_00000C1C
lbl_fn_80720F60_00000C08:
    lfs f0, lbl_808892F8
    fcmpo cr0, f1, f0
    bge lbl_fn_80720F60_00000C18
    b lbl_fn_80720F60_00000C1C
lbl_fn_80720F60_00000C18:
    fmr f0, f1
lbl_fn_80720F60_00000C1C:
    lfs f2, lbl_808892E0
    lis r4, lbl_807C6468@ha
    lwz r0, 0x0(r3)
    addi r4, r4, lbl_807C6468@l
    fmuls f1, f0, f2
    lfs f0, lbl_808892F4
    slwi r0, r0, 2
    lfs f3, lbl_808892DC
    lwzx r3, r4, r0
    fmuls f0, f0, f1
    fadds f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    slwi r0, r0, 2
    lfsx f0, r3, r0
    fcmpo cr0, f0, f3
    ble lbl_fn_80720F60_00000C68
    b lbl_fn_80720F60_00000C7C
lbl_fn_80720F60_00000C68:
    lfs f3, lbl_808892F8
    fcmpo cr0, f0, f3
    bge lbl_fn_80720F60_00000C78
    b lbl_fn_80720F60_00000C7C
lbl_fn_80720F60_00000C78:
    fmr f3, f0
lbl_fn_80720F60_00000C7C:
    fmr f1, f3
    addi r1, r1, 0x10
    blr
}

asm void fn_80721000(void)
{
    nofralloc
    lfs f2, lbl_808892D8
    stwu r1, -0x10(r1)
    fcmpo cr0, f1, f2
    ble lbl_fn_80721000_00000CA8
    b lbl_fn_80721000_00000CBC
lbl_fn_80721000_00000CA8:
    lfs f2, lbl_808892F8
    fcmpo cr0, f1, f2
    bge lbl_fn_80721000_00000CB8
    b lbl_fn_80721000_00000CBC
lbl_fn_80721000_00000CB8:
    fmr f2, f1
lbl_fn_80721000_00000CBC:
    lfs f1, lbl_808892FC
    fcmpo cr0, f2, f1
    bge lbl_fn_80721000_00000CD0
    li r3, 0x50
    b lbl_fn_80721000_00000D10
lbl_fn_80721000_00000CD0:
    lfs f0, lbl_80889300
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80721000_00000CE8
    li r3, 0x3e80
    b lbl_fn_80721000_00000D10
lbl_fn_80721000_00000CE8:
    fsubs f1, f2, f1
    lfs f0, lbl_80889304
    lis r3, lbl_8076F458@ha
    addi r3, r3, lbl_8076F458@l
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    slwi r0, r0, 1
    lhzx r3, r3, r0
lbl_fn_80721000_00000D10:
    addi r1, r1, 0x10
    blr
}

asm void fn_80721090(void)
{
    nofralloc
    cmpwi r3, 0x7f
    ble lbl_fn_80721090_00000D34
    li r0, 0x7f
    b lbl_fn_80721090_00000D3C
lbl_fn_80721090_00000D34:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_fn_80721090_00000D3C:
    mulli r9, r0, 0xa
    lis r3, lbl_8076EF58@ha
    addi r3, r3, lbl_8076EF58@l
    lhzx r0, r3, r9
    add r3, r3, r9
    sth r0, 0x0(r4)
    lhz r0, 0x2(r3)
    sth r0, 0x0(r5)
    lhz r0, 0x4(r3)
    sth r0, 0x0(r6)
    lhz r0, 0x6(r3)
    sth r0, 0x0(r7)
    lhz r0, 0x8(r3)
    sth r0, 0x0(r8)
    blr
}

asm void fn_807210F0(void)
{
    nofralloc
    lis r3, 0x19
    lwz r4, lbl_8087EE30
    addi r0, r3, 0x660d
    mullw r3, r4, r0
    addis r3, r3, 0x3c6f
    subi r0, r3, 0xca1
    stw r0, lbl_8087EE30
    srwi r3, r0, 16
    blr
}

asm void fn_80721120(void)
{
    nofralloc
    cmpwi r3, 0x1
    bne lbl_fn_80721120_00000DC4
    add r3, r4, r5
    blr
lbl_fn_80721120_00000DC4:
    cmpwi r3, 0x0
    li r3, 0x0
    bnelr
    mr r3, r4
    blr
}

asm void fn_80721150(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r5, 0x0(r4)
    subis r0, r5, 0x5257
    cmplwi r0, 0x4152
    beq lbl_fn_80721150_00000E08
    li r0, 0x0
    b lbl_fn_80721150_00000E34
lbl_fn_80721150_00000E08:
    lhz r6, 0x6(r4)
    cmplwi r6, 0x100
    bge lbl_fn_80721150_00000E1C
    li r0, 0x0
    b lbl_fn_80721150_00000E34
lbl_fn_80721150_00000E1C:
    subfic r0, r6, 0x100
    li r5, 0x100
    orc r5, r5, r6
    srwi r0, r0, 1
    subf r0, r0, r5
    srwi r0, r0, 31
lbl_fn_80721150_00000E34:
    cmpwi r0, 0x0
    beqlr
    lwz r5, 0x18(r4)
    lwz r0, 0x10(r4)
    add r5, r5, r4
    add r0, r0, r4
    stw r0, 0x0(r3)
    stw r5, 0x4(r3)
    blr
}

asm void fn_807211D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r6, 0x0(r3)
    stw r0, 0x14(r1)
    cmpwi r6, 0x0
    bne lbl_fn_807211D0_00000E84
    li r3, 0x0
    b lbl_fn_807211D0_00000EDC
lbl_fn_807211D0_00000E84:
    lwz r5, 0x4(r3)
    cmpwi r5, 0x0
    bne lbl_fn_807211D0_00000E98
    li r3, 0x0
    b lbl_fn_807211D0_00000EDC
lbl_fn_807211D0_00000E98:
    cmpwi r4, 0x0
    bge lbl_fn_807211D0_00000EA8
    li r3, 0x0
    b lbl_fn_807211D0_00000EDC
lbl_fn_807211D0_00000EA8:
    lwz r0, 0x8(r6)
    cmplw r4, r0
    blt lbl_fn_807211D0_00000EBC
    li r3, 0x0
    b lbl_fn_807211D0_00000EDC
lbl_fn_807211D0_00000EBC:
    mulli r0, r4, 0xc
    add r3, r6, r0
    lwz r0, 0xc(r3)
    stw r0, 0x8(r1)
    lwz r4, 0x10(r3)
    stw r4, 0xc(r1)
    lbz r3, 0x8(r1)
    bl fn_80721120
lbl_fn_807211D0_00000EDC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80721260(void)
{
    nofralloc
    lwz r0, 0x10(r4)
    li r5, 0x0
    stw r5, 0x0(r3)
    add. r4, r0, r4
    beqlr
    addi r0, r4, 0x8
    stw r0, 0x0(r3)
    blr
}

asm void fn_80721280(void)
{
    nofralloc
    stw r4, 0x0(r3)
    blr
}

asm void fn_80721290(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r6, 0x0(r3)
    mr r27, r3
    mr r29, r4
    mr r28, r5
    lbz r0, 0x0(r6)
    cmpwi r0, 0x2
    beq lbl_fn_80721290_00000F68
    cmpwi r0, 0x1
    beq lbl_fn_80721290_00000F70
    cmpwi r0, 0x0
    beq lbl_fn_80721290_00000F78
    b lbl_fn_80721290_00000F80
lbl_fn_80721290_00000F68:
    li r30, 0x3
    b lbl_fn_80721290_00000F84
lbl_fn_80721290_00000F70:
    li r30, 0x1
    b lbl_fn_80721290_00000F84
lbl_fn_80721290_00000F78:
    li r30, 0x2
    b lbl_fn_80721290_00000F84
lbl_fn_80721290_00000F80:
    li r30, 0x3
lbl_fn_80721290_00000F84:
    stw r30, 0x0(r4)
    mr r5, r30
    lwz r6, 0x0(r3)
    lbz r0, 0x2(r6)
    stw r0, 0x8(r4)
    lwz r7, 0x0(r3)
    lbz r6, 0x3(r7)
    lhz r0, 0x4(r7)
    slwi r6, r6, 16
    add r0, r6, r0
    stw r0, 0xc(r4)
    lwz r6, 0x0(r3)
    li r3, 0x0
    lbz r6, 0x1(r6)
    neg r0, r6
    or r0, r0, r6
    srwi r0, r0, 31
    stb r0, 0x4(r4)
    lwz r4, 0x0(r27)
    lwz r4, 0x8(r4)
    bl fn_80705D30
    stw r3, 0x10(r29)
    mr r5, r30
    li r3, 0x0
    lwz r4, 0x0(r27)
    lwz r4, 0xc(r4)
    bl fn_80705D30
    addi r0, r3, 0x1
    stw r0, 0x14(r29)
    addi r31, r29, 0x18
    li r29, 0x0
    lwz r3, 0x0(r27)
    lwz r0, 0x10(r3)
    add r30, r0, r3
    b lbl_fn_80721290_000010C4
lbl_fn_80721290_00001010:
    cmpwi r29, 0x2
    bge lbl_fn_80721290_000010B8
    lwz r0, 0x0(r30)
    add r4, r0, r3
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80721290_000010A8
    add r5, r0, r3
    lwz r0, 0x4(r5)
    lwz r3, 0x0(r5)
    stw r3, 0x4(r31)
    stw r0, 0x8(r31)
    lwz r0, 0xc(r5)
    lwz r3, 0x8(r5)
    stw r3, 0xc(r31)
    stw r0, 0x10(r31)
    lwz r0, 0x14(r5)
    lwz r3, 0x10(r5)
    stw r3, 0x14(r31)
    stw r0, 0x18(r31)
    lwz r0, 0x1c(r5)
    lwz r3, 0x18(r5)
    stw r3, 0x1c(r31)
    stw r0, 0x20(r31)
    lhz r0, 0x20(r5)
    sth r0, 0x24(r31)
    lhz r0, 0x22(r5)
    sth r0, 0x26(r31)
    lhz r0, 0x24(r5)
    sth r0, 0x28(r31)
    lhz r0, 0x26(r5)
    sth r0, 0x2a(r31)
    lhz r0, 0x28(r5)
    sth r0, 0x2c(r31)
    lhz r0, 0x2a(r5)
    sth r0, 0x2e(r31)
    lhz r0, 0x2c(r5)
    sth r0, 0x30(r31)
lbl_fn_80721290_000010A8:
    mr r3, r27
    mr r5, r28
    bl fn_80721460
    stw r3, 0x0(r31)
lbl_fn_80721290_000010B8:
    addi r31, r31, 0x34
    addi r30, r30, 0x4
    addi r29, r29, 0x1
lbl_fn_80721290_000010C4:
    lwz r3, 0x0(r27)
    lbz r0, 0x2(r3)
    cmpw r29, r0
    blt lbl_fn_80721290_00001010
    addi r11, r1, 0x20
    li r3, 0x1
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80721460(void)
{
    nofralloc
    cmpwi r5, 0x0
    cntlzw r0, r5
    srwi r6, r0, 5
    bne lbl_fn_80721460_00001108
    lwz r5, 0x0(r3)
lbl_fn_80721460_00001108:
    lwz r3, 0x0(r3)
    lbz r0, 0x6(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80721460_00001124
    cmpwi r0, 0x1
    beq lbl_fn_80721460_0000113C
    b lbl_fn_80721460_00001144
lbl_fn_80721460_00001124:
    lwz r0, 0x14(r3)
    cmpwi r6, 0x0
    add r3, r0, r5
    beq lbl_fn_80721460_0000114C
    addi r3, r3, 0x8
    b lbl_fn_80721460_0000114C
lbl_fn_80721460_0000113C:
    lwz r3, 0x14(r3)
    b lbl_fn_80721460_0000114C
lbl_fn_80721460_00001144:
    li r3, 0x0
    blr
lbl_fn_80721460_0000114C:
    lwz r0, 0x0(r4)
    add r3, r0, r3
    blr
}

asm void fn_807214D0(void)
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
    bl fn_80709870
    lis r4, lbl_807C6478@ha
    addi r3, r30, 0x110
    addi r4, r4, lbl_807C6478@l
    stw r4, 0x0(r30)
    bl fn_80721DA0
    li r0, 0x0
    stw r0, 0x228(r30)
    mr r3, r30
    stw r31, 0x22c(r30)
    stb r0, 0x230(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80721540(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80721540_000011FC
    cmpwi r4, 0x0
    ble lbl_fn_80721540_000011FC
    bl dtor_80084684
lbl_fn_80721540_000011FC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80721580(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lwz r12, 0x0(r3)
    mr r25, r3
    mr r26, r4
    mr r27, r5
    lwz r12, 0x20(r12)
    mr r28, r6
    mr r29, r7
    mr r30, r8
    mr r31, r9
    mtctr r12
    bctrl
    mr r3, r25
    bl fn_8070AC10
    mr r8, r3
    mr r4, r26
    mr r5, r27
    mr r6, r28
    mr r7, r29
    mr r9, r30
    mr r10, r31
    addi r3, r25, 0x110
    bl fn_80721EC0
    cmpwi r3, 0x0
    bne lbl_fn_80721580_00001290
    li r3, 0x0
    b lbl_fn_80721580_0000129C
lbl_fn_80721580_00001290:
    li r0, 0x1
    stb r0, 0x230(r25)
    li r3, 0x1
lbl_fn_80721580_0000129C:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80721620(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_8070A9F0
    lwz r30, 0x22c(r29)
    addi r31, r30, 0x10
    mr r3, r31
    bl fn_805F3130
    lwz r0, 0x4(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80721620_000012FC
    mr r3, r31
    bl fn_805F3210
    b lbl_fn_80721620_00001334
lbl_fn_80721620_000012FC:
    addi r3, r30, 0x4
    addi r4, r29, 0xf0
    bl fn_807252D0
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, -0x1
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r30
    mr r4, r29
    bl fn_8070F130
    mr r3, r31
    bl fn_805F3210
lbl_fn_80721620_00001334:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_807216C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_807216C0_0000137C
    cmpwi r4, 0x0
    ble lbl_fn_807216C0_0000137C
    bl dtor_80084684
lbl_fn_807216C0_0000137C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80721700(void)
{
    nofralloc
    addi r3, r3, 0x110
    b fn_807222C0
}

asm void fn_80721710(void)
{
    nofralloc
    addi r3, r3, 0x110
    b fn_807222D0
}

asm void fn_80721720(void)
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
    lbz r4, 0x98(r3)
    lwz r0, 0x50(r3)
    add r4, r4, r0
    cmpwi r4, 0x7f
    ble lbl_fn_80721720_000013F0
    li r29, 0x7f
    b lbl_fn_80721720_000013F8
lbl_fn_80721720_000013F0:
    srawi r0, r4, 31
    andc r29, r4, r0
lbl_fn_80721720_000013F8:
    lwz r30, 0x22c(r3)
    addi r31, r30, 0x10
    mr r3, r31
    bl fn_805F3130
    addi r28, r28, 0xf0
    addi r3, r30, 0x4
    mr r4, r28
    bl fn_807252D0
    lwz r3, 0x8(r30)
    addi r0, r30, 0x8
    b lbl_fn_80721720_00001454
lbl_fn_80721720_00001424:
    lbz r5, -0x58(r3)
    lwz r4, -0xa0(r3)
    add r5, r5, r4
    cmpwi r5, 0x7f
    ble lbl_fn_80721720_00001440
    li r4, 0x7f
    b lbl_fn_80721720_00001448
lbl_fn_80721720_00001440:
    srawi r4, r5, 31
    andc r4, r5, r4
lbl_fn_80721720_00001448:
    cmpw r29, r4
    blt lbl_fn_80721720_0000145C
    lwz r3, 0x0(r3)
lbl_fn_80721720_00001454:
    cmplw r3, r0
    bne lbl_fn_80721720_00001424
lbl_fn_80721720_0000145C:
    stw r3, 0x8(r1)
    mr r5, r28
    addi r3, r30, 0x4
    addi r4, r1, 0x8
    bl fn_807252A0
    mr r3, r31
    bl fn_805F3210
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80721810(void)
{
    nofralloc
    lwz r3, 0x228(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_80721830(void)
{
    nofralloc
    lwz r3, 0x228(r3)
    b fn_80721990
}

asm void fn_80721840(void)
{
    nofralloc
    addi r3, r3, 0x110
    blr
}

asm void fn_80721850(void)
{
    nofralloc
    addi r3, r3, 0x110
    blr
}

asm void fn_80721860(void)
{
    nofralloc
    lbz r3, 0x230(r3)
    blr
}

asm void fn_80721870(void)
{
    nofralloc
    la r3, lbl_80880518
    blr
}

asm void fn_80721880(void)
{
    nofralloc
    la r0, lbl_808804B0
    stw r0, lbl_80880518
    blr
}

asm void fn_80721890(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r0, 0x0(r3)
    bne lbl_fn_80721890_00001554
    b lbl_fn_80721890_000015FC
lbl_fn_80721890_00001554:
    lwz r30, 0x0(r4)
    cmpwi r30, 0x0
    bne lbl_fn_80721890_00001564
    b lbl_fn_80721890_000015FC
lbl_fn_80721890_00001564:
    la r31, lbl_80880518
    beq lbl_fn_80721890_000015B0
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_80721890_00001598
lbl_fn_80721890_00001584:
    cmplw r3, r31
    bne lbl_fn_80721890_00001594
    li r0, 0x1
    b lbl_fn_80721890_000015A4
lbl_fn_80721890_00001594:
    lwz r3, 0x0(r3)
lbl_fn_80721890_00001598:
    cmpwi r3, 0x0
    bne lbl_fn_80721890_00001584
    li r0, 0x0
lbl_fn_80721890_000015A4:
    cmpwi r0, 0x0
    beq lbl_fn_80721890_000015B0
    b lbl_fn_80721890_000015B4
lbl_fn_80721890_000015B0:
    li r30, 0x0
lbl_fn_80721890_000015B4:
    cmpwi r30, 0x0
    beq lbl_fn_80721890_000015F8
    stw r30, 0x0(r29)
    mr r3, r30
    lwz r12, 0x0(r30)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80721890_000015F0
    lwz r3, 0x0(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80721890_000015F0:
    lwz r3, 0x0(r29)
    stw r29, 0x228(r3)
lbl_fn_80721890_000015F8:
    mr r3, r29
lbl_fn_80721890_000015FC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80721990(void)
{
    nofralloc
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80721990_00001644
    lwz r0, 0x228(r4)
    cmplw r0, r3
    bne lbl_fn_80721990_00001644
    li r0, 0x0
    stw r0, 0x228(r4)
lbl_fn_80721990_00001644:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beqlr
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_807219D0(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    lwz r5, 0x0(r4)
    subis r0, r5, 0x5257
    cmplwi r0, 0x5344
    beq lbl_fn_807219D0_0000168C
    li r0, 0x0
    b lbl_fn_807219D0_000016B8
lbl_fn_807219D0_0000168C:
    lhz r6, 0x6(r4)
    cmplwi r6, 0x100
    bge lbl_fn_807219D0_000016A0
    li r0, 0x0
    b lbl_fn_807219D0_000016B8
lbl_fn_807219D0_000016A0:
    subfic r0, r6, 0x103
    li r5, 0x103
    orc r5, r5, r6
    srwi r0, r0, 1
    subf r0, r0, r5
    srwi r0, r0, 31
lbl_fn_807219D0_000016B8:
    cmpwi r0, 0x0
    beqlr
    stw r4, 0x0(r3)
    lwz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_fn_807219D0_000016D8
    add r0, r0, r4
    stw r0, 0x4(r3)
lbl_fn_807219D0_000016D8:
    lwz r4, 0x0(r3)
    lwz r0, 0x18(r4)
    cmpwi r0, 0x0
    beqlr
    add r0, r0, r4
    stw r0, 0x8(r3)
    blr
}

asm void fn_80721A60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r6, 0x4(r3)
    stw r0, 0x14(r1)
    slwi r0, r5, 3
    addi r5, r6, 0x8
    stw r31, 0xc(r1)
    mr r31, r4
    add r4, r6, r0
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r3, 0xc(r4)
    lwz r4, 0x10(r4)
    bl fn_80721120
    mr r4, r3
    lwz r5, 0x4(r30)
    lbz r3, 0x0(r3)
    lwz r4, 0x4(r4)
    addi r5, r5, 0x8
    bl fn_80721120
    lwz r4, 0x0(r30)
    lhz r0, 0x6(r4)
    cmplwi r0, 0x102
    blt lbl_fn_80721A60_00001790
    lfs f0, 0x0(r3)
    stfs f0, 0x0(r31)
    lbz r0, 0x4(r3)
    stb r0, 0x4(r31)
    lbz r0, 0x5(r3)
    stb r0, 0x5(r31)
    lbz r0, 0x6(r3)
    stb r0, 0x6(r31)
    lbz r0, 0x7(r3)
    stb r0, 0x7(r31)
    lbz r0, 0x8(r3)
    stb r0, 0x8(r31)
    lbz r0, 0x9(r3)
    stb r0, 0x9(r31)
    b lbl_fn_80721A60_000017F8
lbl_fn_80721A60_00001790:
    cmplwi r0, 0x101
    blt lbl_fn_80721A60_000017CC
    lfs f0, 0x0(r3)
    li r4, 0x0
    stfs f0, 0x0(r31)
    li r0, 0x7f
    lbz r5, 0x4(r3)
    stb r5, 0x4(r31)
    lbz r3, 0x5(r3)
    stb r3, 0x5(r31)
    stb r4, 0x6(r31)
    stb r4, 0x7(r31)
    stb r4, 0x8(r31)
    stb r0, 0x9(r31)
    b lbl_fn_80721A60_000017F8
lbl_fn_80721A60_000017CC:
    lfs f0, lbl_80889308
    li r3, 0x0
    li r4, 0x40
    li r0, 0x7f
    stfs f0, 0x0(r31)
    stb r4, 0x4(r31)
    stb r3, 0x5(r31)
    stb r3, 0x6(r31)
    stb r3, 0x7(r31)
    stb r3, 0x8(r31)
    stb r0, 0x9(r31)
lbl_fn_80721A60_000017F8:
    lwz r31, 0xc(r1)
    li r3, 0x1
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80721B80(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r7, 0x4(r3)
    stw r0, 0x24(r1)
    slwi r0, r5, 3
    addi r5, r7, 0x8
    stw r31, 0x1c(r1)
    mr r31, r4
    add r4, r7, r0
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r3, 0xc(r4)
    lwz r4, 0x10(r4)
    bl fn_80721120
    mr r4, r3
    lwz r5, 0x4(r29)
    lbz r3, 0x10(r3)
    lwz r4, 0x14(r4)
    addi r5, r5, 0x8
    bl fn_80721120
    slwi r0, r30, 3
    lwz r4, 0x4(r29)
    add r6, r3, r0
    addi r5, r4, 0x8
    lbz r3, 0x4(r6)
    lwz r4, 0x8(r6)
    bl fn_80721120
    lwz r0, 0x0(r3)
    stw r0, 0x0(r31)
    lwz r4, 0x0(r29)
    lbz r0, 0x4(r3)
    stb r0, 0x4(r31)
    lbz r0, 0x8(r3)
    stb r0, 0x5(r31)
    lbz r0, 0x5(r3)
    stb r0, 0x6(r31)
    lbz r0, 0x6(r3)
    stb r0, 0x7(r31)
    lbz r0, 0x7(r3)
    stb r0, 0x8(r31)
    lbz r0, 0xc(r3)
    stb r0, 0x9(r31)
    lbz r0, 0xd(r3)
    stb r0, 0xc(r31)
    lhz r0, 0x6(r4)
    cmplwi r0, 0x101
    blt lbl_fn_80721B80_000018F4
    lbz r0, 0xe(r3)
    stb r0, 0xa(r31)
    lbz r0, 0xf(r3)
    stb r0, 0xb(r31)
    lfs f0, 0x10(r3)
    stfs f0, 0x10(r31)
    b lbl_fn_80721B80_0000190C
lbl_fn_80721B80_000018F4:
    lfs f0, lbl_80889308
    li r3, 0x40
    li r0, 0x0
    stb r3, 0xa(r31)
    stb r0, 0xb(r31)
    stfs f0, 0x10(r31)
lbl_fn_80721B80_0000190C:
    lwz r31, 0x1c(r1)
    li r3, 0x1
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80721CA0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lwz r7, 0x8(r3)
    stw r0, 0x34(r1)
    cmpwi r7, 0x0
    stw r31, 0x2c(r1)
    mr r31, r6
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    bne lbl_fn_80721CA0_000019AC
    mr r4, r31
    addi r3, r1, 0x10
    bl fn_80721150
    mr r4, r29
    addi r3, r1, 0x10
    bl fn_807211D0
    cmpwi r3, 0x0
    bne lbl_fn_80721CA0_0000198C
    li r3, 0x0
    b lbl_fn_80721CA0_00001A0C
lbl_fn_80721CA0_0000198C:
    mr r4, r3
    addi r3, r1, 0xc
    bl fn_80721260
    mr r4, r30
    addi r3, r1, 0xc
    li r5, 0x0
    bl fn_80721290
    b lbl_fn_80721CA0_00001A0C
lbl_fn_80721CA0_000019AC:
    lwz r3, 0x0(r3)
    lhz r0, 0x6(r3)
    cmplwi r0, 0x101
    blt lbl_fn_80721CA0_000019E4
    lwz r0, 0x8(r7)
    cmplw r4, r0
    blt lbl_fn_80721CA0_000019D0
    li r3, 0x0
    b lbl_fn_80721CA0_00001A0C
lbl_fn_80721CA0_000019D0:
    slwi r0, r4, 2
    add r3, r7, r0
    lwz r0, 0xc(r3)
    add r4, r0, r7
    b lbl_fn_80721CA0_000019F4
lbl_fn_80721CA0_000019E4:
    slwi r0, r4, 2
    add r3, r7, r0
    lwz r0, 0x8(r3)
    add r4, r0, r7
lbl_fn_80721CA0_000019F4:
    addi r3, r1, 0x8
    bl fn_80721280
    mr r4, r30
    mr r5, r31
    addi r3, r1, 0x8
    bl fn_80721290
lbl_fn_80721CA0_00001A0C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80721DA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80709700
    lis r5, lbl_807C64B0@ha
    li r6, 0x0
    addi r5, r5, lbl_807C64B0@l
    stw r6, 0xb4(r31)
    addi r4, r5, 0x24
    addi r3, r31, 0xf8
    addi r0, r5, 0x38
    stw r6, 0xb8(r31)
    stw r6, 0xc0(r31)
    stw r6, 0xc4(r31)
    stw r5, 0x0(r31)
    stw r4, 0xbc(r31)
    stw r0, 0xc8(r31)
    stb r6, 0xcc(r31)
    bl fn_8070F180
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80721E10(void)
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
    mr r30, r6
    bl fn_807097C0
    lfs f0, lbl_80889310
    li r31, 0x0
    li r5, 0x40
    li r4, -0x1
    li r0, 0x7f
    stb r31, 0xcd(r27)
    addi r3, r27, 0xf8
    stb r31, 0xce(r27)
    stb r31, 0xd0(r27)
    stfs f0, 0xd4(r27)
    stw r28, 0xd8(r27)
    stb r5, 0xdc(r27)
    stw r29, 0xe0(r27)
    stw r30, 0xe4(r27)
    stw r31, 0xe8(r27)
    stw r4, 0xec(r27)
    stfs f0, 0x108(r27)
    stb r5, 0x10c(r27)
    stb r31, 0x10d(r27)
    stb r31, 0x10e(r27)
    stb r31, 0x10f(r27)
    stb r31, 0x110(r27)
    stb r0, 0x111(r27)
    bl fn_8070F180
    stb r31, 0xcf(r27)
    addi r11, r1, 0x20
    stw r31, 0x114(r27)
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80721EC0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    mr r30, r9
    mr r31, r10
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0xcc(r24)
    cmpwi r0, 0x0
    beq lbl_fn_80721EC0_00001C80
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0xcd(r24)
    cmpwi r0, 0x0
    beq lbl_fn_80721EC0_00001BDC
    cmpwi r24, 0x0
    mr r23, r24
    beq lbl_fn_80721EC0_00001BC8
    addi r23, r24, 0xc0
lbl_fn_80721EC0_00001BC8:
    bl fn_807187D0
    mr r4, r23
    bl fn_80718D70
    li r0, 0x0
    stb r0, 0xcd(r24)
lbl_fn_80721EC0_00001BDC:
    lbz r0, 0xcc(r24)
    cmpwi r0, 0x0
    beq lbl_fn_80721EC0_00001C0C
    cmpwi r24, 0x0
    mr r23, r24
    beq lbl_fn_80721EC0_00001BF8
    addi r23, r24, 0xb4
lbl_fn_80721EC0_00001BF8:
    bl fn_8070C650
    mr r4, r23
    bl fn_8070C770
    li r0, 0x0
    stb r0, 0xcc(r24)
lbl_fn_80721EC0_00001C0C:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r4, 0x114(r24)
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_80721EC0_00001C38
    lbz r0, 0x36(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80721EC0_00001C38
    li r3, 0x1
lbl_fn_80721EC0_00001C38:
    cmpwi r3, 0x0
    beq lbl_fn_80721EC0_00001C50
    mr r3, r24
    bl fn_807229E0
    lwz r3, 0x114(r24)
    bl fn_8070C090
lbl_fn_80721EC0_00001C50:
    lwz r3, 0x114(r24)
    cmpwi r3, 0x0
    beq lbl_fn_80721EC0_00001C60
    bl fn_8070C630
lbl_fn_80721EC0_00001C60:
    li r0, 0x0
    stw r0, 0x114(r24)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
lbl_fn_80721EC0_00001C80:
    mr r3, r24
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_80721E10
    cmpwi r24, 0x0
    stw r25, 0xe8(r24)
    mr r23, r24
    stw r26, 0xec(r24)
    stw r27, 0xf0(r24)
    stw r28, 0xf4(r24)
    beq lbl_fn_80721EC0_00001CB4
    addi r23, r24, 0xb4
lbl_fn_80721EC0_00001CB4:
    bl fn_8070C650
    mr r4, r23
    bl fn_8070C740
    li r0, 0x1
    stb r0, 0xcc(r24)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    addi r11, r1, 0x30
    li r3, 0x1
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80722060(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    cmpwi r30, 0x0
    mr r31, r30
    beq lbl_fn_80722060_00001D28
    addi r31, r30, 0xc0
lbl_fn_80722060_00001D28:
    bl fn_807187D0
    mr r4, r31
    bl fn_80718D00
    li r0, 0x1
    stb r0, 0xcd(r30)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    lwz r31, 0xc(r1)
    li r3, 0x1
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807220D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0xcd(r30)
    cmpwi r0, 0x0
    beq lbl_fn_807220D0_00001DC4
    cmpwi r30, 0x0
    mr r31, r30
    beq lbl_fn_807220D0_00001DB0
    addi r31, r30, 0xc0
lbl_fn_807220D0_00001DB0:
    bl fn_807187D0
    mr r4, r31
    bl fn_80718D70
    li r0, 0x0
    stb r0, 0xcd(r30)
lbl_fn_807220D0_00001DC4:
    lbz r0, 0xcc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_807220D0_00001DF4
    cmpwi r30, 0x0
    mr r31, r30
    beq lbl_fn_807220D0_00001DE0
    addi r31, r30, 0xb4
lbl_fn_807220D0_00001DE0:
    bl fn_8070C650
    mr r4, r31
    bl fn_8070C770
    li r0, 0x0
    stb r0, 0xcc(r30)
lbl_fn_807220D0_00001DF4:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r4, 0x114(r30)
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_807220D0_00001E20
    lbz r0, 0x36(r4)
    cmpwi r0, 0x0
    beq lbl_fn_807220D0_00001E20
    li r3, 0x1
lbl_fn_807220D0_00001E20:
    cmpwi r3, 0x0
    beq lbl_fn_807220D0_00001E38
    mr r3, r30
    bl fn_807229E0
    lwz r3, 0x114(r30)
    bl fn_8070C090
lbl_fn_807220D0_00001E38:
    lwz r3, 0x114(r30)
    cmpwi r3, 0x0
    beq lbl_fn_807220D0_00001E48
    bl fn_8070C630
lbl_fn_807220D0_00001E48:
    li r0, 0x0
    stw r0, 0x114(r30)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80722200(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    clrlwi r3, r31, 24
    lwz r5, 0x114(r30)
    neg r0, r3
    li r4, 0x0
    or r0, r0, r3
    cmpwi r5, 0x0
    srwi r0, r0, 31
    stb r0, 0xce(r30)
    beq lbl_fn_80722200_00001EF0
    lbz r0, 0x36(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80722200_00001EF0
    li r4, 0x1
lbl_fn_80722200_00001EF0:
    cmpwi r4, 0x0
    beq lbl_fn_80722200_00001F24
    lwz r5, 0x114(r30)
    lbz r3, 0x35(r5)
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    cmplw r31, r0
    beq lbl_fn_80722200_00001F24
    stb r31, 0x35(r5)
    mr r4, r31
    lwz r3, 0xd0(r5)
    bl fn_8071EA40
lbl_fn_80722200_00001F24:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807222C0(void)
{
    nofralloc
    stb r4, 0xdc(r3)
    blr
}

asm void fn_807222D0(void)
{
    nofralloc
    stb r4, 0xd0(r3)
    blr
}

asm void fn_807222E0(void)
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
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0xcc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_807222E0_000020A4
    lwz r0, 0xe8(r29)
    cmplw r30, r0
    bgt lbl_fn_807222E0_000020A4
    cmplw r0, r31
    bgt lbl_fn_807222E0_000020A4
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0xcd(r29)
    cmpwi r0, 0x0
    beq lbl_fn_807222E0_00002000
    cmpwi r29, 0x0
    mr r31, r29
    beq lbl_fn_807222E0_00001FEC
    addi r31, r29, 0xc0
lbl_fn_807222E0_00001FEC:
    bl fn_807187D0
    mr r4, r31
    bl fn_80718D70
    li r0, 0x0
    stb r0, 0xcd(r29)
lbl_fn_807222E0_00002000:
    lbz r0, 0xcc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_807222E0_00002030
    cmpwi r29, 0x0
    mr r31, r29
    beq lbl_fn_807222E0_0000201C
    addi r31, r29, 0xb4
lbl_fn_807222E0_0000201C:
    bl fn_8070C650
    mr r4, r31
    bl fn_8070C770
    li r0, 0x0
    stb r0, 0xcc(r29)
lbl_fn_807222E0_00002030:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r4, 0x114(r29)
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_807222E0_0000205C
    lbz r0, 0x36(r4)
    cmpwi r0, 0x0
    beq lbl_fn_807222E0_0000205C
    li r3, 0x1
lbl_fn_807222E0_0000205C:
    cmpwi r3, 0x0
    beq lbl_fn_807222E0_00002074
    mr r3, r29
    bl fn_807229E0
    lwz r3, 0x114(r29)
    bl fn_8070C090
lbl_fn_807222E0_00002074:
    lwz r3, 0x114(r29)
    cmpwi r3, 0x0
    beq lbl_fn_807222E0_00002084
    bl fn_8070C630
lbl_fn_807222E0_00002084:
    li r0, 0x0
    stw r0, 0x114(r29)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
lbl_fn_807222E0_000020A4:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
