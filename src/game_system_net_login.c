#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _savegpr_14(void);
extern void fn_80056DB8(void);
extern void fn_800D246C(void);
extern void fn_8012D8B8(void);
extern void fn_80145334(void);
extern void fn_80154654(void);
extern void fn_801765D8(void);
extern void fn_80176ACC(void);
extern void fn_8021ECD0(void);
extern void fn_8036554C(void);
extern void fn_80370174(void);
extern void fn_803972A8(void);
extern void fn_80397BEC(void);
extern void fn_8039C7F0(void);
extern void fn_803EE45C(void);

/* External data declarations */
extern u8 lbl_807775F8[];

/* Small data declarations */
extern u32 lbl_8087F408;
extern u32 lbl_8087F428;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087FA20;
extern u32 lbl_80885B10;
extern u32 lbl_80885B14;

/* Function declarations */
void fn_80395794(void);
void fn_803957B0(void);
void fn_803957F0(void);
void fn_80395848(void);
void fn_80395F34(void);
void fn_80396298(void);
void fn_803965FC(void);
void fn_80396F44(void);

asm void fn_80395794(void)
{
    nofralloc
    lfs f0, lbl_80885B14
    li r4, -0x1
    li r0, 0x0
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    stfs f0, 0x8(r3)
    blr
}

asm void fn_803957B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x2
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80056DB8
    lis r4, lbl_807775F8@ha
    mr r3, r31
    addi r4, r4, lbl_807775F8@l
    stw r4, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803957F0(void)
{
    nofralloc
    lwz r6, 0x88(r3)
    li r8, 0x0
    li r7, 0x0
    lwz r0, 0x80(r6)
    mtctr r0
    cmplwi r0, 0x0
    blelr
lbl_fn_803957F0_00000078:
    lwz r5, 0x84(r6)
    lwzx r0, r5, r7
    cmpw r4, r0
    bne lbl_fn_803957F0_000000A4
    mulli r0, r8, 0xc
    lwz r3, 0x118(r3)
    add r3, r3, r0
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x4(r3)
    blr
lbl_fn_803957F0_000000A4:
    addi r7, r7, 0x148
    addi r8, r8, 0x1
    bdnz lbl_fn_803957F0_00000078
    blr
}

