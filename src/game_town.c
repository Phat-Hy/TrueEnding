#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void fn_80082BE0(void);
extern void fn_80082CAC(void);
extern void fn_80084E50(void);
extern void fn_80084FA0(void);
extern void fn_805F3130(void);
extern void fn_805F3210(void);

/* External data declarations */
extern u8 lbl_80732048[];
extern u8 lbl_80732088[];
extern u8 lbl_807320F4[];
extern u8 lbl_80778560[];
extern u8 lbl_80778598[];
extern u8 lbl_807C7090[];
extern u8 lbl_807C709C[];

/* Small data declarations */
extern u32 lbl_8087EF08;

/* Function declarations */
void fn_800832AC(void);
void fn_80083614(void);
void fn_80083760(void);
void fn_800838AC(void);
void fn_800838B8(void);
void fn_800839EC(void);
void fn_80083AD4(void);
void fn_80083E10(void);
void fn_80083EB0(void);
void fn_80083F50(void);

asm void fn_800832AC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r29, r3
    mr r30, r4
    mr r31, r5
    mr r25, r6
    lwz r0, 0x1b0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800832AC_00000034
    addi r27, r3, 0x1b4
    b lbl_fn_800832AC_00000038
lbl_fn_800832AC_00000034:
    li r27, 0x0
lbl_fn_800832AC_00000038:
    cmpwi r27, 0x0
    beq lbl_fn_800832AC_00000048
    mr r3, r27
    bl fn_805F3130
lbl_fn_800832AC_00000048:
    cmpwi r25, 0xd
    bne lbl_fn_800832AC_00000094
    lwz r12, 0x168(r29)
    lis r7, lbl_807320F4@ha
    addi r3, r29, 0x168
    mr r4, r30
    lwz r12, 0xc(r12)
    mr r5, r31
    mr r6, r25
    addi r7, r7, lbl_807320F4@l
    mtctr r12
    bctrl
    cmpwi r27, 0x0
    mr r28, r3
    beq lbl_fn_800832AC_0000008C
    mr r3, r27
    bl fn_805F3210
lbl_fn_800832AC_0000008C:
    mr r3, r28
    b lbl_fn_800832AC_00000354
lbl_fn_800832AC_00000094:
    cmpwi r25, 0xe
    bne lbl_fn_800832AC_000000E0
    lwz r12, 0x180(r29)
    lis r7, lbl_807320F4@ha
    addi r3, r29, 0x180
    mr r4, r30
    lwz r12, 0xc(r12)
    mr r5, r31
    mr r6, r25
    addi r7, r7, lbl_807320F4@l
    mtctr r12
    bctrl
    cmpwi r27, 0x0
    mr r26, r3
    beq lbl_fn_800832AC_000000D8
    mr r3, r27
    bl fn_805F3210
lbl_fn_800832AC_000000D8:
    mr r3, r26
    b lbl_fn_800832AC_00000354
lbl_fn_800832AC_000000E0:
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    bne lbl_fn_800832AC_000001A8
    cmplwi r30, 0x60
    bgt lbl_fn_800832AC_000001A8
    lwz r0, 0x3c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_800832AC_000001A8
    lwz r12, 0x38(r29)
    lis r28, lbl_807320F4@ha
    addi r3, r29, 0x38
    mr r4, r30
    lwz r12, 0xc(r12)
    mr r5, r31
    mr r6, r25
    addi r7, r28, lbl_807320F4@l
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_800832AC_0000014C
    cmpwi r27, 0x0
    beq lbl_fn_800832AC_00000144
    mr r3, r27
    bl fn_805F3210
lbl_fn_800832AC_00000144:
    mr r3, r26
    b lbl_fn_800832AC_00000354
lbl_fn_800832AC_0000014C:
    cmplwi r30, 0x40
    bgt lbl_fn_800832AC_00000210
    lwz r0, 0xcc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_800832AC_00000210
    lwz r12, 0xc8(r29)
    addi r3, r29, 0xc8
    mr r4, r30
    mr r5, r31
    lwz r12, 0xc(r12)
    mr r6, r25
    addi r7, r28, lbl_807320F4@l
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_800832AC_00000210
    cmpwi r27, 0x0
    beq lbl_fn_800832AC_000001A0
    mr r3, r27
    bl fn_805F3210
