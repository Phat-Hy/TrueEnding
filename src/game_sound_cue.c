#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_26(void);
extern void _savegpr_22(void);
extern void _savegpr_26(void);
extern void fn_801E4920(void);
extern void fn_80206BE4(void);
extern void fn_80211480(void);
extern void fn_80686AF0(void);

/* External data declarations */

/* Small data declarations */
extern u32 lbl_8087DA90;
extern u32 lbl_8087DA94;
extern u32 lbl_80882AF0;

/* Function declarations */
void fn_801E26B4(void);
void fn_801E26CC(void);
void fn_801E26EC(void);
void fn_801E2708(void);
void fn_801E278C(void);
void fn_801E27A8(void);
void fn_801E2CEC(void);
void fn_801E2D14(void);
void fn_801E2D24(void);
void fn_801E2D30(void);
void fn_801E2D44(void);
void fn_801E2D50(void);
void fn_801E2D60(void);
void fn_801E2D68(void);
void fn_801E2D78(void);
void fn_801E3B4C(void);

asm void fn_801E26B4(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x0(r4)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_801E26CC(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    lwz r3, 0x0(r4)
    subf r0, r3, r5
    orc r3, r5, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_801E26EC(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    lwz r3, 0x0(r4)
    xor r0, r3, r0
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r3, r0, 31
    blr
}

asm void fn_801E2708(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lwz r10, 0x0(r3)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lwz r9, 0x4(r3)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r8, 0x8(r3)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r3)
    lwz r7, 0xc(r3)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r3)
    lwz r6, 0x10(r3)
    lwz r0, 0x10(r4)
    stw r0, 0x10(r3)
    lwz r5, 0x14(r3)
    lwz r0, 0x14(r4)
    stw r0, 0x14(r3)
    stw r10, 0x8(r1)
    stw r9, 0xc(r1)
    stw r8, 0x10(r1)
    stw r7, 0x14(r1)
    stw r6, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r10, 0x0(r4)
    stw r9, 0x4(r4)
    stw r8, 0x8(r4)
    stw r7, 0xc(r4)
    stw r6, 0x10(r4)
    stw r5, 0x14(r4)
    addi r1, r1, 0x20
    blr
}

asm void fn_801E278C(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    lwz r0, 0x0(r4)
    subf r3, r5, r0
    subf r0, r0, r5
    or r0, r3, r0
    srwi r3, r0, 31
    blr
}

asm void fn_801E27A8(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_26
    lwz r31, 0x0(r3)
    mr r28, r3
    lwz r6, 0x0(r5)
    mr r29, r4
    lwz r0, 0x4(r31)
    mr r30, r5
    lwz r3, 0x4(r6)
    cmpw r3, r0
    bne lbl_fn_801E27A8_0000019C
    lwz r0, 0xc(r6)
    cmpwi r0, 0x0
    blt lbl_fn_801E27A8_00000184
    lwz r4, 0xc(r31)
    cmpwi r4, 0x0
    blt lbl_fn_801E27A8_00000184
    cmpw r0, r4
    bne lbl_fn_801E27A8_0000016C
    lwz r0, 0x14(r6)
    lwz r4, 0x14(r31)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E27A8_00000200
lbl_fn_801E27A8_0000016C:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E27A8_00000200
lbl_fn_801E27A8_00000184:
    cmpwi r0, 0x0
    blt lbl_fn_801E27A8_00000194
    li r0, 0x1
    b lbl_fn_801E27A8_00000200
lbl_fn_801E27A8_00000194:
    li r0, 0x0
    b lbl_fn_801E27A8_00000200
lbl_fn_801E27A8_0000019C:
    lwz r4, 0x0(r31)
    lwz r3, 0x0(r6)
    lfs f1, 0x4(r4)
    lfs f2, 0x4(r3)
    lfs f0, lbl_80882AF0
    fsubs f3, f2, f1
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801E27A8_000001F4
    bl fn_80206BE4
    bl fn_80211480
    mr r27, r3
    lwz r3, 0x0(r31)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r27)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E27A8_00000200
lbl_fn_801E27A8_000001F4:
    fcmpo cr0, f2, f1
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E27A8_00000200:
    lwz r5, 0x0(r29)
    cntlzw r0, r0
    lwz r26, 0x0(r30)
    srwi r31, r0, 5
    lwz r3, 0x4(r5)
    lwz r0, 0x4(r26)
    cmpw r3, r0
    bne lbl_fn_801E27A8_00000290
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801E27A8_00000278
    lwz r4, 0xc(r26)
    cmpwi r4, 0x0
    blt lbl_fn_801E27A8_00000278
    cmpw r0, r4
    bne lbl_fn_801E27A8_00000260
    lwz r0, 0x14(r5)
    lwz r4, 0x14(r26)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E27A8_000002F4
lbl_fn_801E27A8_00000260:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E27A8_000002F4
lbl_fn_801E27A8_00000278:
    cmpwi r0, 0x0
    blt lbl_fn_801E27A8_00000288
    li r0, 0x1
    b lbl_fn_801E27A8_000002F4
lbl_fn_801E27A8_00000288:
    li r0, 0x0
    b lbl_fn_801E27A8_000002F4
lbl_fn_801E27A8_00000290:
    lwz r4, 0x0(r26)
    lwz r3, 0x0(r5)
    lfs f1, 0x4(r4)
    lfs f2, 0x4(r3)
    lfs f0, lbl_80882AF0
    fsubs f3, f2, f1
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801E27A8_000002E8
    bl fn_80206BE4
    bl fn_80211480
    mr r27, r3
    lwz r3, 0x0(r26)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r27)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E27A8_000002F4
lbl_fn_801E27A8_000002E8:
    fcmpo cr0, f2, f1
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E27A8_000002F4:
    cmpwi r31, 0x0
    cntlzw r0, r0
    srwi r0, r0, 5
    beq lbl_fn_801E27A8_0000030C
    cmpwi r0, 0x0
    bne lbl_fn_801E27A8_00000620
lbl_fn_801E27A8_0000030C:
    cmpwi r31, 0x0
    bne lbl_fn_801E27A8_000003A0
    cmpwi r0, 0x0
    bne lbl_fn_801E27A8_000003A0
    lwz r10, 0x0(r28)
    lwz r9, 0x0(r29)
    lwz r8, 0x0(r10)
    lwz r7, 0x4(r10)
    lwz r6, 0x8(r10)
    lwz r5, 0xc(r10)
    lwz r4, 0x10(r10)
    lwz r3, 0x14(r10)
    lwz r0, 0x0(r9)
    stw r0, 0x0(r10)
    lwz r0, 0x4(r9)
    stw r0, 0x4(r10)
    lwz r0, 0x8(r9)
    stw r0, 0x8(r10)
    lwz r0, 0xc(r9)
    stw r0, 0xc(r10)
    lwz r0, 0x10(r9)
    stw r0, 0x10(r10)
    lwz r0, 0x14(r9)
    stw r0, 0x14(r10)
    stw r8, 0x0(r9)
    stw r7, 0x4(r9)
    stw r6, 0x8(r9)
    stw r5, 0xc(r9)
    stw r4, 0x10(r9)
    stw r8, 0x50(r1)
    stw r7, 0x54(r1)
    stw r6, 0x58(r1)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r3, 0x64(r1)
    stw r3, 0x14(r9)
    b lbl_fn_801E27A8_00000620
