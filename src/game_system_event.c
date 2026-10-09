#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _savegpr_25(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8005B710(void);
extern void fn_8005B8F8(void);
extern void fn_8005B9AC(void);
extern void fn_8006BA8C(void);
extern void fn_8006BB6C(void);
extern void fn_800827E0(void);
extern void fn_800839EC(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800DC288(void);
extern void fn_800DD3FC(void);
extern void fn_80206B14(void);
extern void fn_80206B68(void);
extern void fn_80206B70(void);
extern void fn_80206B9C(void);
extern void fn_80206C50(void);
extern void fn_8020ED84(void);
extern void fn_8020EE58(void);
extern void fn_8020EE60(void);
extern void fn_8020EF04(void);
extern void fn_8020EF4C(void);
extern void fn_8020EFEC(void);
extern void fn_80219F1C(void);
extern void fn_80219F84(void);
extern void fn_8021A4E0(void);
extern void fn_8021A5F8(void);
extern void fn_80370174(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_80686A64(void);
extern void fn_80686AF0(void);
extern void fn_80686B64(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8073FA10[];
extern u8 lbl_8073FA30[];
extern u8 lbl_8073FA58[];
extern u8 lbl_8073FA60[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_8077A070[];
extern u8 lbl_8077A090[];
extern u8 lbl_8077A0A8[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087DB40;
extern u32 lbl_8087F218;
extern u32 lbl_8087F220;
extern u32 lbl_8087F224;
extern u32 lbl_8087F228;
extern u32 lbl_8087F22C;
extern u32 lbl_8087F230;
extern u32 lbl_8087F430;
extern u32 lbl_80882EE4;
extern u32 lbl_80882EE8;
extern u32 lbl_80882EEC;

/* Function declarations */
void fn_80210AC4(void);
void fn_80210ACC(void);
void fn_80211244(void);
void fn_80211480(void);
void fn_802114D8(void);
void fn_802114E0(void);
void fn_8021150C(void);
void fn_8021154C(void);
void fn_80211648(void);
void fn_80211734(void);
void fn_8021175C(void);
void fn_80211770(void);
void fn_80211940(void);

asm void fn_80210AC4(void)
{
    nofralloc
    lwz r3, lbl_8087F218
    blr
}

asm void fn_80210ACC(void)
{
    nofralloc
    stwu r1, -0x690(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x694(r1)
    addi r4, r1, 0x10
    stmw r17, 0x654(r1)
    li r20, 0x0
    lis r19, lbl_8073FA60@ha
    addi r3, r19, lbl_8073FA60@l
    stw r20, 0x10(r1)
    bl fn_8006BA8C
    lis r4, lbl_807772D0@ha
    mr r22, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x14(r1)
    lwz r21, 0x10(r1)
    addi r3, r1, 0x24
    stw r20, 0x18(r1)
    li r4, 0x0
    li r5, 0x400
    stw r20, 0x1c(r1)
    stw r20, 0x20(r1)
    stw r20, 0x644(r1)
    bl memset
    addi r3, r1, 0x624
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x14(r1)
    mr r4, r22
    mr r5, r21
    addi r3, r1, 0x14
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x14
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x14(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    addi r3, r1, 0x14
    li r21, 0x0
    bl fn_8005B3CC
    addi r4, r19, lbl_8073FA60@l
    addi r4, r4, 0x15
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80210ACC_000000DC
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    mr r21, r3
lbl_fn_80210ACC_000000DC:
    addi r3, r1, 0x14
    bl fn_8005B5F8
    li r0, 0x0
    lis r19, lbl_8073FA60@ha
    stw r0, lbl_8087F224
    addi r19, r19, lbl_8073FA60@l
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    b lbl_fn_80210ACC_00000124
lbl_fn_80210ACC_00000100:
    addi r3, r1, 0x14
    bl fn_8005B3CC
    addi r4, r19, 0x1d
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80210ACC_00000124
    lwz r3, lbl_8087F224
    addi r0, r3, 0x1
    stw r0, lbl_8087F224
lbl_fn_80210ACC_00000124:
    addi r3, r1, 0x14
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80210ACC_00000100
    lwz r3, lbl_8087F224
    addi r0, r3, 0x100
    stw r0, lbl_8087F224
    bl fn_800827E0
    lwz r0, lbl_8087F224
    lis r4, lbl_8073FA60@ha
    addi r26, r4, lbl_8073FA60@l
    li r5, 0x20
    mulli r4, r0, 0x138
    li r6, 0x1
    addi r7, r26, 0x1d
    li r9, 0x0
    mr r8, r7
    li r10, 0x0
    bl fn_800839EC
    stw r3, lbl_8087F220
    addi r5, r26, 0x1d
    lwz r3, 0xc(r1)
    mr r6, r5
    li r4, 0x1
    li r7, 0x0
    bl fn_800846FC
    stw r3, lbl_8087F228
    mr r4, r22
    lwz r12, 0x14(r1)
    addi r3, r1, 0x14
    lwz r5, 0x10(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0x14
    li r20, 0x0
    bl fn_8005B5F8
    li r27, 0x0
    stw r27, 0xc(r1)
    addi r24, r26, 0x1e
    li r23, 0x0
    stw r27, 0x8(r1)
    li r28, 0x1
    li r29, 0x64
    lis r30, lbl_8073FA10@ha
    lis r31, lbl_8073FA30@ha
    b lbl_fn_80210ACC_00000704
lbl_fn_80210ACC_000001E0:
    lwz r0, lbl_8087F220
    mr r5, r21
    addi r4, r1, 0x14
    addi r8, r1, 0xc
    stbx r28, r23, r0
    add r19, r0, r23
    addi r9, r1, 0x8
    lwz r6, lbl_8087F228
    mr r3, r19
    lwz r7, lbl_8087F22C
    bl fn_80219F84
    stb r29, 0x3(r19)
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    sth r3, 0xbc(r19)
    addi r3, r1, 0x14
    bl fn_8005B3CC
    addi r3, r1, 0x14
    bl fn_8005B3CC
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xc4(r19)
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xc8(r19)
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    addi r3, r1, 0x14
    bl fn_8005B3CC
    mr r25, r3
    addi r17, r30, lbl_8073FA10@l
    li r18, 0x0
lbl_fn_80210ACC_0000030C:
    lwz r4, 0x0(r17)
    mr r3, r25
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80210ACC_00000324
    b lbl_fn_80210ACC_00000338
lbl_fn_80210ACC_00000324:
    addi r18, r18, 0x1
    addi r17, r17, 0x4
    cmpwi r18, 0x6
    blt lbl_fn_80210ACC_0000030C
    li r18, 0x0
lbl_fn_80210ACC_00000338:
    stb r18, 0xc0(r19)
    addi r3, r1, 0x14
    bl fn_8005B3CC
    mr r18, r3
    addi r17, r31, lbl_8073FA30@l
    li r25, 0x0
lbl_fn_80210ACC_00000350:
    lwz r4, 0x0(r17)
    mr r3, r18
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80210ACC_00000368
    b lbl_fn_80210ACC_0000037C
lbl_fn_80210ACC_00000368:
    addi r25, r25, 0x1
    addi r17, r17, 0x4
    cmpwi r25, 0x2
    blt lbl_fn_80210ACC_00000350
    li r25, 0x0
lbl_fn_80210ACC_0000037C:
    stb r25, 0xc1(r19)
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    stb r3, 0xc2(r19)
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    stb r3, 0xc3(r19)
    addi r3, r1, 0x14
    bl fn_8005B3CC
    addi r0, r19, 0xcc
    mr r18, r3
    cmplw r3, r0
    beq lbl_fn_80210ACC_000003D0
    bl strlen
    mr r5, r3
    mr r4, r18
    addi r3, r19, 0xcc
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80210ACC_000003D0:
    addi r3, r19, 0xcc
    bl strlen
    lbzx r0, r24, r3
    extsb r0, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_80210ACC_0000043C
    add r3, r19, r3
    addi r5, r19, 0xcc
    addi r3, r3, 0xcc
    mr r4, r24
    subf r0, r5, r3
    mtctr r0
    cmplw r5, r3
    beq lbl_fn_80210ACC_00000438
lbl_fn_80210ACC_0000040C:
    lbz r3, 0x0(r5)
    lbz r0, 0x0(r4)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    beq lbl_fn_80210ACC_0000042C
    li r0, 0x0
    b lbl_fn_80210ACC_0000043C
lbl_fn_80210ACC_0000042C:
    addi r5, r5, 0x1
    addi r4, r4, 0x1
    bdnz lbl_fn_80210ACC_0000040C
lbl_fn_80210ACC_00000438:
    li r0, 0x1
lbl_fn_80210ACC_0000043C:
    cmpwi r0, 0x0
    bne lbl_fn_80210ACC_000004B8
    addi r25, r26, 0x20
    addi r3, r19, 0xcc
    bl strlen
    lbzx r0, r25, r3
    extsb r0, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_80210ACC_000004B0
    add r3, r19, r3
    addi r4, r19, 0xcc
    addi r3, r3, 0xcc
    subf r0, r4, r3
    mtctr r0
    cmplw r4, r3
    beq lbl_fn_80210ACC_000004AC
lbl_fn_80210ACC_00000480:
    lbz r3, 0x0(r4)
    lbz r0, 0x0(r25)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    beq lbl_fn_80210ACC_000004A0
    li r0, 0x0
    b lbl_fn_80210ACC_000004B0
lbl_fn_80210ACC_000004A0:
    addi r4, r4, 0x1
    addi r25, r25, 0x1
    bdnz lbl_fn_80210ACC_00000480
lbl_fn_80210ACC_000004AC:
    li r0, 0x1
lbl_fn_80210ACC_000004B0:
    cmpwi r0, 0x0
    beq lbl_fn_80210ACC_000004BC
lbl_fn_80210ACC_000004B8:
    stb r27, 0xcc(r19)
lbl_fn_80210ACC_000004BC:
    addi r3, r1, 0x14
    bl fn_8005B3CC
    addi r0, r19, 0xdc
    mr r18, r3
    cmplw r3, r0
    beq lbl_fn_80210ACC_000004EC
    bl strlen
    mr r5, r3
    mr r4, r18
    addi r3, r19, 0xdc
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80210ACC_000004EC:
    addi r3, r19, 0xdc
    bl strlen
    lbzx r0, r24, r3
    extsb r0, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_80210ACC_00000558
    add r3, r19, r3
    addi r5, r19, 0xdc
    addi r3, r3, 0xdc
    mr r4, r24
    subf r0, r5, r3
    mtctr r0
    cmplw r5, r3
    beq lbl_fn_80210ACC_00000554
lbl_fn_80210ACC_00000528:
    lbz r3, 0x0(r5)
    lbz r0, 0x0(r4)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    beq lbl_fn_80210ACC_00000548
    li r0, 0x0
    b lbl_fn_80210ACC_00000558
lbl_fn_80210ACC_00000548:
    addi r5, r5, 0x1
    addi r4, r4, 0x1
    bdnz lbl_fn_80210ACC_00000528
lbl_fn_80210ACC_00000554:
    li r0, 0x1
lbl_fn_80210ACC_00000558:
    cmpwi r0, 0x0
    bne lbl_fn_80210ACC_000005D4
    addi r25, r26, 0x20
    addi r3, r19, 0xdc
    bl strlen
    lbzx r0, r25, r3
    extsb r0, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_80210ACC_000005CC
    add r3, r19, r3
    addi r4, r19, 0xdc
    addi r3, r3, 0xdc
    subf r0, r4, r3
    mtctr r0
    cmplw r4, r3
    beq lbl_fn_80210ACC_000005C8
lbl_fn_80210ACC_0000059C:
    lbz r3, 0x0(r4)
    lbz r0, 0x0(r25)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    beq lbl_fn_80210ACC_000005BC
    li r0, 0x0
    b lbl_fn_80210ACC_000005CC
lbl_fn_80210ACC_000005BC:
    addi r4, r4, 0x1
    addi r25, r25, 0x1
    bdnz lbl_fn_80210ACC_0000059C
lbl_fn_80210ACC_000005C8:
    li r0, 0x1
lbl_fn_80210ACC_000005CC:
    cmpwi r0, 0x0
    beq lbl_fn_80210ACC_000005D8
lbl_fn_80210ACC_000005D4:
    stb r27, 0xdc(r19)
lbl_fn_80210ACC_000005D8:
    mr r18, r19
    li r17, 0x0
lbl_fn_80210ACC_000005E0:
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xec(r18)
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xf0(r18)
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xf4(r18)
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xf8(r18)
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    addi r17, r17, 0x1
    stw r3, 0xfc(r18)
    cmpwi r17, 0x2
    addi r18, r18, 0x14
    blt lbl_fn_80210ACC_000005E0
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xb4(r19)
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0xb8(r19)
    addi r3, r1, 0x14
    bl fn_8005B3CC
    addi r0, r19, 0x114
    mr r18, r3
    cmplw r3, r0
    beq lbl_fn_80210ACC_00000690
    bl strlen
    mr r5, r3
    mr r4, r18
    addi r3, r19, 0x114
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80210ACC_00000690:
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x130(r19)
    mr r18, r19
    li r17, 0x0
lbl_fn_80210ACC_000006A8:
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x11c(r18)
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    add r4, r19, r17
    addi r17, r17, 0x1
    cmpwi r17, 0x4
    stb r3, 0x12c(r4)
    addi r18, r18, 0x4
    blt lbl_fn_80210ACC_000006A8
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x134(r19)
    addi r3, r1, 0x14
    bl fn_8005B3CC
    bl fn_80684600
    sth r3, 0xbe(r19)
    addi r23, r23, 0x138
    addi r20, r20, 0x1
lbl_fn_80210ACC_00000704:
    addi r3, r1, 0x14
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80210ACC_000001E0
    mulli r7, r20, 0x138
    li r6, 0x1
    li r5, -0x1
    li r4, 0xa
    li r3, 0x0
    b lbl_fn_80210ACC_00000750
lbl_fn_80210ACC_0000072C:
    lwz r0, lbl_8087F220
    addi r20, r20, 0x1
    stbx r6, r7, r0
    add r8, r0, r7
    addi r7, r7, 0x138
    stw r5, 0x4(r8)
    sth r4, 0xbc(r8)
    stb r3, 0xcc(r8)
    stb r3, 0xdc(r8)
lbl_fn_80210ACC_00000750:
    lwz r0, lbl_8087F224
    cmpw r20, r0
    blt lbl_fn_80210ACC_0000072C
    mr r3, r22
    li r4, 0x0
    bl fn_8006BB6C
    bl fn_80211244
    lmw r17, 0x654(r1)
    lwz r0, 0x694(r1)
    mtlr r0
    addi r1, r1, 0x690
    blr
}

asm void fn_80211244(void)
{
    nofralloc
    stwu r1, -0xc80(r1)
    mflr r0
    stw r0, 0xc84(r1)
    stw r31, 0xc7c(r1)
    stw r30, 0xc78(r1)
    stw r29, 0xc74(r1)
    stw r28, 0xc70(r1)
    lwz r0, lbl_8087F220
    cmpwi r0, 0x0
    beq lbl_fn_80211244_0000099C
    lwz r3, lbl_8087F22C
    cmpwi r3, 0x0
    beq lbl_fn_80211244_000007C0
    bl fn_80084C24
    li r0, 0x0
    stw r0, lbl_8087F22C
lbl_fn_80211244_000007C0:
    li r31, 0x0
    stw r31, 0x10(r1)
    lwz r3, lbl_80882EE4
    addi r4, r1, 0x10
    li r5, 0x0
    bl fn_8006BA8C
    lwz r0, 0x10(r1)
    lis r4, lbl_8077A090@ha
    addi r4, r4, lbl_8077A090@l
    stw r4, 0x14(r1)
    mr r28, r3
    srwi r29, r0, 1
    stw r31, 0x18(r1)
    addi r30, r1, 0x14
    addi r3, r1, 0x24
    li r4, 0x0
    stw r31, 0x1c(r1)
    li r5, 0x800
    stw r31, 0x20(r1)
    stw r31, 0xc64(r1)
    bl memset
    addi r3, r1, 0xc24
    li r4, 0x0
    li r5, 0x40
    bl memset
    cmpwi r29, 0x0
    mr r5, r29
    beq lbl_fn_80211244_00000834
    subi r5, r29, 0x1
lbl_fn_80211244_00000834:
    cmpwi r29, 0x0
    mr r3, r30
    beq lbl_fn_80211244_00000848
    addi r4, r28, 0x2
    b lbl_fn_80211244_0000084C
lbl_fn_80211244_00000848:
    mr r4, r28
lbl_fn_80211244_0000084C:
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_8077A070@ha
    lis r4, lbl_8077A0A8@ha
    addi r3, r3, lbl_8077A070@l
    stw r3, 0x14(r1)
    mr r3, r30
    addi r4, r4, lbl_8077A0A8@l
    bl fn_8005B9AC
    addi r3, r1, 0x14
    bl fn_8005B8F8
    li r0, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    b lbl_fn_80211244_000008B8
lbl_fn_80211244_00000890:
    addi r3, r1, 0x14
    bl fn_8005B710
    la r4, lbl_8087DB40
    bl fn_80686AF0
    cmpwi r3, 0x0
    beq lbl_fn_80211244_000008B8
    addi r3, r1, 0x14
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80219F1C
lbl_fn_80211244_000008B8:
    addi r3, r1, 0x14
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_80211244_00000890
    lis r3, lbl_8073FA60@ha
    lwz r0, 0x8(r1)
    addi r3, r3, lbl_8073FA60@l
    li r4, 0x1
    addi r5, r3, 0x1d
    li r7, 0x0
    slwi r3, r0, 1
    mr r6, r5
    bl fn_800846FC
    lwz r0, 0x10(r1)
    stw r3, lbl_8087F22C
    srwi. r3, r0, 1
    beq lbl_fn_80211244_00000904
    addi r0, r28, 0x2
    b lbl_fn_80211244_00000908
lbl_fn_80211244_00000904:
    mr r0, r28
lbl_fn_80211244_00000908:
    cmpwi r3, 0x0
    stw r0, 0x18(r1)
    beq lbl_fn_80211244_00000918
    subi r3, r3, 0x1
lbl_fn_80211244_00000918:
    li r31, 0x0
    stw r3, 0x1c(r1)
    addi r3, r1, 0x14
    stw r31, 0x20(r1)
    bl fn_8005B8F8
    stw r31, 0xc(r1)
    li r29, 0x0
    stw r31, 0x8(r1)
    b lbl_fn_80211244_00000980
lbl_fn_80211244_0000093C:
    addi r3, r1, 0x14
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80211244_00000980
    cmplwi r0, 0x23
    beq lbl_fn_80211244_00000980
    lwz r0, lbl_8087F220
    addi r4, r1, 0x14
    lwz r6, lbl_8087F228
    addi r8, r1, 0xc
    lwz r7, lbl_8087F22C
    add r3, r0, r29
    addi r9, r1, 0x8
    li r5, 0x0
    bl fn_8021A5F8
    addi r29, r29, 0x138
lbl_fn_80211244_00000980:
    addi r3, r1, 0x14
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_80211244_0000093C
    mr r3, r28
    li r4, 0x0
    bl fn_8006BB6C
lbl_fn_80211244_0000099C:
    lwz r0, 0xc84(r1)
    lwz r31, 0xc7c(r1)
    lwz r30, 0xc78(r1)
    lwz r29, 0xc74(r1)
    lwz r28, 0xc70(r1)
    mtlr r0
    addi r1, r1, 0xc80
    blr
}

asm void fn_80211480(void)
{
    nofralloc
    lwz r6, lbl_8087F220
    li r4, 0x0
    lwz r0, lbl_8087F224
    mr r5, r6
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80211480_000009F4
lbl_fn_80211480_000009D8:
    lwz r0, 0x4(r5)
    cmpw r3, r0
    bne lbl_fn_80211480_000009E8
    b lbl_fn_80211480_000009F8
lbl_fn_80211480_000009E8:
    addi r5, r5, 0x138
    addi r4, r4, 0x1
    bdnz lbl_fn_80211480_000009D8
lbl_fn_80211480_000009F4:
    li r4, -0x1
lbl_fn_80211480_000009F8:
    cmpwi r4, 0x0
    blt lbl_fn_80211480_00000A0C
    mulli r0, r4, 0x138
    add r3, r6, r0
    blr
lbl_fn_80211480_00000A0C:
    li r3, 0x0
    blr
}

asm void fn_802114D8(void)
{
    nofralloc
    lwz r3, lbl_8087F224
    blr
}

asm void fn_802114E0(void)
{
    nofralloc
    cmpwi r3, 0x0
    blt lbl_fn_802114E0_00000A30
    lwz r0, lbl_8087F224
    cmpw r0, r3
    bgt lbl_fn_802114E0_00000A38
lbl_fn_802114E0_00000A30:
    li r3, 0x0
    blr
lbl_fn_802114E0_00000A38:
    mulli r0, r3, 0x138
    lwz r3, lbl_8087F220
    add r3, r3, r0
    blr
}

asm void fn_8021150C(void)
{
    nofralloc
    lwz r0, lbl_8087F224
    li r5, 0x0
    lwz r4, lbl_8087F220
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8021150C_00000A80
lbl_fn_8021150C_00000A60:
    lwz r0, 0x4(r4)
    cmpw r3, r0
    bne lbl_fn_8021150C_00000A74
    mr r3, r5
    blr
lbl_fn_8021150C_00000A74:
    addi r4, r4, 0x138
    addi r5, r5, 0x1
    bdnz lbl_fn_8021150C_00000A60
lbl_fn_8021150C_00000A80:
    li r3, -0x1
    blr
}

asm void fn_8021154C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8021A4E0
    addi r5, r31, 0x100
    addi r3, r31, 0x114
    cmplw r5, r3
    li r4, 0x0
    li r0, 0x1
    sth r0, 0xbc(r31)
    sth r4, 0xbe(r31)
    stb r4, 0xc0(r31)
    stb r4, 0xc1(r31)
    stb r4, 0xc2(r31)
    stb r0, 0xc3(r31)
    stw r4, 0xc4(r31)
    stw r4, 0xc8(r31)
    stb r4, 0xcc(r31)
    stb r4, 0xdc(r31)
    stw r4, 0xec(r31)
    stw r4, 0xf0(r31)
    stw r4, 0xf4(r31)
    stw r4, 0xf8(r31)
    stw r4, 0xfc(r31)
    bge lbl_fn_8021154C_00000B28
    addi r3, r3, 0x13
    li r0, 0x14
    subf r3, r5, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_8021154C_00000B28
lbl_fn_8021154C_00000B0C:
    stw r4, 0x0(r5)
    stw r4, 0x4(r5)
    stw r4, 0x8(r5)
    stw r4, 0xc(r5)
    stw r4, 0x10(r5)
    addi r5, r5, 0x14
    bdnz lbl_fn_8021154C_00000B0C
lbl_fn_8021154C_00000B28:
    li r7, 0x0
    li r6, 0x1
    li r0, 0x2
    stb r7, 0x114(r31)
    addi r3, r31, 0x11c
    li r4, 0x0
    stw r7, 0x130(r31)
    li r5, 0x10
    stw r7, 0x134(r31)
    stb r6, 0x0(r31)
    stb r0, 0x1(r31)
    stw r7, 0x64(r31)
    bl memset
    addi r3, r31, 0x12c
    li r4, 0x0
    li r5, 0x4
    bl memset
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80211648(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lha r0, 0xbc(r3)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_80211648_00000BAC
    cmpwi r0, 0x8
    bne lbl_fn_80211648_00000BB4
lbl_fn_80211648_00000BAC:
    li r3, 0x0
    b lbl_fn_80211648_00000C5C
lbl_fn_80211648_00000BB4:
    lwz r3, 0x4(r3)
    cmpwi r3, 0x65
    bne lbl_fn_80211648_00000BC8
    li r3, 0x0
    b lbl_fn_80211648_00000C5C
lbl_fn_80211648_00000BC8:
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_80211648_00000C28
    lwz r3, 0x4(r31)
    bl fn_80206C50
    lwz r0, 0x12c(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80211648_00000BF4
    li r3, 0x0
    b lbl_fn_80211648_00000C5C
lbl_fn_80211648_00000BF4:
    lwz r3, 0x4(r31)
    subis r0, r3, 0x1
    cmplwi r0, 0x890d
    bne lbl_fn_80211648_00000C28
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80211648_00000C28
    li r4, 0x11b
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_80211648_00000C28
    li r3, 0x0
    b lbl_fn_80211648_00000C5C
lbl_fn_80211648_00000C28:
    lwz r3, 0x4(r31)
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_80211648_00000C58
    lwz r3, 0x4(r31)
    bl fn_8020EFEC
    lwz r3, 0xa8(r3)
    subi r0, r3, 0x8
    cmplwi r0, 0x2
    bgt lbl_fn_80211648_00000C58
    li r3, 0x0
    b lbl_fn_80211648_00000C5C
lbl_fn_80211648_00000C58:
    li r3, 0x1
lbl_fn_80211648_00000C5C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80211734(void)
{
    nofralloc
    lha r0, 0xbc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80211734_00000C84
    li r3, 0x1
    blr
lbl_fn_80211734_00000C84:
    lwz r3, 0x4(r3)
    subi r0, r3, 0x65
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_8021175C(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    subi r0, r3, 0x65
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_80211770(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r6, 0x431c
    lis r5, 0xf
    stw r0, 0x64(r1)
    subi r0, r6, 0x217d
    mulhw r6, r0, r3
    li r7, 0x0
    stw r31, 0x5c(r1)
    addi r0, r5, 0x4240
    stw r30, 0x58(r1)
    mr r30, r4
    srawi r5, r6, 18
    stw r29, 0x54(r1)
    srwi r6, r5, 31
    add r5, r5, r6
    lwz r10, lbl_8087F220
    mullw r0, r5, r0
    lwz r9, lbl_8087F224
    mr r8, r10
    subf r5, r0, r3
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_fn_80211770_00000D28
lbl_fn_80211770_00000D0C:
    lwz r0, 0x4(r8)
    cmpw r5, r0
    bne lbl_fn_80211770_00000D1C
    b lbl_fn_80211770_00000D2C
lbl_fn_80211770_00000D1C:
    addi r8, r8, 0x138
    addi r7, r7, 0x1
    bdnz lbl_fn_80211770_00000D0C
lbl_fn_80211770_00000D28:
    li r7, -0x1
lbl_fn_80211770_00000D2C:
    cmpwi r7, 0x0
    blt lbl_fn_80211770_00000D40
    mulli r0, r7, 0x138
    add r29, r10, r0
    b lbl_fn_80211770_00000D44
lbl_fn_80211770_00000D40:
    li r29, 0x0
lbl_fn_80211770_00000D44:
    cmpwi r29, 0x0
    bne lbl_fn_80211770_00000D54
    li r3, 0x0
    b lbl_fn_80211770_00000E60
lbl_fn_80211770_00000D54:
    lis r5, 0x431c
    cmpwi r4, 0x0
    subi r0, r5, 0x217d
    mulhw r0, r0, r3
    srawi r0, r0, 18
    srwi r3, r0, 31
    add r31, r0, r3
    bge lbl_fn_80211770_00000D78
    li r30, 0x100
lbl_fn_80211770_00000D78:
    lwz r0, lbl_8087F230
    cmpwi r0, 0x0
    bne lbl_fn_80211770_00000DA8
    lis r5, lbl_8073FA60@ha
    li r3, 0x4040
    addi r5, r5, lbl_8073FA60@l
    li r4, 0x1
    addi r5, r5, 0x1d
    li r7, 0x0
    mr r6, r5
    bl fn_800846FC
    stw r3, lbl_8087F230
lbl_fn_80211770_00000DA8:
    lwz r3, lbl_8087F230
    slwi r0, r30, 6
    lwz r4, 0x8(r29)
    add r29, r3, r0
    mr r3, r29
    bl fn_80686A64
    mr r3, r29
    li r30, 0x0
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_80211770_00000E0C
    lhz r6, 0x4(r3)
    lhz r5, 0x2(r3)
    addis r4, r6, 0x1
    subi r0, r4, 0x30
    subi r30, r5, 0x30
    clrlwi r0, r0, 16
    cmplwi r0, 0x9
    bgt lbl_fn_80211770_00000E04
    mulli r0, r30, 0xa
    add r4, r6, r0
    subi r30, r4, 0x30
lbl_fn_80211770_00000E04:
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_80211770_00000E0C:
    cmpwi r30, 0x0
    beq lbl_fn_80211770_00000E34
    la r4, lbl_8087DB40
    mr r5, r29
    addi r3, r1, 0x8
    add r6, r30, r31
    addi r4, r4, 0x2
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_80211770_00000E50
lbl_fn_80211770_00000E34:
    la r4, lbl_8087DB40
    mr r5, r29
    addi r3, r1, 0x8
    add r6, r30, r31
    addi r4, r4, 0xe
    crclr 6
    bl fn_800DD3FC
lbl_fn_80211770_00000E50:
    mr r3, r29
    addi r4, r1, 0x8
    bl fn_80686A64
    mr r3, r29
lbl_fn_80211770_00000E60:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80211940(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    lis r5, 0xf
    lis r6, 0x4330
    addi r0, r5, 0x4240
    lwz r9, lbl_8087F224
    mullw r27, r4, r0
    stw r6, 0x8(r1)
    subi r8, r9, 0x100
    lwz r10, lbl_8087F220
    li r0, 0x40
    stw r6, 0x10(r1)
    mulli r5, r8, 0x138
    mr r25, r3
    mr r26, r4
    mr r7, r8
    li r6, 0x0
    mtctr r0
lbl_fn_80211940_00000ED0:
    cmpwi r7, 0x0
    blt lbl_fn_80211940_00000EE0
    cmpw r9, r7
    bgt lbl_fn_80211940_00000EE8
lbl_fn_80211940_00000EE0:
    li r4, 0x0
    b lbl_fn_80211940_00000EEC
lbl_fn_80211940_00000EE8:
    add r4, r10, r5
lbl_fn_80211940_00000EEC:
    lwz r0, 0x4(r3)
    lwz r4, 0x4(r4)
    add r0, r0, r27
    cmpw r4, r0
    bne lbl_fn_80211940_00000F08
    mr r3, r4
    b lbl_fn_80211940_000019D8
lbl_fn_80211940_00000F08:
    addic. r7, r7, 0x1
    addi r5, r5, 0x138
    blt lbl_fn_80211940_00000F1C
    cmpw r9, r7
    bgt lbl_fn_80211940_00000F24
lbl_fn_80211940_00000F1C:
    li r4, 0x0
    b lbl_fn_80211940_00000F28
lbl_fn_80211940_00000F24:
    add r4, r10, r5
lbl_fn_80211940_00000F28:
    lwz r0, 0x4(r3)
    lwz r4, 0x4(r4)
    add r0, r0, r27
    cmpw r4, r0
    bne lbl_fn_80211940_00000F44
    mr r3, r4
    b lbl_fn_80211940_000019D8
lbl_fn_80211940_00000F44:
    addic. r7, r7, 0x1
    addi r5, r5, 0x138
    blt lbl_fn_80211940_00000F58
    cmpw r9, r7
    bgt lbl_fn_80211940_00000F60
lbl_fn_80211940_00000F58:
    li r4, 0x0
    b lbl_fn_80211940_00000F64
lbl_fn_80211940_00000F60:
    add r4, r10, r5
lbl_fn_80211940_00000F64:
    lwz r0, 0x4(r3)
    lwz r4, 0x4(r4)
    add r0, r0, r27
    cmpw r4, r0
    bne lbl_fn_80211940_00000F80
    mr r3, r4
    b lbl_fn_80211940_000019D8
lbl_fn_80211940_00000F80:
    addic. r7, r7, 0x1
    addi r5, r5, 0x138
    blt lbl_fn_80211940_00000F94
    cmpw r9, r7
    bgt lbl_fn_80211940_00000F9C
lbl_fn_80211940_00000F94:
    li r4, 0x0
    b lbl_fn_80211940_00000FA0
lbl_fn_80211940_00000F9C:
    add r4, r10, r5
lbl_fn_80211940_00000FA0:
    lwz r0, 0x4(r3)
    lwz r4, 0x4(r4)
    add r0, r0, r27
    cmpw r4, r0
    bne lbl_fn_80211940_00000FBC
    mr r3, r4
    b lbl_fn_80211940_000019D8
lbl_fn_80211940_00000FBC:
    addi r7, r7, 0x1
    addi r5, r5, 0x138
    addi r6, r6, 0x3
    bdnz lbl_fn_80211940_00000ED0
    mulli r4, r8, 0x138
    li r0, 0x100
    li r30, 0x0
    mtctr r0
lbl_fn_80211940_00000FDC:
    cmpwi r8, 0x0
    blt lbl_fn_80211940_00000FEC
    cmpw r9, r8
    bgt lbl_fn_80211940_00000FF4
lbl_fn_80211940_00000FEC:
    li r29, 0x0
    b lbl_fn_80211940_00000FF8
lbl_fn_80211940_00000FF4:
    add r29, r10, r4
lbl_fn_80211940_00000FF8:
    lwz r0, 0x4(r29)
    cmpwi r0, 0x0
    bge lbl_fn_80211940_000019C4
    lbz r4, 0x0(r3)
    li r0, 0xc
    stb r4, 0x0(r29)
    addi r6, r29, 0x10
    addi r5, r3, 0x10
    lbz r4, 0x1(r3)
    stb r4, 0x1(r29)
    lbz r4, 0x2(r3)
    stb r4, 0x2(r29)
    lbz r4, 0x3(r3)
    stb r4, 0x3(r29)
    lwz r4, 0x4(r3)
    stw r4, 0x4(r29)
    lwz r4, 0x8(r3)
    stw r4, 0x8(r29)
    lwz r4, 0xc(r3)
    stw r4, 0xc(r29)
    lwz r4, 0x10(r3)
    stw r4, 0x10(r29)
    mtctr r0
lbl_fn_80211940_00001054:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_80211940_00001054
    lwz r4, 0x78(r3)
    addi r28, r3, 0xcc
    lwz r5, 0x74(r3)
    addi r0, r29, 0xcc
    stw r5, 0x74(r29)
    cmplw r28, r0
    stw r4, 0x78(r29)
    lwz r0, 0x80(r3)
    lwz r4, 0x7c(r3)
    stw r4, 0x7c(r29)
    stw r0, 0x80(r29)
    lwz r0, 0x88(r3)
    lwz r4, 0x84(r3)
    stw r4, 0x84(r29)
    stw r0, 0x88(r29)
    lwz r0, 0x8c(r3)
    stw r0, 0x8c(r29)
    lwz r0, 0x94(r3)
    lwz r4, 0x90(r3)
    stw r4, 0x90(r29)
    stw r0, 0x94(r29)
    lwz r0, 0x9c(r3)
    lwz r4, 0x98(r3)
    stw r4, 0x98(r29)
    stw r0, 0x9c(r29)
    lwz r0, 0xa4(r3)
    lwz r4, 0xa0(r3)
    stw r4, 0xa0(r29)
    stw r0, 0xa4(r29)
    lwz r0, 0xa8(r3)
    stw r0, 0xa8(r29)
    lwz r0, 0xac(r3)
    stw r0, 0xac(r29)
    lwz r0, 0xb0(r3)
    stw r0, 0xb0(r29)
    lwz r0, 0xb8(r3)
    lwz r4, 0xb4(r3)
    stw r4, 0xb4(r29)
    stw r0, 0xb8(r29)
    lha r0, 0xbc(r3)
    sth r0, 0xbc(r29)
    lha r0, 0xbe(r3)
    sth r0, 0xbe(r29)
    lbz r0, 0xc0(r3)
    stb r0, 0xc0(r29)
    lbz r0, 0xc1(r3)
    stb r0, 0xc1(r29)
    lbz r0, 0xc2(r3)
    stb r0, 0xc2(r29)
    lbz r0, 0xc3(r3)
    stb r0, 0xc3(r29)
    lwz r0, 0xc4(r3)
    stw r0, 0xc4(r29)
    lwz r0, 0xc8(r3)
    stw r0, 0xc8(r29)
    beq lbl_fn_80211940_00001164
    mr r3, r28
    bl strlen
    mr r5, r3
    mr r4, r28
    addi r3, r29, 0xcc
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80211940_00001164:
    addi r28, r25, 0xdc
    addi r0, r29, 0xdc
    cmplw r28, r0
    beq lbl_fn_80211940_00001190
    mr r3, r28
    bl strlen
    mr r5, r3
    mr r4, r28
    addi r3, r29, 0xdc
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80211940_00001190:
    lwz r3, 0xf0(r25)
    addi r28, r25, 0x114
    lwz r4, 0xec(r25)
    addi r0, r29, 0x114
    stw r4, 0xec(r29)
    cmplw r28, r0
    stw r3, 0xf0(r29)
    lwz r0, 0xf8(r25)
    lwz r3, 0xf4(r25)
    stw r3, 0xf4(r29)
    stw r0, 0xf8(r29)
    lwz r0, 0x100(r25)
    lwz r3, 0xfc(r25)
    stw r3, 0xfc(r29)
    stw r0, 0x100(r29)
    lwz r0, 0x108(r25)
    lwz r3, 0x104(r25)
    stw r3, 0x104(r29)
    stw r0, 0x108(r29)
    lwz r0, 0x110(r25)
    lwz r3, 0x10c(r25)
    stw r3, 0x10c(r29)
    stw r0, 0x110(r29)
    beq lbl_fn_80211940_0000120C
    mr r3, r28
    bl strlen
    mr r5, r3
    mr r4, r28
    addi r3, r29, 0x114
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80211940_0000120C:
    lwz r0, 0x120(r25)
    mr r4, r30
    lwz r3, 0x11c(r25)
    stw r3, 0x11c(r29)
    stw r0, 0x120(r29)
    lwz r0, 0x128(r25)
    lwz r3, 0x124(r25)
    stw r3, 0x124(r29)
    stw r0, 0x128(r29)
    lwz r0, 0x12c(r25)
    stw r0, 0x12c(r29)
    lwz r0, 0x130(r25)
    stw r0, 0x130(r29)
    lwz r0, 0x134(r25)
    stw r0, 0x134(r29)
    lwz r0, 0x4(r29)
    add r3, r0, r27
    stw r3, 0x4(r29)
    bl fn_80211770
    stw r3, 0x8(r29)
    mulli r0, r26, 0x1388
    lwz r3, 0xc8(r29)
    add r0, r3, r0
    stw r0, 0xc8(r29)
    lwz r3, 0x4(r29)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_80211940_0000166C
    li r28, 0x0
lbl_fn_80211940_00001280:
    bl fn_80206B68
    add r3, r3, r28
    subi r3, r3, 0x80
    bl fn_80206B70
    mr r30, r3
    lwz r3, 0x4(r25)
    bl fn_80206C50
    lwz r0, 0x80(r30)
    mr r27, r3
    cmpwi r0, 0x0
    bge lbl_fn_80211940_0000165C
    cmpwi r3, 0x0
    beq lbl_fn_80211940_0000165C
    lis r25, 0x1062
    lwz r5, 0x80(r27)
    addi r0, r25, 0x4dd3
    lwz r3, 0x78(r3)
    mulhw r0, r0, r5
    srawi r0, r0, 6
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e8
    subf r4, r0, r5
    bl fn_80206B14
    lwz r0, 0x80(r27)
    addi r4, r25, 0x4dd3
    lfs f0, 0x0(r3)
    addi r27, r3, 0x8c
    stfs f0, 0x0(r30)
    mulhw r4, r4, r0
    addi r0, r30, 0x8c
    lfs f0, 0x4(r3)
    mr r31, r3
    stfs f0, 0x4(r30)
    cmplw r27, r0
    lfs f0, 0x8(r3)
    srawi r0, r4, 6
    stfs f0, 0x8(r30)
    srwi r4, r0, 31
    add r0, r0, r4
    lfs f0, 0xc(r3)
    add r28, r26, r0
    stfs f0, 0xc(r30)
    lfs f0, 0x10(r3)
    stfs f0, 0x10(r30)
    lfs f0, 0x14(r3)
    stfs f0, 0x14(r30)
    lfs f0, 0x18(r3)
    stfs f0, 0x18(r30)
    lfs f0, 0x1c(r3)
    stfs f0, 0x1c(r30)
    lwz r0, 0x20(r3)
    stw r0, 0x20(r30)
    lwz r0, 0x24(r3)
    stw r0, 0x24(r30)
    lfs f0, 0x28(r3)
    stfs f0, 0x28(r30)
    lfs f0, 0x2c(r3)
    stfs f0, 0x2c(r30)
    lwz r0, 0x30(r3)
    stw r0, 0x30(r30)
    lwz r0, 0x34(r3)
    stw r0, 0x34(r30)
    lwz r0, 0x3c(r3)
    lwz r4, 0x38(r3)
    stw r4, 0x38(r30)
    stw r0, 0x3c(r30)
    lwz r0, 0x44(r3)
    lwz r4, 0x40(r3)
    stw r4, 0x40(r30)
    stw r0, 0x44(r30)
    lwz r0, 0x4c(r3)
    lwz r4, 0x48(r3)
    stw r4, 0x48(r30)
    stw r0, 0x4c(r30)
    lwz r0, 0x50(r3)
    stw r0, 0x50(r30)
    lwz r0, 0x58(r3)
    lwz r4, 0x54(r3)
    stw r4, 0x54(r30)
    stw r0, 0x58(r30)
    lwz r0, 0x60(r3)
    lwz r4, 0x5c(r3)
    stw r4, 0x5c(r30)
    stw r0, 0x60(r30)
    lwz r0, 0x68(r3)
    lwz r4, 0x64(r3)
    stw r4, 0x64(r30)
    stw r0, 0x68(r30)
    lwz r0, 0x6c(r3)
    stw r0, 0x6c(r30)
    lwz r0, 0x74(r3)
    lwz r4, 0x70(r3)
    stw r4, 0x70(r30)
    stw r0, 0x74(r30)
    lwz r0, 0x78(r3)
    stw r0, 0x78(r30)
    lwz r0, 0x7c(r3)
    stw r0, 0x7c(r30)
    lwz r0, 0x80(r3)
    stw r0, 0x80(r30)
    lwz r0, 0x84(r3)
    stw r0, 0x84(r30)
    lwz r0, 0x88(r3)
    stw r0, 0x88(r30)
    beq lbl_fn_80211940_00001444
    mr r3, r27
    bl strlen
    mr r5, r3
    mr r4, r27
    addi r3, r30, 0x8c
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80211940_00001444:
    lwz r3, 0xb0(r31)
    addi r27, r31, 0xf4
    lwz r4, 0xac(r31)
    addi r0, r30, 0xf4
    stw r4, 0xac(r30)
    cmplw r27, r0
    stw r3, 0xb0(r30)
    lwz r0, 0xb4(r31)
    stw r0, 0xb4(r30)
    lwz r0, 0xb8(r31)
    stw r0, 0xb8(r30)
    lwz r0, 0xbc(r31)
    stw r0, 0xbc(r30)
    lwz r0, 0xc0(r31)
    stw r0, 0xc0(r30)
    lwz r0, 0xc8(r31)
    lwz r3, 0xc4(r31)
    stw r3, 0xc4(r30)
    stw r0, 0xc8(r30)
    lwz r0, 0xd0(r31)
    lwz r3, 0xcc(r31)
    stw r3, 0xcc(r30)
    stw r0, 0xd0(r30)
    lwz r0, 0xd8(r31)
    lwz r3, 0xd4(r31)
    stw r3, 0xd4(r30)
    stw r0, 0xd8(r30)
    lwz r0, 0xe0(r31)
    lwz r3, 0xdc(r31)
    stw r3, 0xdc(r30)
    stw r0, 0xe0(r30)
    lwz r0, 0xe8(r31)
    lwz r3, 0xe4(r31)
    stw r3, 0xe4(r30)
    stw r0, 0xe8(r30)
    lwz r0, 0xec(r31)
    stw r0, 0xec(r30)
    lwz r0, 0xf0(r31)
    stw r0, 0xf0(r30)
    beq lbl_fn_80211940_00001500
    mr r3, r27
    bl strlen
    mr r5, r3
    mr r4, r27
    addi r3, r30, 0xf4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80211940_00001500:
    addi r25, r31, 0x104
    addi r0, r30, 0x104
    cmplw r25, r0
    beq lbl_fn_80211940_0000152C
    mr r3, r25
    bl strlen
    mr r5, r3
    mr r4, r25
    addi r3, r30, 0x104
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80211940_0000152C:
    lwz r0, 0x114(r31)
    subi r3, r28, 0x1e
    stw r0, 0x114(r30)
    srawi r0, r3, 31
    andc r0, r3, r0
    lwz r5, 0x118(r31)
    cmpwi r0, 0x14
    stw r5, 0x118(r30)
    mulli r4, r28, 0x3e8
    lwz r0, 0x11c(r31)
    stw r0, 0x11c(r30)
    lwz r0, 0x120(r31)
    stw r0, 0x120(r30)
    lwz r0, 0x124(r31)
    stw r0, 0x124(r30)
    lwz r0, 0x128(r31)
    stw r0, 0x128(r30)
    lwz r0, 0x12c(r31)
    stw r0, 0x12c(r30)
    lwz r0, 0x80(r31)
    add r0, r0, r4
    stw r0, 0x80(r30)
    bge lbl_fn_80211940_00001594
    srawi r0, r3, 31
    andc r5, r3, r0
    b lbl_fn_80211940_00001598
lbl_fn_80211940_00001594:
    li r5, 0x14
lbl_fn_80211940_00001598:
    subi r3, r28, 0xf
    srawi r0, r3, 31
    andc r0, r3, r0
    cmpwi r0, 0xf
    bge lbl_fn_80211940_000015B8
    srawi r0, r3, 31
    andc r6, r3, r0
    b lbl_fn_80211940_000015BC
lbl_fn_80211940_000015B8:
    li r6, 0xf
lbl_fn_80211940_000015BC:
    cmpwi r28, 0xf
    li r4, 0xf
    bge lbl_fn_80211940_000015CC
    mr r4, r28
lbl_fn_80211940_000015CC:
    subi r3, r28, 0x32
    lfs f2, 0x0(r31)
    srawi r0, r3, 31
    lfs f1, 0x4(r31)
    andc r0, r3, r0
    lfs f0, lbl_80882EE8
    mulli r3, r0, 0x14
    fadds f1, f2, f1
    mulli r0, r5, 0x32
    fcmpo cr0, f1, f0
    add r0, r3, r0
    mulli r4, r4, 0xc8
    mulli r3, r6, 0x64
    add r3, r4, r3
    add r0, r3, r0
    ble lbl_fn_80211940_00001654
    fdivs f6, f2, f1
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r3, lbl_8073FA58@ha
    lfs f0, lbl_80882EEC
    lfd f5, lbl_8073FA58@l(r3)
    lfd f2, 0x8(r1)
    fsubs f1, f0, f6
    stw r0, 0x14(r1)
    fsubs f4, f2, f5
    lfs f3, 0x0(r30)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f5
    fmadds f0, f4, f6, f3
    stfs f0, 0x0(r30)
    lfs f0, 0x4(r30)
    fmadds f0, f2, f1, f0
    stfs f0, 0x4(r30)
lbl_fn_80211940_00001654:
    lwz r3, 0x4(r29)
    b lbl_fn_80211940_000019D8
lbl_fn_80211940_0000165C:
    addi r28, r28, 0x1
    cmplwi r28, 0x80
    blt lbl_fn_80211940_00001280
    b lbl_fn_80211940_000019B8
lbl_fn_80211940_0000166C:
    lwz r3, 0x4(r29)
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_80211940_000019B8
    li r28, 0x0
lbl_fn_80211940_00001680:
    bl fn_8020EE58
    add r3, r3, r28
    subi r3, r3, 0x80
    bl fn_8020EE60
    mr r31, r3
    lwz r3, 0x4(r25)
    bl fn_8020EFEC
    lwz r0, 0x7c(r31)
    mr r27, r3
    cmpwi r0, 0x0
    bge lbl_fn_80211940_000019AC
    cmpwi r3, 0x0
    beq lbl_fn_80211940_000019AC
    lis r25, 0x1062
    lwz r5, 0x7c(r27)
    addi r0, r25, 0x4dd3
    lwz r3, 0x78(r3)
    mulhw r0, r0, r5
    srawi r0, r0, 6
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e8
    subf r4, r0, r5
    bl fn_8020ED84
    lwz r0, 0x7c(r27)
    addi r4, r25, 0x4dd3
    lfs f0, 0x0(r3)
    addi r27, r3, 0x88
    stfs f0, 0x0(r31)
    mulhw r4, r4, r0
    addi r0, r31, 0x88
    lfs f0, 0x4(r3)
    mr r30, r3
    stfs f0, 0x4(r31)
    cmplw r27, r0
    lfs f0, 0x8(r3)
    srawi r0, r4, 6
    stfs f0, 0x8(r31)
    srwi r4, r0, 31
    add r0, r0, r4
    lfs f0, 0xc(r3)
    add r28, r26, r0
    stfs f0, 0xc(r31)
    lfs f0, 0x10(r3)
    stfs f0, 0x10(r31)
    lfs f0, 0x14(r3)
    stfs f0, 0x14(r31)
    lfs f0, 0x18(r3)
    stfs f0, 0x18(r31)
    lfs f0, 0x1c(r3)
    stfs f0, 0x1c(r31)
    lwz r0, 0x20(r3)
    stw r0, 0x20(r31)
    lwz r0, 0x24(r3)
    stw r0, 0x24(r31)
    lfs f0, 0x28(r3)
    stfs f0, 0x28(r31)
    lfs f0, 0x2c(r3)
    stfs f0, 0x2c(r31)
    lwz r0, 0x30(r3)
    stw r0, 0x30(r31)
    lwz r0, 0x34(r3)
    stw r0, 0x34(r31)
    lwz r0, 0x3c(r3)
    lwz r4, 0x38(r3)
    stw r4, 0x38(r31)
    stw r0, 0x3c(r31)
    lwz r0, 0x44(r3)
    lwz r4, 0x40(r3)
    stw r4, 0x40(r31)
    stw r0, 0x44(r31)
    lwz r0, 0x4c(r3)
    lwz r4, 0x48(r3)
    stw r4, 0x48(r31)
    stw r0, 0x4c(r31)
    lwz r0, 0x50(r3)
    stw r0, 0x50(r31)
    lwz r0, 0x58(r3)
    lwz r4, 0x54(r3)
    stw r4, 0x54(r31)
    stw r0, 0x58(r31)
    lwz r0, 0x60(r3)
    lwz r4, 0x5c(r3)
    stw r4, 0x5c(r31)
    stw r0, 0x60(r31)
    lwz r0, 0x68(r3)
    lwz r4, 0x64(r3)
    stw r4, 0x64(r31)
    stw r0, 0x68(r31)
    lwz r0, 0x6c(r3)
    stw r0, 0x6c(r31)
    lwz r0, 0x74(r3)
    lwz r4, 0x70(r3)
    stw r4, 0x70(r31)
    stw r0, 0x74(r31)
    lwz r0, 0x78(r3)
    stw r0, 0x78(r31)
    lwz r0, 0x7c(r3)
    stw r0, 0x7c(r31)
    lwz r0, 0x80(r3)
    stw r0, 0x80(r31)
    lwz r0, 0x84(r3)
    stw r0, 0x84(r31)
    beq lbl_fn_80211940_0000183C
    mr r3, r27
    bl strlen
    mr r5, r3
    mr r4, r27
    addi r3, r31, 0x88
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80211940_0000183C:
    lwz r0, 0xa8(r30)
    addi r25, r30, 0xc0
    stw r0, 0xa8(r31)
    addi r0, r31, 0xc0
    cmplw r25, r0
    lwz r0, 0xb0(r30)
    lwz r3, 0xac(r30)
    stw r3, 0xac(r31)
    stw r0, 0xb0(r31)
    lwz r0, 0xb8(r30)
    lwz r3, 0xb4(r30)
    stw r3, 0xb4(r31)
    stw r0, 0xb8(r31)
    lwz r0, 0xbc(r30)
    stw r0, 0xbc(r31)
    beq lbl_fn_80211940_00001898
    mr r3, r25
    bl strlen
    mr r5, r3
    mr r4, r25
    addi r3, r31, 0xc0
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80211940_00001898:
    addi r25, r30, 0xd0
    addi r0, r31, 0xd0
    cmplw r25, r0
    beq lbl_fn_80211940_000018C4
    mr r3, r25
    bl strlen
    mr r5, r3
    mr r4, r25
    addi r3, r31, 0xd0
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80211940_000018C4:
    lwz r0, 0xe0(r30)
    mulli r27, r28, 0x1e
    stw r0, 0xe0(r31)
    mr r3, r30
    lwz r4, 0xe8(r30)
    mulli r0, r28, 0x3e8
    lwz r5, 0xe4(r30)
    stw r5, 0xe4(r31)
    stw r4, 0xe8(r31)
    lwz r4, 0xf0(r30)
    lwz r5, 0xec(r30)
    stw r5, 0xec(r31)
    stw r4, 0xf0(r31)
    lwz r4, 0xf8(r30)
    lwz r5, 0xf4(r30)
    stw r5, 0xf4(r31)
    stw r4, 0xf8(r31)
    lwz r4, 0x100(r30)
    lwz r5, 0xfc(r30)
    stw r5, 0xfc(r31)
    stw r4, 0x100(r31)
    lwz r4, 0x108(r30)
    lwz r5, 0x104(r30)
    stw r5, 0x104(r31)
    stw r4, 0x108(r31)
    lwz r4, 0x7c(r30)
    add r0, r4, r0
    stw r0, 0x7c(r31)
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_80211940_00001944
    add r27, r27, r27
lbl_fn_80211940_00001944:
    lfs f2, 0x8(r30)
    lfs f1, 0xc(r30)
    lfs f0, lbl_80882EE8
    fadds f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80211940_000019A4
    fdivs f6, f2, f1
    xoris r0, r27, 0x8000
    stw r0, 0xc(r1)
    lis r3, lbl_8073FA58@ha
    lfs f0, lbl_80882EEC
    lfd f5, lbl_8073FA58@l(r3)
    lfd f2, 0x8(r1)
    fsubs f1, f0, f6
    stw r0, 0x14(r1)
    fsubs f4, f2, f5
    lfs f3, 0x8(r31)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f5
    fmadds f0, f4, f6, f3
    stfs f0, 0x8(r31)
    lfs f0, 0xc(r31)
    fmadds f0, f2, f1, f0
    stfs f0, 0xc(r31)
lbl_fn_80211940_000019A4:
    lwz r3, 0x4(r29)
    b lbl_fn_80211940_000019D8
lbl_fn_80211940_000019AC:
    addi r28, r28, 0x1
    cmplwi r28, 0x80
    blt lbl_fn_80211940_00001680
lbl_fn_80211940_000019B8:
    li r0, -0x1
    stw r0, 0x4(r29)
    b lbl_fn_80211940_000019D4
lbl_fn_80211940_000019C4:
    addi r8, r8, 0x1
    addi r4, r4, 0x138
    addi r30, r30, 0x1
    bdnz lbl_fn_80211940_00000FDC
lbl_fn_80211940_000019D4:
    li r3, 0x0
lbl_fn_80211940_000019D8:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
