#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_800D2398(void);
extern void fn_800D56C4(void);

/* External data declarations */

/* Small data declarations */
extern u32 lbl_8087EFF0;

/* Function declarations */
void fn_800D26A4(void);
void fn_800D2860(void);
void fn_800D2868(void);
void fn_800D2AD8(void);
void fn_800D2C50(void);
void fn_800D2D7C(void);
void fn_800D32B8(void);
void fn_800D37B8(void);
void fn_800D3B74(void);

asm void fn_800D26A4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r30, 0x18(r3)
    cmpwi r30, 0x0
    beq lbl_fn_800D26A4_0000019C
    lis r29, 0xdead
lbl_fn_800D26A4_0000002C:
    lwz r4, 0x38(r30)
    andis. r3, r4, 0xdead
    addis r0, r3, 0x2153
    cmplwi r0, 0x0
    beq lbl_fn_800D26A4_00000188
    rlwinm. r0, r4, 0, 29, 29
    bne lbl_fn_800D26A4_00000188
    rlwinm. r0, r4, 0, 30, 30
    bne lbl_fn_800D26A4_0000007C
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_800D26A4_00000078
    lwz r0, 0x38(r30)
    ori r0, r0, 0x2
    stw r0, 0x38(r30)
lbl_fn_800D26A4_00000078:
    lwz r4, 0x38(r30)
lbl_fn_800D26A4_0000007C:
    addi r0, r29, 0x4
    and. r0, r4, r0
    bne lbl_fn_800D26A4_00000188
    lwz r31, 0x18(r30)
    cmpwi r31, 0x0
    beq lbl_fn_800D26A4_00000188
lbl_fn_800D26A4_00000094:
    lwz r4, 0x38(r31)
    andis. r3, r4, 0xdead
    addis r0, r3, 0x2153
    cmplwi r0, 0x0
    beq lbl_fn_800D26A4_00000174
    rlwinm. r0, r4, 0, 29, 29
    bne lbl_fn_800D26A4_00000174
    rlwinm. r0, r4, 0, 30, 30
    bne lbl_fn_800D26A4_000000E4
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_800D26A4_000000E0
    lwz r0, 0x38(r31)
    ori r0, r0, 0x2
    stw r0, 0x38(r31)
lbl_fn_800D26A4_000000E0:
    lwz r4, 0x38(r31)
lbl_fn_800D26A4_000000E4:
    addi r0, r29, 0x4
    and. r0, r4, r0
    bne lbl_fn_800D26A4_00000174
    lwz r28, 0x18(r31)
    cmpwi r28, 0x0
    beq lbl_fn_800D26A4_00000174
lbl_fn_800D26A4_000000FC:
    lwz r4, 0x38(r28)
    andis. r3, r4, 0xdead
    addis r0, r3, 0x2153
    cmplwi r0, 0x0
    beq lbl_fn_800D26A4_00000160
    rlwinm. r0, r4, 0, 29, 29
    bne lbl_fn_800D26A4_00000160
    rlwinm. r0, r4, 0, 30, 30
    bne lbl_fn_800D26A4_0000014C
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_800D26A4_00000148
    lwz r0, 0x38(r28)
    ori r0, r0, 0x2
    stw r0, 0x38(r28)
lbl_fn_800D26A4_00000148:
    lwz r4, 0x38(r28)
lbl_fn_800D26A4_0000014C:
    addi r0, r29, 0x4
    and. r0, r4, r0
    bne lbl_fn_800D26A4_00000160
    mr r3, r28
    bl fn_800D26A4
lbl_fn_800D26A4_00000160:
    cmpwi r28, 0x0
    beq lbl_fn_800D26A4_0000016C
    lwz r28, 0x1c(r28)
lbl_fn_800D26A4_0000016C:
    cmpwi r28, 0x0
    bne lbl_fn_800D26A4_000000FC
lbl_fn_800D26A4_00000174:
    cmpwi r31, 0x0
    beq lbl_fn_800D26A4_00000180
    lwz r31, 0x1c(r31)
lbl_fn_800D26A4_00000180:
    cmpwi r31, 0x0
    bne lbl_fn_800D26A4_00000094
lbl_fn_800D26A4_00000188:
    cmpwi r30, 0x0
    beq lbl_fn_800D26A4_00000194
    lwz r30, 0x1c(r30)
lbl_fn_800D26A4_00000194:
    cmpwi r30, 0x0
    bne lbl_fn_800D26A4_0000002C
