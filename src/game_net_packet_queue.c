#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _savegpr_23(void);
extern void dtor_80084684(void);
extern void fn_80060D58(void);
extern void fn_8006EF48(void);
extern void fn_800A4450(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_80116FC0(void);
extern void fn_801F4AA0(void);
extern void fn_801FEC74(void);
extern void fn_801FED24(void);
extern void fn_801FEE08(void);
extern void fn_804A29C4(void);
extern void fn_804A2F98(void);
extern void fn_804A5CD8(void);
extern void fn_804AC83C(void);
extern void fn_804AC96C(void);
extern void fn_804ACAF8(void);
extern void fn_804ACD10(void);
extern void fn_804ACDBC(void);
extern void fn_804AD000(void);
extern void fn_804B3EFC(void);
extern void fn_804B4150(void);
extern void fn_804B47E0(void);
extern void fn_804B6988(void);
extern void fn_804BA350(void);
extern void fn_804BBBA0(void);
extern void fn_804C2FF8(void);
extern void fn_804C8778(void);
extern void fn_804DB478(void);
extern void fn_804DC454(void);
extern void fn_804E4E78(void);
extern void fn_804F7EF4(void);
extern void fn_804FA890(void);
extern void fn_804FB224(void);
extern void fn_80502978(void);
extern void fn_805053FC(void);
extern void fn_80509AFC(void);
extern void fn_8050EAEC(void);
extern void fn_8050EFD0(void);
extern void fn_8050F5AC(void);
extern void fn_80624D40(void);
extern void fn_806846C4(void);
extern void fn_80686A48(void);
extern void fn_80686B24(void);
extern void fn_806959D8(void);

/* External data declarations */
extern u8 jumptable_80790930[];
extern u8 jumptable_8079098C[];
extern u8 lbl_80757A98[];
extern u8 lbl_80757B7C[];
extern u8 lbl_80790AB0[];
extern u8 lbl_80790B70[];

/* Small data declarations */
extern u32 lbl_8087E0FC;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F580;
extern u32 lbl_8087F588;
extern u32 lbl_8087F59C;
extern u32 lbl_8087F5A0;
extern u32 lbl_8087F5A4;
extern u32 lbl_8087F5B0;
extern u32 lbl_8087F5B8;
extern u32 lbl_8087F5C4;
extern u32 lbl_8087F5D4;
extern u32 lbl_8087F5EC;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_8087F860;
extern u32 lbl_8087F86C;
extern u32 lbl_808813D0;
extern u32 lbl_80887308;
extern u32 lbl_8088730C;
extern u32 lbl_80887310;
extern u32 lbl_80887314;
extern u32 lbl_80887318;
extern u32 lbl_8088731C;
extern u32 lbl_80887320;
extern u32 lbl_80887324;
extern u32 lbl_80887328;
extern u32 lbl_8088732C;
extern u32 lbl_80887330;

/* Function declarations */
void fn_804AF1BC(void);
void fn_804AF210(void);
void fn_804AF288(void);
void fn_804AF384(void);
void fn_804AF520(void);
void fn_804B0A70(void);
void fn_804B0A74(void);
void fn_804B0A78(void);

asm void fn_804AF1BC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    la r4, lbl_8087E0FC
    stw r0, 0x14(r1)
    li r0, -0x1
    stw r31, 0xc(r1)
    mr r31, r3
    stw r5, 0x0(r3)
    stw r5, 0x4(r3)
    stw r0, 0x4c(r3)
    stw r5, 0x48(r3)
    crclr 6
    addi r3, r3, 0x8
    bl fn_800DD3FC
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804AF210(void)
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
    beq lbl_fn_804AF210_000000B0
    li r5, 0x0
    li r0, -0x1
    stw r5, 0x0(r3)
    la r4, lbl_8087E0FC
    stw r5, 0x4(r3)
    stw r0, 0x4c(r3)
    stw r5, 0x48(r3)
    crclr 6
    addi r3, r3, 0x8
    bl fn_800DD3FC
    cmpwi r31, 0x0
    ble lbl_fn_804AF210_000000B0
    mr r3, r30
    bl dtor_80084684
lbl_fn_804AF210_000000B0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804AF288(void)
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
    beq lbl_fn_804AF288_000001AC
    lis r5, lbl_80790AB0@ha
    li r4, 0x0
    addi r5, r5, lbl_80790AB0@l
    stw r5, 0x0(r3)
    stw r4, 0x158(r3)
    lwz r0, lbl_8087F59C
    cmpwi r0, 0x0
    beq lbl_fn_804AF288_00000114
    stw r4, lbl_8087F59C
lbl_fn_804AF288_00000114:
    addic. r0, r3, 0x299c
    beq lbl_fn_804AF288_00000130
    li r0, 0x0
    stw r0, 0x299c(r3)
    stw r0, 0x29a4(r3)
    stw r0, 0x29a0(r3)
    stw r0, 0x29a8(r3)
lbl_fn_804AF288_00000130:
    addic. r3, r3, 0x1540
    beq lbl_fn_804AF288_00000150
    lis r4, fn_804AF210@ha
    addi r3, r3, 0xc
    addi r4, r4, fn_804AF210@l
    li r5, 0x50
    li r6, 0x41
    bl fn_806959D8
lbl_fn_804AF288_00000150:
    addic. r3, r30, 0xbd4
    beq lbl_fn_804AF288_00000170
    lis r4, fn_804AF210@ha
    addi r3, r3, 0xc
    addi r4, r4, fn_804AF210@l
    li r5, 0x50
    li r6, 0x1e
    bl fn_806959D8
lbl_fn_804AF288_00000170:
    addic. r3, r30, 0x268
    beq lbl_fn_804AF288_00000190
    lis r4, fn_804AF210@ha
    addi r3, r3, 0xc
    addi r4, r4, fn_804AF210@l
    li r5, 0x50
    li r6, 0x1e
    bl fn_806959D8
lbl_fn_804AF288_00000190:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_804AF288_000001AC
    mr r3, r30
    bl dtor_80084684
lbl_fn_804AF288_000001AC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804AF384(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_804AF384_00000344
    addi r31, r29, 0x15c
    b lbl_fn_804AF384_00000210
lbl_fn_804AF384_000001F8:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_804AF384_0000020C
    li r4, 0x0
    bl fn_800D246C
lbl_fn_804AF384_0000020C:
    addi r31, r31, 0x4
lbl_fn_804AF384_00000210:
    lwz r0, 0x158(r29)
    slwi r0, r0, 2
    add r3, r29, r0
    addi r0, r3, 0x15c
    cmplw r31, r0
    bne lbl_fn_804AF384_000001F8
    li r0, 0x1
    stw r0, 0xd0(r29)
    mr r3, r29
    li r4, 0x1
    bl fn_804AF520
    lwz r4, 0x70(r29)
    lis r31, lbl_80757B7C@ha
    addi r31, r31, lbl_80757B7C@l
    addi r3, r31, 0x2ce
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088730C
    mr r4, r3
    mr r3, r30
    li r5, 0x4
    bl fn_801FED24
    lwz r4, 0x70(r29)
    addi r3, r31, 0x2d6
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088730C
    mr r4, r3
    mr r3, r30
    li r5, 0x4
    bl fn_801FED24
    lwz r3, 0x70(r29)
    addi r4, r31, 0x2de
    addi r3, r3, 0x58
    bl fn_801FEC74
    cmpwi r3, 0x0
    beq lbl_fn_804AF384_000002FC
    mr r4, r3
    addi r3, r1, 0x8
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x8(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, lbl_80887310
    bne lbl_fn_804AF384_000002D4
    addi r4, r1, 0xa
    b lbl_fn_804AF384_000002D8
lbl_fn_804AF384_000002D4:
    lwz r4, 0x10(r1)
lbl_fn_804AF384_000002D8:
    lfs f2, lbl_80887308
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r0, 0x8(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804AF384_000002FC
    lwz r3, 0x10(r1)
    bl dtor_80084684
lbl_fn_804AF384_000002FC:
    lwz r3, lbl_8087F580
    lfs f1, lbl_80887314
    bl fn_804A5CD8
    lwz r5, lbl_8087F5A0
    li r3, 0x1
    lwz r4, 0xb8(r5)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xbc(r5)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xc0(r5)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    b lbl_fn_804AF384_00000348
lbl_fn_804AF384_00000344:
    li r3, 0x0
lbl_fn_804AF384_00000348:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804AF520(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    addi r11, r1, 0x1d0
    stfd f31, 0x1d0(r1)
    psq_st f31, 0x1d8(r1), 0, 0
    bl _savegpr_23
    lwz r0, 0xd0(r3)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_804AF520_00001894
    lwz r0, 0xbc(r3)
    cmpw r0, r4
    beq lbl_fn_804AF520_00001894
    cmpwi r4, 0x0
    blt lbl_fn_804AF520_00001894
    cmplwi r0, 0x16
    bgt lbl_fn_804AF520_000003BC
    slwi r0, r0, 2
    lwz r6, 0xe4(r3)
    add r5, r3, r0
    stw r6, 0xf4(r5)
lbl_fn_804AF520_000003BC:
    lwz r31, 0xe4(r3)
    li r0, 0x0
    cmplwi r4, 0x16
    stw r0, 0xe4(r3)
    bgt lbl_fn_804AF520_000003E8
    slwi r0, r4, 2
    add r5, r3, r0
    lwz r0, 0xf4(r5)
    cmpwi r0, 0x0
    blt lbl_fn_804AF520_000003E8
    stw r0, 0xe4(r3)
lbl_fn_804AF520_000003E8:
    lwz r0, 0xbc(r3)
    stw r0, 0xc0(r3)
    stw r4, 0xbc(r3)
    mr r3, r30
    bl fn_804B0A78
    lwz r0, 0xbc(r30)
    cmplwi r0, 0x16
    bgt lbl_fn_804AF520_00001894
    lis r3, jumptable_80790930@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80790930@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_804AF520_00001894
    mr r3, r30
    bl fn_804A29C4
    lwz r3, lbl_8087F580
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F580
    bl fn_804A2F98
    lwz r0, 0xc0(r30)
    cmpwi r0, 0x8
    bne lbl_fn_804AF520_000004CC
    lwz r3, lbl_8087F628
    bl fn_80509AFC
    lwz r3, lbl_8087F610
    li r0, -0x1
    li r4, -0x2
    addis r3, r3, 0x1
    stw r0, -0x68b0(r3)
    lwz r3, lbl_8087F610
    addi r3, r3, 0x4fc
    bl fn_804FB224
    lwz r3, lbl_8087F588
    li r4, 0x0
    lfs f1, lbl_80887318
    li r5, 0x0
    bl fn_804AC83C
    lwz r3, lbl_8087F588
    bl fn_804ACD10
    lwz r4, lbl_8087F86C
    lwz r3, lbl_8087F588
    lwz r4, 0x77c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804AF520_000004BC
    b lbl_fn_804AF520_000004C0
lbl_fn_804AF520_000004BC:
    la r4, lbl_808813D0
lbl_fn_804AF520_000004C0:
    li r5, 0x0
    bl fn_804AD000
    b lbl_fn_804AF520_00000854
lbl_fn_804AF520_000004CC:
    lwz r23, 0x48(r30)
    lis r4, lbl_80757B7C@ha
    addi r4, r4, lbl_80757B7C@l
    addi r26, r4, 0x2ec
    addi r3, r23, 0x58
    addi r4, r4, 0x2fa
    bl fn_801FEC74
    mr r4, r3
    addi r3, r1, 0x5c
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x5c(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, lbl_8088731C
    bne lbl_fn_804AF520_00000518
    addi r4, r1, 0x5e
    b lbl_fn_804AF520_0000051C
lbl_fn_804AF520_00000518:
    lwz r4, 0x64(r1)
lbl_fn_804AF520_0000051C:
    lfs f2, lbl_80887308
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r0, 0x5c(r1)
    fmr f31, f1
    srwi. r0, r0, 31
    beq lbl_fn_804AF520_00000544
    lwz r3, 0x64(r1)
    bl dtor_80084684
lbl_fn_804AF520_00000544:
    mr r3, r26
    bl fn_800DC6B4
    lfs f1, lbl_80887320
    mr r4, r3
    lfs f0, lbl_80887324
    addi r3, r23, 0x58
    fadds f1, f1, f31
    li r5, 0x2
    fdivs f1, f1, f0
    bl fn_801FED24
    lwz r23, 0x48(r30)
    lis r4, lbl_80757B7C@ha
    addi r4, r4, lbl_80757B7C@l
    addi r26, r4, 0x300
    addi r3, r23, 0x58
    addi r4, r4, 0x311
    bl fn_801FEC74
    mr r4, r3
    addi r3, r1, 0x50
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x50(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, lbl_8088731C
    bne lbl_fn_804AF520_000005B8
    addi r4, r1, 0x52
    b lbl_fn_804AF520_000005BC
lbl_fn_804AF520_000005B8:
    lwz r4, 0x58(r1)
lbl_fn_804AF520_000005BC:
    lfs f2, lbl_80887308
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r0, 0x50(r1)
    fmr f31, f1
    srwi. r0, r0, 31
    beq lbl_fn_804AF520_000005E4
    lwz r3, 0x58(r1)
    bl dtor_80084684
lbl_fn_804AF520_000005E4:
    mr r3, r26
    bl fn_800DC6B4
    lfs f1, lbl_80887320
    mr r4, r3
    lfs f0, lbl_80887324
    addi r3, r23, 0x58
    fadds f1, f1, f31
    li r5, 0x2
    fdivs f1, f1, f0
    bl fn_801FED24
    lwz r23, 0x48(r30)
    lis r4, lbl_80757B7C@ha
    addi r4, r4, lbl_80757B7C@l
    addi r26, r4, 0x31a
    addi r3, r23, 0x58
    addi r4, r4, 0x328
    bl fn_801FEC74
    mr r4, r3
    addi r3, r1, 0x44
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x44(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, lbl_8088731C
    bne lbl_fn_804AF520_00000658
    addi r4, r1, 0x46
    b lbl_fn_804AF520_0000065C
lbl_fn_804AF520_00000658:
    lwz r4, 0x4c(r1)
lbl_fn_804AF520_0000065C:
    lfs f2, lbl_80887308
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r0, 0x44(r1)
    fmr f31, f1
    srwi. r0, r0, 31
    beq lbl_fn_804AF520_00000684
    lwz r3, 0x4c(r1)
    bl dtor_80084684
lbl_fn_804AF520_00000684:
    mr r3, r26
    bl fn_800DC6B4
    lfs f1, lbl_80887320
    mr r4, r3
    lfs f0, lbl_80887324
    addi r3, r23, 0x58
    fadds f1, f1, f31
    li r5, 0x2
    fdivs f1, f1, f0
    bl fn_801FED24
    lwz r23, 0x48(r30)
    lis r4, lbl_80757B7C@ha
    addi r4, r4, lbl_80757B7C@l
    addi r26, r4, 0x339
    addi r3, r23, 0x58
    addi r4, r4, 0x344
    bl fn_801FEC74
    mr r4, r3
    addi r3, r1, 0x38
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x38(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, lbl_8088731C
    bne lbl_fn_804AF520_000006F8
    addi r4, r1, 0x3a
    b lbl_fn_804AF520_000006FC
lbl_fn_804AF520_000006F8:
    lwz r4, 0x40(r1)
lbl_fn_804AF520_000006FC:
    lfs f2, lbl_80887308
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r0, 0x38(r1)
    fmr f31, f1
    srwi. r0, r0, 31
    beq lbl_fn_804AF520_00000724
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_804AF520_00000724:
    mr r3, r26
    bl fn_800DC6B4
    lfs f1, lbl_80887320
    mr r4, r3
    lfs f0, lbl_80887324
    addi r3, r23, 0x58
    fadds f1, f1, f31
    li r5, 0x2
    fdivs f1, f1, f0
    bl fn_801FED24
    lwz r23, 0x48(r30)
    lis r4, lbl_80757B7C@ha
    addi r4, r4, lbl_80757B7C@l
    addi r26, r4, 0x352
    addi r3, r23, 0x58
    addi r4, r4, 0x35d
    bl fn_801FEC74
    mr r4, r3
    addi r3, r1, 0x2c
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x2c(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, lbl_8088731C
    bne lbl_fn_804AF520_00000798
    addi r4, r1, 0x2e
    b lbl_fn_804AF520_0000079C
lbl_fn_804AF520_00000798:
    lwz r4, 0x34(r1)
lbl_fn_804AF520_0000079C:
    lfs f2, lbl_80887308
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r0, 0x2c(r1)
    fmr f31, f1
    srwi. r0, r0, 31
    beq lbl_fn_804AF520_000007C4
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_804AF520_000007C4:
    mr r3, r26
    bl fn_800DC6B4
    lfs f1, lbl_80887320
    mr r4, r3
    lfs f0, lbl_80887324
    addi r3, r23, 0x58
    fadds f1, f1, f31
    li r5, 0x2
    fdivs f1, f1, f0
    bl fn_801FED24
    lwz r23, 0x48(r30)
    cmpwi r23, 0x0
    beq lbl_fn_804AF520_00000818
    mr r3, r23
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887318
    stfs f0, 0x104(r23)
    lwz r0, 0xfc(r23)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r23)
lbl_fn_804AF520_00000818:
    lwz r23, 0x4c(r30)
    cmpwi r23, 0x0
    beq lbl_fn_804AF520_00000844
    mr r3, r23
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887318
    stfs f0, 0x104(r23)
    lwz r0, 0xfc(r23)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r23)
lbl_fn_804AF520_00000844:
    lwz r0, 0xc0(r30)
    cmpwi r0, 0x3
    bne lbl_fn_804AF520_00000854
    stw r31, 0xe4(r30)
lbl_fn_804AF520_00000854:
    lwz r3, 0xe8(r30)
    cmpwi r3, 0x0
    blt lbl_fn_804AF520_00001894
    li r0, -0x1
    stw r3, 0xe4(r30)
    stw r0, 0xe8(r30)
    b lbl_fn_804AF520_00001894
    lwz r3, lbl_8087F588
    li r4, 0x0
    lfs f1, lbl_80887318
    li r5, 0x1
    li r6, 0x0
    bl fn_804AC96C
    lwz r4, lbl_8087F86C
    lwz r3, lbl_8087F588
    lwz r4, 0x784(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804AF520_000008A0
    b lbl_fn_804AF520_000008A4
lbl_fn_804AF520_000008A0:
    la r4, lbl_808813D0
lbl_fn_804AF520_000008A4:
    li r5, 0x0
    bl fn_804AD000
    lwz r3, lbl_8087F588
    bl fn_804ACD10
    lwz r3, lbl_8087F588
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    stw r31, 0xe4(r30)
    b lbl_fn_804AF520_00001894
    mr r3, r30
    bl fn_804C8778
    b lbl_fn_804AF520_00001894
    stw r31, 0xe4(r30)
    lwz r23, lbl_8087F628
    addi r3, r23, 0x5f0
    bl fn_80686A48
    cmpwi r3, 0x0
    beq lbl_fn_804AF520_000009A8
    lwz r0, 0xc28(r23)
    cmpwi r0, 0x0
    ble lbl_fn_804AF520_0000094C
    li r0, 0x1
    stw r0, 0x154(r30)
    lfs f1, lbl_80887318
    li r4, 0x0
    lwz r3, lbl_8087F588
    li r5, 0x1
    li r6, 0x1
    bl fn_804AC96C
    lwz r4, lbl_8087F1E4
    lwz r3, lbl_8087F588
    lwz r4, 0xe6c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804AF520_00000934
    b lbl_fn_804AF520_00000938
lbl_fn_804AF520_00000934:
    la r4, lbl_808813D0
lbl_fn_804AF520_00000938:
    li r5, 0x0
    bl fn_804AD000
    lwz r3, lbl_8087F588
    bl fn_804ACD10
    b lbl_fn_804AF520_00001894
lbl_fn_804AF520_0000094C:
    li r0, 0x3
    stw r0, 0x154(r30)
    lwz r0, lbl_8087F860
    cmpwi r0, 0x0
    bne lbl_fn_804AF520_00000968
    mr r3, r30
    bl fn_80502978
lbl_fn_804AF520_00000968:
    lwz r3, lbl_8087F628
    lwz r23, lbl_8087F860
    addi r24, r3, 0x5f0
    addi r0, r23, 0xfc
    cmplw r24, r0
    beq lbl_fn_804AF520_0000099C
    mr r3, r24
    bl fn_80686A48
    mr r5, r3
    mr r4, r24
    addi r3, r23, 0xfc
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_804AF520_0000099C:
    lwz r3, lbl_8087F860
    bl fn_805053FC
    b lbl_fn_804AF520_00001894
lbl_fn_804AF520_000009A8:
    li r0, 0x0
    stw r0, 0x154(r30)
    lfs f1, lbl_80887318
    li r4, 0x0
    lwz r3, lbl_8087F588
    li r5, 0x0
    bl fn_804AC83C
    lwz r4, lbl_8087F1E4
    lwz r3, lbl_8087F588
    lwz r4, 0xe64(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804AF520_000009DC
    b lbl_fn_804AF520_000009E0
lbl_fn_804AF520_000009DC:
    la r4, lbl_808813D0
lbl_fn_804AF520_000009E0:
    li r5, 0x0
    bl fn_804AD000
    lwz r3, lbl_8087F588
    bl fn_804ACD10
    b lbl_fn_804AF520_00001894
    mr r3, r30
    bl fn_804B6988
    lwz r23, 0x70(r30)
    cmpwi r23, 0x0
    beq lbl_fn_804AF520_00001894
    mr r3, r23
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887318
    stfs f0, 0x104(r23)
    lwz r0, 0xfc(r23)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r23)
    b lbl_fn_804AF520_00001894
    lwz r0, lbl_8087F628
    li r24, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_804AF520_00000A4C
    bl fn_80624D40
    cmpwi r3, 0x0
    bne lbl_fn_804AF520_00000A4C
    li r24, 0x1
lbl_fn_804AF520_00000A4C:
    lwz r23, 0xb8(r30)
    stw r24, 0xdc(r30)
    cmpwi r23, 0x0
    beq lbl_fn_804AF520_00000A7C
    mr r3, r23
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887318
    stfs f0, 0x104(r23)
    lwz r0, 0xfc(r23)
    oris r0, r0, 0x1000
    stw r0, 0xfc(r23)
lbl_fn_804AF520_00000A7C:
    lwz r3, lbl_8087F86C
    lwz r24, 0x81c(r3)
    cmpwi r24, 0x0
    beq lbl_fn_804AF520_00000A90
    b lbl_fn_804AF520_00000A94
lbl_fn_804AF520_00000A90:
    la r24, lbl_808813D0
lbl_fn_804AF520_00000A94:
    lwz r4, 0xb8(r30)
    lis r3, lbl_80757B7C@ha
    addi r3, r3, lbl_80757B7C@l
    addi r3, r3, 0x2fa
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r24
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r24, 0x81c(r3)
    cmpwi r24, 0x0
    beq lbl_fn_804AF520_00000AD0
    b lbl_fn_804AF520_00000AD4
lbl_fn_804AF520_00000AD0:
    la r24, lbl_808813D0
lbl_fn_804AF520_00000AD4:
    lwz r4, 0xb8(r30)
    lis r3, lbl_80757B7C@ha
    addi r3, r3, lbl_80757B7C@l
    addi r3, r3, 0x344
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r24
    bl fn_801FEE08
    lwz r3, lbl_8087F610
    li r4, 0x8
    addi r3, r3, 0x4fc
    bl fn_804FB224
    b lbl_fn_804AF520_00001894
    lwz r3, lbl_8087F588
    li r4, 0x0
    lfs f1, lbl_80887318
    li r5, 0x1
    li r6, 0x0
    bl fn_804AC96C
    lwz r4, lbl_8087F86C
    lwz r3, lbl_8087F588
    lwz r4, 0x78c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804AF520_00000B40
    b lbl_fn_804AF520_00000B44
lbl_fn_804AF520_00000B40:
    la r4, lbl_808813D0
lbl_fn_804AF520_00000B44:
    li r5, 0x0
    bl fn_804AD000
    lwz r3, lbl_8087F588
    bl fn_804ACD10
    lwz r3, lbl_8087F588
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    stw r31, 0xe4(r30)
    b lbl_fn_804AF520_00001894
    li r0, 0x1
    stw r0, 0xe0(r30)
    li r4, 0x0
    lwz r3, lbl_8087F580
    bl fn_800D246C
    lwz r3, lbl_8087F580
    bl fn_804A2F98
    lwz r0, 0xc0(r30)
    cmpwi r0, 0x7
    bne lbl_fn_804AF520_00000BD8
    lwz r3, lbl_8087F588
    li r4, 0x0
    lfs f1, lbl_80887318
    li r5, 0x0
    bl fn_804AC83C
    lwz r3, lbl_8087F588
    bl fn_804ACD10
    lwz r4, lbl_8087F86C
    lwz r3, lbl_8087F588
    lwz r4, 0x794(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804AF520_00000BC8
    b lbl_fn_804AF520_00000BCC
lbl_fn_804AF520_00000BC8:
    la r4, lbl_808813D0
lbl_fn_804AF520_00000BCC:
    li r5, 0x0
    bl fn_804AD000
    b lbl_fn_804AF520_00000DAC
lbl_fn_804AF520_00000BD8:
    lwz r23, 0x50(r30)
    cmpwi r23, 0x0
    beq lbl_fn_804AF520_00000C04
    mr r3, r23
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887318
    stfs f0, 0x104(r23)
    lwz r0, 0xfc(r23)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r23)
lbl_fn_804AF520_00000C04:
    lwz r23, 0x54(r30)
    cmpwi r23, 0x0
    beq lbl_fn_804AF520_00000C30
    mr r3, r23
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887318
    stfs f0, 0x104(r23)
    lwz r0, 0xfc(r23)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r23)
lbl_fn_804AF520_00000C30:
    lfs f31, lbl_80887318
    mr r23, r30
    li r25, 0x0
lbl_fn_804AF520_00000C3C:
    lwz r24, 0x58(r23)
    cmpwi r24, 0x0
    beq lbl_fn_804AF520_00000C64
    mr r3, r24
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r24)
    lwz r0, 0xfc(r24)
    oris r0, r0, 0x1000
    stw r0, 0xfc(r24)
lbl_fn_804AF520_00000C64:
    addi r25, r25, 0x1
    addi r23, r23, 0x4
    cmplwi r25, 0x3
    blt lbl_fn_804AF520_00000C3C
    lwz r23, 0x64(r30)
    cmpwi r23, 0x0
    beq lbl_fn_804AF520_00000CA0
    mr r3, r23
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887318
    stfs f0, 0x104(r23)
    lwz r0, 0xfc(r23)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r23)
lbl_fn_804AF520_00000CA0:
    lwz r23, lbl_8087F5A0
    li r26, 0x0
    lfs f31, lbl_80887318
lbl_fn_804AF520_00000CAC:
    cmpwi r26, 0x0
    bne lbl_fn_804AF520_00000CDC
    lwz r24, 0xb8(r23)
    cmpwi r24, 0x0
    beq lbl_fn_804AF520_00000CDC
    mr r3, r24
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r24)
    lwz r0, 0xfc(r24)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r24)
lbl_fn_804AF520_00000CDC:
    addi r26, r26, 0x1
    addi r23, r23, 0x4
    cmpwi r26, 0x3
    blt lbl_fn_804AF520_00000CAC
    lwz r3, lbl_8087F5A0
    lwz r3, 0xb8(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804AF520_00000D10
    stw r0, 0x38(r3)
    b lbl_fn_804AF520_00000D10
    stw r0, 0x38(r3)
lbl_fn_804AF520_00000D10:
    lwz r3, lbl_8087F628
    li r4, 0x0
    addi r3, r3, 0x430
    bl fn_8050F5AC
    subfic r4, r3, -0x1
    addi r0, r3, 0x1
    or r0, r4, r0
    srwi. r0, r0, 31
    stw r0, 0xd4(r30)
    beq lbl_fn_804AF520_00000D5C
    lfs f1, lbl_80887328
    lis r4, lbl_80757B7C@ha
    addi r4, r4, lbl_80757B7C@l
    lwz r3, 0x50(r30)
    fmr f2, f1
    addi r4, r4, 0x368
    fmr f3, f1
    bl fn_801F4AA0
    b lbl_fn_804AF520_00000D7C
lbl_fn_804AF520_00000D5C:
    lfs f1, lbl_80887324
    lis r4, lbl_80757B7C@ha
    addi r4, r4, lbl_80757B7C@l
    lwz r3, 0x50(r30)
    fmr f2, f1
    addi r4, r4, 0x368
    fmr f3, f1
    bl fn_801F4AA0
lbl_fn_804AF520_00000D7C:
    lwz r0, 0xc0(r30)
    cmpwi r0, 0x8
    bne lbl_fn_804AF520_00000DAC
    cmpwi r31, 0x1
    bne lbl_fn_804AF520_00000DA8
    lwz r0, 0xd4(r30)
    cmpwi r0, 0x0
    bne lbl_fn_804AF520_00000DA8
    li r0, 0x0
    stw r0, 0xe4(r30)
    b lbl_fn_804AF520_00000DAC
lbl_fn_804AF520_00000DA8:
    stw r31, 0xe4(r30)
lbl_fn_804AF520_00000DAC:
    li r0, 0x10
    addi r4, r1, 0x10c
    li r3, 0x0
    mtctr r0
lbl_fn_804AF520_00000DBC:
    stw r3, 0x4(r4)
    stwu r3, 0x8(r4)
    bdnz lbl_fn_804AF520_00000DBC
    lwz r27, lbl_8087F628
    lis r26, lbl_80757B7C@ha
    lwz r4, 0x64(r30)
    addi r26, r26, lbl_80757B7C@l
    lwz r28, 0xc28(r27)
    addi r3, r26, 0x370
    addi r24, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    addi r5, r27, 0x5f0
    bl fn_801FEE08
    lis r4, lbl_80790B70@ha
    mr r5, r28
    addi r3, r1, 0x110
    addi r4, r4, lbl_80790B70@l
    crclr 6
    bl fn_800DD3FC
    lwz r4, 0x64(r30)
    addi r3, r26, 0x381
    addi r24, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    addi r5, r1, 0x110
    bl fn_801FEE08
    lwz r3, lbl_8087F610
    mr r4, r28
    bl fn_804FA890
    lwz r4, 0x64(r30)
    mr r27, r3
    addi r3, r26, 0x392
    addi r24, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    mr r5, r27
    bl fn_801FEE08
    lwz r3, lbl_8087F5A0
    li r4, -0x1
    li r5, 0x0
    bl fn_804B47E0
    lwz r3, lbl_8087F5C4
    cmpwi r3, 0x0
    beq lbl_fn_804AF520_00000E80
    bl fn_800D2338
lbl_fn_804AF520_00000E80:
    lwz r3, lbl_8087F5D4
    cmpwi r3, 0x0
    beq lbl_fn_804AF520_00001894
    bl fn_800D2338
    b lbl_fn_804AF520_00001894
    lwz r23, 0x68(r30)
    lis r4, lbl_80757B7C@ha
    addi r4, r4, lbl_80757B7C@l
    addi r26, r4, 0x2ec
    addi r3, r23, 0x58
    addi r4, r4, 0x2fa
    bl fn_801FEC74
    mr r4, r3
    addi r3, r1, 0x20
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x20(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, lbl_8088731C
    bne lbl_fn_804AF520_00000EE0
    addi r4, r1, 0x22
    b lbl_fn_804AF520_00000EE4
lbl_fn_804AF520_00000EE0:
    lwz r4, 0x28(r1)
lbl_fn_804AF520_00000EE4:
    lfs f2, lbl_80887308
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r0, 0x20(r1)
    fmr f31, f1
    srwi. r0, r0, 31
    beq lbl_fn_804AF520_00000F0C
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_804AF520_00000F0C:
    mr r3, r26
    bl fn_800DC6B4
    lfs f1, lbl_80887320
    mr r4, r3
    lfs f0, lbl_80887324
    addi r3, r23, 0x58
    fadds f1, f1, f31
    li r5, 0x2
    fdivs f1, f1, f0
    bl fn_801FED24
    lwz r23, 0x68(r30)
    lis r4, lbl_80757B7C@ha
    addi r4, r4, lbl_80757B7C@l
    addi r26, r4, 0x3a3
    addi r3, r23, 0x58
    addi r4, r4, 0x3ae
    bl fn_801FEC74
    mr r4, r3
    addi r3, r1, 0x14
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, lbl_8088731C
    bne lbl_fn_804AF520_00000F80
    addi r4, r1, 0x16
    b lbl_fn_804AF520_00000F84
lbl_fn_804AF520_00000F80:
    lwz r4, 0x1c(r1)
lbl_fn_804AF520_00000F84:
    lfs f2, lbl_80887308
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r0, 0x14(r1)
    fmr f31, f1
    srwi. r0, r0, 31
    beq lbl_fn_804AF520_00000FAC
    lwz r3, 0x1c(r1)
    bl dtor_80084684
lbl_fn_804AF520_00000FAC:
    mr r3, r26
    bl fn_800DC6B4
    lfs f1, lbl_80887320
    mr r4, r3
    lfs f0, lbl_80887324
    addi r3, r23, 0x58
    fadds f1, f1, f31
    li r5, 0x2
    fdivs f1, f1, f0
    bl fn_801FED24
    lwz r23, 0x68(r30)
    lis r4, lbl_80757B7C@ha
    addi r4, r4, lbl_80757B7C@l
    addi r26, r4, 0x352
    addi r3, r23, 0x58
    addi r4, r4, 0x35d
    bl fn_801FEC74
    mr r4, r3
    addi r3, r1, 0x8
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x8(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, lbl_8088731C
    bne lbl_fn_804AF520_00001020
    addi r4, r1, 0xa
    b lbl_fn_804AF520_00001024
lbl_fn_804AF520_00001020:
    lwz r4, 0x10(r1)
lbl_fn_804AF520_00001024:
    lfs f2, lbl_80887308
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r0, 0x8(r1)
    fmr f31, f1
    srwi. r0, r0, 31
    beq lbl_fn_804AF520_0000104C
    lwz r3, 0x10(r1)
    bl dtor_80084684
lbl_fn_804AF520_0000104C:
    mr r3, r26
    bl fn_800DC6B4
    lfs f1, lbl_80887320
    mr r4, r3
    lfs f0, lbl_80887324
    addi r3, r23, 0x58
    fadds f1, f1, f31
    li r5, 0x2
    fdivs f1, f1, f0
    bl fn_801FED24
    lwz r23, 0x68(r30)
    cmpwi r23, 0x0
    beq lbl_fn_804AF520_000010A0
    mr r3, r23
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887318
    stfs f0, 0x104(r23)
    lwz r0, 0xfc(r23)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r23)
lbl_fn_804AF520_000010A0:
    lwz r23, 0x6c(r30)
    cmpwi r23, 0x0
    beq lbl_fn_804AF520_000010CC
    mr r3, r23
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887318
    stfs f0, 0x104(r23)
    lwz r0, 0xfc(r23)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r23)
lbl_fn_804AF520_000010CC:
    lfs f31, lbl_80887318
    li r24, 0x0
lbl_fn_804AF520_000010D4:
    lwz r23, 0x58(r30)
    cmpwi r23, 0x0
    beq lbl_fn_804AF520_000010FC
    mr r3, r23
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r23)
    lwz r0, 0xfc(r23)
    oris r0, r0, 0x1000
    stw r0, 0xfc(r23)
lbl_fn_804AF520_000010FC:
    addi r24, r24, 0x1
    addi r30, r30, 0x4
    cmplwi r24, 0x3
    blt lbl_fn_804AF520_000010D4
    b lbl_fn_804AF520_00001894
    lwz r23, 0xb8(r30)
    cmpwi r23, 0x0
    beq lbl_fn_804AF520_0000113C
    mr r3, r23
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887318
    stfs f0, 0x104(r23)
    lwz r0, 0xfc(r23)
    oris r0, r0, 0x1000
    stw r0, 0xfc(r23)
lbl_fn_804AF520_0000113C:
    lwz r3, lbl_8087F86C
    lwz r24, 0x824(r3)
    cmpwi r24, 0x0
    beq lbl_fn_804AF520_00001150
    b lbl_fn_804AF520_00001154
lbl_fn_804AF520_00001150:
    la r24, lbl_808813D0
lbl_fn_804AF520_00001154:
    lwz r4, 0xb8(r30)
    lis r3, lbl_80757B7C@ha
    addi r3, r3, lbl_80757B7C@l
    addi r3, r3, 0x2fa
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r24
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r24, 0x824(r3)
    cmpwi r24, 0x0
    beq lbl_fn_804AF520_00001190
    b lbl_fn_804AF520_00001194
lbl_fn_804AF520_00001190:
    la r24, lbl_808813D0
lbl_fn_804AF520_00001194:
    lwz r4, 0xb8(r30)
    lis r3, lbl_80757B7C@ha
    addi r3, r3, lbl_80757B7C@l
    addi r3, r3, 0x344
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r24
    bl fn_801FEE08
    lwz r23, 0x74(r30)
    cmpwi r23, 0x0
    beq lbl_fn_804AF520_000011E8
    mr r3, r23
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887318
    stfs f0, 0x104(r23)
    lwz r0, 0xfc(r23)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r23)
lbl_fn_804AF520_000011E8:
    lwz r4, 0xc4(r30)
    mr r3, r30
    bl fn_804B4150
    lwz r3, lbl_8087F610
    bl fn_804DB478
    li r0, 0x0
    stw r0, 0x150(r30)
    b lbl_fn_804AF520_00001894
    lwz r3, lbl_8087F5B8
    li r4, 0x1
    bl fn_804BA350
    lwz r3, lbl_8087F610
    li r4, 0x4
    bl fn_804DC454
    b lbl_fn_804AF520_00001894
    lwz r4, lbl_8087F610
    cmpwi r4, 0x0
    beq lbl_fn_804AF520_00001254
    lwz r6, 0xc0(r30)
    mr r3, r30
    lwz r5, 0x544(r4)
    subfic r4, r6, 0x10
    subi r0, r6, 0x10
    or r0, r4, r0
    srwi r4, r0, 31
    bl fn_804BBBA0
    b lbl_fn_804AF520_00001274
lbl_fn_804AF520_00001254:
    lwz r6, 0xc0(r30)
    mr r3, r30
    li r5, 0x0
    subfic r4, r6, 0x10
    subi r0, r6, 0x10
    or r0, r4, r0
    srwi r4, r0, 31
    bl fn_804BBBA0
lbl_fn_804AF520_00001274:
    mr r3, r30
    bl fn_804C2FF8
    b lbl_fn_804AF520_00001894
    lwz r23, 0x7c(r30)
    li r0, 0x0
    stw r0, 0xdc(r30)
    cmpwi r23, 0x0
    beq lbl_fn_804AF520_000012B4
    mr r3, r23
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887318
    stfs f0, 0x104(r23)
    lwz r0, 0xfc(r23)
    oris r0, r0, 0x1000
    stw r0, 0xfc(r23)
lbl_fn_804AF520_000012B4:
    lwz r23, 0x80(r30)
    cmpwi r23, 0x0
    beq lbl_fn_804AF520_000012E0
    mr r3, r23
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887318
    stfs f0, 0x104(r23)
    lwz r0, 0xfc(r23)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r23)
lbl_fn_804AF520_000012E0:
    lwz r23, 0x84(r30)
    cmpwi r23, 0x0
    beq lbl_fn_804AF520_0000130C
    mr r3, r23
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887318
    stfs f0, 0x104(r23)
    lwz r0, 0xfc(r23)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r23)
lbl_fn_804AF520_0000130C:
    lwz r23, 0xb4(r30)
    cmpwi r23, 0x0
    beq lbl_fn_804AF520_00001338
    mr r3, r23
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887318
    stfs f0, 0x104(r23)
    lwz r0, 0xfc(r23)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r23)
