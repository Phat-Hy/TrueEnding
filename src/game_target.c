#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _savegpr_23(void);
extern void dtor_80084684(void);
extern void fn_8000FAE4(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_800697D8(void);
extern void fn_80069BF4(void);
extern void fn_8006B174(void);
extern void fn_8007FAF0(void);
extern void fn_80081514(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80089D70(void);
extern void fn_8008C850(void);
extern void fn_800DC6B4(void);
extern void fn_80473F18(void);
extern void fn_80473F88(void);
extern void fn_80475DF8(void);
extern void fn_8067E23C(void);
extern void fn_80695720(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80732368[];

/* Small data declarations */
extern u32 lbl_8087D6DC;
extern u32 lbl_8087D6E0;
extern u32 lbl_8087D6E8;
extern u32 lbl_8087D6EC;
extern u32 lbl_8087D80C;
extern u32 lbl_8087D810;
extern u32 lbl_8087EEB8;
extern u32 lbl_80880BF8;
extern u32 lbl_80880C14;

/* Function declarations */
void fn_80092EC8(void);
void fn_80092F1C(void);
void fn_80092F90(void);
void fn_80093014(void);
void fn_8009303C(void);
void fn_80093158(void);
void fn_8009373C(void);
void fn_800937E8(void);
void fn_8009385C(void);
void fn_80093A1C(void);
void fn_80093B88(void);
void fn_80093C20(void);
void fn_80093C8C(void);
void fn_80093D28(void);
void fn_80093D98(void);
void fn_80093E30(void);
void fn_80093E90(void);
void fn_80093EEC(void);
void fn_80093F1C(void);
void fn_80093F58(void);
void fn_80094420(void);
void fn_80094778(void);
void fn_800948F0(void);
void fn_80094958(void);
void fn_80094B6C(void);
void fn_80094BD8(void);
void fn_80094D88(void);
void fn_80094E2C(void);
void fn_80094F14(void);

asm void fn_80092EC8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x20c(r3)
    ori r0, r0, 0x30
    stw r0, 0x20c(r3)
    lwzu r12, 0x1c4(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_80880BF8
    li r0, 0x0
    stfs f0, 0x1d0(r31)
    stw r0, 0x1cc(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80092F1C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f1
    stw r31, 0x14(r1)
    lwz r7, 0x20c(r3)
    extlwi r0, r7, 9, 8
    srawi r5, r0, 24
    mulli r0, r5, 0x18
    addi r6, r5, 0x1
    add r5, r3, r0
    rlwimi r7, r6, 16, 8, 15
    stw r7, 0x20c(r3)
    addi r31, r5, 0x164
    mr r3, r31
    lwz r12, 0x0(r31)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    stfs f31, 0xc(r31)
    li r0, 0x0
    stw r0, 0x8(r31)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80092F90(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    addi r30, r3, 0x17c
    stw r29, 0x14(r1)
    li r29, 0x1
    stw r28, 0x10(r1)
    mr r28, r3
    b lbl_fn_80092F90_0000010C
lbl_fn_80092F90_000000F8:
    mr r3, r30
    bl fn_80473F88
    stw r31, 0x8(r30)
    addi r30, r30, 0x18
    addi r29, r29, 0x1
lbl_fn_80092F90_0000010C:
    lwz r3, 0x20c(r28)
    extlwi r0, r3, 9, 8
    srawi r0, r0, 24
    cmpw r29, r0
    blt lbl_fn_80092F90_000000F8
    li r0, 0x1
    rlwimi r3, r0, 16, 8, 15
    stw r3, 0x20c(r28)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80093014(void)
{
    nofralloc
    lwz r5, 0x20c(r3)
    rlwimi r5, r4, 1, 30, 30
    stw r5, 0x20c(r3)
    slwi r0, r5, 30
    srawi. r0, r0, 31
    beqlr
    li r0, 0x5
    rlwimi r5, r0, 24, 0, 7
    stw r5, 0x20c(r3)
    blr
}

asm void fn_8009303C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r0, 0x20c(r3)
    slwi r0, r0, 30
    srawi r4, r0, 31
    neg r0, r4
    or r0, r0, r4
    srwi r28, r0, 31
    mulli r0, r28, 0x18
    add r29, r3, r0
    addi r30, r29, 0x164
    b lbl_fn_8009303C_000001D4
lbl_fn_8009303C_000001BC:
    mr r3, r30
    bl fn_80475DF8
    stw r3, 0x16c(r29)
    addi r30, r30, 0x18
    addi r29, r29, 0x18
    addi r28, r28, 0x1
lbl_fn_8009303C_000001D4:
    lwz r3, 0x20c(r31)
    extlwi r0, r3, 9, 8
    srawi r0, r0, 24
    cmpw r28, r0
    blt lbl_fn_8009303C_000001BC
    slwi r0, r3, 30
    srawi r3, r0, 31
    neg r0, r3
    or r0, r0, r3
    srwi r28, r0, 31
    mulli r0, r28, 0x18
    add r3, r31, r0
    addi r30, r3, 0x164
    b lbl_fn_8009303C_0000022C
lbl_fn_8009303C_0000020C:
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8009303C_00000224
    mr r3, r31
    mr r4, r30
    bl fn_80093158
lbl_fn_8009303C_00000224:
    addi r30, r30, 0x18
    addi r28, r28, 0x1
lbl_fn_8009303C_0000022C:
    lwz r3, 0x20c(r31)
    extlwi r0, r3, 9, 8
    srawi r0, r0, 24
    cmpw r28, r0
    blt lbl_fn_8009303C_0000020C
    extlwi r0, r3, 2, 26
    srawi. r0, r0, 31
    beq lbl_fn_8009303C_00000270
    slwi r0, r3, 30
    srawi. r0, r0, 31
    bne lbl_fn_8009303C_00000270
    addi r3, r31, 0x1c4
    bl fn_80475DF8
    stw r3, 0x1cc(r31)
    mr r3, r31
    addi r4, r31, 0x1c4
    bl fn_80093158
lbl_fn_8009303C_00000270:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80093158(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    stmw r19, 0x18c(r1)
    mr r22, r4
    mr r21, r3
    addi r25, r3, 0x164
    mr r3, r22
    bl fn_80473F18
    li r0, 0x0
    stw r0, 0x5c(r1)
    mr r19, r3
    addi r20, r1, 0x5c
    stw r0, 0x60(r1)
    stw r0, 0x64(r1)
    bl strlen
    mr r23, r3
    mr r3, r20
    mr r4, r23
    bl fn_80013DC4
    lbz r0, 0x24(r1)
    mr r3, r20
    stb r0, 0x20(r1)
    mr r6, r19
    add r7, r19, r23
    addi r8, r1, 0x20
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r20
    addi r3, r1, 0x74
    bl fn_8006B174
    lwz r0, 0x5c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80093158_00000324
    lwz r3, 0x64(r1)
    bl dtor_80084684
lbl_fn_80093158_00000324:
    lwz r0, 0x74(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80093158_00000340
    lbz r0, 0x74(r1)
    addi r3, r1, 0x75
    clrlwi r0, r0, 25
    b lbl_fn_80093158_00000348
lbl_fn_80093158_00000340:
    lwz r3, 0x7c(r1)
    lwz r0, 0x78(r1)
lbl_fn_80093158_00000348:
    cmpwi r0, 0x0
    beq lbl_fn_80093158_00000384
    add r4, r3, r0
    mr r5, r3
    subf r0, r3, r4
    mtctr r0
    cmplw r3, r4
    bge lbl_fn_80093158_00000384
lbl_fn_80093158_00000368:
    lbz r0, 0x0(r5)
    cmpwi r0, 0x2e
    bne lbl_fn_80093158_0000037C
    subf r6, r3, r5
    b lbl_fn_80093158_00000388
lbl_fn_80093158_0000037C:
    addi r5, r5, 0x1
    bdnz lbl_fn_80093158_00000368
lbl_fn_80093158_00000384:
    li r6, -0x1
lbl_fn_80093158_00000388:
    addi r3, r1, 0x50
    addi r4, r1, 0x74
    li r5, 0x0
    bl fn_80069BF4
    lwz r0, 0x74(r1)
    srwi. r3, r0, 31
    bne lbl_fn_80093158_000003C8
    lwz r4, 0x50(r1)
    srwi. r0, r4, 31
    bne lbl_fn_80093158_000003C8
    lwz r3, 0x54(r1)
    lwz r0, 0x58(r1)
    stw r4, 0x74(r1)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    b lbl_fn_80093158_00000420
lbl_fn_80093158_000003C8:
    cmpwi r3, 0x0
    beq lbl_fn_80093158_000003D8
    lwz r5, 0x78(r1)
    b lbl_fn_80093158_000003E0
lbl_fn_80093158_000003D8:
    lbz r0, 0x74(r1)
    clrlwi r5, r0, 25
lbl_fn_80093158_000003E0:
    lwz r0, 0x50(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80093158_000003FC
    lbz r0, 0x50(r1)
    addi r6, r1, 0x51
    clrlwi r4, r0, 25
    b lbl_fn_80093158_00000404
lbl_fn_80093158_000003FC:
    lwz r6, 0x58(r1)
    lwz r4, 0x54(r1)
lbl_fn_80093158_00000404:
    lbz r0, 0x1c(r1)
    add r7, r6, r4
    stb r0, 0x18(r1)
    addi r3, r1, 0x74
    addi r8, r1, 0x18
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80093158_00000420:
    lwz r0, 0x50(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80093158_00000434
    lwz r3, 0x58(r1)
    bl dtor_80084684
lbl_fn_80093158_00000434:
    cmplw r22, r25
    beq lbl_fn_80093158_00000488
    lwz r3, 0x14(r22)
    lwz r4, 0x8(r22)
    cmpwi r3, 0x0
    lwz r19, 0x44(r4)
    beq lbl_fn_80093158_00000454
    bl fn_80084C24
lbl_fn_80093158_00000454:
    cmpwi r19, 0x0
    stw r19, 0x10(r22)
    beq lbl_fn_80093158_00000480
    slwi r3, r19, 2
    li r4, 0x6
    la r5, lbl_8087D6EC
    la r6, lbl_8087D6E8
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x14(r22)
    b lbl_fn_80093158_00000488
lbl_fn_80093158_00000480:
    li r0, 0x0
    stw r0, 0x14(r22)
lbl_fn_80093158_00000488:
    mr r3, r25
    bl fn_80473F18
    li r0, 0x0
    stw r0, 0x44(r1)
    mr r19, r3
    addi r20, r1, 0x44
    stw r0, 0x48(r1)
    stw r0, 0x4c(r1)
    bl strlen
    mr r23, r3
    mr r3, r20
    mr r4, r23
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r20
    stb r0, 0x10(r1)
    mr r6, r19
    add r7, r19, r23
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r20
    addi r3, r1, 0x68
    bl fn_8006B174
    lwz r0, 0x44(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80093158_00000500
    lwz r3, 0x4c(r1)
    bl dtor_80084684
lbl_fn_80093158_00000500:
    lwz r0, 0x68(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80093158_0000051C
    lbz r0, 0x68(r1)
    addi r3, r1, 0x69
    clrlwi r0, r0, 25
    b lbl_fn_80093158_00000524
lbl_fn_80093158_0000051C:
    lwz r3, 0x70(r1)
    lwz r0, 0x6c(r1)
lbl_fn_80093158_00000524:
    cmpwi r0, 0x0
    beq lbl_fn_80093158_00000560
    add r4, r3, r0
    mr r5, r3
    subf r0, r3, r4
    mtctr r0
    cmplw r3, r4
    bge lbl_fn_80093158_00000560
lbl_fn_80093158_00000544:
    lbz r0, 0x0(r5)
    cmpwi r0, 0x2e
    bne lbl_fn_80093158_00000558
    subf r6, r3, r5
    b lbl_fn_80093158_00000564
lbl_fn_80093158_00000558:
    addi r5, r5, 0x1
    bdnz lbl_fn_80093158_00000544
lbl_fn_80093158_00000560:
    li r6, -0x1
lbl_fn_80093158_00000564:
    addi r3, r1, 0x38
    addi r4, r1, 0x68
    li r5, 0x0
    bl fn_80069BF4
    lwz r0, 0x68(r1)
    srwi. r3, r0, 31
    bne lbl_fn_80093158_000005A4
    lwz r4, 0x38(r1)
    srwi. r0, r4, 31
    bne lbl_fn_80093158_000005A4
    lwz r3, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r4, 0x68(r1)
    stw r3, 0x6c(r1)
    stw r0, 0x70(r1)
    b lbl_fn_80093158_000005FC
lbl_fn_80093158_000005A4:
    cmpwi r3, 0x0
    beq lbl_fn_80093158_000005B4
    lwz r5, 0x6c(r1)
    b lbl_fn_80093158_000005BC
lbl_fn_80093158_000005B4:
    lbz r0, 0x68(r1)
    clrlwi r5, r0, 25
lbl_fn_80093158_000005BC:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80093158_000005D8
    lbz r0, 0x38(r1)
    addi r6, r1, 0x39
    clrlwi r4, r0, 25
    b lbl_fn_80093158_000005E0
lbl_fn_80093158_000005D8:
    lwz r6, 0x40(r1)
    lwz r4, 0x3c(r1)
lbl_fn_80093158_000005E0:
    lbz r0, 0xc(r1)
    add r7, r6, r4
    stb r0, 0x8(r1)
    addi r3, r1, 0x68
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80093158_000005FC:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80093158_00000610
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_80093158_00000610:
    lwz r0, 0x68(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80093158_00000624
    addi r3, r1, 0x69
    b lbl_fn_80093158_00000628
lbl_fn_80093158_00000624:
    lwz r3, 0x70(r1)
lbl_fn_80093158_00000628:
    bl fn_800DC6B4
    lwz r5, 0x16c(r21)
    cmpwi r5, 0x0
    bne lbl_fn_80093158_00000640
    li r29, -0x1
    b lbl_fn_80093158_00000680
lbl_fn_80093158_00000640:
    lwz r0, 0x44(r5)
    li r29, 0x0
    li r6, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80093158_0000067C
lbl_fn_80093158_00000658:
    lwz r4, 0x48(r5)
    lwzx r4, r4, r6
    lwz r0, 0x14(r4)
    cmplw r3, r0
    bne lbl_fn_80093158_00000670
    b lbl_fn_80093158_00000680
lbl_fn_80093158_00000670:
    addi r6, r6, 0x4
    addi r29, r29, 0x1
    bdnz lbl_fn_80093158_00000658
lbl_fn_80093158_0000067C:
    li r29, -0x1
lbl_fn_80093158_00000680:
    lis r19, lbl_80732368@ha
    addi r26, r1, 0x75
    addi r19, r19, lbl_80732368@l
    li r24, 0x0
    li r20, 0x0
    li r27, 0x0
    li r30, -0x1
    b lbl_fn_80093158_00000828
lbl_fn_80093158_000006A0:
    lwz r3, 0x48(r3)
    cmplw r22, r25
    lwzx r23, r3, r27
    beq lbl_fn_80093158_0000081C
    lwz r3, 0x14(r22)
    li r7, 0x0
    li r5, 0x0
    stwx r30, r3, r20
    lwz r6, 0x16c(r21)
    lwz r0, 0x44(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80093158_00000704
lbl_fn_80093158_000006D4:
    lwz r3, 0x48(r6)
    lwz r4, 0x14(r23)
    lwzx r3, r3, r5
    lwz r0, 0x14(r3)
    cmplw r4, r0
    bne lbl_fn_80093158_000006F8
    lwz r3, 0x14(r22)
    stwx r7, r3, r20
    b lbl_fn_80093158_00000704
lbl_fn_80093158_000006F8:
    addi r5, r5, 0x4
    addi r7, r7, 0x1
    bdnz lbl_fn_80093158_000006D4
lbl_fn_80093158_00000704:
    lwz r3, 0x14(r22)
    lwzx r0, r3, r20
    cmpwi r0, -0x1
    bne lbl_fn_80093158_000007E0
    lwz r28, 0x10(r23)
    mr r3, r28
    bl strlen
    lwz r0, 0x74(r1)
    mr r31, r3
    stw r3, 0x30(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80093158_00000740
    lbz r0, 0x74(r1)
    clrlwi r4, r0, 25
    b lbl_fn_80093158_00000744
lbl_fn_80093158_00000740:
    lwz r4, 0x78(r1)
lbl_fn_80093158_00000744:
    lwz r0, 0x74(r1)
    stw r4, 0x34(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80093158_00000764
    lbz r0, 0x74(r1)
    mr r3, r26
    clrlwi r0, r0, 25
    b lbl_fn_80093158_0000076C
lbl_fn_80093158_00000764:
    lwz r3, 0x7c(r1)
    lwz r0, 0x78(r1)
lbl_fn_80093158_0000076C:
    cmplw r4, r0
    stw r0, 0x2c(r1)
    addi r4, r1, 0x2c
    bge lbl_fn_80093158_00000780
    addi r4, r1, 0x34
lbl_fn_80093158_00000780:
    lwz r0, 0x0(r4)
    mr r4, r28
    stw r0, 0x28(r1)
    addi r5, r1, 0x28
    cmplw r31, r0
    bge lbl_fn_80093158_0000079C
    addi r5, r1, 0x30
lbl_fn_80093158_0000079C:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80093158_000007D0
    lwz r0, 0x28(r1)
    cmplw r0, r31
    bge lbl_fn_80093158_000007C0
    li r3, -0x1
    b lbl_fn_80093158_000007D0
lbl_fn_80093158_000007C0:
    bne lbl_fn_80093158_000007CC
    li r3, 0x0
    b lbl_fn_80093158_000007D0
lbl_fn_80093158_000007CC:
    li r3, 0x1
lbl_fn_80093158_000007D0:
    cmpwi r3, 0x0
    bne lbl_fn_80093158_000007E0
    lwz r3, 0x14(r22)
    stwx r29, r3, r20
lbl_fn_80093158_000007E0:
    lwz r3, 0x14(r22)
    lwzx r0, r3, r20
    cmpwi r0, -0x1
    bne lbl_fn_80093158_0000081C
    addi r3, r21, 0x164
    bl fn_80473F18
    lwz r5, 0x10(r23)
    mr r6, r3
    addi r3, r1, 0x80
    addi r4, r19, 0x182
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x80
    bl fn_800697D8
lbl_fn_80093158_0000081C:
    addi r27, r27, 0x4
    addi r24, r24, 0x1
    addi r20, r20, 0x4
lbl_fn_80093158_00000828:
    lwz r3, 0x8(r22)
    lwz r0, 0x44(r3)
    cmpw r24, r0
    blt lbl_fn_80093158_000006A0
    lwz r0, 0x68(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80093158_0000084C
    lwz r3, 0x70(r1)
    bl dtor_80084684
lbl_fn_80093158_0000084C:
    lwz r0, 0x74(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80093158_00000860
    lwz r3, 0x7c(r1)
    bl dtor_80084684
lbl_fn_80093158_00000860:
    lmw r19, 0x18c(r1)
    lwz r0, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

asm void fn_8009373C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r4
    bl fn_800DC6B4
    lwz r5, 0x16c(r30)
    cmpwi r5, 0x0
    bne lbl_fn_8009373C_000008AC
    li r6, -0x1
    b lbl_fn_8009373C_000008EC
lbl_fn_8009373C_000008AC:
    lwz r0, 0x44(r5)
    li r6, 0x0
    li r7, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8009373C_000008E8
lbl_fn_8009373C_000008C4:
    lwz r4, 0x48(r5)
    lwzx r4, r4, r7
    lwz r0, 0x14(r4)
    cmplw r3, r0
    bne lbl_fn_8009373C_000008DC
    b lbl_fn_8009373C_000008EC
lbl_fn_8009373C_000008DC:
    addi r7, r7, 0x4
    addi r6, r6, 0x1
    bdnz lbl_fn_8009373C_000008C4
lbl_fn_8009373C_000008E8:
    li r6, -0x1
lbl_fn_8009373C_000008EC:
    cmpwi r6, 0x0
    blt lbl_fn_8009373C_00000908
    neg r0, r31
    lwz r3, 0xf0(r30)
    or r0, r0, r31
    srwi r0, r0, 31
    stbx r0, r3, r6
lbl_fn_8009373C_00000908:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800937E8(void)
{
    nofralloc
    lwz r7, 0x16c(r3)
    cmpwi r7, 0x0
    bne lbl_fn_800937E8_00000934
    li r8, -0x1
    b lbl_fn_800937E8_00000974
lbl_fn_800937E8_00000934:
    lwz r0, 0x44(r7)
    li r8, 0x0
    li r9, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_800937E8_00000970
lbl_fn_800937E8_0000094C:
    lwz r6, 0x48(r7)
    lwzx r6, r6, r9
    lwz r0, 0x14(r6)
    cmplw r4, r0
    bne lbl_fn_800937E8_00000964
    b lbl_fn_800937E8_00000974
lbl_fn_800937E8_00000964:
    addi r9, r9, 0x4
    addi r8, r8, 0x1
    bdnz lbl_fn_800937E8_0000094C
lbl_fn_800937E8_00000970:
    li r8, -0x1
lbl_fn_800937E8_00000974:
    cmpwi r8, 0x0
    bltlr
    neg r0, r5
    lwz r3, 0xf0(r3)
    or r0, r0, r5
    srwi r0, r0, 31
    stbx r0, r3, r8
    blr
}

asm void fn_8009385C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r27, r3
    mr r28, r5
    mr r29, r6
    mr r30, r7
    lwz r8, 0x16c(r3)
    cmpwi r8, 0x0
    bne lbl_fn_8009385C_000009C8
    li r5, -0x1
    b lbl_fn_8009385C_00000B38
lbl_fn_8009385C_000009C8:
    lwz r0, 0x44(r8)
    li r5, 0x0
    li r6, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8009385C_00000A04
lbl_fn_8009385C_000009E0:
    lwz r3, 0x48(r8)
    lwzx r3, r3, r6
    lwz r0, 0x14(r3)
    cmplw r4, r0
    bne lbl_fn_8009385C_000009F8
    b lbl_fn_8009385C_00000B38
lbl_fn_8009385C_000009F8:
    addi r6, r6, 0x4
    addi r5, r5, 0x1
    bdnz lbl_fn_8009385C_000009E0
lbl_fn_8009385C_00000A04:
    li r5, -0x1
    b lbl_fn_8009385C_00000B38
lbl_fn_8009385C_00000A0C:
    lwz r3, 0x16c(r27)
    slwi r0, r5, 2
    lwz r7, 0x48(r3)
    cmpwi r3, 0x0
    lwzx r31, r7, r0
    lwz r5, 0x14(r31)
    bne lbl_fn_8009385C_00000A30
    li r4, -0x1
    b lbl_fn_8009385C_00000A70
lbl_fn_8009385C_00000A30:
    lwz r0, 0x44(r3)
    li r4, 0x0
    li r6, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8009385C_00000A6C
lbl_fn_8009385C_00000A48:
    lwz r3, 0x0(r7)
    lwz r0, 0x14(r3)
    cmplw r5, r0
    bne lbl_fn_8009385C_00000A5C
    b lbl_fn_8009385C_00000A70
lbl_fn_8009385C_00000A5C:
    addi r6, r6, 0x4
    addi r7, r7, 0x4
    addi r4, r4, 0x1
    bdnz lbl_fn_8009385C_00000A48
lbl_fn_8009385C_00000A6C:
    li r4, -0x1
lbl_fn_8009385C_00000A70:
    cmpwi r4, 0x0
    blt lbl_fn_8009385C_00000A8C
    neg r0, r28
    lwz r3, 0xf0(r27)
    or r0, r0, r28
    srwi r0, r0, 31
    stbx r0, r3, r4
lbl_fn_8009385C_00000A8C:
    cmpwi r29, 0x0
    beq lbl_fn_8009385C_00000B2C
    lwz r0, 0x20(r31)
    cmpwi r0, 0x0
    blt lbl_fn_8009385C_00000B2C
    b lbl_fn_8009385C_00000B24
lbl_fn_8009385C_00000AA4:
    lwz r4, 0x16c(r27)
    slwi r0, r0, 2
    mr r3, r27
    mr r5, r28
    lwz r4, 0x48(r4)
    lwzx r25, r4, r0
    lwz r4, 0x14(r25)
    bl fn_800937E8
    lwz r0, 0x20(r25)
    cmpwi r0, 0x0
    blt lbl_fn_8009385C_00000B20
    b lbl_fn_8009385C_00000B18
lbl_fn_8009385C_00000AD4:
    lwz r4, 0x16c(r27)
    slwi r0, r0, 2
    mr r3, r27
    mr r5, r28
    lwz r4, 0x48(r4)
    lwzx r26, r4, r0
    lwz r4, 0x14(r26)
    bl fn_800937E8
    lwz r4, 0x20(r26)
    cmpwi r4, 0x0
    blt lbl_fn_8009385C_00000B14
    mr r3, r27
    mr r5, r28
    li r6, 0x1
    li r7, 0x1
    bl fn_80093A1C
lbl_fn_8009385C_00000B14:
    lwz r0, 0x24(r26)
lbl_fn_8009385C_00000B18:
    cmpwi r0, 0x0
    bge lbl_fn_8009385C_00000AD4
lbl_fn_8009385C_00000B20:
    lwz r0, 0x24(r25)
lbl_fn_8009385C_00000B24:
    cmpwi r0, 0x0
    bge lbl_fn_8009385C_00000AA4
lbl_fn_8009385C_00000B2C:
    cmpwi r30, 0x0
    beq lbl_fn_8009385C_00000B40
    lwz r5, 0x24(r31)
lbl_fn_8009385C_00000B38:
    cmpwi r5, 0x0
    bge lbl_fn_8009385C_00000A0C
lbl_fn_8009385C_00000B40:
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80093A1C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r27, r3
    mr r28, r5
    mr r29, r6
    mr r30, r7
    b lbl_fn_80093A1C_00000CA4
lbl_fn_80093A1C_00000B78:
    lwz r3, 0x16c(r27)
    slwi r0, r4, 2
    lwz r7, 0x48(r3)
    cmpwi r3, 0x0
    lwzx r31, r7, r0
    lwz r4, 0x14(r31)
    bne lbl_fn_80093A1C_00000B9C
    li r5, -0x1
    b lbl_fn_80093A1C_00000BDC
lbl_fn_80093A1C_00000B9C:
    lwz r0, 0x44(r3)
    li r5, 0x0
    li r6, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80093A1C_00000BD8
lbl_fn_80093A1C_00000BB4:
    lwz r3, 0x0(r7)
    lwz r0, 0x14(r3)
    cmplw r4, r0
    bne lbl_fn_80093A1C_00000BC8
    b lbl_fn_80093A1C_00000BDC
lbl_fn_80093A1C_00000BC8:
    addi r6, r6, 0x4
    addi r7, r7, 0x4
    addi r5, r5, 0x1
    bdnz lbl_fn_80093A1C_00000BB4
lbl_fn_80093A1C_00000BD8:
    li r5, -0x1
lbl_fn_80093A1C_00000BDC:
    cmpwi r5, 0x0
    blt lbl_fn_80093A1C_00000BF8
    neg r0, r28
    lwz r3, 0xf0(r27)
    or r0, r0, r28
    srwi r0, r0, 31
    stbx r0, r3, r5
lbl_fn_80093A1C_00000BF8:
    cmpwi r29, 0x0
    beq lbl_fn_80093A1C_00000C98
    lwz r0, 0x20(r31)
    cmpwi r0, 0x0
    blt lbl_fn_80093A1C_00000C98
    b lbl_fn_80093A1C_00000C90
lbl_fn_80093A1C_00000C10:
    lwz r4, 0x16c(r27)
    slwi r0, r0, 2
    mr r3, r27
    mr r5, r28
    lwz r4, 0x48(r4)
    lwzx r26, r4, r0
    lwz r4, 0x14(r26)
    bl fn_800937E8
    lwz r0, 0x20(r26)
    cmpwi r0, 0x0
    blt lbl_fn_80093A1C_00000C8C
    b lbl_fn_80093A1C_00000C84
lbl_fn_80093A1C_00000C40:
    lwz r4, 0x16c(r27)
    slwi r0, r0, 2
    mr r3, r27
    mr r5, r28
    lwz r4, 0x48(r4)
    lwzx r25, r4, r0
    lwz r4, 0x14(r25)
    bl fn_800937E8
    lwz r4, 0x20(r25)
    cmpwi r4, 0x0
    blt lbl_fn_80093A1C_00000C80
    mr r3, r27
    mr r5, r28
    li r6, 0x1
    li r7, 0x1
    bl fn_80093A1C
lbl_fn_80093A1C_00000C80:
    lwz r0, 0x24(r25)
lbl_fn_80093A1C_00000C84:
    cmpwi r0, 0x0
    bge lbl_fn_80093A1C_00000C40
lbl_fn_80093A1C_00000C8C:
    lwz r0, 0x24(r26)
lbl_fn_80093A1C_00000C90:
    cmpwi r0, 0x0
    bge lbl_fn_80093A1C_00000C10
lbl_fn_80093A1C_00000C98:
    cmpwi r30, 0x0
    beq lbl_fn_80093A1C_00000CAC
    lwz r4, 0x24(r31)
lbl_fn_80093A1C_00000CA4:
    cmpwi r4, 0x0
    bge lbl_fn_80093A1C_00000B78
lbl_fn_80093A1C_00000CAC:
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80093B88(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_800DC6B4
    lwz r5, 0x16c(r31)
    cmpwi r5, 0x0
    bne lbl_fn_80093B88_00000CF0
    li r6, -0x1
    b lbl_fn_80093B88_00000D30
lbl_fn_80093B88_00000CF0:
    lwz r0, 0x44(r5)
    li r6, 0x0
    li r7, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80093B88_00000D2C
lbl_fn_80093B88_00000D08:
    lwz r4, 0x48(r5)
    lwzx r4, r4, r7
    lwz r0, 0x14(r4)
    cmplw r3, r0
    bne lbl_fn_80093B88_00000D20
    b lbl_fn_80093B88_00000D30
lbl_fn_80093B88_00000D20:
    addi r7, r7, 0x4
    addi r6, r6, 0x1
    bdnz lbl_fn_80093B88_00000D08
lbl_fn_80093B88_00000D2C:
    li r6, -0x1
lbl_fn_80093B88_00000D30:
    cmpwi r6, 0x0
    blt lbl_fn_80093B88_00000D44
    lwz r3, 0xf0(r31)
    li r0, 0x1
    stbx r0, r3, r6
lbl_fn_80093B88_00000D44:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80093C20(void)
{
    nofralloc
    lwz r6, 0x16c(r3)
    cmpwi r6, 0x0
    bne lbl_fn_80093C20_00000D6C
    li r7, -0x1
    b lbl_fn_80093C20_00000DAC
lbl_fn_80093C20_00000D6C:
    lwz r0, 0x44(r6)
    li r7, 0x0
    li r8, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80093C20_00000DA8
lbl_fn_80093C20_00000D84:
    lwz r5, 0x48(r6)
    lwzx r5, r5, r8
    lwz r0, 0x14(r5)
    cmplw r4, r0
    bne lbl_fn_80093C20_00000D9C
    b lbl_fn_80093C20_00000DAC
lbl_fn_80093C20_00000D9C:
    addi r8, r8, 0x4
    addi r7, r7, 0x1
    bdnz lbl_fn_80093C20_00000D84
lbl_fn_80093C20_00000DA8:
    li r7, -0x1
lbl_fn_80093C20_00000DAC:
    cmpwi r7, 0x0
    bltlr
    lwz r3, 0xf0(r3)
    li r0, 0x1
    stbx r0, r3, r7
    blr
}

asm void fn_80093C8C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_800DC6B4
    lwz r5, 0x16c(r31)
    cmpwi r5, 0x0
    bne lbl_fn_80093C8C_00000DF4
    li r6, -0x1
    b lbl_fn_80093C8C_00000E34
lbl_fn_80093C8C_00000DF4:
    lwz r0, 0x44(r5)
    li r6, 0x0
    li r7, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80093C8C_00000E30
lbl_fn_80093C8C_00000E0C:
    lwz r4, 0x48(r5)
    lwzx r4, r4, r7
    lwz r0, 0x14(r4)
    cmplw r3, r0
    bne lbl_fn_80093C8C_00000E24
    b lbl_fn_80093C8C_00000E34
lbl_fn_80093C8C_00000E24:
    addi r7, r7, 0x4
    addi r6, r6, 0x1
    bdnz lbl_fn_80093C8C_00000E0C
lbl_fn_80093C8C_00000E30:
    li r6, -0x1
lbl_fn_80093C8C_00000E34:
    cmpwi r6, 0x0
    blt lbl_fn_80093C8C_00000E48
    lwz r3, 0xf0(r31)
    lbzx r3, r3, r6
    b lbl_fn_80093C8C_00000E4C
lbl_fn_80093C8C_00000E48:
    li r3, 0x1
lbl_fn_80093C8C_00000E4C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80093D28(void)
{
    nofralloc
    lwz r6, 0x16c(r3)
    cmpwi r6, 0x0
    bne lbl_fn_80093D28_00000E74
    li r7, -0x1
    b lbl_fn_80093D28_00000EB4
lbl_fn_80093D28_00000E74:
    lwz r0, 0x44(r6)
    li r7, 0x0
    li r8, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80093D28_00000EB0
lbl_fn_80093D28_00000E8C:
    lwz r5, 0x48(r6)
    lwzx r5, r5, r8
    lwz r0, 0x14(r5)
    cmplw r4, r0
    bne lbl_fn_80093D28_00000EA4
    b lbl_fn_80093D28_00000EB4
lbl_fn_80093D28_00000EA4:
    addi r8, r8, 0x4
    addi r7, r7, 0x1
    bdnz lbl_fn_80093D28_00000E8C
lbl_fn_80093D28_00000EB0:
    li r7, -0x1
lbl_fn_80093D28_00000EB4:
    cmpwi r7, 0x0
    blt lbl_fn_80093D28_00000EC8
    lwz r3, 0xf0(r3)
    lbzx r3, r3, r7
    blr
lbl_fn_80093D28_00000EC8:
    li r3, 0x1
    blr
}

asm void fn_80093D98(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r4
    bl fn_800DC6B4
    lwz r0, 0x104(r30)
    li r5, 0x0
    li r6, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80093D98_00000F30
lbl_fn_80093D98_00000F0C:
    lwz r4, 0x108(r30)
    lwzx r4, r4, r6
    lwz r0, 0x0(r4)
    cmplw r3, r0
    bne lbl_fn_80093D98_00000F24
    b lbl_fn_80093D98_00000F34
lbl_fn_80093D98_00000F24:
    addi r6, r6, 0x4
    addi r5, r5, 0x1
    bdnz lbl_fn_80093D98_00000F0C
lbl_fn_80093D98_00000F30:
    li r5, -0x1
lbl_fn_80093D98_00000F34:
    cmpwi r5, 0x0
    blt lbl_fn_80093D98_00000F50
    neg r0, r31
    lwz r3, 0xf8(r30)
    or r0, r0, r31
    srwi r0, r0, 31
    stbx r0, r3, r5
lbl_fn_80093D98_00000F50:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80093E30(void)
{
    nofralloc
    lwz r0, 0x104(r3)
    li r7, 0x0
    li r8, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80093E30_00000FA4
lbl_fn_80093E30_00000F80:
    lwz r6, 0x108(r3)
    lwzx r6, r6, r8
    lwz r0, 0x0(r6)
    cmplw r4, r0
    bne lbl_fn_80093E30_00000F98
    b lbl_fn_80093E30_00000FA8
lbl_fn_80093E30_00000F98:
    addi r8, r8, 0x4
    addi r7, r7, 0x1
    bdnz lbl_fn_80093E30_00000F80
lbl_fn_80093E30_00000FA4:
    li r7, -0x1
lbl_fn_80093E30_00000FA8:
    cmpwi r7, 0x0
    bltlr
    neg r0, r5
    lwz r3, 0xf8(r3)
    or r0, r0, r5
    srwi r0, r0, 31
    stbx r0, r3, r7
    blr
}

asm void fn_80093E90(void)
{
    nofralloc
    lwz r0, 0x104(r3)
    li r6, 0x0
    li r7, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80093E90_00001004
lbl_fn_80093E90_00000FE0:
    lwz r5, 0x108(r3)
    lwzx r5, r5, r7
    lwz r0, 0x0(r5)
    cmplw r4, r0
    bne lbl_fn_80093E90_00000FF8
    b lbl_fn_80093E90_00001008
lbl_fn_80093E90_00000FF8:
    addi r7, r7, 0x4
    addi r6, r6, 0x1
    bdnz lbl_fn_80093E90_00000FE0
lbl_fn_80093E90_00001004:
    li r6, -0x1
lbl_fn_80093E90_00001008:
    cmpwi r6, 0x0
    blt lbl_fn_80093E90_0000101C
    lwz r3, 0xf8(r3)
    lbzx r3, r3, r6
    blr
lbl_fn_80093E90_0000101C:
    li r3, 0x0
    blr
}

asm void fn_80093EEC(void)
{
    nofralloc
    neg r0, r4
    li r6, 0x0
    or r0, r0, r4
    srwi r5, r0, 31
    b lbl_fn_80093EEC_00001044
lbl_fn_80093EEC_00001038:
    lwz r4, 0xf8(r3)
    stbx r5, r4, r6
    addi r6, r6, 0x1
lbl_fn_80093EEC_00001044:
    lwz r0, 0x104(r3)
    cmplw r6, r0
    blt lbl_fn_80093EEC_00001038
    blr
}

asm void fn_80093F1C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_80089D70
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_80093F58
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80093F58(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r0, 0xd8(r3)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80093F58_00001128
lbl_fn_80093F58_000010C8:
    lwz r0, 0xe0(r3)
    lwz r6, 0x0(r4)
    add r7, r0, r5
    lwzx r0, r5, r0
    cmplw r6, r0
    bne lbl_fn_80093F58_00001120
    stw r6, 0x0(r7)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r7)
    psq_l f1, 0x8(r4), 0, 0
    psq_st f1, 0x8(r7), 0, 0
    lfs f2, 0x10(r4)
    stfs f2, 0x10(r7)
    psq_l f1, 0x14(r4), 0, 0
    psq_st f1, 0x14(r7), 0, 0
    lfs f2, 0x1c(r4)
    stfs f2, 0x1c(r7)
    psq_l f1, 0x20(r4), 0, 0
    psq_st f1, 0x20(r7), 0, 0
    lfs f2, 0x28(r4)
    stfs f2, 0x28(r7)
    b lbl_fn_80093F58_00001538
lbl_fn_80093F58_00001120:
    addi r5, r5, 0x2c
    bdnz lbl_fn_80093F58_000010C8
lbl_fn_80093F58_00001128:
    lwz r0, 0xe0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80093F58_00001140
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80093F58_000012E0
lbl_fn_80093F58_00001140:
    lwz r0, 0xdc(r3)
    li r29, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_80093F58_00001488
    li r3, 0x170
    li r4, 0x0
    la r5, lbl_8087D810
    la r6, lbl_8087D80C
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8000FAE4@ha
    li r5, 0x0
    addi r4, r4, fn_8000FAE4@l
    li r6, 0x2c
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0xe0(r30)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_80093F58_000012D4
    lwz r0, 0xd8(r30)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80093F58_000011A4
    mr r5, r0
lbl_fn_80093F58_000011A4:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80093F58_000012C0
    srwi. r0, r5, 1
    mtctr r0
    beq lbl_fn_80093F58_00001268
lbl_fn_80093F58_000011BC:
    lwz r0, 0xe0(r30)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x2c
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r7)
    psq_l f1, 0x8(r7), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r7)
    psq_l f1, 0x14(r7), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r7)
    psq_l f1, 0x20(r7), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    add r6, r3, r4
    lwz r0, 0xe0(r30)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x2c
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r7)
    psq_l f1, 0x8(r7), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r7)
    psq_l f1, 0x14(r7), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r7)
    psq_l f1, 0x20(r7), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    bdnz lbl_fn_80093F58_000011BC
    andi. r5, r5, 0x1
    beq lbl_fn_80093F58_000012C0
lbl_fn_80093F58_00001268:
    mtctr r5
lbl_fn_80093F58_0000126C:
    lwz r0, 0xe0(r30)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x2c
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r7)
    psq_l f1, 0x8(r7), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r7)
    psq_l f1, 0x14(r7), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r7)
    psq_l f1, 0x20(r7), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    bdnz lbl_fn_80093F58_0000126C
lbl_fn_80093F58_000012C0:
    lwz r3, 0xe0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80093F58_000012D4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80093F58_000012D4:
    stw r28, 0xe0(r30)
    stw r29, 0xdc(r30)
    b lbl_fn_80093F58_00001488
lbl_fn_80093F58_000012E0:
    lwz r3, 0xd8(r3)
    cmplw r3, r0
    blt lbl_fn_80093F58_00001488
    slwi r29, r3, 1
    cmplw r0, r29
    bgt lbl_fn_80093F58_00001488
    mulli r3, r29, 0x2c
    li r4, 0x0
    la r5, lbl_8087D810
    la r6, lbl_8087D80C
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8000FAE4@ha
    mr r7, r29
    addi r4, r4, fn_8000FAE4@l
    li r5, 0x0
    li r6, 0x2c
    bl fn_80695720
    lwz r0, 0xe0(r30)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_80093F58_00001480
    lwz r0, 0xd8(r30)
    mr r5, r29
    cmplw r29, r0
    ble lbl_fn_80093F58_00001350
    mr r5, r0
lbl_fn_80093F58_00001350:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80093F58_0000146C
    srwi. r0, r5, 1
    mtctr r0
    beq lbl_fn_80093F58_00001414
lbl_fn_80093F58_00001368:
    lwz r0, 0xe0(r30)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x2c
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r7)
    psq_l f1, 0x8(r7), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r7)
    psq_l f1, 0x14(r7), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r7)
    psq_l f1, 0x20(r7), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    add r6, r3, r4
    lwz r0, 0xe0(r30)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x2c
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r7)
    psq_l f1, 0x8(r7), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r7)
    psq_l f1, 0x14(r7), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r7)
    psq_l f1, 0x20(r7), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    bdnz lbl_fn_80093F58_00001368
    andi. r5, r5, 0x1
    beq lbl_fn_80093F58_0000146C
lbl_fn_80093F58_00001414:
    mtctr r5
lbl_fn_80093F58_00001418:
    lwz r0, 0xe0(r30)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x2c
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r7)
    psq_l f1, 0x8(r7), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r7)
    psq_l f1, 0x14(r7), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r7)
    psq_l f1, 0x20(r7), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    bdnz lbl_fn_80093F58_00001418
lbl_fn_80093F58_0000146C:
    lwz r3, 0xe0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80093F58_00001480
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80093F58_00001480:
    stw r28, 0xe0(r30)
    stw r29, 0xdc(r30)
lbl_fn_80093F58_00001488:
    lwz r0, 0xd8(r30)
    li r7, 0x0
    lwz r5, 0xe0(r30)
    li r6, 0x0
    mulli r4, r0, 0x2c
    lwz r3, 0x0(r31)
    stwux r3, r4, r5
    lwz r0, 0x4(r31)
    stw r0, 0x4(r4)
    psq_l f1, 0x8(r31), 0, 0
    psq_st f1, 0x8(r4), 0, 0
    lfs f2, 0x10(r31)
    stfs f2, 0x10(r4)
    psq_l f1, 0x14(r31), 0, 0
    psq_st f1, 0x14(r4), 0, 0
    lfs f2, 0x1c(r31)
    stfs f2, 0x1c(r4)
    psq_l f1, 0x20(r31), 0, 0
    psq_st f1, 0x20(r4), 0, 0
    lfs f2, 0x28(r31)
    stfs f2, 0x28(r4)
    lwz r3, 0xd8(r30)
    lwz r5, 0x16c(r30)
    addi r0, r3, 0x1
    stw r0, 0xd8(r30)
    lwz r0, 0x44(r5)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80093F58_00001538
lbl_fn_80093F58_000014FC:
    lwz r3, 0x48(r5)
    lwz r4, 0x0(r31)
    lwzx r3, r3, r6
    lwz r0, 0x14(r3)
    cmplw r4, r0
    bne lbl_fn_80093F58_0000152C
    lwz r4, 0xd8(r30)
    slwi r0, r7, 1
    lwz r3, 0xe8(r30)
    subi r4, r4, 0x1
    sthx r4, r3, r0
    b lbl_fn_80093F58_00001538
lbl_fn_80093F58_0000152C:
    addi r6, r6, 0x4
    addi r7, r7, 0x1
    bdnz lbl_fn_80093F58_000014FC
lbl_fn_80093F58_00001538:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80094420(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r5, 0xe0(r3)
    stw r0, 0xd8(r3)
    cmpwi r5, 0x0
    stw r0, 0xdc(r3)
    beq lbl_fn_80094420_000015A8
    beq lbl_fn_80094420_000015A0
    subi r3, r5, 0x10
    bl fn_80084C24
lbl_fn_80094420_000015A0:
    li r0, 0x0
    stw r0, 0xe0(r30)
lbl_fn_80094420_000015A8:
    li r6, 0x0
    li r3, 0x0
    li r5, -0x1
    b lbl_fn_80094420_000015C8
lbl_fn_80094420_000015B8:
    lwz r4, 0xe8(r30)
    addi r6, r6, 0x1
    sthx r5, r4, r3
    addi r3, r3, 0x2
lbl_fn_80094420_000015C8:
    lwz r4, 0x16c(r30)
    lwz r0, 0x44(r4)
    cmpw r6, r0
    blt lbl_fn_80094420_000015B8
    lwz r3, 0xe0(r30)
    li r0, 0x0
    stw r0, 0xd8(r30)
    cmpwi r3, 0x0
    stw r0, 0xdc(r30)
    beq lbl_fn_80094420_00001604
    beq lbl_fn_80094420_000015FC
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80094420_000015FC:
    li r0, 0x0
    stw r0, 0xe0(r30)
lbl_fn_80094420_00001604:
    lwz r29, 0x0(r31)
    cmpwi r29, 0x0
    beq lbl_fn_80094420_0000164C
    mulli r3, r29, 0x2c
    li r4, 0x0
    la r5, lbl_8087D6E0
    la r6, lbl_8087D6DC
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8000FAE4@ha
    mr r7, r29
    addi r4, r4, fn_8000FAE4@l
    li r5, 0x0
    li r6, 0x2c
    bl fn_80695720
    mr r28, r3
    b lbl_fn_80094420_00001650
lbl_fn_80094420_0000164C:
    li r28, 0x0
lbl_fn_80094420_00001650:
    lwz r0, 0xe0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80094420_000017A0
    lwz r0, 0xd8(r30)
    mr r4, r29
    cmplw r29, r0
    ble lbl_fn_80094420_00001670
    mr r4, r0
lbl_fn_80094420_00001670:
    cmplwi r4, 0x0
    li r3, 0x0
    ble lbl_fn_80094420_0000178C
    srwi. r0, r4, 1
    mtctr r0
    beq lbl_fn_80094420_00001734
lbl_fn_80094420_00001688:
    lwz r0, 0xe0(r30)
    add r5, r28, r3
    add r6, r0, r3
    lwzx r0, r3, r0
    stwx r0, r28, r3
    addi r3, r3, 0x2c
    lwz r0, 0x4(r6)
    stw r0, 0x4(r5)
    lfs f2, 0x10(r6)
    psq_l f1, 0x8(r6), 0, 0
    psq_st f1, 0x8(r5), 0, 0
    stfs f2, 0x10(r5)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r5), 0, 0
    stfs f2, 0x1c(r5)
    lfs f2, 0x28(r6)
    psq_l f1, 0x20(r6), 0, 0
    psq_st f1, 0x20(r5), 0, 0
    stfs f2, 0x28(r5)
    add r5, r28, r3
    lwz r0, 0xe0(r30)
    add r6, r0, r3
    lwzx r0, r3, r0
    stwx r0, r28, r3
    addi r3, r3, 0x2c
    lwz r0, 0x4(r6)
    stw r0, 0x4(r5)
    lfs f2, 0x10(r6)
    psq_l f1, 0x8(r6), 0, 0
    psq_st f1, 0x8(r5), 0, 0
    stfs f2, 0x10(r5)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r5), 0, 0
    stfs f2, 0x1c(r5)
    lfs f2, 0x28(r6)
    psq_l f1, 0x20(r6), 0, 0
    psq_st f1, 0x20(r5), 0, 0
    stfs f2, 0x28(r5)
    bdnz lbl_fn_80094420_00001688
    andi. r4, r4, 0x1
    beq lbl_fn_80094420_0000178C
lbl_fn_80094420_00001734:
    mtctr r4
lbl_fn_80094420_00001738:
    lwz r0, 0xe0(r30)
    add r5, r28, r3
    add r6, r0, r3
    lwzx r0, r3, r0
    stwx r0, r28, r3
    addi r3, r3, 0x2c
    lwz r0, 0x4(r6)
    stw r0, 0x4(r5)
    lfs f2, 0x10(r6)
    psq_l f1, 0x8(r6), 0, 0
    psq_st f1, 0x8(r5), 0, 0
    stfs f2, 0x10(r5)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r5), 0, 0
    stfs f2, 0x1c(r5)
    lfs f2, 0x28(r6)
    psq_l f1, 0x20(r6), 0, 0
    psq_st f1, 0x20(r5), 0, 0
    stfs f2, 0x28(r5)
    bdnz lbl_fn_80094420_00001738
