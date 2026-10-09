#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_80013F78(void);
extern void fn_800844D8(void);
extern void fn_800E1D5C(void);
extern void fn_802407CC(void);
extern void fn_802411B8(void);
extern void fn_80241CB8(void);
extern void fn_80242FF4(void);
extern void fn_80243514(void);
extern void fn_8067E558(void);
extern void fn_8067E570(void);
extern void fn_8068B39C(void);
extern void fn_806920C0(void);
extern void fn_8069293C(void);
extern void fn_806952C4(void);

/* External data declarations */
extern u8 lbl_80783CA8[];

/* Small data declarations */
extern u32 lbl_8087DC10;
extern u32 lbl_8087DC14;
extern u32 lbl_80880390;
extern u32 lbl_808803C0;

/* Function declarations */
void fn_8023F5A4(void);
void fn_8023F5E0(void);
void fn_8023FD90(void);

asm void fn_8023F5A4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    extsb r6, r6
    stw r0, 0x14(r1)
    lwz r0, 0x0(r4)
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8023F5E0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r3, r1, 0x28
    stfd f31, 0x88(r1)
    fmr f31, f1
    stmw r21, 0x5c(r1)
    mr r25, r5
    mr r29, r4
    mr r26, r6
    mr r4, r25
    bl fn_800E1D5C
    lwz r24, lbl_808803C0
    cmpwi r24, 0x0
    bne lbl_fn_8023F5E0_00000088
    lwz r3, lbl_80880390
    addi r24, r3, 0x1
    stw r24, lbl_80880390
    stw r24, lbl_808803C0
lbl_fn_8023F5E0_00000088:
    lwz r3, 0x28(r1)
    lwz r0, 0x4(r3)
    cmplw r24, r0
    bge lbl_fn_8023F5E0_000000AC
    lwz r3, 0x0(r3)
    slwi r0, r24, 2
    lwzx r28, r3, r0
    cmpwi r28, 0x0
    bne lbl_fn_8023F5E0_00000108
lbl_fn_8023F5E0_000000AC:
    li r3, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8023F5E0_000000D4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8069293C
    mr r4, r3
lbl_fn_8023F5E0_000000D4:
    lwz r5, lbl_808803C0
    lwz r3, 0x28(r1)
    cmpwi r5, 0x0
    bne lbl_fn_8023F5E0_000000F4
    lwz r5, lbl_80880390
    addi r5, r5, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_808803C0
lbl_fn_8023F5E0_000000F4:
    bl fn_806920C0
    lwz r3, 0x28(r1)
    slwi r0, r24, 2
    lwz r3, 0x0(r3)
    lwzx r28, r3, r0
lbl_fn_8023F5E0_00000108:
    addic. r0, r1, 0x28
    beq lbl_fn_8023F5E0_00000120
    lwz r3, 0x2c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8023F5E0_00000120
    bl fn_806952C4
lbl_fn_8023F5E0_00000120:
    fmr f1, f31
    li r27, 0x0
    bl fn_8067E558
    neg r0, r3
    or r0, r0, r3
    srwi. r3, r0, 31
    bne lbl_fn_8023F5E0_0000016C
    lhz r0, 0x30(r25)
    rlwinm. r0, r0, 0, 20, 20
    beq lbl_fn_8023F5E0_0000016C
    lwz r12, 0x0(r28)
    mr r3, r28
    li r27, 0x1
    li r4, 0x2b
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    stb r3, 0x18(r1)
    b lbl_fn_8023F5E0_00000198
lbl_fn_8023F5E0_0000016C:
    cmpwi r3, 0x0
    beq lbl_fn_8023F5E0_00000198
    lwz r12, 0x0(r28)
    mr r3, r28
    li r27, 0x1
    li r4, 0x2d
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    stb r3, 0x18(r1)
    fneg f31, f31
lbl_fn_8023F5E0_00000198:
    fmr f1, f31
    li r0, 0x0
    stw r0, 0x48(r1)
    addi r24, r1, 0x48
    stw r0, 0x4c(r1)
    stw r0, 0x50(r1)
    bl fn_8067E570
    cmpwi r3, 0x2
    ble lbl_fn_8023F5E0_00000214
    lhz r0, 0x30(r25)
    andi. r0, r0, 0x104
    cmpwi r0, 0x4
    beq lbl_fn_8023F5E0_000001D8
    cmpwi r0, 0x100
    beq lbl_fn_8023F5E0_000001EC
    b lbl_fn_8023F5E0_00000200
lbl_fn_8023F5E0_000001D8:
    fmr f1, f31
    mr r3, r25
    mr r4, r24
    bl fn_80241CB8
    b lbl_fn_8023F5E0_000004B0
lbl_fn_8023F5E0_000001EC:
    fmr f1, f31
    mr r3, r25
    mr r4, r24
    bl fn_802411B8
    b lbl_fn_8023F5E0_000004B0
lbl_fn_8023F5E0_00000200:
    fmr f1, f31
    mr r3, r25
    mr r4, r24
    bl fn_802407CC
    b lbl_fn_8023F5E0_000004B0