lbl_fn_804AF520_00001338:
    lwz r5, 0x88(r30)
    lis r3, 0x89
    lfs f0, lbl_80887308
    addi r4, r3, 0x547b
    stfs f0, 0x100(r5)
    li r3, 0x0
    bl fn_80116FC0
    lwz r4, 0x88(r30)
    lis r5, lbl_80757B7C@ha
    addi r5, r5, lbl_80757B7C@l
    mr r26, r3
    addi r3, r5, 0x3bc
    addi r24, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    mr r5, r26
    bl fn_801FEE08
    mr r3, r30
    li r4, -0x1
    li r5, 0x0
    li r6, 0xa
    bl fn_804B3EFC
    lwz r0, 0xc0(r30)
    cmpwi r0, 0x12
    beq lbl_fn_804AF520_00001894
    lwz r3, 0x78(r30)
    lfs f0, lbl_80887308
    stfs f0, 0x100(r3)
    lwz r23, 0x78(r30)
    cmpwi r23, 0x0
    beq lbl_fn_804AF520_00001894
    mr r3, r23
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887318
    stfs f0, 0x104(r23)
    lwz r0, 0xfc(r23)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r23)
    b lbl_fn_804AF520_00001894
    lwz r23, 0x70(r30)
    cmpwi r23, 0x0
    beq lbl_fn_804AF520_00001408
    mr r3, r23
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887318
    stfs f0, 0x104(r23)
    lwz r0, 0xfc(r23)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r23)