lbl_fn_800832AC_000001A0:
    mr r3, r26
    b lbl_fn_800832AC_00000354
lbl_fn_800832AC_000001A8:
    cmpwi r3, 0x1
    bne lbl_fn_800832AC_00000210
    cmplwi r30, 0x40
    bgt lbl_fn_800832AC_00000210
    lwz r0, 0xcc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_800832AC_00000210
    lwz r12, 0xc8(r29)
    lis r7, lbl_807320F4@ha
    addi r3, r29, 0xc8
    mr r4, r30
    lwz r12, 0xc(r12)
    mr r5, r31
    mr r6, r25
    addi r7, r7, lbl_807320F4@l
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_800832AC_00000210
    cmpwi r27, 0x0
    beq lbl_fn_800832AC_00000208
    mr r3, r27
    bl fn_805F3210
lbl_fn_800832AC_00000208:
    mr r3, r26
    b lbl_fn_800832AC_00000354
lbl_fn_800832AC_00000210:
    cmpwi r25, 0x9
    bne lbl_fn_800832AC_00000248
    lwz r12, 0x198(r29)
    lis r7, lbl_807320F4@ha
    addi r3, r29, 0x198
    mr r4, r30
    lwz r12, 0xc(r12)
    mr r5, r31
    mr r6, r25
    addi r7, r7, lbl_807320F4@l
    mtctr r12
    bctrl
    mr r26, r3
    b lbl_fn_800832AC_00000340
lbl_fn_800832AC_00000248:
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_800832AC_000002E4
    lwz r12, 0x138(r29)
    lis r28, lbl_807320F4@ha
    addi r3, r29, 0x138
    mr r4, r30
    lwz r12, 0xc(r12)
    mr r5, r31
    mr r6, r25
    addi r7, r28, lbl_807320F4@l
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_800832AC_00000340
    lwz r12, 0x150(r29)
    addi r3, r29, 0x150
    mr r4, r30
    mr r5, r31
    lwz r12, 0xc(r12)
    mr r6, r25
    addi r7, r28, lbl_807320F4@l
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_800832AC_00000340
    lwz r12, 0x168(r29)
    addi r3, r29, 0x168
    mr r4, r30
    mr r5, r31
    lwz r12, 0xc(r12)
    mr r6, r25
    addi r7, r28, lbl_807320F4@l
    mtctr r12
    bctrl
    mr r26, r3
    b lbl_fn_800832AC_00000340
lbl_fn_800832AC_000002E4:
    lwz r12, 0x150(r29)
    lis r28, lbl_807320F4@ha
    addi r3, r29, 0x150
    mr r4, r30
    lwz r12, 0xc(r12)
    mr r5, r31
    mr r6, r25
    addi r7, r28, lbl_807320F4@l
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_800832AC_00000340
    lwz r12, 0x168(r29)
    addi r3, r29, 0x168
    mr r4, r30
    mr r5, r31
    lwz r12, 0xc(r12)
    mr r6, r25
    addi r7, r28, lbl_807320F4@l
    mtctr r12
    bctrl
    mr r26, r3
lbl_fn_800832AC_00000340:
    cmpwi r27, 0x0
    beq lbl_fn_800832AC_00000350
    mr r3, r27
    bl fn_805F3210
lbl_fn_800832AC_00000350:
    mr r3, r26