lbl_fn_8023F5E0_00000214:
    fmr f1, f31
    bl fn_8067E570
    cmpwi r3, 0x1
    bne lbl_fn_8023F5E0_000002D4
    addi r3, r1, 0x30
    la r4, lbl_8087DC14
    li r5, 0x0
    bl fn_80243514
    lwz r0, 0x48(r1)
    srwi. r3, r0, 31
    bne lbl_fn_8023F5E0_00000264
    lwz r4, 0x30(r1)
    srwi. r0, r4, 31
    bne lbl_fn_8023F5E0_00000264
    lwz r3, 0x34(r1)
    lwz r0, 0x38(r1)
    stw r4, 0x48(r1)
    stw r3, 0x4c(r1)
    stw r0, 0x50(r1)
    b lbl_fn_8023F5E0_000002BC
lbl_fn_8023F5E0_00000264:
    cmpwi r3, 0x0
    beq lbl_fn_8023F5E0_00000274
    lwz r5, 0x4c(r1)
    b lbl_fn_8023F5E0_0000027C
lbl_fn_8023F5E0_00000274:
    lbz r0, 0x48(r1)
    clrlwi r5, r0, 25
lbl_fn_8023F5E0_0000027C:
    lwz r0, 0x30(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8023F5E0_00000298
    lbz r0, 0x30(r1)
    addi r6, r1, 0x31
    clrlwi r4, r0, 25
    b lbl_fn_8023F5E0_000002A0
lbl_fn_8023F5E0_00000298:
    lwz r6, 0x38(r1)
    lwz r4, 0x34(r1)
lbl_fn_8023F5E0_000002A0:
    lbz r0, 0xc(r1)
    add r7, r6, r4
    stb r0, 0x8(r1)
    addi r3, r1, 0x48
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_8023F5E0_000002BC:
    lwz r0, 0x30(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8023F5E0_00000380
    lwz r3, 0x38(r1)
    bl dtor_80084684
    b lbl_fn_8023F5E0_00000380
lbl_fn_8023F5E0_000002D4:
    addi r3, r1, 0x3c
    la r4, lbl_8087DC10
    li r5, 0x0
    bl fn_80243514
    lwz r0, 0x48(r1)
    srwi. r3, r0, 31
    bne lbl_fn_8023F5E0_00000314
    lwz r4, 0x3c(r1)
    srwi. r0, r4, 31
    bne lbl_fn_8023F5E0_00000314
    lwz r3, 0x40(r1)
    lwz r0, 0x44(r1)
    stw r4, 0x48(r1)
    stw r3, 0x4c(r1)
    stw r0, 0x50(r1)
    b lbl_fn_8023F5E0_0000036C
lbl_fn_8023F5E0_00000314:
    cmpwi r3, 0x0
    beq lbl_fn_8023F5E0_00000324
    lwz r5, 0x4c(r1)
    b lbl_fn_8023F5E0_0000032C
lbl_fn_8023F5E0_00000324:
    lbz r0, 0x48(r1)
    clrlwi r5, r0, 25
lbl_fn_8023F5E0_0000032C:
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8023F5E0_00000348
    lbz r0, 0x3c(r1)
    addi r6, r1, 0x3d
    clrlwi r4, r0, 25
    b lbl_fn_8023F5E0_00000350
lbl_fn_8023F5E0_00000348:
    lwz r6, 0x44(r1)
    lwz r4, 0x40(r1)
lbl_fn_8023F5E0_00000350:
    lbz r0, 0x14(r1)
    add r7, r6, r4
    stb r0, 0x10(r1)
    addi r3, r1, 0x48
    addi r8, r1, 0x10
    li r4, 0x0
    bl fn_80013F78
lbl_fn_8023F5E0_0000036C:
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8023F5E0_00000380
    lwz r3, 0x44(r1)
    bl dtor_80084684
lbl_fn_8023F5E0_00000380:
    lhz r0, 0x30(r25)
    rlwinm. r0, r0, 0, 17, 17
    beq lbl_fn_8023F5E0_000004B0
    mr r4, r25
    addi r3, r1, 0x20
    bl fn_800E1D5C
    lwz r24, lbl_808803C0
    cmpwi r24, 0x0
    bne lbl_fn_8023F5E0_000003B4
    lwz r3, lbl_80880390
    addi r24, r3, 0x1
    stw r24, lbl_80880390
    stw r24, lbl_808803C0
lbl_fn_8023F5E0_000003B4:
    lwz r3, 0x20(r1)
    lwz r0, 0x4(r3)
    cmplw r24, r0
    bge lbl_fn_8023F5E0_000003D8
    lwz r3, 0x0(r3)
    slwi r0, r24, 2
    lwzx r28, r3, r0
    cmpwi r28, 0x0
    bne lbl_fn_8023F5E0_00000434
lbl_fn_8023F5E0_000003D8:
    li r3, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8023F5E0_00000400
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8069293C
    mr r4, r3
lbl_fn_8023F5E0_00000400:
    lwz r5, lbl_808803C0
    lwz r3, 0x20(r1)
    cmpwi r5, 0x0
    bne lbl_fn_8023F5E0_00000420
    lwz r5, lbl_80880390
    addi r5, r5, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_808803C0
lbl_fn_8023F5E0_00000420:
    bl fn_806920C0
    lwz r3, 0x20(r1)
    slwi r0, r24, 2
    lwz r3, 0x0(r3)
    lwzx r28, r3, r0
lbl_fn_8023F5E0_00000434:
    addic. r0, r1, 0x20
    beq lbl_fn_8023F5E0_0000044C
    lwz r3, 0x24(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8023F5E0_0000044C
    bl fn_806952C4
lbl_fn_8023F5E0_0000044C:
    lwz r0, 0x48(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi. r3, r0, 5
    beq lbl_fn_8023F5E0_0000046C
    lbz r0, 0x48(r1)
    clrlwi r4, r0, 25
    b lbl_fn_8023F5E0_00000470
lbl_fn_8023F5E0_0000046C:
    lwz r4, 0x4c(r1)
lbl_fn_8023F5E0_00000470:
    cmpwi r3, 0x0
    beq lbl_fn_8023F5E0_00000480
    addi r0, r1, 0x49
    b lbl_fn_8023F5E0_00000484
lbl_fn_8023F5E0_00000480:
    lwz r0, 0x50(r1)
lbl_fn_8023F5E0_00000484:
    cmpwi r3, 0x0
    mr r3, r28
    add r5, r0, r4
    beq lbl_fn_8023F5E0_0000049C
    addi r4, r1, 0x49
    b lbl_fn_8023F5E0_000004A0
lbl_fn_8023F5E0_0000049C:
    lwz r4, 0x50(r1)
lbl_fn_8023F5E0_000004A0:
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_8023F5E0_000004B0:
    lwz r0, 0x48(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi. r3, r0, 5
    beq lbl_fn_8023F5E0_000004D0
    lbz r0, 0x48(r1)
    clrlwi r31, r0, 25
    b lbl_fn_8023F5E0_000004D4
lbl_fn_8023F5E0_000004D0:
    lwz r31, 0x4c(r1)
lbl_fn_8023F5E0_000004D4:
    cmpwi r3, 0x0
    beq lbl_fn_8023F5E0_000004E4
    addi r28, r1, 0x49
    b lbl_fn_8023F5E0_000004E8
lbl_fn_8023F5E0_000004E4:
    lwz r28, 0x50(r1)
lbl_fn_8023F5E0_000004E8:
    lwz r3, 0x2c(r25)
    add r0, r27, r31
    lwz r24, 0x0(r29)
    li r29, 0x0
    cmpw r3, r0
    ble lbl_fn_8023F5E0_00000504
    subf r29, r0, r3
lbl_fn_8023F5E0_00000504:
    lhz r0, 0x30(r25)
    andi. r30, r0, 0xb0
    cmplwi r30, 0x20
    beq lbl_fn_8023F5E0_00000598
    cmplwi r30, 0x10
    beq lbl_fn_8023F5E0_00000598
    cmpwi r29, 0x0
    li r22, 0x0
    ble lbl_fn_8023F5E0_00000598
    b lbl_fn_8023F5E0_00000590
lbl_fn_8023F5E0_0000052C:
    cmpwi r24, 0x0
    li r23, 0x0
    beq lbl_fn_8023F5E0_00000580
    lwz r3, 0x14(r24)
    lwz r0, 0x18(r24)
    cmplw r3, r0
    bge lbl_fn_8023F5E0_0000055C
    stb r26, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r24)
    lbz r3, 0x0(r3)
    b lbl_fn_8023F5E0_00000574
lbl_fn_8023F5E0_0000055C:
    lwz r12, 0x0(r24)
    mr r3, r24
    clrlwi r4, r26, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023F5E0_00000574:
    cmpwi r3, -0x1
    bne lbl_fn_8023F5E0_00000580
    li r23, 0x1
lbl_fn_8023F5E0_00000580:
    cmpwi r23, 0x0
    beq lbl_fn_8023F5E0_0000058C
    li r24, 0x0
lbl_fn_8023F5E0_0000058C:
    addi r22, r22, 0x1
lbl_fn_8023F5E0_00000590:
    cmpw r22, r29
    blt lbl_fn_8023F5E0_0000052C
lbl_fn_8023F5E0_00000598:
    cmpwi r27, 0x0
    addi r22, r1, 0x18
    li r23, 0x0
    ble lbl_fn_8023F5E0_00000624
    b lbl_fn_8023F5E0_0000061C
lbl_fn_8023F5E0_000005AC:
    lbz r0, 0x0(r22)
    cmpwi r24, 0x0
    li r21, 0x0
    addi r22, r22, 0x1
    extsb r4, r0
    beq lbl_fn_8023F5E0_0000060C
    lwz r3, 0x14(r24)
    lwz r0, 0x18(r24)
    cmplw r3, r0
    bge lbl_fn_8023F5E0_000005E8
    stb r4, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r24)
    lbz r3, 0x0(r3)
    b lbl_fn_8023F5E0_00000600
lbl_fn_8023F5E0_000005E8:
    lwz r12, 0x0(r24)
    mr r3, r24
    clrlwi r4, r4, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023F5E0_00000600:
    cmpwi r3, -0x1
    bne lbl_fn_8023F5E0_0000060C
    li r21, 0x1
lbl_fn_8023F5E0_0000060C:
    cmpwi r21, 0x0
    beq lbl_fn_8023F5E0_00000618
    li r24, 0x0
lbl_fn_8023F5E0_00000618:
    addi r23, r23, 0x1
lbl_fn_8023F5E0_0000061C:
    cmpw r23, r27
    blt lbl_fn_8023F5E0_000005AC
lbl_fn_8023F5E0_00000624:
    cmplwi r30, 0x10
    bne lbl_fn_8023F5E0_000006A8
    cmpwi r29, 0x0
    li r27, 0x0
    ble lbl_fn_8023F5E0_000006A8
    b lbl_fn_8023F5E0_000006A0
lbl_fn_8023F5E0_0000063C:
    cmpwi r24, 0x0
    li r21, 0x0
    beq lbl_fn_8023F5E0_00000690
    lwz r3, 0x14(r24)
    lwz r0, 0x18(r24)
    cmplw r3, r0
    bge lbl_fn_8023F5E0_0000066C
    stb r26, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r24)
    lbz r3, 0x0(r3)
    b lbl_fn_8023F5E0_00000684
lbl_fn_8023F5E0_0000066C:
    lwz r12, 0x0(r24)
    mr r3, r24
    clrlwi r4, r26, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023F5E0_00000684:
    cmpwi r3, -0x1
    bne lbl_fn_8023F5E0_00000690
    li r21, 0x1
lbl_fn_8023F5E0_00000690:
    cmpwi r21, 0x0
    beq lbl_fn_8023F5E0_0000069C
    li r24, 0x0
lbl_fn_8023F5E0_0000069C:
    addi r27, r27, 0x1
lbl_fn_8023F5E0_000006A0:
    cmpw r27, r29
    blt lbl_fn_8023F5E0_0000063C
lbl_fn_8023F5E0_000006A8:
    cmpwi r31, 0x0
    li r27, 0x0
    ble lbl_fn_8023F5E0_00000730
    b lbl_fn_8023F5E0_00000728
lbl_fn_8023F5E0_000006B8:
    lbz r0, 0x0(r28)
    cmpwi r24, 0x0
    li r21, 0x0
    addi r28, r28, 0x1
    extsb r4, r0
    beq lbl_fn_8023F5E0_00000718
    lwz r3, 0x14(r24)
    lwz r0, 0x18(r24)
    cmplw r3, r0
    bge lbl_fn_8023F5E0_000006F4
    stb r4, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r24)
    lbz r3, 0x0(r3)
    b lbl_fn_8023F5E0_0000070C
lbl_fn_8023F5E0_000006F4:
    lwz r12, 0x0(r24)
    mr r3, r24
    clrlwi r4, r4, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023F5E0_0000070C:
    cmpwi r3, -0x1
    bne lbl_fn_8023F5E0_00000718
    li r21, 0x1
lbl_fn_8023F5E0_00000718:
    cmpwi r21, 0x0
    beq lbl_fn_8023F5E0_00000724
    li r24, 0x0
lbl_fn_8023F5E0_00000724:
    addi r27, r27, 0x1
lbl_fn_8023F5E0_00000728:
    cmpw r27, r31
    blt lbl_fn_8023F5E0_000006B8
lbl_fn_8023F5E0_00000730:
    cmplwi r30, 0x20
    bne lbl_fn_8023F5E0_000007B4
    cmpwi r29, 0x0
    li r27, 0x0
    ble lbl_fn_8023F5E0_000007B4
    b lbl_fn_8023F5E0_000007AC
lbl_fn_8023F5E0_00000748:
    cmpwi r24, 0x0
    li r21, 0x0
    beq lbl_fn_8023F5E0_0000079C
    lwz r3, 0x14(r24)
    lwz r0, 0x18(r24)
    cmplw r3, r0
    bge lbl_fn_8023F5E0_00000778
    stb r26, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r24)
    lbz r3, 0x0(r3)
    b lbl_fn_8023F5E0_00000790
