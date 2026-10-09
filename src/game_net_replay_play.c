#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_27(void);
extern void fn_80061824(void);
extern void fn_8006EF48(void);
extern void fn_800D246C(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_801F4728(void);
extern void fn_801F4CB4(void);
extern void fn_801F4E8C(void);
extern void fn_801FED24(void);
extern void fn_801FEE08(void);
extern void fn_8020924C(void);
extern void fn_804B4700(void);
extern void fn_804B4770(void);
extern void fn_804B47E0(void);
extern void fn_804B49C0(void);
extern void fn_804B49E0(void);
extern void fn_804C5E9C(void);
extern void fn_804DD284(void);
extern void fn_804E4B48(void);
extern void fn_804E4C38(void);
extern void fn_804E4D74(void);
extern void fn_804EB404(void);
extern void fn_804EB484(void);
extern void fn_804EB874(void);
extern void fn_804FA890(void);
extern void fn_805075C8(void);
extern void fn_80507614(void);
extern void fn_80507768(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_80790E50[];
extern u8 jumptable_80790E80[];
extern u8 lbl_80758E28[];
extern u8 lbl_80758E44[];

/* Small data declarations */
extern u32 lbl_8087E118;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F59C;
extern u32 lbl_8087F5A0;
extern u32 lbl_8087F610;
extern u32 lbl_8087F86C;
extern u32 lbl_808813D0;
extern u32 lbl_808874B0;
extern u32 lbl_808874B4;
extern u32 lbl_808874BC;
extern u32 lbl_808874C0;
extern u32 lbl_808874C4;
extern u32 lbl_808874C8;
extern u32 lbl_808874CC;
extern u32 lbl_808874D0;
extern u32 lbl_808874D4;
extern u32 lbl_808874D8;
extern u32 lbl_808874DC;

/* Function declarations */
void fn_804C66C8(void);
void fn_804C66CC(void);
void fn_804C66D0(void);
void fn_804C6888(void);
void fn_804C68E0(void);
void fn_804C6E20(void);
void fn_804C7408(void);
void fn_804C76EC(void);
void fn_804C7C34(void);
void fn_804C7D7C(void);

asm void fn_804C66C8(void)
{
    nofralloc
    blr
}

asm void fn_804C66CC(void)
{
    nofralloc
    blr
}

asm void fn_804C66D0(void)
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
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r4, 0xe8(r3)
    subi r0, r4, 0x5
    cmplwi r0, 0x1
    ble lbl_fn_804C66D0_000000E8
    cmpwi r4, 0x1
    beq lbl_fn_804C66D0_00000070
    cmpwi r4, 0x4
    beq lbl_fn_804C66D0_0000009C
    cmpwi r4, 0x7
    beq lbl_fn_804C66D0_0000009C
    cmpwi r4, 0x8
    beq lbl_fn_804C66D0_0000015C
    cmpwi r4, 0xa
    beq lbl_fn_804C66D0_00000168
    b lbl_fn_804C66D0_00000194
lbl_fn_804C66D0_00000070:
    lwz r31, 0x68(r3)
    cmpwi r31, 0x0
    beq lbl_fn_804C66D0_00000194
    mr r3, r31
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_808874BC
    stfs f0, 0x104(r31)
    lfs f0, lbl_808874B4
    stfs f0, 0x100(r31)
    b lbl_fn_804C66D0_00000194
lbl_fn_804C66D0_0000009C:
    lfs f31, lbl_808874BC
    li r30, 0x0
    lfs f30, lbl_808874B4
lbl_fn_804C66D0_000000A8:
    lwz r31, 0x5c(r29)
    cmpwi r31, 0x0
    beq lbl_fn_804C66D0_000000C8
    mr r3, r31
    li r4, 0x1
    bl fn_800D246C
    stfs f31, 0x104(r31)
    stfs f30, 0x100(r31)
lbl_fn_804C66D0_000000C8:
    addi r30, r30, 0x1
    addi r29, r29, 0x4
    cmpwi r30, 0x3
    blt lbl_fn_804C66D0_000000A8
    lwz r3, lbl_8087F5A0
    li r4, -0x1
    bl fn_804B4770
    b lbl_fn_804C66D0_00000194
lbl_fn_804C66D0_000000E8:
    lwz r31, 0x50(r3)
    cmpwi r31, 0x0
    beq lbl_fn_804C66D0_00000110
    mr r3, r31
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_808874BC
    stfs f0, 0x104(r31)
    lfs f0, lbl_808874B4
    stfs f0, 0x100(r31)
lbl_fn_804C66D0_00000110:
    lfs f30, lbl_808874BC
    li r30, 0x0
    lfs f31, lbl_808874B4
lbl_fn_804C66D0_0000011C:
    lwz r31, 0x80(r29)
    cmpwi r31, 0x0
    beq lbl_fn_804C66D0_0000013C
    mr r3, r31
    li r4, 0x1
    bl fn_800D246C
    stfs f30, 0x104(r31)
    stfs f31, 0x100(r31)
lbl_fn_804C66D0_0000013C:
    addi r30, r30, 0x1
    addi r29, r29, 0x4
    cmpwi r30, 0x8
    blt lbl_fn_804C66D0_0000011C
    lwz r3, lbl_8087F5A0
    li r4, -0x1
    bl fn_804B4770
    b lbl_fn_804C66D0_00000194
lbl_fn_804C66D0_0000015C:
    lwz r3, lbl_8087F5A0
    li r4, -0x1
    bl fn_804B4770
lbl_fn_804C66D0_00000168:
    lwz r31, 0xc0(r29)
    cmpwi r31, 0x0
    beq lbl_fn_804C66D0_00000194
    mr r3, r31
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808874BC
    stfs f0, 0x104(r31)
    lwz r0, 0xfc(r31)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r31)
lbl_fn_804C66D0_00000194:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    psq_l f30, 0x28(r1), 0, 0
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_804C6888(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80758E44@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_80758E44@l
    stw r31, 0xc(r1)
    la r31, lbl_8087E118
    stw r30, 0x8(r1)
    lwz r4, 0x48(r3)
    addi r3, r5, 0x2c2
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r31
    bl fn_801FEE08
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804C68E0(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    addi r11, r1, 0x170
    bl _savegpr_27
    lwz r0, 0x19c(r3)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_804C68E0_0000027C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804C68E0_0000027C
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0xa
    beq lbl_fn_804C68E0_0000027C
    lwz r3, lbl_8087F610
    bl fn_804EB874
    lwz r3, 0x0(r3)
    li r4, 0x0
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x54c(r3)
    bl fn_800D246C
    li r0, 0x0
    stw r0, 0x19c(r31)
lbl_fn_804C68E0_0000027C:
    lwz r0, 0xf4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804C68E0_00000294
    li r0, 0x0
    stw r0, 0xf4(r31)
    b lbl_fn_804C68E0_00000740
lbl_fn_804C68E0_00000294:
    lwz r0, 0xe4(r31)
    cmplwi r0, 0xb
    bgt lbl_fn_804C68E0_00000740
    lis r3, jumptable_80790E50@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80790E50@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r3, 0x1a0(r31)
    subic. r0, r3, 0x1
    stw r0, 0x1a0(r31)
    bgt lbl_fn_804C68E0_00000740
    mr r3, r31
    li r4, 0x2
    bl fn_804C5E9C
    b lbl_fn_804C68E0_00000740
    lwz r0, 0xf0(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    lwz r3, 0x6c(r3)
    lfs f1, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_804C68E0_00000740
    lwz r0, 0x19c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_804C68E0_00000740
    lwz r3, lbl_8087F610
    lwz r0, 0x540(r3)
    cmpwi r0, 0x2
    bne lbl_fn_804C68E0_0000035C
    mr r3, r31
    li r4, 0x7
    bl fn_804C5E9C
    lwz r30, 0xc0(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804C68E0_00000740
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808874B0
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
    b lbl_fn_804C68E0_00000740
lbl_fn_804C68E0_0000035C:
    cmpwi r0, 0x1
    bne lbl_fn_804C68E0_00000374
    mr r3, r31
    li r4, 0x5
    bl fn_804C5E9C
    b lbl_fn_804C68E0_00000740
lbl_fn_804C68E0_00000374:
    cmpwi r0, 0x0
    bne lbl_fn_804C68E0_00000740
    mr r3, r31
    li r4, 0x6
    bl fn_804C5E9C
    b lbl_fn_804C68E0_00000740
    mr r3, r31
    bl fn_804C7408
    b lbl_fn_804C68E0_00000740
    lfs f0, lbl_808874B4
    li r0, 0x0
    stw r0, 0x118(r1)
    mr r3, r31
    stw r0, 0x11c(r1)
    stw r0, 0x120(r1)
    stw r0, 0x124(r1)
    stw r0, 0x128(r1)
    stw r0, 0x12c(r1)
    stw r0, 0x130(r1)
    stw r0, 0x134(r1)
    stw r0, 0x138(r1)
    stw r0, 0x13c(r1)
    stw r0, 0x140(r1)
    stw r0, 0x144(r1)
    stw r0, 0x148(r1)
    stw r0, 0x14c(r1)
    stw r0, 0x150(r1)
    stw r0, 0x154(r1)
    stfs f0, 0x80(r1)
    stfs f0, 0x84(r1)
    stfs f0, 0x88(r1)
    stfs f0, 0x8c(r1)
    stfs f0, 0x90(r1)
    bl fn_804C7408
    lis r30, lbl_80758E44@ha
    mr r27, r31
    addi r30, r30, lbl_80758E44@l
    li r29, 0x0
lbl_fn_804C68E0_0000040C:
    addi r3, r1, 0x118
    addi r4, r30, 0x2d3
    addi r5, r29, 0x1
    crclr 6
    bl sprintf
    lwz r28, 0x50(r31)
    addi r3, r1, 0x118
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r28
    addi r3, r1, 0x6c
    bl fn_801F4E8C
    lfs f4, 0x6c(r1)
    addi r4, r30, 0x2e4
    lfs f3, 0x70(r1)
    addi r5, r1, 0x80
    lfs f2, 0x74(r1)
    lfs f1, 0x78(r1)
    lfs f0, 0x7c(r1)
    stfs f4, 0x80(r1)
    stfs f3, 0x84(r1)
    stfs f2, 0x88(r1)
    stfs f1, 0x8c(r1)
    stfs f0, 0x90(r1)
    lwz r3, 0x80(r27)
    bl fn_801F4728
    addi r29, r29, 0x1
    addi r27, r27, 0x4
    cmpwi r29, 0x8
    blt lbl_fn_804C68E0_0000040C
    b lbl_fn_804C68E0_00000740
    lfs f0, lbl_808874B4
    li r0, 0x0
    stw r0, 0xd8(r1)
    mr r3, r31
    stw r0, 0xdc(r1)
    stw r0, 0xe0(r1)
    stw r0, 0xe4(r1)
    stw r0, 0xe8(r1)
    stw r0, 0xec(r1)
    stw r0, 0xf0(r1)
    stw r0, 0xf4(r1)
    stw r0, 0xf8(r1)
    stw r0, 0xfc(r1)
    stw r0, 0x100(r1)
    stw r0, 0x104(r1)
    stw r0, 0x108(r1)
    stw r0, 0x10c(r1)
    stw r0, 0x110(r1)
    stw r0, 0x114(r1)
    stfs f0, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    bl fn_804C7408
    lis r30, lbl_80758E44@ha
    mr r27, r31
    addi r30, r30, lbl_80758E44@l
    li r29, 0x0
lbl_fn_804C68E0_000004FC:
    addi r3, r1, 0xd8
    addi r4, r30, 0x2d3
    addi r5, r29, 0x1
    crclr 6
    bl sprintf
    lwz r28, 0x50(r31)
    addi r3, r1, 0xd8
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r28
    addi r3, r1, 0x58
    bl fn_801F4E8C
    lfs f4, 0x58(r1)
    addi r4, r30, 0x2e4
    lfs f3, 0x5c(r1)
    addi r5, r1, 0x44
    lfs f2, 0x60(r1)
    lfs f1, 0x64(r1)
    lfs f0, 0x68(r1)
    stfs f4, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f2, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f0, 0x54(r1)
    lwz r3, 0x80(r27)
    bl fn_801F4728
    addi r29, r29, 0x1
    addi r27, r27, 0x4
    cmpwi r29, 0x8
    blt lbl_fn_804C68E0_000004FC
    b lbl_fn_804C68E0_00000740
    lfs f0, lbl_808874B4
    li r0, 0x0
    stw r0, 0x98(r1)
    mr r3, r31
    stw r0, 0x9c(r1)
    stw r0, 0xa0(r1)
    stw r0, 0xa4(r1)
    stw r0, 0xa8(r1)
    stw r0, 0xac(r1)
    stw r0, 0xb0(r1)
    stw r0, 0xb4(r1)
    stw r0, 0xb8(r1)
    stw r0, 0xbc(r1)
    stw r0, 0xc0(r1)
    stw r0, 0xc4(r1)
    stw r0, 0xc8(r1)
    stw r0, 0xcc(r1)
    stw r0, 0xd0(r1)
    stw r0, 0xd4(r1)
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    bl fn_804C7408
    lis r30, lbl_80758E44@ha
    mr r27, r31
    addi r30, r30, lbl_80758E44@l
    li r29, 0x0
lbl_fn_804C68E0_000005EC:
    addi r3, r1, 0x98
    addi r4, r30, 0x2d3
    addi r5, r29, 0x1
    crclr 6
    bl sprintf
    lwz r28, 0x54(r31)
    addi r3, r1, 0x98
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r28
    addi r3, r1, 0x1c
    bl fn_801F4E8C
    lfs f4, 0x1c(r1)
    addi r4, r30, 0x2e4
    lfs f3, 0x20(r1)
    addi r5, r1, 0x8
    lfs f2, 0x24(r1)
    lfs f1, 0x28(r1)
    lfs f0, 0x2c(r1)
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f2, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f0, 0x18(r1)
    lwz r3, 0xa0(r27)
    bl fn_801F4728
    addi r29, r29, 0x1
    addi r27, r27, 0x4
    cmpwi r29, 0x8
    blt lbl_fn_804C68E0_000005EC
    lis r30, lbl_80758E44@ha
    lwz r28, 0x54(r31)
    addi r30, r30, lbl_80758E44@l
    addi r3, r30, 0x2f5
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r28
    addi r3, r1, 0x30
    bl fn_801F4E8C
    lfs f4, 0x30(r1)
    addi r4, r30, 0x2ff
    lfs f3, 0x34(r1)
    addi r5, r1, 0x8
    lfs f2, 0x38(r1)
    lfs f1, 0x3c(r1)
    lfs f0, 0x40(r1)
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f2, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f0, 0x18(r1)
    lwz r3, 0xc4(r31)
    bl fn_801F4728
    b lbl_fn_804C68E0_00000740
    lwz r4, 0x1a4(r31)
    mr r3, r31
    subi r0, r4, 0x1
    stw r0, 0x1a4(r31)
    bl fn_804C7408
    b lbl_fn_804C68E0_00000740
    mr r3, r31
    li r4, 0xb
    bl fn_804C5E9C
    lwz r5, lbl_8087F59C
    li r4, 0x2
    li r3, 0xe
    li r0, 0x0
    stw r4, 0x299c(r5)
    stw r3, 0x29a4(r5)
    stw r0, 0x29a0(r5)
    stw r0, 0x29a8(r5)
    b lbl_fn_804C68E0_00000740
    lwz r3, 0xc0(r31)
    lfs f0, lbl_808874B4
    lfs f1, 0x100(r3)
    fcmpu cr0, f0, f1
    bne lbl_fn_804C68E0_00000740
    lwz r4, lbl_8087F59C
    lwz r3, 0x29a0(r4)
    lwz r0, 0x29a4(r4)
    cmpw r3, r0
    bne lbl_fn_804C68E0_00000740
    mr r3, r31
    li r4, 0xc
    bl fn_804C5E9C
lbl_fn_804C68E0_00000740:
    addi r11, r1, 0x170
    bl _restgpr_27
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_804C6E20(void)
{
    nofralloc
    stwu r1, -0x250(r1)
    mflr r0
    li r6, 0x0
    li r4, 0x0
    stw r0, 0x254(r1)
    stfd f31, 0x240(r1)
    psq_st f31, 0x248(r1), 0, 0
    stfd f30, 0x230(r1)
    psq_st f30, 0x238(r1), 0, 0
    stfd f29, 0x220(r1)
    psq_st f29, 0x228(r1), 0, 0
    stw r31, 0x21c(r1)
    stw r30, 0x218(r1)
    mr r30, r3
    stw r29, 0x214(r1)
    b lbl_fn_804C6E20_000007B4
lbl_fn_804C6E20_00000798:
    add r5, r3, r4
    addi r6, r6, 0x1
    lwz r5, 0x10c(r5)
    addi r4, r4, 0x4
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
lbl_fn_804C6E20_000007B4:
    lwz r0, 0x108(r3)
    cmplw r6, r0
    blt lbl_fn_804C6E20_00000798
    lwz r0, 0xe4(r3)
    cmplwi r0, 0xb
    bgt lbl_fn_804C6E20_00000D0C
    lis r4, jumptable_80790E80@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80790E80@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lwz r4, lbl_8087F610
    lwz r0, 0x534(r4)
    cmpwi r0, 0x0
    beq lbl_fn_804C6E20_00000D0C
    lwz r3, 0x68(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804C6E20_00000D0C
    lwz r0, 0xf0(r3)
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r3, 0x6c(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804C6E20_00000D0C
    lwz r3, 0x5c(r3)
    li r4, 0x0
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F5A0
    bl fn_804B4700
    lbz r0, 0x104(r30)
    cmpwi r0, 0x0
    bne lbl_fn_804C6E20_00000860
    lwz r3, 0xc0(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_804C6E20_00000860:
    lwz r3, 0x48(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804C6E20_00000D0C
    lwz r3, 0x5c(r3)
    li r4, 0x0
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F5A0
    bl fn_804B4700
    lbz r0, 0x104(r30)
    cmpwi r0, 0x0
    bne lbl_fn_804C6E20_000008AC
    lwz r3, 0xc0(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_804C6E20_000008AC:
    lwz r4, 0x50(r30)
    lis r3, lbl_80758E44@ha
    addi r3, r3, lbl_80758E44@l
    la r31, lbl_8087E118
    lwz r0, 0x38(r4)
    addi r3, r3, 0x30a
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x80(r30)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x84(r30)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x88(r30)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x8c(r30)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x90(r30)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x94(r30)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x98(r30)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x9c(r30)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x50(r30)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r31
    bl fn_801FEE08
    lwz r3, lbl_8087F610
    bl fn_804EB874
    lwz r0, 0xf0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_804C6E20_00000998
    lwz r4, lbl_8087F86C
    lwz r6, 0x9dc(r4)
    cmpwi r6, 0x0
    beq lbl_fn_804C6E20_00000990
    b lbl_fn_804C6E20_000009D4
lbl_fn_804C6E20_00000990:
    la r6, lbl_808813D0
    b lbl_fn_804C6E20_000009D4
lbl_fn_804C6E20_00000998:
    cmpwi r0, 0x1
    bne lbl_fn_804C6E20_000009BC
    lwz r4, lbl_8087F86C
    lwz r6, 0x9e4(r4)
    cmpwi r6, 0x0
    beq lbl_fn_804C6E20_000009B4
    b lbl_fn_804C6E20_000009D4
lbl_fn_804C6E20_000009B4:
    la r6, lbl_808813D0
    b lbl_fn_804C6E20_000009D4
lbl_fn_804C6E20_000009BC:
    lwz r4, lbl_8087F86C
    lwz r6, 0x9ec(r4)
    cmpwi r6, 0x0
    beq lbl_fn_804C6E20_000009D0
    b lbl_fn_804C6E20_000009D4
lbl_fn_804C6E20_000009D0:
    la r6, lbl_808813D0
lbl_fn_804C6E20_000009D4:
    lwz r0, 0xd0(r3)
    li r3, 0x12e
    extrwi r0, r0, 4, 6
    cmplwi r0, 0x2
    bne lbl_fn_804C6E20_000009EC
    li r3, 0x12d
lbl_fn_804C6E20_000009EC:
    lwz r4, lbl_8087F86C
    slwi r0, r3, 3
    la r7, lbl_8087E118
    addi r3, r1, 0x8
    add r4, r4, r0
    lwz r5, 0x4c(r4)
    addi r4, r7, 0x2
    cmpwi r5, 0x0
    beq lbl_fn_804C6E20_00000A14
    b lbl_fn_804C6E20_00000A18
lbl_fn_804C6E20_00000A14:
    la r5, lbl_808813D0
lbl_fn_804C6E20_00000A18:
    crclr 6
    bl fn_800DD3FC
    lfs f31, lbl_808874C8
    addi r4, r1, 0x8
    lfs f29, lbl_808874C0
    li r5, 0x1
    fmr f1, f31
    lfs f30, lbl_808874C4
    lwz r3, lbl_8087EEC8
    li r6, 0x5
    lfs f2, lbl_808874B4
    bl fn_8006EF48
    lfs f0, lbl_808874B0
    fmr f2, f30
    lfs f6, lbl_808874B4
    addi r4, r1, 0x8
    fadds f9, f0, f29
    lfs f0, lbl_808874CC
    lfs f4, lbl_808874C8
    fmr f7, f6
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    fmr f8, f6
    lfs f3, lbl_808874D0
    fnmsubs f1, f0, f1, f9
    lis r5, 0xff00
    li r6, 0x1
    li r7, 0x5
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    fmr f1, f31
    lwz r3, lbl_8087EEC8
    lfs f2, lbl_808874B4
    addi r4, r1, 0x8
    li r5, 0x1
    li r6, 0x4
    bl fn_8006EF48
    lfs f6, lbl_808874B4
    fmr f2, f30
    lfs f0, lbl_808874CC
    addi r4, r1, 0x8
    lfs f4, lbl_808874C8
    fmr f7, f6
    fmr f8, f6
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    fnmsubs f1, f0, f1, f29
    lfs f3, lbl_808874D0
    li r5, -0x1
    li r6, 0x1
    li r7, 0x4
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    b lbl_fn_804C6E20_00000D0C
    lwz r3, 0x5c(r3)
    li r4, 0x0
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F5A0
    bl fn_804B4700
    lbz r0, 0x104(r30)
    cmpwi r0, 0x0
    bne lbl_fn_804C6E20_00000B38
    lwz r3, 0xc0(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_804C6E20_00000B38:
    lwz r3, 0x50(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x80(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x84(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x88(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x8c(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x90(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x94(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x98(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x9c(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804C6E20_00000D0C
    lbz r0, 0x104(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804C6E20_00000BE8
    lwz r4, 0xc0(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
lbl_fn_804C6E20_00000BE8:
    lwz r4, 0x54(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0xc4(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0xa0(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0xa4(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0xa8(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0xac(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0xb0(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0xb4(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0xb8(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r3, 0xbc(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804C6E20_00000D0C
    lwz r3, 0xc8(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804C6E20_00000D0C
    lwz r3, 0x58(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804C6E20_00000D0C
    lwz r4, 0x58(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r3, 0xc0(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804C6E20_00000D0C
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r3, 0x58(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0xc0(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_804C6E20_00000D0C:
    lwz r0, 0x254(r1)
    psq_l f31, 0x248(r1), 0, 0
    lfd f31, 0x240(r1)
    psq_l f30, 0x238(r1), 0, 0
    lfd f30, 0x230(r1)
    psq_l f29, 0x228(r1), 0, 0
    lfd f29, 0x220(r1)
    lwz r31, 0x21c(r1)
    lwz r30, 0x218(r1)
    lwz r29, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x250
    blr
}

asm void fn_804C7408(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    lfs f0, lbl_808874B4
    stw r0, 0xd4(r1)
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stw r31, 0xbc(r1)
    mr r31, r3
    stw r30, 0xb8(r1)
    stw r29, 0xb4(r1)
    stfs f0, 0x94(r1)
    stfs f0, 0x98(r1)
    stfs f0, 0x9c(r1)
    stfs f0, 0xa0(r1)
    stfs f0, 0xa4(r1)
    lwz r0, 0xe4(r3)
    cmpwi r0, 0x8
    bne lbl_fn_804C7408_00000E28
    lis r3, lbl_80758E44@ha
    lwz r30, 0xc8(r31)
    addi r3, r3, lbl_80758E44@l
    addi r3, r3, 0x318
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x80
    bl fn_801F4E8C
    lfs f4, 0x80(r1)
    addi r4, r1, 0x6c
    lfs f3, 0x84(r1)
    li r5, 0x0
    lfs f2, 0x88(r1)
    lfs f1, 0x8c(r1)
    lfs f0, lbl_808874D4
    stfs f4, 0x94(r1)
    lwz r3, lbl_8087F5A0
    stfs f3, 0x98(r1)
    lwz r9, 0x94(r1)
    stfs f2, 0x9c(r1)
    lwz r8, 0x98(r1)
    stfs f1, 0xa0(r1)
    lwz r7, 0x9c(r1)
    stfs f0, 0xa4(r1)
    lwz r6, 0xa0(r1)
    lwz r0, 0xa4(r1)
    stw r9, 0x6c(r1)
    stw r8, 0x70(r1)
    stw r7, 0x74(r1)
    stw r6, 0x78(r1)
    stw r0, 0x7c(r1)
    bl fn_804B49C0
    lwz r4, lbl_8087F610
    li r5, 0x0
    lwz r3, lbl_8087F5A0
    addis r4, r4, 0x1
    lwz r4, -0x6980(r4)
    bl fn_804B49E0
    b lbl_fn_804C7408_00001000
lbl_fn_804C7408_00000E28:
    lwz r3, lbl_8087F610
    lwz r0, 0x540(r3)
    cmpwi r0, 0x2
    beq lbl_fn_804C7408_00000E88
    lis r3, lbl_80758E44@ha
    lwz r30, 0x50(r31)
    addi r3, r3, lbl_80758E44@l
    addi r3, r3, 0x322
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x58
    bl fn_801F4E8C
    lfs f4, 0x58(r1)
    lfs f3, 0x5c(r1)
    lfs f2, 0x60(r1)
    lfs f1, 0x64(r1)
    lfs f0, 0x68(r1)
    stfs f4, 0x94(r1)
    stfs f3, 0x98(r1)
    stfs f2, 0x9c(r1)
    stfs f1, 0xa0(r1)
    stfs f0, 0xa4(r1)
    b lbl_fn_804C7408_00000ED4
lbl_fn_804C7408_00000E88:
    lis r3, lbl_80758E44@ha
    lwz r30, 0x48(r31)
    addi r3, r3, lbl_80758E44@l
    addi r3, r3, 0x335
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x44
    bl fn_801F4E8C
    lfs f4, 0x44(r1)
    lfs f3, 0x48(r1)
    lfs f2, 0x4c(r1)
    lfs f1, 0x50(r1)
    lfs f0, 0x54(r1)
    stfs f4, 0x94(r1)
    stfs f3, 0x98(r1)
    stfs f2, 0x9c(r1)
    stfs f1, 0xa0(r1)
    stfs f0, 0xa4(r1)
lbl_fn_804C7408_00000ED4:
    lis r30, lbl_80758E44@ha
    lwz r3, 0x5c(r31)
    addi r30, r30, lbl_80758E44@l
    addi r5, r1, 0x94
    addi r4, r30, 0x344
    bl fn_801F4728
    lwz r29, 0x5c(r31)
    addi r3, r30, 0x318
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r29
    addi r3, r1, 0x30
    bl fn_801F4E8C
    lfs f4, 0x30(r1)
    addi r4, r1, 0x1c
    lfs f3, 0x34(r1)
    li r5, 0x0
    lfs f2, 0x38(r1)
    lfs f1, 0x3c(r1)
    lfs f0, lbl_808874BC
    stfs f4, 0x94(r1)
    lwz r3, lbl_8087F5A0
    stfs f3, 0x98(r1)
    lwz r9, 0x94(r1)
    stfs f2, 0x9c(r1)
    lwz r8, 0x98(r1)
    stfs f1, 0xa0(r1)
    lwz r7, 0x9c(r1)
    stfs f0, 0xa4(r1)
    lwz r6, 0xa0(r1)
    lwz r0, 0xa4(r1)
    stw r9, 0x1c(r1)
    stw r8, 0x20(r1)
    stw r7, 0x24(r1)
    stw r6, 0x28(r1)
    stw r0, 0x2c(r1)
    bl fn_804B49C0
    lwz r3, lbl_8087F5A0
    li r5, 0x0
    lwz r4, 0xcc(r31)
    bl fn_804B49E0
    lwz r29, 0x5c(r31)
    addi r3, r30, 0x355
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r29
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lfs f1, 0x14(r1)
    lfs f0, lbl_808874B4
    lfs f4, 0x8(r1)
    lfs f3, 0xc(r1)
    fcmpu cr0, f0, f1
    lfs f2, 0x10(r1)
    lfs f0, 0x18(r1)
    stfs f4, 0x94(r1)
    stfs f3, 0x98(r1)
    stfs f2, 0x9c(r1)
    stfs f1, 0xa0(r1)
    stfs f0, 0xa4(r1)
    beq lbl_fn_804C7408_00001000
    lfs f0, 0xd8(r31)
    addi r3, r30, 0x35f
    fmuls f31, f2, f0
    stfs f31, 0x9c(r1)
    lwz r4, 0x5c(r31)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x2
    bl fn_801FED24
    lfs f0, lbl_808874B0
    stfs f0, 0xd8(r31)
lbl_fn_804C7408_00001000:
    lwz r0, 0xd4(r1)
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    lwz r31, 0xbc(r1)
    lwz r30, 0xb8(r1)
    lwz r29, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_804C76EC(void)
{
    nofralloc
    stwu r1, -0x340(r1)
    mflr r0
    stw r0, 0x344(r1)
    addi r11, r1, 0x310
    stfd f31, 0x330(r1)
    psq_st f31, 0x338(r1), 0, 0
    stfd f30, 0x320(r1)
    psq_st f30, 0x328(r1), 0, 0
    stfd f29, 0x310(r1)
    psq_st f29, 0x318(r1), 0, 0
    bl _savegpr_14
    li r0, 0x40
    li r29, 0x0
    lis r5, 0x4330
    mr r14, r3
    stw r5, 0x2b0(r1)
    addi r4, r1, 0xac
    li r3, 0x0
    stw r5, 0x2b8(r1)
    stw r29, 0x70(r1)
    stw r29, 0x74(r1)
    stw r29, 0x78(r1)
    stw r29, 0x7c(r1)
    stw r29, 0x80(r1)
    stw r29, 0x84(r1)
    stw r29, 0x88(r1)
    stw r29, 0x8c(r1)
    stw r29, 0x90(r1)
    stw r29, 0x94(r1)
    stw r29, 0x98(r1)
    stw r29, 0x9c(r1)
    stw r29, 0xa0(r1)
    stw r29, 0xa4(r1)
    stw r29, 0xa8(r1)
    stw r29, 0xac(r1)
    mtctr r0
lbl_fn_804C76EC_000010B4:
    stw r3, 0x4(r4)
    stwu r3, 0x8(r4)
    bdnz lbl_fn_804C76EC_000010B4
    lfs f0, lbl_808874B4
    stfs f0, 0x58(r1)
    lwz r3, lbl_8087F610
    stfs f0, 0xc(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x54(r1)
    bl fn_804EB874
    lwz r6, lbl_8087F610
    lis r4, lbl_80758E28@ha
    lis r5, lbl_80758E44@ha
    lfs f31, lbl_808874B4
    addi r16, r6, 0x2b80
    lfs f30, lbl_808874B0
    lfd f29, lbl_80758E28@l(r4)
    mr r18, r3
    mr r31, r14
    addi r28, r16, 0x8
    addi r21, r5, lbl_80758E44@l
    li r27, 0x0
    li r24, 0x0
    li r20, 0x1
    la r17, lbl_8087E118
    la r23, lbl_8087E118
    b lbl_fn_804C76EC_00001504
lbl_fn_804C76EC_00001124:
    add r15, r28, r24
    lbz r3, 0xcc(r18)
    lbz r0, 0xd0(r15)
    cmplw r3, r0
    bne lbl_fn_804C76EC_000014FC
    lwz r0, 0xd0(r18)
    addi r30, r15, 0x4
    lwz r3, 0xd4(r15)
    extrwi r4, r0, 4, 6
    extrwi r0, r3, 4, 6
    cmplw r4, r0
    bne lbl_fn_804C76EC_000014FC
    srwi r0, r3, 31
    cmplwi r0, 0x1
    bne lbl_fn_804C76EC_000014FC
    lwz r3, lbl_8087F610
    li r4, 0x1
    bl fn_804DD284
    mr r19, r3
    lwz r3, lbl_8087F610
    li r4, 0x2
    bl fn_804DD284
    lwz r4, 0xb4(r15)
    cmpw r19, r4
    beq lbl_fn_804C76EC_000014FC
    cmpw r3, r4
    beq lbl_fn_804C76EC_000014FC
    lbz r0, 0xd0(r15)
    addis r3, r4, 0xb
    lwz r4, lbl_8087F610
    subi r3, r3, 0x51a0
    mulli r0, r0, 0x34
    add r15, r4, r0
    bl fn_8020924C
    mr r19, r3
    lwz r3, lbl_8087F610
    mr r4, r30
    bl fn_804E4D74
    lwz r0, 0xd0(r30)
    mr r26, r3
    extrwi. r0, r0, 1, 1
    beq lbl_fn_804C76EC_000011D4
    lwz r25, 0x6b00(r16)
    b lbl_fn_804C76EC_000011DC
lbl_fn_804C76EC_000011D4:
    lwz r0, 0x388(r15)
    add r25, r0, r3
lbl_fn_804C76EC_000011DC:
    lwz r3, lbl_8087F610
    mr r4, r25
    addi r3, r3, 0x610
    bl fn_80507768
    cmpw r25, r3
    ble lbl_fn_804C76EC_00001200
    subf r0, r3, r25
    mr r25, r3
    subf r26, r0, r26
lbl_fn_804C76EC_00001200:
    lwz r3, lbl_8087F610
    lwz r4, 0x0(r30)
    bl fn_804EB404
    cmpwi r3, 0x0
    beq lbl_fn_804C76EC_0000121C
    li r25, 0x0
    li r26, 0x0
lbl_fn_804C76EC_0000121C:
    stw r20, 0xf8(r31)
    mr r4, r30
    lwz r3, lbl_8087F610
    bl fn_804EB484
    cmpwi r3, 0x0
    bne lbl_fn_804C76EC_0000123C
    addi r22, r15, 0x368
    b lbl_fn_804C76EC_00001254
lbl_fn_804C76EC_0000123C:
    lwz r3, lbl_8087F86C
    lwz r22, 0x9cc(r3)
    cmpwi r22, 0x0
    beq lbl_fn_804C76EC_00001250
    b lbl_fn_804C76EC_00001254
lbl_fn_804C76EC_00001250:
    la r22, lbl_808813D0
lbl_fn_804C76EC_00001254:
    lwz r4, 0x5c(r31)
    addi r3, r21, 0x369
    addi r15, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r15
    mr r5, r22
    bl fn_801FEE08
    lwz r3, lbl_8087F610
    mr r4, r30
    bl fn_804EB484
    cmpwi r3, 0x0
    bne lbl_fn_804C76EC_0000129C
    lwz r3, lbl_8087F610
    subf r4, r26, r25
    bl fn_804FA890
    mr r22, r3
    b lbl_fn_804C76EC_000012A0
lbl_fn_804C76EC_0000129C:
    la r22, lbl_8087E118
lbl_fn_804C76EC_000012A0:
    lwz r4, 0x5c(r31)
    addi r3, r21, 0x377
    addi r15, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r15
    mr r5, r22
    bl fn_801FEE08
    cmpwi r19, 0x0
    beq lbl_fn_804C76EC_000012EC
    lwz r4, 0x5c(r31)
    addi r3, r21, 0x388
    addi r15, r4, 0x58
    bl fn_800DC6B4
    lwz r5, 0x4(r19)
    mr r4, r3
    mr r3, r15
    bl fn_801FEE08
    b lbl_fn_804C76EC_0000130C
lbl_fn_804C76EC_000012EC:
    lwz r4, 0x5c(r31)
    addi r3, r21, 0x388
    addi r15, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r15
    mr r5, r17
    bl fn_801FEE08
lbl_fn_804C76EC_0000130C:
    add r15, r28, r24
    lwz r3, 0x5c(r31)
    lwz r5, 0xe4(r15)
    addi r4, r21, 0x399
    li r6, 0x0
    bl fn_801F4CB4
    lwz r3, 0x5c(r31)
    addi r4, r21, 0x3a7
    lwz r5, 0xe8(r15)
    li r6, 0x0
    bl fn_801F4CB4
    mr r5, r25
    addi r3, r1, 0xb0
    addi r4, r23, 0x10
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F610
    mr r4, r30
    bl fn_804EB484
    cmpwi r3, 0x0
    la r15, lbl_8087E118
    bne lbl_fn_804C76EC_00001368
    addi r15, r1, 0xb0
lbl_fn_804C76EC_00001368:
    lwz r4, 0x5c(r31)
    addi r3, r21, 0x3b5
    addi r19, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r19
    mr r5, r15
    bl fn_801FEE08
    subf r15, r26, r25
    lwz r3, lbl_8087F5A0
    mr r4, r15
    mr r5, r29
    bl fn_804B47E0
    stw r15, 0xcc(r31)
    mr r4, r15
    lwz r19, lbl_8087F610
    addi r3, r19, 0x610
    bl fn_80507614
    cmpwi r3, 0x0
    beq lbl_fn_804C76EC_000013CC
    mr r4, r15
    addi r3, r19, 0x610
    bl fn_80507614
    lwz r0, 0x8(r3)
    b lbl_fn_804C76EC_000013D4
lbl_fn_804C76EC_000013CC:
    lwz r3, 0x614(r19)
    lwz r0, 0x4(r3)
lbl_fn_804C76EC_000013D4:
    cmpwi r0, 0x0
    ble lbl_fn_804C76EC_000014EC
    lwz r3, lbl_8087F610
    mr r4, r15
    addi r3, r3, 0x610
    bl fn_805075C8
    lwz r22, lbl_8087F610
    mr r4, r15
    lwz r19, 0x4(r3)
    addi r3, r22, 0x610
    bl fn_80507614
    cmpwi r3, 0x0
    beq lbl_fn_804C76EC_0000141C
    mr r4, r15
    addi r3, r22, 0x610
    bl fn_80507614
    lwz r4, 0x8(r3)
    b lbl_fn_804C76EC_00001424
lbl_fn_804C76EC_0000141C:
    lwz r3, 0x614(r22)
    lwz r4, 0x4(r3)
lbl_fn_804C76EC_00001424:
    subf r5, r25, r19
    xoris r0, r4, 0x8000
    stw r0, 0x2bc(r1)
    xoris r3, r5, 0x8000
    stw r3, 0x2b4(r1)
    lfd f0, 0x2b8(r1)
    lfd f1, 0x2b0(r1)
    fsubs f0, f0, f29
    fsubs f1, f1, f29
    fdivs f0, f1, f0
    fsubs f0, f30, f0
    fcmpo cr0, f0, f31
    ble lbl_fn_804C76EC_0000147C
    stw r3, 0x2b4(r1)
    stw r0, 0x2bc(r1)
    lfd f1, 0x2b0(r1)
    lfd f0, 0x2b8(r1)
    fsubs f1, f1, f29
    fsubs f0, f0, f29
    fdivs f0, f1, f0
    fsubs f0, f30, f0
    b lbl_fn_804C76EC_00001480
lbl_fn_804C76EC_0000147C:
    fmr f0, f31
lbl_fn_804C76EC_00001480:
    fcmpo cr0, f0, f30
    bge lbl_fn_804C76EC_000014E4
    xoris r3, r5, 0x8000
    stw r3, 0x2b4(r1)
    xoris r0, r4, 0x8000
    stw r0, 0x2bc(r1)
    lfd f1, 0x2b0(r1)
    lfd f0, 0x2b8(r1)
    fsubs f1, f1, f29
    fsubs f0, f0, f29
    fdivs f0, f1, f0
    fsubs f0, f30, f0
    fcmpo cr0, f0, f31
    ble lbl_fn_804C76EC_000014DC
    stw r3, 0x2b4(r1)
    stw r0, 0x2bc(r1)
    lfd f1, 0x2b0(r1)
    lfd f0, 0x2b8(r1)
    fsubs f1, f1, f29
    fsubs f0, f0, f29
    fdivs f0, f1, f0
    fsubs f0, f30, f0
    b lbl_fn_804C76EC_000014E8
lbl_fn_804C76EC_000014DC:
    fmr f0, f31
    b lbl_fn_804C76EC_000014E8
lbl_fn_804C76EC_000014E4:
    fmr f0, f30
lbl_fn_804C76EC_000014E8:
    stfs f0, 0xd8(r31)
lbl_fn_804C76EC_000014EC:
    addi r29, r29, 0x1
    addi r31, r31, 0x4
    cmplwi r29, 0x3
    bge lbl_fn_804C76EC_00001510
lbl_fn_804C76EC_000014FC:
    addi r27, r27, 0x1
    addi r24, r24, 0xd5c
lbl_fn_804C76EC_00001504:
    lwz r0, 0x0(r28)
    cmpw r27, r0
    blt lbl_fn_804C76EC_00001124
lbl_fn_804C76EC_00001510:
    lwz r4, 0xc0(r14)
    lis r3, lbl_80758E44@ha
    addi r3, r3, lbl_80758E44@l
    la r14, lbl_8087E118
    addi r3, r3, 0x279
    addi r15, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r15
    mr r5, r14
    bl fn_801FEE08
    addi r11, r1, 0x310
    psq_l f31, 0x338(r1), 0, 0
    lfd f31, 0x330(r1)
    psq_l f30, 0x328(r1), 0, 0
    lfd f30, 0x320(r1)
    psq_l f29, 0x318(r1), 0, 0
    lfd f29, 0x310(r1)
    bl _restgpr_14
    lwz r0, 0x344(r1)
    mtlr r0
    addi r1, r1, 0x340
    blr
}

asm void fn_804C7C34(void)
{
    nofralloc
    stwu r1, -0x260(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x264(r1)
    li r0, 0x40
    stw r31, 0x25c(r1)
    stw r30, 0x258(r1)
    mr r30, r4
    stw r29, 0x254(r1)
    mr r29, r3
    addi r3, r1, 0x44
    stw r5, 0x8(r1)
    stw r5, 0xc(r1)
    stw r5, 0x10(r1)
    stw r5, 0x14(r1)
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r5, 0x20(r1)
    stw r5, 0x24(r1)
    stw r5, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r5, 0x34(r1)
    stw r5, 0x38(r1)
    stw r5, 0x3c(r1)
    stw r5, 0x40(r1)
    stw r5, 0x44(r1)
    mtctr r0
lbl_fn_804C7C34_000015DC:
    stw r5, 0x4(r3)
    stwu r5, 0x8(r3)
    bdnz lbl_fn_804C7C34_000015DC
    lwz r3, lbl_8087F5A0
    mr r4, r30
    li r5, 0x0
    bl fn_804B47E0
    lwz r4, lbl_8087F1E4
    lwz r3, lbl_8087F610
    lwz r31, 0xdec(r4)
    cmpwi r31, 0x0
    beq lbl_fn_804C7C34_00001610
    b lbl_fn_804C7C34_00001614
lbl_fn_804C7C34_00001610:
    la r31, lbl_808813D0
lbl_fn_804C7C34_00001614:
    mr r4, r30
    bl fn_804FA890
    mr r5, r3
    mr r4, r31
    addi r3, r1, 0x48
    crclr 6
    bl fn_800DD3FC
    lwz r4, 0xc8(r29)
    lis r3, lbl_80758E44@ha
    addi r3, r3, lbl_80758E44@l
    addi r3, r3, 0x3c3
    addi r31, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r31
    addi r5, r1, 0x48
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r31, 0x9c4(r3)
    cmpwi r31, 0x0
    beq lbl_fn_804C7C34_0000166C
    b lbl_fn_804C7C34_00001670
lbl_fn_804C7C34_0000166C:
    la r31, lbl_808813D0
lbl_fn_804C7C34_00001670:
    lwz r4, 0xc8(r29)
    lis r3, lbl_80758E44@ha
    addi r3, r3, lbl_80758E44@l
    addi r3, r3, 0x3cd
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r31
    bl fn_801FEE08
    lwz r0, 0x264(r1)
    lwz r31, 0x25c(r1)
    lwz r30, 0x258(r1)
    lwz r29, 0x254(r1)
    mtlr r0
    addi r1, r1, 0x260
    blr
}

asm void fn_804C7D7C(void)
{
    nofralloc
    stwu r1, -0x2f0(r1)
    mflr r0
    stw r0, 0x2f4(r1)
    addi r11, r1, 0x2c0
    stfd f31, 0x2e0(r1)
    psq_st f31, 0x2e8(r1), 0, 0
    stfd f30, 0x2d0(r1)
    psq_st f30, 0x2d8(r1), 0, 0
    stfd f29, 0x2c0(r1)
    psq_st f29, 0x2c8(r1), 0, 0
    bl _savegpr_14
    lwz r4, lbl_8087F610
    li r0, 0x0
    lfs f30, lbl_808874B4
    mr r25, r3
    addi r15, r4, 0x2b80
    stw r0, 0x30(r1)
    lfs f29, lbl_808874BC
    mr r16, r25
    stw r0, 0x34(r1)
    addi r29, r15, 0x8
    li r17, 0x0
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    stw r0, 0x48(r1)
    stw r0, 0x4c(r1)
    stw r0, 0x50(r1)
    stw r0, 0x54(r1)
    stw r0, 0x58(r1)
    stw r0, 0x5c(r1)
    stw r0, 0x60(r1)
    stw r0, 0x64(r1)
    stw r0, 0x68(r1)
    stw r0, 0x6c(r1)
    stfs f30, 0x1c(r1)
    stfs f30, 0x20(r1)
    stfs f30, 0x24(r1)
    stfs f30, 0x28(r1)
    stfs f30, 0x2c(r1)
lbl_fn_804C7D7C_00001758:
    lwz r14, 0x80(r16)
    cmpwi r14, 0x0
    beq lbl_fn_804C7D7C_00001778
    mr r3, r14
    li r4, 0x1
    bl fn_800D246C
    stfs f29, 0x104(r14)
    stfs f30, 0x100(r14)
lbl_fn_804C7D7C_00001778:
    addi r17, r17, 0x1
    addi r16, r16, 0x4
    cmpwi r17, 0x8
    blt lbl_fn_804C7D7C_00001758
    lis r3, lbl_80758E44@ha
    lfs f29, lbl_808874B4
    lfs f31, lbl_808874DC
    mr r31, r25
    lfs f30, lbl_808874D8
    addi r23, r3, lbl_80758E44@l
    li r28, 0x0
    li r24, 0x0
    la r14, lbl_8087E118
    la r20, lbl_8087E118
    la r19, lbl_8087E118
    la r18, lbl_8087E118
    la r17, lbl_8087E118
    la r16, lbl_8087E118
    b lbl_fn_804C7D7C_00001B00
lbl_fn_804C7D7C_000017C4:
    add r3, r29, r24
    lwz r0, 0xd4(r3)
    addi r30, r3, 0x4
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804C7D7C_00001A74
    lbz r0, 0xcc(r30)
    mr r4, r30
    lwz r3, lbl_8087F610
    mulli r0, r0, 0x34
    add r21, r3, r0
    bl fn_804E4D74
    lwz r0, 0xd0(r30)
    mr r27, r3
    extrwi. r0, r0, 1, 1
    beq lbl_fn_804C7D7C_0000180C
    lwz r26, 0x6b00(r15)
    b lbl_fn_804C7D7C_00001814
lbl_fn_804C7D7C_0000180C:
    lwz r0, 0x388(r21)
    add r26, r0, r3
lbl_fn_804C7D7C_00001814:
    lwz r3, lbl_8087F610
    mr r4, r26
    addi r3, r3, 0x610
    bl fn_80507768
    cmpw r26, r3
    ble lbl_fn_804C7D7C_00001838
    subf r0, r3, r26
    mr r26, r3
    subf r27, r0, r27
lbl_fn_804C7D7C_00001838:
    lwz r3, lbl_8087F610
    lwz r4, 0x0(r30)
    bl fn_804EB404
    cmpwi r3, 0x0
    beq lbl_fn_804C7D7C_00001854
    li r26, 0x0
    li r27, 0x0
lbl_fn_804C7D7C_00001854:
    cmpwi r30, 0x0
    beq lbl_fn_804C7D7C_00001AF4
    lwz r3, lbl_8087F610
    mr r4, r30
    bl fn_804E4B48
    lwz r4, lbl_8087F610
    mr r22, r3
    lwz r0, 0x540(r4)
    cmpwi r0, 0x2
    beq lbl_fn_804C7D7C_0000188C
    mr r3, r4
    bl fn_804E4C38
    cmpwi r3, 0x0
    bne lbl_fn_804C7D7C_000018B0
lbl_fn_804C7D7C_0000188C:
    lwz r4, 0x80(r31)
    addi r3, r23, 0x3db
    addi r22, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r22
    mr r5, r20
    bl fn_801FEE08
    b lbl_fn_804C7D7C_000018C4
lbl_fn_804C7D7C_000018B0:
    lwz r3, 0x80(r31)
    addi r4, r23, 0x3db
    addi r5, r22, 0x1
    li r6, 0x0
    bl fn_801F4CB4
lbl_fn_804C7D7C_000018C4:
    lwz r3, lbl_8087F610
    mr r4, r30
    bl fn_804EB484
    cmpwi r3, 0x0
    bne lbl_fn_804C7D7C_000018E0
    addi r21, r21, 0x368
    b lbl_fn_804C7D7C_000018F8
lbl_fn_804C7D7C_000018E0:
    lwz r3, lbl_8087F86C
    lwz r21, 0x9cc(r3)
    cmpwi r21, 0x0
    beq lbl_fn_804C7D7C_000018F4
    b lbl_fn_804C7D7C_000018F8
lbl_fn_804C7D7C_000018F4:
    la r21, lbl_808813D0
lbl_fn_804C7D7C_000018F8:
    lwz r4, 0x80(r31)
    addi r3, r23, 0x3e9
    addi r22, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r22
    mr r5, r21
    bl fn_801FEE08
    lwz r3, lbl_8087F610
    mr r4, r30
    bl fn_804EB484
    cmpwi r3, 0x0
    bne lbl_fn_804C7D7C_00001940
    lwz r3, lbl_8087F610
    subf r4, r27, r26
    bl fn_804FA890
    mr r21, r3
    b lbl_fn_804C7D7C_00001944
lbl_fn_804C7D7C_00001940:
    la r21, lbl_8087E118
lbl_fn_804C7D7C_00001944:
    lwz r4, 0x80(r31)
    addi r3, r23, 0x3fa
    addi r22, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r22
    mr r5, r21
    bl fn_801FEE08
    add r3, r29, r24
    lwz r5, 0xe0(r3)
    cmpwi r5, 0x0
    bge lbl_fn_804C7D7C_000019AC
    addi r3, r1, 0x70
    addi r4, r14, 0x18
    neg r5, r5
    crclr 6
    bl fn_800DD3FC
    lwz r4, 0x80(r31)
    addi r3, r23, 0x408
    addi r21, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r21
    addi r5, r1, 0x70
    bl fn_801FEE08
    b lbl_fn_804C7D7C_000019BC
lbl_fn_804C7D7C_000019AC:
    lwz r3, 0x80(r31)
    addi r4, r23, 0x408
    li r6, 0x0
    bl fn_801F4CB4
lbl_fn_804C7D7C_000019BC:
    lwz r21, 0x80(r31)
    cmpwi r21, 0x0
    beq lbl_fn_804C7D7C_000019E4
    mr r3, r21
    li r4, 0x0
    bl fn_800D246C
    stfs f29, 0x104(r21)
    lwz r0, 0xfc(r21)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r21)
lbl_fn_804C7D7C_000019E4:
    lwz r0, 0xd0(r30)
    extrwi r0, r0, 1, 1
    cmplwi r0, 0x1
    bne lbl_fn_804C7D7C_00001A00
    lwz r3, 0x80(r31)
    stfs f30, 0x100(r3)
    b lbl_fn_804C7D7C_00001A08
lbl_fn_804C7D7C_00001A00:
    lwz r3, 0x80(r31)
    stfs f31, 0x100(r3)
lbl_fn_804C7D7C_00001A08:
    addi r3, r1, 0x30
    addi r4, r23, 0x2d3
    addi r5, r28, 0x1
    crclr 6
    bl sprintf
    lwz r21, 0x50(r25)
    addi r3, r1, 0x30
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r21
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lfs f4, 0x8(r1)
    addi r4, r23, 0x2e4
    lfs f3, 0xc(r1)
    addi r5, r1, 0x1c
    lfs f2, 0x10(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x18(r1)
    stfs f4, 0x1c(r1)
    stfs f3, 0x20(r1)
    stfs f2, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f0, 0x2c(r1)
    lwz r3, 0x80(r31)
    bl fn_801F4728
    b lbl_fn_804C7D7C_00001AF4
lbl_fn_804C7D7C_00001A74:
    lwz r4, 0x80(r31)
    addi r3, r23, 0x3db
    addi r21, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r21
    mr r5, r19
    bl fn_801FEE08
    lwz r4, 0x80(r31)
    addi r3, r23, 0x30a
    addi r21, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r21
    mr r5, r18
    bl fn_801FEE08
    lwz r4, 0x80(r31)
    addi r3, r23, 0x3fa
    addi r21, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r21
    mr r5, r17
    bl fn_801FEE08
    lwz r4, 0x80(r31)
    addi r3, r23, 0x408
    addi r21, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r21
    mr r5, r16
    bl fn_801FEE08
lbl_fn_804C7D7C_00001AF4:
    addi r31, r31, 0x4
    addi r28, r28, 0x1
    addi r24, r24, 0xd5c
lbl_fn_804C7D7C_00001B00:
    lwz r0, 0x0(r29)
    cmpw r28, r0
    blt lbl_fn_804C7D7C_000017C4
    addi r11, r1, 0x2c0
    psq_l f31, 0x2e8(r1), 0, 0
    lfd f31, 0x2e0(r1)
    psq_l f30, 0x2d8(r1), 0, 0
    lfd f30, 0x2d0(r1)
    psq_l f29, 0x2c8(r1), 0, 0
    lfd f29, 0x2c0(r1)
    bl _restgpr_14
    lwz r0, 0x2f4(r1)
    mtlr r0
    addi r1, r1, 0x2f0
    blr
}
