#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_15(void);
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _savegpr_15(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8000D528(void);
extern void fn_8000FAE4(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80544294(void);
extern void fn_80544298(void);
extern void fn_8054439C(void);
extern void fn_805444C4(void);
extern void fn_805445C8(void);
extern void fn_80544654(void);
extern void fn_80544844(void);
extern void fn_80544E78(void);
extern void fn_80545088(void);
extern void fn_80545C40(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern void memmove(void);

/* External data declarations */
extern u8 lbl_8075E148[];
extern u8 lbl_80775A20[];
extern u8 lbl_80775A48[];
extern u8 lbl_80775A88[];
extern u8 lbl_80779F68[];
extern u8 lbl_80788D00[];
extern u8 lbl_807945D0[];
extern u8 lbl_807945EC[];

/* Small data declarations */
extern u32 lbl_8087D6DC;
extern u32 lbl_8087D6E0;
extern u32 lbl_8087E4C0;
extern u32 lbl_8087E4C4;

/* Function declarations */
void fn_80542688(void);
void fn_805428AC(void);
void fn_80543064(void);
void fn_805430A4(void);
void fn_805430C0(void);
void fn_805430EC(void);
void fn_805430F4(void);
void fn_805430F8(void);
void fn_805430FC(void);
void fn_80543104(void);
void fn_80543108(void);
void fn_8054310C(void);
void fn_805436B4(void);
void fn_805436BC(void);
void fn_805436C4(void);
void fn_805436CC(void);
void fn_805436D4(void);
void fn_805436DC(void);
void fn_805436E4(void);
void fn_805436EC(void);
void fn_805436F4(void);
void fn_805436FC(void);
void fn_80543704(void);
void fn_80543728(void);
void fn_80543730(void);
void fn_805437E8(void);
void fn_80543C04(void);
void fn_80543F64(void);
void fn_80544074(void);

asm void fn_80542688(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    cmpwi r4, 0x0
    mr r31, r4
    mr r26, r5
    beq lbl_fn_80542688_0000020C
    lwz r0, 0x8(r5)
    li r6, 0x0
    lwz r30, 0x4(r5)
    lis r3, 0x2aab
    mulli r0, r0, 0xc
    lwz r5, 0x0(r5)
    subi r3, r3, 0x5555
    stw r5, 0x0(r4)
    add r29, r30, r0
    stw r6, 0x4(r4)
    subf r0, r30, r29
    mulhw r0, r3, r0
    stw r6, 0x8(r4)
    stw r6, 0xc(r4)
    srawi r0, r0, 1
    srwi r3, r0, 31
    add. r27, r0, r3
    beq lbl_fn_80542688_00000120
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r27, r0
    ble lbl_fn_80542688_000000A0
    lis r4, lbl_8075E148@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075E148@l
    addi r3, r3, __files@l
    addi r4, r4, 0x8b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80542688_000000A0:
    mulli r3, r27, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_80542688_000000D4
    lis r3, __files@ha
    lis r4, lbl_80788D00@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80788D00@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80542688_000000D4:
    lwz r0, 0x8(r31)
    stw r25, 0x4(r31)
    mulli r0, r0, 0xc
    stw r27, 0xc(r31)
    add r4, r25, r0
    b lbl_fn_80542688_00000118
lbl_fn_80542688_000000EC:
    cmpwi r4, 0x0
    beq lbl_fn_80542688_00000104
    lfs f2, 0x8(r30)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
lbl_fn_80542688_00000104:
    lwz r3, 0x8(r31)
    addi r30, r30, 0xc
    addi r4, r4, 0xc
    addi r0, r3, 0x1
    stw r0, 0x8(r31)
lbl_fn_80542688_00000118:
    cmplw r30, r29
    bne lbl_fn_80542688_000000EC
lbl_fn_80542688_00000120:
    lwz r0, 0x18(r26)
    li r3, 0x0
    lwz r28, 0x14(r26)
    addi r30, r31, 0x14
    slwi r0, r0, 2
    lfs f0, 0x10(r26)
    add r24, r28, r0
    stfs f0, 0x10(r31)
    subf r27, r28, r24
    srawi r0, r27, 2
    stw r3, 0x14(r31)
    addze. r29, r0
    stw r3, 0x18(r31)
    stw r3, 0x1c(r31)
    beq lbl_fn_80542688_00000204
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r29, r0
    ble lbl_fn_80542688_00000190
    lis r4, lbl_8075E148@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075E148@l
    addi r3, r3, __files@l
    addi r4, r4, 0x8b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80542688_00000190:
    slwi r3, r29, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_80542688_000001C4
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80542688_000001C4:
    subf r0, r28, r24
    lwz r3, 0x4(r30)
    srawi r0, r0, 2
    stw r25, 0x0(r30)
    slwi r3, r3, 2
    mr r4, r28
    addze r0, r0
    stw r29, 0x8(r30)
    add r3, r25, r3
    slwi r5, r0, 2
    bl memmove
    srawi r0, r27, 2
    lwz r3, 0x4(r30)
    addze r0, r0
    add r0, r3, r0
    stw r0, 0x4(r30)
lbl_fn_80542688_00000204:
    lwz r0, 0x20(r26)
    stw r0, 0x20(r31)
lbl_fn_80542688_0000020C:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805428AC(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_15
    li r0, 0x1
    stw r0, 0x8(r1)
    lis r5, 0x71c
    mr r31, r3
    lwz r16, 0x8(r3)
    addi r0, r5, 0x71c7
    mr r15, r4
    subf r0, r16, r0
    cmplwi r0, 0x1
    bge lbl_fn_805428AC_00000284
    lis r4, lbl_8075E148@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075E148@l
    addi r3, r3, __files@l
    addi r4, r4, 0x8b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805428AC_00000284:
    lis r3, 0x25f
    subi r0, r3, 0x2f69
    cmplw r16, r0
    bge lbl_fn_805428AC_000002BC
    addi r4, r16, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x10(r1)
    cmplwi r0, 0x1
    b lbl_fn_805428AC_000002DC
lbl_fn_805428AC_000002BC:
    lis r3, 0x4be
    subi r0, r3, 0x5ed2
    cmplw r16, r0
    bge lbl_fn_805428AC_000002DC
    addi r0, r16, 0x1
    srwi r0, r0, 1
    stw r0, 0xc(r1)
    cmplwi r0, 0x1
lbl_fn_805428AC_000002DC:
    lwz r4, 0x4(r31)
    li r5, 0x0
    lis r3, 0x71c
    lwz r22, 0x8(r31)
    addi r0, r3, 0x71c7
    addi r4, r4, 0x1
    subf r3, r22, r4
    addi r6, r31, 0x8
    subf r0, r22, r0
    stw r5, 0x20(r1)
    cmplw r3, r0
    stw r5, 0x24(r1)
    stw r5, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r3, 0x1c(r1)
    ble lbl_fn_805428AC_00000344
    lis r4, lbl_8075E148@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075E148@l
    addi r3, r3, __files@l
    addi r4, r4, 0x8b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805428AC_00000344:
    lis r3, 0x25f
    subi r0, r3, 0x2f69
    cmplw r22, r0
    bge lbl_fn_805428AC_00000394
    addi r5, r22, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x1c(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x14
    srwi r4, r4, 2
    stw r4, 0x14(r1)
    cmplw r4, r0
    bge lbl_fn_805428AC_00000388
    addi r3, r1, 0x1c
lbl_fn_805428AC_00000388:
    lwz r0, 0x0(r3)
    add r16, r22, r0
    b lbl_fn_805428AC_000003D8
lbl_fn_805428AC_00000394:
    lis r3, 0x4be
    subi r0, r3, 0x5ed2
    cmplw r22, r0
    bge lbl_fn_805428AC_000003D0
    addi r3, r22, 0x1
    lwz r0, 0x1c(r1)
    srwi r3, r3, 1
    stw r3, 0x18(r1)
    cmplw r3, r0
    addi r3, r1, 0x18
    bge lbl_fn_805428AC_000003C4
    addi r3, r1, 0x1c
lbl_fn_805428AC_000003C4:
    lwz r0, 0x0(r3)
    add r16, r22, r0
    b lbl_fn_805428AC_000003D8
lbl_fn_805428AC_000003D0:
    lis r3, 0x71c
    addi r16, r3, 0x71c7
lbl_fn_805428AC_000003D8:
    lis r3, 0x71c
    addi r0, r3, 0x71c7
    cmplw r16, r0
    ble lbl_fn_805428AC_0000040C
    lis r4, lbl_8075E148@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075E148@l
    addi r3, r3, __files@l
    addi r4, r4, 0x8b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805428AC_0000040C:
    mulli r3, r16, 0x24
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r17, r3
    bne lbl_fn_805428AC_00000440
    lis r3, __files@ha
    lis r4, lbl_807945D0@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807945D0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805428AC_00000440:
    lwz r5, 0x4(r31)
    lis r22, __files@ha
    lwz r0, 0x24(r1)
    lis r23, lbl_8075E148@ha
    mulli r4, r5, 0x24
    stw r16, 0x28(r1)
    addi r23, r23, lbl_8075E148@l
    stw r17, 0x20(r1)
    addi r22, r22, __files@l
    mulli r3, r0, 0x24
    add r0, r17, r4
    stw r5, 0x30(r1)
    lis r18, lbl_80788D00@ha
    add. r25, r3, r0
    li r24, 0x0
    lis r3, 0x1555
    lis r4, 0x2aab
    lis r17, 0x4000
    lis r16, lbl_80775A88@ha
    beq lbl_fn_805428AC_00000628
    lwz r5, 0x8(r15)
    subi r0, r4, 0x5555
    lwz r19, 0x4(r15)
    mulli r4, r5, 0xc
    lwz r5, 0x0(r15)
    stw r5, 0x0(r25)
    add r20, r19, r4
    stw r24, 0x4(r25)
    subf r4, r19, r20
    mulhw r0, r0, r4
    stw r24, 0x8(r25)
    stw r24, 0xc(r25)
    srawi r0, r0, 1
    srwi r4, r0, 31
    add. r26, r0, r4
    beq lbl_fn_805428AC_00000564
    addi r0, r3, 0x5555
    cmplw r26, r0
    ble lbl_fn_805428AC_000004F0
    addi r4, r23, 0x8b
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805428AC_000004F0:
    mulli r3, r26, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r21, r3
    bne lbl_fn_805428AC_00000518
    addi r3, r22, 0xa0
    addi r4, r18, lbl_80788D00@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805428AC_00000518:
    stw r21, 0x4(r25)
    stw r26, 0xc(r25)
    lwz r0, 0x8(r25)
    mulli r0, r0, 0xc
    add r4, r21, r0
    b lbl_fn_805428AC_0000055C
lbl_fn_805428AC_00000530:
    cmpwi r4, 0x0
    beq lbl_fn_805428AC_00000548
    lfs f2, 0x8(r19)
    psq_l f1, 0x0(r19), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
lbl_fn_805428AC_00000548:
    lwz r3, 0x8(r25)
    addi r19, r19, 0xc
    addi r4, r4, 0xc
    addi r0, r3, 0x1
    stw r0, 0x8(r25)
lbl_fn_805428AC_0000055C:
    cmplw r19, r20
    bne lbl_fn_805428AC_00000530
lbl_fn_805428AC_00000564:
    lwz r0, 0x18(r15)
    lwz r19, 0x14(r15)
    slwi r0, r0, 2
    lfs f0, 0x10(r15)
    add r18, r19, r0
    stfs f0, 0x10(r25)
    subf r20, r19, r18
    srawi r0, r20, 2
    stw r24, 0x14(r25)
    addze. r21, r0
    stw r24, 0x18(r25)
    stw r24, 0x1c(r25)
    beq lbl_fn_805428AC_00000620
    subi r0, r17, 0x1
    cmplw r21, r0
    ble lbl_fn_805428AC_000005B8
    addi r4, r23, 0x8b
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805428AC_000005B8:
    slwi r3, r21, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r17, r3
    bne lbl_fn_805428AC_000005E0
    addi r3, r22, 0xa0
    addi r4, r16, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805428AC_000005E0:
    stw r17, 0x14(r25)
    subf r0, r19, r18
    srawi r0, r0, 2
    mr r4, r19
    stw r21, 0x1c(r25)
    addze r0, r0
    slwi r5, r0, 2
    lwz r3, 0x18(r25)
    slwi r0, r3, 2
    add r3, r17, r0
    bl memmove
    srawi r0, r20, 2
    lwz r3, 0x18(r25)
    addze r0, r0
    add r0, r3, r0
    stw r0, 0x18(r25)
lbl_fn_805428AC_00000620:
    lwz r0, 0x20(r15)
    stw r0, 0x20(r25)
lbl_fn_805428AC_00000628:
    lwz r5, 0x4(r31)
    lis r3, __files@ha
    lwz r0, 0x30(r1)
    lis r4, lbl_8075E148@ha
    lwz r7, 0x24(r1)
    mulli r6, r5, 0x24
    lwz r18, 0x0(r31)
    addi r25, r4, lbl_8075E148@l
    addi r7, r7, 0x1
    lwz r5, 0x20(r1)
    mulli r0, r0, 0x24
    stw r7, 0x24(r1)
    add r20, r18, r6
    addi r26, r3, __files@l
    add r21, r5, r0
    lis r24, 0x1555
    lis r27, lbl_80788D00@ha
    li r22, 0x0
    lis r23, 0x2aab
    lis r28, 0x4000
    lis r30, lbl_80775A88@ha
    b lbl_fn_805428AC_0000083C
lbl_fn_805428AC_00000680:
    subic. r21, r21, 0x24
    subi r20, r20, 0x24
    beq lbl_fn_805428AC_00000824
    lwz r3, 0x0(r20)
    subi r0, r23, 0x5555
    stw r3, 0x0(r21)
    stw r22, 0x4(r21)
    stw r22, 0x8(r21)
    stw r22, 0xc(r21)
    lwz r3, 0x8(r20)
    lwz r19, 0x4(r20)
    mulli r3, r3, 0xc
    add r29, r19, r3
    subf r3, r19, r29
    mulhw r0, r0, r3
    srawi r0, r0, 1
    srwi r3, r0, 31
    add. r16, r0, r3
    beq lbl_fn_805428AC_00000760
    addi r0, r24, 0x5555
    cmplw r16, r0
    ble lbl_fn_805428AC_000006EC
    addi r4, r25, 0x8b
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805428AC_000006EC:
    mulli r3, r16, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r15, r3
    bne lbl_fn_805428AC_00000714
    addi r3, r26, 0xa0
    addi r4, r27, lbl_80788D00@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805428AC_00000714:
    stw r15, 0x4(r21)
    stw r16, 0xc(r21)
    lwz r0, 0x8(r21)
    mulli r0, r0, 0xc
    add r4, r15, r0
    b lbl_fn_805428AC_00000758
lbl_fn_805428AC_0000072C:
    cmpwi r4, 0x0
    beq lbl_fn_805428AC_00000744
    lfs f2, 0x8(r19)
    psq_l f1, 0x0(r19), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
lbl_fn_805428AC_00000744:
    lwz r3, 0x8(r21)
    addi r19, r19, 0xc
    addi r4, r4, 0xc
    addi r0, r3, 0x1
    stw r0, 0x8(r21)
lbl_fn_805428AC_00000758:
    cmplw r19, r29
    bne lbl_fn_805428AC_0000072C
lbl_fn_805428AC_00000760:
    lfs f0, 0x10(r20)
    stfs f0, 0x10(r21)
    stw r22, 0x14(r21)
    stw r22, 0x18(r21)
    stw r22, 0x1c(r21)
    lwz r0, 0x18(r20)
    lwz r17, 0x14(r20)
    slwi r0, r0, 2
    add r19, r17, r0
    subf r16, r17, r19
    srawi r0, r16, 2
    addze. r15, r0
    beq lbl_fn_805428AC_0000081C
    subi r0, r28, 0x1
    cmplw r15, r0
    ble lbl_fn_805428AC_000007B4
    addi r4, r25, 0x8b
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805428AC_000007B4:
    slwi r3, r15, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_805428AC_000007DC
    addi r3, r26, 0xa0
    addi r4, r30, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805428AC_000007DC:
    stw r29, 0x14(r21)
    subf r0, r17, r19
    srawi r0, r0, 2
    mr r4, r17
    stw r15, 0x1c(r21)
    addze r0, r0
    slwi r5, r0, 2
    lwz r3, 0x18(r21)
    slwi r0, r3, 2
    add r3, r29, r0
    bl memmove
    srawi r0, r16, 2
    lwz r3, 0x18(r21)
    addze r0, r0
    add r0, r3, r0
    stw r0, 0x18(r21)
lbl_fn_805428AC_0000081C:
    lwz r0, 0x20(r20)
    stw r0, 0x20(r21)
lbl_fn_805428AC_00000824:
    lwz r4, 0x30(r1)
    lwz r3, 0x24(r1)
    subi r0, r4, 0x1
    stw r0, 0x30(r1)
    addi r0, r3, 0x1
    stw r0, 0x24(r1)
lbl_fn_805428AC_0000083C:
    cmplw r18, r20
    blt lbl_fn_805428AC_00000680
    lwz r0, 0x30(r1)
    addi r15, r1, 0x20
    lwz r9, 0x4(r31)
    mulli r3, r0, 0x24
    lwz r4, 0x24(r1)
    lwz r8, 0x0(r31)
    lwz r5, 0x20(r1)
    mulli r0, r9, 0x24
    lwz r7, 0x8(r31)
    lwz r6, 0x28(r1)
    add r20, r8, r3
    stw r6, 0x8(r31)
    add r17, r20, r0
    stw r7, 0x28(r1)
    stw r5, 0x0(r31)
    stw r8, 0x20(r1)
    stw r4, 0x4(r31)
    stw r9, 0x24(r1)
    b lbl_fn_805428AC_00000904
lbl_fn_805428AC_00000890:
    subic. r17, r17, 0x24
    beq lbl_fn_805428AC_00000904
    addic. r16, r17, 0x4
    beq lbl_fn_805428AC_00000904
    addic. r3, r16, 0x10
    beq lbl_fn_805428AC_000008D4
    beq lbl_fn_805428AC_000008D4
    beq lbl_fn_805428AC_000008D4
    beq lbl_fn_805428AC_000008D4
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805428AC_000008D4
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_805428AC_000008D4:
    cmpwi r16, 0x0
    beq lbl_fn_805428AC_00000904
    beq lbl_fn_805428AC_00000904
    beq lbl_fn_805428AC_00000904
    lwz r0, 0x0(r16)
    cmpwi r0, 0x0
    beq lbl_fn_805428AC_00000904
    lwz r0, 0x4(r16)
    subf r0, r0, r0
    stw r0, 0x4(r16)
    lwz r3, 0x0(r16)
    bl dtor_80084684
lbl_fn_805428AC_00000904:
    cmplw r17, r20
    bgt lbl_fn_805428AC_00000890
    cmpwi r15, 0x0
    li r0, 0x0
    stw r0, 0x24(r1)
    beq lbl_fn_805428AC_000009C4
    lwz r3, 0x20(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805428AC_000009C4
    mulli r0, r0, 0x24
    li r15, 0x0
    stw r15, 0x24(r1)
    add r17, r3, r0
    b lbl_fn_805428AC_000009B4
lbl_fn_805428AC_0000093C:
    subic. r17, r17, 0x24
    beq lbl_fn_805428AC_000009B0
    addic. r16, r17, 0x4
    beq lbl_fn_805428AC_000009B0
    addic. r3, r16, 0x10
    beq lbl_fn_805428AC_00000980
    beq lbl_fn_805428AC_00000980
    beq lbl_fn_805428AC_00000980
    beq lbl_fn_805428AC_00000980
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805428AC_00000980
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_805428AC_00000980:
    cmpwi r16, 0x0
    beq lbl_fn_805428AC_000009B0
    beq lbl_fn_805428AC_000009B0
    beq lbl_fn_805428AC_000009B0
    lwz r0, 0x0(r16)
    cmpwi r0, 0x0
    beq lbl_fn_805428AC_000009B0
    lwz r0, 0x4(r16)
    subf r0, r0, r0
    stw r0, 0x4(r16)
    lwz r3, 0x0(r16)
    bl dtor_80084684
lbl_fn_805428AC_000009B0:
    subi r15, r15, 0x1
lbl_fn_805428AC_000009B4:
    cmpwi r15, 0x0
    bne lbl_fn_805428AC_0000093C
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_805428AC_000009C4:
    addi r11, r1, 0x80
    bl _restgpr_15
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80543064(void)
{
    nofralloc
    lwz r0, 0x188(r3)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80543064_00000A14
lbl_fn_80543064_000009F0:
    lwz r0, 0x184(r3)
    add r6, r0, r5
    lwzx r0, r5, r0
    cmpw r4, r0
    bne lbl_fn_80543064_00000A0C
    addi r3, r6, 0x4
    blr
lbl_fn_80543064_00000A0C:
    addi r5, r5, 0x24
    bdnz lbl_fn_80543064_000009F0
lbl_fn_80543064_00000A14:
    li r3, 0x0
    blr
}

asm void fn_805430A4(void)
{
    nofralloc
    cmplwi r4, 0x3
    bgtlr
    lwz r3, 0x298(r3)
    slwi r0, r4, 3
    stwux r5, r3, r0
    stw r6, 0x4(r3)
    blr
}

asm void fn_805430C0(void)
{
    nofralloc
    cmplwi r4, 0x3
    bgt lbl_fn_805430C0_00000A5C
    slwi r0, r4, 3
    lwz r3, 0x298(r3)
    lwzux r0, r3, r0
    cmpw r5, r0
    bne lbl_fn_805430C0_00000A5C
    lwz r3, 0x4(r3)
    blr
lbl_fn_805430C0_00000A5C:
    li r3, -0x1
    blr
}

asm void fn_805430EC(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_805430F4(void)
{
    nofralloc
    blr
}

asm void fn_805430F8(void)
{
    nofralloc
    blr
}

asm void fn_805430FC(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80543104(void)
{
    nofralloc
    blr
}

asm void fn_80543108(void)
{
    nofralloc
    blr
}

asm void fn_8054310C(void)
{
    nofralloc
    stwu r1, -0x1f0(r1)
    mflr r0
    mr r6, r5
    stw r0, 0x1f4(r1)
    mr r0, r4
    mr r5, r0
    stw r31, 0x1ec(r1)
    stw r30, 0x1e8(r1)
    stw r29, 0x1e4(r1)
    mr r29, r3
    lwz r4, 0xc(r3)
    addi r3, r1, 0x20
    bl fn_8000D528
    lwz r0, 0x4(r29)
    addi r30, r1, 0x20
    lwz r4, 0x8(r29)
    cmplw r0, r4
    bge lbl_fn_8054310C_00000C80
    mulli r0, r0, 0x1c0
    lwz r3, 0x0(r29)
    add. r31, r3, r0
    beq lbl_fn_8054310C_00000C70
    mr r3, r31
    mr r4, r30
    bl fn_80543730
    lis r4, lbl_80775A20@ha
    addi r3, r31, 0x24
    addi r4, r4, lbl_80775A20@l
    stw r4, 0x0(r31)
    addi r4, r30, 0x24
    lwz r0, 0x38(r1)
    stw r0, 0x18(r31)
    lwz r0, 0x3c(r1)
    stw r0, 0x1c(r31)
    lwz r0, 0x40(r1)
    stw r0, 0x20(r31)
    bl fn_80543C04
    lwz r0, 0x78(r1)
    addi r3, r31, 0x5c
    stw r0, 0x58(r31)
    addi r4, r30, 0x5c
    bl fn_805437E8
    addi r3, r31, 0xac
    addi r4, r30, 0xac
    bl fn_80543F64
    lwz r0, 0xdc(r1)
    addi r3, r31, 0x118
    lwz r5, 0xd8(r1)
    addi r4, r30, 0x118
    stw r5, 0xb8(r31)
    stw r0, 0xbc(r31)
    lwz r0, 0xe0(r1)
    stw r0, 0xc0(r31)
    lfs f2, 0xec(r1)
    psq_l f1, 0xc4(r30), 0, 0
    psq_st f1, 0xc4(r31), 0, 0
    stfs f2, 0xcc(r31)
    lfs f2, 0xf8(r1)
    psq_l f1, 0xd0(r30), 0, 0
    psq_st f1, 0xd0(r31), 0, 0
    stfs f2, 0xd8(r31)
    lfs f2, 0x104(r1)
    psq_l f1, 0xdc(r30), 0, 0
    psq_st f1, 0xdc(r31), 0, 0
    stfs f2, 0xe4(r31)
    lfs f2, 0x110(r1)
    psq_l f1, 0xe8(r30), 0, 0
    psq_st f1, 0xe8(r31), 0, 0
    stfs f2, 0xf0(r31)
    lfs f2, 0x11c(r1)
    psq_l f1, 0xf4(r30), 0, 0
    psq_st f1, 0xf4(r31), 0, 0
    stfs f2, 0xfc(r31)
    lfs f2, 0x128(r1)
    psq_l f1, 0x100(r30), 0, 0
    psq_st f1, 0x100(r31), 0, 0
    stfs f2, 0x108(r31)
    lfs f2, 0x134(r1)
    psq_l f1, 0x10c(r30), 0, 0
    psq_st f1, 0x10c(r31), 0, 0
    stfs f2, 0x114(r31)
    bl fn_80544074
    addi r3, r31, 0x124
    addi r4, r30, 0x124
    bl fn_80544074
    lwz r0, 0x150(r1)
    addi r3, r31, 0x148
    stw r0, 0x130(r31)
    addi r4, r30, 0x148
    lwz r0, 0x154(r1)
    stw r0, 0x134(r31)
    lwz r0, 0x158(r1)
    stw r0, 0x138(r31)
    lwz r0, 0x15c(r1)
    stw r0, 0x13c(r31)
    lwz r0, 0x160(r1)
    stw r0, 0x140(r31)
    lbz r0, 0x164(r1)
    stb r0, 0x144(r31)
    lbz r0, 0x165(r1)
    stb r0, 0x145(r31)
    lbz r0, 0x166(r1)
    stb r0, 0x146(r31)
    bl fn_80544298
    lwz r0, 0x174(r1)
    addi r3, r31, 0x158
    stw r0, 0x154(r31)
    addi r4, r30, 0x158
    bl fn_8054439C
    addi r3, r31, 0x164
    addi r4, r30, 0x164
    bl fn_805444C4
    addi r3, r31, 0x170
    addi r4, r30, 0x170
    bl fn_8054439C
    addi r3, r31, 0x17c
    addi r4, r30, 0x17c
    bl fn_805444C4
    lbz r0, 0x1a8(r1)
    addi r3, r31, 0x18c
    stb r0, 0x188(r31)
    addi r4, r30, 0x18c
    bl fn_805445C8
lbl_fn_8054310C_00000C70:
    lwz r3, 0x4(r29)
    addi r0, r3, 0x1
    stw r0, 0x4(r29)
    b lbl_fn_8054310C_00000D6C
lbl_fn_8054310C_00000C80:
    lis r3, 0x92
    addi r0, r3, 0x4924
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_8054310C_00000CB8
    lis r4, lbl_8075E148@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075E148@l
    addi r3, r3, __files@l
    addi r4, r4, 0x8b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8054310C_00000CB8:
    li r4, 0x0
    addi r0, r29, 0x8
    stw r4, 0x8(r1)
    mr r3, r29
    stw r4, 0xc(r1)
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    stw r4, 0x18(r1)
    lwz r4, 0x4(r29)
    lwz r5, 0x8(r29)
    addi r0, r4, 0x1
    subf r4, r5, r0
    bl fn_80544654
    lwz r4, 0x4(r29)
    mr r5, r3
    addi r3, r1, 0x8
    addi r4, r4, 0x1
    bl fn_80545C40
    lwz r0, 0x4(r29)
    mr r5, r30
    stw r0, 0x18(r1)
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_80544E78
    lwz r0, 0x4(r29)
    addi r3, r1, 0x8
    lwz r4, 0x0(r29)
    mulli r0, r0, 0x1c0
    add r5, r4, r0
    bl fn_80545088
    lwz r5, 0x8(r29)
    addi r3, r1, 0x8
    lwz r0, 0x10(r1)
    li r4, -0x1
    stw r0, 0x8(r29)
    stw r5, 0x10(r1)
    lwz r0, 0x8(r1)
    lwz r5, 0x0(r29)
    stw r0, 0x0(r29)
    stw r5, 0x8(r1)
    lwz r0, 0xc(r1)
    lwz r5, 0x4(r29)
    stw r0, 0x4(r29)
    stw r5, 0xc(r1)
    bl fn_80544844
lbl_fn_8054310C_00000D6C:
    addi r30, r1, 0x20
    addic. r4, r30, 0x17c
    beq lbl_fn_8054310C_00000DA0
    beq lbl_fn_8054310C_00000DA0
    beq lbl_fn_8054310C_00000DA0
    beq lbl_fn_8054310C_00000DA0
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8054310C_00000DA0
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8054310C_00000DA0:
    addic. r4, r30, 0x170
    beq lbl_fn_8054310C_00000DCC
    beq lbl_fn_8054310C_00000DCC
    beq lbl_fn_8054310C_00000DCC
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8054310C_00000DCC
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8054310C_00000DCC:
    addic. r4, r30, 0x164
    beq lbl_fn_8054310C_00000DFC
    beq lbl_fn_8054310C_00000DFC
    beq lbl_fn_8054310C_00000DFC
    beq lbl_fn_8054310C_00000DFC
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8054310C_00000DFC
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8054310C_00000DFC:
    addic. r4, r30, 0x158
    beq lbl_fn_8054310C_00000E28
    beq lbl_fn_8054310C_00000E28
    beq lbl_fn_8054310C_00000E28
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8054310C_00000E28
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8054310C_00000E28:
    addic. r4, r30, 0x148
    beq lbl_fn_8054310C_00000E58
    beq lbl_fn_8054310C_00000E58
    beq lbl_fn_8054310C_00000E58
    beq lbl_fn_8054310C_00000E58
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8054310C_00000E58
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8054310C_00000E58:
    addic. r0, r30, 0x124
    beq lbl_fn_8054310C_00000E78
    lwz r3, 0x14c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8054310C_00000E78
    beq lbl_fn_8054310C_00000E78
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8054310C_00000E78:
    addic. r0, r30, 0x118
    beq lbl_fn_8054310C_00000E98
    lwz r3, 0x140(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8054310C_00000E98
    beq lbl_fn_8054310C_00000E98
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8054310C_00000E98:
    addic. r4, r30, 0xac
    beq lbl_fn_8054310C_00000EC4
    beq lbl_fn_8054310C_00000EC4
    beq lbl_fn_8054310C_00000EC4
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8054310C_00000EC4
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8054310C_00000EC4:
    addic. r31, r30, 0x5c
    beq lbl_fn_8054310C_00000F80
    addic. r4, r31, 0x44
    beq lbl_fn_8054310C_00000EFC
    beq lbl_fn_8054310C_00000EFC
    beq lbl_fn_8054310C_00000EFC
    beq lbl_fn_8054310C_00000EFC
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8054310C_00000EFC
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8054310C_00000EFC:
    addic. r4, r31, 0x38
    beq lbl_fn_8054310C_00000F28
    beq lbl_fn_8054310C_00000F28
    beq lbl_fn_8054310C_00000F28
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8054310C_00000F28
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8054310C_00000F28:
    addic. r4, r31, 0x2c
    beq lbl_fn_8054310C_00000F54
    beq lbl_fn_8054310C_00000F54
    beq lbl_fn_8054310C_00000F54
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8054310C_00000F54
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8054310C_00000F54:
    addic. r4, r31, 0x20
    beq lbl_fn_8054310C_00000F80
    beq lbl_fn_8054310C_00000F80
    beq lbl_fn_8054310C_00000F80
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8054310C_00000F80
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8054310C_00000F80:
    addic. r31, r30, 0x24
    beq lbl_fn_8054310C_00000FD8
    addic. r4, r31, 0x28
    beq lbl_fn_8054310C_00000FB8
    beq lbl_fn_8054310C_00000FB8
    beq lbl_fn_8054310C_00000FB8
    beq lbl_fn_8054310C_00000FB8
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8054310C_00000FB8
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8054310C_00000FB8:
    cmpwi r31, 0x0
    beq lbl_fn_8054310C_00000FD8
    lwz r3, 0x8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8054310C_00000FD8
    beq lbl_fn_8054310C_00000FD8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8054310C_00000FD8:
    cmpwi r30, 0x0
    beq lbl_fn_8054310C_00000FFC
    addic. r0, r30, 0x8
    beq lbl_fn_8054310C_00000FFC
    lwz r0, 0x28(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8054310C_00000FFC
    lwz r3, 0x30(r1)
    bl dtor_80084684
lbl_fn_8054310C_00000FFC:
    lwz r3, 0x4(r29)
    lwz r31, 0x1ec(r1)
    subi r0, r3, 0x1
    lwz r4, 0x0(r29)
    mulli r0, r0, 0x1c0
    lwz r30, 0x1e8(r1)
    lwz r29, 0x1e4(r1)
    add r3, r4, r0
    lwz r0, 0x1f4(r1)
    mtlr r0
    addi r1, r1, 0x1f0
    blr
}

asm void fn_805436B4(void)
{
    nofralloc
    stw r4, 0xc(r3)
    blr
}

asm void fn_805436BC(void)
{
    nofralloc
    stw r4, 0xc(r3)
    blr
}

asm void fn_805436C4(void)
{
    nofralloc
    stw r4, 0xc(r3)
    blr
}

asm void fn_805436CC(void)
{
    nofralloc
    stw r4, 0xc(r3)
    blr
}

asm void fn_805436D4(void)
{
    nofralloc
    stw r4, 0xc(r3)
    blr
}

asm void fn_805436DC(void)
{
    nofralloc
    stw r4, 0xc(r3)
    blr
}

asm void fn_805436E4(void)
{
    nofralloc
    stw r4, 0xc(r3)
    blr
}

asm void fn_805436EC(void)
{
    nofralloc
    stw r4, 0xc(r3)
    blr
}

asm void fn_805436F4(void)
{
    nofralloc
    stw r4, 0xc(r3)
    blr
}

asm void fn_805436FC(void)
{
    nofralloc
    stw r4, 0xc(r3)
    blr
}

asm void fn_80543704(void)
{
    nofralloc
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctr
    blr
}

asm void fn_80543728(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80543730(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_80775A48@ha
    lwz r6, 0x8(r4)
    stw r0, 0x24(r1)
    addi r7, r7, lbl_80775A48@l
    lwz r5, 0x4(r4)
    srwi. r0, r6, 31
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r7, 0x0(r3)
    stw r5, 0x4(r3)
    bne lbl_fn_80543730_000010FC
    lwz r5, 0xc(r4)
    lwz r0, 0x10(r4)
    stw r6, 0x8(r3)
    stw r5, 0xc(r3)
    stw r0, 0x10(r3)
    b lbl_fn_80543730_0000113C
lbl_fn_80543730_000010FC:
    li r0, 0x0
    stwu r0, 0x8(r3)
    lwz r4, 0xc(r4)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    bl fn_80013DC4
    lbz r5, 0xc(r1)
    addi r3, r30, 0x8
    stb r5, 0x8(r1)
    addi r8, r1, 0x8
    lwz r6, 0x10(r31)
    li r4, 0x0
    lwz r0, 0xc(r31)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80543730_0000113C:
    lwz r0, 0x14(r31)
    mr r3, r30
    stw r0, 0x14(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805437E8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r0, 0x24(r4)
    li r5, 0x0
    lwz r30, 0x20(r4)
    mr r28, r3
    slwi r0, r0, 4
    psq_l f1, 0x8(r4), 0, 0
    add r31, r30, r0
    lfs f2, 0x10(r4)
    subf r0, r30, r31
    psq_st f1, 0x8(r3), 0, 0
    srawi r0, r0, 4
    lwz r6, 0x0(r4)
    stfs f2, 0x10(r3)
    addze. r26, r0
    lfs f0, 0x4(r4)
    mr r29, r4
    psq_l f1, 0x14(r4), 0, 0
    lfs f2, 0x1c(r4)
    stw r6, 0x0(r3)
    stfs f0, 0x4(r3)
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    stw r5, 0x20(r3)
    stw r5, 0x24(r3)
    stw r5, 0x28(r3)
    beq lbl_fn_805437E8_000012A0
    lis r3, 0x1000
    subi r0, r3, 0x1
    cmplw r26, r0
    ble lbl_fn_805437E8_00001210
    lis r4, lbl_8075E148@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075E148@l
    addi r3, r3, __files@l
    addi r4, r4, 0x8b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805437E8_00001210:
    slwi r3, r26, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_805437E8_00001244
    lis r3, __files@ha
    lis r4, lbl_80779F68@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779F68@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805437E8_00001244:
    lwz r0, 0x24(r28)
    stw r27, 0x20(r28)
    slwi r0, r0, 4
    stw r26, 0x28(r28)
    add r4, r27, r0
    b lbl_fn_805437E8_00001298
lbl_fn_805437E8_0000125C:
    cmpwi r4, 0x0
    beq lbl_fn_805437E8_00001284
    lfs f0, 0x0(r30)
    stfs f0, 0x0(r4)
    lfs f0, 0x4(r30)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r30)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r30)
    stfs f0, 0xc(r4)
lbl_fn_805437E8_00001284:
    lwz r3, 0x24(r28)
    addi r30, r30, 0x10
    addi r4, r4, 0x10
    addi r0, r3, 0x1
    stw r0, 0x24(r28)
lbl_fn_805437E8_00001298:
    cmplw r30, r31
    bne lbl_fn_805437E8_0000125C
lbl_fn_805437E8_000012A0:
    lwz r0, 0x30(r29)
    li r3, 0x0
    lwz r30, 0x2c(r29)
    slwi r0, r0, 4
    stw r3, 0x2c(r28)
    add r31, r30, r0
    subf r0, r30, r31
    stw r3, 0x30(r28)
    srawi r0, r0, 4
    addze. r26, r0
    stw r3, 0x34(r28)
    beq lbl_fn_805437E8_00001394
    lis r3, 0x1000
    subi r0, r3, 0x1
    cmplw r26, r0
    ble lbl_fn_805437E8_00001304
    lis r4, lbl_8075E148@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075E148@l
    addi r3, r3, __files@l
    addi r4, r4, 0x8b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805437E8_00001304:
    slwi r3, r26, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_805437E8_00001338
    lis r3, __files@ha
    lis r4, lbl_80779F68@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779F68@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805437E8_00001338:
    lwz r0, 0x30(r28)
    stw r27, 0x2c(r28)
    slwi r0, r0, 4
    stw r26, 0x34(r28)
    add r4, r27, r0
    b lbl_fn_805437E8_0000138C
lbl_fn_805437E8_00001350:
    cmpwi r4, 0x0
    beq lbl_fn_805437E8_00001378
    lfs f0, 0x0(r30)
    stfs f0, 0x0(r4)
    lfs f0, 0x4(r30)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r30)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r30)
    stfs f0, 0xc(r4)
lbl_fn_805437E8_00001378:
    lwz r3, 0x30(r28)
    addi r30, r30, 0x10
    addi r4, r4, 0x10
    addi r0, r3, 0x1
    stw r0, 0x30(r28)
lbl_fn_805437E8_0000138C:
    cmplw r30, r31
    bne lbl_fn_805437E8_00001350
lbl_fn_805437E8_00001394:
    lwz r0, 0x3c(r29)
    li r3, 0x0
    lwz r30, 0x38(r29)
    slwi r0, r0, 4
    stw r3, 0x38(r28)
    add r31, r30, r0
    subf r0, r30, r31
    stw r3, 0x3c(r28)
    srawi r0, r0, 4
    addze. r26, r0
    stw r3, 0x40(r28)
    beq lbl_fn_805437E8_00001488
    lis r3, 0x1000
    subi r0, r3, 0x1
    cmplw r26, r0
    ble lbl_fn_805437E8_000013F8
    lis r4, lbl_8075E148@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075E148@l
    addi r3, r3, __files@l
    addi r4, r4, 0x8b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805437E8_000013F8:
    slwi r3, r26, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_805437E8_0000142C
    lis r3, __files@ha
    lis r4, lbl_80779F68@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779F68@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805437E8_0000142C:
    lwz r0, 0x3c(r28)
    stw r27, 0x38(r28)
    slwi r0, r0, 4
    stw r26, 0x40(r28)
    add r4, r27, r0
    b lbl_fn_805437E8_00001480
lbl_fn_805437E8_00001444:
    cmpwi r4, 0x0
    beq lbl_fn_805437E8_0000146C
    lfs f0, 0x0(r30)
    stfs f0, 0x0(r4)
    lfs f0, 0x4(r30)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r30)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r30)
    stfs f0, 0xc(r4)
lbl_fn_805437E8_0000146C:
    lwz r3, 0x3c(r28)
    addi r30, r30, 0x10
    addi r4, r4, 0x10
    addi r0, r3, 0x1
    stw r0, 0x3c(r28)
lbl_fn_805437E8_00001480:
    cmplw r30, r31
    bne lbl_fn_805437E8_00001444
lbl_fn_805437E8_00001488:
    lwz r0, 0x48(r29)
    li r3, 0x0
    lwz r30, 0x44(r29)
    slwi r0, r0, 2
    stw r3, 0x44(r28)
    add r27, r30, r0
    subf r31, r30, r27
    stw r3, 0x48(r28)
    srawi r0, r31, 2
    addze. r26, r0
    stw r3, 0x4c(r28)
    beq lbl_fn_805437E8_00001560
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r26, r0
    ble lbl_fn_805437E8_000014EC
    lis r4, lbl_8075E148@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075E148@l
    addi r3, r3, __files@l
    addi r4, r4, 0x8b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805437E8_000014EC:
    slwi r3, r26, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_805437E8_00001520
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805437E8_00001520:
    subf r0, r30, r27
    lwz r3, 0x48(r28)
    srawi r0, r0, 2
    stw r29, 0x44(r28)
    slwi r3, r3, 2
    mr r4, r30
    addze r0, r0
    stw r26, 0x4c(r28)
    add r3, r29, r3
    slwi r5, r0, 2
    bl memmove
    srawi r0, r31, 2
    lwz r3, 0x48(r28)
    addze r0, r0
    add r0, r3, r0
    stw r0, 0x48(r28)
lbl_fn_805437E8_00001560:
    addi r11, r1, 0x20
    mr r3, r28
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80543C04(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r29, 0x0(r4)
    li r0, 0x0
    stw r0, 0x0(r3)
    mr r27, r3
    cmpwi r29, 0x0
    mr r28, r4
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    beq lbl_fn_80543C04_000015F0
    mulli r3, r29, 0x2c
    li r4, 0x0
    la r5, lbl_8087D6E0
    la r6, lbl_8087D6DC
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8000FAE4@ha
    mr r7, r29
    addi r4, r4, fn_8000FAE4@l
    li r5, 0x0
    li r6, 0x2c
    bl fn_80695720
    mr r30, r3
    b lbl_fn_80543C04_000015F4
lbl_fn_80543C04_000015F0:
    li r30, 0x0
lbl_fn_80543C04_000015F4:
    lwz r0, 0x8(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80543C04_00001744
    lwz r0, 0x0(r27)
    mr r4, r29
    cmplw r29, r0
    ble lbl_fn_80543C04_00001614
    mr r4, r0
lbl_fn_80543C04_00001614:
    cmplwi r4, 0x0
    li r3, 0x0
    ble lbl_fn_80543C04_00001730
    srwi. r0, r4, 1
    mtctr r0
    beq lbl_fn_80543C04_000016D8
lbl_fn_80543C04_0000162C:
    lwz r0, 0x8(r27)
    add r5, r30, r3
    add r6, r0, r3
    lwzx r0, r3, r0
    stwx r0, r30, r3
    addi r3, r3, 0x2c
    lwz r0, 0x4(r6)
    stw r0, 0x4(r5)
    lfs f2, 0x10(r6)
    psq_l f1, 0x8(r6), 0, 0
    psq_st f1, 0x8(r5), 0, 0
    stfs f2, 0x10(r5)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r5), 0, 0
    stfs f2, 0x1c(r5)
    lfs f2, 0x28(r6)
    psq_l f1, 0x20(r6), 0, 0
    psq_st f1, 0x20(r5), 0, 0
    stfs f2, 0x28(r5)
    add r5, r30, r3
    lwz r0, 0x8(r27)
    add r6, r0, r3
    lwzx r0, r3, r0
    stwx r0, r30, r3
    addi r3, r3, 0x2c
    lwz r0, 0x4(r6)
    stw r0, 0x4(r5)
    lfs f2, 0x10(r6)
    psq_l f1, 0x8(r6), 0, 0
    psq_st f1, 0x8(r5), 0, 0
    stfs f2, 0x10(r5)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r5), 0, 0
    stfs f2, 0x1c(r5)
    lfs f2, 0x28(r6)
    psq_l f1, 0x20(r6), 0, 0
    psq_st f1, 0x20(r5), 0, 0
    stfs f2, 0x28(r5)
    bdnz lbl_fn_80543C04_0000162C
    andi. r4, r4, 0x1
    beq lbl_fn_80543C04_00001730
lbl_fn_80543C04_000016D8:
    mtctr r4
lbl_fn_80543C04_000016DC:
    lwz r0, 0x8(r27)
    add r5, r30, r3
    add r6, r0, r3
    lwzx r0, r3, r0
    stwx r0, r30, r3
    addi r3, r3, 0x2c
    lwz r0, 0x4(r6)
    stw r0, 0x4(r5)
    lfs f2, 0x10(r6)
    psq_l f1, 0x8(r6), 0, 0
    psq_st f1, 0x8(r5), 0, 0
    stfs f2, 0x10(r5)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r5), 0, 0
    stfs f2, 0x1c(r5)
    lfs f2, 0x28(r6)
    psq_l f1, 0x20(r6), 0, 0
    psq_st f1, 0x20(r5), 0, 0
    stfs f2, 0x28(r5)
    bdnz lbl_fn_80543C04_000016DC
lbl_fn_80543C04_00001730:
    lwz r3, 0x8(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80543C04_00001744
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80543C04_00001744:
    stw r30, 0x8(r27)
    li r5, 0x0
    li r3, 0x0
    stw r29, 0x0(r27)
    stw r29, 0x4(r27)
    b lbl_fn_80543C04_000017B4
lbl_fn_80543C04_0000175C:
    lwz r4, 0x8(r28)
    addi r5, r5, 0x1
    lwz r0, 0x8(r27)
    add r6, r4, r3
    add r4, r0, r3
    lwz r0, 0x0(r6)
    stw r0, 0x0(r4)
    addi r3, r3, 0x2c
    lwz r0, 0x4(r6)
    stw r0, 0x4(r4)
    lfs f2, 0x10(r6)
    psq_l f1, 0x8(r6), 0, 0
    psq_st f1, 0x8(r4), 0, 0
    stfs f2, 0x10(r4)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r4), 0, 0
    stfs f2, 0x1c(r4)
    lfs f2, 0x28(r6)
    psq_l f1, 0x20(r6), 0, 0
    psq_st f1, 0x20(r4), 0, 0
    stfs f2, 0x28(r4)
lbl_fn_80543C04_000017B4:
    lwz r0, 0x0(r27)
    cmplw r5, r0
    blt lbl_fn_80543C04_0000175C
    lwz r0, 0x2c(r28)
    li r3, 0x0
    lwz r30, 0x28(r28)
    slwi r0, r0, 2
    psq_l f1, 0x10(r28), 0, 0
    add r26, r30, r0
    lfs f2, 0x18(r28)
    subf r29, r30, r26
    psq_st f1, 0x10(r27), 0, 0
    srawi r0, r29, 2
    lwz r4, 0xc(r28)
    stfs f2, 0x18(r27)
    addze. r31, r0
    psq_l f1, 0x1c(r28), 0, 0
    lfs f2, 0x24(r28)
    stw r4, 0xc(r27)
    psq_st f1, 0x1c(r27), 0, 0
    stfs f2, 0x24(r27)
    stw r3, 0x28(r27)
    stw r3, 0x2c(r27)
    stw r3, 0x30(r27)
    beq lbl_fn_80543C04_000018C0
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_80543C04_0000184C
    lis r4, lbl_8075E148@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075E148@l
    addi r3, r3, __files@l
    addi r4, r4, 0x8b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80543C04_0000184C:
    slwi r3, r31, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_80543C04_00001880
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80543C04_00001880:
    subf r0, r30, r26
    lwz r3, 0x2c(r27)
    srawi r0, r0, 2
    stw r28, 0x28(r27)
    slwi r3, r3, 2
    mr r4, r30
    addze r0, r0
    stw r31, 0x30(r27)
    add r3, r28, r3
    slwi r5, r0, 2
    bl memmove
    srawi r0, r29, 2
    lwz r3, 0x2c(r27)
    addze r0, r0
    add r0, r3, r0
    stw r0, 0x2c(r27)
lbl_fn_80543C04_000018C0:
    addi r11, r1, 0x20
    mr r3, r27
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80543F64(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x24(r1)
    lwz r0, 0x4(r4)
    stmw r27, 0xc(r1)
    mr r29, r3
    lwz r30, 0x0(r4)
    slwi r0, r0, 3
    add r31, r30, r0
    subf r0, r30, r31
    srawi r0, r0, 3
    addze. r27, r0
    stw r5, 0x0(r3)
    stw r5, 0x4(r3)
    stw r5, 0x8(r3)
    beq lbl_fn_80543F64_000019D4
    lis r3, 0x2000
    subi r0, r3, 0x1
    cmplw r27, r0
    ble lbl_fn_80543F64_00001954
    lis r4, lbl_8075E148@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075E148@l
    addi r3, r3, __files@l
    addi r4, r4, 0x8b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80543F64_00001954:
    slwi r3, r27, 3
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_80543F64_00001988
    lis r3, __files@ha
    lis r4, lbl_807945EC@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807945EC@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80543F64_00001988:
    lwz r0, 0x4(r29)
    stw r28, 0x0(r29)
    slwi r0, r0, 3
    stw r27, 0x8(r29)
    add r4, r28, r0
    b lbl_fn_80543F64_000019CC
lbl_fn_80543F64_000019A0:
    cmpwi r4, 0x0
    beq lbl_fn_80543F64_000019B8
    lwz r0, 0x0(r30)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r4)
lbl_fn_80543F64_000019B8:
    lwz r3, 0x4(r29)
    addi r30, r30, 0x8
    addi r4, r4, 0x8
    addi r0, r3, 0x1
    stw r0, 0x4(r29)
lbl_fn_80543F64_000019CC:
    cmplw r30, r31
    bne lbl_fn_80543F64_000019A0
lbl_fn_80543F64_000019D4:
    mr r3, r29
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80544074(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    lwz r29, 0x0(r4)
    stw r28, 0x10(r1)
    cmpwi r29, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    beq lbl_fn_80544074_00001A68
    slwi r3, r29, 4
    li r4, 0x0
    addi r3, r3, 0x10
    la r5, lbl_8087E4C4
    la r6, lbl_8087E4C0
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80544294@ha
    mr r7, r29
    addi r4, r4, fn_80544294@l
    li r5, 0x0
    li r6, 0x10
    bl fn_80695720
    mr r28, r3
    b lbl_fn_80544074_00001A6C
lbl_fn_80544074_00001A68:
    li r28, 0x0
lbl_fn_80544074_00001A6C:
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80544074_00001B94
    lwz r0, 0x0(r30)
    mr r4, r29
    cmplw r29, r0
    ble lbl_fn_80544074_00001A8C
    mr r4, r0
lbl_fn_80544074_00001A8C:
    cmplwi r4, 0x0
    li r3, 0x0
    ble lbl_fn_80544074_00001B80
    srwi. r0, r4, 2
    mtctr r0
    beq lbl_fn_80544074_00001B50
lbl_fn_80544074_00001AA4:
    lwz r0, 0x8(r30)
    add r6, r28, r3
    add r5, r0, r3
    lwzx r0, r3, r0
    stwx r0, r28, r3
    addi r3, r3, 0x10
    lfs f2, 0xc(r5)
    psq_l f1, 0x4(r5), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    add r6, r28, r3
    lwz r0, 0x8(r30)
    add r5, r0, r3
    lwzx r0, r3, r0
    stwx r0, r28, r3
    addi r3, r3, 0x10
    lfs f2, 0xc(r5)
    psq_l f1, 0x4(r5), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    add r6, r28, r3
    lwz r0, 0x8(r30)
    add r5, r0, r3
    lwzx r0, r3, r0
    stwx r0, r28, r3
    addi r3, r3, 0x10
    lfs f2, 0xc(r5)
    psq_l f1, 0x4(r5), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    add r6, r28, r3
    lwz r0, 0x8(r30)
    add r5, r0, r3
    lwzx r0, r3, r0
    stwx r0, r28, r3
    addi r3, r3, 0x10
    lfs f2, 0xc(r5)
    psq_l f1, 0x4(r5), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    bdnz lbl_fn_80544074_00001AA4
    andi. r4, r4, 0x3
    beq lbl_fn_80544074_00001B80
lbl_fn_80544074_00001B50:
    mtctr r4
lbl_fn_80544074_00001B54:
    lwz r0, 0x8(r30)
    add r6, r28, r3
    add r5, r0, r3
    lwzx r0, r3, r0
    stwx r0, r28, r3
    addi r3, r3, 0x10
    lfs f2, 0xc(r5)
    psq_l f1, 0x4(r5), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    bdnz lbl_fn_80544074_00001B54
lbl_fn_80544074_00001B80:
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80544074_00001B94
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80544074_00001B94:
    stw r28, 0x8(r30)
    li r6, 0x0
    li r3, 0x0
    stw r29, 0x0(r30)
    stw r29, 0x4(r30)
    b lbl_fn_80544074_00001BDC
lbl_fn_80544074_00001BAC:
    lwz r4, 0x8(r31)
    addi r6, r6, 0x1
    lwz r0, 0x8(r30)
    add r5, r4, r3
    add r4, r0, r3
    lwz r0, 0x0(r5)
    stw r0, 0x0(r4)
    addi r3, r3, 0x10
    lfs f2, 0xc(r5)
    psq_l f1, 0x4(r5), 0, 0
    psq_st f1, 0x4(r4), 0, 0
    stfs f2, 0xc(r4)
lbl_fn_80544074_00001BDC:
    lwz r0, 0x0(r30)
    cmplw r6, r0
    blt lbl_fn_80544074_00001BAC
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