lbl_fn_801E27A8_000003A0:
    lwz r26, 0x0(r28)
    lwz r5, 0x0(r29)
    lwz r0, 0x4(r26)
    lwz r3, 0x4(r5)
    cmpw r3, r0
    bne lbl_fn_801E27A8_00000428
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801E27A8_00000410
    lwz r4, 0xc(r26)
    cmpwi r4, 0x0
    blt lbl_fn_801E27A8_00000410
    cmpw r0, r4
    bne lbl_fn_801E27A8_000003F8
    lwz r0, 0x14(r5)
    lwz r4, 0x14(r26)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E27A8_0000048C
lbl_fn_801E27A8_000003F8:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E27A8_0000048C
lbl_fn_801E27A8_00000410:
    cmpwi r0, 0x0
    blt lbl_fn_801E27A8_00000420
    li r0, 0x1
    b lbl_fn_801E27A8_0000048C
lbl_fn_801E27A8_00000420:
    li r0, 0x0
    b lbl_fn_801E27A8_0000048C
lbl_fn_801E27A8_00000428:
    lwz r4, 0x0(r26)
    lwz r3, 0x0(r5)
    lfs f1, 0x4(r4)
    lfs f2, 0x4(r3)
    lfs f0, lbl_80882AF0
    fsubs f3, f2, f1
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801E27A8_00000480
    bl fn_80206BE4
    bl fn_80211480
    mr r27, r3
    lwz r3, 0x0(r26)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r27)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E27A8_0000048C
lbl_fn_801E27A8_00000480:
    fcmpo cr0, f2, f1
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E27A8_0000048C:
    cmpwi r0, 0x0
    beq lbl_fn_801E27A8_00000514
    lwz r10, 0x0(r28)
    lwz r9, 0x0(r29)
    lwz r8, 0x0(r10)
    lwz r7, 0x4(r10)
    lwz r6, 0x8(r10)
    lwz r5, 0xc(r10)
    lwz r4, 0x10(r10)
    lwz r3, 0x14(r10)
    lwz r0, 0x0(r9)
    stw r0, 0x0(r10)
    lwz r0, 0x4(r9)
    stw r0, 0x4(r10)
    lwz r0, 0x8(r9)
    stw r0, 0x8(r10)
    lwz r0, 0xc(r9)
    stw r0, 0xc(r10)
    lwz r0, 0x10(r9)
    stw r0, 0x10(r10)
    lwz r0, 0x14(r9)
    stw r0, 0x14(r10)
    stw r8, 0x0(r9)
    stw r7, 0x4(r9)
    stw r6, 0x8(r9)
    stw r5, 0xc(r9)
    stw r4, 0x10(r9)
    stw r8, 0x38(r1)
    stw r7, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r3, 0x4c(r1)
    stw r3, 0x14(r9)
lbl_fn_801E27A8_00000514:
    cmpwi r31, 0x0
    beq lbl_fn_801E27A8_000005A0
    lwz r10, 0x0(r29)
    lwz r9, 0x0(r30)
    lwz r8, 0x0(r10)
    lwz r7, 0x4(r10)
    lwz r6, 0x8(r10)
    lwz r5, 0xc(r10)
    lwz r4, 0x10(r10)
    lwz r3, 0x14(r10)
    lwz r0, 0x0(r9)
    stw r0, 0x0(r10)
    lwz r0, 0x4(r9)
    stw r0, 0x4(r10)
    lwz r0, 0x8(r9)
    stw r0, 0x8(r10)
    lwz r0, 0xc(r9)
    stw r0, 0xc(r10)
    lwz r0, 0x10(r9)
    stw r0, 0x10(r10)
    lwz r0, 0x14(r9)
    stw r0, 0x14(r10)
    stw r8, 0x0(r9)
    stw r7, 0x4(r9)
    stw r6, 0x8(r9)
    stw r5, 0xc(r9)
    stw r4, 0x10(r9)
    stw r8, 0x20(r1)
    stw r7, 0x24(r1)
    stw r6, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r3, 0x34(r1)
    stw r3, 0x14(r9)
    b lbl_fn_801E27A8_00000620
lbl_fn_801E27A8_000005A0:
    lwz r10, 0x0(r28)
    lwz r9, 0x0(r30)
    lwz r8, 0x0(r10)
    lwz r7, 0x4(r10)
    lwz r6, 0x8(r10)
    lwz r5, 0xc(r10)
    lwz r4, 0x10(r10)
    lwz r3, 0x14(r10)
    lwz r0, 0x0(r9)
    stw r0, 0x0(r10)
    lwz r0, 0x4(r9)
    stw r0, 0x4(r10)
    lwz r0, 0x8(r9)
    stw r0, 0x8(r10)
    lwz r0, 0xc(r9)
    stw r0, 0xc(r10)
    lwz r0, 0x10(r9)
    stw r0, 0x10(r10)
    lwz r0, 0x14(r9)
    stw r0, 0x14(r10)
    stw r8, 0x0(r9)
    stw r7, 0x4(r9)
    stw r6, 0x8(r9)
    stw r5, 0xc(r9)
    stw r4, 0x10(r9)
    stw r8, 0x8(r1)
    stw r7, 0xc(r1)
    stw r6, 0x10(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r3, 0x1c(r1)
    stw r3, 0x14(r9)
lbl_fn_801E27A8_00000620:
    addi r11, r1, 0x80
    bl _restgpr_26
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_801E2CEC(void)
{
    nofralloc
    lwz r5, 0x0(r4)
    lis r4, 0x2aab
    lwz r0, 0x0(r3)
    subi r3, r4, 0x5555
    subf r0, r5, r0
    mulhw r0, r3, r0
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r3, r0, r3
    blr
}

asm void fn_801E2D14(void)
{
    nofralloc
    mulli r0, r4, 0x18
    lwz r3, 0x0(r3)
    add r3, r3, r0
    blr
}

asm void fn_801E2D24(void)
{
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    blr
}

asm void fn_801E2D30(void)
{
    nofralloc
    neg r0, r4
    lwz r3, 0x0(r3)
    mulli r0, r0, 0x18
    add r3, r3, r0
    blr
}

asm void fn_801E2D44(void)
{
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    blr
}

asm void fn_801E2D50(void)
{
    nofralloc
    lwz r4, 0x0(r3)
    addi r0, r4, 0x18
    stw r0, 0x0(r3)
    blr
}

asm void fn_801E2D60(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_801E2D68(void)
{
    nofralloc
    lwz r4, 0x0(r3)
    subi r0, r4, 0x18
    stw r0, 0x0(r3)
    blr
}

asm void fn_801E2D78(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xe0
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    bl _savegpr_22
    lis r31, 0x2aab
    lis r6, 0x6666
    lfs f31, lbl_80882AF0
    mr r24, r3
    mr r25, r4
    mr r26, r5
    addi r28, r6, 0x6667
    subi r27, r31, 0x5555
lbl_fn_801E2D78_00000700:
    lwz r30, 0x0(r24)
    lwz r29, 0x0(r25)
    subf r0, r30, r29
    mulhw r0, r27, r0
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r7, r0, r3
    cmpwi r7, 0x1
    ble lbl_fn_801E2D78_00001478
    cmpwi r7, 0x14
    bgt lbl_fn_801E2D78_000008E4
    cmplw r30, r29
    beq lbl_fn_801E2D78_00001478
    subi r28, r29, 0x18
    cmplw r30, r28
    beq lbl_fn_801E2D78_00001478
    lfs f31, lbl_80882AF0
    b lbl_fn_801E2D78_000008D8
lbl_fn_801E2D78_00000748:
    cmplw r30, r29
    mr r25, r30
    beq lbl_fn_801E2D78_00000854
    addi r24, r30, 0x18
    b lbl_fn_801E2D78_0000084C
lbl_fn_801E2D78_0000075C:
    lwz r3, 0x4(r24)
    lwz r0, 0x4(r25)
    cmpw r3, r0
    bne lbl_fn_801E2D78_000007DC
    lwz r0, 0xc(r24)
    cmpwi r0, 0x0
    blt lbl_fn_801E2D78_000007C4
    lwz r4, 0xc(r25)
    cmpwi r4, 0x0
    blt lbl_fn_801E2D78_000007C4
    cmpw r0, r4
    bne lbl_fn_801E2D78_000007AC
    lwz r0, 0x14(r24)
    lwz r4, 0x14(r25)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E2D78_0000083C
lbl_fn_801E2D78_000007AC:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E2D78_0000083C
lbl_fn_801E2D78_000007C4:
    cmpwi r0, 0x0
    blt lbl_fn_801E2D78_000007D4
    li r0, 0x1
    b lbl_fn_801E2D78_0000083C
lbl_fn_801E2D78_000007D4:
    li r0, 0x0
    b lbl_fn_801E2D78_0000083C
lbl_fn_801E2D78_000007DC:
    lwz r4, 0x0(r25)
    lwz r3, 0x0(r24)
    lfs f0, 0x0(r4)
    lfs f1, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E2D78_00000830
    bl fn_80206BE4
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r25)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E2D78_0000083C
lbl_fn_801E2D78_00000830:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E2D78_0000083C:
    cmpwi r0, 0x0
    beq lbl_fn_801E2D78_00000848
    mr r25, r24
lbl_fn_801E2D78_00000848:
    addi r24, r24, 0x18
lbl_fn_801E2D78_0000084C:
    cmplw r24, r29
    bne lbl_fn_801E2D78_0000075C
lbl_fn_801E2D78_00000854:
    cmplw r25, r30
    beq lbl_fn_801E2D78_000008D4
    lwz r8, 0x0(r25)
    lwz r7, 0x4(r25)
    lwz r6, 0x8(r25)
    lwz r5, 0xc(r25)
    lwz r4, 0x10(r25)
    lwz r3, 0x14(r25)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r25)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r25)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r25)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r25)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r25)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r25)
    stw r8, 0x0(r30)
    stw r7, 0x4(r30)
    stw r6, 0x8(r30)
    stw r5, 0xc(r30)
    stw r4, 0x10(r30)
    stw r8, 0xa0(r1)
    stw r7, 0xa4(r1)
    stw r6, 0xa8(r1)
    stw r5, 0xac(r1)
    stw r4, 0xb0(r1)
    stw r3, 0xb4(r1)
    stw r3, 0x14(r30)
