#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);
extern void __register_global_object(void);
extern void _restgpr_21(void);
extern void _restgpr_26(void);
extern void _savegpr_21(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80709630(void);
extern void fn_8070D240(void);
extern void fn_8070EE90(void);
extern void fn_8070EFE0(void);
extern void fn_8070F130(void);
extern void fn_80717630(void);
extern void fn_80717C00(void);
extern void fn_80717C10(void);
extern void fn_807180A0(void);
extern void fn_807183D0(void);
extern void fn_8071E680(void);
extern void fn_8071E970(void);
extern void fn_80725170(void);
extern void fn_807252D0(void);

/* External data declarations */
extern u8 lbl_8076B868[];
extern u8 lbl_8076BCC8[];
extern u8 lbl_8076C094[];
extern u8 lbl_8076C558[];
extern u8 lbl_8076C8FC[];
extern u8 lbl_807C5E28[];
extern u8 lbl_807C5E50[];
extern u8 lbl_80862F68[];
extern u8 lbl_80862F78[];

/* Small data declarations */
extern u32 lbl_808804B0;
extern u32 lbl_808804B8;
extern u32 lbl_80889070;
extern u32 lbl_80889074;
extern u32 lbl_80889078;
extern u32 lbl_8088907C;
extern u32 lbl_80889080;
extern u32 lbl_80889088;
extern u32 lbl_80889090;

/* Function declarations */
void pad_03_807096F4_text(void);
void fn_80709700(void);
void fn_807097C0(void);
void fn_807097D0(void);
void fn_807097E0(void);
void fn_807097F0(void);
void fn_80709800(void);
void fn_80709810(void);
void fn_80709820(void);
void fn_80709830(void);
void fn_80709870(void);
void fn_80709950(void);
void fn_80709AB0(void);
void fn_80709AD0(void);
void fn_80709CC0(void);
void fn_80709F20(void);
void fn_8070A030(void);
void fn_8070A050(void);
void fn_8070A5E0(void);
void fn_8070A620(void);
void fn_8070A9F0(void);
void fn_8070AB60(void);
void fn_8070AB70(void);
void fn_8070AB80(void);
void fn_8070AB90(void);
void fn_8070ABA0(void);
void fn_8070ABB0(void);
void fn_8070ABC0(void);
void fn_8070ABD0(void);
void fn_8070ABE0(void);
void fn_8070AC10(void);
void fn_8070AC20(void);
void fn_8070AC80(void);
void fn_8070AC90(void);
void fn_8070ACB0(void);
void fn_8070AD40(void);
void fn_8070AD50(void);
void fn_8070AD60(void);
void fn_8070AD70(void);
void fn_8070AD80(void);
void fn_8070AD90(void);
void fn_8070ADA0(void);
void fn_8070ADE0(void);
void fn_8070AE20(void);
void fn_8070AE60(void);
void fn_8070AF30(void);
void fn_8070AF64(void);
void fn_8070AF70(void);
void fn_8070AF90(void);
void fn_8070AFB0(void);
void fn_8070AFC0(void);
void fn_8070AFD0(void);
void fn_8070B010(void);
void fn_8070B050(void);
void fn_8070B060(void);
void fn_8070B070(void);
void fn_8070B100(void);
void fn_8070B190(void);
void fn_8070B230(void);
void fn_8070B2D0(void);
void fn_8070B370(void);
void fn_8070B3B0(void);
void fn_8070B3F0(void);
void fn_8070B430(void);
void fn_8070B470(void);
void fn_8070B4B0(void);
void fn_8070B530(void);
void fn_8070B590(void);
void fn_8070B5A0(void);
void fn_8070B640(void);

asm void pad_03_807096F4_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
    opword 0x00000000
}

