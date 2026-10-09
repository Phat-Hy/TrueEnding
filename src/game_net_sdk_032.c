#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_21(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_806823B0(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_806827C4(void);
extern void fn_80684600(void);
extern void fn_806D57A0(void);
extern void fn_806D5850(void);
extern void fn_806D58F0(void);
extern void fn_806D5900(void);
extern void fn_806D5A60(void);
extern void fn_806D5E60(void);
extern void fn_806D7350(void);
extern void fn_806D7A90(void);
extern void fn_806D7AC0(void);
extern void fn_806D7B30(void);
extern void fn_806D7B70(void);
extern void fn_806D8E30(void);
extern void fn_806D8EB0(void);
extern void fn_806D9380(void);
extern void fn_806D9590(void);
extern void fn_806DA070(void);
extern void fn_806DC0B0(void);
extern void fn_806DE480(void);
extern void fn_806DE4E0(void);
extern void fn_806DEA40(void);
extern void fn_806DEE40(void);
extern void fn_806DFEC0(void);
extern void fn_806E0BA0(void);
extern void fn_806E0DE0(void);
extern void fn_806E17D0(void);
extern void fn_806E4B90(void);
extern void fn_806E5570(void);
extern void fn_806E57E0(void);
extern void fn_806E5840(void);
extern void fn_806E59C0(void);
extern void fn_806E5D00(void);
extern void fn_806E8890(void);
extern void fn_806E89D0(void);
extern void fn_806E8B10(void);
extern void fn_806E8E10(void);
extern void fn_806E91F0(void);
extern void fn_806E9230(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_807C34D8[];
extern u8 jumptable_807C383C[];
extern u8 lbl_807BB380[];
extern u8 lbl_807C38E8[];
extern u8 lbl_807C38F8[];
extern u8 lbl_807C390C[];
extern u8 lbl_807C3938[];
extern u8 lbl_807C3948[];

/* Small data declarations */

/* Function declarations */
void pad_03_806E200C_text(void);
void fn_806E2010(void);
void fn_806E2B10(void);
void fn_806E2BD0(void);
void fn_806E2E10(void);
void fn_806E2EF0(void);
void fn_806E2F40(void);
void fn_806E2FB0(void);
void fn_806E2FF0(void);
void fn_806E3000(void);
void fn_806E30A0(void);
void fn_806E3160(void);
void fn_806E3210(void);
void fn_806E3580(void);
void fn_806E3980(void);
void fn_806E3A60(void);
void fn_806E3B50(void);
void fn_806E3BB0(void);
void fn_806E3C00(void);
void fn_806E3CC0(void);
void fn_806E4010(void);

asm void pad_03_806E200C_text(void)
{
    nofralloc
    opword 0x00000000
}

asm void fn_806E2010(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x154(r1)
    stw r31, 0x14c(r1)
    lis r31, jumptable_807C34D8@ha
    addi r31, r31, jumptable_807C34D8@l
    stw r30, 0x148(r1)
    mr r30, r3
    stw r29, 0x144(r1)
    stw r28, 0x140(r1)
    mr r28, r5
    lwz r29, 0x0(r3)
    bne lbl_fn_806E2010_0000004C
    addi r4, r31, 0x2f8
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806E2010_00000AE4
lbl_fn_806E2010_0000004C:
    subi r0, r4, 0x700
    cmplwi r0, 0x1e
    bgt lbl_fn_806E2010_00000ACC
    lis r4, jumptable_807C383C@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_807C383C@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lbz r0, 0x0(r5)
    extsb. r0, r0
    bne lbl_fn_806E2010_0000008C
    addi r4, r31, 0x2f8
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806E2010_00000AE4
lbl_fn_806E2010_0000008C:
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x1f
    bl fn_806E8B10
    addi r3, r29, 0x110
    addi r4, r1, 0x38
    li r5, 0x1f
    bl fn_806E8B10
    lwz r29, 0x0(r30)
    mr r3, r30
    addi r5, r31, 0x78
    addi r4, r29, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_000000CC
    b lbl_fn_806E2010_000000F0
lbl_fn_806E2010_000000CC:
    mr r3, r30
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E2010_000000EC
    mr r0, r3
lbl_fn_806E2010_000000EC:
    mr r3, r0
lbl_fn_806E2010_000000F0:
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    lbz r0, 0x0(r5)
    extsb. r0, r0
    bne lbl_fn_806E2010_00000118
    addi r4, r31, 0x2f8
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806E2010_00000AE4
lbl_fn_806E2010_00000118:
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x15
    bl fn_806E8B10
    addi r3, r29, 0x12f
    addi r4, r1, 0x38
    li r5, 0x15
    bl fn_806E8B10
    lwz r29, 0x0(r30)
    mr r3, r30
    addi r5, r31, 0x80
    addi r4, r29, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000158
    b lbl_fn_806E2010_0000017C
lbl_fn_806E2010_00000158:
    mr r3, r30
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E2010_00000178
    mr r0, r3
lbl_fn_806E2010_00000178:
    mr r3, r0
lbl_fn_806E2010_0000017C:
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    lbz r0, 0x0(r5)
    extsb. r0, r0
    bne lbl_fn_806E2010_000001A4
    addi r4, r31, 0x2f8
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806E2010_00000AE4
lbl_fn_806E2010_000001A4:
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x33
    bl fn_806E8B10
    addi r3, r1, 0x38
    bl fn_806D8EB0
    addi r3, r29, 0x144
    addi r4, r1, 0x38
    li r5, 0x33
    bl fn_806E8B10
    lwz r29, 0x0(r30)
    mr r3, r30
    addi r5, r31, 0x90
    addi r4, r29, 0x5f4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_000001EC
    b lbl_fn_806E2010_00000210
lbl_fn_806E2010_000001EC:
    mr r3, r30
    addi r4, r29, 0x5f4
    addi r5, r1, 0x38
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E2010_0000020C
    mr r0, r3
lbl_fn_806E2010_0000020C:
    mr r3, r0
lbl_fn_806E2010_00000210:
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    lbz r0, 0x0(r5)
    extsb. r0, r0
    bne lbl_fn_806E2010_00000238
    addi r4, r31, 0x2f8
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806E2010_00000AE4
lbl_fn_806E2010_00000238:
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x1f
    bl fn_806E8B10
    addi r3, r29, 0x177
    addi r4, r1, 0x38
    li r5, 0x1f
    bl fn_806E8B10
    addi r3, r29, 0x177
    addi r4, r1, 0x8
    bl fn_806E9230
    lwz r29, 0x0(r30)
    mr r3, r30
    addi r5, r31, 0x308
    addi r4, r29, 0x5f4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000284
    b lbl_fn_806E2010_000002A8
lbl_fn_806E2010_00000284:
    mr r3, r30
    addi r4, r29, 0x5f4
    addi r5, r1, 0x8
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E2010_000002A4
    mr r0, r3
lbl_fn_806E2010_000002A4:
    mr r3, r0
lbl_fn_806E2010_000002A8:
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x1f
    bl fn_806E8B10
    lwz r29, 0x0(r30)
    mr r3, r30
    addi r5, r31, 0x98
    addi r4, r29, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_000002E4
    b lbl_fn_806E2010_00000308
lbl_fn_806E2010_000002E4:
    mr r3, r30
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E2010_00000304
    mr r0, r3
lbl_fn_806E2010_00000304:
    mr r3, r0
lbl_fn_806E2010_00000308:
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x1f
    bl fn_806E8B10
    lwz r29, 0x0(r30)
    mr r3, r30
    addi r5, r31, 0xa4
    addi r4, r29, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000344
    b lbl_fn_806E2010_00000368
lbl_fn_806E2010_00000344:
    mr r3, r30
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E2010_00000364
    mr r0, r3
lbl_fn_806E2010_00000364:
    mr r3, r0
lbl_fn_806E2010_00000368:
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x4c
    bl fn_806E8B10
    lwz r29, 0x0(r30)
    mr r3, r30
    addi r5, r31, 0xbc
    addi r4, r29, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_000003A4
    b lbl_fn_806E2010_000003C8
lbl_fn_806E2010_000003A4:
    mr r3, r30
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E2010_000003C4
    mr r0, r3
lbl_fn_806E2010_000003C4:
    mr r3, r0
lbl_fn_806E2010_000003C8:
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0xb
    bl fn_806E8B10
    lwz r29, 0x0(r30)
    mr r3, r30
    addi r5, r31, 0xc8
    addi r4, r29, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000404
    b lbl_fn_806E2010_00000428
lbl_fn_806E2010_00000404:
    mr r3, r30
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E2010_00000424
    mr r0, r3
lbl_fn_806E2010_00000424:
    mr r3, r0
lbl_fn_806E2010_00000428:
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    mr r3, r28
    bl strlen
    cmplwi r3, 0x2
    beq lbl_fn_806E2010_00000458
    mr r3, r30
    addi r4, r31, 0x318
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806E2010_00000AE4
lbl_fn_806E2010_00000458:
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x3
    bl fn_806E8B10
    lwz r29, 0x0(r30)
    mr r3, r30
    addi r5, r31, 0xd4
    addi r4, r29, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000488
    b lbl_fn_806E2010_000004AC
lbl_fn_806E2010_00000488:
    mr r3, r30
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E2010_000004A8
    mr r0, r3
lbl_fn_806E2010_000004A8:
    mr r3, r0
lbl_fn_806E2010_000004AC:
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    lbz r0, 0x0(r5)
    li r4, 0x1
    extsb r0, r0
    cmplwi r0, 0xff
    bgt lbl_fn_806E2010_000004D0
    li r4, 0x0
lbl_fn_806E2010_000004D0:
    cmpwi r4, 0x0
    beq lbl_fn_806E2010_000004DC
    b lbl_fn_806E2010_000004F0
lbl_fn_806E2010_000004DC:
    lis r4, lbl_807BB380@ha
    addi r4, r4, lbl_807BB380@l
    lwz r4, 0x38(r4)
    lwz r4, 0xc(r4)
    lbzx r0, r4, r0
lbl_fn_806E2010_000004F0:
    extsb r5, r0
    cmpwi r5, 0x4d
    bne lbl_fn_806E2010_00000508
    li r0, 0x30
    stb r0, 0x38(r1)
    b lbl_fn_806E2010_00000520
lbl_fn_806E2010_00000508:
    subi r4, r5, 0x46
    subfic r0, r5, 0x46
    nor r0, r4, r0
    srawi r4, r0, 31
    addi r0, r4, 0x32
    stb r0, 0x38(r1)
lbl_fn_806E2010_00000520:
    li r29, 0x0
    stb r29, 0x39(r1)
    addi r5, r31, 0x118
    lwz r31, 0x0(r3)
    mr r3, r30
    addi r4, r31, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000548
    b lbl_fn_806E2010_00000568
lbl_fn_806E2010_00000548:
    mr r3, r30
    addi r4, r31, 0x5e4
    addi r5, r1, 0x38
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000564
    mr r29, r3
lbl_fn_806E2010_00000564:
    mr r3, r29
lbl_fn_806E2010_00000568:
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x100
    bl fn_806D9590
    lwz r29, 0x0(r30)
    mr r3, r30
    addi r5, r31, 0xb0
    addi r4, r29, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_000005A4
    b lbl_fn_806E2010_000005C8
lbl_fn_806E2010_000005A4:
    mr r3, r30
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E2010_000005C4
    mr r0, r3
lbl_fn_806E2010_000005C4:
    mr r3, r0
lbl_fn_806E2010_000005C8:
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    mr r3, r28
    bl fn_80684600
    mr r5, r3
    mr r3, r30
    li r4, 0x70d
    bl fn_806E17D0
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    mr r3, r28
    bl fn_80684600
    mr r5, r3
    mr r3, r30
    li r4, 0x70e
    bl fn_806E17D0
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x100
    bl fn_806E8B10
    lwz r29, 0x0(r30)
    mr r3, r30
    addi r5, r31, 0x330
    addi r4, r29, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_0000064C
    b lbl_fn_806E2010_00000670
lbl_fn_806E2010_0000064C:
    mr r3, r30
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E2010_0000066C
    mr r0, r3
lbl_fn_806E2010_0000066C:
    mr r3, r0
lbl_fn_806E2010_00000670:
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    mr r3, r28
    bl fn_80684600
    mr r5, r3
    mr r3, r30
    li r4, 0x710
    bl fn_806E17D0
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x100
    bl fn_806E8B10
    lwz r29, 0x0(r30)
    mr r3, r30
    addi r5, r31, 0x344
    addi r4, r29, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_000006D0
    b lbl_fn_806E2010_000006F4
lbl_fn_806E2010_000006D0:
    mr r3, r30
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E2010_000006F0
    mr r0, r3
lbl_fn_806E2010_000006F0:
    mr r3, r0
lbl_fn_806E2010_000006F4:
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    mr r3, r28
    bl fn_80684600
    mr r5, r3
    mr r3, r30
    li r4, 0x712
    bl fn_806E17D0
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    mr r3, r28
    bl fn_80684600
    mr r5, r3
    mr r3, r30
    li r4, 0x714
    bl fn_806E17D0
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    mr r3, r28
    bl fn_80684600
    mr r5, r3
    mr r3, r30
    li r4, 0x715
    bl fn_806E17D0
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x100
    bl fn_806E8B10
    lwz r29, 0x0(r30)
    mr r3, r30
    addi r5, r31, 0x358
    addi r4, r29, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_0000079C
    b lbl_fn_806E2010_000007C0
lbl_fn_806E2010_0000079C:
    mr r3, r30
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E2010_000007BC
    mr r0, r3
lbl_fn_806E2010_000007BC:
    mr r3, r0
lbl_fn_806E2010_000007C0:
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x33
    bl fn_806E8B10
    lwz r29, 0x0(r30)
    mr r3, r30
    addi r5, r31, 0x128
    addi r4, r29, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_000007FC
    b lbl_fn_806E2010_00000820
lbl_fn_806E2010_000007FC:
    mr r3, r30
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E2010_0000081C
    mr r0, r3
lbl_fn_806E2010_0000081C:
    mr r3, r0
lbl_fn_806E2010_00000820:
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x100
    bl fn_806E8B10
    lwz r29, 0x0(r30)
    mr r3, r30
    addi r5, r31, 0x130
    addi r4, r29, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_0000085C
    b lbl_fn_806E2010_00000880
lbl_fn_806E2010_0000085C:
    mr r3, r30
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E2010_0000087C
    mr r0, r3
lbl_fn_806E2010_0000087C:
    mr r3, r0
lbl_fn_806E2010_00000880:
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x100
    bl fn_806E8B10
    lwz r29, 0x0(r30)
    mr r3, r30
    addi r5, r31, 0x138
    addi r4, r29, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_000008BC
    b lbl_fn_806E2010_000008E0
lbl_fn_806E2010_000008BC:
    mr r3, r30
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E2010_000008DC
    mr r0, r3
lbl_fn_806E2010_000008DC:
    mr r3, r0
lbl_fn_806E2010_000008E0:
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x100
    bl fn_806E8B10
    lwz r29, 0x0(r30)
    mr r3, r30
    addi r5, r31, 0x140
    addi r4, r29, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_0000091C
    b lbl_fn_806E2010_00000940
lbl_fn_806E2010_0000091C:
    mr r3, r30
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E2010_0000093C
    mr r0, r3
lbl_fn_806E2010_0000093C:
    mr r3, r0
lbl_fn_806E2010_00000940:
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x100
    bl fn_806E8B10
    lwz r29, 0x0(r30)
    mr r3, r30
    addi r5, r31, 0x148
    addi r4, r29, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_0000097C
    b lbl_fn_806E2010_000009A0
lbl_fn_806E2010_0000097C:
    mr r3, r30
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E2010_0000099C
    mr r0, r3
lbl_fn_806E2010_0000099C:
    mr r3, r0
lbl_fn_806E2010_000009A0:
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x100
    bl fn_806E8B10
    lwz r29, 0x0(r30)
    mr r3, r30
    addi r5, r31, 0x150
    addi r4, r29, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_000009DC
    b lbl_fn_806E2010_00000A00
lbl_fn_806E2010_000009DC:
    mr r3, r30
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E2010_000009FC
    mr r0, r3
lbl_fn_806E2010_000009FC:
    mr r3, r0
lbl_fn_806E2010_00000A00:
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x100
    bl fn_806E8B10
    lwz r29, 0x0(r30)
    mr r3, r30
    addi r5, r31, 0x158
    addi r4, r29, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000A3C
    b lbl_fn_806E2010_00000A60
lbl_fn_806E2010_00000A3C:
    mr r3, r30
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E2010_00000A5C
    mr r0, r3
lbl_fn_806E2010_00000A5C:
    mr r3, r0
lbl_fn_806E2010_00000A60:
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x100
    bl fn_806E8B10
    lwz r29, 0x0(r30)
    mr r3, r30
    addi r5, r31, 0x160
    addi r4, r29, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000A9C
    b lbl_fn_806E2010_00000AC0
lbl_fn_806E2010_00000A9C:
    mr r3, r30
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E2010_00000ABC
    mr r0, r3
lbl_fn_806E2010_00000ABC:
    mr r3, r0
lbl_fn_806E2010_00000AC0:
    cmpwi r3, 0x0
    beq lbl_fn_806E2010_00000AE0
    b lbl_fn_806E2010_00000AE4
lbl_fn_806E2010_00000ACC:
    mr r3, r30
    addi r4, r31, 0x284
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806E2010_00000AE4
lbl_fn_806E2010_00000AE0:
    li r3, 0x0
lbl_fn_806E2010_00000AE4:
    lwz r0, 0x154(r1)
    lwz r31, 0x14c(r1)
    lwz r30, 0x148(r1)
    lwz r29, 0x144(r1)
    lwz r28, 0x140(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_806E2B10(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r31, jumptable_807C34D8@ha
    lwz r30, 0x0(r3)
    addi r31, r31, jumptable_807C34D8@l
    mr r28, r4
    mr r29, r5
    mr r27, r3
    addi r4, r30, 0x210
    addi r5, r31, 0x3f0
    bl fn_806DE480
    lwz r5, 0x198(r30)
    mr r3, r27
    addi r4, r30, 0x210
    bl fn_806DE4E0
    mr r3, r27
    addi r4, r30, 0x210
    addi r5, r31, 0x6c
    bl fn_806DE480
    mr r3, r27
    mr r5, r28
    addi r4, r30, 0x210
    bl fn_806DE4E0
    mr r3, r27
    addi r4, r30, 0x210
    addi r5, r31, 0x408
    bl fn_806DE480
    mr r3, r27
    mr r5, r29
    addi r4, r30, 0x210
    bl fn_806DE4E0
    mr r3, r27
    addi r4, r30, 0x210
    addi r5, r31, 0x1b8
    bl fn_806DE480
    addi r11, r1, 0x20
    li r3, 0x0
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806E2BD0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    lwz r10, 0x0(r3)
    li r9, 0x0
    subi r0, r5, 0x1
    lis r28, jumptable_807C34D8@ha
    stw r9, 0x8(r1)
    cntlzw r5, r0
    mr r29, r3
    mr r30, r4
    lwz r0, 0x100(r10)
    mr r31, r6
    mr r25, r7
    mr r27, r8
    cmpwi r0, 0x0
    addi r28, r28, jumptable_807C34D8@l
    srwi r0, r5, 5
    bne lbl_fn_806E2BD0_00000C1C
    li r0, 0x0
lbl_fn_806E2BD0_00000C1C:
    cmpwi r7, 0x0
    beq lbl_fn_806E2BD0_00000D14
    cmpwi r0, 0x0
    beq lbl_fn_806E2BD0_00000D14
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_806E57E0
    cmpwi r3, 0x0
    beq lbl_fn_806E2BD0_00000D14
    lwz r3, 0xc(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806E2BD0_00000D14
    li r3, 0x204
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_806E2BD0_00000C7C
    mr r3, r29
    addi r4, r28, 0x180
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E2BD0_00000DE8
lbl_fn_806E2BD0_00000C7C:
    lwz r3, 0xc(r1)
    mr r4, r26
    lwz r3, 0x10(r3)
    bl fn_806E0BA0
    li r0, 0x0
    stw r0, 0x0(r26)
    mr r3, r29
    mr r8, r25
    stw r30, 0x4(r26)
    mr r9, r27
    addi r6, r1, 0x8
    li r4, 0x2
    stw r25, 0x18(r1)
    li r5, 0x0
    li r7, 0x1
    stw r27, 0x1c(r1)
    bl fn_806E3980
    cmpwi r3, 0x0
    beq lbl_fn_806E2BD0_00000CCC
    b lbl_fn_806E2BD0_00000DE8
lbl_fn_806E2BD0_00000CCC:
    lwz r6, 0x8(r1)
    mr r5, r26
    mr r7, r25
    mr r0, r27
    lwz r26, 0x18(r6)
    mr r3, r29
    addi r4, r1, 0x10
    stw r7, 0x10(r1)
    li r7, 0x0
    stw r0, 0x14(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806E2BD0_00000D04
    b lbl_fn_806E2BD0_00000DE8
lbl_fn_806E2BD0_00000D04:
    lwz r4, 0x8(r1)
    mr r3, r29
    bl fn_806E3A60
    b lbl_fn_806E2BD0_00000DC4
lbl_fn_806E2BD0_00000D14:
    mr r3, r29
    mr r7, r31
    mr r8, r25
    mr r9, r27
    addi r6, r1, 0x8
    li r4, 0x2
    li r5, 0x0
    bl fn_806E3980
    cmpwi r3, 0x0
    beq lbl_fn_806E2BD0_00000D40
    b lbl_fn_806E2BD0_00000DE8
lbl_fn_806E2BD0_00000D40:
    lwz r4, 0x8(r1)
    mr r3, r29
    lwz r27, 0x0(r29)
    addi r5, r28, 0x3f0
    lwz r26, 0x18(r4)
    addi r4, r27, 0x210
    bl fn_806DE480
    lwz r5, 0x198(r27)
    mr r3, r29
    addi r4, r27, 0x210
    bl fn_806DE4E0
    mr r3, r29
    addi r4, r27, 0x210
    addi r5, r28, 0x6c
    bl fn_806DE480
    mr r3, r29
    mr r5, r30
    addi r4, r27, 0x210
    bl fn_806DE4E0
    mr r3, r29
    addi r4, r27, 0x210
    addi r5, r28, 0x408
    bl fn_806DE480
    mr r3, r29
    mr r5, r26
    addi r4, r27, 0x210
    bl fn_806DE4E0
    mr r3, r29
    addi r4, r27, 0x210
    addi r5, r28, 0x1b8
    bl fn_806DE480
    b lbl_fn_806E2BD0_00000DC4
    b lbl_fn_806E2BD0_00000DE8
lbl_fn_806E2BD0_00000DC4:
    cmpwi r31, 0x0
    beq lbl_fn_806E2BD0_00000DE4
    mr r3, r29
    mr r4, r26
    bl fn_806DC0B0
    cmpwi r3, 0x0
    beq lbl_fn_806E2BD0_00000DE4
    b lbl_fn_806E2BD0_00000DE8
lbl_fn_806E2BD0_00000DE4:
    li r3, 0x0
lbl_fn_806E2BD0_00000DE8:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806E2E10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, 0x10(r3)
    cmpwi r4, 0x0
    beq lbl_fn_806E2E10_00000EC0
    lwz r3, 0x0(r4)
    bl fn_806D7AC0
    lwz r3, 0x10(r30)
    li r31, 0x0
    stw r31, 0x0(r3)
    lwz r3, 0x10(r30)
    lwz r3, 0x4(r3)
    bl fn_806D7AC0
    lwz r3, 0x10(r30)
    stw r31, 0x4(r3)
    lwz r3, 0x10(r30)
    lwz r3, 0x8(r3)
    bl fn_806D7AC0
    lwz r3, 0x10(r30)
    stw r31, 0x8(r3)
    lwz r3, 0x10(r30)
    lwz r3, 0xc(r3)
    bl fn_806D7AC0
    lwz r3, 0x10(r30)
    stw r31, 0xc(r3)
    lwz r3, 0x10(r30)
    lwz r3, 0x10(r3)
    bl fn_806D7AC0
    lwz r3, 0x10(r30)
    stw r31, 0x10(r3)
    lwz r3, 0x10(r30)
    lwz r3, 0x14(r3)
    bl fn_806D7AC0
    lwz r3, 0x10(r30)
    stw r31, 0x14(r3)
    lwz r3, 0x10(r30)
    lwz r3, 0xc8(r3)
    bl fn_806D7AC0
    lwz r3, 0x10(r30)
    stw r31, 0xc8(r3)
    lwz r3, 0x10(r30)
    bl fn_806D7AC0
    stw r31, 0x10(r30)
lbl_fn_806E2E10_00000EC0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806E2EF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r3, 0x0(r3)
    bl fn_806D7AC0
    li r31, 0x0
    stw r31, 0x0(r30)
    lwz r3, 0x4(r30)
    bl fn_806D7AC0
    stw r31, 0x4(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806E2F40(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, fn_806E2EF0@ha
    li r4, 0x1
    stw r0, 0x14(r1)
    addi r5, r5, fn_806E2EF0@l
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, 0x0(r3)
    li r3, 0x8
    bl fn_806D57A0
    cmpwi r3, 0x0
    stw r3, 0x3b4(r31)
    bne lbl_fn_806E2F40_00000F88
    lis r4, lbl_807C38E8@ha
    mr r3, r30
    addi r4, r4, lbl_807C38E8@l
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E2F40_00000F8C
lbl_fn_806E2F40_00000F88:
    li r3, 0x0
lbl_fn_806E2F40_00000F8C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806E2FB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, 0x0(r3)
    lwz r3, 0x3b4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806E2FB0_00000FD0
    bl fn_806D5850
    li r0, 0x0
    stw r0, 0x3b4(r31)
lbl_fn_806E2FB0_00000FD0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806E2FF0(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r4)
    b fn_80682428
}

asm void fn_806E3000(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r4
    bne lbl_fn_806E3000_0000102C
    lis r4, lbl_807C38F8@ha
    addi r4, r4, lbl_807C38F8@l
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806E3000_00001078
lbl_fn_806E3000_0000102C:
    cmpwi r6, 0x0
    bne lbl_fn_806E3000_00001048
    lis r4, lbl_807C390C@ha
    addi r4, r4, lbl_807C390C@l
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806E3000_00001078
lbl_fn_806E3000_00001048:
    mr r3, r5
    bl fn_806D8E30
    stw r3, 0x8(r1)
    mr r3, r31
    bl fn_806D8E30
    stw r3, 0xc(r1)
    lis r5, fn_806E2FF0@ha
    mr r3, r30
    addi r4, r1, 0x8
    addi r5, r5, fn_806E2FF0@l
    bl fn_806D5A60
    li r3, 0x0
lbl_fn_806E3000_00001078:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806E30A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r6
    bne lbl_fn_806E30A0_000010CC
    lis r4, lbl_807C38F8@ha
    addi r4, r4, lbl_807C38F8@l
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806E30A0_00001134
lbl_fn_806E30A0_000010CC:
    mr r3, r5
    bl fn_806D8E30
    stw r3, 0x8(r1)
    lis r5, fn_806E2FF0@ha
    mr r3, r31
    addi r4, r1, 0x8
    addi r5, r5, fn_806E2FF0@l
    li r6, 0x0
    li r7, 0x1
    bl fn_806D5E60
    cmpwi r3, -0x1
    mr r4, r3
    beq lbl_fn_806E30A0_00001120
    mr r3, r31
    bl fn_806D5900
    mr r31, r3
    lwz r3, 0x4(r3)
    bl fn_806D7AC0
    mr r3, r30
    bl fn_806D8E30
    stw r3, 0x4(r31)
lbl_fn_806E30A0_00001120:
    lwz r3, 0x8(r1)
    bl fn_806D7AC0
    li r0, 0x0
    stw r0, 0x8(r1)
    li r3, 0x0
lbl_fn_806E30A0_00001134:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806E3160(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r4
    bne lbl_fn_806E3160_0000118C
    lis r4, lbl_807C38F8@ha
    addi r4, r4, lbl_807C38F8@l
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806E3160_000011E4
lbl_fn_806E3160_0000118C:
    mr r3, r5
    bl fn_806D8E30
    stw r3, 0x8(r1)
    lis r5, fn_806E2FF0@ha
    mr r3, r30
    addi r4, r1, 0x8
    addi r5, r5, fn_806E2FF0@l
    li r6, 0x0
    li r7, 0x1
    bl fn_806D5E60
    cmpwi r3, -0x1
    mr r4, r3
    beq lbl_fn_806E3160_000011D0
    mr r3, r30
    bl fn_806D5900
    lwz r0, 0x4(r3)
    stw r0, 0x0(r31)
lbl_fn_806E3160_000011D0:
    lwz r3, 0x8(r1)
    bl fn_806D7AC0
    li r0, 0x0
    stw r0, 0x8(r1)
    li r3, 0x0
lbl_fn_806E3160_000011E4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806E3210(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_21
    lwz r26, 0x0(r3)
    mr r21, r3
    lis r27, lbl_807C38E8@ha
    mr r22, r4
    lwz r3, 0x3b4(r26)
    addi r27, r27, lbl_807C38E8@l
    li r25, 0x0
    bl fn_806D58F0
    mr r23, r3
    addi r3, r1, 0x8
    mr r5, r23
    addi r4, r27, 0x38
    crclr 6
    bl sprintf
    lis r29, 0xaaab
    li r24, 0x0
    subi r31, r29, 0x5555
    b lbl_fn_806E3210_00001370
lbl_fn_806E3210_00001260:
    lwz r3, 0x3b4(r26)
    mr r4, r24
    bl fn_806D5900
    lwz r30, 0x0(r3)
    mr r28, r3
    mr r3, r30
    bl strlen
    mulhwu r0, r31, r3
    srwi r0, r0, 1
    mulli r0, r0, 0x3
    subf. r0, r0, r3
    beq lbl_fn_806E3210_000012D0
    mr r3, r30
    bl strlen
    slwi r0, r3, 2
    subi r3, r29, 0x5555
    mulhwu r0, r3, r0
    mr r3, r30
    srwi r30, r0, 1
    bl strlen
    subi r0, r29, 0x5555
    mulhwu r0, r0, r3
    srwi r0, r0, 1
    mulli r0, r0, 0x3
    subf r0, r0, r3
    subfic r0, r0, 0x4
    add r30, r0, r30
    b lbl_fn_806E3210_000012E8
lbl_fn_806E3210_000012D0:
    mr r3, r30
    bl strlen
    slwi r0, r3, 2
    subi r3, r29, 0x5555
    mulhwu r0, r3, r0
    srwi r30, r0, 1
lbl_fn_806E3210_000012E8:
    lwz r28, 0x4(r28)
    mr r3, r28
    bl strlen
    mulhwu r0, r31, r3
    srwi r0, r0, 1
    mulli r0, r0, 0x3
    subf. r0, r0, r3
    beq lbl_fn_806E3210_00001348
    mr r3, r28
    bl strlen
    slwi r0, r3, 2
    subi r3, r29, 0x5555
    mulhwu r0, r3, r0
    mr r3, r28
    srwi r28, r0, 1
    bl strlen
    subi r0, r29, 0x5555
    mulhwu r0, r0, r3
    srwi r0, r0, 1
    mulli r0, r0, 0x3
    subf r0, r0, r3
    subfic r0, r0, 0x4
    add r0, r0, r28
    b lbl_fn_806E3210_00001360
lbl_fn_806E3210_00001348:
    mr r3, r28
    bl strlen
    slwi r0, r3, 2
    subi r3, r29, 0x5555
    mulhwu r0, r3, r0
    srwi r0, r0, 1
lbl_fn_806E3210_00001360:
    add r0, r30, r0
    addi r24, r24, 0x1
    add r3, r0, r25
    addi r25, r3, 0x2
lbl_fn_806E3210_00001370:
    cmpw r24, r23
    blt lbl_fn_806E3210_00001260
    addi r3, r1, 0x8
    bl strlen
    add r3, r25, r3
    addi r3, r3, 0x1
    bl fn_806D7A90
    cmpwi r3, 0x0
    stw r3, 0x0(r22)
    bne lbl_fn_806E3210_000013AC
    mr r3, r21
    addi r4, r27, 0x0
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E3210_00001554
lbl_fn_806E3210_000013AC:
    addi r4, r27, 0x44
    addi r5, r1, 0x8
    crclr 6
    bl sprintf
    lwz r0, 0x0(r22)
    lis r31, 0xaaab
    li r28, 0x0
    add r25, r0, r3
    subi r30, r31, 0x5555
    b lbl_fn_806E3210_00001548
lbl_fn_806E3210_000013D4:
    lwz r3, 0x3b4(r26)
    mr r4, r28
    bl fn_806D5900
    mr r29, r3
    mr r3, r25
    addi r4, r27, 0x48
    bl fn_806823B0
    lwz r21, 0x0(r29)
    addi r25, r25, 0x1
    mr r3, r21
    bl strlen
    mr r5, r3
    mr r3, r21
    mr r4, r25
    li r6, 0x2
    bl fn_806D9380
    lwz r21, 0x0(r29)
    mr r3, r21
    bl strlen
    mulhwu r0, r30, r3
    srwi r0, r0, 1
    mulli r0, r0, 0x3
    subf. r0, r0, r3
    beq lbl_fn_806E3210_00001478
    mr r3, r21
    bl strlen
    slwi r0, r3, 2
    subi r3, r31, 0x5555
    mulhwu r0, r3, r0
    mr r3, r21
    srwi r21, r0, 1
    bl strlen
    subi r4, r31, 0x5555
    add r0, r25, r21
    mulhwu r4, r4, r3
    srwi r4, r4, 1
    mulli r4, r4, 0x3
    subf r3, r4, r3
    subfic r3, r3, 0x4
    add r21, r3, r0
    b lbl_fn_806E3210_00001494
lbl_fn_806E3210_00001478:
    mr r3, r21
    bl strlen
    slwi r0, r3, 2
    subi r3, r31, 0x5555
    mulhwu r0, r3, r0
    srwi r0, r0, 1
    add r21, r25, r0
lbl_fn_806E3210_00001494:
    mr r3, r21
    addi r4, r27, 0x48
    bl fn_806823B0
    lwz r22, 0x4(r29)
    addi r25, r21, 0x1
    mr r3, r22
    bl strlen
    mr r5, r3
    mr r3, r22
    mr r4, r25
    li r6, 0x2
    bl fn_806D9380
    lwz r21, 0x4(r29)
    mr r3, r21
    bl strlen
    mulhwu r0, r30, r3
    srwi r0, r0, 1
    mulli r0, r0, 0x3
    subf. r0, r0, r3
    beq lbl_fn_806E3210_00001528
    mr r3, r21
    bl strlen
    slwi r0, r3, 2
    subi r3, r31, 0x5555
    mulhwu r0, r3, r0
    mr r3, r21
    srwi r21, r0, 1
    bl strlen
    subi r4, r31, 0x5555
    add r0, r25, r21
    mulhwu r4, r4, r3
    srwi r4, r4, 1
    mulli r4, r4, 0x3
    subf r3, r4, r3
    subfic r3, r3, 0x4
    add r25, r3, r0
    b lbl_fn_806E3210_00001544
lbl_fn_806E3210_00001528:
    mr r3, r21
    bl strlen
    slwi r0, r3, 2
    subi r3, r31, 0x5555
    mulhwu r0, r3, r0
    srwi r0, r0, 1
    add r25, r25, r0
lbl_fn_806E3210_00001544:
    addi r28, r28, 0x1
lbl_fn_806E3210_00001548:
    cmpw r28, r23
    blt lbl_fn_806E3210_000013D4
    li r3, 0x0
lbl_fn_806E3210_00001554:
    addi r11, r1, 0x80
    bl _restgpr_21
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_806E3580(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lwz r5, 0xc(r4)
    stw r0, 0x64(r1)
    lwz r0, 0x10(r4)
    cmpwi r5, 0x0
    stw r31, 0x5c(r1)
    mr r31, r4
    stw r30, 0x58(r1)
    mr r30, r3
    stw r29, 0x54(r1)
    stw r28, 0x50(r1)
    stw r5, 0x40(r1)
    lwz r29, 0x0(r3)
    stw r0, 0x44(r1)
    beq lbl_fn_806E3580_00001944
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806E3580_000015F4
    cmpwi r0, 0x1
    beq lbl_fn_806E3580_00001684
    cmpwi r0, 0x5
    beq lbl_fn_806E3580_000016F8
    cmpwi r0, 0x2
    beq lbl_fn_806E3580_0000176C
    cmpwi r0, 0x3
    beq lbl_fn_806E3580_000017E0
    cmpwi r0, 0x4
    beq lbl_fn_806E3580_0000185C
    cmpwi r0, 0x6
    beq lbl_fn_806E3580_000018D0
    b lbl_fn_806E3580_00001944
lbl_fn_806E3580_000015F4:
    li r3, 0x20
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_806E3580_00001620
    lis r4, lbl_807C3938@ha
    mr r3, r30
    addi r4, r4, lbl_807C3938@l
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E3580_00001948
lbl_fn_806E3580_00001620:
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r0, 0x1c(r31)
    stw r0, 0x0(r28)
    lwz r0, 0x5b8(r29)
    cmpwi r0, 0x201
    bne lbl_fn_806E3580_00001650
    lwz r3, 0x1a0(r29)
    li r0, 0x0
    stw r3, 0x4(r28)
    stw r0, 0x1a0(r29)
lbl_fn_806E3580_00001650:
    lwz r4, 0x40(r1)
    mr r3, r30
    lwz r0, 0x44(r1)
    mr r5, r28
    stw r4, 0x38(r1)
    mr r6, r31
    addi r4, r1, 0x38
    li r7, 0x0
    stw r0, 0x3c(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806E3580_00001944
    b lbl_fn_806E3580_00001948
lbl_fn_806E3580_00001684:
    li r3, 0x8
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_806E3580_000016B0
    lis r4, lbl_807C3938@ha
    mr r3, r30
    addi r4, r4, lbl_807C3938@l
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E3580_00001948
lbl_fn_806E3580_000016B0:
    li r4, 0x0
    li r5, 0x8
    bl memset
    lwz r0, 0x1c(r31)
    mr r3, r30
    stw r0, 0x0(r28)
    mr r5, r28
    lwz r7, 0x40(r1)
    mr r6, r31
    lwz r0, 0x44(r1)
    addi r4, r1, 0x30
    stw r7, 0x30(r1)
    li r7, 0x0
    stw r0, 0x34(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806E3580_00001944
    b lbl_fn_806E3580_00001948
lbl_fn_806E3580_000016F8:
    li r3, 0x8
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_806E3580_00001724
    lis r4, lbl_807C3938@ha
    mr r3, r30
    addi r4, r4, lbl_807C3938@l
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E3580_00001948
lbl_fn_806E3580_00001724:
    li r4, 0x0
    li r5, 0x8
    bl memset
    lwz r0, 0x1c(r31)
    mr r3, r30
    stw r0, 0x0(r28)
    mr r5, r28
    lwz r7, 0x40(r1)
    mr r6, r31
    lwz r0, 0x44(r1)
    addi r4, r1, 0x28
    stw r7, 0x28(r1)
    li r7, 0x0
    stw r0, 0x2c(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806E3580_00001944
    b lbl_fn_806E3580_00001948
lbl_fn_806E3580_0000176C:
    li r3, 0x204
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_806E3580_00001798
    lis r4, lbl_807C3938@ha
    mr r3, r30
    addi r4, r4, lbl_807C3938@l
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E3580_00001948
lbl_fn_806E3580_00001798:
    li r4, 0x0
    li r5, 0x204
    bl memset
    lwz r0, 0x1c(r31)
    mr r3, r30
    stw r0, 0x0(r28)
    mr r5, r28
    lwz r7, 0x40(r1)
    mr r6, r31
    lwz r0, 0x44(r1)
    addi r4, r1, 0x20
    stw r7, 0x20(r1)
    li r7, 0x0
    stw r0, 0x24(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806E3580_00001944
    b lbl_fn_806E3580_00001948
lbl_fn_806E3580_000017E0:
    li r3, 0x10
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_806E3580_0000180C
    lis r4, lbl_807C3938@ha
    mr r3, r30
    addi r4, r4, lbl_807C3938@l
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E3580_00001948
lbl_fn_806E3580_0000180C:
    li r4, 0x0
    li r5, 0x10
    bl memset
    lwz r3, 0x1c(r31)
    li r0, 0x0
    stw r3, 0x0(r28)
    mr r3, r30
    lwz r7, 0x40(r1)
    mr r5, r28
    stw r0, 0xc(r28)
    mr r6, r31
    lwz r0, 0x44(r1)
    addi r4, r1, 0x18
    stw r7, 0x18(r1)
    li r7, 0x0
    stw r0, 0x1c(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806E3580_00001944
    b lbl_fn_806E3580_00001948
lbl_fn_806E3580_0000185C:
    li r3, 0x4
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_806E3580_00001888
    lis r4, lbl_807C3938@ha
    mr r3, r30
    addi r4, r4, lbl_807C3938@l
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E3580_00001948
lbl_fn_806E3580_00001888:
    li r4, 0x0
    li r5, 0x4
    bl memset
    lwz r0, 0x1c(r31)
    mr r3, r30
    stw r0, 0x0(r28)
    mr r5, r28
    lwz r7, 0x40(r1)
    mr r6, r31
    lwz r0, 0x44(r1)
    addi r4, r1, 0x10
    stw r7, 0x10(r1)
    li r7, 0x0
    stw r0, 0x14(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806E3580_00001944
    b lbl_fn_806E3580_00001948
lbl_fn_806E3580_000018D0:
    li r3, 0x4
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_806E3580_000018FC
    lis r4, lbl_807C3938@ha
    mr r3, r30
    addi r4, r4, lbl_807C3938@l
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E3580_00001948
lbl_fn_806E3580_000018FC:
    li r4, 0x0
    li r5, 0x4
    bl memset
    lwz r0, 0x1c(r31)
    mr r3, r30
    stw r0, 0x0(r28)
    mr r5, r28
    lwz r7, 0x40(r1)
    mr r6, r31
    lwz r0, 0x44(r1)
    addi r4, r1, 0x8
    stw r7, 0x8(r1)
    li r7, 0x0
    stw r0, 0xc(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806E3580_00001944
    b lbl_fn_806E3580_00001948
lbl_fn_806E3580_00001944:
    li r3, 0x0
lbl_fn_806E3580_00001948:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806E3980(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lwz r31, 0x0(r3)
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    mr r30, r9
    li r3, 0x24
    bl fn_806D7A90
    cmpwi r3, 0x0
    bne lbl_fn_806E3980_000019D0
    lis r4, lbl_807C3938@ha
    mr r3, r24
    addi r4, r4, lbl_807C3938@l
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E3980_00001A3C
lbl_fn_806E3980_000019D0:
    stw r25, 0x0(r3)
    cmpwi r25, 0x0
    li r0, 0x0
    stw r26, 0x4(r3)
    stw r28, 0x8(r3)
    stw r0, 0x14(r3)
    bne lbl_fn_806E3980_000019F8
    li r0, 0x1
    stw r0, 0x18(r3)
    b lbl_fn_806E3980_00001A18
lbl_fn_806E3980_000019F8:
    lwz r4, 0x234(r31)
    stw r4, 0x18(r3)
    addi r0, r4, 0x1
    cmpwi r0, 0x2
    stw r0, 0x234(r31)
    bge lbl_fn_806E3980_00001A18
    li r0, 0x2
    stw r0, 0x234(r31)
lbl_fn_806E3980_00001A18:
    li r0, 0x0
    stw r0, 0x1c(r3)
    stw r29, 0xc(r3)
    stw r30, 0x10(r3)
    lwz r0, 0x5c4(r31)
    stw r0, 0x20(r3)
    stw r3, 0x5c4(r31)
    stw r3, 0x0(r27)
    li r3, 0x0
lbl_fn_806E3980_00001A3C:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806E3A60(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r7, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r5, 0x0(r3)
    lwz r6, 0x5c4(r5)
    b lbl_fn_806E3A60_00001B1C
    nop
lbl_fn_806E3A60_00001A84:
    cmplw r6, r4
    bne lbl_fn_806E3A60_00001B14
    cmpwi r7, 0x0
    bne lbl_fn_806E3A60_00001AA0
    lwz r0, 0x20(r6)
    stw r0, 0x5c4(r5)
    b lbl_fn_806E3A60_00001AA8
lbl_fn_806E3A60_00001AA0:
    lwz r0, 0x20(r4)
    stw r0, 0x20(r7)
lbl_fn_806E3A60_00001AA8:
    lwz r0, 0x0(r4)
    lwz r5, 0x0(r3)
    cmpwi r0, 0x3
    bne lbl_fn_806E3A60_00001AF8
    lwz r30, 0x4(r4)
    li r4, 0x2
    lwz r3, 0x238(r5)
    subi r0, r3, 0x1
    stw r0, 0x238(r5)
    lwz r3, 0x4(r30)
    bl fn_806D7B70
    lwz r3, 0x4(r30)
    bl fn_806D7B30
    lwz r3, 0x18(r30)
    bl fn_806D7AC0
    li r31, 0x0
    stw r31, 0x18(r30)
    lwz r3, 0x8(r30)
    bl fn_806D7AC0
    stw r31, 0x8(r30)
lbl_fn_806E3A60_00001AF8:
    lwz r3, 0x4(r29)
    bl fn_806D7AC0
    li r0, 0x0
    stw r0, 0x4(r29)
    mr r3, r29
    bl fn_806D7AC0
    b lbl_fn_806E3A60_00001B24
lbl_fn_806E3A60_00001B14:
    mr r7, r6
    lwz r6, 0x20(r6)
lbl_fn_806E3A60_00001B1C:
    cmpwi r6, 0x0
    bne lbl_fn_806E3A60_00001A84
lbl_fn_806E3A60_00001B24:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806E3B50(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    lwz r3, 0x5c4(r3)
    b lbl_fn_806E3B50_00001B78
    nop
lbl_fn_806E3B50_00001B54:
    lwz r0, 0x18(r3)
    cmpw r0, r5
    bne lbl_fn_806E3B50_00001B74
    cmpwi r4, 0x0
    beq lbl_fn_806E3B50_00001B6C
    stw r3, 0x0(r4)
lbl_fn_806E3B50_00001B6C:
    li r3, 0x1
    blr
lbl_fn_806E3B50_00001B74:
    lwz r3, 0x20(r3)
lbl_fn_806E3B50_00001B78:
    cmpwi r3, 0x0
    bne lbl_fn_806E3B50_00001B54
    cmpwi r4, 0x0
    beq lbl_fn_806E3B50_00001B90
    li r0, 0x0
    stw r0, 0x0(r4)
lbl_fn_806E3B50_00001B90:
    li r3, 0x0
    blr
}

asm void fn_806E3BB0(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    lwz r3, 0x5c4(r3)
    b lbl_fn_806E3BB0_00001BD8
    nop
lbl_fn_806E3BB0_00001BB4:
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806E3BB0_00001BD4
    lwz r0, 0x0(r3)
    cmpwi r0, 0x3
    beq lbl_fn_806E3BB0_00001BD4
    li r3, 0x1
    blr
lbl_fn_806E3BB0_00001BD4:
    lwz r3, 0x20(r3)
lbl_fn_806E3BB0_00001BD8:
    cmpwi r3, 0x0
    bne lbl_fn_806E3BB0_00001BB4
    li r3, 0x0
    blr
}

asm void fn_806E3C00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r6, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806E3C00_00001C44
    cmpwi r0, 0x1
    beq lbl_fn_806E3C00_00001C50
    cmpwi r0, 0x5
    beq lbl_fn_806E3C00_00001C5C
    cmpwi r0, 0x2
    beq lbl_fn_806E3C00_00001C68
    cmpwi r0, 0x4
    beq lbl_fn_806E3C00_00001C74
    cmpwi r0, 0x6
    beq lbl_fn_806E3C00_00001C80
    b lbl_fn_806E3C00_00001C88
lbl_fn_806E3C00_00001C44:
    bl fn_806DFEC0
    mr r6, r3
    b lbl_fn_806E3C00_00001C88
lbl_fn_806E3C00_00001C50:
    bl fn_806E5570
    mr r6, r3
    b lbl_fn_806E3C00_00001C88
lbl_fn_806E3C00_00001C5C:
    bl fn_806E5840
    mr r6, r3
    b lbl_fn_806E3C00_00001C88
lbl_fn_806E3C00_00001C68:
    bl fn_806E0DE0
    mr r6, r3
    b lbl_fn_806E3C00_00001C88
lbl_fn_806E3C00_00001C74:
    bl fn_806E8890
    mr r6, r3
    b lbl_fn_806E3C00_00001C88
lbl_fn_806E3C00_00001C80:
    bl fn_806E89D0
    mr r6, r3
lbl_fn_806E3C00_00001C88:
    cmpwi r6, 0x0
    beq lbl_fn_806E3C00_00001C94
    stw r6, 0x1c(r31)
lbl_fn_806E3C00_00001C94:
    lwz r31, 0xc(r1)
    mr r3, r6
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806E3CC0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    cmpwi r4, 0x0
    lis r29, lbl_807C3948@ha
    lwz r28, 0x0(r3)
    mr r30, r3
    mr r31, r4
    addi r29, r29, lbl_807C3948@l
    li r5, 0x0
    bne lbl_fn_806E3CC0_00001CF0
    li r3, 0x3
    b lbl_fn_806E3CC0_00001FE4
lbl_fn_806E3CC0_00001CF0:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x6a
    beq lbl_fn_806E3CC0_00001D04
    cmpwi r0, 0x64
    bne lbl_fn_806E3CC0_00001D0C
lbl_fn_806E3CC0_00001D04:
    li r3, 0x3
    b lbl_fn_806E3CC0_00001FE4
lbl_fn_806E3CC0_00001D0C:
    cmpwi r0, 0x66
    beq lbl_fn_806E3CC0_00001D28
    cmpwi r0, 0x67
    beq lbl_fn_806E3CC0_00001D38
    cmpwi r0, 0x68
    beq lbl_fn_806E3CC0_00001E90
    b lbl_fn_806E3CC0_00001F9C
lbl_fn_806E3CC0_00001D28:
    bl fn_806E4B90
    cmpwi r3, 0x0
    beq lbl_fn_806E3CC0_00001F9C
    b lbl_fn_806E3CC0_00001FE4
lbl_fn_806E3CC0_00001D38:
    lwz r3, 0x8(r4)
    addi r5, r1, 0xc
    lhz r4, 0xc(r4)
    bl fn_806DA070
    lwz r0, 0xc(r1)
    cmpwi r0, 0x1
    bne lbl_fn_806E3CC0_00001F9C
    lwz r4, 0x10(r31)
    mr r3, r30
    addi r5, r1, 0x10
    li r27, 0x1
    bl fn_806E57E0
    cmpwi r3, 0x0
    bne lbl_fn_806E3CC0_00001D84
    mr r3, r30
    addi r4, r29, 0x0
    bl fn_806E91F0
    li r3, 0x3
    b lbl_fn_806E3CC0_00001FE4
lbl_fn_806E3CC0_00001D84:
    mr r3, r30
    addi r4, r31, 0x2c
    addi r5, r29, 0x1c
    bl fn_806DE480
    mr r3, r30
    addi r4, r31, 0x2c
    addi r5, r29, 0x24
    bl fn_806DE480
    lwz r5, 0x1a0(r28)
    mr r3, r30
    addi r4, r31, 0x2c
    bl fn_806DE4E0
    mr r3, r30
    addi r4, r31, 0x2c
    addi r5, r29, 0x2c
    bl fn_806DE480
    mr r3, r30
    addi r4, r31, 0x2c
    addi r5, r28, 0x110
    bl fn_806DE480
    mr r3, r30
    addi r4, r31, 0x2c
    addi r5, r29, 0x34
    bl fn_806DE480
    lwz r5, 0x10(r1)
    mr r3, r30
    addi r4, r31, 0x2c
    lwz r5, 0x1c(r5)
    bl fn_806DE480
    mr r3, r30
    addi r4, r31, 0x2c
    addi r5, r29, 0x40
    bl fn_806DE480
    lwz r4, 0x5d8(r28)
    b lbl_fn_806E3CC0_00001E40
    nop
lbl_fn_806E3CC0_00001E14:
    lwz r3, 0x10(r4)
    lwz r0, 0x10(r31)
    cmpw r3, r0
    bne lbl_fn_806E3CC0_00001E3C
    cmplw r4, r31
    beq lbl_fn_806E3CC0_00001E3C
    lwz r0, 0x0(r4)
    cmpwi r0, 0x67
    bgt lbl_fn_806E3CC0_00001E3C
    li r27, 0x0
lbl_fn_806E3CC0_00001E3C:
    lwz r4, 0x4c(r4)
lbl_fn_806E3CC0_00001E40:
    cmpwi r4, 0x0
    bne lbl_fn_806E3CC0_00001E14
    cmpwi r27, 0x0
    beq lbl_fn_806E3CC0_00001E84
    lwz r3, 0x10(r1)
    lwz r3, 0x1c(r3)
    bl fn_806D7AC0
    lwz r3, 0x10(r1)
    li r0, 0x0
    stw r0, 0x1c(r3)
    lwz r3, 0x10(r1)
    bl fn_806E5D00
    cmpwi r3, 0x0
    beq lbl_fn_806E3CC0_00001E84
    lwz r4, 0x10(r1)
    mr r3, r30
    bl fn_806E59C0
lbl_fn_806E3CC0_00001E84:
    li r0, 0x68
    stw r0, 0x0(r31)
    b lbl_fn_806E3CC0_00001F9C
lbl_fn_806E3CC0_00001E90:
    lwz r3, 0x1c(r4)
    cmpwi r3, 0x0
    beq lbl_fn_806E3CC0_00001EA8
    addi r4, r29, 0x40
    bl fn_806827C4
    mr r5, r3
lbl_fn_806E3CC0_00001EA8:
    cmpwi r5, 0x0
    beq lbl_fn_806E3CC0_00001F9C
    li r0, 0x0
    stb r0, 0x0(r5)
    addi r4, r29, 0x48
    li r5, 0x7
    lwz r28, 0x1c(r31)
    mr r3, r28
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806E3CC0_00001F60
    lwz r3, 0x18(r31)
    addi r0, r3, 0x1
    stw r0, 0x18(r31)
    cmpwi r0, 0x1
    ble lbl_fn_806E3CC0_00001EFC
    mr r3, r30
    addi r4, r29, 0x50
    bl fn_806E91F0
    li r3, 0x3
    b lbl_fn_806E3CC0_00001FE4
lbl_fn_806E3CC0_00001EFC:
    mr r3, r30
    addi r6, r1, 0x8
    li r4, 0x2
    li r5, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_806E3980
    cmpwi r3, 0x0
    beq lbl_fn_806E3CC0_00001F28
    b lbl_fn_806E3CC0_00001F54
lbl_fn_806E3CC0_00001F28:
    lwz r5, 0x8(r1)
    mr r3, r30
    lwz r4, 0x10(r31)
    lwz r5, 0x18(r5)
    bl fn_806E2B10
    cmpwi r3, 0x0
    beq lbl_fn_806E3CC0_00001F48
    b lbl_fn_806E3CC0_00001F54
lbl_fn_806E3CC0_00001F48:
    li r0, 0x65
    stw r0, 0x0(r31)
    li r3, 0x0
lbl_fn_806E3CC0_00001F54:
    cmpwi r3, 0x0
    beq lbl_fn_806E3CC0_00001F8C
    b lbl_fn_806E3CC0_00001FE4
lbl_fn_806E3CC0_00001F60:
    mr r3, r28
    addi r4, r29, 0x74
    li r5, 0x6
    bl fn_80682544
    cmpwi r3, 0x0
    beq lbl_fn_806E3CC0_00001F8C
    mr r3, r30
    addi r4, r29, 0x7c
    bl fn_806E91F0
    li r3, 0x3
    b lbl_fn_806E3CC0_00001FE4
lbl_fn_806E3CC0_00001F8C:
    li r3, 0x69
    li r0, 0x0
    stw r3, 0x0(r31)
    stw r0, 0x24(r31)
lbl_fn_806E3CC0_00001F9C:
    lwz r0, 0x34(r31)
    cmpwi r0, 0x0
    ble lbl_fn_806E3CC0_00001FE0
    lwz r4, 0x8(r31)
    mr r3, r30
    lhz r5, 0xc(r31)
    addi r6, r31, 0x2c
    addi r7, r1, 0x14
    li r8, 0x1
    bl fn_806DEA40
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    bne lbl_fn_806E3CC0_00001FD8
    cmpwi r3, 0x0
    beq lbl_fn_806E3CC0_00001FE0
lbl_fn_806E3CC0_00001FD8:
    li r0, 0x6a
    stw r0, 0x0(r31)
lbl_fn_806E3CC0_00001FE0:
    li r3, 0x0
lbl_fn_806E3CC0_00001FE4:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806E4010(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    addi r11, r1, 0x1a0
    bl _savegpr_26
    lwz r0, 0x0(r4)
    lis r30, lbl_807C3948@ha
    lwz r28, 0x0(r3)
    mr r26, r3
    cmpwi r0, 0x68
    mr r27, r4
    addi r30, r30, lbl_807C3948@l
    beq lbl_fn_806E4010_00002040
    li r3, 0x3
    b lbl_fn_806E4010_00002210
lbl_fn_806E4010_00002040:
    lwz r3, 0x8(r4)
    addi r5, r1, 0xc
    lhz r4, 0xc(r4)
    bl fn_806DA070
    lwz r0, 0xc(r1)
    cmpwi r0, 0x3
    bne lbl_fn_806E4010_0000206C
    li r0, 0x6a
    stw r0, 0x0(r27)
    li r3, 0x0
    b lbl_fn_806E4010_00002210
lbl_fn_806E4010_0000206C:
    lwz r3, 0x1c(r27)
    addi r4, r30, 0x40
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_806E4010_0000220C
    li r31, 0x0
    stb r31, 0x0(r3)
    addi r4, r30, 0x1c
    li r5, 0x6
    lwz r29, 0x1c(r27)
    mr r3, r29
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806E4010_000021F8
    mr r3, r29
    addi r4, r30, 0x24
    addi r5, r1, 0x10
    li r6, 0x10
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E4010_000020D0
    li r0, 0x6a
    stw r0, 0x0(r27)
    li r3, 0x0
    b lbl_fn_806E4010_00002210
lbl_fn_806E4010_000020D0:
    addi r3, r1, 0x10
    bl fn_80684600
    mr r29, r3
    lwz r3, 0x1c(r27)
    addi r4, r30, 0x2c
    addi r5, r1, 0x20
    li r6, 0x1f
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E4010_00002108
    li r0, 0x6a
    stw r0, 0x0(r27)
    li r3, 0x0
    b lbl_fn_806E4010_00002210
lbl_fn_806E4010_00002108:
    lwz r3, 0x1c(r27)
    addi r4, r30, 0x34
    addi r5, r1, 0x64
    li r6, 0x21
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E4010_00002134
    li r0, 0x6a
    stw r0, 0x0(r27)
    li r3, 0x0
    b lbl_fn_806E4010_00002210
lbl_fn_806E4010_00002134:
    lwz r6, 0x1a0(r28)
    mr r7, r29
    addi r3, r1, 0x88
    addi r4, r30, 0x9c
    addi r5, r28, 0x177
    crclr 6
    bl sprintf
    addi r3, r1, 0x88
    bl strlen
    mr r4, r3
    addi r3, r1, 0x88
    addi r5, r1, 0x40
    bl fn_806D7350
    addi r3, r1, 0x64
    addi r4, r1, 0x40
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_806E4010_000021C8
    mr r3, r26
    addi r4, r27, 0x2c
    addi r5, r30, 0x48
    bl fn_806DE480
    mr r3, r26
    addi r4, r27, 0x2c
    addi r5, r30, 0x40
    bl fn_806DE480
    lwz r4, 0x8(r27)
    mr r3, r26
    lhz r5, 0xc(r27)
    addi r6, r27, 0x2c
    addi r7, r1, 0x8
    li r8, 0x1
    bl fn_806DEA40
    li r0, 0x6a
    stw r0, 0x0(r27)
    li r3, 0x0
    b lbl_fn_806E4010_00002210
lbl_fn_806E4010_000021C8:
    mr r3, r26
    addi r4, r27, 0x2c
    addi r5, r30, 0x74
    bl fn_806DE480
    mr r3, r26
    addi r4, r27, 0x2c
    addi r5, r30, 0x40
    bl fn_806DE480
    li r0, 0x69
    stw r0, 0x0(r27)
    stw r29, 0x10(r27)
    b lbl_fn_806E4010_00002208
lbl_fn_806E4010_000021F8:
    li r0, 0x6a
    stw r0, 0x0(r27)
    li r3, 0x0
    b lbl_fn_806E4010_00002210
lbl_fn_806E4010_00002208:
    stw r31, 0x24(r27)
lbl_fn_806E4010_0000220C:
    li r3, 0x0
lbl_fn_806E4010_00002210:
    addi r11, r1, 0x1a0
    bl _restgpr_26
    lwz r0, 0x1a4(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}
