#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8004B338(void);
extern void fn_8004B378(void);
extern void fn_80084320(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_800FAB80(void);
extern void fn_801231D0(void);
extern void fn_8012DB04(void);
extern void fn_80144710(void);
extern void fn_8015495C(void);
extern void fn_8016DA4C(void);
extern void fn_8016DDB0(void);
extern void fn_8016E970(void);
extern void fn_80178208(void);
extern void fn_80178A6C(void);
extern void fn_80196428(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_8023A8B4(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_80392D2C(void);
extern void fn_803E3384(void);
extern void fn_8045ABB4(void);
extern void fn_8045ECC4(void);
extern void fn_804786F8(void);
extern void fn_805BDCC0(void);
extern void fn_805BF208(void);
extern void fn_805BF414(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_8068A4A8(void);
extern void fn_8068AE24(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_80754C24[];
extern u8 lbl_80754DC0[];
extern u8 lbl_80754DE0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886C20;
extern u32 lbl_80886C30;
extern u32 lbl_80886C34;
extern u32 lbl_80886C38;
extern u32 lbl_80886C3C;
extern u32 lbl_80886C50;
extern u32 lbl_80886C64;
extern u32 lbl_80886C6C;
extern u32 lbl_80886C70;
extern u32 lbl_80886C74;
extern u32 lbl_80886C88;
extern u32 lbl_80886C8C;
extern u32 lbl_80886C90;
extern u32 lbl_80886CA0;
extern u32 lbl_80886CCC;
extern u32 lbl_80886CE0;
extern u32 lbl_80886CEC;
extern u32 lbl_80886CFC;
extern u32 lbl_80886D00;
extern u32 lbl_80886D04;
extern u32 lbl_80886D08;
extern u32 lbl_80886D0C;
extern u32 lbl_80886D10;
extern u32 lbl_80886D14;
extern u32 lbl_80886D18;
extern u32 lbl_80886D1C;
extern u32 lbl_80886D20;
extern u32 lbl_80886D24;
extern u32 lbl_80886D28;
extern u32 lbl_80886D2C;
extern u32 lbl_80886D30;
extern u32 lbl_80886D34;
extern u32 lbl_80886D38;
extern u32 lbl_80886D3C;
extern u32 lbl_80886D40;
extern u32 lbl_80886D44;
extern u32 lbl_80886D48;

/* Function declarations */
void fn_8045D1EC(void);
void fn_8045D224(void);
void fn_8045D3A4(void);
void fn_8045DF34(void);
void fn_8045E548(void);
void fn_8045E780(void);
void fn_8045EB60(void);

asm void fn_8045D1EC(void)
{
    nofralloc
    li r0, 0xb
    mtctr r0
lbl_fn_8045D1EC_00000008:
    cmpwi r4, 0x0
    beq lbl_fn_8045D1EC_00000020
    lwz r0, 0x1508(r3)
    ori r0, r0, 0x1
    stw r0, 0x1508(r3)
    b lbl_fn_8045D1EC_0000002C
lbl_fn_8045D1EC_00000020:
    lwz r0, 0x1508(r3)
    clrrwi r0, r0, 1
    stw r0, 0x1508(r3)
lbl_fn_8045D1EC_0000002C:
    addi r3, r3, 0x58
    bdnz lbl_fn_8045D1EC_00000008
    blr
}

asm void fn_8045D224(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x18f8(r3)
    lwz r0, 0x54(r4)
    cmpwi r0, 0x5
    bne lbl_fn_8045D224_000000D4
    lwz r12, 0x0(r4)
    mr r3, r4
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8045D224_000000D4
    lwz r3, 0x18f8(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_80886C30
    stfs f0, 0x238(r3)
    lwz r3, 0x18f8(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    lfs f1, 0x234(r3)
    lfs f0, lbl_80886CFC
    fcmpo cr0, f1, f0
    bge lbl_fn_8045D224_000000D4
    lwz r3, 0x18f8(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_80886CFC
    stfs f0, 0x234(r3)
lbl_fn_8045D224_000000D4:
    lwz r0, 0x14c0(r31)
    cmpwi r0, 0x78
    bne lbl_fn_8045D224_00000198
    lwz r5, 0x1508(r31)
    li r0, 0xa
    mulli r0, r0, 0x58
    li r4, 0xcd
    clrrwi r5, r5, 1
    stw r5, 0x1508(r31)
    lwz r5, 0x1560(r31)
    add r3, r31, r0
    clrrwi r0, r5, 1
    stw r0, 0x1560(r31)
    lwz r0, 0x15b8(r31)
    clrrwi r0, r0, 1
    stw r0, 0x15b8(r31)
    lwz r0, 0x1610(r31)
    clrrwi r0, r0, 1
    stw r0, 0x1610(r31)
    lwz r0, 0x1668(r31)
    clrrwi r0, r0, 1
    stw r0, 0x1668(r31)
    lwz r5, 0x16c0(r31)
    clrrwi r5, r5, 1
    stw r5, 0x16c0(r31)
    lwz r5, 0x1718(r31)
    clrrwi r0, r5, 1
    stw r0, 0x1718(r31)
    lwz r0, 0x1770(r31)
    clrrwi r0, r0, 1
    stw r0, 0x1770(r31)
    lwz r0, 0x17c8(r31)
    clrrwi r0, r0, 1
    stw r0, 0x17c8(r31)
    lwz r0, 0x1820(r31)
    clrrwi r0, r0, 1
    stw r0, 0x1820(r31)
    lwz r0, 0x1508(r3)
    clrrwi r0, r0, 1
    stw r0, 0x1508(r3)
    lwz r3, lbl_8087F430
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8045D224_000001A4
    lwz r3, lbl_8087F430
    li r4, 0xcd
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_8045D224_000001A4
lbl_fn_8045D224_00000198:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
lbl_fn_8045D224_000001A4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8045D3A4(void)
{
    nofralloc
    stwu r1, -0x450(r1)
    mflr r0
    stw r0, 0x454(r1)
    stfd f31, 0x440(r1)
    psq_st f31, 0x448(r1), 0, 0
    stw r31, 0x43c(r1)
    stw r30, 0x438(r1)
    mr r30, r3
    addi r3, r3, 0x1964
    stw r29, 0x434(r1)
    stw r28, 0x430(r1)
    bl fn_804786F8
    li r4, 0x0
    bl fn_805BDCC0
    lfs f1, 0x2e4(r30)
    mr r31, r3
    addi r4, r1, 0x58
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_805BF414
    lfs f1, 0x2e4(r30)
    mr r3, r31
    addi r4, r1, 0x4c
    li r5, 0x7
    li r6, 0x8
    li r7, 0x9
    bl fn_805BF414
    lfs f1, 0x528(r30)
    addi r3, r1, 0x208
    lfs f2, 0x52c(r30)
    lfs f3, 0x530(r30)
    bl fn_805F90D0
    lfs f9, lbl_80886C34
    addi r28, r1, 0xb8
    lfs f1, 0x538(r30)
    addi r29, r1, 0x208
    lfs f0, lbl_80886C30
    fcmpu cr0, f9, f1
    stfs f9, 0x40(r1)
    stfs f1, 0x44(r1)
    stfs f9, 0x48(r1)
    stfs f9, 0xe4(r1)
    stfs f9, 0xdc(r1)
    stfs f9, 0xd8(r1)
    stfs f9, 0xd4(r1)
    stfs f9, 0xd0(r1)
    stfs f9, 0xc8(r1)
    stfs f9, 0xc4(r1)
    stfs f9, 0xc0(r1)
    stfs f9, 0xbc(r1)
    stfs f0, 0xe0(r1)
    stfs f0, 0xcc(r1)
    stfs f0, 0xb8(r1)
    beq lbl_fn_8045D3A4_000002E4
    addi r3, r1, 0x118
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x118
    addi r5, r1, 0xe8
    bl fn_805F89F0
    addi r3, r1, 0xe8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_8045D3A4_000002E4:
    lfs f0, lbl_80886C34
    lfs f1, 0x40(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8045D3A4_00000344
    addi r3, r1, 0x178
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x178
    addi r5, r1, 0x148
    bl fn_805F89F0
    addi r3, r1, 0x148
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_8045D3A4_00000344:
    lfs f0, lbl_80886C34
    lfs f1, 0x48(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8045D3A4_000003A4
    addi r3, r1, 0x1d8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x1d8
    addi r5, r1, 0x1a8
    bl fn_805F89F0
    addi r3, r1, 0x1a8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_8045D3A4_000003A4:
    mr r3, r29
    mr r4, r28
    addi r5, r1, 0x88
    bl fn_805F89F0
    addi r6, r1, 0x88
    addi r4, r1, 0x58
    psq_l f1, 0x0(r6), 0, 0
    mr r5, r4
    psq_l f2, 0x8(r6), 0, 0
    addi r3, r1, 0x208
    psq_l f3, 0x10(r6), 0, 0
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    bl fn_805F93C0
    addi r4, r1, 0x4c
    addi r3, r1, 0x208
    mr r5, r4
    bl fn_805F93C0
    lwz r9, lbl_8087F430
    addi r8, r1, 0x240
    addi r7, r1, 0x24c
    addi r6, r1, 0x258
    lwz r0, 0x6c(r9)
    addi r5, r1, 0x264
    stw r0, 0x238(r1)
    addi r4, r1, 0x290
    addi r3, r1, 0x2c0
    lwz r0, 0x70(r9)
    stw r0, 0x23c(r1)
    psq_l f1, 0x74(r9), 0, 0
    lfs f2, 0x7c(r9)
    stfs f2, 0x248(r1)
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x80(r9), 0, 0
    lfs f2, 0x88(r9)
    stfs f2, 0x254(r1)
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x8c(r9), 0, 0
    lfs f2, 0x94(r9)
    stfs f2, 0x260(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x98(r9), 0, 0
    lfs f2, 0xa0(r9)
    stfs f2, 0x26c(r1)
    psq_st f1, 0x0(r5), 0, 0
    lfs f0, 0xa4(r9)
    stfs f0, 0x270(r1)
    lfs f0, 0xa8(r9)
    stfs f0, 0x274(r1)
    lfs f0, 0xac(r9)
    stfs f0, 0x278(r1)
    lfs f0, 0xb0(r9)
    stfs f0, 0x27c(r1)
    lfs f0, 0xb4(r9)
    stfs f0, 0x280(r1)
    lfs f0, 0xb8(r9)
    stfs f0, 0x284(r1)
    lfs f0, 0xbc(r9)
    stfs f0, 0x288(r1)
    lfs f0, 0xc0(r9)
    stfs f0, 0x28c(r1)
    psq_l f1, 0xc4(r9), 0, 0
    psq_l f2, 0xcc(r9), 0, 0
    psq_l f3, 0xd4(r9), 0, 0
    psq_l f4, 0xdc(r9), 0, 0
    psq_l f5, 0xe4(r9), 0, 0
    psq_l f6, 0xec(r9), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_l f1, 0xf4(r9), 0, 0
    psq_l f2, 0xfc(r9), 0, 0
    psq_l f3, 0x104(r9), 0, 0
    psq_l f4, 0x10c(r9), 0, 0
    psq_l f5, 0x114(r9), 0, 0
    psq_l f6, 0x11c(r9), 0, 0
    psq_l f7, 0x124(r9), 0, 0
    psq_l f8, 0x12c(r9), 0, 0
    psq_st f8, 0x38(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f7, 0x30(r3), 0, 0
    lfs f0, 0x134(r9)
    addi r6, r1, 0x338
    stfs f0, 0x300(r1)
    addi r3, r1, 0x308
    addi r4, r6, 0x94
    addi r5, r9, 0x200
    lfs f0, 0x138(r9)
    addi r0, r6, 0xf4
    stfs f0, 0x304(r1)
    psq_l f1, 0x13c(r9), 0, 0
    psq_l f2, 0x144(r9), 0, 0
    psq_l f3, 0x14c(r9), 0, 0
    psq_l f4, 0x154(r9), 0, 0
    psq_l f5, 0x15c(r9), 0, 0
    psq_l f6, 0x164(r9), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_l f1, 0x16c(r9), 0, 0
    psq_l f2, 0x174(r9), 0, 0
    psq_l f3, 0x17c(r9), 0, 0
    psq_l f4, 0x184(r9), 0, 0
    psq_l f5, 0x18c(r9), 0, 0
    psq_l f6, 0x194(r9), 0, 0
    psq_st f6, 0x28(r6), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    psq_st f3, 0x10(r6), 0, 0
    psq_st f4, 0x18(r6), 0, 0
    psq_st f5, 0x20(r6), 0, 0
    lwz r3, 0x19c(r9)
    stw r3, 0x368(r1)
    lfs f0, 0x1a0(r9)
    stfs f0, 0x36c(r1)
    lfs f0, 0x1a4(r9)
    stfs f0, 0x370(r1)
    psq_l f1, 0x1a8(r9), 0, 0
    lfs f2, 0x1b0(r9)
    stfs f2, 0x37c(r1)
    psq_st f1, 0x3c(r6), 0, 0
    lfs f0, 0x1b4(r9)
    stfs f0, 0x380(r1)
    psq_l f1, 0x1b8(r9), 0, 0
    lfs f2, 0x1c0(r9)
    stfs f2, 0x38c(r1)
    psq_st f1, 0x4c(r6), 0, 0
    lfs f0, 0x1c4(r9)
    stfs f0, 0x390(r1)
    psq_l f1, 0x1c8(r9), 0, 0
    lfs f2, 0x1d0(r9)
    stfs f2, 0x39c(r1)
    psq_st f1, 0x5c(r6), 0, 0
    lfs f0, 0x1d4(r9)
    stfs f0, 0x3a0(r1)
    psq_l f1, 0x1d8(r9), 0, 0
    lfs f2, 0x1e0(r9)
    stfs f2, 0x3ac(r1)
    psq_st f1, 0x6c(r6), 0, 0
    lfs f0, 0x1e4(r9)
    stfs f0, 0x3b0(r1)
    psq_l f1, 0x1e8(r9), 0, 0
    lfs f2, 0x1f0(r9)
    stfs f2, 0x3bc(r1)
    psq_st f1, 0x7c(r6), 0, 0
    psq_l f1, 0x1f4(r9), 0, 0
    lfs f2, 0x1fc(r9)
    stfs f2, 0x3c8(r1)
    psq_st f1, 0x88(r6), 0, 0
lbl_fn_8045D3A4_00000640:
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    lfs f0, 0xc(r5)
    addi r5, r5, 0x10
    stfs f0, 0xc(r4)
    addi r4, r4, 0x10
    cmplw r4, r0
    blt lbl_fn_8045D3A4_00000640
    addi r3, r1, 0x58
    lfs f2, 0x60(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r28, r1, 0x240
    stfs f2, 0x248(r1)
    addi r4, r1, 0x4c
    lfs f2, 0x54(r1)
    addi r29, r1, 0x24c
    psq_st f1, 0x0(r28), 0, 0
    mr r3, r31
    psq_l f1, 0x0(r4), 0, 0
    li r4, 0x0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x254(r1)
    lfs f1, 0x2e4(r30)
    bl fn_805BF208
    lfs f9, lbl_80886CCC
    lfs f0, lbl_80886C64
    fmuls f9, f9, f1
    lfs f31, 0x28c(r1)
    fmuls f1, f0, f9
    bl fn_8068AE24
    frsp f0, f1
    fdivs f1, f0, f31
    bl fn_8068A4A8
    frsp f9, f1
    lfs f0, lbl_80886CA0
    addi r3, r1, 0x238
    fmuls f0, f0, f9
    stfs f0, 0x288(r1)
    bl fn_8004B378
    lfs f31, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    bge lbl_fn_8045D3A4_00000958
    lwz r7, lbl_8087EFB4
    addi r3, r1, 0x258
    lwz r0, 0x238(r1)
    addi r4, r1, 0x264
    stw r0, 0x104(r7)
    addi r5, r1, 0x290
    addi r6, r1, 0x2c0
    lwz r0, 0x23c(r1)
    stw r0, 0x108(r7)
    lfs f2, 0x248(r1)
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x10c(r7), 0, 0
    stfs f2, 0x114(r7)
    lfs f2, 0x254(r1)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x118(r7), 0, 0
    stfs f2, 0x120(r7)
    lfs f2, 0x260(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x124(r7), 0, 0
    stfs f2, 0x12c(r7)
    lfs f2, 0x26c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x130(r7), 0, 0
    stfs f2, 0x138(r7)
    lfs f0, 0x270(r1)
    stfs f0, 0x13c(r7)
    lfs f0, 0x274(r1)
    stfs f0, 0x140(r7)
    lfs f0, 0x278(r1)
    stfs f0, 0x144(r7)
    lfs f0, 0x27c(r1)
    stfs f0, 0x148(r7)
    lfs f0, 0x280(r1)
    stfs f0, 0x14c(r7)
    lfs f0, 0x284(r1)
    stfs f0, 0x150(r7)
    lfs f0, 0x288(r1)
    stfs f0, 0x154(r7)
    lfs f0, 0x28c(r1)
    stfs f0, 0x158(r7)
    psq_l f2, 0x8(r5), 0, 0
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x15c(r7), 0, 0
    psq_st f2, 0x164(r7), 0, 0
    psq_st f3, 0x16c(r7), 0, 0
    psq_st f4, 0x174(r7), 0, 0
    psq_st f5, 0x17c(r7), 0, 0
    psq_st f6, 0x184(r7), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_l f3, 0x10(r6), 0, 0
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_l f7, 0x30(r6), 0, 0
    psq_l f8, 0x38(r6), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x18c(r7), 0, 0
    psq_st f2, 0x194(r7), 0, 0
    psq_st f3, 0x19c(r7), 0, 0
    psq_st f4, 0x1a4(r7), 0, 0
    psq_st f5, 0x1ac(r7), 0, 0
    psq_st f6, 0x1b4(r7), 0, 0
    psq_st f7, 0x1bc(r7), 0, 0
    psq_st f8, 0x1c4(r7), 0, 0
    lfs f0, 0x300(r1)
    addi r4, r1, 0x338
    stfs f0, 0x1cc(r7)
    addi r3, r1, 0x308
    addi r6, r7, 0x298
    addi r5, r4, 0x94
    lfs f0, 0x304(r1)
    addi r0, r7, 0x2f8
    stfs f0, 0x1d0(r7)
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x1d4(r7), 0, 0
    psq_st f2, 0x1dc(r7), 0, 0
    psq_st f3, 0x1e4(r7), 0, 0
    psq_st f4, 0x1ec(r7), 0, 0
    psq_st f5, 0x1f4(r7), 0, 0
    psq_st f6, 0x1fc(r7), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x204(r7), 0, 0
    psq_st f2, 0x20c(r7), 0, 0
    psq_st f3, 0x214(r7), 0, 0
    psq_st f4, 0x21c(r7), 0, 0
    psq_st f5, 0x224(r7), 0, 0
    psq_st f6, 0x22c(r7), 0, 0
    lwz r3, 0x368(r1)
    stw r3, 0x234(r7)
    lfs f0, 0x36c(r1)
    stfs f0, 0x238(r7)
    lfs f0, 0x370(r1)
    stfs f0, 0x23c(r7)
    lfs f2, 0x37c(r1)
    psq_l f1, 0x3c(r4), 0, 0
    psq_st f1, 0x240(r7), 0, 0
    stfs f2, 0x248(r7)
    lfs f0, 0x380(r1)
    stfs f0, 0x24c(r7)
    lfs f2, 0x38c(r1)
    psq_l f1, 0x4c(r4), 0, 0
    psq_st f1, 0x250(r7), 0, 0
    stfs f2, 0x258(r7)
    lfs f0, 0x390(r1)
    stfs f0, 0x25c(r7)
    lfs f2, 0x39c(r1)
    psq_l f1, 0x5c(r4), 0, 0
    psq_st f1, 0x260(r7), 0, 0
    stfs f2, 0x268(r7)
    lfs f0, 0x3a0(r1)
    stfs f0, 0x26c(r7)
    lfs f2, 0x3ac(r1)
    psq_l f1, 0x6c(r4), 0, 0
    psq_st f1, 0x270(r7), 0, 0
    stfs f2, 0x278(r7)
    lfs f0, 0x3b0(r1)
    stfs f0, 0x27c(r7)
    lfs f2, 0x3bc(r1)
    psq_l f1, 0x7c(r4), 0, 0
    psq_st f1, 0x280(r7), 0, 0
    stfs f2, 0x288(r7)
    lfs f2, 0x3c8(r1)
    psq_l f1, 0x88(r4), 0, 0
    psq_st f1, 0x28c(r7), 0, 0
    stfs f2, 0x294(r7)
lbl_fn_8045D3A4_0000092C:
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    addi r5, r5, 0x10
    stfs f0, 0xc(r6)
    addi r6, r6, 0x10
    cmplw r6, r0
    blt lbl_fn_8045D3A4_0000092C
    b lbl_fn_8045D3A4_000009E8
lbl_fn_8045D3A4_00000958:
    lwz r4, 0x1508(r30)
    li r0, 0xa
    mulli r0, r0, 0x58
    clrrwi r4, r4, 1
    stw r4, 0x1508(r30)
    lwz r4, 0x1560(r30)
    add r3, r30, r0
    clrrwi r0, r4, 1
    stw r0, 0x1560(r30)
    lwz r0, 0x15b8(r30)
    clrrwi r0, r0, 1
    stw r0, 0x15b8(r30)
    lwz r0, 0x1610(r30)
    clrrwi r0, r0, 1
    stw r0, 0x1610(r30)
    lwz r0, 0x1668(r30)
    clrrwi r0, r0, 1
    stw r0, 0x1668(r30)
    lwz r4, 0x16c0(r30)
    clrrwi r4, r4, 1
    stw r4, 0x16c0(r30)
    lwz r4, 0x1718(r30)
    clrrwi r0, r4, 1
    stw r0, 0x1718(r30)
    lwz r0, 0x1770(r30)
    clrrwi r0, r0, 1
    stw r0, 0x1770(r30)
    lwz r0, 0x17c8(r30)
    clrrwi r0, r0, 1
    stw r0, 0x17c8(r30)
    lwz r0, 0x1820(r30)
    clrrwi r0, r0, 1
    stw r0, 0x1820(r30)
    lwz r0, 0x1508(r3)
    clrrwi r0, r0, 1
    stw r0, 0x1508(r3)
lbl_fn_8045D3A4_000009E8:
    lfs f31, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80886C20
    fsubs f0, f1, f0
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_8045D3A4_00000A30
    lwz r3, lbl_8087F430
    li r4, 0xcd
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8045D3A4_00000A30
    lwz r3, lbl_8087F430
    li r4, 0xcd
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_8045D3A4_00000A30:
    lwz r0, 0x14bc(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8045D3A4_00000A4C
    lfs f9, 0x2e4(r30)
    lfs f0, lbl_80886D00
    fcmpo cr0, f9, f0
    bgt lbl_fn_8045D3A4_00000ADC
lbl_fn_8045D3A4_00000A4C:
    cmpwi r0, 0x1
    bne lbl_fn_8045D3A4_00000A64
    lfs f9, 0x2e4(r30)
    lfs f0, lbl_80886D04
    fcmpo cr0, f9, f0
    bgt lbl_fn_8045D3A4_00000ADC
lbl_fn_8045D3A4_00000A64:
    cmpwi r0, 0x2
    bne lbl_fn_8045D3A4_00000A7C
    lfs f9, 0x2e4(r30)
    lfs f0, lbl_80886D08
    fcmpo cr0, f9, f0
    bgt lbl_fn_8045D3A4_00000ADC
lbl_fn_8045D3A4_00000A7C:
    cmpwi r0, 0x3
    bne lbl_fn_8045D3A4_00000A94
    lfs f9, 0x2e4(r30)
    lfs f0, lbl_80886D0C
    fcmpo cr0, f9, f0
    bgt lbl_fn_8045D3A4_00000ADC
lbl_fn_8045D3A4_00000A94:
    cmpwi r0, 0x4
    bne lbl_fn_8045D3A4_00000AAC
    lfs f9, 0x2e4(r30)
    lfs f0, lbl_80886D10
    fcmpo cr0, f9, f0
    bgt lbl_fn_8045D3A4_00000ADC
lbl_fn_8045D3A4_00000AAC:
    cmpwi r0, 0x5
    bne lbl_fn_8045D3A4_00000AC4
    lfs f9, 0x2e4(r30)
    lfs f0, lbl_80886D14
    fcmpo cr0, f9, f0
    bgt lbl_fn_8045D3A4_00000ADC
lbl_fn_8045D3A4_00000AC4:
    cmpwi r0, 0x6
    bne lbl_fn_8045D3A4_00000BA0
    lfs f9, 0x2e4(r30)
    lfs f0, lbl_80886D18
    fcmpo cr0, f9, f0
    ble lbl_fn_8045D3A4_00000BA0
lbl_fn_8045D3A4_00000ADC:
    lwz r5, 0x14bc(r30)
    li r3, 0x0
    li r4, 0x0
    addi r0, r5, 0x1
    stw r0, 0x14bc(r30)
    bl fn_80232B7C
    lfs f0, lbl_80886C34
    li r11, -0x1
    lfs f1, lbl_80886C30
    li r0, 0x1
    stfs f0, 0x20(r1)
    addi r4, r30, 0x196c
    lwz r3, lbl_8087F3C0
    addi r5, r30, 0xb0
    stfs f0, 0x24(r1)
    addi r7, r1, 0x14
    addi r8, r1, 0x20
    addi r9, r1, 0x30
    stfs f0, 0x28(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_8023A8B4
    lwz r0, 0x14bc(r30)
    srwi r3, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r3
    subf. r0, r3, r0
    bne lbl_fn_8045D3A4_00000BA0
    lis r4, lbl_80754DE0@ha
    lfs f1, lbl_80886C30
    addi r4, r4, lbl_80754DE0@l
    addi r3, r1, 0x10
    addi r4, r4, 0xd5
    addi r5, r30, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8045D3A4_00000BA0:
    lfs f31, 0x2e4(r30)
    lfs f0, lbl_80886CEC
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_8045D3A4_00000BE0
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80886D1C
    fsubs f0, f1, f0
    fcmpo cr0, f31, f0
    bge lbl_fn_8045D3A4_00000BE0
    lwz r3, lbl_8087EFA8
    li r0, 0x1
    stw r0, 0x240(r3)
    b lbl_fn_8045D3A4_00000BEC
lbl_fn_8045D3A4_00000BE0:
    lwz r3, lbl_8087EFA8
    li r0, 0x0
    stw r0, 0x240(r3)
lbl_fn_8045D3A4_00000BEC:
    lfs f9, 0x2e4(r30)
    lfs f0, lbl_80886D20
    fcmpo cr0, f9, f0
    cror eq, gt, eq
    bne lbl_fn_8045D3A4_00000D14
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8045D3A4_00000D14
    lwz r3, lbl_8087F430
    addi r4, r1, 0x238
    lfs f1, lbl_80886D24
    addi r3, r3, 0x6c
    bl fn_80392D2C
    li r31, 0x0
    stw r31, 0x14bc(r30)
    stw r31, 0x14c0(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0xe
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f0, lbl_80886C30
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80886C34
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x2f
    lfs f2, lbl_80886C50
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lis r6, lbl_807C7030@ha
    addi r3, r30, 0xb0
    addi r6, r6, lbl_807C7030@l
    li r4, 0x0
    psq_l f1, 0x0(r6), 0, 0
    li r5, 0x30
    lfs f2, 0x8(r6)
    li r6, 0x1
    stfs f2, 0x57c(r30)
    li r7, 0x0
    lfs f2, lbl_80886C38
    li r8, 0x1
    psq_st f1, 0x574(r30), 0, 0
    lfs f1, lbl_80886C34
    bl fn_80097C08
    li r0, 0x2
    stw r0, 0x14bc(r30)
    lfs f0, lbl_80886C34
    li r0, 0x3
    stw r0, 0x68(r1)
    addi r4, r1, 0x68
    stw r31, 0x6c(r1)
    stw r31, 0x70(r1)
    stw r31, 0x74(r1)
    stw r31, 0x78(r1)
    stfs f0, 0x7c(r1)
    stfs f0, 0x80(r1)
    stfs f0, 0x84(r1)
    lwz r3, 0x18f8(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087EFA8
    stw r31, 0x240(r3)
lbl_fn_8045D3A4_00000D14:
    addi r3, r1, 0x238
    li r4, -0x1
    bl fn_8004B338
    lwz r0, 0x454(r1)
    psq_l f31, 0x448(r1), 0, 0
    lfd f31, 0x440(r1)
    lwz r31, 0x43c(r1)
    lwz r30, 0x438(r1)
    lwz r29, 0x434(r1)
    lwz r28, 0x430(r1)
    mtlr r0
    addi r1, r1, 0x450
    blr
}

asm void fn_8045DF34(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stw r31, 0x13c(r1)
    mr r31, r3
    stw r30, 0x138(r1)
    stw r29, 0x134(r1)
    stw r28, 0x130(r1)
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8045DF34_00001060
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_80886C3C
    fcmpo cr0, f3, f0
    bge lbl_fn_8045DF34_00000F04
    lwz r9, 0x18f8(r3)
    addi r5, r1, 0xa0
    lfs f3, 0x52c(r3)
    addi r6, r1, 0x40
    psq_l f1, 0x6c(r9), 0, 0
    addi r7, r3, 0x1948
    psq_st f1, 0x0(r5), 0, 0
    addi r8, r1, 0x94
    lfs f2, 0x74(r9)
    lis r4, lbl_80754DC0@ha
    lfs f5, 0xa4(r1)
    lfs f0, 0x528(r3)
    fsubs f9, f3, f5
    lfs f4, 0xa0(r1)
    lfs f3, lbl_80886D28
    fsubs f8, f0, f4
    lfs f6, 0x530(r3)
    fmuls f7, f9, f3
    fsubs f10, f6, f2
    stfs f8, 0x1c(r1)
    fmuls f6, f8, f3
    fadds f5, f7, f5
    lfs f0, 0x194c(r3)
    fmuls f8, f10, f3
    fadds f3, f6, f4
    stfs f5, 0x44(r1)
    stfs f3, 0x40(r1)
    fadds f4, f8, f2
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0xa8(r1)
    fmr f2, f4
    stfs f0, 0xa4(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0xa8(r1)
    frsp f2, f2
    psq_st f1, 0x6c(r9), 0, 0
    stfs f2, 0x74(r9)
    lfs f2, 0xa8(r1)
    psq_st f1, 0x0(r7), 0, 0
    lwz r5, 0x18f8(r3)
    stfs f2, 0x1950(r3)
    lfs f3, 0x538(r3)
    psq_l f1, 0x78(r5), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    lfs f2, 0x80(r5)
    lfs f0, 0x98(r1)
    stfs f2, 0x9c(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80754DC0@l(r4)
    stfs f9, 0x20(r1)
    stfs f10, 0x24(r1)
    stfs f6, 0x10(r1)
    stfs f7, 0x14(r1)
    stfs f8, 0x18(r1)
    stfs f4, 0x48(r1)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_80886C88
    fcmpo cr0, f4, f0
    ble lbl_fn_8045DF34_00000E88
    lfs f0, lbl_80886C8C
    fsubs f4, f4, f0
lbl_fn_8045DF34_00000E88:
    lfs f0, lbl_80886C90
    fcmpo cr0, f4, f0
    bge lbl_fn_8045DF34_00000E9C
    lfs f0, lbl_80886C8C
    fadds f4, f4, f0
lbl_fn_8045DF34_00000E9C:
    lfs f3, lbl_80886D28
    lis r3, lbl_80754DC0@ha
    lfs f0, 0x98(r1)
    fmuls f3, f3, f4
    lfd f2, lbl_80754DC0@l(r3)
    fadds f1, f0, f3
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80886C88
    fcmpo cr0, f3, f0
    ble lbl_fn_8045DF34_00000ED0
    lfs f0, lbl_80886C8C
    fsubs f3, f3, f0
lbl_fn_8045DF34_00000ED0:
    lfs f0, lbl_80886C90
    fcmpo cr0, f3, f0
    bge lbl_fn_8045DF34_00000EE4
    lfs f0, lbl_80886C8C
    fadds f3, f3, f0
lbl_fn_8045DF34_00000EE4:
    stfs f3, 0x98(r1)
    addi r3, r1, 0x94
    lwz r4, 0x18f8(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x78(r4), 0, 0
    lfs f2, 0x9c(r1)
    stfs f2, 0x80(r4)
    b lbl_fn_8045DF34_00001334
lbl_fn_8045DF34_00000F04:
    lwz r7, 0x18f8(r3)
    addi r4, r1, 0x88
    lfs f0, 0x194c(r3)
    addi r5, r3, 0x1948
    psq_l f1, 0x6c(r7), 0, 0
    addi r6, r1, 0x7c
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x74(r7)
    stfs f0, 0x8c(r1)
    lfs f0, lbl_80886D2C
    stfs f2, 0x90(r1)
    lfs f2, 0x530(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x6c(r7), 0, 0
    stfs f2, 0x74(r7)
    stfs f2, 0x90(r1)
    frsp f2, f2
    lwz r4, 0x18f8(r3)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1950(r3)
    lfs f2, 0x80(r4)
    stfs f2, 0x84(r1)
    psq_l f1, 0x78(r4), 0, 0
    lfs f2, 0x53c(r3)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x534(r3), 0, 0
    psq_st f1, 0x78(r4), 0, 0
    stfs f2, 0x80(r4)
    lfs f3, 0x2e4(r3)
    psq_st f1, 0x0(r6), 0, 0
    fcmpo cr0, f3, f0
    stfs f2, 0x84(r1)
    cror eq, gt, eq
    bne lbl_fn_8045DF34_00001334
    lwz r4, 0x14bc(r3)
    addi r0, r4, 0x1
    stw r0, 0x14bc(r3)
    li r3, 0x5bd
    bl fn_80219E6C
    lfs f3, lbl_80886C34
    mr r28, r3
    lfs f0, lbl_80886C30
    addi r3, r1, 0xf8
    stfs f3, 0x34(r1)
    li r4, 0x79
    stfs f3, 0x38(r1)
    stfs f0, 0x3c(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x34
    addi r3, r1, 0xf8
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x530(r31)
    lfs f0, 0x3c(r1)
    lfs f5, 0x52c(r31)
    fadds f6, f3, f0
    lfs f4, 0x38(r1)
    lfs f3, 0x528(r31)
    lfs f0, 0x34(r1)
    fadds f4, f5, f4
    lwz r4, lbl_8087F8A0
    fadds f0, f3, f0
    lwz r29, lbl_8087F048
    stfs f4, 0x74(r1)
    mr r3, r29
    stfs f0, 0x70(r1)
    stfs f6, 0x78(r1)
    lwz r30, 0x48(r4)
    bl fn_800F8548
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_80886C34
    mr r6, r3
    stw r0, 0xc(r1)
    mr r3, r29
    lfs f2, lbl_80886C30
    mr r4, r30
    mr r5, r28
    addi r7, r1, 0x70
    addi r8, r31, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    b lbl_fn_8045DF34_00001334
lbl_fn_8045DF34_00001060:
    cmpwi r0, 0x1
    bne lbl_fn_8045DF34_00001158
    lwz r8, 0x18f8(r3)
    addi r5, r1, 0x64
    lfs f0, 0x194c(r3)
    addi r6, r3, 0x1948
    psq_l f1, 0x6c(r8), 0, 0
    addi r7, r1, 0x58
    psq_st f1, 0x0(r5), 0, 0
    li r4, 0x0
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f2, 0x74(r8)
    stfs f0, 0x68(r1)
    stfs f2, 0x6c(r1)
    lfs f2, 0x530(r3)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x6c(r8), 0, 0
    stfs f2, 0x74(r8)
    stfs f2, 0x6c(r1)
    frsp f2, f2
    lwz r5, 0x18f8(r3)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x1950(r3)
    lfs f2, 0x80(r5)
    stfs f2, 0x60(r1)
    psq_l f1, 0x78(r5), 0, 0
    lfs f2, 0x53c(r3)
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x534(r3), 0, 0
    psq_st f1, 0x78(r5), 0, 0
    stfs f2, 0x80(r5)
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x60(r1)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8045DF34_00001334
    lwz r5, 0x14bc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886C30
    li r4, 0x0
    addi r0, r5, 0x1
    stw r0, 0x14bc(r31)
    lfs f2, lbl_80886C50
    li r5, 0x30
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F430
    li r4, 0xd0
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8045DF34_00001334
    lwz r3, lbl_8087F430
    li r4, 0xd0
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_8045DF34_00001334
lbl_fn_8045DF34_00001158:
    lwz r3, 0x18f8(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    li r4, 0x0
    bl fn_80097D7C
    lwz r3, 0x18f8(r31)
    fmr f31, f1
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    stfs f31, 0x234(r3)
    addi r3, r1, 0x4c
    lfs f0, lbl_80886C34
    lwz r4, lbl_8087F8A0
    lfs f5, 0x530(r31)
    lwz r28, 0x48(r4)
    lfs f3, 0x528(r31)
    lfs f6, 0x530(r28)
    lfs f4, 0x528(r28)
    fsubs f5, f6, f5
    fsubs f3, f4, f3
    stfs f0, 0x50(r1)
    stfs f3, 0x4c(r1)
    stfs f5, 0x54(r1)
    bl fn_805F9940
    lfs f0, lbl_80886D30
    fcmpo cr0, f1, f0
    bge lbl_fn_8045DF34_00001334
    mr r3, r28
    li r4, 0x0
    bl fn_8016DDB0
    lwz r0, 0x55c(r28)
    mr r29, r3
    cmpwi r0, 0x6
    bne lbl_fn_8045DF34_00001200
    lwz r0, 0x560(r28)
    cmpwi r0, 0x4
    bne lbl_fn_8045DF34_00001200
    li r29, 0x1
lbl_fn_8045DF34_00001200:
    addi r3, r1, 0x4c
    mr r4, r3
    bl fn_805F98D0
    lfs f3, lbl_80886C34
    addi r3, r1, 0xc8
    lfs f0, lbl_80886C30
    li r4, 0x79
    stfs f3, 0x28(r1)
    stfs f3, 0x2c(r1)
    stfs f0, 0x30(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x28
    addi r3, r1, 0xc8
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x4c
    addi r4, r1, 0x28
    bl fn_805F9990
    lfs f0, lbl_80886C34
    fcmpo cr0, f1, f0
    bge lbl_fn_8045DF34_0000125C
    li r29, 0x0
lbl_fn_8045DF34_0000125C:
    cmpwi r29, 0x0
    beq lbl_fn_8045DF34_00001334
    lwz r7, lbl_8087F490
    cmpwi r7, 0x0
    beq lbl_fn_8045DF34_000012BC
    li r4, 0x6
    stw r4, 0x764(r7)
    li r5, 0x0
    li r3, 0x11
    stw r3, 0x768(r7)
    li r6, -0x1
    li r0, 0x1
    stw r6, 0x76c(r7)
    stw r5, 0x770(r7)
    stw r5, 0x774(r7)
    stw r5, 0x778(r7)
    stw r6, 0xb4(r1)
    stw r5, 0xb8(r1)
    stw r5, 0xbc(r1)
    stw r5, 0xc0(r1)
    stw r4, 0xac(r1)
    stw r3, 0xb0(r1)
    stw r0, 0xc4(r1)
    stw r0, 0x77c(r7)
lbl_fn_8045DF34_000012BC:
    lwz r3, lbl_8087F0A8
    li r4, 0x0
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_8045DF34_00001334
    lis r5, lbl_80754DE0@ha
    li r3, 0x30
    addi r5, r5, lbl_80754DE0@l
    li r4, 0x3
    addi r5, r5, 0xe2
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8045DF34_00001314
    mr r4, r28
    mr r5, r31
    li r6, 0x5bc
    bl fn_80196428
    mr r4, r3
lbl_fn_8045DF34_00001314:
    mr r3, r28
    bl fn_80178208
    mr r3, r31
    bl fn_8045ECC4
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_8045DF34_00001334
    bl fn_803E3384
lbl_fn_8045DF34_00001334:
    lwz r0, 0x154(r1)
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    lwz r31, 0x13c(r1)
    lwz r30, 0x138(r1)
    lwz r29, 0x134(r1)
    lwz r28, 0x130(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_8045E548(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    mr r30, r3
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8045E548_000013DC
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8045E548_00001560
    li r3, 0xd2
    li r0, 0x1
    stw r3, 0x14ec(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80886C34
    li r4, 0x0
    stw r0, 0x14bc(r30)
    li r5, 0x14b
    lfs f2, lbl_80886C38
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_8045E548_00001560
lbl_fn_8045E548_000013DC:
    cmpwi r0, 0x1
    bne lbl_fn_8045E548_00001450
    lwz r4, 0x14ec(r3)
    subic. r0, r4, 0x1
    stw r0, 0x14ec(r3)
    bge lbl_fn_8045E548_00001560
    lis r5, lbl_80754C24@ha
    li r11, 0x0
    addi r5, r5, lbl_80754C24@l
    li r0, 0x2
    lwz r10, 0x34(r5)
    li r4, 0x0
    lwz r9, 0x50(r5)
    li r5, 0x14c
    stw r11, 0x18d4(r3)
    li r6, 0x0
    lfs f1, lbl_80886C34
    li r7, 0x1
    stw r11, 0x18d8(r3)
    li r8, 0x1
    lfs f2, lbl_80886C38
    stw r10, 0x18dc(r3)
    stw r11, 0x18e0(r3)
    stw r9, 0x18e4(r3)
    stw r11, 0x18e8(r3)
    stw r0, 0x14bc(r3)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_8045E548_00001560
lbl_fn_8045E548_00001450:
    cmpwi r0, 0x2
    bne lbl_fn_8045E548_00001560
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8045E548_00001560
    lfs f3, lbl_80886C34
    addi r3, r1, 0x20
    lfs f0, lbl_80886C30
    li r4, 0x79
    stfs f3, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f0, 0x1c(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x20
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x14(r1)
    addi r3, r1, 0x14
    lfs f5, lbl_80886CE0
    li r0, 0x0
    lfs f3, 0x18(r1)
    addi r31, r1, 0x8
    fmuls f4, f0, f5
    lfs f0, 0x1c(r1)
    fmuls f3, f3, f5
    fmuls f2, f0, f5
    stfs f4, 0x14(r1)
    stfs f3, 0x18(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x1c(r1)
    stw r0, 0x14bc(r30)
    stw r0, 0x14c0(r30)
    psq_st f1, 0x0(r31), 0, 0
    lwz r3, lbl_8087F048
    stfs f2, 0x10(r1)
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0xa
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f0, lbl_80886C30
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80886C34
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x14d
    lfs f2, lbl_80886C38
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f2, 0x10(r1)
    addi r3, r30, 0x14d4
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x14dc(r30)
    b lbl_fn_8045E548_00001574
lbl_fn_8045E548_00001560:
    lfs f1, lbl_80886C34
    mr r3, r30
    lfs f2, 0x568(r30)
    addi r4, r30, 0x14e0
    bl fn_8045ABB4
lbl_fn_8045E548_00001574:
    lwz r0, 0x74(r1)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8045E780(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    stfd f29, 0x130(r1)
    psq_st f29, 0x138(r1), 0, 0
    stw r31, 0x12c(r1)
    stw r30, 0x128(r1)
    mr r30, r3
    addi r3, r3, 0x7d4
    bl fn_8012DB04
    stfs f1, 0x2e8(r30)
    addi r3, r30, 0xb0
    lfs f29, 0x2e4(r30)
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f29, f1
    cror eq, gt, eq
    bne lbl_fn_8045E780_00001614
    li r31, 0x0
    stw r31, 0x14bc(r30)
    stw r31, 0x14c0(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stw r31, 0x58c(r30)
    bl fn_8016E970
lbl_fn_8045E780_00001614:
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_80886D34
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8045E780_00001944
    lfs f0, lbl_80886D38
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8045E780_00001944
    lwz r5, lbl_8087EFA8
    addi r3, r1, 0xf0
    lfs f5, 0x2e8(r30)
    li r4, 0x79
    lfs f4, 0x3a4(r5)
    lfs f3, lbl_80886C34
    lfs f0, lbl_80886C30
    fmuls f31, f5, f4
    stfs f3, 0x74(r1)
    stfs f3, 0x78(r1)
    stfs f0, 0x7c(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x74
    addi r3, r1, 0xf0
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x7c(r1)
    addi r3, r30, 0x14d4
    lfs f4, lbl_80886D3C
    addi r31, r1, 0x50
    lfs f3, 0x78(r1)
    fmuls f6, f0, f4
    lfs f2, 0x14dc(r30)
    fmuls f7, f3, f4
    lfs f0, 0x74(r1)
    fabs f12, f2
    psq_l f1, 0x0(r3), 0, 0
    fmuls f8, f0, f4
    lfs f0, 0x52c(r30)
    fmuls f10, f7, f31
    lfs f5, 0x528(r30)
    fmuls f9, f6, f31
    lfs f3, 0x530(r30)
    fmuls f11, f8, f31
    stfs f8, 0x5c(r1)
    fadds f4, f0, f10
    lfs f0, lbl_80886C6C
    frsp f12, f12
    stfs f7, 0x60(r1)
    fadds f5, f5, f11
    stfs f6, 0x64(r1)
    fadds f3, f3, f9
    fcmpo cr0, f12, f0
    stfs f11, 0x68(r1)
    stfs f10, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f5, 0x528(r30)
    stfs f4, 0x52c(r30)
    stfs f3, 0x530(r30)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    bge lbl_fn_8045E780_00001730
    lfs f3, 0x50(r1)
    lfs f0, lbl_80886C34
    fcmpo cr0, f3, f0
    ble lbl_fn_8045E780_00001724
    lfs f0, lbl_80886C70
    b lbl_fn_8045E780_00001728
lbl_fn_8045E780_00001724:
    lfs f0, lbl_80886C74
lbl_fn_8045E780_00001728:
    stfs f0, 0x48(r1)
    b lbl_fn_8045E780_00001744
lbl_fn_8045E780_00001730:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8045E780_00001744:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886C34
    addi r4, r1, 0x38
    lfs f29, 0x88(r1)
    mr r5, r4
    lfs f30, 0x84(r1)
    addi r3, r1, 0xb0
    lfs f13, 0x80(r1)
    lfs f12, 0x98(r1)
    lfs f11, 0x94(r1)
    lfs f10, 0x90(r1)
    lfs f9, 0xa8(r1)
    lfs f8, 0xa4(r1)
    lfs f7, 0xa0(r1)
    lfs f6, 0xac(r1)
    lfs f5, 0x9c(r1)
    lfs f4, 0x8c(r1)
    lfs f0, lbl_80886C30
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f3, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0xb0(r1)
    stfs f30, 0xb4(r1)
    stfs f29, 0xb8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xc0(r1)
    stfs f11, 0xc4(r1)
    stfs f12, 0xc8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xd0(r1)
    stfs f8, 0xd4(r1)
    stfs f9, 0xd8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xcc(r1)
    stfs f6, 0xdc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80886C6C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8045E780_00001860
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80886C34
    fcmpo cr0, f3, f0
    ble lbl_fn_8045E780_00001850
    lfs f0, lbl_80886C70
    b lbl_fn_8045E780_00001854
lbl_fn_8045E780_00001850:
    lfs f0, lbl_80886C74
lbl_fn_8045E780_00001854:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8045E780_00001874
lbl_fn_8045E780_00001860:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8045E780_00001874:
    addi r3, r1, 0x44
    lfs f2, lbl_80886C34
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80754DC0@ha
    psq_st f1, 0x0(r31), 0, 0
    lfs f4, 0x538(r30)
    lfs f0, 0x54(r1)
    stfs f2, 0x58(r1)
    fsubs f3, f0, f4
    lfs f0, lbl_80886D40
    stfs f2, 0x4c(r1)
    lfd f2, lbl_80754DC0@l(r3)
    fmuls f0, f0, f3
    fmuls f0, f31, f0
    fadds f1, f4, f0
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_80886C88
    fcmpo cr0, f4, f0
    ble lbl_fn_8045E780_000018CC
    lfs f0, lbl_80886C8C
    fsubs f4, f4, f0
lbl_fn_8045E780_000018CC:
    lfs f0, lbl_80886C90
    fcmpo cr0, f4, f0
    bge lbl_fn_8045E780_000018E0
    lfs f0, lbl_80886C8C
    fadds f4, f4, f0
lbl_fn_8045E780_000018E0:
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_80886D44
    stfs f4, 0x538(r30)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8045E780_00001944
    lfs f0, lbl_80886D48
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8045E780_00001944
    li r3, 0x5b6
    bl fn_80219E6C
    mr r31, r3
    mr r3, r30
    bl fn_80144710
    lwz r3, lbl_8087F048
    mr r6, r30
    lwz r8, 0x590(r30)
    mr r7, r31
    lfs f1, lbl_80886C34
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
lbl_fn_8045E780_00001944:
    lwz r0, 0x164(r1)
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    psq_l f29, 0x138(r1), 0, 0
    lfd f29, 0x130(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_8045EB60(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r4, 0x58c(r3)
    stw r0, 0x14bc(r3)
    subi r4, r4, 0xe
    stw r0, 0x14c0(r3)
    cntlzw r0, r4
    srwi r31, r0, 5
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    lwz r12, 0x0(r30)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r30
    bl fn_80178A6C
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r30
    bl fn_8016DA4C
    li r0, 0x2
    stw r0, 0x58c(r30)
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80886C30
    cmpwi r31, 0x0
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x37
    beq lbl_fn_8045EB60_00001A2C
    li r5, 0x31
lbl_fn_8045EB60_00001A2C:
    lfs f1, lbl_80886C34
    li r6, 0x0
    lfs f2, lbl_80886C38
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80886C64
    cmpwi r31, 0x0
    stfs f0, 0x2e8(r30)
    beq lbl_fn_8045EB60_00001AA8
    lfs f0, lbl_80886C30
    li r3, 0x0
    lfs f3, lbl_80886D20
    li r0, 0x5
    stfs f0, 0x2e8(r30)
    addi r4, r1, 0x8
    lfs f0, lbl_80886C34
    stfs f3, 0x2e4(r30)
    stw r3, 0xc(r1)
    stw r3, 0x10(r1)
    stw r3, 0x14(r1)
    stw r3, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stw r0, 0x8(r1)
    lwz r3, 0x18f8(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_8045EB60_00001AA8:
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x57c(r30)
    psq_st f1, 0x574(r30), 0, 0
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
