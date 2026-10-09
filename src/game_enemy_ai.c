#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_80019E88(void);
extern void fn_8004ECC0(void);
extern void fn_8012539C(void);
extern void fn_801255C8(void);
extern void fn_8016EB48(void);
extern void fn_80179D44(void);
extern void fn_803C11A4(void);
extern void fn_803C1338(void);
extern void fn_803C1560(void);
extern void fn_803CD958(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F99B0(void);

/* External data declarations */
extern u8 jumptable_8077A698[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE68;
extern u32 lbl_8087EE98;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F540;
extern u32 lbl_80881858;
extern u32 lbl_8088185C;
extern u32 lbl_80881860;
extern u32 lbl_80881864;
extern u32 lbl_8088186C;
extern u32 lbl_80881874;
extern u32 lbl_80881898;
extern u32 lbl_8088189C;
extern u32 lbl_808818A0;
extern u32 lbl_808818A4;

/* Function declarations */
void fn_801279E8(void);
void fn_80127D8C(void);
void fn_80127EF4(void);
void fn_80128090(void);
void fn_80128508(void);
void fn_801286F0(void);
void fn_80128818(void);
void fn_80128930(void);
void fn_80128A30(void);
void fn_80128B20(void);
void fn_80128C08(void);
void fn_80128CF8(void);

asm void fn_801279E8(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0x110
    bl _savegpr_26
    lwz r4, 0x40(r3)
    mr r31, r3
    subi r0, r4, 0x1
    cmplwi r0, 0x4
    ble lbl_fn_801279E8_00000338
    cmpwi r4, 0x0
    beq lbl_fn_801279E8_00000044
    cmpwi r4, 0x7
    beq lbl_fn_801279E8_00000338
    cmpwi r4, 0x6
    beq lbl_fn_801279E8_00000344
    b lbl_fn_801279E8_00000388
lbl_fn_801279E8_00000044:
    lwz r0, 0x44(r3)
    cmpwi r0, 0x4
    bne lbl_fn_801279E8_00000094
    lwz r5, 0xa4(r3)
    lwz r4, 0x24(r3)
    addi r3, r1, 0x74
    lfs f0, 0x530(r5)
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r5)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r5)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x78(r1)
    stfs f0, 0x74(r1)
    stfs f6, 0x7c(r1)
    bl fn_805F9940
    b lbl_fn_801279E8_0000038C
lbl_fn_801279E8_00000094:
    cmpwi r0, 0x5
    bne lbl_fn_801279E8_000000DC
    lwz r4, 0xa4(r3)
    lfs f3, 0x38(r3)
    lfs f0, 0x530(r4)
    lfs f5, 0x34(r3)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r4)
    lfs f3, 0x30(r3)
    addi r3, r1, 0x68
    lfs f0, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    stfs f6, 0x70(r1)
    bl fn_805F9940
    b lbl_fn_801279E8_0000038C
lbl_fn_801279E8_000000DC:
    cmpwi r0, 0x7
    bne lbl_fn_801279E8_000001D4
    lwz r6, 0x24(r3)
    addi r5, r1, 0x8c
    lfs f3, lbl_80881858
    addi r3, r1, 0x98
    psq_l f1, 0x528(r6), 0, 0
    li r4, 0x79
    lfs f2, 0x530(r6)
    lfs f0, lbl_8088185C
    stfs f3, 0x80(r1)
    stfs f3, 0x84(r1)
    stfs f0, 0x88(r1)
    lfs f0, 0x538(r6)
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f0
    stfs f2, 0x94(r1)
    bl fn_805F8E70
    addi r4, r1, 0x80
    addi r3, r1, 0x98
    mr r5, r4
    bl fn_805F93C0
    lfs f1, 0x9c(r31)
    addi r3, r1, 0xc8
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x80
    addi r3, r1, 0xc8
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x88(r1)
    addi r3, r1, 0x50
    lfs f4, lbl_80881860
    lfs f3, 0x84(r1)
    lfs f0, 0x80(r1)
    fmuls f8, f5, f4
    fmuls f9, f3, f4
    lfs f3, 0x90(r1)
    fmuls f10, f0, f4
    lfs f0, 0x8c(r1)
    lfs f4, 0x94(r1)
    fadds f6, f3, f9
    lwz r4, 0xa4(r31)
    fadds f7, f0, f10
    fadds f5, f4, f8
    stfs f10, 0x5c(r1)
    lfs f0, 0x528(r4)
    lfs f3, 0x52c(r4)
    lfs f4, 0x530(r4)
    fsubs f0, f7, f0
    fsubs f11, f6, f3
    stfs f9, 0x60(r1)
    fsubs f3, f5, f4
    stfs f8, 0x64(r1)
    stfs f7, 0x8c(r1)
    stfs f6, 0x90(r1)
    stfs f5, 0x94(r1)
    stfs f0, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f3, 0x58(r1)
    bl fn_805F9940
    b lbl_fn_801279E8_0000038C
lbl_fn_801279E8_000001D4:
    lwz r4, lbl_8087F430
    addi r30, r1, 0x38
    lwz r29, 0x8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_801279E8_000001F0
    lwz r26, 0x10d8(r4)
    b lbl_fn_801279E8_00000208
lbl_fn_801279E8_000001F0:
    lwz r4, lbl_8087F540
    cmpwi r4, 0x0
    beq lbl_fn_801279E8_00000204
    lwz r26, 0x1a6c(r4)
    b lbl_fn_801279E8_00000208
lbl_fn_801279E8_00000204:
    li r26, 0x0
lbl_fn_801279E8_00000208:
    lwz r4, 0x48(r3)
    rlwinm r0, r4, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801279E8_0000023C
    subi r0, r29, 0x1
    lwz r3, 0x9c(r26)
    mulli r0, r0, 0x30
    add r3, r3, r0
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r30), 0, 0
    b lbl_fn_801279E8_000002F8