lbl_fn_801E2D78_000008D4:
    addi r30, r30, 0x18
lbl_fn_801E2D78_000008D8:
    cmplw r30, r28
    bne lbl_fn_801E2D78_00000748
    b lbl_fn_801E2D78_00001478
lbl_fn_801E2D78_000008E4:
    lwz r4, lbl_8087DA90
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r28, r4
    addi r8, r4, 0x1
    cmpwi r8, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    mulli r0, r0, 0x18
    add r0, r30, r0
    blt lbl_fn_801E2D78_00000924
    li r8, -0x4
lbl_fn_801E2D78_00000924:
    mulhw r4, r28, r8
    addi r3, r8, 0x1
    slwi r5, r7, 2
    stw r3, lbl_8087DA90
    cmpwi r3, 0x5
    lwz r6, 0x0(r24)
    subf r3, r7, r5
    srawi r3, r3, 2
    addze r5, r3
    srawi r3, r4, 1
    srwi r4, r3, 31
    add r3, r3, r4
    mulli r3, r3, 0x5
    subf r3, r3, r8
    add r3, r5, r3
    mulli r3, r3, 0x18
    add r7, r6, r3
    blt lbl_fn_801E2D78_00000974
    li r8, -0x4
    stw r8, lbl_8087DA90
lbl_fn_801E2D78_00000974:
    lwz r5, 0x0(r25)
    mr r6, r26
    addi r3, r1, 0x20
    addi r4, r1, 0x1c
    subi r29, r5, 0x18
    stw r29, 0x18(r1)
    addi r5, r1, 0x18
    stw r7, 0x1c(r1)
    stw r0, 0x20(r1)
    bl fn_801E4920
    lwz r23, 0x0(r24)
    mr r30, r29
    b lbl_fn_801E2D78_000009AC
lbl_fn_801E2D78_000009A8:
    addi r23, r23, 0x18
lbl_fn_801E2D78_000009AC:
    lwz r3, 0x4(r23)
    lwz r0, 0x4(r29)
    cmpw r3, r0
    bne lbl_fn_801E2D78_00000A2C
    lwz r0, 0xc(r23)
    cmpwi r0, 0x0
    blt lbl_fn_801E2D78_00000A14
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801E2D78_00000A14
    cmpw r0, r4
    bne lbl_fn_801E2D78_000009FC
    lwz r0, 0x14(r23)
    lwz r4, 0x14(r29)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E2D78_00000A8C
lbl_fn_801E2D78_000009FC:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E2D78_00000A8C
lbl_fn_801E2D78_00000A14:
    cmpwi r0, 0x0
    blt lbl_fn_801E2D78_00000A24
    li r0, 0x1
    b lbl_fn_801E2D78_00000A8C
lbl_fn_801E2D78_00000A24:
    li r0, 0x0
    b lbl_fn_801E2D78_00000A8C
lbl_fn_801E2D78_00000A2C:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r23)
    lfs f0, 0x0(r4)
    lfs f1, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E2D78_00000A80
    bl fn_80206BE4
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E2D78_00000A8C
lbl_fn_801E2D78_00000A80:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E2D78_00000A8C:
    cmpwi r0, 0x0
    bne lbl_fn_801E2D78_000009A8
lbl_fn_801E2D78_00000A94:
    subi r30, r30, 0x18
    cmplw r23, r30
    beq lbl_fn_801E2D78_00000B88
    lwz r3, 0x4(r30)
    lwz r0, 0x4(r29)
    cmpw r3, r0
    bne lbl_fn_801E2D78_00000B20
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    blt lbl_fn_801E2D78_00000B08
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801E2D78_00000B08
    cmpw r0, r4
    bne lbl_fn_801E2D78_00000AF0
    lwz r0, 0x14(r30)
    lwz r4, 0x14(r29)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E2D78_00000B80
lbl_fn_801E2D78_00000AF0:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E2D78_00000B80
lbl_fn_801E2D78_00000B08:
    cmpwi r0, 0x0
    blt lbl_fn_801E2D78_00000B18
    li r0, 0x1
    b lbl_fn_801E2D78_00000B80
lbl_fn_801E2D78_00000B18:
    li r0, 0x0
    b lbl_fn_801E2D78_00000B80
lbl_fn_801E2D78_00000B20:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r30)
    lfs f0, 0x0(r4)
    lfs f1, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E2D78_00000B74
    bl fn_80206BE4
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E2D78_00000B80
lbl_fn_801E2D78_00000B74:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E2D78_00000B80:
    cmpwi r0, 0x0
    beq lbl_fn_801E2D78_00000A94
lbl_fn_801E2D78_00000B88:
    cmplw r23, r30
    bge lbl_fn_801E2D78_00000E7C
    lwz r8, 0x0(r23)
    lwz r7, 0x4(r23)
    lwz r6, 0x8(r23)
    lwz r5, 0xc(r23)
    lwz r4, 0x10(r23)
    lwz r3, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r8, 0x0(r30)
    stw r7, 0x4(r30)
    stw r6, 0x8(r30)
    stw r5, 0xc(r30)
    stw r4, 0x10(r30)
    stw r8, 0x88(r1)
    stw r7, 0x8c(r1)
    stw r6, 0x90(r1)
    stw r5, 0x94(r1)
    stw r4, 0x98(r1)
    stw r3, 0x9c(r1)
    stw r3, 0x14(r30)
    b lbl_fn_801E2D78_00000C14