asm void fn_80709700(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807C5E28@ha
    addi r5, r3, 0x68
    stw r0, 0x14(r1)
    addi r6, r3, 0xb0
    lfs f0, lbl_80889074
    cmplw r5, r6
    stw r31, 0xc(r1)
    addi r4, r4, lbl_807C5E28@l
    lfs f1, lbl_80889070
    mr r31, r3
    stw r4, 0x0(r3)
    stfs f1, 0x50(r3)
    stfs f1, 0x54(r3)
    stfs f0, 0x58(r3)
    stfs f0, 0x5c(r3)
    stfs f0, 0x60(r3)
    stfs f0, 0x64(r3)
    bge lbl_fn_80709700_00000094
    addi r4, r6, 0x17
    li r0, 0x18
    subf r4, r5, r4
    divwu r4, r4, r0
    mtctr r4
    bge lbl_fn_80709700_00000094
lbl_fn_80709700_00000074:
    stfs f1, 0x0(r5)
    stfs f1, 0x4(r5)
    stfs f0, 0x8(r5)
    stfs f0, 0xc(r5)
    stfs f0, 0x10(r5)
    stfs f0, 0x14(r5)
    addi r5, r5, 0x18
    bdnz lbl_fn_80709700_00000074
lbl_fn_80709700_00000094:
    addi r3, r3, 0x4
    bl fn_80709630
    li r0, -0x1
    stw r0, 0xb0(r31)
    addi r3, r31, 0x4
    bl fn_80709630
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807097C0(void)
{
    nofralloc
    addi r3, r3, 0x4
    b fn_80709630
}

asm void fn_807097D0(void)
{
    nofralloc
    slwi r0, r4, 2
    add r3, r3, r0
    stfs f1, 0x34(r3)
    blr
}

asm void fn_807097E0(void)
{
    nofralloc
    slwi r0, r4, 2
    add r3, r3, r0
    lfs f1, 0x34(r3)
    blr
}

asm void fn_807097F0(void)
{
    nofralloc
    stb r4, 0x1c(r3)
    stfs f1, 0x18(r3)
    blr
}

asm void fn_80709800(void)
{
    nofralloc
    stb r4, 0x1d(r3)
    blr
}

asm void fn_80709810(void)
{
    nofralloc
    slwi r0, r4, 2
    add r3, r3, r0
    stfs f1, 0x40(r3)
    blr
}

asm void fn_80709820(void)
{
    nofralloc
    slwi r0, r4, 2
    add r3, r3, r0
    lfs f1, 0x40(r3)
    blr
}

asm void fn_80709830(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80709830_00000164
    cmpwi r4, 0x0
    ble lbl_fn_80709830_00000164
    bl dtor_80084684
lbl_fn_80709830_00000164:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80709870(void)
{
    nofralloc
    lfs f0, lbl_8088907C
    lis r8, lbl_807C5E50@ha
    li r7, 0x0
    lfs f1, lbl_80889078
    addi r8, r8, lbl_807C5E50@l
    li r6, -0x1
    li r0, 0x1
    stw r8, 0x0(r3)
    stw r7, 0x4(r3)
    stw r7, 0x8(r3)
    stw r7, 0xc(r3)
    stw r7, 0x10(r3)
    stw r7, 0x14(r3)
    stw r7, 0x18(r3)
    stfs f1, 0x30(r3)
    stfs f1, 0x34(r3)
    stfs f0, 0x38(r3)
    stfs f0, 0x3c(r3)
    stfs f0, 0x40(r3)
    stfs f0, 0x44(r3)
    stfs f0, 0x48(r3)
    stw r7, 0x4c(r3)
    stw r7, 0x54(r3)
    stfs f1, 0x58(r3)
    stfs f1, 0x5c(r3)
    stfs f0, 0x60(r3)
    stfs f0, 0x64(r3)
    stfs f0, 0x68(r3)
    stw r7, 0x6c(r3)
    stw r7, 0x70(r3)
    stfs f0, 0x74(r3)
    stfs f0, 0x78(r3)
    stw r7, 0x7c(r3)
    stw r7, 0x80(r3)
    stw r6, 0x9c(r3)
    stfs f0, 0xa0(r3)
    stfs f0, 0xa4(r3)
    stw r7, 0xa8(r3)
    stw r7, 0xac(r3)
    stw r7, 0xf0(r3)
    stw r7, 0xf4(r3)
    stw r7, 0xf8(r3)
    stw r7, 0xfc(r3)
    stw r7, 0x100(r3)
    stw r7, 0x104(r3)
    stw r7, 0x108(r3)
    stw r7, 0x10c(r3)
    stw r7, 0x1c(r3)
    stw r7, 0x20(r3)
    stw r7, 0x24(r3)
    stw r7, 0x28(r3)
    stw r7, 0x2c(r3)
    stb r0, 0x99(r3)
    stb r4, 0x98(r3)
    stw r5, 0x50(r3)
    blr
}

asm void fn_80709950(void)
{
    nofralloc
    li r0, 0x0
    stwu r1, -0x20(r1)
    lfs f4, lbl_8088907C
    cmpw r0, r0
    lfs f0, lbl_80889078
    stw r0, 0x88(r3)
    stb r0, 0x8c(r3)
    stb r0, 0x84(r3)
    stb r0, 0x85(r3)
    stb r0, 0x86(r3)
    stb r0, 0x87(r3)
    stw r0, 0x90(r3)
    stw r0, 0x94(r3)
    stfs f4, 0x64(r3)
    stfs f4, 0x68(r3)
    stw r0, 0x6c(r3)
    stw r0, 0x70(r3)
    stfs f0, 0x74(r3)
    stfs f0, 0x78(r3)
    stw r0, 0x7c(r3)
    stw r0, 0x80(r3)
    blt lbl_fn_80709950_000002B8
    b lbl_fn_80709950_000002F4
lbl_fn_80709950_000002B8:
    xoris r4, r0, 0x8000
    lis r0, 0x4330
    stw r4, 0xc(r1)
    fsubs f1, f4, f4
    lfd f3, lbl_80889080
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    stw r4, 0x14(r1)
    fsubs f2, f0, f3
    stw r0, 0x10(r1)
    lfd f0, 0x10(r1)
    fmuls f1, f2, f1
    fsubs f0, f0, f3
    fdivs f0, f1, f0
    fadds f4, f4, f0
lbl_fn_80709950_000002F4:
    lwz r5, 0x10(r3)
    li r0, 0x0
    lfs f1, lbl_80889078
    li r4, 0x1
    lfs f0, lbl_8088907C
    cmpwi r5, 0x0
    stfs f4, 0x64(r3)
    stfs f1, 0x68(r3)
    stw r4, 0x6c(r3)
    stw r0, 0x70(r3)
    stfs f1, 0xb0(r3)
    stfs f1, 0xbc(r3)
    stfs f0, 0xb4(r3)
    stfs f0, 0xb8(r3)
    stfs f1, 0xa0(r3)
    stfs f1, 0xa4(r3)
    stw r0, 0xa8(r3)
    stw r0, 0xac(r3)
    stfs f0, 0xc0(r3)
    stb r0, 0x9a(r3)
    stfs f0, 0xc4(r3)
    beq lbl_fn_80709950_00000350
    lwz r4, 0x34(r5)
lbl_fn_80709950_00000350:
    lfs f0, lbl_8088907C
    li r0, 0x0
    lfs f1, lbl_80889078
    stw r4, 0xc8(r3)
    stfs f1, 0xcc(r3)
    stfs f0, 0xd0(r3)
    stfs f0, 0xd4(r3)
    stfs f0, 0xd8(r3)
    stfs f0, 0xdc(r3)
    stfs f1, 0xe0(r3)
    stfs f1, 0xe4(r3)
    stfs f1, 0xe8(r3)
    stfs f1, 0xec(r3)
    stfs f1, 0x30(r3)
    stfs f1, 0x34(r3)
    stfs f0, 0x38(r3)
    stfs f0, 0x3c(r3)
    stfs f0, 0x40(r3)
    stfs f0, 0x44(r3)
    stfs f0, 0x48(r3)
    stw r0, 0x4c(r3)
    stw r0, 0x50(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_80709AB0(void)
{
    nofralloc
    lbz r0, 0x85(r3)
    cmpwi r0, 0x0
    bnelr
    li r0, 0x1
    stb r0, 0x84(r3)
    blr
}

asm void fn_80709AD0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    lis r0, 0x4330
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r12, 0x0(r3)
    stw r0, 0x8(r1)
    lwz r12, 0x24(r12)
    stw r0, 0x10(r1)
    mtctr r12
    bctrl
    cmpwi r30, 0x0
    mr r31, r3
    beq lbl_fn_80709AD0_00000474
    lwz r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80709AD0_00000474
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80709AD0_00000474
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80709AD0_0000048C
lbl_fn_80709AD0_00000474:
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    b lbl_fn_80709AD0_000005A8
lbl_fn_80709AD0_0000048C:
    lwz r4, 0x6c(r29)
    lwz r3, 0x70(r29)
    cmpw r3, r4
    blt lbl_fn_80709AD0_000004A4
    lfs f1, 0x68(r29)
    b lbl_fn_80709AD0_000004E0
lbl_fn_80709AD0_000004A4:
    xoris r0, r3, 0x8000
    stw r0, 0xc(r1)
    xoris r0, r4, 0x8000
    lfd f4, lbl_80889080
    lfd f0, 0x8(r1)
    lfs f1, 0x68(r29)
    lfs f2, 0x64(r29)
    fsubs f3, f0, f4
    stw r0, 0x14(r1)
    fsubs f1, f1, f2
    lfd f0, 0x10(r1)
    fsubs f0, f0, f4
    fmuls f1, f3, f1
    fdivs f0, f1, f0
    fadds f1, f2, f0
lbl_fn_80709AD0_000004E0:
    xoris r0, r30, 0x8000
    stw r0, 0xc(r1)
    lfd f4, lbl_80889080
    cmpw r3, r4
    lfd f0, 0x8(r1)
    fsubs f0, f0, f4
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r5, 0x1c(r1)
    blt lbl_fn_80709AD0_00000514
    lfs f1, 0x68(r29)
    b lbl_fn_80709AD0_0000054C
lbl_fn_80709AD0_00000514:
    xoris r0, r3, 0x8000
    stw r0, 0x14(r1)
    xoris r0, r4, 0x8000
    lfs f0, 0x68(r29)
    lfd f1, 0x10(r1)
    lfs f2, 0x64(r29)
    fsubs f3, f1, f4
    stw r0, 0xc(r1)
    fsubs f1, f0, f2
    lfd f0, 0x8(r1)
    fmuls f1, f3, f1
    fsubs f0, f0, f4
    fdivs f0, f1, f0
    fadds f1, f2, f0
lbl_fn_80709AD0_0000054C:
    lwz r3, 0x10(r29)
    li r0, 0x0
    lfs f0, lbl_8088907C
    cmpwi r3, 0x0
    stfs f1, 0x64(r29)
    stfs f0, 0x68(r29)
    stw r5, 0x6c(r29)
    stw r0, 0x70(r29)
    stb r0, 0x98(r29)
    beq lbl_fn_80709AD0_0000057C
    mr r4, r29
    bl fn_80717C10
lbl_fn_80709AD0_0000057C:
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    li r3, 0x0
    li r0, 0x1
    stb r3, 0x86(r29)
    stw r3, 0x88(r29)
    stb r3, 0x8c(r29)
    stb r0, 0x87(r29)
lbl_fn_80709AD0_000005A8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80709CC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lis r0, 0x4330
    cmpwi r4, 0x0
    stw r0, 0x8(r1)
    stw r0, 0x10(r1)
    beq lbl_fn_80709CC0_00000704
    lwz r0, 0x88(r3)
    cmplwi r0, 0x1
    ble lbl_fn_80709CC0_00000604
    cmpwi r0, 0x3
    beq lbl_fn_80709CC0_00000604
    cmpwi r0, 0x2
    beq lbl_fn_80709CC0_00000820
    b lbl_fn_80709CC0_00000820
lbl_fn_80709CC0_00000604:
    lwz r6, 0x7c(r3)
    lwz r4, 0x80(r3)
    cmpw r4, r6
    blt lbl_fn_80709CC0_0000061C
    lfs f2, 0x78(r3)
    b lbl_fn_80709CC0_00000658
lbl_fn_80709CC0_0000061C:
    xoris r0, r4, 0x8000
    stw r0, 0xc(r1)
    xoris r0, r6, 0x8000
    lfd f4, lbl_80889080
    lfd f0, 0x8(r1)
    lfs f1, 0x78(r3)
    lfs f2, 0x74(r3)
    fsubs f3, f0, f4
    stw r0, 0x14(r1)
    fsubs f1, f1, f2
    lfd f0, 0x10(r1)
    fsubs f0, f0, f4
    fmuls f1, f3, f1
    fdivs f0, f1, f0
    fadds f2, f2, f0
lbl_fn_80709CC0_00000658:
    xoris r0, r5, 0x8000
    stw r0, 0xc(r1)
    lfd f1, lbl_80889080
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r5, 0x1c(r1)
    cmpwi r5, 0x0
    bgt lbl_fn_80709CC0_00000688
    li r5, 0x1
lbl_fn_80709CC0_00000688:
    cmpw r4, r6
    blt lbl_fn_80709CC0_00000698
    lfs f1, 0x78(r3)
    b lbl_fn_80709CC0_000006D4
lbl_fn_80709CC0_00000698:
    xoris r0, r4, 0x8000
    stw r0, 0x14(r1)
    xoris r0, r6, 0x8000
    lfd f4, lbl_80889080
    lfd f0, 0x10(r1)
    lfs f1, 0x78(r3)
    lfs f2, 0x74(r3)
    fsubs f3, f0, f4
    stw r0, 0xc(r1)
    fsubs f1, f1, f2
    lfd f0, 0x8(r1)
    fsubs f0, f0, f4
    fmuls f1, f3, f1
    fdivs f0, f1, f0
    fadds f1, f2, f0
lbl_fn_80709CC0_000006D4:
    lfs f0, lbl_8088907C
    li r4, 0x0
    li r0, 0x1
    stfs f1, 0x74(r3)
    stfs f0, 0x78(r3)
    stw r5, 0x7c(r3)
    stw r4, 0x80(r3)
    stw r0, 0x88(r3)
    stb r4, 0x8c(r3)
    b lbl_fn_80709CC0_00000820
    b lbl_fn_80709CC0_00000820
    b lbl_fn_80709CC0_00000820
lbl_fn_80709CC0_00000704:
    lwz r4, 0x88(r3)
    subi r0, r4, 0x1
    cmplwi r0, 0x2
    ble lbl_fn_80709CC0_00000720
    cmpwi r4, 0x0
    bne lbl_fn_80709CC0_00000820
    b lbl_fn_80709CC0_00000820
lbl_fn_80709CC0_00000720:
    lwz r6, 0x7c(r3)
    lwz r4, 0x80(r3)
    cmpw r4, r6
    blt lbl_fn_80709CC0_00000738
    lfs f3, 0x78(r3)
    b lbl_fn_80709CC0_00000774
lbl_fn_80709CC0_00000738:
    xoris r0, r4, 0x8000
    stw r0, 0x14(r1)
    xoris r0, r6, 0x8000
    lfd f4, lbl_80889080
    lfd f0, 0x10(r1)
    lfs f1, 0x78(r3)
    lfs f2, 0x74(r3)
    fsubs f3, f0, f4
    stw r0, 0xc(r1)
    fsubs f1, f1, f2
    lfd f0, 0x8(r1)
    fsubs f0, f0, f4
    fmuls f1, f3, f1
    fdivs f0, f1, f0
    fadds f3, f2, f0
lbl_fn_80709CC0_00000774:
    xoris r0, r5, 0x8000
    stw r0, 0x14(r1)
    lfs f0, lbl_80889078
    lfd f2, lbl_80889080
    lfd f1, 0x10(r1)
    fsubs f0, f0, f3
    fsubs f1, f1, f2
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r7, 0x1c(r1)
    cmpwi r7, 0x0
    bgt lbl_fn_80709CC0_000007AC
    li r7, 0x1
lbl_fn_80709CC0_000007AC:
    cmpw r4, r6
    blt lbl_fn_80709CC0_000007BC
    lfs f1, 0x78(r3)
    b lbl_fn_80709CC0_000007F8
lbl_fn_80709CC0_000007BC:
    xoris r0, r4, 0x8000
    stw r0, 0xc(r1)
    xoris r0, r6, 0x8000
    lfd f4, lbl_80889080
    lfd f0, 0x8(r1)
    lfs f1, 0x78(r3)
    lfs f2, 0x74(r3)
    fsubs f3, f0, f4
    stw r0, 0x14(r1)
    fsubs f1, f1, f2
    lfd f0, 0x10(r1)
    fsubs f0, f0, f4
    fmuls f1, f3, f1
    fdivs f0, f1, f0
    fadds f1, f2, f0
lbl_fn_80709CC0_000007F8:
    lfs f0, lbl_80889078
    li r5, 0x0
    li r4, 0x3
    li r0, 0x1
    stfs f1, 0x74(r3)
    stfs f0, 0x78(r3)
    stw r7, 0x7c(r3)
    stw r5, 0x80(r3)
    stw r4, 0x88(r3)
    stb r0, 0x8c(r3)
lbl_fn_80709CC0_00000820:
    addi r1, r1, 0x20
    blr
}

asm void fn_80709F20(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lis r5, 0x4330
    lbz r0, 0x87(r3)
    stw r5, 0x8(r1)
    cmpwi r0, 0x0
    stw r5, 0x10(r1)
    bne lbl_fn_80709F20_00000928
    lwz r6, 0x6c(r3)
    lwz r5, 0x70(r3)
    cmpw r5, r6
    blt lbl_fn_80709F20_00000860
    lfs f2, 0x68(r3)
    b lbl_fn_80709F20_0000089C
lbl_fn_80709F20_00000860:
    xoris r0, r5, 0x8000
    stw r0, 0xc(r1)
    xoris r0, r6, 0x8000
    lfd f4, lbl_80889080
    lfd f0, 0x8(r1)
    lfs f1, 0x68(r3)
    lfs f2, 0x64(r3)
    fsubs f3, f0, f4
    stw r0, 0x14(r1)
    fsubs f1, f1, f2
    lfd f0, 0x10(r1)
    fsubs f0, f0, f4
    fmuls f1, f3, f1
    fdivs f0, f1, f0
    fadds f2, f2, f0
lbl_fn_80709F20_0000089C:
    xoris r0, r4, 0x8000
    stw r0, 0xc(r1)
    lfs f0, lbl_80889078
    cmpw r5, r6
    lfd f4, lbl_80889080
    lfd f1, 0x8(r1)
    fsubs f0, f0, f2
    fsubs f1, f1, f4
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
    blt lbl_fn_80709F20_000008D8
    lfs f1, 0x68(r3)
    b lbl_fn_80709F20_00000910
lbl_fn_80709F20_000008D8:
    xoris r0, r5, 0x8000
    stw r0, 0x14(r1)
    xoris r0, r6, 0x8000
    lfs f0, 0x68(r3)
    lfd f1, 0x10(r1)
    lfs f2, 0x64(r3)
    fsubs f3, f1, f4
    stw r0, 0xc(r1)
    fsubs f1, f0, f2
    lfd f0, 0x8(r1)
    fmuls f1, f3, f1
    fsubs f0, f0, f4
    fdivs f0, f1, f0
    fadds f1, f2, f0
lbl_fn_80709F20_00000910:
    lfs f0, lbl_80889078
    li r0, 0x0
    stfs f1, 0x64(r3)
    stfs f0, 0x68(r3)
    stw r4, 0x6c(r3)
    stw r0, 0x70(r3)
lbl_fn_80709F20_00000928:
    addi r1, r1, 0x20
    blr
}

asm void fn_8070A030(void)
{
    nofralloc
    lwz r0, 0x88(r3)
    li r3, 0x1
    cmpwi r0, 0x1
    beqlr
    cmpwi r0, 0x2
    beqlr
    li r3, 0x0
    blr
}

asm void fn_8070A050(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    stw r30, 0x98(r1)
    stw r29, 0x94(r1)
    mr r29, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lbz r0, 0x86(r29)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_8070A050_00000A04
    lwz r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8070A050_00000A04
    lwz r3, 0x90(r29)
    cmpwi r3, 0x0
    bne lbl_fn_8070A050_000009FC
    lwz r0, 0x88(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8070A050_000009D0
    cmpwi r0, 0x3
    bne lbl_fn_8070A050_00000A04
lbl_fn_8070A050_000009D0:
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    b lbl_fn_8070A050_00000EC4
lbl_fn_8070A050_000009FC:
    subi r0, r3, 0x1
    stw r0, 0x90(r29)
lbl_fn_8070A050_00000A04:
    lbz r0, 0x85(r29)
    li r30, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_8070A050_00000A40
    lbz r0, 0x84(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8070A050_00000EC4
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8070A050_00000EC4
    li r30, 0x1
lbl_fn_8070A050_00000A40:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8070A050_00000A74
    lwz r3, 0x94(r29)
    li r0, -0x1
    cmplw r3, r0
    bge lbl_fn_8070A050_00000A74
    addi r0, r3, 0x1
    stw r0, 0x94(r29)
lbl_fn_8070A050_00000A74:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_8070A050_00000AA8
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    b lbl_fn_8070A050_00000EC4
lbl_fn_8070A050_00000AA8:
    lwz r0, 0x88(r29)
    cmpwi r0, 0x1
    beq lbl_fn_8070A050_00000AC8
    cmpwi r0, 0x3
    beq lbl_fn_8070A050_00000AE4
    cmpwi r0, 0x0
    beq lbl_fn_8070A050_00000B14
    b lbl_fn_8070A050_00000B28
lbl_fn_8070A050_00000AC8:
    lwz r3, 0x80(r29)
    lwz r0, 0x7c(r29)
    cmpw r3, r0
    bge lbl_fn_8070A050_00000B28
    addi r0, r3, 0x1
    stw r0, 0x80(r29)
    b lbl_fn_8070A050_00000B28
lbl_fn_8070A050_00000AE4:
    lwz r3, 0x80(r29)
    lwz r0, 0x7c(r29)
    cmpw r3, r0
    bge lbl_fn_8070A050_00000AFC
    addi r0, r3, 0x1
    stw r0, 0x80(r29)
lbl_fn_8070A050_00000AFC:
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    b lbl_fn_8070A050_00000B28
lbl_fn_8070A050_00000B14:
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
lbl_fn_8070A050_00000B28:
    lwz r3, 0x20(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8070A050_00000B4C
    lwz r12, 0x0(r3)
    mr r5, r29
    lwz r4, 0x28(r29)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_8070A050_00000B4C:
    lwz r0, 0x1c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8070A050_00000D74
    addi r4, r1, 0x48
    addi r3, r1, 0x90
    lfs f0, lbl_8088907C
    cmplw r4, r3
    lfs f1, lbl_80889078
    li r0, 0x0
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    bge lbl_fn_8070A050_00000BEC
    addi r3, r3, 0x17
    li r0, 0x18
    subf r3, r4, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_8070A050_00000BEC
lbl_fn_8070A050_00000BCC:
    stfs f1, 0x0(r4)
    stfs f1, 0x4(r4)
    stfs f0, 0x8(r4)
    stfs f0, 0xc(r4)
    stfs f0, 0x10(r4)
    stfs f0, 0x14(r4)
    addi r4, r4, 0x18
    bdnz lbl_fn_8070A050_00000BCC
lbl_fn_8070A050_00000BEC:
    lwz r0, 0x94(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8070A050_00000C4C
    lfs f0, 0x30(r29)
    stfs f0, 0x8(r1)
    lfs f0, 0x34(r29)
    stfs f0, 0xc(r1)
    lfs f0, 0x38(r29)
    stfs f0, 0x10(r1)
    lfs f0, 0x3c(r29)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r29)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r29)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r29)
    stfs f0, 0x20(r1)
    lwz r0, 0x4c(r29)
    stw r0, 0x24(r1)
    lwz r0, 0x50(r29)
    stw r0, 0x28(r1)
    lwz r0, 0x54(r29)
    stw r0, 0x2c(r1)
    b lbl_fn_8070A050_00000C54
lbl_fn_8070A050_00000C4C:
    li r0, 0x0
    stw r0, 0x2c(r1)
lbl_fn_8070A050_00000C54:
    addi r3, r31, 0x50
    addi r4, r1, 0x8
    li r5, 0x0
    b lbl_fn_8070A050_00000CA0
lbl_fn_8070A050_00000C64:
    lfs f0, 0x0(r3)
    addi r5, r5, 0x1
    stfs f0, 0x28(r4)
    lfs f0, 0x4(r3)
    stfs f0, 0x2c(r4)
    lfs f0, 0x8(r3)
    stfs f0, 0x30(r4)
    lfs f0, 0xc(r3)
    stfs f0, 0x34(r4)
    lfs f0, 0x10(r3)
    stfs f0, 0x38(r4)
    lfs f0, 0x14(r3)
    addi r3, r3, 0x18
    stfs f0, 0x3c(r4)
    addi r4, r4, 0x18
lbl_fn_8070A050_00000CA0:
    lbz r6, 0x99(r29)
    cmpw r5, r6
    blt lbl_fn_8070A050_00000C64
    lwz r3, 0x1c(r29)
    addi r7, r1, 0x8
    lwz r4, 0x28(r29)
    lwz r12, 0x0(r3)
    lwz r5, 0x9c(r29)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f0, 0x8(r1)
    mr r4, r31
    stfs f0, 0x30(r29)
    addi r3, r1, 0x8
    li r5, 0x0
    lfs f0, 0xc(r1)
    stfs f0, 0x34(r29)
    lfs f0, 0x10(r1)
    stfs f0, 0x38(r29)
    lfs f0, 0x14(r1)
    stfs f0, 0x3c(r29)
    lfs f0, 0x18(r1)
    stfs f0, 0x40(r29)
    lfs f0, 0x1c(r1)
    stfs f0, 0x44(r29)
    lfs f0, 0x20(r1)
    stfs f0, 0x48(r29)
    lwz r0, 0x24(r1)
    stw r0, 0x4c(r29)
    lwz r0, 0x28(r1)
    stw r0, 0x50(r29)
    lwz r0, 0x2c(r1)
    stw r0, 0x54(r29)
    b lbl_fn_8070A050_00000D68
lbl_fn_8070A050_00000D2C:
    lfs f0, 0x28(r3)
    addi r5, r5, 0x1
    stfs f0, 0x50(r4)
    lfs f0, 0x2c(r3)
    stfs f0, 0x54(r4)
    lfs f0, 0x30(r3)
    stfs f0, 0x58(r4)
    lfs f0, 0x34(r3)
    stfs f0, 0x5c(r4)
    lfs f0, 0x38(r3)
    stfs f0, 0x60(r4)
    lfs f0, 0x3c(r3)
    addi r3, r3, 0x18
    stfs f0, 0x64(r4)
    addi r4, r4, 0x18
lbl_fn_8070A050_00000D68:
    lbz r0, 0x99(r29)
    cmpw r5, r0
    blt lbl_fn_8070A050_00000D2C
lbl_fn_8070A050_00000D74:
    lwz r3, 0x14(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8070A050_00000D98
    lfs f0, 0x48(r3)
    stfs f0, 0x58(r29)
    lfs f0, 0x4c(r3)
    stfs f0, 0x5c(r29)
    lfs f0, 0x50(r3)
    stfs f0, 0x60(r29)
lbl_fn_8070A050_00000D98:
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    lbz r0, 0x87(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8070A050_00000DE8
    lwz r3, 0x70(r29)
    lwz r0, 0x6c(r29)
    cmpw r3, r0
    blt lbl_fn_8070A050_00000DE8
    li r0, 0x0
    stb r0, 0x87(r29)
    mr r3, r29
    lwz r12, 0x0(r29)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    b lbl_fn_8070A050_00000EC4
lbl_fn_8070A050_00000DE8:
    cmpwi r30, 0x0
    beq lbl_fn_8070A050_00000E38
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8070A050_00000E20
    li r3, 0x1
    li r0, 0x0
    stb r3, 0x85(r29)
    stb r0, 0x84(r29)
    b lbl_fn_8070A050_00000E38
lbl_fn_8070A050_00000E20:
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    b lbl_fn_8070A050_00000EC4
lbl_fn_8070A050_00000E38:
    lwz r0, 0x88(r29)
    cmpwi r0, 0x1
    bne lbl_fn_8070A050_00000E78
    lwz r3, 0x80(r29)
    lwz r0, 0x7c(r29)
    cmpw r3, r0
    blt lbl_fn_8070A050_00000E98
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    li r0, 0x2
    stw r0, 0x88(r29)
    b lbl_fn_8070A050_00000E98
lbl_fn_8070A050_00000E78:
    cmpwi r0, 0x3
    bne lbl_fn_8070A050_00000E98
    lwz r3, 0x80(r29)
    lwz r0, 0x7c(r29)
    cmpw r3, r0
    blt lbl_fn_8070A050_00000E98
    li r0, 0x0
    stw r0, 0x88(r29)
lbl_fn_8070A050_00000E98:
    lbz r0, 0x8c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8070A050_00000EC4
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x0
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stb r0, 0x8c(r29)
lbl_fn_8070A050_00000EC4:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8070A5E0(void)
{
    nofralloc
    lwz r4, 0x70(r3)
    lwz r0, 0x6c(r3)
    cmpw r4, r0
    bge lbl_fn_8070A5E0_00000F04
    addi r0, r4, 0x1
    stw r0, 0x70(r3)
lbl_fn_8070A5E0_00000F04:
    lwz r4, 0xac(r3)
    lwz r0, 0xa8(r3)
    cmpw r4, r0
    bgelr
    addi r0, r4, 0x1
    stw r0, 0xac(r3)
    blr
}

asm void fn_8070A620(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0x50
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    stfd f28, 0x90(r1)
    psq_st f28, 0x98(r1), 0, 0
    stfd f27, 0x80(r1)
    psq_st f27, 0x88(r1), 0, 0
    stfd f26, 0x70(r1)
    psq_st f26, 0x78(r1), 0, 0
    stfd f25, 0x60(r1)
    psq_st f25, 0x68(r1), 0, 0
    stfd f24, 0x50(r1)
    psq_st f24, 0x58(r1), 0, 0
    bl _savegpr_26
    lfs f31, lbl_80889078
    lis r0, 0x4330
    lfs f0, 0xb0(r3)
    mr r31, r3
    lwz r6, 0x10(r3)
    fmuls f31, f31, f0
    lwz r5, 0xa8(r3)
    lfs f0, 0x2c(r6)
    lwz r4, 0xac(r3)
    fmuls f31, f31, f0
    stw r0, 0x28(r1)
    cmpw r4, r5
    stw r0, 0x30(r1)
    blt lbl_fn_8070A620_00000FC0
    lfs f0, 0xa4(r3)
    b lbl_fn_8070A620_00000FFC
lbl_fn_8070A620_00000FC0:
    xoris r0, r4, 0x8000
    stw r0, 0x2c(r1)
    xoris r0, r5, 0x8000
    lfd f4, lbl_80889080
    lfd f0, 0x28(r1)
    lfs f1, 0xa4(r3)
    lfs f2, 0xa0(r3)
    fsubs f3, f0, f4
    stw r0, 0x34(r1)
    fsubs f1, f1, f2
    lfd f0, 0x30(r1)
    fsubs f0, f0, f4
    fmuls f1, f3, f1
    fdivs f0, f1, f0
    fadds f0, f2, f0
lbl_fn_8070A620_00000FFC:
    lwz r4, 0x6c(r3)
    fmuls f31, f31, f0
    lwz r0, 0x70(r3)
    cmpw r0, r4
    blt lbl_fn_8070A620_00001018
    lfs f0, 0x68(r3)
    b lbl_fn_8070A620_00001054
lbl_fn_8070A620_00001018:
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    xoris r0, r4, 0x8000
    lfd f4, lbl_80889080
    lfd f0, 0x28(r1)
    lfs f1, 0x68(r3)
    lfs f2, 0x64(r3)
    fsubs f3, f0, f4
    stw r0, 0x34(r1)
    fsubs f1, f1, f2
    lfd f0, 0x30(r1)
    fsubs f0, f0, f4
    fmuls f1, f3, f1
    fdivs f0, f1, f0
    fadds f0, f2, f0
lbl_fn_8070A620_00001054:
    lwz r4, 0x7c(r3)
    fmuls f31, f31, f0
    lwz r0, 0x80(r3)
    cmpw r0, r4
    blt lbl_fn_8070A620_00001070
    lfs f0, 0x78(r3)
    b lbl_fn_8070A620_000010AC
lbl_fn_8070A620_00001070:
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    xoris r0, r4, 0x8000
    lfd f4, lbl_80889080
    lfd f0, 0x28(r1)
    lfs f1, 0x78(r3)
    lfs f2, 0x74(r3)
    fsubs f3, f0, f4
    stw r0, 0x34(r1)
    fsubs f1, f1, f2
    lfd f0, 0x30(r1)
    fsubs f0, f0, f4
    fmuls f1, f3, f1
    fdivs f0, f1, f0
    fadds f0, f2, f0
lbl_fn_8070A620_000010AC:
    fmuls f31, f31, f0
    lfs f2, 0x30(r3)
    lfs f28, lbl_80889078
    lfs f0, 0xbc(r3)
    fmuls f31, f31, f2
    lfs f30, lbl_8088907C
    lfs f1, 0xb4(r3)
    fmuls f28, f28, f0
    lfs f0, 0x34(r3)
    lfs f2, 0x58(r3)
    fadds f30, f30, f1
    lfs f1, 0x38(r3)
    fmuls f28, f28, f0
    lfs f29, lbl_8088907C
    fmuls f31, f31, f2
    lfs f2, 0xb8(r3)
    fadds f30, f30, f1
    lfs f3, 0x60(r3)
    fadds f29, f29, f2
    lbz r28, 0x9a(r3)
    lfs f1, 0x5c(r3)
    lfs f2, 0x3c(r3)
    lfs f27, 0xc0(r3)
    cmpwi r28, 0x0
    lfs f0, 0x44(r3)
    fadds f30, f30, f3
    fmuls f28, f28, f1
    lfs f26, 0xc4(r3)
    fadds f27, f27, f0
    lfs f0, 0x30(r6)
    fadds f29, f29, f2
    fadds f27, f27, f0
    bne lbl_fn_8070A620_00001148
    lwz r28, 0x3c(r6)
    lfs f26, 0x40(r6)
    cmpwi r28, 0x0
    bne lbl_fn_8070A620_00001148
    lwz r28, 0x4c(r3)
    lfs f26, 0x48(r3)
lbl_fn_8070A620_00001148:
    lfs f25, lbl_80889078
    mr r29, r31
    lfs f0, 0xcc(r3)
    addi r30, r1, 0x18
    lfs f1, 0x38(r6)
    li r26, 0x0
    fmuls f25, f25, f0
    lwz r27, 0xc8(r3)
    lfs f24, lbl_80889078
    fmuls f25, f25, f1
lbl_fn_8070A620_00001170:
    stfs f24, 0x0(r30)
    mr r4, r26
    lwz r3, 0x10(r31)
    bl fn_80717C00
    lfs f2, 0x0(r30)
    addi r26, r26, 0x1
    lfs f0, 0xe0(r29)
    cmpwi r26, 0x4
    fmuls f1, f2, f1
    addi r29, r29, 0x4
    fmuls f0, f1, f0
    stfs f0, 0x0(r30)
    addi r30, r30, 0x4
    blt lbl_fn_8070A620_00001170
    lfs f4, lbl_8088907C
    mr r3, r31
    lfs f1, 0xd8(r31)
    lfs f0, 0xdc(r31)
    lwz r4, 0x10(r31)
    fadds f1, f4, f1
    lfs f2, 0xd4(r31)
    fadds f0, f4, f0
    lfs f5, 0x58(r4)
    fadds f3, f4, f2
    lfs f2, 0x5c(r4)
    lwz r12, 0x0(r31)
    fadds f2, f1, f2
    lfs f4, 0x60(r4)
    lfs f24, lbl_8088907C
    fadds f1, f0, f4
    lfs f4, 0xd0(r31)
    fadds f3, f3, f5
    lfs f0, 0x40(r31)
    fadds f24, f24, f4
    lfs f4, 0x54(r4)
    fadds f0, f3, f0
    lwz r12, 0x24(r12)
    fadds f24, f24, f4
    stfs f2, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x8(r1)
    mtctr r12
    bctrl
    stfs f31, 0x4(r3)
    fmr f1, f26
    mr r26, r3
    mr r4, r28
    stfs f30, 0xc(r3)
    stfs f29, 0x10(r3)
    stfs f28, 0x8(r3)
    stfs f27, 0x14(r3)
    bl fn_807097F0
    stw r27, 0x20(r26)
    addi r31, r1, 0x18
    li r27, 0x0
    stfs f25, 0x24(r26)
lbl_fn_8070A620_00001250:
    lfs f1, 0x0(r31)
    mr r3, r26
    mr r4, r27
    bl fn_80709810
    addi r27, r27, 0x1
    addi r31, r31, 0x4
    cmpwi r27, 0x4
    blt lbl_fn_8070A620_00001250
    stfs f24, 0x28(r26)
    addi r31, r1, 0x8
    li r27, 0x0
lbl_fn_8070A620_0000127C:
    lfs f1, 0x0(r31)
    mr r3, r26
    mr r4, r27
    bl fn_807097D0
    addi r27, r27, 0x1
    addi r31, r31, 0x4
    cmpwi r27, 0x3
    blt lbl_fn_8070A620_0000127C
    addi r11, r1, 0x50
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    psq_l f28, 0x98(r1), 0, 0
    lfd f28, 0x90(r1)
    psq_l f27, 0x88(r1), 0, 0
    lfd f27, 0x80(r1)
    psq_l f26, 0x78(r1), 0, 0
    lfd f26, 0x70(r1)
    psq_l f25, 0x68(r1), 0, 0
    lfd f25, 0x60(r1)
    psq_l f24, 0x58(r1), 0, 0
    lfd f24, 0x50(r1)
    bl _restgpr_26
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_8070A9F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r3)
    mr r31, r3
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8070A9F0_00001368
    lbz r0, 0x87(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8070A9F0_00001354
    lfs f0, lbl_8088907C
    stfs f0, 0x4(r31)
lbl_fn_8070A9F0_00001354:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_8070A9F0_00001368:
    li r31, -0x1
    stw r31, 0x9c(r30)
    mr r3, r30
    lwz r12, 0x0(r30)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    stw r31, 0xb0(r3)
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8070A9F0_00001398
    bl fn_80717630
lbl_fn_8070A9F0_00001398:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8070A9F0_000013A8
    bl fn_80717630
lbl_fn_8070A9F0_000013A8:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8070A9F0_000013D8
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8070A9F0_000013D8:
    lwz r0, 0x4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8070A9F0_000013F0
    lwz r3, 0x10(r30)
    mr r4, r30
    bl fn_807183D0
lbl_fn_8070A9F0_000013F0:
    lwz r3, 0x10(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8070A9F0_00001404
    mr r4, r30
    bl fn_807180A0
lbl_fn_8070A9F0_00001404:
    lwz r3, 0x18(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8070A9F0_00001418
    mr r4, r30
    bl fn_8070D240
lbl_fn_8070A9F0_00001418:
    lwz r3, 0x24(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8070A9F0_00001444
    lwz r12, 0x0(r3)
    mr r5, r30
    lwz r4, 0x28(r30)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x28(r30)
lbl_fn_8070A9F0_00001444:
    li r0, 0x0
    stb r0, 0x85(r30)
    stb r0, 0x87(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070AB60(void)
{
    nofralloc
    stw r4, 0x4(r3)
    blr
}

asm void fn_8070AB70(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x4(r3)
    blr
}

asm void fn_8070AB80(void)
{
    nofralloc
    stw r4, 0x10(r3)
    blr
}

asm void fn_8070AB90(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x10(r3)
    blr
}

asm void fn_8070ABA0(void)
{
    nofralloc
    stw r4, 0x14(r3)
    blr
}

asm void fn_8070ABB0(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x14(r3)
    blr
}

asm void fn_8070ABC0(void)
{
    nofralloc
    stw r4, 0x18(r3)
    blr
}

asm void fn_8070ABD0(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x18(r3)
    blr
}

asm void fn_8070ABE0(void)
{
    nofralloc
    lwz r5, 0x6c(r3)
    lwz r0, 0x70(r3)
    xoris r4, r5, 0x8000
    subf r3, r5, r0
    subf r0, r0, r5
    addc r3, r3, r4
    subfe r3, r3, r3
    andc r3, r0, r3
    blr
}

asm void fn_8070AC10(void)
{
    nofralloc
    lbz r3, 0x99(r3)
    blr
}

asm void fn_8070AC20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x10(r3)
    stb r4, 0x98(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8070AC20_0000155C
    mr r3, r0
    mr r4, r31
    bl fn_80717C10
lbl_fn_8070AC20_0000155C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070AC80(void)
{
    nofralloc
    blr
}

asm void fn_8070AC90(void)
{
    nofralloc
    lfs f0, lbl_8088907C
    fcmpo cr0, f1, f0
    bge lbl_fn_8070AC90_000015AC
    fmr f1, f0
lbl_fn_8070AC90_000015AC:
    stfs f1, 0xb0(r3)
    blr
}

asm void fn_8070ACB0(void)
{
    nofralloc
    lfs f0, lbl_8088907C
    stwu r1, -0x20(r1)
    fcmpo cr0, f1, f0
    bge lbl_fn_8070ACB0_000015D0
    fmr f1, f0
lbl_fn_8070ACB0_000015D0:
    lwz r6, 0xa8(r3)
    lwz r0, 0xac(r3)
    cmpw r0, r6
    blt lbl_fn_8070ACB0_000015E8
    lfs f0, 0xa4(r3)
    b lbl_fn_8070ACB0_00001630
lbl_fn_8070ACB0_000015E8:
    lis r5, 0x4330
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    xoris r0, r6, 0x8000
    lfd f5, lbl_80889080
    stw r5, 0x8(r1)
    lfs f0, 0xa4(r3)
    lfd f2, 0x8(r1)
    lfs f3, 0xa0(r3)
    fsubs f4, f2, f5
    stw r0, 0x14(r1)
    fsubs f2, f0, f3
    stw r5, 0x10(r1)
    lfd f0, 0x10(r1)
    fmuls f2, f4, f2
    fsubs f0, f0, f5
    fdivs f0, f2, f0
    fadds f0, f3, f0
lbl_fn_8070ACB0_00001630:
    li r0, 0x0
    stfs f0, 0xa0(r3)
    stfs f1, 0xa4(r3)
    stw r4, 0xa8(r3)
    stw r0, 0xac(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_8070AD40(void)
{
    nofralloc
    stfs f1, 0xbc(r3)
    blr
}

asm void fn_8070AD50(void)
{
    nofralloc
    stfs f1, 0xc0(r3)
    blr
}

asm void fn_8070AD60(void)
{
    nofralloc
    stb r4, 0x9a(r3)
    stfs f1, 0xc4(r3)
    blr
}

asm void fn_8070AD70(void)
{
    nofralloc
    stw r4, 0xc8(r3)
    blr
}

asm void fn_8070AD80(void)
{
    nofralloc
    lwz r4, 0x10(r3)
    lwz r0, 0x34(r4)
    stw r0, 0xc8(r3)
    blr
}

asm void fn_8070AD90(void)
{
    nofralloc
    slwi r0, r4, 2
    add r3, r3, r0
    stfs f1, 0xd4(r3)
    blr
}

asm void fn_8070ADA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    mr r4, r31
    bl fn_80709800
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070ADE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    stw r31, 0x2c(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070AE20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    stw r31, 0x30(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070AE60(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r3, 0x8(r4)
    lwz r4, 0x10(r4)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8070AE60_00001814
    lwz r4, 0xc(r30)
    lwz r5, 0x10(r30)
    bl memcpy
    lwz r0, 0x0(r30)
    lwz r3, 0x0(r30)
    lwz r5, 0x4(r30)
    cmpwi r0, 0x0
    lwz r4, 0x8(r30)
    lwz r0, 0x10(r30)
    stw r3, 0x1c(r29)
    stw r5, 0x20(r29)
    stw r4, 0x24(r29)
    stw r0, 0x2c(r29)
    stw r31, 0x28(r29)
    beq lbl_fn_8070AE60_00001814
    lwz r12, 0x0(r3)
    mr r4, r31
    lwz r5, 0x9c(r29)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x4
    ble lbl_fn_8070AE60_00001810
    li r3, 0x4
lbl_fn_8070AE60_00001810:
    stb r3, 0x99(r29)
lbl_fn_8070AE60_00001814:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8070AF30(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    mr r6, r3
    cmpwi r0, 0x0
    bne lbl_fn_8070AF30_00001854
    li r3, 0x0
    blr
lbl_fn_8070AF30_00001854:
    mr r3, r0
    mr r5, r4
    lwz r12, 0x0(r3)
    lwz r4, 0xc(r6)
    lwz r12, 0x10(r12)
    mtctr r12
    bctr
}

asm void fn_8070AF64(void)
{
    nofralloc
    blr
}

asm void fn_8070AF70(void)
{
    nofralloc
    lwz r3, 0x8(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_8070AF90(void)
{
    nofralloc
    lwz r3, 0xc(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_8070AFB0(void)
{
    nofralloc
    lwz r3, 0x8(r3)
    b fn_80717630
}

asm void fn_8070AFC0(void)
{
    nofralloc
    lwz r3, 0xc(r3)
    b fn_80717630
}

asm void fn_8070AFD0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r4, 0x9c(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    stw r31, 0xb0(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070B010(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8070B010_00001944
    cmpwi r4, 0x0
    ble lbl_fn_8070B010_00001944
    bl dtor_80084684
lbl_fn_8070B010_00001944:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070B050(void)
{
    nofralloc
    la r3, lbl_808804B0
    blr
}

asm void fn_8070B060(void)
{
    nofralloc
    li r0, 0x0
    stw r0, lbl_808804B0
    blr
}

asm void fn_8070B070(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    li r4, 0x6f
    lis r0, 0x4330
    lfd f2, lbl_80889088
    xoris r3, r4, 0x8000
    stw r3, 0xc(r1)
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    cmpwi r3, 0x6f
    ble lbl_fn_8070B070_000019BC
    b lbl_fn_8070B070_000019C4
lbl_fn_8070B070_000019BC:
    srawi r0, r3, 31
    andc r4, r3, r0
lbl_fn_8070B070_000019C4:
    mulli r0, r4, 0xa
    lis r3, lbl_8076B868@ha
    addi r3, r3, lbl_8076B868@l
    add r7, r3, r0
    lhzx r8, r3, r0
    lhz r6, 0x2(r7)
    lhz r4, 0x4(r7)
    lhz r3, 0x6(r7)
    lhz r0, 0x8(r7)
    sth r8, 0x0(r5)
    sth r6, 0x2(r5)
    sth r4, 0x4(r5)
    sth r3, 0x6(r5)
    sth r0, 0x8(r5)
    addi r1, r1, 0x20
    blr
}

asm void fn_8070B100(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    li r4, 0x60
    lis r0, 0x4330
    lfd f2, lbl_80889088
    xoris r3, r4, 0x8000
    stw r3, 0xc(r1)
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    cmpwi r3, 0x60
    ble lbl_fn_8070B100_00001A4C
    b lbl_fn_8070B100_00001A54
lbl_fn_8070B100_00001A4C:
    srawi r0, r3, 31
    andc r4, r3, r0
lbl_fn_8070B100_00001A54:
    mulli r0, r4, 0xa
    lis r3, lbl_8076BCC8@ha
    addi r3, r3, lbl_8076BCC8@l
    add r7, r3, r0
    lhzx r8, r3, r0
    lhz r6, 0x2(r7)
    lhz r4, 0x4(r7)
    lhz r3, 0x6(r7)
    lhz r0, 0x8(r7)
    sth r8, 0x0(r5)
    sth r6, 0x2(r5)
    sth r4, 0x4(r5)
    sth r3, 0x6(r5)
    sth r0, 0x8(r5)
    addi r1, r1, 0x20
    blr
}

asm void fn_8070B190(void)
{
    nofralloc
    lfs f0, lbl_80889090
    li r4, 0x79
    stwu r1, -0x20(r1)
    xoris r3, r4, 0x8000
    fsubs f0, f0, f1
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lfd f2, lbl_80889088
    stw r0, 0x8(r1)
    fmuls f1, f1, f0
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    cmpwi r3, 0x79
    ble lbl_fn_8070B190_00001AE8
    b lbl_fn_8070B190_00001AF0
lbl_fn_8070B190_00001AE8:
    srawi r0, r3, 31
    andc r4, r3, r0
lbl_fn_8070B190_00001AF0:
    mulli r0, r4, 0xa
    lis r3, lbl_8076C094@ha
    addi r3, r3, lbl_8076C094@l
    add r7, r3, r0
    lhzx r8, r3, r0
    lhz r6, 0x2(r7)
    lhz r4, 0x4(r7)
    lhz r3, 0x6(r7)
    lhz r0, 0x8(r7)
    sth r8, 0x0(r5)
    sth r6, 0x2(r5)
    sth r4, 0x4(r5)
    sth r3, 0x6(r5)
    sth r0, 0x8(r5)
    addi r1, r1, 0x20
    blr
}

asm void fn_8070B230(void)
{
    nofralloc
    lfs f0, lbl_80889090
    li r4, 0x5c
    stwu r1, -0x20(r1)
    xoris r3, r4, 0x8000
    fsubs f0, f0, f1
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lfd f2, lbl_80889088
    stw r0, 0x8(r1)
    fmuls f1, f1, f0
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    cmpwi r3, 0x5c
    ble lbl_fn_8070B230_00001B88
    b lbl_fn_8070B230_00001B90
lbl_fn_8070B230_00001B88:
    srawi r0, r3, 31
    andc r4, r3, r0
lbl_fn_8070B230_00001B90:
    mulli r0, r4, 0xa
    lis r3, lbl_8076C558@ha
    addi r3, r3, lbl_8076C558@l
    add r7, r3, r0
    lhzx r8, r3, r0
    lhz r6, 0x2(r7)
    lhz r4, 0x4(r7)
    lhz r3, 0x6(r7)
    lhz r0, 0x8(r7)
    sth r8, 0x0(r5)
    sth r6, 0x2(r5)
    sth r4, 0x4(r5)
    sth r3, 0x6(r5)
    sth r0, 0x8(r5)
    addi r1, r1, 0x20
    blr
}

asm void fn_8070B2D0(void)
{
    nofralloc
    lfs f0, lbl_80889090
    li r4, 0x5c
    stwu r1, -0x20(r1)
    xoris r3, r4, 0x8000
    fsubs f0, f0, f1
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lfd f2, lbl_80889088
    stw r0, 0x8(r1)
    fmuls f1, f1, f0
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    cmpwi r3, 0x5c
    ble lbl_fn_8070B2D0_00001C28
    b lbl_fn_8070B2D0_00001C30
lbl_fn_8070B2D0_00001C28:
    srawi r0, r3, 31
    andc r4, r3, r0
lbl_fn_8070B2D0_00001C30:
    mulli r0, r4, 0xa
    lis r3, lbl_8076C8FC@ha
    addi r3, r3, lbl_8076C8FC@l
    add r7, r3, r0
    lhzx r8, r3, r0
    lhz r6, 0x2(r7)
    lhz r4, 0x4(r7)
    lhz r3, 0x6(r7)
    lhz r0, 0x8(r7)
    sth r8, 0x0(r5)
    sth r6, 0x2(r5)
    sth r4, 0x4(r5)
    sth r3, 0x6(r5)
    sth r0, 0x8(r5)
    addi r1, r1, 0x20
    blr
}

asm void fn_8070B370(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8070B370_00001CA4
    cmpwi r4, 0x0
    ble lbl_fn_8070B370_00001CA4
    bl dtor_80084684
lbl_fn_8070B370_00001CA4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070B3B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8070B3B0_00001CE4
    cmpwi r4, 0x0
    ble lbl_fn_8070B3B0_00001CE4
    bl dtor_80084684
lbl_fn_8070B3B0_00001CE4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070B3F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8070B3F0_00001D24
    cmpwi r4, 0x0
    ble lbl_fn_8070B3F0_00001D24
    bl dtor_80084684
lbl_fn_8070B3F0_00001D24:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070B430(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8070B430_00001D64
    cmpwi r4, 0x0
    ble lbl_fn_8070B430_00001D64
    bl dtor_80084684
lbl_fn_8070B430_00001D64:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070B470(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8070B470_00001DA4
    cmpwi r4, 0x0
    ble lbl_fn_8070B470_00001DA4
    bl dtor_80084684
lbl_fn_8070B470_00001DA4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070B4B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lbz r0, lbl_808804B8
    extsb. r0, r0
    bne lbl_fn_8070B4B0_00001E18
    lis r6, lbl_80862F78@ha
    li r0, 0x0
    addi r3, r6, lbl_80862F78@l
    lis r4, fn_8070B530@ha
    addi r7, r3, 0x8
    lis r5, lbl_80862F68@ha
    stw r0, lbl_80862F78@l(r6)
    addi r4, r4, fn_8070B530@l
    addi r5, r5, lbl_80862F68@l
    stw r0, 0x4(r3)
    stw r7, 0x8(r3)
    stw r7, 0xc(r3)
    stb r0, 0x10(r3)
    stw r0, 0x14(r3)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_808804B8
lbl_fn_8070B4B0_00001E18:
    lwz r0, 0x14(r1)
    lis r3, lbl_80862F78@ha
    addi r3, r3, lbl_80862F78@l
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070B530(void)
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
    beq lbl_fn_8070B530_00001E80
    addic. r3, r3, 0x4
    beq lbl_fn_8070B530_00001E70
    li r4, 0x0
    bl fn_80725170
lbl_fn_8070B530_00001E70:
    cmpwi r31, 0x0
    ble lbl_fn_8070B530_00001E80
    mr r3, r30
    bl dtor_80084684
lbl_fn_8070B530_00001E80:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070B590(void)
{
    nofralloc
    addi r0, r4, 0x1
    mulli r3, r0, 0xe0
    blr
}

asm void fn_8070B5A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl OSDisableInterrupts
    lbz r0, 0x10(r28)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_8070B5A0_00001EF0
    bl OSRestoreInterrupts
    b lbl_fn_8070B5A0_00001F20
lbl_fn_8070B5A0_00001EF0:
    mr r3, r28
    mr r4, r29
    mr r5, r30
    li r6, 0xe0
    bl fn_8070EE90
    stw r3, 0x14(r28)
    li r0, 0x1
    mr r3, r31
    stw r29, 0x18(r28)
    stw r30, 0x1c(r28)
    stb r0, 0x10(r28)
    bl OSRestoreInterrupts
lbl_fn_8070B5A0_00001F20:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8070B640(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    mr r31, r3
    bl OSDisableInterrupts
    lbz r0, 0x10(r31)
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_fn_8070B640_00001F80
    bl OSRestoreInterrupts
    b lbl_fn_8070B640_000020A8
lbl_fn_8070B640_00001F80:
    lis r24, lbl_80862F78@ha
    lwz r29, 0x8(r31)
    addi r22, r24, lbl_80862F78@l
    addi r28, r31, 0x8
    li r23, 0x0
    lis r25, fn_8070B530@ha
    lis r26, lbl_80862F68@ha
    li r27, 0x1
    b lbl_fn_8070B640_00002080
lbl_fn_8070B640_00001FA4:
    mr r3, r29
    lwz r29, 0x0(r29)
    subi r21, r3, 0xd8
    lwz r3, -0x8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8070B640_00002080
    bl fn_8071E970
    lwz r3, 0xd0(r21)
    bl fn_8071E680
    stw r23, 0xd0(r21)
    stb r23, 0x35(r21)
    stb r23, 0x36(r21)
    lwz r12, 0xc0(r21)
    cmpwi r12, 0x0
    beq lbl_fn_8070B640_00001FF4
    mr r3, r21
    lwz r5, 0xc4(r21)
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_8070B640_00001FF4:
    lwz r3, 0xc8(r21)
    cmpwi r3, 0x0
    beq lbl_fn_8070B640_00002014
    lwz r12, 0x0(r3)
    lwz r4, 0xcc(r21)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_8070B640_00002014:
    lbz r0, 0x37(r21)
    cmpwi r0, 0x0
    beq lbl_fn_8070B640_00002080
    stb r23, 0x37(r21)
    lbz r0, lbl_808804B8
    extsb. r0, r0
    bne lbl_fn_8070B640_00002060
    addi r0, r22, 0x8
    stw r23, lbl_80862F78@l(r24)
    mr r3, r22
    addi r4, r25, fn_8070B530@l
    stw r23, 0x4(r22)
    addi r5, r26, lbl_80862F68@l
    stw r0, 0x8(r22)
    stw r0, 0xc(r22)
    stb r23, 0x10(r22)
    stw r23, 0x14(r22)
    bl __register_global_object
    stb r27, lbl_808804B8
lbl_fn_8070B640_00002060:
    addi r3, r22, 0x4
    addi r4, r21, 0xd8
    bl fn_807252D0
    cmpwi r21, 0x0
    beq lbl_fn_8070B640_00002080
    mr r3, r22
    mr r4, r21
    bl fn_8070F130
lbl_fn_8070B640_00002080:
    cmplw r29, r28
    bne lbl_fn_8070B640_00001FA4
    lwz r4, 0x18(r31)
    mr r3, r31
    lwz r5, 0x1c(r31)
    bl fn_8070EFE0
    li r0, 0x0
    stb r0, 0x10(r31)
    mr r3, r30
    bl OSRestoreInterrupts
lbl_fn_8070B640_000020A8:
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
