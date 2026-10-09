#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_16(void);
extern void _restgpr_27(void);
extern void _savegpr_16(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80084320(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_801F3FF8(void);
extern void fn_801F4728(void);
extern void fn_801F48C8(void);
extern void fn_801F4C14(void);
extern void fn_801F4CB4(void);
extern void fn_801F4E8C(void);
extern void fn_801FEE08(void);
extern void fn_8020924C(void);
extern void fn_80211480(void);
extern void fn_80444BE8(void);
extern void fn_80444C50(void);
extern void fn_804A29C4(void);
extern void fn_804AC79C(void);
extern void fn_804AC7EC(void);
extern void fn_804AC96C(void);
extern void fn_804ACAF8(void);
extern void fn_804ACD10(void);
extern void fn_804ACDBC(void);
extern void fn_804AD000(void);
extern void fn_804C9C88(void);
extern void fn_804C9EF8(void);
extern void fn_804CA250(void);
extern void fn_804CAAE8(void);
extern void fn_804CAD90(void);
extern void fn_804CC618(void);
extern void fn_804CC7A4(void);
extern void fn_804CCB54(void);
extern void fn_804E4B48(void);
extern void fn_804E4C38(void);
extern void fn_804EB484(void);
extern void fn_804F7EF4(void);
extern void fn_8050EAEC(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80758E44[];
extern u8 lbl_80759290[];
extern u8 lbl_80759374[];
extern u8 lbl_80790EF0[];

/* Small data declarations */
extern u32 lbl_8087E118;
extern u32 lbl_8087E140;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F580;
extern u32 lbl_8087F588;
extern u32 lbl_8087F5E0;
extern u32 lbl_8087F5E4;
extern u32 lbl_8087F5EC;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_8087F86C;
extern u32 lbl_808813D0;
extern u32 lbl_808874B4;
extern u32 lbl_808874BC;
extern u32 lbl_808874D8;
extern u32 lbl_808874DC;
extern u32 lbl_808874E0;
extern u32 lbl_808874E4;
extern u32 lbl_808874E8;
extern u32 lbl_808874EC;

/* Function declarations */
void fn_804C8204(void);
void fn_804C822C(void);
void fn_804C8740(void);
void fn_804C8748(void);
void fn_804C8778(void);
void fn_804C87E0(void);
void fn_804C8C30(void);
void fn_804C8CF4(void);
void fn_804C8D80(void);
void fn_804C9358(void);
void fn_804C935C(void);
void fn_804C9360(void);
void fn_804C972C(void);

asm void fn_804C8204(void)
{
    nofralloc
    lwz r0, 0x19c(r3)
    li r4, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_804C8204_00000020
    lwz r0, 0x1a0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804C8204_00000020
    li r4, 0x1
lbl_fn_804C8204_00000020:
    mr r3, r4
    blr
}

asm void fn_804C822C(void)
{
    nofralloc
    stwu r1, -0x320(r1)
    mflr r0
    stw r0, 0x324(r1)
    addi r11, r1, 0x2f0
    stfd f31, 0x310(r1)
    psq_st f31, 0x318(r1), 0, 0
    stfd f30, 0x300(r1)
    psq_st f30, 0x308(r1), 0, 0
    stfd f29, 0x2f0(r1)
    psq_st f29, 0x2f8(r1), 0, 0
    bl _savegpr_16
    li r0, 0x40
    li r4, 0x0
    mr r17, r3
    stw r4, 0x68(r1)
    addi r3, r1, 0xa4
    stw r4, 0x6c(r1)
    stw r4, 0x70(r1)
    stw r4, 0x74(r1)
    stw r4, 0x78(r1)
    stw r4, 0x7c(r1)
    stw r4, 0x80(r1)
    stw r4, 0x84(r1)
    stw r4, 0x88(r1)
    stw r4, 0x8c(r1)
    stw r4, 0x90(r1)
    stw r4, 0x94(r1)
    stw r4, 0x98(r1)
    stw r4, 0x9c(r1)
    stw r4, 0xa0(r1)
    stw r4, 0xa4(r1)
    mtctr r0
lbl_fn_804C822C_000000A8:
    stw r4, 0x4(r3)
    stwu r4, 0x8(r3)
    bdnz lbl_fn_804C822C_000000A8
    lwz r3, lbl_8087F610
    mr r18, r17
    lfs f30, lbl_808874B4
    li r19, 0x0
    addi r23, r3, 0x2b80
    stfs f30, 0x50(r1)
    lfs f29, lbl_808874BC
    addi r20, r23, 0x8
    stfs f30, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f30, 0x5c(r1)
    stfs f30, 0x60(r1)
lbl_fn_804C822C_000000E4:
    lwz r16, 0xa0(r18)
    cmpwi r16, 0x0
    beq lbl_fn_804C822C_00000104
    mr r3, r16
    li r4, 0x1
    bl fn_800D246C
    stfs f29, 0x104(r16)
    stfs f30, 0x100(r16)
lbl_fn_804C822C_00000104:
    addi r19, r19, 0x1
    addi r18, r18, 0x4
    cmpwi r19, 0x8
    blt lbl_fn_804C822C_000000E4
    lis r16, lbl_80758E44@ha
    lwz r18, 0x54(r17)
    addi r16, r16, lbl_80758E44@l
    addi r3, r16, 0x2f5
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r18
    addi r3, r1, 0x3c
    bl fn_801F4E8C
    lfs f4, 0x3c(r1)
    addi r4, r16, 0x2ff
    lfs f3, 0x40(r1)
    addi r5, r1, 0x50
    lfs f2, 0x44(r1)
    lfs f1, 0x48(r1)
    lfs f0, 0x4c(r1)
    stfs f4, 0x50(r1)
    stfs f3, 0x54(r1)
    stfs f2, 0x58(r1)
    stfs f1, 0x5c(r1)
    stfs f0, 0x60(r1)
    lwz r3, 0xc4(r17)
    bl fn_801F4728
    lwz r3, lbl_8087F86C
    lwz r16, 0x9f4(r3)
    cmpwi r16, 0x0
    beq lbl_fn_804C822C_00000184
    b lbl_fn_804C822C_00000188
lbl_fn_804C822C_00000184:
    la r16, lbl_808813D0
lbl_fn_804C822C_00000188:
    lwz r4, 0xc4(r17)
    lis r3, lbl_80758E44@ha
    addi r28, r3, lbl_80758E44@l
    addi r3, r28, 0x416
    addi r18, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r18
    mr r5, r16
    bl fn_801FEE08
    lfs f29, lbl_808874B4
    mr r22, r17
    lfs f31, lbl_808874DC
    li r19, 0x0
    lfs f30, lbl_808874D8
    li r16, 0x0
    la r27, lbl_8087E118
    la r31, lbl_8087E118
    la r26, lbl_8087E118
    la r25, lbl_8087E118
    la r24, lbl_8087E118
    b lbl_fn_804C822C_00000500
lbl_fn_804C822C_000001E0:
    add r3, r20, r16
    lwz r5, 0xd4(r3)
    addi r21, r3, 0x4
    srwi r0, r5, 31
    cmplwi r0, 0x1
    bne lbl_fn_804C822C_00000494
    lbz r0, 0xd0(r3)
    cmpwi r21, 0x0
    lwz r3, lbl_8087F610
    mulli r0, r0, 0x34
    add r29, r3, r0
    beq lbl_fn_804C822C_000004F4
    lbz r4, 0xcc(r21)
    extrwi r0, r5, 1, 1
    cmplwi r0, 0x1
    slwi r0, r4, 2
    add r4, r23, r0
    lwz r18, 0x6b14(r4)
    bne lbl_fn_804C822C_00000230
    lwz r18, 0x6af4(r23)
lbl_fn_804C822C_00000230:
    mr r4, r21
    bl fn_804E4B48
    lwz r4, lbl_8087F610
    mr r30, r3
    lwz r0, 0x540(r4)
    cmpwi r0, 0x2
    beq lbl_fn_804C822C_0000025C
    mr r3, r4
    bl fn_804E4C38
    cmpwi r3, 0x0
    bne lbl_fn_804C822C_00000280
lbl_fn_804C822C_0000025C:
    lwz r4, 0xa0(r22)
    addi r3, r28, 0x3db
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r27
    bl fn_801FEE08
    b lbl_fn_804C822C_00000294
lbl_fn_804C822C_00000280:
    lwz r3, 0xa0(r22)
    addi r4, r28, 0x3db
    addi r5, r30, 0x1
    li r6, 0x0
    bl fn_801F4CB4
lbl_fn_804C822C_00000294:
    lwz r3, lbl_8087F610
    mr r4, r21
    bl fn_804EB484
    cmpwi r3, 0x0
    bne lbl_fn_804C822C_000002B0
    addi r29, r29, 0x368
    b lbl_fn_804C822C_000002C8
lbl_fn_804C822C_000002B0:
    lwz r3, lbl_8087F86C
    lwz r29, 0x9cc(r3)
    cmpwi r29, 0x0
    beq lbl_fn_804C822C_000002C4
    b lbl_fn_804C822C_000002C8
lbl_fn_804C822C_000002C4:
    la r29, lbl_808813D0
lbl_fn_804C822C_000002C8:
    lwz r4, 0xa0(r22)
    addi r3, r28, 0x3e9
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r29
    bl fn_801FEE08
    lwz r3, 0xa0(r22)
    mr r5, r28
    addi r4, r28, 0x3fa
    bl fn_801F4C14
    lwz r3, lbl_8087F610
    mr r4, r21
    bl fn_804EB484
    cmpwi r3, 0x0
    bne lbl_fn_804C822C_000003DC
    cmpwi r18, 0x0
    ble lbl_fn_804C822C_000003DC
    mr r3, r18
    bl fn_80211480
    mr r29, r3
    lwz r3, lbl_8087F4F0
    mr r4, r29
    bl fn_80444BE8
    cmpwi r29, 0x0
    mr r18, r3
    beq lbl_fn_804C822C_000003DC
    lwz r5, 0x8(r29)
    addi r3, r1, 0xa8
    addi r4, r31, 0x20
    crclr 6
    bl fn_800DD3FC
    lwz r4, 0xa0(r22)
    addi r3, r28, 0x3fa
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    addi r5, r1, 0xa8
    bl fn_801FEE08
    lwz r0, 0xd0(r21)
    extrwi r0, r0, 1, 1
    cmplwi r0, 0x1
    bne lbl_fn_804C822C_000003DC
    lwz r4, 0xc4(r17)
    addi r3, r28, 0x416
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    addi r5, r1, 0xa8
    bl fn_801FEE08
    lwz r4, lbl_8087F4F0
    mr r5, r18
    addi r3, r1, 0x18
    bl fn_80444C50
    lwz r3, 0xc4(r17)
    addi r4, r28, 0x424
    addi r5, r1, 0x18
    bl fn_801F48C8
    lwz r4, lbl_8087F4F0
    mr r5, r18
    addi r3, r1, 0x8
    bl fn_80444C50
    lwz r3, 0xc4(r17)
    addi r4, r28, 0x434
    addi r5, r1, 0x8
    bl fn_801F48C8
lbl_fn_804C822C_000003DC:
    lwz r18, 0xa0(r22)
    cmpwi r18, 0x0
    beq lbl_fn_804C822C_00000404
    mr r3, r18
    li r4, 0x0
    bl fn_800D246C
    stfs f29, 0x104(r18)
    lwz r0, 0xfc(r18)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r18)
lbl_fn_804C822C_00000404:
    lwz r0, 0xd0(r21)
    extrwi r0, r0, 1, 1
    cmplwi r0, 0x1
    bne lbl_fn_804C822C_00000420
    lwz r3, 0xa0(r22)
    stfs f30, 0x100(r3)
    b lbl_fn_804C822C_00000428
lbl_fn_804C822C_00000420:
    lwz r3, 0xa0(r22)
    stfs f31, 0x100(r3)
lbl_fn_804C822C_00000428:
    addi r3, r1, 0x68
    addi r4, r28, 0x2d3
    addi r5, r19, 0x1
    crclr 6
    bl sprintf
    lwz r18, 0x54(r17)
    addi r3, r1, 0x68
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r18
    addi r3, r1, 0x28
    bl fn_801F4E8C
    lfs f4, 0x28(r1)
    addi r4, r28, 0x2e4
    lfs f3, 0x2c(r1)
    addi r5, r1, 0x50
    lfs f2, 0x30(r1)
    lfs f1, 0x34(r1)
    lfs f0, 0x38(r1)
    stfs f4, 0x50(r1)
    stfs f3, 0x54(r1)
    stfs f2, 0x58(r1)
    stfs f1, 0x5c(r1)
    stfs f0, 0x60(r1)
    lwz r3, 0xa0(r22)
    bl fn_801F4728
    b lbl_fn_804C822C_000004F4
lbl_fn_804C822C_00000494:
    lwz r4, 0xa0(r22)
    addi r3, r28, 0x3db
    addi r18, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r18
    mr r5, r26
    bl fn_801FEE08
    lwz r4, 0xa0(r22)
    addi r3, r28, 0x3e9
    addi r18, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r18
    mr r5, r25
    bl fn_801FEE08
    lwz r4, 0xa0(r22)
    addi r3, r28, 0x3fa
    addi r18, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r18
    mr r5, r24
    bl fn_801FEE08
lbl_fn_804C822C_000004F4:
    addi r22, r22, 0x4
    addi r19, r19, 0x1
    addi r16, r16, 0xd5c
lbl_fn_804C822C_00000500:
    lwz r0, 0x0(r20)
    cmpw r19, r0
    blt lbl_fn_804C822C_000001E0
    addi r11, r1, 0x2f0
    psq_l f31, 0x318(r1), 0, 0
    lfd f31, 0x310(r1)
    psq_l f30, 0x308(r1), 0, 0
    lfd f30, 0x300(r1)
    psq_l f29, 0x2f8(r1), 0, 0
    lfd f29, 0x2f0(r1)
    bl _restgpr_16
    lwz r0, 0x324(r1)
    mtlr r0
    addi r1, r1, 0x320
    blr
}

asm void fn_804C8740(void)
{
    nofralloc
    lwz r3, lbl_8087F5E4
    b fn_800D2338
}

asm void fn_804C8748(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80758E44@ha
    addi r3, r3, lbl_80758E44@l
    stw r0, 0x14(r1)
    addi r3, r3, 0x441
    bl fn_800DC6B4
    lwz r0, 0x14(r1)
    stw r3, lbl_8087F5E0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804C8778(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F5EC
    cmpwi r0, 0x0
    bne lbl_fn_804C8778_000005C4
    lis r5, lbl_80759374@ha
    li r3, 0x218
    addi r5, r5, lbl_80759374@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_804C8778_000005C0
    mr r4, r31
    bl fn_804C87E0
lbl_fn_804C8778_000005C0:
    stw r3, lbl_8087F5EC
lbl_fn_804C8778_000005C4:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F5EC
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804C87E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r29, r3
    bl fn_800D1D3C
    lfs f0, lbl_808874E0
    lis r4, lbl_80790EF0@ha
    li r28, 0x0
    stw r28, 0xd8(r29)
    addi r4, r4, lbl_80790EF0@l
    addi r3, r29, 0x174
    stw r4, 0x0(r29)
    stw r28, 0xdc(r29)
    stw r28, 0xe0(r29)
    stw r28, 0xe4(r29)
    stw r28, 0xe8(r29)
    stw r28, 0xec(r29)
    stw r28, 0x160(r29)
    stw r28, 0x164(r29)
    stw r28, 0x168(r29)
    stw r28, 0x16c(r29)
    stfs f0, 0x170(r29)
    bl fn_800CB360
    lis r4, lbl_80759374@ha
    stw r28, 0x178(r29)
    addi r4, r4, lbl_80759374@l
    mr r3, r29
    stw r28, 0x210(r29)
    addi r4, r4, 0x1
    li r5, 0x0
    bl fn_801F3FF8
    lwz r0, 0x178(r29)
    stw r3, 0x4c(r29)
    cmplwi r0, 0x25
    bge lbl_fn_804C87E0_00000694
    lwz r0, 0x178(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x17c
    beq lbl_fn_804C87E0_00000688
    stw r3, 0x0(r4)
lbl_fn_804C87E0_00000688:
    lwz r3, 0x178(r29)
    addi r0, r3, 0x1
    stw r0, 0x178(r29)
lbl_fn_804C87E0_00000694:
    lis r4, lbl_80759374@ha
    mr r3, r29
    addi r4, r4, lbl_80759374@l
    li r5, 0x0
    addi r4, r4, 0x27
    bl fn_801F3FF8
    lwz r0, 0x178(r29)
    stw r3, 0x48(r29)
    cmplwi r0, 0x25
    bge lbl_fn_804C87E0_000006E0
    lwz r0, 0x178(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x17c
    beq lbl_fn_804C87E0_000006D4
    stw r3, 0x0(r4)
lbl_fn_804C87E0_000006D4:
    lwz r3, 0x178(r29)
    addi r0, r3, 0x1
    stw r0, 0x178(r29)
lbl_fn_804C87E0_000006E0:
    lis r4, lbl_80759374@ha
    mr r3, r29
    addi r4, r4, lbl_80759374@l
    li r5, 0x0
    addi r4, r4, 0x4d
    bl fn_801F3FF8
    lwz r0, 0x178(r29)
    stw r3, 0x50(r29)
    cmplwi r0, 0x25
    bge lbl_fn_804C87E0_0000072C
    lwz r0, 0x178(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x17c
    beq lbl_fn_804C87E0_00000720
    stw r3, 0x0(r4)
lbl_fn_804C87E0_00000720:
    lwz r3, 0x178(r29)
    addi r0, r3, 0x1
    stw r0, 0x178(r29)
lbl_fn_804C87E0_0000072C:
    lis r28, lbl_80759374@ha
    li r27, 0x0
    addi r28, r28, lbl_80759374@l
    li r30, 0x0
lbl_fn_804C87E0_0000073C:
    mr r3, r29
    add r31, r29, r30
    addi r4, r28, 0x7a
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x74(r31)
    lwz r0, 0x178(r29)
    cmplwi r0, 0x25
    bge lbl_fn_804C87E0_00000784
    lwz r0, 0x178(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x17c
    beq lbl_fn_804C87E0_00000778
    stw r3, 0x0(r4)
lbl_fn_804C87E0_00000778:
    lwz r3, 0x178(r29)
    addi r0, r3, 0x1
    stw r0, 0x178(r29)
lbl_fn_804C87E0_00000784:
    addi r27, r27, 0x1
    addi r30, r30, 0x4
    cmpwi r27, 0x18
    blt lbl_fn_804C87E0_0000073C
    lis r28, lbl_80759374@ha
    li r27, 0x0
    addi r28, r28, lbl_80759374@l
    li r30, 0x0
lbl_fn_804C87E0_000007A4:
    mr r3, r29
    add r31, r29, r30
    addi r4, r28, 0xa0
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x58(r31)
    lwz r0, 0x178(r29)
    cmplwi r0, 0x25
    bge lbl_fn_804C87E0_000007EC
    lwz r0, 0x178(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x17c
    beq lbl_fn_804C87E0_000007E0
    stw r3, 0x0(r4)
lbl_fn_804C87E0_000007E0:
    lwz r3, 0x178(r29)
    addi r0, r3, 0x1
    stw r0, 0x178(r29)
lbl_fn_804C87E0_000007EC:
    addi r27, r27, 0x1
    addi r30, r30, 0x4
    cmpwi r27, 0x3
    blt lbl_fn_804C87E0_000007A4
    lis r3, lbl_80759374@ha
    li r30, 0x0
    li r31, 0x0
    addi r28, r3, lbl_80759374@l
lbl_fn_804C87E0_0000080C:
    mr r3, r29
    add r27, r29, r31
    addi r4, r28, 0xc9
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x64(r27)
    lwz r0, 0x178(r29)
    cmplwi r0, 0x25
    bge lbl_fn_804C87E0_00000854
    lwz r0, 0x178(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x17c
    beq lbl_fn_804C87E0_00000848
    stw r3, 0x0(r4)
lbl_fn_804C87E0_00000848:
    lwz r3, 0x178(r29)
    addi r0, r3, 0x1
    stw r0, 0x178(r29)
lbl_fn_804C87E0_00000854:
    mr r3, r29
    add r27, r29, r31
    addi r4, r28, 0x7a
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x6c(r27)
    lwz r0, 0x178(r29)
    cmplwi r0, 0x25
    bge lbl_fn_804C87E0_0000089C
    lwz r0, 0x178(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x17c
    beq lbl_fn_804C87E0_00000890
    stw r3, 0x0(r4)
lbl_fn_804C87E0_00000890:
    lwz r3, 0x178(r29)
    addi r0, r3, 0x1
    stw r0, 0x178(r29)
lbl_fn_804C87E0_0000089C:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0x2
    blt lbl_fn_804C87E0_0000080C
    lis r4, lbl_80759374@ha
    mr r3, r29
    addi r4, r4, lbl_80759374@l
    li r5, 0x0
    addi r4, r4, 0xf2
    bl fn_801F3FF8
    lwz r0, 0x178(r29)
    stw r3, 0x54(r29)
    cmplwi r0, 0x25
    bge lbl_fn_804C87E0_000008F8
    lwz r0, 0x178(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x17c
    beq lbl_fn_804C87E0_000008EC
    stw r3, 0x0(r4)
lbl_fn_804C87E0_000008EC:
    lwz r3, 0x178(r29)
    addi r0, r3, 0x1
    stw r0, 0x178(r29)
lbl_fn_804C87E0_000008F8:
    lis r4, lbl_80759374@ha
    mr r3, r29
    addi r4, r4, lbl_80759374@l
    li r5, 0x0
    addi r4, r4, 0x11b
    bl fn_801F3FF8
    lwz r0, 0x178(r29)
    stw r3, 0xd4(r29)
    cmplwi r0, 0x25
    bge lbl_fn_804C87E0_00000944
    lwz r0, 0x178(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x17c
    beq lbl_fn_804C87E0_00000938
    stw r3, 0x0(r4)
lbl_fn_804C87E0_00000938:
    lwz r3, 0x178(r29)
    addi r0, r3, 0x1
    stw r0, 0x178(r29)
lbl_fn_804C87E0_00000944:
    li r0, -0x1
    stw r0, 0xf0(r29)
    li r4, 0x0
    mr r3, r29
    stw r0, 0xf4(r29)
    stw r0, 0xf8(r29)
    stw r0, 0xfc(r29)
    stw r0, 0x100(r29)
    stw r0, 0x104(r29)
    stw r0, 0x108(r29)
    stw r0, 0x10c(r29)
    stw r4, 0x110(r29)
    stw r4, 0x114(r29)
    stw r4, 0x118(r29)
    stw r4, 0x11c(r29)
    stw r4, 0x120(r29)
    stw r4, 0x124(r29)
    stw r4, 0x128(r29)
    stw r4, 0x12c(r29)
    stw r4, 0x130(r29)
    stw r4, 0x134(r29)
    stw r4, 0x138(r29)
    stw r4, 0x13c(r29)
    stw r4, 0x140(r29)
    stw r4, 0x144(r29)
    stw r4, 0x148(r29)
    stw r4, 0x14c(r29)
    stw r4, 0x150(r29)
    stw r4, 0x154(r29)
    stw r4, 0x158(r29)
    stw r4, 0x15c(r29)
    bl fn_804CC618
    addi r28, r29, 0x17c
    b lbl_fn_804C87E0_000009E4
lbl_fn_804C87E0_000009CC:
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_804C87E0_000009E0
    li r4, 0x1
    bl fn_800D246C
lbl_fn_804C87E0_000009E0:
    addi r28, r28, 0x4
lbl_fn_804C87E0_000009E4:
    lwz r0, 0x178(r29)
    slwi r0, r0, 2
    add r3, r29, r0
    addi r0, r3, 0x17c
    cmplw r28, r0
    bne lbl_fn_804C87E0_000009CC
    lwz r0, lbl_8087F580
    cmpwi r0, 0x0
    bne lbl_fn_804C87E0_00000A10
    mr r3, r29
    bl fn_804A29C4
lbl_fn_804C87E0_00000A10:
    addi r11, r1, 0x20
    mr r3, r29
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804C8C30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_804C8C30_00000AD0
    lis r4, lbl_80790EF0@ha
    lwz r0, 0x210(r3)
    addi r4, r4, lbl_80790EF0@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    lwz r4, lbl_8087F628
    addi r31, r4, 0x430
    beq lbl_fn_804C8C30_00000A90
    li r0, 0x0
    stw r0, 0x210(r3)
    mr r3, r31
    bl fn_8050EAEC
    mr r3, r31
    li r4, 0x9f0
    bl fn_804F7EF4
lbl_fn_804C8C30_00000A90:
    li r3, 0x0
    stw r3, 0x178(r29)
    lwz r0, lbl_8087F5EC
    cmpwi r0, 0x0
    beq lbl_fn_804C8C30_00000AA8
    stw r3, lbl_8087F5EC
lbl_fn_804C8C30_00000AA8:
    addi r3, r29, 0x174
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r29
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r30, 0x0
    ble lbl_fn_804C8C30_00000AD0
    mr r3, r29
    bl dtor_80084684
lbl_fn_804C8C30_00000AD0:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804C8CF4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_804C8CF4_00000B60
    addi r31, r30, 0x17c
    b lbl_fn_804C8CF4_00000B34
lbl_fn_804C8CF4_00000B1C:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_804C8CF4_00000B30
    li r4, 0x0
    bl fn_800D246C
lbl_fn_804C8CF4_00000B30:
    addi r31, r31, 0x4
lbl_fn_804C8CF4_00000B34:
    lwz r0, 0x178(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x17c
    cmplw r31, r0
    bne lbl_fn_804C8CF4_00000B1C
    mr r3, r30
    li r4, 0x1
    bl fn_804C8D80
    li r3, 0x1
    b lbl_fn_804C8CF4_00000B64
lbl_fn_804C8CF4_00000B60:
    li r3, 0x0
lbl_fn_804C8CF4_00000B64:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804C8D80(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r0, 0xd8(r3)
    cmpw r0, r4
    beq lbl_fn_804C8D80_0000112C
    cmpwi r4, 0x0
    blt lbl_fn_804C8D80_0000112C
    stw r0, 0xdc(r3)
    stw r4, 0xd8(r3)
    bl fn_804C9360
    lwz r0, 0xd8(r31)
    cmpwi r0, 0x1
    beq lbl_fn_804C8D80_00000C04
    cmpwi r0, 0x2
    beq lbl_fn_804C8D80_00000D38
    cmpwi r0, 0x3
    beq lbl_fn_804C8D80_00000D4C
    cmpwi r0, 0x4
    beq lbl_fn_804C8D80_00000D94
    cmpwi r0, 0x5
    beq lbl_fn_804C8D80_00000ECC
    cmpwi r0, 0x6
    beq lbl_fn_804C8D80_00001004
    cmpwi r0, 0x7
    beq lbl_fn_804C8D80_00001080
    b lbl_fn_804C8D80_0000112C
lbl_fn_804C8D80_00000C04:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r30, 0x4c(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804C8D80_00000C44
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808874E4
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804C8D80_00000C44:
    lwz r30, 0x48(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804C8D80_00000C70
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808874E4
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804C8D80_00000C70:
    lwz r4, 0x50(r31)
    lis r30, lbl_80759374@ha
    addi r30, r30, lbl_80759374@l
    la r29, lbl_8087E140
    addi r3, r30, 0x138
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    lwz r4, 0x50(r31)
    addi r3, r30, 0x146
    la r29, lbl_8087E140
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    lwz r4, 0x50(r31)
    addi r3, r30, 0x154
    la r29, lbl_8087E140
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    lwz r4, 0x50(r31)
    addi r3, r30, 0x162
    la r29, lbl_8087E140
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    lwz r4, 0x50(r31)
    addi r3, r30, 0x170
    la r29, lbl_8087E140
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    li r0, 0x0
    stw r0, 0xe4(r31)
    b lbl_fn_804C8D80_0000112C
lbl_fn_804C8D80_00000D38:
    lwz r0, 0x160(r31)
    lfs f0, lbl_808874E0
    stw r0, 0xe4(r31)
    stfs f0, 0x170(r31)
    b lbl_fn_804C8D80_0000112C
lbl_fn_804C8D80_00000D4C:
    lwz r3, lbl_8087F588
    li r4, 0x0
    lfs f1, lbl_808874E4
    li r5, 0x1
    li r6, 0x0
    bl fn_804AC96C
    lwz r3, lbl_8087F588
    bl fn_804ACD10
    lwz r4, lbl_8087F86C
    lwz r3, lbl_8087F588
    lwz r4, 0x80c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804C8D80_00000D84
    b lbl_fn_804C8D80_00000D88
lbl_fn_804C8D80_00000D84:
    la r4, lbl_808813D0
lbl_fn_804C8D80_00000D88:
    li r5, 0x0
    bl fn_804AD000
    b lbl_fn_804C8D80_0000112C
lbl_fn_804C8D80_00000D94:
    mr r3, r31
    bl fn_804CC618
    mr r3, r31
    bl fn_804CAAE8
    lwz r29, 0x50(r31)
    lwz r0, 0x164(r31)
    cmpwi r29, 0x0
    stw r0, 0xe4(r31)
    beq lbl_fn_804C8D80_00000DD8
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808874E4
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C8D80_00000DD8:
    lfs f31, lbl_808874E4
    mr r28, r31
    li r30, 0x0
lbl_fn_804C8D80_00000DE4:
    lwz r29, 0x58(r28)
    cmpwi r29, 0x0
    beq lbl_fn_804C8D80_00000E0C
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C8D80_00000E0C:
    addi r30, r30, 0x1
    addi r28, r28, 0x4
    cmpwi r30, 0x3
    blt lbl_fn_804C8D80_00000DE4
    lfs f31, lbl_808874E4
    mr r28, r31
    li r30, 0x0
lbl_fn_804C8D80_00000E28:
    lwz r29, 0x64(r28)
    cmpwi r29, 0x0
    beq lbl_fn_804C8D80_00000E50
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C8D80_00000E50:
    lwz r29, 0x6c(r28)
    cmpwi r29, 0x0
    beq lbl_fn_804C8D80_00000E78
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C8D80_00000E78:
    addi r30, r30, 0x1
    addi r28, r28, 0x4
    cmpwi r30, 0x2
    blt lbl_fn_804C8D80_00000E28
    lfs f31, lbl_808874E4
    li r28, 0x0
lbl_fn_804C8D80_00000E90:
    lwz r29, 0x74(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C8D80_00000EB8
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C8D80_00000EB8:
    addi r28, r28, 0x1
    addi r31, r31, 0x4
    cmpwi r28, 0x18
    blt lbl_fn_804C8D80_00000E90
    b lbl_fn_804C8D80_0000112C
lbl_fn_804C8D80_00000ECC:
    mr r3, r31
    bl fn_804CC7A4
    mr r3, r31
    bl fn_804CAAE8
    lwz r29, 0x50(r31)
    lwz r0, 0x168(r31)
    cmpwi r29, 0x0
    stw r0, 0xe4(r31)
    beq lbl_fn_804C8D80_00000F10
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808874E4
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C8D80_00000F10:
    lfs f31, lbl_808874E4
    mr r28, r31
    li r30, 0x0
lbl_fn_804C8D80_00000F1C:
    lwz r29, 0x58(r28)
    cmpwi r29, 0x0
    beq lbl_fn_804C8D80_00000F44
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C8D80_00000F44:
    addi r30, r30, 0x1
    addi r28, r28, 0x4
    cmpwi r30, 0x3
    blt lbl_fn_804C8D80_00000F1C
    lfs f31, lbl_808874E4
    mr r28, r31
    li r30, 0x0
lbl_fn_804C8D80_00000F60:
    lwz r29, 0x64(r28)
    cmpwi r29, 0x0
    beq lbl_fn_804C8D80_00000F88
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C8D80_00000F88:
    lwz r29, 0x6c(r28)
    cmpwi r29, 0x0
    beq lbl_fn_804C8D80_00000FB0
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C8D80_00000FB0:
    addi r30, r30, 0x1
    addi r28, r28, 0x4
    cmpwi r30, 0x2
    blt lbl_fn_804C8D80_00000F60
    lfs f31, lbl_808874E4
    li r28, 0x0
lbl_fn_804C8D80_00000FC8:
    lwz r29, 0x74(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C8D80_00000FF0
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C8D80_00000FF0:
    addi r28, r28, 0x1
    addi r31, r31, 0x4
    cmpwi r28, 0x18
    blt lbl_fn_804C8D80_00000FC8
    b lbl_fn_804C8D80_0000112C
lbl_fn_804C8D80_00001004:
    lwz r0, 0x16c(r31)
    mr r3, r31
    lfs f0, lbl_808874E0
    stw r0, 0xe4(r31)
    stfs f0, 0x170(r31)
    bl fn_804CCB54
    mr r3, r31
    bl fn_804CAD90
    lwz r29, 0x54(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C8D80_00001050
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808874E4
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C8D80_00001050:
    lwz r29, 0xd4(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C8D80_0000112C
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808874E4
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
    b lbl_fn_804C8D80_0000112C
lbl_fn_804C8D80_00001080:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r29, 0x4c(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C8D80_000010C0
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808874E8
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C8D80_000010C0:
    lwz r29, 0x48(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C8D80_000010EC
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808874E8
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C8D80_000010EC:
    lfs f31, lbl_808874E8
    li r28, 0x0
lbl_fn_804C8D80_000010F4:
    lwz r29, 0x74(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C8D80_0000111C
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C8D80_0000111C:
    addi r28, r28, 0x1
    addi r31, r31, 0x4
    cmpwi r28, 0xa
    blt lbl_fn_804C8D80_000010F4
lbl_fn_804C8D80_0000112C:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804C9358(void)
{
    nofralloc
    blr
}

asm void fn_804C935C(void)
{
    nofralloc
    blr
}

asm void fn_804C9360(void)
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
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x2
    beq lbl_fn_804C9360_000011BC
    cmpwi r0, 0x3
    beq lbl_fn_804C9360_00001204
    cmpwi r0, 0x4
    beq lbl_fn_804C9360_00001218
    cmpwi r0, 0x5
    beq lbl_fn_804C9360_00001364
    cmpwi r0, 0x6
    beq lbl_fn_804C9360_000013E4
    b lbl_fn_804C9360_000014F8
lbl_fn_804C9360_000011BC:
    lwz r0, 0xd8(r3)
    cmpwi r0, 0x7
    beq lbl_fn_804C9360_000011F8
    cmpwi r0, 0x3
    beq lbl_fn_804C9360_000011F8
    lwz r30, 0x4c(r3)
    cmpwi r30, 0x0
    beq lbl_fn_804C9360_000011F8
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_808874E8
    stfs f0, 0x104(r30)
    lfs f0, lbl_808874E0
    stfs f0, 0x100(r30)
lbl_fn_804C9360_000011F8:
    lwz r0, 0xe4(r31)
    stw r0, 0x160(r31)
    b lbl_fn_804C9360_000014F8
lbl_fn_804C9360_00001204:
    lwz r3, lbl_8087F588
    bl fn_804ACAF8
    lwz r3, lbl_8087F588
    bl fn_804ACDBC
    b lbl_fn_804C9360_000014F8
lbl_fn_804C9360_00001218:
    lwz r0, 0xd8(r3)
    cmpwi r0, 0x5
    beq lbl_fn_804C9360_0000132C
    lwz r30, 0x50(r3)
    cmpwi r30, 0x0
    beq lbl_fn_804C9360_0000124C
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_808874E8
    stfs f0, 0x104(r30)
    lfs f0, lbl_808874E0
    stfs f0, 0x100(r30)
lbl_fn_804C9360_0000124C:
    lfs f31, lbl_808874E8
    mr r28, r31
    lfs f30, lbl_808874E0
    li r29, 0x0
lbl_fn_804C9360_0000125C:
    lwz r30, 0x58(r28)
    cmpwi r30, 0x0
    beq lbl_fn_804C9360_0000127C
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    stfs f31, 0x104(r30)
    stfs f30, 0x100(r30)
lbl_fn_804C9360_0000127C:
    addi r29, r29, 0x1
    addi r28, r28, 0x4
    cmpwi r29, 0x3
    blt lbl_fn_804C9360_0000125C
    lfs f31, lbl_808874E8
    mr r28, r31
    lfs f30, lbl_808874E0
    li r29, 0x0
lbl_fn_804C9360_0000129C:
    lwz r30, 0x74(r28)
    cmpwi r30, 0x0
    beq lbl_fn_804C9360_000012BC
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    stfs f31, 0x104(r30)
    stfs f30, 0x100(r30)
lbl_fn_804C9360_000012BC:
    addi r29, r29, 0x1
    addi r28, r28, 0x4
    cmpwi r29, 0x18
    blt lbl_fn_804C9360_0000129C
    lfs f31, lbl_808874E8
    mr r28, r31
    lfs f30, lbl_808874E0
    li r29, 0x0
lbl_fn_804C9360_000012DC:
    lwz r30, 0x64(r28)
    cmpwi r30, 0x0
    beq lbl_fn_804C9360_000012FC
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    stfs f31, 0x104(r30)
    stfs f30, 0x100(r30)
lbl_fn_804C9360_000012FC:
    lwz r30, 0x6c(r28)
    cmpwi r30, 0x0
    beq lbl_fn_804C9360_0000131C
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    stfs f31, 0x104(r30)
    stfs f30, 0x100(r30)
lbl_fn_804C9360_0000131C:
    addi r29, r29, 0x1
    addi r28, r28, 0x4
    cmpwi r29, 0x2
    blt lbl_fn_804C9360_000012DC
lbl_fn_804C9360_0000132C:
    lwz r3, 0x164(r31)
    lwz r0, 0xe4(r31)
    cmpw r3, r0
    beq lbl_fn_804C9360_00001358
    lwz r0, 0xd8(r31)
    cmpwi r0, 0x5
    bne lbl_fn_804C9360_00001358
    li r0, 0x0
    stw r0, 0x168(r31)
    stw r0, 0x16c(r31)
    stw r0, 0xec(r31)
lbl_fn_804C9360_00001358:
    lwz r0, 0xe4(r31)
    stw r0, 0x164(r31)
    b lbl_fn_804C9360_000014F8
lbl_fn_804C9360_00001364:
    lwz r0, 0xd8(r3)
    cmpwi r0, 0x5
    bne lbl_fn_804C9360_000013B0
    lfs f30, lbl_808874E8
    mr r28, r31
    lfs f31, lbl_808874E0
    li r29, 0x0
lbl_fn_804C9360_00001380:
    lwz r30, 0x58(r28)
    cmpwi r30, 0x0
    beq lbl_fn_804C9360_000013A0
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    stfs f30, 0x104(r30)
    stfs f31, 0x100(r30)
lbl_fn_804C9360_000013A0:
    addi r29, r29, 0x1
    addi r28, r28, 0x4
    cmpwi r29, 0x3
    blt lbl_fn_804C9360_00001380
lbl_fn_804C9360_000013B0:
    lwz r3, 0x168(r31)
    lwz r0, 0xe4(r31)
    cmpw r3, r0
    beq lbl_fn_804C9360_000013D8
    lwz r0, 0xd8(r31)
    cmpwi r0, 0x6
    bne lbl_fn_804C9360_000013D8
    li r0, 0x0
    stw r0, 0x16c(r31)
    stw r0, 0xec(r31)
lbl_fn_804C9360_000013D8:
    lwz r0, 0xe4(r31)
    stw r0, 0x168(r31)
    b lbl_fn_804C9360_000014F8
lbl_fn_804C9360_000013E4:
    lwz r30, 0x54(r3)
    lwz r0, 0xe4(r3)
    cmpwi r30, 0x0
    stw r0, 0x16c(r3)
    beq lbl_fn_804C9360_00001414
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_808874E8
    stfs f0, 0x104(r30)
    lfs f0, lbl_808874E0
    stfs f0, 0x100(r30)
lbl_fn_804C9360_00001414:
    lwz r30, 0xd4(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804C9360_0000143C
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_808874E8
    stfs f0, 0x104(r30)
    lfs f0, lbl_808874E0
    stfs f0, 0x100(r30)
lbl_fn_804C9360_0000143C:
    lwz r4, 0x50(r31)
    lis r30, lbl_80759374@ha
    addi r30, r30, lbl_80759374@l
    la r29, lbl_8087E140
    addi r3, r30, 0x138
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    lwz r4, 0x50(r31)
    addi r3, r30, 0x146
    la r29, lbl_8087E140
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    lwz r4, 0x50(r31)
    addi r3, r30, 0x154
    la r29, lbl_8087E140
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    lwz r4, 0x50(r31)
    addi r3, r30, 0x162
    la r29, lbl_8087E140
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    lwz r4, 0x50(r31)
    addi r3, r30, 0x170
    la r29, lbl_8087E140
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
lbl_fn_804C9360_000014F8:
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

asm void fn_804C972C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    lis r31, lbl_80759290@ha
    addi r31, r31, lbl_80759290@l
    stw r30, 0x68(r1)
    mr r30, r3
    stw r29, 0x64(r1)
    lwz r0, 0xe0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804C972C_00001564
    li r0, 0x0
    stw r0, 0xe0(r3)
    b lbl_fn_804C972C_00001A68
lbl_fn_804C972C_00001564:
    lwz r0, 0xd8(r3)
    cmpwi r0, 0x1
    beq lbl_fn_804C972C_000015A4
    cmpwi r0, 0x2
    beq lbl_fn_804C972C_000015C8
    cmpwi r0, 0x3
    beq lbl_fn_804C972C_000015D0
    cmpwi r0, 0x4
    beq lbl_fn_804C972C_00001888
    cmpwi r0, 0x5
    beq lbl_fn_804C972C_0000198C
    cmpwi r0, 0x6
    beq lbl_fn_804C972C_00001A40
    cmpwi r0, 0x7
    beq lbl_fn_804C972C_00001A48
    b lbl_fn_804C972C_00001A68
lbl_fn_804C972C_000015A4:
    lwz r4, 0x48(r3)
    lfs f0, lbl_808874EC
    lfs f1, 0x100(r4)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_804C972C_00001A68
    li r4, 0x2
    bl fn_804C8D80
    b lbl_fn_804C972C_00001A68
lbl_fn_804C972C_000015C8:
    bl fn_804C9EF8
    b lbl_fn_804C972C_00001A68
lbl_fn_804C972C_000015D0:
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804C972C_00001A68
    bl fn_804AC79C
    cmpwi r3, 0x0
    beq lbl_fn_804C972C_00001868
    addi r4, r31, 0x0
    lwz r5, 0x0(r31)
    lwz r29, 0x4(r4)
    addi r3, r31, 0x28
    lwz r12, 0x8(r4)
    li r0, 0x14
    lwz r11, 0xc(r4)
    lwz r10, 0x10(r4)
    lwz r9, 0x14(r4)
    lwz r8, 0x18(r4)
    lwz r7, 0x1c(r4)
    lwz r6, 0x20(r4)
    lwz r4, 0x24(r4)
    stw r5, 0x8(r1)
    lwz r5, lbl_8087F628
    stw r12, 0x10(r1)
    lwz r31, 0x28(r31)
    stw r11, 0x14(r1)
    lwz r12, 0x4(r3)
    stw r10, 0x18(r1)
    lwz r11, 0x8(r3)
    stw r9, 0x1c(r1)
    lwz r10, 0xc(r3)
    stw r8, 0x20(r1)
    lwz r9, 0x10(r3)
    stw r7, 0x24(r1)
    lwz r8, 0x14(r3)
    stw r6, 0x28(r1)
    lwz r7, 0x18(r3)
    stw r4, 0x2c(r1)
    lwz r6, 0x1c(r3)
    stw r29, 0xc(r1)
    lwz r4, 0x20(r3)
    sth r0, 0xc38(r5)
    lwz r3, 0x24(r3)
    lwz r29, 0x8(r1)
    sth r29, 0xc3a(r5)
    sth r0, 0xc3c(r5)
    lwz r29, 0xc(r1)
    sth r29, 0xc3e(r5)
    sth r0, 0xc40(r5)
    lwz r29, 0x10(r1)
    sth r29, 0xc42(r5)
    sth r0, 0xc44(r5)
    lwz r29, 0x14(r1)
    sth r29, 0xc46(r5)
    sth r0, 0xc48(r5)
    lwz r29, 0x18(r1)
    sth r29, 0xc4a(r5)
    sth r0, 0xc4c(r5)
    lwz r29, 0x1c(r1)
    sth r29, 0xc4e(r5)
    sth r0, 0xc50(r5)
    lwz r29, 0x20(r1)
    sth r29, 0xc52(r5)
    sth r0, 0xc54(r5)
    lwz r29, 0x24(r1)
    sth r29, 0xc56(r5)
    sth r0, 0xc58(r5)
    lwz r29, 0x28(r1)
    sth r29, 0xc5a(r5)
    sth r0, 0xc5c(r5)
    lwz r29, 0x2c(r1)
    sth r29, 0xc5e(r5)
    stw r31, 0x30(r1)
    stw r12, 0x34(r1)
    stw r11, 0x38(r1)
    stw r10, 0x3c(r1)
    stw r9, 0x40(r1)
    stw r8, 0x44(r1)
    stw r7, 0x48(r1)
    stw r6, 0x4c(r1)
    stw r4, 0x50(r1)
    stw r3, 0x54(r1)
    sth r0, 0xc60(r5)
    li r11, -0x1
    li r10, 0x0
    li r9, 0x1
    lwz r12, 0x30(r1)
    li r8, 0x2
    sth r12, 0xc62(r5)
    li r7, 0x8
    li r6, 0x9
    mr r3, r30
    sth r0, 0xc64(r5)
    li r4, 0x2
    lwz r12, 0x34(r1)
    sth r12, 0xc66(r5)
    sth r0, 0xc68(r5)
    lwz r12, 0x38(r1)
    sth r12, 0xc6a(r5)
    sth r0, 0xc6c(r5)
    lwz r12, 0x3c(r1)
    sth r12, 0xc6e(r5)
    sth r0, 0xc70(r5)
    lwz r12, 0x40(r1)
    sth r12, 0xc72(r5)
    sth r0, 0xc74(r5)
    lwz r12, 0x44(r1)
    sth r12, 0xc76(r5)
    sth r0, 0xc78(r5)
    lwz r12, 0x48(r1)
    sth r12, 0xc7a(r5)
    sth r0, 0xc7c(r5)
    lwz r12, 0x4c(r1)
    sth r12, 0xc7e(r5)
    sth r0, 0xc80(r5)
    lwz r12, 0x50(r1)
    sth r12, 0xc82(r5)
    sth r0, 0xc84(r5)
    lwz r12, 0x54(r1)
    sth r12, 0xc86(r5)
    sth r11, 0xc88(r5)
    sth r10, 0xc8a(r5)
    sth r11, 0xc8c(r5)
    sth r10, 0xc8e(r5)
    sth r11, 0xc90(r5)
    sth r10, 0xc92(r5)
    sth r11, 0xc94(r5)
    sth r10, 0xc96(r5)
    sth r11, 0xc98(r5)
    sth r10, 0xc9a(r5)
    sth r11, 0xc9c(r5)
    sth r10, 0xc9e(r5)
    sth r11, 0xca0(r5)
    sth r10, 0xca2(r5)
    sth r11, 0xca4(r5)
    sth r10, 0xca6(r5)
    sth r11, 0xca8(r5)
    sth r10, 0xcaa(r5)
    sth r11, 0xcac(r5)
    sth r10, 0xcae(r5)
    sth r11, 0xcb0(r5)
    sth r10, 0xcb2(r5)
    sth r11, 0xcb4(r5)
    sth r10, 0xcb6(r5)
    sth r11, 0xcb8(r5)
    sth r10, 0xcba(r5)
    sth r11, 0xcbc(r5)
    sth r10, 0xcbe(r5)
    sth r11, 0xcc0(r5)
    sth r10, 0xcc2(r5)
    sth r11, 0xcc4(r5)
    sth r10, 0xcc6(r5)
    sth r11, 0xcc8(r5)
    sth r10, 0xcca(r5)
    sth r11, 0xccc(r5)
    sth r10, 0xcce(r5)
    sth r11, 0xcd0(r5)
    sth r10, 0xcd2(r5)
    sth r11, 0xcd4(r5)
    sth r10, 0xcd6(r5)
    stb r10, 0xcd8(r5)
    stb r9, 0xcda(r5)
    stb r8, 0xcd9(r5)
    stb r7, 0xcdb(r5)
    stb r6, 0xcdc(r5)
    bl fn_804C8D80
    b lbl_fn_804C972C_00001A68
lbl_fn_804C972C_00001868:
    lwz r3, lbl_8087F588
    bl fn_804AC7EC
    cmpwi r3, 0x0
    beq lbl_fn_804C972C_00001A68
    mr r3, r30
    li r4, 0x2
    bl fn_804C8D80
    b lbl_fn_804C972C_00001A68
lbl_fn_804C972C_00001888:
    bl fn_804CAAE8
    lwz r3, 0x50(r30)
    lfs f0, lbl_808874EC
    lfs f1, 0x100(r3)
    fcmpo cr0, f1, f0
    blt lbl_fn_804C972C_00001A68
    mr r3, r30
    li r4, 0x3
    li r5, 0x8
    bl fn_804C9C88
    cmpwi r3, 0x1
    bne lbl_fn_804C972C_00001974
    lwz r0, 0xe4(r30)
    cmpwi r0, 0x15
    bgt lbl_fn_804C972C_00001A68
    mr r3, r30
    li r4, 0x5
    bl fn_804C8D80
    lwz r4, 0x164(r30)
    cmpwi r4, 0x0
    blt lbl_fn_804C972C_000018E4
    cmplwi r4, 0x16
    blt lbl_fn_804C972C_000018EC
lbl_fn_804C972C_000018E4:
    li r29, 0x0
    b lbl_fn_804C972C_00001948
lbl_fn_804C972C_000018EC:
    slwi r0, r4, 2
    addi r3, r31, 0x50
    lwzx r3, r3, r0
    cmpwi r3, 0x0
    ble lbl_fn_804C972C_00001914
    bl fn_8020924C
    cmpwi r3, 0x0
    beq lbl_fn_804C972C_00001944
    lwz r29, 0x4(r3)
    b lbl_fn_804C972C_00001948
lbl_fn_804C972C_00001914:
    lwz r3, lbl_8087F86C
    cmpwi r3, 0x0
    beq lbl_fn_804C972C_00001944
    addi r0, r4, 0x2e
    slwi r0, r0, 3
    add r3, r3, r0
    lwz r29, 0x4c(r3)
    cmpwi r29, 0x0
    beq lbl_fn_804C972C_0000193C
    b lbl_fn_804C972C_00001948
lbl_fn_804C972C_0000193C:
    la r29, lbl_808813D0
    b lbl_fn_804C972C_00001948
lbl_fn_804C972C_00001944:
    li r29, 0x0
lbl_fn_804C972C_00001948:
    lwz r4, 0x6c(r30)
    lis r3, lbl_80759374@ha
    addi r3, r3, lbl_80759374@l
    addi r3, r3, 0x170
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r29
    bl fn_801FEE08
    b lbl_fn_804C972C_00001A68
lbl_fn_804C972C_00001974:
    cmpwi r3, 0x2
    bne lbl_fn_804C972C_00001A68
    mr r3, r30
    li r4, 0x1
    bl fn_804C8D80
    b lbl_fn_804C972C_00001A68
lbl_fn_804C972C_0000198C:
    bl fn_804CAAE8
    mr r3, r30
    li r4, 0x3
    li r5, 0x8
    bl fn_804C9C88
    cmpwi r3, 0x1
    bne lbl_fn_804C972C_00001A28
    lwz r0, 0xe4(r30)
    cmpwi r0, 0x14
    bge lbl_fn_804C972C_00001A68
    slwi r0, r0, 2
    add r3, r30, r0
    lwz r0, 0x110(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804C972C_00001A68
    mr r3, r30
    li r4, 0x6
    bl fn_804C8D80
    lwz r3, 0x168(r30)
    lwz r4, lbl_8087F86C
    addi r0, r3, 0x45
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r29, 0x4c(r3)
    cmpwi r29, 0x0
    beq lbl_fn_804C972C_000019F8
    b lbl_fn_804C972C_000019FC
lbl_fn_804C972C_000019F8:
    la r29, lbl_808813D0
lbl_fn_804C972C_000019FC:
    lwz r4, 0x70(r30)
    lis r3, lbl_80759374@ha
    addi r3, r3, lbl_80759374@l
    addi r3, r3, 0x170
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r29
    bl fn_801FEE08
    b lbl_fn_804C972C_00001A68
lbl_fn_804C972C_00001A28:
    cmpwi r3, 0x2
    bne lbl_fn_804C972C_00001A68
    mr r3, r30
    li r4, 0x4
    bl fn_804C8D80
    b lbl_fn_804C972C_00001A68
lbl_fn_804C972C_00001A40:
    bl fn_804CA250
    b lbl_fn_804C972C_00001A68
lbl_fn_804C972C_00001A48:
    lwz r4, 0x4c(r3)
    lfs f0, lbl_808874E0
    lfs f1, 0x100(r4)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_804C972C_00001A68
    li r4, 0x8
    bl fn_804C8D80
lbl_fn_804C972C_00001A68:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
