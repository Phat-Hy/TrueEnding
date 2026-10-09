#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8006A5A8(void);
extern void fn_80079044(void);
extern void fn_800790D0(void);
extern void fn_80079210(void);
extern void fn_8007A154(void);
extern void fn_800844D8(void);
extern void fn_800C16B4(void);
extern void fn_800C1990(void);
extern void fn_800D246C(void);
extern void fn_80373148(void);
extern void fn_8041D180(void);
extern void fn_8041D198(void);
extern void fn_80482DF4(void);
extern void fn_80482E28(void);
extern void fn_80482E4C(void);
extern void fn_80491528(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void memmove(void);

/* External data declarations */
extern u8 lbl_80756338[];
extern u8 lbl_80756380[];
extern u8 lbl_80775A88[];
extern u8 lbl_8077927C[];
extern u8 lbl_807C88F0[];

/* Small data declarations */
extern u32 lbl_8087E090;
extern u32 lbl_8087E094;
extern u32 lbl_8087EEF8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4C0;
extern u32 lbl_8087F558;
extern u32 lbl_80887010;

/* Function declarations */
void fn_80485964(void);
void fn_804862C4(void);
void fn_80486BEC(void);
void fn_80486DAC(void);
void fn_80486F50(void);
void fn_80487064(void);
void fn_804870F4(void);
void fn_80487184(void);

asm void fn_80485964(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r11, r1, 0x130
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    bl _savegpr_25
    lwz r7, 0x1f14(r3)
    lis r0, 0x4330
    mr r27, r4
    mr r26, r3
    mr r28, r5
    fmr f30, f1
    fmr f31, f2
    mr r29, r6
    stw r0, 0xf8(r1)
    li r30, 0x0
    li r4, 0x0
    stw r0, 0x100(r1)
    mtctr r7
    cmpwi r7, 0x0
    ble lbl_fn_80485964_000000C4
lbl_fn_80485964_00000060:
    lwz r5, 0x1f10(r3)
    lwzx r0, r5, r4
    cmpwi r0, -0x1
    bne lbl_fn_80485964_000000B8
    lwz r0, 0x1f14(r3)
    add r3, r5, r4
    addi r4, r3, 0x4
    slwi r0, r0, 2
    add r0, r5, r0
    subf r0, r3, r0
    srawi r0, r0, 2
    addze r5, r0
    subi r0, r5, 0x1
    slwi r5, r0, 2
    bl memmove
    lwz r3, 0x1f14(r26)
    mr r4, r30
    subi r0, r3, 0x1
    stw r0, 0x1f14(r26)
    lwz r3, lbl_8087EEF8
    bl fn_8007A154
    b lbl_fn_80485964_000000C4
lbl_fn_80485964_000000B8:
    addi r30, r30, 0x1
    addi r4, r4, 0x4
    bdnz lbl_fn_80485964_00000060
lbl_fn_80485964_000000C4:
    lwz r3, 0x1f14(r26)
    lwz r30, 0x1f18(r26)
    cmplw r3, r30
    bge lbl_fn_80485964_000000F4
    addi r3, r3, 0x1
    stw r3, 0x1f14(r26)
    subi r0, r3, 0x1
    lwz r4, 0x1f10(r26)
    slwi r3, r0, 2
    lwz r0, lbl_8087E090
    stwx r0, r4, r3
    b lbl_fn_80485964_000003D4
lbl_fn_80485964_000000F4:
    lis r3, 0x4000
    li r4, 0x1
    subi r0, r3, 0x1
    stw r4, 0x34(r1)
    subf r0, r30, r0
    cmplwi r0, 0x1
    bge lbl_fn_80485964_00000134
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80485964_00000134:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r30, r0
    bge lbl_fn_80485964_0000016C
    addi r4, r30, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x2c(r1)
    cmplwi r0, 0x1
    b lbl_fn_80485964_0000018C
lbl_fn_80485964_0000016C:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r30, r0
    bge lbl_fn_80485964_0000018C
    addi r0, r30, 0x1
    srwi r0, r0, 1
    stw r0, 0x30(r1)
    cmplwi r0, 0x1
lbl_fn_80485964_0000018C:
    li r4, 0x0
    addi r5, r26, 0x1f18
    lis r3, 0x4000
    stw r4, 0x5c(r1)
    subi r0, r3, 0x1
    stw r4, 0x60(r1)
    stw r4, 0x64(r1)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    lwz r3, 0x1f14(r26)
    lwz r31, 0x1f18(r26)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x20(r1)
    ble lbl_fn_80485964_000001F4
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80485964_000001F4:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_80485964_00000244
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
    bge lbl_fn_80485964_00000238
    addi r3, r1, 0x20
lbl_fn_80485964_00000238:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_80485964_00000288
lbl_fn_80485964_00000244:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_80485964_00000280
    addi r3, r31, 0x1
    lwz r0, 0x20(r1)
    srwi r3, r3, 1
    stw r3, 0x24(r1)
    cmplw r3, r0
    addi r3, r1, 0x24
    bge lbl_fn_80485964_00000274
    addi r3, r1, 0x20
lbl_fn_80485964_00000274:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_80485964_00000288
lbl_fn_80485964_00000280:
    lis r3, 0x4000
    subi r31, r3, 0x1
lbl_fn_80485964_00000288:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_80485964_000002BC
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80485964_000002BC:
    slwi r3, r31, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80485964_000002F0
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80485964_000002F0:
    stw r30, 0x5c(r1)
    lwz r0, 0x60(r1)
    stw r31, 0x64(r1)
    slwi r4, r0, 2
    lwz r0, lbl_8087E090
    lwz r3, 0x1f14(r26)
    stw r3, 0x6c(r1)
    slwi r3, r3, 2
    add r3, r30, r3
    stwx r0, r3, r4
    lwz r3, 0x60(r1)
    lwz r0, 0x6c(r1)
    addi r3, r3, 0x1
    stw r3, 0x60(r1)
    lwz r3, 0x5c(r1)
    lwz r4, 0x1f14(r26)
    lwz r31, 0x1f10(r26)
    slwi r4, r4, 2
    add r5, r31, r4
    subf r5, r31, r5
    mr r4, r31
    srawi r5, r5, 2
    addze r30, r5
    subf r0, r30, r0
    stw r0, 0x6c(r1)
    slwi r25, r30, 2
    slwi r0, r0, 2
    mr r5, r25
    add r3, r3, r0
    bl memcpy
    mr r3, r31
    mr r5, r25
    li r4, 0x0
    bl memset
    lwz r0, 0x60(r1)
    li r4, 0x0
    addic. r3, r1, 0x5c
    add r0, r0, r30
    stw r0, 0x60(r1)
    stw r4, 0x1f14(r26)
    lwz r3, 0x1f18(r26)
    lwz r0, 0x64(r1)
    stw r0, 0x1f18(r26)
    stw r3, 0x64(r1)
    lwz r0, 0x5c(r1)
    lwz r3, 0x1f10(r26)
    stw r0, 0x1f10(r26)
    stw r3, 0x5c(r1)
    lwz r0, 0x60(r1)
    stw r0, 0x1f14(r26)
    stw r4, 0x60(r1)
    beq lbl_fn_80485964_000003D4
    lwz r3, 0x5c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80485964_000003D4
    stw r4, 0x60(r1)
    bl dtor_80084684
lbl_fn_80485964_000003D4:
    addi r3, r1, 0xb4
    bl fn_80079044
    extrwi r0, r29, 8, 8
    stw r0, 0xfc(r1)
    extrwi r0, r29, 8, 16
    lis r4, lbl_80756338@ha
    stw r0, 0x104(r1)
    clrlwi r3, r29, 24
    lfd f0, 0xf8(r1)
    srwi r0, r29, 24
    lfd f7, lbl_80756338@l(r4)
    fmr f1, f30
    lfd f4, 0x100(r1)
    fmr f2, f31
    stw r3, 0xfc(r1)
    fsubs f5, f0, f7
    lfs f6, lbl_80887010
    stw r0, 0x104(r1)
    fsubs f4, f4, f7
    lfd f3, 0xf8(r1)
    fmuls f5, f6, f5
    lfd f0, 0x100(r1)
    mr r4, r27
    fsubs f3, f3, f7
    fsubs f0, f0, f7
    stfs f5, 0x38(r1)
    fmuls f4, f6, f4
    mr r5, r28
    fmuls f3, f6, f3
    fmuls f0, f6, f0
    stfs f4, 0x3c(r1)
    addi r3, r1, 0xb4
    addi r6, r1, 0x38
    stfs f3, 0x40(r1)
    stfs f0, 0x44(r1)
    bl fn_80079210
    lwz r30, lbl_8087EEF8
    addi r4, r1, 0xbc
    lfs f2, 0xc4(r1)
    addi r8, r1, 0x78
    lwz r9, 0x4(r30)
    addi r3, r1, 0xc8
    psq_l f1, 0x0(r4), 0, 0
    addi r7, r1, 0x84
    lwz r0, 0x8(r30)
    psq_st f1, 0x0(r8), 0, 0
    lwz r6, 0xb4(r1)
    cmplw r9, r0
    stfs f2, 0x80(r1)
    lwz r5, 0xb8(r1)
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0xd0(r1)
    lwz r4, 0xd4(r1)
    lfs f9, 0xd8(r1)
    lfs f8, 0xdc(r1)
    lfs f7, 0xe0(r1)
    lfs f6, 0xe4(r1)
    lfs f5, 0xe8(r1)
    lfs f4, 0xec(r1)
    lfs f3, 0xf0(r1)
    lfs f0, 0xf4(r1)
    stw r6, 0x70(r1)
    stw r5, 0x74(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8c(r1)
    stw r4, 0x90(r1)
    stfs f9, 0x94(r1)
    stfs f8, 0x98(r1)
    stfs f7, 0x9c(r1)
    stfs f6, 0xa0(r1)
    stfs f5, 0xa4(r1)
    stfs f4, 0xa8(r1)
    stfs f3, 0xac(r1)
    stfs f0, 0xb0(r1)
    bge lbl_fn_80485964_0000056C
    mulli r0, r9, 0x44
    lwz r3, 0x0(r30)
    add. r3, r3, r0
    beq lbl_fn_80485964_0000055C
    stw r6, 0x0(r3)
    psq_l f1, 0x0(r8), 0, 0
    stw r5, 0x4(r3)
    lfs f2, 0x80(r1)
    psq_st f1, 0x8(r3), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x10(r3)
    lfs f2, 0x8c(r1)
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    stw r4, 0x20(r3)
    stfs f9, 0x24(r3)
    stfs f8, 0x28(r3)
    stfs f7, 0x2c(r3)
    stfs f6, 0x30(r3)
    stfs f5, 0x34(r3)
    stfs f4, 0x38(r3)
    stfs f3, 0x3c(r3)
    stfs f0, 0x40(r3)
lbl_fn_80485964_0000055C:
    lwz r3, 0x4(r30)
    addi r0, r3, 0x1
    stw r0, 0x4(r30)
    b lbl_fn_80485964_00000938
lbl_fn_80485964_0000056C:
    li r0, 0x1
    stw r0, 0x1c(r1)
    lis r3, 0x3c4
    lwz r26, 0x8(r30)
    subi r0, r3, 0x3c3d
    subf r0, r26, r0
    cmplwi r0, 0x1
    bge lbl_fn_80485964_000005B0
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80485964_000005B0:
    lis r3, 0x141
    addi r0, r3, 0x4141
    cmplw r26, r0
    bge lbl_fn_80485964_000005E8
    addi r4, r26, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x14(r1)
    cmplwi r0, 0x1
    b lbl_fn_80485964_00000608
lbl_fn_80485964_000005E8:
    lis r3, 0x283
    subi r0, r3, 0x7d7e
    cmplw r26, r0
    bge lbl_fn_80485964_00000608
    addi r0, r26, 0x1
    srwi r0, r0, 1
    stw r0, 0x18(r1)
    cmplwi r0, 0x1
lbl_fn_80485964_00000608:
    lwz r4, 0x4(r30)
    li r6, 0x0
    lwz r5, 0x8(r30)
    addi r7, r30, 0x8
    addi r0, r4, 0x1
    lis r3, 0x3c4
    subf r4, r5, r0
    stw r4, 0x8(r1)
    subi r0, r3, 0x3c3d
    lwz r31, 0x8(r30)
    stw r6, 0x48(r1)
    subf r0, r31, r0
    cmplw r4, r0
    stw r6, 0x4c(r1)
    stw r6, 0x50(r1)
    stw r7, 0x54(r1)
    stw r6, 0x58(r1)
    ble lbl_fn_80485964_00000674
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80485964_00000674:
    lis r3, 0x141
    addi r0, r3, 0x4141
    cmplw r31, r0
    bge lbl_fn_80485964_000006C4
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_80485964_000006B8
    addi r3, r1, 0x8
lbl_fn_80485964_000006B8:
    lwz r0, 0x0(r3)
    add r27, r31, r0
    b lbl_fn_80485964_00000708
lbl_fn_80485964_000006C4:
    lis r3, 0x283
    subi r0, r3, 0x7d7e
    cmplw r31, r0
    bge lbl_fn_80485964_00000700
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80485964_000006F4
    addi r3, r1, 0x8
lbl_fn_80485964_000006F4:
    lwz r0, 0x0(r3)
    add r27, r31, r0
    b lbl_fn_80485964_00000708
lbl_fn_80485964_00000700:
    lis r3, 0x3c4
    subi r27, r3, 0x3c3d
lbl_fn_80485964_00000708:
    lis r3, 0x3c4
    subi r0, r3, 0x3c3d
    cmplw r27, r0
    ble lbl_fn_80485964_0000073C
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80485964_0000073C:
    mulli r3, r27, 0x44
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_80485964_00000770
    lis r3, __files@ha
    lis r4, lbl_8077927C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077927C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80485964_00000770:
    lwz r5, 0x4(r30)
    addi r7, r1, 0x78
    lwz r0, 0x4c(r1)
    addi r6, r1, 0x84
    mulli r4, r5, 0x44
    stw r26, 0x48(r1)
    stw r27, 0x50(r1)
    mulli r3, r0, 0x44
    add r0, r26, r4
    stw r5, 0x58(r1)
    add. r3, r3, r0
    beq lbl_fn_80485964_00000818
    lwz r0, 0x70(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x74(r1)
    stw r0, 0x4(r3)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x8(r3), 0, 0
    lfs f2, 0x80(r1)
    stfs f2, 0x10(r3)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    lfs f2, 0x8c(r1)
    stfs f2, 0x1c(r3)
    lwz r0, 0x90(r1)
    stw r0, 0x20(r3)
    lfs f0, 0x94(r1)
    stfs f0, 0x24(r3)
    lfs f0, 0x98(r1)
    stfs f0, 0x28(r3)
    lfs f0, 0x9c(r1)
    stfs f0, 0x2c(r3)
    lfs f0, 0xa0(r1)
    stfs f0, 0x30(r3)
    lfs f0, 0xa4(r1)
    stfs f0, 0x34(r3)
    lfs f0, 0xa8(r1)
    stfs f0, 0x38(r3)
    lfs f0, 0xac(r1)
    stfs f0, 0x3c(r3)
    lfs f0, 0xb0(r1)
    stfs f0, 0x40(r3)
lbl_fn_80485964_00000818:
    lwz r3, 0x4(r30)
    lwz r0, 0x58(r1)
    lwz r5, 0x4c(r1)
    mulli r4, r3, 0x44
    lwz r7, 0x0(r30)
    addi r5, r5, 0x1
    stw r5, 0x4c(r1)
    mulli r0, r0, 0x44
    lwz r3, 0x48(r1)
    add r5, r7, r4
    add r6, r3, r0
    b lbl_fn_80485964_000008E4
lbl_fn_80485964_00000848:
    subic. r6, r6, 0x44
    subi r5, r5, 0x44
    beq lbl_fn_80485964_000008CC
    lwz r0, 0x0(r5)
    stw r0, 0x0(r6)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r5)
    psq_l f1, 0x8(r5), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r5)
    psq_l f1, 0x14(r5), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lwz r0, 0x20(r5)
    stw r0, 0x20(r6)
    lfs f0, 0x24(r5)
    stfs f0, 0x24(r6)
    lfs f0, 0x28(r5)
    stfs f0, 0x28(r6)
    lfs f0, 0x2c(r5)
    stfs f0, 0x2c(r6)
    lfs f0, 0x30(r5)
    stfs f0, 0x30(r6)
    lfs f0, 0x34(r5)
    stfs f0, 0x34(r6)
    lfs f0, 0x38(r5)
    stfs f0, 0x38(r6)
    lfs f0, 0x3c(r5)
    stfs f0, 0x3c(r6)
    lfs f0, 0x40(r5)
    stfs f0, 0x40(r6)
lbl_fn_80485964_000008CC:
    lwz r4, 0x58(r1)
    lwz r3, 0x4c(r1)
    subi r0, r4, 0x1
    stw r0, 0x58(r1)
    addi r0, r3, 0x1
    stw r0, 0x4c(r1)
lbl_fn_80485964_000008E4:
    cmplw r7, r5
    blt lbl_fn_80485964_00000848
    li r5, 0x0
    stw r5, 0x4(r30)
    addic. r0, r1, 0x48
    lwz r0, 0x4c(r1)
    lwz r6, 0x8(r30)
    lwz r3, 0x50(r1)
    stw r3, 0x8(r30)
    lwz r4, 0x48(r1)
    lwz r3, 0x0(r30)
    stw r6, 0x50(r1)
    stw r4, 0x0(r30)
    stw r3, 0x48(r1)
    stw r0, 0x4(r30)
    stw r5, 0x4c(r1)
    beq lbl_fn_80485964_00000938
    cmpwi r3, 0x0
    beq lbl_fn_80485964_00000938
    stw r5, 0x4c(r1)
    bl dtor_80084684
lbl_fn_80485964_00000938:
    addi r11, r1, 0x130
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    bl _restgpr_25
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_804862C4(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x120
    bl _savegpr_26
    lwz r6, 0x1f14(r3)
    lis r0, 0x4330
    mr r29, r4
    mr r28, r3
    mr r30, r5
    stw r0, 0xf8(r1)
    li r31, 0x0
    li r4, 0x0
    stw r0, 0x100(r1)
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_fn_804862C4_00000A08
lbl_fn_804862C4_000009A4:
    lwz r5, 0x1f10(r3)
    lwzx r0, r5, r4
    cmpwi r0, -0x2
    bne lbl_fn_804862C4_000009FC
    lwz r0, 0x1f14(r3)
    add r3, r5, r4
    addi r4, r3, 0x4
    slwi r0, r0, 2
    add r0, r5, r0
    subf r0, r3, r0
    srawi r0, r0, 2
    addze r5, r0
    subi r0, r5, 0x1
    slwi r5, r0, 2
    bl memmove
    lwz r3, 0x1f14(r28)
    mr r4, r31
    subi r0, r3, 0x1
    stw r0, 0x1f14(r28)
    lwz r3, lbl_8087EEF8
    bl fn_8007A154
    b lbl_fn_804862C4_00000A08
lbl_fn_804862C4_000009FC:
    addi r31, r31, 0x1
    addi r4, r4, 0x4
    bdnz lbl_fn_804862C4_000009A4
lbl_fn_804862C4_00000A08:
    lwz r3, 0x1f14(r28)
    lwz r31, 0x1f18(r28)
    cmplw r3, r31
    bge lbl_fn_804862C4_00000A38
    addi r3, r3, 0x1
    stw r3, 0x1f14(r28)
    subi r0, r3, 0x1
    lwz r4, 0x1f10(r28)
    slwi r3, r0, 2
    lwz r0, lbl_8087E094
    stwx r0, r4, r3
    b lbl_fn_804862C4_00000D18
lbl_fn_804862C4_00000A38:
    lis r3, 0x4000
    li r4, 0x1
    subi r0, r3, 0x1
    stw r4, 0x34(r1)
    subf r0, r31, r0
    cmplwi r0, 0x1
    bge lbl_fn_804862C4_00000A78
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804862C4_00000A78:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_804862C4_00000AB0
    addi r4, r31, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x2c(r1)
    cmplwi r0, 0x1
    b lbl_fn_804862C4_00000AD0
lbl_fn_804862C4_00000AB0:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_804862C4_00000AD0
    addi r0, r31, 0x1
    srwi r0, r0, 1
    stw r0, 0x30(r1)
    cmplwi r0, 0x1
lbl_fn_804862C4_00000AD0:
    li r4, 0x0
    addi r5, r28, 0x1f18
    lis r3, 0x4000
    stw r4, 0x5c(r1)
    subi r0, r3, 0x1
    stw r4, 0x60(r1)
    stw r4, 0x64(r1)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    lwz r3, 0x1f14(r28)
    lwz r31, 0x1f18(r28)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x20(r1)
    ble lbl_fn_804862C4_00000B38
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804862C4_00000B38:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_804862C4_00000B88
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
    bge lbl_fn_804862C4_00000B7C
    addi r3, r1, 0x20
lbl_fn_804862C4_00000B7C:
    lwz r0, 0x0(r3)
    add r27, r31, r0
    b lbl_fn_804862C4_00000BCC
lbl_fn_804862C4_00000B88:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_804862C4_00000BC4
    addi r3, r31, 0x1
    lwz r0, 0x20(r1)
    srwi r3, r3, 1
    stw r3, 0x24(r1)
    cmplw r3, r0
    addi r3, r1, 0x24
    bge lbl_fn_804862C4_00000BB8
    addi r3, r1, 0x20
lbl_fn_804862C4_00000BB8:
    lwz r0, 0x0(r3)
    add r27, r31, r0
    b lbl_fn_804862C4_00000BCC
lbl_fn_804862C4_00000BC4:
    lis r3, 0x4000
    subi r27, r3, 0x1
lbl_fn_804862C4_00000BCC:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r27, r0
    ble lbl_fn_804862C4_00000C00
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804862C4_00000C00:
    slwi r3, r27, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_804862C4_00000C34
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804862C4_00000C34:
    stw r31, 0x5c(r1)
    lwz r0, 0x60(r1)
    stw r27, 0x64(r1)
    slwi r4, r0, 2
    lwz r0, lbl_8087E094
    lwz r3, 0x1f14(r28)
    stw r3, 0x6c(r1)
    slwi r3, r3, 2
    add r3, r31, r3
    stwx r0, r3, r4
    lwz r3, 0x60(r1)
    lwz r0, 0x6c(r1)
    addi r3, r3, 0x1
    stw r3, 0x60(r1)
    lwz r3, 0x5c(r1)
    lwz r4, 0x1f14(r28)
    lwz r27, 0x1f10(r28)
    slwi r4, r4, 2
    add r5, r27, r4
    subf r5, r27, r5
    mr r4, r27
    srawi r5, r5, 2
    addze r31, r5
    subf r0, r31, r0
    stw r0, 0x6c(r1)
    slwi r26, r31, 2
    slwi r0, r0, 2
    mr r5, r26
    add r3, r3, r0
    bl memcpy
    mr r3, r27
    mr r5, r26
    li r4, 0x0
    bl memset
    lwz r0, 0x60(r1)
    li r4, 0x0
    addic. r3, r1, 0x5c
    add r0, r0, r31
    stw r0, 0x60(r1)
    stw r4, 0x1f14(r28)
    lwz r3, 0x1f18(r28)
    lwz r0, 0x64(r1)
    stw r0, 0x1f18(r28)
    stw r3, 0x64(r1)
    lwz r0, 0x5c(r1)
    lwz r3, 0x1f10(r28)
    stw r0, 0x1f10(r28)
    stw r3, 0x5c(r1)
    lwz r0, 0x60(r1)
    stw r0, 0x1f14(r28)
    stw r4, 0x60(r1)
    beq lbl_fn_804862C4_00000D18
    lwz r3, 0x5c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_804862C4_00000D18
    stw r4, 0x60(r1)
    bl dtor_80084684
lbl_fn_804862C4_00000D18:
    addi r3, r1, 0xb4
    bl fn_80079044
    extrwi r0, r30, 8, 8
    stw r0, 0xfc(r1)
    extrwi r0, r30, 8, 16
    lis r5, lbl_80756338@ha
    stw r0, 0x104(r1)
    clrlwi r3, r30, 24
    lfd f0, 0xf8(r1)
    srwi r0, r30, 24
    lfd f7, lbl_80756338@l(r5)
    mr r4, r29
    lfd f4, 0x100(r1)
    addi r5, r1, 0x38
    stw r3, 0xfc(r1)
    fsubs f5, f0, f7
    lfs f6, lbl_80887010
    fsubs f4, f4, f7
    stw r0, 0x104(r1)
    addi r3, r1, 0xb4
    lfd f3, 0xf8(r1)
    lfd f0, 0x100(r1)
    fmuls f5, f6, f5
    fsubs f3, f3, f7
    fsubs f0, f0, f7
    stfs f5, 0x38(r1)
    fmuls f4, f6, f4
    fmuls f3, f6, f3
    fmuls f0, f6, f0
    stfs f4, 0x3c(r1)
    stfs f3, 0x40(r1)
    stfs f0, 0x44(r1)
    bl fn_800790D0
    lwz r30, lbl_8087EEF8
    addi r4, r1, 0xbc
    lfs f2, 0xc4(r1)
    addi r8, r1, 0x78
    lwz r9, 0x4(r30)
    addi r3, r1, 0xc8
    psq_l f1, 0x0(r4), 0, 0
    addi r7, r1, 0x84
    lwz r0, 0x8(r30)
    psq_st f1, 0x0(r8), 0, 0
    lwz r6, 0xb4(r1)
    cmplw r9, r0
    stfs f2, 0x80(r1)
    lwz r5, 0xb8(r1)
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0xd0(r1)
    lwz r4, 0xd4(r1)
    lfs f9, 0xd8(r1)
    lfs f8, 0xdc(r1)
    lfs f7, 0xe0(r1)
    lfs f6, 0xe4(r1)
    lfs f5, 0xe8(r1)
    lfs f4, 0xec(r1)
    lfs f3, 0xf0(r1)
    lfs f0, 0xf4(r1)
    stw r6, 0x70(r1)
    stw r5, 0x74(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8c(r1)
    stw r4, 0x90(r1)
    stfs f9, 0x94(r1)
    stfs f8, 0x98(r1)
    stfs f7, 0x9c(r1)
    stfs f6, 0xa0(r1)
    stfs f5, 0xa4(r1)
    stfs f4, 0xa8(r1)
    stfs f3, 0xac(r1)
    stfs f0, 0xb0(r1)
    bge lbl_fn_804862C4_00000EA4
    mulli r0, r9, 0x44
    lwz r3, 0x0(r30)
    add. r3, r3, r0
    beq lbl_fn_804862C4_00000E94
    stw r6, 0x0(r3)
    psq_l f1, 0x0(r8), 0, 0
    stw r5, 0x4(r3)
    lfs f2, 0x80(r1)
    psq_st f1, 0x8(r3), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x10(r3)
    lfs f2, 0x8c(r1)
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    stw r4, 0x20(r3)
    stfs f9, 0x24(r3)
    stfs f8, 0x28(r3)
    stfs f7, 0x2c(r3)
    stfs f6, 0x30(r3)
    stfs f5, 0x34(r3)
    stfs f4, 0x38(r3)
    stfs f3, 0x3c(r3)
    stfs f0, 0x40(r3)
lbl_fn_804862C4_00000E94:
    lwz r3, 0x4(r30)
    addi r0, r3, 0x1
    stw r0, 0x4(r30)
    b lbl_fn_804862C4_00001270
lbl_fn_804862C4_00000EA4:
    li r0, 0x1
    stw r0, 0x1c(r1)
    lis r3, 0x3c4
    lwz r27, 0x8(r30)
    subi r0, r3, 0x3c3d
    subf r0, r27, r0
    cmplwi r0, 0x1
    bge lbl_fn_804862C4_00000EE8
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804862C4_00000EE8:
    lis r3, 0x141
    addi r0, r3, 0x4141
    cmplw r27, r0
    bge lbl_fn_804862C4_00000F20
    addi r4, r27, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x14(r1)
    cmplwi r0, 0x1
    b lbl_fn_804862C4_00000F40
lbl_fn_804862C4_00000F20:
    lis r3, 0x283
    subi r0, r3, 0x7d7e
    cmplw r27, r0
    bge lbl_fn_804862C4_00000F40
    addi r0, r27, 0x1
    srwi r0, r0, 1
    stw r0, 0x18(r1)
    cmplwi r0, 0x1
lbl_fn_804862C4_00000F40:
    lwz r4, 0x4(r30)
    li r6, 0x0
    lwz r5, 0x8(r30)
    addi r7, r30, 0x8
    addi r0, r4, 0x1
    lis r3, 0x3c4
    subf r4, r5, r0
    stw r4, 0x8(r1)
    subi r0, r3, 0x3c3d
    lwz r31, 0x8(r30)
    stw r6, 0x48(r1)
    subf r0, r31, r0
    cmplw r4, r0
    stw r6, 0x4c(r1)
    stw r6, 0x50(r1)
    stw r7, 0x54(r1)
    stw r6, 0x58(r1)
    ble lbl_fn_804862C4_00000FAC
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804862C4_00000FAC:
    lis r3, 0x141
    addi r0, r3, 0x4141
    cmplw r31, r0
    bge lbl_fn_804862C4_00000FFC
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_804862C4_00000FF0
    addi r3, r1, 0x8
lbl_fn_804862C4_00000FF0:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_804862C4_00001040
lbl_fn_804862C4_00000FFC:
    lis r3, 0x283
    subi r0, r3, 0x7d7e
    cmplw r31, r0
    bge lbl_fn_804862C4_00001038
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_804862C4_0000102C
    addi r3, r1, 0x8
lbl_fn_804862C4_0000102C:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_804862C4_00001040
lbl_fn_804862C4_00001038:
    lis r3, 0x3c4
    subi r28, r3, 0x3c3d
lbl_fn_804862C4_00001040:
    lis r3, 0x3c4
    subi r0, r3, 0x3c3d
    cmplw r28, r0
    ble lbl_fn_804862C4_00001074
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804862C4_00001074:
    mulli r3, r28, 0x44
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_804862C4_000010A8
    lis r3, __files@ha
    lis r4, lbl_8077927C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077927C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804862C4_000010A8:
    lwz r5, 0x4(r30)
    addi r7, r1, 0x78
    lwz r0, 0x4c(r1)
    addi r6, r1, 0x84
    mulli r4, r5, 0x44
    stw r27, 0x48(r1)
    stw r28, 0x50(r1)
    mulli r3, r0, 0x44
    add r0, r27, r4
    stw r5, 0x58(r1)
    add. r3, r3, r0
    beq lbl_fn_804862C4_00001150
    lwz r0, 0x70(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x74(r1)
    stw r0, 0x4(r3)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x8(r3), 0, 0
    lfs f2, 0x80(r1)
    stfs f2, 0x10(r3)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    lfs f2, 0x8c(r1)
    stfs f2, 0x1c(r3)
    lwz r0, 0x90(r1)
    stw r0, 0x20(r3)
    lfs f0, 0x94(r1)
    stfs f0, 0x24(r3)
    lfs f0, 0x98(r1)
    stfs f0, 0x28(r3)
    lfs f0, 0x9c(r1)
    stfs f0, 0x2c(r3)
    lfs f0, 0xa0(r1)
    stfs f0, 0x30(r3)
    lfs f0, 0xa4(r1)
    stfs f0, 0x34(r3)
    lfs f0, 0xa8(r1)
    stfs f0, 0x38(r3)
    lfs f0, 0xac(r1)
    stfs f0, 0x3c(r3)
    lfs f0, 0xb0(r1)
    stfs f0, 0x40(r3)
lbl_fn_804862C4_00001150:
    lwz r3, 0x4(r30)
    lwz r0, 0x58(r1)
    lwz r5, 0x4c(r1)
    mulli r4, r3, 0x44
    lwz r7, 0x0(r30)
    addi r5, r5, 0x1
    stw r5, 0x4c(r1)
    mulli r0, r0, 0x44
    lwz r3, 0x48(r1)
    add r5, r7, r4
    add r6, r3, r0
    b lbl_fn_804862C4_0000121C
lbl_fn_804862C4_00001180:
    subic. r6, r6, 0x44
    subi r5, r5, 0x44
    beq lbl_fn_804862C4_00001204
    lwz r0, 0x0(r5)
    stw r0, 0x0(r6)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r5)
    psq_l f1, 0x8(r5), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r5)
    psq_l f1, 0x14(r5), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lwz r0, 0x20(r5)
    stw r0, 0x20(r6)
    lfs f0, 0x24(r5)
    stfs f0, 0x24(r6)
    lfs f0, 0x28(r5)
    stfs f0, 0x28(r6)
    lfs f0, 0x2c(r5)
    stfs f0, 0x2c(r6)
    lfs f0, 0x30(r5)
    stfs f0, 0x30(r6)
    lfs f0, 0x34(r5)
    stfs f0, 0x34(r6)
    lfs f0, 0x38(r5)
    stfs f0, 0x38(r6)
    lfs f0, 0x3c(r5)
    stfs f0, 0x3c(r6)
    lfs f0, 0x40(r5)
    stfs f0, 0x40(r6)
lbl_fn_804862C4_00001204:
    lwz r4, 0x58(r1)
    lwz r3, 0x4c(r1)
    subi r0, r4, 0x1
    stw r0, 0x58(r1)
    addi r0, r3, 0x1
    stw r0, 0x4c(r1)
lbl_fn_804862C4_0000121C:
    cmplw r7, r5
    blt lbl_fn_804862C4_00001180
    li r5, 0x0
    stw r5, 0x4(r30)
    addic. r0, r1, 0x48
    lwz r0, 0x4c(r1)
    lwz r6, 0x8(r30)
    lwz r3, 0x50(r1)
    stw r3, 0x8(r30)
    lwz r4, 0x48(r1)
    lwz r3, 0x0(r30)
    stw r6, 0x50(r1)
    stw r4, 0x0(r30)
    stw r3, 0x48(r1)
    stw r0, 0x4(r30)
    stw r5, 0x4c(r1)
    beq lbl_fn_804862C4_00001270
    cmpwi r3, 0x0
    beq lbl_fn_804862C4_00001270
    stw r5, 0x4c(r1)
    bl dtor_80084684
lbl_fn_804862C4_00001270:
    addi r11, r1, 0x120
    bl _restgpr_26
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80486BEC(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    lis r0, 0x4330
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    fmr f31, f1
    stw r31, 0x4c(r1)
    mr r31, r4
    stw r0, 0x30(r1)
    lwz r3, lbl_8087EFB4
    stw r0, 0x38(r1)
    bl fn_800C16B4
    extrwi r0, r31, 8, 8
    stw r0, 0x34(r1)
    lis r5, lbl_80756338@ha
    clrlwi r4, r31, 24
    lfd f1, 0x30(r1)
    extrwi r0, r31, 8, 16
    stw r0, 0x3c(r1)
    srwi r0, r31, 24
    lfd f5, lbl_80756338@l(r5)
    addi r31, r3, 0x198
    lfd f0, 0x38(r1)
    li r3, 0x0
    fsubs f1, f1, f5
    lfs f4, lbl_80887010
    fsubs f2, f0, f5
    stw r0, 0x3c(r1)
    fmuls f3, f4, f1
    stw r4, 0x34(r1)
    lfd f0, 0x38(r1)
    fmuls f2, f4, f2
    lfd f1, 0x30(r1)
    stfs f3, 0x28(r31)
    fsubs f1, f1, f5
    fsubs f0, f0, f5
    stfs f2, 0x2c(r31)
    fmuls f1, f4, f1
    stfs f3, 0x8(r1)
    fmuls f0, f4, f0
    stfs f1, 0x30(r31)
    stfs f0, 0x34(r31)
    stfs f31, 0x1c(r31)
    stfs f31, 0x20(r31)
    lbz r0, lbl_8087F4C0
    stfs f2, 0xc(r1)
    extsb. r0, r0
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    stw r3, 0x18(r1)
    bne lbl_fn_80486BEC_00001380
    lis r6, lbl_807C88F0@ha
    lis r4, fn_8041D180@ha
    lis r3, fn_8041D198@ha
    li r0, 0x1
    addi r3, r3, fn_8041D198@l
    addi r5, r6, lbl_807C88F0@l
    addi r4, r4, fn_8041D180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C88F0@l(r6)
    stb r0, lbl_8087F4C0
lbl_fn_80486BEC_00001380:
    lis r3, lbl_807C88F0@ha
    lwz r12, lbl_807C88F0@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80486BEC_000013A4
    addi r3, r1, 0x1c
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80486BEC_000013A4:
    lis r0, fn_80482DF4@ha
    addic. r0, r0, 11764
    beq lbl_fn_80486BEC_000013BC
    stw r0, 0x1c(r1)
    li r0, 0x1
    b lbl_fn_80486BEC_000013C0
lbl_fn_80486BEC_000013BC:
    li r0, 0x0
lbl_fn_80486BEC_000013C0:
    cmpwi r0, 0x0
    beq lbl_fn_80486BEC_000013D8
    lis r3, lbl_807C88F0@ha
    addi r3, r3, lbl_807C88F0@l
    stw r3, 0x18(r1)
    b lbl_fn_80486BEC_000013E0
lbl_fn_80486BEC_000013D8:
    li r0, 0x0
    stw r0, 0x18(r1)
lbl_fn_80486BEC_000013E0:
    lwz r3, lbl_8087F558
    mr r5, r31
    addi r4, r1, 0x18
    bl fn_80491528
    addic. r3, r1, 0x18
    beq lbl_fn_80486BEC_0000142C
    lwz r4, 0x18(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80486BEC_0000142C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80486BEC_00001424
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80486BEC_00001424:
    li r0, 0x0
    stw r0, 0x18(r1)
lbl_fn_80486BEC_0000142C:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80486DAC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    lis r0, 0x4330
    stw r31, 0x4c(r1)
    mr r31, r4
    stw r0, 0x30(r1)
    lwz r3, lbl_8087EFB4
    stw r0, 0x38(r1)
    bl fn_800C16B4
    extrwi r0, r31, 8, 8
    stw r0, 0x34(r1)
    lis r5, lbl_80756338@ha
    clrlwi r4, r31, 24
    lfd f1, 0x30(r1)
    extrwi r0, r31, 8, 16
    stw r0, 0x3c(r1)
    srwi r0, r31, 24
    lfd f5, lbl_80756338@l(r5)
    addi r31, r3, 0x1c
    lfd f0, 0x38(r1)
    li r3, 0x0
    fsubs f1, f1, f5
    lfs f4, lbl_80887010
    fsubs f2, f0, f5
    stw r0, 0x3c(r1)
    fmuls f3, f4, f1
    stw r4, 0x34(r1)
    lfd f0, 0x38(r1)
    fmuls f2, f4, f2
    lfd f1, 0x30(r1)
    stfs f3, 0x0(r31)
    fsubs f1, f1, f5
    fsubs f0, f0, f5
    stfs f2, 0x4(r31)
    fmuls f1, f4, f1
    stfs f3, 0x8(r1)
    fmuls f0, f4, f0
    stfs f1, 0x8(r31)
    stfs f0, 0xc(r31)
    lbz r0, lbl_8087F4C0
    stfs f2, 0xc(r1)
    extsb. r0, r0
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    stw r3, 0x18(r1)
    bne lbl_fn_80486DAC_0000152C
    lis r6, lbl_807C88F0@ha
    lis r4, fn_8041D180@ha
    lis r3, fn_8041D198@ha
    li r0, 0x1
    addi r3, r3, fn_8041D198@l
    addi r5, r6, lbl_807C88F0@l
    addi r4, r4, fn_8041D180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C88F0@l(r6)
    stb r0, lbl_8087F4C0
lbl_fn_80486DAC_0000152C:
    lis r3, lbl_807C88F0@ha
    lwz r12, lbl_807C88F0@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80486DAC_00001550
    addi r3, r1, 0x1c
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80486DAC_00001550:
    lis r0, fn_80482E28@ha
    addic. r0, r0, 11816
    beq lbl_fn_80486DAC_00001568
    stw r0, 0x1c(r1)
    li r0, 0x1
    b lbl_fn_80486DAC_0000156C
lbl_fn_80486DAC_00001568:
    li r0, 0x0
lbl_fn_80486DAC_0000156C:
    cmpwi r0, 0x0
    beq lbl_fn_80486DAC_00001584
    lis r3, lbl_807C88F0@ha
    addi r3, r3, lbl_807C88F0@l
    stw r3, 0x18(r1)
    b lbl_fn_80486DAC_0000158C
lbl_fn_80486DAC_00001584:
    li r0, 0x0
    stw r0, 0x18(r1)
lbl_fn_80486DAC_0000158C:
    lwz r3, lbl_8087F558
    mr r5, r31
    addi r4, r1, 0x18
    bl fn_80491528
    addic. r3, r1, 0x18
    beq lbl_fn_80486DAC_000015D8
    lwz r4, 0x18(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80486DAC_000015D8
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80486DAC_000015D0
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80486DAC_000015D0:
    li r0, 0x0
    stw r0, 0x18(r1)
lbl_fn_80486DAC_000015D8:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80486F50(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r4, 0x0
    addi r3, r3, 0x1ab0
    stw r0, 0x34(r1)
    lbz r0, lbl_8087F4C0
    stw r3, 0x8(r1)
    extsb. r0, r0
    stw r4, 0xc(r1)
    stb r4, 0x10(r1)
    stw r4, 0x18(r1)
    bne lbl_fn_80486F50_00001644
    lis r6, lbl_807C88F0@ha
    lis r4, fn_8041D180@ha
    lis r3, fn_8041D198@ha
    li r0, 0x1
    addi r3, r3, fn_8041D198@l
    addi r5, r6, lbl_807C88F0@l
    addi r4, r4, fn_8041D180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C88F0@l(r6)
    stb r0, lbl_8087F4C0
lbl_fn_80486F50_00001644:
    lis r3, lbl_807C88F0@ha
    lwz r12, lbl_807C88F0@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80486F50_00001668
    addi r3, r1, 0x1c
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80486F50_00001668:
    lis r0, fn_80482E4C@ha
    addic. r0, r0, 11852
    beq lbl_fn_80486F50_00001680
    stw r0, 0x1c(r1)
    li r0, 0x1
    b lbl_fn_80486F50_00001684
lbl_fn_80486F50_00001680:
    li r0, 0x0
lbl_fn_80486F50_00001684:
    cmpwi r0, 0x0
    beq lbl_fn_80486F50_0000169C
    lis r3, lbl_807C88F0@ha
    addi r3, r3, lbl_807C88F0@l
    stw r3, 0x18(r1)
    b lbl_fn_80486F50_000016A4
lbl_fn_80486F50_0000169C:
    li r0, 0x0
    stw r0, 0x18(r1)
lbl_fn_80486F50_000016A4:
    lwz r3, lbl_8087F558
    addi r4, r1, 0x18
    addi r5, r1, 0x8
    bl fn_80491528
    addic. r3, r1, 0x18
    beq lbl_fn_80486F50_000016F0
    lwz r4, 0x18(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80486F50_000016F0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80486F50_000016E8
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80486F50_000016E8:
    li r0, 0x0
    stw r0, 0x18(r1)
lbl_fn_80486F50_000016F0:
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80487064(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r4, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    bgt lbl_fn_80487064_00001778
    lwz r3, lbl_8087F430
    li r31, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_80487064_00001748
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_80487064_00001748
    lwz r3, lbl_8087F430
    bl fn_80373148
    mr r31, r3
lbl_fn_80487064_00001748:
    cmpwi r31, 0x0
    bne lbl_fn_80487064_0000176C
    lwz r3, lbl_8087F558
    cmpwi r3, 0x0
    beq lbl_fn_80487064_0000176C
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80487064_0000176C
    lwz r31, 0x4c(r3)
lbl_fn_80487064_0000176C:
    cmpwi r31, 0x0
    beq lbl_fn_80487064_00001778
    stw r30, 0x104(r31)
lbl_fn_80487064_00001778:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804870F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_804870F4_000017D4
    mr r3, r0
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_804870F4_000017D4
    lwz r3, lbl_8087F430
    bl fn_80373148
    mr r31, r3
lbl_fn_804870F4_000017D4:
    cmpwi r31, 0x0
    bne lbl_fn_804870F4_000017F8
    lwz r3, lbl_8087F558
    cmpwi r3, 0x0
    beq lbl_fn_804870F4_000017F8
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804870F4_000017F8
    lwz r31, 0x4c(r3)
lbl_fn_804870F4_000017F8:
    cmpwi r31, 0x0
    beq lbl_fn_804870F4_00001808
    lwz r0, 0x1d6c(r30)
    stw r0, 0x104(r31)
lbl_fn_804870F4_00001808:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80487184(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    bne lbl_fn_80487184_0000187C
    lwz r0, 0x1a9c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80487184_0000187C
    lis r5, 0x100
    li r4, 0xa
    subi r6, r5, 0x1
    li r7, 0x0
    li r5, -0x1
    bl fn_8006A5A8
    stw r3, 0x1a9c(r31)
    li r4, 0x1
    bl fn_800D246C
    lwz r3, 0x1a9c(r31)
    li r0, 0x12
    stw r0, 0x78(r3)
lbl_fn_80487184_0000187C:
    lwz r3, 0x1a7c(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80487184_00001898
    li r3, 0x0
    b lbl_fn_80487184_00001B18
lbl_fn_80487184_00001898:
    lwz r3, 0x1a80(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80487184_000018B4
    li r3, 0x0
    b lbl_fn_80487184_00001B18
lbl_fn_80487184_000018B4:
    lwz r3, 0x1aa8(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80487184_000018D0
    li r3, 0x0
    b lbl_fn_80487184_00001B18
lbl_fn_80487184_000018D0:
    lwz r3, 0x1a9c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80487184_000018F4
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80487184_000018F4
    li r3, 0x0
    b lbl_fn_80487184_00001B18
lbl_fn_80487184_000018F4:
    addi r3, r31, 0x1eb8
    bl fn_800C1990
    cmpwi r3, 0x0
    beq lbl_fn_80487184_0000190C
    li r3, 0x0
    b lbl_fn_80487184_00001B18
lbl_fn_80487184_0000190C:
    lwz r3, 0x23ac(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80487184_00001928
    li r3, 0x0
    b lbl_fn_80487184_00001B18
lbl_fn_80487184_00001928:
    lwz r3, 0x23b0(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80487184_00001944
    li r3, 0x0
    b lbl_fn_80487184_00001B18
lbl_fn_80487184_00001944:
    lwz r3, 0x241c(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80487184_00001960
    li r3, 0x0
    b lbl_fn_80487184_00001B18
lbl_fn_80487184_00001960:
    lwz r3, 0x2438(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80487184_0000197C
    li r3, 0x0
    b lbl_fn_80487184_00001B18
lbl_fn_80487184_0000197C:
    lwz r3, 0x48(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80487184_00001998
    li r3, 0x0
    b lbl_fn_80487184_00001B18
lbl_fn_80487184_00001998:
    lwz r3, 0x1a7c(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1a7c(r31)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x1a7c(r31)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x1a80(r31)
    bl fn_800D246C
    lwz r3, 0x1a80(r31)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x1a80(r31)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x1aa8(r31)
    bl fn_800D246C
    lwz r3, 0x1aa8(r31)
    li r0, 0x0
    li r4, 0x0
    stw r0, 0x48(r3)
    lwz r3, 0x23ac(r31)
    bl fn_800D246C
    lwz r3, 0x23ac(r31)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x23ac(r31)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x23b0(r31)
    bl fn_800D246C
    lwz r3, 0x23b0(r31)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x23b0(r31)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x48(r31)
    bl fn_800D246C
    lwz r3, 0x48(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x48(r31)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x1a9c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80487184_00001ABC
    li r4, 0x0
    bl fn_800D246C
    lwz r4, 0x1a9c(r31)
    li r0, 0x1
    lwz r3, 0x38(r4)
    ori r3, r3, 0x4
    stw r3, 0x38(r4)
    lwz r3, 0x1a9c(r31)
    stw r0, 0x64(r3)
lbl_fn_80487184_00001ABC:
    lwz r3, 0x241c(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x241c(r31)
    li r4, 0x0
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x241c(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x2438(r31)
    bl fn_800D246C
    lwz r4, 0x2438(r31)
    li r3, 0x1
    lwz r0, 0xfc(r4)
    oris r0, r0, 0x1000
    stw r0, 0xfc(r4)
    lwz r4, 0x2438(r31)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_80487184_00001B18:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