lbl_fn_801E2D78_00000C10:
    addi r23, r23, 0x18
lbl_fn_801E2D78_00000C14:
    lwz r3, 0x4(r23)
    lwz r0, 0x4(r29)
    cmpw r3, r0
    bne lbl_fn_801E2D78_00000C94
    lwz r0, 0xc(r23)
    cmpwi r0, 0x0
    blt lbl_fn_801E2D78_00000C7C
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801E2D78_00000C7C
    cmpw r0, r4
    bne lbl_fn_801E2D78_00000C64
    lwz r0, 0x14(r23)
    lwz r4, 0x14(r29)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E2D78_00000CF4
lbl_fn_801E2D78_00000C64:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E2D78_00000CF4
lbl_fn_801E2D78_00000C7C:
    cmpwi r0, 0x0
    blt lbl_fn_801E2D78_00000C8C
    li r0, 0x1
    b lbl_fn_801E2D78_00000CF4
lbl_fn_801E2D78_00000C8C:
    li r0, 0x0
    b lbl_fn_801E2D78_00000CF4
lbl_fn_801E2D78_00000C94:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r23)
    lfs f0, 0x0(r4)
    lfs f1, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E2D78_00000CE8
    bl fn_80206BE4
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E2D78_00000CF4
lbl_fn_801E2D78_00000CE8:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E2D78_00000CF4:
    cmpwi r0, 0x0
    bne lbl_fn_801E2D78_00000C10
lbl_fn_801E2D78_00000CFC:
    subi r30, r30, 0x18
    lwz r0, 0x4(r29)
    lwz r3, 0x4(r30)
    cmpw r3, r0
    bne lbl_fn_801E2D78_00000D80
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    blt lbl_fn_801E2D78_00000D68
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801E2D78_00000D68
    cmpw r0, r4
    bne lbl_fn_801E2D78_00000D50
    lwz r0, 0x14(r30)
    lwz r4, 0x14(r29)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E2D78_00000DE0
lbl_fn_801E2D78_00000D50:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E2D78_00000DE0
lbl_fn_801E2D78_00000D68:
    cmpwi r0, 0x0
    blt lbl_fn_801E2D78_00000D78
    li r0, 0x1
    b lbl_fn_801E2D78_00000DE0
lbl_fn_801E2D78_00000D78:
    li r0, 0x0
    b lbl_fn_801E2D78_00000DE0
lbl_fn_801E2D78_00000D80:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r30)
    lfs f0, 0x0(r4)
    lfs f1, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E2D78_00000DD4
    bl fn_80206BE4
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E2D78_00000DE0
lbl_fn_801E2D78_00000DD4:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E2D78_00000DE0:
    cmpwi r0, 0x0
    beq lbl_fn_801E2D78_00000CFC
    xor r0, r30, r23
    cntlzw r0, r0
    slw r0, r30, r0
    srwi. r0, r0, 31
    beq lbl_fn_801E2D78_00000E7C
    lwz r8, 0x0(r23)
    lwz r7, 0x4(r23)
    lwz r6, 0x8(r23)
    lwz r5, 0xc(r23)
    lwz r4, 0x10(r23)
    lwz r3, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r8, 0x0(r30)
    stw r7, 0x4(r30)
    stw r6, 0x8(r30)
    stw r5, 0xc(r30)
    stw r4, 0x10(r30)
    stw r8, 0x70(r1)
    stw r7, 0x74(r1)
    stw r6, 0x78(r1)
    stw r5, 0x7c(r1)
    stw r4, 0x80(r1)
    stw r3, 0x84(r1)
    stw r3, 0x14(r30)
    b lbl_fn_801E2D78_00000C14
lbl_fn_801E2D78_00000E7C:
    lwz r6, 0x0(r24)
    cmplw r23, r6
    bne lbl_fn_801E2D78_00001400
    lwz r9, 0x0(r23)
    lwz r8, 0x4(r23)
    lwz r7, 0x8(r23)
    lwz r6, 0xc(r23)
    lwz r5, 0x10(r23)
    lwz r4, 0x14(r23)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r29)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r29)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r29)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r29)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r29)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r9, 0x0(r29)
    stw r8, 0x4(r29)
    stw r7, 0x8(r29)
    stw r6, 0xc(r29)
    stw r5, 0x10(r29)
    stw r4, 0x14(r29)
    lwz r3, 0x0(r25)
    lwz r10, 0x0(r24)
    subi r30, r3, 0x18
    stw r9, 0x58(r1)
    lwz r3, 0x4(r10)
    lwz r0, 0x4(r30)
    stw r8, 0x5c(r1)
    cmpw r3, r0
    stw r7, 0x60(r1)
    stw r6, 0x64(r1)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    bne lbl_fn_801E2D78_00000F90
    lwz r0, 0xc(r10)
    cmpwi r0, 0x0
    blt lbl_fn_801E2D78_00000F78
    lwz r4, 0xc(r30)
    cmpwi r4, 0x0
    blt lbl_fn_801E2D78_00000F78
    cmpw r0, r4
    bne lbl_fn_801E2D78_00000F60
    lwz r0, 0x14(r10)
    lwz r4, 0x14(r30)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E2D78_00000FF0
lbl_fn_801E2D78_00000F60:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E2D78_00000FF0
lbl_fn_801E2D78_00000F78:
    cmpwi r0, 0x0
    blt lbl_fn_801E2D78_00000F88
    li r0, 0x1
    b lbl_fn_801E2D78_00000FF0
lbl_fn_801E2D78_00000F88:
    li r0, 0x0
    b lbl_fn_801E2D78_00000FF0
lbl_fn_801E2D78_00000F90:
    lwz r4, 0x0(r30)
    lwz r3, 0x0(r10)
    lfs f0, 0x0(r4)
    lfs f1, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E2D78_00000FE4
    bl fn_80206BE4
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r30)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E2D78_00000FF0
lbl_fn_801E2D78_00000FE4:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E2D78_00000FF0:
    cmpwi r0, 0x0
    bne lbl_fn_801E2D78_00001178
    b lbl_fn_801E2D78_00001000
lbl_fn_801E2D78_00000FFC:
    addi r23, r23, 0x18
lbl_fn_801E2D78_00001000:
    lwz r0, 0x0(r25)
    cmplw r23, r0
    beq lbl_fn_801E2D78_000010F8
    lwz r4, 0x0(r24)
    lwz r0, 0x4(r23)
    lwz r3, 0x4(r4)
    cmpw r3, r0
    bne lbl_fn_801E2D78_00001090
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    blt lbl_fn_801E2D78_00001078
    lwz r5, 0xc(r23)
    cmpwi r5, 0x0
    blt lbl_fn_801E2D78_00001078
    cmpw r0, r5
    bne lbl_fn_801E2D78_00001060
    lwz r0, 0x14(r4)
    lwz r4, 0x14(r23)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E2D78_000010F0
lbl_fn_801E2D78_00001060:
    xor r0, r5, r0
    srawi r3, r0, 1
    and r0, r0, r5
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E2D78_000010F0
lbl_fn_801E2D78_00001078:
    cmpwi r0, 0x0
    blt lbl_fn_801E2D78_00001088
    li r0, 0x1
    b lbl_fn_801E2D78_000010F0
lbl_fn_801E2D78_00001088:
    li r0, 0x0
    b lbl_fn_801E2D78_000010F0
