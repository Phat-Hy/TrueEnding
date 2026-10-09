#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTick(void);
extern void __files(void);
extern void dtor_80084684(void);
extern void fn_8003E120(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);

/* External data declarations */
extern u8 lbl_80732768[];
extern u8 lbl_80732788[];
extern u8 lbl_80732790[];
extern u8 lbl_80732798[];
extern u8 lbl_80778990[];
extern u8 lbl_807789AC[];
extern u8 lbl_807789C8[];
extern u8 lbl_807789D0[];

/* Small data declarations */
extern u32 lbl_8087EF60;

/* Function declarations */
void fn_800A1934(void);
void fn_800A19B8(void);
void fn_800A1A3C(void);
void fn_800A1B84(void);
void fn_800A1CE4(void);
void fn_800A1E24(void);
void fn_800A1F84(void);
void fn_800A2664(void);

asm void fn_800A1934(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    li r11, 0x0
    li r10, 0x1
    addi r12, r3, 0x4
    stw r31, 0xc(r1)
    stw r11, 0x0(r5)
    lwz r31, 0x4(r3)
    stb r10, 0x0(r6)
    stb r10, 0x0(r7)
    b lbl_fn_800A1934_0000006C
lbl_fn_800A1934_00000028:
    lwz r9, 0x4(r4)
    mr r12, r31
    lwz r0, 0x14(r31)
    lwz r8, 0x0(r4)
    lwz r3, 0x10(r31)
    subfc r0, r0, r9
    subfe r0, r3, r8
    subfe r0, r9, r9
    neg. r0, r0
    beq lbl_fn_800A1934_0000005C
    lwz r31, 0x0(r31)
    stb r10, 0x0(r6)
    b lbl_fn_800A1934_0000006C
lbl_fn_800A1934_0000005C:
    stw r31, 0x0(r5)
    lwz r31, 0x4(r31)
    stb r11, 0x0(r6)
    stb r11, 0x0(r7)
lbl_fn_800A1934_0000006C:
    cmpwi r31, 0x0
    bne lbl_fn_800A1934_00000028
    lwz r31, 0xc(r1)
    mr r3, r12
    addi r1, r1, 0x10
    blr
}

asm void fn_800A19B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    li r11, 0x0
    li r10, 0x1
    addi r12, r3, 0x4
    stw r31, 0xc(r1)
    stw r11, 0x0(r5)
    lwz r31, 0x4(r3)
    stb r10, 0x0(r6)
    stb r10, 0x0(r7)
    b lbl_fn_800A19B8_000000F0
lbl_fn_800A19B8_000000AC:
    lwz r9, 0x4(r4)
    mr r12, r31
    lwz r0, 0x14(r31)
    lwz r8, 0x0(r4)
    lwz r3, 0x10(r31)
    subfc r0, r0, r9
    subfe r0, r3, r8
    subfe r0, r9, r9
    neg. r0, r0
    beq lbl_fn_800A19B8_000000E0
    lwz r31, 0x0(r31)
    stb r10, 0x0(r6)
    b lbl_fn_800A19B8_000000F0
lbl_fn_800A19B8_000000E0:
    stw r31, 0x0(r5)
    lwz r31, 0x4(r31)
    stb r11, 0x0(r6)
    stb r11, 0x0(r7)
lbl_fn_800A19B8_000000F0:
    cmpwi r31, 0x0
    bne lbl_fn_800A19B8_000000AC
    lwz r31, 0xc(r1)
    mr r3, r12
    addi r1, r1, 0x10
    blr
}

asm void fn_800A1A3C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r26, 0x18(r1)
    mr r28, r3
    mr r29, r4
    mr r30, r5
    mr r31, r6
    mr r26, r7
    lwz r8, 0x0(r3)
    addis r0, r8, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_800A1A3C_00000160
    lis r4, lbl_80732768@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80732768@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800A1A3C_00000160:
    li r3, 0x28
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_800A1A3C_00000194
    lis r3, __files@ha
    lis r4, lbl_807789AC@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807789AC@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800A1A3C_00000194:
    addic. r3, r27, 0x10
    addi r0, r28, 0x4
    stw r0, 0x8(r1)
    stw r27, 0xc(r1)
    beq lbl_fn_800A1A3C_000001D0
    lwz r0, 0x4(r26)
    stw r0, 0x4(r3)
    lwz r0, 0x0(r26)
    stw r0, 0x0(r3)
    lwz r0, 0xc(r26)
    stw r0, 0xc(r3)
    lwz r0, 0x8(r26)
    stw r0, 0x8(r3)
    lwz r0, 0x10(r26)
    stw r0, 0x10(r3)
lbl_fn_800A1A3C_000001D0:
    lwz r27, 0xc(r1)
    li r0, 0x0
    stw r0, 0x4(r27)
    addic. r3, r27, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x0(r27)
    beq lbl_fn_800A1A3C_000001F0
    stw r29, 0x0(r3)