lbl_fn_800832AC_00000354:
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80083614(void)
{
    nofralloc
    lwz r9, 0x8(r3)
    mr r5, r9
    b lbl_fn_80083614_00000378
lbl_fn_80083614_00000374:
    addi r5, r5, 0x8
lbl_fn_80083614_00000378:
    lwz r0, 0x0(r5)
    cmplw r0, r4
    blt lbl_fn_80083614_00000374
    lwz r4, 0xc(r3)
    subf r0, r9, r5
    srawi r6, r0, 3
    li r5, 0x1
    subi r8, r4, 0x1
    li r0, 0x20
    slwi r4, r8, 3
    addze r7, r6
    slwi r6, r8, 4
    add r4, r9, r4
    slwi r7, r7, 4
    add r6, r3, r6
    lwz r4, 0x4(r4)
    add r7, r3, r7
    lwz r6, 0x10(r6)
    slwi r4, r4, 2
    lwz r7, 0x10(r7)
    add r6, r6, r4
    b lbl_fn_80083614_000004A4
lbl_fn_80083614_000003D0:
    lwz r8, 0x0(r7)
    addis r4, r8, 0x1
    cmplwi r4, 0xffff
    beq lbl_fn_80083614_000004A0
    li r9, 0x0
    mtctr r0
lbl_fn_80083614_000003E8:
    slw r10, r5, r9
    and r4, r10, r8
    cmplw r10, r4
    beq lbl_fn_80083614_00000498
    lwz r0, 0x0(r7)
    li r5, 0x0
    li r6, 0x0
    or r0, r0, r10
    stw r0, 0x0(r7)
    lwz r0, 0x10(r3)
    lwz r10, 0x8(r3)
    subf r0, r0, r7
    srawi r0, r0, 2
    mr r7, r10
    addze r8, r0
    b lbl_fn_80083614_00000440
lbl_fn_80083614_00000428:
    add r4, r10, r6
    addi r6, r6, 0x8
    lwz r0, 0x4(r4)
    addi r7, r7, 0x8
    addi r5, r5, 0x1
    subf r8, r0, r8
lbl_fn_80083614_00000440:
    lwz r0, 0x4(r7)
    cmplw r8, r0
    bge lbl_fn_80083614_00000428
    slwi r4, r5, 4
    slwi r0, r5, 3
    add r7, r3, r4
    lwzx r4, r10, r0
    lwz r3, 0x18(r7)
    lwz r6, 0x14(r7)
    mullw r5, r9, r4
    addi r0, r3, 0x1
    stw r0, 0x18(r7)
    slwi r3, r4, 5
    lwz r9, 0x1c(r7)
    mullw r4, r8, r3
    add r3, r6, r5
    cmpw r9, r0
    add r3, r4, r3
    ble lbl_fn_80083614_00000490
    mr r0, r9
lbl_fn_80083614_00000490:
    stw r0, 0x1c(r7)
    blr
lbl_fn_80083614_00000498:
    addi r9, r9, 0x1
    bdnz lbl_fn_80083614_000003E8
lbl_fn_80083614_000004A0:
    addi r7, r7, 0x4
lbl_fn_80083614_000004A4:
    cmplw r7, r6
    bne lbl_fn_80083614_000003D0
    li r3, 0x0
    blr
}

asm void fn_80083760(void)
{
    nofralloc
    lwz r9, 0x8(r3)
    mr r5, r9
    b lbl_fn_80083760_000004C4
lbl_fn_80083760_000004C0:
    addi r5, r5, 0x8
lbl_fn_80083760_000004C4:
    lwz r0, 0x0(r5)
    cmplw r0, r4
    blt lbl_fn_80083760_000004C0
    lwz r4, 0xc(r3)
    subf r0, r9, r5
    srawi r6, r0, 3
    li r5, 0x1
    subi r8, r4, 0x1
    li r0, 0x20
    slwi r4, r8, 3
    addze r7, r6
    slwi r6, r8, 4
    add r4, r9, r4
    slwi r7, r7, 4
    add r6, r3, r6
    lwz r4, 0x4(r4)
    add r7, r3, r7
    lwz r6, 0x10(r6)
    slwi r4, r4, 2
    lwz r7, 0x10(r7)
    add r6, r6, r4
    b lbl_fn_80083760_000005F0
lbl_fn_80083760_0000051C:
    lwz r8, 0x0(r7)
    addis r4, r8, 0x1
    cmplwi r4, 0xffff
    beq lbl_fn_80083760_000005EC
    li r9, 0x0
    mtctr r0
lbl_fn_80083760_00000534:
    slw r10, r5, r9
    and r4, r10, r8
    cmplw r10, r4
    beq lbl_fn_80083760_000005E4
    lwz r0, 0x0(r7)
    li r5, 0x0
    li r6, 0x0
    or r0, r0, r10
    stw r0, 0x0(r7)
    lwz r0, 0x10(r3)
    lwz r10, 0x8(r3)
    subf r0, r0, r7
    srawi r0, r0, 2
    mr r7, r10
    addze r8, r0
    b lbl_fn_80083760_0000058C
lbl_fn_80083760_00000574:
    add r4, r10, r6
    addi r6, r6, 0x8
    lwz r0, 0x4(r4)
    addi r7, r7, 0x8
    addi r5, r5, 0x1
    subf r8, r0, r8
lbl_fn_80083760_0000058C:
    lwz r0, 0x4(r7)
    cmplw r8, r0
    bge lbl_fn_80083760_00000574
    slwi r4, r5, 4
    slwi r0, r5, 3
    add r7, r3, r4
    lwzx r4, r10, r0
    lwz r3, 0x18(r7)
    lwz r6, 0x14(r7)
    mullw r5, r9, r4
    addi r0, r3, 0x1
    stw r0, 0x18(r7)
    slwi r3, r4, 5
    lwz r9, 0x1c(r7)
    mullw r4, r8, r3
    add r3, r6, r5
    cmpw r9, r0
    add r3, r4, r3
    ble lbl_fn_80083760_000005DC
    mr r0, r9
lbl_fn_80083760_000005DC:
    stw r0, 0x1c(r7)
    blr
lbl_fn_80083760_000005E4:
    addi r9, r9, 0x1
    bdnz lbl_fn_80083760_00000534
lbl_fn_80083760_000005EC:
    addi r7, r7, 0x4
lbl_fn_80083760_000005F0:
    cmplw r7, r6
    bne lbl_fn_80083760_0000051C
    li r3, 0x0
    blr
}