lbl_fn_801E2D78_00001090:
    lwz r5, 0x0(r23)
    lwz r3, 0x0(r4)
    lfs f0, 0x0(r5)
    lfs f1, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E2D78_000010E4
    bl fn_80206BE4
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r23)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E2D78_000010F0
lbl_fn_801E2D78_000010E4:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E2D78_000010F0:
    cmpwi r0, 0x0
    beq lbl_fn_801E2D78_00000FFC
lbl_fn_801E2D78_000010F8:
    cmplw r23, r30
    bge lbl_fn_801E2D78_00001178
    lwz r8, 0x0(r23)
    lwz r7, 0x4(r23)
    lwz r6, 0x8(r23)
    lwz r5, 0xc(r23)
    lwz r4, 0x10(r23)
    lwz r3, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    stw r8, 0x0(r30)
    stw r7, 0x4(r30)
    stw r6, 0x8(r30)
    stw r5, 0xc(r30)
    stw r4, 0x10(r30)
    stw r8, 0x40(r1)
    stw r7, 0x44(r1)
    stw r6, 0x48(r1)
    stw r5, 0x4c(r1)
    stw r4, 0x50(r1)
    stw r3, 0x54(r1)
    stw r3, 0x14(r30)
lbl_fn_801E2D78_00001178:
    cmplw r23, r30
    bge lbl_fn_801E2D78_000013F8
    b lbl_fn_801E2D78_00001188
lbl_fn_801E2D78_00001184:
    addi r23, r23, 0x18
lbl_fn_801E2D78_00001188:
    lwz r4, 0x0(r24)
    lwz r0, 0x4(r23)
    lwz r3, 0x4(r4)
    cmpw r3, r0
    bne lbl_fn_801E2D78_0000120C
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    blt lbl_fn_801E2D78_000011F4
    lwz r5, 0xc(r23)
    cmpwi r5, 0x0
    blt lbl_fn_801E2D78_000011F4
    cmpw r0, r5
    bne lbl_fn_801E2D78_000011DC
    lwz r0, 0x14(r4)
    lwz r4, 0x14(r23)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E2D78_0000126C
lbl_fn_801E2D78_000011DC:
    xor r0, r5, r0
    srawi r3, r0, 1
    and r0, r0, r5
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E2D78_0000126C
lbl_fn_801E2D78_000011F4:
    cmpwi r0, 0x0
    blt lbl_fn_801E2D78_00001204
    li r0, 0x1
    b lbl_fn_801E2D78_0000126C
lbl_fn_801E2D78_00001204:
    li r0, 0x0
    b lbl_fn_801E2D78_0000126C
lbl_fn_801E2D78_0000120C:
    lwz r5, 0x0(r23)
    lwz r3, 0x0(r4)
    lfs f0, 0x0(r5)
    lfs f1, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E2D78_00001260
    bl fn_80206BE4
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r23)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E2D78_0000126C
lbl_fn_801E2D78_00001260:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E2D78_0000126C:
    cmpwi r0, 0x0
    beq lbl_fn_801E2D78_00001184
lbl_fn_801E2D78_00001274:
    lwz r4, 0x0(r24)
    subi r30, r30, 0x18
    lwz r0, 0x4(r30)
    lwz r3, 0x4(r4)
    cmpw r3, r0
    bne lbl_fn_801E2D78_000012FC
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    blt lbl_fn_801E2D78_000012E4
    lwz r5, 0xc(r30)
    cmpwi r5, 0x0
    blt lbl_fn_801E2D78_000012E4
    cmpw r0, r5
    bne lbl_fn_801E2D78_000012CC
    lwz r0, 0x14(r4)
    lwz r4, 0x14(r30)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E2D78_0000135C
lbl_fn_801E2D78_000012CC:
    xor r0, r5, r0
    srawi r3, r0, 1
    and r0, r0, r5
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E2D78_0000135C
lbl_fn_801E2D78_000012E4:
    cmpwi r0, 0x0
    blt lbl_fn_801E2D78_000012F4
    li r0, 0x1
    b lbl_fn_801E2D78_0000135C
lbl_fn_801E2D78_000012F4:
    li r0, 0x0
    b lbl_fn_801E2D78_0000135C
lbl_fn_801E2D78_000012FC:
    lwz r5, 0x0(r30)
    lwz r3, 0x0(r4)
    lfs f0, 0x0(r5)
    lfs f1, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E2D78_00001350
    bl fn_80206BE4
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r30)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E2D78_0000135C
lbl_fn_801E2D78_00001350:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E2D78_0000135C:
    cmpwi r0, 0x0
    bne lbl_fn_801E2D78_00001274
    xor r0, r30, r23
    cntlzw r0, r0
    slw r0, r30, r0
    srwi. r0, r0, 31
    beq lbl_fn_801E2D78_000013F8
    lwz r8, 0x0(r23)
    lwz r7, 0x4(r23)
    lwz r6, 0x8(r23)
    lwz r5, 0xc(r23)
    lwz r4, 0x10(r23)
    lwz r3, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r8, 0x0(r30)
    stw r7, 0x4(r30)
    stw r6, 0x8(r30)
    stw r5, 0xc(r30)
    stw r4, 0x10(r30)
    stw r8, 0x28(r1)
    stw r7, 0x2c(r1)
    stw r6, 0x30(r1)
    stw r5, 0x34(r1)
    stw r4, 0x38(r1)
    stw r3, 0x3c(r1)
    stw r3, 0x14(r30)
    b lbl_fn_801E2D78_00001188
lbl_fn_801E2D78_000013F8:
    stw r23, 0x0(r24)
    b lbl_fn_801E2D78_00000700
lbl_fn_801E2D78_00001400:
    lwz r3, 0x0(r25)
    subf r0, r6, r23
    subi r5, r31, 0x5555
    mulhw r4, r5, r0
    subf r0, r23, r3
    mulhw r0, r5, r0
    srawi r4, r4, 2
    srwi r5, r4, 31
    srawi r0, r0, 2
    add r5, r4, r5
    srwi r4, r0, 31
    add r0, r0, r4
    cmpw r5, r0
    bge lbl_fn_801E2D78_00001458
    stw r23, 0x10(r1)
    mr r5, r26
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    stw r6, 0x14(r1)
    bl fn_801E3B4C
    stw r23, 0x0(r24)
    b lbl_fn_801E2D78_00000700
lbl_fn_801E2D78_00001458:
    stw r3, 0x8(r1)
    mr r5, r26
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    stw r23, 0xc(r1)
    bl fn_801E3B4C
    stw r23, 0x0(r25)
    b lbl_fn_801E2D78_00000700