lbl_fn_800D26A4_0000019C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800D2860(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_800D2868(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    lwz r29, 0x18(r3)
    cmpwi r29, 0x0
    beq lbl_fn_800D2868_00000420
    lis r28, 0xdead
lbl_fn_800D2868_000001E4:
    lwz r4, 0x38(r29)
    andis. r3, r4, 0xdead
    addis r0, r3, 0x2153
    cmplwi r0, 0x0
    beq lbl_fn_800D2868_0000040C
    rlwinm. r0, r4, 0, 29, 29
    bne lbl_fn_800D2868_0000040C
    rlwinm. r0, r4, 0, 30, 30
    bne lbl_fn_800D2868_00000234
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_800D2868_00000230
    lwz r0, 0x38(r29)
    ori r0, r0, 0x2
    stw r0, 0x38(r29)
lbl_fn_800D2868_00000230:
    lwz r4, 0x38(r29)
lbl_fn_800D2868_00000234:
    addi r0, r28, 0x7
    and r0, r4, r0
    cmplwi r0, 0x2
    bne lbl_fn_800D2868_00000264
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r0, 0x38(r29)
    ori r0, r0, 0x20
    stw r0, 0x38(r29)
lbl_fn_800D2868_00000264:
    lwz r3, 0x38(r29)
    addi r0, r28, 0x4
    and. r0, r3, r0
    bne lbl_fn_800D2868_0000040C
    lwz r0, 0x38(r29)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_800D2868_00000290
    mr r3, r29
    bl fn_800D2868
    b lbl_fn_800D2868_0000040C
lbl_fn_800D2868_00000290:
    lwz r31, 0x18(r29)
    cmpwi r31, 0x0
    beq lbl_fn_800D2868_0000040C
lbl_fn_800D2868_0000029C:
    lwz r4, 0x38(r31)
    andis. r3, r4, 0xdead
    addis r0, r3, 0x2153
    cmplwi r0, 0x0
    beq lbl_fn_800D2868_000003F8
    rlwinm. r0, r4, 0, 29, 29
    bne lbl_fn_800D2868_000003F8
    rlwinm. r0, r4, 0, 30, 30
    bne lbl_fn_800D2868_000002EC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_800D2868_000002E8
    lwz r0, 0x38(r31)
    ori r0, r0, 0x2
    stw r0, 0x38(r31)
lbl_fn_800D2868_000002E8:
    lwz r4, 0x38(r31)
lbl_fn_800D2868_000002EC:
    addi r0, r28, 0x4
    and. r0, r4, r0
    bne lbl_fn_800D2868_000003F8
    lwz r30, 0x18(r31)
    cmpwi r30, 0x0
    beq lbl_fn_800D2868_000003F8
lbl_fn_800D2868_00000304:
    lwz r4, 0x38(r30)
    andis. r3, r4, 0xdead
    addis r0, r3, 0x2153
    cmplwi r0, 0x0
    beq lbl_fn_800D2868_000003E4
    rlwinm. r0, r4, 0, 29, 29
    bne lbl_fn_800D2868_000003E4
    rlwinm. r0, r4, 0, 30, 30
    bne lbl_fn_800D2868_00000354
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_800D2868_00000350
    lwz r0, 0x38(r30)
    ori r0, r0, 0x2
    stw r0, 0x38(r30)
lbl_fn_800D2868_00000350:
    lwz r4, 0x38(r30)
lbl_fn_800D2868_00000354:
    addi r0, r28, 0x4
    and. r0, r4, r0
    bne lbl_fn_800D2868_000003E4
    lwz r27, 0x18(r30)
    cmpwi r27, 0x0
    beq lbl_fn_800D2868_000003E4
lbl_fn_800D2868_0000036C:
    lwz r4, 0x38(r27)
    andis. r3, r4, 0xdead
    addis r0, r3, 0x2153
    cmplwi r0, 0x0
    beq lbl_fn_800D2868_000003D0
    rlwinm. r0, r4, 0, 29, 29
    bne lbl_fn_800D2868_000003D0
    rlwinm. r0, r4, 0, 30, 30
    bne lbl_fn_800D2868_000003BC
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_800D2868_000003B8
    lwz r0, 0x38(r27)
    ori r0, r0, 0x2
    stw r0, 0x38(r27)
lbl_fn_800D2868_000003B8:
    lwz r4, 0x38(r27)
lbl_fn_800D2868_000003BC:
    addi r0, r28, 0x4
    and. r0, r4, r0
    bne lbl_fn_800D2868_000003D0
    mr r3, r27
    bl fn_800D26A4
lbl_fn_800D2868_000003D0:
    cmpwi r27, 0x0
    beq lbl_fn_800D2868_000003DC
    lwz r27, 0x1c(r27)
lbl_fn_800D2868_000003DC:
    cmpwi r27, 0x0
    bne lbl_fn_800D2868_0000036C
lbl_fn_800D2868_000003E4:
    cmpwi r30, 0x0
    beq lbl_fn_800D2868_000003F0
    lwz r30, 0x1c(r30)
lbl_fn_800D2868_000003F0:
    cmpwi r30, 0x0
    bne lbl_fn_800D2868_00000304
lbl_fn_800D2868_000003F8:
    cmpwi r31, 0x0
    beq lbl_fn_800D2868_00000404
    lwz r31, 0x1c(r31)
lbl_fn_800D2868_00000404:
    cmpwi r31, 0x0
    bne lbl_fn_800D2868_0000029C
lbl_fn_800D2868_0000040C:
    cmpwi r29, 0x0
    beq lbl_fn_800D2868_00000418
    lwz r29, 0x1c(r29)
lbl_fn_800D2868_00000418:
    cmpwi r29, 0x0
    bne lbl_fn_800D2868_000001E4
lbl_fn_800D2868_00000420:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800D2AD8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r25, r3
    beq lbl_fn_800D2AD8_00000454
    bl fn_800D56C4
lbl_fn_800D2AD8_00000454:
    lwz r0, 0x20(r25)
    cmpwi r0, 0x0
    beq lbl_fn_800D2AD8_0000046C
    lwz r0, 0x38(r25)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_fn_800D2AD8_00000598
lbl_fn_800D2AD8_0000046C:
    lwz r4, 0x38(r25)
    andis. r3, r4, 0xdead
    addis r0, r3, 0x2153
    cmplwi r0, 0x0
    beq lbl_fn_800D2AD8_00000598
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_800D2AD8_00000490
    b lbl_fn_800D2AD8_00000598
lbl_fn_800D2AD8_00000490:
    lwz r31, 0x18(r25)
    cmpwi r31, 0x0
    beq lbl_fn_800D2AD8_00000598
    lis r30, 0xdead
    addi r27, r30, 0x4
lbl_fn_800D2AD8_000004A4:
    lwz r3, 0x38(r31)
    and. r0, r3, r27
    bne lbl_fn_800D2AD8_0000058C
    andi. r0, r3, 0x22
    cmplwi r0, 0x22
    bne lbl_fn_800D2AD8_000004D0
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
lbl_fn_800D2AD8_000004D0:
    lwz r0, 0x38(r31)
    addi r28, r30, 0x4
    and. r0, r0, r28
    bne lbl_fn_800D2AD8_0000058C
    lwz r25, 0x18(r31)
    cmpwi r25, 0x0
    beq lbl_fn_800D2AD8_0000058C
lbl_fn_800D2AD8_000004EC:
    lwz r3, 0x38(r25)
    and. r0, r3, r28
    bne lbl_fn_800D2AD8_00000580
    andi. r0, r3, 0x22
    cmplwi r0, 0x22
    bne lbl_fn_800D2AD8_00000518
    lwz r12, 0x0(r25)
    mr r3, r25
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
lbl_fn_800D2AD8_00000518:
    lwz r0, 0x38(r25)
    addi r29, r30, 0x4
    and. r0, r0, r29
    bne lbl_fn_800D2AD8_00000580
    lwz r26, 0x18(r25)
    cmpwi r26, 0x0
    beq lbl_fn_800D2AD8_00000580
lbl_fn_800D2AD8_00000534:
    lwz r3, 0x38(r26)
    and. r0, r3, r29
    bne lbl_fn_800D2AD8_00000574
    andi. r0, r3, 0x22
    cmplwi r0, 0x22
    bne lbl_fn_800D2AD8_00000560
    lwz r12, 0x0(r26)
    mr r3, r26
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
lbl_fn_800D2AD8_00000560:
    lwz r0, 0x38(r26)
    and. r0, r0, r29
    bne lbl_fn_800D2AD8_00000574
    mr r3, r26
    bl fn_800D2C50
lbl_fn_800D2AD8_00000574:
    lwz r26, 0x1c(r26)
    cmpwi r26, 0x0
    bne lbl_fn_800D2AD8_00000534
lbl_fn_800D2AD8_00000580:
    lwz r25, 0x1c(r25)
    cmpwi r25, 0x0
    bne lbl_fn_800D2AD8_000004EC
lbl_fn_800D2AD8_0000058C:
    lwz r31, 0x1c(r31)
    cmpwi r31, 0x0
    bne lbl_fn_800D2AD8_000004A4
lbl_fn_800D2AD8_00000598:
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800D2C50(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    lwz r31, 0x18(r3)
    cmpwi r31, 0x0
    beq lbl_fn_800D2C50_000006C4
    lis r30, 0xdead
    addi r27, r30, 0x4
lbl_fn_800D2C50_000005D0:
    lwz r3, 0x38(r31)
    and. r0, r3, r27
    bne lbl_fn_800D2C50_000006B8
    andi. r0, r3, 0x22
    cmplwi r0, 0x22
    bne lbl_fn_800D2C50_000005FC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
lbl_fn_800D2C50_000005FC:
    lwz r0, 0x38(r31)
    addi r28, r30, 0x4
    and. r0, r0, r28
    bne lbl_fn_800D2C50_000006B8
    lwz r25, 0x18(r31)
    cmpwi r25, 0x0
    beq lbl_fn_800D2C50_000006B8
lbl_fn_800D2C50_00000618:
    lwz r3, 0x38(r25)
    and. r0, r3, r28
    bne lbl_fn_800D2C50_000006AC
    andi. r0, r3, 0x22
    cmplwi r0, 0x22
    bne lbl_fn_800D2C50_00000644
    lwz r12, 0x0(r25)
    mr r3, r25
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
lbl_fn_800D2C50_00000644:
    lwz r0, 0x38(r25)
    addi r29, r30, 0x4
    and. r0, r0, r29
    bne lbl_fn_800D2C50_000006AC
    lwz r26, 0x18(r25)
    cmpwi r26, 0x0
    beq lbl_fn_800D2C50_000006AC
lbl_fn_800D2C50_00000660:
    lwz r3, 0x38(r26)
    and. r0, r3, r29
    bne lbl_fn_800D2C50_000006A0
    andi. r0, r3, 0x22
    cmplwi r0, 0x22
    bne lbl_fn_800D2C50_0000068C
    lwz r12, 0x0(r26)
    mr r3, r26
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
lbl_fn_800D2C50_0000068C:
    lwz r0, 0x38(r26)
    and. r0, r0, r29
    bne lbl_fn_800D2C50_000006A0
    mr r3, r26
    bl fn_800D2C50
lbl_fn_800D2C50_000006A0:
    lwz r26, 0x1c(r26)
    cmpwi r26, 0x0
    bne lbl_fn_800D2C50_00000660
lbl_fn_800D2C50_000006AC:
    lwz r25, 0x1c(r25)
    cmpwi r25, 0x0
    bne lbl_fn_800D2C50_00000618
lbl_fn_800D2C50_000006B8:
    lwz r31, 0x1c(r31)
    cmpwi r31, 0x0
    bne lbl_fn_800D2C50_000005D0
lbl_fn_800D2C50_000006C4:
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800D2D7C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r3
    beq lbl_fn_800D2D7C_000006F8
    bl fn_800D56C4
lbl_fn_800D2D7C_000006F8:
    lwz r0, 0x20(r26)
    cmpwi r0, 0x0
    beq lbl_fn_800D2D7C_00000710
    lwz r0, 0x38(r26)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_fn_800D2D7C_00000C00
lbl_fn_800D2D7C_00000710:
    lwz r0, lbl_8087EFF0
    cmpwi r0, 0x0
    beq lbl_fn_800D2D7C_00000BF8
    lwz r31, 0x18(r26)
    cmpwi r31, 0x0
    beq lbl_fn_800D2D7C_00000BF8
    li r29, 0x0
lbl_fn_800D2D7C_0000072C:
    lwz r0, 0x38(r31)
    andis. r3, r0, 0xdead
    addis r0, r3, 0x2153
    cmplwi r0, 0x0
    bne lbl_fn_800D2D7C_00000B7C
    lwz r3, 0x40(r31)
    subic. r0, r3, 0x1
    stw r0, 0x40(r31)
    bgt lbl_fn_800D2D7C_00000BF0
    lwz r30, 0x18(r31)
    cmpwi r30, 0x0
    beq lbl_fn_800D2D7C_00000ACC
    beq lbl_fn_800D2D7C_00000768
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D2D7C_00000768:
    lwz r28, 0x1c(r30)
    cmpwi r28, 0x0
    beq lbl_fn_800D2D7C_000008C8
    beq lbl_fn_800D2D7C_00000780
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D2D7C_00000780:
    lwz r27, 0x1c(r28)
    cmpwi r27, 0x0
    beq lbl_fn_800D2D7C_00000820
    beq lbl_fn_800D2D7C_00000798
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D2D7C_00000798:
    lwz r26, 0x1c(r27)
    cmpwi r26, 0x0
    beq lbl_fn_800D2D7C_000007D8
    beq lbl_fn_800D2D7C_000007B0
    mr r3, r26
    bl fn_800D56C4
lbl_fn_800D2D7C_000007B0:
    lwz r3, 0x1c(r26)
    cmpwi r3, 0x0
    beq lbl_fn_800D2D7C_000007C0
    bl fn_800D3B74
lbl_fn_800D2D7C_000007C0:
    lwz r3, 0x18(r26)
    cmpwi r3, 0x0
    beq lbl_fn_800D2D7C_000007D0
    bl fn_800D3B74
lbl_fn_800D2D7C_000007D0:
    mr r3, r26
    bl fn_800D2398
lbl_fn_800D2D7C_000007D8:
    lwz r26, 0x18(r27)
    cmpwi r26, 0x0
    beq lbl_fn_800D2D7C_00000818
    beq lbl_fn_800D2D7C_000007F0
    mr r3, r26
    bl fn_800D56C4
lbl_fn_800D2D7C_000007F0:
    lwz r3, 0x1c(r26)
    cmpwi r3, 0x0
    beq lbl_fn_800D2D7C_00000800
    bl fn_800D3B74
lbl_fn_800D2D7C_00000800:
    lwz r3, 0x18(r26)
    cmpwi r3, 0x0
    beq lbl_fn_800D2D7C_00000810
    bl fn_800D3B74
lbl_fn_800D2D7C_00000810:
    mr r3, r26
    bl fn_800D2398
lbl_fn_800D2D7C_00000818:
    mr r3, r27
    bl fn_800D2398
lbl_fn_800D2D7C_00000820:
    lwz r26, 0x18(r28)
    cmpwi r26, 0x0
    beq lbl_fn_800D2D7C_000008C0
    beq lbl_fn_800D2D7C_00000838
    mr r3, r26
    bl fn_800D56C4
lbl_fn_800D2D7C_00000838:
    lwz r27, 0x1c(r26)
    cmpwi r27, 0x0
    beq lbl_fn_800D2D7C_00000878
    beq lbl_fn_800D2D7C_00000850
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D2D7C_00000850:
    lwz r3, 0x1c(r27)
    cmpwi r3, 0x0
    beq lbl_fn_800D2D7C_00000860
    bl fn_800D3B74
lbl_fn_800D2D7C_00000860:
    lwz r3, 0x18(r27)
    cmpwi r3, 0x0
    beq lbl_fn_800D2D7C_00000870
    bl fn_800D3B74
lbl_fn_800D2D7C_00000870:
    mr r3, r27
    bl fn_800D2398
lbl_fn_800D2D7C_00000878:
    lwz r27, 0x18(r26)
    cmpwi r27, 0x0
    beq lbl_fn_800D2D7C_000008B8
    beq lbl_fn_800D2D7C_00000890
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D2D7C_00000890:
    lwz r3, 0x1c(r27)
    cmpwi r3, 0x0
    beq lbl_fn_800D2D7C_000008A0
    bl fn_800D3B74
lbl_fn_800D2D7C_000008A0:
    lwz r3, 0x18(r27)
    cmpwi r3, 0x0
    beq lbl_fn_800D2D7C_000008B0
    bl fn_800D3B74
lbl_fn_800D2D7C_000008B0:
    mr r3, r27
    bl fn_800D2398
lbl_fn_800D2D7C_000008B8:
    mr r3, r26
    bl fn_800D2398
lbl_fn_800D2D7C_000008C0:
    mr r3, r28
    bl fn_800D2398
lbl_fn_800D2D7C_000008C8:
    lwz r26, 0x18(r30)
    cmpwi r26, 0x0
    beq lbl_fn_800D2D7C_00000A28
    beq lbl_fn_800D2D7C_000008E0
    mr r3, r26
    bl fn_800D56C4
lbl_fn_800D2D7C_000008E0:
    lwz r27, 0x1c(r26)
    cmpwi r27, 0x0
    beq lbl_fn_800D2D7C_00000980
    beq lbl_fn_800D2D7C_000008F8
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D2D7C_000008F8:
    lwz r28, 0x1c(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D2D7C_00000938
    beq lbl_fn_800D2D7C_00000910
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D2D7C_00000910:
    lwz r3, 0x1c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D2D7C_00000920
    bl fn_800D3B74
lbl_fn_800D2D7C_00000920:
    lwz r3, 0x18(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D2D7C_00000930
    bl fn_800D3B74
lbl_fn_800D2D7C_00000930:
    mr r3, r28
    bl fn_800D2398
lbl_fn_800D2D7C_00000938:
    lwz r28, 0x18(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D2D7C_00000978
    beq lbl_fn_800D2D7C_00000950
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D2D7C_00000950:
    lwz r3, 0x1c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D2D7C_00000960
    bl fn_800D3B74
lbl_fn_800D2D7C_00000960:
    lwz r3, 0x18(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D2D7C_00000970
    bl fn_800D3B74
lbl_fn_800D2D7C_00000970:
    mr r3, r28
    bl fn_800D2398
lbl_fn_800D2D7C_00000978:
    mr r3, r27
    bl fn_800D2398
lbl_fn_800D2D7C_00000980:
    lwz r27, 0x18(r26)
    cmpwi r27, 0x0
    beq lbl_fn_800D2D7C_00000A20
    beq lbl_fn_800D2D7C_00000998
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D2D7C_00000998:
    lwz r28, 0x1c(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D2D7C_000009D8
    beq lbl_fn_800D2D7C_000009B0
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D2D7C_000009B0:
    lwz r3, 0x1c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D2D7C_000009C0
    bl fn_800D3B74
lbl_fn_800D2D7C_000009C0:
    lwz r3, 0x18(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D2D7C_000009D0
    bl fn_800D3B74
lbl_fn_800D2D7C_000009D0:
    mr r3, r28
    bl fn_800D2398
lbl_fn_800D2D7C_000009D8:
    lwz r28, 0x18(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D2D7C_00000A18
    beq lbl_fn_800D2D7C_000009F0
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D2D7C_000009F0:
    lwz r3, 0x1c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D2D7C_00000A00
    bl fn_800D3B74
lbl_fn_800D2D7C_00000A00:
    lwz r3, 0x18(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D2D7C_00000A10
    bl fn_800D3B74
lbl_fn_800D2D7C_00000A10:
    mr r3, r28
    bl fn_800D2398
lbl_fn_800D2D7C_00000A18:
    mr r3, r27
    bl fn_800D2398
lbl_fn_800D2D7C_00000A20:
    mr r3, r26
    bl fn_800D2398
lbl_fn_800D2D7C_00000A28:
    lwz r0, 0x38(r30)
    ori r0, r0, 0x40
    stw r0, 0x38(r30)
    lwz r3, 0x28(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800D2D7C_00000A90
    bl fn_800D56C4
    cmpwi r3, 0x0
    beq lbl_fn_800D2D7C_00000A90
    lwz r3, 0x28(r30)
    lwz r5, 0x30(r30)
    lwz r0, 0x10(r3)
    lwz r6, 0x34(r30)
    lwz r4, 0x14(r3)
    xor r0, r5, r0
    xor r4, r6, r4
    or. r0, r4, r0
    bne lbl_fn_800D2D7C_00000A90
    lwz r12, 0x0(r3)
    mr r4, r30
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    stw r29, 0x28(r30)
    stw r29, 0x34(r30)
    stw r29, 0x30(r30)
lbl_fn_800D2D7C_00000A90:
    lwz r12, 0x44(r30)
    cmpwi r12, 0x0
    bne lbl_fn_800D2D7C_00000AC0
    cmpwi r30, 0x0
    beq lbl_fn_800D2D7C_00000ACC
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_800D2D7C_00000ACC
lbl_fn_800D2D7C_00000AC0:
    mr r3, r30
    mtctr r12
    bctrl
lbl_fn_800D2D7C_00000ACC:
    lwz r0, 0x38(r31)
    lwz r26, 0x1c(r31)
    ori r0, r0, 0x40
    stw r0, 0x38(r31)
    lwz r3, 0x28(r31)
    cmpwi r3, 0x0
    beq lbl_fn_800D2D7C_00000B38
    bl fn_800D56C4
    cmpwi r3, 0x0
    beq lbl_fn_800D2D7C_00000B38
    lwz r3, 0x28(r31)
    lwz r5, 0x30(r31)
    lwz r0, 0x10(r3)
    lwz r6, 0x34(r31)
    lwz r4, 0x14(r3)
    xor r0, r5, r0
    xor r4, r6, r4
    or. r0, r4, r0
    bne lbl_fn_800D2D7C_00000B38
    lwz r12, 0x0(r3)
    mr r4, r31
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    stw r29, 0x28(r31)
    stw r29, 0x34(r31)
    stw r29, 0x30(r31)
lbl_fn_800D2D7C_00000B38:
    lwz r12, 0x44(r31)
    cmpwi r12, 0x0
    bne lbl_fn_800D2D7C_00000B68
    cmpwi r31, 0x0
    beq lbl_fn_800D2D7C_00000B74
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_800D2D7C_00000B74
lbl_fn_800D2D7C_00000B68:
    mr r3, r31
    mtctr r12
    bctrl
lbl_fn_800D2D7C_00000B74:
    mr r31, r26
    b lbl_fn_800D2D7C_00000BF0
lbl_fn_800D2D7C_00000B7C:
    cmpwi r31, 0x0
    beq lbl_fn_800D2D7C_00000BF0
    lwz r26, 0x18(r31)
    cmpwi r26, 0x0
    beq lbl_fn_800D2D7C_00000BEC
lbl_fn_800D2D7C_00000B90:
    lwz r0, 0x38(r26)
    andis. r3, r0, 0xdead
    addis r0, r3, 0x2153
    cmplwi r0, 0x0
    bne lbl_fn_800D2D7C_00000BD0
    lwz r3, 0x40(r26)
    subic. r0, r3, 0x1
    stw r0, 0x40(r26)
    bgt lbl_fn_800D2D7C_00000BE4
    mr r3, r26
    bl fn_800D37B8
    lwz r27, 0x1c(r26)
    mr r3, r26
    bl fn_800D2398
    mr r26, r27
    b lbl_fn_800D2D7C_00000BE4
lbl_fn_800D2D7C_00000BD0:
    cmpwi r26, 0x0
    beq lbl_fn_800D2D7C_00000BE4
    mr r3, r26
    bl fn_800D32B8
    lwz r26, 0x1c(r26)
lbl_fn_800D2D7C_00000BE4:
    cmpwi r26, 0x0
    bne lbl_fn_800D2D7C_00000B90
lbl_fn_800D2D7C_00000BEC:
    lwz r31, 0x1c(r31)
lbl_fn_800D2D7C_00000BF0:
    cmpwi r31, 0x0
    bne lbl_fn_800D2D7C_0000072C
lbl_fn_800D2D7C_00000BF8:
    li r0, 0x0
    stw r0, lbl_8087EFF0
lbl_fn_800D2D7C_00000C00:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800D32B8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    lwz r30, 0x18(r3)
    cmpwi r30, 0x0
    beq lbl_fn_800D32B8_00001100
    li r29, 0x0
lbl_fn_800D32B8_00000C34:
    lwz r0, 0x38(r30)
    andis. r3, r0, 0xdead
    addis r0, r3, 0x2153
    cmplwi r0, 0x0
    bne lbl_fn_800D32B8_00001084
    lwz r3, 0x40(r30)
    subic. r0, r3, 0x1
    stw r0, 0x40(r30)
    bgt lbl_fn_800D32B8_000010F8
    lwz r31, 0x18(r30)
    cmpwi r31, 0x0
    beq lbl_fn_800D32B8_00000FD4
    beq lbl_fn_800D32B8_00000C70
    mr r3, r31
    bl fn_800D56C4
lbl_fn_800D32B8_00000C70:
    lwz r28, 0x1c(r31)
    cmpwi r28, 0x0
    beq lbl_fn_800D32B8_00000DD0
    beq lbl_fn_800D32B8_00000C88
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D32B8_00000C88:
    lwz r27, 0x1c(r28)
    cmpwi r27, 0x0
    beq lbl_fn_800D32B8_00000D28
    beq lbl_fn_800D32B8_00000CA0
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D32B8_00000CA0:
    lwz r26, 0x1c(r27)
    cmpwi r26, 0x0
    beq lbl_fn_800D32B8_00000CE0
    beq lbl_fn_800D32B8_00000CB8
    mr r3, r26
    bl fn_800D56C4
lbl_fn_800D32B8_00000CB8:
    lwz r3, 0x1c(r26)
    cmpwi r3, 0x0
    beq lbl_fn_800D32B8_00000CC8
    bl fn_800D3B74
lbl_fn_800D32B8_00000CC8:
    lwz r3, 0x18(r26)
    cmpwi r3, 0x0
    beq lbl_fn_800D32B8_00000CD8
    bl fn_800D3B74
lbl_fn_800D32B8_00000CD8:
    mr r3, r26
    bl fn_800D2398
lbl_fn_800D32B8_00000CE0:
    lwz r26, 0x18(r27)
    cmpwi r26, 0x0
    beq lbl_fn_800D32B8_00000D20
    beq lbl_fn_800D32B8_00000CF8
    mr r3, r26
    bl fn_800D56C4
lbl_fn_800D32B8_00000CF8:
    lwz r3, 0x1c(r26)
    cmpwi r3, 0x0
    beq lbl_fn_800D32B8_00000D08
    bl fn_800D3B74
lbl_fn_800D32B8_00000D08:
    lwz r3, 0x18(r26)
    cmpwi r3, 0x0
    beq lbl_fn_800D32B8_00000D18
    bl fn_800D3B74
lbl_fn_800D32B8_00000D18:
    mr r3, r26
    bl fn_800D2398
lbl_fn_800D32B8_00000D20:
    mr r3, r27
    bl fn_800D2398
lbl_fn_800D32B8_00000D28:
    lwz r26, 0x18(r28)
    cmpwi r26, 0x0
    beq lbl_fn_800D32B8_00000DC8
    beq lbl_fn_800D32B8_00000D40
    mr r3, r26
    bl fn_800D56C4
lbl_fn_800D32B8_00000D40:
    lwz r27, 0x1c(r26)
    cmpwi r27, 0x0
    beq lbl_fn_800D32B8_00000D80
    beq lbl_fn_800D32B8_00000D58
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D32B8_00000D58:
    lwz r3, 0x1c(r27)
    cmpwi r3, 0x0
    beq lbl_fn_800D32B8_00000D68
    bl fn_800D3B74
lbl_fn_800D32B8_00000D68:
    lwz r3, 0x18(r27)
    cmpwi r3, 0x0
    beq lbl_fn_800D32B8_00000D78
    bl fn_800D3B74
lbl_fn_800D32B8_00000D78:
    mr r3, r27
    bl fn_800D2398
lbl_fn_800D32B8_00000D80:
    lwz r27, 0x18(r26)
    cmpwi r27, 0x0
    beq lbl_fn_800D32B8_00000DC0
    beq lbl_fn_800D32B8_00000D98
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D32B8_00000D98:
    lwz r3, 0x1c(r27)
    cmpwi r3, 0x0
    beq lbl_fn_800D32B8_00000DA8
    bl fn_800D3B74
lbl_fn_800D32B8_00000DA8:
    lwz r3, 0x18(r27)
    cmpwi r3, 0x0
    beq lbl_fn_800D32B8_00000DB8
    bl fn_800D3B74
lbl_fn_800D32B8_00000DB8:
    mr r3, r27
    bl fn_800D2398
lbl_fn_800D32B8_00000DC0:
    mr r3, r26
    bl fn_800D2398
lbl_fn_800D32B8_00000DC8:
    mr r3, r28
    bl fn_800D2398
lbl_fn_800D32B8_00000DD0:
    lwz r26, 0x18(r31)
    cmpwi r26, 0x0
    beq lbl_fn_800D32B8_00000F30
    beq lbl_fn_800D32B8_00000DE8
    mr r3, r26
    bl fn_800D56C4
lbl_fn_800D32B8_00000DE8:
    lwz r27, 0x1c(r26)
    cmpwi r27, 0x0
    beq lbl_fn_800D32B8_00000E88
    beq lbl_fn_800D32B8_00000E00
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D32B8_00000E00:
    lwz r28, 0x1c(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D32B8_00000E40
    beq lbl_fn_800D32B8_00000E18
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D32B8_00000E18:
    lwz r3, 0x1c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D32B8_00000E28
    bl fn_800D3B74
lbl_fn_800D32B8_00000E28:
    lwz r3, 0x18(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D32B8_00000E38
    bl fn_800D3B74
lbl_fn_800D32B8_00000E38:
    mr r3, r28
    bl fn_800D2398
lbl_fn_800D32B8_00000E40:
    lwz r28, 0x18(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D32B8_00000E80
    beq lbl_fn_800D32B8_00000E58
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D32B8_00000E58:
    lwz r3, 0x1c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D32B8_00000E68
    bl fn_800D3B74
lbl_fn_800D32B8_00000E68:
    lwz r3, 0x18(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D32B8_00000E78
    bl fn_800D3B74
lbl_fn_800D32B8_00000E78:
    mr r3, r28
    bl fn_800D2398
lbl_fn_800D32B8_00000E80:
    mr r3, r27
    bl fn_800D2398
lbl_fn_800D32B8_00000E88:
    lwz r27, 0x18(r26)
    cmpwi r27, 0x0
    beq lbl_fn_800D32B8_00000F28
    beq lbl_fn_800D32B8_00000EA0
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D32B8_00000EA0:
    lwz r28, 0x1c(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D32B8_00000EE0
    beq lbl_fn_800D32B8_00000EB8
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D32B8_00000EB8:
    lwz r3, 0x1c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D32B8_00000EC8
    bl fn_800D3B74
lbl_fn_800D32B8_00000EC8:
    lwz r3, 0x18(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D32B8_00000ED8
    bl fn_800D3B74
lbl_fn_800D32B8_00000ED8:
    mr r3, r28
    bl fn_800D2398
lbl_fn_800D32B8_00000EE0:
    lwz r28, 0x18(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D32B8_00000F20
    beq lbl_fn_800D32B8_00000EF8
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D32B8_00000EF8:
    lwz r3, 0x1c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D32B8_00000F08
    bl fn_800D3B74
lbl_fn_800D32B8_00000F08:
    lwz r3, 0x18(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D32B8_00000F18
    bl fn_800D3B74
lbl_fn_800D32B8_00000F18:
    mr r3, r28
    bl fn_800D2398
lbl_fn_800D32B8_00000F20:
    mr r3, r27
    bl fn_800D2398
lbl_fn_800D32B8_00000F28:
    mr r3, r26
    bl fn_800D2398
lbl_fn_800D32B8_00000F30:
    lwz r0, 0x38(r31)
    ori r0, r0, 0x40
    stw r0, 0x38(r31)
    lwz r3, 0x28(r31)
    cmpwi r3, 0x0
    beq lbl_fn_800D32B8_00000F98
    bl fn_800D56C4
    cmpwi r3, 0x0
    beq lbl_fn_800D32B8_00000F98
    lwz r3, 0x28(r31)
    lwz r5, 0x30(r31)
    lwz r0, 0x10(r3)
    lwz r6, 0x34(r31)
    lwz r4, 0x14(r3)
    xor r0, r5, r0
    xor r4, r6, r4
    or. r0, r4, r0
    bne lbl_fn_800D32B8_00000F98
    lwz r12, 0x0(r3)
    mr r4, r31
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    stw r29, 0x28(r31)
    stw r29, 0x34(r31)
    stw r29, 0x30(r31)
lbl_fn_800D32B8_00000F98:
    lwz r12, 0x44(r31)
    cmpwi r12, 0x0
    bne lbl_fn_800D32B8_00000FC8
    cmpwi r31, 0x0
    beq lbl_fn_800D32B8_00000FD4
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_800D32B8_00000FD4
lbl_fn_800D32B8_00000FC8:
    mr r3, r31
    mtctr r12
    bctrl
lbl_fn_800D32B8_00000FD4:
    lwz r0, 0x38(r30)
    lwz r26, 0x1c(r30)
    ori r0, r0, 0x40
    stw r0, 0x38(r30)
    lwz r3, 0x28(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800D32B8_00001040
    bl fn_800D56C4
    cmpwi r3, 0x0
    beq lbl_fn_800D32B8_00001040
    lwz r3, 0x28(r30)
    lwz r5, 0x30(r30)
    lwz r0, 0x10(r3)
    lwz r6, 0x34(r30)
    lwz r4, 0x14(r3)
    xor r0, r5, r0
    xor r4, r6, r4
    or. r0, r4, r0
    bne lbl_fn_800D32B8_00001040
    lwz r12, 0x0(r3)
    mr r4, r30
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    stw r29, 0x28(r30)
    stw r29, 0x34(r30)
    stw r29, 0x30(r30)
lbl_fn_800D32B8_00001040:
    lwz r12, 0x44(r30)
    cmpwi r12, 0x0
    bne lbl_fn_800D32B8_00001070
    cmpwi r30, 0x0
    beq lbl_fn_800D32B8_0000107C
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_800D32B8_0000107C
lbl_fn_800D32B8_00001070:
    mr r3, r30
    mtctr r12
    bctrl
lbl_fn_800D32B8_0000107C:
    mr r30, r26
    b lbl_fn_800D32B8_000010F8
lbl_fn_800D32B8_00001084:
    cmpwi r30, 0x0
    beq lbl_fn_800D32B8_000010F8
    lwz r26, 0x18(r30)
    cmpwi r26, 0x0
    beq lbl_fn_800D32B8_000010F4
lbl_fn_800D32B8_00001098:
    lwz r0, 0x38(r26)
    andis. r3, r0, 0xdead
    addis r0, r3, 0x2153
    cmplwi r0, 0x0
    bne lbl_fn_800D32B8_000010D8
    lwz r3, 0x40(r26)
    subic. r0, r3, 0x1
    stw r0, 0x40(r26)
    bgt lbl_fn_800D32B8_000010EC
    mr r3, r26
    bl fn_800D37B8
    lwz r27, 0x1c(r26)
    mr r3, r26
    bl fn_800D2398
    mr r26, r27
    b lbl_fn_800D32B8_000010EC
lbl_fn_800D32B8_000010D8:
    cmpwi r26, 0x0
    beq lbl_fn_800D32B8_000010EC
    mr r3, r26
    bl fn_800D32B8
    lwz r26, 0x1c(r26)
lbl_fn_800D32B8_000010EC:
    cmpwi r26, 0x0
    bne lbl_fn_800D32B8_00001098
lbl_fn_800D32B8_000010F4:
    lwz r30, 0x1c(r30)
lbl_fn_800D32B8_000010F8:
    cmpwi r30, 0x0
    bne lbl_fn_800D32B8_00000C34
lbl_fn_800D32B8_00001100:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800D37B8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r31, 0x18(r3)
    cmpwi r31, 0x0
    beq lbl_fn_800D37B8_000014B0
    beq lbl_fn_800D37B8_00001148
    mr r3, r31
    bl fn_800D56C4
lbl_fn_800D37B8_00001148:
    lwz r30, 0x1c(r31)
    cmpwi r30, 0x0
    beq lbl_fn_800D37B8_000012A8
    beq lbl_fn_800D37B8_00001160
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D37B8_00001160:
    lwz r29, 0x1c(r30)
    cmpwi r29, 0x0
    beq lbl_fn_800D37B8_00001200
    beq lbl_fn_800D37B8_00001178
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D37B8_00001178:
    lwz r28, 0x1c(r29)
    cmpwi r28, 0x0
    beq lbl_fn_800D37B8_000011B8
    beq lbl_fn_800D37B8_00001190
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D37B8_00001190:
    lwz r3, 0x1c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D37B8_000011A0
    bl fn_800D3B74
lbl_fn_800D37B8_000011A0:
    lwz r3, 0x18(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D37B8_000011B0
    bl fn_800D3B74
lbl_fn_800D37B8_000011B0:
    mr r3, r28
    bl fn_800D2398
lbl_fn_800D37B8_000011B8:
    lwz r28, 0x18(r29)
    cmpwi r28, 0x0
    beq lbl_fn_800D37B8_000011F8
    beq lbl_fn_800D37B8_000011D0
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D37B8_000011D0:
    lwz r3, 0x1c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D37B8_000011E0
    bl fn_800D3B74
lbl_fn_800D37B8_000011E0:
    lwz r3, 0x18(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D37B8_000011F0
    bl fn_800D3B74
lbl_fn_800D37B8_000011F0:
    mr r3, r28
    bl fn_800D2398
lbl_fn_800D37B8_000011F8:
    mr r3, r29
    bl fn_800D2398
lbl_fn_800D37B8_00001200:
    lwz r28, 0x18(r30)
    cmpwi r28, 0x0
    beq lbl_fn_800D37B8_000012A0
    beq lbl_fn_800D37B8_00001218
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D37B8_00001218:
    lwz r29, 0x1c(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D37B8_00001258
    beq lbl_fn_800D37B8_00001230
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D37B8_00001230:
    lwz r3, 0x1c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800D37B8_00001240
    bl fn_800D3B74
lbl_fn_800D37B8_00001240:
    lwz r3, 0x18(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800D37B8_00001250
    bl fn_800D3B74
lbl_fn_800D37B8_00001250:
    mr r3, r29
    bl fn_800D2398
lbl_fn_800D37B8_00001258:
    lwz r29, 0x18(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D37B8_00001298
    beq lbl_fn_800D37B8_00001270
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D37B8_00001270:
    lwz r3, 0x1c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800D37B8_00001280
    bl fn_800D3B74
lbl_fn_800D37B8_00001280:
    lwz r3, 0x18(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800D37B8_00001290
    bl fn_800D3B74
lbl_fn_800D37B8_00001290:
    mr r3, r29
    bl fn_800D2398
lbl_fn_800D37B8_00001298:
    mr r3, r28
    bl fn_800D2398
lbl_fn_800D37B8_000012A0:
    mr r3, r30
    bl fn_800D2398
lbl_fn_800D37B8_000012A8:
    lwz r28, 0x18(r31)
    cmpwi r28, 0x0
    beq lbl_fn_800D37B8_00001408
    beq lbl_fn_800D37B8_000012C0
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D37B8_000012C0:
    lwz r29, 0x1c(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D37B8_00001360
    beq lbl_fn_800D37B8_000012D8
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D37B8_000012D8:
    lwz r30, 0x1c(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D37B8_00001318
    beq lbl_fn_800D37B8_000012F0
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D37B8_000012F0:
    lwz r3, 0x1c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800D37B8_00001300
    bl fn_800D3B74
lbl_fn_800D37B8_00001300:
    lwz r3, 0x18(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800D37B8_00001310
    bl fn_800D3B74
lbl_fn_800D37B8_00001310:
    mr r3, r30
    bl fn_800D2398
lbl_fn_800D37B8_00001318:
    lwz r30, 0x18(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D37B8_00001358
    beq lbl_fn_800D37B8_00001330
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D37B8_00001330:
    lwz r3, 0x1c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800D37B8_00001340
    bl fn_800D3B74
lbl_fn_800D37B8_00001340:
    lwz r3, 0x18(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800D37B8_00001350
    bl fn_800D3B74
lbl_fn_800D37B8_00001350:
    mr r3, r30
    bl fn_800D2398
lbl_fn_800D37B8_00001358:
    mr r3, r29
    bl fn_800D2398
lbl_fn_800D37B8_00001360:
    lwz r29, 0x18(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D37B8_00001400
    beq lbl_fn_800D37B8_00001378
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D37B8_00001378:
    lwz r30, 0x1c(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D37B8_000013B8
    beq lbl_fn_800D37B8_00001390
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D37B8_00001390:
    lwz r3, 0x1c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800D37B8_000013A0
    bl fn_800D3B74
lbl_fn_800D37B8_000013A0:
    lwz r3, 0x18(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800D37B8_000013B0
    bl fn_800D3B74
lbl_fn_800D37B8_000013B0:
    mr r3, r30
    bl fn_800D2398
lbl_fn_800D37B8_000013B8:
    lwz r30, 0x18(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D37B8_000013F8
    beq lbl_fn_800D37B8_000013D0
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D37B8_000013D0:
    lwz r3, 0x1c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800D37B8_000013E0
    bl fn_800D3B74
lbl_fn_800D37B8_000013E0:
    lwz r3, 0x18(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800D37B8_000013F0
    bl fn_800D3B74
lbl_fn_800D37B8_000013F0:
    mr r3, r30
    bl fn_800D2398
lbl_fn_800D37B8_000013F8:
    mr r3, r29
    bl fn_800D2398
lbl_fn_800D37B8_00001400:
    mr r3, r28
    bl fn_800D2398
lbl_fn_800D37B8_00001408:
    lwz r0, 0x38(r31)
    ori r0, r0, 0x40
    stw r0, 0x38(r31)
    lwz r3, 0x28(r31)
    cmpwi r3, 0x0
    beq lbl_fn_800D37B8_00001474
    bl fn_800D56C4
    cmpwi r3, 0x0
    beq lbl_fn_800D37B8_00001474
    lwz r3, 0x28(r31)
    lwz r5, 0x30(r31)
    lwz r0, 0x10(r3)
    lwz r6, 0x34(r31)
    lwz r4, 0x14(r3)
    xor r0, r5, r0
    xor r4, r6, r4
    or. r0, r4, r0
    bne lbl_fn_800D37B8_00001474
    lwz r12, 0x0(r3)
    mr r4, r31
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x28(r31)
    stw r0, 0x34(r31)
    stw r0, 0x30(r31)
lbl_fn_800D37B8_00001474:
    lwz r12, 0x44(r31)
    cmpwi r12, 0x0
    bne lbl_fn_800D37B8_000014A4
    cmpwi r31, 0x0
    beq lbl_fn_800D37B8_000014B0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_800D37B8_000014B0
lbl_fn_800D37B8_000014A4:
    mr r3, r31
    mtctr r12
    bctrl
lbl_fn_800D37B8_000014B0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800D3B74(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    beq lbl_fn_800D3B74_000014FC
    bl fn_800D56C4
lbl_fn_800D3B74_000014FC:
    lwz r30, 0x1c(r31)
    cmpwi r30, 0x0
    beq lbl_fn_800D3B74_0000165C
    beq lbl_fn_800D3B74_00001514
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D3B74_00001514:
    lwz r29, 0x1c(r30)
    cmpwi r29, 0x0
    beq lbl_fn_800D3B74_000015B4
    beq lbl_fn_800D3B74_0000152C
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D3B74_0000152C:
    lwz r28, 0x1c(r29)
    cmpwi r28, 0x0
    beq lbl_fn_800D3B74_0000156C
    beq lbl_fn_800D3B74_00001544
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D3B74_00001544:
    lwz r3, 0x1c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D3B74_00001554
    bl fn_800D3B74
lbl_fn_800D3B74_00001554:
    lwz r3, 0x18(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D3B74_00001564
    bl fn_800D3B74
lbl_fn_800D3B74_00001564:
    mr r3, r28
    bl fn_800D2398
lbl_fn_800D3B74_0000156C:
    lwz r28, 0x18(r29)
    cmpwi r28, 0x0
    beq lbl_fn_800D3B74_000015AC
    beq lbl_fn_800D3B74_00001584
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D3B74_00001584:
    lwz r3, 0x1c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D3B74_00001594
    bl fn_800D3B74
lbl_fn_800D3B74_00001594:
    lwz r3, 0x18(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D3B74_000015A4
    bl fn_800D3B74
lbl_fn_800D3B74_000015A4:
    mr r3, r28
    bl fn_800D2398
lbl_fn_800D3B74_000015AC:
    mr r3, r29
    bl fn_800D2398
lbl_fn_800D3B74_000015B4:
    lwz r28, 0x18(r30)
    cmpwi r28, 0x0
    beq lbl_fn_800D3B74_00001654
    beq lbl_fn_800D3B74_000015CC
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D3B74_000015CC:
    lwz r29, 0x1c(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D3B74_0000160C
    beq lbl_fn_800D3B74_000015E4
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D3B74_000015E4:
    lwz r3, 0x1c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800D3B74_000015F4
    bl fn_800D3B74
lbl_fn_800D3B74_000015F4:
    lwz r3, 0x18(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800D3B74_00001604
    bl fn_800D3B74
lbl_fn_800D3B74_00001604:
    mr r3, r29
    bl fn_800D2398
lbl_fn_800D3B74_0000160C:
    lwz r29, 0x18(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D3B74_0000164C
    beq lbl_fn_800D3B74_00001624
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D3B74_00001624:
    lwz r3, 0x1c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800D3B74_00001634
    bl fn_800D3B74
lbl_fn_800D3B74_00001634:
    lwz r3, 0x18(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800D3B74_00001644
    bl fn_800D3B74
lbl_fn_800D3B74_00001644:
    mr r3, r29
    bl fn_800D2398
lbl_fn_800D3B74_0000164C:
    mr r3, r28
    bl fn_800D2398
lbl_fn_800D3B74_00001654:
    mr r3, r30
    bl fn_800D2398
lbl_fn_800D3B74_0000165C:
    lwz r28, 0x18(r31)
    cmpwi r28, 0x0
    beq lbl_fn_800D3B74_000017BC
    beq lbl_fn_800D3B74_00001674
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D3B74_00001674:
    lwz r29, 0x1c(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D3B74_00001714
    beq lbl_fn_800D3B74_0000168C
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D3B74_0000168C:
    lwz r30, 0x1c(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D3B74_000016CC
    beq lbl_fn_800D3B74_000016A4
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D3B74_000016A4:
    lwz r3, 0x1c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800D3B74_000016B4
    bl fn_800D3B74
lbl_fn_800D3B74_000016B4:
    lwz r3, 0x18(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800D3B74_000016C4
    bl fn_800D3B74
lbl_fn_800D3B74_000016C4:
    mr r3, r30
    bl fn_800D2398
lbl_fn_800D3B74_000016CC:
    lwz r30, 0x18(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D3B74_0000170C
    beq lbl_fn_800D3B74_000016E4
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D3B74_000016E4:
    lwz r3, 0x1c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800D3B74_000016F4
    bl fn_800D3B74
lbl_fn_800D3B74_000016F4:
    lwz r3, 0x18(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800D3B74_00001704
    bl fn_800D3B74
lbl_fn_800D3B74_00001704:
    mr r3, r30
    bl fn_800D2398
lbl_fn_800D3B74_0000170C:
    mr r3, r29
    bl fn_800D2398
lbl_fn_800D3B74_00001714:
    lwz r29, 0x18(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D3B74_000017B4
    beq lbl_fn_800D3B74_0000172C
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D3B74_0000172C:
    lwz r30, 0x1c(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D3B74_0000176C
    beq lbl_fn_800D3B74_00001744
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D3B74_00001744:
    lwz r3, 0x1c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800D3B74_00001754
    bl fn_800D3B74
lbl_fn_800D3B74_00001754:
    lwz r3, 0x18(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800D3B74_00001764
    bl fn_800D3B74
lbl_fn_800D3B74_00001764:
    mr r3, r30
    bl fn_800D2398
lbl_fn_800D3B74_0000176C:
    lwz r30, 0x18(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D3B74_000017AC
    beq lbl_fn_800D3B74_00001784
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D3B74_00001784:
    lwz r3, 0x1c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800D3B74_00001794
    bl fn_800D3B74
lbl_fn_800D3B74_00001794:
    lwz r3, 0x18(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800D3B74_000017A4
    bl fn_800D3B74
lbl_fn_800D3B74_000017A4:
    mr r3, r30
    bl fn_800D2398
lbl_fn_800D3B74_000017AC:
    mr r3, r29
    bl fn_800D2398
lbl_fn_800D3B74_000017B4:
    mr r3, r28
    bl fn_800D2398
lbl_fn_800D3B74_000017BC:
    lwz r3, 0x28(r31)
    lwz r0, 0x38(r31)
    cmpwi r3, 0x0
    ori r0, r0, 0x40
    stw r0, 0x38(r31)
    beq lbl_fn_800D3B74_00001828
    bl fn_800D56C4
    cmpwi r3, 0x0
    beq lbl_fn_800D3B74_00001828
    lwz r3, 0x28(r31)
    lwz r5, 0x30(r31)
    lwz r0, 0x10(r3)
    lwz r6, 0x34(r31)
    lwz r4, 0x14(r3)
    xor r0, r5, r0
    xor r4, r6, r4
    or. r0, r4, r0
    bne lbl_fn_800D3B74_00001828
    lwz r12, 0x0(r3)
    mr r4, r31
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x28(r31)
    stw r0, 0x34(r31)
    stw r0, 0x30(r31)
lbl_fn_800D3B74_00001828:
    lwz r12, 0x44(r31)
    cmpwi r12, 0x0
    bne lbl_fn_800D3B74_00001858
    cmpwi r31, 0x0
    beq lbl_fn_800D3B74_00001864
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_800D3B74_00001864
lbl_fn_800D3B74_00001858:
    mr r3, r31
    mtctr r12
    bctrl
lbl_fn_800D3B74_00001864:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