lbl_fn_804AF520_00001408:
    lfs f31, lbl_80887318
    mr r23, r30
    li r25, 0x0
lbl_fn_804AF520_00001414:
    lwz r24, 0x8c(r23)
    cmpwi r24, 0x0
    beq lbl_fn_804AF520_0000143C
    mr r3, r24
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r24)
    lwz r0, 0xfc(r24)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r24)
lbl_fn_804AF520_0000143C:
    addi r25, r25, 0x1
    addi r23, r23, 0x4
    cmpwi r25, 0xa
    blt lbl_fn_804AF520_00001414
    lwz r0, 0xdc(r30)
    li r27, 0x0
    lfs f0, lbl_80887308
    cmpwi r0, 0x0
    stw r27, 0xd0(r1)
    stw r27, 0xd4(r1)
    stw r27, 0xd8(r1)
    stw r27, 0xdc(r1)
    stw r27, 0xe0(r1)
    stw r27, 0xe4(r1)
    stw r27, 0xe8(r1)
    stw r27, 0xec(r1)
    stw r27, 0xf0(r1)
    stw r27, 0xf4(r1)
    stw r27, 0xf8(r1)
    stw r27, 0xfc(r1)
    stw r27, 0x100(r1)
    stw r27, 0x104(r1)
    stw r27, 0x108(r1)
    stw r27, 0x10c(r1)
    stfs f0, 0xb8(r1)
    stfs f0, 0x6c(r1)
    stfs f0, 0x84(r1)
    stfs f0, 0x9c(r1)
    stfs f0, 0xb4(r1)
    beq lbl_fn_804AF520_0000166C
    lwz r0, 0xc8(r30)
    li r24, 0x0
    li r26, -0x1
    slwi r0, r0, 2
    add r3, r30, r0
    lwz r25, 0x25c(r3)
    b lbl_fn_804AF520_0000150C
