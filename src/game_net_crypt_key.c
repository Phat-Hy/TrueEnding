#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _savegpr_20(void);
extern void dtor_80084684(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_80060D58(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_80116FC0(void);
extern void fn_801F4728(void);
extern void fn_801F4998(void);
extern void fn_801F4CB4(void);
extern void fn_801F4E8C(void);
extern void fn_801FEDBC(void);
extern void fn_801FEE08(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_804A3C24(void);
extern void fn_804A4738(void);
extern void fn_804A53D4(void);
extern void fn_804DCA50(void);
extern void fn_804EA538(void);
extern void fn_804EA60C(void);
extern void fn_804EA6B4(void);
extern void fn_804EA760(void);
extern void fn_804EA814(void);
extern void fn_804EAA54(void);
extern void fn_804EAA6C(void);
extern void fn_804FA8EC(void);
extern void fn_805075C8(void);
extern void fn_8050F5AC(void);
extern void fn_8050F668(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_80686AF0(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_80790A1C[];
extern u8 lbl_80757A98[];
extern u8 lbl_80757B7C[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80790B70[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087E0F4;
extern u32 lbl_8087E0F8;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087F580;
extern u32 lbl_8087F588;
extern u32 lbl_8087F5A0;
extern u32 lbl_8087F5B0;
extern u32 lbl_8087F5C4;
extern u32 lbl_8087F5EC;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_8087F860;
extern u32 lbl_8087F86C;
extern u32 lbl_808813D0;
extern u32 lbl_80887308;
extern u32 lbl_80887318;
extern u32 lbl_80887324;
extern u32 lbl_8088732C;
extern u32 lbl_80887330;
extern u32 lbl_8088733C;
extern u32 lbl_80887340;

/* Function declarations */
void fn_804B2C20(void);
void fn_804B3494(void);
void fn_804B3838(void);
void fn_804B39F8(void);
void fn_804B3C78(void);
void fn_804B3EFC(void);
void fn_804B4150(void);
void fn_804B424C(void);
void fn_804B4304(void);
void fn_804B43A8(void);
void fn_804B4400(void);

asm void fn_804B2C20(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    addi r5, r3, 0x15c
    stw r0, 0x124(r1)
    lis r0, 0x4330
    stw r31, 0x11c(r1)
    mr r31, r3
    stw r30, 0x118(r1)
    stw r0, 0x108(r1)
    stw r0, 0x110(r1)
    b lbl_fn_804B2C20_00000048
lbl_fn_804B2C20_0000002C:
    lwz r4, 0x0(r5)
    cmpwi r4, 0x0
    beq lbl_fn_804B2C20_00000044
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_804B2C20_00000044:
    addi r5, r5, 0x4
lbl_fn_804B2C20_00000048:
    lwz r0, 0x158(r3)
    slwi r0, r0, 2
    add r4, r3, r0
    addi r0, r4, 0x15c
    cmplw r5, r0
    bne lbl_fn_804B2C20_0000002C
    lwz r0, 0xbc(r3)
    cmplwi r0, 0x16
    bgt lbl_fn_804B2C20_0000078C
    lis r4, jumptable_80790A1C@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80790A1C@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lwz r4, 0x48(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x4c(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, lbl_8087F588
    lwz r0, 0x4c(r4)
    cmpwi cr6, r0, 0x0
    bne cr6, lbl_fn_804B2C20_0000078C
    lwz r0, lbl_8087F580
    lwz r30, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804B2C20_0000078C
    bne cr6, lbl_fn_804B2C20_0000078C
    lwz r5, 0xe4(r31)
    lis r4, lbl_80757B7C@ha
    addi r4, r4, lbl_80757B7C@l
    addi r3, r1, 0xc8
    addi r4, r4, 0x479
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    addi r3, r1, 0xc8
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x30
    bl fn_801F4E8C
    lwz r3, lbl_8087F580
    addi r6, r1, 0x30
    li r4, 0x0
    li r5, 0x0
    li r7, 0x0
    bl fn_804A53D4
    lwz r4, 0xbc(r31)
    mr r3, r31
    lwz r5, 0xe4(r31)
    bl fn_804B424C
    lis r4, lbl_80790B70@ha
    mr r30, r3
    addi r4, r4, lbl_80790B70@l
    addi r4, r4, 0x6
    bl fn_80686AF0
    cmpwi r3, 0x0
    beq lbl_fn_804B2C20_0000078C
    lwz r3, lbl_8087F580
    mr r4, r30
    li r5, 0x0
    bl fn_804A3C24
    b lbl_fn_804B2C20_0000078C
    lwz r4, lbl_8087F588
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x48(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x4c(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, lbl_8087F588
    lwz r0, 0x4c(r4)
    cmpwi cr6, r0, 0x0
    bne cr6, lbl_fn_804B2C20_0000078C
    lwz r0, lbl_8087F580
    lwz r30, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804B2C20_0000078C
    bne cr6, lbl_fn_804B2C20_0000078C
    lwz r5, 0xe4(r31)
    lis r4, lbl_80757B7C@ha
    addi r4, r4, lbl_80757B7C@l
    addi r3, r1, 0x88
    addi r4, r4, 0x479
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    addi r3, r1, 0x88
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x1c
    bl fn_801F4E8C
    lwz r3, lbl_8087F580
    addi r6, r1, 0x1c
    li r4, 0x0
    li r5, 0x0
    li r7, 0x0
    bl fn_804A53D4
    lwz r4, 0xbc(r31)
    mr r3, r31
    lwz r5, 0xe4(r31)
    bl fn_804B424C
    lis r4, lbl_80790B70@ha
    mr r30, r3
    addi r4, r4, lbl_80790B70@l
    addi r4, r4, 0x6
    bl fn_80686AF0
    cmpwi r3, 0x0
    beq lbl_fn_804B2C20_0000078C
    lwz r3, lbl_8087F580
    mr r4, r30
    li r5, 0x0
    bl fn_804A3C24
    b lbl_fn_804B2C20_0000078C
    lwz r0, lbl_8087F5EC
    cmpwi r0, 0x0
    beq lbl_fn_804B2C20_0000078C
    lwz r3, 0x70(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F5EC
    lwz r0, 0xd8(r3)
    cmpwi r0, 0x1
    blt lbl_fn_804B2C20_00000270
    cmpwi r0, 0x8
    bne lbl_fn_804B2C20_0000078C
lbl_fn_804B2C20_00000270:
    lwz r6, lbl_8087EEE0
    lis r5, lbl_80757A98@ha
    lfs f1, lbl_80887308
    lis r4, 0x8000
    lwz r3, 0x3c(r6)
    lwz r0, 0x40(r6)
    fmr f2, f1
    xoris r3, r3, 0x8000
    stw r3, 0x10c(r1)
    xoris r0, r0, 0x8000
    lfd f5, lbl_80757A98@l(r5)
    stw r0, 0x114(r1)
    lfd f3, 0x108(r1)
    lfd f0, 0x110(r1)
    fsubs f4, f3, f5
    lwz r3, lbl_8087EEB0
    fsubs f5, f0, f5
    lfs f3, lbl_80887324
    bl fn_80060D58
    b lbl_fn_804B2C20_0000078C
    lwz r4, lbl_8087F588
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r0, 0x154(r3)
    cmpwi r0, 0x3
    bne lbl_fn_804B2C20_0000033C
    lwz r3, lbl_8087F860
    lwz r0, 0x25ac(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804B2C20_0000078C
    lwz r6, lbl_8087EEE0
    lis r5, lbl_80757A98@ha
    lfs f1, lbl_80887308
    lis r4, 0x8000
    lwz r3, 0x3c(r6)
    lwz r0, 0x40(r6)
    fmr f2, f1
    xoris r3, r3, 0x8000
    stw r3, 0x10c(r1)
    xoris r0, r0, 0x8000
    lfd f5, lbl_80757A98@l(r5)
    stw r0, 0x114(r1)
    lfd f3, 0x108(r1)
    lfd f0, 0x110(r1)
    fsubs f4, f3, f5
    lwz r3, lbl_8087EEB0
    fsubs f5, f0, f5
    lfs f3, lbl_80887324
    bl fn_80060D58
    b lbl_fn_804B2C20_0000078C
lbl_fn_804B2C20_0000033C:
    lwz r4, 0x48(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x4c(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, lbl_8087F588
    lwz r0, 0x4c(r4)
    cmpwi cr6, r0, 0x0
    bne cr6, lbl_fn_804B2C20_0000078C
    lwz r0, lbl_8087F580
    lwz r30, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804B2C20_0000078C
    bne cr6, lbl_fn_804B2C20_0000078C
    lwz r5, 0xe4(r31)
    lis r4, lbl_80757B7C@ha
    addi r4, r4, lbl_80757B7C@l
    addi r3, r1, 0x48
    addi r4, r4, 0x479
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    addi r3, r1, 0x48
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lwz r3, lbl_8087F580
    addi r6, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    li r7, 0x0
    bl fn_804A53D4
    lwz r4, 0xbc(r31)
    mr r3, r31
    lwz r5, 0xe4(r31)
    bl fn_804B424C
    lis r4, lbl_80790B70@ha
    mr r30, r3
    addi r4, r4, lbl_80790B70@l
    addi r4, r4, 0x6
    bl fn_80686AF0
    cmpwi r3, 0x0
    beq lbl_fn_804B2C20_0000078C
    lwz r3, lbl_8087F580
    mr r4, r30
    li r5, 0x0
    bl fn_804A3C24
    b lbl_fn_804B2C20_0000078C
    lwz r3, lbl_8087F5B0
    cmpwi r3, 0x0
    beq lbl_fn_804B2C20_00000474
    lwz r0, 0x2bc(r3)
    cmpwi r0, 0x1
    bge lbl_fn_804B2C20_00000474
    lwz r6, lbl_8087EEE0
    lis r5, lbl_80757A98@ha
    lfs f1, lbl_80887308
    lis r4, 0x8000
    lwz r3, 0x3c(r6)
    lwz r0, 0x40(r6)
    fmr f2, f1
    xoris r3, r3, 0x8000
    stw r3, 0x10c(r1)
    xoris r0, r0, 0x8000
    lfd f5, lbl_80757A98@l(r5)
    stw r0, 0x114(r1)
    lfd f3, 0x108(r1)
    lfd f0, 0x110(r1)
    fsubs f4, f3, f5
    lwz r3, lbl_8087EEB0
    fsubs f5, f0, f5
    lfs f3, lbl_80887324
    bl fn_80060D58
lbl_fn_804B2C20_00000474:
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804B2C20_0000078C
    lwz r3, 0x70(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804B2C20_0000078C
    lwz r4, lbl_8087F588
    mr r3, r31
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    bl fn_804B3494
    b lbl_fn_804B2C20_0000078C
    mr r3, r31
    bl fn_804B3494
    b lbl_fn_804B2C20_0000078C
    mr r3, r31
    bl fn_804B3838
    b lbl_fn_804B2C20_0000078C
    lwz r7, 0x78(r3)
    li r4, 0x0
    li r5, 0x0
    li r6, 0xa
    lwz r0, 0x38(r7)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r7)
    lwz r7, 0x7c(r3)
    lwz r0, 0x38(r7)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r7)
    lwz r7, 0x80(r3)
    lwz r0, 0x38(r7)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r7)
    lwz r7, 0x84(r3)
    lwz r0, 0x38(r7)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r7)
    lwz r7, 0x88(r3)
    lwz r0, 0x38(r7)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r7)
    lwz r3, 0xb4(r3)
    bl fn_804A4738
    lwz r4, 0x80(r31)
    lis r3, lbl_80757B7C@ha
    addi r3, r3, lbl_80757B7C@l
    addi r3, r3, 0x486
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088733C
    mr r4, r3
    mr r3, r30
    li r5, 0x0
    bl fn_801FEDBC
    b lbl_fn_804B2C20_0000078C
    lwz r4, 0xb8(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, lbl_8087F628
    addis r4, r4, 0x1
    lwz r0, -0x3e08(r4)
    cmpwi r0, 0x8
    beq lbl_fn_804B2C20_00000590
    lwz r0, -0x3e0c(r4)
    cmpwi r0, 0x1
    bne lbl_fn_804B2C20_0000078C
lbl_fn_804B2C20_00000590:
    lwz r4, lbl_8087F610
    addis r4, r4, 0x1
    lwz r0, -0x6614(r4)
    cmpwi r0, 0x0
    bgt lbl_fn_804B2C20_0000078C
    lwz r4, lbl_8087F628
    lbz r0, 0xc0(r4)
    cmplwi r0, 0x1
    bne lbl_fn_804B2C20_000005C4
    lwz r4, 0x150(r3)
    addi r0, r4, 0x1
    stw r0, 0x150(r3)
    b lbl_fn_804B2C20_000005CC
lbl_fn_804B2C20_000005C4:
    li r0, 0x0
    stw r0, 0x150(r3)
lbl_fn_804B2C20_000005CC:
    lwz r0, 0x150(r3)
    cmpwi r0, 0x1e
    bge lbl_fn_804B2C20_0000078C
    lwz r3, 0x74(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804B2C20_0000078C
    mr r3, r31
    bl fn_804B39F8
    b lbl_fn_804B2C20_0000078C
    lwz r3, lbl_8087F5C4
    cmpwi r3, 0x0
    beq lbl_fn_804B2C20_0000078C
    lwz r0, 0xd88(r3)
    cmpwi r0, 0x1
    bge lbl_fn_804B2C20_0000078C
    lwz r6, lbl_8087EEE0
    lis r5, lbl_80757A98@ha
    lfs f1, lbl_80887308
    lis r4, 0x8000
    lwz r3, 0x3c(r6)
    lwz r0, 0x40(r6)
    fmr f2, f1
    xoris r3, r3, 0x8000
    stw r3, 0x10c(r1)
    xoris r0, r0, 0x8000
    lfd f5, lbl_80757A98@l(r5)
    stw r0, 0x114(r1)
    lfd f3, 0x108(r1)
    lfd f0, 0x110(r1)
    fsubs f4, f3, f5
    lwz r3, lbl_8087EEB0
    fsubs f5, f0, f5
    lfs f3, lbl_80887324
    bl fn_80060D58
    b lbl_fn_804B2C20_0000078C
    lwz r3, 0xb8(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804B2C20_0000078C
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804B2C20_00000694
    lwz r3, 0xb8(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804B2C20_0000078C
lbl_fn_804B2C20_00000694:
    lwz r6, lbl_8087EEE0
    lis r5, lbl_80757A98@ha
    lfs f1, lbl_80887308
    lis r4, 0x8000
    lwz r3, 0x3c(r6)
    lwz r0, 0x40(r6)
    fmr f2, f1
    xoris r3, r3, 0x8000
    stw r3, 0x10c(r1)
    xoris r0, r0, 0x8000
    lfd f5, lbl_80757A98@l(r5)
    stw r0, 0x114(r1)
    lfd f3, 0x108(r1)
    lfd f0, 0x110(r1)
    fsubs f4, f3, f5
    lwz r3, lbl_8087EEB0
    fsubs f5, f0, f5
    lfs f3, lbl_80887324
    bl fn_80060D58
    b lbl_fn_804B2C20_0000078C
    lwz r4, 0x48(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x4c(r3)
    mr r3, r31
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r12, 0x0(r31)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    b lbl_fn_804B2C20_0000078C
    lwz r4, 0x48(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r3, 0x4c(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804B2C20_0000078C
    lwz r6, lbl_8087EEE0
    lis r5, lbl_80757A98@ha
    lfs f1, lbl_80887308
    lis r4, 0x8000
    lwz r3, 0x3c(r6)
    lwz r0, 0x40(r6)
    fmr f2, f1
    xoris r3, r3, 0x8000
    stw r3, 0x10c(r1)
    xoris r0, r0, 0x8000
    lfd f5, lbl_80757A98@l(r5)
    stw r0, 0x114(r1)
    lfd f3, 0x108(r1)
    lfd f0, 0x110(r1)
    fsubs f4, f3, f5
    lwz r3, lbl_8087EEB0
    fsubs f5, f0, f5
    lfs f3, lbl_80887324
    bl fn_80060D58
lbl_fn_804B2C20_0000078C:
    lwz r6, 0x299c(r31)
    cmpwi r6, 0x0
    beq lbl_fn_804B2C20_0000085C
    lwz r4, 0x29a4(r31)
    li r7, 0xff
    cmpwi r4, 0x0
    beq lbl_fn_804B2C20_000007B8
    li r3, 0xff
    lwz r0, 0x29a0(r31)
    divw r3, r3, r4
    mullw r7, r3, r0
lbl_fn_804B2C20_000007B8:
    cmpwi r6, 0x1
    li r0, 0x0
    beq lbl_fn_804B2C20_000007CC
    cmpwi r6, 0x3
    bne lbl_fn_804B2C20_000007D0
lbl_fn_804B2C20_000007CC:
    li r0, 0x1
lbl_fn_804B2C20_000007D0:
    cmpwi r0, 0x0
    beq lbl_fn_804B2C20_000007DC
    subfic r7, r7, 0xff
lbl_fn_804B2C20_000007DC:
    cmpwi r6, 0x1
    li r5, 0x0
    beq lbl_fn_804B2C20_000007F0
    cmpwi r6, 0x2
    bne lbl_fn_804B2C20_000007F4
lbl_fn_804B2C20_000007F0:
    li r5, 0x1
lbl_fn_804B2C20_000007F4:
    lwz r8, lbl_8087EEE0
    neg r0, r5
    or r6, r0, r5
    lis r4, lbl_80757A98@ha
    lwz r3, 0x3c(r8)
    lis r5, 0x100
    lwz r0, 0x40(r8)
    xoris r3, r3, 0x8000
    stw r3, 0x10c(r1)
    xoris r0, r0, 0x8000
    lfs f1, lbl_80887308
    stw r0, 0x114(r1)
    srawi r3, r6, 31
    lfd f5, lbl_80757A98@l(r4)
    subi r0, r5, 0x1
    lfd f3, 0x108(r1)
    fmr f2, f1
    andc r4, r0, r3
    slwi r0, r7, 24
    fsubs f4, f3, f5
    lfd f0, 0x110(r1)
    lwz r3, lbl_8087EEB0
    fsubs f5, f0, f5
    lfs f3, lbl_8088732C
    add r4, r4, r0
    bl fn_80060D58
lbl_fn_804B2C20_0000085C:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_804B3494(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stw r31, 0xbc(r1)
    stw r30, 0xb8(r1)
    mr r30, r3
    stw r29, 0xb4(r1)
    stw r28, 0xb0(r1)
    lwz r4, lbl_8087F588
    lwz r0, 0x4c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_804B3494_0000090C
    lwz r0, 0xbc(r3)
    cmpwi r0, 0x8
    beq lbl_fn_804B3494_0000090C
    lwz r7, lbl_8087EEE0
    lis r5, 0x4330
    lis r6, lbl_80757A98@ha
    lfs f1, lbl_80887308
    lwz r3, 0x3c(r7)
    lis r4, 0x8000
    lwz r0, 0x40(r7)
    fmr f2, f1
    xoris r3, r3, 0x8000
    stw r3, 0x9c(r1)
    xoris r0, r0, 0x8000
    lfd f5, lbl_80757A98@l(r6)
    stw r5, 0x98(r1)
    lwz r3, lbl_8087EEB0
    lfd f0, 0x98(r1)
    stw r0, 0xa4(r1)
    fsubs f4, f0, f5
    lfs f3, lbl_80887324
    stw r5, 0xa0(r1)
    lfd f0, 0xa0(r1)
    fsubs f5, f0, f5
    bl fn_80060D58
    b lbl_fn_804B3494_00000BF8
lbl_fn_804B3494_0000090C:
    lwz r4, 0x50(r3)
    lwz r31, lbl_8087F628
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r0, lbl_8087F580
    lwz r29, 0x50(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804B3494_000009CC
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804B3494_000009CC
    lwz r5, 0xe4(r30)
    lis r4, lbl_80757B7C@ha
    addi r4, r4, lbl_80757B7C@l
    addi r3, r1, 0x58
    addi r4, r4, 0x479
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    addi r3, r1, 0x58
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r29
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lwz r3, lbl_8087F580
    addi r6, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    li r7, 0x0
    bl fn_804A53D4
    lwz r4, 0xbc(r30)
    mr r3, r30
    lwz r5, 0xe4(r30)
    bl fn_804B424C
    lis r4, lbl_80790B70@ha
    mr r29, r3
    addi r4, r4, lbl_80790B70@l
    addi r4, r4, 0x6
    bl fn_80686AF0
    cmpwi r3, 0x0
    beq lbl_fn_804B3494_000009CC
    lwz r3, lbl_8087F580
    mr r4, r29
    li r5, 0x0
    bl fn_804A3C24
lbl_fn_804B3494_000009CC:
    lwz r3, 0x54(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x64(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F5A0
    lwz r3, 0xb8(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804B3494_00000A10
    stw r0, 0x38(r3)
    b lbl_fn_804B3494_00000A10
    stw r0, 0x38(r3)
lbl_fn_804B3494_00000A10:
    lwz r3, lbl_8087F628
    lwz r0, 0xc8(r3)
    cmpwi r0, 0x8
    blt lbl_fn_804B3494_00000AE0
    addi r3, r3, 0x430
    li r4, 0x0
    bl fn_8050F5AC
    mr r28, r3
    b lbl_fn_804B3494_00000AD8
lbl_fn_804B3494_00000A34:
    lwz r3, lbl_8087F610
    mr r4, r28
    li r5, 0x1
    bl fn_804DCA50
    cmpwi r3, 0x0
    bne lbl_fn_804B3494_00000A7C
    lwz r3, lbl_8087F610
    mr r4, r28
    li r5, 0x0
    bl fn_804DCA50
    cmpwi r3, 0x0
    bne lbl_fn_804B3494_00000A7C
    lwz r3, lbl_8087F610
    mr r4, r28
    li r5, 0x2
    bl fn_804DCA50
    cmpwi r3, 0x0
    beq lbl_fn_804B3494_00000AC4
lbl_fn_804B3494_00000A7C:
    lwz r4, 0x58(r30)
    lis r29, lbl_80757B7C@ha
    addi r29, r29, lbl_80757B7C@l
    lwz r0, 0x38(r4)
    addi r3, r29, 0x48e
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r28, 0x50(r30)
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r28
    addi r3, r1, 0x44
    bl fn_801F4E8C
    lwz r3, 0x58(r30)
    addi r4, r29, 0x49c
    addi r5, r1, 0x44
    bl fn_801F4728
    b lbl_fn_804B3494_00000AE0
lbl_fn_804B3494_00000AC4:
    lwz r3, lbl_8087F628
    li r4, 0x0
    addi r3, r3, 0x430
    bl fn_8050F668
    mr r28, r3
lbl_fn_804B3494_00000AD8:
    cmpwi r28, -0x1
    bne lbl_fn_804B3494_00000A34
lbl_fn_804B3494_00000AE0:
    lis r29, lbl_80757B7C@ha
    lwz r28, 0x64(r30)
    addi r29, r29, lbl_80757B7C@l
    addi r3, r29, 0x4a7
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r28
    addi r3, r1, 0x30
    bl fn_801F4E8C
    lwz r3, 0x30(r1)
    addi r4, r29, 0x4b1
    lwz r8, 0x34(r1)
    addi r5, r1, 0x1c
    lwz r7, 0x38(r1)
    lwz r6, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r3, 0x1c(r1)
    lwz r3, lbl_8087F5A0
    stw r8, 0x20(r1)
    stw r7, 0x24(r1)
    stw r6, 0x28(r1)
    stw r0, 0x2c(r1)
    lwz r3, 0xb8(r3)
    bl fn_801F4728
    lwz r3, lbl_8087F610
    lwz r28, lbl_8087F5A0
    lwz r4, 0xc28(r31)
    addi r3, r3, 0x610
    bl fn_805075C8
    lwz r0, 0x0(r3)
    lwz r3, 0xb0(r28)
    cmplw r0, r3
    blt lbl_fn_804B3494_00000B68
    subi r0, r3, 0x1
lbl_fn_804B3494_00000B68:
    lwz r4, 0xb4(r28)
    slwi r0, r0, 4
    lis r31, lbl_80757B7C@ha
    lwz r3, 0xb8(r28)
    lwzx r0, r4, r0
    addi r31, r31, lbl_80757B7C@l
    addi r4, r31, 0x4bc
    mulli r29, r0, 0xc
    add r5, r28, r29
    lwz r5, 0x50(r5)
    bl fn_801F4998
    add r4, r28, r29
    lwz r3, 0xb8(r28)
    lwz r5, 0x54(r4)
    addi r4, r31, 0x4ca
    bl fn_801F4998
    add r30, r28, r29
    lwz r3, 0xb8(r28)
    lwz r5, 0x58(r30)
    addi r4, r31, 0x4d8
    bl fn_801F4998
    lwz r3, 0xb8(r28)
    addi r4, r31, 0x4dd
    lwz r5, 0x58(r30)
    bl fn_801F4998
    lwz r3, 0xb8(r28)
    addi r4, r31, 0x4e2
    lwz r5, 0x58(r30)
    bl fn_801F4998
    lwz r3, 0xb8(r28)
    addi r4, r31, 0x4e7
    lwz r5, 0x58(r30)
    bl fn_801F4998
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
lbl_fn_804B3494_00000BF8:
    lwz r0, 0xc4(r1)
    lwz r31, 0xbc(r1)
    lwz r30, 0xb8(r1)
    lwz r29, 0xb4(r1)
    lwz r28, 0xb0(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_804B3838(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804B3838_00000DC0
    lwz r5, 0x78(r3)
    lis r4, lbl_80757B7C@ha
    addi r4, r4, lbl_80757B7C@l
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x80(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x84(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x88(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0xb4(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x70(r3)
    addi r3, r4, 0x486
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r4, 0x80(r31)
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088733C
    mr r4, r3
    mr r3, r30
    li r5, 0x0
    bl fn_801FEDBC
    lwz r3, 0x8c(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x90(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x94(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x98(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x9c(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0xa0(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0xa4(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0xa8(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0xac(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0xb0(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0xc8(r31)
    lwz r4, lbl_8087F86C
    addi r0, r3, 0xad
    lwz r3, lbl_8087F580
    slwi r0, r0, 3
    add r4, r4, r0
    lwz r4, 0x4c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804B3838_00000D90
    b lbl_fn_804B3838_00000D94
lbl_fn_804B3838_00000D90:
    la r4, lbl_808813D0
lbl_fn_804B3838_00000D94:
    li r5, 0x0
    bl fn_804A3C24
    lwz r0, 0xc8(r31)
    li r6, 0xa
    lwz r3, 0xb4(r31)
    slwi r0, r0, 2
    add r4, r31, r0
    lwz r5, 0x25c(r4)
    lwz r4, 0x0(r5)
    lwz r5, 0x4(r5)
    bl fn_804A4738
lbl_fn_804B3838_00000DC0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804B39F8(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    mr r31, r3
    stw r30, 0x98(r1)
    stw r29, 0x94(r1)
    stw r28, 0x90(r1)
    lwz r4, 0x68(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x6c(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r0, lbl_8087F580
    lwz r30, 0x68(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804B39F8_00000EC4
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804B39F8_00000EC4
    lwz r5, 0xe4(r31)
    lis r4, lbl_80757B7C@ha
    addi r4, r4, lbl_80757B7C@l
    addi r3, r1, 0x48
    addi r4, r4, 0x479
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    addi r3, r1, 0x48
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lwz r3, lbl_8087F580
    addi r6, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    li r7, 0x0
    bl fn_804A53D4
    lwz r4, 0xbc(r31)
    mr r3, r31
    lwz r5, 0xe4(r31)
    bl fn_804B424C
    lis r4, lbl_80790B70@ha
    mr r30, r3
    addi r4, r4, lbl_80790B70@l
    addi r4, r4, 0x6
    bl fn_80686AF0
    cmpwi r3, 0x0
    beq lbl_fn_804B39F8_00000EC4
    lwz r3, lbl_8087F580
    mr r4, r30
    li r5, 0x0
    bl fn_804A3C24
lbl_fn_804B39F8_00000EC4:
    lwz r3, lbl_8087F610
    bl fn_804EAA54
    cmpwi r3, 0x1
    bne lbl_fn_804B39F8_00001000
    lwz r3, lbl_8087F628
    lwz r0, 0xc8(r3)
    cmpwi r0, 0x8
    blt lbl_fn_804B39F8_00000FC4
    addi r3, r3, 0x430
    li r4, 0x0
    bl fn_8050F5AC
    lis r4, lbl_80757B7C@ha
    mr r28, r3
    addi r30, r4, lbl_80757B7C@l
    b lbl_fn_804B39F8_00000FBC
lbl_fn_804B39F8_00000F00:
    lwz r3, lbl_8087F610
    mr r4, r28
    li r5, 0x2
    bl fn_804DCA50
    cmpwi r3, 0x0
    beq lbl_fn_804B39F8_00000F54
    lwz r4, 0x58(r31)
    addi r3, r30, 0x4ec
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r29, 0x68(r31)
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r29
    addi r3, r1, 0x30
    bl fn_801F4E8C
    lwz r3, 0x58(r31)
    addi r4, r30, 0x49c
    addi r5, r1, 0x30
    bl fn_801F4728
lbl_fn_804B39F8_00000F54:
    lwz r3, lbl_8087F610
    mr r4, r28
    li r5, 0x0
    bl fn_804DCA50
    cmpwi r3, 0x0
    beq lbl_fn_804B39F8_00000FA8
    lwz r4, 0x5c(r31)
    addi r3, r30, 0x4fb
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r29, 0x68(r31)
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r29
    addi r3, r1, 0x1c
    bl fn_801F4E8C
    lwz r3, 0x5c(r31)
    addi r4, r30, 0x49c
    addi r5, r1, 0x1c
    bl fn_801F4728
lbl_fn_804B39F8_00000FA8:
    lwz r3, lbl_8087F628
    li r4, 0x0
    addi r3, r3, 0x430
    bl fn_8050F668
    mr r28, r3
lbl_fn_804B39F8_00000FBC:
    cmpwi r28, -0x1
    bne lbl_fn_804B39F8_00000F00
lbl_fn_804B39F8_00000FC4:
    li r3, 0x0
    li r4, 0x166
    bl fn_80116FC0
    lwz r4, 0x6c(r31)
    lis r5, lbl_80757B7C@ha
    addi r5, r5, lbl_80757B7C@l
    mr r29, r3
    addi r3, r5, 0x50a
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r29
    bl fn_801FEE08
    b lbl_fn_804B39F8_00001038
lbl_fn_804B39F8_00001000:
    li r3, 0x0
    li r4, 0x164
    bl fn_80116FC0
    lwz r4, 0x6c(r31)
    lis r5, lbl_80757B7C@ha
    addi r5, r5, lbl_80757B7C@l
    mr r29, r3
    addi r3, r5, 0x50a
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r29
    bl fn_801FEE08
lbl_fn_804B39F8_00001038:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    lwz r28, 0x90(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_804B3C78(void)
{
    nofralloc
    stwu r1, -0x420(r1)
    mflr r0
    stw r0, 0x424(r1)
    li r0, 0x40
    stw r31, 0x41c(r1)
    mr r31, r3
    li r3, 0x0
    stw r30, 0x418(r1)
    mr r30, r5
    addi r5, r1, 0x204
    stw r29, 0x414(r1)
    mr r29, r6
    mtctr r0
lbl_fn_804B3C78_0000108C:
    stw r3, 0x4(r5)
    stwu r3, 0x8(r5)
    bdnz lbl_fn_804B3C78_0000108C
    li r0, 0x40
    addi r5, r1, 0x4
    li r3, 0x0
    mtctr r0
lbl_fn_804B3C78_000010A8:
    stw r3, 0x4(r5)
    stwu r3, 0x8(r5)
    bdnz lbl_fn_804B3C78_000010A8
    cmpwi r4, 0x0
    bne lbl_fn_804B3C78_000010E0
    lis r4, 0x89
    li r3, 0x0
    addi r4, r4, 0x547b
    bl fn_80116FC0
    mr r4, r3
    addi r3, r1, 0x208
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_804B3C78_00001134
lbl_fn_804B3C78_000010E0:
    cmpwi r4, 0x2
    bne lbl_fn_804B3C78_0000110C
    lis r4, 0x89
    li r3, 0x0
    addi r4, r4, 0x547c
    bl fn_80116FC0
    mr r4, r3
    addi r3, r1, 0x208
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_804B3C78_00001134
lbl_fn_804B3C78_0000110C:
    cmpwi r4, 0x1
    bne lbl_fn_804B3C78_00001134
    lis r4, 0x89
    li r3, 0x0
    addi r4, r4, 0x54d7
    bl fn_80116FC0
    mr r4, r3
    addi r3, r1, 0x208
    crclr 6
    bl fn_800DD3FC
lbl_fn_804B3C78_00001134:
    cmpwi r30, 0x0
    bne lbl_fn_804B3C78_00001160
    lis r4, 0x89
    li r3, 0x0
    addi r4, r4, 0x547b
    bl fn_80116FC0
    mr r4, r3
    addi r3, r1, 0x8
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_804B3C78_000011B4
lbl_fn_804B3C78_00001160:
    cmpwi r30, 0x2
    bne lbl_fn_804B3C78_0000118C
    lis r4, 0x89
    li r3, 0x0
    addi r4, r4, 0x547c
    bl fn_80116FC0
    mr r4, r3
    addi r3, r1, 0x8
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_804B3C78_000011B4
lbl_fn_804B3C78_0000118C:
    cmpwi r30, 0x1
    bne lbl_fn_804B3C78_000011B4
    lis r4, 0x89
    li r3, 0x0
    addi r4, r4, 0x54d7
    bl fn_80116FC0
    mr r4, r3
    addi r3, r1, 0x8
    crclr 6
    bl fn_800DD3FC
lbl_fn_804B3C78_000011B4:
    cmpwi r29, 0x0
    bne lbl_fn_804B3C78_00001240
    lwz r4, 0x88(r31)
    lis r30, lbl_80757B7C@ha
    addi r30, r30, lbl_80757B7C@l
    addi r3, r30, 0x3bc
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    addi r5, r1, 0x208
    bl fn_801FEE08
    lwz r4, 0x88(r31)
    addi r3, r30, 0x510
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    addi r5, r1, 0x8
    bl fn_801FEE08
    lwz r3, 0x88(r31)
    lfs f0, lbl_80887308
    stfs f0, 0x100(r3)
    lwz r30, 0x88(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804B3C78_000012C0
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887318
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
    b lbl_fn_804B3C78_000012C0
lbl_fn_804B3C78_00001240:
    lwz r4, 0x88(r31)
    lis r30, lbl_80757B7C@ha
    addi r30, r30, lbl_80757B7C@l
    addi r3, r30, 0x3bc
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    addi r5, r1, 0x8
    bl fn_801FEE08
    lwz r4, 0x88(r31)
    addi r3, r30, 0x510
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    addi r5, r1, 0x208
    bl fn_801FEE08
    lwz r3, 0x88(r31)
    lfs f0, lbl_80887340
    stfs f0, 0x100(r3)
    lwz r30, 0x88(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804B3C78_000012C0
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887330
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804B3C78_000012C0:
    lwz r0, 0x424(r1)
    lwz r31, 0x41c(r1)
    lwz r30, 0x418(r1)
    lwz r29, 0x414(r1)
    mtlr r0
    addi r1, r1, 0x420
    blr
}

asm void fn_804B3EFC(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x40
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    stfd f29, 0x40(r1)
    psq_st f29, 0x48(r1), 0, 0
    bl _savegpr_20
    lis r31, lbl_80757B7C@ha
    mr r24, r3
    slwi r0, r4, 2
    li r7, -0x1
    lis r23, lbl_80790B70@ha
    stw r7, 0xcc(r3)
    lfs f29, lbl_80887318
    mr r26, r5
    lfs f30, lbl_80887330
    mr r25, r4
    lfs f31, lbl_80887308
    mr r30, r24
    add r29, r3, r0
    add r28, r5, r6
    addi r31, r31, lbl_80757B7C@l
    addi r23, r23, lbl_80790B70@l
    li r27, 0x0
    b lbl_fn_804B3EFC_000014F8
lbl_fn_804B3EFC_00001350:
    cmpwi r25, 0x0
    blt lbl_fn_804B3EFC_00001454
    lwz r3, 0x25c(r29)
    mr r4, r26
    lwz r12, 0x8(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804B3EFC_00001454
    lwz r3, 0x25c(r29)
    mr r4, r26
    lwz r12, 0x8(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r22, r3
    lwz r3, 0x8c(r30)
    lwz r5, 0x0(r22)
    addi r4, r31, 0x3ae
    li r6, 0x0
    bl fn_801F4CB4
    lwz r4, 0x8c(r30)
    addi r3, r31, 0x51e
    addi r21, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r21
    addi r5, r22, 0x8
    bl fn_801FEE08
    lwz r3, lbl_8087F610
    lwz r4, 0x4(r22)
    bl fn_804FA8EC
    lwz r4, 0x8c(r30)
    mr r21, r3
    addi r3, r31, 0x52c
    addi r20, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r20
    mr r5, r21
    bl fn_801FEE08
    lwz r3, 0x8c(r30)
    addi r4, r31, 0x53a
    lwz r5, 0x4(r22)
    li r6, 0x0
    bl fn_801F4CB4
    lwz r21, 0x8c(r30)
    cmpwi r21, 0x0
    beq lbl_fn_804B3EFC_00001438
    mr r3, r21
    li r4, 0x0
    bl fn_800D246C
    stfs f29, 0x104(r21)
    lwz r0, 0xfc(r21)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r21)
lbl_fn_804B3EFC_00001438:
    lwz r3, lbl_8087F628
    lwz r4, 0x4c(r22)
    lwz r0, 0xe38(r3)
    cmpw r4, r0
    bne lbl_fn_804B3EFC_000014EC
    stw r27, 0xcc(r24)
    b lbl_fn_804B3EFC_000014EC
lbl_fn_804B3EFC_00001454:
    lwz r3, 0x8c(r30)
    addi r4, r31, 0x3ae
    addi r5, r26, 0x1
    li r6, 0x0
    bl fn_801F4CB4
    lwz r4, 0x8c(r30)
    addi r21, r23, 0x6
    addi r3, r31, 0x51e
    addi r20, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r20
    mr r5, r21
    bl fn_801FEE08
    lwz r4, 0x8c(r30)
    addi r3, r31, 0x52c
    addi r20, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r20
    mr r5, r21
    bl fn_801FEE08
    lwz r4, 0x8c(r30)
    addi r3, r31, 0x53a
    addi r20, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r20
    mr r5, r21
    bl fn_801FEE08
    lwz r21, 0x8c(r30)
    cmpwi r21, 0x0
    beq lbl_fn_804B3EFC_000014EC
    mr r3, r21
    li r4, 0x1
    bl fn_800D246C
    stfs f30, 0x104(r21)
    stfs f31, 0x100(r21)
lbl_fn_804B3EFC_000014EC:
    addi r26, r26, 0x1
    addi r30, r30, 0x4
    addi r27, r27, 0x1
lbl_fn_804B3EFC_000014F8:
    cmpw r26, r28
    blt lbl_fn_804B3EFC_00001350
    addi r11, r1, 0x40
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    psq_l f29, 0x48(r1), 0, 0
    lfd f29, 0x40(r1)
    bl _restgpr_20
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_804B4150(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    li r4, -0x1
    lwz r3, lbl_8087F610
    bl fn_804EA760
    cmpwi r31, 0x3
    bne lbl_fn_804B4150_000015B8
    lwz r3, lbl_8087F610
    li r0, 0x0
    li r4, 0x9
    li r5, 0x1
    stw r0, 0x540(r3)
    lwz r3, lbl_8087F610
    bl fn_804EA538
    lwz r3, lbl_8087F610
    li r4, 0x8
    bl fn_804EAA6C
    lwz r3, lbl_8087F610
    li r4, 0x8
    li r5, 0x1
    bl fn_804EA6B4
    lwz r3, lbl_8087F610
    li r4, 0x0
    li r5, 0x1
    bl fn_804EA814
    lwz r3, lbl_8087F610
    li r4, 0x12c
    li r5, 0x1
    bl fn_804EA60C
    b lbl_fn_804B4150_00001618
lbl_fn_804B4150_000015B8:
    cmpwi r31, 0x2
    bne lbl_fn_804B4150_00001618
    lwz r3, lbl_8087F610
    li r0, 0x2
    li r4, 0x5
    li r5, 0x1
    stw r0, 0x540(r3)
    lwz r3, lbl_8087F610
    bl fn_804EA538
    lwz r3, lbl_8087F610
    li r4, 0x8
    bl fn_804EAA6C
    lwz r3, lbl_8087F610
    li r4, 0x8
    li r5, 0x1
    bl fn_804EA6B4
    lwz r3, lbl_8087F610
    li r4, 0x1
    li r5, 0x1
    bl fn_804EA814
    lwz r3, lbl_8087F610
    li r4, -0x1
    li r5, 0x1
    bl fn_804EA60C
lbl_fn_804B4150_00001618:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804B424C(void)
{
    nofralloc
    cmpwi r4, 0x2
    li r0, 0x0
    bne lbl_fn_804B424C_00001650
    cmpwi r5, 0x4
    bne lbl_fn_804B424C_00001650
    lis r3, lbl_80790B70@ha
    addi r3, r3, lbl_80790B70@l
    addi r3, r3, 0x6
    blr
lbl_fn_804B424C_00001650:
    cmpwi r4, 0x9
    bne lbl_fn_804B424C_00001670
    cmpwi r5, 0x4
    bne lbl_fn_804B424C_00001670
    lis r3, lbl_80790B70@ha
    addi r3, r3, lbl_80790B70@l
    addi r3, r3, 0x6
    blr
lbl_fn_804B424C_00001670:
    cmpwi r4, 0xa
    bne lbl_fn_804B424C_00001690
    cmpwi r5, 0x2
    bne lbl_fn_804B424C_00001690
    lis r3, lbl_80790B70@ha
    addi r3, r3, lbl_80790B70@l
    addi r3, r3, 0x6
    blr
lbl_fn_804B424C_00001690:
    cmpwi r4, 0x2
    bne lbl_fn_804B424C_000016A0
    li r0, 0x0
    b lbl_fn_804B424C_000016BC
lbl_fn_804B424C_000016A0:
    cmpwi r4, 0x9
    bne lbl_fn_804B424C_000016B0
    li r0, 0x4
    b lbl_fn_804B424C_000016BC
lbl_fn_804B424C_000016B0:
    cmpwi r4, 0xa
    bne lbl_fn_804B424C_000016BC
    li r0, 0x8
lbl_fn_804B424C_000016BC:
    add r3, r0, r5
    lwz r4, lbl_8087F86C
    addi r0, r3, 0xa3
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r3, 0x4c(r3)
    cmpwi r3, 0x0
    bnelr
    la r3, lbl_808813D0
    blr
}

asm void fn_804B4304(void)
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
    beq lbl_fn_804B4304_0000176C
    lwz r0, lbl_8087F5A0
    cmpwi r0, 0x0
    beq lbl_fn_804B4304_0000171C
    li r0, 0x0
    stw r0, lbl_8087F5A0
lbl_fn_804B4304_0000171C:
    addic. r0, r3, 0xb0
    beq lbl_fn_804B4304_00001740
    lwz r3, 0xb4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804B4304_00001734
    bl fn_80084C24
lbl_fn_804B4304_00001734:
    li r0, 0x0
    stw r0, 0xb4(r30)
    stw r0, 0xb0(r30)
lbl_fn_804B4304_00001740:
    addic. r3, r30, 0x48
    beq lbl_fn_804B4304_00001750
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_804B4304_00001750:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_804B4304_0000176C
    mr r3, r30
    bl dtor_80084684
lbl_fn_804B4304_0000176C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804B43A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_804B43A8_000017C8
    addi r3, r31, 0x48
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_804B43A8_000017C8
    mr r3, r31
    bl fn_804B4400
    li r3, 0x1
    b lbl_fn_804B43A8_000017CC
lbl_fn_804B43A8_000017C8:
    li r3, 0x0
lbl_fn_804B43A8_000017CC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804B4400(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    stw r0, 0x664(r1)
    stmw r24, 0x640(r1)
    mr r31, r3
    li r25, 0x0
    addi r3, r3, 0x48
    bl fn_8047059C
    mr r28, r3
    addi r3, r31, 0x48
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x8(r1)
    mr r27, r3
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
    mr r4, r27
    mr r5, r28
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
    addi r3, r1, 0x8
    bl fn_8005B3CC
    lis r4, lbl_80757B7C@ha
    mr r27, r3
    mr r26, r31
    addi r30, r4, lbl_80757B7C@l
lbl_fn_804B4400_0000189C:
    mr r3, r27
    bl fn_80684600
    mr r27, r3
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    mr r28, r3
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    mr r29, r3
    addi r3, r1, 0x8
    bl fn_8005B3CC
    mr r24, r3
    addi r4, r30, 0x548
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804B4400_000018F8
    clrlslwi r0, r27, 24, 16
    rlwimi r0, r28, 8, 16, 23
    rlwimi r0, r29, 0, 24, 31
    stw r0, 0x50(r26)
    b lbl_fn_804B4400_0000194C
lbl_fn_804B4400_000018F8:
    mr r3, r24
    addi r4, r30, 0x54d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804B4400_00001920
    clrlslwi r0, r27, 24, 16
    rlwimi r0, r28, 8, 16, 23
    rlwimi r0, r29, 0, 24, 31
    stw r0, 0x54(r26)
    b lbl_fn_804B4400_0000194C
lbl_fn_804B4400_00001920:
    mr r3, r24
    addi r4, r30, 0x555
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804B4400_0000194C
    clrlslwi r0, r27, 24, 16
    addi r25, r25, 0x1
    rlwimi r0, r28, 8, 16, 23
    rlwimi r0, r29, 0, 24, 31
    stw r0, 0x58(r26)
    addi r26, r26, 0xc
lbl_fn_804B4400_0000194C:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r25, 0x8
    bge lbl_fn_804B4400_00001978
    addi r3, r1, 0x8
    bl fn_8005B3CC
    mr r27, r3
    addi r4, r30, 0x55b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804B4400_0000189C
lbl_fn_804B4400_00001978:
    addi r3, r1, 0x8
    li r26, 0x0
    li r30, 0x0
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, 0xb4(r31)
    mr r24, r3
    cmpwi r0, 0x0
    beq lbl_fn_804B4400_000019A4
    mr r3, r0
    bl fn_80084C24
lbl_fn_804B4400_000019A4:
    cmpwi r24, 0x0
    stw r24, 0xb0(r31)
    beq lbl_fn_804B4400_000019D0
    slwi r3, r24, 4
    li r4, 0x0
    la r5, lbl_8087E0F8
    la r6, lbl_8087E0F4
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0xb4(r31)
    b lbl_fn_804B4400_00001A34
lbl_fn_804B4400_000019D0:
    li r0, 0x0
    stw r0, 0xb4(r31)
    b lbl_fn_804B4400_00001A34
lbl_fn_804B4400_000019DC:
    lwz r0, 0xb4(r31)
    addi r3, r1, 0x8
    add r27, r0, r30
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x0(r27)
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x4(r27)
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x8(r27)
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    addi r26, r26, 0x1
    stw r3, 0xc(r27)
    cmpw r26, r24
    addi r30, r30, 0x10
    bge lbl_fn_804B4400_00001A44
lbl_fn_804B4400_00001A34:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_804B4400_000019DC
lbl_fn_804B4400_00001A44:
    lmw r24, 0x640(r1)
    lwz r0, 0x664(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}