lbl_fn_80094420_0000178C:
    lwz r3, 0xe0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80094420_000017A0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80094420_000017A0:
    stw r28, 0xe0(r30)
    li r5, 0x0
    li r3, 0x0
    stw r29, 0xd8(r30)
    stw r29, 0xdc(r30)
    b lbl_fn_80094420_00001810
lbl_fn_80094420_000017B8:
    lwz r4, 0x8(r31)
    addi r5, r5, 0x1
    lwz r0, 0xe0(r30)
    add r6, r4, r3
    add r4, r0, r3
    lwz r0, 0x0(r6)
    stw r0, 0x0(r4)
    addi r3, r3, 0x2c
    lwz r0, 0x4(r6)
    stw r0, 0x4(r4)
    lfs f2, 0x10(r6)
    psq_l f1, 0x8(r6), 0, 0
    psq_st f1, 0x8(r4), 0, 0
    stfs f2, 0x10(r4)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r4), 0, 0
    stfs f2, 0x1c(r4)
    lfs f2, 0x28(r6)
    psq_l f1, 0x20(r6), 0, 0
    psq_st f1, 0x20(r4), 0, 0
    stfs f2, 0x28(r4)
lbl_fn_80094420_00001810:
    lwz r0, 0xd8(r30)
    cmplw r5, r0
    blt lbl_fn_80094420_000017B8
    li r8, 0x0
    li r3, 0x0
    b lbl_fn_80094420_00001884