lbl_fn_804AF520_000014D0:
    lwz r12, 0x8(r25)
    mr r3, r25
    mr r4, r24
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    stw r27, 0x0(r3)
    la r4, lbl_8087E0FC
    stw r27, 0x4(r3)
    stw r26, 0x4c(r3)
    stw r27, 0x48(r3)
    crclr 6
    addi r3, r3, 0x8
    bl fn_800DD3FC
    addi r24, r24, 0x1
lbl_fn_804AF520_0000150C:
    lwz r12, 0x8(r25)
    mr r3, r25
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpw r24, r3
    blt lbl_fn_804AF520_000014D0
    lwz r0, 0xc8(r30)
    li r25, 0x0
    lwz r4, lbl_8087F5A4
    mr r29, r25
    slwi r0, r0, 2
    li r31, 0x0
    add r3, r30, r0
    addi r23, r4, 0x14
    lwz r24, 0x25c(r3)
    li r27, 0x1
    b lbl_fn_804AF520_00001630
lbl_fn_804AF520_00001554:
    lwz r0, 0x0(r23)
    cmplw r25, r0
    bge lbl_fn_804AF520_0000160C
    lwz r12, 0x8(r24)
    add r26, r23, r31
    mr r3, r24
    mr r4, r25
    lwz r12, 0xc(r12)
    lwz r28, 0x4(r26)
    mtctr r12
    bctrl
    stw r28, 0x0(r3)
    mr r3, r24
    mr r4, r25
    lwz r12, 0x8(r24)
    lwz r28, 0xc(r26)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    stw r28, 0x4(r3)
    mr r3, r24
    mr r4, r25
    lwz r12, 0x8(r24)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r4, 0x1c(r26)
    crclr 6
    addi r3, r3, 0x8
    bl fn_800DD3FC
    lwz r12, 0x8(r24)
    mr r3, r24
    mr r4, r25
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    stw r27, 0x48(r3)
    mr r3, r24
    mr r4, r25
    lwz r12, 0x8(r24)
    lwz r28, 0x8(r26)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    stw r28, 0x4c(r3)
    b lbl_fn_804AF520_00001628
