#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_24(void);
extern void _restgpr_27(void);
extern void _savegpr_24(void);
extern void _savegpr_27(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_80092814(void);
extern void fn_80097D40(void);
extern void fn_80097D7C(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_800FD658(void);
extern void fn_80107168(void);
extern void fn_801092C8(void);
extern void fn_8012DB04(void);
extern void fn_8012DD70(void);
extern void fn_8013CB68(void);
extern void fn_80140588(void);
extern void fn_80148990(void);
extern void fn_801595BC(void);
extern void fn_8015E7A0(void);
extern void fn_8016E4C4(void);
extern void fn_801781B0(void);
extern void fn_80219E6C(void);
extern void fn_80310314(void);
extern void fn_80375184(void);
extern void fn_803EA77C(void);
extern void fn_8044D6AC(void);
extern void fn_805A40BC(void);
extern void fn_805A4258(void);
extern void fn_805A4A20(void);
extern void fn_805A5224(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern void fn_80695720(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_80788398[];
extern u8 lbl_80749250[];
extern u8 lbl_80749264[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D9E0;
extern u32 lbl_8087D9E4;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F8A0;
extern u32 lbl_80884CA4;
extern u32 lbl_80884CA8;
extern u32 lbl_80884CAC;
extern u32 lbl_80884CC4;
extern u32 lbl_80884CC8;
extern u32 lbl_80884CCC;
extern u32 lbl_80884CD0;
extern u32 lbl_80884CD4;
extern u32 lbl_80884CD8;
extern u32 lbl_80884CDC;
extern u32 lbl_80884CE0;
extern u32 lbl_80884CE4;
extern u32 lbl_80884CE8;

/* Function declarations */
void fn_80311BB8(void);
void fn_803123D0(void);
void fn_80312EF8(void);
void fn_803130DC(void);
void fn_8031319C(void);
void fn_803132D0(void);
void fn_8031348C(void);

asm void fn_80311BB8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lwz r4, 0x14c0(r3)
    mr r27, r3
    addi r0, r4, 0x1
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80311BB8_00000068
    bl fn_80375184
    cmpwi r3, 0x0
    bne lbl_fn_80311BB8_00000068
    lwz r0, 0x58c(r27)
    cmpwi r0, 0x8
    beq lbl_fn_80311BB8_00000050
    cmpwi r0, 0xa
    bne lbl_fn_80311BB8_00000068
lbl_fn_80311BB8_00000050:
    lwz r0, 0x137c(r27)
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    bne lbl_fn_80311BB8_00000068
    li r0, 0x1
    stw r0, 0x15a8(r27)
lbl_fn_80311BB8_00000068:
    lwz r0, 0x1374(r27)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80311BB8_00000178
    lwz r0, 0x54c(r27)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_80311BB8_00000178
    lwz r3, 0x58c(r27)
    lwz r0, 0x54c(r27)
    cmpwi r3, 0xb
    ori r0, r0, 0x2000
    stw r0, 0x54c(r27)
    beq lbl_fn_80311BB8_000000A8
    cmpwi r3, 0xd
    bne lbl_fn_80311BB8_000000B4
lbl_fn_80311BB8_000000A8:
    li r0, 0x1
    stw r0, 0x15a4(r27)
    b lbl_fn_80311BB8_00000178
lbl_fn_80311BB8_000000B4:
    lwz r5, 0x14e4(r27)
    cmpwi r5, 0x0
    beq lbl_fn_80311BB8_00000150
    lwz r7, 0x38(r5)
    li r4, 0x0
    li r0, 0x0
    li r3, 0x0
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_80311BB8_000000EC
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_80311BB8_000000EC
    li r3, 0x1
lbl_fn_80311BB8_000000EC:
    cmpwi r3, 0x0
    beq lbl_fn_80311BB8_00000108
    lwz r3, 0x7e0(r5)
    rlwinm r3, r3, 0, 26, 26
    cmplwi r3, 0x20
    beq lbl_fn_80311BB8_00000108
    li r0, 0x1
lbl_fn_80311BB8_00000108:
    cmpwi r0, 0x0
    beq lbl_fn_80311BB8_0000013C
    lwz r0, 0x55c(r5)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80311BB8_00000130
    lwz r0, 0x560(r5)
    cmpwi r0, 0x1c
    bne lbl_fn_80311BB8_00000130
    li r3, 0x1
lbl_fn_80311BB8_00000130:
    cmpwi r3, 0x0
    bne lbl_fn_80311BB8_0000013C
    li r4, 0x1
lbl_fn_80311BB8_0000013C:
    cmpwi r4, 0x0
    beq lbl_fn_80311BB8_00000158
    lwz r0, 0x15a0(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80311BB8_00000158
lbl_fn_80311BB8_00000150:
    li r4, 0x8
    b lbl_fn_80311BB8_0000015C
lbl_fn_80311BB8_00000158:
    li r4, 0xd
lbl_fn_80311BB8_0000015C:
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    li r0, 0x1
    stw r0, 0x15a4(r27)
lbl_fn_80311BB8_00000178:
    lwz r0, 0x58c(r27)
    cmplwi r0, 0xd
    bgt lbl_fn_80311BB8_000007E8
    lis r3, jumptable_80788398@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80788398@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80311BB8_00000800
    lwz r0, 0x14cc(r27)
    srwi. r0, r0, 31
    beq lbl_fn_80311BB8_000005F8
    lwz r12, 0x0(r27)
    mr r3, r27
    li r4, 0x9
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    lwz r0, 0x1510(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80311BB8_000005F8
    lwz r3, 0x62c(r27)
    li r0, 0x0
    stw r0, 0x624(r27)
    cmpwi r3, 0x0
    stw r0, 0x628(r27)
    beq lbl_fn_80311BB8_00000210
    beq lbl_fn_80311BB8_00000208
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80311BB8_00000208:
    li r0, 0x0
    stw r0, 0x62c(r27)
lbl_fn_80311BB8_00000210:
    li r28, 0x0
    li r26, 0x0
    lis r31, fn_80148990@ha
    li r30, 0x8
    b lbl_fn_80311BB8_000005C0
lbl_fn_80311BB8_00000224:
    lwz r0, 0x62c(r27)
    lwz r3, 0x1518(r27)
    cmpwi r0, 0x0
    add r29, r3, r26
    beq lbl_fn_80311BB8_00000244
    lwz r0, 0x628(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80311BB8_000003DC
lbl_fn_80311BB8_00000244:
    lwz r0, 0x628(r27)
    cmplwi r0, 0x8
    bgt lbl_fn_80311BB8_00000580
    li r3, 0xb0
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    li r7, 0x0
    bl fn_800846FC
    addi r4, r31, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x62c(r27)
    mr r25, r3
    cmpwi r0, 0x0
    beq lbl_fn_80311BB8_000003D0
    lwz r0, 0x624(r27)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80311BB8_000002A0
    mr r5, r0
lbl_fn_80311BB8_000002A0:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80311BB8_000003BC
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80311BB8_00000384
lbl_fn_80311BB8_000002B8:
    lwz r0, 0x62c(r27)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x62c(r27)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x62c(r27)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x62c(r27)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    bdnz lbl_fn_80311BB8_000002B8
    andi. r5, r5, 0x3
    beq lbl_fn_80311BB8_000003BC
lbl_fn_80311BB8_00000384:
    mtctr r5
lbl_fn_80311BB8_00000388:
    lwz r0, 0x62c(r27)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    bdnz lbl_fn_80311BB8_00000388
lbl_fn_80311BB8_000003BC:
    lwz r3, 0x62c(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80311BB8_000003D0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80311BB8_000003D0:
    stw r25, 0x62c(r27)
    stw r30, 0x628(r27)
    b lbl_fn_80311BB8_00000580
lbl_fn_80311BB8_000003DC:
    lwz r3, 0x624(r27)
    cmplw r3, r0
    blt lbl_fn_80311BB8_00000580
    slwi r25, r3, 1
    cmplw r0, r25
    bgt lbl_fn_80311BB8_00000580
    mulli r3, r25, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r25
    addi r4, r31, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x62c(r27)
    mr r24, r3
    cmpwi r0, 0x0
    beq lbl_fn_80311BB8_00000578
    lwz r0, 0x624(r27)
    mr r5, r25
    cmplw r25, r0
    ble lbl_fn_80311BB8_00000448
    mr r5, r0
lbl_fn_80311BB8_00000448:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80311BB8_00000564
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80311BB8_0000052C
lbl_fn_80311BB8_00000460:
    lwz r0, 0x62c(r27)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x62c(r27)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x62c(r27)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x62c(r27)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    bdnz lbl_fn_80311BB8_00000460
    andi. r5, r5, 0x3
    beq lbl_fn_80311BB8_00000564
lbl_fn_80311BB8_0000052C:
    mtctr r5
lbl_fn_80311BB8_00000530:
    lwz r0, 0x62c(r27)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    bdnz lbl_fn_80311BB8_00000530
lbl_fn_80311BB8_00000564:
    lwz r3, 0x62c(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80311BB8_00000578
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80311BB8_00000578:
    stw r24, 0x62c(r27)
    stw r25, 0x628(r27)
lbl_fn_80311BB8_00000580:
    lwz r0, 0x624(r27)
    addi r28, r28, 0x1
    lwz r4, 0x62c(r27)
    addi r26, r26, 0x14
    mulli r3, r0, 0x14
    lwz r0, 0x0(r29)
    stwux r0, r3, r4
    lfs f2, 0xc(r29)
    psq_l f1, 0x4(r29), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    stfs f2, 0xc(r3)
    lfs f0, 0x10(r29)
    stfs f0, 0x10(r3)
    lwz r3, 0x624(r27)
    addi r0, r3, 0x1
    stw r0, 0x624(r27)
lbl_fn_80311BB8_000005C0:
    lwz r0, 0x1510(r27)
    cmplw r28, r0
    blt lbl_fn_80311BB8_00000224
    lwz r3, 0x1518(r27)
    li r0, 0x0
    stw r0, 0x1510(r27)
    cmpwi r3, 0x0
    stw r0, 0x1514(r27)
    beq lbl_fn_80311BB8_000005F8
    beq lbl_fn_80311BB8_000005F0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80311BB8_000005F0:
    li r0, 0x0
    stw r0, 0x1518(r27)
lbl_fn_80311BB8_000005F8:
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80311BB8_00000800
    lwz r0, 0x14cc(r27)
    srwi. r0, r0, 31
    beq lbl_fn_80311BB8_0000063C
    lwz r12, 0x0(r27)
    mr r3, r27
    li r4, 0xa
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14f0(r27)
    stw r0, 0x150c(r27)
lbl_fn_80311BB8_0000063C:
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80311BB8_00000800
    lwz r0, 0x14cc(r27)
    srwi. r0, r0, 31
    beq lbl_fn_80311BB8_00000678
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r4, 0x14c4(r27)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80311BB8_00000678:
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80311BB8_00000800
    lwz r0, 0x14cc(r27)
    srwi. r0, r0, 31
    beq lbl_fn_80311BB8_000006BC
    lwz r12, 0x0(r27)
    mr r3, r27
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x150c(r27)
lbl_fn_80311BB8_000006BC:
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80311BB8_00000800
    lwz r0, 0x14cc(r27)
    srwi. r0, r0, 31
    beq lbl_fn_80311BB8_0000070C
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r4, 0x14c4(r27)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14c4(r27)
    cmpwi r0, 0x9
    bne lbl_fn_80311BB8_0000070C
    li r0, 0x0
    stw r0, 0x150c(r27)
lbl_fn_80311BB8_0000070C:
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80311BB8_00000800
    lwz r0, 0x14cc(r27)
    srwi. r0, r0, 31
    beq lbl_fn_80311BB8_00000750
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r4, 0x14c4(r27)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x15a4(r27)
lbl_fn_80311BB8_00000750:
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80311BB8_00000800
    lwz r0, 0x14cc(r27)
    srwi. r0, r0, 31
    beq lbl_fn_80311BB8_000007C4
    lwz r0, 0x15ac(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80311BB8_000007A4
    lwz r12, 0x0(r27)
    mr r3, r27
    li r4, 0x9
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14f4(r27)
    stw r0, 0x150c(r27)
    b lbl_fn_80311BB8_000007C4
lbl_fn_80311BB8_000007A4:
    addi r3, r27, 0x7d4
    bl fn_8012DD70
    lwz r12, 0x0(r27)
    mr r3, r27
    li r4, 0x8
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80311BB8_000007C4:
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80311BB8_00000800
    mr r3, r27
    bl fn_805A40BC
    b lbl_fn_80311BB8_00000800
lbl_fn_80311BB8_000007E8:
    lwz r12, 0x0(r27)
    mr r3, r27
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80311BB8_00000800:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803123D0(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    addi r4, r1, 0x90
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    lfs f31, lbl_80884CA8
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    lfs f30, lbl_80884CA4
    stfd f29, 0x140(r1)
    psq_st f29, 0x148(r1), 0, 0
    stfd f28, 0x130(r1)
    psq_st f28, 0x138(r1), 0, 0
    stw r31, 0x12c(r1)
    stw r30, 0x128(r1)
    stw r29, 0x124(r1)
    mr r29, r3
    stw r28, 0x120(r1)
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    addi r3, r3, 0x7d4
    stfs f2, 0x98(r1)
    psq_st f1, 0x0(r4), 0, 0
    bl fn_8012DB04
    lfs f0, lbl_80884CC4
    fcmpo cr0, f1, f0
    ble lbl_fn_803123D0_00000894
    addi r3, r29, 0x7d4
    bl fn_8012DB04
    b lbl_fn_803123D0_00000898
lbl_fn_803123D0_00000894:
    fmr f1, f0
lbl_fn_803123D0_00000898:
    lwz r0, 0x55c(r29)
    li r31, 0x0
    cmpwi r0, 0x2
    bne lbl_fn_803123D0_0000123C
    lwz r0, 0x58c(r29)
    cmpwi r0, 0x7
    beq lbl_fn_803123D0_000008E8
    cmpwi r0, 0x8
    beq lbl_fn_803123D0_00000918
    cmpwi r0, 0x9
    beq lbl_fn_803123D0_00000944
    cmpwi r0, 0xa
    beq lbl_fn_803123D0_000009DC
    cmpwi r0, 0xb
    beq lbl_fn_803123D0_00000AC8
    cmpwi r0, 0xc
    beq lbl_fn_803123D0_00000E30
    cmpwi r0, 0xd
    beq lbl_fn_803123D0_000011CC
    b lbl_fn_803123D0_00001248
lbl_fn_803123D0_000008E8:
    stfs f1, 0x2e8(r29)
    addi r3, r29, 0xb0
    lfs f28, 0x2e4(r29)
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f28, f1
    cror eq, gt, eq
    bne lbl_fn_803123D0_00001248
    lwz r0, 0x14cc(r29)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r29)
    b lbl_fn_803123D0_00001248
lbl_fn_803123D0_00000918:
    lfs f4, 0x2e4(r29)
    fneg f3, f1
    lfs f0, lbl_80884CA8
    stfs f3, 0x2e8(r29)
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_803123D0_00001248
    lwz r0, 0x14cc(r29)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r29)
    b lbl_fn_803123D0_00001248
lbl_fn_803123D0_00000944:
    stfs f1, 0x2e8(r29)
    mr r3, r29
    lwz r12, 0x0(r29)
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803123D0_00000984
    lwz r0, 0x15a4(r29)
    cmpwi r0, 0x0
    bne lbl_fn_803123D0_00000984
    lfs f0, 0x1504(r29)
    lfs f3, 0x14e0(r29)
    fmuls f0, f0, f0
    fcmpo cr0, f3, f0
    ble lbl_fn_803123D0_0000099C
lbl_fn_803123D0_00000984:
    lwz r3, 0x14cc(r29)
    li r0, 0x8
    stw r0, 0x14c4(r29)
    oris r3, r3, 0x8000
    stw r3, 0x14cc(r29)
    b lbl_fn_803123D0_00001248
lbl_fn_803123D0_0000099C:
    lwz r3, 0x14c0(r29)
    lwz r0, 0x150c(r29)
    cmpw r3, r0
    ble lbl_fn_803123D0_00001248
    lfs f0, 0x1508(r29)
    fmuls f0, f0, f0
    fcmpo cr0, f3, f0
    bge lbl_fn_803123D0_00001248
    lwz r4, 0x14cc(r29)
    li r3, 0xb
    li r0, 0x0
    stw r3, 0x14c4(r29)
    oris r4, r4, 0x8000
    stw r4, 0x14cc(r29)
    stw r0, 0x150c(r29)
    b lbl_fn_803123D0_00001248
lbl_fn_803123D0_000009DC:
    mr r3, r29
    li r4, 0x0
    bl fn_8016E4C4
    lwz r0, 0x12a4(r29)
    lwz r3, 0x5c0(r29)
    extrwi. r0, r0, 1, 13
    clrrwi r0, r3, 1
    stw r0, 0x5c0(r29)
    beq lbl_fn_803123D0_00000A18
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, 0x1
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
lbl_fn_803123D0_00000A18:
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803123D0_00000A6C
    lwz r3, 0x14c0(r29)
    lwz r0, 0x150c(r29)
    cmpw r3, r0
    ble lbl_fn_803123D0_00000A6C
    lfs f0, 0x1500(r29)
    lfs f3, 0x14e0(r29)
    fmuls f0, f0, f0
    fcmpo cr0, f3, f0
    bge lbl_fn_803123D0_00000A6C
    lwz r3, 0x14cc(r29)
    li r0, 0x0
    stw r0, 0x150c(r29)
    oris r3, r3, 0x8000
    stw r3, 0x14cc(r29)
lbl_fn_803123D0_00000A6C:
    lwz r0, 0xd18(r29)
    cmpwi r0, 0x0
    beq lbl_fn_803123D0_00001300
    lwz r0, 0x54c(r29)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_803123D0_00001300
    lwz r0, 0x15a8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_803123D0_00001300
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803123D0_00001300
    bl fn_80375184
    cmpwi r3, 0x0
    beq lbl_fn_803123D0_00001300
    lwz r3, 0x54c(r29)
    li r0, 0x0
    stw r0, 0x15a4(r29)
    rlwinm r3, r3, 0, 19, 17
    stw r3, 0x54c(r29)
    stw r0, 0x15a8(r29)
    b lbl_fn_803123D0_00001300
lbl_fn_803123D0_00000AC8:
    lwz r0, 0x15ac(r29)
    stfs f1, 0x2e8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_803123D0_00000B04
    lwz r3, 0x14e4(r29)
    cmpwi r3, 0x0
    beq lbl_fn_803123D0_00000B04
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803123D0_00000B04
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803123D0_00000B04
    li r0, 0x2
    stw r0, 0x55b8(r3)
lbl_fn_803123D0_00000B04:
    lwz r0, 0x14e4(r29)
    lfs f3, 0x2e4(r29)
    cmpwi r0, 0x0
    bne lbl_fn_803123D0_00000B9C
    lfs f0, lbl_80884CC8
    fcmpo cr0, f0, f3
    cror eq, lt, eq
    bne lbl_fn_803123D0_00000B9C
    lfs f0, lbl_80884CCC
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_803123D0_00000B9C
    lwz r4, 0xd1c(r29)
    cmpwi r4, 0x0
    beq lbl_fn_803123D0_00000B7C
    lfs f3, 0x530(r4)
    addi r3, r1, 0x78
    lfs f0, 0x530(r29)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x7c(r1)
    stfs f0, 0x78(r1)
    stfs f6, 0x80(r1)
    bl fn_805F9920
    stfs f1, 0x14e0(r29)
lbl_fn_803123D0_00000B7C:
    lfs f0, 0x1508(r29)
    lfs f3, 0x14e0(r29)
    fmuls f0, f0, f0
    fcmpo cr0, f3, f0
    bge lbl_fn_803123D0_00000B9C
    lwz r4, 0xd1c(r29)
    mr r3, r29
    bl fn_8031319C
lbl_fn_803123D0_00000B9C:
    lfs f28, 0x2e4(r29)
    addi r3, r29, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f28, f1
    cror eq, gt, eq
    bne lbl_fn_803123D0_00000BE4
    lwz r0, 0x14e4(r29)
    lwz r3, 0x14cc(r29)
    cmpwi r0, 0x0
    oris r3, r3, 0x8000
    stw r3, 0x14cc(r29)
    beq lbl_fn_803123D0_00000BDC
    li r0, 0xc
    stw r0, 0x14c4(r29)
    b lbl_fn_803123D0_00000BE4
lbl_fn_803123D0_00000BDC:
    li r0, 0x9
    stw r0, 0x14c4(r29)
lbl_fn_803123D0_00000BE4:
    lwz r0, 0x14e4(r29)
    cmpwi r0, 0x0
    bne lbl_fn_803123D0_00000E14
    lwz r4, 0xd1c(r29)
    cmpwi r4, 0x0
    beq lbl_fn_803123D0_00000E14
    lfs f3, 0x530(r4)
    addi r3, r1, 0x84
    lfs f0, 0x530(r29)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x88(r1)
    stfs f0, 0x84(r1)
    stfs f6, 0x8c(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80884CD0
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_803123D0_00000C54
    addi r3, r1, 0x84
    mr r4, r3
    bl fn_805F98D0
lbl_fn_803123D0_00000C54:
    lfs f2, 0x8c(r1)
    addi r3, r1, 0x84
    lfs f0, lbl_80884CD0
    addi r30, r1, 0x6c
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x74(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_803123D0_00000CA4
    lfs f3, 0x6c(r1)
    lfs f0, lbl_80884CA8
    fcmpo cr0, f3, f0
    ble lbl_fn_803123D0_00000C98
    lfs f0, lbl_80884CD4
    b lbl_fn_803123D0_00000C9C
lbl_fn_803123D0_00000C98:
    lfs f0, lbl_80884CD8
lbl_fn_803123D0_00000C9C:
    stfs f0, 0x48(r1)
    b lbl_fn_803123D0_00000CB8
lbl_fn_803123D0_00000CA4:
    frsp f2, f2
    lfs f1, 0x6c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_803123D0_00000CB8:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xa0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884CA8
    addi r4, r1, 0x38
    lfs f28, 0xa8(r1)
    mr r5, r4
    lfs f29, 0xa4(r1)
    addi r3, r1, 0xd0
    lfs f13, 0xa0(r1)
    lfs f12, 0xb8(r1)
    lfs f11, 0xb4(r1)
    lfs f10, 0xb0(r1)
    lfs f9, 0xc8(r1)
    lfs f8, 0xc4(r1)
    lfs f7, 0xc0(r1)
    lfs f6, 0xcc(r1)
    lfs f5, 0xbc(r1)
    lfs f4, 0xac(r1)
    lfs f0, lbl_80884CA4
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x74(r1)
    stfs f3, 0x100(r1)
    stfs f3, 0x104(r1)
    stfs f3, 0x108(r1)
    stfs f0, 0x10c(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f28, 0x10(r1)
    stfs f13, 0xd0(r1)
    stfs f29, 0xd4(r1)
    stfs f28, 0xd8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xe0(r1)
    stfs f11, 0xe4(r1)
    stfs f12, 0xe8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xf0(r1)
    stfs f8, 0xf4(r1)
    stfs f9, 0xf8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xdc(r1)
    stfs f5, 0xec(r1)
    stfs f6, 0xfc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80884CD0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_803123D0_00000DD4
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884CA8
    fcmpo cr0, f3, f0
    ble lbl_fn_803123D0_00000DC4
    lfs f0, lbl_80884CD4
    b lbl_fn_803123D0_00000DC8
lbl_fn_803123D0_00000DC4:
    lfs f0, lbl_80884CD8
lbl_fn_803123D0_00000DC8:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_803123D0_00000DE8
lbl_fn_803123D0_00000DD4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_803123D0_00000DE8:
    lfs f2, lbl_80884CA8
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x90
    stfs f2, 0x4c(r1)
    stfs f2, 0x74(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x98(r1)
    b lbl_fn_803123D0_00001248
lbl_fn_803123D0_00000E14:
    addi r4, r29, 0x14d4
    lfs f2, 0x14dc(r29)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x90
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x98(r1)
    b lbl_fn_803123D0_00001248
lbl_fn_803123D0_00000E30:
    lwz r0, 0x15ac(r29)
    stfs f1, 0x2e8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_803123D0_00000E6C
    lwz r3, 0x14e4(r29)
    cmpwi r3, 0x0
    beq lbl_fn_803123D0_00000E6C
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803123D0_00000E6C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803123D0_00000E6C
    li r0, 0x2
    stw r0, 0x55b8(r3)
lbl_fn_803123D0_00000E6C:
    addi r3, r29, 0x7d4
    bl fn_8012DB04
    lwz r4, 0x14f8(r29)
    lis r0, 0x4330
    stw r0, 0x110(r1)
    lis r3, lbl_80749250@ha
    xoris r0, r4, 0x8000
    lfd f3, lbl_80749250@l(r3)
    stw r0, 0x114(r1)
    lwz r0, 0x14c0(r29)
    lfd f0, 0x110(r1)
    fsubs f0, f0, f3
    fdivs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x118(r1)
    lwz r3, 0x11c(r1)
    cmpw r0, r3
    ble lbl_fn_803123D0_00000FF4
    li r0, 0x0
    stw r0, 0x14c0(r29)
    lwz r28, lbl_8087F048
    cmpwi r28, 0x0
    beq lbl_fn_803123D0_00000FF4
    lwz r0, 0x14ec(r29)
    cmpwi r0, 0x0
    ble lbl_fn_803123D0_00000FF4
    mr r3, r28
    bl fn_800F8548
    mr r30, r3
    lwz r3, 0x14ec(r29)
    bl fn_80219E6C
    lwz r5, 0x14e4(r29)
    mr r6, r3
    mr r3, r28
    mr r7, r30
    li r4, 0x0
    li r8, 0x0
    li r9, 0x1e
    bl fn_800FD658
    lwz r0, 0x14e4(r29)
    cmpwi r0, 0x0
    beq lbl_fn_803123D0_00000F54
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_803123D0_00000F54
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_803123D0_00000F54
    lwz r3, lbl_8087F498
    li r5, 0x2a
    lwz r4, 0x14e4(r29)
    li r6, 0x0
    lfs f1, lbl_80884CA4
    lfs f2, lbl_80884CDC
    bl fn_803EA77C
lbl_fn_803123D0_00000F54:
    lwz r3, 0x14e4(r29)
    cmpwi r3, 0x0
    beq lbl_fn_803123D0_00000FF4
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803123D0_00000FF4
    lwz r0, 0x15ac(r29)
    cmpwi r0, 0x0
    beq lbl_fn_803123D0_00000FF4
    lwz r3, lbl_8087F4F0
    cmpwi r3, 0x0
    beq lbl_fn_803123D0_00000FF4
    li r4, 0xa
    bl fn_8044D6AC
    lfs f0, lbl_80884CA4
    addi r3, r1, 0x60
    stfs f0, 0x50(r1)
    lwz r30, lbl_8087F048
    stfs f0, 0x54(r1)
    stfs f0, 0x58(r1)
    stfs f0, 0x5c(r1)
    lwz r4, 0x14e4(r29)
    bl fn_801781B0
    lis r9, lbl_807C7030@ha
    lfs f1, lbl_80884CA4
    mr r3, r30
    addi r8, r1, 0x60
    addi r9, r9, lbl_807C7030@l
    addi r10, r1, 0x50
    li r4, 0x232d
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80107168
    lwz r3, lbl_8087F048
    li r4, 0x4
    li r5, 0x0
    li r6, 0xa
    li r7, 0x0
    bl fn_801092C8
lbl_fn_803123D0_00000FF4:
    lwz r6, 0x14e4(r29)
    li r30, 0x270f
    cmpwi r6, 0x0
    beq lbl_fn_803123D0_00001014
    lwz r3, 0xf80(r6)
    cmpwi r3, 0x0
    beq lbl_fn_803123D0_00001014
    lwz r30, 0xc(r3)
lbl_fn_803123D0_00001014:
    cmpwi r6, 0x0
    beq lbl_fn_803123D0_000010F8
    lwz r7, 0x38(r6)
    li r4, 0x0
    li r0, 0x0
    li r3, 0x0
    rlwinm r5, r7, 0, 29, 29
    cmplwi r5, 0x4
    beq lbl_fn_803123D0_00001048
    clrlwi r5, r7, 31
    cmplwi r5, 0x1
    beq lbl_fn_803123D0_00001048
    li r3, 0x1
lbl_fn_803123D0_00001048:
    cmpwi r3, 0x0
    beq lbl_fn_803123D0_00001064
    lwz r3, 0x7e0(r6)
    rlwinm r3, r3, 0, 26, 26
    cmplwi r3, 0x20
    beq lbl_fn_803123D0_00001064
    li r0, 0x1
lbl_fn_803123D0_00001064:
    cmpwi r0, 0x0
    beq lbl_fn_803123D0_00001098
    lwz r0, 0x55c(r6)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_803123D0_0000108C
    lwz r0, 0x560(r6)
    cmpwi r0, 0x1c
    bne lbl_fn_803123D0_0000108C
    li r3, 0x1
lbl_fn_803123D0_0000108C:
    cmpwi r3, 0x0
    bne lbl_fn_803123D0_00001098
    li r4, 0x1
lbl_fn_803123D0_00001098:
    cmpwi r4, 0x0
    beq lbl_fn_803123D0_000010F8
    lwz r0, 0x54c(r6)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_803123D0_000010F8
    lwz r0, 0x55c(r6)
    cmpwi r0, 0x6
    bne lbl_fn_803123D0_000010F8
    lwz r0, 0x560(r6)
    cmpwi r0, 0x11
    bne lbl_fn_803123D0_000010F8
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803123D0_000010F8
    lwz r0, 0x15a4(r29)
    cmpwi r0, 0x0
    bne lbl_fn_803123D0_000010F8
    cmpwi r30, 0x0
    bgt lbl_fn_803123D0_000011B0
lbl_fn_803123D0_000010F8:
    lwz r5, 0x14e4(r29)
    lwz r0, 0x14cc(r29)
    cmpwi r5, 0x0
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r29)
    beq lbl_fn_803123D0_000011A0
    lwz r7, 0x38(r5)
    li r4, 0x0
    li r0, 0x0
    li r3, 0x0
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_803123D0_0000113C
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_803123D0_0000113C
    li r3, 0x1
lbl_fn_803123D0_0000113C:
    cmpwi r3, 0x0
    beq lbl_fn_803123D0_00001158
    lwz r3, 0x7e0(r5)
    rlwinm r3, r3, 0, 26, 26
    cmplwi r3, 0x20
    beq lbl_fn_803123D0_00001158
    li r0, 0x1
lbl_fn_803123D0_00001158:
    cmpwi r0, 0x0
    beq lbl_fn_803123D0_0000118C
    lwz r0, 0x55c(r5)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_803123D0_00001180
    lwz r0, 0x560(r5)
    cmpwi r0, 0x1c
    bne lbl_fn_803123D0_00001180
    li r3, 0x1
lbl_fn_803123D0_00001180:
    cmpwi r3, 0x0
    bne lbl_fn_803123D0_0000118C
    li r4, 0x1
lbl_fn_803123D0_0000118C:
    cmpwi r4, 0x0
    beq lbl_fn_803123D0_000011A8
    lwz r0, 0x15a0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_803123D0_000011A8
lbl_fn_803123D0_000011A0:
    li r0, 0x8
    b lbl_fn_803123D0_000011AC
lbl_fn_803123D0_000011A8:
    li r0, 0xd
lbl_fn_803123D0_000011AC:
    stw r0, 0x14c4(r29)
lbl_fn_803123D0_000011B0:
    addi r4, r29, 0x14d4
    lfs f2, 0x14dc(r29)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x90
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x98(r1)
    b lbl_fn_803123D0_00001248
lbl_fn_803123D0_000011CC:
    lwz r0, 0x14e4(r29)
    stfs f1, 0x2e8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_803123D0_000011F8
    lfs f3, 0x2e4(r29)
    lfs f0, lbl_80884CE0
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_803123D0_000011F8
    mr r3, r29
    bl fn_803132D0
lbl_fn_803123D0_000011F8:
    lfs f28, 0x2e4(r29)
    addi r3, r29, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f28, f1
    cror eq, gt, eq
    bne lbl_fn_803123D0_00001220
    lwz r0, 0x14cc(r29)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r29)
lbl_fn_803123D0_00001220:
    addi r4, r29, 0x14d4
    lfs f2, 0x14dc(r29)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x90
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x98(r1)
    b lbl_fn_803123D0_00001248
lbl_fn_803123D0_0000123C:
    mr r3, r29
    bl fn_805A4258
    b lbl_fn_803123D0_00001300
lbl_fn_803123D0_00001248:
    cmpwi r31, 0x0
    beq lbl_fn_803123D0_00001278
    lwz r0, 0xfc0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_803123D0_00001278
    lfs f0, 0x568(r29)
    fmr f1, f31
    mr r3, r29
    addi r4, r1, 0x90
    fmuls f2, f0, f30
    bl fn_80140588
    b lbl_fn_803123D0_00001294
lbl_fn_803123D0_00001278:
    lfs f0, 0x568(r29)
    fmr f1, f31
    mr r3, r29
    addi r4, r1, 0x90
    fmuls f2, f0, f30
    li r5, 0x0
    bl fn_8013CB68
lbl_fn_803123D0_00001294:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803123D0_00001300
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x8
    bne lbl_fn_803123D0_00001300
    lwz r4, 0x14e4(r29)
    cmpwi r4, 0x0
    beq lbl_fn_803123D0_00001300
    lwz r3, 0xf1c(r4)
    lwz r0, 0x14e8(r29)
    cmplw r3, r0
    bne lbl_fn_803123D0_000012D0
    li r0, 0x0
    stw r0, 0xf1c(r4)
lbl_fn_803123D0_000012D0:
    lwz r0, 0x58c(r29)
    li r3, 0x0
    stw r3, 0x14e4(r29)
    cmpwi r0, 0xb
    bne lbl_fn_803123D0_00001300
    lfs f3, 0x2e4(r29)
    lfs f0, lbl_80884CCC
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_803123D0_00001300
    lfs f0, lbl_80884CE4
    stfs f0, 0x2e4(r29)
lbl_fn_803123D0_00001300:
    lwz r0, 0x174(r1)
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    psq_l f29, 0x148(r1), 0, 0
    lfd f29, 0x140(r1)
    psq_l f28, 0x138(r1), 0, 0
    lfd f28, 0x130(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    lwz r28, 0x120(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_80312EF8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x9
    beq lbl_fn_80312EF8_0000136C
    cmpwi r0, 0xa
    bne lbl_fn_80312EF8_0000150C
lbl_fn_80312EF8_0000136C:
    lfs f0, lbl_80884CAC
    li r0, 0x0
    stw r0, 0xd1c(r3)
    stfs f0, 0x14e0(r3)
    lwz r3, lbl_8087F8A0
    lwz r31, 0x48(r3)
    b lbl_fn_80312EF8_00001504
lbl_fn_80312EF8_00001388:
    lwz r6, 0x38(r31)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80312EF8_000013B4
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_80312EF8_000013B4
    li r5, 0x1
lbl_fn_80312EF8_000013B4:
    cmpwi r5, 0x0
    beq lbl_fn_80312EF8_000013D0
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80312EF8_000013D0
    li r3, 0x1
lbl_fn_80312EF8_000013D0:
    cmpwi r3, 0x0
    beq lbl_fn_80312EF8_00001404
    lwz r0, 0x55c(r31)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80312EF8_000013F8
    lwz r0, 0x560(r31)
    cmpwi r0, 0x1c
    bne lbl_fn_80312EF8_000013F8
    li r3, 0x1
lbl_fn_80312EF8_000013F8:
    cmpwi r3, 0x0
    bne lbl_fn_80312EF8_00001404
    li r4, 0x1
lbl_fn_80312EF8_00001404:
    cmpwi r4, 0x0
    beq lbl_fn_80312EF8_00001500
    lwz r0, 0x54c(r31)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_80312EF8_00001500
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_80312EF8_0000149C
    lwz r0, 0x560(r31)
    cmpwi r0, 0x5a
    bge lbl_fn_80312EF8_00001474
    cmpwi r0, 0x31
    beq lbl_fn_80312EF8_0000149C
    bge lbl_fn_80312EF8_00001460
    cmpwi r0, 0x14
    bge lbl_fn_80312EF8_00001454
    cmpwi r0, 0x11
    bge lbl_fn_80312EF8_00001500
    b lbl_fn_80312EF8_0000149C
lbl_fn_80312EF8_00001454:
    cmpwi r0, 0x30
    bge lbl_fn_80312EF8_00001500
    b lbl_fn_80312EF8_0000149C
lbl_fn_80312EF8_00001460:
    cmpwi r0, 0x57
    bge lbl_fn_80312EF8_00001500
    cmpwi r0, 0x33
    bge lbl_fn_80312EF8_0000149C
    b lbl_fn_80312EF8_00001500
lbl_fn_80312EF8_00001474:
    cmpwi r0, 0x6e
    beq lbl_fn_80312EF8_00001500
    bge lbl_fn_80312EF8_0000148C
    cmpwi r0, 0x6a
    beq lbl_fn_80312EF8_00001500
    b lbl_fn_80312EF8_0000149C
lbl_fn_80312EF8_0000148C:
    cmpwi r0, 0x77
    bge lbl_fn_80312EF8_0000149C
    cmpwi r0, 0x74
    bge lbl_fn_80312EF8_00001500
lbl_fn_80312EF8_0000149C:
    lfs f1, 0x530(r31)
    addi r3, r1, 0x8
    lfs f0, 0x530(r30)
    lfs f3, 0x52c(r31)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r30)
    lfs f1, 0x528(r31)
    lfs f0, 0x528(r30)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    lfs f0, 0x14e0(r30)
    fcmpo cr0, f1, f0
    bge lbl_fn_80312EF8_000014E8
    stw r31, 0xd1c(r30)
    stfs f1, 0x14e0(r30)
lbl_fn_80312EF8_000014E8:
    lwz r0, 0x12a8(r31)
    extrwi. r0, r0, 1, 15
    beq lbl_fn_80312EF8_00001500
    stw r31, 0xd1c(r30)
    stfs f1, 0x14e0(r30)
    b lbl_fn_80312EF8_0000150C
lbl_fn_80312EF8_00001500:
    lwz r31, 0x14ac(r31)
lbl_fn_80312EF8_00001504:
    cmpwi r31, 0x0
    bne lbl_fn_80312EF8_00001388
lbl_fn_80312EF8_0000150C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803130DC(void)
{
    nofralloc
    lwz r0, 0xd18(r3)
    li r5, 0x0
    li r6, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_803130DC_000015C0
    lwz r9, 0x38(r3)
    li r7, 0x0
    li r4, 0x0
    li r8, 0x0
    rlwinm r0, r9, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803130DC_00001564
    clrlwi r0, r9, 31
    cmplwi r0, 0x1
    beq lbl_fn_803130DC_00001564
    li r8, 0x1
lbl_fn_803130DC_00001564:
    cmpwi r8, 0x0
    beq lbl_fn_803130DC_00001580
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_803130DC_00001580
    li r4, 0x1
lbl_fn_803130DC_00001580:
    cmpwi r4, 0x0
    beq lbl_fn_803130DC_000015B4
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_803130DC_000015A8
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_803130DC_000015A8
    li r4, 0x1
lbl_fn_803130DC_000015A8:
    cmpwi r4, 0x0
    bne lbl_fn_803130DC_000015B4
    li r7, 0x1
lbl_fn_803130DC_000015B4:
    cmpwi r7, 0x0
    beq lbl_fn_803130DC_000015C0
    li r6, 0x1
lbl_fn_803130DC_000015C0:
    cmpwi r6, 0x0
    beq lbl_fn_803130DC_000015DC
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_803130DC_000015DC
    li r5, 0x1
lbl_fn_803130DC_000015DC:
    mr r3, r5
    blr
}

asm void fn_8031319C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r4, 0x14e4(r3)
    beq lbl_fn_8031319C_00001704
    lis r4, lbl_80749264@ha
    li r5, 0x0
    addi r4, r4, lbl_80749264@l
    addi r3, r3, 0xb0
    addi r4, r4, 0xe9
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8031319C_0000162C
    li r4, 0x0
    b lbl_fn_8031319C_00001638
lbl_fn_8031319C_0000162C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_8031319C_00001638:
    cmpwi r4, 0x0
    stw r4, 0x14e8(r31)
    beq lbl_fn_8031319C_00001684
    lwz r3, 0x14e4(r31)
    li r5, 0x19
    li r6, 0x1d8
    li r7, -0x1
    bl fn_801595BC
    lwz r3, 0x14e4(r31)
    lwz r4, 0xf80(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8031319C_00001684
    li r3, 0x0
    stb r3, 0x18(r4)
    stb r3, 0x19(r4)
    lwz r0, 0x15ac(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8031319C_00001684
    stb r3, 0x1a(r4)
lbl_fn_8031319C_00001684:
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_8031319C_000016C0
    lwz r5, 0x14e4(r31)
    lwz r0, 0x48(r5)
    cmpwi r0, 0x2
    beq lbl_fn_8031319C_000016C0
    cmpwi r0, 0x0
    mr r3, r31
    addi r4, r31, 0x15b0
    bne lbl_fn_8031319C_000016B8
    li r5, -0x1
    b lbl_fn_8031319C_000016BC
lbl_fn_8031319C_000016B8:
    lwz r5, 0x58(r5)
lbl_fn_8031319C_000016BC:
    bl fn_805A4A20
lbl_fn_8031319C_000016C0:
    lwz r5, 0x14e4(r31)
    addi r3, r1, 0x8
    li r4, 0x0
    addi r5, r5, 0x528
    bl fn_80310314
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_8031319C_00001704
    lwz r4, 0x14e4(r31)
    li r5, 0x2a
    lfs f1, lbl_80884CA4
    li r6, 0x0
    lfs f2, lbl_80884CDC
    bl fn_803EA77C
lbl_fn_8031319C_00001704:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803132D0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x80
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    bl _savegpr_27
    lwz r4, 0x14e4(r3)
    mr r31, r3
    cmpwi r4, 0x0
    beq lbl_fn_803132D0_000018B4
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    bne lbl_fn_803132D0_0000180C
    lwz r0, 0x15ac(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803132D0_0000180C
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_803132D0_0000180C
    lwz r3, lbl_8087F4F0
    cmpwi r3, 0x0
    beq lbl_fn_803132D0_0000180C
    lis r4, 0x5555
    lwz r0, 0x6000(r3)
    addi r4, r4, 0x5556
    mulhw r4, r4, r0
    srwi r0, r4, 31
    add r28, r4, r0
    mr r4, r28
    bl fn_8044D6AC
    lfs f31, lbl_80884CA4
    li r27, 0x0
    lis r30, lbl_807C7030@ha
lbl_fn_803132D0_000017A0:
    stfs f31, 0x8(r1)
    addi r3, r1, 0x18
    lwz r29, lbl_8087F048
    stfs f31, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f31, 0x14(r1)
    lwz r4, 0x14e4(r31)
    bl fn_801781B0
    lfs f1, lbl_80884CA4
    mr r3, r29
    addi r8, r1, 0x18
    addi r9, r30, lbl_807C7030@l
    addi r10, r1, 0x8
    li r4, 0x232d
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80107168
    addi r27, r27, 0x1
    cmpwi r27, 0x5
    blt lbl_fn_803132D0_000017A0
    lwz r3, lbl_8087F048
    mr r6, r28
    li r4, 0x4
    li r5, 0x0
    li r7, 0x0
    bl fn_801092C8
lbl_fn_803132D0_0000180C:
    lfs f1, lbl_80884CA8
    addi r3, r1, 0x30
    lfs f0, lbl_80884CA4
    li r4, 0x79
    stfs f1, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f0, 0x2c(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x24
    addi r3, r1, 0x30
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x14fc(r31)
    li r27, -0x1
    lfs f0, 0x28(r1)
    li r4, 0x3a
    lfs f3, 0x24(r1)
    fmuls f2, f0, f4
    lfs f1, 0x2c(r1)
    lfs f0, lbl_80884CE8
    fmuls f3, f3, f4
    fmuls f1, f1, f4
    fmadds f0, f0, f4, f2
    stfs f3, 0x24(r1)
    stfs f1, 0x2c(r1)
    stfs f0, 0x28(r1)
    lwz r3, 0x14e4(r31)
    addi r3, r3, 0xb0
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_803132D0_00001890
    li r27, 0x3a
lbl_fn_803132D0_00001890:
    lwz r3, 0x14e4(r31)
    mr r5, r27
    addi r4, r1, 0x24
    li r6, 0x0
    bl fn_8015E7A0
    lwz r3, 0x14e4(r31)
    li r0, 0x0
    stw r0, 0xf1c(r3)
    stw r0, 0x14e4(r31)
lbl_fn_803132D0_000018B4:
    addi r11, r1, 0x80
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    bl _restgpr_27
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8031348C(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    lis r6, lbl_80749264@ha
    stw r0, 0x114(r1)
    addi r6, r6, lbl_80749264@l
    stw r31, 0x10c(r1)
    mr r31, r4
    addi r4, r6, 0xf5
    stw r30, 0x108(r1)
    mr r30, r3
    lwz r5, 0x58(r3)
    addi r3, r1, 0x8
    crclr 6
    bl sprintf
    lwz r0, 0x54(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8031348C_00001944
    cmpwi r31, 0x0
    beq lbl_fn_8031348C_00001944
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_8031348C_00001944
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0x54(r30)
    mr r31, r3
    b lbl_fn_8031348C_00001948
lbl_fn_8031348C_00001944:
    li r31, 0x0
lbl_fn_8031348C_00001948:
    mr r3, r30
    mr r4, r31
    bl fn_805A5224
    lis r4, lbl_80749264@ha
    mr r3, r31
    addi r4, r4, lbl_80749264@l
    addi r5, r30, 0x15b8
    addi r4, r4, 0x104
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lwz r0, 0x114(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}
