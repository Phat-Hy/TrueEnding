#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_23(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80041B8C(void);
extern void fn_80061E2C(void);
extern void fn_8006F72C(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800A6E8C(void);
extern void fn_800D8BB4(void);
extern void fn_800F8348(void);
extern void fn_801EC158(void);
extern void fn_801EC6C0(void);
extern void fn_801ED910(void);
extern void fn_801ED928(void);
extern void fn_801EDC78(void);
extern void fn_801EEF04(void);
extern void fn_801EF15C(void);
extern void fn_801EF36C(void);
extern void fn_801EFA38(void);
extern void fn_801EFAB8(void);
extern void fn_801F0364(void);
extern void fn_801F03AC(void);
extern void fn_801F0544(void);
extern void fn_801F0758(void);
extern void fn_801F1098(void);
extern void fn_801F3E20(void);
extern void fn_801FE090(void);
extern void fn_80200ED0(void);
extern void fn_80201794(void);
extern void fn_80201DC4(void);
extern void fn_80201DD4(void);
extern void fn_80201DE8(void);
extern void fn_80680770(void);
extern void fn_80686A48(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);
extern void fn_80695D84(void);

/* External data declarations */
extern u8 lbl_8073E628[];
extern u8 lbl_80775A88[];
extern u8 lbl_80782DB8[];

/* Small data declarations */
extern u32 lbl_8087D820;
extern u32 lbl_8087D824;
extern u32 lbl_8087DAB0;
extern u32 lbl_8087DAB4;
extern u32 lbl_8087DAD0;
extern u32 lbl_8087DAD4;
extern u32 lbl_8087DAF8;
extern u32 lbl_8087DAFC;
extern u32 lbl_8087DB08;
extern u32 lbl_8087DB0C;
extern u32 lbl_8087DB10;
extern u32 lbl_8087DB14;
extern u32 lbl_8087DB18;
extern u32 lbl_8087DB1C;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087F138;
extern u32 lbl_80882CB8;
extern u32 lbl_80882CBC;
extern u32 lbl_80882CC0;
extern u32 lbl_80882CC4;
extern u32 lbl_80882CC8;
extern u32 lbl_80882CD0;

/* Function declarations */
void fn_801FEEFC(void);
void fn_801FEF40(void);
void fn_801FF1B8(void);
void fn_801FF234(void);
void fn_801FF28C(void);
void fn_801FF740(void);
void fn_801FF75C(void);
void fn_801FF770(void);
void fn_801FF778(void);
void fn_801FF8EC(void);
void fn_801FF8F0(void);
void fn_801FFA04(void);

asm void fn_801FEEFC(void)
{
    nofralloc
    lwz r0, 0x3c(r3)
    lwz r7, 0x44(r3)
    slwi r0, r0, 2
    add r3, r7, r0
    b lbl_fn_801FEEFC_00000038
lbl_fn_801FEEFC_00000014:
    lwz r6, 0x0(r7)
    lwz r0, 0x0(r6)
    cmplw r4, r0
    bne lbl_fn_801FEEFC_00000034
    addi r3, r6, 0x4
    li r4, 0x0
    li r6, 0x1
    b fn_801F0364
lbl_fn_801FEEFC_00000034:
    addi r7, r7, 0x4
lbl_fn_801FEEFC_00000038:
    cmplw r7, r3
    bne lbl_fn_801FEEFC_00000014
    blr
}

asm void fn_801FEF40(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r25, 0x24(r1)
    mr r27, r3
    mr r28, r4
    li r30, 0x0
    li r26, 0x0
    b lbl_fn_801FEF40_00000088
lbl_fn_801FEF40_00000068:
    lwz r3, 0x8(r27)
    mr r4, r28
    lwzx r29, r3, r26
    addi r3, r29, 0x4
    bl fn_801F0544
    stfs f1, 0xc(r29)
    addi r30, r30, 0x1
    addi r26, r26, 0x4
lbl_fn_801FEF40_00000088:
    lwz r0, 0x0(r27)
    cmplw r30, r0
    blt lbl_fn_801FEF40_00000068
    li r25, 0x0
    li r26, 0x0
    b lbl_fn_801FEF40_000000DC
lbl_fn_801FEF40_000000A0:
    lwz r3, 0x14(r27)
    li r29, 0x0
    lwzx r31, r3, r26
    addi r30, r31, 0x4
lbl_fn_801FEF40_000000B0:
    mr r3, r30
    mr r4, r28
    bl fn_801F0544
    addi r29, r29, 0x1
    stfs f1, 0x2c(r31)
    cmpwi r29, 0x5
    addi r30, r30, 0x8
    addi r31, r31, 0x4
    blt lbl_fn_801FEF40_000000B0
    addi r25, r25, 0x1
    addi r26, r26, 0x4
lbl_fn_801FEF40_000000DC:
    lwz r0, 0xc(r27)
    cmplw r25, r0
    blt lbl_fn_801FEF40_000000A0
    li r25, 0x0
    li r26, 0x0
    b lbl_fn_801FEF40_00000130
lbl_fn_801FEF40_000000F4:
    lwz r3, 0x20(r27)
    li r29, 0x0
    lwzx r31, r3, r26
    addi r30, r31, 0x4
lbl_fn_801FEF40_00000104:
    mr r3, r30
    mr r4, r28
    bl fn_801F0544
    addi r29, r29, 0x1
    stfs f1, 0x24(r31)
    cmpwi r29, 0x4
    addi r30, r30, 0x8
    addi r31, r31, 0x4
    blt lbl_fn_801FEF40_00000104
    addi r25, r25, 0x1
    addi r26, r26, 0x4
lbl_fn_801FEF40_00000130:
    lwz r0, 0x18(r27)
    cmplw r25, r0
    blt lbl_fn_801FEF40_000000F4
    li r25, 0x0
    li r26, 0x0
    b lbl_fn_801FEF40_00000184
lbl_fn_801FEF40_00000148:
    lwz r3, 0x2c(r27)
    li r29, 0x0
    lwzx r31, r3, r26
    addi r30, r31, 0x4
lbl_fn_801FEF40_00000158:
    mr r3, r30
    mr r4, r28
    bl fn_801F0544
    addi r29, r29, 0x1
    stfs f1, 0x24(r31)
    cmpwi r29, 0x4
    addi r30, r30, 0x8
    addi r31, r31, 0x4
    blt lbl_fn_801FEF40_00000158
    addi r25, r25, 0x1
    addi r26, r26, 0x4
lbl_fn_801FEF40_00000184:
    lwz r0, 0x24(r27)
    cmplw r25, r0
    blt lbl_fn_801FEF40_00000148
    addi r31, r1, 0x12
    li r29, 0x0
    li r26, 0x0
    b lbl_fn_801FEF40_00000264
lbl_fn_801FEF40_000001A0:
    lwz r4, 0x38(r27)
    mr r5, r28
    addi r3, r1, 0x10
    lwzx r6, r4, r26
    addi r4, r6, 0x4
    addi r30, r6, 0xc
    bl fn_801F0758
    lwz r0, 0x0(r30)
    srwi. r4, r0, 31
    bne lbl_fn_801FEF40_000001EC
    lwz r3, 0x10(r1)
    srwi. r0, r3, 31
    bne lbl_fn_801FEF40_000001EC
    lwz r0, 0x14(r1)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x18(r1)
    stw r0, 0x8(r30)
    b lbl_fn_801FEF40_00000248
lbl_fn_801FEF40_000001EC:
    cmpwi r4, 0x0
    beq lbl_fn_801FEF40_000001FC
    lwz r5, 0x4(r30)
    b lbl_fn_801FEF40_00000204
lbl_fn_801FEF40_000001FC:
    lbz r0, 0x0(r30)
    clrlwi r5, r0, 25
lbl_fn_801FEF40_00000204:
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801FEF40_00000220
    lbz r0, 0x10(r1)
    mr r6, r31
    clrlwi r0, r0, 25
    b lbl_fn_801FEF40_00000228
lbl_fn_801FEF40_00000220:
    lwz r6, 0x18(r1)
    lwz r0, 0x14(r1)
lbl_fn_801FEF40_00000228:
    lbz r3, 0x8(r1)
    slwi r0, r0, 1
    stb r3, 0xc(r1)
    mr r3, r30
    add r7, r6, r0
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_8006F72C
lbl_fn_801FEF40_00000248:
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801FEF40_0000025C
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_801FEF40_0000025C:
    addi r29, r29, 0x1
    addi r26, r26, 0x4
lbl_fn_801FEF40_00000264:
    lwz r0, 0x30(r27)
    cmplw r29, r0
    blt lbl_fn_801FEF40_000001A0
    li r25, 0x0
    li r29, 0x0
    b lbl_fn_801FEF40_0000029C
lbl_fn_801FEF40_0000027C:
    lwz r3, 0x44(r27)
    mr r4, r28
    lwzx r26, r3, r29
    addi r3, r26, 0x4
    bl fn_801F03AC
    stw r3, 0xc(r26)
    addi r25, r25, 0x1
    addi r29, r29, 0x4
lbl_fn_801FEF40_0000029C:
    lwz r0, 0x3c(r27)
    cmplw r25, r0
    blt lbl_fn_801FEF40_0000027C
    lmw r25, 0x24(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_801FF1B8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bl fn_801EC158
    lfs f2, lbl_80882CB8
    lis r5, lbl_80782DB8@ha
    lfs f0, lbl_80882CBC
    addi r5, r5, lbl_80782DB8@l
    stfs f2, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x8
    li r4, 0x3
    stfs f2, 0x14(r1)
    li r0, 0x0
    mr r3, r31
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_st f1, 0x130(r31), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stw r5, 0x0(r31)
    sth r4, 0x8(r31)
    stw r0, 0x12c(r31)
    psq_st f1, 0x138(r31), 0, 0
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801FF234(void)
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
    beq lbl_fn_801FF234_00000374
    li r4, 0x0
    bl fn_801EC6C0
    cmpwi r31, 0x0
    ble lbl_fn_801FF234_00000374
    mr r3, r30
    bl dtor_80084684
lbl_fn_801FF234_00000374:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801FF28C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    bl fn_801EDC78
    cmpwi r3, 0x0
    beq lbl_fn_801FF28C_00000830
    addi r3, r1, 0x48
    bl fn_801FF740
    addi r3, r1, 0x20
    bl fn_80041B8C
    addi r3, r1, 0x8
    bl fn_801FF75C
    addi r3, r1, 0x30
    bl fn_801FF8EC
    mr r3, r31
    addi r4, r1, 0x48
    addi r5, r1, 0x20
    addi r6, r1, 0x8
    addi r7, r1, 0x30
    bl fn_801ED928
    addi r3, r1, 0x10
    addi r4, r1, 0x38
    bl fn_800D8BB4
    lwz r3, 0xfc(r31)
    bl fn_801FF770
    cmpwi r3, 0x0
    beq lbl_fn_801FF28C_00000454
    lhz r0, 0xe(r31)
    cmpwi r0, 0x0
    bne lbl_fn_801FF28C_00000434
    lwz r3, 0xfc(r31)
    bl fn_801FF770
    mr r12, r3
    mr r3, r31
    addi r4, r1, 0x20
    li r5, 0x0
    mtctr r12
    bctrl
    b lbl_fn_801FF28C_00000454
lbl_fn_801FF28C_00000434:
    lwz r3, 0xfc(r31)
    bl fn_801FF770
    mr r12, r3
    mr r3, r31
    addi r4, r1, 0x20
    addi r5, r1, 0x10
    mtctr r12
    bctrl
lbl_fn_801FF28C_00000454:
    lfs f1, 0x2c(r1)
    lfs f0, lbl_80882CBC
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    beq lbl_fn_801FF28C_00000830
    lfs f0, 0x1c(r1)
    addi r3, r1, 0x20
    fmuls f0, f0, f1
    stfs f0, 0x1c(r1)
    bl fn_801FF778
    lwz r4, 0x12c(r31)
    mr r5, r3
    lfs f1, 0x48(r1)
    mr r3, r31
    lfs f2, 0x4c(r1)
    lfs f3, 0x58(r1)
    lfs f4, 0x50(r1)
    lfs f5, 0x54(r1)
    lwz r6, 0xc(r1)
    bl fn_801FF8F0
    lhz r0, 0xe(r31)
    cmplwi r0, 0x1
    bne lbl_fn_801FF28C_000004FC
    addi r3, r1, 0x10
    bl fn_800F8348
    lfs f1, 0x48(r1)
    mr r5, r3
    lfs f0, 0x30(r1)
    mr r3, r31
    lfs f4, 0x4c(r1)
    lfs f2, 0x34(r1)
    fadds f1, f1, f0
    lfs f3, lbl_80882CC0
    lfs f0, 0x58(r1)
    fadds f2, f4, f2
    lwz r4, 0x12c(r31)
    fadds f3, f3, f0
    lfs f4, 0x50(r1)
    lfs f5, 0x54(r1)
    lwz r6, 0xc(r1)
    bl fn_801FF8F0
    b lbl_fn_801FF28C_00000830
lbl_fn_801FF28C_000004FC:
    cmplwi r0, 0x2
    bne lbl_fn_801FF28C_00000608
    addi r3, r1, 0x10
    bl fn_800F8348
    lfs f3, 0x48(r1)
    mr r5, r3
    lfs f1, 0x30(r1)
    mr r3, r31
    lfs f2, lbl_80882CC0
    lfs f0, 0x58(r1)
    fadds f1, f3, f1
    lwz r4, 0x12c(r31)
    fadds f3, f2, f0
    lfs f2, 0x4c(r1)
    lfs f4, 0x50(r1)
    lfs f5, 0x54(r1)
    lwz r6, 0xc(r1)
    bl fn_801FF8F0
    addi r3, r1, 0x10
    bl fn_800F8348
    lfs f3, 0x4c(r1)
    mr r5, r3
    lfs f2, 0x34(r1)
    mr r3, r31
    lfs f1, lbl_80882CC0
    lfs f0, 0x58(r1)
    fadds f2, f3, f2
    lwz r4, 0x12c(r31)
    fadds f3, f1, f0
    lfs f1, 0x48(r1)
    lfs f4, 0x50(r1)
    lfs f5, 0x54(r1)
    lwz r6, 0xc(r1)
    bl fn_801FF8F0
    addi r3, r1, 0x10
    bl fn_800F8348
    lfs f3, 0x48(r1)
    mr r5, r3
    lfs f1, 0x30(r1)
    mr r3, r31
    lfs f2, lbl_80882CC0
    lfs f0, 0x58(r1)
    fsubs f1, f3, f1
    lwz r4, 0x12c(r31)
    fadds f3, f2, f0
    lfs f2, 0x4c(r1)
    lfs f4, 0x50(r1)
    lfs f5, 0x54(r1)
    lwz r6, 0xc(r1)
    bl fn_801FF8F0
    addi r3, r1, 0x10
    bl fn_800F8348
    lfs f3, 0x4c(r1)
    mr r5, r3
    lfs f2, 0x34(r1)
    mr r3, r31
    lfs f1, lbl_80882CC0
    lfs f0, 0x58(r1)
    fsubs f2, f3, f2
    lwz r4, 0x12c(r31)
    fadds f3, f1, f0
    lfs f1, 0x48(r1)
    lfs f4, 0x50(r1)
    lfs f5, 0x54(r1)
    lwz r6, 0xc(r1)
    bl fn_801FF8F0
    b lbl_fn_801FF28C_00000830
lbl_fn_801FF28C_00000608:
    cmplwi r0, 0x3
    bne lbl_fn_801FF28C_00000830
    addi r3, r1, 0x10
    bl fn_800F8348
    lfs f3, 0x48(r1)
    mr r5, r3
    lfs f1, 0x30(r1)
    mr r3, r31
    lfs f2, lbl_80882CC0
    lfs f0, 0x58(r1)
    fadds f1, f3, f1
    lwz r4, 0x12c(r31)
    fadds f3, f2, f0
    lfs f2, 0x4c(r1)
    lfs f4, 0x50(r1)
    lfs f5, 0x54(r1)
    lwz r6, 0xc(r1)
    bl fn_801FF8F0
    addi r3, r1, 0x10
    bl fn_800F8348
    lfs f3, 0x4c(r1)
    mr r5, r3
    lfs f2, 0x34(r1)
    mr r3, r31
    lfs f1, lbl_80882CC0
    lfs f0, 0x58(r1)
    fadds f2, f3, f2
    lwz r4, 0x12c(r31)
    fadds f3, f1, f0
    lfs f1, 0x48(r1)
    lfs f4, 0x50(r1)
    lfs f5, 0x54(r1)
    lwz r6, 0xc(r1)
    bl fn_801FF8F0
    addi r3, r1, 0x10
    bl fn_800F8348
    lfs f3, 0x48(r1)
    mr r5, r3
    lfs f1, 0x30(r1)
    mr r3, r31
    lfs f2, lbl_80882CC0
    lfs f0, 0x58(r1)
    fsubs f1, f3, f1
    lwz r4, 0x12c(r31)
    fadds f3, f2, f0
    lfs f2, 0x4c(r1)
    lfs f4, 0x50(r1)
    lfs f5, 0x54(r1)
    lwz r6, 0xc(r1)
    bl fn_801FF8F0
    addi r3, r1, 0x10
    bl fn_800F8348
    lfs f3, 0x4c(r1)
    mr r5, r3
    lfs f2, 0x34(r1)
    mr r3, r31
    lfs f1, lbl_80882CC0
    lfs f0, 0x58(r1)
    fsubs f2, f3, f2
    lwz r4, 0x12c(r31)
    fadds f3, f1, f0
    lfs f1, 0x48(r1)
    lfs f4, 0x50(r1)
    lfs f5, 0x54(r1)
    lwz r6, 0xc(r1)
    bl fn_801FF8F0
    addi r3, r1, 0x10
    bl fn_800F8348
    lfs f1, 0x48(r1)
    mr r5, r3
    lfs f0, 0x30(r1)
    mr r3, r31
    lfs f4, 0x4c(r1)
    lfs f2, 0x34(r1)
    fadds f1, f1, f0
    lfs f3, lbl_80882CC0
    lfs f0, 0x58(r1)
    fadds f2, f4, f2
    lwz r4, 0x12c(r31)
    fadds f3, f3, f0
    lfs f4, 0x50(r1)
    lfs f5, 0x54(r1)
    lwz r6, 0xc(r1)
    bl fn_801FF8F0
    addi r3, r1, 0x10
    bl fn_800F8348
    lfs f1, 0x48(r1)
    mr r5, r3
    lfs f0, 0x30(r1)
    mr r3, r31
    lfs f4, 0x4c(r1)
    lfs f2, 0x34(r1)
    fadds f1, f1, f0
    lfs f3, lbl_80882CC0
    lfs f0, 0x58(r1)
    fsubs f2, f4, f2
    lwz r4, 0x12c(r31)
    fadds f3, f3, f0
    lfs f4, 0x50(r1)
    lfs f5, 0x54(r1)
    lwz r6, 0xc(r1)
    bl fn_801FF8F0
    addi r3, r1, 0x10
    bl fn_800F8348
    lfs f1, 0x48(r1)
    mr r5, r3
    lfs f0, 0x30(r1)
    mr r3, r31
    lfs f4, 0x4c(r1)
    lfs f2, 0x34(r1)
    fsubs f1, f1, f0
    lfs f3, lbl_80882CC0
    lfs f0, 0x58(r1)
    fsubs f2, f4, f2
    lwz r4, 0x12c(r31)
    fadds f3, f3, f0
    lfs f4, 0x50(r1)
    lfs f5, 0x54(r1)
    lwz r6, 0xc(r1)
    bl fn_801FF8F0
    addi r3, r1, 0x10
    bl fn_800F8348
    lfs f1, 0x48(r1)
    mr r5, r3
    lfs f0, 0x30(r1)
    mr r3, r31
    lfs f4, 0x4c(r1)
    lfs f2, 0x34(r1)
    fsubs f1, f1, f0
    lfs f3, lbl_80882CC0
    lfs f0, 0x58(r1)
    fadds f2, f4, f2
    lwz r4, 0x12c(r31)
    fadds f3, f3, f0
    lfs f4, 0x50(r1)
    lfs f5, 0x54(r1)
    lwz r6, 0xc(r1)
    bl fn_801FF8F0
lbl_fn_801FF28C_00000830:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_801FF740(void)
{
    nofralloc
    lfs f0, lbl_80882CBC
    stfs f0, 0x0(r3)
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    blr
}

asm void fn_801FF75C(void)
{
    nofralloc
    lfs f0, lbl_80882CBC
    li r0, 0x0
    stfs f0, 0x0(r3)
    stw r0, 0x4(r3)
    blr
}

asm void fn_801FF770(void)
{
    nofralloc
    lwz r3, 0xa0(r3)
    blr
}

asm void fn_801FF778(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f2, 0x0(r3)
    stw r0, 0x24(r1)
    lfs f0, lbl_80882CB8
    stw r31, 0x1c(r1)
    fcmpo cr0, f2, f0
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    cror eq, gt, eq
    bne lbl_fn_801FF778_000008B8
    li r29, 0xff
    b lbl_fn_801FF778_000008E4
lbl_fn_801FF778_000008B8:
    lfs f0, lbl_80882CBC
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801FF778_000008D0
    li r3, 0x0
    b lbl_fn_801FF778_000008E0
lbl_fn_801FF778_000008D0:
    lfs f1, lbl_80882CC8
    lfs f0, lbl_80882CC4
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801FF778_000008E0:
    mr r29, r3
lbl_fn_801FF778_000008E4:
    lfs f2, 0x4(r28)
    lfs f0, lbl_80882CB8
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_801FF778_00000900
    li r30, 0xff
    b lbl_fn_801FF778_0000092C
lbl_fn_801FF778_00000900:
    lfs f0, lbl_80882CBC
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801FF778_00000918
    li r3, 0x0
    b lbl_fn_801FF778_00000928
lbl_fn_801FF778_00000918:
    lfs f1, lbl_80882CC8
    lfs f0, lbl_80882CC4
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801FF778_00000928:
    mr r30, r3
lbl_fn_801FF778_0000092C:
    lfs f2, 0x8(r28)
    lfs f0, lbl_80882CB8
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_801FF778_00000948
    li r31, 0xff
    b lbl_fn_801FF778_00000974
lbl_fn_801FF778_00000948:
    lfs f0, lbl_80882CBC
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801FF778_00000960
    li r3, 0x0
    b lbl_fn_801FF778_00000970
lbl_fn_801FF778_00000960:
    lfs f1, lbl_80882CC8
    lfs f0, lbl_80882CC4
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801FF778_00000970:
    mr r31, r3
lbl_fn_801FF778_00000974:
    lfs f2, 0xc(r28)
    lfs f0, lbl_80882CB8
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_801FF778_00000990
    li r3, 0xff
    b lbl_fn_801FF778_000009B8
lbl_fn_801FF778_00000990:
    lfs f0, lbl_80882CBC
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801FF778_000009A8
    li r3, 0x0
    b lbl_fn_801FF778_000009B8
lbl_fn_801FF778_000009A8:
    lfs f1, lbl_80882CC8
    lfs f0, lbl_80882CC4
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801FF778_000009B8:
    slwi r3, r3, 24
    slwi r0, r29, 16
    or r3, r3, r0
    slwi r0, r30, 8
    or r0, r0, r3
    or r3, r31, r0
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801FF8EC(void)
{
    nofralloc
    blr
}

asm void fn_801FF8F0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x30
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    stfd f29, 0x50(r1)
    psq_st f29, 0x58(r1), 0, 0
    stfd f28, 0x40(r1)
    psq_st f28, 0x48(r1), 0, 0
    stfd f27, 0x30(r1)
    psq_st f27, 0x38(r1), 0, 0
    bl _savegpr_27
    fmr f27, f1
    mr r27, r3
    fmr f28, f2
    lwz r3, lbl_8087F138
    mr r29, r5
    fmr f29, f3
    fmr f30, f4
    mr r28, r4
    fmr f31, f5
    mr r30, r6
    li r5, 0x0
    bl fn_801F1098
    mr r31, r3
    lwz r3, lbl_8087F138
    mr r4, r28
    li r5, 0x1
    bl fn_801F1098
    cmpwi r31, 0x0
    lwz r0, lbl_8087EEB0
    mr r6, r3
    beq lbl_fn_801FF8F0_00000AC8
    cmpwi r3, 0x0
    beq lbl_fn_801FF8F0_00000AC8
    lfs f0, 0x134(r27)
    fmr f1, f27
    stfs f0, 0x8(r1)
    fmr f2, f28
    fmr f3, f29
    mr r3, r0
    fmr f4, f30
    fmr f5, f31
    lfs f6, 0x138(r27)
    lfs f7, 0x13c(r27)
    lfs f8, 0x130(r27)
    mr r4, r29
    mr r5, r31
    mr r7, r30
    bl fn_80061E2C
lbl_fn_801FF8F0_00000AC8:
    addi r11, r1, 0x30
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    psq_l f29, 0x58(r1), 0, 0
    lfd f29, 0x50(r1)
    psq_l f28, 0x48(r1), 0, 0
    lfd f28, 0x40(r1)
    psq_l f27, 0x38(r1), 0, 0
    lfd f27, 0x30(r1)
    bl _restgpr_27
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_801FFA04(void)
{
    nofralloc
    stwu r1, -0x300(r1)
    mflr r0
    stw r0, 0x304(r1)
    addi r11, r1, 0x300
    bl _savegpr_23
    li r24, 0x0
    addi r0, r1, 0x88
    stw r4, 0x9c(r1)
    mr r30, r5
    mr r31, r6
    mr r4, r3
    stw r3, 0x98(r1)
    addi r3, r1, 0x90
    stw r5, 0x88(r1)
    li r5, 0x4
    stw r24, 0xa0(r1)
    stw r24, 0x90(r1)
    stw r6, 0x8c(r1)
    stw r7, 0x94(r1)
    stw r0, 0xa4(r1)
    bl memcpy
    lwz r4, 0xa0(r1)
    addi r3, r1, 0x78
    lwz r0, 0x98(r1)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0xa0(r1)
    add r4, r0, r4
    stw r24, 0x78(r1)
    stw r24, 0x74(r1)
    stw r24, 0x70(r1)
    stw r24, 0x6c(r1)
    stw r24, 0x68(r1)
    stw r24, 0x64(r1)
    bl memcpy
    lwz r4, 0xa0(r1)
    addi r3, r1, 0x74
    lwz r0, 0x98(r1)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0xa0(r1)
    add r4, r0, r4
    bl memcpy
    lwz r4, 0xa0(r1)
    addi r3, r1, 0x70
    lwz r0, 0x98(r1)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0xa0(r1)
    add r4, r0, r4
    bl memcpy
    lwz r4, 0xa0(r1)
    addi r3, r1, 0x6c
    lwz r0, 0x98(r1)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0xa0(r1)
    add r4, r0, r4
    bl memcpy
    lwz r4, 0xa0(r1)
    addi r3, r1, 0x68
    lwz r0, 0x98(r1)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0xa0(r1)
    add r4, r0, r4
    bl memcpy
    lwz r0, 0x90(r1)
    lwz r3, 0xa0(r1)
    cmpwi r0, 0x514
    addi r4, r3, 0x4
    stw r4, 0xa0(r1)
    blt lbl_fn_801FFA04_00000C4C
    lwz r0, 0x98(r1)
    addi r3, r1, 0x64
    li r5, 0x4
    add r4, r0, r4
    bl memcpy
    lwz r3, 0xa0(r1)
    addi r0, r3, 0x4
    stw r0, 0xa0(r1)
lbl_fn_801FFA04_00000C4C:
    lwz r4, 0x78(r1)
    mr r3, r30
    lwz r5, 0x74(r1)
    lwz r6, 0x70(r1)
    lwz r7, 0x6c(r1)
    lwz r8, 0x68(r1)
    lwz r9, 0x64(r1)
    bl fn_801EF15C
    lwz r0, 0x90(r1)
    cmpwi r0, 0x578
    blt lbl_fn_801FFA04_00000CD8
    lfs f0, lbl_80882CD0
    addi r3, r1, 0x60
    lwz r4, 0x98(r1)
    li r5, 0x4
    lwz r0, 0xa0(r1)
    stfs f0, 0x60(r1)
    add r4, r4, r0
    bl memcpy
    lwz r4, 0xa0(r1)
    addi r3, r1, 0x60
    lfs f0, 0x60(r1)
    li r5, 0x4
    addi r0, r4, 0x4
    stw r0, 0xa0(r1)
    stfs f0, 0x60(r30)
    lwz r4, 0x98(r1)
    lwz r0, 0xa0(r1)
    add r4, r4, r0
    bl memcpy
    lwz r3, 0xa0(r1)
    lfs f0, 0x60(r1)
    addi r0, r3, 0x4
    stw r0, 0xa0(r1)
    stfs f0, 0x64(r30)
lbl_fn_801FFA04_00000CD8:
    lwz r4, 0x98(r1)
    li r6, 0x0
    lwz r0, 0xa0(r1)
    addi r3, r1, 0x5c
    stw r6, 0x5c(r1)
    li r5, 0x4
    add r4, r4, r0
    stw r6, 0x58(r1)
    stw r6, 0x54(r1)
    stw r6, 0x50(r1)
    stw r6, 0x4c(r1)
    stw r6, 0x48(r1)
    bl memcpy
    lwz r3, 0xa0(r1)
    lwz r24, 0x5c(r1)
    addi r0, r3, 0x4
    stw r0, 0xa0(r1)
    lwz r3, 0x84(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801FFA04_00000D2C
    bl fn_80084C24
lbl_fn_801FFA04_00000D2C:
    cmpwi r24, 0x0
    stw r24, 0x80(r30)
    beq lbl_fn_801FFA04_00000D58
    mr r3, r24
    li r4, 0x8
    la r5, lbl_8087D824
    la r6, lbl_8087D820
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x84(r30)
    b lbl_fn_801FFA04_00000D60
lbl_fn_801FFA04_00000D58:
    li r0, 0x0
    stw r0, 0x84(r30)
lbl_fn_801FFA04_00000D60:
    lwz r4, 0x98(r1)
    addi r3, r1, 0x58
    lwz r0, 0xa0(r1)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r3, 0xa0(r1)
    lwz r24, 0x58(r1)
    addi r0, r3, 0x4
    stw r0, 0xa0(r1)
    lwz r3, 0x6c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801FFA04_00000DA0
    beq lbl_fn_801FFA04_00000DA0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_801FFA04_00000DA0:
    cmpwi r24, 0x0
    stw r24, 0x68(r30)
    beq lbl_fn_801FFA04_00000DE8
    slwi r3, r24, 3
    li r4, 0x8
    addi r3, r3, 0x10
    la r5, lbl_8087DB1C
    la r6, lbl_8087DB18
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80201DC4@ha
    mr r7, r24
    addi r4, r4, fn_80201DC4@l
    li r5, 0x0
    li r6, 0x8
    bl fn_80695720
    stw r3, 0x6c(r30)
    b lbl_fn_801FFA04_00000DF0
lbl_fn_801FFA04_00000DE8:
    li r0, 0x0
    stw r0, 0x6c(r30)
lbl_fn_801FFA04_00000DF0:
    lwz r4, 0x98(r1)
    addi r3, r1, 0x54
    lwz r0, 0xa0(r1)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r3, 0xa0(r1)
    lwz r24, 0x54(r1)
    addi r0, r3, 0x4
    stw r0, 0xa0(r1)
    lwz r3, 0x74(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801FFA04_00000E30
    beq lbl_fn_801FFA04_00000E30
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_801FFA04_00000E30:
    cmpwi r24, 0x0
    stw r24, 0x70(r30)
    beq lbl_fn_801FFA04_00000E78
    slwi r3, r24, 3
    li r4, 0x8
    addi r3, r3, 0x10
    la r5, lbl_8087DB14
    la r6, lbl_8087DB10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80201DD4@ha
    mr r7, r24
    addi r4, r4, fn_80201DD4@l
    li r5, 0x0
    li r6, 0x8
    bl fn_80695720
    stw r3, 0x74(r30)
    b lbl_fn_801FFA04_00000E80
lbl_fn_801FFA04_00000E78:
    li r0, 0x0
    stw r0, 0x74(r30)
lbl_fn_801FFA04_00000E80:
    lwz r4, 0x98(r1)
    addi r3, r1, 0x50
    lwz r0, 0xa0(r1)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r3, 0xa0(r1)
    lwz r24, 0x50(r1)
    addi r0, r3, 0x4
    stw r0, 0xa0(r1)
    lwz r3, 0x7c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801FFA04_00000EC0
    lis r4, fn_801EEF04@ha
    addi r4, r4, fn_801EEF04@l
    bl fn_80695A50
lbl_fn_801FFA04_00000EC0:
    cmpwi r24, 0x0
    stw r24, 0x78(r30)
    beq lbl_fn_801FFA04_00000F0C
    slwi r3, r24, 4
    li r4, 0x8
    addi r3, r3, 0x10
    la r5, lbl_8087DB0C
    la r6, lbl_8087DB08
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80201DE8@ha
    lis r5, fn_801EEF04@ha
    mr r7, r24
    li r6, 0x10
    addi r4, r4, fn_80201DE8@l
    addi r5, r5, fn_801EEF04@l
    bl fn_80695720
    stw r3, 0x7c(r30)
    b lbl_fn_801FFA04_00000F14
lbl_fn_801FFA04_00000F0C:
    li r0, 0x0
    stw r0, 0x7c(r30)
lbl_fn_801FFA04_00000F14:
    lwz r4, 0x98(r1)
    addi r3, r1, 0x4c
    lwz r0, 0xa0(r1)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r3, 0xa0(r1)
    lwz r24, 0x4c(r1)
    addi r0, r3, 0x4
    stw r0, 0xa0(r1)
    lwz r3, 0x8c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801FFA04_00000F54
    beq lbl_fn_801FFA04_00000F54
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_801FFA04_00000F54:
    cmpwi r24, 0x0
    stw r24, 0x88(r30)
    beq lbl_fn_801FFA04_00000F9C
    slwi r3, r24, 4
    li r4, 0x8
    addi r3, r3, 0x10
    la r5, lbl_8087DAD4
    la r6, lbl_8087DAD0
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_801EFAB8@ha
    mr r7, r24
    addi r4, r4, fn_801EFAB8@l
    li r5, 0x0
    li r6, 0x10
    bl fn_80695720
    stw r3, 0x8c(r30)
    b lbl_fn_801FFA04_00000FA4
lbl_fn_801FFA04_00000F9C:
    li r0, 0x0
    stw r0, 0x8c(r30)
lbl_fn_801FFA04_00000FA4:
    lwz r4, 0x98(r1)
    addi r3, r1, 0xc0
    lwz r0, 0xa0(r1)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r4, 0xa0(r1)
    addi r3, r1, 0xc4
    lwz r0, 0x98(r1)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0xa0(r1)
    add r4, r0, r4
    bl memcpy
    lwz r4, 0xa0(r1)
    addi r3, r1, 0xc8
    lwz r0, 0x98(r1)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0xa0(r1)
    add r4, r0, r4
    bl memcpy
    lwz r4, 0xa0(r1)
    addi r3, r1, 0xcc
    lwz r0, 0x98(r1)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0xa0(r1)
    add r4, r0, r4
    bl memcpy
    lwz r4, 0xa0(r1)
    addi r3, r1, 0xd0
    lwz r0, 0x98(r1)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0xa0(r1)
    add r4, r0, r4
    bl memcpy
    lwz r4, 0xa0(r1)
    addi r3, r1, 0xd4
    lwz r0, 0x98(r1)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0xa0(r1)
    add r4, r0, r4
    bl memcpy
    lwz r5, 0xa0(r1)
    addi r3, r30, 0x10
    addi r4, r1, 0xc0
    addi r0, r5, 0x4
    stw r0, 0xa0(r1)
    bl fn_801FE090
    lwz r4, 0x98(r1)
    addi r3, r1, 0x48
    lwz r0, 0xa0(r1)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r3, 0xa0(r1)
    lwz r23, 0x5c(r1)
    addi r4, r3, 0x4
    stw r4, 0xa0(r1)
    cmpwi r23, 0x0
    lwz r3, 0x84(r30)
    ble lbl_fn_801FFA04_000010C4
    lwz r0, 0x98(r1)
    mr r5, r23
    add r4, r0, r4
    bl memcpy
    lwz r0, 0xa0(r1)
    add r0, r0, r23
    stw r0, 0xa0(r1)
lbl_fn_801FFA04_000010C4:
    lwz r24, 0x68(r30)
    li r25, 0x0
    lwz r23, 0x6c(r30)
    b lbl_fn_801FFA04_00001120
lbl_fn_801FFA04_000010D4:
    lwz r4, 0x98(r1)
    mr r3, r23
    lwz r0, 0xa0(r1)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r4, 0xa0(r1)
    addi r3, r23, 0x4
    lwz r0, 0x98(r1)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0xa0(r1)
    add r4, r0, r4
    bl memcpy
    lwz r3, 0xa0(r1)
    addi r23, r23, 0x8
    addi r25, r25, 0x1
    addi r0, r3, 0x4
    stw r0, 0xa0(r1)
lbl_fn_801FFA04_00001120:
    cmpw r25, r24
    blt lbl_fn_801FFA04_000010D4
    lwz r24, 0x70(r30)
    li r25, 0x0
    lwz r23, 0x74(r30)
    b lbl_fn_801FFA04_00001184
lbl_fn_801FFA04_00001138:
    lwz r4, 0x98(r1)
    mr r3, r23
    lwz r0, 0xa0(r1)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r4, 0xa0(r1)
    addi r3, r23, 0x4
    lwz r0, 0x98(r1)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0xa0(r1)
    add r4, r0, r4
    bl memcpy
    lwz r3, 0xa0(r1)
    addi r23, r23, 0x8
    addi r25, r25, 0x1
    addi r0, r3, 0x4
    stw r0, 0xa0(r1)
lbl_fn_801FFA04_00001184:
    cmpw r25, r24
    blt lbl_fn_801FFA04_00001138
    lwz r28, 0x78(r30)
    li r29, 0x0
    lwz r25, 0x7c(r30)
    cmpwi r28, 0x0
    ble lbl_fn_801FFA04_00001284
    lbz r24, 0xc(r1)
    addi r26, r1, 0xd8
    li r27, 0x0
    b lbl_fn_801FFA04_0000127C
lbl_fn_801FFA04_000011B0:
    lwz r4, 0x98(r1)
    mr r3, r25
    lwz r0, 0xa0(r1)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r4, 0xa0(r1)
    addi r3, r1, 0x40
    lwz r0, 0x98(r1)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0xa0(r1)
    add r4, r0, r4
    bl memcpy
    lwz r4, 0xa0(r1)
    addi r3, r1, 0xd8
    lwz r23, 0x40(r1)
    addi r4, r4, 0x4
    lwz r0, 0x98(r1)
    stw r4, 0xa0(r1)
    slwi r5, r23, 1
    add r4, r0, r4
    bl memcpy
    lwz r0, 0x40(r1)
    slwi r3, r23, 1
    lwz r4, 0xa0(r1)
    slwi r0, r0, 1
    add r3, r4, r3
    stw r3, 0xa0(r1)
    sthx r27, r26, r0
    lwz r0, 0x4(r25)
    srwi. r0, r0, 31
    bne lbl_fn_801FFA04_00001240
    lbz r0, 0x4(r25)
    clrlwi r23, r0, 25
    b lbl_fn_801FFA04_00001244
lbl_fn_801FFA04_00001240:
    lwz r23, 0x8(r25)
lbl_fn_801FFA04_00001244:
    stb r24, 0x8(r1)
    addi r3, r1, 0xd8
    bl fn_80686A48
    addi r6, r1, 0xd8
    slwi r0, r3, 1
    mr r7, r6
    mr r5, r23
    addi r3, r25, 0x4
    addi r8, r1, 0x8
    add r7, r7, r0
    li r4, 0x0
    bl fn_8006F72C
    addi r25, r25, 0x10
    addi r29, r29, 0x1
lbl_fn_801FFA04_0000127C:
    cmpw r29, r28
    blt lbl_fn_801FFA04_000011B0
lbl_fn_801FFA04_00001284:
    lwz r4, 0x98(r1)
    li r29, 0x0
    lwz r0, 0xa0(r1)
    addi r3, r1, 0x44
    stw r29, 0x44(r1)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r4, 0xa0(r1)
    li r26, 0x0
    lwz r0, 0x48(r1)
    lwz r3, 0x44(r1)
    addi r4, r4, 0x4
    slwi r0, r0, 3
    add r3, r4, r3
    add r0, r3, r0
    stw r0, 0xa0(r1)
    lwz r27, 0x88(r30)
    lwz r25, 0x8c(r30)
    b lbl_fn_801FFA04_00001390
lbl_fn_801FFA04_000012D4:
    lwz r6, 0xa4(r1)
    addi r3, r1, 0x34
    lwz r4, 0x98(r1)
    li r5, 0x4
    lwz r28, 0x0(r6)
    lwz r0, 0xa0(r1)
    stw r29, 0x34(r1)
    add r4, r4, r0
    bl memcpy
    lwz r4, 0xa0(r1)
    addi r3, r1, 0x38
    lwz r0, 0x34(r1)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0xa0(r1)
    stw r0, 0x0(r25)
    lwz r4, 0x98(r1)
    lwz r0, 0xa0(r1)
    stw r29, 0x38(r1)
    add r4, r4, r0
    stw r29, 0x3c(r1)
    bl memcpy
    lwz r4, 0xa0(r1)
    addi r3, r1, 0x3c
    lwz r0, 0x98(r1)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0xa0(r1)
    add r4, r0, r4
    bl memcpy
    lwz r5, 0x3c(r1)
    lwz r3, 0xa0(r1)
    cmpwi r5, 0x0
    addi r0, r3, 0x4
    stw r0, 0xa0(r1)
    blt lbl_fn_801FFA04_00001388
    lwz r0, 0x70(r28)
    cmpwi r0, 0x0
    beq lbl_fn_801FFA04_00001388
    lwz r4, 0x38(r1)
    slwi r0, r5, 3
    lwz r3, 0x74(r28)
    add r0, r3, r0
    stw r0, 0x4(r25)
    stw r4, 0x8(r25)
lbl_fn_801FFA04_00001388:
    addi r25, r25, 0x10
    addi r26, r26, 0x1
lbl_fn_801FFA04_00001390:
    cmpw r26, r27
    blt lbl_fn_801FFA04_000012D4
    li r3, 0x0
    stw r3, 0x7c(r1)
    stw r3, 0x80(r1)
    stw r3, 0x84(r1)
    lwz r26, 0x88(r30)
    cmplw r26, r3
    ble lbl_fn_801FFA04_00001688
    bgt lbl_fn_801FFA04_000013C4
    neg r0, r26
    cmplw r3, r0
    ble lbl_fn_801FFA04_0000142C
lbl_fn_801FFA04_000013C4:
    lis r3, 0x4000
    lwz r4, 0x80(r1)
    subi r0, r3, 0x1
    lwz r24, 0x84(r1)
    add r3, r4, r26
    subf r0, r24, r0
    cmplw r3, r0
    ble lbl_fn_801FFA04_00001404
    lis r3, __files@ha
    lis r4, lbl_8073E628@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8073E628@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801FFA04_00001404:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r24, r0
    bge lbl_fn_801FFA04_00001418
    b lbl_fn_801FFA04_0000144C
lbl_fn_801FFA04_00001418:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r24, r0
    bge lbl_fn_801FFA04_0000144C
    b lbl_fn_801FFA04_0000144C
lbl_fn_801FFA04_0000142C:
    slwi r5, r26, 2
    li r3, 0x0
    li r4, 0x0
    bl memset
    lwz r0, 0x80(r1)
    add r0, r0, r26
    stw r0, 0x80(r1)
    b lbl_fn_801FFA04_00001698
lbl_fn_801FFA04_0000144C:
    lwz r0, 0x80(r1)
    li r6, 0x0
    lis r3, 0x4000
    lwz r28, 0x84(r1)
    add r4, r0, r26
    addi r5, r1, 0x84
    subi r0, r3, 0x1
    stw r6, 0xa8(r1)
    subf r3, r28, r4
    subf r0, r28, r0
    stw r6, 0xac(r1)
    cmplw r3, r0
    stw r6, 0xb0(r1)
    stw r5, 0xb4(r1)
    stw r6, 0xb8(r1)
    stw r3, 0x30(r1)
    ble lbl_fn_801FFA04_000014B0
    lis r3, __files@ha
    lis r4, lbl_8073E628@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8073E628@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801FFA04_000014B0:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r28, r0
    bge lbl_fn_801FFA04_00001500
    addi r5, r28, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x30(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x28
    srwi r4, r4, 2
    stw r4, 0x28(r1)
    cmplw r4, r0
    bge lbl_fn_801FFA04_000014F4
    addi r3, r1, 0x30
lbl_fn_801FFA04_000014F4:
    lwz r0, 0x0(r3)
    add r24, r28, r0
    b lbl_fn_801FFA04_00001544
lbl_fn_801FFA04_00001500:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r28, r0
    bge lbl_fn_801FFA04_0000153C
    addi r3, r28, 0x1
    lwz r0, 0x30(r1)
    srwi r3, r3, 1
    stw r3, 0x2c(r1)
    cmplw r3, r0
    addi r3, r1, 0x2c
    bge lbl_fn_801FFA04_00001530
    addi r3, r1, 0x30
lbl_fn_801FFA04_00001530:
    lwz r0, 0x0(r3)
    add r24, r28, r0
    b lbl_fn_801FFA04_00001544
lbl_fn_801FFA04_0000153C:
    lis r3, 0x4000
    subi r24, r3, 0x1
lbl_fn_801FFA04_00001544:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r24, r0
    ble lbl_fn_801FFA04_00001574
    lis r3, __files@ha
    lis r4, lbl_8073E628@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8073E628@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801FFA04_00001574:
    slwi r3, r24, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_801FFA04_000015A8
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801FFA04_000015A8:
    lwz r7, 0x80(r1)
    slwi r5, r26, 2
    lwz r0, 0xac(r1)
    li r4, 0x0
    slwi r6, r7, 2
    stw r25, 0xa8(r1)
    slwi r3, r0, 2
    add r0, r25, r6
    stw r24, 0xb0(r1)
    add r3, r3, r0
    stw r7, 0xb8(r1)
    bl memset
    lwz r0, 0x80(r1)
    lwz r25, 0x7c(r1)
    slwi r0, r0, 2
    lwz r4, 0xac(r1)
    add r3, r25, r0
    lwz r0, 0xb8(r1)
    subf r3, r25, r3
    add r5, r4, r26
    srawi r4, r3, 2
    lwz r3, 0xa8(r1)
    addze r24, r4
    stw r5, 0xac(r1)
    subf r0, r24, r0
    mr r4, r25
    slwi r23, r24, 2
    stw r0, 0xb8(r1)
    slwi r0, r0, 2
    mr r5, r23
    add r3, r3, r0
    bl memcpy
    mr r3, r25
    mr r5, r23
    li r4, 0x0
    bl memset
    addic. r0, r1, 0xa8
    lwz r0, 0xac(r1)
    li r5, 0x0
    lwz r7, 0x84(r1)
    lwz r4, 0xb0(r1)
    add r6, r0, r24
    lwz r3, 0x7c(r1)
    lwz r0, 0xa8(r1)
    stw r4, 0x84(r1)
    stw r7, 0xb0(r1)
    stw r0, 0x7c(r1)
    stw r3, 0xa8(r1)
    stw r6, 0x80(r1)
    stw r5, 0xac(r1)
    beq lbl_fn_801FFA04_00001698
    cmpwi r3, 0x0
    beq lbl_fn_801FFA04_00001698
    stw r5, 0xac(r1)
    bl dtor_80084684
    b lbl_fn_801FFA04_00001698
lbl_fn_801FFA04_00001688:
    bge lbl_fn_801FFA04_00001698
    neg r0, r26
    neg r0, r0
    stw r0, 0x80(r1)
lbl_fn_801FFA04_00001698:
    li r7, 0x0
    li r5, 0x0
    li r6, 0x0
    b lbl_fn_801FFA04_000016C8
lbl_fn_801FFA04_000016A8:
    lwz r0, 0x8c(r30)
    addi r7, r7, 0x1
    lwz r3, 0x7c(r1)
    add r4, r0, r5
    addi r5, r5, 0x10
    addi r0, r4, 0xc
    stwx r0, r3, r6
    addi r6, r6, 0x4
lbl_fn_801FFA04_000016C8:
    lwz r0, 0x88(r30)
    cmplw r7, r0
    blt lbl_fn_801FFA04_000016A8
    addi r3, r30, 0x80
    addi r4, r1, 0x7c
    bl fn_800A6E8C
    lwz r6, 0x6c(r1)
    lis r3, lbl_8073E628@ha
    lwz r4, 0x70(r1)
    addi r28, r3, lbl_8073E628@l
    lwz r5, 0x78(r1)
    li r27, 0x0
    lwz r0, 0x74(r1)
    add r4, r6, r4
    lwz r7, 0x64(r1)
    li r24, 0x0
    add r0, r5, r0
    lwz r6, 0x68(r1)
    add r0, r4, r0
    add r4, r7, r6
    add r25, r4, r0
    b lbl_fn_801FFA04_00001AC8
lbl_fn_801FFA04_00001720:
    lwz r4, 0x98(r1)
    addi r3, r1, 0x14
    lwz r0, 0xa0(r1)
    li r5, 0x2
    sth r24, 0x14(r1)
    add r4, r4, r0
    sth r24, 0x12(r1)
    bl memcpy
    lwz r4, 0xa0(r1)
    addi r3, r1, 0x12
    lwz r0, 0x98(r1)
    li r5, 0x2
    addi r4, r4, 0x2
    stw r4, 0xa0(r1)
    add r4, r0, r4
    bl memcpy
    lhz r4, 0x14(r1)
    lwz r3, 0xa0(r1)
    cmpwi r4, 0x0
    addi r0, r3, 0x2
    stw r0, 0xa0(r1)
    beq lbl_fn_801FFA04_000017A4
    cmpwi r4, 0x1
    beq lbl_fn_801FFA04_000017C4
    cmpwi r4, 0x2
    beq lbl_fn_801FFA04_000018DC
    cmpwi r4, 0x4
    beq lbl_fn_801FFA04_000018FC
    cmpwi r4, 0x3
    beq lbl_fn_801FFA04_0000191C
    cmpwi r4, 0x5
    beq lbl_fn_801FFA04_000019E4
    b lbl_fn_801FFA04_00001AC4
lbl_fn_801FFA04_000017A4:
    lhz r5, 0x12(r1)
    mr r3, r30
    bl fn_801EF36C
    mr r5, r3
    addi r4, r28, 0x14
    addi r3, r1, 0x98
    bl fn_80201794
    b lbl_fn_801FFA04_00001AC4
lbl_fn_801FFA04_000017C4:
    lhz r5, 0x12(r1)
    mr r3, r30
    bl fn_801EF36C
    mr r26, r3
    addi r4, r28, 0x1c
    mr r5, r26
    addi r3, r1, 0x98
    bl fn_80200ED0
    lwz r4, 0x98(r1)
    addi r3, r26, 0x12c
    lwz r0, 0xa0(r1)
    li r5, 0x2
    add r4, r4, r0
    bl memcpy
    lwz r4, 0xa0(r1)
    addi r3, r26, 0x12e
    lwz r0, 0x98(r1)
    li r5, 0x2
    addi r4, r4, 0x2
    stw r4, 0xa0(r1)
    add r4, r0, r4
    bl memcpy
    lwz r6, 0xa0(r1)
    addi r3, r1, 0x24
    lwz r4, 0xa4(r1)
    li r5, 0x4
    addi r6, r6, 0x2
    stw r6, 0xa0(r1)
    lwz r0, 0x98(r1)
    lwz r29, 0x0(r4)
    add r4, r0, r6
    stw r24, 0x24(r1)
    bl memcpy
    lwz r4, 0xa0(r1)
    addi r3, r1, 0x20
    lwz r0, 0x24(r1)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0xa0(r1)
    stw r0, 0x134(r26)
    lwz r4, 0x98(r1)
    lwz r0, 0xa0(r1)
    stw r24, 0x20(r1)
    add r4, r4, r0
    stw r24, 0x1c(r1)
    bl memcpy
    lwz r4, 0xa0(r1)
    addi r3, r1, 0x1c
    lwz r0, 0x98(r1)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0xa0(r1)
    add r4, r0, r4
    bl memcpy
    lwz r5, 0x1c(r1)
    lwz r3, 0xa0(r1)
    cmpwi r5, 0x0
    addi r0, r3, 0x4
    stw r0, 0xa0(r1)
    blt lbl_fn_801FFA04_00001AC4
    lwz r0, 0x78(r29)
    cmpwi r0, 0x0
    beq lbl_fn_801FFA04_00001AC4
    lwz r4, 0x20(r1)
    slwi r0, r5, 4
    lwz r3, 0x7c(r29)
    add r0, r3, r0
    stw r0, 0x138(r26)
    stw r4, 0x13c(r26)
    b lbl_fn_801FFA04_00001AC4
lbl_fn_801FFA04_000018DC:
    lhz r5, 0x12(r1)
    mr r3, r30
    bl fn_801EF36C
    mr r5, r3
    addi r4, r28, 0x1c
    addi r3, r1, 0x98
    bl fn_80200ED0
    b lbl_fn_801FFA04_00001AC4
lbl_fn_801FFA04_000018FC:
    lhz r5, 0x12(r1)
    mr r3, r30
    bl fn_801EF36C
    mr r5, r3
    addi r4, r28, 0x1c
    addi r3, r1, 0x98
    bl fn_80200ED0
    b lbl_fn_801FFA04_00001AC4
lbl_fn_801FFA04_0000191C:
    lhz r5, 0x12(r1)
    mr r3, r30
    bl fn_801EF36C
    mr r26, r3
    addi r4, r28, 0x1c
    mr r5, r26
    addi r3, r1, 0x98
    bl fn_80200ED0
    lwz r4, 0x98(r1)
    addi r3, r26, 0x12c
    lwz r0, 0xa0(r1)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r4, 0xa0(r1)
    addi r3, r26, 0x130
    lwz r0, 0x98(r1)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0xa0(r1)
    add r4, r0, r4
    bl memcpy
    lwz r4, 0xa0(r1)
    addi r3, r26, 0x134
    lwz r0, 0x98(r1)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0xa0(r1)
    add r4, r0, r4
    bl memcpy
    lwz r4, 0xa0(r1)
    addi r3, r26, 0x138
    lwz r0, 0x98(r1)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0xa0(r1)
    add r4, r0, r4
    bl memcpy
    lwz r4, 0xa0(r1)
    addi r3, r26, 0x13c
    lwz r0, 0x98(r1)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0xa0(r1)
    add r4, r0, r4
    bl memcpy
    lwz r3, 0xa0(r1)
    addi r0, r3, 0x4
    stw r0, 0xa0(r1)
    b lbl_fn_801FFA04_00001AC4
lbl_fn_801FFA04_000019E4:
    lhz r5, 0x12(r1)
    mr r3, r30
    bl fn_801EF36C
    mr r26, r3
    addi r4, r28, 0x1c
    mr r5, r26
    addi r3, r1, 0x98
    bl fn_80200ED0
    lwz r4, 0x98(r1)
    addi r3, r1, 0x18
    lwz r0, 0xa0(r1)
    li r5, 0x4
    stw r24, 0x18(r1)
    add r4, r4, r0
    bl memcpy
    lwz r3, 0xa0(r1)
    lwz r29, 0x18(r1)
    addi r0, r3, 0x4
    stw r0, 0xa0(r1)
    lwz r3, 0x130(r26)
    cmpwi r3, 0x0
    beq lbl_fn_801FFA04_00001A40
    bl fn_80084C24
lbl_fn_801FFA04_00001A40:
    cmpwi r29, 0x0
    stw r29, 0x12c(r26)
    beq lbl_fn_801FFA04_00001A6C
    slwi r3, r29, 2
    li r4, 0x8
    la r5, lbl_8087DAFC
    la r6, lbl_8087DAF8
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x130(r26)
    b lbl_fn_801FFA04_00001A70
lbl_fn_801FFA04_00001A6C:
    stw r24, 0x130(r26)
lbl_fn_801FFA04_00001A70:
    li r29, 0x0
    li r23, 0x0
    b lbl_fn_801FFA04_00001AB8
lbl_fn_801FFA04_00001A7C:
    lwz r4, 0x98(r1)
    addi r3, r1, 0x10
    lwz r0, 0xa0(r1)
    li r5, 0x2
    sth r24, 0x10(r1)
    add r4, r4, r0
    bl memcpy
    lwz r3, 0xa0(r1)
    addi r29, r29, 0x1
    lhz r0, 0x10(r1)
    addi r3, r3, 0x2
    stw r3, 0xa0(r1)
    lwz r3, 0x130(r26)
    stwx r0, r3, r23
    addi r23, r23, 0x4
lbl_fn_801FFA04_00001AB8:
    lwz r0, 0x12c(r26)
    cmplw r29, r0
    blt lbl_fn_801FFA04_00001A7C
lbl_fn_801FFA04_00001AC4:
    addi r27, r27, 0x1
lbl_fn_801FFA04_00001AC8:
    cmpw r27, r25
    blt lbl_fn_801FFA04_00001720
    li r24, 0x0
    li r25, 0x0
    li r29, 0x8
    b lbl_fn_801FFA04_00001DCC
lbl_fn_801FFA04_00001AE0:
    lwz r0, 0x18(r30)
    lwz r3, 0x8c(r30)
    cmpwi r0, 0x0
    add r28, r3, r25
    beq lbl_fn_801FFA04_00001B00
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801FFA04_00001C50
lbl_fn_801FFA04_00001B00:
    lwz r0, 0x14(r30)
    cmplwi r0, 0x8
    bgt lbl_fn_801FFA04_00001DA8
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087DAB4
    la r6, lbl_8087DAB0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x18(r30)
    mr r26, r3
    cmpwi r0, 0x0
    beq lbl_fn_801FFA04_00001C44
    lwz r0, 0x10(r30)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_801FFA04_00001B48
    mr r4, r0
lbl_fn_801FFA04_00001B48:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801FFA04_00001C3C
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801FFA04_00001C08
    addi r0, r8, 0x7
    mr r7, r26
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801FFA04_00001C08
lbl_fn_801FFA04_00001B7C:
    lwz r8, 0x18(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801FFA04_00001B7C
lbl_fn_801FFA04_00001C08:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801FFA04_00001C3C
lbl_fn_801FFA04_00001C20:
    lwz r3, 0x18(r30)
    addi r5, r5, 0x1
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801FFA04_00001C20
lbl_fn_801FFA04_00001C3C:
    lwz r3, 0x18(r30)
    bl fn_80084C24
lbl_fn_801FFA04_00001C44:
    stw r26, 0x18(r30)
    stw r29, 0x14(r30)
    b lbl_fn_801FFA04_00001DA8
lbl_fn_801FFA04_00001C50:
    lwz r3, 0x10(r30)
    cmplw r3, r0
    blt lbl_fn_801FFA04_00001DA8
    slwi r26, r3, 1
    cmplw r0, r26
    bgt lbl_fn_801FFA04_00001DA8
    slwi r3, r26, 2
    li r4, 0x0
    la r5, lbl_8087DAB4
    la r6, lbl_8087DAB0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x18(r30)
    mr r27, r3
    cmpwi r0, 0x0
    beq lbl_fn_801FFA04_00001DA0
    lwz r0, 0x10(r30)
    mr r4, r26
    cmplw r26, r0
    ble lbl_fn_801FFA04_00001CA4
    mr r4, r0
lbl_fn_801FFA04_00001CA4:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801FFA04_00001D98
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801FFA04_00001D64
    addi r0, r8, 0x7
    mr r7, r27
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801FFA04_00001D64
lbl_fn_801FFA04_00001CD8:
    lwz r8, 0x18(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801FFA04_00001CD8
lbl_fn_801FFA04_00001D64:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801FFA04_00001D98
lbl_fn_801FFA04_00001D7C:
    lwz r3, 0x18(r30)
    addi r5, r5, 0x1
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801FFA04_00001D7C
lbl_fn_801FFA04_00001D98:
    lwz r3, 0x18(r30)
    bl fn_80084C24
lbl_fn_801FFA04_00001DA0:
    stw r27, 0x18(r30)
    stw r26, 0x14(r30)
lbl_fn_801FFA04_00001DA8:
    lwz r0, 0x10(r30)
    addi r25, r25, 0x10
    lwz r3, 0x18(r30)
    addi r24, r24, 0x1
    slwi r0, r0, 2
    stwx r28, r3, r0
    lwz r3, 0x10(r30)
    addi r0, r3, 0x1
    stw r0, 0x10(r30)
lbl_fn_801FFA04_00001DCC:
    lwz r0, 0x88(r30)
    cmplw r24, r0
    blt lbl_fn_801FFA04_00001AE0
    li r25, 0x0
    li r24, 0x0
    b lbl_fn_801FFA04_00001E40
lbl_fn_801FFA04_00001DE4:
    lwz r3, 0xc(r30)
    lwzx r26, r3, r24
    lhz r0, 0x8(r26)
    cmpwi r0, 0x5
    bne lbl_fn_801FFA04_00001E38
    li r27, 0x0
    li r23, 0x0
    b lbl_fn_801FFA04_00001E2C
lbl_fn_801FFA04_00001E04:
    lwz r4, 0x130(r26)
    mr r3, r30
    lwzx r4, r4, r23
    bl fn_801EFA38
    lwz r5, 0x130(r26)
    mr r4, r26
    stwx r3, r5, r23
    bl fn_801ED910
    addi r23, r23, 0x4
    addi r27, r27, 0x1
lbl_fn_801FFA04_00001E2C:
    lwz r0, 0x12c(r26)
    cmplw r27, r0
    blt lbl_fn_801FFA04_00001E04
lbl_fn_801FFA04_00001E38:
    addi r25, r25, 0x1
    addi r24, r24, 0x4
lbl_fn_801FFA04_00001E40:
    lwz r0, 0x4(r30)
    cmplw r25, r0
    blt lbl_fn_801FFA04_00001DE4
    cmpwi r31, 0x0
    beq lbl_fn_801FFA04_00001F8C
    li r24, 0x0
    li r27, 0x0
    b lbl_fn_801FFA04_00001F80
lbl_fn_801FFA04_00001E60:
    lwz r3, 0xc(r30)
    lwzx r29, r3, r27
    lhz r0, 0x8(r29)
    cmpwi r0, 0x1
    bne lbl_fn_801FFA04_00001F78
    li r25, 0x0
    li r26, 0x0
    b lbl_fn_801FFA04_00001F6C
lbl_fn_801FFA04_00001E80:
    lwz r0, 0x138(r29)
    add r4, r0, r26
    lwzu r0, 0x4(r4)
    srwi. r0, r0, 31
    bne lbl_fn_801FFA04_00001EA0
    lbz r0, 0x0(r4)
    clrlwi r0, r0, 25
    b lbl_fn_801FFA04_00001EA4
lbl_fn_801FFA04_00001EA0:
    lwz r0, 0x4(r4)
lbl_fn_801FFA04_00001EA4:
    cmpwi r0, 0x0
    beq lbl_fn_801FFA04_00001F64
    lwz r0, 0x0(r4)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi. r6, r0, 5
    beq lbl_fn_801FFA04_00001EC8
    addi r3, r4, 0x2
    b lbl_fn_801FFA04_00001ECC
lbl_fn_801FFA04_00001EC8:
    lwz r3, 0x8(r4)
lbl_fn_801FFA04_00001ECC:
    lhz r0, 0x0(r3)
    cmplwi r0, 0xffff
    bne lbl_fn_801FFA04_00001F64
    lwz r0, 0x90(r1)
    cmpwi r0, 0x581
    blt lbl_fn_801FFA04_00001F44
    cmpwi r6, 0x0
    beq lbl_fn_801FFA04_00001EF4
    addi r3, r4, 0x2
    b lbl_fn_801FFA04_00001EF8
lbl_fn_801FFA04_00001EF4:
    lwz r3, 0x8(r4)
lbl_fn_801FFA04_00001EF8:
    lhz r0, 0x2(r3)
    cmpwi r6, 0x0
    slwi r5, r0, 20
    beq lbl_fn_801FFA04_00001F10
    addi r3, r4, 0x2
    b lbl_fn_801FFA04_00001F14
lbl_fn_801FFA04_00001F10:
    lwz r3, 0x8(r4)
lbl_fn_801FFA04_00001F14:
    lhz r0, 0x4(r3)
    cmpwi r6, 0x0
    clrlslwi r0, r0, 20, 8
    add r5, r5, r0
    beq lbl_fn_801FFA04_00001F30
    addi r3, r4, 0x2
    b lbl_fn_801FFA04_00001F34
lbl_fn_801FFA04_00001F30:
    lwz r3, 0x8(r4)
lbl_fn_801FFA04_00001F34:
    lhz r0, 0x6(r3)
    clrlwi r0, r0, 24
    add r5, r5, r0
    b lbl_fn_801FFA04_00001F5C
lbl_fn_801FFA04_00001F44:
    cmpwi r6, 0x0
    beq lbl_fn_801FFA04_00001F54
    addi r3, r4, 0x2
    b lbl_fn_801FFA04_00001F58
lbl_fn_801FFA04_00001F54:
    lwz r3, 0x8(r4)
lbl_fn_801FFA04_00001F58:
    lhz r5, 0x2(r3)
lbl_fn_801FFA04_00001F5C:
    mr r3, r31
    bl fn_801F3E20
lbl_fn_801FFA04_00001F64:
    addi r26, r26, 0x10
    addi r25, r25, 0x1
lbl_fn_801FFA04_00001F6C:
    lwz r0, 0x13c(r29)
    cmpw r25, r0
    blt lbl_fn_801FFA04_00001E80
lbl_fn_801FFA04_00001F78:
    addi r24, r24, 0x1
    addi r27, r27, 0x4
lbl_fn_801FFA04_00001F80:
    lwz r0, 0x4(r30)
    cmplw r24, r0
    blt lbl_fn_801FFA04_00001E60
lbl_fn_801FFA04_00001F8C:
    addic. r0, r1, 0x7c
    beq lbl_fn_801FFA04_00001FB8
    beq lbl_fn_801FFA04_00001FB8
    beq lbl_fn_801FFA04_00001FB8
    lwz r3, 0x7c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_801FFA04_00001FB8
    lwz r0, 0x80(r1)
    subf r0, r0, r0
    stw r0, 0x80(r1)
    bl dtor_80084684
lbl_fn_801FFA04_00001FB8:
    addi r11, r1, 0x300
    li r3, 0x1
    bl _restgpr_23
    lwz r0, 0x304(r1)
    mtlr r0
    addi r1, r1, 0x300
    blr
}
