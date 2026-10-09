#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void fn_802328EC(void);
extern void fn_80238560(void);
extern void fn_80680CF8(void);

/* External data declarations */
extern u8 lbl_80742F78[];

/* Small data declarations */
extern u32 lbl_8087F370;
extern u32 lbl_808830D0;
extern u32 lbl_808830D4;
extern u32 lbl_80883110;
extern u32 lbl_80883114;

/* Function declarations */
void fn_80232ED4(void);
void fn_80232F84(void);
void fn_80232FF4(void);
void fn_802330A4(void);
void fn_80233158(void);
void fn_802331B0(void);
void fn_80233260(void);
void fn_8023329C(void);
void fn_80233348(void);
void fn_802334E0(void);
void fn_80233678(void);
void fn_80233810(void);
void fn_802339A8(void);
void fn_80233B40(void);
void fn_80233D74(void);
void fn_802346AC(void);
void fn_802346B4(void);
void fn_802346BC(void);
void fn_802346F0(void);
void fn_80234764(void);
void fn_802347DC(void);

asm void fn_80232ED4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x1
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r5, 0xc(r3)
    b lbl_fn_80232ED4_00000050
lbl_fn_80232ED4_00000030:
    lwz r3, 0x34(r5)
    lwz r6, 0x4(r5)
    cmpw r3, r4
    bne lbl_fn_80232ED4_0000004C
    cmpwi r5, 0x0
    beq lbl_fn_80232ED4_0000004C
    stb r0, 0x1b(r5)
lbl_fn_80232ED4_0000004C:
    mr r5, r6
lbl_fn_80232ED4_00000050:
    cmpwi r5, 0x0
    bne lbl_fn_80232ED4_00000030
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_80232ED4_00000084
lbl_fn_80232ED4_00000064:
    lwz r0, 0x24(r28)
    add r3, r0, r31
    lwz r0, 0x90(r3)
    cmpw r29, r0
    bne lbl_fn_80232ED4_0000007C
    bl fn_80238560
lbl_fn_80232ED4_0000007C:
    addi r31, r31, 0x94
    addi r30, r30, 0x1