lbl_fn_80094420_00001828:
    lwz r7, 0x16c(r30)
    li r9, 0x0
    li r6, 0x0
    lwz r0, 0x44(r7)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80094420_0000187C
lbl_fn_80094420_00001844:
    lwz r5, 0x48(r7)
    lwz r4, 0xe0(r30)
    lwzx r5, r5, r6
    lwzx r0, r4, r3
    lwz r4, 0x14(r5)
    cmplw r4, r0
    bne lbl_fn_80094420_00001870
    lwz r4, 0xe8(r30)
    slwi r0, r9, 1
    sthx r8, r4, r0
    b lbl_fn_80094420_0000187C
lbl_fn_80094420_00001870:
    addi r6, r6, 0x4
    addi r9, r9, 0x1
    bdnz lbl_fn_80094420_00001844
lbl_fn_80094420_0000187C:
    addi r8, r8, 0x1
    addi r3, r3, 0x2c
lbl_fn_80094420_00001884:
    lwz r0, 0xd8(r30)
    cmplw r8, r0
    blt lbl_fn_80094420_00001828
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80094778(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_800DC6B4
    lwz r5, 0xd8(r31)
    li r0, -0x1
    li r6, 0x0
    li r4, 0x0
    mtctr r5
    cmplwi r5, 0x0
    ble lbl_fn_80094778_0000190C
lbl_fn_80094778_000018E8:
    lwz r5, 0xe0(r31)
    lwzx r5, r5, r4
    cmplw r3, r5
    bne lbl_fn_80094778_00001900
    mr r0, r6
    b lbl_fn_80094778_0000190C
lbl_fn_80094778_00001900:
    addi r6, r6, 0x1
    addi r4, r4, 0x2c
    bdnz lbl_fn_80094778_000018E8
lbl_fn_80094778_0000190C:
    cmpwi r0, 0x0
    blt lbl_fn_80094778_00001A14
    lwz r4, 0xd8(r31)
    mulli r3, r0, 0x2c
    lwz r5, 0xe0(r31)
    mulli r6, r4, 0x2c
    add r4, r5, r3
    add r3, r5, r6
    cmplw r4, r3
    beq lbl_fn_80094778_000019C4
    lis r3, 0x2e8c
    subf r4, r5, r4
    subi r3, r3, 0x5d17
    mulhw r3, r3, r4
    srawi r3, r3, 3
    srwi r4, r3, 31
    add r7, r3, r4
    mulli r3, r7, 0x2c
    b lbl_fn_80094778_000019B0
lbl_fn_80094778_00001958:
    addi r4, r7, 0x1
    lwz r5, 0xe0(r31)
    mulli r4, r4, 0x2c
    addi r7, r7, 0x1
    add r6, r5, r3
    addi r3, r3, 0x2c
    lwzux r4, r5, r4
    stw r4, 0x0(r6)
    lwz r4, 0x4(r5)
    stw r4, 0x4(r6)
    lfs f2, 0x10(r5)
    psq_l f1, 0x8(r5), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r5)
    psq_l f1, 0x14(r5), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r5)
    psq_l f1, 0x20(r5), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
