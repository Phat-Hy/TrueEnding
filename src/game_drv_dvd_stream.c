#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void fn_8003E918(void);
extern void fn_8006F72C(void);
extern void fn_800CB3A0(void);
extern void fn_800DBF68(void);
extern void fn_800FDE60(void);
extern void fn_801333E4(void);
extern void fn_8016F824(void);
extern void fn_8016FDCC(void);
extern void fn_8017039C(void);
extern void fn_80171DB0(void);
extern void fn_801781B0(void);
extern void fn_80219EC4(void);
extern void fn_805A70D8(void);
extern void fn_805AF618(void);
extern void fn_805B01C4(void);
extern void fn_805B0D70(void);
extern void fn_805B38A0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9920(void);
extern void fn_80680CF8(void);
extern void fn_806958E0(void);

/* External data declarations */
extern u8 lbl_80763C28[];
extern u8 lbl_80763C30[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C95B0[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087FA00;
extern u32 lbl_808882F8;
extern u32 lbl_80888368;
extern u32 lbl_8088836C;
extern u32 lbl_80888370;
extern u32 lbl_80888374;
extern u32 lbl_80888378;

/* Function declarations */
void fn_805ADB2C(void);
void fn_805ADC04(void);
void fn_805ADC14(void);
void fn_805ADC24(void);
void fn_805ADCC4(void);
void fn_805ADD40(void);
void fn_805ADD84(void);
void fn_805ADDD8(void);
void fn_805ADF54(void);
void fn_805AE038(void);
void fn_805AE13C(void);
void fn_805AE18C(void);
void fn_805AE250(void);
void fn_805AE270(void);
void fn_805AE3C8(void);
void fn_805AE458(void);
void fn_805AE5EC(void);
void fn_805AE750(void);
void fn_805AE7B8(void);
void fn_805AE868(void);
void fn_805AE9BC(void);
void fn_805AE9D4(void);
void fn_805AEA0C(void);
void fn_805AEA44(void);
void fn_805AEA74(void);
void fn_805AEAC4(void);
void fn_805AEB38(void);
void fn_805AEC50(void);
void fn_805AED78(void);
void fn_805AEFA0(void);
void fn_805AF1C8(void);
void fn_805AF3F0(void);

asm void fn_805ADB2C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x0
    stmw r27, 0x1c(r1)
    mr r27, r3
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    lwz r0, 0x0(r4)
    srwi. r0, r0, 31
    bne lbl_fn_805ADB2C_00000040
    lbz r0, 0x0(r4)
    addi r29, r4, 0x2
    clrlwi r31, r0, 25
    b lbl_fn_805ADB2C_00000048
lbl_fn_805ADB2C_00000040:
    lwz r29, 0x8(r4)
    lwz r31, 0x4(r4)
lbl_fn_805ADB2C_00000048:
    lwz r0, 0x0(r5)
    srwi. r0, r0, 31
    bne lbl_fn_805ADB2C_00000064
    lbz r0, 0x0(r5)
    addi r28, r5, 0x2
    clrlwi r30, r0, 25
    b lbl_fn_805ADB2C_0000006C
lbl_fn_805ADB2C_00000064:
    lwz r28, 0x8(r5)
    lwz r30, 0x4(r5)
lbl_fn_805ADB2C_0000006C:
    mr r3, r27
    add r4, r31, r30
    bl fn_800DBF68
    lbz r3, 0x14(r1)
    slwi r0, r31, 1
    stb r3, 0x10(r1)
    mr r3, r27
    mr r6, r29
    add r7, r29, r0
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    lbz r4, 0xc(r1)
    slwi r0, r30, 1
    stb r4, 0x8(r1)
    mr r4, r31
    mr r6, r28
    add r7, r28, r0
    addi r8, r1, 0x8
    li r5, 0x0
    bl fn_8006F72C
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805ADC04(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x1594(r3)
    stw r0, 0x15fc(r3)
    blr
}

asm void fn_805ADC14(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x1594(r3)
    stw r0, 0x15fc(r3)
    blr
}

asm void fn_805ADC24(void)
{
    nofralloc
    cmpwi r4, 0x0
    beqlr
    cmpwi r5, 0x0
    bne lbl_fn_805ADC24_0000010C
    blr
lbl_fn_805ADC24_0000010C:
    lwz r0, 0x15fc(r3)
    addi r6, r3, 0x1600
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_805ADC24_00000164
lbl_fn_805ADC24_00000120:
    lwz r0, 0x0(r6)
    cmplw r0, r4
    bne lbl_fn_805ADC24_0000015C
    lwz r0, 0x8(r6)
    cmpwi r0, 0x0
    beq lbl_fn_805ADC24_0000015C
    stw r5, 0x4(r6)
    lwz r3, 0x8(r6)
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    bnelr
    ori r0, r3, 0x1
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x8(r6)
    blr
lbl_fn_805ADC24_0000015C:
    addi r6, r6, 0xc
    bdnz lbl_fn_805ADC24_00000120
lbl_fn_805ADC24_00000164:
    lwz r0, 0x15fc(r3)
    mulli r0, r0, 0xc
    add r0, r3, r0
    addic. r6, r0, 0x1600
    beq lbl_fn_805ADC24_00000188
    stw r4, 0x0(r6)
    li r0, 0x1
    stw r5, 0x4(r6)
    stw r0, 0x8(r6)
lbl_fn_805ADC24_00000188:
    lwz r4, 0x15fc(r3)
    addi r0, r4, 0x1
    stw r0, 0x15fc(r3)
    blr
}

asm void fn_805ADCC4(void)
{
    nofralloc
    lwz r0, 0x15fc(r3)
    addi r3, r3, 0x1600
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_805ADCC4_0000020C
lbl_fn_805ADCC4_000001AC:
    lwz r0, 0x0(r3)
    cmplw r0, r4
    bne lbl_fn_805ADCC4_00000204
    cmpwi r5, 0x0
    beq lbl_fn_805ADCC4_000001CC
    lwz r0, 0x4(r3)
    cmplw r0, r5
    bne lbl_fn_805ADCC4_00000204
lbl_fn_805ADCC4_000001CC:
    cmpwi r6, 0x0
    beq lbl_fn_805ADCC4_000001E8
    lwz r0, 0x8(r3)
    cmplwi r0, 0x1
    bgt lbl_fn_805ADCC4_000001E8
    li r3, 0x1
    blr
lbl_fn_805ADCC4_000001E8:
    cmpwi r6, 0x0
    bne lbl_fn_805ADCC4_00000204
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805ADCC4_00000204
    li r3, 0x1
    blr
lbl_fn_805ADCC4_00000204:
    addi r3, r3, 0xc
    bdnz lbl_fn_805ADCC4_000001AC
lbl_fn_805ADCC4_0000020C:
    li r3, 0x0
    blr
}

asm void fn_805ADD40(void)
{
    nofralloc
    lwz r0, 0x15fc(r3)
    addi r3, r3, 0x1600
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_805ADD40_00000250
lbl_fn_805ADD40_00000228:
    lwz r0, 0x0(r3)
    cmplw r0, r4
    bne lbl_fn_805ADD40_00000248
    lwz r0, 0x8(r3)
    cmplwi r0, 0x1
    bgt lbl_fn_805ADD40_00000248
    lwz r3, 0x4(r3)
    blr
lbl_fn_805ADD40_00000248:
    addi r3, r3, 0xc
    bdnz lbl_fn_805ADD40_00000228
lbl_fn_805ADD40_00000250:
    li r3, 0x0
    blr
}

asm void fn_805ADD84(void)
{
    nofralloc
    li r8, 0x0
    addi r7, r3, 0x1600
    ori r6, r8, 0x2
    b lbl_fn_805ADD84_0000029C
lbl_fn_805ADD84_00000268:
    lwz r0, 0x0(r7)
    cmplw r0, r4
    bne lbl_fn_805ADD84_00000294
    lwz r0, 0x4(r7)
    cmplw r0, r5
    bne lbl_fn_805ADD84_00000294
    lwz r0, 0x8(r7)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_805ADD84_00000294
    stw r6, 0x8(r7)
lbl_fn_805ADD84_00000294:
    addi r7, r7, 0xc
    addi r8, r8, 0x1
lbl_fn_805ADD84_0000029C:
    lwz r0, 0x15fc(r3)
    cmplw r8, r0
    blt lbl_fn_805ADD84_00000268
    blr
}

asm void fn_805ADDD8(void)
{
    nofralloc
    addi r6, r3, 0x1600
    li r8, 0x0
    b lbl_fn_805ADDD8_00000348
lbl_fn_805ADDD8_000002B8:
    cmpwi r4, 0x0
    beq lbl_fn_805ADDD8_000002CC
    lwz r0, 0x0(r6)
    cmplw r0, r4
    bne lbl_fn_805ADDD8_00000340
lbl_fn_805ADDD8_000002CC:
    lwz r7, 0x8(r6)
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    bne lbl_fn_805ADDD8_0000032C
    addi r7, r3, 0x1600
    mtctr r5
    cmplwi r5, 0x0
    ble lbl_fn_805ADDD8_00000340
lbl_fn_805ADDD8_000002EC:
    lwz r5, 0x0(r7)
    lwz r0, 0x0(r6)
    cmplw r5, r0
    bne lbl_fn_805ADDD8_00000320
    lwz r0, 0x8(r7)
    cmpwi r0, 0x0
    bne lbl_fn_805ADDD8_00000320
    lwz r0, 0x4(r6)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r6)
    ori r0, r0, 0x4
    stw r0, 0x8(r6)
    b lbl_fn_805ADDD8_00000340
lbl_fn_805ADDD8_00000320:
    addi r7, r7, 0xc
    bdnz lbl_fn_805ADDD8_000002EC
    b lbl_fn_805ADDD8_00000340
lbl_fn_805ADDD8_0000032C:
    rlwinm r0, r7, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_805ADDD8_00000340
    ori r0, r7, 0x4
    stw r0, 0x8(r6)
lbl_fn_805ADDD8_00000340:
    addi r6, r6, 0xc
    addi r8, r8, 0x1
lbl_fn_805ADDD8_00000348:
    lwz r5, 0x15fc(r3)
    cmplw r8, r5
    blt lbl_fn_805ADDD8_000002B8
    addi r8, r3, 0x1600
    lis r5, 0x2aab
    b lbl_fn_805ADDD8_000003D4
lbl_fn_805ADDD8_00000360:
    lwz r0, 0x8(r8)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_805ADDD8_000003D0
    addi r0, r3, 0x1600
    subi r4, r5, 0x5555
    subf r0, r0, r8
    mulhw r0, r4, r0
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r6, r0, r4
    mulli r0, r6, 0xc
    add r7, r3, r0
    b lbl_fn_805ADDD8_000003B8
lbl_fn_805ADDD8_00000398:
    lwz r0, 0x160c(r7)
    addi r6, r6, 0x1
    stw r0, 0x1600(r7)
    lwz r0, 0x1610(r7)
    stw r0, 0x1604(r7)
    lwz r0, 0x1614(r7)
    stw r0, 0x1608(r7)
    addi r7, r7, 0xc
lbl_fn_805ADDD8_000003B8:
    lwz r4, 0x15fc(r3)
    subi r0, r4, 0x1
    cmplw r6, r0
    blt lbl_fn_805ADDD8_00000398
    stw r0, 0x15fc(r3)
    b lbl_fn_805ADDD8_000003D4
lbl_fn_805ADDD8_000003D0:
    addi r8, r8, 0xc
lbl_fn_805ADDD8_000003D4:
    lwz r0, 0x15fc(r3)
    mulli r0, r0, 0xc
    add r4, r3, r0
    addi r0, r4, 0x1600
    cmplw r8, r0
    bne lbl_fn_805ADDD8_00000360
    addi r6, r3, 0x1600
    li r5, 0x0
    b lbl_fn_805ADDD8_0000040C
lbl_fn_805ADDD8_000003F8:
    lwz r0, 0x8(r6)
    cmpwi r0, 0x0
    beq lbl_fn_805ADDD8_00000408
    stw r5, 0x8(r6)
lbl_fn_805ADDD8_00000408:
    addi r6, r6, 0xc
lbl_fn_805ADDD8_0000040C:
    lwz r0, 0x15fc(r3)
    mulli r0, r0, 0xc
    add r4, r3, r0
    addi r0, r4, 0x1600
    cmplw r6, r0
    bne lbl_fn_805ADDD8_000003F8
    blr
}

asm void fn_805ADF54(void)
{
    nofralloc
    addi r5, r3, 0x1600
    li r6, 0x0
    b lbl_fn_805ADF54_00000464
lbl_fn_805ADF54_00000434:
    cmpwi r4, 0x0
    beq lbl_fn_805ADF54_00000448
    lwz r0, 0x0(r5)
    cmplw r0, r4
    bne lbl_fn_805ADF54_0000045C
lbl_fn_805ADF54_00000448:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_805ADF54_0000045C
    ori r0, r0, 0x4
    stw r0, 0x8(r5)
lbl_fn_805ADF54_0000045C:
    addi r5, r5, 0xc
    addi r6, r6, 0x1
lbl_fn_805ADF54_00000464:
    lwz r0, 0x15fc(r3)
    cmplw r6, r0
    blt lbl_fn_805ADF54_00000434
    addi r8, r3, 0x1600
    lis r5, 0x2aab
    b lbl_fn_805ADF54_000004F0
lbl_fn_805ADF54_0000047C:
    lwz r0, 0x8(r8)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_805ADF54_000004EC
    addi r0, r3, 0x1600
    subi r4, r5, 0x5555
    subf r0, r0, r8
    mulhw r0, r4, r0
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r6, r0, r4
    mulli r0, r6, 0xc
    add r7, r3, r0
    b lbl_fn_805ADF54_000004D4
lbl_fn_805ADF54_000004B4:
    lwz r0, 0x160c(r7)
    addi r6, r6, 0x1
    stw r0, 0x1600(r7)
    lwz r0, 0x1610(r7)
    stw r0, 0x1604(r7)
    lwz r0, 0x1614(r7)
    stw r0, 0x1608(r7)
    addi r7, r7, 0xc
lbl_fn_805ADF54_000004D4:
    lwz r4, 0x15fc(r3)
    subi r0, r4, 0x1
    cmplw r6, r0
    blt lbl_fn_805ADF54_000004B4
    stw r0, 0x15fc(r3)
    b lbl_fn_805ADF54_000004F0
lbl_fn_805ADF54_000004EC:
    addi r8, r8, 0xc
lbl_fn_805ADF54_000004F0:
    lwz r0, 0x15fc(r3)
    mulli r0, r0, 0xc
    add r4, r3, r0
    addi r0, r4, 0x1600
    cmplw r8, r0
    bne lbl_fn_805ADF54_0000047C
    blr
}

asm void fn_805AE038(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    beq lbl_fn_805AE038_000005BC
    lwz r6, 0x15f0(r3)
    lwz r5, 0x15f4(r3)
    lwz r0, 0x15f8(r3)
    cmpwi r6, 0x2
    stw r6, 0x14(r1)
    stw r5, 0x18(r1)
    stw r0, 0x1c(r1)
    beq lbl_fn_805AE038_00000560
    cmpwi r6, 0x1
    bne lbl_fn_805AE038_000005AC
    cmplw r0, r4
    beq lbl_fn_805AE038_000005AC
lbl_fn_805AE038_00000560:
    lwz r3, 0x8(r4)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_805AE038_00000590
    lfs f1, lbl_808882F8
    addi r3, r1, 0x10
    li r4, 0x8
    bl fn_805A70D8
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_805AE038_000005AC
lbl_fn_805AE038_00000590:
    lfs f1, lbl_808882F8
    addi r3, r1, 0xc
    li r4, 0x7
    bl fn_805A70D8
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_805AE038_000005AC:
    li r0, 0x1
    stw r0, 0x15f0(r30)
    stw r31, 0x15f8(r30)
    b lbl_fn_805AE038_000005F8
lbl_fn_805AE038_000005BC:
    lwz r0, 0x15f0(r3)
    cmpwi r0, 0x2
    beq lbl_fn_805AE038_000005E4
    lfs f1, lbl_808882F8
    addi r3, r1, 0x8
    li r4, 0x9
    bl fn_805A70D8
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_805AE038_000005E4:
    li r0, 0x0
    li r3, 0x2
    stw r3, 0x15f0(r30)
    stw r0, 0x15f4(r30)
    stw r0, 0x15f8(r30)
lbl_fn_805AE038_000005F8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805AE13C(void)
{
    nofralloc
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805AE13C_00000624
    lwz r4, 0x4(r4)
    b fn_801781B0
lbl_fn_805AE13C_00000624:
    cmpwi r0, 0x1
    bne lbl_fn_805AE13C_00000644
    lwz r4, 0x8(r4)
    psq_l f1, 0x10(r4), 0, 0
    lfs f2, 0x18(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
lbl_fn_805AE13C_00000644:
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_805AE18C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x1
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    stw r29, 0x0(r3)
    stw r29, 0x4(r3)
    stw r30, 0x8(r3)
    stw r29, 0xc(r3)
    stw r29, 0x10(r3)
    stw r29, 0x14(r3)
    addi r3, r3, 0x18
    bl fn_8003E918
    li r31, -0x1
    stw r31, 0x4c(r28)
    addi r3, r28, 0x54
    li r4, 0x0
    li r5, 0x10
    bl memset
    stw r31, 0x64(r28)
    stw r31, 0x74(r28)
    stb r30, 0x50(r28)
    stw r31, 0x84(r28)
    stw r31, 0x68(r28)
    stw r31, 0x78(r28)
    stb r30, 0x51(r28)
    stw r31, 0x88(r28)
    stw r31, 0x6c(r28)
    stw r31, 0x7c(r28)
    stb r30, 0x52(r28)
    stw r31, 0x8c(r28)
    stw r31, 0x70(r28)
    stw r31, 0x80(r28)
    stb r30, 0x53(r28)
    stw r31, 0x90(r28)
    stw r29, 0x94(r28)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805AE250(void)
{
    nofralloc
    lis r3, lbl_807C95B0@ha
    lis r4, fn_80219EC4@ha
    addi r3, r3, lbl_807C95B0@l
    li r5, 0x0
    addi r4, r4, fn_80219EC4@l
    li r6, 0xd0
    li r7, 0x6
    b fn_806958E0
}

asm void fn_805AE270(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stb r4, 0x23d(r3)
    stw r5, 0x218(r3)
    lwz r4, 0x8(r5)
    cmpwi r4, 0x0
    bne lbl_fn_805AE270_000007A8
    cmpwi r5, 0x0
    beq lbl_fn_805AE270_0000077C
    lwz r4, 0x8(r5)
    b lbl_fn_805AE270_00000780
lbl_fn_805AE270_0000077C:
    li r4, 0x0
lbl_fn_805AE270_00000780:
    cmplwi r4, 0x2
    bgt lbl_fn_805AE270_00000794
    li r0, 0x1
    stb r4, 0x23f(r3)
    stw r0, 0x378(r3)
lbl_fn_805AE270_00000794:
    li r4, 0x0
    li r0, 0x1
    stb r4, 0x23f(r3)
    stw r0, 0x378(r3)
    b lbl_fn_805AE270_000007BC
lbl_fn_805AE270_000007A8:
    cmplwi r4, 0x2
    bgt lbl_fn_805AE270_000007BC
    li r0, 0x1
    stb r4, 0x23f(r3)
    stw r0, 0x378(r3)
lbl_fn_805AE270_000007BC:
    lwz r4, 0x370(r3)
    li r6, 0x0
    lwz r0, 0x374(r3)
    li r5, 0x1
    stb r6, 0x243(r3)
    cmpw r4, r0
    stb r6, 0x244(r3)
    stw r5, 0x378(r3)
    beq lbl_fn_805AE270_00000808
    lwz r0, 0x370(r3)
    add r4, r3, r0
    stb r6, 0x350(r4)
    lwz r4, 0x370(r3)
    addi r4, r4, 0x1
    stw r4, 0x370(r3)
    cmpwi r4, 0x20
    blt lbl_fn_805AE270_00000808
    subi r0, r4, 0x20
    stw r0, 0x370(r3)
lbl_fn_805AE270_00000808:
    li r0, 0x1
    stw r0, 0x378(r3)
    li r4, 0x0
    li r5, 0x80
    addi r3, r3, 0x2d0
    bl memset
    addi r3, r31, 0x250
    li r4, 0x0
    li r5, 0x80
    bl memset
    li r0, 0x0
    stb r0, 0x24c(r31)
    mr r4, r31
    lwz r3, lbl_8087FA00
    bl fn_805B38A0
    cmpwi r3, 0x0
    beq lbl_fn_805AE270_00000860
    mr r3, r31
    addi r4, r31, 0x250
    li r5, 0x0
    bl fn_805AEC50
    stb r3, 0x24c(r31)
lbl_fn_805AE270_00000860:
    mr r5, r31
    li r4, 0x0
    b lbl_fn_805AE270_0000087C
lbl_fn_805AE270_0000086C:
    lwz r3, 0x250(r5)
    addi r5, r5, 0x4
    addi r4, r4, 0x1
    stw r31, 0xd2c(r3)
lbl_fn_805AE270_0000087C:
    lbz r0, 0x24c(r31)
    cmpw r4, r0
    blt lbl_fn_805AE270_0000086C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805AE3C8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x80
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x250
    bl memset
    li r0, 0x0
    stb r0, 0x24c(r31)
    mr r4, r31
    lwz r3, lbl_8087FA00
    bl fn_805B38A0
    cmpwi r3, 0x0
    beq lbl_fn_805AE3C8_000008F0
    mr r3, r31
    addi r4, r31, 0x250
    li r5, 0x0
    bl fn_805AEC50
    stb r3, 0x24c(r31)
lbl_fn_805AE3C8_000008F0:
    mr r4, r31
    li r5, 0x0
    b lbl_fn_805AE3C8_0000090C
lbl_fn_805AE3C8_000008FC:
    lwz r3, 0x250(r4)
    addi r4, r4, 0x4
    addi r5, r5, 0x1
    stw r31, 0xd2c(r3)
lbl_fn_805AE3C8_0000090C:
    lbz r0, 0x24c(r31)
    cmpw r5, r0
    blt lbl_fn_805AE3C8_000008FC
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805AE458(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    li r0, 0x0
    lfs f2, lbl_80888368
    li r4, 0x0
    stw r31, 0x1c(r1)
    lbz r8, 0x24c(r3)
    cmpwi cr1, r8, 0x0
    ble cr1, lbl_fn_805AE458_00000A78
    cmpwi r8, 0x8
    subi r6, r8, 0x8
    ble lbl_fn_805AE458_00000A40
    li r7, 0x0
    blt cr1, lbl_fn_805AE458_00000974
    lis r5, 0x8000
    subi r5, r5, 0x2
    cmpw r8, r5
    bgt lbl_fn_805AE458_00000974
    li r7, 0x1
lbl_fn_805AE458_00000974:
    cmpwi r7, 0x0
    beq lbl_fn_805AE458_00000A40
    addi r5, r6, 0x7
    mr r31, r3
    srwi r5, r5, 3
    mtctr r5
    cmpwi r6, 0x0
    ble lbl_fn_805AE458_00000A40
lbl_fn_805AE458_00000994:
    lwz r12, 0x250(r31)
    addi r4, r4, 0x8
    lwz r7, 0x264(r31)
    lfs f0, 0x7d8(r12)
    lwz r11, 0x254(r31)
    fadds f2, f2, f0
    lfs f1, 0x7d8(r7)
    lfs f0, 0x7d8(r11)
    lwz r10, 0x258(r31)
    fadds f2, f2, f0
    lwz r12, 0x940(r12)
    lfs f0, 0x7d8(r10)
    lwz r9, 0x25c(r31)
    add r0, r0, r12
    fadds f2, f2, f0
    lfs f0, 0x7d8(r9)
    lwz r8, 0x260(r31)
    fadds f2, f2, f0
    lwz r11, 0x940(r11)
    lfs f0, 0x7d8(r8)
    lwz r6, 0x268(r31)
    add r0, r0, r11
    fadds f2, f2, f0
    lwz r10, 0x940(r10)
    lfs f0, 0x7d8(r6)
    fadds f2, f2, f1
    lwz r5, 0x26c(r31)
    lwz r9, 0x940(r9)
    add r0, r0, r10
    lwz r8, 0x940(r8)
    addi r31, r31, 0x20
    fadds f2, f2, f0
    lfs f0, 0x7d8(r5)
    add r0, r0, r9
    lwz r7, 0x940(r7)
    add r0, r0, r8
    lwz r6, 0x940(r6)
    add r0, r0, r7
    fadds f2, f2, f0
    lwz r5, 0x940(r5)
    add r0, r0, r6
    add r0, r0, r5
    bdnz lbl_fn_805AE458_00000994
lbl_fn_805AE458_00000A40:
    lbz r6, 0x24c(r3)
    slwi r5, r4, 2
    add r5, r3, r5
    subf r3, r4, r6
    mtctr r3
    cmpw r4, r6
    bge lbl_fn_805AE458_00000A78
lbl_fn_805AE458_00000A5C:
    lwz r3, 0x250(r5)
    addi r5, r5, 0x4
    lfs f0, 0x7d8(r3)
    lwz r3, 0x940(r3)
    fadds f2, f2, f0
    add r0, r0, r3
    bdnz lbl_fn_805AE458_00000A5C
lbl_fn_805AE458_00000A78:
    cmpwi r0, 0x0
    bne lbl_fn_805AE458_00000A88
    lfs f1, lbl_80888368
    b lbl_fn_805AE458_00000AB4
lbl_fn_805AE458_00000A88:
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    lfs f0, lbl_8088836C
    lis r4, lbl_80763C28@ha
    stw r3, 0xc(r1)
    lfd f1, lbl_80763C28@l(r4)
    fmuls f2, f0, f2
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fdivs f1, f2, f0
lbl_fn_805AE458_00000AB4:
    lwz r31, 0x1c(r1)
    addi r1, r1, 0x20
    blr
}

asm void fn_805AE5EC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    li r7, 0x0
    lbz r0, 0x23d(r3)
    cmplwi r0, 0x2
    bne lbl_fn_805AE5EC_00000B24
    lbz r6, 0x24c(r3)
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_fn_805AE5EC_00000BC8
lbl_fn_805AE5EC_00000AE4:
    lwz r4, 0x250(r3)
    li r5, 0x0
    lwz r4, 0x38(r4)
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_805AE5EC_00000B0C
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    beq lbl_fn_805AE5EC_00000B0C
    li r5, 0x1
lbl_fn_805AE5EC_00000B0C:
    cmpwi r5, 0x0
    beq lbl_fn_805AE5EC_00000B18
    addi r7, r7, 0x1
lbl_fn_805AE5EC_00000B18:
    addi r3, r3, 0x4
    bdnz lbl_fn_805AE5EC_00000AE4
    b lbl_fn_805AE5EC_00000BC8
lbl_fn_805AE5EC_00000B24:
    lbz r6, 0x24c(r3)
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_fn_805AE5EC_00000BC8
lbl_fn_805AE5EC_00000B34:
    lwz r8, 0x250(r3)
    lwz r0, 0x38(r8)
    rlwinm r4, r0, 0, 29, 29
    cmplwi r4, 0x4
    beq lbl_fn_805AE5EC_00000BC0
    li r5, 0x0
    mr r4, r5
    beq lbl_fn_805AE5EC_00000B60
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_805AE5EC_00000B64
lbl_fn_805AE5EC_00000B60:
    li r4, 0x1
lbl_fn_805AE5EC_00000B64:
    cmpwi r4, 0x0
    bne lbl_fn_805AE5EC_00000BA8
    lwz r0, 0x7e0(r8)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_805AE5EC_00000BA8
    lwz r0, 0x55c(r8)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_805AE5EC_00000B9C
    lwz r0, 0x560(r8)
    cmpwi r0, 0x1c
    bne lbl_fn_805AE5EC_00000B9C
    li r4, 0x1
lbl_fn_805AE5EC_00000B9C:
    cmpwi r4, 0x0
    bne lbl_fn_805AE5EC_00000BA8
    li r5, 0x1
lbl_fn_805AE5EC_00000BA8:
    cmpwi r5, 0x0
    bne lbl_fn_805AE5EC_00000BBC
    lwz r0, 0x9f8(r8)
    cmpwi r0, 0x0
    ble lbl_fn_805AE5EC_00000BC0
lbl_fn_805AE5EC_00000BBC:
    addi r7, r7, 0x1
lbl_fn_805AE5EC_00000BC0:
    addi r3, r3, 0x4
    bdnz lbl_fn_805AE5EC_00000B34
lbl_fn_805AE5EC_00000BC8:
    cmpwi r6, 0x0
    bne lbl_fn_805AE5EC_00000BD8
    lfs f1, lbl_80888368
    b lbl_fn_805AE5EC_00000C1C
lbl_fn_805AE5EC_00000BD8:
    lis r0, 0x4330
    xoris r3, r7, 0x8000
    stw r3, 0xc(r1)
    lis r4, lbl_80763C28@ha
    lfd f1, lbl_80763C28@l(r4)
    lis r3, lbl_80763C30@ha
    stw r0, 0x8(r1)
    lfs f2, lbl_8088836C
    lfd f0, 0x8(r1)
    stw r6, 0x14(r1)
    fsubs f3, f0, f1
    lfd f1, lbl_80763C30@l(r3)
    stw r0, 0x10(r1)
    lfd f0, 0x10(r1)
    fmuls f2, f2, f3
    fsubs f0, f0, f1
    fdivs f1, f2, f0
lbl_fn_805AE5EC_00000C1C:
    addi r1, r1, 0x20
    blr
}

asm void fn_805AE750(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lwz r3, 0x218(r3)
    cmpwi r3, 0x0
    beq lbl_fn_805AE750_00000C3C
    lwz r5, 0x8c(r3)
    b lbl_fn_805AE750_00000C40
lbl_fn_805AE750_00000C3C:
    li r5, 0x0
lbl_fn_805AE750_00000C40:
    cmpwi r5, 0x0
    bne lbl_fn_805AE750_00000C50
    lfs f1, lbl_80888368
    b lbl_fn_805AE750_00000C84
lbl_fn_805AE750_00000C50:
    lwz r4, 0x940(r5)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r3, lbl_80763C28@ha
    xoris r0, r4, 0x8000
    lfs f3, lbl_8088836C
    stw r0, 0xc(r1)
    lfs f2, 0x7d8(r5)
    lfd f1, lbl_80763C28@l(r3)
    lfd f0, 0x8(r1)
    fmuls f2, f3, f2
    fsubs f0, f0, f1
    fdivs f1, f2, f0
lbl_fn_805AE750_00000C84:
    addi r1, r1, 0x10
    blr
}

asm void fn_805AE7B8(void)
{
    nofralloc
    lbz r0, 0x24c(r3)
    li r8, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805AE7B8_00000D34
lbl_fn_805AE7B8_00000CA0:
    lwz r9, 0x250(r3)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    lwz r7, 0x38(r9)
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_805AE7B8_00000CD0
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_805AE7B8_00000CD0
    li r6, 0x1
lbl_fn_805AE7B8_00000CD0:
    cmpwi r6, 0x0
    beq lbl_fn_805AE7B8_00000CEC
    lwz r0, 0x7e0(r9)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_805AE7B8_00000CEC
    li r4, 0x1
lbl_fn_805AE7B8_00000CEC:
    cmpwi r4, 0x0
    beq lbl_fn_805AE7B8_00000D20
    lwz r0, 0x55c(r9)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_805AE7B8_00000D14
    lwz r0, 0x560(r9)
    cmpwi r0, 0x1c
    bne lbl_fn_805AE7B8_00000D14
    li r4, 0x1
lbl_fn_805AE7B8_00000D14:
    cmpwi r4, 0x0
    bne lbl_fn_805AE7B8_00000D20
    li r5, 0x1
lbl_fn_805AE7B8_00000D20:
    cmpwi r5, 0x0
    beq lbl_fn_805AE7B8_00000D2C
    addi r8, r8, 0x1
lbl_fn_805AE7B8_00000D2C:
    addi r3, r3, 0x4
    bdnz lbl_fn_805AE7B8_00000CA0
lbl_fn_805AE7B8_00000D34:
    mr r3, r8
    blr
}

asm void fn_805AE868(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0x70
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    stfd f30, 0x90(r1)
    psq_st f30, 0x98(r1), 0, 0
    stfd f29, 0x80(r1)
    psq_st f29, 0x88(r1), 0, 0
    stfd f28, 0x70(r1)
    psq_st f28, 0x78(r1), 0, 0
    bl _savegpr_26
    lis r5, lbl_80763C28@ha
    mr r26, r3
    lfd f28, lbl_80763C28@l(r5)
    mr r27, r4
    lfs f29, lbl_8088836C
    mr r30, r26
    lfs f30, lbl_80888368
    li r29, 0x0
    lfs f31, lbl_80888370
    lis r31, 0x4330
    b lbl_fn_805AE868_00000E4C
lbl_fn_805AE868_00000D9C:
    lwz r28, 0x250(r30)
    stw r31, 0x50(r1)
    lwz r0, 0x940(r28)
    addi r3, r28, 0x7d4
    mullw r0, r27, r0
    xoris r0, r0, 0x8000
    stw r0, 0x54(r1)
    lfd f0, 0x50(r1)
    fsubs f0, f0, f28
    fdivs f0, f0, f29
    stfs f0, 0x7d8(r28)
    bl fn_801333E4
    cmpwi r27, 0x0
    bgt lbl_fn_805AE868_00000E44
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_805AE868_00000E44
    stfs f30, 0x8(r1)
    addi r3, r1, 0x20
    li r4, 0x79
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    lfs f1, 0x538(r28)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x20
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0x10(r1)
    mr r5, r28
    lfs f1, 0xc(r1)
    addi r6, r1, 0x14
    lfs f0, 0x8(r1)
    fneg f2, f2
    fneg f1, f1
    lwz r3, lbl_8087F048
    fneg f0, f0
    stfs f2, 0x1c(r1)
    li r4, 0x0
    stfs f0, 0x14(r1)
    stfs f1, 0x18(r1)
    bl fn_800FDE60
lbl_fn_805AE868_00000E44:
    addi r30, r30, 0x4
    addi r29, r29, 0x1
lbl_fn_805AE868_00000E4C:
    lbz r0, 0x24c(r26)
    cmpw r29, r0
    blt lbl_fn_805AE868_00000D9C
    addi r11, r1, 0x70
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    psq_l f30, 0x98(r1), 0, 0
    lfd f30, 0x90(r1)
    psq_l f29, 0x88(r1), 0, 0
    lfd f29, 0x80(r1)
    psq_l f28, 0x78(r1), 0, 0
    lfd f28, 0x70(r1)
    bl _restgpr_26
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_805AE9BC(void)
{
    nofralloc
    cmplwi r4, 0x2
    bgtlr
    li r0, 0x1
    stb r4, 0x23f(r3)
    stw r0, 0x378(r3)
    blr
}

asm void fn_805AE9D4(void)
{
    nofralloc
    li r0, 0x1
    stb r4, 0x240(r3)
    mr r6, r3
    li r7, 0x0
    stw r0, 0x378(r3)
    b lbl_fn_805AE9D4_00000ED0
lbl_fn_805AE9D4_00000EC0:
    lwz r5, 0x250(r6)
    addi r6, r6, 0x4
    addi r7, r7, 0x1
    stw r4, 0xd18(r5)
lbl_fn_805AE9D4_00000ED0:
    lbz r0, 0x24c(r3)
    cmpw r7, r0
    blt lbl_fn_805AE9D4_00000EC0
    blr
}

asm void fn_805AEA0C(void)
{
    nofralloc
    li r0, 0x1
    stb r4, 0x241(r3)
    mr r6, r3
    li r7, 0x0
    stw r0, 0x378(r3)
    b lbl_fn_805AEA0C_00000F08
lbl_fn_805AEA0C_00000EF8:
    lwz r5, 0x250(r6)
    addi r6, r6, 0x4
    addi r7, r7, 0x1
    stw r4, 0xd0c(r5)
lbl_fn_805AEA0C_00000F08:
    lbz r0, 0x24c(r3)
    cmpw r7, r0
    blt lbl_fn_805AEA0C_00000EF8
    blr
}

asm void fn_805AEA44(void)
{
    nofralloc
    stb r4, 0x242(r3)
    mr r6, r3
    li r7, 0x0
    b lbl_fn_805AEA44_00000F38
lbl_fn_805AEA44_00000F28:
    lwz r5, 0x250(r6)
    addi r6, r6, 0x4
    addi r7, r7, 0x1
    stw r4, 0xd10(r5)
lbl_fn_805AEA44_00000F38:
    lbz r0, 0x24c(r3)
    cmpw r7, r0
    blt lbl_fn_805AEA44_00000F28
    blr
}

asm void fn_805AEA74(void)
{
    nofralloc
    lwz r5, 0x214(r3)
    lhz r0, 0x0(r4)
    slwi r5, r5, 4
    add r6, r3, r5
    sth r0, 0x10(r6)
    lhz r0, 0x2(r4)
    sth r0, 0x12(r6)
    lwz r0, 0x8(r4)
    lwz r5, 0x4(r4)
    stw r5, 0x14(r6)
    stw r0, 0x18(r6)
    lwz r0, 0xc(r4)
    stw r0, 0x1c(r6)
    lwz r4, 0x214(r3)
    subic. r4, r4, 0x1
    stw r4, 0x214(r3)
    bgelr
    addi r0, r4, 0x20
    stw r0, 0x214(r3)
    blr
}

asm void fn_805AEAC4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    li r0, 0x1f
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    mr r31, r29
    stw r4, 0x210(r3)
    stw r0, 0x214(r3)
    stb r4, 0x23e(r3)
    b lbl_fn_805AEAC4_00000FE4
lbl_fn_805AEAC4_00000FD4:
    lwz r3, 0x250(r31)
    bl fn_80171DB0
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_805AEAC4_00000FE4:
    lbz r0, 0x24c(r29)
    cmpw r30, r0
    blt lbl_fn_805AEAC4_00000FD4
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805AEB38(void)
{
    nofralloc
    cmplwi r4, 0x1
    ble lbl_fn_805AEB38_00001020
    cmpwi r4, 0x2
    beq lbl_fn_805AEB38_000010E4
    b lbl_fn_805AEB38_0000111C
lbl_fn_805AEB38_00001020:
    lbz r0, 0x24c(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805AEB38_000010DC
lbl_fn_805AEB38_00001030:
    lwz r9, 0x250(r3)
    li r6, 0x0
    li r5, 0x0
    li r7, 0x0
    lwz r8, 0x38(r9)
    rlwinm r0, r8, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_805AEB38_00001060
    clrlwi r0, r8, 31
    cmplwi r0, 0x1
    beq lbl_fn_805AEB38_00001060
    li r7, 0x1
lbl_fn_805AEB38_00001060:
    cmpwi r7, 0x0
    beq lbl_fn_805AEB38_0000107C
    lwz r0, 0x7e0(r9)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_805AEB38_0000107C
    li r5, 0x1
lbl_fn_805AEB38_0000107C:
    cmpwi r5, 0x0
    beq lbl_fn_805AEB38_000010B0
    lwz r0, 0x55c(r9)
    li r5, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_805AEB38_000010A4
    lwz r0, 0x560(r9)
    cmpwi r0, 0x1c
    bne lbl_fn_805AEB38_000010A4
    li r5, 0x1
lbl_fn_805AEB38_000010A4:
    cmpwi r5, 0x0
    bne lbl_fn_805AEB38_000010B0
    li r6, 0x1
lbl_fn_805AEB38_000010B0:
    cmpwi r6, 0x0
    bne lbl_fn_805AEB38_000010C0
    cmpwi r4, 0x0
    bne lbl_fn_805AEB38_000010D4
lbl_fn_805AEB38_000010C0:
    lwz r0, 0x105c(r9)
    cmpwi r0, 0x0
    bne lbl_fn_805AEB38_000010D4
    li r3, 0x0
    blr
lbl_fn_805AEB38_000010D4:
    addi r3, r3, 0x4
    bdnz lbl_fn_805AEB38_00001030
lbl_fn_805AEB38_000010DC:
    li r3, 0x1
    blr
lbl_fn_805AEB38_000010E4:
    lbz r0, 0x24c(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805AEB38_00001114
lbl_fn_805AEB38_000010F4:
    lwz r4, 0x250(r3)
    lwz r0, 0x105c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805AEB38_0000110C
    li r3, 0x1
    blr
lbl_fn_805AEB38_0000110C:
    addi r3, r3, 0x4
    bdnz lbl_fn_805AEB38_000010F4
lbl_fn_805AEB38_00001114:
    li r3, 0x0
    blr
lbl_fn_805AEB38_0000111C:
    li r3, 0x1
    blr
}

asm void fn_805AEC50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, -0x1
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_fn_805AEC50_00001158
    li r3, -0x1
    b lbl_fn_805AEC50_00001230
lbl_fn_805AEC50_00001158:
    slwi r0, r5, 2
    li r7, 0x0
    add r6, r4, r0
    li r5, 0x0
lbl_fn_805AEC50_00001168:
    lwz r0, 0x218(r3)
    add r4, r0, r5
    lwz r8, 0xc(r4)
    cmpwi r8, 0x0
    beq lbl_fn_805AEC50_000011D0
    cmpwi r31, 0x20
    blt lbl_fn_805AEC50_0000118C
    li r3, -0x1
    b lbl_fn_805AEC50_00001230
lbl_fn_805AEC50_0000118C:
    mr r4, r30
    li r9, 0x0
    mtctr r31
    cmpwi r31, 0x0
    ble lbl_fn_805AEC50_000011BC
lbl_fn_805AEC50_000011A0:
    lwz r0, 0x0(r4)
    cmplw r0, r8
    bne lbl_fn_805AEC50_000011B4
    li r9, 0x1
    b lbl_fn_805AEC50_000011BC
lbl_fn_805AEC50_000011B4:
    addi r4, r4, 0x4
    bdnz lbl_fn_805AEC50_000011A0
lbl_fn_805AEC50_000011BC:
    cmpwi r9, 0x0
    bne lbl_fn_805AEC50_000011D0
    stw r8, 0x0(r6)
    addi r6, r6, 0x4
    addi r31, r31, 0x1
lbl_fn_805AEC50_000011D0:
    addi r7, r7, 0x1
    addi r5, r5, 0x4
    cmpwi r7, 0x20
    blt lbl_fn_805AEC50_00001168
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_805AEC50_000011FC
    mr r4, r30
    mr r5, r31
    bl fn_805AEC50
    mr r31, r3
lbl_fn_805AEC50_000011FC:
    lwz r3, lbl_8087FA00
    mr r4, r29
    bl fn_805B38A0
    cmpwi r3, 0x0
    bne lbl_fn_805AEC50_0000122C
    lwz r3, 0xc(r29)
    cmpwi r3, 0x0
    beq lbl_fn_805AEC50_0000122C
    mr r4, r30
    mr r5, r31
    bl fn_805AEC50
    mr r31, r3
lbl_fn_805AEC50_0000122C:
    mr r3, r31
lbl_fn_805AEC50_00001230:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805AED78(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    lbz r0, 0x23e(r3)
    clrlwi. r0, r0, 31
    bne lbl_fn_805AED78_00001448
    lbz r7, 0xa(r4)
    addi r0, r7, 0xfd
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_fn_805AED78_000012D0
    lbz r4, 0x8(r4)
    cmpwi r4, 0x0
    bne lbl_fn_805AED78_000012A0
    lwz r5, 0x0(r28)
    lwz r6, 0x4(r28)
    bl fn_805B0D70
    b lbl_fn_805AED78_00001438
lbl_fn_805AED78_000012A0:
    cmplwi r4, 0x1
    bne lbl_fn_805AED78_000012B8
    lwz r5, 0x0(r28)
    lwz r6, 0x4(r28)
    bl fn_805B01C4
    b lbl_fn_805AED78_00001438
lbl_fn_805AED78_000012B8:
    cmplwi r4, 0x2
    bne lbl_fn_805AED78_00001438
    lwz r5, 0x0(r28)
    lwz r6, 0x4(r28)
    bl fn_805AF618
    b lbl_fn_805AED78_00001438
lbl_fn_805AED78_000012D0:
    li r0, 0x0
    stb r0, 0x23c(r3)
    li r4, 0x0
    li r5, 0x20
    addi r3, r3, 0x21c
    bl memset
    mr r31, r27
    li r30, 0x0
    b lbl_fn_805AED78_0000142C
lbl_fn_805AED78_000012F4:
    lwz r0, 0x4(r28)
    lwz r29, 0x250(r31)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_805AED78_00001328
    lwz r3, 0x218(r27)
    cmpwi r3, 0x0
    beq lbl_fn_805AED78_0000131C
    lwz r0, 0x8c(r3)
    b lbl_fn_805AED78_00001320
lbl_fn_805AED78_0000131C:
    li r0, 0x0
lbl_fn_805AED78_00001320:
    cmplw r29, r0
    beq lbl_fn_805AED78_00001424
lbl_fn_805AED78_00001328:
    lwz r0, 0x38(r29)
    li r3, 0x0
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_805AED78_00001358
    lwz r0, 0x48(r29)
    cmpwi r0, 0x2
    bne lbl_fn_805AED78_0000135C
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_805AED78_0000135C
lbl_fn_805AED78_00001358:
    li r3, 0x1
lbl_fn_805AED78_0000135C:
    cmpwi r3, 0x0
    bne lbl_fn_805AED78_00001424
    lbz r0, 0x8(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805AED78_00001384
    cmpwi r0, 0x1
    beq lbl_fn_805AED78_000013B0
    cmpwi r0, 0x2
    beq lbl_fn_805AED78_000013DC
    b lbl_fn_805AED78_00001460
lbl_fn_805AED78_00001384:
    lwz r5, 0x0(r28)
    mr r3, r27
    mr r4, r30
    li r6, 0x2
    addi r5, r5, 0x10
    bl fn_805AF3F0
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_8016F824
    b lbl_fn_805AED78_0000140C
lbl_fn_805AED78_000013B0:
    lwz r5, 0x0(r28)
    mr r3, r27
    mr r4, r30
    li r6, 0x2
    addi r5, r5, 0x10
    bl fn_805AF1C8
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_8016FDCC
    b lbl_fn_805AED78_0000140C
lbl_fn_805AED78_000013DC:
    lwz r5, 0x0(r28)
    mr r3, r27
    mr r4, r30
    li r6, 0x2
    addi r5, r5, 0x10
    bl fn_805AEFA0
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_8017039C
    b lbl_fn_805AED78_0000140C
    b lbl_fn_805AED78_00001460
lbl_fn_805AED78_0000140C:
    lbz r0, 0x9(r28)
    cmplwi r0, 0x2
    bne lbl_fn_805AED78_00001424
    lbz r0, 0x23c(r27)
    cmpwi r0, 0x0
    bne lbl_fn_805AED78_00001438
lbl_fn_805AED78_00001424:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_805AED78_0000142C:
    lbz r0, 0x24c(r27)
    cmpw r30, r0
    blt lbl_fn_805AED78_000012F4
lbl_fn_805AED78_00001438:
    lbz r0, 0x23e(r27)
    ori r0, r0, 0x1
    stb r0, 0x23e(r27)
    b lbl_fn_805AED78_00001460
lbl_fn_805AED78_00001448:
    lbz r4, 0x9(r4)
    bl fn_805AEB38
    cmpwi r3, 0x0
    beq lbl_fn_805AED78_00001460
    li r0, 0x0
    stb r0, 0x23e(r27)
lbl_fn_805AED78_00001460:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805AEFA0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x50
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    bl _savegpr_25
    mr r30, r5
    mr r29, r3
    mr r7, r30
    li r31, 0x0
    b lbl_fn_805AEFA0_000014AC
lbl_fn_805AEFA0_000014A4:
    addi r7, r7, 0x4
    addi r31, r31, 0x1
lbl_fn_805AEFA0_000014AC:
    cmpwi r31, 0x20
    bge lbl_fn_805AEFA0_000014C0
    lwz r0, 0x0(r7)
    cmpwi r0, 0x0
    bne lbl_fn_805AEFA0_000014A4
lbl_fn_805AEFA0_000014C0:
    cmpwi r6, 0x0
    beq lbl_fn_805AEFA0_000014DC
    cmpwi r6, 0x1
    beq lbl_fn_805AEFA0_000014F8
    cmpwi r6, 0x2
    beq lbl_fn_805AEFA0_000015B0
    b lbl_fn_805AEFA0_00001670
lbl_fn_805AEFA0_000014DC:
    divw r0, r4, r31
    mullw r0, r0, r31
    subf r0, r0, r4
    slwi r0, r0, 2
    lwzx r3, r5, r0
    lwz r3, 0x0(r3)
    b lbl_fn_805AEFA0_0000167C
lbl_fn_805AEFA0_000014F8:
    bl fn_80680CF8
    lis r4, 0x4330
    xoris r0, r3, 0x8000
    stw r0, 0x1c(r1)
    lis r3, lbl_80763C28@ha
    lfd f2, lbl_80763C28@l(r3)
    xoris r0, r31, 0x8000
    stw r4, 0x18(r1)
    li r6, 0x0
    lfs f0, lbl_80888378
    lfd f1, 0x18(r1)
    stw r0, 0x24(r1)
    fsubs f1, f1, f2
    stw r4, 0x20(r1)
    fdivs f1, f1, f0
    lfd f0, 0x20(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x28(r1)
    lwz r5, 0x2c(r1)
    mtctr r31
    cmpwi r31, 0x0
    ble lbl_fn_805AEFA0_00001678
lbl_fn_805AEFA0_00001558:
    add r4, r5, r6
    lbz r0, 0x23c(r29)
    divw r3, r4, r31
    mullw r3, r3, r31
    subf r7, r3, r4
    add r4, r29, r7
    divw r0, r0, r31
    lbz r3, 0x21c(r4)
    cmpw r3, r0
    bgt lbl_fn_805AEFA0_000015A4
    addi r0, r3, 0x1
    stb r0, 0x21c(r4)
    slwi r0, r7, 2
    lbz r4, 0x23c(r29)
    lwzx r3, r30, r0
    addi r0, r4, 0x1
    stb r0, 0x23c(r29)
    lwz r3, 0x0(r3)
    b lbl_fn_805AEFA0_0000167C
lbl_fn_805AEFA0_000015A4:
    addi r6, r6, 0x1
    bdnz lbl_fn_805AEFA0_00001558
    b lbl_fn_805AEFA0_00001678
lbl_fn_805AEFA0_000015B0:
    slwi r0, r4, 2
    lfs f31, lbl_80888374
    mr r28, r30
    li r26, -0x1
    add r27, r3, r0
    li r25, 0x0
    b lbl_fn_805AEFA0_0000163C
lbl_fn_805AEFA0_000015CC:
    lbz r0, 0x23c(r29)
    add r3, r29, r25
    lbz r3, 0x21c(r3)
    divw r0, r0, r31
    cmpw r3, r0
    bgt lbl_fn_805AEFA0_00001634
    lwz r5, 0x0(r28)
    addi r3, r1, 0x8
    lwz r4, 0x250(r27)
    lfs f1, 0xc(r5)
    lfs f0, 0x530(r4)
    lfs f3, 0x8(r5)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r4)
    lfs f1, 0x4(r5)
    lfs f0, 0x528(r4)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_805AEFA0_00001634
    mr r26, r25
    fmr f31, f1
lbl_fn_805AEFA0_00001634:
    addi r28, r28, 0x4
    addi r25, r25, 0x1
lbl_fn_805AEFA0_0000163C:
    cmpw r25, r31
    blt lbl_fn_805AEFA0_000015CC
    add r5, r29, r26
    slwi r0, r26, 2
    lbz r4, 0x21c(r5)
    lwzx r3, r30, r0
    addi r0, r4, 0x1
    stb r0, 0x21c(r5)
    lbz r4, 0x23c(r29)
    addi r0, r4, 0x1
    stb r0, 0x23c(r29)
    lwz r3, 0x0(r3)
    b lbl_fn_805AEFA0_0000167C
lbl_fn_805AEFA0_00001670:
    li r3, -0x1
    b lbl_fn_805AEFA0_0000167C
lbl_fn_805AEFA0_00001678:
    li r3, -0x1
lbl_fn_805AEFA0_0000167C:
    addi r11, r1, 0x50
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    bl _restgpr_25
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_805AF1C8(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x50
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    bl _savegpr_25
    mr r30, r5
    mr r29, r3
    mr r7, r30
    li r31, 0x0
    b lbl_fn_805AF1C8_000016D4
lbl_fn_805AF1C8_000016CC:
    addi r7, r7, 0x4
    addi r31, r31, 0x1
lbl_fn_805AF1C8_000016D4:
    cmpwi r31, 0x20
    bge lbl_fn_805AF1C8_000016E8
    lwz r0, 0x0(r7)
    cmpwi r0, 0x0
    bne lbl_fn_805AF1C8_000016CC
lbl_fn_805AF1C8_000016E8:
    cmpwi r6, 0x0
    beq lbl_fn_805AF1C8_00001704
    cmpwi r6, 0x1
    beq lbl_fn_805AF1C8_00001720
    cmpwi r6, 0x2
    beq lbl_fn_805AF1C8_000017D8
    b lbl_fn_805AF1C8_00001898
lbl_fn_805AF1C8_00001704:
    divw r0, r4, r31
    mullw r0, r0, r31
    subf r0, r0, r4
    slwi r0, r0, 2
    lwzx r3, r5, r0
    lwz r3, 0x0(r3)
    b lbl_fn_805AF1C8_000018A4
lbl_fn_805AF1C8_00001720:
    bl fn_80680CF8
    lis r4, 0x4330
    xoris r0, r3, 0x8000
    stw r0, 0x1c(r1)
    lis r3, lbl_80763C28@ha
    lfd f2, lbl_80763C28@l(r3)
    xoris r0, r31, 0x8000
    stw r4, 0x18(r1)
    li r6, 0x0
    lfs f0, lbl_80888378
    lfd f1, 0x18(r1)
    stw r0, 0x24(r1)
    fsubs f1, f1, f2
    stw r4, 0x20(r1)
    fdivs f1, f1, f0
    lfd f0, 0x20(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x28(r1)
    lwz r5, 0x2c(r1)
    mtctr r31
    cmpwi r31, 0x0
    ble lbl_fn_805AF1C8_000018A0
lbl_fn_805AF1C8_00001780:
    add r4, r5, r6
    lbz r0, 0x23c(r29)
    divw r3, r4, r31
    mullw r3, r3, r31
    subf r7, r3, r4
    add r4, r29, r7
    divw r0, r0, r31
    lbz r3, 0x21c(r4)
    cmpw r3, r0
    bgt lbl_fn_805AF1C8_000017CC
    addi r0, r3, 0x1
    stb r0, 0x21c(r4)
    slwi r0, r7, 2
    lbz r4, 0x23c(r29)
    lwzx r3, r30, r0
    addi r0, r4, 0x1
    stb r0, 0x23c(r29)
    lwz r3, 0x0(r3)
    b lbl_fn_805AF1C8_000018A4
lbl_fn_805AF1C8_000017CC:
    addi r6, r6, 0x1
    bdnz lbl_fn_805AF1C8_00001780
    b lbl_fn_805AF1C8_000018A0
lbl_fn_805AF1C8_000017D8:
    slwi r0, r4, 2
    lfs f31, lbl_80888374
    mr r28, r30
    li r26, -0x1
    add r27, r3, r0
    li r25, 0x0
    b lbl_fn_805AF1C8_00001864
lbl_fn_805AF1C8_000017F4:
    lbz r0, 0x23c(r29)
    add r3, r29, r25
    lbz r3, 0x21c(r3)
    divw r0, r0, r31
    cmpw r3, r0
    bgt lbl_fn_805AF1C8_0000185C
    lwz r5, 0x0(r28)
    addi r3, r1, 0x8
    lwz r4, 0x250(r27)
    lfs f1, 0xc(r5)
    lfs f0, 0x530(r4)
    lfs f3, 0x8(r5)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r4)
    lfs f1, 0x4(r5)
    lfs f0, 0x528(r4)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_805AF1C8_0000185C
    mr r26, r25
    fmr f31, f1
lbl_fn_805AF1C8_0000185C:
    addi r28, r28, 0x4
    addi r25, r25, 0x1
lbl_fn_805AF1C8_00001864:
    cmpw r25, r31
    blt lbl_fn_805AF1C8_000017F4
    add r5, r29, r26
    slwi r0, r26, 2
    lbz r4, 0x21c(r5)
    lwzx r3, r30, r0
    addi r0, r4, 0x1
    stb r0, 0x21c(r5)
    lbz r4, 0x23c(r29)
    addi r0, r4, 0x1
    stb r0, 0x23c(r29)
    lwz r3, 0x0(r3)
    b lbl_fn_805AF1C8_000018A4
lbl_fn_805AF1C8_00001898:
    li r3, -0x1
    b lbl_fn_805AF1C8_000018A4
lbl_fn_805AF1C8_000018A0:
    li r3, -0x1
lbl_fn_805AF1C8_000018A4:
    addi r11, r1, 0x50
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    bl _restgpr_25
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_805AF3F0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x50
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    bl _savegpr_25
    mr r30, r5
    mr r29, r3
    mr r7, r30
    li r31, 0x0
    b lbl_fn_805AF3F0_000018FC
lbl_fn_805AF3F0_000018F4:
    addi r7, r7, 0x4
    addi r31, r31, 0x1
lbl_fn_805AF3F0_000018FC:
    cmpwi r31, 0x20
    bge lbl_fn_805AF3F0_00001910
    lwz r0, 0x0(r7)
    cmpwi r0, 0x0
    bne lbl_fn_805AF3F0_000018F4
lbl_fn_805AF3F0_00001910:
    cmpwi r6, 0x0
    beq lbl_fn_805AF3F0_0000192C
    cmpwi r6, 0x1
    beq lbl_fn_805AF3F0_00001948
    cmpwi r6, 0x2
    beq lbl_fn_805AF3F0_00001A00
    b lbl_fn_805AF3F0_00001AC0
lbl_fn_805AF3F0_0000192C:
    divw r0, r4, r31
    mullw r0, r0, r31
    subf r0, r0, r4
    slwi r0, r0, 2
    lwzx r3, r5, r0
    lwz r3, 0x0(r3)
    b lbl_fn_805AF3F0_00001ACC
lbl_fn_805AF3F0_00001948:
    bl fn_80680CF8
    lis r4, 0x4330
    xoris r0, r3, 0x8000
    stw r0, 0x1c(r1)
    lis r3, lbl_80763C28@ha
    lfd f2, lbl_80763C28@l(r3)
    xoris r0, r31, 0x8000
    stw r4, 0x18(r1)
    li r6, 0x0
    lfs f0, lbl_80888378
    lfd f1, 0x18(r1)
    stw r0, 0x24(r1)
    fsubs f1, f1, f2
    stw r4, 0x20(r1)
    fdivs f1, f1, f0
    lfd f0, 0x20(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x28(r1)
    lwz r5, 0x2c(r1)
    mtctr r31
    cmpwi r31, 0x0
    ble lbl_fn_805AF3F0_00001AC8
lbl_fn_805AF3F0_000019A8:
    add r4, r5, r6
    lbz r0, 0x23c(r29)
    divw r3, r4, r31
    mullw r3, r3, r31
    subf r7, r3, r4
    add r4, r29, r7
    divw r0, r0, r31
    lbz r3, 0x21c(r4)
    cmpw r3, r0
    bgt lbl_fn_805AF3F0_000019F4
    addi r0, r3, 0x1
    stb r0, 0x21c(r4)
    slwi r0, r7, 2
    lbz r4, 0x23c(r29)
    lwzx r3, r30, r0
    addi r0, r4, 0x1
    stb r0, 0x23c(r29)
    lwz r3, 0x0(r3)
    b lbl_fn_805AF3F0_00001ACC
lbl_fn_805AF3F0_000019F4:
    addi r6, r6, 0x1
    bdnz lbl_fn_805AF3F0_000019A8
    b lbl_fn_805AF3F0_00001AC8
lbl_fn_805AF3F0_00001A00:
    slwi r0, r4, 2
    lfs f31, lbl_80888374
    mr r28, r30
    li r26, -0x1
    add r27, r3, r0
    li r25, 0x0
    b lbl_fn_805AF3F0_00001A8C
lbl_fn_805AF3F0_00001A1C:
    lbz r0, 0x23c(r29)
    add r3, r29, r25
    lbz r3, 0x21c(r3)
    divw r0, r0, r31
    cmpw r3, r0
    bgt lbl_fn_805AF3F0_00001A84
    lwz r5, 0x0(r28)
    addi r3, r1, 0x8
    lwz r4, 0x250(r27)
    lfs f1, 0xc(r5)
    lfs f0, 0x530(r4)
    lfs f3, 0x8(r5)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r4)
    lfs f1, 0x4(r5)
    lfs f0, 0x528(r4)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_805AF3F0_00001A84
    mr r26, r25
    fmr f31, f1
lbl_fn_805AF3F0_00001A84:
    addi r28, r28, 0x4
    addi r25, r25, 0x1
lbl_fn_805AF3F0_00001A8C:
    cmpw r25, r31
    blt lbl_fn_805AF3F0_00001A1C
    add r5, r29, r26
    slwi r0, r26, 2
    lbz r4, 0x21c(r5)
    lwzx r3, r30, r0
    addi r0, r4, 0x1
    stb r0, 0x21c(r5)
    lbz r4, 0x23c(r29)
    addi r0, r4, 0x1
    stb r0, 0x23c(r29)
    lwz r3, 0x0(r3)
    b lbl_fn_805AF3F0_00001ACC
lbl_fn_805AF3F0_00001AC0:
    li r3, -0x1
    b lbl_fn_805AF3F0_00001ACC
lbl_fn_805AF3F0_00001AC8:
    li r3, -0x1
lbl_fn_805AF3F0_00001ACC:
    addi r11, r1, 0x50
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    bl _restgpr_25
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
