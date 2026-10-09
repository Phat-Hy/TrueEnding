#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_18(void);
extern void _restgpr_27(void);
extern void _savegpr_18(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8008B130(void);
extern void fn_800970CC(void);
extern void fn_800A03A0(void);
extern void fn_800A03E4(void);
extern void fn_800A0448(void);
extern void fn_800A04A0(void);
extern void fn_800A08D4(void);
extern void fn_800A08E0(void);
extern void fn_800DC288(void);
extern void fn_8015495C(void);
extern void fn_8016EB48(void);
extern void fn_80170F20(void);
extern void fn_802180A8(void);
extern void fn_80373148(void);
extern void fn_803CD958(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC91C(void);
extern void fn_8042AB58(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473F18(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_806827C4(void);
extern void fn_80684600(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80753768[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_80778910[];
extern u8 lbl_8078E640[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087DFB0;
extern u32 lbl_8087DFB4;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F890;
extern u32 lbl_80886704;
extern u32 lbl_80886708;
extern u32 lbl_8088670C;
extern u32 lbl_80886710;
extern u32 lbl_80886714;
extern u32 lbl_80886718;
extern u32 lbl_8088671C;
extern u32 lbl_80886720;

/* Function declarations */
void fn_80428DE8(void);
void fn_8042917C(void);
void fn_8042952C(void);
void fn_8042960C(void);
void fn_80429610(void);
void fn_8042963C(void);
void fn_80429668(void);
void fn_804296DC(void);
void fn_80429868(void);
void fn_80429964(void);
void fn_80429ED0(void);
void fn_80429EEC(void);
void fn_80429F90(void);
void fn_8042A2FC(void);
void fn_8042A300(void);
void fn_8042A360(void);

asm void fn_80428DE8(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cntlzw r0, r3
    srwi. r0, r0, 5
    bne lbl_fn_80428DE8_00000088
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x38
    lfs f0, 0x74(r31)
    lfs f1, 0x114(r4)
    lfs f3, 0x110(r4)
    fsubs f4, f1, f0
    lfs f2, 0x70(r31)
    lfs f1, 0x10c(r4)
    lfs f0, 0x6c(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x3c(r1)
    stfs f0, 0x38(r1)
    stfs f4, 0x40(r1)
    bl fn_805F9920
    lfs f0, lbl_80886704
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_80428DE8_00000088:
    cmpwi r0, 0x0
    beq lbl_fn_80428DE8_000000AC
    lwz r0, 0x108(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80428DE8_00000374
    mr r3, r31
    li r4, 0xb
    bl fn_8042952C
    b lbl_fn_80428DE8_00000374
lbl_fn_80428DE8_000000AC:
    lwz r0, 0x108(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80428DE8_000000D4
    cmpwi r0, 0x1
    beq lbl_fn_80428DE8_0000010C
    cmpwi r0, 0x2
    beq lbl_fn_80428DE8_00000210
    cmpwi r0, 0x3
    beq lbl_fn_80428DE8_0000034C
    b lbl_fn_80428DE8_00000374
lbl_fn_80428DE8_000000D4:
    lwz r3, 0x110(r31)
    lwz r4, 0xf4(r31)
    addi r3, r3, 0x1
    stw r3, 0x110(r31)
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80428DE8_00000374
    lwz r0, 0x24(r4)
    cmpw r3, r0
    ble lbl_fn_80428DE8_00000374
    mr r3, r31
    li r4, 0x1
    bl fn_8042952C
    b lbl_fn_80428DE8_00000374
lbl_fn_80428DE8_0000010C:
    lwz r0, 0xf8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80428DE8_00000128
    mr r3, r31
    li r4, 0x0
    bl fn_8042917C
    stw r3, 0xf8(r31)
lbl_fn_80428DE8_00000128:
    lwz r30, 0xf8(r31)
    cmpwi r30, 0x0
    beq lbl_fn_80428DE8_00000374
    lwz r4, 0x114(r31)
    addi r3, r1, 0x20
    lfs f0, 0x530(r30)
    lfs f1, 0xc(r4)
    lfs f3, 0x8(r4)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r30)
    lfs f1, 0x4(r4)
    lfs f0, 0x528(r30)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x24(r1)
    stfs f0, 0x20(r1)
    stfs f4, 0x28(r1)
    bl fn_805F9920
    lwz r4, 0x118(r31)
    fmr f31, f1
    lfs f0, 0x530(r30)
    addi r3, r1, 0x2c
    lfs f1, 0xc(r4)
    lfs f3, 0x8(r4)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r30)
    lfs f1, 0x4(r4)
    lfs f0, 0x528(r30)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x30(r1)
    stfs f0, 0x2c(r1)
    stfs f4, 0x34(r1)
    bl fn_805F9920
    fcmpo cr0, f31, f1
    cror eq, lt, eq
    mfcr r0
    lwz r3, 0xf8(r31)
    extrwi r0, r0, 1, 2
    lfs f1, 0x7c(r31)
    cntlzw r0, r0
    lfs f2, lbl_80886708
    srwi r4, r0, 5
    stw r4, 0x11c(r31)
    rlwinm r0, r0, 29, 3, 29
    li r5, 0x48
    add r4, r31, r0
    lwz r4, 0x114(r4)
    addi r4, r4, 0x4
    bl fn_80170F20
    lwz r5, 0xf8(r31)
    mr r3, r31
    li r4, 0x2
    lhz r0, 0xd38(r5)
    ori r0, r0, 0x8000
    sth r0, 0xd38(r5)
    bl fn_8042952C
    b lbl_fn_80428DE8_00000374
lbl_fn_80428DE8_00000210:
    lwz r30, 0xf8(r31)
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_80428DE8_00000230
    mr r3, r31
    li r4, 0xb
    bl fn_8042952C
    b lbl_fn_80428DE8_00000374
lbl_fn_80428DE8_00000230:
    lwz r0, 0x105c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80428DE8_00000280
    lwz r0, 0x11c(r31)
    mr r3, r30
    lfs f1, 0x7c(r31)
    li r5, 0x48
    cntlzw r0, r0
    lfs f2, lbl_80886708
    srwi r4, r0, 5
    stw r4, 0x11c(r31)
    rlwinm r0, r0, 29, 3, 29
    add r4, r31, r0
    lwz r4, 0x114(r4)
    addi r4, r4, 0x4
    bl fn_80170F20
    mr r3, r31
    li r4, 0x3
    bl fn_8042952C
    b lbl_fn_80428DE8_00000374
lbl_fn_80428DE8_00000280:
    lwz r4, 0x114(r31)
    addi r3, r1, 0x8
    lfs f0, 0x530(r30)
    lfs f1, 0xc(r4)
    lfs f3, 0x8(r4)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r30)
    lfs f1, 0x4(r4)
    lfs f0, 0x528(r30)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    lwz r4, 0x118(r31)
    fmr f31, f1
    lfs f0, 0x530(r30)
    addi r3, r1, 0x14
    lfs f1, 0xc(r4)
    lfs f3, 0x8(r4)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r30)
    lfs f1, 0x4(r4)
    lfs f0, 0x528(r30)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f4, 0x1c(r1)
    bl fn_805F9920
    fcmpo cr0, f31, f1
    cror eq, lt, eq
    mfcr r3
    lwz r0, 0x11c(r31)
    extrwi r3, r3, 1, 2
    cntlzw r3, r3
    srwi r3, r3, 5
    cmpw r0, r3
    beq lbl_fn_80428DE8_00000374
    slwi r0, r3, 2
    stw r3, 0x11c(r31)
    add r4, r31, r0
    lwz r3, 0xf8(r31)
    lwz r4, 0x114(r4)
    li r5, 0x48
    lfs f1, 0x7c(r31)
    lfs f2, lbl_80886708
    addi r4, r4, 0x4
    bl fn_80170F20
    b lbl_fn_80428DE8_00000374
lbl_fn_80428DE8_0000034C:
    lwz r3, 0xf8(r31)
    lwz r0, 0x105c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80428DE8_00000368
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80428DE8_00000374
lbl_fn_80428DE8_00000368:
    mr r3, r31
    li r4, 0xb
    bl fn_8042952C
lbl_fn_80428DE8_00000374:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8042917C(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0x80
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    stfd f30, 0xc0(r1)
    psq_st f30, 0xc8(r1), 0, 0
    stfd f29, 0xb0(r1)
    psq_st f29, 0xb8(r1), 0, 0
    stfd f28, 0xa0(r1)
    psq_st f28, 0xa8(r1), 0, 0
    stfd f27, 0x90(r1)
    psq_st f27, 0x98(r1), 0, 0
    stfd f26, 0x80(r1)
    psq_st f26, 0x88(r1), 0, 0
    bl _savegpr_27
    lwz r5, lbl_8087F430
    mr r27, r3
    lwz r3, lbl_8087F890
    mr r28, r4
    lfs f31, lbl_80886710
    li r31, 0x0
    lwz r30, 0x10d8(r5)
    lwz r29, 0x48(r3)
    lfs f28, lbl_80886718
    lfs f29, lbl_8088670C
    lfs f30, lbl_8088671C
    lfs f27, lbl_80886714
    b lbl_fn_8042917C_000006F0
lbl_fn_8042917C_0000040C:
    cmplw r29, r28
    beq lbl_fn_8042917C_000006EC
    cmpwi r28, 0x0
    beq lbl_fn_8042917C_0000042C
    lwz r3, 0x50(r29)
    lwz r0, 0x50(r28)
    cmpw r3, r0
    beq lbl_fn_8042917C_000006EC
lbl_fn_8042917C_0000042C:
    lwz r0, 0x100(r27)
    cmplw r29, r0
    beq lbl_fn_8042917C_000006EC
    lwz r0, 0x104(r27)
    cmplw r29, r0
    beq lbl_fn_8042917C_000006EC
    lhz r0, 0xd38(r29)
    extrwi. r0, r0, 1, 16
    bne lbl_fn_8042917C_000006EC
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x2
    bne lbl_fn_8042917C_000006EC
    lwz r4, 0x38(r29)
    li r3, 0x0
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8042917C_00000480
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    beq lbl_fn_8042917C_00000480
    li r3, 0x1
lbl_fn_8042917C_00000480:
    cmpwi r3, 0x0
    beq lbl_fn_8042917C_000006EC
    andis. r3, r4, 0xdead
    addis r0, r3, 0x2153
    cmplwi r0, 0x0
    beq lbl_fn_8042917C_000006EC
    lwz r3, 0xf4(r27)
    li r4, 0x0
    lwz r0, 0x50(r29)
    li r5, 0x4
    lwz r3, 0x30(r3)
    cmpw r3, r0
    bne lbl_fn_8042917C_000004BC
    li r4, 0x1
    b lbl_fn_8042917C_00000578
lbl_fn_8042917C_000004BC:
    cmpwi r3, 0x0
    bne lbl_fn_8042917C_000004D4
    cmplwi r5, 0x4
    bne lbl_fn_8042917C_000004D4
    li r4, 0x1
    b lbl_fn_8042917C_00000578
lbl_fn_8042917C_000004D4:
    lwz r3, 0xf4(r27)
    li r5, 0x5
    lwz r0, 0x50(r29)
    lwz r3, 0x34(r3)
    cmpw r3, r0
    bne lbl_fn_8042917C_000004F4
    li r4, 0x1
    b lbl_fn_8042917C_00000578
lbl_fn_8042917C_000004F4:
    cmpwi r3, 0x0
    bne lbl_fn_8042917C_0000050C
    cmplwi r5, 0x4
    bne lbl_fn_8042917C_0000050C
    li r4, 0x1
    b lbl_fn_8042917C_00000578
lbl_fn_8042917C_0000050C:
    lwz r3, 0xf4(r27)
    li r5, 0x6
    lwz r0, 0x50(r29)
    lwz r3, 0x38(r3)
    cmpw r3, r0
    bne lbl_fn_8042917C_0000052C
    li r4, 0x1
    b lbl_fn_8042917C_00000578
lbl_fn_8042917C_0000052C:
    cmpwi r3, 0x0
    bne lbl_fn_8042917C_00000544
    cmplwi r5, 0x4
    bne lbl_fn_8042917C_00000544
    li r4, 0x1
    b lbl_fn_8042917C_00000578
lbl_fn_8042917C_00000544:
    lwz r3, 0xf4(r27)
    li r5, 0x7
    lwz r0, 0x50(r29)
    lwz r3, 0x3c(r3)
    cmpw r3, r0
    bne lbl_fn_8042917C_00000564
    li r4, 0x1
    b lbl_fn_8042917C_00000578
lbl_fn_8042917C_00000564:
    cmpwi r3, 0x0
    bne lbl_fn_8042917C_00000578
    cmplwi r5, 0x4
    bne lbl_fn_8042917C_00000578
    li r4, 0x1
lbl_fn_8042917C_00000578:
    cmpwi r4, 0x0
    beq lbl_fn_8042917C_000006EC
    lwz r3, 0xc64(r29)
    cmpwi r3, 0x0
    ble lbl_fn_8042917C_000006EC
    subi r0, r3, 0x1
    lwz r3, 0x10c(r27)
    lwz r5, 0xa4(r30)
    slwi r0, r0, 3
    subi r4, r3, 0x1
    add r3, r5, r0
    bl fn_803CD958
    clrlwi. r0, r3, 16
    ble lbl_fn_8042917C_000006EC
    lwz r4, 0x114(r27)
    addi r3, r1, 0x8
    lfs f0, 0x530(r29)
    lfs f1, 0xc(r4)
    lfs f3, 0x8(r4)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r29)
    lfs f1, 0x4(r4)
    lfs f0, 0x528(r29)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    lwz r4, 0x118(r27)
    fmr f26, f1
    lfs f0, 0x530(r29)
    addi r3, r1, 0x14
    lfs f1, 0xc(r4)
    lfs f3, 0x8(r4)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r29)
    lfs f1, 0x4(r4)
    lfs f0, 0x528(r29)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f4, 0x1c(r1)
    bl fn_805F9920
    fcmpo cr0, f26, f1
    cror eq, lt, eq
    mfcr r0
    lfs f4, 0x530(r29)
    extrwi r0, r0, 1, 2
    lfs f2, 0x52c(r29)
    cntlzw r0, r0
    lfs f0, 0x528(r29)
    rlwinm r0, r0, 29, 3, 29
    addi r3, r1, 0x2c
    add r4, r27, r0
    lwz r4, 0x114(r4)
    lfs f5, 0xc(r4)
    lfs f3, 0x8(r4)
    lfs f1, 0x4(r4)
    fsubs f4, f5, f4
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f4, 0x34(r1)
    stfs f0, 0x2c(r1)
    stfs f2, 0x30(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f27
    fmr f26, f1
    bge lbl_fn_8042917C_000006EC
    fcmpo cr0, f1, f31
    ble lbl_fn_8042917C_000006EC
    addi r3, r1, 0x2c
    mr r4, r3
    bl fn_805F98D0
    stfs f28, 0x20(r1)
    addi r3, r1, 0x38
    li r4, 0x79
    stfs f28, 0x24(r1)
    stfs f29, 0x28(r1)
    lfs f1, 0x538(r29)
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x38
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x2c
    addi r4, r1, 0x20
    bl fn_805F9990
    fcmpo cr0, f1, f30
    ble lbl_fn_8042917C_000006EC
    fmr f31, f26
    mr r31, r29
lbl_fn_8042917C_000006EC:
    lwz r29, 0x1424(r29)
lbl_fn_8042917C_000006F0:
    cmpwi r29, 0x0
    bne lbl_fn_8042917C_0000040C
    psq_l f31, 0xd8(r1), 0, 0
    mr r3, r31
    lfd f31, 0xd0(r1)
    psq_l f30, 0xc8(r1), 0, 0
    lfd f30, 0xc0(r1)
    psq_l f29, 0xb8(r1), 0, 0
    lfd f29, 0xb0(r1)
    psq_l f28, 0xa8(r1), 0, 0
    lfd f28, 0xa0(r1)
    psq_l f27, 0x98(r1), 0, 0
    lfd f27, 0x90(r1)
    psq_l f26, 0x88(r1), 0, 0
    lfd f26, 0x80(r1)
    addi r11, r1, 0x80
    bl _restgpr_27
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_8042952C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0xb
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    li r29, 0x0
    mr r26, r3
    stw r4, 0x108(r3)
    stw r29, 0x110(r3)
    bne lbl_fn_8042952C_00000810
    mr r28, r26
    li r27, 0x0
    li r31, 0x2
    li r30, 0x1
lbl_fn_8042952C_0000077C:
    lwz r3, 0xf8(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8042952C_000007E8
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    lwz r3, 0xf8(r28)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8042952C_000007C8
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8042952C_000007C0
    stw r30, 0x564(r3)
    b lbl_fn_8042952C_000007D8
lbl_fn_8042952C_000007C0:
    stw r31, 0x564(r3)
    b lbl_fn_8042952C_000007D8
lbl_fn_8042952C_000007C8:
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
lbl_fn_8042952C_000007D8:
    lwz r3, 0xf8(r28)
    lhz r0, 0xd38(r3)
    rlwinm r0, r0, 0, 17, 15
    sth r0, 0xd38(r3)
lbl_fn_8042952C_000007E8:
    lwz r0, 0xf8(r28)
    addi r27, r27, 0x1
    stw r0, 0x100(r28)
    cmpwi r27, 0x2
    stw r29, 0xf8(r28)
    addi r28, r28, 0x4
    blt lbl_fn_8042952C_0000077C
    mr r3, r26
    li r4, 0x0
    bl fn_8042952C
lbl_fn_8042952C_00000810:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8042960C(void)
{
    nofralloc
    blr
}

asm void fn_80429610(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_80429610_00000838
    li r3, 0x0
    blr
lbl_fn_80429610_00000838:
    lwz r4, 0x0(r4)
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_80429610_0000084C
    stw r4, 0x54(r3)
lbl_fn_80429610_0000084C:
    lwz r3, 0x54(r3)
    blr
}

asm void fn_8042963C(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    li r4, 0x0
    cmpwi r0, 0x2
    bne lbl_fn_8042963C_00000878
    lwz r3, 0xf4(r3)
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8042963C_00000878
    li r4, 0x1
lbl_fn_8042963C_00000878:
    mr r3, r4
    blr
}

asm void fn_80429668(void)
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
    beq lbl_fn_80429668_000008D8
    lis r5, lbl_80753768@ha
    li r3, 0x2b0
    addi r5, r5, lbl_80753768@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80429668_000008DC
    mr r4, r30
    mr r5, r31
    bl fn_804296DC
    b lbl_fn_80429668_000008DC
lbl_fn_80429668_000008D8:
    li r3, 0x0
lbl_fn_80429668_000008DC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804296DC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r5, 0x18(r5)
    lwz r6, 0x1c(r30)
    bl fn_803EC568
    lis r3, lbl_8078E640@ha
    li r31, 0x0
    addi r3, r3, lbl_8078E640@l
    li r0, -0x1
    lis r4, fn_800A03A0@ha
    lis r5, fn_800970CC@ha
    stw r3, 0x0(r29)
    addi r3, r29, 0x104
    addi r4, r4, fn_800A03A0@l
    addi r5, r5, fn_800970CC@l
    stw r30, 0xf4(r29)
    li r6, 0xc
    li r7, 0x7
    stw r31, 0xf8(r29)
    stw r0, 0xfc(r29)
    bl fn_806958E0
    addi r3, r29, 0x240
    bl fn_800A08E0
    lfs f0, lbl_80886720
    addi r3, r29, 0x158
    stw r31, 0x280(r29)
    li r4, 0x0
    li r5, 0x1c
    stw r31, 0x284(r29)
    stw r31, 0x288(r29)
    stw r31, 0x28c(r29)
    stw r31, 0x290(r29)
    stfs f0, 0x294(r29)
    stfs f0, 0x298(r29)
    stfs f0, 0x29c(r29)
    stfs f0, 0x2a0(r29)
    stfs f0, 0x2a4(r29)
    stfs f0, 0x2a8(r29)
    stw r31, 0x54(r29)
    bl memset
    addi r3, r29, 0x174
    li r4, 0x0
    li r5, 0x1c
    bl memset
    addi r3, r29, 0x190
    li r4, 0x0
    li r5, 0x1c
    bl memset
    addi r3, r29, 0x1ac
    li r4, 0x0
    li r5, 0x1c
    bl memset
    addi r3, r29, 0x1c8
    li r4, 0x0
    li r5, 0x1c
    bl memset
    addi r3, r29, 0x1e4
    li r4, 0x0
    li r5, 0x1c
    bl memset
    addi r3, r29, 0x26c
    li r4, 0x0
    li r5, 0x12
    bl memset
    addi r3, r29, 0x200
    li r4, 0x0
    li r5, 0x40
    bl memset
    lwz r30, 0x28c(r29)
    lwz r4, 0x288(r29)
    mulli r3, r30, 0xc
    subf r0, r30, r30
    stw r0, 0x28c(r29)
    add r31, r4, r3
    b lbl_fn_804296DC_00000A58
lbl_fn_804296DC_00000A38:
    subic. r31, r31, 0xc
    beq lbl_fn_804296DC_00000A54
    lwz r0, 0x0(r31)
    srwi. r0, r0, 31
    beq lbl_fn_804296DC_00000A54
    lwz r3, 0x8(r31)
    bl dtor_80084684
lbl_fn_804296DC_00000A54:
    subi r30, r30, 0x1
lbl_fn_804296DC_00000A58:
    cmpwi r30, 0x0
    bne lbl_fn_804296DC_00000A38
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80429868(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    beq lbl_fn_80429868_00000B64
    addic. r31, r3, 0x288
    beq lbl_fn_80429868_00000B04
    beq lbl_fn_80429868_00000B04
    beq lbl_fn_80429868_00000B04
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80429868_00000B04
    lwz r29, 0x4(r31)
    mulli r3, r29, 0xc
    subf r0, r29, r29
    stw r0, 0x4(r31)
    add r30, r4, r3
    b lbl_fn_80429868_00000AF4
lbl_fn_80429868_00000AD4:
    subic. r30, r30, 0xc
    beq lbl_fn_80429868_00000AF0
    lwz r0, 0x0(r30)
    srwi. r0, r0, 31
    beq lbl_fn_80429868_00000AF0
    lwz r3, 0x8(r30)
    bl dtor_80084684
lbl_fn_80429868_00000AF0:
    subi r29, r29, 0x1
lbl_fn_80429868_00000AF4:
    cmpwi r29, 0x0
    bne lbl_fn_80429868_00000AD4
    lwz r3, 0x0(r31)
    bl dtor_80084684
lbl_fn_80429868_00000B04:
    addic. r0, r27, 0x280
    beq lbl_fn_80429868_00000B30
    lwz r3, 0x284(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80429868_00000B24
    beq lbl_fn_80429868_00000B24
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80429868_00000B24:
    li r0, 0x0
    stw r0, 0x284(r27)
    stw r0, 0x280(r27)
lbl_fn_80429868_00000B30:
    lis r4, fn_800970CC@ha
    addi r3, r27, 0x104
    addi r4, r4, fn_800970CC@l
    li r5, 0xc
    li r6, 0x7
    bl fn_806959D8
    mr r3, r27
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r28, 0x0
    ble lbl_fn_80429868_00000B64
    mr r3, r27
    bl dtor_80084684
lbl_fn_80429868_00000B64:
    mr r3, r27
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80429964(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_18
    lwz r0, lbl_8087F430
    mr r31, r3
    li r21, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_80429964_00000BB0
    mr r3, r0
    bl fn_80373148
    mr r21, r3
lbl_fn_80429964_00000BB0:
    mr r3, r31
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_80429964_000010CC
    cmpwi r21, 0x0
    beq lbl_fn_80429964_000010CC
    lwz r0, 0x38(r21)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80429964_000010CC
    lwz r23, 0x70(r21)
    li r22, 0x0
    b lbl_fn_80429964_00000D90
lbl_fn_80429964_00000BE4:
    lwz r0, 0x48(r23)
    cmpwi r0, 0x0
    beq lbl_fn_80429964_00000C04
    cmpwi r0, 0x4
    beq lbl_fn_80429964_00000C7C
    cmpwi r0, 0x5
    beq lbl_fn_80429964_00000CF0
    b lbl_fn_80429964_00000D8C
lbl_fn_80429964_00000C04:
    addi r3, r23, 0x50
    bl fn_8008B130
    lwz r19, 0x28c(r31)
    mr r20, r3
    li r24, 0x0
    li r18, 0x0
    b lbl_fn_80429964_00000C60
lbl_fn_80429964_00000C20:
    lwz r0, 0x288(r31)
    mr r3, r20
    add r4, r0, r18
    lwzx r0, r18, r0
    srwi. r0, r0, 31
    bne lbl_fn_80429964_00000C40
    addi r4, r4, 0x1
    b lbl_fn_80429964_00000C44
lbl_fn_80429964_00000C40:
    lwz r4, 0x8(r4)
lbl_fn_80429964_00000C44:
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_80429964_00000C58
    li r0, 0x1
    b lbl_fn_80429964_00000C6C
lbl_fn_80429964_00000C58:
    addi r18, r18, 0xc
    addi r24, r24, 0x1
lbl_fn_80429964_00000C60:
    cmplw r24, r19
    blt lbl_fn_80429964_00000C20
    li r0, 0x0
lbl_fn_80429964_00000C6C:
    cmpwi r0, 0x0
    beq lbl_fn_80429964_00000D8C
    addi r22, r22, 0x1
    b lbl_fn_80429964_00000D8C
lbl_fn_80429964_00000C7C:
    lwz r19, 0x28c(r31)
    addi r20, r23, 0x5c
    li r24, 0x0
    li r18, 0x0
    b lbl_fn_80429964_00000CD0
lbl_fn_80429964_00000C90:
    lwz r0, 0x288(r31)
    mr r3, r20
    add r4, r0, r18
    lwzx r0, r18, r0
    srwi. r0, r0, 31
    bne lbl_fn_80429964_00000CB0
    addi r4, r4, 0x1
    b lbl_fn_80429964_00000CB4
lbl_fn_80429964_00000CB0:
    lwz r4, 0x8(r4)
lbl_fn_80429964_00000CB4:
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_80429964_00000CC8
    li r0, 0x1
    b lbl_fn_80429964_00000CDC
lbl_fn_80429964_00000CC8:
    addi r18, r18, 0xc
    addi r24, r24, 0x1
lbl_fn_80429964_00000CD0:
    cmplw r24, r19
    blt lbl_fn_80429964_00000C90
    li r0, 0x0
lbl_fn_80429964_00000CDC:
    cmpwi r0, 0x0
    beq lbl_fn_80429964_00000D8C
    lwz r0, 0x344(r23)
    add r22, r22, r0
    b lbl_fn_80429964_00000D8C
lbl_fn_80429964_00000CF0:
    addi r3, r23, 0x58
    bl fn_80473F18
    lwz r19, 0x28c(r31)
    mr r20, r3
    li r24, 0x0
    li r18, 0x0
    b lbl_fn_80429964_00000D4C
lbl_fn_80429964_00000D0C:
    lwz r0, 0x288(r31)
    mr r3, r20
    add r4, r0, r18
    lwzx r0, r18, r0
    srwi. r0, r0, 31
    bne lbl_fn_80429964_00000D2C
    addi r4, r4, 0x1
    b lbl_fn_80429964_00000D30
lbl_fn_80429964_00000D2C:
    lwz r4, 0x8(r4)
lbl_fn_80429964_00000D30:
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_80429964_00000D44
    li r0, 0x1
    b lbl_fn_80429964_00000D58
lbl_fn_80429964_00000D44:
    addi r18, r18, 0xc
    addi r24, r24, 0x1
lbl_fn_80429964_00000D4C:
    cmplw r24, r19
    blt lbl_fn_80429964_00000D0C
    li r0, 0x0
lbl_fn_80429964_00000D58:
    cmpwi r0, 0x0
    beq lbl_fn_80429964_00000D8C
    lwz r3, lbl_8087F4A0
    addi r22, r22, 0x1
    lwz r3, 0x48(r3)
    b lbl_fn_80429964_00000D84
lbl_fn_80429964_00000D70:
    lwz r0, 0x20(r3)
    cmplw r0, r23
    bne lbl_fn_80429964_00000D80
    addi r22, r22, 0x1
lbl_fn_80429964_00000D80:
    lwz r3, 0x5c(r3)
lbl_fn_80429964_00000D84:
    cmpwi r3, 0x0
    bne lbl_fn_80429964_00000D70
lbl_fn_80429964_00000D8C:
    lwz r23, 0x4c(r23)
lbl_fn_80429964_00000D90:
    cmpwi r23, 0x0
    bne lbl_fn_80429964_00000BE4
    lwz r3, 0x284(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80429964_00000DB0
    beq lbl_fn_80429964_00000DB0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80429964_00000DB0:
    cmpwi r22, 0x0
    stw r22, 0x280(r31)
    beq lbl_fn_80429964_00000DF8
    mulli r3, r22, 0x14
    li r4, 0x0
    la r5, lbl_8087DFB4
    la r6, lbl_8087DFB0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80429ED0@ha
    mr r7, r22
    addi r4, r4, fn_80429ED0@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    stw r3, 0x284(r31)
    b lbl_fn_80429964_00000E00
lbl_fn_80429964_00000DF8:
    li r0, 0x0
    stw r0, 0x284(r31)
lbl_fn_80429964_00000E00:
    lis r24, lbl_807C7030@ha
    lwz r20, 0x70(r21)
    addi r25, r1, 0x8
    addi r26, r1, 0x14
    addi r24, r24, lbl_807C7030@l
    li r21, 0x0
    li r30, 0x2
    li r28, 0x1
    li r29, 0x3
    li r27, 0x0
    b lbl_fn_80429964_000010BC
lbl_fn_80429964_00000E2C:
    lwz r0, 0x48(r20)
    cmpwi r0, 0x0
    beq lbl_fn_80429964_00000E4C
    cmpwi r0, 0x4
    beq lbl_fn_80429964_00000EFC
    cmpwi r0, 0x5
    beq lbl_fn_80429964_00000FD0
    b lbl_fn_80429964_000010B8
lbl_fn_80429964_00000E4C:
    addi r3, r20, 0x50
    bl fn_8008B130
    lwz r23, 0x28c(r31)
    mr r19, r3
    li r18, 0x0
    li r22, 0x0
    b lbl_fn_80429964_00000EA8
lbl_fn_80429964_00000E68:
    lwz r0, 0x288(r31)
    mr r3, r19
    add r4, r0, r22
    lwzx r0, r22, r0
    srwi. r0, r0, 31
    bne lbl_fn_80429964_00000E88
    addi r4, r4, 0x1
    b lbl_fn_80429964_00000E8C
lbl_fn_80429964_00000E88:
    lwz r4, 0x8(r4)
lbl_fn_80429964_00000E8C:
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_80429964_00000EA0
    li r0, 0x1
    b lbl_fn_80429964_00000EB4
lbl_fn_80429964_00000EA0:
    addi r22, r22, 0xc
    addi r18, r18, 0x1
lbl_fn_80429964_00000EA8:
    cmplw r18, r23
    blt lbl_fn_80429964_00000E68
    li r0, 0x0
lbl_fn_80429964_00000EB4:
    cmpwi r0, 0x0
    beq lbl_fn_80429964_000010B8
    mulli r0, r21, 0x14
    lwz r3, 0x284(r31)
    addi r4, r20, 0x50
    addi r21, r21, 0x1
    stwux r27, r3, r0
    stw r4, 0x4(r3)
    lfs f0, 0x74(r20)
    lfs f3, 0x64(r20)
    lfs f2, 0x84(r20)
    stfs f3, 0x14(r1)
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x8(r3), 0, 0
    stfs f2, 0x1c(r1)
    stfs f2, 0x10(r3)
    b lbl_fn_80429964_000010B8
lbl_fn_80429964_00000EFC:
    lwz r23, 0x28c(r31)
    addi r18, r20, 0x5c
    li r19, 0x0
    li r22, 0x0
    b lbl_fn_80429964_00000F50
lbl_fn_80429964_00000F10:
    lwz r0, 0x288(r31)
    mr r3, r18
    add r4, r0, r22
    lwzx r0, r22, r0
    srwi. r0, r0, 31
    bne lbl_fn_80429964_00000F30
    addi r4, r4, 0x1
    b lbl_fn_80429964_00000F34
lbl_fn_80429964_00000F30:
    lwz r4, 0x8(r4)
lbl_fn_80429964_00000F34:
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_80429964_00000F48
    li r0, 0x1
    b lbl_fn_80429964_00000F5C
lbl_fn_80429964_00000F48:
    addi r22, r22, 0xc
    addi r19, r19, 0x1
lbl_fn_80429964_00000F50:
    cmplw r19, r23
    blt lbl_fn_80429964_00000F10
    li r0, 0x0
lbl_fn_80429964_00000F5C:
    cmpwi r0, 0x0
    beq lbl_fn_80429964_000010B8
    mulli r3, r21, 0x14
    li r7, 0x0
    li r4, 0x0
    b lbl_fn_80429964_00000FC0
lbl_fn_80429964_00000F74:
    lwz r5, 0x348(r20)
    addi r7, r7, 0x1
    lwz r0, 0x284(r31)
    addi r21, r21, 0x1
    lwzx r5, r5, r4
    addi r4, r4, 0x4
    add r6, r0, r3
    stwx r28, r3, r0
    addi r3, r3, 0x14
    stw r5, 0x4(r6)
    lfs f0, 0x4c(r5)
    lfs f3, 0x3c(r5)
    lfs f2, 0x5c(r5)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r25), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0x10(r6)
lbl_fn_80429964_00000FC0:
    lwz r0, 0x344(r20)
    cmpw r7, r0
    blt lbl_fn_80429964_00000F74
    b lbl_fn_80429964_000010B8
lbl_fn_80429964_00000FD0:
    addi r3, r20, 0x58
    bl fn_80473F18
    lwz r22, 0x28c(r31)
    mr r18, r3
    li r19, 0x0
    li r23, 0x0
    b lbl_fn_80429964_0000102C
lbl_fn_80429964_00000FEC:
    lwz r0, 0x288(r31)
    mr r3, r18
    add r4, r0, r23
    lwzx r0, r23, r0
    srwi. r0, r0, 31
    bne lbl_fn_80429964_0000100C
    addi r4, r4, 0x1
    b lbl_fn_80429964_00001010
lbl_fn_80429964_0000100C:
    lwz r4, 0x8(r4)
lbl_fn_80429964_00001010:
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_80429964_00001024
    li r0, 0x1
    b lbl_fn_80429964_00001038
lbl_fn_80429964_00001024:
    addi r23, r23, 0xc
    addi r19, r19, 0x1
lbl_fn_80429964_0000102C:
    cmplw r19, r22
    blt lbl_fn_80429964_00000FEC
    li r0, 0x0
lbl_fn_80429964_00001038:
    cmpwi r0, 0x0
    beq lbl_fn_80429964_000010B8
    mulli r0, r21, 0x14
    lwz r3, 0x284(r31)
    addi r21, r21, 0x1
    stwx r29, r3, r0
    add r4, r3, r0
    mulli r3, r21, 0x14
    stw r20, 0x4(r4)
    lfs f2, 0x8(r24)
    psq_l f1, 0x0(r24), 0, 0
    psq_st f1, 0x8(r4), 0, 0
    stfs f2, 0x10(r4)
    lwz r4, lbl_8087F4A0
    lwz r5, 0x48(r4)
    b lbl_fn_80429964_000010B0
lbl_fn_80429964_00001078:
    lwz r0, 0x20(r5)
    cmplw r0, r20
    bne lbl_fn_80429964_000010AC
    lwz r0, 0x284(r31)
    addi r21, r21, 0x1
    stwx r30, r3, r0
    add r4, r0, r3
    addi r3, r3, 0x14
    stw r5, 0x4(r4)
    lfs f2, 0x74(r5)
    psq_l f1, 0x6c(r5), 0, 0
    psq_st f1, 0x8(r4), 0, 0
    stfs f2, 0x10(r4)
lbl_fn_80429964_000010AC:
    lwz r5, 0x5c(r5)
lbl_fn_80429964_000010B0:
    cmpwi r5, 0x0
    bne lbl_fn_80429964_00001078
lbl_fn_80429964_000010B8:
    lwz r20, 0x4c(r20)
lbl_fn_80429964_000010BC:
    cmpwi r20, 0x0
    bne lbl_fn_80429964_00000E2C
    li r3, 0x1
    b lbl_fn_80429964_000010D0
lbl_fn_80429964_000010CC:
    li r3, 0x0
lbl_fn_80429964_000010D0:
    addi r11, r1, 0x60
    bl _restgpr_18
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80429ED0(void)
{
    nofralloc
    lfs f0, lbl_80886720
    li r0, 0x0
    stw r0, 0x0(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    blr
}

asm void fn_80429EEC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_80886720
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r0, 0x58(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80429EEC_00001154
    stw r0, 0x8(r1)
    b lbl_fn_80429EEC_00001168
lbl_fn_80429EEC_00001154:
    lwz r3, 0xfc(r3)
    cmpwi r3, 0x0
    blt lbl_fn_80429EEC_00001164
    mr r0, r3
lbl_fn_80429EEC_00001164:
    stw r0, 0x8(r1)
lbl_fn_80429EEC_00001168:
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x8
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80429F90(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r3
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    lwz r4, 0x54(r3)
    lwz r0, 0xf8(r3)
    cmpw r4, r0
    beq lbl_fn_80429F90_0000129C
    cmpwi r4, 0x2
    beq lbl_fn_80429F90_00001210
    cmpwi r4, 0x4
    beq lbl_fn_80429F90_00001218
    cmpwi r4, 0x6
    beq lbl_fn_80429F90_00001220
    cmpwi r4, 0x7
    beq lbl_fn_80429F90_00001228
    cmpwi r4, 0x8
    beq lbl_fn_80429F90_00001230
    cmpwi r4, 0xa
    beq lbl_fn_80429F90_00001238
    cmpwi r4, 0xb
    beq lbl_fn_80429F90_00001240
    b lbl_fn_80429F90_00001248
lbl_fn_80429F90_00001210:
    li r5, 0x0
    b lbl_fn_80429F90_0000124C
lbl_fn_80429F90_00001218:
    li r5, 0x1
    b lbl_fn_80429F90_0000124C
lbl_fn_80429F90_00001220:
    li r5, 0x2
    b lbl_fn_80429F90_0000124C
lbl_fn_80429F90_00001228:
    li r5, 0x3
    b lbl_fn_80429F90_0000124C
lbl_fn_80429F90_00001230:
    li r5, 0x4
    b lbl_fn_80429F90_0000124C
lbl_fn_80429F90_00001238:
    li r5, 0x5
    b lbl_fn_80429F90_0000124C
lbl_fn_80429F90_00001240:
    li r5, 0x6
    b lbl_fn_80429F90_0000124C
lbl_fn_80429F90_00001248:
    li r5, -0x1
lbl_fn_80429F90_0000124C:
    cmpwi r5, 0x0
    blt lbl_fn_80429F90_0000128C
    cmpwi r5, 0x7
    bge lbl_fn_80429F90_0000128C
    slwi r0, r5, 2
    lfs f0, lbl_80886720
    add r4, r3, r0
    lfs f3, 0x1ac(r4)
    fcmpo cr0, f3, f0
    bge lbl_fn_80429F90_0000128C
    mulli r0, r5, 0xc
    add r3, r3, r0
    addi r3, r3, 0x104
    bl fn_800A08D4
    stfs f1, 0x100(r31)
    b lbl_fn_80429F90_00001294
lbl_fn_80429F90_0000128C:
    lfs f0, lbl_80886720
    stfs f0, 0x100(r3)
lbl_fn_80429F90_00001294:
    lwz r0, 0x54(r31)
    stw r0, 0xf8(r31)
lbl_fn_80429F90_0000129C:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80429F90_000012EC
    lfs f0, lbl_80886720
    li r0, 0x0
    li r3, 0x1
    stw r3, 0x48(r1)
    mr r3, r31
    addi r4, r1, 0x48
    stw r0, 0x4c(r1)
    stw r0, 0x50(r1)
    stw r0, 0x54(r1)
    stw r0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_80429F90_000012EC:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x2
    beq lbl_fn_80429F90_0000132C
    cmpwi r0, 0x4
    beq lbl_fn_80429F90_00001334
    cmpwi r0, 0x6
    beq lbl_fn_80429F90_0000133C
    cmpwi r0, 0x7
    beq lbl_fn_80429F90_00001344
    cmpwi r0, 0x8
    beq lbl_fn_80429F90_0000134C
    cmpwi r0, 0xa
    beq lbl_fn_80429F90_00001354
    cmpwi r0, 0xb
    beq lbl_fn_80429F90_0000135C
    b lbl_fn_80429F90_00001364
lbl_fn_80429F90_0000132C:
    li r0, 0x0
    b lbl_fn_80429F90_00001368
lbl_fn_80429F90_00001334:
    li r0, 0x1
    b lbl_fn_80429F90_00001368
lbl_fn_80429F90_0000133C:
    li r0, 0x2
    b lbl_fn_80429F90_00001368
lbl_fn_80429F90_00001344:
    li r0, 0x3
    b lbl_fn_80429F90_00001368
lbl_fn_80429F90_0000134C:
    li r0, 0x4
    b lbl_fn_80429F90_00001368
lbl_fn_80429F90_00001354:
    li r0, 0x5
    b lbl_fn_80429F90_00001368
lbl_fn_80429F90_0000135C:
    li r0, 0x6
    b lbl_fn_80429F90_00001368
lbl_fn_80429F90_00001364:
    li r0, -0x1
lbl_fn_80429F90_00001368:
    cmpwi r0, 0x0
    blt lbl_fn_80429F90_000014E8
    cmpwi r0, 0x7
    bge lbl_fn_80429F90_000014E8
    slwi r30, r0, 2
    lfs f3, 0x100(r31)
    add r3, r31, r30
    lfs f0, 0x1ac(r3)
    mulli r0, r0, 0xc
    fadds f0, f3, f0
    add r3, r31, r0
    addi r29, r3, 0x104
    stfs f0, 0x100(r31)
    mr r3, r29
    bl fn_800A08D4
    lfs f3, 0x100(r31)
    fcmpo cr0, f1, f3
    cror eq, lt, eq
    bne lbl_fn_80429F90_00001434
    add r3, r31, r30
    lwz r0, 0x1c8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80429F90_000013DC
    mr r3, r29
    bl fn_800A08D4
    lfs f0, 0x100(r31)
    fsubs f0, f0, f1
    stfs f0, 0x100(r31)
    b lbl_fn_80429F90_000014B0
lbl_fn_80429F90_000013DC:
    mr r3, r29
    bl fn_800A08D4
    lwz r4, 0x54(r31)
    li r0, 0x0
    stfs f1, 0x100(r31)
    mr r3, r31
    lfs f0, lbl_80886720
    addi r4, r4, 0x1
    stw r4, 0x28(r1)
    addi r4, r1, 0x28
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_80429F90_000014B0
lbl_fn_80429F90_00001434:
    lfs f0, lbl_80886720
    fcmpo cr0, f3, f0
    bge lbl_fn_80429F90_000014B0
    add r3, r31, r30
    lwz r0, 0x1c8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80429F90_00001468
    mr r3, r29
    bl fn_800A08D4
    lfs f0, 0x100(r31)
    fadds f0, f0, f1
    stfs f0, 0x100(r31)
    b lbl_fn_80429F90_000014B0
lbl_fn_80429F90_00001468:
    lwz r4, 0x54(r31)
    li r0, 0x0
    stfs f0, 0x100(r31)
    mr r3, r31
    addi r5, r4, 0x1
    addi r4, r1, 0x8
    stw r5, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_80429F90_000014B0:
    lfs f1, 0x100(r31)
    mr r3, r29
    addi r4, r31, 0x240
    addi r5, r31, 0x200
    addi r6, r31, 0x26c
    bl fn_800A04A0
    lfs f2, 0x24c(r31)
    addi r4, r31, 0x294
    psq_l f1, 0x244(r31), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r4), 0, 0
    addi r5, r31, 0x2a0
    stfs f2, 0x29c(r31)
    bl fn_8042AB58
lbl_fn_80429F90_000014E8:
    psq_l f1, 0x294(r31), 0, 0
    lfs f2, 0x29c(r31)
    psq_st f1, 0x2a0(r31), 0, 0
    stfs f2, 0x2a8(r31)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8042A2FC(void)
{
    nofralloc
    blr
}

asm void fn_8042A300(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    addi r31, r3, 0x104
    stw r30, 0x8(r1)
    li r30, 0x0
lbl_fn_8042A300_00001534:
    mr r3, r31
    bl fn_800A0448
    cmpwi r3, 0x0
    beq lbl_fn_8042A300_0000154C
    li r3, 0x1
    b lbl_fn_8042A300_00001560
lbl_fn_8042A300_0000154C:
    addi r30, r30, 0x1
    addi r31, r31, 0xc
    cmpwi r30, 0x7
    blt lbl_fn_8042A300_00001534
    li r3, 0x0
lbl_fn_8042A300_00001560:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042A360(void)
{
    nofralloc
    stwu r1, -0x6d0(r1)
    mflr r0
    stw r0, 0x6d4(r1)
    stmw r14, 0x688(r1)
    mr r15, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r16, r3
    addi r3, r15, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r24, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x4c(r1)
    mr r14, r3
    addi r3, r1, 0x5c
    stw r24, 0x50(r1)
    li r4, 0x0
    li r5, 0x400
    stw r24, 0x54(r1)
    stw r24, 0x58(r1)
    stw r24, 0x67c(r1)
    bl memset
    addi r3, r1, 0x65c
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x4c(r1)
    mr r4, r14
    mr r5, r16
    addi r3, r1, 0x4c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x4c
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x4c(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r4, __files@ha
    lis r3, lbl_80753768@ha
    mr r19, r15
    addi r20, r15, 0x104
    addi r23, r1, 0x2c
    addi r26, r4, __files@l
    addi r27, r3, lbl_80753768@l
    addi r21, r1, 0x38
    li r16, 0x0
    lis r29, 0xcccd
    lis r25, 0x1555
    lis r28, 0x71c
    lis r30, 0xe39
    lis r14, lbl_80778910@ha
    lis r31, 0x2aab
lbl_fn_8042A360_00001654:
    addi r3, r1, 0x4c
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r17, r3
    cmpwi r0, 0x3b
    beq lbl_fn_8042A360_00001B80
    addi r4, r27, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042A360_00001710
    cmpwi r16, 0x7
    bge lbl_fn_8042A360_00001B80
    addi r3, r1, 0x4c
    bl fn_8005B9CC
    mr r4, r3
    mr r3, r20
    bl fn_800A03E4
    addi r3, r1, 0x4c
    bl fn_8005B9CC
    bl fn_802180A8
    stw r3, 0x174(r19)
    addi r3, r1, 0x4c
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x190(r19)
    addi r3, r1, 0x4c
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x1ac(r19)
    addi r3, r1, 0x4c
    bl fn_8005B9CC
    bl fn_80684600
    subi r0, r3, 0x1
    addi r3, r1, 0x4c
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x1c8(r19)
    bl fn_8005B9CC
    bl fn_80684600
    subi r0, r3, 0x1
    addi r20, r20, 0xc
    cntlzw r0, r0
    addi r16, r16, 0x1
    srwi r0, r0, 5
    stw r0, 0x1e4(r19)
    addi r19, r19, 0x4
    b lbl_fn_8042A360_00001B80
lbl_fn_8042A360_00001710:
    mr r3, r17
    addi r4, r27, 0x8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042A360_0000173C
    addi r3, r1, 0x4c
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r15, 0x200
    bl strcpy
    b lbl_fn_8042A360_00001B80
lbl_fn_8042A360_0000173C:
    mr r3, r17
    addi r4, r27, 0x14
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042A360_00001B5C
    addi r3, r1, 0x4c
    bl fn_8005B9CC
    stw r24, 0x2c(r1)
    mr r17, r3
    stw r24, 0x30(r1)
    stw r24, 0x34(r1)
    bl strlen
    mr r18, r3
    mr r3, r23
    mr r4, r18
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r23
    stb r0, 0x18(r1)
    mr r6, r17
    add r7, r17, r18
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x28c(r15)
    lwz r3, 0x290(r15)
    cmplw r0, r3
    bge lbl_fn_8042A360_00001834
    mulli r0, r0, 0xc
    lwz r3, 0x288(r15)
    add. r17, r3, r0
    beq lbl_fn_8042A360_00001824
    lwz r3, 0x2c(r1)
    srwi. r0, r3, 31
    bne lbl_fn_8042A360_000017E4
    lwz r0, 0x30(r1)
    stw r3, 0x0(r17)
    stw r0, 0x4(r17)
    lwz r0, 0x34(r1)
    stw r0, 0x8(r17)
    b lbl_fn_8042A360_00001824
lbl_fn_8042A360_000017E4:
    stw r24, 0x0(r17)
    mr r3, r17
    stw r24, 0x4(r17)
    stw r24, 0x8(r17)
    lwz r4, 0x30(r1)
    bl fn_80013DC4
    lbz r5, 0xc(r1)
    mr r3, r17
    stb r5, 0x8(r1)
    addi r8, r1, 0x8
    lwz r6, 0x34(r1)
    li r4, 0x0
    lwz r0, 0x30(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8042A360_00001824:
    lwz r3, 0x28c(r15)
    addi r0, r3, 0x1
    stw r0, 0x28c(r15)
    b lbl_fn_8042A360_00001B44
lbl_fn_8042A360_00001834:
    addi r0, r25, 0x5555
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_8042A360_00001858
    addi r4, r27, 0x1c
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8042A360_00001858:
    addi r3, r15, 0x290
    stw r24, 0x38(r1)
    addi r0, r25, 0x5555
    stw r24, 0x3c(r1)
    stw r24, 0x40(r1)
    stw r3, 0x44(r1)
    stw r24, 0x48(r1)
    lwz r3, 0x28c(r15)
    lwz r17, 0x290(r15)
    addi r3, r3, 0x1
    subf r3, r17, r3
    subf r0, r17, r0
    cmplw r3, r0
    stw r3, 0x28(r1)
    ble lbl_fn_8042A360_000018A8
    addi r4, r27, 0x1c
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8042A360_000018A8:
    addi r0, r28, 0x71c7
    cmplw r17, r0
    bge lbl_fn_8042A360_000018F0
    addi r4, r17, 0x1
    subi r5, r29, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x28(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x20
    srwi r4, r4, 2
    stw r4, 0x20(r1)
    cmplw r4, r0
    bge lbl_fn_8042A360_000018E4
    addi r3, r1, 0x28
lbl_fn_8042A360_000018E4:
    lwz r0, 0x0(r3)
    add r17, r17, r0
    b lbl_fn_8042A360_0000192C
lbl_fn_8042A360_000018F0:
    subi r0, r30, 0x1c72
    cmplw r17, r0
    bge lbl_fn_8042A360_00001928
    addi r3, r17, 0x1
    lwz r0, 0x28(r1)
    srwi r3, r3, 1
    stw r3, 0x24(r1)
    cmplw r3, r0
    addi r3, r1, 0x24
    bge lbl_fn_8042A360_0000191C
    addi r3, r1, 0x28
lbl_fn_8042A360_0000191C:
    lwz r0, 0x0(r3)
    add r17, r17, r0
    b lbl_fn_8042A360_0000192C
lbl_fn_8042A360_00001928:
    addi r17, r25, 0x5555
lbl_fn_8042A360_0000192C:
    addi r0, r25, 0x5555
    cmplw r17, r0
    ble lbl_fn_8042A360_0000194C
    addi r4, r27, 0x1c
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8042A360_0000194C:
    mulli r3, r17, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r18, r3
    bne lbl_fn_8042A360_00001974
    addi r3, r26, 0xa0
    addi r4, r14, lbl_80778910@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8042A360_00001974:
    lwz r0, 0x3c(r1)
    stw r18, 0x38(r1)
    mulli r3, r0, 0xc
    stw r17, 0x40(r1)
    lwz r0, 0x28c(r15)
    stw r0, 0x48(r1)
    mulli r0, r0, 0xc
    add r0, r18, r0
    add. r17, r3, r0
    beq lbl_fn_8042A360_00001A00
    lwz r3, 0x2c(r1)
    srwi. r0, r3, 31
    bne lbl_fn_8042A360_000019C0
    lwz r0, 0x30(r1)
    stw r3, 0x0(r17)
    stw r0, 0x4(r17)
    lwz r0, 0x34(r1)
    stw r0, 0x8(r17)
    b lbl_fn_8042A360_00001A00
lbl_fn_8042A360_000019C0:
    stw r24, 0x0(r17)
    mr r3, r17
    stw r24, 0x4(r17)
    stw r24, 0x8(r17)
    lwz r4, 0x30(r1)
    bl fn_80013DC4
    lbz r5, 0x10(r1)
    mr r3, r17
    stb r5, 0x14(r1)
    addi r8, r1, 0x14
    lwz r6, 0x34(r1)
    li r4, 0x0
    lwz r0, 0x30(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8042A360_00001A00:
    lwz r3, 0x3c(r1)
    subi r6, r31, 0x5555
    lwz r0, 0x48(r1)
    addi r3, r3, 0x1
    stw r3, 0x3c(r1)
    lwz r3, 0x38(r1)
    lwz r4, 0x28c(r15)
    lwz r18, 0x288(r15)
    mulli r5, r4, 0xc
    mr r4, r18
    add r5, r18, r5
    subf r5, r18, r5
    mulhw r5, r6, r5
    srawi r5, r5, 1
    srwi r6, r5, 31
    add r22, r5, r6
    subf r0, r22, r0
    stw r0, 0x48(r1)
    mulli r17, r22, 0xc
    mulli r0, r0, 0xc
    mr r5, r17
    add r3, r3, r0
    bl memcpy
    mr r3, r18
    mr r5, r17
    li r4, 0x0
    bl memset
    lwz r3, 0x3c(r1)
    lwz r0, 0x40(r1)
    add r3, r3, r22
    stw r3, 0x3c(r1)
    lwz r3, 0x290(r15)
    stw r0, 0x290(r15)
    stw r3, 0x40(r1)
    lwz r0, 0x38(r1)
    lwz r3, 0x288(r15)
    stw r0, 0x288(r15)
    stw r3, 0x38(r1)
    lwz r0, 0x3c(r1)
    lwz r5, 0x28c(r15)
    stw r0, 0x28c(r15)
    mulli r0, r5, 0xc
    lwz r3, 0x48(r1)
    lwz r4, 0x38(r1)
    mulli r3, r3, 0xc
    stw r5, 0x3c(r1)
    add r18, r4, r3
    add r17, r18, r0
    b lbl_fn_8042A360_00001AE0
lbl_fn_8042A360_00001AC4:
    subic. r17, r17, 0xc
    beq lbl_fn_8042A360_00001AE0
    lwz r0, 0x0(r17)
    srwi. r0, r0, 31
    beq lbl_fn_8042A360_00001AE0
    lwz r3, 0x8(r17)
    bl dtor_80084684
lbl_fn_8042A360_00001AE0:
    cmplw r17, r18
    bgt lbl_fn_8042A360_00001AC4
    cmpwi r21, 0x0
    stw r24, 0x3c(r1)
    beq lbl_fn_8042A360_00001B44
    lwz r3, 0x38(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8042A360_00001B44
    mulli r0, r24, 0xc
    stw r24, 0x3c(r1)
    li r17, 0x0
    add r18, r3, r0
    b lbl_fn_8042A360_00001B34
lbl_fn_8042A360_00001B14:
    subic. r18, r18, 0xc
    beq lbl_fn_8042A360_00001B30
    lwz r0, 0x0(r18)
    srwi. r0, r0, 31
    beq lbl_fn_8042A360_00001B30
    lwz r3, 0x8(r18)
    bl dtor_80084684
lbl_fn_8042A360_00001B30:
    subi r17, r17, 0x1
lbl_fn_8042A360_00001B34:
    cmpwi r17, 0x0
    bne lbl_fn_8042A360_00001B14
    lwz r3, 0x38(r1)
    bl dtor_80084684
lbl_fn_8042A360_00001B44:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8042A360_00001B80
    lwz r3, 0x34(r1)
    bl dtor_80084684
    b lbl_fn_8042A360_00001B80
lbl_fn_8042A360_00001B5C:
    mr r3, r17
    addi r4, r27, 0x30
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042A360_00001B80
    addi r3, r1, 0x4c
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0xfc(r15)
lbl_fn_8042A360_00001B80:
    addi r3, r1, 0x4c
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8042A360_00001654
    lmw r14, 0x688(r1)
    lwz r0, 0x6d4(r1)
    mtlr r0
    addi r1, r1, 0x6d0
    blr
}