lbl_fn_804AF520_0000160C:
    lwz r12, 0x8(r24)
    mr r3, r24
    mr r4, r25
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    stw r29, 0x48(r3)
lbl_fn_804AF520_00001628:
    addi r25, r25, 0x1
    addi r31, r31, 0x1c
lbl_fn_804AF520_00001630:
    lwz r12, 0x8(r24)
    mr r3, r24
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpw r25, r3
    blt lbl_fn_804AF520_00001554
    lwz r0, 0x0(r23)
    li r4, 0x0
    stw r0, 0x4(r24)
    lwz r0, 0xc8(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    lwz r3, 0x25c(r3)
    stw r4, 0x0(r3)
lbl_fn_804AF520_0000166C:
    lwz r4, 0xc8(r30)
    mr r3, r30
    li r6, 0xa
    slwi r0, r4, 2
    add r5, r30, r0
    lwz r5, 0x25c(r5)
    lwz r5, 0x0(r5)
    bl fn_804B3EFC
    li r0, 0x1
    stw r0, 0xdc(r30)
    b lbl_fn_804AF520_00001894
    lwz r23, 0xb8(r30)
    cmpwi r23, 0x0
    beq lbl_fn_804AF520_000016C4
    mr r3, r23
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887318
    stfs f0, 0x104(r23)
    lwz r0, 0xfc(r23)
    oris r0, r0, 0x1000
    stw r0, 0xfc(r23)
lbl_fn_804AF520_000016C4:
    lwz r3, lbl_8087F86C
    lwz r23, 0x82c(r3)
    cmpwi r23, 0x0
    beq lbl_fn_804AF520_000016D8
    b lbl_fn_804AF520_000016DC
lbl_fn_804AF520_000016D8:
    la r23, lbl_808813D0
lbl_fn_804AF520_000016DC:
    lwz r4, 0xb8(r30)
    lis r3, lbl_80757B7C@ha
    addi r3, r3, lbl_80757B7C@l
    addi r3, r3, 0x2fa
    addi r24, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    mr r5, r23
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r23, 0x82c(r3)
    cmpwi r23, 0x0
    beq lbl_fn_804AF520_00001718
    b lbl_fn_804AF520_0000171C
lbl_fn_804AF520_00001718:
    la r23, lbl_808813D0
lbl_fn_804AF520_0000171C:
    lwz r4, 0xb8(r30)
    lis r3, lbl_80757B7C@ha
    addi r3, r3, lbl_80757B7C@l
    addi r3, r3, 0x344
    addi r24, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    mr r5, r23
    bl fn_801FEE08
    b lbl_fn_804AF520_00001894
    lwz r3, lbl_8087F5C4
    cmpwi r3, 0x0
    beq lbl_fn_804AF520_00001758
    bl fn_800D2338
lbl_fn_804AF520_00001758:
    li r0, 0x0
    stw r0, 0x299c(r30)
    stw r0, 0x29a4(r30)
    stw r0, 0x29a0(r30)
    stw r0, 0x29a8(r30)
    b lbl_fn_804AF520_00001894
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    li r4, 0x2
    li r3, 0xe
    stw r4, 0x299c(r30)
    stw r3, 0x29a4(r30)
    stw r0, 0x29a0(r30)
    stw r0, 0x29a8(r30)
    b lbl_fn_804AF520_00001894
    lwz r3, lbl_8087F5C4
    cmpwi r3, 0x0
    beq lbl_fn_804AF520_000017B4
    bl fn_800D2338
lbl_fn_804AF520_000017B4:
    lwz r3, lbl_8087F5D4
    cmpwi r3, 0x0
    beq lbl_fn_804AF520_000017C4
    bl fn_800D2338
lbl_fn_804AF520_000017C4:
    li r6, -0x1
    stw r6, 0xf4(r30)
    lis r5, 0x4330
    lis r4, lbl_80757A98@ha
    stw r6, 0xf8(r30)
    li r0, 0x0
    lfs f1, lbl_80887308
    lis r3, 0x100
    stw r6, 0xfc(r30)
    lfd f5, lbl_80757A98@l(r4)
    subi r4, r3, 0x1
    stw r6, 0x100(r30)
    fmr f2, f1
    lfs f3, lbl_8088732C
    stw r6, 0x104(r30)
    stw r6, 0x108(r30)
    stw r6, 0x10c(r30)
    stw r6, 0x110(r30)
    stw r6, 0x114(r30)
    stw r6, 0x118(r30)
    stw r6, 0x11c(r30)
    stw r6, 0x120(r30)
    stw r6, 0x124(r30)
    stw r6, 0x128(r30)
    stw r6, 0x12c(r30)
    stw r6, 0x130(r30)
    stw r6, 0x134(r30)
    stw r6, 0x138(r30)
    stw r6, 0x13c(r30)
    stw r6, 0x140(r30)
    stw r6, 0x144(r30)
    stw r6, 0x148(r30)
    stw r6, 0x14c(r30)
    stw r0, 0x299c(r30)
    stw r0, 0x29a4(r30)
    stw r0, 0x29a0(r30)
    stw r0, 0x29a8(r30)
    lwz r6, lbl_8087EEE0
    stw r5, 0x190(r1)
    lwz r3, 0x3c(r6)
    lwz r0, 0x40(r6)
    xoris r3, r3, 0x8000
    stw r3, 0x194(r1)
    xoris r0, r0, 0x8000
    lwz r3, lbl_8087EEB0
    lfd f0, 0x190(r1)
    stw r0, 0x19c(r1)
    fsubs f4, f0, f5
    stw r5, 0x198(r1)
    lfd f0, 0x198(r1)
    fsubs f5, f0, f5
    bl fn_80060D58
lbl_fn_804AF520_00001894:
    addi r11, r1, 0x1d0
    psq_l f31, 0x1d8(r1), 0, 0
    lfd f31, 0x1d0(r1)
    bl _restgpr_23
    lwz r0, 0x1e4(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}

asm void fn_804B0A70(void)
{
    nofralloc
    blr
}

asm void fn_804B0A74(void)
{
    nofralloc
    blr
}

asm void fn_804B0A78(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stfd f30, 0x20(r1)
    psq_st f30, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r4, 0xc0(r3)
    subi r0, r4, 0x3
    cmplwi r0, 0xf
    bgt lbl_fn_804B0A78_00001D6C
    lis r4, jumptable_8079098C@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_8079098C@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lwz r3, lbl_8087F610
    lwz r0, 0x4fc(r3)
    cmpwi r0, 0x2b
    beq lbl_fn_804B0A78_0000193C
    cmpwi r0, -0x1
    beq lbl_fn_804B0A78_0000193C
    lwz r3, lbl_8087F588
    bl fn_804ACAF8
    lwz r3, lbl_8087F588
    bl fn_804ACDBC
lbl_fn_804B0A78_0000193C:
    lwz r4, lbl_8087F5A0
    lwz r3, 0xb8(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xbc(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xc0(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    b lbl_fn_804B0A78_00001D6C
    lwz r31, 0xb8(r3)
    cmpwi r31, 0x0
    beq lbl_fn_804B0A78_00001D6C
    mr r3, r31
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80887330
    stfs f0, 0x104(r31)
    lfs f0, lbl_80887308
    stfs f0, 0x100(r31)
    b lbl_fn_804B0A78_00001D6C
    lwz r0, 0xbc(r3)
    cmpwi r0, 0x8
    beq lbl_fn_804B0A78_00001A60
    lwz r30, 0x50(r3)
    cmpwi r30, 0x0
    beq lbl_fn_804B0A78_000019D4
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80887330
    stfs f0, 0x104(r30)
    lfs f0, lbl_80887308
    stfs f0, 0x100(r30)
lbl_fn_804B0A78_000019D4:
    lwz r30, 0x54(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804B0A78_000019FC
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80887330
    stfs f0, 0x104(r30)
    lfs f0, lbl_80887308
    stfs f0, 0x100(r30)
lbl_fn_804B0A78_000019FC:
    lfs f31, lbl_80887330
    mr r29, r31
    lfs f30, lbl_80887308
    li r28, 0x0
lbl_fn_804B0A78_00001A0C:
    lwz r30, 0x58(r29)
    cmpwi r30, 0x0
    beq lbl_fn_804B0A78_00001A2C
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    stfs f31, 0x104(r30)
    stfs f30, 0x100(r30)
lbl_fn_804B0A78_00001A2C:
    addi r28, r28, 0x1
    addi r29, r29, 0x4
    cmplwi r28, 0x3
    blt lbl_fn_804B0A78_00001A0C
    lwz r3, lbl_8087F5A0
    lwz r3, 0xb8(r3)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    b lbl_fn_804B0A78_00001A60
    stw r0, 0x38(r3)
    b lbl_fn_804B0A78_00001A60
    stw r0, 0x38(r3)
lbl_fn_804B0A78_00001A60:
    li r0, 0x0
    stw r0, 0xc8(r31)
    b lbl_fn_804B0A78_00001D6C
    lwz r30, 0xb8(r3)
    cmpwi r30, 0x0
    beq lbl_fn_804B0A78_00001A98
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887318
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    oris r0, r0, 0x1000
    stw r0, 0xfc(r30)
lbl_fn_804B0A78_00001A98:
    lwz r30, 0x74(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804B0A78_00001D6C
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887330
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
    b lbl_fn_804B0A78_00001D6C
    lwz r3, lbl_8087F5EC
    cmpwi r3, 0x0
    beq lbl_fn_804B0A78_00001D6C
    bl fn_800D2338
    b lbl_fn_804B0A78_00001D6C
    lwz r4, lbl_8087F860
    cmpwi r4, 0x0
    beq lbl_fn_804B0A78_00001D6C
    lwz r0, 0x25b8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_804B0A78_00001B44
    lwz r3, lbl_8087F628
    addi r29, r4, 0xfc
    mr r4, r29
    li r5, 0x8
    addi r30, r3, 0x430
    addi r3, r30, 0x1c0
    bl fn_80686B24
    cmpwi r3, 0x0
    beq lbl_fn_804B0A78_00001B44
    mr r3, r30
    mr r4, r29
    li r5, 0x0
    bl fn_8050EFD0
    li r0, 0x0
    stw r0, 0x7f8(r30)
    mr r3, r30
    bl fn_8050EAEC
    mr r3, r30
    li r4, 0x9f0
    bl fn_804F7EF4
lbl_fn_804B0A78_00001B44:
    lwz r3, lbl_8087F860
    bl fn_800D2338
    b lbl_fn_804B0A78_00001D6C
    lwz r3, 0xb8(r3)
    li r4, 0x1
    bl fn_800D246C
    li r0, 0x1
    stw r0, 0xdc(r31)
    b lbl_fn_804B0A78_00001D6C
    lwz r30, 0x68(r3)
    cmpwi r30, 0x0
    beq lbl_fn_804B0A78_00001B90
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80887330
    stfs f0, 0x104(r30)
    lfs f0, lbl_80887308
    stfs f0, 0x100(r30)
lbl_fn_804B0A78_00001B90:
    lwz r30, 0x6c(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804B0A78_00001BB8
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80887330
    stfs f0, 0x104(r30)
    lfs f0, lbl_80887308
    stfs f0, 0x100(r30)
lbl_fn_804B0A78_00001BB8:
    lfs f31, lbl_80887330
    li r28, 0x0
    lfs f30, lbl_80887308
lbl_fn_804B0A78_00001BC4:
    lwz r30, 0x58(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804B0A78_00001BE4
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    stfs f31, 0x104(r30)
    stfs f30, 0x100(r30)
lbl_fn_804B0A78_00001BE4:
    addi r28, r28, 0x1
    addi r31, r31, 0x4
    cmplwi r28, 0x3
    blt lbl_fn_804B0A78_00001BC4
    b lbl_fn_804B0A78_00001D6C
    lwz r3, lbl_8087F5B0
    bl fn_800D2338
    lwz r30, 0x70(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804B0A78_00001D6C
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80887330
    stfs f0, 0x104(r30)
    lfs f0, lbl_80887308
    stfs f0, 0x100(r30)
    b lbl_fn_804B0A78_00001D6C
    lwz r0, 0xbc(r3)
    cmpwi r0, 0x11
    beq lbl_fn_804B0A78_00001D00
    lwz r30, 0x80(r3)
    cmpwi r30, 0x0
    beq lbl_fn_804B0A78_00001C60
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80887330
    stfs f0, 0x104(r30)
    lfs f0, lbl_80887308
    stfs f0, 0x100(r30)
lbl_fn_804B0A78_00001C60:
    lwz r30, 0x84(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804B0A78_00001C88
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80887330
    stfs f0, 0x104(r30)
    lfs f0, lbl_80887308
    stfs f0, 0x100(r30)
lbl_fn_804B0A78_00001C88:
    lwz r30, 0xb4(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804B0A78_00001CB0
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80887330
    stfs f0, 0x104(r30)
    lfs f0, lbl_80887308
    stfs f0, 0x100(r30)
lbl_fn_804B0A78_00001CB0:
    lwz r30, 0x88(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804B0A78_00001CD8
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80887330
    stfs f0, 0x104(r30)
    lfs f0, lbl_80887308
    stfs f0, 0x100(r30)
lbl_fn_804B0A78_00001CD8:
    lwz r30, 0x70(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804B0A78_00001D00
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80887330
    stfs f0, 0x104(r30)
    lfs f0, lbl_80887308
    stfs f0, 0x100(r30)
lbl_fn_804B0A78_00001D00:
    lfs f30, lbl_80887330
    mr r29, r31
    lfs f31, lbl_80887308
    li r28, 0x0
lbl_fn_804B0A78_00001D10:
    lwz r30, 0x8c(r29)
    cmpwi r30, 0x0
    beq lbl_fn_804B0A78_00001D30
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    stfs f30, 0x104(r30)
    stfs f31, 0x100(r30)
lbl_fn_804B0A78_00001D30:
    addi r28, r28, 0x1
    addi r29, r29, 0x4
    cmpwi r28, 0xa
    blt lbl_fn_804B0A78_00001D10
    li r0, 0x0
    stw r0, 0xdc(r31)
    lwz r3, lbl_8087F610
    bl fn_804E4E78
    b lbl_fn_804B0A78_00001D6C
    bl fn_804A29C4
    lwz r3, lbl_8087F580
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F580
    bl fn_804A2F98
lbl_fn_804B0A78_00001D6C:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    psq_l f30, 0x28(r1), 0, 0
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
