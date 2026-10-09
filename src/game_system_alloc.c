#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_8005E3E4(void);
extern void fn_8005E838(void);
extern void fn_8005EEA0(void);
extern void fn_8005F36C(void);
extern void fn_8005F90C(void);
extern void fn_8005FD80(void);
extern void fn_800602E8(void);
extern void fn_800607C0(void);
extern void fn_800D59B8(void);
extern void fn_801ED928(void);
extern void fn_801EDC78(void);
extern void fn_801F9E70(void);
extern void fn_80695D84(void);

/* External data declarations */

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_80882CA0;
extern u32 lbl_80882CA4;
extern u32 lbl_80882CA8;
extern u32 lbl_80882CAC;
extern u32 lbl_80882CB0;
extern u32 lbl_80882CB4;

/* Function declarations */
void fn_801F9FB0(void);

asm void fn_801F9FB0(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_27
    mr r31, r3
    bl fn_801EDC78
    cmpwi r3, 0x0
    beq lbl_fn_801F9FB0_00003568
    addi r3, r31, 0x194
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_801F9FB0_00003568
    lwz r0, 0x10(r31)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_801F9FB0_00000054
    addi r3, r31, 0x1c4
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_801F9FB0_00003568
lbl_fn_801F9FB0_00000054:
    lfs f0, lbl_80882CA0
    li r0, 0x0
    stfs f0, 0x88(r1)
    mr r3, r31
    addi r4, r1, 0x88
    addi r5, r1, 0x60
    stfs f0, 0x8c(r1)
    addi r6, r1, 0x28
    addi r7, r1, 0x70
    stfs f0, 0x90(r1)
    stfs f0, 0x94(r1)
    stfs f0, 0x98(r1)
    stfs f0, 0x28(r1)
    stw r0, 0x2c(r1)
    bl fn_801ED928
    mr r3, r31
    addi r4, r1, 0x50
    addi r5, r1, 0x40
    bl fn_801F9E70
    lfs f3, 0x78(r1)
    lfs f2, 0x7c(r1)
    lfs f1, 0x80(r1)
    lfs f0, 0x84(r1)
    stfs f3, 0x30(r1)
    stfs f2, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f0, 0x3c(r1)
    lwz r3, 0xfc(r31)
    lwz r12, 0xa4(r3)
    cmpwi r12, 0x0
    beq lbl_fn_801F9FB0_00000108
    lhz r0, 0xe(r31)
    cmpwi r0, 0x0
    bne lbl_fn_801F9FB0_000000F4
    mr r3, r31
    addi r4, r1, 0x60
    li r5, 0x0
    mtctr r12
    bctrl
    b lbl_fn_801F9FB0_00000108
lbl_fn_801F9FB0_000000F4:
    mr r3, r31
    addi r4, r1, 0x60
    addi r5, r1, 0x30
    mtctr r12
    bctrl
lbl_fn_801F9FB0_00000108:
    lfs f4, 0x6c(r1)
    lfs f3, lbl_80882CA0
    fcmpo cr0, f4, f3
    cror eq, lt, eq
    beq lbl_fn_801F9FB0_00003568
    lfs f1, 0x3c(r1)
    lfs f2, 0x60(r1)
    lfs f0, lbl_80882CA4
    fmuls f1, f1, f4
    fcmpo cr0, f2, f0
    stfs f1, 0x3c(r1)
    cror eq, gt, eq
    bne lbl_fn_801F9FB0_00000144
    li r30, 0xff
    b lbl_fn_801F9FB0_0000016C
lbl_fn_801F9FB0_00000144:
    fcmpo cr0, f2, f3
    cror eq, lt, eq
    bne lbl_fn_801F9FB0_00000158
    li r3, 0x0
    b lbl_fn_801F9FB0_00000168
lbl_fn_801F9FB0_00000158:
    lfs f1, lbl_80882CAC
    lfs f0, lbl_80882CA8
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801F9FB0_00000168:
    mr r30, r3
lbl_fn_801F9FB0_0000016C:
    lfs f2, 0x64(r1)
    lfs f0, lbl_80882CA4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_801F9FB0_00000188
    li r29, 0xff
    b lbl_fn_801F9FB0_000001B4
lbl_fn_801F9FB0_00000188:
    lfs f0, lbl_80882CA0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801F9FB0_000001A0
    li r3, 0x0
    b lbl_fn_801F9FB0_000001B0
lbl_fn_801F9FB0_000001A0:
    lfs f1, lbl_80882CAC
    lfs f0, lbl_80882CA8
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801F9FB0_000001B0:
    mr r29, r3
lbl_fn_801F9FB0_000001B4:
    lfs f2, 0x68(r1)
    lfs f0, lbl_80882CA4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_801F9FB0_000001D0
    li r28, 0xff
    b lbl_fn_801F9FB0_000001FC
lbl_fn_801F9FB0_000001D0:
    lfs f0, lbl_80882CA0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801F9FB0_000001E8
    li r3, 0x0
    b lbl_fn_801F9FB0_000001F8
lbl_fn_801F9FB0_000001E8:
    lfs f1, lbl_80882CAC
    lfs f0, lbl_80882CA8
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801F9FB0_000001F8:
    mr r28, r3
lbl_fn_801F9FB0_000001FC:
    lfs f2, 0x6c(r1)
    lfs f0, lbl_80882CA4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_801F9FB0_00000218
    li r3, 0xff
    b lbl_fn_801F9FB0_00000240
lbl_fn_801F9FB0_00000218:
    lfs f0, lbl_80882CA0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801F9FB0_00000230
    li r3, 0x0
    b lbl_fn_801F9FB0_00000240
lbl_fn_801F9FB0_00000230:
    lfs f1, lbl_80882CAC
    lfs f0, lbl_80882CA8
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801F9FB0_00000240:
    lfs f2, 0x30(r1)
    slwi r3, r3, 24
    lfs f0, lbl_80882CA4
    slwi r0, r30, 16
    or r3, r3, r0
    slwi r0, r29, 8
    fcmpo cr0, f2, f0
    or r0, r0, r3
    or r27, r28, r0
    cror eq, gt, eq
    bne lbl_fn_801F9FB0_00000274
    li r28, 0xff
    b lbl_fn_801F9FB0_000002A0
lbl_fn_801F9FB0_00000274:
    lfs f0, lbl_80882CA0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801F9FB0_0000028C
    li r3, 0x0
    b lbl_fn_801F9FB0_0000029C
lbl_fn_801F9FB0_0000028C:
    lfs f1, lbl_80882CAC
    lfs f0, lbl_80882CA8
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801F9FB0_0000029C:
    mr r28, r3
lbl_fn_801F9FB0_000002A0:
    lfs f2, 0x34(r1)
    lfs f0, lbl_80882CA4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_801F9FB0_000002BC
    li r29, 0xff
    b lbl_fn_801F9FB0_000002E8
lbl_fn_801F9FB0_000002BC:
    lfs f0, lbl_80882CA0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801F9FB0_000002D4
    li r3, 0x0
    b lbl_fn_801F9FB0_000002E4
lbl_fn_801F9FB0_000002D4:
    lfs f1, lbl_80882CAC
    lfs f0, lbl_80882CA8
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801F9FB0_000002E4:
    mr r29, r3
lbl_fn_801F9FB0_000002E8:
    lfs f2, 0x38(r1)
    lfs f0, lbl_80882CA4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_801F9FB0_00000304
    li r30, 0xff
    b lbl_fn_801F9FB0_00000330
lbl_fn_801F9FB0_00000304:
    lfs f0, lbl_80882CA0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801F9FB0_0000031C
    li r3, 0x0
    b lbl_fn_801F9FB0_0000032C
lbl_fn_801F9FB0_0000031C:
    lfs f1, lbl_80882CAC
    lfs f0, lbl_80882CA8
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801F9FB0_0000032C:
    mr r30, r3
lbl_fn_801F9FB0_00000330:
    lfs f2, 0x3c(r1)
    lfs f0, lbl_80882CA4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_801F9FB0_0000034C
    li r3, 0xff
    b lbl_fn_801F9FB0_00000374
lbl_fn_801F9FB0_0000034C:
    lfs f0, lbl_80882CA0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801F9FB0_00000364
    li r3, 0x0
    b lbl_fn_801F9FB0_00000374
lbl_fn_801F9FB0_00000364:
    lfs f1, lbl_80882CAC
    lfs f0, lbl_80882CA8
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801F9FB0_00000374:
    lwz r7, 0x10(r31)
    slwi r6, r3, 24
    slwi r5, r28, 16
    lwz r3, lbl_8087EEB0
    clrlwi r0, r7, 31
    slwi r4, r29, 8
    or r5, r6, r5
    addi r29, r3, 0x10
    or r4, r4, r5
    cmplwi r0, 0x1
    or r28, r30, r4
    beq lbl_fn_801F9FB0_00001908
    rlwinm r0, r7, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_801F9FB0_00000C80
    lwz r6, 0x2c(r1)
    cmpwi r6, 0x0
    blt lbl_fn_801F9FB0_00000854
    lfs f0, 0x5c(r1)
    mr r4, r27
    stfs f0, 0x8(r1)
    addi r5, r31, 0x194
    li r7, 0x1
    lfs f1, 0x88(r1)
    lfs f2, 0x8c(r1)
    lfs f3, 0x98(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005E3E4
    lhz r0, 0xe(r31)
    cmplwi r0, 0x1
    bne lbl_fn_801F9FB0_0000045C
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    li r7, 0x1
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fadds f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fadds f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    lwz r6, 0x2c(r1)
    bl fn_8005E3E4
    b lbl_fn_801F9FB0_00003568
lbl_fn_801F9FB0_0000045C:
    cmplwi r0, 0x2
    bne lbl_fn_801F9FB0_000005A8
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    li r7, 0x1
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    lwz r6, 0x2c(r1)
    bl fn_8005E3E4
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    li r7, 0x1
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    lwz r6, 0x2c(r1)
    bl fn_8005E3E4
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    li r7, 0x1
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    lwz r6, 0x2c(r1)
    bl fn_8005E3E4
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    li r7, 0x1
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    lwz r6, 0x2c(r1)
    bl fn_8005E3E4
    b lbl_fn_801F9FB0_00003568
lbl_fn_801F9FB0_000005A8:
    cmplwi r0, 0x3
    bne lbl_fn_801F9FB0_00003568
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    li r7, 0x1
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    lwz r6, 0x2c(r1)
    bl fn_8005E3E4
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    li r7, 0x1
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    lwz r6, 0x2c(r1)
    bl fn_8005E3E4
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    li r7, 0x1
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    lwz r6, 0x2c(r1)
    bl fn_8005E3E4
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    li r7, 0x1
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    lwz r6, 0x2c(r1)
    bl fn_8005E3E4
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    li r7, 0x1
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fadds f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fadds f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    lwz r6, 0x2c(r1)
    bl fn_8005E3E4
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    li r7, 0x1
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fadds f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fsubs f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    lwz r6, 0x2c(r1)
    bl fn_8005E3E4
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    li r7, 0x1
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fsubs f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fsubs f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    lwz r6, 0x2c(r1)
    bl fn_8005E3E4
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    li r7, 0x1
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fsubs f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fadds f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    lwz r6, 0x2c(r1)
    bl fn_8005E3E4
    b lbl_fn_801F9FB0_00003568
lbl_fn_801F9FB0_00000854:
    lfs f0, 0x5c(r1)
    mr r4, r27
    stfs f0, 0x8(r1)
    addi r5, r31, 0x194
    lfs f1, 0x88(r1)
    lfs f2, 0x8c(r1)
    lfs f3, 0x98(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005F90C
    lhz r0, 0xe(r31)
    cmplwi r0, 0x1
    bne lbl_fn_801F9FB0_000008E8
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fadds f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fadds f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005F90C
    b lbl_fn_801F9FB0_00003568
lbl_fn_801F9FB0_000008E8:
    cmplwi r0, 0x2
    bne lbl_fn_801F9FB0_00000A14
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005F90C
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005F90C
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005F90C
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005F90C
    b lbl_fn_801F9FB0_00003568
lbl_fn_801F9FB0_00000A14:
    cmplwi r0, 0x3
    bne lbl_fn_801F9FB0_00003568
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005F90C
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005F90C
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005F90C
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005F90C
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fadds f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fadds f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005F90C
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fadds f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fsubs f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005F90C
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fsubs f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fsubs f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005F90C
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fsubs f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fadds f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005F90C
    b lbl_fn_801F9FB0_00003568
lbl_fn_801F9FB0_00000C80:
    lwz r7, 0x2c(r1)
    cmpwi r7, 0x0
    blt lbl_fn_801F9FB0_000012E4
    lfs f0, 0x5c(r1)
    mr r4, r27
    stfs f0, 0x8(r1)
    addi r5, r31, 0x194
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f1, 0x88(r1)
    lfs f2, 0x8c(r1)
    lfs f3, 0x98(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005E838
    lhz r0, 0xe(r31)
    cmplwi r0, 0x1
    bne lbl_fn_801F9FB0_00000D6C
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fadds f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fadds f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    lwz r7, 0x2c(r1)
    bl fn_8005E838
    b lbl_fn_801F9FB0_00003568
lbl_fn_801F9FB0_00000D6C:
    cmplwi r0, 0x2
    bne lbl_fn_801F9FB0_00000F38
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    lwz r7, 0x2c(r1)
    bl fn_8005E838
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    lwz r7, 0x2c(r1)
    bl fn_8005E838
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    lwz r7, 0x2c(r1)
    bl fn_8005E838
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    lwz r7, 0x2c(r1)
    bl fn_8005E838
    b lbl_fn_801F9FB0_00003568
lbl_fn_801F9FB0_00000F38:
    cmplwi r0, 0x3
    bne lbl_fn_801F9FB0_00003568
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    lwz r7, 0x2c(r1)
    bl fn_8005E838
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    lwz r7, 0x2c(r1)
    bl fn_8005E838
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    lwz r7, 0x2c(r1)
    bl fn_8005E838
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    lwz r7, 0x2c(r1)
    bl fn_8005E838
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fadds f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fadds f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    lwz r7, 0x2c(r1)
    bl fn_8005E838
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fadds f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fsubs f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    lwz r7, 0x2c(r1)
    bl fn_8005E838
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fsubs f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fsubs f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    lwz r7, 0x2c(r1)
    bl fn_8005E838
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fsubs f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fadds f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    lwz r7, 0x2c(r1)
    bl fn_8005E838
    b lbl_fn_801F9FB0_00003568
lbl_fn_801F9FB0_000012E4:
    lfs f0, 0x5c(r1)
    mr r4, r27
    stfs f0, 0x8(r1)
    addi r5, r31, 0x194
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f1, 0x88(r1)
    lfs f2, 0x8c(r1)
    lfs f3, 0x98(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005FD80
    lhz r0, 0xe(r31)
    cmplwi r0, 0x1
    bne lbl_fn_801F9FB0_000013C0
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fadds f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fadds f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005FD80
    b lbl_fn_801F9FB0_00003568
lbl_fn_801F9FB0_000013C0:
    cmplwi r0, 0x2
    bne lbl_fn_801F9FB0_0000157C
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005FD80
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005FD80
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005FD80
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005FD80
    b lbl_fn_801F9FB0_00003568
lbl_fn_801F9FB0_0000157C:
    cmplwi r0, 0x3
    bne lbl_fn_801F9FB0_00003568
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005FD80
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005FD80
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005FD80
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005FD80
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fadds f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fadds f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005FD80
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fadds f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fsubs f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005FD80
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fsubs f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fsubs f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005FD80
    lfs f0, 0x5c(r1)
    mr r4, r28
    stfs f0, 0x8(r1)
    mr r5, r29
    lfs f1, lbl_80882CB0
    addi r6, r31, 0x1c4
    lfs f0, 0x40(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fsubs f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fadds f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x54(r1)
    lfs f8, 0x58(r1)
    bl fn_8005FD80
    b lbl_fn_801F9FB0_00003568
lbl_fn_801F9FB0_00001908:
    rlwinm r0, r7, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_801F9FB0_00002564
    lwz r6, 0x2c(r1)
    cmpwi r6, 0x0
    blt lbl_fn_801F9FB0_00001F78
    lfs f2, 0x28(r1)
    mr r4, r27
    lfs f0, 0x50(r1)
    addi r5, r31, 0x194
    stfs f0, 0x8(r1)
    li r7, 0x1
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f1, 0x88(r1)
    lfs f2, 0x8c(r1)
    lfs f3, 0x98(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_8005EEA0
    lhz r0, 0xe(r31)
    cmplwi r0, 0x1
    bne lbl_fn_801F9FB0_00001A00
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    li r7, 0x1
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fadds f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fadds f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    lwz r6, 0x2c(r1)
    bl fn_8005EEA0
    b lbl_fn_801F9FB0_00003568
lbl_fn_801F9FB0_00001A00:
    cmplwi r0, 0x2
    bne lbl_fn_801F9FB0_00001BCC
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    li r7, 0x1
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    lwz r6, 0x2c(r1)
    bl fn_8005EEA0
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    li r7, 0x1
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    lwz r6, 0x2c(r1)
    bl fn_8005EEA0
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    li r7, 0x1
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    lwz r6, 0x2c(r1)
    bl fn_8005EEA0
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    li r7, 0x1
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    lwz r6, 0x2c(r1)
    bl fn_8005EEA0
    b lbl_fn_801F9FB0_00003568
lbl_fn_801F9FB0_00001BCC:
    cmplwi r0, 0x3
    bne lbl_fn_801F9FB0_00003568
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    li r7, 0x1
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    lwz r6, 0x2c(r1)
    bl fn_8005EEA0
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    li r7, 0x1
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    lwz r6, 0x2c(r1)
    bl fn_8005EEA0
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    li r7, 0x1
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    lwz r6, 0x2c(r1)
    bl fn_8005EEA0
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    li r7, 0x1
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    lwz r6, 0x2c(r1)
    bl fn_8005EEA0
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    li r7, 0x1
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fadds f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fadds f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    lwz r6, 0x2c(r1)
    bl fn_8005EEA0
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    li r7, 0x1
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fadds f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fsubs f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    lwz r6, 0x2c(r1)
    bl fn_8005EEA0
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    li r7, 0x1
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fsubs f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fsubs f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    lwz r6, 0x2c(r1)
    bl fn_8005EEA0
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    li r7, 0x1
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fsubs f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fadds f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    lwz r6, 0x2c(r1)
    bl fn_8005EEA0
    b lbl_fn_801F9FB0_00003568
lbl_fn_801F9FB0_00001F78:
    lfs f2, 0x28(r1)
    mr r4, r27
    lfs f0, 0x50(r1)
    addi r5, r31, 0x194
    stfs f0, 0x8(r1)
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f1, 0x88(r1)
    lfs f2, 0x8c(r1)
    lfs f3, 0x98(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800602E8
    lhz r0, 0xe(r31)
    cmplwi r0, 0x1
    bne lbl_fn_801F9FB0_0000204C
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fadds f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fadds f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800602E8
    b lbl_fn_801F9FB0_00003568
lbl_fn_801F9FB0_0000204C:
    cmplwi r0, 0x2
    bne lbl_fn_801F9FB0_000021F8
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800602E8
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800602E8
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800602E8
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800602E8
    b lbl_fn_801F9FB0_00003568
lbl_fn_801F9FB0_000021F8:
    cmplwi r0, 0x3
    bne lbl_fn_801F9FB0_00003568
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800602E8
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800602E8
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800602E8
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800602E8
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fadds f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fadds f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800602E8
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fadds f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fsubs f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800602E8
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fsubs f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fsubs f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800602E8
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fsubs f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fadds f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800602E8
    b lbl_fn_801F9FB0_00003568
lbl_fn_801F9FB0_00002564:
    lwz r7, 0x2c(r1)
    cmpwi r7, 0x0
    blt lbl_fn_801F9FB0_00002D88
    lfs f2, 0x28(r1)
    mr r4, r27
    lfs f0, 0x50(r1)
    addi r5, r31, 0x194
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f1, 0x88(r1)
    lfs f2, 0x8c(r1)
    lfs f3, 0x98(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_8005F36C
    lhz r0, 0xe(r31)
    cmplwi r0, 0x1
    bne lbl_fn_801F9FB0_00002690
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fadds f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fadds f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    lwz r7, 0x2c(r1)
    bl fn_8005F36C
    b lbl_fn_801F9FB0_00003568
lbl_fn_801F9FB0_00002690:
    cmplwi r0, 0x2
    bne lbl_fn_801F9FB0_000028DC
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    lwz r7, 0x2c(r1)
    bl fn_8005F36C
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    lwz r7, 0x2c(r1)
    bl fn_8005F36C
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    lwz r7, 0x2c(r1)
    bl fn_8005F36C
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    lwz r7, 0x2c(r1)
    bl fn_8005F36C
    b lbl_fn_801F9FB0_00003568
lbl_fn_801F9FB0_000028DC:
    cmplwi r0, 0x3
    bne lbl_fn_801F9FB0_00003568
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    lwz r7, 0x2c(r1)
    bl fn_8005F36C
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    lwz r7, 0x2c(r1)
    bl fn_8005F36C
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    lwz r7, 0x2c(r1)
    bl fn_8005F36C
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    lwz r7, 0x2c(r1)
    bl fn_8005F36C
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fadds f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fadds f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    lwz r7, 0x2c(r1)
    bl fn_8005F36C
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fadds f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fsubs f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    lwz r7, 0x2c(r1)
    bl fn_8005F36C
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fsubs f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fsubs f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    lwz r7, 0x2c(r1)
    bl fn_8005F36C
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fsubs f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fadds f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    lwz r7, 0x2c(r1)
    bl fn_8005F36C
    b lbl_fn_801F9FB0_00003568
lbl_fn_801F9FB0_00002D88:
    lfs f2, 0x28(r1)
    mr r4, r27
    lfs f0, 0x50(r1)
    addi r5, r31, 0x194
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f1, 0x88(r1)
    lfs f2, 0x8c(r1)
    lfs f3, 0x98(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800607C0
    lhz r0, 0xe(r31)
    cmplwi r0, 0x1
    bne lbl_fn_801F9FB0_00002EA4
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fadds f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fadds f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800607C0
    b lbl_fn_801F9FB0_00003568
lbl_fn_801F9FB0_00002EA4:
    cmplwi r0, 0x2
    bne lbl_fn_801F9FB0_000030E0
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800607C0
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800607C0
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800607C0
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800607C0
    b lbl_fn_801F9FB0_00003568
lbl_fn_801F9FB0_000030E0:
    cmplwi r0, 0x3
    bne lbl_fn_801F9FB0_00003568
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800607C0
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fadds f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800607C0
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x88(r1)
    lfs f2, 0x70(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f1, f4, f2
    lfs f2, 0x8c(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800607C0
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    lfs f2, 0x74(r1)
    fadds f3, f1, f0
    lwz r3, lbl_8087EEB0
    fsubs f2, f4, f2
    lfs f1, 0x88(r1)
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800607C0
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fadds f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fadds f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800607C0
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fadds f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fsubs f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800607C0
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fsubs f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fsubs f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800607C0
    lfs f2, 0x28(r1)
    mr r4, r28
    lfs f0, 0x50(r1)
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r31, 0x1c4
    lfs f1, lbl_80882CB4
    lfs f0, 0x54(r1)
    stfs f0, 0xc(r1)
    fmuls f8, f1, f2
    lfs f1, lbl_80882CB0
    lfs f0, 0x58(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x98(r1)
    lfs f5, 0x88(r1)
    fadds f3, f1, f0
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r1)
    fsubs f1, f5, f4
    lfs f0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    fadds f2, f2, f0
    lfs f4, 0x90(r1)
    lfs f5, 0x94(r1)
    lfs f6, 0xb0(r31)
    lfs f7, 0xb4(r31)
    bl fn_800607C0
lbl_fn_801F9FB0_00003568:
    addi r11, r1, 0xc0
    bl _restgpr_27
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}