asm void fn_800838AC(void)
{
    nofralloc
    mr r6, r5
    lwz r5, 0x4(r3)
    b fn_800832AC
}

asm void fn_800838B8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    lwz r0, 0x1b0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800838B8_00000644
    addi r31, r3, 0x1b4
    b lbl_fn_800838B8_00000648
lbl_fn_800838B8_00000644:
    li r31, 0x0
lbl_fn_800838B8_00000648:
    cmpwi r31, 0x0
    beq lbl_fn_800838B8_00000658
    mr r3, r31
    bl fn_805F3130
lbl_fn_800838B8_00000658:
    cmpwi r28, 0x9
    bne lbl_fn_800838B8_00000688
    lwz r12, 0x198(r25)
    addi r3, r25, 0x198
    mr r4, r26
    mr r5, r27
    lwz r12, 0xc(r12)
    mr r6, r28
    mr r7, r29
    mtctr r12
    bctrl
    b lbl_fn_800838B8_000006AC
lbl_fn_800838B8_00000688:
    lwz r12, 0x138(r25)
    addi r3, r25, 0x138
    mr r4, r26
    mr r5, r27
    lwz r12, 0xc(r12)
    mr r6, r28
    mr r7, r29
    mtctr r12
    bctrl
lbl_fn_800838B8_000006AC:
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_800838B8_00000718
    addi r3, r25, 0x168
    bl fn_80084FA0
    cmpwi r3, 0x0
    beq lbl_fn_800838B8_000006F0
    lwz r12, 0x168(r25)
    addi r3, r25, 0x168
    mr r4, r26
    mr r5, r27
    lwz r12, 0xc(r12)
    mr r6, r28
    mr r7, r29
    mtctr r12
    bctrl
    b lbl_fn_800838B8_00000714
lbl_fn_800838B8_000006F0:
    lwz r12, 0x150(r25)
    addi r3, r25, 0x150
    mr r4, r26
    mr r5, r27
    lwz r12, 0xc(r12)
    mr r6, r28
    mr r7, r29
    mtctr r12
    bctrl
lbl_fn_800838B8_00000714:
    mr r30, r3
lbl_fn_800838B8_00000718:
    cmpwi r31, 0x0
    beq lbl_fn_800838B8_00000728
    mr r3, r31
    bl fn_805F3210
lbl_fn_800838B8_00000728:
    mr r3, r30
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800839EC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r10
    lwz r0, 0x1b0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800839EC_0000077C
    addi r31, r3, 0x1b4
    b lbl_fn_800839EC_00000780
lbl_fn_800839EC_0000077C:
    li r31, 0x0
lbl_fn_800839EC_00000780:
    cmpwi r31, 0x0
    beq lbl_fn_800839EC_00000790
    mr r3, r31
    bl fn_805F3130
