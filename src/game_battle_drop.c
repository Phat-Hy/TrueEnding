#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB5B4(void);
extern void fn_800CB5C8(void);
extern void fn_801248DC(void);
extern void fn_8012E244(void);
extern void fn_8016E970(void);
extern void fn_80219E6C(void);
extern void fn_8021A8D0(void);
extern void fn_8021A918(void);
extern void fn_8021A960(void);
extern void fn_8021A984(void);
extern void fn_8021A9A8(void);
extern void fn_803750E4(void);
extern void fn_8059A268(void);
extern void fn_8059C088(void);
extern void fn_8059C804(void);
extern void fn_8059C8DC(void);
extern void fn_8059C8EC(void);
extern void fn_8059C990(void);
extern void fn_8059C9A0(void);
extern void fn_8059CA78(void);
extern void fn_8059CA88(void);
extern void fn_8059CB30(void);
extern void fn_8059CB40(void);
extern void fn_8059CBE8(void);
extern void fn_8059CBF8(void);
extern void fn_8059CCA0(void);
extern void fn_8059CF74(void);
extern void fn_8059CFB4(void);
extern void fn_8059CFC8(void);
extern void fn_8059D008(void);
extern void fn_8059D01C(void);
extern void fn_8059D05C(void);
extern void fn_8059D070(void);
extern void fn_8059D0B0(void);
extern void fn_8059D0C4(void);
extern void fn_8059D16C(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80737490[];
extern u8 lbl_80737808[];
extern u8 lbl_80766768[];
extern u8 lbl_8077A720[];
extern u8 lbl_8077C3E8[];

/* Small data declarations */
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_8087F9E8;
extern u32 lbl_80881964;
extern u32 lbl_8088196C;
extern u32 lbl_808819A0;
extern u32 lbl_808819A8;
extern u32 lbl_80881A20;
extern u32 lbl_80881B58;

/* Function declarations */
void fn_80177EB8(void);
void fn_80178018(void);
void fn_80178078(void);
void fn_80178088(void);
void fn_80178164(void);
void fn_801781B0(void);
void fn_80178208(void);
void fn_801784BC(void);
void fn_80178668(void);
void fn_80178864(void);
void fn_801789D8(void);
void fn_80178A6C(void);
void fn_80178BFC(void);
void fn_80179730(void);

asm void fn_80177EB8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    lwz r12, 0x0(r6)
    mr r27, r3
    mr r29, r5
    mr r28, r4
    mr r30, r6
    mr r4, r27
    mr r3, r29
    mtctr r12
    bctrl
    lwz r12, 0x0(r30)
    cntlzw r0, r3
    mr r3, r28
    mr r4, r29
    srwi r31, r0, 5
    mtctr r12
    bctrl
    cmpwi r31, 0x0
    cntlzw r0, r3
    srwi r0, r0, 5
    beq lbl_fn_80177EB8_0000006C
    cmpwi r0, 0x0
    bne lbl_fn_80177EB8_00000148
lbl_fn_80177EB8_0000006C:
    cmpwi r31, 0x0
    bne lbl_fn_80177EB8_000000A8
    cmpwi r0, 0x0
    bne lbl_fn_80177EB8_000000A8
    lfs f1, 0x0(r27)
    lfs f0, 0x0(r28)
    stfs f0, 0x0(r27)
    lwz r3, 0x4(r27)
    lwz r0, 0x4(r28)
    stw r0, 0x4(r27)
    stfs f1, 0x20(r1)
    stw r3, 0x24(r1)
    stfs f1, 0x0(r28)
    stw r3, 0x4(r28)
    b lbl_fn_80177EB8_00000148
lbl_fn_80177EB8_000000A8:
    lwz r12, 0x0(r30)
    mr r3, r28
    mr r4, r27
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80177EB8_000000EC
    lfs f1, 0x0(r27)
    lfs f0, 0x0(r28)
    stfs f0, 0x0(r27)
    lwz r3, 0x4(r27)
    lwz r0, 0x4(r28)
    stw r0, 0x4(r27)
    stfs f1, 0x18(r1)
    stw r3, 0x1c(r1)
    stfs f1, 0x0(r28)
    stw r3, 0x4(r28)
lbl_fn_80177EB8_000000EC:
    cmpwi r31, 0x0
    beq lbl_fn_80177EB8_00000120
    lfs f1, 0x0(r28)
    lfs f0, 0x0(r29)
    stfs f0, 0x0(r28)
    lwz r3, 0x4(r28)
    lwz r0, 0x4(r29)
    stw r0, 0x4(r28)
    stfs f1, 0x10(r1)
    stw r3, 0x14(r1)
    stfs f1, 0x0(r29)
    stw r3, 0x4(r29)
    b lbl_fn_80177EB8_00000148
lbl_fn_80177EB8_00000120:
    lfs f1, 0x0(r27)
    lfs f0, 0x0(r29)
    stfs f0, 0x0(r27)
    lwz r3, 0x4(r27)
    lwz r0, 0x4(r29)
    stw r0, 0x4(r27)
    stfs f1, 0x8(r1)
    stw r3, 0xc(r1)
    stfs f1, 0x0(r29)
    stw r3, 0x4(r29)
lbl_fn_80177EB8_00000148:
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80178018(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    mr r4, r30
    lwz r5, lbl_8087F0A8
    addi r3, r5, 0x48c
    bl fn_801248DC
    lfs f0, lbl_808819A0
    fcmpo cr0, f1, f0
    bge lbl_fn_80178018_000001A8
    psq_l f1, 0x534(r31), 0, 0
    lfs f2, 0x53c(r31)
    stfs f2, 0x8(r30)
    psq_st f1, 0x0(r30), 0, 0
lbl_fn_80178018_000001A8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80178078(void)
{
    nofralloc
    lwz r3, lbl_8087F0A8
    li r4, 0x0
    addi r3, r3, 0x48c
    b fn_801248DC
}

asm void fn_80178088(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r0, 0x55c(r4)
    cmpwi r0, 0x6
    bne lbl_fn_80178088_00000284
    lwz r0, 0xf80(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80178088_00000224
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    b lbl_fn_80178088_00000240
lbl_fn_80178088_00000224:
    lis r5, lbl_8077C3E8@ha
    lwzu r4, lbl_8077C3E8@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
lbl_fn_80178088_00000240:
    lwz r5, 0x14(r1)
    addi r3, r1, 0x8
    lwz r4, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80178088_00000284
    lwz r4, 0xf80(r31)
    mr r3, r30
    lwz r12, 0x0(r4)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    b lbl_fn_80178088_00000294
lbl_fn_80178088_00000284:
    psq_l f1, 0x528(r31), 0, 0
    lfs f2, 0x530(r31)
    stfs f2, 0x8(r30)
    psq_st f1, 0x0(r30), 0, 0
lbl_fn_80178088_00000294:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80178164(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lfs f3, lbl_8088196C
    lfs f1, lbl_80881A20
    lfs f0, 0x5b0(r4)
    lfs f2, 0x608(r4)
    fmuls f4, f1, f0
    lfs f1, 0x604(r4)
    lfs f0, 0x600(r4)
    fadds f2, f2, f3
    stfs f3, 0x8(r1)
    fadds f1, f1, f4
    fadds f0, f0, f3
    stfs f4, 0xc(r1)
    stfs f3, 0x10(r1)
    stfs f0, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f2, 0x8(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_801781B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lfs f2, 0x5f8(r4)
    lfs f1, 0x604(r4)
    lfs f3, 0x5fc(r4)
    fadds f4, f2, f1
    lfs f0, 0x608(r4)
    lfs f2, 0x5f4(r4)
    fadds f3, f3, f0
    lfs f1, 0x600(r4)
    lfs f0, lbl_808819A8
    fadds f1, f2, f1
    stfs f4, 0xc(r1)
    fmuls f5, f3, f0
    fmuls f2, f4, f0
    stfs f3, 0x10(r1)
    fmuls f0, f1, f0
    stfs f1, 0x8(r1)
    stfs f0, 0x0(r3)
    stfs f2, 0x4(r3)
    stfs f5, 0x8(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_80178208(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    stw r30, 0x58(r1)
    mr r30, r4
    stw r29, 0x54(r1)
    mr r29, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80178208_00000408
    lwz r0, 0xf80(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80178208_000003B0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80178208_000003CC
lbl_fn_80178208_000003B0:
    addi r3, r31, 0x1cd4
    lwz r5, 0x1cd4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80178208_000003CC:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x20
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80178208_00000408
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80178208_00000408:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80178208_000005BC
    cmpwi r0, 0x8
    beq lbl_fn_80178208_00000420
    stw r0, 0x564(r29)
lbl_fn_80178208_00000420:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80178208_000005BC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80178208_00000458
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80178208_00000474
lbl_fn_80178208_00000458:
    addi r3, r31, 0x1ce0
    lwz r5, 0x1ce0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80178208_00000474:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x8
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80178208_000004B0
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80178208_000004B0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80178208_0000058C
    cmpwi r0, 0x8
    beq lbl_fn_80178208_000004C8
    stw r0, 0x564(r29)
lbl_fn_80178208_000004C8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80178208_0000058C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80178208_00000500
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80178208_0000051C
lbl_fn_80178208_00000500:
    addi r3, r31, 0x1cec
    lwz r5, 0x1cec(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80178208_0000051C:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80178208_00000558
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80178208_00000558:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80178208_0000058C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80178208_0000058C:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80178208_000005BC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80178208_000005BC:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80178208_000005E8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80178208_000005E8:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_801784BC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r28, r4
    mr r27, r3
    mr r29, r5
    mr r3, r28
    li r26, 0x0
    lwz r31, 0x4(r4)
    bl fn_8059A268
    cmpwi r3, 0x0
    beq lbl_fn_801784BC_0000063C
    addi r31, r28, 0x80
lbl_fn_801784BC_0000063C:
    lwz r3, 0x6c(r31)
    cmpwi r3, 0x0
    ble lbl_fn_801784BC_00000654
    bl fn_80219E6C
    mr r30, r3
    b lbl_fn_801784BC_00000658
lbl_fn_801784BC_00000654:
    li r30, 0x0
lbl_fn_801784BC_00000658:
    cmpwi r31, 0x0
    beq lbl_fn_801784BC_00000700
    cmpwi r30, 0x0
    beq lbl_fn_801784BC_00000670
    li r26, 0x2
    b lbl_fn_801784BC_00000674
lbl_fn_801784BC_00000670:
    lwz r26, 0x5c(r31)
lbl_fn_801784BC_00000674:
    mr r3, r27
    mr r4, r31
    mr r5, r29
    bl fn_80179730
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_801784BC_000006A8
    rlwinm r0, r3, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_801784BC_000006A8
    rlwinm r0, r3, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_801784BC_000006AC
lbl_fn_801784BC_000006A8:
    li r26, 0x2
lbl_fn_801784BC_000006AC:
    rlwinm r0, r3, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_801784BC_000006DC
    rlwinm r0, r3, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_801784BC_000006DC
    rlwinm r0, r3, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_801784BC_000006DC
    rlwinm r0, r3, 0, 21, 21
    cmplwi r0, 0x400
    bne lbl_fn_801784BC_000006E0
lbl_fn_801784BC_000006DC:
    li r26, 0x3c
lbl_fn_801784BC_000006E0:
    lwz r7, 0x8(r28)
    mr r3, r27
    mr r4, r31
    mr r6, r26
    mr r8, r29
    li r5, 0x0
    bl fn_80178668
    mr r26, r3
lbl_fn_801784BC_00000700:
    cmpwi r30, 0x0
    beq lbl_fn_801784BC_00000798
    lwz r25, 0x5c(r30)
    mr r3, r27
    mr r4, r30
    mr r5, r29
    bl fn_80179730
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_801784BC_00000740
    rlwinm r0, r3, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_801784BC_00000740
    rlwinm r0, r3, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_801784BC_00000744
lbl_fn_801784BC_00000740:
    li r25, 0x2
lbl_fn_801784BC_00000744:
    rlwinm r0, r3, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_801784BC_00000774
    rlwinm r0, r3, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_801784BC_00000774
    rlwinm r0, r3, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_801784BC_00000774
    rlwinm r0, r3, 0, 21, 21
    cmplwi r0, 0x400
    bne lbl_fn_801784BC_00000778
lbl_fn_801784BC_00000774:
    li r25, 0x3c
lbl_fn_801784BC_00000778:
    lwz r7, 0x8(r28)
    mr r3, r27
    mr r4, r30
    mr r5, r31
    mr r6, r25
    mr r8, r29
    bl fn_80178668
    or r26, r26, r3
lbl_fn_801784BC_00000798:
    mr r3, r26
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80178668(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r23, 0xc(r1)
    mr r31, r8
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    addi r8, r3, 0x12d4
    lwz r0, 0x12d0(r3)
    lwz r10, lbl_8087F610
    mulli r0, r0, 0x14
    lwz r9, lbl_8087F0A8
    add r11, r3, r0
    addi r0, r11, 0x12d4
    b lbl_fn_80178668_00000920
lbl_fn_80178668_000007F8:
    lwz r11, 0x0(r8)
    cmplw r11, r4
    bne lbl_fn_80178668_0000091C
    lwz r24, 0x10(r8)
    cmpwi r24, 0x0
    beq lbl_fn_80178668_00000908
    cmpwi r7, 0x0
    beq lbl_fn_80178668_00000908
    cmplw r24, r7
    beq lbl_fn_80178668_00000870
    cmpwi r10, 0x0
    beq lbl_fn_80178668_0000083C
    lwz r11, 0x540(r10)
    cmpwi r11, 0x0
    bne lbl_fn_80178668_0000083C
    li r25, 0x0
    b lbl_fn_80178668_00000900
lbl_fn_80178668_0000083C:
    lwz r11, 0x7e0(r24)
    rlwinm r11, r11, 0, 30, 30
    cmplwi r11, 0x2
    beq lbl_fn_80178668_00000868
    lwz r11, 0x7e0(r7)
    rlwinm r11, r11, 0, 30, 30
    cmplwi r11, 0x2
    beq lbl_fn_80178668_00000868
    lwz r11, 0xcc(r9)
    cmpwi r11, 0x0
    beq lbl_fn_80178668_00000870
lbl_fn_80178668_00000868:
    li r25, 0x0
    b lbl_fn_80178668_00000900
lbl_fn_80178668_00000870:
    lwz r12, 0xf14(r24)
    cmpwi r12, 0x0
    blt lbl_fn_80178668_00000898
    lwz r11, 0xf14(r7)
    cmpwi r11, 0x0
    blt lbl_fn_80178668_00000898
    subf r11, r12, r11
    cntlzw r11, r11
    srwi r25, r11, 5
    b lbl_fn_80178668_00000900
lbl_fn_80178668_00000898:
    lwz r23, 0x48(r24)
    li r25, 0x1
    lwz r12, 0x48(r7)
    li r24, 0x1
    cmpw r23, r12
    beq lbl_fn_80178668_000008D4
    cmpwi r23, 0x0
    li r11, 0x0
    bne lbl_fn_80178668_000008C8
    cmpwi r12, 0x3
    bne lbl_fn_80178668_000008C8
    li r11, 0x1
lbl_fn_80178668_000008C8:
    cmpwi r11, 0x0
    bne lbl_fn_80178668_000008D4
    li r24, 0x0
lbl_fn_80178668_000008D4:
    cmpwi r24, 0x0
    bne lbl_fn_80178668_00000900
    cmpwi r23, 0x3
    li r11, 0x0
    bne lbl_fn_80178668_000008F4
    cmpwi r12, 0x0
    bne lbl_fn_80178668_000008F4
    li r11, 0x1
lbl_fn_80178668_000008F4:
    cmpwi r11, 0x0
    bne lbl_fn_80178668_00000900
    li r25, 0x0
lbl_fn_80178668_00000900:
    cmpwi r25, 0x0
    beq lbl_fn_80178668_0000091C
lbl_fn_80178668_00000908:
    stw r5, 0x4(r8)
    li r3, 0x1
    stw r6, 0x8(r8)
    stw r7, 0x10(r8)
    b lbl_fn_80178668_00000998
lbl_fn_80178668_0000091C:
    addi r8, r8, 0x14
lbl_fn_80178668_00000920:
    cmplw r8, r0
    bne lbl_fn_80178668_000007F8
    lwz r0, 0x12d0(r3)
    cmplwi r0, 0x8
    bge lbl_fn_80178668_00000994
    mr r3, r26
    mr r4, r27
    mr r5, r31
    bl fn_80179730
    lwz r0, 0x12d0(r26)
    neg r4, r31
    or r4, r4, r31
    clrlwi r5, r3, 16
    mulli r0, r0, 0x14
    srwi r3, r4, 31
    add r0, r26, r0
    addic. r4, r0, 0x12d4
    beq lbl_fn_80178668_00000980
    stw r27, 0x0(r4)
    stw r28, 0x4(r4)
    stw r29, 0x8(r4)
    sth r5, 0xc(r4)
    stb r3, 0xe(r4)
    stw r30, 0x10(r4)
lbl_fn_80178668_00000980:
    lwz r4, 0x12d0(r26)
    li r3, 0x1
    addi r0, r4, 0x1
    stw r0, 0x12d0(r26)
    b lbl_fn_80178668_00000998
lbl_fn_80178668_00000994:
    li r3, 0x0
lbl_fn_80178668_00000998:
    lmw r23, 0xc(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80178864(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    li r28, 0x0
    lwz r0, 0x6c(r4)
    cmpwi r0, 0x0
    ble lbl_fn_80178864_000009F0
    mr r3, r0
    bl fn_80219E6C
    b lbl_fn_80178864_000009F4
lbl_fn_80178864_000009F0:
    li r3, 0x0
lbl_fn_80178864_000009F4:
    addi r4, r29, 0x12d4
    li r0, 0x0
    lis r6, 0x6666
    b lbl_fn_80178864_00000AE4
lbl_fn_80178864_00000A04:
    lwz r5, 0x0(r4)
    cmplw r5, r30
    beq lbl_fn_80178864_00000A20
    cmpwi r3, 0x0
    beq lbl_fn_80178864_00000AE0
    cmplw r5, r3
    bne lbl_fn_80178864_00000AE0
lbl_fn_80178864_00000A20:
    lwz r5, 0x10(r4)
    cmplw r5, r31
    bne lbl_fn_80178864_00000AE0
    addi r8, r29, 0x12d4
    b lbl_fn_80178864_00000A4C
lbl_fn_80178864_00000A34:
    lwz r7, 0x4(r8)
    lwz r5, 0x0(r4)
    cmplw r7, r5
    bne lbl_fn_80178864_00000A48
    stw r0, 0x4(r8)
lbl_fn_80178864_00000A48:
    addi r8, r8, 0x14
lbl_fn_80178864_00000A4C:
    lwz r5, 0x12d0(r29)
    mulli r5, r5, 0x14
    add r5, r29, r5
    addi r5, r5, 0x12d4
    cmplw r8, r5
    bne lbl_fn_80178864_00000A34
    addi r5, r29, 0x12d4
    addi r7, r6, 0x6667
    subf r5, r5, r4
    mulhw r5, r7, r5
    srawi r5, r5, 3
    srwi r7, r5, 31
    add r7, r5, r7
    mulli r5, r7, 0x14
    add r8, r29, r5
    b lbl_fn_80178864_00000AC4
lbl_fn_80178864_00000A8C:
    lwz r5, 0x12e8(r8)
    addi r7, r7, 0x1
    stw r5, 0x12d4(r8)
    lwz r5, 0x12ec(r8)
    stw r5, 0x12d8(r8)
    lwz r5, 0x12f0(r8)
    stw r5, 0x12dc(r8)
    lhz r5, 0x12f4(r8)
    sth r5, 0x12e0(r8)
    lbz r5, 0x12f6(r8)
    stb r5, 0x12e2(r8)
    lwz r5, 0x12f8(r8)
    stw r5, 0x12e4(r8)
    addi r8, r8, 0x14
lbl_fn_80178864_00000AC4:
    lwz r5, 0x12d0(r29)
    subi r5, r5, 0x1
    cmplw r7, r5
    blt lbl_fn_80178864_00000A8C
    stw r5, 0x12d0(r29)
    li r28, 0x1
    b lbl_fn_80178864_00000AE4
lbl_fn_80178864_00000AE0:
    addi r4, r4, 0x14
lbl_fn_80178864_00000AE4:
    lwz r5, 0x12d0(r29)
    mulli r5, r5, 0x14
    add r5, r29, r5
    addi r5, r5, 0x12d4
    cmplw r4, r5
    bne lbl_fn_80178864_00000A04
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801789D8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r6, r3, 0x12d4
    stw r0, 0x14(r1)
    lwz r0, 0x12d0(r3)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_801789D8_00000B94
lbl_fn_801789D8_00000B40:
    cmpwi r4, 0x0
    ble lbl_fn_801789D8_00000B58
    lwz r3, 0x0(r6)
    lwz r0, 0x4(r3)
    cmpw r0, r4
    bne lbl_fn_801789D8_00000B8C
lbl_fn_801789D8_00000B58:
    cmpwi r5, 0x0
    beq lbl_fn_801789D8_00000B74
    lwz r3, 0x0(r6)
    lwz r0, 0xac(r3)
    and r0, r5, r0
    cmplw r5, r0
    bne lbl_fn_801789D8_00000B8C
lbl_fn_801789D8_00000B74:
    lwz r3, 0x0(r6)
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    ble lbl_fn_801789D8_00000B8C
    bl fn_80219E6C
    b lbl_fn_801789D8_00000B98
lbl_fn_801789D8_00000B8C:
    addi r6, r6, 0x14
    bdnz lbl_fn_801789D8_00000B40
lbl_fn_801789D8_00000B94:
    li r3, 0x0
lbl_fn_801789D8_00000B98:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80178A6C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x1374(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80178A6C_00000BE4
    lwz r3, lbl_8087F9E8
    mr r4, r31
    bl fn_8059C8DC
lbl_fn_80178A6C_00000BE4:
    lwz r0, 0x1374(r31)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80178A6C_00000C00
    lwz r3, lbl_8087F9E8
    mr r4, r31
    bl fn_8059CA78
lbl_fn_80178A6C_00000C00:
    lwz r0, 0x1374(r31)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80178A6C_00000C1C
    lwz r3, lbl_8087F9E8
    mr r4, r31
    bl fn_8059C990
lbl_fn_80178A6C_00000C1C:
    lwz r0, 0x1374(r31)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_80178A6C_00000C38
    lwz r3, lbl_8087F9E8
    mr r4, r31
    bl fn_8059CB30
lbl_fn_80178A6C_00000C38:
    lwz r0, 0x1374(r31)
    rlwinm r0, r0, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_80178A6C_00000C54
    lwz r3, lbl_8087F9E8
    mr r4, r31
    bl fn_8059CCA0
lbl_fn_80178A6C_00000C54:
    lwz r0, 0x1374(r31)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_80178A6C_00000C70
    lwz r3, lbl_8087F9E8
    mr r4, r31
    bl fn_8059CBE8
lbl_fn_80178A6C_00000C70:
    lwz r0, 0x1374(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80178A6C_00000C90
    lwz r3, lbl_8087F9E8
    mr r4, r31
    li r5, 0x0
    bl fn_8059CFB4
lbl_fn_80178A6C_00000C90:
    lwz r0, 0x1374(r31)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_80178A6C_00000CB0
    lwz r3, lbl_8087F9E8
    mr r4, r31
    li r5, 0x0
    bl fn_8059D008
lbl_fn_80178A6C_00000CB0:
    lwz r0, 0x1374(r31)
    rlwinm r0, r0, 0, 22, 22
    cmplwi r0, 0x200
    bne lbl_fn_80178A6C_00000CD0
    lwz r3, lbl_8087F9E8
    mr r4, r31
    li r5, 0x0
    bl fn_8059D05C
lbl_fn_80178A6C_00000CD0:
    lwz r0, 0x1374(r31)
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    bne lbl_fn_80178A6C_00000CF0
    lwz r3, lbl_8087F9E8
    mr r4, r31
    li r5, 0x0
    bl fn_8059D0B0
lbl_fn_80178A6C_00000CF0:
    lwz r0, 0x1374(r31)
    rlwinm r0, r0, 0, 20, 20
    cmplwi r0, 0x800
    bne lbl_fn_80178A6C_00000D0C
    lwz r3, lbl_8087F9E8
    mr r4, r31
    bl fn_8059D16C
lbl_fn_80178A6C_00000D0C:
    lfs f0, lbl_8088196C
    li r0, 0x0
    stw r0, 0x1374(r31)
    addi r3, r31, 0x1414
    li r4, 0x0
    li r5, 0x0
    stw r0, 0x12d0(r31)
    stfs f0, 0x1410(r31)
    bl fn_800CB5C8
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80178BFC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r0, 0x7e0(r3)
    mr r26, r3
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80178BFC_00000D90
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_80178BFC_00000D90
    lwz r3, lbl_8087F9E8
    cmpwi r3, 0x0
    beq lbl_fn_80178BFC_00000D90
    mr r4, r26
    bl fn_8059C088
lbl_fn_80178BFC_00000D90:
    lwz r0, 0x674(r26)
    li r31, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_80178BFC_00000DAC
    lwz r0, 0x1208(r26)
    cmpwi r0, 0x0
    beq lbl_fn_80178BFC_00000E84
lbl_fn_80178BFC_00000DAC:
    addi r3, r26, 0x12d4
    lis r5, 0x6666
    b lbl_fn_80178BFC_00000E6C
lbl_fn_80178BFC_00000DB8:
    lhz r4, 0xc(r3)
    rlwinm r0, r4, 0, 26, 26
    cmpwi r0, 0x20
    beq lbl_fn_80178BFC_00000DEC
    rlwinm r0, r4, 0, 25, 25
    cmpwi r0, 0x40
    beq lbl_fn_80178BFC_00000DEC
    rlwinm r0, r4, 0, 22, 22
    cmpwi r0, 0x200
    beq lbl_fn_80178BFC_00000DEC
    rlwinm r0, r4, 0, 21, 21
    cmpwi r0, 0x400
    bne lbl_fn_80178BFC_00000E68
lbl_fn_80178BFC_00000DEC:
    addi r0, r26, 0x12d4
    addi r4, r5, 0x6667
    subf r0, r0, r3
    mulhw r0, r4, r0
    srawi r0, r0, 3
    srwi r4, r0, 31
    add r6, r0, r4
    mulli r0, r6, 0x14
    add r7, r26, r0
    b lbl_fn_80178BFC_00000E4C
lbl_fn_80178BFC_00000E14:
    lwz r0, 0x12e8(r7)
    addi r6, r6, 0x1
    stw r0, 0x12d4(r7)
    lwz r0, 0x12ec(r7)
    stw r0, 0x12d8(r7)
    lwz r0, 0x12f0(r7)
    stw r0, 0x12dc(r7)
    lhz r0, 0x12f4(r7)
    sth r0, 0x12e0(r7)
    lbz r0, 0x12f6(r7)
    stb r0, 0x12e2(r7)
    lwz r0, 0x12f8(r7)
    stw r0, 0x12e4(r7)
    addi r7, r7, 0x14
lbl_fn_80178BFC_00000E4C:
    lwz r4, 0x12d0(r26)
    subi r0, r4, 0x1
    cmplw r6, r0
    blt lbl_fn_80178BFC_00000E14
    stw r0, 0x12d0(r26)
    li r31, 0x1
    b lbl_fn_80178BFC_00000E6C
lbl_fn_80178BFC_00000E68:
    addi r3, r3, 0x14
lbl_fn_80178BFC_00000E6C:
    lwz r0, 0x12d0(r26)
    mulli r0, r0, 0x14
    add r4, r26, r0
    addi r0, r4, 0x12d4
    cmplw r3, r0
    bne lbl_fn_80178BFC_00000DB8
lbl_fn_80178BFC_00000E84:
    lwz r0, 0x12d0(r26)
    addi r7, r26, 0x12d4
    li r30, 0x0
    li r29, 0x0
    mulli r0, r0, 0x14
    li r6, 0x0
    li r28, 0x0
    add r3, r26, r0
    addi r3, r3, 0x12d4
    b lbl_fn_80178BFC_00000EE8
lbl_fn_80178BFC_00000EAC:
    lwz r4, 0x0(r7)
    lhz r0, 0xc(r7)
    lwz r5, 0x6c(r4)
    or r29, r29, r0
    cmpwi r5, 0x2
    beq lbl_fn_80178BFC_00000ECC
    cmpwi r5, 0x5
    bne lbl_fn_80178BFC_00000ED0
lbl_fn_80178BFC_00000ECC:
    li r28, 0x1
lbl_fn_80178BFC_00000ED0:
    lwz r0, 0xac(r4)
    rlwinm r0, r0, 0, 18, 18
    cmpwi r0, 0x2000
    bne lbl_fn_80178BFC_00000EE4
    li r6, 0x1
lbl_fn_80178BFC_00000EE4:
    addi r7, r7, 0x14
lbl_fn_80178BFC_00000EE8:
    cmplw r7, r3
    bne lbl_fn_80178BFC_00000EAC
    lwz r3, lbl_8087F9E8
    cmpwi r3, 0x0
    beq lbl_fn_80178BFC_00000F28
    lwz r3, 0x38(r3)
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    beq lbl_fn_80178BFC_00000F28
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80178BFC_00000F28
    cmpwi r6, 0x0
    bne lbl_fn_80178BFC_00000F28
    lfs f0, lbl_8088196C
    stfs f0, 0xac8(r26)
lbl_fn_80178BFC_00000F28:
    lwz r0, 0x958(r26)
    rlwinm r0, r0, 0, 20, 20
    cmplwi r0, 0x800
    bne lbl_fn_80178BFC_00000F3C
    li r28, 0x1
lbl_fn_80178BFC_00000F3C:
    addi r27, r26, 0x12d4
    b lbl_fn_80178BFC_00000FFC
lbl_fn_80178BFC_00000F44:
    lbz r0, 0xe(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80178BFC_00000FD4
    lwz r0, 0x4(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80178BFC_00000FD4
    cmpwi r28, 0x0
    bne lbl_fn_80178BFC_00000F70
    lwz r0, 0x55c(r26)
    cmpwi r0, 0x5
    bne lbl_fn_80178BFC_00000F80
lbl_fn_80178BFC_00000F70:
    lhz r0, 0xc(r27)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x2
    beq lbl_fn_80178BFC_00000FD4
lbl_fn_80178BFC_00000F80:
    lhz r0, 0xc(r27)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x100
    bne lbl_fn_80178BFC_00000FA4
    lwz r0, 0x10(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80178BFC_00000FD4
    cmplw r0, r26
    beq lbl_fn_80178BFC_00000FD4
lbl_fn_80178BFC_00000FA4:
    lwz r4, 0x0(r27)
    addi r3, r26, 0x7d4
    bl fn_8012E244
    lwz r3, 0x0(r27)
    lbz r0, 0x1(r3)
    extsb r0, r0
    cmpwi r0, 0x1
    beq lbl_fn_80178BFC_00000FD4
    cmpwi r0, 0x4
    beq lbl_fn_80178BFC_00000FD4
    lwz r0, 0x90(r3)
    or r30, r30, r0
lbl_fn_80178BFC_00000FD4:
    lhz r0, 0xc(r27)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x100
    bne lbl_fn_80178BFC_00000FF8
    lwz r0, 0x10(r27)
    cmplw r0, r26
    bne lbl_fn_80178BFC_00000FF8
    ori r29, r29, 0x80
    rlwinm r29, r29, 0, 24, 22
lbl_fn_80178BFC_00000FF8:
    addi r27, r27, 0x14
lbl_fn_80178BFC_00000FFC:
    lwz r0, 0x12d0(r26)
    mulli r0, r0, 0x14
    add r3, r26, r0
    addi r0, r3, 0x12d4
    cmplw r27, r0
    bne lbl_fn_80178BFC_00000F44
    lwz r0, 0x54c(r26)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_80178BFC_00001234
    lwz r0, 0x12a8(r26)
    extrwi. r0, r0, 1, 30
    bne lbl_fn_80178BFC_00001234
    lwz r0, 0x1374(r26)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_80178BFC_00001058
    clrlwi r0, r29, 31
    cmplwi r0, 0x1
    bne lbl_fn_80178BFC_00001058
    lwz r3, lbl_8087F9E8
    mr r4, r26
    bl fn_8059C804
lbl_fn_80178BFC_00001058:
    lwz r0, 0x1374(r26)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80178BFC_00001080
    rlwinm r0, r29, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80178BFC_00001080
    lwz r3, lbl_8087F9E8
    mr r4, r26
    bl fn_8059C9A0
lbl_fn_80178BFC_00001080:
    lwz r0, 0x1374(r26)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80178BFC_000010A8
    rlwinm r0, r29, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80178BFC_000010A8
    lwz r3, lbl_8087F9E8
    mr r4, r26
    bl fn_8059C8EC
lbl_fn_80178BFC_000010A8:
    lwz r0, 0x1374(r26)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_80178BFC_0000111C
    rlwinm r0, r29, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_80178BFC_0000111C
    lwz r0, 0x48(r26)
    cmpwi r0, 0x2
    bne lbl_fn_80178BFC_00001110
    lwz r3, lbl_8087F610
    li r0, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_80178BFC_00001108
    lwz r4, 0x540(r3)
    li r3, 0x1
    cmpwi r4, 0x0
    beq lbl_fn_80178BFC_000010FC
    cmpwi r4, 0x1
    beq lbl_fn_80178BFC_000010FC
    li r3, 0x0
lbl_fn_80178BFC_000010FC:
    cmpwi r3, 0x0
    beq lbl_fn_80178BFC_00001108
    li r0, 0x1
lbl_fn_80178BFC_00001108:
    cmpwi r0, 0x0
    beq lbl_fn_80178BFC_0000111C
lbl_fn_80178BFC_00001110:
    lwz r3, lbl_8087F9E8
    mr r4, r26
    bl fn_8059CA88
lbl_fn_80178BFC_0000111C:
    lwz r0, 0x1374(r26)
    rlwinm r0, r0, 0, 23, 23
    cmplwi r0, 0x100
    beq lbl_fn_80178BFC_00001144
    rlwinm r0, r29, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_80178BFC_00001144
    lwz r3, lbl_8087F9E8
    mr r4, r26
    bl fn_8059CBF8
lbl_fn_80178BFC_00001144:
    lwz r0, 0x1374(r26)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    beq lbl_fn_80178BFC_0000116C
    rlwinm r0, r29, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_80178BFC_0000116C
    lwz r3, lbl_8087F9E8
    mr r4, r26
    bl fn_8059CB40
lbl_fn_80178BFC_0000116C:
    lwz r0, 0x1374(r26)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80178BFC_00001194
    rlwinm r0, r29, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80178BFC_00001194
    lwz r3, lbl_8087F9E8
    mr r4, r26
    bl fn_8059CF74
lbl_fn_80178BFC_00001194:
    lwz r0, 0x1374(r26)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_80178BFC_000011BC
    rlwinm r0, r29, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_80178BFC_000011BC
    lwz r3, lbl_8087F9E8
    mr r4, r26
    bl fn_8059CFC8
lbl_fn_80178BFC_000011BC:
    lwz r0, 0x1374(r26)
    rlwinm r0, r0, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_80178BFC_000011E4
    rlwinm r0, r29, 0, 22, 22
    cmplwi r0, 0x200
    bne lbl_fn_80178BFC_000011E4
    lwz r3, lbl_8087F9E8
    mr r4, r26
    bl fn_8059D01C
lbl_fn_80178BFC_000011E4:
    lwz r0, 0x1374(r26)
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    beq lbl_fn_80178BFC_0000120C
    rlwinm r0, r29, 0, 21, 21
    cmplwi r0, 0x400
    bne lbl_fn_80178BFC_0000120C
    lwz r3, lbl_8087F9E8
    mr r4, r26
    bl fn_8059D070
lbl_fn_80178BFC_0000120C:
    lwz r0, 0x1374(r26)
    rlwinm r0, r0, 0, 20, 20
    cmplwi r0, 0x800
    beq lbl_fn_80178BFC_00001234
    rlwinm r0, r29, 0, 20, 20
    cmplwi r0, 0x800
    bne lbl_fn_80178BFC_00001234
    lwz r3, lbl_8087F9E8
    mr r4, r26
    bl fn_8059D0C4
lbl_fn_80178BFC_00001234:
    lwz r0, 0x1374(r26)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80178BFC_0000125C
    clrlwi r0, r29, 31
    cmplwi r0, 0x1
    beq lbl_fn_80178BFC_0000125C
    lwz r3, lbl_8087F9E8
    mr r4, r26
    bl fn_8059C8DC
lbl_fn_80178BFC_0000125C:
    lwz r0, 0x1374(r26)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80178BFC_00001284
    rlwinm r0, r29, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80178BFC_00001284
    lwz r3, lbl_8087F9E8
    mr r4, r26
    bl fn_8059CA78
lbl_fn_80178BFC_00001284:
    lwz r0, 0x1374(r26)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80178BFC_000012AC
    rlwinm r0, r29, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80178BFC_000012AC
    lwz r3, lbl_8087F9E8
    mr r4, r26
    bl fn_8059C990
lbl_fn_80178BFC_000012AC:
    lwz r0, 0x1374(r26)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_80178BFC_000012D4
    rlwinm r0, r29, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_80178BFC_000012D4
    lwz r3, lbl_8087F9E8
    mr r4, r26
    bl fn_8059CB30
lbl_fn_80178BFC_000012D4:
    lwz r0, 0x1374(r26)
    rlwinm r0, r0, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_80178BFC_000012FC
    rlwinm r0, r29, 0, 23, 23
    cmplwi r0, 0x100
    beq lbl_fn_80178BFC_000012FC
    lwz r3, lbl_8087F9E8
    mr r4, r26
    bl fn_8059CCA0
lbl_fn_80178BFC_000012FC:
    lwz r0, 0x1374(r26)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_80178BFC_00001324
    rlwinm r0, r29, 0, 27, 27
    cmplwi r0, 0x10
    beq lbl_fn_80178BFC_00001324
    lwz r3, lbl_8087F9E8
    mr r4, r26
    bl fn_8059CBE8
lbl_fn_80178BFC_00001324:
    lwz r0, 0x1374(r26)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80178BFC_00001350
    rlwinm r0, r29, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80178BFC_00001350
    lwz r3, lbl_8087F9E8
    mr r4, r26
    mr r5, r31
    bl fn_8059CFB4
lbl_fn_80178BFC_00001350:
    lwz r0, 0x1374(r26)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_80178BFC_0000137C
    rlwinm r0, r29, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_80178BFC_0000137C
    lwz r3, lbl_8087F9E8
    mr r4, r26
    mr r5, r31
    bl fn_8059D008
lbl_fn_80178BFC_0000137C:
    lwz r0, 0x1374(r26)
    rlwinm r0, r0, 0, 22, 22
    cmplwi r0, 0x200
    bne lbl_fn_80178BFC_000013A8
    rlwinm r0, r29, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_80178BFC_000013A8
    lwz r3, lbl_8087F9E8
    mr r4, r26
    mr r5, r31
    bl fn_8059D05C
lbl_fn_80178BFC_000013A8:
    lwz r0, 0x1374(r26)
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    bne lbl_fn_80178BFC_000013D4
    rlwinm r0, r29, 0, 21, 21
    cmplwi r0, 0x400
    beq lbl_fn_80178BFC_000013D4
    lwz r3, lbl_8087F9E8
    mr r4, r26
    mr r5, r31
    bl fn_8059D0B0
lbl_fn_80178BFC_000013D4:
    lwz r0, 0x1374(r26)
    rlwinm r0, r0, 0, 20, 20
    cmplwi r0, 0x800
    bne lbl_fn_80178BFC_000013FC
    rlwinm r0, r29, 0, 20, 20
    cmplwi r0, 0x800
    beq lbl_fn_80178BFC_000013FC
    lwz r3, lbl_8087F9E8
    mr r4, r26
    bl fn_8059D16C
lbl_fn_80178BFC_000013FC:
    stw r29, 0x1374(r26)
    addi r3, r26, 0x12d4
    li r6, 0x0
    lis r5, 0x6666
    stw r30, 0xa14(r26)
    b lbl_fn_80178BFC_000014D8
lbl_fn_80178BFC_00001414:
    lwz r4, 0x8(r3)
    subic. r0, r4, 0x1
    stw r0, 0x8(r3)
    bgt lbl_fn_80178BFC_000014D4
    addi r7, r26, 0x12d4
    b lbl_fn_80178BFC_00001444
lbl_fn_80178BFC_0000142C:
    lwz r4, 0x4(r7)
    lwz r0, 0x0(r3)
    cmplw r4, r0
    bne lbl_fn_80178BFC_00001440
    stw r6, 0x4(r7)
lbl_fn_80178BFC_00001440:
    addi r7, r7, 0x14
lbl_fn_80178BFC_00001444:
    lwz r0, 0x12d0(r26)
    mulli r0, r0, 0x14
    add r4, r26, r0
    addi r0, r4, 0x12d4
    cmplw r7, r0
    bne lbl_fn_80178BFC_0000142C
    addi r0, r26, 0x12d4
    addi r4, r5, 0x6667
    subf r0, r0, r3
    mulhw r0, r4, r0
    srawi r0, r0, 3
    srwi r4, r0, 31
    add r7, r0, r4
    mulli r0, r7, 0x14
    add r8, r26, r0
    b lbl_fn_80178BFC_000014BC
lbl_fn_80178BFC_00001484:
    lwz r0, 0x12e8(r8)
    addi r7, r7, 0x1
    stw r0, 0x12d4(r8)
    lwz r0, 0x12ec(r8)
    stw r0, 0x12d8(r8)
    lwz r0, 0x12f0(r8)
    stw r0, 0x12dc(r8)
    lhz r0, 0x12f4(r8)
    sth r0, 0x12e0(r8)
    lbz r0, 0x12f6(r8)
    stb r0, 0x12e2(r8)
    lwz r0, 0x12f8(r8)
    stw r0, 0x12e4(r8)
    addi r8, r8, 0x14
lbl_fn_80178BFC_000014BC:
    lwz r4, 0x12d0(r26)
    subi r0, r4, 0x1
    cmplw r7, r0
    blt lbl_fn_80178BFC_00001484
    stw r0, 0x12d0(r26)
    b lbl_fn_80178BFC_000014D8
lbl_fn_80178BFC_000014D4:
    addi r3, r3, 0x14
lbl_fn_80178BFC_000014D8:
    lwz r0, 0x12d0(r26)
    mulli r0, r0, 0x14
    add r4, r26, r0
    addi r0, r4, 0x12d4
    cmplw r3, r0
    bne lbl_fn_80178BFC_00001414
    lwz r0, 0x48(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80178BFC_00001860
    addi r29, r26, 0x12d4
    li r27, 0x0
    li r28, 0x0
    b lbl_fn_80178BFC_00001750
lbl_fn_80178BFC_0000150C:
    lwz r3, 0x0(r29)
    bl fn_8021A960
    cmpwi r3, 0x0
    beq lbl_fn_80178BFC_00001634
    lwz r3, 0x0(r29)
    lwz r0, 0xa0(r3)
    cmpwi r0, 0x0
    bge lbl_fn_80178BFC_00001634
    lwz r5, 0x10(r29)
    cmpwi r5, 0x0
    beq lbl_fn_80178BFC_00001634
    cmplw r5, r26
    beq lbl_fn_80178BFC_00001598
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_80178BFC_00001560
    lwz r0, 0x540(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80178BFC_00001560
    li r4, 0x0
    b lbl_fn_80178BFC_00001628
lbl_fn_80178BFC_00001560:
    lwz r0, 0x7e0(r5)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80178BFC_00001590
    lwz r0, 0x7e0(r26)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80178BFC_00001590
    lwz r3, lbl_8087F0A8
    lwz r0, 0xcc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80178BFC_00001598
lbl_fn_80178BFC_00001590:
    li r4, 0x0
    b lbl_fn_80178BFC_00001628
lbl_fn_80178BFC_00001598:
    lwz r3, 0xf14(r5)
    cmpwi r3, 0x0
    blt lbl_fn_80178BFC_000015C0
    lwz r0, 0xf14(r26)
    cmpwi r0, 0x0
    blt lbl_fn_80178BFC_000015C0
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r4, r0, 5
    b lbl_fn_80178BFC_00001628
lbl_fn_80178BFC_000015C0:
    lwz r6, 0x48(r5)
    li r4, 0x1
    lwz r3, 0x48(r26)
    li r5, 0x1
    cmpw r6, r3
    beq lbl_fn_80178BFC_000015FC
    cmpwi r6, 0x0
    li r0, 0x0
    bne lbl_fn_80178BFC_000015F0
    cmpwi r3, 0x3
    bne lbl_fn_80178BFC_000015F0
    li r0, 0x1
lbl_fn_80178BFC_000015F0:
    cmpwi r0, 0x0
    bne lbl_fn_80178BFC_000015FC
    li r5, 0x0
lbl_fn_80178BFC_000015FC:
    cmpwi r5, 0x0
    bne lbl_fn_80178BFC_00001628
    cmpwi r6, 0x3
    li r0, 0x0
    bne lbl_fn_80178BFC_0000161C
    cmpwi r3, 0x0
    bne lbl_fn_80178BFC_0000161C
    li r0, 0x1
lbl_fn_80178BFC_0000161C:
    cmpwi r0, 0x0
    bne lbl_fn_80178BFC_00001628
    li r4, 0x0
lbl_fn_80178BFC_00001628:
    cmpwi r4, 0x0
    bne lbl_fn_80178BFC_00001634
    li r27, 0x1
lbl_fn_80178BFC_00001634:
    lwz r3, 0x0(r29)
    bl fn_8021A984
    cmpwi r3, 0x0
    beq lbl_fn_80178BFC_0000174C
    lwz r5, 0x10(r29)
    cmpwi r5, 0x0
    beq lbl_fn_80178BFC_0000174C
    cmplw r5, r26
    beq lbl_fn_80178BFC_000016B0
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_80178BFC_00001678
    lwz r0, 0x540(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80178BFC_00001678
    li r4, 0x0
    b lbl_fn_80178BFC_00001740
lbl_fn_80178BFC_00001678:
    lwz r0, 0x7e0(r5)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80178BFC_000016A8
    lwz r0, 0x7e0(r26)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80178BFC_000016A8
    lwz r3, lbl_8087F0A8
    lwz r0, 0xcc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80178BFC_000016B0
lbl_fn_80178BFC_000016A8:
    li r4, 0x0
    b lbl_fn_80178BFC_00001740
lbl_fn_80178BFC_000016B0:
    lwz r3, 0xf14(r5)
    cmpwi r3, 0x0
    blt lbl_fn_80178BFC_000016D8
    lwz r0, 0xf14(r26)
    cmpwi r0, 0x0
    blt lbl_fn_80178BFC_000016D8
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r4, r0, 5
    b lbl_fn_80178BFC_00001740
lbl_fn_80178BFC_000016D8:
    lwz r6, 0x48(r5)
    li r4, 0x1
    lwz r3, 0x48(r26)
    li r5, 0x1
    cmpw r6, r3
    beq lbl_fn_80178BFC_00001714
    cmpwi r6, 0x0
    li r0, 0x0
    bne lbl_fn_80178BFC_00001708
    cmpwi r3, 0x3
    bne lbl_fn_80178BFC_00001708
    li r0, 0x1
lbl_fn_80178BFC_00001708:
    cmpwi r0, 0x0
    bne lbl_fn_80178BFC_00001714
    li r5, 0x0
lbl_fn_80178BFC_00001714:
    cmpwi r5, 0x0
    bne lbl_fn_80178BFC_00001740
    cmpwi r6, 0x3
    li r0, 0x0
    bne lbl_fn_80178BFC_00001734
    cmpwi r3, 0x0
    bne lbl_fn_80178BFC_00001734
    li r0, 0x1
lbl_fn_80178BFC_00001734:
    cmpwi r0, 0x0
    bne lbl_fn_80178BFC_00001740
    li r4, 0x0
lbl_fn_80178BFC_00001740:
    cmpwi r4, 0x0
    beq lbl_fn_80178BFC_0000174C
    li r28, 0x1
lbl_fn_80178BFC_0000174C:
    addi r29, r29, 0x14
lbl_fn_80178BFC_00001750:
    lwz r0, 0x12d0(r26)
    mulli r0, r0, 0x14
    add r3, r26, r0
    addi r0, r3, 0x12d4
    cmplw r29, r0
    bne lbl_fn_80178BFC_0000150C
    cmpwi r27, 0x0
    beq lbl_fn_80178BFC_000017D4
    cmpwi r28, 0x0
    bne lbl_fn_80178BFC_000017D4
    lwz r0, 0x1414(r26)
    lfs f1, lbl_80881964
    cmpwi r0, 0x0
    stfs f1, 0x1410(r26)
    bne lbl_fn_80178BFC_000017C4
    lis r4, lbl_80737490@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_80737490@l
    li r5, 0x0
    lwz r4, 0x18(r4)
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r26, 0x1414
    addi r4, r1, 0x8
    bl fn_800CB440
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80178BFC_00001860
lbl_fn_80178BFC_000017C4:
    addi r3, r26, 0x1414
    li r4, 0xa
    bl fn_800CB5B4
    b lbl_fn_80178BFC_00001860
lbl_fn_80178BFC_000017D4:
    lfs f2, 0x1410(r26)
    lfs f1, lbl_80881B58
    lfs f0, lbl_8088196C
    fsubs f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80178BFC_000017F0
    b lbl_fn_80178BFC_000017F4
lbl_fn_80178BFC_000017F0:
    fmr f1, f0
lbl_fn_80178BFC_000017F4:
    lfs f2, lbl_80881964
    fcmpo cr0, f1, f2
    bge lbl_fn_80178BFC_00001820
    lfs f2, 0x1410(r26)
    lfs f1, lbl_80881B58
    lfs f0, lbl_8088196C
    fsubs f2, f2, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80178BFC_0000181C
    b lbl_fn_80178BFC_00001820
lbl_fn_80178BFC_0000181C:
    fmr f2, f0
lbl_fn_80178BFC_00001820:
    frsp f1, f2
    lfs f0, lbl_8088196C
    stfs f2, 0x1410(r26)
    fcmpo cr0, f1, f0
    ble lbl_fn_80178BFC_00001844
    addi r3, r26, 0x1414
    li r4, 0xa
    bl fn_800CB5B4
    b lbl_fn_80178BFC_00001860
lbl_fn_80178BFC_00001844:
    lwz r0, 0x1414(r26)
    cmpwi r0, 0x0
    beq lbl_fn_80178BFC_00001860
    addi r3, r26, 0x1414
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
lbl_fn_80178BFC_00001860:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80179730(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r30
    stw r28, 0x10(r1)
    mr r28, r5
    bl fn_8021A8D0
    cmpwi r3, 0x0
    beq lbl_fn_80179730_00001904
    lwz r0, 0x98(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80179730_000018C8
    ori r31, r31, 0x1
    b lbl_fn_80179730_00001904
lbl_fn_80179730_000018C8:
    lwz r0, 0x9c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80179730_000018DC
    ori r31, r31, 0x1
    b lbl_fn_80179730_00001904
lbl_fn_80179730_000018DC:
    lwz r0, 0xa0(r30)
    addi r3, r30, 0x8
    cmpwi r0, 0x0
    beq lbl_fn_80179730_000018F4
    ori r31, r31, 0x1
    b lbl_fn_80179730_00001904
lbl_fn_80179730_000018F4:
    lwz r0, 0x9c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80179730_00001904
    ori r31, r31, 0x1
lbl_fn_80179730_00001904:
    mr r3, r30
    bl fn_8021A918
    cmpwi r3, 0x0
    beq lbl_fn_80179730_0000198C
    lwz r0, 0xac(r30)
    rlwinm r0, r0, 0, 18, 18
    cmpwi r0, 0x2000
    bne lbl_fn_80179730_0000192C
    ori r31, r31, 0x10
    b lbl_fn_80179730_0000198C
lbl_fn_80179730_0000192C:
    mr r3, r30
    bl fn_8021A9A8
    cmpwi r3, 0x0
    beq lbl_fn_80179730_0000198C
    lwz r0, 0x98(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80179730_00001950
    ori r31, r31, 0x4
    b lbl_fn_80179730_0000198C
lbl_fn_80179730_00001950:
    lwz r0, 0x9c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80179730_00001964
    ori r31, r31, 0x4
    b lbl_fn_80179730_0000198C
lbl_fn_80179730_00001964:
    lwz r0, 0xa0(r30)
    addi r3, r30, 0x8
    cmpwi r0, 0x0
    beq lbl_fn_80179730_0000197C
    ori r31, r31, 0x4
    b lbl_fn_80179730_0000198C
lbl_fn_80179730_0000197C:
    lwz r0, 0x9c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80179730_0000198C
    ori r31, r31, 0x4
lbl_fn_80179730_0000198C:
    cmpwi r28, 0x0
    beq lbl_fn_80179730_00001A00
    lfs f1, 0x74(r30)
    lfs f0, lbl_8088196C
    fcmpo cr0, f1, f0
    ble lbl_fn_80179730_000019A8
    ori r31, r31, 0x20
lbl_fn_80179730_000019A8:
    lfs f1, 0x78(r30)
    lfs f0, lbl_8088196C
    fcmpo cr0, f1, f0
    ble lbl_fn_80179730_000019BC
    ori r31, r31, 0x40
lbl_fn_80179730_000019BC:
    lfs f1, 0x84(r30)
    lfs f0, lbl_8088196C
    fcmpo cr0, f1, f0
    ble lbl_fn_80179730_000019D0
    ori r31, r31, 0x200
lbl_fn_80179730_000019D0:
    lfs f1, 0x80(r30)
    lfs f0, lbl_8088196C
    fcmpo cr0, f1, f0
    ble lbl_fn_80179730_000019E4
    ori r31, r31, 0x400
lbl_fn_80179730_000019E4:
    lwz r0, 0xac(r30)
    rlwinm r3, r0, 0, 1, 1
    subis r0, r3, 0x4000
    cmplwi r0, 0x0
    bne lbl_fn_80179730_00001A14
    ori r31, r31, 0x1000
    b lbl_fn_80179730_00001A14
lbl_fn_80179730_00001A00:
    mr r3, r30
    bl fn_8021A960
    cmpwi r3, 0x0
    beq lbl_fn_80179730_00001A14
    ori r31, r31, 0x2
lbl_fn_80179730_00001A14:
    lwz r0, 0x98(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80179730_00001A58
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80737808@ha
    stw r3, 0xc(r1)
    lfd f2, lbl_80737808@l(r4)
    stw r0, 0x8(r1)
    lfs f0, lbl_8088196C
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fcmpo cr0, f1, f0
    ble lbl_fn_80179730_00001A50
    ori r31, r31, 0x8
lbl_fn_80179730_00001A50:
    li r0, -0x15
    and r31, r31, r0
lbl_fn_80179730_00001A58:
    lwz r0, 0xac(r30)
    rlwinm r3, r0, 0, 11, 11
    subis r0, r3, 0x10
    cmplwi r0, 0x0
    bne lbl_fn_80179730_00001A80
    ori r31, r31, 0x100
    lwz r3, lbl_8087F430
    rlwinm r31, r31, 0, 30, 26
    li r4, 0xe9
    bl fn_803750E4
lbl_fn_80179730_00001A80:
    lwz r0, 0xac(r30)
    rlwinm r3, r0, 0, 9, 9
    subis r0, r3, 0x40
    cmplwi r0, 0x0
    bne lbl_fn_80179730_00001AAC
    lwz r0, 0x98(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80179730_00001AAC
    ori r31, r31, 0x800
    li r0, -0x1e
    and r31, r31, r0
lbl_fn_80179730_00001AAC:
    rlwinm r0, r31, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_80179730_00001AE0
    lwz r0, 0x48(r29)
    cmpwi r0, 0x2
    beq lbl_fn_80179730_00001ADC
    lfs f1, 0xac8(r29)
    lfs f0, lbl_8088196C
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi. r0, r0, 1, 1
    beq lbl_fn_80179730_00001AE0
lbl_fn_80179730_00001ADC:
    rlwinm r31, r31, 0, 28, 26
lbl_fn_80179730_00001AE0:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