lbl_fn_801E2D78_00001478:
    addi r11, r1, 0xe0
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    bl _restgpr_22
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_801E3B4C(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xe0
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    bl _savegpr_22
    lis r31, 0x2aab
    lis r6, 0x6666
    lfs f31, lbl_80882AF0
    mr r24, r3
    mr r25, r4
    mr r26, r5
    addi r28, r6, 0x6667
    subi r27, r31, 0x5555
lbl_fn_801E3B4C_000014D4:
    lwz r30, 0x0(r24)
    lwz r29, 0x0(r25)
    subf r0, r30, r29
    mulhw r0, r27, r0
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r7, r0, r3
    cmpwi r7, 0x1
    ble lbl_fn_801E3B4C_0000224C
    cmpwi r7, 0x14
    bgt lbl_fn_801E3B4C_000016B8
    cmplw r30, r29
    beq lbl_fn_801E3B4C_0000224C
    subi r28, r29, 0x18
    cmplw r30, r28
    beq lbl_fn_801E3B4C_0000224C
    lfs f31, lbl_80882AF0
    b lbl_fn_801E3B4C_000016AC
lbl_fn_801E3B4C_0000151C:
    cmplw r30, r29
    mr r25, r30
    beq lbl_fn_801E3B4C_00001628
    addi r24, r30, 0x18
    b lbl_fn_801E3B4C_00001620
lbl_fn_801E3B4C_00001530:
    lwz r3, 0x4(r24)
    lwz r0, 0x4(r25)
    cmpw r3, r0
    bne lbl_fn_801E3B4C_000015B0
    lwz r0, 0xc(r24)
    cmpwi r0, 0x0
    blt lbl_fn_801E3B4C_00001598
    lwz r4, 0xc(r25)
    cmpwi r4, 0x0
    blt lbl_fn_801E3B4C_00001598
    cmpw r0, r4
    bne lbl_fn_801E3B4C_00001580
    lwz r0, 0x14(r24)
    lwz r4, 0x14(r25)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E3B4C_00001610
lbl_fn_801E3B4C_00001580:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E3B4C_00001610
lbl_fn_801E3B4C_00001598:
    cmpwi r0, 0x0
    blt lbl_fn_801E3B4C_000015A8
    li r0, 0x1
    b lbl_fn_801E3B4C_00001610
lbl_fn_801E3B4C_000015A8:
    li r0, 0x0
    b lbl_fn_801E3B4C_00001610
lbl_fn_801E3B4C_000015B0:
    lwz r4, 0x0(r25)
    lwz r3, 0x0(r24)
    lfs f0, 0x0(r4)
    lfs f1, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E3B4C_00001604
    bl fn_80206BE4
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r25)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E3B4C_00001610
lbl_fn_801E3B4C_00001604:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E3B4C_00001610:
    cmpwi r0, 0x0
    beq lbl_fn_801E3B4C_0000161C
    mr r25, r24
lbl_fn_801E3B4C_0000161C:
    addi r24, r24, 0x18
lbl_fn_801E3B4C_00001620:
    cmplw r24, r29
    bne lbl_fn_801E3B4C_00001530
lbl_fn_801E3B4C_00001628:
    cmplw r25, r30
    beq lbl_fn_801E3B4C_000016A8
    lwz r8, 0x0(r25)
    lwz r7, 0x4(r25)
    lwz r6, 0x8(r25)
    lwz r5, 0xc(r25)
    lwz r4, 0x10(r25)
    lwz r3, 0x14(r25)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r25)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r25)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r25)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r25)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r25)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r25)
    stw r8, 0x0(r30)
    stw r7, 0x4(r30)
    stw r6, 0x8(r30)
    stw r5, 0xc(r30)
    stw r4, 0x10(r30)
    stw r8, 0xa0(r1)
    stw r7, 0xa4(r1)
    stw r6, 0xa8(r1)
    stw r5, 0xac(r1)
    stw r4, 0xb0(r1)
    stw r3, 0xb4(r1)
    stw r3, 0x14(r30)
lbl_fn_801E3B4C_000016A8:
    addi r30, r30, 0x18
lbl_fn_801E3B4C_000016AC:
    cmplw r30, r28
    bne lbl_fn_801E3B4C_0000151C
    b lbl_fn_801E3B4C_0000224C
lbl_fn_801E3B4C_000016B8:
    lwz r4, lbl_8087DA94
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r28, r4
    addi r8, r4, 0x1
    cmpwi r8, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    mulli r0, r0, 0x18
    add r0, r30, r0
    blt lbl_fn_801E3B4C_000016F8
    li r8, -0x4
lbl_fn_801E3B4C_000016F8:
    mulhw r4, r28, r8
    addi r3, r8, 0x1
    slwi r5, r7, 2
    stw r3, lbl_8087DA94
    cmpwi r3, 0x5
    lwz r6, 0x0(r24)
    subf r3, r7, r5
    srawi r3, r3, 2
    addze r5, r3
    srawi r3, r4, 1
    srwi r4, r3, 31
    add r3, r3, r4
    mulli r3, r3, 0x5
    subf r3, r3, r8
    add r3, r5, r3
    mulli r3, r3, 0x18
    add r7, r6, r3
    blt lbl_fn_801E3B4C_00001748
    li r8, -0x4
    stw r8, lbl_8087DA94
lbl_fn_801E3B4C_00001748:
    lwz r5, 0x0(r25)
    mr r6, r26
    addi r3, r1, 0x20
    addi r4, r1, 0x1c
    subi r29, r5, 0x18
    stw r29, 0x18(r1)
    addi r5, r1, 0x18
    stw r7, 0x1c(r1)
    stw r0, 0x20(r1)
    bl fn_801E4920
    lwz r23, 0x0(r24)
    mr r30, r29
    b lbl_fn_801E3B4C_00001780
lbl_fn_801E3B4C_0000177C:
    addi r23, r23, 0x18
lbl_fn_801E3B4C_00001780:
    lwz r3, 0x4(r23)
    lwz r0, 0x4(r29)
    cmpw r3, r0
    bne lbl_fn_801E3B4C_00001800
    lwz r0, 0xc(r23)
    cmpwi r0, 0x0
    blt lbl_fn_801E3B4C_000017E8
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801E3B4C_000017E8
    cmpw r0, r4
    bne lbl_fn_801E3B4C_000017D0
    lwz r0, 0x14(r23)
    lwz r4, 0x14(r29)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E3B4C_00001860
lbl_fn_801E3B4C_000017D0:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E3B4C_00001860
lbl_fn_801E3B4C_000017E8:
    cmpwi r0, 0x0
    blt lbl_fn_801E3B4C_000017F8
    li r0, 0x1
    b lbl_fn_801E3B4C_00001860
lbl_fn_801E3B4C_000017F8:
    li r0, 0x0
    b lbl_fn_801E3B4C_00001860
lbl_fn_801E3B4C_00001800:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r23)
    lfs f0, 0x0(r4)
    lfs f1, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E3B4C_00001854
    bl fn_80206BE4
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E3B4C_00001860
lbl_fn_801E3B4C_00001854:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E3B4C_00001860:
    cmpwi r0, 0x0
    bne lbl_fn_801E3B4C_0000177C
lbl_fn_801E3B4C_00001868:
    subi r30, r30, 0x18
    cmplw r23, r30
    beq lbl_fn_801E3B4C_0000195C
    lwz r3, 0x4(r30)
    lwz r0, 0x4(r29)
    cmpw r3, r0
    bne lbl_fn_801E3B4C_000018F4
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    blt lbl_fn_801E3B4C_000018DC
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801E3B4C_000018DC
    cmpw r0, r4
    bne lbl_fn_801E3B4C_000018C4
    lwz r0, 0x14(r30)
    lwz r4, 0x14(r29)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E3B4C_00001954
lbl_fn_801E3B4C_000018C4:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E3B4C_00001954
lbl_fn_801E3B4C_000018DC:
    cmpwi r0, 0x0
    blt lbl_fn_801E3B4C_000018EC
    li r0, 0x1
    b lbl_fn_801E3B4C_00001954
lbl_fn_801E3B4C_000018EC:
    li r0, 0x0
    b lbl_fn_801E3B4C_00001954
lbl_fn_801E3B4C_000018F4:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r30)
    lfs f0, 0x0(r4)
    lfs f1, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E3B4C_00001948
    bl fn_80206BE4
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E3B4C_00001954
lbl_fn_801E3B4C_00001948:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E3B4C_00001954:
    cmpwi r0, 0x0
    beq lbl_fn_801E3B4C_00001868