lbl_fn_800839EC_00000790:
    lwz r12, 0x150(r24)
    addi r3, r24, 0x150
    mr r4, r25
    mr r5, r26
    lwz r12, 0xc(r12)
    mr r6, r27
    mr r7, r28
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_800839EC_000007E8
    lwz r12, 0x168(r24)
    addi r3, r24, 0x168
    mr r4, r25
    mr r5, r26
    lwz r12, 0xc(r12)
    mr r6, r27
    mr r7, r28
    mtctr r12
    bctrl
    mr r30, r3
lbl_fn_800839EC_000007E8:
    cmpwi r31, 0x0
    beq lbl_fn_800839EC_000007F8
    mr r3, r31
    bl fn_805F3210
lbl_fn_800839EC_000007F8:
    cmpwi r29, 0x0
    beq lbl_fn_800839EC_00000810
    cmpwi r30, 0x0
    bne lbl_fn_800839EC_00000810
    li r3, 0x0
    b lbl_fn_800839EC_00000814
lbl_fn_800839EC_00000810:
    mr r3, r30
lbl_fn_800839EC_00000814:
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80083AD4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_80083AD4_00000B44
    lwz r0, 0x1b0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80083AD4_00000868
    addi r30, r3, 0x1b4
    b lbl_fn_80083AD4_0000086C
lbl_fn_80083AD4_00000868:
    li r30, 0x0
lbl_fn_80083AD4_0000086C:
    cmpwi r30, 0x0
    beq lbl_fn_80083AD4_0000087C
    mr r3, r30
    bl fn_805F3130
lbl_fn_80083AD4_0000087C:
    lwz r12, 0x38(r28)
    addi r3, r28, 0x38
    li r31, 0x0
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    cmplw r29, r3
    blt lbl_fn_80083AD4_000008BC
    lwz r12, 0x38(r28)
    addi r3, r28, 0x38
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmplw r29, r3
    bgt lbl_fn_80083AD4_000008BC
    li r31, 0x1
lbl_fn_80083AD4_000008BC:
    cmpwi r31, 0x0
    beq lbl_fn_80083AD4_000008E0
    lwz r12, 0x38(r28)
    addi r3, r28, 0x38
    mr r4, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    b lbl_fn_80083AD4_00000B34
lbl_fn_80083AD4_000008E0:
    lwz r12, 0xc8(r28)
    addi r3, r28, 0xc8
    li r31, 0x0
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    cmplw r29, r3
    blt lbl_fn_80083AD4_00000920
    lwz r12, 0xc8(r28)
    addi r3, r28, 0xc8
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmplw r29, r3
    bgt lbl_fn_80083AD4_00000920
    li r31, 0x1
lbl_fn_80083AD4_00000920:
    cmpwi r31, 0x0
    beq lbl_fn_80083AD4_00000944
    lwz r12, 0xc8(r28)
    addi r3, r28, 0xc8
    mr r4, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    b lbl_fn_80083AD4_00000B34
lbl_fn_80083AD4_00000944:
    lwz r12, 0x138(r28)
    addi r3, r28, 0x138
    li r31, 0x0
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    cmplw r29, r3
    blt lbl_fn_80083AD4_00000984
    lwz r12, 0x138(r28)
    addi r3, r28, 0x138
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmplw r29, r3
    bgt lbl_fn_80083AD4_00000984
    li r31, 0x1
lbl_fn_80083AD4_00000984:
    cmpwi r31, 0x0
    beq lbl_fn_80083AD4_000009A8
    lwz r12, 0x138(r28)
    addi r3, r28, 0x138
    mr r4, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    b lbl_fn_80083AD4_00000B34
lbl_fn_80083AD4_000009A8:
    lwz r12, 0x198(r28)
    addi r3, r28, 0x198
    li r31, 0x0
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    cmplw r29, r3
    blt lbl_fn_80083AD4_000009E8
    lwz r12, 0x198(r28)
    addi r3, r28, 0x198
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmplw r29, r3
    bgt lbl_fn_80083AD4_000009E8
    li r31, 0x1
lbl_fn_80083AD4_000009E8:
    cmpwi r31, 0x0
    beq lbl_fn_80083AD4_00000A0C
    lwz r12, 0x198(r28)
    addi r3, r28, 0x198
    mr r4, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    b lbl_fn_80083AD4_00000B34