lbl_fn_8023F5E0_00000778:
    lwz r12, 0x0(r24)
    mr r3, r24
    clrlwi r4, r26, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023F5E0_00000790:
    cmpwi r3, -0x1
    bne lbl_fn_8023F5E0_0000079C
    li r21, 0x1
lbl_fn_8023F5E0_0000079C:
    cmpwi r21, 0x0
    beq lbl_fn_8023F5E0_000007A8
    li r24, 0x0
lbl_fn_8023F5E0_000007A8:
    addi r27, r27, 0x1
lbl_fn_8023F5E0_000007AC:
    cmpw r27, r29
    blt lbl_fn_8023F5E0_00000748
lbl_fn_8023F5E0_000007B4:
    li r0, 0x0
    stw r0, 0x2c(r25)
    lwz r0, 0x48(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8023F5E0_000007D0
    lwz r3, 0x50(r1)
    bl dtor_80084684
lbl_fn_8023F5E0_000007D0:
    mr r3, r24
    lfd f31, 0x88(r1)
    lmw r21, 0x5c(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8023FD90(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lis r3, 0x1
    stw r0, 0x84(r1)
    subi r0, r3, 0x4b
    subi r3, r3, 0xb1
    stmw r24, 0x60(r1)
    mr r27, r5
    mr r26, r4
    mr r28, r6
    stw r5, 0x20(r1)
    mr r29, r7
    mr r4, r27
    lhz r8, 0x30(r5)
    lwz r12, 0x2c(r5)
    and r0, r8, r0
    lhz r10, 0x30(r5)
    ori r0, r0, 0x208
    lwz r11, 0x28(r5)
    and r0, r0, r3
    lbz r9, 0x33(r5)
    ori r8, r0, 0x10
    stw r12, 0x24(r1)
    li r0, 0xa
    addi r3, r1, 0x18
    stw r11, 0x28(r1)
    sth r10, 0x2c(r1)
    stb r9, 0x2e(r1)
    sth r8, 0x30(r5)
    stw r0, 0x2c(r5)
    bl fn_800E1D5C
    lwz r25, lbl_808803C0
    cmpwi r25, 0x0
    bne lbl_fn_8023FD90_00000884
    lwz r3, lbl_80880390
    addi r25, r3, 0x1
    stw r25, lbl_80880390
    stw r25, lbl_808803C0
lbl_fn_8023FD90_00000884:
    lwz r3, 0x18(r1)
    lwz r0, 0x4(r3)
    cmplw r25, r0
    bge lbl_fn_8023FD90_000008A8
    lwz r3, 0x0(r3)
    slwi r0, r25, 2
    lwzx r30, r3, r0
    cmpwi r30, 0x0
    bne lbl_fn_8023FD90_00000904
lbl_fn_8023FD90_000008A8:
    li r3, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8023FD90_000008D0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8069293C
    mr r4, r3
lbl_fn_8023FD90_000008D0:
    lwz r5, lbl_808803C0
    lwz r3, 0x18(r1)
    cmpwi r5, 0x0
    bne lbl_fn_8023FD90_000008F0
    lwz r5, lbl_80880390
    addi r5, r5, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_808803C0
lbl_fn_8023FD90_000008F0:
    bl fn_806920C0
    lwz r3, 0x18(r1)
    slwi r0, r25, 2
    lwz r3, 0x0(r3)
    lwzx r30, r3, r0
lbl_fn_8023FD90_00000904:
    addic. r0, r1, 0x18
    beq lbl_fn_8023FD90_0000091C
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8023FD90_0000091C
    bl fn_806952C4
lbl_fn_8023FD90_0000091C:
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x30
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    mr r31, r3
    mr r4, r27
    addi r3, r1, 0x10
    li r30, 0x0
    bl fn_800E1D5C
    lwz r25, lbl_808803C0
    cmpwi r25, 0x0
    bne lbl_fn_8023FD90_00000964
    lwz r3, lbl_80880390
    addi r25, r3, 0x1
    stw r25, lbl_80880390
    stw r25, lbl_808803C0
lbl_fn_8023FD90_00000964:
    lwz r3, 0x10(r1)
    lwz r0, 0x4(r3)
    cmplw r25, r0
    bge lbl_fn_8023FD90_00000988
    lwz r3, 0x0(r3)
    slwi r0, r25, 2
    lwzx r24, r3, r0
    cmpwi r24, 0x0
    bne lbl_fn_8023FD90_000009E4
lbl_fn_8023FD90_00000988:
    li r3, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8023FD90_000009B0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8069293C
    mr r4, r3
lbl_fn_8023FD90_000009B0:
    lwz r5, lbl_808803C0
    lwz r3, 0x10(r1)
    cmpwi r5, 0x0
    bne lbl_fn_8023FD90_000009D0
    lwz r5, lbl_80880390
    addi r5, r5, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_808803C0
lbl_fn_8023FD90_000009D0:
    bl fn_806920C0
    lwz r3, 0x10(r1)
    slwi r0, r25, 2
    lwz r3, 0x0(r3)
    lwzx r24, r3, r0
lbl_fn_8023FD90_000009E4:
    addic. r0, r1, 0x10
    beq lbl_fn_8023FD90_000009FC
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8023FD90_000009FC
    bl fn_806952C4
lbl_fn_8023FD90_000009FC:
    lhz r0, 0x30(r27)
    rlwinm. r0, r0, 0, 22, 22
    beq lbl_fn_8023FD90_00000A70
    lwz r12, 0x0(r24)
    mr r3, r24
    li r4, 0x30
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    stb r3, 0x8(r1)
    lhz r0, 0x30(r27)
    rlwinm. r0, r0, 0, 17, 17
    beq lbl_fn_8023FD90_00000A50
    lwz r12, 0x0(r24)
    mr r3, r24
    li r4, 0x58
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    stb r3, 0x9(r1)
    b lbl_fn_8023FD90_00000A6C
lbl_fn_8023FD90_00000A50:
    lwz r12, 0x0(r24)
    mr r3, r24
    li r4, 0x78
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    stb r3, 0x9(r1)
lbl_fn_8023FD90_00000A6C:
    li r30, 0x2
lbl_fn_8023FD90_00000A70:
    mr r3, r27
    mr r4, r29
    mr r6, r24
    addi r5, r1, 0x3c
    li r7, 0x0
    bl fn_80242FF4
    lwz r6, 0x2c(r27)
    add r0, r30, r3
    addi r5, r1, 0x30
    li r4, 0x0
    cmpw r6, r0
    ble lbl_fn_8023FD90_00000AA4
    subf r4, r0, r6
lbl_fn_8023FD90_00000AA4:
    lhz r0, 0x30(r27)
    andi. r0, r0, 0xb0
    cmplwi r0, 0x20
    beq lbl_fn_8023FD90_00000B54
    cmplwi r0, 0x10
    beq lbl_fn_8023FD90_00000B54
    cmpwi cr1, r4, 0x0
    li r7, 0x0
    ble cr1, lbl_fn_8023FD90_00000B54
    cmpwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_8023FD90_00000B38
    li r9, 0x0
    blt cr1, lbl_fn_8023FD90_00000AF0
    lis r6, 0x8000
    subi r6, r6, 0x2
    cmpw r4, r6
    bgt lbl_fn_8023FD90_00000AF0
    li r9, 0x1
lbl_fn_8023FD90_00000AF0:
    cmpwi r9, 0x0
    beq lbl_fn_8023FD90_00000B38
    addi r6, r8, 0x7
    srwi r6, r6, 3
    mtctr r6
    cmpwi r8, 0x0
    ble lbl_fn_8023FD90_00000B38
lbl_fn_8023FD90_00000B0C:
    stb r31, 0x0(r5)
    addi r7, r7, 0x8
    stb r31, 0x1(r5)
    stb r31, 0x2(r5)
    stb r31, 0x3(r5)
    stb r31, 0x4(r5)
    stb r31, 0x5(r5)
    stb r31, 0x6(r5)
    stb r31, 0x7(r5)
    addi r5, r5, 0x8
    bdnz lbl_fn_8023FD90_00000B0C
lbl_fn_8023FD90_00000B38:
    subf r6, r7, r4
    mtctr r6
    cmpw r7, r4
    bge lbl_fn_8023FD90_00000B54
lbl_fn_8023FD90_00000B48:
    stb r31, 0x0(r5)
    addi r5, r5, 0x1
    bdnz lbl_fn_8023FD90_00000B48
lbl_fn_8023FD90_00000B54:
    cmpwi cr1, r30, 0x0
    addi r7, r1, 0x8
    li r8, 0x0
    ble cr1, lbl_fn_8023FD90_00000C1C
    cmpwi r30, 0x8
    subi r9, r30, 0x8
    ble lbl_fn_8023FD90_00000BF8
    li r10, 0x0
    blt cr1, lbl_fn_8023FD90_00000B8C
    lis r6, 0x8000
    subi r6, r6, 0x2
    cmpw r30, r6
    bgt lbl_fn_8023FD90_00000B8C
    li r10, 0x1
lbl_fn_8023FD90_00000B8C:
    cmpwi r10, 0x0
    beq lbl_fn_8023FD90_00000BF8
    addi r6, r9, 0x7
    srwi r6, r6, 3
    mtctr r6
    cmpwi r9, 0x0
    ble lbl_fn_8023FD90_00000BF8
lbl_fn_8023FD90_00000BA8:
    lbz r6, 0x0(r7)
    addi r8, r8, 0x8
    stb r6, 0x0(r5)
    lbz r6, 0x1(r7)
    stb r6, 0x1(r5)
    lbz r6, 0x2(r7)
    stb r6, 0x2(r5)
    lbz r6, 0x3(r7)
    stb r6, 0x3(r5)
    lbz r6, 0x4(r7)
    stb r6, 0x4(r5)
    lbz r6, 0x5(r7)
    stb r6, 0x5(r5)
    lbz r6, 0x6(r7)
    stb r6, 0x6(r5)
    lbz r6, 0x7(r7)
    addi r7, r7, 0x8
    stb r6, 0x7(r5)
    addi r5, r5, 0x8
    bdnz lbl_fn_8023FD90_00000BA8
lbl_fn_8023FD90_00000BF8:
    subf r6, r8, r30
    mtctr r6
    cmpw r8, r30
    bge lbl_fn_8023FD90_00000C1C
lbl_fn_8023FD90_00000C08:
    lbz r6, 0x0(r7)
    addi r7, r7, 0x1
    stb r6, 0x0(r5)
    addi r5, r5, 0x1
    bdnz lbl_fn_8023FD90_00000C08
lbl_fn_8023FD90_00000C1C:
    cmplwi r0, 0x10
    bne lbl_fn_8023FD90_00000CBC
    cmpwi cr1, r4, 0x0
    li r7, 0x0
    ble cr1, lbl_fn_8023FD90_00000CBC
    cmpwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_8023FD90_00000CA0
    li r9, 0x0
    blt cr1, lbl_fn_8023FD90_00000C58
    lis r6, 0x8000
    subi r6, r6, 0x2
    cmpw r4, r6
    bgt lbl_fn_8023FD90_00000C58
    li r9, 0x1
lbl_fn_8023FD90_00000C58:
    cmpwi r9, 0x0
    beq lbl_fn_8023FD90_00000CA0
    addi r6, r8, 0x7
    srwi r6, r6, 3
    mtctr r6
    cmpwi r8, 0x0
    ble lbl_fn_8023FD90_00000CA0
lbl_fn_8023FD90_00000C74:
    stb r31, 0x0(r5)
    addi r7, r7, 0x8
    stb r31, 0x1(r5)
    stb r31, 0x2(r5)
    stb r31, 0x3(r5)
    stb r31, 0x4(r5)
    stb r31, 0x5(r5)
    stb r31, 0x6(r5)
    stb r31, 0x7(r5)
    addi r5, r5, 0x8
    bdnz lbl_fn_8023FD90_00000C74
lbl_fn_8023FD90_00000CA0:
    subf r6, r7, r4
    mtctr r6
    cmpw r7, r4
    bge lbl_fn_8023FD90_00000CBC
lbl_fn_8023FD90_00000CB0:
    stb r31, 0x0(r5)
    addi r5, r5, 0x1
    bdnz lbl_fn_8023FD90_00000CB0
lbl_fn_8023FD90_00000CBC:
    cmpwi cr1, r3, 0x0
    addi r7, r1, 0x3c
    li r8, 0x0
    ble cr1, lbl_fn_8023FD90_00000D84
    cmpwi r3, 0x8
    subi r9, r3, 0x8
    ble lbl_fn_8023FD90_00000D60
    li r10, 0x0
    blt cr1, lbl_fn_8023FD90_00000CF4
    lis r6, 0x8000
    subi r6, r6, 0x2
    cmpw r3, r6
    bgt lbl_fn_8023FD90_00000CF4
    li r10, 0x1
lbl_fn_8023FD90_00000CF4:
    cmpwi r10, 0x0
    beq lbl_fn_8023FD90_00000D60
    addi r6, r9, 0x7
    srwi r6, r6, 3
    mtctr r6
    cmpwi r9, 0x0
    ble lbl_fn_8023FD90_00000D60
lbl_fn_8023FD90_00000D10:
    lbz r6, 0x0(r7)
    addi r8, r8, 0x8
    stb r6, 0x0(r5)
    lbz r6, 0x1(r7)
    stb r6, 0x1(r5)
    lbz r6, 0x2(r7)
    stb r6, 0x2(r5)
    lbz r6, 0x3(r7)
    stb r6, 0x3(r5)
    lbz r6, 0x4(r7)
    stb r6, 0x4(r5)
    lbz r6, 0x5(r7)
    stb r6, 0x5(r5)
    lbz r6, 0x6(r7)
    stb r6, 0x6(r5)
    lbz r6, 0x7(r7)
    addi r7, r7, 0x8
    stb r6, 0x7(r5)
    addi r5, r5, 0x8
    bdnz lbl_fn_8023FD90_00000D10
lbl_fn_8023FD90_00000D60:
    subf r6, r8, r3
    mtctr r6
    cmpw r8, r3
    bge lbl_fn_8023FD90_00000D84
lbl_fn_8023FD90_00000D70:
    lbz r3, 0x0(r7)
    addi r7, r7, 0x1
    stb r3, 0x0(r5)
    addi r5, r5, 0x1
    bdnz lbl_fn_8023FD90_00000D70
lbl_fn_8023FD90_00000D84:
    cmplwi r0, 0x20
    bne lbl_fn_8023FD90_00000E24
    cmpwi cr1, r4, 0x0
    li r6, 0x0
    ble cr1, lbl_fn_8023FD90_00000E24
    cmpwi r4, 0x8
    subi r7, r4, 0x8
    ble lbl_fn_8023FD90_00000E08
    li r8, 0x0
    blt cr1, lbl_fn_8023FD90_00000DC0
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r4, r0
    bgt lbl_fn_8023FD90_00000DC0
    li r8, 0x1
lbl_fn_8023FD90_00000DC0:
    cmpwi r8, 0x0
    beq lbl_fn_8023FD90_00000E08
    addi r0, r7, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmpwi r7, 0x0
    ble lbl_fn_8023FD90_00000E08
lbl_fn_8023FD90_00000DDC:
    stb r31, 0x0(r5)
    addi r6, r6, 0x8
    stb r31, 0x1(r5)
    stb r31, 0x2(r5)
    stb r31, 0x3(r5)
    stb r31, 0x4(r5)
    stb r31, 0x5(r5)
    stb r31, 0x6(r5)
    stb r31, 0x7(r5)
    addi r5, r5, 0x8
    bdnz lbl_fn_8023FD90_00000DDC
lbl_fn_8023FD90_00000E08:
    subf r0, r6, r4
    mtctr r0
    cmpw r6, r4
    bge lbl_fn_8023FD90_00000E24
lbl_fn_8023FD90_00000E18:
    stb r31, 0x0(r5)
    addi r5, r5, 0x1
    bdnz lbl_fn_8023FD90_00000E18
lbl_fn_8023FD90_00000E24:
    lwz r3, 0x20(r1)
    li r0, 0x0
    stw r0, 0x2c(r27)
    lhz r0, 0x2c(r1)
    sth r0, 0x30(r3)
    lwz r0, 0x24(r1)
    stw r0, 0x2c(r3)
    lwz r0, 0x28(r1)
    stw r0, 0x28(r3)
    lbz r0, 0x2e(r1)
    stb r0, 0x33(r3)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8023FD90_00000E68
    lbz r0, 0x32(r3)
    ori r0, r0, 0x1
    stb r0, 0x32(r3)
lbl_fn_8023FD90_00000E68:
    lbz r4, 0x33(r3)
    lbz r0, 0x32(r3)
    and. r0, r0, r4
    beq lbl_fn_8023FD90_00000E84
    lis r4, lbl_80783CA8@ha
    addi r4, r4, lbl_80783CA8@l
    bl fn_8068B39C
lbl_fn_8023FD90_00000E84:
    lwz r3, 0x2c(r27)
    li r31, 0x0
    lwz r26, 0x0(r26)
    cmpwi r3, 0xa
    ble lbl_fn_8023FD90_00000E9C
    subi r31, r3, 0xa
lbl_fn_8023FD90_00000E9C:
    lhz r0, 0x30(r27)
    andi. r30, r0, 0xb0
    cmplwi r30, 0x20
    beq lbl_fn_8023FD90_00000F30
    cmplwi r30, 0x10
    beq lbl_fn_8023FD90_00000F30
    cmpwi r31, 0x0
    li r24, 0x0
    ble lbl_fn_8023FD90_00000F30
    b lbl_fn_8023FD90_00000F28
lbl_fn_8023FD90_00000EC4:
    cmpwi r26, 0x0
    li r25, 0x0
    beq lbl_fn_8023FD90_00000F18
    lwz r3, 0x14(r26)
    lwz r0, 0x18(r26)
    cmplw r3, r0
    bge lbl_fn_8023FD90_00000EF4
    stb r28, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r26)
    lbz r3, 0x0(r3)
    b lbl_fn_8023FD90_00000F0C
lbl_fn_8023FD90_00000EF4:
    lwz r12, 0x0(r26)
    mr r3, r26
    clrlwi r4, r28, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023FD90_00000F0C:
    cmpwi r3, -0x1
    bne lbl_fn_8023FD90_00000F18
    li r25, 0x1
lbl_fn_8023FD90_00000F18:
    cmpwi r25, 0x0
    beq lbl_fn_8023FD90_00000F24
    li r26, 0x0
lbl_fn_8023FD90_00000F24:
    addi r24, r24, 0x1
lbl_fn_8023FD90_00000F28:
    cmpw r24, r31
    blt lbl_fn_8023FD90_00000EC4
lbl_fn_8023FD90_00000F30:
    cmplwi r30, 0x10
    bne lbl_fn_8023FD90_00000FB4
    cmpwi r31, 0x0
    li r24, 0x0
    ble lbl_fn_8023FD90_00000FB4
    b lbl_fn_8023FD90_00000FAC
lbl_fn_8023FD90_00000F48:
    cmpwi r26, 0x0
    li r25, 0x0
    beq lbl_fn_8023FD90_00000F9C
    lwz r3, 0x14(r26)
    lwz r0, 0x18(r26)
    cmplw r3, r0
    bge lbl_fn_8023FD90_00000F78
    stb r28, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r26)
    lbz r3, 0x0(r3)
    b lbl_fn_8023FD90_00000F90
lbl_fn_8023FD90_00000F78:
    lwz r12, 0x0(r26)
    mr r3, r26
    clrlwi r4, r28, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023FD90_00000F90:
    cmpwi r3, -0x1
    bne lbl_fn_8023FD90_00000F9C
    li r25, 0x1
lbl_fn_8023FD90_00000F9C:
    cmpwi r25, 0x0
    beq lbl_fn_8023FD90_00000FA8
    li r26, 0x0
lbl_fn_8023FD90_00000FA8:
    addi r24, r24, 0x1
lbl_fn_8023FD90_00000FAC:
    cmpw r24, r31
    blt lbl_fn_8023FD90_00000F48
lbl_fn_8023FD90_00000FB4:
    addi r25, r1, 0x30
    li r24, 0x0
lbl_fn_8023FD90_00000FBC:
    lbz r0, 0x0(r25)
    cmpwi r26, 0x0
    li r29, 0x0
    addi r25, r25, 0x1
    extsb r4, r0
    beq lbl_fn_8023FD90_0000101C
    lwz r3, 0x14(r26)
    lwz r0, 0x18(r26)
    cmplw r3, r0
    bge lbl_fn_8023FD90_00000FF8
    stb r4, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r26)
    lbz r3, 0x0(r3)
    b lbl_fn_8023FD90_00001010
