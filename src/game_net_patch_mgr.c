#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_80084C24(void);
extern void fn_800DC880(void);
extern void fn_800DCA6C(void);
extern void fn_8053770C(void);
extern void fn_8053C6A8(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);

/* External data declarations */
extern u8 lbl_8075DA28[];
extern u8 lbl_8075DC04[];
extern u8 lbl_80793B28[];
extern u8 lbl_80793B70[];
extern u8 lbl_80793BA0[];
extern u8 lbl_80793BC8[];
extern u8 lbl_80793BF0[];
extern u8 lbl_80793C0C[];
extern u8 lbl_80793D68[];
extern u8 lbl_80793D98[];
extern u8 lbl_80793DB8[];

/* Small data declarations */
extern u32 lbl_8087E4BC;
extern u32 lbl_80887C6C;
extern u32 lbl_80887C7C;

/* Function declarations */
void fn_80539CF0(void);
void fn_8053A16C(void);
void fn_8053A2EC(void);
void fn_8053A3D0(void);
void fn_8053A410(void);
void fn_8053A4E0(void);
void fn_8053A514(void);
void fn_8053AC6C(void);
void fn_8053AC8C(void);
void fn_8053ACDC(void);
void fn_8053AD1C(void);
void fn_8053AD28(void);
void fn_8053AD4C(void);
void fn_8053AD54(void);
void fn_8053AEF8(void);
void fn_8053AF38(void);
void fn_8053AFBC(void);
void fn_8053B02C(void);
void fn_8053B034(void);

asm void fn_80539CF0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_25
    lis r6, 0x6666
    mr r27, r3
    mr r28, r4
    mr r29, r5
    addi r31, r6, 0x6667
lbl_fn_80539CF0_00000028:
    lwz r30, 0x0(r27)
    lwz r26, 0x0(r28)
    subf r0, r30, r26
    srawi r0, r0, 3
    addze r8, r0
    cmpwi r8, 0x1
    ble lbl_fn_80539CF0_00000464
    cmpwi r8, 0x14
    bgt lbl_fn_80539CF0_000000E4
    cmplw r30, r26
    beq lbl_fn_80539CF0_00000464
    subi r25, r26, 0x8
    cmplw r30, r25
    beq lbl_fn_80539CF0_00000464
    b lbl_fn_80539CF0_000000D8
lbl_fn_80539CF0_00000064:
    cmplw r30, r26
    mr r28, r30
    beq lbl_fn_80539CF0_000000A4
    addi r27, r30, 0x8
    b lbl_fn_80539CF0_0000009C
lbl_fn_80539CF0_00000078:
    lwz r12, 0x0(r29)
    mr r3, r27
    mr r4, r28
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80539CF0_00000098
    mr r28, r27
lbl_fn_80539CF0_00000098:
    addi r27, r27, 0x8
lbl_fn_80539CF0_0000009C:
    cmplw r27, r26
    bne lbl_fn_80539CF0_00000078
lbl_fn_80539CF0_000000A4:
    cmplw r28, r30
    beq lbl_fn_80539CF0_000000D4
    lfs f2, 0x0(r28)
    lfs f1, 0x4(r28)
    lfs f0, 0x0(r30)
    stfs f0, 0x0(r28)
    lfs f0, 0x4(r30)
    stfs f0, 0x4(r28)
    stfs f2, 0x0(r30)
    stfs f2, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f1, 0x4(r30)
lbl_fn_80539CF0_000000D4:
    addi r30, r30, 0x8
lbl_fn_80539CF0_000000D8:
    cmplw r30, r25
    bne lbl_fn_80539CF0_00000064
    b lbl_fn_80539CF0_00000464
lbl_fn_80539CF0_000000E4:
    lwz r4, lbl_8087E4BC
    srawi r0, r8, 2
    addze r5, r0
    mulhw r0, r31, r4
    addi r6, r4, 0x1
    cmpwi r6, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    slwi r0, r0, 3
    add r7, r30, r0
    blt lbl_fn_80539CF0_00000124
    li r6, -0x4
lbl_fn_80539CF0_00000124:
    mulhw r3, r31, r6
    addi r0, r6, 0x1
    slwi r4, r8, 2
    stw r0, lbl_8087E4BC
    cmpwi r0, 0x5
    lwz r5, 0x0(r27)
    subf r0, r8, r4
    srawi r0, r0, 2
    addze r4, r0
    srawi r0, r3, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r0, r4, r0
    slwi r0, r0, 3
    add r0, r5, r0
    blt lbl_fn_80539CF0_00000174
    li r6, -0x4
    stw r6, lbl_8087E4BC
lbl_fn_80539CF0_00000174:
    lwz r5, 0x0(r28)
    mr r6, r29
    addi r3, r1, 0x20
    addi r4, r1, 0x1c
    subi r25, r5, 0x8
    stw r25, 0x18(r1)
    addi r5, r1, 0x18
    stw r0, 0x1c(r1)
    stw r7, 0x20(r1)
    bl fn_8053A16C
    lwz r30, 0x0(r27)
    mr r26, r25
    b lbl_fn_80539CF0_000001AC
lbl_fn_80539CF0_000001A8:
    addi r30, r30, 0x8
lbl_fn_80539CF0_000001AC:
    lwz r12, 0x0(r29)
    mr r3, r30
    mr r4, r25
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80539CF0_000001A8
lbl_fn_80539CF0_000001C8:
    subi r26, r26, 0x8
    cmplw r30, r26
    beq lbl_fn_80539CF0_000001F0
    lwz r12, 0x0(r29)
    mr r3, r26
    mr r4, r25
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80539CF0_000001C8
lbl_fn_80539CF0_000001F0:
    cmplw r30, r26
    bge lbl_fn_80539CF0_000002AC
    lfs f2, 0x0(r30)
    lfs f1, 0x4(r30)
    lfs f0, 0x0(r26)
    stfs f0, 0x0(r30)
    lfs f0, 0x4(r26)
    stfs f0, 0x4(r30)
    addi r30, r30, 0x8
    stfs f2, 0x0(r26)
    stfs f2, 0x48(r1)
    stfs f1, 0x4c(r1)
    stfs f1, 0x4(r26)
    b lbl_fn_80539CF0_0000022C
lbl_fn_80539CF0_00000228:
    addi r30, r30, 0x8
lbl_fn_80539CF0_0000022C:
    lwz r12, 0x0(r29)
    mr r3, r30
    mr r4, r25
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80539CF0_00000228
lbl_fn_80539CF0_00000248:
    lwz r12, 0x0(r29)
    subi r26, r26, 0x8
    mr r4, r25
    mr r3, r26
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80539CF0_00000248
    xor r0, r26, r30
    cntlzw r0, r0
    slw r0, r26, r0
    srwi. r0, r0, 31
    beq lbl_fn_80539CF0_000002AC
    lfs f2, 0x0(r30)
    lfs f1, 0x4(r30)
    lfs f0, 0x0(r26)
    stfs f0, 0x0(r30)
    lfs f0, 0x4(r26)
    stfs f0, 0x4(r30)
    addi r30, r30, 0x8
    stfs f2, 0x0(r26)
    stfs f2, 0x40(r1)
    stfs f1, 0x44(r1)
    stfs f1, 0x4(r26)
    b lbl_fn_80539CF0_0000022C