lbl_fn_800A1A3C_000001F0:
    cmpwi r30, 0x0
    beq lbl_fn_800A1A3C_00000200
    stw r27, 0x0(r29)
    b lbl_fn_800A1A3C_00000204
lbl_fn_800A1A3C_00000200:
    stw r27, 0x4(r29)
lbl_fn_800A1A3C_00000204:
    lwz r5, 0x0(r28)
    mr r3, r27
    lwz r4, 0x4(r28)
    addi r0, r5, 0x1
    stw r0, 0x0(r28)
    bl fn_8003E120
    cmpwi r31, 0x0
    beq lbl_fn_800A1A3C_00000228
    stw r27, 0xc(r28)
lbl_fn_800A1A3C_00000228:
    lwz r3, 0xc(r1)
    cmpwi r3, 0x0
    beq lbl_fn_800A1A3C_00000238
    bl dtor_80084684
lbl_fn_800A1A3C_00000238:
    mr r3, r27
    lmw r26, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800A1B84(void)
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
    lwz r31, 0x0(r4)
    cmpwi r31, 0x0
    beq lbl_fn_800A1B84_000002FC
    lwz r30, 0x0(r31)
    cmpwi r30, 0x0
    beq lbl_fn_800A1B84_000002B8
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_800A1B84_0000029C
    bl fn_800A1B84
lbl_fn_800A1B84_0000029C:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_800A1B84_000002B0
    mr r3, r28
    bl fn_800A1B84
lbl_fn_800A1B84_000002B0:
    mr r3, r30
    bl dtor_80084684
lbl_fn_800A1B84_000002B8:
    lwz r30, 0x4(r31)
    cmpwi r30, 0x0
    beq lbl_fn_800A1B84_000002F4
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_800A1B84_000002D8
    mr r3, r28
    bl fn_800A1B84
lbl_fn_800A1B84_000002D8:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_800A1B84_000002EC
    mr r3, r28
    bl fn_800A1B84
lbl_fn_800A1B84_000002EC:
    mr r3, r30
    bl dtor_80084684
lbl_fn_800A1B84_000002F4:
    mr r3, r31
    bl dtor_80084684
lbl_fn_800A1B84_000002FC:
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800A1B84_00000388
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_800A1B84_00000344
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_800A1B84_00000328
    mr r3, r28
    bl fn_800A1B84
lbl_fn_800A1B84_00000328:
    lwz r4, 0x4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_800A1B84_0000033C
    mr r3, r28
    bl fn_800A1B84
lbl_fn_800A1B84_0000033C:
    mr r3, r31
    bl dtor_80084684
lbl_fn_800A1B84_00000344:
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_800A1B84_00000380
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_800A1B84_00000364
    mr r3, r28
    bl fn_800A1B84
lbl_fn_800A1B84_00000364:
    lwz r4, 0x4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_800A1B84_00000378
    mr r3, r28
    bl fn_800A1B84
lbl_fn_800A1B84_00000378:
    mr r3, r31
    bl dtor_80084684
lbl_fn_800A1B84_00000380:
    mr r3, r30
    bl dtor_80084684
lbl_fn_800A1B84_00000388:
    mr r3, r29
    bl dtor_80084684
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800A1CE4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r26, 0x18(r1)
    mr r28, r3
    mr r29, r4
    mr r30, r5
    mr r31, r6
    mr r26, r7
    lwz r8, 0x0(r3)
    addis r0, r8, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_800A1CE4_00000408
    lis r4, lbl_80732768@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80732768@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800A1CE4_00000408:
    li r3, 0x20
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_800A1CE4_0000043C
    lis r3, __files@ha
    lis r4, lbl_80778990@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80778990@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800A1CE4_0000043C:
    addic. r3, r27, 0x10
    addi r0, r28, 0x4
    stw r0, 0x8(r1)
    stw r27, 0xc(r1)
    beq lbl_fn_800A1CE4_00000470
    lwz r0, 0x4(r26)
    stw r0, 0x4(r3)
    lwz r0, 0x0(r26)
    stw r0, 0x0(r3)
    lwz r0, 0x8(r26)
    stw r0, 0x8(r3)
    lwz r0, 0xc(r26)
    stw r0, 0xc(r3)
lbl_fn_800A1CE4_00000470:
    lwz r27, 0xc(r1)
    li r0, 0x0
    stw r0, 0x4(r27)
    addic. r3, r27, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x0(r27)
    beq lbl_fn_800A1CE4_00000490
    stw r29, 0x0(r3)
lbl_fn_800A1CE4_00000490:
    cmpwi r30, 0x0
    beq lbl_fn_800A1CE4_000004A0
    stw r27, 0x0(r29)
    b lbl_fn_800A1CE4_000004A4