lbl_fn_80094778_000019B0:
    lwz r4, 0xd8(r31)
    subi r4, r4, 0x1
    cmplw r7, r4
    blt lbl_fn_80094778_00001958
    stw r4, 0xd8(r31)
lbl_fn_80094778_000019C4:
    li r7, 0x0
    li r3, 0x0
    li r5, -0x1
    b lbl_fn_80094778_00001A04
lbl_fn_80094778_000019D4:
    lwz r6, 0xe8(r31)
    lhax r4, r6, r3
    cmpw r0, r4
    bne lbl_fn_80094778_000019EC
    sthx r5, r6, r3
    b lbl_fn_80094778_000019FC
lbl_fn_80094778_000019EC:
    cmpw r4, r0
    ble lbl_fn_80094778_000019FC
    subi r4, r4, 0x1
    sthx r4, r6, r3
lbl_fn_80094778_000019FC:
    addi r7, r7, 0x1
    addi r3, r3, 0x2
lbl_fn_80094778_00001A04:
    lwz r4, 0x16c(r31)
    lwz r4, 0x44(r4)
    cmpw r7, r4
    blt lbl_fn_80094778_000019D4
lbl_fn_80094778_00001A14:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800948F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_800DC6B4
    lwz r0, 0xd8(r31)
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_800948F0_00001A78
lbl_fn_800948F0_00001A58:
    lwz r5, 0xe0(r31)
    lwzx r0, r5, r4
    cmplw r3, r0
    bne lbl_fn_800948F0_00001A70
    add r3, r5, r4
    b lbl_fn_800948F0_00001A7C