lbl_fn_801279E8_0000023C:
    rlwinm r0, r4, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_801279E8_000002E8
    lfs f3, lbl_80881858
    addi r4, r1, 0x8
    lfs f0, lbl_8088185C
    addi r5, r1, 0x14
    stfs f3, 0x8(r1)
    addi r3, r3, 0x58
    stfs f0, 0xc(r1)
    stfs f3, 0x10(r1)
    bl fn_805F99B0
    addi r3, r1, 0x14
    bl fn_805F9920
    lfs f0, lbl_80881858
    fcmpu cr0, f0, f1
    bne lbl_fn_801279E8_0000029C
    addi r3, r1, 0x8
    lfs f2, 0x10(r1)
    addi r4, r1, 0x14
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    b lbl_fn_801279E8_000002D0
lbl_fn_801279E8_0000029C:
    addi r28, r1, 0x14
    addi r27, r1, 0x20
    psq_l f1, 0x0(r28), 0, 0
    mr r3, r27
    lfs f2, 0x1c(r1)
    mr r4, r27
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x28(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x1c(r1)
lbl_fn_801279E8_000002D0:
    mr r3, r30
    mr r4, r26
    mr r5, r29
    addi r6, r1, 0x14
    bl fn_803C1338
    b lbl_fn_801279E8_000002F8
lbl_fn_801279E8_000002E8:
    mr r3, r30
    mr r4, r26
    mr r5, r29
    bl fn_803C11A4
lbl_fn_801279E8_000002F8:
    lwz r4, 0xa4(r31)
    addi r3, r1, 0x44
    lfs f3, 0x8(r30)
    lfs f0, 0x530(r4)
    lfs f5, 0x4(r30)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r4)
    lfs f0, 0x528(r4)
    lfs f3, 0x0(r30)
    fsubs f4, f5, f4
    stfs f6, 0x4c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x48(r1)
    stfs f0, 0x44(r1)
    bl fn_805F9940
    b lbl_fn_801279E8_0000038C
lbl_fn_801279E8_00000338:
    addi r3, r3, 0x58
    bl fn_805F9940
    b lbl_fn_801279E8_0000038C
lbl_fn_801279E8_00000344:
    lwz r5, 0xa4(r3)
    lwz r4, 0x24(r3)
    addi r3, r1, 0x2c
    lfs f0, 0x530(r5)
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r5)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r5)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x30(r1)
    stfs f0, 0x2c(r1)
    stfs f6, 0x34(r1)
    bl fn_805F9940
    b lbl_fn_801279E8_0000038C
lbl_fn_801279E8_00000388:
    lfs f1, lbl_80881864
lbl_fn_801279E8_0000038C:
    addi r11, r1, 0x110
    bl _restgpr_26
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80127D8C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, lbl_807C7030@ha
    li r8, 0x0
    stw r0, 0x14(r1)
    addi r7, r7, lbl_807C7030@l
    li r9, 0x0
    li r10, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r11, 0xa4(r3)
    psq_l f1, 0x528(r11), 0, 0
    lfs f2, 0x530(r11)
    stfs f2, 0x54(r3)
    psq_st f1, 0x4c(r3), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    lfs f2, 0x8(r7)
    stfs f2, 0x60(r3)
    psq_st f1, 0x58(r3), 0, 0
    lwz r3, 0x38(r11)
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80127D8C_00000410
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    beq lbl_fn_80127D8C_00000410
    li r10, 0x1
lbl_fn_80127D8C_00000410:
    cmpwi r10, 0x0
    beq lbl_fn_80127D8C_0000042C
    lwz r0, 0x7e0(r11)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80127D8C_0000042C
    li r9, 0x1
lbl_fn_80127D8C_0000042C:
    cmpwi r9, 0x0
    beq lbl_fn_80127D8C_00000460
    lwz r0, 0x55c(r11)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80127D8C_00000454
    lwz r0, 0x560(r11)
    cmpwi r0, 0x1c
    bne lbl_fn_80127D8C_00000454
    li r3, 0x1
lbl_fn_80127D8C_00000454:
    cmpwi r3, 0x0
    bne lbl_fn_80127D8C_00000460
    li r8, 0x1
lbl_fn_80127D8C_00000460:
    cmpwi r8, 0x0
    beq lbl_fn_80127D8C_00000470
    mr r3, r11
    bl fn_8016EB48