lbl_fn_800A1CE4_000004A0:
    stw r27, 0x4(r29)
lbl_fn_800A1CE4_000004A4:
    lwz r5, 0x0(r28)
    mr r3, r27
    lwz r4, 0x4(r28)
    addi r0, r5, 0x1
    stw r0, 0x0(r28)
    bl fn_8003E120
    cmpwi r31, 0x0
    beq lbl_fn_800A1CE4_000004C8
    stw r27, 0xc(r28)
lbl_fn_800A1CE4_000004C8:
    lwz r3, 0xc(r1)
    cmpwi r3, 0x0
    beq lbl_fn_800A1CE4_000004D8
    bl dtor_80084684
lbl_fn_800A1CE4_000004D8:
    mr r3, r27
    lmw r26, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800A1E24(void)
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
    lwz r31, 0x0(r4)
    cmpwi r31, 0x0
    beq lbl_fn_800A1E24_0000059C
    lwz r30, 0x0(r31)
    cmpwi r30, 0x0
    beq lbl_fn_800A1E24_00000558
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_800A1E24_0000053C
    bl fn_800A1E24
lbl_fn_800A1E24_0000053C:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_800A1E24_00000550
    mr r3, r28
    bl fn_800A1E24
lbl_fn_800A1E24_00000550:
    mr r3, r30
    bl dtor_80084684
lbl_fn_800A1E24_00000558:
    lwz r30, 0x4(r31)
    cmpwi r30, 0x0
    beq lbl_fn_800A1E24_00000594
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_800A1E24_00000578
    mr r3, r28
    bl fn_800A1E24
lbl_fn_800A1E24_00000578:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_800A1E24_0000058C
    mr r3, r28
    bl fn_800A1E24
lbl_fn_800A1E24_0000058C:
    mr r3, r30
    bl dtor_80084684
lbl_fn_800A1E24_00000594:
    mr r3, r31
    bl dtor_80084684
lbl_fn_800A1E24_0000059C:
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800A1E24_00000628
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_800A1E24_000005E4
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_800A1E24_000005C8
    mr r3, r28
    bl fn_800A1E24
lbl_fn_800A1E24_000005C8:
    lwz r4, 0x4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_800A1E24_000005DC
    mr r3, r28
    bl fn_800A1E24
lbl_fn_800A1E24_000005DC:
    mr r3, r31
    bl dtor_80084684
lbl_fn_800A1E24_000005E4:
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_800A1E24_00000620
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_800A1E24_00000604
    mr r3, r28
    bl fn_800A1E24
lbl_fn_800A1E24_00000604:
    lwz r4, 0x4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_800A1E24_00000618
    mr r3, r28
    bl fn_800A1E24
lbl_fn_800A1E24_00000618:
    mr r3, r31
    bl dtor_80084684
lbl_fn_800A1E24_00000620:
    mr r3, r30
    bl dtor_80084684