lbl_fn_800948F0_00001A70:
    addi r4, r4, 0x2c
    bdnz lbl_fn_800948F0_00001A58
lbl_fn_800948F0_00001A78:
    li r3, 0x0
lbl_fn_800948F0_00001A7C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80094958(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_23
    mr r28, r3
    mr r3, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bl fn_800DC6B4
    lfs f0, lbl_80880C14
    li r5, 0x0
    li r4, 0x0
    b lbl_fn_80094958_00001C80
lbl_fn_80094958_00001ACC:
    lwz r6, 0x108(r28)
    lwzx r6, r6, r4
    lwz r0, 0x0(r6)
    cmplw r0, r3
    bne lbl_fn_80094958_00001C78
    lfs f1, 0x0(r29)
    lfs f3, 0x4(r29)
    fmuls f6, f0, f1
    lfs f2, 0x8(r29)
    lfs f1, 0xc(r29)
    fmuls f5, f0, f3
    fmuls f4, f0, f2
    lfs f2, 0x0(r30)
    fmuls f3, f0, f1
    lfs f1, 0x4(r30)
    fctiwz f8, f6
    fctiwz f7, f5
    fctiwz f6, f4
    stfd f8, 0x20(r1)
    fctiwz f5, f3
    fmuls f4, f0, f2
    lfs f2, 0x8(r30)
    stfd f5, 0x38(r1)
    fmuls f3, f0, f1
    lfs f1, 0xc(r30)
    fctiwz f5, f4
    stfd f7, 0x28(r1)
    fmuls f2, f0, f2
    fctiwz f4, f3
    stfd f6, 0x30(r1)
    fmuls f1, f0, f1
    fctiwz f3, f2
    lwz r23, 0x24(r1)
    lwz r24, 0x2c(r1)
    fctiwz f2, f1
    stfd f3, 0x50(r1)
    lwz r25, 0x34(r1)
    stfd f2, 0x58(r1)
    lwz r26, 0x3c(r1)
    lfs f1, 0x0(r31)
    stfd f5, 0x40(r1)
    lwz r11, 0x54(r1)
    fmuls f1, f0, f1
    stfd f4, 0x48(r1)
    lwz r27, 0x44(r1)
    fctiwz f4, f1
    lwz r12, 0x4c(r1)
    lwz r10, 0x5c(r1)
    lfs f3, 0x4(r31)
    lfs f2, 0x8(r31)
    lfs f1, 0xc(r31)
    fmuls f3, f0, f3
    fmuls f2, f0, f2
    stfd f4, 0x60(r1)
    fmuls f1, f0, f1
    fctiwz f3, f3
    lwz r9, 0x64(r1)
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x68(r1)
    stfd f2, 0x70(r1)
    lwz r8, 0x6c(r1)
    stfd f1, 0x78(r1)
    lwz r7, 0x74(r1)
    lwz r0, 0x7c(r1)
    stb r23, 0x10(r1)
    stb r24, 0x11(r1)
    stb r25, 0x12(r1)
    stb r26, 0x13(r1)
    lwz r26, 0x10(r1)
    stw r26, 0x1c(r1)
    lbz r26, 0x1c(r1)
    stb r26, 0x18(r6)
    lbz r26, 0x1d(r1)
    stb r27, 0xc(r1)
    lbz r27, 0x1f(r1)
    stb r26, 0x19(r6)
    lbz r26, 0x1e(r1)
    stb r26, 0x1a(r6)
    stb r12, 0xd(r1)
    stb r11, 0xe(r1)
    stb r10, 0xf(r1)
    lwz r10, 0xc(r1)
    stw r10, 0x18(r1)
    stb r27, 0x1b(r6)
    lbz r10, 0x18(r1)
    stb r10, 0x20(r6)
    lbz r10, 0x19(r1)
    stb r10, 0x21(r6)
    lbz r10, 0x1a(r1)
    stb r10, 0x22(r6)
    lbz r10, 0x1b(r1)
    stb r10, 0x23(r6)
    stb r9, 0x8(r1)
    stb r8, 0x9(r1)
    stb r7, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x14(r1)
    lbz r0, 0x14(r1)
    stb r0, 0x1c(r6)
    lbz r0, 0x15(r1)
    stb r0, 0x1d(r6)
    lbz r0, 0x16(r1)
    stb r0, 0x1e(r6)
    lbz r0, 0x17(r1)
    stb r0, 0x1f(r6)
lbl_fn_80094958_00001C78:
    addi r4, r4, 0x4
    addi r5, r5, 0x1
lbl_fn_80094958_00001C80:
    lwz r0, 0x104(r28)
    cmplw r5, r0
    blt lbl_fn_80094958_00001ACC
    addi r11, r1, 0xb0
    bl _restgpr_23
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_80094B6C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_800DC6B4
    lwz r0, 0x104(r31)
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80094B6C_00001CF8
lbl_fn_80094B6C_00001CD4:
    lwz r4, 0x108(r31)
    lwzx r4, r4, r5
    lwz r0, 0x0(r4)
    cmplw r0, r3
    bne lbl_fn_80094B6C_00001CF0
    mr r3, r4
    b lbl_fn_80094B6C_00001CFC
lbl_fn_80094B6C_00001CF0:
    addi r5, r5, 0x4
    bdnz lbl_fn_80094B6C_00001CD4
lbl_fn_80094B6C_00001CF8:
    li r3, 0x0
lbl_fn_80094B6C_00001CFC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80094BD8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x4
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r31, r3
    mr r25, r4
    bne lbl_fn_80094BD8_00001DB8
    lwz r28, 0x104(r3)
    li r27, 0x0
    li r29, 0x0
    li r30, -0x1
    b lbl_fn_80094BD8_00001DAC
lbl_fn_80094BD8_00001D44:
    lwz r3, 0x108(r31)
    lwzx r26, r3, r29
    lwz r3, 0x14(r26)
    srwi r0, r3, 31
    cmpwi r0, 0x1
    bne lbl_fn_80094BD8_00001D78
    mr r3, r26
    li r4, 0x7
    bl fn_8007FAF0
    lbz r0, 0x48(r26)
    ori r0, r0, 0x2
    stb r0, 0x48(r26)
    b lbl_fn_80094BD8_00001DA4
lbl_fn_80094BD8_00001D78:
    extrwi r0, r3, 1, 12
    cmpwi r0, 0x1
    bne lbl_fn_80094BD8_00001D8C
    stw r30, 0x44(r26)
    b lbl_fn_80094BD8_00001DA4
lbl_fn_80094BD8_00001D8C:
    mr r3, r26
    mr r4, r25
    bl fn_8007FAF0
    lbz r0, 0x48(r26)
    ori r0, r0, 0x2
    stb r0, 0x48(r26)
lbl_fn_80094BD8_00001DA4:
    addi r29, r29, 0x4
    addi r27, r27, 0x1
lbl_fn_80094BD8_00001DAC:
    cmplw r27, r28
    blt lbl_fn_80094BD8_00001D44
    b lbl_fn_80094BD8_00001EA0
lbl_fn_80094BD8_00001DB8:
    cmpwi r4, 0x3
    bne lbl_fn_80094BD8_00001E14
    lwz r26, 0x104(r3)
    li r27, 0x0
    li r29, 0x0
    b lbl_fn_80094BD8_00001E08
lbl_fn_80094BD8_00001DD0:
    lwz r3, 0x108(r31)
    lwzx r28, r3, r29
    lwz r0, 0x14(r28)
    srwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_fn_80094BD8_00001E00
    mr r3, r28
    li r4, 0x8
    bl fn_8007FAF0
    lbz r0, 0x48(r28)
    rlwinm r0, r0, 0, 31, 29
    stb r0, 0x48(r28)
lbl_fn_80094BD8_00001E00:
    addi r29, r29, 0x4
    addi r27, r27, 0x1
lbl_fn_80094BD8_00001E08:
    cmplw r27, r26
    blt lbl_fn_80094BD8_00001DD0
    b lbl_fn_80094BD8_00001EA0
lbl_fn_80094BD8_00001E14:
    cmpwi r4, 0x1
    bne lbl_fn_80094BD8_00001EA0
    lwz r26, 0x104(r3)
    li r27, 0x0
    li r29, 0x0
    li r30, -0x1
    b lbl_fn_80094BD8_00001E98
lbl_fn_80094BD8_00001E30:
    lwz r3, 0x108(r31)
    lwzx r28, r3, r29
    lwz r0, 0x14(r28)
    srwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_fn_80094BD8_00001E64
    mr r3, r28
    li r4, 0x8
    bl fn_8007FAF0
    lbz r0, 0x48(r28)
    rlwinm r0, r0, 0, 31, 29
    stb r0, 0x48(r28)
    b lbl_fn_80094BD8_00001E90
lbl_fn_80094BD8_00001E64:
    lbz r0, 0x48(r28)
    rlwinm. r0, r0, 0, 31, 29
    bne lbl_fn_80094BD8_00001E78
    stw r30, 0x44(r28)
    b lbl_fn_80094BD8_00001E90
lbl_fn_80094BD8_00001E78:
    mr r3, r28
    li r4, 0x1
    bl fn_8007FAF0
    lbz r0, 0x48(r28)
    rlwinm r0, r0, 0, 31, 29
    stb r0, 0x48(r28)
lbl_fn_80094BD8_00001E90:
    addi r29, r29, 0x4
    addi r27, r27, 0x1
lbl_fn_80094BD8_00001E98:
    cmplw r27, r26
    blt lbl_fn_80094BD8_00001E30
lbl_fn_80094BD8_00001EA0:
    mr r3, r31
    addi r4, r31, 0x104
    bl fn_8008C850
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80094D88(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r22, 0x8(r1)
    mr r22, r3
    mr r23, r4
    mr r24, r5
    cntlzw r29, r6
    cntlzw r30, r7
    cntlzw r31, r8
    li r26, 0x0
    li r28, 0x0
    lwz r27, 0x104(r3)
    b lbl_fn_80094D88_00001F3C
lbl_fn_80094D88_00001EF8:
    lwz r3, 0x108(r22)
    mr r4, r23
    lwzx r25, r3, r28
    mr r3, r25
    bl fn_8007FAF0
    cmpwi r24, 0x0
    li r0, 0x3
    beq lbl_fn_80094D88_00001F1C
    li r0, 0x0
lbl_fn_80094D88_00001F1C:
    stb r0, 0x4c(r25)
    addi r28, r28, 0x4
    addi r26, r26, 0x1
    lwz r0, 0x14(r25)
    rlwimi r0, r29, 6, 20, 20
    rlwimi r0, r30, 5, 21, 21
    rlwimi r0, r31, 1, 25, 25
    stw r0, 0x14(r25)
lbl_fn_80094D88_00001F3C:
    cmplw r26, r27
    blt lbl_fn_80094D88_00001EF8
    mr r3, r22
    addi r4, r22, 0x104
    bl fn_8008C850
    lmw r22, 0x8(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80094E2C(void)
{
    nofralloc
    lwz r6, 0x104(r3)
    li r7, 0x0
    cmpwi r6, 0x0
    beqlr
    cmplwi r6, 0x8
    subi r8, r6, 0x8
    ble lbl_fn_80094E2C_00002020
    addi r0, r8, 0x7
    li r5, 0x0
    srwi r0, r0, 3
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_80094E2C_00002020
lbl_fn_80094E2C_00001F98:
    lwz r8, 0x108(r3)
    addi r7, r7, 0x8
    lwzx r8, r8, r5
    stw r4, 0x34(r8)
    lwz r0, 0x108(r3)
    add r8, r0, r5
    lwz r8, 0x4(r8)
    stw r4, 0x34(r8)
    lwz r0, 0x108(r3)
    add r8, r0, r5
    lwz r8, 0x8(r8)
    stw r4, 0x34(r8)
    lwz r0, 0x108(r3)
    add r8, r0, r5
    lwz r8, 0xc(r8)
    stw r4, 0x34(r8)
    lwz r0, 0x108(r3)
    add r8, r0, r5
    lwz r8, 0x10(r8)
    stw r4, 0x34(r8)
    lwz r0, 0x108(r3)
    add r8, r0, r5
    lwz r8, 0x14(r8)
    stw r4, 0x34(r8)
    lwz r0, 0x108(r3)
    add r8, r0, r5
    lwz r8, 0x18(r8)
    stw r4, 0x34(r8)
    lwz r0, 0x108(r3)
    add r8, r0, r5
    addi r5, r5, 0x20
    lwz r8, 0x1c(r8)
    stw r4, 0x34(r8)
    bdnz lbl_fn_80094E2C_00001F98
lbl_fn_80094E2C_00002020:
    subf r0, r7, r6
    slwi r8, r7, 2
    mtctr r0
    cmplw r7, r6
    bgelr
lbl_fn_80094E2C_00002034:
    lwz r5, 0x108(r3)
    lwzx r5, r5, r8
    addi r8, r8, 0x4
    stw r4, 0x34(r5)
    bdnz lbl_fn_80094E2C_00002034
    blr
}

asm void fn_80094F14(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x28(r1)
    fmr f31, f2
    stfd f30, 0x20(r1)
    fmr f30, f1
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    b lbl_fn_80094F14_000020A0
lbl_fn_80094F14_00002084:
    lwz r3, 0x108(r29)
    fmr f1, f30
    fmr f2, f31
    lwzx r3, r3, r31
    bl fn_80081514
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_80094F14_000020A0:
    lwz r0, 0x104(r29)
    cmplw r30, r0
    blt lbl_fn_80094F14_00002084
    lwz r0, 0x34(r1)
    lfd f31, 0x28(r1)
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
