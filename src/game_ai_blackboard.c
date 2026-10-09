#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _savegpr_25(void);
extern void fn_8004ED34(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_80139560(void);
extern void fn_80144710(void);
extern void fn_80145334(void);
extern void fn_8014C540(void);
extern void fn_8015495C(void);
extern void fn_801561E4(void);
extern void fn_80158BB4(void);
extern void fn_80158CA4(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_8025E9E4(void);
extern void fn_8025F07C(void);
extern void fn_8025F35C(void);
extern void fn_8025F45C(void);
extern void fn_8025F754(void);
extern void fn_803C1560(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_8068AEA4(void);
extern void fn_80695720(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 jumptable_80784910[];
extern u8 lbl_807440D8[];
extern u8 lbl_807440F4[];
extern u8 lbl_80766768[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_8078494C[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087DC28;
extern u32 lbl_8087DC2C;
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_808834F0;
extern u32 lbl_80883500;
extern u32 lbl_80883504;
extern u32 lbl_80883508;
extern u32 lbl_8088350C;
extern u32 lbl_80883510;
extern u32 lbl_80883514;
extern u32 lbl_80883518;
extern u32 lbl_8088351C;
extern u32 lbl_80883520;
extern u32 lbl_80883524;
extern u32 lbl_80883528;

/* Function declarations */
void fn_8025CFF4(void);
void fn_8025D648(void);
void fn_8025D6D0(void);
void fn_8025D704(void);
void fn_8025D7B0(void);
void fn_8025D90C(void);
void fn_8025DE54(void);
void fn_8025DE7C(void);
void fn_8025E008(void);
void fn_8025E100(void);
void fn_8025E748(void);
void fn_8025E834(void);
void fn_8025E930(void);

asm void fn_8025CFF4(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    stw r0, 0x664(r1)
    addi r11, r1, 0x660
    bl _savegpr_25
    lwz r4, lbl_8087F430
    mr r27, r3
    addi r3, r3, 0x14b0
    lwz r28, 0x10d8(r4)
    bl fn_8047059C
    mr r30, r3
    addi r3, r27, 0x14b0
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x8(r1)
    mr r29, r3
    addi r3, r1, 0x18
    stw r0, 0xc(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r29
    mr r5, r30
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r31, lbl_807440F4@ha
    li r29, 0x8
    addi r31, r31, lbl_807440F4@l
lbl_fn_8025CFF4_000000B8:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r25, r3
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_8025CFF4_0000062C
    cmpwi r0, 0x0
    beq lbl_fn_8025CFF4_0000062C
    addi r4, r31, 0x50
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8025CFF4_00000100
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x15c0(r27)
    b lbl_fn_8025CFF4_0000062C
lbl_fn_8025CFF4_00000100:
    mr r3, r25
    addi r4, r31, 0x5a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8025CFF4_00000128
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x15c4(r27)
    b lbl_fn_8025CFF4_0000062C
lbl_fn_8025CFF4_00000128:
    mr r3, r25
    addi r4, r31, 0xa5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8025CFF4_00000194
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC12C
    lwz r0, 0x78(r28)
    li r4, 0x0
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8025CFF4_00000188
lbl_fn_8025CFF4_00000160:
    lwz r6, 0x7c(r28)
    lwzx r0, r6, r5
    cmpw r3, r0
    bne lbl_fn_8025CFF4_0000017C
    mulli r0, r4, 0x28
    add r0, r6, r0
    b lbl_fn_8025CFF4_0000018C
lbl_fn_8025CFF4_0000017C:
    addi r5, r5, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_8025CFF4_00000160
lbl_fn_8025CFF4_00000188:
    li r0, 0x0
lbl_fn_8025CFF4_0000018C:
    stw r0, 0x14bc(r27)
    b lbl_fn_8025CFF4_0000062C
lbl_fn_8025CFF4_00000194:
    mr r3, r25
    addi r4, r31, 0xb1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8025CFF4_00000200
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC12C
    lwz r0, 0x78(r28)
    li r4, 0x0
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8025CFF4_000001F4
lbl_fn_8025CFF4_000001CC:
    lwz r6, 0x7c(r28)
    lwzx r0, r6, r5
    cmpw r3, r0
    bne lbl_fn_8025CFF4_000001E8
    mulli r0, r4, 0x28
    add r0, r6, r0
    b lbl_fn_8025CFF4_000001F8
lbl_fn_8025CFF4_000001E8:
    addi r5, r5, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_8025CFF4_000001CC
lbl_fn_8025CFF4_000001F4:
    li r0, 0x0
lbl_fn_8025CFF4_000001F8:
    stw r0, 0x14c0(r27)
    b lbl_fn_8025CFF4_0000062C
lbl_fn_8025CFF4_00000200:
    mr r3, r25
    addi r4, r31, 0xbe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8025CFF4_00000558
lbl_fn_8025CFF4_00000214:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    cmpwi r3, 0x0
    ble lbl_fn_8025CFF4_0000062C
    lwz r0, 0x78(r28)
    li r4, 0x0
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8025CFF4_00000268
lbl_fn_8025CFF4_00000240:
    lwz r6, 0x7c(r28)
    lwzx r0, r6, r5
    cmpw r3, r0
    bne lbl_fn_8025CFF4_0000025C
    mulli r0, r4, 0x28
    add r30, r6, r0
    b lbl_fn_8025CFF4_0000026C
lbl_fn_8025CFF4_0000025C:
    addi r5, r5, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_8025CFF4_00000240
lbl_fn_8025CFF4_00000268:
    li r30, 0x0
lbl_fn_8025CFF4_0000026C:
    cmpwi r30, 0x0
    beq lbl_fn_8025CFF4_00000214
    lwz r0, 0x14cc(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8025CFF4_0000028C
    lwz r0, 0x14c8(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8025CFF4_000003D4
lbl_fn_8025CFF4_0000028C:
    lwz r0, 0x14c8(r27)
    cmplwi r0, 0x8
    bgt lbl_fn_8025CFF4_00000528
    li r3, 0x70
    li r4, 0x0
    la r5, lbl_8087DC2C
    la r6, lbl_8087DC28
    li r7, 0x0
    bl fn_800846FC
    li r4, 0x0
    li r5, 0x0
    li r6, 0xc
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x14cc(r27)
    mr r26, r3
    cmpwi r0, 0x0
    beq lbl_fn_8025CFF4_000003C8
    lwz r0, 0x14c4(r27)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_8025CFF4_000002E8
    mr r5, r0
lbl_fn_8025CFF4_000002E8:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_8025CFF4_000003B4
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_8025CFF4_0000038C
lbl_fn_8025CFF4_00000300:
    lwz r0, 0x14cc(r27)
    add r7, r3, r4
    add r6, r0, r4
    addi r4, r4, 0xc
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    add r7, r3, r4
    lwz r0, 0x14cc(r27)
    add r6, r0, r4
    addi r4, r4, 0xc
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    add r7, r3, r4
    lwz r0, 0x14cc(r27)
    add r6, r0, r4
    addi r4, r4, 0xc
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    add r7, r3, r4
    lwz r0, 0x14cc(r27)
    add r6, r0, r4
    addi r4, r4, 0xc
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    bdnz lbl_fn_8025CFF4_00000300
    andi. r5, r5, 0x3
    beq lbl_fn_8025CFF4_000003B4
lbl_fn_8025CFF4_0000038C:
    mtctr r5
lbl_fn_8025CFF4_00000390:
    lwz r0, 0x14cc(r27)
    add r7, r3, r4
    add r6, r0, r4
    addi r4, r4, 0xc
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    bdnz lbl_fn_8025CFF4_00000390
lbl_fn_8025CFF4_000003B4:
    lwz r3, 0x14cc(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8025CFF4_000003C8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8025CFF4_000003C8:
    stw r26, 0x14cc(r27)
    stw r29, 0x14c8(r27)
    b lbl_fn_8025CFF4_00000528
lbl_fn_8025CFF4_000003D4:
    lwz r3, 0x14c4(r27)
    cmplw r3, r0
    blt lbl_fn_8025CFF4_00000528
    slwi r26, r3, 1
    cmplw r0, r26
    bgt lbl_fn_8025CFF4_00000528
    mulli r3, r26, 0xc
    li r4, 0x0
    la r5, lbl_8087DC2C
    la r6, lbl_8087DC28
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r26
    li r4, 0x0
    li r5, 0x0
    li r6, 0xc
    bl fn_80695720
    lwz r0, 0x14cc(r27)
    mr r25, r3
    cmpwi r0, 0x0
    beq lbl_fn_8025CFF4_00000520
    lwz r0, 0x14c4(r27)
    mr r5, r26
    cmplw r26, r0
    ble lbl_fn_8025CFF4_00000440
    mr r5, r0
lbl_fn_8025CFF4_00000440:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_8025CFF4_0000050C
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_8025CFF4_000004E4
lbl_fn_8025CFF4_00000458:
    lwz r0, 0x14cc(r27)
    add r7, r3, r4
    add r6, r0, r4
    addi r4, r4, 0xc
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    add r7, r3, r4
    lwz r0, 0x14cc(r27)
    add r6, r0, r4
    addi r4, r4, 0xc
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    add r7, r3, r4
    lwz r0, 0x14cc(r27)
    add r6, r0, r4
    addi r4, r4, 0xc
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    add r7, r3, r4
    lwz r0, 0x14cc(r27)
    add r6, r0, r4
    addi r4, r4, 0xc
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    bdnz lbl_fn_8025CFF4_00000458
    andi. r5, r5, 0x3
    beq lbl_fn_8025CFF4_0000050C
lbl_fn_8025CFF4_000004E4:
    mtctr r5
lbl_fn_8025CFF4_000004E8:
    lwz r0, 0x14cc(r27)
    add r7, r3, r4
    add r6, r0, r4
    addi r4, r4, 0xc
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    bdnz lbl_fn_8025CFF4_000004E8
lbl_fn_8025CFF4_0000050C:
    lwz r3, 0x14cc(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8025CFF4_00000520
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8025CFF4_00000520:
    stw r25, 0x14cc(r27)
    stw r26, 0x14c8(r27)
lbl_fn_8025CFF4_00000528:
    lwz r0, 0x14c4(r27)
    lwz r3, 0x14cc(r27)
    mulli r0, r0, 0xc
    lfs f2, 0xc(r30)
    psq_l f1, 0x4(r30), 0, 0
    add r3, r3, r0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    lwz r3, 0x14c4(r27)
    addi r0, r3, 0x1
    stw r0, 0x14c4(r27)
    b lbl_fn_8025CFF4_00000214
lbl_fn_8025CFF4_00000558:
    mr r3, r25
    addi r4, r31, 0xd4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8025CFF4_00000584
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x151c(r27)
    b lbl_fn_8025CFF4_0000062C
lbl_fn_8025CFF4_00000584:
    mr r3, r25
    addi r4, r31, 0xe3
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8025CFF4_000005B0
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1520(r27)
    b lbl_fn_8025CFF4_0000062C
lbl_fn_8025CFF4_000005B0:
    mr r3, r25
    addi r4, r31, 0xf4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8025CFF4_000005DC
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1524(r27)
    b lbl_fn_8025CFF4_0000062C
lbl_fn_8025CFF4_000005DC:
    mr r3, r25
    addi r4, r31, 0x101
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8025CFF4_00000608
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1528(r27)
    b lbl_fn_8025CFF4_0000062C
lbl_fn_8025CFF4_00000608:
    mr r3, r25
    addi r4, r31, 0x10d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8025CFF4_0000062C
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1568(r27)
lbl_fn_8025CFF4_0000062C:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8025CFF4_000000B8
    addi r11, r1, 0x660
    bl _restgpr_25
    lwz r0, 0x664(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}

asm void fn_8025D648(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0xd1c(r3)
    stw r0, 0x14b8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8025D648_00000684
    lwz r4, lbl_8087F8A0
    lwz r0, 0x48(r4)
    stw r0, 0x14b8(r3)
lbl_fn_8025D648_00000684:
    lwz r0, 0xd18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8025D648_000006B0
    lwz r0, 0x14b8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8025D648_000006B0
    lwz r4, 0x14d0(r3)
    addi r0, r4, 0x1
    stw r0, 0x14d0(r3)
    mr r3, r31
    bl fn_8025D7B0
lbl_fn_8025D648_000006B0:
    lwz r0, 0x14ec(r31)
    mr r3, r31
    stw r0, 0x14f0(r31)
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8025D6D0(void)
{
    nofralloc
    lfs f2, 0x530(r3)
    addi r4, r3, 0x14fc
    psq_l f1, 0x528(r3), 0, 0
    addi r5, r3, 0x1508
    psq_st f1, 0x0(r4), 0, 0
    li r0, 0x1
    psq_l f1, 0x534(r3), 0, 0
    stfs f2, 0x1504(r3)
    lfs f2, 0x53c(r3)
    stw r0, 0x14f8(r3)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1510(r3)
    blr
}

asm void fn_8025D704(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x5c0(r3)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r3)
    bl fn_8016DA4C
    li r31, 0x0
    stw r31, 0x14d0(r30)
    mr r3, r30
    li r4, 0x3
    stw r31, 0x14f4(r30)
    stw r31, 0x58c(r30)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x1f4
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x66
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    stw r31, 0x14f8(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8025D7B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x14f8(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_8025D7B0_00000904
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8025D7B0_000007F0
    li r4, 0x3
    bl fn_8016E970
lbl_fn_8025D7B0_000007F0:
    lwz r0, 0x15bc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8025D7B0_00000864
    lwz r3, 0x15ac(r31)
    subic. r0, r3, 0x1
    stw r0, 0x15ac(r31)
    bgt lbl_fn_8025D7B0_00000864
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x3
    bne lbl_fn_8025D7B0_00000864
    lwz r0, 0x15a8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8025D7B0_00000838
    cmpwi r0, 0x1
    beq lbl_fn_8025D7B0_00000844
    cmpwi r0, 0x2
    beq lbl_fn_8025D7B0_00000850
    b lbl_fn_8025D7B0_00000858
lbl_fn_8025D7B0_00000838:
    mr r3, r31
    bl fn_8025F07C
    b lbl_fn_8025D7B0_00000858
lbl_fn_8025D7B0_00000844:
    mr r3, r31
    bl fn_8025F45C
    b lbl_fn_8025D7B0_00000858
lbl_fn_8025D7B0_00000850:
    mr r3, r31
    bl fn_8025E008
lbl_fn_8025D7B0_00000858:
    li r0, 0x0
    stw r0, 0x15bc(r31)
    b lbl_fn_8025D7B0_00000904
lbl_fn_8025D7B0_00000864:
    lwz r0, 0x58c(r31)
    cmplwi r0, 0xe
    bgt lbl_fn_8025D7B0_000008E8
    lis r3, jumptable_80784910@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80784910@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r31
    bl fn_8025DE7C
    b lbl_fn_8025D7B0_00000904
    mr r3, r31
    bl fn_8025E100
    b lbl_fn_8025D7B0_00000904
    mr r3, r31
    bl fn_8025E748
    b lbl_fn_8025D7B0_00000904
    mr r3, r31
    bl fn_8025E834
    b lbl_fn_8025D7B0_00000904
    mr r3, r31
    bl fn_8025E930
    b lbl_fn_8025D7B0_00000904
    mr r3, r31
    bl fn_8025F35C
    b lbl_fn_8025D7B0_00000904
    mr r3, r31
    bl fn_8025F754
    b lbl_fn_8025D7B0_00000904
    mr r3, r31
    bl fn_8025E9E4
    b lbl_fn_8025D7B0_00000904
lbl_fn_8025D7B0_000008E8:
    mr r3, r31
    bl fn_8025DE54
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_8025D7B0_00000904
    mr r3, r31
    bl fn_8025D90C
lbl_fn_8025D7B0_00000904:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8025D90C(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    addi r4, r1, 0xcc
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    stw r31, 0x14c(r1)
    mr r31, r3
    stw r30, 0x148(r1)
    lwz r5, 0x14b8(r3)
    lfs f0, 0x530(r3)
    lfs f2, 0x530(r5)
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    fsubs f6, f2, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0xc0
    lfs f5, 0xd0(r1)
    lfs f3, 0xcc(r1)
    fsubs f4, f5, f4
    stfs f2, 0xd4(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc4(r1)
    stfs f0, 0xc0(r1)
    stfs f6, 0xc8(r1)
    bl fn_805F9940
    lwz r4, 0x151c(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8025D90C_00000E38
    lwz r5, 0x7e0(r31)
    li r3, 0x1
    lfs f3, 0x40(r4)
    lfs f0, 0x8e4(r31)
    rlwinm r0, r5, 0, 28, 28
    cmplwi r0, 0x8
    fadds f0, f3, f0
    beq lbl_fn_8025D90C_000009C8
    rlwinm r0, r5, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_8025D90C_000009C8
    li r3, 0x0
lbl_fn_8025D90C_000009C8:
    cmpwi r3, 0x0
    li r0, 0x32
    beq lbl_fn_8025D90C_000009D8
    li r0, 0x96
lbl_fn_8025D90C_000009D8:
    lwz r4, 0x7e0(r31)
    li r3, 0x1
    stw r0, 0x1538(r31)
    rlwinm r0, r4, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_8025D90C_00000A00
    rlwinm r0, r4, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_8025D90C_00000A00
    li r3, 0x0
lbl_fn_8025D90C_00000A00:
    cmpwi r3, 0x0
    li r3, 0x50
    beq lbl_fn_8025D90C_00000A10
    li r3, 0xf0
lbl_fn_8025D90C_00000A10:
    stw r3, 0x153c(r31)
    lwz r4, 0x1530(r31)
    lwz r0, 0x16ac(r4)
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8025D90C_00000B20
    lwz r0, 0x14d0(r31)
    cmpw r0, r3
    ble lbl_fn_8025D90C_00000E38
    li r5, 0x0
    li r0, 0xe
    stw r5, 0x14d0(r31)
    mr r3, r31
    li r4, 0x3
    stw r5, 0x14f4(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80883500
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808834F0
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x13f
    lfs f2, lbl_80883504
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x14c0(r31)
    lfs f0, lbl_80883500
    cmpwi r3, 0x0
    stfs f0, 0x2e8(r31)
    beq lbl_fn_8025D90C_00000AAC
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x530(r31)
    psq_st f1, 0x528(r31), 0, 0
lbl_fn_8025D90C_00000AAC:
    mr r3, r31
    li r4, 0x66
    bl fn_80232B7C
    lfs f0, lbl_808834F0
    li r3, -0x1
    lfs f1, lbl_80883500
    li r0, 0x1
    stfs f0, 0xa8(r1)
    addi r4, r31, 0x1584
    addi r5, r31, 0xb0
    addi r7, r1, 0xb4
    stfs f0, 0xac(r1)
    addi r8, r1, 0xa8
    addi r9, r1, 0x98
    li r6, 0x0
    stfs f0, 0xb0(r1)
    li r10, -0x1
    stfs f0, 0xb4(r1)
    stfs f0, 0xb8(r1)
    stfs f0, 0xbc(r1)
    stfs f1, 0x98(r1)
    stfs f1, 0x9c(r1)
    stfs f1, 0xa0(r1)
    stfs f1, 0xa4(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_8025D90C_00000E38
lbl_fn_8025D90C_00000B20:
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8025D90C_00000D60
    lwz r3, 0x14d0(r31)
    lwz r0, 0x1538(r31)
    cmpw r3, r0
    ble lbl_fn_8025D90C_00000E38
    li r30, 0x0
    li r0, 0x1
    stw r30, 0x14d0(r31)
    li r3, 0xc8
    stw r30, 0x14f4(r31)
    stw r0, 0x58c(r31)
    bl fn_80219E6C
    mr r4, r3
    mr r3, r31
    bl fn_801561E4
    stw r30, 0x598(r31)
    addi r3, r1, 0x38
    lwz r5, 0x14b8(r31)
    mr r4, r3
    lfs f0, 0x530(r31)
    lfs f3, 0x530(r5)
    lfs f5, 0x52c(r5)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r5)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    stfs f6, 0x40(r1)
    bl fn_805F98D0
    lfs f2, 0x40(r1)
    addi r3, r1, 0x38
    lfs f0, lbl_80883508
    addi r30, r1, 0x44
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x4c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8025D90C_00000BF8
    lfs f3, 0x44(r1)
    lfs f0, lbl_808834F0
    fcmpo cr0, f3, f0
    ble lbl_fn_8025D90C_00000BEC
    lfs f0, lbl_8088350C
    b lbl_fn_8025D90C_00000BF0
lbl_fn_8025D90C_00000BEC:
    lfs f0, lbl_80883510
lbl_fn_8025D90C_00000BF0:
    stfs f0, 0x54(r1)
    b lbl_fn_8025D90C_00000C0C
lbl_fn_8025D90C_00000BF8:
    frsp f2, f2
    lfs f1, 0x44(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x54(r1)
lbl_fn_8025D90C_00000C0C:
    lfs f0, 0x54(r1)
    addi r3, r1, 0x118
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808834F0
    addi r4, r1, 0x5c
    lfs f4, 0x120(r1)
    mr r5, r4
    lfs f5, 0x11c(r1)
    addi r3, r1, 0xd8
    lfs f6, 0x118(r1)
    lfs f7, 0x130(r1)
    lfs f8, 0x12c(r1)
    lfs f9, 0x128(r1)
    lfs f10, 0x140(r1)
    lfs f11, 0x13c(r1)
    lfs f12, 0x138(r1)
    lfs f13, 0x144(r1)
    lfs f31, 0x134(r1)
    lfs f30, 0x124(r1)
    lfs f0, lbl_80883500
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x4c(r1)
    stfs f3, 0x108(r1)
    stfs f3, 0x10c(r1)
    stfs f3, 0x110(r1)
    stfs f0, 0x114(r1)
    stfs f6, 0x8c(r1)
    stfs f5, 0x90(r1)
    stfs f4, 0x94(r1)
    stfs f6, 0xd8(r1)
    stfs f5, 0xdc(r1)
    stfs f4, 0xe0(r1)
    stfs f9, 0x80(r1)
    stfs f8, 0x84(r1)
    stfs f7, 0x88(r1)
    stfs f9, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f7, 0xf0(r1)
    stfs f12, 0x74(r1)
    stfs f11, 0x78(r1)
    stfs f10, 0x7c(r1)
    stfs f12, 0xf8(r1)
    stfs f11, 0xfc(r1)
    stfs f10, 0x100(r1)
    stfs f30, 0x68(r1)
    stfs f31, 0x6c(r1)
    stfs f13, 0x70(r1)
    stfs f30, 0xe4(r1)
    stfs f31, 0xf4(r1)
    stfs f13, 0x104(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F9750
    lfs f2, 0x64(r1)
    lfs f0, lbl_80883508
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8025D90C_00000D28
    lfs f3, 0x60(r1)
    lfs f0, lbl_808834F0
    fcmpo cr0, f3, f0
    ble lbl_fn_8025D90C_00000D18
    lfs f0, lbl_8088350C
    b lbl_fn_8025D90C_00000D1C
lbl_fn_8025D90C_00000D18:
    lfs f0, lbl_80883510
lbl_fn_8025D90C_00000D1C:
    fneg f0, f0
    stfs f0, 0x50(r1)
    b lbl_fn_8025D90C_00000D3C
lbl_fn_8025D90C_00000D28:
    lfs f1, 0x60(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x50(r1)
lbl_fn_8025D90C_00000D3C:
    addi r3, r1, 0x50
    lfs f2, lbl_808834F0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0x48(r1)
    stfs f2, 0x58(r1)
    stfs f2, 0x4c(r1)
    stfs f0, 0x538(r31)
    b lbl_fn_8025D90C_00000E38
lbl_fn_8025D90C_00000D60:
    lwz r3, 0x14d0(r31)
    lwz r0, 0x1534(r31)
    cmpw r3, r0
    ble lbl_fn_8025D90C_00000E38
    li r5, 0x0
    li r0, 0xb
    stw r5, 0x14d0(r31)
    mr r3, r31
    li r4, 0x3
    stw r5, 0x14f4(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80883500
    li r30, 0x1
    stw r30, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808834F0
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x1c4
    lfs f2, lbl_80883504
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r31
    li r4, 0x65
    bl fn_80232B7C
    lfs f0, lbl_808834F0
    li r0, -0x1
    lfs f1, lbl_80883500
    addi r4, r31, 0x156c
    stfs f0, 0x1c(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    stfs f0, 0x20(r1)
    addi r9, r1, 0x28
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x24(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    stw r30, 0x1548(r31)
lbl_fn_8025D90C_00000E38:
    lwz r0, 0x174(r1)
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    lwz r31, 0x14c(r1)
    lwz r30, 0x148(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_8025DE54(void)
{
    nofralloc
    lwz r4, 0x55c(r3)
    subi r0, r4, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_8025DE54_00000E84
    lwz r4, 0x12a4(r3)
    lwz r0, 0x14b8(r3)
    ori r4, r4, 0x20
    stw r4, 0x12a4(r3)
    stw r0, 0xfc0(r3)
lbl_fn_8025DE54_00000E84:
    b fn_80139560
}

asm void fn_8025DE7C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    bl fn_80158BB4
    cmpwi r3, 0x0
    beq lbl_fn_8025DE7C_00000EF0
    li r0, 0x0
    stw r0, 0x14d0(r31)
    mr r3, r31
    li r4, 0x3
    stw r0, 0x14f4(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x1f4
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x66
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_8025DE7C_00001000
lbl_fn_8025DE7C_00000EF0:
    mr r3, r31
    bl fn_80139560
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_8025DE7C_00001000
    mr r3, r31
    bl fn_80158CA4
    cmpwi r3, 0x0
    beq lbl_fn_8025DE7C_00001000
    lwz r0, 0xf80(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8025DE7C_00000F40
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    b lbl_fn_8025DE7C_00000F5C
lbl_fn_8025DE7C_00000F40:
    lis r5, lbl_8078494C@ha
    lwzu r4, lbl_8078494C@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
lbl_fn_8025DE7C_00000F5C:
    lwz r5, 0x14(r1)
    addi r3, r1, 0x8
    lwz r4, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8025DE7C_00000FD0
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    lwz r0, 0x598(r31)
    cmpw r3, r0
    ble lbl_fn_8025DE7C_00000FD0
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    li r0, 0x1
    stw r3, 0x598(r31)
    stw r0, 0x594(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
lbl_fn_8025DE7C_00000FD0:
    mr r3, r31
    bl fn_80144710
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r7, 0x638(r31)
    li r4, 0x0
    lwz r8, 0x590(r31)
    li r5, 0x0
    lfs f1, lbl_808834F0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
lbl_fn_8025DE7C_00001000:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8025E008(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    li r5, 0x0
    li r4, 0x3
    stw r0, 0x44(r1)
    li r0, 0xb
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    stw r5, 0x14d0(r3)
    stw r5, 0x14f4(r3)
    stw r0, 0x58c(r3)
    bl fn_8016E970
    lfs f0, lbl_80883500
    li r31, 0x1
    stw r31, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_808834F0
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x1c4
    lfs f2, lbl_80883504
    li r6, 0x1
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r30
    li r4, 0x65
    bl fn_80232B7C
    lfs f0, lbl_808834F0
    li r0, -0x1
    lfs f1, lbl_80883500
    addi r4, r30, 0x156c
    stfs f0, 0x20(r1)
    addi r5, r30, 0xb0
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
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    li r0, 0x2
    stw r0, 0x1548(r30)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8025E100(void)
{
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    stw r0, 0x204(r1)
    stfd f31, 0x1f0(r1)
    psq_st f31, 0x1f8(r1), 0, 0
    stfd f30, 0x1e0(r1)
    psq_st f30, 0x1e8(r1), 0, 0
    stw r31, 0x1dc(r1)
    mr r31, r3
    stw r30, 0x1d8(r1)
    stw r29, 0x1d4(r1)
    stw r28, 0x1d0(r1)
    lwz r0, 0x14d0(r3)
    cmpwi r0, 0xa
    ble lbl_fn_8025E100_00001724
    lwz r0, 0x1548(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8025E100_0000154C
    li r5, 0x0
    li r0, 0x9
    stw r5, 0x14d0(r3)
    li r4, 0x3
    stw r5, 0x14f4(r3)
    stw r0, 0x58c(r3)
    bl fn_8016E970
    lfs f1, lbl_80883500
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f2, lbl_80883504
    li r4, 0x0
    stfs f1, 0x2fc(r31)
    li r5, 0x142
    li r6, 0x0
    li r7, 0x0
    stfs f1, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    lwz r28, 0x14b8(r31)
    addi r29, r31, 0x154c
    lfs f0, lbl_808834F0
    cmpwi r28, 0x0
    stfs f0, 0x2e4(r31)
    beq lbl_fn_8025E100_00001524
    lwz r3, lbl_8087F430
    addi r4, r28, 0x528
    lfs f1, lbl_80883514
    li r5, 0x0
    lwz r3, 0x10d8(r3)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_803C1560
    lwz r4, lbl_8087F430
    subi r0, r3, 0x1
    mulli r0, r0, 0x30
    lfs f0, lbl_80883508
    lwz r3, 0x10d8(r4)
    addi r4, r1, 0xd8
    addi r30, r1, 0xe4
    lwz r3, 0x9c(r3)
    add r3, r3, r0
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x8(r29)
    psq_st f1, 0x0(r29), 0, 0
    lfs f3, 0x530(r28)
    lfs f4, 0x528(r28)
    fsubs f2, f3, f2
    lfs f3, 0x0(r29)
    lfs f6, 0x52c(r28)
    fsubs f3, f4, f3
    lfs f5, 0x4(r29)
    frsp f4, f2
    stfs f3, 0xd8(r1)
    fsubs f5, f6, f5
    fabs f3, f4
    stfs f5, 0xdc(r1)
    psq_l f1, 0x0(r4), 0, 0
    frsp f3, f3
    stfs f2, 0xe0(r1)
    psq_st f1, 0x0(r30), 0, 0
    fcmpo cr0, f3, f0
    stfs f2, 0xec(r1)
    bge lbl_fn_8025E100_00001284
    lfs f3, 0xe4(r1)
    lfs f0, lbl_808834F0
    fcmpo cr0, f3, f0
    ble lbl_fn_8025E100_00001278
    lfs f0, lbl_8088350C
    b lbl_fn_8025E100_0000127C
lbl_fn_8025E100_00001278:
    lfs f0, lbl_80883510
lbl_fn_8025E100_0000127C:
    stfs f0, 0xa0(r1)
    b lbl_fn_8025E100_00001298
lbl_fn_8025E100_00001284:
    fmr f2, f4
    lfs f1, 0xe4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xa0(r1)
lbl_fn_8025E100_00001298:
    lfs f0, 0xa0(r1)
    addi r3, r1, 0x108
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808834F0
    addi r4, r1, 0x90
    lfs f30, 0x110(r1)
    mr r5, r4
    lfs f31, 0x10c(r1)
    addi r3, r1, 0x138
    lfs f13, 0x108(r1)
    lfs f12, 0x120(r1)
    lfs f11, 0x11c(r1)
    lfs f10, 0x118(r1)
    lfs f9, 0x130(r1)
    lfs f8, 0x12c(r1)
    lfs f7, 0x128(r1)
    lfs f6, 0x134(r1)
    lfs f5, 0x124(r1)
    lfs f4, 0x114(r1)
    lfs f0, lbl_80883500
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xec(r1)
    stfs f3, 0x168(r1)
    stfs f3, 0x16c(r1)
    stfs f3, 0x170(r1)
    stfs f0, 0x174(r1)
    stfs f13, 0x60(r1)
    stfs f31, 0x64(r1)
    stfs f30, 0x68(r1)
    stfs f13, 0x138(r1)
    stfs f31, 0x13c(r1)
    stfs f30, 0x140(r1)
    stfs f10, 0x6c(r1)
    stfs f11, 0x70(r1)
    stfs f12, 0x74(r1)
    stfs f10, 0x148(r1)
    stfs f11, 0x14c(r1)
    stfs f12, 0x150(r1)
    stfs f7, 0x78(r1)
    stfs f8, 0x7c(r1)
    stfs f9, 0x80(r1)
    stfs f7, 0x158(r1)
    stfs f8, 0x15c(r1)
    stfs f9, 0x160(r1)
    stfs f4, 0x84(r1)
    stfs f5, 0x88(r1)
    stfs f6, 0x8c(r1)
    stfs f4, 0x144(r1)
    stfs f5, 0x154(r1)
    stfs f6, 0x164(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x98(r1)
    bl fn_805F9750
    lfs f2, 0x98(r1)
    lfs f0, lbl_80883508
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8025E100_000013B4
    lfs f3, 0x94(r1)
    lfs f0, lbl_808834F0
    fcmpo cr0, f3, f0
    ble lbl_fn_8025E100_000013A4
    lfs f0, lbl_8088350C
    b lbl_fn_8025E100_000013A8
lbl_fn_8025E100_000013A4:
    lfs f0, lbl_80883510
lbl_fn_8025E100_000013A8:
    fneg f0, f0
    stfs f0, 0x9c(r1)
    b lbl_fn_8025E100_000013C8
lbl_fn_8025E100_000013B4:
    lfs f1, 0x94(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x9c(r1)
lbl_fn_8025E100_000013C8:
    addi r3, r1, 0x9c
    lfs f2, lbl_808834F0
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xfc
    psq_st f1, 0x0(r30), 0, 0
    lfs f5, 0x8(r29)
    lfs f0, 0xe8(r1)
    stfs f0, 0x1558(r31)
    lfs f3, 0x0(r29)
    lfs f4, 0x530(r28)
    lfs f0, 0x528(r28)
    fsubs f4, f5, f4
    stfs f2, 0xa4(r1)
    fsubs f0, f3, f0
    stfs f2, 0xec(r1)
    stfs f0, 0xfc(r1)
    stfs f4, 0x104(r1)
    stfs f2, 0x100(r1)
    bl fn_805F9940
    lfs f0, lbl_80883518
    fcmpo cr0, f1, f0
    ble lbl_fn_8025E100_00001524
    addi r4, r1, 0xfc
    lfs f2, 0x104(r1)
    addi r3, r1, 0xb4
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    mr r4, r3
    stfs f2, 0xbc(r1)
    bl fn_805F98D0
    lfs f5, 0xbc(r1)
    addi r3, r1, 0xcc
    lfs f4, lbl_80883518
    li r0, 0x0
    lfs f0, 0xb8(r1)
    mr r5, r29
    fmuls f6, f5, f4
    lfs f3, 0xb4(r1)
    fmuls f7, f0, f4
    lfs f0, 0x530(r28)
    fmuls f8, f3, f4
    lfs f3, 0x52c(r28)
    fadds f2, f0, f6
    lfs f0, 0x528(r28)
    fadds f3, f3, f7
    lfs f5, lbl_808834F0
    fadds f0, f0, f8
    lfs f4, lbl_8088351C
    stfs f0, 0xcc(r1)
    frsp f0, f2
    addi r4, r1, 0x178
    addi r6, r1, 0xf0
    stfs f3, 0xd0(r1)
    addi r8, r31, 0x5b8
    fadds f9, f5, f0
    psq_l f1, 0x0(r3), 0, 0
    lis r7, 0x8000
    psq_st f1, 0x0(r29), 0, 0
    li r9, 0x0
    stfs f2, 0x8(r29)
    stw r0, 0x1ac(r1)
    lwz r3, lbl_8087EE98
    stw r0, 0x1b0(r1)
    stw r0, 0x1b4(r1)
    stw r0, 0x1b8(r1)
    lfs f3, 0x4(r29)
    lfs f0, 0x0(r29)
    fadds f3, f4, f3
    stfs f8, 0xc0(r1)
    fadds f0, f5, f0
    stfs f7, 0xc4(r1)
    stfs f6, 0xc8(r1)
    stfs f2, 0xd4(r1)
    stfs f5, 0xa8(r1)
    stfs f4, 0xac(r1)
    stfs f5, 0xb0(r1)
    stfs f0, 0xf0(r1)
    stfs f3, 0xf4(r1)
    stfs f9, 0xf8(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8025E100_00001524
    addi r3, r1, 0x188
    lfs f2, 0x190(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x8(r29)
lbl_fn_8025E100_00001524:
    addi r3, r31, 0x154c
    lfs f3, 0x1558(r31)
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x1554(r31)
    lfs f0, lbl_808834F0
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
    stfs f3, 0x538(r31)
    stfs f0, 0x1540(r31)
    b lbl_fn_8025E100_00001724
lbl_fn_8025E100_0000154C:
    cmpwi r0, 0x3
    bne lbl_fn_8025E100_0000163C
    li r5, 0x0
    li r0, 0xe
    stw r5, 0x14d0(r3)
    li r4, 0x3
    stw r5, 0x14f4(r3)
    stw r0, 0x58c(r3)
    bl fn_8016E970
    lfs f0, lbl_80883500
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808834F0
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x13f
    lfs f2, lbl_80883504
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x14c0(r31)
    lfs f0, lbl_80883500
    cmpwi r3, 0x0
    stfs f0, 0x2e8(r31)
    beq lbl_fn_8025E100_000015C8
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x530(r31)
    psq_st f1, 0x528(r31), 0, 0
lbl_fn_8025E100_000015C8:
    mr r3, r31
    li r4, 0x66
    bl fn_80232B7C
    lfs f0, lbl_808834F0
    li r3, -0x1
    lfs f1, lbl_80883500
    li r0, 0x1
    stfs f0, 0x48(r1)
    addi r4, r31, 0x1584
    addi r5, r31, 0xb0
    addi r7, r1, 0x54
    stfs f0, 0x4c(r1)
    addi r8, r1, 0x48
    addi r9, r1, 0x38
    li r6, 0x0
    stfs f0, 0x50(r1)
    li r10, -0x1
    stfs f0, 0x54(r1)
    stfs f0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f1, 0x44(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_8025E100_00001724
lbl_fn_8025E100_0000163C:
    li r5, 0x0
    li r0, 0xc
    stw r5, 0x14d0(r3)
    li r4, 0x3
    stw r5, 0x14f4(r3)
    stw r0, 0x58c(r3)
    bl fn_8016E970
    lfs f0, lbl_80883500
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808834F0
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x1c4
    lfs f2, lbl_80883504
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x14bc(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8025E100_000016B4
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x530(r31)
    psq_st f1, 0x528(r31), 0, 0
    lfs f0, 0x14(r3)
    stfs f0, 0x538(r31)
lbl_fn_8025E100_000016B4:
    mr r3, r31
    li r4, 0x65
    bl fn_80232B7C
    lfs f0, lbl_808834F0
    li r3, -0x1
    lfs f1, lbl_80883500
    li r0, 0x1
    stfs f0, 0x20(r1)
    addi r4, r31, 0x156c
    addi r5, r31, 0xb0
    addi r7, r1, 0x2c
    stfs f0, 0x24(r1)
    addi r8, r1, 0x20
    addi r9, r1, 0x10
    li r6, 0x0
    stfs f0, 0x28(r1)
    li r10, -0x1
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_8025E100_00001724:
    lwz r0, 0x204(r1)
    psq_l f31, 0x1f8(r1), 0, 0
    lfd f31, 0x1f0(r1)
    psq_l f30, 0x1e8(r1), 0, 0
    lfd f30, 0x1e0(r1)
    lwz r31, 0x1dc(r1)
    lwz r30, 0x1d8(r1)
    lwz r29, 0x1d4(r1)
    lwz r28, 0x1d0(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}

asm void fn_8025E748(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f0, lbl_80883520
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f1, 0x2e4(r3)
    fcmpo cr0, f0, f1
    bge lbl_fn_8025E748_000017BC
    lfs f0, lbl_80883524
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8025E748_000017BC
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r7, 0x1528(r31)
    li r4, 0x0
    lwz r8, 0x590(r31)
    li r5, 0x0
    lfs f1, lbl_808834F0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    b lbl_fn_8025E748_0000181C
lbl_fn_8025E748_000017BC:
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8025E748_0000181C
    li r0, 0x0
    stw r0, 0x14d0(r31)
    mr r3, r31
    li r4, 0x3
    stw r0, 0x14f4(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x1f4
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x66
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_8025E748_0000181C:
    lfs f0, 0x2e4(r31)
    stfs f0, 0x1540(r31)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8025E834(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    lwz r0, 0x14d0(r3)
    cmpwi r0, 0xa
    ble lbl_fn_8025E834_00001924
    li r5, 0x0
    li r0, 0xd
    stw r5, 0x14d0(r3)
    li r4, 0x3
    stw r5, 0x14f4(r3)
    stw r0, 0x58c(r3)
    bl fn_8016E970
    lfs f0, lbl_80883500
    li r31, 0x1
    stw r31, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_808834F0
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x1c4
    lfs f2, lbl_80883504
    li r6, 0x1
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r30
    li r4, 0x1f4
    bl fn_80232B7C
    lfs f0, lbl_808834F0
    li r0, -0x1
    lfs f1, lbl_80883500
    addi r4, r30, 0x1578
    stfs f0, 0x20(r1)
    addi r5, r30, 0xb0
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
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_8025E834_00001924:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8025E930(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807440D8@ha
    stw r0, 0x24(r1)
    lis r0, 0x4330
    lfd f1, lbl_807440D8@l(r4)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r5, 0x940(r3)
    stw r0, 0x8(r1)
    xoris r0, r5, 0x8000
    lfs f2, 0x7d8(r3)
    stw r0, 0xc(r1)
    lfs f4, 0x948(r3)
    lfd f0, 0x8(r1)
    lfs f3, 0x1568(r3)
    fsubs f1, f0, f1
    lfs f0, lbl_80883528
    fadds f3, f4, f3
    fdivs f1, f2, f1
    stfs f3, 0x948(r3)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8025E930_000019DC
    li r0, 0x0
    stw r0, 0x14d0(r3)
    li r4, 0x3
    stw r0, 0x14f4(r3)
    stw r0, 0x58c(r3)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x1f4
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x66
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_8025E930_000019DC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
