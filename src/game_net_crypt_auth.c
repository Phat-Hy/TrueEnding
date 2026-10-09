#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_18(void);
extern void _restgpr_27(void);
extern void _savegpr_18(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800A555C(void);
extern void fn_800A55AC(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_80117228(void);
extern void fn_801231D0(void);
extern void fn_801F3FF8(void);
extern void fn_801F4728(void);
extern void fn_801F4998(void);
extern void fn_801F4CB4(void);
extern void fn_801F4E8C(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_801FEDBC(void);
extern void fn_801FEE08(void);
extern void fn_804A436C(void);
extern void fn_804AC734(void);
extern void fn_804AC83C(void);
extern void fn_804AC96C(void);
extern void fn_804ACAF8(void);
extern void fn_804ACD10(void);
extern void fn_804ACDBC(void);
extern void fn_804AD000(void);
extern void fn_804AD1EC(void);
extern void fn_804B7F88(void);
extern void fn_804B83F4(void);
extern void fn_804B9014(void);
extern void fn_804B9694(void);
extern void fn_804B9960(void);
extern void fn_804DB40C(void);
extern void fn_804DC85C(void);
extern void fn_8050F408(void);
extern void fn_8050F5AC(void);
extern void fn_8050F668(void);
extern void fn_8050F728(void);
extern void fn_8050F86C(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);

/* External data declarations */
extern u8 lbl_80758110[];
extern u8 lbl_80758150[];
extern u8 lbl_807583DC[];
extern u8 lbl_80775A88[];
extern u8 lbl_80790BB8[];
extern u8 lbl_80790BC8[];

/* Small data declarations */
extern u32 lbl_8087E100;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F490;
extern u32 lbl_8087F588;
extern u32 lbl_8087F5B0;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_8087F86C;
extern u32 lbl_808813D0;
extern u32 lbl_8088734C;
extern u32 lbl_80887350;
extern u32 lbl_80887354;
extern u32 lbl_80887388;
extern u32 lbl_80887394;
extern u32 lbl_80887398;
extern u32 lbl_8088739C;
extern u32 lbl_808873A0;
extern u32 lbl_808873A8;
extern u32 lbl_808873AC;
extern u32 lbl_808873B0;
extern u32 lbl_808873B4;
extern u32 lbl_808873B8;
extern u32 lbl_808873BC;

/* Function declarations */
void fn_804B6204(void);
void fn_804B671C(void);
void fn_804B67E4(void);
void fn_804B691C(void);
void fn_804B6944(void);
void fn_804B6984(void);
void fn_804B6988(void);
void fn_804B69F0(void);
void fn_804B6D4C(void);
void fn_804B6DFC(void);
void fn_804B6F08(void);
void fn_804B76EC(void);
void fn_804B76F0(void);
void fn_804B76F4(void);
void fn_804B7920(void);
void fn_804B79F4(void);

asm void fn_804B6204(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x224(r1)
    stw r31, 0x21c(r1)
    mr r31, r4
    stw r30, 0x218(r1)
    mr r30, r3
    stw r29, 0x214(r1)
    bge lbl_fn_804B6204_000000FC
    lwz r3, lbl_8087F610
    lwz r0, 0x540(r3)
    cmpwi r0, 0x2
    bne lbl_fn_804B6204_000004FC
    lwz r4, 0x4c(r30)
    lis r29, lbl_80758150@ha
    addi r29, r29, lbl_80758150@l
    addi r3, r29, 0x189
    addi r31, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088734C
    mr r4, r3
    mr r3, r31
    li r5, 0x0
    bl fn_801FEDBC
    lwz r4, 0x4c(r30)
    addi r3, r29, 0x191
    addi r31, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088734C
    mr r4, r3
    mr r3, r31
    li r5, 0x0
    bl fn_801FEDBC
    lwz r4, 0x4c(r30)
    addi r3, r29, 0x199
    addi r31, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088734C
    mr r4, r3
    mr r3, r31
    li r5, 0x0
    bl fn_801FEDBC
    lwz r4, 0x4c(r30)
    addi r3, r29, 0x1a1
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088734C
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FEDBC
    lwz r29, 0x4c(r30)
    cmpwi r29, 0x0
    beq lbl_fn_804B6204_000004FC
    mr r3, r29
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80887354
    stfs f0, 0x104(r29)
    lfs f0, lbl_8088734C
    stfs f0, 0x100(r29)
    b lbl_fn_804B6204_000004FC
lbl_fn_804B6204_000000FC:
    lwz r4, 0x4c(r30)
    lis r3, lbl_80758150@ha
    addi r3, r3, lbl_80758150@l
    addi r3, r3, 0x1a1
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887388
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FEDBC
    lwz r29, 0x4c(r30)
    cmpwi r29, 0x0
    beq lbl_fn_804B6204_00000154
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887350
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804B6204_00000154:
    li r0, 0x40
    addi r4, r1, 0x4
    li r3, 0x0
    mtctr r0
lbl_fn_804B6204_00000164:
    stw r3, 0x4(r4)
    stwu r3, 0x8(r4)
    bdnz lbl_fn_804B6204_00000164
    lis r29, 0x8889
    lis r4, lbl_80790BB8@ha
    subi r0, r29, 0x7777
    addi r3, r1, 0x8
    mulhw r0, r0, r31
    addi r4, r4, lbl_80790BB8@l
    addi r4, r4, 0x6
    add r0, r0, r31
    srawi r0, r0, 5
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3c
    subf r5, r0, r31
    crclr 6
    bl fn_800DD3FC
    subi r0, r29, 0x7777
    lis r29, lbl_80758150@ha
    mulhw r0, r0, r31
    lwz r3, 0x4c(r30)
    addi r29, r29, lbl_80758150@l
    li r6, 0x0
    addi r4, r29, 0x1a9
    add r0, r0, r31
    srawi r0, r0, 5
    srwi r5, r0, 31
    add r5, r0, r5
    bl fn_801F4CB4
    lwz r4, 0x4c(r30)
    addi r3, r29, 0x1b7
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    addi r5, r1, 0x8
    bl fn_801FEE08
    lwz r29, lbl_8087F610
    li r31, 0x0
    mr r3, r29
    bl fn_804DB40C
    cmpwi r3, 0x0
    blt lbl_fn_804B6204_00000228
    mr r3, r29
    bl fn_804DB40C
    cmpwi r3, 0x3c
    bge lbl_fn_804B6204_00000228
    li r31, 0x1
lbl_fn_804B6204_00000228:
    cmpwi r31, 0x0
    beq lbl_fn_804B6204_00000398
    lis r31, lbl_80758150@ha
    lwz r3, 0x4c(r30)
    addi r31, r31, lbl_80758150@l
    lis r5, 0xffff
    addi r4, r31, 0x189
    bl fn_801F4998
    lwz r3, 0x4c(r30)
    addi r4, r31, 0x191
    lis r5, 0xffff
    bl fn_801F4998
    lwz r3, 0x4c(r30)
    addi r4, r31, 0x199
    lis r5, 0xffff
    bl fn_801F4998
    lwz r3, 0x4c(r30)
    addi r4, r31, 0x1c5
    lis r5, 0xffff
    bl fn_801F4998
    lwz r3, 0x4c(r30)
    addi r4, r31, 0x1cd
    lis r5, 0xffff
    bl fn_801F4998
    lwz r3, 0x4c(r30)
    addi r4, r31, 0x1d5
    lis r5, 0xffff
    bl fn_801F4998
    lwz r4, 0x4c(r30)
    addi r3, r31, 0x1dd
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887394
    mr r4, r3
    mr r3, r29
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0x4c(r30)
    addi r3, r31, 0x1e5
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887394
    mr r4, r3
    mr r3, r29
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0x4c(r30)
    addi r3, r31, 0x1ed
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887394
    mr r4, r3
    mr r3, r29
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0x4c(r30)
    addi r3, r31, 0x1dd
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887394
    mr r4, r3
    mr r3, r29
    li r5, 0x3
    bl fn_801FED24
    lwz r4, 0x4c(r30)
    addi r3, r31, 0x1e5
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887394
    mr r4, r3
    mr r3, r29
    li r5, 0x3
    bl fn_801FED24
    lwz r4, 0x4c(r30)
    addi r3, r31, 0x1ed
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887394
    mr r4, r3
    mr r3, r29
    li r5, 0x3
    bl fn_801FED24
    lwz r4, 0x4c(r30)
    addi r3, r31, 0x1a1
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887398
    mr r4, r3
    mr r3, r29
    li r5, 0x1
    bl fn_801FED24
    b lbl_fn_804B6204_000004FC
lbl_fn_804B6204_00000398:
    lis r31, lbl_80758150@ha
    lwz r3, 0x4c(r30)
    addi r31, r31, lbl_80758150@l
    li r5, -0x1
    addi r4, r31, 0x189
    bl fn_801F4998
    lwz r3, 0x4c(r30)
    addi r4, r31, 0x191
    li r5, -0x1
    bl fn_801F4998
    lwz r3, 0x4c(r30)
    addi r4, r31, 0x199
    li r5, -0x1
    bl fn_801F4998
    lwz r3, 0x4c(r30)
    addi r4, r31, 0x1c5
    li r5, -0x1
    bl fn_801F4998
    lwz r3, 0x4c(r30)
    addi r4, r31, 0x1cd
    li r5, -0x1
    bl fn_801F4998
    lwz r3, 0x4c(r30)
    addi r4, r31, 0x1d5
    li r5, -0x1
    bl fn_801F4998
    lwz r4, 0x4c(r30)
    addi r3, r31, 0x1dd
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088739C
    mr r4, r3
    mr r3, r29
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0x4c(r30)
    addi r3, r31, 0x1e5
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088739C
    mr r4, r3
    mr r3, r29
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0x4c(r30)
    addi r3, r31, 0x1ed
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088739C
    mr r4, r3
    mr r3, r29
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0x4c(r30)
    addi r3, r31, 0x1dd
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088739C
    mr r4, r3
    mr r3, r29
    li r5, 0x3
    bl fn_801FED24
    lwz r4, 0x4c(r30)
    addi r3, r31, 0x1e5
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088739C
    mr r4, r3
    mr r3, r29
    li r5, 0x3
    bl fn_801FED24
    lwz r4, 0x4c(r30)
    addi r3, r31, 0x1ed
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088739C
    mr r4, r3
    mr r3, r29
    li r5, 0x3
    bl fn_801FED24
    lwz r4, 0x4c(r30)
    addi r3, r31, 0x1a1
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873A0
    mr r4, r3
    mr r3, r29
    li r5, 0x1
    bl fn_801FED24
lbl_fn_804B6204_000004FC:
    lwz r0, 0x224(r1)
    lwz r31, 0x21c(r1)
    lwz r30, 0x218(r1)
    lwz r29, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_804B671C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r6, r4
    lis r4, lbl_80790BB8@ha
    stw r0, 0x24(r1)
    li r0, 0x0
    addi r4, r4, lbl_80790BB8@l
    stw r31, 0x1c(r1)
    mr r31, r5
    mr r5, r6
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    crclr 6
    bl fn_800DD3FC
    cmpwi r31, 0x0
    bne lbl_fn_804B671C_00000598
    lwz r4, 0x4c(r30)
    lis r3, lbl_80758150@ha
    addi r3, r3, lbl_80758150@l
    addi r3, r3, 0xe7
    addi r31, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r31
    addi r5, r1, 0x8
    bl fn_801FEE08
    b lbl_fn_804B671C_000005C8
lbl_fn_804B671C_00000598:
    cmpwi r31, 0x1
    bne lbl_fn_804B671C_000005C8
    lwz r4, 0x4c(r30)
    lis r3, lbl_80758150@ha
    addi r3, r3, lbl_80758150@l
    addi r3, r3, 0xf5
    addi r31, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r31
    addi r5, r1, 0x8
    bl fn_801FEE08
lbl_fn_804B671C_000005C8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804B67E4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r5, lbl_8087F490
    cmpwi r5, 0x0
    beq lbl_fn_804B67E4_00000614
    lwz r0, 0x255c(r5)
    cmpwi r0, 0x0
    bge lbl_fn_804B67E4_000006FC
lbl_fn_804B67E4_00000614:
    lwz r5, 0x98(r3)
    cmpwi r4, 0x0
    lfs f0, lbl_8088734C
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x98(r3)
    stfs f0, 0x100(r5)
    blt lbl_fn_804B67E4_00000698
    cmpwi r4, 0x7
    bge lbl_fn_804B67E4_00000698
    lis r5, lbl_80758110@ha
    slwi r0, r4, 2
    addi r5, r5, lbl_80758110@l
    lwz r4, lbl_8087F86C
    lwzx r0, r5, r0
    slwi r0, r0, 3
    add r4, r4, r0
    lwz r31, 0x4c(r4)
    cmpwi r31, 0x0
    beq lbl_fn_804B67E4_0000066C
    b lbl_fn_804B67E4_00000670
lbl_fn_804B67E4_0000066C:
    la r31, lbl_808813D0
lbl_fn_804B67E4_00000670:
    lwz r4, 0x98(r3)
    lis r3, lbl_80758150@ha
    addi r3, r3, lbl_80758150@l
    addi r3, r3, 0x1f5
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r31
    bl fn_801FEE08
lbl_fn_804B67E4_00000698:
    cmpwi r29, 0x6
    bne lbl_fn_804B67E4_000006D0
    lis r4, lbl_80758150@ha
    lfs f1, lbl_80887350
    addi r4, r4, lbl_80758150@l
    addi r3, r1, 0xc
    addi r4, r4, 0x1fd
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_804B67E4_000006FC
lbl_fn_804B67E4_000006D0:
    lis r4, lbl_80758150@ha
    lfs f1, lbl_80887350
    addi r4, r4, lbl_80758150@l
    addi r3, r1, 0x8
    addi r4, r4, 0x20a
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_804B67E4_000006FC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804B691C(void)
{
    nofralloc
    lwz r4, 0x90(r3)
    lfs f0, 0xa0(r4)
    stfs f0, 0x100(r4)
    lwz r4, 0x94(r3)
    lfs f0, 0xa0(r4)
    stfs f0, 0x100(r4)
    lwz r3, 0x98(r3)
    lfs f0, 0xa0(r3)
    stfs f0, 0x100(r3)
    blr
}

asm void fn_804B6944(void)
{
    nofralloc
    li r6, 0x0
    li r4, 0x0
    b lbl_fn_804B6944_00000768
lbl_fn_804B6944_0000074C:
    add r5, r3, r4
    addi r6, r6, 0x1
    lwz r5, 0xac(r5)
    addi r4, r4, 0x4
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
lbl_fn_804B6944_00000768:
    lwz r0, 0xa8(r3)
    cmplw r6, r0
    blt lbl_fn_804B6944_0000074C
    li r0, 0x4
    stw r0, 0x9c(r3)
    blr
}

asm void fn_804B6984(void)
{
    nofralloc
    blr
}

asm void fn_804B6988(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F5B0
    cmpwi r0, 0x0
    bne lbl_fn_804B6988_000007D4
    lis r5, lbl_807583DC@ha
    li r3, 0x3b8
    addi r5, r5, lbl_807583DC@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_804B6988_000007D0
    mr r4, r31
    bl fn_804B69F0
lbl_fn_804B6988_000007D0:
    stw r3, lbl_8087F5B0
lbl_fn_804B6988_000007D4:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F5B0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804B69F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r31, r3
    bl fn_800D1D3C
    lis r3, lbl_80790BC8@ha
    lis r4, lbl_807583DC@ha
    li r6, 0x0
    li r0, -0x1
    addi r3, r3, lbl_80790BC8@l
    addi r4, r4, lbl_807583DC@l
    stw r3, 0x0(r31)
    mr r3, r31
    addi r4, r4, 0x1
    li r5, 0x0
    stb r6, 0x248(r31)
    stw r6, 0x2bc(r31)
    stw r6, 0x2c0(r31)
    stw r6, 0x2c8(r31)
    stw r6, 0x2d4(r31)
    stw r6, 0x2d8(r31)
    stw r6, 0x2dc(r31)
    stw r6, 0x2e0(r31)
    stw r0, 0x318(r31)
    stw r6, 0x31c(r31)
    stw r6, 0x324(r31)
    stw r6, 0x3a8(r31)
    stw r6, 0x3ac(r31)
    stw r6, 0x3b0(r31)
    stw r0, 0x2cc(r31)
    stw r0, 0x2d0(r31)
    bl fn_801F3FF8
    lwz r0, 0x324(r31)
    stw r3, 0x24c(r31)
    cmplwi r0, 0x20
    bge lbl_fn_804B69F0_000008A4
    lwz r0, 0x324(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x328
    beq lbl_fn_804B69F0_00000898
    stw r3, 0x0(r4)
lbl_fn_804B69F0_00000898:
    lwz r3, 0x324(r31)
    addi r0, r3, 0x1
    stw r0, 0x324(r31)
lbl_fn_804B69F0_000008A4:
    lis r4, lbl_807583DC@ha
    mr r3, r31
    addi r4, r4, lbl_807583DC@l
    li r5, 0x0
    addi r4, r4, 0x2a
    bl fn_801F3FF8
    lwz r0, 0x324(r31)
    stw r3, 0x250(r31)
    cmplwi r0, 0x20
    bge lbl_fn_804B69F0_000008F0
    lwz r0, 0x324(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x328
    beq lbl_fn_804B69F0_000008E4
    stw r3, 0x0(r4)
lbl_fn_804B69F0_000008E4:
    lwz r3, 0x324(r31)
    addi r0, r3, 0x1
    stw r0, 0x324(r31)
lbl_fn_804B69F0_000008F0:
    lis r4, lbl_807583DC@ha
    mr r3, r31
    addi r4, r4, lbl_807583DC@l
    li r5, 0x0
    addi r4, r4, 0x53
    bl fn_801F3FF8
    lwz r0, 0x324(r31)
    stw r3, 0x254(r31)
    cmplwi r0, 0x20
    bge lbl_fn_804B69F0_0000093C
    lwz r0, 0x324(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x328
    beq lbl_fn_804B69F0_00000930
    stw r3, 0x0(r4)
lbl_fn_804B69F0_00000930:
    lwz r3, 0x324(r31)
    addi r0, r3, 0x1
    stw r0, 0x324(r31)
lbl_fn_804B69F0_0000093C:
    lis r29, lbl_807583DC@ha
    li r27, 0x0
    addi r29, r29, lbl_807583DC@l
    li r28, 0x0
lbl_fn_804B69F0_0000094C:
    mr r3, r31
    add r30, r31, r28
    addi r4, r29, 0x53
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x258(r30)
    lwz r0, 0x324(r31)
    cmplwi r0, 0x20
    bge lbl_fn_804B69F0_00000994
    lwz r0, 0x324(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x328
    beq lbl_fn_804B69F0_00000988
    stw r3, 0x0(r4)
lbl_fn_804B69F0_00000988:
    lwz r3, 0x324(r31)
    addi r0, r3, 0x1
    stw r0, 0x324(r31)
lbl_fn_804B69F0_00000994:
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmpwi r27, 0xa
    blt lbl_fn_804B69F0_0000094C
    lis r4, lbl_807583DC@ha
    mr r3, r31
    addi r4, r4, lbl_807583DC@l
    li r5, 0x0
    addi r4, r4, 0x7c
    bl fn_801F3FF8
    lwz r0, 0x324(r31)
    stw r3, 0x280(r31)
    cmplwi r0, 0x20
    bge lbl_fn_804B69F0_000009F0
    lwz r0, 0x324(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x328
    beq lbl_fn_804B69F0_000009E4
    stw r3, 0x0(r4)
lbl_fn_804B69F0_000009E4:
    lwz r3, 0x324(r31)
    addi r0, r3, 0x1
    stw r0, 0x324(r31)
lbl_fn_804B69F0_000009F0:
    lis r4, lbl_807583DC@ha
    mr r3, r31
    addi r4, r4, lbl_807583DC@l
    li r5, 0x0
    addi r4, r4, 0xab
    bl fn_801F3FF8
    lwz r0, 0x324(r31)
    stw r3, 0x284(r31)
    cmplwi r0, 0x20
    bge lbl_fn_804B69F0_00000A3C
    lwz r0, 0x324(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x328
    beq lbl_fn_804B69F0_00000A30
    stw r3, 0x0(r4)
lbl_fn_804B69F0_00000A30:
    lwz r3, 0x324(r31)
    addi r0, r3, 0x1
    stw r0, 0x324(r31)
lbl_fn_804B69F0_00000A3C:
    lis r29, lbl_807583DC@ha
    li r26, 0x0
    addi r29, r29, lbl_807583DC@l
    li r28, 0x0
    li r30, 0x0
lbl_fn_804B69F0_00000A50:
    mr r3, r31
    add r27, r31, r28
    addi r4, r29, 0xd6
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x288(r27)
    lwz r0, 0x324(r31)
    cmplwi r0, 0x20
    bge lbl_fn_804B69F0_00000A98
    lwz r0, 0x324(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x328
    beq lbl_fn_804B69F0_00000A8C
    stw r3, 0x0(r4)
lbl_fn_804B69F0_00000A8C:
    lwz r3, 0x324(r31)
    addi r0, r3, 0x1
    stw r0, 0x324(r31)
lbl_fn_804B69F0_00000A98:
    addi r26, r26, 0x1
    stw r30, 0x2e8(r27)
    cmpwi r26, 0xc
    addi r28, r28, 0x4
    blt lbl_fn_804B69F0_00000A50
    lis r4, lbl_807583DC@ha
    mr r3, r31
    addi r4, r4, lbl_807583DC@l
    li r5, 0x0
    addi r4, r4, 0x101
    bl fn_801F3FF8
    lwz r0, 0x324(r31)
    stw r3, 0x2b8(r31)
    cmplwi r0, 0x20
    bge lbl_fn_804B69F0_00000AF8
    lwz r0, 0x324(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x328
    beq lbl_fn_804B69F0_00000AEC
    stw r3, 0x0(r4)
lbl_fn_804B69F0_00000AEC:
    lwz r3, 0x324(r31)
    addi r0, r3, 0x1
    stw r0, 0x324(r31)
lbl_fn_804B69F0_00000AF8:
    addi r29, r31, 0x328
    b lbl_fn_804B69F0_00000B18
lbl_fn_804B69F0_00000B00:
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_804B69F0_00000B14
    li r4, 0x1
    bl fn_800D246C
lbl_fn_804B69F0_00000B14:
    addi r29, r29, 0x4
lbl_fn_804B69F0_00000B18:
    lwz r0, 0x324(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    addi r0, r3, 0x328
    cmplw r29, r0
    bne lbl_fn_804B69F0_00000B00
    mr r3, r31
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804B6D4C(void)
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
    beq lbl_fn_804B6D4C_00000BDC
    lis r5, lbl_80790BC8@ha
    li r4, 0x0
    addi r5, r5, lbl_80790BC8@l
    stw r5, 0x0(r3)
    stw r4, 0x324(r3)
    lwz r0, lbl_8087F5B0
    cmpwi r0, 0x0
    beq lbl_fn_804B6D4C_00000B90
    stw r4, lbl_8087F5B0
lbl_fn_804B6D4C_00000B90:
    addic. r4, r3, 0x3a8
    beq lbl_fn_804B6D4C_00000BC0
    beq lbl_fn_804B6D4C_00000BC0
    beq lbl_fn_804B6D4C_00000BC0
    beq lbl_fn_804B6D4C_00000BC0
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_804B6D4C_00000BC0
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_804B6D4C_00000BC0:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_804B6D4C_00000BDC
    mr r3, r30
    bl dtor_80084684
lbl_fn_804B6D4C_00000BDC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804B6DFC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_804B6DFC_00000CE0
    addi r31, r28, 0x328
    b lbl_fn_804B6DFC_00000C44
lbl_fn_804B6DFC_00000C2C:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_804B6DFC_00000C40
    li r4, 0x0
    bl fn_800D246C
lbl_fn_804B6DFC_00000C40:
    addi r31, r31, 0x4
lbl_fn_804B6DFC_00000C44:
    lwz r0, 0x324(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    addi r0, r3, 0x328
    cmplw r31, r0
    bne lbl_fn_804B6DFC_00000C2C
    lwz r5, 0x2b8(r28)
    mr r3, r28
    li r4, 0x1
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    bl fn_804B6F08
    lwz r3, lbl_8087F628
    lwz r0, 0xc8(r3)
    cmpwi r0, 0x8
    blt lbl_fn_804B6DFC_00000CD8
    lwz r4, 0x250(r28)
    lis r31, lbl_807583DC@ha
    addi r31, r31, lbl_807583DC@l
    la r30, lbl_8087E100
    addi r3, r31, 0x11e
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801FEE08
    lwz r4, 0x250(r28)
    addi r3, r31, 0x12c
    la r30, lbl_8087E100
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801FEE08
lbl_fn_804B6DFC_00000CD8:
    li r3, 0x1
    b lbl_fn_804B6DFC_00000CE4
lbl_fn_804B6DFC_00000CE0:
    li r3, 0x0
lbl_fn_804B6DFC_00000CE4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804B6F08(void)
{
    nofralloc
    stwu r1, -0x270(r1)
    mflr r0
    stw r0, 0x274(r1)
    addi r11, r1, 0x260
    stfd f31, 0x260(r1)
    psq_st f31, 0x268(r1), 0, 0
    bl _savegpr_18
    lwz r0, 0x2bc(r3)
    mr r19, r3
    cmpw r0, r4
    beq lbl_fn_804B6F08_000014C8
    cmpwi r4, 0x0
    blt lbl_fn_804B6F08_000014C8
    lwz r20, 0x2e0(r3)
    li r23, 0x0
    stw r0, 0x2c0(r3)
    stw r23, 0x2e0(r3)
    stw r4, 0x2bc(r3)
    bl fn_804B76F4
    lwz r0, 0x2bc(r19)
    cmpwi r0, 0x1
    beq lbl_fn_804B6F08_00000D80
    cmpwi r0, 0x2
    beq lbl_fn_804B6F08_000011F4
    cmpwi r0, 0x3
    beq lbl_fn_804B6F08_00001228
    cmpwi r0, 0x4
    beq lbl_fn_804B6F08_0000133C
    cmpwi r0, 0x5
    beq lbl_fn_804B6F08_000014A4
    b lbl_fn_804B6F08_000014C8
lbl_fn_804B6F08_00000D80:
    lwz r12, 0x0(r19)
    mr r3, r19
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x3ac(r19)
    li r4, 0x0
    subf r0, r0, r0
    stw r0, 0x3ac(r19)
    lwz r3, lbl_8087F628
    addi r21, r3, 0x430
    mr r3, r21
    bl fn_8050F5AC
    lis r4, __files@ha
    lis r5, lbl_807583DC@ha
    mr r20, r3
    addi r22, r1, 0x14
    addi r25, r5, lbl_807583DC@l
    addi r26, r4, __files@l
    lis r29, 0xcccd
    lis r24, 0x4000
    lis r28, 0x1555
    lis r30, 0x2aab
    lis r31, lbl_80775A88@ha
    b lbl_fn_804B6F08_0000103C
lbl_fn_804B6F08_00000DE4:
    lwz r4, 0x3ac(r19)
    lwz r3, 0x3b0(r19)
    cmplw r4, r3
    bge lbl_fn_804B6F08_00000E10
    addi r4, r4, 0x1
    lwz r3, 0x3a8(r19)
    slwi r0, r4, 2
    stw r4, 0x3ac(r19)
    add r3, r3, r0
    stw r20, -0x4(r3)
    b lbl_fn_804B6F08_0000102C
lbl_fn_804B6F08_00000E10:
    subi r0, r24, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_804B6F08_00000E34
    addi r4, r25, 0x13a
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804B6F08_00000E34:
    addi r3, r19, 0x3b0
    stw r23, 0x14(r1)
    subi r0, r24, 0x1
    stw r23, 0x18(r1)
    stw r23, 0x1c(r1)
    stw r3, 0x20(r1)
    stw r23, 0x24(r1)
    lwz r3, 0x3ac(r19)
    lwz r27, 0x3b0(r19)
    addi r3, r3, 0x1
    subf r3, r27, r3
    subf r0, r27, r0
    cmplw r3, r0
    stw r3, 0x10(r1)
    ble lbl_fn_804B6F08_00000E84
    addi r4, r25, 0x13a
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804B6F08_00000E84:
    addi r0, r28, 0x5555
    cmplw r27, r0
    bge lbl_fn_804B6F08_00000ECC
    addi r4, r27, 0x1
    subi r5, r29, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x10(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_804B6F08_00000EC0
    addi r3, r1, 0x10
lbl_fn_804B6F08_00000EC0:
    lwz r0, 0x0(r3)
    add r18, r27, r0
    b lbl_fn_804B6F08_00000F08
lbl_fn_804B6F08_00000ECC:
    subi r0, r30, 0x5556
    cmplw r27, r0
    bge lbl_fn_804B6F08_00000F04
    addi r3, r27, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_804B6F08_00000EF8
    addi r3, r1, 0x10
lbl_fn_804B6F08_00000EF8:
    lwz r0, 0x0(r3)
    add r18, r27, r0
    b lbl_fn_804B6F08_00000F08
lbl_fn_804B6F08_00000F04:
    subi r18, r24, 0x1
lbl_fn_804B6F08_00000F08:
    subi r0, r24, 0x1
    cmplw r18, r0
    ble lbl_fn_804B6F08_00000F28
    addi r4, r25, 0x13a
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804B6F08_00000F28:
    slwi r3, r18, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_804B6F08_00000F50
    addi r3, r26, 0xa0
    addi r4, r31, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804B6F08_00000F50:
    lwz r0, 0x18(r1)
    stw r27, 0x14(r1)
    slwi r3, r0, 2
    stw r18, 0x1c(r1)
    lwz r0, 0x3ac(r19)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r27, r0
    stwx r20, r3, r0
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x3ac(r19)
    lwz r20, 0x3a8(r19)
    slwi r4, r4, 2
    add r5, r20, r4
    subf r5, r20, r5
    mr r4, r20
    srawi r5, r5, 2
    addze r27, r5
    subf r0, r27, r0
    stw r0, 0x24(r1)
    slwi r18, r27, 2
    slwi r0, r0, 2
    mr r5, r18
    add r3, r3, r0
    bl memcpy
    mr r3, r20
    mr r5, r18
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    cmpwi r22, 0x0
    add r0, r0, r27
    stw r0, 0x18(r1)
    stw r23, 0x3ac(r19)
    lwz r3, 0x3b0(r19)
    lwz r0, 0x1c(r1)
    stw r0, 0x3b0(r19)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x3a8(r19)
    stw r0, 0x3a8(r19)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x3ac(r19)
    stw r23, 0x18(r1)
    beq lbl_fn_804B6F08_0000102C
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_804B6F08_0000102C
    stw r23, 0x18(r1)
    bl dtor_80084684
lbl_fn_804B6F08_0000102C:
    mr r3, r21
    li r4, 0x0
    bl fn_8050F668
    mr r20, r3
lbl_fn_804B6F08_0000103C:
    cmpwi r20, -0x1
    bne lbl_fn_804B6F08_00000DE4
    mr r3, r19
    bl fn_804B9014
    lwz r3, lbl_8087F628
    lwz r0, 0xe28(r3)
    lwz r3, 0xe2c(r3)
    or. r0, r3, r0
    bne lbl_fn_804B6F08_000010A8
    lwz r0, 0x2c0(r19)
    cmpwi r0, 0x4
    beq lbl_fn_804B6F08_000010A8
    lwz r3, lbl_8087F588
    li r4, 0x0
    lfs f1, lbl_808873A8
    li r5, 0x1
    bl fn_804AC83C
    lwz r3, lbl_8087F588
    bl fn_804ACD10
    lwz r4, lbl_8087F86C
    lwz r3, lbl_8087F588
    lwz r4, 0x804(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804B6F08_000010A0
    b lbl_fn_804B6F08_000010A4
lbl_fn_804B6F08_000010A0:
    la r4, lbl_808813D0
lbl_fn_804B6F08_000010A4:
    bl fn_804AD1EC
lbl_fn_804B6F08_000010A8:
    lwz r3, lbl_8087F628
    lwz r0, 0xc8(r3)
    cmpwi r0, 0x8
    blt lbl_fn_804B6F08_0000112C
    lwz r4, 0x250(r19)
    lis r20, lbl_807583DC@ha
    addi r20, r20, lbl_807583DC@l
    addi r3, r20, 0x14e
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873AC
    mr r4, r3
    mr r3, r18
    li r5, 0x1
    bl fn_801FEDBC
    lwz r4, 0x250(r19)
    addi r3, r20, 0x14e
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873AC
    mr r4, r3
    mr r3, r18
    li r5, 0x2
    bl fn_801FEDBC
    lwz r4, 0x250(r19)
    addi r3, r20, 0x14e
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873AC
    mr r4, r3
    mr r3, r18
    li r5, 0x3
    bl fn_801FEDBC
lbl_fn_804B6F08_0000112C:
    lwz r18, 0x24c(r19)
    cmpwi r18, 0x0
    beq lbl_fn_804B6F08_00001158
    mr r3, r18
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808873A8
    stfs f0, 0x104(r18)
    lwz r0, 0xfc(r18)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r18)
lbl_fn_804B6F08_00001158:
    lwz r18, 0x250(r19)
    cmpwi r18, 0x0
    beq lbl_fn_804B6F08_00001184
    mr r3, r18
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808873A8
    stfs f0, 0x104(r18)
    lwz r0, 0xfc(r18)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r18)
lbl_fn_804B6F08_00001184:
    lwz r18, 0x254(r19)
    cmpwi r18, 0x0
    beq lbl_fn_804B6F08_000011B0
    mr r3, r18
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808873A8
    stfs f0, 0x104(r18)
    lwz r0, 0xfc(r18)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r18)
lbl_fn_804B6F08_000011B0:
    lfs f31, lbl_808873A8
    li r20, 0x0
lbl_fn_804B6F08_000011B8:
    lwz r18, 0x258(r19)
    cmpwi r18, 0x0
    beq lbl_fn_804B6F08_000011E0
    mr r3, r18
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r18)
    lwz r0, 0xfc(r18)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r18)
lbl_fn_804B6F08_000011E0:
    addi r20, r20, 0x1
    addi r19, r19, 0x4
    cmpwi r20, 0xa
    blt lbl_fn_804B6F08_000011B8
    b lbl_fn_804B6F08_000014C8
lbl_fn_804B6F08_000011F4:
    lwz r18, 0x2b8(r19)
    stw r20, 0x2e0(r19)
    cmpwi r18, 0x0
    beq lbl_fn_804B6F08_000014C8
    mr r3, r18
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808873A8
    stfs f0, 0x104(r18)
    lwz r0, 0xfc(r18)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r18)
    b lbl_fn_804B6F08_000014C8
lbl_fn_804B6F08_00001228:
    stb r23, 0x248(r19)
    li r4, 0x0
    lfs f1, lbl_808873A8
    li r5, 0x1
    lwz r3, lbl_8087F588
    li r6, 0x0
    bl fn_804AC96C
    lwz r3, lbl_8087F588
    bl fn_804ACD10
    lwz r5, lbl_8087F588
    li r0, 0x40
    addi r3, r1, 0x24
    lwz r4, 0x38(r5)
    ori r4, r4, 0x4
    stw r4, 0x38(r5)
    stw r20, 0x2e0(r19)
    stw r20, 0x318(r19)
    mtctr r0
lbl_fn_804B6F08_00001270:
    stw r23, 0x4(r3)
    stwu r23, 0x8(r3)
    bdnz lbl_fn_804B6F08_00001270
    lwz r3, 0x318(r19)
    lwz r0, 0x2c8(r19)
    lwz r5, lbl_8087F628
    add r4, r3, r0
    lwz r3, 0x3a8(r19)
    subi r0, r4, 0x1
    addi r18, r5, 0x430
    slwi r20, r0, 2
    lwzx r4, r3, r20
    mr r3, r18
    bl fn_8050F86C
    cmpwi r3, 0x0
    beq lbl_fn_804B6F08_000012EC
    lwz r4, 0x3a8(r19)
    mr r3, r18
    lwzx r4, r4, r20
    bl fn_8050F728
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804B6F08_000012E4
    lwz r3, lbl_8087F86C
    lwz r3, 0x95c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804B6F08_000012E0
    b lbl_fn_804B6F08_000012E4
lbl_fn_804B6F08_000012E0:
    la r3, lbl_808813D0
lbl_fn_804B6F08_000012E4:
    mr r5, r3
    b lbl_fn_804B6F08_00001304
lbl_fn_804B6F08_000012EC:
    lwz r3, lbl_8087F86C
    lwz r5, 0x94c(r3)
    cmpwi r5, 0x0
    beq lbl_fn_804B6F08_00001300
    b lbl_fn_804B6F08_00001304
lbl_fn_804B6F08_00001300:
    la r5, lbl_808813D0
lbl_fn_804B6F08_00001304:
    lwz r4, lbl_8087F86C
    addi r3, r1, 0x28
    lwz r4, 0x7bc(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804B6F08_0000131C
    b lbl_fn_804B6F08_00001320
lbl_fn_804B6F08_0000131C:
    la r4, lbl_808813D0
lbl_fn_804B6F08_00001320:
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F588
    addi r4, r1, 0x28
    li r5, 0x0
    bl fn_804AD000
    b lbl_fn_804B6F08_000014C8
lbl_fn_804B6F08_0000133C:
    lwz r4, 0x284(r19)
    lis r20, lbl_807583DC@ha
    li r0, -0x1
    stb r23, 0x248(r19)
    addi r20, r20, lbl_807583DC@l
    addi r18, r4, 0x58
    stw r23, 0x2e4(r19)
    addi r3, r20, 0x156
    stw r0, 0x2cc(r19)
    stw r0, 0x2d0(r19)
    bl fn_800DC6B4
    lfs f1, lbl_808873B0
    mr r4, r3
    mr r3, r18
    li r5, 0x0
    bl fn_801FEDBC
    lwz r4, 0x284(r19)
    addi r3, r20, 0x161
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873B0
    mr r4, r3
    mr r3, r18
    li r5, 0x0
    bl fn_801FEDBC
    lwz r18, 0x24c(r19)
    cmpwi r18, 0x0
    beq lbl_fn_804B6F08_000013CC
    mr r3, r18
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808873A8
    stfs f0, 0x104(r18)
    lwz r0, 0xfc(r18)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r18)
lbl_fn_804B6F08_000013CC:
    lwz r18, 0x280(r19)
    cmpwi r18, 0x0
    beq lbl_fn_804B6F08_000013F8
    mr r3, r18
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808873A8
    stfs f0, 0x104(r18)
    lwz r0, 0xfc(r18)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r18)
lbl_fn_804B6F08_000013F8:
    lwz r18, 0x284(r19)
    cmpwi r18, 0x0
    beq lbl_fn_804B6F08_00001424
    mr r3, r18
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808873A8
    stfs f0, 0x104(r18)
    lwz r0, 0xfc(r18)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r18)
lbl_fn_804B6F08_00001424:
    lfs f31, lbl_808873A8
    mr r21, r19
    li r22, 0x0
    li r20, 0x0
lbl_fn_804B6F08_00001434:
    lwz r18, 0x288(r21)
    cmpwi r18, 0x0
    beq lbl_fn_804B6F08_0000145C
    mr r3, r18
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r18)
    lwz r0, 0xfc(r18)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r18)
lbl_fn_804B6F08_0000145C:
    addi r22, r22, 0x1
    stw r20, 0x2e8(r21)
    cmpwi r22, 0xc
    addi r21, r21, 0x4
    blt lbl_fn_804B6F08_00001434
    lwz r18, 0x2b8(r19)
    cmpwi r18, 0x0
    beq lbl_fn_804B6F08_00001498
    mr r3, r18
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_808873B4
    stfs f0, 0x104(r18)
    lfs f0, lbl_808873B0
    stfs f0, 0x100(r18)
lbl_fn_804B6F08_00001498:
    mr r3, r19
    bl fn_804B9960
    b lbl_fn_804B6F08_000014C8
lbl_fn_804B6F08_000014A4:
    mr r3, r19
    bl fn_804B9694
    li r0, 0xa
    stw r0, 0x320(r19)
    mr r3, r19
    lwz r12, 0x0(r19)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
lbl_fn_804B6F08_000014C8:
    addi r11, r1, 0x260
    psq_l f31, 0x268(r1), 0, 0
    lfd f31, 0x260(r1)
    bl _restgpr_18
    lwz r0, 0x274(r1)
    mtlr r0
    addi r1, r1, 0x270
    blr
}

asm void fn_804B76EC(void)
{
    nofralloc
    blr
}

asm void fn_804B76F0(void)
{
    nofralloc
    blr
}

asm void fn_804B76F4(void)
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
    lwz r0, 0x2c0(r3)
    cmpwi r0, 0x2
    beq lbl_fn_804B76F4_00001538
    cmpwi r0, 0x3
    beq lbl_fn_804B76F4_0000160C
    cmpwi r0, 0x4
    beq lbl_fn_804B76F4_00001620
    b lbl_fn_804B76F4_000016F4
lbl_fn_804B76F4_00001538:
    lwz r0, 0x2bc(r3)
    cmpwi r0, 0x3
    beq lbl_fn_804B76F4_000016F4
    lwz r30, 0x24c(r3)
    cmpwi r30, 0x0
    beq lbl_fn_804B76F4_00001570
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808873B4
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804B76F4_00001570:
    lwz r30, 0x250(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804B76F4_0000159C
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808873B4
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804B76F4_0000159C:
    lwz r30, 0x254(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804B76F4_000015C8
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808873B4
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804B76F4_000015C8:
    lfs f31, lbl_808873B4
    li r29, 0x0
lbl_fn_804B76F4_000015D0:
    lwz r30, 0x258(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804B76F4_000015F8
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804B76F4_000015F8:
    addi r29, r29, 0x1
    addi r31, r31, 0x4
    cmpwi r29, 0xa
    blt lbl_fn_804B76F4_000015D0
    b lbl_fn_804B76F4_000016F4
lbl_fn_804B76F4_0000160C:
    lwz r3, lbl_8087F588
    bl fn_804ACAF8
    lwz r3, lbl_8087F588
    bl fn_804ACDBC
    b lbl_fn_804B76F4_000016F4
lbl_fn_804B76F4_00001620:
    lwz r30, 0x24c(r3)
    li r0, 0x0
    stw r0, 0x2e4(r3)
    cmpwi r30, 0x0
    beq lbl_fn_804B76F4_00001654
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808873B4
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804B76F4_00001654:
    lwz r30, 0x280(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804B76F4_00001680
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808873B4
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804B76F4_00001680:
    lwz r30, 0x284(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804B76F4_000016AC
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808873B4
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804B76F4_000016AC:
    lfs f31, lbl_808873B4
    li r28, 0x0
    li r30, 0x0
lbl_fn_804B76F4_000016B8:
    lwz r29, 0x288(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804B76F4_000016E0
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804B76F4_000016E0:
    addi r28, r28, 0x1
    stw r30, 0x2e8(r31)
    cmpwi r28, 0xc
    addi r31, r31, 0x4
    blt lbl_fn_804B76F4_000016B8
lbl_fn_804B76F4_000016F4:
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

asm void fn_804B7920(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x2d4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804B7920_00001748
    li r0, 0x0
    stw r0, 0x2d4(r3)
    b lbl_fn_804B7920_000017DC
lbl_fn_804B7920_00001748:
    lwz r0, 0x2bc(r3)
    cmpwi r0, 0x1
    beq lbl_fn_804B7920_00001778
    cmpwi r0, 0x2
    beq lbl_fn_804B7920_000017A4
    cmpwi r0, 0x3
    beq lbl_fn_804B7920_000017AC
    cmpwi r0, 0x4
    beq lbl_fn_804B7920_000017B4
    cmpwi r0, 0x5
    beq lbl_fn_804B7920_000017BC
    b lbl_fn_804B7920_000017DC
lbl_fn_804B7920_00001778:
    li r4, 0x2
    bl fn_804B6F08
    lwz r4, 0x254(r31)
    mr r3, r31
    lfs f0, lbl_808873B0
    stfs f0, 0x104(r4)
    bl fn_804B9694
    lwz r3, 0x254(r31)
    lfs f0, lbl_808873B8
    stfs f0, 0x100(r3)
    b lbl_fn_804B7920_000017DC
lbl_fn_804B7920_000017A4:
    bl fn_804B79F4
    b lbl_fn_804B7920_000017DC
lbl_fn_804B7920_000017AC:
    bl fn_804B7F88
    b lbl_fn_804B7920_000017DC
lbl_fn_804B7920_000017B4:
    bl fn_804B83F4
    b lbl_fn_804B7920_000017DC
lbl_fn_804B7920_000017BC:
    lwz r4, 0x250(r3)
    lfs f0, lbl_808873B0
    lfs f1, 0x100(r4)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_804B7920_000017DC
    li r4, 0x6
    bl fn_804B6F08
lbl_fn_804B7920_000017DC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804B79F4(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_27
    lwz r4, 0x31c(r3)
    mr r27, r3
    cmpwi r4, 0x0
    ble lbl_fn_804B79F4_00001820
    subi r0, r4, 0x1
    stw r0, 0x31c(r3)
    b lbl_fn_804B79F4_00001838
lbl_fn_804B79F4_00001820:
    lwz r3, lbl_8087F610
    bl fn_804DC85C
    mr r3, r27
    bl fn_804B9014
    li r0, 0x96
    stw r0, 0x31c(r27)
lbl_fn_804B79F4_00001838:
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804B79F4_00001868
    bl fn_804AC734
    cmpwi r3, 0x0
    beq lbl_fn_804B79F4_00001D6C
    lwz r3, lbl_8087F588
    bl fn_804ACAF8
    lwz r3, lbl_8087F588
    bl fn_804ACDBC
    b lbl_fn_804B79F4_00001D6C
lbl_fn_804B79F4_00001868:
    mr r3, r27
    bl fn_804B9694
    lwz r29, 0x2e0(r27)
    addi r3, r27, 0x2e0
    lwz r28, 0x2c8(r27)
    li r31, 0x0
    lwz r30, lbl_8087EF70
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x3
    bl fn_804A436C
    mr r3, r30
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804B79F4_000018D0
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    li r31, 0x1
    b lbl_fn_804B79F4_00001904
lbl_fn_804B79F4_000018D0:
    mr r3, r30
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804B79F4_00001904
    addi r3, r1, 0xc
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    li r31, 0x2
lbl_fn_804B79F4_00001904:
    lwz r30, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1a
    mr r3, r30
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804B79F4_00001938
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804B79F4_00001984
lbl_fn_804B79F4_00001938:
    lwz r3, 0x2c8(r27)
    lwz r4, 0x2e0(r27)
    cmpwi r3, 0x0
    subi r0, r4, 0x1
    stw r0, 0x2e0(r27)
    beq lbl_fn_804B79F4_00001974
    cmpwi r0, 0x1
    bge lbl_fn_804B79F4_00001984
    subi r0, r3, 0x1
    li r3, 0x1
    stw r3, 0x2e0(r27)
    mr r3, r27
    stw r0, 0x2c8(r27)
    bl fn_804B9014
    b lbl_fn_804B79F4_00001984
lbl_fn_804B79F4_00001974:
    cmpwi r0, 0x0
    bge lbl_fn_804B79F4_00001984
    li r0, 0x0
    stw r0, 0x2e0(r27)
lbl_fn_804B79F4_00001984:
    mr r3, r30
    li r4, 0x0
    li r5, 0x17
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804B79F4_000019B4
    mr r3, r30
    li r4, 0x0
    li r5, 0x2
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804B79F4_00001A1C
lbl_fn_804B79F4_000019B4:
    lwz r4, 0x2e0(r27)
    cmpwi r4, 0x0
    ble lbl_fn_804B79F4_00001AA4
    lwz r3, 0x2c8(r27)
    subi r5, r3, 0xa
    neg r0, r5
    andc r0, r0, r5
    srawi r0, r0, 31
    and r0, r5, r0
    stw r0, 0x2c8(r27)
    cmpw r0, r3
    beq lbl_fn_804B79F4_00001A08
    subf r3, r0, r3
    subi r0, r4, 0xa
    subf r3, r3, r0
    cmpwi r3, 0x1
    li r0, 0x1
    ble lbl_fn_804B79F4_00001A00
    mr r0, r3
lbl_fn_804B79F4_00001A00:
    stw r0, 0x2e0(r27)
    b lbl_fn_804B79F4_00001A10
lbl_fn_804B79F4_00001A08:
    li r0, 0x1
    stw r0, 0x2e0(r27)
lbl_fn_804B79F4_00001A10:
    mr r3, r27
    bl fn_804B9014
    b lbl_fn_804B79F4_00001AA4
lbl_fn_804B79F4_00001A1C:
    mr r3, r30
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804B79F4_00001A4C
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804B79F4_00001AA4
lbl_fn_804B79F4_00001A4C:
    lwz r3, 0x2e0(r27)
    addi r0, r3, 0x1
    stw r0, 0x2e0(r27)
    cmpwi r0, 0xa
    ble lbl_fn_804B79F4_00001A94
    lwz r5, 0x2c8(r27)
    lwz r3, 0x3ac(r27)
    add r4, r5, r0
    addi r0, r3, 0x1
    cmplw r4, r0
    bge lbl_fn_804B79F4_00001A88
    addi r0, r5, 0x1
    stw r0, 0x2c8(r27)
    mr r3, r27
    bl fn_804B9014
lbl_fn_804B79F4_00001A88:
    li r0, 0xa
    stw r0, 0x2e0(r27)
    b lbl_fn_804B79F4_00001AA4
lbl_fn_804B79F4_00001A94:
    lwz r3, 0x3ac(r27)
    cmplw r0, r3
    blt lbl_fn_804B79F4_00001AA4
    stw r3, 0x2e0(r27)
lbl_fn_804B79F4_00001AA4:
    mr r3, r30
    li r4, 0x0
    li r5, 0x18
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804B79F4_00001AD4
    mr r3, r30
    li r4, 0x0
    li r5, 0x3
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804B79F4_00001B70
lbl_fn_804B79F4_00001AD4:
    lwz r0, 0x2e0(r27)
    cmpwi r0, 0x0
    ble lbl_fn_804B79F4_00001B70
    lwz r4, 0x3ac(r27)
    lwz r3, 0x2c8(r27)
    subi r0, r4, 0xa
    cmpw r3, r0
    blt lbl_fn_804B79F4_00001B08
    cmplwi r4, 0xa
    li r0, 0xa
    bge lbl_fn_804B79F4_00001B04
    mr r0, r4
lbl_fn_804B79F4_00001B04:
    stw r0, 0x2e0(r27)
lbl_fn_804B79F4_00001B08:
    lwz r3, 0x3ac(r27)
    cmplwi r3, 0xa
    ble lbl_fn_804B79F4_00001B68
    lwz r4, 0x2c8(r27)
    subi r5, r3, 0xa
    addi r0, r4, 0xa
    cmplw r0, r5
    bge lbl_fn_804B79F4_00001B2C
    mr r5, r0
lbl_fn_804B79F4_00001B2C:
    cmpw r5, r4
    stw r5, 0x2c8(r27)
    beq lbl_fn_804B79F4_00001B60
    lwz r3, 0x2e0(r27)
    subf r4, r4, r5
    li r0, 0xa
    addi r3, r3, 0xa
    subf r3, r4, r3
    cmpwi r3, 0xa
    bge lbl_fn_804B79F4_00001B58
    mr r0, r3
lbl_fn_804B79F4_00001B58:
    stw r0, 0x2e0(r27)
    b lbl_fn_804B79F4_00001B68
lbl_fn_804B79F4_00001B60:
    li r0, 0xa
    stw r0, 0x2e0(r27)
lbl_fn_804B79F4_00001B68:
    mr r3, r27
    bl fn_804B9014
lbl_fn_804B79F4_00001B70:
    lwz r0, 0x2e0(r27)
    cmpw r0, r29
    bne lbl_fn_804B79F4_00001B88
    lwz r0, 0x2c8(r27)
    cmpw r28, r0
    beq lbl_fn_804B79F4_00001BA0
lbl_fn_804B79F4_00001B88:
    addi r3, r1, 0x14
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_804B79F4_00001BA0:
    cmpwi r31, 0x1
    bne lbl_fn_804B79F4_00001C6C
    lwz r0, 0x2e0(r27)
    cmpwi r0, 0x0
    bne lbl_fn_804B79F4_00001C80
    lwz r3, lbl_8087F628
    lwz r0, 0xc8(r3)
    cmpwi r0, 0x8
    blt lbl_fn_804B79F4_00001C04
    lwz r3, lbl_8087F588
    li r4, 0x0
    lfs f1, lbl_808873A8
    li r5, 0x1
    bl fn_804AC83C
    lwz r3, lbl_8087F588
    bl fn_804ACD10
    lwz r4, lbl_8087F86C
    lwz r3, lbl_8087F588
    lwz r4, 0x7fc(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804B79F4_00001BF8
    b lbl_fn_804B79F4_00001BFC
lbl_fn_804B79F4_00001BF8:
    la r4, lbl_808813D0
lbl_fn_804B79F4_00001BFC:
    bl fn_804AD1EC
    b lbl_fn_804B79F4_00001C80
lbl_fn_804B79F4_00001C04:
    addi r3, r3, 0x430
    bl fn_8050F408
    addi r0, r3, 0x1
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_804B79F4_00001C5C
    lwz r3, lbl_8087F588
    li r4, 0x0
    lfs f1, lbl_808873A8
    li r5, 0x1
    bl fn_804AC83C
    lwz r3, lbl_8087F588
    bl fn_804ACD10
    lwz r4, lbl_8087F86C
    lwz r3, lbl_8087F588
    lwz r4, 0x79c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804B79F4_00001C50
    b lbl_fn_804B79F4_00001C54
lbl_fn_804B79F4_00001C50:
    la r4, lbl_808813D0
lbl_fn_804B79F4_00001C54:
    bl fn_804AD1EC
    b lbl_fn_804B79F4_00001C80
lbl_fn_804B79F4_00001C5C:
    mr r3, r27
    li r4, 0x4
    bl fn_804B6F08
    b lbl_fn_804B79F4_00001C80
lbl_fn_804B79F4_00001C6C:
    cmpwi r31, 0x2
    bne lbl_fn_804B79F4_00001C80
    mr r3, r27
    li r4, 0x5
    bl fn_804B6F08
lbl_fn_804B79F4_00001C80:
    lwz r3, lbl_8087F0A8
    li r4, 0x34
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_804B79F4_00001CD8
    lwz r0, 0x2e0(r27)
    cmpwi r0, 0x0
    beq lbl_fn_804B79F4_00001CD8
    lwz r3, lbl_8087F628
    lwz r0, 0xc8(r3)
    cmpwi r0, 0x8
    bge lbl_fn_804B79F4_00001CD8
    addi r3, r1, 0x10
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r27
    li r4, 0x3
    bl fn_804B6F08
lbl_fn_804B79F4_00001CD8:
    lfs f0, lbl_808873B0
    lis r28, lbl_807583DC@ha
    stfs f0, 0x2c(r1)
    addi r28, r28, lbl_807583DC@l
    addi r3, r28, 0x16c
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    lwz r29, 0x250(r27)
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r29
    addi r3, r1, 0x18
    bl fn_801F4E8C
    lfs f4, 0x18(r1)
    addi r4, r28, 0x179
    lfs f3, 0x1c(r1)
    addi r5, r1, 0x2c
    lfs f2, 0x20(r1)
    lfs f1, 0x28(r1)
    lfs f0, lbl_808873A8
    stfs f4, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f2, 0x34(r1)
    stfs f1, 0x3c(r1)
    stfs f0, 0x38(r1)
    lwz r3, 0x2b8(r27)
    bl fn_801F4728
    lwz r4, 0x2b8(r27)
    addi r3, r28, 0x181
    addi r27, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873BC
    mr r4, r3
    mr r3, r27
    bl fn_801FECE0
lbl_fn_804B79F4_00001D6C:
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
