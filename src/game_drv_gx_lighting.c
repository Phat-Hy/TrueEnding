#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_15(void);
extern void _restgpr_16(void);
extern void _restgpr_27(void);
extern void _savegpr_15(void);
extern void _savegpr_16(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_805D8130(void);
extern void fn_805D84C0(void);
extern void fn_805D8510(void);
extern void fn_805D91A0(void);
extern void fn_805D9280(void);
extern void fn_805D92F0(void);
extern void fn_805D93D0(void);
extern void fn_805D93E0(void);
extern void fn_805D9530(void);
extern void fn_805D9540(void);
extern void fn_805D9580(void);
extern void fn_805D9590(void);
extern void fn_805DD050(void);
extern void fn_805DDD90(void);
extern void fn_805DDE70(void);
extern u32 strlen(const char* str);
extern void vsnprintf(void);

/* External data declarations */
extern u8 lbl_80764628[];
extern u8 lbl_80764630[];
extern u8 lbl_80764638[];
extern u8 lbl_8079A6A8[];
extern u8 lbl_8079A730[];
extern u8 lbl_807CA250[];
extern u8 lbl_807CA254[];

/* Small data declarations */

/* Function declarations */
void fn_805DA960(void);
void fn_805DABA0(void);
void fn_805DAC10(void);
void fn_805DAD10(void);
void fn_805DAD20(void);
void fn_805DAD60(void);
void fn_805DAEC0(void);
void fn_805DB100(void);
void fn_805DB170(void);
void fn_805DB270(void);
void fn_805DB2D0(void);
void fn_805DB330(void);
void fn_805DB3D0(void);
void fn_805DB460(void);
void fn_805DB470(void);
void fn_805DB480(void);
void fn_805DB490(void);
void fn_805DB4A0(void);
void fn_805DB4B0(void);
void fn_805DB4C0(void);
void fn_805DB4D0(void);
void fn_805DB4E0(void);
void fn_805DB4F0(void);
void fn_805DB500(void);
void fn_805DB510(void);
void fn_805DB710(void);
void fn_805DB910(void);
void fn_805DBAE0(void);
void fn_805DBC50(void);
void fn_805DBD90(void);
void fn_805DBEE0(void);
void fn_805DC020(void);
void fn_805DC170(void);
void fn_805DC280(void);

asm void fn_805DA960(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x40
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    bl _savegpr_27
    cmpwi r5, 0xa
    mr r27, r4
    mr r28, r6
    beq lbl_fn_805DA960_00000040
    cmpwi r5, 0x9
    beq lbl_fn_805DA960_000000E8
    b lbl_fn_805DA960_00000208
lbl_fn_805DA960_00000040:
    lwz r30, 0x0(r6)
    mr r3, r30
    bl fn_805D9580
    stfs f1, 0x8(r27)
    mr r3, r30
    bl fn_805D9590
    stfs f1, 0x4(r27)
    lwz r31, 0x0(r28)
    lfs f30, 0x8(r28)
    mr r3, r31
    bl fn_805DB3D0
    fmr f31, f1
    mr r3, r31
    bl fn_805D9590
    fadds f2, f1, f31
    mr r3, r31
    fmr f1, f30
    bl fn_805D9530
    mr r3, r30
    bl fn_805D9580
    stfs f1, 0x0(r27)
    lwz r3, 0x0(r28)
    bl fn_805D92F0
    fmr f31, f1
    mr r3, r30
    bl fn_805D9590
    fadds f0, f1, f31
    lfs f6, 0x4(r27)
    lfs f7, 0x0(r27)
    li r3, 0x3
    lfs f5, 0x8(r27)
    fsubs f2, f0, f6
    fsubs f3, f5, f7
    fsel f1, f2, f6, f0
    fsel f4, f3, f7, f5
    fsel f3, f3, f5, f7
    stfs f1, 0x4(r27)
    fsel f0, f2, f0, f6
    stfs f4, 0x0(r27)
    stfs f3, 0x8(r27)
    stfs f0, 0xc(r27)
    b lbl_fn_805DA960_0000020C
lbl_fn_805DA960_000000E8:
    lwz r29, 0x0(r6)
    mr r3, r29
    bl fn_805D9580
    stfs f1, 0x0(r27)
    lwz r30, 0x0(r28)
    mr r3, r30
    bl fn_805DB4B0
    cmpwi r3, 0x0
    mr r31, r3
    ble lbl_fn_805DA960_000001A8
    mr r3, r30
    bl fn_805D93D0
    cmpwi r3, 0x0
    beq lbl_fn_805DA960_00000130
    mr r3, r30
    bl fn_805D93E0
    fmr f31, f1
    b lbl_fn_805DA960_0000013C
lbl_fn_805DA960_00000130:
    mr r3, r30
    bl fn_805D9280
    fmr f31, f1
lbl_fn_805DA960_0000013C:
    mr r3, r30
    bl fn_805D9580
    lis r0, 0x4330
    xoris r3, r31, 0x8000
    stw r3, 0xc(r1)
    lis r4, lbl_80764628@ha
    lfd f2, lbl_80764628@l(r4)
    mr r3, r30
    stw r0, 0x8(r1)
    lfs f3, 0x8(r28)
    lfd f0, 0x8(r1)
    fsubs f4, f1, f3
    stw r0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f1, f0, f31
    fdivs f0, f4, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r4, 0x14(r1)
    addi r0, r4, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fadds f1, f3, f0
    bl fn_805D9540
lbl_fn_805DA960_000001A8:
    mr r3, r29
    bl fn_805D9580
    stfs f1, 0x8(r27)
    mr r3, r29
    bl fn_805D9590
    stfs f1, 0x4(r27)
    mr r3, r29
    bl fn_805D92F0
    lfs f2, 0x4(r27)
    li r3, 0x1
    lfs f6, 0x0(r27)
    fadds f0, f2, f1
    lfs f4, 0x8(r27)
    fsubs f1, f4, f6
    fsubs f3, f0, f2
    fsel f5, f1, f6, f4
    fsel f4, f1, f4, f6
    fsel f1, f3, f2, f0
    stfs f5, 0x0(r27)
    fsel f0, f3, f0, f2
    stfs f4, 0x8(r27)
    stfs f1, 0x4(r27)
    stfs f0, 0xc(r27)
    b lbl_fn_805DA960_0000020C
lbl_fn_805DA960_00000208:
    li r3, 0x0
lbl_fn_805DA960_0000020C:
    addi r11, r1, 0x40
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_805DABA0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stfd f30, 0x10(r1)
    psq_st f30, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    lwz r31, 0x0(r4)
    lfs f30, 0x8(r4)
    mr r3, r31
    bl fn_805DB3D0
    fmr f31, f1
    mr r3, r31
    bl fn_805D9590
    fadds f2, f1, f31
    mr r3, r31
    fmr f1, f30
    bl fn_805D9530
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    psq_l f30, 0x18(r1), 0, 0
    lfd f30, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805DAC10(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r4
    lwz r30, 0x0(r4)
    mr r3, r30
    bl fn_805DB4B0
    cmpwi r3, 0x0
    mr r31, r3
    ble lbl_fn_805DAC10_00000384
    mr r3, r30
    bl fn_805D93D0
    cmpwi r3, 0x0
    beq lbl_fn_805DAC10_0000030C
    mr r3, r30
    bl fn_805D93E0
    fmr f31, f1
    b lbl_fn_805DAC10_00000318
lbl_fn_805DAC10_0000030C:
    mr r3, r30
    bl fn_805D9280
    fmr f31, f1
lbl_fn_805DAC10_00000318:
    mr r3, r30
    bl fn_805D9580
    lis r0, 0x4330
    xoris r3, r31, 0x8000
    stw r3, 0xc(r1)
    lis r4, lbl_80764628@ha
    lfd f2, lbl_80764628@l(r4)
    mr r3, r30
    stw r0, 0x8(r1)
    lfs f3, 0x8(r29)
    lfd f0, 0x8(r1)
    fsubs f1, f1, f3
    stw r0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f4, f0, f31
    fdivs f0, f1, f4
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r4, 0x14(r1)
    addi r0, r4, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f0, f4, f0
    fadds f1, f3, f0
    bl fn_805D9540
lbl_fn_805DAC10_00000384:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805DAD10(void)
{
    nofralloc
    lis r4, lbl_8079A6A8@ha
    addi r4, r4, lbl_8079A6A8@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_805DAD20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_805DAD20_000003E8
    cmpwi r4, 0x0
    ble lbl_fn_805DAD20_000003E8
    bl dtor_80084684
lbl_fn_805DAD20_000003E8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805DAD60(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r4, 0xa
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r5
    beq lbl_fn_805DAD60_00000440
    cmpwi r4, 0x9
    beq lbl_fn_805DAD60_00000474
    b lbl_fn_805DAD60_0000052C
lbl_fn_805DAD60_00000440:
    lwz r31, 0x0(r5)
    lfs f30, 0x8(r5)
    mr r3, r31
    bl fn_805DDD90
    fmr f31, f1
    mr r3, r31
    bl fn_805D9590
    fadds f2, f1, f31
    mr r3, r31
    fmr f1, f30
    bl fn_805D9530
    li r3, 0x3
    b lbl_fn_805DAD60_00000530
lbl_fn_805DAD60_00000474:
    lwz r30, 0x0(r5)
    mr r3, r30
    bl fn_805DDE70
    cmpwi r3, 0x0
    mr r31, r3
    ble lbl_fn_805DAD60_00000524
    mr r3, r30
    bl fn_805D93D0
    cmpwi r3, 0x0
    beq lbl_fn_805DAD60_000004AC
    mr r3, r30
    bl fn_805D93E0
    fmr f31, f1
    b lbl_fn_805DAD60_000004B8
lbl_fn_805DAD60_000004AC:
    mr r3, r30
    bl fn_805D9280
    fmr f31, f1
lbl_fn_805DAD60_000004B8:
    mr r3, r30
    bl fn_805D9580
    lis r0, 0x4330
    xoris r3, r31, 0x8000
    stw r3, 0xc(r1)
    lis r4, lbl_80764628@ha
    lfd f2, lbl_80764628@l(r4)
    mr r3, r30
    stw r0, 0x8(r1)
    lfs f3, 0x8(r29)
    lfd f0, 0x8(r1)
    fsubs f4, f1, f3
    stw r0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f1, f0, f31
    fdivs f0, f4, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r4, 0x14(r1)
    addi r0, r4, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fadds f1, f3, f0
    bl fn_805D9540
lbl_fn_805DAD60_00000524:
    li r3, 0x1
    b lbl_fn_805DAD60_00000530
lbl_fn_805DAD60_0000052C:
    li r3, 0x0
lbl_fn_805DAD60_00000530:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_805DAEC0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x40
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    bl _savegpr_27
    cmpwi r5, 0xa
    mr r27, r4
    mr r28, r6
    beq lbl_fn_805DAEC0_000005A0
    cmpwi r5, 0x9
    beq lbl_fn_805DAEC0_00000648
    b lbl_fn_805DAEC0_00000768
lbl_fn_805DAEC0_000005A0:
    lwz r30, 0x0(r6)
    mr r3, r30
    bl fn_805D9580
    stfs f1, 0x8(r27)
    mr r3, r30
    bl fn_805D9590
    stfs f1, 0x4(r27)
    lwz r31, 0x0(r28)
    lfs f30, 0x8(r28)
    mr r3, r31
    bl fn_805DDD90
    fmr f31, f1
    mr r3, r31
    bl fn_805D9590
    fadds f2, f1, f31
    mr r3, r31
    fmr f1, f30
    bl fn_805D9530
    mr r3, r30
    bl fn_805D9580
    stfs f1, 0x0(r27)
    lwz r3, 0x0(r28)
    bl fn_805D92F0
    fmr f31, f1
    mr r3, r30
    bl fn_805D9590
    fadds f0, f1, f31
    lfs f6, 0x4(r27)
    lfs f7, 0x0(r27)
    li r3, 0x3
    lfs f5, 0x8(r27)
    fsubs f2, f0, f6
    fsubs f3, f5, f7
    fsel f1, f2, f6, f0
    fsel f4, f3, f7, f5
    fsel f3, f3, f5, f7
    stfs f1, 0x4(r27)
    fsel f0, f2, f0, f6
    stfs f4, 0x0(r27)
    stfs f3, 0x8(r27)
    stfs f0, 0xc(r27)
    b lbl_fn_805DAEC0_0000076C
lbl_fn_805DAEC0_00000648:
    lwz r29, 0x0(r6)
    mr r3, r29
    bl fn_805D9580
    stfs f1, 0x0(r27)
    lwz r30, 0x0(r28)
    mr r3, r30
    bl fn_805DDE70
    cmpwi r3, 0x0
    mr r31, r3
    ble lbl_fn_805DAEC0_00000708
    mr r3, r30
    bl fn_805D93D0
    cmpwi r3, 0x0
    beq lbl_fn_805DAEC0_00000690
    mr r3, r30
    bl fn_805D93E0
    fmr f31, f1
    b lbl_fn_805DAEC0_0000069C
lbl_fn_805DAEC0_00000690:
    mr r3, r30
    bl fn_805D9280
    fmr f31, f1
lbl_fn_805DAEC0_0000069C:
    mr r3, r30
    bl fn_805D9580
    lis r0, 0x4330
    xoris r3, r31, 0x8000
    stw r3, 0xc(r1)
    lis r4, lbl_80764628@ha
    lfd f2, lbl_80764628@l(r4)
    mr r3, r30
    stw r0, 0x8(r1)
    lfs f3, 0x8(r28)
    lfd f0, 0x8(r1)
    fsubs f4, f1, f3
    stw r0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f1, f0, f31
    fdivs f0, f4, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r4, 0x14(r1)
    addi r0, r4, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fadds f1, f3, f0
    bl fn_805D9540
lbl_fn_805DAEC0_00000708:
    mr r3, r29
    bl fn_805D9580
    stfs f1, 0x8(r27)
    mr r3, r29
    bl fn_805D9590
    stfs f1, 0x4(r27)
    mr r3, r29
    bl fn_805D92F0
    lfs f2, 0x4(r27)
    li r3, 0x1
    lfs f6, 0x0(r27)
    fadds f0, f2, f1
    lfs f4, 0x8(r27)
    fsubs f1, f4, f6
    fsubs f3, f0, f2
    fsel f5, f1, f6, f4
    fsel f4, f1, f4, f6
    fsel f1, f3, f2, f0
    stfs f5, 0x0(r27)
    fsel f0, f3, f0, f2
    stfs f4, 0x8(r27)
    stfs f1, 0x4(r27)
    stfs f0, 0xc(r27)
    b lbl_fn_805DAEC0_0000076C
lbl_fn_805DAEC0_00000768:
    li r3, 0x0
lbl_fn_805DAEC0_0000076C:
    addi r11, r1, 0x40
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_805DB100(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stfd f30, 0x10(r1)
    psq_st f30, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    lwz r31, 0x0(r4)
    lfs f30, 0x8(r4)
    mr r3, r31
    bl fn_805DDD90
    fmr f31, f1
    mr r3, r31
    bl fn_805D9590
    fadds f2, f1, f31
    mr r3, r31
    fmr f1, f30
    bl fn_805D9530
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    psq_l f30, 0x18(r1), 0, 0
    lfd f30, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805DB170(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r4
    lwz r30, 0x0(r4)
    mr r3, r30
    bl fn_805DDE70
    cmpwi r3, 0x0
    mr r31, r3
    ble lbl_fn_805DB170_000008E4
    mr r3, r30
    bl fn_805D93D0
    cmpwi r3, 0x0
    beq lbl_fn_805DB170_0000086C
    mr r3, r30
    bl fn_805D93E0
    fmr f31, f1
    b lbl_fn_805DB170_00000878
lbl_fn_805DB170_0000086C:
    mr r3, r30
    bl fn_805D9280
    fmr f31, f1
lbl_fn_805DB170_00000878:
    mr r3, r30
    bl fn_805D9580
    lis r0, 0x4330
    xoris r3, r31, 0x8000
    stw r3, 0xc(r1)
    lis r4, lbl_80764628@ha
    lfd f2, lbl_80764628@l(r4)
    mr r3, r30
    stw r0, 0x8(r1)
    lfs f3, 0x8(r29)
    lfd f0, 0x8(r1)
    fsubs f1, f1, f3
    stw r0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f4, f0, f31
    fdivs f0, f1, f4
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r4, 0x14(r1)
    addi r0, r4, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f0, f4, f0
    fadds f1, f3, f0
    bl fn_805D9540
lbl_fn_805DB170_000008E4:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805DB270(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_805D8130
    lis r3, lbl_80764630@ha
    lis r4, lbl_807CA254@ha
    lfs f0, lbl_80764630@l(r3)
    addi r4, r4, lbl_807CA254@l
    li r5, 0x4
    li r0, 0x0
    stfs f0, 0x4c(r31)
    mr r3, r31
    stfs f0, 0x50(r31)
    stw r5, 0x54(r31)
    stw r0, 0x58(r31)
    stw r4, 0x5c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805DB2D0(void)
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
    beq lbl_fn_805DB2D0_000009AC
    li r4, 0x0
    bl fn_805D84C0
    cmpwi r31, 0x0
    ble lbl_fn_805DB2D0_000009AC
    mr r3, r30
    bl dtor_80084684
lbl_fn_805DB2D0_000009AC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805DB330(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    fmr f31, f1
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_805D8510
    cmpwi r3, 0x0
    beq lbl_fn_805DB330_00000A18
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    mr r31, r3
    b lbl_fn_805DB330_00000A1C
lbl_fn_805DB330_00000A18:
    li r31, 0x0
lbl_fn_805DB330_00000A1C:
    mr r3, r30
    bl fn_805D91A0
    xoris r3, r31, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80764638@ha
    stw r3, 0xc(r1)
    lfd f2, lbl_80764638@l(r4)
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fsubs f0, f31, f0
    stfs f0, 0x50(r30)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805DB3D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_805D8510
    cmpwi r3, 0x0
    beq lbl_fn_805DB3D0_00000AAC
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    mr r31, r3
    b lbl_fn_805DB3D0_00000AB0
lbl_fn_805DB3D0_00000AAC:
    li r31, 0x0
lbl_fn_805DB3D0_00000AB0:
    mr r3, r30
    bl fn_805D91A0
    xoris r3, r31, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80764638@ha
    stw r3, 0xc(r1)
    lfd f3, lbl_80764638@l(r4)
    stw r0, 0x8(r1)
    lfs f0, 0x50(r30)
    lfd f2, 0x8(r1)
    lwz r31, 0x1c(r1)
    fsubs f2, f2, f3
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    fmuls f1, f2, f1
    fadds f1, f0, f1
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805DB460(void)
{
    nofralloc
    stfs f1, 0x50(r3)
    blr
}

asm void fn_805DB470(void)
{
    nofralloc
    stfs f1, 0x4c(r3)
    blr
}

asm void fn_805DB480(void)
{
    nofralloc
    lfs f1, 0x50(r3)
    blr
}

asm void fn_805DB490(void)
{
    nofralloc
    lfs f1, 0x4c(r3)
    blr
}

asm void fn_805DB4A0(void)
{
    nofralloc
    stw r4, 0x54(r3)
    blr
}

asm void fn_805DB4B0(void)
{
    nofralloc
    lwz r3, 0x54(r3)
    blr
}

asm void fn_805DB4C0(void)
{
    nofralloc
    stw r4, 0x58(r3)
    blr
}

asm void fn_805DB4D0(void)
{
    nofralloc
    lwz r3, 0x58(r3)
    blr
}

asm void fn_805DB4E0(void)
{
    nofralloc
    stw r4, 0x5c(r3)
    blr
}

asm void fn_805DB4F0(void)
{
    nofralloc
    lis r4, lbl_807CA254@ha
    addi r4, r4, lbl_807CA254@l
    stw r4, 0x5c(r3)
    blr
}

asm void fn_805DB500(void)
{
    nofralloc
    lwz r3, 0x5c(r3)
    blr
}

asm void fn_805DB510(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x130
    bl _savegpr_15
    mr r31, r1
    mr r30, r3
    mr r16, r4
    bne cr1, lbl_fn_805DB510_00000BF4
    stfd f1, 0x28(r31)
    stfd f2, 0x30(r31)
    stfd f3, 0x38(r31)
    stfd f4, 0x40(r31)
    stfd f5, 0x48(r31)
    stfd f6, 0x50(r31)
    stfd f7, 0x58(r31)
    stfd f8, 0x60(r31)
lbl_fn_805DB510_00000BF4:
    lis r11, lbl_807CA250@ha
    lis r12, lbl_80764630@ha
    lwz r15, lbl_807CA250@l(r11)
    addi r11, r31, 0x138
    lfs f0, lbl_80764630@l(r12)
    addi r0, r31, 0x8
    cmpwi r15, 0x0
    lis r12, 0x200
    stw r3, 0x8(r31)
    stw r4, 0xc(r31)
    stw r5, 0x10(r31)
    stw r6, 0x14(r31)
    stw r7, 0x18(r31)
    stw r8, 0x1c(r31)
    stw r9, 0x20(r31)
    stw r10, 0x24(r31)
    stfs f0, 0x78(r31)
    stfs f0, 0x7c(r31)
    stfs f0, 0x80(r31)
    stfs f0, 0x84(r31)
    stw r12, 0x68(r31)
    stw r11, 0x6c(r31)
    stw r0, 0x70(r31)
    beq lbl_fn_805DB510_00000C58
    b lbl_fn_805DB510_00000C74
lbl_fn_805DB510_00000C58:
    lis r3, lbl_8079A730@ha
    lwz r0, 0x0(r1)
    lwz r3, lbl_8079A730@l(r3)
    neg r15, r3
    clrrwi r15, r15, 3
    stwux r0, r1, r15
    addi r15, r1, 0x8
lbl_fn_805DB510_00000C74:
    lis r4, lbl_8079A730@ha
    mr r3, r15
    lwz r4, lbl_8079A730@l(r4)
    mr r5, r16
    addi r6, r31, 0x68
    bl vsnprintf
    lwz r16, 0x0(r30)
    mr r5, r15
    lwz r17, 0x4(r30)
    mr r6, r3
    lwz r18, 0x8(r30)
    addi r3, r31, 0x88
    lwz r19, 0xc(r30)
    addi r4, r31, 0x78
    lwz r20, 0x10(r30)
    lwz r21, 0x14(r30)
    lwz r22, 0x18(r30)
    lwz r23, 0x1c(r30)
    lwz r24, 0x20(r30)
    lwz r25, 0x24(r30)
    lwz r26, 0x28(r30)
    lwz r27, 0x2c(r30)
    lwz r28, 0x30(r30)
    lwz r29, 0x34(r30)
    lwz r12, 0x38(r30)
    lwz r11, 0x3c(r30)
    lhz r10, 0x40(r30)
    lbz r9, 0x42(r30)
    lbz r8, 0x43(r30)
    lfs f2, 0x44(r30)
    lwz r7, 0x48(r30)
    lfs f1, 0x4c(r30)
    lfs f0, 0x50(r30)
    lwz r0, 0x54(r30)
    lwz r15, 0x58(r30)
    lwz r30, 0x5c(r30)
    stw r16, 0x88(r31)
    stw r17, 0x8c(r31)
    stw r18, 0x90(r31)
    stw r19, 0x94(r31)
    stw r20, 0x98(r31)
    stw r21, 0x9c(r31)
    stw r22, 0xa0(r31)
    stw r23, 0xa4(r31)
    stw r24, 0xa8(r31)
    stw r25, 0xac(r31)
    stw r26, 0xb0(r31)
    stw r27, 0xb4(r31)
    stw r28, 0xb8(r31)
    stw r29, 0xbc(r31)
    stw r12, 0xc0(r31)
    stw r11, 0xc4(r31)
    sth r10, 0xc8(r31)
    stb r9, 0xca(r31)
    stb r8, 0xcb(r31)
    stfs f2, 0xcc(r31)
    stw r7, 0xd0(r31)
    stfs f1, 0xd4(r31)
    stfs f0, 0xd8(r31)
    stw r0, 0xdc(r31)
    stw r15, 0xe0(r31)
    stw r30, 0xe4(r31)
    bl fn_805DD050
    addi r3, r31, 0x88
    li r4, 0x0
    bl fn_805D84C0
    mr r10, r31
    lfs f1, 0x80(r31)
    lfs f0, 0x78(r31)
    addi r11, r10, 0x130
    fsubs f1, f1, f0
    bl _restgpr_15
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_805DB710(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x130
    bl _savegpr_15
    mr r31, r1
    mr r30, r3
    mr r16, r4
    bne cr1, lbl_fn_805DB710_00000DF4
    stfd f1, 0x28(r31)
    stfd f2, 0x30(r31)
    stfd f3, 0x38(r31)
    stfd f4, 0x40(r31)
    stfd f5, 0x48(r31)
    stfd f6, 0x50(r31)
    stfd f7, 0x58(r31)
    stfd f8, 0x60(r31)
lbl_fn_805DB710_00000DF4:
    lis r11, lbl_807CA250@ha
    lis r12, lbl_80764630@ha
    lwz r15, lbl_807CA250@l(r11)
    addi r11, r31, 0x138
    lfs f0, lbl_80764630@l(r12)
    addi r0, r31, 0x8
    cmpwi r15, 0x0
    lis r12, 0x200
    stw r3, 0x8(r31)
    stw r4, 0xc(r31)
    stw r5, 0x10(r31)
    stw r6, 0x14(r31)
    stw r7, 0x18(r31)
    stw r8, 0x1c(r31)
    stw r9, 0x20(r31)
    stw r10, 0x24(r31)
    stfs f0, 0x78(r31)
    stfs f0, 0x7c(r31)
    stfs f0, 0x80(r31)
    stfs f0, 0x84(r31)
    stw r12, 0x68(r31)
    stw r11, 0x6c(r31)
    stw r0, 0x70(r31)
    beq lbl_fn_805DB710_00000E58
    b lbl_fn_805DB710_00000E74
lbl_fn_805DB710_00000E58:
    lis r3, lbl_8079A730@ha
    lwz r0, 0x0(r1)
    lwz r3, lbl_8079A730@l(r3)
    neg r15, r3
    clrrwi r15, r15, 3
    stwux r0, r1, r15
    addi r15, r1, 0x8
lbl_fn_805DB710_00000E74:
    lis r4, lbl_8079A730@ha
    mr r3, r15
    lwz r4, lbl_8079A730@l(r4)
    mr r5, r16
    addi r6, r31, 0x68
    bl vsnprintf
    lwz r16, 0x0(r30)
    mr r5, r15
    lwz r17, 0x4(r30)
    mr r6, r3
    lwz r18, 0x8(r30)
    addi r3, r31, 0x88
    lwz r19, 0xc(r30)
    addi r4, r31, 0x78
    lwz r20, 0x10(r30)
    lwz r21, 0x14(r30)
    lwz r22, 0x18(r30)
    lwz r23, 0x1c(r30)
    lwz r24, 0x20(r30)
    lwz r25, 0x24(r30)
    lwz r26, 0x28(r30)
    lwz r27, 0x2c(r30)
    lwz r28, 0x30(r30)
    lwz r29, 0x34(r30)
    lwz r12, 0x38(r30)
    lwz r11, 0x3c(r30)
    lhz r10, 0x40(r30)
    lbz r9, 0x42(r30)
    lbz r8, 0x43(r30)
    lfs f2, 0x44(r30)
    lwz r7, 0x48(r30)
    lfs f1, 0x4c(r30)
    lfs f0, 0x50(r30)
    lwz r0, 0x54(r30)
    lwz r15, 0x58(r30)
    lwz r30, 0x5c(r30)
    stw r16, 0x88(r31)
    stw r17, 0x8c(r31)
    stw r18, 0x90(r31)
    stw r19, 0x94(r31)
    stw r20, 0x98(r31)
    stw r21, 0x9c(r31)
    stw r22, 0xa0(r31)
    stw r23, 0xa4(r31)
    stw r24, 0xa8(r31)
    stw r25, 0xac(r31)
    stw r26, 0xb0(r31)
    stw r27, 0xb4(r31)
    stw r28, 0xb8(r31)
    stw r29, 0xbc(r31)
    stw r12, 0xc0(r31)
    stw r11, 0xc4(r31)
    sth r10, 0xc8(r31)
    stb r9, 0xca(r31)
    stb r8, 0xcb(r31)
    stfs f2, 0xcc(r31)
    stw r7, 0xd0(r31)
    stfs f1, 0xd4(r31)
    stfs f0, 0xd8(r31)
    stw r0, 0xdc(r31)
    stw r15, 0xe0(r31)
    stw r30, 0xe4(r31)
    bl fn_805DD050
    addi r3, r31, 0x88
    li r4, 0x0
    bl fn_805D84C0
    mr r10, r31
    lfs f1, 0x84(r31)
    lfs f0, 0x7c(r31)
    addi r11, r10, 0x130
    fsubs f1, f1, f0
    bl _restgpr_15
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_805DB910(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x120
    bl _savegpr_15
    mr r31, r1
    mr r30, r3
    mr r18, r4
    bne cr1, lbl_fn_805DB910_00000FF4
    stfd f1, 0x28(r31)
    stfd f2, 0x30(r31)
    stfd f3, 0x38(r31)
    stfd f4, 0x40(r31)
    stfd f5, 0x48(r31)
    stfd f6, 0x50(r31)
    stfd f7, 0x58(r31)
    stfd f8, 0x60(r31)
lbl_fn_805DB910_00000FF4:
    lis r11, lbl_807CA250@ha
    addi r12, r31, 0x128
    lwz r15, lbl_807CA250@l(r11)
    addi r0, r31, 0x8
    lis r11, 0x300
    stw r3, 0x8(r31)
    cmpwi r15, 0x0
    stw r4, 0xc(r31)
    stw r5, 0x10(r31)
    stw r6, 0x14(r31)
    stw r7, 0x18(r31)
    stw r8, 0x1c(r31)
    stw r9, 0x20(r31)
    stw r10, 0x24(r31)
    stw r11, 0x68(r31)
    stw r12, 0x6c(r31)
    stw r0, 0x70(r31)
    beq lbl_fn_805DB910_00001040
    b lbl_fn_805DB910_0000105C
lbl_fn_805DB910_00001040:
    lis r3, lbl_8079A730@ha
    lwz r0, 0x0(r1)
    lwz r3, lbl_8079A730@l(r3)
    neg r15, r3
    clrrwi r15, r15, 3
    stwux r0, r1, r15
    addi r15, r1, 0x8
lbl_fn_805DB910_0000105C:
    lis r4, lbl_8079A730@ha
    mr r3, r15
    lwz r4, lbl_8079A730@l(r4)
    addi r6, r31, 0x68
    bl vsnprintf
    lwz r16, 0x0(r30)
    mr r4, r18
    lwz r17, 0x4(r30)
    mr r5, r15
    lwz r18, 0x8(r30)
    mr r6, r3
    lwz r19, 0xc(r30)
    addi r3, r31, 0x78
    lwz r20, 0x10(r30)
    lwz r21, 0x14(r30)
    lwz r22, 0x18(r30)
    lwz r23, 0x1c(r30)
    lwz r24, 0x20(r30)
    lwz r25, 0x24(r30)
    lwz r26, 0x28(r30)
    lwz r27, 0x2c(r30)
    lwz r28, 0x30(r30)
    lwz r29, 0x34(r30)
    lwz r12, 0x38(r30)
    lwz r11, 0x3c(r30)
    lhz r10, 0x40(r30)
    lbz r9, 0x42(r30)
    lbz r8, 0x43(r30)
    lfs f2, 0x44(r30)
    lwz r7, 0x48(r30)
    lfs f1, 0x4c(r30)
    lfs f0, 0x50(r30)
    lwz r0, 0x54(r30)
    lwz r15, 0x58(r30)
    lwz r30, 0x5c(r30)
    stw r16, 0x78(r31)
    stw r17, 0x7c(r31)
    stw r18, 0x80(r31)
    stw r19, 0x84(r31)
    stw r20, 0x88(r31)
    stw r21, 0x8c(r31)
    stw r22, 0x90(r31)
    stw r23, 0x94(r31)
    stw r24, 0x98(r31)
    stw r25, 0x9c(r31)
    stw r26, 0xa0(r31)
    stw r27, 0xa4(r31)
    stw r28, 0xa8(r31)
    stw r29, 0xac(r31)
    stw r12, 0xb0(r31)
    stw r11, 0xb4(r31)
    sth r10, 0xb8(r31)
    stb r9, 0xba(r31)
    stb r8, 0xbb(r31)
    stfs f2, 0xbc(r31)
    stw r7, 0xc0(r31)
    stfs f1, 0xc4(r31)
    stfs f0, 0xc8(r31)
    stw r0, 0xcc(r31)
    stw r15, 0xd0(r31)
    stw r30, 0xd4(r31)
    bl fn_805DD050
    addi r3, r31, 0x78
    li r4, 0x0
    bl fn_805D84C0
    mr r10, r31
    addi r11, r10, 0x120
    bl _restgpr_15
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_805DBAE0(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_15
    mr r31, r1
    lis r7, lbl_807CA250@ha
    mr r30, r3
    lwz r15, lbl_807CA250@l(r7)
    mr r18, r4
    cmpwi r15, 0x0
    beq lbl_fn_805DBAE0_000011B4
    b lbl_fn_805DBAE0_000011D0
lbl_fn_805DBAE0_000011B4:
    lis r3, lbl_8079A730@ha
    lwz r0, 0x0(r1)
    lwz r3, lbl_8079A730@l(r3)
    neg r15, r3
    clrrwi r15, r15, 3
    stwux r0, r1, r15
    addi r15, r1, 0x8
lbl_fn_805DBAE0_000011D0:
    lis r4, lbl_8079A730@ha
    mr r3, r15
    lwz r4, lbl_8079A730@l(r4)
    bl vsnprintf
    lwz r16, 0x0(r30)
    mr r4, r18
    lwz r17, 0x4(r30)
    mr r5, r15
    lwz r18, 0x8(r30)
    mr r6, r3
    lwz r19, 0xc(r30)
    addi r3, r31, 0x8
    lwz r20, 0x10(r30)
    lwz r21, 0x14(r30)
    lwz r22, 0x18(r30)
    lwz r23, 0x1c(r30)
    lwz r24, 0x20(r30)
    lwz r25, 0x24(r30)
    lwz r26, 0x28(r30)
    lwz r27, 0x2c(r30)
    lwz r28, 0x30(r30)
    lwz r29, 0x34(r30)
    lwz r12, 0x38(r30)
    lwz r11, 0x3c(r30)
    lhz r10, 0x40(r30)
    lbz r9, 0x42(r30)
    lbz r8, 0x43(r30)
    lfs f2, 0x44(r30)
    lwz r7, 0x48(r30)
    lfs f1, 0x4c(r30)
    lfs f0, 0x50(r30)
    lwz r0, 0x54(r30)
    lwz r15, 0x58(r30)
    lwz r30, 0x5c(r30)
    stw r16, 0x8(r31)
    stw r17, 0xc(r31)
    stw r18, 0x10(r31)
    stw r19, 0x14(r31)
    stw r20, 0x18(r31)
    stw r21, 0x1c(r31)
    stw r22, 0x20(r31)
    stw r23, 0x24(r31)
    stw r24, 0x28(r31)
    stw r25, 0x2c(r31)
    stw r26, 0x30(r31)
    stw r27, 0x34(r31)
    stw r28, 0x38(r31)
    stw r29, 0x3c(r31)
    stw r12, 0x40(r31)
    stw r11, 0x44(r31)
    sth r10, 0x48(r31)
    stb r9, 0x4a(r31)
    stb r8, 0x4b(r31)
    stfs f2, 0x4c(r31)
    stw r7, 0x50(r31)
    stfs f1, 0x54(r31)
    stfs f0, 0x58(r31)
    stw r0, 0x5c(r31)
    stw r15, 0x60(r31)
    stw r30, 0x64(r31)
    bl fn_805DD050
    addi r3, r31, 0x8
    li r4, 0x0
    bl fn_805D84C0
    mr r10, r31
    addi r11, r10, 0xb0
    bl _restgpr_15
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_805DBC50(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_16
    lis r6, lbl_80764630@ha
    lwz r16, 0x0(r3)
    lfs f3, lbl_80764630@l(r6)
    mr r6, r5
    lwz r17, 0x4(r3)
    mr r5, r4
    lwz r18, 0x8(r3)
    addi r4, r1, 0x8
    lwz r19, 0xc(r3)
    lwz r20, 0x10(r3)
    lwz r21, 0x14(r3)
    lwz r22, 0x18(r3)
    lwz r23, 0x1c(r3)
    lwz r24, 0x20(r3)
    lwz r25, 0x24(r3)
    lwz r26, 0x28(r3)
    lwz r27, 0x2c(r3)
    lwz r28, 0x30(r3)
    lwz r29, 0x34(r3)
    lwz r30, 0x38(r3)
    lwz r31, 0x3c(r3)
    lhz r12, 0x40(r3)
    lbz r11, 0x42(r3)
    lbz r10, 0x43(r3)
    lfs f2, 0x44(r3)
    lwz r9, 0x48(r3)
    lfs f1, 0x4c(r3)
    lfs f0, 0x50(r3)
    lwz r8, 0x54(r3)
    lwz r7, 0x58(r3)
    lwz r0, 0x5c(r3)
    addi r3, r1, 0x18
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f3, 0x10(r1)
    stfs f3, 0x14(r1)
    stw r16, 0x18(r1)
    stw r17, 0x1c(r1)
    stw r18, 0x20(r1)
    stw r19, 0x24(r1)
    stw r20, 0x28(r1)
    stw r21, 0x2c(r1)
    stw r22, 0x30(r1)
    stw r23, 0x34(r1)
    stw r24, 0x38(r1)
    stw r25, 0x3c(r1)
    stw r26, 0x40(r1)
    stw r27, 0x44(r1)
    stw r28, 0x48(r1)
    stw r29, 0x4c(r1)
    stw r30, 0x50(r1)
    stw r31, 0x54(r1)
    sth r12, 0x58(r1)
    stb r11, 0x5a(r1)
    stb r10, 0x5b(r1)
    stfs f2, 0x5c(r1)
    stw r9, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f0, 0x68(r1)
    stw r8, 0x6c(r1)
    stw r7, 0x70(r1)
    stw r0, 0x74(r1)
    bl fn_805DD050
    addi r3, r1, 0x18
    li r4, 0x0
    bl fn_805D84C0
    lfs f1, 0x10(r1)
    addi r11, r1, 0xc0
    lfs f0, 0x8(r1)
    fsubs f1, f1, f0
    bl _restgpr_16
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_805DBD90(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_15
    mr r17, r4
    mr r31, r3
    mr r3, r17
    bl strlen
    lis r4, lbl_80764630@ha
    lwz r15, 0x0(r31)
    lfs f3, lbl_80764630@l(r4)
    mr r5, r17
    lwz r16, 0x4(r31)
    mr r6, r3
    lwz r17, 0x8(r31)
    addi r3, r1, 0x18
    lwz r18, 0xc(r31)
    addi r4, r1, 0x8
    lwz r19, 0x10(r31)
    lwz r20, 0x14(r31)
    lwz r21, 0x18(r31)
    lwz r22, 0x1c(r31)
    lwz r23, 0x20(r31)
    lwz r24, 0x24(r31)
    lwz r25, 0x28(r31)
    lwz r26, 0x2c(r31)
    lwz r27, 0x30(r31)
    lwz r28, 0x34(r31)
    lwz r29, 0x38(r31)
    lwz r30, 0x3c(r31)
    lhz r12, 0x40(r31)
    lbz r11, 0x42(r31)
    lbz r10, 0x43(r31)
    lfs f2, 0x44(r31)
    lwz r9, 0x48(r31)
    lfs f1, 0x4c(r31)
    lfs f0, 0x50(r31)
    lwz r8, 0x54(r31)
    lwz r7, 0x58(r31)
    lwz r0, 0x5c(r31)
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f3, 0x10(r1)
    stfs f3, 0x14(r1)
    stw r15, 0x18(r1)
    stw r16, 0x1c(r1)
    stw r17, 0x20(r1)
    stw r18, 0x24(r1)
    stw r19, 0x28(r1)
    stw r20, 0x2c(r1)
    stw r21, 0x30(r1)
    stw r22, 0x34(r1)
    stw r23, 0x38(r1)
    stw r24, 0x3c(r1)
    stw r25, 0x40(r1)
    stw r26, 0x44(r1)
    stw r27, 0x48(r1)
    stw r28, 0x4c(r1)
    stw r29, 0x50(r1)
    stw r30, 0x54(r1)
    sth r12, 0x58(r1)
    stb r11, 0x5a(r1)
    stb r10, 0x5b(r1)
    stfs f2, 0x5c(r1)
    stw r9, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f0, 0x68(r1)
    stw r8, 0x6c(r1)
    stw r7, 0x70(r1)
    stw r0, 0x74(r1)
    bl fn_805DD050
    addi r3, r1, 0x18
    li r4, 0x0
    bl fn_805D84C0
    lfs f1, 0x10(r1)
    addi r11, r1, 0xc0
    lfs f0, 0x8(r1)
    fsubs f1, f1, f0
    bl _restgpr_15
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_805DBEE0(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_16
    lis r6, lbl_80764630@ha
    lwz r16, 0x0(r3)
    lfs f3, lbl_80764630@l(r6)
    mr r6, r5
    lwz r17, 0x4(r3)
    mr r5, r4
    lwz r18, 0x8(r3)
    addi r4, r1, 0x8
    lwz r19, 0xc(r3)
    lwz r20, 0x10(r3)
    lwz r21, 0x14(r3)
    lwz r22, 0x18(r3)
    lwz r23, 0x1c(r3)
    lwz r24, 0x20(r3)
    lwz r25, 0x24(r3)
    lwz r26, 0x28(r3)
    lwz r27, 0x2c(r3)
    lwz r28, 0x30(r3)
    lwz r29, 0x34(r3)
    lwz r30, 0x38(r3)
    lwz r31, 0x3c(r3)
    lhz r12, 0x40(r3)
    lbz r11, 0x42(r3)
    lbz r10, 0x43(r3)
    lfs f2, 0x44(r3)
    lwz r9, 0x48(r3)
    lfs f1, 0x4c(r3)
    lfs f0, 0x50(r3)
    lwz r8, 0x54(r3)
    lwz r7, 0x58(r3)
    lwz r0, 0x5c(r3)
    addi r3, r1, 0x18
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f3, 0x10(r1)
    stfs f3, 0x14(r1)
    stw r16, 0x18(r1)
    stw r17, 0x1c(r1)
    stw r18, 0x20(r1)
    stw r19, 0x24(r1)
    stw r20, 0x28(r1)
    stw r21, 0x2c(r1)
    stw r22, 0x30(r1)
    stw r23, 0x34(r1)
    stw r24, 0x38(r1)
    stw r25, 0x3c(r1)
    stw r26, 0x40(r1)
    stw r27, 0x44(r1)
    stw r28, 0x48(r1)
    stw r29, 0x4c(r1)
    stw r30, 0x50(r1)
    stw r31, 0x54(r1)
    sth r12, 0x58(r1)
    stb r11, 0x5a(r1)
    stb r10, 0x5b(r1)
    stfs f2, 0x5c(r1)
    stw r9, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f0, 0x68(r1)
    stw r8, 0x6c(r1)
    stw r7, 0x70(r1)
    stw r0, 0x74(r1)
    bl fn_805DD050
    addi r3, r1, 0x18
    li r4, 0x0
    bl fn_805D84C0
    lfs f1, 0x14(r1)
    addi r11, r1, 0xc0
    lfs f0, 0xc(r1)
    fsubs f1, f1, f0
    bl _restgpr_16
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_805DC020(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_15
    mr r17, r4
    mr r31, r3
    mr r3, r17
    bl strlen
    lis r4, lbl_80764630@ha
    lwz r15, 0x0(r31)
    lfs f3, lbl_80764630@l(r4)
    mr r5, r17
    lwz r16, 0x4(r31)
    mr r6, r3
    lwz r17, 0x8(r31)
    addi r3, r1, 0x18
    lwz r18, 0xc(r31)
    addi r4, r1, 0x8
    lwz r19, 0x10(r31)
    lwz r20, 0x14(r31)
    lwz r21, 0x18(r31)
    lwz r22, 0x1c(r31)
    lwz r23, 0x20(r31)
    lwz r24, 0x24(r31)
    lwz r25, 0x28(r31)
    lwz r26, 0x2c(r31)
    lwz r27, 0x30(r31)
    lwz r28, 0x34(r31)
    lwz r29, 0x38(r31)
    lwz r30, 0x3c(r31)
    lhz r12, 0x40(r31)
    lbz r11, 0x42(r31)
    lbz r10, 0x43(r31)
    lfs f2, 0x44(r31)
    lwz r9, 0x48(r31)
    lfs f1, 0x4c(r31)
    lfs f0, 0x50(r31)
    lwz r8, 0x54(r31)
    lwz r7, 0x58(r31)
    lwz r0, 0x5c(r31)
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f3, 0x10(r1)
    stfs f3, 0x14(r1)
    stw r15, 0x18(r1)
    stw r16, 0x1c(r1)
    stw r17, 0x20(r1)
    stw r18, 0x24(r1)
    stw r19, 0x28(r1)
    stw r20, 0x2c(r1)
    stw r21, 0x30(r1)
    stw r22, 0x34(r1)
    stw r23, 0x38(r1)
    stw r24, 0x3c(r1)
    stw r25, 0x40(r1)
    stw r26, 0x44(r1)
    stw r27, 0x48(r1)
    stw r28, 0x4c(r1)
    stw r29, 0x50(r1)
    stw r30, 0x54(r1)
    sth r12, 0x58(r1)
    stb r11, 0x5a(r1)
    stb r10, 0x5b(r1)
    stfs f2, 0x5c(r1)
    stw r9, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f0, 0x68(r1)
    stw r8, 0x6c(r1)
    stw r7, 0x70(r1)
    stw r0, 0x74(r1)
    bl fn_805DD050
    addi r3, r1, 0x18
    li r4, 0x0
    bl fn_805D84C0
    lfs f1, 0x14(r1)
    addi r11, r1, 0xc0
    lfs f0, 0xc(r1)
    fsubs f1, f1, f0
    bl _restgpr_15
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_805DC170(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_16
    lwz r16, 0x0(r3)
    lwz r17, 0x4(r3)
    lwz r18, 0x8(r3)
    lwz r19, 0xc(r3)
    lwz r20, 0x10(r3)
    lwz r21, 0x14(r3)
    lwz r22, 0x18(r3)
    lwz r23, 0x1c(r3)
    lwz r24, 0x20(r3)
    lwz r25, 0x24(r3)
    lwz r26, 0x28(r3)
    lwz r27, 0x2c(r3)
    lwz r28, 0x30(r3)
    lwz r29, 0x34(r3)
    lwz r30, 0x38(r3)
    lwz r31, 0x3c(r3)
    lhz r12, 0x40(r3)
    lbz r11, 0x42(r3)
    lbz r10, 0x43(r3)
    lfs f2, 0x44(r3)
    lwz r9, 0x48(r3)
    lfs f1, 0x4c(r3)
    lfs f0, 0x50(r3)
    lwz r8, 0x54(r3)
    lwz r7, 0x58(r3)
    lwz r0, 0x5c(r3)
    addi r3, r1, 0x8
    stw r16, 0x8(r1)
    stw r17, 0xc(r1)
    stw r18, 0x10(r1)
    stw r19, 0x14(r1)
    stw r20, 0x18(r1)
    stw r21, 0x1c(r1)
    stw r22, 0x20(r1)
    stw r23, 0x24(r1)
    stw r24, 0x28(r1)
    stw r25, 0x2c(r1)
    stw r26, 0x30(r1)
    stw r27, 0x34(r1)
    stw r28, 0x38(r1)
    stw r29, 0x3c(r1)
    stw r30, 0x40(r1)
    stw r31, 0x44(r1)
    sth r12, 0x48(r1)
    stb r11, 0x4a(r1)
    stb r10, 0x4b(r1)
    stfs f2, 0x4c(r1)
    stw r9, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f0, 0x58(r1)
    stw r8, 0x5c(r1)
    stw r7, 0x60(r1)
    stw r0, 0x64(r1)
    bl fn_805DD050
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_805D84C0
    addi r11, r1, 0xb0
    bl _restgpr_16
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_805DC280(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_15
    mr r18, r5
    mr r31, r3
    mr r17, r4
    mr r3, r18
    bl strlen
    lwz r15, 0x0(r31)
    mr r4, r17
    lwz r16, 0x4(r31)
    mr r5, r18
    lwz r17, 0x8(r31)
    mr r6, r3
    lwz r18, 0xc(r31)
    addi r3, r1, 0x8
    lwz r19, 0x10(r31)
    lwz r20, 0x14(r31)
    lwz r21, 0x18(r31)
    lwz r22, 0x1c(r31)
    lwz r23, 0x20(r31)
    lwz r24, 0x24(r31)
    lwz r25, 0x28(r31)
    lwz r26, 0x2c(r31)
    lwz r27, 0x30(r31)
    lwz r28, 0x34(r31)
    lwz r29, 0x38(r31)
    lwz r30, 0x3c(r31)
    lhz r12, 0x40(r31)
    lbz r11, 0x42(r31)
    lbz r10, 0x43(r31)
    lfs f2, 0x44(r31)
    lwz r9, 0x48(r31)
    lfs f1, 0x4c(r31)
    lfs f0, 0x50(r31)
    lwz r8, 0x54(r31)
    lwz r7, 0x58(r31)
    lwz r0, 0x5c(r31)
    stw r15, 0x8(r1)
    stw r16, 0xc(r1)
    stw r17, 0x10(r1)
    stw r18, 0x14(r1)
    stw r19, 0x18(r1)
    stw r20, 0x1c(r1)
    stw r21, 0x20(r1)
    stw r22, 0x24(r1)
    stw r23, 0x28(r1)
    stw r24, 0x2c(r1)
    stw r25, 0x30(r1)
    stw r26, 0x34(r1)
    stw r27, 0x38(r1)
    stw r28, 0x3c(r1)
    stw r29, 0x40(r1)
    stw r30, 0x44(r1)
    sth r12, 0x48(r1)
    stb r11, 0x4a(r1)
    stb r10, 0x4b(r1)
    stfs f2, 0x4c(r1)
    stw r9, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f0, 0x58(r1)
    stw r8, 0x5c(r1)
    stw r7, 0x60(r1)
    stw r0, 0x64(r1)
    bl fn_805DD050
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_805D84C0
    addi r11, r1, 0xb0
    bl _restgpr_15
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}