lbl_fn_80083AD4_00000A0C:
    lwz r12, 0x150(r28)
    addi r3, r28, 0x150
    li r31, 0x0
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    cmplw r29, r3
    blt lbl_fn_80083AD4_00000A4C
    lwz r12, 0x150(r28)
    addi r3, r28, 0x150
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmplw r29, r3
    bgt lbl_fn_80083AD4_00000A4C
    li r31, 0x1
lbl_fn_80083AD4_00000A4C:
    cmpwi r31, 0x0
    beq lbl_fn_80083AD4_00000A70
    lwz r12, 0x150(r28)
    addi r3, r28, 0x150
    mr r4, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    b lbl_fn_80083AD4_00000B34
lbl_fn_80083AD4_00000A70:
    lwz r12, 0x168(r28)
    addi r3, r28, 0x168
    li r31, 0x0
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    cmplw r29, r3
    blt lbl_fn_80083AD4_00000AB0
    lwz r12, 0x168(r28)
    addi r3, r28, 0x168
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmplw r29, r3
    bgt lbl_fn_80083AD4_00000AB0
    li r31, 0x1
lbl_fn_80083AD4_00000AB0:
    cmpwi r31, 0x0
    beq lbl_fn_80083AD4_00000AD4
    lwz r12, 0x168(r28)
    addi r3, r28, 0x168
    mr r4, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    b lbl_fn_80083AD4_00000B34
lbl_fn_80083AD4_00000AD4:
    lwz r12, 0x180(r28)
    addi r3, r28, 0x180
    li r31, 0x0
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    cmplw r29, r3
    blt lbl_fn_80083AD4_00000B14
    lwz r12, 0x180(r28)
    addi r3, r28, 0x180
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmplw r29, r3
    bgt lbl_fn_80083AD4_00000B14
    li r31, 0x1
lbl_fn_80083AD4_00000B14:
    cmpwi r31, 0x0
    beq lbl_fn_80083AD4_00000B34
    lwz r12, 0x180(r28)
    addi r3, r28, 0x180
    mr r4, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_80083AD4_00000B34:
    cmpwi r30, 0x0
    beq lbl_fn_80083AD4_00000B44
    mr r3, r30
    bl fn_805F3210
lbl_fn_80083AD4_00000B44:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80083E10(void)
{
    nofralloc
    lwz r5, 0xc(r3)
    subic. r7, r5, 0x1
    slwi r5, r7, 4
    addi r0, r7, 0x1
    add r5, r3, r5
    mtctr r0
    bltlr
lbl_fn_80083E10_00000B80:
    lwz r0, 0x14(r5)
    cmplw r0, r4
    bgt lbl_fn_80083E10_00000BF4
    slwi r0, r7, 4
    lwz r6, 0x8(r3)
    add r8, r3, r0
    li r5, 0x1
    slwi r0, r7, 3
    lwz r3, 0x14(r8)
    lwzx r0, r6, r0
    subf r3, r3, r4
    lwz r7, 0x10(r8)
    divwu r3, r3, r0
    srawi r0, r3, 5
    addze r4, r0
    slwi r0, r3, 27
    srwi r3, r3, 31
    subf r0, r3, r0
    slwi r6, r4, 2
    rotlwi r0, r0, 5
    lwzx r4, r7, r6
    add r0, r0, r3
    slw r0, r5, r0
    andc r0, r4, r0
    stwx r0, r7, r6
    lwz r3, 0x18(r8)
    subi r0, r3, 0x1
    stw r0, 0x18(r8)
    blr
lbl_fn_80083E10_00000BF4:
    subi r5, r5, 0x10
    subi r7, r7, 0x1
    bdnz lbl_fn_80083E10_00000B80
    blr
}

asm void fn_80083EB0(void)
{
    nofralloc
    lwz r5, 0xc(r3)
    subic. r7, r5, 0x1
    slwi r5, r7, 4
    addi r0, r7, 0x1
    add r5, r3, r5
    mtctr r0
    bltlr
lbl_fn_80083EB0_00000C20:
    lwz r0, 0x14(r5)
    cmplw r0, r4
    bgt lbl_fn_80083EB0_00000C94
    slwi r0, r7, 4
    lwz r6, 0x8(r3)
    add r8, r3, r0
    li r5, 0x1
    slwi r0, r7, 3
    lwz r3, 0x14(r8)
    lwzx r0, r6, r0
    subf r3, r3, r4
    lwz r7, 0x10(r8)
    divwu r3, r3, r0
    srawi r0, r3, 5
    addze r4, r0
    slwi r0, r3, 27
    srwi r3, r3, 31
    subf r0, r3, r0
    slwi r6, r4, 2
    rotlwi r0, r0, 5
    lwzx r4, r7, r6
    add r0, r0, r3
    slw r0, r5, r0
    andc r0, r4, r0
    stwx r0, r7, r6
    lwz r3, 0x18(r8)
    subi r0, r3, 0x1
    stw r0, 0x18(r8)
    blr
lbl_fn_80083EB0_00000C94:
    subi r5, r5, 0x10
    subi r7, r7, 0x1
    bdnz lbl_fn_80083EB0_00000C20
    blr
}

