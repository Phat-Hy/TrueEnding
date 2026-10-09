#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8004B338(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AA20(void);
extern void fn_8006AC08(void);
extern void fn_8006B46C(void);
extern void fn_8006EF48(void);
extern void fn_8007708C(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_80116FC0(void);
extern void fn_801231D0(void);
extern void fn_801F3FF8(void);
extern void fn_801F4C14(void);
extern void fn_801FED24(void);
extern void fn_8021A4CC(void);
extern void fn_8021F09C(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_805B9ECC(void);
extern void fn_805BE380(void);
extern void fn_805BEA38(void);
extern void fn_805BEAD0(void);
extern void fn_805BEB18(void);
extern void fn_805BEC6C(void);
extern void fn_805BEC74(void);
extern void fn_805BECA4(void);
extern void fn_805BED54(void);
extern void fn_805BEE08(void);
extern void fn_805BEEC8(void);
extern void fn_805BF168(void);
extern void fn_805BF664(void);
extern void fn_8067E23C(void);
extern void fn_80680770(void);
extern void fn_80684600(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern void fn_806959D8(void);
extern void fn_80695A50(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 dtor_80013D60[];
extern u8 lbl_80763F38[];
extern u8 lbl_80764040[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_80797974[];
extern u8 lbl_807979E8[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EEF0;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F9C0;
extern u32 lbl_80888454;
extern u32 lbl_80888458;
extern u32 lbl_8088846C;
extern u32 lbl_8088847C;
extern u32 lbl_808884A4;
extern u32 lbl_808884A8;
extern u32 lbl_808884AC;
extern u32 lbl_808884B0;

/* Function declarations */
void fn_805BC6CC(void);
void fn_805BC740(void);
void fn_805BC9F4(void);
void fn_805BCD00(void);
void fn_805BCF08(void);
void fn_805BD29C(void);
void fn_805BD3B0(void);
void fn_805BD450(void);
void fn_805BD4BC(void);
void fn_805BDCC0(void);
void fn_805BDD20(void);
void fn_805BDD78(void);
void fn_805BDE4C(void);

asm void fn_805BC6CC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_80763F38@ha
    li r7, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    addi r5, r6, lbl_80763F38@l
    stw r30, 0x18(r1)
    mr r30, r4
    mr r6, r5
    li r4, 0x4
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0xb8
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805BC6CC_00000058
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_805BC740
lbl_fn_805BC6CC_00000058:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805BC740(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r11, r1, 0x150
    bl _savegpr_27
    mr r30, r3
    mr r31, r5
    mr r27, r6
    bl fn_800D1D3C
    lis r4, lbl_80797974@ha
    stw r31, 0x48(r30)
    addi r4, r4, lbl_80797974@l
    mr r3, r31
    stw r4, 0x0(r30)
    bl fn_8021F09C
    lfs f0, lbl_80888454
    li r29, 0x0
    stw r3, 0x4c(r30)
    addi r28, r30, 0x5c
    mr r3, r28
    stw r27, 0x50(r30)
    stfs f0, 0x54(r30)
    stw r29, 0x58(r30)
    bl fn_80473E74
    addi r4, r30, 0x78
    addi r5, r30, 0xa8
    lis r3, lbl_8078FBB0@ha
    li r0, 0x1
    addi r3, r3, lbl_8078FBB0@l
    cmplw r4, r5
    stw r3, 0x0(r28)
    stw r0, 0x64(r30)
    stw r29, 0x68(r30)
    bge lbl_fn_805BC740_0000011C
    addi r0, r5, 0xf
    subf r0, r4, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_805BC740_0000011C
lbl_fn_805BC740_00000110:
    stw r29, 0x0(r4)
    addi r4, r4, 0x10
    bdnz lbl_fn_805BC740_00000110
lbl_fn_805BC740_0000011C:
    lfs f0, lbl_808884A4
    li r0, 0x0
    lwz r3, 0x4c(r30)
    addi r29, r1, 0x2c
    stfs f0, 0xac(r30)
    addi r28, r3, 0x8
    stw r0, 0xa8(r30)
    mr r3, r28
    stw r0, 0xb0(r30)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    bl strlen
    mr r27, r3
    mr r3, r29
    mr r4, r27
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r29
    stb r0, 0x8(r1)
    mr r6, r28
    add r7, r28, r27
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r29
    addi r3, r1, 0x20
    bl fn_8006AC08
    lis r3, lbl_80763F38@ha
    addi r3, r3, lbl_80763F38@l
    addi r28, r3, 0x58
    mr r3, r28
    bl strlen
    lwz r0, 0x20(r1)
    mr r29, r3
    stw r3, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_805BC740_000001C4
    lbz r0, 0x20(r1)
    clrlwi r4, r0, 25
    b lbl_fn_805BC740_000001C8
lbl_fn_805BC740_000001C4:
    lwz r4, 0x24(r1)
lbl_fn_805BC740_000001C8:
    lwz r0, 0x20(r1)
    stw r4, 0x1c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_805BC740_000001E8
    lbz r0, 0x20(r1)
    addi r3, r1, 0x21
    clrlwi r0, r0, 25
    b lbl_fn_805BC740_000001F0
lbl_fn_805BC740_000001E8:
    lwz r3, 0x28(r1)
    lwz r0, 0x24(r1)
lbl_fn_805BC740_000001F0:
    cmplw r4, r0
    stw r0, 0x14(r1)
    addi r4, r1, 0x14
    bge lbl_fn_805BC740_00000204
    addi r4, r1, 0x1c
lbl_fn_805BC740_00000204:
    lwz r0, 0x0(r4)
    mr r4, r28
    stw r0, 0x10(r1)
    addi r5, r1, 0x10
    cmplw r29, r0
    bge lbl_fn_805BC740_00000220
    addi r5, r1, 0x18
lbl_fn_805BC740_00000220:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_805BC740_00000254
    lwz r0, 0x10(r1)
    cmplw r0, r29
    bge lbl_fn_805BC740_00000244
    li r3, -0x1
    b lbl_fn_805BC740_00000254
lbl_fn_805BC740_00000244:
    bne lbl_fn_805BC740_00000250
    li r3, 0x0
    b lbl_fn_805BC740_00000254
lbl_fn_805BC740_00000250:
    li r3, 0x1
lbl_fn_805BC740_00000254:
    lwz r0, 0x20(r1)
    cntlzw r3, r3
    srwi r28, r3, 5
    srwi. r0, r0, 31
    beq lbl_fn_805BC740_00000270
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_805BC740_00000270:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_805BC740_00000284
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_805BC740_00000284:
    cmpwi r28, 0x0
    beq lbl_fn_805BC740_000002A8
    lis r4, lbl_80763F38@ha
    addi r3, r1, 0x38
    addi r4, r4, lbl_80763F38@l
    addi r4, r4, 0x60
    crclr 6
    bl sprintf
    b lbl_fn_805BC740_000002C8
lbl_fn_805BC740_000002A8:
    lwz r5, 0x4c(r30)
    lis r4, lbl_80763F38@ha
    addi r4, r4, lbl_80763F38@l
    addi r3, r1, 0x38
    addi r4, r4, 0x1
    addi r5, r5, 0x8
    crclr 6
    bl sprintf
lbl_fn_805BC740_000002C8:
    lwz r12, 0x5c(r30)
    addi r3, r30, 0x5c
    addi r4, r1, 0x38
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r31, 0x8e
    beq lbl_fn_805BC740_0000030C
    lis r4, lbl_80763F38@ha
    mr r3, r30
    addi r4, r4, lbl_80763F38@l
    li r5, 0x0
    addi r4, r4, 0x8a
    bl fn_801F3FF8
    stw r3, 0xb0(r30)
    li r4, 0x1
    bl fn_800D246C
lbl_fn_805BC740_0000030C:
    addi r11, r1, 0x150
    mr r3, r30
    bl _restgpr_27
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_805BC9F4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x20
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x64(r3)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_805BC9F4_00000380
    addi r3, r3, 0x5c
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_805BC9F4_00000610
    li r0, 0x0
    stw r0, 0x64(r31)
    mr r3, r31
    bl fn_805BCF08
    addi r3, r31, 0x5c
    bl fn_80473F88
    b lbl_fn_805BC9F4_00000610
lbl_fn_805BC9F4_00000380:
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_805BC9F4_00000610
    lwz r3, lbl_8087F0A8
    lfs f31, lbl_808884A8
    cmpwi r3, 0x0
    beq lbl_fn_805BC9F4_000003A0
    lfs f31, 0x484(r3)
lbl_fn_805BC9F4_000003A0:
    lwz r0, 0x48(r31)
    cmpwi r0, 0xc6
    bne lbl_fn_805BC9F4_000003B0
    lfs f31, lbl_80888454
lbl_fn_805BC9F4_000003B0:
    lis r30, lbl_80763F38@ha
    addi r28, r31, 0x68
    addi r30, r30, lbl_80763F38@l
    li r27, 0x0
lbl_fn_805BC9F4_000003C0:
    lwz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805BC9F4_00000420
    lwz r3, 0x4(r28)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x4(r28)
    bl fn_800D246C
    lwz r5, 0x4c(r31)
    addi r4, r30, 0x16
    lwz r3, 0x4(r28)
    addi r5, r5, 0xac
    bl fn_801F4C14
    lwz r4, 0x4(r28)
    addi r3, r30, 0x43
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x1
    bl fn_801FED24
lbl_fn_805BC9F4_00000420:
    addi r27, r27, 0x1
    addi r28, r28, 0x10
    cmplwi r27, 0x4
    blt lbl_fn_805BC9F4_000003C0
    lwz r3, 0xb0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_805BC9F4_00000518
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xb0(r31)
    lis r30, lbl_80763F38@ha
    lfs f0, lbl_80888454
    addi r30, r30, lbl_80763F38@l
    stfs f0, 0x104(r3)
    addi r3, r30, 0x43
    lwz r4, 0xb0(r31)
    lwz r0, 0xfc(r4)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r4)
    lwz r4, 0xb0(r31)
    stfs f0, 0x100(r4)
    lwz r4, 0xb0(r31)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x1
    bl fn_801FED24
    lis r3, 0x89
    lwz r29, lbl_8087EEC8
    addi r4, r3, 0x5472
    li r3, 0x0
    bl fn_80116FC0
    lfs f1, lbl_8088846C
    mr r4, r3
    lfs f2, lbl_80888454
    mr r3, r29
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r4, 0xb0(r31)
    fmr f31, f1
    addi r3, r30, 0x97
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f0, lbl_808884AC
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    fsubs f1, f0, f31
    bl fn_801FED24
    lwz r4, 0xb0(r31)
    addi r3, r30, 0xa2
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f0, lbl_808884B0
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    fsubs f1, f0, f31
    bl fn_801FED24
lbl_fn_805BC9F4_00000518:
    lwz r0, 0x68(r31)
    lfs f0, lbl_80888454
    cmpwi r0, 0x0
    beq lbl_fn_805BC9F4_00000540
    lwz r3, 0x6c(r31)
    stfs f0, 0x100(r3)
    lwz r3, 0x6c(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_805BC9F4_00000540:
    lwz r0, 0x78(r31)
    addi r4, r31, 0x78
    cmpwi r0, 0x0
    beq lbl_fn_805BC9F4_00000568
    lwz r3, 0x4(r4)
    stfs f0, 0x100(r3)
    lwz r3, 0x4(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_805BC9F4_00000568:
    lwz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805BC9F4_0000058C
    lwz r3, 0x14(r4)
    stfs f0, 0x100(r3)
    lwz r3, 0x14(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_805BC9F4_0000058C:
    lwz r0, 0x20(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805BC9F4_000005B0
    lwz r3, 0x24(r4)
    stfs f0, 0x100(r3)
    lwz r3, 0x24(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_805BC9F4_000005B0:
    li r0, 0x0
    stw r0, 0xa8(r31)
    lwz r0, 0x74(r31)
    cmpwi r0, 0x2
    bne lbl_fn_805BC9F4_000005DC
    lwz r3, lbl_8087F9C0
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805BC9F4_000005DC
    li r0, 0x1
    stw r0, 0xa8(r31)
lbl_fn_805BC9F4_000005DC:
    lwz r4, 0xa8(r31)
    li r0, 0x1
    lfs f0, lbl_80888454
    li r3, 0x1
    slwi r4, r4, 4
    add r4, r31, r4
    lwz r5, 0x6c(r4)
    lwz r4, 0x38(r5)
    rlwinm r4, r4, 0, 30, 28
    stw r4, 0x38(r5)
    stfs f0, 0x54(r31)
    stw r0, 0x58(r31)
    b lbl_fn_805BC9F4_00000614
lbl_fn_805BC9F4_00000610:
    li r3, 0x0
lbl_fn_805BC9F4_00000614:
    addi r11, r1, 0x20
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805BCD00(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    lwz r4, 0x58(r3)
    cmpwi r4, 0x4
    beq lbl_fn_805BCD00_00000820
    lwz r0, 0xa8(r3)
    cmpwi r4, 0x1
    slwi r0, r0, 4
    add r31, r3, r0
    beq lbl_fn_805BCD00_00000684
    cmpwi r4, 0x2
    beq lbl_fn_805BCD00_000006B8
    cmpwi r4, 0x3
    beq lbl_fn_805BCD00_000007EC
    b lbl_fn_805BCD00_00000808
lbl_fn_805BCD00_00000684:
    lwz r4, 0x6c(r31)
    lfs f1, 0xa0(r4)
    lfs f0, 0x100(r4)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_805BCD00_00000808
    lfs f0, lbl_80888454
    li r0, 0x2
    stfs f0, 0x54(r3)
    stw r0, 0x58(r3)
    b lbl_fn_805BCD00_00000808
lbl_fn_805BCD00_000006B8:
    lfs f1, 0x54(r3)
    lfs f0, 0xac(r3)
    fadds f0, f1, f0
    stfs f0, 0x54(r3)
    lwz r3, lbl_8087EEF0
    cmpwi r3, 0x0
    beq lbl_fn_805BCD00_00000714
    lwz r0, 0xd90(r3)
    li r29, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_805BCD00_00000704
    lis r4, 0x1
    subi r0, r4, 0xe4f
    addi r4, r3, 0x34
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_805BCD00_00000704
    li r29, 0x1
lbl_fn_805BCD00_00000704:
    cmpwi r29, 0x0
    beq lbl_fn_805BCD00_00000714
    lfs f0, 0x70(r31)
    stfs f0, 0x54(r30)
lbl_fn_805BCD00_00000714:
    lwz r0, lbl_8087EF70
    cmpwi r0, 0x0
    beq lbl_fn_805BCD00_00000740
    lwz r3, lbl_8087F0A8
    li r4, 0x2b
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_805BCD00_00000740
    lfs f0, 0x70(r31)
    stfs f0, 0x54(r30)
lbl_fn_805BCD00_00000740:
    lfs f1, 0x54(r30)
    lfs f0, 0x70(r31)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    beq lbl_fn_805BCD00_000007D4
    lwz r0, 0xa8(r30)
    slwi r0, r0, 4
    add r3, r30, r0
    lwz r0, 0x74(r3)
    cmpwi r0, 0x1
    bne lbl_fn_805BCD00_000007C8
    lwz r5, 0x50(r30)
    li r4, 0x1
    li r3, 0x1
    cmpwi r5, 0x0
    beq lbl_fn_805BCD00_00000790
    lwz r0, 0x12a4(r5)
    extrwi. r0, r0, 1, 25
    bne lbl_fn_805BCD00_00000790
    li r3, 0x0
lbl_fn_805BCD00_00000790:
    cmpwi r3, 0x0
    bne lbl_fn_805BCD00_000007CC
    lwz r0, 0x12a4(r5)
    li r3, 0x0
    srwi. r0, r0, 31
    beq lbl_fn_805BCD00_000007B8
    lwz r0, 0xc48(r5)
    cmpwi r0, 0x0
    beq lbl_fn_805BCD00_000007B8
    li r3, 0x1
lbl_fn_805BCD00_000007B8:
    cmpwi r3, 0x0
    bne lbl_fn_805BCD00_000007CC
    li r4, 0x0
    b lbl_fn_805BCD00_000007CC
lbl_fn_805BCD00_000007C8:
    li r4, 0x0
lbl_fn_805BCD00_000007CC:
    cmpwi r4, 0x0
    beq lbl_fn_805BCD00_00000808
lbl_fn_805BCD00_000007D4:
    li r0, 0x3
    stw r0, 0x58(r30)
    lfs f0, lbl_8088847C
    lwz r3, 0x6c(r31)
    stfs f0, 0x104(r3)
    b lbl_fn_805BCD00_00000808
lbl_fn_805BCD00_000007EC:
    lwz r4, 0x6c(r31)
    lfs f0, lbl_80888458
    lfs f1, 0x100(r4)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_805BCD00_00000808
    bl fn_805BD29C
lbl_fn_805BCD00_00000808:
    lwz r4, 0xb0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_805BCD00_00000820
    lwz r3, 0x6c(r31)
    lfs f0, 0x100(r3)
    stfs f0, 0x100(r4)
lbl_fn_805BCD00_00000820:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805BCF08(void)
{
    nofralloc
    stwu r1, -0x6c0(r1)
    mflr r0
    stw r0, 0x6c4(r1)
    stmw r21, 0x694(r1)
    mr r21, r3
    addi r3, r3, 0x5c
    bl fn_8047059C
    mr r23, r3
    addi r3, r21, 0x5c
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r27, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x58(r1)
    mr r22, r3
    addi r3, r1, 0x68
    stw r27, 0x5c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r27, 0x60(r1)
    stw r27, 0x64(r1)
    stw r27, 0x688(r1)
    bl memset
    addi r3, r1, 0x668
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x58(r1)
    mr r4, r22
    mr r5, r23
    addi r3, r1, 0x58
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x58
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x58(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r30, lbl_80763F38@ha
    addi r23, r1, 0x29
    addi r22, r1, 0x4d
    addi r25, r1, 0x40
    addi r24, r1, 0x34
    addi r30, r30, lbl_80763F38@l
    li r29, 0x1
    b lbl_fn_805BCF08_00000BAC
lbl_fn_805BCF08_000008FC:
    addi r3, r1, 0x58
    bl fn_8005B3CC
    bl fn_80684600
    subi r0, r3, 0x1
    cmplwi r0, 0x3
    bgt lbl_fn_805BCF08_00000BAC
    slwi r0, r0, 4
    add r28, r21, r0
    stw r29, 0x68(r28)
    lwz r3, 0x4c(r21)
    addi r26, r3, 0x8
    stw r27, 0x40(r1)
    mr r3, r26
    stw r27, 0x44(r1)
    stw r27, 0x48(r1)
    bl strlen
    mr r31, r3
    mr r3, r25
    mr r4, r31
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r25
    stb r0, 0x10(r1)
    mr r6, r26
    add r7, r26, r31
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r25
    addi r3, r1, 0x4c
    bl fn_8006B46C
    lwz r0, 0x40(r1)
    srwi. r0, r0, 31
    beq lbl_fn_805BCF08_00000990
    lwz r3, 0x48(r1)
    bl dtor_80084684
lbl_fn_805BCF08_00000990:
    lwz r3, 0x4c(r21)
    addi r26, r3, 0x8
    stw r27, 0x34(r1)
    mr r3, r26
    stw r27, 0x38(r1)
    stw r27, 0x3c(r1)
    bl strlen
    mr r31, r3
    mr r3, r24
    mr r4, r31
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r24
    stb r0, 0x8(r1)
    mr r6, r26
    add r7, r26, r31
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r24
    addi r3, r1, 0x28
    bl fn_8006AC08
    addi r26, r30, 0x58
    mr r3, r26
    bl strlen
    lwz r0, 0x28(r1)
    mr r31, r3
    stw r3, 0x20(r1)
    srwi. r0, r0, 31
    bne lbl_fn_805BCF08_00000A18
    lbz r0, 0x28(r1)
    clrlwi r4, r0, 25
    b lbl_fn_805BCF08_00000A1C
lbl_fn_805BCF08_00000A18:
    lwz r4, 0x2c(r1)
lbl_fn_805BCF08_00000A1C:
    lwz r0, 0x28(r1)
    stw r4, 0x24(r1)
    srwi. r0, r0, 31
    bne lbl_fn_805BCF08_00000A3C
    lbz r0, 0x28(r1)
    mr r3, r23
    clrlwi r0, r0, 25
    b lbl_fn_805BCF08_00000A44
lbl_fn_805BCF08_00000A3C:
    lwz r3, 0x30(r1)
    lwz r0, 0x2c(r1)
lbl_fn_805BCF08_00000A44:
    cmplw r4, r0
    stw r0, 0x1c(r1)
    addi r4, r1, 0x1c
    bge lbl_fn_805BCF08_00000A58
    addi r4, r1, 0x24
lbl_fn_805BCF08_00000A58:
    lwz r0, 0x0(r4)
    mr r4, r26
    stw r0, 0x18(r1)
    addi r5, r1, 0x18
    cmplw r31, r0
    bge lbl_fn_805BCF08_00000A74
    addi r5, r1, 0x20
lbl_fn_805BCF08_00000A74:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_805BCF08_00000AA8
    lwz r0, 0x18(r1)
    cmplw r0, r31
    bge lbl_fn_805BCF08_00000A98
    li r3, -0x1
    b lbl_fn_805BCF08_00000AA8
lbl_fn_805BCF08_00000A98:
    bne lbl_fn_805BCF08_00000AA4
    li r3, 0x0
    b lbl_fn_805BCF08_00000AA8
lbl_fn_805BCF08_00000AA4:
    li r3, 0x1
lbl_fn_805BCF08_00000AA8:
    cmpwi r3, 0x0
    li r26, 0x0
    bne lbl_fn_805BCF08_00000ADC
    lwz r0, 0x4c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_805BCF08_00000AC8
    mr r3, r22
    b lbl_fn_805BCF08_00000ACC
lbl_fn_805BCF08_00000AC8:
    lwz r3, 0x54(r1)
lbl_fn_805BCF08_00000ACC:
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_805BCF08_00000ADC
    li r26, 0x1
lbl_fn_805BCF08_00000ADC:
    lwz r0, 0x28(r1)
    srwi. r0, r0, 31
    beq lbl_fn_805BCF08_00000AF0
    lwz r3, 0x30(r1)
    bl dtor_80084684
lbl_fn_805BCF08_00000AF0:
    lwz r0, 0x34(r1)
    srwi. r0, r0, 31
    beq lbl_fn_805BCF08_00000B04
    lwz r3, 0x3c(r1)
    bl dtor_80084684
lbl_fn_805BCF08_00000B04:
    cmpwi r26, 0x0
    beq lbl_fn_805BCF08_00000B40
    addi r3, r1, 0x58
    bl fn_8005B3CC
    lwz r0, 0x4c(r1)
    mr r3, r21
    srwi. r0, r0, 31
    bne lbl_fn_805BCF08_00000B2C
    mr r4, r22
    b lbl_fn_805BCF08_00000B30
lbl_fn_805BCF08_00000B2C:
    lwz r4, 0x54(r1)
lbl_fn_805BCF08_00000B30:
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x6c(r28)
    b lbl_fn_805BCF08_00000B5C
lbl_fn_805BCF08_00000B40:
    addi r3, r1, 0x58
    bl fn_8005B3CC
    mr r4, r3
    mr r3, r21
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x6c(r28)
lbl_fn_805BCF08_00000B5C:
    lwz r3, 0x6c(r28)
    li r4, 0x1
    bl fn_800D246C
    lwz r4, 0x6c(r28)
    addi r3, r1, 0x58
    lwz r0, 0xfc(r4)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r4)
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x70(r28)
    addi r3, r1, 0x58
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x74(r28)
    lwz r0, 0x4c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_805BCF08_00000BAC
    lwz r3, 0x54(r1)
    bl dtor_80084684
lbl_fn_805BCF08_00000BAC:
    addi r3, r1, 0x58
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_805BCF08_000008FC
    lmw r21, 0x694(r1)
    lwz r0, 0x6c4(r1)
    mtlr r0
    addi r1, r1, 0x6c0
    blr
}

asm void fn_805BD29C(void)
{
    nofralloc
    lwz r0, 0xa8(r3)
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r4, 0x6c(r4)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xa8(r3)
    addi r0, r4, 0x1
    stw r0, 0xa8(r3)
    b lbl_fn_805BD29C_00000C1C
lbl_fn_805BD29C_00000BFC:
    slwi r0, r5, 4
    add r4, r3, r0
    lwz r0, 0x68(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805BD29C_00000C28
    lwz r4, 0xa8(r3)
    addi r0, r4, 0x1
    stw r0, 0xa8(r3)
lbl_fn_805BD29C_00000C1C:
    lwz r5, 0xa8(r3)
    cmplwi r5, 0x4
    blt lbl_fn_805BD29C_00000BFC
lbl_fn_805BD29C_00000C28:
    cmplwi r5, 0x4
    bge lbl_fn_805BD29C_00000C68
    slwi r0, r5, 4
    add r4, r3, r0
    lwz r0, 0x74(r4)
    cmpwi r0, 0x2
    beq lbl_fn_805BD29C_00000C68
    lwz r5, 0x6c(r4)
    li r0, 0x1
    lfs f0, lbl_80888454
    lwz r4, 0x38(r5)
    rlwinm r4, r4, 0, 30, 28
    stw r4, 0x38(r5)
    stfs f0, 0x54(r3)
    stw r0, 0x58(r3)
    blr
lbl_fn_805BD29C_00000C68:
    li r0, 0x4
    stw r0, 0x58(r3)
    lwz r0, 0x68(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805BD29C_00000C8C
    lwz r4, 0x6c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_805BD29C_00000C8C:
    lwzu r0, 0x78(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805BD29C_00000CA8
    lwz r4, 0x4(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_805BD29C_00000CA8:
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805BD29C_00000CC4
    lwz r4, 0x14(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_805BD29C_00000CC4:
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beqlr
    lwz r4, 0x24(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    blr
}

asm void fn_805BD3B0(void)
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
    beq lbl_fn_805BD3B0_00000D68
    addic. r3, r3, 0x5a4
    beq lbl_fn_805BD3B0_00000D18
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_805BD3B0_00000D18:
    addic. r3, r30, 0x474
    beq lbl_fn_805BD3B0_00000D34
    lis r4, fn_805B9ECC@ha
    li r5, 0x4c
    addi r4, r4, fn_805B9ECC@l
    li r6, 0x4
    bl fn_806959D8
lbl_fn_805BD3B0_00000D34:
    addi r3, r30, 0x280
    li r4, -0x1
    bl fn_8004B338
    addi r3, r30, 0x8c
    li r4, -0x1
    bl fn_8004B338
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_805BD3B0_00000D68
    mr r3, r30
    bl dtor_80084684
lbl_fn_805BD3B0_00000D68:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805BD450(void)
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
    beq lbl_fn_805BD450_00000DD4
    addic. r3, r3, 0x5c
    beq lbl_fn_805BD450_00000DB8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_805BD450_00000DB8:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_805BD450_00000DD4
    mr r3, r30
    bl dtor_80084684
lbl_fn_805BD450_00000DD4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805BD4BC(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stmw r18, 0x78(r1)
    mr r31, r3
    addi r3, r1, 0x58
    lwz r4, 0x0(r31)
    bl fn_805BEAD0
    lwz r0, 0x60(r1)
    cmpwi r0, 0x0
    bne lbl_fn_805BD4BC_00000E30
    addi r3, r1, 0x58
    li r4, -0x1
    bl fn_805BEB18
    li r3, 0x0
    b lbl_fn_805BD4BC_000015E0
lbl_fn_805BD4BC_00000E30:
    lwz r0, 0x64(r1)
    cmpwi r0, 0x0
    beq lbl_fn_805BD4BC_00000E44
    li r0, 0x1
    stw r0, 0xc(r31)
lbl_fn_805BD4BC_00000E44:
    lwz r0, 0x68(r1)
    addi r3, r1, 0x34
    stw r0, 0x34(r1)
    bl fn_805BEE08
    lwz r0, 0x18(r31)
    subi r19, r3, 0x1
    stw r19, 0x4(r31)
    cmplw r19, r0
    ble lbl_fn_805BD4BC_00000F6C
    lis r3, 0x2000
    li r4, 0x0
    subi r0, r3, 0x1
    stw r4, 0x38(r1)
    cmplw r19, r0
    stw r4, 0x3c(r1)
    stw r4, 0x40(r1)
    ble lbl_fn_805BD4BC_00000EA8
    lis r3, __files@ha
    lis r4, lbl_80764040@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_80764040@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805BD4BC_00000EA8:
    slwi r3, r19, 3
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r20, r3
    bne lbl_fn_805BD4BC_00000EDC
    lis r3, __files@ha
    lis r4, lbl_807979E8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807979E8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805BD4BC_00000EDC:
    lwz r0, 0x14(r31)
    lwz r18, 0x10(r31)
    slwi r3, r0, 3
    lwz r0, 0x3c(r1)
    add r3, r18, r3
    stw r19, 0x40(r1)
    subf r3, r18, r3
    slwi r0, r0, 3
    srawi r3, r3, 3
    mr r4, r18
    addze r19, r3
    slwi r21, r19, 3
    add r3, r20, r0
    mr r5, r21
    bl memcpy
    mr r3, r18
    mr r5, r21
    li r4, 0x0
    bl memset
    lwz r4, 0x3c(r1)
    li r5, 0x0
    lwz r3, 0x10(r31)
    mr r0, r20
    add r6, r4, r19
    lwz r7, 0x18(r31)
    lwz r4, 0x40(r1)
    cmpwi r3, 0x0
    stw r4, 0x18(r31)
    stw r7, 0x40(r1)
    stw r0, 0x10(r31)
    stw r3, 0x38(r1)
    stw r6, 0x14(r31)
    stw r5, 0x3c(r1)
    beq lbl_fn_805BD4BC_00000F6C
    stw r5, 0x3c(r1)
    bl dtor_80084684
lbl_fn_805BD4BC_00000F6C:
    addi r3, r1, 0x34
    bl fn_805BED54
    stw r3, 0x30(r1)
    addi r3, r1, 0x30
    bl fn_805BECA4
    lis r24, __files@ha
    stw r3, 0x2c(r1)
    mr r20, r3
    addi r21, r1, 0x44
    addi r24, r24, __files@l
    li r19, 0x0
    lis r28, 0xcccd
    lis r23, lbl_80764040@ha
    lis r22, 0x2000
    li r25, 0x0
    lis r27, 0xaab
    lis r30, 0x1555
    lis r29, lbl_807979E8@ha
    b lbl_fn_805BD4BC_0000121C
lbl_fn_805BD4BC_00000FB8:
    lwz r4, 0x14(r31)
    lwz r3, 0x18(r31)
    cmplw r4, r3
    bge lbl_fn_805BD4BC_00000FE8
    addi r4, r4, 0x1
    lwz r3, 0x10(r31)
    subi r0, r4, 0x1
    stw r4, 0x14(r31)
    slwi r0, r0, 3
    stwux r20, r3, r0
    stw r25, 0x4(r3)
    b lbl_fn_805BD4BC_00001208
lbl_fn_805BD4BC_00000FE8:
    subi r0, r22, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_805BD4BC_0000100C
    addi r4, r23, lbl_80764040@l
    addi r3, r24, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805BD4BC_0000100C:
    addi r3, r31, 0x18
    stw r25, 0x44(r1)
    subi r0, r22, 0x1
    stw r25, 0x48(r1)
    stw r25, 0x4c(r1)
    stw r3, 0x50(r1)
    stw r25, 0x54(r1)
    lwz r3, 0x14(r31)
    lwz r26, 0x18(r31)
    addi r3, r3, 0x1
    subf r3, r26, r3
    subf r0, r26, r0
    cmplw r3, r0
    stw r3, 0x28(r1)
    ble lbl_fn_805BD4BC_0000105C
    addi r4, r23, lbl_80764040@l
    addi r3, r24, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805BD4BC_0000105C:
    subi r0, r27, 0x5556
    cmplw r26, r0
    bge lbl_fn_805BD4BC_000010A4
    addi r4, r26, 0x1
    subi r5, r28, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x28(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x20
    srwi r4, r4, 2
    stw r4, 0x20(r1)
    cmplw r4, r0
    bge lbl_fn_805BD4BC_00001098
    addi r3, r1, 0x28
lbl_fn_805BD4BC_00001098:
    lwz r0, 0x0(r3)
    add r18, r26, r0
    b lbl_fn_805BD4BC_000010E0
lbl_fn_805BD4BC_000010A4:
    addi r0, r30, 0x5554
    cmplw r26, r0
    bge lbl_fn_805BD4BC_000010DC
    addi r3, r26, 0x1
    lwz r0, 0x28(r1)
    srwi r3, r3, 1
    stw r3, 0x24(r1)
    cmplw r3, r0
    addi r3, r1, 0x24
    bge lbl_fn_805BD4BC_000010D0
    addi r3, r1, 0x28
lbl_fn_805BD4BC_000010D0:
    lwz r0, 0x0(r3)
    add r18, r26, r0
    b lbl_fn_805BD4BC_000010E0
lbl_fn_805BD4BC_000010DC:
    subi r18, r22, 0x1
lbl_fn_805BD4BC_000010E0:
    subi r0, r22, 0x1
    cmplw r18, r0
    ble lbl_fn_805BD4BC_00001100
    addi r4, r23, lbl_80764040@l
    addi r3, r24, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805BD4BC_00001100:
    slwi r3, r18, 3
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_805BD4BC_00001128
    addi r3, r24, 0xa0
    addi r4, r29, lbl_807979E8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805BD4BC_00001128:
    lwz r0, 0x48(r1)
    stw r26, 0x44(r1)
    slwi r3, r0, 3
    stw r18, 0x4c(r1)
    lwz r0, 0x14(r31)
    stw r0, 0x54(r1)
    slwi r0, r0, 3
    add r0, r26, r0
    stwux r20, r3, r0
    stw r25, 0x4(r3)
    lwz r3, 0x48(r1)
    lwz r0, 0x54(r1)
    addi r3, r3, 0x1
    stw r3, 0x48(r1)
    lwz r3, 0x44(r1)
    lwz r4, 0x14(r31)
    lwz r20, 0x10(r31)
    slwi r4, r4, 3
    add r5, r20, r4
    subf r5, r20, r5
    mr r4, r20
    srawi r5, r5, 3
    addze r26, r5
    subf r0, r26, r0
    stw r0, 0x54(r1)
    slwi r18, r26, 3
    slwi r0, r0, 3
    mr r5, r18
    add r3, r3, r0
    bl memcpy
    mr r3, r20
    mr r5, r18
    li r4, 0x0
    bl memset
    lwz r0, 0x48(r1)
    cmpwi r21, 0x0
    add r0, r0, r26
    stw r0, 0x48(r1)
    stw r25, 0x14(r31)
    lwz r3, 0x18(r31)
    lwz r0, 0x4c(r1)
    stw r0, 0x18(r31)
    stw r3, 0x4c(r1)
    lwz r0, 0x44(r1)
    lwz r3, 0x10(r31)
    stw r0, 0x10(r31)
    stw r3, 0x44(r1)
    lwz r0, 0x48(r1)
    stw r0, 0x14(r31)
    stw r25, 0x48(r1)
    beq lbl_fn_805BD4BC_00001208
    lwz r3, 0x44(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805BD4BC_00001208
    stw r25, 0x48(r1)
    bl dtor_80084684
lbl_fn_805BD4BC_00001208:
    addi r3, r1, 0x2c
    bl fn_805BECA4
    stw r3, 0x2c(r1)
    mr r20, r3
    addi r19, r19, 0x1
lbl_fn_805BD4BC_0000121C:
    lwz r18, 0x4(r31)
    cmplw r19, r18
    blt lbl_fn_805BD4BC_00000FB8
    lis r3, lbl_80764040@ha
    li r4, 0x6
    addi r29, r3, lbl_80764040@l
    mulli r7, r18, 0xc
    addi r5, r29, 0x14
    addi r3, r7, 0x10
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8021A4CC@ha
    lis r19, dtor_80013D60@ha
    mr r7, r18
    li r6, 0xc
    addi r4, r4, fn_8021A4CC@l
    addi r5, r19, dtor_80013D60@l
    bl fn_80695720
    mr r0, r3
    lwz r3, 0x1c(r31)
    addi r4, r19, dtor_80013D60@l
    stw r0, 0x1c(r31)
    bl fn_80695A50
    li r19, 0x0
    li r20, 0x0
    li r25, 0x0
    li r30, 0x0
    b lbl_fn_805BD4BC_000015C4
lbl_fn_805BD4BC_00001290:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805BD4BC_00001420
    lwz r4, 0x10(r31)
    addi r3, r1, 0x1c
    lwz r0, 0x1c(r31)
    lwzx r4, r4, r25
    add r21, r0, r20
    bl fn_805BEC6C
    addi r3, r1, 0x1c
    li r22, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BD4BC_000012DC
    lwz r3, 0x1c(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r22, r3, 0xc
lbl_fn_805BD4BC_000012DC:
    lwz r4, 0x1c(r1)
    addi r3, r1, 0x1c
    li r18, 0x8
    lwzx r0, r4, r22
    slwi r22, r0, 24
    rlwimi r22, r0, 8, 24, 31
    rlwimi r22, r0, 24, 16, 23
    rlwimi r22, r0, 8, 8, 15
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BD4BC_0000131C
    lwz r3, 0x1c(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r18, r3, 0xc
lbl_fn_805BD4BC_0000131C:
    lwz r0, 0x1c(r1)
    addi r5, r29, 0x14
    mr r6, r5
    addi r3, r22, 0x1
    add r18, r0, r18
    li r4, 0x6
    li r7, 0x0
    addi r18, r18, 0x4
    bl fn_800846FC
    cmplwi r22, 0x0
    stbx r30, r3, r22
    mr r23, r3
    ble lbl_fn_805BD4BC_000013C8
    srwi. r0, r22, 3
    mtctr r0
    beq lbl_fn_805BD4BC_000013B0
lbl_fn_805BD4BC_0000135C:
    lbz r0, 0x0(r18)
    stb r0, 0x0(r3)
    lbz r0, 0x1(r18)
    stb r0, 0x1(r3)
    lbz r0, 0x2(r18)
    stb r0, 0x2(r3)
    lbz r0, 0x3(r18)
    stb r0, 0x3(r3)
    lbz r0, 0x4(r18)
    stb r0, 0x4(r3)
    lbz r0, 0x5(r18)
    stb r0, 0x5(r3)
    lbz r0, 0x6(r18)
    stb r0, 0x6(r3)
    lbz r0, 0x7(r18)
    addi r18, r18, 0x8
    stb r0, 0x7(r3)
    addi r3, r3, 0x8
    bdnz lbl_fn_805BD4BC_0000135C
    andi. r22, r22, 0x7
    beq lbl_fn_805BD4BC_000013C8
lbl_fn_805BD4BC_000013B0:
    mtctr r22
lbl_fn_805BD4BC_000013B4:
    lbz r0, 0x0(r18)
    addi r18, r18, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
    bdnz lbl_fn_805BD4BC_000013B4
lbl_fn_805BD4BC_000013C8:
    lwz r0, 0x0(r21)
    srwi. r0, r0, 31
    bne lbl_fn_805BD4BC_000013E0
    lbz r0, 0x0(r21)
    clrlwi r18, r0, 25
    b lbl_fn_805BD4BC_000013E4
lbl_fn_805BD4BC_000013E0:
    lwz r18, 0x4(r21)
lbl_fn_805BD4BC_000013E4:
    lbz r0, 0x10(r1)
    mr r3, r23
    stb r0, 0x14(r1)
    bl strlen
    mr r0, r3
    mr r3, r21
    mr r5, r18
    mr r6, r23
    add r7, r23, r0
    addi r8, r1, 0x14
    li r4, 0x0
    bl fn_80013F78
    mr r3, r23
    bl fn_80084C24
    b lbl_fn_805BD4BC_000015B8
lbl_fn_805BD4BC_00001420:
    lwz r4, 0x10(r31)
    addi r3, r1, 0x18
    lwz r0, 0x1c(r31)
    lwzx r4, r4, r25
    add r23, r0, r20
    bl fn_805BEC6C
    addi r3, r1, 0x18
    li r21, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BD4BC_00001460
    lwz r3, 0x18(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r21, r3, 0xc
lbl_fn_805BD4BC_00001460:
    lwz r4, 0x18(r1)
    addi r3, r1, 0x18
    li r18, 0x8
    lwzx r22, r4, r21
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BD4BC_00001490
    lwz r3, 0x18(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r18, r3, 0xc
lbl_fn_805BD4BC_00001490:
    lwz r0, 0x18(r1)
    addi r5, r29, 0x14
    mr r6, r5
    addi r3, r22, 0x1
    add r21, r0, r18
    li r4, 0x6
    li r7, 0x0
    addi r21, r21, 0x4
    bl fn_800846FC
    cmpwi r22, 0x0
    stbx r30, r3, r22
    mr r24, r3
    li r4, 0x0
    beq lbl_fn_805BD4BC_00001564
    cmplwi r22, 0x8
    subi r5, r22, 0x8
    ble lbl_fn_805BD4BC_00001538
    addi r0, r5, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmplwi r5, 0x0
    ble lbl_fn_805BD4BC_00001538
lbl_fn_805BD4BC_000014E8:
    lbz r0, 0x0(r21)
    add r5, r3, r4
    stbx r0, r3, r4
    addi r4, r4, 0x8
    lbz r0, 0x1(r21)
    stb r0, 0x1(r5)
    lbz r0, 0x2(r21)
    stb r0, 0x2(r5)
    lbz r0, 0x3(r21)
    stb r0, 0x3(r5)
    lbz r0, 0x4(r21)
    stb r0, 0x4(r5)
    lbz r0, 0x5(r21)
    stb r0, 0x5(r5)
    lbz r0, 0x6(r21)
    stb r0, 0x6(r5)
    lbz r0, 0x7(r21)
    addi r21, r21, 0x8
    stb r0, 0x7(r5)
    bdnz lbl_fn_805BD4BC_000014E8
lbl_fn_805BD4BC_00001538:
    subf r0, r4, r22
    add r3, r3, r4
    mtctr r0
    cmplw r4, r22
    bge lbl_fn_805BD4BC_00001564
lbl_fn_805BD4BC_0000154C:
    lbz r0, 0x0(r21)
    addi r21, r21, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
    addi r4, r4, 0x1
    bdnz lbl_fn_805BD4BC_0000154C
lbl_fn_805BD4BC_00001564:
    lwz r0, 0x0(r23)
    srwi. r0, r0, 31
    bne lbl_fn_805BD4BC_0000157C
    lbz r0, 0x0(r23)
    clrlwi r18, r0, 25
    b lbl_fn_805BD4BC_00001580
lbl_fn_805BD4BC_0000157C:
    lwz r18, 0x4(r23)
lbl_fn_805BD4BC_00001580:
    lbz r0, 0x8(r1)
    mr r3, r24
    stb r0, 0xc(r1)
    bl strlen
    mr r0, r3
    mr r3, r23
    mr r5, r18
    mr r6, r24
    add r7, r24, r0
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_80013F78
    mr r3, r24
    bl fn_80084C24
lbl_fn_805BD4BC_000015B8:
    addi r25, r25, 0x8
    addi r19, r19, 0x1
    addi r20, r20, 0xc
lbl_fn_805BD4BC_000015C4:
    lwz r0, 0x4(r31)
    cmplw r19, r0
    blt lbl_fn_805BD4BC_00001290
    addi r3, r1, 0x58
    li r4, -0x1
    bl fn_805BEB18
    li r3, 0x1
lbl_fn_805BD4BC_000015E0:
    lmw r18, 0x78(r1)
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_805BDCC0(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    cmplw r4, r0
    blt lbl_fn_805BDCC0_00001608
    li r3, 0x0
    blr
lbl_fn_805BDCC0_00001608:
    lwz r5, 0x10(r3)
    slwi r0, r4, 3
    add r6, r5, r0
    lwz r0, 0x4(r6)
    cmpwi r0, 0x0
    beq lbl_fn_805BDCC0_00001628
    mr r3, r0
    blr
lbl_fn_805BDCC0_00001628:
    lwz r0, 0xc(r3)
    mulli r4, r4, 0xc
    lwz r5, 0x1c(r3)
    cmpwi r0, 0x0
    add r5, r5, r4
    beq lbl_fn_805BDCC0_00001648
    mr r4, r6
    b fn_805BE380
lbl_fn_805BDCC0_00001648:
    mr r4, r6
    b fn_805BDE4C
    blr
}

asm void fn_805BDD20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    bl fn_805BD4BC
    stw r3, 0x8(r31)
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805BDD78(void)
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
    beq lbl_fn_805BDD78_00001760
    lwz r31, 0x10(r3)
    b lbl_fn_805BDD78_000016F4
lbl_fn_805BDD78_000016DC:
    lwz r3, 0x4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_805BDD78_000016F0
    li r4, 0x1
    bl fn_805BF168
lbl_fn_805BDD78_000016F0:
    addi r31, r31, 0x8
lbl_fn_805BDD78_000016F4:
    lwz r0, 0x14(r29)
    lwz r3, 0x10(r29)
    slwi r0, r0, 3
    add r0, r3, r0
    cmplw r31, r0
    bne lbl_fn_805BDD78_000016DC
    addic. r0, r29, 0x1c
    beq lbl_fn_805BDD78_00001724
    lis r4, dtor_80013D60@ha
    lwz r3, 0x1c(r29)
    addi r4, r4, dtor_80013D60@l
    bl fn_80695A50
lbl_fn_805BDD78_00001724:
    addic. r4, r29, 0x10
    beq lbl_fn_805BDD78_00001750
    beq lbl_fn_805BDD78_00001750
    beq lbl_fn_805BDD78_00001750
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_805BDD78_00001750
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_805BDD78_00001750:
    cmpwi r30, 0x0
    ble lbl_fn_805BDD78_00001760
    mr r3, r29
    bl dtor_80084684
lbl_fn_805BDD78_00001760:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805BDE4C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    mr r29, r4
    lwz r4, 0x0(r4)
    mr r28, r3
    mr r30, r5
    addi r3, r1, 0x18
    bl fn_805BEC6C
    addi r3, r1, 0x18
    li r31, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BDE4C_000017D4
    lwz r3, 0x18(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r31, r3, 0xc
lbl_fn_805BDE4C_000017D4:
    lwz r4, 0x18(r1)
    addi r3, r1, 0x18
    li r27, 0x8
    lwzx r31, r4, r31
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BDE4C_00001804
    lwz r3, 0x18(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BDE4C_00001804:
    lwz r5, 0x18(r1)
    lis r4, lbl_80764040@ha
    addi r0, r31, 0x3
    li r3, 0xf4
    add r27, r5, r27
    addi r4, r4, lbl_80764040@l
    addi r5, r4, 0x14
    clrrwi r0, r0, 2
    addi r27, r27, 0x4
    li r4, 0x6
    mr r6, r5
    li r7, 0x0
    add r27, r27, r0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_805BDE4C_00001868
    lwz r0, 0x0(r30)
    srwi. r0, r0, 31
    bne lbl_fn_805BDE4C_0000185C
    addi r4, r30, 0x1
    b lbl_fn_805BDE4C_00001860
lbl_fn_805BDE4C_0000185C:
    lwz r4, 0x8(r30)
lbl_fn_805BDE4C_00001860:
    bl fn_805BEEC8
    mr r31, r3
lbl_fn_805BDE4C_00001868:
    stw r31, 0x4(r29)
    addi r3, r1, 0x18
    lfs f1, 0x8(r27)
    lfs f0, 0xc(r27)
    lfs f2, 0x4(r27)
    stfs f2, 0x4(r31)
    stfs f1, 0x8(r31)
    stfs f0, 0xc(r31)
    bl fn_805BED54
    stw r3, 0x18(r1)
    addi r3, r1, 0x18
    li r27, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BDE4C_000018B8
    lwz r3, 0x18(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BDE4C_000018B8:
    lwz r0, 0x18(r1)
    mr r3, r28
    mr r5, r31
    li r6, 0x0
    add r4, r0, r27
    bl fn_805BEA38
    addi r3, r1, 0x18
    bl fn_805BECA4
    stw r3, 0x18(r1)
    addi r3, r1, 0x18
    bl fn_805BED54
    stw r3, 0x14(r1)
    addi r3, r1, 0x14
    li r27, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BDE4C_00001910
    lwz r3, 0x14(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BDE4C_00001910:
    lwz r0, 0x14(r1)
    mr r3, r28
    mr r5, r31
    li r6, 0x1
    add r4, r0, r27
    bl fn_805BEA38
    addi r3, r1, 0x14
    bl fn_805BECA4
    stw r3, 0x14(r1)
    addi r3, r1, 0x14
    li r27, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BDE4C_0000195C
    lwz r3, 0x14(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BDE4C_0000195C:
    lwz r0, 0x14(r1)
    mr r3, r28
    mr r5, r31
    li r6, 0x2
    add r4, r0, r27
    bl fn_805BEA38
    addi r3, r1, 0x14
    bl fn_805BECA4
    stw r3, 0x14(r1)
    addi r3, r1, 0x14
    li r27, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BDE4C_000019A8
    lwz r3, 0x14(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BDE4C_000019A8:
    lwz r0, 0x14(r1)
    mr r3, r28
    mr r5, r31
    li r6, 0x3
    add r4, r0, r27
    bl fn_805BEA38
    addi r3, r1, 0x18
    bl fn_805BECA4
    stw r3, 0x18(r1)
    addi r3, r1, 0x18
    bl fn_805BED54
    stw r3, 0x10(r1)
    addi r3, r1, 0x10
    li r27, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BDE4C_00001A00
    lwz r3, 0x10(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BDE4C_00001A00:
    lwz r0, 0x10(r1)
    mr r3, r28
    mr r5, r31
    li r6, 0x4
    add r4, r0, r27
    bl fn_805BEA38
    addi r3, r1, 0x10
    bl fn_805BECA4
    stw r3, 0x10(r1)
    addi r3, r1, 0x10
    li r27, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BDE4C_00001A4C
    lwz r3, 0x10(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BDE4C_00001A4C:
    lwz r0, 0x10(r1)
    mr r3, r28
    mr r5, r31
    li r6, 0x5
    add r4, r0, r27
    bl fn_805BEA38
    addi r3, r1, 0x10
    bl fn_805BECA4
    stw r3, 0x10(r1)
    addi r3, r1, 0x10
    li r27, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BDE4C_00001A98
    lwz r3, 0x10(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BDE4C_00001A98:
    lwz r0, 0x10(r1)
    mr r3, r28
    mr r5, r31
    li r6, 0x6
    add r4, r0, r27
    bl fn_805BEA38
    addi r3, r1, 0x18
    bl fn_805BECA4
    stw r3, 0x18(r1)
    addi r3, r1, 0x18
    bl fn_805BED54
    stw r3, 0xc(r1)
    addi r3, r1, 0xc
    li r27, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BDE4C_00001AF0
    lwz r3, 0xc(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BDE4C_00001AF0:
    lwz r0, 0xc(r1)
    mr r3, r28
    mr r5, r31
    li r6, 0x7
    add r4, r0, r27
    bl fn_805BEA38
    addi r3, r1, 0xc
    bl fn_805BECA4
    stw r3, 0xc(r1)
    addi r3, r1, 0xc
    li r27, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BDE4C_00001B3C
    lwz r3, 0xc(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BDE4C_00001B3C:
    lwz r0, 0xc(r1)
    mr r3, r28
    mr r5, r31
    li r6, 0x8
    add r4, r0, r27
    bl fn_805BEA38
    addi r3, r1, 0xc
    bl fn_805BECA4
    stw r3, 0xc(r1)
    addi r3, r1, 0xc
    li r27, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BDE4C_00001B88
    lwz r3, 0xc(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BDE4C_00001B88:
    lwz r0, 0xc(r1)
    mr r3, r28
    mr r5, r31
    li r6, 0x9
    add r4, r0, r27
    bl fn_805BEA38
    addi r3, r1, 0x18
    bl fn_805BECA4
    stw r3, 0x18(r1)
    addi r3, r1, 0x18
    bl fn_805BED54
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    li r27, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BDE4C_00001BE0
    lwz r3, 0x8(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BDE4C_00001BE0:
    lwz r0, 0x8(r1)
    mr r3, r28
    mr r5, r31
    li r6, 0xa
    add r4, r0, r27
    bl fn_805BEA38
    addi r3, r1, 0x8
    bl fn_805BECA4
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    li r27, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BDE4C_00001C2C
    lwz r3, 0x8(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BDE4C_00001C2C:
    lwz r0, 0x8(r1)
    mr r3, r28
    mr r5, r31
    li r6, 0xb
    add r4, r0, r27
    bl fn_805BEA38
    addi r3, r1, 0x8
    bl fn_805BECA4
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    li r27, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BDE4C_00001C78
    lwz r3, 0x8(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BDE4C_00001C78:
    lwz r0, 0x8(r1)
    mr r3, r28
    mr r5, r31
    li r6, 0xc
    add r4, r0, r27
    bl fn_805BEA38
    mr r3, r31
    bl fn_805BF664
    addi r11, r1, 0x40
    mr r3, r31
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