lbl_fn_800A1E24_00000628:
    mr r3, r29
    bl dtor_80084684
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800A1F84(void)
{
    nofralloc
    lwz r7, 0x4(r3)
    mr r6, r3
    cmpwi r7, 0x0
    beq lbl_fn_800A1F84_00000684
    mr r5, r7
    b lbl_fn_800A1F84_0000066C
lbl_fn_800A1F84_00000668:
    mr r5, r0
lbl_fn_800A1F84_0000066C:
    lwz r0, 0x0(r5)
    cmpwi r0, 0x0
    bne lbl_fn_800A1F84_00000668
    b lbl_fn_800A1F84_00000698
    b lbl_fn_800A1F84_00000684
lbl_fn_800A1F84_00000680:
    mr r6, r5
lbl_fn_800A1F84_00000684:
    lwz r0, 0x8(r6)
    clrrwi r5, r0, 1
    lwz r0, 0x0(r5)
    cmplw r6, r0
    bne lbl_fn_800A1F84_00000680
lbl_fn_800A1F84_00000698:
    lwz r0, 0x0(r3)
    mr r6, r3
    cmpwi r0, 0x0
    beq lbl_fn_800A1F84_000006B4
    cmpwi r7, 0x0
    beq lbl_fn_800A1F84_000006B4
    mr r6, r5
lbl_fn_800A1F84_000006B4:
    lwz r7, 0x0(r6)
    cmpwi r7, 0x0
    beq lbl_fn_800A1F84_000006C4
    b lbl_fn_800A1F84_000006C8
lbl_fn_800A1F84_000006C4:
    lwz r7, 0x4(r6)
lbl_fn_800A1F84_000006C8:
    lwz r0, 0x8(r6)
    cmpwi r7, 0x0
    clrrwi r8, r0, 1
    beq lbl_fn_800A1F84_000006E8
    lwz r0, 0x8(r7)
    clrlwi r0, r0, 31
    or r0, r8, r0
    stw r0, 0x8(r7)
lbl_fn_800A1F84_000006E8:
    lwz r0, 0x8(r6)
    clrrwi r9, r0, 1
    lwz r0, 0x0(r9)
    cmplw r6, r0
    bne lbl_fn_800A1F84_00000708
    stw r7, 0x0(r9)
    li r0, 0x1
    b lbl_fn_800A1F84_00000710
lbl_fn_800A1F84_00000708:
    stw r7, 0x4(r9)
    li r0, 0x0
lbl_fn_800A1F84_00000710:
    lwz r9, 0x8(r6)
    cmplw r6, r3
    clrlwi r9, r9, 31
    xori r11, r9, 0x1
    beq lbl_fn_800A1F84_000007DC
    lwz r9, 0x8(r6)
    lwz r10, 0x8(r3)
    clrlwi r9, r9, 31
    rlwimi r9, r10, 0, 0, 30
    stw r9, 0x8(r6)
    clrrwi r10, r9, 1
    lwz r9, 0x0(r10)
    cmplw r3, r9
    bne lbl_fn_800A1F84_00000750
    stw r6, 0x0(r10)
    b lbl_fn_800A1F84_00000754
lbl_fn_800A1F84_00000750:
    stw r6, 0x4(r10)
lbl_fn_800A1F84_00000754:
    lwz r10, 0x0(r3)
    stw r10, 0x0(r6)
    cmpwi r10, 0x0
    beq lbl_fn_800A1F84_00000778
    lwz r9, 0x8(r10)
    clrlwi r9, r9, 31
    or r9, r6, r9
    stw r9, 0x8(r10)
    b lbl_fn_800A1F84_0000077C
lbl_fn_800A1F84_00000778:
    mr r8, r6
lbl_fn_800A1F84_0000077C:
    lwz r10, 0x4(r3)
    stw r10, 0x4(r6)
    cmpwi r10, 0x0
    beq lbl_fn_800A1F84_000007A0
    lwz r9, 0x8(r10)
    clrlwi r9, r9, 31
    or r9, r6, r9
    stw r9, 0x8(r10)
    b lbl_fn_800A1F84_000007A4
lbl_fn_800A1F84_000007A0:
    mr r8, r6
lbl_fn_800A1F84_000007A4:
    lwz r9, 0x8(r3)
    clrlwi. r9, r9, 31
    beq lbl_fn_800A1F84_000007C0
    lwz r9, 0x8(r6)
    ori r9, r9, 0x1
    stw r9, 0x8(r6)
    b lbl_fn_800A1F84_000007CC
lbl_fn_800A1F84_000007C0:
    lwz r9, 0x8(r6)
    clrrwi r9, r9, 1
    stw r9, 0x8(r6)
lbl_fn_800A1F84_000007CC:
    cmplw r4, r3
    bne lbl_fn_800A1F84_000007F0
    mr r4, r6
    b lbl_fn_800A1F84_000007F0
lbl_fn_800A1F84_000007DC:
    cmpwi r7, 0x0
    bne lbl_fn_800A1F84_000007F0
    cmplw r3, r4
    bne lbl_fn_800A1F84_000007F0
    li r11, 0x0
lbl_fn_800A1F84_000007F0:
    cmpwi r11, 0x0
    beq lbl_fn_800A1F84_00000D28
    b lbl_fn_800A1F84_00000CF8
lbl_fn_800A1F84_000007FC:
    cmpwi r0, 0x0
    beq lbl_fn_800A1F84_00000A80
    lwz r3, 0x4(r8)
    lwz r7, 0x8(r3)
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    bne lbl_fn_800A1F84_000008AC
    clrrwi r6, r7, 1
    stw r6, 0x8(r3)
    cmplw r4, r8
    lwz r3, 0x8(r8)
    ori r3, r3, 0x1
    stw r3, 0x8(r8)
    lwz r7, 0x4(r8)
    bne lbl_fn_800A1F84_0000083C
    mr r4, r7
lbl_fn_800A1F84_0000083C:
    lwz r3, 0x0(r7)
    stw r3, 0x4(r8)
    lwz r6, 0x0(r7)
    cmpwi r6, 0x0
    beq lbl_fn_800A1F84_00000860
    lwz r3, 0x8(r6)
    clrlwi r3, r3, 31
    or r3, r8, r3
    stw r3, 0x8(r6)
lbl_fn_800A1F84_00000860:
    lwz r3, 0x8(r7)
    lwz r6, 0x8(r8)
    clrlwi r3, r3, 31
    rlwimi r3, r6, 0, 0, 30
    stw r3, 0x8(r7)
    lwz r3, 0x8(r8)
    clrrwi r6, r3, 1
    lwz r3, 0x0(r6)
    cmplw r8, r3
    bne lbl_fn_800A1F84_00000890
    stw r7, 0x0(r6)
    b lbl_fn_800A1F84_00000894
lbl_fn_800A1F84_00000890:
    stw r7, 0x4(r6)
lbl_fn_800A1F84_00000894:
    stw r8, 0x0(r7)
    lwz r3, 0x8(r8)
    clrlwi r3, r3, 31
    or r3, r7, r3
    stw r3, 0x8(r8)
    lwz r3, 0x4(r8)
lbl_fn_800A1F84_000008AC:
    lwz r7, 0x0(r3)
    cmpwi r7, 0x0
    beq lbl_fn_800A1F84_000008C4
    lwz r6, 0x8(r7)
    clrlwi. r6, r6, 31
    bne lbl_fn_800A1F84_00000908
lbl_fn_800A1F84_000008C4:
    lwz r6, 0x4(r3)
    cmpwi r6, 0x0
    beq lbl_fn_800A1F84_000008DC
    lwz r6, 0x8(r6)
    clrlwi. r6, r6, 31
    bne lbl_fn_800A1F84_00000908
lbl_fn_800A1F84_000008DC:
    lwz r0, 0x8(r3)
    mr r7, r8
    ori r0, r0, 0x1
    stw r0, 0x8(r3)
    lwz r0, 0x8(r8)
    clrrwi r8, r0, 1
    lwz r0, 0x0(r8)
    subf r0, r7, r0
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_800A1F84_00000CF8
lbl_fn_800A1F84_00000908:
    lwz r6, 0x4(r3)
    cmpwi r6, 0x0
    beq lbl_fn_800A1F84_00000920
    lwz r6, 0x8(r6)
    clrlwi. r6, r6, 31
    bne lbl_fn_800A1F84_000009B8
lbl_fn_800A1F84_00000920:
    lwz r6, 0x8(r7)
    cmplw r4, r3
    clrrwi r6, r6, 1
    stw r6, 0x8(r7)
    lwz r6, 0x8(r3)
    ori r6, r6, 0x1
    stw r6, 0x8(r3)
    lwz r9, 0x0(r3)
    bne lbl_fn_800A1F84_00000948
    mr r4, r9
lbl_fn_800A1F84_00000948:
    lwz r6, 0x4(r9)
    stw r6, 0x0(r3)
    lwz r7, 0x4(r9)
    cmpwi r7, 0x0
    beq lbl_fn_800A1F84_0000096C
    lwz r6, 0x8(r7)
    clrlwi r6, r6, 31
    or r6, r3, r6
    stw r6, 0x8(r7)
lbl_fn_800A1F84_0000096C:
    lwz r6, 0x8(r9)
    lwz r7, 0x8(r3)
    clrlwi r6, r6, 31
    rlwimi r6, r7, 0, 0, 30
    stw r6, 0x8(r9)
    lwz r6, 0x8(r3)
    clrrwi r7, r6, 1
    lwz r6, 0x0(r7)
    cmplw r3, r6
    bne lbl_fn_800A1F84_0000099C
    stw r9, 0x0(r7)
    b lbl_fn_800A1F84_000009A0
lbl_fn_800A1F84_0000099C:
    stw r9, 0x4(r7)
lbl_fn_800A1F84_000009A0:
    stw r3, 0x4(r9)
    lwz r6, 0x8(r3)
    clrlwi r6, r6, 31
    or r6, r9, r6
    stw r6, 0x8(r3)
    lwz r3, 0x4(r8)
lbl_fn_800A1F84_000009B8:
    lwz r6, 0x8(r8)
    clrlwi. r6, r6, 31
    beq lbl_fn_800A1F84_000009D4
    lwz r6, 0x8(r3)
    ori r6, r6, 0x1
    stw r6, 0x8(r3)
    b lbl_fn_800A1F84_000009E0
lbl_fn_800A1F84_000009D4:
    lwz r6, 0x8(r3)
    clrrwi r6, r6, 1
    stw r6, 0x8(r3)
lbl_fn_800A1F84_000009E0:
    lwz r6, 0x8(r8)
    cmplw r4, r8
    clrrwi r6, r6, 1
    stw r6, 0x8(r8)
    lwz r6, 0x4(r3)
    lwz r3, 0x8(r6)
    clrrwi r3, r3, 1
    stw r3, 0x8(r6)
    lwz r9, 0x4(r8)
    bne lbl_fn_800A1F84_00000A0C
    mr r4, r9
lbl_fn_800A1F84_00000A0C:
    lwz r3, 0x0(r9)
    stw r3, 0x4(r8)
    lwz r6, 0x0(r9)
    cmpwi r6, 0x0
    beq lbl_fn_800A1F84_00000A30
    lwz r3, 0x8(r6)
    clrlwi r3, r3, 31
    or r3, r8, r3
    stw r3, 0x8(r6)
lbl_fn_800A1F84_00000A30:
    lwz r3, 0x8(r9)
    lwz r6, 0x8(r8)
    clrlwi r3, r3, 31
    rlwimi r3, r6, 0, 0, 30
    stw r3, 0x8(r9)
    lwz r3, 0x8(r8)
    clrrwi r6, r3, 1
    lwz r3, 0x0(r6)
    cmplw r8, r3
    bne lbl_fn_800A1F84_00000A60
    stw r9, 0x0(r6)
    b lbl_fn_800A1F84_00000A64
lbl_fn_800A1F84_00000A60:
    stw r9, 0x4(r6)
lbl_fn_800A1F84_00000A64:
    stw r8, 0x0(r9)
    mr r7, r4
    lwz r3, 0x8(r8)
    clrlwi r3, r3, 31
    or r3, r9, r3
    stw r3, 0x8(r8)
    b lbl_fn_800A1F84_00000CF8
lbl_fn_800A1F84_00000A80:
    lwz r3, 0x0(r8)
    lwz r7, 0x8(r3)
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    bne lbl_fn_800A1F84_00000B28
    clrrwi r6, r7, 1
    stw r6, 0x8(r3)
    cmplw r4, r8
    lwz r3, 0x8(r8)
    ori r3, r3, 0x1
    stw r3, 0x8(r8)
    lwz r7, 0x0(r8)
    bne lbl_fn_800A1F84_00000AB8
    mr r4, r7
lbl_fn_800A1F84_00000AB8:
    lwz r3, 0x4(r7)
    stw r3, 0x0(r8)
    lwz r6, 0x4(r7)
    cmpwi r6, 0x0
    beq lbl_fn_800A1F84_00000ADC
    lwz r3, 0x8(r6)
    clrlwi r3, r3, 31
    or r3, r8, r3
    stw r3, 0x8(r6)
lbl_fn_800A1F84_00000ADC:
    lwz r3, 0x8(r7)
    lwz r6, 0x8(r8)
    clrlwi r3, r3, 31
    rlwimi r3, r6, 0, 0, 30
    stw r3, 0x8(r7)
    lwz r3, 0x8(r8)
    clrrwi r6, r3, 1
    lwz r3, 0x0(r6)
    cmplw r8, r3
    bne lbl_fn_800A1F84_00000B0C
    stw r7, 0x0(r6)
    b lbl_fn_800A1F84_00000B10
lbl_fn_800A1F84_00000B0C:
    stw r7, 0x4(r6)
lbl_fn_800A1F84_00000B10:
    stw r8, 0x4(r7)
    lwz r3, 0x8(r8)
    clrlwi r3, r3, 31
    or r3, r7, r3
    stw r3, 0x8(r8)
    lwz r3, 0x0(r8)
lbl_fn_800A1F84_00000B28:
    lwz r7, 0x0(r3)
    cmpwi r7, 0x0
    beq lbl_fn_800A1F84_00000B40
    lwz r6, 0x8(r7)
    clrlwi. r6, r6, 31
    bne lbl_fn_800A1F84_00000B84
lbl_fn_800A1F84_00000B40:
    lwz r6, 0x4(r3)
    cmpwi r6, 0x0
    beq lbl_fn_800A1F84_00000B58
    lwz r6, 0x8(r6)
    clrlwi. r6, r6, 31
    bne lbl_fn_800A1F84_00000B84
lbl_fn_800A1F84_00000B58:
    lwz r0, 0x8(r3)
    mr r7, r8
    ori r0, r0, 0x1
    stw r0, 0x8(r3)
    lwz r0, 0x8(r8)
    clrrwi r8, r0, 1
    lwz r0, 0x0(r8)
    subf r0, r7, r0
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_800A1F84_00000CF8
lbl_fn_800A1F84_00000B84:
    cmpwi r7, 0x0
    beq lbl_fn_800A1F84_00000B98
    lwz r6, 0x8(r7)
    clrlwi. r6, r6, 31
    bne lbl_fn_800A1F84_00000C34
lbl_fn_800A1F84_00000B98:
    lwz r7, 0x4(r3)
    cmplw r4, r3
    lwz r6, 0x8(r7)
    clrrwi r6, r6, 1
    stw r6, 0x8(r7)
    lwz r6, 0x8(r3)
    ori r6, r6, 0x1
    stw r6, 0x8(r3)
    lwz r9, 0x4(r3)
    bne lbl_fn_800A1F84_00000BC4
    mr r4, r9
lbl_fn_800A1F84_00000BC4:
    lwz r6, 0x0(r9)
    stw r6, 0x4(r3)
    lwz r7, 0x0(r9)
    cmpwi r7, 0x0
    beq lbl_fn_800A1F84_00000BE8
    lwz r6, 0x8(r7)
    clrlwi r6, r6, 31
    or r6, r3, r6
    stw r6, 0x8(r7)
lbl_fn_800A1F84_00000BE8:
    lwz r6, 0x8(r9)
    lwz r7, 0x8(r3)
    clrlwi r6, r6, 31
    rlwimi r6, r7, 0, 0, 30
    stw r6, 0x8(r9)
    lwz r6, 0x8(r3)
    clrrwi r7, r6, 1
    lwz r6, 0x0(r7)
    cmplw r3, r6
    bne lbl_fn_800A1F84_00000C18
    stw r9, 0x0(r7)
    b lbl_fn_800A1F84_00000C1C
lbl_fn_800A1F84_00000C18:
    stw r9, 0x4(r7)
lbl_fn_800A1F84_00000C1C:
    stw r3, 0x0(r9)
    lwz r6, 0x8(r3)
    clrlwi r6, r6, 31
    or r6, r9, r6
    stw r6, 0x8(r3)
    lwz r3, 0x0(r8)
lbl_fn_800A1F84_00000C34:
    lwz r6, 0x8(r8)
    clrlwi. r6, r6, 31
    beq lbl_fn_800A1F84_00000C50
    lwz r6, 0x8(r3)
    ori r6, r6, 0x1
    stw r6, 0x8(r3)
    b lbl_fn_800A1F84_00000C5C
lbl_fn_800A1F84_00000C50:
    lwz r6, 0x8(r3)
    clrrwi r6, r6, 1
    stw r6, 0x8(r3)
lbl_fn_800A1F84_00000C5C:
    lwz r6, 0x8(r8)
    cmplw r4, r8
    clrrwi r6, r6, 1
    stw r6, 0x8(r8)
    lwz r6, 0x0(r3)
    lwz r3, 0x8(r6)
    clrrwi r3, r3, 1
    stw r3, 0x8(r6)
    lwz r9, 0x0(r8)
    bne lbl_fn_800A1F84_00000C88
    mr r4, r9
lbl_fn_800A1F84_00000C88:
    lwz r3, 0x4(r9)
    stw r3, 0x0(r8)
    lwz r6, 0x4(r9)
    cmpwi r6, 0x0
    beq lbl_fn_800A1F84_00000CAC
    lwz r3, 0x8(r6)
    clrlwi r3, r3, 31
    or r3, r8, r3
    stw r3, 0x8(r6)
lbl_fn_800A1F84_00000CAC:
    lwz r3, 0x8(r9)
    lwz r6, 0x8(r8)
    clrlwi r3, r3, 31
    rlwimi r3, r6, 0, 0, 30
    stw r3, 0x8(r9)
    lwz r3, 0x8(r8)
    clrrwi r6, r3, 1
    lwz r3, 0x0(r6)
    cmplw r8, r3
    bne lbl_fn_800A1F84_00000CDC
    stw r9, 0x0(r6)
    b lbl_fn_800A1F84_00000CE0
lbl_fn_800A1F84_00000CDC:
    stw r9, 0x4(r6)
lbl_fn_800A1F84_00000CE0:
    stw r8, 0x4(r9)
    mr r7, r4
    lwz r3, 0x8(r8)
    clrlwi r3, r3, 31
    or r3, r9, r3
    stw r3, 0x8(r8)
lbl_fn_800A1F84_00000CF8:
    cmplw r7, r4
    beq lbl_fn_800A1F84_00000D14
    cmpwi r7, 0x0
    beq lbl_fn_800A1F84_000007FC
    lwz r3, 0x8(r7)
    clrlwi. r3, r3, 31
    beq lbl_fn_800A1F84_000007FC
lbl_fn_800A1F84_00000D14:
    cmpwi r7, 0x0
    beq lbl_fn_800A1F84_00000D28
    lwz r0, 0x8(r7)
    clrrwi r0, r0, 1
    stw r0, 0x8(r7)
lbl_fn_800A1F84_00000D28:
    mr r3, r5
    blr
}

