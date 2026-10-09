#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_19(void);
extern void _savegpr_19(void);
extern void fn_8004ED34(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800DD3FC(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800FAB80(void);
extern void fn_80109828(void);
extern void fn_80139560(void);
extern void fn_80148990(void);
extern void fn_8016D74C(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_80178208(void);
extern void fn_801C02F4(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_802598DC(void);
extern void fn_8025FE30(void);
extern void fn_805F8E70(void);
extern void fn_805F9050(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_80695720(void);

/* External data declarations */
extern u8 lbl_80743D00[];
extern u8 lbl_80743D18[];
extern u8 lbl_807C8328[];

/* Small data declarations */
extern u32 lbl_8087D9E0;
extern u32 lbl_8087D9E4;
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_808813D0;
extern u32 lbl_808833E0;
extern u32 lbl_808833F4;
extern u32 lbl_80883424;
extern u32 lbl_80883428;
extern u32 lbl_8088342C;
extern u32 lbl_80883438;
extern u32 lbl_80883440;
extern u32 lbl_80883444;
extern u32 lbl_80883448;
extern u32 lbl_8088344C;
extern u32 lbl_80883450;
extern u32 lbl_80883454;
extern u32 lbl_80883458;
extern u32 lbl_8088345C;
extern u32 lbl_80883460;
extern u32 lbl_80883464;
extern u32 lbl_80883468;
extern u32 lbl_8088346C;
extern u32 lbl_80883470;
extern u32 lbl_80883474;
extern u32 lbl_80883478;
extern u32 lbl_8088347C;
extern u32 lbl_80883480;
extern u32 lbl_80883484;
extern u32 lbl_80883488;

/* Function declarations */
void fn_80257A14(void);
void fn_80257A94(void);
void fn_80257B50(void);
void fn_80258368(void);
void fn_80258574(void);
void fn_80258A50(void);
void fn_80258F1C(void);
void fn_8025922C(void);

asm void fn_80257A14(void)
{
    nofralloc
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    lwz r0, 0x1680(r4)
    mulli r0, r0, 0x34
    add r5, r4, r0
    lwz r0, 0x1520(r5)
    cmpwi r0, 0x2
    beq lbl_fn_80257A14_00000068
    lwz r0, 0x154c(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80257A14_00000068
    lwz r5, 0x154c(r5)
    lis r4, lbl_807C8328@ha
    addi r4, r4, lbl_807C8328@l
    lfs f4, lbl_80883450
    psq_l f1, 0x4(r5), 0, 0
    lfs f2, 0xc(r5)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    lfs f3, 0x4(r4)
    lfs f0, 0x4(r3)
    fmadds f0, f4, f3, f0
    stfs f0, 0x4(r3)
    blr
lbl_fn_80257A14_00000068:
    lwz r4, 0x62c(r4)
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_80257A94(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    lwz r0, 0x1680(r3)
    mulli r0, r0, 0x34
    add r31, r3, r0
    lwz r0, 0x1520(r31)
    cmpwi r0, 0x2
    beq lbl_fn_80257A94_00000120
    lwz r4, 0x154c(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80257A94_00000120
    lfs f3, 0x8(r6)
    addi r3, r1, 0x8
    lfs f0, 0xc(r4)
    lfs f2, 0x0(r6)
    lfs f1, 0x4(r4)
    fsubs f3, f3, f0
    lfs f0, lbl_808833E0
    fsubs f1, f2, f1
    stfs f3, 0x10(r1)
    stfs f1, 0x8(r1)
    stfs f0, 0xc(r1)
    bl fn_805F9940
    lis r3, lbl_807C8328@ha
    lfs f0, lbl_807C8328@l(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_80257A94_00000120
    lwz r0, 0x1524(r31)
    lfs f0, lbl_80883424
    slwi r0, r0, 2
    add r3, r30, r0
    lfs f1, 0x74(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_80257A94_00000120
    li r3, 0x4
    b lbl_fn_80257A94_00000124
lbl_fn_80257A94_00000120:
    li r3, 0x0
lbl_fn_80257A94_00000124:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80257B50(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lfs f5, lbl_808833E0
    li r4, 0x0
    stw r0, 0x54(r1)
    addi r5, r1, 0x8
    fmr f2, f5
    addi r6, r1, 0x24
    stw r31, 0x4c(r1)
    addi r7, r1, 0x14
    mr r31, r3
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    lfs f3, 0x52c(r3)
    lfs f0, 0x5a8(r3)
    lfs f4, 0x5b0(r3)
    fadds f6, f3, f0
    lfs f3, 0x528(r3)
    lfs f0, 0x5a4(r3)
    stfs f5, 0x8(r1)
    fadds f7, f3, f0
    lwz r0, 0x62c(r3)
    stfs f5, 0xc(r1)
    lfs f3, 0x530(r3)
    cmpwi r0, 0x0
    psq_l f1, 0x0(r5), 0, 0
    lfs f0, 0x5ac(r3)
    stfs f7, 0x14(r1)
    fadds f3, f3, f0
    stfs f2, 0x2c(r1)
    fmr f2, f3
    stfs f6, 0x18(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f0, 0x28(r1)
    stw r4, 0x20(r1)
    fadds f0, f0, f4
    stfs f5, 0x10(r1)
    stfs f4, 0x30(r1)
    stfs f3, 0x1c(r1)
    stfs f2, 0x2c(r1)
    stfs f0, 0x28(r1)
    beq lbl_fn_80257B50_000001F8
    lwz r0, 0x628(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80257B50_00000398
lbl_fn_80257B50_000001F8:
    lwz r0, 0x628(r3)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_80257B50_00000540
    li r3, 0xb0
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    li r5, 0x0
    addi r4, r4, fn_80148990@l
    li r6, 0x14
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_80257B50_0000038C
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80257B50_0000025C
    mr r5, r0
lbl_fn_80257B50_0000025C:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80257B50_00000378
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80257B50_00000340
lbl_fn_80257B50_00000274:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_80257B50_00000274
    andi. r5, r5, 0x3
    beq lbl_fn_80257B50_00000378
lbl_fn_80257B50_00000340:
    mtctr r5
lbl_fn_80257B50_00000344:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_80257B50_00000344
lbl_fn_80257B50_00000378:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80257B50_0000038C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80257B50_0000038C:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_80257B50_00000540
lbl_fn_80257B50_00000398:
    lwz r3, 0x624(r3)
    cmplw r3, r0
    blt lbl_fn_80257B50_00000540
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_80257B50_00000540
    mulli r3, r30, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    mr r7, r30
    addi r4, r4, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_80257B50_00000538
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_80257B50_00000408
    mr r5, r0
lbl_fn_80257B50_00000408:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80257B50_00000524
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80257B50_000004EC
lbl_fn_80257B50_00000420:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_80257B50_00000420
    andi. r5, r5, 0x3
    beq lbl_fn_80257B50_00000524
lbl_fn_80257B50_000004EC:
    mtctr r5
lbl_fn_80257B50_000004F0:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_80257B50_000004F0
lbl_fn_80257B50_00000524:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80257B50_00000538
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80257B50_00000538:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_80257B50_00000540:
    lwz r0, 0x624(r31)
    addi r5, r1, 0x24
    lwz r4, 0x62c(r31)
    mulli r3, r0, 0x14
    lwz r0, 0x20(r1)
    stwux r0, r3, r4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x2c(r1)
    stfs f2, 0xc(r3)
    lfs f3, 0x30(r1)
    stfs f3, 0x10(r3)
    lfs f0, lbl_80883458
    lwz r0, 0x62c(r31)
    lwz r3, 0x624(r31)
    psq_l f1, 0x528(r31), 0, 0
    cmpwi r0, 0x0
    lfs f2, 0x530(r31)
    addi r0, r3, 0x1
    stw r0, 0x624(r31)
    stfs f0, 0x30(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x2c(r1)
    beq lbl_fn_80257B50_000005AC
    lwz r3, 0x628(r31)
    cmpwi r3, 0x0
    bne lbl_fn_80257B50_0000074C
lbl_fn_80257B50_000005AC:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_80257B50_000008F0
    li r3, 0xb0
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    li r5, 0x0
    addi r4, r4, fn_80148990@l
    li r6, 0x14
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_80257B50_00000740
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80257B50_00000610
    mr r5, r0
lbl_fn_80257B50_00000610:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80257B50_0000072C
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80257B50_000006F4
lbl_fn_80257B50_00000628:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_80257B50_00000628
    andi. r5, r5, 0x3
    beq lbl_fn_80257B50_0000072C
lbl_fn_80257B50_000006F4:
    mtctr r5
lbl_fn_80257B50_000006F8:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_80257B50_000006F8
lbl_fn_80257B50_0000072C:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80257B50_00000740
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80257B50_00000740:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_80257B50_000008F0
lbl_fn_80257B50_0000074C:
    cmplw r0, r3
    blt lbl_fn_80257B50_000008F0
    slwi r30, r0, 1
    cmplw r3, r30
    bgt lbl_fn_80257B50_000008F0
    mulli r3, r30, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    mr r7, r30
    addi r4, r4, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_80257B50_000008E8
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_80257B50_000007B8
    mr r5, r0
lbl_fn_80257B50_000007B8:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80257B50_000008D4
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80257B50_0000089C
lbl_fn_80257B50_000007D0:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_80257B50_000007D0
    andi. r5, r5, 0x3
    beq lbl_fn_80257B50_000008D4
lbl_fn_80257B50_0000089C:
    mtctr r5
lbl_fn_80257B50_000008A0:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_80257B50_000008A0
lbl_fn_80257B50_000008D4:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80257B50_000008E8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80257B50_000008E8:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_80257B50_000008F0:
    lwz r0, 0x624(r31)
    addi r5, r1, 0x24
    lwz r4, 0x62c(r31)
    mulli r3, r0, 0x14
    lwz r0, 0x20(r1)
    stwux r0, r3, r4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x2c(r1)
    stfs f2, 0xc(r3)
    lfs f0, 0x30(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x624(r31)
    lwz r0, 0x12a8(r31)
    addi r3, r3, 0x1
    stw r3, 0x624(r31)
    oris r0, r0, 0x2000
    stw r0, 0x12a8(r31)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80258368(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    lwz r0, 0x624(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80258368_00000B48
    lwz r0, 0x1680(r3)
    addi r4, r1, 0x8
    lwz r5, 0x62c(r3)
    lfs f0, 0x5b0(r3)
    mulli r0, r0, 0x34
    stfs f0, 0x10(r5)
    lfs f5, 0x52c(r3)
    add r30, r3, r0
    lfs f4, 0x5a8(r3)
    lfs f3, 0x528(r3)
    fadds f5, f5, f4
    lfs f0, 0x5a4(r3)
    lfs f4, 0x530(r3)
    fadds f3, f3, f0
    lfs f0, 0x5ac(r3)
    stfs f5, 0xc(r1)
    fadds f2, f4, f0
    lwz r5, 0x62c(r3)
    stfs f3, 0x8(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    lwz r0, 0x958(r3)
    stfs f2, 0x10(r1)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_80258368_000009FC
    lwz r4, 0x62c(r3)
    lfs f3, 0x8(r4)
    lfs f0, 0x10(r4)
    fsubs f0, f3, f0
    stfs f0, 0x8(r4)
    b lbl_fn_80258368_00000A10
lbl_fn_80258368_000009FC:
    lwz r4, 0x62c(r3)
    lfs f3, 0x8(r4)
    lfs f0, 0x10(r4)
    fadds f0, f3, f0
    stfs f0, 0x8(r4)
lbl_fn_80258368_00000A10:
    lwz r0, 0x1520(r30)
    cmpwi r0, 0x2
    beq lbl_fn_80258368_00000A40
    lwz r4, 0x62c(r3)
    lfs f0, lbl_8088342C
    lfs f3, 0x8(r4)
    fsubs f0, f3, f0
    stfs f0, 0x8(r4)
    lwz r0, 0x12a8(r3)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x12a8(r3)
    b lbl_fn_80258368_00000A4C
lbl_fn_80258368_00000A40:
    lwz r0, 0x12a8(r3)
    oris r0, r0, 0x2000
    stw r0, 0x12a8(r3)
lbl_fn_80258368_00000A4C:
    lwz r0, 0x154c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80258368_00000B48
    lwz r5, 0x62c(r3)
    li r4, 0x79
    lfs f6, lbl_8088345C
    stfs f6, 0x24(r5)
    lfs f4, lbl_80883428
    lwz r5, 0x154c(r30)
    lwz r6, 0x62c(r3)
    lfs f2, 0xc(r5)
    psq_l f1, 0x4(r5), 0, 0
    psq_st f1, 0x18(r6), 0, 0
    lfs f3, lbl_808833E0
    stfs f2, 0x20(r6)
    lfs f0, lbl_80883460
    lwz r5, 0x62c(r3)
    lfs f5, 0x1c(r5)
    fadds f5, f5, f6
    stfs f5, 0x1c(r5)
    lwz r5, 0x62c(r3)
    addi r3, r1, 0x20
    lfs f5, 0x1c(r5)
    fadds f4, f5, f4
    stfs f4, 0x1c(r5)
    stfs f3, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f0, 0x1c(r1)
    lwz r5, 0x154c(r30)
    lfs f1, 0x14(r5)
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x20
    mr r5, r4
    bl fn_805F93C0
    lwz r3, 0x62c(r31)
    li r0, 0x0
    lfs f0, 0x14(r1)
    lfs f3, 0x18(r3)
    fadds f0, f3, f0
    stfs f0, 0x18(r3)
    lfs f3, 0x1c(r3)
    lfs f0, 0x18(r1)
    fadds f0, f3, f0
    stfs f0, 0x1c(r3)
    lfs f3, 0x20(r3)
    lfs f0, 0x1c(r1)
    fadds f0, f3, f0
    stfs f0, 0x20(r3)
    lwz r3, 0x62c(r31)
    stw r0, 0x14(r3)
    lwz r0, 0x1520(r30)
    cmpwi r0, 0x2
    bne lbl_fn_80258368_00000B48
    lwz r3, 0x62c(r31)
    lfs f0, lbl_8088342C
    lfs f3, 0x1c(r3)
    fadds f0, f3, f0
    stfs f0, 0x1c(r3)
    lwz r3, 0x62c(r31)
    lwz r0, 0x14(r3)
    ori r0, r0, 0x8
    stw r0, 0x14(r3)
lbl_fn_80258368_00000B48:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80258574(void)
{
    nofralloc
    stwu r1, -0x270(r1)
    mflr r0
    stw r0, 0x274(r1)
    stw r31, 0x26c(r1)
    mr r31, r3
    stw r30, 0x268(r1)
    lwz r0, 0x14f4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80258574_00000BB0
    lwz r4, 0x1680(r3)
    addi r0, r4, 0x1
    stw r0, 0x1680(r3)
    cmpwi r0, 0x4
    blt lbl_fn_80258574_00000BA0
    li r0, 0x0
    stw r0, 0x1680(r3)
lbl_fn_80258574_00000BA0:
    li r0, 0x0
    stw r0, 0x14cc(r3)
    stw r0, 0x14f4(r3)
    stw r0, 0x16ac(r3)
lbl_fn_80258574_00000BB0:
    lwz r5, 0xd1c(r3)
    addi r4, r1, 0x44
    lfs f0, 0x530(r3)
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x530(r5)
    lfs f5, 0x48(r1)
    lfs f4, 0x52c(r3)
    fsubs f6, f2, f0
    lfs f0, 0x528(r3)
    addi r3, r1, 0x38
    lfs f3, 0x44(r1)
    fsubs f4, f5, f4
    stfs f2, 0x4c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    stfs f6, 0x40(r1)
    bl fn_805F9940
    lwz r0, 0x14cc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80258574_00000C34
    cmpwi r0, 0x1
    beq lbl_fn_80258574_00000D10
    cmpwi r0, 0x2
    beq lbl_fn_80258574_00000D84
    cmpwi r0, 0x3
    beq lbl_fn_80258574_00000E44
    cmpwi r0, 0x4
    beq lbl_fn_80258574_00000EDC
    cmpwi r0, 0x5
    beq lbl_fn_80258574_00000F7C
    b lbl_fn_80258574_00001018
lbl_fn_80258574_00000C34:
    li r30, 0x0
    stw r30, 0x14c8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xc
    mr r3, r31
    li r4, 0x3
    stw r30, 0x14d0(r31)
    stw r30, 0x1660(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_808833F4
    li r30, 0x1
    stw r30, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808833E0
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x1ea
    lfs f2, lbl_80883440
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r31
    li r4, 0x65
    bl fn_80232B7C
    lfs f0, lbl_808833E0
    li r0, -0x1
    lfs f1, lbl_808833F4
    addi r4, r31, 0x15f8
    stfs f0, 0x20(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x2c
    addi r8, r1, 0x20
    stfs f0, 0x24(r1)
    addi r9, r1, 0x10
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    stw r30, 0x14cc(r31)
    b lbl_fn_80258574_00001018
lbl_fn_80258574_00000D10:
    li r30, 0x0
    stw r30, 0x14c8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xe
    mr r3, r31
    li r4, 0x3
    stw r30, 0x14d0(r31)
    stw r30, 0x1660(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_808833F4
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808833E0
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x67
    lfs f2, lbl_80883440
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x3
    stw r0, 0x14cc(r31)
    b lbl_fn_80258574_00001018
lbl_fn_80258574_00000D84:
    li r0, 0x9
    li r30, 0x0
    stw r0, 0x58c(r31)
    stw r30, 0x14c8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r1, 0x68
    li r4, 0x0
    li r5, 0x200
    stw r30, 0x14d0(r31)
    stw r30, 0x1660(r31)
    bl memset
    lwz r3, lbl_8087F1E4
    lwz r4, 0x27c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80258574_00000DCC
    b lbl_fn_80258574_00000DD0
lbl_fn_80258574_00000DCC:
    la r4, lbl_808813D0
lbl_fn_80258574_00000DD0:
    lwz r5, 0x60(r31)
    addi r3, r1, 0x68
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x68
    bl fn_80109828
    mr r3, r31
    bl fn_802598DC
    lwz r4, 0x1510(r31)
    mr r3, r31
    addi r6, r31, 0x1694
    li r5, 0x0
    bl fn_8016D74C
    li r0, 0x1
    stw r0, 0x50(r1)
    addi r3, r31, 0x1694
    addi r5, r1, 0x58
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x2
    lfs f2, 0x169c(r31)
    addi r4, r1, 0x50
    stfs f2, 0x60(r1)
    psq_st f1, 0x0(r5), 0, 0
    stw r0, 0x54(r1)
    lwz r3, 0x16a0(r31)
    bl fn_8025FE30
    b lbl_fn_80258574_00001018
lbl_fn_80258574_00000E44:
    li r30, 0x0
    stw r30, 0x14c8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xa
    mr r3, r31
    li r4, 0x6
    stw r30, 0x14d0(r31)
    stw r30, 0x1660(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_808833F4
    addi r6, r31, 0x1668
    lwz r9, 0x1518(r31)
    li r8, 0x1d
    psq_l f1, 0x528(r31), 0, 0
    li r0, 0x1
    psq_st f1, 0x0(r6), 0, 0
    addi r3, r31, 0xb0
    lfs f2, 0x530(r31)
    li r4, 0x0
    stfs f2, 0x1670(r31)
    li r5, 0x66
    lfs f1, lbl_808833E0
    li r6, 0x1
    stw r8, 0x560(r31)
    li r7, 0x0
    lfs f2, lbl_80883440
    li r8, 0x1
    stw r9, 0x638(r31)
    stw r0, 0x3fc(r31)
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lfs f0, lbl_808833E0
    stfs f0, 0xfb8(r31)
    b lbl_fn_80258574_00001018
lbl_fn_80258574_00000EDC:
    li r30, 0x0
    stw r30, 0x14c8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xa
    mr r3, r31
    li r4, 0x6
    stw r30, 0x14d0(r31)
    stw r30, 0x1660(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_808833F4
    addi r6, r31, 0x1668
    lwz r9, 0x1518(r31)
    li r8, 0x1d
    psq_l f1, 0x528(r31), 0, 0
    li r0, 0x1
    psq_st f1, 0x0(r6), 0, 0
    addi r3, r31, 0xb0
    lfs f2, 0x530(r31)
    li r4, 0x0
    stfs f2, 0x1670(r31)
    li r5, 0x66
    lfs f1, lbl_808833E0
    li r6, 0x1
    stw r8, 0x560(r31)
    li r7, 0x0
    lfs f2, lbl_80883440
    li r8, 0x1
    stw r9, 0x638(r31)
    stw r0, 0x3fc(r31)
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lfs f0, lbl_808833E0
    li r0, 0x5
    stfs f0, 0xfb8(r31)
    stw r0, 0x14cc(r31)
    b lbl_fn_80258574_00001018
lbl_fn_80258574_00000F7C:
    li r30, 0x0
    stw r30, 0x14c8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xa
    mr r3, r31
    li r4, 0x6
    stw r30, 0x14d0(r31)
    stw r30, 0x1660(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_808833F4
    addi r6, r31, 0x1668
    lwz r9, 0x1518(r31)
    li r8, 0x1d
    psq_l f1, 0x528(r31), 0, 0
    li r0, 0x1
    psq_st f1, 0x0(r6), 0, 0
    addi r3, r31, 0xb0
    lfs f2, 0x530(r31)
    li r4, 0x0
    stfs f2, 0x1670(r31)
    li r5, 0x66
    lfs f1, lbl_808833E0
    li r6, 0x1
    stw r8, 0x560(r31)
    li r7, 0x0
    lfs f2, lbl_80883440
    li r8, 0x1
    stw r9, 0x638(r31)
    stw r0, 0x3fc(r31)
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lfs f0, lbl_808833E0
    li r0, 0x3
    stfs f0, 0xfb8(r31)
    stw r0, 0x14cc(r31)
lbl_fn_80258574_00001018:
    lwz r3, 0x16a0(r31)
    lwz r0, 0x14cc(r31)
    stw r0, 0x14ec(r3)
    lwz r31, 0x26c(r1)
    lwz r30, 0x268(r1)
    lwz r0, 0x274(r1)
    mtlr r0
    addi r1, r1, 0x270
    blr
}

asm void fn_80258A50(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    addi r11, r1, 0x180
    stfd f31, 0x230(r1)
    psq_st f31, 0x238(r1), 0, 0
    stfd f30, 0x220(r1)
    psq_st f30, 0x228(r1), 0, 0
    stfd f29, 0x210(r1)
    psq_st f29, 0x218(r1), 0, 0
    stfd f28, 0x200(r1)
    psq_st f28, 0x208(r1), 0, 0
    stfd f27, 0x1f0(r1)
    psq_st f27, 0x1f8(r1), 0, 0
    stfd f26, 0x1e0(r1)
    psq_st f26, 0x1e8(r1), 0, 0
    stfd f25, 0x1d0(r1)
    psq_st f25, 0x1d8(r1), 0, 0
    stfd f24, 0x1c0(r1)
    psq_st f24, 0x1c8(r1), 0, 0
    stfd f23, 0x1b0(r1)
    psq_st f23, 0x1b8(r1), 0, 0
    stfd f22, 0x1a0(r1)
    psq_st f22, 0x1a8(r1), 0, 0
    stfd f21, 0x190(r1)
    psq_st f21, 0x198(r1), 0, 0
    stfd f20, 0x180(r1)
    psq_st f20, 0x188(r1), 0, 0
    bl _savegpr_19
    lwz r0, 0x55c(r3)
    lis r4, 0x4330
    stw r4, 0x130(r1)
    mr r20, r3
    cmpwi r0, 0x6
    stw r4, 0x138(r1)
    bne lbl_fn_80258A50_00001478
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1e
    bne lbl_fn_80258A50_00001488
    lwz r23, 0x638(r3)
    lwz r0, 0x150c(r3)
    cmplw r23, r0
    bne lbl_fn_80258A50_00001488
    lwz r25, 0xf80(r3)
    li r4, 0x0
    lbz r0, 0x1d(r25)
    cmpwi r0, 0x0
    bne lbl_fn_80258A50_00001114
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_80883448
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80258A50_00001114
    li r4, 0x1
lbl_fn_80258A50_00001114:
    cmpwi r4, 0x0
    beq lbl_fn_80258A50_00001418
    mr r3, r20
    bl fn_8016DA4C
    li r0, 0x1
    stb r0, 0x1d(r25)
    addi r5, r1, 0x2c
    lfs f4, lbl_8088345C
    lfs f2, 0x530(r20)
    addi r3, r1, 0x68
    psq_l f1, 0x528(r20), 0, 0
    li r4, 0x79
    psq_st f1, 0x0(r5), 0, 0
    lfs f3, lbl_808833E0
    lfs f5, 0x30(r1)
    lfs f0, lbl_808833F4
    fadds f4, f5, f4
    stfs f2, 0x34(r1)
    stfs f4, 0x30(r1)
    stfs f3, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    lfs f1, 0x538(r20)
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x68
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x24(r1)
    addi r3, r1, 0x20
    lfs f0, lbl_808833F4
    mr r4, r3
    fadds f0, f3, f0
    stfs f0, 0x24(r1)
    bl fn_805F98D0
    lis r4, lbl_80743D00@ha
    li r0, 0x9
    lis r3, 0x5555
    lfd f30, lbl_80743D00@l(r4)
    lfs f31, lbl_80883424
    addi r26, r1, 0x20
    lfs f21, lbl_808833E0
    addi r27, r1, 0x14
    lfs f22, lbl_808833F4
    xoris r28, r0, 0x8000
    lfs f23, lbl_80883464
    addi r24, r1, 0xf0
    lfs f24, lbl_80883460
    addi r31, r3, 0x5556
    lfs f25, lbl_80883458
    li r22, 0xa
    lfs f26, lbl_80883468
    li r21, 0x0
    lfs f27, lbl_8088346C
    li r30, 0x0
    lfs f28, lbl_80883454
    li r29, -0x1
    lfs f29, lbl_80883470
lbl_fn_80258A50_000011FC:
    stw r28, 0x134(r1)
    xoris r0, r21, 0x8000
    psq_l f1, 0x0(r26), 0, 0
    addi r3, r1, 0x38
    lfd f0, 0x130(r1)
    li r4, 0x79
    stw r0, 0x13c(r1)
    lfs f2, 0x28(r1)
    fsubs f4, f0, f30
    stw r28, 0x134(r1)
    lfd f3, 0x138(r1)
    lfd f0, 0x130(r1)
    fsubs f3, f3, f30
    psq_st f1, 0x0(r27), 0, 0
    fsubs f0, f0, f30
    stfs f2, 0x1c(r1)
    fnmsubs f3, f31, f4, f3
    fmuls f0, f31, f0
    stfs f21, 0x8(r1)
    stfs f21, 0xc(r1)
    fdivs f20, f3, f0
    stfs f22, 0x10(r1)
    lfs f1, 0x538(r20)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x38
    mr r5, r4
    bl fn_805F93C0
    fmuls f1, f23, f20
    addi r3, r1, 0x98
    addi r4, r1, 0x8
    bl fn_805F9050
    mr r4, r27
    mr r5, r27
    addi r3, r1, 0x98
    bl fn_805F93C0
    stw r30, 0xc8(r1)
    cmpwi r21, 0x0
    stfs f21, 0xcc(r1)
    stfs f24, 0xd0(r1)
    stfs f25, 0xd4(r1)
    stfs f26, 0xd8(r1)
    stfs f27, 0xdc(r1)
    stfs f28, 0xe0(r1)
    stw r30, 0xe4(r1)
    stw r29, 0xe8(r1)
    lwz r0, 0x14(r25)
    stw r0, 0xc8(r1)
    ble lbl_fn_80258A50_000013A8
    stw r30, 0xec(r1)
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_80258A50_00001374
lbl_fn_80258A50_000012D0:
    lwz r4, 0x38(r3)
    li r6, 0x0
    mr r5, r6
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80258A50_000012F4
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    bne lbl_fn_80258A50_000012F8
lbl_fn_80258A50_000012F4:
    li r5, 0x1
lbl_fn_80258A50_000012F8:
    cmpwi r5, 0x0
    bne lbl_fn_80258A50_0000133C
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80258A50_0000133C
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80258A50_00001330
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_80258A50_00001330
    li r4, 0x1
lbl_fn_80258A50_00001330:
    cmpwi r4, 0x0
    bne lbl_fn_80258A50_0000133C
    li r6, 0x1
lbl_fn_80258A50_0000133C:
    cmpwi r6, 0x0
    beq lbl_fn_80258A50_00001370
    lwz r0, 0xec(r1)
    addi r4, r1, 0xf0
    slwi r0, r0, 2
    add. r4, r4, r0
    beq lbl_fn_80258A50_0000135C
    stw r3, 0x0(r4)
lbl_fn_80258A50_0000135C:
    lwz r4, 0xec(r1)
    addi r0, r4, 0x1
    stw r0, 0xec(r1)
    cmplwi r0, 0x10
    bge lbl_fn_80258A50_0000137C
lbl_fn_80258A50_00001370:
    lwz r3, 0x14ac(r3)
lbl_fn_80258A50_00001374:
    cmpwi r3, 0x0
    bne lbl_fn_80258A50_000012D0
lbl_fn_80258A50_0000137C:
    lwz r0, 0xec(r1)
    lwz r19, 0xec(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80258A50_000013A8
    bl fn_80680CF8
    divwu r0, r3, r19
    mullw r0, r0, r19
    subf r0, r0, r3
    slwi r0, r0, 2
    lwzx r0, r24, r0
    stw r0, 0xc8(r1)
lbl_fn_80258A50_000013A8:
    bl fn_80680CF8
    mulhw r7, r31, r3
    stfs f29, 0xd8(r1)
    lfs f1, lbl_808833E0
    mr r4, r20
    lfs f2, lbl_808833F4
    mr r5, r23
    srwi r0, r7, 31
    addi r6, r1, 0x2c
    add r0, r7, r0
    addi r7, r1, 0x14
    mulli r0, r0, 0x3
    addi r8, r1, 0xc8
    li r9, 0x44
    li r10, 0x0
    subf r11, r0, r3
    lwz r3, lbl_8087F048
    addi r0, r11, 0x5
    xoris r0, r0, 0x8000
    stw r0, 0x13c(r1)
    lfd f0, 0x138(r1)
    fsubs f0, f0, f30
    stfs f0, 0xe0(r1)
    bl fn_800F8574
    addi r21, r21, 0x1
    cmpw r21, r22
    blt lbl_fn_80258A50_000011FC
    b lbl_fn_80258A50_00001488
lbl_fn_80258A50_00001418:
    lfs f21, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f21, f1
    cror eq, gt, eq
    bne lbl_fn_80258A50_00001488
    lis r5, lbl_80743D18@ha
    li r3, 0x34
    addi r5, r5, lbl_80743D18@l
    li r4, 0x1
    addi r5, r5, 0x2b
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80258A50_0000146C
    mr r4, r20
    bl fn_801C02F4
    mr r4, r3
lbl_fn_80258A50_0000146C:
    mr r3, r20
    bl fn_80178208
    b lbl_fn_80258A50_00001488
lbl_fn_80258A50_00001478:
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x58c(r3)
    stw r0, 0x14c8(r3)
lbl_fn_80258A50_00001488:
    mr r3, r20
    bl fn_80139560
    addi r11, r1, 0x180
    psq_l f31, 0x238(r1), 0, 0
    lfd f31, 0x230(r1)
    psq_l f30, 0x228(r1), 0, 0
    lfd f30, 0x220(r1)
    psq_l f29, 0x218(r1), 0, 0
    lfd f29, 0x210(r1)
    psq_l f28, 0x208(r1), 0, 0
    lfd f28, 0x200(r1)
    psq_l f27, 0x1f8(r1), 0, 0
    lfd f27, 0x1f0(r1)
    psq_l f26, 0x1e8(r1), 0, 0
    lfd f26, 0x1e0(r1)
    psq_l f25, 0x1d8(r1), 0, 0
    lfd f25, 0x1d0(r1)
    psq_l f24, 0x1c8(r1), 0, 0
    lfd f24, 0x1c0(r1)
    psq_l f23, 0x1b8(r1), 0, 0
    lfd f23, 0x1b0(r1)
    psq_l f22, 0x1a8(r1), 0, 0
    lfd f22, 0x1a0(r1)
    psq_l f21, 0x198(r1), 0, 0
    lfd f21, 0x190(r1)
    psq_l f20, 0x188(r1), 0, 0
    lfd f20, 0x180(r1)
    bl _restgpr_19
    lwz r0, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_80258F1C(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0xe4(r1)
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    stw r31, 0xcc(r1)
    stw r30, 0xc8(r1)
    mr r30, r3
    lwz r0, 0x1518(r3)
    stw r0, 0x638(r3)
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80258F1C_000015BC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lis r3, lbl_80743D18@ha
    lfs f0, lbl_808833E0
    addi r3, r3, lbl_80743D18@l
    li r7, 0x6
    addi r5, r3, 0x2b
    li r0, 0x0
    stw r7, 0x58c(r30)
    mr r6, r5
    li r3, 0x34
    li r4, 0x0
    stfs f0, 0xfb8(r30)
    li r7, 0x0
    stw r0, 0x14c8(r30)
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80258F1C_000015B0
    mr r4, r30
    bl fn_801C02F4
    mr r4, r3
lbl_fn_80258F1C_000015B0:
    mr r3, r30
    bl fn_80178208
    b lbl_fn_80258F1C_000017F8
lbl_fn_80258F1C_000015BC:
    lfs f4, 0x2e4(r30)
    lfs f0, lbl_80883438
    lfs f3, lbl_8088344C
    fsubs f0, f4, f0
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f3
    bge lbl_fn_80258F1C_00001758
    lwz r5, 0xd1c(r30)
    addi r3, r30, 0x1674
    lfs f6, lbl_808833E0
    li r0, 0x0
    lfs f2, 0x530(r5)
    addi r4, r1, 0x78
    psq_l f1, 0x528(r5), 0, 0
    addi r5, r1, 0x68
    psq_st f1, 0x0(r3), 0, 0
    fadds f7, f2, f6
    lfs f5, lbl_808833F4
    addi r6, r1, 0x5c
    lfs f4, 0x1678(r30)
    lis r7, 0x8000
    lfs f0, lbl_80883474
    lfs f3, 0x1674(r30)
    fadds f8, f4, f5
    stfs f2, 0x167c(r30)
    fadds f4, f4, f0
    fadds f3, f3, f6
    li r8, 0x0
    stfs f6, 0x50(r1)
    lwz r3, lbl_8087EE98
    li r9, 0x0
    stfs f5, 0x54(r1)
    stfs f6, 0x58(r1)
    stfs f3, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f7, 0x70(r1)
    stfs f6, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f6, 0x4c(r1)
    stfs f3, 0x5c(r1)
    stfs f4, 0x60(r1)
    stfs f7, 0x64(r1)
    stw r0, 0xac(r1)
    stw r0, 0xb0(r1)
    stw r0, 0xb4(r1)
    stw r0, 0xb8(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80258F1C_0000169C
    addi r3, r1, 0x88
    lfs f2, 0x90(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0x1674
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x167c(r30)
lbl_fn_80258F1C_0000169C:
    lfs f6, lbl_808833E0
    mr r3, r30
    lfs f5, lbl_808833F4
    li r4, 0x3e8
    lfs f4, 0x1674(r30)
    lfs f3, 0x1678(r30)
    lfs f0, 0x167c(r30)
    fadds f4, f4, f6
    fadds f3, f3, f6
    stfs f6, 0x38(r1)
    fadds f0, f0, f5
    stfs f6, 0x3c(r1)
    stfs f5, 0x40(r1)
    stfs f4, 0x1674(r30)
    stfs f3, 0x1678(r30)
    stfs f0, 0x167c(r30)
    bl fn_80232B7C
    lfs f1, lbl_808833F4
    li r3, -0x1
    stfs f1, 0x28(r1)
    li r0, 0x1
    addi r4, r30, 0x1604
    addi r7, r30, 0x1674
    stfs f1, 0x2c(r1)
    addi r8, r30, 0x534
    addi r9, r1, 0x28
    li r5, 0x0
    stfs f1, 0x30(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lis r4, lbl_80743D18@ha
    lfs f1, lbl_808833F4
    addi r4, r4, lbl_80743D18@l
    addi r3, r1, 0x10
    addi r4, r4, 0x1b0
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80258F1C_000017F8
lbl_fn_80258F1C_00001758:
    lfs f0, lbl_80883478
    fsubs f0, f4, f0
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f3
    bge lbl_fn_80258F1C_000017F8
    mr r3, r30
    li r4, 0x3e8
    bl fn_80232B7C
    lfs f1, lbl_808833F4
    li r31, -0x1
    stfs f1, 0x18(r1)
    li r0, 0x1
    addi r4, r30, 0x1610
    addi r7, r30, 0x1674
    stfs f1, 0x1c(r1)
    addi r8, r30, 0x534
    addi r9, r1, 0x18
    li r5, 0x0
    stfs f1, 0x20(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f1, 0x24(r1)
    stw r31, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    stw r31, 0x8(r1)
    mr r4, r30
    lfs f1, lbl_808833E0
    addi r7, r30, 0x1674
    stw r31, 0xc(r1)
    addi r8, r30, 0x534
    lfs f2, lbl_808833F4
    li r9, 0x0
    lwz r3, lbl_8087F048
    li r10, 0x1e
    lwz r5, 0x638(r30)
    lwz r6, 0x590(r30)
    bl fn_800FAB80
lbl_fn_80258F1C_000017F8:
    lwz r0, 0xe4(r1)
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_8025922C(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stfd f30, 0x70(r1)
    psq_st f30, 0x78(r1), 0, 0
    stfd f29, 0x60(r1)
    psq_st f29, 0x68(r1), 0, 0
    stfd f28, 0x50(r1)
    psq_st f28, 0x58(r1), 0, 0
    lwz r0, 0x55c(r3)
    lwz r6, lbl_8087F430
    cmpwi r0, 0x6
    bne lbl_fn_8025922C_0000199C
    lwz r0, 0x560(r3)
    cmpwi r0, 0xe
    bne lbl_fn_8025922C_000019D4
    addi r4, r1, 0x8
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x164c(r3)
    lfs f0, 0xc(r1)
    lfs f28, lbl_8088347C
    cmpwi r0, 0x0
    lfs f2, 0x530(r3)
    fadds f0, f0, f28
    stfs f2, 0x10(r1)
    stfs f0, 0xc(r1)
    bne lbl_fn_8025922C_0000196C
    lfs f29, 0x594(r6)
    addi r5, r6, 0x4d8
    lfs f30, 0x59c(r6)
    lfs f31, 0x5a0(r6)
    lfs f13, 0x5a4(r6)
    lfs f12, 0x5a8(r6)
    lfs f11, 0x5ac(r6)
    lfs f10, 0x5b0(r6)
    lfs f9, 0x5b4(r6)
    lfs f8, 0x5b8(r6)
    lfs f7, 0x5bc(r6)
    lwz r4, 0x5c0(r6)
    lfs f6, lbl_80883480
    stw r3, 0x8a0(r6)
    lfs f5, lbl_80883464
    lwz r0, 0x4d8(r6)
    lfs f4, lbl_80883484
    cmpwi r0, 0x4
    stfs f29, 0x20(r1)
    stfs f30, 0x28(r1)
    stfs f31, 0x2c(r1)
    stfs f13, 0x30(r1)
    stfs f12, 0x34(r1)
    stfs f11, 0x38(r1)
    stfs f10, 0x3c(r1)
    stfs f9, 0x40(r1)
    stfs f8, 0x44(r1)
    stfs f7, 0x48(r1)
    stw r4, 0x4c(r1)
    stfs f6, 0x1c(r1)
    stfs f5, 0x18(r1)
    stfs f28, 0x14(r1)
    stfs f4, 0x24(r1)
    beq lbl_fn_8025922C_0000196C
    li r0, 0x4
    stw r0, 0x0(r5)
    lfs f3, lbl_80883488
    stfs f28, 0xc(r5)
    lfs f0, lbl_808833F4
    stfs f5, 0x10(r5)
    stfs f6, 0x14(r5)
    stfs f29, 0x18(r5)
    stfs f4, 0x1c(r5)
    stfs f30, 0x20(r5)
    stfs f31, 0x24(r5)
    stfs f13, 0x28(r5)
    stfs f12, 0x2c(r5)
    stfs f11, 0x30(r5)
    stfs f10, 0x34(r5)
    stfs f9, 0x38(r5)
    stfs f8, 0x3c(r5)
    stfs f7, 0x40(r5)
    stw r4, 0x44(r5)
    stfs f3, 0x8(r5)
    stfs f0, 0x4(r5)
lbl_fn_8025922C_0000196C:
    addi r4, r3, 0x1654
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    li r0, 0x1
    lfs f2, 0x530(r3)
    lfs f3, 0x1658(r3)
    lfs f0, lbl_80883444
    stw r0, 0x1650(r3)
    fadds f0, f3, f0
    stfs f2, 0x165c(r3)
    stfs f0, 0x1658(r3)
    b lbl_fn_8025922C_000019D4
lbl_fn_8025922C_0000199C:
    lwz r0, 0x164c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8025922C_000019BC
    li r0, 0x0
    stw r0, 0x8a0(r6)
    stw r0, 0x4d8(r6)
    stb r0, 0x97c(r6)
    stw r0, 0x164c(r3)
lbl_fn_8025922C_000019BC:
    li r5, 0x1
    li r4, 0x6
    li r0, 0x0
    stw r5, 0x14f4(r3)
    stw r4, 0x58c(r3)
    stw r0, 0x14c8(r3)
lbl_fn_8025922C_000019D4:
    bl fn_80139560
    lwz r0, 0x94(r1)
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    psq_l f30, 0x78(r1), 0, 0
    lfd f30, 0x70(r1)
    psq_l f29, 0x68(r1), 0, 0
    lfd f29, 0x60(r1)
    psq_l f28, 0x58(r1), 0, 0
    lfd f28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}