lbl_fn_80232ED4_00000084:
    lwz r0, 0x20(r28)
    cmpw r30, r0
    blt lbl_fn_80232ED4_00000064
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80232F84(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r5, 0xc(r3)
    b lbl_fn_80232F84_000000FC
lbl_fn_80232F84_000000D8:
    lwz r0, 0x34(r5)
    lwz r31, 0x4(r5)
    cmpw r0, r30
    bne lbl_fn_80232F84_000000F8
    mr r4, r5
    mr r3, r29
    li r5, 0x1
    bl fn_802328EC
lbl_fn_80232F84_000000F8:
    mr r5, r31
lbl_fn_80232F84_000000FC:
    cmpwi r5, 0x0
    bne lbl_fn_80232F84_000000D8
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80232FF4(void)
{
    nofralloc
    cmpwi r5, -0x1
    bne lbl_fn_80232FF4_00000130
    li r3, 0x0
    blr
lbl_fn_80232FF4_00000130:
    lwz r8, 0xc(r3)
    clrlwi r7, r6, 16
    b lbl_fn_80232FF4_0000016C
lbl_fn_80232FF4_0000013C:
    lwz r0, 0x24(r8)
    cmplw r0, r4
    bne lbl_fn_80232FF4_00000168
    lwz r0, 0x28(r8)
    cmpw r0, r5
    beq lbl_fn_80232FF4_0000015C
    cmpwi r5, -0x2
    bne lbl_fn_80232FF4_00000168
lbl_fn_80232FF4_0000015C:
    lhz r0, 0x18(r8)
    or r0, r0, r7
    sth r0, 0x18(r8)
lbl_fn_80232FF4_00000168:
    lwz r8, 0x4(r8)
lbl_fn_80232FF4_0000016C:
    cmpwi r8, 0x0
    bne lbl_fn_80232FF4_0000013C
    li r8, 0x0
    li r7, 0x0
    b lbl_fn_80232FF4_000001BC
lbl_fn_80232FF4_00000180:
    lwz r0, 0x24(r3)
    add r9, r0, r7
    lwz r0, 0x28(r9)
    cmplw r0, r4
    bne lbl_fn_80232FF4_000001B4
    lwz r0, 0x2c(r9)
    cmpw r5, r0
    beq lbl_fn_80232FF4_000001A8
    cmpwi r5, -0x2
    bne lbl_fn_80232FF4_000001B4
lbl_fn_80232FF4_000001A8:
    lwz r0, 0x34(r9)
    or r0, r0, r6
    stw r0, 0x34(r9)
lbl_fn_80232FF4_000001B4:
    addi r7, r7, 0x94
    addi r8, r8, 0x1
lbl_fn_80232FF4_000001BC:
    lwz r0, 0x20(r3)
    cmpw r8, r0
    blt lbl_fn_80232FF4_00000180
    li r3, 0x1
    blr
}

asm void fn_802330A4(void)
{
    nofralloc
    cmpwi r5, -0x1
    bne lbl_fn_802330A4_000001E0
    li r3, 0x0
    blr
lbl_fn_802330A4_000001E0:
    nor r7, r6, r6
    lwz r8, 0xc(r3)
    clrlwi r6, r7, 16
    b lbl_fn_802330A4_00000220
lbl_fn_802330A4_000001F0:
    lwz r0, 0x24(r8)
    cmplw r0, r4
    bne lbl_fn_802330A4_0000021C
    lwz r0, 0x28(r8)
    cmpw r0, r5
    beq lbl_fn_802330A4_00000210
    cmpwi r5, -0x2
    bne lbl_fn_802330A4_0000021C
lbl_fn_802330A4_00000210:
    lhz r0, 0x18(r8)
    and r0, r0, r6
    sth r0, 0x18(r8)
lbl_fn_802330A4_0000021C:
    lwz r8, 0x4(r8)
lbl_fn_802330A4_00000220:
    cmpwi r8, 0x0
    bne lbl_fn_802330A4_000001F0
    li r8, 0x0
    li r6, 0x0
    b lbl_fn_802330A4_00000270
lbl_fn_802330A4_00000234:
    lwz r0, 0x24(r3)
    add r9, r0, r6
    lwz r0, 0x28(r9)
    cmplw r0, r4
    bne lbl_fn_802330A4_00000268
    lwz r0, 0x2c(r9)
    cmpw r5, r0
    beq lbl_fn_802330A4_0000025C
    cmpwi r5, -0x2
    bne lbl_fn_802330A4_00000268
lbl_fn_802330A4_0000025C:
    lwz r0, 0x34(r9)
    and r0, r0, r7
    stw r0, 0x34(r9)
lbl_fn_802330A4_00000268:
    addi r6, r6, 0x94
    addi r8, r8, 0x1
lbl_fn_802330A4_00000270:
    lwz r0, 0x20(r3)
    cmpw r8, r0
    blt lbl_fn_802330A4_00000234
    li r3, 0x1
    blr
}

asm void fn_80233158(void)
{
    nofralloc
    lwz r3, 0xc(r3)
    b lbl_fn_80233158_000002D0
lbl_fn_80233158_0000028C:
    lwz r0, 0x24(r3)
    cmplw r0, r4
    bne lbl_fn_80233158_000002CC
    lwz r0, 0x28(r3)
    cmpw r0, r5
    beq lbl_fn_80233158_000002AC
    cmpwi r5, -0x2
    bne lbl_fn_80233158_000002CC
lbl_fn_80233158_000002AC:
    lfs f0, 0x0(r6)
    stfs f0, 0xac(r3)
    lfs f0, 0x4(r6)
    stfs f0, 0xb0(r3)
    lfs f0, 0x8(r6)
    stfs f0, 0xb4(r3)
    lfs f0, 0xc(r6)
    stfs f0, 0xb8(r3)
lbl_fn_80233158_000002CC:
    lwz r3, 0x4(r3)
lbl_fn_80233158_000002D0:
    cmpwi r3, 0x0
    bne lbl_fn_80233158_0000028C
    blr
}

asm void fn_802331B0(void)
{
    nofralloc
    lwz r7, 0xc(r3)
    b lbl_fn_802331B0_00000318
lbl_fn_802331B0_000002E4:
    lwz r0, 0x24(r7)
    cmplw r0, r4
    bne lbl_fn_802331B0_00000314
    lwz r0, 0x28(r7)
    cmpw r0, r5
    beq lbl_fn_802331B0_00000304
    cmpwi r5, -0x2
    bne lbl_fn_802331B0_00000314
lbl_fn_802331B0_00000304:
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0xd0(r7), 0, 0
    lfs f2, 0x8(r6)
    stfs f2, 0xd8(r7)
lbl_fn_802331B0_00000314:
    lwz r7, 0x4(r7)
lbl_fn_802331B0_00000318:
    cmpwi r7, 0x0
    bne lbl_fn_802331B0_000002E4
    li r10, 0x0
    li r7, 0x0
    b lbl_fn_802331B0_0000037C
lbl_fn_802331B0_0000032C:
    lwz r0, 0x24(r3)
    li r8, 0x0
    add r9, r0, r7
    lwz r0, 0x28(r9)
    cmplw r0, r4
    bne lbl_fn_802331B0_0000035C
    lwz r0, 0x2c(r9)
    cmpw r0, r5
    beq lbl_fn_802331B0_00000358
    cmpwi r5, -0x2
    bne lbl_fn_802331B0_0000035C
lbl_fn_802331B0_00000358:
    li r8, 0x1
lbl_fn_802331B0_0000035C:
    cmpwi r8, 0x0
    beq lbl_fn_802331B0_00000374
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x78(r9), 0, 0
    lfs f2, 0x8(r6)
    stfs f2, 0x80(r9)
lbl_fn_802331B0_00000374:
    addi r10, r10, 0x1
    addi r7, r7, 0x94
lbl_fn_802331B0_0000037C:
    lwz r0, 0x20(r3)
    cmpw r10, r0
    blt lbl_fn_802331B0_0000032C
    blr
}

asm void fn_80233260(void)
{
    nofralloc
    lwz r3, 0xc(r3)
    b lbl_fn_80233260_000003BC
lbl_fn_80233260_00000394:
    lwz r0, 0x24(r3)
    cmplw r0, r4
    bne lbl_fn_80233260_000003B8
    lwz r0, 0x28(r3)
    cmpw r0, r5
    beq lbl_fn_80233260_000003B4
    cmpwi r5, -0x2
    bne lbl_fn_80233260_000003B8
lbl_fn_80233260_000003B4:
    stfs f1, 0xdc(r3)
lbl_fn_80233260_000003B8:
    lwz r3, 0x4(r3)
lbl_fn_80233260_000003BC:
    cmpwi r3, 0x0
    bne lbl_fn_80233260_00000394
    blr
}

asm void fn_8023329C(void)
{
    nofralloc
    mulli r0, r4, 0xb0
    lwz r5, 0x1c(r5)
    slwi r4, r3, 3
    lfs f0, lbl_808830D0
    li r7, 0x0
    add r0, r5, r0
    add r3, r0, r4
    lwzx r5, r4, r0
    lwz r4, 0x4(r3)
    subi r0, r5, 0x1
    mr r3, r4
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8023329C_00000458
lbl_fn_8023329C_00000400:
    lfs f5, 0x0(r3)
    addi r0, r7, 0x1
    slwi r0, r0, 3
    fcmpo cr0, f1, f5
    add r5, r4, r0
    cror eq, gt, eq
    bne lbl_fn_8023329C_0000044C
    lfs f3, 0x0(r5)
    fcmpo cr0, f1, f3
    cror eq, lt, eq
    bne lbl_fn_8023329C_0000044C
    fsubs f4, f1, f5
    lfs f0, 0x4(r5)
    fsubs f3, f3, f5
    lfs f1, 0x4(r3)
    fsubs f0, f0, f1
    fdivs f3, f4, f3
    fmadds f0, f3, f0, f1
    b lbl_fn_8023329C_00000458
lbl_fn_8023329C_0000044C:
    addi r3, r3, 0x8
    addi r7, r7, 0x1
    bdnz lbl_fn_8023329C_00000400
lbl_fn_8023329C_00000458:
    cmpwi r6, 0x0
    beq lbl_fn_8023329C_00000468
    fmuls f0, f0, f2
    b lbl_fn_8023329C_0000046C
lbl_fn_8023329C_00000468:
    fadds f0, f0, f2
lbl_fn_8023329C_0000046C:
    fmr f1, f0
    blr
}

asm void fn_80233348(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r31, 0xbc(r6)
    slwi r0, r5, 2
    lwz r30, 0xc0(r6)
    mr r27, r3
    lwz r6, 0x18(r31)
    mr r28, r4
    mr r29, r5
    lwzx r0, r6, r0
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80233348_00000518
    lfs f1, lbl_808830D0
    mr r4, r29
    mr r5, r31
    li r3, 0xc
    fmr f2, f1
    li r6, 0x0
    bl fn_8023329C
    stfs f1, 0x0(r27)
    mr r4, r29
    lfs f1, lbl_808830D0
    mr r5, r31
    li r3, 0xd
    li r6, 0x0
    fmr f2, f1
    bl fn_8023329C
    stfs f1, 0x4(r27)
    mr r4, r29
    lfs f1, lbl_808830D0
    mr r5, r31
    li r3, 0xe
    li r6, 0x0
    fmr f2, f1
    bl fn_8023329C
    stfs f1, 0x8(r27)
    b lbl_fn_80233348_00000530
lbl_fn_80233348_00000518:
    lfs f0, 0xa4(r30)
    stfs f0, 0x0(r3)
    lfs f0, 0xa8(r30)
    stfs f0, 0x4(r3)
    lfs f0, 0xac(r30)
    stfs f0, 0x8(r3)
lbl_fn_80233348_00000530:
    lwz r0, 0x70(r30)
    cmplwi r0, 0x2
    bne lbl_fn_80233348_00000578
    lfs f1, 0x0(r27)
    lfs f0, lbl_808830D0
    fcmpu cr0, f1, f0
    beq lbl_fn_80233348_0000056C
    lfs f0, 0x4(r27)
    fdivs f0, f0, f1
    stfs f0, 0x13c(r28)
    lfs f1, 0x8(r27)
    lfs f0, 0x0(r27)
    fdivs f0, f1, f0
    stfs f0, 0x140(r28)
    b lbl_fn_80233348_00000584
lbl_fn_80233348_0000056C:
    stfs f0, 0x13c(r28)
    stfs f0, 0x140(r28)
    b lbl_fn_80233348_00000584
lbl_fn_80233348_00000578:
    lfs f0, lbl_808830D4
    stfs f0, 0x13c(r28)
    stfs f0, 0x140(r28)
lbl_fn_80233348_00000584:
    lwz r0, 0x6c(r30)
    clrlwi. r0, r0, 31
    beq lbl_fn_80233348_000005C4
    lfs f1, 0x0(r27)
    lfs f0, 0x114(r28)
    lfs f2, 0x4(r27)
    fmuls f0, f1, f0
    lfs f1, 0x8(r27)
    stfs f0, 0x0(r27)
    lfs f0, 0x118(r28)
    fmuls f0, f2, f0
    stfs f0, 0x4(r27)
    lfs f0, 0x11c(r28)
    fmuls f0, f1, f0
    stfs f0, 0x8(r27)
    b lbl_fn_80233348_000005F4
lbl_fn_80233348_000005C4:
    lfs f1, 0x0(r27)
    lfs f0, 0x114(r28)
    lfs f2, 0x4(r27)
    fadds f0, f1, f0
    lfs f1, 0x8(r27)
    stfs f0, 0x0(r27)
    lfs f0, 0x118(r28)
    fadds f0, f2, f0
    stfs f0, 0x4(r27)
    lfs f0, 0x11c(r28)
    fadds f0, f1, f0
    stfs f0, 0x8(r27)
lbl_fn_80233348_000005F4:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802334E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r31, 0xbc(r6)
    slwi r0, r5, 2
    lwz r30, 0xc0(r6)
    mr r27, r3
    lwz r6, 0x18(r31)
    mr r28, r4
    mr r29, r5
    lwzx r0, r6, r0
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_802334E0_000006B0
    lfs f1, lbl_808830D0
    mr r4, r29
    mr r5, r31
    li r3, 0xf
    fmr f2, f1
    li r6, 0x0
    bl fn_8023329C
    stfs f1, 0x0(r27)
    mr r4, r29
    lfs f1, lbl_808830D0
    mr r5, r31
    li r3, 0x10
    li r6, 0x0
    fmr f2, f1
    bl fn_8023329C
    stfs f1, 0x4(r27)
    mr r4, r29
    lfs f1, lbl_808830D0
    mr r5, r31
    li r3, 0x11
    li r6, 0x0
    fmr f2, f1
    bl fn_8023329C
    stfs f1, 0x8(r27)
    b lbl_fn_802334E0_000006C8
lbl_fn_802334E0_000006B0:
    lfs f0, 0xe0(r30)
    stfs f0, 0x0(r3)
    lfs f0, 0xe4(r30)
    stfs f0, 0x4(r3)
    lfs f0, 0xe8(r30)
    stfs f0, 0x8(r3)
lbl_fn_802334E0_000006C8:
    lwz r0, 0x78(r30)
    cmplwi r0, 0x2
    bne lbl_fn_802334E0_00000710
    lfs f1, 0x0(r27)
    lfs f0, lbl_808830D0
    fcmpu cr0, f1, f0
    beq lbl_fn_802334E0_00000704
    lfs f0, 0x4(r27)
    fdivs f0, f0, f1
    stfs f0, 0x144(r28)
    lfs f1, 0x8(r27)
    lfs f0, 0x0(r27)
    fdivs f0, f1, f0
    stfs f0, 0x148(r28)
    b lbl_fn_802334E0_0000071C
lbl_fn_802334E0_00000704:
    stfs f0, 0x144(r28)
    stfs f0, 0x148(r28)
    b lbl_fn_802334E0_0000071C
lbl_fn_802334E0_00000710:
    lfs f0, lbl_808830D4
    stfs f0, 0x144(r28)
    stfs f0, 0x148(r28)
lbl_fn_802334E0_0000071C:
    lwz r0, 0x74(r30)
    clrlwi. r0, r0, 31
    beq lbl_fn_802334E0_0000075C
    lfs f1, 0x0(r27)
    lfs f0, 0x120(r28)
    lfs f2, 0x4(r27)
    fmuls f0, f1, f0
    lfs f1, 0x8(r27)
    stfs f0, 0x0(r27)
    lfs f0, 0x124(r28)
    fmuls f0, f2, f0
    stfs f0, 0x4(r27)
    lfs f0, 0x128(r28)
    fmuls f0, f1, f0
    stfs f0, 0x8(r27)
    b lbl_fn_802334E0_0000078C
lbl_fn_802334E0_0000075C:
    lfs f1, 0x0(r27)
    lfs f0, 0x120(r28)
    lfs f2, 0x4(r27)
    fadds f0, f1, f0
    lfs f1, 0x8(r27)
    stfs f0, 0x0(r27)
    lfs f0, 0x124(r28)
    fadds f0, f2, f0
    stfs f0, 0x4(r27)
    lfs f0, 0x128(r28)
    fadds f0, f1, f0
    stfs f0, 0x8(r27)
lbl_fn_802334E0_0000078C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80233678(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r31, 0xbc(r6)
    slwi r0, r5, 2
    lwz r30, 0xc0(r6)
    mr r27, r3
    lwz r6, 0x18(r31)
    mr r28, r4
    mr r29, r5
    lwzx r0, r6, r0
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80233678_00000848
    lfs f1, lbl_808830D0
    mr r4, r29
    mr r5, r31
    li r3, 0x0
    fmr f2, f1
    li r6, 0x0
    bl fn_8023329C
    stfs f1, 0x0(r27)
    mr r4, r29
    lfs f1, lbl_808830D0
    mr r5, r31
    li r3, 0x1
    li r6, 0x0
    fmr f2, f1
    bl fn_8023329C
    stfs f1, 0x4(r27)
    mr r4, r29
    lfs f1, lbl_808830D0
    mr r5, r31
    li r3, 0x2
    li r6, 0x0
    fmr f2, f1
    bl fn_8023329C
    stfs f1, 0x8(r27)
    b lbl_fn_80233678_00000860
lbl_fn_80233678_00000848:
    lfs f0, 0x11c(r30)
    stfs f0, 0x0(r3)
    lfs f0, 0x120(r30)
    stfs f0, 0x4(r3)
    lfs f0, 0x124(r30)
    stfs f0, 0x8(r3)
lbl_fn_80233678_00000860:
    lwz r0, 0x80(r30)
    cmplwi r0, 0x2
    bne lbl_fn_80233678_000008A8
    lfs f1, 0x0(r27)
    lfs f0, lbl_808830D0
    fcmpu cr0, f1, f0
    beq lbl_fn_80233678_0000089C
    lfs f0, 0x4(r27)
    fdivs f0, f0, f1
    stfs f0, 0x14c(r28)
    lfs f1, 0x8(r27)
    lfs f0, 0x0(r27)
    fdivs f0, f1, f0
    stfs f0, 0x150(r28)
    b lbl_fn_80233678_000008B4
lbl_fn_80233678_0000089C:
    stfs f0, 0x14c(r28)
    stfs f0, 0x150(r28)
    b lbl_fn_80233678_000008B4
lbl_fn_80233678_000008A8:
    lfs f0, lbl_808830D4
    stfs f0, 0x14c(r28)
    stfs f0, 0x150(r28)
lbl_fn_80233678_000008B4:
    lwz r0, 0x7c(r30)
    clrlwi. r0, r0, 31
    beq lbl_fn_80233678_000008F4
    lfs f1, 0x0(r27)
    lfs f0, 0xe4(r28)
    lfs f2, 0x4(r27)
    fmuls f0, f1, f0
    lfs f1, 0x8(r27)
    stfs f0, 0x0(r27)
    lfs f0, 0xe8(r28)
    fmuls f0, f2, f0
    stfs f0, 0x4(r27)
    lfs f0, 0xec(r28)
    fmuls f0, f1, f0
    stfs f0, 0x8(r27)
    b lbl_fn_80233678_00000924
lbl_fn_80233678_000008F4:
    lfs f1, 0x0(r27)
    lfs f0, 0xe4(r28)
    lfs f2, 0x4(r27)
    fadds f0, f1, f0
    lfs f1, 0x8(r27)
    stfs f0, 0x0(r27)
    lfs f0, 0xe8(r28)
    fadds f0, f2, f0
    stfs f0, 0x4(r27)
    lfs f0, 0xec(r28)
    fadds f0, f1, f0
    stfs f0, 0x8(r27)
lbl_fn_80233678_00000924:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80233810(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r31, 0xbc(r6)
    slwi r0, r5, 2
    lwz r30, 0xc0(r6)
    mr r27, r3
    lwz r6, 0x18(r31)
    mr r28, r4
    mr r29, r5
    lwzx r0, r6, r0
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_80233810_000009E0
    lfs f1, lbl_808830D0
    mr r4, r29
    mr r5, r31
    li r3, 0x13
    fmr f2, f1
    li r6, 0x0
    bl fn_8023329C
    stfs f1, 0x0(r27)
    mr r4, r29
    lfs f1, lbl_808830D0
    mr r5, r31
    li r3, 0x14
    li r6, 0x0
    fmr f2, f1
    bl fn_8023329C
    stfs f1, 0x4(r27)
    mr r4, r29
    lfs f1, lbl_808830D0
    mr r5, r31
    li r3, 0x15
    li r6, 0x0
    fmr f2, f1
    bl fn_8023329C
    stfs f1, 0x8(r27)
    b lbl_fn_80233810_000009F8
lbl_fn_80233810_000009E0:
    lfs f0, 0x1f8(r30)
    stfs f0, 0x0(r3)
    lfs f0, 0x1fc(r30)
    stfs f0, 0x4(r3)
    lfs f0, 0x200(r30)
    stfs f0, 0x8(r3)
lbl_fn_80233810_000009F8:
    lwz r0, 0xa0(r30)
    cmplwi r0, 0x2
    bne lbl_fn_80233810_00000A40
    lfs f1, 0x0(r27)
    lfs f0, lbl_808830D0
    fcmpu cr0, f1, f0
    beq lbl_fn_80233810_00000A34
    lfs f0, 0x4(r27)
    fdivs f0, f0, f1
    stfs f0, 0x16c(r28)
    lfs f1, 0x8(r27)
    lfs f0, 0x0(r27)
    fdivs f0, f1, f0
    stfs f0, 0x170(r28)
    b lbl_fn_80233810_00000A4C
lbl_fn_80233810_00000A34:
    stfs f0, 0x16c(r28)
    stfs f0, 0x170(r28)
    b lbl_fn_80233810_00000A4C
lbl_fn_80233810_00000A40:
    lfs f0, lbl_808830D4
    stfs f0, 0x16c(r28)
    stfs f0, 0x170(r28)
lbl_fn_80233810_00000A4C:
    lwz r0, 0x9c(r30)
    clrlwi. r0, r0, 31
    beq lbl_fn_80233810_00000A8C
    lfs f1, 0x0(r27)
    lfs f0, 0x130(r28)
    lfs f2, 0x4(r27)
    fmuls f0, f1, f0
    lfs f1, 0x8(r27)
    stfs f0, 0x0(r27)
    lfs f0, 0x134(r28)
    fmuls f0, f2, f0
    stfs f0, 0x4(r27)
    lfs f0, 0x138(r28)
    fmuls f0, f1, f0
    stfs f0, 0x8(r27)
    b lbl_fn_80233810_00000ABC
lbl_fn_80233810_00000A8C:
    lfs f1, 0x0(r27)
    lfs f0, 0x130(r28)
    lfs f2, 0x4(r27)
    fadds f0, f1, f0
    lfs f1, 0x8(r27)
    stfs f0, 0x0(r27)
    lfs f0, 0x134(r28)
    fadds f0, f2, f0
    stfs f0, 0x4(r27)
    lfs f0, 0x138(r28)
    fadds f0, f1, f0
    stfs f0, 0x8(r27)
lbl_fn_80233810_00000ABC:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802339A8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r31, 0xbc(r6)
    slwi r0, r5, 2
    lwz r30, 0xc0(r6)
    mr r27, r3
    lwz r6, 0x18(r31)
    mr r28, r4
    mr r29, r5
    lwzx r0, r6, r0
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_802339A8_00000B78
    lfs f1, lbl_808830D0
    mr r4, r29
    mr r5, r31
    li r3, 0x7
    fmr f2, f1
    li r6, 0x0
    bl fn_8023329C
    stfs f1, 0x0(r27)
    mr r4, r29
    lfs f1, lbl_808830D0
    mr r5, r31
    li r3, 0x8
    li r6, 0x0
    fmr f2, f1
    bl fn_8023329C
    stfs f1, 0x4(r27)
    mr r4, r29
    lfs f1, lbl_808830D0
    mr r5, r31
    li r3, 0x9
    li r6, 0x0
    fmr f2, f1
    bl fn_8023329C
    stfs f1, 0x8(r27)
    b lbl_fn_802339A8_00000B90
lbl_fn_802339A8_00000B78:
    lfs f0, 0x158(r30)
    stfs f0, 0x0(r3)
    lfs f0, 0x15c(r30)
    stfs f0, 0x4(r3)
    lfs f0, 0x160(r30)
    stfs f0, 0x8(r3)
lbl_fn_802339A8_00000B90:
    lwz r0, 0x88(r30)
    cmplwi r0, 0x2
    bne lbl_fn_802339A8_00000BD8
    lfs f1, 0x0(r27)
    lfs f0, lbl_808830D0
    fcmpu cr0, f1, f0
    beq lbl_fn_802339A8_00000BCC
    lfs f0, 0x4(r27)
    fdivs f0, f0, f1
    stfs f0, 0x154(r28)
    lfs f1, 0x8(r27)
    lfs f0, 0x0(r27)
    fdivs f0, f1, f0
    stfs f0, 0x158(r28)
    b lbl_fn_802339A8_00000BE4
lbl_fn_802339A8_00000BCC:
    stfs f0, 0x154(r28)
    stfs f0, 0x158(r28)
    b lbl_fn_802339A8_00000BE4
lbl_fn_802339A8_00000BD8:
    lfs f0, lbl_808830D4
    stfs f0, 0x154(r28)
    stfs f0, 0x158(r28)
lbl_fn_802339A8_00000BE4:
    lwz r0, 0x84(r30)
    clrlwi. r0, r0, 31
    beq lbl_fn_802339A8_00000C24
    lfs f1, 0x0(r27)
    lfs f0, 0x100(r28)
    lfs f2, 0x4(r27)
    fmuls f0, f1, f0
    lfs f1, 0x8(r27)
    stfs f0, 0x0(r27)
    lfs f0, 0x104(r28)
    fmuls f0, f2, f0
    stfs f0, 0x4(r27)
    lfs f0, 0x108(r28)
    fmuls f0, f1, f0
    stfs f0, 0x8(r27)
    b lbl_fn_802339A8_00000C54
lbl_fn_802339A8_00000C24:
    lfs f1, 0x0(r27)
    lfs f0, 0x100(r28)
    lfs f2, 0x4(r27)
    fadds f0, f1, f0
    lfs f1, 0x8(r27)
    stfs f0, 0x0(r27)
    lfs f0, 0x104(r28)
    fadds f0, f2, f0
    stfs f0, 0x4(r27)
    lfs f0, 0x108(r28)
    fadds f0, f1, f0
    stfs f0, 0x8(r27)
lbl_fn_802339A8_00000C54:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80233B40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r31, 0xbc(r6)
    slwi r0, r5, 2
    lwz r30, 0xc0(r6)
    mr r28, r4
    lwz r6, 0x18(r31)
    mr r27, r3
    mr r29, r5
    lwzx r0, r6, r0
    extrwi r4, r0, 1, 27
    extrwi r0, r0, 1, 26
    add. r0, r4, r0
    beq lbl_fn_80233B40_00000CC4
    cmpwi r0, 0x1
    beq lbl_fn_80233B40_00000CE8
    cmpwi r0, 0x2
    beq lbl_fn_80233B40_00000D24
    b lbl_fn_80233B40_00000DA4
lbl_fn_80233B40_00000CC4:
    lfs f0, 0x194(r30)
    stfs f0, 0x0(r3)
    lfs f0, 0x198(r30)
    stfs f0, 0x4(r3)
    lfs f0, 0x19c(r30)
    stfs f0, 0x8(r3)
    lfs f0, 0x1a0(r30)
    stfs f0, 0xc(r3)
    b lbl_fn_80233B40_00000DA4
lbl_fn_80233B40_00000CE8:
    lfs f1, lbl_808830D0
    mr r4, r29
    mr r5, r31
    li r3, 0x6
    fmr f2, f1
    li r6, 0x0
    bl fn_8023329C
    stfs f1, 0xc(r27)
    lfs f0, 0x194(r30)
    stfs f0, 0x0(r27)
    lfs f0, 0x198(r30)
    stfs f0, 0x4(r27)
    lfs f0, 0x19c(r30)
    stfs f0, 0x8(r27)
    b lbl_fn_80233B40_00000DA4
lbl_fn_80233B40_00000D24:
    lfs f1, lbl_808830D0
    mr r4, r29
    mr r5, r31
    li r3, 0x3
    fmr f2, f1
    li r6, 0x0
    bl fn_8023329C
    stfs f1, 0x0(r27)
    mr r4, r29
    lfs f1, lbl_808830D0
    mr r5, r31
    li r3, 0x4
    li r6, 0x0
    fmr f2, f1
    bl fn_8023329C
    stfs f1, 0x4(r27)
    mr r4, r29
    lfs f1, lbl_808830D0
    mr r5, r31
    li r3, 0x5
    li r6, 0x0
    fmr f2, f1
    bl fn_8023329C
    stfs f1, 0x8(r27)
    mr r4, r29
    lfs f1, lbl_808830D0
    mr r5, r31
    li r3, 0x6
    li r6, 0x0
    fmr f2, f1
    bl fn_8023329C
    stfs f1, 0xc(r27)
lbl_fn_80233B40_00000DA4:
    lwz r0, 0x90(r30)
    cmplwi r0, 0x2
    bne lbl_fn_80233B40_00000DEC
    lfs f1, 0x0(r27)
    lfs f0, lbl_808830D0
    fcmpu cr0, f1, f0
    beq lbl_fn_80233B40_00000DE0
    lfs f0, 0x4(r27)
    fdivs f0, f0, f1
    stfs f0, 0x15c(r28)
    lfs f1, 0x8(r27)
    lfs f0, 0x0(r27)
    fdivs f0, f1, f0
    stfs f0, 0x160(r28)
    b lbl_fn_80233B40_00000DF8
lbl_fn_80233B40_00000DE0:
    stfs f0, 0x15c(r28)
    stfs f0, 0x160(r28)
    b lbl_fn_80233B40_00000DF8
lbl_fn_80233B40_00000DEC:
    lfs f0, lbl_808830D4
    stfs f0, 0x15c(r28)
    stfs f0, 0x160(r28)
lbl_fn_80233B40_00000DF8:
    lwz r0, 0x8c(r30)
    clrlwi. r0, r0, 31
    beq lbl_fn_80233B40_00000E48
    lfs f1, 0x0(r27)
    lfs f0, 0xf0(r28)
    lfs f3, 0x4(r27)
    fmuls f0, f1, f0
    lfs f2, 0x8(r27)
    lfs f1, 0xc(r27)
    stfs f0, 0x0(r27)
    lfs f0, 0xf4(r28)
    fmuls f0, f3, f0
    stfs f0, 0x4(r27)
    lfs f0, 0xf8(r28)
    fmuls f0, f2, f0
    stfs f0, 0x8(r27)
    lfs f0, 0xfc(r28)
    fmuls f0, f1, f0
    stfs f0, 0xc(r27)
    b lbl_fn_80233B40_00000E88
lbl_fn_80233B40_00000E48:
    lfs f1, 0x0(r27)
    lfs f0, 0xf0(r28)
    lfs f3, 0x4(r27)
    fadds f0, f1, f0
    lfs f2, 0x8(r27)
    lfs f1, 0xc(r27)
    stfs f0, 0x0(r27)
    lfs f0, 0xf4(r28)
    fadds f0, f3, f0
    stfs f0, 0x4(r27)
    lfs f0, 0xf8(r28)
    fadds f0, f2, f0
    stfs f0, 0x8(r27)
    lfs f0, 0xfc(r28)
    fadds f0, f1, f0
    stfs f0, 0xc(r27)
lbl_fn_80233B40_00000E88:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80233D74(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r5, 0x4330
    stw r0, 0x64(r1)
    lwz r0, 0x84(r4)
    stfd f31, 0x50(r1)
    clrlwi. r0, r0, 31
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    stfd f29, 0x30(r1)
    psq_st f29, 0x38(r1), 0, 0
    stfd f28, 0x20(r1)
    psq_st f28, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r5, 0x8(r1)
    stw r5, 0x10(r1)
    beq lbl_fn_80233D74_00000EFC
    lfs f31, lbl_808830D4
    b lbl_fn_80233D74_00000F00
lbl_fn_80233D74_00000EFC:
    lfs f31, lbl_808830D0
lbl_fn_80233D74_00000F00:
    lfs f0, lbl_808830D0
    lfs f30, 0x188(r4)
    fcmpu cr0, f0, f30
    beq lbl_fn_80233D74_00000F60
    fneg f29, f30
    bl fn_80680CF8
    lis r5, 0x4178
    lis r4, lbl_80742F78@ha
    addi r0, r5, 0x749f
    lfd f3, lbl_80742F78@l(r4)
    mulhw r0, r0, r3
    lfs f1, lbl_80883114
    fsubs f0, f30, f29
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmadds f0, f0, f1, f29
lbl_fn_80233D74_00000F60:
    lfs f1, lbl_808830D0
    fadds f0, f31, f0
    lfs f30, 0x18c(r31)
    stfs f0, 0x100(r30)
    fcmpu cr0, f1, f30
    beq lbl_fn_80233D74_00000FC8
    fneg f29, f30
    bl fn_80680CF8
    lis r5, 0x4178
    lis r4, lbl_80742F78@ha
    addi r0, r5, 0x749f
    lfd f3, lbl_80742F78@l(r4)
    mulhw r0, r0, r3
    lfs f1, lbl_80883114
    fsubs f0, f30, f29
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmadds f1, f0, f1, f29
lbl_fn_80233D74_00000FC8:
    lfs f2, lbl_808830D0
    fadds f0, f31, f1
    lfs f30, 0x190(r31)
    stfs f0, 0x104(r30)
    fcmpu cr0, f2, f30
    beq lbl_fn_80233D74_00001030
    fneg f29, f30
    bl fn_80680CF8
    lis r5, 0x4178
    lis r4, lbl_80742F78@ha
    addi r0, r5, 0x749f
    lfd f3, lbl_80742F78@l(r4)
    mulhw r0, r0, r3
    lfs f1, lbl_80883114
    fsubs f0, f30, f29
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmadds f2, f0, f1, f29
lbl_fn_80233D74_00001030:
    lwz r0, 0x7c(r31)
    fadds f0, f31, f2
    clrlwi. r0, r0, 31
    stfs f0, 0x108(r30)
    beq lbl_fn_80233D74_0000104C
    lfs f31, lbl_808830D4
    b lbl_fn_80233D74_00001050
lbl_fn_80233D74_0000104C:
    lfs f31, lbl_808830D0
lbl_fn_80233D74_00001050:
    lfs f0, lbl_808830D0
    lfs f30, 0x14c(r31)
    fcmpu cr0, f0, f30
    beq lbl_fn_80233D74_000010B0
    fneg f29, f30
    bl fn_80680CF8
    lis r5, 0x4178
    lis r4, lbl_80742F78@ha
    addi r0, r5, 0x749f
    lfd f3, lbl_80742F78@l(r4)
    mulhw r0, r0, r3
    lfs f1, lbl_80883114
    fsubs f0, f30, f29
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmadds f0, f0, f1, f29
lbl_fn_80233D74_000010B0:
    lfs f1, lbl_808830D0
    fadds f0, f31, f0
    lfs f30, 0x150(r31)
    stfs f0, 0xe4(r30)
    fcmpu cr0, f1, f30
    beq lbl_fn_80233D74_00001118
    fneg f29, f30
    bl fn_80680CF8
    lis r5, 0x4178
    lis r4, lbl_80742F78@ha
    addi r0, r5, 0x749f
    lfd f3, lbl_80742F78@l(r4)
    mulhw r0, r0, r3
    lfs f1, lbl_80883114
    fsubs f0, f30, f29
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmadds f1, f0, f1, f29
lbl_fn_80233D74_00001118:
    lfs f2, lbl_808830D0
    fadds f0, f31, f1
    lfs f30, 0x154(r31)
    stfs f0, 0xe8(r30)
    fcmpu cr0, f2, f30
    beq lbl_fn_80233D74_00001180
    fneg f29, f30
    bl fn_80680CF8
    lis r5, 0x4178
    lis r4, lbl_80742F78@ha
    addi r0, r5, 0x749f
    lfd f3, lbl_80742F78@l(r4)
    mulhw r0, r0, r3
    lfs f1, lbl_80883114
    fsubs f0, f30, f29
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmadds f2, f0, f1, f29
lbl_fn_80233D74_00001180:
    lwz r0, 0x8c(r31)
    fadds f0, f31, f2
    clrlwi. r0, r0, 31
    stfs f0, 0xec(r30)
    beq lbl_fn_80233D74_0000119C
    lfs f31, lbl_808830D4
    b lbl_fn_80233D74_000011A0
lbl_fn_80233D74_0000119C:
    lfs f31, lbl_808830D0
lbl_fn_80233D74_000011A0:
    lfs f0, lbl_808830D0
    lfs f30, 0x1e0(r31)
    fcmpu cr0, f0, f30
    beq lbl_fn_80233D74_00001200
    fneg f29, f30
    bl fn_80680CF8
    lis r5, 0x4178
    lis r4, lbl_80742F78@ha
    addi r0, r5, 0x749f
    lfd f3, lbl_80742F78@l(r4)
    mulhw r0, r0, r3
    lfs f1, lbl_80883114
    fsubs f0, f30, f29
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmadds f0, f0, f1, f29
lbl_fn_80233D74_00001200:
    lfs f1, lbl_808830D0
    fadds f0, f31, f0
    lfs f30, 0x1d4(r31)
    stfs f0, 0xfc(r30)
    fcmpu cr0, f1, f30
    beq lbl_fn_80233D74_00001268
    fneg f29, f30
    bl fn_80680CF8
    lis r5, 0x4178
    lis r4, lbl_80742F78@ha
    addi r0, r5, 0x749f
    lfd f3, lbl_80742F78@l(r4)
    mulhw r0, r0, r3
    lfs f1, lbl_80883114
    fsubs f0, f30, f29
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmadds f1, f0, f1, f29
lbl_fn_80233D74_00001268:
    lfs f2, lbl_808830D0
    fadds f0, f31, f1
    lfs f30, 0x1d8(r31)
    stfs f0, 0xf0(r30)
    fcmpu cr0, f2, f30
    beq lbl_fn_80233D74_000012D0
    fneg f29, f30
    bl fn_80680CF8
    lis r5, 0x4178
    lis r4, lbl_80742F78@ha
    addi r0, r5, 0x749f
    lfd f3, lbl_80742F78@l(r4)
    mulhw r0, r0, r3
    lfs f1, lbl_80883114
    fsubs f0, f30, f29
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmadds f2, f0, f1, f29
lbl_fn_80233D74_000012D0:
    lfs f1, lbl_808830D0
    fadds f0, f31, f2
    lfs f30, 0x1dc(r31)
    stfs f0, 0xf4(r30)
    fcmpu cr0, f1, f30
    beq lbl_fn_80233D74_00001338
    fneg f29, f30
    bl fn_80680CF8
    lis r5, 0x4178
    lis r4, lbl_80742F78@ha
    addi r0, r5, 0x749f
    lfd f3, lbl_80742F78@l(r4)
    mulhw r0, r0, r3
    lfs f1, lbl_80883114
    fsubs f0, f30, f29
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmadds f1, f0, f1, f29
lbl_fn_80233D74_00001338:
    lwz r0, 0x6c(r31)
    fadds f0, f31, f1
    clrlwi. r0, r0, 31
    stfs f0, 0xf8(r30)
    beq lbl_fn_80233D74_00001354
    lfs f31, lbl_808830D4
    b lbl_fn_80233D74_00001358
lbl_fn_80233D74_00001354:
    lfs f31, lbl_808830D0
lbl_fn_80233D74_00001358:
    lfs f0, lbl_808830D0
    lfs f30, 0xd4(r31)
    fcmpu cr0, f0, f30
    beq lbl_fn_80233D74_000013B8
    fneg f29, f30
    bl fn_80680CF8
    lis r5, 0x4178
    lis r4, lbl_80742F78@ha
    addi r0, r5, 0x749f
    lfd f3, lbl_80742F78@l(r4)
    mulhw r0, r0, r3
    lfs f1, lbl_80883114
    fsubs f0, f30, f29
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmadds f0, f0, f1, f29
lbl_fn_80233D74_000013B8:
    lfs f1, lbl_808830D0
    fadds f0, f31, f0
    lfs f30, 0xd8(r31)
    stfs f0, 0x114(r30)
    fcmpu cr0, f1, f30
    beq lbl_fn_80233D74_00001420
    fneg f29, f30
    bl fn_80680CF8
    lis r5, 0x4178
    lis r4, lbl_80742F78@ha
    addi r0, r5, 0x749f
    lfd f3, lbl_80742F78@l(r4)
    mulhw r0, r0, r3
    lfs f1, lbl_80883114
    fsubs f0, f30, f29
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmadds f1, f0, f1, f29
lbl_fn_80233D74_00001420:
    lfs f2, lbl_808830D0
    fadds f0, f31, f1
    lfs f30, 0xdc(r31)
    stfs f0, 0x118(r30)
    fcmpu cr0, f2, f30
    beq lbl_fn_80233D74_00001488
    fneg f29, f30
    bl fn_80680CF8
    lis r5, 0x4178
    lis r4, lbl_80742F78@ha
    addi r0, r5, 0x749f
    lfd f3, lbl_80742F78@l(r4)
    mulhw r0, r0, r3
    lfs f1, lbl_80883114
    fsubs f0, f30, f29
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmadds f2, f0, f1, f29
lbl_fn_80233D74_00001488:
    lwz r0, 0x74(r31)
    fadds f0, f31, f2
    clrlwi. r0, r0, 31
    stfs f0, 0x11c(r30)
    beq lbl_fn_80233D74_000014A4
    lfs f31, lbl_808830D4
    b lbl_fn_80233D74_000014A8
lbl_fn_80233D74_000014A4:
    lfs f31, lbl_808830D0
lbl_fn_80233D74_000014A8:
    lfs f0, lbl_808830D0
    lfs f30, 0x110(r31)
    fcmpu cr0, f0, f30
    beq lbl_fn_80233D74_00001508
    fneg f29, f30
    bl fn_80680CF8
    lis r5, 0x4178
    lis r4, lbl_80742F78@ha
    addi r0, r5, 0x749f
    lfd f3, lbl_80742F78@l(r4)
    mulhw r0, r0, r3
    lfs f1, lbl_80883114
    fsubs f0, f30, f29
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmadds f0, f0, f1, f29
lbl_fn_80233D74_00001508:
    lfs f1, lbl_808830D0
    fadds f0, f31, f0
    lfs f30, 0x114(r31)
    stfs f0, 0x120(r30)
    fcmpu cr0, f1, f30
    beq lbl_fn_80233D74_00001570
    fneg f29, f30
    bl fn_80680CF8
    lis r5, 0x4178
    lis r4, lbl_80742F78@ha
    addi r0, r5, 0x749f
    lfd f3, lbl_80742F78@l(r4)
    mulhw r0, r0, r3
    lfs f1, lbl_80883114
    fsubs f0, f30, f29
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmadds f1, f0, f1, f29
lbl_fn_80233D74_00001570:
    lfs f2, lbl_808830D0
    fadds f0, f31, f1
    lfs f30, 0x118(r31)
    stfs f0, 0x124(r30)
    fcmpu cr0, f2, f30
    beq lbl_fn_80233D74_000015D8
    fneg f29, f30
    bl fn_80680CF8
    lis r5, 0x4178
    lis r4, lbl_80742F78@ha
    addi r0, r5, 0x749f
    lfd f3, lbl_80742F78@l(r4)
    mulhw r0, r0, r3
    lfs f1, lbl_80883114
    fsubs f0, f30, f29
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmadds f2, f0, f1, f29
lbl_fn_80233D74_000015D8:
    lfs f28, lbl_808830D0
    fadds f0, f31, f2
    lfs f30, 0x1f4(r31)
    stfs f0, 0x128(r30)
    fcmpu cr0, f28, f30
    beq lbl_fn_80233D74_00001644
    fneg f29, f30
    bl fn_80680CF8
    lis r5, 0x4178
    lis r4, lbl_80742F78@ha
    addi r0, r5, 0x749f
    lfd f3, lbl_80742F78@l(r4)
    mulhw r0, r0, r3
    lfs f1, lbl_80883114
    fsubs f0, f30, f29
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmadds f0, f0, f1, f29
    b lbl_fn_80233D74_00001648
lbl_fn_80233D74_00001644:
    fmr f0, f28
lbl_fn_80233D74_00001648:
    lwz r0, 0x9c(r31)
    fadds f0, f28, f0
    clrlwi. r0, r0, 31
    stfs f0, 0x12c(r30)
    beq lbl_fn_80233D74_00001664
    lfs f31, lbl_808830D4
    b lbl_fn_80233D74_00001668
lbl_fn_80233D74_00001664:
    lfs f31, lbl_808830D0
lbl_fn_80233D74_00001668:
    lfs f0, lbl_808830D0
    lfs f30, 0x228(r31)
    fcmpu cr0, f0, f30
    beq lbl_fn_80233D74_000016C8
    fneg f29, f30
    bl fn_80680CF8
    lis r5, 0x4178
    lis r4, lbl_80742F78@ha
    addi r0, r5, 0x749f
    lfd f3, lbl_80742F78@l(r4)
    mulhw r0, r0, r3
    lfs f1, lbl_80883114
    fsubs f0, f30, f29
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmadds f0, f0, f1, f29
lbl_fn_80233D74_000016C8:
    lfs f1, lbl_808830D0
    fadds f0, f31, f0
    lfs f30, 0x22c(r31)
    stfs f0, 0x130(r30)
    fcmpu cr0, f1, f30
    beq lbl_fn_80233D74_00001730
    fneg f29, f30
    bl fn_80680CF8
    lis r5, 0x4178
    lis r4, lbl_80742F78@ha
    addi r0, r5, 0x749f
    lfd f3, lbl_80742F78@l(r4)
    mulhw r0, r0, r3
    lfs f1, lbl_80883114
    fsubs f0, f30, f29
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmadds f1, f0, f1, f29
lbl_fn_80233D74_00001730:
    lfs f2, lbl_808830D0
    fadds f0, f31, f1
    lfs f30, 0x230(r31)
    stfs f0, 0x134(r30)
    fcmpu cr0, f2, f30
    beq lbl_fn_80233D74_00001798
    fneg f29, f30
    bl fn_80680CF8
    lis r5, 0x4178
    lis r4, lbl_80742F78@ha
    addi r0, r5, 0x749f
    lfd f3, lbl_80742F78@l(r4)
    mulhw r0, r0, r3
    lfs f1, lbl_80883114
    fsubs f0, f30, f29
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmadds f2, f0, f1, f29
lbl_fn_80233D74_00001798:
    fadds f0, f31, f2
    stfs f0, 0x138(r30)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    psq_l f29, 0x38(r1), 0, 0
    lfd f29, 0x30(r1)
    psq_l f28, 0x28(r1), 0, 0
    lfd f28, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_802346AC(void)
{
    nofralloc
    stw r3, lbl_8087F370
    blr
}

asm void fn_802346B4(void)
{
    nofralloc
    lwz r3, lbl_8087F370
    blr
}

asm void fn_802346BC(void)
{
    nofralloc
    lwz r3, 0xc(r3)
    b lbl_fn_802346BC_0000180C
lbl_fn_802346BC_000017F0:
    lwz r0, 0x2c(r3)
    clrrwi r0, r0, 16
    cmplw r0, r4
    bne lbl_fn_802346BC_00001808
    li r3, 0x1
    blr
lbl_fn_802346BC_00001808:
    lwz r3, 0x4(r3)
lbl_fn_802346BC_0000180C:
    cmpwi r3, 0x0
    bne lbl_fn_802346BC_000017F0
    li r3, 0x0
    blr
}

asm void fn_802346F0(void)
{
    nofralloc
    lwz r7, 0xc(r3)
    clrlwi r6, r5, 16
    b lbl_fn_802346F0_00001844
lbl_fn_802346F0_00001828:
    lwz r0, 0x2c(r7)
    cmplw r0, r4
    bne lbl_fn_802346F0_00001840
    lhz r0, 0x18(r7)
    or r0, r0, r6
    sth r0, 0x18(r7)
lbl_fn_802346F0_00001840:
    lwz r7, 0x4(r7)
lbl_fn_802346F0_00001844:
    cmpwi r7, 0x0
    bne lbl_fn_802346F0_00001828
    li r7, 0x0
    li r6, 0x0
    b lbl_fn_802346F0_00001880
lbl_fn_802346F0_00001858:
    lwz r0, 0x24(r3)
    add r8, r0, r6
    lwz r0, 0x30(r8)
    cmplw r0, r4
    bne lbl_fn_802346F0_00001878
    lwz r0, 0x34(r8)
    or r0, r0, r5
    stw r0, 0x34(r8)
lbl_fn_802346F0_00001878:
    addi r6, r6, 0x94
    addi r7, r7, 0x1
lbl_fn_802346F0_00001880:
    lwz r0, 0x20(r3)
    cmpw r7, r0
    blt lbl_fn_802346F0_00001858
    blr
}

asm void fn_80234764(void)
{
    nofralloc
    lwz r6, 0xc(r3)
    b lbl_fn_80234764_000018B8
lbl_fn_80234764_00001898:
    lwz r0, 0x2c(r6)
    cmplw r0, r4
    bne lbl_fn_80234764_000018B4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0xd0(r6), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0xd8(r6)
lbl_fn_80234764_000018B4:
    lwz r6, 0x4(r6)
lbl_fn_80234764_000018B8:
    cmpwi r6, 0x0
    bne lbl_fn_80234764_00001898
    li r7, 0x0
    li r6, 0x0
    b lbl_fn_80234764_000018F8
lbl_fn_80234764_000018CC:
    lwz r0, 0x24(r3)
    add r8, r0, r6
    lwz r0, 0x30(r8)
    cmplw r0, r4
    bne lbl_fn_80234764_000018F0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x78(r8), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x80(r8)
lbl_fn_80234764_000018F0:
    addi r7, r7, 0x1
    addi r6, r6, 0x94
lbl_fn_80234764_000018F8:
    lwz r0, 0x20(r3)
    cmpw r7, r0
    blt lbl_fn_80234764_000018CC
    blr
}

asm void fn_802347DC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x30
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    bl _savegpr_25
    lwz r6, 0xc(r3)
    mr r25, r3
    mr r26, r4
    mr r27, r5
    li r3, 0x1
    b lbl_fn_802347DC_0000197C
lbl_fn_802347DC_00001944:
    lwz r0, 0x2c(r6)
    lwz r7, 0x4(r6)
    cmplw r0, r4
    bne lbl_fn_802347DC_00001978
    cmpwi r5, 0x0
    bne lbl_fn_802347DC_0000196C
    cmpwi r6, 0x0
    beq lbl_fn_802347DC_00001978
    stb r3, 0x1b(r6)
    b lbl_fn_802347DC_00001978
lbl_fn_802347DC_0000196C:
    lbz r0, 0x1a(r6)
    rlwinm r0, r0, 0, 24, 24
    stb r0, 0x1a(r6)
lbl_fn_802347DC_00001978:
    mr r6, r7
lbl_fn_802347DC_0000197C:
    cmpwi r6, 0x0
    bne lbl_fn_802347DC_00001944
    lfs f30, lbl_80883110
    li r28, 0x0
    lfs f31, lbl_808830D0
    li r29, 0x0
    li r30, 0x1
    li r31, 0x0
    b lbl_fn_802347DC_000019DC
lbl_fn_802347DC_000019A0:
    lwz r0, 0x24(r25)
    add r3, r0, r29
    lwz r0, 0x30(r3)
    cmplw r0, r26
    bne lbl_fn_802347DC_000019D4
    cmpwi r27, 0x0
    bne lbl_fn_802347DC_000019C4
    bl fn_80238560
    b lbl_fn_802347DC_000019D4
lbl_fn_802347DC_000019C4:
    stb r30, 0x14(r3)
    stw r31, 0x18(r3)
    stfs f30, 0x1c(r3)
    stfs f31, 0x20(r3)
lbl_fn_802347DC_000019D4:
    addi r29, r29, 0x94
    addi r28, r28, 0x1
lbl_fn_802347DC_000019DC:
    lwz r0, 0x20(r25)
    cmpw r28, r0
    blt lbl_fn_802347DC_000019A0
    addi r11, r1, 0x30
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    bl _restgpr_25
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