asm void fn_800A2664(void)
{
    nofralloc
    stwu r1, -0x4e50(r1)
    mflr r0
    stw r0, 0x4e54(r1)
    stw r31, 0x4e4c(r1)
    lwz r0, lbl_8087EF60
    cmpwi r0, 0x0
    bne lbl_fn_800A2664_00000FD0
    lis r5, lbl_80732798@ha
    li r3, 0x13a0
    addi r5, r5, lbl_80732798@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_800A2664_00000FCC
    bl OSGetTick
    li r0, 0x1
    lis r4, 0x6c08
    stw r3, 0x28(r1)
    subi r4, r4, 0x769b
    stw r0, 0x13a8(r1)
    b lbl_fn_800A2664_00000DC0
lbl_fn_800A2664_00000D90:
    slwi r0, r6, 2
    addi r3, r1, 0x28
    add r3, r3, r0
    lwz r5, -0x4(r3)
    srwi r0, r5, 30
    xor r0, r5, r0
    mullw r0, r0, r4
    add r0, r6, r0
    stw r0, 0x0(r3)
    lwz r3, 0x13a8(r1)
    addi r0, r3, 0x1
    stw r0, 0x13a8(r1)
lbl_fn_800A2664_00000DC0:
    lwz r6, 0x13a8(r1)
    cmpwi r6, 0x270
    blt lbl_fn_800A2664_00000D90
    lis r4, lbl_807789D0@ha
    lis r3, lbl_807789C8@ha
    lfd f0, lbl_807789D0@l(r4)
    li r0, 0x270
    stfd f0, 0x20(r1)
    addi r5, r1, 0x13a8
    lfd f0, lbl_807789C8@l(r3)
    addi r4, r1, 0x24
    stfd f0, 0x18(r1)
    lwz r6, 0x20(r1)
    lwz r8, 0x18(r1)
    lwz r7, 0x1c(r1)
    lwz r3, 0x24(r1)
    stw r8, 0x8(r1)
    stw r7, 0xc(r1)
    stw r6, 0x10(r1)
    stw r3, 0x14(r1)
    mtctr r0
lbl_fn_800A2664_00000E14:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_800A2664_00000E14
    lwz r3, 0x4(r4)
    li r0, 0x270
    stw r3, 0x4(r5)
    addi r5, r1, 0x272c
    addi r4, r1, 0x13a8
    mtctr r0
lbl_fn_800A2664_00000E40:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_800A2664_00000E40
    lwz r3, 0x272c(r1)
    li r0, 0x270
    stw r3, 0x3ab0(r1)
    addi r5, r1, 0x3ab0
    addi r4, r1, 0x272c
    mtctr r0
lbl_fn_800A2664_00000E6C:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_800A2664_00000E6C
    lwz r3, 0x4(r4)
    li r0, 0x270
    stw r3, 0x4(r5)
    subi r5, r31, 0x4
    addi r4, r1, 0x3ab0
    mtctr r0
lbl_fn_800A2664_00000E98:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_800A2664_00000E98
    lwz r3, 0x4e34(r1)
    li r0, 0x2
    stw r3, 0x1380(r31)
    li r12, 0x0
    li r11, 0x0
    li r10, 0x1
    mtctr r0
lbl_fn_800A2664_00000EC8:
    slw r9, r10, r11
    addi r8, r11, 0x1
    addi r7, r11, 0x2
    addi r6, r11, 0x3
    or r12, r12, r9
    slw r8, r10, r8
    or r12, r12, r8
    slw r7, r10, r7
    addi r5, r11, 0x4
    addi r4, r11, 0x5
    or r12, r12, r7
    slw r6, r10, r6
    or r12, r12, r6
    slw r5, r10, r5
    addi r3, r11, 0x6
    addi r0, r11, 0x7
    or r12, r12, r5
    slw r4, r10, r4
    or r12, r12, r4
    slw r3, r10, r3
    or r12, r12, r3
    slw r0, r10, r0
    addi r8, r11, 0x9
    addi r7, r11, 0xa
    addi r6, r11, 0xb
    addi r5, r11, 0xc
    addi r4, r11, 0xd
    addi r3, r11, 0xe
    addi r11, r11, 0x8
    or r12, r12, r0
    slw r9, r10, r11
    slw r8, r10, r8
    addi r0, r11, 0x7
    slw r7, r10, r7
    or r12, r12, r9
    slw r6, r10, r6
    or r12, r12, r8
    slw r5, r10, r5
    or r12, r12, r7
    slw r4, r10, r4
    or r12, r12, r6
    slw r3, r10, r3
    or r12, r12, r5
    slw r0, r10, r0
    or r12, r12, r4
    addi r11, r11, 0x8
    or r12, r12, r3
    or r12, r12, r0
    bdnz lbl_fn_800A2664_00000EC8
    lis r0, 0x4330
    stw r12, 0x4e3c(r1)
    lis r4, lbl_80732790@ha
    lis r3, lbl_80732788@ha
    stw r0, 0x4e38(r1)
    lfd f1, lbl_80732790@l(r4)
    lfd f0, 0x4e38(r1)
    lfd f3, lbl_80732788@l(r3)
    fsub f2, f0, f1
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fadd f2, f3, f2
    fdiv f2, f3, f2
    stfd f2, 0x1388(r31)
    stfd f1, 0x1390(r31)
    stfd f0, 0x1398(r31)
lbl_fn_800A2664_00000FCC:
    stw r31, lbl_8087EF60
lbl_fn_800A2664_00000FD0:
    lwz r31, 0x4e4c(r1)
    lwz r0, 0x4e54(r1)
    lwz r3, lbl_8087EF60
    mtlr r0
    addi r1, r1, 0x4e50
    blr
}