lbl_fn_80539CF0_000002AC:
    lwz r6, 0x0(r27)
    cmplw r30, r6
    bne lbl_fn_80539CF0_00000400
    lfs f2, 0x0(r30)
    lfs f1, 0x4(r30)
    lfs f0, 0x0(r25)
    stfs f0, 0x0(r30)
    lfs f0, 0x4(r25)
    stfs f0, 0x4(r30)
    stfs f2, 0x0(r25)
    stfs f1, 0x4(r25)
    lwz r3, 0x0(r28)
    lwz r12, 0x0(r29)
    subi r26, r3, 0x8
    stfs f2, 0x38(r1)
    lwz r3, 0x0(r27)
    mr r4, r26
    stfs f1, 0x3c(r1)
    mtctr r12
    addi r30, r30, 0x8
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80539CF0_00000368
    b lbl_fn_80539CF0_00000310
lbl_fn_80539CF0_0000030C:
    addi r30, r30, 0x8
lbl_fn_80539CF0_00000310:
    lwz r0, 0x0(r28)
    cmplw r30, r0
    beq lbl_fn_80539CF0_00000338
    lwz r12, 0x0(r29)
    mr r4, r30
    lwz r3, 0x0(r27)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80539CF0_0000030C
lbl_fn_80539CF0_00000338:
    cmplw r30, r26
    bge lbl_fn_80539CF0_00000368
    lfs f2, 0x0(r30)
    lfs f1, 0x4(r30)
    lfs f0, 0x0(r26)
    stfs f0, 0x0(r30)
    lfs f0, 0x4(r26)
    stfs f0, 0x4(r30)
    stfs f2, 0x0(r26)
    stfs f2, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f1, 0x4(r26)
lbl_fn_80539CF0_00000368:
    cmplw r30, r26
    bge lbl_fn_80539CF0_000003F8
    b lbl_fn_80539CF0_00000378
lbl_fn_80539CF0_00000374:
    addi r30, r30, 0x8
lbl_fn_80539CF0_00000378:
    lwz r12, 0x0(r29)
    mr r4, r30
    lwz r3, 0x0(r27)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80539CF0_00000374
lbl_fn_80539CF0_00000394:
    lwz r12, 0x0(r29)
    subi r26, r26, 0x8
    lwz r3, 0x0(r27)
    mr r4, r26
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80539CF0_00000394
    xor r0, r26, r30
    cntlzw r0, r0
    slw r0, r26, r0
    srwi. r0, r0, 31
    beq lbl_fn_80539CF0_000003F8
    lfs f2, 0x0(r30)
    lfs f1, 0x4(r30)
    lfs f0, 0x0(r26)
    stfs f0, 0x0(r30)
    lfs f0, 0x4(r26)
    stfs f0, 0x4(r30)
    addi r30, r30, 0x8
    stfs f2, 0x0(r26)
    stfs f2, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x4(r26)
    b lbl_fn_80539CF0_00000378
lbl_fn_80539CF0_000003F8:
    stw r30, 0x0(r27)
    b lbl_fn_80539CF0_00000028
lbl_fn_80539CF0_00000400:
    subf r0, r6, r30
    lwz r3, 0x0(r28)
    srawi r0, r0, 3
    addze r4, r0
    subf r0, r30, r3
    srawi r0, r0, 3
    addze r0, r0
    cmpw r4, r0
    bge lbl_fn_80539CF0_00000444
    stw r30, 0x10(r1)
    mr r5, r29
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    stw r6, 0x14(r1)
    bl fn_80539CF0
    stw r30, 0x0(r27)
    b lbl_fn_80539CF0_00000028
lbl_fn_80539CF0_00000444:
    stw r3, 0x8(r1)
    mr r5, r29
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    stw r30, 0xc(r1)
    bl fn_80539CF0
    stw r30, 0x0(r28)
    b lbl_fn_80539CF0_00000028
lbl_fn_80539CF0_00000464:
    addi r11, r1, 0x80
    bl _restgpr_25
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8053A16C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    lwz r12, 0x0(r6)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    lwz r3, 0x0(r5)
    lwz r4, 0x0(r27)
    mtctr r12
    bctrl
    lwz r12, 0x0(r30)
    cntlzw r0, r3
    srwi r31, r0, 5
    lwz r3, 0x0(r28)
    lwz r4, 0x0(r29)
    mtctr r12
    bctrl
    cmpwi r31, 0x0
    cntlzw r0, r3
    srwi r0, r0, 5
    beq lbl_fn_8053A16C_000004E8
    cmpwi r0, 0x0
    bne lbl_fn_8053A16C_000005E4
lbl_fn_8053A16C_000004E8:
    cmpwi r31, 0x0
    bne lbl_fn_8053A16C_0000052C
    cmpwi r0, 0x0
    bne lbl_fn_8053A16C_0000052C
    lwz r4, 0x0(r27)
    lwz r3, 0x0(r28)
    lfs f2, 0x0(r4)
    lfs f1, 0x4(r4)
    lfs f0, 0x0(r3)
    stfs f0, 0x0(r4)
    lfs f0, 0x4(r3)
    stfs f0, 0x4(r4)
    stfs f2, 0x0(r3)
    stfs f2, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f1, 0x4(r3)
    b lbl_fn_8053A16C_000005E4
lbl_fn_8053A16C_0000052C:
    lwz r12, 0x0(r30)
    lwz r3, 0x0(r28)
    lwz r4, 0x0(r27)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8053A16C_00000578
    lwz r4, 0x0(r27)
    lwz r3, 0x0(r28)
    lfs f2, 0x0(r4)
    lfs f1, 0x4(r4)
    lfs f0, 0x0(r3)
    stfs f0, 0x0(r4)
    lfs f0, 0x4(r3)
    stfs f0, 0x4(r4)
    stfs f2, 0x0(r3)
    stfs f2, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f1, 0x4(r3)
lbl_fn_8053A16C_00000578:
    cmpwi r31, 0x0
    beq lbl_fn_8053A16C_000005B4
    lwz r4, 0x0(r28)
    lwz r3, 0x0(r29)
    lfs f2, 0x0(r4)
    lfs f1, 0x4(r4)
    lfs f0, 0x0(r3)
    stfs f0, 0x0(r4)
    lfs f0, 0x4(r3)
    stfs f0, 0x4(r4)
    stfs f2, 0x0(r3)
    stfs f2, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x4(r3)
    b lbl_fn_8053A16C_000005E4
lbl_fn_8053A16C_000005B4:
    lwz r4, 0x0(r27)
    lwz r3, 0x0(r29)
    lfs f2, 0x0(r4)
    lfs f1, 0x4(r4)
    lfs f0, 0x0(r3)
    stfs f0, 0x0(r4)
    lfs f0, 0x4(r3)
    stfs f0, 0x4(r4)
    stfs f2, 0x0(r3)
    stfs f2, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f1, 0x4(r3)
