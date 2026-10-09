#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void __register_global_object(void);
extern void _restgpr_24(void);
extern void _savegpr_24(void);
extern void dtor_80084684(void);
extern void fn_8000D114(void);
extern void fn_8000D3A4(void);
extern void fn_8000DD0C(void);
extern void fn_8001047C(void);
extern void fn_800109E0(void);
extern void fn_80011034(void);
extern void fn_80011410(void);
extern void fn_80012C88(void);
extern void fn_80013338(void);
extern void fn_800133B0(void);
extern void fn_80013410(void);
extern void fn_8003EFB0(void);
extern void fn_8004ED34(void);
extern void fn_80057A68(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_8008BBD8(void);
extern void fn_8008CD1C(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800F52F8(void);
extern void fn_800F72CC(void);
extern void fn_800F7F80(void);
extern void fn_800F7FF0(void);
extern void fn_800F80A8(void);
extern void fn_800F80B8(void);
extern void fn_800F8290(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_80116BAC(void);
extern void fn_801240B4(void);
extern void fn_8012A1B8(void);
extern void fn_8012A218(void);
extern void fn_80139550(void);
extern void fn_80139F3C(void);
extern void fn_8013A158(void);
extern void fn_8013A194(void);
extern void fn_8013C38C(void);
extern void fn_8013C480(void);
extern void fn_801404F8(void);
extern void fn_80140500(void);
extern void fn_8014052C(void);
extern void fn_801446F0(void);
extern void fn_80178018(void);
extern void fn_80178078(void);
extern void fn_80198514(void);
extern void fn_80198C00(void);
extern void fn_801AE77C(void);
extern void fn_80219E6C(void);
extern void fn_80239DAC(void);
extern void fn_804F5B0C(void);
extern void fn_804F5CA0(void);
extern void fn_804F5E3C(void);
extern void fn_805F9990(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_80695B00(void);
extern void fn_806A8E40(void);
extern void fn_806B0E30(void);

/* External data declarations */
extern u8 lbl_80739F34[];
extern u8 lbl_8077DD8C[];
extern u8 lbl_8077DD98[];
extern u8 lbl_8077DDA8[];
extern u8 lbl_8077DE00[];
extern u8 lbl_8077DE78[];
extern u8 lbl_8077EE48[];
extern u8 lbl_8077F0C8[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C7BC8[];
extern u8 lbl_807C7BDC[];

/* Small data declarations */
extern u32 lbl_8087EE74;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F0C6;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_80881FB8;
extern u32 lbl_80881FBC;
extern u32 lbl_80881FCC;
extern u32 lbl_80881FD0;
extern u32 lbl_80881FDC;
extern u32 lbl_80882018;
extern u32 lbl_8088203C;
extern u32 lbl_80882050;
extern u32 lbl_8088209C;
extern u32 lbl_808820F8;
extern u32 lbl_808820FC;
extern u32 lbl_80882100;
extern u32 lbl_80882104;
extern u32 lbl_80882108;
extern u32 lbl_8088210C;
extern u32 lbl_80882110;
extern u32 lbl_80882114;
extern u32 lbl_80882118;
extern u32 lbl_8088211C;
extern u32 lbl_80882120;
extern u32 lbl_80882124;
extern u32 lbl_80882128;
extern u32 lbl_8088212C;
extern u32 lbl_80882130;
extern u32 lbl_80882134;
extern u32 lbl_80882138;
extern u32 lbl_8088213C;
extern u32 lbl_80882140;
extern u32 lbl_80882144;

/* Function declarations */
void fn_8019F398(void);
void fn_8019F530(void);
void fn_8019F5BC(void);
void fn_8019F79C(void);
void fn_8019F7CC(void);
void fn_8019F8E8(void);
void fn_8019F998(void);
void fn_8019FBE0(void);
void fn_8019FC6C(void);
void fn_8019FE4C(void);
void fn_8019FEC4(void);
void fn_801A03E0(void);
void fn_801A03E8(void);
void fn_801A03EC(void);
void fn_801A03F4(void);
void fn_801A0400(void);
void fn_801A0408(void);
void fn_801A0410(void);
void fn_801A0418(void);
void fn_801A0420(void);
void fn_801A0428(void);
void fn_801A0468(void);
void fn_801A04A8(void);
void fn_801A04E8(void);
void fn_801A0528(void);
void fn_801A0568(void);
void fn_801A05A8(void);
void fn_801A05E8(void);
void fn_801A0628(void);
void fn_801A0668(void);
void fn_801A06A8(void);
void fn_801A06E8(void);
void fn_801A0728(void);
void fn_801A0768(void);
void fn_801A07A8(void);
void fn_801A07E8(void);
void fn_801A0828(void);
void fn_801A0868(void);
void fn_801A08A8(void);
void fn_801A08E8(void);
void fn_801A0928(void);
void fn_801A0968(void);
void fn_801A09A8(void);
void fn_801A09E8(void);
void fn_801A0A28(void);
void fn_801A0A68(void);
void fn_801A0AA8(void);
void fn_801A0AE8(void);
void fn_801A0B28(void);
void fn_801A0B68(void);
void fn_801A0BA8(void);
void fn_801A0C54(void);

asm void fn_8019F398(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    lwz r5, 0x4(r3)
    lfs f0, lbl_80882050
    lfs f31, 0x2e4(r5)
    addi r6, r5, 0xb0
    fcmpo cr0, f31, f0
    bge lbl_fn_8019F398_00000094
    addi r4, r1, 0x38
    psq_l f1, 0x528(r5), 0, 0
    lfs f4, lbl_808820F8
    lfs f3, 0x18(r3)
    lfs f0, 0x14(r3)
    fmuls f6, f3, f4
    psq_st f1, 0x0(r4), 0, 0
    fmuls f7, f0, f4
    lfs f5, 0x1c(r3)
    lfs f3, 0x38(r1)
    lfs f0, 0x3c(r1)
    fadds f3, f3, f7
    lfs f2, 0x530(r5)
    fmuls f4, f5, f4
    stfs f7, 0x14(r1)
    fadds f0, f0, f6
    stfs f3, 0x38(r1)
    fadds f2, f2, f4
    stfs f0, 0x3c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f6, 0x18(r1)
    stfs f4, 0x1c(r1)
    stfs f2, 0x40(r1)
    stfs f2, 0x530(r5)
    b lbl_fn_8019F398_00000164
lbl_fn_8019F398_00000094:
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_8019F398_000000E0
    lfs f0, lbl_8088203C
    fcmpo cr0, f31, f0
    bge lbl_fn_8019F398_000000E0
    addi r3, r1, 0x2c
    psq_l f1, 0x534(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x53c(r5)
    lfs f3, 0x30(r1)
    lfs f0, lbl_808820FC
    stfs f2, 0x34(r1)
    fadds f0, f3, f0
    stfs f0, 0x30(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r5), 0, 0
    stfs f2, 0x53c(r5)
    b lbl_fn_8019F398_00000164
lbl_fn_8019F398_000000E0:
    lfs f0, lbl_8088203C
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_8019F398_00000164
    lfs f0, lbl_80882100
    fcmpo cr0, f31, f0
    bge lbl_fn_8019F398_00000164
    addi r4, r1, 0x20
    psq_l f1, 0x528(r5), 0, 0
    lfs f4, lbl_80882104
    lfs f3, 0x18(r3)
    lfs f0, 0x14(r3)
    fmuls f6, f3, f4
    psq_st f1, 0x0(r4), 0, 0
    fmuls f7, f0, f4
    lfs f5, 0x1c(r3)
    lfs f3, 0x20(r1)
    lfs f0, 0x24(r1)
    fadds f3, f3, f7
    lfs f2, 0x530(r5)
    fmuls f4, f5, f4
    lwz r3, 0x4(r3)
    fadds f0, f0, f6
    stfs f3, 0x20(r1)
    stfs f0, 0x24(r1)
    fadds f2, f2, f4
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r3), 0, 0
    stfs f7, 0x8(r1)
    stfs f6, 0xc(r1)
    stfs f4, 0x10(r1)
    stfs f2, 0x28(r1)
    stfs f2, 0x530(r3)
lbl_fn_8019F398_00000164:
    mr r3, r6
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    mfcr r3
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    extrwi r3, r3, 1, 2
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8019F530(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, 0x4(r4)
    lis r4, lbl_80739F34@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80739F34@l
    addi r4, r4, 0x35
    stw r31, 0xc(r1)
    addi r31, r5, 0xb0
    li r5, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r31
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8019F530_000001E0
    li r3, 0x0
    b lbl_fn_8019F530_000001EC
lbl_fn_8019F530_000001E0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r3, r3, r0
lbl_fn_8019F530_000001EC:
    lfs f2, 0x1c(r3)
    lfs f0, lbl_8088209C
    lfs f1, 0x2c(r3)
    lfs f3, 0xc(r3)
    fsubs f0, f2, f0
    stfs f3, 0x0(r30)
    stfs f1, 0x8(r30)
    stfs f0, 0x4(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8019F5BC(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r5, lbl_80739F34@ha
    li r7, 0x0
    stw r0, 0x74(r1)
    addi r5, r5, lbl_80739F34@l
    addi r5, r5, 0x27
    stw r31, 0x6c(r1)
    mr r31, r3
    li r3, 0x8
    mr r6, r5
    stw r30, 0x68(r1)
    mr r30, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8019F5BC_00000270
    lwz r4, 0x4(r30)
    bl fn_801AE77C
lbl_fn_8019F5BC_00000270:
    lis r4, lbl_8077DD8C@ha
    lwzu r6, lbl_8077DD8C@l(r4)
    lwz r7, 0x4(r30)
    li r0, 0x0
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stw r7, 0x8(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F0C6
    stw r3, 0xc(r1)
    extsb. r0, r0
    stw r6, 0x1c(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r6, 0x10(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r4, 0x58(r1)
    stw r7, 0x5c(r1)
    stw r3, 0x60(r1)
    bne lbl_fn_8019F5BC_000002F4
    lis r6, lbl_807C7BC8@ha
    lis r4, fn_8019F79C@ha
    lis r3, fn_8019F7CC@ha
    li r0, 0x1
    addi r3, r3, fn_8019F7CC@l
    addi r5, r6, lbl_807C7BC8@l
    addi r4, r4, fn_8019F79C@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7BC8@l(r6)
    stb r0, lbl_8087F0C6
lbl_fn_8019F5BC_000002F4:
    lwz r7, 0x50(r1)
    addi r3, r1, 0x3c
    lwz r6, 0x54(r1)
    lwz r5, 0x58(r1)
    lwz r4, 0x5c(r1)
    lwz r0, 0x60(r1)
    stw r7, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8019F5BC_000003C8
    lwz r7, 0x3c(r1)
    li r3, 0x14
    lwz r6, 0x40(r1)
    lwz r5, 0x44(r1)
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r0, 0x38(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8019F5BC_0000038C
    lis r3, __files@ha
    lis r4, lbl_8077EE48@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077EE48@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8019F5BC_0000038C:
    cmpwi r30, 0x0
    beq lbl_fn_8019F5BC_000003BC
    lwz r0, 0x28(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x30(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x34(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x38(r1)
    stw r0, 0x10(r30)
lbl_fn_8019F5BC_000003BC:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_8019F5BC_000003CC
lbl_fn_8019F5BC_000003C8:
    li r0, 0x0
lbl_fn_8019F5BC_000003CC:
    cmpwi r0, 0x0
    beq lbl_fn_8019F5BC_000003E4
    lis r3, lbl_807C7BC8@ha
    addi r3, r3, lbl_807C7BC8@l
    stw r3, 0x0(r31)
    b lbl_fn_8019F5BC_000003EC
lbl_fn_8019F5BC_000003E4:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8019F5BC_000003EC:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8019F79C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    lwz r4, 0x10(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8019F7CC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_8019F7CC_0000046C
    lis r3, lbl_8077DDA8@ha
    addi r3, r3, lbl_8077DDA8@l
    stw r3, 0x0(r4)
    b lbl_fn_8019F7CC_00000534
lbl_fn_8019F7CC_0000046C:
    cmpwi r5, 0x0
    bne lbl_fn_8019F7CC_000004E4
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8019F7CC_000004AC
    lis r3, __files@ha
    lis r4, lbl_8077EE48@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077EE48@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8019F7CC_000004AC:
    cmpwi r30, 0x0
    beq lbl_fn_8019F7CC_000004DC
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lwz r0, 0x10(r31)
    stw r0, 0x10(r30)
lbl_fn_8019F7CC_000004DC:
    stw r30, 0x0(r29)
    b lbl_fn_8019F7CC_00000534
lbl_fn_8019F7CC_000004E4:
    cmpwi r5, 0x1
    bne lbl_fn_8019F7CC_00000500
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_8019F7CC_00000534
lbl_fn_8019F7CC_00000500:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077DDA8@ha
    lwz r4, lbl_8077DDA8@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8019F7CC_0000052C
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_8019F7CC_00000534
lbl_fn_8019F7CC_0000052C:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_8019F7CC_00000534:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8019F8E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r10, lbl_8077DE78@ha
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x14(r1)
    addi r10, r10, lbl_8077DE78@l
    lfs f2, 0x8(r5)
    li r9, 0x88
    stw r31, 0xc(r1)
    li r0, 0x1
    lfs f0, lbl_80881FBC
    li r5, 0x22e
    stw r30, 0x8(r1)
    mr r30, r3
    li r7, 0x0
    li r8, 0x1
    psq_st f1, 0x8(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x10(r3)
    lfs f2, 0x8(r6)
    li r6, 0x0
    psq_st f1, 0x14(r3), 0, 0
    lfs f1, lbl_80881FCC
    stfs f2, 0x1c(r3)
    lfs f2, lbl_80881FDC
    stw r4, 0x4(r3)
    stw r10, 0x0(r3)
    stw r9, 0x560(r4)
    li r4, 0x0
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f0, lbl_80881FBC
    mr r3, r30
    stfs f0, 0x238(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8019F998(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lfs f3, lbl_80882050
    stw r0, 0x64(r1)
    lfs f0, lbl_80881FD0
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r3
    lwz r4, 0x4(r3)
    lfs f31, 0x2e4(r4)
    addi r31, r4, 0xb0
    fsubs f3, f31, f3
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8019F998_00000688
    li r0, 0x1
    stw r0, 0x34c(r31)
    lfs f1, lbl_80881FBC
    mr r3, r31
    lfs f2, lbl_80881FDC
    li r4, 0x0
    stfs f1, 0x24c(r31)
    li r5, 0x22d
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881FBC
    stfs f0, 0x238(r31)
    lfs f0, lbl_80882050
    stfs f0, 0x234(r31)
lbl_fn_8019F998_00000688:
    lfs f0, lbl_80882050
    fcmpo cr0, f31, f0
    bge lbl_fn_8019F998_00000700
    lwz r4, 0x4(r30)
    addi r3, r1, 0x38
    lfs f4, lbl_808820F8
    psq_l f1, 0x528(r4), 0, 0
    lfs f3, 0x18(r30)
    lfs f0, 0x14(r30)
    fmuls f6, f3, f4
    psq_st f1, 0x0(r3), 0, 0
    fmuls f7, f0, f4
    lfs f5, 0x1c(r30)
    lfs f3, 0x38(r1)
    lfs f0, 0x3c(r1)
    fadds f3, f3, f7
    lfs f2, 0x530(r4)
    fmuls f4, f5, f4
    stfs f7, 0x14(r1)
    fadds f0, f0, f6
    stfs f3, 0x38(r1)
    fadds f2, f2, f4
    stfs f0, 0x3c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    stfs f6, 0x18(r1)
    stfs f4, 0x1c(r1)
    stfs f2, 0x40(r1)
    stfs f2, 0x530(r4)
    b lbl_fn_8019F998_00000808
lbl_fn_8019F998_00000700:
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_8019F998_00000750
    lfs f0, lbl_8088203C
    fcmpo cr0, f31, f0
    bge lbl_fn_8019F998_00000750
    lwz r4, 0x4(r30)
    addi r3, r1, 0x2c
    lfs f0, lbl_808820FC
    psq_l f1, 0x534(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x53c(r4)
    lfs f3, 0x30(r1)
    stfs f2, 0x34(r1)
    fadds f0, f3, f0
    stfs f0, 0x30(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r4), 0, 0
    stfs f2, 0x53c(r4)
    b lbl_fn_8019F998_00000808
lbl_fn_8019F998_00000750:
    lfs f0, lbl_8088203C
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_8019F998_000007D8
    lfs f0, lbl_80882100
    fcmpo cr0, f31, f0
    bge lbl_fn_8019F998_000007D8
    lwz r4, 0x4(r30)
    addi r3, r1, 0x20
    lfs f4, lbl_80882104
    psq_l f1, 0x528(r4), 0, 0
    lfs f3, 0x18(r30)
    lfs f0, 0x14(r30)
    fmuls f6, f3, f4
    psq_st f1, 0x0(r3), 0, 0
    fmuls f7, f0, f4
    lfs f5, 0x1c(r30)
    lfs f3, 0x20(r1)
    lfs f0, 0x24(r1)
    fadds f3, f3, f7
    lfs f2, 0x530(r4)
    fmuls f4, f5, f4
    stfs f7, 0x8(r1)
    fadds f0, f0, f6
    stfs f3, 0x20(r1)
    fadds f2, f2, f4
    stfs f0, 0x24(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    stfs f6, 0xc(r1)
    stfs f4, 0x10(r1)
    stfs f2, 0x28(r1)
    stfs f2, 0x530(r4)
    b lbl_fn_8019F998_00000808
lbl_fn_8019F998_000007D8:
    lfs f0, lbl_80882100
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_8019F998_00000808
    lfs f0, lbl_80882108
    fcmpo cr0, f31, f0
    bge lbl_fn_8019F998_00000808
    lwz r3, 0x4(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_8019F998_00000808:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    mfcr r3
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    extrwi r3, r3, 1, 2
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8019FBE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, 0x4(r4)
    lis r4, lbl_80739F34@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80739F34@l
    addi r4, r4, 0x35
    stw r31, 0xc(r1)
    addi r31, r5, 0xb0
    li r5, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r31
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8019FBE0_00000890
    li r3, 0x0
    b lbl_fn_8019FBE0_0000089C
lbl_fn_8019FBE0_00000890:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r3, r3, r0
lbl_fn_8019FBE0_0000089C:
    lfs f2, 0x1c(r3)
    lfs f0, lbl_8088209C
    lfs f1, 0x2c(r3)
    lfs f3, 0xc(r3)
    fsubs f0, f2, f0
    stfs f3, 0x0(r30)
    stfs f1, 0x8(r30)
    stfs f0, 0x4(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8019FC6C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r5, lbl_80739F34@ha
    li r7, 0x0
    stw r0, 0x74(r1)
    addi r5, r5, lbl_80739F34@l
    addi r5, r5, 0x27
    stw r31, 0x6c(r1)
    mr r31, r3
    li r3, 0x8
    mr r6, r5
    stw r30, 0x68(r1)
    mr r30, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8019FC6C_00000920
    lwz r4, 0x4(r30)
    bl fn_801AE77C
lbl_fn_8019FC6C_00000920:
    lis r4, lbl_8077DD98@ha
    lwzu r6, lbl_8077DD98@l(r4)
    lwz r7, 0x4(r30)
    li r0, 0x0
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stw r7, 0x8(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F0C6
    stw r3, 0xc(r1)
    extsb. r0, r0
    stw r6, 0x1c(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r6, 0x10(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r4, 0x58(r1)
    stw r7, 0x5c(r1)
    stw r3, 0x60(r1)
    bne lbl_fn_8019FC6C_000009A4
    lis r6, lbl_807C7BC8@ha
    lis r4, fn_8019F79C@ha
    lis r3, fn_8019F7CC@ha
    li r0, 0x1
    addi r3, r3, fn_8019F7CC@l
    addi r5, r6, lbl_807C7BC8@l
    addi r4, r4, fn_8019F79C@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7BC8@l(r6)
    stb r0, lbl_8087F0C6
lbl_fn_8019FC6C_000009A4:
    lwz r7, 0x50(r1)
    addi r3, r1, 0x3c
    lwz r6, 0x54(r1)
    lwz r5, 0x58(r1)
    lwz r4, 0x5c(r1)
    lwz r0, 0x60(r1)
    stw r7, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8019FC6C_00000A78
    lwz r7, 0x3c(r1)
    li r3, 0x14
    lwz r6, 0x40(r1)
    lwz r5, 0x44(r1)
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r0, 0x38(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8019FC6C_00000A3C
    lis r3, __files@ha
    lis r4, lbl_8077EE48@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077EE48@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8019FC6C_00000A3C:
    cmpwi r30, 0x0
    beq lbl_fn_8019FC6C_00000A6C
    lwz r0, 0x28(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x30(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x34(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x38(r1)
    stw r0, 0x10(r30)
lbl_fn_8019FC6C_00000A6C:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_8019FC6C_00000A7C
lbl_fn_8019FC6C_00000A78:
    li r0, 0x0
lbl_fn_8019FC6C_00000A7C:
    cmpwi r0, 0x0
    beq lbl_fn_8019FC6C_00000A94
    lis r3, lbl_807C7BC8@ha
    addi r3, r3, lbl_807C7BC8@l
    stw r3, 0x0(r31)
    b lbl_fn_8019FC6C_00000A9C
lbl_fn_8019FC6C_00000A94:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8019FC6C_00000A9C:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8019FE4C(void)
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
    beq lbl_fn_8019FE4C_00000B10
    lis r4, lbl_8077DE00@ha
    addi r4, r4, lbl_8077DE00@l
    stw r4, 0x0(r3)
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_8019FE4C_00000B00
    mr r4, r30
    li r5, -0x2
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_8019FE4C_00000B00:
    cmpwi r31, 0x0
    ble lbl_fn_8019FE4C_00000B10
    mr r3, r30
    bl dtor_80084684
lbl_fn_8019FE4C_00000B10:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8019FEC4(void)
{
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    stw r0, 0x204(r1)
    stfd f31, 0x1f0(r1)
    psq_st f31, 0x1f8(r1), 0, 0
    stfd f30, 0x1e0(r1)
    psq_st f30, 0x1e8(r1), 0, 0
    stfd f29, 0x1d0(r1)
    psq_st f29, 0x1d8(r1), 0, 0
    stfd f28, 0x1c0(r1)
    psq_st f28, 0x1c8(r1), 0, 0
    stw r31, 0x1bc(r1)
    stw r30, 0x1b8(r1)
    stw r29, 0x1b4(r1)
    stw r28, 0x1b0(r1)
    mr r28, r3
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8019FEC4_00000B80
    li r3, 0x1
    b lbl_fn_8019FEC4_00001008
lbl_fn_8019FEC4_00000B80:
    lwz r3, 0x4(r3)
    li r29, 0x0
    bl fn_8000DD0C
    mr r30, r3
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80882110
    mr r3, r30
    li r4, 0x0
    fsubs f30, f1, f0
    bl fn_80139550
    fcmpo cr0, f1, f30
    ble lbl_fn_8019FEC4_00000BC4
    lfs f1, lbl_80882114
    mr r3, r30
    li r4, 0x0
    bl fn_80139F3C
lbl_fn_8019FEC4_00000BC4:
    lwz r4, 0x4(r28)
    addi r3, r1, 0x40
    bl fn_8014052C
    lfs f1, lbl_80882118
    addi r3, r1, 0x4c
    addi r4, r1, 0x40
    bl fn_800F72CC
    lwz r3, 0x4(r28)
    addi r4, r1, 0x4c
    bl fn_80198514
    lwz r3, 0x4(r28)
    bl fn_8012A1B8
    mr r4, r3
    lwz r3, 0x4(r28)
    lfs f1, lbl_80881FCC
    li r5, 0x0
    lwz r12, 0x0(r3)
    lfs f2, lbl_80881FBC
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    lwz r3, 0x4(r28)
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0xb8
    bl fn_8001047C
    lfs f1, 0xbc(r1)
    addi r3, r1, 0x28
    lfs f0, lbl_8088210C
    fadds f0, f1, f0
    stfs f0, 0xbc(r1)
    lwz r4, 0x4(r28)
    bl fn_8014052C
    lfs f1, lbl_80882110
    addi r3, r1, 0x34
    addi r4, r1, 0x28
    bl fn_800F72CC
    addi r3, r1, 0xb8
    addi r4, r1, 0x34
    bl fn_80012C88
    addi r3, r1, 0xac
    addi r4, r28, 0x8
    bl fn_80011034
    lwz r3, 0x4(r28)
    bl fn_800F7F80
    cmpwi r3, 0x0
    beq lbl_fn_8019FEC4_00000F7C
    lwz r3, 0x4(r28)
    bl fn_80178078
    lfs f0, lbl_80882018
    fcmpo cr0, f1, f0
    ble lbl_fn_8019FEC4_00000E78
    lwz r4, 0x4(r28)
    addi r3, r1, 0xa0
    bl fn_80178018
    lfs f1, lbl_80881FCC
    addi r3, r1, 0x94
    lfs f3, lbl_80881FBC
    fmr f2, f1
    bl fn_8000D114
    addi r3, r1, 0x128
    addi r4, r1, 0xa0
    bl fn_800109E0
    addi r3, r1, 0x94
    addi r4, r1, 0x128
    bl fn_80011410
    lfs f29, lbl_8088211C
    li r30, 0x0
    bl fn_801A03E0
    bl fn_801A0408
    lfs f30, lbl_80881FCC
    mr r31, r3
    lfs f31, lbl_80881FB8
    b lbl_fn_8019FEC4_00000D5C
lbl_fn_8019FEC4_00000CEC:
    mr r3, r31
    bl fn_8013C480
    cmpwi r3, 0x0
    beq lbl_fn_8019FEC4_00000D50
    mr r3, r31
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x88
    addi r5, r1, 0xb8
    bl fn_80013338
    addi r3, r1, 0x88
    bl fn_8000D3A4
    fmr f28, f1
    stfs f30, 0x8c(r1)
    addi r3, r1, 0x88
    bl fn_800F7FF0
    addi r3, r1, 0x94
    addi r4, r1, 0x88
    bl fn_801A03E8
    fcmpo cr0, f1, f31
    ble lbl_fn_8019FEC4_00000D50
    fcmpo cr0, f28, f29
    bge lbl_fn_8019FEC4_00000D50
    fmr f29, f28
    mr r30, r31
lbl_fn_8019FEC4_00000D50:
    mr r3, r31
    bl fn_801A03EC
    mr r31, r3
lbl_fn_8019FEC4_00000D5C:
    cmpwi r31, 0x0
    bne lbl_fn_8019FEC4_00000CEC
    cmpwi r30, 0x0
    beq lbl_fn_8019FEC4_00000E78
    mr r3, r30
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x7c
    addi r5, r1, 0xb8
    bl fn_80013338
    addi r3, r1, 0x7c
    bl fn_800F7FF0
    addi r3, r1, 0x1c
    addi r4, r1, 0x7c
    bl fn_80011034
    addi r3, r1, 0x70
    addi r4, r1, 0x1c
    addi r5, r1, 0xac
    bl fn_80013338
    lis r4, fn_800133B0@ha
    addi r3, r1, 0x70
    addi r4, r4, fn_800133B0@l
    bl fn_8012A218
    lfs f1, 0x74(r1)
    lfs f0, lbl_80881FCC
    lfs f2, lbl_80882120
    fcmpo cr0, f1, f0
    lfs f3, lbl_80882124
    cror eq, gt, eq
    bne lbl_fn_8019FEC4_00000DE8
    fcmpo cr0, f1, f2
    bge lbl_fn_8019FEC4_00000DE0
    b lbl_fn_8019FEC4_00000DFC
lbl_fn_8019FEC4_00000DE0:
    fmr f1, f2
    b lbl_fn_8019FEC4_00000DFC
lbl_fn_8019FEC4_00000DE8:
    fneg f0, f2
    fcmpo cr0, f1, f0
    ble lbl_fn_8019FEC4_00000DF8
    b lbl_fn_8019FEC4_00000DFC
lbl_fn_8019FEC4_00000DF8:
    fmr f1, f0
lbl_fn_8019FEC4_00000DFC:
    lfs f2, 0x70(r1)
    lfs f0, lbl_80881FCC
    stfs f1, 0x74(r1)
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8019FEC4_00000E28
    fcmpo cr0, f2, f3
    bge lbl_fn_8019FEC4_00000E20
    b lbl_fn_8019FEC4_00000E3C
lbl_fn_8019FEC4_00000E20:
    fmr f2, f3
    b lbl_fn_8019FEC4_00000E3C
lbl_fn_8019FEC4_00000E28:
    fneg f0, f3
    fcmpo cr0, f2, f0
    ble lbl_fn_8019FEC4_00000E38
    b lbl_fn_8019FEC4_00000E3C
lbl_fn_8019FEC4_00000E38:
    fmr f2, f0
lbl_fn_8019FEC4_00000E3C:
    stfs f2, 0x70(r1)
    addi r3, r1, 0xac
    addi r4, r1, 0x70
    bl fn_80012C88
    lfs f1, lbl_80881FCC
    addi r3, r28, 0x8
    lfs f3, lbl_80881FBC
    fmr f2, f1
    bl fn_80057A68
    addi r3, r1, 0xf8
    addi r4, r1, 0xac
    bl fn_800109E0
    addi r3, r28, 0x8
    addi r4, r1, 0xf8
    bl fn_80011410
lbl_fn_8019FEC4_00000E78:
    addi r3, r1, 0x158
    bl fn_80140500
    addi r3, r1, 0x64
    addi r4, r1, 0xb8
    bl fn_8001047C
    lfs f1, lbl_80882128
    addi r3, r1, 0x10
    addi r4, r28, 0x8
    bl fn_800F72CC
    addi r3, r1, 0x58
    addi r4, r1, 0xb8
    addi r5, r1, 0x10
    bl fn_80013410
    lwz r3, 0x4(r28)
    bl fn_80198C00
    mr r30, r3
    bl fn_801404F8
    mr r8, r30
    addi r4, r1, 0x158
    addi r5, r1, 0x64
    addi r6, r1, 0x58
    li r7, 0x6
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8019FEC4_00000F7C
    lwz r3, 0x190(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8019FEC4_00000F7C
    bl fn_801A03F4
    cmpwi r3, 0x0
    beq lbl_fn_8019FEC4_00000F7C
    lwz r3, 0x190(r1)
    bl fn_801A0400
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8019FEC4_00000F7C
    bl fn_8013A158
    cmpwi r3, 0x0
    beq lbl_fn_8019FEC4_00000F7C
    mr r3, r30
    bl fn_8013C480
    cmpwi r3, 0x0
    beq lbl_fn_8019FEC4_00000F7C
    bl fn_8013A194
    bl fn_800F8548
    mr r30, r3
    li r3, 0x76f
    bl fn_80219E6C
    mr r31, r3
    bl fn_8013A194
    li r0, -0x1
    stw r0, 0x8(r1)
    lis r8, lbl_807C7030@ha
    lfs f1, lbl_80881FCC
    stw r0, 0xc(r1)
    mr r5, r31
    lfs f2, lbl_80881FBC
    mr r6, r30
    lwz r4, 0x4(r28)
    addi r7, r1, 0x15c
    addi r8, r8, lbl_807C7030@l
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_8019FEC4_00000F7C:
    lwz r3, 0x4(r28)
    bl fn_800F7F80
    cmpwi r3, 0x0
    beq lbl_fn_8019FEC4_00000FA8
    bl fn_800F52F8
    bl fn_80116BAC
    li r4, 0x7
    bl fn_801240B4
    cmpwi r3, 0x0
    bne lbl_fn_8019FEC4_00000FA8
    li r29, 0x1
lbl_fn_8019FEC4_00000FA8:
    lfs f2, lbl_80881FDC
    lfs f1, 0x48(r28)
    lfs f0, lbl_8088212C
    fadds f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_8019FEC4_00000FC4
    b lbl_fn_8019FEC4_00000FC8
lbl_fn_8019FEC4_00000FC4:
    fmr f1, f0
lbl_fn_8019FEC4_00000FC8:
    stfs f1, 0x48(r28)
    addi r3, r1, 0xc8
    addi r4, r1, 0xb8
    bl fn_800F80A8
    addi r3, r28, 0x14
    addi r4, r1, 0xc8
    bl fn_8008CD1C
    addi r3, r28, 0x14
    addi r4, r1, 0xac
    bl fn_800F80B8
    lfs f1, lbl_80881FBC
    addi r3, r28, 0x14
    lfs f3, 0x48(r28)
    fmr f2, f1
    bl fn_800F8290
    mr r3, r29
lbl_fn_8019FEC4_00001008:
    lwz r0, 0x204(r1)
    psq_l f31, 0x1f8(r1), 0, 0
    lfd f31, 0x1f0(r1)
    psq_l f30, 0x1e8(r1), 0, 0
    lfd f30, 0x1e0(r1)
    psq_l f29, 0x1d8(r1), 0, 0
    lfd f29, 0x1d0(r1)
    psq_l f28, 0x1c8(r1), 0, 0
    lfd f28, 0x1c0(r1)
    lwz r31, 0x1bc(r1)
    lwz r30, 0x1b8(r1)
    lwz r29, 0x1b4(r1)
    lwz r28, 0x1b0(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}

asm void fn_801A03E0(void)
{
    nofralloc
    lwz r3, lbl_8087F408
    blr
}

asm void fn_801A03E8(void)
{
    nofralloc
    b fn_805F9990
}

asm void fn_801A03EC(void)
{
    nofralloc
    lwz r3, 0x14ac(r3)
    blr
}

asm void fn_801A03F4(void)
{
    nofralloc
    lwz r0, 0x8(r3)
    extrwi r3, r0, 1, 30
    blr
}

asm void fn_801A0400(void)
{
    nofralloc
    lwz r3, 0xc(r3)
    blr
}

asm void fn_801A0408(void)
{
    nofralloc
    lwz r3, 0x48(r3)
    blr
}

asm void fn_801A0410(void)
{
    nofralloc
    lwz r3, 0xc(r3)
    blr
}

asm void fn_801A0418(void)
{
    nofralloc
    lbz r3, 0x38(r3)
    blr
}

asm void fn_801A0420(void)
{
    nofralloc
    lwz r3, 0x28(r3)
    blr
}

asm void fn_801A0428(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A0428_000010B8
    cmpwi r4, 0x0
    ble lbl_fn_801A0428_000010B8
    bl dtor_80084684
lbl_fn_801A0428_000010B8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A0468(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A0468_000010F8
    cmpwi r4, 0x0
    ble lbl_fn_801A0468_000010F8
    bl dtor_80084684
lbl_fn_801A0468_000010F8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A04A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A04A8_00001138
    cmpwi r4, 0x0
    ble lbl_fn_801A04A8_00001138
    bl dtor_80084684
lbl_fn_801A04A8_00001138:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A04E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A04E8_00001178
    cmpwi r4, 0x0
    ble lbl_fn_801A04E8_00001178
    bl dtor_80084684
lbl_fn_801A04E8_00001178:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A0528(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A0528_000011B8
    cmpwi r4, 0x0
    ble lbl_fn_801A0528_000011B8
    bl dtor_80084684
lbl_fn_801A0528_000011B8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A0568(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A0568_000011F8
    cmpwi r4, 0x0
    ble lbl_fn_801A0568_000011F8
    bl dtor_80084684
lbl_fn_801A0568_000011F8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A05A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A05A8_00001238
    cmpwi r4, 0x0
    ble lbl_fn_801A05A8_00001238
    bl dtor_80084684
lbl_fn_801A05A8_00001238:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A05E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A05E8_00001278
    cmpwi r4, 0x0
    ble lbl_fn_801A05E8_00001278
    bl dtor_80084684
lbl_fn_801A05E8_00001278:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A0628(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A0628_000012B8
    cmpwi r4, 0x0
    ble lbl_fn_801A0628_000012B8
    bl dtor_80084684
lbl_fn_801A0628_000012B8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A0668(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A0668_000012F8
    cmpwi r4, 0x0
    ble lbl_fn_801A0668_000012F8
    bl dtor_80084684
lbl_fn_801A0668_000012F8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A06A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A06A8_00001338
    cmpwi r4, 0x0
    ble lbl_fn_801A06A8_00001338
    bl dtor_80084684
lbl_fn_801A06A8_00001338:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A06E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A06E8_00001378
    cmpwi r4, 0x0
    ble lbl_fn_801A06E8_00001378
    bl dtor_80084684
lbl_fn_801A06E8_00001378:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A0728(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A0728_000013B8
    cmpwi r4, 0x0
    ble lbl_fn_801A0728_000013B8
    bl dtor_80084684
lbl_fn_801A0728_000013B8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A0768(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A0768_000013F8
    cmpwi r4, 0x0
    ble lbl_fn_801A0768_000013F8
    bl dtor_80084684
lbl_fn_801A0768_000013F8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A07A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A07A8_00001438
    cmpwi r4, 0x0
    ble lbl_fn_801A07A8_00001438
    bl dtor_80084684
lbl_fn_801A07A8_00001438:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A07E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A07E8_00001478
    cmpwi r4, 0x0
    ble lbl_fn_801A07E8_00001478
    bl dtor_80084684
lbl_fn_801A07E8_00001478:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A0828(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A0828_000014B8
    cmpwi r4, 0x0
    ble lbl_fn_801A0828_000014B8
    bl dtor_80084684
lbl_fn_801A0828_000014B8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A0868(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A0868_000014F8
    cmpwi r4, 0x0
    ble lbl_fn_801A0868_000014F8
    bl dtor_80084684
lbl_fn_801A0868_000014F8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A08A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A08A8_00001538
    cmpwi r4, 0x0
    ble lbl_fn_801A08A8_00001538
    bl dtor_80084684
lbl_fn_801A08A8_00001538:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A08E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A08E8_00001578
    cmpwi r4, 0x0
    ble lbl_fn_801A08E8_00001578
    bl dtor_80084684
lbl_fn_801A08E8_00001578:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A0928(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A0928_000015B8
    cmpwi r4, 0x0
    ble lbl_fn_801A0928_000015B8
    bl dtor_80084684
lbl_fn_801A0928_000015B8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A0968(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A0968_000015F8
    cmpwi r4, 0x0
    ble lbl_fn_801A0968_000015F8
    bl dtor_80084684
lbl_fn_801A0968_000015F8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A09A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A09A8_00001638
    cmpwi r4, 0x0
    ble lbl_fn_801A09A8_00001638
    bl dtor_80084684
lbl_fn_801A09A8_00001638:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A09E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A09E8_00001678
    cmpwi r4, 0x0
    ble lbl_fn_801A09E8_00001678
    bl dtor_80084684
lbl_fn_801A09E8_00001678:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A0A28(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A0A28_000016B8
    cmpwi r4, 0x0
    ble lbl_fn_801A0A28_000016B8
    bl dtor_80084684
lbl_fn_801A0A28_000016B8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A0A68(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A0A68_000016F8
    cmpwi r4, 0x0
    ble lbl_fn_801A0A68_000016F8
    bl dtor_80084684
lbl_fn_801A0A68_000016F8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A0AA8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A0AA8_00001738
    cmpwi r4, 0x0
    ble lbl_fn_801A0AA8_00001738
    bl dtor_80084684
lbl_fn_801A0AA8_00001738:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A0AE8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A0AE8_00001778
    cmpwi r4, 0x0
    ble lbl_fn_801A0AE8_00001778
    bl dtor_80084684
lbl_fn_801A0AE8_00001778:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A0B28(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A0B28_000017B8
    cmpwi r4, 0x0
    ble lbl_fn_801A0B28_000017B8
    bl dtor_80084684
lbl_fn_801A0B28_000017B8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A0B68(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A0B68_000017F8
    cmpwi r4, 0x0
    ble lbl_fn_801A0B68_000017F8
    bl dtor_80084684
lbl_fn_801A0B68_000017F8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A0BA8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_8077F0C8@ha
    li r9, 0x0
    stw r0, 0x14(r1)
    addi r6, r6, lbl_8077F0C8@l
    li r10, 0x1
    li r0, 0x20
    stw r31, 0xc(r1)
    li r7, 0x0
    lfs f0, lbl_80882130
    li r8, 0x1
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f1, lbl_80882134
    stw r5, 0x8(r3)
    li r5, 0x6c
    lfs f2, lbl_80882138
    stw r6, 0x0(r3)
    li r6, 0x0
    stw r4, 0x4(r3)
    stb r10, 0xc(r3)
    stb r9, 0xd(r3)
    stb r9, 0xe(r3)
    stw r0, 0x560(r4)
    li r4, 0x0
    lwz r3, 0x4(r3)
    stw r10, 0x3fc(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f0, lbl_8088213C
    stfs f0, 0x238(r31)
    lwz r3, 0x4(r30)
    bl fn_801446F0
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A0C54(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x90
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    bl _savegpr_24
    lwz r4, 0x4(r3)
    mr r27, r3
    lwz r0, 0x1208(r4)
    addi r31, r4, 0xb0
    cmpwi cr1, r0, 0x0
    bne cr1, lbl_fn_801A0C54_00001C88
    lwz r5, lbl_8087F610
    cmpwi r5, 0x0
    beq lbl_fn_801A0C54_00001C18
    lbz r0, 0xd(r3)
    li r30, 0x0
    li r29, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_801A0C54_00001A68
    li r28, 0x1
    stb r28, 0xd(r3)
    lwz r3, 0x8(r3)
    lbz r0, 0x520(r3)
    cmplwi r0, 0xff
    bne lbl_fn_801A0C54_00001A58
    lbz r0, lbl_8087EE74
    li r6, 0x0
    lfs f0, lbl_80882134
    li r3, 0x2
    extsb. r0, r0
    stw r6, 0x4c(r1)
    li r0, -0x1
    stw r6, 0x54(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stw r3, 0x48(r1)
    stw r4, 0x58(r1)
    stw r0, 0x50(r1)
    bne lbl_fn_801A0C54_00001990
    lis r3, lbl_807C6BB8@ha
    stwu r6, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    lis r5, lbl_807C7BDC@ha
    stw r6, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C7BDC@l
    stw r6, 0x8(r3)
    stw r28, 0xc(r3)
    bl __register_global_object
    stb r28, lbl_8087EE74
lbl_fn_801A0C54_00001990:
    lis r26, lbl_807C6BB8@ha
    lwz r25, 0x8(r27)
    addi r26, r26, lbl_807C6BB8@l
    lwz r0, 0xc(r26)
    cmpwi r0, 0x0
    beq lbl_fn_801A0C54_000019FC
    li r24, 0x0
    li r28, 0x0
    b lbl_fn_801A0C54_000019F0
lbl_fn_801A0C54_000019B4:
    lwz r0, 0x0(r26)
    add r3, r0, r28
    lwzx r0, r28, r0
    cmpwi r0, -0x1
    beq lbl_fn_801A0C54_000019D0
    cmpwi r0, 0xb
    bne lbl_fn_801A0C54_000019E8
lbl_fn_801A0C54_000019D0:
    lwz r12, 0x4(r3)
    mr r4, r25
    addi r5, r1, 0x48
    li r3, 0xb
    mtctr r12
    bctrl
lbl_fn_801A0C54_000019E8:
    addi r24, r24, 0x1
    addi r28, r28, 0x8
lbl_fn_801A0C54_000019F0:
    lwz r0, 0x4(r26)
    cmpw r24, r0
    blt lbl_fn_801A0C54_000019B4
lbl_fn_801A0C54_000019FC:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801A0C54_00001A30
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_801A0C54_00001A24
    li r0, 0x0
    b lbl_fn_801A0C54_00001A4C
lbl_fn_801A0C54_00001A24:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_801A0C54_00001A4C
lbl_fn_801A0C54_00001A30:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_801A0C54_00001A44
    li r3, 0x0
    b lbl_fn_801A0C54_00001A48
lbl_fn_801A0C54_00001A44:
    bl fn_806A8E40
lbl_fn_801A0C54_00001A48:
    clrlwi r0, r3, 24
lbl_fn_801A0C54_00001A4C:
    lwz r3, 0x8(r27)
    stb r0, 0x520(r3)
    b lbl_fn_801A0C54_00001A5C
lbl_fn_801A0C54_00001A58:
    li r29, 0x1
lbl_fn_801A0C54_00001A5C:
    li r0, 0x1
    stb r0, 0xe(r27)
    b lbl_fn_801A0C54_00001B94
lbl_fn_801A0C54_00001A68:
    lwz r3, 0x8(r3)
    li r28, 0x1
    lwz r0, 0x524(r3)
    cmpwi r0, -0x2
    bne lbl_fn_801A0C54_00001AF0
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801A0C54_00001AB0
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_801A0C54_00001AA4
    li r0, 0x0
    b lbl_fn_801A0C54_00001ACC
lbl_fn_801A0C54_00001AA4:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_801A0C54_00001ACC
lbl_fn_801A0C54_00001AB0:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_801A0C54_00001AC4
    li r3, 0x0
    b lbl_fn_801A0C54_00001AC8
lbl_fn_801A0C54_00001AC4:
    bl fn_806A8E40
lbl_fn_801A0C54_00001AC8:
    clrlwi r0, r3, 24
lbl_fn_801A0C54_00001ACC:
    lwz r3, 0x8(r27)
    clrlwi r0, r0, 24
    lbz r3, 0x520(r3)
    cmplw r3, r0
    bne lbl_fn_801A0C54_00001AE8
    li r30, 0x1
    b lbl_fn_801A0C54_00001B70
lbl_fn_801A0C54_00001AE8:
    li r29, 0x1
    b lbl_fn_801A0C54_00001B70
lbl_fn_801A0C54_00001AF0:
    cmpwi r0, -0x1
    beq lbl_fn_801A0C54_00001B70
    mr r3, r5
    clrlwi r4, r0, 24
    bl fn_804F5E3C
    cmpwi r3, 0x0
    bne lbl_fn_801A0C54_00001B14
    li r28, 0x0
    b lbl_fn_801A0C54_00001B70
lbl_fn_801A0C54_00001B14:
    cmpwi r3, 0x1
    bne lbl_fn_801A0C54_00001B6C
    lwz r4, 0x8(r27)
    lwz r3, lbl_8087F610
    lwz r0, 0x524(r4)
    clrlwi r4, r0, 24
    bl fn_804F5B0C
    cmpwi r3, 0x0
    beq lbl_fn_801A0C54_00001B64
    lwz r5, 0x8(r27)
    lwz r4, 0x0(r3)
    lwz r0, 0x48(r5)
    cmpw r4, r0
    bne lbl_fn_801A0C54_00001B64
    lwz r3, 0x4(r3)
    lwz r0, 0x4c(r5)
    cmpw r3, r0
    bne lbl_fn_801A0C54_00001B64
    li r30, 0x1
    b lbl_fn_801A0C54_00001B70
lbl_fn_801A0C54_00001B64:
    li r29, 0x1
    b lbl_fn_801A0C54_00001B70
lbl_fn_801A0C54_00001B6C:
    li r29, 0x1
lbl_fn_801A0C54_00001B70:
    cmplwi r28, 0x1
    bne lbl_fn_801A0C54_00001B94
    lwz r4, 0x8(r27)
    lwz r3, lbl_8087F610
    lwz r0, 0x524(r4)
    clrlwi r4, r0, 24
    bl fn_804F5CA0
    li r0, 0x0
    stb r0, 0xe(r27)
lbl_fn_801A0C54_00001B94:
    cmplwi r29, 0x1
    bne lbl_fn_801A0C54_00001BB4
    lwz r4, 0x4(r27)
    li r0, 0x0
    stb r0, 0xc(r27)
    li r3, 0x1
    stw r0, 0x1208(r4)
    b lbl_fn_801A0C54_00001D14
lbl_fn_801A0C54_00001BB4:
    cmplwi r30, 0x1
    bne lbl_fn_801A0C54_00001CC0
    lwz r4, 0x4(r27)
    li r3, 0x0
    lwz r5, 0x8(r27)
    li r0, 0x2
    stw r5, 0x1208(r4)
    addi r4, r1, 0x28
    lfs f0, lbl_80882134
    stw r3, 0x2c(r1)
    stw r3, 0x30(r1)
    stw r3, 0x34(r1)
    stw r3, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    stw r0, 0x28(r1)
    lwz r0, 0x4(r27)
    stw r0, 0x38(r1)
    lwz r3, 0x8(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_801A0C54_00001CC0
lbl_fn_801A0C54_00001C18:
    lfs f1, 0x234(r31)
    lfs f0, lbl_80882140
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_801A0C54_00001CC0
    bne cr1, lbl_fn_801A0C54_00001CC0
    lwz r0, 0x8(r3)
    li r5, 0x0
    stw r0, 0x1208(r4)
    li r0, 0x2
    lfs f0, lbl_80882134
    addi r4, r1, 0x8
    stw r5, 0xc(r1)
    stw r5, 0x10(r1)
    stw r5, 0x14(r1)
    stw r5, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stw r0, 0x8(r1)
    lwz r0, 0x4(r3)
    stw r0, 0x18(r1)
    lwz r3, 0x8(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_801A0C54_00001CC0
lbl_fn_801A0C54_00001C88:
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    bne lbl_fn_801A0C54_00001CB8
    lwz r3, lbl_8087F0A8
    li r4, 0x20
    addi r3, r3, 0x48c
    bl fn_801240B4
    cmpwi r3, 0x0
    beq lbl_fn_801A0C54_00001CB8
    li r0, 0x1
    stb r0, 0xc(r27)
    b lbl_fn_801A0C54_00001CC0
lbl_fn_801A0C54_00001CB8:
    li r0, 0x0
    stb r0, 0xc(r27)
lbl_fn_801A0C54_00001CC0:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80882144
    fsubs f0, f1, f0
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_801A0C54_00001D10
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_801A0C54_00001D08
    lwz r3, 0x4(r27)
    lwz r0, 0x1208(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801A0C54_00001D10
    li r3, 0x1
    b lbl_fn_801A0C54_00001D14
lbl_fn_801A0C54_00001D08:
    li r3, 0x1
    b lbl_fn_801A0C54_00001D14
lbl_fn_801A0C54_00001D10:
    li r3, 0x0
lbl_fn_801A0C54_00001D14:
    addi r11, r1, 0x90
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    bl _restgpr_24
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}