lbl_fn_801E3B4C_0000195C:
    cmplw r23, r30
    bge lbl_fn_801E3B4C_00001C50
    lwz r8, 0x0(r23)
    lwz r7, 0x4(r23)
    lwz r6, 0x8(r23)
    lwz r5, 0xc(r23)
    lwz r4, 0x10(r23)
    lwz r3, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r8, 0x0(r30)
    stw r7, 0x4(r30)
    stw r6, 0x8(r30)
    stw r5, 0xc(r30)
    stw r4, 0x10(r30)
    stw r8, 0x88(r1)
    stw r7, 0x8c(r1)
    stw r6, 0x90(r1)
    stw r5, 0x94(r1)
    stw r4, 0x98(r1)
    stw r3, 0x9c(r1)
    stw r3, 0x14(r30)
    b lbl_fn_801E3B4C_000019E8
lbl_fn_801E3B4C_000019E4:
    addi r23, r23, 0x18
lbl_fn_801E3B4C_000019E8:
    lwz r3, 0x4(r23)
    lwz r0, 0x4(r29)
    cmpw r3, r0
    bne lbl_fn_801E3B4C_00001A68
    lwz r0, 0xc(r23)
    cmpwi r0, 0x0
    blt lbl_fn_801E3B4C_00001A50
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801E3B4C_00001A50
    cmpw r0, r4
    bne lbl_fn_801E3B4C_00001A38
    lwz r0, 0x14(r23)
    lwz r4, 0x14(r29)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E3B4C_00001AC8
lbl_fn_801E3B4C_00001A38:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E3B4C_00001AC8
lbl_fn_801E3B4C_00001A50:
    cmpwi r0, 0x0
    blt lbl_fn_801E3B4C_00001A60
    li r0, 0x1
    b lbl_fn_801E3B4C_00001AC8
lbl_fn_801E3B4C_00001A60:
    li r0, 0x0
    b lbl_fn_801E3B4C_00001AC8
lbl_fn_801E3B4C_00001A68:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r23)
    lfs f0, 0x0(r4)
    lfs f1, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E3B4C_00001ABC
    bl fn_80206BE4
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E3B4C_00001AC8
lbl_fn_801E3B4C_00001ABC:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E3B4C_00001AC8:
    cmpwi r0, 0x0
    bne lbl_fn_801E3B4C_000019E4
lbl_fn_801E3B4C_00001AD0:
    subi r30, r30, 0x18
    lwz r0, 0x4(r29)
    lwz r3, 0x4(r30)
    cmpw r3, r0
    bne lbl_fn_801E3B4C_00001B54
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    blt lbl_fn_801E3B4C_00001B3C
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801E3B4C_00001B3C
    cmpw r0, r4
    bne lbl_fn_801E3B4C_00001B24
    lwz r0, 0x14(r30)
    lwz r4, 0x14(r29)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E3B4C_00001BB4
lbl_fn_801E3B4C_00001B24:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E3B4C_00001BB4
lbl_fn_801E3B4C_00001B3C:
    cmpwi r0, 0x0
    blt lbl_fn_801E3B4C_00001B4C
    li r0, 0x1
    b lbl_fn_801E3B4C_00001BB4
lbl_fn_801E3B4C_00001B4C:
    li r0, 0x0
    b lbl_fn_801E3B4C_00001BB4
lbl_fn_801E3B4C_00001B54:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r30)
    lfs f0, 0x0(r4)
    lfs f1, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E3B4C_00001BA8
    bl fn_80206BE4
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E3B4C_00001BB4
lbl_fn_801E3B4C_00001BA8:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E3B4C_00001BB4:
    cmpwi r0, 0x0
    beq lbl_fn_801E3B4C_00001AD0
    xor r0, r30, r23
    cntlzw r0, r0
    slw r0, r30, r0
    srwi. r0, r0, 31
    beq lbl_fn_801E3B4C_00001C50
    lwz r8, 0x0(r23)
    lwz r7, 0x4(r23)
    lwz r6, 0x8(r23)
    lwz r5, 0xc(r23)
    lwz r4, 0x10(r23)
    lwz r3, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r8, 0x0(r30)
    stw r7, 0x4(r30)
    stw r6, 0x8(r30)
    stw r5, 0xc(r30)
    stw r4, 0x10(r30)
    stw r8, 0x70(r1)
    stw r7, 0x74(r1)
    stw r6, 0x78(r1)
    stw r5, 0x7c(r1)
    stw r4, 0x80(r1)
    stw r3, 0x84(r1)
    stw r3, 0x14(r30)
    b lbl_fn_801E3B4C_000019E8
lbl_fn_801E3B4C_00001C50:
    lwz r6, 0x0(r24)
    cmplw r23, r6
    bne lbl_fn_801E3B4C_000021D4
    lwz r9, 0x0(r23)
    lwz r8, 0x4(r23)
    lwz r7, 0x8(r23)
    lwz r6, 0xc(r23)
    lwz r5, 0x10(r23)
    lwz r4, 0x14(r23)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r29)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r29)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r29)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r29)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r29)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r9, 0x0(r29)
    stw r8, 0x4(r29)
    stw r7, 0x8(r29)
    stw r6, 0xc(r29)
    stw r5, 0x10(r29)
    stw r4, 0x14(r29)
    lwz r3, 0x0(r25)
    lwz r10, 0x0(r24)
    subi r30, r3, 0x18
    stw r9, 0x58(r1)
    lwz r3, 0x4(r10)
    lwz r0, 0x4(r30)
    stw r8, 0x5c(r1)
    cmpw r3, r0
    stw r7, 0x60(r1)
    stw r6, 0x64(r1)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    bne lbl_fn_801E3B4C_00001D64
    lwz r0, 0xc(r10)
    cmpwi r0, 0x0
    blt lbl_fn_801E3B4C_00001D4C
    lwz r4, 0xc(r30)
    cmpwi r4, 0x0
    blt lbl_fn_801E3B4C_00001D4C
    cmpw r0, r4
    bne lbl_fn_801E3B4C_00001D34
    lwz r0, 0x14(r10)
    lwz r4, 0x14(r30)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E3B4C_00001DC4
lbl_fn_801E3B4C_00001D34:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E3B4C_00001DC4
lbl_fn_801E3B4C_00001D4C:
    cmpwi r0, 0x0
    blt lbl_fn_801E3B4C_00001D5C
    li r0, 0x1
    b lbl_fn_801E3B4C_00001DC4
lbl_fn_801E3B4C_00001D5C:
    li r0, 0x0
    b lbl_fn_801E3B4C_00001DC4
lbl_fn_801E3B4C_00001D64:
    lwz r4, 0x0(r30)
    lwz r3, 0x0(r10)
    lfs f0, 0x0(r4)
    lfs f1, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E3B4C_00001DB8
    bl fn_80206BE4
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r30)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E3B4C_00001DC4
lbl_fn_801E3B4C_00001DB8:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E3B4C_00001DC4:
    cmpwi r0, 0x0
    bne lbl_fn_801E3B4C_00001F4C
    b lbl_fn_801E3B4C_00001DD4
lbl_fn_801E3B4C_00001DD0:
    addi r23, r23, 0x18
lbl_fn_801E3B4C_00001DD4:
    lwz r0, 0x0(r25)
    cmplw r23, r0
    beq lbl_fn_801E3B4C_00001ECC
    lwz r4, 0x0(r24)
    lwz r0, 0x4(r23)
    lwz r3, 0x4(r4)
    cmpw r3, r0
    bne lbl_fn_801E3B4C_00001E64
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    blt lbl_fn_801E3B4C_00001E4C
    lwz r5, 0xc(r23)
    cmpwi r5, 0x0
    blt lbl_fn_801E3B4C_00001E4C
    cmpw r0, r5
    bne lbl_fn_801E3B4C_00001E34
    lwz r0, 0x14(r4)
    lwz r4, 0x14(r23)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E3B4C_00001EC4
