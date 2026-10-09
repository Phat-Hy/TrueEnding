#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _savegpr_22(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void fn_800551BC(void);
extern void fn_800E2A24(void);
extern void fn_800FDF14(void);
extern void fn_80108C10(void);
extern void fn_8010B250(void);
extern void fn_80134234(void);
extern void fn_80148B0C(void);
extern void fn_801533C8(void);
extern void fn_80154E38(void);
extern void fn_8016F368(void);
extern void fn_8016F3D0(void);
extern void fn_801789D8(void);
extern void fn_8017A228(void);
extern void fn_8017AC24(void);
extern void fn_8021A7A0(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);

/* External data declarations */

/* Small data declarations */
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F610;
extern u32 lbl_80881478;
extern u32 lbl_80881494;
extern u32 lbl_8088149C;
extern u32 lbl_808814B8;
extern u32 lbl_808814D4;
extern u32 lbl_80881500;
extern u32 lbl_8088153C;

/* Function declarations */
void fn_800FBE70(void);
void fn_800FC1D0(void);
void fn_800FC410(void);
void fn_800FCD1C(void);
void fn_800FCD24(void);

asm void fn_800FBE70(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xc0
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stfd f30, 0xd0(r1)
    psq_st f30, 0xd8(r1), 0, 0
    stfd f29, 0xc0(r1)
    psq_st f29, 0xc8(r1), 0, 0
    bl _savegpr_24
    mr r25, r5
    mr r26, r6
    mr r30, r4
    mr r4, r7
    mr r27, r8
    mr r28, r9
    mr r24, r10
    mr r3, r25
    mr r5, r26
    bl fn_801533C8
    cmpwi r3, 0x0
    beq lbl_fn_800FBE70_00000064
    li r3, -0x1
    b lbl_fn_800FBE70_00000330
lbl_fn_800FBE70_00000064:
    cmpwi r28, 0x0
    bne lbl_fn_800FBE70_0000014C
    cmpwi r30, 0x0
    beq lbl_fn_800FBE70_000000FC
    lwz r0, 0x64(r26)
    cmpwi r0, 0x4
    bne lbl_fn_800FBE70_000000B4
    mr r3, r30
    mr r4, r25
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_800FBE70_000000B4
    mr r3, r30
    mr r4, r25
    bl fn_80154E38
    cmpwi r3, 0x0
    bne lbl_fn_800FBE70_000000B4
    li r3, -0x1
    b lbl_fn_800FBE70_00000330
lbl_fn_800FBE70_000000B4:
    lwz r0, 0x64(r26)
    cmpwi r0, 0x2
    bne lbl_fn_800FBE70_000000E0
    mr r3, r30
    mr r4, r25
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_800FBE70_000000E0
    li r3, -0x1
    b lbl_fn_800FBE70_00000330
lbl_fn_800FBE70_000000E0:
    lwz r0, 0x64(r26)
    cmpwi r0, 0x0
    bne lbl_fn_800FBE70_0000014C
    cmplw r30, r25
    beq lbl_fn_800FBE70_0000014C
    li r3, -0x1
    b lbl_fn_800FBE70_00000330
lbl_fn_800FBE70_000000FC:
    lwz r0, 0x64(r26)
    cmpwi r0, 0x4
    bne lbl_fn_800FBE70_00000124
    mr r3, r25
    mr r4, r24
    bl fn_8016F368
    cmpwi r3, 0x0
    beq lbl_fn_800FBE70_00000124
    li r3, -0x1
    b lbl_fn_800FBE70_00000330
lbl_fn_800FBE70_00000124:
    lwz r0, 0x64(r26)
    cmpwi r0, 0x2
    bne lbl_fn_800FBE70_0000014C
    mr r3, r25
    mr r4, r24
    bl fn_8016F368
    cmpwi r3, 0x0
    bne lbl_fn_800FBE70_0000014C
    li r3, -0x1
    b lbl_fn_800FBE70_00000330
lbl_fn_800FBE70_0000014C:
    lwz r0, 0x55c(r25)
    cmpwi r0, 0x6
    bne lbl_fn_800FBE70_0000016C
    lwz r0, 0x560(r25)
    cmpwi r0, 0x41
    bne lbl_fn_800FBE70_0000016C
    li r3, -0x1
    b lbl_fn_800FBE70_00000330
lbl_fn_800FBE70_0000016C:
    lfs f31, lbl_808814B8
    mr r3, r26
    lfs f30, lbl_80881494
    li r29, -0x1
    bl fn_8021A7A0
    cmpwi r3, 0x0
    beq lbl_fn_800FBE70_0000019C
    cmpwi r30, 0x0
    beq lbl_fn_800FBE70_0000019C
    mr r3, r30
    bl fn_8017AC24
    fmr f30, f1
lbl_fn_800FBE70_0000019C:
    addi r31, r1, 0x28
    addi r30, r1, 0x18
    li r28, 0x0
    li r24, 0x0
    b lbl_fn_800FBE70_00000320
lbl_fn_800FBE70_000001B0:
    mr r3, r25
    mr r4, r28
    bl fn_80148B0C
    cmpwi r3, 0x0
    beq lbl_fn_800FBE70_00000228
    lwz r0, 0x4(r26)
    li r5, 0x0
    lwz r4, 0x0(r3)
    cmpwi r0, 0xcb
    bne lbl_fn_800FBE70_000001EC
    rlwinm r0, r4, 0, 29, 29
    cmpwi r0, 0x4
    bne lbl_fn_800FBE70_00000220
    li r5, 0x1
    b lbl_fn_800FBE70_00000220
lbl_fn_800FBE70_000001EC:
    lbz r6, 0x1(r26)
    cmpwi r6, 0x1
    bne lbl_fn_800FBE70_00000208
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x2
    bne lbl_fn_800FBE70_00000208
    li r5, 0x1
lbl_fn_800FBE70_00000208:
    extsb. r0, r6
    bne lbl_fn_800FBE70_00000220
    clrlwi r0, r4, 31
    cmpwi r0, 0x1
    bne lbl_fn_800FBE70_00000220
    li r5, 0x1
lbl_fn_800FBE70_00000220:
    cmpwi r5, 0x0
    bne lbl_fn_800FBE70_0000031C
lbl_fn_800FBE70_00000228:
    cmpwi r28, 0x0
    bne lbl_fn_800FBE70_000002B4
    lwz r0, 0x12a8(r25)
    extrwi. r0, r0, 1, 2
    beq lbl_fn_800FBE70_000002B4
    psq_l f1, 0x5f4(r25), 0, 0
    mr r4, r31
    lfs f2, 0x5fc(r25)
    mr r5, r30
    stfs f2, 0x30(r1)
    addi r3, r1, 0x48
    psq_st f1, 0x0(r31), 0, 0
    psq_l f1, 0x600(r25), 0, 0
    lfs f2, 0x608(r25)
    stfs f2, 0x3c(r1)
    lfs f2, 0x8(r27)
    psq_st f1, 0xc(r31), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    lfs f0, 0x60c(r25)
    stfs f0, 0x40(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x20(r1)
    lfs f0, 0x58(r26)
    fmuls f0, f0, f30
    stw r24, 0x7c(r1)
    stfs f0, 0x24(r1)
    stw r24, 0x80(r1)
    stw r24, 0x84(r1)
    stw r24, 0x88(r1)
    bl fn_800551BC
    cmpwi r3, 0x0
    beq lbl_fn_800FBE70_0000031C
    lfs f31, lbl_80881478
    mr r29, r28
    b lbl_fn_800FBE70_0000031C
lbl_fn_800FBE70_000002B4:
    cmpwi r3, 0x0
    beq lbl_fn_800FBE70_0000031C
    lfs f3, 0x8(r27)
    lfs f0, 0xc(r3)
    lfs f5, 0x4(r27)
    fsubs f6, f3, f0
    lfs f4, 0x8(r3)
    lfs f3, 0x0(r27)
    fsubs f7, f5, f4
    lfs f0, 0x4(r3)
    lfs f4, 0x10(r3)
    lfs f5, 0x58(r26)
    fsubs f0, f3, f0
    addi r3, r1, 0x8
    fmadds f29, f5, f30, f4
    stfs f0, 0x8(r1)
    stfs f7, 0xc(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9920
    fmuls f0, f29, f29
    fcmpo cr0, f1, f0
    bge lbl_fn_800FBE70_0000031C
    fcmpo cr0, f1, f31
    bge lbl_fn_800FBE70_0000031C
    mr r29, r28
    fmr f31, f1
lbl_fn_800FBE70_0000031C:
    addi r28, r28, 0x1
lbl_fn_800FBE70_00000320:
    lwz r0, 0x624(r25)
    cmplw r28, r0
    blt lbl_fn_800FBE70_000001B0
    mr r3, r29
lbl_fn_800FBE70_00000330:
    addi r11, r1, 0xc0
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    psq_l f30, 0xd8(r1), 0, 0
    lfd f30, 0xd0(r1)
    psq_l f29, 0xc8(r1), 0, 0
    lfd f29, 0xc0(r1)
    bl _restgpr_24
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_800FC1D0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x30
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    bl _savegpr_26
    mr r29, r5
    mr r30, r6
    mr r26, r4
    mr r4, r7
    mr r31, r8
    mr r28, r9
    mr r27, r10
    mr r3, r29
    mr r5, r30
    bl fn_801533C8
    cmpwi r3, 0x0
    beq lbl_fn_800FC1D0_000003B4
    li r3, -0x1
    b lbl_fn_800FC1D0_00000580
lbl_fn_800FC1D0_000003B4:
    cmpwi r28, 0x0
    bne lbl_fn_800FC1D0_0000049C
    cmpwi r26, 0x0
    beq lbl_fn_800FC1D0_0000044C
    lwz r0, 0x64(r30)
    cmpwi r0, 0x4
    bne lbl_fn_800FC1D0_00000404
    mr r3, r26
    mr r4, r29
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_800FC1D0_00000404
    mr r3, r26
    mr r4, r29
    bl fn_80154E38
    cmpwi r3, 0x0
    bne lbl_fn_800FC1D0_00000404
    li r3, -0x1
    b lbl_fn_800FC1D0_00000580
lbl_fn_800FC1D0_00000404:
    lwz r0, 0x64(r30)
    cmpwi r0, 0x2
    bne lbl_fn_800FC1D0_00000430
    mr r3, r26
    mr r4, r29
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_800FC1D0_00000430
    li r3, -0x1
    b lbl_fn_800FC1D0_00000580
lbl_fn_800FC1D0_00000430:
    lwz r0, 0x64(r30)
    cmpwi r0, 0x0
    bne lbl_fn_800FC1D0_0000049C
    cmplw r26, r29
    beq lbl_fn_800FC1D0_0000049C
    li r3, -0x1
    b lbl_fn_800FC1D0_00000580
lbl_fn_800FC1D0_0000044C:
    lwz r0, 0x64(r30)
    cmpwi r0, 0x4
    bne lbl_fn_800FC1D0_00000474
    mr r3, r29
    mr r4, r27
    bl fn_8016F368
    cmpwi r3, 0x0
    beq lbl_fn_800FC1D0_00000474
    li r3, -0x1
    b lbl_fn_800FC1D0_00000580
lbl_fn_800FC1D0_00000474:
    lwz r0, 0x64(r30)
    cmpwi r0, 0x2
    bne lbl_fn_800FC1D0_0000049C
    mr r3, r29
    mr r4, r27
    bl fn_8016F368
    cmpwi r3, 0x0
    bne lbl_fn_800FC1D0_0000049C
    li r3, -0x1
    b lbl_fn_800FC1D0_00000580
lbl_fn_800FC1D0_0000049C:
    lfs f31, lbl_808814B8
    li r28, -0x1
    li r27, 0x0
    b lbl_fn_800FC1D0_00000570
lbl_fn_800FC1D0_000004AC:
    mr r3, r29
    mr r4, r27
    bl fn_80148B0C
    cmpwi r3, 0x0
    beq lbl_fn_800FC1D0_0000056C
    lwz r0, 0x4(r30)
    li r5, 0x0
    lwz r4, 0x0(r3)
    cmpwi r0, 0xcb
    bne lbl_fn_800FC1D0_000004E8
    rlwinm r0, r4, 0, 29, 29
    cmpwi r0, 0x4
    bne lbl_fn_800FC1D0_0000051C
    li r5, 0x1
    b lbl_fn_800FC1D0_0000051C
lbl_fn_800FC1D0_000004E8:
    lbz r6, 0x1(r30)
    cmpwi r6, 0x1
    bne lbl_fn_800FC1D0_00000504
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x2
    bne lbl_fn_800FC1D0_00000504
    li r5, 0x1
lbl_fn_800FC1D0_00000504:
    extsb. r0, r6
    bne lbl_fn_800FC1D0_0000051C
    clrlwi r0, r4, 31
    cmpwi r0, 0x1
    bne lbl_fn_800FC1D0_0000051C
    li r5, 0x1
lbl_fn_800FC1D0_0000051C:
    cmpwi r5, 0x0
    bne lbl_fn_800FC1D0_0000056C
    lfs f1, 0x8(r31)
    lfs f0, 0xc(r3)
    lfs f3, 0x4(r31)
    fsubs f4, f1, f0
    lfs f2, 0x8(r3)
    lfs f0, 0x4(r3)
    addi r3, r1, 0x8
    lfs f1, 0x0(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f4, 0x10(r1)
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_800FC1D0_0000056C
    mr r28, r27
    fmr f31, f1
lbl_fn_800FC1D0_0000056C:
    addi r27, r27, 0x1
lbl_fn_800FC1D0_00000570:
    lwz r0, 0x624(r29)
    cmplw r27, r0
    blt lbl_fn_800FC1D0_000004AC
    mr r3, r28
lbl_fn_800FC1D0_00000580:
    addi r11, r1, 0x30
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800FC410(void)
{
    nofralloc
    stwu r1, -0x290(r1)
    mflr r0
    stw r0, 0x294(r1)
    addi r11, r1, 0x280
    stfd f31, 0x280(r1)
    psq_st f31, 0x288(r1), 0, 0
    bl _savegpr_24
    mr r25, r3
    addis r3, r3, 0x4
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    mr r30, r8
    mr r31, r9
    subi r3, r3, 0x75a4
    bl fn_800E2A24
    addis r3, r25, 0x4
    cmpwi r28, 0x0
    stw r26, -0x75a4(r3)
    addi r24, r1, 0xbc
    stw r27, -0x75a0(r3)
    stw r28, -0x7564(r3)
    stw r29, -0x759c(r3)
    bne lbl_fn_800FC410_0000066C
    lwz r0, 0x12a8(r27)
    extrwi. r0, r0, 1, 2
    beq lbl_fn_800FC410_0000066C
    addi r3, r1, 0x38
    psq_l f1, 0x5f4(r27), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x44
    psq_l f1, 0x600(r27), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x3c(r1)
    lfs f7, 0x48(r1)
    psq_l f1, 0x5f4(r27), 0, 0
    fsubs f7, f7, f0
    lfs f0, lbl_80881500
    psq_st f1, 0x0(r24), 0, 0
    lfs f2, 0x5fc(r27)
    fmuls f7, f0, f7
    lfs f0, 0xc0(r1)
    stfs f2, 0x40(r1)
    lfs f2, 0x608(r27)
    fadds f0, f0, f7
    stfs f2, 0x4c(r1)
    lfs f2, 0x5fc(r27)
    stfs f2, 0xc4(r1)
    stfs f0, 0xc0(r1)
    b lbl_fn_800FC410_00000688
lbl_fn_800FC410_0000066C:
    mr r3, r27
    mr r4, r28
    bl fn_80148B0C
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0xc4(r1)
lbl_fn_800FC410_00000688:
    lfs f7, 0x530(r26)
    addi r3, r1, 0xc8
    lfs f0, 0xc4(r1)
    lfs f9, 0x52c(r26)
    fsubs f10, f7, f0
    lfs f8, 0xc0(r1)
    lfs f7, 0x528(r26)
    lfs f0, 0xbc(r1)
    fsubs f8, f9, f8
    stfs f10, 0xd0(r1)
    fsubs f0, f7, f0
    stfs f8, 0xcc(r1)
    stfs f0, 0xc8(r1)
    bl fn_805F9920
    fabs f7, f1
    lfs f0, lbl_808814D4
    frsp f7, f7
    fcmpo cr0, f7, f0
    blt lbl_fn_800FC410_000007E4
    addi r3, r1, 0xc8
    mr r4, r3
    bl fn_805F98D0
    lfs f9, 0x5b0(r27)
    cmpwi r28, 0x0
    lfs f8, 0xc8(r1)
    addi r24, r1, 0xa4
    lfs f7, 0xcc(r1)
    lfs f0, 0xd0(r1)
    fmuls f8, f8, f9
    fmuls f7, f7, f9
    fmuls f0, f0, f9
    stfs f8, 0xc8(r1)
    stfs f7, 0xcc(r1)
    stfs f0, 0xd0(r1)
    bne lbl_fn_800FC410_0000077C
    lwz r0, 0x12a8(r27)
    extrwi. r0, r0, 1, 2
    beq lbl_fn_800FC410_0000077C
    addi r3, r1, 0x20
    psq_l f1, 0x5f4(r27), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x2c
    psq_l f1, 0x600(r27), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x24(r1)
    lfs f7, 0x30(r1)
    psq_l f1, 0x5f4(r27), 0, 0
    fsubs f7, f7, f0
    lfs f0, lbl_80881500
    psq_st f1, 0x0(r24), 0, 0
    lfs f2, 0x5fc(r27)
    fmuls f7, f0, f7
    lfs f0, 0xa8(r1)
    stfs f2, 0x28(r1)
    lfs f2, 0x608(r27)
    fadds f0, f0, f7
    stfs f2, 0x34(r1)
    lfs f2, 0x5fc(r27)
    stfs f2, 0xac(r1)
    stfs f0, 0xa8(r1)
    b lbl_fn_800FC410_00000798
lbl_fn_800FC410_0000077C:
    mr r3, r27
    mr r4, r28
    bl fn_80148B0C
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0xac(r1)
lbl_fn_800FC410_00000798:
    lfs f7, 0xd0(r1)
    addis r3, r25, 0x4
    lfs f0, 0xac(r1)
    addi r4, r1, 0xb0
    lfs f9, 0xcc(r1)
    subi r3, r3, 0x7588
    fadds f2, f7, f0
    lfs f8, 0xa8(r1)
    lfs f7, 0xc8(r1)
    lfs f0, 0xa4(r1)
    fadds f8, f9, f8
    stfs f2, 0xb8(r1)
    fadds f0, f7, f0
    stfs f8, 0xb4(r1)
    stfs f0, 0xb0(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    b lbl_fn_800FC410_00000A34
lbl_fn_800FC410_000007E4:
    lfs f8, 0x5b0(r27)
    addi r24, r1, 0x228
    lfs f7, lbl_80881478
    lfs f0, lbl_80881494
    stfs f7, 0xc8(r1)
    stfs f7, 0xcc(r1)
    stfs f8, 0xd0(r1)
    stfs f7, 0x254(r1)
    stfs f7, 0x24c(r1)
    stfs f7, 0x248(r1)
    stfs f7, 0x244(r1)
    stfs f7, 0x240(r1)
    stfs f7, 0x238(r1)
    stfs f7, 0x234(r1)
    stfs f7, 0x230(r1)
    stfs f7, 0x22c(r1)
    stfs f0, 0x250(r1)
    stfs f0, 0x23c(r1)
    stfs f0, 0x228(r1)
    lfs f1, 0x53c(r27)
    fcmpu cr0, f7, f1
    beq lbl_fn_800FC410_0000088C
    addi r3, r1, 0x138
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r24
    addi r4, r1, 0x138
    addi r5, r1, 0x108
    bl fn_805F89F0
    addi r3, r1, 0x108
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    psq_st f2, 0x8(r24), 0, 0
    psq_st f3, 0x10(r24), 0, 0
    psq_st f4, 0x18(r24), 0, 0
    psq_st f5, 0x20(r24), 0, 0
    psq_st f6, 0x28(r24), 0, 0
lbl_fn_800FC410_0000088C:
    lfs f0, lbl_80881478
    lfs f1, 0x538(r27)
    fcmpu cr0, f0, f1
    beq lbl_fn_800FC410_000008EC
    addi r3, r1, 0x198
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r24
    addi r4, r1, 0x198
    addi r5, r1, 0x168
    bl fn_805F89F0
    addi r3, r1, 0x168
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    psq_st f2, 0x8(r24), 0, 0
    psq_st f3, 0x10(r24), 0, 0
    psq_st f4, 0x18(r24), 0, 0
    psq_st f5, 0x20(r24), 0, 0
    psq_st f6, 0x28(r24), 0, 0
lbl_fn_800FC410_000008EC:
    lfs f0, lbl_80881478
    lfs f1, 0x534(r27)
    fcmpu cr0, f0, f1
    beq lbl_fn_800FC410_0000094C
    addi r3, r1, 0x1f8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r24
    addi r4, r1, 0x1f8
    addi r5, r1, 0x1c8
    bl fn_805F89F0
    addi r3, r1, 0x1c8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    psq_st f2, 0x8(r24), 0, 0
    psq_st f3, 0x10(r24), 0, 0
    psq_st f4, 0x18(r24), 0, 0
    psq_st f5, 0x20(r24), 0, 0
    psq_st f6, 0x28(r24), 0, 0
lbl_fn_800FC410_0000094C:
    addi r4, r1, 0xc8
    addi r3, r1, 0x228
    mr r5, r4
    bl fn_805F93C0
    cmpwi r28, 0x0
    addi r24, r1, 0x8c
    bne lbl_fn_800FC410_000009D0
    lwz r0, 0x12a8(r27)
    extrwi. r0, r0, 1, 2
    beq lbl_fn_800FC410_000009D0
    addi r3, r1, 0x8
    psq_l f1, 0x5f4(r27), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x14
    psq_l f1, 0x600(r27), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0xc(r1)
    lfs f7, 0x18(r1)
    psq_l f1, 0x5f4(r27), 0, 0
    fsubs f7, f7, f0
    lfs f0, lbl_80881500
    psq_st f1, 0x0(r24), 0, 0
    lfs f2, 0x5fc(r27)
    fmuls f7, f0, f7
    lfs f0, 0x90(r1)
    stfs f2, 0x10(r1)
    lfs f2, 0x608(r27)
    fadds f0, f0, f7
    stfs f2, 0x1c(r1)
    lfs f2, 0x5fc(r27)
    stfs f2, 0x94(r1)
    stfs f0, 0x90(r1)
    b lbl_fn_800FC410_000009EC
lbl_fn_800FC410_000009D0:
    mr r3, r27
    mr r4, r28
    bl fn_80148B0C
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x94(r1)
lbl_fn_800FC410_000009EC:
    lfs f7, 0xd0(r1)
    addis r3, r25, 0x4
    lfs f0, 0x94(r1)
    addi r4, r1, 0x98
    lfs f9, 0xcc(r1)
    subi r3, r3, 0x7588
    fadds f2, f7, f0
    lfs f8, 0x90(r1)
    lfs f7, 0xc8(r1)
    lfs f0, 0x8c(r1)
    fadds f8, f9, f8
    stfs f2, 0xa0(r1)
    fadds f0, f7, f0
    stfs f8, 0x9c(r1)
    stfs f0, 0x98(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
lbl_fn_800FC410_00000A34:
    addi r4, r1, 0xc8
    lfs f2, 0xd0(r1)
    addi r3, r1, 0x74
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    mr r4, r3
    stfs f2, 0x7c(r1)
    bl fn_805F98D0
    lfs f0, 0x7c(r1)
    addis r4, r25, 0x4
    lfs f7, 0x78(r1)
    mr r3, r4
    fneg f8, f0
    lfs f0, 0x74(r1)
    fneg f7, f7
    addi r5, r1, 0x80
    fneg f0, f0
    cmpwi r26, 0x0
    stfs f0, 0x80(r1)
    frsp f2, f8
    subi r4, r4, 0x757c
    stfs f7, 0x84(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f8, 0x88(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    stw r30, -0x7570(r3)
    stw r31, -0x756c(r3)
    beq lbl_fn_800FC410_00000ABC
    lwz r4, 0x648(r26)
    cmpwi r4, 0x0
    beq lbl_fn_800FC410_00000ABC
    lwz r0, 0x4(r4)
    stw r0, -0x7568(r3)
lbl_fn_800FC410_00000ABC:
    addis r3, r25, 0x4
    li r0, 0x0
    stw r0, -0x7560(r3)
    mr r3, r26
    li r4, 0x0
    lwz r5, 0x8ec(r26)
    lwz r0, 0x3c(r29)
    lwz r6, 0x8f0(r27)
    add r0, r5, r0
    subf r31, r6, r0
    bl fn_8017A228
    addis r5, r25, 0x4
    li r4, 0x1
    stw r3, -0x7550(r5)
    mr r3, r26
    bl fn_8017A228
    addis r4, r25, 0x4
    li r24, 0x0
    stw r3, -0x754c(r4)
    lbz r0, 0x59d(r26)
    cmpwi r0, 0x0
    beq lbl_fn_800FC410_00000B44
    lwz r0, 0x598(r26)
    cmpwi r0, 0x0
    bne lbl_fn_800FC410_00000B2C
    li r31, 0x1
    li r24, 0x1
    b lbl_fn_800FC410_00000B44
lbl_fn_800FC410_00000B2C:
    cmpwi r0, 0x1
    bne lbl_fn_800FC410_00000B44
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_800FC410_00000B44
    addi r31, r31, 0x1
lbl_fn_800FC410_00000B44:
    addi r3, r26, 0x7d4
    bl fn_80134234
    cmpwi r3, 0x0
    beq lbl_fn_800FC410_00000BAC
    lwz r3, 0xf80(r26)
    li r4, 0x1
    cmpwi r3, 0x0
    beq lbl_fn_800FC410_00000B78
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    mr r4, r3
lbl_fn_800FC410_00000B78:
    cmpwi r4, 0x0
    ble lbl_fn_800FC410_00000BAC
    lwz r3, 0x598(r26)
    addi r0, r3, 0x1
    cmpw r0, r4
    bge lbl_fn_800FC410_00000B9C
    li r31, 0x1
    li r24, 0x1
    b lbl_fn_800FC410_00000BAC
lbl_fn_800FC410_00000B9C:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_800FC410_00000BAC
    addi r31, r31, 0x1
lbl_fn_800FC410_00000BAC:
    lbz r0, 0x59e(r26)
    cmpwi r0, 0x0
    beq lbl_fn_800FC410_00000BD4
    addis r3, r25, 0x4
    cmpwi r24, 0x0
    lwz r0, -0x7598(r3)
    ori r0, r0, 0x80
    stw r0, -0x7598(r3)
    bne lbl_fn_800FC410_00000BD4
    addi r31, r31, 0x1
lbl_fn_800FC410_00000BD4:
    lbz r0, 0x59f(r26)
    cmpwi r0, 0x0
    beq lbl_fn_800FC410_00000BF0
    addis r3, r25, 0x4
    lwz r0, -0x7598(r3)
    ori r0, r0, 0x4000
    stw r0, -0x7598(r3)
lbl_fn_800FC410_00000BF0:
    cmpwi r31, 0x4
    bgt lbl_fn_800FC410_00000C20
    cmpwi r27, 0x0
    beq lbl_fn_800FC410_00000C20
    lwz r0, 0x12a8(r27)
    extrwi. r0, r0, 1, 15
    beq lbl_fn_800FC410_00000C20
    subi r0, r31, 0x1
    li r31, 0x1
    cmpwi r0, 0x1
    ble lbl_fn_800FC410_00000C20
    mr r31, r0
lbl_fn_800FC410_00000C20:
    cmpwi r26, 0x0
    beq lbl_fn_800FC410_00000C7C
    cmpwi r27, 0x0
    beq lbl_fn_800FC410_00000C7C
    mr r3, r27
    li r4, 0x0
    lis r5, 0x40
    bl fn_801789D8
    cmpwi r3, 0x0
    beq lbl_fn_800FC410_00000C7C
    cmpwi r31, 0x4
    bgt lbl_fn_800FC410_00000C68
    subi r3, r31, 0x2
    neg r0, r3
    andc r0, r0, r3
    srawi r0, r0, 31
    and r31, r3, r0
    b lbl_fn_800FC410_00000C7C
lbl_fn_800FC410_00000C68:
    subi r3, r31, 0x1
    neg r0, r3
    andc r0, r0, r3
    srawi r0, r0, 31
    and r31, r3, r0
lbl_fn_800FC410_00000C7C:
    cmpwi r29, 0x0
    beq lbl_fn_800FC410_00000C9C
    lwz r0, 0xac(r29)
    rlwinm r3, r0, 0, 9, 9
    subis r0, r3, 0x40
    cmplwi r0, 0x0
    bne lbl_fn_800FC410_00000C9C
    lwz r31, 0x3c(r29)
lbl_fn_800FC410_00000C9C:
    addis r5, r25, 0x4
    lfs f0, 0x5a0(r26)
    stfs f0, -0x7548(r5)
    mr r3, r25
    mr r4, r31
    subi r5, r5, 0x75a4
    bl fn_8010B250
    lfs f7, 0x530(r27)
    addis r4, r25, 0x4
    lfs f0, 0x530(r26)
    mr r3, r4
    lfs f9, 0x52c(r27)
    addi r5, r1, 0x68
    fsubs f2, f7, f0
    lfs f8, 0x52c(r26)
    lfs f7, 0x528(r27)
    fmr f31, f1
    lfs f0, 0x528(r26)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x6c(r1)
    subi r4, r4, 0x7594
    subi r3, r3, 0x7594
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    bl fn_805F9920
    fabs f7, f1
    lfs f0, lbl_808814D4
    frsp f7, f7
    fcmpo cr0, f7, f0
    blt lbl_fn_800FC410_00000D3C
    addis r3, r25, 0x4
    mr r4, r3
    subi r4, r4, 0x7594
    subi r3, r3, 0x7594
    bl fn_805F98D0
    b lbl_fn_800FC410_00000DB0
lbl_fn_800FC410_00000D3C:
    lfs f7, lbl_80881478
    addi r3, r1, 0xd8
    lfs f0, lbl_80881494
    li r4, 0x79
    stfs f7, 0x50(r1)
    stfs f7, 0x54(r1)
    stfs f0, 0x58(r1)
    lfs f1, 0x538(r27)
    bl fn_805F8E70
    addi r4, r1, 0x50
    addi r3, r1, 0xd8
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x58(r1)
    addis r3, r25, 0x4
    lfs f7, 0x54(r1)
    addi r4, r1, 0x5c
    fneg f8, f0
    lfs f0, 0x50(r1)
    fneg f7, f7
    subi r3, r3, 0x7594
    fneg f0, f0
    stfs f8, 0x64(r1)
    stfs f0, 0x5c(r1)
    frsp f2, f8
    stfs f7, 0x60(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
lbl_fn_800FC410_00000DB0:
    addis r3, r25, 0x4
    lfs f8, -0x7594(r3)
    lfs f7, -0x7590(r3)
    lfs f0, -0x758c(r3)
    fmuls f8, f8, f31
    fmuls f7, f7, f31
    fmuls f0, f0, f31
    stfs f8, -0x7594(r3)
    stfs f7, -0x7590(r3)
    stfs f0, -0x758c(r3)
    lwz r0, 0x12a4(r27)
    extrwi. r0, r0, 1, 21
    beq lbl_fn_800FC410_00000E7C
    subi r3, r3, 0x7594
    bl fn_805F9920
    lfs f0, lbl_8088149C
    fcmpo cr0, f1, f0
    ble lbl_fn_800FC410_00000E7C
    lwz r4, lbl_8087F0A8
    addis r3, r25, 0x4
    lfs f8, -0x7594(r3)
    lfs f9, 0x464(r4)
    lfs f7, -0x7590(r3)
    lfs f0, -0x758c(r3)
    fmuls f8, f8, f9
    fmuls f7, f7, f9
    fmuls f0, f0, f9
    stfs f8, -0x7594(r3)
    stfs f7, -0x7590(r3)
    stfs f0, -0x758c(r3)
    subi r3, r3, 0x7594
    bl fn_805F9940
    lfs f0, lbl_8088153C
    fcmpo cr0, f1, f0
    bge lbl_fn_800FC410_00000E7C
    addis r3, r25, 0x4
    mr r4, r3
    subi r4, r4, 0x7594
    subi r3, r3, 0x7594
    bl fn_805F98D0
    addis r3, r25, 0x4
    lfs f9, lbl_8088153C
    lfs f8, -0x7594(r3)
    lfs f7, -0x7590(r3)
    lfs f0, -0x758c(r3)
    fmuls f8, f8, f9
    fmuls f7, f7, f9
    fmuls f0, f0, f9
    stfs f8, -0x7594(r3)
    stfs f7, -0x7590(r3)
    stfs f0, -0x758c(r3)
lbl_fn_800FC410_00000E7C:
    addis r4, r25, 0x4
    mr r3, r25
    subi r4, r4, 0x75a4
    bl fn_800FDF14
    addi r11, r1, 0x280
    psq_l f31, 0x288(r1), 0, 0
    lfd f31, 0x280(r1)
    bl _restgpr_24
    lwz r0, 0x294(r1)
    mtlr r0
    addi r1, r1, 0x290
    blr
}

asm void fn_800FCD1C(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_800FCD24(void)
{
    nofralloc
    stwu r1, -0x2b0(r1)
    mflr r0
    stw r0, 0x2b4(r1)
    addi r11, r1, 0x2a0
    stfd f31, 0x2a0(r1)
    psq_st f31, 0x2a8(r1), 0, 0
    bl _savegpr_22
    lwz r0, lbl_8087F610
    fmr f31, f2
    lwz r31, 0x2b8(r1)
    mr r23, r3
    cmpwi r0, 0x0
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r28, r8
    mr r29, r9
    mr r30, r10
    beq lbl_fn_800FCD24_00000F88
    lwz r0, 0x7e8(r5)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_800FCD24_00000F88
    cmpwi r7, 0x0
    beq lbl_fn_800FCD24_00000F88
    lwz r0, 0x4(r7)
    cmpwi r0, 0x142
    beq lbl_fn_800FCD24_00000F30
    cmpwi r0, 0x131
    bne lbl_fn_800FCD24_00000F88
lbl_fn_800FCD24_00000F30:
    lwz r3, 0xf4(r1)
    li r12, 0x0
    li r11, -0x1
    li r0, 0x1
    clrlwi r10, r3, 4
    stw r12, 0xe0(r1)
    mr r3, r23
    mr r5, r29
    stw r12, 0xe4(r1)
    mr r6, r24
    mr r7, r25
    addi r4, r1, 0xd8
    stw r12, 0xe8(r1)
    li r8, 0x108
    li r9, 0x0
    stw r11, 0xec(r1)
    stw r10, 0xf4(r1)
    stw r11, 0xf0(r1)
    stw r12, 0xdc(r1)
    stw r0, 0xd8(r1)
    bl fn_80108C10
    b lbl_fn_800FCD24_000017C8
lbl_fn_800FCD24_00000F88:
    addis r3, r3, 0x4
    subi r3, r3, 0x75a4
    bl fn_800E2A24
    addis r3, r23, 0x4
    cmpwi r26, 0x0
    stw r24, -0x75a4(r3)
    addi r22, r1, 0xbc
    stw r25, -0x75a0(r3)
    stw r26, -0x7564(r3)
    stw r27, -0x759c(r3)
    stfs f31, -0x7548(r3)
    bne lbl_fn_800FCD24_00001020
    lwz r0, 0x12a8(r25)
    extrwi. r0, r0, 1, 2
    beq lbl_fn_800FCD24_00001020
    addi r3, r1, 0x38
    psq_l f1, 0x5f4(r25), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x44
    psq_l f1, 0x600(r25), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x3c(r1)
    lfs f7, 0x48(r1)
    psq_l f1, 0x5f4(r25), 0, 0
    fsubs f7, f7, f0
    lfs f0, lbl_80881500
    psq_st f1, 0x0(r22), 0, 0
    lfs f2, 0x5fc(r25)
    fmuls f7, f0, f7
    lfs f0, 0xc0(r1)
    stfs f2, 0x40(r1)
    lfs f2, 0x608(r25)
    fadds f0, f0, f7
    stfs f2, 0x4c(r1)
    lfs f2, 0x5fc(r25)
    stfs f2, 0xc4(r1)
    stfs f0, 0xc0(r1)
    b lbl_fn_800FCD24_0000103C
lbl_fn_800FCD24_00001020:
    mr r3, r25
    mr r4, r26
    bl fn_80148B0C
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    psq_st f1, 0x0(r22), 0, 0
    stfs f2, 0xc4(r1)
lbl_fn_800FCD24_0000103C:
    lfs f7, 0x8(r29)
    addi r3, r1, 0xc8
    lfs f0, 0xc4(r1)
    lfs f9, 0x4(r29)
    fsubs f10, f7, f0
    lfs f8, 0xc0(r1)
    lfs f7, 0x0(r29)
    lfs f0, 0xbc(r1)
    fsubs f8, f9, f8
    stfs f10, 0xd0(r1)
    fsubs f0, f7, f0
    stfs f8, 0xcc(r1)
    stfs f0, 0xc8(r1)
    bl fn_805F9920
    fabs f7, f1
    lfs f0, lbl_808814D4
    frsp f7, f7
    fcmpo cr0, f7, f0
    blt lbl_fn_800FCD24_00001198
    addi r3, r1, 0xc8
    mr r4, r3
    bl fn_805F98D0
    lfs f9, 0x5b0(r25)
    cmpwi r26, 0x0
    lfs f8, 0xc8(r1)
    addi r22, r1, 0xa4
    lfs f7, 0xcc(r1)
    lfs f0, 0xd0(r1)
    fmuls f8, f8, f9
    fmuls f7, f7, f9
    fmuls f0, f0, f9
    stfs f8, 0xc8(r1)
    stfs f7, 0xcc(r1)
    stfs f0, 0xd0(r1)
    bne lbl_fn_800FCD24_00001130
    lwz r0, 0x12a8(r25)
    extrwi. r0, r0, 1, 2
    beq lbl_fn_800FCD24_00001130
    addi r3, r1, 0x20
    psq_l f1, 0x5f4(r25), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x2c
    psq_l f1, 0x600(r25), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x24(r1)
    lfs f7, 0x30(r1)
    psq_l f1, 0x5f4(r25), 0, 0
    fsubs f7, f7, f0
    lfs f0, lbl_80881500
    psq_st f1, 0x0(r22), 0, 0
    lfs f2, 0x5fc(r25)
    fmuls f7, f0, f7
    lfs f0, 0xa8(r1)
    stfs f2, 0x28(r1)
    lfs f2, 0x608(r25)
    fadds f0, f0, f7
    stfs f2, 0x34(r1)
    lfs f2, 0x5fc(r25)
    stfs f2, 0xac(r1)
    stfs f0, 0xa8(r1)
    b lbl_fn_800FCD24_0000114C
lbl_fn_800FCD24_00001130:
    mr r3, r25
    mr r4, r26
    bl fn_80148B0C
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    psq_st f1, 0x0(r22), 0, 0
    stfs f2, 0xac(r1)
lbl_fn_800FCD24_0000114C:
    lfs f7, 0xd0(r1)
    addis r3, r23, 0x4
    lfs f0, 0xac(r1)
    addi r4, r1, 0xb0
    lfs f9, 0xcc(r1)
    subi r3, r3, 0x7588
    fadds f2, f7, f0
    lfs f8, 0xa8(r1)
    lfs f7, 0xc8(r1)
    lfs f0, 0xa4(r1)
    fadds f8, f9, f8
    stfs f2, 0xb8(r1)
    fadds f0, f7, f0
    stfs f8, 0xb4(r1)
    stfs f0, 0xb0(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    b lbl_fn_800FCD24_000013E8
lbl_fn_800FCD24_00001198:
    lfs f8, 0x5b0(r25)
    addi r22, r1, 0x248
    lfs f7, lbl_80881478
    lfs f0, lbl_80881494
    stfs f7, 0xc8(r1)
    stfs f7, 0xcc(r1)
    stfs f8, 0xd0(r1)
    stfs f7, 0x274(r1)
    stfs f7, 0x26c(r1)
    stfs f7, 0x268(r1)
    stfs f7, 0x264(r1)
    stfs f7, 0x260(r1)
    stfs f7, 0x258(r1)
    stfs f7, 0x254(r1)
    stfs f7, 0x250(r1)
    stfs f7, 0x24c(r1)
    stfs f0, 0x270(r1)
    stfs f0, 0x25c(r1)
    stfs f0, 0x248(r1)
    lfs f1, 0x53c(r25)
    fcmpu cr0, f7, f1
    beq lbl_fn_800FCD24_00001240
    addi r3, r1, 0x158
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r22
    addi r4, r1, 0x158
    addi r5, r1, 0x128
    bl fn_805F89F0
    addi r3, r1, 0x128
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r22), 0, 0
    psq_st f2, 0x8(r22), 0, 0
    psq_st f3, 0x10(r22), 0, 0
    psq_st f4, 0x18(r22), 0, 0
    psq_st f5, 0x20(r22), 0, 0
    psq_st f6, 0x28(r22), 0, 0
lbl_fn_800FCD24_00001240:
    lfs f0, lbl_80881478
    lfs f1, 0x538(r25)
    fcmpu cr0, f0, f1
    beq lbl_fn_800FCD24_000012A0
    addi r3, r1, 0x1b8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r22
    addi r4, r1, 0x1b8
    addi r5, r1, 0x188
    bl fn_805F89F0
    addi r3, r1, 0x188
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r22), 0, 0
    psq_st f2, 0x8(r22), 0, 0
    psq_st f3, 0x10(r22), 0, 0
    psq_st f4, 0x18(r22), 0, 0
    psq_st f5, 0x20(r22), 0, 0
    psq_st f6, 0x28(r22), 0, 0
lbl_fn_800FCD24_000012A0:
    lfs f0, lbl_80881478
    lfs f1, 0x534(r25)
    fcmpu cr0, f0, f1
    beq lbl_fn_800FCD24_00001300
    addi r3, r1, 0x218
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r22
    addi r4, r1, 0x218
    addi r5, r1, 0x1e8
    bl fn_805F89F0
    addi r3, r1, 0x1e8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r22), 0, 0
    psq_st f2, 0x8(r22), 0, 0
    psq_st f3, 0x10(r22), 0, 0
    psq_st f4, 0x18(r22), 0, 0
    psq_st f5, 0x20(r22), 0, 0
    psq_st f6, 0x28(r22), 0, 0
lbl_fn_800FCD24_00001300:
    addi r4, r1, 0xc8
    addi r3, r1, 0x248
    mr r5, r4
    bl fn_805F93C0
    cmpwi r26, 0x0
    addi r22, r1, 0x8c
    bne lbl_fn_800FCD24_00001384
    lwz r0, 0x12a8(r25)
    extrwi. r0, r0, 1, 2
    beq lbl_fn_800FCD24_00001384
    addi r3, r1, 0x8
    psq_l f1, 0x5f4(r25), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x14
    psq_l f1, 0x600(r25), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0xc(r1)
    lfs f7, 0x18(r1)
    psq_l f1, 0x5f4(r25), 0, 0
    fsubs f7, f7, f0
    lfs f0, lbl_80881500
    psq_st f1, 0x0(r22), 0, 0
    lfs f2, 0x5fc(r25)
    fmuls f7, f0, f7
    lfs f0, 0x90(r1)
    stfs f2, 0x10(r1)
    lfs f2, 0x608(r25)
    fadds f0, f0, f7
    stfs f2, 0x1c(r1)
    lfs f2, 0x5fc(r25)
    stfs f2, 0x94(r1)
    stfs f0, 0x90(r1)
    b lbl_fn_800FCD24_000013A0
lbl_fn_800FCD24_00001384:
    mr r3, r25
    mr r4, r26
    bl fn_80148B0C
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    psq_st f1, 0x0(r22), 0, 0
    stfs f2, 0x94(r1)
lbl_fn_800FCD24_000013A0:
    lfs f7, 0xd0(r1)
    addis r3, r23, 0x4
    lfs f0, 0x94(r1)
    addi r4, r1, 0x98
    lfs f9, 0xcc(r1)
    subi r3, r3, 0x7588
    fadds f2, f7, f0
    lfs f8, 0x90(r1)
    lfs f7, 0xc8(r1)
    lfs f0, 0x8c(r1)
    fadds f8, f9, f8
    stfs f2, 0xa0(r1)
    fadds f0, f7, f0
    stfs f8, 0x9c(r1)
    stfs f0, 0x98(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
lbl_fn_800FCD24_000013E8:
    addi r4, r1, 0xc8
    lfs f2, 0xd0(r1)
    addi r3, r1, 0x74
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    mr r4, r3
    stfs f2, 0x7c(r1)
    bl fn_805F98D0
    lfs f0, 0x7c(r1)
    addis r4, r23, 0x4
    lfs f7, 0x78(r1)
    mr r3, r4
    fneg f8, f0
    lfs f0, 0x74(r1)
    fneg f7, f7
    addi r5, r1, 0x80
    fneg f0, f0
    cmpwi r24, 0x0
    stfs f0, 0x80(r1)
    frsp f2, f8
    subi r4, r4, 0x757c
    stfs f7, 0x84(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f8, 0x88(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    stw r28, -0x7570(r3)
    stw r30, -0x756c(r3)
    beq lbl_fn_800FCD24_00001470
    lwz r4, 0x648(r24)
    cmpwi r4, 0x0
    beq lbl_fn_800FCD24_00001470
    lwz r0, 0x4(r4)
    stw r0, -0x7568(r3)
lbl_fn_800FCD24_00001470:
    addis r3, r23, 0x4
    li r4, 0x2
    li r0, 0x0
    stw r4, -0x7560(r3)
    cmpwi r24, 0x0
    stw r0, -0x755c(r3)
    lwz r3, 0x8f0(r25)
    lwz r0, 0x3c(r27)
    subf r22, r3, r0
    beq lbl_fn_800FCD24_000014EC
    cmpwi r25, 0x0
    beq lbl_fn_800FCD24_000014EC
    mr r3, r25
    li r4, 0x0
    lis r5, 0x40
    bl fn_801789D8
    cmpwi r3, 0x0
    beq lbl_fn_800FCD24_000014EC
    cmpwi r22, 0x4
    bgt lbl_fn_800FCD24_000014D8
    subi r3, r22, 0x2
    neg r0, r3
    andc r0, r0, r3
    srawi r0, r0, 31
    and r22, r3, r0
    b lbl_fn_800FCD24_000014EC
lbl_fn_800FCD24_000014D8:
    subi r3, r22, 0x1
    neg r0, r3
    andc r0, r0, r3
    srawi r0, r0, 31
    and r22, r3, r0
lbl_fn_800FCD24_000014EC:
    addis r5, r23, 0x4
    mr r3, r23
    mr r4, r22
    subi r5, r5, 0x75a4
    bl fn_8010B250
    lfs f7, 0x530(r25)
    addis r4, r23, 0x4
    lfs f0, 0x8(r29)
    mr r3, r4
    lfs f9, 0x52c(r25)
    addi r5, r1, 0x68
    fsubs f2, f7, f0
    lfs f8, 0x4(r29)
    lfs f7, 0x528(r25)
    fmr f31, f1
    lfs f0, 0x0(r29)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x6c(r1)
    subi r4, r4, 0x7594
    subi r3, r3, 0x7594
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    bl fn_805F9920
    fabs f7, f1
    lfs f0, lbl_808814D4
    frsp f7, f7
    fcmpo cr0, f7, f0
    blt lbl_fn_800FCD24_00001584
    addis r3, r23, 0x4
    mr r4, r3
    subi r4, r4, 0x7594
    subi r3, r3, 0x7594
    bl fn_805F98D0
    b lbl_fn_800FCD24_000015F8
lbl_fn_800FCD24_00001584:
    lfs f7, lbl_80881478
    addi r3, r1, 0xf8
    lfs f0, lbl_80881494
    li r4, 0x79
    stfs f7, 0x50(r1)
    stfs f7, 0x54(r1)
    stfs f0, 0x58(r1)
    lfs f1, 0x538(r25)
    bl fn_805F8E70
    addi r4, r1, 0x50
    addi r3, r1, 0xf8
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x58(r1)
    addis r3, r23, 0x4
    lfs f7, 0x54(r1)
    addi r4, r1, 0x5c
    fneg f8, f0
    lfs f0, 0x50(r1)
    fneg f7, f7
    subi r3, r3, 0x7594
    fneg f0, f0
    stfs f8, 0x64(r1)
    stfs f0, 0x5c(r1)
    frsp f2, f8
    stfs f7, 0x60(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
lbl_fn_800FCD24_000015F8:
    addis r4, r23, 0x4
    cmpwi r24, 0x0
    lfs f8, -0x7594(r4)
    lfs f7, -0x7590(r4)
    lfs f0, -0x758c(r4)
    fmuls f8, f8, f31
    fmuls f7, f7, f31
    fmuls f9, f0, f31
    stfs f8, -0x7594(r4)
    stfs f7, -0x7590(r4)
    stfs f9, -0x758c(r4)
    beq lbl_fn_800FCD24_00001660
    lwz r0, 0x12a4(r25)
    srwi. r0, r0, 31
    beq lbl_fn_800FCD24_00001660
    lwz r3, -0x759c(r4)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x139
    bne lbl_fn_800FCD24_00001660
    lfs f0, lbl_80881478
    fmuls f8, f8, f0
    fmuls f7, f7, f0
    fmuls f0, f9, f0
    stfs f8, -0x7594(r4)
    stfs f7, -0x7590(r4)
    stfs f0, -0x758c(r4)
lbl_fn_800FCD24_00001660:
    addis r3, r23, 0x4
    lwz r4, -0x759c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_800FCD24_00001688
    lwz r0, 0x4(r4)
    cmpwi r0, 0xd5
    bne lbl_fn_800FCD24_00001688
    lwz r0, -0x7598(r3)
    ori r0, r0, 0x80
    stw r0, -0x7598(r3)
lbl_fn_800FCD24_00001688:
    addis r4, r23, 0x4
    mr r3, r23
    subi r4, r4, 0x75a4
    bl fn_800FDF14
    cmpwi r31, 0x0
    beq lbl_fn_800FCD24_000017C8
    addis r3, r23, 0x4
    lwz r0, -0x75a4(r3)
    subi r6, r3, 0x7594
    stw r0, 0x0(r31)
    subi r5, r3, 0x7588
    subi r4, r3, 0x757c
    lwz r0, -0x75a0(r3)
    stw r0, 0x4(r31)
    lwz r0, -0x759c(r3)
    stw r0, 0x8(r31)
    lwz r0, -0x7598(r3)
    stw r0, 0xc(r31)
    lfs f2, -0x758c(r3)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x10(r31), 0, 0
    stfs f2, 0x18(r31)
    lfs f2, -0x7580(r3)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x1c(r31), 0, 0
    stfs f2, 0x24(r31)
    lfs f2, -0x7574(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x28(r31), 0, 0
    stfs f2, 0x30(r31)
    lwz r0, -0x7570(r3)
    stw r0, 0x34(r31)
    lwz r0, -0x756c(r3)
    stw r0, 0x38(r31)
    lwz r0, -0x7568(r3)
    stw r0, 0x3c(r31)
    lwz r0, -0x7564(r3)
    stw r0, 0x40(r31)
    lwz r0, -0x7560(r3)
    stw r0, 0x44(r31)
    lwz r0, -0x755c(r3)
    stw r0, 0x48(r31)
    lwz r0, -0x7558(r3)
    stw r0, 0x4c(r31)
    lwz r0, -0x7554(r3)
    stw r0, 0x50(r31)
    lwz r0, -0x7550(r3)
    stw r0, 0x54(r31)
    lwz r0, -0x754c(r3)
    stw r0, 0x58(r31)
    lfs f0, -0x7548(r3)
    stfs f0, 0x5c(r31)
    lfs f0, -0x7544(r3)
    stfs f0, 0x60(r31)
    lwz r0, -0x753c(r3)
    lwz r4, -0x7540(r3)
    stw r4, 0x64(r31)
    stw r0, 0x68(r31)
    lwz r0, -0x7534(r3)
    lwz r4, -0x7538(r3)
    stw r4, 0x6c(r31)
    stw r0, 0x70(r31)
    lwz r0, -0x752c(r3)
    lwz r4, -0x7530(r3)
    stw r4, 0x74(r31)
    stw r0, 0x78(r31)
    lwz r0, -0x7524(r3)
    lwz r4, -0x7528(r3)
    stw r4, 0x7c(r31)
    stw r0, 0x80(r31)
    lwz r0, -0x7520(r3)
    stw r0, 0x84(r31)
    lwz r0, -0x751c(r3)
    stw r0, 0x88(r31)
    lwz r0, -0x7518(r3)
    stw r0, 0x8c(r31)
    lwz r0, -0x7514(r3)
    stw r0, 0x90(r31)
    lwz r0, -0x7510(r3)
    stw r0, 0x94(r31)
lbl_fn_800FCD24_000017C8:
    addi r11, r1, 0x2a0
    psq_l f31, 0x2a8(r1), 0, 0
    lfd f31, 0x2a0(r1)
    bl _restgpr_22
    lwz r0, 0x2b4(r1)
    mtlr r0
    addi r1, r1, 0x2b0
    blr
}
