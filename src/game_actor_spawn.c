#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_21(void);
extern void _restgpr_25(void);
extern void _savegpr_21(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_80060D58(void);
extern void fn_8006F72C(void);
extern void fn_8006FA4C(void);
extern void fn_80084320(void);
extern void fn_800C31F4(void);
extern void fn_800C7F08(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800D5908(void);
extern void fn_800DBF68(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_80119030(void);
extern void fn_8011B018(void);
extern void fn_8011B8D4(void);
extern void fn_801F3E20(void);
extern void fn_801F3FF8(void);
extern void fn_801F64D0(void);
extern void fn_801FECE0(void);
extern void fn_8021771C(void);
extern void fn_80370174(void);
extern void fn_803B27F8(void);
extern void fn_803B7944(void);
extern void fn_803B8758(void);
extern void fn_803B87A8(void);
extern void fn_803BEAB4(void);
extern void fn_80470364(void);
extern void fn_80470528(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_804A3AF0(void);
extern void fn_804A3B60(void);
extern void fn_80682428(void);
extern void fn_80686A48(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern void fn_80695A50(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807368F8[];
extern u8 lbl_807369AC[];
extern u8 lbl_807369C0[];
extern u8 lbl_807369E0[];
extern u8 lbl_80736AA8[];
extern u8 lbl_80736B10[];
extern u8 lbl_80779FA0[];
extern u8 lbl_80779FE8[];
extern u8 lbl_8077A030[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C7898[];
extern u8 lbl_807C78E4[];
extern u8 lbl_807C78F0[];

/* Small data declarations */
extern u32 lbl_8087D988;
extern u32 lbl_8087D990;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F068;
extern u32 lbl_8087F06C;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F138;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F430;
extern u32 lbl_808813D0;
extern u32 lbl_8088171C;
extern u32 lbl_80881720;
extern u32 lbl_80881724;
extern u32 lbl_80881728;
extern u32 lbl_8088172C;
extern u32 lbl_80881730;
extern u32 lbl_80881734;
extern u32 lbl_80881738;
extern u32 lbl_8088173C;
extern u32 lbl_80881740;
extern u32 lbl_80881748;
extern u32 lbl_8088174C;
extern u32 lbl_80881750;
extern u32 lbl_80881754;

/* Function declarations */
void fn_80116B98(void);
void fn_80116BA4(void);
void fn_80116BAC(void);
void fn_80116BB4(void);
void fn_80116BB8(void);
void fn_80116BC8(void);
void fn_80116BD4(void);
void fn_80116E64(void);
void fn_80116E6C(void);
void fn_80116E74(void);
void fn_80116E7C(void);
void fn_80116EA8(void);
void fn_80116EB0(void);
void fn_80116EB4(void);
void fn_80116EB8(void);
void fn_80116FC0(void);
void fn_801170C8(void);
void fn_80117200(void);
void fn_80117214(void);
void fn_80117228(void);
void fn_8011728C(void);
void fn_801173A8(void);
void fn_8011745C(void);
void fn_801175EC(void);
void fn_8011770C(void);
void fn_801177E8(void);
void fn_801178F4(void);
void fn_80117914(void);
void fn_80117A48(void);
void fn_80117B54(void);
void fn_80117E34(void);
void fn_80117E88(void);
void fn_80117EF4(void);
void fn_80117FE4(void);

asm void fn_80116B98(void)
{
    nofralloc
    lwz r0, 0x98(r3)
    extrwi r3, r0, 1, 13
    blr
}

asm void fn_80116BA4(void)
{
    nofralloc
    lfs f1, 0x50(r3)
    blr
}

asm void fn_80116BAC(void)
{
    nofralloc
    addi r3, r3, 0x48c
    blr
}

asm void fn_80116BB4(void)
{
    nofralloc
    blr
}

asm void fn_80116BB8(void)
{
    nofralloc
    frsp f0, f1
    stfs f1, 0x1fc(r3)
    stfs f0, 0x50(r3)
    blr
}

asm void fn_80116BC8(void)
{
    nofralloc
    lwz r0, 0x1f8(r3)
    extrwi r3, r0, 1, 1
    blr
}

asm void fn_80116BD4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    stfd f29, 0x20(r1)
    psq_st f29, 0x28(r1), 0, 0
    stfd f28, 0x10(r1)
    psq_st f28, 0x18(r1), 0, 0
    psq_l f1, 0x8(r4), 0, 0
    lfs f2, 0x10(r4)
    psq_st f1, 0x10c(r3), 0, 0
    psq_l f1, 0x14(r4), 0, 0
    stfs f2, 0x114(r3)
    lfs f2, 0x1c(r4)
    psq_st f1, 0x118(r3), 0, 0
    psq_l f1, 0x20(r4), 0, 0
    stfs f2, 0x120(r3)
    lfs f2, 0x28(r4)
    psq_st f1, 0x124(r3), 0, 0
    psq_l f1, 0x2c(r4), 0, 0
    stfs f2, 0x12c(r3)
    lfs f2, 0x34(r4)
    psq_st f1, 0x130(r3), 0, 0
    psq_l f1, 0x58(r4), 0, 0
    stfs f2, 0x138(r3)
    psq_l f2, 0x60(r4), 0, 0
    psq_l f3, 0x68(r4), 0, 0
    psq_l f4, 0x70(r4), 0, 0
    psq_l f5, 0x78(r4), 0, 0
    psq_l f6, 0x80(r4), 0, 0
    psq_st f1, 0x15c(r3), 0, 0
    lwz r5, 0x0(r4)
    psq_st f2, 0x164(r3), 0, 0
    lwz r0, 0x4(r4)
    psq_st f3, 0x16c(r3), 0, 0
    lfs f28, 0x38(r4)
    psq_st f4, 0x174(r3), 0, 0
    lfs f29, 0x3c(r4)
    psq_st f5, 0x17c(r3), 0, 0
    lfs f30, 0x40(r4)
    psq_st f6, 0x184(r3), 0, 0
    lfs f31, 0x44(r4)
    lfs f13, 0x48(r4)
    lfs f12, 0x4c(r4)
    lfs f11, 0x50(r4)
    lfs f10, 0x54(r4)
    psq_l f1, 0x88(r4), 0, 0
    psq_l f2, 0x90(r4), 0, 0
    psq_l f3, 0x98(r4), 0, 0
    psq_l f4, 0xa0(r4), 0, 0
    psq_l f5, 0xa8(r4), 0, 0
    psq_l f6, 0xb0(r4), 0, 0
    psq_l f7, 0xb8(r4), 0, 0
    psq_l f8, 0xc0(r4), 0, 0
    lfs f9, 0xc8(r4)
    lfs f0, 0xcc(r4)
    stw r5, 0x104(r3)
    stw r0, 0x108(r3)
    stfs f28, 0x13c(r3)
    stfs f29, 0x140(r3)
    stfs f30, 0x144(r3)
    stfs f31, 0x148(r3)
    stfs f13, 0x14c(r3)
    stfs f12, 0x150(r3)
    stfs f11, 0x154(r3)
    stfs f10, 0x158(r3)
    psq_st f1, 0x18c(r3), 0, 0
    psq_st f2, 0x194(r3), 0, 0
    psq_st f3, 0x19c(r3), 0, 0
    psq_st f4, 0x1a4(r3), 0, 0
    psq_st f5, 0x1ac(r3), 0, 0
    psq_st f6, 0x1b4(r3), 0, 0
    psq_st f7, 0x1bc(r3), 0, 0
    psq_st f8, 0x1c4(r3), 0, 0
    stfs f9, 0x1cc(r3)
    stfs f0, 0x1d0(r3)
    psq_l f1, 0xd0(r4), 0, 0
    addi r8, r3, 0x204
    psq_l f2, 0xd8(r4), 0, 0
    addi r7, r4, 0x17c
    psq_st f1, 0x1d4(r3), 0, 0
    addi r5, r8, 0x94
    psq_l f1, 0x100(r4), 0, 0
    addi r6, r4, 0x194
    psq_st f2, 0x1dc(r3), 0, 0
    addi r0, r8, 0xf4
    psq_l f2, 0x108(r4), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x13c(r4), 0, 0
    psq_st f2, 0x8(r8), 0, 0
    lfs f2, 0x144(r4)
    psq_st f1, 0x3c(r8), 0, 0
    psq_l f1, 0x14c(r4), 0, 0
    stfs f2, 0x248(r3)
    lfs f2, 0x154(r4)
    psq_st f1, 0x4c(r8), 0, 0
    psq_l f1, 0x15c(r4), 0, 0
    stfs f2, 0x258(r3)
    lfs f2, 0x164(r4)
    psq_st f1, 0x5c(r8), 0, 0
    psq_l f1, 0x16c(r4), 0, 0
    stfs f2, 0x268(r3)
    lfs f2, 0x174(r4)
    psq_st f1, 0x6c(r8), 0, 0
    psq_l f3, 0xe0(r4), 0, 0
    stfs f2, 0x278(r3)
    psq_l f4, 0xe8(r4), 0, 0
    psq_l f5, 0xf0(r4), 0, 0
    psq_l f6, 0xf8(r4), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    lfs f2, 0x184(r4)
    psq_st f3, 0x1e4(r3), 0, 0
    psq_l f3, 0x110(r4), 0, 0
    psq_st f4, 0x1ec(r3), 0, 0
    psq_l f4, 0x118(r4), 0, 0
    psq_st f5, 0x1f4(r3), 0, 0
    psq_l f5, 0x120(r4), 0, 0
    psq_st f6, 0x1fc(r3), 0, 0
    psq_l f6, 0x128(r4), 0, 0
    psq_st f1, 0x7c(r8), 0, 0
    lwz r3, 0x130(r4)
    stfs f2, 0x84(r8)
    lfs f13, 0x134(r4)
    lfs f12, 0x138(r4)
    lfs f11, 0x148(r4)
    lfs f10, 0x158(r4)
    lfs f9, 0x168(r4)
    lfs f0, 0x178(r4)
    psq_l f1, 0xc(r7), 0, 0
    lfs f2, 0x190(r4)
    psq_st f3, 0x10(r8), 0, 0
    psq_st f4, 0x18(r8), 0, 0
    psq_st f5, 0x20(r8), 0, 0
    psq_st f6, 0x28(r8), 0, 0
    stw r3, 0x30(r8)
    stfs f13, 0x34(r8)
    stfs f12, 0x38(r8)
    stfs f11, 0x48(r8)
    stfs f10, 0x58(r8)
    stfs f9, 0x68(r8)
    stfs f0, 0x78(r8)
    psq_st f1, 0x88(r8), 0, 0
    stfs f2, 0x90(r8)
lbl_fn_80116BD4_0000027C:
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r6)
    stfs f2, 0x8(r5)
    lfs f0, 0xc(r6)
    addi r6, r6, 0x10
    stfs f0, 0xc(r5)
    addi r5, r5, 0x10
    cmplw r5, r0
    blt lbl_fn_80116BD4_0000027C
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    psq_l f29, 0x28(r1), 0, 0
    lfd f29, 0x20(r1)
    psq_l f28, 0x18(r1), 0, 0
    lfd f28, 0x10(r1)
    addi r1, r1, 0x50
    blr
}

asm void fn_80116E64(void)
{
    nofralloc
    lwz r3, lbl_8087EFE8
    blr
}

asm void fn_80116E6C(void)
{
    nofralloc
    addi r3, r3, 0x2c
    blr
}

asm void fn_80116E74(void)
{
    nofralloc
    addi r3, r3, 0x2984
    b fn_800C7F08
}

asm void fn_80116E7C(void)
{
    nofralloc
    lwz r0, 0x1f4(r3)
    li r4, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_80116E7C_00000308
    lwz r0, 0x1f8(r3)
    extrwi r0, r0, 1, 1
    cmplwi r0, 0x1
    beq lbl_fn_80116E7C_00000308
    li r4, 0x1
lbl_fn_80116E7C_00000308:
    mr r3, r4
    blr
}

asm void fn_80116EA8(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80116EB0(void)
{
    nofralloc
    blr
}

asm void fn_80116EB4(void)
{
    nofralloc
    blr
}

asm void fn_80116EB8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r4, lbl_807C78E4@ha
    stw r0, 0x34(r1)
    stmw r27, 0x1c(r1)
    la r28, lbl_8087D988
    lwz r29, 0x4(r3)
    lwz r30, 0x0(r3)
    lwz r0, lbl_807C78E4@l(r4)
    srwi. r0, r0, 31
    bne lbl_fn_80116EB8_00000358
    lbz r0, lbl_807C78E4@l(r4)
    clrlwi r27, r0, 25
    b lbl_fn_80116EB8_00000360
lbl_fn_80116EB8_00000358:
    addi r3, r4, lbl_807C78E4@l
    lwz r27, 0x4(r3)
lbl_fn_80116EB8_00000360:
    lbz r0, 0x8(r1)
    mr r3, r28
    stb r0, 0xc(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    lis r31, lbl_807C78E4@ha
    mr r5, r27
    mr r6, r28
    addi r3, r31, lbl_807C78E4@l
    add r7, r28, r0
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_8006F72C
    cmpwi r30, 0x0
    bne lbl_fn_80116EB8_000003DC
    lwz r0, lbl_8087F138
    addic. r3, r0, 0x168
    beq lbl_fn_80116EB8_000003B4
    mr r5, r29
    addi r4, r31, lbl_807C78E4@l
    bl fn_801F3E20
lbl_fn_80116EB8_000003B4:
    lis r3, lbl_807C78E4@ha
    lwz r0, lbl_807C78E4@l(r3)
    srwi. r0, r0, 31
    bne lbl_fn_80116EB8_000003D0
    addi r3, r3, lbl_807C78E4@l
    addi r3, r3, 0x2
    b lbl_fn_80116EB8_00000414
lbl_fn_80116EB8_000003D0:
    addi r3, r3, lbl_807C78E4@l
    lwz r3, 0x8(r3)
    b lbl_fn_80116EB8_00000414
lbl_fn_80116EB8_000003DC:
    cmpwi r30, 0x1
    bne lbl_fn_80116EB8_00000410
    lwz r0, lbl_8087F1E4
    slwi r3, r29, 3
    add r3, r0, r3
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80116EB8_00000400
    b lbl_fn_80116EB8_00000404
lbl_fn_80116EB8_00000400:
    la r3, lbl_808813D0
lbl_fn_80116EB8_00000404:
    cmpwi r3, 0x0
    beq lbl_fn_80116EB8_00000410
    b lbl_fn_80116EB8_00000414
lbl_fn_80116EB8_00000410:
    lwz r3, lbl_8088171C
lbl_fn_80116EB8_00000414:
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80116FC0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r5, lbl_807C78E4@ha
    stw r0, 0x34(r1)
    stmw r27, 0x1c(r1)
    mr r27, r3
    mr r28, r4
    la r30, lbl_8087D988
    lwz r0, lbl_807C78E4@l(r5)
    srwi. r0, r0, 31
    bne lbl_fn_80116FC0_00000460
    lbz r0, lbl_807C78E4@l(r5)
    clrlwi r29, r0, 25
    b lbl_fn_80116FC0_00000468
lbl_fn_80116FC0_00000460:
    addi r3, r5, lbl_807C78E4@l
    lwz r29, 0x4(r3)
lbl_fn_80116FC0_00000468:
    lbz r0, 0xc(r1)
    mr r3, r30
    stb r0, 0x8(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    lis r31, lbl_807C78E4@ha
    mr r5, r29
    mr r6, r30
    addi r3, r31, lbl_807C78E4@l
    add r7, r30, r0
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_8006F72C
    cmpwi r27, 0x0
    bne lbl_fn_80116FC0_000004E4
    lwz r0, lbl_8087F138
    addic. r3, r0, 0x168
    beq lbl_fn_80116FC0_000004BC
    mr r5, r28
    addi r4, r31, lbl_807C78E4@l
    bl fn_801F3E20
lbl_fn_80116FC0_000004BC:
    lis r3, lbl_807C78E4@ha
    lwz r0, lbl_807C78E4@l(r3)
    srwi. r0, r0, 31
    bne lbl_fn_80116FC0_000004D8
    addi r3, r3, lbl_807C78E4@l
    addi r3, r3, 0x2
    b lbl_fn_80116FC0_0000051C
lbl_fn_80116FC0_000004D8:
    addi r3, r3, lbl_807C78E4@l
    lwz r3, 0x8(r3)
    b lbl_fn_80116FC0_0000051C
lbl_fn_80116FC0_000004E4:
    cmpwi r27, 0x1
    bne lbl_fn_80116FC0_00000518
    lwz r0, lbl_8087F1E4
    slwi r3, r28, 3
    add r3, r0, r3
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80116FC0_00000508
    b lbl_fn_80116FC0_0000050C
lbl_fn_80116FC0_00000508:
    la r3, lbl_808813D0
lbl_fn_80116FC0_0000050C:
    cmpwi r3, 0x0
    beq lbl_fn_80116FC0_00000518
    b lbl_fn_80116FC0_0000051C
lbl_fn_80116FC0_00000518:
    lwz r3, lbl_8088171C
lbl_fn_80116FC0_0000051C:
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801170C8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r6, lbl_807C78F0@ha
    stw r0, 0x34(r1)
    stmw r26, 0x18(r1)
    mr r26, r3
    mr r27, r4
    mr r31, r5
    addi r3, r6, lbl_807C78F0@l
    li r4, 0x0
    li r5, 0x200
    bl memset
    lis r3, lbl_807C78E4@ha
    la r29, lbl_8087D988
    lwz r0, lbl_807C78E4@l(r3)
    srwi. r0, r0, 31
    bne lbl_fn_801170C8_00000580
    lbz r0, lbl_807C78E4@l(r3)
    clrlwi r28, r0, 25
    b lbl_fn_801170C8_00000588
lbl_fn_801170C8_00000580:
    addi r3, r3, lbl_807C78E4@l
    lwz r28, 0x4(r3)
lbl_fn_801170C8_00000588:
    lbz r0, 0x8(r1)
    mr r3, r29
    stb r0, 0xc(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    lis r30, lbl_807C78E4@ha
    mr r5, r28
    mr r6, r29
    addi r3, r30, lbl_807C78E4@l
    add r7, r29, r0
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_8006F72C
    cmpwi r26, 0x0
    bne lbl_fn_801170C8_00000604
    lwz r0, lbl_8087F138
    addic. r3, r0, 0x168
    beq lbl_fn_801170C8_000005DC
    mr r5, r27
    addi r4, r30, lbl_807C78E4@l
    bl fn_801F3E20
lbl_fn_801170C8_000005DC:
    lis r3, lbl_807C78E4@ha
    lwz r0, lbl_807C78E4@l(r3)
    srwi. r0, r0, 31
    bne lbl_fn_801170C8_000005F8
    addi r3, r3, lbl_807C78E4@l
    addi r4, r3, 0x2
    b lbl_fn_801170C8_0000063C
lbl_fn_801170C8_000005F8:
    addi r3, r3, lbl_807C78E4@l
    lwz r4, 0x8(r3)
    b lbl_fn_801170C8_0000063C
lbl_fn_801170C8_00000604:
    cmpwi r26, 0x1
    bne lbl_fn_801170C8_00000638
    lwz r0, lbl_8087F1E4
    slwi r3, r27, 3
    add r3, r0, r3
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_801170C8_00000628
    b lbl_fn_801170C8_0000062C
lbl_fn_801170C8_00000628:
    la r4, lbl_808813D0
lbl_fn_801170C8_0000062C:
    cmpwi r4, 0x0
    beq lbl_fn_801170C8_00000638
    b lbl_fn_801170C8_0000063C
lbl_fn_801170C8_00000638:
    lwz r4, lbl_8088171C
lbl_fn_801170C8_0000063C:
    lis r30, lbl_807C78F0@ha
    mr r5, r31
    addi r3, r30, lbl_807C78F0@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r30, lbl_807C78F0@l
    lmw r26, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80117200(void)
{
    nofralloc
    lis r4, lbl_807369AC@ha
    slwi r0, r3, 2
    addi r4, r4, lbl_807369AC@l
    lwzx r3, r4, r0
    blr
}

asm void fn_80117214(void)
{
    nofralloc
    lis r4, lbl_807369C0@ha
    slwi r0, r3, 2
    addi r4, r4, lbl_807369C0@l
    lwzx r3, r4, r0
    blr
}

asm void fn_80117228(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r5, lbl_8087EFE8
    cmpwi r5, 0x0
    beq lbl_fn_80117228_000006B0
    li r0, 0x5
    stw r0, 0x34d0(r5)
lbl_fn_80117228_000006B0:
    lis r5, lbl_807368F8@ha
    slwi r0, r4, 2
    addi r5, r5, lbl_807368F8@l
    lfs f1, lbl_80881720
    lwzx r4, r5, r0
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_80117228_000006E4
    li r0, 0x0
    stw r0, 0x34d0(r3)
lbl_fn_80117228_000006E4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011728C(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_8011728C_00000704
    li r3, 0x0
    blr
lbl_fn_8011728C_00000704:
    cmpwi r3, 0x63
    bne lbl_fn_8011728C_00000728
    lwz r0, 0x4(r4)
    cmpwi r0, 0x26d
    blt lbl_fn_8011728C_00000808
    cmpwi r0, 0x270
    bgt lbl_fn_8011728C_00000808
    li r3, 0x1
    blr
lbl_fn_8011728C_00000728:
    cmpwi r3, 0x62
    bne lbl_fn_8011728C_00000748
    lha r4, 0xbc(r4)
    subfic r3, r4, 0x9
    subi r0, r4, 0x9
    or r0, r3, r0
    srwi r3, r0, 31
    blr
lbl_fn_8011728C_00000748:
    cmpwi r3, 0x0
    blt lbl_fn_8011728C_00000758
    cmpwi r3, 0x7
    blt lbl_fn_8011728C_00000760
lbl_fn_8011728C_00000758:
    li r3, 0x0
    blr
lbl_fn_8011728C_00000760:
    mulli r0, r3, 0x1c
    lis r3, lbl_807369E0@ha
    addi r3, r3, lbl_807369E0@l
    add r3, r3, r0
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8011728C_00000784
    li r3, 0x1
    blr
lbl_fn_8011728C_00000784:
    lwz r5, 0xc(r3)
    cmpwi r5, 0x0
    blt lbl_fn_8011728C_000007A4
    lha r0, 0xbc(r4)
    cmpw r0, r5
    bne lbl_fn_8011728C_000007A4
    li r3, 0x1
    blr
lbl_fn_8011728C_000007A4:
    lwz r5, 0x10(r3)
    cmpwi r5, 0x0
    blt lbl_fn_8011728C_000007C4
    lha r0, 0xbc(r4)
    cmpw r0, r5
    bne lbl_fn_8011728C_000007C4
    li r3, 0x1
    blr
lbl_fn_8011728C_000007C4:
    addi r3, r3, 0x8
    lwz r5, 0xc(r3)
    cmpwi r5, 0x0
    blt lbl_fn_8011728C_000007E8
    lha r0, 0xbc(r4)
    cmpw r0, r5
    bne lbl_fn_8011728C_000007E8
    li r3, 0x1
    blr
lbl_fn_8011728C_000007E8:
    lwz r5, 0x10(r3)
    cmpwi r5, 0x0
    blt lbl_fn_8011728C_00000808
    lha r0, 0xbc(r4)
    cmpw r0, r5
    bne lbl_fn_8011728C_00000808
    li r3, 0x1
    blr
lbl_fn_8011728C_00000808:
    li r3, 0x0
    blr
}

asm void fn_801173A8(void)
{
    nofralloc
    cmpwi r3, 0x0
    bne lbl_fn_801173A8_00000820
    li r3, 0x64
    blr
lbl_fn_801173A8_00000820:
    lis r4, lbl_807369E0@ha
    li r0, 0x6
    addi r4, r4, lbl_807369E0@l
    mtctr r0
lbl_fn_801173A8_00000830:
    lwz r6, 0xc(r4)
    cmpwi r6, 0x0
    blt lbl_fn_801173A8_00000850
    lha r0, 0xbc(r3)
    cmpw r0, r6
    bne lbl_fn_801173A8_00000850
    lwz r3, 0x8(r4)
    blr
lbl_fn_801173A8_00000850:
    lwz r6, 0x10(r4)
    cmpwi r6, 0x0
    blt lbl_fn_801173A8_00000870
    lha r0, 0xbc(r3)
    cmpw r0, r6
    bne lbl_fn_801173A8_00000870
    lwz r3, 0x8(r4)
    blr
lbl_fn_801173A8_00000870:
    lwz r6, 0x14(r4)
    addi r5, r4, 0x8
    cmpwi r6, 0x0
    blt lbl_fn_801173A8_00000894
    lha r0, 0xbc(r3)
    cmpw r0, r6
    bne lbl_fn_801173A8_00000894
    lwz r3, 0x8(r4)
    blr
lbl_fn_801173A8_00000894:
    lwz r6, 0x10(r5)
    cmpwi r6, 0x0
    blt lbl_fn_801173A8_000008B4
    lha r0, 0xbc(r3)
    cmpw r0, r6
    bne lbl_fn_801173A8_000008B4
    lwz r3, 0x8(r4)
    blr
lbl_fn_801173A8_000008B4:
    addi r4, r4, 0x1c
    bdnz lbl_fn_801173A8_00000830
    li r3, 0x64
    blr
}

asm void fn_8011745C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    blt lbl_fn_8011745C_000008F0
    cmpwi r3, 0x7
    blt lbl_fn_8011745C_0000098C
lbl_fn_8011745C_000008F0:
    lis r3, lbl_807C78E4@ha
    la r30, lbl_8087D988
    lwz r0, lbl_807C78E4@l(r3)
    srwi. r0, r0, 31
    bne lbl_fn_8011745C_00000910
    lbz r0, lbl_807C78E4@l(r3)
    clrlwi r29, r0, 25
    b lbl_fn_8011745C_00000918
lbl_fn_8011745C_00000910:
    addi r3, r3, lbl_807C78E4@l
    lwz r29, 0x4(r3)
lbl_fn_8011745C_00000918:
    lbz r0, 0x10(r1)
    mr r3, r30
    stb r0, 0x14(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    lis r31, lbl_807C78E4@ha
    mr r5, r29
    mr r6, r30
    addi r3, r31, lbl_807C78E4@l
    add r7, r30, r0
    addi r8, r1, 0x14
    li r4, 0x0
    bl fn_8006F72C
    lwz r0, lbl_8087F138
    addic. r3, r0, 0x168
    beq lbl_fn_8011745C_00000964
    addi r4, r31, lbl_807C78E4@l
    li r5, 0x320
    bl fn_801F3E20
lbl_fn_8011745C_00000964:
    lis r3, lbl_807C78E4@ha
    lwz r0, lbl_807C78E4@l(r3)
    srwi. r0, r0, 31
    bne lbl_fn_8011745C_00000980
    addi r3, r3, lbl_807C78E4@l
    addi r3, r3, 0x2
    b lbl_fn_8011745C_00000A34
lbl_fn_8011745C_00000980:
    addi r3, r3, lbl_807C78E4@l
    lwz r3, 0x8(r3)
    b lbl_fn_8011745C_00000A34
lbl_fn_8011745C_0000098C:
    lis r4, lbl_807C78E4@ha
    lis r5, lbl_807369E0@ha
    lwz r0, lbl_807C78E4@l(r4)
    mulli r3, r3, 0x1c
    addi r5, r5, lbl_807369E0@l
    srwi. r0, r0, 31
    lwzx r30, r5, r3
    la r29, lbl_8087D988
    bne lbl_fn_8011745C_000009BC
    lbz r0, lbl_807C78E4@l(r4)
    clrlwi r28, r0, 25
    b lbl_fn_8011745C_000009C4
lbl_fn_8011745C_000009BC:
    addi r3, r4, lbl_807C78E4@l
    lwz r28, 0x4(r3)
lbl_fn_8011745C_000009C4:
    lbz r0, 0x8(r1)
    mr r3, r29
    stb r0, 0xc(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    lis r31, lbl_807C78E4@ha
    mr r5, r28
    mr r6, r29
    addi r3, r31, lbl_807C78E4@l
    add r7, r29, r0
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_8006F72C
    lwz r0, lbl_8087F138
    addic. r3, r0, 0x168
    beq lbl_fn_8011745C_00000A10
    mr r5, r30
    addi r4, r31, lbl_807C78E4@l
    bl fn_801F3E20
lbl_fn_8011745C_00000A10:
    lis r3, lbl_807C78E4@ha
    lwz r0, lbl_807C78E4@l(r3)
    srwi. r0, r0, 31
    bne lbl_fn_8011745C_00000A2C
    addi r3, r3, lbl_807C78E4@l
    addi r3, r3, 0x2
    b lbl_fn_8011745C_00000A34
lbl_fn_8011745C_00000A2C:
    addi r3, r3, lbl_807C78E4@l
    lwz r3, 0x8(r3)
lbl_fn_8011745C_00000A34:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801175EC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f7, lbl_80881724
    stw r0, 0x24(r1)
    li r0, 0x0
    lfs f3, lbl_80881734
    stw r31, 0x1c(r1)
    lis r31, lbl_807C7898@ha
    addi r31, r31, lbl_807C7898@l
    lfs f6, lbl_80881728
    stw r30, 0x18(r1)
    la r30, lbl_8087D988
    addi r7, r31, 0x0
    addi r6, r31, 0x10
    stw r29, 0x14(r1)
    addi r5, r31, 0x20
    lfs f4, lbl_80881730
    addi r4, r31, 0x30
    stw r28, 0x10(r1)
    addi r29, r31, 0x4c
    lfs f1, lbl_8088173C
    mr r3, r30
    lfs f0, lbl_80881740
    lfs f2, lbl_80881738
    lfs f5, lbl_8088172C
    stfs f7, 0x0(r31)
    stfs f6, 0x4(r7)
    stfs f5, 0x8(r7)
    stfs f4, 0xc(r7)
    stfs f3, 0x10(r31)
    stfs f2, 0x4(r6)
    stfs f2, 0x8(r6)
    stfs f4, 0xc(r6)
    stfs f1, 0x20(r31)
    stfs f1, 0x4(r5)
    stfs f1, 0x8(r5)
    stfs f4, 0xc(r5)
    stfs f0, 0x30(r31)
    stfs f0, 0x4(r4)
    stfs f0, 0x8(r4)
    stfs f4, 0xc(r4)
    stw r0, 0x0(r29)
    stw r0, 0x4(r29)
    stw r0, 0x8(r29)
    bl fn_80686A48
    mr r28, r3
    mr r3, r29
    mr r4, r28
    bl fn_800DBF68
    lbz r3, 0xc(r1)
    slwi r0, r28, 1
    stb r3, 0x8(r1)
    mr r3, r29
    mr r6, r30
    add r7, r30, r0
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    lis r4, fn_8006FA4C@ha
    mr r3, r29
    addi r4, r4, fn_8006FA4C@l
    addi r5, r31, 0x40
    bl __register_global_object
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8011770C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, lbl_8087F068
    cmpwi r0, 0x0
    bne lbl_fn_8011770C_00000C30
    lis r31, lbl_80736B10@ha
    li r3, 0x4d0
    addi r5, r31, lbl_80736B10@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8011770C_00000C2C
    mr r4, r29
    bl fn_80117B54
    lis r3, lbl_80779FE8@ha
    addi r4, r31, lbl_80736B10@l
    addi r3, r3, lbl_80779FE8@l
    stw r3, 0x0(r30)
    li r0, 0x0
    addi r4, r4, 0x1
    stw r0, 0x48(r30)
    mr r3, r30
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x70(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r4, lbl_8087F430
    mr r3, r30
    cmpwi r4, 0x0
    beq lbl_fn_8011770C_00000C18
    lwz r4, 0x5634(r4)
    b lbl_fn_8011770C_00000C1C
lbl_fn_8011770C_00000C18:
    li r4, 0x0
lbl_fn_8011770C_00000C1C:
    bl fn_803B7944
    stw r3, 0x4c(r30)
    li r0, 0x0
    stw r0, 0xd64(r3)
lbl_fn_8011770C_00000C2C:
    stw r30, lbl_8087F068
lbl_fn_8011770C_00000C30:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    lwz r3, lbl_8087F068
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801177E8(void)
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
    beq lbl_fn_801177E8_00000D40
    lwz r0, lbl_8087F068
    cmpwi r0, 0x0
    beq lbl_fn_801177E8_00000C88
    li r0, 0x0
    stw r0, lbl_8087F068
lbl_fn_801177E8_00000C88:
    cmpwi r3, 0x0
    beq lbl_fn_801177E8_00000D30
    lwz r0, 0x4c4(r3)
    lis r4, lbl_8077A030@ha
    addi r4, r4, lbl_8077A030@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801177E8_00000CB8
    lis r4, fn_80117E88@ha
    mr r3, r0
    addi r4, r4, fn_80117E88@l
    bl fn_80695A50
lbl_fn_801177E8_00000CB8:
    addic. r0, r30, 0x4c0
    li r0, 0x0
    stw r0, 0x4c4(r30)
    stw r0, 0x4c0(r30)
    beq lbl_fn_801177E8_00000CF0
    cmpwi r0, 0x0
    beq lbl_fn_801177E8_00000CE4
    lis r4, fn_80117E88@ha
    li r3, 0x0
    addi r4, r4, fn_80117E88@l
    bl fn_80695A50
lbl_fn_801177E8_00000CE4:
    li r0, 0x0
    stw r0, 0x4c4(r30)
    stw r0, 0x4c0(r30)
lbl_fn_801177E8_00000CF0:
    addic. r3, r30, 0x4b8
    beq lbl_fn_801177E8_00000D00
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_801177E8_00000D00:
    addic. r3, r30, 0x4ac
    beq lbl_fn_801177E8_00000D0C
    bl fn_80470528
lbl_fn_801177E8_00000D0C:
    lis r4, fn_800D5808@ha
    addi r3, r30, 0x17c
    addi r4, r4, fn_800D5808@l
    li r5, 0x30
    li r6, 0x11
    bl fn_806959D8
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
lbl_fn_801177E8_00000D30:
    cmpwi r31, 0x0
    ble lbl_fn_801177E8_00000D40
    mr r3, r30
    bl dtor_80084684
lbl_fn_801177E8_00000D40:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801178F4(void)
{
    nofralloc
    lwz r0, 0x150(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801178F4_00000D70
    lwz r0, 0x128(r3)
    b lbl_fn_801178F4_00000D74
lbl_fn_801178F4_00000D70:
    li r0, -0x1
lbl_fn_801178F4_00000D74:
    stw r0, lbl_8087D990
    blr
}

asm void fn_80117914(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    mr r29, r4
    stw r28, 0x50(r1)
    mr r28, r3
    lwz r0, lbl_8087F06C
    cmpwi r0, 0x0
    bne lbl_fn_80117914_00000E8C
    lis r31, lbl_80736B10@ha
    li r3, 0x4d0
    addi r5, r31, lbl_80736B10@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80117914_00000E88
    mr r4, r28
    bl fn_80117B54
    lis r3, lbl_80779FA0@ha
    addi r31, r31, lbl_80736B10@l
    addi r3, r3, lbl_80779FA0@l
    stw r3, 0x0(r30)
    li r0, 0x1
    addi r4, r31, 0x1f
    stw r0, 0x48(r30)
    mr r3, r30
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x70(r30)
    li r4, 0x1
    bl fn_800D246C
    cmpwi r29, 0x0
    stw r29, 0x50(r30)
    bne lbl_fn_80117914_00000E64
    addi r31, r31, 0x3d
    addi r29, r1, 0x8
    cmplw r31, r29
    beq lbl_fn_80117914_00000E48
    mr r3, r31
    bl strlen
    mr r5, r3
    mr r3, r29
    mr r4, r31
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80117914_00000E48:
    li r0, 0x1
    stw r0, 0x48(r1)
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_803B27F8
    stw r3, 0x50(r30)
    b lbl_fn_80117914_00000E7C
lbl_fn_80117914_00000E64:
    lwz r0, 0xd60(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80117914_00000E7C
    mr r3, r29
    li r4, -0x1
    bl fn_803B8758
lbl_fn_80117914_00000E7C:
    lwz r3, 0x50(r30)
    li r0, 0x0
    stw r0, 0xd64(r3)
lbl_fn_80117914_00000E88:
    stw r30, lbl_8087F06C
lbl_fn_80117914_00000E8C:
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    lwz r0, 0x64(r1)
    lwz r3, lbl_8087F06C
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80117A48(void)
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
    beq lbl_fn_80117A48_00000FA0
    lwz r0, lbl_8087F06C
    cmpwi r0, 0x0
    beq lbl_fn_80117A48_00000EE8
    li r0, 0x0
    stw r0, lbl_8087F06C
lbl_fn_80117A48_00000EE8:
    cmpwi r3, 0x0
    beq lbl_fn_80117A48_00000F90
    lwz r0, 0x4c4(r3)
    lis r4, lbl_8077A030@ha
    addi r4, r4, lbl_8077A030@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80117A48_00000F18
    lis r4, fn_80117E88@ha
    mr r3, r0
    addi r4, r4, fn_80117E88@l
    bl fn_80695A50
lbl_fn_80117A48_00000F18:
    addic. r0, r30, 0x4c0
    li r0, 0x0
    stw r0, 0x4c4(r30)
    stw r0, 0x4c0(r30)
    beq lbl_fn_80117A48_00000F50
    cmpwi r0, 0x0
    beq lbl_fn_80117A48_00000F44
    lis r4, fn_80117E88@ha
    li r3, 0x0
    addi r4, r4, fn_80117E88@l
    bl fn_80695A50
lbl_fn_80117A48_00000F44:
    li r0, 0x0
    stw r0, 0x4c4(r30)
    stw r0, 0x4c0(r30)
lbl_fn_80117A48_00000F50:
    addic. r3, r30, 0x4b8
    beq lbl_fn_80117A48_00000F60
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80117A48_00000F60:
    addic. r3, r30, 0x4ac
    beq lbl_fn_80117A48_00000F6C
    bl fn_80470528
lbl_fn_80117A48_00000F6C:
    lis r4, fn_800D5808@ha
    addi r3, r30, 0x17c
    addi r4, r4, fn_800D5808@l
    li r5, 0x30
    li r6, 0x11
    bl fn_806959D8
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
lbl_fn_80117A48_00000F90:
    cmpwi r31, 0x0
    ble lbl_fn_80117A48_00000FA0
    mr r3, r30
    bl dtor_80084684
lbl_fn_80117A48_00000FA0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80117B54(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r31, r3
    bl fn_800D1D3C
    lis r3, lbl_8077A030@ha
    li r29, 0x0
    addi r3, r3, lbl_8077A030@l
    li r0, 0x1
    lis r4, fn_800D5738@ha
    lis r5, fn_800D5808@ha
    stw r3, 0x0(r31)
    addi r3, r31, 0x17c
    addi r4, r4, fn_800D5738@l
    addi r5, r5, fn_800D5808@l
    stw r29, 0x4c(r31)
    li r6, 0x30
    li r7, 0x11
    stw r29, 0x50(r31)
    stw r29, 0x54(r31)
    stw r0, 0x128(r31)
    stw r29, 0x138(r31)
    stw r29, 0x13c(r31)
    stw r29, 0x148(r31)
    stw r29, 0x150(r31)
    stw r29, 0x154(r31)
    stw r29, 0x158(r31)
    stw r29, 0x15c(r31)
    stw r29, 0x160(r31)
    stw r29, 0x164(r31)
    stw r29, 0x168(r31)
    stw r29, 0x16c(r31)
    stw r29, 0x170(r31)
    stw r29, 0x174(r31)
    bl fn_806958E0
    addi r30, r31, 0x4b8
    stw r29, 0x4ac(r31)
    mr r3, r30
    stw r29, 0x4b0(r31)
    stw r29, 0x4b4(r31)
    bl fn_80473E74
    lis r3, lbl_8078FBB0@ha
    lis r4, lbl_80736B10@ha
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x0(r30)
    addi r4, r4, lbl_80736B10@l
    li r5, 0x0
    stw r29, 0x4c0(r31)
    addi r3, r31, 0x4ac
    addi r4, r4, 0x3f
    li r6, 0x0
    stw r29, 0x4c4(r31)
    li r7, 0x1
    bl fn_80470364
    stw r29, 0x130(r31)
    stw r29, 0x12c(r31)
    stw r29, 0x134(r31)
    lwz r3, lbl_8087F0A8
    cmpwi r3, 0x0
    beq lbl_fn_80117B54_000010CC
    lbz r0, 0x1140(r3)
    stw r0, 0x174(r31)
    lwz r3, lbl_8087F0A8
    lwz r3, 0x113c(r3)
    subi r0, r3, 0x1
    stw r0, 0x128(r31)
lbl_fn_80117B54_000010CC:
    lis r3, lbl_80736B10@ha
    li r29, 0x0
    addi r30, r3, lbl_80736B10@l
    stw r29, 0x178(r31)
    mr r3, r31
    li r5, 0x0
    addi r4, r30, 0x54
    bl fn_801F3FF8
    stw r3, 0x58(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0x81
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x5c(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xa1
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x60(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xbd
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x64(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xda
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x68(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xf7
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x118(r31)
    li r4, 0x1
    bl fn_800D246C
    stw r29, 0x11c(r31)
    mr r3, r31
    addi r4, r30, 0x116
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x120(r31)
    li r4, 0x1
    bl fn_800D246C
    stw r29, 0x124(r31)
    mr r3, r31
    addi r4, r30, 0x135
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x6c(r31)
    li r4, 0x1
    bl fn_800D246C
    addi r28, r30, 0x153
    li r25, 0x0
    li r27, 0x0
lbl_fn_80117B54_000011D0:
    add r26, r31, r27
    mr r3, r31
    stw r29, 0x74(r26)
    addi r4, r30, 0x177
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x94(r26)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0x19a
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xb4(r26)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    mr r4, r28
    bl fn_801F64D0
    stw r3, 0xf4(r26)
    li r4, 0x1
    bl fn_800D246C
    addi r25, r25, 0x1
    stw r29, 0xd4(r26)
    cmpwi r25, 0x8
    addi r27, r27, 0x4
    blt lbl_fn_80117B54_000011D0
    lis r30, lbl_80736B10@ha
    mr r3, r31
    addi r30, r30, lbl_80736B10@l
    li r5, 0x0
    addi r4, r30, 0x1bf
    bl fn_801F3FF8
    stw r3, 0x114(r31)
    li r4, 0x1
    bl fn_800D246C
    lwz r12, 0x4b8(r31)
    addi r3, r31, 0x4b8
    addi r4, r30, 0x1e3
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_80881748
    addi r11, r1, 0x30
    stfs f0, 0x4c8(r31)
    mr r3, r31
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80117E34(void)
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
    beq lbl_fn_80117E34_000012D4
    bl fn_80470528
    cmpwi r31, 0x0
    ble lbl_fn_80117E34_000012D4
    mr r3, r30
    bl dtor_80084684
lbl_fn_80117E34_000012D4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80117E88(void)
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
    beq lbl_fn_80117E88_00001340
    addic. r0, r3, 0xc
    beq lbl_fn_80117E88_00001330
    lwz r0, 0xc(r3)
    srwi. r0, r0, 31
    beq lbl_fn_80117E88_00001330
    lwz r3, 0x14(r3)
    bl dtor_80084684
lbl_fn_80117E88_00001330:
    cmpwi r31, 0x0
    ble lbl_fn_80117E88_00001340
    mr r3, r30
    bl dtor_80084684
lbl_fn_80117E88_00001340:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80117EF4(void)
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
    beq lbl_fn_80117EF4_00001430
    lwz r0, 0x4c4(r3)
    lis r4, lbl_8077A030@ha
    addi r4, r4, lbl_8077A030@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80117EF4_000013A8
    lis r4, fn_80117E88@ha
    mr r3, r0
    addi r4, r4, fn_80117E88@l
    bl fn_80695A50
lbl_fn_80117EF4_000013A8:
    addic. r0, r30, 0x4c0
    li r0, 0x0
    stw r0, 0x4c4(r30)
    stw r0, 0x4c0(r30)
    beq lbl_fn_80117EF4_000013E0
    cmpwi r0, 0x0
    beq lbl_fn_80117EF4_000013D4
    lis r4, fn_80117E88@ha
    li r3, 0x0
    addi r4, r4, fn_80117E88@l
    bl fn_80695A50
lbl_fn_80117EF4_000013D4:
    li r0, 0x0
    stw r0, 0x4c4(r30)
    stw r0, 0x4c0(r30)
lbl_fn_80117EF4_000013E0:
    addic. r3, r30, 0x4b8
    beq lbl_fn_80117EF4_000013F0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80117EF4_000013F0:
    addic. r3, r30, 0x4ac
    beq lbl_fn_80117EF4_000013FC
    bl fn_80470528
lbl_fn_80117EF4_000013FC:
    lis r4, fn_800D5808@ha
    addi r3, r30, 0x17c
    addi r4, r4, fn_800D5808@l
    li r5, 0x30
    li r6, 0x11
    bl fn_806959D8
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_80117EF4_00001430
    mr r3, r30
    bl dtor_80084684
lbl_fn_80117EF4_00001430:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80117FE4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_21
    lwz r0, 0x54(r3)
    mr r24, r3
    cmpwi r0, 0x0
    bne lbl_fn_80117FE4_0000147C
    li r0, 0x1
    stw r0, 0x54(r3)
    b lbl_fn_80117FE4_000019B8
lbl_fn_80117FE4_0000147C:
    cmpwi r0, 0x1
    bne lbl_fn_80117FE4_0000166C
    lwz r3, 0x50(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80117FE4_000014AC
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80117FE4_000014AC
    bl fn_803B87A8
    cmpwi r3, 0x0
    bne lbl_fn_80117FE4_000019B8
lbl_fn_80117FE4_000014AC:
    lis r3, lbl_80736B10@ha
    addi r27, r24, 0x17c
    addi r26, r1, 0x21
    addi r29, r1, 0x20
    addi r30, r3, lbl_80736B10@l
    li r25, 0x0
    li r28, 0x0
    li r31, 0x0
lbl_fn_80117FE4_000014CC:
    lwz r0, 0x48(r24)
    cmpwi r0, 0x0
    bne lbl_fn_80117FE4_000014E0
    lwz r0, 0x4c(r24)
    b lbl_fn_80117FE4_000014E4
lbl_fn_80117FE4_000014E0:
    lwz r0, 0x50(r24)
lbl_fn_80117FE4_000014E4:
    add r3, r0, r28
    addi r22, r3, 0x4c
    mr r3, r22
    bl fn_803BEAB4
    cmpwi r3, 0x0
    beq lbl_fn_80117FE4_0000164C
    lbz r3, 0x30(r22)
    lhz r4, 0x32(r22)
    lbz r5, 0x31(r22)
    bl fn_8021771C
    cmpwi r3, 0x0
    mr r23, r3
    beq lbl_fn_80117FE4_0000164C
    lwz r3, 0x70(r3)
    addi r4, r30, 0x3d
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80117FE4_0000164C
    addi r22, r30, 0x20e
    stw r31, 0x20(r1)
    mr r3, r22
    stw r31, 0x24(r1)
    stw r31, 0x28(r1)
    bl strlen
    mr r21, r3
    mr r3, r29
    mr r4, r21
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r29
    stb r0, 0x18(r1)
    mr r6, r22
    add r7, r22, r21
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x20(r1)
    lwz r22, 0x70(r23)
    srwi. r0, r0, 31
    bne lbl_fn_80117FE4_00001594
    lbz r0, 0x20(r1)
    clrlwi r21, r0, 25
    b lbl_fn_80117FE4_00001598
lbl_fn_80117FE4_00001594:
    lwz r21, 0x24(r1)
lbl_fn_80117FE4_00001598:
    lbz r0, 0x14(r1)
    mr r3, r22
    stb r0, 0x10(r1)
    bl strlen
    mr r0, r3
    mr r4, r21
    mr r6, r22
    addi r3, r1, 0x20
    add r7, r22, r0
    addi r8, r1, 0x10
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x20(r1)
    addi r22, r30, 0x21c
    srwi. r0, r0, 31
    bne lbl_fn_80117FE4_000015E4
    lbz r0, 0x20(r1)
    clrlwi r21, r0, 25
    b lbl_fn_80117FE4_000015E8
lbl_fn_80117FE4_000015E4:
    lwz r21, 0x24(r1)
lbl_fn_80117FE4_000015E8:
    lbz r0, 0xc(r1)
    mr r3, r22
    stb r0, 0x8(r1)
    bl strlen
    mr r0, r3
    mr r4, r21
    mr r6, r22
    addi r3, r1, 0x20
    add r7, r22, r0
    addi r8, r1, 0x8
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x20(r1)
    mr r3, r27
    srwi. r0, r0, 31
    bne lbl_fn_80117FE4_00001630
    mr r4, r26
    b lbl_fn_80117FE4_00001634
lbl_fn_80117FE4_00001630:
    lwz r4, 0x28(r1)
lbl_fn_80117FE4_00001634:
    bl fn_800D5908
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80117FE4_0000164C
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_80117FE4_0000164C:
    addi r25, r25, 0x1
    addi r27, r27, 0x30
    cmpwi r25, 0x11
    addi r28, r28, 0xb8
    blt lbl_fn_80117FE4_000014CC
    li r0, 0x2
    stw r0, 0x54(r24)
    b lbl_fn_80117FE4_000019B8
lbl_fn_80117FE4_0000166C:
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_80117FE4_000019B8
    addi r3, r24, 0x4b8
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_80117FE4_000019B8
    addi r3, r24, 0x4b8
    bl fn_8047059C
    srwi r25, r3, 1
    addi r3, r24, 0x4b8
    bl fn_80470580
    mr r4, r3
    mr r3, r24
    mr r5, r25
    bl fn_8011B8D4
    lwz r3, 0x70(r24)
    li r4, 0x1
    lfs f1, lbl_80881748
    li r5, 0x0
    lfs f2, lbl_8088174C
    bl fn_804A3AF0
    lwz r4, 0x70(r24)
    lis r25, lbl_80736B10@ha
    addi r25, r25, lbl_80736B10@l
    addi r3, r25, 0x225
    addi r21, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80881748
    mr r4, r3
    mr r3, r21
    bl fn_801FECE0
    lwz r4, 0x70(r24)
    addi r3, r25, 0x22c
    addi r21, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80881748
    mr r4, r3
    mr r3, r21
    bl fn_801FECE0
    lwz r4, 0x70(r24)
    addi r3, r25, 0x233
    addi r21, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80881748
    mr r4, r3
    mr r3, r21
    bl fn_801FECE0
    mr r21, r24
    li r22, 0x0
lbl_fn_80117FE4_00001734:
    lwz r3, 0x118(r21)
    li r4, 0x1
    lfs f1, lbl_80881748
    li r5, 0x0
    lfs f2, lbl_8088174C
    bl fn_804A3AF0
    addi r22, r22, 0x1
    addi r21, r21, 0x8
    cmpwi r22, 0x2
    blt lbl_fn_80117FE4_00001734
    lwz r3, 0x58(r24)
    li r4, 0x1
    lfs f1, lbl_80881748
    li r5, 0x1
    lfs f2, lbl_8088174C
    bl fn_804A3AF0
    lwz r3, 0x5c(r24)
    li r4, 0x1
    lfs f1, lbl_80881748
    li r5, 0x0
    lfs f2, lbl_80881750
    bl fn_804A3AF0
    lwz r3, 0x60(r24)
    li r4, 0x1
    lfs f1, lbl_80881748
    li r5, 0x0
    lfs f2, lbl_80881750
    bl fn_804A3AF0
    lwz r3, 0x64(r24)
    li r4, 0x1
    lfs f1, lbl_80881748
    li r5, 0x0
    lfs f2, lbl_80881750
    bl fn_804A3AF0
    lwz r3, 0x68(r24)
    li r4, 0x1
    lfs f1, lbl_80881748
    li r5, 0x0
    lfs f2, lbl_80881750
    bl fn_804A3AF0
    lwz r4, 0x64(r24)
    lis r25, lbl_80736B10@ha
    addi r25, r25, lbl_80736B10@l
    addi r3, r25, 0x233
    addi r21, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80881748
    mr r4, r3
    mr r3, r21
    bl fn_801FECE0
    lwz r4, 0x68(r24)
    addi r3, r25, 0x233
    addi r21, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80881748
    mr r4, r3
    mr r3, r21
    bl fn_801FECE0
    lwz r3, 0x6c(r24)
    li r4, 0x1
    lfs f1, lbl_80881748
    li r5, 0x1
    lfs f2, lbl_8088174C
    bl fn_804A3AF0
    mr r21, r24
    li r22, 0x0
lbl_fn_80117FE4_0000183C:
    lfs f1, lbl_80881748
    li r4, 0x1
    lwz r3, 0x94(r21)
    li r5, 0x0
    fmr f2, f1
    bl fn_804A3AF0
    lfs f1, lbl_80881748
    li r4, 0x1
    lwz r3, 0xb4(r21)
    li r5, 0x0
    fmr f2, f1
    bl fn_804A3AF0
    lfs f1, lbl_80881748
    li r4, 0x1
    lwz r3, 0xf4(r21)
    li r5, 0x0
    fmr f2, f1
    bl fn_804A3B60
    lwz r3, 0x94(r21)
    addi r22, r22, 0x1
    cmpwi r22, 0x8
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb4(r21)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xf4(r21)
    addi r21, r21, 0x4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_80117FE4_0000183C
    lfs f1, lbl_80881748
    li r4, 0x1
    lwz r3, 0x114(r24)
    li r5, 0x0
    fmr f2, f1
    bl fn_804A3AF0
    mr r3, r24
    li r4, 0x0
    li r5, 0x0
    bl fn_80119030
    lwz r4, 0x128(r24)
    li r0, 0x1
    lfs f0, lbl_80881748
    cmpwi r4, 0x0
    stw r0, 0x138(r24)
    stfs f0, 0x4c8(r24)
    bge lbl_fn_80117FE4_0000191C
    li r0, 0x0
    stw r0, 0x134(r24)
    stw r0, 0x12c(r24)
    stw r0, 0x130(r24)
    b lbl_fn_80117FE4_00001960
lbl_fn_80117FE4_0000191C:
    slwi r0, r4, 29
    srwi r3, r4, 31
    subf r0, r3, r0
    srawi r4, r4, 3
    rotlwi r0, r0, 3
    add r0, r0, r3
    addze r4, r4
    stw r4, 0x134(r24)
    slwi r3, r0, 30
    srwi r4, r0, 31
    srawi r0, r0, 2
    subf r3, r4, r3
    rotlwi r3, r3, 2
    addze r0, r0
    add r3, r3, r4
    stw r3, 0x12c(r24)
    stw r0, 0x130(r24)
lbl_fn_80117FE4_00001960:
    li r21, 0x1
lbl_fn_80117FE4_00001964:
    lwz r0, 0x48(r24)
    mr r3, r24
    lwz r4, 0x134(r24)
    cmpwi r0, 0x0
    slwi r4, r4, 3
    add r4, r21, r4
    bne lbl_fn_80117FE4_00001988
    lwz r5, 0x4c(r24)
    b lbl_fn_80117FE4_0000198C
lbl_fn_80117FE4_00001988:
    lwz r5, 0x50(r24)
lbl_fn_80117FE4_0000198C:
    mulli r0, r4, 0xb8
    add r5, r5, r0
    addi r5, r5, 0x4c
    bl fn_8011B018
    addi r21, r21, 0x1
    cmpwi r21, 0x9
    blt lbl_fn_80117FE4_00001964
    addi r3, r24, 0x4ac
    bl fn_80470528
    li r3, 0x1
    b lbl_fn_80117FE4_00001A30
lbl_fn_80117FE4_000019B8:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80117FE4_00001A2C
    li r4, 0x391
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_80117FE4_00001A2C
    lwz r7, lbl_8087EEE0
    lis r5, 0x4330
    lis r6, lbl_80736AA8@ha
    lfs f1, lbl_80881748
    lwz r3, 0x3c(r7)
    lis r4, 0xff00
    lwz r0, 0x40(r7)
    fmr f2, f1
    xoris r3, r3, 0x8000
    stw r3, 0x34(r1)
    xoris r0, r0, 0x8000
    lfd f5, lbl_80736AA8@l(r6)
    stw r5, 0x30(r1)
    lwz r3, lbl_8087EEB0
    lfd f0, 0x30(r1)
    stw r0, 0x3c(r1)
    fsubs f4, f0, f5
    lfs f3, lbl_80881754
    stw r5, 0x38(r1)
    lfd f0, 0x38(r1)
    fsubs f5, f0, f5
    bl fn_80060D58
lbl_fn_80117FE4_00001A2C:
    li r3, 0x0
lbl_fn_80117FE4_00001A30:
    addi r11, r1, 0x70
    bl _restgpr_21
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