lbl_fn_801E3B4C_00001E34:
    xor r0, r5, r0
    srawi r3, r0, 1
    and r0, r0, r5
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E3B4C_00001EC4
lbl_fn_801E3B4C_00001E4C:
    cmpwi r0, 0x0
    blt lbl_fn_801E3B4C_00001E5C
    li r0, 0x1
    b lbl_fn_801E3B4C_00001EC4
lbl_fn_801E3B4C_00001E5C:
    li r0, 0x0
    b lbl_fn_801E3B4C_00001EC4
lbl_fn_801E3B4C_00001E64:
    lwz r5, 0x0(r23)
    lwz r3, 0x0(r4)
    lfs f0, 0x0(r5)
    lfs f1, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E3B4C_00001EB8
    bl fn_80206BE4
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r23)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E3B4C_00001EC4
lbl_fn_801E3B4C_00001EB8:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E3B4C_00001EC4:
    cmpwi r0, 0x0
    beq lbl_fn_801E3B4C_00001DD0
lbl_fn_801E3B4C_00001ECC:
    cmplw r23, r30
    bge lbl_fn_801E3B4C_00001F4C
    lwz r8, 0x0(r23)
    lwz r7, 0x4(r23)
    lwz r6, 0x8(r23)
    lwz r5, 0xc(r23)
    lwz r4, 0x10(r23)
    lwz r3, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    stw r8, 0x0(r30)
    stw r7, 0x4(r30)
    stw r6, 0x8(r30)
    stw r5, 0xc(r30)
    stw r4, 0x10(r30)
    stw r8, 0x40(r1)
    stw r7, 0x44(r1)
    stw r6, 0x48(r1)
    stw r5, 0x4c(r1)
    stw r4, 0x50(r1)
    stw r3, 0x54(r1)
    stw r3, 0x14(r30)
lbl_fn_801E3B4C_00001F4C:
    cmplw r23, r30
    bge lbl_fn_801E3B4C_000021CC
    b lbl_fn_801E3B4C_00001F5C
lbl_fn_801E3B4C_00001F58:
    addi r23, r23, 0x18
lbl_fn_801E3B4C_00001F5C:
    lwz r4, 0x0(r24)
    lwz r0, 0x4(r23)
    lwz r3, 0x4(r4)
    cmpw r3, r0
    bne lbl_fn_801E3B4C_00001FE0
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    blt lbl_fn_801E3B4C_00001FC8
    lwz r5, 0xc(r23)
    cmpwi r5, 0x0
    blt lbl_fn_801E3B4C_00001FC8
    cmpw r0, r5
    bne lbl_fn_801E3B4C_00001FB0
    lwz r0, 0x14(r4)
    lwz r4, 0x14(r23)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E3B4C_00002040
lbl_fn_801E3B4C_00001FB0:
    xor r0, r5, r0
    srawi r3, r0, 1
    and r0, r0, r5
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E3B4C_00002040
lbl_fn_801E3B4C_00001FC8:
    cmpwi r0, 0x0
    blt lbl_fn_801E3B4C_00001FD8
    li r0, 0x1
    b lbl_fn_801E3B4C_00002040
lbl_fn_801E3B4C_00001FD8:
    li r0, 0x0
    b lbl_fn_801E3B4C_00002040
lbl_fn_801E3B4C_00001FE0:
    lwz r5, 0x0(r23)
    lwz r3, 0x0(r4)
    lfs f0, 0x0(r5)
    lfs f1, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E3B4C_00002034
    bl fn_80206BE4
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r23)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E3B4C_00002040
lbl_fn_801E3B4C_00002034:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E3B4C_00002040:
    cmpwi r0, 0x0
    beq lbl_fn_801E3B4C_00001F58
lbl_fn_801E3B4C_00002048:
    lwz r4, 0x0(r24)
    subi r30, r30, 0x18
    lwz r0, 0x4(r30)
    lwz r3, 0x4(r4)
    cmpw r3, r0
    bne lbl_fn_801E3B4C_000020D0
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    blt lbl_fn_801E3B4C_000020B8
    lwz r5, 0xc(r30)
    cmpwi r5, 0x0
    blt lbl_fn_801E3B4C_000020B8
    cmpw r0, r5
    bne lbl_fn_801E3B4C_000020A0
    lwz r0, 0x14(r4)
    lwz r4, 0x14(r30)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E3B4C_00002130
lbl_fn_801E3B4C_000020A0:
    xor r0, r5, r0
    srawi r3, r0, 1
    and r0, r0, r5
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E3B4C_00002130
lbl_fn_801E3B4C_000020B8:
    cmpwi r0, 0x0
    blt lbl_fn_801E3B4C_000020C8
    li r0, 0x1
    b lbl_fn_801E3B4C_00002130
lbl_fn_801E3B4C_000020C8:
    li r0, 0x0
    b lbl_fn_801E3B4C_00002130
lbl_fn_801E3B4C_000020D0:
    lwz r5, 0x0(r30)
    lwz r3, 0x0(r4)
    lfs f0, 0x0(r5)
    lfs f1, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E3B4C_00002124
    bl fn_80206BE4
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r30)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E3B4C_00002130
lbl_fn_801E3B4C_00002124:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E3B4C_00002130:
    cmpwi r0, 0x0
    bne lbl_fn_801E3B4C_00002048
    xor r0, r30, r23
    cntlzw r0, r0
    slw r0, r30, r0
    srwi. r0, r0, 31
    beq lbl_fn_801E3B4C_000021CC
    lwz r8, 0x0(r23)
    lwz r7, 0x4(r23)
    lwz r6, 0x8(r23)
    lwz r5, 0xc(r23)
    lwz r4, 0x10(r23)
    lwz r3, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r8, 0x0(r30)
    stw r7, 0x4(r30)
    stw r6, 0x8(r30)
    stw r5, 0xc(r30)
    stw r4, 0x10(r30)
    stw r8, 0x28(r1)
    stw r7, 0x2c(r1)
    stw r6, 0x30(r1)
    stw r5, 0x34(r1)
    stw r4, 0x38(r1)
    stw r3, 0x3c(r1)
    stw r3, 0x14(r30)
    b lbl_fn_801E3B4C_00001F5C
lbl_fn_801E3B4C_000021CC:
    stw r23, 0x0(r24)
    b lbl_fn_801E3B4C_000014D4
lbl_fn_801E3B4C_000021D4:
    lwz r3, 0x0(r25)
    subf r0, r6, r23
    subi r5, r31, 0x5555
    mulhw r4, r5, r0
    subf r0, r23, r3
    mulhw r0, r5, r0
    srawi r4, r4, 2
    srwi r5, r4, 31
    srawi r0, r0, 2
    add r5, r4, r5
    srwi r4, r0, 31
    add r0, r0, r4
    cmpw r5, r0
    bge lbl_fn_801E3B4C_0000222C
    stw r23, 0x10(r1)
    mr r5, r26
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    stw r6, 0x14(r1)
    bl fn_801E3B4C
    stw r23, 0x0(r24)
    b lbl_fn_801E3B4C_000014D4
lbl_fn_801E3B4C_0000222C:
    stw r3, 0x8(r1)
    mr r5, r26
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    stw r23, 0xc(r1)
    bl fn_801E3B4C
    stw r23, 0x0(r25)
    b lbl_fn_801E3B4C_000014D4
lbl_fn_801E3B4C_0000224C:
    addi r11, r1, 0xe0
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    bl _restgpr_22
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}
