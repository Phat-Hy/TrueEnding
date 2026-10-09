#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_14(void);
extern void _savegpr_14(void);
extern void dtor_80084684(void);
extern void fn_8006F72C(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800A555C(void);
extern void fn_800C31F4(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DBF68(void);
extern void fn_800DFB40(void);
extern void fn_800E0000(void);
extern void fn_800E0908(void);
extern void fn_801248DC(void);
extern void fn_80124C6C(void);
extern void fn_801F0544(void);
extern void fn_801F64D0(void);
extern void fn_801F6C2C(void);
extern void fn_801F6C38(void);
extern void fn_801F6C80(void);
extern void fn_801F72D4(void);
extern void fn_801F7590(void);
extern void fn_801F837C(void);
extern void fn_801F8830(void);
extern void fn_8020924C(void);
extern void fn_803B3D2C(void);
extern void fn_803CC6B4(void);
extern void fn_80680770(void);
extern void fn_80686A48(void);
extern void fn_80686EA4(void);

/* External data declarations */
extern u8 lbl_8074FCE8[];
extern u8 lbl_8074FCF0[];
extern u8 lbl_8074FD38[];
extern u8 lbl_807799A0[];
extern u8 lbl_8078B498[];
extern u8 lbl_8078B4D0[];

/* Small data declarations */
extern u32 lbl_8087DD88;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_80885C18;
extern u32 lbl_80885C20;
extern u32 lbl_80885C24;
extern u32 lbl_80885C28;
extern u32 lbl_80885C2C;
extern u32 lbl_80885C30;
extern u32 lbl_80885C34;
extern u32 lbl_80885C38;
extern u32 lbl_80885C3C;
extern u32 lbl_80885C40;
extern u32 lbl_80885C44;
extern u32 lbl_80885C48;
extern u32 lbl_80885C4C;

/* Function declarations */
void fn_803B42E8(void);
void fn_803B4338(void);
void fn_803B434C(void);
void fn_803B443C(void);
void fn_803B4494(void);
void fn_803B4564(void);
void fn_803B4C24(void);
void fn_803B4C38(void);
void fn_803B5470(void);
void fn_803B5564(void);
void fn_803B55BC(void);
void fn_803B5618(void);
void fn_803B5774(void);
void fn_803B57B0(void);
void fn_803B57EC(void);
void fn_803B5830(void);
void fn_803B583C(void);
void fn_803B58D8(void);
void fn_803B5950(void);
void fn_803B5974(void);

asm void fn_803B42E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r5, lbl_8087EFE8
    cmpwi r5, 0x0
    beq lbl_fn_803B42E8_00000020
    li r0, 0x5
    stw r0, 0x34d0(r5)
lbl_fn_803B42E8_00000020:
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_803B42E8_00000040
    li r0, 0x0
    stw r0, 0x34d0(r3)
lbl_fn_803B42E8_00000040:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B4338(void)
{
    nofralloc
    lis r5, lbl_8074FCE8@ha
    slwi r0, r4, 2
    addi r5, r5, lbl_8074FCE8@l
    lwzx r4, r5, r0
    b fn_803B42E8
}

asm void fn_803B434C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_800D1D3C
    lis r3, lbl_8078B4D0@ha
    lis r31, lbl_8074FD38@ha
    li r30, 0x0
    stw r30, 0x48(r29)
    addi r3, r3, lbl_8078B4D0@l
    addi r31, r31, lbl_8074FD38@l
    stw r3, 0x0(r29)
    mr r3, r29
    addi r4, r31, 0x1
    stw r30, 0x74(r29)
    stw r30, 0x78(r29)
    stw r30, 0x7c(r29)
    stw r30, 0x80(r29)
    bl fn_801F64D0
    stw r3, 0x4c(r29)
    li r4, 0x1
    stb r30, 0x4d(r3)
    lwz r3, 0x4c(r29)
    bl fn_800D246C
    mr r3, r29
    addi r4, r31, 0x1f
    bl fn_801F64D0
    stw r3, 0x50(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    addi r4, r31, 0x3f
    bl fn_801F64D0
    stw r3, 0x54(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    addi r4, r31, 0x5f
    bl fn_801F64D0
    stw r3, 0x58(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    addi r4, r31, 0x7f
    bl fn_801F64D0
    stw r3, 0x5c(r29)
    li r4, 0x1
    bl fn_800D246C
    stw r30, 0x60(r29)
    mr r3, r29
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803B443C(void)
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
    beq lbl_fn_803B443C_00000190
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_803B443C_00000190
    mr r3, r30
    bl dtor_80084684
lbl_fn_803B443C_00000190:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B4494(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_803B4494_00000254
    lwz r3, 0x4c(r29)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x4c(r29)
    li r31, 0x0
    lfs f31, lbl_80885C20
    li r30, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x4c(r29)
    stb r31, 0x4d(r3)
    stw r31, 0x60(r29)
lbl_fn_803B4494_00000210:
    lwz r3, 0x50(r29)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x50(r29)
    addi r30, r30, 0x1
    cmpwi r30, 0x4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x50(r29)
    stb r31, 0x4d(r3)
    lwz r3, 0x50(r29)
    addi r29, r29, 0x4
    stfs f31, 0x54(r3)
    blt lbl_fn_803B4494_00000210
    li r3, 0x1
    b lbl_fn_803B4494_00000258
lbl_fn_803B4494_00000254:
    li r3, 0x0
lbl_fn_803B4494_00000258:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803B4564(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    lis r0, 0x4330
    stw r31, 0x8c(r1)
    mr r31, r3
    stw r30, 0x88(r1)
    lwz r4, 0x78(r3)
    stw r0, 0x70(r1)
    cmpwi r4, 0x1
    stw r0, 0x78(r1)
    beq lbl_fn_803B4564_000002C8
    cmpwi r4, 0x4
    beq lbl_fn_803B4564_000003A4
    cmpwi r4, 0x2
    beq lbl_fn_803B4564_000004B8
    cmpwi r4, 0x3
    beq lbl_fn_803B4564_0000060C
    b lbl_fn_803B4564_00000630
lbl_fn_803B4564_000002C8:
    lwz r5, 0x74(r3)
    lis r4, lbl_8074FCF0@ha
    lfd f2, lbl_8074FCF0@l(r4)
    addi r0, r5, 0x1
    stw r0, 0x74(r3)
    xoris r0, r0, 0x8000
    lwz r4, 0x50(r3)
    stw r0, 0x74(r1)
    lfs f0, lbl_80885C24
    lfd f1, 0x70(r1)
    fsubs f1, f1, f2
    stfs f1, 0x50(r4)
    lwz r0, 0x74(r3)
    lwz r4, 0x54(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x7c(r1)
    lfd f1, 0x78(r1)
    fsubs f1, f1, f2
    stfs f1, 0x50(r4)
    lwz r0, 0x74(r3)
    lwz r4, 0x58(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f1, 0x70(r1)
    fsubs f1, f1, f2
    stfs f1, 0x50(r4)
    lwz r0, 0x74(r3)
    lwz r4, 0x5c(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x7c(r1)
    lfd f1, 0x78(r1)
    fsubs f1, f1, f2
    stfs f1, 0x50(r4)
    lwz r0, 0x74(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f1, 0x70(r1)
    fsubs f1, f1, f2
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_803B4564_00000630
    li r4, 0x2
    li r0, 0x0
    stw r4, 0x78(r3)
    li r4, 0x0
    stw r0, 0x74(r3)
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x48c
    bl fn_801248DC
    lfs f0, lbl_80885C28
    fcmpo cr0, f1, f0
    mfcr r0
    srwi r0, r0, 31
    stw r0, 0x84(r31)
    b lbl_fn_803B4564_00000630
lbl_fn_803B4564_000003A4:
    lwz r0, 0x74(r3)
    lis r4, lbl_8074FCF0@ha
    lfd f2, lbl_8074FCF0@l(r4)
    xoris r0, r0, 0x8000
    stw r0, 0x7c(r1)
    lfs f1, lbl_80885C2C
    lfd f0, 0x78(r1)
    lwz r4, 0x50(r3)
    fsubs f0, f0, f2
    fadds f0, f1, f0
    stfs f0, 0x50(r4)
    lwz r0, 0x74(r3)
    lwz r4, 0x54(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f0, f0, f2
    fadds f0, f1, f0
    stfs f0, 0x50(r4)
    lwz r0, 0x74(r3)
    lwz r4, 0x58(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x7c(r1)
    lfd f0, 0x78(r1)
    fsubs f0, f0, f2
    fadds f0, f1, f0
    stfs f0, 0x50(r4)
    lwz r0, 0x74(r3)
    lwz r4, 0x5c(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f0, f0, f2
    fadds f0, f1, f0
    stfs f0, 0x50(r4)
    lwz r4, 0x60(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803B4564_0000045C
    lwz r0, 0x74(r3)
    lfs f0, lbl_80885C30
    xoris r0, r0, 0x8000
    stw r0, 0x7c(r1)
    lfd f1, 0x78(r1)
    fsubs f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x50(r4)
lbl_fn_803B4564_0000045C:
    lwz r0, 0x60(r3)
    lwz r4, 0x74(r3)
    cmpwi r0, 0x0
    addi r0, r4, 0x1
    stw r0, 0x74(r3)
    beq lbl_fn_803B4564_000004AC
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lis r4, lbl_8074FCF0@ha
    lfs f0, lbl_80885C24
    lfd f2, lbl_8074FCF0@l(r4)
    lfd f1, 0x70(r1)
    fsubs f1, f1, f2
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_803B4564_00000630
    li r0, 0x0
    stw r0, 0x78(r3)
    stw r0, 0x60(r3)
    b lbl_fn_803B4564_00000630
lbl_fn_803B4564_000004AC:
    li r0, 0x0
    stw r0, 0x78(r3)
    b lbl_fn_803B4564_00000630
lbl_fn_803B4564_000004B8:
    lwz r4, 0x50(r3)
    lfs f0, lbl_80885C24
    stfs f0, 0x50(r4)
    lwz r4, 0x54(r3)
    stfs f0, 0x50(r4)
    lwz r4, 0x58(r3)
    stfs f0, 0x50(r4)
    lwz r4, 0x5c(r3)
    stfs f0, 0x50(r4)
    lwz r0, 0x84(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B4564_000005E4
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x17
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_803B4564_00000528
    lwz r0, 0x64(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803B4564_00000630
    li r3, 0x0
    li r0, 0x3
    stw r3, 0x7c(r31)
    stw r0, 0x78(r31)
    lwz r0, 0x50(r31)
    stw r0, 0x60(r31)
    b lbl_fn_803B4564_00000630
lbl_fn_803B4564_00000528:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x18
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_803B4564_00000568
    lwz r0, 0x68(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803B4564_00000630
    li r3, 0x1
    li r0, 0x3
    stw r3, 0x7c(r31)
    stw r0, 0x78(r31)
    lwz r0, 0x54(r31)
    stw r0, 0x60(r31)
    b lbl_fn_803B4564_00000630
lbl_fn_803B4564_00000568:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1a
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_803B4564_000005A8
    lwz r0, 0x6c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803B4564_00000630
    li r3, 0x2
    li r0, 0x3
    stw r3, 0x7c(r31)
    stw r0, 0x78(r31)
    lwz r0, 0x58(r31)
    stw r0, 0x60(r31)
    b lbl_fn_803B4564_00000630
lbl_fn_803B4564_000005A8:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x19
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_803B4564_00000630
    lwz r0, 0x70(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803B4564_00000630
    li r0, 0x3
    stw r0, 0x7c(r31)
    stw r0, 0x78(r31)
    lwz r0, 0x5c(r31)
    stw r0, 0x60(r31)
    b lbl_fn_803B4564_00000630
lbl_fn_803B4564_000005E4:
    lwz r3, lbl_8087F0A8
    li r4, 0x0
    addi r3, r3, 0x48c
    bl fn_801248DC
    lfs f0, lbl_80885C28
    fcmpo cr0, f1, f0
    mfcr r0
    srwi r0, r0, 31
    stw r0, 0x84(r31)
    b lbl_fn_803B4564_00000630
lbl_fn_803B4564_0000060C:
    lwz r4, 0x50(r3)
    lfs f0, lbl_80885C24
    stfs f0, 0x50(r4)
    lwz r4, 0x54(r3)
    stfs f0, 0x50(r4)
    lwz r4, 0x58(r3)
    stfs f0, 0x50(r4)
    lwz r3, 0x5c(r3)
    stfs f0, 0x50(r3)
lbl_fn_803B4564_00000630:
    lwz r0, 0x78(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803B4564_00000690
    lwz r3, 0x4c(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x50(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x54(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x58(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5c(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    b lbl_fn_803B4564_00000764
lbl_fn_803B4564_00000690:
    lwz r3, 0x4c(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r0, 0x64(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803B4564_000006C0
    lwz r3, 0x50(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_803B4564_000006D0
lbl_fn_803B4564_000006C0:
    lwz r3, 0x50(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803B4564_000006D0:
    lwz r0, 0x68(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803B4564_000006F0
    lwz r3, 0x54(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_803B4564_00000700
lbl_fn_803B4564_000006F0:
    lwz r3, 0x54(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803B4564_00000700:
    lwz r0, 0x6c(r31)
    addi r4, r31, 0x8
    cmpwi r0, 0x0
    beq lbl_fn_803B4564_00000724
    lwz r3, 0x50(r4)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_803B4564_00000734
lbl_fn_803B4564_00000724:
    lwz r3, 0x50(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803B4564_00000734:
    lwz r0, 0x68(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803B4564_00000754
    lwz r3, 0x54(r4)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_803B4564_00000764
lbl_fn_803B4564_00000754:
    lwz r3, 0x54(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803B4564_00000764:
    lfs f0, lbl_80885C20
    lis r30, lbl_8074FD38@ha
    stfs f0, 0x58(r1)
    addi r30, r30, lbl_8074FD38@l
    addi r3, r1, 0x44
    stfs f0, 0x5c(r1)
    addi r5, r30, 0x9f
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x68(r1)
    lwz r4, 0x4c(r31)
    bl fn_801F8830
    lfs f4, 0x44(r1)
    addi r4, r30, 0xab
    lfs f3, 0x48(r1)
    addi r5, r1, 0x58
    lfs f2, 0x4c(r1)
    lfs f1, 0x50(r1)
    lfs f0, 0x54(r1)
    stfs f4, 0x58(r1)
    stfs f3, 0x5c(r1)
    stfs f2, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f0, 0x68(r1)
    lwz r3, 0x50(r31)
    bl fn_801F72D4
    lwz r3, 0x50(r31)
    addi r4, r30, 0xb5
    lfs f1, lbl_80885C34
    bl fn_801F6C80
    lwz r3, 0x50(r31)
    addi r4, r30, 0xbf
    lfs f1, lbl_80885C20
    bl fn_801F6C80
    lwz r4, 0x4c(r31)
    addi r3, r1, 0x30
    addi r5, r30, 0xca
    bl fn_801F8830
    lfs f4, 0x30(r1)
    addi r4, r30, 0xab
    lfs f3, 0x34(r1)
    addi r5, r1, 0x58
    lfs f2, 0x38(r1)
    lfs f1, 0x3c(r1)
    lfs f0, 0x40(r1)
    stfs f4, 0x58(r1)
    stfs f3, 0x5c(r1)
    stfs f2, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f0, 0x68(r1)
    lwz r3, 0x54(r31)
    bl fn_801F72D4
    lwz r3, 0x54(r31)
    addi r4, r30, 0xb5
    lfs f1, lbl_80885C34
    bl fn_801F6C80
    lwz r3, 0x54(r31)
    addi r4, r30, 0xbf
    lfs f1, lbl_80885C20
    bl fn_801F6C80
    lwz r4, 0x4c(r31)
    addi r3, r1, 0x1c
    addi r5, r30, 0xd7
    bl fn_801F8830
    lfs f4, 0x1c(r1)
    addi r4, r30, 0xab
    lfs f3, 0x20(r1)
    addi r5, r1, 0x58
    lfs f2, 0x24(r1)
    lfs f1, 0x28(r1)
    lfs f0, 0x2c(r1)
    stfs f4, 0x58(r1)
    stfs f3, 0x5c(r1)
    stfs f2, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f0, 0x68(r1)
    lwz r3, 0x58(r31)
    bl fn_801F72D4
    lwz r3, 0x58(r31)
    addi r4, r30, 0xb5
    lfs f1, lbl_80885C34
    bl fn_801F6C80
    lwz r3, 0x58(r31)
    addi r4, r30, 0xbf
    lfs f1, lbl_80885C20
    bl fn_801F6C80
    lwz r4, 0x4c(r31)
    addi r3, r1, 0x8
    addi r5, r30, 0xe1
    bl fn_801F8830
    lfs f4, 0x8(r1)
    addi r4, r30, 0xab
    lfs f3, 0xc(r1)
    addi r5, r1, 0x58
    lfs f2, 0x10(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x18(r1)
    stfs f4, 0x58(r1)
    stfs f3, 0x5c(r1)
    stfs f2, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f0, 0x68(r1)
    lwz r3, 0x5c(r31)
    bl fn_801F72D4
    lwz r3, 0x5c(r31)
    addi r4, r30, 0xb5
    lfs f1, lbl_80885C34
    bl fn_801F6C80
    lwz r3, 0x5c(r31)
    addi r4, r30, 0xbf
    lfs f1, lbl_80885C20
    bl fn_801F6C80
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_803B4C24(void)
{
    nofralloc
    lwz r3, 0x78(r3)
    subi r0, r3, 0x3
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_803B4C38(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_14
    li r4, -0x1
    li r0, 0x1
    stw r4, 0x7c(r3)
    li r14, 0x0
    lwz r4, 0x48(r3)
    mr r15, r3
    stw r0, 0x80(r3)
    addi r17, r1, 0x4c
    lwz r16, 0x8(r4)
    stw r14, 0x4c(r1)
    mr r3, r16
    stw r14, 0x50(r1)
    stw r14, 0x54(r1)
    bl fn_80686A48
    mr r18, r3
    mr r3, r17
    mr r4, r18
    bl fn_800DBF68
    lbz r3, 0x24(r1)
    slwi r0, r18, 1
    stb r3, 0x20(r1)
    mr r3, r17
    mr r6, r16
    add r7, r16, r0
    addi r8, r1, 0x20
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    mr r3, r17
    bl fn_803B3D2C
    lwz r0, 0x4c(r1)
    addi r3, r1, 0x40
    stw r14, 0x40(r1)
    srwi. r0, r0, 31
    stw r14, 0x44(r1)
    stw r14, 0x48(r1)
    bne lbl_fn_803B4C38_00000A00
    addi r4, r1, 0x4e
    b lbl_fn_803B4C38_00000A04
lbl_fn_803B4C38_00000A00:
    lwz r4, 0x54(r1)
lbl_fn_803B4C38_00000A04:
    lfs f1, lbl_80885C3C
    li r5, 0x1
    lfs f2, lbl_80885C38
    li r6, 0x1
    lfs f3, lbl_80885C20
    li r7, 0x0
    bl fn_800E0000
    lwz r0, 0x44(r1)
    lis r3, __files@ha
    lis r4, lbl_8074FD38@ha
    stw r0, 0x80(r15)
    lbz r22, 0x1c(r1)
    addi r20, r1, 0x34
    addi r24, r4, lbl_8074FD38@l
    addi r25, r3, __files@l
    addi r26, r1, 0x48
    addi r18, r1, 0x58
    li r30, 0x0
    lis r28, 0xcccd
    la r21, lbl_8087DD88
    lis r23, 0x1555
    lis r27, 0x71c
    lis r29, 0xe39
    lis r14, lbl_807799A0@ha
    lis r31, 0x2aab
    b lbl_fn_803B4C38_00000E64
lbl_fn_803B4C38_00000A6C:
    stw r30, 0x34(r1)
    mr r3, r21
    stw r30, 0x38(r1)
    stw r30, 0x3c(r1)
    bl fn_80686A48
    mr r16, r3
    mr r3, r20
    mr r4, r16
    bl fn_800DBF68
    slwi r0, r16, 1
    stb r22, 0x18(r1)
    mr r3, r20
    mr r6, r21
    add r7, r21, r0
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x44(r1)
    lwz r3, 0x48(r1)
    cmplw r0, r3
    bge lbl_fn_803B4C38_00000B4C
    mulli r0, r0, 0xc
    lwz r3, 0x40(r1)
    add. r16, r3, r0
    beq lbl_fn_803B4C38_00000B3C
    lwz r3, 0x34(r1)
    srwi. r0, r3, 31
    bne lbl_fn_803B4C38_00000AF8
    lwz r0, 0x38(r1)
    stw r3, 0x0(r16)
    stw r0, 0x4(r16)
    lwz r0, 0x3c(r1)
    stw r0, 0x8(r16)
    b lbl_fn_803B4C38_00000B3C
lbl_fn_803B4C38_00000AF8:
    stw r30, 0x0(r16)
    mr r3, r16
    stw r30, 0x4(r16)
    stw r30, 0x8(r16)
    lwz r4, 0x38(r1)
    bl fn_800DBF68
    lwz r0, 0x38(r1)
    mr r3, r16
    lbz r4, 0xc(r1)
    addi r8, r1, 0x8
    stb r4, 0x8(r1)
    slwi r0, r0, 1
    lwz r6, 0x3c(r1)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_803B4C38_00000B3C:
    lwz r3, 0x44(r1)
    addi r0, r3, 0x1
    stw r0, 0x44(r1)
    b lbl_fn_803B4C38_00000E50
lbl_fn_803B4C38_00000B4C:
    addi r0, r23, 0x5555
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_803B4C38_00000B70
    addi r4, r24, 0xed
    addi r3, r25, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803B4C38_00000B70:
    lwz r3, 0x44(r1)
    addi r0, r23, 0x5555
    lwz r16, 0x48(r1)
    addi r3, r3, 0x1
    stw r30, 0x58(r1)
    subf r3, r16, r3
    subf r0, r16, r0
    cmplw r3, r0
    stw r30, 0x5c(r1)
    stw r30, 0x60(r1)
    stw r26, 0x64(r1)
    stw r30, 0x68(r1)
    stw r3, 0x30(r1)
    ble lbl_fn_803B4C38_00000BBC
    addi r4, r24, 0xed
    addi r3, r25, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803B4C38_00000BBC:
    addi r0, r27, 0x71c7
    cmplw r16, r0
    bge lbl_fn_803B4C38_00000C04
    addi r4, r16, 0x1
    subi r5, r28, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x30(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x28
    srwi r4, r4, 2
    stw r4, 0x28(r1)
    cmplw r4, r0
    bge lbl_fn_803B4C38_00000BF8
    addi r3, r1, 0x30
lbl_fn_803B4C38_00000BF8:
    lwz r0, 0x0(r3)
    add r16, r16, r0
    b lbl_fn_803B4C38_00000C40
lbl_fn_803B4C38_00000C04:
    subi r0, r29, 0x1c72
    cmplw r16, r0
    bge lbl_fn_803B4C38_00000C3C
    addi r3, r16, 0x1
    lwz r0, 0x30(r1)
    srwi r3, r3, 1
    stw r3, 0x2c(r1)
    cmplw r3, r0
    addi r3, r1, 0x2c
    bge lbl_fn_803B4C38_00000C30
    addi r3, r1, 0x30
lbl_fn_803B4C38_00000C30:
    lwz r0, 0x0(r3)
    add r16, r16, r0
    b lbl_fn_803B4C38_00000C40
lbl_fn_803B4C38_00000C3C:
    addi r16, r23, 0x5555
lbl_fn_803B4C38_00000C40:
    addi r0, r23, 0x5555
    cmplw r16, r0
    ble lbl_fn_803B4C38_00000C60
    addi r4, r24, 0xed
    addi r3, r25, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803B4C38_00000C60:
    mulli r3, r16, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r17, r3
    bne lbl_fn_803B4C38_00000C88
    addi r3, r25, 0xa0
    addi r4, r14, lbl_807799A0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803B4C38_00000C88:
    lwz r5, 0x44(r1)
    lwz r0, 0x5c(r1)
    mulli r4, r5, 0xc
    stw r16, 0x60(r1)
    stw r17, 0x58(r1)
    mulli r3, r0, 0xc
    add r0, r17, r4
    stw r5, 0x68(r1)
    add. r16, r3, r0
    beq lbl_fn_803B4C38_00000D18
    lwz r3, 0x34(r1)
    srwi. r0, r3, 31
    bne lbl_fn_803B4C38_00000CD4
    lwz r0, 0x38(r1)
    stw r3, 0x0(r16)
    stw r0, 0x4(r16)
    lwz r0, 0x3c(r1)
    stw r0, 0x8(r16)
    b lbl_fn_803B4C38_00000D18
lbl_fn_803B4C38_00000CD4:
    stw r30, 0x0(r16)
    mr r3, r16
    stw r30, 0x4(r16)
    stw r30, 0x8(r16)
    lwz r4, 0x38(r1)
    bl fn_800DBF68
    lwz r0, 0x38(r1)
    mr r3, r16
    lbz r4, 0x10(r1)
    addi r8, r1, 0x14
    stb r4, 0x14(r1)
    slwi r0, r0, 1
    lwz r6, 0x3c(r1)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_803B4C38_00000D18:
    lwz r0, 0x44(r1)
    subi r6, r31, 0x5555
    lwz r16, 0x40(r1)
    mulli r5, r0, 0xc
    lwz r3, 0x5c(r1)
    lwz r0, 0x68(r1)
    mr r4, r16
    addi r7, r3, 0x1
    lwz r3, 0x58(r1)
    add r5, r16, r5
    stw r7, 0x5c(r1)
    subf r5, r16, r5
    mulhw r5, r6, r5
    srawi r5, r5, 1
    srwi r6, r5, 31
    add r19, r5, r6
    subf r0, r19, r0
    stw r0, 0x68(r1)
    mulli r17, r19, 0xc
    mulli r0, r0, 0xc
    mr r5, r17
    add r3, r3, r0
    bl memcpy
    mr r3, r16
    mr r5, r17
    li r4, 0x0
    bl memset
    lwz r0, 0x68(r1)
    lwz r8, 0x44(r1)
    mulli r3, r0, 0xc
    lwz r0, 0x5c(r1)
    lwz r7, 0x40(r1)
    lwz r4, 0x58(r1)
    add r5, r0, r19
    add r17, r7, r3
    mulli r0, r8, 0xc
    lwz r6, 0x48(r1)
    lwz r3, 0x60(r1)
    stw r3, 0x48(r1)
    add r16, r17, r0
    stw r6, 0x60(r1)
    stw r4, 0x40(r1)
    stw r7, 0x58(r1)
    stw r5, 0x44(r1)
    stw r8, 0x5c(r1)
    b lbl_fn_803B4C38_00000DEC
lbl_fn_803B4C38_00000DD0:
    subic. r16, r16, 0xc
    beq lbl_fn_803B4C38_00000DEC
    lwz r0, 0x0(r16)
    srwi. r0, r0, 31
    beq lbl_fn_803B4C38_00000DEC
    lwz r3, 0x8(r16)
    bl dtor_80084684
lbl_fn_803B4C38_00000DEC:
    cmplw r16, r17
    bgt lbl_fn_803B4C38_00000DD0
    cmpwi r18, 0x0
    stw r30, 0x5c(r1)
    beq lbl_fn_803B4C38_00000E50
    lwz r3, 0x58(r1)
    cmpwi r3, 0x0
    beq lbl_fn_803B4C38_00000E50
    mulli r0, r30, 0xc
    stw r30, 0x5c(r1)
    li r16, 0x0
    add r17, r3, r0
    b lbl_fn_803B4C38_00000E40
lbl_fn_803B4C38_00000E20:
    subic. r17, r17, 0xc
    beq lbl_fn_803B4C38_00000E3C
    lwz r0, 0x0(r17)
    srwi. r0, r0, 31
    beq lbl_fn_803B4C38_00000E3C
    lwz r3, 0x8(r17)
    bl dtor_80084684
lbl_fn_803B4C38_00000E3C:
    subi r16, r16, 0x1
lbl_fn_803B4C38_00000E40:
    cmpwi r16, 0x0
    bne lbl_fn_803B4C38_00000E20
    lwz r3, 0x58(r1)
    bl dtor_80084684
lbl_fn_803B4C38_00000E50:
    lwz r0, 0x34(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803B4C38_00000E64
    lwz r3, 0x3c(r1)
    bl dtor_80084684
lbl_fn_803B4C38_00000E64:
    lwz r0, 0x44(r1)
    cmplwi r0, 0x4
    blt lbl_fn_803B4C38_00000A6C
    li r0, 0x2
    mr r5, r15
    li r6, 0x1
    li r7, 0x0
    li r3, 0x0
    mtctr r0
lbl_fn_803B4C38_00000E88:
    lwz r0, 0x40(r1)
    add r4, r0, r3
    lwzx r0, r3, r0
    srwi. r0, r0, 31
    bne lbl_fn_803B4C38_00000EA4
    addi r4, r4, 0x2
    b lbl_fn_803B4C38_00000EA8
lbl_fn_803B4C38_00000EA4:
    lwz r4, 0x8(r4)
lbl_fn_803B4C38_00000EA8:
    lhz r4, 0x0(r4)
    neg r0, r4
    or r0, r0, r4
    srwi. r0, r0, 31
    stw r0, 0x64(r5)
    beq lbl_fn_803B4C38_00000EC4
    li r6, 0x0
lbl_fn_803B4C38_00000EC4:
    lwz r0, 0x40(r1)
    addi r3, r3, 0xc
    add r4, r0, r3
    lwzx r0, r3, r0
    srwi. r0, r0, 31
    bne lbl_fn_803B4C38_00000EE4
    addi r4, r4, 0x2
    b lbl_fn_803B4C38_00000EE8
lbl_fn_803B4C38_00000EE4:
    lwz r4, 0x8(r4)
lbl_fn_803B4C38_00000EE8:
    lhz r4, 0x0(r4)
    neg r0, r4
    or r0, r0, r4
    srwi. r0, r0, 31
    stw r0, 0x68(r5)
    beq lbl_fn_803B4C38_00000F04
    li r6, 0x0
lbl_fn_803B4C38_00000F04:
    addi r5, r5, 0x8
    addi r7, r7, 0x1
    addi r3, r3, 0xc
    bdnz lbl_fn_803B4C38_00000E88
    cmpwi r6, 0x0
    beq lbl_fn_803B4C38_00000F24
    li r0, 0x1
    stw r0, 0x64(r15)
lbl_fn_803B4C38_00000F24:
    lwz r5, 0x40(r1)
    lis r4, lbl_8074FD38@ha
    addi r4, r4, lbl_8074FD38@l
    lwz r3, 0x50(r15)
    lwz r0, 0x0(r5)
    addi r4, r4, 0x101
    srwi. r0, r0, 31
    bne lbl_fn_803B4C38_00000F4C
    addi r5, r5, 0x2
    b lbl_fn_803B4C38_00000F50
lbl_fn_803B4C38_00000F4C:
    lwz r5, 0x8(r5)
lbl_fn_803B4C38_00000F50:
    bl fn_801F837C
    lwz r5, 0x40(r1)
    lis r4, lbl_8074FD38@ha
    addi r4, r4, lbl_8074FD38@l
    lwz r3, 0x54(r15)
    lwz r0, 0xc(r5)
    addi r4, r4, 0x101
    srwi. r0, r0, 31
    bne lbl_fn_803B4C38_00000F7C
    addi r5, r5, 0xe
    b lbl_fn_803B4C38_00000F80
lbl_fn_803B4C38_00000F7C:
    lwz r5, 0x14(r5)
lbl_fn_803B4C38_00000F80:
    bl fn_801F837C
    lwz r5, 0x40(r1)
    lis r4, lbl_8074FD38@ha
    addi r4, r4, lbl_8074FD38@l
    lwz r3, 0x58(r15)
    lwz r0, 0x18(r5)
    addi r4, r4, 0x101
    srwi. r0, r0, 31
    bne lbl_fn_803B4C38_00000FAC
    addi r5, r5, 0x1a
    b lbl_fn_803B4C38_00000FB0
lbl_fn_803B4C38_00000FAC:
    lwz r5, 0x20(r5)
lbl_fn_803B4C38_00000FB0:
    bl fn_801F837C
    lwz r5, 0x40(r1)
    lis r4, lbl_8074FD38@ha
    addi r4, r4, lbl_8074FD38@l
    lwz r3, 0x5c(r15)
    lwz r0, 0x24(r5)
    addi r4, r4, 0x101
    srwi. r0, r0, 31
    bne lbl_fn_803B4C38_00000FDC
    addi r5, r5, 0x26
    b lbl_fn_803B4C38_00000FE0
lbl_fn_803B4C38_00000FDC:
    lwz r5, 0x2c(r5)
lbl_fn_803B4C38_00000FE0:
    bl fn_801F837C
    lwz r5, 0x40(r1)
    lis r4, lbl_8074FD38@ha
    addi r4, r4, lbl_8074FD38@l
    lwz r3, 0x50(r15)
    lwz r0, 0x0(r5)
    addi r4, r4, 0x106
    srwi. r0, r0, 31
    bne lbl_fn_803B4C38_0000100C
    addi r5, r5, 0x2
    b lbl_fn_803B4C38_00001010
lbl_fn_803B4C38_0000100C:
    lwz r5, 0x8(r5)
lbl_fn_803B4C38_00001010:
    bl fn_801F837C
    lwz r5, 0x40(r1)
    lis r4, lbl_8074FD38@ha
    addi r4, r4, lbl_8074FD38@l
    lwz r3, 0x54(r15)
    lwz r0, 0xc(r5)
    addi r4, r4, 0x106
    srwi. r0, r0, 31
    bne lbl_fn_803B4C38_0000103C
    addi r5, r5, 0xe
    b lbl_fn_803B4C38_00001040
lbl_fn_803B4C38_0000103C:
    lwz r5, 0x14(r5)
lbl_fn_803B4C38_00001040:
    bl fn_801F837C
    lwz r5, 0x40(r1)
    lis r4, lbl_8074FD38@ha
    addi r4, r4, lbl_8074FD38@l
    lwz r3, 0x58(r15)
    lwz r0, 0x18(r5)
    addi r4, r4, 0x106
    srwi. r0, r0, 31
    bne lbl_fn_803B4C38_0000106C
    addi r5, r5, 0x1a
    b lbl_fn_803B4C38_00001070
lbl_fn_803B4C38_0000106C:
    lwz r5, 0x20(r5)
lbl_fn_803B4C38_00001070:
    bl fn_801F837C
    lwz r5, 0x40(r1)
    lis r4, lbl_8074FD38@ha
    addi r4, r4, lbl_8074FD38@l
    lwz r3, 0x5c(r15)
    lwz r0, 0x24(r5)
    addi r4, r4, 0x106
    srwi. r0, r0, 31
    bne lbl_fn_803B4C38_0000109C
    addi r5, r5, 0x26
    b lbl_fn_803B4C38_000010A0
lbl_fn_803B4C38_0000109C:
    lwz r5, 0x2c(r5)
lbl_fn_803B4C38_000010A0:
    bl fn_801F837C
    lis r14, lbl_8074FD38@ha
    lwz r3, 0x50(r15)
    addi r14, r14, lbl_8074FD38@l
    lfs f1, lbl_80885C20
    addi r4, r14, 0x10e
    bl fn_801F6C80
    lwz r3, 0x54(r15)
    addi r4, r14, 0x10e
    lfs f1, lbl_80885C20
    bl fn_801F6C80
    lwz r3, 0x58(r15)
    addi r4, r14, 0x10e
    lfs f1, lbl_80885C20
    bl fn_801F6C80
    lwz r3, 0x5c(r15)
    addi r4, r14, 0x10e
    lfs f1, lbl_80885C20
    bl fn_801F6C80
    lwz r3, 0x58(r15)
    addi r4, r14, 0x115
    lfs f1, lbl_80885C20
    bl fn_801F6C80
    addic. r0, r1, 0x40
    beq lbl_fn_803B4C38_0000115C
    beq lbl_fn_803B4C38_0000115C
    lwz r4, 0x40(r1)
    cmpwi r4, 0x0
    beq lbl_fn_803B4C38_0000115C
    lwz r15, 0x44(r1)
    mulli r3, r15, 0xc
    subf r0, r15, r15
    stw r0, 0x44(r1)
    add r14, r4, r3
    b lbl_fn_803B4C38_0000114C
lbl_fn_803B4C38_0000112C:
    subic. r14, r14, 0xc
    beq lbl_fn_803B4C38_00001148
    lwz r0, 0x0(r14)
    srwi. r0, r0, 31
    beq lbl_fn_803B4C38_00001148
    lwz r3, 0x8(r14)
    bl dtor_80084684
lbl_fn_803B4C38_00001148:
    subi r15, r15, 0x1
lbl_fn_803B4C38_0000114C:
    cmpwi r15, 0x0
    bne lbl_fn_803B4C38_0000112C
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_803B4C38_0000115C:
    lwz r0, 0x4c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803B4C38_00001170
    lwz r3, 0x54(r1)
    bl dtor_80084684
lbl_fn_803B4C38_00001170:
    addi r11, r1, 0xc0
    bl _restgpr_14
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_803B5470(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    beq lbl_fn_803B5470_0000125C
    lis r30, lbl_8074FD38@ha
    li r3, 0x60
    addi r5, r30, lbl_8074FD38@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_803B5470_00001254
    mr r4, r31
    bl fn_800D1D3C
    lis r3, lbl_8078B498@ha
    li r31, 0x0
    addi r3, r3, lbl_8078B498@l
    stw r3, 0x0(r29)
    lwz r4, lbl_80885C18
    mr r3, r29
    stw r31, 0x4c(r29)
    stw r31, 0x50(r29)
    stw r31, 0x58(r29)
    bl fn_801F64D0
    stw r3, 0x48(r29)
    li r4, 0x1
    stb r31, 0x4d(r3)
    lwz r3, 0x48(r29)
    bl fn_800D246C
    cmpwi r29, 0x0
    beq lbl_fn_803B5470_0000124C
    addi r5, r30, lbl_8074FD38@l
    li r3, 0x88
    mr r6, r5
    li r4, 0x1
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_803B5470_00001250
    mr r4, r29
    bl fn_803B434C
    b lbl_fn_803B5470_00001250
lbl_fn_803B5470_0000124C:
    li r3, 0x0
lbl_fn_803B5470_00001250:
    stw r3, 0x54(r29)
lbl_fn_803B5470_00001254:
    mr r3, r29
    b lbl_fn_803B5470_00001260
lbl_fn_803B5470_0000125C:
    li r3, 0x0
lbl_fn_803B5470_00001260:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803B5564(void)
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
    beq lbl_fn_803B5564_000012B8
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_803B5564_000012B8
    mr r3, r30
    bl dtor_80084684
lbl_fn_803B5564_000012B8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B55BC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_803B55BC_00001318
    lwz r3, 0x48(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r4, 0x48(r31)
    li r3, 0x1
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    b lbl_fn_803B55BC_0000131C
lbl_fn_803B55BC_00001318:
    li r3, 0x0
lbl_fn_803B55BC_0000131C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B5618(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    mr r29, r3
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    beq lbl_fn_803B5618_00001374
    cmpwi r0, 0x3
    beq lbl_fn_803B5618_00001398
    cmpwi r0, 0x2
    beq lbl_fn_803B5618_000013DC
    b lbl_fn_803B5618_00001408
lbl_fn_803B5618_00001374:
    lwz r3, 0x48(r3)
    lfs f31, 0x50(r3)
    bl fn_801F6C2C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_803B5618_00001408
    li r0, 0x2
    stw r0, 0x50(r29)
    b lbl_fn_803B5618_00001408
lbl_fn_803B5618_00001398:
    lwz r4, 0x48(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803B5618_000013C0
    lfs f3, 0x50(r4)
    lfs f0, lbl_80885C34
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_803B5618_00001408
lbl_fn_803B5618_000013C0:
    li r0, 0x0
    stw r0, 0x50(r3)
    lwz r3, 0x48(r3)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    b lbl_fn_803B5618_00001408
lbl_fn_803B5618_000013DC:
    lwz r0, 0x58(r3)
    cmpwi r0, 0x0
    ble lbl_fn_803B5618_00001408
    subic. r0, r0, 0x1
    stw r0, 0x58(r3)
    bne lbl_fn_803B5618_00001408
    li r0, 0x3
    stw r0, 0x50(r3)
    lwz r3, 0x48(r3)
    lfs f0, lbl_80885C40
    stfs f0, 0x54(r3)
lbl_fn_803B5618_00001408:
    lwz r4, lbl_8087F0A8
    addi r3, r1, 0x28
    li r5, 0x0
    addi r4, r4, 0x48c
    bl fn_80124C6C
    addi r30, r1, 0x28
    lis r31, lbl_8074FD38@ha
    addi r5, r1, 0x18
    psq_l f1, 0x0(r30), 0, 0
    psq_l f2, 0x8(r30), 0, 0
    addi r31, r31, lbl_8074FD38@l
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r31, 0x11f
    psq_st f2, 0x8(r5), 0, 0
    lwz r3, 0x48(r29)
    bl fn_801F7590
    addi r5, r1, 0x8
    psq_l f1, 0x0(r30), 0, 0
    psq_l f2, 0x8(r30), 0, 0
    addi r4, r31, 0x125
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    lwz r3, 0x48(r29)
    bl fn_801F7590
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_803B5774(void)
{
    nofralloc
    li r0, 0x1
    stw r4, 0x4c(r3)
    lwz r4, 0x48(r3)
    stw r0, 0x50(r3)
    lfs f0, lbl_80885C20
    stfs f0, 0x50(r4)
    lfs f0, lbl_80885C44
    lwz r4, 0x48(r3)
    stfs f0, 0x54(r4)
    lwz r4, 0x48(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    stw r5, 0x58(r3)
    b fn_803B5974
}

asm void fn_803B57B0(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_803B57B0_000014E8
    li r0, 0x3
    stw r0, 0x50(r3)
    lwz r3, 0x48(r3)
    lfs f0, lbl_80885C40
    stfs f0, 0x54(r3)
    blr
lbl_fn_803B57B0_000014E8:
    li r0, 0x0
    stw r0, 0x50(r3)
    lwz r3, 0x48(r3)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blr
}

asm void fn_803B57EC(void)
{
    nofralloc
    lwz r5, 0x54(r3)
    li r4, 0x4
    li r0, 0x0
    li r6, 0x1
    stw r4, 0x78(r5)
    stw r0, 0x74(r5)
    lwz r0, 0x50(r3)
    cmpwi r0, 0x2
    beq lbl_fn_803B57EC_00001534
    cmpwi r0, 0x4
    beq lbl_fn_803B57EC_00001534
    li r6, 0x0
lbl_fn_803B57EC_00001534:
    cmpwi r6, 0x0
    beqlr
    li r0, 0x2
    stw r0, 0x50(r3)
    blr
}

asm void fn_803B5830(void)
{
    nofralloc
    stw r4, 0x4c(r3)
    stw r5, 0x58(r3)
    b fn_803B5974
}

asm void fn_803B583C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r5, lbl_8087F430
    cmpwi r5, 0x0
    beq lbl_fn_803B583C_000015DC
    lwz r3, 0x10d8(r5)
    cmpwi r3, 0x0
    beq lbl_fn_803B583C_000015DC
    bl fn_803CC6B4
    cmpwi r3, 0x0
    beq lbl_fn_803B583C_000015DC
    lwz r5, 0x54(r31)
    li r4, 0x1
    li r0, 0x0
    stw r3, 0x48(r5)
    mr r3, r5
    stw r4, 0x78(r5)
    stw r0, 0x74(r5)
    stw r0, 0x60(r5)
    bl fn_803B4C38
    lwz r3, 0x50(r31)
    li r0, 0x1
    cmpwi r3, 0x2
    beq lbl_fn_803B583C_000015CC
    cmpwi r3, 0x4
    beq lbl_fn_803B583C_000015CC
    li r0, 0x0
lbl_fn_803B583C_000015CC:
    cmpwi r0, 0x0
    beq lbl_fn_803B583C_000015DC
    li r0, 0x4
    stw r0, 0x50(r31)
lbl_fn_803B583C_000015DC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B58D8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x1
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r6, 0x54(r3)
    stw r4, 0x48(r6)
    mr r3, r6
    stw r5, 0x78(r6)
    stw r0, 0x74(r6)
    stw r0, 0x60(r6)
    bl fn_803B4C38
    lwz r3, 0x50(r31)
    li r0, 0x1
    cmpwi r3, 0x2
    beq lbl_fn_803B58D8_00001644
    cmpwi r3, 0x4
    beq lbl_fn_803B58D8_00001644
    li r0, 0x0
lbl_fn_803B58D8_00001644:
    cmpwi r0, 0x0
    beq lbl_fn_803B58D8_00001654
    li r0, 0x4
    stw r0, 0x50(r31)
lbl_fn_803B58D8_00001654:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B5950(void)
{
    nofralloc
    lwz r0, 0x50(r3)
    cmpwi r0, 0x2
    bne lbl_fn_803B5950_00001684
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    b fn_800A555C
lbl_fn_803B5950_00001684:
    li r3, 0x0
    blr
}

asm void fn_803B5974(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    lis r4, lbl_8074FD38@ha
    stw r0, 0xc4(r1)
    addi r4, r4, lbl_8074FD38@l
    addi r4, r4, 0x12f
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    lfs f31, lbl_80885C48
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    lfs f30, lbl_80885C4C
    stw r31, 0x9c(r1)
    stw r30, 0x98(r1)
    stw r29, 0x94(r1)
    mr r29, r3
    stw r28, 0x90(r1)
    lwz r3, 0x48(r3)
    bl fn_801F6C38
    cmpwi r3, 0x0
    beq lbl_fn_803B5974_000016F0
    li r4, 0x0
    addi r3, r3, 0x4
    bl fn_801F0544
    fmr f31, f1
lbl_fn_803B5974_000016F0:
    lis r4, lbl_8074FD38@ha
    lwz r3, 0x48(r29)
    addi r4, r4, lbl_8074FD38@l
    addi r4, r4, 0x139
    bl fn_801F6C38
    cmpwi r3, 0x0
    beq lbl_fn_803B5974_0000171C
    li r4, 0x0
    addi r3, r3, 0x4
    bl fn_801F0544
    fmr f30, f1
lbl_fn_803B5974_0000171C:
    lwz r3, 0x4c(r29)
    li r0, 0x0
    addi r31, r1, 0x84
    lwz r30, 0x8(r3)
    stw r0, 0x84(r1)
    mr r3, r30
    stw r0, 0x88(r1)
    stw r0, 0x8c(r1)
    bl fn_80686A48
    mr r28, r3
    mr r3, r31
    mr r4, r28
    bl fn_800DBF68
    lbz r3, 0x2c(r1)
    slwi r0, r28, 1
    stb r3, 0x28(r1)
    mr r3, r31
    mr r6, r30
    add r7, r30, r0
    addi r8, r1, 0x28
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    mr r3, r31
    bl fn_803B3D2C
    lwz r0, 0x84(r1)
    addi r3, r1, 0x54
    srwi. r0, r0, 31
    bne lbl_fn_803B5974_00001798
    addi r4, r1, 0x86
    b lbl_fn_803B5974_0000179C
lbl_fn_803B5974_00001798:
    lwz r4, 0x8c(r1)
lbl_fn_803B5974_0000179C:
    fmr f1, f31
    lfs f3, lbl_80885C20
    fmr f2, f30
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    bl fn_800DFB40
    lwz r0, 0x84(r1)
    srwi. r3, r0, 31
    bne lbl_fn_803B5974_000017EC
    lwz r4, 0x54(r1)
    srwi. r0, r4, 31
    bne lbl_fn_803B5974_000017EC
    lwz r3, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r4, 0x84(r1)
    stw r3, 0x88(r1)
    stw r0, 0x8c(r1)
    b lbl_fn_803B5974_00001848
lbl_fn_803B5974_000017EC:
    cmpwi r3, 0x0
    beq lbl_fn_803B5974_000017FC
    lwz r5, 0x88(r1)
    b lbl_fn_803B5974_00001804
lbl_fn_803B5974_000017FC:
    lbz r0, 0x84(r1)
    clrlwi r5, r0, 25
lbl_fn_803B5974_00001804:
    lwz r0, 0x54(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803B5974_00001820
    lbz r0, 0x54(r1)
    addi r6, r1, 0x56
    clrlwi r0, r0, 25
    b lbl_fn_803B5974_00001828
lbl_fn_803B5974_00001820:
    lwz r6, 0x5c(r1)
    lwz r0, 0x58(r1)
lbl_fn_803B5974_00001828:
    lbz r3, 0x24(r1)
    slwi r0, r0, 1
    stb r3, 0x20(r1)
    addi r3, r1, 0x84
    add r7, r6, r0
    addi r8, r1, 0x20
    li r4, 0x0
    bl fn_8006F72C
lbl_fn_803B5974_00001848:
    lwz r0, 0x54(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803B5974_0000185C
    lwz r3, 0x5c(r1)
    bl dtor_80084684
lbl_fn_803B5974_0000185C:
    lwz r0, 0x84(r1)
    li r3, 0x0
    stw r3, 0x78(r1)
    srwi. r0, r0, 31
    stw r3, 0x7c(r1)
    stw r3, 0x80(r1)
    stw r3, 0x6c(r1)
    stw r3, 0x70(r1)
    stw r3, 0x74(r1)
    stw r3, 0x60(r1)
    stw r3, 0x64(r1)
    stw r3, 0x68(r1)
    bne lbl_fn_803B5974_000018A0
    lbz r0, 0x84(r1)
    addi r5, r1, 0x86
    clrlwi r0, r0, 25
    b lbl_fn_803B5974_000018A8
lbl_fn_803B5974_000018A0:
    lwz r5, 0x8c(r1)
    lwz r0, 0x88(r1)
lbl_fn_803B5974_000018A8:
    cmpwi r0, 0x0
    beq lbl_fn_803B5974_000018FC
    slwi r0, r0, 1
    mr r3, r5
    add r4, r5, r0
    addi r0, r4, 0x1
    subf r0, r5, r0
    srwi r0, r0, 1
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_803B5974_000018FC
lbl_fn_803B5974_000018D4:
    lhz r0, 0x0(r3)
    cmplwi r0, 0xa
    bne lbl_fn_803B5974_000018F4
    subf r3, r5, r3
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r31, r0, 1
    b lbl_fn_803B5974_00001900
lbl_fn_803B5974_000018F4:
    addi r3, r3, 0x2
    bdnz lbl_fn_803B5974_000018D4
lbl_fn_803B5974_000018FC:
    li r31, -0x1
lbl_fn_803B5974_00001900:
    mr r6, r31
    addi r3, r1, 0x48
    addi r4, r1, 0x84
    li r5, 0x0
    bl fn_800E0908
    lwz r0, 0x78(r1)
    srwi. r3, r0, 31
    bne lbl_fn_803B5974_00001944
    lwz r4, 0x48(r1)
    srwi. r0, r4, 31
    bne lbl_fn_803B5974_00001944
    lwz r3, 0x4c(r1)
    lwz r0, 0x50(r1)
    stw r4, 0x78(r1)
    stw r3, 0x7c(r1)
    stw r0, 0x80(r1)
    b lbl_fn_803B5974_000019A0
lbl_fn_803B5974_00001944:
    cmpwi r3, 0x0
    beq lbl_fn_803B5974_00001954
    lwz r5, 0x7c(r1)
    b lbl_fn_803B5974_0000195C
lbl_fn_803B5974_00001954:
    lbz r0, 0x78(r1)
    clrlwi r5, r0, 25
lbl_fn_803B5974_0000195C:
    lwz r0, 0x48(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803B5974_00001978
    lbz r0, 0x48(r1)
    addi r6, r1, 0x4a
    clrlwi r0, r0, 25
    b lbl_fn_803B5974_00001980
lbl_fn_803B5974_00001978:
    lwz r6, 0x50(r1)
    lwz r0, 0x4c(r1)
lbl_fn_803B5974_00001980:
    lbz r3, 0x1c(r1)
    slwi r0, r0, 1
    stb r3, 0x18(r1)
    addi r3, r1, 0x78
    add r7, r6, r0
    addi r8, r1, 0x18
    li r4, 0x0
    bl fn_8006F72C
lbl_fn_803B5974_000019A0:
    lwz r0, 0x48(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803B5974_000019B4
    lwz r3, 0x50(r1)
    bl dtor_80084684
lbl_fn_803B5974_000019B4:
    addis r0, r31, 0x1
    cmplwi r0, 0xffff
    beq lbl_fn_803B5974_00001C3C
    lwz r0, 0x84(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803B5974_000019DC
    lbz r0, 0x84(r1)
    addi r5, r1, 0x86
    clrlwi r3, r0, 25
    b lbl_fn_803B5974_000019E4
lbl_fn_803B5974_000019DC:
    lwz r5, 0x8c(r1)
    lwz r3, 0x88(r1)
lbl_fn_803B5974_000019E4:
    addi r0, r31, 0x1
    cmplw r0, r3
    bge lbl_fn_803B5974_00001A40
    slwi r3, r3, 1
    slwi r0, r0, 1
    add r4, r5, r3
    add r3, r5, r0
    addi r0, r4, 0x1
    subf r0, r3, r0
    srwi r0, r0, 1
    mtctr r0
    cmplw r3, r4
    bge lbl_fn_803B5974_00001A40
lbl_fn_803B5974_00001A18:
    lhz r0, 0x0(r3)
    cmplwi r0, 0xa
    bne lbl_fn_803B5974_00001A38
    subf r3, r5, r3
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r30, r0, 1
    b lbl_fn_803B5974_00001A44
lbl_fn_803B5974_00001A38:
    addi r3, r3, 0x2
    bdnz lbl_fn_803B5974_00001A18
lbl_fn_803B5974_00001A40:
    li r30, -0x1
lbl_fn_803B5974_00001A44:
    addi r5, r31, 0x1
    addi r3, r1, 0x3c
    addi r4, r1, 0x84
    subf r6, r5, r30
    bl fn_800E0908
    lwz r0, 0x6c(r1)
    srwi. r3, r0, 31
    bne lbl_fn_803B5974_00001A88
    lwz r4, 0x3c(r1)
    srwi. r0, r4, 31
    bne lbl_fn_803B5974_00001A88
    lwz r3, 0x40(r1)
    lwz r0, 0x44(r1)
    stw r4, 0x6c(r1)
    stw r3, 0x70(r1)
    stw r0, 0x74(r1)
    b lbl_fn_803B5974_00001AE4
lbl_fn_803B5974_00001A88:
    cmpwi r3, 0x0
    beq lbl_fn_803B5974_00001A98
    lwz r5, 0x70(r1)
    b lbl_fn_803B5974_00001AA0
lbl_fn_803B5974_00001A98:
    lbz r0, 0x6c(r1)
    clrlwi r5, r0, 25
lbl_fn_803B5974_00001AA0:
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803B5974_00001ABC
    lbz r0, 0x3c(r1)
    addi r6, r1, 0x3e
    clrlwi r0, r0, 25
    b lbl_fn_803B5974_00001AC4
lbl_fn_803B5974_00001ABC:
    lwz r6, 0x44(r1)
    lwz r0, 0x40(r1)
lbl_fn_803B5974_00001AC4:
    lbz r3, 0x14(r1)
    slwi r0, r0, 1
    stb r3, 0x10(r1)
    addi r3, r1, 0x6c
    add r7, r6, r0
    addi r8, r1, 0x10
    li r4, 0x0
    bl fn_8006F72C
lbl_fn_803B5974_00001AE4:
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803B5974_00001AF8
    lwz r3, 0x44(r1)
    bl dtor_80084684
lbl_fn_803B5974_00001AF8:
    addis r0, r30, 0x1
    cmplwi r0, 0xffff
    beq lbl_fn_803B5974_00001C3C
    lwz r0, 0x84(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803B5974_00001B20
    lbz r0, 0x84(r1)
    addi r5, r1, 0x86
    clrlwi r3, r0, 25
    b lbl_fn_803B5974_00001B28
lbl_fn_803B5974_00001B20:
    lwz r5, 0x8c(r1)
    lwz r3, 0x88(r1)
lbl_fn_803B5974_00001B28:
    addi r0, r30, 0x1
    cmplw r0, r3
    bge lbl_fn_803B5974_00001B84
    slwi r3, r3, 1
    slwi r0, r0, 1
    add r4, r5, r3
    add r3, r5, r0
    addi r0, r4, 0x1
    subf r0, r3, r0
    srwi r0, r0, 1
    mtctr r0
    cmplw r3, r4
    bge lbl_fn_803B5974_00001B84
lbl_fn_803B5974_00001B5C:
    lhz r0, 0x0(r3)
    cmplwi r0, 0xa
    bne lbl_fn_803B5974_00001B7C
    subf r3, r5, r3
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    b lbl_fn_803B5974_00001B88
lbl_fn_803B5974_00001B7C:
    addi r3, r3, 0x2
    bdnz lbl_fn_803B5974_00001B5C
lbl_fn_803B5974_00001B84:
    li r0, -0x1
lbl_fn_803B5974_00001B88:
    addi r5, r30, 0x1
    addi r3, r1, 0x30
    addi r4, r1, 0x84
    subf r6, r5, r0
    bl fn_800E0908
    lwz r0, 0x60(r1)
    srwi. r3, r0, 31
    bne lbl_fn_803B5974_00001BCC
    lwz r4, 0x30(r1)
    srwi. r0, r4, 31
    bne lbl_fn_803B5974_00001BCC
    lwz r3, 0x34(r1)
    lwz r0, 0x38(r1)
    stw r4, 0x60(r1)
    stw r3, 0x64(r1)
    stw r0, 0x68(r1)
    b lbl_fn_803B5974_00001C28
lbl_fn_803B5974_00001BCC:
    cmpwi r3, 0x0
    beq lbl_fn_803B5974_00001BDC
    lwz r5, 0x64(r1)
    b lbl_fn_803B5974_00001BE4
lbl_fn_803B5974_00001BDC:
    lbz r0, 0x60(r1)
    clrlwi r5, r0, 25
lbl_fn_803B5974_00001BE4:
    lwz r0, 0x30(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803B5974_00001C00
    lbz r0, 0x30(r1)
    addi r6, r1, 0x32
    clrlwi r0, r0, 25
    b lbl_fn_803B5974_00001C08
lbl_fn_803B5974_00001C00:
    lwz r6, 0x38(r1)
    lwz r0, 0x34(r1)
lbl_fn_803B5974_00001C08:
    lbz r3, 0xc(r1)
    slwi r0, r0, 1
    stb r3, 0x8(r1)
    addi r3, r1, 0x60
    add r7, r6, r0
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_8006F72C
lbl_fn_803B5974_00001C28:
    lwz r0, 0x30(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803B5974_00001C3C
    lwz r3, 0x38(r1)
    bl dtor_80084684
lbl_fn_803B5974_00001C3C:
    lwz r3, 0x4c(r29)
    lwz r3, 0xc(r3)
    bl fn_8020924C
    lis r30, lbl_8074FD38@ha
    mr r31, r3
    addi r30, r30, lbl_8074FD38@l
    lwz r3, 0x48(r29)
    lfs f1, lbl_80885C34
    addi r4, r30, 0x147
    bl fn_801F6C80
    cmpwi r31, 0x0
    beq lbl_fn_803B5974_00001D1C
    lwz r3, 0x4c(r29)
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B5974_00001D1C
    lwz r3, 0x48(r29)
    addi r4, r30, 0x14f
    lfs f1, lbl_80885C34
    bl fn_801F6C80
    lwz r3, 0x48(r29)
    addi r4, r30, 0x158
    lwz r5, 0x4(r31)
    bl fn_801F837C
    lwz r0, 0x78(r1)
    addi r4, r30, 0x161
    lwz r3, 0x48(r29)
    srwi. r0, r0, 31
    bne lbl_fn_803B5974_00001CB8
    addi r5, r1, 0x7a
    b lbl_fn_803B5974_00001CBC
lbl_fn_803B5974_00001CB8:
    lwz r5, 0x80(r1)
lbl_fn_803B5974_00001CBC:
    bl fn_801F837C
    lwz r0, 0x6c(r1)
    lis r4, lbl_8074FD38@ha
    addi r4, r4, lbl_8074FD38@l
    lwz r3, 0x48(r29)
    srwi. r0, r0, 31
    addi r4, r4, 0x16e
    bne lbl_fn_803B5974_00001CE4
    addi r5, r1, 0x6e
    b lbl_fn_803B5974_00001CE8
lbl_fn_803B5974_00001CE4:
    lwz r5, 0x74(r1)
lbl_fn_803B5974_00001CE8:
    bl fn_801F837C
    lwz r0, 0x60(r1)
    lis r4, lbl_8074FD38@ha
    addi r4, r4, lbl_8074FD38@l
    lwz r3, 0x48(r29)
    srwi. r0, r0, 31
    addi r4, r4, 0x17b
    bne lbl_fn_803B5974_00001D10
    addi r5, r1, 0x62
    b lbl_fn_803B5974_00001D14
lbl_fn_803B5974_00001D10:
    lwz r5, 0x68(r1)
lbl_fn_803B5974_00001D14:
    bl fn_801F837C
    b lbl_fn_803B5974_00001DC4
lbl_fn_803B5974_00001D1C:
    lis r30, lbl_8074FD38@ha
    lwz r3, 0x48(r29)
    addi r30, r30, lbl_8074FD38@l
    lfs f1, lbl_80885C20
    addi r4, r30, 0x14f
    bl fn_801F6C80
    la r5, lbl_8087DD88
    lwz r3, 0x48(r29)
    addi r4, r30, 0x158
    addi r5, r5, 0x4
    bl fn_801F837C
    lwz r0, 0x78(r1)
    addi r4, r30, 0x188
    lwz r3, 0x48(r29)
    srwi. r0, r0, 31
    bne lbl_fn_803B5974_00001D64
    addi r5, r1, 0x7a
    b lbl_fn_803B5974_00001D68
lbl_fn_803B5974_00001D64:
    lwz r5, 0x80(r1)
lbl_fn_803B5974_00001D68:
    bl fn_801F837C
    lwz r0, 0x6c(r1)
    lis r4, lbl_8074FD38@ha
    addi r4, r4, lbl_8074FD38@l
    lwz r3, 0x48(r29)
    srwi. r0, r0, 31
    addi r4, r4, 0x196
    bne lbl_fn_803B5974_00001D90
    addi r5, r1, 0x6e
    b lbl_fn_803B5974_00001D94
lbl_fn_803B5974_00001D90:
    lwz r5, 0x74(r1)
lbl_fn_803B5974_00001D94:
    bl fn_801F837C
    lwz r0, 0x60(r1)
    lis r4, lbl_8074FD38@ha
    addi r4, r4, lbl_8074FD38@l
    lwz r3, 0x48(r29)
    srwi. r0, r0, 31
    addi r4, r4, 0x1a4
    bne lbl_fn_803B5974_00001DBC
    addi r5, r1, 0x62
    b lbl_fn_803B5974_00001DC0
lbl_fn_803B5974_00001DBC:
    lwz r5, 0x68(r1)
lbl_fn_803B5974_00001DC0:
    bl fn_801F837C
lbl_fn_803B5974_00001DC4:
    lwz r0, 0x60(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803B5974_00001DD8
    lwz r3, 0x68(r1)
    bl dtor_80084684
lbl_fn_803B5974_00001DD8:
    lwz r0, 0x6c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803B5974_00001DEC
    lwz r3, 0x74(r1)
    bl dtor_80084684
lbl_fn_803B5974_00001DEC:
    lwz r0, 0x78(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803B5974_00001E00
    lwz r3, 0x80(r1)
    bl dtor_80084684
lbl_fn_803B5974_00001E00:
    lwz r0, 0x84(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803B5974_00001E14
    lwz r3, 0x8c(r1)
    bl dtor_80084684
lbl_fn_803B5974_00001E14:
    lwz r0, 0xc4(r1)
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    lwz r28, 0x90(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}
