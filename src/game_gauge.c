#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_8006B0C8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8008AD4C(void);
extern void fn_8008B138(void);
extern void fn_80092F1C(void);
extern void fn_800A1934(void);
extern void fn_800A19B8(void);
extern void fn_800A1A3C(void);
extern void fn_800A1B84(void);
extern void fn_800A1CE4(void);
extern void fn_800A1E24(void);
extern void fn_800A1F84(void);
extern void fn_800DC288(void);
extern void fn_800DC500(void);
extern void fn_800DC6B4(void);
extern void fn_802376D0(void);
extern void fn_80237874(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_8047202C(void);
extern void fn_80473E74(void);
extern void fn_80473F18(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_80476884(void);
extern void fn_804768B4(void);
extern void fn_80682428(void);
extern void fn_8072D210(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807326D8[];
extern u8 lbl_80732768[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078FE50[];
extern u8 lbl_807C73B8[];
extern u8 lbl_807C73C8[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087EF50;
extern u32 lbl_80880C8C;
extern u32 lbl_80880C90;
extern u32 lbl_80880C94;
extern u32 lbl_80880C98;
extern u32 lbl_80880C9C;

/* Function declarations */
void fn_800A005C(void);
void fn_800A03A0(void);
void fn_800A03E4(void);
void fn_800A0448(void);
void fn_800A04A0(void);
void fn_800A0548(void);
void fn_800A05AC(void);
void fn_800A05FC(void);
void fn_800A0610(void);
void fn_800A08D4(void);
void fn_800A08E0(void);
void fn_800A091C(void);
void fn_800A09D0(void);
void fn_800A0A68(void);
void fn_800A0D90(void);
void fn_800A1060(void);
void fn_800A130C(void);

asm void fn_800A005C(void)
{
    nofralloc
    stwu r1, -0xa90(r1)
    mflr r0
    stw r0, 0xa94(r1)
    li r0, 0xa88
    addi r11, r1, 0xa80
    stfd f31, 0xa80(r1)
    psq_stx f31, r1, r0, 0, 0
    bl _savegpr_26
    mr r30, r3
    bl fn_8047059C
    mr r31, r3
    mr r3, r30
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r28, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x430(r1)
    mr r29, r3
    addi r3, r1, 0x440
    stw r28, 0x434(r1)
    li r4, 0x0
    li r5, 0x400
    stw r28, 0x438(r1)
    stw r28, 0x43c(r1)
    stw r28, 0xa60(r1)
    bl memset
    addi r3, r1, 0xa40
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x430(r1)
    mr r4, r29
    mr r5, r31
    addi r3, r1, 0x430
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x430
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x430(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    mr r3, r30
    bl fn_80473F18
    stw r28, 0x18(r1)
    mr r29, r3
    addi r31, r1, 0x18
    stw r28, 0x1c(r1)
    stw r28, 0x20(r1)
    bl strlen
    mr r27, r3
    mr r3, r31
    mr r4, r27
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r31
    stb r0, 0x10(r1)
    mr r6, r29
    add r7, r29, r27
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r31
    addi r3, r1, 0x24
    bl fn_8006B0C8
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800A005C_00000120
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_800A005C_00000120:
    lis r28, lbl_807326D8@ha
    lfs f31, lbl_80880C8C
    addi r31, r1, 0x25
    addi r29, r28, lbl_807326D8@l
lbl_fn_800A005C_00000130:
    addi r3, r1, 0x430
    bl fn_8005B9CC
    mr r26, r3
    addi r4, r29, 0x15
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800A005C_000001A8
    addi r3, r1, 0x430
    bl fn_8005B9CC
    lwz r0, 0x24(r1)
    mr r27, r3
    srwi. r0, r0, 31
    bne lbl_fn_800A005C_00000170
    lbz r0, 0x24(r1)
    clrlwi r26, r0, 25
    b lbl_fn_800A005C_00000174
lbl_fn_800A005C_00000170:
    lwz r26, 0x28(r1)
lbl_fn_800A005C_00000174:
    lbz r0, 0xc(r1)
    mr r3, r27
    stb r0, 0x8(r1)
    bl strlen
    mr r0, r3
    mr r5, r26
    mr r6, r27
    addi r3, r1, 0x24
    add r7, r27, r0
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
    b lbl_fn_800A005C_000002FC
lbl_fn_800A005C_000001A8:
    mr r3, r26
    addi r4, r29, 0x1c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800A005C_00000260
    addi r3, r1, 0x430
    bl fn_8005B9CC
    lwz r0, 0x24(r1)
    mr r6, r3
    addi r3, r1, 0x330
    addi r4, r29, 0x22
    srwi. r0, r0, 31
    bne lbl_fn_800A005C_000001E4
    mr r5, r31
    b lbl_fn_800A005C_000001E8
lbl_fn_800A005C_000001E4:
    lwz r5, 0x2c(r1)
lbl_fn_800A005C_000001E8:
    crclr 6
    bl sprintf
    addi r3, r1, 0x430
    bl fn_8005B9CC
    mr r26, r3
    addi r4, r28, lbl_807326D8@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800A005C_00000220
    addi r3, r30, 0x10
    addi r4, r1, 0x330
    li r5, 0x0
    bl fn_8008AD4C
    b lbl_fn_800A005C_000002FC
lbl_fn_800A005C_00000220:
    lwz r0, 0x24(r1)
    addi r3, r1, 0x230
    addi r4, r29, 0x22
    srwi. r0, r0, 31
    bne lbl_fn_800A005C_0000023C
    mr r5, r31
    b lbl_fn_800A005C_00000240
lbl_fn_800A005C_0000023C:
    lwz r5, 0x2c(r1)
lbl_fn_800A005C_00000240:
    mr r6, r26
    crclr 6
    bl sprintf
    addi r3, r30, 0x10
    addi r4, r1, 0x330
    addi r5, r1, 0x230
    bl fn_8008AD4C
    b lbl_fn_800A005C_000002FC
lbl_fn_800A005C_00000260:
    mr r3, r26
    addi r4, r29, 0x28
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800A005C_000002FC
    addi r3, r1, 0x430
    bl fn_8005B9CC
    lwz r0, 0x24(r1)
    mr r6, r3
    addi r3, r1, 0x130
    addi r4, r29, 0x22
    srwi. r0, r0, 31
    bne lbl_fn_800A005C_0000029C
    mr r5, r31
    b lbl_fn_800A005C_000002A0
lbl_fn_800A005C_0000029C:
    lwz r5, 0x2c(r1)
lbl_fn_800A005C_000002A0:
    crclr 6
    bl sprintf
    addi r3, r1, 0x430
    bl fn_8005B9CC
    lwz r0, 0x24(r1)
    mr r6, r3
    addi r3, r1, 0x30
    addi r4, r29, 0x22
    srwi. r0, r0, 31
    bne lbl_fn_800A005C_000002D0
    mr r5, r31
    b lbl_fn_800A005C_000002D4
lbl_fn_800A005C_000002D0:
    lwz r5, 0x2c(r1)
lbl_fn_800A005C_000002D4:
    crclr 6
    bl sprintf
    addi r3, r1, 0x430
    bl fn_8005B9CC
    bl fn_800DC288
    fmuls f1, f31, f1
    addi r3, r30, 0x10
    addi r4, r1, 0x130
    addi r5, r1, 0x30
    bl fn_80092F1C
lbl_fn_800A005C_000002FC:
    addi r3, r1, 0x430
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_800A005C_00000130
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800A005C_00000320
    lwz r3, 0x2c(r1)
    bl dtor_80084684
lbl_fn_800A005C_00000320:
    li r0, 0xa88
    addi r11, r1, 0xa80
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0xa80(r1)
    bl _restgpr_26
    lwz r0, 0xa94(r1)
    mtlr r0
    addi r1, r1, 0xa90
    blr
}

asm void fn_800A03A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80473E74
    lis r3, lbl_8078FE50@ha
    li r0, 0x0
    addi r3, r3, lbl_8078FE50@l
    stw r3, 0x0(r31)
    mr r3, r31
    stw r0, 0x8(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A03E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800A03E4_000003BC
    bl fn_80473F88
    li r0, 0x0
    stw r0, 0x8(r30)
lbl_fn_800A03E4_000003BC:
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A0448(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_800A0448_00000414
    li r3, 0x1
    b lbl_fn_800A0448_00000430
lbl_fn_800A0448_00000414:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_800A0448_0000042C
    mr r3, r31
    bl fn_80476884
    stw r3, 0x8(r31)
lbl_fn_800A0448_0000042C:
    li r3, 0x0
lbl_fn_800A0448_00000430:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A04A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f1
    stw r31, 0x14(r1)
    mr r31, r6
    stw r30, 0x10(r1)
    mr r30, r4
    stw r29, 0xc(r1)
    mr r29, r3
    mr r3, r5
    bl fn_800DC6B4
    lwz r7, 0x8(r29)
    li r6, 0x0
    lwz r0, 0x14(r7)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_800A04A0_000004C8
lbl_fn_800A04A0_00000490:
    lwz r4, 0x18(r7)
    lwzx r5, r4, r6
    lwz r0, 0x14(r5)
    cmplw r0, r3
    bne lbl_fn_800A04A0_000004C0
    fmr f1, f31
    mr r3, r29
    mr r4, r30
    mr r6, r31
    bl fn_800A0610
    li r3, 0x1
    b lbl_fn_800A04A0_000004CC
lbl_fn_800A04A0_000004C0:
    addi r6, r6, 0x4
    bdnz lbl_fn_800A04A0_00000490
lbl_fn_800A04A0_000004C8:
    li r3, 0x0
lbl_fn_800A04A0_000004CC:
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    lwz r29, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800A0548(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r8, 0x0
    stw r0, 0x14(r1)
    lwz r9, 0x8(r3)
    lwz r0, 0x14(r9)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_800A0548_0000053C
lbl_fn_800A0548_00000510:
    lwz r7, 0x18(r9)
    lwzx r7, r7, r8
    lwz r0, 0x14(r7)
    cmplw r0, r5
    bne lbl_fn_800A0548_00000534
    mr r5, r7
    bl fn_800A0610
    li r3, 0x1
    b lbl_fn_800A0548_00000540
lbl_fn_800A0548_00000534:
    addi r8, r8, 0x4
    bdnz lbl_fn_800A0548_00000510
lbl_fn_800A0548_0000053C:
    li r3, 0x0
lbl_fn_800A0548_00000540:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A05AC(void)
{
    nofralloc
    lwz r6, 0x8(r3)
    cmpwi r6, 0x0
    beq lbl_fn_800A05AC_00000598
    lwz r8, 0x14(r6)
    mr r3, r5
    slwi r7, r5, 2
    subf r0, r5, r8
    mtctr r0
    cmpw r5, r8
    bge lbl_fn_800A05AC_00000598
lbl_fn_800A05AC_00000578:
    lwz r5, 0x18(r6)
    lwzx r5, r5, r7
    lwz r0, 0x14(r5)
    cmplw r0, r4
    beqlr
    addi r7, r7, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_800A05AC_00000578
lbl_fn_800A05AC_00000598:
    li r3, -0x1
    blr
}

asm void fn_800A05FC(void)
{
    nofralloc
    lwz r7, 0x8(r3)
    slwi r0, r5, 2
    lwz r5, 0x18(r7)
    lwzx r5, r5, r0
    b fn_800A0610
}

asm void fn_800A0610(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x60
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stfd f30, 0x70(r1)
    psq_st f30, 0x78(r1), 0, 0
    stfd f29, 0x60(r1)
    psq_st f29, 0x68(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x18(r5)
    fmr f31, f1
    mr r27, r4
    mr r28, r5
    rlwinm. r0, r0, 0, 29, 29
    mr r29, r6
    li r31, 0x0
    li r30, 0x0
    beq lbl_fn_800A0610_00000664
    mulli r0, r31, 0xc
    lwz r3, 0x1c(r5)
    mr r4, r29
    li r31, 0x1
    add r3, r3, r0
    bl fn_8047202C
    mulli r0, r31, 0xc
    stfs f1, 0x20(r27)
    lwz r3, 0x1c(r28)
    fmr f1, f31
    addi r4, r29, 0x2
    add r3, r3, r0
    li r31, 0x2
    bl fn_8047202C
    mulli r0, r31, 0xc
    stfs f1, 0x24(r27)
    lwz r3, 0x1c(r28)
    fmr f1, f31
    addi r4, r29, 0x4
    add r3, r3, r0
    li r31, 0x3
    li r30, 0x3
    bl fn_8047202C
    stfs f1, 0x28(r27)
lbl_fn_800A0610_00000664:
    lwz r0, 0x18(r28)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_fn_800A0610_000007BC
    mulli r3, r31, 0xc
    slwi r0, r30, 1
    lwz r5, 0x1c(r28)
    fmr f1, f31
    add r4, r29, r0
    add r3, r5, r3
    addi r31, r31, 0x1
    addi r30, r30, 0x1
    bl fn_8047202C
    mulli r3, r31, 0xc
    slwi r0, r30, 1
    stfs f1, 0x30(r1)
    fmr f1, f31
    lwz r5, 0x1c(r28)
    add r4, r29, r0
    add r3, r5, r3
    addi r31, r31, 0x1
    addi r30, r30, 0x1
    bl fn_8047202C
    mulli r3, r31, 0xc
    slwi r0, r30, 1
    stfs f1, 0x34(r1)
    fmr f1, f31
    lwz r5, 0x1c(r28)
    add r4, r29, r0
    add r3, r5, r3
    addi r31, r31, 0x1
    addi r30, r30, 0x1
    bl fn_8047202C
    lfs f4, 0x30(r1)
    frsp f30, f1
    lfs f3, lbl_80880C94
    addi r3, r1, 0x14
    lfs f0, lbl_80880C90
    addi r4, r1, 0x8
    fmuls f3, f4, f3
    stfs f1, 0x38(r1)
    lfs f29, 0x34(r1)
    fmuls f1, f0, f3
    bl fn_8072D210
    lfs f3, lbl_80880C94
    addi r3, r1, 0x18
    lfs f0, lbl_80880C90
    addi r4, r1, 0xc
    fmuls f3, f29, f3
    fmuls f1, f0, f3
    bl fn_8072D210
    lfs f3, lbl_80880C94
    addi r3, r1, 0x1c
    lfs f0, lbl_80880C90
    addi r4, r1, 0x10
    fmuls f3, f30, f3
    fmuls f1, f0, f3
    bl fn_8072D210
    lfs f11, 0xc(r1)
    addi r3, r1, 0x20
    lfs f8, 0x14(r1)
    lfs f5, 0x18(r1)
    lfs f7, 0x8(r1)
    fmuls f3, f8, f11
    lfs f9, 0x1c(r1)
    fmuls f0, f8, f5
    fmuls f4, f7, f5
    lfs f10, 0x10(r1)
    fmuls f3, f9, f3
    fmuls f5, f5, f9
    fmuls f12, f11, f10
    fmadds f3, f10, f4, f3
    fmuls f6, f8, f5
    fmuls f5, f7, f5
    stfs f3, 0x24(r1)
    fmuls f3, f7, f11
    fmuls f0, f10, f0
    fmadds f6, f7, f12, f6
    fmsubs f4, f8, f12, f5
    fmsubs f0, f9, f3, f0
    stfs f6, 0x2c(r1)
    stfs f4, 0x20(r1)
    stfs f0, 0x28(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f1, 0x10(r27), 0, 0
    psq_st f2, 0x18(r27), 0, 0
lbl_fn_800A0610_000007BC:
    lwz r0, 0x18(r28)
    clrlwi. r0, r0, 31
    beq lbl_fn_800A0610_00000838
    mulli r3, r31, 0xc
    slwi r0, r30, 1
    lwz r5, 0x1c(r28)
    fmr f1, f31
    add r4, r29, r0
    add r3, r5, r3
    addi r31, r31, 0x1
    addi r30, r30, 0x1
    bl fn_8047202C
    mulli r3, r31, 0xc
    slwi r0, r30, 1
    stfs f1, 0x4(r27)
    fmr f1, f31
    lwz r5, 0x1c(r28)
    add r4, r29, r0
    add r3, r5, r3
    addi r31, r31, 0x1
    addi r30, r30, 0x1
    bl fn_8047202C
    mulli r3, r31, 0xc
    stfs f1, 0x8(r27)
    lwz r4, 0x1c(r28)
    fmr f1, f31
    slwi r0, r30, 1
    add r3, r4, r3
    add r4, r29, r0
    bl fn_8047202C
    stfs f1, 0xc(r27)
lbl_fn_800A0610_00000838:
    lwz r3, 0x0(r27)
    lwz r0, 0x18(r28)
    or r0, r3, r0
    stw r0, 0x0(r27)
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    psq_l f30, 0x78(r1), 0, 0
    lfd f30, 0x70(r1)
    psq_l f29, 0x68(r1), 0, 0
    lfd f29, 0x60(r1)
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_800A08D4(void)
{
    nofralloc
    lwz r3, 0x8(r3)
    lfs f1, 0x10(r3)
    blr
}

asm void fn_800A08E0(void)
{
    nofralloc
    lfs f1, lbl_80880C98
    li r0, 0x0
    lfs f0, lbl_80880C9C
    stw r0, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f1, 0x8(r3)
    stfs f1, 0xc(r3)
    stfs f1, 0x10(r3)
    stfs f1, 0x14(r3)
    stfs f1, 0x18(r3)
    stfs f1, 0x1c(r3)
    stfs f0, 0x20(r3)
    stfs f0, 0x24(r3)
    stfs f0, 0x28(r3)
    blr
}

asm void fn_800A091C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    b lbl_fn_800A091C_0000090C
lbl_fn_800A091C_000008E8:
    lwz r0, 0x14(r29)
    add r3, r0, r31
    bl fn_802376D0
    cmpwi r3, 0x0
    beq lbl_fn_800A091C_00000904
    li r3, 0x1
    b lbl_fn_800A091C_00000958
lbl_fn_800A091C_00000904:
    addi r30, r30, 0x1
    addi r31, r31, 0xc
lbl_fn_800A091C_0000090C:
    lwz r0, 0xc(r29)
    cmplw r30, r0
    blt lbl_fn_800A091C_000008E8
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_800A091C_00000948
lbl_fn_800A091C_00000924:
    lwz r0, 0x20(r29)
    add r3, r0, r31
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800A091C_00000940
    li r3, 0x1
    b lbl_fn_800A091C_00000958
lbl_fn_800A091C_00000940:
    addi r30, r30, 0x1
    addi r31, r31, 0xc
lbl_fn_800A091C_00000948:
    lwz r0, 0x18(r29)
    cmplw r30, r0
    blt lbl_fn_800A091C_00000924
    li r3, 0x0
lbl_fn_800A091C_00000958:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800A09D0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r24, r3
    mr r25, r5
    li r28, 0x0
    li r27, 0x0
    li r31, -0x1
    lwz r4, 0x16c(r4)
    lwz r29, 0x44(r4)
    lwz r30, 0x4c(r4)
    b lbl_fn_800A09D0_000009F0
lbl_fn_800A09D0_000009A8:
    lwz r0, 0x8(r25)
    lwz r26, 0x0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_800A09D0_000009E0
    lwz r4, 0x4(r30)
    mr r3, r25
    mr r5, r28
    bl fn_800A05AC
    slwi r0, r26, 1
    cmpwi r3, -0x1
    sthx r3, r24, r0
    beq lbl_fn_800A09D0_000009E8
    mr r28, r3
    b lbl_fn_800A09D0_000009E8
lbl_fn_800A09D0_000009E0:
    slwi r0, r26, 1
    sthx r31, r24, r0
lbl_fn_800A09D0_000009E8:
    addi r30, r30, 0x8
    addi r27, r27, 0x1
lbl_fn_800A09D0_000009F0:
    cmpw r27, r29
    blt lbl_fn_800A09D0_000009A8
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800A0A68(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r25, 0x24(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    lwz r0, 0x0(r3)
    lwz r3, 0x4(r3)
    or. r0, r3, r0
    beq lbl_fn_800A0A68_00000C9C
    lbz r0, lbl_8087EF50
    extsb. r0, r0
    bne lbl_fn_800A0A68_00000A8C
    lis r3, lbl_807C73C8@ha
    lis r4, fn_800A0D90@ha
    addi r3, r3, lbl_807C73C8@l
    li r7, 0x0
    addi r6, r3, 0x4
    lis r5, lbl_807C73B8@ha
    addi r0, r3, 0x14
    stw r7, 0x0(r3)
    addi r4, r4, fn_800A0D90@l
    addi r5, r5, lbl_807C73B8@l
    stw r7, 0x4(r3)
    stw r6, 0xc(r3)
    stw r7, 0x10(r3)
    stw r7, 0x14(r3)
    stw r0, 0x1c(r3)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EF50
lbl_fn_800A0A68_00000A8C:
    lis r31, lbl_807C73C8@ha
    lwz r5, 0x0(r26)
    addi r31, r31, lbl_807C73C8@l
    lwz r6, 0x4(r26)
    lwz r7, 0x14(r31)
    addi r30, r31, 0x14
    b lbl_fn_800A0A68_00000AD4
lbl_fn_800A0A68_00000AA8:
    lwz r4, 0x14(r7)
    lwz r3, 0x10(r7)
    subfc r0, r6, r4
    subfe r0, r5, r3
    subfe r0, r4, r4
    neg. r0, r0
    bne lbl_fn_800A0A68_00000AD0
    mr r30, r7
    lwz r7, 0x0(r7)
    b lbl_fn_800A0A68_00000AD4
lbl_fn_800A0A68_00000AD0:
    lwz r7, 0x4(r7)
lbl_fn_800A0A68_00000AD4:
    cmpwi r7, 0x0
    bne lbl_fn_800A0A68_00000AA8
    addi r0, r31, 0x14
    cmplw r30, r0
    beq lbl_fn_800A0A68_00000B04
    lwz r0, 0x14(r30)
    lwz r3, 0x10(r30)
    subfc r0, r0, r6
    subfe r0, r3, r5
    subfe r0, r6, r6
    neg. r0, r0
    beq lbl_fn_800A0A68_00000B08
lbl_fn_800A0A68_00000B04:
    addi r30, r31, 0x14
lbl_fn_800A0A68_00000B08:
    lwz r3, 0x20(r30)
    subic. r0, r3, 0x1
    stw r0, 0x20(r30)
    bgt lbl_fn_800A0A68_00000C9C
    lwz r6, 0x18(r30)
    addi r29, r31, 0x4
    lwz r7, 0x1c(r30)
    lwz r5, 0x4(r31)
    b lbl_fn_800A0A68_00000B58
lbl_fn_800A0A68_00000B2C:
    lwz r4, 0x14(r5)
    lwz r3, 0x10(r5)
    subfc r0, r7, r4
    subfe r0, r6, r3
    subfe r0, r4, r4
    neg. r0, r0
    bne lbl_fn_800A0A68_00000B54
    mr r29, r5
    lwz r5, 0x0(r5)
    b lbl_fn_800A0A68_00000B58
lbl_fn_800A0A68_00000B54:
    lwz r5, 0x4(r5)
lbl_fn_800A0A68_00000B58:
    cmpwi r5, 0x0
    bne lbl_fn_800A0A68_00000B2C
    addi r0, r31, 0x4
    cmplw r29, r0
    beq lbl_fn_800A0A68_00000B88
    lwz r0, 0x14(r29)
    lwz r3, 0x10(r29)
    subfc r0, r0, r7
    subfe r0, r3, r6
    subfe r0, r7, r7
    neg. r0, r0
    beq lbl_fn_800A0A68_00000B8C
lbl_fn_800A0A68_00000B88:
    addi r29, r31, 0x4
lbl_fn_800A0A68_00000B8C:
    lwz r3, 0x1c(r29)
    subic. r0, r3, 0x1
    stw r0, 0x1c(r29)
    bgt lbl_fn_800A0A68_00000C20
    lwz r3, 0x18(r29)
    bl fn_80084C24
    lwz r0, 0xc(r31)
    mr r25, r29
    cmplw r29, r0
    bne lbl_fn_800A0A68_00000C00
    lwz r3, 0x4(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800A0A68_00000BE4
    b lbl_fn_800A0A68_00000BC8
lbl_fn_800A0A68_00000BC4:
    mr r3, r0
lbl_fn_800A0A68_00000BC8:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800A0A68_00000BC4
    mr r29, r3
    b lbl_fn_800A0A68_00000BFC
    b lbl_fn_800A0A68_00000BE4
lbl_fn_800A0A68_00000BE0:
    mr r29, r3
lbl_fn_800A0A68_00000BE4:
    lwz r0, 0x8(r29)
    clrrwi r3, r0, 1
    lwz r0, 0x0(r3)
    cmplw r29, r0
    bne lbl_fn_800A0A68_00000BE0
    mr r29, r3
lbl_fn_800A0A68_00000BFC:
    stw r29, 0xc(r31)
lbl_fn_800A0A68_00000C00:
    lwz r4, 0x4(r31)
    mr r3, r25
    bl fn_800A1F84
    mr r3, r25
    bl dtor_80084684
    lwz r3, 0x0(r31)
    subi r0, r3, 0x1
    stw r0, 0x0(r31)
lbl_fn_800A0A68_00000C20:
    lwz r0, 0x1c(r31)
    mr r25, r30
    cmplw r30, r0
    bne lbl_fn_800A0A68_00000C7C
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800A0A68_00000C60
    b lbl_fn_800A0A68_00000C44
lbl_fn_800A0A68_00000C40:
    mr r3, r0
lbl_fn_800A0A68_00000C44:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800A0A68_00000C40
    mr r30, r3
    b lbl_fn_800A0A68_00000C78
    b lbl_fn_800A0A68_00000C60
lbl_fn_800A0A68_00000C5C:
    mr r30, r3
lbl_fn_800A0A68_00000C60:
    lwz r0, 0x8(r30)
    clrrwi r3, r0, 1
    lwz r0, 0x0(r3)
    cmplw r30, r0
    bne lbl_fn_800A0A68_00000C5C
    mr r30, r3
lbl_fn_800A0A68_00000C78:
    stw r30, 0x1c(r31)
lbl_fn_800A0A68_00000C7C:
    lwz r4, 0x14(r31)
    mr r3, r25
    bl fn_800A1F84
    mr r3, r25
    bl dtor_80084684
    lwz r3, 0x10(r31)
    subi r0, r3, 0x1
    stw r0, 0x10(r31)
lbl_fn_800A0A68_00000C9C:
    lbz r0, lbl_8087EF50
    extsb. r0, r0
    bne lbl_fn_800A0A68_00000CF0
    lis r3, lbl_807C73C8@ha
    lis r4, fn_800A0D90@ha
    addi r3, r3, lbl_807C73C8@l
    li r7, 0x0
    addi r6, r3, 0x4
    lis r5, lbl_807C73B8@ha
    addi r0, r3, 0x14
    stw r7, 0x0(r3)
    addi r4, r4, fn_800A0D90@l
    addi r5, r5, lbl_807C73B8@l
    stw r7, 0x4(r3)
    stw r6, 0xc(r3)
    stw r7, 0x10(r3)
    stw r7, 0x14(r3)
    stw r0, 0x1c(r3)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EF50
lbl_fn_800A0A68_00000CF0:
    lis r4, lbl_807C73C8@ha
    mr r5, r27
    mr r6, r28
    addi r3, r1, 0x8
    addi r4, r4, lbl_807C73C8@l
    bl fn_800A130C
    lwz r0, 0x8(r1)
    stw r0, 0x8(r26)
    lwz r0, 0x10(r1)
    lwz r3, 0x14(r1)
    stw r3, 0x4(r26)
    stw r0, 0x0(r26)
    lmw r25, 0x24(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800A0D90(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r3
    mr r27, r4
    beq lbl_fn_800A0D90_00000FEC
    addic. r31, r3, 0x10
    beq lbl_fn_800A0D90_00000E98
    beq lbl_fn_800A0D90_00000E98
    beq lbl_fn_800A0D90_00000E98
    beq lbl_fn_800A0D90_00000E98
    beq lbl_fn_800A0D90_00000E98
    lwz r30, 0x4(r31)
    cmpwi r30, 0x0
    beq lbl_fn_800A0D90_00000E98
    lwz r29, 0x0(r30)
    cmpwi r29, 0x0
    beq lbl_fn_800A0D90_00000E04
    lwz r28, 0x0(r29)
    cmpwi r28, 0x0
    beq lbl_fn_800A0D90_00000DC0
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800A0D90_00000DA4
    mr r3, r31
    bl fn_800A1B84
lbl_fn_800A0D90_00000DA4:
    lwz r4, 0x4(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800A0D90_00000DB8
    mr r3, r31
    bl fn_800A1B84
lbl_fn_800A0D90_00000DB8:
    mr r3, r28
    bl dtor_80084684
lbl_fn_800A0D90_00000DC0:
    lwz r28, 0x4(r29)
    cmpwi r28, 0x0
    beq lbl_fn_800A0D90_00000DFC
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800A0D90_00000DE0
    mr r3, r31
    bl fn_800A1B84
lbl_fn_800A0D90_00000DE0:
    lwz r4, 0x4(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800A0D90_00000DF4
    mr r3, r31
    bl fn_800A1B84
lbl_fn_800A0D90_00000DF4:
    mr r3, r28
    bl dtor_80084684
lbl_fn_800A0D90_00000DFC:
    mr r3, r29
    bl dtor_80084684
lbl_fn_800A0D90_00000E04:
    lwz r28, 0x4(r30)
    cmpwi r28, 0x0
    beq lbl_fn_800A0D90_00000E90
    lwz r29, 0x0(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800A0D90_00000E4C
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_800A0D90_00000E30
    mr r3, r31
    bl fn_800A1B84
lbl_fn_800A0D90_00000E30:
    lwz r4, 0x4(r29)
    cmpwi r4, 0x0
    beq lbl_fn_800A0D90_00000E44
    mr r3, r31
    bl fn_800A1B84
lbl_fn_800A0D90_00000E44:
    mr r3, r29
    bl dtor_80084684
lbl_fn_800A0D90_00000E4C:
    lwz r29, 0x4(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800A0D90_00000E88
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_800A0D90_00000E6C
    mr r3, r31
    bl fn_800A1B84
lbl_fn_800A0D90_00000E6C:
    lwz r4, 0x4(r29)
    cmpwi r4, 0x0
    beq lbl_fn_800A0D90_00000E80
    mr r3, r31
    bl fn_800A1B84
lbl_fn_800A0D90_00000E80:
    mr r3, r29
    bl dtor_80084684
lbl_fn_800A0D90_00000E88:
    mr r3, r28
    bl dtor_80084684
lbl_fn_800A0D90_00000E90:
    mr r3, r30
    bl dtor_80084684
lbl_fn_800A0D90_00000E98:
    cmpwi r26, 0x0
    beq lbl_fn_800A0D90_00000FDC
    beq lbl_fn_800A0D90_00000FDC
    beq lbl_fn_800A0D90_00000FDC
    beq lbl_fn_800A0D90_00000FDC
    beq lbl_fn_800A0D90_00000FDC
    lwz r28, 0x4(r26)
    cmpwi r28, 0x0
    beq lbl_fn_800A0D90_00000FDC
    lwz r29, 0x0(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800A0D90_00000F48
    lwz r30, 0x0(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800A0D90_00000F04
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_800A0D90_00000EE8
    mr r3, r26
    bl fn_800A1E24
lbl_fn_800A0D90_00000EE8:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_800A0D90_00000EFC
    mr r3, r26
    bl fn_800A1E24
lbl_fn_800A0D90_00000EFC:
    mr r3, r30
    bl dtor_80084684
lbl_fn_800A0D90_00000F04:
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800A0D90_00000F40
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_800A0D90_00000F24
    mr r3, r26
    bl fn_800A1E24
lbl_fn_800A0D90_00000F24:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_800A0D90_00000F38
    mr r3, r26
    bl fn_800A1E24
lbl_fn_800A0D90_00000F38:
    mr r3, r30
    bl dtor_80084684
lbl_fn_800A0D90_00000F40:
    mr r3, r29
    bl dtor_80084684
lbl_fn_800A0D90_00000F48:
    lwz r29, 0x4(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800A0D90_00000FD4
    lwz r30, 0x0(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800A0D90_00000F90
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_800A0D90_00000F74
    mr r3, r26
    bl fn_800A1E24
lbl_fn_800A0D90_00000F74:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_800A0D90_00000F88
    mr r3, r26
    bl fn_800A1E24
lbl_fn_800A0D90_00000F88:
    mr r3, r30
    bl dtor_80084684
lbl_fn_800A0D90_00000F90:
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800A0D90_00000FCC
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_800A0D90_00000FB0
    mr r3, r26
    bl fn_800A1E24
lbl_fn_800A0D90_00000FB0:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_800A0D90_00000FC4
    mr r3, r26
    bl fn_800A1E24
lbl_fn_800A0D90_00000FC4:
    mr r3, r30
    bl dtor_80084684
lbl_fn_800A0D90_00000FCC:
    mr r3, r29
    bl dtor_80084684
lbl_fn_800A0D90_00000FD4:
    mr r3, r28
    bl dtor_80084684
lbl_fn_800A0D90_00000FDC:
    cmpwi r27, 0x0
    ble lbl_fn_800A0D90_00000FEC
    mr r3, r26
    bl dtor_80084684
lbl_fn_800A0D90_00000FEC:
    mr r3, r26
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800A1060(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r28, r3
    lwz r0, 0x0(r3)
    lwz r3, 0x4(r3)
    or. r0, r3, r0
    beq lbl_fn_800A1060_0000128C
    lbz r0, lbl_8087EF50
    extsb. r0, r0
    bne lbl_fn_800A1060_0000107C
    lis r3, lbl_807C73C8@ha
    lis r4, fn_800A0D90@ha
    addi r3, r3, lbl_807C73C8@l
    li r7, 0x0
    addi r6, r3, 0x4
    lis r5, lbl_807C73B8@ha
    addi r0, r3, 0x14
    stw r7, 0x0(r3)
    addi r4, r4, fn_800A0D90@l
    addi r5, r5, lbl_807C73B8@l
    stw r7, 0x4(r3)
    stw r6, 0xc(r3)
    stw r7, 0x10(r3)
    stw r7, 0x14(r3)
    stw r0, 0x1c(r3)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EF50
lbl_fn_800A1060_0000107C:
    lis r31, lbl_807C73C8@ha
    lwz r5, 0x0(r28)
    addi r31, r31, lbl_807C73C8@l
    lwz r6, 0x4(r28)
    lwz r7, 0x14(r31)
    addi r30, r31, 0x14
    b lbl_fn_800A1060_000010C4
lbl_fn_800A1060_00001098:
    lwz r4, 0x14(r7)
    lwz r3, 0x10(r7)
    subfc r0, r6, r4
    subfe r0, r5, r3
    subfe r0, r4, r4
    neg. r0, r0
    bne lbl_fn_800A1060_000010C0
    mr r30, r7
    lwz r7, 0x0(r7)
    b lbl_fn_800A1060_000010C4
lbl_fn_800A1060_000010C0:
    lwz r7, 0x4(r7)
lbl_fn_800A1060_000010C4:
    cmpwi r7, 0x0
    bne lbl_fn_800A1060_00001098
    addi r0, r31, 0x14
    cmplw r30, r0
    beq lbl_fn_800A1060_000010F4
    lwz r0, 0x14(r30)
    lwz r3, 0x10(r30)
    subfc r0, r0, r6
    subfe r0, r3, r5
    subfe r0, r6, r6
    neg. r0, r0
    beq lbl_fn_800A1060_000010F8
lbl_fn_800A1060_000010F4:
    addi r30, r31, 0x14
lbl_fn_800A1060_000010F8:
    lwz r3, 0x20(r30)
    subic. r0, r3, 0x1
    stw r0, 0x20(r30)
    bgt lbl_fn_800A1060_0000128C
    lwz r6, 0x18(r30)
    addi r29, r31, 0x4
    lwz r7, 0x1c(r30)
    lwz r5, 0x4(r31)
    b lbl_fn_800A1060_00001148
lbl_fn_800A1060_0000111C:
    lwz r4, 0x14(r5)
    lwz r3, 0x10(r5)
    subfc r0, r7, r4
    subfe r0, r6, r3
    subfe r0, r4, r4
    neg. r0, r0
    bne lbl_fn_800A1060_00001144
    mr r29, r5
    lwz r5, 0x0(r5)
    b lbl_fn_800A1060_00001148
lbl_fn_800A1060_00001144:
    lwz r5, 0x4(r5)
lbl_fn_800A1060_00001148:
    cmpwi r5, 0x0
    bne lbl_fn_800A1060_0000111C
    addi r0, r31, 0x4
    cmplw r29, r0
    beq lbl_fn_800A1060_00001178
    lwz r0, 0x14(r29)
    lwz r3, 0x10(r29)
    subfc r0, r0, r7
    subfe r0, r3, r6
    subfe r0, r7, r7
    neg. r0, r0
    beq lbl_fn_800A1060_0000117C
lbl_fn_800A1060_00001178:
    addi r29, r31, 0x4
lbl_fn_800A1060_0000117C:
    lwz r3, 0x1c(r29)
    subic. r0, r3, 0x1
    stw r0, 0x1c(r29)
    bgt lbl_fn_800A1060_00001210
    lwz r3, 0x18(r29)
    bl fn_80084C24
    lwz r0, 0xc(r31)
    mr r27, r29
    cmplw r29, r0
    bne lbl_fn_800A1060_000011F0
    lwz r3, 0x4(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800A1060_000011D4
    b lbl_fn_800A1060_000011B8
lbl_fn_800A1060_000011B4:
    mr r3, r0
lbl_fn_800A1060_000011B8:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800A1060_000011B4
    mr r29, r3
    b lbl_fn_800A1060_000011EC
    b lbl_fn_800A1060_000011D4
lbl_fn_800A1060_000011D0:
    mr r29, r3
lbl_fn_800A1060_000011D4:
    lwz r0, 0x8(r29)
    clrrwi r3, r0, 1
    lwz r0, 0x0(r3)
    cmplw r29, r0
    bne lbl_fn_800A1060_000011D0
    mr r29, r3
lbl_fn_800A1060_000011EC:
    stw r29, 0xc(r31)
lbl_fn_800A1060_000011F0:
    lwz r4, 0x4(r31)
    mr r3, r27
    bl fn_800A1F84
    mr r3, r27
    bl dtor_80084684
    lwz r3, 0x0(r31)
    subi r0, r3, 0x1
    stw r0, 0x0(r31)
lbl_fn_800A1060_00001210:
    lwz r0, 0x1c(r31)
    mr r27, r30
    cmplw r30, r0
    bne lbl_fn_800A1060_0000126C
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800A1060_00001250
    b lbl_fn_800A1060_00001234
lbl_fn_800A1060_00001230:
    mr r3, r0
lbl_fn_800A1060_00001234:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800A1060_00001230
    mr r30, r3
    b lbl_fn_800A1060_00001268
    b lbl_fn_800A1060_00001250
lbl_fn_800A1060_0000124C:
    mr r30, r3
lbl_fn_800A1060_00001250:
    lwz r0, 0x8(r30)
    clrrwi r3, r0, 1
    lwz r0, 0x0(r3)
    cmplw r30, r0
    bne lbl_fn_800A1060_0000124C
    mr r30, r3
lbl_fn_800A1060_00001268:
    stw r30, 0x1c(r31)
lbl_fn_800A1060_0000126C:
    lwz r4, 0x14(r31)
    mr r3, r27
    bl fn_800A1F84
    mr r3, r27
    bl dtor_80084684
    lwz r3, 0x10(r31)
    subi r0, r3, 0x1
    stw r0, 0x10(r31)
lbl_fn_800A1060_0000128C:
    li r0, 0x0
    stw r0, 0x4(r28)
    stw r0, 0x0(r28)
    stw r0, 0x8(r28)
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800A130C(void)
{
    nofralloc
    stwu r1, -0x2c0(r1)
    mflr r0
    stw r0, 0x2c4(r1)
    stmw r27, 0x2ac(r1)
    mr r31, r5
    mr r28, r3
    mr r29, r4
    mr r30, r6
    mr r3, r31
    bl fn_8008B138
    mr r27, r3
    mr r3, r30
    bl fn_804768B4
    stw r27, 0x44(r1)
    addi r7, r29, 0x14
    stw r3, 0x40(r1)
    lwz r6, 0x14(r29)
    b lbl_fn_800A130C_00001324
lbl_fn_800A130C_000012F8:
    lwz r5, 0x14(r6)
    lwz r4, 0x10(r6)
    subfc r0, r27, r5
    subfe r0, r3, r4
    subfe r0, r5, r5
    neg. r0, r0
    bne lbl_fn_800A130C_00001320
    mr r7, r6
    lwz r6, 0x0(r6)
    b lbl_fn_800A130C_00001324
lbl_fn_800A130C_00001320:
    lwz r6, 0x4(r6)
lbl_fn_800A130C_00001324:
    cmpwi r6, 0x0
    bne lbl_fn_800A130C_000012F8
    addi r0, r29, 0x14
    cmplw r7, r0
    beq lbl_fn_800A130C_00001354
    lwz r0, 0x14(r7)
    lwz r4, 0x10(r7)
    subfc r0, r0, r27
    subfe r0, r4, r3
    subfe r0, r27, r27
    neg. r0, r0
    beq lbl_fn_800A130C_00001358
lbl_fn_800A130C_00001354:
    addi r7, r29, 0x14
lbl_fn_800A130C_00001358:
    addi r0, r29, 0x14
    cmplw r7, r0
    bne lbl_fn_800A130C_00001818
    lwz r6, 0x16c(r31)
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0xa8
    lwz r27, 0x44(r6)
    bl fn_800A09D0
    slwi r31, r27, 1
    addi r3, r1, 0xa8
    mr r4, r31
    bl fn_800DC500
    cmpwi cr1, r31, 0x0
    li r0, 0x1505
    li r4, 0x0
    ble cr1, lbl_fn_800A130C_000014C4
    cmpwi r31, 0x8
    subi r7, r31, 0x8
    ble lbl_fn_800A130C_00001490
    li r6, 0x0
    blt cr1, lbl_fn_800A130C_000013C4
    lis r5, 0x8000
    subi r5, r5, 0x2
    cmpw r31, r5
    bgt lbl_fn_800A130C_000013C4
    li r6, 0x1
lbl_fn_800A130C_000013C4:
    cmpwi r6, 0x0
    beq lbl_fn_800A130C_00001490
    addi r6, r7, 0x7
    addi r5, r1, 0xa8
    srwi r6, r6, 3
    mtctr r6
    cmpwi r7, 0x0
    ble lbl_fn_800A130C_00001490
lbl_fn_800A130C_000013E4:
    lbz r8, 0x0(r5)
    slwi r7, r0, 5
    lbz r6, 0x1(r5)
    addi r4, r4, 0x8
    extsb r8, r8
    lbz r11, 0x2(r5)
    add r0, r0, r8
    extsb r12, r6
    add r0, r7, r0
    lbz r10, 0x3(r5)
    slwi r30, r0, 5
    lbz r9, 0x4(r5)
    add r0, r0, r30
    lbz r8, 0x5(r5)
    add r0, r12, r0
    lbz r7, 0x6(r5)
    slwi r12, r0, 5
    lbz r6, 0x7(r5)
    extsb r11, r11
    extsb r10, r10
    add r0, r0, r12
    extsb r9, r9
    add r0, r11, r0
    extsb r8, r8
    slwi r11, r0, 5
    extsb r7, r7
    add r0, r0, r11
    extsb r6, r6
    add r0, r10, r0
    addi r5, r5, 0x8
    slwi r10, r0, 5
    add r0, r0, r10
    add r0, r9, r0
    slwi r9, r0, 5
    add r0, r0, r9
    add r0, r8, r0
    slwi r8, r0, 5
    add r0, r0, r8
    add r0, r7, r0
    slwi r7, r0, 5
    add r0, r0, r7
    add r0, r6, r0
    bdnz lbl_fn_800A130C_000013E4
lbl_fn_800A130C_00001490:
    addi r6, r1, 0xa8
    subf r5, r4, r31
    add r6, r6, r4
    mtctr r5
    cmpw r4, r31
    bge lbl_fn_800A130C_000014C4
lbl_fn_800A130C_000014A8:
    lbz r5, 0x0(r6)
    slwi r4, r0, 5
    addi r6, r6, 0x1
    extsb r5, r5
    add r0, r0, r5
    add r0, r4, r0
    bdnz lbl_fn_800A130C_000014A8
lbl_fn_800A130C_000014C4:
    clrlwi r6, r0, 1
    stw r3, 0x3c(r1)
    addi r8, r29, 0x4
    stw r6, 0x38(r1)
    lwz r7, 0x4(r29)
    b lbl_fn_800A130C_00001508
lbl_fn_800A130C_000014DC:
    lwz r5, 0x14(r7)
    lwz r4, 0x10(r7)
    subfc r0, r3, r5
    subfe r0, r6, r4
    subfe r0, r5, r5
    neg. r0, r0
    bne lbl_fn_800A130C_00001504
    mr r8, r7
    lwz r7, 0x0(r7)
    b lbl_fn_800A130C_00001508
lbl_fn_800A130C_00001504:
    lwz r7, 0x4(r7)
lbl_fn_800A130C_00001508:
    cmpwi r7, 0x0
    bne lbl_fn_800A130C_000014DC
    addi r0, r29, 0x4
    cmplw r8, r0
    beq lbl_fn_800A130C_00001538
    lwz r0, 0x14(r8)
    lwz r4, 0x10(r8)
    subfc r0, r0, r3
    subfe r0, r4, r6
    subfe r0, r3, r3
    neg. r0, r0
    beq lbl_fn_800A130C_0000153C
lbl_fn_800A130C_00001538:
    addi r8, r29, 0x4
lbl_fn_800A130C_0000153C:
    addi r0, r29, 0x4
    cmplw r8, r0
    bne lbl_fn_800A130C_000016CC
    lis r5, lbl_80732768@ha
    mr r3, r31
    addi r5, r5, lbl_80732768@l
    li r4, 0x6
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    mr r30, r3
    mr r5, r31
    addi r4, r1, 0xa8
    bl memcpy
    mr r3, r29
    addi r4, r1, 0x38
    addi r5, r1, 0x24
    addi r6, r1, 0x10
    addi r7, r1, 0x11
    bl fn_800A1934
    lwz r5, 0x24(r1)
    mr r4, r3
    cmpwi r5, 0x0
    beq lbl_fn_800A130C_000015C4
    lwz r0, 0x3c(r1)
    addi r8, r5, 0x10
    lwz r6, 0x14(r5)
    lwz r5, 0x10(r5)
    lwz r3, 0x38(r1)
    subfc r0, r0, r6
    subfe r0, r3, r5
    subfe r0, r6, r6
    neg. r0, r0
    beq lbl_fn_800A130C_000015F8
lbl_fn_800A130C_000015C4:
    lwz r6, 0x38(r1)
    li r0, 0x0
    lwz r5, 0x3c(r1)
    mr r3, r29
    stw r5, 0x6c(r1)
    addi r7, r1, 0x68
    lbz r5, 0x10(r1)
    stw r6, 0x68(r1)
    lbz r6, 0x11(r1)
    stw r0, 0x70(r1)
    stw r0, 0x74(r1)
    bl fn_800A1CE4
    addi r8, r3, 0x10
lbl_fn_800A130C_000015F8:
    stw r30, 0x8(r8)
    li r0, 0x1
    addi r3, r29, 0x10
    addi r4, r1, 0x40
    stw r30, 0x28(r1)
    addi r5, r1, 0x20
    addi r6, r1, 0xe
    addi r7, r1, 0xf
    stw r0, 0x2c(r1)
    stw r30, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0xc(r8)
    bl fn_800A19B8
    lwz r4, 0x20(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800A130C_00001660
    lwz r0, 0x44(r1)
    addi r7, r4, 0x10
    lwz r6, 0x14(r4)
    lwz r5, 0x10(r4)
    lwz r4, 0x40(r1)
    subfc r0, r0, r6
    subfe r0, r4, r5
    subfe r0, r6, r6
    neg. r0, r0
    beq lbl_fn_800A130C_0000169C
lbl_fn_800A130C_00001660:
    lwz r6, 0x40(r1)
    li r0, 0x0
    lwz r5, 0x44(r1)
    mr r4, r3
    stw r5, 0x94(r1)
    addi r3, r29, 0x10
    lbz r5, 0xe(r1)
    addi r7, r1, 0x90
    stw r6, 0x90(r1)
    lbz r6, 0xf(r1)
    stw r0, 0x9c(r1)
    stw r0, 0x98(r1)
    stw r0, 0xa0(r1)
    bl fn_800A1A3C
    addi r7, r3, 0x10
lbl_fn_800A130C_0000169C:
    lwz r3, 0x38(r1)
    li r0, 0x1
    lwz r4, 0x3c(r1)
    stw r4, 0xc(r7)
    stw r3, 0x8(r7)
    stw r0, 0x10(r7)
    lwz r0, 0x40(r1)
    lwz r3, 0x44(r1)
    stw r3, 0xc(r28)
    stw r30, 0x0(r28)
    stw r0, 0x8(r28)
    b lbl_fn_800A130C_000018C4
lbl_fn_800A130C_000016CC:
    addi r3, r29, 0x10
    addi r4, r1, 0x40
    addi r5, r1, 0x1c
    addi r6, r1, 0xc
    addi r7, r1, 0xd
    bl fn_800A19B8
    lwz r4, 0x1c(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800A130C_00001718
    lwz r0, 0x44(r1)
    addi r8, r4, 0x10
    lwz r6, 0x14(r4)
    lwz r5, 0x10(r4)
    lwz r4, 0x40(r1)
    subfc r0, r0, r6
    subfe r0, r4, r5
    subfe r0, r6, r6
    neg. r0, r0
    beq lbl_fn_800A130C_00001754
lbl_fn_800A130C_00001718:
    lwz r6, 0x40(r1)
    li r0, 0x0
    lwz r5, 0x44(r1)
    mr r4, r3
    stw r5, 0x7c(r1)
    addi r3, r29, 0x10
    lbz r5, 0xc(r1)
    addi r7, r1, 0x78
    stw r6, 0x78(r1)
    lbz r6, 0xd(r1)
    stw r0, 0x84(r1)
    stw r0, 0x80(r1)
    stw r0, 0x88(r1)
    bl fn_800A1A3C
    addi r8, r3, 0x10
lbl_fn_800A130C_00001754:
    lwz r7, 0x38(r1)
    li r0, 0x1
    lwz r4, 0x3c(r1)
    mr r3, r29
    stw r4, 0xc(r8)
    addi r4, r1, 0x38
    addi r5, r1, 0x18
    addi r6, r1, 0xa
    stw r7, 0x8(r8)
    addi r7, r1, 0xb
    stw r0, 0x10(r8)
    bl fn_800A1934
    lwz r5, 0x18(r1)
    mr r4, r3
    cmpwi r5, 0x0
    beq lbl_fn_800A130C_000017BC
    lwz r0, 0x3c(r1)
    addi r7, r5, 0x10
    lwz r6, 0x14(r5)
    lwz r5, 0x10(r5)
    lwz r3, 0x38(r1)
    subfc r0, r0, r6
    subfe r0, r3, r5
    subfe r0, r6, r6
    neg. r0, r0
    beq lbl_fn_800A130C_000017F0
lbl_fn_800A130C_000017BC:
    lwz r6, 0x38(r1)
    li r0, 0x0
    lwz r5, 0x3c(r1)
    mr r3, r29
    stw r5, 0x5c(r1)
    addi r7, r1, 0x58
    lbz r5, 0xa(r1)
    stw r6, 0x58(r1)
    lbz r6, 0xb(r1)
    stw r0, 0x60(r1)
    stw r0, 0x64(r1)
    bl fn_800A1CE4
    addi r7, r3, 0x10
lbl_fn_800A130C_000017F0:
    lwz r3, 0xc(r7)
    addi r0, r3, 0x1
    stw r0, 0xc(r7)
    lwz r3, 0x40(r1)
    lwz r4, 0x44(r1)
    lwz r0, 0x8(r7)
    stw r0, 0x0(r28)
    stw r4, 0xc(r28)
    stw r3, 0x8(r28)
    b lbl_fn_800A130C_000018C4
lbl_fn_800A130C_00001818:
    lwz r4, 0x20(r7)
    addi r27, r7, 0x18
    mr r3, r29
    addi r5, r1, 0x14
    addi r0, r4, 0x1
    stw r0, 0x20(r7)
    mr r4, r27
    addi r6, r1, 0x8
    addi r7, r1, 0x9
    bl fn_800A1934
    lwz r5, 0x14(r1)
    mr r4, r3
    cmpwi r5, 0x0
    beq lbl_fn_800A130C_00001878
    lwz r0, 0x4(r27)
    addi r7, r5, 0x10
    lwz r6, 0x14(r5)
    lwz r5, 0x10(r5)
    lwz r3, 0x0(r27)
    subfc r0, r0, r6
    subfe r0, r3, r5
    subfe r0, r6, r6
    neg. r0, r0
    beq lbl_fn_800A130C_000018AC
lbl_fn_800A130C_00001878:
    lwz r6, 0x0(r27)
    li r0, 0x0
    lwz r5, 0x4(r27)
    mr r3, r29
    stw r5, 0x4c(r1)
    addi r7, r1, 0x48
    lbz r5, 0x8(r1)
    stw r6, 0x48(r1)
    lbz r6, 0x9(r1)
    stw r0, 0x50(r1)
    stw r0, 0x54(r1)
    bl fn_800A1CE4
    addi r7, r3, 0x10
lbl_fn_800A130C_000018AC:
    lwz r3, 0x40(r1)
    lwz r4, 0x44(r1)
    lwz r0, 0x8(r7)
    stw r0, 0x0(r28)
    stw r4, 0xc(r28)
    stw r3, 0x8(r28)
lbl_fn_800A130C_000018C4:
    lmw r27, 0x2ac(r1)
    lwz r0, 0x2c4(r1)
    mtlr r0
    addi r1, r1, 0x2c0
    blr
}
