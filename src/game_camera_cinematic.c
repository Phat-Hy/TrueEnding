#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8000D3A4(void);
extern void fn_80013338(void);
extern void fn_8004ED34(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800F8548(void);
extern void fn_80126214(void);
extern void fn_8013A258(void);
extern void fn_8013C38C(void);
extern void fn_8013CB68(void);
extern void fn_80148990(void);
extern void fn_80149A30(void);
extern void fn_80151448(void);
extern void fn_801595BC(void);
extern void fn_8015AC48(void);
extern void fn_8015E7A0(void);
extern void fn_8016C4D8(void);
extern void fn_8016E4C4(void);
extern void fn_8016E970(void);
extern void fn_802DC5B4(void);
extern void fn_802DC8B0(void);
extern void fn_802E4D6C(void);
extern void fn_802E500C(void);
extern void fn_802E52AC(void);
extern void fn_802E554C(void);
extern void fn_802E55B0(void);
extern void fn_80370320(void);
extern void fn_80370AE4(void);
extern void fn_803EA77C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_8068A850(void);
extern void fn_8068AE9C(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_80695720(void);

/* External data declarations */
extern u8 lbl_80747D70[];
extern u8 lbl_80747D78[];

/* Small data declarations */
extern u32 lbl_8087D9E0;
extern u32 lbl_8087D9E4;
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8087F8A0;
extern u32 lbl_808846EC;
extern u32 lbl_808846F0;
extern u32 lbl_808846F4;
extern u32 lbl_80884714;
extern u32 lbl_8088471C;
extern u32 lbl_80884720;
extern u32 lbl_80884724;
extern u32 lbl_80884728;
extern u32 lbl_8088472C;
extern u32 lbl_80884730;
extern u32 lbl_80884734;
extern u32 lbl_80884738;
extern u32 lbl_8088473C;
extern u32 lbl_80884740;
extern u32 lbl_80884744;
extern u32 lbl_80884748;
extern u32 lbl_8088474C;
extern u32 lbl_80884750;
extern u32 lbl_80884754;

/* Function declarations */
void fn_802E2E84(void);
void fn_802E2E88(void);
void fn_802E2F24(void);
void fn_802E315C(void);
void fn_802E3604(void);
void fn_802E37DC(void);
void fn_802E3B24(void);
void fn_802E3D60(void);
void fn_802E3E38(void);
void fn_802E3EE8(void);
void fn_802E470C(void);

asm void fn_802E2E84(void)
{
    nofralloc
    b fn_80149A30
}

asm void fn_802E2E88(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x7
    beq lbl_fn_802E2E88_00000088
    cmpwi r0, 0xa
    bne lbl_fn_802E2E88_00000038
    b lbl_fn_802E2E88_00000088
lbl_fn_802E2E88_00000038:
    lwz r0, 0x44(r4)
    cmpwi r0, 0x1
    bne lbl_fn_802E2E88_00000064
    lwz r3, 0x8(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802E2E88_00000064
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1fb
    beq lbl_fn_802E2E88_00000064
    cmpwi r0, 0x1fc
    bne lbl_fn_802E2E88_00000088
lbl_fn_802E2E88_00000064:
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_802E2E88_00000088:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802E2F24(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r3
    lwz r4, 0x8(r4)
    lbz r0, 0x1(r4)
    extsb. r0, r0
    bne lbl_fn_802E2F24_000000CC
    li r5, 0x1
lbl_fn_802E2F24_000000CC:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802E2F24_00000104
    cmpwi r5, 0x0
    beq lbl_fn_802E2F24_000000F4
    mr r3, r31
    li r4, 0x1
    bl fn_802E55B0
    b lbl_fn_802E2F24_000002C4
lbl_fn_802E2F24_000000F4:
    mr r3, r31
    li r4, 0x2
    bl fn_802E55B0
    b lbl_fn_802E2F24_000002C4
lbl_fn_802E2F24_00000104:
    li r0, 0x0
    stw r0, 0x14b8(r3)
    stw r0, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x10
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80884720
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808846EC
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x33
    lfs f2, lbl_80884724
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x14d0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802E2F24_000002C4
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r0, 0x0
    li r4, 0x0
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_802E2F24_000001A0
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_802E2F24_000001A0
    li r4, 0x1
lbl_fn_802E2F24_000001A0:
    cmpwi r4, 0x0
    beq lbl_fn_802E2F24_000001BC
    lwz r4, 0x7e0(r3)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_802E2F24_000001BC
    li r0, 0x1
lbl_fn_802E2F24_000001BC:
    cmpwi r0, 0x0
    beq lbl_fn_802E2F24_000001F0
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802E2F24_000001E4
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_802E2F24_000001E4
    li r4, 0x1
lbl_fn_802E2F24_000001E4:
    cmpwi r4, 0x0
    bne lbl_fn_802E2F24_000001F0
    li r5, 0x1
lbl_fn_802E2F24_000001F0:
    cmpwi r5, 0x0
    beq lbl_fn_802E2F24_00000200
    li r4, -0x1
    bl fn_8015AC48
lbl_fn_802E2F24_00000200:
    lwz r3, 0x14d0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802E2F24_000002C4
    li r0, 0x0
    stw r0, 0xf1c(r3)
    addi r6, r1, 0x14
    addi r5, r1, 0x8
    lwz r7, 0x14d0(r31)
    addi r4, r1, 0x20
    lwz r3, lbl_8087EE98
    li r8, 0x0
    psq_l f1, 0x528(r7), 0, 0
    li r9, 0x0
    lfs f2, 0x530(r7)
    lis r7, 0x8000
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r6), 0, 0
    lfs f2, 0x530(r31)
    psq_l f1, 0x528(r31), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f0, 0x18(r1)
    stfs f2, 0x10(r1)
    stfs f0, 0xc(r1)
    stw r0, 0x54(r1)
    stw r0, 0x58(r1)
    stw r0, 0x5c(r1)
    stw r0, 0x60(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_802E2F24_000002BC
    lfs f3, 0x30(r1)
    addi r3, r1, 0x30
    lfs f0, 0x48(r1)
    lfs f5, 0x34(r1)
    fadds f6, f3, f0
    lfs f4, 0x4c(r1)
    lfs f3, 0x38(r1)
    lfs f0, 0x50(r1)
    fadds f4, f5, f4
    stfs f6, 0x30(r1)
    fadds f2, f3, f0
    stfs f4, 0x34(r1)
    stfs f2, 0x38(r1)
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x14d0(r31)
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
lbl_fn_802E2F24_000002BC:
    li r0, 0x0
    stw r0, 0x14d0(r31)
lbl_fn_802E2F24_000002C4:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_802E315C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    li r0, 0x0
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    lwz r4, 0x62c(r3)
    stw r0, 0x624(r3)
    cmpwi r4, 0x0
    stw r0, 0x628(r3)
    beq lbl_fn_802E315C_00000320
    beq lbl_fn_802E315C_00000318
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_802E315C_00000318:
    li r0, 0x0
    stw r0, 0x62c(r31)
lbl_fn_802E315C_00000320:
    lfs f3, 0x530(r31)
    li r0, 0x0
    lfs f0, 0x5ac(r31)
    addi r3, r1, 0x8
    lfs f5, lbl_808846EC
    addi r4, r1, 0x24
    fadds f6, f3, f0
    lfs f3, 0x52c(r31)
    lfs f0, 0x5a8(r31)
    fmr f2, f5
    lwz r5, 0x958(r31)
    fadds f7, f3, f0
    lfs f3, 0x528(r31)
    rlwinm r6, r5, 0, 25, 25
    lfs f0, 0x5a4(r31)
    addi r5, r1, 0x14
    stfs f2, 0x2c(r1)
    fadds f0, f3, f0
    lfs f4, 0x5b0(r31)
    fmr f2, f6
    stfs f5, 0x8(r1)
    cmplwi r6, 0x40
    stfs f5, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x20(r1)
    stfs f5, 0x10(r1)
    stfs f4, 0x30(r1)
    stfs f6, 0x1c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x2c(r1)
    bne lbl_fn_802E315C_000003BC
    lfs f0, 0x28(r1)
    fsubs f0, f0, f4
    stfs f0, 0x28(r1)
    b lbl_fn_802E315C_000003C8
lbl_fn_802E315C_000003BC:
    lfs f0, 0x28(r1)
    fadds f0, f0, f4
    stfs f0, 0x28(r1)
lbl_fn_802E315C_000003C8:
    lwz r0, 0x62c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802E315C_000003E0
    lwz r0, 0x628(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802E315C_00000580
lbl_fn_802E315C_000003E0:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_802E315C_00000728
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
    beq lbl_fn_802E315C_00000574
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_802E315C_00000444
    mr r5, r0
lbl_fn_802E315C_00000444:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802E315C_00000560
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802E315C_00000528
lbl_fn_802E315C_0000045C:
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
    bdnz lbl_fn_802E315C_0000045C
    andi. r5, r5, 0x3
    beq lbl_fn_802E315C_00000560
lbl_fn_802E315C_00000528:
    mtctr r5
lbl_fn_802E315C_0000052C:
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
    bdnz lbl_fn_802E315C_0000052C
lbl_fn_802E315C_00000560:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802E315C_00000574
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802E315C_00000574:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_802E315C_00000728
lbl_fn_802E315C_00000580:
    lwz r3, 0x624(r31)
    cmplw r3, r0
    blt lbl_fn_802E315C_00000728
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_802E315C_00000728
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
    beq lbl_fn_802E315C_00000720
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_802E315C_000005F0
    mr r5, r0
lbl_fn_802E315C_000005F0:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802E315C_0000070C
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802E315C_000006D4
lbl_fn_802E315C_00000608:
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
    bdnz lbl_fn_802E315C_00000608
    andi. r5, r5, 0x3
    beq lbl_fn_802E315C_0000070C
lbl_fn_802E315C_000006D4:
    mtctr r5
lbl_fn_802E315C_000006D8:
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
    bdnz lbl_fn_802E315C_000006D8
lbl_fn_802E315C_0000070C:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802E315C_00000720
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802E315C_00000720:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_802E315C_00000728:
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
    addi r0, r3, 0x1
    stw r0, 0x624(r31)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802E3604(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lwz r4, 0x58c(r3)
    lwz r5, 0xd1c(r3)
    subi r0, r4, 0x8
    stw r5, 0xd20(r3)
    cmplwi r0, 0x3
    bgt lbl_fn_802E3604_000007C8
    li r0, 0x0
    stw r0, 0x1454(r3)
    b lbl_fn_802E3604_0000092C
lbl_fn_802E3604_000007C8:
    lwz r4, lbl_8087F8A0
    lwz r4, 0x48(r4)
    lwz r0, 0x12a4(r4)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_802E3604_00000804
    lwz r0, 0x55c(r4)
    cmpwi r0, 0x6
    bne lbl_fn_802E3604_000007F4
    lwz r0, 0x560(r4)
    cmpwi r0, 0x11
    beq lbl_fn_802E3604_00000804
lbl_fn_802E3604_000007F4:
    li r0, 0x0
    stw r0, 0x1454(r3)
    stw r4, 0x14cc(r3)
    b lbl_fn_802E3604_0000092C
lbl_fn_802E3604_00000804:
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802E3604_0000091C
    li r0, 0x0
    stw r0, 0x1454(r3)
    lfs f31, lbl_8088472C
    li r29, 0x0
    lwz r3, lbl_8087F8A0
    lwz r30, 0x48(r3)
    b lbl_fn_802E3604_0000090C
lbl_fn_802E3604_0000082C:
    lwz r6, 0x38(r30)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_802E3604_00000858
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_802E3604_00000858
    li r5, 0x1
lbl_fn_802E3604_00000858:
    cmpwi r5, 0x0
    beq lbl_fn_802E3604_00000874
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802E3604_00000874
    li r3, 0x1
lbl_fn_802E3604_00000874:
    cmpwi r3, 0x0
    beq lbl_fn_802E3604_000008A8
    lwz r0, 0x55c(r30)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802E3604_0000089C
    lwz r0, 0x560(r30)
    cmpwi r0, 0x1c
    bne lbl_fn_802E3604_0000089C
    li r3, 0x1
lbl_fn_802E3604_0000089C:
    cmpwi r3, 0x0
    bne lbl_fn_802E3604_000008A8
    li r4, 0x1
lbl_fn_802E3604_000008A8:
    cmpwi r4, 0x0
    beq lbl_fn_802E3604_00000908
    lwz r0, 0x54c(r30)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_802E3604_00000908
    lfs f1, 0x530(r30)
    addi r3, r1, 0x8
    lfs f0, 0x530(r31)
    lfs f3, 0x52c(r30)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r31)
    lfs f1, 0x528(r30)
    lfs f0, 0x528(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_802E3604_00000908
    mr r29, r30
    fmr f31, f1
lbl_fn_802E3604_00000908:
    lwz r30, 0x14ac(r30)
lbl_fn_802E3604_0000090C:
    cmpwi r30, 0x0
    bne lbl_fn_802E3604_0000082C
    stw r29, 0x14cc(r31)
    b lbl_fn_802E3604_0000092C
lbl_fn_802E3604_0000091C:
    lwz r0, 0xd1c(r3)
    li r4, 0x1
    stw r4, 0x1454(r3)
    stw r0, 0x14cc(r3)
lbl_fn_802E3604_0000092C:
    lwz r0, 0x14cc(r31)
    stw r0, 0xd1c(r31)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802E37DC(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r4, r1, 0x80
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    lfs f31, lbl_808846EC
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    lfs f30, lbl_80884720
    stfd f29, 0x120(r1)
    psq_st f29, 0x128(r1), 0, 0
    stfd f28, 0x110(r1)
    psq_st f28, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    stw r29, 0x104(r1)
    mr r29, r3
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x88(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_802E37DC_00000C38
    addi r3, r3, 0x1030
    bl fn_80126214
    addi r4, r29, 0x1088
    addi r31, r1, 0x74
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r31
    lfs f2, 0x1090(r29)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r31), 0, 0
    bl fn_805F9940
    lfs f0, lbl_80884730
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_802E37DC_00000BCC
    addi r30, r1, 0x50
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x7c(r1)
    mr r3, r30
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r31, r1, 0x5c
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884734
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802E37DC_00000A60
    lfs f3, 0x5c(r1)
    lfs f0, lbl_808846EC
    fcmpo cr0, f3, f0
    ble lbl_fn_802E37DC_00000A54
    lfs f0, lbl_80884738
    b lbl_fn_802E37DC_00000A58
lbl_fn_802E37DC_00000A54:
    lfs f0, lbl_8088473C
lbl_fn_802E37DC_00000A58:
    stfs f0, 0x48(r1)
    b lbl_fn_802E37DC_00000A74
lbl_fn_802E37DC_00000A60:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802E37DC_00000A74:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x90
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808846EC
    addi r4, r1, 0x38
    lfs f28, 0x98(r1)
    mr r5, r4
    lfs f29, 0x94(r1)
    addi r3, r1, 0xc0
    lfs f13, 0x90(r1)
    lfs f12, 0xa8(r1)
    lfs f11, 0xa4(r1)
    lfs f10, 0xa0(r1)
    lfs f9, 0xb8(r1)
    lfs f8, 0xb4(r1)
    lfs f7, 0xb0(r1)
    lfs f6, 0xbc(r1)
    lfs f5, 0xac(r1)
    lfs f4, 0x9c(r1)
    lfs f0, lbl_80884720
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xf0(r1)
    stfs f3, 0xf4(r1)
    stfs f3, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f28, 0x10(r1)
    stfs f13, 0xc0(r1)
    stfs f29, 0xc4(r1)
    stfs f28, 0xc8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xd0(r1)
    stfs f11, 0xd4(r1)
    stfs f12, 0xd8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xe0(r1)
    stfs f8, 0xe4(r1)
    stfs f9, 0xe8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xcc(r1)
    stfs f5, 0xdc(r1)
    stfs f6, 0xec(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80884734
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802E37DC_00000B90
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808846EC
    fcmpo cr0, f3, f0
    ble lbl_fn_802E37DC_00000B80
    lfs f0, lbl_80884738
    b lbl_fn_802E37DC_00000B84
lbl_fn_802E37DC_00000B80:
    lfs f0, lbl_8088473C
lbl_fn_802E37DC_00000B84:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802E37DC_00000BA4
lbl_fn_802E37DC_00000B90:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802E37DC_00000BA4:
    lfs f2, lbl_808846EC
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x80
    stfs f2, 0x4c(r1)
    stfs f2, 0x64(r1)
    frsp f2, f2
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x88(r1)
lbl_fn_802E37DC_00000BCC:
    lwz r0, 0x58c(r29)
    cmpwi r0, 0xb
    bne lbl_fn_802E37DC_00000C48
    lwz r4, 0x1504(r29)
    addi r3, r1, 0x68
    lfs f0, 0x530(r29)
    lfs f5, 0x530(r4)
    lfs f4, 0x528(r4)
    lfs f3, 0x528(r29)
    fsubs f5, f5, f0
    lfs f0, lbl_808846EC
    fsubs f3, f4, f3
    stfs f5, 0x70(r1)
    stfs f3, 0x68(r1)
    stfs f0, 0x6c(r1)
    bl fn_805F9940
    lfs f0, lbl_80884740
    fcmpo cr0, f1, f0
    bge lbl_fn_802E37DC_00000C48
    lfs f31, lbl_808846EC
    addi r3, r1, 0x80
    psq_l f1, 0x534(r29), 0, 0
    lfs f2, 0x53c(r29)
    fmr f30, f31
    stfs f2, 0x88(r1)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_802E37DC_00000C48
lbl_fn_802E37DC_00000C38:
    cmpwi r0, 0x6
    bne lbl_fn_802E37DC_00000C48
    bl fn_8013A258
    b lbl_fn_802E37DC_00000C64
lbl_fn_802E37DC_00000C48:
    lfs f0, 0x568(r29)
    fmr f1, f31
    mr r3, r29
    addi r4, r1, 0x80
    fmuls f2, f30, f0
    li r5, 0x0
    bl fn_8013CB68
lbl_fn_802E37DC_00000C64:
    lwz r0, 0x154(r1)
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    psq_l f29, 0x128(r1), 0, 0
    lfd f29, 0x120(r1)
    psq_l f28, 0x118(r1), 0, 0
    lfd f28, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r29, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_802E3B24(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802E3B24_00000CE0
    cmpwi r0, 0x1
    beq lbl_fn_802E3B24_00000D84
    cmpwi r0, 0x2
    beq lbl_fn_802E3B24_00000E58
    cmpwi r0, 0x3
    beq lbl_fn_802E3B24_00000E64
    b lbl_fn_802E3B24_00000EC4
lbl_fn_802E3B24_00000CE0:
    lwz r3, 0x1504(r3)
    li r31, 0x1
    cmpwi r3, 0x0
    beq lbl_fn_802E3B24_00000D30
    bl fn_802DC8B0
    cmpwi r3, 0x0
    beq lbl_fn_802E3B24_00000D30
    lwz r4, 0x0(r3)
    cmpwi r4, 0xf
    bne lbl_fn_802E3B24_00000D20
    lwz r4, 0x4(r3)
    mr r3, r30
    bl fn_802E554C
    li r0, 0x0
    stw r0, 0x14c0(r30)
    b lbl_fn_802E3B24_00000D30
lbl_fn_802E3B24_00000D20:
    li r0, 0x1
    stw r4, 0x14c4(r30)
    li r31, 0x0
    stw r0, 0x14c0(r30)
lbl_fn_802E3B24_00000D30:
    cmpwi r31, 0x0
    beq lbl_fn_802E3B24_00000EC4
    lwz r0, 0x14bc(r30)
    cmpwi r0, 0x1e
    ble lbl_fn_802E3B24_00000EC4
    lwz r3, 0x14cc(r30)
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x20
    addi r5, r30, 0x528
    bl fn_80013338
    lfs f0, lbl_808846EC
    addi r3, r1, 0x20
    stfs f0, 0x24(r1)
    bl fn_8000D3A4
    lfs f0, lbl_80884744
    fcmpo cr0, f1, f0
    bge lbl_fn_802E3B24_00000EC4
    mr r3, r30
    bl fn_802E4D6C
    b lbl_fn_802E3B24_00000EC4
lbl_fn_802E3B24_00000D84:
    lwz r3, 0x14cc(r3)
    cmpwi r3, 0x0
    beq lbl_fn_802E3B24_00000EC4
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x8
    addi r5, r30, 0x528
    bl fn_80013338
    addi r3, r1, 0x8
    bl fn_8000D3A4
    lwz r0, 0x14c4(r30)
    cmpwi r0, 0xc
    beq lbl_fn_802E3B24_00000DD4
    cmpwi r0, 0xd
    beq lbl_fn_802E3B24_00000DF4
    cmpwi r0, 0xe
    beq lbl_fn_802E3B24_00000E14
    cmpwi r0, 0x8
    beq lbl_fn_802E3B24_00000E34
    b lbl_fn_802E3B24_00000EC4
lbl_fn_802E3B24_00000DD4:
    lfs f0, lbl_808846F0
    fcmpo cr0, f1, f0
    bge lbl_fn_802E3B24_00000EC4
    mr r3, r30
    bl fn_802E4D6C
    li r0, 0x2
    stw r0, 0x14c0(r30)
    b lbl_fn_802E3B24_00000EC4
lbl_fn_802E3B24_00000DF4:
    lfs f0, lbl_808846F0
    fcmpo cr0, f1, f0
    bge lbl_fn_802E3B24_00000EC4
    mr r3, r30
    bl fn_802E500C
    li r0, 0x2
    stw r0, 0x14c0(r30)
    b lbl_fn_802E3B24_00000EC4
lbl_fn_802E3B24_00000E14:
    lfs f0, lbl_808846F0
    fcmpo cr0, f1, f0
    bge lbl_fn_802E3B24_00000EC4
    mr r3, r30
    bl fn_802E52AC
    li r0, 0x2
    stw r0, 0x14c0(r30)
    b lbl_fn_802E3B24_00000EC4
lbl_fn_802E3B24_00000E34:
    lfs f0, 0x14e4(r30)
    fcmpo cr0, f1, f0
    bge lbl_fn_802E3B24_00000EC4
    lwz r4, 0x14cc(r30)
    mr r3, r30
    bl fn_802E3E38
    li r0, 0x2
    stw r0, 0x14c0(r30)
    b lbl_fn_802E3B24_00000EC4
lbl_fn_802E3B24_00000E58:
    li r0, 0x3
    stw r0, 0x14c0(r3)
    b lbl_fn_802E3B24_00000EC4
lbl_fn_802E3B24_00000E64:
    lwz r4, 0x14e8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802E3B24_00000EB4
    addi r3, r1, 0x14
    addi r4, r4, 0x4
    addi r5, r30, 0x528
    bl fn_80013338
    lfs f0, lbl_808846EC
    addi r3, r1, 0x14
    stfs f0, 0x18(r1)
    bl fn_8000D3A4
    lfs f0, lbl_80884728
    fcmpo cr0, f1, f0
    bge lbl_fn_802E3B24_00000EC4
    mr r3, r30
    li r4, 0x5
    bl fn_802E554C
    li r0, 0x0
    stw r0, 0x14c0(r30)
    b lbl_fn_802E3B24_00000EC4
lbl_fn_802E3B24_00000EB4:
    li r4, 0x5
    bl fn_802E554C
    li r0, 0x0
    stw r0, 0x14c0(r30)
lbl_fn_802E3B24_00000EC4:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802E3D60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x14b8(r3)
    stw r0, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x7
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    mr r3, r31
    li r4, 0x1
    bl fn_8016E4C4
    lwz r0, 0x5c0(r31)
    mr r3, r31
    ori r0, r0, 0x1
    stw r0, 0x5c0(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x98(r12)
    mtctr r12
    bctrl
    lwz r3, 0x14e8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802E3D60_00000F6C
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x530(r31)
    psq_st f1, 0x528(r31), 0, 0
    lfs f0, 0x14(r3)
    stfs f0, 0x538(r31)
lbl_fn_802E3D60_00000F6C:
    lfs f1, lbl_80884720
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f2, lbl_80884724
    li r4, 0x0
    stfs f1, 0x2fc(r31)
    li r5, 0x2d
    li r6, 0x0
    li r7, 0x1
    stfs f1, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802E3E38(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_802E3E38_00001048
    li r31, 0x0
    stw r31, 0x14b8(r3)
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    li r0, 0x8
    mr r3, r29
    li r4, 0x3
    stw r0, 0x58c(r29)
    bl fn_8016E970
    lfs f0, lbl_80884720
    li r0, 0x1
    stw r0, 0x3fc(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_808846EC
    li r4, 0x0
    stfs f0, 0x2fc(r29)
    li r5, 0x13f
    lfs f2, lbl_80884724
    li r6, 0x0
    stfs f0, 0x2e8(r29)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    stw r30, 0x14cc(r29)
    stw r31, 0x14d0(r29)
lbl_fn_802E3E38_00001048:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802E3EE8(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    lfs f3, lbl_808846EC
    stw r0, 0x234(r1)
    addi r4, r1, 0xb0
    stfd f31, 0x220(r1)
    psq_st f31, 0x228(r1), 0, 0
    stfd f30, 0x210(r1)
    psq_st f30, 0x218(r1), 0, 0
    stw r31, 0x20c(r1)
    mr r31, r3
    stw r30, 0x208(r1)
    addi r30, r1, 0xa4
    stw r29, 0x204(r1)
    lwz r5, 0x14cc(r3)
    lfs f0, 0x530(r3)
    lfs f5, 0x530(r5)
    lfs f4, 0x528(r5)
    fsubs f2, f5, f0
    lfs f0, 0x528(r3)
    stfs f3, 0xb4(r1)
    fsubs f4, f4, f0
    lfs f0, lbl_80884734
    stfs f2, 0xb8(r1)
    stfs f4, 0xb0(r1)
    frsp f4, f2
    psq_l f1, 0x0(r4), 0, 0
    fabs f5, f4
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xac(r1)
    frsp f5, f5
    fcmpo cr0, f5, f0
    bge lbl_fn_802E3EE8_00001108
    lfs f0, 0xa4(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_802E3EE8_000010FC
    lfs f0, lbl_80884738
    b lbl_fn_802E3EE8_00001100
lbl_fn_802E3EE8_000010FC:
    lfs f0, lbl_8088473C
lbl_fn_802E3EE8_00001100:
    stfs f0, 0x84(r1)
    b lbl_fn_802E3EE8_0000111C
lbl_fn_802E3EE8_00001108:
    fmr f2, f4
    lfs f1, 0xa4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x84(r1)
lbl_fn_802E3EE8_0000111C:
    lfs f0, 0x84(r1)
    addi r3, r1, 0xf0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808846EC
    addi r4, r1, 0x74
    lfs f30, 0xf8(r1)
    mr r5, r4
    lfs f31, 0xf4(r1)
    addi r3, r1, 0x120
    lfs f13, 0xf0(r1)
    lfs f12, 0x108(r1)
    lfs f11, 0x104(r1)
    lfs f10, 0x100(r1)
    lfs f9, 0x118(r1)
    lfs f8, 0x114(r1)
    lfs f7, 0x110(r1)
    lfs f6, 0x11c(r1)
    lfs f5, 0x10c(r1)
    lfs f4, 0xfc(r1)
    lfs f0, lbl_80884720
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xac(r1)
    stfs f3, 0x150(r1)
    stfs f3, 0x154(r1)
    stfs f3, 0x158(r1)
    stfs f0, 0x15c(r1)
    stfs f13, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f30, 0x4c(r1)
    stfs f13, 0x120(r1)
    stfs f31, 0x124(r1)
    stfs f30, 0x128(r1)
    stfs f10, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f12, 0x58(r1)
    stfs f10, 0x130(r1)
    stfs f11, 0x134(r1)
    stfs f12, 0x138(r1)
    stfs f7, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f9, 0x64(r1)
    stfs f7, 0x140(r1)
    stfs f8, 0x144(r1)
    stfs f9, 0x148(r1)
    stfs f4, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f6, 0x70(r1)
    stfs f4, 0x12c(r1)
    stfs f5, 0x13c(r1)
    stfs f6, 0x14c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x7c(r1)
    bl fn_805F9750
    lfs f2, 0x7c(r1)
    lfs f0, lbl_80884734
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802E3EE8_00001238
    lfs f3, 0x78(r1)
    lfs f0, lbl_808846EC
    fcmpo cr0, f3, f0
    ble lbl_fn_802E3EE8_00001228
    lfs f0, lbl_80884738
    b lbl_fn_802E3EE8_0000122C
lbl_fn_802E3EE8_00001228:
    lfs f0, lbl_8088473C
lbl_fn_802E3EE8_0000122C:
    fneg f0, f0
    stfs f0, 0x80(r1)
    b lbl_fn_802E3EE8_0000124C
lbl_fn_802E3EE8_00001238:
    lfs f1, 0x78(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x80(r1)
lbl_fn_802E3EE8_0000124C:
    addi r3, r1, 0x80
    lfs f2, lbl_808846EC
    psq_l f1, 0x0(r3), 0, 0
    lwz r0, 0x14d0(r31)
    psq_st f1, 0x0(r30), 0, 0
    cmpwi r0, 0x0
    stfs f2, 0x88(r1)
    lfs f4, 0xa8(r1)
    stfs f2, 0xac(r1)
    bne lbl_fn_802E3EE8_00001424
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80884714
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802E3EE8_00001424
    lwz r30, 0x14cc(r31)
    li r29, 0x1
    stfs f4, 0x538(r31)
    cmpwi r30, 0x0
    lfs f1, lbl_8088472C
    beq lbl_fn_802E3EE8_000012D8
    lfs f3, 0x530(r30)
    addi r3, r1, 0x38
    lfs f0, 0x530(r31)
    lfs f5, 0x52c(r30)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r30)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    stfs f6, 0x40(r1)
    bl fn_805F9920
lbl_fn_802E3EE8_000012D8:
    lfs f0, 0x14e4(r31)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_802E3EE8_0000132C
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802E3EE8_000012FC
    li r29, 0x0
lbl_fn_802E3EE8_000012FC:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_802E3EE8_00001330
    lwz r0, 0x560(r30)
    cmpwi r0, 0x11
    beq lbl_fn_802E3EE8_00001324
    cmpwi r0, 0x30
    beq lbl_fn_802E3EE8_00001324
    cmpwi r0, 0x4d
    bne lbl_fn_802E3EE8_00001330
lbl_fn_802E3EE8_00001324:
    li r29, 0x0
    b lbl_fn_802E3EE8_00001330
lbl_fn_802E3EE8_0000132C:
    li r29, 0x0
lbl_fn_802E3EE8_00001330:
    cmpwi r29, 0x0
    beq lbl_fn_802E3EE8_000013F4
    lwz r3, 0x14cc(r31)
    stw r3, 0x14d0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802E3EE8_000014D4
    lwz r4, 0x14d4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_802E3EE8_00001364
    li r5, 0x1e
    li r6, 0x1d8
    li r7, -0x1
    bl fn_801595BC
lbl_fn_802E3EE8_00001364:
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_802E3EE8_000013CC
    lwz r3, 0x14d0(r31)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    beq lbl_fn_802E3EE8_000013CC
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_802E3EE8_00001394
    li r5, -0x1
    b lbl_fn_802E3EE8_00001398
lbl_fn_802E3EE8_00001394:
    lwz r5, 0x58(r3)
lbl_fn_802E3EE8_00001398:
    lwz r0, 0x14f0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802E3EE8_000013B4
    lwz r3, lbl_8087F430
    lwz r4, 0x14f4(r31)
    bl fn_80370AE4
    b lbl_fn_802E3EE8_000013CC
lbl_fn_802E3EE8_000013B4:
    cmpwi r0, 0x1
    bne lbl_fn_802E3EE8_000013CC
    lwz r3, lbl_8087F430
    li r6, 0x0
    lwz r4, 0x14f4(r31)
    bl fn_80370320
lbl_fn_802E3EE8_000013CC:
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_802E3EE8_000014D4
    lwz r4, 0x14d0(r31)
    li r5, 0x2a
    lfs f1, lbl_80884720
    li r6, 0x0
    lfs f2, lbl_808846F4
    bl fn_803EA77C
    b lbl_fn_802E3EE8_000014D4
lbl_fn_802E3EE8_000013F4:
    li r0, 0x0
    stw r0, 0x14b8(r31)
    stw r0, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x9
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_802E3EE8_000014D4
lbl_fn_802E3EE8_00001424:
    lfs f30, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_802E3EE8_000014D4
    li r0, 0x0
    stw r0, 0x14b8(r31)
    stw r0, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xb
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80884720
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808846EC
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x141
    lfs f2, lbl_80884724
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x14d0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802E3EE8_000014D4
    lfs f1, lbl_808846EC
    addi r3, r3, 0xb0
    lfs f2, lbl_80884724
    li r4, 0x0
    li r5, 0x1d8
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_802E3EE8_000014D4:
    lwz r3, 0x14d0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802E3EE8_0000185C
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_802E3EE8_000014F8
    lwz r0, 0x560(r3)
    cmpwi r0, 0x11
    beq lbl_fn_802E3EE8_0000185C
lbl_fn_802E3EE8_000014F8:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802E3EE8_000016CC
    li r0, 0x0
    stw r0, 0x14b8(r31)
    stw r0, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x10
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80884720
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808846EC
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x33
    lfs f2, lbl_80884724
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x14d0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802E3EE8_0000185C
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r0, 0x0
    li r4, 0x0
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_802E3EE8_000015A4
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_802E3EE8_000015A4
    li r4, 0x1
lbl_fn_802E3EE8_000015A4:
    cmpwi r4, 0x0
    beq lbl_fn_802E3EE8_000015C0
    lwz r4, 0x7e0(r3)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_802E3EE8_000015C0
    li r0, 0x1
lbl_fn_802E3EE8_000015C0:
    cmpwi r0, 0x0
    beq lbl_fn_802E3EE8_000015F4
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802E3EE8_000015E8
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_802E3EE8_000015E8
    li r4, 0x1
lbl_fn_802E3EE8_000015E8:
    cmpwi r4, 0x0
    bne lbl_fn_802E3EE8_000015F4
    li r5, 0x1
lbl_fn_802E3EE8_000015F4:
    cmpwi r5, 0x0
    beq lbl_fn_802E3EE8_00001604
    li r4, -0x1
    bl fn_8015AC48
lbl_fn_802E3EE8_00001604:
    lwz r3, 0x14d0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802E3EE8_0000185C
    li r0, 0x0
    stw r0, 0xf1c(r3)
    addi r6, r1, 0x2c
    addi r5, r1, 0x20
    lwz r7, 0x14d0(r31)
    addi r4, r1, 0x1b0
    lwz r3, lbl_8087EE98
    li r8, 0x0
    psq_l f1, 0x528(r7), 0, 0
    li r9, 0x0
    lfs f2, 0x530(r7)
    lis r7, 0x8000
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r6), 0, 0
    lfs f2, 0x530(r31)
    psq_l f1, 0x528(r31), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f0, 0x30(r1)
    stfs f2, 0x28(r1)
    stfs f0, 0x24(r1)
    stw r0, 0x1e4(r1)
    stw r0, 0x1e8(r1)
    stw r0, 0x1ec(r1)
    stw r0, 0x1f0(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_802E3EE8_000016C0
    lfs f3, 0x1c0(r1)
    addi r3, r1, 0x1c0
    lfs f0, 0x1d8(r1)
    lfs f5, 0x1c4(r1)
    fadds f6, f3, f0
    lfs f4, 0x1dc(r1)
    lfs f3, 0x1c8(r1)
    lfs f0, 0x1e0(r1)
    fadds f4, f5, f4
    stfs f6, 0x1c0(r1)
    fadds f2, f3, f0
    stfs f4, 0x1c4(r1)
    stfs f2, 0x1c8(r1)
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x14d0(r31)
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
lbl_fn_802E3EE8_000016C0:
    li r0, 0x0
    stw r0, 0x14d0(r31)
    b lbl_fn_802E3EE8_0000185C
lbl_fn_802E3EE8_000016CC:
    lfs f3, lbl_808846EC
    addi r3, r1, 0xc0
    lfs f0, lbl_80884720
    li r4, 0x79
    stfs f3, 0x8c(r1)
    stfs f3, 0x90(r1)
    stfs f0, 0x94(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x8c
    addi r3, r1, 0xc0
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x94(r1)
    addi r4, r1, 0x98
    lfs f3, 0x90(r1)
    li r5, -0x1
    lfs f0, 0x8c(r1)
    fneg f4, f4
    fneg f3, f3
    li r6, 0x0
    fneg f0, f0
    stfs f4, 0xa0(r1)
    stfs f0, 0x98(r1)
    stfs f3, 0x9c(r1)
    lwz r3, 0x14d0(r31)
    bl fn_8015E7A0
    li r30, 0x0
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xa
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80884720
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808846EC
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14a
    lfs f2, lbl_80884724
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x14d0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802E3EE8_0000185C
    stw r30, 0xf1c(r3)
    addi r6, r1, 0x14
    addi r5, r1, 0x8
    addi r4, r1, 0x160
    lwz r7, 0x14d0(r31)
    li r8, 0x0
    lwz r3, lbl_8087EE98
    li r9, 0x0
    psq_l f1, 0x528(r7), 0, 0
    lfs f2, 0x530(r7)
    lis r7, 0x8000
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r6), 0, 0
    lfs f2, 0x530(r31)
    psq_l f1, 0x528(r31), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f0, 0x18(r1)
    stfs f2, 0x10(r1)
    stfs f0, 0xc(r1)
    stw r30, 0x194(r1)
    stw r30, 0x198(r1)
    stw r30, 0x19c(r1)
    stw r30, 0x1a0(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_802E3EE8_00001854
    lfs f3, 0x170(r1)
    addi r3, r1, 0x170
    lfs f0, 0x188(r1)
    lfs f5, 0x174(r1)
    fadds f6, f3, f0
    lfs f4, 0x18c(r1)
    lfs f3, 0x178(r1)
    lfs f0, 0x190(r1)
    fadds f4, f5, f4
    stfs f6, 0x170(r1)
    fadds f2, f3, f0
    stfs f4, 0x174(r1)
    stfs f2, 0x178(r1)
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x14d0(r31)
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
lbl_fn_802E3EE8_00001854:
    li r0, 0x0
    stw r0, 0x14d0(r31)
lbl_fn_802E3EE8_0000185C:
    lwz r0, 0x234(r1)
    psq_l f31, 0x228(r1), 0, 0
    lfd f31, 0x220(r1)
    psq_l f30, 0x218(r1), 0, 0
    lfd f30, 0x210(r1)
    lwz r31, 0x20c(r1)
    lwz r30, 0x208(r1)
    lwz r29, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}

asm void fn_802E470C(void)
{
    nofralloc
    stwu r1, -0x1b0(r1)
    mflr r0
    stw r0, 0x1b4(r1)
    stfd f31, 0x1a0(r1)
    psq_st f31, 0x1a8(r1), 0, 0
    stw r31, 0x19c(r1)
    mr r31, r3
    stw r30, 0x198(r1)
    stw r29, 0x194(r1)
    lwz r4, 0x14bc(r3)
    lwz r0, 0x14e0(r3)
    cmpw r4, r0
    ble lbl_fn_802E470C_000018C4
    li r0, 0x0
    stw r0, 0x14bc(r3)
lbl_fn_802E470C_000018C4:
    lwz r8, 0x14d0(r3)
    cmpwi r8, 0x0
    beq lbl_fn_802E470C_0000196C
    lwz r7, 0x38(r8)
    li r5, 0x0
    li r0, 0x0
    li r4, 0x0
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_802E470C_000018FC
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_802E470C_000018FC
    li r4, 0x1
lbl_fn_802E470C_000018FC:
    cmpwi r4, 0x0
    beq lbl_fn_802E470C_00001918
    lwz r4, 0x7e0(r8)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_802E470C_00001918
    li r0, 0x1
lbl_fn_802E470C_00001918:
    cmpwi r0, 0x0
    beq lbl_fn_802E470C_0000194C
    lwz r0, 0x55c(r8)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802E470C_00001940
    lwz r0, 0x560(r8)
    cmpwi r0, 0x1c
    bne lbl_fn_802E470C_00001940
    li r4, 0x1
lbl_fn_802E470C_00001940:
    cmpwi r4, 0x0
    bne lbl_fn_802E470C_0000194C
    li r5, 0x1
lbl_fn_802E470C_0000194C:
    cmpwi r5, 0x0
    beq lbl_fn_802E470C_0000196C
    lwz r0, 0x55c(r8)
    cmpwi r0, 0x6
    bne lbl_fn_802E470C_0000196C
    lwz r0, 0x560(r8)
    cmpwi r0, 0x11
    beq lbl_fn_802E470C_00001CD8
lbl_fn_802E470C_0000196C:
    lwz r0, 0x48(r8)
    cmpwi r0, 0x0
    bne lbl_fn_802E470C_00001B14
    lwz r0, 0x7e0(r8)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802E470C_00001B14
    lwz r4, 0x1504(r3)
    lfs f0, lbl_808846EC
    lfs f4, 0x530(r4)
    lfs f3, 0x530(r3)
    lwz r0, 0x14b8(r4)
    fsubs f5, f4, f3
    lfs f4, 0x528(r4)
    lfs f3, 0x528(r3)
    cmpwi r0, 0x1
    stfs f5, 0x88(r1)
    fsubs f3, f4, f3
    stfs f0, 0x84(r1)
    stfs f3, 0x80(r1)
    bne lbl_fn_802E470C_00001B14
    mr r3, r4
    mr r4, r31
    bl fn_802DC5B4
    psq_l f1, 0x528(r31), 0, 0
    addi r5, r1, 0x50
    lfs f2, 0x530(r31)
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r5), 0, 0
    lwz r3, 0x14d0(r31)
    lwz r4, 0x1504(r31)
    bl fn_8016C4D8
    li r30, 0x0
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xa
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80884720
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808846EC
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14a
    lfs f2, lbl_80884724
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x14d0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802E470C_00001EC4
    stw r30, 0xf1c(r3)
    addi r6, r1, 0x2c
    addi r5, r1, 0x20
    addi r4, r1, 0x140
    lwz r7, 0x14d0(r31)
    li r8, 0x0
    lwz r3, lbl_8087EE98
    li r9, 0x0
    psq_l f1, 0x528(r7), 0, 0
    lfs f2, 0x530(r7)
    lis r7, 0x8000
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r6), 0, 0
    lfs f2, 0x530(r31)
    psq_l f1, 0x528(r31), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f0, 0x30(r1)
    stfs f2, 0x28(r1)
    stfs f0, 0x24(r1)
    stw r30, 0x174(r1)
    stw r30, 0x178(r1)
    stw r30, 0x17c(r1)
    stw r30, 0x180(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_802E470C_00001B08
    lfs f3, 0x150(r1)
    addi r3, r1, 0x150
    lfs f0, 0x168(r1)
    lfs f5, 0x154(r1)
    fadds f6, f3, f0
    lfs f4, 0x16c(r1)
    lfs f3, 0x158(r1)
    lfs f0, 0x170(r1)
    fadds f4, f5, f4
    stfs f6, 0x150(r1)
    fadds f2, f3, f0
    stfs f4, 0x154(r1)
    stfs f2, 0x158(r1)
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x14d0(r31)
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
lbl_fn_802E470C_00001B08:
    li r0, 0x0
    stw r0, 0x14d0(r31)
    b lbl_fn_802E470C_00001EC4
lbl_fn_802E470C_00001B14:
    li r0, 0x0
    stw r0, 0x14b8(r3)
    stw r0, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x10
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80884720
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808846EC
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x33
    lfs f2, lbl_80884724
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x14d0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802E470C_00001EC4
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r0, 0x0
    li r4, 0x0
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_802E470C_00001BB0
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_802E470C_00001BB0
    li r4, 0x1
lbl_fn_802E470C_00001BB0:
    cmpwi r4, 0x0
    beq lbl_fn_802E470C_00001BCC
    lwz r4, 0x7e0(r3)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_802E470C_00001BCC
    li r0, 0x1
lbl_fn_802E470C_00001BCC:
    cmpwi r0, 0x0
    beq lbl_fn_802E470C_00001C00
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802E470C_00001BF4
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_802E470C_00001BF4
    li r4, 0x1
lbl_fn_802E470C_00001BF4:
    cmpwi r4, 0x0
    bne lbl_fn_802E470C_00001C00
    li r5, 0x1
lbl_fn_802E470C_00001C00:
    cmpwi r5, 0x0
    beq lbl_fn_802E470C_00001C10
    li r4, -0x1
    bl fn_8015AC48
lbl_fn_802E470C_00001C10:
    lwz r3, 0x14d0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802E470C_00001EC4
    li r0, 0x0
    stw r0, 0xf1c(r3)
    addi r6, r1, 0x14
    addi r5, r1, 0x8
    lwz r7, 0x14d0(r31)
    addi r4, r1, 0xf0
    lwz r3, lbl_8087EE98
    li r8, 0x0
    psq_l f1, 0x528(r7), 0, 0
    li r9, 0x0
    lfs f2, 0x530(r7)
    lis r7, 0x8000
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r6), 0, 0
    lfs f2, 0x530(r31)
    psq_l f1, 0x528(r31), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f0, 0x18(r1)
    stfs f2, 0x10(r1)
    stfs f0, 0xc(r1)
    stw r0, 0x124(r1)
    stw r0, 0x128(r1)
    stw r0, 0x12c(r1)
    stw r0, 0x130(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_802E470C_00001CCC
    lfs f3, 0x100(r1)
    addi r3, r1, 0x100
    lfs f0, 0x118(r1)
    lfs f5, 0x104(r1)
    fadds f6, f3, f0
    lfs f4, 0x11c(r1)
    lfs f3, 0x108(r1)
    lfs f0, 0x120(r1)
    fadds f4, f5, f4
    stfs f6, 0x100(r1)
    fadds f2, f3, f0
    stfs f4, 0x104(r1)
    stfs f2, 0x108(r1)
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x14d0(r31)
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
lbl_fn_802E470C_00001CCC:
    li r0, 0x0
    stw r0, 0x14d0(r31)
    b lbl_fn_802E470C_00001EC4
lbl_fn_802E470C_00001CD8:
    lwz r4, 0x1504(r3)
    lfs f0, 0x530(r3)
    lfs f5, 0x530(r4)
    lfs f3, 0x528(r3)
    addi r3, r1, 0x74
    lfs f4, 0x528(r4)
    fsubs f5, f5, f0
    lfs f0, lbl_808846EC
    fsubs f3, f4, f3
    stfs f5, 0x7c(r1)
    stfs f3, 0x74(r1)
    stfs f0, 0x78(r1)
    bl fn_805F9940
    lfs f0, lbl_80884740
    addi r3, r1, 0x74
    mr r4, r3
    fsubs f31, f1, f0
    bl fn_805F98D0
    lfs f0, lbl_80884730
    fcmpo cr0, f31, f0
    ble lbl_fn_802E470C_00001D84
    lfs f0, lbl_8088471C
    fcmpo cr0, f31, f0
    ble lbl_fn_802E470C_00001D3C
    fmr f31, f0
lbl_fn_802E470C_00001D3C:
    lfs f4, 0x7c(r1)
    lfs f3, 0x78(r1)
    fmuls f5, f4, f31
    lfs f0, 0x74(r1)
    fmuls f6, f3, f31
    lfs f3, 0x52c(r31)
    fmuls f7, f0, f31
    lfs f4, 0x528(r31)
    lfs f0, 0x530(r31)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x44(r1)
    fadds f0, f0, f5
    stfs f6, 0x48(r1)
    stfs f5, 0x4c(r1)
    stfs f4, 0x528(r31)
    stfs f3, 0x52c(r31)
    stfs f0, 0x530(r31)
lbl_fn_802E470C_00001D84:
    lfs f3, lbl_808846EC
    addi r3, r1, 0x90
    lfs f0, lbl_80884720
    li r4, 0x79
    stfs f3, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f0, 0x70(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x68
    addi r3, r1, 0x90
    mr r5, r4
    bl fn_805F93C0
    lfs f0, lbl_808846EC
    addi r3, r1, 0x68
    stfs f0, 0x6c(r1)
    mr r4, r3
    bl fn_805F98D0
    addi r3, r1, 0x74
    addi r30, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x7c(r1)
    mr r4, r30
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F98D0
    lfs f1, lbl_80884748
    addi r3, r1, 0xc0
    li r4, 0x79
    bl fn_805F8E70
    addi r29, r1, 0x5c
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x40(r1)
    mr r4, r29
    psq_st f1, 0x0(r29), 0, 0
    mr r5, r29
    addi r3, r1, 0xc0
    stfs f2, 0x64(r1)
    bl fn_805F93C0
    lis r3, lbl_80747D70@ha
    lfd f1, lbl_80747D70@l(r3)
    bl fn_8068A850
    frsp f31, f1
    mr r4, r29
    addi r3, r1, 0x68
    bl fn_805F9990
    fcmpo cr0, f1, f31
    bge lbl_fn_802E470C_00001EC4
    mr r4, r29
    addi r3, r1, 0x68
    bl fn_805F9990
    bl fn_8068AE9C
    lis r3, lbl_80747D78@ha
    frsp f1, f1
    lfd f2, lbl_80747D78@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80884748
    fcmpo cr0, f3, f0
    ble lbl_fn_802E470C_00001E80
    lfs f0, lbl_8088474C
    fsubs f3, f3, f0
lbl_fn_802E470C_00001E80:
    lfs f0, lbl_80884750
    fcmpo cr0, f3, f0
    bge lbl_fn_802E470C_00001E94
    lfs f0, lbl_8088474C
    fadds f3, f3, f0
lbl_fn_802E470C_00001E94:
    lfs f0, lbl_808846EC
    fcmpo cr0, f3, f0
    bge lbl_fn_802E470C_00001EB4
    lfs f3, 0x538(r31)
    lfs f0, lbl_80884754
    fadds f0, f3, f0
    stfs f0, 0x538(r31)
    b lbl_fn_802E470C_00001EC4
lbl_fn_802E470C_00001EB4:
    lfs f3, 0x538(r31)
    lfs f0, lbl_80884754
    fsubs f0, f3, f0
    stfs f0, 0x538(r31)
lbl_fn_802E470C_00001EC4:
    lwz r0, 0x1b4(r1)
    psq_l f31, 0x1a8(r1), 0, 0
    lfd f31, 0x1a0(r1)
    lwz r31, 0x19c(r1)
    lwz r30, 0x198(r1)
    lwz r29, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x1b0
    blr
}
