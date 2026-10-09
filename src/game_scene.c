#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8000E18C(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_80084C24(void);
extern void fn_8008CD60(void);
extern void fn_800902C0(void);
extern void fn_800929C0(void);
extern void fn_80093E90(void);
extern void fn_80097E80(void);
extern void fn_800D1D3C(void);
extern void fn_800DC6B4(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_8036554C(void);
extern void fn_803CC5E4(void);
extern void fn_8047FF70(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8072F890[];
extern u8 lbl_8072F924[];
extern u8 lbl_807759E8[];
extern u8 lbl_80775A20[];
extern u8 lbl_80775A48[];
extern u8 lbl_80775AA4[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D6D4;
extern u32 lbl_8087D6D8;
extern u32 lbl_8087F408;
extern u32 lbl_8087F428;
extern u32 lbl_8087F430;
extern u32 lbl_8087F540;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_80880668;
extern u32 lbl_8088066C;
extern u32 lbl_80880670;

/* Function declarations */
void fn_8000CBD0(void);
void fn_8000CBD8(void);
void fn_8000D0F8(void);
void fn_8000D114(void);
void fn_8000D124(void);
void fn_8000D138(void);
void fn_8000D1A0(void);
void fn_8000D1A8(void);
void fn_8000D3A4(void);
void fn_8000D3A8(void);
void fn_8000D430(void);
void fn_8000D4D4(void);
void fn_8000D528(void);
void fn_8000D760(void);
void fn_8000D7DC(void);
void fn_8000D844(void);
void fn_8000D8C0(void);
void fn_8000D9E8(void);
void fn_8000D9F0(void);
void fn_8000D9F8(void);
void fn_8000DA00(void);
void fn_8000DAF0(void);
void fn_8000DB1C(void);
void fn_8000DB24(void);
void fn_8000DCF4(void);
void fn_8000DCFC(void);
void fn_8000DD04(void);
void fn_8000DD0C(void);
void fn_8000DD14(void);
void fn_8000DD98(void);
void fn_8000DDA0(void);
void fn_8000DE3C(void);
void fn_8000DE44(void);

asm void fn_8000CBD0(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_8000CBD8(void)
{
    nofralloc
    stwu r1, -0x330(r1)
    mflr r0
    stw r0, 0x334(r1)
    stw r31, 0x32c(r1)
    mr r31, r3
    stw r30, 0x328(r1)
    stw r29, 0x324(r1)
    lwz r4, 0x50(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8000CBD8_0000050C
    lwz r4, 0x194(r4)
    cmpwi r4, 0xa
    beq lbl_fn_8000CBD8_0000005C
    cmpwi r4, 0xb
    li r0, 0x1
    beq lbl_fn_8000CBD8_00000054
    cmpwi r4, 0xc
    beq lbl_fn_8000CBD8_00000054
    li r0, 0x0
lbl_fn_8000CBD8_00000054:
    cmpwi r0, 0x0
    beq lbl_fn_8000CBD8_0000050C
lbl_fn_8000CBD8_0000005C:
    lwz r5, 0x48(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8000CBD8_0000050C
    lwz r0, 0x55c(r5)
    cmpwi r0, 0x8
    bne lbl_fn_8000CBD8_0000050C
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8000CBD8_0000050C
    lwz r6, 0x54(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8000CBD8_000004EC
    psq_l f1, 0x0(r6), 0, 0
    addi r4, r1, 0x2f0
    psq_l f2, 0x8(r6), 0, 0
    psq_l f3, 0x10(r6), 0, 0
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    lbz r0, 0xb8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8000CBD8_000000F8
    lfs f0, 0x528(r5)
    stfs f0, 0x2fc(r1)
    lfs f0, lbl_80880668
    lfs f7, 0x52c(r5)
    stfs f7, 0x30c(r1)
    lfs f7, 0x530(r5)
    stfs f7, 0x31c(r1)
    stfs f0, 0x64(r3)
    stfs f0, 0x74(r3)
    stfs f0, 0x84(r3)
lbl_fn_8000CBD8_000000F8:
    lbz r0, 0xb9(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8000CBD8_0000049C
    lwz r29, 0x48(r3)
    addi r30, r1, 0x2c0
    lfs f7, lbl_80880668
    lfs f0, lbl_8088066C
    stfs f7, 0x2ec(r1)
    lfs f8, 0x31c(r1)
    stfs f7, 0x2e4(r1)
    lfs f9, 0x30c(r1)
    lfs f10, 0x2fc(r1)
    stfs f7, 0x2e0(r1)
    stfs f7, 0x2dc(r1)
    stfs f7, 0x2d8(r1)
    stfs f7, 0x2d0(r1)
    stfs f7, 0x2cc(r1)
    stfs f7, 0x2c8(r1)
    stfs f7, 0x2c4(r1)
    stfs f0, 0x2e8(r1)
    stfs f0, 0x2d4(r1)
    stfs f0, 0x2c0(r1)
    lfs f1, 0x538(r29)
    stfs f10, 0x14(r1)
    fcmpu cr0, f7, f1
    stfs f9, 0x18(r1)
    stfs f8, 0x1c(r1)
    beq lbl_fn_8000CBD8_000001B8
    addi r3, r1, 0x170
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x170
    addi r5, r1, 0x140
    bl fn_805F89F0
    addi r3, r1, 0x140
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_8000CBD8_000001B8:
    lfs f0, lbl_80880668
    lfs f1, 0x534(r29)
    fcmpu cr0, f0, f1
    beq lbl_fn_8000CBD8_00000218
    addi r3, r1, 0x1d0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x1d0
    addi r5, r1, 0x1a0
    bl fn_805F89F0
    addi r3, r1, 0x1a0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_8000CBD8_00000218:
    lfs f0, lbl_80880668
    lfs f1, 0x53c(r29)
    fcmpu cr0, f0, f1
    beq lbl_fn_8000CBD8_00000278
    addi r3, r1, 0x230
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x230
    addi r5, r1, 0x200
    bl fn_805F89F0
    addi r3, r1, 0x200
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_8000CBD8_00000278:
    addi r3, r1, 0x2f0
    psq_l f2, 0x8(r30), 0, 0
    psq_l f4, 0x18(r30), 0, 0
    lis r29, lbl_807C7030@ha
    psq_l f6, 0x28(r30), 0, 0
    addi r29, r29, lbl_807C7030@l
    psq_l f1, 0x0(r30), 0, 0
    addi r5, r1, 0x8
    psq_l f3, 0x10(r30), 0, 0
    addi r4, r1, 0x14
    psq_l f5, 0x20(r30), 0, 0
    addi r30, r1, 0x290
    psq_st f2, 0x8(r3), 0, 0
    lfs f11, 0x14(r1)
    psq_st f4, 0x18(r3), 0, 0
    lfs f10, 0x18(r1)
    psq_st f6, 0x28(r3), 0, 0
    lfs f9, 0x1c(r1)
    psq_st f1, 0x0(r3), 0, 0
    lfs f8, lbl_80880668
    lfs f0, 0x4(r29)
    psq_st f3, 0x10(r3), 0, 0
    fcmpu cr0, f8, f0
    lfs f7, lbl_8088066C
    psq_st f5, 0x20(r3), 0, 0
    stfs f11, 0x2fc(r1)
    stfs f10, 0x30c(r1)
    stfs f9, 0x31c(r1)
    lfs f2, 0x84(r31)
    lfs f9, 0x74(r31)
    lfs f10, 0x64(r31)
    stfs f10, 0x8(r1)
    stfs f9, 0xc(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    stfs f8, 0x2bc(r1)
    stfs f8, 0x2b4(r1)
    stfs f8, 0x2b0(r1)
    stfs f8, 0x2ac(r1)
    stfs f8, 0x2a8(r1)
    stfs f8, 0x2a0(r1)
    stfs f8, 0x29c(r1)
    stfs f8, 0x298(r1)
    stfs f8, 0x294(r1)
    stfs f7, 0x2b8(r1)
    stfs f7, 0x2a4(r1)
    stfs f7, 0x290(r1)
    beq lbl_fn_8000CBD8_00000394
    fmr f1, f0
    addi r3, r1, 0x50
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x50
    addi r5, r1, 0x20
    bl fn_805F89F0
    addi r3, r1, 0x20
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_8000CBD8_00000394:
    lfs f0, lbl_80880668
    lfs f1, 0x0(r29)
    fcmpu cr0, f0, f1
    beq lbl_fn_8000CBD8_000003F4
    addi r3, r1, 0xb0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xb0
    addi r5, r1, 0x80
    bl fn_805F89F0
    addi r3, r1, 0x80
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_8000CBD8_000003F4:
    lfs f0, lbl_80880668
    lfs f1, 0x8(r29)
    fcmpu cr0, f0, f1
    beq lbl_fn_8000CBD8_00000454
    addi r3, r1, 0x110
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x110
    addi r5, r1, 0xe0
    bl fn_805F89F0
    addi r3, r1, 0xe0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_8000CBD8_00000454:
    psq_l f1, 0x0(r30), 0, 0
    psq_l f2, 0x8(r30), 0, 0
    psq_l f3, 0x10(r30), 0, 0
    psq_l f4, 0x18(r30), 0, 0
    psq_l f5, 0x20(r30), 0, 0
    psq_l f6, 0x28(r30), 0, 0
    psq_st f6, 0x80(r31), 0, 0
    lfs f0, 0x1c(r1)
    psq_st f2, 0x60(r31), 0, 0
    lfs f8, 0x14(r1)
    psq_st f4, 0x70(r31), 0, 0
    lfs f7, 0x18(r1)
    psq_st f1, 0x58(r31), 0, 0
    psq_st f3, 0x68(r31), 0, 0
    psq_st f5, 0x78(r31), 0, 0
    stfs f8, 0x64(r31)
    stfs f7, 0x74(r31)
    stfs f0, 0x84(r31)
lbl_fn_8000CBD8_0000049C:
    addi r3, r1, 0x2f0
    addi r4, r31, 0x58
    addi r5, r1, 0x260
    bl fn_805F89F0
    addi r3, r1, 0x260
    addi r4, r31, 0x88
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    lwz r3, 0x48(r31)
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    stw r4, 0xf1c(r3)
lbl_fn_8000CBD8_000004EC:
    lwz r3, 0x48(r31)
    bl fn_80145334
    lwz r0, 0x54(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8000CBD8_0000050C
    lwz r3, 0x48(r31)
    li r0, 0x0
    stw r0, 0xf1c(r3)
lbl_fn_8000CBD8_0000050C:
    lwz r0, 0x334(r1)
    lwz r31, 0x32c(r1)
    lwz r30, 0x328(r1)
    lwz r29, 0x324(r1)
    mtlr r0
    addi r1, r1, 0x330
    blr
}

asm void fn_8000D0F8(void)
{
    nofralloc
    lfs f2, 0x2c(r4)
    lfs f1, 0x1c(r4)
    lfs f0, 0xc(r4)
    stfs f0, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f2, 0x8(r3)
    blr
}

asm void fn_8000D114(void)
{
    nofralloc
    stfs f1, 0x0(r3)
    stfs f2, 0x4(r3)
    stfs f3, 0x8(r3)
    blr
}

asm void fn_8000D124(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    blr
}

asm void fn_8000D138(void)
{
    nofralloc
    lwz r4, 0x50(r3)
    cmpwi r4, 0x0
    beqlr
    lwz r4, 0x194(r4)
    cmpwi r4, 0xa
    beq lbl_fn_8000D138_000005A0
    cmpwi r4, 0xb
    li r0, 0x0
    beq lbl_fn_8000D138_00000594
    cmpwi r4, 0xc
    bne lbl_fn_8000D138_00000598
lbl_fn_8000D138_00000594:
    li r0, 0x1
lbl_fn_8000D138_00000598:
    cmpwi r0, 0x0
    beqlr
lbl_fn_8000D138_000005A0:
    lwz r3, 0x48(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x8
    bnelr
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bnelr
    b fn_80149A30
    blr
}

asm void fn_8000D1A0(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_8000D1A8(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    stfd f30, 0x90(r1)
    psq_st f30, 0x98(r1), 0, 0
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    mr r30, r3
    lwz r4, 0x50(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8000D1A8_000007AC
    lwz r4, 0x194(r4)
    cmpwi r4, 0xa
    beq lbl_fn_8000D1A8_00000638
    cmpwi r4, 0xb
    li r0, 0x1
    beq lbl_fn_8000D1A8_00000630
    cmpwi r4, 0xc
    beq lbl_fn_8000D1A8_00000630
    li r0, 0x0
lbl_fn_8000D1A8_00000630:
    cmpwi r0, 0x0
    beq lbl_fn_8000D1A8_000007AC
lbl_fn_8000D1A8_00000638:
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8000D1A8_00000748
    lwz r4, 0x48(r3)
    mr r3, r0
    addi r5, r1, 0x50
    addi r4, r4, 0x8
    bl fn_805F89F0
    addi r4, r1, 0x50
    lwz r31, 0x48(r30)
    psq_l f2, 0x8(r4), 0, 0
    addi r3, r1, 0x14
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x8(r31), 0, 0
    psq_st f2, 0x10(r31), 0, 0
    psq_st f3, 0x18(r31), 0, 0
    psq_st f4, 0x20(r31), 0, 0
    psq_st f5, 0x28(r31), 0, 0
    psq_st f6, 0x30(r31), 0, 0
    lfs f8, 0x78(r1)
    lfs f7, 0x68(r1)
    lfs f0, 0x58(r1)
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f8, 0x1c(r1)
    bl fn_805F9940
    lfs f8, 0x74(r1)
    fmr f30, f1
    lfs f7, 0x64(r1)
    addi r3, r1, 0x20
    lfs f0, 0x54(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0x70(r1)
    fmr f31, f1
    lfs f7, 0x60(r1)
    addi r3, r1, 0x2c
    lfs f0, 0x50(r1)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x8(r1)
    frsp f0, f30
    stfs f31, 0xc(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x10(r1)
    ble lbl_fn_8000D1A8_00000718
    b lbl_fn_8000D1A8_0000071C
lbl_fn_8000D1A8_00000718:
    fmr f7, f0
lbl_fn_8000D1A8_0000071C:
    lfs f8, 0x8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_8000D1A8_0000072C
    b lbl_fn_8000D1A8_00000744
lbl_fn_8000D1A8_0000072C:
    lfs f8, 0xc(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_8000D1A8_00000740
    b lbl_fn_8000D1A8_00000744
lbl_fn_8000D1A8_00000740:
    fmr f8, f0
lbl_fn_8000D1A8_00000744:
    stfs f8, 0x54(r31)
lbl_fn_8000D1A8_00000748:
    lwz r3, 0x48(r30)
    li r4, 0x1
    bl fn_80097E80
    li r0, 0x0
    stw r0, 0x38(r1)
    addi r4, r1, 0x38
    lwz r3, 0x48(r30)
    bl fn_8000D430
    addic. r3, r1, 0x38
    beq lbl_fn_8000D1A8_000007A4
    lwz r4, 0x38(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8000D1A8_000007A4
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8000D1A8_0000079C
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8000D1A8_0000079C:
    li r0, 0x0
    stw r0, 0x38(r1)
lbl_fn_8000D1A8_000007A4:
    li r0, 0x0
    stw r0, 0x54(r30)
lbl_fn_8000D1A8_000007AC:
    lwz r0, 0xb4(r1)
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    psq_l f30, 0x98(r1), 0, 0
    lfd f30, 0x90(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_8000D3A4(void)
{
    nofralloc
    b fn_805F9940
}

asm void fn_8000D3A8(void)
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
    beq lbl_fn_8000D3A8_00000844
    beq lbl_fn_8000D3A8_00000834
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8000D3A8_00000834
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8000D3A8_0000082C
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8000D3A8_0000082C:
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_8000D3A8_00000834:
    cmpwi r31, 0x0
    ble lbl_fn_8000D3A8_00000844
    mr r3, r30
    bl dtor_80084684
lbl_fn_8000D3A8_00000844:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8000D430(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r0, 0x8(r1)
    lwz r6, 0x0(r4)
    cmpwi r6, 0x0
    beq lbl_fn_8000D430_000008A4
    stw r6, 0x8(r1)
    addi r3, r4, 0x4
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8000D430_000008A4:
    lwz r4, 0x220(r31)
    mr r3, r31
    addi r5, r1, 0x8
    bl fn_800902C0
    addic. r3, r1, 0x8
    beq lbl_fn_8000D430_000008F0
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8000D430_000008F0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8000D430_000008E8
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8000D430_000008E8:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_8000D430_000008F0:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8000D4D4(void)
{
    nofralloc
    lwz r0, 0x4c(r3)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bnelr
    lwz r4, 0x50(r3)
    cmpwi r4, 0x0
    beqlr
    lwz r4, 0x194(r4)
    cmpwi r4, 0xa
    beq lbl_fn_8000D4D4_0000094C
    cmpwi r4, 0xb
    li r0, 0x0
    beq lbl_fn_8000D4D4_00000940
    cmpwi r4, 0xc
    bne lbl_fn_8000D4D4_00000944
lbl_fn_8000D4D4_00000940:
    li r0, 0x1
lbl_fn_8000D4D4_00000944:
    cmpwi r0, 0x0
    beqlr
lbl_fn_8000D4D4_0000094C:
    lwz r3, 0x48(r3)
    b fn_8008CD60
    blr
}

asm void fn_8000D528(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_80775A48@ha
    stw r0, 0x24(r1)
    li r0, 0x0
    addi r7, r7, lbl_80775A48@l
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r6
    stw r28, 0x10(r1)
    mr r28, r3
    stw r7, 0x0(r3)
    stw r4, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    mr r3, r31
    bl strlen
    mr r30, r3
    addi r3, r28, 0x8
    mr r4, r30
    bl fn_80013DC4
    lbz r0, 0x8(r1)
    mr r6, r31
    stb r0, 0xc(r1)
    addi r3, r28, 0x8
    add r7, r31, r30
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lfs f0, lbl_80880668
    lis r3, lbl_80775A20@ha
    li r30, 0x0
    li r31, -0x1
    addi r3, r3, lbl_80775A20@l
    stw r3, 0x0(r28)
    addi r3, r28, 0x18c
    li r4, 0x0
    stw r29, 0x14(r28)
    li r5, 0x34
    stw r30, 0x20(r28)
    stw r30, 0x24(r28)
    stw r30, 0x28(r28)
    stw r30, 0x2c(r28)
    stw r30, 0x4c(r28)
    stw r30, 0x50(r28)
    stw r30, 0x54(r28)
    stw r31, 0x58(r28)
    stw r30, 0x5c(r28)
    stfs f0, 0x60(r28)
    stw r30, 0x7c(r28)
    stw r30, 0x80(r28)
    stw r30, 0x84(r28)
    stw r30, 0x88(r28)
    stw r30, 0x8c(r28)
    stw r30, 0x90(r28)
    stw r30, 0x94(r28)
    stw r30, 0x98(r28)
    stw r30, 0x9c(r28)
    stw r30, 0xa0(r28)
    stw r30, 0xa4(r28)
    stw r30, 0xa8(r28)
    stw r30, 0xac(r28)
    stw r30, 0xb0(r28)
    stw r30, 0xb4(r28)
    stw r30, 0x118(r28)
    stw r30, 0x11c(r28)
    stw r30, 0x120(r28)
    stw r30, 0x124(r28)
    stw r30, 0x128(r28)
    stw r30, 0x12c(r28)
    stw r30, 0x148(r28)
    stw r30, 0x14c(r28)
    stw r30, 0x150(r28)
    stw r30, 0x158(r28)
    stw r30, 0x15c(r28)
    stw r30, 0x160(r28)
    stw r30, 0x164(r28)
    stw r30, 0x168(r28)
    stw r30, 0x16c(r28)
    stw r30, 0x170(r28)
    stw r30, 0x174(r28)
    stw r30, 0x178(r28)
    stw r30, 0x17c(r28)
    stw r30, 0x180(r28)
    stw r30, 0x184(r28)
    bl memset
    lis r4, lbl_807C7030@ha
    stw r30, 0x1c(r28)
    addi r4, r4, lbl_807C7030@l
    li r0, 0x1
    stw r30, 0x18(r28)
    mr r3, r28
    stw r30, 0xb8(r28)
    stw r30, 0xbc(r28)
    stw r30, 0xc0(r28)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0xcc(r28)
    psq_st f1, 0xc4(r28), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0xd8(r28)
    psq_st f1, 0xd0(r28), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0xe4(r28)
    psq_st f1, 0xdc(r28), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0xf0(r28)
    psq_st f1, 0xe8(r28), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0xfc(r28)
    psq_st f1, 0xf4(r28), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x108(r28)
    psq_st f1, 0x100(r28), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x114(r28)
    psq_st f1, 0x10c(r28), 0, 0
    stw r31, 0x130(r28)
    stw r31, 0x134(r28)
    stb r0, 0x144(r28)
    stb r0, 0x145(r28)
    stb r0, 0x146(r28)
    stb r0, 0x188(r28)
    stw r30, 0x154(r28)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8000D760(void)
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
    beq lbl_fn_8000D760_00000BF0
    beq lbl_fn_8000D760_00000BE0
    beq lbl_fn_8000D760_00000BE0
    beq lbl_fn_8000D760_00000BE0
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8000D760_00000BE0
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    mr r3, r4
    bl dtor_80084684
lbl_fn_8000D760_00000BE0:
    cmpwi r31, 0x0
    ble lbl_fn_8000D760_00000BF0
    mr r3, r30
    bl dtor_80084684
lbl_fn_8000D760_00000BF0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8000D7DC(void)
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
    beq lbl_fn_8000D7DC_00000C58
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8000D7DC_00000C48
    beq lbl_fn_8000D7DC_00000C48
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8000D7DC_00000C48:
    cmpwi r31, 0x0
    ble lbl_fn_8000D7DC_00000C58
    mr r3, r30
    bl dtor_80084684
lbl_fn_8000D7DC_00000C58:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8000D844(void)
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
    beq lbl_fn_8000D844_00000CD4
    beq lbl_fn_8000D844_00000CC4
    beq lbl_fn_8000D844_00000CC4
    beq lbl_fn_8000D844_00000CC4
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8000D844_00000CC4
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    mr r3, r4
    bl dtor_80084684
lbl_fn_8000D844_00000CC4:
    cmpwi r31, 0x0
    ble lbl_fn_8000D844_00000CD4
    mr r3, r30
    bl dtor_80084684
lbl_fn_8000D844_00000CD4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8000D8C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, lbl_8087F8A0
    cmpwi r5, 0x0
    beq lbl_fn_8000D8C0_00000D44
    lwz r5, 0x54(r5)
    cmpwi r5, 0x0
    beq lbl_fn_8000D8C0_00000D44
    lwz r0, 0x48(r5)
    cmpw r3, r0
    bne lbl_fn_8000D8C0_00000D44
    lwz r0, 0x50(r5)
    cmpw r4, r0
    bne lbl_fn_8000D8C0_00000D44
    mr r3, r5
    b lbl_fn_8000D8C0_00000E00
lbl_fn_8000D8C0_00000D44:
    lwz r5, lbl_8087F890
    cmpwi r5, 0x0
    beq lbl_fn_8000D8C0_00000D84
    lwz r5, 0x48(r5)
    b lbl_fn_8000D8C0_00000D7C
lbl_fn_8000D8C0_00000D58:
    lwz r0, 0x48(r5)
    cmpw r3, r0
    bne lbl_fn_8000D8C0_00000D78
    lwz r0, 0x50(r5)
    cmpw r4, r0
    bne lbl_fn_8000D8C0_00000D78
    mr r3, r5
    b lbl_fn_8000D8C0_00000E00
lbl_fn_8000D8C0_00000D78:
    lwz r5, 0x1424(r5)
lbl_fn_8000D8C0_00000D7C:
    cmpwi r5, 0x0
    bne lbl_fn_8000D8C0_00000D58
lbl_fn_8000D8C0_00000D84:
    lwz r3, lbl_8087F428
    cmpwi r3, 0x0
    beq lbl_fn_8000D8C0_00000DC0
    bl fn_8036554C
    b lbl_fn_8000D8C0_00000DB8
lbl_fn_8000D8C0_00000D98:
    lwz r0, 0x48(r3)
    cmpw r30, r0
    bne lbl_fn_8000D8C0_00000DB4
    lwz r0, 0x50(r3)
    cmpw r31, r0
    bne lbl_fn_8000D8C0_00000DB4
    b lbl_fn_8000D8C0_00000E00
lbl_fn_8000D8C0_00000DB4:
    lwz r3, 0x14ac(r3)
lbl_fn_8000D8C0_00000DB8:
    cmpwi r3, 0x0
    bne lbl_fn_8000D8C0_00000D98
lbl_fn_8000D8C0_00000DC0:
    lwz r3, lbl_8087F408
    cmpwi r3, 0x0
    beq lbl_fn_8000D8C0_00000DFC
    lwz r3, 0x48(r3)
    b lbl_fn_8000D8C0_00000DF4
lbl_fn_8000D8C0_00000DD4:
    lwz r0, 0x48(r3)
    cmpw r30, r0
    bne lbl_fn_8000D8C0_00000DF0
    lwz r0, 0x50(r3)
    cmpw r31, r0
    bne lbl_fn_8000D8C0_00000DF0
    b lbl_fn_8000D8C0_00000E00
lbl_fn_8000D8C0_00000DF0:
    lwz r3, 0x14ac(r3)
lbl_fn_8000D8C0_00000DF4:
    cmpwi r3, 0x0
    bne lbl_fn_8000D8C0_00000DD4
lbl_fn_8000D8C0_00000DFC:
    li r3, 0x0
lbl_fn_8000D8C0_00000E00:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8000D9E8(void)
{
    nofralloc
    lwz r3, lbl_8087F8A0
    blr
}

asm void fn_8000D9F0(void)
{
    nofralloc
    lwz r3, 0x54(r3)
    blr
}

asm void fn_8000D9F8(void)
{
    nofralloc
    lwz r3, 0x50(r3)
    blr
}

asm void fn_8000DA00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, lbl_8087F890
    cmpwi r5, 0x0
    beq lbl_fn_8000DA00_00000E8C
    lwz r5, 0x48(r5)
    b lbl_fn_8000DA00_00000E84
lbl_fn_8000DA00_00000E60:
    lwz r0, 0x48(r5)
    cmpw r3, r0
    bne lbl_fn_8000DA00_00000E80
    lwz r0, 0x58(r5)
    cmpw r4, r0
    bne lbl_fn_8000DA00_00000E80
    mr r3, r5
    b lbl_fn_8000DA00_00000F08
lbl_fn_8000DA00_00000E80:
    lwz r5, 0x1424(r5)
lbl_fn_8000DA00_00000E84:
    cmpwi r5, 0x0
    bne lbl_fn_8000DA00_00000E60
lbl_fn_8000DA00_00000E8C:
    lwz r3, lbl_8087F428
    cmpwi r3, 0x0
    beq lbl_fn_8000DA00_00000EC8
    bl fn_8036554C
    b lbl_fn_8000DA00_00000EC0
lbl_fn_8000DA00_00000EA0:
    lwz r0, 0x48(r3)
    cmpw r30, r0
    bne lbl_fn_8000DA00_00000EBC
    lwz r0, 0x58(r3)
    cmpw r31, r0
    bne lbl_fn_8000DA00_00000EBC
    b lbl_fn_8000DA00_00000F08
lbl_fn_8000DA00_00000EBC:
    lwz r3, 0x14ac(r3)
lbl_fn_8000DA00_00000EC0:
    cmpwi r3, 0x0
    bne lbl_fn_8000DA00_00000EA0
lbl_fn_8000DA00_00000EC8:
    lwz r3, lbl_8087F408
    cmpwi r3, 0x0
    beq lbl_fn_8000DA00_00000F04
    lwz r3, 0x48(r3)
    b lbl_fn_8000DA00_00000EFC
lbl_fn_8000DA00_00000EDC:
    lwz r0, 0x48(r3)
    cmpw r30, r0
    bne lbl_fn_8000DA00_00000EF8
    lwz r0, 0x58(r3)
    cmpw r31, r0
    bne lbl_fn_8000DA00_00000EF8
    b lbl_fn_8000DA00_00000F08
lbl_fn_8000DA00_00000EF8:
    lwz r3, 0x14ac(r3)
lbl_fn_8000DA00_00000EFC:
    cmpwi r3, 0x0
    bne lbl_fn_8000DA00_00000EDC
lbl_fn_8000DA00_00000F04:
    li r3, 0x0
lbl_fn_8000DA00_00000F08:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8000DAF0(void)
{
    nofralloc
    lwz r6, lbl_8087F430
    mr r0, r3
    mr r5, r4
    cmpwi r6, 0x0
    beq lbl_fn_8000DAF0_00000F3C
    lwz r3, 0x10d8(r6)
    b lbl_fn_8000DAF0_00000F44
lbl_fn_8000DAF0_00000F3C:
    lwz r3, lbl_8087F540
    lwz r3, 0x1a6c(r3)
lbl_fn_8000DAF0_00000F44:
    mr r4, r0
    b fn_803CC5E4
}

asm void fn_8000DB1C(void)
{
    nofralloc
    lwz r3, lbl_8087F540
    blr
}

asm void fn_8000DB24(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    mr r29, r5
    mr r28, r6
    mr r26, r3
    mr r27, r4
    mr r3, r29
    mr r4, r28
    bl fn_8000DAF0
    cmpwi r3, -0x1
    mr r31, r3
    bne lbl_fn_8000DB24_00000F9C
    li r0, 0x0
    stw r0, 0x20(r26)
    b lbl_fn_8000DB24_0000110C
lbl_fn_8000DB24_00000F9C:
    lwz r0, 0x18(r26)
    li r3, 0x1
    stw r3, 0x20(r26)
    mr r3, r29
    oris r0, r0, 0x200
    mr r4, r28
    stw r0, 0x18(r26)
    bl fn_8000DA00
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8000DB24_00001034
    bl fn_8000D9E8
    cmpwi r3, 0x0
    beq lbl_fn_8000DB24_00000FE4
    bl fn_8000D9E8
    bl fn_8000DCF4
    mr r30, r3
    b lbl_fn_8000DB24_00000FE8
lbl_fn_8000DB24_00000FE4:
    li r30, 0x0
lbl_fn_8000DB24_00000FE8:
    cmpwi r30, 0x0
    beq lbl_fn_8000DB24_00001004
    mr r3, r30
    bl fn_8000D9F8
    cmpw r31, r3
    bne lbl_fn_8000DB24_00001004
    b lbl_fn_8000DB24_00001034
lbl_fn_8000DB24_00001004:
    bl fn_8000DB1C
    lis r6, lbl_807C7030@ha
    lfs f1, lbl_80880668
    mr r4, r29
    mr r5, r31
    addi r6, r6, lbl_807C7030@l
    bl fn_8047FF70
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8000DB24_00001034
    mr r4, r28
    bl fn_8000DCFC
lbl_fn_8000DB24_00001034:
    cmpwi r30, 0x0
    bne lbl_fn_8000DB24_00001048
    li r0, 0x0
    stw r0, 0x20(r26)
    b lbl_fn_8000DB24_0000110C
lbl_fn_8000DB24_00001048:
    mr r3, r27
    mr r4, r30
    bl fn_8000DDA0
    stw r3, 0x1c(r26)
    bl fn_8000DE3C
    bl fn_8000DD0C
    bl fn_8000DD04
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8000DB24_0000110C
    mr r31, r30
    li r29, 0x0
    b lbl_fn_8000DB24_00001100
lbl_fn_8000DB24_0000107C:
    lwz r3, 0x50(r31)
    bl fn_800DC6B4
    mr r28, r3
    lwz r3, 0x1c(r26)
    bl fn_8000DE3C
    bl fn_8000DD0C
    mr r4, r28
    bl fn_800929C0
    bl fn_8000DD98
    stw r3, 0x8(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x8
    bl fn_8000DD14
    addi r3, r26, 0x158
    addi r4, r1, 0x10
    bl fn_8000DE44
    addi r3, r26, 0x170
    addi r4, r1, 0x10
    bl fn_8000DE44
    lwz r3, 0x1c(r26)
    bl fn_8000DE3C
    bl fn_8000DD0C
    mr r4, r28
    bl fn_80093E90
    stw r3, 0xc(r1)
    addi r3, r26, 0x164
    addi r4, r1, 0xc
    bl fn_8000E18C
    addi r3, r26, 0x17c
    addi r4, r1, 0xc
    bl fn_8000E18C
    addi r31, r31, 0x4
    addi r29, r29, 0x1
lbl_fn_8000DB24_00001100:
    lwz r0, 0x30(r30)
    cmpw r29, r0
    blt lbl_fn_8000DB24_0000107C
lbl_fn_8000DB24_0000110C:
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8000DCF4(void)
{
    nofralloc
    lwz r3, 0x48(r3)
    blr
}

asm void fn_8000DCFC(void)
{
    nofralloc
    stw r4, 0x58(r3)
    blr
}

asm void fn_8000DD04(void)
{
    nofralloc
    lwz r3, 0x16c(r3)
    blr
}

asm void fn_8000DD0C(void)
{
    nofralloc
    addi r3, r3, 0xb0
    blr
}

asm void fn_8000DD14(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lis r8, 0x4330
    lbz r0, 0x0(r4)
    lis r7, lbl_8072F890@ha
    stw r0, 0xc(r1)
    lbz r6, 0x1(r4)
    stw r8, 0x8(r1)
    lbz r5, 0x2(r4)
    lfd f0, 0x8(r1)
    lfd f5, lbl_8072F890@l(r7)
    stw r5, 0xc(r1)
    fsubs f2, f0, f5
    lfs f4, lbl_80880670
    lfd f0, 0x8(r1)
    stw r8, 0x10(r1)
    fsubs f1, f0, f5
    lbz r0, 0x3(r4)
    fdivs f3, f2, f4
    stw r6, 0x14(r1)
    lfd f2, 0x10(r1)
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    stfs f3, 0x0(r3)
    fdivs f1, f1, f4
    stfs f1, 0x8(r3)
    fsubs f2, f2, f5
    fsubs f0, f0, f5
    fdivs f1, f2, f4
    stfs f1, 0x4(r3)
    fdivs f0, f0, f4
    stfs f0, 0xc(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_8000DD98(void)
{
    nofralloc
    lwz r3, 0x18(r3)
    blr
}

asm void fn_8000DDA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    la r5, lbl_8087D6D8
    la r6, lbl_8087D6D4
    stw r0, 0x24(r1)
    li r7, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0x4
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0xc0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8000DDA0_0000124C
    mr r4, r29
    bl fn_800D1D3C
    lis r3, lbl_807759E8@ha
    li r0, 0x0
    addi r3, r3, lbl_807759E8@l
    stw r3, 0x0(r31)
    stw r30, 0x48(r31)
    stw r29, 0x50(r31)
    stw r0, 0x54(r31)
    stb r0, 0xb8(r31)
    stb r0, 0xb9(r31)
    lwz r0, 0x4c(r31)
    oris r0, r0, 0x8000
    stw r0, 0x4c(r31)
lbl_fn_8000DDA0_0000124C:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8000DE3C(void)
{
    nofralloc
    lwz r3, 0x48(r3)
    blr
}

asm void fn_8000DE44(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    stw r28, 0x30(r1)
    lwz r0, 0x4(r3)
    lwz r5, 0x8(r3)
    cmplw r0, r5
    bge lbl_fn_8000DE44_000012E8
    lwz r5, 0x0(r3)
    slwi r0, r0, 4
    add. r5, r5, r0
    beq lbl_fn_8000DE44_000012D8
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r5)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r5)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r5)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r5)
lbl_fn_8000DE44_000012D8:
    lwz r4, 0x4(r3)
    addi r0, r4, 0x1
    stw r0, 0x4(r3)
    b lbl_fn_8000DE44_0000159C
lbl_fn_8000DE44_000012E8:
    lis r3, 0x1000
    subi r0, r3, 0x1
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_8000DE44_0000131C
    lis r3, __files@ha
    lis r4, lbl_8072F924@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8072F924@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8000DE44_0000131C:
    li r5, 0x0
    addi r4, r29, 0x8
    lis r3, 0x1000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_8000DE44_00001380
    lis r3, __files@ha
    lis r4, lbl_8072F924@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8072F924@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8000DE44_00001380:
    lis r3, 0x555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_8000DE44_000013D0
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
    bge lbl_fn_8000DE44_000013C4
    addi r3, r1, 0x8
lbl_fn_8000DE44_000013C4:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_8000DE44_00001414
lbl_fn_8000DE44_000013D0:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_8000DE44_0000140C
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_8000DE44_00001400
    addi r3, r1, 0x8
lbl_fn_8000DE44_00001400:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_8000DE44_00001414
lbl_fn_8000DE44_0000140C:
    lis r3, 0x1000
    subi r28, r3, 0x1
lbl_fn_8000DE44_00001414:
    lis r3, 0x1000
    subi r0, r3, 0x1
    cmplw r28, r0
    ble lbl_fn_8000DE44_00001444
    lis r3, __files@ha
    lis r4, lbl_8072F924@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8072F924@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8000DE44_00001444:
    slwi r3, r28, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8000DE44_00001478
    lis r3, __files@ha
    lis r4, lbl_80775AA4@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775AA4@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8000DE44_00001478:
    lwz r0, 0x18(r1)
    stw r31, 0x14(r1)
    slwi r3, r0, 4
    stw r28, 0x1c(r1)
    lwz r0, 0x4(r29)
    stw r0, 0x24(r1)
    slwi r0, r0, 4
    add r0, r31, r0
    add. r3, r3, r0
    beq lbl_fn_8000DE44_000014C0
    lfs f0, 0x0(r30)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r30)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r30)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r30)
    stfs f0, 0xc(r3)
lbl_fn_8000DE44_000014C0:
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    slwi r0, r0, 4
    lwz r4, 0x4(r29)
    lwz r7, 0x0(r29)
    add r6, r3, r0
    slwi r0, r4, 4
    add r5, r7, r0
    addi r0, r5, 0xf
    subf r0, r7, r0
    srwi r0, r0, 4
    mtctr r0
    cmplw r5, r7
    ble lbl_fn_8000DE44_0000154C
lbl_fn_8000DE44_00001504:
    subic. r6, r6, 0x10
    subi r5, r5, 0x10
    beq lbl_fn_8000DE44_00001530
    lfs f0, 0x0(r5)
    stfs f0, 0x0(r6)
    lfs f0, 0x4(r5)
    stfs f0, 0x4(r6)
    lfs f0, 0x8(r5)
    stfs f0, 0x8(r6)
    lfs f0, 0xc(r5)
    stfs f0, 0xc(r6)
lbl_fn_8000DE44_00001530:
    lwz r4, 0x24(r1)
    lwz r3, 0x18(r1)
    subi r0, r4, 0x1
    stw r0, 0x24(r1)
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
    bdnz lbl_fn_8000DE44_00001504
lbl_fn_8000DE44_0000154C:
    li r4, 0x0
    stw r4, 0x4(r29)
    addic. r0, r1, 0x14
    lwz r3, 0x8(r29)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r29)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r29)
    stw r4, 0x18(r1)
    beq lbl_fn_8000DE44_0000159C
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8000DE44_0000159C
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_8000DE44_0000159C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