lbl_fn_80127D8C_00000470:
    li r0, 0x1
    stw r0, 0x2c(r31)
    lwz r3, 0xa4(r31)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    bne lbl_fn_80127D8C_000004F8
    lwz r0, 0x44(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80127D8C_000004F8
    lwz r4, 0xc(r31)
    cmpwi r4, 0x0
    ble lbl_fn_80127D8C_000004F8
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80127D8C_000004B4
    lwz r3, 0x10d8(r3)
    b lbl_fn_80127D8C_000004CC
lbl_fn_80127D8C_000004B4:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80127D8C_000004C8
    lwz r3, 0x1a6c(r3)
    b lbl_fn_80127D8C_000004CC
lbl_fn_80127D8C_000004C8:
    li r3, 0x0
lbl_fn_80127D8C_000004CC:
    cmpwi r3, 0x0
    beq lbl_fn_80127D8C_000004F8
    subi r0, r4, 0x1
    lwz r3, 0xb0(r3)
    slwi r0, r0, 6
    add r3, r3, r0
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80127D8C_000004F8
    li r0, 0x0
    stw r0, 0x3c(r3)
lbl_fn_80127D8C_000004F8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80127EF4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x48(r3)
    clrlwi r5, r0, 31
    subfic r4, r5, 0x1
    subi r0, r5, 0x1
    or r0, r4, r0
    srwi. r0, r0, 31
    beq lbl_fn_80127EF4_00000690
    lwz r8, 0xa4(r3)
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    li r5, 0x0
    psq_l f1, 0x528(r8), 0, 0
    li r6, 0x0
    lfs f2, 0x530(r8)
    li r7, 0x0
    stfs f2, 0x54(r3)
    psq_st f1, 0x4c(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x60(r3)
    psq_st f1, 0x58(r3), 0, 0
    lwz r3, 0x38(r8)
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80127EF4_00000594
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    beq lbl_fn_80127EF4_00000594
    li r7, 0x1
lbl_fn_80127EF4_00000594:
    cmpwi r7, 0x0
    beq lbl_fn_80127EF4_000005B0
    lwz r0, 0x7e0(r8)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80127EF4_000005B0
    li r6, 0x1
lbl_fn_80127EF4_000005B0:
    cmpwi r6, 0x0
    beq lbl_fn_80127EF4_000005E4
    lwz r0, 0x55c(r8)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80127EF4_000005D8
    lwz r0, 0x560(r8)
    cmpwi r0, 0x1c
    bne lbl_fn_80127EF4_000005D8
    li r3, 0x1
lbl_fn_80127EF4_000005D8:
    cmpwi r3, 0x0
    bne lbl_fn_80127EF4_000005E4
    li r5, 0x1
lbl_fn_80127EF4_000005E4:
    cmpwi r5, 0x0
    beq lbl_fn_80127EF4_00000600
    mr r3, r8
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
lbl_fn_80127EF4_00000600:
    li r0, 0x1
    stw r0, 0x2c(r31)
    lwz r3, 0xa4(r31)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    bne lbl_fn_80127EF4_00000688
    lwz r0, 0x44(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80127EF4_00000688
    lwz r4, 0xc(r31)
    cmpwi r4, 0x0
    ble lbl_fn_80127EF4_00000688
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80127EF4_00000644
    lwz r3, 0x10d8(r3)
    b lbl_fn_80127EF4_0000065C
lbl_fn_80127EF4_00000644:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80127EF4_00000658
    lwz r3, 0x1a6c(r3)
    b lbl_fn_80127EF4_0000065C
lbl_fn_80127EF4_00000658:
    li r3, 0x0
lbl_fn_80127EF4_0000065C:
    cmpwi r3, 0x0
    beq lbl_fn_80127EF4_00000688
    subi r0, r4, 0x1
    lwz r3, 0xb0(r3)
    slwi r0, r0, 6
    add r3, r3, r0
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80127EF4_00000688
    li r0, 0x0
    stw r0, 0x3c(r3)
lbl_fn_80127EF4_00000688:
    li r3, 0x1
    b lbl_fn_80127EF4_00000694
lbl_fn_80127EF4_00000690:
    li r3, 0x0
lbl_fn_80127EF4_00000694:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80128090(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x20
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    bl _savegpr_26
    lwz r0, 0x44(r3)
    mr r31, r3
    cmplwi r0, 0x7
    bgt lbl_fn_80128090_00000AF8
    lis r4, jumptable_8077A698@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_8077A698@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lwz r5, 0xa4(r3)
    lwz r4, 0x8(r3)
    lwz r6, 0x48(r3)
    addi r5, r5, 0x528
    bl fn_80128508
    b lbl_fn_80128090_00000AF8
    lwz r5, 0xa4(r3)
    lwz r4, 0xc(r3)
    lwz r6, 0x48(r3)
    addi r5, r5, 0x528
    bl fn_801286F0
    b lbl_fn_80128090_00000AF8
    b lbl_fn_80128090_00000B00
    lwz r5, lbl_8087F430
    lwz r4, 0xa4(r3)
    cmpwi r5, 0x0
    lwz r29, 0x48(r3)
    lwz r30, 0x20(r3)
    addi r26, r4, 0x528
    beq lbl_fn_80128090_00000744
    lwz r27, 0x10d8(r5)
    b lbl_fn_80128090_0000075C
lbl_fn_80128090_00000744:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80128090_00000758
    lwz r27, 0x1a6c(r3)
    b lbl_fn_80128090_0000075C
lbl_fn_80128090_00000758:
    li r27, 0x0
lbl_fn_80128090_0000075C:
    cmpwi r27, 0x0
    beq lbl_fn_80128090_00000AF8
    lwz r0, 0x78(r27)
    li r4, 0x0
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80128090_000007A4
lbl_fn_80128090_0000077C:
    lwz r3, 0x7c(r27)
    lwzx r0, r3, r5
    cmpw r30, r0
    bne lbl_fn_80128090_00000798
    mulli r0, r4, 0x28
    add r28, r3, r0
    b lbl_fn_80128090_000007A8
lbl_fn_80128090_00000798:
    addi r5, r5, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_80128090_0000077C
lbl_fn_80128090_000007A4:
    li r28, 0x0
lbl_fn_80128090_000007A8:
    cmpwi r28, 0x0
    beq lbl_fn_80128090_00000AF8
    mr r3, r31
    bl fn_8012539C
    lwz r3, 0xa4(r31)
    bl fn_80179D44
    lwz r7, 0xa0(r31)
    mr r5, r3
    lfs f1, lbl_80881864
    mr r3, r27
    addi r4, r28, 0x4
    li r6, 0x0
    li r8, 0x1
    bl fn_803C1560
    mr r4, r3
    mr r3, r31
    mr r5, r26
    mr r6, r29
    bl fn_80128508
    lfs f0, lbl_80881898
    li r0, 0x3
    stw r0, 0x40(r31)
    stw r29, 0x48(r31)
    stw r30, 0x20(r31)
    stfs f0, 0x28(r31)
    b lbl_fn_80128090_00000AF8
    lwz r5, lbl_8087F430
    lwz r4, 0xa4(r3)
    cmpwi r5, 0x0
    lwz r28, 0x48(r3)
    lwz r27, 0x24(r3)
    addi r26, r4, 0x528
    beq lbl_fn_80128090_00000834
    lwz r29, 0x10d8(r5)
    b lbl_fn_80128090_0000084C
lbl_fn_80128090_00000834:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80128090_00000848
    lwz r29, 0x1a6c(r3)
    b lbl_fn_80128090_0000084C
lbl_fn_80128090_00000848:
    li r29, 0x0
lbl_fn_80128090_0000084C:
    cmpwi r29, 0x0
    beq lbl_fn_80128090_00000AF8
    cmpwi r27, 0x0
    beq lbl_fn_80128090_00000AF8
    mr r3, r31
    bl fn_8012539C
    lwz r3, 0xa4(r31)
    bl fn_80179D44
    lwz r7, 0xa0(r31)
    mr r5, r3
    lfs f1, lbl_80881864
    mr r3, r29
    addi r4, r27, 0x528
    li r6, 0x0
    li r8, 0x1
    bl fn_803C1560
    mr r4, r3
    mr r3, r31
    mr r5, r26
    mr r6, r28
    bl fn_80128508
    li r0, 0x4
    stw r0, 0x40(r31)
    lwz r3, 0xa4(r31)
    stw r28, 0x48(r31)
    lfs f0, lbl_8088189C
    stw r27, 0x24(r31)
    lfs f5, lbl_8088186C
    lfs f3, 0x5b0(r3)
    lfs f4, 0x5b0(r27)
    fadds f3, f3, f4
    fadds f0, f0, f3
    fcmpo cr0, f5, f0
    ble lbl_fn_80128090_000008D8
    b lbl_fn_80128090_000008DC
lbl_fn_80128090_000008D8:
    fmr f5, f0
lbl_fn_80128090_000008DC:
    stfs f5, 0x28(r31)
    b lbl_fn_80128090_00000AF8
    lwz r5, lbl_8087F430
    addi r27, r3, 0x30
    lwz r4, 0xa4(r3)
    cmpwi r5, 0x0
    lwz r28, 0x48(r3)
    lfs f31, 0x3c(r3)
    addi r26, r4, 0x528
    beq lbl_fn_80128090_0000090C
    lwz r29, 0x10d8(r5)
    b lbl_fn_80128090_00000924
lbl_fn_80128090_0000090C:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80128090_00000920
    lwz r29, 0x1a6c(r3)
    b lbl_fn_80128090_00000924
lbl_fn_80128090_00000920:
    li r29, 0x0
lbl_fn_80128090_00000924:
    cmpwi r29, 0x0
    beq lbl_fn_80128090_00000AF8
    mr r3, r31
    bl fn_8012539C
    lwz r3, 0xa4(r31)
    bl fn_80179D44
    lwz r7, 0xa0(r31)
    mr r5, r3
    lfs f1, lbl_80881864
    mr r3, r29
    mr r4, r27
    li r6, 0x0
    li r8, 0x1
    bl fn_803C1560
    mr r4, r3
    mr r3, r31
    mr r5, r26
    mr r6, r28
    bl fn_80128508
    psq_l f1, 0x0(r27), 0, 0
    li r0, 0x5
    lfs f2, 0x8(r27)
    lfs f0, lbl_80881898
    stw r0, 0x40(r31)
    stw r28, 0x48(r31)
    psq_st f1, 0x30(r31), 0, 0
    stfs f2, 0x38(r31)
    stfs f31, 0x3c(r31)
    stfs f0, 0x28(r31)
    b lbl_fn_80128090_00000AF8
    lwz r5, lbl_8087F430
    lwz r4, 0xa4(r3)
    cmpwi r5, 0x0
    lwz r28, 0x48(r3)
    lfs f31, 0x28(r3)
    addi r26, r4, 0x528
    lwz r27, 0x24(r3)
    beq lbl_fn_80128090_000009C4
    lwz r29, 0x10d8(r5)
    b lbl_fn_80128090_000009DC
lbl_fn_80128090_000009C4:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80128090_000009D8
    lwz r29, 0x1a6c(r3)
    b lbl_fn_80128090_000009DC
lbl_fn_80128090_000009D8:
    li r29, 0x0
lbl_fn_80128090_000009DC:
    cmpwi r29, 0x0
    beq lbl_fn_80128090_00000AF8
    cmpwi r27, 0x0
    beq lbl_fn_80128090_00000AF8
    mr r3, r31
    bl fn_8012539C
    lwz r3, 0xa4(r31)
    bl fn_80179D44
    lwz r7, 0xa0(r31)
    mr r5, r3
    lfs f1, lbl_80881864
    mr r3, r29
    addi r4, r27, 0x528
    li r6, 0x0
    li r8, 0x1
    bl fn_803C1560
    mr r4, r3
    mr r3, r31
    mr r5, r26
    mr r6, r28
    bl fn_80128508
    li r0, 0x6
    stw r0, 0x40(r31)
    stw r28, 0x48(r31)
    stw r27, 0x24(r31)
    stfs f31, 0x28(r31)
    b lbl_fn_80128090_00000AF8
    lwz r5, lbl_8087F430
    lwz r4, 0xa4(r3)
    cmpwi r5, 0x0
    lwz r28, 0x48(r3)
    lfs f31, 0x9c(r3)
    addi r26, r4, 0x528
    lwz r27, 0x24(r3)
    beq lbl_fn_80128090_00000A70
    lwz r29, 0x10d8(r5)
    b lbl_fn_80128090_00000A88
lbl_fn_80128090_00000A70:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80128090_00000A84
    lwz r29, 0x1a6c(r3)
    b lbl_fn_80128090_00000A88
lbl_fn_80128090_00000A84:
    li r29, 0x0
lbl_fn_80128090_00000A88:
    cmpwi r29, 0x0
    beq lbl_fn_80128090_00000AF8
    cmpwi r27, 0x0
    beq lbl_fn_80128090_00000AF8
    mr r3, r31
    bl fn_8012539C
    lwz r3, 0xa4(r31)
    bl fn_80179D44
    lwz r7, 0xa0(r31)
    mr r5, r3
    lfs f1, lbl_80881864
    mr r3, r29
    addi r4, r27, 0x528
    li r6, 0x0
    li r8, 0x1
    bl fn_803C1560
    mr r4, r3
    mr r3, r31
    mr r5, r26
    mr r6, r28
    bl fn_80128508
    lfs f0, lbl_8088186C
    li r0, 0x7
    stw r0, 0x40(r31)
    stw r28, 0x48(r31)
    stw r27, 0x24(r31)
    stfs f0, 0x28(r31)
    stfs f31, 0x9c(r31)
lbl_fn_80128090_00000AF8:
    mr r3, r31
    bl fn_801255C8
lbl_fn_80128090_00000B00:
    addi r11, r1, 0x20
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80128508(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    lwz r7, lbl_8087F430
    mr r30, r3
    mr r27, r4
    mr r31, r5
    cmpwi r7, 0x0
    mr r28, r6
    beq lbl_fn_80128508_00000B58
    lwz r29, 0x10d8(r7)
    b lbl_fn_80128508_00000B70
lbl_fn_80128508_00000B58:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80128508_00000B6C
    lwz r29, 0x1a6c(r3)
    b lbl_fn_80128508_00000B70
lbl_fn_80128508_00000B6C:
    li r29, 0x0
lbl_fn_80128508_00000B70:
    cmpwi r29, 0x0
    beq lbl_fn_80128508_00000CF0
    cmpwi r4, 0x0
    ble lbl_fn_80128508_00000CF0
    mr r3, r30
    bl fn_8012539C
    lwz r3, 0xa4(r30)
    bl fn_80179D44
    lwz r7, 0xa0(r30)
    mr r5, r3
    lfs f1, lbl_80881864
    mr r3, r29
    mr r4, r31
    li r6, 0x0
    li r8, 0x1
    bl fn_803C1560
    cmpwi r3, 0x0
    ble lbl_fn_80128508_00000CF0
    li r0, 0x0
    stw r0, 0x40(r30)
    subi r0, r3, 0x1
    subi r4, r27, 0x1
    stw r28, 0x48(r30)
    slwi r0, r0, 3
    stw r27, 0x8(r30)
    stw r3, 0x0(r30)
    lwz r3, 0xa4(r29)
    add r3, r3, r0
    bl fn_803CD958
    clrlwi. r0, r3, 16
    lwz r4, 0x0(r30)
    stw r0, 0x4(r30)
    subi r0, r4, 0x1
    mulli r0, r0, 0x30
    lwz r3, 0x9c(r29)
    add r28, r3, r0
    ble lbl_fn_80128508_00000CF0
    lfs f1, 0xc(r28)
    addi r3, r1, 0x8
    lfs f0, 0x8(r31)
    lfs f3, 0x8(r28)
    fsubs f4, f1, f0
    lfs f2, 0x4(r31)
    lfs f1, 0x4(r28)
    lfs f0, 0x0(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    lfs f0, 0x14(r28)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80128508_00000CF0
    lwz r3, 0x4(r30)
    addi r5, r1, 0x20
    lfs f4, lbl_80881858
    addi r6, r1, 0x14
    subi r0, r3, 0x1
    lfs f3, lbl_80881874
    lfs f2, 0x8(r31)
    mulli r0, r0, 0x30
    lfs f1, 0x4(r31)
    li r4, 0x0
    lfs f0, 0x0(r31)
    fadds f2, f2, f4
    lwz r3, 0x9c(r29)
    fadds f1, f1, f3
    stfs f4, 0x2c(r1)
    fadds f0, f0, f4
    add r10, r3, r0
    stfs f1, 0x24(r1)
    lis r7, 0x8000
    stfs f0, 0x20(r1)
    li r8, 0x0
    lwz r3, lbl_8087EE98
    li r9, 0x0
    stfs f2, 0x28(r1)
    lfs f2, 0xc(r10)
    lfs f1, 0x8(r10)
    lfs f0, 0x4(r10)
    fadds f2, f2, f4
    fadds f1, f1, f3
    stfs f3, 0x30(r1)
    fadds f0, f0, f4
    stfs f4, 0x34(r1)
    stfs f0, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f2, 0x1c(r1)
    bl fn_8004ECC0
    cmpwi r3, 0x0
    beq lbl_fn_80128508_00000CF0
    lwz r0, 0x0(r30)
    stw r0, 0x4(r30)
lbl_fn_80128508_00000CF0:
    addi r11, r1, 0x50
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_801286F0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    lwz r7, lbl_8087F430
    mr r25, r3
    mr r26, r4
    mr r27, r5
    cmpwi r7, 0x0
    mr r28, r6
    beq lbl_fn_801286F0_00000D40
    lwz r31, 0x10d8(r7)
    b lbl_fn_801286F0_00000D58
lbl_fn_801286F0_00000D40:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_801286F0_00000D54
    lwz r31, 0x1a6c(r3)
    b lbl_fn_801286F0_00000D58
lbl_fn_801286F0_00000D54:
    li r31, 0x0
lbl_fn_801286F0_00000D58:
    cmpwi r31, 0x0
    beq lbl_fn_801286F0_00000E18
    cmpwi r4, 0x0
    ble lbl_fn_801286F0_00000E18
    mr r3, r25
    bl fn_8012539C
    lwz r3, lbl_8087EE68
    mr r6, r26
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    li r7, 0x0
    bl fn_80019E88
    cmpwi r3, 0x0
    beq lbl_fn_801286F0_00000E0C
    subi r3, r26, 0x1
    lwz r0, 0xb0(r31)
    slwi r29, r3, 6
    lwz r3, 0xa4(r25)
    add r30, r0, r29
    bl fn_80179D44
    lwz r7, 0xa0(r25)
    mr r5, r3
    lfs f1, lbl_80881864
    mr r3, r31
    addi r4, r30, 0x4
    li r6, 0x0
    li r8, 0x1
    bl fn_803C1560
    mr r4, r3
    mr r3, r25
    mr r5, r27
    mr r6, r28
    bl fn_80128508
    lwz r4, 0xb0(r31)
    li r0, 0x1
    addi r3, r1, 0xc
    add r4, r4, r29
    stw r0, 0x3c(r4)
    stw r26, 0xc(r25)
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x14(r1)
    stfs f2, 0x18(r25)
    psq_st f1, 0x10(r25), 0, 0
    lwz r0, 0x8(r1)
    stw r0, 0x1c(r25)
lbl_fn_801286F0_00000E0C:
    li r0, 0x1
    stw r0, 0x40(r25)
    stw r28, 0x48(r25)
lbl_fn_801286F0_00000E18:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80128818(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r7, lbl_8087F430
    mr r26, r3
    mr r27, r4
    mr r28, r5
    cmpwi r7, 0x0
    mr r29, r6
    beq lbl_fn_80128818_00000E68
    lwz r31, 0x10d8(r7)
    b lbl_fn_80128818_00000E80
lbl_fn_80128818_00000E68:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80128818_00000E7C
    lwz r31, 0x1a6c(r3)
    b lbl_fn_80128818_00000E80
lbl_fn_80128818_00000E7C:
    li r31, 0x0
lbl_fn_80128818_00000E80:
    cmpwi r31, 0x0
    beq lbl_fn_80128818_00000F30
    lwz r0, 0x78(r31)
    li r5, 0x0
    li r6, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80128818_00000EC8
lbl_fn_80128818_00000EA0:
    lwz r3, 0x7c(r31)
    lwzx r0, r3, r6
    cmpw r4, r0
    bne lbl_fn_80128818_00000EBC
    mulli r0, r5, 0x28
    add r30, r3, r0
    b lbl_fn_80128818_00000ECC
lbl_fn_80128818_00000EBC:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_80128818_00000EA0
lbl_fn_80128818_00000EC8:
    li r30, 0x0
lbl_fn_80128818_00000ECC:
    cmpwi r30, 0x0
    beq lbl_fn_80128818_00000F30
    mr r3, r26
    bl fn_8012539C
    lwz r3, 0xa4(r26)
    bl fn_80179D44
    lwz r7, 0xa0(r26)
    mr r5, r3
    lfs f1, lbl_80881864
    mr r3, r31
    addi r4, r30, 0x4
    li r6, 0x0
    li r8, 0x1
    bl fn_803C1560
    mr r4, r3
    mr r3, r26
    mr r5, r28
    mr r6, r29
    bl fn_80128508
    lfs f0, lbl_80881898
    li r0, 0x3
    stw r0, 0x40(r26)
    stw r29, 0x48(r26)
    stw r27, 0x20(r26)
    stfs f0, 0x28(r26)
lbl_fn_80128818_00000F30:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80128930(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r7, lbl_8087F430
    mr r27, r3
    mr r28, r4
    mr r29, r5
    cmpwi r7, 0x0
    mr r30, r6
    beq lbl_fn_80128930_00000F80
    lwz r31, 0x10d8(r7)
    b lbl_fn_80128930_00000F98
lbl_fn_80128930_00000F80:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80128930_00000F94
    lwz r31, 0x1a6c(r3)
    b lbl_fn_80128930_00000F98
lbl_fn_80128930_00000F94:
    li r31, 0x0
lbl_fn_80128930_00000F98:
    cmpwi r31, 0x0
    beq lbl_fn_80128930_00001030
    cmpwi r4, 0x0
    bne lbl_fn_80128930_00000FAC
    b lbl_fn_80128930_00001030
lbl_fn_80128930_00000FAC:
    mr r3, r27
    bl fn_8012539C
    lwz r3, 0xa4(r27)
    bl fn_80179D44
    lwz r7, 0xa0(r27)
    mr r5, r3
    lfs f1, lbl_80881864
    mr r3, r31
    addi r4, r28, 0x528
    li r6, 0x0
    li r8, 0x1
    bl fn_803C1560
    mr r4, r3
    mr r3, r27
    mr r5, r29
    mr r6, r30
    bl fn_80128508
    li r0, 0x4
    stw r0, 0x40(r27)
    lwz r3, 0xa4(r27)
    stw r30, 0x48(r27)
    lfs f0, lbl_8088189C
    stw r28, 0x24(r27)
    lfs f3, lbl_8088186C
    lfs f1, 0x5b0(r3)
    lfs f2, 0x5b0(r28)
    fadds f1, f1, f2
    fadds f0, f0, f1
    fcmpo cr0, f3, f0
    ble lbl_fn_80128930_00001028
    b lbl_fn_80128930_0000102C
lbl_fn_80128930_00001028:
    fmr f3, f0
lbl_fn_80128930_0000102C:
    stfs f3, 0x28(r27)
lbl_fn_80128930_00001030:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80128A30(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x20
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    bl _savegpr_27
    lwz r7, lbl_8087F430
    fmr f31, f1
    mr r27, r3
    mr r28, r4
    cmpwi r7, 0x0
    mr r29, r5
    mr r30, r6
    beq lbl_fn_80128A30_0000108C
    lwz r31, 0x10d8(r7)
    b lbl_fn_80128A30_000010A4
lbl_fn_80128A30_0000108C:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80128A30_000010A0
    lwz r31, 0x1a6c(r3)
    b lbl_fn_80128A30_000010A4
lbl_fn_80128A30_000010A0:
    li r31, 0x0
lbl_fn_80128A30_000010A4:
    cmpwi r31, 0x0
    beq lbl_fn_80128A30_00001118
    mr r3, r27
    bl fn_8012539C
    lwz r3, 0xa4(r27)
    bl fn_80179D44
    lwz r7, 0xa0(r27)
    mr r5, r3
    lfs f1, lbl_80881864
    mr r3, r31
    mr r4, r28
    li r6, 0x0
    li r8, 0x1
    bl fn_803C1560
    mr r4, r3
    mr r3, r27
    mr r5, r29
    mr r6, r30
    bl fn_80128508
    li r0, 0x5
    stw r0, 0x40(r27)
    lfs f0, lbl_80881898
    stw r30, 0x48(r27)
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x8(r28)
    stfs f2, 0x38(r27)
    psq_st f1, 0x30(r27), 0, 0
    stfs f31, 0x3c(r27)
    stfs f0, 0x28(r27)
lbl_fn_80128A30_00001118:
    addi r11, r1, 0x20
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80128B20(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x20
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    bl _savegpr_27
    lwz r7, lbl_8087F430
    fmr f31, f1
    mr r27, r3
    mr r28, r4
    cmpwi r7, 0x0
    mr r29, r5
    mr r30, r6
    beq lbl_fn_80128B20_0000117C
    lwz r31, 0x10d8(r7)
    b lbl_fn_80128B20_00001194
lbl_fn_80128B20_0000117C:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80128B20_00001190
    lwz r31, 0x1a6c(r3)
    b lbl_fn_80128B20_00001194
lbl_fn_80128B20_00001190:
    li r31, 0x0
lbl_fn_80128B20_00001194:
    cmpwi r31, 0x0
    beq lbl_fn_80128B20_00001200
    cmpwi r4, 0x0
    bne lbl_fn_80128B20_000011A8
    b lbl_fn_80128B20_00001200
lbl_fn_80128B20_000011A8:
    mr r3, r27
    bl fn_8012539C
    lwz r3, 0xa4(r27)
    bl fn_80179D44
    lwz r7, 0xa0(r27)
    mr r5, r3
    lfs f1, lbl_80881864
    mr r3, r31
    addi r4, r28, 0x528
    li r6, 0x0
    li r8, 0x1
    bl fn_803C1560
    mr r4, r3
    mr r3, r27
    mr r5, r29
    mr r6, r30
    bl fn_80128508
    li r0, 0x6
    stw r0, 0x40(r27)
    stw r30, 0x48(r27)
    stw r28, 0x24(r27)
    stfs f31, 0x28(r27)
lbl_fn_80128B20_00001200:
    addi r11, r1, 0x20
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80128C08(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x20
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    bl _savegpr_27
    lwz r7, lbl_8087F430
    fmr f31, f1
    mr r27, r3
    mr r28, r4
    cmpwi r7, 0x0
    mr r29, r5
    mr r30, r6
    beq lbl_fn_80128C08_00001264
    lwz r31, 0x10d8(r7)
    b lbl_fn_80128C08_0000127C
lbl_fn_80128C08_00001264:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80128C08_00001278
    lwz r31, 0x1a6c(r3)
    b lbl_fn_80128C08_0000127C
lbl_fn_80128C08_00001278:
    li r31, 0x0
lbl_fn_80128C08_0000127C:
    cmpwi r31, 0x0
    beq lbl_fn_80128C08_000012F0
    cmpwi r4, 0x0
    bne lbl_fn_80128C08_00001290
    b lbl_fn_80128C08_000012F0
lbl_fn_80128C08_00001290:
    mr r3, r27
    bl fn_8012539C
    lwz r3, 0xa4(r27)
    bl fn_80179D44
    lwz r7, 0xa0(r27)
    mr r5, r3
    lfs f1, lbl_80881864
    mr r3, r31
    addi r4, r28, 0x528
    li r6, 0x0
    li r8, 0x1
    bl fn_803C1560
    mr r4, r3
    mr r3, r27
    mr r5, r29
    mr r6, r30
    bl fn_80128508
    lfs f0, lbl_8088186C
    li r0, 0x7
    stw r0, 0x40(r27)
    stw r30, 0x48(r27)
    stw r28, 0x24(r27)
    stfs f0, 0x28(r27)
    stfs f31, 0x9c(r27)
lbl_fn_80128C08_000012F0:
    addi r11, r1, 0x20
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80128CF8(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stw r31, 0xcc(r1)
    mr r31, r3
    lwz r4, lbl_8087F0A8
    lwz r0, 0x60(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80128CF8_0000133C
    li r3, 0x0
    b lbl_fn_80128CF8_00001748
lbl_fn_80128CF8_0000133C:
    lwz r4, 0x48(r3)
    rlwinm r0, r4, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80128CF8_00001358
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80128CF8_00001360
lbl_fn_80128CF8_00001358:
    li r3, 0x0
    b lbl_fn_80128CF8_00001748
lbl_fn_80128CF8_00001360:
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_80128CF8_00001374
    lwz r4, 0x10d8(r4)
    b lbl_fn_80128CF8_0000138C
lbl_fn_80128CF8_00001374:
    lwz r4, lbl_8087F540
    cmpwi r4, 0x0
    beq lbl_fn_80128CF8_00001388
    lwz r4, 0x1a6c(r4)
    b lbl_fn_80128CF8_0000138C
lbl_fn_80128CF8_00001388:
    li r4, 0x0
lbl_fn_80128CF8_0000138C:
    lwz r5, 0xa4(r3)
    lfs f5, lbl_80881858
    lfs f6, 0x5b0(r5)
    lfs f4, 0x530(r5)
    lfs f3, 0x52c(r5)
    lfs f0, 0x528(r5)
    fadds f4, f4, f5
    lwz r0, 0x44(r3)
    fadds f3, f3, f6
    fadds f0, f0, f5
    stfs f5, 0xb0(r1)
    cmpwi r0, 0x1
    stfs f6, 0xb4(r1)
    stfs f5, 0xb8(r1)
    stfs f0, 0xa4(r1)
    stfs f3, 0xa8(r1)
    stfs f4, 0xac(r1)
    beq lbl_fn_80128CF8_000013F8
    cmpwi r0, 0x3
    beq lbl_fn_80128CF8_00001434
    cmpwi r0, 0x4
    beq lbl_fn_80128CF8_000014C4
    cmpwi r0, 0x7
    beq lbl_fn_80128CF8_000014C4
    cmpwi r0, 0x5
    beq lbl_fn_80128CF8_000014E0
    b lbl_fn_80128CF8_0000151C
lbl_fn_80128CF8_000013F8:
    lfs f0, 0x18(r3)
    addi r5, r1, 0x74
    lfs f3, 0x14(r3)
    addi r4, r1, 0x98
    fadds f2, f0, f5
    lfs f0, 0x10(r3)
    fadds f3, f3, f6
    fadds f0, f0, f5
    stfs f2, 0x7c(r1)
    stfs f0, 0x74(r1)
    stfs f3, 0x78(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xa0(r1)
    b lbl_fn_80128CF8_00001524
lbl_fn_80128CF8_00001434:
    lwz r0, 0x78(r4)
    li r6, 0x0
    lwz r5, 0x20(r3)
    li r7, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80128CF8_00001478
lbl_fn_80128CF8_00001450:
    lwz r3, 0x7c(r4)
    lwzx r0, r3, r7
    cmpw r5, r0
    bne lbl_fn_80128CF8_0000146C
    mulli r0, r6, 0x28
    add r3, r3, r0
    b lbl_fn_80128CF8_0000147C
lbl_fn_80128CF8_0000146C:
    addi r7, r7, 0x28
    addi r6, r6, 0x1
    bdnz lbl_fn_80128CF8_00001450
lbl_fn_80128CF8_00001478:
    li r3, 0x0
lbl_fn_80128CF8_0000147C:
    lfs f3, 0xc(r3)
    addi r5, r1, 0x68
    lfs f0, 0xb8(r1)
    addi r4, r1, 0x98
    lfs f5, 0x8(r3)
    fadds f2, f3, f0
    lfs f4, 0xb4(r1)
    lfs f3, 0x4(r3)
    lfs f0, 0xb0(r1)
    fadds f4, f5, f4
    stfs f2, 0x70(r1)
    fadds f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xa0(r1)
    b lbl_fn_80128CF8_00001524
lbl_fn_80128CF8_000014C4:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_80128CF8_000014D8
    li r3, 0x1
    b lbl_fn_80128CF8_00001748
lbl_fn_80128CF8_000014D8:
    li r3, 0x0
    b lbl_fn_80128CF8_00001748
lbl_fn_80128CF8_000014E0:
    lfs f0, 0x38(r3)
    addi r5, r1, 0x5c
    lfs f3, 0x34(r3)
    addi r4, r1, 0x98
    fadds f2, f0, f5
    lfs f0, 0x30(r3)
    fadds f3, f3, f6
    fadds f0, f0, f5
    stfs f2, 0x64(r1)
    stfs f0, 0x5c(r1)
    stfs f3, 0x60(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xa0(r1)
    b lbl_fn_80128CF8_00001524
lbl_fn_80128CF8_0000151C:
    li r3, 0x0
    b lbl_fn_80128CF8_00001748
lbl_fn_80128CF8_00001524:
    lfs f3, 0xa0(r1)
    addi r3, r1, 0x8c
    lfs f0, 0xac(r1)
    lfs f5, 0x9c(r1)
    fsubs f6, f3, f0
    lfs f4, 0xa8(r1)
    lfs f3, 0x98(r1)
    lfs f0, 0xa4(r1)
    fsubs f4, f5, f4
    stfs f6, 0x94(r1)
    fsubs f0, f3, f0
    stfs f4, 0x90(r1)
    stfs f0, 0x8c(r1)
    bl fn_805F9920
    lfs f0, lbl_808818A0
    fcmpo cr0, f1, f0
    bge lbl_fn_80128CF8_00001570
    li r3, 0x1
    b lbl_fn_80128CF8_00001748
lbl_fn_80128CF8_00001570:
    addi r3, r1, 0x8c
    mr r4, r3
    bl fn_805F98D0
    lfs f3, lbl_80881858
    addi r3, r1, 0x8c
    lfs f0, lbl_8088185C
    addi r4, r1, 0x50
    stfs f3, 0x50(r1)
    addi r5, r1, 0x80
    stfs f0, 0x54(r1)
    stfs f3, 0x58(r1)
    bl fn_805F99B0
    addi r3, r1, 0x80
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_808818A4
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80128CF8_00001618
    lfs f3, lbl_80881858
    addi r3, r1, 0x8c
    lfs f0, lbl_80881864
    addi r4, r1, 0x38
    stfs f3, 0x38(r1)
    addi r5, r1, 0x44
    stfs f3, 0x3c(r1)
    stfs f0, 0x40(r1)
    bl fn_805F99B0
    addi r4, r1, 0x44
    lfs f2, 0x4c(r1)
    addi r3, r1, 0x80
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_808818A4
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80128CF8_00001618
    li r3, 0x1
    b lbl_fn_80128CF8_00001748
lbl_fn_80128CF8_00001618:
    addi r3, r1, 0x80
    mr r4, r3
    bl fn_805F98D0
    lwz r3, 0xa4(r31)
    addi r5, r1, 0x2c
    lfs f0, 0x88(r1)
    addi r6, r1, 0x20
    lfs f5, 0x5b0(r3)
    li r4, 0x0
    lfs f4, 0x80(r1)
    lis r7, 0x8000
    fmuls f7, f0, f5
    lfs f3, 0x84(r1)
    lfs f0, 0xa0(r1)
    fmuls f9, f4, f5
    fmuls f8, f3, f5
    lfs f6, 0x9c(r1)
    fadds f10, f0, f7
    lfs f5, 0x98(r1)
    lfs f4, 0xac(r1)
    fadds f6, f6, f8
    lfs f3, 0xa8(r1)
    fadds f5, f5, f9
    lfs f0, 0xa4(r1)
    fadds f4, f4, f7
    fadds f3, f3, f8
    stfs f9, 0x80(r1)
    fadds f0, f0, f9
    lwz r3, lbl_8087EE98
    stfs f8, 0x84(r1)
    li r8, 0x0
    stfs f7, 0x88(r1)
    li r9, 0x0
    stfs f5, 0x20(r1)
    stfs f6, 0x24(r1)
    stfs f10, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f4, 0x34(r1)
    bl fn_8004ECC0
    cmpwi r3, 0x0
    bne lbl_fn_80128CF8_0000173C
    lfs f3, 0xa0(r1)
    addi r5, r1, 0x14
    lfs f4, 0x88(r1)
    addi r6, r1, 0x8
    lfs f0, 0xac(r1)
    li r4, 0x0
    fsubs f7, f3, f4
    lfs f3, 0x9c(r1)
    fsubs f6, f0, f4
    lfs f5, 0x84(r1)
    lfs f0, 0xa8(r1)
    lis r7, 0x8000
    fsubs f8, f3, f5
    lfs f4, 0x98(r1)
    fsubs f5, f0, f5
    lfs f3, 0x80(r1)
    lfs f0, 0xa4(r1)
    li r8, 0x0
    fsubs f4, f4, f3
    stfs f8, 0xc(r1)
    fsubs f0, f0, f3
    lwz r3, lbl_8087EE98
    stfs f4, 0x8(r1)
    li r9, 0x0
    stfs f7, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f5, 0x18(r1)
    stfs f6, 0x1c(r1)
    bl fn_8004ECC0
    cmpwi r3, 0x0
    beq lbl_fn_80128CF8_00001744
lbl_fn_80128CF8_0000173C:
    li r3, 0x0
    b lbl_fn_80128CF8_00001748
lbl_fn_80128CF8_00001744:
    li r3, 0x1
lbl_fn_80128CF8_00001748:
    lwz r0, 0xd4(r1)
    lwz r31, 0xcc(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}