asm void fn_80395848(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    addi r6, r3, 0x364
    li r8, 0x1
    stw r0, 0x44(r1)
    li r10, 0x0
    stmw r20, 0x10(r1)
    mr r31, r4
    mr r30, r3
    mr r9, r31
    lwz r5, 0x88(r3)
    lwz r7, lbl_8087F890
    addi r4, r5, 0x80
    addi r5, r3, 0x114
    bl fn_80397BEC
    lwz r4, 0x88(r30)
    mr r3, r30
    lwz r7, lbl_8087F408
    mr r9, r31
    addi r4, r4, 0x88
    addi r5, r30, 0x11c
    addi r6, r30, 0x36c
    li r8, 0x2
    li r10, 0x0
    bl fn_803972A8
    lwz r4, lbl_8087F8A0
    mr r3, r30
    lwz r6, 0x88(r30)
    mr r9, r31
    lwz r10, 0x48(r4)
    addi r5, r30, 0x124
    addi r4, r6, 0x90
    lwz r7, lbl_8087F428
    addi r6, r30, 0x374
    li r8, 0x3
    bl fn_803965FC
    lwz r29, 0x88(r30)
    li r21, 0x0
    li r23, 0x0
    li r24, 0x0
    li r25, 0x0
    li r22, 0x0
    lis r28, 0x68dc
    li r27, 0x5
    b lbl_fn_80395848_00000520
lbl_fn_80395848_00000168:
    lwz r0, 0xe8(r29)
    add r26, r0, r23
    lwz r0, 0x2c(r26)
    cmpwi r0, 0x0
    bge lbl_fn_80395848_0000050C
    cmpwi r31, 0x0
    beq lbl_fn_80395848_000002D0
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    beq lbl_fn_80395848_000002D0
    lwz r3, lbl_8087F430
    addi r0, r30, 0x80
    li r4, 0x0
    li r5, 0x0
    b lbl_fn_80395848_000002A4
lbl_fn_80395848_000001A4:
    lwz r6, 0x28(r26)
    addi r9, r30, 0x80
    lwz r7, 0x80(r30)
    lwzx r8, r6, r5
    b lbl_fn_80395848_000001D4
lbl_fn_80395848_000001B8:
    lwz r6, 0xc(r7)
    cmpw r6, r8
    blt lbl_fn_80395848_000001D0
    mr r9, r7
    lwz r7, 0x0(r7)
    b lbl_fn_80395848_000001D4
lbl_fn_80395848_000001D0:
    lwz r7, 0x4(r7)
lbl_fn_80395848_000001D4:
    cmpwi r7, 0x0
    bne lbl_fn_80395848_000001B8
    cmplw r9, r0
    beq lbl_fn_80395848_000001F0
    lwz r6, 0xc(r9)
    cmpw r8, r6
    bge lbl_fn_80395848_000001F4
lbl_fn_80395848_000001F0:
    addi r9, r30, 0x80
lbl_fn_80395848_000001F4:
    cmplw r9, r0
    beq lbl_fn_80395848_00000228
    subi r7, r28, 0x7453
    lwz r6, 0x10(r9)
    mulhw r7, r7, r8
    srawi r7, r7, 12
    srwi r8, r7, 31
    add r7, r7, r8
    slwi r7, r7, 2
    add r7, r30, r7
    lwz r7, 0x64(r7)
    add r8, r7, r6
    b lbl_fn_80395848_0000022C
lbl_fn_80395848_00000228:
    li r8, 0x0
lbl_fn_80395848_0000022C:
    cmpwi r8, 0x0
    beq lbl_fn_80395848_0000029C
    lwz r11, 0x4(r8)
    li r10, 0x1
    lwz r9, 0x10d0(r3)
    li r7, 0x0
    cmpwi r11, 0x0
    bne lbl_fn_80395848_0000025C
    lwz r6, 0x8(r8)
    cmpwi r6, 0x0
    bne lbl_fn_80395848_0000025C
    li r7, 0x1
lbl_fn_80395848_0000025C:
    cmpwi r7, 0x0
    bne lbl_fn_80395848_0000028C
    cmpw r9, r11
    li r7, 0x0
    blt lbl_fn_80395848_00000280
    lwz r6, 0x8(r8)
    cmpw r9, r6
    bgt lbl_fn_80395848_00000280
    li r7, 0x1
lbl_fn_80395848_00000280:
    cmpwi r7, 0x0
    bne lbl_fn_80395848_0000028C
    li r10, 0x0
lbl_fn_80395848_0000028C:
    cmpwi r10, 0x0
    beq lbl_fn_80395848_0000029C
    li r0, 0x1
    b lbl_fn_80395848_000002B4
lbl_fn_80395848_0000029C:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
lbl_fn_80395848_000002A4:
    lwz r6, 0x24(r26)
    cmplw r4, r6
    blt lbl_fn_80395848_000001A4
    li r0, 0x0
lbl_fn_80395848_000002B4:
    cmpwi r0, 0x0
    bne lbl_fn_80395848_000002D0
    lwz r0, 0x100(r30)
    add r3, r0, r24
    lwz r0, 0x4(r3)
    ori r0, r0, 0x10
    stw r0, 0x4(r3)
lbl_fn_80395848_000002D0:
    lwz r0, 0x100(r30)
    add r3, r0, r24
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    beq lbl_fn_80395848_0000050C
    mr r3, r30
    mr r4, r26
    bl fn_80396298
    lwz r0, 0x30(r26)
    mr r20, r3
    cmpwi r0, 0x0
    beq lbl_fn_80395848_00000338
    lwz r3, 0x34(r26)
    bl fn_8021ECD0
    cmpwi r3, 0x0
    beq lbl_fn_80395848_00000338
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_80395848_00000338
    lwz r4, 0xc(r3)
    mr r3, r0
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_80395848_00000338
    li r20, -0x1
lbl_fn_80395848_00000338:
    lwz r0, 0x100(r30)
    add r3, r0, r24
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x4(r3)
    lwz r0, 0x100(r30)
    add r3, r0, r24
    lwzx r0, r24, r0
    cmpw r20, r0
    beq lbl_fn_80395848_000004C4
    lwz r0, 0x4(r3)
    cmpwi r20, 0x0
    clrrwi r0, r0, 1
    stw r0, 0x4(r3)
    lwz r0, 0x100(r30)
    add r3, r0, r24
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x4(r3)
    lwz r3, 0x100(r30)
    stwx r20, r3, r24
    blt lbl_fn_80395848_00000428
    lwz r3, 0x28(r26)
    slwi r0, r20, 2
    lwz r5, 0x80(r30)
    addi r6, r30, 0x80
    lwzx r4, r3, r0
    b lbl_fn_80395848_000003C4
lbl_fn_80395848_000003A8:
    lwz r0, 0xc(r5)
    cmpw r0, r4
    blt lbl_fn_80395848_000003C0
    mr r6, r5
    lwz r5, 0x0(r5)
    b lbl_fn_80395848_000003C4
lbl_fn_80395848_000003C0:
    lwz r5, 0x4(r5)
lbl_fn_80395848_000003C4:
    cmpwi r5, 0x0
    bne lbl_fn_80395848_000003A8
    addi r0, r30, 0x80
    cmplw r6, r0
    beq lbl_fn_80395848_000003E4
    lwz r0, 0xc(r6)
    cmpw r4, r0
    bge lbl_fn_80395848_000003E8
lbl_fn_80395848_000003E4:
    addi r6, r30, 0x80
lbl_fn_80395848_000003E8:
    addi r0, r30, 0x80
    cmplw r6, r0
    beq lbl_fn_80395848_00000420
    subi r3, r28, 0x7453
    lwz r0, 0x10(r6)
    mulhw r3, r3, r4
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r30, r3
    lwz r3, 0x64(r3)
    add r5, r3, r0
    b lbl_fn_80395848_0000042C
lbl_fn_80395848_00000420:
    li r5, 0x0
    b lbl_fn_80395848_0000042C
lbl_fn_80395848_00000428:
    li r5, 0x0
lbl_fn_80395848_0000042C:
    cmpwi r5, 0x0
    beq lbl_fn_80395848_000004B0
    lwz r0, 0xb8(r5)
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_fn_80395848_000004B0
    lwz r0, 0x108(r30)
    add r3, r0, r25
    lwz r0, 0x8(r3)
    ori r0, r0, 0x1
    stw r0, 0x8(r3)
    lwz r0, 0x108(r30)
    lwz r4, 0x38(r26)
    add r3, r0, r25
    stw r4, 0x20(r3)
    lwz r0, 0x108(r30)
    lwz r4, 0x3c(r26)
    add r3, r0, r25
    stw r4, 0x1c(r3)
    lwz r0, 0xb8(r5)
    lwz r3, 0x108(r30)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x4
    add r3, r3, r25
    bne lbl_fn_80395848_000004A0
    lwz r0, 0x8(r3)
    ori r0, r0, 0x20
    stw r0, 0x8(r3)
    b lbl_fn_80395848_000004C4
lbl_fn_80395848_000004A0:
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x8(r3)
    b lbl_fn_80395848_000004C4
lbl_fn_80395848_000004B0:
    lwz r0, 0x108(r30)
    add r3, r0, r25
    lwz r0, 0x8(r3)
    clrrwi r0, r0, 1
    stw r0, 0x8(r3)
lbl_fn_80395848_000004C4:
    lwz r0, 0x37c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80395848_0000050C
    lwz r0, 0x358(r30)
    add r3, r0, r22
    stw r27, 0x4(r3)
    lwz r0, 0x358(r30)
    lwz r4, 0x0(r26)
    add r3, r0, r22
    stw r4, 0x8(r3)
    lwz r3, 0x100(r30)
    lwz r0, 0x358(r30)
    lwzx r4, r3, r24
    add r3, r0, r22
    stw r4, 0x10(r3)
    lwz r0, 0x358(r30)
    add r3, r0, r22
    stw r20, 0x14(r3)
lbl_fn_80395848_0000050C:
    addi r23, r23, 0x48
    addi r24, r24, 0xc
    addi r25, r25, 0x378
    addi r22, r22, 0x18
    addi r21, r21, 0x1
lbl_fn_80395848_00000520:
    lwz r0, 0xe4(r29)
    cmplw r21, r0
    blt lbl_fn_80395848_00000168
    lwz r27, 0x88(r30)
    li r20, 0x0
    li r25, 0x0
    li r24, 0x0
    li r23, 0x0
    lis r28, 0x68dc
    li r29, 0x4
    b lbl_fn_80395848_00000780
lbl_fn_80395848_0000054C:
    lwz r0, 0xf0(r27)
    add r26, r0, r25
    lwz r0, 0x20(r26)
    cmpwi r0, 0x0
    bge lbl_fn_80395848_00000770
    cmpwi r31, 0x0
    beq lbl_fn_80395848_000006B4
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    beq lbl_fn_80395848_000006B4
    lwz r3, lbl_8087F430
    addi r8, r30, 0x80
    li r4, 0x0
    li r5, 0x0
    b lbl_fn_80395848_00000688
lbl_fn_80395848_00000588:
    lwz r6, 0x1c(r26)
    addi r10, r30, 0x80
    lwz r7, 0x80(r30)
    lwzx r9, r6, r5
    b lbl_fn_80395848_000005B8
lbl_fn_80395848_0000059C:
    lwz r0, 0xc(r7)
    cmpw r0, r9
    blt lbl_fn_80395848_000005B4
    mr r10, r7
    lwz r7, 0x0(r7)
    b lbl_fn_80395848_000005B8
lbl_fn_80395848_000005B4:
    lwz r7, 0x4(r7)
lbl_fn_80395848_000005B8:
    cmpwi r7, 0x0
    bne lbl_fn_80395848_0000059C
    cmplw r10, r8
    beq lbl_fn_80395848_000005D4
    lwz r0, 0xc(r10)
    cmpw r9, r0
    bge lbl_fn_80395848_000005D8
lbl_fn_80395848_000005D4:
    addi r10, r30, 0x80
lbl_fn_80395848_000005D8:
    cmplw r10, r8
    beq lbl_fn_80395848_0000060C
    subi r6, r28, 0x7453
    lwz r0, 0x10(r10)
    mulhw r6, r6, r9
    srawi r6, r6, 12
    srwi r7, r6, 31
    add r6, r6, r7
    slwi r6, r6, 2
    add r6, r30, r6
    lwz r6, 0x64(r6)
    add r7, r6, r0
    b lbl_fn_80395848_00000610
lbl_fn_80395848_0000060C:
    li r7, 0x0
lbl_fn_80395848_00000610:
    cmpwi r7, 0x0
    beq lbl_fn_80395848_00000680
    lwz r11, 0x4(r7)
    li r10, 0x1
    lwz r9, 0x10d0(r3)
    li r6, 0x0
    cmpwi r11, 0x0
    bne lbl_fn_80395848_00000640
    lwz r0, 0x8(r7)
    cmpwi r0, 0x0
    bne lbl_fn_80395848_00000640
    li r6, 0x1
lbl_fn_80395848_00000640:
    cmpwi r6, 0x0
    bne lbl_fn_80395848_00000670
    cmpw r9, r11
    li r6, 0x0
    blt lbl_fn_80395848_00000664
    lwz r0, 0x8(r7)
    cmpw r9, r0
    bgt lbl_fn_80395848_00000664
    li r6, 0x1
lbl_fn_80395848_00000664:
    cmpwi r6, 0x0
    bne lbl_fn_80395848_00000670
    li r10, 0x0
lbl_fn_80395848_00000670:
    cmpwi r10, 0x0
    beq lbl_fn_80395848_00000680
    li r0, 0x1
    b lbl_fn_80395848_00000698
lbl_fn_80395848_00000680:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
lbl_fn_80395848_00000688:
    lwz r0, 0x18(r26)
    cmplw r4, r0
    blt lbl_fn_80395848_00000588
    li r0, 0x0
lbl_fn_80395848_00000698:
    cmpwi r0, 0x0
    bne lbl_fn_80395848_000006B4
    lwz r0, 0x110(r30)
    add r3, r0, r24
    lwz r0, 0x4(r3)
    ori r0, r0, 0x10
    stw r0, 0x4(r3)
lbl_fn_80395848_000006B4:
    lwz r0, 0x110(r30)
    add r3, r0, r24
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    beq lbl_fn_80395848_00000770
    mr r3, r30
    mr r4, r26
    bl fn_80395F34
    lwz r0, 0x110(r30)
    add r4, r0, r24
    lwz r0, 0x4(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x4(r4)
    lwz r0, 0x110(r30)
    add r4, r0, r24
    lwzx r0, r24, r0
    cmpw r3, r0
    beq lbl_fn_80395848_00000728
    lwz r0, 0x4(r4)
    clrrwi r0, r0, 1
    stw r0, 0x4(r4)
    lwz r0, 0x110(r30)
    add r4, r0, r24
    lwz r0, 0x4(r4)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x4(r4)
    lwz r4, 0x110(r30)
    stwx r3, r4, r24
lbl_fn_80395848_00000728:
    lwz r0, 0x37c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80395848_00000770
    lwz r0, 0x360(r30)
    add r4, r0, r23
    stw r29, 0x4(r4)
    lwz r0, 0x360(r30)
    lwz r5, 0x0(r26)
    add r4, r0, r23
    stw r5, 0x8(r4)
    lwz r4, 0x110(r30)
    lwz r0, 0x360(r30)
    lwzx r5, r4, r24
    add r4, r0, r23
    stw r5, 0x10(r4)
    lwz r0, 0x360(r30)
    add r4, r0, r23
    stw r3, 0x14(r4)
lbl_fn_80395848_00000770:
    addi r25, r25, 0x28
    addi r24, r24, 0xc
    addi r23, r23, 0x18
    addi r20, r20, 0x1
lbl_fn_80395848_00000780:
    lwz r0, 0xec(r27)
    cmplw r20, r0
    blt lbl_fn_80395848_0000054C
    lmw r20, 0x10(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80395F34(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lwz r5, 0x24(r4)
    stw r0, 0x44(r1)
    cmpwi r5, 0x0
    stmw r20, 0x10(r1)
    mr r21, r3
    mr r22, r4
    beq lbl_fn_80395F34_000007F8
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80395F34_000007F8
    lwz r0, 0x5694(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80395F34_000007E4
    extrwi r0, r5, 1, 30
    b lbl_fn_80395F34_000007E8
lbl_fn_80395F34_000007E4:
    clrlwi r0, r5, 31
lbl_fn_80395F34_000007E8:
    cmpwi r0, 0x0
    bne lbl_fn_80395F34_000007F8
    li r3, -0x1
    b lbl_fn_80395F34_00000AF0
lbl_fn_80395F34_000007F8:
    lwz r3, lbl_8087F430
    li r4, 0x1b
    bl fn_80370174
    lwz r4, 0x18(r22)
    mr r29, r3
    addi r30, r21, 0x80
    li r24, -0x1
    subi r23, r4, 0x1
    lis r31, 0x68dc
    slwi r20, r23, 2
    b lbl_fn_80395F34_000009F0
lbl_fn_80395F34_00000824:
    lwz r3, 0x1c(r22)
    addi r6, r21, 0x80
    lwz r5, 0x80(r21)
    lwzx r4, r3, r20
    b lbl_fn_80395F34_00000854
lbl_fn_80395F34_00000838:
    lwz r0, 0xc(r5)
    cmpw r0, r4
    blt lbl_fn_80395F34_00000850
    mr r6, r5
    lwz r5, 0x0(r5)
    b lbl_fn_80395F34_00000854
lbl_fn_80395F34_00000850:
    lwz r5, 0x4(r5)
lbl_fn_80395F34_00000854:
    cmpwi r5, 0x0
    bne lbl_fn_80395F34_00000838
    cmplw r6, r30
    beq lbl_fn_80395F34_00000870
    lwz r0, 0xc(r6)
    cmpw r4, r0
    bge lbl_fn_80395F34_00000874
lbl_fn_80395F34_00000870:
    addi r6, r21, 0x80
lbl_fn_80395F34_00000874:
    cmplw r6, r30
    beq lbl_fn_80395F34_000008A8
    subi r3, r31, 0x7453
    lwz r0, 0x10(r6)
    mulhw r3, r3, r4
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r21, r3
    lwz r3, 0x64(r3)
    add r28, r3, r0
    b lbl_fn_80395F34_000008AC
lbl_fn_80395F34_000008A8:
    li r28, 0x0
lbl_fn_80395F34_000008AC:
    cmpwi r28, 0x0
    li r26, 0x0
    beq lbl_fn_80395F34_000009D8
    lwz r7, 0x4(r28)
    li r5, 0x1
    lwz r3, lbl_8087F430
    li r6, 0x0
    cmpwi r7, 0x0
    lwz r4, 0x10d0(r3)
    bne lbl_fn_80395F34_000008E4
    lwz r0, 0x8(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80395F34_000008E4
    li r6, 0x1
lbl_fn_80395F34_000008E4:
    cmpwi r6, 0x0
    bne lbl_fn_80395F34_00000914
    cmpw r4, r7
    li r3, 0x0
    blt lbl_fn_80395F34_00000908
    lwz r0, 0x8(r28)
    cmpw r4, r0
    bgt lbl_fn_80395F34_00000908
    li r3, 0x1
lbl_fn_80395F34_00000908:
    cmpwi r3, 0x0
    bne lbl_fn_80395F34_00000914
    li r5, 0x0
lbl_fn_80395F34_00000914:
    cmpwi r5, 0x0
    beq lbl_fn_80395F34_000009D8
    addi r25, r28, 0x10
    li r26, 0x1
    li r27, 0x0
    b lbl_fn_80395F34_000009CC
lbl_fn_80395F34_0000092C:
    lwz r4, 0x0(r25)
    lwz r5, 0x0(r28)
    cmpwi r4, 0x0
    bge lbl_fn_80395F34_0000099C
    lwz r3, 0x13c(r21)
    addi r4, r21, 0x13c
    b lbl_fn_80395F34_00000964
lbl_fn_80395F34_00000948:
    lwz r0, 0xc(r3)
    cmpw r0, r5
    blt lbl_fn_80395F34_00000960
    mr r4, r3
    lwz r3, 0x0(r3)
    b lbl_fn_80395F34_00000964
lbl_fn_80395F34_00000960:
    lwz r3, 0x4(r3)
lbl_fn_80395F34_00000964:
    cmpwi r3, 0x0
    bne lbl_fn_80395F34_00000948
    addi r0, r21, 0x13c
    cmplw r4, r0
    beq lbl_fn_80395F34_00000984
    lwz r0, 0xc(r4)
    cmpw r5, r0
    bge lbl_fn_80395F34_00000988
lbl_fn_80395F34_00000984:
    addi r4, r21, 0x13c
lbl_fn_80395F34_00000988:
    addi r0, r21, 0x13c
    subf r0, r4, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_80395F34_000009B4
lbl_fn_80395F34_0000099C:
    lwz r5, 0x4(r25)
    mr r3, r21
    lwz r6, 0x10(r25)
    lwz r7, 0x8(r25)
    lwz r8, 0xc(r25)
    bl fn_8039C7F0
lbl_fn_80395F34_000009B4:
    cmpwi r3, 0x0
    bne lbl_fn_80395F34_000009C4
    li r26, 0x0
    b lbl_fn_80395F34_000009D8
lbl_fn_80395F34_000009C4:
    addi r25, r25, 0x14
    addi r27, r27, 0x1
lbl_fn_80395F34_000009CC:
    lwz r0, 0xb0(r28)
    cmpw r27, r0
    blt lbl_fn_80395F34_0000092C
lbl_fn_80395F34_000009D8:
    cmpwi r26, 0x0
    beq lbl_fn_80395F34_000009E8
    mr r24, r23
    b lbl_fn_80395F34_000009F8
lbl_fn_80395F34_000009E8:
    subi r23, r23, 0x1
    subi r20, r20, 0x4
lbl_fn_80395F34_000009F0:
    cmpwi r23, 0x0
    bge lbl_fn_80395F34_00000824
lbl_fn_80395F34_000009F8:
    cmpwi r29, 0x0
    beq lbl_fn_80395F34_00000AEC
    cmpwi r24, 0x0
    blt lbl_fn_80395F34_00000AEC
    lwz r3, 0x1c(r22)
    slwi r0, r24, 2
    lwz r5, 0x80(r21)
    addi r6, r21, 0x80
    lwzx r4, r3, r0
    li r7, 0x0
    b lbl_fn_80395F34_00000A40
lbl_fn_80395F34_00000A24:
    lwz r0, 0xc(r5)
    cmpw r0, r4
    blt lbl_fn_80395F34_00000A3C
    mr r6, r5
    lwz r5, 0x0(r5)
    b lbl_fn_80395F34_00000A40
lbl_fn_80395F34_00000A3C:
    lwz r5, 0x4(r5)
lbl_fn_80395F34_00000A40:
    cmpwi r5, 0x0
    bne lbl_fn_80395F34_00000A24
    addi r0, r21, 0x80
    cmplw r6, r0
    beq lbl_fn_80395F34_00000A60
    lwz r0, 0xc(r6)
    cmpw r4, r0
    bge lbl_fn_80395F34_00000A64
lbl_fn_80395F34_00000A60:
    addi r6, r21, 0x80
lbl_fn_80395F34_00000A64:
    addi r0, r21, 0x80
    cmplw r6, r0
    beq lbl_fn_80395F34_00000AA0
    lis r3, 0x68dc
    lwz r0, 0x10(r6)
    subi r3, r3, 0x7453
    mulhw r3, r3, r4
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r21, r3
    lwz r3, 0x64(r3)
    add r3, r3, r0
    b lbl_fn_80395F34_00000AA4
lbl_fn_80395F34_00000AA0:
    li r3, 0x0
lbl_fn_80395F34_00000AA4:
    lwz r0, 0xb0(r3)
    addi r3, r3, 0x10
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80395F34_00000AE0
lbl_fn_80395F34_00000AB8:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80395F34_00000AD8
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1b
    bne lbl_fn_80395F34_00000AD8
    li r7, 0x1
    b lbl_fn_80395F34_00000AE0
lbl_fn_80395F34_00000AD8:
    addi r3, r3, 0x14
    bdnz lbl_fn_80395F34_00000AB8
lbl_fn_80395F34_00000AE0:
    cmpwi r7, 0x0
    bne lbl_fn_80395F34_00000AEC
    li r24, -0x1
lbl_fn_80395F34_00000AEC:
    mr r3, r24
lbl_fn_80395F34_00000AF0:
    lmw r20, 0x10(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80396298(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lwz r5, 0x44(r4)
    stw r0, 0x44(r1)
    cmpwi r5, 0x0
    stmw r20, 0x10(r1)
    mr r21, r3
    mr r22, r4
    beq lbl_fn_80396298_00000B5C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80396298_00000B5C
    lwz r0, 0x5694(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80396298_00000B48
    extrwi r0, r5, 1, 30
    b lbl_fn_80396298_00000B4C
lbl_fn_80396298_00000B48:
    clrlwi r0, r5, 31
lbl_fn_80396298_00000B4C:
    cmpwi r0, 0x0
    bne lbl_fn_80396298_00000B5C
    li r3, -0x1
    b lbl_fn_80396298_00000E54
lbl_fn_80396298_00000B5C:
    lwz r3, lbl_8087F430
    li r4, 0x1b
    bl fn_80370174
    lwz r4, 0x24(r22)
    mr r29, r3
    addi r30, r21, 0x80
    li r24, -0x1
    subi r23, r4, 0x1
    lis r31, 0x68dc
    slwi r20, r23, 2
    b lbl_fn_80396298_00000D54
lbl_fn_80396298_00000B88:
    lwz r3, 0x28(r22)
    addi r6, r21, 0x80
    lwz r5, 0x80(r21)
    lwzx r4, r3, r20
    b lbl_fn_80396298_00000BB8
lbl_fn_80396298_00000B9C:
    lwz r0, 0xc(r5)
    cmpw r0, r4
    blt lbl_fn_80396298_00000BB4
    mr r6, r5
    lwz r5, 0x0(r5)
    b lbl_fn_80396298_00000BB8
lbl_fn_80396298_00000BB4:
    lwz r5, 0x4(r5)
lbl_fn_80396298_00000BB8:
    cmpwi r5, 0x0
    bne lbl_fn_80396298_00000B9C
    cmplw r6, r30
    beq lbl_fn_80396298_00000BD4
    lwz r0, 0xc(r6)
    cmpw r4, r0
    bge lbl_fn_80396298_00000BD8
lbl_fn_80396298_00000BD4:
    addi r6, r21, 0x80
lbl_fn_80396298_00000BD8:
    cmplw r6, r30
    beq lbl_fn_80396298_00000C0C
    subi r3, r31, 0x7453
    lwz r0, 0x10(r6)
    mulhw r3, r3, r4
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r21, r3
    lwz r3, 0x64(r3)
    add r28, r3, r0
    b lbl_fn_80396298_00000C10
lbl_fn_80396298_00000C0C:
    li r28, 0x0
lbl_fn_80396298_00000C10:
    cmpwi r28, 0x0
    li r26, 0x0
    beq lbl_fn_80396298_00000D3C
    lwz r7, 0x4(r28)
    li r5, 0x1
    lwz r3, lbl_8087F430
    li r6, 0x0
    cmpwi r7, 0x0
    lwz r4, 0x10d0(r3)
    bne lbl_fn_80396298_00000C48
    lwz r0, 0x8(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80396298_00000C48
    li r6, 0x1
lbl_fn_80396298_00000C48:
    cmpwi r6, 0x0
    bne lbl_fn_80396298_00000C78
    cmpw r4, r7
    li r3, 0x0
    blt lbl_fn_80396298_00000C6C
    lwz r0, 0x8(r28)
    cmpw r4, r0
    bgt lbl_fn_80396298_00000C6C
    li r3, 0x1
lbl_fn_80396298_00000C6C:
    cmpwi r3, 0x0
    bne lbl_fn_80396298_00000C78
    li r5, 0x0
lbl_fn_80396298_00000C78:
    cmpwi r5, 0x0
    beq lbl_fn_80396298_00000D3C
    addi r25, r28, 0x10
    li r26, 0x1
    li r27, 0x0
    b lbl_fn_80396298_00000D30
lbl_fn_80396298_00000C90:
    lwz r4, 0x0(r25)
    lwz r5, 0x0(r28)
    cmpwi r4, 0x0
    bge lbl_fn_80396298_00000D00
    lwz r3, 0x13c(r21)
    addi r4, r21, 0x13c
    b lbl_fn_80396298_00000CC8
lbl_fn_80396298_00000CAC:
    lwz r0, 0xc(r3)
    cmpw r0, r5
    blt lbl_fn_80396298_00000CC4
    mr r4, r3
    lwz r3, 0x0(r3)
    b lbl_fn_80396298_00000CC8
lbl_fn_80396298_00000CC4:
    lwz r3, 0x4(r3)
lbl_fn_80396298_00000CC8:
    cmpwi r3, 0x0
    bne lbl_fn_80396298_00000CAC
    addi r0, r21, 0x13c
    cmplw r4, r0
    beq lbl_fn_80396298_00000CE8
    lwz r0, 0xc(r4)
    cmpw r5, r0
    bge lbl_fn_80396298_00000CEC
lbl_fn_80396298_00000CE8:
    addi r4, r21, 0x13c
lbl_fn_80396298_00000CEC:
    addi r0, r21, 0x13c
    subf r0, r4, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_80396298_00000D18
lbl_fn_80396298_00000D00:
    lwz r5, 0x4(r25)
    mr r3, r21
    lwz r6, 0x10(r25)
    lwz r7, 0x8(r25)
    lwz r8, 0xc(r25)
    bl fn_8039C7F0
lbl_fn_80396298_00000D18:
    cmpwi r3, 0x0
    bne lbl_fn_80396298_00000D28
    li r26, 0x0
    b lbl_fn_80396298_00000D3C
lbl_fn_80396298_00000D28:
    addi r25, r25, 0x14
    addi r27, r27, 0x1
lbl_fn_80396298_00000D30:
    lwz r0, 0xb0(r28)
    cmpw r27, r0
    blt lbl_fn_80396298_00000C90
lbl_fn_80396298_00000D3C:
    cmpwi r26, 0x0
    beq lbl_fn_80396298_00000D4C
    mr r24, r23
    b lbl_fn_80396298_00000D5C
lbl_fn_80396298_00000D4C:
    subi r23, r23, 0x1
    subi r20, r20, 0x4
lbl_fn_80396298_00000D54:
    cmpwi r23, 0x0
    bge lbl_fn_80396298_00000B88
lbl_fn_80396298_00000D5C:
    cmpwi r29, 0x0
    beq lbl_fn_80396298_00000E50
    cmpwi r24, 0x0
    blt lbl_fn_80396298_00000E50
    lwz r3, 0x28(r22)
    slwi r0, r24, 2
    lwz r5, 0x80(r21)
    addi r6, r21, 0x80
    lwzx r4, r3, r0
    li r7, 0x0
    b lbl_fn_80396298_00000DA4
lbl_fn_80396298_00000D88:
    lwz r0, 0xc(r5)
    cmpw r0, r4
    blt lbl_fn_80396298_00000DA0
    mr r6, r5
    lwz r5, 0x0(r5)
    b lbl_fn_80396298_00000DA4
lbl_fn_80396298_00000DA0:
    lwz r5, 0x4(r5)
lbl_fn_80396298_00000DA4:
    cmpwi r5, 0x0
    bne lbl_fn_80396298_00000D88
    addi r0, r21, 0x80
    cmplw r6, r0
    beq lbl_fn_80396298_00000DC4
    lwz r0, 0xc(r6)
    cmpw r4, r0
    bge lbl_fn_80396298_00000DC8
lbl_fn_80396298_00000DC4:
    addi r6, r21, 0x80
lbl_fn_80396298_00000DC8:
    addi r0, r21, 0x80
    cmplw r6, r0
    beq lbl_fn_80396298_00000E04
    lis r3, 0x68dc
    lwz r0, 0x10(r6)
    subi r3, r3, 0x7453
    mulhw r3, r3, r4
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r21, r3
    lwz r3, 0x64(r3)
    add r3, r3, r0
    b lbl_fn_80396298_00000E08
lbl_fn_80396298_00000E04:
    li r3, 0x0
lbl_fn_80396298_00000E08:
    lwz r0, 0xb0(r3)
    addi r3, r3, 0x10
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80396298_00000E44
lbl_fn_80396298_00000E1C:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80396298_00000E3C
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1b
    bne lbl_fn_80396298_00000E3C
    li r7, 0x1
    b lbl_fn_80396298_00000E44
lbl_fn_80396298_00000E3C:
    addi r3, r3, 0x14
    bdnz lbl_fn_80396298_00000E1C
lbl_fn_80396298_00000E44:
    cmpwi r7, 0x0
    bne lbl_fn_80396298_00000E50
    li r24, -0x1
lbl_fn_80396298_00000E50:
    mr r3, r24
lbl_fn_80396298_00000E54:
    lmw r20, 0x10(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803965FC(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x90
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    bl _savegpr_14
    lfs f31, lbl_80885B10
    mr r15, r3
    stw r7, 0x8(r1)
    mr r14, r4
    mr r16, r5
    mr r17, r6
    stw r8, 0xc(r1)
    li r18, 0x0
    li r31, 0x0
    li r30, 0x0
    stw r9, 0x10(r1)
    li r29, 0x0
    lis r28, 0x68dc
    stw r10, 0x14(r1)
    b lbl_fn_803965FC_00001784
lbl_fn_803965FC_00000EC0:
    lwz r0, 0x10(r1)
    lwz r3, 0x4(r14)
    cmpwi r0, 0x0
    add r21, r3, r31
    beq lbl_fn_803965FC_00001178
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    beq lbl_fn_803965FC_00001178
    lwz r0, 0x12c(r21)
    addi r27, r15, 0x80
    li r22, 0x0
    li r20, 0x0
    extrwi r0, r0, 1, 20
    xori r26, r0, 0x1
    b lbl_fn_803965FC_0000114C
lbl_fn_803965FC_00000EFC:
    lwz r3, 0x144(r21)
    addi r4, r15, 0x80
    lwz r5, 0x80(r15)
    lwzx r6, r3, r20
    b lbl_fn_803965FC_00000F2C
lbl_fn_803965FC_00000F10:
    lwz r0, 0xc(r5)
    cmpw r0, r6
    blt lbl_fn_803965FC_00000F28
    mr r4, r5
    lwz r5, 0x0(r5)
    b lbl_fn_803965FC_00000F2C
lbl_fn_803965FC_00000F28:
    lwz r5, 0x4(r5)
lbl_fn_803965FC_00000F2C:
    cmpwi r5, 0x0
    bne lbl_fn_803965FC_00000F10
    cmplw r4, r27
    beq lbl_fn_803965FC_00000F48
    lwz r0, 0xc(r4)
    cmpw r6, r0
    bge lbl_fn_803965FC_00000F4C
lbl_fn_803965FC_00000F48:
    addi r4, r15, 0x80
lbl_fn_803965FC_00000F4C:
    cmplw r4, r27
    beq lbl_fn_803965FC_00000F80
    subi r3, r28, 0x7453
    lwz r0, 0x10(r4)
    mulhw r3, r3, r6
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r15, r3
    lwz r3, 0x64(r3)
    add r23, r3, r0
    b lbl_fn_803965FC_00000F84
lbl_fn_803965FC_00000F80:
    li r23, 0x0
lbl_fn_803965FC_00000F84:
    cmpwi r23, 0x0
    beq lbl_fn_803965FC_00001144
    cmpwi r26, 0x0
    beq lbl_fn_803965FC_00000FF8
    lwz r7, 0x4(r23)
    li r5, 0x1
    lwz r3, lbl_8087F430
    li r6, 0x0
    cmpwi r7, 0x0
    lwz r4, 0x10d0(r3)
    bne lbl_fn_803965FC_00000FC0
    lwz r0, 0x8(r23)
    cmpwi r0, 0x0
    bne lbl_fn_803965FC_00000FC0
    li r6, 0x1
lbl_fn_803965FC_00000FC0:
    cmpwi r6, 0x0
    bne lbl_fn_803965FC_00000FF0
    cmpw r4, r7
    li r3, 0x0
    blt lbl_fn_803965FC_00000FE4
    lwz r0, 0x8(r23)
    cmpw r4, r0
    bgt lbl_fn_803965FC_00000FE4
    li r3, 0x1
lbl_fn_803965FC_00000FE4:
    cmpwi r3, 0x0
    bne lbl_fn_803965FC_00000FF0
    li r5, 0x0
lbl_fn_803965FC_00000FF0:
    cmpwi r5, 0x0
    bne lbl_fn_803965FC_0000113C
lbl_fn_803965FC_00000FF8:
    cmpwi r26, 0x0
    bne lbl_fn_803965FC_00001144
    cmpwi r23, 0x0
    li r25, 0x0
    beq lbl_fn_803965FC_00001134
    lwz r7, 0x4(r23)
    li r5, 0x1
    lwz r3, lbl_8087F430
    li r6, 0x0
    cmpwi r7, 0x0
    lwz r4, 0x10d0(r3)
    bne lbl_fn_803965FC_00001038
    lwz r0, 0x8(r23)
    cmpwi r0, 0x0
    bne lbl_fn_803965FC_00001038
    li r6, 0x1
lbl_fn_803965FC_00001038:
    cmpwi r6, 0x0
    bne lbl_fn_803965FC_00001068
    cmpw r4, r7
    li r3, 0x0
    blt lbl_fn_803965FC_0000105C
    lwz r0, 0x8(r23)
    cmpw r4, r0
    bgt lbl_fn_803965FC_0000105C
    li r3, 0x1
lbl_fn_803965FC_0000105C:
    cmpwi r3, 0x0
    bne lbl_fn_803965FC_00001068
    li r5, 0x0
lbl_fn_803965FC_00001068:
    cmpwi r5, 0x0
    beq lbl_fn_803965FC_00001134
    addi r19, r23, 0x10
    li r25, 0x1
    li r24, 0x0
    b lbl_fn_803965FC_00001128
lbl_fn_803965FC_00001080:
    lwz r4, 0x0(r19)
    cmpwi r4, 0x1
    bne lbl_fn_803965FC_00001120
    cmpwi r4, 0x0
    lwz r3, 0x0(r23)
    bge lbl_fn_803965FC_000010F8
    lwz r4, 0x13c(r15)
    addi r5, r15, 0x13c
    b lbl_fn_803965FC_000010C0
lbl_fn_803965FC_000010A4:
    lwz r0, 0xc(r4)
    cmpw r0, r3
    blt lbl_fn_803965FC_000010BC
    mr r5, r4
    lwz r4, 0x0(r4)
    b lbl_fn_803965FC_000010C0
lbl_fn_803965FC_000010BC:
    lwz r4, 0x4(r4)
lbl_fn_803965FC_000010C0:
    cmpwi r4, 0x0
    bne lbl_fn_803965FC_000010A4
    addi r0, r15, 0x13c
    cmplw r5, r0
    beq lbl_fn_803965FC_000010E0
    lwz r0, 0xc(r5)
    cmpw r3, r0
    bge lbl_fn_803965FC_000010E4
lbl_fn_803965FC_000010E0:
    addi r5, r15, 0x13c
lbl_fn_803965FC_000010E4:
    addi r0, r15, 0x13c
    subf r0, r5, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_803965FC_00001110
lbl_fn_803965FC_000010F8:
    lwz r5, 0x4(r19)
    mr r3, r15
    lwz r6, 0x10(r19)
    lwz r7, 0x8(r19)
    lwz r8, 0xc(r19)
    bl fn_8039C7F0
lbl_fn_803965FC_00001110:
    cmpwi r3, 0x0
    bne lbl_fn_803965FC_00001120
    li r25, 0x0
    b lbl_fn_803965FC_00001134
lbl_fn_803965FC_00001120:
    addi r19, r19, 0x14
    addi r24, r24, 0x1
lbl_fn_803965FC_00001128:
    lwz r0, 0xb0(r23)
    cmpw r24, r0
    blt lbl_fn_803965FC_00001080
lbl_fn_803965FC_00001134:
    cmpwi r25, 0x0
    beq lbl_fn_803965FC_00001144
lbl_fn_803965FC_0000113C:
    li r0, 0x1
    b lbl_fn_803965FC_0000115C
lbl_fn_803965FC_00001144:
    addi r20, r20, 0x4
    addi r22, r22, 0x1
lbl_fn_803965FC_0000114C:
    lwz r0, 0x140(r21)
    cmplw r22, r0
    blt lbl_fn_803965FC_00000EFC
    li r0, 0x0
lbl_fn_803965FC_0000115C:
    cmpwi r0, 0x0
    bne lbl_fn_803965FC_00001178
    lwz r0, 0x4(r16)
    add r3, r0, r29
    lwz r0, 0x4(r3)
    ori r0, r0, 0x10
    stw r0, 0x4(r3)
lbl_fn_803965FC_00001178:
    lwz r0, 0x4(r16)
    add r3, r0, r29
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    beq lbl_fn_803965FC_00001774
    mr r3, r15
    mr r4, r21
    bl fn_80396F44
    mr r19, r3
    lwz r3, 0x8(r1)
    bl fn_8036554C
    mr r22, r3
    b lbl_fn_803965FC_000011C4
lbl_fn_803965FC_000011B0:
    lwz r3, 0x0(r21)
    lwz r0, 0x58(r22)
    cmpw r3, r0
    beq lbl_fn_803965FC_000011CC
    lwz r22, 0x14ac(r22)
lbl_fn_803965FC_000011C4:
    cmpwi r22, 0x0
    bne lbl_fn_803965FC_000011B0
lbl_fn_803965FC_000011CC:
    cmpwi r19, 0x0
    blt lbl_fn_803965FC_0000126C
    lwz r3, 0x144(r21)
    slwi r0, r19, 2
    lwz r5, 0x80(r15)
    addi r6, r15, 0x80
    lwzx r4, r3, r0
    b lbl_fn_803965FC_00001208
lbl_fn_803965FC_000011EC:
    lwz r0, 0xc(r5)
    cmpw r0, r4
    blt lbl_fn_803965FC_00001204
    mr r6, r5
    lwz r5, 0x0(r5)
    b lbl_fn_803965FC_00001208
lbl_fn_803965FC_00001204:
    lwz r5, 0x4(r5)
lbl_fn_803965FC_00001208:
    cmpwi r5, 0x0
    bne lbl_fn_803965FC_000011EC
    addi r0, r15, 0x80
    cmplw r6, r0
    beq lbl_fn_803965FC_00001228
    lwz r0, 0xc(r6)
    cmpw r4, r0
    bge lbl_fn_803965FC_0000122C
lbl_fn_803965FC_00001228:
    addi r6, r15, 0x80
lbl_fn_803965FC_0000122C:
    addi r0, r15, 0x80
    cmplw r6, r0
    beq lbl_fn_803965FC_00001264
    subi r3, r28, 0x7453
    lwz r0, 0x10(r6)
    mulhw r3, r3, r4
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r15, r3
    lwz r3, 0x64(r3)
    add r20, r3, r0
    b lbl_fn_803965FC_00001270
lbl_fn_803965FC_00001264:
    li r20, 0x0
    b lbl_fn_803965FC_00001270
lbl_fn_803965FC_0000126C:
    li r20, 0x0
lbl_fn_803965FC_00001270:
    lwz r0, 0x4(r16)
    add r3, r0, r29
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_803965FC_00001390
    cmpwi r19, 0x0
    blt lbl_fn_803965FC_00001360
    cmpwi r22, 0x0
    beq lbl_fn_803965FC_000016A0
    lwz r0, 0x38(r22)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_803965FC_000016A0
    lwz r3, 0x88(r15)
    li r5, 0x0
    lwz r4, 0xc0(r20)
    li r6, 0x0
    lwz r0, 0x78(r3)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803965FC_000012F0
lbl_fn_803965FC_000012C8:
    lwz r7, 0x7c(r3)
    lwzx r0, r7, r6
    cmpw r4, r0
    bne lbl_fn_803965FC_000012E4
    mulli r0, r5, 0x28
    add r3, r7, r0
    b lbl_fn_803965FC_000012F4
lbl_fn_803965FC_000012E4:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_803965FC_000012C8
lbl_fn_803965FC_000012F0:
    li r3, 0x0
lbl_fn_803965FC_000012F4:
    cmpwi r3, 0x0
    beq lbl_fn_803965FC_00001330
    lfs f2, 0xc(r3)
    psq_l f1, 0x4(r3), 0, 0
    psq_st f1, 0x528(r22), 0, 0
    stfs f2, 0x530(r22)
    fmr f2, f31
    lfs f0, 0x14(r3)
    addi r3, r1, 0x30
    stfs f31, 0x30(r1)
    stfs f0, 0x34(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r22), 0, 0
    stfs f31, 0x38(r1)
    stfs f2, 0x53c(r22)
lbl_fn_803965FC_00001330:
    lwz r4, 0xc50(r22)
    mr r3, r22
    lwz r5, 0x24(r21)
    bl fn_80154654
    mr r3, r22
    bl fn_80176ACC
    lwz r0, 0x4(r16)
    add r3, r0, r29
    lwz r0, 0x4(r3)
    ori r0, r0, 0x2
    stw r0, 0x4(r3)
    b lbl_fn_803965FC_000016A0
lbl_fn_803965FC_00001360:
    cmpwi r22, 0x0
    beq lbl_fn_803965FC_000016A0
    lwz r3, 0x38(r22)
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_803965FC_000016A0
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803965FC_000016A0
    mr r3, r22
    bl fn_801765D8
    b lbl_fn_803965FC_000016A0
lbl_fn_803965FC_00001390:
    lwz r0, 0x0(r3)
    cmpw r19, r0
    beq lbl_fn_803965FC_000016A0
    cmpwi r22, 0x0
    bne lbl_fn_803965FC_000013C4
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    beq lbl_fn_803965FC_000013C4
    mr r3, r0
    lwz r4, 0x0(r21)
    lwz r0, 0x58(r3)
    cmpw r4, r0
    beq lbl_fn_803965FC_000016A0
lbl_fn_803965FC_000013C4:
    cmpwi r19, 0x0
    blt lbl_fn_803965FC_00001688
    lwz r4, 0x48(r22)
    lwz r0, 0xc50(r22)
    cmpw r0, r4
    bne lbl_fn_803965FC_000013EC
    lwz r3, 0x24(r21)
    lwz r0, 0xc54(r22)
    cmpw r3, r0
    beq lbl_fn_803965FC_00001400
lbl_fn_803965FC_000013EC:
    lwz r5, 0x24(r21)
    cmpwi r5, 0x0
    beq lbl_fn_803965FC_00001400
    mr r3, r22
    bl fn_80154654
lbl_fn_803965FC_00001400:
    lwz r0, 0x38(r22)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_803965FC_000016A0
    lwz r3, 0x88(r15)
    li r5, 0x0
    lwz r4, 0xc0(r20)
    li r6, 0x0
    lwz r0, 0x78(r3)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803965FC_00001458
lbl_fn_803965FC_00001430:
    lwz r7, 0x7c(r3)
    lwzx r0, r7, r6
    cmpw r4, r0
    bne lbl_fn_803965FC_0000144C
    mulli r0, r5, 0x28
    add r3, r7, r0
    b lbl_fn_803965FC_0000145C
lbl_fn_803965FC_0000144C:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_803965FC_00001430
lbl_fn_803965FC_00001458:
    li r3, 0x0
lbl_fn_803965FC_0000145C:
    cmpwi r3, 0x0
    beq lbl_fn_803965FC_0000149C
    lfs f2, 0xc(r3)
    psq_l f1, 0x4(r3), 0, 0
    psq_st f1, 0x528(r22), 0, 0
    stfs f2, 0x530(r22)
    fmr f2, f31
    lfs f0, 0x14(r3)
    addi r3, r1, 0x24
    stfs f31, 0x24(r1)
    stfs f0, 0x28(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r22), 0, 0
    stfs f31, 0x2c(r1)
    stfs f2, 0x53c(r22)
    b lbl_fn_803965FC_000014D0
lbl_fn_803965FC_0000149C:
    lfs f2, 0xc(r21)
    addi r3, r1, 0x18
    psq_l f1, 0x4(r21), 0, 0
    psq_st f1, 0x528(r22), 0, 0
    stfs f2, 0x530(r22)
    fmr f2, f31
    lfs f0, 0x14(r21)
    stfs f31, 0x18(r1)
    stfs f0, 0x1c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r22), 0, 0
    stfs f31, 0x20(r1)
    stfs f2, 0x53c(r22)
lbl_fn_803965FC_000014D0:
    lwz r0, 0x48(r22)
    cmpwi r0, 0x2
    bne lbl_fn_803965FC_0000167C
    lwz r0, 0x7e0(r22)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_803965FC_0000167C
    lwz r3, 0x4(r16)
    li r23, 0x1
    lwzx r0, r3, r29
    cmpwi r0, 0x0
    blt lbl_fn_803965FC_00001604
    cmpwi r19, 0x0
    blt lbl_fn_803965FC_00001604
    lwz r3, 0x88(r15)
    cmpwi r3, 0x0
    beq lbl_fn_803965FC_0000151C
    lwz r3, 0x64(r3)
    b lbl_fn_803965FC_00001520
lbl_fn_803965FC_0000151C:
    li r3, 0x0
lbl_fn_803965FC_00001520:
    cmpwi r3, 0x0
    beq lbl_fn_803965FC_00001604
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_803965FC_00001604
    lwz r4, 0x4c(r3)
    cmpwi r4, 0x1
    bne lbl_fn_803965FC_0000154C
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    beq lbl_fn_803965FC_00001600
lbl_fn_803965FC_0000154C:
    cmpwi r4, 0x3
    bne lbl_fn_803965FC_00001560
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    beq lbl_fn_803965FC_00001600
lbl_fn_803965FC_00001560:
    cmpwi r4, 0xc
    bne lbl_fn_803965FC_00001574
    lwz r0, 0x50(r3)
    cmpwi r0, 0x3
    beq lbl_fn_803965FC_00001600
lbl_fn_803965FC_00001574:
    cmpwi r4, 0x16
    bne lbl_fn_803965FC_00001588
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    beq lbl_fn_803965FC_00001600
lbl_fn_803965FC_00001588:
    cmpwi r4, 0x16
    bne lbl_fn_803965FC_0000159C
    lwz r0, 0x50(r3)
    cmpwi r0, 0x2
    beq lbl_fn_803965FC_00001600
lbl_fn_803965FC_0000159C:
    cmpwi r4, 0x24
    bne lbl_fn_803965FC_000015B0
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    beq lbl_fn_803965FC_00001600
lbl_fn_803965FC_000015B0:
    cmpwi r4, 0x24
    bne lbl_fn_803965FC_000015C4
    lwz r0, 0x50(r3)
    cmpwi r0, 0x2
    beq lbl_fn_803965FC_00001600
lbl_fn_803965FC_000015C4:
    cmpwi r4, 0x24
    bne lbl_fn_803965FC_000015D8
    lwz r0, 0x50(r3)
    cmpwi r0, 0x3
    beq lbl_fn_803965FC_00001600
lbl_fn_803965FC_000015D8:
    cmpwi r4, 0x24
    bne lbl_fn_803965FC_000015EC
    lwz r0, 0x50(r3)
    cmpwi r0, 0x4
    beq lbl_fn_803965FC_00001600
lbl_fn_803965FC_000015EC:
    cmpwi r4, 0x27
    bne lbl_fn_803965FC_00001604
    lwz r0, 0x50(r3)
    cmpwi r0, 0x3
    bne lbl_fn_803965FC_00001604
lbl_fn_803965FC_00001600:
    li r23, 0x0
lbl_fn_803965FC_00001604:
    lwz r3, lbl_8087F4A0
    cmpwi r3, 0x0
    beq lbl_fn_803965FC_00001624
    mr r4, r22
    bl fn_803EE45C
    cmpwi r3, 0x0
    beq lbl_fn_803965FC_00001624
    li r23, 0x0
lbl_fn_803965FC_00001624:
    cmpwi r23, 0x0
    beq lbl_fn_803965FC_0000167C
    addi r3, r22, 0x7d4
    bl fn_8012D8B8
    lwz r0, 0x954(r22)
    mr r3, r22
    stw r0, 0x9f8(r22)
    li r0, 0x0
    li r4, 0x0
    stw r0, 0x58c(r22)
    bl fn_800D246C
    lwz r0, 0x12a4(r22)
    extrwi. r0, r0, 1, 6
    beq lbl_fn_803965FC_00001668
    lwz r0, 0x12a4(r22)
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x12a4(r22)
lbl_fn_803965FC_00001668:
    lwz r0, 0x12a4(r22)
    mr r3, r22
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0x12a4(r22)
    bl fn_80145334
lbl_fn_803965FC_0000167C:
    mr r3, r22
    bl fn_80176ACC
    b lbl_fn_803965FC_000016A0
lbl_fn_803965FC_00001688:
    lwz r0, 0x38(r22)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803965FC_000016A0
    mr r3, r22
    bl fn_801765D8
lbl_fn_803965FC_000016A0:
    cmpwi r22, 0x0
    beq lbl_fn_803965FC_000016EC
    lwz r0, 0x38(r22)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803965FC_000016EC
    cmpwi r20, 0x0
    beq lbl_fn_803965FC_000016EC
    lwz r0, 0xb8(r20)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x8
    bne lbl_fn_803965FC_000016E0
    lwz r0, 0x54c(r22)
    oris r0, r0, 0x40
    stw r0, 0x54c(r22)
    b lbl_fn_803965FC_000016EC
lbl_fn_803965FC_000016E0:
    lwz r0, 0x54c(r22)
    rlwinm r0, r0, 0, 10, 8
    stw r0, 0x54c(r22)
lbl_fn_803965FC_000016EC:
    lwz r3, 0x4(r16)
    lwzx r0, r3, r29
    cmpw r19, r0
    beq lbl_fn_803965FC_00001720
    add r3, r3, r29
    lwz r0, 0x4(r3)
    clrrwi r0, r0, 1
    stw r0, 0x4(r3)
    lwz r0, 0x4(r16)
    add r3, r0, r29
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x4(r3)
lbl_fn_803965FC_00001720:
    lwz r0, 0x37c(r15)
    cmpwi r0, 0x0
    beq lbl_fn_803965FC_0000176C
    lwz r0, 0x4(r17)
    add r3, r0, r30
    lwz r0, 0xc(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x4(r17)
    lwz r4, 0x0(r21)
    add r3, r0, r30
    stw r4, 0x8(r3)
    lwz r3, 0x4(r16)
    lwz r0, 0x4(r17)
    lwzx r4, r3, r29
    add r3, r0, r30
    stw r4, 0x10(r3)
    lwz r0, 0x4(r17)
    add r3, r0, r30
    stw r19, 0x14(r3)
lbl_fn_803965FC_0000176C:
    lwz r3, 0x4(r16)
    stwx r19, r3, r29
lbl_fn_803965FC_00001774:
    addi r18, r18, 0x1
    addi r31, r31, 0x148
    addi r30, r30, 0x18
    addi r29, r29, 0xc
lbl_fn_803965FC_00001784:
    lwz r0, 0x0(r14)
    cmplw r18, r0
    blt lbl_fn_803965FC_00000EC0
    addi r11, r1, 0x90
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    bl _restgpr_14
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80396F44(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lwz r5, 0x13c(r4)
    stw r0, 0x44(r1)
    cmpwi r5, 0x0
    stmw r20, 0x10(r1)
    mr r21, r3
    mr r22, r4
    beq lbl_fn_80396F44_00001808
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80396F44_00001808
    lwz r0, 0x5694(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80396F44_000017F4
    extrwi r0, r5, 1, 30
    b lbl_fn_80396F44_000017F8
lbl_fn_80396F44_000017F4:
    clrlwi r0, r5, 31
lbl_fn_80396F44_000017F8:
    cmpwi r0, 0x0
    bne lbl_fn_80396F44_00001808
    li r3, -0x1
    b lbl_fn_80396F44_00001B00
lbl_fn_80396F44_00001808:
    lwz r3, lbl_8087F430
    li r4, 0x1b
    bl fn_80370174
    lwz r4, 0x140(r22)
    mr r29, r3
    addi r30, r21, 0x80
    li r24, -0x1
    subi r23, r4, 0x1
    lis r31, 0x68dc
    slwi r20, r23, 2
    b lbl_fn_80396F44_00001A00
lbl_fn_80396F44_00001834:
    lwz r3, 0x144(r22)
    addi r6, r21, 0x80
    lwz r5, 0x80(r21)
    lwzx r4, r3, r20
    b lbl_fn_80396F44_00001864
lbl_fn_80396F44_00001848:
    lwz r0, 0xc(r5)
    cmpw r0, r4
    blt lbl_fn_80396F44_00001860
    mr r6, r5
    lwz r5, 0x0(r5)
    b lbl_fn_80396F44_00001864
lbl_fn_80396F44_00001860:
    lwz r5, 0x4(r5)
lbl_fn_80396F44_00001864:
    cmpwi r5, 0x0
    bne lbl_fn_80396F44_00001848
    cmplw r6, r30
    beq lbl_fn_80396F44_00001880
    lwz r0, 0xc(r6)
    cmpw r4, r0
    bge lbl_fn_80396F44_00001884
lbl_fn_80396F44_00001880:
    addi r6, r21, 0x80
lbl_fn_80396F44_00001884:
    cmplw r6, r30
    beq lbl_fn_80396F44_000018B8
    subi r3, r31, 0x7453
    lwz r0, 0x10(r6)
    mulhw r3, r3, r4
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r21, r3
    lwz r3, 0x64(r3)
    add r28, r3, r0
    b lbl_fn_80396F44_000018BC
lbl_fn_80396F44_000018B8:
    li r28, 0x0
lbl_fn_80396F44_000018BC:
    cmpwi r28, 0x0
    li r26, 0x0
    beq lbl_fn_80396F44_000019E8
    lwz r7, 0x4(r28)
    li r5, 0x1
    lwz r3, lbl_8087F430
    li r6, 0x0
    cmpwi r7, 0x0
    lwz r4, 0x10d0(r3)
    bne lbl_fn_80396F44_000018F4
    lwz r0, 0x8(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80396F44_000018F4
    li r6, 0x1
lbl_fn_80396F44_000018F4:
    cmpwi r6, 0x0
    bne lbl_fn_80396F44_00001924
    cmpw r4, r7
    li r3, 0x0
    blt lbl_fn_80396F44_00001918
    lwz r0, 0x8(r28)
    cmpw r4, r0
    bgt lbl_fn_80396F44_00001918
    li r3, 0x1
lbl_fn_80396F44_00001918:
    cmpwi r3, 0x0
    bne lbl_fn_80396F44_00001924
    li r5, 0x0
lbl_fn_80396F44_00001924:
    cmpwi r5, 0x0
    beq lbl_fn_80396F44_000019E8
    addi r25, r28, 0x10
    li r26, 0x1
    li r27, 0x0
    b lbl_fn_80396F44_000019DC
lbl_fn_80396F44_0000193C:
    lwz r4, 0x0(r25)
    lwz r5, 0x0(r28)
    cmpwi r4, 0x0
    bge lbl_fn_80396F44_000019AC
    lwz r3, 0x13c(r21)
    addi r4, r21, 0x13c
    b lbl_fn_80396F44_00001974
lbl_fn_80396F44_00001958:
    lwz r0, 0xc(r3)
    cmpw r0, r5
    blt lbl_fn_80396F44_00001970
    mr r4, r3
    lwz r3, 0x0(r3)
    b lbl_fn_80396F44_00001974
lbl_fn_80396F44_00001970:
    lwz r3, 0x4(r3)
lbl_fn_80396F44_00001974:
    cmpwi r3, 0x0
    bne lbl_fn_80396F44_00001958
    addi r0, r21, 0x13c
    cmplw r4, r0
    beq lbl_fn_80396F44_00001994
    lwz r0, 0xc(r4)
    cmpw r5, r0
    bge lbl_fn_80396F44_00001998
lbl_fn_80396F44_00001994:
    addi r4, r21, 0x13c
lbl_fn_80396F44_00001998:
    addi r0, r21, 0x13c
    subf r0, r4, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_80396F44_000019C4
lbl_fn_80396F44_000019AC:
    lwz r5, 0x4(r25)
    mr r3, r21
    lwz r6, 0x10(r25)
    lwz r7, 0x8(r25)
    lwz r8, 0xc(r25)
    bl fn_8039C7F0
lbl_fn_80396F44_000019C4:
    cmpwi r3, 0x0
    bne lbl_fn_80396F44_000019D4
    li r26, 0x0
    b lbl_fn_80396F44_000019E8
lbl_fn_80396F44_000019D4:
    addi r25, r25, 0x14
    addi r27, r27, 0x1
lbl_fn_80396F44_000019DC:
    lwz r0, 0xb0(r28)
    cmpw r27, r0
    blt lbl_fn_80396F44_0000193C
lbl_fn_80396F44_000019E8:
    cmpwi r26, 0x0
    beq lbl_fn_80396F44_000019F8
    mr r24, r23
    b lbl_fn_80396F44_00001A08
lbl_fn_80396F44_000019F8:
    subi r23, r23, 0x1
    subi r20, r20, 0x4
lbl_fn_80396F44_00001A00:
    cmpwi r23, 0x0
    bge lbl_fn_80396F44_00001834
lbl_fn_80396F44_00001A08:
    cmpwi r29, 0x0
    beq lbl_fn_80396F44_00001AFC
    cmpwi r24, 0x0
    blt lbl_fn_80396F44_00001AFC
    lwz r3, 0x144(r22)
    slwi r0, r24, 2
    lwz r5, 0x80(r21)
    addi r6, r21, 0x80
    lwzx r4, r3, r0
    li r7, 0x0
    b lbl_fn_80396F44_00001A50
lbl_fn_80396F44_00001A34:
    lwz r0, 0xc(r5)
    cmpw r0, r4
    blt lbl_fn_80396F44_00001A4C
    mr r6, r5
    lwz r5, 0x0(r5)
    b lbl_fn_80396F44_00001A50
lbl_fn_80396F44_00001A4C:
    lwz r5, 0x4(r5)
lbl_fn_80396F44_00001A50:
    cmpwi r5, 0x0
    bne lbl_fn_80396F44_00001A34
    addi r0, r21, 0x80
    cmplw r6, r0
    beq lbl_fn_80396F44_00001A70
    lwz r0, 0xc(r6)
    cmpw r4, r0
    bge lbl_fn_80396F44_00001A74
lbl_fn_80396F44_00001A70:
    addi r6, r21, 0x80
lbl_fn_80396F44_00001A74:
    addi r0, r21, 0x80
    cmplw r6, r0
    beq lbl_fn_80396F44_00001AB0
    lis r3, 0x68dc
    lwz r0, 0x10(r6)
    subi r3, r3, 0x7453
    mulhw r3, r3, r4
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r21, r3
    lwz r3, 0x64(r3)
    add r3, r3, r0
    b lbl_fn_80396F44_00001AB4
lbl_fn_80396F44_00001AB0:
    li r3, 0x0
lbl_fn_80396F44_00001AB4:
    lwz r0, 0xb0(r3)
    addi r3, r3, 0x10
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80396F44_00001AF0
lbl_fn_80396F44_00001AC8:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80396F44_00001AE8
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1b
    bne lbl_fn_80396F44_00001AE8
    li r7, 0x1
    b lbl_fn_80396F44_00001AF0
lbl_fn_80396F44_00001AE8:
    addi r3, r3, 0x14
    bdnz lbl_fn_80396F44_00001AC8
lbl_fn_80396F44_00001AF0:
    cmpwi r7, 0x0
    bne lbl_fn_80396F44_00001AFC
    li r24, -0x1
lbl_fn_80396F44_00001AFC:
    mr r3, r24
lbl_fn_80396F44_00001B00:
    lmw r20, 0x10(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