asm void fn_80083F50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r0, lbl_8087EF08
    extsb. r0, r0
    bne lbl_fn_80083F50_00000E30
    lis r8, lbl_807C709C@ha
    lis r5, lbl_80778598@ha
    addi r31, r8, lbl_807C709C@l
    li r7, 0x0
    addi r9, r31, 0x58
    lis r4, lbl_80732048@ha
    addi r3, r31, 0xc8
    addi r5, r5, lbl_80778598@l
    addi r4, r4, lbl_80732048@l
    li r6, 0x20
    li r0, 0x8
    cmplw r9, r3
    stw r7, lbl_807C709C@l(r8)
    stw r6, 0x4(r31)
    stw r5, 0x38(r31)
    stw r7, 0x3c(r31)
    stw r4, 0x40(r31)
    stw r0, 0x44(r31)
    stw r7, 0x50(r31)
    stw r7, 0x54(r31)
    stw r7, 0x48(r31)
    stw r7, 0x4c(r31)
    bge lbl_fn_80083F50_00000D60
    addi r0, r3, 0xf
    subf r0, r9, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_80083F50_00000D60
lbl_fn_80083F50_00000D48:
    stw r7, 0x8(r9)
    stw r7, 0xc(r9)
    stw r7, 0x0(r9)
    stw r7, 0x4(r9)
    addi r9, r9, 0x10
    bdnz lbl_fn_80083F50_00000D48
lbl_fn_80083F50_00000D60:
    addi r7, r31, 0xe8
    addi r3, r31, 0x138
    lis r6, lbl_80778560@ha
    lis r4, lbl_80732088@ha
    li r5, 0x0
    li r0, 0x6
    addi r6, r6, lbl_80778560@l
    addi r4, r4, lbl_80732088@l
    cmplw r7, r3
    stw r6, 0xc8(r31)
    stw r5, 0xcc(r31)
    stw r4, 0xd0(r31)
    stw r0, 0xd4(r31)
    stw r5, 0xe0(r31)
    stw r5, 0xe4(r31)
    stw r5, 0xd8(r31)
    stw r5, 0xdc(r31)
    bge lbl_fn_80083F50_00000DD4
    addi r0, r3, 0xf
    subf r0, r7, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_80083F50_00000DD4
lbl_fn_80083F50_00000DBC:
    stw r5, 0x8(r7)
    stw r5, 0xc(r7)
    stw r5, 0x0(r7)
    stw r5, 0x4(r7)
    addi r7, r7, 0x10
    bdnz lbl_fn_80083F50_00000DBC
lbl_fn_80083F50_00000DD4:
    addi r3, r31, 0x138
    bl fn_80084E50
    addi r3, r31, 0x150
    bl fn_80084E50
    addi r3, r31, 0x168
    bl fn_80084E50
    addi r3, r31, 0x180
    bl fn_80084E50
    addi r3, r31, 0x198
    bl fn_80084E50
    li r0, 0x0
    stw r0, 0x1b0(r31)
    mr r3, r31
    bl fn_80082CAC
    lis r3, lbl_807C709C@ha
    lis r4, fn_80082BE0@ha
    lis r5, lbl_807C7090@ha
    addi r3, r3, lbl_807C709C@l
    addi r4, r4, fn_80082BE0@l
    addi r5, r5, lbl_807C7090@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EF08
lbl_fn_80083F50_00000E30:
    lis r5, lbl_807C709C@ha
    mr r3, r28
    addi r4, r5, lbl_807C709C@l
    stw r29, lbl_807C709C@l(r5)
    stw r30, 0x4(r4)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
