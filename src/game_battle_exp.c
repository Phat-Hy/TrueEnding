#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_21(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void fn_80044E0C(void);
extern void fn_801059F8(void);
extern void fn_80105B3C(void);
extern void fn_801092C8(void);
extern void fn_80121E14(void);
extern void fn_80135384(void);
extern void fn_8016E970(void);
extern void fn_80177EB8(void);
extern void fn_80178A6C(void);
extern void fn_80219558(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80373148(void);
extern void fn_80375184(void);
extern void fn_80376150(void);
extern void fn_803CC718(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80737810[];
extern u8 lbl_80766768[];
extern u8 lbl_8077A720[];
extern u8 lbl_8077C3D0[];
extern u8 lbl_8077C3DC[];

/* Small data declarations */
extern u32 lbl_8087D9D0;
extern u32 lbl_8087D9D4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_80881964;
extern u32 lbl_8088196C;
extern u32 lbl_8088199C;
extern u32 lbl_808819A8;
extern u32 lbl_808819B0;
extern u32 lbl_808819C4;
extern u32 lbl_808819C8;
extern u32 lbl_808819CC;
extern u32 lbl_80881A0C;
extern u32 lbl_80881A10;
extern u32 lbl_80881A14;
extern u32 lbl_80881A20;
extern u32 lbl_80881A5C;
extern u32 lbl_80881B54;

/* Function declarations */
void fn_8017639C(void);
void fn_801763E0(void);
void fn_80176428(void);
void fn_80176548(void);
void fn_801765D8(void);
void fn_80176ACC(void);
void fn_80176B68(void);
void fn_80176D2C(void);
void fn_80176DFC(void);
void fn_80176E30(void);
void fn_80177688(void);
void fn_80177AA0(void);

asm void fn_8017639C(void)
{
    nofralloc
    li r0, 0x4
    mr r5, r3
    li r6, 0x0
    mtctr r0
lbl_fn_8017639C_00000010:
    lwz r0, 0x120c(r5)
    cmpwi r0, 0x0
    bne lbl_fn_8017639C_00000030
    slwi r0, r6, 2
    add r5, r3, r0
    li r3, 0x1
    stw r4, 0x120c(r5)
    blr
lbl_fn_8017639C_00000030:
    addi r5, r5, 0x4
    addi r6, r6, 0x1
    bdnz lbl_fn_8017639C_00000010
    li r3, 0x0
    blr
}

asm void fn_801763E0(void)
{
    nofralloc
    li r0, 0x4
    mr r5, r3
    li r6, 0x0
    mtctr r0
lbl_fn_801763E0_00000054:
    lwz r0, 0x120c(r5)
    cmplw r0, r4
    bne lbl_fn_801763E0_00000078
    slwi r0, r6, 2
    li r5, 0x0
    add r4, r3, r0
    li r3, 0x1
    stw r5, 0x120c(r4)
    blr
lbl_fn_801763E0_00000078:
    addi r5, r5, 0x4
    addi r6, r6, 0x1
    bdnz lbl_fn_801763E0_00000054
    li r3, 0x0
    blr
}

asm void fn_80176428(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    blt lbl_fn_80176428_000000B0
    cmpwi r4, 0x4
    blt lbl_fn_80176428_00000104
lbl_fn_80176428_000000B0:
    lwz r0, 0x120c(r3)
    li r4, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_80176428_000000C4
    li r4, 0x1
lbl_fn_80176428_000000C4:
    lwz r0, 0x1210(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80176428_000000D4
    addi r4, r4, 0x1
lbl_fn_80176428_000000D4:
    lwz r0, 0x1214(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80176428_000000E4
    addi r4, r4, 0x1
lbl_fn_80176428_000000E4:
    lwz r0, 0x1218(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80176428_000000F4
    addi r4, r4, 0x1
lbl_fn_80176428_000000F4:
    neg r0, r4
    andc r0, r0, r4
    srwi r3, r0, 31
    b lbl_fn_80176428_00000198
lbl_fn_80176428_00000104:
    slwi r0, r4, 3
    add r3, r3, r0
    lwz r3, 0xaa4(r3)
    bl fn_80219E6C
    lwz r4, 0x120c(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80176428_00000134
    lwz r0, 0x4(r4)
    cmplw r0, r3
    bne lbl_fn_80176428_00000134
    li r3, 0x1
    b lbl_fn_80176428_00000198
lbl_fn_80176428_00000134:
    lwz r4, 0x1210(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80176428_00000154
    lwz r0, 0x4(r4)
    cmplw r0, r3
    bne lbl_fn_80176428_00000154
    li r3, 0x1
    b lbl_fn_80176428_00000198
lbl_fn_80176428_00000154:
    lwz r4, 0x1214(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80176428_00000174
    lwz r0, 0x4(r4)
    cmplw r0, r3
    bne lbl_fn_80176428_00000174
    li r3, 0x1
    b lbl_fn_80176428_00000198
lbl_fn_80176428_00000174:
    lwz r4, 0x1218(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80176428_00000194
    lwz r0, 0x4(r4)
    cmplw r0, r3
    bne lbl_fn_80176428_00000194
    li r3, 0x1
    b lbl_fn_80176428_00000198
lbl_fn_80176428_00000194:
    li r3, 0x0
lbl_fn_80176428_00000198:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80176548(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lfs f6, 0x8(r5)
    psq_l f1, 0x614(r4), 0, 0
    addi r6, r1, 0x8
    lfs f2, 0x61c(r4)
    stfs f2, 0x8(r3)
    lfs f5, 0x4(r5)
    psq_st f1, 0x0(r3), 0, 0
    lfs f3, 0x0(r5)
    lfs f7, 0x620(r4)
    stfs f7, 0xc(r3)
    lfs f0, 0x5ac(r4)
    lfs f4, 0x5a8(r4)
    fadds f2, f6, f0
    lfs f0, 0x5a4(r4)
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f2, 0x8(r3)
    stfs f0, 0x8(r1)
    stfs f4, 0xc(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lwz r0, 0x958(r4)
    stfs f2, 0x10(r1)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_80176548_00000228
    lfs f0, 0x4(r3)
    fsubs f0, f0, f7
    stfs f0, 0x4(r3)
    b lbl_fn_80176548_00000234
lbl_fn_80176548_00000228:
    lfs f0, 0x4(r3)
    fadds f0, f0, f7
    stfs f0, 0x4(r3)
lbl_fn_80176548_00000234:
    addi r1, r1, 0x20
    blr
}

asm void fn_801765D8(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    stw r30, 0x68(r1)
    mr r30, r3
    lwz r4, 0x38(r3)
    lwz r0, 0x5c0(r3)
    ori r4, r4, 0x4
    stw r4, 0x38(r3)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r3)
    li r4, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x0
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x648(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801765D8_000002B4
    li r4, 0x0
    bl fn_80044E0C
lbl_fn_801765D8_000002B4:
    lwz r3, 0x64c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801765D8_000002C8
    li r4, 0x0
    bl fn_80044E0C
lbl_fn_801765D8_000002C8:
    lwz r0, 0xf80(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801765D8_000002F4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_801765D8_00000310
lbl_fn_801765D8_000002F4:
    addi r3, r31, 0x1c80
    lwz r5, 0x1c80(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_801765D8_00000310:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x2c
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801765D8_000005BC
    lwz r0, 0x55c(r30)
    cmpwi cr1, r0, 0x6
    bne cr1, lbl_fn_801765D8_000005BC
    lwz r0, 0x560(r30)
    cmpwi r0, 0x1d
    bne lbl_fn_801765D8_000005BC
    bne cr1, lbl_fn_801765D8_000003D8
    lwz r0, 0xf80(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801765D8_00000380
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_801765D8_0000039C
lbl_fn_801765D8_00000380:
    addi r3, r31, 0x1c8c
    lwz r5, 0x1c8c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_801765D8_0000039C:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x8
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801765D8_000003D8
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801765D8_000003D8:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    beq lbl_fn_801765D8_0000058C
    cmpwi r0, 0x8
    beq lbl_fn_801765D8_000003F0
    stw r0, 0x564(r30)
lbl_fn_801765D8_000003F0:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_801765D8_0000058C
    lwz r0, 0xf80(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801765D8_00000428
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x50(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x54(r1)
    stw r0, 0x58(r1)
    b lbl_fn_801765D8_00000444
lbl_fn_801765D8_00000428:
    addi r3, r31, 0x1c98
    lwz r5, 0x1c98(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r0, 0x58(r1)
lbl_fn_801765D8_00000444:
    lwz r5, 0x50(r1)
    addi r3, r1, 0x20
    lwz r4, 0x54(r1)
    lwz r0, 0x58(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801765D8_00000480
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801765D8_00000480:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    beq lbl_fn_801765D8_0000055C
    cmpwi r0, 0x8
    beq lbl_fn_801765D8_00000498
    stw r0, 0x564(r30)
lbl_fn_801765D8_00000498:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_801765D8_0000055C
    lwz r0, 0xf80(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801765D8_000004D0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x5c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    b lbl_fn_801765D8_000004EC
lbl_fn_801765D8_000004D0:
    addi r3, r31, 0x1ca4
    lwz r5, 0x1ca4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r0, 0x64(r1)
lbl_fn_801765D8_000004EC:
    lwz r5, 0x5c(r1)
    addi r3, r1, 0x14
    lwz r4, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801765D8_00000528
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801765D8_00000528:
    mr r3, r30
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r30)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r30)
    beq lbl_fn_801765D8_0000055C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801765D8_0000055C:
    lwz r3, 0xf80(r30)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r30)
    cmpwi r3, 0x0
    stw r0, 0xf80(r30)
    beq lbl_fn_801765D8_0000058C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801765D8_0000058C:
    lwz r3, 0xf80(r30)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r30)
    cmpwi r3, 0x0
    stw r0, 0xf80(r30)
    beq lbl_fn_801765D8_000005BC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801765D8_000005BC:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_801765D8_000005DC
    mr r4, r30
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r30
    bl fn_80105B3C
lbl_fn_801765D8_000005DC:
    lwz r0, 0x12a8(r30)
    addi r4, r30, 0xf20
    lfs f0, lbl_8088196C
    li r5, 0x0
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x12a8(r30)
    li r6, 0x0
    stfs f0, 0xfb8(r30)
    stfs f0, 0xfbc(r30)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r0, 0x12a8(r30)
    mr r3, r30
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0x12a8(r30)
    lwz r12, 0x0(r30)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r30
    bl fn_80178A6C
    lwz r7, 0xd1c(r30)
    cmpwi r7, 0x0
    beq lbl_fn_801765D8_000006D8
    lwz r0, 0x12a8(r7)
    mr r5, r7
    lwz r6, 0x1028(r7)
    li r4, 0x0
    extrwi r0, r0, 1, 15
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_801765D8_00000678
lbl_fn_801765D8_0000065C:
    lwz r0, 0xfe8(r5)
    cmplw r0, r30
    bne lbl_fn_801765D8_00000670
    li r0, 0x1
    b lbl_fn_801765D8_00000694
lbl_fn_801765D8_00000670:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
lbl_fn_801765D8_00000678:
    cmpwi r3, 0x0
    mr r0, r6
    bne lbl_fn_801765D8_00000688
    slwi r0, r6, 1
lbl_fn_801765D8_00000688:
    cmpw r4, r0
    blt lbl_fn_801765D8_0000065C
    li r0, 0x0
lbl_fn_801765D8_00000694:
    cmpwi r0, 0x0
    beq lbl_fn_801765D8_000006D8
    li r0, 0x10
    mr r4, r7
    li r3, 0x0
    mtctr r0
lbl_fn_801765D8_000006AC:
    lwz r0, 0xfe8(r4)
    cmplw r0, r30
    bne lbl_fn_801765D8_000006CC
    slwi r0, r3, 2
    li r4, 0x0
    add r3, r7, r0
    stw r4, 0xfe8(r3)
    b lbl_fn_801765D8_000006D8
lbl_fn_801765D8_000006CC:
    addi r4, r4, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_801765D8_000006AC
lbl_fn_801765D8_000006D8:
    addi r3, r30, 0x1220
    li r4, 0x0
    bl fn_80121E14
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801765D8_00000718
    lwz r3, 0x10d8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_801765D8_00000718
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801765D8_00000718
    mr r4, r30
    li r5, 0x0
    bl fn_803CC718
lbl_fn_801765D8_00000718:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80176ACC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r5, 0x38(r3)
    lwz r0, 0x5c0(r3)
    rlwinm r5, r5, 0, 30, 28
    stw r5, 0x38(r3)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x98(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80176ACC_000007B8
    lwz r3, 0x10d8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80176ACC_000007B8
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80176ACC_000007B8
    mr r4, r31
    li r5, 0x1
    bl fn_803CC718
lbl_fn_80176ACC_000007B8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80176B68(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    li r31, 0x0
    stw r30, 0x58(r1)
    mr r30, r3
    lwz r0, 0x121c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80176B68_00000814
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80176B68_00000830
lbl_fn_80176B68_00000814:
    lis r5, lbl_8077C3D0@ha
    lwzu r4, lbl_8077C3D0@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80176B68_00000830:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x38
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80176B68_00000868
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 13
    bne lbl_fn_80176B68_00000868
    li r31, 0x1
lbl_fn_80176B68_00000868:
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80176B68_000008B0
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_80176B68_000008B0
    lwz r3, 0x50(r30)
    bl fn_80219558
    cmpwi r3, 0x0
    bne lbl_fn_80176B68_000008B0
    cmpwi r31, 0x0
    li r31, 0x0
    beq lbl_fn_80176B68_000008B0
    lwz r3, lbl_8087F430
    bl fn_80376150
    cmpwi r3, 0x0
    beq lbl_fn_80176B68_000008B0
    li r31, 0x1
lbl_fn_80176B68_000008B0:
    lwz r3, 0x50(r30)
    subis r0, r3, 0xa
    cmplwi r0, 0xae77
    bne lbl_fn_80176B68_000008DC
    cmpwi r31, 0x0
    li r31, 0x0
    beq lbl_fn_80176B68_000008DC
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_80176B68_000008DC
    li r31, 0x1
lbl_fn_80176B68_000008DC:
    cmpwi r31, 0x0
    beq lbl_fn_80176B68_00000978
    lwz r3, 0x121c(r30)
    li r4, 0x0
    bl fn_80232B7C
    lwz r4, lbl_8087F3C0
    li r0, 0x2
    lfs f1, lbl_80881964
    li r3, -0x1
    stw r0, 0xb8(r4)
    li r0, 0x1
    lfs f0, lbl_8088196C
    addi r5, r30, 0xb0
    lwz r4, 0x121c(r30)
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    stfs f0, 0x1c(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
    lwz r0, 0x12a4(r30)
    oris r0, r0, 0x4
    stw r0, 0x12a4(r30)
lbl_fn_80176B68_00000978:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80176D2C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r0, 0x121c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80176D2C_000009D8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    b lbl_fn_80176D2C_000009F4
lbl_fn_80176D2C_000009D8:
    lis r5, lbl_8077C3DC@ha
    lwzu r4, lbl_8077C3DC@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
lbl_fn_80176D2C_000009F4:
    lwz r5, 0x14(r1)
    addi r3, r1, 0x8
    lwz r4, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80176D2C_00000A48
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 13
    beq lbl_fn_80176D2C_00000A48
    lwz r3, lbl_8087F3C0
    mr r6, r31
    lwz r4, 0x121c(r30)
    li r5, 0x0
    bl fn_80239DAC
    lwz r0, 0x12a4(r30)
    rlwinm r0, r0, 0, 14, 12
    stw r0, 0x12a4(r30)
lbl_fn_80176D2C_00000A48:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80176DFC(void)
{
    nofralloc
    neg r0, r5
    neg r7, r4
    or r5, r0, r5
    neg r0, r6
    or r7, r7, r4
    srawi r5, r5, 31
    or r0, r0, r6
    rlwinm r4, r5, 0, 30, 30
    srawi r0, r0, 31
    rlwimi r4, r7, 1, 31, 31
    rlwimi r4, r0, 0, 29, 29
    stw r4, 0x1254(r3)
    blr
}

asm void fn_80176E30(void)
{
    nofralloc
    stwu r1, -0x260(r1)
    mflr r0
    stw r0, 0x264(r1)
    addi r11, r1, 0x170
    stfd f31, 0x250(r1)
    psq_st f31, 0x258(r1), 0, 0
    stfd f30, 0x240(r1)
    psq_st f30, 0x248(r1), 0, 0
    stfd f29, 0x230(r1)
    psq_st f29, 0x238(r1), 0, 0
    stfd f28, 0x220(r1)
    psq_st f28, 0x228(r1), 0, 0
    stfd f27, 0x210(r1)
    psq_st f27, 0x218(r1), 0, 0
    stfd f26, 0x200(r1)
    psq_st f26, 0x208(r1), 0, 0
    stfd f25, 0x1f0(r1)
    psq_st f25, 0x1f8(r1), 0, 0
    stfd f24, 0x1e0(r1)
    psq_st f24, 0x1e8(r1), 0, 0
    stfd f23, 0x1d0(r1)
    psq_st f23, 0x1d8(r1), 0, 0
    stfd f22, 0x1c0(r1)
    psq_st f22, 0x1c8(r1), 0, 0
    stfd f21, 0x1b0(r1)
    psq_st f21, 0x1b8(r1), 0, 0
    stfd f20, 0x1a0(r1)
    psq_st f20, 0x1a8(r1), 0, 0
    stfd f19, 0x190(r1)
    psq_st f19, 0x198(r1), 0, 0
    stfd f18, 0x180(r1)
    psq_st f18, 0x188(r1), 0, 0
    stfd f17, 0x170(r1)
    psq_st f17, 0x178(r1), 0, 0
    bl _savegpr_21
    lwz r4, 0x12a0(r3)
    mr r23, r3
    cmpwi r4, 0x0
    ble lbl_fn_80176E30_00000B3C
    subi r0, r4, 0x1
    stw r0, 0x12a0(r3)
    b lbl_fn_80176E30_0000125C
lbl_fn_80176E30_00000B3C:
    lwz r4, lbl_8087F048
    cmpwi r4, 0x0
    beq lbl_fn_80176E30_00000B54
    addis r4, r4, 0x1
    subi r26, r4, 0x3410
    b lbl_fn_80176E30_00000B58
lbl_fn_80176E30_00000B54:
    li r26, 0x0
lbl_fn_80176E30_00000B58:
    cmpwi r26, 0x0
    beq lbl_fn_80176E30_0000125C
    li r31, 0x0
    lfs f29, lbl_8088196C
    stw r31, 0x125c(r3)
    addi r30, r1, 0x58
    lfs f30, lbl_808819C4
    addi r27, r1, 0x88
    lfs f28, lbl_80881964
    addi r29, r1, 0x40
    lfs f27, lbl_80881A5C
    addi r28, r1, 0x4c
    lfs f20, lbl_80881A10
    li r25, 0x0
    lfs f21, lbl_80881A0C
    lis r22, lbl_80737810@ha
    lfs f19, lbl_80881A14
lbl_fn_80176E30_00000B9C:
    lwz r0, 0x125c(r23)
    cmplwi r0, 0x8
    bge lbl_fn_80176E30_00000F7C
    lwzx r24, r26, r31
    cmpwi r24, 0x0
    beq lbl_fn_80176E30_00000F6C
    lwz r6, 0x38(r24)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80176E30_00000BE0
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_80176E30_00000BE0
    li r5, 0x1
lbl_fn_80176E30_00000BE0:
    cmpwi r5, 0x0
    beq lbl_fn_80176E30_00000BFC
    lwz r0, 0x7e0(r24)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80176E30_00000BFC
    li r3, 0x1
lbl_fn_80176E30_00000BFC:
    cmpwi r3, 0x0
    beq lbl_fn_80176E30_00000C30
    lwz r0, 0x55c(r24)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80176E30_00000C24
    lwz r0, 0x560(r24)
    cmpwi r0, 0x1c
    bne lbl_fn_80176E30_00000C24
    li r3, 0x1
lbl_fn_80176E30_00000C24:
    cmpwi r3, 0x0
    bne lbl_fn_80176E30_00000C30
    li r4, 0x1
lbl_fn_80176E30_00000C30:
    cmpwi r4, 0x0
    beq lbl_fn_80176E30_00000F6C
    cmplw r24, r23
    beq lbl_fn_80176E30_00000F6C
    lwz r0, 0x48(r24)
    li r21, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_80176E30_00000D00
    lwz r0, 0xfc0(r24)
    cmplw r0, r23
    bne lbl_fn_80176E30_00000C64
    li r21, 0x1
    b lbl_fn_80176E30_00000D24
lbl_fn_80176E30_00000C64:
    lfs f3, 0x530(r23)
    addi r3, r1, 0x94
    lfs f0, 0x530(r24)
    lfs f5, 0x52c(r23)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r24)
    lfs f3, 0x528(r23)
    lfs f0, 0x528(r24)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x98(r1)
    stfs f0, 0x94(r1)
    stfs f6, 0x9c(r1)
    bl fn_805F9920
    fabs f0, f1
    frsp f0, f0
    fcmpo cr0, f0, f30
    blt lbl_fn_80176E30_00000CB8
    addi r3, r1, 0x94
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80176E30_00000CB8:
    stfs f29, 0x64(r1)
    addi r3, r1, 0x110
    li r4, 0x79
    stfs f29, 0x68(r1)
    stfs f28, 0x6c(r1)
    lfs f1, 0x538(r24)
    bl fn_805F8E70
    addi r4, r1, 0x64
    addi r3, r1, 0x110
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x94
    addi r4, r1, 0x64
    bl fn_805F9990
    fcmpo cr0, f1, f27
    bge lbl_fn_80176E30_00000D24
    li r21, 0x1
    b lbl_fn_80176E30_00000D24
lbl_fn_80176E30_00000D00:
    lha r0, 0xd3a(r24)
    cmpwi r0, 0x4
    beq lbl_fn_80176E30_00000D14
    cmpwi r0, 0x5
    bne lbl_fn_80176E30_00000F6C
lbl_fn_80176E30_00000D14:
    lwz r0, 0xd1c(r24)
    cmplw r0, r23
    bne lbl_fn_80176E30_00000D24
    li r21, 0x1
lbl_fn_80176E30_00000D24:
    cmpwi r21, 0x0
    beq lbl_fn_80176E30_00000F6C
    lfs f3, 0x530(r24)
    addi r3, r1, 0x88
    lfs f0, 0x530(r23)
    lfs f5, 0x52c(r24)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r23)
    lfs f3, 0x528(r24)
    lfs f0, 0x528(r23)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x8c(r1)
    stfs f0, 0x88(r1)
    stfs f6, 0x90(r1)
    bl fn_805F9920
    fabs f0, f1
    frsp f0, f0
    fcmpo cr0, f0, f30
    blt lbl_fn_80176E30_00000D80
    addi r3, r1, 0x88
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80176E30_00000D80:
    lfs f2, 0x90(r1)
    psq_l f1, 0x0(r27), 0, 0
    fabs f0, f2
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x60(r1)
    frsp f0, f0
    fcmpo cr0, f0, f30
    bge lbl_fn_80176E30_00000DC0
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f29
    ble lbl_fn_80176E30_00000DB4
    lfs f0, lbl_808819C8
    b lbl_fn_80176E30_00000DB8
lbl_fn_80176E30_00000DB4:
    lfs f0, lbl_808819CC
lbl_fn_80176E30_00000DB8:
    stfs f0, 0x50(r1)
    b lbl_fn_80176E30_00000DD4
lbl_fn_80176E30_00000DC0:
    frsp f2, f2
    lfs f1, 0x58(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x50(r1)
lbl_fn_80176E30_00000DD4:
    lfs f0, 0x50(r1)
    addi r3, r1, 0xa0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f13, 0xa8(r1)
    mr r4, r29
    lfs f12, 0xa4(r1)
    mr r5, r29
    lfs f11, 0xa0(r1)
    addi r3, r1, 0xd0
    lfs f10, 0xb8(r1)
    lfs f9, 0xb4(r1)
    lfs f8, 0xb0(r1)
    lfs f7, 0xc8(r1)
    lfs f6, 0xc4(r1)
    lfs f5, 0xc0(r1)
    lfs f4, 0xcc(r1)
    lfs f3, 0xbc(r1)
    lfs f0, 0xac(r1)
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x60(r1)
    stfs f29, 0x100(r1)
    stfs f29, 0x104(r1)
    stfs f29, 0x108(r1)
    stfs f28, 0x10c(r1)
    stfs f11, 0x10(r1)
    stfs f12, 0x14(r1)
    stfs f13, 0x18(r1)
    stfs f11, 0xd0(r1)
    stfs f12, 0xd4(r1)
    stfs f13, 0xd8(r1)
    stfs f8, 0x1c(r1)
    stfs f9, 0x20(r1)
    stfs f10, 0x24(r1)
    stfs f8, 0xe0(r1)
    stfs f9, 0xe4(r1)
    stfs f10, 0xe8(r1)
    stfs f5, 0x28(r1)
    stfs f6, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f5, 0xf0(r1)
    stfs f6, 0xf4(r1)
    stfs f7, 0xf8(r1)
    stfs f0, 0x34(r1)
    stfs f3, 0x38(r1)
    stfs f4, 0x3c(r1)
    stfs f0, 0xdc(r1)
    stfs f3, 0xec(r1)
    stfs f4, 0xfc(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x48(r1)
    bl fn_805F9750
    lfs f2, 0x48(r1)
    fabs f0, f2
    frsp f0, f0
    fcmpo cr0, f0, f30
    bge lbl_fn_80176E30_00000EE0
    lfs f0, 0x44(r1)
    fcmpo cr0, f0, f29
    ble lbl_fn_80176E30_00000ED0
    lfs f0, lbl_808819C8
    b lbl_fn_80176E30_00000ED4
lbl_fn_80176E30_00000ED0:
    lfs f0, lbl_808819CC
lbl_fn_80176E30_00000ED4:
    fneg f0, f0
    stfs f0, 0x4c(r1)
    b lbl_fn_80176E30_00000EF4
lbl_fn_80176E30_00000EE0:
    lfs f1, 0x44(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x4c(r1)
lbl_fn_80176E30_00000EF4:
    psq_l f1, 0x0(r28), 0, 0
    fmr f2, f29
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0x538(r23)
    lfs f3, 0x5c(r1)
    stfs f2, 0x60(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80737810@l(r22)
    stfs f29, 0x54(r1)
    bl fn_8068AEA8
    frsp f0, f1
    fcmpo cr0, f0, f21
    ble lbl_fn_80176E30_00000F2C
    fsubs f0, f0, f20
lbl_fn_80176E30_00000F2C:
    fcmpo cr0, f0, f19
    bge lbl_fn_80176E30_00000F38
    fadds f0, f0, f20
lbl_fn_80176E30_00000F38:
    lwz r0, 0x125c(r23)
    stfs f0, 0x8(r1)
    slwi r0, r0, 3
    add r0, r23, r0
    stw r24, 0xc(r1)
    addic. r3, r0, 0x1260
    beq lbl_fn_80176E30_00000F60
    frsp f0, f0
    stfs f0, 0x0(r3)
    stw r24, 0x4(r3)
lbl_fn_80176E30_00000F60:
    lwz r3, 0x125c(r23)
    addi r0, r3, 0x1
    stw r0, 0x125c(r23)
lbl_fn_80176E30_00000F6C:
    addi r25, r25, 0x1
    addi r31, r31, 0x934
    cmpwi r25, 0x48
    blt lbl_fn_80176E30_00000B9C
lbl_fn_80176E30_00000F7C:
    lwz r0, 0x125c(r23)
    lis r5, fn_80135384@ha
    addi r3, r23, 0x1260
    slwi r0, r0, 3
    addi r5, r5, fn_80135384@l
    add r4, r23, r0
    addi r4, r4, 0x1260
    bl fn_80177688
    lwz r0, 0x125c(r23)
    cmplwi r0, 0x1
    bgt lbl_fn_80176E30_00000FB8
    lwz r0, 0x12a4(r23)
    rlwinm r0, r0, 0, 22, 20
    stw r0, 0x12a4(r23)
    b lbl_fn_80176E30_0000125C
lbl_fn_80176E30_00000FB8:
    lwz r0, 0x12a4(r23)
    lfs f26, lbl_80881964
    extrwi. r0, r0, 1, 21
    fmr f25, f26
    beq lbl_fn_80176E30_00000FD4
    lfs f26, lbl_80881B54
    fmr f25, f26
lbl_fn_80176E30_00000FD4:
    lwz r3, 0x50(r23)
    subis r0, r3, 0x1
    cmplwi r0, 0x89c1
    bne lbl_fn_80176E30_00001034
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80176E30_00001034
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_80176E30_00001034
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80176E30_00001034
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x4c(r3)
    cmpwi r0, 0xd
    bne lbl_fn_80176E30_00001034
    lfs f3, lbl_808819B0
    lfs f0, lbl_80881A20
    fmuls f26, f26, f3
    fmuls f25, f25, f0
lbl_fn_80176E30_00001034:
    lfs f27, lbl_80881A10
    addi r21, r23, 0x1260
    lfs f30, lbl_8088199C
    li r22, 0x0
    lfs f31, lbl_80881B54
    li r24, 0x0
    lfs f19, lbl_8088196C
    lfs f20, lbl_808819A8
    b lbl_fn_80176E30_000011D0
lbl_fn_80176E30_00001058:
    lwz r0, 0x125c(r23)
    lfs f24, 0x0(r21)
    slwi r0, r0, 3
    lwz r25, 0x4(r21)
    add r3, r23, r0
    addi r21, r21, 0x8
    addi r0, r3, 0x1260
    cmplw r21, r0
    bne lbl_fn_80176E30_00001088
    fsubs f24, f24, f27
    addi r21, r23, 0x1260
    li r22, 0x1
lbl_fn_80176E30_00001088:
    lfs f0, 0x530(r25)
    addi r3, r1, 0x7c
    lfs f7, 0x530(r23)
    lfs f3, 0x52c(r25)
    lfs f6, 0x52c(r23)
    fsubs f4, f0, f7
    lfs f0, 0x528(r25)
    lfs f5, 0x528(r23)
    fsubs f3, f3, f6
    lfs f23, 0x0(r21)
    lwz r26, 0x4(r21)
    fsubs f0, f0, f5
    stfs f0, 0x7c(r1)
    stfs f3, 0x80(r1)
    stfs f4, 0x84(r1)
    lfs f4, 0x530(r26)
    lfs f3, 0x52c(r26)
    lfs f0, 0x528(r26)
    fsubs f4, f4, f7
    fsubs f3, f3, f6
    fsubs f0, f0, f5
    stfs f4, 0x78(r1)
    stfs f0, 0x70(r1)
    stfs f3, 0x74(r1)
    bl fn_805F9920
    fmr f28, f1
    addi r3, r1, 0x70
    bl fn_805F9920
    lwz r4, 0x64(r25)
    fmr f29, f1
    lwz r12, 0x0(r25)
    mr r3, r25
    lfs f0, 0x30(r4)
    lwz r12, 0xa0(r12)
    fmuls f0, f30, f0
    fmuls f18, f26, f0
    mtctr r12
    bctrl
    lwz r0, 0x48(r25)
    fmuls f22, f25, f1
    cmpwi r0, 0x2
    beq lbl_fn_80176E30_00001138
    fmuls f18, f18, f31
    fmuls f22, f22, f30
lbl_fn_80176E30_00001138:
    lwz r4, 0x64(r26)
    mr r3, r26
    lwz r12, 0x0(r26)
    lfs f0, 0x30(r4)
    lwz r12, 0xa0(r12)
    fmuls f0, f30, f0
    fmuls f17, f26, f0
    mtctr r12
    bctrl
    lwz r0, 0x48(r25)
    fmuls f21, f25, f1
    cmpwi r0, 0x2
    beq lbl_fn_80176E30_00001174
    fmuls f17, f17, f31
    fmuls f21, f21, f30
lbl_fn_80176E30_00001174:
    fmuls f0, f18, f18
    fcmpo cr0, f28, f0
    bgt lbl_fn_80176E30_000011D0
    fmuls f0, f17, f17
    fcmpo cr0, f29, f0
    bgt lbl_fn_80176E30_000011D0
    fcmpo cr0, f28, f19
    ble lbl_fn_80176E30_000011A0
    addi r3, r1, 0x7c
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80176E30_000011A0:
    fcmpo cr0, f29, f19
    ble lbl_fn_80176E30_000011B4
    addi r3, r1, 0x70
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80176E30_000011B4:
    fadds f0, f22, f21
    fsubs f3, f23, f24
    fmuls f0, f20, f0
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80176E30_000011D0
    addi r24, r24, 0x1
lbl_fn_80176E30_000011D0:
    cmpwi r22, 0x0
    beq lbl_fn_80176E30_00001058
    lwz r0, 0x125c(r23)
    cmplw r24, r0
    blt lbl_fn_80176E30_00001250
    lwz r3, 0x12a4(r23)
    extrwi. r0, r3, 1, 21
    bne lbl_fn_80176E30_0000125C
    lwz r0, 0x48(r23)
    ori r3, r3, 0x400
    stw r3, 0x12a4(r23)
    cmpwi r0, 0x0
    bne lbl_fn_80176E30_00001234
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80176E30_00001234
    bl fn_80375184
    cmpwi r3, 0x0
    beq lbl_fn_80176E30_00001234
    lwz r3, lbl_8087F048
    mr r5, r23
    li r4, 0x5
    li r6, 0x0
    li r7, 0x0
    bl fn_801092C8
lbl_fn_80176E30_00001234:
    lwz r0, 0x48(r23)
    li r3, 0x1e
    cmpwi r0, 0x2
    bne lbl_fn_80176E30_00001248
    li r3, 0x3c
lbl_fn_80176E30_00001248:
    stw r3, 0x12a0(r23)
    b lbl_fn_80176E30_0000125C
lbl_fn_80176E30_00001250:
    lwz r0, 0x12a4(r23)
    rlwinm r0, r0, 0, 22, 20
    stw r0, 0x12a4(r23)
lbl_fn_80176E30_0000125C:
    addi r11, r1, 0x170
    psq_l f31, 0x258(r1), 0, 0
    lfd f31, 0x250(r1)
    psq_l f30, 0x248(r1), 0, 0
    lfd f30, 0x240(r1)
    psq_l f29, 0x238(r1), 0, 0
    lfd f29, 0x230(r1)
    psq_l f28, 0x228(r1), 0, 0
    lfd f28, 0x220(r1)
    psq_l f27, 0x218(r1), 0, 0
    lfd f27, 0x210(r1)
    psq_l f26, 0x208(r1), 0, 0
    lfd f26, 0x200(r1)
    psq_l f25, 0x1f8(r1), 0, 0
    lfd f25, 0x1f0(r1)
    psq_l f24, 0x1e8(r1), 0, 0
    lfd f24, 0x1e0(r1)
    psq_l f23, 0x1d8(r1), 0, 0
    lfd f23, 0x1d0(r1)
    psq_l f22, 0x1c8(r1), 0, 0
    lfd f22, 0x1c0(r1)
    psq_l f21, 0x1b8(r1), 0, 0
    lfd f21, 0x1b0(r1)
    psq_l f20, 0x1a8(r1), 0, 0
    lfd f20, 0x1a0(r1)
    psq_l f19, 0x198(r1), 0, 0
    lfd f19, 0x190(r1)
    psq_l f18, 0x188(r1), 0, 0
    lfd f18, 0x180(r1)
    psq_l f17, 0x178(r1), 0, 0
    lfd f17, 0x170(r1)
    bl _restgpr_21
    lwz r0, 0x264(r1)
    mtlr r0
    addi r1, r1, 0x260
    blr
}

asm void fn_80177688(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_26
    lis r6, 0x6666
    stw r5, 0x8(r1)
    mr r28, r3
    mr r29, r4
    addi r31, r6, 0x6667
lbl_fn_80177688_00001314:
    subf r0, r28, r29
    srawi r0, r0, 3
    addze r7, r0
    cmpwi r7, 0x1
    ble lbl_fn_80177688_000016EC
    cmpwi r7, 0x14
    bgt lbl_fn_80177688_000013C0
    cmplw r28, r29
    beq lbl_fn_80177688_000016EC
    subi r30, r29, 0x8
    b lbl_fn_80177688_000013B4
lbl_fn_80177688_00001340:
    cmplw r28, r29
    mr r31, r28
    beq lbl_fn_80177688_00001380
    addi r27, r28, 0x8
    b lbl_fn_80177688_00001378
lbl_fn_80177688_00001354:
    lwz r12, 0x8(r1)
    mr r3, r27
    mr r4, r31
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80177688_00001374
    mr r31, r27
lbl_fn_80177688_00001374:
    addi r27, r27, 0x8
lbl_fn_80177688_00001378:
    cmplw r27, r29
    bne lbl_fn_80177688_00001354
lbl_fn_80177688_00001380:
    cmplw r31, r28
    beq lbl_fn_80177688_000013B0
    lfs f1, 0x0(r31)
    lwz r3, 0x4(r31)
    lfs f0, 0x0(r28)
    stfs f0, 0x0(r31)
    lwz r0, 0x4(r28)
    stw r0, 0x4(r31)
    stfs f1, 0x0(r28)
    stfs f1, 0x38(r1)
    stw r3, 0x3c(r1)
    stw r3, 0x4(r28)
lbl_fn_80177688_000013B0:
    addi r28, r28, 0x8
lbl_fn_80177688_000013B4:
    cmplw r28, r30
    bne lbl_fn_80177688_00001340
    b lbl_fn_80177688_000016EC
lbl_fn_80177688_000013C0:
    lwz r4, lbl_8087D9D0
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r31, r4
    addi r6, r4, 0x1
    cmpwi r6, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    slwi r0, r0, 3
    add r3, r28, r0
    blt lbl_fn_80177688_00001400
    li r6, -0x4
lbl_fn_80177688_00001400:
    mulhw r4, r31, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8087D9D0
    cmpwi r0, 0x5
    subf r0, r7, r5
    srawi r0, r0, 2
    addze r5, r0
    srawi r0, r4, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r0, r5, r0
    slwi r0, r0, 3
    add r4, r28, r0
    blt lbl_fn_80177688_0000144C
    li r6, -0x4
    stw r6, lbl_8087D9D0
lbl_fn_80177688_0000144C:
    subi r26, r29, 0x8
    addi r6, r1, 0x8
    mr r5, r26
    bl fn_80177EB8
    mr r30, r28
    mr r27, r26
    b lbl_fn_80177688_0000146C
lbl_fn_80177688_00001468:
    addi r30, r30, 0x8
lbl_fn_80177688_0000146C:
    lwz r12, 0x8(r1)
    mr r3, r30
    mr r4, r26
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80177688_00001468
lbl_fn_80177688_00001488:
    subi r27, r27, 0x8
    cmplw r30, r27
    beq lbl_fn_80177688_000014B0
    lwz r12, 0x8(r1)
    mr r3, r27
    mr r4, r26
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80177688_00001488
lbl_fn_80177688_000014B0:
    cmplw r30, r27
    bge lbl_fn_80177688_00001560
    lfs f1, 0x0(r30)
    lwz r3, 0x4(r30)
    lfs f0, 0x0(r27)
    stfs f0, 0x0(r30)
    lwz r0, 0x4(r27)
    stw r0, 0x4(r30)
    addi r30, r30, 0x8
    stfs f1, 0x0(r27)
    stfs f1, 0x30(r1)
    stw r3, 0x34(r1)
    stw r3, 0x4(r27)
    b lbl_fn_80177688_000014EC
lbl_fn_80177688_000014E8:
    addi r30, r30, 0x8
lbl_fn_80177688_000014EC:
    lwz r12, 0x8(r1)
    mr r3, r30
    mr r4, r26
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80177688_000014E8
lbl_fn_80177688_00001508:
    lwz r12, 0x8(r1)
    subi r27, r27, 0x8
    mr r3, r27
    mr r4, r26
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80177688_00001508
    cmplw r30, r27
    bge lbl_fn_80177688_00001560
    lfs f1, 0x0(r30)
    lwz r3, 0x4(r30)
    lfs f0, 0x0(r27)
    stfs f0, 0x0(r30)
    lwz r0, 0x4(r27)
    stw r0, 0x4(r30)
    addi r30, r30, 0x8
    stfs f1, 0x0(r27)
    stfs f1, 0x28(r1)
    stw r3, 0x2c(r1)
    stw r3, 0x4(r27)
    b lbl_fn_80177688_000014EC
lbl_fn_80177688_00001560:
    cmplw r30, r28
    bne lbl_fn_80177688_0000169C
    lfs f1, 0x0(r30)
    subi r27, r29, 0x8
    lwz r5, 0x4(r30)
    mr r3, r28
    lfs f0, 0x0(r26)
    mr r4, r27
    stfs f0, 0x0(r30)
    lwz r0, 0x4(r26)
    stw r0, 0x4(r30)
    stfs f1, 0x0(r26)
    stw r5, 0x4(r26)
    lwz r12, 0x8(r1)
    stfs f1, 0x20(r1)
    stw r5, 0x24(r1)
    mtctr r12
    addi r30, r30, 0x8
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80177688_00001610
    b lbl_fn_80177688_000015BC
lbl_fn_80177688_000015B8:
    addi r30, r30, 0x8
lbl_fn_80177688_000015BC:
    cmplw r30, r29
    beq lbl_fn_80177688_000015E0
    lwz r12, 0x8(r1)
    mr r3, r28
    mr r4, r30
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80177688_000015B8
lbl_fn_80177688_000015E0:
    cmplw r30, r27
    bge lbl_fn_80177688_00001610
    lfs f1, 0x0(r30)
    lwz r3, 0x4(r30)
    lfs f0, 0x0(r27)
    stfs f0, 0x0(r30)
    lwz r0, 0x4(r27)
    stw r0, 0x4(r30)
    stfs f1, 0x0(r27)
    stfs f1, 0x18(r1)
    stw r3, 0x1c(r1)
    stw r3, 0x4(r27)
lbl_fn_80177688_00001610:
    cmplw r30, r27
    bge lbl_fn_80177688_00001694
    b lbl_fn_80177688_00001620
lbl_fn_80177688_0000161C:
    addi r30, r30, 0x8
lbl_fn_80177688_00001620:
    lwz r12, 0x8(r1)
    mr r3, r28
    mr r4, r30
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80177688_0000161C
lbl_fn_80177688_0000163C:
    lwz r12, 0x8(r1)
    subi r27, r27, 0x8
    mr r3, r28
    mr r4, r27
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80177688_0000163C
    cmplw r30, r27
    bge lbl_fn_80177688_00001694
    lfs f1, 0x0(r30)
    lwz r3, 0x4(r30)
    lfs f0, 0x0(r27)
    stfs f0, 0x0(r30)
    lwz r0, 0x4(r27)
    stw r0, 0x4(r30)
    addi r30, r30, 0x8
    stfs f1, 0x0(r27)
    stfs f1, 0x10(r1)
    stw r3, 0x14(r1)
    stw r3, 0x4(r27)
    b lbl_fn_80177688_00001620
lbl_fn_80177688_00001694:
    mr r28, r30
    b lbl_fn_80177688_00001314
lbl_fn_80177688_0000169C:
    subf r3, r28, r30
    subf r0, r30, r29
    srawi r3, r3, 3
    addze r3, r3
    srawi r0, r0, 3
    addze r0, r0
    cmpw r3, r0
    bge lbl_fn_80177688_000016D4
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80177AA0
    mr r28, r30
    b lbl_fn_80177688_00001314
lbl_fn_80177688_000016D4:
    mr r3, r30
    mr r4, r29
    addi r5, r1, 0x8
    bl fn_80177AA0
    mr r29, r30
    b lbl_fn_80177688_00001314
lbl_fn_80177688_000016EC:
    addi r11, r1, 0x60
    bl _restgpr_26
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80177AA0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_25
    lis r6, 0x6666
    mr r27, r3
    mr r28, r4
    mr r29, r5
    addi r31, r6, 0x6667
lbl_fn_80177AA0_0000172C:
    subf r0, r27, r28
    srawi r0, r0, 3
    addze r7, r0
    cmpwi r7, 0x1
    ble lbl_fn_80177AA0_00001B04
    cmpwi r7, 0x14
    bgt lbl_fn_80177AA0_000017D8
    cmplw r27, r28
    beq lbl_fn_80177AA0_00001B04
    subi r30, r28, 0x8
    b lbl_fn_80177AA0_000017CC
lbl_fn_80177AA0_00001758:
    cmplw r27, r28
    mr r31, r27
    beq lbl_fn_80177AA0_00001798
    addi r26, r27, 0x8
    b lbl_fn_80177AA0_00001790
lbl_fn_80177AA0_0000176C:
    lwz r12, 0x0(r29)
    mr r3, r26
    mr r4, r31
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80177AA0_0000178C
    mr r31, r26
lbl_fn_80177AA0_0000178C:
    addi r26, r26, 0x8
lbl_fn_80177AA0_00001790:
    cmplw r26, r28
    bne lbl_fn_80177AA0_0000176C
lbl_fn_80177AA0_00001798:
    cmplw r31, r27
    beq lbl_fn_80177AA0_000017C8
    lfs f1, 0x0(r31)
    lwz r3, 0x4(r31)
    lfs f0, 0x0(r27)
    stfs f0, 0x0(r31)
    lwz r0, 0x4(r27)
    stw r0, 0x4(r31)
    stfs f1, 0x0(r27)
    stfs f1, 0x30(r1)
    stw r3, 0x34(r1)
    stw r3, 0x4(r27)
lbl_fn_80177AA0_000017C8:
    addi r27, r27, 0x8
lbl_fn_80177AA0_000017CC:
    cmplw r27, r30
    bne lbl_fn_80177AA0_00001758
    b lbl_fn_80177AA0_00001B04
lbl_fn_80177AA0_000017D8:
    lwz r4, lbl_8087D9D4
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r31, r4
    addi r6, r4, 0x1
    cmpwi r6, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    slwi r0, r0, 3
    add r3, r27, r0
    blt lbl_fn_80177AA0_00001818
    li r6, -0x4
lbl_fn_80177AA0_00001818:
    mulhw r4, r31, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8087D9D4
    cmpwi r0, 0x5
    subf r0, r7, r5
    srawi r0, r0, 2
    addze r5, r0
    srawi r0, r4, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r0, r5, r0
    slwi r0, r0, 3
    add r4, r27, r0
    blt lbl_fn_80177AA0_00001864
    li r6, -0x4
    stw r6, lbl_8087D9D4
lbl_fn_80177AA0_00001864:
    subi r25, r28, 0x8
    mr r6, r29
    mr r5, r25
    bl fn_80177EB8
    mr r30, r27
    mr r26, r25
    b lbl_fn_80177AA0_00001884
lbl_fn_80177AA0_00001880:
    addi r30, r30, 0x8
lbl_fn_80177AA0_00001884:
    lwz r12, 0x0(r29)
    mr r3, r30
    mr r4, r25
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80177AA0_00001880
lbl_fn_80177AA0_000018A0:
    subi r26, r26, 0x8
    cmplw r30, r26
    beq lbl_fn_80177AA0_000018C8
    lwz r12, 0x0(r29)
    mr r3, r26
    mr r4, r25
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80177AA0_000018A0
lbl_fn_80177AA0_000018C8:
    cmplw r30, r26
    bge lbl_fn_80177AA0_00001978
    lfs f1, 0x0(r30)
    lwz r3, 0x4(r30)
    lfs f0, 0x0(r26)
    stfs f0, 0x0(r30)
    lwz r0, 0x4(r26)
    stw r0, 0x4(r30)
    addi r30, r30, 0x8
    stfs f1, 0x0(r26)
    stfs f1, 0x28(r1)
    stw r3, 0x2c(r1)
    stw r3, 0x4(r26)
    b lbl_fn_80177AA0_00001904
lbl_fn_80177AA0_00001900:
    addi r30, r30, 0x8
lbl_fn_80177AA0_00001904:
    lwz r12, 0x0(r29)
    mr r3, r30
    mr r4, r25
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80177AA0_00001900
lbl_fn_80177AA0_00001920:
    lwz r12, 0x0(r29)
    subi r26, r26, 0x8
    mr r3, r26
    mr r4, r25
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80177AA0_00001920
    cmplw r30, r26
    bge lbl_fn_80177AA0_00001978
    lfs f1, 0x0(r30)
    lwz r3, 0x4(r30)
    lfs f0, 0x0(r26)
    stfs f0, 0x0(r30)
    lwz r0, 0x4(r26)
    stw r0, 0x4(r30)
    addi r30, r30, 0x8
    stfs f1, 0x0(r26)
    stfs f1, 0x20(r1)
    stw r3, 0x24(r1)
    stw r3, 0x4(r26)
    b lbl_fn_80177AA0_00001904
lbl_fn_80177AA0_00001978:
    cmplw r30, r27
    bne lbl_fn_80177AA0_00001AB4
    lfs f1, 0x0(r30)
    subi r26, r28, 0x8
    lwz r5, 0x4(r30)
    mr r3, r27
    lfs f0, 0x0(r25)
    mr r4, r26
    stfs f0, 0x0(r30)
    lwz r0, 0x4(r25)
    stw r0, 0x4(r30)
    stfs f1, 0x0(r25)
    stw r5, 0x4(r25)
    lwz r12, 0x0(r29)
    stfs f1, 0x18(r1)
    stw r5, 0x1c(r1)
    mtctr r12
    addi r30, r30, 0x8
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80177AA0_00001A28
    b lbl_fn_80177AA0_000019D4
lbl_fn_80177AA0_000019D0:
    addi r30, r30, 0x8
lbl_fn_80177AA0_000019D4:
    cmplw r30, r28
    beq lbl_fn_80177AA0_000019F8
    lwz r12, 0x0(r29)
    mr r3, r27
    mr r4, r30
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80177AA0_000019D0
lbl_fn_80177AA0_000019F8:
    cmplw r30, r26
    bge lbl_fn_80177AA0_00001A28
    lfs f1, 0x0(r30)
    lwz r3, 0x4(r30)
    lfs f0, 0x0(r26)
    stfs f0, 0x0(r30)
    lwz r0, 0x4(r26)
    stw r0, 0x4(r30)
    stfs f1, 0x0(r26)
    stfs f1, 0x10(r1)
    stw r3, 0x14(r1)
    stw r3, 0x4(r26)
lbl_fn_80177AA0_00001A28:
    cmplw r30, r26
    bge lbl_fn_80177AA0_00001AAC
    b lbl_fn_80177AA0_00001A38
lbl_fn_80177AA0_00001A34:
    addi r30, r30, 0x8
lbl_fn_80177AA0_00001A38:
    lwz r12, 0x0(r29)
    mr r3, r27
    mr r4, r30
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80177AA0_00001A34
lbl_fn_80177AA0_00001A54:
    lwz r12, 0x0(r29)
    subi r26, r26, 0x8
    mr r3, r27
    mr r4, r26
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80177AA0_00001A54
    cmplw r30, r26
    bge lbl_fn_80177AA0_00001AAC
    lfs f1, 0x0(r30)
    lwz r3, 0x4(r30)
    lfs f0, 0x0(r26)
    stfs f0, 0x0(r30)
    lwz r0, 0x4(r26)
    stw r0, 0x4(r30)
    addi r30, r30, 0x8
    stfs f1, 0x0(r26)
    stfs f1, 0x8(r1)
    stw r3, 0xc(r1)
    stw r3, 0x4(r26)
    b lbl_fn_80177AA0_00001A38
lbl_fn_80177AA0_00001AAC:
    mr r27, r30
    b lbl_fn_80177AA0_0000172C
lbl_fn_80177AA0_00001AB4:
    subf r3, r27, r30
    subf r0, r30, r28
    srawi r3, r3, 3
    addze r3, r3
    srawi r0, r0, 3
    addze r0, r0
    cmpw r3, r0
    bge lbl_fn_80177AA0_00001AEC
    mr r3, r27
    mr r4, r30
    mr r5, r29
    bl fn_80177AA0
    mr r27, r30
    b lbl_fn_80177AA0_0000172C
lbl_fn_80177AA0_00001AEC:
    mr r3, r30
    mr r4, r28
    mr r5, r29
    bl fn_80177AA0
    mr r28, r30
    b lbl_fn_80177AA0_0000172C
lbl_fn_80177AA0_00001B04:
    addi r11, r1, 0x60
    bl _restgpr_25
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