lbl_fn_8023FD90_00000FF8:
    lwz r12, 0x0(r26)
    mr r3, r26
    clrlwi r4, r4, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023FD90_00001010:
    cmpwi r3, -0x1
    bne lbl_fn_8023FD90_0000101C
    li r29, 0x1
lbl_fn_8023FD90_0000101C:
    cmpwi r29, 0x0
    beq lbl_fn_8023FD90_00001028
    li r26, 0x0
lbl_fn_8023FD90_00001028:
    addi r24, r24, 0x1
    cmpwi r24, 0xa
    blt lbl_fn_8023FD90_00000FBC
    cmplwi r30, 0x20
    bne lbl_fn_8023FD90_000010B8
    cmpwi r31, 0x0
    li r24, 0x0
    ble lbl_fn_8023FD90_000010B8
    b lbl_fn_8023FD90_000010B0
lbl_fn_8023FD90_0000104C:
    cmpwi r26, 0x0
    li r25, 0x0
    beq lbl_fn_8023FD90_000010A0
    lwz r3, 0x14(r26)
    lwz r0, 0x18(r26)
    cmplw r3, r0
    bge lbl_fn_8023FD90_0000107C
    stb r28, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r26)
    lbz r3, 0x0(r3)
    b lbl_fn_8023FD90_00001094
lbl_fn_8023FD90_0000107C:
    lwz r12, 0x0(r26)
    mr r3, r26
    clrlwi r4, r28, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023FD90_00001094:
    cmpwi r3, -0x1
    bne lbl_fn_8023FD90_000010A0
    li r25, 0x1
lbl_fn_8023FD90_000010A0:
    cmpwi r25, 0x0
    beq lbl_fn_8023FD90_000010AC
    li r26, 0x0
lbl_fn_8023FD90_000010AC:
    addi r24, r24, 0x1
lbl_fn_8023FD90_000010B0:
    cmpw r24, r31
    blt lbl_fn_8023FD90_0000104C
lbl_fn_8023FD90_000010B8:
    li r0, 0x0
    stw r0, 0x2c(r27)
    mr r3, r26
    lmw r24, 0x60(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}
