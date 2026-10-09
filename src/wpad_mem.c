#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSDisableInterrupts(void);
extern void OSGetTick(void);
extern void OSRestoreInterrupts(void);
extern void _restgpr_14(void);
extern void _restgpr_19(void);
extern void _restgpr_20(void);
extern void _restgpr_22(void);
extern void _restgpr_23(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_19(void);
extern void _savegpr_20(void);
extern void _savegpr_22(void);
extern void _savegpr_23(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8062CACC(void);
extern void fn_806357EC(void);
extern void fn_80665F80(void);
extern void fn_80666220(void);
extern void fn_806663E0(void);
extern void fn_806665A0(void);
extern void fn_80666750(void);
extern void fn_806667E0(void);
extern void fn_80667E40(void);
extern void fn_80667FE0(void);
extern void fn_80668C40(void);
extern void fn_80669490(void);
extern void fn_806696B0(void);
extern void fn_80669D80(void);
extern void fn_8067E23C(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_80696324(void);

/* External data declarations */
extern u8 lbl_80765188[];
extern u8 lbl_807651A0[];
extern u8 lbl_807B9658[];
extern u8 lbl_807B9688[];
extern u8 lbl_807B9F88[];
extern u8 lbl_807B9FB8[];
extern u8 lbl_80808081[];
extern u8 lbl_80829DF0[];
extern u8 lbl_8082DDA0[];
extern u8 lbl_8082DE00[];

/* Small data declarations */
extern u32 __OSInIPL;
extern u32 lbl_80880280;
extern u32 lbl_80880284;
extern u32 lbl_80880288;
extern u32 lbl_8088028C;
extern u32 lbl_80880298;
extern u32 lbl_80880299;
extern u32 lbl_8088029A;
extern u32 lbl_8088029B;
extern u32 lbl_808802B8;
extern u32 lbl_80888A10;
extern u32 lbl_80888A20;
extern u32 lbl_80888A40;
extern u32 lbl_80888A48;

/* Function declarations */
void fn_8066A1A0(void);
void fn_8066A5E0(void);
void fn_8066A950(void);
void fn_8066AA60(void);
void fn_8066AF00(void);
void fn_8066B180(void);
void fn_8066B6D0(void);
void fn_8066B7D0(void);
void fn_8066B950(void);
void fn_8066C250(void);
void fn_8066C800(void);
void fn_8066C840(void);
void fn_8066C910(void);
void fn_8066C960(void);
void fn_8066CA70(void);
void fn_8066CAC0(void);
void fn_8066CBA0(void);
void fn_8066CC50(void);
void fn_8066CDA0(void);
void fn_8066CDD0(void);
void fn_8066CF40(void);
void fn_8066D0A0(void);
void fn_8066D0B0(void);
void fn_8066D690(void);
void fn_8066DC80(void);
void fn_8066DF70(void);
void fn_8066DFA0(void);
void fn_8066E080(void);
void fn_8066E100(void);
void fn_8066E3D0(void);
void fn_8066E4B0(void);
void fn_8066E5C0(void);
void fn_8066E8F0(void);
void fn_8066E900(void);
void fn_8066E920(void);
void fn_8066E940(void);
void fn_8066E980(void);

asm void fn_8066A1A0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_19
    lis r29, lbl_80829DF0@ha
    clrlslwi r28, r3, 24, 2
    addi r29, r29, lbl_80829DF0@l
    mr r22, r3
    lwzx r27, r29, r28
    mr r23, r4
    mr r24, r5
    lwz r30, 0x840(r27)
    bl OSDisableInterrupts
    lwz r0, 0x920(r27)
    mr r26, r3
    cmpwi r0, 0x0
    bne lbl_fn_8066A1A0_00000050
    bl OSRestoreInterrupts
    b lbl_fn_8066A1A0_00000428
lbl_fn_8066A1A0_00000050:
    lbz r0, 0x3(r23)
    li r3, 0x0
    rlwinm r0, r0, 0, 30, 30
    srawi r0, r0, 1
    stw r0, 0x840(r27)
    lbz r0, 0x3(r23)
    clrlwi r0, r0, 31
    stw r0, 0x844(r27)
    lbz r0, 0x3(r23)
    extrwi r0, r0, 4, 24
    stb r0, 0x84d(r27)
    stb r3, 0x84e(r27)
    lbz r0, 0x5(r23)
    rlwinm r0, r0, 0, 24, 27
    stb r0, 0x84f(r27)
    lbz r0, 0x1(r23)
    extrwi r0, r0, 1, 24
    stw r0, 0x848(r27)
    lbz r0, 0x3(r23)
    extrwi r0, r0, 1, 28
    stw r0, 0x838(r27)
    lbz r0, 0x3(r23)
    extrwi r0, r0, 1, 29
    stw r0, 0x83c(r27)
    lbz r0, 0x905(r27)
    cmplwi r0, 0x3
    bne lbl_fn_8066A1A0_000000C8
    lbz r0, 0xb87(r27)
    stb r0, 0x84c(r27)
    b lbl_fn_8066A1A0_00000120
lbl_fn_8066A1A0_000000C8:
    lbz r0, 0x6(r23)
    cmplwi r0, 0x55
    blt lbl_fn_8066A1A0_000000E0
    li r0, 0x4
    stb r0, 0x84c(r27)
    b lbl_fn_8066A1A0_00000120
lbl_fn_8066A1A0_000000E0:
    cmplwi r0, 0x44
    blt lbl_fn_8066A1A0_000000F4
    li r0, 0x3
    stb r0, 0x84c(r27)
    b lbl_fn_8066A1A0_00000120
lbl_fn_8066A1A0_000000F4:
    cmplwi r0, 0x33
    blt lbl_fn_8066A1A0_00000108
    li r0, 0x2
    stb r0, 0x84c(r27)
    b lbl_fn_8066A1A0_00000120
lbl_fn_8066A1A0_00000108:
    cmplwi r0, 0x3
    blt lbl_fn_8066A1A0_0000011C
    li r0, 0x1
    stb r0, 0x84c(r27)
    b lbl_fn_8066A1A0_00000120
lbl_fn_8066A1A0_0000011C:
    stb r3, 0x84c(r27)
lbl_fn_8066A1A0_00000120:
    lwz r0, 0x840(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8066A1A0_0000029C
    cmpwi r30, 0x0
    bne lbl_fn_8066A1A0_00000368
    lis r31, lbl_80829DF0@ha
    la r3, lbl_80880280
    li r0, 0x0
    stbx r0, r3, r22
    clrlslwi r30, r22, 24, 2
    addi r31, r31, lbl_80829DF0@l
    lwzx r19, r31, r30
    lwz r25, 0x8e4(r27)
    addi r3, r19, 0x5ec
    bl fn_806667E0
    lis r20, fn_80667E40@ha
    lwz r4, 0x8fc(r19)
    lbz r5, 0xb86(r19)
    addi r3, r19, 0x5ec
    addi r6, r20, fn_80667E40@l
    bl fn_80665F80
    li r0, 0x1
    stb r0, 0xb85(r19)
    lbz r0, 0x93a(r19)
    cmpwi r0, 0x0
    beq lbl_fn_8066A1A0_000001BC
    lis r21, 0x4a4
    addi r3, r19, 0x5ec
    addi r5, r21, 0xfb
    addi r6, r20, fn_80667E40@l
    li r4, 0x0
    bl fn_80666220
    addi r3, r19, 0x5ec
    addi r4, r19, 0xb2c
    addi r6, r21, 0xf0
    addi r7, r20, fn_80667E40@l
    li r5, 0x10
    bl fn_806665A0
    b lbl_fn_8066A1A0_00000200
lbl_fn_8066A1A0_000001BC:
    lis r21, 0x4a4
    addi r3, r19, 0x5ec
    addi r5, r21, 0xf0
    addi r6, r20, fn_80667E40@l
    li r4, 0x55
    bl fn_80666220
    addi r3, r19, 0x5ec
    addi r5, r21, 0xfb
    addi r6, r20, fn_80667E40@l
    li r4, 0x0
    bl fn_80666220
    addi r3, r19, 0x5ec
    addi r4, r19, 0xb36
    addi r6, r21, 0xfa
    addi r7, r20, fn_80667E40@l
    li r5, 0x6
    bl fn_806665A0
lbl_fn_8066A1A0_00000200:
    li r21, 0x0
    stb r21, 0x93a(r19)
    li r3, 0xff
    li r0, -0x1
    stb r3, 0x905(r27)
    li r4, 0x0
    li r5, 0x48
    stb r21, 0x906(r27)
    lwzx r19, r31, r30
    stb r21, 0x946(r19)
    addi r3, r19, 0x94c
    stb r21, 0x945(r19)
    stb r0, 0x944(r19)
    stb r0, 0x947(r19)
    sth r21, 0x942(r19)
    stb r21, 0x93f(r19)
    sth r21, 0x940(r19)
    bl memset
    addi r3, r19, 0x994
    li r4, 0x0
    li r5, 0x48
    bl memset
    addi r3, r19, 0x9dc
    li r4, 0x0
    li r5, 0x108
    bl memset
    li r0, 0x1
    stw r0, 0x9dc(r19)
    cmpwi r25, 0x0
    stw r0, 0x994(r19)
    stw r0, 0x94c(r19)
    stb r21, 0x93e(r19)
    beq lbl_fn_8066A1A0_00000368
    mr r12, r25
    mr r3, r22
    li r4, 0xff
    mtctr r12
    bctrl
    b lbl_fn_8066A1A0_00000368
lbl_fn_8066A1A0_0000029C:
    li r31, 0x0
    stb r31, 0x905(r27)
    addi r3, r27, 0x5ec
    stb r31, 0x906(r27)
    bl fn_806667E0
    lwz r4, 0x8fc(r27)
    addi r3, r27, 0x5ec
    lbz r5, 0xb86(r27)
    li r6, 0x0
    bl fn_80665F80
    cmpwi r30, 0x0
    beq lbl_fn_8066A1A0_00000368
    li r25, 0x1
    stb r25, 0xb89(r27)
    li r0, 0x12c
    lis r3, lbl_80829DF0@ha
    sth r0, 0xb8a(r27)
    clrlslwi r4, r22, 24, 2
    addi r3, r3, lbl_80829DF0@l
    li r0, -0x1
    lwzx r19, r3, r4
    li r4, 0x0
    li r5, 0x48
    stb r31, 0x946(r19)
    addi r3, r19, 0x94c
    stb r31, 0x945(r19)
    stb r0, 0x944(r19)
    stb r0, 0x947(r19)
    sth r31, 0x942(r19)
    stb r31, 0x93f(r19)
    sth r31, 0x940(r19)
    bl memset
    addi r3, r19, 0x994
    li r4, 0x0
    li r5, 0x48
    bl memset
    addi r3, r19, 0x9dc
    li r4, 0x0
    li r5, 0x108
    bl memset
    stw r25, 0x9dc(r19)
    stw r25, 0x994(r19)
    stw r25, 0x94c(r19)
    stb r31, 0x93e(r19)
    lwz r12, 0x8e4(r27)
    cmpwi r12, 0x0
    beq lbl_fn_8066A1A0_00000368
    mr r3, r22
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_8066A1A0_00000368:
    lwz r3, 0x850(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8066A1A0_00000388
    addi r4, r27, 0x838
    li r5, 0x18
    bl memcpy
    li r0, 0x0
    stw r0, 0x850(r27)
lbl_fn_8066A1A0_00000388:
    lwzx r4, r29, r28
    mr r3, r24
    li r5, 0x60
    lbz r0, 0x90c(r4)
    cntlzw r0, r0
    srwi r0, r0, 5
    mulli r0, r0, 0x60
    add r4, r4, r0
    addi r4, r4, 0xa0
    bl memcpy
    lbz r0, 0x2(r23)
    lbz r3, 0x1(r23)
    rlwimi r3, r0, 8, 16, 23
    lhz r4, 0x0(r24)
    andi. r3, r3, 0x9f1f
    lbz r0, 0x28(r24)
    rlwimi r3, r4, 0, 17, 18
    sth r3, 0x0(r24)
    lbz r3, 0x905(r27)
    cmplw r0, r3
    beq lbl_fn_8066A1A0_000003E8
    li r0, -0x4
    stb r3, 0x28(r24)
    stb r0, 0x29(r24)
lbl_fn_8066A1A0_000003E8:
    lwz r12, 0x8e0(r27)
    cmpwi r12, 0x0
    beq lbl_fn_8066A1A0_00000418
    lbz r0, 0x904(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8066A1A0_00000418
    mr r3, r22
    li r4, 0x0
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x8e0(r27)
lbl_fn_8066A1A0_00000418:
    li r0, 0x0
    stb r0, 0x904(r27)
    mr r3, r26
    bl OSRestoreInterrupts
lbl_fn_8066A1A0_00000428:
    addi r11, r1, 0x40
    bl _restgpr_19
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8066A5E0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_20
    lis r30, lbl_80829DF0@ha
    clrlslwi r29, r3, 24, 2
    addi r30, r30, lbl_80829DF0@l
    mr r20, r3
    lwzx r28, r30, r29
    mr r21, r4
    mr r22, r5
    bl OSDisableInterrupts
    lbz r0, 0x3(r21)
    mr r27, r3
    clrlwi. r24, r0, 28
    beq lbl_fn_8066A5E0_000004CC
    li r0, -0x1
    stw r0, 0xb74(r28)
    lwz r12, 0x8e0(r28)
    cmpwi r12, 0x0
    beq lbl_fn_8066A5E0_000004C4
    lwz r0, 0x8e4(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8066A5E0_000004AC
    cmplw r0, r12
    beq lbl_fn_8066A5E0_000004BC
lbl_fn_8066A5E0_000004AC:
    mr r3, r20
    li r4, -0x3
    mtctr r12
    bctrl
lbl_fn_8066A5E0_000004BC:
    li r0, 0x0
    stw r0, 0x8e0(r28)
lbl_fn_8066A5E0_000004C4:
    li r0, 0x0
    stw r0, 0x900(r28)
lbl_fn_8066A5E0_000004CC:
    lwz r4, 0xb70(r28)
    lbz r3, 0x3(r21)
    lbz r0, 0x4(r21)
    clrlwi r25, r4, 16
    lbz r26, 0x5(r21)
    srawi r3, r3, 4
    rlwimi r26, r0, 8, 16, 23
    srwi r31, r4, 16
    addi r3, r3, 0x1
    subf r0, r25, r26
    cmplw r26, r25
    clrlwi r23, r3, 24
    extsh r6, r0
    blt lbl_fn_8066A5E0_00000730
    lhz r0, 0xb78(r28)
    clrlwi r3, r26, 16
    add r0, r25, r0
    cmpw r3, r0
    bgt lbl_fn_8066A5E0_00000730
    cmpwi r24, 0x0
    bne lbl_fn_8066A5E0_00000534
    lwz r0, 0xb6c(r28)
    mr r5, r23
    addi r4, r21, 0x6
    add r3, r0, r6
    bl memcpy
lbl_fn_8066A5E0_00000534:
    lhz r5, 0xb78(r28)
    clrlwi r0, r26, 16
    add r0, r0, r23
    add r3, r25, r5
    cmpw r3, r0
    bne lbl_fn_8066A5E0_00000730
    lwz r3, 0xb74(r28)
    cmplwi r31, 0x4a4
    li r0, -0x3
    srawi r3, r3, 31
    and r23, r0, r3
    bne lbl_fn_8066A5E0_00000588
    lbz r3, 0xb85(r28)
    addi r0, r3, 0xfe
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_fn_8066A5E0_00000588
    lwz r4, 0xb6c(r28)
    mr r3, r20
    mr r6, r25
    bl fn_8066DC80
lbl_fn_8066A5E0_00000588:
    lwz r3, 0xb70(r28)
    cmpwi r3, 0x0
    bne lbl_fn_8066A5E0_000005A0
    lwz r0, 0x924(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8066A5E0_000005B4
lbl_fn_8066A5E0_000005A0:
    cmplwi r3, 0x176c
    bne lbl_fn_8066A5E0_000005C0
    lwz r0, 0x924(r28)
    cmpwi r0, 0x1
    bne lbl_fn_8066A5E0_000005C0
lbl_fn_8066A5E0_000005B4:
    mr r3, r20
    mr r4, r23
    bl fn_80667FE0
lbl_fn_8066A5E0_000005C0:
    lwz r3, 0xb70(r28)
    subis r0, r3, 0x4a4
    cmplwi r0, 0x20
    bne lbl_fn_8066A5E0_000005DC
    mr r3, r20
    mr r4, r23
    bl fn_80668C40
lbl_fn_8066A5E0_000005DC:
    lwz r3, 0xb70(r28)
    subis r0, r3, 0x4a4
    cmplwi r0, 0xf0
    beq lbl_fn_8066A5E0_000005F4
    cmplwi r0, 0xfa
    bne lbl_fn_8066A5E0_00000600
lbl_fn_8066A5E0_000005F4:
    mr r3, r20
    mr r4, r23
    bl fn_806696B0
lbl_fn_8066A5E0_00000600:
    lwz r3, 0xb70(r28)
    subis r0, r3, 0x4a4
    cmplwi r0, 0xf6
    bne lbl_fn_8066A5E0_00000678
    lis r3, lbl_80829DF0@ha
    clrlslwi r0, r20, 24, 2
    addi r3, r3, lbl_80829DF0@l
    lwzx r3, r3, r0
    lbz r0, 0x93b(r3)
    lwz r5, 0xb6c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8066A5E0_00000678
    lbz r0, 0x93d(r3)
    cmplwi r0, 0x1
    bne lbl_fn_8066A5E0_00000678
    cmpwi r23, 0x0
    beq lbl_fn_8066A5E0_00000650
    li r0, 0x0
    stb r0, 0x93d(r3)
    b lbl_fn_8066A5E0_00000678
lbl_fn_8066A5E0_00000650:
    li r0, 0x2
    stb r0, 0x93d(r3)
    li r0, 0x0
    la r4, lbl_8088028C
    stb r0, 0xb09(r3)
    la r3, lbl_80880288
    lbz r0, 0x3(r5)
    stbx r0, r4, r20
    lbz r0, 0x2(r5)
    stbx r0, r3, r20
lbl_fn_8066A5E0_00000678:
    lwz r3, 0xb70(r28)
    subis r0, r3, 0x4a4
    cmplwi r0, 0x40
    bne lbl_fn_8066A5E0_00000694
    mr r3, r20
    mr r4, r23
    bl fn_80669490
lbl_fn_8066A5E0_00000694:
    lwz r3, 0xb70(r28)
    subis r0, r3, 0x4a4
    cmplwi r0, 0xf3
    bne lbl_fn_8066A5E0_000006CC
    lbz r0, 0xba4(r28)
    cmplwi r0, 0x3
    bne lbl_fn_8066A5E0_000006BC
    li r0, 0x9
    stb r0, 0x93d(r28)
    b lbl_fn_8066A5E0_000006CC
lbl_fn_8066A5E0_000006BC:
    cmplwi r0, 0x4
    bne lbl_fn_8066A5E0_000006CC
    li r0, 0x6
    stb r0, 0x93d(r28)
lbl_fn_8066A5E0_000006CC:
    lwz r0, 0xb70(r28)
    cmplwi r0, 0x2a
    bne lbl_fn_8066A5E0_000006E8
    mr r3, r20
    mr r4, r23
    li r5, 0x0
    bl fn_80669D80
lbl_fn_8066A5E0_000006E8:
    lwz r0, 0xb70(r28)
    cmplwi r0, 0x62
    bne lbl_fn_8066A5E0_00000704
    mr r3, r20
    mr r4, r23
    li r5, 0x1
    bl fn_80669D80
lbl_fn_8066A5E0_00000704:
    lwz r12, 0x8e0(r28)
    cmpwi r12, 0x0
    beq lbl_fn_8066A5E0_00000728
    mr r3, r20
    mr r4, r23
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x8e0(r28)
lbl_fn_8066A5E0_00000728:
    li r0, 0x0
    stw r0, 0x900(r28)
lbl_fn_8066A5E0_00000730:
    lwzx r4, r30, r29
    mr r3, r22
    li r5, 0x60
    lbz r0, 0x90c(r4)
    cntlzw r0, r0
    srwi r0, r0, 5
    mulli r0, r0, 0x60
    add r4, r4, r0
    addi r4, r4, 0xa0
    bl memcpy
    lbz r0, 0x2(r21)
    lbz r3, 0x1(r21)
    rlwimi r3, r0, 8, 16, 23
    lhz r4, 0x0(r22)
    andi. r3, r3, 0x9f1f
    lbz r0, 0x28(r22)
    rlwimi r3, r4, 0, 17, 18
    sth r3, 0x0(r22)
    lbz r3, 0x905(r28)
    cmplw r0, r3
    beq lbl_fn_8066A5E0_00000790
    li r0, -0x4
    stb r3, 0x28(r22)
    stb r0, 0x29(r22)
lbl_fn_8066A5E0_00000790:
    mr r3, r27
    bl OSRestoreInterrupts
    addi r11, r1, 0x40
    bl _restgpr_20
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8066A950(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r30, lbl_80829DF0@ha
    clrlslwi r26, r3, 24, 2
    addi r30, r30, lbl_80829DF0@l
    mr r27, r3
    lwzx r31, r30, r26
    mr r28, r4
    mr r29, r5
    bl OSDisableInterrupts
    lwzx r4, r30, r26
    mr r30, r3
    mr r3, r29
    li r5, 0x60
    lbz r0, 0x90c(r4)
    cntlzw r0, r0
    srwi r0, r0, 5
    mulli r0, r0, 0x60
    add r4, r4, r0
    addi r4, r4, 0xa0
    bl memcpy
    lbz r0, 0x2(r28)
    lbz r3, 0x1(r28)
    rlwimi r3, r0, 8, 16, 23
    lhz r4, 0x0(r29)
    andi. r3, r3, 0x9f1f
    lbz r0, 0x28(r29)
    rlwimi r3, r4, 0, 17, 18
    sth r3, 0x0(r29)
    lbz r3, 0x905(r31)
    cmplw r0, r3
    beq lbl_fn_8066A950_00000848
    li r0, -0x4
    stb r3, 0x28(r29)
    stb r0, 0x29(r29)
lbl_fn_8066A950_00000848:
    lbz r4, 0x4(r28)
    li r3, -0x3
    lbz r5, 0x3(r28)
    lbz r0, 0xb7f(r31)
    cntlzw r4, r4
    extrwi r4, r4, 1, 26
    neg r4, r4
    cmplw r0, r5
    andc r4, r3, r4
    bne lbl_fn_8066A950_00000898
    lwz r12, 0x8e0(r31)
    cmpwi r12, 0x0
    beq lbl_fn_8066A950_00000890
    mr r3, r27
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x8e0(r31)
lbl_fn_8066A950_00000890:
    li r0, 0x0
    stw r0, 0x900(r31)
lbl_fn_8066A950_00000898:
    mr r3, r30
    bl OSRestoreInterrupts
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8066AA60(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x50
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stfd f30, 0x80(r1)
    psq_st f30, 0x88(r1), 0, 0
    stfd f29, 0x70(r1)
    psq_st f29, 0x78(r1), 0, 0
    stfd f28, 0x60(r1)
    psq_st f28, 0x68(r1), 0, 0
    stfd f27, 0x50(r1)
    psq_st f27, 0x58(r1), 0, 0
    bl _savegpr_22
    lis r8, lbl_80829DF0@ha
    lis r0, 0x4330
    slwi r27, r3, 2
    lis r3, lbl_8082DDA0@ha
    addi r8, r8, lbl_80829DF0@l
    stw r0, 0x8(r1)
    lwzx r8, r8, r27
    mr r24, r4
    stw r0, 0x10(r1)
    addi r3, r3, lbl_8082DDA0@l
    lbz r0, 0xba6(r8)
    cmpwi r0, 0x0
    beq lbl_fn_8066AA60_00000940
    lwz r3, 0x0(r4)
    li r0, -0x4
    stb r0, 0x29(r3)
    b lbl_fn_8066AA60_00000D14
lbl_fn_8066AA60_00000940:
    cmplwi r5, 0x3
    bne lbl_fn_8066AA60_00000AB4
    li r0, 0x4
    lfd f3, lbl_80888A48
    lfs f1, lbl_80888A40
    li r5, 0x0
    li r10, 0x0
    li r9, 0x2ff
    mtctr r0
    nop
lbl_fn_8066AA60_00000968:
    clrlwi r8, r5, 24
    clrlslwi r0, r5, 24, 2
    subf r8, r8, r0
    addi r0, r8, 0x2
    cmpw r0, r7
    bge lbl_fn_8066AA60_00000A74
    add r23, r6, r8
    lwz r8, 0x0(r4)
    clrlslwi r0, r5, 24, 3
    lbz r12, 0x0(r23)
    add r11, r8, r0
    lbz r22, 0x2(r23)
    lbz r8, 0x1(r23)
    extsh r25, r12
    rlwinm r23, r22, 4, 22, 23
    rlwinm r12, r22, 2, 22, 23
    or r23, r25, r23
    sth r23, 0x8(r11)
    extsh r23, r8
    clrlwi r11, r22, 28
    lwz r8, 0x0(r4)
    or r12, r23, r12
    extsh r12, r12
    add r8, r8, r0
    subfic r12, r12, 0x2ff
    sth r12, 0xa(r8)
    lwz r8, 0x0(r4)
    add r8, r8, r0
    sth r11, 0xc(r8)
    lwz r8, 0x0(r4)
    add r11, r8, r0
    lhz r8, 0xc(r11)
    stw r8, 0xc(r1)
    stw r8, 0x14(r1)
    lfd f2, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f2, f3
    fsubs f0, f0, f3
    fmuls f0, f2, f0
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r8, 0x1c(r1)
    clrlwi r8, r8, 24
    sth r8, 0xc(r11)
    lwz r8, 0x0(r4)
    add r11, r8, r0
    lhz r8, 0xc(r11)
    cmpwi r8, 0x0
    beq lbl_fn_8066AA60_00000A48
    lha r8, 0x8(r11)
    cmpwi r8, 0x3ff
    beq lbl_fn_8066AA60_00000A48
    lha r8, 0xa(r11)
    cmpwi r8, 0x2ff
    bne lbl_fn_8066AA60_00000A64
lbl_fn_8066AA60_00000A48:
    sth r10, 0x8(r11)
    lwz r8, 0x0(r4)
    add r8, r8, r0
    sth r9, 0xa(r8)
    lwz r8, 0x0(r4)
    add r8, r8, r0
    sth r10, 0xc(r8)
lbl_fn_8066AA60_00000A64:
    lwz r8, 0x0(r4)
    add r8, r8, r0
    stb r5, 0xe(r8)
    b lbl_fn_8066AA60_00000AA8
lbl_fn_8066AA60_00000A74:
    lwz r0, 0x0(r4)
    clrlslwi r11, r5, 24, 3
    add r8, r0, r11
    sth r10, 0x8(r8)
    lwz r0, 0x0(r4)
    add r8, r0, r11
    sth r9, 0xa(r8)
    lwz r0, 0x0(r4)
    add r8, r0, r11
    sth r10, 0xc(r8)
    lwz r0, 0x0(r4)
    add r8, r0, r11
    stb r5, 0xe(r8)
lbl_fn_8066AA60_00000AA8:
    addi r5, r5, 0x1
    bdnz lbl_fn_8066AA60_00000968
    b lbl_fn_8066AA60_00000BEC
lbl_fn_8066AA60_00000AB4:
    cmplwi r5, 0x1
    bne lbl_fn_8066AA60_00000BEC
    li r0, 0x4
    li r5, 0x0
    li r8, 0xc
    li r10, 0x0
    li r9, 0x2ff
    mtctr r0
lbl_fn_8066AA60_00000AD4:
    clrlwi r12, r5, 24
    clrlslwi r11, r5, 24, 2
    srwi r7, r12, 31
    clrlwi r0, r5, 31
    subf r12, r12, r11
    extrwi r23, r5, 7, 24
    rlwinm r11, r5, 1, 23, 29
    xor r0, r0, r7
    add r12, r6, r12
    add r11, r11, r23
    subf. r0, r7, r0
    subf r12, r23, r12
    add r7, r6, r11
    lbz r23, 0x0(r12)
    lbz r12, 0x1(r12)
    lbz r22, 0x2(r7)
    bne lbl_fn_8066AA60_00000B58
    lwz r7, 0x0(r4)
    clrlslwi r0, r5, 24, 3
    extsh r23, r23
    rlwinm r11, r22, 4, 22, 23
    add r7, r7, r0
    extsh r12, r12
    or r11, r23, r11
    sth r11, 0x8(r7)
    rlwinm r11, r22, 2, 22, 23
    lwz r7, 0x0(r4)
    or r11, r12, r11
    extsh r11, r11
    add r7, r7, r0
    subfic r11, r11, 0x2ff
    sth r11, 0xa(r7)
    b lbl_fn_8066AA60_00000B94
lbl_fn_8066AA60_00000B58:
    lwz r7, 0x0(r4)
    clrlslwi r0, r5, 24, 3
    extsh r23, r23
    clrlslwi r11, r22, 30, 8
    add r7, r7, r0
    extsh r12, r12
    or r11, r23, r11
    sth r11, 0x8(r7)
    rlwinm r11, r22, 6, 22, 23
    lwz r7, 0x0(r4)
    or r11, r12, r11
    extsh r11, r11
    add r7, r7, r0
    subfic r11, r11, 0x2ff
    sth r11, 0xa(r7)
lbl_fn_8066AA60_00000B94:
    lwz r7, 0x0(r4)
    add r11, r7, r0
    lha r7, 0x8(r11)
    cmpwi r7, 0x3ff
    beq lbl_fn_8066AA60_00000BB4
    lha r7, 0xa(r11)
    cmpwi r7, 0x2ff
    bne lbl_fn_8066AA60_00000BD4
lbl_fn_8066AA60_00000BB4:
    sth r10, 0x8(r11)
    lwz r7, 0x0(r4)
    add r7, r7, r0
    sth r9, 0xa(r7)
    lwz r7, 0x0(r4)
    add r7, r7, r0
    sth r10, 0xc(r7)
    b lbl_fn_8066AA60_00000BD8
lbl_fn_8066AA60_00000BD4:
    sth r8, 0xc(r11)
lbl_fn_8066AA60_00000BD8:
    lwz r7, 0x0(r4)
    add r7, r7, r0
    stb r5, 0xe(r7)
    addi r5, r5, 0x1
    bdnz lbl_fn_8066AA60_00000AD4
lbl_fn_8066AA60_00000BEC:
    lfd f30, lbl_80888A20
    addi r28, r3, 0x0
    lfs f31, lbl_80888A10
    addi r29, r3, 0x20
    addi r30, r3, 0x10
    addi r31, r3, 0x30
    addi r23, r3, 0x40
    li r25, 0x0
lbl_fn_8066AA60_00000C0C:
    lwz r5, 0x0(r24)
    clrlslwi r26, r25, 24, 3
    add r3, r5, r26
    lha r4, 0x8(r3)
    cmpwi r4, 0x0
    bne lbl_fn_8066AA60_00000C30
    lha r0, 0xa(r3)
    cmpwi r0, 0x2ff
    beq lbl_fn_8066AA60_00000D08
lbl_fn_8066AA60_00000C30:
    add r22, r5, r26
    xoris r3, r4, 0x8000
    lha r0, 0xa(r22)
    stw r3, 0xc(r1)
    xoris r0, r0, 0x8000
    lfsx f0, r23, r27
    stw r0, 0x14(r1)
    lfd f2, 0x8(r1)
    fmuls f1, f31, f0
    lfd f0, 0x10(r1)
    fsubs f5, f2, f30
    lfsx f4, r28, r27
    fsubs f2, f0, f30
    lfsx f0, r30, r27
    lfsx f3, r29, r27
    fadds f4, f5, f4
    fadds f2, f2, f0
    lfsx f0, r31, r27
    fsubs f29, f4, f3
    fsubs f27, f2, f0
    bl fn_8068AD58
    frsp f2, f1
    lfsx f0, r23, r27
    fmuls f1, f31, f0
    fmuls f28, f27, f2
    bl fn_8068A850
    frsp f1, f1
    lfsx f0, r29, r27
    fmuls f1, f29, f1
    fsubs f1, f1, f28
    fadds f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    sth r0, 0x8(r22)
    lfsx f0, r23, r27
    fmuls f1, f31, f0
    bl fn_8068A850
    frsp f2, f1
    lfsx f0, r23, r27
    fmuls f1, f31, f0
    fmuls f28, f27, f2
    bl fn_8068AD58
    frsp f1, f1
    lwz r0, 0x0(r24)
    lfsx f0, r31, r27
    add r3, r0, r26
    fmuls f1, f29, f1
    fadds f1, f1, f28
    fadds f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r0, 0x24(r1)
    sth r0, 0xa(r3)
lbl_fn_8066AA60_00000D08:
    addi r25, r25, 0x1
    cmplwi r25, 0x4
    blt lbl_fn_8066AA60_00000C0C
lbl_fn_8066AA60_00000D14:
    addi r11, r1, 0x50
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    psq_l f29, 0x78(r1), 0, 0
    lfd f29, 0x70(r1)
    psq_l f28, 0x68(r1), 0, 0
    lfd f28, 0x60(r1)
    psq_l f27, 0x58(r1), 0, 0
    lfd f27, 0x50(r1)
    bl _restgpr_22
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8066AF00(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    clrlslwi r3, r5, 24, 3
    mulli r0, r5, 0xc
    lbz r9, 0x0(r6)
    lbz r8, 0x2(r6)
    lwz r7, 0x0(r4)
    extsh r9, r9
    rlwinm r8, r8, 4, 22, 23
    add r7, r7, r3
    or r8, r9, r8
    sth r8, 0x8(r7)
    lbz r9, 0x1(r6)
    lbz r8, 0x2(r6)
    lwz r7, 0x0(r4)
    extsh r9, r9
    rlwinm r8, r8, 2, 22, 23
    or r8, r9, r8
    add r7, r7, r3
    extsh r8, r8
    subfic r8, r8, 0x2ff
    sth r8, 0xa(r7)
    lbz r8, 0x7(r6)
    lwz r7, 0x0(r4)
    clrlslwi r9, r8, 24, 8
    lbz r8, 0x8(r6)
    extsh r9, r9
    add r7, r7, r0
    or r8, r9, r8
    clrlslwi r8, r8, 22, 6
    sth r8, 0x32(r7)
    lwz r7, 0x0(r4)
    lbz r8, 0x2(r6)
    add r7, r7, r0
    clrlwi r8, r8, 28
    stb r8, 0x34(r7)
    lbz r10, 0x3(r6)
    lwz r7, 0x0(r4)
    extsb r8, r10
    addi r9, r8, 0x1
    add r7, r7, r0
    subfic r8, r8, -0x1
    nor r8, r9, r8
    srawi r8, r8, 31
    andc r8, r10, r8
    sth r8, 0x2a(r7)
    lbz r10, 0x4(r6)
    lwz r7, 0x0(r4)
    extsb r8, r10
    addi r9, r8, 0x1
    add r7, r7, r0
    subfic r8, r8, -0x1
    nor r8, r9, r8
    srawi r8, r8, 31
    andc r8, r10, r8
    sth r8, 0x2c(r7)
    lbz r10, 0x5(r6)
    lwz r7, 0x0(r4)
    extsb r8, r10
    addi r9, r8, 0x1
    add r7, r7, r0
    subfic r8, r8, -0x1
    nor r8, r9, r8
    srawi r8, r8, 31
    andc r8, r10, r8
    sth r8, 0x2e(r7)
    lbz r9, 0x6(r6)
    lwz r6, 0x0(r4)
    extsb r7, r9
    addi r8, r7, 0x1
    add r6, r6, r0
    subfic r7, r7, -0x1
    nor r7, r8, r7
    srawi r7, r7, 31
    andc r7, r9, r7
    sth r7, 0x30(r6)
    lwz r7, 0x0(r4)
    lis r6, 0x4330
    stw r6, 0x8(r1)
    add r8, r7, r0
    lfd f3, lbl_80888A20
    lha r7, 0x2a(r8)
    stw r6, 0x10(r1)
    slwi r6, r7, 3
    lfs f0, lbl_80888A40
    sth r6, 0x2a(r8)
    lwz r6, 0x0(r4)
    add r7, r6, r0
    lha r6, 0x2c(r7)
    slwi r6, r6, 3
    extsh r6, r6
    subfic r6, r6, 0x2ff
    sth r6, 0x2c(r7)
    lwz r6, 0x0(r4)
    add r7, r6, r0
    lha r6, 0x2e(r7)
    slwi r6, r6, 3
    sth r6, 0x2e(r7)
    lwz r6, 0x0(r4)
    add r7, r6, r0
    lha r6, 0x30(r7)
    slwi r6, r6, 3
    extsh r6, r6
    subfic r6, r6, 0x2ff
    sth r6, 0x30(r7)
    lwz r6, 0x0(r4)
    add r7, r6, r0
    add r6, r6, r3
    lbz r7, 0x34(r7)
    extsb r7, r7
    xoris r7, r7, 0x8000
    stw r7, 0xc(r1)
    stw r7, 0x14(r1)
    lfd f2, 0x8(r1)
    lfd f1, 0x10(r1)
    fsubs f2, f2, f3
    fsubs f1, f1, f3
    fmuls f1, f2, f1
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r7, 0x1c(r1)
    sth r7, 0xc(r6)
    lwz r8, 0x0(r4)
    add r7, r8, r3
    lhz r6, 0xc(r7)
    cmpwi r6, 0x0
    beq lbl_fn_8066AF00_00000F84
    lha r6, 0x8(r7)
    cmpwi r6, 0x3ff
    beq lbl_fn_8066AF00_00000F84
    lha r6, 0xa(r7)
    cmpwi r6, 0x2ff
    beq lbl_fn_8066AF00_00000F84
    add r6, r8, r0
    lbz r6, 0x34(r6)
    cmpwi r6, 0xf
    bne lbl_fn_8066AF00_00000FC4
lbl_fn_8066AF00_00000F84:
    add r6, r8, r3
    li r8, 0x0
    sth r8, 0x8(r6)
    li r7, 0x2ff
    lwz r6, 0x0(r4)
    add r6, r6, r3
    sth r7, 0xa(r6)
    lwz r6, 0x0(r4)
    add r6, r6, r3
    sth r8, 0xc(r6)
    lwz r6, 0x0(r4)
    add r6, r6, r0
    sth r8, 0x32(r6)
    lwz r6, 0x0(r4)
    add r6, r6, r0
    stb r8, 0x34(r6)
lbl_fn_8066AF00_00000FC4:
    lwz r0, 0x0(r4)
    add r3, r0, r3
    stb r5, 0xe(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_8066B180(void)
{
    nofralloc
    lis r8, lbl_80829DF0@ha
    cmpwi r5, 0x2
    slwi r0, r3, 2
    addi r8, r8, lbl_80829DF0@l
    lwzx r8, r8, r0
    beq lbl_fn_8066B180_00001004
    cmpwi r5, 0x3
    beq lbl_fn_8066B180_00001104
    b lbl_fn_8066B180_00001198
lbl_fn_8066B180_00001004:
    lbz r5, 0x0(r6)
    cmplwi r7, 0x9
    lbz r0, 0x4(r6)
    slwi r9, r5, 2
    lwz r5, 0x0(r4)
    extsh r9, r9
    clrlwi r0, r0, 30
    clrrwi r9, r9, 2
    extsh r9, r9
    or r0, r9, r0
    sth r0, 0x2c(r5)
    lbz r0, 0x1(r6)
    lbz r9, 0x4(r6)
    slwi r0, r0, 2
    lwz r5, 0x0(r4)
    extsh r10, r0
    clrrwi r10, r10, 2
    extrwi r0, r9, 2, 28
    srawi r9, r9, 2
    extsh r9, r10
    or r0, r9, r0
    sth r0, 0x30(r5)
    lbz r0, 0x2(r6)
    lbz r9, 0x4(r6)
    slwi r0, r0, 2
    lwz r5, 0x0(r4)
    extsh r10, r0
    extrwi r0, r9, 2, 26
    srawi r9, r9, 4
    clrrwi r10, r10, 2
    extsh r9, r10
    or r0, r9, r0
    sth r0, 0x2e(r5)
    lbz r5, 0x3(r6)
    lbz r0, 0x4(r6)
    slwi r9, r5, 2
    lwz r5, 0x0(r4)
    extsh r9, r9
    srawi r0, r0, 6
    clrrwi r9, r9, 2
    extsh r9, r9
    extsh r0, r0
    or r0, r9, r0
    sth r0, 0x32(r5)
    lwz r5, 0x0(r4)
    lbz r0, 0x5(r6)
    stb r0, 0x34(r5)
    bge lbl_fn_8066B180_000010CC
    li r0, 0x0
    b lbl_fn_8066B180_000010D0
lbl_fn_8066B180_000010CC:
    lbz r0, 0x6(r6)
lbl_fn_8066B180_000010D0:
    lwz r5, 0x0(r4)
    cmplwi r7, 0x9
    stb r0, 0x35(r5)
    bge lbl_fn_8066B180_000010E8
    li r0, 0x0
    b lbl_fn_8066B180_000010F8
lbl_fn_8066B180_000010E8:
    lbz r5, 0x7(r6)
    lbz r0, 0x8(r6)
    rlwimi r0, r5, 8, 16, 23
    xori r0, r0, 0xffff
lbl_fn_8066B180_000010F8:
    lwz r5, 0x0(r4)
    sth r0, 0x2a(r5)
    b lbl_fn_8066B180_00001248
lbl_fn_8066B180_00001104:
    lbz r0, 0x0(r6)
    cmplwi r7, 0x8
    lwz r5, 0x0(r4)
    extsh r0, r0
    slwi r0, r0, 2
    sth r0, 0x2c(r5)
    lbz r0, 0x1(r6)
    lwz r5, 0x0(r4)
    extsh r0, r0
    slwi r0, r0, 2
    sth r0, 0x30(r5)
    lbz r0, 0x2(r6)
    lwz r5, 0x0(r4)
    extsh r0, r0
    slwi r0, r0, 2
    sth r0, 0x2e(r5)
    lbz r0, 0x3(r6)
    lwz r5, 0x0(r4)
    extsh r0, r0
    slwi r0, r0, 2
    sth r0, 0x32(r5)
    lwz r5, 0x0(r4)
    lbz r0, 0x4(r6)
    stb r0, 0x34(r5)
    lwz r5, 0x0(r4)
    lbz r0, 0x5(r6)
    stb r0, 0x35(r5)
    bge lbl_fn_8066B180_0000117C
    li r0, 0x0
    b lbl_fn_8066B180_0000118C
lbl_fn_8066B180_0000117C:
    lbz r5, 0x6(r6)
    lbz r0, 0x7(r6)
    rlwimi r0, r5, 8, 16, 23
    xori r0, r0, 0xffff
lbl_fn_8066B180_0000118C:
    lwz r5, 0x0(r4)
    sth r0, 0x2a(r5)
    b lbl_fn_8066B180_00001248
lbl_fn_8066B180_00001198:
    lbz r0, 0x0(r6)
    lwz r5, 0x0(r4)
    clrlslwi r0, r0, 26, 4
    sth r0, 0x2c(r5)
    lbz r0, 0x1(r6)
    lwz r5, 0x0(r4)
    clrlslwi r0, r0, 26, 4
    sth r0, 0x2e(r5)
    lbz r0, 0x2(r6)
    lbz r7, 0x1(r6)
    srawi r10, r0, 7
    lbz r9, 0x0(r6)
    rlwinm r0, r7, 27, 29, 30
    lwz r5, 0x0(r4)
    rlwimi r0, r9, 29, 27, 28
    extsh r10, r10
    or r0, r10, r0
    srawi r9, r9, 3
    extsh r0, r0
    srawi r7, r7, 5
    slwi r0, r0, 5
    sth r0, 0x30(r5)
    lbz r0, 0x2(r6)
    lwz r5, 0x0(r4)
    clrlslwi r0, r0, 27, 5
    sth r0, 0x32(r5)
    lbz r5, 0x2(r6)
    lbz r0, 0x3(r6)
    srawi r7, r5, 2
    lwz r5, 0x0(r4)
    srawi r0, r0, 5
    rlwimi r0, r7, 0, 27, 28
    clrlslwi r0, r0, 27, 3
    stb r0, 0x34(r5)
    lbz r0, 0x3(r6)
    lwz r5, 0x0(r4)
    clrlslwi r0, r0, 27, 3
    stb r0, 0x35(r5)
    lbz r7, 0x4(r6)
    lbz r0, 0x5(r6)
    rlwimi r0, r7, 8, 16, 23
    lwz r5, 0x0(r4)
    xori r0, r0, 0xffff
    sth r0, 0x2a(r5)
lbl_fn_8066B180_00001248:
    lbz r0, 0x905(r8)
    cmplwi r0, 0x2
    bne lbl_fn_8066B180_00001298
    lwz r6, 0x0(r4)
    lha r5, 0x2c(r6)
    subi r0, r5, 0x200
    sth r0, 0x2c(r6)
    lwz r6, 0x0(r4)
    lha r5, 0x2e(r6)
    subi r0, r5, 0x200
    sth r0, 0x2e(r6)
    lwz r6, 0x0(r4)
    lha r5, 0x30(r6)
    subi r0, r5, 0x200
    sth r0, 0x30(r6)
    lwz r6, 0x0(r4)
    lha r5, 0x32(r6)
    subi r0, r5, 0x200
    sth r0, 0x32(r6)
    b lbl_fn_8066B180_000012C0
lbl_fn_8066B180_00001298:
    cmplwi r0, 0x13
    beq lbl_fn_8066B180_000012C0
    lwz r6, 0x0(r4)
    lha r5, 0x2c(r6)
    subi r0, r5, 0x200
    sth r0, 0x2c(r6)
    lwz r6, 0x0(r4)
    lha r5, 0x2e(r6)
    subi r0, r5, 0x200
    sth r0, 0x2e(r6)
lbl_fn_8066B180_000012C0:
    lbz r0, 0xb09(r8)
    cmpwi r0, 0x0
    bne lbl_fn_8066B180_0000135C
    li r0, 0x1
    stb r0, 0xb09(r8)
    lbz r0, 0x905(r8)
    cmplwi r0, 0x13
    beq lbl_fn_8066B180_000012FC
    lwz r5, 0x0(r4)
    lha r0, 0x2c(r5)
    sth r0, 0x884(r8)
    lwz r5, 0x0(r4)
    lha r0, 0x2e(r5)
    sth r0, 0x88a(r8)
    b lbl_fn_8066B180_00001308
lbl_fn_8066B180_000012FC:
    li r0, 0x0
    sth r0, 0x884(r8)
    sth r0, 0x88a(r8)
lbl_fn_8066B180_00001308:
    lbz r0, 0x905(r8)
    cmplwi r0, 0x2
    bne lbl_fn_8066B180_00001348
    lwz r5, 0x0(r4)
    lha r0, 0x30(r5)
    sth r0, 0x890(r8)
    lwz r5, 0x0(r4)
    lha r0, 0x32(r5)
    sth r0, 0x896(r8)
    lwz r5, 0x0(r4)
    lbz r0, 0x34(r5)
    stb r0, 0x89c(r8)
    lwz r5, 0x0(r4)
    lbz r0, 0x35(r5)
    stb r0, 0x89d(r8)
    b lbl_fn_8066B180_0000135C
lbl_fn_8066B180_00001348:
    li r0, 0x0
    sth r0, 0x890(r8)
    sth r0, 0x896(r8)
    stb r0, 0x89c(r8)
    stb r0, 0x89d(r8)
lbl_fn_8066B180_0000135C:
    lbz r0, 0x905(r8)
    cmplwi r0, 0x13
    beq lbl_fn_8066B180_000013D4
    lwz r6, 0x0(r4)
    lha r5, 0x884(r8)
    lha r0, 0x2c(r6)
    subf r0, r5, r0
    extsh r0, r0
    cmpwi r0, -0x200
    mr r5, r0
    bge lbl_fn_8066B180_0000138C
    li r5, -0x200
lbl_fn_8066B180_0000138C:
    cmpwi r0, 0x1ff
    ble lbl_fn_8066B180_00001398
    li r5, 0x1ff
lbl_fn_8066B180_00001398:
    sth r5, 0x2c(r6)
    lwz r6, 0x0(r4)
    lha r5, 0x88a(r8)
    lha r0, 0x2e(r6)
    subf r0, r5, r0
    extsh r0, r0
    cmpwi r0, -0x200
    mr r5, r0
    bge lbl_fn_8066B180_000013C0
    li r5, -0x200
lbl_fn_8066B180_000013C0:
    cmpwi r0, 0x1ff
    ble lbl_fn_8066B180_000013CC
    li r5, 0x1ff
lbl_fn_8066B180_000013CC:
    sth r5, 0x2e(r6)
    b lbl_fn_8066B180_00001434
lbl_fn_8066B180_000013D4:
    lwz r6, 0x0(r4)
    lha r5, 0x884(r8)
    lha r0, 0x2c(r6)
    subf r0, r5, r0
    extsh. r0, r0
    mr r5, r0
    bge lbl_fn_8066B180_000013F4
    li r5, 0x0
lbl_fn_8066B180_000013F4:
    cmpwi r0, 0x400
    ble lbl_fn_8066B180_00001400
    li r5, 0x400
lbl_fn_8066B180_00001400:
    sth r5, 0x2c(r6)
    lwz r6, 0x0(r4)
    lha r5, 0x88a(r8)
    lha r0, 0x2e(r6)
    subf r0, r5, r0
    extsh. r0, r0
    mr r5, r0
    bge lbl_fn_8066B180_00001424
    li r5, 0x0
lbl_fn_8066B180_00001424:
    cmpwi r0, 0x400
    ble lbl_fn_8066B180_00001430
    li r5, 0x400
lbl_fn_8066B180_00001430:
    sth r5, 0x2e(r6)
lbl_fn_8066B180_00001434:
    lbz r0, 0x905(r8)
    cmplwi r0, 0x2
    bne lbl_fn_8066B180_000014F4
    lwz r6, 0x0(r4)
    lha r5, 0x890(r8)
    lha r0, 0x30(r6)
    subf r0, r5, r0
    extsh r0, r0
    cmpwi r0, -0x200
    mr r5, r0
    bge lbl_fn_8066B180_00001464
    li r5, -0x200
lbl_fn_8066B180_00001464:
    cmpwi r0, 0x1ff
    ble lbl_fn_8066B180_00001470
    li r5, 0x1ff
lbl_fn_8066B180_00001470:
    sth r5, 0x30(r6)
    lwz r6, 0x0(r4)
    lha r5, 0x896(r8)
    lha r0, 0x32(r6)
    subf r0, r5, r0
    extsh r0, r0
    cmpwi r0, -0x200
    mr r5, r0
    bge lbl_fn_8066B180_00001498
    li r5, -0x200
lbl_fn_8066B180_00001498:
    cmpwi r0, 0x1ff
    ble lbl_fn_8066B180_000014A4
    li r5, 0x1ff
lbl_fn_8066B180_000014A4:
    sth r5, 0x32(r6)
    lwz r5, 0x0(r4)
    lbz r0, 0x34(r5)
    cmplwi r0, 0x48
    ble lbl_fn_8066B180_000014C4
    lhz r0, 0x2a(r5)
    ori r0, r0, 0x2000
    sth r0, 0x2a(r5)
lbl_fn_8066B180_000014C4:
    lwz r5, 0x0(r4)
    lbz r0, 0x35(r5)
    cmplwi r0, 0x48
    ble lbl_fn_8066B180_000014E0
    lhz r0, 0x2a(r5)
    ori r0, r0, 0x200
    sth r0, 0x2a(r5)
lbl_fn_8066B180_000014E0:
    lwz r5, 0x0(r4)
    li r0, 0x0
    stb r0, 0x34(r5)
    lwz r5, 0x0(r4)
    stb r0, 0x35(r5)
lbl_fn_8066B180_000014F4:
    la r5, lbl_80880284
    lbzx r0, r5, r3
    cmpwi r0, 0x0
    beqlr
    lwz r3, 0x0(r4)
    li r0, 0x0
    sth r0, 0x30(r3)
    lwz r3, 0x0(r4)
    sth r0, 0x32(r3)
    lwz r3, 0x0(r4)
    stb r0, 0x34(r3)
    lwz r3, 0x0(r4)
    stb r0, 0x35(r3)
    blr
}

asm void fn_8066B6D0(void)
{
    nofralloc
    lis r8, lbl_80829DF0@ha
    slwi r3, r3, 2
    addi r8, r8, lbl_80829DF0@l
    lbz r7, 0x0(r6)
    lwz r5, 0x0(r4)
    lbz r0, 0x1(r6)
    rlwimi r0, r7, 8, 16, 23
    lwzx r3, r8, r3
    sth r0, 0x2a(r5)
    lbz r7, 0x2(r6)
    lbz r0, 0x3(r6)
    lwz r5, 0x0(r4)
    rlwimi r0, r7, 8, 16, 23
    sth r0, 0x2c(r5)
    lbz r7, 0x4(r6)
    lbz r0, 0x5(r6)
    lwz r5, 0x0(r4)
    rlwimi r0, r7, 8, 16, 23
    sth r0, 0x2e(r5)
    lbz r7, 0x6(r6)
    lbz r0, 0x7(r6)
    lwz r5, 0x0(r4)
    rlwimi r0, r7, 8, 16, 23
    sth r0, 0x30(r5)
    lwz r5, 0x0(r4)
    lbz r0, 0x8(r6)
    stb r0, 0x32(r5)
    lwz r5, 0x0(r4)
    lbz r0, 0xa(r6)
    stb r0, 0x33(r5)
    lwz r4, 0x0(r4)
    lbz r0, 0x33(r4)
    slwi r4, r0, 1
    cmpwi r4, 0x104
    blt lbl_fn_8066B6D0_000015C8
    li r0, 0x4
    stb r0, 0xb87(r3)
    b lbl_fn_8066B6D0_00001618
lbl_fn_8066B6D0_000015C8:
    subi r0, r4, 0xfa
    cmplwi r0, 0x9
    bgt lbl_fn_8066B6D0_000015E0
    li r0, 0x3
    stb r0, 0xb87(r3)
    b lbl_fn_8066B6D0_00001618
lbl_fn_8066B6D0_000015E0:
    subi r0, r4, 0xf0
    cmplwi r0, 0x9
    bgt lbl_fn_8066B6D0_000015F8
    li r0, 0x2
    stb r0, 0xb87(r3)
    b lbl_fn_8066B6D0_00001618
lbl_fn_8066B6D0_000015F8:
    subi r0, r4, 0xd4
    cmplwi r0, 0x1b
    bgt lbl_fn_8066B6D0_00001610
    li r0, 0x1
    stb r0, 0xb87(r3)
    b lbl_fn_8066B6D0_00001618
lbl_fn_8066B6D0_00001610:
    li r0, 0x0
    stb r0, 0xb87(r3)
lbl_fn_8066B6D0_00001618:
    lbz r0, 0xb09(r3)
    cmpwi r0, 0x0
    bnelr
    li r0, 0x1
    stb r0, 0xb09(r3)
    blr
}

asm void fn_8066B7D0(void)
{
    nofralloc
    lis r7, lbl_80829DF0@ha
    slwi r0, r3, 2
    addi r7, r7, lbl_80829DF0@l
    lwz r5, 0x0(r4)
    lwzx r3, r7, r0
    lbz r0, 0x0(r6)
    stb r0, 0x40(r5)
    lbz r0, 0x6(r6)
    lbz r7, 0x1(r6)
    srawi r0, r0, 6
    lwz r5, 0x0(r4)
    rlwimi r0, r7, 2, 22, 29
    sth r0, 0x36(r5)
    lbz r0, 0x6(r6)
    lbz r8, 0x2(r6)
    srawi r7, r0, 4
    lwz r5, 0x0(r4)
    clrlslwi r0, r8, 18, 2
    rlwimi r0, r7, 0, 30, 31
    sth r0, 0x38(r5)
    lbz r0, 0x6(r6)
    lbz r8, 0x3(r6)
    srawi r7, r0, 2
    lwz r5, 0x0(r4)
    clrlslwi r0, r8, 18, 2
    rlwimi r0, r7, 0, 30, 31
    sth r0, 0x3a(r5)
    lbz r0, 0x4(r6)
    lbz r7, 0x6(r6)
    clrlslwi r0, r0, 18, 2
    lwz r5, 0x0(r4)
    rlwimi r0, r7, 0, 30, 31
    sth r0, 0x3c(r5)
    lbz r0, 0x7(r6)
    lbz r7, 0x5(r6)
    srawi r0, r0, 6
    lwz r5, 0x0(r4)
    rlwimi r0, r7, 2, 22, 29
    sth r0, 0x3e(r5)
    lwz r5, 0x0(r4)
    lbz r0, 0x8(r6)
    stb r0, 0x34(r5)
    lbz r0, 0xe(r6)
    lbz r7, 0x9(r6)
    srawi r0, r0, 6
    lwz r5, 0x0(r4)
    rlwimi r0, r7, 2, 22, 29
    sth r0, 0x2a(r5)
    lbz r0, 0xe(r6)
    lbz r8, 0xa(r6)
    srawi r7, r0, 4
    lwz r5, 0x0(r4)
    clrlslwi r0, r8, 18, 2
    rlwimi r0, r7, 0, 30, 31
    sth r0, 0x2c(r5)
    lbz r0, 0xe(r6)
    lbz r8, 0xb(r6)
    srawi r7, r0, 2
    lwz r5, 0x0(r4)
    clrlslwi r0, r8, 18, 2
    rlwimi r0, r7, 0, 30, 31
    sth r0, 0x2e(r5)
    lbz r0, 0xc(r6)
    lbz r7, 0xe(r6)
    clrlslwi r0, r0, 18, 2
    lwz r5, 0x0(r4)
    rlwimi r0, r7, 0, 30, 31
    sth r0, 0x30(r5)
    lbz r0, 0xf(r6)
    lbz r7, 0xd(r6)
    srawi r0, r0, 6
    lwz r5, 0x0(r4)
    rlwimi r0, r7, 2, 22, 29
    sth r0, 0x32(r5)
    lbz r0, 0x7(r6)
    lbz r7, 0xf(r6)
    clrlslwi r0, r0, 20, 4
    lwz r5, 0x0(r4)
    andi. r0, r0, 0xf3f0
    srawi r7, r7, 2
    rlwimi r0, r7, 0, 28, 31
    sth r0, 0x42(r5)
    lbz r0, 0xbbc(r3)
    cmplwi r0, 0x8
    bge lbl_fn_8066B7D0_00001794
    lwz r3, 0x0(r4)
    li r0, 0xff
    stb r0, 0x44(r3)
    blr
lbl_fn_8066B7D0_00001794:
    lbz r0, 0xf(r6)
    lwz r3, 0x0(r4)
    clrlwi r0, r0, 30
    stb r0, 0x44(r3)
    blr
}

asm void fn_8066B950(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, lbl_80829DF0@ha
    stw r0, 0x14(r1)
    slwi r0, r3, 2
    addi r7, r7, lbl_80829DF0@l
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwzx r31, r7, r0
    lbz r3, 0x939(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8066B950_000017F8
    subi r0, r3, 0x1
    stb r0, 0x939(r31)
    li r0, -0x4
    lwz r3, 0x0(r4)
    stb r0, 0x29(r3)
lbl_fn_8066B950_000017F8:
    lwz r7, 0x0(r4)
    lbz r0, 0x29(r7)
    extsb. r0, r0
    bne lbl_fn_8066B950_00002098
    cmplwi r5, 0x4
    bne lbl_fn_8066B950_0000189C
    lbz r0, 0x5(r6)
    clrlwi r0, r0, 30
    cmpwi r0, 0x2
    bne lbl_fn_8066B950_00001890
    lbz r0, 0x4(r6)
    lbz r3, 0x3(r6)
    clrlwi r0, r0, 30
    rlwimi r0, r3, 2, 28, 29
    ori r0, r0, 0x80
    stb r0, 0x36(r7)
    lbz r5, 0x2(r6)
    lbz r0, 0x5(r6)
    lwz r3, 0x0(r4)
    extsh r5, r5
    rlwinm r0, r0, 6, 18, 23
    or r0, r5, r0
    sth r0, 0x38(r3)
    lbz r5, 0x0(r6)
    lbz r0, 0x3(r6)
    lwz r3, 0x0(r4)
    extsh r5, r5
    rlwinm r0, r0, 6, 18, 23
    or r0, r5, r0
    sth r0, 0x3a(r3)
    lbz r5, 0x1(r6)
    lbz r0, 0x4(r6)
    lwz r3, 0x0(r4)
    extsh r5, r5
    rlwinm r0, r0, 6, 18, 23
    or r0, r5, r0
    sth r0, 0x3c(r3)
    b lbl_fn_8066B950_00001EA4
lbl_fn_8066B950_00001890:
    li r0, -0x7
    stb r0, 0x29(r7)
    b lbl_fn_8066B950_00001EA4
lbl_fn_8066B950_0000189C:
    cmplwi r5, 0x5
    beq lbl_fn_8066B950_000018AC
    cmplwi r5, 0x7
    bne lbl_fn_8066B950_00001E9C
lbl_fn_8066B950_000018AC:
    lbz r0, 0x90c(r31)
    lbz r5, 0x5(r6)
    cntlzw r0, r0
    extrwi r3, r0, 8, 19
    clrlwi. r0, r5, 31
    mulli r0, r3, 0x60
    add r3, r31, r0
    beq lbl_fn_8066B950_000018E4
    li r0, 0x0
    stb r0, 0x36(r7)
    li r0, -0x7
    lwz r3, 0x0(r4)
    stb r0, 0x29(r3)
    b lbl_fn_8066B950_00001EA4
lbl_fn_8066B950_000018E4:
    rlwinm. r0, r5, 0, 30, 30
    bne lbl_fn_8066B950_00001DD8
    lha r0, 0xd8(r3)
    sth r0, 0x38(r7)
    lwz r5, 0x0(r4)
    lha r0, 0xda(r3)
    sth r0, 0x3a(r5)
    lwz r5, 0x0(r4)
    lha r0, 0xdc(r3)
    sth r0, 0x3c(r5)
    lwz r5, 0x0(r4)
    lbz r0, 0xd6(r3)
    stb r0, 0x36(r5)
    lbz r0, 0x0(r6)
    cmplwi r0, 0xff
    bne lbl_fn_8066B950_00001930
    lbz r0, 0x1(r6)
    cmplwi r0, 0xff
    beq lbl_fn_8066B950_00001970
lbl_fn_8066B950_00001930:
    lbz r0, 0x93d(r31)
    cmplwi r0, 0x5
    bne lbl_fn_8066B950_00001970
    lbz r3, 0x905(r31)
    cmplwi r3, 0x6
    bne lbl_fn_8066B950_00001954
    lbz r0, 0x906(r31)
    cmplwi r0, 0x5
    bne lbl_fn_8066B950_00001970
lbl_fn_8066B950_00001954:
    cmplwi r3, 0x7
    bne lbl_fn_8066B950_00001968
    lbz r0, 0x906(r31)
    cmplwi r0, 0x7
    bne lbl_fn_8066B950_00001970
lbl_fn_8066B950_00001968:
    cmplwi r3, 0xfa
    bne lbl_fn_8066B950_00001984
lbl_fn_8066B950_00001970:
    lwz r3, 0x0(r4)
    lbz r0, 0x36(r3)
    andi. r0, r0, 0xbf
    stb r0, 0x36(r3)
    b lbl_fn_8066B950_00001EA4
lbl_fn_8066B950_00001984:
    lwz r5, 0x0(r4)
    lbz r0, 0x4(r6)
    lbz r3, 0x36(r5)
    clrlwi r0, r0, 31
    ori r0, r0, 0x40
    or r0, r3, r0
    stb r0, 0x36(r5)
    lbz r0, 0x905(r31)
    cmplwi r0, 0x6
    bne lbl_fn_8066B950_00001B4C
    lwz r3, 0x0(r4)
    lbz r0, 0x0(r6)
    stb r0, 0x30(r3)
    lwz r3, 0x0(r4)
    lbz r0, 0x1(r6)
    stb r0, 0x31(r3)
    lbz r3, 0x2(r6)
    lbz r0, 0x5(r6)
    slwi r3, r3, 2
    lha r7, 0x890(r31)
    extsh r3, r3
    rlwinm r0, r0, 29, 30, 30
    clrrwi r5, r3, 2
    lwz r3, 0x0(r4)
    extsh r5, r5
    extsh r0, r0
    or r0, r5, r0
    extsh r0, r0
    subf r0, r7, r0
    sth r0, 0x2a(r3)
    lbz r3, 0x3(r6)
    lbz r0, 0x5(r6)
    slwi r3, r3, 2
    lha r7, 0x892(r31)
    extsh r3, r3
    rlwinm r0, r0, 28, 30, 30
    clrrwi r5, r3, 2
    lwz r3, 0x0(r4)
    extsh r5, r5
    extsh r0, r0
    or r0, r5, r0
    extsh r0, r0
    subf r0, r7, r0
    sth r0, 0x2c(r3)
    lbz r3, 0x4(r6)
    lbz r0, 0x5(r6)
    slwi r3, r3, 2
    lha r7, 0x894(r31)
    extsh r3, r3
    rlwinm r0, r0, 27, 29, 30
    clrrwi r5, r3, 3
    lwz r3, 0x0(r4)
    extsh r5, r5
    or r0, r5, r0
    extsh r0, r0
    subf r0, r7, r0
    sth r0, 0x2e(r3)
    lwz r5, 0x0(r4)
    lbz r0, 0x5(r6)
    lhz r3, 0x0(r5)
    nor r0, r0, r0
    rlwinm r0, r0, 11, 17, 18
    or r0, r3, r0
    sth r0, 0x0(r5)
    lbz r0, 0xb09(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8066B950_00001AB8
    li r0, 0x1
    stb r0, 0xb09(r31)
    lwz r3, 0x0(r4)
    lbz r0, 0x30(r3)
    extsb r0, r0
    sth r0, 0x884(r31)
    lwz r3, 0x0(r4)
    lbz r0, 0x31(r3)
    extsb r0, r0
    sth r0, 0x88a(r31)
lbl_fn_8066B950_00001AB8:
    lwz r6, 0x0(r4)
    lha r3, 0x884(r31)
    lbz r0, 0x30(r6)
    clrlwi r5, r3, 24
    lha r3, 0x88a(r31)
    subf r5, r5, r0
    lbz r0, 0x31(r6)
    extsh r5, r5
    clrlwi r3, r3, 24
    cmpwi r5, -0x80
    subf r0, r3, r0
    extsh r7, r0
    bge lbl_fn_8066B950_00001AF8
    li r0, -0x80
    stb r0, 0x30(r6)
    b lbl_fn_8066B950_00001B10
lbl_fn_8066B950_00001AF8:
    cmpwi r5, 0x7f
    ble lbl_fn_8066B950_00001B0C
    li r0, 0x7f
    stb r0, 0x30(r6)
    b lbl_fn_8066B950_00001B10
lbl_fn_8066B950_00001B0C:
    stb r5, 0x30(r6)
lbl_fn_8066B950_00001B10:
    cmpwi r7, -0x80
    bge lbl_fn_8066B950_00001B28
    lwz r3, 0x0(r4)
    li r0, -0x80
    stb r0, 0x31(r3)
    b lbl_fn_8066B950_00001EA4
lbl_fn_8066B950_00001B28:
    cmpwi r7, 0x7f
    ble lbl_fn_8066B950_00001B40
    lwz r3, 0x0(r4)
    li r0, 0x7f
    stb r0, 0x31(r3)
    b lbl_fn_8066B950_00001EA4
lbl_fn_8066B950_00001B40:
    lwz r3, 0x0(r4)
    stb r7, 0x31(r3)
    b lbl_fn_8066B950_00001EA4
lbl_fn_8066B950_00001B4C:
    cmplwi r0, 0x7
    bne lbl_fn_8066B950_00001EA4
    lbz r0, 0x0(r6)
    lwz r3, 0x0(r4)
    rlwinm r0, r0, 4, 22, 26
    sth r0, 0x2c(r3)
    lbz r0, 0x1(r6)
    lwz r3, 0x0(r4)
    rlwinm r0, r0, 4, 22, 26
    sth r0, 0x2e(r3)
    lbz r0, 0x2(r6)
    lbz r5, 0x1(r6)
    srawi r8, r0, 7
    lbz r7, 0x0(r6)
    rlwinm r0, r5, 27, 29, 30
    lwz r3, 0x0(r4)
    rlwimi r0, r7, 29, 27, 28
    extsh r8, r8
    or r0, r8, r0
    srawi r7, r7, 3
    extsh r0, r0
    srawi r5, r5, 5
    slwi r0, r0, 5
    sth r0, 0x30(r3)
    lbz r0, 0x2(r6)
    lwz r3, 0x0(r4)
    clrlslwi r0, r0, 27, 5
    sth r0, 0x32(r3)
    lbz r3, 0x2(r6)
    lbz r0, 0x3(r6)
    srawi r5, r3, 2
    lwz r3, 0x0(r4)
    srawi r0, r0, 5
    rlwimi r0, r5, 0, 27, 28
    clrlslwi r0, r0, 27, 3
    stb r0, 0x34(r3)
    lbz r0, 0x3(r6)
    lwz r3, 0x0(r4)
    clrlslwi r0, r0, 27, 3
    stb r0, 0x35(r3)
    lbz r3, 0x1(r6)
    lbz r0, 0x5(r6)
    clrlslwi r7, r3, 31, 1
    lbz r8, 0x0(r6)
    lbz r5, 0x4(r6)
    rlwinm r0, r0, 0, 24, 29
    rlwimi r7, r8, 0, 31, 31
    lwz r3, 0x0(r4)
    rlwimi r0, r5, 8, 16, 22
    or r0, r7, r0
    xori r0, r0, 0xfeff
    sth r0, 0x2a(r3)
    lwz r5, 0x0(r4)
    lha r3, 0x2c(r5)
    subi r0, r3, 0x200
    sth r0, 0x2c(r5)
    lwz r5, 0x0(r4)
    lha r3, 0x2e(r5)
    subi r0, r3, 0x200
    sth r0, 0x2e(r5)
    lwz r5, 0x0(r4)
    lha r3, 0x30(r5)
    subi r0, r3, 0x200
    sth r0, 0x30(r5)
    lwz r5, 0x0(r4)
    lha r3, 0x32(r5)
    subi r0, r3, 0x200
    sth r0, 0x32(r5)
    lbz r0, 0xb09(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8066B950_00001CB8
    li r0, 0x1
    stb r0, 0xb09(r31)
    lwz r3, 0x0(r4)
    lha r0, 0x2c(r3)
    sth r0, 0x884(r31)
    lwz r3, 0x0(r4)
    lha r0, 0x2e(r3)
    sth r0, 0x88a(r31)
    lwz r3, 0x0(r4)
    lha r0, 0x30(r3)
    sth r0, 0x890(r31)
    lwz r3, 0x0(r4)
    lha r0, 0x32(r3)
    sth r0, 0x896(r31)
    lwz r3, 0x0(r4)
    lbz r0, 0x34(r3)
    stb r0, 0x89c(r31)
    lwz r3, 0x0(r4)
    lbz r0, 0x35(r3)
    stb r0, 0x89d(r31)
lbl_fn_8066B950_00001CB8:
    lwz r5, 0x0(r4)
    lha r3, 0x884(r31)
    lha r0, 0x2c(r5)
    subf r0, r3, r0
    extsh r0, r0
    cmpwi r0, -0x200
    mr r3, r0
    bge lbl_fn_8066B950_00001CDC
    li r3, -0x200
lbl_fn_8066B950_00001CDC:
    cmpwi r0, 0x1ff
    ble lbl_fn_8066B950_00001CE8
    li r3, 0x1ff
lbl_fn_8066B950_00001CE8:
    sth r3, 0x2c(r5)
    lwz r5, 0x0(r4)
    lha r3, 0x88a(r31)
    lha r0, 0x2e(r5)
    subf r0, r3, r0
    extsh r0, r0
    cmpwi r0, -0x200
    mr r3, r0
    bge lbl_fn_8066B950_00001D10
    li r3, -0x200
lbl_fn_8066B950_00001D10:
    cmpwi r0, 0x1ff
    ble lbl_fn_8066B950_00001D1C
    li r3, 0x1ff
lbl_fn_8066B950_00001D1C:
    sth r3, 0x2e(r5)
    lwz r5, 0x0(r4)
    lha r3, 0x890(r31)
    lha r0, 0x30(r5)
    subf r0, r3, r0
    extsh r0, r0
    cmpwi r0, -0x200
    mr r3, r0
    bge lbl_fn_8066B950_00001D44
    li r3, -0x200
lbl_fn_8066B950_00001D44:
    cmpwi r0, 0x1ff
    ble lbl_fn_8066B950_00001D50
    li r3, 0x1ff
lbl_fn_8066B950_00001D50:
    sth r3, 0x30(r5)
    lwz r5, 0x0(r4)
    lha r3, 0x896(r31)
    lha r0, 0x32(r5)
    subf r0, r3, r0
    extsh r0, r0
    cmpwi r0, -0x200
    mr r3, r0
    bge lbl_fn_8066B950_00001D78
    li r3, -0x200
lbl_fn_8066B950_00001D78:
    cmpwi r0, 0x1ff
    ble lbl_fn_8066B950_00001D84
    li r3, 0x1ff
lbl_fn_8066B950_00001D84:
    sth r3, 0x32(r5)
    lwz r3, 0x0(r4)
    lbz r0, 0x34(r3)
    cmplwi r0, 0x48
    ble lbl_fn_8066B950_00001DA4
    lhz r0, 0x2a(r3)
    ori r0, r0, 0x2000
    sth r0, 0x2a(r3)
lbl_fn_8066B950_00001DA4:
    lwz r3, 0x0(r4)
    lbz r0, 0x35(r3)
    cmplwi r0, 0x48
    ble lbl_fn_8066B950_00001DC0
    lhz r0, 0x2a(r3)
    ori r0, r0, 0x200
    sth r0, 0x2a(r3)
lbl_fn_8066B950_00001DC0:
    lwz r3, 0x0(r4)
    li r0, 0x0
    stb r0, 0x34(r3)
    lwz r3, 0x0(r4)
    stb r0, 0x35(r3)
    b lbl_fn_8066B950_00001EA4
lbl_fn_8066B950_00001DD8:
    lwz r0, 0xce(r3)
    lwz r5, 0xca(r3)
    stw r5, 0x2a(r7)
    stw r0, 0x2e(r7)
    lwz r0, 0xd2(r3)
    stw r0, 0x32(r7)
    lwz r7, 0x0(r4)
    lhz r0, 0xa0(r3)
    lhz r5, 0x0(r7)
    rlwinm r0, r0, 0, 17, 18
    or r0, r5, r0
    sth r0, 0x0(r7)
    lbz r0, 0x4(r6)
    lbz r7, 0x3(r6)
    clrlwi r0, r0, 30
    lwz r5, 0x0(r4)
    rlwimi r0, r7, 2, 28, 29
    ori r0, r0, 0x80
    stb r0, 0x36(r5)
    lwz r7, 0x0(r4)
    lbz r5, 0x36(r7)
    clrlwi. r0, r5, 31
    beq lbl_fn_8066B950_00001E44
    lbz r0, 0xd6(r3)
    rlwinm r0, r0, 0, 25, 25
    or r0, r5, r0
    stb r0, 0x36(r7)
lbl_fn_8066B950_00001E44:
    lbz r5, 0x2(r6)
    lbz r0, 0x5(r6)
    lwz r3, 0x0(r4)
    extsh r5, r5
    rlwinm r0, r0, 6, 18, 23
    or r0, r5, r0
    sth r0, 0x38(r3)
    lbz r5, 0x0(r6)
    lbz r0, 0x3(r6)
    lwz r3, 0x0(r4)
    extsh r5, r5
    rlwinm r0, r0, 6, 18, 23
    or r0, r5, r0
    sth r0, 0x3a(r3)
    lbz r5, 0x1(r6)
    lbz r0, 0x4(r6)
    lwz r3, 0x0(r4)
    extsh r5, r5
    rlwinm r0, r0, 6, 18, 23
    or r0, r5, r0
    sth r0, 0x3c(r3)
    b lbl_fn_8066B950_00001EA4
lbl_fn_8066B950_00001E9C:
    li r0, -0x7
    stb r0, 0x29(r7)
lbl_fn_8066B950_00001EA4:
    lwz r3, 0x0(r4)
    lbz r0, 0x29(r3)
    extsb. r0, r0
    bne lbl_fn_8066B950_00002098
    lbz r0, 0x36(r3)
    lbz r5, 0x93b(r31)
    clrlwi. r0, r0, 31
    bne lbl_fn_8066B950_00001F20
    lbz r0, 0x93d(r31)
    cmplwi r0, 0x5
    beq lbl_fn_8066B950_00001ED4
    li r5, 0x0
lbl_fn_8066B950_00001ED4:
    li r3, 0x0
    stb r3, 0x93b(r31)
    li r0, 0x5
    cmpwi cr1, r5, 0x0
    stb r3, 0x93d(r31)
    stb r0, 0x905(r31)
    lwz r3, 0x0(r4)
    lbz r0, 0x36(r3)
    andi. r0, r0, 0xbe
    stb r0, 0x36(r3)
    beq cr1, lbl_fn_8066B950_00001F64
    lwz r12, 0x8e4(r31)
    cmpwi r12, 0x0
    beq lbl_fn_8066B950_00001F64
    mr r3, r30
    lbz r4, 0x905(r31)
    mtctr r12
    bctrl
    b lbl_fn_8066B950_00001F64
lbl_fn_8066B950_00001F20:
    cmpwi r5, 0x0
    bne lbl_fn_8066B950_00001F64
    lbz r0, 0x93d(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8066B950_00001F64
    lis r6, 0x4a4
    addi r3, r31, 0x5ec
    addi r4, r31, 0xb2c
    li r5, 0x4
    addi r6, r6, 0xf6
    li r7, 0x0
    bl fn_806665A0
    cmpwi r3, 0x0
    beq lbl_fn_8066B950_00001F64
    li r0, 0x1
    stb r0, 0x93b(r31)
    stb r0, 0x93d(r31)
lbl_fn_8066B950_00001F64:
    lbz r0, 0x93d(r31)
    cmplwi r0, 0x2
    beq lbl_fn_8066B950_00001F78
    cmplwi r0, 0x9
    bne lbl_fn_8066B950_00001FAC
lbl_fn_8066B950_00001F78:
    lis r6, 0x4a4
    addi r3, r31, 0x5ec
    addi r4, r31, 0xb2c
    li r5, 0x10
    addi r6, r6, 0x40
    li r7, 0x0
    bl fn_806665A0
    cmpwi r3, 0x0
    beq lbl_fn_8066B950_00002098
    lbz r3, 0x93d(r31)
    addi r0, r3, 0x1
    stb r0, 0x93d(r31)
    b lbl_fn_8066B950_00002098
lbl_fn_8066B950_00001FAC:
    cmplwi r0, 0x4
    bne lbl_fn_8066B950_00002044
    li r0, 0x5
    stb r0, 0x93d(r31)
    la r3, lbl_8088028C
    lbzx r0, r3, r30
    cmpwi r0, 0x0
    beq lbl_fn_8066B950_00001FE0
    cmpwi r0, 0x1
    beq lbl_fn_8066B950_00001FEC
    cmpwi r0, 0x3
    beq lbl_fn_8066B950_00001FF8
    b lbl_fn_8066B950_0000201C
lbl_fn_8066B950_00001FE0:
    li r0, 0x6
    stb r0, 0x905(r31)
    b lbl_fn_8066B950_00002024
lbl_fn_8066B950_00001FEC:
    li r0, 0x7
    stb r0, 0x905(r31)
    b lbl_fn_8066B950_00002024
lbl_fn_8066B950_00001FF8:
    lwz r0, __OSInIPL
    cmpwi r0, 0x0
    beq lbl_fn_8066B950_00002010
    li r0, 0x7
    stb r0, 0x905(r31)
    b lbl_fn_8066B950_00002024
lbl_fn_8066B950_00002010:
    li r0, 0xfa
    stb r0, 0x905(r31)
    b lbl_fn_8066B950_00002024
lbl_fn_8066B950_0000201C:
    li r0, 0xfa
    stb r0, 0x905(r31)
lbl_fn_8066B950_00002024:
    lwz r12, 0x8e4(r31)
    cmpwi r12, 0x0
    beq lbl_fn_8066B950_00002098
    mr r3, r30
    lbz r4, 0x905(r31)
    mtctr r12
    bctrl
    b lbl_fn_8066B950_00002098
lbl_fn_8066B950_00002044:
    cmplwi r0, 0x6
    bne lbl_fn_8066B950_00002098
    addi r3, r31, 0x5ec
    li r4, 0x2
    bl fn_80666750
    cmpwi r3, 0x0
    beq lbl_fn_8066B950_00002098
    lis r30, 0x4a4
    addi r3, r31, 0x5ec
    addi r5, r30, 0xf3
    li r4, 0x1
    li r6, 0x0
    bl fn_80666220
    addi r3, r31, 0x5ec
    addi r4, r31, 0xba4
    addi r6, r30, 0xf3
    li r5, 0x1
    li r7, 0x0
    bl fn_806665A0
    li r0, 0x7
    stb r0, 0x93d(r31)
lbl_fn_8066B950_00002098:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8066C250(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r31, lbl_80829DF0@ha
    slwi r30, r3, 2
    addi r31, r31, lbl_80829DF0@l
    stw r4, 0x8(r1)
    lwzx r29, r31, r30
    mr r25, r3
    mr r26, r6
    mr r27, r7
    lbz r0, 0xbb9(r29)
    mr r28, r4
    extsb r0, r0
    cmpwi r0, -0x1
    bne lbl_fn_8066C250_0000211C
    lbz r0, 0x29(r4)
    mr r4, r26
    stb r0, 0xbb9(r29)
    mr r5, r27
    addi r3, r29, 0xbc0
    lbz r0, 0x905(r29)
    stb r0, 0xbbb(r29)
    stb r7, 0xbba(r29)
    bl memcpy
lbl_fn_8066C250_0000211C:
    lbz r0, 0x29(r28)
    extsb. r0, r0
    bne lbl_fn_8066C250_000021C0
    lis r4, lbl_807651A0@ha
    mr r3, r26
    mr r5, r27
    addi r4, r4, lbl_807651A0@l
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8066C250_00002150
    li r0, -0x4
    stb r0, 0x29(r28)
    b lbl_fn_8066C250_000021C0
lbl_fn_8066C250_00002150:
    lis r4, lbl_80765188@ha
    mr r3, r26
    mr r5, r27
    addi r4, r4, lbl_80765188@l
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8066C250_00002180
    li r0, -0x7
    stb r0, 0x29(r28)
    li r0, 0x3
    stb r0, 0xbb8(r29)
    b lbl_fn_8066C250_000021C0
lbl_fn_8066C250_00002180:
    lwz r0, 0x840(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8066C250_000021A0
    li r0, -0x7
    stb r0, 0x29(r28)
    li r0, 0x3
    stb r0, 0xbb8(r29)
    b lbl_fn_8066C250_000021C0
lbl_fn_8066C250_000021A0:
    lbz r0, 0xbb8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8066C250_000021C0
    li r0, -0x7
    stb r0, 0x29(r28)
    lbz r3, 0xbb8(r29)
    subi r0, r3, 0x1
    stb r0, 0xbb8(r29)
lbl_fn_8066C250_000021C0:
    lbz r0, 0xbb9(r29)
    extsb. r0, r0
    bne lbl_fn_8066C250_000021E4
    lbz r0, 0x29(r28)
    extsb r0, r0
    cmpwi r0, -0x7
    bne lbl_fn_8066C250_000021E4
    li r0, -0x7
    stb r0, 0xbb9(r29)
lbl_fn_8066C250_000021E4:
    lbz r3, 0xbbb(r29)
    lbz r0, 0x905(r29)
    cmplw r3, r0
    beq lbl_fn_8066C250_000021FC
    li r0, -0x4
    stb r0, 0xbb9(r29)
lbl_fn_8066C250_000021FC:
    lbz r0, 0xbb9(r29)
    extsb. r0, r0
    bne lbl_fn_8066C250_00002610
    li r0, 0x0
    stb r0, 0xbb8(r29)
    mr r3, r25
    addi r4, r29, 0xbc0
    lbz r5, 0xbba(r29)
    li r6, 0x0
    bl fn_8066DC80
    lbz r0, 0x905(r29)
    cmplwi r0, 0x10
    beq lbl_fn_8066C250_00002514
    bge lbl_fn_8066C250_00002264
    cmplwi r0, 0x3
    beq lbl_fn_8066C250_000025BC
    bge lbl_fn_8066C250_00002250
    cmplwi r0, 0x1
    beq lbl_fn_8066C250_00002288
    bge lbl_fn_8066C250_00002410
    b lbl_fn_8066C250_00002610
lbl_fn_8066C250_00002250:
    cmplwi r0, 0x8
    bge lbl_fn_8066C250_00002610
    cmplwi r0, 0x5
    bge lbl_fn_8066C250_000025F8
    b lbl_fn_8066C250_000025D8
lbl_fn_8066C250_00002264:
    cmplwi r0, 0x1d
    beq lbl_fn_8066C250_00002548
    bge lbl_fn_8066C250_0000227C
    cmplwi r0, 0x15
    bge lbl_fn_8066C250_0000242C
    b lbl_fn_8066C250_00002410
lbl_fn_8066C250_0000227C:
    cmplwi r0, 0xfa
    beq lbl_fn_8066C250_000025F8
    b lbl_fn_8066C250_00002610
lbl_fn_8066C250_00002288:
    lwzx r3, r31, r30
    lwz r4, 0x8(r1)
    lbz r0, 0xbc0(r29)
    stb r0, 0x30(r4)
    lwz r4, 0x8(r1)
    lbz r0, 0xbc1(r29)
    stb r0, 0x31(r4)
    lbz r0, 0xbc2(r29)
    lbz r5, 0xbc5(r29)
    slwi r0, r0, 2
    lha r7, 0x890(r3)
    extsh r4, r0
    clrrwi r6, r4, 2
    extrwi r0, r5, 2, 28
    extsh r6, r6
    lwz r4, 0x8(r1)
    or r0, r6, r0
    srawi r5, r5, 2
    extsh r0, r0
    subf r0, r7, r0
    sth r0, 0x2a(r4)
    lbz r0, 0xbc3(r29)
    lbz r5, 0xbc5(r29)
    slwi r0, r0, 2
    lha r7, 0x892(r3)
    extsh r4, r0
    clrrwi r6, r4, 2
    extrwi r0, r5, 2, 26
    extsh r6, r6
    lwz r4, 0x8(r1)
    or r0, r6, r0
    srawi r5, r5, 4
    extsh r0, r0
    subf r0, r7, r0
    sth r0, 0x2c(r4)
    lbz r4, 0xbc4(r29)
    lbz r0, 0xbc5(r29)
    slwi r4, r4, 2
    lha r6, 0x894(r3)
    extsh r4, r4
    srawi r0, r0, 6
    clrrwi r5, r4, 2
    lwz r4, 0x8(r1)
    extsh r5, r5
    extsh r0, r0
    or r0, r5, r0
    extsh r0, r0
    subf r0, r6, r0
    sth r0, 0x2e(r4)
    lwz r5, 0x8(r1)
    lbz r0, 0xbc5(r29)
    lhz r4, 0x0(r5)
    nor r0, r0, r0
    clrlslwi r0, r0, 30, 13
    or r0, r4, r0
    sth r0, 0x0(r5)
    lbz r0, 0xb09(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8066C250_0000239C
    li r0, 0x1
    stb r0, 0xb09(r3)
    lwz r4, 0x8(r1)
    lbz r0, 0x30(r4)
    extsb r0, r0
    sth r0, 0x884(r3)
    lwz r4, 0x8(r1)
    lbz r0, 0x31(r4)
    extsb r0, r0
    sth r0, 0x88a(r3)
lbl_fn_8066C250_0000239C:
    lwz r5, 0x8(r1)
    lha r4, 0x884(r3)
    lbz r0, 0x30(r5)
    clrlwi r4, r4, 24
    subf r0, r4, r0
    extsh r4, r0
    cmpwi r4, -0x80
    mr r0, r4
    bge lbl_fn_8066C250_000023C4
    li r0, -0x80
lbl_fn_8066C250_000023C4:
    cmpwi r4, 0x7f
    ble lbl_fn_8066C250_000023D0
    li r0, 0x7f
lbl_fn_8066C250_000023D0:
    stb r0, 0x30(r5)
    lwz r4, 0x8(r1)
    lha r3, 0x88a(r3)
    lbz r0, 0x31(r4)
    clrlwi r3, r3, 24
    subf r0, r3, r0
    extsh r3, r0
    cmpwi r3, -0x80
    mr r0, r3
    bge lbl_fn_8066C250_000023FC
    li r0, -0x80
lbl_fn_8066C250_000023FC:
    cmpwi r3, 0x7f
    ble lbl_fn_8066C250_00002408
    li r0, 0x7f
lbl_fn_8066C250_00002408:
    stb r0, 0x31(r4)
    b lbl_fn_8066C250_00002610
lbl_fn_8066C250_00002410:
    lbz r5, 0x906(r29)
    mr r3, r25
    lbz r7, 0xbba(r29)
    addi r4, r1, 0x8
    addi r6, r29, 0xbc0
    bl fn_8066B180
    b lbl_fn_8066C250_00002610
lbl_fn_8066C250_0000242C:
    lbz r3, 0xbba(r29)
    li r4, 0x0
    cmpwi r3, 0x0
    ble lbl_fn_8066C250_00002610
    cmplwi r3, 0x8
    subi r5, r3, 0x8
    ble lbl_fn_8066C250_00002504
    b lbl_fn_8066C250_000024D8
lbl_fn_8066C250_0000244C:
    clrlwi r0, r4, 16
    lwz r7, 0x8(r1)
    add r6, r29, r0
    addi r4, r4, 0x8
    add r7, r7, r0
    lbz r8, 0xbc0(r6)
    stb r8, 0x2a(r7)
    lwz r7, 0x8(r1)
    lbz r8, 0xbc1(r6)
    add r7, r7, r0
    stb r8, 0x2b(r7)
    lwz r7, 0x8(r1)
    lbz r8, 0xbc2(r6)
    add r7, r7, r0
    stb r8, 0x2c(r7)
    lwz r7, 0x8(r1)
    lbz r8, 0xbc3(r6)
    add r7, r7, r0
    stb r8, 0x2d(r7)
    lwz r7, 0x8(r1)
    lbz r8, 0xbc4(r6)
    add r7, r7, r0
    stb r8, 0x2e(r7)
    lwz r7, 0x8(r1)
    lbz r8, 0xbc5(r6)
    add r7, r7, r0
    stb r8, 0x2f(r7)
    lwz r7, 0x8(r1)
    lbz r8, 0xbc6(r6)
    add r7, r7, r0
    stb r8, 0x30(r7)
    lwz r7, 0x8(r1)
    lbz r8, 0xbc7(r6)
    add r6, r7, r0
    stb r8, 0x31(r6)
lbl_fn_8066C250_000024D8:
    clrlwi r0, r4, 16
    cmpw r0, r5
    blt lbl_fn_8066C250_0000244C
    b lbl_fn_8066C250_00002504
lbl_fn_8066C250_000024E8:
    clrlwi r5, r4, 16
    lwz r0, 0x8(r1)
    add r6, r29, r5
    addi r4, r4, 0x1
    add r5, r0, r5
    lbz r0, 0xbc0(r6)
    stb r0, 0x2a(r5)
lbl_fn_8066C250_00002504:
    clrlwi r0, r4, 16
    cmpw r0, r3
    blt lbl_fn_8066C250_000024E8
    b lbl_fn_8066C250_00002610
lbl_fn_8066C250_00002514:
    lwz r3, 0x8(r1)
    lbz r0, 0xbc2(r29)
    stb r0, 0x2c(r3)
    lwz r3, 0x8(r1)
    lbz r0, 0xbc3(r29)
    stb r0, 0x2d(r3)
    lbz r4, 0xbc6(r29)
    lbz r0, 0xbc7(r29)
    rlwimi r0, r4, 8, 16, 23
    lwz r3, 0x8(r1)
    xori r0, r0, 0xffff
    sth r0, 0x2a(r3)
    b lbl_fn_8066C250_00002610
lbl_fn_8066C250_00002548:
    lbz r4, 0xbc2(r29)
    lbz r0, 0xbc0(r29)
    lwz r3, 0x8(r1)
    clrlslwi r4, r4, 28, 8
    extsh r0, r0
    or r0, r4, r0
    sth r0, 0x2a(r3)
    lbz r4, 0xbc2(r29)
    lbz r0, 0xbc1(r29)
    lwz r3, 0x8(r1)
    rlwinm r4, r4, 4, 20, 23
    extsh r0, r0
    or r0, r4, r0
    sth r0, 0x2c(r3)
    lbz r4, 0xbc5(r29)
    lbz r0, 0xbc3(r29)
    lwz r3, 0x8(r1)
    rlwinm r4, r4, 6, 22, 23
    extsh r0, r0
    or r0, r4, r0
    sth r0, 0x2e(r3)
    lwz r4, 0x8(r1)
    lbz r0, 0xbc5(r29)
    lhz r3, 0x0(r4)
    nor r0, r0, r0
    clrlslwi r0, r0, 30, 13
    or r0, r3, r0
    sth r0, 0x0(r4)
    b lbl_fn_8066C250_00002610
lbl_fn_8066C250_000025BC:
    lbz r5, 0x906(r29)
    mr r3, r25
    lbz r7, 0xbba(r29)
    addi r4, r1, 0x8
    addi r6, r29, 0xbc0
    bl fn_8066B6D0
    b lbl_fn_8066C250_00002610
lbl_fn_8066C250_000025D8:
    lwz r0, 0x8fc(r29)
    mr r3, r25
    lbz r7, 0xbba(r29)
    addi r4, r1, 0x8
    clrlwi r5, r0, 24
    addi r6, r29, 0xbc0
    bl fn_8066B7D0
    b lbl_fn_8066C250_00002610
lbl_fn_8066C250_000025F8:
    lbz r5, 0x906(r29)
    mr r3, r25
    lbz r7, 0xbba(r29)
    addi r4, r1, 0x8
    addi r6, r29, 0xbc0
    bl fn_8066B950
lbl_fn_8066C250_00002610:
    lbz r6, 0x29(r28)
    mr r4, r26
    lbz r0, 0xbb9(r29)
    mr r5, r27
    stb r0, 0x29(r28)
    addi r3, r29, 0xbc0
    stb r6, 0xbb9(r29)
    lbz r0, 0x905(r29)
    stb r0, 0xbbb(r29)
    stb r27, 0xbba(r29)
    bl memcpy
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8066C800(void)
{
    nofralloc
    lbz r6, 0x2(r4)
    lis r7, lbl_80829DF0@ha
    lbz r0, 0x1(r4)
    clrlslwi r3, r3, 24, 2
    addi r7, r7, lbl_80829DF0@l
    rlwimi r0, r6, 8, 16, 23
    lwzx r3, r7, r3
    andi. r0, r0, 0x9f1f
    sth r0, 0x0(r5)
    lbz r0, 0x1(r4)
    extrwi r0, r0, 1, 24
    stw r0, 0x848(r3)
    blr
}

asm void fn_8066C840(void)
{
    nofralloc
    lbz r6, 0x2(r4)
    lis r7, lbl_80829DF0@ha
    lbz r0, 0x1(r4)
    clrlslwi r8, r3, 24, 2
    addi r7, r7, lbl_80829DF0@l
    rlwimi r0, r6, 8, 16, 23
    lwzx r3, r7, r8
    andi. r0, r0, 0x9f1f
    sth r0, 0x0(r5)
    lbz r0, 0x1(r4)
    extrwi r0, r0, 1, 24
    stw r0, 0x848(r3)
    lbz r3, 0x3(r4)
    lbz r0, 0x1(r4)
    slwi r6, r3, 2
    lwzx r3, r7, r8
    extsh r6, r6
    extrwi r0, r0, 2, 25
    clrrwi r6, r6, 2
    lha r7, 0x874(r3)
    extsh r6, r6
    or r0, r6, r0
    extsh r0, r0
    subf r0, r7, r0
    sth r0, 0x2(r5)
    lbz r6, 0x4(r4)
    lbz r0, 0x2(r4)
    slwi r6, r6, 2
    lha r7, 0x876(r3)
    extsh r6, r6
    rlwinm r0, r0, 28, 30, 30
    clrrwi r6, r6, 2
    extsh r6, r6
    extsh r0, r0
    or r0, r6, r0
    extsh r0, r0
    subf r0, r7, r0
    sth r0, 0x4(r5)
    lbz r6, 0x5(r4)
    lbz r0, 0x2(r4)
    slwi r4, r6, 2
    lha r6, 0x878(r3)
    extsh r3, r4
    rlwinm r0, r0, 27, 30, 30
    clrrwi r3, r3, 2
    extsh r3, r3
    extsh r0, r0
    or r0, r3, r0
    extsh r0, r0
    subf r0, r6, r0
    sth r0, 0x6(r5)
    blr
}

asm void fn_8066C910(void)
{
    nofralloc
    lbz r6, 0x2(r4)
    lis r7, lbl_80829DF0@ha
    lbz r0, 0x1(r4)
    clrlslwi r8, r3, 24, 2
    rlwimi r0, r6, 8, 16, 23
    addi r7, r7, lbl_80829DF0@l
    lwzx r8, r7, r8
    andi. r0, r0, 0x9f1f
    addi r6, r4, 0x3
    li r7, 0x8
    sth r0, 0x0(r5)
    lbz r0, 0x1(r4)
    mr r4, r5
    extrwi r0, r0, 1, 24
    stw r0, 0x848(r8)
    lbz r5, 0x906(r8)
    b fn_8066C250
}

asm void fn_8066C960(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r10, lbl_80829DF0@ha
    clrlslwi r11, r3, 24, 2
    stw r0, 0x14(r1)
    addi r10, r10, lbl_80829DF0@l
    li r7, 0xc
    stw r5, 0x8(r1)
    lwzx r8, r10, r11
    lbz r6, 0x2(r4)
    lbz r0, 0x1(r4)
    rlwimi r0, r6, 8, 16, 23
    addi r6, r4, 0x6
    andi. r0, r0, 0x9f1f
    sth r0, 0x0(r5)
    lbz r0, 0x1(r4)
    extrwi r0, r0, 1, 24
    stw r0, 0x848(r8)
    lbz r5, 0x3(r4)
    lbz r0, 0x1(r4)
    slwi r9, r5, 2
    lwzx r5, r10, r11
    extsh r9, r9
    extrwi r0, r0, 2, 25
    clrrwi r9, r9, 2
    lha r11, 0x874(r5)
    extsh r10, r9
    lwz r9, 0x8(r1)
    or r0, r10, r0
    extsh r0, r0
    subf r0, r11, r0
    sth r0, 0x2(r9)
    lbz r9, 0x4(r4)
    lbz r0, 0x2(r4)
    slwi r9, r9, 2
    lha r11, 0x876(r5)
    extsh r9, r9
    rlwinm r0, r0, 28, 30, 30
    clrrwi r10, r9, 2
    lwz r9, 0x8(r1)
    extsh r10, r10
    extsh r0, r0
    or r0, r10, r0
    extsh r0, r0
    subf r0, r11, r0
    sth r0, 0x4(r9)
    lbz r9, 0x5(r4)
    lbz r0, 0x2(r4)
    addi r4, r1, 0x8
    slwi r9, r9, 2
    lha r10, 0x878(r5)
    extsh r5, r9
    rlwinm r0, r0, 27, 30, 30
    clrrwi r9, r5, 2
    lwz r5, 0x8(r1)
    extsh r9, r9
    extsh r0, r0
    or r0, r9, r0
    extsh r0, r0
    subf r0, r10, r0
    sth r0, 0x6(r5)
    lbz r5, 0x90f(r8)
    bl fn_8066AA60
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8066CA70(void)
{
    nofralloc
    lbz r6, 0x2(r4)
    lis r7, lbl_80829DF0@ha
    lbz r0, 0x1(r4)
    clrlslwi r8, r3, 24, 2
    rlwimi r0, r6, 8, 16, 23
    addi r7, r7, lbl_80829DF0@l
    lwzx r8, r7, r8
    andi. r0, r0, 0x9f1f
    addi r6, r4, 0x3
    li r7, 0x13
    sth r0, 0x0(r5)
    lbz r0, 0x1(r4)
    mr r4, r5
    extrwi r0, r0, 1, 24
    stw r0, 0x848(r8)
    lbz r5, 0x906(r8)
    b fn_8066C250
}

asm void fn_8066CAC0(void)
{
    nofralloc
    lbz r6, 0x2(r4)
    lis r11, lbl_80829DF0@ha
    lbz r0, 0x1(r4)
    clrlslwi r12, r3, 24, 2
    rlwimi r0, r6, 8, 16, 23
    addi r11, r11, lbl_80829DF0@l
    lwzx r9, r11, r12
    andi. r0, r0, 0x9f1f
    addi r6, r4, 0x6
    li r7, 0x10
    sth r0, 0x0(r5)
    lbz r0, 0x1(r4)
    extrwi r0, r0, 1, 24
    stw r0, 0x848(r9)
    lbz r8, 0x3(r4)
    lbz r0, 0x1(r4)
    slwi r10, r8, 2
    lwzx r8, r11, r12
    extsh r10, r10
    extrwi r0, r0, 2, 25
    clrrwi r10, r10, 2
    lha r11, 0x874(r8)
    extsh r10, r10
    or r0, r10, r0
    extsh r0, r0
    subf r0, r11, r0
    sth r0, 0x2(r5)
    lbz r10, 0x4(r4)
    lbz r0, 0x2(r4)
    slwi r10, r10, 2
    lha r11, 0x876(r8)
    extsh r10, r10
    rlwinm r0, r0, 28, 30, 30
    clrrwi r10, r10, 2
    extsh r10, r10
    extsh r0, r0
    or r0, r10, r0
    extsh r0, r0
    subf r0, r11, r0
    sth r0, 0x4(r5)
    lbz r10, 0x5(r4)
    lbz r0, 0x2(r4)
    mr r4, r5
    slwi r10, r10, 2
    lha r11, 0x878(r8)
    extsh r8, r10
    rlwinm r0, r0, 27, 30, 30
    clrrwi r8, r8, 2
    extsh r8, r8
    extsh r0, r0
    or r0, r8, r0
    extsh r0, r0
    subf r0, r11, r0
    sth r0, 0x6(r5)
    lbz r5, 0x906(r9)
    b fn_8066C250
}

asm void fn_8066CBA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_80829DF0@ha
    clrlslwi r8, r3, 24, 2
    stw r0, 0x24(r1)
    addi r7, r7, lbl_80829DF0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    stw r5, 0x8(r1)
    lwzx r31, r7, r8
    li r7, 0xa
    lbz r6, 0x2(r4)
    lbz r0, 0x1(r4)
    rlwimi r0, r6, 8, 16, 23
    addi r6, r29, 0x3
    andi. r0, r0, 0x9f1f
    sth r0, 0x0(r5)
    lbz r0, 0x1(r4)
    addi r4, r1, 0x8
    extrwi r0, r0, 1, 24
    stw r0, 0x848(r31)
    lbz r5, 0x90f(r31)
    bl fn_8066AA60
    lbz r5, 0x906(r31)
    mr r3, r28
    mr r4, r30
    addi r6, r29, 0xd
    li r7, 0x9
    bl fn_8066C250
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8066CC50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r9, lbl_80829DF0@ha
    clrlslwi r10, r3, 24, 2
    stw r0, 0x24(r1)
    addi r9, r9, lbl_80829DF0@l
    li r7, 0xa
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    stw r5, 0x8(r1)
    lwzx r31, r9, r10
    lbz r6, 0x2(r4)
    lbz r0, 0x1(r4)
    rlwimi r0, r6, 8, 16, 23
    addi r6, r29, 0x6
    andi. r0, r0, 0x9f1f
    sth r0, 0x0(r5)
    lbz r0, 0x1(r4)
    extrwi r0, r0, 1, 24
    stw r0, 0x848(r31)
    lbz r5, 0x3(r4)
    lbz r0, 0x1(r4)
    slwi r8, r5, 2
    lwzx r5, r9, r10
    extsh r8, r8
    extrwi r0, r0, 2, 25
    clrrwi r8, r8, 2
    lha r10, 0x874(r5)
    extsh r9, r8
    lwz r8, 0x8(r1)
    or r0, r9, r0
    extsh r0, r0
    subf r0, r10, r0
    sth r0, 0x2(r8)
    lbz r8, 0x4(r4)
    lbz r0, 0x2(r4)
    slwi r8, r8, 2
    lha r10, 0x876(r5)
    extsh r8, r8
    rlwinm r0, r0, 28, 30, 30
    clrrwi r9, r8, 2
    lwz r8, 0x8(r1)
    extsh r9, r9
    extsh r0, r0
    or r0, r9, r0
    extsh r0, r0
    subf r0, r10, r0
    sth r0, 0x4(r8)
    lbz r8, 0x5(r4)
    lbz r0, 0x2(r4)
    addi r4, r1, 0x8
    slwi r8, r8, 2
    lha r9, 0x878(r5)
    extsh r5, r8
    rlwinm r0, r0, 27, 30, 30
    clrrwi r8, r5, 2
    lwz r5, 0x8(r1)
    extsh r8, r8
    extsh r0, r0
    or r0, r8, r0
    extsh r0, r0
    subf r0, r9, r0
    sth r0, 0x6(r5)
    lbz r5, 0x90f(r31)
    bl fn_8066AA60
    lbz r5, 0x906(r31)
    mr r3, r28
    mr r4, r30
    addi r6, r29, 0x10
    li r7, 0x6
    bl fn_8066C250
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8066CDA0(void)
{
    nofralloc
    lis r6, lbl_80829DF0@ha
    mr r7, r4
    slwi r0, r3, 2
    mr r4, r5
    addi r6, r6, lbl_80829DF0@l
    lwzx r5, r6, r0
    addi r6, r7, 0x1
    li r7, 0x15
    lbz r5, 0x906(r5)
    b fn_8066C250
}

asm void fn_8066CDD0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lis r6, lbl_80829DF0@ha
    clrlslwi r0, r3, 24, 2
    addi r6, r6, lbl_80829DF0@l
    stw r5, 0x8(r1)
    lwzx r29, r6, r0
    mr r27, r3
    mr r28, r4
    mr r30, r5
    lbz r0, 0xba7(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8066CDD0_00002C80
    mr r3, r30
    li r4, 0x0
    li r5, 0x60
    bl memset
lbl_fn_8066CDD0_00002C80:
    lbz r3, 0x2(r28)
    lis r9, lbl_80829DF0@ha
    lbz r0, 0x1(r28)
    li r31, 0x0
    rlwimi r0, r3, 8, 16, 23
    clrlslwi r10, r27, 24, 2
    andi. r0, r0, 0x9f1f
    addi r9, r9, lbl_80829DF0@l
    mr r3, r27
    addi r4, r1, 0x8
    sth r0, 0x0(r30)
    addi r6, r28, 0x4
    li r5, 0x0
    li r7, 0x0
    stw r31, 0x848(r29)
    lbz r8, 0x3(r28)
    lbz r0, 0x1(r28)
    slwi r8, r8, 2
    lwzx r9, r9, r10
    extsh r8, r8
    rlwinm r0, r0, 26, 30, 30
    clrrwi r8, r8, 2
    lha r9, 0x874(r9)
    extsh r8, r8
    extsh r0, r0
    or r0, r8, r0
    extsh r0, r0
    subf r0, r9, r0
    sth r0, 0x2(r30)
    lbz r8, 0x2(r28)
    lbz r0, 0x1(r28)
    slwi r8, r8, 3
    lha r9, 0x6(r30)
    extsh r8, r8
    rlwinm r0, r0, 1, 24, 25
    clrrwi r8, r8, 8
    extsh r8, r8
    or r0, r8, r0
    extsh r0, r0
    or r0, r9, r0
    sth r0, 0x6(r30)
    bl fn_8066AF00
    mr r3, r27
    addi r4, r1, 0x8
    addi r6, r28, 0xd
    li r5, 0x1
    li r7, 0x0
    bl fn_8066AF00
    bl OSDisableInterrupts
    lbz r0, 0xba7(r29)
    ori r0, r0, 0x1
    stb r0, 0xba7(r29)
    cmplwi r0, 0x3
    bne lbl_fn_8066CDD0_00002D7C
    lha r4, 0x878(r29)
    lha r0, 0x6(r30)
    subf r0, r4, r0
    sth r0, 0x6(r30)
    lbz r0, 0x90c(r29)
    cntlzw r0, r0
    extrwi r0, r0, 8, 19
    stb r0, 0x90c(r29)
    stb r31, 0xba7(r29)
lbl_fn_8066CDD0_00002D7C:
    bl OSRestoreInterrupts
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8066CF40(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lis r6, lbl_80829DF0@ha
    clrlslwi r0, r3, 24, 2
    addi r6, r6, lbl_80829DF0@l
    stw r5, 0x8(r1)
    lwzx r29, r6, r0
    mr r27, r3
    mr r28, r4
    mr r30, r5
    lbz r0, 0xba7(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8066CF40_00002DF0
    mr r3, r30
    li r4, 0x0
    li r5, 0x60
    bl memset
lbl_fn_8066CF40_00002DF0:
    lbz r3, 0x2(r28)
    lis r9, lbl_80829DF0@ha
    lbz r0, 0x1(r28)
    li r31, 0x0
    rlwimi r0, r3, 8, 16, 23
    clrlslwi r10, r27, 24, 2
    andi. r0, r0, 0x9f1f
    addi r9, r9, lbl_80829DF0@l
    mr r3, r27
    addi r4, r1, 0x8
    sth r0, 0x0(r30)
    addi r6, r28, 0x4
    li r5, 0x2
    li r7, 0x0
    stw r31, 0x848(r29)
    lbz r8, 0x3(r28)
    lbz r0, 0x1(r28)
    slwi r8, r8, 2
    lwzx r9, r9, r10
    extsh r8, r8
    rlwinm r0, r0, 26, 30, 30
    clrrwi r8, r8, 2
    lha r9, 0x876(r9)
    extsh r8, r8
    extsh r0, r0
    or r0, r8, r0
    extsh r0, r0
    subf r0, r9, r0
    sth r0, 0x4(r30)
    lbz r0, 0x1(r28)
    lbz r8, 0x2(r28)
    rlwinm r0, r0, 29, 28, 29
    lha r9, 0x6(r30)
    rlwimi r0, r8, 31, 26, 27
    extsh r0, r0
    or r0, r9, r0
    sth r0, 0x6(r30)
    bl fn_8066AF00
    mr r3, r27
    addi r4, r1, 0x8
    addi r6, r28, 0xd
    li r5, 0x3
    li r7, 0x0
    bl fn_8066AF00
    bl OSDisableInterrupts
    lbz r0, 0xba7(r29)
    ori r0, r0, 0x2
    stb r0, 0xba7(r29)
    cmplwi r0, 0x3
    bne lbl_fn_8066CF40_00002EDC
    lha r4, 0x878(r29)
    lha r0, 0x6(r30)
    subf r0, r4, r0
    sth r0, 0x6(r30)
    lbz r0, 0x90c(r29)
    cntlzw r0, r0
    extrwi r0, r0, 8, 19
    stb r0, 0x90c(r29)
    stb r31, 0xba7(r29)
lbl_fn_8066CF40_00002EDC:
    bl OSRestoreInterrupts
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8066D0A0(void)
{
    nofralloc
    blr
}

asm void fn_8066D0B0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_14
    lis r4, lbl_80829DF0@ha
    slwi r0, r3, 2
    addi r4, r4, lbl_80829DF0@l
    lwzx r31, r4, r0
    bl OSGetTick
    extrwi r0, r3, 8, 16
    stb r0, lbl_8088029B
    bl OSGetTick
    extrwi r0, r3, 6, 10
    stb r0, lbl_8088029A
    bl OSGetTick
    lbz r6, lbl_8088029A
    srwi r3, r3, 24
    lbz r0, lbl_8088029B
    andi. r4, r3, 0x4c
    lis r5, 0x9249
    lis r3, lbl_807B9688@ha
    mullw r9, r0, r6
    lis r7, lbl_80808081@ha
    addi r8, r5, 0x2493
    stb r4, lbl_80880299
    addi r0, r7, lbl_80808081@l
    li r11, 0xff
    add r10, r4, r9
    li r5, 0x2
    mulhwu r9, r0, r10
    stb r11, lbl_80880298
    addi r3, r3, lbl_807B9688@l
    li r7, 0x0
    srwi r9, r9, 7
    mulli r9, r9, 0xff
    subf r9, r9, r10
    clrlwi r10, r9, 24
    mulhw r8, r8, r10
    add r8, r8, r10
    srawi r8, r8, 2
    srwi r9, r8, 31
    add r8, r8, r9
    mulli r8, r8, 0x7
    subf r8, r8, r10
    clrlwi r30, r8, 24
    mulli r8, r30, 0x6
    clrlwi r14, r8, 24
    mtctr r5
lbl_fn_8066D0B0_00002FD4:
    clrlwi r5, r10, 24
    clrlwi r8, r7, 24
    mullw r9, r5, r6
    addi r7, r7, 0x5
    addi r5, r1, 0x18
    add r5, r5, r8
    add r9, r4, r9
    mulhwu r8, r0, r9
    srwi r8, r8, 7
    mulli r8, r8, 0xff
    subf r8, r8, r9
    clrlwi r9, r8, 24
    mullw r8, r9, r6
    lbzx r9, r3, r9
    stb r9, 0x0(r5)
    add r9, r4, r8
    mulhwu r8, r0, r9
    srwi r8, r8, 7
    mulli r8, r8, 0xff
    subf r8, r8, r9
    clrlwi r9, r8, 24
    mullw r8, r9, r6
    lbzx r9, r3, r9
    stb r9, 0x1(r5)
    add r9, r4, r8
    mulhwu r8, r0, r9
    srwi r8, r8, 7
    mulli r8, r8, 0xff
    subf r8, r8, r9
    clrlwi r9, r8, 24
    mullw r8, r9, r6
    lbzx r9, r3, r9
    stb r9, 0x2(r5)
    add r9, r4, r8
    mulhwu r8, r0, r9
    srwi r8, r8, 7
    mulli r8, r8, 0xff
    subf r8, r8, r9
    clrlwi r9, r8, 24
    mullw r8, r9, r6
    lbzx r9, r3, r9
    stb r9, 0x3(r5)
    add r9, r4, r8
    mulhwu r8, r0, r9
    srwi r8, r8, 7
    mulli r8, r8, 0xff
    subf r8, r8, r9
    clrlwi r10, r8, 24
    lbzx r8, r3, r10
    stb r8, 0x4(r5)
    bdnz lbl_fn_8066D0B0_00002FD4
    stb r10, lbl_8088029B
    bl OSDisableInterrupts
    lis r5, lbl_807B9688@ha
    lbz r7, 0x1a(r1)
    addi r5, r5, lbl_807B9688@l
    lbz r20, 0x18(r1)
    lbzx r8, r5, r7
    lis r16, lbl_807B9658@ha
    lbzx r9, r5, r20
    addi r16, r16, lbl_807B9658@l
    lbz r0, 0x1d(r1)
    slwi r6, r8, 29
    srwi r15, r8, 31
    add r4, r14, r16
    subf r6, r15, r6
    lbz r28, 0x19(r1)
    rotlwi r12, r6, 3
    lbzx r16, r16, r14
    lbzx r6, r5, r0
    add r12, r12, r15
    clrlwi r15, r12, 24
    slwi r10, r9, 29
    srwi r11, r9, 31
    xor r18, r16, r6
    subf r10, r11, r10
    lbzx r27, r5, r28
    rotlwi r10, r10, 3
    lbz r14, 0x1(r4)
    add r11, r10, r11
    sraw r17, r18, r15
    subfic r16, r15, 0x8
    lbz r24, 0x21(r1)
    lbz r12, 0x1f(r1)
    slw r16, r18, r16
    lbz r26, 0x1e(r1)
    or r16, r17, r16
    xor r19, r14, r27
    clrlwi r11, r11, 24
    sraw r15, r19, r11
    lbz r10, 0x1c(r1)
    subfic r14, r11, 0x8
    lbzx r23, r5, r24
    slw r14, r19, r14
    clrlwi r17, r16, 24
    or r14, r15, r14
    lbzx r11, r5, r10
    clrlwi r16, r14, 24
    lbz r14, 0x20(r1)
    stb r14, 0x28(r1)
    subf r17, r23, r17
    subf r14, r6, r16
    lbzx r29, r5, r12
    xor r16, r11, r17
    lbzx r25, r5, r26
    xor r14, r29, r14
    lbz r15, 0x2(r4)
    stw r3, 0x24(r1)
    clrlwi r22, r16, 24
    xor r3, r15, r25
    clrlwi r21, r14, 24
    lbz r14, 0x28(r1)
    slwi r15, r29, 29
    srwi r18, r29, 31
    lbz r17, 0x3(r4)
    lbzx r16, r5, r14
    addi r14, r30, 0x2
    stw r14, 0x30(r1)
    subf r15, r18, r15
    slwi r14, r16, 29
    srwi r16, r16, 31
    subf r14, r16, r14
    xor r17, r17, r11
    rotlwi r14, r14, 3
    rotlwi r19, r15, 3
    add r14, r14, r16
    clrlwi r16, r3, 24
    clrlwi r15, r14, 24
    lbz r14, 0x4(r4)
    sraw r3, r16, r15
    stw r3, 0x2c(r1)
    add r3, r19, r18
    subfic r18, r15, 0x8
    stw r18, 0x3c(r1)
    slwi r19, r25, 29
    srwi r18, r25, 31
    lbz r4, 0x5(r4)
    subf r25, r18, r19
    clrlwi r19, r3, 24
    xor r14, r14, r27
    clrlwi r17, r17, 24
    rotlwi r25, r25, 3
    xor r27, r4, r29
    add r18, r25, r18
    lwz r25, 0x3c(r1)
    sraw r4, r17, r19
    clrlwi r14, r14, 24
    subfic r19, r19, 0x8
    slw r16, r16, r25
    lwz r25, 0x2c(r1)
    slw r19, r17, r19
    clrlwi r18, r18, 24
    lbz r3, 0x1b(r1)
    sraw r17, r14, r18
    or r25, r25, r16
    subfic r16, r18, 0x8
    clrlwi r18, r27, 24
    sraw r27, r18, r15
    or r4, r4, r19
    slw r19, r14, r16
    subfic r15, r15, 0x8
    slw r16, r18, r15
    lbzx r15, r5, r3
    or r17, r17, r19
    clrlwi r14, r25, 24
    or r16, r27, r16
    clrlwi r18, r4, 24
    clrlwi r4, r16, 24
    clrlwi r17, r17, 24
    subf r19, r8, r14
    subf r16, r15, r18
    subf r14, r15, r17
    subf r4, r6, r4
    xor r15, r9, r19
    xor r8, r8, r16
    xor r9, r11, r14
    xor r11, r23, r4
    lwz r4, 0x30(r1)
    clrlwi r6, r15, 24
    clrlwi r8, r8, 24
    clrlwi r9, r9, 24
    slwi r23, r4, 8
    clrlwi r11, r11, 24
    addi r14, r30, 0x1
    add r4, r3, r23
    slwi r25, r14, 8
    stw r4, 0x34(r1)
    add r30, r0, r23
    add r0, r7, r23
    stw r0, 0x38(r1)
    add r29, r26, r23
    add r17, r12, r23
    add r14, r10, r23
    add r10, r24, r23
    add r24, r28, r25
    lbz r0, 0x28(r1)
    add r16, r11, r25
    add r12, r21, r25
    add r18, r6, r25
    add r27, r20, r25
    add r20, r20, r23
    add r3, r3, r25
    add r19, r9, r25
    add r26, r0, r23
    lbzx r0, r19, r5
    lwz r19, 0x34(r1)
    add r28, r28, r23
    add r23, r7, r25
    add r15, r22, r25
    add r4, r8, r25
    lbzx r19, r19, r5
    lbzx r25, r26, r5
    addi r7, r1, 0x18
    lbzx r24, r24, r5
    xor r19, r0, r19
    lbzx r17, r17, r5
    xor r24, r24, r25
    lbzx r16, r16, r5
    xor r0, r0, r17
    lbzx r14, r14, r5
    xor r17, r16, r17
    lbzx r12, r12, r5
    xor r16, r16, r14
    lbzx r26, r30, r5
    xor r14, r12, r14
    xor r12, r12, r25
    lbzx r3, r3, r5
    lbzx r18, r18, r5
    lbzx r25, r4, r5
    xor r3, r3, r26
    xor r4, r18, r26
    lbzx r10, r10, r5
    lbzx r20, r20, r5
    xor r18, r18, r10
    xor r10, r25, r10
    xor r20, r25, r20
    lbzx r25, r15, r5
    lwz r15, 0x38(r1)
    lbzx r26, r28, r5
    lbzx r15, r15, r5
    lbzx r29, r29, r5
    xor r28, r25, r15
    lbzx r15, r27, r5
    lbzx r5, r23, r5
    xor r25, r25, r26
    xor r15, r15, r29
    stb r19, 0x10(r1)
    xor r5, r5, r29
    stb r4, 0x11(r1)
    stb r17, 0x12(r1)
    stb r28, 0x13(r1)
    stb r14, 0x14(r1)
    stb r10, 0x15(r1)
    stb r15, 0x16(r1)
    stb r24, 0x17(r1)
    stb r25, 0x8(r1)
    stb r16, 0x9(r1)
    stb r20, 0xa(r1)
    stb r18, 0xb(r1)
    stb r0, 0xc(r1)
    stb r12, 0xd(r1)
    stb r3, 0xe(r1)
    stb r5, 0xf(r1)
    li r5, 0x0
    li r3, 0x1
    subfic r4, r5, 0x9
    li r0, 0x2
    lbzx r4, r7, r4
    subfic r3, r3, 0x9
    stb r4, 0xb0c(r31)
    subfic r4, r0, 0x9
    lbzx r3, r7, r3
    li r0, 0x3
    stb r3, 0xb0d(r31)
    subfic r3, r0, 0x9
    lbzx r4, r7, r4
    li r0, 0x4
    stb r4, 0xb0e(r31)
    subfic r0, r0, 0x9
    lbzx r4, r7, r3
    li r5, 0x5
    stb r4, 0xb0f(r31)
    subfic r4, r5, 0x9
    lbzx r0, r7, r0
    li r3, 0x6
    stb r0, 0xb10(r31)
    subfic r3, r3, 0x9
    lbzx r4, r7, r4
    li r0, 0x7
    stb r4, 0xb11(r31)
    subfic r4, r0, 0x9
    lbzx r3, r7, r3
    li r0, 0x8
    stb r3, 0xb12(r31)
    subfic r3, r0, 0x9
    lbzx r4, r7, r4
    li r0, 0x9
    stb r4, 0xb13(r31)
    subfic r0, r0, 0x9
    lbzx r4, r7, r3
    addi r3, r31, 0xb1c
    stb r4, 0xb14(r31)
    addi r4, r1, 0x10
    lbzx r0, r7, r0
    li r5, 0x8
    stb r0, 0xb15(r31)
    stb r11, 0xb16(r31)
    stb r9, 0xb17(r31)
    stb r8, 0xb18(r31)
    stb r6, 0xb19(r31)
    stb r21, 0xb1a(r31)
    stb r22, 0xb1b(r31)
    bl memcpy
    addi r3, r31, 0xb24
    addi r4, r1, 0x8
    li r5, 0x8
    bl memcpy
    lwz r3, 0x24(r1)
    bl OSRestoreInterrupts
    addi r11, r1, 0x90
    bl _restgpr_14
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8066D690(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_14
    lis r4, lbl_80829DF0@ha
    slwi r0, r3, 2
    addi r4, r4, lbl_80829DF0@l
    lwzx r31, r4, r0
    bl OSGetTick
    extrwi r0, r3, 8, 16
    stb r0, lbl_8088029B
    bl OSGetTick
    extrwi r0, r3, 6, 10
    stb r0, lbl_8088029A
    bl OSGetTick
    lbz r6, lbl_8088029A
    srwi r3, r3, 24
    lbz r0, lbl_8088029B
    andi. r4, r3, 0x4c
    lis r5, 0x9249
    lis r3, lbl_807B9FB8@ha
    mullw r9, r0, r6
    lis r7, lbl_80808081@ha
    addi r8, r5, 0x2493
    stb r4, lbl_80880299
    addi r0, r7, lbl_80808081@l
    li r11, 0xff
    add r10, r4, r9
    li r5, 0x2
    mulhwu r9, r0, r10
    stb r11, lbl_80880298
    addi r3, r3, lbl_807B9FB8@l
    li r7, 0x0
    srwi r9, r9, 7
    mulli r9, r9, 0xff
    subf r9, r9, r10
    clrlwi r10, r9, 24
    mulhw r8, r8, r10
    add r8, r8, r10
    srawi r8, r8, 2
    srwi r9, r8, 31
    add r8, r8, r9
    mulli r8, r8, 0x7
    subf r8, r8, r10
    clrlwi r30, r8, 24
    mulli r8, r30, 0x6
    clrlwi r14, r8, 24
    mtctr r5
lbl_fn_8066D690_000035B4:
    clrlwi r5, r10, 24
    clrlwi r8, r7, 24
    mullw r9, r5, r6
    addi r7, r7, 0x5
    addi r5, r1, 0x18
    add r5, r5, r8
    add r9, r4, r9
    mulhwu r8, r0, r9
    srwi r8, r8, 7
    mulli r8, r8, 0xff
    subf r8, r8, r9
    clrlwi r9, r8, 24
    mullw r8, r9, r6
    lbzx r9, r3, r9
    stb r9, 0x0(r5)
    add r9, r4, r8
    mulhwu r8, r0, r9
    srwi r8, r8, 7
    mulli r8, r8, 0xff
    subf r8, r8, r9
    clrlwi r9, r8, 24
    mullw r8, r9, r6
    lbzx r9, r3, r9
    stb r9, 0x1(r5)
    add r9, r4, r8
    mulhwu r8, r0, r9
    srwi r8, r8, 7
    mulli r8, r8, 0xff
    subf r8, r8, r9
    clrlwi r9, r8, 24
    mullw r8, r9, r6
    lbzx r9, r3, r9
    stb r9, 0x2(r5)
    add r9, r4, r8
    mulhwu r8, r0, r9
    srwi r8, r8, 7
    mulli r8, r8, 0xff
    subf r8, r8, r9
    clrlwi r9, r8, 24
    mullw r8, r9, r6
    lbzx r9, r3, r9
    stb r9, 0x3(r5)
    add r9, r4, r8
    mulhwu r8, r0, r9
    srwi r8, r8, 7
    mulli r8, r8, 0xff
    subf r8, r8, r9
    clrlwi r10, r8, 24
    lbzx r8, r3, r10
    stb r8, 0x4(r5)
    bdnz lbl_fn_8066D690_000035B4
    stb r10, lbl_8088029B
    bl OSDisableInterrupts
    lis r27, lbl_807B9FB8@ha
    lbz r23, 0x19(r1)
    addi r27, r27, lbl_807B9FB8@l
    lbz r21, 0x1a(r1)
    lbzx r22, r27, r23
    lis r7, lbl_807B9F88@ha
    addi r7, r7, lbl_807B9F88@l
    lbzx r12, r27, r21
    slwi r0, r22, 29
    srwi r5, r22, 31
    subf r0, r5, r0
    lbz r8, 0x18(r1)
    rotlwi r4, r0, 3
    srwi r6, r12, 31
    add r4, r4, r5
    slwi r0, r12, 29
    subf r5, r6, r0
    lbzx r16, r27, r8
    lbzx r9, r7, r14
    rotlwi r5, r5, 3
    lbz r20, 0x1c(r1)
    add r6, r5, r6
    lbz r5, 0x1e(r1)
    xor r10, r9, r16
    lbz r0, 0x20(r1)
    clrlwi r4, r4, 24
    add r28, r14, r7
    stb r5, 0x29(r1)
    subfic r7, r4, 0x8
    clrlwi r9, r6, 24
    sraw r7, r10, r7
    slw r4, r10, r4
    or r14, r4, r7
    stb r0, 0x28(r1)
    lbzx r0, r27, r0
    subfic r17, r9, 0x8
    lbz r6, 0x29(r1)
    lbz r4, 0x2(r28)
    slwi r10, r0, 29
    lbzx r11, r27, r6
    clrlwi r6, r14, 24
    srwi r15, r0, 31
    lbzx r19, r27, r20
    lbz r7, 0x1(r28)
    subf r14, r15, r10
    lbz r5, 0x1b(r1)
    add r24, r11, r6
    xor r7, r7, r19
    lbz r18, 0x1f(r1)
    slw r9, r7, r9
    lbzx r10, r27, r5
    sraw r7, r7, r17
    lbzx r17, r27, r18
    or r7, r9, r7
    rotlwi r14, r14, 3
    add r9, r14, r15
    stw r3, 0x24(r1)
    clrlwi r6, r7, 24
    xor r14, r17, r24
    add r6, r10, r6
    xor r4, r4, r12
    xor r7, r22, r6
    clrlwi r26, r9, 24
    clrlwi r6, r14, 24
    clrlwi r7, r7, 24
    lbz r3, 0x21(r1)
    clrlwi r29, r4, 24
    subfic r9, r26, 0x8
    lbz r14, 0x3(r28)
    lbzx r4, r27, r3
    addi r12, r30, 0x2
    xor r25, r14, r11
    sraw r9, r29, r9
    slwi r11, r4, 29
    srwi r24, r4, 31
    stw r12, 0x38(r1)
    subf r12, r24, r11
    rotlwi r14, r12, 3
    lbz r11, 0x5(r28)
    add r14, r14, r24
    stw r9, 0x2c(r1)
    slwi r9, r10, 29
    srwi r10, r10, 31
    clrlwi r24, r14, 24
    stw r11, 0x34(r1)
    subf r14, r10, r9
    slwi r11, r19, 29
    subfic r9, r24, 0x8
    srwi r12, r19, 31
    rotlwi r14, r14, 3
    clrlwi r25, r25, 24
    subf r11, r12, r11
    stw r9, 0x30(r1)
    add r10, r14, r10
    lbz r15, 0x1d(r1)
    lwz r14, 0x30(r1)
    rotlwi r11, r11, 3
    add r11, r11, r12
    lbz r12, 0x4(r28)
    lbzx r9, r27, r15
    clrlwi r28, r11, 24
    sraw r14, r25, r14
    slw r24, r25, r24
    xor r11, r12, r9
    subfic r12, r28, 0x8
    sraw r12, r11, r12
    lwz r25, 0x2c(r1)
    slw r26, r29, r26
    slw r11, r11, r28
    or r25, r26, r25
    lwz r26, 0x34(r1)
    or r14, r24, r14
    or r11, r11, r12
    clrlwi r10, r10, 24
    xor r4, r26, r4
    subfic r26, r10, 0x8
    clrlwi r12, r14, 24
    slw r10, r4, r10
    clrlwi r24, r25, 24
    sraw r4, r4, r26
    or r4, r10, r4
    clrlwi r10, r11, 24
    add r11, r17, r12
    add r14, r19, r24
    add r10, r0, r10
    clrlwi r4, r4, 24
    add r0, r0, r4
    xor r11, r16, r11
    xor r10, r22, r10
    xor r12, r9, r14
    xor r4, r9, r0
    clrlwi r9, r11, 24
    clrlwi r11, r4, 24
    lwz r4, 0x38(r1)
    clrlwi r0, r12, 24
    clrlwi r10, r10, 24
    slwi r22, r4, 8
    add r28, r3, r22
    lbz r3, 0x29(r1)
    addi r4, r30, 0x1
    add r29, r15, r22
    add r25, r3, r22
    lbz r3, 0x28(r1)
    slwi r24, r4, 8
    add r16, r18, r22
    add r4, r21, r22
    add r12, r20, r22
    add r18, r3, r22
    add r3, r23, r24
    add r30, r5, r22
    add r15, r11, r24
    stw r4, 0x3c(r1)
    add r4, r7, r24
    add r17, r0, r24
    add r14, r6, r24
    add r20, r8, r24
    add r23, r23, r22
    add r8, r8, r22
    add r19, r10, r24
    add r5, r5, r24
    lbzx r22, r19, r27
    add r26, r9, r24
    add r21, r21, r24
    lbzx r24, r30, r27
    addi r19, r1, 0x18
    lbzx r16, r16, r27
    xor r24, r22, r24
    lbzx r15, r15, r27
    xor r22, r22, r16
    lbzx r12, r12, r27
    xor r16, r15, r16
    lbzx r4, r4, r27
    xor r15, r15, r12
    lbzx r18, r18, r27
    xor r12, r4, r12
    lbzx r3, r3, r27
    xor r4, r4, r18
    lbzx r29, r29, r27
    xor r18, r3, r18
    lbzx r3, r28, r27
    lbzx r5, r5, r27
    lbzx r17, r17, r27
    lbzx r28, r26, r27
    xor r5, r5, r29
    xor r26, r17, r29
    xor r17, r17, r3
    xor r3, r28, r3
    lbzx r8, r8, r27
    lbzx r14, r14, r27
    xor r28, r28, r8
    lwz r8, 0x3c(r1)
    lbzx r23, r23, r27
    lbzx r8, r8, r27
    lbzx r25, r25, r27
    xor r29, r14, r8
    lbzx r8, r20, r27
    xor r20, r14, r23
    lbzx r14, r21, r27
    xor r21, r8, r25
    stb r24, 0x10(r1)
    xor r8, r14, r25
    stb r26, 0x11(r1)
    stb r16, 0x12(r1)
    stb r29, 0x13(r1)
    stb r12, 0x14(r1)
    stb r3, 0x15(r1)
    stb r21, 0x16(r1)
    stb r18, 0x17(r1)
    stb r20, 0x8(r1)
    stb r15, 0x9(r1)
    stb r28, 0xa(r1)
    stb r17, 0xb(r1)
    stb r22, 0xc(r1)
    stb r4, 0xd(r1)
    stb r5, 0xe(r1)
    stb r8, 0xf(r1)
    li r3, 0x0
    li r4, 0x1
    subfic r12, r3, 0x9
    lbzx r5, r19, r12
    subfic r4, r4, 0x9
    stb r5, 0xb0c(r31)
    li r3, 0x2
    lbzx r4, r19, r4
    subfic r5, r3, 0x9
    stb r4, 0xb0d(r31)
    li r3, 0x3
    lbzx r5, r19, r5
    subfic r4, r3, 0x9
    stb r5, 0xb0e(r31)
    li r3, 0x4
    lbzx r4, r19, r4
    subfic r5, r3, 0x9
    stb r4, 0xb0f(r31)
    li r3, 0x5
    lbzx r8, r19, r5
    subfic r12, r3, 0x9
    stb r8, 0xb10(r31)
    li r4, 0x6
    lbzx r5, r19, r12
    subfic r4, r4, 0x9
    stb r5, 0xb11(r31)
    li r3, 0x7
    lbzx r4, r19, r4
    subfic r5, r3, 0x9
    stb r4, 0xb12(r31)
    li r3, 0x8
    lbzx r5, r19, r5
    subfic r4, r3, 0x9
    stb r5, 0xb13(r31)
    li r3, 0x9
    lbzx r4, r19, r4
    subfic r5, r3, 0x9
    stb r4, 0xb14(r31)
    addi r3, r31, 0xb1c
    lbzx r8, r19, r5
    addi r4, r1, 0x10
    stb r8, 0xb15(r31)
    li r5, 0x8
    stb r11, 0xb16(r31)
    stb r10, 0xb17(r31)
    stb r9, 0xb18(r31)
    stb r0, 0xb19(r31)
    stb r7, 0xb1a(r31)
    stb r6, 0xb1b(r31)
    bl memcpy
    addi r3, r31, 0xb24
    addi r4, r1, 0x8
    li r5, 0x8
    bl memcpy
    lwz r3, 0x24(r1)
    bl OSRestoreInterrupts
    addi r11, r1, 0x90
    bl _restgpr_14
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8066DC80(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lis r7, lbl_80829DF0@ha
    slwi r0, r3, 2
    stw r31, 0x1c(r1)
    addi r7, r7, lbl_80829DF0@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwzx r7, r7, r0
    lbz r3, 0xb85(r7)
    addi r0, r3, 0xfe
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_fn_8066DC80_00003DAC
    cmpwi r5, 0x0
    li r8, 0x0
    beq lbl_fn_8066DC80_00003DAC
    cmplwi r5, 0x8
    addis r3, r5, 0x1
    subi r3, r3, 0x8
    ble lbl_fn_8066DC80_00003D54
    clrlwi r3, r3, 16
    addi r0, r3, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmplwi r3, 0x0
    ble lbl_fn_8066DC80_00003D54
lbl_fn_8066DC80_00003B4C:
    clrlwi r29, r8, 16
    addi r3, r8, 0x1
    add r11, r6, r29
    addi r0, r8, 0x2
    slwi r10, r11, 29
    clrlwi r9, r3, 16
    srwi r12, r11, 31
    add r3, r4, r29
    subf r10, r12, r10
    add r11, r6, r9
    rotlwi r10, r10, 3
    clrlwi r9, r0, 16
    add r10, r10, r12
    addi r0, r8, 0x3
    clrlwi r12, r10, 24
    lbz r31, 0x0(r3)
    add r29, r7, r12
    slwi r10, r11, 29
    lbz r30, 0xb24(r29)
    srwi r12, r11, 31
    subf r10, r12, r10
    lbz r29, 0xb1c(r29)
    rotlwi r11, r10, 3
    xor r30, r31, r30
    add r10, r6, r9
    clrlwi r0, r0, 16
    add r9, r11, r12
    add r11, r29, r30
    stb r11, 0x0(r3)
    clrlwi r11, r9, 24
    add r29, r7, r11
    slwi r9, r10, 29
    srwi r11, r10, 31
    lbz r30, 0x1(r3)
    subf r10, r11, r9
    add r9, r6, r0
    rotlwi r0, r10, 3
    lbz r12, 0xb24(r29)
    add r10, r0, r11
    lbz r31, 0xb1c(r29)
    addi r0, r8, 0x4
    xor r11, r30, r12
    clrlwi r28, r10, 24
    clrlwi r0, r0, 16
    add r10, r6, r0
    add r29, r7, r28
    add r0, r31, r11
    stb r0, 0x1(r3)
    slwi r0, r9, 29
    srwi r11, r9, 31
    subf r9, r11, r0
    lbz r30, 0x2(r3)
    addi r0, r8, 0x5
    lbz r12, 0xb24(r29)
    rotlwi r9, r9, 3
    add r9, r9, r11
    clrlwi r0, r0, 16
    clrlwi r31, r9, 24
    lbz r11, 0xb1c(r29)
    add r9, r6, r0
    xor r0, r30, r12
    add r0, r11, r0
    stb r0, 0x2(r3)
    add r29, r7, r31
    slwi r0, r10, 29
    srwi r10, r10, 31
    subf r0, r10, r0
    lbz r12, 0x3(r3)
    lbz r11, 0xb24(r29)
    rotlwi r0, r0, 3
    add r10, r0, r10
    lbz r30, 0xb1c(r29)
    xor r11, r12, r11
    slwi r0, r9, 29
    add r11, r30, r11
    stb r11, 0x3(r3)
    clrlwi r10, r10, 24
    srwi r9, r9, 31
    add r12, r7, r10
    lbz r11, 0x4(r3)
    lbz r10, 0xb24(r12)
    subf r0, r9, r0
    rotlwi r0, r0, 3
    lbz r12, 0xb1c(r12)
    xor r10, r11, r10
    add r10, r12, r10
    add r0, r0, r9
    stb r10, 0x4(r3)
    clrlwi r9, r0, 24
    addi r0, r8, 0x6
    add r29, r7, r9
    clrlwi r9, r0, 16
    lbz r31, 0x5(r3)
    add r10, r6, r9
    addi r0, r8, 0x7
    slwi r9, r10, 29
    lbz r12, 0xb24(r29)
    srwi r11, r10, 31
    clrlwi r0, r0, 16
    subf r9, r11, r9
    lbz r30, 0xb1c(r29)
    rotlwi r10, r9, 3
    xor r12, r31, r12
    add r9, r6, r0
    addi r8, r8, 0x8
    add r0, r10, r11
    add r10, r30, r12
    stb r10, 0x5(r3)
    clrlwi r10, r0, 24
    slwi r0, r9, 29
    srwi r9, r9, 31
    add r12, r7, r10
    lbz r11, 0x6(r3)
    subf r0, r9, r0
    lbz r10, 0xb24(r12)
    rotlwi r0, r0, 3
    lbz r12, 0xb1c(r12)
    add r0, r0, r9
    xor r9, r11, r10
    add r9, r12, r9
    stb r9, 0x6(r3)
    clrlwi r0, r0, 24
    add r10, r7, r0
    lbz r9, 0x7(r3)
    lbz r0, 0xb24(r10)
    lbz r10, 0xb1c(r10)
    xor r0, r9, r0
    add r0, r10, r0
    stb r0, 0x7(r3)
    bdnz lbl_fn_8066DC80_00003B4C
lbl_fn_8066DC80_00003D54:
    clrlwi r3, r8, 16
    subf r0, r3, r5
    mtctr r0
    cmplw r3, r5
    bge lbl_fn_8066DC80_00003DAC
lbl_fn_8066DC80_00003D68:
    clrlwi r9, r8, 16
    addi r8, r8, 0x1
    add r5, r6, r9
    lbzx r3, r4, r9
    slwi r0, r5, 29
    srwi r5, r5, 31
    subf r0, r5, r0
    rotlwi r0, r0, 3
    add r0, r0, r5
    clrlwi r0, r0, 24
    add r5, r7, r0
    lbz r0, 0xb24(r5)
    lbz r5, 0xb1c(r5)
    xor r0, r3, r0
    add r0, r5, r0
    stbx r0, r4, r9
    bdnz lbl_fn_8066DC80_00003D68
lbl_fn_8066DC80_00003DAC:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    addi r1, r1, 0x20
    blr
}

asm void fn_8066DF70(void)
{
    nofralloc
    lis r4, lbl_80829DF0@ha
    slwi r3, r3, 2
    addi r4, r4, lbl_80829DF0@l
    li r0, 0x0
    lwzx r3, r4, r3
    stw r0, 0xb8c(r3)
    stw r0, 0xb90(r3)
    sth r0, 0xb94(r3)
    stw r0, 0xb98(r3)
    stw r0, 0xb9c(r3)
    blr
}

asm void fn_8066DFA0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lis r9, lbl_80829DF0@ha
    slwi r0, r3, 2
    addi r9, r9, lbl_80829DF0@l
    mr r23, r3
    lwzx r31, r9, r0
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r28, r8
    bl OSDisableInterrupts
    lwz r29, 0x900(r31)
    lwz r30, 0x920(r31)
    bl OSRestoreInterrupts
    cmpwi r29, -0x1
    beq lbl_fn_8066DFA0_00003E94
    cmpwi r30, 0x0
    bne lbl_fn_8066DFA0_00003E64
    li r29, -0x2
    b lbl_fn_8066DFA0_00003E94
lbl_fn_8066DFA0_00003E64:
    rlwimi r27, r26, 16, 8, 15
    mr r4, r24
    mr r5, r25
    mr r7, r28
    addi r3, r31, 0x160
    oris r6, r27, 0x400
    bl fn_806663E0
    neg r4, r3
    li r0, -0x2
    or r3, r4, r3
    srawi r3, r3, 31
    andc r29, r0, r3
lbl_fn_8066DFA0_00003E94:
    cmpwi r29, 0x0
    beq lbl_fn_8066DFA0_00003EB8
    cmpwi r28, 0x0
    beq lbl_fn_8066DFA0_00003EB8
    mr r12, r28
    mr r3, r23
    mr r4, r29
    mtctr r12
    bctrl
lbl_fn_8066DFA0_00003EB8:
    addi r11, r1, 0x30
    mr r3, r29
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8066E080(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    addi r6, r3, 0x4
    lwz r0, 0x0(r4)
    addi r3, r4, 0x4
    cmplw r5, r0
    ble lbl_fn_8066E080_00003F00
    li r3, 0x1
    blr
lbl_fn_8066E080_00003F00:
    bge lbl_fn_8066E080_00003F0C
    li r3, -0x1
    blr
lbl_fn_8066E080_00003F0C:
    subic. r5, r5, 0x1
    slwi r4, r5, 2
    addi r0, r5, 0x1
    add r3, r3, r4
    add r4, r6, r4
    mtctr r0
    blt lbl_fn_8066E080_00003F58
lbl_fn_8066E080_00003F28:
    lwz r0, 0x0(r3)
    lwz r5, 0x0(r4)
    cmplw r5, r0
    ble lbl_fn_8066E080_00003F40
    li r3, 0x1
    blr
lbl_fn_8066E080_00003F40:
    bge lbl_fn_8066E080_00003F4C
    li r3, -0x1
    blr
lbl_fn_8066E080_00003F4C:
    subi r3, r3, 0x4
    subi r4, r4, 0x4
    bdnz lbl_fn_8066E080_00003F28
lbl_fn_8066E080_00003F58:
    li r3, 0x0
    blr
}

asm void fn_8066E100(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_19
    srwi. r21, r5, 5
    lwz r24, 0x0(r4)
    mr r19, r3
    addi r23, r4, 0x4
    addi r22, r3, 0x4
    clrlwi r20, r5, 27
    li r6, 0x0
    beq lbl_fn_8066E100_00004010
    cmplwi r21, 0x8
    subi r4, r21, 0x8
    ble lbl_fn_8066E100_00003FE8
    addi r0, r4, 0x7
    mr r5, r22
    srwi r0, r0, 3
    li r3, 0x0
    mtctr r0
    cmplwi r4, 0x0
    ble lbl_fn_8066E100_00003FE8
lbl_fn_8066E100_00003FBC:
    stw r3, 0x0(r5)
    addi r6, r6, 0x8
    stw r3, 0x4(r5)
    stw r3, 0x8(r5)
    stw r3, 0xc(r5)
    stw r3, 0x10(r5)
    stw r3, 0x14(r5)
    stw r3, 0x18(r5)
    stw r3, 0x1c(r5)
    addi r5, r5, 0x20
    bdnz lbl_fn_8066E100_00003FBC
lbl_fn_8066E100_00003FE8:
    slwi r3, r6, 2
    subf r0, r6, r21
    add r4, r22, r3
    li r3, 0x0
    mtctr r0
    cmplw r6, r21
    bge lbl_fn_8066E100_00004010
lbl_fn_8066E100_00004004:
    stw r3, 0x0(r4)
    addi r4, r4, 0x4
    bdnz lbl_fn_8066E100_00004004
lbl_fn_8066E100_00004010:
    cmpwi r24, 0x0
    li r25, 0x0
    li r26, 0x0
    li r27, 0x0
    beq lbl_fn_8066E100_000041F0
    cmplwi r24, 0x8
    subi r30, r24, 0x8
    ble lbl_fn_8066E100_00004198
    slwi r0, r21, 2
    mr r29, r23
    add r28, r22, r0
    li r31, -0x1
    b lbl_fn_8066E100_00004190
lbl_fn_8066E100_00004044:
    lwz r4, 0x0(r29)
    mr r5, r20
    li r3, 0x0
    bl fn_80696324
    addc r0, r25, r4
    mr r5, r20
    and r0, r0, r31
    stw r0, 0x0(r28)
    adde r26, r26, r3
    li r25, 0x0
    lwz r4, 0x4(r29)
    and r26, r26, r31
    li r3, 0x0
    bl fn_80696324
    addc r0, r26, r4
    mr r5, r20
    and r0, r0, r31
    stw r0, 0x4(r28)
    adde r25, r25, r3
    li r26, 0x0
    lwz r4, 0x8(r29)
    and r25, r25, r31
    li r3, 0x0
    bl fn_80696324
    addc r0, r25, r4
    mr r5, r20
    and r0, r0, r31
    stw r0, 0x8(r28)
    adde r26, r26, r3
    li r25, 0x0
    lwz r4, 0xc(r29)
    and r26, r26, r31
    li r3, 0x0
    bl fn_80696324
    addc r0, r26, r4
    mr r5, r20
    and r0, r0, r31
    stw r0, 0xc(r28)
    adde r25, r25, r3
    li r26, 0x0
    lwz r4, 0x10(r29)
    and r25, r25, r31
    li r3, 0x0
    bl fn_80696324
    addc r0, r25, r4
    mr r5, r20
    and r0, r0, r31
    stw r0, 0x10(r28)
    adde r26, r26, r3
    li r25, 0x0
    lwz r4, 0x14(r29)
    and r26, r26, r31
    li r3, 0x0
    bl fn_80696324
    addc r0, r26, r4
    mr r5, r20
    and r0, r0, r31
    stw r0, 0x14(r28)
    adde r25, r25, r3
    li r26, 0x0
    lwz r4, 0x18(r29)
    and r25, r25, r31
    li r3, 0x0
    bl fn_80696324
    addc r0, r25, r4
    mr r5, r20
    and r0, r0, r31
    stw r0, 0x18(r28)
    adde r26, r26, r3
    li r25, 0x0
    lwz r4, 0x1c(r29)
    and r26, r26, r31
    li r3, 0x0
    bl fn_80696324
    addc r0, r26, r4
    li r26, 0x0
    adde r25, r25, r3
    addi r29, r29, 0x20
    and r0, r0, r31
    stw r0, 0x1c(r28)
    and r25, r25, r31
    addi r27, r27, 0x8
    addi r28, r28, 0x20
lbl_fn_8066E100_00004190:
    cmplw r27, r30
    blt lbl_fn_8066E100_00004044
lbl_fn_8066E100_00004198:
    slwi r4, r27, 2
    slwi r3, r21, 2
    add r0, r4, r22
    li r28, -0x1
    add r23, r23, r4
    add r29, r3, r0
    b lbl_fn_8066E100_000041E8
lbl_fn_8066E100_000041B4:
    lwz r4, 0x0(r23)
    mr r5, r20
    li r3, 0x0
    bl fn_80696324
    addc r0, r25, r4
    addi r23, r23, 0x4
    adde r26, r26, r3
    addi r27, r27, 0x1
    and r0, r0, r28
    stw r0, 0x0(r29)
    and r25, r26, r28
    li r26, 0x0
    addi r29, r29, 0x4
lbl_fn_8066E100_000041E8:
    cmplw r27, r24
    blt lbl_fn_8066E100_000041B4
lbl_fn_8066E100_000041F0:
    or. r0, r25, r26
    add r3, r27, r21
    slwi r0, r3, 2
    add r3, r24, r21
    stwx r25, r22, r0
    stw r3, 0x0(r19)
    beq lbl_fn_8066E100_00004214
    addi r0, r3, 0x1
    stw r0, 0x0(r19)
lbl_fn_8066E100_00004214:
    addi r11, r1, 0x40
    bl _restgpr_19
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8066E3D0(void)
{
    nofralloc
    lwz r7, 0x0(r3)
    li r0, 0x4
    li r8, 0x20
    li r6, 0x0
    slwi r5, r7, 2
    lis r4, 0x8000
    lwzx r3, r3, r5
    mtctr r0
lbl_fn_8066E3D0_00004250:
    srw r0, r4, r6
    and. r0, r0, r3
    bne lbl_fn_8066E3D0_000042F4
    addi r6, r6, 0x1
    subi r8, r8, 0x1
    srw r0, r4, r6
    and. r0, r0, r3
    bne lbl_fn_8066E3D0_000042F4
    addi r6, r6, 0x1
    subi r8, r8, 0x1
    srw r0, r4, r6
    and. r0, r0, r3
    bne lbl_fn_8066E3D0_000042F4
    addi r6, r6, 0x1
    subi r8, r8, 0x1
    srw r0, r4, r6
    and. r0, r0, r3
    bne lbl_fn_8066E3D0_000042F4
    addi r6, r6, 0x1
    subi r8, r8, 0x1
    srw r0, r4, r6
    and. r0, r0, r3
    bne lbl_fn_8066E3D0_000042F4
    addi r6, r6, 0x1
    subi r8, r8, 0x1
    srw r0, r4, r6
    and. r0, r0, r3
    bne lbl_fn_8066E3D0_000042F4
    addi r6, r6, 0x1
    subi r8, r8, 0x1
    srw r0, r4, r6
    and. r0, r0, r3
    bne lbl_fn_8066E3D0_000042F4
    addi r6, r6, 0x1
    subi r8, r8, 0x1
    srw r0, r4, r6
    and. r0, r0, r3
    bne lbl_fn_8066E3D0_000042F4
    addi r6, r6, 0x1
    subi r8, r8, 0x1
    bdnz lbl_fn_8066E3D0_00004250
lbl_fn_8066E3D0_000042F4:
    subi r0, r7, 0x1
    slwi r0, r0, 5
    add r3, r8, r0
    blr
}

asm void fn_8066E4B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r31, 0x0(r4)
    addi r29, r3, 0x4
    mr r10, r29
    addi r9, r4, 0x4
    addi r11, r5, 0x4
    lwz r30, 0x0(r5)
    li r27, 0x0
    li r28, 0x0
    li r12, 0x0
    li r8, 0x0
    li r7, -0x1
    li r0, 0x1
    mtctr r31
    cmplwi r31, 0x0
    ble lbl_fn_8066E4B0_000043D0
lbl_fn_8066E4B0_00004360:
    lwz r4, 0x0(r9)
    subfc r6, r27, r7
    subfe r5, r28, r8
    cmplw r12, r30
    subf r4, r27, r4
    stw r4, 0x0(r10)
    subfc r4, r4, r6
    subfe r27, r8, r5
    subfe r27, r6, r6
    neg r27, r27
    srawi r28, r27, 31
    bge lbl_fn_8066E4B0_000043A0
    lwz r5, 0x0(r11)
    lwz r4, 0x0(r10)
    subf r4, r5, r4
    stw r4, 0x0(r10)
lbl_fn_8066E4B0_000043A0:
    lwz r4, 0x0(r11)
    lwz r5, 0x0(r10)
    subfic r4, r4, -0x1
    cmplw r5, r4
    ble lbl_fn_8066E4B0_000043BC
    addc r27, r27, r0
    adde r28, r28, r8
lbl_fn_8066E4B0_000043BC:
    addi r9, r9, 0x4
    addi r10, r10, 0x4
    addi r11, r11, 0x4
    addi r12, r12, 0x1
    bdnz lbl_fn_8066E4B0_00004360
lbl_fn_8066E4B0_000043D0:
    slwi r0, r31, 2
    add r4, r29, r0
    b lbl_fn_8066E4B0_000043E8
    nop
lbl_fn_8066E4B0_000043E0:
    subi r4, r4, 0x4
    subi r31, r31, 0x1
lbl_fn_8066E4B0_000043E8:
    cmpwi r31, 0x0
    beq lbl_fn_8066E4B0_000043FC
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8066E4B0_000043E0
lbl_fn_8066E4B0_000043FC:
    addi r0, r31, 0x1
    stw r0, 0x0(r3)
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8066E5C0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    lwz r29, 0x0(r4)
    addi r25, r3, 0x4
    lwz r28, 0x0(r5)
    li r0, 0x1
    mr r24, r3
    mr r23, r4
    stw r0, 0x0(r3)
    addi r27, r4, 0x4
    mr r22, r5
    addi r26, r5, 0x4
    mr r3, r25
    li r30, 0x0
    li r31, 0x0
    li r4, 0x0
    li r5, 0x80
    bl memset
    lwz r0, 0x0(r23)
    cmplwi r0, 0x1
    bne lbl_fn_8066E5C0_0000448C
    lwz r0, 0x4(r23)
    cmpwi r0, 0x0
    beq lbl_fn_8066E5C0_00004734
lbl_fn_8066E5C0_0000448C:
    lwz r0, 0x0(r22)
    cmplwi r0, 0x1
    bne lbl_fn_8066E5C0_000044A8
    lwz r0, 0x4(r22)
    cmpwi r0, 0x0
    bne lbl_fn_8066E5C0_000044A8
    b lbl_fn_8066E5C0_00004734
lbl_fn_8066E5C0_000044A8:
    li r6, 0x0
    li r9, 0x0
    mr r3, r6
    li r10, -0x1
    mr r0, r6
    b lbl_fn_8066E5C0_0000470C
lbl_fn_8066E5C0_000044C0:
    cmpwi r29, 0x0
    li r30, 0x0
    li r31, 0x0
    li r7, 0x0
    beq lbl_fn_8066E5C0_000046F4
    cmplwi r29, 0x8
    subi r11, r29, 0x8
    ble lbl_fn_8066E5C0_00004690
    addi r8, r11, 0x7
    mr r4, r27
    srwi r8, r8, 3
    add r5, r25, r9
    mtctr r8
    cmplwi r11, 0x0
    ble lbl_fn_8066E5C0_00004690
lbl_fn_8066E5C0_000044FC:
    lwz r12, 0x0(r4)
    addi r7, r7, 0x8
    lwz r11, 0x0(r26)
    lwz r23, 0x0(r5)
    mullw r8, r12, r11
    addc r23, r30, r23
    addze r30, r31
    addc r8, r23, r8
    mulhwu r23, r12, r11
    and r8, r8, r10
    stw r8, 0x0(r5)
    lwz r12, 0x4(r4)
    lwz r11, 0x0(r26)
    lwz r8, 0x4(r5)
    adde r31, r30, r23
    and r23, r31, r10
    addc r23, r23, r8
    li r31, 0x0
    mullw r8, r12, r11
    addze r30, r3
    addc r8, r23, r8
    mulhwu r23, r12, r11
    and r8, r8, r10
    stw r8, 0x4(r5)
    lwz r12, 0x8(r4)
    lwz r11, 0x0(r26)
    lwz r8, 0x8(r5)
    adde r22, r30, r23
    and r23, r22, r10
    addc r23, r23, r8
    mullw r8, r12, r11
    addze r30, r3
    addc r8, r23, r8
    mulhwu r23, r12, r11
    and r8, r8, r10
    stw r8, 0x8(r5)
    lwz r12, 0xc(r4)
    lwz r11, 0x0(r26)
    lwz r8, 0xc(r5)
    adde r22, r30, r23
    and r23, r22, r10
    addc r23, r23, r8
    mullw r8, r12, r11
    addze r30, r3
    addc r8, r23, r8
    mulhwu r23, r12, r11
    and r8, r8, r10
    stw r8, 0xc(r5)
    lwz r12, 0x10(r4)
    lwz r11, 0x0(r26)
    lwz r8, 0x10(r5)
    adde r22, r30, r23
    and r23, r22, r10
    addc r23, r23, r8
    mullw r8, r12, r11
    addze r30, r3
    addc r8, r23, r8
    mulhwu r23, r12, r11
    and r8, r8, r10
    stw r8, 0x10(r5)
    lwz r12, 0x14(r4)
    lwz r11, 0x0(r26)
    lwz r8, 0x14(r5)
    adde r22, r30, r23
    and r23, r22, r10
    addc r23, r23, r8
    mullw r8, r12, r11
    addze r30, r0
    addc r8, r23, r8
    mulhwu r23, r12, r11
    and r8, r8, r10
    stw r8, 0x14(r5)
    lwz r12, 0x18(r4)
    lwz r11, 0x0(r26)
    lwz r8, 0x18(r5)
    adde r22, r30, r23
    and r23, r22, r10
    addc r23, r23, r8
    mullw r8, r12, r11
    addze r30, r0
    addc r8, r23, r8
    mulhwu r23, r12, r11
    and r8, r8, r10
    stw r8, 0x18(r5)
    lwz r12, 0x1c(r4)
    addi r4, r4, 0x20
    lwz r11, 0x0(r26)
    adde r22, r30, r23
    lwz r8, 0x1c(r5)
    and r23, r22, r10
    addc r23, r23, r8
    mullw r8, r12, r11
    addze r30, r0
    addc r8, r23, r8
    and r8, r8, r10
    stw r8, 0x1c(r5)
    mulhwu r11, r12, r11
    addi r5, r5, 0x20
    adde r8, r30, r11
    and r30, r8, r10
    bdnz lbl_fn_8066E5C0_000044FC
lbl_fn_8066E5C0_00004690:
    slwi r8, r7, 2
    subf r4, r7, r29
    add r5, r8, r25
    add r23, r27, r8
    add r22, r9, r5
    mtctr r4
    cmplw r7, r29
    bge lbl_fn_8066E5C0_000046F4
lbl_fn_8066E5C0_000046B0:
    lwz r8, 0x0(r23)
    addi r23, r23, 0x4
    lwz r5, 0x0(r26)
    addi r7, r7, 0x1
    lwz r11, 0x0(r22)
    mullw r4, r8, r5
    addc r12, r30, r11
    addze r11, r31
    addc r4, r12, r4
    mulhwu r5, r8, r5
    and r4, r4, r10
    stw r4, 0x0(r22)
    addi r22, r22, 0x4
    adde r31, r11, r5
    and r30, r31, r10
    li r31, 0x0
    bdnz lbl_fn_8066E5C0_000046B0
lbl_fn_8066E5C0_000046F4:
    add r4, r6, r7
    addi r9, r9, 0x4
    slwi r4, r4, 2
    addi r26, r26, 0x4
    stwx r30, r25, r4
    addi r6, r6, 0x1
lbl_fn_8066E5C0_0000470C:
    cmplw r6, r28
    blt lbl_fn_8066E5C0_000044C0
    or. r0, r30, r31
    bne lbl_fn_8066E5C0_0000472C
    add r3, r29, r28
    subi r0, r3, 0x1
    stw r0, 0x0(r24)
    b lbl_fn_8066E5C0_00004734
lbl_fn_8066E5C0_0000472C:
    add r0, r29, r28
    stw r0, 0x0(r24)
lbl_fn_8066E5C0_00004734:
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8066E8F0(void)
{
    nofralloc
    lwz r3, lbl_808802B8
    blr
}

asm void fn_8066E900(void)
{
    nofralloc
    lis r4, lbl_8082DE00@ha
    addi r4, r4, lbl_8082DE00@l
    lwz r12, 0x6f4(r4)
    mtctr r12
    bctr
}

asm void fn_8066E920(void)
{
    nofralloc
    lis r4, lbl_8082DE00@ha
    addi r4, r4, lbl_8082DE00@l
    lwz r12, 0x6f8(r4)
    mtctr r12
    bctr
}

asm void fn_8066E940(void)
{
    nofralloc
    lis r4, lbl_8082DE00@ha
    addi r4, r4, lbl_8082DE00@l
    lbz r0, 0xc(r4)
    cmpwi r0, 0x0
    beqlr
    cmpwi r3, 0x0
    bne lbl_fn_8066E940_000047C8
    li r0, 0x17
    stb r0, 0xc(r4)
    blr
lbl_fn_8066E940_000047C8:
    li r0, 0xff
    stb r0, 0xc(r4)
    blr
}

asm void fn_8066E980(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lis r31, lbl_8082DE00@ha
    addi r31, r31, lbl_8082DE00@l
    bl OSDisableInterrupts
    li r0, 0x0
    stb r0, 0x6eb(r31)
    stb r0, 0x6ea(r31)
    bl OSRestoreInterrupts
    li r3, 0x0
    li r4, 0x0
    bl fn_8062CACC
    lbz r0, 0x6e8(r31)
    extsb. r0, r0
    bne lbl_fn_8066E980_00004830
    li r3, 0xe
    b lbl_fn_8066E980_00004920
lbl_fn_8066E980_00004830:
    bl OSDisableInterrupts
    lbz r30, 0x6e5(r31)
    bl OSRestoreInterrupts
    cmplwi r30, 0x4
    bne lbl_fn_8066E980_00004860
    bl OSDisableInterrupts
    lbz r30, 0x6e4(r31)
    bl OSRestoreInterrupts
    cmplwi r30, 0x4
    bne lbl_fn_8066E980_00004860
    li r3, 0xe
    b lbl_fn_8066E980_00004920
lbl_fn_8066E980_00004860:
    lbz r0, 0x6e7(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8066E980_00004900
    lis r29, lbl_8082DE00@ha
    li r27, 0x0
    addi r29, r29, lbl_8082DE00@l
    li r28, 0x0
lbl_fn_8066E980_0000487C:
    bl OSDisableInterrupts
    cmplwi r27, 0x9
    bgt lbl_fn_8066E980_00004894
    add r4, r29, r28
    addi r30, r4, 0xe4
    b lbl_fn_8066E980_000048A4
lbl_fn_8066E980_00004894:
    subi r0, r27, 0xa
    mulli r0, r0, 0x60
    add r4, r29, r0
    addi r30, r4, 0x4a4
lbl_fn_8066E980_000048A4:
    bl OSRestoreInterrupts
    lbz r0, 0x59(r30)
    cmplwi r0, 0x9
    bne lbl_fn_8066E980_000048F0
    lis r3, lbl_8082DE00@ha
    li r6, 0x0
    addi r3, r3, lbl_8082DE00@l
    li r0, 0x1
    stb r6, 0x10(r1)
    addi r4, r30, 0x40
    lbz r3, 0x70a(r3)
    addi r5, r1, 0x8
    sth r6, 0x8(r1)
    sth r6, 0xa(r1)
    sth r0, 0xc(r1)
    sth r6, 0xe(r1)
    bl fn_806357EC
    li r3, 0x1
    b lbl_fn_8066E980_00004920
lbl_fn_8066E980_000048F0:
    addi r27, r27, 0x1
    addi r28, r28, 0x60
    cmpwi r27, 0x10
    blt lbl_fn_8066E980_0000487C
lbl_fn_8066E980_00004900:
    lbz r3, 0x6e8(r31)
    extsb. r0, r3
    ble lbl_fn_8066E980_00004914
    subi r0, r3, 0x1
    stb r0, 0x6e8(r31)
lbl_fn_8066E980_00004914:
    li r0, 0x32
    stb r0, 0x749(r31)
    li r3, 0x1d
lbl_fn_8066E980_00004920:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