lbl_fn_8053A16C_000005E4:
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8053A2EC(void)
{
    nofralloc
    lwz r4, 0x24(r3)
    cmpwi r4, 0x0
    bne lbl_fn_8053A2EC_00000610
    lfs f1, lbl_80887C6C
    blr
lbl_fn_8053A2EC_00000610:
    lwz r6, 0x20(r3)
    lfs f0, 0x0(r6)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8053A2EC_0000062C
    lfs f1, 0x4(r6)
    blr
lbl_fn_8053A2EC_0000062C:
    subi r4, r4, 0x1
    slwi r0, r4, 3
    lfsx f0, r6, r0
    add r5, r6, r0
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8053A2EC_00000650
    lfs f1, 0x4(r5)
    blr
lbl_fn_8053A2EC_00000650:
    li r7, 0x0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_8053A2EC_000006D8
lbl_fn_8053A2EC_00000660:
    addi r0, r7, 0x1
    lwz r4, 0x20(r3)
    slwi r5, r0, 3
    lfsx f0, r4, r5
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8053A2EC_000006D0
    slwi r0, r7, 3
    lfsx f2, r6, r5
    lfsx f4, r6, r0
    add r3, r6, r5
    add r4, r6, r0
    fcmpu cr0, f4, f2
    bne lbl_fn_8053A2EC_000006B0
    lfs f2, 0x4(r4)
    lfs f1, 0x4(r3)
    lfs f0, lbl_80887C7C
    fadds f1, f2, f1
    fmuls f1, f0, f1
    blr
lbl_fn_8053A2EC_000006B0:
    fsubs f3, f1, f4
    lfs f0, 0x4(r3)
    fsubs f2, f2, f4
    lfs f1, 0x4(r4)
    fsubs f0, f0, f1
    fdivs f2, f3, f2
    fmadds f1, f2, f0, f1
    blr
lbl_fn_8053A2EC_000006D0:
    addi r7, r7, 0x1
    bdnz lbl_fn_8053A2EC_00000660
lbl_fn_8053A2EC_000006D8:
    lfs f1, lbl_80887C6C
    blr
}

asm void fn_8053A3D0(void)
{
    nofralloc
    cmpwi r4, 0x0
    li r6, 0x0
    blt lbl_fn_8053A3D0_000006FC
    lwz r0, 0x30(r3)
    cmpw r4, r0
    bge lbl_fn_8053A3D0_000006FC
    li r6, 0x1
lbl_fn_8053A3D0_000006FC:
    cmpwi r6, 0x0
    beq lbl_fn_8053A3D0_00000714
    lwz r3, 0x2c(r3)
    slwi r0, r4, 3
    add r3, r3, r0
    b lbl_fn_8053A3D0_00000718
lbl_fn_8053A3D0_00000714:
    li r3, 0x0
lbl_fn_8053A3D0_00000718:
    stw r5, 0x4(r3)
    blr
}

