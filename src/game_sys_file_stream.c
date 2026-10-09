#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_15(void);
extern void _savegpr_15(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_800616C0(void);
extern void fn_800844D8(void);
extern void fn_801207CC(void);
extern void fn_80220168(void);
extern void fn_80221FA4(void);
extern void fn_80222AD0(void);
extern void fn_8022354C(void);
extern void fn_80223A10(void);
extern void fn_80224184(void);
extern void fn_80224638(void);
extern void fn_8053B02C(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);

/* External data declarations */
extern u8 lbl_807428E0[];
extern u8 lbl_807428F4[];
extern u8 lbl_80778910[];
extern u8 lbl_807835F0[];
extern u8 lbl_8078378C[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087F540;
extern u32 lbl_80882FF0;
extern u32 lbl_80882FF4;
extern u32 lbl_80882FF8;
extern u32 lbl_80882FFC;

/* Function declarations */
void fn_8022051C(void);
void fn_80220620(void);
void fn_80220640(void);
void fn_80220648(void);
void fn_80220660(void);
void fn_80220AE4(void);
void fn_802212B4(void);
void fn_802212C4(void);
void fn_8022144C(void);
void fn_802214F8(void);
void fn_802219CC(void);
void fn_80221CAC(void);
void fn_80221CBC(void);
void fn_80221CF8(void);
void fn_80221E00(void);
void fn_80221E08(void);

asm void fn_8022051C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    addi r3, r4, 0x4
    bl fn_801207CC
    lwz r0, 0x4(r29)
    cmplw r0, r3
    beq lbl_fn_8022051C_0000003C
    li r3, 0x0
    b lbl_fn_8022051C_000000E8
lbl_fn_8022051C_0000003C:
    mr r3, r29
    bl fn_80220620
    cmpwi r3, 0x0
    beq lbl_fn_8022051C_00000060
    addi r3, r29, 0x8
    bl fn_80220648
    mr r4, r30
    bl fn_80220660
    b lbl_fn_8022051C_0000006C
lbl_fn_8022051C_00000060:
    mr r4, r30
    addi r3, r29, 0x8
    bl fn_80220AE4
lbl_fn_8022051C_0000006C:
    addi r3, r29, 0x8
    bl fn_80220640
    subi r30, r3, 0x1
    b lbl_fn_8022051C_000000DC
lbl_fn_8022051C_0000007C:
    addi r3, r29, 0x8
    subi r4, r30, 0x1
    bl fn_802212B4
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_802212C4
    mr r4, r30
    addi r3, r29, 0x8
    bl fn_802212B4
    mr r31, r3
    addi r3, r29, 0x8
    subi r4, r30, 0x1
    bl fn_802212B4
    mr r4, r31
    bl fn_80220660
    mr r4, r30
    addi r3, r29, 0x8
    bl fn_802212B4
    addi r4, r1, 0x8
    bl fn_80220660
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_8022144C
    subi r30, r30, 0x1
lbl_fn_8022051C_000000DC:
    cmpwi r30, 0x0
    bgt lbl_fn_8022051C_0000007C
    li r3, 0x1
lbl_fn_8022051C_000000E8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80220620(void)
{
    nofralloc
    lwz r5, 0xc(r3)
    lwz r3, 0x14(r3)
    srawi r4, r5, 31
    subi r0, r3, 0x1
    srwi r3, r0, 31
    subfc r0, r0, r5
    adde r3, r4, r3
    blr
}

asm void fn_80220640(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_80220648(void)
{
    nofralloc
    lwz r4, 0x4(r3)
    lwz r3, 0x0(r3)
    subi r0, r4, 0x1
    mulli r0, r0, 0x14
    add r3, r3, r0
    blr
}

asm void fn_80220660(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    addi r5, r3, 0x4
    stw r0, 0x54(r1)
    addi r0, r4, 0x4
    cmplw r5, r0
    stmw r25, 0x34(r1)
    mr r26, r3
    mr r27, r4
    lwz r6, 0x0(r4)
    stw r6, 0x0(r3)
    beq lbl_fn_80220660_000005A8
    lwz r0, 0x8(r4)
    lis r5, 0x2aab
    lwz r28, 0x4(r4)
    subi r4, r5, 0x5555
    mulli r0, r0, 0xc
    add r29, r28, r0
    subf r0, r28, r29
    mulhw r0, r4, r0
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r4, r0, r4
    stw r4, 0x20(r1)
    lwz r30, 0xc(r3)
    cmplw r4, r30
    ble lbl_fn_80220660_0000027C
    lis r3, 0x1555
    subf r31, r30, r4
    addi r0, r3, 0x5555
    stw r31, 0x24(r1)
    subf r0, r30, r0
    cmplw r31, r0
    ble lbl_fn_80220660_000001EC
    lis r3, __files@ha
    lis r4, lbl_807428F4@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_807428F4@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80220660_000001EC:
    lis r3, 0x71c
    addi r0, r3, 0x71c7
    cmplw r30, r0
    bge lbl_fn_80220660_00000238
    addi r5, r30, 0x1
    lis r4, 0xcccd
    slwi r0, r5, 2
    addi r3, r1, 0x2c
    subf r0, r5, r0
    subi r4, r4, 0x3333
    mulhwu r0, r4, r0
    srwi r0, r0, 2
    stw r0, 0x2c(r1)
    cmplw r0, r31
    bge lbl_fn_80220660_0000022C
    addi r3, r1, 0x24
lbl_fn_80220660_0000022C:
    lwz r0, 0x0(r3)
    add r31, r30, r0
    b lbl_fn_80220660_00000440
lbl_fn_80220660_00000238:
    lis r3, 0xe39
    subi r0, r3, 0x1c72
    cmplw r30, r0
    bge lbl_fn_80220660_00000270
    addi r0, r30, 0x1
    addi r3, r1, 0x28
    srwi r0, r0, 1
    stw r0, 0x28(r1)
    cmplw r0, r31
    bge lbl_fn_80220660_00000264
    addi r3, r1, 0x24
lbl_fn_80220660_00000264:
    lwz r0, 0x0(r3)
    add r31, r30, r0
    b lbl_fn_80220660_00000440
lbl_fn_80220660_00000270:
    lis r3, 0x1555
    addi r31, r3, 0x5555
    b lbl_fn_80220660_00000440
lbl_fn_80220660_0000027C:
    lwz r0, 0x8(r3)
    cmplw r0, r4
    bge lbl_fn_80220660_00000290
    addi r4, r3, 0x8
    b lbl_fn_80220660_00000294
lbl_fn_80220660_00000290:
    addi r4, r1, 0x20
lbl_fn_80220660_00000294:
    lwz r0, 0x0(r4)
    lwz r31, 0x4(r3)
    mulli r0, r0, 0xc
    add r30, r28, r0
    b lbl_fn_80220660_00000338
lbl_fn_80220660_000002A8:
    lwz r0, 0x0(r31)
    srwi. r4, r0, 31
    bne lbl_fn_80220660_000002D8
    lwz r3, 0x0(r28)
    srwi. r0, r3, 31
    bne lbl_fn_80220660_000002D8
    lwz r0, 0x4(r28)
    stw r3, 0x0(r31)
    stw r0, 0x4(r31)
    lwz r0, 0x8(r28)
    stw r0, 0x8(r31)
    b lbl_fn_80220660_00000330
lbl_fn_80220660_000002D8:
    cmpwi r4, 0x0
    beq lbl_fn_80220660_000002E8
    lwz r5, 0x4(r31)
    b lbl_fn_80220660_000002F0
lbl_fn_80220660_000002E8:
    lbz r0, 0x0(r31)
    clrlwi r5, r0, 25
lbl_fn_80220660_000002F0:
    lwz r0, 0x0(r28)
    srwi. r0, r0, 31
    bne lbl_fn_80220660_0000030C
    lbz r0, 0x0(r28)
    addi r6, r28, 0x1
    clrlwi r4, r0, 25
    b lbl_fn_80220660_00000314
lbl_fn_80220660_0000030C:
    lwz r6, 0x8(r28)
    lwz r4, 0x4(r28)
lbl_fn_80220660_00000314:
    lbz r0, 0x8(r1)
    add r7, r6, r4
    stb r0, 0xc(r1)
    mr r3, r31
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80220660_00000330:
    addi r28, r28, 0xc
    addi r31, r31, 0xc
lbl_fn_80220660_00000338:
    cmplw r28, r30
    blt lbl_fn_80220660_000002A8
    lwz r0, 0x8(r26)
    lwz r4, 0x20(r1)
    cmplw r4, r0
    bge lbl_fn_80220660_00000398
    mulli r3, r0, 0xc
    subf r28, r4, r0
    lwz r4, 0x4(r26)
    subf r0, r28, r0
    stw r0, 0x8(r26)
    add r25, r4, r3
    b lbl_fn_80220660_0000038C
lbl_fn_80220660_0000036C:
    subic. r25, r25, 0xc
    beq lbl_fn_80220660_00000388
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    beq lbl_fn_80220660_00000388
    lwz r3, 0x8(r25)
    bl dtor_80084684
lbl_fn_80220660_00000388:
    subi r28, r28, 0x1
lbl_fn_80220660_0000038C:
    cmpwi r28, 0x0
    bne lbl_fn_80220660_0000036C
    b lbl_fn_80220660_000005A8
lbl_fn_80220660_00000398:
    cmplw r0, r4
    bge lbl_fn_80220660_000005A8
    mulli r0, r0, 0xc
    lwz r3, 0x4(r26)
    li r25, 0x0
    add r28, r3, r0
    b lbl_fn_80220660_00000434
lbl_fn_80220660_000003B4:
    cmpwi r28, 0x0
    beq lbl_fn_80220660_00000420
    lwz r3, 0x0(r30)
    srwi. r0, r3, 31
    bne lbl_fn_80220660_000003E0
    lwz r0, 0x4(r30)
    stw r3, 0x0(r28)
    stw r0, 0x4(r28)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r28)
    b lbl_fn_80220660_00000420
lbl_fn_80220660_000003E0:
    stw r25, 0x0(r28)
    mr r3, r28
    stw r25, 0x4(r28)
    stw r25, 0x8(r28)
    lwz r4, 0x4(r30)
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r28
    stb r0, 0x10(r1)
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x8(r30)
    lwz r0, 0x4(r30)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80220660_00000420:
    lwz r3, 0x8(r26)
    addi r30, r30, 0xc
    addi r28, r28, 0xc
    addi r0, r3, 0x1
    stw r0, 0x8(r26)
lbl_fn_80220660_00000434:
    cmplw r30, r29
    bne lbl_fn_80220660_000003B4
    b lbl_fn_80220660_000005A8
lbl_fn_80220660_00000440:
    lwz r30, 0x8(r26)
    lwz r4, 0x4(r26)
    mulli r3, r30, 0xc
    subf r0, r30, r30
    stw r0, 0x8(r26)
    add r25, r4, r3
    b lbl_fn_80220660_0000047C
lbl_fn_80220660_0000045C:
    subic. r25, r25, 0xc
    beq lbl_fn_80220660_00000478
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    beq lbl_fn_80220660_00000478
    lwz r3, 0x8(r25)
    bl dtor_80084684
lbl_fn_80220660_00000478:
    subi r30, r30, 0x1
lbl_fn_80220660_0000047C:
    cmpwi r30, 0x0
    bne lbl_fn_80220660_0000045C
    lwz r3, 0x4(r26)
    cmpwi r3, 0x0
    beq lbl_fn_80220660_000004A0
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x4(r26)
    stw r0, 0xc(r26)
lbl_fn_80220660_000004A0:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    ble lbl_fn_80220660_000004D0
    lis r3, __files@ha
    lis r4, lbl_807428F4@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_807428F4@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80220660_000004D0:
    mulli r3, r31, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_80220660_00000504
    lis r3, __files@ha
    lis r4, lbl_80778910@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80778910@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80220660_00000504:
    lwz r0, 0x8(r26)
    li r30, 0x0
    stw r25, 0x4(r26)
    mulli r0, r0, 0xc
    stw r31, 0xc(r26)
    add r25, r25, r0
    b lbl_fn_80220660_000005A0
lbl_fn_80220660_00000520:
    cmpwi r25, 0x0
    beq lbl_fn_80220660_0000058C
    lwz r3, 0x0(r28)
    srwi. r0, r3, 31
    bne lbl_fn_80220660_0000054C
    lwz r0, 0x4(r28)
    stw r3, 0x0(r25)
    stw r0, 0x4(r25)
    lwz r0, 0x8(r28)
    stw r0, 0x8(r25)
    b lbl_fn_80220660_0000058C
lbl_fn_80220660_0000054C:
    stw r30, 0x0(r25)
    mr r3, r25
    stw r30, 0x4(r25)
    stw r30, 0x8(r25)
    lwz r4, 0x4(r28)
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r25
    stb r0, 0x18(r1)
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x8(r28)
    lwz r0, 0x4(r28)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80220660_0000058C:
    lwz r3, 0x8(r26)
    addi r28, r28, 0xc
    addi r25, r25, 0xc
    addi r0, r3, 0x1
    stw r0, 0x8(r26)
lbl_fn_80220660_000005A0:
    cmplw r28, r29
    bne lbl_fn_80220660_00000520
lbl_fn_80220660_000005A8:
    lwz r0, 0x10(r27)
    mr r3, r26
    stw r0, 0x10(r26)
    lmw r25, 0x34(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80220AE4(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stmw r18, 0x48(r1)
    mr r31, r3
    mr r19, r4
    lwz r0, 0x4(r3)
    lwz r5, 0x8(r3)
    cmplw r0, r5
    bge lbl_fn_80220AE4_00000768
    mulli r0, r0, 0x14
    lwz r3, 0x0(r3)
    add. r25, r3, r0
    beq lbl_fn_80220AE4_00000758
    lwz r0, 0x8(r4)
    lis r3, 0x2aab
    lwz r21, 0x4(r4)
    subi r3, r3, 0x5555
    mulli r0, r0, 0xc
    lwz r4, 0x0(r4)
    stw r4, 0x0(r25)
    li r4, 0x0
    add r22, r21, r0
    stw r4, 0x4(r25)
    subf r0, r21, r22
    mulhw r0, r3, r0
    stw r4, 0x8(r25)
    stw r4, 0xc(r25)
    srawi r0, r0, 1
    srwi r3, r0, 31
    add. r24, r0, r3
    beq lbl_fn_80220AE4_00000750
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r24, r0
    ble lbl_fn_80220AE4_00000678
    lis r3, __files@ha
    lis r4, lbl_807428F4@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_807428F4@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80220AE4_00000678:
    mulli r3, r24, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r23, r3
    bne lbl_fn_80220AE4_000006AC
    lis r3, __files@ha
    lis r4, lbl_80778910@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80778910@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80220AE4_000006AC:
    stw r23, 0x4(r25)
    li r20, 0x0
    stw r24, 0xc(r25)
    lwz r0, 0x8(r25)
    mulli r0, r0, 0xc
    add r23, r23, r0
    b lbl_fn_80220AE4_00000748
lbl_fn_80220AE4_000006C8:
    cmpwi r23, 0x0
    beq lbl_fn_80220AE4_00000734
    lwz r3, 0x0(r21)
    srwi. r0, r3, 31
    bne lbl_fn_80220AE4_000006F4
    lwz r0, 0x4(r21)
    stw r3, 0x0(r23)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r21)
    stw r0, 0x8(r23)
    b lbl_fn_80220AE4_00000734
lbl_fn_80220AE4_000006F4:
    stw r20, 0x0(r23)
    mr r3, r23
    stw r20, 0x4(r23)
    stw r20, 0x8(r23)
    lwz r4, 0x4(r21)
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r23
    stb r0, 0x18(r1)
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x8(r21)
    lwz r0, 0x4(r21)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80220AE4_00000734:
    lwz r3, 0x8(r25)
    addi r21, r21, 0xc
    addi r23, r23, 0xc
    addi r0, r3, 0x1
    stw r0, 0x8(r25)
lbl_fn_80220AE4_00000748:
    cmplw r21, r22
    bne lbl_fn_80220AE4_000006C8
lbl_fn_80220AE4_00000750:
    lwz r0, 0x10(r19)
    stw r0, 0x10(r25)
lbl_fn_80220AE4_00000758:
    lwz r3, 0x4(r31)
    addi r0, r3, 0x1
    stw r0, 0x4(r31)
    b lbl_fn_80220AE4_00000D84
lbl_fn_80220AE4_00000768:
    lis r3, 0xccd
    subi r0, r3, 0x3334
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_80220AE4_0000079C
    lis r3, __files@ha
    lis r4, lbl_807428F4@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_807428F4@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80220AE4_0000079C:
    lwz r4, 0x4(r31)
    li r6, 0x0
    lis r3, 0xccd
    lwz r25, 0x8(r31)
    subi r0, r3, 0x3334
    addi r4, r4, 0x1
    subf r3, r25, r4
    addi r5, r31, 0x8
    subf r0, r25, r0
    stw r6, 0x2c(r1)
    cmplw r3, r0
    stw r6, 0x30(r1)
    stw r6, 0x34(r1)
    stw r5, 0x38(r1)
    stw r6, 0x3c(r1)
    stw r3, 0x20(r1)
    ble lbl_fn_80220AE4_00000800
    lis r3, __files@ha
    lis r4, lbl_807428F4@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_807428F4@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80220AE4_00000800:
    lis r3, 0x444
    addi r0, r3, 0x4444
    cmplw r25, r0
    bge lbl_fn_80220AE4_00000850
    addi r5, r25, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x20(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x28
    srwi r4, r4, 2
    stw r4, 0x28(r1)
    cmplw r4, r0
    bge lbl_fn_80220AE4_00000844
    addi r3, r1, 0x20
lbl_fn_80220AE4_00000844:
    lwz r0, 0x0(r3)
    add r21, r25, r0
    b lbl_fn_80220AE4_00000894
lbl_fn_80220AE4_00000850:
    lis r3, 0x889
    subi r0, r3, 0x7778
    cmplw r25, r0
    bge lbl_fn_80220AE4_0000088C
    addi r3, r25, 0x1
    lwz r0, 0x20(r1)
    srwi r3, r3, 1
    stw r3, 0x24(r1)
    cmplw r3, r0
    addi r3, r1, 0x24
    bge lbl_fn_80220AE4_00000880
    addi r3, r1, 0x20
lbl_fn_80220AE4_00000880:
    lwz r0, 0x0(r3)
    add r21, r25, r0
    b lbl_fn_80220AE4_00000894
lbl_fn_80220AE4_0000088C:
    lis r3, 0xccd
    subi r21, r3, 0x3334
lbl_fn_80220AE4_00000894:
    lis r3, 0xccd
    subi r0, r3, 0x3334
    cmplw r21, r0
    ble lbl_fn_80220AE4_000008C4
    lis r3, __files@ha
    lis r4, lbl_807428F4@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_807428F4@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80220AE4_000008C4:
    mulli r3, r21, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r18, r3
    bne lbl_fn_80220AE4_000008F8
    lis r3, __files@ha
    lis r4, lbl_8078378C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8078378C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80220AE4_000008F8:
    lwz r5, 0x4(r31)
    lis r26, __files@ha
    lwz r0, 0x30(r1)
    li r20, 0x0
    mulli r4, r5, 0x14
    stw r5, 0x3c(r1)
    addi r26, r26, __files@l
    stw r18, 0x2c(r1)
    lis r24, lbl_80778910@ha
    mulli r3, r0, 0x14
    add r0, r18, r4
    stw r21, 0x34(r1)
    lis r4, 0x1555
    add. r22, r3, r0
    lis r5, 0x2aab
    lis r3, lbl_807428F4@ha
    beq lbl_fn_80220AE4_00000A6C
    lwz r0, 0x8(r19)
    subi r5, r5, 0x5555
    lwz r6, 0x0(r19)
    mulli r0, r0, 0xc
    lwz r21, 0x4(r19)
    stw r6, 0x0(r22)
    add r23, r21, r0
    stw r20, 0x4(r22)
    subf r0, r21, r23
    mulhw r0, r5, r0
    stw r20, 0x8(r22)
    stw r20, 0xc(r22)
    srawi r0, r0, 1
    srwi r5, r0, 31
    add. r18, r0, r5
    beq lbl_fn_80220AE4_00000A64
    addi r0, r4, 0x5555
    cmplw r18, r0
    ble lbl_fn_80220AE4_0000099C
    addi r4, r3, lbl_807428F4@l
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80220AE4_0000099C:
    mulli r3, r18, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_80220AE4_000009C4
    addi r3, r26, 0xa0
    addi r4, r24, lbl_80778910@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80220AE4_000009C4:
    stw r25, 0x4(r22)
    stw r18, 0xc(r22)
    lwz r0, 0x8(r22)
    mulli r0, r0, 0xc
    add r18, r25, r0
    b lbl_fn_80220AE4_00000A5C
lbl_fn_80220AE4_000009DC:
    cmpwi r18, 0x0
    beq lbl_fn_80220AE4_00000A48
    lwz r3, 0x0(r21)
    srwi. r0, r3, 31
    bne lbl_fn_80220AE4_00000A08
    lwz r0, 0x4(r21)
    stw r3, 0x0(r18)
    stw r0, 0x4(r18)
    lwz r0, 0x8(r21)
    stw r0, 0x8(r18)
    b lbl_fn_80220AE4_00000A48
lbl_fn_80220AE4_00000A08:
    stw r20, 0x0(r18)
    mr r3, r18
    stw r20, 0x4(r18)
    stw r20, 0x8(r18)
    lwz r4, 0x4(r21)
    bl fn_80013DC4
    lbz r0, 0x8(r1)
    mr r3, r18
    stb r0, 0xc(r1)
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x8(r21)
    lwz r0, 0x4(r21)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80220AE4_00000A48:
    lwz r3, 0x8(r22)
    addi r21, r21, 0xc
    addi r18, r18, 0xc
    addi r0, r3, 0x1
    stw r0, 0x8(r22)
lbl_fn_80220AE4_00000A5C:
    cmplw r21, r23
    bne lbl_fn_80220AE4_000009DC
lbl_fn_80220AE4_00000A64:
    lwz r0, 0x10(r19)
    stw r0, 0x10(r22)
lbl_fn_80220AE4_00000A6C:
    lwz r4, 0x4(r31)
    lis r3, __files@ha
    lwz r0, 0x3c(r1)
    addi r28, r3, __files@l
    lwz r5, 0x30(r1)
    mulli r4, r4, 0x14
    lwz r20, 0x0(r31)
    li r30, 0x0
    addi r5, r5, 0x1
    lwz r3, 0x2c(r1)
    mulli r0, r0, 0x14
    stw r5, 0x30(r1)
    add r24, r20, r4
    lis r27, lbl_807428F4@ha
    add r22, r3, r0
    lis r26, 0x1555
    lis r29, lbl_80778910@ha
    lis r25, 0x2aab
    b lbl_fn_80220AE4_00000C0C
lbl_fn_80220AE4_00000AB8:
    subic. r22, r22, 0x14
    subi r24, r24, 0x14
    beq lbl_fn_80220AE4_00000BF4
    lwz r0, 0x0(r24)
    subi r3, r25, 0x5555
    stw r0, 0x0(r22)
    stw r30, 0x4(r22)
    stw r30, 0x8(r22)
    stw r30, 0xc(r22)
    lwz r0, 0x8(r24)
    lwz r19, 0x4(r24)
    mulli r0, r0, 0xc
    add r21, r19, r0
    subf r0, r19, r21
    mulhw r0, r3, r0
    srawi r0, r0, 1
    srwi r3, r0, 31
    add. r18, r0, r3
    beq lbl_fn_80220AE4_00000BEC
    addi r0, r26, 0x5555
    cmplw r18, r0
    ble lbl_fn_80220AE4_00000B24
    addi r4, r27, lbl_807428F4@l
    addi r3, r28, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80220AE4_00000B24:
    mulli r3, r18, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r23, r3
    bne lbl_fn_80220AE4_00000B4C
    addi r3, r28, 0xa0
    addi r4, r29, lbl_80778910@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80220AE4_00000B4C:
    stw r23, 0x4(r22)
    stw r18, 0xc(r22)
    lwz r0, 0x8(r22)
    mulli r0, r0, 0xc
    add r23, r23, r0
    b lbl_fn_80220AE4_00000BE4
lbl_fn_80220AE4_00000B64:
    cmpwi r23, 0x0
    beq lbl_fn_80220AE4_00000BD0
    lwz r3, 0x0(r19)
    srwi. r0, r3, 31
    bne lbl_fn_80220AE4_00000B90
    lwz r0, 0x4(r19)
    stw r3, 0x0(r23)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r19)
    stw r0, 0x8(r23)
    b lbl_fn_80220AE4_00000BD0
lbl_fn_80220AE4_00000B90:
    stw r30, 0x0(r23)
    mr r3, r23
    stw r30, 0x4(r23)
    stw r30, 0x8(r23)
    lwz r4, 0x4(r19)
    bl fn_80013DC4
    lbz r0, 0x10(r1)
    mr r3, r23
    stb r0, 0x14(r1)
    addi r8, r1, 0x14
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x8(r19)
    lwz r0, 0x4(r19)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80220AE4_00000BD0:
    lwz r3, 0x8(r22)
    addi r19, r19, 0xc
    addi r23, r23, 0xc
    addi r0, r3, 0x1
    stw r0, 0x8(r22)
lbl_fn_80220AE4_00000BE4:
    cmplw r19, r21
    bne lbl_fn_80220AE4_00000B64
lbl_fn_80220AE4_00000BEC:
    lwz r0, 0x10(r24)
    stw r0, 0x10(r22)
lbl_fn_80220AE4_00000BF4:
    lwz r4, 0x3c(r1)
    lwz r3, 0x30(r1)
    subi r0, r4, 0x1
    stw r0, 0x3c(r1)
    addi r0, r3, 0x1
    stw r0, 0x30(r1)
lbl_fn_80220AE4_00000C0C:
    cmplw r24, r20
    bgt lbl_fn_80220AE4_00000AB8
    lwz r0, 0x3c(r1)
    addi r25, r1, 0x2c
    lwz r7, 0x4(r31)
    mulli r3, r0, 0x14
    lwz r4, 0x30(r1)
    lwz r8, 0x0(r31)
    lwz r5, 0x2c(r1)
    mulli r0, r7, 0x14
    lwz r9, 0x8(r31)
    lwz r6, 0x34(r1)
    add r19, r8, r3
    stw r6, 0x8(r31)
    add r20, r19, r0
    stw r9, 0x34(r1)
    stw r5, 0x0(r31)
    stw r8, 0x2c(r1)
    stw r4, 0x4(r31)
    stw r7, 0x30(r1)
    b lbl_fn_80220AE4_00000CCC
lbl_fn_80220AE4_00000C60:
    subic. r20, r20, 0x14
    beq lbl_fn_80220AE4_00000CCC
    addic. r21, r20, 0x4
    beq lbl_fn_80220AE4_00000CCC
    beq lbl_fn_80220AE4_00000CCC
    beq lbl_fn_80220AE4_00000CCC
    lwz r4, 0x0(r21)
    cmpwi r4, 0x0
    beq lbl_fn_80220AE4_00000CCC
    lwz r23, 0x4(r21)
    mulli r3, r23, 0xc
    subf r0, r23, r23
    stw r0, 0x4(r21)
    add r22, r4, r3
    b lbl_fn_80220AE4_00000CBC
lbl_fn_80220AE4_00000C9C:
    subic. r22, r22, 0xc
    beq lbl_fn_80220AE4_00000CB8
    lwz r0, 0x0(r22)
    srwi. r0, r0, 31
    beq lbl_fn_80220AE4_00000CB8
    lwz r3, 0x8(r22)
    bl dtor_80084684
lbl_fn_80220AE4_00000CB8:
    subi r23, r23, 0x1
lbl_fn_80220AE4_00000CBC:
    cmpwi r23, 0x0
    bne lbl_fn_80220AE4_00000C9C
    lwz r3, 0x0(r21)
    bl dtor_80084684
lbl_fn_80220AE4_00000CCC:
    cmplw r20, r19
    bgt lbl_fn_80220AE4_00000C60
    cmpwi r25, 0x0
    li r0, 0x0
    stw r0, 0x30(r1)
    beq lbl_fn_80220AE4_00000D84
    lwz r3, 0x2c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80220AE4_00000D84
    mulli r0, r0, 0x14
    li r23, 0x0
    stw r23, 0x30(r1)
    add r19, r3, r0
    b lbl_fn_80220AE4_00000D74
lbl_fn_80220AE4_00000D04:
    subic. r19, r19, 0x14
    beq lbl_fn_80220AE4_00000D70
    addic. r20, r19, 0x4
    beq lbl_fn_80220AE4_00000D70
    beq lbl_fn_80220AE4_00000D70
    beq lbl_fn_80220AE4_00000D70
    lwz r4, 0x0(r20)
    cmpwi r4, 0x0
    beq lbl_fn_80220AE4_00000D70
    lwz r22, 0x4(r20)
    mulli r3, r22, 0xc
    subf r0, r22, r22
    stw r0, 0x4(r20)
    add r21, r4, r3
    b lbl_fn_80220AE4_00000D60
lbl_fn_80220AE4_00000D40:
    subic. r21, r21, 0xc
    beq lbl_fn_80220AE4_00000D5C
    lwz r0, 0x0(r21)
    srwi. r0, r0, 31
    beq lbl_fn_80220AE4_00000D5C
    lwz r3, 0x8(r21)
    bl dtor_80084684
lbl_fn_80220AE4_00000D5C:
    subi r22, r22, 0x1
lbl_fn_80220AE4_00000D60:
    cmpwi r22, 0x0
    bne lbl_fn_80220AE4_00000D40
    lwz r3, 0x0(r20)
    bl dtor_80084684
lbl_fn_80220AE4_00000D70:
    subi r23, r23, 0x1
lbl_fn_80220AE4_00000D74:
    cmpwi r23, 0x0
    bne lbl_fn_80220AE4_00000D04
    lwz r3, 0x2c(r1)
    bl dtor_80084684
lbl_fn_80220AE4_00000D84:
    lmw r18, 0x48(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_802212B4(void)
{
    nofralloc
    mulli r0, r4, 0x14
    lwz r3, 0x0(r3)
    add r3, r3, r0
    blr
}

asm void fn_802212C4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r5, 0x2aab
    lwz r7, 0x0(r4)
    stw r0, 0x34(r1)
    subi r5, r5, 0x5555
    lwz r0, 0x8(r4)
    li r6, 0x0
    stmw r25, 0x14(r1)
    mr r28, r3
    mulli r0, r0, 0xc
    lwz r30, 0x4(r4)
    mr r29, r4
    add r31, r30, r0
    subf r0, r30, r31
    mulhw r0, r5, r0
    stw r7, 0x0(r3)
    srawi r0, r0, 1
    stw r6, 0x4(r3)
    stw r6, 0x8(r3)
    stw r6, 0xc(r3)
    srwi r3, r0, 31
    add. r25, r0, r3
    beq lbl_fn_802212C4_00000F10
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r25, r0
    ble lbl_fn_802212C4_00000E38
    lis r3, __files@ha
    lis r4, lbl_807428F4@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_807428F4@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802212C4_00000E38:
    mulli r3, r25, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_802212C4_00000E6C
    lis r3, __files@ha
    lis r4, lbl_80778910@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80778910@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802212C4_00000E6C:
    lwz r0, 0x8(r28)
    li r27, 0x0
    stw r26, 0x4(r28)
    mulli r0, r0, 0xc
    stw r25, 0xc(r28)
    add r26, r26, r0
    b lbl_fn_802212C4_00000F08
lbl_fn_802212C4_00000E88:
    cmpwi r26, 0x0
    beq lbl_fn_802212C4_00000EF4
    lwz r3, 0x0(r30)
    srwi. r0, r3, 31
    bne lbl_fn_802212C4_00000EB4
    lwz r0, 0x4(r30)
    stw r3, 0x0(r26)
    stw r0, 0x4(r26)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r26)
    b lbl_fn_802212C4_00000EF4
lbl_fn_802212C4_00000EB4:
    stw r27, 0x0(r26)
    mr r3, r26
    stw r27, 0x4(r26)
    stw r27, 0x8(r26)
    lwz r4, 0x4(r30)
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r26
    stb r0, 0x8(r1)
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x8(r30)
    lwz r0, 0x4(r30)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_802212C4_00000EF4:
    lwz r3, 0x8(r28)
    addi r30, r30, 0xc
    addi r26, r26, 0xc
    addi r0, r3, 0x1
    stw r0, 0x8(r28)
lbl_fn_802212C4_00000F08:
    cmplw r30, r31
    bne lbl_fn_802212C4_00000E88
lbl_fn_802212C4_00000F10:
    lwz r0, 0x10(r29)
    mr r3, r28
    stw r0, 0x10(r28)
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8022144C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    beq lbl_fn_8022144C_00000FC4
    addic. r31, r3, 0x4
    beq lbl_fn_8022144C_00000FB4
    beq lbl_fn_8022144C_00000FB4
    beq lbl_fn_8022144C_00000FB4
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8022144C_00000FB4
    lwz r29, 0x4(r31)
    mulli r3, r29, 0xc
    subf r0, r29, r29
    stw r0, 0x4(r31)
    add r30, r4, r3
    b lbl_fn_8022144C_00000FA4
lbl_fn_8022144C_00000F84:
    subic. r30, r30, 0xc
    beq lbl_fn_8022144C_00000FA0
    lwz r0, 0x0(r30)
    srwi. r0, r0, 31
    beq lbl_fn_8022144C_00000FA0
    lwz r3, 0x8(r30)
    bl dtor_80084684
lbl_fn_8022144C_00000FA0:
    subi r29, r29, 0x1
lbl_fn_8022144C_00000FA4:
    cmpwi r29, 0x0
    bne lbl_fn_8022144C_00000F84
    lwz r3, 0x0(r31)
    bl dtor_80084684
lbl_fn_8022144C_00000FB4:
    cmpwi r28, 0x0
    ble lbl_fn_8022144C_00000FC4
    mr r3, r27
    bl dtor_80084684
lbl_fn_8022144C_00000FC4:
    mr r3, r27
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802214F8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stmw r25, 0x34(r1)
    mr r26, r4
    lwz r5, 0x4(r3)
    lwz r0, 0x8(r4)
    cmplw r5, r0
    beq lbl_fn_802214F8_00001008
    li r3, 0x0
    b lbl_fn_802214F8_0000149C
lbl_fn_802214F8_00001008:
    lwz r0, 0xc(r3)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_802214F8_00001498
lbl_fn_802214F8_0000101C:
    lwz r0, 0x8(r3)
    lwz r6, 0x0(r4)
    add r28, r0, r5
    lwzx r0, r5, r0
    cmplw r6, r0
    bne lbl_fn_802214F8_00001490
    addi r3, r28, 0x4
    addi r0, r4, 0x4
    cmplw r3, r0
    stw r6, 0x0(r28)
    beq lbl_fn_802214F8_00001480
    lwz r0, 0x8(r4)
    lis r3, 0x2aab
    lwz r27, 0x4(r4)
    subi r3, r3, 0x5555
    mulli r0, r0, 0xc
    add r29, r27, r0
    subf r0, r27, r29
    mulhw r0, r3, r0
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r3, r0, r3
    stw r3, 0x2c(r1)
    lwz r0, 0xc(r28)
    cmplw r3, r0
    ble lbl_fn_802214F8_00001154
    subf r31, r0, r3
    stw r31, 0x28(r1)
    lis r3, 0x1555
    lwz r30, 0xc(r28)
    addi r0, r3, 0x5555
    subf r0, r30, r0
    cmplw r31, r0
    ble lbl_fn_802214F8_000010C4
    lis r3, __files@ha
    lis r4, lbl_807428F4@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_807428F4@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802214F8_000010C4:
    lis r3, 0x71c
    addi r0, r3, 0x71c7
    cmplw r30, r0
    bge lbl_fn_802214F8_00001110
    addi r5, r30, 0x1
    lis r4, 0xcccd
    slwi r0, r5, 2
    addi r3, r1, 0x20
    subf r0, r5, r0
    subi r4, r4, 0x3333
    mulhwu r0, r4, r0
    srwi r0, r0, 2
    stw r0, 0x20(r1)
    cmplw r0, r31
    bge lbl_fn_802214F8_00001104
    addi r3, r1, 0x28
lbl_fn_802214F8_00001104:
    lwz r0, 0x0(r3)
    add r25, r30, r0
    b lbl_fn_802214F8_00001318
lbl_fn_802214F8_00001110:
    lis r3, 0xe39
    subi r0, r3, 0x1c72
    cmplw r30, r0
    bge lbl_fn_802214F8_00001148
    addi r0, r30, 0x1
    addi r3, r1, 0x24
    srwi r0, r0, 1
    stw r0, 0x24(r1)
    cmplw r0, r31
    bge lbl_fn_802214F8_0000113C
    addi r3, r1, 0x28
lbl_fn_802214F8_0000113C:
    lwz r0, 0x0(r3)
    add r25, r30, r0
    b lbl_fn_802214F8_00001318
lbl_fn_802214F8_00001148:
    lis r3, 0x1555
    addi r25, r3, 0x5555
    b lbl_fn_802214F8_00001318
lbl_fn_802214F8_00001154:
    lwz r0, 0x8(r28)
    cmplw r0, r3
    bge lbl_fn_802214F8_00001168
    addi r3, r28, 0x8
    b lbl_fn_802214F8_0000116C
lbl_fn_802214F8_00001168:
    addi r3, r1, 0x2c
lbl_fn_802214F8_0000116C:
    lwz r0, 0x0(r3)
    lwz r30, 0x4(r28)
    mulli r0, r0, 0xc
    add r31, r27, r0
    b lbl_fn_802214F8_00001210
lbl_fn_802214F8_00001180:
    lwz r0, 0x0(r30)
    srwi. r4, r0, 31
    bne lbl_fn_802214F8_000011B0
    lwz r3, 0x0(r27)
    srwi. r0, r3, 31
    bne lbl_fn_802214F8_000011B0
    lwz r0, 0x4(r27)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r27)
    stw r0, 0x8(r30)
    b lbl_fn_802214F8_00001208
lbl_fn_802214F8_000011B0:
    cmpwi r4, 0x0
    beq lbl_fn_802214F8_000011C0
    lwz r5, 0x4(r30)
    b lbl_fn_802214F8_000011C8
lbl_fn_802214F8_000011C0:
    lbz r0, 0x0(r30)
    clrlwi r5, r0, 25
lbl_fn_802214F8_000011C8:
    lwz r0, 0x0(r27)
    srwi. r0, r0, 31
    bne lbl_fn_802214F8_000011E4
    lbz r0, 0x0(r27)
    addi r6, r27, 0x1
    clrlwi r4, r0, 25
    b lbl_fn_802214F8_000011EC
lbl_fn_802214F8_000011E4:
    lwz r6, 0x8(r27)
    lwz r4, 0x4(r27)
lbl_fn_802214F8_000011EC:
    lbz r0, 0x1c(r1)
    add r7, r6, r4
    stb r0, 0x18(r1)
    mr r3, r30
    addi r8, r1, 0x18
    li r4, 0x0
    bl fn_80013F78
lbl_fn_802214F8_00001208:
    addi r27, r27, 0xc
    addi r30, r30, 0xc
lbl_fn_802214F8_00001210:
    cmplw r27, r31
    blt lbl_fn_802214F8_00001180
    lwz r0, 0x8(r28)
    lwz r5, 0x2c(r1)
    cmplw r5, r0
    bge lbl_fn_802214F8_00001270
    mulli r3, r0, 0xc
    lwz r4, 0x4(r28)
    subf r27, r5, r0
    subf r0, r27, r0
    stw r0, 0x8(r28)
    add r25, r4, r3
    b lbl_fn_802214F8_00001264
lbl_fn_802214F8_00001244:
    subic. r25, r25, 0xc
    beq lbl_fn_802214F8_00001260
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    beq lbl_fn_802214F8_00001260
    lwz r3, 0x8(r25)
    bl dtor_80084684
lbl_fn_802214F8_00001260:
    subi r27, r27, 0x1
lbl_fn_802214F8_00001264:
    cmpwi r27, 0x0
    bne lbl_fn_802214F8_00001244
    b lbl_fn_802214F8_00001480
lbl_fn_802214F8_00001270:
    cmplw r0, r5
    bge lbl_fn_802214F8_00001480
    mulli r0, r0, 0xc
    lwz r3, 0x4(r28)
    li r27, 0x0
    add r25, r3, r0
    b lbl_fn_802214F8_0000130C
lbl_fn_802214F8_0000128C:
    cmpwi r25, 0x0
    beq lbl_fn_802214F8_000012F8
    lwz r3, 0x0(r31)
    srwi. r0, r3, 31
    bne lbl_fn_802214F8_000012B8
    lwz r0, 0x4(r31)
    stw r3, 0x0(r25)
    stw r0, 0x4(r25)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r25)
    b lbl_fn_802214F8_000012F8
lbl_fn_802214F8_000012B8:
    stw r27, 0x0(r25)
    mr r3, r25
    stw r27, 0x4(r25)
    stw r27, 0x8(r25)
    lwz r4, 0x4(r31)
    bl fn_80013DC4
    lbz r0, 0x10(r1)
    mr r3, r25
    stb r0, 0x14(r1)
    addi r8, r1, 0x14
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x8(r31)
    lwz r0, 0x4(r31)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_802214F8_000012F8:
    lwz r3, 0x8(r28)
    addi r31, r31, 0xc
    addi r25, r25, 0xc
    addi r0, r3, 0x1
    stw r0, 0x8(r28)
lbl_fn_802214F8_0000130C:
    cmplw r31, r29
    bne lbl_fn_802214F8_0000128C
    b lbl_fn_802214F8_00001480
lbl_fn_802214F8_00001318:
    lwz r31, 0x8(r28)
    lwz r4, 0x4(r28)
    mulli r3, r31, 0xc
    subf r0, r31, r31
    stw r0, 0x8(r28)
    add r30, r4, r3
    b lbl_fn_802214F8_00001354
lbl_fn_802214F8_00001334:
    subic. r30, r30, 0xc
    beq lbl_fn_802214F8_00001350
    lwz r0, 0x0(r30)
    srwi. r0, r0, 31
    beq lbl_fn_802214F8_00001350
    lwz r3, 0x8(r30)
    bl dtor_80084684
lbl_fn_802214F8_00001350:
    subi r31, r31, 0x1
lbl_fn_802214F8_00001354:
    cmpwi r31, 0x0
    bne lbl_fn_802214F8_00001334
    lwz r3, 0x4(r28)
    cmpwi r3, 0x0
    beq lbl_fn_802214F8_00001378
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x4(r28)
    stw r0, 0xc(r28)
lbl_fn_802214F8_00001378:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r25, r0
    ble lbl_fn_802214F8_000013A8
    lis r3, __files@ha
    lis r4, lbl_807428F4@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_807428F4@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802214F8_000013A8:
    mulli r3, r25, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_802214F8_000013DC
    lis r3, __files@ha
    lis r4, lbl_80778910@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80778910@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802214F8_000013DC:
    stw r31, 0x4(r28)
    li r30, 0x0
    stw r25, 0xc(r28)
    lwz r0, 0x8(r28)
    mulli r0, r0, 0xc
    add r25, r31, r0
    b lbl_fn_802214F8_00001478
lbl_fn_802214F8_000013F8:
    cmpwi r25, 0x0
    beq lbl_fn_802214F8_00001464
    lwz r3, 0x0(r27)
    srwi. r0, r3, 31
    bne lbl_fn_802214F8_00001424
    lwz r0, 0x4(r27)
    stw r3, 0x0(r25)
    stw r0, 0x4(r25)
    lwz r0, 0x8(r27)
    stw r0, 0x8(r25)
    b lbl_fn_802214F8_00001464
lbl_fn_802214F8_00001424:
    stw r30, 0x0(r25)
    mr r3, r25
    stw r30, 0x4(r25)
    stw r30, 0x8(r25)
    lwz r4, 0x4(r27)
    bl fn_80013DC4
    lbz r0, 0x8(r1)
    mr r3, r25
    stb r0, 0xc(r1)
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x8(r27)
    lwz r0, 0x4(r27)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_802214F8_00001464:
    lwz r3, 0x8(r28)
    addi r27, r27, 0xc
    addi r25, r25, 0xc
    addi r0, r3, 0x1
    stw r0, 0x8(r28)
lbl_fn_802214F8_00001478:
    cmplw r27, r29
    bne lbl_fn_802214F8_000013F8
lbl_fn_802214F8_00001480:
    lwz r0, 0x10(r26)
    li r3, 0x1
    stw r0, 0x10(r28)
    b lbl_fn_802214F8_0000149C
lbl_fn_802214F8_00001490:
    addi r5, r5, 0x14
    bdnz lbl_fn_802214F8_0000101C
lbl_fn_802214F8_00001498:
    li r3, 0x0
lbl_fn_802214F8_0000149C:
    lmw r25, 0x34(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802219CC(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0x80
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    stfd f28, 0x90(r1)
    psq_st f28, 0x98(r1), 0, 0
    stfd f27, 0x80(r1)
    psq_st f27, 0x88(r1), 0, 0
    bl _savegpr_15
    lis r5, lbl_807428E0@ha
    fmr f27, f2
    fmr f28, f3
    lfs f29, lbl_80882FF0
    fadds f31, f1, f3
    lfd f30, lbl_807428E0@l(r5)
    mr r17, r3
    mr r21, r4
    addi r23, r1, 0x25
    addi r22, r1, 0x19
    addi r25, r1, 0x18
    addi r26, r1, 0x24
    xoris r28, r4, 0x8000
    li r20, 0x0
    li r16, 0x0
    li r24, 0x0
    li r30, 0x0
    lis r31, 0x4330
    lis r29, 0xff01
    b lbl_fn_802219CC_00001744
lbl_fn_802219CC_0000153C:
    lwz r0, 0x0(r17)
    lwzx r3, r24, r0
    add r27, r0, r24
    srwi. r0, r3, 31
    bne lbl_fn_802219CC_00001568
    lwz r0, 0x4(r27)
    stw r0, 0x28(r1)
    stw r3, 0x24(r1)
    lwz r0, 0x8(r27)
    stw r0, 0x2c(r1)
    b lbl_fn_802219CC_000015A8
lbl_fn_802219CC_00001568:
    stw r30, 0x24(r1)
    mr r3, r26
    stw r30, 0x28(r1)
    stw r30, 0x2c(r1)
    lwz r4, 0x4(r27)
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r26
    stb r0, 0x10(r1)
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x8(r27)
    lwz r0, 0x4(r27)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_802219CC_000015A8:
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    bne lbl_fn_802219CC_000015BC
    mr r4, r23
    b lbl_fn_802219CC_000015C0
lbl_fn_802219CC_000015BC:
    lwz r4, 0x2c(r1)
lbl_fn_802219CC_000015C0:
    stw r28, 0x34(r1)
    fmr f4, f28
    fmr f5, f28
    lwz r3, lbl_8087EEB0
    stw r31, 0x30(r1)
    fadds f1, f29, f31
    lfs f3, lbl_80882FF4
    lfd f0, 0x30(r1)
    lfs f6, lbl_80882FF0
    subi r5, r29, 0x1551
    fsubs f0, f0, f30
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    fmadds f2, f28, f0, f27
    bl fn_800616C0
    addi r18, r21, 0x2
    li r19, 0x0
    li r15, 0x0
    b lbl_fn_802219CC_00001708
lbl_fn_802219CC_00001610:
    lwz r0, 0x8(r17)
    add r3, r0, r15
    lwz r0, 0x4(r3)
    lwzx r3, r16, r0
    add r27, r0, r16
    srwi. r0, r3, 31
    bne lbl_fn_802219CC_00001644
    lwz r0, 0x4(r27)
    stw r0, 0x1c(r1)
    stw r3, 0x18(r1)
    lwz r0, 0x8(r27)
    stw r0, 0x20(r1)
    b lbl_fn_802219CC_00001684
lbl_fn_802219CC_00001644:
    stw r30, 0x18(r1)
    mr r3, r25
    stw r30, 0x1c(r1)
    stw r30, 0x20(r1)
    lwz r4, 0x4(r27)
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r25
    stb r0, 0x8(r1)
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x8(r27)
    lwz r0, 0x4(r27)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_802219CC_00001684:
    lwz r0, 0x18(r1)
    lwz r3, 0x8(r17)
    srwi. r0, r0, 31
    add r3, r3, r15
    lwz r5, 0x10(r3)
    bne lbl_fn_802219CC_000016A4
    mr r4, r22
    b lbl_fn_802219CC_000016A8
lbl_fn_802219CC_000016A4:
    lwz r4, 0x20(r1)
lbl_fn_802219CC_000016A8:
    xoris r0, r18, 0x8000
    stw r0, 0x34(r1)
    fmr f4, f28
    lwz r3, lbl_8087EEB0
    stw r31, 0x30(r1)
    fmr f5, f28
    fadds f1, f29, f31
    lfs f3, lbl_80882FF4
    lfd f0, 0x30(r1)
    li r6, 0x1
    lfs f6, lbl_80882FF0
    li r7, 0x0
    fsubs f0, f0, f30
    li r8, 0x0
    addi r18, r18, 0x1
    fmadds f2, f28, f0, f27
    bl fn_800616C0
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802219CC_00001700
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_802219CC_00001700:
    addi r19, r19, 0x1
    addi r15, r15, 0x14
lbl_fn_802219CC_00001708:
    lwz r0, 0xc(r17)
    cmpw r19, r0
    blt lbl_fn_802219CC_00001610
    lwz r3, 0x0(r17)
    lwz r0, 0x24(r1)
    add r3, r3, r24
    lfs f0, 0xc(r3)
    srwi. r0, r0, 31
    fadds f29, f29, f0
    beq lbl_fn_802219CC_00001738
    lwz r3, 0x2c(r1)
    bl dtor_80084684
lbl_fn_802219CC_00001738:
    addi r24, r24, 0x10
    addi r20, r20, 0x1
    addi r16, r16, 0xc
lbl_fn_802219CC_00001744:
    lwz r0, 0x4(r17)
    cmpw r20, r0
    blt lbl_fn_802219CC_0000153C
    addi r11, r1, 0x80
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    psq_l f28, 0x98(r1), 0, 0
    lfd f28, 0x90(r1)
    psq_l f27, 0x88(r1), 0, 0
    lfd f27, 0x80(r1)
    bl _restgpr_15
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_80221CAC(void)
{
    nofralloc
    lfs f6, lbl_80882FF0
    li r7, 0x0
    li r8, 0x0
    b fn_800616C0
}

asm void fn_80221CBC(void)
{
    nofralloc
    lwz r0, 0xc(r3)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80221CBC_000017D4
lbl_fn_80221CBC_000017B4:
    lwz r6, 0x8(r3)
    lwzx r0, r6, r5
    cmplw r4, r0
    bne lbl_fn_80221CBC_000017CC
    li r3, 0x1
    blr
lbl_fn_80221CBC_000017CC:
    addi r5, r5, 0x14
    bdnz lbl_fn_80221CBC_000017B4
lbl_fn_80221CBC_000017D4:
    li r3, 0x0
    blr
}

asm void fn_80221CF8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r4, lbl_8087F540
    lwz r31, 0x70(r4)
    lwz r5, 0x94(r31)
    cmpw r3, r5
    bne lbl_fn_80221CF8_00001818
    li r3, 0x0
    b lbl_fn_80221CF8_000018C8
lbl_fn_80221CF8_00001818:
    lwz r0, 0xbc(r31)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80221CF8_0000184C
lbl_fn_80221CF8_0000182C:
    lwz r3, 0xb8(r31)
    lwzx r3, r3, r4
    lwz r0, 0xc(r3)
    cmpw r5, r0
    bne lbl_fn_80221CF8_00001844
    b lbl_fn_80221CF8_00001850
lbl_fn_80221CF8_00001844:
    addi r4, r4, 0x8
    bdnz lbl_fn_80221CF8_0000182C
lbl_fn_80221CF8_0000184C:
    li r3, 0x0
lbl_fn_80221CF8_00001850:
    cmpwi r3, 0x0
    bne lbl_fn_80221CF8_00001860
    li r3, -0x1
    b lbl_fn_80221CF8_000018C8
lbl_fn_80221CF8_00001860:
    bl fn_8053B02C
    b lbl_fn_80221CF8_000018BC
lbl_fn_80221CF8_00001868:
    cmpw r29, r3
    addi r30, r30, 0x1
    bne lbl_fn_80221CF8_0000187C
    mr r3, r30
    b lbl_fn_80221CF8_000018C8
lbl_fn_80221CF8_0000187C:
    lwz r0, 0xbc(r31)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80221CF8_000018B0
lbl_fn_80221CF8_00001890:
    lwz r5, 0xb8(r31)
    lwzx r5, r5, r4
    lwz r0, 0xc(r5)
    cmpw r3, r0
    bne lbl_fn_80221CF8_000018A8
    b lbl_fn_80221CF8_000018B4
lbl_fn_80221CF8_000018A8:
    addi r4, r4, 0x8
    bdnz lbl_fn_80221CF8_00001890
lbl_fn_80221CF8_000018B0:
    li r5, 0x0
lbl_fn_80221CF8_000018B4:
    mr r3, r5
    bl fn_8053B02C
lbl_fn_80221CF8_000018BC:
    cmpwi r3, -0x1
    bne lbl_fn_80221CF8_00001868
    li r3, -0x1
lbl_fn_80221CF8_000018C8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80221E00(void)
{
    nofralloc
    lwz r3, 0xc(r3)
    blr
}

asm void fn_80221E08(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, lbl_80882FF8
    addi r7, r3, 0x14
    stw r0, 0x24(r1)
    li r5, 0x6
    lfs f0, lbl_80882FFC
    li r6, 0x19
    stw r31, 0x1c(r1)
    li r31, -0x1
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    lis r29, lbl_807835F0@ha
    addi r29, r29, lbl_807835F0@l
    stw r28, 0x10(r1)
    mr r28, r3
    addi r4, r29, 0x0
    stw r30, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f1, 0x8(r3)
    stfs f0, 0xc(r3)
    stw r31, 0x10(r3)
    stw r30, 0x14(r3)
    stw r30, 0x18(r3)
    stw r30, 0x1c(r3)
    stw r30, 0x20(r3)
    stw r30, 0x24(r3)
    stw r30, 0x28(r3)
    stw r30, 0x2c(r3)
    stw r30, 0x30(r3)
    stw r30, 0x34(r3)
    stw r30, 0x38(r3)
    stw r30, 0x3c(r3)
    stw r30, 0x40(r3)
    stw r30, 0x44(r3)
    stw r30, 0x48(r3)
    stw r30, 0x4c(r3)
    stw r30, 0x50(r3)
    stw r30, 0x54(r3)
    stw r30, 0x58(r3)
    stw r30, 0x74(r3)
    mr r3, r7
    bl fn_80220168
    addi r3, r28, 0x2c
    addi r4, r29, 0x60
    li r5, 0x6
    li r6, 0x19
    bl fn_80220168
    addi r3, r28, 0x44
    addi r4, r29, 0xc0
    li r5, 0xa
    li r6, 0x19
    bl fn_80220168
    lis r9, fn_80221FA4@ha
    lis r8, fn_80222AD0@ha
    lis r7, fn_8022354C@ha
    lis r6, fn_80223A10@ha
    lis r5, fn_80224184@ha
    lis r4, fn_80224638@ha
    addi r9, r9, fn_80221FA4@l
    addi r8, r8, fn_80222AD0@l
    addi r7, r7, fn_8022354C@l
    addi r6, r6, fn_80223A10@l
    addi r5, r5, fn_80224184@l
    addi r4, r4, fn_80224638@l
    stw r31, 0x10(r28)
    mr r3, r28
    stw r30, 0x74(r28)
    stw r9, 0x5c(r28)
    stw r8, 0x60(r28)
    stw r7, 0x64(r28)
    stw r6, 0x68(r28)
    stw r5, 0x6c(r28)
    stw r4, 0x70(r28)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
