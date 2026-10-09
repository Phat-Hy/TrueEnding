#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_14(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80008210(void);
extern void fn_8004AE84(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006144C(void);
extern void fn_800616C0(void);
extern void fn_80061824(void);
extern void fn_8006EF48(void);
extern void fn_8006F2F0(void);
extern void fn_800844D8(void);
extern void fn_80084C24(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_801F4728(void);
extern void fn_801F4998(void);
extern void fn_801F4F84(void);
extern void fn_801FECE0(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473F88(void);
extern void fn_804A0F58(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_806826A0(void);
extern void fn_80686EA4(void);
extern void fn_80695D84(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_8075D528[];
extern u8 lbl_8075D538[];
extern u8 lbl_8075D550[];
extern u8 lbl_8075D5B0[];
extern u8 lbl_8075D94C[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80793940[];
extern u8 lbl_80793A58[];
extern u8 lbl_80793A74[];
extern u8 lbl_80793A90[];
extern u8 lbl_80793AB0[];
extern u8 lbl_80793AF0[];
extern u8 lbl_80793B0C[];

/* Small data declarations */
extern u32 lbl_8087D720;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F0A8;
extern u32 lbl_80887B80;
extern u32 lbl_80887BB4;
extern u32 lbl_80887BB8;
extern u32 lbl_80887BBC;
extern u32 lbl_80887BE0;
extern u32 lbl_80887C10;
extern u32 lbl_80887C38;
extern u32 lbl_80887C3C;
extern u32 lbl_80887C40;
extern u32 lbl_80887C44;
extern u32 lbl_80887C48;
extern u32 lbl_80887C4C;
extern u32 lbl_80887C50;
extern u32 lbl_80887C54;
extern u32 lbl_80887C58;
extern u32 lbl_80887C5C;
extern u32 lbl_80887C60;
extern u32 lbl_80887C64;
extern u32 lbl_80887C68;
extern u32 lbl_80887C6C;

/* Function declarations */
void fn_805363F8(void);
void fn_80536CAC(void);
void fn_8053770C(void);
void fn_80537784(void);
void fn_805377F4(void);

asm void fn_805363F8(void)
{
    nofralloc
    stwu r1, -0x390(r1)
    mflr r0
    stw r0, 0x394(r1)
    addi r11, r1, 0x300
    stfd f31, 0x380(r1)
    psq_st f31, 0x388(r1), 0, 0
    stfd f30, 0x370(r1)
    psq_st f30, 0x378(r1), 0, 0
    stfd f29, 0x360(r1)
    psq_st f29, 0x368(r1), 0, 0
    stfd f28, 0x350(r1)
    psq_st f28, 0x358(r1), 0, 0
    stfd f27, 0x340(r1)
    psq_st f27, 0x348(r1), 0, 0
    stfd f26, 0x330(r1)
    psq_st f26, 0x338(r1), 0, 0
    stfd f25, 0x320(r1)
    psq_st f25, 0x328(r1), 0, 0
    stfd f24, 0x310(r1)
    psq_st f24, 0x318(r1), 0, 0
    stfd f23, 0x300(r1)
    psq_st f23, 0x308(r1), 0, 0
    bl _savegpr_26
    lwz r31, lbl_8087EEB0
    lis r0, 0x4330
    stw r0, 0x2d8(r1)
    mr r30, r3
    cmpwi r31, 0x0
    stw r0, 0x2e0(r1)
    beq lbl_fn_805363F8_00000854
    lwz r0, 0xbb0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805363F8_000001A8
    lwz r0, 0x2ac(r3)
    cmpwi r0, 0x1
    bne lbl_fn_805363F8_000001A8
    lfs f4, lbl_80887C40
    mr r3, r31
    lwz r4, lbl_8087F0A8
    lis r5, 0xff00
    fmr f5, f4
    lfs f1, lbl_80887C3C
    lfs f2, lbl_80887BBC
    addi r4, r4, 0x1f4
    lfs f3, lbl_80887C10
    li r6, 0x1
    lfs f6, lbl_80887BB4
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lfs f4, lbl_80887C40
    lis r5, 0xff00
    lwz r4, lbl_8087F0A8
    li r6, 0x1
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80887C44
    addi r4, r4, 0x1f4
    lfs f2, lbl_80887C48
    li r7, 0x1
    lfs f3, lbl_80887C10
    li r8, 0x0
    lfs f6, lbl_80887BB4
    bl fn_800616C0
    lfs f4, lbl_80887C40
    lis r5, 0xff00
    lwz r4, lbl_8087F0A8
    li r6, 0x1
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80887C4C
    addi r4, r4, 0x1f4
    lfs f2, lbl_80887BBC
    li r7, 0x1
    lfs f3, lbl_80887C10
    li r8, 0x0
    lfs f6, lbl_80887BB4
    bl fn_800616C0
    lfs f4, lbl_80887C40
    lis r5, 0xff00
    lwz r4, lbl_8087F0A8
    li r6, 0x1
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80887C44
    addi r4, r4, 0x1f4
    lfs f2, lbl_80887C50
    li r7, 0x1
    lfs f3, lbl_80887C10
    li r8, 0x0
    lfs f6, lbl_80887BB4
    bl fn_800616C0
    lfs f4, lbl_80887C40
    li r5, -0x1
    lwz r4, lbl_8087F0A8
    li r6, 0x1
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80887C44
    addi r4, r4, 0x1f4
    lfs f2, lbl_80887BBC
    li r7, 0x1
    lfs f3, lbl_80887C10
    li r8, 0x0
    lfs f6, lbl_80887BB4
    bl fn_800616C0
lbl_fn_805363F8_000001A8:
    lwz r3, 0x434(r30)
    cmpwi r3, 0x0
    beq lbl_fn_805363F8_00000268
    lwz r6, lbl_8087EFA8
    lfs f3, 0x8(r3)
    lwz r5, 0x378(r6)
    lfs f8, 0x38c(r6)
    lfs f7, 0x390(r6)
    lfs f2, 0xc(r3)
    lfs f1, 0x10(r3)
    lfs f0, 0x14(r3)
    lwz r4, 0x0(r3)
    stfs f2, 0x58(r1)
    lfs f6, 0x394(r6)
    lfs f4, 0x20(r3)
    stfs f3, 0x54(r1)
    lwz r0, 0x58(r1)
    fsubs f5, f4, f6
    stw r4, 0x374(r6)
    lwz r3, 0x54(r1)
    stw r5, 0x378(r6)
    lfs f4, lbl_80887C54
    stw r3, 0x37c(r6)
    fmadds f4, f4, f5, f6
    stfs f1, 0x5c(r1)
    stw r0, 0x380(r6)
    lwz r3, 0x5c(r1)
    stfs f0, 0x60(r1)
    stw r3, 0x384(r6)
    lwz r0, 0x60(r1)
    stw r0, 0x388(r6)
    stfs f8, 0x38c(r6)
    stfs f7, 0x390(r6)
    stw r5, 0xb4(r1)
    stfs f8, 0xc8(r1)
    stfs f7, 0xcc(r1)
    stfs f4, 0xd0(r1)
    stfs f3, 0xb8(r1)
    stfs f2, 0xbc(r1)
    stfs f1, 0xc0(r1)
    stfs f0, 0xc4(r1)
    stw r4, 0xb0(r1)
    stw r4, 0x4c(r1)
    stw r5, 0x50(r1)
    stfs f8, 0x64(r1)
    stfs f7, 0x68(r1)
    stfs f4, 0x6c(r1)
    stfs f4, 0x394(r6)
lbl_fn_805363F8_00000268:
    lwz r0, 0x2dc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_805363F8_000002D8
    lwz r3, 0x258(r30)
    lfs f0, lbl_80887BB8
    lfs f1, 0x110(r3)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_805363F8_000002D8
    lwz r3, 0x2e0(r30)
    lwz r0, 0x2e8(r30)
    addi r3, r3, 0x1
    stw r3, 0x2e0(r30)
    cmpw r0, r3
    bgt lbl_fn_805363F8_000002B4
    li r0, 0x0
    stw r0, 0x2e0(r30)
lbl_fn_805363F8_000002B4:
    lwz r0, 0x2e0(r30)
    lwz r4, 0x2e4(r30)
    slwi r0, r0, 3
    lwz r3, 0x258(r30)
    add r5, r4, r0
    lfs f1, lbl_80887BB4
    lwzx r4, r4, r0
    lfs f2, 0x4(r5)
    bl fn_804A0F58
lbl_fn_805363F8_000002D8:
    lwz r3, lbl_8087EEE0
    lwz r27, 0x44(r3)
    cmpwi r27, 0x0
    beq lbl_fn_805363F8_000002F0
    lfs f25, lbl_80887BB4
    b lbl_fn_805363F8_000002F4
lbl_fn_805363F8_000002F0:
    lfs f25, 0x344(r30)
lbl_fn_805363F8_000002F4:
    lwz r4, 0x48(r30)
    lis r3, lbl_8075D5B0@ha
    addi r3, r3, lbl_8075D5B0@l
    addi r3, r3, 0x23b
    addi r28, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f25
    mr r4, r3
    mr r3, r28
    bl fn_801FECE0
    cmpwi r27, 0x0
    beq lbl_fn_805363F8_0000032C
    lfs f25, lbl_80887BB4
    b lbl_fn_805363F8_00000330
lbl_fn_805363F8_0000032C:
    lfs f25, 0x344(r30)
lbl_fn_805363F8_00000330:
    lwz r4, 0x4c(r30)
    lis r27, lbl_8075D5B0@ha
    addi r27, r27, lbl_8075D5B0@l
    addi r3, r27, 0x23b
    addi r28, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f25
    mr r4, r3
    mr r3, r28
    bl fn_801FECE0
    lwz r4, 0x50(r30)
    addi r3, r27, 0x23b
    addi r27, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887BB4
    mr r4, r3
    mr r3, r27
    bl fn_801FECE0
    lwz r0, 0x2ac(r30)
    lfs f31, lbl_80887C58
    cmpwi r0, 0x19
    lfs f23, lbl_80887C38
    lfs f30, lbl_80887C5C
    bne lbl_fn_805363F8_00000394
    lwz r0, 0x2b0(r30)
lbl_fn_805363F8_00000394:
    cmpwi r0, 0xe
    bne lbl_fn_805363F8_00000574
    fadds f2, f31, f23
    lfs f0, lbl_80887C38
    lis r29, lbl_80793A90@ha
    fmr f1, f31
    addi r29, r29, lbl_80793A90@l
    lwz r3, lbl_8087EEC8
    fmuls f29, f0, f2
    lfs f2, lbl_80887BB4
    mr r4, r29
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r3, lbl_8087EEE0
    lis r28, lbl_8075D550@ha
    lfs f6, lbl_80887BB4
    lis r27, 0x9700
    lwz r0, 0x40(r3)
    fmr f3, f30
    lfs f9, lbl_80887BE0
    fmr f4, f31
    xoris r0, r0, 0x8000
    stw r0, 0x2dc(r1)
    lwz r3, 0x3c(r3)
    lfd f10, lbl_8075D550@l(r28)
    fmuls f1, f9, f1
    xoris r0, r3, 0x8000
    lfd f0, 0x2d8(r1)
    stw r0, 0x2e4(r1)
    fmr f5, f31
    fsubs f0, f0, f10
    lfd f2, 0x2e0(r1)
    fmr f7, f6
    fmr f8, f6
    mr r3, r31
    fsubs f10, f2, f10
    fsubs f0, f0, f29
    mr r4, r29
    subi r5, r27, 0x56a
    fmsubs f1, f9, f10, f1
    li r6, 0x1
    fmuls f2, f9, f0
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    fadds f28, f31, f23
    lis r29, lbl_80793940@ha
    lfd f26, lbl_8075D550@l(r28)
    addi r29, r29, lbl_80793940@l
    lfs f27, lbl_80887BE0
    li r28, 0x0
lbl_fn_805363F8_0000046C:
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0xd8
    lwz r5, 0x0(r29)
    li r6, 0x100
    bl fn_8006F2F0
    fmr f1, f31
    lwz r3, lbl_8087EEC8
    lfs f2, lbl_80887BB4
    addi r4, r1, 0xd8
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r5, lbl_8087EEE0
    addi r0, r28, 0x1
    xoris r3, r0, 0x8000
    stw r3, 0x2dc(r1)
    lwz r4, 0x3c(r5)
    fmuls f2, f27, f1
    lwz r0, 0x40(r5)
    fmr f25, f1
    xoris r4, r4, 0x8000
    stw r4, 0x2e4(r1)
    lfs f6, lbl_80887BB4
    lfd f0, 0x2e0(r1)
    xoris r0, r0, 0x8000
    lfd f1, 0x2d8(r1)
    fmr f3, f30
    stw r0, 0x2e4(r1)
    fsubs f7, f0, f26
    fmr f4, f31
    mr r3, r31
    lfd f0, 0x2e0(r1)
    fmsubs f24, f27, f7, f2
    addi r4, r1, 0xd8
    fsubs f0, f0, f26
    fsubs f2, f1, f26
    subi r5, r27, 0x56a
    fmr f5, f31
    fsubs f0, f0, f29
    li r6, 0x1
    fmr f1, f24
    fmr f7, f6
    li r7, 0x1
    fmuls f0, f27, f0
    fmr f8, f6
    li r8, 0x0
    li r9, 0x0
    fmadds f23, f2, f28, f0
    lis r10, 0xff00
    fmr f2, f23
    bl fn_80061824
    lwz r0, 0x2b8(r30)
    cmpw r28, r0
    bne lbl_fn_805363F8_00000564
    fadds f2, f23, f31
    mr r3, r31
    fmr f1, f24
    subi r4, r27, 0x56a
    fmr f5, f30
    fmr f4, f2
    fadds f3, f24, f25
    bl fn_8006144C
lbl_fn_805363F8_00000564:
    addi r28, r28, 0x1
    addi r29, r29, 0x8
    cmpwi r28, 0x2
    blt lbl_fn_805363F8_0000046C
lbl_fn_805363F8_00000574:
    lwz r0, 0x2c4(r30)
    lis r4, lbl_8075D528@ha
    addi r4, r4, lbl_8075D528@l
    li r31, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_805363F8_00000590
    la r4, lbl_80887B80
lbl_fn_805363F8_00000590:
    cmpwi r0, 0x0
    bne lbl_fn_805363F8_000005C0
    lwz r3, lbl_8087F0A8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805363F8_000005C0
    lwz r0, 0x198(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805363F8_000005C0
    lis r4, lbl_8075D538@ha
    li r31, 0x0
    addi r4, r4, lbl_8075D538@l
lbl_fn_805363F8_000005C0:
    lwz r0, 0x2bc(r30)
    lis r28, lbl_8075D5B0@ha
    addi r28, r28, lbl_8075D5B0@l
    addi r3, r1, 0x70
    slwi r0, r0, 2
    lwzx r26, r4, r0
    addi r4, r28, 0x244
    mr r5, r26
    crclr 6
    bl sprintf
    lfs f0, lbl_80887BB4
    li r27, 0x0
    stfs f0, 0x38(r1)
    addi r3, r1, 0x70
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f0, 0x8(r1)
    stw r27, 0xc(r1)
    lwz r29, 0x5c(r30)
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    addi r5, r1, 0x38
    addi r6, r1, 0x10
    addi r7, r1, 0x8
    addi r8, r1, 0x20
    bl fn_801F4F84
    lwz r3, 0x60(r30)
    addi r4, r28, 0x254
    addi r5, r1, 0x38
    bl fn_801F4728
    lfs f2, 0x10(r1)
    lfs f0, lbl_80887BB8
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_805363F8_00000660
    li r27, 0xff
    b lbl_fn_805363F8_00000688
lbl_fn_805363F8_00000660:
    lfs f0, lbl_80887BB4
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_805363F8_00000674
    b lbl_fn_805363F8_00000688
lbl_fn_805363F8_00000674:
    lfs f1, lbl_80887C60
    lfs f0, lbl_80887BE0
    fmadds f1, f1, f2, f0
    bl fn_80695D84
    mr r27, r3
lbl_fn_805363F8_00000688:
    lfs f2, 0x14(r1)
    lfs f0, lbl_80887BB8
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_805363F8_000006A4
    li r29, 0xff
    b lbl_fn_805363F8_000006D0
lbl_fn_805363F8_000006A4:
    lfs f0, lbl_80887BB4
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_805363F8_000006BC
    li r3, 0x0
    b lbl_fn_805363F8_000006CC
lbl_fn_805363F8_000006BC:
    lfs f1, lbl_80887C60
    lfs f0, lbl_80887BE0
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_805363F8_000006CC:
    mr r29, r3
lbl_fn_805363F8_000006D0:
    lfs f2, 0x18(r1)
    lfs f0, lbl_80887BB8
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_805363F8_000006EC
    li r28, 0xff
    b lbl_fn_805363F8_00000718
lbl_fn_805363F8_000006EC:
    lfs f0, lbl_80887BB4
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_805363F8_00000704
    li r3, 0x0
    b lbl_fn_805363F8_00000714
lbl_fn_805363F8_00000704:
    lfs f1, lbl_80887C60
    lfs f0, lbl_80887BE0
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_805363F8_00000714:
    mr r28, r3
lbl_fn_805363F8_00000718:
    lfs f2, 0x1c(r1)
    lfs f0, lbl_80887BB8
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_805363F8_00000734
    li r3, 0xff
    b lbl_fn_805363F8_0000075C
lbl_fn_805363F8_00000734:
    lfs f0, lbl_80887BB4
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_805363F8_0000074C
    li r3, 0x0
    b lbl_fn_805363F8_0000075C
lbl_fn_805363F8_0000074C:
    lfs f1, lbl_80887C60
    lfs f0, lbl_80887BE0
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_805363F8_0000075C:
    slwi r5, r3, 24
    slwi r3, r27, 16
    or r5, r5, r3
    slwi r0, r29, 8
    lis r4, lbl_8075D5B0@ha
    lwz r3, 0x60(r30)
    or r0, r0, r5
    addi r29, r4, lbl_8075D5B0@l
    or r5, r28, r0
    addi r4, r29, 0x25d
    bl fn_801F4998
    li r28, 0x0
lbl_fn_805363F8_0000078C:
    mr r5, r28
    addi r3, r1, 0x70
    addi r4, r29, 0x265
    crclr 6
    bl sprintf
    lwz r3, 0x5c(r30)
    cmpw r28, r26
    addi r27, r3, 0x58
    bne lbl_fn_805363F8_000007B8
    lfs f25, lbl_80887BB8
    b lbl_fn_805363F8_000007BC
lbl_fn_805363F8_000007B8:
    lfs f25, lbl_80887BB4
lbl_fn_805363F8_000007BC:
    addi r3, r1, 0x70
    bl fn_800DC6B4
    fmr f1, f25
    mr r4, r3
    mr r3, r27
    bl fn_801FECE0
    addi r28, r28, 0x1
    cmpwi r28, 0x3
    blt lbl_fn_805363F8_0000078C
    lwz r0, 0x2c4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_805363F8_000007F4
    lfs f25, lbl_80887BB8
    b lbl_fn_805363F8_000007F8
lbl_fn_805363F8_000007F4:
    lfs f25, lbl_80887BB4
lbl_fn_805363F8_000007F8:
    lwz r4, 0x5c(r30)
    lis r29, lbl_8075D5B0@ha
    addi r29, r29, lbl_8075D5B0@l
    addi r3, r29, 0x270
    addi r27, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f25
    mr r4, r3
    mr r3, r27
    bl fn_801FECE0
    lwz r4, 0x5c(r30)
    cmpwi r31, 0x0
    addi r3, r29, 0x27a
    addi r27, r4, 0x58
    beq lbl_fn_805363F8_0000083C
    lfs f25, lbl_80887BB8
    b lbl_fn_805363F8_00000840
lbl_fn_805363F8_0000083C:
    lfs f25, lbl_80887BB4
lbl_fn_805363F8_00000840:
    bl fn_800DC6B4
    fmr f1, f25
    mr r4, r3
    mr r3, r27
    bl fn_801FECE0
lbl_fn_805363F8_00000854:
    addi r11, r1, 0x300
    psq_l f31, 0x388(r1), 0, 0
    lfd f31, 0x380(r1)
    psq_l f30, 0x378(r1), 0, 0
    lfd f30, 0x370(r1)
    psq_l f29, 0x368(r1), 0, 0
    lfd f29, 0x360(r1)
    psq_l f28, 0x358(r1), 0, 0
    lfd f28, 0x350(r1)
    psq_l f27, 0x348(r1), 0, 0
    lfd f27, 0x340(r1)
    psq_l f26, 0x338(r1), 0, 0
    lfd f26, 0x330(r1)
    psq_l f25, 0x328(r1), 0, 0
    lfd f25, 0x320(r1)
    psq_l f24, 0x318(r1), 0, 0
    lfd f24, 0x310(r1)
    psq_l f23, 0x308(r1), 0, 0
    lfd f23, 0x300(r1)
    bl _restgpr_26
    lwz r0, 0x394(r1)
    mtlr r0
    addi r1, r1, 0x390
    blr
}

asm void fn_80536CAC(void)
{
    nofralloc
    stwu r1, -0x6e0(r1)
    mflr r0
    stw r0, 0x6e4(r1)
    addi r11, r1, 0x6d0
    stfd f31, 0x6d0(r1)
    psq_st f31, 0x6d8(r1), 0, 0
    bl _savegpr_14
    lwz r0, 0x2d4(r3)
    lis r4, lbl_807772D0@ha
    addi r4, r4, lbl_807772D0@l
    li r21, 0x0
    subf r0, r0, r0
    stw r0, 0x2d4(r3)
    mr r15, r3
    addi r3, r1, 0x60
    stw r4, 0x50(r1)
    li r4, 0x0
    li r5, 0x400
    stw r21, 0x54(r1)
    stw r21, 0x58(r1)
    stw r21, 0x5c(r1)
    stw r21, 0x680(r1)
    bl memset
    addi r3, r1, 0x660
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x50
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x50(r1)
    la r4, lbl_8087D720
    bl fn_8005B6E8
    addi r3, r15, 0x438
    bl fn_8047059C
    mr r14, r3
    addi r3, r15, 0x438
    bl fn_80470580
    lwz r12, 0x50(r1)
    mr r4, r3
    mr r5, r14
    addi r3, r1, 0x50
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, __files@ha
    lis r4, lbl_8075D5B0@ha
    lfs f31, lbl_80887C64
    addi r22, r4, lbl_8075D5B0@l
    addi r27, r3, __files@l
    addi r17, r1, 0x28
    addi r18, r1, 0x3c
    lis r29, 0xcccd
    lis r26, 0x1000
    lis r28, 0x555
    lis r30, 0xaab
    lis r31, 0x2000
    lis r14, 0x1555
lbl_fn_80536CAC_0000099C:
    addi r3, r1, 0x50
    bl fn_8005B3CC
    mr r16, r3
    addi r4, r22, 0x286
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80536CAC_000009EC
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x440(r15)
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x444(r15)
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x448(r15)
    b lbl_fn_80536CAC_000012DC
lbl_fn_80536CAC_000009EC:
    mr r3, r16
    addi r4, r22, 0x28f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80536CAC_00000A34
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x44c(r15)
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x450(r15)
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x454(r15)
    b lbl_fn_80536CAC_000012DC
lbl_fn_80536CAC_00000A34:
    mr r3, r16
    addi r4, r22, 0x298
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80536CAC_00000A60
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    fmuls f0, f31, f1
    stfs f0, 0x458(r15)
    b lbl_fn_80536CAC_000012DC
lbl_fn_80536CAC_00000A60:
    mr r3, r16
    addi r4, r22, 0x2a1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80536CAC_00000A88
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x45c(r15)
    b lbl_fn_80536CAC_000012DC
lbl_fn_80536CAC_00000A88:
    mr r3, r16
    addi r4, r22, 0x2af
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80536CAC_00000AD0
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x460(r15)
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x464(r15)
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x468(r15)
    b lbl_fn_80536CAC_000012DC
lbl_fn_80536CAC_00000AD0:
    mr r3, r16
    addi r4, r22, 0x2b6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80536CAC_00000B18
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x46c(r15)
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x470(r15)
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x474(r15)
    b lbl_fn_80536CAC_000012DC
lbl_fn_80536CAC_00000B18:
    mr r3, r16
    addi r4, r22, 0x2bd
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80536CAC_00000B44
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    fmuls f0, f31, f1
    stfs f0, 0x478(r15)
    b lbl_fn_80536CAC_000012DC
lbl_fn_80536CAC_00000B44:
    mr r3, r16
    addi r4, r22, 0x2c4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80536CAC_00000B6C
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x47c(r15)
    b lbl_fn_80536CAC_000012DC
lbl_fn_80536CAC_00000B6C:
    mr r3, r16
    addi r4, r22, 0x2d0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80536CAC_00000BB4
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x480(r15)
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x484(r15)
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x488(r15)
    b lbl_fn_80536CAC_000012DC
lbl_fn_80536CAC_00000BB4:
    mr r3, r16
    addi r4, r22, 0x2d8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80536CAC_00000BFC
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x48c(r15)
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x490(r15)
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x494(r15)
    b lbl_fn_80536CAC_000012DC
lbl_fn_80536CAC_00000BFC:
    mr r3, r16
    addi r4, r22, 0x2e0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80536CAC_00000C28
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    fmuls f0, f31, f1
    stfs f0, 0x498(r15)
    b lbl_fn_80536CAC_000012DC
lbl_fn_80536CAC_00000C28:
    mr r3, r16
    addi r4, r22, 0x2e8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80536CAC_00000C50
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x49c(r15)
    b lbl_fn_80536CAC_000012DC
lbl_fn_80536CAC_00000C50:
    mr r3, r16
    addi r4, r22, 0x2f4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80536CAC_00000C8C
    addi r3, r1, 0x50
    bl fn_8005B3CC
    addi r4, r22, 0x2f8
    bl fn_806826A0
    mr r5, r3
    addi r3, r15, 0x4a0
    addi r4, r22, 0x2fa
    crclr 6
    bl sprintf
    b lbl_fn_80536CAC_000012DC
lbl_fn_80536CAC_00000C8C:
    mr r3, r16
    addi r4, r22, 0x306
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80536CAC_00000CD0
    addi r3, r1, 0x50
    bl fn_8005B3CC
    lwz r4, lbl_8087F0A8
    lwz r0, 0x15c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80536CAC_00000CBC
    addi r3, r22, 0x30a
lbl_fn_80536CAC_00000CBC:
    mr r4, r3
    addi r3, r15, 0x27c
    li r5, 0x0
    bl fn_8004AE84
    b lbl_fn_80536CAC_000012DC
lbl_fn_80536CAC_00000CD0:
    mr r3, r16
    addi r4, r22, 0x31b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80536CAC_00000D20
    addi r3, r1, 0x50
    bl fn_8005B3CC
    addi r4, r22, 0x2f8
    bl fn_806826A0
    lwz r4, lbl_8087F0A8
    lwz r0, 0x15c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80536CAC_00000D08
    addi r3, r22, 0x31e
lbl_fn_80536CAC_00000D08:
    mr r5, r3
    addi r3, r15, 0x5a0
    addi r4, r22, 0x330
    crclr 6
    bl sprintf
    b lbl_fn_80536CAC_000012DC
lbl_fn_80536CAC_00000D20:
    mr r3, r16
    addi r4, r22, 0x341
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80536CAC_00000D64
    addi r3, r1, 0x50
    bl fn_8005B3CC
    addi r4, r22, 0x34b
    bl fn_80682428
    cntlzw r0, r3
    addi r3, r1, 0x50
    srwi r0, r0, 5
    stw r0, 0x410(r15)
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x430(r15)
    b lbl_fn_80536CAC_000012DC
lbl_fn_80536CAC_00000D64:
    mr r3, r16
    addi r4, r22, 0x350
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80536CAC_0000104C
    addi r3, r1, 0x50
    bl fn_8005B3CC
    mr r19, r3
    addi r4, r22, 0x358
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80536CAC_000012DC
    addi r3, r19, 0x2
    bl fn_800DC12C
    mulli r16, r3, 0x3e8
    addi r3, r19, 0x6
    bl fn_800DC12C
    add r16, r3, r16
    addi r3, r19, 0xa
    bl fn_800DC12C
    mr r23, r3
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r24, r3
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC12C
    lwz r5, 0x2d4(r15)
    mr r25, r3
    lwz r4, 0x2d8(r15)
    cmplw r5, r4
    bge lbl_fn_80536CAC_00000E14
    addi r5, r5, 0x1
    lwz r4, 0x2d0(r15)
    subi r0, r5, 0x1
    stw r5, 0x2d4(r15)
    slwi r0, r0, 4
    stwux r16, r4, r0
    stw r23, 0x4(r4)
    stw r24, 0x8(r4)
    stw r3, 0xc(r4)
    b lbl_fn_80536CAC_000012DC
lbl_fn_80536CAC_00000E14:
    subi r0, r26, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_80536CAC_00000E38
    addi r4, r22, 0x35b
    addi r3, r27, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80536CAC_00000E38:
    lwz r3, 0x2d4(r15)
    addi r4, r15, 0x2d8
    lwz r19, 0x2d8(r15)
    subi r0, r26, 0x1
    addi r3, r3, 0x1
    stw r21, 0x3c(r1)
    subf r3, r19, r3
    subf r0, r19, r0
    cmplw r3, r0
    stw r21, 0x40(r1)
    stw r21, 0x44(r1)
    stw r4, 0x48(r1)
    stw r21, 0x4c(r1)
    stw r3, 0x1c(r1)
    ble lbl_fn_80536CAC_00000E88
    addi r4, r22, 0x35b
    addi r3, r27, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80536CAC_00000E88:
    addi r0, r28, 0x5555
    cmplw r19, r0
    bge lbl_fn_80536CAC_00000ED0
    addi r4, r19, 0x1
    subi r5, r29, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x1c(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x14
    srwi r4, r4, 2
    stw r4, 0x14(r1)
    cmplw r4, r0
    bge lbl_fn_80536CAC_00000EC4
    addi r3, r1, 0x1c
lbl_fn_80536CAC_00000EC4:
    lwz r0, 0x0(r3)
    add r20, r19, r0
    b lbl_fn_80536CAC_00000F0C
lbl_fn_80536CAC_00000ED0:
    subi r0, r30, 0x5556
    cmplw r19, r0
    bge lbl_fn_80536CAC_00000F08
    addi r3, r19, 0x1
    lwz r0, 0x1c(r1)
    srwi r3, r3, 1
    stw r3, 0x18(r1)
    cmplw r3, r0
    addi r3, r1, 0x18
    bge lbl_fn_80536CAC_00000EFC
    addi r3, r1, 0x1c
lbl_fn_80536CAC_00000EFC:
    lwz r0, 0x0(r3)
    add r20, r19, r0
    b lbl_fn_80536CAC_00000F0C
lbl_fn_80536CAC_00000F08:
    subi r20, r26, 0x1
lbl_fn_80536CAC_00000F0C:
    subi r0, r26, 0x1
    cmplw r20, r0
    ble lbl_fn_80536CAC_00000F2C
    addi r4, r22, 0x35b
    addi r3, r27, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80536CAC_00000F2C:
    slwi r3, r20, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r19, r3
    bne lbl_fn_80536CAC_00000F58
    lis r4, lbl_80793A58@ha
    addi r3, r27, 0xa0
    addi r4, r4, lbl_80793A58@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80536CAC_00000F58:
    lwz r5, 0x2d4(r15)
    lwz r4, 0x40(r1)
    slwi r0, r5, 4
    stw r19, 0x3c(r1)
    add r3, r19, r0
    slwi r0, r4, 4
    addi r4, r4, 0x1
    stwx r16, r3, r0
    add r6, r0, r3
    stw r23, 0x4(r6)
    stw r24, 0x8(r6)
    stw r25, 0xc(r6)
    lwz r0, 0x2d4(r15)
    lwz r7, 0x2d0(r15)
    slwi r0, r0, 4
    stw r20, 0x44(r1)
    add r6, r7, r0
    addi r0, r6, 0xf
    stw r5, 0x4c(r1)
    subf r0, r7, r0
    srwi r0, r0, 4
    stw r4, 0x40(r1)
    mtctr r0
    cmplw r6, r7
    ble lbl_fn_80536CAC_00001004
lbl_fn_80536CAC_00000FBC:
    subic. r3, r3, 0x10
    subi r6, r6, 0x10
    beq lbl_fn_80536CAC_00000FE8
    lwz r0, 0x4(r6)
    lwz r4, 0x0(r6)
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, 0xc(r6)
    lwz r4, 0x8(r6)
    stw r4, 0x8(r3)
    stw r0, 0xc(r3)
lbl_fn_80536CAC_00000FE8:
    lwz r5, 0x4c(r1)
    lwz r4, 0x40(r1)
    subi r0, r5, 0x1
    stw r0, 0x4c(r1)
    addi r0, r4, 0x1
    stw r0, 0x40(r1)
    bdnz lbl_fn_80536CAC_00000FBC
lbl_fn_80536CAC_00001004:
    lwz r0, 0x40(r1)
    cmpwi r18, 0x0
    lwz r6, 0x2d8(r15)
    lwz r5, 0x44(r1)
    lwz r3, 0x2d0(r15)
    lwz r4, 0x3c(r1)
    stw r5, 0x2d8(r15)
    stw r6, 0x44(r1)
    stw r4, 0x2d0(r15)
    stw r3, 0x3c(r1)
    stw r0, 0x2d4(r15)
    stw r21, 0x40(r1)
    beq lbl_fn_80536CAC_000012DC
    cmpwi r3, 0x0
    beq lbl_fn_80536CAC_000012DC
    stw r21, 0x40(r1)
    bl dtor_80084684
    b lbl_fn_80536CAC_000012DC
lbl_fn_80536CAC_0000104C:
    mr r3, r16
    addi r4, r22, 0x36f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80536CAC_000012DC
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x20(r1)
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r4, 0x2e8(r15)
    lwz r3, 0x2ec(r15)
    stfs f1, 0x24(r1)
    cmplw r4, r3
    bge lbl_fn_80536CAC_000010B8
    addi r3, r4, 0x1
    lwz r4, 0x2e4(r15)
    subi r0, r3, 0x1
    stw r3, 0x2e8(r15)
    slwi r3, r0, 3
    lwz r0, 0x20(r1)
    frsp f0, f1
    stwux r0, r3, r4
    stfs f0, 0x4(r3)
    b lbl_fn_80536CAC_000012DC
lbl_fn_80536CAC_000010B8:
    subi r0, r31, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_80536CAC_000010DC
    addi r4, r22, 0x35b
    addi r3, r27, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80536CAC_000010DC:
    lwz r3, 0x2e8(r15)
    addi r4, r15, 0x2ec
    lwz r16, 0x2ec(r15)
    subi r0, r31, 0x1
    addi r3, r3, 0x1
    stw r21, 0x28(r1)
    subf r3, r16, r3
    subf r0, r16, r0
    cmplw r3, r0
    stw r21, 0x2c(r1)
    stw r21, 0x30(r1)
    stw r4, 0x34(r1)
    stw r21, 0x38(r1)
    stw r3, 0x10(r1)
    ble lbl_fn_80536CAC_0000112C
    addi r4, r22, 0x35b
    addi r3, r27, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80536CAC_0000112C:
    subi r0, r30, 0x5556
    cmplw r16, r0
    bge lbl_fn_80536CAC_00001174
    addi r4, r16, 0x1
    subi r5, r29, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x10(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_80536CAC_00001168
    addi r3, r1, 0x10
lbl_fn_80536CAC_00001168:
    lwz r0, 0x0(r3)
    add r16, r16, r0
    b lbl_fn_80536CAC_000011B0
lbl_fn_80536CAC_00001174:
    addi r0, r14, 0x5554
    cmplw r16, r0
    bge lbl_fn_80536CAC_000011AC
    addi r3, r16, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80536CAC_000011A0
    addi r3, r1, 0x10
lbl_fn_80536CAC_000011A0:
    lwz r0, 0x0(r3)
    add r16, r16, r0
    b lbl_fn_80536CAC_000011B0
lbl_fn_80536CAC_000011AC:
    subi r16, r31, 0x1
lbl_fn_80536CAC_000011B0:
    subi r0, r31, 0x1
    cmplw r16, r0
    ble lbl_fn_80536CAC_000011D0
    addi r4, r22, 0x35b
    addi r3, r27, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80536CAC_000011D0:
    slwi r3, r16, 3
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r19, r3
    bne lbl_fn_80536CAC_000011FC
    lis r4, lbl_80793A74@ha
    addi r3, r27, 0xa0
    addi r4, r4, lbl_80793A74@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80536CAC_000011FC:
    lwz r6, 0x2e8(r15)
    lwz r5, 0x2c(r1)
    slwi r3, r6, 3
    lwz r0, 0x20(r1)
    add r3, r19, r3
    slwi r4, r5, 3
    add r7, r4, r3
    lfs f0, 0x24(r1)
    stw r0, 0x0(r7)
    addi r4, r5, 0x1
    stfs f0, 0x4(r7)
    lwz r0, 0x2e8(r15)
    lwz r5, 0x2e4(r15)
    slwi r0, r0, 3
    stw r19, 0x28(r1)
    add r7, r5, r0
    addi r0, r7, 0x7
    stw r16, 0x30(r1)
    subf r0, r5, r0
    srwi r0, r0, 3
    stw r6, 0x38(r1)
    stw r4, 0x2c(r1)
    mtctr r0
    cmplw r7, r5
    ble lbl_fn_80536CAC_00001298
lbl_fn_80536CAC_00001260:
    subic. r3, r3, 0x8
    subi r7, r7, 0x8
    beq lbl_fn_80536CAC_0000127C
    lwz r0, 0x4(r7)
    lwz r4, 0x0(r7)
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
lbl_fn_80536CAC_0000127C:
    lwz r5, 0x38(r1)
    lwz r4, 0x2c(r1)
    subi r0, r5, 0x1
    stw r0, 0x38(r1)
    addi r0, r4, 0x1
    stw r0, 0x2c(r1)
    bdnz lbl_fn_80536CAC_00001260
lbl_fn_80536CAC_00001298:
    lwz r0, 0x2c(r1)
    cmpwi r17, 0x0
    lwz r6, 0x2ec(r15)
    lwz r5, 0x30(r1)
    lwz r3, 0x2e4(r15)
    lwz r4, 0x28(r1)
    stw r5, 0x2ec(r15)
    stw r6, 0x30(r1)
    stw r4, 0x2e4(r15)
    stw r3, 0x28(r1)
    stw r0, 0x2e8(r15)
    stw r21, 0x2c(r1)
    beq lbl_fn_80536CAC_000012DC
    cmpwi r3, 0x0
    beq lbl_fn_80536CAC_000012DC
    stw r21, 0x2c(r1)
    bl dtor_80084684
lbl_fn_80536CAC_000012DC:
    addi r3, r1, 0x50
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80536CAC_0000099C
    addi r3, r15, 0x438
    bl fn_80473F88
    addi r11, r1, 0x6d0
    psq_l f31, 0x6d8(r1), 0, 0
    lfd f31, 0x6d0(r1)
    bl _restgpr_14
    lwz r0, 0x6e4(r1)
    mtlr r0
    addi r1, r1, 0x6e0
    blr
}

asm void fn_8053770C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_80793AB0@ha
    stw r0, 0x14(r1)
    li r0, 0x0
    addi r6, r6, lbl_80793AB0@l
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x4(r3)
    stw r6, 0x0(r3)
    stw r4, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    stw r0, 0x28(r3)
    stw r0, 0x2c(r3)
    stw r0, 0x30(r3)
    stw r0, 0x34(r3)
    lwz r4, 0xc(r4)
    bl fn_805377F4
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80537784(void)
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
    beq lbl_fn_80537784_000013E0
    addic. r0, r3, 0x4
    beq lbl_fn_80537784_000013D0
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80537784_000013D0
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_80537784_000013D0:
    cmpwi r31, 0x0
    ble lbl_fn_80537784_000013E0
    mr r3, r30
    bl dtor_80084684
lbl_fn_80537784_000013E0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805377F4(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_27
    lwz r6, 0x30(r3)
    li r31, 0x0
    lwz r0, 0x24(r3)
    mr r27, r4
    subf r6, r6, r6
    stw r31, 0xc(r3)
    subf r0, r0, r0
    mr r28, r3
    stw r31, 0x10(r3)
    addi r4, r1, 0x2c
    stw r31, 0x14(r3)
    stw r6, 0x30(r3)
    stw r0, 0x24(r3)
    stw r31, 0x38(r3)
    mr r3, r27
    bl fn_80008210
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_805377F4_00001D94
    lwz r0, 0x2c(r1)
    cmpwi r0, 0x0
    bne lbl_fn_805377F4_0000146C
    b lbl_fn_805377F4_00001D94
lbl_fn_805377F4_0000146C:
    stw r27, 0xc(r28)
    lwz r4, 0x30(r28)
    lwz r0, 0x2c(r1)
    cmplw r0, r4
    ble lbl_fn_805377F4_000017E0
    lwz r5, 0x34(r28)
    subf r30, r4, r0
    cmplw r30, r5
    bgt lbl_fn_805377F4_0000149C
    subf r0, r30, r5
    cmplw r4, r0
    ble lbl_fn_805377F4_00001508
lbl_fn_805377F4_0000149C:
    lwz r4, 0x30(r28)
    lis r3, 0x2000
    lwz r31, 0x34(r28)
    subi r0, r3, 0x1
    add r3, r4, r30
    subf r3, r5, r3
    subf r0, r31, r0
    cmplw r3, r0
    ble lbl_fn_805377F4_000014E0
    lis r3, __files@ha
    lis r4, lbl_8075D94C@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8075D94C@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805377F4_000014E0:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_805377F4_000014F4
    b lbl_fn_805377F4_00001558
lbl_fn_805377F4_000014F4:
    lis r3, 0x1555
    addi r0, r3, 0x5554
    cmplw r31, r0
    bge lbl_fn_805377F4_00001558
    b lbl_fn_805377F4_00001558
lbl_fn_805377F4_00001508:
    cmpwi r30, 0x0
    lwz r3, 0x2c(r28)
    slwi r0, r4, 3
    add r5, r3, r0
    beq lbl_fn_805377F4_000017F0
    li r4, 0x28
    stw r4, 0x38(r1)
    stw r31, 0x3c(r1)
    mtctr r30
    beq lbl_fn_805377F4_000017F0
lbl_fn_805377F4_00001530:
    cmpwi r5, 0x0
    beq lbl_fn_805377F4_00001540
    stw r4, 0x0(r5)
    stw r31, 0x4(r5)
lbl_fn_805377F4_00001540:
    lwz r3, 0x30(r28)
    addi r5, r5, 0x8
    addi r0, r3, 0x1
    stw r0, 0x30(r28)
    bdnz lbl_fn_805377F4_00001530
    b lbl_fn_805377F4_000017F0
lbl_fn_805377F4_00001558:
    li r5, 0x0
    addi r4, r28, 0x34
    lis r3, 0x2000
    stw r5, 0x78(r1)
    subi r0, r3, 0x1
    stw r5, 0x7c(r1)
    stw r5, 0x80(r1)
    stw r4, 0x84(r1)
    stw r5, 0x88(r1)
    lwz r3, 0x30(r28)
    lwz r31, 0x34(r28)
    add r3, r3, r30
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x20(r1)
    ble lbl_fn_805377F4_000015BC
    lis r3, __files@ha
    lis r4, lbl_8075D94C@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8075D94C@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805377F4_000015BC:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_805377F4_0000160C
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x20(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x28
    srwi r4, r4, 2
    stw r4, 0x28(r1)
    cmplw r4, r0
    bge lbl_fn_805377F4_00001600
    addi r3, r1, 0x20
lbl_fn_805377F4_00001600:
    lwz r0, 0x0(r3)
    add r27, r31, r0
    b lbl_fn_805377F4_00001650
lbl_fn_805377F4_0000160C:
    lis r3, 0x1555
    addi r0, r3, 0x5554
    cmplw r31, r0
    bge lbl_fn_805377F4_00001648
    addi r3, r31, 0x1
    lwz r0, 0x20(r1)
    srwi r3, r3, 1
    stw r3, 0x24(r1)
    cmplw r3, r0
    addi r3, r1, 0x24
    bge lbl_fn_805377F4_0000163C
    addi r3, r1, 0x20
lbl_fn_805377F4_0000163C:
    lwz r0, 0x0(r3)
    add r27, r31, r0
    b lbl_fn_805377F4_00001650
lbl_fn_805377F4_00001648:
    lis r3, 0x2000
    subi r27, r3, 0x1
lbl_fn_805377F4_00001650:
    lis r3, 0x2000
    subi r0, r3, 0x1
    cmplw r27, r0
    ble lbl_fn_805377F4_00001680
    lis r3, __files@ha
    lis r4, lbl_8075D94C@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8075D94C@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805377F4_00001680:
    slwi r3, r27, 3
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_805377F4_000016B4
    lis r3, __files@ha
    lis r4, lbl_80793AF0@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80793AF0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805377F4_000016B4:
    lwz r0, 0x7c(r1)
    cmpwi r30, 0x0
    stw r31, 0x78(r1)
    slwi r3, r0, 3
    stw r27, 0x80(r1)
    lwz r0, 0x30(r28)
    stw r0, 0x88(r1)
    slwi r0, r0, 3
    add r0, r31, r0
    add r6, r3, r0
    beq lbl_fn_805377F4_0000171C
    li r5, 0x28
    li r4, 0x0
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    mtctr r30
    beq lbl_fn_805377F4_0000171C
lbl_fn_805377F4_000016F8:
    cmpwi r6, 0x0
    beq lbl_fn_805377F4_00001708
    stw r5, 0x0(r6)
    stw r4, 0x4(r6)
lbl_fn_805377F4_00001708:
    lwz r3, 0x7c(r1)
    addi r6, r6, 0x8
    addi r0, r3, 0x1
    stw r0, 0x7c(r1)
    bdnz lbl_fn_805377F4_000016F8
lbl_fn_805377F4_0000171C:
    lwz r0, 0x30(r28)
    lwz r7, 0x2c(r28)
    slwi r0, r0, 3
    lwz r3, 0x88(r1)
    add r5, r7, r0
    lwz r4, 0x78(r1)
    addi r0, r5, 0x7
    slwi r3, r3, 3
    subf r0, r7, r0
    srwi r0, r0, 3
    add r6, r4, r3
    mtctr r0
    cmplw r5, r7
    ble lbl_fn_805377F4_0000178C
lbl_fn_805377F4_00001754:
    subic. r6, r6, 0x8
    subi r5, r5, 0x8
    beq lbl_fn_805377F4_00001770
    lwz r0, 0x0(r5)
    stw r0, 0x0(r6)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r6)
lbl_fn_805377F4_00001770:
    lwz r4, 0x88(r1)
    lwz r3, 0x7c(r1)
    subi r0, r4, 0x1
    stw r0, 0x88(r1)
    addi r0, r3, 0x1
    stw r0, 0x7c(r1)
    bdnz lbl_fn_805377F4_00001754
lbl_fn_805377F4_0000178C:
    li r4, 0x0
    stw r4, 0x30(r28)
    addic. r0, r1, 0x78
    lwz r3, 0x34(r28)
    lwz r0, 0x80(r1)
    stw r0, 0x34(r28)
    stw r3, 0x80(r1)
    lwz r0, 0x78(r1)
    lwz r3, 0x2c(r28)
    stw r0, 0x2c(r28)
    stw r3, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r0, 0x30(r28)
    stw r4, 0x7c(r1)
    beq lbl_fn_805377F4_000017F0
    lwz r3, 0x78(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805377F4_000017F0
    stw r4, 0x7c(r1)
    bl dtor_80084684
    b lbl_fn_805377F4_000017F0
lbl_fn_805377F4_000017E0:
    bge lbl_fn_805377F4_000017F0
    subf r0, r0, r4
    subf r0, r0, r4
    stw r0, 0x30(r28)
lbl_fn_805377F4_000017F0:
    li r6, 0x0
    li r3, 0x0
    b lbl_fn_805377F4_00001824
lbl_fn_805377F4_000017FC:
    lwz r0, 0x2c(r28)
    addi r6, r6, 0x1
    lwz r5, 0xc(r29)
    add r4, r0, r3
    stw r5, 0x4(r4)
    lwz r4, 0x2c(r28)
    lwz r0, 0x8(r29)
    addi r29, r29, 0x18
    stwx r0, r4, r3
    addi r3, r3, 0x8
lbl_fn_805377F4_00001824:
    lwz r0, 0x2c(r1)
    cmpw r6, r0
    blt lbl_fn_805377F4_000017FC
    lwz r3, 0x24(r28)
    lwz r4, 0x28(r28)
    lfs f1, lbl_80887C68
    lfs f0, lbl_80887C6C
    cmplw r3, r4
    stfs f1, 0x48(r1)
    stfs f0, 0x4c(r1)
    bge lbl_fn_805377F4_00001870
    addi r4, r3, 0x1
    lwz r3, 0x20(r28)
    subi r0, r4, 0x1
    stw r4, 0x24(r28)
    slwi r0, r0, 3
    stfsux f1, r3, r0
    stfs f0, 0x4(r3)
    b lbl_fn_805377F4_00001AE4
lbl_fn_805377F4_00001870:
    lis r3, 0x2000
    subi r0, r3, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_805377F4_000018A4
    lis r3, __files@ha
    lis r4, lbl_8075D94C@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8075D94C@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805377F4_000018A4:
    lwz r4, 0x24(r28)
    li r6, 0x0
    lis r3, 0x2000
    lwz r31, 0x28(r28)
    subi r0, r3, 0x1
    addi r4, r4, 0x1
    subf r3, r31, r4
    addi r5, r28, 0x28
    subf r0, r31, r0
    stw r6, 0x64(r1)
    cmplw r3, r0
    stw r6, 0x68(r1)
    stw r6, 0x6c(r1)
    stw r5, 0x70(r1)
    stw r6, 0x74(r1)
    stw r3, 0x1c(r1)
    ble lbl_fn_805377F4_00001908
    lis r3, __files@ha
    lis r4, lbl_8075D94C@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8075D94C@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805377F4_00001908:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_805377F4_00001958
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x1c(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x14
    srwi r4, r4, 2
    stw r4, 0x14(r1)
    cmplw r4, r0
    bge lbl_fn_805377F4_0000194C
    addi r3, r1, 0x1c
lbl_fn_805377F4_0000194C:
    lwz r0, 0x0(r3)
    add r27, r31, r0
    b lbl_fn_805377F4_0000199C
lbl_fn_805377F4_00001958:
    lis r3, 0x1555
    addi r0, r3, 0x5554
    cmplw r31, r0
    bge lbl_fn_805377F4_00001994
    addi r3, r31, 0x1
    lwz r0, 0x1c(r1)
    srwi r3, r3, 1
    stw r3, 0x18(r1)
    cmplw r3, r0
    addi r3, r1, 0x18
    bge lbl_fn_805377F4_00001988
    addi r3, r1, 0x1c
lbl_fn_805377F4_00001988:
    lwz r0, 0x0(r3)
    add r27, r31, r0
    b lbl_fn_805377F4_0000199C
lbl_fn_805377F4_00001994:
    lis r3, 0x2000
    subi r27, r3, 0x1
lbl_fn_805377F4_0000199C:
    lis r3, 0x2000
    subi r0, r3, 0x1
    cmplw r27, r0
    ble lbl_fn_805377F4_000019CC
    lis r3, __files@ha
    lis r4, lbl_8075D94C@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8075D94C@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805377F4_000019CC:
    slwi r3, r27, 3
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_805377F4_00001A00
    lis r3, __files@ha
    lis r4, lbl_80793B0C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80793B0C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805377F4_00001A00:
    lwz r4, 0x24(r28)
    lwz r3, 0x68(r1)
    slwi r0, r4, 3
    lfs f0, 0x48(r1)
    add r6, r29, r0
    stw r29, 0x64(r1)
    slwi r0, r3, 3
    addi r3, r3, 0x1
    stfsx f0, r6, r0
    add r5, r0, r6
    lfs f0, 0x4c(r1)
    stfs f0, 0x4(r5)
    lwz r0, 0x24(r28)
    lwz r7, 0x20(r28)
    slwi r0, r0, 3
    stw r27, 0x6c(r1)
    add r5, r7, r0
    addi r0, r5, 0x7
    stw r4, 0x74(r1)
    subf r0, r7, r0
    srwi r0, r0, 3
    stw r3, 0x68(r1)
    mtctr r0
    cmplw r5, r7
    ble lbl_fn_805377F4_00001A9C
lbl_fn_805377F4_00001A64:
    subic. r6, r6, 0x8
    subi r5, r5, 0x8
    beq lbl_fn_805377F4_00001A80
    lfs f0, 0x0(r5)
    stfs f0, 0x0(r6)
    lfs f0, 0x4(r5)
    stfs f0, 0x4(r6)
lbl_fn_805377F4_00001A80:
    lwz r4, 0x74(r1)
    lwz r3, 0x68(r1)
    subi r0, r4, 0x1
    stw r0, 0x74(r1)
    addi r0, r3, 0x1
    stw r0, 0x68(r1)
    bdnz lbl_fn_805377F4_00001A64
lbl_fn_805377F4_00001A9C:
    addic. r0, r1, 0x64
    lwz r0, 0x68(r1)
    lwz r7, 0x28(r28)
    li r6, 0x0
    lwz r5, 0x6c(r1)
    lwz r3, 0x20(r28)
    lwz r4, 0x64(r1)
    stw r5, 0x28(r28)
    stw r7, 0x6c(r1)
    stw r4, 0x20(r28)
    stw r3, 0x64(r1)
    stw r0, 0x24(r28)
    stw r6, 0x68(r1)
    beq lbl_fn_805377F4_00001AE4
    cmpwi r3, 0x0
    beq lbl_fn_805377F4_00001AE4
    stw r6, 0x68(r1)
    bl dtor_80084684
lbl_fn_805377F4_00001AE4:
    lwz r3, 0x24(r28)
    lwz r4, 0x28(r28)
    lfs f0, lbl_80887C6C
    cmplw r3, r4
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    bge lbl_fn_805377F4_00001B20
    addi r4, r3, 0x1
    lwz r3, 0x20(r28)
    subi r0, r4, 0x1
    stw r4, 0x24(r28)
    slwi r0, r0, 3
    stfsux f0, r3, r0
    stfs f0, 0x4(r3)
    b lbl_fn_805377F4_00001D94
lbl_fn_805377F4_00001B20:
    lis r3, 0x2000
    subi r0, r3, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_805377F4_00001B54
    lis r3, __files@ha
    lis r4, lbl_8075D94C@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8075D94C@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805377F4_00001B54:
    lwz r4, 0x24(r28)
    li r6, 0x0
    lis r3, 0x2000
    lwz r31, 0x28(r28)
    subi r0, r3, 0x1
    addi r4, r4, 0x1
    subf r3, r31, r4
    addi r5, r28, 0x28
    subf r0, r31, r0
    stw r6, 0x50(r1)
    cmplw r3, r0
    stw r6, 0x54(r1)
    stw r6, 0x58(r1)
    stw r5, 0x5c(r1)
    stw r6, 0x60(r1)
    stw r3, 0x10(r1)
    ble lbl_fn_805377F4_00001BB8
    lis r3, __files@ha
    lis r4, lbl_8075D94C@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8075D94C@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805377F4_00001BB8:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_805377F4_00001C08
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x10(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_805377F4_00001BFC
    addi r3, r1, 0x10
lbl_fn_805377F4_00001BFC:
    lwz r0, 0x0(r3)
    add r27, r31, r0
    b lbl_fn_805377F4_00001C4C
lbl_fn_805377F4_00001C08:
    lis r3, 0x1555
    addi r0, r3, 0x5554
    cmplw r31, r0
    bge lbl_fn_805377F4_00001C44
    addi r3, r31, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_805377F4_00001C38
    addi r3, r1, 0x10
lbl_fn_805377F4_00001C38:
    lwz r0, 0x0(r3)
    add r27, r31, r0
    b lbl_fn_805377F4_00001C4C
lbl_fn_805377F4_00001C44:
    lis r3, 0x2000
    subi r27, r3, 0x1
lbl_fn_805377F4_00001C4C:
    lis r3, 0x2000
    subi r0, r3, 0x1
    cmplw r27, r0
    ble lbl_fn_805377F4_00001C7C
    lis r3, __files@ha
    lis r4, lbl_8075D94C@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8075D94C@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805377F4_00001C7C:
    slwi r3, r27, 3
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_805377F4_00001CB0
    lis r3, __files@ha
    lis r4, lbl_80793B0C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80793B0C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805377F4_00001CB0:
    lwz r4, 0x24(r28)
    lwz r3, 0x54(r1)
    slwi r0, r4, 3
    lfs f0, 0x40(r1)
    add r6, r29, r0
    stw r29, 0x50(r1)
    slwi r0, r3, 3
    addi r3, r3, 0x1
    stfsx f0, r6, r0
    add r5, r0, r6
    lfs f0, 0x44(r1)
    stfs f0, 0x4(r5)
    lwz r0, 0x24(r28)
    lwz r7, 0x20(r28)
    slwi r0, r0, 3
    stw r27, 0x58(r1)
    add r5, r7, r0
    addi r0, r5, 0x7
    stw r4, 0x60(r1)
    subf r0, r7, r0
    srwi r0, r0, 3
    stw r3, 0x54(r1)
    mtctr r0
    cmplw r5, r7
    ble lbl_fn_805377F4_00001D4C
lbl_fn_805377F4_00001D14:
    subic. r6, r6, 0x8
    subi r5, r5, 0x8
    beq lbl_fn_805377F4_00001D30
    lfs f0, 0x0(r5)
    stfs f0, 0x0(r6)
    lfs f0, 0x4(r5)
    stfs f0, 0x4(r6)
lbl_fn_805377F4_00001D30:
    lwz r4, 0x60(r1)
    lwz r3, 0x54(r1)
    subi r0, r4, 0x1
    stw r0, 0x60(r1)
    addi r0, r3, 0x1
    stw r0, 0x54(r1)
    bdnz lbl_fn_805377F4_00001D14
lbl_fn_805377F4_00001D4C:
    addic. r0, r1, 0x50
    lwz r0, 0x54(r1)
    lwz r7, 0x28(r28)
    li r6, 0x0
    lwz r5, 0x58(r1)
    lwz r3, 0x20(r28)
    lwz r4, 0x50(r1)
    stw r5, 0x28(r28)
    stw r7, 0x58(r1)
    stw r4, 0x20(r28)
    stw r3, 0x50(r1)
    stw r0, 0x24(r28)
    stw r6, 0x54(r1)
    beq lbl_fn_805377F4_00001D94
    cmpwi r3, 0x0
    beq lbl_fn_805377F4_00001D94
    stw r6, 0x54(r1)
    bl dtor_80084684
lbl_fn_805377F4_00001D94:
    addi r11, r1, 0xb0
    bl _restgpr_27
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}
