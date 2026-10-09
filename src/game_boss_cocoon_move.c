#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_24(void);
extern void _savegpr_24(void);
extern void fn_800BFAC8(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800CFD18(void);
extern void fn_801F6C2C(void);
extern void fn_801F6D7C(void);
extern void fn_801F791C(void);
extern void fn_801F837C(void);
extern void fn_80213E60(void);
extern void fn_80373148(void);
extern void fn_8044E88C(void);
extern void fn_80450590(void);

/* External data declarations */
extern u8 lbl_80754770[];
extern u8 lbl_80754848[];
extern u8 lbl_807548CC[];

/* Small data declarations */
extern u32 lbl_8087E028;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4F8;
extern u32 lbl_8087F610;
extern u32 lbl_80886B30;
extern u32 lbl_80886B34;
extern u32 lbl_80886B38;
extern u32 lbl_80886B3C;
extern u32 lbl_80886B40;
extern u32 lbl_80886B44;
extern u32 lbl_80886B48;
extern u32 lbl_80886B4C;
extern u32 lbl_80886B50;
extern u32 lbl_80886B54;
extern u32 lbl_80886B58;
extern u32 lbl_80886B5C;
extern u32 lbl_80886B60;
extern u32 lbl_80886B64;

/* Function declarations */
void fn_8044EA34(void);
void fn_8044EEC0(void);
void fn_8044F14C(void);
void fn_8044F2D4(void);
void fn_8044F434(void);
void fn_8044F96C(void);

asm void fn_8044EA34(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    lwz r0, 0xec(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8044EA34_00000474
    lwz r0, 0x0(r3)
    li r6, 0x5
    li r5, 0x0
    stw r6, 0x4(r3)
    cmpwi r0, 0x0
    stw r5, 0x18(r3)
    bne lbl_fn_8044EA34_000000C4
    lwz r11, lbl_8087F4F8
    lwz r7, 0x48(r11)
    cmpwi r7, 0x0
    bne lbl_fn_8044EA34_00000058
    li r0, 0x0
    b lbl_fn_8044EA34_000000C0
lbl_fn_8044EA34_00000058:
    li r8, 0x0
    li r6, 0x1
    mtctr r7
    cmplwi r7, 0x0
    ble lbl_fn_8044EA34_000000B0
lbl_fn_8044EA34_0000006C:
    lwz r12, 0x4c(r11)
    srwi r10, r8, 3
    clrlwi r0, r8, 29
    lbzx r5, r12, r10
    slw r9, r6, r0
    and r0, r9, r5
    cmpw r9, r0
    beq lbl_fn_8044EA34_000000A8
    clrlwi r0, r9, 24
    or r0, r5, r0
    stbx r0, r12, r10
    mulli r0, r8, 0x84
    lwz r5, 0x50(r11)
    add r0, r5, r0
    b lbl_fn_8044EA34_000000C0
lbl_fn_8044EA34_000000A8:
    addi r8, r8, 0x1
    bdnz lbl_fn_8044EA34_0000006C
lbl_fn_8044EA34_000000B0:
    subi r0, r7, 0x1
    lwz r5, 0x50(r11)
    mulli r0, r0, 0x84
    add r0, r5, r0
lbl_fn_8044EA34_000000C0:
    stw r0, 0x0(r3)
lbl_fn_8044EA34_000000C4:
    lwz r5, 0x0(r3)
    lis r6, 0x4330
    li r0, 0x0
    lis r8, lbl_80754848@ha
    lwz r5, 0x0(r5)
    xoris r7, r0, 0x8000
    lfs f0, lbl_80886B50
    cmpwi r4, 0x0
    stfs f0, 0x50(r5)
    li r0, 0x1
    xoris r5, r0, 0x8000
    lfs f1, lbl_80886B40
    lwz r9, 0x0(r3)
    li r0, 0x2
    stw r7, 0x14(r1)
    xoris r0, r0, 0x8000
    lwz r4, 0x0(r9)
    stw r6, 0x10(r1)
    lfd f4, lbl_80754848@l(r8)
    stfs f1, 0x54(r4)
    lfd f0, 0x10(r1)
    lwz r4, 0x0(r3)
    fsubs f0, f0, f4
    lfs f3, lbl_80886B48
    lfs f2, lbl_80886B44
    lwz r4, 0x18(r4)
    fmadds f0, f3, f0, f2
    stw r5, 0x1c(r1)
    lfs f1, lbl_80886B3C
    stfs f0, 0x50(r4)
    stw r6, 0x18(r1)
    lfd f0, 0x18(r1)
    stfs f1, 0x54(r4)
    fsubs f0, f0, f4
    lwz r4, 0x0(r3)
    stw r0, 0x24(r1)
    fmadds f0, f3, f0, f2
    lwz r4, 0x1c(r4)
    stw r6, 0x20(r1)
    stfs f0, 0x50(r4)
    lfd f0, 0x20(r1)
    stfs f1, 0x54(r4)
    fsubs f0, f0, f4
    lwz r4, 0x0(r3)
    fmadds f0, f3, f0, f2
    lwz r4, 0x20(r4)
    stfs f0, 0x50(r4)
    stfs f1, 0x54(r4)
    bne lbl_fn_8044EA34_00000254
    lwz r4, 0x0(r3)
    lfs f0, lbl_80886B54
    addi r5, r4, 0x24
    addi r6, r5, 0x4
    b lbl_fn_8044EA34_000001B0
lbl_fn_8044EA34_0000019C:
    lwz r4, 0x0(r6)
    cmpwi r4, 0x0
    beq lbl_fn_8044EA34_000001AC
    stfs f0, 0x50(r4)
lbl_fn_8044EA34_000001AC:
    addi r6, r6, 0x4
lbl_fn_8044EA34_000001B0:
    lwz r0, 0x0(r5)
    slwi r0, r0, 2
    add r4, r5, r0
    addi r0, r4, 0x4
    cmplw r6, r0
    bne lbl_fn_8044EA34_0000019C
    lwz r3, 0x0(r3)
    lfs f0, lbl_80886B58
    addi r4, r3, 0x24
    addi r5, r4, 0x4
    b lbl_fn_8044EA34_000001F0
lbl_fn_8044EA34_000001DC:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x0
    beq lbl_fn_8044EA34_000001EC
    stfs f0, 0x54(r3)
lbl_fn_8044EA34_000001EC:
    addi r5, r5, 0x4
lbl_fn_8044EA34_000001F0:
    lwz r0, 0x0(r4)
    slwi r0, r0, 2
    add r3, r4, r0
    addi r0, r3, 0x4
    cmplw r5, r0
    bne lbl_fn_8044EA34_000001DC
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_8044EA34_00000300
    mr r4, r31
    li r5, 0x0
    bl fn_800CFD18
    lis r4, lbl_807548CC@ha
    lfs f1, lbl_80886B40
    addi r4, r4, lbl_807548CC@l
    addi r3, r1, 0x8
    addi r4, r4, 0xd
    addi r5, r31, 0x8
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8044EA34_00000300
lbl_fn_8044EA34_00000254:
    lwz r3, 0x0(r3)
    lwz r30, 0x0(r3)
    mr r3, r30
    bl fn_801F6C2C
    stfs f1, 0x50(r30)
    lfs f0, lbl_80886B50
    lwz r3, 0x0(r31)
    addi r4, r3, 0x24
    addi r5, r4, 0x4
    b lbl_fn_8044EA34_00000290
lbl_fn_8044EA34_0000027C:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x0
    beq lbl_fn_8044EA34_0000028C
    stfs f0, 0x50(r3)
lbl_fn_8044EA34_0000028C:
    addi r5, r5, 0x4
lbl_fn_8044EA34_00000290:
    lwz r0, 0x0(r4)
    slwi r0, r0, 2
    add r3, r4, r0
    addi r0, r3, 0x4
    cmplw r5, r0
    bne lbl_fn_8044EA34_0000027C
    lwz r3, 0x0(r31)
    lfs f0, lbl_80886B58
    addi r4, r3, 0x24
    addi r5, r4, 0x4
    b lbl_fn_8044EA34_000002D0
lbl_fn_8044EA34_000002BC:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x0
    beq lbl_fn_8044EA34_000002CC
    stfs f0, 0x54(r3)
lbl_fn_8044EA34_000002CC:
    addi r5, r5, 0x4
lbl_fn_8044EA34_000002D0:
    lwz r0, 0x0(r4)
    slwi r0, r0, 2
    add r3, r4, r0
    addi r0, r3, 0x4
    cmplw r5, r0
    bne lbl_fn_8044EA34_000002BC
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_8044EA34_00000300
    mr r4, r31
    li r5, 0x0
    bl fn_800CFD18
lbl_fn_8044EA34_00000300:
    mr r3, r31
    bl fn_8044F96C
    lwz r0, 0xec(r31)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_8044EA34_00000474
    lwz r0, 0x0(r31)
    li r3, 0x6
    stw r3, 0x4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8044EA34_000003AC
    lwz r9, lbl_8087F4F8
    lwz r5, 0x48(r9)
    cmpwi r5, 0x0
    bne lbl_fn_8044EA34_00000340
    li r0, 0x0
    b lbl_fn_8044EA34_000003A8
lbl_fn_8044EA34_00000340:
    li r6, 0x0
    li r4, 0x1
    mtctr r5
    cmplwi r5, 0x0
    ble lbl_fn_8044EA34_00000398
lbl_fn_8044EA34_00000354:
    lwz r10, 0x4c(r9)
    srwi r8, r6, 3
    clrlwi r0, r6, 29
    lbzx r3, r10, r8
    slw r7, r4, r0
    and r0, r7, r3
    cmpw r7, r0
    beq lbl_fn_8044EA34_00000390
    clrlwi r0, r7, 24
    or r0, r3, r0
    stbx r0, r10, r8
    mulli r0, r6, 0x84
    lwz r3, 0x50(r9)
    add r0, r3, r0
    b lbl_fn_8044EA34_000003A8
lbl_fn_8044EA34_00000390:
    addi r6, r6, 0x1
    bdnz lbl_fn_8044EA34_00000354
lbl_fn_8044EA34_00000398:
    subi r0, r5, 0x1
    lwz r3, 0x50(r9)
    mulli r0, r0, 0x84
    add r0, r3, r0
lbl_fn_8044EA34_000003A8:
    stw r0, 0x0(r31)
lbl_fn_8044EA34_000003AC:
    lwz r0, 0xec(r31)
    srwi. r0, r0, 31
    beq lbl_fn_8044EA34_000003E4
    lwz r3, 0x0(r31)
    lfs f0, lbl_80886B5C
    lwz r3, 0x0(r3)
    lfs f1, 0x50(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_8044EA34_000003E4
    stfs f0, 0x50(r3)
    lfs f0, lbl_80886B40
    lwz r3, 0x0(r31)
    lwz r3, 0x0(r3)
    stfs f0, 0x54(r3)
lbl_fn_8044EA34_000003E4:
    lwz r3, 0x0(r31)
    lfs f0, lbl_80886B50
    addi r5, r3, 0x24
    addi r4, r5, 0x4
    b lbl_fn_8044EA34_0000040C
lbl_fn_8044EA34_000003F8:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8044EA34_00000408
    stfs f0, 0x50(r3)
lbl_fn_8044EA34_00000408:
    addi r4, r4, 0x4
lbl_fn_8044EA34_0000040C:
    lwz r0, 0x0(r5)
    slwi r0, r0, 2
    add r3, r5, r0
    addi r0, r3, 0x4
    cmplw r4, r0
    bne lbl_fn_8044EA34_000003F8
    lwz r3, 0x0(r31)
    lfs f0, lbl_80886B40
    addi r5, r3, 0x24
    addi r4, r5, 0x4
    b lbl_fn_8044EA34_0000044C
lbl_fn_8044EA34_00000438:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8044EA34_00000448
    stfs f0, 0x54(r3)
lbl_fn_8044EA34_00000448:
    addi r4, r4, 0x4
lbl_fn_8044EA34_0000044C:
    lwz r0, 0x0(r5)
    slwi r0, r0, 2
    add r3, r5, r0
    addi r0, r3, 0x4
    cmplw r4, r0
    bne lbl_fn_8044EA34_00000438
    mr r3, r31
    bl fn_80450590
    mr r3, r31
    bl fn_8044F96C
lbl_fn_8044EA34_00000474:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8044EEC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r4, 0x4(r3)
    stw r0, 0x24(r1)
    cmpwi r4, 0x1
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bne lbl_fn_8044EEC0_000004BC
    li r3, 0x1
    b lbl_fn_8044EEC0_000006FC
lbl_fn_8044EEC0_000004BC:
    cmpwi r4, 0x5
    li r0, 0x0
    beq lbl_fn_8044EEC0_000004D0
    cmpwi r4, 0x6
    bne lbl_fn_8044EEC0_000004D4
lbl_fn_8044EEC0_000004D0:
    li r0, 0x1
lbl_fn_8044EEC0_000004D4:
    cmpwi r0, 0x0
    beq lbl_fn_8044EEC0_000006F8
    lwz r3, 0x20(r3)
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8044EEC0_000004F0
    li r3, 0x0
    b lbl_fn_8044EEC0_00000564
lbl_fn_8044EEC0_000004F0:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x12d
    bne lbl_fn_8044EEC0_00000504
    li r3, 0x1
    b lbl_fn_8044EEC0_00000564
lbl_fn_8044EEC0_00000504:
    bne cr1, lbl_fn_8044EEC0_00000510
    li r3, 0x0
    b lbl_fn_8044EEC0_00000564
lbl_fn_8044EEC0_00000510:
    lbz r0, 0xc2(r3)
    extsb. r0, r0
    beq lbl_fn_8044EEC0_00000524
    li r3, 0x1
    b lbl_fn_8044EEC0_00000564
lbl_fn_8044EEC0_00000524:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8044EEC0_00000560
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_8044EEC0_00000560
    lwz r3, lbl_8087F430
    bl fn_80373148
    mr r6, r3
    lwz r3, 0x20(r31)
    lwz r4, 0x48(r6)
    lwz r5, 0x4c(r6)
    lwz r6, 0x50(r6)
    bl fn_80213E60
    b lbl_fn_8044EEC0_00000564
lbl_fn_8044EEC0_00000560:
    li r3, 0x0
lbl_fn_8044EEC0_00000564:
    cmpwi r3, 0x0
    beq lbl_fn_8044EEC0_00000578
    lwz r3, 0x0(r31)
    lwz r30, 0x2c(r3)
    b lbl_fn_8044EEC0_00000580
lbl_fn_8044EEC0_00000578:
    lwz r3, 0x0(r31)
    lwz r30, 0x28(r3)
lbl_fn_8044EEC0_00000580:
    lwz r3, 0x20(r31)
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8044EEC0_00000594
    li r3, 0x0
    b lbl_fn_8044EEC0_00000608
lbl_fn_8044EEC0_00000594:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x12d
    bne lbl_fn_8044EEC0_000005A8
    li r3, 0x1
    b lbl_fn_8044EEC0_00000608
lbl_fn_8044EEC0_000005A8:
    bne cr1, lbl_fn_8044EEC0_000005B4
    li r3, 0x0
    b lbl_fn_8044EEC0_00000608
lbl_fn_8044EEC0_000005B4:
    lbz r0, 0xc2(r3)
    extsb. r0, r0
    beq lbl_fn_8044EEC0_000005C8
    li r3, 0x1
    b lbl_fn_8044EEC0_00000608
lbl_fn_8044EEC0_000005C8:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8044EEC0_00000604
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_8044EEC0_00000604
    lwz r3, lbl_8087F430
    bl fn_80373148
    mr r6, r3
    lwz r3, 0x20(r31)
    lwz r4, 0x48(r6)
    lwz r5, 0x4c(r6)
    lwz r6, 0x50(r6)
    bl fn_80213E60
    b lbl_fn_8044EEC0_00000608
lbl_fn_8044EEC0_00000604:
    li r3, 0x0
lbl_fn_8044EEC0_00000608:
    cmpwi r3, 0x0
    beq lbl_fn_8044EEC0_0000061C
    lwz r3, 0x0(r31)
    lwz r29, 0x38(r3)
    b lbl_fn_8044EEC0_00000624
lbl_fn_8044EEC0_0000061C:
    lwz r3, 0x0(r31)
    lwz r29, 0x34(r3)
lbl_fn_8044EEC0_00000624:
    lwz r0, 0x38(r30)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8044EEC0_00000654
    mr r3, r30
    bl fn_801F6C2C
    lfs f0, 0x50(r30)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    bne lbl_fn_8044EEC0_00000684
lbl_fn_8044EEC0_00000654:
    lwz r0, 0x38(r29)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8044EEC0_0000068C
    mr r3, r29
    bl fn_801F6C2C
    lfs f0, 0x50(r29)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_8044EEC0_0000068C
lbl_fn_8044EEC0_00000684:
    li r3, 0x1
    b lbl_fn_8044EEC0_000006FC
lbl_fn_8044EEC0_0000068C:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x5
    bne lbl_fn_8044EEC0_000006F8
    lwz r0, 0x38(r30)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8044EEC0_000006F8
    lfs f2, 0x50(r30)
    lfs f1, lbl_80886B50
    lfs f0, lbl_80886B60
    fsubs f1, f2, f1
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_8044EEC0_000006F8
    lwz r3, 0x0(r31)
    lwz r31, 0x0(r3)
    mr r3, r31
    bl fn_801F6C2C
    lfs f0, 0x50(r31)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_8044EEC0_000006F8
    li r3, 0x1
    b lbl_fn_8044EEC0_000006FC
lbl_fn_8044EEC0_000006F8:
    li r3, 0x0
lbl_fn_8044EEC0_000006FC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8044F14C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x6
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x0(r3)
    stw r4, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8044F14C_000007C4
    lwz r11, lbl_8087F4F8
    lwz r7, 0x48(r11)
    cmpwi r7, 0x0
    bne lbl_fn_8044F14C_00000758
    li r0, 0x0
    b lbl_fn_8044F14C_000007C0
lbl_fn_8044F14C_00000758:
    li r8, 0x0
    li r6, 0x1
    mtctr r7
    cmplwi r7, 0x0
    ble lbl_fn_8044F14C_000007B0
lbl_fn_8044F14C_0000076C:
    lwz r5, 0x4c(r11)
    srwi r10, r8, 3
    clrlwi r0, r8, 29
    lbzx r4, r5, r10
    slw r9, r6, r0
    and r0, r9, r4
    cmpw r9, r0
    beq lbl_fn_8044F14C_000007A8
    clrlwi r0, r9, 24
    or r0, r4, r0
    stbx r0, r5, r10
    mulli r0, r8, 0x84
    lwz r4, 0x50(r11)
    add r0, r4, r0
    b lbl_fn_8044F14C_000007C0
lbl_fn_8044F14C_000007A8:
    addi r8, r8, 0x1
    bdnz lbl_fn_8044F14C_0000076C
lbl_fn_8044F14C_000007B0:
    subi r0, r7, 0x1
    lwz r4, 0x50(r11)
    mulli r0, r0, 0x84
    add r0, r4, r0
lbl_fn_8044F14C_000007C0:
    stw r0, 0x0(r3)
lbl_fn_8044F14C_000007C4:
    lwz r0, 0xec(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8044F14C_000007FC
    lwz r4, 0x0(r3)
    lfs f0, lbl_80886B5C
    lwz r4, 0x0(r4)
    lfs f1, 0x50(r4)
    fcmpo cr0, f1, f0
    bge lbl_fn_8044F14C_000007FC
    stfs f0, 0x50(r4)
    lfs f0, lbl_80886B40
    lwz r4, 0x0(r3)
    lwz r4, 0x0(r4)
    stfs f0, 0x54(r4)
lbl_fn_8044F14C_000007FC:
    lwz r4, 0x0(r3)
    lfs f0, lbl_80886B50
    addi r5, r4, 0x24
    addi r6, r5, 0x4
    b lbl_fn_8044F14C_00000824
lbl_fn_8044F14C_00000810:
    lwz r4, 0x0(r6)
    cmpwi r4, 0x0
    beq lbl_fn_8044F14C_00000820
    stfs f0, 0x50(r4)
lbl_fn_8044F14C_00000820:
    addi r6, r6, 0x4
lbl_fn_8044F14C_00000824:
    lwz r0, 0x0(r5)
    slwi r0, r0, 2
    add r4, r5, r0
    addi r0, r4, 0x4
    cmplw r6, r0
    bne lbl_fn_8044F14C_00000810
    lwz r3, 0x0(r3)
    lfs f0, lbl_80886B40
    addi r4, r3, 0x24
    addi r5, r4, 0x4
    b lbl_fn_8044F14C_00000864
lbl_fn_8044F14C_00000850:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x0
    beq lbl_fn_8044F14C_00000860
    stfs f0, 0x54(r3)
lbl_fn_8044F14C_00000860:
    addi r5, r5, 0x4
lbl_fn_8044F14C_00000864:
    lwz r0, 0x0(r4)
    slwi r0, r0, 2
    add r3, r4, r0
    addi r0, r3, 0x4
    cmplw r5, r0
    bne lbl_fn_8044F14C_00000850
    mr r3, r31
    bl fn_80450590
    mr r3, r31
    bl fn_8044F96C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8044F2D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0xec(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8044F2D4_000009EC
    lwz r0, 0x0(r3)
    li r4, 0x7
    li r7, 0x1
    stw r4, 0x4(r3)
    cmpwi r0, 0x0
    stw r7, 0xf0(r3)
    bne lbl_fn_8044F2D4_0000095C
    lwz r11, lbl_8087F4F8
    lwz r6, 0x48(r11)
    cmpwi r6, 0x0
    bne lbl_fn_8044F2D4_000008F4
    li r0, 0x0
    b lbl_fn_8044F2D4_00000958
lbl_fn_8044F2D4_000008F4:
    li r8, 0x0
    mtctr r6
    cmplwi r6, 0x0
    ble lbl_fn_8044F2D4_00000948
lbl_fn_8044F2D4_00000904:
    lwz r5, 0x4c(r11)
    srwi r10, r8, 3
    clrlwi r0, r8, 29
    lbzx r4, r5, r10
    slw r9, r7, r0
    and r0, r9, r4
    cmpw r9, r0
    beq lbl_fn_8044F2D4_00000940
    clrlwi r0, r9, 24
    or r0, r4, r0
    stbx r0, r5, r10
    mulli r0, r8, 0x84
    lwz r4, 0x50(r11)
    add r0, r4, r0
    b lbl_fn_8044F2D4_00000958
lbl_fn_8044F2D4_00000940:
    addi r8, r8, 0x1
    bdnz lbl_fn_8044F2D4_00000904
lbl_fn_8044F2D4_00000948:
    subi r0, r6, 0x1
    lwz r4, 0x50(r11)
    mulli r0, r0, 0x84
    add r0, r4, r0
lbl_fn_8044F2D4_00000958:
    stw r0, 0x0(r3)
lbl_fn_8044F2D4_0000095C:
    lwz r4, 0x0(r3)
    lfs f0, lbl_80886B3C
    addi r5, r4, 0x30
    addi r6, r5, 0x4
    b lbl_fn_8044F2D4_00000984
lbl_fn_8044F2D4_00000970:
    lwz r4, 0x0(r6)
    cmpwi r4, 0x0
    beq lbl_fn_8044F2D4_00000980
    stfs f0, 0x50(r4)
lbl_fn_8044F2D4_00000980:
    addi r6, r6, 0x4
lbl_fn_8044F2D4_00000984:
    lwz r0, 0x0(r5)
    slwi r0, r0, 2
    add r4, r5, r0
    addi r0, r4, 0x4
    cmplw r6, r0
    bne lbl_fn_8044F2D4_00000970
    lwz r3, 0x0(r3)
    lfs f0, lbl_80886B40
    addi r4, r3, 0x30
    addi r5, r4, 0x4
    b lbl_fn_8044F2D4_000009C4
lbl_fn_8044F2D4_000009B0:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x0
    beq lbl_fn_8044F2D4_000009C0
    stfs f0, 0x54(r3)
lbl_fn_8044F2D4_000009C0:
    addi r5, r5, 0x4
lbl_fn_8044F2D4_000009C4:
    lwz r0, 0x0(r4)
    slwi r0, r0, 2
    add r3, r4, r0
    addi r0, r3, 0x4
    cmplw r5, r0
    bne lbl_fn_8044F2D4_000009B0
    mr r3, r31
    bl fn_80450590
    mr r3, r31
    bl fn_8044F96C
lbl_fn_8044F2D4_000009EC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8044F434(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_8044F434_00000A60
    lwz r0, 0x54e4(r4)
    cmpwi r0, 0x8
    bne lbl_fn_8044F434_00000A60
    lwz r0, 0x4(r3)
    cmpwi r0, 0x3
    beq lbl_fn_8044F434_00000A54
    cmpwi r0, 0x4
    beq lbl_fn_8044F434_00000A54
    cmpwi r0, 0x5
    bne lbl_fn_8044F434_00000A60
    bl fn_8044EEC0
    cmpwi r3, 0x0
    bne lbl_fn_8044F434_00000A60
lbl_fn_8044F434_00000A54:
    mr r3, r31
    li r4, 0x1
    bl fn_8044EA34
lbl_fn_8044F434_00000A60:
    lwz r3, lbl_8087F4F8
    cmpwi r3, 0x0
    beq lbl_fn_8044F434_00000A78
    lwz r0, 0x38(r3)
    extrwi r0, r0, 1, 29
    b lbl_fn_8044F434_00000A7C
lbl_fn_8044F434_00000A78:
    li r0, 0x0
lbl_fn_8044F434_00000A7C:
    cmpwi r0, 0x0
    bne lbl_fn_8044F434_00000F24
    mr r3, r31
    bl fn_80450590
    mr r3, r31
    bl fn_8044F96C
    lwz r0, 0x4(r31)
    cmpwi r0, 0x3
    bne lbl_fn_8044F434_00000ABC
    lwz r3, 0x18(r31)
    subic. r0, r3, 0x1
    stw r0, 0x18(r31)
    bgt lbl_fn_8044F434_00000F24
    mr r3, r31
    bl fn_8044E88C
    b lbl_fn_8044F434_00000F24
lbl_fn_8044F434_00000ABC:
    cmpwi r0, 0x4
    bne lbl_fn_8044F434_00000AE4
    lwz r3, 0x1c(r31)
    subic. r0, r3, 0x1
    stw r0, 0x1c(r31)
    bgt lbl_fn_8044F434_00000F24
    mr r3, r31
    li r4, 0x0
    bl fn_8044EA34
    b lbl_fn_8044F434_00000F24
lbl_fn_8044F434_00000AE4:
    cmpwi r0, 0x5
    bne lbl_fn_8044F434_00000C58
    mr r3, r31
    bl fn_8044EEC0
    cmpwi r3, 0x0
    beq lbl_fn_8044F434_00000F24
    lwz r0, 0x0(r31)
    li r3, 0x1
    stw r3, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8044F434_00000F24
    lwz r3, 0x20(r31)
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8044F434_00000B24
    li r3, 0x0
    b lbl_fn_8044F434_00000B98
lbl_fn_8044F434_00000B24:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x12d
    bne lbl_fn_8044F434_00000B38
    li r3, 0x1
    b lbl_fn_8044F434_00000B98
lbl_fn_8044F434_00000B38:
    bne cr1, lbl_fn_8044F434_00000B44
    li r3, 0x0
    b lbl_fn_8044F434_00000B98
lbl_fn_8044F434_00000B44:
    lbz r0, 0xc2(r3)
    extsb. r0, r0
    beq lbl_fn_8044F434_00000B58
    li r3, 0x1
    b lbl_fn_8044F434_00000B98
lbl_fn_8044F434_00000B58:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8044F434_00000B94
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_8044F434_00000B94
    lwz r3, lbl_8087F430
    bl fn_80373148
    mr r6, r3
    lwz r3, 0x20(r31)
    lwz r4, 0x48(r6)
    lwz r5, 0x4c(r6)
    lwz r6, 0x50(r6)
    bl fn_80213E60
    b lbl_fn_8044F434_00000B98
lbl_fn_8044F434_00000B94:
    li r3, 0x0
lbl_fn_8044F434_00000B98:
    cmpwi r3, 0x0
    bne lbl_fn_8044F434_00000F24
    lwz r3, 0x0(r31)
    addi r4, r3, 0x24
    addi r5, r4, 0x4
    b lbl_fn_8044F434_00000BCC
lbl_fn_8044F434_00000BB0:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x0
    beq lbl_fn_8044F434_00000BC8
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8044F434_00000BC8:
    addi r5, r5, 0x4
lbl_fn_8044F434_00000BCC:
    lwz r0, 0x0(r4)
    slwi r0, r0, 2
    add r3, r4, r0
    addi r0, r3, 0x4
    cmplw r5, r0
    bne lbl_fn_8044F434_00000BB0
    lwz r6, lbl_8087F4F8
    li r4, 0x0
    lwz r3, 0x0(r31)
    li r5, 0x0
    lwz r0, 0x48(r6)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8044F434_00000C4C
lbl_fn_8044F434_00000C04:
    lwz r0, 0x50(r6)
    add r0, r0, r5
    cmplw r0, r3
    bne lbl_fn_8044F434_00000C40
    clrlwi r0, r4, 29
    li r3, 0x1
    slw r0, r3, r0
    lwz r5, 0x4c(r6)
    srwi r4, r4, 3
    nor r0, r0, r0
    lbzx r3, r5, r4
    clrlwi r0, r0, 24
    and r0, r3, r0
    stbx r0, r5, r4
    b lbl_fn_8044F434_00000C4C
lbl_fn_8044F434_00000C40:
    addi r5, r5, 0x84
    addi r4, r4, 0x1
    bdnz lbl_fn_8044F434_00000C04
lbl_fn_8044F434_00000C4C:
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_8044F434_00000F24
lbl_fn_8044F434_00000C58:
    cmpwi r0, 0x6
    bne lbl_fn_8044F434_00000D38
    mr r3, r31
    bl fn_8044EEC0
    cmpwi r3, 0x0
    beq lbl_fn_8044F434_00000F24
    lwz r3, 0x0(r31)
    li r0, 0x1
    stw r0, 0x4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8044F434_00000F24
    addi r4, r3, 0x40
    addi r5, r4, 0x4
    b lbl_fn_8044F434_00000CAC
lbl_fn_8044F434_00000C90:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x0
    beq lbl_fn_8044F434_00000CA8
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8044F434_00000CA8:
    addi r5, r5, 0x4
lbl_fn_8044F434_00000CAC:
    lwz r0, 0x0(r4)
    slwi r0, r0, 2
    add r3, r4, r0
    addi r0, r3, 0x4
    cmplw r5, r0
    bne lbl_fn_8044F434_00000C90
    lwz r6, lbl_8087F4F8
    li r4, 0x0
    lwz r3, 0x0(r31)
    li r5, 0x0
    lwz r0, 0x48(r6)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8044F434_00000D2C
lbl_fn_8044F434_00000CE4:
    lwz r0, 0x50(r6)
    add r0, r0, r5
    cmplw r0, r3
    bne lbl_fn_8044F434_00000D20
    clrlwi r0, r4, 29
    li r3, 0x1
    slw r0, r3, r0
    lwz r5, 0x4c(r6)
    srwi r4, r4, 3
    nor r0, r0, r0
    lbzx r3, r5, r4
    clrlwi r0, r0, 24
    and r0, r3, r0
    stbx r0, r5, r4
    b lbl_fn_8044F434_00000D2C
lbl_fn_8044F434_00000D20:
    addi r5, r5, 0x84
    addi r4, r4, 0x1
    bdnz lbl_fn_8044F434_00000CE4
lbl_fn_8044F434_00000D2C:
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_8044F434_00000F24
lbl_fn_8044F434_00000D38:
    cmpwi r0, 0x7
    bne lbl_fn_8044F434_00000F24
    lwz r3, 0x20(r31)
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8044F434_00000D54
    li r3, 0x0
    b lbl_fn_8044F434_00000DC8
lbl_fn_8044F434_00000D54:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x12d
    bne lbl_fn_8044F434_00000D68
    li r3, 0x1
    b lbl_fn_8044F434_00000DC8
lbl_fn_8044F434_00000D68:
    bne cr1, lbl_fn_8044F434_00000D74
    li r3, 0x0
    b lbl_fn_8044F434_00000DC8
lbl_fn_8044F434_00000D74:
    lbz r0, 0xc2(r3)
    extsb. r0, r0
    beq lbl_fn_8044F434_00000D88
    li r3, 0x1
    b lbl_fn_8044F434_00000DC8
lbl_fn_8044F434_00000D88:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8044F434_00000DC4
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_8044F434_00000DC4
    lwz r3, lbl_8087F430
    bl fn_80373148
    mr r6, r3
    lwz r3, 0x20(r31)
    lwz r4, 0x48(r6)
    lwz r5, 0x4c(r6)
    lwz r6, 0x50(r6)
    bl fn_80213E60
    b lbl_fn_8044F434_00000DC8
lbl_fn_8044F434_00000DC4:
    li r3, 0x0
lbl_fn_8044F434_00000DC8:
    cmpwi r3, 0x0
    beq lbl_fn_8044F434_00000DDC
    lwz r3, 0x0(r31)
    lwz r3, 0x38(r3)
    b lbl_fn_8044F434_00000DE4
lbl_fn_8044F434_00000DDC:
    lwz r3, 0x0(r31)
    lwz r3, 0x34(r3)
lbl_fn_8044F434_00000DE4:
    lfs f1, 0x50(r3)
    lfs f0, lbl_80886B50
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8044F434_00000F24
    lwz r0, 0xec(r31)
    srwi. r0, r0, 31
    beq lbl_fn_8044F434_00000F24
    lwz r0, 0x0(r31)
    li r3, 0x5
    stw r3, 0x4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8044F434_00000E9C
    lwz r10, lbl_8087F4F8
    lwz r6, 0x48(r10)
    cmpwi r6, 0x0
    bne lbl_fn_8044F434_00000E30
    li r0, 0x0
    b lbl_fn_8044F434_00000E98
lbl_fn_8044F434_00000E30:
    li r7, 0x0
    li r5, 0x1
    mtctr r6
    cmplwi r6, 0x0
    ble lbl_fn_8044F434_00000E88
lbl_fn_8044F434_00000E44:
    lwz r4, 0x4c(r10)
    srwi r9, r7, 3
    clrlwi r0, r7, 29
    lbzx r3, r4, r9
    slw r8, r5, r0
    and r0, r8, r3
    cmpw r8, r0
    beq lbl_fn_8044F434_00000E80
    clrlwi r0, r8, 24
    or r0, r3, r0
    stbx r0, r4, r9
    mulli r0, r7, 0x84
    lwz r3, 0x50(r10)
    add r0, r3, r0
    b lbl_fn_8044F434_00000E98
lbl_fn_8044F434_00000E80:
    addi r7, r7, 0x1
    bdnz lbl_fn_8044F434_00000E44
lbl_fn_8044F434_00000E88:
    subi r0, r6, 0x1
    lwz r3, 0x50(r10)
    mulli r0, r0, 0x84
    add r0, r3, r0
lbl_fn_8044F434_00000E98:
    stw r0, 0x0(r31)
lbl_fn_8044F434_00000E9C:
    lwz r3, 0x0(r31)
    lfs f0, lbl_80886B50
    addi r5, r3, 0x30
    addi r4, r5, 0x4
    b lbl_fn_8044F434_00000EC4
lbl_fn_8044F434_00000EB0:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8044F434_00000EC0
    stfs f0, 0x50(r3)
lbl_fn_8044F434_00000EC0:
    addi r4, r4, 0x4
lbl_fn_8044F434_00000EC4:
    lwz r0, 0x0(r5)
    slwi r0, r0, 2
    add r3, r5, r0
    addi r0, r3, 0x4
    cmplw r4, r0
    bne lbl_fn_8044F434_00000EB0
    lwz r3, 0x0(r31)
    lfs f0, lbl_80886B40
    addi r5, r3, 0x30
    addi r4, r5, 0x4
    b lbl_fn_8044F434_00000F04
lbl_fn_8044F434_00000EF0:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8044F434_00000F00
    stfs f0, 0x54(r3)
lbl_fn_8044F434_00000F00:
    addi r4, r4, 0x4
lbl_fn_8044F434_00000F04:
    lwz r0, 0x0(r5)
    slwi r0, r0, 2
    add r3, r5, r0
    addi r0, r3, 0x4
    cmplw r4, r0
    bne lbl_fn_8044F434_00000EF0
    mr r3, r31
    bl fn_8044F96C
lbl_fn_8044F434_00000F24:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8044F96C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_24
    lwz r4, 0x4(r3)
    lis r31, lbl_80754770@ha
    mr r29, r3
    li r0, 0x1
    cmpwi r4, 0x1
    addi r31, r31, lbl_80754770@l
    beq lbl_fn_8044F96C_00000F7C
    cmpwi r4, 0x2
    beq lbl_fn_8044F96C_00000F7C
    li r0, 0x0
lbl_fn_8044F96C_00000F7C:
    cmpwi r0, 0x0
    beq lbl_fn_8044F96C_00000F90
    lwz r0, 0xec(r3)
    extrwi. r0, r0, 1, 5
    beq lbl_fn_8044F96C_00000F9C
lbl_fn_8044F96C_00000F90:
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    bne lbl_fn_8044F96C_0000101C
lbl_fn_8044F96C_00000F9C:
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8044F96C_00001B3C
    lwz r4, 0x3c(r4)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8044F96C_00000FC8
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_8044F96C_00000FC8:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8044F96C_00001B3C
    lwz r3, 0x0(r3)
    addi r4, r3, 0x40
    addi r5, r3, 0x44
    b lbl_fn_8044F96C_00001000
lbl_fn_8044F96C_00000FE4:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_00000FFC
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8044F96C_00000FFC:
    addi r5, r5, 0x4
lbl_fn_8044F96C_00001000:
    lwz r0, 0x0(r4)
    slwi r0, r0, 2
    add r3, r4, r0
    addi r0, r3, 0x4
    cmplw r5, r0
    bne lbl_fn_8044F96C_00000FE4
    b lbl_fn_8044F96C_00001B3C
lbl_fn_8044F96C_0000101C:
    addi r4, r5, 0x40
    addi r5, r5, 0x44
    b lbl_fn_8044F96C_00001044
lbl_fn_8044F96C_00001028:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_00001040
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8044F96C_00001040:
    addi r5, r5, 0x4
lbl_fn_8044F96C_00001044:
    lwz r0, 0x0(r4)
    slwi r0, r0, 2
    add r3, r4, r0
    addi r0, r3, 0x4
    cmplw r5, r0
    bne lbl_fn_8044F96C_00001028
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x8
    addi r5, r29, 0x8
    bl fn_800BFAC8
    lfs f0, lbl_80886B3C
    lfs f1, 0x10(r1)
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_8044F96C_000011C4
    lfs f0, lbl_80886B40
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8044F96C_000011C4
    lwz r3, 0x0(r29)
    lfs f31, 0x8(r1)
    lwz r30, lbl_80886B38
    addi r28, r3, 0x40
    addi r27, r3, 0x44
    b lbl_fn_8044F96C_000010C8
lbl_fn_8044F96C_000010A8:
    lwz r3, 0x0(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_000010C4
    fmr f1, f31
    mr r4, r30
    li r5, 0x0
    bl fn_801F6D7C
lbl_fn_8044F96C_000010C4:
    addi r27, r27, 0x4
lbl_fn_8044F96C_000010C8:
    lwz r0, 0x0(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    addi r0, r3, 0x4
    cmplw r27, r0
    bne lbl_fn_8044F96C_000010A8
    lwz r3, 0x0(r29)
    lfs f31, 0xc(r1)
    addi r27, r3, 0x40
    addi r28, r3, 0x44
    b lbl_fn_8044F96C_00001114
lbl_fn_8044F96C_000010F4:
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_00001110
    fmr f1, f31
    mr r4, r30
    li r5, 0x1
    bl fn_801F6D7C
lbl_fn_8044F96C_00001110:
    addi r28, r28, 0x4
lbl_fn_8044F96C_00001114:
    lwz r0, 0x0(r27)
    slwi r0, r0, 2
    add r3, r27, r0
    addi r0, r3, 0x4
    cmplw r28, r0
    bne lbl_fn_8044F96C_000010F4
    lwz r3, 0x0(r29)
    lfs f31, 0x14(r29)
    addi r27, r3, 0x40
    addi r28, r3, 0x44
    b lbl_fn_8044F96C_00001160
lbl_fn_8044F96C_00001140:
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_0000115C
    fmr f1, f31
    mr r4, r30
    li r5, 0x2
    bl fn_801F6D7C
lbl_fn_8044F96C_0000115C:
    addi r28, r28, 0x4
lbl_fn_8044F96C_00001160:
    lwz r0, 0x0(r27)
    slwi r0, r0, 2
    add r3, r27, r0
    addi r0, r3, 0x4
    cmplw r28, r0
    bne lbl_fn_8044F96C_00001140
    lwz r3, 0x0(r29)
    lfs f31, 0x14(r29)
    addi r27, r3, 0x40
    addi r28, r3, 0x44
    b lbl_fn_8044F96C_000011AC
lbl_fn_8044F96C_0000118C:
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_000011A8
    fmr f1, f31
    mr r4, r30
    li r5, 0x3
    bl fn_801F6D7C
lbl_fn_8044F96C_000011A8:
    addi r28, r28, 0x4
lbl_fn_8044F96C_000011AC:
    lwz r0, 0x0(r27)
    slwi r0, r0, 2
    add r3, r27, r0
    addi r0, r3, 0x4
    cmplw r28, r0
    bne lbl_fn_8044F96C_0000118C
lbl_fn_8044F96C_000011C4:
    lwz r4, lbl_8087F610
    cmpwi r4, 0x0
    beq lbl_fn_8044F96C_000011F8
    lwz r0, 0x4fc(r4)
    li r3, 0x0
    cmpwi r0, 0x1e
    bne lbl_fn_8044F96C_000011F0
    lwz r0, 0x50c(r4)
    cmpwi r0, 0x5
    bge lbl_fn_8044F96C_000011F0
    li r3, 0x1
lbl_fn_8044F96C_000011F0:
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_00001B3C
lbl_fn_8044F96C_000011F8:
    lwz r3, 0xec(r29)
    extrwi. r0, r3, 1, 4
    beq lbl_fn_8044F96C_00001454
    extrwi. r0, r3, 1, 6
    bne lbl_fn_8044F96C_00001454
    lwz r3, 0x20(r29)
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8044F96C_00001220
    li r3, 0x0
    b lbl_fn_8044F96C_00001294
lbl_fn_8044F96C_00001220:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x12d
    bne lbl_fn_8044F96C_00001234
    li r3, 0x1
    b lbl_fn_8044F96C_00001294
lbl_fn_8044F96C_00001234:
    bne cr1, lbl_fn_8044F96C_00001240
    li r3, 0x0
    b lbl_fn_8044F96C_00001294
lbl_fn_8044F96C_00001240:
    lbz r0, 0xc2(r3)
    extsb. r0, r0
    beq lbl_fn_8044F96C_00001254
    li r3, 0x1
    b lbl_fn_8044F96C_00001294
lbl_fn_8044F96C_00001254:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_00001290
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_00001290
    lwz r3, lbl_8087F430
    bl fn_80373148
    mr r6, r3
    lwz r3, 0x20(r29)
    lwz r4, 0x48(r6)
    lwz r5, 0x4c(r6)
    lwz r6, 0x50(r6)
    bl fn_80213E60
    b lbl_fn_8044F96C_00001294
lbl_fn_8044F96C_00001290:
    li r3, 0x0
lbl_fn_8044F96C_00001294:
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_00001454
    lwz r0, 0x4(r29)
    cmpwi r0, 0x5
    beq lbl_fn_8044F96C_000012BC
    cmpwi r0, 0x6
    beq lbl_fn_8044F96C_000012BC
    lwz r0, 0xec(r29)
    extrwi. r0, r0, 1, 5
    beq lbl_fn_8044F96C_00001454
lbl_fn_8044F96C_000012BC:
    lwz r0, 0xec(r29)
    extrwi. r0, r0, 1, 2
    bne lbl_fn_8044F96C_00001428
    lwz r3, 0x20(r29)
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8044F96C_000012DC
    li r3, 0x0
    b lbl_fn_8044F96C_00001350
lbl_fn_8044F96C_000012DC:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x12d
    bne lbl_fn_8044F96C_000012F0
    li r3, 0x1
    b lbl_fn_8044F96C_00001350
lbl_fn_8044F96C_000012F0:
    bne cr1, lbl_fn_8044F96C_000012FC
    li r3, 0x0
    b lbl_fn_8044F96C_00001350
lbl_fn_8044F96C_000012FC:
    lbz r0, 0xc2(r3)
    extsb. r0, r0
    beq lbl_fn_8044F96C_00001310
    li r3, 0x1
    b lbl_fn_8044F96C_00001350
lbl_fn_8044F96C_00001310:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_0000134C
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_0000134C
    lwz r3, lbl_8087F430
    bl fn_80373148
    mr r6, r3
    lwz r3, 0x20(r29)
    lwz r4, 0x48(r6)
    lwz r5, 0x4c(r6)
    lwz r6, 0x50(r6)
    bl fn_80213E60
    b lbl_fn_8044F96C_00001350
lbl_fn_8044F96C_0000134C:
    li r3, 0x0
lbl_fn_8044F96C_00001350:
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_00001364
    lwz r4, 0x0(r29)
    lwz r0, 0x2c(r4)
    b lbl_fn_8044F96C_0000136C
lbl_fn_8044F96C_00001364:
    lwz r4, 0x0(r29)
    lwz r0, 0x28(r4)
lbl_fn_8044F96C_0000136C:
    cmpwi r0, 0x0
    beq lbl_fn_8044F96C_00001440
    lwz r3, 0x20(r29)
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8044F96C_00001388
    li r3, 0x0
    b lbl_fn_8044F96C_000013FC
lbl_fn_8044F96C_00001388:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x12d
    bne lbl_fn_8044F96C_0000139C
    li r3, 0x1
    b lbl_fn_8044F96C_000013FC
lbl_fn_8044F96C_0000139C:
    bne cr1, lbl_fn_8044F96C_000013A8
    li r3, 0x0
    b lbl_fn_8044F96C_000013FC
lbl_fn_8044F96C_000013A8:
    lbz r0, 0xc2(r3)
    extsb. r0, r0
    beq lbl_fn_8044F96C_000013BC
    li r3, 0x1
    b lbl_fn_8044F96C_000013FC
lbl_fn_8044F96C_000013BC:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_000013F8
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_000013F8
    lwz r3, lbl_8087F430
    bl fn_80373148
    mr r6, r3
    lwz r3, 0x20(r29)
    lwz r4, 0x48(r6)
    lwz r5, 0x4c(r6)
    lwz r6, 0x50(r6)
    bl fn_80213E60
    b lbl_fn_8044F96C_000013FC
lbl_fn_8044F96C_000013F8:
    li r3, 0x0
lbl_fn_8044F96C_000013FC:
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_00001410
    lwz r4, 0x0(r29)
    lwz r3, 0x2c(r4)
    b lbl_fn_8044F96C_00001418
lbl_fn_8044F96C_00001410:
    lwz r4, 0x0(r29)
    lwz r3, 0x28(r4)
lbl_fn_8044F96C_00001418:
    lfs f1, 0x50(r3)
    lfs f0, lbl_80886B64
    fcmpo cr0, f1, f0
    bge lbl_fn_8044F96C_00001440
lbl_fn_8044F96C_00001428:
    lwz r3, 0x0(r29)
    lwz r3, 0x3c(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_8044F96C_00001468
lbl_fn_8044F96C_00001440:
    lwz r3, 0x3c(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    b lbl_fn_8044F96C_00001468
lbl_fn_8044F96C_00001454:
    lwz r3, 0x0(r29)
    lwz r3, 0x3c(r3)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8044F96C_00001468:
    lwz r3, 0x4(r29)
    cmpwi r3, 0x3
    bne lbl_fn_8044F96C_00001520
    lwz r3, 0x0(r29)
    lfs f0, lbl_80886B50
    lwz r3, 0x0(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x0(r29)
    lwz r3, 0x0(r3)
    lfs f1, 0x50(r3)
    fcmpo cr0, f1, f0
    ble lbl_fn_8044F96C_000014A4
    stfs f0, 0x50(r3)
lbl_fn_8044F96C_000014A4:
    lfs f31, lbl_80886B50
    addi r27, r29, 0x2c
    li r26, 0x0
    li r30, 0x0
lbl_fn_8044F96C_000014B4:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r4)
    add r4, r4, r30
    lwz r25, 0x8(r4)
    lfs f0, 0x50(r3)
    fcmpo cr0, f0, f31
    cror eq, gt, eq
    bne lbl_fn_8044F96C_00001508
    lwz r0, 0x38(r25)
    addi r28, r31, 0x6c
    li r24, 0x0
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r25)
lbl_fn_8044F96C_000014E8:
    lwz r4, 0x0(r28)
    mr r3, r25
    mr r5, r27
    bl fn_801F837C
    addi r24, r24, 0x1
    addi r28, r28, 0x4
    cmpwi r24, 0x7
    blt lbl_fn_8044F96C_000014E8
lbl_fn_8044F96C_00001508:
    addi r26, r26, 0x1
    addi r30, r30, 0x4
    cmpwi r26, 0x3
    addi r27, r27, 0x40
    blt lbl_fn_8044F96C_000014B4
    b lbl_fn_8044F96C_00001B3C
lbl_fn_8044F96C_00001520:
    subi r0, r3, 0x4
    cmplwi r0, 0x1
    bgt lbl_fn_8044F96C_00001870
    lwz r0, 0xf0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8044F96C_000017BC
    lwz r3, 0x0(r29)
    lwz r3, 0x0(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r0, 0x4(r29)
    cmpwi r0, 0x4
    bne lbl_fn_8044F96C_00001574
    lwz r3, 0x0(r29)
    lfs f0, lbl_80886B50
    lwz r3, 0x0(r3)
    lfs f1, 0x50(r3)
    fcmpo cr0, f1, f0
    ble lbl_fn_8044F96C_00001574
    stfs f0, 0x50(r3)
lbl_fn_8044F96C_00001574:
    lwz r28, lbl_80886B30
    addi r27, r29, 0x2c
    li r24, 0x0
    li r30, 0x0
lbl_fn_8044F96C_00001584:
    lwz r3, 0x0(r29)
    addi r3, r3, 0x18
    lwzx r3, r3, r30
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r0, 0x4(r29)
    cmpwi r0, 0x4
    beq lbl_fn_8044F96C_000015B0
    cmpwi r24, 0x1
    beq lbl_fn_8044F96C_000015C0
lbl_fn_8044F96C_000015B0:
    mr r4, r28
    mr r5, r27
    bl fn_801F837C
    b lbl_fn_8044F96C_000015CC
lbl_fn_8044F96C_000015C0:
    mr r4, r28
    la r5, lbl_8087E028
    bl fn_801F837C
lbl_fn_8044F96C_000015CC:
    addi r24, r24, 0x1
    addi r30, r30, 0x4
    cmpwi r24, 0x3
    addi r27, r27, 0x40
    blt lbl_fn_8044F96C_00001584
    lwz r0, 0x4(r29)
    cmpwi r0, 0x5
    bne lbl_fn_8044F96C_00001B3C
    lwz r3, 0x20(r29)
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8044F96C_00001600
    li r3, 0x0
    b lbl_fn_8044F96C_00001674
lbl_fn_8044F96C_00001600:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x12d
    bne lbl_fn_8044F96C_00001614
    li r3, 0x1
    b lbl_fn_8044F96C_00001674
lbl_fn_8044F96C_00001614:
    bne cr1, lbl_fn_8044F96C_00001620
    li r3, 0x0
    b lbl_fn_8044F96C_00001674
lbl_fn_8044F96C_00001620:
    lbz r0, 0xc2(r3)
    extsb. r0, r0
    beq lbl_fn_8044F96C_00001634
    li r3, 0x1
    b lbl_fn_8044F96C_00001674
lbl_fn_8044F96C_00001634:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_00001670
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_00001670
    lwz r3, lbl_8087F430
    bl fn_80373148
    mr r6, r3
    lwz r3, 0x20(r29)
    lwz r4, 0x48(r6)
    lwz r5, 0x4c(r6)
    lwz r6, 0x50(r6)
    bl fn_80213E60
    b lbl_fn_8044F96C_00001674
lbl_fn_8044F96C_00001670:
    li r3, 0x0
lbl_fn_8044F96C_00001674:
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_00001688
    lwz r3, 0x0(r29)
    lwz r27, 0x2c(r3)
    b lbl_fn_8044F96C_00001690
lbl_fn_8044F96C_00001688:
    lwz r3, 0x0(r29)
    lwz r27, 0x28(r3)
lbl_fn_8044F96C_00001690:
    lwz r0, 0x38(r27)
    lfs f0, lbl_80886B50
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r27)
    lfs f1, 0x50(r27)
    fcmpo cr0, f1, f0
    ble lbl_fn_8044F96C_000016B0
    stfs f0, 0x50(r27)
lbl_fn_8044F96C_000016B0:
    lfs f2, 0x50(r27)
    lfs f0, lbl_80886B50
    lfs f1, lbl_80886B54
    fsubs f2, f0, f2
    lfs f0, lbl_80886B3C
    fdivs f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8044F96C_000016D4
    b lbl_fn_8044F96C_000016D8
lbl_fn_8044F96C_000016D4:
    fmr f1, f0
lbl_fn_8044F96C_000016D8:
    lfs f2, lbl_80886B40
    fcmpo cr0, f1, f2
    bge lbl_fn_8044F96C_0000170C
    lfs f2, 0x50(r27)
    lfs f0, lbl_80886B50
    lfs f1, lbl_80886B54
    fsubs f2, f0, f2
    lfs f0, lbl_80886B3C
    fdivs f2, f2, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_8044F96C_00001708
    b lbl_fn_8044F96C_0000170C
lbl_fn_8044F96C_00001708:
    fmr f2, f0
lbl_fn_8044F96C_0000170C:
    lfs f0, lbl_80886B4C
    li r24, 0x0
    lwz r28, lbl_80886B34
    li r30, 0x0
    fmuls f31, f0, f2
lbl_fn_8044F96C_00001720:
    lwz r0, 0x0(r29)
    fmr f1, f31
    mr r4, r28
    li r5, 0x0
    add r3, r0, r30
    lwz r3, 0x18(r3)
    bl fn_801F791C
    addi r24, r24, 0x1
    addi r30, r30, 0x4
    cmpwi r24, 0x3
    blt lbl_fn_8044F96C_00001720
    addi r28, r31, 0xb0
    addi r30, r31, 0x94
    li r24, 0x0
lbl_fn_8044F96C_00001758:
    fmr f1, f31
    lwz r4, 0x0(r28)
    mr r3, r27
    li r5, 0x0
    bl fn_801F791C
    lwz r0, 0xec(r29)
    extrwi. r0, r0, 1, 2
    bne lbl_fn_8044F96C_00001780
    cmpwi r24, 0x0
    beq lbl_fn_8044F96C_00001794
lbl_fn_8044F96C_00001780:
    lwz r4, 0x0(r30)
    mr r3, r27
    addi r5, r29, 0x6c
    bl fn_801F837C
    b lbl_fn_8044F96C_000017A4
lbl_fn_8044F96C_00001794:
    lwz r4, 0x0(r30)
    mr r3, r27
    la r5, lbl_8087E028
    bl fn_801F837C
lbl_fn_8044F96C_000017A4:
    addi r24, r24, 0x1
    addi r30, r30, 0x4
    cmpwi r24, 0x3
    addi r28, r28, 0x4
    blt lbl_fn_8044F96C_00001758
    b lbl_fn_8044F96C_00001B3C
lbl_fn_8044F96C_000017BC:
    lwz r3, 0x20(r29)
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8044F96C_000017D0
    li r3, 0x0
    b lbl_fn_8044F96C_00001844
lbl_fn_8044F96C_000017D0:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x12d
    bne lbl_fn_8044F96C_000017E4
    li r3, 0x1
    b lbl_fn_8044F96C_00001844
lbl_fn_8044F96C_000017E4:
    bne cr1, lbl_fn_8044F96C_000017F0
    li r3, 0x0
    b lbl_fn_8044F96C_00001844
lbl_fn_8044F96C_000017F0:
    lbz r0, 0xc2(r3)
    extsb. r0, r0
    beq lbl_fn_8044F96C_00001804
    li r3, 0x1
    b lbl_fn_8044F96C_00001844
lbl_fn_8044F96C_00001804:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_00001840
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_00001840
    lwz r3, lbl_8087F430
    bl fn_80373148
    mr r6, r3
    lwz r3, 0x20(r29)
    lwz r4, 0x48(r6)
    lwz r5, 0x4c(r6)
    lwz r6, 0x50(r6)
    bl fn_80213E60
    b lbl_fn_8044F96C_00001844
lbl_fn_8044F96C_00001840:
    li r3, 0x0
lbl_fn_8044F96C_00001844:
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_00001858
    lwz r3, 0x0(r29)
    lwz r3, 0x38(r3)
    b lbl_fn_8044F96C_00001860
lbl_fn_8044F96C_00001858:
    lwz r3, 0x0(r29)
    lwz r3, 0x34(r3)
lbl_fn_8044F96C_00001860:
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_8044F96C_00001B3C
lbl_fn_8044F96C_00001870:
    cmpwi r3, 0x6
    bne lbl_fn_8044F96C_00001A5C
    lwz r0, 0xec(r29)
    srwi. r0, r0, 31
    beq lbl_fn_8044F96C_00001898
    lwz r3, 0x0(r29)
    lwz r3, 0x0(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8044F96C_00001898:
    lwz r3, 0x20(r29)
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8044F96C_000018AC
    li r3, 0x0
    b lbl_fn_8044F96C_00001920
lbl_fn_8044F96C_000018AC:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x12d
    bne lbl_fn_8044F96C_000018C0
    li r3, 0x1
    b lbl_fn_8044F96C_00001920
lbl_fn_8044F96C_000018C0:
    bne cr1, lbl_fn_8044F96C_000018CC
    li r3, 0x0
    b lbl_fn_8044F96C_00001920
lbl_fn_8044F96C_000018CC:
    lbz r0, 0xc2(r3)
    extsb. r0, r0
    beq lbl_fn_8044F96C_000018E0
    li r3, 0x1
    b lbl_fn_8044F96C_00001920
lbl_fn_8044F96C_000018E0:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_0000191C
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_0000191C
    lwz r3, lbl_8087F430
    bl fn_80373148
    mr r6, r3
    lwz r3, 0x20(r29)
    lwz r4, 0x48(r6)
    lwz r5, 0x4c(r6)
    lwz r6, 0x50(r6)
    bl fn_80213E60
    b lbl_fn_8044F96C_00001920
lbl_fn_8044F96C_0000191C:
    li r3, 0x0
lbl_fn_8044F96C_00001920:
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_00001934
    lwz r3, 0x0(r29)
    lwz r27, 0x2c(r3)
    b lbl_fn_8044F96C_0000193C
lbl_fn_8044F96C_00001934:
    lwz r3, 0x0(r29)
    lwz r27, 0x28(r3)
lbl_fn_8044F96C_0000193C:
    lwz r0, 0x38(r27)
    lfs f1, lbl_80886B50
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r27)
    lfs f2, lbl_80886B54
    lfs f3, 0x50(r27)
    lfs f0, lbl_80886B3C
    fsubs f1, f3, f1
    fsubs f1, f2, f1
    fdivs f1, f1, f2
    fcmpo cr0, f1, f0
    ble lbl_fn_8044F96C_00001970
    b lbl_fn_8044F96C_00001974
lbl_fn_8044F96C_00001970:
    fmr f1, f0
lbl_fn_8044F96C_00001974:
    lfs f2, lbl_80886B40
    fcmpo cr0, f1, f2
    bge lbl_fn_8044F96C_000019AC
    lfs f1, 0x50(r27)
    lfs f0, lbl_80886B50
    lfs f2, lbl_80886B54
    fsubs f1, f1, f0
    lfs f0, lbl_80886B3C
    fsubs f1, f2, f1
    fdivs f2, f1, f2
    fcmpo cr0, f2, f0
    ble lbl_fn_8044F96C_000019A8
    b lbl_fn_8044F96C_000019AC
lbl_fn_8044F96C_000019A8:
    fmr f2, f0
lbl_fn_8044F96C_000019AC:
    lfs f0, lbl_80886B4C
    li r24, 0x0
    lwz r28, lbl_80886B34
    li r30, 0x0
    fmuls f31, f0, f2
lbl_fn_8044F96C_000019C0:
    lwz r0, 0x0(r29)
    fmr f1, f31
    mr r4, r28
    li r5, 0x0
    add r3, r0, r30
    lwz r3, 0x18(r3)
    bl fn_801F791C
    addi r24, r24, 0x1
    addi r30, r30, 0x4
    cmpwi r24, 0x3
    blt lbl_fn_8044F96C_000019C0
    addi r28, r31, 0xb0
    addi r30, r31, 0x94
    li r24, 0x0
lbl_fn_8044F96C_000019F8:
    lwz r4, 0x0(r28)
    mr r3, r27
    lfs f1, lbl_80886B4C
    li r5, 0x0
    bl fn_801F791C
    lwz r0, 0xec(r29)
    extrwi. r0, r0, 1, 2
    bne lbl_fn_8044F96C_00001A20
    cmpwi r24, 0x0
    beq lbl_fn_8044F96C_00001A34
lbl_fn_8044F96C_00001A20:
    lwz r4, 0x0(r30)
    mr r3, r27
    addi r5, r29, 0x6c
    bl fn_801F837C
    b lbl_fn_8044F96C_00001A44
lbl_fn_8044F96C_00001A34:
    lwz r4, 0x0(r30)
    mr r3, r27
    la r5, lbl_8087E028
    bl fn_801F837C
lbl_fn_8044F96C_00001A44:
    addi r24, r24, 0x1
    addi r30, r30, 0x4
    cmpwi r24, 0x3
    addi r28, r28, 0x4
    blt lbl_fn_8044F96C_000019F8
    b lbl_fn_8044F96C_00001B3C
lbl_fn_8044F96C_00001A5C:
    cmpwi r3, 0x7
    bne lbl_fn_8044F96C_00001B3C
    lwz r3, 0x20(r29)
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8044F96C_00001A78
    li r3, 0x0
    b lbl_fn_8044F96C_00001AEC
lbl_fn_8044F96C_00001A78:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x12d
    bne lbl_fn_8044F96C_00001A8C
    li r3, 0x1
    b lbl_fn_8044F96C_00001AEC
lbl_fn_8044F96C_00001A8C:
    bne cr1, lbl_fn_8044F96C_00001A98
    li r3, 0x0
    b lbl_fn_8044F96C_00001AEC
lbl_fn_8044F96C_00001A98:
    lbz r0, 0xc2(r3)
    extsb. r0, r0
    beq lbl_fn_8044F96C_00001AAC
    li r3, 0x1
    b lbl_fn_8044F96C_00001AEC
lbl_fn_8044F96C_00001AAC:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_00001AE8
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_00001AE8
    lwz r3, lbl_8087F430
    bl fn_80373148
    mr r6, r3
    lwz r3, 0x20(r29)
    lwz r4, 0x48(r6)
    lwz r5, 0x4c(r6)
    lwz r6, 0x50(r6)
    bl fn_80213E60
    b lbl_fn_8044F96C_00001AEC
lbl_fn_8044F96C_00001AE8:
    li r3, 0x0
lbl_fn_8044F96C_00001AEC:
    cmpwi r3, 0x0
    beq lbl_fn_8044F96C_00001B00
    lwz r3, 0x0(r29)
    lwz r27, 0x38(r3)
    b lbl_fn_8044F96C_00001B08
lbl_fn_8044F96C_00001B00:
    lwz r3, 0x0(r29)
    lwz r27, 0x34(r3)
lbl_fn_8044F96C_00001B08:
    lwz r0, 0x38(r27)
    addi r28, r31, 0xbc
    li r24, 0x0
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r27)
lbl_fn_8044F96C_00001B1C:
    lwz r4, 0x0(r28)
    mr r3, r27
    addi r5, r29, 0x2c
    bl fn_801F837C
    addi r24, r24, 0x1
    addi r28, r28, 0x4
    cmpwi r24, 0x3
    blt lbl_fn_8044F96C_00001B1C
lbl_fn_8044F96C_00001B3C:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_24
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
