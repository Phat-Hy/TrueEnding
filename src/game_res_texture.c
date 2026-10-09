#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_23(void);
extern void _savegpr_23(void);
extern void dtor_80084684(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80229DF0(void);
extern void fn_80229F4C(void);
extern void fn_80229FF0(void);
extern void fn_8022A054(void);
extern void fn_8022A618(void);
extern void fn_8022A930(void);
extern void fn_8023793C(void);
extern void fn_80237C88(void);
extern void fn_80238148(void);
extern void fn_802381D8(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);

/* External data declarations */
extern u8 lbl_80742F68[];
extern u8 lbl_80742F80[];
extern u8 lbl_80775A88[];
extern u8 lbl_807C80B0[];
extern u8 lbl_807C80C8[];

/* Small data declarations */
extern u32 lbl_8087DBE4;
extern u32 lbl_8087DBF0;
extern u32 lbl_8087DBF4;
extern u32 lbl_808830D0;
extern u32 lbl_808830D4;

/* Function declarations */
void fn_8022AB18(void);
void fn_8022ADB8(void);
void fn_8022ADD4(void);
void fn_8022B114(void);
void fn_8022B848(void);
void fn_8022B84C(void);
void fn_8022B850(void);
void fn_8022BDB4(void);
void fn_8022BE1C(void);
void fn_8022BE8C(void);
void fn_8022BEAC(void);
void fn_8022C2A0(void);
void fn_8022C3F0(void);

asm void fn_8022AB18(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_807C80B0@ha
    stw r0, 0x24(r1)
    addi r6, r7, lbl_807C80B0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r31, 0x4(r6)
    cmpwi r31, 0x0
    bne lbl_fn_8022AB18_000000A8
    lwz r0, lbl_807C80B0@l(r7)
    li r4, -0x1
    lis r3, 0x20
    li r5, 0x4
    cmpwi r0, 0x0
    stw r4, 0xc(r6)
    stw r3, 0x10(r6)
    stw r5, 0x14(r6)
    bne lbl_fn_8022AB18_00000078
    lis r3, lbl_807C80C8@ha
    lis r4, 0x5858
    addi r3, r3, lbl_807C80C8@l
    addi r0, r4, 0x5858
    stw r0, lbl_807C80B0@l(r7)
    stw r5, 0x1b4(r3)
lbl_fn_8022AB18_00000078:
    lis r3, 0x1
    lis r4, lbl_807C80B0@ha
    subi r0, r3, 0x1
    li r5, 0x1000
    addi r4, r4, lbl_807C80B0@l
    rlwinm. r0, r0, 0, 15, 15
    stw r5, 0x4(r4)
    stw r3, 0x8(r4)
    bne lbl_fn_8022AB18_000000A4
    li r31, 0x1000
    b lbl_fn_8022AB18_000000A8
lbl_fn_8022AB18_000000A4:
    bl fn_80686EA4
lbl_fn_8022AB18_000000A8:
    cmplwi r29, 0x1f8
    ble lbl_fn_8022AB18_0000027C
    addi r0, r31, 0x1f8
    neg r0, r0
    cmplw r29, r0
    bge lbl_fn_8022AB18_0000027C
    addi r0, r28, 0x8
    li r4, 0x0
    clrlwi r6, r0, 29
    li r5, 0x1d0
    cntlzw r0, r6
    extrwi r3, r0, 1, 26
    subfic r0, r6, 0x8
    neg r3, r3
    clrlwi r0, r0, 29
    andc r0, r0, r3
    add r31, r28, r0
    addi r30, r31, 0x8
    mr r3, r30
    bl memset
    li r0, 0x1d3
    stw r0, 0x4(r31)
    lis r6, lbl_807C80B0@ha
    li r3, 0x0
    stw r28, 0x10(r30)
    addi r5, r6, lbl_807C80B0@l
    li r0, 0x4
    li r4, 0x0
    stw r28, 0x1b8(r30)
    stw r29, 0x1b0(r30)
    stw r29, 0x1ac(r30)
    stw r29, 0x1bc(r30)
    lwz r6, lbl_807C80B0@l(r6)
    stw r6, 0x20(r30)
    lwz r5, 0x14(r5)
    ori r5, r5, 0x4
    stw r5, 0x1b4(r30)
    mtctr r0
lbl_fn_8022AB18_00000140:
    add r5, r30, r4
    addi r0, r3, 0x1
    addi r6, r5, 0x24
    stw r6, 0xc(r6)
    slwi r5, r0, 3
    addi r0, r3, 0x2
    add r5, r30, r5
    stw r6, 0x8(r6)
    addi r7, r5, 0x24
    slwi r0, r0, 3
    stw r7, 0xc(r7)
    add r6, r30, r0
    addi r5, r3, 0x3
    addi r0, r3, 0x4
    stw r7, 0x8(r7)
    addi r6, r6, 0x24
    slwi r5, r5, 3
    slwi r0, r0, 3
    stw r6, 0xc(r6)
    add r5, r30, r5
    addi r9, r5, 0x24
    add r7, r30, r0
    stw r6, 0x8(r6)
    addi r0, r3, 0x5
    slwi r6, r0, 3
    addi r5, r3, 0x6
    stw r9, 0xc(r9)
    addi r8, r7, 0x24
    addi r0, r3, 0x7
    add r6, r30, r6
    stw r9, 0x8(r9)
    addi r7, r6, 0x24
    slwi r5, r5, 3
    slwi r0, r0, 3
    stw r8, 0xc(r8)
    add r6, r30, r5
    add r5, r30, r0
    addi r4, r4, 0x40
    stw r8, 0x8(r8)
    addi r6, r6, 0x24
    addi r5, r5, 0x24
    addi r3, r3, 0x8
    stw r7, 0xc(r7)
    stw r7, 0x8(r7)
    stw r6, 0xc(r6)
    stw r6, 0x8(r6)
    stw r5, 0xc(r5)
    stw r5, 0x8(r5)
    bdnz lbl_fn_8022AB18_00000140
    lwz r0, -0x4(r30)
    lis r3, lbl_807C80B0@ha
    subi r7, r30, 0x8
    add r6, r28, r29
    clrrwi r4, r0, 2
    li r5, 0x28
    add r8, r7, r4
    addi r3, r3, lbl_807C80B0@l
    addi r4, r8, 0x8
    li r0, 0x8
    clrlwi r9, r4, 29
    subf r7, r8, r6
    cntlzw r4, r9
    extrwi r6, r4, 1, 26
    subi r7, r7, 0x28
    subfic r4, r9, 0x8
    neg r6, r6
    clrlwi r4, r4, 29
    andc r4, r4, r6
    add r8, r8, r4
    stw r8, 0x18(r30)
    subf r7, r4, r7
    stw r7, 0xc(r30)
    ori r6, r7, 0x1
    add r4, r8, r7
    stw r6, 0x4(r8)
    stw r5, 0x4(r4)
    lwz r3, 0x10(r3)
    stw r3, 0x1c(r30)
    stw r0, 0x1c4(r30)
lbl_fn_8022AB18_0000027C:
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

asm void fn_8022ADB8(void)
{
    nofralloc
    addi r3, r3, 0x1b8
    b lbl_fn_8022ADB8_000002AC
lbl_fn_8022ADB8_000002A8:
    lwz r3, 0x8(r3)
lbl_fn_8022ADB8_000002AC:
    cmpwi r3, 0x0
    bne lbl_fn_8022ADB8_000002A8
    li r3, 0x0
    blr
}

asm void fn_8022ADD4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmplwi r4, 0xf4
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r31, r3
    bgt lbl_fn_8022ADD4_00000500
    cmplwi r4, 0xb
    li r30, 0x10
    blt lbl_fn_8022ADD4_000002EC
    addi r0, r4, 0xb
    clrrwi r30, r0, 3
lbl_fn_8022ADD4_000002EC:
    lwz r6, 0x0(r3)
    srwi r29, r30, 3
    srw r4, r6, r29
    clrlwi. r0, r4, 30
    beq lbl_fn_8022ADD4_0000037C
    nor r0, r4, r4
    clrlwi r0, r0, 31
    add r29, r29, r0
    slwi r0, r29, 3
    add r4, r3, r0
    addi r4, r4, 0x24
    lwz r30, 0x8(r4)
    lwz r5, 0x8(r30)
    cmplw r4, r5
    bne lbl_fn_8022ADD4_0000033C
    li r0, 0x1
    slw r0, r0, r29
    andc r0, r6, r0
    stw r0, 0x0(r3)
    b lbl_fn_8022ADD4_00000358
lbl_fn_8022ADD4_0000033C:
    lwz r0, 0x10(r3)
    cmplw r5, r0
    blt lbl_fn_8022ADD4_00000354
    stw r5, 0x8(r4)
    stw r4, 0xc(r5)
    b lbl_fn_8022ADD4_00000358
lbl_fn_8022ADD4_00000354:
    bl fn_80686EA4
lbl_fn_8022ADD4_00000358:
    slwi r4, r29, 3
    addi r3, r30, 0x8
    ori r0, r4, 0x3
    stw r0, 0x4(r30)
    add r4, r30, r4
    lwz r0, 0x4(r4)
    ori r0, r0, 0x1
    stw r0, 0x4(r4)
    b lbl_fn_8022ADD4_000005E8
lbl_fn_8022ADD4_0000037C:
    lwz r0, 0x8(r3)
    cmplw r30, r0
    ble lbl_fn_8022ADD4_00000538
    cmpwi r4, 0x0
    beq lbl_fn_8022ADD4_000004DC
    li r5, 0x1
    slw r4, r4, r29
    slw r0, r5, r29
    slwi r7, r0, 1
    neg r0, r7
    or r0, r7, r0
    and r4, r4, r0
    neg r0, r4
    and r4, r4, r0
    subi r7, r4, 0x1
    rlwinm r8, r7, 20, 27, 27
    srw r7, r7, r8
    rlwinm r4, r7, 27, 28, 28
    srw r7, r7, r4
    rlwinm r0, r7, 30, 29, 29
    add r8, r8, r4
    srw r7, r7, r0
    rlwinm r4, r7, 31, 30, 30
    add r8, r8, r0
    srw r7, r7, r4
    extrwi r0, r7, 1, 30
    add r8, r8, r4
    add r8, r8, r0
    srw r7, r7, r0
    add r28, r8, r7
    slwi r0, r28, 3
    add r4, r3, r0
    addi r4, r4, 0x24
    lwz r29, 0x8(r4)
    lwz r7, 0x8(r29)
    cmplw r4, r7
    bne lbl_fn_8022ADD4_00000420
    slw r0, r5, r28
    andc r0, r6, r0
    stw r0, 0x0(r3)
    b lbl_fn_8022ADD4_0000043C
lbl_fn_8022ADD4_00000420:
    lwz r0, 0x10(r3)
    cmplw r7, r0
    blt lbl_fn_8022ADD4_00000438
    stw r7, 0x8(r4)
    stw r4, 0xc(r7)
    b lbl_fn_8022ADD4_0000043C
lbl_fn_8022ADD4_00000438:
    bl fn_80686EA4
lbl_fn_8022ADD4_0000043C:
    slwi r3, r28, 3
    ori r0, r30, 0x3
    subf r28, r30, r3
    stw r0, 0x4(r29)
    add r30, r29, r30
    ori r0, r28, 0x1
    stw r0, 0x4(r30)
    stwx r28, r30, r28
    lwz r4, 0x8(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8022ADD4_000004CC
    srwi r5, r4, 3
    li r0, 0x1
    clrrwi r4, r4, 3
    lwz r3, 0x0(r31)
    slw r5, r0, r5
    lwz r27, 0x14(r31)
    add r4, r31, r4
    addi r26, r4, 0x24
    and. r0, r3, r5
    mr r25, r26
    bne lbl_fn_8022ADD4_000004A0
    or r0, r3, r5
    stw r0, 0x0(r31)
    b lbl_fn_8022ADD4_000004BC
lbl_fn_8022ADD4_000004A0:
    lwz r3, 0x8(r26)
    lwz r0, 0x10(r31)
    cmplw r3, r0
    blt lbl_fn_8022ADD4_000004B8
    mr r25, r3
    b lbl_fn_8022ADD4_000004BC
lbl_fn_8022ADD4_000004B8:
    bl fn_80686EA4
lbl_fn_8022ADD4_000004BC:
    stw r27, 0x8(r26)
    stw r27, 0xc(r25)
    stw r25, 0x8(r27)
    stw r26, 0xc(r27)
lbl_fn_8022ADD4_000004CC:
    stw r28, 0x8(r31)
    addi r3, r29, 0x8
    stw r30, 0x14(r31)
    b lbl_fn_8022ADD4_000005E8
lbl_fn_8022ADD4_000004DC:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8022ADD4_00000538
    mr r3, r31
    mr r4, r30
    bl fn_8022A618
    cmpwi r3, 0x0
    bne lbl_fn_8022ADD4_000005E8
    b lbl_fn_8022ADD4_00000538
lbl_fn_8022ADD4_00000500:
    li r0, -0x40
    cmplw r4, r0
    blt lbl_fn_8022ADD4_00000514
    li r30, -0x1
    b lbl_fn_8022ADD4_00000538
lbl_fn_8022ADD4_00000514:
    lwz r0, 0x4(r3)
    addi r4, r4, 0xb
    clrrwi r30, r4, 3
    cmpwi r0, 0x0
    beq lbl_fn_8022ADD4_00000538
    mr r4, r30
    bl fn_8022A054
    cmpwi r3, 0x0
    bne lbl_fn_8022ADD4_000005E8
lbl_fn_8022ADD4_00000538:
    lwz r3, 0x8(r31)
    cmplw r30, r3
    bgt lbl_fn_8022ADD4_000005A4
    subf r5, r30, r3
    lwz r6, 0x14(r31)
    cmplwi r5, 0x10
    blt lbl_fn_8022ADD4_00000578
    add r4, r6, r30
    stw r4, 0x14(r31)
    ori r3, r5, 0x1
    ori r0, r30, 0x3
    stw r5, 0x8(r31)
    stw r3, 0x4(r4)
    stwx r5, r4, r5
    stw r0, 0x4(r6)
    b lbl_fn_8022ADD4_0000059C
lbl_fn_8022ADD4_00000578:
    li r4, 0x0
    stw r4, 0x8(r31)
    ori r0, r3, 0x3
    add r3, r6, r3
    stw r4, 0x14(r31)
    stw r0, 0x4(r6)
    lwz r0, 0x4(r3)
    ori r0, r0, 0x1
    stw r0, 0x4(r3)
lbl_fn_8022ADD4_0000059C:
    addi r3, r6, 0x8
    b lbl_fn_8022ADD4_000005E8
lbl_fn_8022ADD4_000005A4:
    lwz r0, 0xc(r31)
    cmplw r30, r0
    bge lbl_fn_8022ADD4_000005DC
    lwz r6, 0x18(r31)
    subf r0, r30, r0
    stw r0, 0xc(r31)
    ori r4, r0, 0x1
    add r5, r6, r30
    ori r0, r30, 0x3
    stw r5, 0x18(r31)
    addi r3, r6, 0x8
    stw r4, 0x4(r5)
    stw r0, 0x4(r6)
    b lbl_fn_8022ADD4_000005E8
lbl_fn_8022ADD4_000005DC:
    mr r3, r31
    mr r4, r30
    bl fn_80229F4C
lbl_fn_8022ADD4_000005E8:
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8022B114(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r26, r3
    beq lbl_fn_8022B114_00000D1C
    lwz r25, 0x10(r3)
    subi r29, r4, 0x8
    cmplw r29, r25
    blt lbl_fn_8022B114_00000D18
    lwz r4, 0x4(r29)
    rlwinm. r0, r4, 0, 30, 30
    beq lbl_fn_8022B114_00000D18
    clrlwi. r0, r4, 31
    clrrwi r31, r4, 2
    add r30, r29, r31
    bne lbl_fn_8022B114_00000874
    lwz r4, 0x0(r29)
    subf r29, r4, r29
    add r31, r31, r4
    cmplw r29, r25
    blt lbl_fn_8022B114_00000D18
    lwz r0, 0x14(r3)
    cmplw r29, r0
    beq lbl_fn_8022B114_00000844
    srwi r5, r4, 3
    cmplwi r5, 0x20
    bge lbl_fn_8022B114_000006D4
    lwz r4, 0x8(r29)
    lwz r6, 0xc(r29)
    cmplw r4, r6
    bne lbl_fn_8022B114_00000698
    li r0, 0x1
    lwz r4, 0x0(r3)
    slw r0, r0, r5
    andc r0, r4, r0
    stw r0, 0x0(r3)
    b lbl_fn_8022B114_00000874
lbl_fn_8022B114_00000698:
    slwi r0, r5, 3
    add r3, r3, r0
    addi r0, r3, 0x24
    cmplw r4, r0
    beq lbl_fn_8022B114_000006B4
    cmplw r4, r25
    blt lbl_fn_8022B114_000006D0
lbl_fn_8022B114_000006B4:
    cmplw r6, r0
    beq lbl_fn_8022B114_000006C4
    cmplw r6, r25
    blt lbl_fn_8022B114_000006D0
lbl_fn_8022B114_000006C4:
    stw r6, 0xc(r4)
    stw r4, 0x8(r6)
    b lbl_fn_8022B114_00000874
lbl_fn_8022B114_000006D0:
    bl fn_80686EA4
lbl_fn_8022B114_000006D4:
    lwz r27, 0xc(r29)
    lwz r28, 0x18(r29)
    cmplw r27, r29
    beq lbl_fn_8022B114_00000700
    lwz r3, 0x8(r29)
    cmplw r3, r25
    blt lbl_fn_8022B114_000006FC
    stw r27, 0xc(r3)
    stw r3, 0x8(r27)
    b lbl_fn_8022B114_00000764
lbl_fn_8022B114_000006FC:
    bl fn_80686EA4
lbl_fn_8022B114_00000700:
    lwz r27, 0x14(r29)
    addi r3, r29, 0x14
    cmpwi r27, 0x0
    bne lbl_fn_8022B114_0000072C
    lwz r27, 0x10(r29)
    addi r3, r29, 0x10
    cmpwi r27, 0x0
    beq lbl_fn_8022B114_00000764
    b lbl_fn_8022B114_0000072C
lbl_fn_8022B114_00000724:
    mr r3, r4
    lwz r27, 0x0(r4)
lbl_fn_8022B114_0000072C:
    lwz r0, 0x14(r27)
    addi r4, r27, 0x14
    cmpwi r0, 0x0
    bne lbl_fn_8022B114_00000724
    lwz r0, 0x10(r27)
    addi r4, r27, 0x10
    cmpwi r0, 0x0
    bne lbl_fn_8022B114_00000724
    cmplw r3, r25
    blt lbl_fn_8022B114_00000760
    li r0, 0x0
    stw r0, 0x0(r3)
    b lbl_fn_8022B114_00000764
lbl_fn_8022B114_00000760:
    bl fn_80686EA4
lbl_fn_8022B114_00000764:
    cmpwi r28, 0x0
    beq lbl_fn_8022B114_00000874
    lwz r0, 0x1c(r29)
    slwi r0, r0, 2
    add r3, r26, r0
    lwz r0, 0x12c(r3)
    cmplw r29, r0
    bne lbl_fn_8022B114_000007AC
    cmpwi r27, 0x0
    stw r27, 0x12c(r3)
    bne lbl_fn_8022B114_000007D8
    lwz r0, 0x1c(r29)
    li r3, 0x1
    lwz r4, 0x4(r26)
    slw r0, r3, r0
    andc r0, r4, r0
    stw r0, 0x4(r26)
    b lbl_fn_8022B114_000007D8
lbl_fn_8022B114_000007AC:
    lwz r0, 0x10(r26)
    cmplw r28, r0
    blt lbl_fn_8022B114_000007D4
    lwz r0, 0x10(r28)
    cmplw r0, r29
    bne lbl_fn_8022B114_000007CC
    stw r27, 0x10(r28)
    b lbl_fn_8022B114_000007D8
lbl_fn_8022B114_000007CC:
    stw r27, 0x14(r28)
    b lbl_fn_8022B114_000007D8
lbl_fn_8022B114_000007D4:
    bl fn_80686EA4
lbl_fn_8022B114_000007D8:
    cmpwi r27, 0x0
    beq lbl_fn_8022B114_00000874
    lwz r0, 0x10(r26)
    cmplw r27, r0
    blt lbl_fn_8022B114_00000840
    stw r28, 0x18(r27)
    lwz r3, 0x10(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8022B114_00000818
    lwz r0, 0x10(r26)
    cmplw r3, r0
    blt lbl_fn_8022B114_00000814
    stw r3, 0x10(r27)
    stw r27, 0x18(r3)
    b lbl_fn_8022B114_00000818
lbl_fn_8022B114_00000814:
    bl fn_80686EA4
lbl_fn_8022B114_00000818:
    lwz r3, 0x14(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8022B114_00000874
    lwz r0, 0x10(r26)
    cmplw r3, r0
    blt lbl_fn_8022B114_0000083C
    stw r3, 0x14(r27)
    stw r27, 0x18(r3)
    b lbl_fn_8022B114_00000874
lbl_fn_8022B114_0000083C:
    bl fn_80686EA4
lbl_fn_8022B114_00000840:
    bl fn_80686EA4
lbl_fn_8022B114_00000844:
    lwz r0, 0x4(r30)
    clrlwi r0, r0, 30
    cmplwi r0, 0x3
    bne lbl_fn_8022B114_00000874
    stw r31, 0x8(r26)
    ori r0, r31, 0x1
    lwz r3, 0x4(r30)
    clrrwi r3, r3, 1
    stw r3, 0x4(r30)
    stw r0, 0x4(r29)
    stwx r31, r29, r31
    b lbl_fn_8022B114_00000D1C
lbl_fn_8022B114_00000874:
    cmplw r29, r30
    bge lbl_fn_8022B114_00000D18
    lwz r3, 0x4(r30)
    clrlwi. r0, r3, 31
    beq lbl_fn_8022B114_00000D18
    rlwinm. r0, r3, 0, 30, 30
    bne lbl_fn_8022B114_00000B2C
    lwz r0, 0x18(r26)
    cmplw r30, r0
    bne lbl_fn_8022B114_000008E8
    lwz r0, 0xc(r26)
    stw r29, 0x18(r26)
    add r3, r0, r31
    stw r3, 0xc(r26)
    ori r0, r3, 0x1
    stw r0, 0x4(r29)
    lwz r0, 0x14(r26)
    cmplw r29, r0
    bne lbl_fn_8022B114_000008CC
    li r0, 0x0
    stw r0, 0x14(r26)
    stw r0, 0x8(r26)
lbl_fn_8022B114_000008CC:
    lwz r0, 0x1c(r26)
    cmplw r3, r0
    ble lbl_fn_8022B114_00000D1C
    mr r3, r26
    li r4, 0x0
    bl fn_80229FF0
    b lbl_fn_8022B114_00000D1C
lbl_fn_8022B114_000008E8:
    lwz r0, 0x14(r26)
    cmplw r30, r0
    bne lbl_fn_8022B114_00000914
    lwz r0, 0x8(r26)
    stw r29, 0x14(r26)
    add r3, r0, r31
    stw r3, 0x8(r26)
    ori r0, r3, 0x1
    stw r0, 0x4(r29)
    stwx r3, r29, r3
    b lbl_fn_8022B114_00000D1C
lbl_fn_8022B114_00000914:
    srwi r4, r3, 3
    clrrwi r0, r3, 2
    cmplwi r4, 0x20
    add r31, r31, r0
    bge lbl_fn_8022B114_00000994
    lwz r5, 0x8(r30)
    lwz r6, 0xc(r30)
    cmplw r5, r6
    bne lbl_fn_8022B114_00000950
    li r0, 0x1
    lwz r3, 0x0(r26)
    slw r0, r0, r4
    andc r0, r3, r0
    stw r0, 0x0(r26)
    b lbl_fn_8022B114_00000B0C
lbl_fn_8022B114_00000950:
    slwi r0, r4, 3
    add r3, r26, r0
    addi r3, r3, 0x24
    cmplw r5, r3
    beq lbl_fn_8022B114_00000970
    lwz r0, 0x10(r26)
    cmplw r5, r0
    blt lbl_fn_8022B114_00000990
lbl_fn_8022B114_00000970:
    cmplw r6, r3
    beq lbl_fn_8022B114_00000984
    lwz r0, 0x10(r26)
    cmplw r6, r0
    blt lbl_fn_8022B114_00000990
lbl_fn_8022B114_00000984:
    stw r6, 0xc(r5)
    stw r5, 0x8(r6)
    b lbl_fn_8022B114_00000B0C
lbl_fn_8022B114_00000990:
    bl fn_80686EA4
lbl_fn_8022B114_00000994:
    lwz r28, 0xc(r30)
    lwz r27, 0x18(r30)
    cmplw r28, r30
    beq lbl_fn_8022B114_000009C4
    lwz r3, 0x8(r30)
    lwz r0, 0x10(r26)
    cmplw r3, r0
    blt lbl_fn_8022B114_000009C0
    stw r28, 0xc(r3)
    stw r3, 0x8(r28)
    b lbl_fn_8022B114_00000A2C
lbl_fn_8022B114_000009C0:
    bl fn_80686EA4
lbl_fn_8022B114_000009C4:
    lwz r28, 0x14(r30)
    addi r3, r30, 0x14
    cmpwi r28, 0x0
    bne lbl_fn_8022B114_000009F0
    lwz r28, 0x10(r30)
    addi r3, r30, 0x10
    cmpwi r28, 0x0
    beq lbl_fn_8022B114_00000A2C
    b lbl_fn_8022B114_000009F0
lbl_fn_8022B114_000009E8:
    mr r3, r4
    lwz r28, 0x0(r4)
lbl_fn_8022B114_000009F0:
    lwz r0, 0x14(r28)
    addi r4, r28, 0x14
    cmpwi r0, 0x0
    bne lbl_fn_8022B114_000009E8
    lwz r0, 0x10(r28)
    addi r4, r28, 0x10
    cmpwi r0, 0x0
    bne lbl_fn_8022B114_000009E8
    lwz r0, 0x10(r26)
    cmplw r3, r0
    blt lbl_fn_8022B114_00000A28
    li r0, 0x0
    stw r0, 0x0(r3)
    b lbl_fn_8022B114_00000A2C
lbl_fn_8022B114_00000A28:
    bl fn_80686EA4
lbl_fn_8022B114_00000A2C:
    cmpwi r27, 0x0
    beq lbl_fn_8022B114_00000B0C
    lwz r0, 0x1c(r30)
    slwi r0, r0, 2
    add r3, r26, r0
    lwz r0, 0x12c(r3)
    cmplw r30, r0
    bne lbl_fn_8022B114_00000A74
    cmpwi r28, 0x0
    stw r28, 0x12c(r3)
    bne lbl_fn_8022B114_00000AA0
    lwz r0, 0x1c(r30)
    li r3, 0x1
    lwz r4, 0x4(r26)
    slw r0, r3, r0
    andc r0, r4, r0
    stw r0, 0x4(r26)
    b lbl_fn_8022B114_00000AA0
lbl_fn_8022B114_00000A74:
    lwz r0, 0x10(r26)
    cmplw r27, r0
    blt lbl_fn_8022B114_00000A9C
    lwz r0, 0x10(r27)
    cmplw r0, r30
    bne lbl_fn_8022B114_00000A94
    stw r28, 0x10(r27)
    b lbl_fn_8022B114_00000AA0
lbl_fn_8022B114_00000A94:
    stw r28, 0x14(r27)
    b lbl_fn_8022B114_00000AA0
lbl_fn_8022B114_00000A9C:
    bl fn_80686EA4
lbl_fn_8022B114_00000AA0:
    cmpwi r28, 0x0
    beq lbl_fn_8022B114_00000B0C
    lwz r0, 0x10(r26)
    cmplw r28, r0
    blt lbl_fn_8022B114_00000B08
    stw r27, 0x18(r28)
    lwz r3, 0x10(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8022B114_00000AE0
    lwz r0, 0x10(r26)
    cmplw r3, r0
    blt lbl_fn_8022B114_00000ADC
    stw r3, 0x10(r28)
    stw r28, 0x18(r3)
    b lbl_fn_8022B114_00000AE0
lbl_fn_8022B114_00000ADC:
    bl fn_80686EA4
lbl_fn_8022B114_00000AE0:
    lwz r3, 0x14(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8022B114_00000B0C
    lwz r0, 0x10(r26)
    cmplw r3, r0
    blt lbl_fn_8022B114_00000B04
    stw r3, 0x14(r28)
    stw r28, 0x18(r3)
    b lbl_fn_8022B114_00000B0C
lbl_fn_8022B114_00000B04:
    bl fn_80686EA4
lbl_fn_8022B114_00000B08:
    bl fn_80686EA4
lbl_fn_8022B114_00000B0C:
    ori r0, r31, 0x1
    stw r0, 0x4(r29)
    stwx r31, r29, r31
    lwz r0, 0x14(r26)
    cmplw r29, r0
    bne lbl_fn_8022B114_00000B40
    stw r31, 0x8(r26)
    b lbl_fn_8022B114_00000D1C
lbl_fn_8022B114_00000B2C:
    clrrwi r0, r3, 1
    stw r0, 0x4(r30)
    ori r0, r31, 0x1
    stw r0, 0x4(r29)
    stwx r31, r29, r31
lbl_fn_8022B114_00000B40:
    srwi r4, r31, 3
    cmplwi r4, 0x20
    bge lbl_fn_8022B114_00000BAC
    li r0, 0x1
    lwz r3, 0x0(r26)
    slw r5, r0, r4
    slwi r4, r4, 3
    add r4, r26, r4
    addi r25, r4, 0x24
    and. r0, r3, r5
    mr r27, r25
    bne lbl_fn_8022B114_00000B7C
    or r0, r3, r5
    stw r0, 0x0(r26)
    b lbl_fn_8022B114_00000B98
lbl_fn_8022B114_00000B7C:
    lwz r3, 0x8(r25)
    lwz r0, 0x10(r26)
    cmplw r3, r0
    blt lbl_fn_8022B114_00000B94
    mr r27, r3
    b lbl_fn_8022B114_00000B98
lbl_fn_8022B114_00000B94:
    bl fn_80686EA4
lbl_fn_8022B114_00000B98:
    stw r29, 0x8(r25)
    stw r29, 0xc(r27)
    stw r27, 0x8(r29)
    stw r25, 0xc(r29)
    b lbl_fn_8022B114_00000D1C
lbl_fn_8022B114_00000BAC:
    srwi. r3, r31, 8
    bne lbl_fn_8022B114_00000BBC
    li r7, 0x0
    b lbl_fn_8022B114_00000C18
lbl_fn_8022B114_00000BBC:
    cmplwi r3, 0xffff
    ble lbl_fn_8022B114_00000BCC
    li r7, 0x1f
    b lbl_fn_8022B114_00000C18
lbl_fn_8022B114_00000BCC:
    subi r0, r3, 0x100
    rlwinm r4, r0, 16, 28, 28
    slw r3, r3, r4
    subi r0, r3, 0x1000
    rlwinm r5, r0, 16, 29, 29
    slw r3, r3, r5
    subi r0, r3, 0x4000
    add r4, r4, r5
    rlwinm r0, r0, 16, 30, 30
    add r4, r4, r0
    slw r0, r3, r0
    subfic r3, r4, 0xe
    srwi r0, r0, 15
    add r3, r3, r0
    addi r0, r3, 0x7
    srw r0, r31, r0
    slwi r3, r3, 1
    clrlwi r0, r0, 31
    add r7, r3, r0
lbl_fn_8022B114_00000C18:
    stw r7, 0x1c(r29)
    li r3, 0x0
    li r0, 0x1
    slwi r4, r7, 2
    stw r3, 0x14(r29)
    add r4, r26, r4
    slw r5, r0, r7
    stw r3, 0x10(r29)
    addi r6, r4, 0x12c
    lwz r3, 0x4(r26)
    and. r0, r3, r5
    bne lbl_fn_8022B114_00000C64
    or r0, r3, r5
    stw r0, 0x4(r26)
    stw r29, 0x0(r6)
    stw r6, 0x18(r29)
    stw r29, 0xc(r29)
    stw r29, 0x8(r29)
    b lbl_fn_8022B114_00000D1C
lbl_fn_8022B114_00000C64:
    subi r3, r7, 0x1f
    subfic r0, r7, 0x1f
    nor r0, r3, r0
    lwz r25, 0x0(r6)
    srwi r3, r7, 1
    srawi r4, r0, 31
    addi r0, r3, 0x6
    subfic r0, r0, 0x1f
    andc r0, r0, r4
    slw r4, r31, r0
lbl_fn_8022B114_00000C8C:
    lwz r0, 0x4(r25)
    clrrwi r0, r0, 2
    cmplw r0, r31
    beq lbl_fn_8022B114_00000CE0
    rlwinm r0, r4, 3, 29, 29
    slwi r4, r4, 1
    add r3, r25, r0
    lwzu r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8022B114_00000CBC
    mr r25, r0
    b lbl_fn_8022B114_00000C8C
lbl_fn_8022B114_00000CBC:
    lwz r0, 0x10(r26)
    cmplw r3, r0
    blt lbl_fn_8022B114_00000CDC
    stw r29, 0x0(r3)
    stw r25, 0x18(r29)
    stw r29, 0xc(r29)
    stw r29, 0x8(r29)
    b lbl_fn_8022B114_00000D1C
lbl_fn_8022B114_00000CDC:
    bl fn_80686EA4
lbl_fn_8022B114_00000CE0:
    lwz r0, 0x10(r26)
    lwz r3, 0x8(r25)
    cmplw r25, r0
    blt lbl_fn_8022B114_00000D14
    cmplw r3, r0
    blt lbl_fn_8022B114_00000D14
    stw r29, 0xc(r3)
    li r0, 0x0
    stw r29, 0x8(r25)
    stw r3, 0x8(r29)
    stw r25, 0xc(r29)
    stw r0, 0x18(r29)
    b lbl_fn_8022B114_00000D1C
lbl_fn_8022B114_00000D14:
    bl fn_80686EA4
lbl_fn_8022B114_00000D18:
    bl fn_80686EA4
lbl_fn_8022B114_00000D1C:
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8022B848(void)
{
    nofralloc
    b fn_8022A930
}

asm void fn_8022B84C(void)
{
    nofralloc
    b fn_80229DF0
}

asm void fn_8022B850(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    mulli r7, r4, 0xe0
    stw r0, 0x44(r1)
    stmw r27, 0x2c(r1)
    lis r30, lbl_80742F80@ha
    mr r27, r5
    mr r31, r4
    addi r5, r30, lbl_80742F80@l
    mr r28, r6
    mr r29, r3
    mr r6, r5
    stw r4, 0x0(r3)
    addi r3, r7, 0x10
    li r4, 0x7
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8022BDB4@ha
    mr r7, r31
    addi r4, r4, fn_8022BDB4@l
    li r5, 0x0
    li r6, 0xe0
    bl fn_80695720
    mulli r7, r27, 0x1b8
    stw r3, 0x4(r29)
    addi r5, r30, lbl_80742F80@l
    stw r27, 0x10(r29)
    li r4, 0x7
    addi r3, r7, 0x10
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8022BE1C@ha
    mr r7, r27
    addi r4, r4, fn_8022BE1C@l
    li r5, 0x0
    li r6, 0x1b8
    bl fn_80695720
    mulli r7, r28, 0x94
    stw r3, 0x14(r29)
    addi r5, r30, lbl_80742F80@l
    stw r28, 0x20(r29)
    li r4, 0x7
    addi r3, r7, 0x10
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80238148@ha
    lis r5, fn_802381D8@ha
    mr r7, r28
    li r6, 0x94
    addi r4, r4, fn_80238148@l
    addi r5, r5, fn_802381D8@l
    bl fn_80695720
    lwz r0, 0x2c(r29)
    stw r3, 0x24(r29)
    cmplwi r0, 0x40
    bne lbl_fn_8022B850_00000E2C
    lwz r0, 0x30(r29)
    cmplwi r0, 0x120
    beq lbl_fn_8022B850_000011C0
lbl_fn_8022B850_00000E2C:
    lwz r4, 0x38(r29)
    li r3, 0x40
    li r0, 0x120
    stw r3, 0x2c(r29)
    cmpwi r4, 0x0
    stw r0, 0x30(r29)
    beq lbl_fn_8022B850_00000E54
    beq lbl_fn_8022B850_00000E54
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_8022B850_00000E54:
    li r0, 0x4800
    stw r0, 0x34(r29)
    mulli r3, r0, 0x14
    li r4, 0x7
    la r5, lbl_8087DBF4
    la r6, lbl_8087DBF0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8022BE8C@ha
    li r5, 0x0
    addi r4, r4, fn_8022BE8C@l
    li r6, 0x14
    li r7, 0x4800
    bl fn_80695720
    stw r3, 0x38(r29)
    b lbl_fn_8022B850_00000E9C
    stw r0, 0x38(r29)
lbl_fn_8022B850_00000E9C:
    lwz r4, 0x40(r29)
    cmplwi r4, 0x120
    bge lbl_fn_8022B850_000011B0
    lwz r5, 0x44(r29)
    subfic r30, r4, 0x120
    cmplw r30, r5
    bgt lbl_fn_8022B850_00000EC4
    subf r0, r30, r5
    cmplw r4, r0
    ble lbl_fn_8022B850_00000F34
lbl_fn_8022B850_00000EC4:
    lwz r4, 0x40(r29)
    lis r3, 0x4000
    lwz r31, 0x44(r29)
    subi r0, r3, 0x1
    add r3, r4, r30
    subf r3, r5, r3
    subf r0, r31, r0
    cmplw r3, r0
    ble lbl_fn_8022B850_00000F0C
    lis r4, lbl_80742F80@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80742F80@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8022B850_00000F0C:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_8022B850_00000F20
    b lbl_fn_8022B850_00000F5C
lbl_fn_8022B850_00000F20:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_8022B850_00000F5C
    b lbl_fn_8022B850_00000F5C
lbl_fn_8022B850_00000F34:
    lwz r3, 0x3c(r29)
    slwi r0, r4, 2
    slwi r5, r30, 2
    li r4, 0x0
    add r3, r3, r0
    bl memset
    lwz r0, 0x40(r29)
    add r0, r0, r30
    stw r0, 0x40(r29)
    b lbl_fn_8022B850_000011C0
lbl_fn_8022B850_00000F5C:
    li r5, 0x0
    addi r4, r29, 0x44
    lis r3, 0x4000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x40(r29)
    lwz r31, 0x44(r29)
    add r3, r3, r30
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_8022B850_00000FC4
    lis r4, lbl_80742F80@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80742F80@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8022B850_00000FC4:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_8022B850_00001014
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_8022B850_00001008
    addi r3, r1, 0x8
lbl_fn_8022B850_00001008:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_8022B850_00001058
lbl_fn_8022B850_00001014:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_8022B850_00001050
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_8022B850_00001044
    addi r3, r1, 0x8
lbl_fn_8022B850_00001044:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_8022B850_00001058
lbl_fn_8022B850_00001050:
    lis r3, 0x4000
    subi r28, r3, 0x1
lbl_fn_8022B850_00001058:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r28, r0
    ble lbl_fn_8022B850_0000108C
    lis r4, lbl_80742F80@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80742F80@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8022B850_0000108C:
    slwi r3, r28, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8022B850_000010C0
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8022B850_000010C0:
    lwz r0, 0x18(r1)
    slwi r5, r30, 2
    stw r31, 0x14(r1)
    li r4, 0x0
    slwi r3, r0, 2
    stw r28, 0x1c(r1)
    lwz r0, 0x40(r29)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r31, r0
    add r3, r3, r0
    bl memset
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    add r3, r3, r30
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x40(r29)
    lwz r28, 0x3c(r29)
    slwi r4, r4, 2
    add r5, r28, r4
    subf r5, r28, r5
    mr r4, r28
    srawi r5, r5, 2
    addze r30, r5
    subf r0, r30, r0
    stw r0, 0x24(r1)
    slwi r31, r30, 2
    slwi r0, r0, 2
    mr r5, r31
    add r3, r3, r0
    bl memcpy
    mr r3, r28
    mr r5, r31
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    li r4, 0x0
    addic. r3, r1, 0x14
    add r0, r0, r30
    stw r0, 0x18(r1)
    stw r4, 0x40(r29)
    lwz r3, 0x44(r29)
    lwz r0, 0x1c(r1)
    stw r0, 0x44(r29)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x3c(r29)
    stw r0, 0x3c(r29)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x40(r29)
    stw r4, 0x18(r1)
    beq lbl_fn_8022B850_000011C0
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8022B850_000011C0
    stw r4, 0x18(r1)
    bl dtor_80084684
    b lbl_fn_8022B850_000011C0
lbl_fn_8022B850_000011B0:
    ble lbl_fn_8022B850_000011C0
    subi r0, r4, 0x120
    subf r0, r0, r4
    stw r0, 0x40(r29)
lbl_fn_8022B850_000011C0:
    lwz r5, 0x4(r29)
    addi r3, r29, 0xc
    lwz r7, 0x0(r29)
    addi r4, r29, 0x8
    li r6, 0xe0
    bl fn_8023793C
    li r10, 0x0
    li r11, 0x0
    lis r8, 0x6666
    li r5, 0x1
    li r4, 0x0
    b lbl_fn_8022B850_00001268
lbl_fn_8022B850_000011F0:
    lwz r0, 0x14(r29)
    add r9, r0, r11
    lwz r7, 0x1a8(r9)
    cmpwi r7, 0x0
    beq lbl_fn_8022B850_00001244
    lwz r3, 0x38(r29)
    addi r6, r8, 0x6667
    lwz r0, 0x2c(r29)
    subf r3, r3, r7
    lwz r7, 0x3c(r29)
    mulhw r3, r6, r3
    srawi r3, r3, 3
    srwi r6, r3, 31
    add r3, r3, r6
    divwu r0, r3, r0
    rlwinm r6, r0, 29, 3, 29
    clrlwi r0, r0, 27
    lwzx r3, r7, r6
    slw r0, r5, r0
    andc r0, r3, r0
    stwx r0, r7, r6
lbl_fn_8022B850_00001244:
    stw r4, 0x1a8(r9)
    addi r10, r10, 0x1
    stw r4, 0x1b4(r9)
    stw r4, 0x1b0(r9)
    stw r4, 0x1ac(r9)
    lwz r0, 0x14(r29)
    add r3, r0, r11
    addi r11, r11, 0x1b8
    stw r4, 0x8(r3)
lbl_fn_8022B850_00001268:
    lwz r7, 0x10(r29)
    cmpw r10, r7
    blt lbl_fn_8022B850_000011F0
    lwz r5, 0x14(r29)
    addi r3, r29, 0x1c
    addi r4, r29, 0x18
    li r6, 0x1b8
    bl fn_8023793C
    lmw r27, 0x2c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8022BDB4(void)
{
    nofralloc
    lfs f1, lbl_808830D0
    li r4, 0x0
    lfs f0, lbl_808830D4
    li r0, -0x1
    stw r4, 0x0(r3)
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    stw r4, 0xc(r3)
    stw r4, 0x10(r3)
    stw r0, 0x14(r3)
    sth r4, 0x18(r3)
    stb r4, 0x1a(r3)
    stb r4, 0x1b(r3)
    stfs f1, 0x1c(r3)
    stw r4, 0x20(r3)
    stw r4, 0x24(r3)
    stw r4, 0x28(r3)
    stw r4, 0x30(r3)
    stw r4, 0x34(r3)
    stw r4, 0xbc(r3)
    stw r4, 0xc0(r3)
    stw r4, 0xc4(r3)
    stfs f1, 0xc8(r3)
    stfs f1, 0xcc(r3)
    stfs f0, 0xdc(r3)
    blr
}

asm void fn_8022BE1C(void)
{
    nofralloc
    lfs f1, lbl_808830D0
    li r0, 0x0
    lfs f0, lbl_808830D4
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stfs f1, 0x14(r3)
    stfs f1, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    stfs f1, 0x28(r3)
    stfs f1, 0x2c(r3)
    stfs f1, 0x30(r3)
    stfs f1, 0x34(r3)
    stw r0, 0x190(r3)
    stfs f1, 0x194(r3)
    stfs f1, 0x198(r3)
    stfs f1, 0x19c(r3)
    stfs f1, 0x1a0(r3)
    stfs f0, 0x1a4(r3)
    stw r0, 0x1a8(r3)
    stw r0, 0x1ac(r3)
    stw r0, 0x1b0(r3)
    stw r0, 0x1b4(r3)
    blr
}

asm void fn_8022BE8C(void)
{
    nofralloc
    lfs f1, lbl_808830D0
    lfs f0, lbl_808830D4
    stfs f1, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f1, 0x8(r3)
    stfs f1, 0xc(r3)
    stfs f0, 0x10(r3)
    blr
}

asm void fn_8022BEAC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    stw r28, 0x30(r1)
    lwz r0, 0x2c(r3)
    cmplwi r0, 0x40
    bne lbl_fn_8022BEAC_000013D0
    lwz r0, 0x30(r3)
    cmplw r4, r0
    beq lbl_fn_8022BEAC_00001768
lbl_fn_8022BEAC_000013D0:
    lwz r5, 0x38(r3)
    li r0, 0x40
    stw r0, 0x2c(r3)
    cmpwi r5, 0x0
    stw r4, 0x30(r3)
    beq lbl_fn_8022BEAC_000013F4
    beq lbl_fn_8022BEAC_000013F4
    subi r3, r5, 0x10
    bl fn_80084C24
lbl_fn_8022BEAC_000013F4:
    slwi. r28, r30, 6
    stw r28, 0x34(r29)
    beq lbl_fn_8022BEAC_0000143C
    mulli r3, r28, 0x14
    li r4, 0x7
    la r5, lbl_8087DBF4
    la r6, lbl_8087DBF0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8022BE8C@ha
    mr r7, r28
    addi r4, r4, fn_8022BE8C@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    stw r3, 0x38(r29)
    b lbl_fn_8022BEAC_00001444
lbl_fn_8022BEAC_0000143C:
    li r0, 0x0
    stw r0, 0x38(r29)
lbl_fn_8022BEAC_00001444:
    lwz r4, 0x40(r29)
    cmplw r30, r4
    ble lbl_fn_8022BEAC_00001758
    lwz r5, 0x44(r29)
    subf r30, r4, r30
    cmplw r30, r5
    bgt lbl_fn_8022BEAC_0000146C
    subf r0, r30, r5
    cmplw r4, r0
    ble lbl_fn_8022BEAC_000014DC
lbl_fn_8022BEAC_0000146C:
    lwz r4, 0x40(r29)
    lis r3, 0x4000
    lwz r28, 0x44(r29)
    subi r0, r3, 0x1
    add r3, r4, r30
    subf r3, r5, r3
    subf r0, r28, r0
    cmplw r3, r0
    ble lbl_fn_8022BEAC_000014B4
    lis r4, lbl_80742F80@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80742F80@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8022BEAC_000014B4:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r28, r0
    bge lbl_fn_8022BEAC_000014C8
    b lbl_fn_8022BEAC_00001504
lbl_fn_8022BEAC_000014C8:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r28, r0
    bge lbl_fn_8022BEAC_00001504
    b lbl_fn_8022BEAC_00001504
lbl_fn_8022BEAC_000014DC:
    lwz r3, 0x3c(r29)
    slwi r0, r4, 2
    slwi r5, r30, 2
    li r4, 0x0
    add r3, r3, r0
    bl memset
    lwz r0, 0x40(r29)
    add r0, r0, r30
    stw r0, 0x40(r29)
    b lbl_fn_8022BEAC_00001768
lbl_fn_8022BEAC_00001504:
    li r5, 0x0
    addi r4, r29, 0x44
    lis r3, 0x4000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x40(r29)
    lwz r31, 0x44(r29)
    add r3, r3, r30
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x10(r1)
    ble lbl_fn_8022BEAC_0000156C
    lis r4, lbl_80742F80@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80742F80@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8022BEAC_0000156C:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_8022BEAC_000015BC
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x10(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_8022BEAC_000015B0
    addi r3, r1, 0x10
lbl_fn_8022BEAC_000015B0:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_8022BEAC_00001600
lbl_fn_8022BEAC_000015BC:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_8022BEAC_000015F8
    addi r3, r31, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_8022BEAC_000015EC
    addi r3, r1, 0x10
lbl_fn_8022BEAC_000015EC:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_8022BEAC_00001600
lbl_fn_8022BEAC_000015F8:
    lis r3, 0x4000
    subi r31, r3, 0x1
lbl_fn_8022BEAC_00001600:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_8022BEAC_00001634
    lis r4, lbl_80742F80@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80742F80@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8022BEAC_00001634:
    slwi r3, r31, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_8022BEAC_00001668
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8022BEAC_00001668:
    lwz r0, 0x18(r1)
    slwi r5, r30, 2
    stw r28, 0x14(r1)
    li r4, 0x0
    slwi r3, r0, 2
    stw r31, 0x1c(r1)
    lwz r0, 0x40(r29)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r28, r0
    add r3, r3, r0
    bl memset
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    add r3, r3, r30
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x40(r29)
    lwz r30, 0x3c(r29)
    slwi r4, r4, 2
    add r5, r30, r4
    subf r5, r30, r5
    mr r4, r30
    srawi r5, r5, 2
    addze r28, r5
    subf r0, r28, r0
    stw r0, 0x24(r1)
    slwi r31, r28, 2
    slwi r0, r0, 2
    mr r5, r31
    add r3, r3, r0
    bl memcpy
    mr r3, r30
    mr r5, r31
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    li r4, 0x0
    addic. r3, r1, 0x14
    add r0, r0, r28
    stw r0, 0x18(r1)
    stw r4, 0x40(r29)
    lwz r3, 0x44(r29)
    lwz r0, 0x1c(r1)
    stw r0, 0x44(r29)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x3c(r29)
    stw r0, 0x3c(r29)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x40(r29)
    stw r4, 0x18(r1)
    beq lbl_fn_8022BEAC_00001768
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8022BEAC_00001768
    stw r4, 0x18(r1)
    bl dtor_80084684
    b lbl_fn_8022BEAC_00001768
lbl_fn_8022BEAC_00001758:
    bge lbl_fn_8022BEAC_00001768
    subf r0, r30, r4
    subf r0, r0, r4
    stw r0, 0x40(r29)
lbl_fn_8022BEAC_00001768:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8022C2A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8022C2A0_000017C4
    beq lbl_fn_8022C2A0_000017B8
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_8022C2A0_000017B8:
    li r0, 0x0
    stw r0, 0x4(r31)
    stw r0, 0x0(r31)
lbl_fn_8022C2A0_000017C4:
    lwz r0, 0x14(r31)
    li r8, 0x0
    stw r8, 0x8(r31)
    cmpwi r0, 0x0
    stw r8, 0xc(r31)
    beq lbl_fn_8022C2A0_00001894
    li r11, 0x0
    li r10, 0x0
    lis r7, 0x6666
    li r4, 0x1
    b lbl_fn_8022C2A0_00001868
lbl_fn_8022C2A0_000017F0:
    lwz r0, 0x14(r31)
    add r9, r0, r10
    lwz r6, 0x1a8(r9)
    cmpwi r6, 0x0
    beq lbl_fn_8022C2A0_00001844
    lwz r3, 0x38(r31)
    addi r5, r7, 0x6667
    lwz r0, 0x2c(r31)
    subf r3, r3, r6
    lwz r6, 0x3c(r31)
    mulhw r3, r5, r3
    srawi r3, r3, 3
    srwi r5, r3, 31
    add r3, r3, r5
    divwu r0, r3, r0
    rlwinm r5, r0, 29, 3, 29
    clrlwi r0, r0, 27
    lwzx r3, r6, r5
    slw r0, r4, r0
    andc r0, r3, r0
    stwx r0, r6, r5
lbl_fn_8022C2A0_00001844:
    stw r8, 0x1a8(r9)
    addi r11, r11, 0x1
    stw r8, 0x1b4(r9)
    stw r8, 0x1b0(r9)
    stw r8, 0x1ac(r9)
    lwz r0, 0x14(r31)
    add r3, r0, r10
    addi r10, r10, 0x1b8
    stw r8, 0x8(r3)
lbl_fn_8022C2A0_00001868:
    lwz r0, 0x10(r31)
    cmpw r11, r0
    blt lbl_fn_8022C2A0_000017F0
    lwz r3, 0x14(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8022C2A0_00001888
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8022C2A0_00001888:
    li r0, 0x0
    stw r0, 0x14(r31)
    stw r0, 0x10(r31)
lbl_fn_8022C2A0_00001894:
    lwz r3, 0x24(r31)
    li r30, 0x0
    stw r30, 0x18(r31)
    cmpwi r3, 0x0
    stw r30, 0x1c(r31)
    beq lbl_fn_8022C2A0_000018C0
    lis r4, fn_802381D8@ha
    addi r4, r4, fn_802381D8@l
    bl fn_80695A50
    stw r30, 0x24(r31)
    stw r30, 0x20(r31)
lbl_fn_8022C2A0_000018C0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8022C3F0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x40
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    bl _savegpr_23
    lis r4, lbl_80742F68@ha
    li r28, 0x0
    stw r28, 0x4c(r3)
    mr r24, r3
    lwz r27, 0xc(r3)
    lis r30, 0x4330
    stw r28, 0x50(r3)
    lis r29, 0x6666
    lfd f31, lbl_80742F68@l(r4)
    li r31, 0x1
    stw r28, 0x58(r3)
    lfs f30, lbl_808830D0
    stw r28, 0x5c(r3)
    stw r28, 0x60(r3)
    stw r28, 0x64(r3)
    b lbl_fn_8022C3F0_00001D50
lbl_fn_8022C3F0_0000193C:
    lbz r0, 0x1b(r27)
    lwz r26, 0x4(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8022C3F0_00001A0C
    lwz r5, 0xc4(r27)
    b lbl_fn_8022C3F0_000019D8
lbl_fn_8022C3F0_00001954:
    lwz r6, 0x1a8(r5)
    lwz r25, 0x4(r5)
    cmpwi r6, 0x0
    beq lbl_fn_8022C3F0_000019A4
    lwz r3, 0x38(r24)
    addi r4, r29, 0x6667
    lwz r0, 0x2c(r24)
    subf r3, r3, r6
    lwz r6, 0x3c(r24)
    mulhw r3, r4, r3
    srawi r3, r3, 3
    srwi r4, r3, 31
    add r3, r3, r4
    divwu r0, r3, r0
    rlwinm r4, r0, 29, 3, 29
    clrlwi r0, r0, 27
    lwzx r3, r6, r4
    slw r0, r31, r0
    andc r0, r3, r0
    stwx r0, r6, r4
lbl_fn_8022C3F0_000019A4:
    stw r28, 0x1a8(r5)
    addi r3, r27, 0xc4
    addi r4, r24, 0x18
    stw r28, 0x1b4(r5)
    stw r28, 0x1b0(r5)
    stw r28, 0x1ac(r5)
    stw r28, 0x8(r5)
    stw r28, 0x190(r5)
    bl fn_80237C88
    lwz r3, 0x50(r24)
    mr r5, r25
    addi r0, r3, 0x1
    stw r0, 0x50(r24)
lbl_fn_8022C3F0_000019D8:
    cmpwi r5, 0x0
    bne lbl_fn_8022C3F0_00001954
    lhz r0, 0x18(r27)
    mr r5, r27
    addi r3, r24, 0xc
    addi r4, r24, 0x8
    rlwinm r0, r0, 0, 17, 30
    sth r0, 0x18(r27)
    bl fn_80237C88
    lwz r3, 0x4c(r24)
    addi r0, r3, 0x1
    stw r0, 0x4c(r24)
    b lbl_fn_8022C3F0_00001D4C
lbl_fn_8022C3F0_00001A0C:
    lwz r5, 0xc4(r27)
    b lbl_fn_8022C3F0_00001CA4
lbl_fn_8022C3F0_00001A14:
    lwz r3, 0x190(r5)
    lwz r25, 0x4(r5)
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8022C3F0_00001AA8
    lwz r6, 0x1a8(r5)
    cmpwi r6, 0x0
    beq lbl_fn_8022C3F0_00001A74
    lwz r3, 0x38(r24)
    addi r4, r29, 0x6667
    lwz r0, 0x2c(r24)
    subf r3, r3, r6
    lwz r6, 0x3c(r24)
    mulhw r3, r4, r3
    srawi r3, r3, 3
    srwi r4, r3, 31
    add r3, r3, r4
    divwu r0, r3, r0
    rlwinm r4, r0, 29, 3, 29
    clrlwi r0, r0, 27
    lwzx r3, r6, r4
    slw r0, r31, r0
    andc r0, r3, r0
    stwx r0, r6, r4
lbl_fn_8022C3F0_00001A74:
    stw r28, 0x1a8(r5)
    addi r3, r27, 0xc4
    addi r4, r24, 0x18
    stw r28, 0x1b4(r5)
    stw r28, 0x1b0(r5)
    stw r28, 0x1ac(r5)
    stw r28, 0x8(r5)
    stw r28, 0x190(r5)
    bl fn_80237C88
    lwz r3, 0x50(r24)
    addi r0, r3, 0x1
    stw r0, 0x50(r24)
    b lbl_fn_8022C3F0_00001CA0
lbl_fn_8022C3F0_00001AA8:
    rlwinm r0, r3, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_8022C3F0_00001BE4
    lwz r3, 0xc0(r27)
    lwz r0, 0x4c(r3)
    rlwinm. r0, r0, 0, 14, 14
    beq lbl_fn_8022C3F0_00001BE4
    lwz r0, lbl_8087DBE4
    cmpwi r0, 0x0
    beq lbl_fn_8022C3F0_00001BE4
    lwz r0, 0x1a8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8022C3F0_00001BB0
    lwz r4, 0x1b4(r5)
    lwz r0, 0x1ac(r5)
    cmplw r0, r4
    bne lbl_fn_8022C3F0_00001B20
    lwz r3, 0x1b0(r5)
    addi r3, r3, 0x1
    divwu r0, r3, r4
    mullw r0, r0, r4
    subf r0, r0, r3
    stw r0, 0x1b0(r5)
    lwz r3, 0x1ac(r5)
    subi r3, r3, 0x1
    neg r0, r3
    or r0, r0, r3
    srawi r0, r0, 31
    and r0, r3, r0
    stw r0, 0x1ac(r5)
lbl_fn_8022C3F0_00001B20:
    lwz r4, 0x1b0(r5)
    lwz r0, 0x1ac(r5)
    lwz r3, 0x1b4(r5)
    add r4, r4, r0
    lwz r6, 0x1a8(r5)
    divwu r0, r4, r3
    lfs f2, 0x19c(r5)
    psq_l f1, 0x194(r5), 0, 0
    mullw r0, r0, r3
    subf r0, r0, r4
    mulli r0, r0, 0x14
    add r3, r6, r0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    lfs f0, 0x1a0(r5)
    stfs f0, 0xc(r3)
    lfs f0, 0x1a4(r5)
    stfs f0, 0x10(r3)
    lwz r3, 0x1ac(r5)
    addi r0, r3, 0x1
    stw r0, 0x1ac(r5)
    b lbl_fn_8022C3F0_00001BB0
lbl_fn_8022C3F0_00001B78:
    lwz r4, 0x1b0(r5)
    lwz r3, 0x1b4(r5)
    addi r4, r4, 0x1
    divwu r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    stw r0, 0x1b0(r5)
    lwz r3, 0x1ac(r5)
    subi r3, r3, 0x1
    neg r0, r3
    or r0, r0, r3
    srawi r0, r0, 31
    and r0, r3, r0
    stw r0, 0x1ac(r5)
lbl_fn_8022C3F0_00001BB0:
    lfs f3, 0xb4(r5)
    lwz r3, 0x1ac(r5)
    fcmpo cr0, f3, f30
    mfcr r0
    extrwi. r0, r0, 1, 1
    bne lbl_fn_8022C3F0_00001BCC
    fmr f3, f30
lbl_fn_8022C3F0_00001BCC:
    stw r3, 0xc(r1)
    stw r30, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f31
    fcmpo cr0, f0, f3
    bgt lbl_fn_8022C3F0_00001B78
lbl_fn_8022C3F0_00001BE4:
    lwz r0, 0x190(r5)
    ori r0, r0, 0x2
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x190(r5)
    lwz r3, 0x50(r24)
    addi r0, r3, 0x1
    stw r0, 0x50(r24)
    lwz r3, 0xc0(r27)
    lwz r0, 0x4c(r3)
    rlwinm. r0, r0, 0, 14, 14
    beq lbl_fn_8022C3F0_00001C64
    lwz r3, 0x58(r24)
    lwz r4, 0x5c(r24)
    addi r0, r3, 0x1
    stw r0, 0x58(r24)
    lwz r3, 0xc0(r27)
    lfs f0, 0x124(r3)
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    cmpwi r0, 0x1
    ble lbl_fn_8022C3F0_00001C48
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    b lbl_fn_8022C3F0_00001C4C
lbl_fn_8022C3F0_00001C48:
    li r3, 0x1
lbl_fn_8022C3F0_00001C4C:
    lwz r0, 0x1ac(r5)
    mullw r0, r3, r0
    slwi r0, r0, 1
    add r0, r4, r0
    stw r0, 0x5c(r24)
    b lbl_fn_8022C3F0_00001CA0
lbl_fn_8022C3F0_00001C64:
    lwz r0, 0x40(r3)
    lwz r3, 0xbc(r27)
    mulli r0, r0, 0x138
    lwz r3, 0xc(r3)
    add r3, r3, r0
    lwz r0, 0x104(r3)
    cmplwi r0, 0x1
    bne lbl_fn_8022C3F0_00001C94
    lwz r3, 0x60(r24)
    addi r0, r3, 0x1
    stw r0, 0x60(r24)
    b lbl_fn_8022C3F0_00001CA0
lbl_fn_8022C3F0_00001C94:
    lwz r3, 0x5c(r24)
    addi r0, r3, 0x4
    stw r0, 0x5c(r24)
lbl_fn_8022C3F0_00001CA0:
    mr r5, r25
lbl_fn_8022C3F0_00001CA4:
    cmpwi r5, 0x0
    bne lbl_fn_8022C3F0_00001A14
    lfs f0, 0xc8(r27)
    stfs f0, 0xcc(r27)
    lhz r0, 0x18(r27)
    ori r0, r0, 0x8000
    andi. r0, r0, 0xbfff
    sth r0, 0x18(r27)
    lwz r3, 0xc0(r27)
    lwz r0, 0x4c(r3)
    rlwinm r3, r0, 0, 2, 3
    subis r0, r3, 0x1000
    cmplwi r0, 0x0
    beq lbl_fn_8022C3F0_00001CF8
    subis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_fn_8022C3F0_00001D08
    subis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_fn_8022C3F0_00001D18
    b lbl_fn_8022C3F0_00001D24
lbl_fn_8022C3F0_00001CF8:
    lwz r0, 0x64(r24)
    ori r0, r0, 0x1
    stw r0, 0x64(r24)
    b lbl_fn_8022C3F0_00001D24
lbl_fn_8022C3F0_00001D08:
    lwz r0, 0x64(r24)
    ori r0, r0, 0x2
    stw r0, 0x64(r24)
    b lbl_fn_8022C3F0_00001D24
lbl_fn_8022C3F0_00001D18:
    lwz r0, 0x64(r24)
    ori r0, r0, 0x4
    stw r0, 0x64(r24)
lbl_fn_8022C3F0_00001D24:
    lhz r0, 0x18(r27)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x8
    bne lbl_fn_8022C3F0_00001D40
    lwz r0, 0x64(r24)
    ori r0, r0, 0x8
    stw r0, 0x64(r24)
lbl_fn_8022C3F0_00001D40:
    lwz r3, 0x4c(r24)
    addi r0, r3, 0x1
    stw r0, 0x4c(r24)
lbl_fn_8022C3F0_00001D4C:
    mr r27, r26
lbl_fn_8022C3F0_00001D50:
    cmpwi r27, 0x0
    bne lbl_fn_8022C3F0_0000193C
    lwz r3, 0x10(r24)
    lwz r4, 0x50(r24)
    subi r3, r3, 0x80
    cmpw r4, r3
    blt lbl_fn_8022C3F0_00001E88
    lwz r26, 0xc(r24)
    li r25, 0x0
    lfs f31, lbl_808830D0
    lis r31, 0x6666
    li r23, 0x1
    li r29, 0x0
    lis r30, 0x5555
    b lbl_fn_8022C3F0_00001E80
lbl_fn_8022C3F0_00001D8C:
    lhz r0, 0x18(r26)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x40
    bne lbl_fn_8022C3F0_00001E70
    lwz r5, 0xc4(r26)
    li r27, 0x0
    b lbl_fn_8022C3F0_00001E68
lbl_fn_8022C3F0_00001DA8:
    lfs f0, 0x14(r5)
    lwz r28, 0x4(r5)
    fcmpu cr0, f31, f0
    beq lbl_fn_8022C3F0_00001E48
    addi r0, r30, 0x5556
    mulhw r3, r0, r27
    srwi r0, r3, 31
    add r0, r3, r0
    mulli r0, r0, 0x3
    subf. r0, r0, r27
    bne lbl_fn_8022C3F0_00001E48
    lwz r6, 0x1a8(r5)
    cmpwi r6, 0x0
    beq lbl_fn_8022C3F0_00001E20
    lwz r3, 0x38(r24)
    addi r4, r31, 0x6667
    lwz r0, 0x2c(r24)
    subf r3, r3, r6
    lwz r6, 0x3c(r24)
    mulhw r3, r4, r3
    srawi r3, r3, 3
    srwi r4, r3, 31
    add r3, r3, r4
    divwu r0, r3, r0
    rlwinm r4, r0, 29, 3, 29
    clrlwi r0, r0, 27
    lwzx r3, r6, r4
    slw r0, r23, r0
    andc r0, r3, r0
    stwx r0, r6, r4
lbl_fn_8022C3F0_00001E20:
    stw r29, 0x1a8(r5)
    addi r3, r26, 0xc4
    addi r4, r24, 0x18
    stw r29, 0x1b4(r5)
    stw r29, 0x1b0(r5)
    stw r29, 0x1ac(r5)
    stw r29, 0x8(r5)
    stw r29, 0x190(r5)
    bl fn_80237C88
    addi r25, r25, 0x1
lbl_fn_8022C3F0_00001E48:
    lwz r4, 0x50(r24)
    mr r5, r28
    lwz r3, 0x10(r24)
    addi r27, r27, 0x1
    subf r0, r25, r4
    subi r3, r3, 0x80
    cmpw r0, r3
    blt lbl_fn_8022C3F0_00001E70
lbl_fn_8022C3F0_00001E68:
    cmpwi r5, 0x0
    bne lbl_fn_8022C3F0_00001DA8
lbl_fn_8022C3F0_00001E70:
    subf r0, r25, r4
    lwz r26, 0x4(r26)
    cmpw r0, r3
    blt lbl_fn_8022C3F0_00001E88
lbl_fn_8022C3F0_00001E80:
    cmpwi r26, 0x0
    bne lbl_fn_8022C3F0_00001D8C
lbl_fn_8022C3F0_00001E88:
    addi r11, r1, 0x40
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    bl _restgpr_23
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