asm void fn_8053A410(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_8053A410_000007D4
    addic. r4, r3, 0x2c
    beq lbl_fn_8053A410_00000770
    beq lbl_fn_8053A410_00000770
    beq lbl_fn_8053A410_00000770
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8053A410_00000770
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8053A410_00000770:
    addic. r4, r30, 0x20
    beq lbl_fn_8053A410_0000079C
    beq lbl_fn_8053A410_0000079C
    beq lbl_fn_8053A410_0000079C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8053A410_0000079C
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8053A410_0000079C:
    cmpwi r30, 0x0
    beq lbl_fn_8053A410_000007C4
    addic. r0, r30, 0x4
    beq lbl_fn_8053A410_000007C4
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8053A410_000007C4
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_8053A410_000007C4:
    cmpwi r31, 0x0
    ble lbl_fn_8053A410_000007D4
    mr r3, r30
    bl dtor_80084684
lbl_fn_8053A410_000007D4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8053A4E0(void)
{
    nofralloc
    lis r5, lbl_80793BA0@ha
    li r6, 0x0
    addi r5, r5, lbl_80793BA0@l
    li r0, 0x1
    stw r6, 0x4(r3)
    stw r5, 0x0(r3)
    stw r4, 0x8(r3)
    stw r6, 0xc(r3)
    stw r0, 0x10(r3)
    stw r6, 0x14(r3)
    stw r6, 0x18(r3)
    stw r6, 0x1c(r3)
    blr
}

asm void fn_8053A514(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r5, lbl_8075DA28@ha
    li r7, 0x0
    stw r0, 0x74(r1)
    addi r5, r5, lbl_8075DA28@l
    mr r6, r5
    stmw r25, 0x54(r1)
    mr r29, r3
    mr r26, r4
    li r3, 0x40
    li r4, 0x4
    bl fn_80084320
    cmpwi cr1, r3, 0x0
    mr r25, r3
    beq cr1, lbl_fn_8053A514_00000874
    mr r4, r29
    mr r5, r26
    bl fn_8053770C
    mr r25, r3
lbl_fn_8053A514_00000874:
    li r0, 0x0
    stw r25, 0x28(r1)
    li r3, 0x10
    stw r0, 0x2c(r1)
    bl fn_800844D8
    cmpwi cr6, r3, 0x0
    beq cr6, lbl_fn_8053A514_000008AC
    li r0, 0x1
    stw r0, 0x0(r3)
    lis r4, lbl_80793B70@ha
    stw r0, 0x4(r3)
    addi r4, r4, lbl_80793B70@l
    stw r4, 0x8(r3)
    stw r25, 0xc(r3)
lbl_fn_8053A514_000008AC:
    cmpwi cr6, r3, 0x0
    stw r3, 0x2c(r1)
    bne cr6, lbl_fn_8053A514_000008F4
    cmpwi cr1, r25, 0x0
    beq cr1, lbl_fn_8053A514_000008D8
    lwz r12, 0x0(r25)
    mr r3, r25
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8053A514_000008D8:
    lis r3, lbl_80793BC8@ha
    addi r30, r1, 0x20
    addi r3, r3, lbl_80793BC8@l
    stw r3, 0x20(r1)
    mr r3, r30
    bl fn_800DCA6C
    cmpwi cr6, r30, 0x0
lbl_fn_8053A514_000008F4:
    mr r4, r25
    mr r5, r25
    addi r3, r1, 0x2c
    crclr 6
    bl fn_8053AC8C
    lwz r0, 0x18(r29)
    lwz r30, 0x1c(r29)
    cmplw cr6, r0, r30
    bge cr6, lbl_fn_8053A514_00000964
    lwz r3, 0x14(r29)
    slwi r0, r0, 3
    add. r3, r3, r0
    beq lbl_fn_8053A514_00000954
    lwz r0, 0x28(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r3)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_8053A514_00000954
    lwz r0, 0x4(r3)
lbl_fn_8053A514_00000944:
    lwarx r3, r0, r0
    addi r3, r3, 0x1
    stwcx. r3, r0, r0
    bne+ lbl_fn_8053A514_00000944
lbl_fn_8053A514_00000954:
    lwz r3, 0x18(r29)
    addi r0, r3, 0x1
    stw r0, 0x18(r29)
    b lbl_fn_8053A514_00000EA4
lbl_fn_8053A514_00000964:
    lis r3, 0x2000
    li r4, 0x1
    subi r25, r3, 0x1
    stw r4, 0x8(r1)
    subf r0, r30, r25
    cmplw cr6, r4, r0
    ble cr6, lbl_fn_8053A514_000009A4
    lis r4, lbl_8075DA28@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075DA28@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8053A514_000009A4:
    lis r3, 0xaaab
    subi r0, r3, 0x5555
    mulhwu r0, r0, r25
    srwi r0, r0, 1
    cmplw cr6, r30, r0
    bge cr6, lbl_fn_8053A514_000009EC
    addi r5, r30, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r3, r3, r4
    srwi r3, r3, 2
    stw r3, 0x10(r1)
    cmplw cr6, r3, r0
    bge cr6, lbl_fn_8053A514_00000A4C
    b lbl_fn_8053A514_00000A4C
lbl_fn_8053A514_000009EC:
    slwi r0, r0, 1
    cmplw cr6, r30, r0
    bge cr6, lbl_fn_8053A514_00000A4C
    addi r3, r30, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw cr6, r3, r0
    b lbl_fn_8053A514_00000A4C
    beq lbl_fn_8053A514_00000A3C
    lwz r0, 0x28(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r3)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_8053A514_00000A3C
lbl_fn_8053A514_00000A2C:
    lwarx r3, r0, r0
    addi r3, r3, 0x1
    stwcx. r3, r0, r0
    bne+ lbl_fn_8053A514_00000A2C
lbl_fn_8053A514_00000A3C:
    lwz r3, 0x18(r29)
    addi r0, r3, 0x1
    stw r0, 0x18(r29)
    b lbl_fn_8053A514_00000EA4
lbl_fn_8053A514_00000A4C:
    li r0, 0x0
    addi r4, r29, 0x1c
    lis r3, 0x2000
    stw r0, 0x30(r1)
    subi r30, r3, 0x1
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
    lwz r3, 0x18(r29)
    lwz r31, 0x1c(r29)
    addi r0, r3, 0x1
    subf r3, r31, r0
    stw r3, 0x1c(r1)
    subf r0, r31, r30
    cmplw cr6, r3, r0
    ble cr6, lbl_fn_8053A514_00000AB4
    lis r4, lbl_8075DA28@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075DA28@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8053A514_00000AB4:
    lis r3, 0xaaab
    subi r0, r3, 0x5555
    mulhwu r0, r0, r30
    srwi r0, r0, 1
    cmplw cr6, r31, r0
    bge cr6, lbl_fn_8053A514_00000B10
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x1c(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r3, r3, r4
    srwi r3, r3, 2
    stw r3, 0x14(r1)
    cmplw cr6, r3, r0
    bge cr6, lbl_fn_8053A514_00000B00
    addi r3, r1, 0x1c
    b lbl_fn_8053A514_00000B04
lbl_fn_8053A514_00000B00:
    addi r3, r1, 0x14
lbl_fn_8053A514_00000B04:
    lwz r0, 0x0(r3)
    add r30, r31, r0
    b lbl_fn_8053A514_00000B48
lbl_fn_8053A514_00000B10:
    slwi r0, r0, 1
    cmplw cr6, r31, r0
    bge cr6, lbl_fn_8053A514_00000B48
    addi r3, r31, 0x1
    lwz r0, 0x1c(r1)
    srwi r3, r3, 1
    stw r3, 0x18(r1)
    cmplw cr6, r3, r0
    bge cr6, lbl_fn_8053A514_00000B3C
    addi r3, r1, 0x1c
    b lbl_fn_8053A514_00000B40
lbl_fn_8053A514_00000B3C:
    addi r3, r1, 0x18
lbl_fn_8053A514_00000B40:
    lwz r0, 0x0(r3)
    add r30, r31, r0
lbl_fn_8053A514_00000B48:
    lis r3, 0x2000
    subi r0, r3, 0x1
    cmplw cr6, r30, r0
    ble cr6, lbl_fn_8053A514_00000B7C
    lis r4, lbl_8075DA28@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075DA28@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8053A514_00000B7C:
    slwi r3, r30, 3
    bl fn_800844D8
    cmpwi cr6, r3, 0x0
    mr r31, r3
    bne cr6, lbl_fn_8053A514_00000BB0
    lis r3, __files@ha
    lis r4, lbl_80793BF0@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80793BF0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8053A514_00000BB0:
    lwz r0, 0x34(r1)
    stw r31, 0x30(r1)
    slwi r3, r0, 3
    stw r30, 0x38(r1)
    lwz r0, 0x18(r29)
    stw r0, 0x40(r1)
    slwi r0, r0, 3
    add r0, r31, r0
    add. r3, r3, r0
    beq lbl_fn_8053A514_00000C04
    lwz r0, 0x28(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r3)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_8053A514_00000C04
    lwz r0, 0x4(r3)
lbl_fn_8053A514_00000BF4:
    lwarx r3, r0, r0
    addi r3, r3, 0x1
    stwcx. r3, r0, r0
    bne+ lbl_fn_8053A514_00000BF4
lbl_fn_8053A514_00000C04:
    lwz r3, 0x34(r1)
    lwz r0, 0x40(r1)
    addi r3, r3, 0x1
    stw r3, 0x34(r1)
    lwz r3, 0x30(r1)
    slwi r0, r0, 3
    lwz r4, 0x18(r29)
    lwz r5, 0x14(r29)
    add r6, r3, r0
    slwi r0, r4, 3
    add r7, r5, r0
    b lbl_fn_8053A514_00000C84
lbl_fn_8053A514_00000C34:
    subic. r6, r6, 0x8
    subi r7, r7, 0x8
    beq lbl_fn_8053A514_00000C6C
    lwz r0, 0x0(r7)
    stw r0, 0x0(r6)
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_8053A514_00000C6C
    lwz r0, 0x4(r6)
lbl_fn_8053A514_00000C5C:
    lwarx r3, r0, r0
    addi r3, r3, 0x1
    stwcx. r3, r0, r0
    bne+ lbl_fn_8053A514_00000C5C
lbl_fn_8053A514_00000C6C:
    lwz r4, 0x40(r1)
    lwz r3, 0x34(r1)
    subi r0, r4, 0x1
    stw r0, 0x40(r1)
    addi r0, r3, 0x1
    stw r0, 0x34(r1)
lbl_fn_8053A514_00000C84:
    cmplw cr1, r5, r7
    blt cr1, lbl_fn_8053A514_00000C34
    lwz r3, 0x1c(r29)
    addic. r30, r1, 0x30
    lwz r0, 0x38(r1)
    stw r0, 0x1c(r29)
    stw r3, 0x38(r1)
    lwz r0, 0x30(r1)
    lwz r3, 0x14(r29)
    stw r0, 0x14(r29)
    stw r3, 0x30(r1)
    lwz r0, 0x34(r1)
    lwz r4, 0x18(r29)
    stw r0, 0x18(r29)
    stw r4, 0x34(r1)
    beq lbl_fn_8053A514_00000EA4
    lwz r3, 0x40(r1)
    slwi r0, r4, 3
    lwz r4, 0x30(r1)
    li r31, -0x1
    slwi r3, r3, 3
    add r28, r4, r3
    add r27, r28, r0
    b lbl_fn_8053A514_00000D8C
lbl_fn_8053A514_00000CE4:
    subic. r27, r27, 0x8
    beq lbl_fn_8053A514_00000D8C
    addic. r26, r27, 0x4
    beq lbl_fn_8053A514_00000D7C
    lwz r25, 0x0(r26)
    cmpwi cr1, r25, 0x0
    beq cr1, lbl_fn_8053A514_00000D6C
    sync
lbl_fn_8053A514_00000D04:
    lwarx r3, r0, r25
    subi r3, r3, 0x1
    stwcx. r3, r0, r25
    bne+ lbl_fn_8053A514_00000D04
    isync
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8053A514_00000D6C
    lwz r12, 0x8(r25)
    mr r3, r25
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r25
    addi r0, r25, 0x4
    sync
lbl_fn_8053A514_00000D40:
    lwarx r4, r0, r0
    subi r4, r4, 0x1
    stwcx. r4, r0, r0
    bne+ lbl_fn_8053A514_00000D40
    isync
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_fn_8053A514_00000D6C
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_8053A514_00000D6C:
    cmpwi cr1, r31, 0x0
    ble cr1, lbl_fn_8053A514_00000D7C
    mr r3, r26
    bl dtor_80084684
lbl_fn_8053A514_00000D7C:
    cmpwi cr1, r31, 0x0
    ble cr1, lbl_fn_8053A514_00000D8C
    mr r3, r27
    bl dtor_80084684
lbl_fn_8053A514_00000D8C:
    cmplw cr1, r27, r28
    bgt cr1, lbl_fn_8053A514_00000CE4
    cmpwi cr1, r30, 0x0
    li r0, 0x0
    stw r0, 0x34(r1)
    beq cr1, lbl_fn_8053A514_00000E90
    lwz r25, 0x30(r1)
    cmpwi cr1, r25, 0x0
    beq cr1, lbl_fn_8053A514_00000E7C
    li r28, 0x0
    stw r28, 0x34(r1)
    li r31, -0x1
    b lbl_fn_8053A514_00000E6C
lbl_fn_8053A514_00000DC0:
    subic. r25, r25, 0x8
    beq lbl_fn_8053A514_00000E68
    addic. r26, r25, 0x4
    beq lbl_fn_8053A514_00000E58
    lwz r27, 0x0(r26)
    cmpwi cr1, r27, 0x0
    beq cr1, lbl_fn_8053A514_00000E48
    sync
lbl_fn_8053A514_00000DE0:
    lwarx r3, r0, r27
    subi r3, r3, 0x1
    stwcx. r3, r0, r27
    bne+ lbl_fn_8053A514_00000DE0
    isync
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8053A514_00000E48
    lwz r12, 0x8(r27)
    mr r3, r27
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r27
    addi r0, r27, 0x4
    sync
lbl_fn_8053A514_00000E1C:
    lwarx r4, r0, r0
    subi r4, r4, 0x1
    stwcx. r4, r0, r0
    bne+ lbl_fn_8053A514_00000E1C
    isync
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_fn_8053A514_00000E48
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_8053A514_00000E48:
    cmpwi cr1, r31, 0x0
    ble cr1, lbl_fn_8053A514_00000E58
    mr r3, r26
    bl dtor_80084684
lbl_fn_8053A514_00000E58:
    cmpwi cr1, r31, 0x0
    ble cr1, lbl_fn_8053A514_00000E68
    mr r3, r25
    bl dtor_80084684
lbl_fn_8053A514_00000E68:
    subi r28, r28, 0x1
lbl_fn_8053A514_00000E6C:
    cmpwi cr1, r28, 0x0
    bne cr1, lbl_fn_8053A514_00000DC0
    lwz r3, 0x0(r30)
    bl dtor_80084684
lbl_fn_8053A514_00000E7C:
    li r0, 0x0
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053A514_00000E90
    mr r3, r30
    bl dtor_80084684
lbl_fn_8053A514_00000E90:
    li r0, -0x1
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053A514_00000EA4
    mr r3, r30
    bl dtor_80084684
lbl_fn_8053A514_00000EA4:
    addic. r25, r1, 0x28
    beq lbl_fn_8053A514_00000F54
    addic. r27, r25, 0x4
    beq lbl_fn_8053A514_00000F40
    lwz r26, 0x0(r27)
    cmpwi cr1, r26, 0x0
    beq cr1, lbl_fn_8053A514_00000F2C
    sync
lbl_fn_8053A514_00000EC4:
    lwarx r3, r0, r26
    subi r3, r3, 0x1
    stwcx. r3, r0, r26
    bne+ lbl_fn_8053A514_00000EC4
    isync
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8053A514_00000F2C
    lwz r12, 0x8(r26)
    mr r3, r26
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r26
    addi r0, r26, 0x4
    sync
lbl_fn_8053A514_00000F00:
    lwarx r4, r0, r0
    subi r4, r4, 0x1
    stwcx. r4, r0, r0
    bne+ lbl_fn_8053A514_00000F00
    isync
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_fn_8053A514_00000F2C
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_8053A514_00000F2C:
    li r0, -0x1
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053A514_00000F40
    mr r3, r27
    bl dtor_80084684
lbl_fn_8053A514_00000F40:
    li r0, -0x1
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053A514_00000F54
    mr r3, r25
    bl dtor_80084684
lbl_fn_8053A514_00000F54:
    lwz r3, 0x18(r29)
    lwz r4, 0x14(r29)
    lmw r25, 0x54(r1)
    subi r0, r3, 0x1
    slwi r0, r0, 3
    lwzx r3, r4, r0
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8053AC6C(void)
{
    nofralloc
    cmpwi r3, 0x0
    beqlr
    lwz r12, 0x8(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctr
    blr
}

asm void fn_8053AC8C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    bne cr1, lbl_fn_8053AC8C_00000FC4
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_8053AC8C_00000FC4:
    stw r3, 0x8(r1)
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    addi r1, r1, 0x70
    blr
}

asm void fn_8053ACDC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8053ACDC_00001014
    cmpwi r4, 0x0
    ble lbl_fn_8053ACDC_00001014
    bl dtor_80084684
lbl_fn_8053ACDC_00001014:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8053AD1C(void)
{
    nofralloc
    lis r3, lbl_80793C0C@ha
    addi r3, r3, lbl_80793C0C@l
    blr
}

asm void fn_8053AD28(void)
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

asm void fn_8053AD4C(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8053AD54(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi cr1, r3, 0x0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r30, r3
    mr r31, r4
    beq cr1, lbl_fn_8053AD54_000011F0
    addi r24, r3, 0x14
    cmpwi cr1, r24, 0x0
    beq cr1, lbl_fn_8053AD54_000011B8
    beq cr1, lbl_fn_8053AD54_000011A4
    beq cr1, lbl_fn_8053AD54_00001190
    lwz r4, 0x0(r24)
    cmpwi cr1, r4, 0x0
    beq cr1, lbl_fn_8053AD54_0000117C
    lwz r25, 0x4(r24)
    li r29, -0x1
    slwi r3, r25, 3
    subf r0, r25, r25
    stw r0, 0x4(r24)
    add r26, r4, r3
    b lbl_fn_8053AD54_0000116C
lbl_fn_8053AD54_000010C0:
    subic. r26, r26, 0x8
    beq lbl_fn_8053AD54_00001168
    addic. r28, r26, 0x4
    beq lbl_fn_8053AD54_00001158
    lwz r27, 0x0(r28)
    cmpwi cr1, r27, 0x0
    beq cr1, lbl_fn_8053AD54_00001148
    sync
lbl_fn_8053AD54_000010E0:
    lwarx r3, r0, r27
    subi r3, r3, 0x1
    stwcx. r3, r0, r27
    bne+ lbl_fn_8053AD54_000010E0
    isync
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8053AD54_00001148
    lwz r12, 0x8(r27)
    mr r3, r27
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r27
    addi r0, r27, 0x4
    sync
lbl_fn_8053AD54_0000111C:
    lwarx r4, r0, r0
    subi r4, r4, 0x1
    stwcx. r4, r0, r0
    bne+ lbl_fn_8053AD54_0000111C
    isync
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_fn_8053AD54_00001148
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_8053AD54_00001148:
    cmpwi cr1, r29, 0x0
    ble cr1, lbl_fn_8053AD54_00001158
    mr r3, r28
    bl dtor_80084684
lbl_fn_8053AD54_00001158:
    cmpwi cr1, r29, 0x0
    ble cr1, lbl_fn_8053AD54_00001168
    mr r3, r26
    bl dtor_80084684
lbl_fn_8053AD54_00001168:
    subi r25, r25, 0x1
lbl_fn_8053AD54_0000116C:
    cmpwi cr1, r25, 0x0
    bne cr1, lbl_fn_8053AD54_000010C0
    lwz r3, 0x0(r24)
    bl dtor_80084684
lbl_fn_8053AD54_0000117C:
    li r0, 0x0
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053AD54_00001190
    mr r3, r24
    bl dtor_80084684
lbl_fn_8053AD54_00001190:
    li r0, 0x0
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053AD54_000011A4
    mr r3, r24
    bl dtor_80084684
lbl_fn_8053AD54_000011A4:
    li r0, -0x1
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053AD54_000011B8
    mr r3, r24
    bl dtor_80084684
lbl_fn_8053AD54_000011B8:
    cmpwi cr1, r30, 0x0
    beq cr1, lbl_fn_8053AD54_000011E0
    addic. r0, r30, 0x4
    beq lbl_fn_8053AD54_000011E0
    lwz r3, 0x4(r30)
    cmpwi cr1, r3, 0x0
    beq cr1, lbl_fn_8053AD54_000011E0
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_8053AD54_000011E0:
    cmpwi cr1, r31, 0x0
    ble cr1, lbl_fn_8053AD54_000011F0
    mr r3, r30
    bl dtor_80084684
lbl_fn_8053AD54_000011F0:
    mr r3, r30
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8053AEF8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8053AEF8_00001230
    cmpwi r4, 0x0
    ble lbl_fn_8053AEF8_00001230
    bl dtor_80084684
lbl_fn_8053AEF8_00001230:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8053AF38(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lis r29, lbl_8075DA28@ha
    addi r29, r29, lbl_8075DA28@l
    addi r3, r29, 0x4d
    bl fn_800DC880
    lis r30, lbl_80793B28@ha
    li r4, 0x0
    addi r30, r30, lbl_80793B28@l
    stw r3, 0x4(r30)
    addi r3, r29, 0x52
    stw r29, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    li r31, 0x0
    addi r3, r29, 0x57
    li r4, 0x0
    stw r31, 0x24(r30)
    bl fn_800DC880
    stw r31, 0x3c(r30)
    lwz r31, 0x1c(r1)
    stw r3, 0x34(r30)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8053AFBC(void)
{
    nofralloc
    lis r7, lbl_80793D98@ha
    li r8, 0x0
    addi r7, r7, lbl_80793D98@l
    li r6, 0x1
    li r0, -0x1
    stw r8, 0x4(r3)
    stw r7, 0x0(r3)
    stw r4, 0x8(r3)
    stw r8, 0x10(r3)
    stw r6, 0x14(r3)
    stw r8, 0x18(r3)
    stw r8, 0x1c(r3)
    stw r8, 0x20(r3)
    stw r8, 0x24(r3)
    stw r0, 0x28(r3)
    stw r8, 0x2c(r3)
    stw r8, 0x30(r3)
    stw r8, 0x34(r3)
    stw r8, 0x38(r3)
    stw r8, 0x3c(r3)
    stw r8, 0x40(r3)
    stw r8, 0x44(r3)
    stb r8, 0x48(r3)
    stb r8, 0x49(r3)
    stb r8, 0x4a(r3)
    stb r8, 0x4b(r3)
    stw r5, 0xc(r3)
    blr
}

asm void fn_8053B02C(void)
{
    nofralloc
    lwz r3, 0x28(r3)
    blr
}

asm void fn_8053B034(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    cmpwi cr1, r4, -0x1
    stw r0, 0x74(r1)
    stmw r25, 0x54(r1)
    mr r29, r3
    mr r26, r4
    lwz r5, 0x8(r3)
    bne cr1, lbl_fn_8053B034_00001378
    lwz r3, 0x1a8(r5)
    addi r26, r3, 0x1
    stw r26, 0x1a8(r5)
    b lbl_fn_8053B034_00001388
lbl_fn_8053B034_00001378:
    lwz r0, 0x1a8(r5)
    cmpw cr1, r4, r0
    ble cr1, lbl_fn_8053B034_00001388
    stw r4, 0x1a8(r5)
lbl_fn_8053B034_00001388:
    lis r5, lbl_8075DC04@ha
    li r3, 0x14
    addi r5, r5, lbl_8075DC04@l
    li r4, 0x4
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi cr1, r3, 0x0
    mr r25, r3
    beq cr1, lbl_fn_8053B034_000013C0
    mr r4, r29
    mr r5, r26
    bl fn_8053C6A8
    mr r25, r3
lbl_fn_8053B034_000013C0:
    li r0, 0x0
    stw r25, 0x28(r1)
    li r3, 0x10
    stw r0, 0x2c(r1)
    bl fn_800844D8
    cmpwi cr6, r3, 0x0
    beq cr6, lbl_fn_8053B034_000013F8
    li r0, 0x1
    stw r0, 0x0(r3)
    lis r4, lbl_80793D68@ha
    stw r0, 0x4(r3)
    addi r4, r4, lbl_80793D68@l
    stw r4, 0x8(r3)
    stw r25, 0xc(r3)
lbl_fn_8053B034_000013F8:
    cmpwi cr6, r3, 0x0
    stw r3, 0x2c(r1)
    bne cr6, lbl_fn_8053B034_00001440
    cmpwi cr1, r25, 0x0
    beq cr1, lbl_fn_8053B034_00001424
    lwz r12, 0x0(r25)
    mr r3, r25
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8053B034_00001424:
    lis r3, lbl_80793BC8@ha
    addi r30, r1, 0x20
    addi r3, r3, lbl_80793BC8@l
    stw r3, 0x20(r1)
    mr r3, r30
    bl fn_800DCA6C
    cmpwi cr6, r30, 0x0
lbl_fn_8053B034_00001440:
    mr r4, r25
    mr r5, r25
    addi r3, r1, 0x2c
    crclr 6
    bl fn_8053AC8C
    lwz r0, 0x34(r29)
    lwz r30, 0x38(r29)
    cmplw cr6, r0, r30
    bge cr6, lbl_fn_8053B034_000014B0
    lwz r3, 0x30(r29)
    slwi r0, r0, 3
    add. r3, r3, r0
    beq lbl_fn_8053B034_000014A0
    lwz r0, 0x28(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r3)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_8053B034_000014A0
    lwz r0, 0x4(r3)
lbl_fn_8053B034_00001490:
    lwarx r3, r0, r0
    addi r3, r3, 0x1
    stwcx. r3, r0, r0
    bne+ lbl_fn_8053B034_00001490
lbl_fn_8053B034_000014A0:
    lwz r3, 0x34(r29)
    addi r0, r3, 0x1
    stw r0, 0x34(r29)
    b lbl_fn_8053B034_000019F0
lbl_fn_8053B034_000014B0:
    lis r3, 0x2000
    li r4, 0x1
    subi r25, r3, 0x1
    stw r4, 0x8(r1)
    subf r0, r30, r25
    cmplw cr6, r4, r0
    ble cr6, lbl_fn_8053B034_000014F0
    lis r4, lbl_8075DC04@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075DC04@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8053B034_000014F0:
    lis r3, 0xaaab
    subi r0, r3, 0x5555
    mulhwu r0, r0, r25
    srwi r0, r0, 1
    cmplw cr6, r30, r0
    bge cr6, lbl_fn_8053B034_00001538
    addi r5, r30, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r3, r3, r4
    srwi r3, r3, 2
    stw r3, 0x10(r1)
    cmplw cr6, r3, r0
    bge cr6, lbl_fn_8053B034_00001598
    b lbl_fn_8053B034_00001598
lbl_fn_8053B034_00001538:
    slwi r0, r0, 1
    cmplw cr6, r30, r0
    bge cr6, lbl_fn_8053B034_00001598
    addi r3, r30, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw cr6, r3, r0
    b lbl_fn_8053B034_00001598
    beq lbl_fn_8053B034_00001588
    lwz r0, 0x28(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r3)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_8053B034_00001588
lbl_fn_8053B034_00001578:
    lwarx r3, r0, r0
    addi r3, r3, 0x1
    stwcx. r3, r0, r0
    bne+ lbl_fn_8053B034_00001578
lbl_fn_8053B034_00001588:
    lwz r3, 0x34(r29)
    addi r0, r3, 0x1
    stw r0, 0x34(r29)
    b lbl_fn_8053B034_000019F0
lbl_fn_8053B034_00001598:
    li r0, 0x0
    addi r4, r29, 0x38
    lis r3, 0x2000
    stw r0, 0x30(r1)
    subi r30, r3, 0x1
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
    lwz r3, 0x34(r29)
    lwz r31, 0x38(r29)
    addi r0, r3, 0x1
    subf r3, r31, r0
    stw r3, 0x1c(r1)
    subf r0, r31, r30
    cmplw cr6, r3, r0
    ble cr6, lbl_fn_8053B034_00001600
    lis r4, lbl_8075DC04@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075DC04@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8053B034_00001600:
    lis r3, 0xaaab
    subi r0, r3, 0x5555
    mulhwu r0, r0, r30
    srwi r0, r0, 1
    cmplw cr6, r31, r0
    bge cr6, lbl_fn_8053B034_0000165C
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x1c(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r3, r3, r4
    srwi r3, r3, 2
    stw r3, 0x14(r1)
    cmplw cr6, r3, r0
    bge cr6, lbl_fn_8053B034_0000164C
    addi r3, r1, 0x1c
    b lbl_fn_8053B034_00001650
lbl_fn_8053B034_0000164C:
    addi r3, r1, 0x14
lbl_fn_8053B034_00001650:
    lwz r0, 0x0(r3)
    add r30, r31, r0
    b lbl_fn_8053B034_00001694
lbl_fn_8053B034_0000165C:
    slwi r0, r0, 1
    cmplw cr6, r31, r0
    bge cr6, lbl_fn_8053B034_00001694
    addi r3, r31, 0x1
    lwz r0, 0x1c(r1)
    srwi r3, r3, 1
    stw r3, 0x18(r1)
    cmplw cr6, r3, r0
    bge cr6, lbl_fn_8053B034_00001688
    addi r3, r1, 0x1c
    b lbl_fn_8053B034_0000168C
lbl_fn_8053B034_00001688:
    addi r3, r1, 0x18
lbl_fn_8053B034_0000168C:
    lwz r0, 0x0(r3)
    add r30, r31, r0
lbl_fn_8053B034_00001694:
    lis r3, 0x2000
    subi r0, r3, 0x1
    cmplw cr6, r30, r0
    ble cr6, lbl_fn_8053B034_000016C8
    lis r4, lbl_8075DC04@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075DC04@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8053B034_000016C8:
    slwi r3, r30, 3
    bl fn_800844D8
    cmpwi cr6, r3, 0x0
    mr r31, r3
    bne cr6, lbl_fn_8053B034_000016FC
    lis r3, __files@ha
    lis r4, lbl_80793DB8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80793DB8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8053B034_000016FC:
    lwz r0, 0x34(r1)
    stw r31, 0x30(r1)
    slwi r3, r0, 3
    stw r30, 0x38(r1)
    lwz r0, 0x34(r29)
    stw r0, 0x40(r1)
    slwi r0, r0, 3
    add r0, r31, r0
    add. r3, r3, r0
    beq lbl_fn_8053B034_00001750
    lwz r0, 0x28(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r3)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_8053B034_00001750
    lwz r0, 0x4(r3)
lbl_fn_8053B034_00001740:
    lwarx r3, r0, r0
    addi r3, r3, 0x1
    stwcx. r3, r0, r0
    bne+ lbl_fn_8053B034_00001740
lbl_fn_8053B034_00001750:
    lwz r3, 0x34(r1)
    lwz r0, 0x40(r1)
    addi r3, r3, 0x1
    stw r3, 0x34(r1)
    lwz r3, 0x30(r1)
    slwi r0, r0, 3
    lwz r4, 0x34(r29)
    lwz r5, 0x30(r29)
    add r6, r3, r0
    slwi r0, r4, 3
    add r7, r5, r0
    b lbl_fn_8053B034_000017D0
lbl_fn_8053B034_00001780:
    subic. r6, r6, 0x8
    subi r7, r7, 0x8
    beq lbl_fn_8053B034_000017B8
    lwz r0, 0x0(r7)
    stw r0, 0x0(r6)
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_8053B034_000017B8
    lwz r0, 0x4(r6)
lbl_fn_8053B034_000017A8:
    lwarx r3, r0, r0
    addi r3, r3, 0x1
    stwcx. r3, r0, r0
    bne+ lbl_fn_8053B034_000017A8
lbl_fn_8053B034_000017B8:
    lwz r4, 0x40(r1)
    lwz r3, 0x34(r1)
    subi r0, r4, 0x1
    stw r0, 0x40(r1)
    addi r0, r3, 0x1
    stw r0, 0x34(r1)
lbl_fn_8053B034_000017D0:
    cmplw cr1, r5, r7
    blt cr1, lbl_fn_8053B034_00001780
    lwz r3, 0x38(r29)
    addic. r30, r1, 0x30
    lwz r0, 0x38(r1)
    stw r0, 0x38(r29)
    stw r3, 0x38(r1)
    lwz r0, 0x30(r1)
    lwz r3, 0x30(r29)
    stw r0, 0x30(r29)
    stw r3, 0x30(r1)
    lwz r0, 0x34(r1)
    lwz r4, 0x34(r29)
    stw r0, 0x34(r29)
    stw r4, 0x34(r1)
    beq lbl_fn_8053B034_000019F0
    lwz r3, 0x40(r1)
    slwi r0, r4, 3
    lwz r4, 0x30(r1)
    li r31, -0x1
    slwi r3, r3, 3
    add r28, r4, r3
    add r27, r28, r0
    b lbl_fn_8053B034_000018D8
lbl_fn_8053B034_00001830:
    subic. r27, r27, 0x8
    beq lbl_fn_8053B034_000018D8
    addic. r26, r27, 0x4
    beq lbl_fn_8053B034_000018C8
    lwz r25, 0x0(r26)
    cmpwi cr1, r25, 0x0
    beq cr1, lbl_fn_8053B034_000018B8
    sync
lbl_fn_8053B034_00001850:
    lwarx r3, r0, r25
    subi r3, r3, 0x1
    stwcx. r3, r0, r25
    bne+ lbl_fn_8053B034_00001850
    isync
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8053B034_000018B8
    lwz r12, 0x8(r25)
    mr r3, r25
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r25
    addi r0, r25, 0x4
    sync
lbl_fn_8053B034_0000188C:
    lwarx r4, r0, r0
    subi r4, r4, 0x1
    stwcx. r4, r0, r0
    bne+ lbl_fn_8053B034_0000188C
    isync
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_fn_8053B034_000018B8
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_8053B034_000018B8:
    cmpwi cr1, r31, 0x0
    ble cr1, lbl_fn_8053B034_000018C8
    mr r3, r26
    bl dtor_80084684
lbl_fn_8053B034_000018C8:
    cmpwi cr1, r31, 0x0
    ble cr1, lbl_fn_8053B034_000018D8
    mr r3, r27
    bl dtor_80084684
lbl_fn_8053B034_000018D8:
    cmplw cr1, r27, r28
    bgt cr1, lbl_fn_8053B034_00001830
    cmpwi cr1, r30, 0x0
    li r0, 0x0
    stw r0, 0x34(r1)
    beq cr1, lbl_fn_8053B034_000019DC
    lwz r25, 0x30(r1)
    cmpwi cr1, r25, 0x0
    beq cr1, lbl_fn_8053B034_000019C8
    li r28, 0x0
    stw r28, 0x34(r1)
    li r31, -0x1
    b lbl_fn_8053B034_000019B8
lbl_fn_8053B034_0000190C:
    subic. r25, r25, 0x8
    beq lbl_fn_8053B034_000019B4
    addic. r26, r25, 0x4
    beq lbl_fn_8053B034_000019A4
    lwz r27, 0x0(r26)
    cmpwi cr1, r27, 0x0
    beq cr1, lbl_fn_8053B034_00001994
    sync
lbl_fn_8053B034_0000192C:
    lwarx r3, r0, r27
    subi r3, r3, 0x1
    stwcx. r3, r0, r27
    bne+ lbl_fn_8053B034_0000192C
    isync
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8053B034_00001994
    lwz r12, 0x8(r27)
    mr r3, r27
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r27
    addi r0, r27, 0x4
    sync
lbl_fn_8053B034_00001968:
    lwarx r4, r0, r0
    subi r4, r4, 0x1
    stwcx. r4, r0, r0
    bne+ lbl_fn_8053B034_00001968
    isync
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_fn_8053B034_00001994
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_8053B034_00001994:
    cmpwi cr1, r31, 0x0
    ble cr1, lbl_fn_8053B034_000019A4
    mr r3, r26
    bl dtor_80084684
lbl_fn_8053B034_000019A4:
    cmpwi cr1, r31, 0x0
    ble cr1, lbl_fn_8053B034_000019B4
    mr r3, r25
    bl dtor_80084684
lbl_fn_8053B034_000019B4:
    subi r28, r28, 0x1
lbl_fn_8053B034_000019B8:
    cmpwi cr1, r28, 0x0
    bne cr1, lbl_fn_8053B034_0000190C
    lwz r3, 0x0(r30)
    bl dtor_80084684
lbl_fn_8053B034_000019C8:
    li r0, 0x0
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053B034_000019DC
    mr r3, r30
    bl dtor_80084684
lbl_fn_8053B034_000019DC:
    li r0, -0x1
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053B034_000019F0
    mr r3, r30
    bl dtor_80084684
lbl_fn_8053B034_000019F0:
    addic. r25, r1, 0x28
    beq lbl_fn_8053B034_00001AA0
    addic. r27, r25, 0x4
    beq lbl_fn_8053B034_00001A8C
    lwz r26, 0x0(r27)
    cmpwi cr1, r26, 0x0
    beq cr1, lbl_fn_8053B034_00001A78
    sync
lbl_fn_8053B034_00001A10:
    lwarx r3, r0, r26
    subi r3, r3, 0x1
    stwcx. r3, r0, r26
    bne+ lbl_fn_8053B034_00001A10
    isync
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8053B034_00001A78
    lwz r12, 0x8(r26)
    mr r3, r26
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r26
    addi r0, r26, 0x4
    sync
lbl_fn_8053B034_00001A4C:
    lwarx r4, r0, r0
    subi r4, r4, 0x1
    stwcx. r4, r0, r0
    bne+ lbl_fn_8053B034_00001A4C
    isync
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_fn_8053B034_00001A78
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_8053B034_00001A78:
    li r0, -0x1
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053B034_00001A8C
    mr r3, r27
    bl dtor_80084684
lbl_fn_8053B034_00001A8C:
    li r0, -0x1
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053B034_00001AA0
    mr r3, r25
    bl dtor_80084684
lbl_fn_8053B034_00001AA0:
    lwz r3, 0x34(r29)
    lwz r4, 0x30(r29)
    lmw r25, 0x54(r1)
    subi r0, r3, 0x1
    slwi r0, r0, 3
    lwzx r3, r4, r0
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
